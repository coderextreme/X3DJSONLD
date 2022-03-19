#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
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
meta3.content = "HAnim1SpecificationLOA3Animation.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "description";
meta4.content = "HAnim Specification reference example providing full coverage and visibility of all specified HAnim constructs, plus motion animations. Geometry visualizations are derived from HAnim1SpecificationLOA3Invisible.x3d visualization report. Resusable exemplar animations also added via heads-up display (HUD) interface to confirm proper parent-child relationships.";
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
meta7.content = "19 February 2021";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "Image";
meta8.content = "HAnim1SpecificationLOA3MotionH3DViewer.png";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "Image";
meta9.content = "HAnim1SpecificationLOA3MotionInstantReality.png";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "Image";
meta10.content = "HAnim1SpecificationLOA3MotionOctagaVS.png";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "Image";
meta11.content = "HAnim1SpecificationLOA3MotionView3dscene.png";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "reference";
meta12.content = "HAnim1SpecificationLOA3Illustrated.x3d";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "reference";
meta13.content = "HAnim1SpecificationLOA3Invisible.x3d";
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
meta18.name = "reference";
meta18.content = "Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989.";
head1.meta[16] = meta18;

meta meta19 = createNode("meta");
meta19.name = "reference";
meta19.content = "http://www.cis.upenn.edu/~badler/anthro/89-71.ps";
head1.meta[17] = meta19;

meta meta20 = createNode("meta");
meta20.name = "reference";
meta20.content = "tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf";
head1.meta[18] = meta20;

meta meta21 = createNode("meta");
meta21.name = "creator";
meta21.content = "Matthew T. Beitler, Joe D. Williams, Don Brutzman";
head1.meta[19] = meta21;

meta meta22 = createNode("meta");
meta22.name = "translator";
meta22.content = "Don Brutzman and Joe Williams";
head1.meta[20] = meta22;

meta meta23 = createNode("meta");
meta23.name = "generator";
meta23.content = "BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo";
head1.meta[21] = meta23;

meta meta24 = createNode("meta");
meta24.name = "reference";
meta24.content = "originals/LOA3ExampleSourceWithDiamondsOriginal.wrl";
head1.meta[22] = meta24;

meta meta25 = createNode("meta");
meta25.name = "reference";
meta25.content = "originals/LOA3ExampleSourceWithDiamondsOriginal.x3d";
head1.meta[23] = meta25;

meta meta26 = createNode("meta");
meta26.name = "reference";
meta26.content = "originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d";
head1.meta[24] = meta26;

meta meta27 = createNode("meta");
meta27.name = "generator";
meta27.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[25] = meta27;

meta meta28 = createNode("meta");
meta28.name = "identifier";
meta28.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/HAnim1SpecificationLOA3Animation.x3d";
head1.meta[26] = meta28;

meta meta29 = createNode("meta");
meta29.name = "license";
meta29.content = "../license.html";
head1.meta[27] = meta29;

head = head1;

Background Background31 = createNode("Background");
Background31.skyColor = new MFColor(new float[0.3,0.3,0.3]);
children = new MFNode();

children[0] = Background31;

NavigationInfo NavigationInfo32 = createNode("NavigationInfo");
children[1] = NavigationInfo32;

Group Group33 = createNode("Group");
Group33.DEF = "Original_WorldInfo";
WorldInfo WorldInfo34 = createNode("WorldInfo");
WorldInfo34.info = new MFString(new java.lang.String[" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "]);
WorldInfo34.title = "HANIM 200x Default Joint Centers, LOA3";
Group33.children = new MFNode();

Group33.children[0] = WorldInfo34;

children[2] = Group33;

//TODO move viewpoints to be internal to HAnimHumanoid
//Viewpoint centerOfRotation=\"0 0.9149 0.0016\" matches initial at-rest locaton of the sacroliac. Note that these viewpoints are external to the HAnimHumanoid and do not move with the human.
Viewpoint Viewpoint35 = createNode("Viewpoint");
Viewpoint35.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint35.description = "Humanoid LOA 3 Front";
Viewpoint35.position = new SFVec3f(new float[0,0.4,4]);
children[3] = Viewpoint35;

Viewpoint Viewpoint36 = createNode("Viewpoint");
Viewpoint36.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint36.description = "Humanoid LOA 3 Front Close";
Viewpoint36.position = new SFVec3f(new float[0,0.8,2]);
children[4] = Viewpoint36;

Viewpoint Viewpoint37 = createNode("Viewpoint");
Viewpoint37.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint37.description = "Humanoid LOA 3 Front Closer";
Viewpoint37.position = new SFVec3f(new float[0,1.2,1]);
children[5] = Viewpoint37;

Viewpoint Viewpoint38 = createNode("Viewpoint");
Viewpoint38.centerOfRotation = new SFVec3f(new float[0,1.5,0.0016]);
Viewpoint38.description = "Humanoid LOA 3 Front Face";
Viewpoint38.position = new SFVec3f(new float[0,1.63,1]);
children[6] = Viewpoint38;

Viewpoint Viewpoint39 = createNode("Viewpoint");
Viewpoint39.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint39.description = "Humanoid LOA 3 Right Side";
Viewpoint39.orientation = new SFRotation(new float[0,1,0,1.5708]);
Viewpoint39.position = new SFVec3f(new float[2.6,0.8,0]);
children[7] = Viewpoint39;

Viewpoint Viewpoint40 = createNode("Viewpoint");
Viewpoint40.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint40.description = "Humanoid LOA 3 Right Side Close";
Viewpoint40.orientation = new SFRotation(new float[0,1,0,1.2]);
Viewpoint40.position = new SFVec3f(new float[1,0.8,0.5]);
children[8] = Viewpoint40;

Viewpoint Viewpoint41 = createNode("Viewpoint");
Viewpoint41.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint41.description = "Humanoid LOA 3 Left Side Close";
Viewpoint41.orientation = new SFRotation(new float[0,1,0,-1.2]);
Viewpoint41.position = new SFVec3f(new float[-1,0.8,0.5]);
children[9] = Viewpoint41;

Viewpoint Viewpoint42 = createNode("Viewpoint");
Viewpoint42.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint42.description = "Humanoid LOA 3 Left Side";
Viewpoint42.orientation = new SFRotation(new float[0,1,0,-1.5708]);
Viewpoint42.position = new SFVec3f(new float[-2.6,0.8,0]);
children[10] = Viewpoint42;

Viewpoint Viewpoint43 = createNode("Viewpoint");
Viewpoint43.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint43.description = "Humanoid LOA 3 Top";
Viewpoint43.orientation = new SFRotation(new float[1,0,0,-1.5708]);
Viewpoint43.position = new SFVec3f(new float[0,3.5,0]);
children[11] = Viewpoint43;

HAnimHumanoid HAnimHumanoid44 = createNode("HAnimHumanoid");
HAnimHumanoid44.name = "humanoid";
HAnimHumanoid44.DEF = "hanim_humanoid";
HAnimHumanoid44.info = new MFString(new java.lang.String["authorName=Matthew T. Beitler Joe D. Williams Don Brutzman","authorEmail=HAnim@web3D.org","copyright=none","creationDate=12 May 1999","usageRestrictions=none","humanoidVersion=1.0","height=1.7504"]);
HAnimHumanoid44.version = "1.0";
HAnimJoint HAnimJoint45 = createNode("HAnimJoint");
HAnimJoint45.name = "humanoid_root";
HAnimJoint45.DEF = "hanim_humanoid_root";
HAnimJoint45.center = new SFVec3f(new float[0,0.824,0.0277]);
HAnimJoint45.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint45.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment46 = createNode("HAnimSegment");
HAnimSegment46.name = "sacrum";
HAnimSegment46.DEF = "hanim_sacrum";
//<HAnimJoint name='humanoid_root'/> visualization sphere within <HAnimSegment name='sacrum'/>
TouchSensor TouchSensor47 = createNode("TouchSensor");
TouchSensor47.description = "HAnimJoint HumanoidRoot, HAnimSegment sacrum";
HAnimSegment46.children = new MFNode();

HAnimSegment46.children[0] = TouchSensor47;

Transform Transform48 = createNode("Transform");
Transform48.translation = new SFVec3f(new float[0,0.824,0.0277]);
Shape Shape49 = createNode("Shape");
Shape49.DEF = "HAnimJointShape";
Sphere Sphere50 = createNode("Sphere");
Sphere50.radius = 0.006;
Shape49.geometry = Sphere50;

Appearance Appearance51 = createNode("Appearance");
Appearance51.DEF = "HAnimJointAppearance";
Material Material52 = createNode("Material");
Material52.diffuseColor = new SFColor(new float[1,0.5,0]);
Material52.transparency = 0.5;
Appearance51.material = Material52;

Shape49.appearance = Appearance51;

Transform48.children = new MFNode();

Transform48.children[0] = Shape49;

HAnimSegment46.children[1] = Transform48;

//HAnimSegment visualization line segment from parent <HAnimJoint name='humanoid_root'/> to <HAnimJoint name='sacroiliac'/>
Shape Shape53 = createNode("Shape");
LineSet LineSet54 = createNode("LineSet");
LineSet54.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate55 = createNode("Coordinate");
Coordinate55.point = new MFVec3f(new float[0,0.824,0.0277,0,0.9149,0.0016]);
LineSet54.coord = Coordinate55;

ColorRGBA ColorRGBA56 = createNode("ColorRGBA");
ColorRGBA56.DEF = "HAnimSegmentLineColorRGBA";
ColorRGBA56.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1]);
LineSet54.color = ColorRGBA56;

Shape53.geometry = LineSet54;

HAnimSegment46.children[2] = Shape53;

//HAnimSegment visualization line segment from parent <HAnimJoint name='humanoid_root'/> to <HAnimJoint name='vl5'/>
Shape Shape57 = createNode("Shape");
LineSet LineSet58 = createNode("LineSet");
LineSet58.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate59 = createNode("Coordinate");
Coordinate59.point = new MFVec3f(new float[0,0.824,0.0277,0.0028,1.0568,-0.0776]);
LineSet58.coord = Coordinate59;

ColorRGBA ColorRGBA60 = createNode("ColorRGBA");
ColorRGBA60.USE = "HAnimSegmentLineColorRGBA";
LineSet58.color = ColorRGBA60;

Shape57.geometry = LineSet58;

HAnimSegment46.children[3] = Shape57;

HAnimJoint45.children = new MFNode();

HAnimJoint45.children[0] = HAnimSegment46;

HAnimJoint HAnimJoint61 = createNode("HAnimJoint");
HAnimJoint61.name = "sacroiliac";
HAnimJoint61.DEF = "hanim_sacroiliac";
HAnimJoint61.center = new SFVec3f(new float[0,0.9149,0.0016]);
HAnimJoint61.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint61.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment62 = createNode("HAnimSegment");
HAnimSegment62.name = "pelvis";
HAnimSegment62.DEF = "hanim_pelvis";
//<HAnimJoint name='sacroiliac'/> visualization sphere within <HAnimSegment name='pelvis'/>
TouchSensor TouchSensor63 = createNode("TouchSensor");
TouchSensor63.description = "HAnimJoint sacroiliac, HAnimSegment pelvis";
HAnimSegment62.children = new MFNode();

HAnimSegment62.children[0] = TouchSensor63;

Transform Transform64 = createNode("Transform");
Transform64.translation = new SFVec3f(new float[0,0.9149,0.0016]);
Shape Shape65 = createNode("Shape");
Shape65.USE = "HAnimJointShape";
Transform64.children = new MFNode();

Transform64.children[0] = Shape65;

HAnimSegment62.children[1] = Transform64;

//HAnimSegment visualization line segment from parent <HAnimJoint name='sacroiliac'/> to <HAnimJoint name='l_hip'/>
Shape Shape66 = createNode("Shape");
LineSet LineSet67 = createNode("LineSet");
LineSet67.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate68 = createNode("Coordinate");
Coordinate68.point = new MFVec3f(new float[0,0.9149,0.0016,0.0961,0.9124,-0.0001]);
LineSet67.coord = Coordinate68;

ColorRGBA ColorRGBA69 = createNode("ColorRGBA");
ColorRGBA69.USE = "HAnimSegmentLineColorRGBA";
LineSet67.color = ColorRGBA69;

Shape66.geometry = LineSet67;

HAnimSegment62.children[2] = Shape66;

//HAnimSegment visualization line segment from parent <HAnimJoint name='sacroiliac'/> to <HAnimJoint name='r_hip'/>
Shape Shape70 = createNode("Shape");
LineSet LineSet71 = createNode("LineSet");
LineSet71.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate72 = createNode("Coordinate");
Coordinate72.point = new MFVec3f(new float[0,0.9149,0.0016,-0.0961,0.9124,-0.0001]);
LineSet71.coord = Coordinate72;

ColorRGBA ColorRGBA73 = createNode("ColorRGBA");
ColorRGBA73.USE = "HAnimSegmentLineColorRGBA";
LineSet71.color = ColorRGBA73;

Shape70.geometry = LineSet71;

HAnimSegment62.children[3] = Shape70;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_iliocristale'/>
Shape Shape74 = createNode("Shape");
LineSet LineSet75 = createNode("LineSet");
LineSet75.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate76 = createNode("Coordinate");
Coordinate76.point = new MFVec3f(new float[0,0.9149,0.0016,-0.1525,1.0628,0.0035]);
LineSet75.coord = Coordinate76;

ColorRGBA ColorRGBA77 = createNode("ColorRGBA");
ColorRGBA77.DEF = "HAnimSiteLineColorRGBA";
ColorRGBA77.color = new MFColorRGBA(new float[1,0,0,1,1,0,0,0.1]);
LineSet75.color = ColorRGBA77;

Shape74.geometry = LineSet75;

HAnimSegment62.children[4] = Shape74;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_trochanterion'/>
Shape Shape78 = createNode("Shape");
LineSet LineSet79 = createNode("LineSet");
LineSet79.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate80 = createNode("Coordinate");
Coordinate80.point = new MFVec3f(new float[0,0.9149,0.0016,-0.1689,0.8419,0.0352]);
LineSet79.coord = Coordinate80;

ColorRGBA ColorRGBA81 = createNode("ColorRGBA");
ColorRGBA81.USE = "HAnimSiteLineColorRGBA";
LineSet79.color = ColorRGBA81;

Shape78.geometry = LineSet79;

HAnimSegment62.children[5] = Shape78;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_iliocristale'/>
Shape Shape82 = createNode("Shape");
LineSet LineSet83 = createNode("LineSet");
LineSet83.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate84 = createNode("Coordinate");
Coordinate84.point = new MFVec3f(new float[0,0.9149,0.0016,0.1612,1.0537,0.0008]);
LineSet83.coord = Coordinate84;

ColorRGBA ColorRGBA85 = createNode("ColorRGBA");
ColorRGBA85.USE = "HAnimSiteLineColorRGBA";
LineSet83.color = ColorRGBA85;

Shape82.geometry = LineSet83;

HAnimSegment62.children[6] = Shape82;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_trochanterion'/>
Shape Shape86 = createNode("Shape");
LineSet LineSet87 = createNode("LineSet");
LineSet87.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate88 = createNode("Coordinate");
Coordinate88.point = new MFVec3f(new float[0,0.9149,0.0016,0.1677,0.8336,0.0303]);
LineSet87.coord = Coordinate88;

ColorRGBA ColorRGBA89 = createNode("ColorRGBA");
ColorRGBA89.USE = "HAnimSiteLineColorRGBA";
LineSet87.color = ColorRGBA89;

Shape86.geometry = LineSet87;

HAnimSegment62.children[7] = Shape86;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_asis'/>
Shape Shape90 = createNode("Shape");
LineSet LineSet91 = createNode("LineSet");
LineSet91.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate92 = createNode("Coordinate");
Coordinate92.point = new MFVec3f(new float[0,0.9149,0.0016,-0.0887,1.0021,0.1112]);
LineSet91.coord = Coordinate92;

ColorRGBA ColorRGBA93 = createNode("ColorRGBA");
ColorRGBA93.USE = "HAnimSiteLineColorRGBA";
LineSet91.color = ColorRGBA93;

Shape90.geometry = LineSet91;

HAnimSegment62.children[8] = Shape90;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_asis'/>
Shape Shape94 = createNode("Shape");
LineSet LineSet95 = createNode("LineSet");
LineSet95.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate96 = createNode("Coordinate");
Coordinate96.point = new MFVec3f(new float[0,0.9149,0.0016,0.0925,0.9983,0.1052]);
LineSet95.coord = Coordinate96;

ColorRGBA ColorRGBA97 = createNode("ColorRGBA");
ColorRGBA97.USE = "HAnimSiteLineColorRGBA";
LineSet95.color = ColorRGBA97;

Shape94.geometry = LineSet95;

HAnimSegment62.children[9] = Shape94;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_psis'/>
Shape Shape98 = createNode("Shape");
LineSet LineSet99 = createNode("LineSet");
LineSet99.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate100 = createNode("Coordinate");
Coordinate100.point = new MFVec3f(new float[0,0.9149,0.0016,-0.0716,1.019,-0.1138]);
LineSet99.coord = Coordinate100;

ColorRGBA ColorRGBA101 = createNode("ColorRGBA");
ColorRGBA101.USE = "HAnimSiteLineColorRGBA";
LineSet99.color = ColorRGBA101;

Shape98.geometry = LineSet99;

HAnimSegment62.children[10] = Shape98;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_psis'/>
Shape Shape102 = createNode("Shape");
LineSet LineSet103 = createNode("LineSet");
LineSet103.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate104 = createNode("Coordinate");
Coordinate104.point = new MFVec3f(new float[0,0.9149,0.0016,0.0774,1.019,-0.1151]);
LineSet103.coord = Coordinate104;

ColorRGBA ColorRGBA105 = createNode("ColorRGBA");
ColorRGBA105.USE = "HAnimSiteLineColorRGBA";
LineSet103.color = ColorRGBA105;

Shape102.geometry = LineSet103;

HAnimSegment62.children[11] = Shape102;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='crotch'/>
Shape Shape106 = createNode("Shape");
LineSet LineSet107 = createNode("LineSet");
LineSet107.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate108 = createNode("Coordinate");
Coordinate108.point = new MFVec3f(new float[0,0.9149,0.0016,0.0034,0.8266,0.0257]);
LineSet107.coord = Coordinate108;

ColorRGBA ColorRGBA109 = createNode("ColorRGBA");
ColorRGBA109.USE = "HAnimSiteLineColorRGBA";
LineSet107.color = ColorRGBA109;

Shape106.geometry = LineSet107;

HAnimSegment62.children[12] = Shape106;

HAnimSite HAnimSite110 = createNode("HAnimSite");
HAnimSite110.name = "r_iliocristale_pt";
HAnimSite110.DEF = "hanim_r_iliocristale_pt";
HAnimSite110.translation = new SFVec3f(new float[-0.1525,1.0628,0.0035]);
//HAnimSite visualization shape
TouchSensor TouchSensor111 = createNode("TouchSensor");
TouchSensor111.description = "HAnimSite r_iliocristale";
HAnimSite110.children = new MFNode();

HAnimSite110.children[0] = TouchSensor111;

Shape Shape112 = createNode("Shape");
Shape112.DEF = "HAnimSiteShape";
IndexedFaceSet IndexedFaceSet113 = createNode("IndexedFaceSet");
IndexedFaceSet113.DEF = "DiamondIFS";
IndexedFaceSet113.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet113.creaseAngle = 0.5;
IndexedFaceSet113.solid = False;
Coordinate Coordinate114 = createNode("Coordinate");
Coordinate114.point = new MFVec3f(new float[0,0.008,0,-0.008,0,0,0,0,0.008,0.008,0,0,0,0,-0.008,0,-0.008,0]);
IndexedFaceSet113.coord = Coordinate114;

Shape112.geometry = IndexedFaceSet113;

Appearance Appearance115 = createNode("Appearance");
Material Material116 = createNode("Material");
Material116.diffuseColor = new SFColor(new float[1,0,0]);
Appearance115.material = Material116;

Shape112.appearance = Appearance115;

HAnimSite110.children[1] = Shape112;

HAnimSegment62.children[13] = HAnimSite110;

HAnimSite HAnimSite117 = createNode("HAnimSite");
HAnimSite117.name = "r_trochanterion_pt";
HAnimSite117.DEF = "hanim_r_trochanterion_pt";
HAnimSite117.translation = new SFVec3f(new float[-0.1689,0.8419,0.0352]);
//HAnimSite visualization shape
TouchSensor TouchSensor118 = createNode("TouchSensor");
TouchSensor118.description = "HAnimSite r_trochanterion";
HAnimSite117.children = new MFNode();

HAnimSite117.children[0] = TouchSensor118;

Shape Shape119 = createNode("Shape");
Shape119.USE = "HAnimSiteShape";
HAnimSite117.children[1] = Shape119;

HAnimSegment62.children[14] = HAnimSite117;

HAnimSite HAnimSite120 = createNode("HAnimSite");
HAnimSite120.name = "l_iliocristale_pt";
HAnimSite120.DEF = "hanim_l_iliocristale_pt";
HAnimSite120.translation = new SFVec3f(new float[0.1612,1.0537,0.0008]);
//HAnimSite visualization shape
TouchSensor TouchSensor121 = createNode("TouchSensor");
TouchSensor121.description = "HAnimSite l_iliocristale";
HAnimSite120.children = new MFNode();

HAnimSite120.children[0] = TouchSensor121;

Shape Shape122 = createNode("Shape");
Shape122.USE = "HAnimSiteShape";
HAnimSite120.children[1] = Shape122;

HAnimSegment62.children[15] = HAnimSite120;

HAnimSite HAnimSite123 = createNode("HAnimSite");
HAnimSite123.name = "l_trochanterion_pt";
HAnimSite123.DEF = "hanim_l_trochanterion_pt";
HAnimSite123.translation = new SFVec3f(new float[0.1677,0.8336,0.0303]);
//HAnimSite visualization shape
TouchSensor TouchSensor124 = createNode("TouchSensor");
TouchSensor124.description = "HAnimSite l_trochanterion";
HAnimSite123.children = new MFNode();

HAnimSite123.children[0] = TouchSensor124;

Shape Shape125 = createNode("Shape");
Shape125.USE = "HAnimSiteShape";
HAnimSite123.children[1] = Shape125;

HAnimSegment62.children[16] = HAnimSite123;

HAnimSite HAnimSite126 = createNode("HAnimSite");
HAnimSite126.name = "r_asis_pt";
HAnimSite126.DEF = "hanim_r_asis_pt";
HAnimSite126.translation = new SFVec3f(new float[-0.0887,1.0021,0.1112]);
//HAnimSite visualization shape
TouchSensor TouchSensor127 = createNode("TouchSensor");
TouchSensor127.description = "HAnimSite r_asis";
HAnimSite126.children = new MFNode();

HAnimSite126.children[0] = TouchSensor127;

Shape Shape128 = createNode("Shape");
Shape128.USE = "HAnimSiteShape";
HAnimSite126.children[1] = Shape128;

HAnimSegment62.children[17] = HAnimSite126;

HAnimSite HAnimSite129 = createNode("HAnimSite");
HAnimSite129.name = "l_asis_pt";
HAnimSite129.DEF = "hanim_l_asis_pt";
HAnimSite129.translation = new SFVec3f(new float[0.0925,0.9983,0.1052]);
//HAnimSite visualization shape
TouchSensor TouchSensor130 = createNode("TouchSensor");
TouchSensor130.description = "HAnimSite l_asis";
HAnimSite129.children = new MFNode();

HAnimSite129.children[0] = TouchSensor130;

Shape Shape131 = createNode("Shape");
Shape131.USE = "HAnimSiteShape";
HAnimSite129.children[1] = Shape131;

HAnimSegment62.children[18] = HAnimSite129;

HAnimSite HAnimSite132 = createNode("HAnimSite");
HAnimSite132.name = "r_psis_pt";
HAnimSite132.DEF = "hanim_r_psis_pt";
HAnimSite132.translation = new SFVec3f(new float[-0.0716,1.019,-0.1138]);
//HAnimSite visualization shape
TouchSensor TouchSensor133 = createNode("TouchSensor");
TouchSensor133.description = "HAnimSite r_psis";
HAnimSite132.children = new MFNode();

HAnimSite132.children[0] = TouchSensor133;

Shape Shape134 = createNode("Shape");
Shape134.USE = "HAnimSiteShape";
HAnimSite132.children[1] = Shape134;

HAnimSegment62.children[19] = HAnimSite132;

HAnimSite HAnimSite135 = createNode("HAnimSite");
HAnimSite135.name = "l_psis_pt";
HAnimSite135.DEF = "hanim_l_psis_pt";
HAnimSite135.translation = new SFVec3f(new float[0.0774,1.019,-0.1151]);
//HAnimSite visualization shape
TouchSensor TouchSensor136 = createNode("TouchSensor");
TouchSensor136.description = "HAnimSite l_psis";
HAnimSite135.children = new MFNode();

HAnimSite135.children[0] = TouchSensor136;

Shape Shape137 = createNode("Shape");
Shape137.USE = "HAnimSiteShape";
HAnimSite135.children[1] = Shape137;

HAnimSegment62.children[20] = HAnimSite135;

HAnimSite HAnimSite138 = createNode("HAnimSite");
HAnimSite138.name = "crotch_pt";
HAnimSite138.DEF = "hanim_crotch_pt";
HAnimSite138.translation = new SFVec3f(new float[0.0034,0.8266,0.0257]);
//HAnimSite visualization shape
TouchSensor TouchSensor139 = createNode("TouchSensor");
TouchSensor139.description = "HAnimSite crotch";
HAnimSite138.children = new MFNode();

HAnimSite138.children[0] = TouchSensor139;

Shape Shape140 = createNode("Shape");
Shape140.USE = "HAnimSiteShape";
HAnimSite138.children[1] = Shape140;

HAnimSegment62.children[21] = HAnimSite138;

HAnimJoint61.children = new MFNode();

HAnimJoint61.children[0] = HAnimSegment62;

HAnimJoint HAnimJoint141 = createNode("HAnimJoint");
HAnimJoint141.name = "l_hip";
HAnimJoint141.DEF = "hanim_l_hip";
HAnimJoint141.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
HAnimJoint141.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint141.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment142 = createNode("HAnimSegment");
HAnimSegment142.name = "l_thigh";
HAnimSegment142.DEF = "hanim_l_thigh";
//<HAnimJoint name='l_hip'/> visualization sphere within <HAnimSegment name='l_thigh'/>
TouchSensor TouchSensor143 = createNode("TouchSensor");
TouchSensor143.description = "HAnimJoint l_hip, HAnimSegment l_thigh";
HAnimSegment142.children = new MFNode();

HAnimSegment142.children[0] = TouchSensor143;

Transform Transform144 = createNode("Transform");
Transform144.translation = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
Shape Shape145 = createNode("Shape");
Shape145.USE = "HAnimJointShape";
Transform144.children = new MFNode();

Transform144.children[0] = Shape145;

HAnimSegment142.children[1] = Transform144;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_hip'/> to <HAnimJoint name='l_knee'/>
Shape Shape146 = createNode("Shape");
LineSet LineSet147 = createNode("LineSet");
LineSet147.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate148 = createNode("Coordinate");
Coordinate148.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.104,0.4867,0.0308]);
LineSet147.coord = Coordinate148;

ColorRGBA ColorRGBA149 = createNode("ColorRGBA");
ColorRGBA149.USE = "HAnimSegmentLineColorRGBA";
LineSet147.color = ColorRGBA149;

Shape146.geometry = LineSet147;

HAnimSegment142.children[2] = Shape146;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_knee_crease'/>
Shape Shape150 = createNode("Shape");
LineSet LineSet151 = createNode("LineSet");
LineSet151.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate152 = createNode("Coordinate");
Coordinate152.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.0993,0.4881,-0.0309]);
LineSet151.coord = Coordinate152;

ColorRGBA ColorRGBA153 = createNode("ColorRGBA");
ColorRGBA153.USE = "HAnimSiteLineColorRGBA";
LineSet151.color = ColorRGBA153;

Shape150.geometry = LineSet151;

HAnimSegment142.children[3] = Shape150;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_lateral_epicn'/>
Shape Shape154 = createNode("Shape");
LineSet LineSet155 = createNode("LineSet");
LineSet155.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate156 = createNode("Coordinate");
Coordinate156.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.1598,0.4967,0.0297]);
LineSet155.coord = Coordinate156;

ColorRGBA ColorRGBA157 = createNode("ColorRGBA");
ColorRGBA157.USE = "HAnimSiteLineColorRGBA";
LineSet155.color = ColorRGBA157;

Shape154.geometry = LineSet155;

HAnimSegment142.children[4] = Shape154;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_medial_epicn'/>
Shape Shape158 = createNode("Shape");
LineSet LineSet159 = createNode("LineSet");
LineSet159.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate160 = createNode("Coordinate");
Coordinate160.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.0398,0.4946,0.0303]);
LineSet159.coord = Coordinate160;

ColorRGBA ColorRGBA161 = createNode("ColorRGBA");
ColorRGBA161.USE = "HAnimSiteLineColorRGBA";
LineSet159.color = ColorRGBA161;

Shape158.geometry = LineSet159;

HAnimSegment142.children[5] = Shape158;

HAnimSite HAnimSite162 = createNode("HAnimSite");
HAnimSite162.name = "l_knee_crease_pt";
HAnimSite162.DEF = "hanim_l_knee_crease_pt";
HAnimSite162.translation = new SFVec3f(new float[0.0993,0.4881,-0.0309]);
//HAnimSite visualization shape
TouchSensor TouchSensor163 = createNode("TouchSensor");
TouchSensor163.description = "HAnimSite l_knee_crease";
HAnimSite162.children = new MFNode();

HAnimSite162.children[0] = TouchSensor163;

Shape Shape164 = createNode("Shape");
Shape164.USE = "HAnimSiteShape";
HAnimSite162.children[1] = Shape164;

HAnimSegment142.children[6] = HAnimSite162;

HAnimSite HAnimSite165 = createNode("HAnimSite");
HAnimSite165.name = "l_femoral_lateral_epicn_pt";
HAnimSite165.DEF = "hanim_l_femoral_lateral_epicn_pt";
HAnimSite165.translation = new SFVec3f(new float[0.1598,0.4967,0.0297]);
//HAnimSite visualization shape
TouchSensor TouchSensor166 = createNode("TouchSensor");
TouchSensor166.description = "HAnimSite l_femoral_lateral_epicn";
HAnimSite165.children = new MFNode();

HAnimSite165.children[0] = TouchSensor166;

Shape Shape167 = createNode("Shape");
Shape167.USE = "HAnimSiteShape";
HAnimSite165.children[1] = Shape167;

HAnimSegment142.children[7] = HAnimSite165;

HAnimSite HAnimSite168 = createNode("HAnimSite");
HAnimSite168.name = "l_femoral_medial_epicn_pt";
HAnimSite168.DEF = "hanim_l_femoral_medial_epicn_pt";
HAnimSite168.translation = new SFVec3f(new float[0.0398,0.4946,0.0303]);
//HAnimSite visualization shape
TouchSensor TouchSensor169 = createNode("TouchSensor");
TouchSensor169.description = "HAnimSite l_femoral_medial_epicn";
HAnimSite168.children = new MFNode();

HAnimSite168.children[0] = TouchSensor169;

Shape Shape170 = createNode("Shape");
Shape170.USE = "HAnimSiteShape";
HAnimSite168.children[1] = Shape170;

HAnimSegment142.children[8] = HAnimSite168;

HAnimJoint141.children = new MFNode();

HAnimJoint141.children[0] = HAnimSegment142;

HAnimJoint HAnimJoint171 = createNode("HAnimJoint");
HAnimJoint171.name = "l_knee";
HAnimJoint171.DEF = "hanim_l_knee";
HAnimJoint171.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
HAnimJoint171.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint171.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment172 = createNode("HAnimSegment");
HAnimSegment172.name = "l_calf";
HAnimSegment172.DEF = "hanim_l_calf";
//<HAnimJoint name='l_knee'/> visualization sphere within <HAnimSegment name='l_calf'/>
TouchSensor TouchSensor173 = createNode("TouchSensor");
TouchSensor173.description = "HAnimJoint l_knee, HAnimSegment l_calf";
HAnimSegment172.children = new MFNode();

HAnimSegment172.children[0] = TouchSensor173;

Transform Transform174 = createNode("Transform");
Transform174.translation = new SFVec3f(new float[0.104,0.4867,0.0308]);
Shape Shape175 = createNode("Shape");
Shape175.USE = "HAnimJointShape";
Transform174.children = new MFNode();

Transform174.children[0] = Shape175;

HAnimSegment172.children[1] = Transform174;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_knee'/> to <HAnimJoint name='l_ankle'/>
Shape Shape176 = createNode("Shape");
LineSet LineSet177 = createNode("LineSet");
LineSet177.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate178 = createNode("Coordinate");
Coordinate178.point = new MFVec3f(new float[0.104,0.4867,0.0308,0.1101,0.0656,-0.0736]);
LineSet177.coord = Coordinate178;

ColorRGBA ColorRGBA179 = createNode("ColorRGBA");
ColorRGBA179.USE = "HAnimSegmentLineColorRGBA";
LineSet177.color = ColorRGBA179;

Shape176.geometry = LineSet177;

HAnimSegment172.children[2] = Shape176;

HAnimJoint171.children = new MFNode();

HAnimJoint171.children[0] = HAnimSegment172;

HAnimJoint HAnimJoint180 = createNode("HAnimJoint");
HAnimJoint180.name = "l_ankle";
HAnimJoint180.DEF = "hanim_l_ankle";
HAnimJoint180.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
HAnimJoint180.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint180.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment181 = createNode("HAnimSegment");
HAnimSegment181.name = "l_hindfoot";
HAnimSegment181.DEF = "hanim_l_hindfoot";
//<HAnimJoint name='l_ankle'/> visualization sphere within <HAnimSegment name='l_hindfoot'/>
TouchSensor TouchSensor182 = createNode("TouchSensor");
TouchSensor182.description = "HAnimJoint l_ankle, HAnimSegment l_hindfoot";
HAnimSegment181.children = new MFNode();

HAnimSegment181.children[0] = TouchSensor182;

Transform Transform183 = createNode("Transform");
Transform183.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
Shape Shape184 = createNode("Shape");
Shape184.USE = "HAnimJointShape";
Transform183.children = new MFNode();

Transform183.children[0] = Shape184;

HAnimSegment181.children[1] = Transform183;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ankle'/> to <HAnimJoint name='l_subtalar'/>
Shape Shape185 = createNode("Shape");
LineSet LineSet186 = createNode("LineSet");
LineSet186.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate187 = createNode("Coordinate");
Coordinate187.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.1086,0.0001,-0.0368]);
LineSet186.coord = Coordinate187;

ColorRGBA ColorRGBA188 = createNode("ColorRGBA");
ColorRGBA188.USE = "HAnimSegmentLineColorRGBA";
LineSet186.color = ColorRGBA188;

Shape185.geometry = LineSet186;

HAnimSegment181.children[2] = Shape185;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_lateral_malleolus'/>
Shape Shape189 = createNode("Shape");
LineSet LineSet190 = createNode("LineSet");
LineSet190.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate191 = createNode("Coordinate");
Coordinate191.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.1308,0.0597,-0.1032]);
LineSet190.coord = Coordinate191;

ColorRGBA ColorRGBA192 = createNode("ColorRGBA");
ColorRGBA192.USE = "HAnimSiteLineColorRGBA";
LineSet190.color = ColorRGBA192;

Shape189.geometry = LineSet190;

HAnimSegment181.children[3] = Shape189;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_medial_malleolus'/>
Shape Shape193 = createNode("Shape");
LineSet LineSet194 = createNode("LineSet");
LineSet194.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate195 = createNode("Coordinate");
Coordinate195.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.089,0.0716,-0.0881]);
LineSet194.coord = Coordinate195;

ColorRGBA ColorRGBA196 = createNode("ColorRGBA");
ColorRGBA196.USE = "HAnimSiteLineColorRGBA";
LineSet194.color = ColorRGBA196;

Shape193.geometry = LineSet194;

HAnimSegment181.children[4] = Shape193;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_sphyrion'/>
Shape Shape197 = createNode("Shape");
LineSet LineSet198 = createNode("LineSet");
LineSet198.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate199 = createNode("Coordinate");
Coordinate199.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.089,0.0575,-0.0943]);
LineSet198.coord = Coordinate199;

ColorRGBA ColorRGBA200 = createNode("ColorRGBA");
ColorRGBA200.USE = "HAnimSiteLineColorRGBA";
LineSet198.color = ColorRGBA200;

Shape197.geometry = LineSet198;

HAnimSegment181.children[5] = Shape197;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_calcaneous_post'/>
Shape Shape201 = createNode("Shape");
LineSet LineSet202 = createNode("LineSet");
LineSet202.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate203 = createNode("Coordinate");
Coordinate203.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.0974,0.0259,-0.1171]);
LineSet202.coord = Coordinate203;

ColorRGBA ColorRGBA204 = createNode("ColorRGBA");
ColorRGBA204.USE = "HAnimSiteLineColorRGBA";
LineSet202.color = ColorRGBA204;

Shape201.geometry = LineSet202;

HAnimSegment181.children[6] = Shape201;

HAnimSite HAnimSite205 = createNode("HAnimSite");
HAnimSite205.name = "l_lateral_malleolus_pt";
HAnimSite205.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite205.translation = new SFVec3f(new float[0.1308,0.0597,-0.1032]);
//HAnimSite visualization shape
TouchSensor TouchSensor206 = createNode("TouchSensor");
TouchSensor206.description = "HAnimSite l_lateral_malleolus";
HAnimSite205.children = new MFNode();

HAnimSite205.children[0] = TouchSensor206;

Shape Shape207 = createNode("Shape");
Shape207.USE = "HAnimSiteShape";
HAnimSite205.children[1] = Shape207;

HAnimSegment181.children[7] = HAnimSite205;

HAnimSite HAnimSite208 = createNode("HAnimSite");
HAnimSite208.name = "l_medial_malleolus_pt";
HAnimSite208.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite208.translation = new SFVec3f(new float[0.089,0.0716,-0.0881]);
//HAnimSite visualization shape
TouchSensor TouchSensor209 = createNode("TouchSensor");
TouchSensor209.description = "HAnimSite l_medial_malleolus";
HAnimSite208.children = new MFNode();

HAnimSite208.children[0] = TouchSensor209;

Shape Shape210 = createNode("Shape");
Shape210.USE = "HAnimSiteShape";
HAnimSite208.children[1] = Shape210;

HAnimSegment181.children[8] = HAnimSite208;

HAnimSite HAnimSite211 = createNode("HAnimSite");
HAnimSite211.name = "l_sphyrion_pt";
HAnimSite211.DEF = "hanim_l_sphyrion_pt";
HAnimSite211.translation = new SFVec3f(new float[0.089,0.0575,-0.0943]);
//HAnimSite visualization shape
TouchSensor TouchSensor212 = createNode("TouchSensor");
TouchSensor212.description = "HAnimSite l_sphyrion";
HAnimSite211.children = new MFNode();

HAnimSite211.children[0] = TouchSensor212;

Shape Shape213 = createNode("Shape");
Shape213.USE = "HAnimSiteShape";
HAnimSite211.children[1] = Shape213;

HAnimSegment181.children[9] = HAnimSite211;

HAnimSite HAnimSite214 = createNode("HAnimSite");
HAnimSite214.name = "l_calcaneous_post_pt";
HAnimSite214.DEF = "hanim_l_calcaneous_post_pt";
HAnimSite214.translation = new SFVec3f(new float[0.0974,0.0259,-0.1171]);
//HAnimSite visualization shape
TouchSensor TouchSensor215 = createNode("TouchSensor");
TouchSensor215.description = "HAnimSite l_calcaneous_post";
HAnimSite214.children = new MFNode();

HAnimSite214.children[0] = TouchSensor215;

Shape Shape216 = createNode("Shape");
Shape216.USE = "HAnimSiteShape";
HAnimSite214.children[1] = Shape216;

HAnimSegment181.children[10] = HAnimSite214;

HAnimJoint180.children = new MFNode();

HAnimJoint180.children[0] = HAnimSegment181;

HAnimJoint HAnimJoint217 = createNode("HAnimJoint");
HAnimJoint217.name = "l_subtalar";
HAnimJoint217.DEF = "hanim_l_subtalar";
HAnimJoint217.center = new SFVec3f(new float[0.1086,0.0001,-0.0368]);
HAnimJoint217.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint217.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment218 = createNode("HAnimSegment");
HAnimSegment218.name = "l_midproximal";
HAnimSegment218.DEF = "hanim_l_midproximal";
//<HAnimJoint name='l_subtalar'/> visualization sphere within <HAnimSegment name='l_midproximal'/>
TouchSensor TouchSensor219 = createNode("TouchSensor");
TouchSensor219.description = "HAnimJoint l_subtalar, HAnimSegment l_midproximal";
HAnimSegment218.children = new MFNode();

HAnimSegment218.children[0] = TouchSensor219;

Transform Transform220 = createNode("Transform");
Transform220.translation = new SFVec3f(new float[0.1086,0.0001,-0.0368]);
Shape Shape221 = createNode("Shape");
Shape221.USE = "HAnimJointShape";
Transform220.children = new MFNode();

Transform220.children[0] = Shape221;

HAnimSegment218.children[1] = Transform220;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_subtalar'/> to <HAnimJoint name='l_midtarsal'/>
Shape Shape222 = createNode("Shape");
LineSet LineSet223 = createNode("LineSet");
LineSet223.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate224 = createNode("Coordinate");
Coordinate224.point = new MFVec3f(new float[0.1086,0.0001,-0.0368,0.1086,0.0001,0.0368]);
LineSet223.coord = Coordinate224;

ColorRGBA ColorRGBA225 = createNode("ColorRGBA");
ColorRGBA225.USE = "HAnimSegmentLineColorRGBA";
LineSet223.color = ColorRGBA225;

Shape222.geometry = LineSet223;

HAnimSegment218.children[2] = Shape222;

HAnimJoint217.children = new MFNode();

HAnimJoint217.children[0] = HAnimSegment218;

HAnimJoint HAnimJoint226 = createNode("HAnimJoint");
HAnimJoint226.name = "l_midtarsal";
HAnimJoint226.DEF = "hanim_l_midtarsal";
HAnimJoint226.center = new SFVec3f(new float[0.1086,0.0001,0.0368]);
HAnimJoint226.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint226.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment227 = createNode("HAnimSegment");
HAnimSegment227.name = "l_middistal";
HAnimSegment227.DEF = "hanim_l_middistal";
//<HAnimJoint name='l_midtarsal'/> visualization sphere within <HAnimSegment name='l_middistal'/>
TouchSensor TouchSensor228 = createNode("TouchSensor");
TouchSensor228.description = "HAnimJoint l_midtarsal, HAnimSegment l_middistal";
HAnimSegment227.children = new MFNode();

HAnimSegment227.children[0] = TouchSensor228;

Transform Transform229 = createNode("Transform");
Transform229.translation = new SFVec3f(new float[0.1086,0.0001,0.0368]);
Shape Shape230 = createNode("Shape");
Shape230.USE = "HAnimJointShape";
Transform229.children = new MFNode();

Transform229.children[0] = Shape230;

HAnimSegment227.children[1] = Transform229;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_midtarsal'/> to <HAnimJoint name='l_metatarsal'/>
Shape Shape231 = createNode("Shape");
LineSet LineSet232 = createNode("LineSet");
LineSet232.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate233 = createNode("Coordinate");
Coordinate233.point = new MFVec3f(new float[0.1086,0.0001,0.0368,0.1086,0,0.0762]);
LineSet232.coord = Coordinate233;

ColorRGBA ColorRGBA234 = createNode("ColorRGBA");
ColorRGBA234.USE = "HAnimSegmentLineColorRGBA";
LineSet232.color = ColorRGBA234;

Shape231.geometry = LineSet232;

HAnimSegment227.children[2] = Shape231;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_midtarsal'/> to <HAnimSite name='l_metatarsal_pha1'/>
Shape Shape235 = createNode("Shape");
LineSet LineSet236 = createNode("LineSet");
LineSet236.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate237 = createNode("Coordinate");
Coordinate237.point = new MFVec3f(new float[0.1086,0.0001,0.0368,0.0816,0.0232,0.0106]);
LineSet236.coord = Coordinate237;

ColorRGBA ColorRGBA238 = createNode("ColorRGBA");
ColorRGBA238.USE = "HAnimSiteLineColorRGBA";
LineSet236.color = ColorRGBA238;

Shape235.geometry = LineSet236;

HAnimSegment227.children[3] = Shape235;

HAnimSite HAnimSite239 = createNode("HAnimSite");
HAnimSite239.name = "l_metatarsal_pha1_pt";
HAnimSite239.DEF = "hanim_l_metatarsal_pha1_pt";
HAnimSite239.translation = new SFVec3f(new float[0.0816,0.0232,0.0106]);
//HAnimSite visualization shape
TouchSensor TouchSensor240 = createNode("TouchSensor");
TouchSensor240.description = "HAnimSite l_metatarsal_pha1";
HAnimSite239.children = new MFNode();

HAnimSite239.children[0] = TouchSensor240;

Shape Shape241 = createNode("Shape");
Shape241.USE = "HAnimSiteShape";
HAnimSite239.children[1] = Shape241;

HAnimSegment227.children[4] = HAnimSite239;

HAnimJoint226.children = new MFNode();

HAnimJoint226.children[0] = HAnimSegment227;

HAnimJoint HAnimJoint242 = createNode("HAnimJoint");
HAnimJoint242.name = "l_metatarsal";
HAnimJoint242.DEF = "hanim_l_metatarsal";
HAnimJoint242.center = new SFVec3f(new float[0.1086,0,0.0762]);
HAnimJoint242.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint242.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment243 = createNode("HAnimSegment");
HAnimSegment243.name = "l_forefoot";
HAnimSegment243.DEF = "hanim_l_forefoot";
//<HAnimJoint name='l_metatarsal'/> visualization sphere within <HAnimSegment name='l_forefoot'/>
TouchSensor TouchSensor244 = createNode("TouchSensor");
TouchSensor244.description = "HAnimJoint l_metatarsal, HAnimSegment l_forefoot";
HAnimSegment243.children = new MFNode();

HAnimSegment243.children[0] = TouchSensor244;

Transform Transform245 = createNode("Transform");
Transform245.translation = new SFVec3f(new float[0.1086,0,0.0762]);
Shape Shape246 = createNode("Shape");
Shape246.USE = "HAnimJointShape";
Transform245.children = new MFNode();

Transform245.children[0] = Shape246;

HAnimSegment243.children[1] = Transform245;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_forefoot_tip'/>
Shape Shape247 = createNode("Shape");
LineSet LineSet248 = createNode("LineSet");
LineSet248.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate249 = createNode("Coordinate");
Coordinate249.point = new MFVec3f(new float[0.1086,0,0.0762,0.1354,0.0016,0.1476]);
LineSet248.coord = Coordinate249;

ColorRGBA ColorRGBA250 = createNode("ColorRGBA");
ColorRGBA250.USE = "HAnimSiteLineColorRGBA";
LineSet248.color = ColorRGBA250;

Shape247.geometry = LineSet248;

HAnimSegment243.children[2] = Shape247;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_metatarsal_pha5'/>
Shape Shape251 = createNode("Shape");
LineSet LineSet252 = createNode("LineSet");
LineSet252.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate253 = createNode("Coordinate");
Coordinate253.point = new MFVec3f(new float[0.1086,0,0.0762,0.1825,0.007,0.0928]);
LineSet252.coord = Coordinate253;

ColorRGBA ColorRGBA254 = createNode("ColorRGBA");
ColorRGBA254.USE = "HAnimSiteLineColorRGBA";
LineSet252.color = ColorRGBA254;

Shape251.geometry = LineSet252;

HAnimSegment243.children[3] = Shape251;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_digit2'/>
Shape Shape255 = createNode("Shape");
LineSet LineSet256 = createNode("LineSet");
LineSet256.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate257 = createNode("Coordinate");
Coordinate257.point = new MFVec3f(new float[0.1086,0,0.0762,0.1195,0.0079,0.1433]);
LineSet256.coord = Coordinate257;

ColorRGBA ColorRGBA258 = createNode("ColorRGBA");
ColorRGBA258.USE = "HAnimSiteLineColorRGBA";
LineSet256.color = ColorRGBA258;

Shape255.geometry = LineSet256;

HAnimSegment243.children[4] = Shape255;

HAnimSite HAnimSite259 = createNode("HAnimSite");
HAnimSite259.name = "l_forefoot_tip";
HAnimSite259.DEF = "hanim_l_forefoot_tip";
HAnimSite259.translation = new SFVec3f(new float[0.1354,0.0016,0.1476]);
//HAnimSite visualization shape
TouchSensor TouchSensor260 = createNode("TouchSensor");
TouchSensor260.description = "HAnimSite l_forefoot_tip";
HAnimSite259.children = new MFNode();

HAnimSite259.children[0] = TouchSensor260;

Shape Shape261 = createNode("Shape");
Shape261.USE = "HAnimSiteShape";
HAnimSite259.children[1] = Shape261;

HAnimSegment243.children[5] = HAnimSite259;

HAnimSite HAnimSite262 = createNode("HAnimSite");
HAnimSite262.name = "l_metatarsal_pha5_pt";
HAnimSite262.DEF = "hanim_l_metatarsal_pha5_pt";
HAnimSite262.translation = new SFVec3f(new float[0.1825,0.007,0.0928]);
//HAnimSite visualization shape
TouchSensor TouchSensor263 = createNode("TouchSensor");
TouchSensor263.description = "HAnimSite l_metatarsal_pha5";
HAnimSite262.children = new MFNode();

HAnimSite262.children[0] = TouchSensor263;

Shape Shape264 = createNode("Shape");
Shape264.USE = "HAnimSiteShape";
HAnimSite262.children[1] = Shape264;

HAnimSegment243.children[6] = HAnimSite262;

HAnimSite HAnimSite265 = createNode("HAnimSite");
HAnimSite265.name = "l_digit2_pt";
HAnimSite265.DEF = "hanim_l_digit2_pt";
HAnimSite265.translation = new SFVec3f(new float[0.1195,0.0079,0.1433]);
//HAnimSite visualization shape
TouchSensor TouchSensor266 = createNode("TouchSensor");
TouchSensor266.description = "HAnimSite l_digit2";
HAnimSite265.children = new MFNode();

HAnimSite265.children[0] = TouchSensor266;

Shape Shape267 = createNode("Shape");
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

HAnimJoint HAnimJoint268 = createNode("HAnimJoint");
HAnimJoint268.name = "r_hip";
HAnimJoint268.DEF = "hanim_r_hip";
HAnimJoint268.center = new SFVec3f(new float[-0.0961,0.9124,-0.0001]);
HAnimJoint268.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint268.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment269 = createNode("HAnimSegment");
HAnimSegment269.name = "r_thigh";
HAnimSegment269.DEF = "hanim_r_thigh";
//<HAnimJoint name='r_hip'/> visualization sphere within <HAnimSegment name='r_thigh'/>
TouchSensor TouchSensor270 = createNode("TouchSensor");
TouchSensor270.description = "HAnimJoint r_hip, HAnimSegment r_thigh";
HAnimSegment269.children = new MFNode();

HAnimSegment269.children[0] = TouchSensor270;

Transform Transform271 = createNode("Transform");
Transform271.translation = new SFVec3f(new float[-0.0961,0.9124,-0.0001]);
Shape Shape272 = createNode("Shape");
Shape272.USE = "HAnimJointShape";
Transform271.children = new MFNode();

Transform271.children[0] = Shape272;

HAnimSegment269.children[1] = Transform271;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_hip'/> to <HAnimJoint name='r_knee'/>
Shape Shape273 = createNode("Shape");
LineSet LineSet274 = createNode("LineSet");
LineSet274.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate275 = createNode("Coordinate");
Coordinate275.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.104,0.4867,0.0308]);
LineSet274.coord = Coordinate275;

ColorRGBA ColorRGBA276 = createNode("ColorRGBA");
ColorRGBA276.USE = "HAnimSegmentLineColorRGBA";
LineSet274.color = ColorRGBA276;

Shape273.geometry = LineSet274;

HAnimSegment269.children[2] = Shape273;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_knee_crease'/>
Shape Shape277 = createNode("Shape");
LineSet LineSet278 = createNode("LineSet");
LineSet278.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate279 = createNode("Coordinate");
Coordinate279.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.0825,0.4932,-0.0326]);
LineSet278.coord = Coordinate279;

ColorRGBA ColorRGBA280 = createNode("ColorRGBA");
ColorRGBA280.USE = "HAnimSiteLineColorRGBA";
LineSet278.color = ColorRGBA280;

Shape277.geometry = LineSet278;

HAnimSegment269.children[3] = Shape277;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_lateral_epicn'/>
Shape Shape281 = createNode("Shape");
LineSet LineSet282 = createNode("LineSet");
LineSet282.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate283 = createNode("Coordinate");
Coordinate283.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.1421,0.4992,0.031]);
LineSet282.coord = Coordinate283;

ColorRGBA ColorRGBA284 = createNode("ColorRGBA");
ColorRGBA284.USE = "HAnimSiteLineColorRGBA";
LineSet282.color = ColorRGBA284;

Shape281.geometry = LineSet282;

HAnimSegment269.children[4] = Shape281;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_medial_epicn'/>
Shape Shape285 = createNode("Shape");
LineSet LineSet286 = createNode("LineSet");
LineSet286.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate287 = createNode("Coordinate");
Coordinate287.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.0221,0.5014,0.0289]);
LineSet286.coord = Coordinate287;

ColorRGBA ColorRGBA288 = createNode("ColorRGBA");
ColorRGBA288.USE = "HAnimSiteLineColorRGBA";
LineSet286.color = ColorRGBA288;

Shape285.geometry = LineSet286;

HAnimSegment269.children[5] = Shape285;

HAnimSite HAnimSite289 = createNode("HAnimSite");
HAnimSite289.name = "r_knee_crease_pt";
HAnimSite289.DEF = "hanim_r_knee_crease_pt";
HAnimSite289.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
//HAnimSite visualization shape
TouchSensor TouchSensor290 = createNode("TouchSensor");
TouchSensor290.description = "HAnimSite r_knee_crease";
HAnimSite289.children = new MFNode();

HAnimSite289.children[0] = TouchSensor290;

Shape Shape291 = createNode("Shape");
Shape291.USE = "HAnimSiteShape";
HAnimSite289.children[1] = Shape291;

HAnimSegment269.children[6] = HAnimSite289;

HAnimSite HAnimSite292 = createNode("HAnimSite");
HAnimSite292.name = "r_femoral_lateral_epicn_pt";
HAnimSite292.DEF = "hanim_r_femoral_lateral_epicn_pt";
HAnimSite292.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
//HAnimSite visualization shape
TouchSensor TouchSensor293 = createNode("TouchSensor");
TouchSensor293.description = "HAnimSite r_femoral_lateral_epicn";
HAnimSite292.children = new MFNode();

HAnimSite292.children[0] = TouchSensor293;

Shape Shape294 = createNode("Shape");
Shape294.USE = "HAnimSiteShape";
HAnimSite292.children[1] = Shape294;

HAnimSegment269.children[7] = HAnimSite292;

HAnimSite HAnimSite295 = createNode("HAnimSite");
HAnimSite295.name = "r_femoral_medial_epicn_pt";
HAnimSite295.DEF = "hanim_r_femoral_medial_epicn_pt";
HAnimSite295.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
//HAnimSite visualization shape
TouchSensor TouchSensor296 = createNode("TouchSensor");
TouchSensor296.description = "HAnimSite r_femoral_medial_epicn";
HAnimSite295.children = new MFNode();

HAnimSite295.children[0] = TouchSensor296;

Shape Shape297 = createNode("Shape");
Shape297.USE = "HAnimSiteShape";
HAnimSite295.children[1] = Shape297;

HAnimSegment269.children[8] = HAnimSite295;

HAnimJoint268.children = new MFNode();

HAnimJoint268.children[0] = HAnimSegment269;

HAnimJoint HAnimJoint298 = createNode("HAnimJoint");
HAnimJoint298.name = "r_knee";
HAnimJoint298.DEF = "hanim_r_knee";
HAnimJoint298.center = new SFVec3f(new float[-0.104,0.4867,0.0308]);
HAnimJoint298.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint298.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment299 = createNode("HAnimSegment");
HAnimSegment299.name = "r_calf";
HAnimSegment299.DEF = "hanim_r_calf";
//<HAnimJoint name='r_knee'/> visualization sphere within <HAnimSegment name='r_calf'/>
TouchSensor TouchSensor300 = createNode("TouchSensor");
TouchSensor300.description = "HAnimJoint r_knee, HAnimSegment r_calf";
HAnimSegment299.children = new MFNode();

HAnimSegment299.children[0] = TouchSensor300;

Transform Transform301 = createNode("Transform");
Transform301.translation = new SFVec3f(new float[-0.104,0.4867,0.0308]);
Shape Shape302 = createNode("Shape");
Shape302.USE = "HAnimJointShape";
Transform301.children = new MFNode();

Transform301.children[0] = Shape302;

HAnimSegment299.children[1] = Transform301;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_knee'/> to <HAnimJoint name='r_ankle'/>
Shape Shape303 = createNode("Shape");
LineSet LineSet304 = createNode("LineSet");
LineSet304.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate305 = createNode("Coordinate");
Coordinate305.point = new MFVec3f(new float[-0.104,0.4867,0.0308,-0.1101,0.0656,-0.0736]);
LineSet304.coord = Coordinate305;

ColorRGBA ColorRGBA306 = createNode("ColorRGBA");
ColorRGBA306.USE = "HAnimSegmentLineColorRGBA";
LineSet304.color = ColorRGBA306;

Shape303.geometry = LineSet304;

HAnimSegment299.children[2] = Shape303;

HAnimJoint298.children = new MFNode();

HAnimJoint298.children[0] = HAnimSegment299;

HAnimJoint HAnimJoint307 = createNode("HAnimJoint");
HAnimJoint307.name = "r_ankle";
HAnimJoint307.DEF = "hanim_r_ankle";
HAnimJoint307.center = new SFVec3f(new float[-0.1101,0.0656,-0.0736]);
HAnimJoint307.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint307.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment308 = createNode("HAnimSegment");
HAnimSegment308.name = "r_hindfoot";
HAnimSegment308.DEF = "hanim_r_hindfoot";
//<HAnimJoint name='r_ankle'/> visualization sphere within <HAnimSegment name='r_hindfoot'/>
TouchSensor TouchSensor309 = createNode("TouchSensor");
TouchSensor309.description = "HAnimJoint r_ankle, HAnimSegment r_hindfoot";
HAnimSegment308.children = new MFNode();

HAnimSegment308.children[0] = TouchSensor309;

Transform Transform310 = createNode("Transform");
Transform310.translation = new SFVec3f(new float[-0.1101,0.0656,-0.0736]);
Shape Shape311 = createNode("Shape");
Shape311.USE = "HAnimJointShape";
Transform310.children = new MFNode();

Transform310.children[0] = Shape311;

HAnimSegment308.children[1] = Transform310;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ankle'/> to <HAnimJoint name='r_subtalar'/>
Shape Shape312 = createNode("Shape");
LineSet LineSet313 = createNode("LineSet");
LineSet313.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate314 = createNode("Coordinate");
Coordinate314.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.1086,0.0001,-0.0368]);
LineSet313.coord = Coordinate314;

ColorRGBA ColorRGBA315 = createNode("ColorRGBA");
ColorRGBA315.USE = "HAnimSegmentLineColorRGBA";
LineSet313.color = ColorRGBA315;

Shape312.geometry = LineSet313;

HAnimSegment308.children[2] = Shape312;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_lateral_malleolus'/>
Shape Shape316 = createNode("Shape");
LineSet LineSet317 = createNode("LineSet");
LineSet317.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate318 = createNode("Coordinate");
Coordinate318.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.1006,0.0658,-0.1075]);
LineSet317.coord = Coordinate318;

ColorRGBA ColorRGBA319 = createNode("ColorRGBA");
ColorRGBA319.USE = "HAnimSiteLineColorRGBA";
LineSet317.color = ColorRGBA319;

Shape316.geometry = LineSet317;

HAnimSegment308.children[3] = Shape316;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_medial_malleolus'/>
Shape Shape320 = createNode("Shape");
LineSet LineSet321 = createNode("LineSet");
LineSet321.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate322 = createNode("Coordinate");
Coordinate322.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.0591,0.076,-0.0928]);
LineSet321.coord = Coordinate322;

ColorRGBA ColorRGBA323 = createNode("ColorRGBA");
ColorRGBA323.USE = "HAnimSiteLineColorRGBA";
LineSet321.color = ColorRGBA323;

Shape320.geometry = LineSet321;

HAnimSegment308.children[4] = Shape320;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_sphyrion'/>
Shape Shape324 = createNode("Shape");
LineSet LineSet325 = createNode("LineSet");
LineSet325.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate326 = createNode("Coordinate");
Coordinate326.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.0603,0.061,-0.1002]);
LineSet325.coord = Coordinate326;

ColorRGBA ColorRGBA327 = createNode("ColorRGBA");
ColorRGBA327.USE = "HAnimSiteLineColorRGBA";
LineSet325.color = ColorRGBA327;

Shape324.geometry = LineSet325;

HAnimSegment308.children[5] = Shape324;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_calcaneous_post'/>
Shape Shape328 = createNode("Shape");
LineSet LineSet329 = createNode("LineSet");
LineSet329.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate330 = createNode("Coordinate");
Coordinate330.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.0692,0.0297,-0.1221]);
LineSet329.coord = Coordinate330;

ColorRGBA ColorRGBA331 = createNode("ColorRGBA");
ColorRGBA331.USE = "HAnimSiteLineColorRGBA";
LineSet329.color = ColorRGBA331;

Shape328.geometry = LineSet329;

HAnimSegment308.children[6] = Shape328;

HAnimSite HAnimSite332 = createNode("HAnimSite");
HAnimSite332.name = "r_lateral_malleolus_pt";
HAnimSite332.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite332.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
//HAnimSite visualization shape
TouchSensor TouchSensor333 = createNode("TouchSensor");
TouchSensor333.description = "HAnimSite r_lateral_malleolus";
HAnimSite332.children = new MFNode();

HAnimSite332.children[0] = TouchSensor333;

Shape Shape334 = createNode("Shape");
Shape334.USE = "HAnimSiteShape";
HAnimSite332.children[1] = Shape334;

HAnimSegment308.children[7] = HAnimSite332;

HAnimSite HAnimSite335 = createNode("HAnimSite");
HAnimSite335.name = "r_medial_malleolus_pt";
HAnimSite335.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite335.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
//HAnimSite visualization shape
TouchSensor TouchSensor336 = createNode("TouchSensor");
TouchSensor336.description = "HAnimSite r_medial_malleolus";
HAnimSite335.children = new MFNode();

HAnimSite335.children[0] = TouchSensor336;

Shape Shape337 = createNode("Shape");
Shape337.USE = "HAnimSiteShape";
HAnimSite335.children[1] = Shape337;

HAnimSegment308.children[8] = HAnimSite335;

HAnimSite HAnimSite338 = createNode("HAnimSite");
HAnimSite338.name = "r_sphyrion_pt";
HAnimSite338.DEF = "hanim_r_sphyrion_pt";
HAnimSite338.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
//HAnimSite visualization shape
TouchSensor TouchSensor339 = createNode("TouchSensor");
TouchSensor339.description = "HAnimSite r_sphyrion";
HAnimSite338.children = new MFNode();

HAnimSite338.children[0] = TouchSensor339;

Shape Shape340 = createNode("Shape");
Shape340.USE = "HAnimSiteShape";
HAnimSite338.children[1] = Shape340;

HAnimSegment308.children[9] = HAnimSite338;

HAnimSite HAnimSite341 = createNode("HAnimSite");
HAnimSite341.name = "r_calcaneous_post_pt";
HAnimSite341.DEF = "hanim_r_calcaneous_post_pt";
HAnimSite341.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
//HAnimSite visualization shape
TouchSensor TouchSensor342 = createNode("TouchSensor");
TouchSensor342.description = "HAnimSite r_calcaneous_post";
HAnimSite341.children = new MFNode();

HAnimSite341.children[0] = TouchSensor342;

Shape Shape343 = createNode("Shape");
Shape343.USE = "HAnimSiteShape";
HAnimSite341.children[1] = Shape343;

HAnimSegment308.children[10] = HAnimSite341;

HAnimJoint307.children = new MFNode();

HAnimJoint307.children[0] = HAnimSegment308;

HAnimJoint HAnimJoint344 = createNode("HAnimJoint");
HAnimJoint344.name = "r_subtalar";
HAnimJoint344.DEF = "hanim_r_subtalar";
HAnimJoint344.center = new SFVec3f(new float[-0.1086,0.0001,-0.0368]);
HAnimJoint344.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint344.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment345 = createNode("HAnimSegment");
HAnimSegment345.name = "r_midproximal";
HAnimSegment345.DEF = "hanim_r_midproximal";
//<HAnimJoint name='r_subtalar'/> visualization sphere within <HAnimSegment name='r_midproximal'/>
TouchSensor TouchSensor346 = createNode("TouchSensor");
TouchSensor346.description = "HAnimJoint r_subtalar, HAnimSegment r_midproximal";
HAnimSegment345.children = new MFNode();

HAnimSegment345.children[0] = TouchSensor346;

Transform Transform347 = createNode("Transform");
Transform347.translation = new SFVec3f(new float[-0.1086,0.0001,-0.0368]);
Shape Shape348 = createNode("Shape");
Shape348.USE = "HAnimJointShape";
Transform347.children = new MFNode();

Transform347.children[0] = Shape348;

HAnimSegment345.children[1] = Transform347;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_subtalar'/> to <HAnimJoint name='r_midtarsal'/>
Shape Shape349 = createNode("Shape");
LineSet LineSet350 = createNode("LineSet");
LineSet350.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate351 = createNode("Coordinate");
Coordinate351.point = new MFVec3f(new float[-0.1086,0.0001,-0.0368,-0.1086,0.0001,0.0368]);
LineSet350.coord = Coordinate351;

ColorRGBA ColorRGBA352 = createNode("ColorRGBA");
ColorRGBA352.USE = "HAnimSegmentLineColorRGBA";
LineSet350.color = ColorRGBA352;

Shape349.geometry = LineSet350;

HAnimSegment345.children[2] = Shape349;

HAnimJoint344.children = new MFNode();

HAnimJoint344.children[0] = HAnimSegment345;

HAnimJoint HAnimJoint353 = createNode("HAnimJoint");
HAnimJoint353.name = "r_midtarsal";
HAnimJoint353.DEF = "hanim_r_midtarsal";
HAnimJoint353.center = new SFVec3f(new float[-0.1086,0.0001,0.0368]);
HAnimJoint353.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint353.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment354 = createNode("HAnimSegment");
HAnimSegment354.name = "r_middistal";
HAnimSegment354.DEF = "hanim_r_middistal";
//<HAnimJoint name='r_midtarsal'/> visualization sphere within <HAnimSegment name='r_middistal'/>
TouchSensor TouchSensor355 = createNode("TouchSensor");
TouchSensor355.description = "HAnimJoint r_midtarsal, HAnimSegment r_middistal";
HAnimSegment354.children = new MFNode();

HAnimSegment354.children[0] = TouchSensor355;

Transform Transform356 = createNode("Transform");
Transform356.translation = new SFVec3f(new float[-0.1086,0.0001,0.0368]);
Shape Shape357 = createNode("Shape");
Shape357.USE = "HAnimJointShape";
Transform356.children = new MFNode();

Transform356.children[0] = Shape357;

HAnimSegment354.children[1] = Transform356;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_midtarsal'/> to <HAnimJoint name='r_metatarsal'/>
Shape Shape358 = createNode("Shape");
LineSet LineSet359 = createNode("LineSet");
LineSet359.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate360 = createNode("Coordinate");
Coordinate360.point = new MFVec3f(new float[-0.1086,0.0001,0.0368,-0.1086,0,0.0762]);
LineSet359.coord = Coordinate360;

ColorRGBA ColorRGBA361 = createNode("ColorRGBA");
ColorRGBA361.USE = "HAnimSegmentLineColorRGBA";
LineSet359.color = ColorRGBA361;

Shape358.geometry = LineSet359;

HAnimSegment354.children[2] = Shape358;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_midtarsal'/> to <HAnimSite name='r_metatarsal_pha1'/>
Shape Shape362 = createNode("Shape");
LineSet LineSet363 = createNode("LineSet");
LineSet363.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate364 = createNode("Coordinate");
Coordinate364.point = new MFVec3f(new float[-0.1086,0.0001,0.0368,-0.0521,0.026,0.0127]);
LineSet363.coord = Coordinate364;

ColorRGBA ColorRGBA365 = createNode("ColorRGBA");
ColorRGBA365.USE = "HAnimSiteLineColorRGBA";
LineSet363.color = ColorRGBA365;

Shape362.geometry = LineSet363;

HAnimSegment354.children[3] = Shape362;

HAnimSite HAnimSite366 = createNode("HAnimSite");
HAnimSite366.name = "r_metatarsal_pha1_pt";
HAnimSite366.DEF = "hanim_r_metatarsal_pha1_pt";
HAnimSite366.translation = new SFVec3f(new float[-0.0521,0.026,0.0127]);
//HAnimSite visualization shape
TouchSensor TouchSensor367 = createNode("TouchSensor");
TouchSensor367.description = "HAnimSite r_metatarsal_pha1";
HAnimSite366.children = new MFNode();

HAnimSite366.children[0] = TouchSensor367;

Shape Shape368 = createNode("Shape");
Shape368.USE = "HAnimSiteShape";
HAnimSite366.children[1] = Shape368;

HAnimSegment354.children[4] = HAnimSite366;

HAnimJoint353.children = new MFNode();

HAnimJoint353.children[0] = HAnimSegment354;

HAnimJoint HAnimJoint369 = createNode("HAnimJoint");
HAnimJoint369.name = "r_metatarsal";
HAnimJoint369.DEF = "hanim_r_metatarsal";
HAnimJoint369.center = new SFVec3f(new float[-0.1086,0,0.0762]);
HAnimJoint369.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint369.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment370 = createNode("HAnimSegment");
HAnimSegment370.name = "r_forefoot";
HAnimSegment370.DEF = "hanim_r_forefoot";
//<HAnimJoint name='r_metatarsal'/> visualization sphere within <HAnimSegment name='r_forefoot'/>
TouchSensor TouchSensor371 = createNode("TouchSensor");
TouchSensor371.description = "HAnimJoint r_metatarsal, HAnimSegment r_forefoot";
HAnimSegment370.children = new MFNode();

HAnimSegment370.children[0] = TouchSensor371;

Transform Transform372 = createNode("Transform");
Transform372.translation = new SFVec3f(new float[-0.1086,0,0.0762]);
Shape Shape373 = createNode("Shape");
Shape373.USE = "HAnimJointShape";
Transform372.children = new MFNode();

Transform372.children[0] = Shape373;

HAnimSegment370.children[1] = Transform372;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_forefoot_tip'/>
Shape Shape374 = createNode("Shape");
LineSet LineSet375 = createNode("LineSet");
LineSet375.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate376 = createNode("Coordinate");
Coordinate376.point = new MFVec3f(new float[-0.1086,0,0.0762,-0.1043,0.0227,0.145]);
LineSet375.coord = Coordinate376;

ColorRGBA ColorRGBA377 = createNode("ColorRGBA");
ColorRGBA377.USE = "HAnimSiteLineColorRGBA";
LineSet375.color = ColorRGBA377;

Shape374.geometry = LineSet375;

HAnimSegment370.children[2] = Shape374;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_metatarsal_pha5'/>
Shape Shape378 = createNode("Shape");
LineSet LineSet379 = createNode("LineSet");
LineSet379.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate380 = createNode("Coordinate");
Coordinate380.point = new MFVec3f(new float[-0.1086,0,0.0762,-0.1523,0.0166,0.0895]);
LineSet379.coord = Coordinate380;

ColorRGBA ColorRGBA381 = createNode("ColorRGBA");
ColorRGBA381.USE = "HAnimSiteLineColorRGBA";
LineSet379.color = ColorRGBA381;

Shape378.geometry = LineSet379;

HAnimSegment370.children[3] = Shape378;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_digit2'/>
Shape Shape382 = createNode("Shape");
LineSet LineSet383 = createNode("LineSet");
LineSet383.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate384 = createNode("Coordinate");
Coordinate384.point = new MFVec3f(new float[-0.1086,0,0.0762,-0.0883,0.0134,0.1383]);
LineSet383.coord = Coordinate384;

ColorRGBA ColorRGBA385 = createNode("ColorRGBA");
ColorRGBA385.USE = "HAnimSiteLineColorRGBA";
LineSet383.color = ColorRGBA385;

Shape382.geometry = LineSet383;

HAnimSegment370.children[4] = Shape382;

HAnimSite HAnimSite386 = createNode("HAnimSite");
HAnimSite386.name = "r_forefoot_tip";
HAnimSite386.DEF = "hanim_r_forefoot_tip";
HAnimSite386.translation = new SFVec3f(new float[-0.1043,0.0227,0.145]);
//HAnimSite visualization shape
TouchSensor TouchSensor387 = createNode("TouchSensor");
TouchSensor387.description = "HAnimSite r_forefoot_tip";
HAnimSite386.children = new MFNode();

HAnimSite386.children[0] = TouchSensor387;

Shape Shape388 = createNode("Shape");
Shape388.USE = "HAnimSiteShape";
HAnimSite386.children[1] = Shape388;

HAnimSegment370.children[5] = HAnimSite386;

HAnimSite HAnimSite389 = createNode("HAnimSite");
HAnimSite389.name = "r_metatarsal_pha5_pt";
HAnimSite389.DEF = "hanim_r_metatarsal_pha5_pt";
HAnimSite389.translation = new SFVec3f(new float[-0.1523,0.0166,0.0895]);
//HAnimSite visualization shape
TouchSensor TouchSensor390 = createNode("TouchSensor");
TouchSensor390.description = "HAnimSite r_metatarsal_pha5";
HAnimSite389.children = new MFNode();

HAnimSite389.children[0] = TouchSensor390;

Shape Shape391 = createNode("Shape");
Shape391.USE = "HAnimSiteShape";
HAnimSite389.children[1] = Shape391;

HAnimSegment370.children[6] = HAnimSite389;

HAnimSite HAnimSite392 = createNode("HAnimSite");
HAnimSite392.name = "r_digit2_pt";
HAnimSite392.DEF = "hanim_r_digit2_pt";
HAnimSite392.translation = new SFVec3f(new float[-0.0883,0.0134,0.1383]);
//HAnimSite visualization shape
TouchSensor TouchSensor393 = createNode("TouchSensor");
TouchSensor393.description = "HAnimSite r_digit2";
HAnimSite392.children = new MFNode();

HAnimSite392.children[0] = TouchSensor393;

Shape Shape394 = createNode("Shape");
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

HAnimJoint HAnimJoint395 = createNode("HAnimJoint");
HAnimJoint395.name = "vl5";
HAnimJoint395.DEF = "hanim_vl5";
HAnimJoint395.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimJoint395.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint395.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment396 = createNode("HAnimSegment");
HAnimSegment396.name = "l5";
HAnimSegment396.DEF = "hanim_l5";
//<HAnimJoint name='vl5'/> visualization sphere within <HAnimSegment name='l5'/>
TouchSensor TouchSensor397 = createNode("TouchSensor");
TouchSensor397.description = "HAnimJoint vl5, HAnimSegment l5";
HAnimSegment396.children = new MFNode();

HAnimSegment396.children[0] = TouchSensor397;

Transform Transform398 = createNode("Transform");
Transform398.translation = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
Shape Shape399 = createNode("Shape");
Shape399.USE = "HAnimJointShape";
Transform398.children = new MFNode();

Transform398.children[0] = Shape399;

HAnimSegment396.children[1] = Transform398;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl5'/> to <HAnimJoint name='vl4'/>
Shape Shape400 = createNode("Shape");
LineSet LineSet401 = createNode("LineSet");
LineSet401.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate402 = createNode("Coordinate");
Coordinate402.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787]);
LineSet401.coord = Coordinate402;

ColorRGBA ColorRGBA403 = createNode("ColorRGBA");
ColorRGBA403.USE = "HAnimSegmentLineColorRGBA";
LineSet401.color = ColorRGBA403;

Shape400.geometry = LineSet401;

HAnimSegment396.children[2] = Shape400;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='waist_preferred_post'/>
Shape Shape404 = createNode("Shape");
LineSet LineSet405 = createNode("LineSet");
LineSet405.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate406 = createNode("Coordinate");
Coordinate406.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0,1.0915,-0.1091]);
LineSet405.coord = Coordinate406;

ColorRGBA ColorRGBA407 = createNode("ColorRGBA");
ColorRGBA407.USE = "HAnimSiteLineColorRGBA";
LineSet405.color = ColorRGBA407;

Shape404.geometry = LineSet405;

HAnimSegment396.children[3] = Shape404;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='navel'/>
Shape Shape408 = createNode("Shape");
LineSet LineSet409 = createNode("LineSet");
LineSet409.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate410 = createNode("Coordinate");
Coordinate410.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0069,1.0966,0.1017]);
LineSet409.coord = Coordinate410;

ColorRGBA ColorRGBA411 = createNode("ColorRGBA");
ColorRGBA411.USE = "HAnimSiteLineColorRGBA";
LineSet409.color = ColorRGBA411;

Shape408.geometry = LineSet409;

HAnimSegment396.children[4] = Shape408;

HAnimSite HAnimSite412 = createNode("HAnimSite");
HAnimSite412.name = "waist_preferred_post_pt";
HAnimSite412.DEF = "hanim_waist_preferred_post_pt";
HAnimSite412.translation = new SFVec3f(new float[0,1.0915,-0.1091]);
//HAnimSite visualization shape
TouchSensor TouchSensor413 = createNode("TouchSensor");
TouchSensor413.description = "HAnimSite waist_preferred_post";
HAnimSite412.children = new MFNode();

HAnimSite412.children[0] = TouchSensor413;

Shape Shape414 = createNode("Shape");
Shape414.USE = "HAnimSiteShape";
HAnimSite412.children[1] = Shape414;

HAnimSegment396.children[5] = HAnimSite412;

HAnimSite HAnimSite415 = createNode("HAnimSite");
HAnimSite415.name = "navel_pt";
HAnimSite415.DEF = "hanim_navel_pt";
HAnimSite415.translation = new SFVec3f(new float[0.0069,1.0966,0.1017]);
//HAnimSite visualization shape
TouchSensor TouchSensor416 = createNode("TouchSensor");
TouchSensor416.description = "HAnimSite navel";
HAnimSite415.children = new MFNode();

HAnimSite415.children[0] = TouchSensor416;

Shape Shape417 = createNode("Shape");
Shape417.USE = "HAnimSiteShape";
HAnimSite415.children[1] = Shape417;

HAnimSegment396.children[6] = HAnimSite415;

HAnimJoint395.children = new MFNode();

HAnimJoint395.children[0] = HAnimSegment396;

HAnimJoint HAnimJoint418 = createNode("HAnimJoint");
HAnimJoint418.name = "vl4";
HAnimJoint418.DEF = "hanim_vl4";
HAnimJoint418.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
HAnimJoint418.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint418.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment419 = createNode("HAnimSegment");
HAnimSegment419.name = "l4";
HAnimSegment419.DEF = "hanim_l4";
//<HAnimJoint name='vl4'/> visualization sphere within <HAnimSegment name='l4'/>
TouchSensor TouchSensor420 = createNode("TouchSensor");
TouchSensor420.description = "HAnimJoint vl4, HAnimSegment l4";
HAnimSegment419.children = new MFNode();

HAnimSegment419.children[0] = TouchSensor420;

Transform Transform421 = createNode("Transform");
Transform421.translation = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
Shape Shape422 = createNode("Shape");
Shape422.USE = "HAnimJointShape";
Transform421.children = new MFNode();

Transform421.children[0] = Shape422;

HAnimSegment419.children[1] = Transform421;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl4'/> to <HAnimJoint name='vl3'/>
Shape Shape423 = createNode("Shape");
LineSet LineSet424 = createNode("LineSet");
LineSet424.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate425 = createNode("Coordinate");
Coordinate425.point = new MFVec3f(new float[0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796]);
LineSet424.coord = Coordinate425;

ColorRGBA ColorRGBA426 = createNode("ColorRGBA");
ColorRGBA426.USE = "HAnimSegmentLineColorRGBA";
LineSet424.color = ColorRGBA426;

Shape423.geometry = LineSet424;

HAnimSegment419.children[2] = Shape423;

HAnimJoint418.children = new MFNode();

HAnimJoint418.children[0] = HAnimSegment419;

HAnimJoint HAnimJoint427 = createNode("HAnimJoint");
HAnimJoint427.name = "vl3";
HAnimJoint427.DEF = "hanim_vl3";
HAnimJoint427.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimJoint427.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint427.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment428 = createNode("HAnimSegment");
HAnimSegment428.name = "l3";
HAnimSegment428.DEF = "hanim_l3";
//<HAnimJoint name='vl3'/> visualization sphere within <HAnimSegment name='l3'/>
TouchSensor TouchSensor429 = createNode("TouchSensor");
TouchSensor429.description = "HAnimJoint vl3, HAnimSegment l3";
HAnimSegment428.children = new MFNode();

HAnimSegment428.children[0] = TouchSensor429;

Transform Transform430 = createNode("Transform");
Transform430.translation = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
Shape Shape431 = createNode("Shape");
Shape431.USE = "HAnimJointShape";
Transform430.children = new MFNode();

Transform430.children[0] = Shape431;

HAnimSegment428.children[1] = Transform430;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl3'/> to <HAnimJoint name='vl2'/>
Shape Shape432 = createNode("Shape");
LineSet LineSet433 = createNode("LineSet");
LineSet433.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate434 = createNode("Coordinate");
Coordinate434.point = new MFVec3f(new float[0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08]);
LineSet433.coord = Coordinate434;

ColorRGBA ColorRGBA435 = createNode("ColorRGBA");
ColorRGBA435.USE = "HAnimSegmentLineColorRGBA";
LineSet433.color = ColorRGBA435;

Shape432.geometry = LineSet433;

HAnimSegment428.children[2] = Shape432;

HAnimJoint427.children = new MFNode();

HAnimJoint427.children[0] = HAnimSegment428;

HAnimJoint HAnimJoint436 = createNode("HAnimJoint");
HAnimJoint436.name = "vl2";
HAnimJoint436.DEF = "hanim_vl2";
HAnimJoint436.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
HAnimJoint436.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint436.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment437 = createNode("HAnimSegment");
HAnimSegment437.name = "l2";
HAnimSegment437.DEF = "hanim_l2";
//<HAnimJoint name='vl2'/> visualization sphere within <HAnimSegment name='l2'/>
TouchSensor TouchSensor438 = createNode("TouchSensor");
TouchSensor438.description = "HAnimJoint vl2, HAnimSegment l2";
HAnimSegment437.children = new MFNode();

HAnimSegment437.children[0] = TouchSensor438;

Transform Transform439 = createNode("Transform");
Transform439.translation = new SFVec3f(new float[0.0045,1.1546,-0.08]);
Shape Shape440 = createNode("Shape");
Shape440.USE = "HAnimJointShape";
Transform439.children = new MFNode();

Transform439.children[0] = Shape440;

HAnimSegment437.children[1] = Transform439;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl2'/> to <HAnimJoint name='vl1'/>
Shape Shape441 = createNode("Shape");
LineSet LineSet442 = createNode("LineSet");
LineSet442.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate443 = createNode("Coordinate");
Coordinate443.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805]);
LineSet442.coord = Coordinate443;

ColorRGBA ColorRGBA444 = createNode("ColorRGBA");
ColorRGBA444.USE = "HAnimSegmentLineColorRGBA";
LineSet442.color = ColorRGBA444;

Shape441.geometry = LineSet442;

HAnimSegment437.children[2] = Shape441;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='r_rib10'/>
Shape Shape445 = createNode("Shape");
LineSet LineSet446 = createNode("LineSet");
LineSet446.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate447 = createNode("Coordinate");
Coordinate447.point = new MFVec3f(new float[0.0045,1.1546,-0.08,-0.0711,1.1941,0.1016]);
LineSet446.coord = Coordinate447;

ColorRGBA ColorRGBA448 = createNode("ColorRGBA");
ColorRGBA448.USE = "HAnimSiteLineColorRGBA";
LineSet446.color = ColorRGBA448;

Shape445.geometry = LineSet446;

HAnimSegment437.children[3] = Shape445;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='l_rib10'/>
Shape Shape449 = createNode("Shape");
LineSet LineSet450 = createNode("LineSet");
LineSet450.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate451 = createNode("Coordinate");
Coordinate451.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0871,1.1925,0.0992]);
LineSet450.coord = Coordinate451;

ColorRGBA ColorRGBA452 = createNode("ColorRGBA");
ColorRGBA452.USE = "HAnimSiteLineColorRGBA";
LineSet450.color = ColorRGBA452;

Shape449.geometry = LineSet450;

HAnimSegment437.children[4] = Shape449;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='rib10_midspine'/>
Shape Shape453 = createNode("Shape");
LineSet LineSet454 = createNode("LineSet");
LineSet454.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate455 = createNode("Coordinate");
Coordinate455.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0049,1.1908,-0.1113]);
LineSet454.coord = Coordinate455;

ColorRGBA ColorRGBA456 = createNode("ColorRGBA");
ColorRGBA456.USE = "HAnimSiteLineColorRGBA";
LineSet454.color = ColorRGBA456;

Shape453.geometry = LineSet454;

HAnimSegment437.children[5] = Shape453;

HAnimSite HAnimSite457 = createNode("HAnimSite");
HAnimSite457.name = "r_rib10_pt";
HAnimSite457.DEF = "hanim_r_rib10_pt";
HAnimSite457.translation = new SFVec3f(new float[-0.0711,1.1941,0.1016]);
//HAnimSite visualization shape
TouchSensor TouchSensor458 = createNode("TouchSensor");
TouchSensor458.description = "HAnimSite r_rib10";
HAnimSite457.children = new MFNode();

HAnimSite457.children[0] = TouchSensor458;

Shape Shape459 = createNode("Shape");
Shape459.USE = "HAnimSiteShape";
HAnimSite457.children[1] = Shape459;

HAnimSegment437.children[6] = HAnimSite457;

HAnimSite HAnimSite460 = createNode("HAnimSite");
HAnimSite460.name = "l_rib10_pt";
HAnimSite460.DEF = "hanim_l_rib10_pt";
HAnimSite460.translation = new SFVec3f(new float[0.0871,1.1925,0.0992]);
//HAnimSite visualization shape
TouchSensor TouchSensor461 = createNode("TouchSensor");
TouchSensor461.description = "HAnimSite l_rib10";
HAnimSite460.children = new MFNode();

HAnimSite460.children[0] = TouchSensor461;

Shape Shape462 = createNode("Shape");
Shape462.USE = "HAnimSiteShape";
HAnimSite460.children[1] = Shape462;

HAnimSegment437.children[7] = HAnimSite460;

HAnimSite HAnimSite463 = createNode("HAnimSite");
HAnimSite463.name = "rib10_midspine_pt";
HAnimSite463.DEF = "hanim_rib10_midspine_pt";
HAnimSite463.translation = new SFVec3f(new float[0.0049,1.1908,-0.1113]);
//HAnimSite visualization shape
TouchSensor TouchSensor464 = createNode("TouchSensor");
TouchSensor464.description = "HAnimSite rib10_midspine";
HAnimSite463.children = new MFNode();

HAnimSite463.children[0] = TouchSensor464;

Shape Shape465 = createNode("Shape");
Shape465.USE = "HAnimSiteShape";
HAnimSite463.children[1] = Shape465;

HAnimSegment437.children[8] = HAnimSite463;

HAnimJoint436.children = new MFNode();

HAnimJoint436.children[0] = HAnimSegment437;

HAnimJoint HAnimJoint466 = createNode("HAnimJoint");
HAnimJoint466.name = "vl1";
HAnimJoint466.DEF = "hanim_vl1";
HAnimJoint466.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimJoint466.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint466.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment467 = createNode("HAnimSegment");
HAnimSegment467.name = "l1";
HAnimSegment467.DEF = "hanim_l1";
//<HAnimJoint name='vl1'/> visualization sphere within <HAnimSegment name='l1'/>
TouchSensor TouchSensor468 = createNode("TouchSensor");
TouchSensor468.description = "HAnimJoint vl1, HAnimSegment l1";
HAnimSegment467.children = new MFNode();

HAnimSegment467.children[0] = TouchSensor468;

Transform Transform469 = createNode("Transform");
Transform469.translation = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
Shape Shape470 = createNode("Shape");
Shape470.USE = "HAnimJointShape";
Transform469.children = new MFNode();

Transform469.children[0] = Shape470;

HAnimSegment467.children[1] = Transform469;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl1'/> to <HAnimJoint name='vt12'/>
Shape Shape471 = createNode("Shape");
LineSet LineSet472 = createNode("LineSet");
LineSet472.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate473 = createNode("Coordinate");
Coordinate473.point = new MFVec3f(new float[0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808]);
LineSet472.coord = Coordinate473;

ColorRGBA ColorRGBA474 = createNode("ColorRGBA");
ColorRGBA474.USE = "HAnimSegmentLineColorRGBA";
LineSet472.color = ColorRGBA474;

Shape471.geometry = LineSet472;

HAnimSegment467.children[2] = Shape471;

HAnimJoint466.children = new MFNode();

HAnimJoint466.children[0] = HAnimSegment467;

HAnimJoint HAnimJoint475 = createNode("HAnimJoint");
HAnimJoint475.name = "vt12";
HAnimJoint475.DEF = "hanim_vt12";
HAnimJoint475.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
HAnimJoint475.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint475.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment476 = createNode("HAnimSegment");
HAnimSegment476.name = "t12";
HAnimSegment476.DEF = "hanim_t12";
//<HAnimJoint name='vt12'/> visualization sphere within <HAnimSegment name='t12'/>
TouchSensor TouchSensor477 = createNode("TouchSensor");
TouchSensor477.description = "HAnimJoint vt12, HAnimSegment t12";
HAnimSegment476.children = new MFNode();

HAnimSegment476.children[0] = TouchSensor477;

Transform Transform478 = createNode("Transform");
Transform478.translation = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
Shape Shape479 = createNode("Shape");
Shape479.USE = "HAnimJointShape";
Transform478.children = new MFNode();

Transform478.children[0] = Shape479;

HAnimSegment476.children[1] = Transform478;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt12'/> to <HAnimJoint name='vt11'/>
Shape Shape480 = createNode("Shape");
LineSet LineSet481 = createNode("LineSet");
LineSet481.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate482 = createNode("Coordinate");
Coordinate482.point = new MFVec3f(new float[0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081]);
LineSet481.coord = Coordinate482;

ColorRGBA ColorRGBA483 = createNode("ColorRGBA");
ColorRGBA483.USE = "HAnimSegmentLineColorRGBA";
LineSet481.color = ColorRGBA483;

Shape480.geometry = LineSet481;

HAnimSegment476.children[2] = Shape480;

HAnimJoint475.children = new MFNode();

HAnimJoint475.children[0] = HAnimSegment476;

HAnimJoint HAnimJoint484 = createNode("HAnimJoint");
HAnimJoint484.name = "vt11";
HAnimJoint484.DEF = "hanim_vt11";
HAnimJoint484.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
HAnimJoint484.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint484.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment485 = createNode("HAnimSegment");
HAnimSegment485.name = "t11";
HAnimSegment485.DEF = "hanim_t11";
//<HAnimJoint name='vt11'/> visualization sphere within <HAnimSegment name='t11'/>
TouchSensor TouchSensor486 = createNode("TouchSensor");
TouchSensor486.description = "HAnimJoint vt11, HAnimSegment t11";
HAnimSegment485.children = new MFNode();

HAnimSegment485.children[0] = TouchSensor486;

Transform Transform487 = createNode("Transform");
Transform487.translation = new SFVec3f(new float[0.0053,1.2679,-0.081]);
Shape Shape488 = createNode("Shape");
Shape488.USE = "HAnimJointShape";
Transform487.children = new MFNode();

Transform487.children[0] = Shape488;

HAnimSegment485.children[1] = Transform487;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt11'/> to <HAnimJoint name='vt10'/>
Shape Shape489 = createNode("Shape");
LineSet LineSet490 = createNode("LineSet");
LineSet490.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate491 = createNode("Coordinate");
Coordinate491.point = new MFVec3f(new float[0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822]);
LineSet490.coord = Coordinate491;

ColorRGBA ColorRGBA492 = createNode("ColorRGBA");
ColorRGBA492.USE = "HAnimSegmentLineColorRGBA";
LineSet490.color = ColorRGBA492;

Shape489.geometry = LineSet490;

HAnimSegment485.children[2] = Shape489;

HAnimJoint484.children = new MFNode();

HAnimJoint484.children[0] = HAnimSegment485;

HAnimJoint HAnimJoint493 = createNode("HAnimJoint");
HAnimJoint493.name = "vt10";
HAnimJoint493.DEF = "hanim_vt10";
HAnimJoint493.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimJoint493.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint493.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment494 = createNode("HAnimSegment");
HAnimSegment494.name = "t10";
HAnimSegment494.DEF = "hanim_t10";
//<HAnimJoint name='vt10'/> visualization sphere within <HAnimSegment name='t10'/>
TouchSensor TouchSensor495 = createNode("TouchSensor");
TouchSensor495.description = "HAnimJoint vt10, HAnimSegment t10";
HAnimSegment494.children = new MFNode();

HAnimSegment494.children[0] = TouchSensor495;

Transform Transform496 = createNode("Transform");
Transform496.translation = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
Shape Shape497 = createNode("Shape");
Shape497.USE = "HAnimJointShape";
Transform496.children = new MFNode();

Transform496.children[0] = Shape497;

HAnimSegment494.children[1] = Transform496;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt10'/> to <HAnimJoint name='vt9'/>
Shape Shape498 = createNode("Shape");
LineSet LineSet499 = createNode("LineSet");
LineSet499.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate500 = createNode("Coordinate");
Coordinate500.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838]);
LineSet499.coord = Coordinate500;

ColorRGBA ColorRGBA501 = createNode("ColorRGBA");
ColorRGBA501.USE = "HAnimSegmentLineColorRGBA";
LineSet499.color = ColorRGBA501;

Shape498.geometry = LineSet499;

HAnimSegment494.children[2] = Shape498;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt10'/> to <HAnimSite name='substernale'/>
Shape Shape502 = createNode("Shape");
LineSet LineSet503 = createNode("LineSet");
LineSet503.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate504 = createNode("Coordinate");
Coordinate504.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0085,1.2995,0.1147]);
LineSet503.coord = Coordinate504;

ColorRGBA ColorRGBA505 = createNode("ColorRGBA");
ColorRGBA505.USE = "HAnimSiteLineColorRGBA";
LineSet503.color = ColorRGBA505;

Shape502.geometry = LineSet503;

HAnimSegment494.children[3] = Shape502;

HAnimSite HAnimSite506 = createNode("HAnimSite");
HAnimSite506.name = "substernale_pt";
HAnimSite506.DEF = "hanim_substernale_pt";
HAnimSite506.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
//HAnimSite visualization shape
TouchSensor TouchSensor507 = createNode("TouchSensor");
TouchSensor507.description = "HAnimSite substernale";
HAnimSite506.children = new MFNode();

HAnimSite506.children[0] = TouchSensor507;

Shape Shape508 = createNode("Shape");
Shape508.USE = "HAnimSiteShape";
HAnimSite506.children[1] = Shape508;

HAnimSegment494.children[4] = HAnimSite506;

HAnimJoint493.children = new MFNode();

HAnimJoint493.children[0] = HAnimSegment494;

HAnimJoint HAnimJoint509 = createNode("HAnimJoint");
HAnimJoint509.name = "vt9";
HAnimJoint509.DEF = "hanim_vt9";
HAnimJoint509.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
HAnimJoint509.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint509.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment510 = createNode("HAnimSegment");
HAnimSegment510.name = "t9";
HAnimSegment510.DEF = "hanim_t9";
//<HAnimJoint name='vt9'/> visualization sphere within <HAnimSegment name='t9'/>
TouchSensor TouchSensor511 = createNode("TouchSensor");
TouchSensor511.description = "HAnimJoint vt9, HAnimSegment t9";
HAnimSegment510.children = new MFNode();

HAnimSegment510.children[0] = TouchSensor511;

Transform Transform512 = createNode("Transform");
Transform512.translation = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
Shape Shape513 = createNode("Shape");
Shape513.USE = "HAnimJointShape";
Transform512.children = new MFNode();

Transform512.children[0] = Shape513;

HAnimSegment510.children[1] = Transform512;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt9'/> to <HAnimJoint name='vt8'/>
Shape Shape514 = createNode("Shape");
LineSet LineSet515 = createNode("LineSet");
LineSet515.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate516 = createNode("Coordinate");
Coordinate516.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845]);
LineSet515.coord = Coordinate516;

ColorRGBA ColorRGBA517 = createNode("ColorRGBA");
ColorRGBA517.USE = "HAnimSegmentLineColorRGBA";
LineSet515.color = ColorRGBA517;

Shape514.geometry = LineSet515;

HAnimSegment510.children[2] = Shape514;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='r_thelion'/>
Shape Shape518 = createNode("Shape");
LineSet LineSet519 = createNode("LineSet");
LineSet519.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate520 = createNode("Coordinate");
Coordinate520.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,-0.0736,1.3385,0.1217]);
LineSet519.coord = Coordinate520;

ColorRGBA ColorRGBA521 = createNode("ColorRGBA");
ColorRGBA521.USE = "HAnimSiteLineColorRGBA";
LineSet519.color = ColorRGBA521;

Shape518.geometry = LineSet519;

HAnimSegment510.children[3] = Shape518;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='l_thelion'/>
Shape Shape522 = createNode("Shape");
LineSet LineSet523 = createNode("LineSet");
LineSet523.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate524 = createNode("Coordinate");
Coordinate524.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0918,1.3382,0.1192]);
LineSet523.coord = Coordinate524;

ColorRGBA ColorRGBA525 = createNode("ColorRGBA");
ColorRGBA525.USE = "HAnimSiteLineColorRGBA";
LineSet523.color = ColorRGBA525;

Shape522.geometry = LineSet523;

HAnimSegment510.children[4] = Shape522;

HAnimSite HAnimSite526 = createNode("HAnimSite");
HAnimSite526.name = "r_thelion_pt";
HAnimSite526.DEF = "hanim_r_thelion_pt";
HAnimSite526.translation = new SFVec3f(new float[-0.0736,1.3385,0.1217]);
//HAnimSite visualization shape
TouchSensor TouchSensor527 = createNode("TouchSensor");
TouchSensor527.description = "HAnimSite r_thelion";
HAnimSite526.children = new MFNode();

HAnimSite526.children[0] = TouchSensor527;

Shape Shape528 = createNode("Shape");
Shape528.USE = "HAnimSiteShape";
HAnimSite526.children[1] = Shape528;

HAnimSegment510.children[5] = HAnimSite526;

HAnimSite HAnimSite529 = createNode("HAnimSite");
HAnimSite529.name = "l_thelion_pt";
HAnimSite529.DEF = "hanim_l_thelion_pt";
HAnimSite529.translation = new SFVec3f(new float[0.0918,1.3382,0.1192]);
//HAnimSite visualization shape
TouchSensor TouchSensor530 = createNode("TouchSensor");
TouchSensor530.description = "HAnimSite l_thelion";
HAnimSite529.children = new MFNode();

HAnimSite529.children[0] = TouchSensor530;

Shape Shape531 = createNode("Shape");
Shape531.USE = "HAnimSiteShape";
HAnimSite529.children[1] = Shape531;

HAnimSegment510.children[6] = HAnimSite529;

HAnimJoint509.children = new MFNode();

HAnimJoint509.children[0] = HAnimSegment510;

HAnimJoint HAnimJoint532 = createNode("HAnimJoint");
HAnimJoint532.name = "vt8";
HAnimJoint532.DEF = "hanim_vt8";
HAnimJoint532.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
HAnimJoint532.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint532.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment533 = createNode("HAnimSegment");
HAnimSegment533.name = "t8";
HAnimSegment533.DEF = "hanim_t8";
//<HAnimJoint name='vt8'/> visualization sphere within <HAnimSegment name='t8'/>
TouchSensor TouchSensor534 = createNode("TouchSensor");
TouchSensor534.description = "HAnimJoint vt8, HAnimSegment t8";
HAnimSegment533.children = new MFNode();

HAnimSegment533.children[0] = TouchSensor534;

Transform Transform535 = createNode("Transform");
Transform535.translation = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
Shape Shape536 = createNode("Shape");
Shape536.USE = "HAnimJointShape";
Transform535.children = new MFNode();

Transform535.children[0] = Shape536;

HAnimSegment533.children[1] = Transform535;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt8'/> to <HAnimJoint name='vt7'/>
Shape Shape537 = createNode("Shape");
LineSet LineSet538 = createNode("LineSet");
LineSet538.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate539 = createNode("Coordinate");
Coordinate539.point = new MFVec3f(new float[0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833]);
LineSet538.coord = Coordinate539;

ColorRGBA ColorRGBA540 = createNode("ColorRGBA");
ColorRGBA540.USE = "HAnimSegmentLineColorRGBA";
LineSet538.color = ColorRGBA540;

Shape537.geometry = LineSet538;

HAnimSegment533.children[2] = Shape537;

HAnimJoint532.children = new MFNode();

HAnimJoint532.children[0] = HAnimSegment533;

HAnimJoint HAnimJoint541 = createNode("HAnimJoint");
HAnimJoint541.name = "vt7";
HAnimJoint541.DEF = "hanim_vt7";
HAnimJoint541.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
HAnimJoint541.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint541.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment542 = createNode("HAnimSegment");
HAnimSegment542.name = "t7";
HAnimSegment542.DEF = "hanim_t7";
//<HAnimJoint name='vt7'/> visualization sphere within <HAnimSegment name='t7'/>
TouchSensor TouchSensor543 = createNode("TouchSensor");
TouchSensor543.description = "HAnimJoint vt7, HAnimSegment t7";
HAnimSegment542.children = new MFNode();

HAnimSegment542.children[0] = TouchSensor543;

Transform Transform544 = createNode("Transform");
Transform544.translation = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
Shape Shape545 = createNode("Shape");
Shape545.USE = "HAnimJointShape";
Transform544.children = new MFNode();

Transform544.children[0] = Shape545;

HAnimSegment542.children[1] = Transform544;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt7'/> to <HAnimJoint name='vt6'/>
Shape Shape546 = createNode("Shape");
LineSet LineSet547 = createNode("LineSet");
LineSet547.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate548 = createNode("Coordinate");
Coordinate548.point = new MFVec3f(new float[0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08]);
LineSet547.coord = Coordinate548;

ColorRGBA ColorRGBA549 = createNode("ColorRGBA");
ColorRGBA549.USE = "HAnimSegmentLineColorRGBA";
LineSet547.color = ColorRGBA549;

Shape546.geometry = LineSet547;

HAnimSegment542.children[2] = Shape546;

HAnimJoint541.children = new MFNode();

HAnimJoint541.children[0] = HAnimSegment542;

HAnimJoint HAnimJoint550 = createNode("HAnimJoint");
HAnimJoint550.name = "vt6";
HAnimJoint550.DEF = "hanim_vt6";
HAnimJoint550.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimJoint550.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint550.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment551 = createNode("HAnimSegment");
HAnimSegment551.name = "t6";
HAnimSegment551.DEF = "hanim_t6";
//<HAnimJoint name='vt6'/> visualization sphere within <HAnimSegment name='t6'/>
TouchSensor TouchSensor552 = createNode("TouchSensor");
TouchSensor552.description = "HAnimJoint vt6, HAnimSegment t6";
HAnimSegment551.children = new MFNode();

HAnimSegment551.children[0] = TouchSensor552;

Transform Transform553 = createNode("Transform");
Transform553.translation = new SFVec3f(new float[0.0059,1.3866,-0.08]);
Shape Shape554 = createNode("Shape");
Shape554.USE = "HAnimJointShape";
Transform553.children = new MFNode();

Transform553.children[0] = Shape554;

HAnimSegment551.children[1] = Transform553;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt6'/> to <HAnimJoint name='vt5'/>
Shape Shape555 = createNode("Shape");
LineSet LineSet556 = createNode("LineSet");
LineSet556.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate557 = createNode("Coordinate");
Coordinate557.point = new MFVec3f(new float[0.0059,1.3866,-0.08,0.006,1.4102,-0.0745]);
LineSet556.coord = Coordinate557;

ColorRGBA ColorRGBA558 = createNode("ColorRGBA");
ColorRGBA558.USE = "HAnimSegmentLineColorRGBA";
LineSet556.color = ColorRGBA558;

Shape555.geometry = LineSet556;

HAnimSegment551.children[2] = Shape555;

HAnimJoint550.children = new MFNode();

HAnimJoint550.children[0] = HAnimSegment551;

HAnimJoint HAnimJoint559 = createNode("HAnimJoint");
HAnimJoint559.name = "vt5";
HAnimJoint559.DEF = "hanim_vt5";
HAnimJoint559.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
HAnimJoint559.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint559.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment560 = createNode("HAnimSegment");
HAnimSegment560.name = "t5";
HAnimSegment560.DEF = "hanim_t5";
//<HAnimJoint name='vt5'/> visualization sphere within <HAnimSegment name='t5'/>
TouchSensor TouchSensor561 = createNode("TouchSensor");
TouchSensor561.description = "HAnimJoint vt5, HAnimSegment t5";
HAnimSegment560.children = new MFNode();

HAnimSegment560.children[0] = TouchSensor561;

Transform Transform562 = createNode("Transform");
Transform562.translation = new SFVec3f(new float[0.006,1.4102,-0.0745]);
Shape Shape563 = createNode("Shape");
Shape563.USE = "HAnimJointShape";
Transform562.children = new MFNode();

Transform562.children[0] = Shape563;

HAnimSegment560.children[1] = Transform562;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt5'/> to <HAnimJoint name='vt4'/>
Shape Shape564 = createNode("Shape");
LineSet LineSet565 = createNode("LineSet");
LineSet565.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate566 = createNode("Coordinate");
Coordinate566.point = new MFVec3f(new float[0.006,1.4102,-0.0745,0.0061,1.432,-0.0675]);
LineSet565.coord = Coordinate566;

ColorRGBA ColorRGBA567 = createNode("ColorRGBA");
ColorRGBA567.USE = "HAnimSegmentLineColorRGBA";
LineSet565.color = ColorRGBA567;

Shape564.geometry = LineSet565;

HAnimSegment560.children[2] = Shape564;

HAnimJoint559.children = new MFNode();

HAnimJoint559.children[0] = HAnimSegment560;

HAnimJoint HAnimJoint568 = createNode("HAnimJoint");
HAnimJoint568.name = "vt4";
HAnimJoint568.DEF = "hanim_vt4";
HAnimJoint568.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
HAnimJoint568.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint568.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment569 = createNode("HAnimSegment");
HAnimSegment569.name = "t4";
HAnimSegment569.DEF = "hanim_t4";
//<HAnimJoint name='vt4'/> visualization sphere within <HAnimSegment name='t4'/>
TouchSensor TouchSensor570 = createNode("TouchSensor");
TouchSensor570.description = "HAnimJoint vt4, HAnimSegment t4";
HAnimSegment569.children = new MFNode();

HAnimSegment569.children[0] = TouchSensor570;

Transform Transform571 = createNode("Transform");
Transform571.translation = new SFVec3f(new float[0.0061,1.432,-0.0675]);
Shape Shape572 = createNode("Shape");
Shape572.USE = "HAnimJointShape";
Transform571.children = new MFNode();

Transform571.children[0] = Shape572;

HAnimSegment569.children[1] = Transform571;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt4'/> to <HAnimJoint name='vt3'/>
Shape Shape573 = createNode("Shape");
LineSet LineSet574 = createNode("LineSet");
LineSet574.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate575 = createNode("Coordinate");
Coordinate575.point = new MFVec3f(new float[0.0061,1.432,-0.0675,0.0062,1.4583,-0.057]);
LineSet574.coord = Coordinate575;

ColorRGBA ColorRGBA576 = createNode("ColorRGBA");
ColorRGBA576.USE = "HAnimSegmentLineColorRGBA";
LineSet574.color = ColorRGBA576;

Shape573.geometry = LineSet574;

HAnimSegment569.children[2] = Shape573;

HAnimJoint568.children = new MFNode();

HAnimJoint568.children[0] = HAnimSegment569;

HAnimJoint HAnimJoint577 = createNode("HAnimJoint");
HAnimJoint577.name = "vt3";
HAnimJoint577.DEF = "hanim_vt3";
HAnimJoint577.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
HAnimJoint577.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint577.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment578 = createNode("HAnimSegment");
HAnimSegment578.name = "t3";
HAnimSegment578.DEF = "hanim_t3";
//<HAnimJoint name='vt3'/> visualization sphere within <HAnimSegment name='t3'/>
TouchSensor TouchSensor579 = createNode("TouchSensor");
TouchSensor579.description = "HAnimJoint vt3, HAnimSegment t3";
HAnimSegment578.children = new MFNode();

HAnimSegment578.children[0] = TouchSensor579;

Transform Transform580 = createNode("Transform");
Transform580.translation = new SFVec3f(new float[0.0062,1.4583,-0.057]);
Shape Shape581 = createNode("Shape");
Shape581.USE = "HAnimJointShape";
Transform580.children = new MFNode();

Transform580.children[0] = Shape581;

HAnimSegment578.children[1] = Transform580;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt3'/> to <HAnimJoint name='vt2'/>
Shape Shape582 = createNode("Shape");
LineSet LineSet583 = createNode("LineSet");
LineSet583.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate584 = createNode("Coordinate");
Coordinate584.point = new MFVec3f(new float[0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484]);
LineSet583.coord = Coordinate584;

ColorRGBA ColorRGBA585 = createNode("ColorRGBA");
ColorRGBA585.USE = "HAnimSegmentLineColorRGBA";
LineSet583.color = ColorRGBA585;

Shape582.geometry = LineSet583;

HAnimSegment578.children[2] = Shape582;

HAnimJoint577.children = new MFNode();

HAnimJoint577.children[0] = HAnimSegment578;

HAnimJoint HAnimJoint586 = createNode("HAnimJoint");
HAnimJoint586.name = "vt2";
HAnimJoint586.DEF = "hanim_vt2";
HAnimJoint586.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
HAnimJoint586.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint586.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment587 = createNode("HAnimSegment");
HAnimSegment587.name = "t2";
HAnimSegment587.DEF = "hanim_t2";
//<HAnimJoint name='vt2'/> visualization sphere within <HAnimSegment name='t2'/>
TouchSensor TouchSensor588 = createNode("TouchSensor");
TouchSensor588.description = "HAnimJoint vt2, HAnimSegment t2";
HAnimSegment587.children = new MFNode();

HAnimSegment587.children[0] = TouchSensor588;

Transform Transform589 = createNode("Transform");
Transform589.translation = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
Shape Shape590 = createNode("Shape");
Shape590.USE = "HAnimJointShape";
Transform589.children = new MFNode();

Transform589.children[0] = Shape590;

HAnimSegment587.children[1] = Transform589;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt2'/> to <HAnimJoint name='vt1'/>
Shape Shape591 = createNode("Shape");
LineSet LineSet592 = createNode("LineSet");
LineSet592.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate593 = createNode("Coordinate");
Coordinate593.point = new MFVec3f(new float[0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387]);
LineSet592.coord = Coordinate593;

ColorRGBA ColorRGBA594 = createNode("ColorRGBA");
ColorRGBA594.USE = "HAnimSegmentLineColorRGBA";
LineSet592.color = ColorRGBA594;

Shape591.geometry = LineSet592;

HAnimSegment587.children[2] = Shape591;

HAnimJoint586.children = new MFNode();

HAnimJoint586.children[0] = HAnimSegment587;

HAnimJoint HAnimJoint595 = createNode("HAnimJoint");
HAnimJoint595.name = "vt1";
HAnimJoint595.DEF = "hanim_vt1";
HAnimJoint595.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimJoint595.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint595.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment596 = createNode("HAnimSegment");
HAnimSegment596.name = "t1";
HAnimSegment596.DEF = "hanim_t1";
//<HAnimJoint name='vt1'/> visualization sphere within <HAnimSegment name='t1'/>
TouchSensor TouchSensor597 = createNode("TouchSensor");
TouchSensor597.description = "HAnimJoint vt1, HAnimSegment t1";
HAnimSegment596.children = new MFNode();

HAnimSegment596.children[0] = TouchSensor597;

Transform Transform598 = createNode("Transform");
Transform598.translation = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
Shape Shape599 = createNode("Shape");
Shape599.USE = "HAnimJointShape";
Transform598.children = new MFNode();

Transform598.children[0] = Shape599;

HAnimSegment596.children[1] = Transform598;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='vc7'/>
Shape Shape600 = createNode("Shape");
LineSet LineSet601 = createNode("LineSet");
LineSet601.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate602 = createNode("Coordinate");
Coordinate602.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301]);
LineSet601.coord = Coordinate602;

ColorRGBA ColorRGBA603 = createNode("ColorRGBA");
ColorRGBA603.USE = "HAnimSegmentLineColorRGBA";
LineSet601.color = ColorRGBA603;

Shape600.geometry = LineSet601;

HAnimSegment596.children[2] = Shape600;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='l_sternoclavicular'/>
Shape Shape604 = createNode("Shape");
LineSet LineSet605 = createNode("LineSet");
LineSet605.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate606 = createNode("Coordinate");
Coordinate606.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]);
LineSet605.coord = Coordinate606;

ColorRGBA ColorRGBA607 = createNode("ColorRGBA");
ColorRGBA607.USE = "HAnimSegmentLineColorRGBA";
LineSet605.color = ColorRGBA607;

Shape604.geometry = LineSet605;

HAnimSegment596.children[3] = Shape604;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='r_sternoclavicular'/>
Shape Shape608 = createNode("Shape");
LineSet LineSet609 = createNode("LineSet");
LineSet609.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate610 = createNode("Coordinate");
Coordinate610.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,-0.082,1.4488,-0.0353]);
LineSet609.coord = Coordinate610;

ColorRGBA ColorRGBA611 = createNode("ColorRGBA");
ColorRGBA611.USE = "HAnimSegmentLineColorRGBA";
LineSet609.color = ColorRGBA611;

Shape608.geometry = LineSet609;

HAnimSegment596.children[4] = Shape608;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='suprasternale'/>
Shape Shape612 = createNode("Shape");
LineSet LineSet613 = createNode("LineSet");
LineSet613.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate614 = createNode("Coordinate");
Coordinate614.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0084,1.4714,0.0551]);
LineSet613.coord = Coordinate614;

ColorRGBA ColorRGBA615 = createNode("ColorRGBA");
ColorRGBA615.USE = "HAnimSiteLineColorRGBA";
LineSet613.color = ColorRGBA615;

Shape612.geometry = LineSet613;

HAnimSegment596.children[5] = Shape612;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='cervicale'/>
Shape Shape616 = createNode("Shape");
LineSet LineSet617 = createNode("LineSet");
LineSet617.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate618 = createNode("Coordinate");
Coordinate618.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0064,1.52,-0.0815]);
LineSet617.coord = Coordinate618;

ColorRGBA ColorRGBA619 = createNode("ColorRGBA");
ColorRGBA619.USE = "HAnimSiteLineColorRGBA";
LineSet617.color = ColorRGBA619;

Shape616.geometry = LineSet617;

HAnimSegment596.children[6] = Shape616;

HAnimSite HAnimSite620 = createNode("HAnimSite");
HAnimSite620.name = "suprasternale_pt";
HAnimSite620.DEF = "hanim_suprasternale_pt";
HAnimSite620.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
//HAnimSite visualization shape
TouchSensor TouchSensor621 = createNode("TouchSensor");
TouchSensor621.description = "HAnimSite suprasternale";
HAnimSite620.children = new MFNode();

HAnimSite620.children[0] = TouchSensor621;

Shape Shape622 = createNode("Shape");
Shape622.USE = "HAnimSiteShape";
HAnimSite620.children[1] = Shape622;

HAnimSegment596.children[7] = HAnimSite620;

HAnimSite HAnimSite623 = createNode("HAnimSite");
HAnimSite623.name = "cervicale_pt";
HAnimSite623.DEF = "hanim_cervicale_pt";
HAnimSite623.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
//HAnimSite visualization shape
TouchSensor TouchSensor624 = createNode("TouchSensor");
TouchSensor624.description = "HAnimSite cervicale";
HAnimSite623.children = new MFNode();

HAnimSite623.children[0] = TouchSensor624;

Shape Shape625 = createNode("Shape");
Shape625.USE = "HAnimSiteShape";
HAnimSite623.children[1] = Shape625;

HAnimSegment596.children[8] = HAnimSite623;

HAnimJoint595.children = new MFNode();

HAnimJoint595.children[0] = HAnimSegment596;

HAnimJoint HAnimJoint626 = createNode("HAnimJoint");
HAnimJoint626.name = "vc7";
HAnimJoint626.DEF = "hanim_vc7";
HAnimJoint626.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
HAnimJoint626.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint626.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment627 = createNode("HAnimSegment");
HAnimSegment627.name = "c7";
HAnimSegment627.DEF = "hanim_c7";
//<HAnimJoint name='vc7'/> visualization sphere within <HAnimSegment name='c7'/>
TouchSensor TouchSensor628 = createNode("TouchSensor");
TouchSensor628.description = "HAnimJoint vc7, HAnimSegment c7";
HAnimSegment627.children = new MFNode();

HAnimSegment627.children[0] = TouchSensor628;

Transform Transform629 = createNode("Transform");
Transform629.translation = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
Shape Shape630 = createNode("Shape");
Shape630.USE = "HAnimJointShape";
Transform629.children = new MFNode();

Transform629.children[0] = Shape630;

HAnimSegment627.children[1] = Transform629;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc7'/> to <HAnimJoint name='vc6'/>
Shape Shape631 = createNode("Shape");
LineSet LineSet632 = createNode("LineSet");
LineSet632.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate633 = createNode("Coordinate");
Coordinate633.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143]);
LineSet632.coord = Coordinate633;

ColorRGBA ColorRGBA634 = createNode("ColorRGBA");
ColorRGBA634.USE = "HAnimSegmentLineColorRGBA";
LineSet632.color = ColorRGBA634;

Shape631.geometry = LineSet632;

HAnimSegment627.children[2] = Shape631;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='r_neck_base'/>
Shape Shape635 = createNode("Shape");
LineSet LineSet636 = createNode("LineSet");
LineSet636.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate637 = createNode("Coordinate");
Coordinate637.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,-0.0419,1.5149,-0.022]);
LineSet636.coord = Coordinate637;

ColorRGBA ColorRGBA638 = createNode("ColorRGBA");
ColorRGBA638.USE = "HAnimSiteLineColorRGBA";
LineSet636.color = ColorRGBA638;

Shape635.geometry = LineSet636;

HAnimSegment627.children[3] = Shape635;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='l_neck_base'/>
Shape Shape639 = createNode("Shape");
LineSet LineSet640 = createNode("LineSet");
LineSet640.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate641 = createNode("Coordinate");
Coordinate641.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0646,1.5141,-0.038]);
LineSet640.coord = Coordinate641;

ColorRGBA ColorRGBA642 = createNode("ColorRGBA");
ColorRGBA642.USE = "HAnimSiteLineColorRGBA";
LineSet640.color = ColorRGBA642;

Shape639.geometry = LineSet640;

HAnimSegment627.children[4] = Shape639;

HAnimSite HAnimSite643 = createNode("HAnimSite");
HAnimSite643.name = "r_neck_base_pt";
HAnimSite643.DEF = "hanim_r_neck_base_pt";
HAnimSite643.translation = new SFVec3f(new float[-0.0419,1.5149,-0.022]);
//HAnimSite visualization shape
TouchSensor TouchSensor644 = createNode("TouchSensor");
TouchSensor644.description = "HAnimSite r_neck_base";
HAnimSite643.children = new MFNode();

HAnimSite643.children[0] = TouchSensor644;

Shape Shape645 = createNode("Shape");
Shape645.USE = "HAnimSiteShape";
HAnimSite643.children[1] = Shape645;

HAnimSegment627.children[5] = HAnimSite643;

HAnimSite HAnimSite646 = createNode("HAnimSite");
HAnimSite646.name = "l_neck_base_pt";
HAnimSite646.DEF = "hanim_l_neck_base_pt";
HAnimSite646.translation = new SFVec3f(new float[0.0646,1.5141,-0.038]);
//HAnimSite visualization shape
TouchSensor TouchSensor647 = createNode("TouchSensor");
TouchSensor647.description = "HAnimSite l_neck_base";
HAnimSite646.children = new MFNode();

HAnimSite646.children[0] = TouchSensor647;

Shape Shape648 = createNode("Shape");
Shape648.USE = "HAnimSiteShape";
HAnimSite646.children[1] = Shape648;

HAnimSegment627.children[6] = HAnimSite646;

HAnimJoint626.children = new MFNode();

HAnimJoint626.children[0] = HAnimSegment627;

HAnimJoint HAnimJoint649 = createNode("HAnimJoint");
HAnimJoint649.name = "vc6";
HAnimJoint649.DEF = "hanim_vc6";
HAnimJoint649.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
HAnimJoint649.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint649.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment650 = createNode("HAnimSegment");
HAnimSegment650.name = "c6";
HAnimSegment650.DEF = "hanim_c6";
//<HAnimJoint name='vc6'/> visualization sphere within <HAnimSegment name='c6'/>
TouchSensor TouchSensor651 = createNode("TouchSensor");
TouchSensor651.description = "HAnimJoint vc6, HAnimSegment c6";
HAnimSegment650.children = new MFNode();

HAnimSegment650.children[0] = TouchSensor651;

Transform Transform652 = createNode("Transform");
Transform652.translation = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
Shape Shape653 = createNode("Shape");
Shape653.USE = "HAnimJointShape";
Transform652.children = new MFNode();

Transform652.children[0] = Shape653;

HAnimSegment650.children[1] = Transform652;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc6'/> to <HAnimJoint name='vc5'/>
Shape Shape654 = createNode("Shape");
LineSet LineSet655 = createNode("LineSet");
LineSet655.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate656 = createNode("Coordinate");
Coordinate656.point = new MFVec3f(new float[0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082]);
LineSet655.coord = Coordinate656;

ColorRGBA ColorRGBA657 = createNode("ColorRGBA");
ColorRGBA657.USE = "HAnimSegmentLineColorRGBA";
LineSet655.color = ColorRGBA657;

Shape654.geometry = LineSet655;

HAnimSegment650.children[2] = Shape654;

HAnimJoint649.children = new MFNode();

HAnimJoint649.children[0] = HAnimSegment650;

HAnimJoint HAnimJoint658 = createNode("HAnimJoint");
HAnimJoint658.name = "vc5";
HAnimJoint658.DEF = "hanim_vc5";
HAnimJoint658.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
HAnimJoint658.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint658.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment659 = createNode("HAnimSegment");
HAnimSegment659.name = "c5";
HAnimSegment659.DEF = "hanim_c5";
//<HAnimJoint name='vc5'/> visualization sphere within <HAnimSegment name='c5'/>
TouchSensor TouchSensor660 = createNode("TouchSensor");
TouchSensor660.description = "HAnimJoint vc5, HAnimSegment c5";
HAnimSegment659.children = new MFNode();

HAnimSegment659.children[0] = TouchSensor660;

Transform Transform661 = createNode("Transform");
Transform661.translation = new SFVec3f(new float[0.0066,1.552,-0.0082]);
Shape Shape662 = createNode("Shape");
Shape662.USE = "HAnimJointShape";
Transform661.children = new MFNode();

Transform661.children[0] = Shape662;

HAnimSegment659.children[1] = Transform661;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc5'/> to <HAnimJoint name='vc4'/>
Shape Shape663 = createNode("Shape");
LineSet LineSet664 = createNode("LineSet");
LineSet664.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate665 = createNode("Coordinate");
Coordinate665.point = new MFVec3f(new float[0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084]);
LineSet664.coord = Coordinate665;

ColorRGBA ColorRGBA666 = createNode("ColorRGBA");
ColorRGBA666.USE = "HAnimSegmentLineColorRGBA";
LineSet664.color = ColorRGBA666;

Shape663.geometry = LineSet664;

HAnimSegment659.children[2] = Shape663;

HAnimJoint658.children = new MFNode();

HAnimJoint658.children[0] = HAnimSegment659;

HAnimJoint HAnimJoint667 = createNode("HAnimJoint");
HAnimJoint667.name = "vc4";
HAnimJoint667.DEF = "hanim_vc4";
HAnimJoint667.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimJoint667.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint667.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment668 = createNode("HAnimSegment");
HAnimSegment668.name = "c4";
HAnimSegment668.DEF = "hanim_c4";
//<HAnimJoint name='vc4'/> visualization sphere within <HAnimSegment name='c4'/>
TouchSensor TouchSensor669 = createNode("TouchSensor");
TouchSensor669.description = "HAnimJoint vc4, HAnimSegment c4";
HAnimSegment668.children = new MFNode();

HAnimSegment668.children[0] = TouchSensor669;

Transform Transform670 = createNode("Transform");
Transform670.translation = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
Shape Shape671 = createNode("Shape");
Shape671.USE = "HAnimJointShape";
Transform670.children = new MFNode();

Transform670.children[0] = Shape671;

HAnimSegment668.children[1] = Transform670;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc4'/> to <HAnimJoint name='vc3'/>
Shape Shape672 = createNode("Shape");
LineSet LineSet673 = createNode("LineSet");
LineSet673.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate674 = createNode("Coordinate");
Coordinate674.point = new MFVec3f(new float[0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103]);
LineSet673.coord = Coordinate674;

ColorRGBA ColorRGBA675 = createNode("ColorRGBA");
ColorRGBA675.USE = "HAnimSegmentLineColorRGBA";
LineSet673.color = ColorRGBA675;

Shape672.geometry = LineSet673;

HAnimSegment668.children[2] = Shape672;

HAnimJoint667.children = new MFNode();

HAnimJoint667.children[0] = HAnimSegment668;

HAnimJoint HAnimJoint676 = createNode("HAnimJoint");
HAnimJoint676.name = "vc3";
HAnimJoint676.DEF = "hanim_vc3";
HAnimJoint676.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
HAnimJoint676.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint676.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment677 = createNode("HAnimSegment");
HAnimSegment677.name = "c3";
HAnimSegment677.DEF = "hanim_c3";
//<HAnimJoint name='vc3'/> visualization sphere within <HAnimSegment name='c3'/>
TouchSensor TouchSensor678 = createNode("TouchSensor");
TouchSensor678.description = "HAnimJoint vc3, HAnimSegment c3";
HAnimSegment677.children = new MFNode();

HAnimSegment677.children[0] = TouchSensor678;

Transform Transform679 = createNode("Transform");
Transform679.translation = new SFVec3f(new float[0.0066,1.58,-0.0103]);
Shape Shape680 = createNode("Shape");
Shape680.USE = "HAnimJointShape";
Transform679.children = new MFNode();

Transform679.children[0] = Shape680;

HAnimSegment677.children[1] = Transform679;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc3'/> to <HAnimJoint name='vc2'/>
Shape Shape681 = createNode("Shape");
LineSet LineSet682 = createNode("LineSet");
LineSet682.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate683 = createNode("Coordinate");
Coordinate683.point = new MFVec3f(new float[0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103]);
LineSet682.coord = Coordinate683;

ColorRGBA ColorRGBA684 = createNode("ColorRGBA");
ColorRGBA684.USE = "HAnimSegmentLineColorRGBA";
LineSet682.color = ColorRGBA684;

Shape681.geometry = LineSet682;

HAnimSegment677.children[2] = Shape681;

HAnimJoint676.children = new MFNode();

HAnimJoint676.children[0] = HAnimSegment677;

HAnimJoint HAnimJoint685 = createNode("HAnimJoint");
HAnimJoint685.name = "vc2";
HAnimJoint685.DEF = "hanim_vc2";
HAnimJoint685.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimJoint685.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint685.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment686 = createNode("HAnimSegment");
HAnimSegment686.name = "c2";
HAnimSegment686.DEF = "hanim_c2";
//<HAnimJoint name='vc2'/> visualization sphere within <HAnimSegment name='c2'/>
TouchSensor TouchSensor687 = createNode("TouchSensor");
TouchSensor687.description = "HAnimJoint vc2, HAnimSegment c2";
HAnimSegment686.children = new MFNode();

HAnimSegment686.children[0] = TouchSensor687;

Transform Transform688 = createNode("Transform");
Transform688.translation = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
Shape Shape689 = createNode("Shape");
Shape689.USE = "HAnimJointShape";
Transform688.children = new MFNode();

Transform688.children[0] = Shape689;

HAnimSegment686.children[1] = Transform688;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc2'/> to <HAnimJoint name='vc1'/>
Shape Shape690 = createNode("Shape");
LineSet LineSet691 = createNode("LineSet");
LineSet691.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate692 = createNode("Coordinate");
Coordinate692.point = new MFVec3f(new float[0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034]);
LineSet691.coord = Coordinate692;

ColorRGBA ColorRGBA693 = createNode("ColorRGBA");
ColorRGBA693.USE = "HAnimSegmentLineColorRGBA";
LineSet691.color = ColorRGBA693;

Shape690.geometry = LineSet691;

HAnimSegment686.children[2] = Shape690;

HAnimJoint685.children = new MFNode();

HAnimJoint685.children[0] = HAnimSegment686;

HAnimJoint HAnimJoint694 = createNode("HAnimJoint");
HAnimJoint694.name = "vc1";
HAnimJoint694.DEF = "hanim_vc1";
HAnimJoint694.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
HAnimJoint694.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint694.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment695 = createNode("HAnimSegment");
HAnimSegment695.name = "c1";
HAnimSegment695.DEF = "hanim_c1";
//<HAnimJoint name='vc1'/> visualization sphere within <HAnimSegment name='c1'/>
TouchSensor TouchSensor696 = createNode("TouchSensor");
TouchSensor696.description = "HAnimJoint vc1, HAnimSegment c1";
HAnimSegment695.children = new MFNode();

HAnimSegment695.children[0] = TouchSensor696;

Transform Transform697 = createNode("Transform");
Transform697.translation = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
Shape Shape698 = createNode("Shape");
Shape698.USE = "HAnimJointShape";
Transform697.children = new MFNode();

Transform697.children[0] = Shape698;

HAnimSegment695.children[1] = Transform697;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc1'/> to <HAnimJoint name='skullbase'/>
Shape Shape699 = createNode("Shape");
LineSet LineSet700 = createNode("LineSet");
LineSet700.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate701 = createNode("Coordinate");
Coordinate701.point = new MFVec3f(new float[0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236]);
LineSet700.coord = Coordinate701;

ColorRGBA ColorRGBA702 = createNode("ColorRGBA");
ColorRGBA702.USE = "HAnimSegmentLineColorRGBA";
LineSet700.color = ColorRGBA702;

Shape699.geometry = LineSet700;

HAnimSegment695.children[2] = Shape699;

HAnimJoint694.children = new MFNode();

HAnimJoint694.children[0] = HAnimSegment695;

HAnimJoint HAnimJoint703 = createNode("HAnimJoint");
HAnimJoint703.name = "skullbase";
HAnimJoint703.DEF = "hanim_skullbase";
HAnimJoint703.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimJoint703.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint703.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment704 = createNode("HAnimSegment");
HAnimSegment704.name = "skull";
HAnimSegment704.DEF = "hanim_skull";
//<HAnimJoint name='skullbase'/> visualization sphere within <HAnimSegment name='skull'/>
TouchSensor TouchSensor705 = createNode("TouchSensor");
TouchSensor705.description = "HAnimJoint skullbase, HAnimSegment skull";
HAnimSegment704.children = new MFNode();

HAnimSegment704.children[0] = TouchSensor705;

Transform Transform706 = createNode("Transform");
Transform706.translation = new SFVec3f(new float[0.0044,1.6209,0.0236]);
Shape Shape707 = createNode("Shape");
Shape707.USE = "HAnimJointShape";
Transform706.children = new MFNode();

Transform706.children[0] = Shape707;

HAnimSegment704.children[1] = Transform706;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyeball_joint'/>
Shape Shape708 = createNode("Shape");
LineSet LineSet709 = createNode("LineSet");
LineSet709.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate710 = createNode("Coordinate");
Coordinate710.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0336,1.6332,0.0502]);
LineSet709.coord = Coordinate710;

ColorRGBA ColorRGBA711 = createNode("ColorRGBA");
ColorRGBA711.USE = "HAnimSegmentLineColorRGBA";
LineSet709.color = ColorRGBA711;

Shape708.geometry = LineSet709;

HAnimSegment704.children[2] = Shape708;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyelid_joint'/>
Shape Shape712 = createNode("Shape");
LineSet LineSet713 = createNode("LineSet");
LineSet713.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate714 = createNode("Coordinate");
Coordinate714.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0336,1.6332,0.0502]);
LineSet713.coord = Coordinate714;

ColorRGBA ColorRGBA715 = createNode("ColorRGBA");
ColorRGBA715.USE = "HAnimSegmentLineColorRGBA";
LineSet713.color = ColorRGBA715;

Shape712.geometry = LineSet713;

HAnimSegment704.children[3] = Shape712;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyebrow_joint'/>
Shape Shape716 = createNode("Shape");
LineSet LineSet717 = createNode("LineSet");
LineSet717.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate718 = createNode("Coordinate");
Coordinate718.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0336,1.635,0.0506]);
LineSet717.coord = Coordinate718;

ColorRGBA ColorRGBA719 = createNode("ColorRGBA");
ColorRGBA719.USE = "HAnimSegmentLineColorRGBA";
LineSet717.color = ColorRGBA719;

Shape716.geometry = LineSet717;

HAnimSegment704.children[4] = Shape716;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyeball_joint'/>
Shape Shape720 = createNode("Shape");
LineSet LineSet721 = createNode("LineSet");
LineSet721.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate722 = createNode("Coordinate");
Coordinate722.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502]);
LineSet721.coord = Coordinate722;

ColorRGBA ColorRGBA723 = createNode("ColorRGBA");
ColorRGBA723.USE = "HAnimSegmentLineColorRGBA";
LineSet721.color = ColorRGBA723;

Shape720.geometry = LineSet721;

HAnimSegment704.children[5] = Shape720;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyelid_joint'/>
Shape Shape724 = createNode("Shape");
LineSet LineSet725 = createNode("LineSet");
LineSet725.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate726 = createNode("Coordinate");
Coordinate726.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502]);
LineSet725.coord = Coordinate726;

ColorRGBA ColorRGBA727 = createNode("ColorRGBA");
ColorRGBA727.USE = "HAnimSegmentLineColorRGBA";
LineSet725.color = ColorRGBA727;

Shape724.geometry = LineSet725;

HAnimSegment704.children[6] = Shape724;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyebrow_joint'/>
Shape Shape728 = createNode("Shape");
LineSet LineSet729 = createNode("LineSet");
LineSet729.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate730 = createNode("Coordinate");
Coordinate730.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0336,1.635,0.0506]);
LineSet729.coord = Coordinate730;

ColorRGBA ColorRGBA731 = createNode("ColorRGBA");
ColorRGBA731.USE = "HAnimSegmentLineColorRGBA";
LineSet729.color = ColorRGBA731;

Shape728.geometry = LineSet729;

HAnimSegment704.children[7] = Shape728;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='temporomandibular'/>
Shape Shape732 = createNode("Shape");
LineSet LineSet733 = createNode("LineSet");
LineSet733.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate734 = createNode("Coordinate");
Coordinate734.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1.63,0.015]);
LineSet733.coord = Coordinate734;

ColorRGBA ColorRGBA735 = createNode("ColorRGBA");
ColorRGBA735.USE = "HAnimSegmentLineColorRGBA";
LineSet733.color = ColorRGBA735;

Shape732.geometry = LineSet733;

HAnimSegment704.children[8] = Shape732;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='skull_tip'/>
Shape Shape736 = createNode("Shape");
LineSet LineSet737 = createNode("LineSet");
LineSet737.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate738 = createNode("Coordinate");
Coordinate738.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.005,1.7504,0.0055]);
LineSet737.coord = Coordinate738;

ColorRGBA ColorRGBA739 = createNode("ColorRGBA");
ColorRGBA739.USE = "HAnimSiteLineColorRGBA";
LineSet737.color = ColorRGBA739;

Shape736.geometry = LineSet737;

HAnimSegment704.children[9] = Shape736;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='sellion'/>
Shape Shape740 = createNode("Shape");
LineSet LineSet741 = createNode("LineSet");
LineSet741.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate742 = createNode("Coordinate");
Coordinate742.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0058,1.6316,0.0852]);
LineSet741.coord = Coordinate742;

ColorRGBA ColorRGBA743 = createNode("ColorRGBA");
ColorRGBA743.USE = "HAnimSiteLineColorRGBA";
LineSet741.color = ColorRGBA743;

Shape740.geometry = LineSet741;

HAnimSegment704.children[10] = Shape740;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_infraorbitale'/>
Shape Shape744 = createNode("Shape");
LineSet LineSet745 = createNode("LineSet");
LineSet745.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate746 = createNode("Coordinate");
Coordinate746.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0237,1.6171,0.0752]);
LineSet745.coord = Coordinate746;

ColorRGBA ColorRGBA747 = createNode("ColorRGBA");
ColorRGBA747.USE = "HAnimSiteLineColorRGBA";
LineSet745.color = ColorRGBA747;

Shape744.geometry = LineSet745;

HAnimSegment704.children[11] = Shape744;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_infraorbitale'/>
Shape Shape748 = createNode("Shape");
LineSet LineSet749 = createNode("LineSet");
LineSet749.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate750 = createNode("Coordinate");
Coordinate750.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0341,1.6171,0.0752]);
LineSet749.coord = Coordinate750;

ColorRGBA ColorRGBA751 = createNode("ColorRGBA");
ColorRGBA751.USE = "HAnimSiteLineColorRGBA";
LineSet749.color = ColorRGBA751;

Shape748.geometry = LineSet749;

HAnimSegment704.children[12] = Shape748;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='supramenton'/>
Shape Shape752 = createNode("Shape");
LineSet LineSet753 = createNode("LineSet");
LineSet753.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate754 = createNode("Coordinate");
Coordinate754.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0061,1.541,0.0805]);
LineSet753.coord = Coordinate754;

ColorRGBA ColorRGBA755 = createNode("ColorRGBA");
ColorRGBA755.USE = "HAnimSiteLineColorRGBA";
LineSet753.color = ColorRGBA755;

Shape752.geometry = LineSet753;

HAnimSegment704.children[13] = Shape752;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_tragion'/>
Shape Shape756 = createNode("Shape");
LineSet LineSet757 = createNode("LineSet");
LineSet757.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate758 = createNode("Coordinate");
Coordinate758.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0646,1.6347,0.0302]);
LineSet757.coord = Coordinate758;

ColorRGBA ColorRGBA759 = createNode("ColorRGBA");
ColorRGBA759.USE = "HAnimSiteLineColorRGBA";
LineSet757.color = ColorRGBA759;

Shape756.geometry = LineSet757;

HAnimSegment704.children[14] = Shape756;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_gonion'/>
Shape Shape760 = createNode("Shape");
LineSet LineSet761 = createNode("LineSet");
LineSet761.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate762 = createNode("Coordinate");
Coordinate762.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.052,1.5529,0.0347]);
LineSet761.coord = Coordinate762;

ColorRGBA ColorRGBA763 = createNode("ColorRGBA");
ColorRGBA763.USE = "HAnimSiteLineColorRGBA";
LineSet761.color = ColorRGBA763;

Shape760.geometry = LineSet761;

HAnimSegment704.children[15] = Shape760;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_tragion'/>
Shape Shape764 = createNode("Shape");
LineSet LineSet765 = createNode("LineSet");
LineSet765.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate766 = createNode("Coordinate");
Coordinate766.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0739,1.6348,0.0282]);
LineSet765.coord = Coordinate766;

ColorRGBA ColorRGBA767 = createNode("ColorRGBA");
ColorRGBA767.USE = "HAnimSiteLineColorRGBA";
LineSet765.color = ColorRGBA767;

Shape764.geometry = LineSet765;

HAnimSegment704.children[16] = Shape764;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_gonion'/>
Shape Shape768 = createNode("Shape");
LineSet LineSet769 = createNode("LineSet");
LineSet769.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate770 = createNode("Coordinate");
Coordinate770.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0631,1.553,0.033]);
LineSet769.coord = Coordinate770;

ColorRGBA ColorRGBA771 = createNode("ColorRGBA");
ColorRGBA771.USE = "HAnimSiteLineColorRGBA";
LineSet769.color = ColorRGBA771;

Shape768.geometry = LineSet769;

HAnimSegment704.children[17] = Shape768;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='nuchale'/>
Shape Shape772 = createNode("Shape");
LineSet LineSet773 = createNode("LineSet");
LineSet773.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate774 = createNode("Coordinate");
Coordinate774.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0039,1.5972,-0.0796]);
LineSet773.coord = Coordinate774;

ColorRGBA ColorRGBA775 = createNode("ColorRGBA");
ColorRGBA775.USE = "HAnimSiteLineColorRGBA";
LineSet773.color = ColorRGBA775;

Shape772.geometry = LineSet773;

HAnimSegment704.children[18] = Shape772;

//TODO move skull_tip x to zero
HAnimSite HAnimSite776 = createNode("HAnimSite");
HAnimSite776.name = "skull_tip";
HAnimSite776.DEF = "hanim_skull_tip";
HAnimSite776.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
//HAnimSite visualization shape
TouchSensor TouchSensor777 = createNode("TouchSensor");
TouchSensor777.description = "HAnimSite skull_tip";
HAnimSite776.children = new MFNode();

HAnimSite776.children[0] = TouchSensor777;

Shape Shape778 = createNode("Shape");
Shape778.USE = "HAnimSiteShape";
HAnimSite776.children[1] = Shape778;

HAnimSegment704.children[19] = HAnimSite776;

HAnimSite HAnimSite779 = createNode("HAnimSite");
HAnimSite779.name = "sellion_pt";
HAnimSite779.DEF = "hanim_sellion_pt";
HAnimSite779.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
//HAnimSite visualization shape
TouchSensor TouchSensor780 = createNode("TouchSensor");
TouchSensor780.description = "HAnimSite sellion";
HAnimSite779.children = new MFNode();

HAnimSite779.children[0] = TouchSensor780;

Shape Shape781 = createNode("Shape");
Shape781.USE = "HAnimSiteShape";
HAnimSite779.children[1] = Shape781;

HAnimSegment704.children[20] = HAnimSite779;

HAnimSite HAnimSite782 = createNode("HAnimSite");
HAnimSite782.name = "r_infraorbitale_pt";
HAnimSite782.DEF = "hanim_r_infraorbitale_pt";
HAnimSite782.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
//HAnimSite visualization shape
TouchSensor TouchSensor783 = createNode("TouchSensor");
TouchSensor783.description = "HAnimSite r_infraorbitale";
HAnimSite782.children = new MFNode();

HAnimSite782.children[0] = TouchSensor783;

Shape Shape784 = createNode("Shape");
Shape784.USE = "HAnimSiteShape";
HAnimSite782.children[1] = Shape784;

HAnimSegment704.children[21] = HAnimSite782;

HAnimSite HAnimSite785 = createNode("HAnimSite");
HAnimSite785.name = "l_infraorbitale_pt";
HAnimSite785.DEF = "hanim_l_infraorbitale_pt";
HAnimSite785.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
//HAnimSite visualization shape
TouchSensor TouchSensor786 = createNode("TouchSensor");
TouchSensor786.description = "HAnimSite l_infraorbitale";
HAnimSite785.children = new MFNode();

HAnimSite785.children[0] = TouchSensor786;

Shape Shape787 = createNode("Shape");
Shape787.USE = "HAnimSiteShape";
HAnimSite785.children[1] = Shape787;

HAnimSegment704.children[22] = HAnimSite785;

HAnimSite HAnimSite788 = createNode("HAnimSite");
HAnimSite788.name = "supramenton_pt";
HAnimSite788.DEF = "hanim_supramenton_pt";
HAnimSite788.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
//HAnimSite visualization shape
TouchSensor TouchSensor789 = createNode("TouchSensor");
TouchSensor789.description = "HAnimSite supramenton";
HAnimSite788.children = new MFNode();

HAnimSite788.children[0] = TouchSensor789;

Shape Shape790 = createNode("Shape");
Shape790.USE = "HAnimSiteShape";
HAnimSite788.children[1] = Shape790;

HAnimSegment704.children[23] = HAnimSite788;

HAnimSite HAnimSite791 = createNode("HAnimSite");
HAnimSite791.name = "r_tragion_pt";
HAnimSite791.DEF = "hanim_r_tragion_pt";
HAnimSite791.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
//HAnimSite visualization shape
TouchSensor TouchSensor792 = createNode("TouchSensor");
TouchSensor792.description = "HAnimSite r_tragion";
HAnimSite791.children = new MFNode();

HAnimSite791.children[0] = TouchSensor792;

Shape Shape793 = createNode("Shape");
Shape793.USE = "HAnimSiteShape";
HAnimSite791.children[1] = Shape793;

HAnimSegment704.children[24] = HAnimSite791;

HAnimSite HAnimSite794 = createNode("HAnimSite");
HAnimSite794.name = "r_gonion_pt";
HAnimSite794.DEF = "hanim_r_gonion_pt";
HAnimSite794.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
//HAnimSite visualization shape
TouchSensor TouchSensor795 = createNode("TouchSensor");
TouchSensor795.description = "HAnimSite r_gonion";
HAnimSite794.children = new MFNode();

HAnimSite794.children[0] = TouchSensor795;

Shape Shape796 = createNode("Shape");
Shape796.USE = "HAnimSiteShape";
HAnimSite794.children[1] = Shape796;

HAnimSegment704.children[25] = HAnimSite794;

HAnimSite HAnimSite797 = createNode("HAnimSite");
HAnimSite797.name = "l_tragion_pt";
HAnimSite797.DEF = "hanim_l_tragion_pt";
HAnimSite797.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
//HAnimSite visualization shape
TouchSensor TouchSensor798 = createNode("TouchSensor");
TouchSensor798.description = "HAnimSite l_tragion";
HAnimSite797.children = new MFNode();

HAnimSite797.children[0] = TouchSensor798;

Shape Shape799 = createNode("Shape");
Shape799.USE = "HAnimSiteShape";
HAnimSite797.children[1] = Shape799;

HAnimSegment704.children[26] = HAnimSite797;

HAnimSite HAnimSite800 = createNode("HAnimSite");
HAnimSite800.name = "l_gonion_pt";
HAnimSite800.DEF = "hanim_l_gonion_pt";
HAnimSite800.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
//HAnimSite visualization shape
TouchSensor TouchSensor801 = createNode("TouchSensor");
TouchSensor801.description = "HAnimSite l_gonion";
HAnimSite800.children = new MFNode();

HAnimSite800.children[0] = TouchSensor801;

Shape Shape802 = createNode("Shape");
Shape802.USE = "HAnimSiteShape";
HAnimSite800.children[1] = Shape802;

HAnimSegment704.children[27] = HAnimSite800;

HAnimSite HAnimSite803 = createNode("HAnimSite");
HAnimSite803.name = "nuchale_pt";
HAnimSite803.DEF = "hanim_nuchale_pt";
HAnimSite803.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
//HAnimSite visualization shape
TouchSensor TouchSensor804 = createNode("TouchSensor");
TouchSensor804.description = "HAnimSite nuchale";
HAnimSite803.children = new MFNode();

HAnimSite803.children[0] = TouchSensor804;

Shape Shape805 = createNode("Shape");
Shape805.USE = "HAnimSiteShape";
HAnimSite803.children[1] = Shape805;

HAnimSegment704.children[28] = HAnimSite803;

HAnimJoint703.children = new MFNode();

HAnimJoint703.children[0] = HAnimSegment704;

HAnimJoint HAnimJoint806 = createNode("HAnimJoint");
HAnimJoint806.name = "l_eyeball_joint";
HAnimJoint806.DEF = "hanim_l_eyeball_joint";
HAnimJoint806.center = new SFVec3f(new float[0.0336,1.6332,0.0502]);
HAnimJoint806.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint806.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment807 = createNode("HAnimSegment");
HAnimSegment807.name = "l_eyeball";
HAnimSegment807.DEF = "hanim_l_eyeball";
//<HAnimJoint name='l_eyeball_joint'/> visualization sphere within <HAnimSegment name='l_eyeball'/>
TouchSensor TouchSensor808 = createNode("TouchSensor");
TouchSensor808.description = "HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball";
HAnimSegment807.children = new MFNode();

HAnimSegment807.children[0] = TouchSensor808;

Transform Transform809 = createNode("Transform");
Transform809.translation = new SFVec3f(new float[0.0336,1.6332,0.0502]);
Shape Shape810 = createNode("Shape");
Shape810.USE = "HAnimJointShape";
Transform809.children = new MFNode();

Transform809.children[0] = Shape810;

HAnimSegment807.children[1] = Transform809;

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_eyeball_joint'/> to <HAnimSite name='l_eyeball_site_view'/>
Shape Shape811 = createNode("Shape");
LineSet LineSet812 = createNode("LineSet");
LineSet812.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate813 = createNode("Coordinate");
Coordinate813.point = new MFVec3f(new float[0.0336,1.6332,0.0502,0.034,1.64,0.05]);
LineSet812.coord = Coordinate813;

ColorRGBA ColorRGBA814 = createNode("ColorRGBA");
ColorRGBA814.DEF = "HAnimSiteViewpointLineColorRGBA";
ColorRGBA814.color = new MFColorRGBA(new float[0,0,1,1,0,0,1,0.1]);
LineSet812.color = ColorRGBA814;

Shape811.geometry = LineSet812;

HAnimSegment807.children[2] = Shape811;

HAnimSite HAnimSite815 = createNode("HAnimSite");
HAnimSite815.name = "l_eyeball_site_view";
HAnimSite815.DEF = "hanim_l_eyeball_site_view";
HAnimSite815.translation = new SFVec3f(new float[0.034,1.64,0.05]);
Viewpoint Viewpoint816 = createNode("Viewpoint");
Viewpoint816.DEF = "hanim_l_eyeball_site_viewpoint";
Viewpoint816.description = "l_eyeball_site_viewpoint looking forward";
Viewpoint816.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint816.position = new SFVec3f(new float[0,0,0]);
HAnimSite815.children = new MFNode();

HAnimSite815.children[0] = Viewpoint816;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor817 = createNode("Anchor");
Anchor817.description = "HAnimSite Viewpoint hanim_l_eyeball_site_view";
Anchor817.url = new MFString(new java.lang.String["#hanim_l_eyeball_site_viewpoint"]);
LOD LOD818 = createNode("LOD");
LOD818.forceTransitions = True;
LOD818.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo819 = createNode("WorldInfo");
WorldInfo819.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD818.children = new MFNode();

LOD818.children[0] = WorldInfo819;

Shape Shape820 = createNode("Shape");
Shape820.DEF = "HAnimSiteViewpointShape";
IndexedFaceSet IndexedFaceSet821 = createNode("IndexedFaceSet");
IndexedFaceSet821.DEF = "SiteViewpointDiamondIFS";
IndexedFaceSet821.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet821.creaseAngle = 0.5;
Coordinate Coordinate822 = createNode("Coordinate");
Coordinate822.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet821.coord = Coordinate822;

Shape820.geometry = IndexedFaceSet821;

Appearance Appearance823 = createNode("Appearance");
Material Material824 = createNode("Material");
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

HAnimJoint HAnimJoint825 = createNode("HAnimJoint");
HAnimJoint825.name = "l_eyelid_joint";
HAnimJoint825.DEF = "hanim_l_eyelid_joint";
HAnimJoint825.center = new SFVec3f(new float[0.0336,1.6332,0.0502]);
HAnimJoint825.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint825.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment826 = createNode("HAnimSegment");
HAnimSegment826.name = "l_eyelid";
HAnimSegment826.DEF = "hanim_l_eyelid";
//<HAnimJoint name='l_eyelid_joint'/> visualization sphere within <HAnimSegment name='l_eyelid'/>
TouchSensor TouchSensor827 = createNode("TouchSensor");
TouchSensor827.description = "HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid";
HAnimSegment826.children = new MFNode();

HAnimSegment826.children[0] = TouchSensor827;

Transform Transform828 = createNode("Transform");
Transform828.translation = new SFVec3f(new float[0.0336,1.6332,0.0502]);
Shape Shape829 = createNode("Shape");
Shape829.USE = "HAnimJointShape";
Transform828.children = new MFNode();

Transform828.children[0] = Shape829;

HAnimSegment826.children[1] = Transform828;

HAnimJoint825.children = new MFNode();

HAnimJoint825.children[0] = HAnimSegment826;

HAnimJoint703.children[2] = HAnimJoint825;

HAnimJoint HAnimJoint830 = createNode("HAnimJoint");
HAnimJoint830.name = "l_eyebrow_joint";
HAnimJoint830.DEF = "hanim_l_eyebrow_joint";
HAnimJoint830.center = new SFVec3f(new float[0.0336,1.635,0.0506]);
HAnimJoint830.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint830.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment831 = createNode("HAnimSegment");
HAnimSegment831.name = "l_eyebrow";
HAnimSegment831.DEF = "hanim_l_eyebrow";
//<HAnimJoint name='l_eyebrow_joint'/> visualization sphere within <HAnimSegment name='l_eyebrow'/>
TouchSensor TouchSensor832 = createNode("TouchSensor");
TouchSensor832.description = "HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow";
HAnimSegment831.children = new MFNode();

HAnimSegment831.children[0] = TouchSensor832;

Transform Transform833 = createNode("Transform");
Transform833.translation = new SFVec3f(new float[0.0336,1.635,0.0506]);
Shape Shape834 = createNode("Shape");
Shape834.USE = "HAnimJointShape";
Transform833.children = new MFNode();

Transform833.children[0] = Shape834;

HAnimSegment831.children[1] = Transform833;

HAnimJoint830.children = new MFNode();

HAnimJoint830.children[0] = HAnimSegment831;

HAnimJoint703.children[3] = HAnimJoint830;

HAnimJoint HAnimJoint835 = createNode("HAnimJoint");
HAnimJoint835.name = "r_eyeball_joint";
HAnimJoint835.DEF = "hanim_r_eyeball_joint";
HAnimJoint835.center = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
HAnimJoint835.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint835.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment836 = createNode("HAnimSegment");
HAnimSegment836.name = "r_eyeball";
HAnimSegment836.DEF = "hanim_r_eyeball";
//<HAnimJoint name='r_eyeball_joint'/> visualization sphere within <HAnimSegment name='r_eyeball'/>
TouchSensor TouchSensor837 = createNode("TouchSensor");
TouchSensor837.description = "HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball";
HAnimSegment836.children = new MFNode();

HAnimSegment836.children[0] = TouchSensor837;

Transform Transform838 = createNode("Transform");
Transform838.translation = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
Shape Shape839 = createNode("Shape");
Shape839.USE = "HAnimJointShape";
Transform838.children = new MFNode();

Transform838.children[0] = Shape839;

HAnimSegment836.children[1] = Transform838;

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_eyeball_joint'/> to <HAnimSite name='r_eyeball_site_view'/>
Shape Shape840 = createNode("Shape");
LineSet LineSet841 = createNode("LineSet");
LineSet841.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate842 = createNode("Coordinate");
Coordinate842.point = new MFVec3f(new float[-0.0336,1.6332,0.0502,-0.034,1.64,0.05]);
LineSet841.coord = Coordinate842;

ColorRGBA ColorRGBA843 = createNode("ColorRGBA");
ColorRGBA843.USE = "HAnimSiteViewpointLineColorRGBA";
LineSet841.color = ColorRGBA843;

Shape840.geometry = LineSet841;

HAnimSegment836.children[2] = Shape840;

HAnimSite HAnimSite844 = createNode("HAnimSite");
HAnimSite844.name = "r_eyeball_site_view";
HAnimSite844.DEF = "hanim_r_eyeball_site_view";
HAnimSite844.translation = new SFVec3f(new float[-0.034,1.64,0.05]);
Viewpoint Viewpoint845 = createNode("Viewpoint");
Viewpoint845.DEF = "hanim_r_eyeball_site_viewpoint";
Viewpoint845.description = "r_eyeball_site_viewpoint looking forward";
Viewpoint845.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint845.position = new SFVec3f(new float[0,0,0]);
HAnimSite844.children = new MFNode();

HAnimSite844.children[0] = Viewpoint845;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor846 = createNode("Anchor");
Anchor846.description = "HAnimSite Viewpoint hanim_r_eyeball_site_view";
Anchor846.url = new MFString(new java.lang.String["#hanim_r_eyeball_site_viewpoint"]);
LOD LOD847 = createNode("LOD");
LOD847.forceTransitions = True;
LOD847.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo848 = createNode("WorldInfo");
WorldInfo848.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD847.children = new MFNode();

LOD847.children[0] = WorldInfo848;

Shape Shape849 = createNode("Shape");
Shape849.USE = "HAnimSiteViewpointShape";
LOD847.children[1] = Shape849;

Anchor846.children = new MFNode();

Anchor846.children[0] = LOD847;

HAnimSite844.children[1] = Anchor846;

HAnimSegment836.children[3] = HAnimSite844;

HAnimJoint835.children = new MFNode();

HAnimJoint835.children[0] = HAnimSegment836;

HAnimJoint703.children[4] = HAnimJoint835;

HAnimJoint HAnimJoint850 = createNode("HAnimJoint");
HAnimJoint850.name = "r_eyelid_joint";
HAnimJoint850.DEF = "hanim_r_eyelid_joint";
HAnimJoint850.center = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
HAnimJoint850.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint850.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment851 = createNode("HAnimSegment");
HAnimSegment851.name = "r_eyelid";
HAnimSegment851.DEF = "hanim_r_eyelid";
//<HAnimJoint name='r_eyelid_joint'/> visualization sphere within <HAnimSegment name='r_eyelid'/>
TouchSensor TouchSensor852 = createNode("TouchSensor");
TouchSensor852.description = "HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid";
HAnimSegment851.children = new MFNode();

HAnimSegment851.children[0] = TouchSensor852;

Transform Transform853 = createNode("Transform");
Transform853.translation = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
Shape Shape854 = createNode("Shape");
Shape854.USE = "HAnimJointShape";
Transform853.children = new MFNode();

Transform853.children[0] = Shape854;

HAnimSegment851.children[1] = Transform853;

HAnimJoint850.children = new MFNode();

HAnimJoint850.children[0] = HAnimSegment851;

HAnimJoint703.children[5] = HAnimJoint850;

HAnimJoint HAnimJoint855 = createNode("HAnimJoint");
HAnimJoint855.name = "r_eyebrow_joint";
HAnimJoint855.DEF = "hanim_r_eyebrow_joint";
HAnimJoint855.center = new SFVec3f(new float[-0.0336,1.635,0.0506]);
HAnimJoint855.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint855.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment856 = createNode("HAnimSegment");
HAnimSegment856.name = "r_eyebrow";
HAnimSegment856.DEF = "hanim_r_eyebrow";
//<HAnimJoint name='r_eyebrow_joint'/> visualization sphere within <HAnimSegment name='r_eyebrow'/>
TouchSensor TouchSensor857 = createNode("TouchSensor");
TouchSensor857.description = "HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow";
HAnimSegment856.children = new MFNode();

HAnimSegment856.children[0] = TouchSensor857;

Transform Transform858 = createNode("Transform");
Transform858.translation = new SFVec3f(new float[-0.0336,1.635,0.0506]);
Shape Shape859 = createNode("Shape");
Shape859.USE = "HAnimJointShape";
Transform858.children = new MFNode();

Transform858.children[0] = Shape859;

HAnimSegment856.children[1] = Transform858;

HAnimJoint855.children = new MFNode();

HAnimJoint855.children[0] = HAnimSegment856;

HAnimJoint703.children[6] = HAnimJoint855;

//Single joint, single segment for jaw, two sites for left/right TMJs https://en.wikipedia.org/wiki/Temporomandibular_joint
HAnimJoint HAnimJoint860 = createNode("HAnimJoint");
HAnimJoint860.name = "temporomandibular";
HAnimJoint860.DEF = "hanim_temporomandibular";
HAnimJoint860.center = new SFVec3f(new float[0,1.63,0.015]);
HAnimJoint860.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint860.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment861 = createNode("HAnimSegment");
HAnimSegment861.name = "jaw";
HAnimSegment861.DEF = "hanim_jaw";
//<HAnimJoint name='temporomandibular'/> visualization sphere within <HAnimSegment name='jaw'/>
TouchSensor TouchSensor862 = createNode("TouchSensor");
TouchSensor862.description = "HAnimJoint temporomandibular, HAnimSegment jaw";
HAnimSegment861.children = new MFNode();

HAnimSegment861.children[0] = TouchSensor862;

Transform Transform863 = createNode("Transform");
Transform863.translation = new SFVec3f(new float[0,1.63,0.015]);
Shape Shape864 = createNode("Shape");
Shape864.USE = "HAnimJointShape";
Transform863.children = new MFNode();

Transform863.children[0] = Shape864;

HAnimSegment861.children[1] = Transform863;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_l_site'/>
Shape Shape865 = createNode("Shape");
LineSet LineSet866 = createNode("LineSet");
LineSet866.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate867 = createNode("Coordinate");
Coordinate867.point = new MFVec3f(new float[0,1.63,0.015,0.045,1.63,0]);
LineSet866.coord = Coordinate867;

ColorRGBA ColorRGBA868 = createNode("ColorRGBA");
ColorRGBA868.USE = "HAnimSiteLineColorRGBA";
LineSet866.color = ColorRGBA868;

Shape865.geometry = LineSet866;

HAnimSegment861.children[2] = Shape865;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_r_site'/>
Shape Shape869 = createNode("Shape");
LineSet LineSet870 = createNode("LineSet");
LineSet870.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate871 = createNode("Coordinate");
Coordinate871.point = new MFVec3f(new float[0,1.63,0.015,-0.045,1.63,0]);
LineSet870.coord = Coordinate871;

ColorRGBA ColorRGBA872 = createNode("ColorRGBA");
ColorRGBA872.USE = "HAnimSiteLineColorRGBA";
LineSet870.color = ColorRGBA872;

Shape869.geometry = LineSet870;

HAnimSegment861.children[3] = Shape869;

HAnimSite HAnimSite873 = createNode("HAnimSite");
HAnimSite873.name = "temporomandibular_l_site_pt";
HAnimSite873.DEF = "hanim_temporomandibular_l_site_pt";
HAnimSite873.translation = new SFVec3f(new float[0.045,1.63,0]);
//HAnimSite visualization shape
TouchSensor TouchSensor874 = createNode("TouchSensor");
TouchSensor874.description = "HAnimSite temporomandibular_l_site";
HAnimSite873.children = new MFNode();

HAnimSite873.children[0] = TouchSensor874;

Shape Shape875 = createNode("Shape");
Shape875.USE = "HAnimSiteShape";
HAnimSite873.children[1] = Shape875;

HAnimSegment861.children[4] = HAnimSite873;

HAnimSite HAnimSite876 = createNode("HAnimSite");
HAnimSite876.name = "temporomandibular_r_site_pt";
HAnimSite876.DEF = "hanim_temporomandibular_r_site_pt";
HAnimSite876.translation = new SFVec3f(new float[-0.045,1.63,0]);
//HAnimSite visualization shape
TouchSensor TouchSensor877 = createNode("TouchSensor");
TouchSensor877.description = "HAnimSite temporomandibular_r_site";
HAnimSite876.children = new MFNode();

HAnimSite876.children[0] = TouchSensor877;

Shape Shape878 = createNode("Shape");
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

HAnimJoint HAnimJoint879 = createNode("HAnimJoint");
HAnimJoint879.name = "l_sternoclavicular";
HAnimJoint879.DEF = "hanim_l_sternoclavicular";
HAnimJoint879.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimJoint879.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint879.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment880 = createNode("HAnimSegment");
HAnimSegment880.name = "l_clavicle";
HAnimSegment880.DEF = "hanim_l_clavicle";
//<HAnimJoint name='l_sternoclavicular'/> visualization sphere within <HAnimSegment name='l_clavicle'/>
TouchSensor TouchSensor881 = createNode("TouchSensor");
TouchSensor881.description = "HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle";
HAnimSegment880.children = new MFNode();

HAnimSegment880.children[0] = TouchSensor881;

Transform Transform882 = createNode("Transform");
Transform882.translation = new SFVec3f(new float[0.082,1.4488,-0.0353]);
Shape Shape883 = createNode("Shape");
Shape883.USE = "HAnimJointShape";
Transform882.children = new MFNode();

Transform882.children[0] = Shape883;

HAnimSegment880.children[1] = Transform882;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_sternoclavicular'/> to <HAnimJoint name='l_acromioclavicular'/>
Shape Shape884 = createNode("Shape");
LineSet LineSet885 = createNode("LineSet");
LineSet885.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate886 = createNode("Coordinate");
Coordinate886.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
LineSet885.coord = Coordinate886;

ColorRGBA ColorRGBA887 = createNode("ColorRGBA");
ColorRGBA887.USE = "HAnimSegmentLineColorRGBA";
LineSet885.color = ColorRGBA887;

Shape884.geometry = LineSet885;

HAnimSegment880.children[2] = Shape884;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_clavicale'/>
Shape Shape888 = createNode("Shape");
LineSet LineSet889 = createNode("LineSet");
LineSet889.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate890 = createNode("Coordinate");
Coordinate890.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0271,1.4943,0.0394]);
LineSet889.coord = Coordinate890;

ColorRGBA ColorRGBA891 = createNode("ColorRGBA");
ColorRGBA891.USE = "HAnimSiteLineColorRGBA";
LineSet889.color = ColorRGBA891;

Shape888.geometry = LineSet889;

HAnimSegment880.children[3] = Shape888;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_acromion'/>
Shape Shape892 = createNode("Shape");
LineSet LineSet893 = createNode("LineSet");
LineSet893.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate894 = createNode("Coordinate");
Coordinate894.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.2032,1.476,-0.049]);
LineSet893.coord = Coordinate894;

ColorRGBA ColorRGBA895 = createNode("ColorRGBA");
ColorRGBA895.USE = "HAnimSiteLineColorRGBA";
LineSet893.color = ColorRGBA895;

Shape892.geometry = LineSet893;

HAnimSegment880.children[4] = Shape892;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_ant'/>
Shape Shape896 = createNode("Shape");
LineSet LineSet897 = createNode("LineSet");
LineSet897.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate898 = createNode("Coordinate");
Coordinate898.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.1777,1.4065,-0.0075]);
LineSet897.coord = Coordinate898;

ColorRGBA ColorRGBA899 = createNode("ColorRGBA");
ColorRGBA899.USE = "HAnimSiteLineColorRGBA";
LineSet897.color = ColorRGBA899;

Shape896.geometry = LineSet897;

HAnimSegment880.children[5] = Shape896;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_post'/>
Shape Shape900 = createNode("Shape");
LineSet LineSet901 = createNode("LineSet");
LineSet901.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate902 = createNode("Coordinate");
Coordinate902.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.1706,1.4072,-0.0875]);
LineSet901.coord = Coordinate902;

ColorRGBA ColorRGBA903 = createNode("ColorRGBA");
ColorRGBA903.USE = "HAnimSiteLineColorRGBA";
LineSet901.color = ColorRGBA903;

Shape900.geometry = LineSet901;

HAnimSegment880.children[6] = Shape900;

HAnimSite HAnimSite904 = createNode("HAnimSite");
HAnimSite904.name = "l_clavicale_pt";
HAnimSite904.DEF = "hanim_l_clavicale_pt";
HAnimSite904.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
//HAnimSite visualization shape
TouchSensor TouchSensor905 = createNode("TouchSensor");
TouchSensor905.description = "HAnimSite l_clavicale";
HAnimSite904.children = new MFNode();

HAnimSite904.children[0] = TouchSensor905;

Shape Shape906 = createNode("Shape");
Shape906.USE = "HAnimSiteShape";
HAnimSite904.children[1] = Shape906;

HAnimSegment880.children[7] = HAnimSite904;

HAnimSite HAnimSite907 = createNode("HAnimSite");
HAnimSite907.name = "l_acromion_pt";
HAnimSite907.DEF = "hanim_l_acromion_pt";
HAnimSite907.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
//HAnimSite visualization shape
TouchSensor TouchSensor908 = createNode("TouchSensor");
TouchSensor908.description = "HAnimSite l_acromion";
HAnimSite907.children = new MFNode();

HAnimSite907.children[0] = TouchSensor908;

Shape Shape909 = createNode("Shape");
Shape909.USE = "HAnimSiteShape";
HAnimSite907.children[1] = Shape909;

HAnimSegment880.children[8] = HAnimSite907;

HAnimSite HAnimSite910 = createNode("HAnimSite");
HAnimSite910.name = "l_axilla_ant_pt";
HAnimSite910.DEF = "hanim_l_axilla_ant_pt";
HAnimSite910.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
//HAnimSite visualization shape
TouchSensor TouchSensor911 = createNode("TouchSensor");
TouchSensor911.description = "HAnimSite l_axilla_ant";
HAnimSite910.children = new MFNode();

HAnimSite910.children[0] = TouchSensor911;

Shape Shape912 = createNode("Shape");
Shape912.USE = "HAnimSiteShape";
HAnimSite910.children[1] = Shape912;

HAnimSegment880.children[9] = HAnimSite910;

HAnimSite HAnimSite913 = createNode("HAnimSite");
HAnimSite913.name = "l_axilla_post_pt";
HAnimSite913.DEF = "hanim_l_axilla_post_pt";
HAnimSite913.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
//HAnimSite visualization shape
TouchSensor TouchSensor914 = createNode("TouchSensor");
TouchSensor914.description = "HAnimSite l_axilla_post";
HAnimSite913.children = new MFNode();

HAnimSite913.children[0] = TouchSensor914;

Shape Shape915 = createNode("Shape");
Shape915.USE = "HAnimSiteShape";
HAnimSite913.children[1] = Shape915;

HAnimSegment880.children[10] = HAnimSite913;

HAnimJoint879.children = new MFNode();

HAnimJoint879.children[0] = HAnimSegment880;

HAnimJoint HAnimJoint916 = createNode("HAnimJoint");
HAnimJoint916.name = "l_acromioclavicular";
HAnimJoint916.DEF = "hanim_l_acromioclavicular";
HAnimJoint916.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimJoint916.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint916.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment917 = createNode("HAnimSegment");
HAnimSegment917.name = "l_scapula";
HAnimSegment917.DEF = "hanim_l_scapula";
//<HAnimJoint name='l_acromioclavicular'/> visualization sphere within <HAnimSegment name='l_scapula'/>
TouchSensor TouchSensor918 = createNode("TouchSensor");
TouchSensor918.description = "HAnimJoint l_acromioclavicular, HAnimSegment l_scapula";
HAnimSegment917.children = new MFNode();

HAnimSegment917.children[0] = TouchSensor918;

Transform Transform919 = createNode("Transform");
Transform919.translation = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
Shape Shape920 = createNode("Shape");
Shape920.USE = "HAnimJointShape";
Transform919.children = new MFNode();

Transform919.children[0] = Shape920;

HAnimSegment917.children[1] = Transform919;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_acromioclavicular'/> to <HAnimJoint name='l_shoulder'/>
Shape Shape921 = createNode("Shape");
LineSet LineSet922 = createNode("LineSet");
LineSet922.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate923 = createNode("Coordinate");
Coordinate923.point = new MFVec3f(new float[0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
LineSet922.coord = Coordinate923;

ColorRGBA ColorRGBA924 = createNode("ColorRGBA");
ColorRGBA924.USE = "HAnimSegmentLineColorRGBA";
LineSet922.color = ColorRGBA924;

Shape921.geometry = LineSet922;

HAnimSegment917.children[2] = Shape921;

HAnimJoint916.children = new MFNode();

HAnimJoint916.children[0] = HAnimSegment917;

HAnimJoint HAnimJoint925 = createNode("HAnimJoint");
HAnimJoint925.name = "l_shoulder";
HAnimJoint925.DEF = "hanim_l_shoulder";
HAnimJoint925.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimJoint925.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint925.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment926 = createNode("HAnimSegment");
HAnimSegment926.name = "l_upperarm";
HAnimSegment926.DEF = "hanim_l_upperarm";
//<HAnimJoint name='l_shoulder'/> visualization sphere within <HAnimSegment name='l_upperarm'/>
TouchSensor TouchSensor927 = createNode("TouchSensor");
TouchSensor927.description = "HAnimJoint l_shoulder, HAnimSegment l_upperarm";
HAnimSegment926.children = new MFNode();

HAnimSegment926.children[0] = TouchSensor927;

Transform Transform928 = createNode("Transform");
Transform928.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
Shape Shape929 = createNode("Shape");
Shape929.USE = "HAnimJointShape";
Transform928.children = new MFNode();

Transform928.children[0] = Shape929;

HAnimSegment926.children[1] = Transform928;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_shoulder'/> to <HAnimJoint name='l_elbow'/>
Shape Shape930 = createNode("Shape");
LineSet LineSet931 = createNode("LineSet");
LineSet931.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate932 = createNode("Coordinate");
Coordinate932.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
LineSet931.coord = Coordinate932;

ColorRGBA ColorRGBA933 = createNode("ColorRGBA");
ColorRGBA933.USE = "HAnimSegmentLineColorRGBA";
LineSet931.color = ColorRGBA933;

Shape930.geometry = LineSet931;

HAnimSegment926.children[2] = Shape930;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_shoulder'/> to <HAnimSite name='l_humeral_lateral_epicn'/>
Shape Shape934 = createNode("Shape");
LineSet LineSet935 = createNode("LineSet");
LineSet935.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate936 = createNode("Coordinate");
Coordinate936.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.228,1.1482,-0.11]);
LineSet935.coord = Coordinate936;

ColorRGBA ColorRGBA937 = createNode("ColorRGBA");
ColorRGBA937.USE = "HAnimSiteLineColorRGBA";
LineSet935.color = ColorRGBA937;

Shape934.geometry = LineSet935;

HAnimSegment926.children[3] = Shape934;

HAnimSite HAnimSite938 = createNode("HAnimSite");
HAnimSite938.name = "l_humeral_lateral_epicn_pt";
HAnimSite938.DEF = "hanim_l_humeral_lateral_epicn_pt";
HAnimSite938.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
//HAnimSite visualization shape
TouchSensor TouchSensor939 = createNode("TouchSensor");
TouchSensor939.description = "HAnimSite l_humeral_lateral_epicn";
HAnimSite938.children = new MFNode();

HAnimSite938.children[0] = TouchSensor939;

Shape Shape940 = createNode("Shape");
Shape940.USE = "HAnimSiteShape";
HAnimSite938.children[1] = Shape940;

HAnimSegment926.children[4] = HAnimSite938;

HAnimJoint925.children = new MFNode();

HAnimJoint925.children[0] = HAnimSegment926;

HAnimJoint HAnimJoint941 = createNode("HAnimJoint");
HAnimJoint941.name = "l_elbow";
HAnimJoint941.DEF = "hanim_l_elbow";
HAnimJoint941.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimJoint941.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint941.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment942 = createNode("HAnimSegment");
HAnimSegment942.name = "l_forearm";
HAnimSegment942.DEF = "hanim_l_forearm";
//<HAnimJoint name='l_elbow'/> visualization sphere within <HAnimSegment name='l_forearm'/>
TouchSensor TouchSensor943 = createNode("TouchSensor");
TouchSensor943.description = "HAnimJoint l_elbow, HAnimSegment l_forearm";
HAnimSegment942.children = new MFNode();

HAnimSegment942.children[0] = TouchSensor943;

Transform Transform944 = createNode("Transform");
Transform944.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
Shape Shape945 = createNode("Shape");
Shape945.USE = "HAnimJointShape";
Transform944.children = new MFNode();

Transform944.children[0] = Shape945;

HAnimSegment942.children[1] = Transform944;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_elbow'/> to <HAnimJoint name='l_wrist'/>
Shape Shape946 = createNode("Shape");
LineSet LineSet947 = createNode("LineSet");
LineSet947.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate948 = createNode("Coordinate");
Coordinate948.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
LineSet947.coord = Coordinate948;

ColorRGBA ColorRGBA949 = createNode("ColorRGBA");
ColorRGBA949.USE = "HAnimSegmentLineColorRGBA";
LineSet947.color = ColorRGBA949;

Shape946.geometry = LineSet947;

HAnimSegment942.children[2] = Shape946;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radial_styloid'/>
Shape Shape950 = createNode("Shape");
LineSet LineSet951 = createNode("LineSet");
LineSet951.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate952 = createNode("Coordinate");
Coordinate952.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1901,0.8645,-0.0415]);
LineSet951.coord = Coordinate952;

ColorRGBA ColorRGBA953 = createNode("ColorRGBA");
ColorRGBA953.USE = "HAnimSiteLineColorRGBA";
LineSet951.color = ColorRGBA953;

Shape950.geometry = LineSet951;

HAnimSegment942.children[3] = Shape950;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_olecranon'/>
Shape Shape954 = createNode("Shape");
LineSet LineSet955 = createNode("LineSet");
LineSet955.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate956 = createNode("Coordinate");
Coordinate956.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1962,1.1375,-0.1123]);
LineSet955.coord = Coordinate956;

ColorRGBA ColorRGBA957 = createNode("ColorRGBA");
ColorRGBA957.USE = "HAnimSiteLineColorRGBA";
LineSet955.color = ColorRGBA957;

Shape954.geometry = LineSet955;

HAnimSegment942.children[4] = Shape954;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_humeral_medial_epicn'/>
Shape Shape958 = createNode("Shape");
LineSet LineSet959 = createNode("LineSet");
LineSet959.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate960 = createNode("Coordinate");
Coordinate960.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1735,1.1272,-0.1113]);
LineSet959.coord = Coordinate960;

ColorRGBA ColorRGBA961 = createNode("ColorRGBA");
ColorRGBA961.USE = "HAnimSiteLineColorRGBA";
LineSet959.color = ColorRGBA961;

Shape958.geometry = LineSet959;

HAnimSegment942.children[5] = Shape958;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radiale'/>
Shape Shape962 = createNode("Shape");
LineSet LineSet963 = createNode("LineSet");
LineSet963.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate964 = createNode("Coordinate");
Coordinate964.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.2182,1.1212,-0.1167]);
LineSet963.coord = Coordinate964;

ColorRGBA ColorRGBA965 = createNode("ColorRGBA");
ColorRGBA965.USE = "HAnimSiteLineColorRGBA";
LineSet963.color = ColorRGBA965;

Shape962.geometry = LineSet963;

HAnimSegment942.children[6] = Shape962;

HAnimSite HAnimSite966 = createNode("HAnimSite");
HAnimSite966.name = "l_radial_styloid_pt";
HAnimSite966.DEF = "hanim_l_radial_styloid_pt";
HAnimSite966.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
//HAnimSite visualization shape
TouchSensor TouchSensor967 = createNode("TouchSensor");
TouchSensor967.description = "HAnimSite l_radial_styloid";
HAnimSite966.children = new MFNode();

HAnimSite966.children[0] = TouchSensor967;

Shape Shape968 = createNode("Shape");
Shape968.USE = "HAnimSiteShape";
HAnimSite966.children[1] = Shape968;

HAnimSegment942.children[7] = HAnimSite966;

HAnimSite HAnimSite969 = createNode("HAnimSite");
HAnimSite969.name = "l_olecranon_pt";
HAnimSite969.DEF = "hanim_l_olecranon_pt";
HAnimSite969.translation = new SFVec3f(new float[0.1962,1.1375,-0.1123]);
//HAnimSite visualization shape
TouchSensor TouchSensor970 = createNode("TouchSensor");
TouchSensor970.description = "HAnimSite l_olecranon";
HAnimSite969.children = new MFNode();

HAnimSite969.children[0] = TouchSensor970;

Shape Shape971 = createNode("Shape");
Shape971.USE = "HAnimSiteShape";
HAnimSite969.children[1] = Shape971;

HAnimSegment942.children[8] = HAnimSite969;

HAnimSite HAnimSite972 = createNode("HAnimSite");
HAnimSite972.name = "l_humeral_medial_epicn_pt";
HAnimSite972.DEF = "hanim_l_humeral_medial_epicn_pt";
HAnimSite972.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
//HAnimSite visualization shape
TouchSensor TouchSensor973 = createNode("TouchSensor");
TouchSensor973.description = "HAnimSite l_humeral_medial_epicn";
HAnimSite972.children = new MFNode();

HAnimSite972.children[0] = TouchSensor973;

Shape Shape974 = createNode("Shape");
Shape974.USE = "HAnimSiteShape";
HAnimSite972.children[1] = Shape974;

HAnimSegment942.children[9] = HAnimSite972;

HAnimSite HAnimSite975 = createNode("HAnimSite");
HAnimSite975.name = "l_radiale_pt";
HAnimSite975.DEF = "hanim_l_radiale_pt";
HAnimSite975.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
//HAnimSite visualization shape
TouchSensor TouchSensor976 = createNode("TouchSensor");
TouchSensor976.description = "HAnimSite l_radiale";
HAnimSite975.children = new MFNode();

HAnimSite975.children[0] = TouchSensor976;

Shape Shape977 = createNode("Shape");
Shape977.USE = "HAnimSiteShape";
HAnimSite975.children[1] = Shape977;

HAnimSegment942.children[10] = HAnimSite975;

HAnimJoint941.children = new MFNode();

HAnimJoint941.children[0] = HAnimSegment942;

HAnimJoint HAnimJoint978 = createNode("HAnimJoint");
HAnimJoint978.name = "l_wrist";
HAnimJoint978.DEF = "hanim_l_wrist";
HAnimJoint978.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimJoint978.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint978.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment979 = createNode("HAnimSegment");
HAnimSegment979.name = "l_hand";
HAnimSegment979.DEF = "hanim_l_hand";
//<HAnimJoint name='l_wrist'/> visualization sphere within <HAnimSegment name='l_hand'/>
TouchSensor TouchSensor980 = createNode("TouchSensor");
TouchSensor980.description = "HAnimJoint l_wrist, HAnimSegment l_hand";
HAnimSegment979.children = new MFNode();

HAnimSegment979.children[0] = TouchSensor980;

Transform Transform981 = createNode("Transform");
Transform981.translation = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
Shape Shape982 = createNode("Shape");
Shape982.USE = "HAnimJointShape";
Transform981.children = new MFNode();

Transform981.children[0] = Shape982;

HAnimSegment979.children[1] = Transform981;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_thumb1'/>
Shape Shape983 = createNode("Shape");
LineSet LineSet984 = createNode("LineSet");
LineSet984.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate985 = createNode("Coordinate");
Coordinate985.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534]);
LineSet984.coord = Coordinate985;

ColorRGBA ColorRGBA986 = createNode("ColorRGBA");
ColorRGBA986.USE = "HAnimSegmentLineColorRGBA";
LineSet984.color = ColorRGBA986;

Shape983.geometry = LineSet984;

HAnimSegment979.children[2] = Shape983;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_index0'/>
Shape Shape987 = createNode("Shape");
LineSet LineSet988 = createNode("LineSet");
LineSet988.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate989 = createNode("Coordinate");
Coordinate989.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028]);
LineSet988.coord = Coordinate989;

ColorRGBA ColorRGBA990 = createNode("ColorRGBA");
ColorRGBA990.USE = "HAnimSegmentLineColorRGBA";
LineSet988.color = ColorRGBA990;

Shape987.geometry = LineSet988;

HAnimSegment979.children[3] = Shape987;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_middle0'/>
Shape Shape991 = createNode("Shape");
LineSet LineSet992 = createNode("LineSet");
LineSet992.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate993 = createNode("Coordinate");
Coordinate993.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053]);
LineSet992.coord = Coordinate993;

ColorRGBA ColorRGBA994 = createNode("ColorRGBA");
ColorRGBA994.USE = "HAnimSegmentLineColorRGBA";
LineSet992.color = ColorRGBA994;

Shape991.geometry = LineSet992;

HAnimSegment979.children[4] = Shape991;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_ring0'/>
Shape Shape995 = createNode("Shape");
LineSet LineSet996 = createNode("LineSet");
LineSet996.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate997 = createNode("Coordinate");
Coordinate997.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794]);
LineSet996.coord = Coordinate997;

ColorRGBA ColorRGBA998 = createNode("ColorRGBA");
ColorRGBA998.USE = "HAnimSegmentLineColorRGBA";
LineSet996.color = ColorRGBA998;

Shape995.geometry = LineSet996;

HAnimSegment979.children[5] = Shape995;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_pinky0'/>
Shape Shape999 = createNode("Shape");
LineSet LineSet1000 = createNode("LineSet");
LineSet1000.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1001 = createNode("Coordinate");
Coordinate1001.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036]);
LineSet1000.coord = Coordinate1001;

ColorRGBA ColorRGBA1002 = createNode("ColorRGBA");
ColorRGBA1002.USE = "HAnimSegmentLineColorRGBA";
LineSet1000.color = ColorRGBA1002;

Shape999.geometry = LineSet1000;

HAnimSegment979.children[6] = Shape999;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_metacarpal_pha2'/>
Shape Shape1003 = createNode("Shape");
LineSet LineSet1004 = createNode("LineSet");
LineSet1004.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1005 = createNode("Coordinate");
Coordinate1005.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.2009,0.8139,-0.0237]);
LineSet1004.coord = Coordinate1005;

ColorRGBA ColorRGBA1006 = createNode("ColorRGBA");
ColorRGBA1006.USE = "HAnimSiteLineColorRGBA";
LineSet1004.color = ColorRGBA1006;

Shape1003.geometry = LineSet1004;

HAnimSegment979.children[7] = Shape1003;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_ulnar_styloid'/>
Shape Shape1007 = createNode("Shape");
LineSet LineSet1008 = createNode("LineSet");
LineSet1008.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1009 = createNode("Coordinate");
Coordinate1009.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.2142,0.8529,-0.0648]);
LineSet1008.coord = Coordinate1009;

ColorRGBA ColorRGBA1010 = createNode("ColorRGBA");
ColorRGBA1010.USE = "HAnimSiteLineColorRGBA";
LineSet1008.color = ColorRGBA1010;

Shape1007.geometry = LineSet1008;

HAnimSegment979.children[8] = Shape1007;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_metacarpal_pha5'/>
Shape Shape1011 = createNode("Shape");
LineSet LineSet1012 = createNode("LineSet");
LineSet1012.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1013 = createNode("Coordinate");
Coordinate1013.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1929,0.786,-0.1122]);
LineSet1012.coord = Coordinate1013;

ColorRGBA ColorRGBA1014 = createNode("ColorRGBA");
ColorRGBA1014.USE = "HAnimSiteLineColorRGBA";
LineSet1012.color = ColorRGBA1014;

Shape1011.geometry = LineSet1012;

HAnimSegment979.children[9] = Shape1011;

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_hand_front_view'/>
Shape Shape1015 = createNode("Shape");
LineSet LineSet1016 = createNode("LineSet");
LineSet1016.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1017 = createNode("Coordinate");
Coordinate1017.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.3,0.75,0.45]);
LineSet1016.coord = Coordinate1017;

ColorRGBA ColorRGBA1018 = createNode("ColorRGBA");
ColorRGBA1018.USE = "HAnimSiteViewpointLineColorRGBA";
LineSet1016.color = ColorRGBA1018;

Shape1015.geometry = LineSet1016;

HAnimSegment979.children[10] = Shape1015;

HAnimSite HAnimSite1019 = createNode("HAnimSite");
HAnimSite1019.name = "l_metacarpal_pha2_pt";
HAnimSite1019.DEF = "hanim_l_metacarpal_pha2_pt";
HAnimSite1019.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
//HAnimSite visualization shape
TouchSensor TouchSensor1020 = createNode("TouchSensor");
TouchSensor1020.description = "HAnimSite l_metacarpal_pha2";
HAnimSite1019.children = new MFNode();

HAnimSite1019.children[0] = TouchSensor1020;

Shape Shape1021 = createNode("Shape");
Shape1021.USE = "HAnimSiteShape";
HAnimSite1019.children[1] = Shape1021;

HAnimSegment979.children[11] = HAnimSite1019;

HAnimSite HAnimSite1022 = createNode("HAnimSite");
HAnimSite1022.name = "l_ulnar_styloid_pt";
HAnimSite1022.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite1022.translation = new SFVec3f(new float[0.2142,0.8529,-0.0648]);
//HAnimSite visualization shape
TouchSensor TouchSensor1023 = createNode("TouchSensor");
TouchSensor1023.description = "HAnimSite l_ulnar_styloid";
HAnimSite1022.children = new MFNode();

HAnimSite1022.children[0] = TouchSensor1023;

Shape Shape1024 = createNode("Shape");
Shape1024.USE = "HAnimSiteShape";
HAnimSite1022.children[1] = Shape1024;

HAnimSegment979.children[12] = HAnimSite1022;

HAnimSite HAnimSite1025 = createNode("HAnimSite");
HAnimSite1025.name = "l_metacarpal_pha5_pt";
HAnimSite1025.DEF = "hanim_l_metacarpal_pha5_pt";
HAnimSite1025.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
//HAnimSite visualization shape
TouchSensor TouchSensor1026 = createNode("TouchSensor");
TouchSensor1026.description = "HAnimSite l_metacarpal_pha5";
HAnimSite1025.children = new MFNode();

HAnimSite1025.children[0] = TouchSensor1026;

Shape Shape1027 = createNode("Shape");
Shape1027.USE = "HAnimSiteShape";
HAnimSite1025.children[1] = Shape1027;

HAnimSegment979.children[13] = HAnimSite1025;

HAnimSite HAnimSite1028 = createNode("HAnimSite");
HAnimSite1028.name = "l_hand_front_view";
HAnimSite1028.DEF = "hanim_l_hand_front_view";
HAnimSite1028.translation = new SFVec3f(new float[0.3,0.75,0.45]);
Viewpoint Viewpoint1029 = createNode("Viewpoint");
Viewpoint1029.DEF = "hanim_l_hand_front_viewpoint";
Viewpoint1029.centerOfRotation = new SFVec3f(new float[0,0.7,0]);
Viewpoint1029.description = "left hand front";
Viewpoint1029.position = new SFVec3f(new float[0,0,0]);
HAnimSite1028.children = new MFNode();

HAnimSite1028.children[0] = Viewpoint1029;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1030 = createNode("Anchor");
Anchor1030.description = "HAnimSite Viewpoint hanim_l_hand_front_view";
Anchor1030.url = new MFString(new java.lang.String["#hanim_l_hand_front_viewpoint"]);
LOD LOD1031 = createNode("LOD");
LOD1031.forceTransitions = True;
LOD1031.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1032 = createNode("WorldInfo");
WorldInfo1032.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1031.children = new MFNode();

LOD1031.children[0] = WorldInfo1032;

Shape Shape1033 = createNode("Shape");
Shape1033.USE = "HAnimSiteViewpointShape";
LOD1031.children[1] = Shape1033;

Anchor1030.children = new MFNode();

Anchor1030.children[0] = LOD1031;

HAnimSite1028.children[1] = Anchor1030;

HAnimSegment979.children[14] = HAnimSite1028;

HAnimJoint978.children = new MFNode();

HAnimJoint978.children[0] = HAnimSegment979;

HAnimJoint HAnimJoint1034 = createNode("HAnimJoint");
HAnimJoint1034.name = "l_thumb1";
HAnimJoint1034.DEF = "hanim_l_thumb1";
HAnimJoint1034.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimJoint1034.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1034.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1035 = createNode("HAnimSegment");
HAnimSegment1035.name = "l_thumb_metacarpal";
HAnimSegment1035.DEF = "hanim_l_thumb_metacarpal";
//<HAnimJoint name='l_thumb1'/> visualization sphere within <HAnimSegment name='l_thumb_metacarpal'/>
TouchSensor TouchSensor1036 = createNode("TouchSensor");
TouchSensor1036.description = "HAnimJoint l_thumb1, HAnimSegment l_thumb_metacarpal";
HAnimSegment1035.children = new MFNode();

HAnimSegment1035.children[0] = TouchSensor1036;

Transform Transform1037 = createNode("Transform");
Transform1037.translation = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
Shape Shape1038 = createNode("Shape");
Shape1038.USE = "HAnimJointShape";
Transform1037.children = new MFNode();

Transform1037.children[0] = Shape1038;

HAnimSegment1035.children[1] = Transform1037;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_thumb1'/> to <HAnimJoint name='l_thumb2'/>
Shape Shape1039 = createNode("Shape");
LineSet LineSet1040 = createNode("LineSet");
LineSet1040.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1041 = createNode("Coordinate");
Coordinate1041.point = new MFVec3f(new float[0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
LineSet1040.coord = Coordinate1041;

ColorRGBA ColorRGBA1042 = createNode("ColorRGBA");
ColorRGBA1042.USE = "HAnimSegmentLineColorRGBA";
LineSet1040.color = ColorRGBA1042;

Shape1039.geometry = LineSet1040;

HAnimSegment1035.children[2] = Shape1039;

HAnimJoint1034.children = new MFNode();

HAnimJoint1034.children[0] = HAnimSegment1035;

HAnimJoint HAnimJoint1043 = createNode("HAnimJoint");
HAnimJoint1043.name = "l_thumb2";
HAnimJoint1043.DEF = "hanim_l_thumb2";
HAnimJoint1043.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimJoint1043.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1043.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1044 = createNode("HAnimSegment");
HAnimSegment1044.name = "l_thumb_proximal";
HAnimSegment1044.DEF = "hanim_l_thumb_proximal";
//<HAnimJoint name='l_thumb2'/> visualization sphere within <HAnimSegment name='l_thumb_proximal'/>
TouchSensor TouchSensor1045 = createNode("TouchSensor");
TouchSensor1045.description = "HAnimJoint l_thumb2, HAnimSegment l_thumb_proximal";
HAnimSegment1044.children = new MFNode();

HAnimSegment1044.children[0] = TouchSensor1045;

Transform Transform1046 = createNode("Transform");
Transform1046.translation = new SFVec3f(new float[0.1951,0.8226,0.0246]);
Shape Shape1047 = createNode("Shape");
Shape1047.USE = "HAnimJointShape";
Transform1046.children = new MFNode();

Transform1046.children[0] = Shape1047;

HAnimSegment1044.children[1] = Transform1046;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_thumb2'/> to <HAnimJoint name='l_thumb3'/>
Shape Shape1048 = createNode("Shape");
LineSet LineSet1049 = createNode("LineSet");
LineSet1049.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1050 = createNode("Coordinate");
Coordinate1050.point = new MFVec3f(new float[0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
LineSet1049.coord = Coordinate1050;

ColorRGBA ColorRGBA1051 = createNode("ColorRGBA");
ColorRGBA1051.USE = "HAnimSegmentLineColorRGBA";
LineSet1049.color = ColorRGBA1051;

Shape1048.geometry = LineSet1049;

HAnimSegment1044.children[2] = Shape1048;

HAnimJoint1043.children = new MFNode();

HAnimJoint1043.children[0] = HAnimSegment1044;

HAnimJoint HAnimJoint1052 = createNode("HAnimJoint");
HAnimJoint1052.name = "l_thumb3";
HAnimJoint1052.DEF = "hanim_l_thumb3";
HAnimJoint1052.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint1052.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1052.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1053 = createNode("HAnimSegment");
HAnimSegment1053.name = "l_thumb_distal";
HAnimSegment1053.DEF = "hanim_l_thumb_distal";
//<HAnimJoint name='l_thumb3'/> visualization sphere within <HAnimSegment name='l_thumb_distal'/>
TouchSensor TouchSensor1054 = createNode("TouchSensor");
TouchSensor1054.description = "HAnimJoint l_thumb3, HAnimSegment l_thumb_distal";
HAnimSegment1053.children = new MFNode();

HAnimSegment1053.children[0] = TouchSensor1054;

Transform Transform1055 = createNode("Transform");
Transform1055.translation = new SFVec3f(new float[0.1955,0.8159,0.0464]);
Shape Shape1056 = createNode("Shape");
Shape1056.USE = "HAnimJointShape";
Transform1055.children = new MFNode();

Transform1055.children[0] = Shape1056;

HAnimSegment1053.children[1] = Transform1055;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_thumb3'/> to <HAnimSite name='l_thumb_distal_tip'/>
Shape Shape1057 = createNode("Shape");
LineSet LineSet1058 = createNode("LineSet");
LineSet1058.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1059 = createNode("Coordinate");
Coordinate1059.point = new MFVec3f(new float[0.1955,0.8159,0.0464,0.1982,0.8061,0.0759]);
LineSet1058.coord = Coordinate1059;

ColorRGBA ColorRGBA1060 = createNode("ColorRGBA");
ColorRGBA1060.USE = "HAnimSiteLineColorRGBA";
LineSet1058.color = ColorRGBA1060;

Shape1057.geometry = LineSet1058;

HAnimSegment1053.children[2] = Shape1057;

HAnimSite HAnimSite1061 = createNode("HAnimSite");
HAnimSite1061.name = "l_thumb_distal_tip";
HAnimSite1061.DEF = "hanim_l_thumb_distal_tip";
HAnimSite1061.translation = new SFVec3f(new float[0.1982,0.8061,0.0759]);
//HAnimSite visualization shape
TouchSensor TouchSensor1062 = createNode("TouchSensor");
TouchSensor1062.description = "HAnimSite l_thumb_distal_tip";
HAnimSite1061.children = new MFNode();

HAnimSite1061.children[0] = TouchSensor1062;

Shape Shape1063 = createNode("Shape");
Shape1063.USE = "HAnimSiteShape";
HAnimSite1061.children[1] = Shape1063;

HAnimSegment1053.children[3] = HAnimSite1061;

HAnimJoint1052.children = new MFNode();

HAnimJoint1052.children[0] = HAnimSegment1053;

HAnimJoint1043.children[1] = HAnimJoint1052;

HAnimJoint1034.children[1] = HAnimJoint1043;

HAnimJoint978.children[1] = HAnimJoint1034;

HAnimJoint HAnimJoint1064 = createNode("HAnimJoint");
HAnimJoint1064.name = "l_index0";
HAnimJoint1064.DEF = "hanim_l_index0";
HAnimJoint1064.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimJoint1064.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1064.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1065 = createNode("HAnimSegment");
HAnimSegment1065.name = "l_index_metacarpal";
HAnimSegment1065.DEF = "hanim_l_index_metacarpal";
//<HAnimJoint name='l_index0'/> visualization sphere within <HAnimSegment name='l_index_metacarpal'/>
TouchSensor TouchSensor1066 = createNode("TouchSensor");
TouchSensor1066.description = "HAnimJoint l_index0, HAnimSegment l_index_metacarpal";
HAnimSegment1065.children = new MFNode();

HAnimSegment1065.children[0] = TouchSensor1066;

Transform Transform1067 = createNode("Transform");
Transform1067.translation = new SFVec3f(new float[0.1983,0.8024,-0.028]);
Shape Shape1068 = createNode("Shape");
Shape1068.USE = "HAnimJointShape";
Transform1067.children = new MFNode();

Transform1067.children[0] = Shape1068;

HAnimSegment1065.children[1] = Transform1067;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_index0'/> to <HAnimJoint name='l_index1'/>
Shape Shape1069 = createNode("Shape");
LineSet LineSet1070 = createNode("LineSet");
LineSet1070.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1071 = createNode("Coordinate");
Coordinate1071.point = new MFVec3f(new float[0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
LineSet1070.coord = Coordinate1071;

ColorRGBA ColorRGBA1072 = createNode("ColorRGBA");
ColorRGBA1072.USE = "HAnimSegmentLineColorRGBA";
LineSet1070.color = ColorRGBA1072;

Shape1069.geometry = LineSet1070;

HAnimSegment1065.children[2] = Shape1069;

HAnimJoint1064.children = new MFNode();

HAnimJoint1064.children[0] = HAnimSegment1065;

HAnimJoint HAnimJoint1073 = createNode("HAnimJoint");
HAnimJoint1073.name = "l_index1";
HAnimJoint1073.DEF = "hanim_l_index1";
HAnimJoint1073.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint1073.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1073.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1074 = createNode("HAnimSegment");
HAnimSegment1074.name = "l_index_proximal";
HAnimSegment1074.DEF = "hanim_l_index_proximal";
//<HAnimJoint name='l_index1'/> visualization sphere within <HAnimSegment name='l_index_proximal'/>
TouchSensor TouchSensor1075 = createNode("TouchSensor");
TouchSensor1075.description = "HAnimJoint l_index1, HAnimSegment l_index_proximal";
HAnimSegment1074.children = new MFNode();

HAnimSegment1074.children[0] = TouchSensor1075;

Transform Transform1076 = createNode("Transform");
Transform1076.translation = new SFVec3f(new float[0.1983,0.7815,-0.028]);
Shape Shape1077 = createNode("Shape");
Shape1077.USE = "HAnimJointShape";
Transform1076.children = new MFNode();

Transform1076.children[0] = Shape1077;

HAnimSegment1074.children[1] = Transform1076;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_index1'/> to <HAnimJoint name='l_index2'/>
Shape Shape1078 = createNode("Shape");
LineSet LineSet1079 = createNode("LineSet");
LineSet1079.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1080 = createNode("Coordinate");
Coordinate1080.point = new MFVec3f(new float[0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
LineSet1079.coord = Coordinate1080;

ColorRGBA ColorRGBA1081 = createNode("ColorRGBA");
ColorRGBA1081.USE = "HAnimSegmentLineColorRGBA";
LineSet1079.color = ColorRGBA1081;

Shape1078.geometry = LineSet1079;

HAnimSegment1074.children[2] = Shape1078;

HAnimJoint1073.children = new MFNode();

HAnimJoint1073.children[0] = HAnimSegment1074;

HAnimJoint HAnimJoint1082 = createNode("HAnimJoint");
HAnimJoint1082.name = "l_index2";
HAnimJoint1082.DEF = "hanim_l_index2";
HAnimJoint1082.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint1082.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1082.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1083 = createNode("HAnimSegment");
HAnimSegment1083.name = "l_index_middle";
HAnimSegment1083.DEF = "hanim_l_index_middle";
//<HAnimJoint name='l_index2'/> visualization sphere within <HAnimSegment name='l_index_middle'/>
TouchSensor TouchSensor1084 = createNode("TouchSensor");
TouchSensor1084.description = "HAnimJoint l_index2, HAnimSegment l_index_middle";
HAnimSegment1083.children = new MFNode();

HAnimSegment1083.children[0] = TouchSensor1084;

Transform Transform1085 = createNode("Transform");
Transform1085.translation = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
Shape Shape1086 = createNode("Shape");
Shape1086.USE = "HAnimJointShape";
Transform1085.children = new MFNode();

Transform1085.children[0] = Shape1086;

HAnimSegment1083.children[1] = Transform1085;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_index2'/> to <HAnimJoint name='l_index3'/>
Shape Shape1087 = createNode("Shape");
LineSet LineSet1088 = createNode("LineSet");
LineSet1088.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1089 = createNode("Coordinate");
Coordinate1089.point = new MFVec3f(new float[0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
LineSet1088.coord = Coordinate1089;

ColorRGBA ColorRGBA1090 = createNode("ColorRGBA");
ColorRGBA1090.USE = "HAnimSegmentLineColorRGBA";
LineSet1088.color = ColorRGBA1090;

Shape1087.geometry = LineSet1088;

HAnimSegment1083.children[2] = Shape1087;

HAnimJoint1082.children = new MFNode();

HAnimJoint1082.children[0] = HAnimSegment1083;

HAnimJoint HAnimJoint1091 = createNode("HAnimJoint");
HAnimJoint1091.name = "l_index3";
HAnimJoint1091.DEF = "hanim_l_index3";
HAnimJoint1091.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint1091.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1091.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1092 = createNode("HAnimSegment");
HAnimSegment1092.name = "l_index_distal";
HAnimSegment1092.DEF = "hanim_l_index_distal";
//<HAnimJoint name='l_index3'/> visualization sphere within <HAnimSegment name='l_index_distal'/>
TouchSensor TouchSensor1093 = createNode("TouchSensor");
TouchSensor1093.description = "HAnimJoint l_index3, HAnimSegment l_index_distal";
HAnimSegment1092.children = new MFNode();

HAnimSegment1092.children[0] = TouchSensor1093;

Transform Transform1094 = createNode("Transform");
Transform1094.translation = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
Shape Shape1095 = createNode("Shape");
Shape1095.USE = "HAnimJointShape";
Transform1094.children = new MFNode();

Transform1094.children[0] = Shape1095;

HAnimSegment1092.children[1] = Transform1094;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_index_distal_tip'/>
Shape Shape1096 = createNode("Shape");
LineSet LineSet1097 = createNode("LineSet");
LineSet1097.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1098 = createNode("Coordinate");
Coordinate1098.point = new MFVec3f(new float[0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245]);
LineSet1097.coord = Coordinate1098;

ColorRGBA ColorRGBA1099 = createNode("ColorRGBA");
ColorRGBA1099.USE = "HAnimSiteLineColorRGBA";
LineSet1097.color = ColorRGBA1099;

Shape1096.geometry = LineSet1097;

HAnimSegment1092.children[2] = Shape1096;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_dactylion'/>
Shape Shape1100 = createNode("Shape");
LineSet LineSet1101 = createNode("LineSet");
LineSet1101.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1102 = createNode("Coordinate");
Coordinate1102.point = new MFVec3f(new float[0.2028,0.7139,-0.0236,0.2056,0.6743,-0.0482]);
LineSet1101.coord = Coordinate1102;

ColorRGBA ColorRGBA1103 = createNode("ColorRGBA");
ColorRGBA1103.USE = "HAnimSiteLineColorRGBA";
LineSet1101.color = ColorRGBA1103;

Shape1100.geometry = LineSet1101;

HAnimSegment1092.children[3] = Shape1100;

HAnimSite HAnimSite1104 = createNode("HAnimSite");
HAnimSite1104.name = "l_index_distal_tip";
HAnimSite1104.DEF = "hanim_l_index_distal_tip";
HAnimSite1104.translation = new SFVec3f(new float[0.2089,0.6858,-0.0245]);
//HAnimSite visualization shape
TouchSensor TouchSensor1105 = createNode("TouchSensor");
TouchSensor1105.description = "HAnimSite l_index_distal_tip";
HAnimSite1104.children = new MFNode();

HAnimSite1104.children[0] = TouchSensor1105;

Shape Shape1106 = createNode("Shape");
Shape1106.USE = "HAnimSiteShape";
HAnimSite1104.children[1] = Shape1106;

HAnimSegment1092.children[4] = HAnimSite1104;

HAnimSite HAnimSite1107 = createNode("HAnimSite");
HAnimSite1107.name = "l_dactylion_pt";
HAnimSite1107.DEF = "hanim_l_dactylion_pt";
HAnimSite1107.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
//HAnimSite visualization shape
TouchSensor TouchSensor1108 = createNode("TouchSensor");
TouchSensor1108.description = "HAnimSite l_dactylion";
HAnimSite1107.children = new MFNode();

HAnimSite1107.children[0] = TouchSensor1108;

Shape Shape1109 = createNode("Shape");
Shape1109.USE = "HAnimSiteShape";
HAnimSite1107.children[1] = Shape1109;

HAnimSegment1092.children[5] = HAnimSite1107;

HAnimJoint1091.children = new MFNode();

HAnimJoint1091.children[0] = HAnimSegment1092;

HAnimJoint1082.children[1] = HAnimJoint1091;

HAnimJoint1073.children[1] = HAnimJoint1082;

HAnimJoint1064.children[1] = HAnimJoint1073;

HAnimJoint978.children[2] = HAnimJoint1064;

HAnimJoint HAnimJoint1110 = createNode("HAnimJoint");
HAnimJoint1110.name = "l_middle0";
HAnimJoint1110.DEF = "hanim_l_middle0";
HAnimJoint1110.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimJoint1110.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1110.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1111 = createNode("HAnimSegment");
HAnimSegment1111.name = "l_middle_metacarpal";
HAnimSegment1111.DEF = "hanim_l_middle_metacarpal";
//<HAnimJoint name='l_middle0'/> visualization sphere within <HAnimSegment name='l_middle_metacarpal'/>
TouchSensor TouchSensor1112 = createNode("TouchSensor");
TouchSensor1112.description = "HAnimJoint l_middle0, HAnimSegment l_middle_metacarpal";
HAnimSegment1111.children = new MFNode();

HAnimSegment1111.children[0] = TouchSensor1112;

Transform Transform1113 = createNode("Transform");
Transform1113.translation = new SFVec3f(new float[0.1987,0.8029,-0.053]);
Shape Shape1114 = createNode("Shape");
Shape1114.USE = "HAnimJointShape";
Transform1113.children = new MFNode();

Transform1113.children[0] = Shape1114;

HAnimSegment1111.children[1] = Transform1113;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle0'/> to <HAnimJoint name='l_middle1'/>
Shape Shape1115 = createNode("Shape");
LineSet LineSet1116 = createNode("LineSet");
LineSet1116.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1117 = createNode("Coordinate");
Coordinate1117.point = new MFVec3f(new float[0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
LineSet1116.coord = Coordinate1117;

ColorRGBA ColorRGBA1118 = createNode("ColorRGBA");
ColorRGBA1118.USE = "HAnimSegmentLineColorRGBA";
LineSet1116.color = ColorRGBA1118;

Shape1115.geometry = LineSet1116;

HAnimSegment1111.children[2] = Shape1115;

HAnimJoint1110.children = new MFNode();

HAnimJoint1110.children[0] = HAnimSegment1111;

HAnimJoint HAnimJoint1119 = createNode("HAnimJoint");
HAnimJoint1119.name = "l_middle1";
HAnimJoint1119.DEF = "hanim_l_middle1";
HAnimJoint1119.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimJoint1119.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1119.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1120 = createNode("HAnimSegment");
HAnimSegment1120.name = "l_middle_proximal";
HAnimSegment1120.DEF = "hanim_l_middle_proximal";
//<HAnimJoint name='l_middle1'/> visualization sphere within <HAnimSegment name='l_middle_proximal'/>
TouchSensor TouchSensor1121 = createNode("TouchSensor");
TouchSensor1121.description = "HAnimJoint l_middle1, HAnimSegment l_middle_proximal";
HAnimSegment1120.children = new MFNode();

HAnimSegment1120.children[0] = TouchSensor1121;

Transform Transform1122 = createNode("Transform");
Transform1122.translation = new SFVec3f(new float[0.1987,0.7818,-0.053]);
Shape Shape1123 = createNode("Shape");
Shape1123.USE = "HAnimJointShape";
Transform1122.children = new MFNode();

Transform1122.children[0] = Shape1123;

HAnimSegment1120.children[1] = Transform1122;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle1'/> to <HAnimJoint name='l_middle2'/>
Shape Shape1124 = createNode("Shape");
LineSet LineSet1125 = createNode("LineSet");
LineSet1125.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1126 = createNode("Coordinate");
Coordinate1126.point = new MFVec3f(new float[0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
LineSet1125.coord = Coordinate1126;

ColorRGBA ColorRGBA1127 = createNode("ColorRGBA");
ColorRGBA1127.USE = "HAnimSegmentLineColorRGBA";
LineSet1125.color = ColorRGBA1127;

Shape1124.geometry = LineSet1125;

HAnimSegment1120.children[2] = Shape1124;

HAnimJoint1119.children = new MFNode();

HAnimJoint1119.children[0] = HAnimSegment1120;

HAnimJoint HAnimJoint1128 = createNode("HAnimJoint");
HAnimJoint1128.name = "l_middle2";
HAnimJoint1128.DEF = "hanim_l_middle2";
HAnimJoint1128.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimJoint1128.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1128.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1129 = createNode("HAnimSegment");
HAnimSegment1129.name = "l_middle_middle";
HAnimSegment1129.DEF = "hanim_l_middle_middle";
//<HAnimJoint name='l_middle2'/> visualization sphere within <HAnimSegment name='l_middle_middle'/>
TouchSensor TouchSensor1130 = createNode("TouchSensor");
TouchSensor1130.description = "HAnimJoint l_middle2, HAnimSegment l_middle_middle";
HAnimSegment1129.children = new MFNode();

HAnimSegment1129.children[0] = TouchSensor1130;

Transform Transform1131 = createNode("Transform");
Transform1131.translation = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
Shape Shape1132 = createNode("Shape");
Shape1132.USE = "HAnimJointShape";
Transform1131.children = new MFNode();

Transform1131.children[0] = Shape1132;

HAnimSegment1129.children[1] = Transform1131;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle2'/> to <HAnimJoint name='l_middle3'/>
Shape Shape1133 = createNode("Shape");
LineSet LineSet1134 = createNode("LineSet");
LineSet1134.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1135 = createNode("Coordinate");
Coordinate1135.point = new MFVec3f(new float[0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
LineSet1134.coord = Coordinate1135;

ColorRGBA ColorRGBA1136 = createNode("ColorRGBA");
ColorRGBA1136.USE = "HAnimSegmentLineColorRGBA";
LineSet1134.color = ColorRGBA1136;

Shape1133.geometry = LineSet1134;

HAnimSegment1129.children[2] = Shape1133;

HAnimJoint1128.children = new MFNode();

HAnimJoint1128.children[0] = HAnimSegment1129;

HAnimJoint HAnimJoint1137 = createNode("HAnimJoint");
HAnimJoint1137.name = "l_middle3";
HAnimJoint1137.DEF = "hanim_l_middle3";
HAnimJoint1137.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint1137.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1137.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1138 = createNode("HAnimSegment");
HAnimSegment1138.name = "l_middle_distal";
HAnimSegment1138.DEF = "hanim_l_middle_distal";
//<HAnimJoint name='l_middle3'/> visualization sphere within <HAnimSegment name='l_middle_distal'/>
TouchSensor TouchSensor1139 = createNode("TouchSensor");
TouchSensor1139.description = "HAnimJoint l_middle3, HAnimSegment l_middle_distal";
HAnimSegment1138.children = new MFNode();

HAnimSegment1138.children[0] = TouchSensor1139;

Transform Transform1140 = createNode("Transform");
Transform1140.translation = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
Shape Shape1141 = createNode("Shape");
Shape1141.USE = "HAnimJointShape";
Transform1140.children = new MFNode();

Transform1140.children[0] = Shape1141;

HAnimSegment1138.children[1] = Transform1140;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_middle3'/> to <HAnimSite name='l_middle_distal_tip'/>
Shape Shape1142 = createNode("Shape");
LineSet LineSet1143 = createNode("LineSet");
LineSet1143.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1144 = createNode("Coordinate");
Coordinate1144.point = new MFVec3f(new float[0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491]);
LineSet1143.coord = Coordinate1144;

ColorRGBA ColorRGBA1145 = createNode("ColorRGBA");
ColorRGBA1145.USE = "HAnimSiteLineColorRGBA";
LineSet1143.color = ColorRGBA1145;

Shape1142.geometry = LineSet1143;

HAnimSegment1138.children[2] = Shape1142;

HAnimSite HAnimSite1146 = createNode("HAnimSite");
HAnimSite1146.name = "l_middle_distal_tip";
HAnimSite1146.DEF = "hanim_l_middle_distal_tip";
HAnimSite1146.translation = new SFVec3f(new float[0.208,0.6731,-0.0491]);
//HAnimSite visualization shape
TouchSensor TouchSensor1147 = createNode("TouchSensor");
TouchSensor1147.description = "HAnimSite l_middle_distal_tip";
HAnimSite1146.children = new MFNode();

HAnimSite1146.children[0] = TouchSensor1147;

Shape Shape1148 = createNode("Shape");
Shape1148.USE = "HAnimSiteShape";
HAnimSite1146.children[1] = Shape1148;

HAnimSegment1138.children[3] = HAnimSite1146;

HAnimJoint1137.children = new MFNode();

HAnimJoint1137.children[0] = HAnimSegment1138;

HAnimJoint1128.children[1] = HAnimJoint1137;

HAnimJoint1119.children[1] = HAnimJoint1128;

HAnimJoint1110.children[1] = HAnimJoint1119;

HAnimJoint978.children[3] = HAnimJoint1110;

HAnimJoint HAnimJoint1149 = createNode("HAnimJoint");
HAnimJoint1149.name = "l_ring0";
HAnimJoint1149.DEF = "hanim_l_ring0";
HAnimJoint1149.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimJoint1149.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1149.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1150 = createNode("HAnimSegment");
HAnimSegment1150.name = "l_ring_metacarpal";
HAnimSegment1150.DEF = "hanim_l_ring_metacarpal";
//<HAnimJoint name='l_ring0'/> visualization sphere within <HAnimSegment name='l_ring_metacarpal'/>
TouchSensor TouchSensor1151 = createNode("TouchSensor");
TouchSensor1151.description = "HAnimJoint l_ring0, HAnimSegment l_ring_metacarpal";
HAnimSegment1150.children = new MFNode();

HAnimSegment1150.children[0] = TouchSensor1151;

Transform Transform1152 = createNode("Transform");
Transform1152.translation = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
Shape Shape1153 = createNode("Shape");
Shape1153.USE = "HAnimJointShape";
Transform1152.children = new MFNode();

Transform1152.children[0] = Shape1153;

HAnimSegment1150.children[1] = Transform1152;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring0'/> to <HAnimJoint name='l_ring1'/>
Shape Shape1154 = createNode("Shape");
LineSet LineSet1155 = createNode("LineSet");
LineSet1155.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1156 = createNode("Coordinate");
Coordinate1156.point = new MFVec3f(new float[0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
LineSet1155.coord = Coordinate1156;

ColorRGBA ColorRGBA1157 = createNode("ColorRGBA");
ColorRGBA1157.USE = "HAnimSegmentLineColorRGBA";
LineSet1155.color = ColorRGBA1157;

Shape1154.geometry = LineSet1155;

HAnimSegment1150.children[2] = Shape1154;

HAnimJoint1149.children = new MFNode();

HAnimJoint1149.children[0] = HAnimSegment1150;

HAnimJoint HAnimJoint1158 = createNode("HAnimJoint");
HAnimJoint1158.name = "l_ring1";
HAnimJoint1158.DEF = "hanim_l_ring1";
HAnimJoint1158.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimJoint1158.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1158.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1159 = createNode("HAnimSegment");
HAnimSegment1159.name = "l_ring_proximal";
HAnimSegment1159.DEF = "hanim_l_ring_proximal";
//<HAnimJoint name='l_ring1'/> visualization sphere within <HAnimSegment name='l_ring_proximal'/>
TouchSensor TouchSensor1160 = createNode("TouchSensor");
TouchSensor1160.description = "HAnimJoint l_ring1, HAnimSegment l_ring_proximal";
HAnimSegment1159.children = new MFNode();

HAnimSegment1159.children[0] = TouchSensor1160;

Transform Transform1161 = createNode("Transform");
Transform1161.translation = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
Shape Shape1162 = createNode("Shape");
Shape1162.USE = "HAnimJointShape";
Transform1161.children = new MFNode();

Transform1161.children[0] = Shape1162;

HAnimSegment1159.children[1] = Transform1161;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring1'/> to <HAnimJoint name='l_ring2'/>
Shape Shape1163 = createNode("Shape");
LineSet LineSet1164 = createNode("LineSet");
LineSet1164.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1165 = createNode("Coordinate");
Coordinate1165.point = new MFVec3f(new float[0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
LineSet1164.coord = Coordinate1165;

ColorRGBA ColorRGBA1166 = createNode("ColorRGBA");
ColorRGBA1166.USE = "HAnimSegmentLineColorRGBA";
LineSet1164.color = ColorRGBA1166;

Shape1163.geometry = LineSet1164;

HAnimSegment1159.children[2] = Shape1163;

HAnimJoint1158.children = new MFNode();

HAnimJoint1158.children[0] = HAnimSegment1159;

HAnimJoint HAnimJoint1167 = createNode("HAnimJoint");
HAnimJoint1167.name = "l_ring2";
HAnimJoint1167.DEF = "hanim_l_ring2";
HAnimJoint1167.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimJoint1167.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1167.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1168 = createNode("HAnimSegment");
HAnimSegment1168.name = "l_ring_middle";
HAnimSegment1168.DEF = "hanim_l_ring_middle";
//<HAnimJoint name='l_ring2'/> visualization sphere within <HAnimSegment name='l_ring_middle'/>
TouchSensor TouchSensor1169 = createNode("TouchSensor");
TouchSensor1169.description = "HAnimJoint l_ring2, HAnimSegment l_ring_middle";
HAnimSegment1168.children = new MFNode();

HAnimSegment1168.children[0] = TouchSensor1169;

Transform Transform1170 = createNode("Transform");
Transform1170.translation = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
Shape Shape1171 = createNode("Shape");
Shape1171.USE = "HAnimJointShape";
Transform1170.children = new MFNode();

Transform1170.children[0] = Shape1171;

HAnimSegment1168.children[1] = Transform1170;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring2'/> to <HAnimJoint name='l_ring3'/>
Shape Shape1172 = createNode("Shape");
LineSet LineSet1173 = createNode("LineSet");
LineSet1173.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1174 = createNode("Coordinate");
Coordinate1174.point = new MFVec3f(new float[0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
LineSet1173.coord = Coordinate1174;

ColorRGBA ColorRGBA1175 = createNode("ColorRGBA");
ColorRGBA1175.USE = "HAnimSegmentLineColorRGBA";
LineSet1173.color = ColorRGBA1175;

Shape1172.geometry = LineSet1173;

HAnimSegment1168.children[2] = Shape1172;

HAnimJoint1167.children = new MFNode();

HAnimJoint1167.children[0] = HAnimSegment1168;

HAnimJoint HAnimJoint1176 = createNode("HAnimJoint");
HAnimJoint1176.name = "l_ring3";
HAnimJoint1176.DEF = "hanim_l_ring3";
HAnimJoint1176.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint1176.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1176.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1177 = createNode("HAnimSegment");
HAnimSegment1177.name = "l_ring_distal";
HAnimSegment1177.DEF = "hanim_l_ring_distal";
//<HAnimJoint name='l_ring3'/> visualization sphere within <HAnimSegment name='l_ring_distal'/>
TouchSensor TouchSensor1178 = createNode("TouchSensor");
TouchSensor1178.description = "HAnimJoint l_ring3, HAnimSegment l_ring_distal";
HAnimSegment1177.children = new MFNode();

HAnimSegment1177.children[0] = TouchSensor1178;

Transform Transform1179 = createNode("Transform");
Transform1179.translation = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
Shape Shape1180 = createNode("Shape");
Shape1180.USE = "HAnimJointShape";
Transform1179.children = new MFNode();

Transform1179.children[0] = Shape1180;

HAnimSegment1177.children[1] = Transform1179;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ring3'/> to <HAnimSite name='l_ring_distal_tip'/>
Shape Shape1181 = createNode("Shape");
LineSet LineSet1182 = createNode("LineSet");
LineSet1182.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1183 = createNode("Coordinate");
Coordinate1183.point = new MFVec3f(new float[0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756]);
LineSet1182.coord = Coordinate1183;

ColorRGBA ColorRGBA1184 = createNode("ColorRGBA");
ColorRGBA1184.USE = "HAnimSiteLineColorRGBA";
LineSet1182.color = ColorRGBA1184;

Shape1181.geometry = LineSet1182;

HAnimSegment1177.children[2] = Shape1181;

HAnimSite HAnimSite1185 = createNode("HAnimSite");
HAnimSite1185.name = "l_ring_distal_tip";
HAnimSite1185.DEF = "hanim_l_ring_distal_tip";
HAnimSite1185.translation = new SFVec3f(new float[0.2035,0.675,-0.0756]);
//HAnimSite visualization shape
TouchSensor TouchSensor1186 = createNode("TouchSensor");
TouchSensor1186.description = "HAnimSite l_ring_distal_tip";
HAnimSite1185.children = new MFNode();

HAnimSite1185.children[0] = TouchSensor1186;

Shape Shape1187 = createNode("Shape");
Shape1187.USE = "HAnimSiteShape";
HAnimSite1185.children[1] = Shape1187;

HAnimSegment1177.children[3] = HAnimSite1185;

HAnimJoint1176.children = new MFNode();

HAnimJoint1176.children[0] = HAnimSegment1177;

HAnimJoint1167.children[1] = HAnimJoint1176;

HAnimJoint1158.children[1] = HAnimJoint1167;

HAnimJoint1149.children[1] = HAnimJoint1158;

HAnimJoint978.children[4] = HAnimJoint1149;

HAnimJoint HAnimJoint1188 = createNode("HAnimJoint");
HAnimJoint1188.name = "l_pinky0";
HAnimJoint1188.DEF = "hanim_l_pinky0";
HAnimJoint1188.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimJoint1188.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1188.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1189 = createNode("HAnimSegment");
HAnimSegment1189.name = "l_pinky_metacarpal";
HAnimSegment1189.DEF = "hanim_l_pinky_metacarpal";
//<HAnimJoint name='l_pinky0'/> visualization sphere within <HAnimSegment name='l_pinky_metacarpal'/>
TouchSensor TouchSensor1190 = createNode("TouchSensor");
TouchSensor1190.description = "HAnimJoint l_pinky0, HAnimSegment l_pinky_metacarpal";
HAnimSegment1189.children = new MFNode();

HAnimSegment1189.children[0] = TouchSensor1190;

Transform Transform1191 = createNode("Transform");
Transform1191.translation = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
Shape Shape1192 = createNode("Shape");
Shape1192.USE = "HAnimJointShape";
Transform1191.children = new MFNode();

Transform1191.children[0] = Shape1192;

HAnimSegment1189.children[1] = Transform1191;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky0'/> to <HAnimJoint name='l_pinky1'/>
Shape Shape1193 = createNode("Shape");
LineSet LineSet1194 = createNode("LineSet");
LineSet1194.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1195 = createNode("Coordinate");
Coordinate1195.point = new MFVec3f(new float[0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
LineSet1194.coord = Coordinate1195;

ColorRGBA ColorRGBA1196 = createNode("ColorRGBA");
ColorRGBA1196.USE = "HAnimSegmentLineColorRGBA";
LineSet1194.color = ColorRGBA1196;

Shape1193.geometry = LineSet1194;

HAnimSegment1189.children[2] = Shape1193;

HAnimJoint1188.children = new MFNode();

HAnimJoint1188.children[0] = HAnimSegment1189;

HAnimJoint HAnimJoint1197 = createNode("HAnimJoint");
HAnimJoint1197.name = "l_pinky1";
HAnimJoint1197.DEF = "hanim_l_pinky1";
HAnimJoint1197.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimJoint1197.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1197.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1198 = createNode("HAnimSegment");
HAnimSegment1198.name = "l_pinky_proximal";
HAnimSegment1198.DEF = "hanim_l_pinky_proximal";
//<HAnimJoint name='l_pinky1'/> visualization sphere within <HAnimSegment name='l_pinky_proximal'/>
TouchSensor TouchSensor1199 = createNode("TouchSensor");
TouchSensor1199.description = "HAnimJoint l_pinky1, HAnimSegment l_pinky_proximal";
HAnimSegment1198.children = new MFNode();

HAnimSegment1198.children[0] = TouchSensor1199;

Transform Transform1200 = createNode("Transform");
Transform1200.translation = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
Shape Shape1201 = createNode("Shape");
Shape1201.USE = "HAnimJointShape";
Transform1200.children = new MFNode();

Transform1200.children[0] = Shape1201;

HAnimSegment1198.children[1] = Transform1200;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky1'/> to <HAnimJoint name='l_pinky2'/>
Shape Shape1202 = createNode("Shape");
LineSet LineSet1203 = createNode("LineSet");
LineSet1203.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1204 = createNode("Coordinate");
Coordinate1204.point = new MFVec3f(new float[0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
LineSet1203.coord = Coordinate1204;

ColorRGBA ColorRGBA1205 = createNode("ColorRGBA");
ColorRGBA1205.USE = "HAnimSegmentLineColorRGBA";
LineSet1203.color = ColorRGBA1205;

Shape1202.geometry = LineSet1203;

HAnimSegment1198.children[2] = Shape1202;

HAnimJoint1197.children = new MFNode();

HAnimJoint1197.children[0] = HAnimSegment1198;

HAnimJoint HAnimJoint1206 = createNode("HAnimJoint");
HAnimJoint1206.name = "l_pinky2";
HAnimJoint1206.DEF = "hanim_l_pinky2";
HAnimJoint1206.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimJoint1206.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1206.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1207 = createNode("HAnimSegment");
HAnimSegment1207.name = "l_pinky_middle";
HAnimSegment1207.DEF = "hanim_l_pinky_middle";
//<HAnimJoint name='l_pinky2'/> visualization sphere within <HAnimSegment name='l_pinky_middle'/>
TouchSensor TouchSensor1208 = createNode("TouchSensor");
TouchSensor1208.description = "HAnimJoint l_pinky2, HAnimSegment l_pinky_middle";
HAnimSegment1207.children = new MFNode();

HAnimSegment1207.children[0] = TouchSensor1208;

Transform Transform1209 = createNode("Transform");
Transform1209.translation = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
Shape Shape1210 = createNode("Shape");
Shape1210.USE = "HAnimJointShape";
Transform1209.children = new MFNode();

Transform1209.children[0] = Shape1210;

HAnimSegment1207.children[1] = Transform1209;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky2'/> to <HAnimJoint name='l_pinky3'/>
Shape Shape1211 = createNode("Shape");
LineSet LineSet1212 = createNode("LineSet");
LineSet1212.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1213 = createNode("Coordinate");
Coordinate1213.point = new MFVec3f(new float[0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
LineSet1212.coord = Coordinate1213;

ColorRGBA ColorRGBA1214 = createNode("ColorRGBA");
ColorRGBA1214.USE = "HAnimSegmentLineColorRGBA";
LineSet1212.color = ColorRGBA1214;

Shape1211.geometry = LineSet1212;

HAnimSegment1207.children[2] = Shape1211;

HAnimJoint1206.children = new MFNode();

HAnimJoint1206.children[0] = HAnimSegment1207;

HAnimJoint HAnimJoint1215 = createNode("HAnimJoint");
HAnimJoint1215.name = "l_pinky3";
HAnimJoint1215.DEF = "hanim_l_pinky3";
HAnimJoint1215.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint1215.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1215.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1216 = createNode("HAnimSegment");
HAnimSegment1216.name = "l_pinky_distal";
HAnimSegment1216.DEF = "hanim_l_pinky_distal";
//<HAnimJoint name='l_pinky3'/> visualization sphere within <HAnimSegment name='l_pinky_distal'/>
TouchSensor TouchSensor1217 = createNode("TouchSensor");
TouchSensor1217.description = "HAnimJoint l_pinky3, HAnimSegment l_pinky_distal";
HAnimSegment1216.children = new MFNode();

HAnimSegment1216.children[0] = TouchSensor1217;

Transform Transform1218 = createNode("Transform");
Transform1218.translation = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
Shape Shape1219 = createNode("Shape");
Shape1219.USE = "HAnimJointShape";
Transform1218.children = new MFNode();

Transform1218.children[0] = Shape1219;

HAnimSegment1216.children[1] = Transform1218;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_pinky3'/> to <HAnimSite name='l_pinky_distal_tip'/>
Shape Shape1220 = createNode("Shape");
LineSet LineSet1221 = createNode("LineSet");
LineSet1221.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1222 = createNode("Coordinate");
Coordinate1222.point = new MFVec3f(new float[0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012]);
LineSet1221.coord = Coordinate1222;

ColorRGBA ColorRGBA1223 = createNode("ColorRGBA");
ColorRGBA1223.USE = "HAnimSiteLineColorRGBA";
LineSet1221.color = ColorRGBA1223;

Shape1220.geometry = LineSet1221;

HAnimSegment1216.children[2] = Shape1220;

HAnimSite HAnimSite1224 = createNode("HAnimSite");
HAnimSite1224.name = "l_pinky_distal_tip";
HAnimSite1224.DEF = "hanim_l_pinky_distal_tip";
HAnimSite1224.translation = new SFVec3f(new float[0.2014,0.7009,-0.1012]);
//HAnimSite visualization shape
TouchSensor TouchSensor1225 = createNode("TouchSensor");
TouchSensor1225.description = "HAnimSite l_pinky_distal_tip";
HAnimSite1224.children = new MFNode();

HAnimSite1224.children[0] = TouchSensor1225;

Shape Shape1226 = createNode("Shape");
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

HAnimJoint HAnimJoint1227 = createNode("HAnimJoint");
HAnimJoint1227.name = "r_sternoclavicular";
HAnimJoint1227.DEF = "hanim_r_sternoclavicular";
HAnimJoint1227.center = new SFVec3f(new float[-0.082,1.4488,-0.0353]);
HAnimJoint1227.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1227.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1228 = createNode("HAnimSegment");
HAnimSegment1228.name = "r_clavicle";
HAnimSegment1228.DEF = "hanim_r_clavicle";
//<HAnimJoint name='r_sternoclavicular'/> visualization sphere within <HAnimSegment name='r_clavicle'/>
TouchSensor TouchSensor1229 = createNode("TouchSensor");
TouchSensor1229.description = "HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle";
HAnimSegment1228.children = new MFNode();

HAnimSegment1228.children[0] = TouchSensor1229;

Transform Transform1230 = createNode("Transform");
Transform1230.translation = new SFVec3f(new float[-0.082,1.4488,-0.0353]);
Shape Shape1231 = createNode("Shape");
Shape1231.USE = "HAnimJointShape";
Transform1230.children = new MFNode();

Transform1230.children[0] = Shape1231;

HAnimSegment1228.children[1] = Transform1230;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_sternoclavicular'/> to <HAnimJoint name='r_acromioclavicular'/>
Shape Shape1232 = createNode("Shape");
LineSet LineSet1233 = createNode("LineSet");
LineSet1233.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1234 = createNode("Coordinate");
Coordinate1234.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.0962,1.4269,-0.0424]);
LineSet1233.coord = Coordinate1234;

ColorRGBA ColorRGBA1235 = createNode("ColorRGBA");
ColorRGBA1235.USE = "HAnimSegmentLineColorRGBA";
LineSet1233.color = ColorRGBA1235;

Shape1232.geometry = LineSet1233;

HAnimSegment1228.children[2] = Shape1232;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_clavicale'/>
Shape Shape1236 = createNode("Shape");
LineSet LineSet1237 = createNode("LineSet");
LineSet1237.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1238 = createNode("Coordinate");
Coordinate1238.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.0115,1.4943,0.04]);
LineSet1237.coord = Coordinate1238;

ColorRGBA ColorRGBA1239 = createNode("ColorRGBA");
ColorRGBA1239.USE = "HAnimSiteLineColorRGBA";
LineSet1237.color = ColorRGBA1239;

Shape1236.geometry = LineSet1237;

HAnimSegment1228.children[3] = Shape1236;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_acromion'/>
Shape Shape1240 = createNode("Shape");
LineSet LineSet1241 = createNode("LineSet");
LineSet1241.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1242 = createNode("Coordinate");
Coordinate1242.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.1905,1.4791,-0.0431]);
LineSet1241.coord = Coordinate1242;

ColorRGBA ColorRGBA1243 = createNode("ColorRGBA");
ColorRGBA1243.USE = "HAnimSiteLineColorRGBA";
LineSet1241.color = ColorRGBA1243;

Shape1240.geometry = LineSet1241;

HAnimSegment1228.children[4] = Shape1240;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_ant'/>
Shape Shape1244 = createNode("Shape");
LineSet LineSet1245 = createNode("LineSet");
LineSet1245.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1246 = createNode("Coordinate");
Coordinate1246.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.1626,1.4072,-0.0031]);
LineSet1245.coord = Coordinate1246;

ColorRGBA ColorRGBA1247 = createNode("ColorRGBA");
ColorRGBA1247.USE = "HAnimSiteLineColorRGBA";
LineSet1245.color = ColorRGBA1247;

Shape1244.geometry = LineSet1245;

HAnimSegment1228.children[5] = Shape1244;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_post'/>
Shape Shape1248 = createNode("Shape");
LineSet LineSet1249 = createNode("LineSet");
LineSet1249.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1250 = createNode("Coordinate");
Coordinate1250.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.1603,1.4098,-0.0826]);
LineSet1249.coord = Coordinate1250;

ColorRGBA ColorRGBA1251 = createNode("ColorRGBA");
ColorRGBA1251.USE = "HAnimSiteLineColorRGBA";
LineSet1249.color = ColorRGBA1251;

Shape1248.geometry = LineSet1249;

HAnimSegment1228.children[6] = Shape1248;

HAnimSite HAnimSite1252 = createNode("HAnimSite");
HAnimSite1252.name = "r_clavicale_pt";
HAnimSite1252.DEF = "hanim_r_clavicale_pt";
HAnimSite1252.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
//HAnimSite visualization shape
TouchSensor TouchSensor1253 = createNode("TouchSensor");
TouchSensor1253.description = "HAnimSite r_clavicale";
HAnimSite1252.children = new MFNode();

HAnimSite1252.children[0] = TouchSensor1253;

Shape Shape1254 = createNode("Shape");
Shape1254.USE = "HAnimSiteShape";
HAnimSite1252.children[1] = Shape1254;

HAnimSegment1228.children[7] = HAnimSite1252;

HAnimSite HAnimSite1255 = createNode("HAnimSite");
HAnimSite1255.name = "r_acromion_pt";
HAnimSite1255.DEF = "hanim_r_acromion_pt";
HAnimSite1255.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
//HAnimSite visualization shape
TouchSensor TouchSensor1256 = createNode("TouchSensor");
TouchSensor1256.description = "HAnimSite r_acromion";
HAnimSite1255.children = new MFNode();

HAnimSite1255.children[0] = TouchSensor1256;

Shape Shape1257 = createNode("Shape");
Shape1257.USE = "HAnimSiteShape";
HAnimSite1255.children[1] = Shape1257;

HAnimSegment1228.children[8] = HAnimSite1255;

HAnimSite HAnimSite1258 = createNode("HAnimSite");
HAnimSite1258.name = "r_axilla_ant_pt";
HAnimSite1258.DEF = "hanim_r_axilla_ant_pt";
HAnimSite1258.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
//HAnimSite visualization shape
TouchSensor TouchSensor1259 = createNode("TouchSensor");
TouchSensor1259.description = "HAnimSite r_axilla_ant";
HAnimSite1258.children = new MFNode();

HAnimSite1258.children[0] = TouchSensor1259;

Shape Shape1260 = createNode("Shape");
Shape1260.USE = "HAnimSiteShape";
HAnimSite1258.children[1] = Shape1260;

HAnimSegment1228.children[9] = HAnimSite1258;

HAnimSite HAnimSite1261 = createNode("HAnimSite");
HAnimSite1261.name = "r_axilla_post_pt";
HAnimSite1261.DEF = "hanim_r_axilla_post_pt";
HAnimSite1261.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
//HAnimSite visualization shape
TouchSensor TouchSensor1262 = createNode("TouchSensor");
TouchSensor1262.description = "HAnimSite r_axilla_post";
HAnimSite1261.children = new MFNode();

HAnimSite1261.children[0] = TouchSensor1262;

Shape Shape1263 = createNode("Shape");
Shape1263.USE = "HAnimSiteShape";
HAnimSite1261.children[1] = Shape1263;

HAnimSegment1228.children[10] = HAnimSite1261;

HAnimJoint1227.children = new MFNode();

HAnimJoint1227.children[0] = HAnimSegment1228;

HAnimJoint HAnimJoint1264 = createNode("HAnimJoint");
HAnimJoint1264.name = "r_acromioclavicular";
HAnimJoint1264.DEF = "hanim_r_acromioclavicular";
HAnimJoint1264.center = new SFVec3f(new float[-0.0962,1.4269,-0.0424]);
HAnimJoint1264.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1264.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1265 = createNode("HAnimSegment");
HAnimSegment1265.name = "r_scapula";
HAnimSegment1265.DEF = "hanim_r_scapula";
//<HAnimJoint name='r_acromioclavicular'/> visualization sphere within <HAnimSegment name='r_scapula'/>
TouchSensor TouchSensor1266 = createNode("TouchSensor");
TouchSensor1266.description = "HAnimJoint r_acromioclavicular, HAnimSegment r_scapula";
HAnimSegment1265.children = new MFNode();

HAnimSegment1265.children[0] = TouchSensor1266;

Transform Transform1267 = createNode("Transform");
Transform1267.translation = new SFVec3f(new float[-0.0962,1.4269,-0.0424]);
Shape Shape1268 = createNode("Shape");
Shape1268.USE = "HAnimJointShape";
Transform1267.children = new MFNode();

Transform1267.children[0] = Shape1268;

HAnimSegment1265.children[1] = Transform1267;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_acromioclavicular'/> to <HAnimJoint name='r_shoulder'/>
Shape Shape1269 = createNode("Shape");
LineSet LineSet1270 = createNode("LineSet");
LineSet1270.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1271 = createNode("Coordinate");
Coordinate1271.point = new MFVec3f(new float[-0.0962,1.4269,-0.0424,-0.2029,1.4376,-0.0387]);
LineSet1270.coord = Coordinate1271;

ColorRGBA ColorRGBA1272 = createNode("ColorRGBA");
ColorRGBA1272.USE = "HAnimSegmentLineColorRGBA";
LineSet1270.color = ColorRGBA1272;

Shape1269.geometry = LineSet1270;

HAnimSegment1265.children[2] = Shape1269;

HAnimJoint1264.children = new MFNode();

HAnimJoint1264.children[0] = HAnimSegment1265;

HAnimJoint HAnimJoint1273 = createNode("HAnimJoint");
HAnimJoint1273.name = "r_shoulder";
HAnimJoint1273.DEF = "hanim_r_shoulder";
HAnimJoint1273.center = new SFVec3f(new float[-0.2029,1.4376,-0.0387]);
HAnimJoint1273.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1273.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1274 = createNode("HAnimSegment");
HAnimSegment1274.name = "r_upperarm";
HAnimSegment1274.DEF = "hanim_r_upperarm";
//<HAnimJoint name='r_shoulder'/> visualization sphere within <HAnimSegment name='r_upperarm'/>
TouchSensor TouchSensor1275 = createNode("TouchSensor");
TouchSensor1275.description = "HAnimJoint r_shoulder, HAnimSegment r_upperarm";
HAnimSegment1274.children = new MFNode();

HAnimSegment1274.children[0] = TouchSensor1275;

Transform Transform1276 = createNode("Transform");
Transform1276.translation = new SFVec3f(new float[-0.2029,1.4376,-0.0387]);
Shape Shape1277 = createNode("Shape");
Shape1277.USE = "HAnimJointShape";
Transform1276.children = new MFNode();

Transform1276.children[0] = Shape1277;

HAnimSegment1274.children[1] = Transform1276;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_shoulder'/> to <HAnimJoint name='r_elbow'/>
Shape Shape1278 = createNode("Shape");
LineSet LineSet1279 = createNode("LineSet");
LineSet1279.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1280 = createNode("Coordinate");
Coordinate1280.point = new MFVec3f(new float[-0.2029,1.4376,-0.0387,-0.2014,1.1357,-0.0682]);
LineSet1279.coord = Coordinate1280;

ColorRGBA ColorRGBA1281 = createNode("ColorRGBA");
ColorRGBA1281.USE = "HAnimSegmentLineColorRGBA";
LineSet1279.color = ColorRGBA1281;

Shape1278.geometry = LineSet1279;

HAnimSegment1274.children[2] = Shape1278;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_shoulder'/> to <HAnimSite name='r_humeral_lateral_epicn'/>
Shape Shape1282 = createNode("Shape");
LineSet LineSet1283 = createNode("LineSet");
LineSet1283.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1284 = createNode("Coordinate");
Coordinate1284.point = new MFVec3f(new float[-0.2029,1.4376,-0.0387,-0.2224,1.1517,-0.1033]);
LineSet1283.coord = Coordinate1284;

ColorRGBA ColorRGBA1285 = createNode("ColorRGBA");
ColorRGBA1285.USE = "HAnimSiteLineColorRGBA";
LineSet1283.color = ColorRGBA1285;

Shape1282.geometry = LineSet1283;

HAnimSegment1274.children[3] = Shape1282;

HAnimSite HAnimSite1286 = createNode("HAnimSite");
HAnimSite1286.name = "r_humeral_lateral_epicn_pt";
HAnimSite1286.DEF = "hanim_r_humeral_lateral_epicn_pt";
HAnimSite1286.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
//HAnimSite visualization shape
TouchSensor TouchSensor1287 = createNode("TouchSensor");
TouchSensor1287.description = "HAnimSite r_humeral_lateral_epicn";
HAnimSite1286.children = new MFNode();

HAnimSite1286.children[0] = TouchSensor1287;

Shape Shape1288 = createNode("Shape");
Shape1288.USE = "HAnimSiteShape";
HAnimSite1286.children[1] = Shape1288;

HAnimSegment1274.children[4] = HAnimSite1286;

HAnimJoint1273.children = new MFNode();

HAnimJoint1273.children[0] = HAnimSegment1274;

HAnimJoint HAnimJoint1289 = createNode("HAnimJoint");
HAnimJoint1289.name = "r_elbow";
HAnimJoint1289.DEF = "hanim_r_elbow";
HAnimJoint1289.center = new SFVec3f(new float[-0.2014,1.1357,-0.0682]);
HAnimJoint1289.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1289.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1290 = createNode("HAnimSegment");
HAnimSegment1290.name = "r_forearm";
HAnimSegment1290.DEF = "hanim_r_forearm";
//<HAnimJoint name='r_elbow'/> visualization sphere within <HAnimSegment name='r_forearm'/>
TouchSensor TouchSensor1291 = createNode("TouchSensor");
TouchSensor1291.description = "HAnimJoint r_elbow, HAnimSegment r_forearm";
HAnimSegment1290.children = new MFNode();

HAnimSegment1290.children[0] = TouchSensor1291;

Transform Transform1292 = createNode("Transform");
Transform1292.translation = new SFVec3f(new float[-0.2014,1.1357,-0.0682]);
Shape Shape1293 = createNode("Shape");
Shape1293.USE = "HAnimJointShape";
Transform1292.children = new MFNode();

Transform1292.children[0] = Shape1293;

HAnimSegment1290.children[1] = Transform1292;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_elbow'/> to <HAnimJoint name='r_wrist'/>
Shape Shape1294 = createNode("Shape");
LineSet LineSet1295 = createNode("LineSet");
LineSet1295.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1296 = createNode("Coordinate");
Coordinate1296.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.1984,0.8663,-0.0583]);
LineSet1295.coord = Coordinate1296;

ColorRGBA ColorRGBA1297 = createNode("ColorRGBA");
ColorRGBA1297.USE = "HAnimSegmentLineColorRGBA";
LineSet1295.color = ColorRGBA1297;

Shape1294.geometry = LineSet1295;

HAnimSegment1290.children[2] = Shape1294;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radial_styloid'/>
Shape Shape1298 = createNode("Shape");
LineSet LineSet1299 = createNode("LineSet");
LineSet1299.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1300 = createNode("Coordinate");
Coordinate1300.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.1884,0.8676,-0.036]);
LineSet1299.coord = Coordinate1300;

ColorRGBA ColorRGBA1301 = createNode("ColorRGBA");
ColorRGBA1301.USE = "HAnimSiteLineColorRGBA";
LineSet1299.color = ColorRGBA1301;

Shape1298.geometry = LineSet1299;

HAnimSegment1290.children[3] = Shape1298;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_olecranon'/>
Shape Shape1302 = createNode("Shape");
LineSet LineSet1303 = createNode("LineSet");
LineSet1303.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1304 = createNode("Coordinate");
Coordinate1304.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.1907,1.1405,-0.1065]);
LineSet1303.coord = Coordinate1304;

ColorRGBA ColorRGBA1305 = createNode("ColorRGBA");
ColorRGBA1305.USE = "HAnimSiteLineColorRGBA";
LineSet1303.color = ColorRGBA1305;

Shape1302.geometry = LineSet1303;

HAnimSegment1290.children[4] = Shape1302;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_humeral_medial_epicn'/>
Shape Shape1306 = createNode("Shape");
LineSet LineSet1307 = createNode("LineSet");
LineSet1307.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1308 = createNode("Coordinate");
Coordinate1308.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.168,1.1298,-0.1062]);
LineSet1307.coord = Coordinate1308;

ColorRGBA ColorRGBA1309 = createNode("ColorRGBA");
ColorRGBA1309.USE = "HAnimSiteLineColorRGBA";
LineSet1307.color = ColorRGBA1309;

Shape1306.geometry = LineSet1307;

HAnimSegment1290.children[5] = Shape1306;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radiale'/>
Shape Shape1310 = createNode("Shape");
LineSet LineSet1311 = createNode("LineSet");
LineSet1311.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1312 = createNode("Coordinate");
Coordinate1312.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.213,1.1305,-0.1091]);
LineSet1311.coord = Coordinate1312;

ColorRGBA ColorRGBA1313 = createNode("ColorRGBA");
ColorRGBA1313.USE = "HAnimSiteLineColorRGBA";
LineSet1311.color = ColorRGBA1313;

Shape1310.geometry = LineSet1311;

HAnimSegment1290.children[6] = Shape1310;

HAnimSite HAnimSite1314 = createNode("HAnimSite");
HAnimSite1314.name = "r_radial_styloid_pt";
HAnimSite1314.DEF = "hanim_r_radial_styloid_pt";
HAnimSite1314.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
//HAnimSite visualization shape
TouchSensor TouchSensor1315 = createNode("TouchSensor");
TouchSensor1315.description = "HAnimSite r_radial_styloid";
HAnimSite1314.children = new MFNode();

HAnimSite1314.children[0] = TouchSensor1315;

Shape Shape1316 = createNode("Shape");
Shape1316.USE = "HAnimSiteShape";
HAnimSite1314.children[1] = Shape1316;

HAnimSegment1290.children[7] = HAnimSite1314;

HAnimSite HAnimSite1317 = createNode("HAnimSite");
HAnimSite1317.name = "r_olecranon_pt";
HAnimSite1317.DEF = "hanim_r_olecranon_pt";
HAnimSite1317.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
//HAnimSite visualization shape
TouchSensor TouchSensor1318 = createNode("TouchSensor");
TouchSensor1318.description = "HAnimSite r_olecranon";
HAnimSite1317.children = new MFNode();

HAnimSite1317.children[0] = TouchSensor1318;

Shape Shape1319 = createNode("Shape");
Shape1319.USE = "HAnimSiteShape";
HAnimSite1317.children[1] = Shape1319;

HAnimSegment1290.children[8] = HAnimSite1317;

HAnimSite HAnimSite1320 = createNode("HAnimSite");
HAnimSite1320.name = "r_humeral_medial_epicn_pt";
HAnimSite1320.DEF = "hanim_r_humeral_medial_epicn_pt";
HAnimSite1320.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
//HAnimSite visualization shape
TouchSensor TouchSensor1321 = createNode("TouchSensor");
TouchSensor1321.description = "HAnimSite r_humeral_medial_epicn";
HAnimSite1320.children = new MFNode();

HAnimSite1320.children[0] = TouchSensor1321;

Shape Shape1322 = createNode("Shape");
Shape1322.USE = "HAnimSiteShape";
HAnimSite1320.children[1] = Shape1322;

HAnimSegment1290.children[9] = HAnimSite1320;

HAnimSite HAnimSite1323 = createNode("HAnimSite");
HAnimSite1323.name = "r_radiale_pt";
HAnimSite1323.DEF = "hanim_r_radiale_pt";
HAnimSite1323.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
//HAnimSite visualization shape
TouchSensor TouchSensor1324 = createNode("TouchSensor");
TouchSensor1324.description = "HAnimSite r_radiale";
HAnimSite1323.children = new MFNode();

HAnimSite1323.children[0] = TouchSensor1324;

Shape Shape1325 = createNode("Shape");
Shape1325.USE = "HAnimSiteShape";
HAnimSite1323.children[1] = Shape1325;

HAnimSegment1290.children[10] = HAnimSite1323;

HAnimJoint1289.children = new MFNode();

HAnimJoint1289.children[0] = HAnimSegment1290;

HAnimJoint HAnimJoint1326 = createNode("HAnimJoint");
HAnimJoint1326.name = "r_wrist";
HAnimJoint1326.DEF = "hanim_r_wrist";
HAnimJoint1326.center = new SFVec3f(new float[-0.1984,0.8663,-0.0583]);
HAnimJoint1326.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1326.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1327 = createNode("HAnimSegment");
HAnimSegment1327.name = "r_hand";
HAnimSegment1327.DEF = "hanim_r_hand";
//<HAnimJoint name='r_wrist'/> visualization sphere within <HAnimSegment name='r_hand'/>
TouchSensor TouchSensor1328 = createNode("TouchSensor");
TouchSensor1328.description = "HAnimJoint r_wrist, HAnimSegment r_hand";
HAnimSegment1327.children = new MFNode();

HAnimSegment1327.children[0] = TouchSensor1328;

Transform Transform1329 = createNode("Transform");
Transform1329.translation = new SFVec3f(new float[-0.1984,0.8663,-0.0583]);
Shape Shape1330 = createNode("Shape");
Shape1330.USE = "HAnimJointShape";
Transform1329.children = new MFNode();

Transform1329.children[0] = Shape1330;

HAnimSegment1327.children[1] = Transform1329;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_thumb1'/>
Shape Shape1331 = createNode("Shape");
LineSet LineSet1332 = createNode("LineSet");
LineSet1332.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1333 = createNode("Coordinate");
Coordinate1333.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1924,0.8472,-0.0534]);
LineSet1332.coord = Coordinate1333;

ColorRGBA ColorRGBA1334 = createNode("ColorRGBA");
ColorRGBA1334.USE = "HAnimSegmentLineColorRGBA";
LineSet1332.color = ColorRGBA1334;

Shape1331.geometry = LineSet1332;

HAnimSegment1327.children[2] = Shape1331;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_index0'/>
Shape Shape1335 = createNode("Shape");
LineSet LineSet1336 = createNode("LineSet");
LineSet1336.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1337 = createNode("Coordinate");
Coordinate1337.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1983,0.8024,-0.028]);
LineSet1336.coord = Coordinate1337;

ColorRGBA ColorRGBA1338 = createNode("ColorRGBA");
ColorRGBA1338.USE = "HAnimSegmentLineColorRGBA";
LineSet1336.color = ColorRGBA1338;

Shape1335.geometry = LineSet1336;

HAnimSegment1327.children[3] = Shape1335;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_middle0'/>
Shape Shape1339 = createNode("Shape");
LineSet LineSet1340 = createNode("LineSet");
LineSet1340.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1341 = createNode("Coordinate");
Coordinate1341.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1987,0.8029,-0.053]);
LineSet1340.coord = Coordinate1341;

ColorRGBA ColorRGBA1342 = createNode("ColorRGBA");
ColorRGBA1342.USE = "HAnimSegmentLineColorRGBA";
LineSet1340.color = ColorRGBA1342;

Shape1339.geometry = LineSet1340;

HAnimSegment1327.children[4] = Shape1339;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_ring0'/>
Shape Shape1343 = createNode("Shape");
LineSet LineSet1344 = createNode("LineSet");
LineSet1344.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1345 = createNode("Coordinate");
Coordinate1345.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1956,0.8019,-0.0794]);
LineSet1344.coord = Coordinate1345;

ColorRGBA ColorRGBA1346 = createNode("ColorRGBA");
ColorRGBA1346.USE = "HAnimSegmentLineColorRGBA";
LineSet1344.color = ColorRGBA1346;

Shape1343.geometry = LineSet1344;

HAnimSegment1327.children[5] = Shape1343;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_pinky0'/>
Shape Shape1347 = createNode("Shape");
LineSet LineSet1348 = createNode("LineSet");
LineSet1348.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1349 = createNode("Coordinate");
Coordinate1349.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1925,0.8066,-0.1036]);
LineSet1348.coord = Coordinate1349;

ColorRGBA ColorRGBA1350 = createNode("ColorRGBA");
ColorRGBA1350.USE = "HAnimSegmentLineColorRGBA";
LineSet1348.color = ColorRGBA1350;

Shape1347.geometry = LineSet1348;

HAnimSegment1327.children[6] = Shape1347;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_metacarpal_pha2'/>
Shape Shape1351 = createNode("Shape");
LineSet LineSet1352 = createNode("LineSet");
LineSet1352.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1353 = createNode("Coordinate");
Coordinate1353.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1977,0.8169,-0.0177]);
LineSet1352.coord = Coordinate1353;

ColorRGBA ColorRGBA1354 = createNode("ColorRGBA");
ColorRGBA1354.USE = "HAnimSiteLineColorRGBA";
LineSet1352.color = ColorRGBA1354;

Shape1351.geometry = LineSet1352;

HAnimSegment1327.children[7] = Shape1351;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_ulnar_styloid'/>
Shape Shape1355 = createNode("Shape");
LineSet LineSet1356 = createNode("LineSet");
LineSet1356.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1357 = createNode("Coordinate");
Coordinate1357.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.2117,0.8562,-0.0584]);
LineSet1356.coord = Coordinate1357;

ColorRGBA ColorRGBA1358 = createNode("ColorRGBA");
ColorRGBA1358.USE = "HAnimSiteLineColorRGBA";
LineSet1356.color = ColorRGBA1358;

Shape1355.geometry = LineSet1356;

HAnimSegment1327.children[8] = Shape1355;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_metacarpal_pha5'/>
Shape Shape1359 = createNode("Shape");
LineSet LineSet1360 = createNode("LineSet");
LineSet1360.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1361 = createNode("Coordinate");
Coordinate1361.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1929,0.789,-0.1064]);
LineSet1360.coord = Coordinate1361;

ColorRGBA ColorRGBA1362 = createNode("ColorRGBA");
ColorRGBA1362.USE = "HAnimSiteLineColorRGBA";
LineSet1360.color = ColorRGBA1362;

Shape1359.geometry = LineSet1360;

HAnimSegment1327.children[9] = Shape1359;

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_hand_front_view'/>
Shape Shape1363 = createNode("Shape");
LineSet LineSet1364 = createNode("LineSet");
LineSet1364.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1365 = createNode("Coordinate");
Coordinate1365.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.3,0.75,0.45]);
LineSet1364.coord = Coordinate1365;

ColorRGBA ColorRGBA1366 = createNode("ColorRGBA");
ColorRGBA1366.USE = "HAnimSiteViewpointLineColorRGBA";
LineSet1364.color = ColorRGBA1366;

Shape1363.geometry = LineSet1364;

HAnimSegment1327.children[10] = Shape1363;

HAnimSite HAnimSite1367 = createNode("HAnimSite");
HAnimSite1367.name = "r_metacarpal_pha2_pt";
HAnimSite1367.DEF = "hanim_r_metacarpal_pha2_pt";
HAnimSite1367.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
//HAnimSite visualization shape
TouchSensor TouchSensor1368 = createNode("TouchSensor");
TouchSensor1368.description = "HAnimSite r_metacarpal_pha2";
HAnimSite1367.children = new MFNode();

HAnimSite1367.children[0] = TouchSensor1368;

Shape Shape1369 = createNode("Shape");
Shape1369.USE = "HAnimSiteShape";
HAnimSite1367.children[1] = Shape1369;

HAnimSegment1327.children[11] = HAnimSite1367;

HAnimSite HAnimSite1370 = createNode("HAnimSite");
HAnimSite1370.name = "r_ulnar_styloid_pt";
HAnimSite1370.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite1370.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
//HAnimSite visualization shape
TouchSensor TouchSensor1371 = createNode("TouchSensor");
TouchSensor1371.description = "HAnimSite r_ulnar_styloid";
HAnimSite1370.children = new MFNode();

HAnimSite1370.children[0] = TouchSensor1371;

Shape Shape1372 = createNode("Shape");
Shape1372.USE = "HAnimSiteShape";
HAnimSite1370.children[1] = Shape1372;

HAnimSegment1327.children[12] = HAnimSite1370;

HAnimSite HAnimSite1373 = createNode("HAnimSite");
HAnimSite1373.name = "r_metacarpal_pha5_pt";
HAnimSite1373.DEF = "hanim_r_metacarpal_pha5_pt";
HAnimSite1373.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
//HAnimSite visualization shape
TouchSensor TouchSensor1374 = createNode("TouchSensor");
TouchSensor1374.description = "HAnimSite r_metacarpal_pha5";
HAnimSite1373.children = new MFNode();

HAnimSite1373.children[0] = TouchSensor1374;

Shape Shape1375 = createNode("Shape");
Shape1375.USE = "HAnimSiteShape";
HAnimSite1373.children[1] = Shape1375;

HAnimSegment1327.children[13] = HAnimSite1373;

HAnimSite HAnimSite1376 = createNode("HAnimSite");
HAnimSite1376.name = "r_hand_front_view";
HAnimSite1376.DEF = "hanim_r_hand_front_view";
HAnimSite1376.translation = new SFVec3f(new float[-0.3,0.75,0.45]);
Viewpoint Viewpoint1377 = createNode("Viewpoint");
Viewpoint1377.DEF = "hanim_r_hand_front_viewpoint";
Viewpoint1377.centerOfRotation = new SFVec3f(new float[0,0.7,0]);
Viewpoint1377.description = "right hand front";
Viewpoint1377.position = new SFVec3f(new float[0,0,0]);
HAnimSite1376.children = new MFNode();

HAnimSite1376.children[0] = Viewpoint1377;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1378 = createNode("Anchor");
Anchor1378.description = "HAnimSite Viewpoint hanim_r_hand_front_view";
Anchor1378.url = new MFString(new java.lang.String["#hanim_r_hand_front_viewpoint"]);
LOD LOD1379 = createNode("LOD");
LOD1379.forceTransitions = True;
LOD1379.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1380 = createNode("WorldInfo");
WorldInfo1380.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1379.children = new MFNode();

LOD1379.children[0] = WorldInfo1380;

Shape Shape1381 = createNode("Shape");
Shape1381.USE = "HAnimSiteViewpointShape";
LOD1379.children[1] = Shape1381;

Anchor1378.children = new MFNode();

Anchor1378.children[0] = LOD1379;

HAnimSite1376.children[1] = Anchor1378;

HAnimSegment1327.children[14] = HAnimSite1376;

HAnimJoint1326.children = new MFNode();

HAnimJoint1326.children[0] = HAnimSegment1327;

HAnimJoint HAnimJoint1382 = createNode("HAnimJoint");
HAnimJoint1382.name = "r_thumb1";
HAnimJoint1382.DEF = "hanim_r_thumb1";
HAnimJoint1382.center = new SFVec3f(new float[-0.1924,0.8472,-0.0534]);
HAnimJoint1382.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1382.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1383 = createNode("HAnimSegment");
HAnimSegment1383.name = "r_thumb_metacarpal";
HAnimSegment1383.DEF = "hanim_r_thumb_metacarpal";
//<HAnimJoint name='r_thumb1'/> visualization sphere within <HAnimSegment name='r_thumb_metacarpal'/>
TouchSensor TouchSensor1384 = createNode("TouchSensor");
TouchSensor1384.description = "HAnimJoint r_thumb1, HAnimSegment r_thumb_metacarpal";
HAnimSegment1383.children = new MFNode();

HAnimSegment1383.children[0] = TouchSensor1384;

Transform Transform1385 = createNode("Transform");
Transform1385.translation = new SFVec3f(new float[-0.1924,0.8472,-0.0534]);
Shape Shape1386 = createNode("Shape");
Shape1386.USE = "HAnimJointShape";
Transform1385.children = new MFNode();

Transform1385.children[0] = Shape1386;

HAnimSegment1383.children[1] = Transform1385;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_thumb1'/> to <HAnimJoint name='r_thumb2'/>
Shape Shape1387 = createNode("Shape");
LineSet LineSet1388 = createNode("LineSet");
LineSet1388.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1389 = createNode("Coordinate");
Coordinate1389.point = new MFVec3f(new float[-0.1924,0.8472,-0.0534,-0.1951,0.8226,0.0246]);
LineSet1388.coord = Coordinate1389;

ColorRGBA ColorRGBA1390 = createNode("ColorRGBA");
ColorRGBA1390.USE = "HAnimSegmentLineColorRGBA";
LineSet1388.color = ColorRGBA1390;

Shape1387.geometry = LineSet1388;

HAnimSegment1383.children[2] = Shape1387;

HAnimJoint1382.children = new MFNode();

HAnimJoint1382.children[0] = HAnimSegment1383;

HAnimJoint HAnimJoint1391 = createNode("HAnimJoint");
HAnimJoint1391.name = "r_thumb2";
HAnimJoint1391.DEF = "hanim_r_thumb2";
HAnimJoint1391.center = new SFVec3f(new float[-0.1951,0.8226,0.0246]);
HAnimJoint1391.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1391.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1392 = createNode("HAnimSegment");
HAnimSegment1392.name = "r_thumb_proximal";
HAnimSegment1392.DEF = "hanim_r_thumb_proximal";
//<HAnimJoint name='r_thumb2'/> visualization sphere within <HAnimSegment name='r_thumb_proximal'/>
TouchSensor TouchSensor1393 = createNode("TouchSensor");
TouchSensor1393.description = "HAnimJoint r_thumb2, HAnimSegment r_thumb_proximal";
HAnimSegment1392.children = new MFNode();

HAnimSegment1392.children[0] = TouchSensor1393;

Transform Transform1394 = createNode("Transform");
Transform1394.translation = new SFVec3f(new float[-0.1951,0.8226,0.0246]);
Shape Shape1395 = createNode("Shape");
Shape1395.USE = "HAnimJointShape";
Transform1394.children = new MFNode();

Transform1394.children[0] = Shape1395;

HAnimSegment1392.children[1] = Transform1394;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_thumb2'/> to <HAnimJoint name='r_thumb3'/>
Shape Shape1396 = createNode("Shape");
LineSet LineSet1397 = createNode("LineSet");
LineSet1397.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1398 = createNode("Coordinate");
Coordinate1398.point = new MFVec3f(new float[-0.1951,0.8226,0.0246,-0.1955,0.8159,0.0464]);
LineSet1397.coord = Coordinate1398;

ColorRGBA ColorRGBA1399 = createNode("ColorRGBA");
ColorRGBA1399.USE = "HAnimSegmentLineColorRGBA";
LineSet1397.color = ColorRGBA1399;

Shape1396.geometry = LineSet1397;

HAnimSegment1392.children[2] = Shape1396;

HAnimJoint1391.children = new MFNode();

HAnimJoint1391.children[0] = HAnimSegment1392;

HAnimJoint HAnimJoint1400 = createNode("HAnimJoint");
HAnimJoint1400.name = "r_thumb3";
HAnimJoint1400.DEF = "hanim_r_thumb3";
HAnimJoint1400.center = new SFVec3f(new float[-0.1955,0.8159,0.0464]);
HAnimJoint1400.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1400.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1401 = createNode("HAnimSegment");
HAnimSegment1401.name = "r_thumb_distal";
HAnimSegment1401.DEF = "hanim_r_thumb_distal";
//<HAnimJoint name='r_thumb3'/> visualization sphere within <HAnimSegment name='r_thumb_distal'/>
TouchSensor TouchSensor1402 = createNode("TouchSensor");
TouchSensor1402.description = "HAnimJoint r_thumb3, HAnimSegment r_thumb_distal";
HAnimSegment1401.children = new MFNode();

HAnimSegment1401.children[0] = TouchSensor1402;

Transform Transform1403 = createNode("Transform");
Transform1403.translation = new SFVec3f(new float[-0.1955,0.8159,0.0464]);
Shape Shape1404 = createNode("Shape");
Shape1404.USE = "HAnimJointShape";
Transform1403.children = new MFNode();

Transform1403.children[0] = Shape1404;

HAnimSegment1401.children[1] = Transform1403;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_thumb3'/> to <HAnimSite name='r_thumb_distal_tip'/>
Shape Shape1405 = createNode("Shape");
LineSet LineSet1406 = createNode("LineSet");
LineSet1406.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1407 = createNode("Coordinate");
Coordinate1407.point = new MFVec3f(new float[-0.1955,0.8159,0.0464,-0.1869,0.809,0.082]);
LineSet1406.coord = Coordinate1407;

ColorRGBA ColorRGBA1408 = createNode("ColorRGBA");
ColorRGBA1408.USE = "HAnimSiteLineColorRGBA";
LineSet1406.color = ColorRGBA1408;

Shape1405.geometry = LineSet1406;

HAnimSegment1401.children[2] = Shape1405;

HAnimSite HAnimSite1409 = createNode("HAnimSite");
HAnimSite1409.name = "r_thumb_distal_tip";
HAnimSite1409.DEF = "hanim_r_thumb_distal_tip";
HAnimSite1409.translation = new SFVec3f(new float[-0.1869,0.809,0.082]);
//HAnimSite visualization shape
TouchSensor TouchSensor1410 = createNode("TouchSensor");
TouchSensor1410.description = "HAnimSite r_thumb_distal_tip";
HAnimSite1409.children = new MFNode();

HAnimSite1409.children[0] = TouchSensor1410;

Shape Shape1411 = createNode("Shape");
Shape1411.USE = "HAnimSiteShape";
HAnimSite1409.children[1] = Shape1411;

HAnimSegment1401.children[3] = HAnimSite1409;

HAnimJoint1400.children = new MFNode();

HAnimJoint1400.children[0] = HAnimSegment1401;

HAnimJoint1391.children[1] = HAnimJoint1400;

HAnimJoint1382.children[1] = HAnimJoint1391;

HAnimJoint1326.children[1] = HAnimJoint1382;

HAnimJoint HAnimJoint1412 = createNode("HAnimJoint");
HAnimJoint1412.name = "r_index0";
HAnimJoint1412.DEF = "hanim_r_index0";
HAnimJoint1412.center = new SFVec3f(new float[-0.1983,0.8024,-0.028]);
HAnimJoint1412.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1412.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1413 = createNode("HAnimSegment");
HAnimSegment1413.name = "r_index_metacarpal";
HAnimSegment1413.DEF = "hanim_r_index_metacarpal";
//<HAnimJoint name='r_index0'/> visualization sphere within <HAnimSegment name='r_index_metacarpal'/>
TouchSensor TouchSensor1414 = createNode("TouchSensor");
TouchSensor1414.description = "HAnimJoint r_index0, HAnimSegment r_index_metacarpal";
HAnimSegment1413.children = new MFNode();

HAnimSegment1413.children[0] = TouchSensor1414;

Transform Transform1415 = createNode("Transform");
Transform1415.translation = new SFVec3f(new float[-0.1983,0.8024,-0.028]);
Shape Shape1416 = createNode("Shape");
Shape1416.USE = "HAnimJointShape";
Transform1415.children = new MFNode();

Transform1415.children[0] = Shape1416;

HAnimSegment1413.children[1] = Transform1415;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_index0'/> to <HAnimJoint name='r_index1'/>
Shape Shape1417 = createNode("Shape");
LineSet LineSet1418 = createNode("LineSet");
LineSet1418.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1419 = createNode("Coordinate");
Coordinate1419.point = new MFVec3f(new float[-0.1983,0.8024,-0.028,-0.1983,0.7815,-0.028]);
LineSet1418.coord = Coordinate1419;

ColorRGBA ColorRGBA1420 = createNode("ColorRGBA");
ColorRGBA1420.USE = "HAnimSegmentLineColorRGBA";
LineSet1418.color = ColorRGBA1420;

Shape1417.geometry = LineSet1418;

HAnimSegment1413.children[2] = Shape1417;

HAnimJoint1412.children = new MFNode();

HAnimJoint1412.children[0] = HAnimSegment1413;

HAnimJoint HAnimJoint1421 = createNode("HAnimJoint");
HAnimJoint1421.name = "r_index1";
HAnimJoint1421.DEF = "hanim_r_index1";
HAnimJoint1421.center = new SFVec3f(new float[-0.1983,0.7815,-0.028]);
HAnimJoint1421.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1421.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1422 = createNode("HAnimSegment");
HAnimSegment1422.name = "r_index_proximal";
HAnimSegment1422.DEF = "hanim_r_index_proximal";
//<HAnimJoint name='r_index1'/> visualization sphere within <HAnimSegment name='r_index_proximal'/>
TouchSensor TouchSensor1423 = createNode("TouchSensor");
TouchSensor1423.description = "HAnimJoint r_index1, HAnimSegment r_index_proximal";
HAnimSegment1422.children = new MFNode();

HAnimSegment1422.children[0] = TouchSensor1423;

Transform Transform1424 = createNode("Transform");
Transform1424.translation = new SFVec3f(new float[-0.1983,0.7815,-0.028]);
Shape Shape1425 = createNode("Shape");
Shape1425.USE = "HAnimJointShape";
Transform1424.children = new MFNode();

Transform1424.children[0] = Shape1425;

HAnimSegment1422.children[1] = Transform1424;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_index1'/> to <HAnimJoint name='r_index2'/>
Shape Shape1426 = createNode("Shape");
LineSet LineSet1427 = createNode("LineSet");
LineSet1427.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1428 = createNode("Coordinate");
Coordinate1428.point = new MFVec3f(new float[-0.1983,0.7815,-0.028,-0.2017,0.7363,-0.0248]);
LineSet1427.coord = Coordinate1428;

ColorRGBA ColorRGBA1429 = createNode("ColorRGBA");
ColorRGBA1429.USE = "HAnimSegmentLineColorRGBA";
LineSet1427.color = ColorRGBA1429;

Shape1426.geometry = LineSet1427;

HAnimSegment1422.children[2] = Shape1426;

HAnimJoint1421.children = new MFNode();

HAnimJoint1421.children[0] = HAnimSegment1422;

HAnimJoint HAnimJoint1430 = createNode("HAnimJoint");
HAnimJoint1430.name = "r_index2";
HAnimJoint1430.DEF = "hanim_r_index2";
HAnimJoint1430.center = new SFVec3f(new float[-0.2017,0.7363,-0.0248]);
HAnimJoint1430.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1430.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1431 = createNode("HAnimSegment");
HAnimSegment1431.name = "r_index_middle";
HAnimSegment1431.DEF = "hanim_r_index_middle";
//<HAnimJoint name='r_index2'/> visualization sphere within <HAnimSegment name='r_index_middle'/>
TouchSensor TouchSensor1432 = createNode("TouchSensor");
TouchSensor1432.description = "HAnimJoint r_index2, HAnimSegment r_index_middle";
HAnimSegment1431.children = new MFNode();

HAnimSegment1431.children[0] = TouchSensor1432;

Transform Transform1433 = createNode("Transform");
Transform1433.translation = new SFVec3f(new float[-0.2017,0.7363,-0.0248]);
Shape Shape1434 = createNode("Shape");
Shape1434.USE = "HAnimJointShape";
Transform1433.children = new MFNode();

Transform1433.children[0] = Shape1434;

HAnimSegment1431.children[1] = Transform1433;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_index2'/> to <HAnimJoint name='r_index3'/>
Shape Shape1435 = createNode("Shape");
LineSet LineSet1436 = createNode("LineSet");
LineSet1436.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1437 = createNode("Coordinate");
Coordinate1437.point = new MFVec3f(new float[-0.2017,0.7363,-0.0248,-0.2028,0.7139,-0.0236]);
LineSet1436.coord = Coordinate1437;

ColorRGBA ColorRGBA1438 = createNode("ColorRGBA");
ColorRGBA1438.USE = "HAnimSegmentLineColorRGBA";
LineSet1436.color = ColorRGBA1438;

Shape1435.geometry = LineSet1436;

HAnimSegment1431.children[2] = Shape1435;

HAnimJoint1430.children = new MFNode();

HAnimJoint1430.children[0] = HAnimSegment1431;

HAnimJoint HAnimJoint1439 = createNode("HAnimJoint");
HAnimJoint1439.name = "r_index3";
HAnimJoint1439.DEF = "hanim_r_index3";
HAnimJoint1439.center = new SFVec3f(new float[-0.2028,0.7139,-0.0236]);
HAnimJoint1439.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1439.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1440 = createNode("HAnimSegment");
HAnimSegment1440.name = "r_index_distal";
HAnimSegment1440.DEF = "hanim_r_index_distal";
//<HAnimJoint name='r_index3'/> visualization sphere within <HAnimSegment name='r_index_distal'/>
TouchSensor TouchSensor1441 = createNode("TouchSensor");
TouchSensor1441.description = "HAnimJoint r_index3, HAnimSegment r_index_distal";
HAnimSegment1440.children = new MFNode();

HAnimSegment1440.children[0] = TouchSensor1441;

Transform Transform1442 = createNode("Transform");
Transform1442.translation = new SFVec3f(new float[-0.2028,0.7139,-0.0236]);
Shape Shape1443 = createNode("Shape");
Shape1443.USE = "HAnimJointShape";
Transform1442.children = new MFNode();

Transform1442.children[0] = Shape1443;

HAnimSegment1440.children[1] = Transform1442;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_index_distal_tip'/>
Shape Shape1444 = createNode("Shape");
LineSet LineSet1445 = createNode("LineSet");
LineSet1445.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1446 = createNode("Coordinate");
Coordinate1446.point = new MFVec3f(new float[-0.2028,0.7139,-0.0236,-0.198,0.6883,-0.018]);
LineSet1445.coord = Coordinate1446;

ColorRGBA ColorRGBA1447 = createNode("ColorRGBA");
ColorRGBA1447.USE = "HAnimSiteLineColorRGBA";
LineSet1445.color = ColorRGBA1447;

Shape1444.geometry = LineSet1445;

HAnimSegment1440.children[2] = Shape1444;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_dactylion'/>
Shape Shape1448 = createNode("Shape");
LineSet LineSet1449 = createNode("LineSet");
LineSet1449.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1450 = createNode("Coordinate");
Coordinate1450.point = new MFVec3f(new float[-0.2028,0.7139,-0.0236,-0.1941,0.6772,-0.0423]);
LineSet1449.coord = Coordinate1450;

ColorRGBA ColorRGBA1451 = createNode("ColorRGBA");
ColorRGBA1451.USE = "HAnimSiteLineColorRGBA";
LineSet1449.color = ColorRGBA1451;

Shape1448.geometry = LineSet1449;

HAnimSegment1440.children[3] = Shape1448;

HAnimSite HAnimSite1452 = createNode("HAnimSite");
HAnimSite1452.name = "r_index_distal_tip";
HAnimSite1452.DEF = "hanim_r_index_distal_tip";
HAnimSite1452.translation = new SFVec3f(new float[-0.198,0.6883,-0.018]);
//HAnimSite visualization shape
TouchSensor TouchSensor1453 = createNode("TouchSensor");
TouchSensor1453.description = "HAnimSite r_index_distal_tip";
HAnimSite1452.children = new MFNode();

HAnimSite1452.children[0] = TouchSensor1453;

Shape Shape1454 = createNode("Shape");
Shape1454.USE = "HAnimSiteShape";
HAnimSite1452.children[1] = Shape1454;

HAnimSegment1440.children[4] = HAnimSite1452;

HAnimSite HAnimSite1455 = createNode("HAnimSite");
HAnimSite1455.name = "r_dactylion_pt";
HAnimSite1455.DEF = "hanim_r_dactylion_pt";
HAnimSite1455.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
//HAnimSite visualization shape
TouchSensor TouchSensor1456 = createNode("TouchSensor");
TouchSensor1456.description = "HAnimSite r_dactylion";
HAnimSite1455.children = new MFNode();

HAnimSite1455.children[0] = TouchSensor1456;

Shape Shape1457 = createNode("Shape");
Shape1457.USE = "HAnimSiteShape";
HAnimSite1455.children[1] = Shape1457;

HAnimSegment1440.children[5] = HAnimSite1455;

HAnimJoint1439.children = new MFNode();

HAnimJoint1439.children[0] = HAnimSegment1440;

HAnimJoint1430.children[1] = HAnimJoint1439;

HAnimJoint1421.children[1] = HAnimJoint1430;

HAnimJoint1412.children[1] = HAnimJoint1421;

HAnimJoint1326.children[2] = HAnimJoint1412;

HAnimJoint HAnimJoint1458 = createNode("HAnimJoint");
HAnimJoint1458.name = "r_middle0";
HAnimJoint1458.DEF = "hanim_r_middle0";
HAnimJoint1458.center = new SFVec3f(new float[-0.1987,0.8029,-0.053]);
HAnimJoint1458.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1458.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1459 = createNode("HAnimSegment");
HAnimSegment1459.name = "r_middle_metacarpal";
HAnimSegment1459.DEF = "hanim_r_middle_metacarpal";
//<HAnimJoint name='r_middle0'/> visualization sphere within <HAnimSegment name='r_middle_metacarpal'/>
TouchSensor TouchSensor1460 = createNode("TouchSensor");
TouchSensor1460.description = "HAnimJoint r_middle0, HAnimSegment r_middle_metacarpal";
HAnimSegment1459.children = new MFNode();

HAnimSegment1459.children[0] = TouchSensor1460;

Transform Transform1461 = createNode("Transform");
Transform1461.translation = new SFVec3f(new float[-0.1987,0.8029,-0.053]);
Shape Shape1462 = createNode("Shape");
Shape1462.USE = "HAnimJointShape";
Transform1461.children = new MFNode();

Transform1461.children[0] = Shape1462;

HAnimSegment1459.children[1] = Transform1461;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle0'/> to <HAnimJoint name='r_middle1'/>
Shape Shape1463 = createNode("Shape");
LineSet LineSet1464 = createNode("LineSet");
LineSet1464.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1465 = createNode("Coordinate");
Coordinate1465.point = new MFVec3f(new float[-0.1987,0.8029,-0.053,-0.1987,0.7818,-0.053]);
LineSet1464.coord = Coordinate1465;

ColorRGBA ColorRGBA1466 = createNode("ColorRGBA");
ColorRGBA1466.USE = "HAnimSegmentLineColorRGBA";
LineSet1464.color = ColorRGBA1466;

Shape1463.geometry = LineSet1464;

HAnimSegment1459.children[2] = Shape1463;

HAnimJoint1458.children = new MFNode();

HAnimJoint1458.children[0] = HAnimSegment1459;

HAnimJoint HAnimJoint1467 = createNode("HAnimJoint");
HAnimJoint1467.name = "r_middle1";
HAnimJoint1467.DEF = "hanim_r_middle1";
HAnimJoint1467.center = new SFVec3f(new float[-0.1987,0.7818,-0.053]);
HAnimJoint1467.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1467.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1468 = createNode("HAnimSegment");
HAnimSegment1468.name = "r_middle_proximal";
HAnimSegment1468.DEF = "hanim_r_middle_proximal";
//<HAnimJoint name='r_middle1'/> visualization sphere within <HAnimSegment name='r_middle_proximal'/>
TouchSensor TouchSensor1469 = createNode("TouchSensor");
TouchSensor1469.description = "HAnimJoint r_middle1, HAnimSegment r_middle_proximal";
HAnimSegment1468.children = new MFNode();

HAnimSegment1468.children[0] = TouchSensor1469;

Transform Transform1470 = createNode("Transform");
Transform1470.translation = new SFVec3f(new float[-0.1987,0.7818,-0.053]);
Shape Shape1471 = createNode("Shape");
Shape1471.USE = "HAnimJointShape";
Transform1470.children = new MFNode();

Transform1470.children[0] = Shape1471;

HAnimSegment1468.children[1] = Transform1470;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle1'/> to <HAnimJoint name='r_middle2'/>
Shape Shape1472 = createNode("Shape");
LineSet LineSet1473 = createNode("LineSet");
LineSet1473.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1474 = createNode("Coordinate");
Coordinate1474.point = new MFVec3f(new float[-0.1987,0.7818,-0.053,-0.2013,0.7273,-0.0503]);
LineSet1473.coord = Coordinate1474;

ColorRGBA ColorRGBA1475 = createNode("ColorRGBA");
ColorRGBA1475.USE = "HAnimSegmentLineColorRGBA";
LineSet1473.color = ColorRGBA1475;

Shape1472.geometry = LineSet1473;

HAnimSegment1468.children[2] = Shape1472;

HAnimJoint1467.children = new MFNode();

HAnimJoint1467.children[0] = HAnimSegment1468;

HAnimJoint HAnimJoint1476 = createNode("HAnimJoint");
HAnimJoint1476.name = "r_middle2";
HAnimJoint1476.DEF = "hanim_r_middle2";
HAnimJoint1476.center = new SFVec3f(new float[-0.2013,0.7273,-0.0503]);
HAnimJoint1476.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1476.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1477 = createNode("HAnimSegment");
HAnimSegment1477.name = "r_middle_middle";
HAnimSegment1477.DEF = "hanim_r_middle_middle";
//<HAnimJoint name='r_middle2'/> visualization sphere within <HAnimSegment name='r_middle_middle'/>
TouchSensor TouchSensor1478 = createNode("TouchSensor");
TouchSensor1478.description = "HAnimJoint r_middle2, HAnimSegment r_middle_middle";
HAnimSegment1477.children = new MFNode();

HAnimSegment1477.children[0] = TouchSensor1478;

Transform Transform1479 = createNode("Transform");
Transform1479.translation = new SFVec3f(new float[-0.2013,0.7273,-0.0503]);
Shape Shape1480 = createNode("Shape");
Shape1480.USE = "HAnimJointShape";
Transform1479.children = new MFNode();

Transform1479.children[0] = Shape1480;

HAnimSegment1477.children[1] = Transform1479;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle2'/> to <HAnimJoint name='r_middle3'/>
Shape Shape1481 = createNode("Shape");
LineSet LineSet1482 = createNode("LineSet");
LineSet1482.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1483 = createNode("Coordinate");
Coordinate1483.point = new MFVec3f(new float[-0.2013,0.7273,-0.0503,-0.2026,0.7011,-0.0494]);
LineSet1482.coord = Coordinate1483;

ColorRGBA ColorRGBA1484 = createNode("ColorRGBA");
ColorRGBA1484.USE = "HAnimSegmentLineColorRGBA";
LineSet1482.color = ColorRGBA1484;

Shape1481.geometry = LineSet1482;

HAnimSegment1477.children[2] = Shape1481;

HAnimJoint1476.children = new MFNode();

HAnimJoint1476.children[0] = HAnimSegment1477;

HAnimJoint HAnimJoint1485 = createNode("HAnimJoint");
HAnimJoint1485.name = "r_middle3";
HAnimJoint1485.DEF = "hanim_r_middle3";
HAnimJoint1485.center = new SFVec3f(new float[-0.2026,0.7011,-0.0494]);
HAnimJoint1485.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1485.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1486 = createNode("HAnimSegment");
HAnimSegment1486.name = "r_middle_distal";
HAnimSegment1486.DEF = "hanim_r_middle_distal";
//<HAnimJoint name='r_middle3'/> visualization sphere within <HAnimSegment name='r_middle_distal'/>
TouchSensor TouchSensor1487 = createNode("TouchSensor");
TouchSensor1487.description = "HAnimJoint r_middle3, HAnimSegment r_middle_distal";
HAnimSegment1486.children = new MFNode();

HAnimSegment1486.children[0] = TouchSensor1487;

Transform Transform1488 = createNode("Transform");
Transform1488.translation = new SFVec3f(new float[-0.2026,0.7011,-0.0494]);
Shape Shape1489 = createNode("Shape");
Shape1489.USE = "HAnimJointShape";
Transform1488.children = new MFNode();

Transform1488.children[0] = Shape1489;

HAnimSegment1486.children[1] = Transform1488;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_middle3'/> to <HAnimSite name='r_middle_distal_tip'/>
Shape Shape1490 = createNode("Shape");
LineSet LineSet1491 = createNode("LineSet");
LineSet1491.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1492 = createNode("Coordinate");
Coordinate1492.point = new MFVec3f(new float[-0.2026,0.7011,-0.0494,-0.1969,0.6758,-0.0427]);
LineSet1491.coord = Coordinate1492;

ColorRGBA ColorRGBA1493 = createNode("ColorRGBA");
ColorRGBA1493.USE = "HAnimSiteLineColorRGBA";
LineSet1491.color = ColorRGBA1493;

Shape1490.geometry = LineSet1491;

HAnimSegment1486.children[2] = Shape1490;

HAnimSite HAnimSite1494 = createNode("HAnimSite");
HAnimSite1494.name = "r_middle_distal_tip";
HAnimSite1494.DEF = "hanim_r_middle_distal_tip";
HAnimSite1494.translation = new SFVec3f(new float[-0.1969,0.6758,-0.0427]);
//HAnimSite visualization shape
TouchSensor TouchSensor1495 = createNode("TouchSensor");
TouchSensor1495.description = "HAnimSite r_middle_distal_tip";
HAnimSite1494.children = new MFNode();

HAnimSite1494.children[0] = TouchSensor1495;

Shape Shape1496 = createNode("Shape");
Shape1496.USE = "HAnimSiteShape";
HAnimSite1494.children[1] = Shape1496;

HAnimSegment1486.children[3] = HAnimSite1494;

HAnimJoint1485.children = new MFNode();

HAnimJoint1485.children[0] = HAnimSegment1486;

HAnimJoint1476.children[1] = HAnimJoint1485;

HAnimJoint1467.children[1] = HAnimJoint1476;

HAnimJoint1458.children[1] = HAnimJoint1467;

HAnimJoint1326.children[3] = HAnimJoint1458;

HAnimJoint HAnimJoint1497 = createNode("HAnimJoint");
HAnimJoint1497.name = "r_ring0";
HAnimJoint1497.DEF = "hanim_r_ring0";
HAnimJoint1497.center = new SFVec3f(new float[-0.1956,0.8019,-0.0794]);
HAnimJoint1497.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1497.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1498 = createNode("HAnimSegment");
HAnimSegment1498.name = "r_ring_metacarpal";
HAnimSegment1498.DEF = "hanim_r_ring_metacarpal";
//<HAnimJoint name='r_ring0'/> visualization sphere within <HAnimSegment name='r_ring_metacarpal'/>
TouchSensor TouchSensor1499 = createNode("TouchSensor");
TouchSensor1499.description = "HAnimJoint r_ring0, HAnimSegment r_ring_metacarpal";
HAnimSegment1498.children = new MFNode();

HAnimSegment1498.children[0] = TouchSensor1499;

Transform Transform1500 = createNode("Transform");
Transform1500.translation = new SFVec3f(new float[-0.1956,0.8019,-0.0794]);
Shape Shape1501 = createNode("Shape");
Shape1501.USE = "HAnimJointShape";
Transform1500.children = new MFNode();

Transform1500.children[0] = Shape1501;

HAnimSegment1498.children[1] = Transform1500;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring0'/> to <HAnimJoint name='r_ring1'/>
Shape Shape1502 = createNode("Shape");
LineSet LineSet1503 = createNode("LineSet");
LineSet1503.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1504 = createNode("Coordinate");
Coordinate1504.point = new MFVec3f(new float[-0.1956,0.8019,-0.0794,-0.1956,0.7815,-0.0794]);
LineSet1503.coord = Coordinate1504;

ColorRGBA ColorRGBA1505 = createNode("ColorRGBA");
ColorRGBA1505.USE = "HAnimSegmentLineColorRGBA";
LineSet1503.color = ColorRGBA1505;

Shape1502.geometry = LineSet1503;

HAnimSegment1498.children[2] = Shape1502;

HAnimJoint1497.children = new MFNode();

HAnimJoint1497.children[0] = HAnimSegment1498;

HAnimJoint HAnimJoint1506 = createNode("HAnimJoint");
HAnimJoint1506.name = "r_ring1";
HAnimJoint1506.DEF = "hanim_r_ring1";
HAnimJoint1506.center = new SFVec3f(new float[-0.1956,0.7815,-0.0794]);
HAnimJoint1506.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1506.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1507 = createNode("HAnimSegment");
HAnimSegment1507.name = "r_ring_proximal";
HAnimSegment1507.DEF = "hanim_r_ring_proximal";
//<HAnimJoint name='r_ring1'/> visualization sphere within <HAnimSegment name='r_ring_proximal'/>
TouchSensor TouchSensor1508 = createNode("TouchSensor");
TouchSensor1508.description = "HAnimJoint r_ring1, HAnimSegment r_ring_proximal";
HAnimSegment1507.children = new MFNode();

HAnimSegment1507.children[0] = TouchSensor1508;

Transform Transform1509 = createNode("Transform");
Transform1509.translation = new SFVec3f(new float[-0.1956,0.7815,-0.0794]);
Shape Shape1510 = createNode("Shape");
Shape1510.USE = "HAnimJointShape";
Transform1509.children = new MFNode();

Transform1509.children[0] = Shape1510;

HAnimSegment1507.children[1] = Transform1509;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring1'/> to <HAnimJoint name='r_ring2'/>
Shape Shape1511 = createNode("Shape");
LineSet LineSet1512 = createNode("LineSet");
LineSet1512.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1513 = createNode("Coordinate");
Coordinate1513.point = new MFVec3f(new float[-0.1956,0.7815,-0.0794,-0.1973,0.7287,-0.0777]);
LineSet1512.coord = Coordinate1513;

ColorRGBA ColorRGBA1514 = createNode("ColorRGBA");
ColorRGBA1514.USE = "HAnimSegmentLineColorRGBA";
LineSet1512.color = ColorRGBA1514;

Shape1511.geometry = LineSet1512;

HAnimSegment1507.children[2] = Shape1511;

HAnimJoint1506.children = new MFNode();

HAnimJoint1506.children[0] = HAnimSegment1507;

HAnimJoint HAnimJoint1515 = createNode("HAnimJoint");
HAnimJoint1515.name = "r_ring2";
HAnimJoint1515.DEF = "hanim_r_ring2";
HAnimJoint1515.center = new SFVec3f(new float[-0.1973,0.7287,-0.0777]);
HAnimJoint1515.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1515.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1516 = createNode("HAnimSegment");
HAnimSegment1516.name = "r_ring_middle";
HAnimSegment1516.DEF = "hanim_r_ring_middle";
//<HAnimJoint name='r_ring2'/> visualization sphere within <HAnimSegment name='r_ring_middle'/>
TouchSensor TouchSensor1517 = createNode("TouchSensor");
TouchSensor1517.description = "HAnimJoint r_ring2, HAnimSegment r_ring_middle";
HAnimSegment1516.children = new MFNode();

HAnimSegment1516.children[0] = TouchSensor1517;

Transform Transform1518 = createNode("Transform");
Transform1518.translation = new SFVec3f(new float[-0.1973,0.7287,-0.0777]);
Shape Shape1519 = createNode("Shape");
Shape1519.USE = "HAnimJointShape";
Transform1518.children = new MFNode();

Transform1518.children[0] = Shape1519;

HAnimSegment1516.children[1] = Transform1518;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring2'/> to <HAnimJoint name='r_ring3'/>
Shape Shape1520 = createNode("Shape");
LineSet LineSet1521 = createNode("LineSet");
LineSet1521.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1522 = createNode("Coordinate");
Coordinate1522.point = new MFVec3f(new float[-0.1973,0.7287,-0.0777,-0.1983,0.7045,-0.0767]);
LineSet1521.coord = Coordinate1522;

ColorRGBA ColorRGBA1523 = createNode("ColorRGBA");
ColorRGBA1523.USE = "HAnimSegmentLineColorRGBA";
LineSet1521.color = ColorRGBA1523;

Shape1520.geometry = LineSet1521;

HAnimSegment1516.children[2] = Shape1520;

HAnimJoint1515.children = new MFNode();

HAnimJoint1515.children[0] = HAnimSegment1516;

HAnimJoint HAnimJoint1524 = createNode("HAnimJoint");
HAnimJoint1524.name = "r_ring3";
HAnimJoint1524.DEF = "hanim_r_ring3";
HAnimJoint1524.center = new SFVec3f(new float[-0.1983,0.7045,-0.0767]);
HAnimJoint1524.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1524.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1525 = createNode("HAnimSegment");
HAnimSegment1525.name = "r_ring_distal";
HAnimSegment1525.DEF = "hanim_r_ring_distal";
//<HAnimJoint name='r_ring3'/> visualization sphere within <HAnimSegment name='r_ring_distal'/>
TouchSensor TouchSensor1526 = createNode("TouchSensor");
TouchSensor1526.description = "HAnimJoint r_ring3, HAnimSegment r_ring_distal";
HAnimSegment1525.children = new MFNode();

HAnimSegment1525.children[0] = TouchSensor1526;

Transform Transform1527 = createNode("Transform");
Transform1527.translation = new SFVec3f(new float[-0.1983,0.7045,-0.0767]);
Shape Shape1528 = createNode("Shape");
Shape1528.USE = "HAnimJointShape";
Transform1527.children = new MFNode();

Transform1527.children[0] = Shape1528;

HAnimSegment1525.children[1] = Transform1527;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ring3'/> to <HAnimSite name='r_ring_distal_tip'/>
Shape Shape1529 = createNode("Shape");
LineSet LineSet1530 = createNode("LineSet");
LineSet1530.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1531 = createNode("Coordinate");
Coordinate1531.point = new MFVec3f(new float[-0.1983,0.7045,-0.0767,-0.1934,0.6778,-0.0693]);
LineSet1530.coord = Coordinate1531;

ColorRGBA ColorRGBA1532 = createNode("ColorRGBA");
ColorRGBA1532.USE = "HAnimSiteLineColorRGBA";
LineSet1530.color = ColorRGBA1532;

Shape1529.geometry = LineSet1530;

HAnimSegment1525.children[2] = Shape1529;

HAnimSite HAnimSite1533 = createNode("HAnimSite");
HAnimSite1533.name = "r_ring_distal_tip";
HAnimSite1533.DEF = "hanim_r_ring_distal_tip";
HAnimSite1533.translation = new SFVec3f(new float[-0.1934,0.6778,-0.0693]);
//HAnimSite visualization shape
TouchSensor TouchSensor1534 = createNode("TouchSensor");
TouchSensor1534.description = "HAnimSite r_ring_distal_tip";
HAnimSite1533.children = new MFNode();

HAnimSite1533.children[0] = TouchSensor1534;

Shape Shape1535 = createNode("Shape");
Shape1535.USE = "HAnimSiteShape";
HAnimSite1533.children[1] = Shape1535;

HAnimSegment1525.children[3] = HAnimSite1533;

HAnimJoint1524.children = new MFNode();

HAnimJoint1524.children[0] = HAnimSegment1525;

HAnimJoint1515.children[1] = HAnimJoint1524;

HAnimJoint1506.children[1] = HAnimJoint1515;

HAnimJoint1497.children[1] = HAnimJoint1506;

HAnimJoint1326.children[4] = HAnimJoint1497;

HAnimJoint HAnimJoint1536 = createNode("HAnimJoint");
HAnimJoint1536.name = "r_pinky0";
HAnimJoint1536.DEF = "hanim_r_pinky0";
HAnimJoint1536.center = new SFVec3f(new float[-0.1925,0.8066,-0.1036]);
HAnimJoint1536.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1536.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1537 = createNode("HAnimSegment");
HAnimSegment1537.name = "r_pinky_metacarpal";
HAnimSegment1537.DEF = "hanim_r_pinky_metacarpal";
//<HAnimJoint name='r_pinky0'/> visualization sphere within <HAnimSegment name='r_pinky_metacarpal'/>
TouchSensor TouchSensor1538 = createNode("TouchSensor");
TouchSensor1538.description = "HAnimJoint r_pinky0, HAnimSegment r_pinky_metacarpal";
HAnimSegment1537.children = new MFNode();

HAnimSegment1537.children[0] = TouchSensor1538;

Transform Transform1539 = createNode("Transform");
Transform1539.translation = new SFVec3f(new float[-0.1925,0.8066,-0.1036]);
Shape Shape1540 = createNode("Shape");
Shape1540.USE = "HAnimJointShape";
Transform1539.children = new MFNode();

Transform1539.children[0] = Shape1540;

HAnimSegment1537.children[1] = Transform1539;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky0'/> to <HAnimJoint name='r_pinky1'/>
Shape Shape1541 = createNode("Shape");
LineSet LineSet1542 = createNode("LineSet");
LineSet1542.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1543 = createNode("Coordinate");
Coordinate1543.point = new MFVec3f(new float[-0.1925,0.8066,-0.1036,-0.1925,0.7866,-0.1036]);
LineSet1542.coord = Coordinate1543;

ColorRGBA ColorRGBA1544 = createNode("ColorRGBA");
ColorRGBA1544.USE = "HAnimSegmentLineColorRGBA";
LineSet1542.color = ColorRGBA1544;

Shape1541.geometry = LineSet1542;

HAnimSegment1537.children[2] = Shape1541;

HAnimJoint1536.children = new MFNode();

HAnimJoint1536.children[0] = HAnimSegment1537;

HAnimJoint HAnimJoint1545 = createNode("HAnimJoint");
HAnimJoint1545.name = "r_pinky1";
HAnimJoint1545.DEF = "hanim_r_pinky1";
HAnimJoint1545.center = new SFVec3f(new float[-0.1925,0.7866,-0.1036]);
HAnimJoint1545.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1545.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1546 = createNode("HAnimSegment");
HAnimSegment1546.name = "r_pinky_proximal";
HAnimSegment1546.DEF = "hanim_r_pinky_proximal";
//<HAnimJoint name='r_pinky1'/> visualization sphere within <HAnimSegment name='r_pinky_proximal'/>
TouchSensor TouchSensor1547 = createNode("TouchSensor");
TouchSensor1547.description = "HAnimJoint r_pinky1, HAnimSegment r_pinky_proximal";
HAnimSegment1546.children = new MFNode();

HAnimSegment1546.children[0] = TouchSensor1547;

Transform Transform1548 = createNode("Transform");
Transform1548.translation = new SFVec3f(new float[-0.1925,0.7866,-0.1036]);
Shape Shape1549 = createNode("Shape");
Shape1549.USE = "HAnimJointShape";
Transform1548.children = new MFNode();

Transform1548.children[0] = Shape1549;

HAnimSegment1546.children[1] = Transform1548;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky1'/> to <HAnimJoint name='r_pinky2'/>
Shape Shape1550 = createNode("Shape");
LineSet LineSet1551 = createNode("LineSet");
LineSet1551.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1552 = createNode("Coordinate");
Coordinate1552.point = new MFVec3f(new float[-0.1925,0.7866,-0.1036,-0.1938,0.7452,-0.1024]);
LineSet1551.coord = Coordinate1552;

ColorRGBA ColorRGBA1553 = createNode("ColorRGBA");
ColorRGBA1553.USE = "HAnimSegmentLineColorRGBA";
LineSet1551.color = ColorRGBA1553;

Shape1550.geometry = LineSet1551;

HAnimSegment1546.children[2] = Shape1550;

HAnimJoint1545.children = new MFNode();

HAnimJoint1545.children[0] = HAnimSegment1546;

HAnimJoint HAnimJoint1554 = createNode("HAnimJoint");
HAnimJoint1554.name = "r_pinky2";
HAnimJoint1554.DEF = "hanim_r_pinky2";
HAnimJoint1554.center = new SFVec3f(new float[-0.1938,0.7452,-0.1024]);
HAnimJoint1554.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1554.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1555 = createNode("HAnimSegment");
HAnimSegment1555.name = "r_pinky_middle";
HAnimSegment1555.DEF = "hanim_r_pinky_middle";
//<HAnimJoint name='r_pinky2'/> visualization sphere within <HAnimSegment name='r_pinky_middle'/>
TouchSensor TouchSensor1556 = createNode("TouchSensor");
TouchSensor1556.description = "HAnimJoint r_pinky2, HAnimSegment r_pinky_middle";
HAnimSegment1555.children = new MFNode();

HAnimSegment1555.children[0] = TouchSensor1556;

Transform Transform1557 = createNode("Transform");
Transform1557.translation = new SFVec3f(new float[-0.1938,0.7452,-0.1024]);
Shape Shape1558 = createNode("Shape");
Shape1558.USE = "HAnimJointShape";
Transform1557.children = new MFNode();

Transform1557.children[0] = Shape1558;

HAnimSegment1555.children[1] = Transform1557;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky2'/> to <HAnimJoint name='r_pinky3'/>
Shape Shape1559 = createNode("Shape");
LineSet LineSet1560 = createNode("LineSet");
LineSet1560.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1561 = createNode("Coordinate");
Coordinate1561.point = new MFVec3f(new float[-0.1938,0.7452,-0.1024,-0.1948,0.7277,-0.1017]);
LineSet1560.coord = Coordinate1561;

ColorRGBA ColorRGBA1562 = createNode("ColorRGBA");
ColorRGBA1562.USE = "HAnimSegmentLineColorRGBA";
LineSet1560.color = ColorRGBA1562;

Shape1559.geometry = LineSet1560;

HAnimSegment1555.children[2] = Shape1559;

HAnimJoint1554.children = new MFNode();

HAnimJoint1554.children[0] = HAnimSegment1555;

HAnimJoint HAnimJoint1563 = createNode("HAnimJoint");
HAnimJoint1563.name = "r_pinky3";
HAnimJoint1563.DEF = "hanim_r_pinky3";
HAnimJoint1563.center = new SFVec3f(new float[-0.1948,0.7277,-0.1017]);
HAnimJoint1563.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1563.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1564 = createNode("HAnimSegment");
HAnimSegment1564.name = "r_pinky_distal";
HAnimSegment1564.DEF = "hanim_r_pinky_distal";
//<HAnimJoint name='r_pinky3'/> visualization sphere within <HAnimSegment name='r_pinky_distal'/>
TouchSensor TouchSensor1565 = createNode("TouchSensor");
TouchSensor1565.description = "HAnimJoint r_pinky3, HAnimSegment r_pinky_distal";
HAnimSegment1564.children = new MFNode();

HAnimSegment1564.children[0] = TouchSensor1565;

Transform Transform1566 = createNode("Transform");
Transform1566.translation = new SFVec3f(new float[-0.1948,0.7277,-0.1017]);
Shape Shape1567 = createNode("Shape");
Shape1567.USE = "HAnimJointShape";
Transform1566.children = new MFNode();

Transform1566.children[0] = Shape1567;

HAnimSegment1564.children[1] = Transform1566;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_pinky3'/> to <HAnimSite name='r_pinky_distal_tip'/>
Shape Shape1568 = createNode("Shape");
LineSet LineSet1569 = createNode("LineSet");
LineSet1569.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1570 = createNode("Coordinate");
Coordinate1570.point = new MFVec3f(new float[-0.1948,0.7277,-0.1017,-0.1938,0.7035,-0.0949]);
LineSet1569.coord = Coordinate1570;

ColorRGBA ColorRGBA1571 = createNode("ColorRGBA");
ColorRGBA1571.USE = "HAnimSiteLineColorRGBA";
LineSet1569.color = ColorRGBA1571;

Shape1568.geometry = LineSet1569;

HAnimSegment1564.children[2] = Shape1568;

HAnimSite HAnimSite1572 = createNode("HAnimSite");
HAnimSite1572.name = "r_pinky_distal_tip";
HAnimSite1572.DEF = "hanim_r_pinky_distal_tip";
HAnimSite1572.translation = new SFVec3f(new float[-0.1938,0.7035,-0.0949]);
//HAnimSite visualization shape
TouchSensor TouchSensor1573 = createNode("TouchSensor");
TouchSensor1573.description = "HAnimSite r_pinky_distal_tip";
HAnimSite1572.children = new MFNode();

HAnimSite1572.children[0] = TouchSensor1573;

Shape Shape1574 = createNode("Shape");
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
HAnimSite HAnimSite1575 = createNode("HAnimSite");
HAnimSite1575.name = "l_inclined_view";
HAnimSite1575.DEF = "hanim_l_inclined_view";
HAnimSite1575.rotation = new SFRotation(new float[-0.113,0.993,0.0347,0.671]);
HAnimSite1575.translation = new SFVec3f(new float[1.62,1.05,2.06]);
Viewpoint Viewpoint1576 = createNode("Viewpoint");
Viewpoint1576.DEF = "hanim_l_inclined_viewpoint";
Viewpoint1576.description = "left inclined";
Viewpoint1576.position = new SFVec3f(new float[0,0,0]);
HAnimSite1575.children = new MFNode();

HAnimSite1575.children[0] = Viewpoint1576;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1577 = createNode("Anchor");
Anchor1577.description = "HAnimSite Viewpoint hanim_l_inclined_view";
Anchor1577.url = new MFString(new java.lang.String["#hanim_l_inclined_viewpoint"]);
LOD LOD1578 = createNode("LOD");
LOD1578.forceTransitions = True;
LOD1578.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1579 = createNode("WorldInfo");
WorldInfo1579.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1578.children = new MFNode();

LOD1578.children[0] = WorldInfo1579;

Shape Shape1580 = createNode("Shape");
Shape1580.USE = "HAnimSiteViewpointShape";
LOD1578.children[1] = Shape1580;

Anchor1577.children = new MFNode();

Anchor1577.children[0] = LOD1578;

HAnimSite1575.children[1] = Anchor1577;

HAnimHumanoid44.viewpoints[1] = HAnimSite1575;

HAnimSite HAnimSite1581 = createNode("HAnimSite");
HAnimSite1581.name = "r_inclined_view";
HAnimSite1581.DEF = "hanim_r_inclined_view";
HAnimSite1581.rotation = new SFRotation(new float[-0.113,-0.993,0.0347,0.671]);
HAnimSite1581.translation = new SFVec3f(new float[-1.62,1.05,2.06]);
Viewpoint Viewpoint1582 = createNode("Viewpoint");
Viewpoint1582.DEF = "hanim_r_inclined_viewpoint";
Viewpoint1582.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1582.description = "right inclined";
Viewpoint1582.position = new SFVec3f(new float[0,0,0]);
HAnimSite1581.children = new MFNode();

HAnimSite1581.children[0] = Viewpoint1582;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1583 = createNode("Anchor");
Anchor1583.description = "HAnimSite Viewpoint hanim_r_inclined_view";
Anchor1583.url = new MFString(new java.lang.String["#hanim_r_inclined_viewpoint"]);
LOD LOD1584 = createNode("LOD");
LOD1584.forceTransitions = True;
LOD1584.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1585 = createNode("WorldInfo");
WorldInfo1585.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1584.children = new MFNode();

LOD1584.children[0] = WorldInfo1585;

Shape Shape1586 = createNode("Shape");
Shape1586.USE = "HAnimSiteViewpointShape";
LOD1584.children[1] = Shape1586;

Anchor1583.children = new MFNode();

Anchor1583.children[0] = LOD1584;

HAnimSite1581.children[1] = Anchor1583;

HAnimHumanoid44.viewpoints[2] = HAnimSite1581;

HAnimSite HAnimSite1587 = createNode("HAnimSite");
HAnimSite1587.name = "front_view";
HAnimSite1587.DEF = "hanim_front_view";
HAnimSite1587.translation = new SFVec3f(new float[0,0.85,2.58]);
Viewpoint Viewpoint1588 = createNode("Viewpoint");
Viewpoint1588.DEF = "hanim_front_viewpoint";
Viewpoint1588.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1588.description = "front";
Viewpoint1588.position = new SFVec3f(new float[0,0,0]);
HAnimSite1587.children = new MFNode();

HAnimSite1587.children[0] = Viewpoint1588;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1589 = createNode("Anchor");
Anchor1589.description = "HAnimSite Viewpoint hanim_front_view";
Anchor1589.url = new MFString(new java.lang.String["#hanim_front_viewpoint"]);
LOD LOD1590 = createNode("LOD");
LOD1590.forceTransitions = True;
LOD1590.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1591 = createNode("WorldInfo");
WorldInfo1591.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1590.children = new MFNode();

LOD1590.children[0] = WorldInfo1591;

Shape Shape1592 = createNode("Shape");
Shape1592.USE = "HAnimSiteViewpointShape";
LOD1590.children[1] = Shape1592;

Anchor1589.children = new MFNode();

Anchor1589.children[0] = LOD1590;

HAnimSite1587.children[1] = Anchor1589;

HAnimHumanoid44.viewpoints[3] = HAnimSite1587;

HAnimSite HAnimSite1593 = createNode("HAnimSite");
HAnimSite1593.name = "back_view";
HAnimSite1593.DEF = "hanim_back_view";
HAnimSite1593.rotation = new SFRotation(new float[0,1,0,3.14]);
HAnimSite1593.translation = new SFVec3f(new float[0,0.85,-2.58]);
Viewpoint Viewpoint1594 = createNode("Viewpoint");
Viewpoint1594.DEF = "hanim_back_viewpoint";
Viewpoint1594.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1594.description = "back";
Viewpoint1594.position = new SFVec3f(new float[0,0,0]);
HAnimSite1593.children = new MFNode();

HAnimSite1593.children[0] = Viewpoint1594;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1595 = createNode("Anchor");
Anchor1595.description = "HAnimSite Viewpoint hanim_back_view";
Anchor1595.url = new MFString(new java.lang.String["#hanim_back_viewpoint"]);
LOD LOD1596 = createNode("LOD");
LOD1596.forceTransitions = True;
LOD1596.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1597 = createNode("WorldInfo");
WorldInfo1597.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1596.children = new MFNode();

LOD1596.children[0] = WorldInfo1597;

Shape Shape1598 = createNode("Shape");
Shape1598.USE = "HAnimSiteViewpointShape";
LOD1596.children[1] = Shape1598;

Anchor1595.children = new MFNode();

Anchor1595.children[0] = LOD1596;

HAnimSite1593.children[1] = Anchor1595;

HAnimHumanoid44.viewpoints[4] = HAnimSite1593;

HAnimSite HAnimSite1599 = createNode("HAnimSite");
HAnimSite1599.name = "l_side_view";
HAnimSite1599.DEF = "hanim_l_side_view";
HAnimSite1599.rotation = new SFRotation(new float[0,1,0,1.5708]);
HAnimSite1599.translation = new SFVec3f(new float[2.6,0.854,0]);
Viewpoint Viewpoint1600 = createNode("Viewpoint");
Viewpoint1600.DEF = "hanim_l_side_viewpoint";
Viewpoint1600.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1600.description = "left side";
Viewpoint1600.position = new SFVec3f(new float[0,0,0]);
HAnimSite1599.children = new MFNode();

HAnimSite1599.children[0] = Viewpoint1600;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1601 = createNode("Anchor");
Anchor1601.description = "HAnimSite Viewpoint hanim_l_side_view";
Anchor1601.url = new MFString(new java.lang.String["#hanim_l_side_viewpoint"]);
LOD LOD1602 = createNode("LOD");
LOD1602.forceTransitions = True;
LOD1602.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1603 = createNode("WorldInfo");
WorldInfo1603.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1602.children = new MFNode();

LOD1602.children[0] = WorldInfo1603;

Shape Shape1604 = createNode("Shape");
Shape1604.USE = "HAnimSiteViewpointShape";
LOD1602.children[1] = Shape1604;

Anchor1601.children = new MFNode();

Anchor1601.children[0] = LOD1602;

HAnimSite1599.children[1] = Anchor1601;

HAnimHumanoid44.viewpoints[5] = HAnimSite1599;

HAnimSite HAnimSite1605 = createNode("HAnimSite");
HAnimSite1605.name = "Top_view";
HAnimSite1605.DEF = "hanim_Top_view";
HAnimSite1605.rotation = new SFRotation(new float[1,0,0,-1.57]);
HAnimSite1605.translation = new SFVec3f(new float[0,3.5,0]);
Viewpoint Viewpoint1606 = createNode("Viewpoint");
Viewpoint1606.DEF = "hanim_Top_viewpoint";
Viewpoint1606.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1606.description = "Top";
Viewpoint1606.position = new SFVec3f(new float[0,0,0]);
HAnimSite1605.children = new MFNode();

HAnimSite1605.children[0] = Viewpoint1606;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1607 = createNode("Anchor");
Anchor1607.description = "HAnimSite Viewpoint hanim_Top_view";
Anchor1607.url = new MFString(new java.lang.String["#hanim_Top_viewpoint"]);
LOD LOD1608 = createNode("LOD");
LOD1608.forceTransitions = True;
LOD1608.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1609 = createNode("WorldInfo");
WorldInfo1609.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1608.children = new MFNode();

LOD1608.children[0] = WorldInfo1609;

Shape Shape1610 = createNode("Shape");
Shape1610.USE = "HAnimSiteViewpointShape";
LOD1608.children[1] = Shape1610;

Anchor1607.children = new MFNode();

Anchor1607.children[0] = LOD1608;

HAnimSite1605.children[1] = Anchor1607;

HAnimHumanoid44.viewpoints[6] = HAnimSite1605;

HAnimSite HAnimSite1611 = createNode("HAnimSite");
HAnimSite1611.name = "front_close_view";
HAnimSite1611.DEF = "hanim_front_close_view";
HAnimSite1611.translation = new SFVec3f(new float[0,0.854,1.575]);
Viewpoint Viewpoint1612 = createNode("Viewpoint");
Viewpoint1612.DEF = "hanim_front_close_viewpoint";
Viewpoint1612.centerOfRotation = new SFVec3f(new float[0,0,1.575]);
Viewpoint1612.description = "front close";
Viewpoint1612.position = new SFVec3f(new float[0,0,0]);
HAnimSite1611.children = new MFNode();

HAnimSite1611.children[0] = Viewpoint1612;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1613 = createNode("Anchor");
Anchor1613.description = "HAnimSite Viewpoint hanim_front_close_view";
Anchor1613.url = new MFString(new java.lang.String["#hanim_front_close_viewpoint"]);
LOD LOD1614 = createNode("LOD");
LOD1614.forceTransitions = True;
LOD1614.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1615 = createNode("WorldInfo");
WorldInfo1615.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1614.children = new MFNode();

LOD1614.children[0] = WorldInfo1615;

Shape Shape1616 = createNode("Shape");
Shape1616.USE = "HAnimSiteViewpointShape";
LOD1614.children[1] = Shape1616;

Anchor1613.children = new MFNode();

Anchor1613.children[0] = LOD1614;

HAnimSite1611.children[1] = Anchor1613;

HAnimHumanoid44.viewpoints[7] = HAnimSite1611;

HAnimSite HAnimSite1617 = createNode("HAnimSite");
HAnimSite1617.name = "side_close_view";
HAnimSite1617.DEF = "hanim_side_close_view";
HAnimSite1617.rotation = new SFRotation(new float[0,1,0,1.5708]);
HAnimSite1617.translation = new SFVec3f(new float[1.56,0.854,0]);
Viewpoint Viewpoint1618 = createNode("Viewpoint");
Viewpoint1618.DEF = "hanim_side_close_viewpoint";
Viewpoint1618.centerOfRotation = new SFVec3f(new float[1.6,0,0]);
Viewpoint1618.description = "side close";
Viewpoint1618.position = new SFVec3f(new float[0,0,0]);
HAnimSite1617.children = new MFNode();

HAnimSite1617.children[0] = Viewpoint1618;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1619 = createNode("Anchor");
Anchor1619.description = "HAnimSite Viewpoint hanim_side_close_view";
Anchor1619.url = new MFString(new java.lang.String["#hanim_side_close_viewpoint"]);
LOD LOD1620 = createNode("LOD");
LOD1620.forceTransitions = True;
LOD1620.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1621 = createNode("WorldInfo");
WorldInfo1621.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1620.children = new MFNode();

LOD1620.children[0] = WorldInfo1621;

Shape Shape1622 = createNode("Shape");
Shape1622.USE = "HAnimSiteViewpointShape";
LOD1620.children[1] = Shape1622;

Anchor1619.children = new MFNode();

Anchor1619.children[0] = LOD1620;

HAnimSite1617.children[1] = Anchor1619;

HAnimHumanoid44.viewpoints[8] = HAnimSite1617;

HAnimSite HAnimSite1623 = createNode("HAnimSite");
HAnimSite1623.name = "head_front_close_view";
HAnimSite1623.DEF = "hanim_head_front_close_view";
HAnimSite1623.translation = new SFVec3f(new float[0,1.5,1]);
Viewpoint Viewpoint1624 = createNode("Viewpoint");
Viewpoint1624.DEF = "hanim_head_front_close_viewpoint";
Viewpoint1624.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint1624.description = "head front close";
Viewpoint1624.position = new SFVec3f(new float[0,0,0]);
HAnimSite1623.children = new MFNode();

HAnimSite1623.children[0] = Viewpoint1624;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1625 = createNode("Anchor");
Anchor1625.description = "HAnimSite Viewpoint hanim_head_front_close_view";
Anchor1625.url = new MFString(new java.lang.String["#hanim_head_front_close_viewpoint"]);
LOD LOD1626 = createNode("LOD");
LOD1626.forceTransitions = True;
LOD1626.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1627 = createNode("WorldInfo");
WorldInfo1627.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1626.children = new MFNode();

LOD1626.children[0] = WorldInfo1627;

Shape Shape1628 = createNode("Shape");
Shape1628.USE = "HAnimSiteViewpointShape";
LOD1626.children[1] = Shape1628;

Anchor1625.children = new MFNode();

Anchor1625.children[0] = LOD1626;

HAnimSite1623.children[1] = Anchor1625;

HAnimHumanoid44.viewpoints[9] = HAnimSite1623;

HAnimSite HAnimSite1629 = createNode("HAnimSite");
HAnimSite1629.name = "chest_front_close_view";
HAnimSite1629.DEF = "hanim_chest_front_close_view";
HAnimSite1629.translation = new SFVec3f(new float[0,1.2,1]);
Viewpoint Viewpoint1630 = createNode("Viewpoint");
Viewpoint1630.DEF = "hanim_chest_front_close_viewpoint";
Viewpoint1630.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint1630.description = "chest front close";
Viewpoint1630.position = new SFVec3f(new float[0,0,0]);
HAnimSite1629.children = new MFNode();

HAnimSite1629.children[0] = Viewpoint1630;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1631 = createNode("Anchor");
Anchor1631.description = "HAnimSite Viewpoint hanim_chest_front_close_view";
Anchor1631.url = new MFString(new java.lang.String["#hanim_chest_front_close_viewpoint"]);
LOD LOD1632 = createNode("LOD");
LOD1632.forceTransitions = True;
LOD1632.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1633 = createNode("WorldInfo");
WorldInfo1633.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1632.children = new MFNode();

LOD1632.children[0] = WorldInfo1633;

Shape Shape1634 = createNode("Shape");
Shape1634.USE = "HAnimSiteViewpointShape";
LOD1632.children[1] = Shape1634;

Anchor1631.children = new MFNode();

Anchor1631.children[0] = LOD1632;

HAnimSite1629.children[1] = Anchor1631;

HAnimHumanoid44.viewpoints[10] = HAnimSite1629;

HAnimSite HAnimSite1635 = createNode("HAnimSite");
HAnimSite1635.name = "pelvis_front_close_view";
HAnimSite1635.DEF = "hanim_pelvis_front_close_view";
HAnimSite1635.translation = new SFVec3f(new float[0,0.8,1]);
Viewpoint Viewpoint1636 = createNode("Viewpoint");
Viewpoint1636.DEF = "hanim_pelvis_front_close_viewpoint";
Viewpoint1636.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint1636.description = "pelvis front close";
Viewpoint1636.position = new SFVec3f(new float[0,0,0]);
HAnimSite1635.children = new MFNode();

HAnimSite1635.children[0] = Viewpoint1636;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1637 = createNode("Anchor");
Anchor1637.description = "HAnimSite Viewpoint hanim_pelvis_front_close_view";
Anchor1637.url = new MFString(new java.lang.String["#hanim_pelvis_front_close_viewpoint"]);
LOD LOD1638 = createNode("LOD");
LOD1638.forceTransitions = True;
LOD1638.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1639 = createNode("WorldInfo");
WorldInfo1639.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1638.children = new MFNode();

LOD1638.children[0] = WorldInfo1639;

Shape Shape1640 = createNode("Shape");
Shape1640.USE = "HAnimSiteViewpointShape";
LOD1638.children[1] = Shape1640;

Anchor1637.children = new MFNode();

Anchor1637.children[0] = LOD1638;

HAnimSite1635.children[1] = Anchor1637;

HAnimHumanoid44.viewpoints[11] = HAnimSite1635;

HAnimSite HAnimSite1641 = createNode("HAnimSite");
HAnimSite1641.name = "knees_front_close_view";
HAnimSite1641.DEF = "hanim_knees_front_close_view";
HAnimSite1641.translation = new SFVec3f(new float[0,0.4,1]);
Viewpoint Viewpoint1642 = createNode("Viewpoint");
Viewpoint1642.DEF = "hanim_knees_front_close_viewpoint";
Viewpoint1642.centerOfRotation = new SFVec3f(new float[0,0.4,0]);
Viewpoint1642.description = "knees front close";
Viewpoint1642.position = new SFVec3f(new float[0,0,0]);
HAnimSite1641.children = new MFNode();

HAnimSite1641.children[0] = Viewpoint1642;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1643 = createNode("Anchor");
Anchor1643.description = "HAnimSite Viewpoint hanim_knees_front_close_view";
Anchor1643.url = new MFString(new java.lang.String["#hanim_knees_front_close_viewpoint"]);
LOD LOD1644 = createNode("LOD");
LOD1644.forceTransitions = True;
LOD1644.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1645 = createNode("WorldInfo");
WorldInfo1645.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1644.children = new MFNode();

LOD1644.children[0] = WorldInfo1645;

Shape Shape1646 = createNode("Shape");
Shape1646.USE = "HAnimSiteViewpointShape";
LOD1644.children[1] = Shape1646;

Anchor1643.children = new MFNode();

Anchor1643.children[0] = LOD1644;

HAnimSite1641.children[1] = Anchor1643;

HAnimHumanoid44.viewpoints[12] = HAnimSite1641;

HAnimSite HAnimSite1647 = createNode("HAnimSite");
HAnimSite1647.name = "feet_front_close_view";
HAnimSite1647.DEF = "hanim_feet_front_close_view";
HAnimSite1647.translation = new SFVec3f(new float[0,0,1]);
Viewpoint Viewpoint1648 = createNode("Viewpoint");
Viewpoint1648.DEF = "hanim_feet_front_close_viewpoint";
Viewpoint1648.description = "feet front close";
Viewpoint1648.position = new SFVec3f(new float[0,0,0]);
HAnimSite1647.children = new MFNode();

HAnimSite1647.children[0] = Viewpoint1648;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1649 = createNode("Anchor");
Anchor1649.description = "HAnimSite Viewpoint hanim_feet_front_close_view";
Anchor1649.url = new MFString(new java.lang.String["#hanim_feet_front_close_viewpoint"]);
LOD LOD1650 = createNode("LOD");
LOD1650.forceTransitions = True;
LOD1650.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1651 = createNode("WorldInfo");
WorldInfo1651.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1650.children = new MFNode();

LOD1650.children[0] = WorldInfo1651;

Shape Shape1652 = createNode("Shape");
Shape1652.USE = "HAnimSiteViewpointShape";
LOD1650.children[1] = Shape1652;

Anchor1649.children = new MFNode();

Anchor1649.children[0] = LOD1650;

HAnimSite1647.children[1] = Anchor1649;

HAnimHumanoid44.viewpoints[13] = HAnimSite1647;

HAnimSite HAnimSite1653 = createNode("HAnimSite");
HAnimSite1653.name = "eye_level_view";
HAnimSite1653.DEF = "hanim_eye_level_view";
HAnimSite1653.translation = new SFVec3f(new float[0,1.6332,0.0502]);
Viewpoint Viewpoint1654 = createNode("Viewpoint");
Viewpoint1654.DEF = "hanim_eye_level_viewpoint";
Viewpoint1654.description = "eye level looking forward";
Viewpoint1654.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint1654.position = new SFVec3f(new float[0,0,0]);
HAnimSite1653.children = new MFNode();

HAnimSite1653.children[0] = Viewpoint1654;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1655 = createNode("Anchor");
Anchor1655.description = "HAnimSite Viewpoint hanim_eye_level_view";
Anchor1655.url = new MFString(new java.lang.String["#hanim_eye_level_viewpoint"]);
LOD LOD1656 = createNode("LOD");
LOD1656.forceTransitions = True;
LOD1656.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1657 = createNode("WorldInfo");
WorldInfo1657.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1656.children = new MFNode();

LOD1656.children[0] = WorldInfo1657;

Shape Shape1658 = createNode("Shape");
Shape1658.USE = "HAnimSiteViewpointShape";
LOD1656.children[1] = Shape1658;

Anchor1655.children = new MFNode();

Anchor1655.children[0] = LOD1656;

HAnimSite1653.children[1] = Anchor1655;

HAnimHumanoid44.viewpoints[14] = HAnimSite1653;

HAnimSite HAnimSite1659 = createNode("HAnimSite");
HAnimSite1659.USE = "hanim_l_eyeball_site_view";
HAnimHumanoid44.viewpoints[15] = HAnimSite1659;

HAnimSite HAnimSite1660 = createNode("HAnimSite");
HAnimSite1660.USE = "hanim_r_eyeball_site_view";
HAnimHumanoid44.viewpoints[16] = HAnimSite1660;

HAnimSite HAnimSite1661 = createNode("HAnimSite");
HAnimSite1661.USE = "hanim_l_hand_front_view";
HAnimHumanoid44.viewpoints[17] = HAnimSite1661;

HAnimSite HAnimSite1662 = createNode("HAnimSite");
HAnimSite1662.USE = "hanim_r_hand_front_view";
HAnimHumanoid44.viewpoints[18] = HAnimSite1662;

HAnimJoint HAnimJoint1663 = createNode("HAnimJoint");
HAnimJoint1663.USE = "hanim_humanoid_root";
HAnimHumanoid44.joints[19] = HAnimJoint1663;

HAnimJoint HAnimJoint1664 = createNode("HAnimJoint");
HAnimJoint1664.USE = "hanim_sacroiliac";
HAnimHumanoid44.joints[20] = HAnimJoint1664;

HAnimJoint HAnimJoint1665 = createNode("HAnimJoint");
HAnimJoint1665.USE = "hanim_vl5";
HAnimHumanoid44.joints[21] = HAnimJoint1665;

HAnimJoint HAnimJoint1666 = createNode("HAnimJoint");
HAnimJoint1666.USE = "hanim_vl4";
HAnimHumanoid44.joints[22] = HAnimJoint1666;

HAnimJoint HAnimJoint1667 = createNode("HAnimJoint");
HAnimJoint1667.USE = "hanim_vl3";
HAnimHumanoid44.joints[23] = HAnimJoint1667;

HAnimJoint HAnimJoint1668 = createNode("HAnimJoint");
HAnimJoint1668.USE = "hanim_vl2";
HAnimHumanoid44.joints[24] = HAnimJoint1668;

HAnimJoint HAnimJoint1669 = createNode("HAnimJoint");
HAnimJoint1669.USE = "hanim_vl1";
HAnimHumanoid44.joints[25] = HAnimJoint1669;

HAnimJoint HAnimJoint1670 = createNode("HAnimJoint");
HAnimJoint1670.USE = "hanim_vt12";
HAnimHumanoid44.joints[26] = HAnimJoint1670;

HAnimJoint HAnimJoint1671 = createNode("HAnimJoint");
HAnimJoint1671.USE = "hanim_vt11";
HAnimHumanoid44.joints[27] = HAnimJoint1671;

HAnimJoint HAnimJoint1672 = createNode("HAnimJoint");
HAnimJoint1672.USE = "hanim_vt10";
HAnimHumanoid44.joints[28] = HAnimJoint1672;

HAnimJoint HAnimJoint1673 = createNode("HAnimJoint");
HAnimJoint1673.USE = "hanim_vt9";
HAnimHumanoid44.joints[29] = HAnimJoint1673;

HAnimJoint HAnimJoint1674 = createNode("HAnimJoint");
HAnimJoint1674.USE = "hanim_vt8";
HAnimHumanoid44.joints[30] = HAnimJoint1674;

HAnimJoint HAnimJoint1675 = createNode("HAnimJoint");
HAnimJoint1675.USE = "hanim_vt7";
HAnimHumanoid44.joints[31] = HAnimJoint1675;

HAnimJoint HAnimJoint1676 = createNode("HAnimJoint");
HAnimJoint1676.USE = "hanim_vt6";
HAnimHumanoid44.joints[32] = HAnimJoint1676;

HAnimJoint HAnimJoint1677 = createNode("HAnimJoint");
HAnimJoint1677.USE = "hanim_vt5";
HAnimHumanoid44.joints[33] = HAnimJoint1677;

HAnimJoint HAnimJoint1678 = createNode("HAnimJoint");
HAnimJoint1678.USE = "hanim_vt4";
HAnimHumanoid44.joints[34] = HAnimJoint1678;

HAnimJoint HAnimJoint1679 = createNode("HAnimJoint");
HAnimJoint1679.USE = "hanim_vt3";
HAnimHumanoid44.joints[35] = HAnimJoint1679;

HAnimJoint HAnimJoint1680 = createNode("HAnimJoint");
HAnimJoint1680.USE = "hanim_vt2";
HAnimHumanoid44.joints[36] = HAnimJoint1680;

HAnimJoint HAnimJoint1681 = createNode("HAnimJoint");
HAnimJoint1681.USE = "hanim_vt1";
HAnimHumanoid44.joints[37] = HAnimJoint1681;

HAnimJoint HAnimJoint1682 = createNode("HAnimJoint");
HAnimJoint1682.USE = "hanim_vc7";
HAnimHumanoid44.joints[38] = HAnimJoint1682;

HAnimJoint HAnimJoint1683 = createNode("HAnimJoint");
HAnimJoint1683.USE = "hanim_vc6";
HAnimHumanoid44.joints[39] = HAnimJoint1683;

HAnimJoint HAnimJoint1684 = createNode("HAnimJoint");
HAnimJoint1684.USE = "hanim_vc5";
HAnimHumanoid44.joints[40] = HAnimJoint1684;

HAnimJoint HAnimJoint1685 = createNode("HAnimJoint");
HAnimJoint1685.USE = "hanim_vc4";
HAnimHumanoid44.joints[41] = HAnimJoint1685;

HAnimJoint HAnimJoint1686 = createNode("HAnimJoint");
HAnimJoint1686.USE = "hanim_vc3";
HAnimHumanoid44.joints[42] = HAnimJoint1686;

HAnimJoint HAnimJoint1687 = createNode("HAnimJoint");
HAnimJoint1687.USE = "hanim_vc2";
HAnimHumanoid44.joints[43] = HAnimJoint1687;

HAnimJoint HAnimJoint1688 = createNode("HAnimJoint");
HAnimJoint1688.USE = "hanim_vc1";
HAnimHumanoid44.joints[44] = HAnimJoint1688;

HAnimJoint HAnimJoint1689 = createNode("HAnimJoint");
HAnimJoint1689.USE = "hanim_skullbase";
HAnimHumanoid44.joints[45] = HAnimJoint1689;

HAnimJoint HAnimJoint1690 = createNode("HAnimJoint");
HAnimJoint1690.USE = "hanim_temporomandibular";
HAnimHumanoid44.joints[46] = HAnimJoint1690;

HAnimJoint HAnimJoint1691 = createNode("HAnimJoint");
HAnimJoint1691.USE = "hanim_l_acromioclavicular";
HAnimHumanoid44.joints[47] = HAnimJoint1691;

HAnimJoint HAnimJoint1692 = createNode("HAnimJoint");
HAnimJoint1692.USE = "hanim_r_acromioclavicular";
HAnimHumanoid44.joints[48] = HAnimJoint1692;

HAnimJoint HAnimJoint1693 = createNode("HAnimJoint");
HAnimJoint1693.USE = "hanim_l_ankle";
HAnimHumanoid44.joints[49] = HAnimJoint1693;

HAnimJoint HAnimJoint1694 = createNode("HAnimJoint");
HAnimJoint1694.USE = "hanim_r_ankle";
HAnimHumanoid44.joints[50] = HAnimJoint1694;

HAnimJoint HAnimJoint1695 = createNode("HAnimJoint");
HAnimJoint1695.USE = "hanim_l_elbow";
HAnimHumanoid44.joints[51] = HAnimJoint1695;

HAnimJoint HAnimJoint1696 = createNode("HAnimJoint");
HAnimJoint1696.USE = "hanim_r_elbow";
HAnimHumanoid44.joints[52] = HAnimJoint1696;

HAnimJoint HAnimJoint1697 = createNode("HAnimJoint");
HAnimJoint1697.USE = "hanim_l_eyeball_joint";
HAnimHumanoid44.joints[53] = HAnimJoint1697;

HAnimJoint HAnimJoint1698 = createNode("HAnimJoint");
HAnimJoint1698.USE = "hanim_r_eyeball_joint";
HAnimHumanoid44.joints[54] = HAnimJoint1698;

HAnimJoint HAnimJoint1699 = createNode("HAnimJoint");
HAnimJoint1699.USE = "hanim_l_eyebrow_joint";
HAnimHumanoid44.joints[55] = HAnimJoint1699;

HAnimJoint HAnimJoint1700 = createNode("HAnimJoint");
HAnimJoint1700.USE = "hanim_r_eyebrow_joint";
HAnimHumanoid44.joints[56] = HAnimJoint1700;

HAnimJoint HAnimJoint1701 = createNode("HAnimJoint");
HAnimJoint1701.USE = "hanim_l_eyelid_joint";
HAnimHumanoid44.joints[57] = HAnimJoint1701;

HAnimJoint HAnimJoint1702 = createNode("HAnimJoint");
HAnimJoint1702.USE = "hanim_r_eyelid_joint";
HAnimHumanoid44.joints[58] = HAnimJoint1702;

HAnimJoint HAnimJoint1703 = createNode("HAnimJoint");
HAnimJoint1703.USE = "hanim_l_hip";
HAnimHumanoid44.joints[59] = HAnimJoint1703;

HAnimJoint HAnimJoint1704 = createNode("HAnimJoint");
HAnimJoint1704.USE = "hanim_r_hip";
HAnimHumanoid44.joints[60] = HAnimJoint1704;

HAnimJoint HAnimJoint1705 = createNode("HAnimJoint");
HAnimJoint1705.USE = "hanim_l_index0";
HAnimHumanoid44.joints[61] = HAnimJoint1705;

HAnimJoint HAnimJoint1706 = createNode("HAnimJoint");
HAnimJoint1706.USE = "hanim_r_index0";
HAnimHumanoid44.joints[62] = HAnimJoint1706;

HAnimJoint HAnimJoint1707 = createNode("HAnimJoint");
HAnimJoint1707.USE = "hanim_l_index1";
HAnimHumanoid44.joints[63] = HAnimJoint1707;

HAnimJoint HAnimJoint1708 = createNode("HAnimJoint");
HAnimJoint1708.USE = "hanim_r_index1";
HAnimHumanoid44.joints[64] = HAnimJoint1708;

HAnimJoint HAnimJoint1709 = createNode("HAnimJoint");
HAnimJoint1709.USE = "hanim_l_index2";
HAnimHumanoid44.joints[65] = HAnimJoint1709;

HAnimJoint HAnimJoint1710 = createNode("HAnimJoint");
HAnimJoint1710.USE = "hanim_r_index2";
HAnimHumanoid44.joints[66] = HAnimJoint1710;

HAnimJoint HAnimJoint1711 = createNode("HAnimJoint");
HAnimJoint1711.USE = "hanim_l_index3";
HAnimHumanoid44.joints[67] = HAnimJoint1711;

HAnimJoint HAnimJoint1712 = createNode("HAnimJoint");
HAnimJoint1712.USE = "hanim_r_index3";
HAnimHumanoid44.joints[68] = HAnimJoint1712;

HAnimJoint HAnimJoint1713 = createNode("HAnimJoint");
HAnimJoint1713.USE = "hanim_l_knee";
HAnimHumanoid44.joints[69] = HAnimJoint1713;

HAnimJoint HAnimJoint1714 = createNode("HAnimJoint");
HAnimJoint1714.USE = "hanim_r_knee";
HAnimHumanoid44.joints[70] = HAnimJoint1714;

HAnimJoint HAnimJoint1715 = createNode("HAnimJoint");
HAnimJoint1715.USE = "hanim_l_metatarsal";
HAnimHumanoid44.joints[71] = HAnimJoint1715;

HAnimJoint HAnimJoint1716 = createNode("HAnimJoint");
HAnimJoint1716.USE = "hanim_r_metatarsal";
HAnimHumanoid44.joints[72] = HAnimJoint1716;

HAnimJoint HAnimJoint1717 = createNode("HAnimJoint");
HAnimJoint1717.USE = "hanim_l_middle0";
HAnimHumanoid44.joints[73] = HAnimJoint1717;

HAnimJoint HAnimJoint1718 = createNode("HAnimJoint");
HAnimJoint1718.USE = "hanim_r_middle0";
HAnimHumanoid44.joints[74] = HAnimJoint1718;

HAnimJoint HAnimJoint1719 = createNode("HAnimJoint");
HAnimJoint1719.USE = "hanim_l_middle1";
HAnimHumanoid44.joints[75] = HAnimJoint1719;

HAnimJoint HAnimJoint1720 = createNode("HAnimJoint");
HAnimJoint1720.USE = "hanim_r_middle1";
HAnimHumanoid44.joints[76] = HAnimJoint1720;

HAnimJoint HAnimJoint1721 = createNode("HAnimJoint");
HAnimJoint1721.USE = "hanim_l_middle2";
HAnimHumanoid44.joints[77] = HAnimJoint1721;

HAnimJoint HAnimJoint1722 = createNode("HAnimJoint");
HAnimJoint1722.USE = "hanim_r_middle2";
HAnimHumanoid44.joints[78] = HAnimJoint1722;

HAnimJoint HAnimJoint1723 = createNode("HAnimJoint");
HAnimJoint1723.USE = "hanim_l_middle3";
HAnimHumanoid44.joints[79] = HAnimJoint1723;

HAnimJoint HAnimJoint1724 = createNode("HAnimJoint");
HAnimJoint1724.USE = "hanim_r_middle3";
HAnimHumanoid44.joints[80] = HAnimJoint1724;

HAnimJoint HAnimJoint1725 = createNode("HAnimJoint");
HAnimJoint1725.USE = "hanim_l_midtarsal";
HAnimHumanoid44.joints[81] = HAnimJoint1725;

HAnimJoint HAnimJoint1726 = createNode("HAnimJoint");
HAnimJoint1726.USE = "hanim_r_midtarsal";
HAnimHumanoid44.joints[82] = HAnimJoint1726;

HAnimJoint HAnimJoint1727 = createNode("HAnimJoint");
HAnimJoint1727.USE = "hanim_l_pinky0";
HAnimHumanoid44.joints[83] = HAnimJoint1727;

HAnimJoint HAnimJoint1728 = createNode("HAnimJoint");
HAnimJoint1728.USE = "hanim_r_pinky0";
HAnimHumanoid44.joints[84] = HAnimJoint1728;

HAnimJoint HAnimJoint1729 = createNode("HAnimJoint");
HAnimJoint1729.USE = "hanim_l_pinky1";
HAnimHumanoid44.joints[85] = HAnimJoint1729;

HAnimJoint HAnimJoint1730 = createNode("HAnimJoint");
HAnimJoint1730.USE = "hanim_r_pinky1";
HAnimHumanoid44.joints[86] = HAnimJoint1730;

HAnimJoint HAnimJoint1731 = createNode("HAnimJoint");
HAnimJoint1731.USE = "hanim_l_pinky2";
HAnimHumanoid44.joints[87] = HAnimJoint1731;

HAnimJoint HAnimJoint1732 = createNode("HAnimJoint");
HAnimJoint1732.USE = "hanim_r_pinky2";
HAnimHumanoid44.joints[88] = HAnimJoint1732;

HAnimJoint HAnimJoint1733 = createNode("HAnimJoint");
HAnimJoint1733.USE = "hanim_l_pinky3";
HAnimHumanoid44.joints[89] = HAnimJoint1733;

HAnimJoint HAnimJoint1734 = createNode("HAnimJoint");
HAnimJoint1734.USE = "hanim_r_pinky3";
HAnimHumanoid44.joints[90] = HAnimJoint1734;

HAnimJoint HAnimJoint1735 = createNode("HAnimJoint");
HAnimJoint1735.USE = "hanim_l_ring0";
HAnimHumanoid44.joints[91] = HAnimJoint1735;

HAnimJoint HAnimJoint1736 = createNode("HAnimJoint");
HAnimJoint1736.USE = "hanim_r_ring0";
HAnimHumanoid44.joints[92] = HAnimJoint1736;

HAnimJoint HAnimJoint1737 = createNode("HAnimJoint");
HAnimJoint1737.USE = "hanim_l_ring1";
HAnimHumanoid44.joints[93] = HAnimJoint1737;

HAnimJoint HAnimJoint1738 = createNode("HAnimJoint");
HAnimJoint1738.USE = "hanim_r_ring1";
HAnimHumanoid44.joints[94] = HAnimJoint1738;

HAnimJoint HAnimJoint1739 = createNode("HAnimJoint");
HAnimJoint1739.USE = "hanim_l_ring2";
HAnimHumanoid44.joints[95] = HAnimJoint1739;

HAnimJoint HAnimJoint1740 = createNode("HAnimJoint");
HAnimJoint1740.USE = "hanim_r_ring2";
HAnimHumanoid44.joints[96] = HAnimJoint1740;

HAnimJoint HAnimJoint1741 = createNode("HAnimJoint");
HAnimJoint1741.USE = "hanim_l_ring3";
HAnimHumanoid44.joints[97] = HAnimJoint1741;

HAnimJoint HAnimJoint1742 = createNode("HAnimJoint");
HAnimJoint1742.USE = "hanim_r_ring3";
HAnimHumanoid44.joints[98] = HAnimJoint1742;

HAnimJoint HAnimJoint1743 = createNode("HAnimJoint");
HAnimJoint1743.USE = "hanim_l_shoulder";
HAnimHumanoid44.joints[99] = HAnimJoint1743;

HAnimJoint HAnimJoint1744 = createNode("HAnimJoint");
HAnimJoint1744.USE = "hanim_r_shoulder";
HAnimHumanoid44.joints[100] = HAnimJoint1744;

HAnimJoint HAnimJoint1745 = createNode("HAnimJoint");
HAnimJoint1745.USE = "hanim_l_sternoclavicular";
HAnimHumanoid44.joints[101] = HAnimJoint1745;

HAnimJoint HAnimJoint1746 = createNode("HAnimJoint");
HAnimJoint1746.USE = "hanim_r_sternoclavicular";
HAnimHumanoid44.joints[102] = HAnimJoint1746;

HAnimJoint HAnimJoint1747 = createNode("HAnimJoint");
HAnimJoint1747.USE = "hanim_l_subtalar";
HAnimHumanoid44.joints[103] = HAnimJoint1747;

HAnimJoint HAnimJoint1748 = createNode("HAnimJoint");
HAnimJoint1748.USE = "hanim_r_subtalar";
HAnimHumanoid44.joints[104] = HAnimJoint1748;

HAnimJoint HAnimJoint1749 = createNode("HAnimJoint");
HAnimJoint1749.USE = "hanim_l_thumb1";
HAnimHumanoid44.joints[105] = HAnimJoint1749;

HAnimJoint HAnimJoint1750 = createNode("HAnimJoint");
HAnimJoint1750.USE = "hanim_r_thumb1";
HAnimHumanoid44.joints[106] = HAnimJoint1750;

HAnimJoint HAnimJoint1751 = createNode("HAnimJoint");
HAnimJoint1751.USE = "hanim_l_thumb2";
HAnimHumanoid44.joints[107] = HAnimJoint1751;

HAnimJoint HAnimJoint1752 = createNode("HAnimJoint");
HAnimJoint1752.USE = "hanim_r_thumb2";
HAnimHumanoid44.joints[108] = HAnimJoint1752;

HAnimJoint HAnimJoint1753 = createNode("HAnimJoint");
HAnimJoint1753.USE = "hanim_l_thumb3";
HAnimHumanoid44.joints[109] = HAnimJoint1753;

HAnimJoint HAnimJoint1754 = createNode("HAnimJoint");
HAnimJoint1754.USE = "hanim_r_thumb3";
HAnimHumanoid44.joints[110] = HAnimJoint1754;

HAnimJoint HAnimJoint1755 = createNode("HAnimJoint");
HAnimJoint1755.USE = "hanim_l_wrist";
HAnimHumanoid44.joints[111] = HAnimJoint1755;

HAnimJoint HAnimJoint1756 = createNode("HAnimJoint");
HAnimJoint1756.USE = "hanim_r_wrist";
HAnimHumanoid44.joints[112] = HAnimJoint1756;

HAnimSegment HAnimSegment1757 = createNode("HAnimSegment");
HAnimSegment1757.USE = "hanim_pelvis";
HAnimHumanoid44.segments[113] = HAnimSegment1757;

HAnimSegment HAnimSegment1758 = createNode("HAnimSegment");
HAnimSegment1758.USE = "hanim_skull";
HAnimHumanoid44.segments[114] = HAnimSegment1758;

HAnimSegment HAnimSegment1759 = createNode("HAnimSegment");
HAnimSegment1759.USE = "hanim_jaw";
HAnimHumanoid44.segments[115] = HAnimSegment1759;

HAnimSegment HAnimSegment1760 = createNode("HAnimSegment");
HAnimSegment1760.USE = "hanim_c1";
HAnimHumanoid44.segments[116] = HAnimSegment1760;

HAnimSegment HAnimSegment1761 = createNode("HAnimSegment");
HAnimSegment1761.USE = "hanim_c2";
HAnimHumanoid44.segments[117] = HAnimSegment1761;

HAnimSegment HAnimSegment1762 = createNode("HAnimSegment");
HAnimSegment1762.USE = "hanim_c3";
HAnimHumanoid44.segments[118] = HAnimSegment1762;

HAnimSegment HAnimSegment1763 = createNode("HAnimSegment");
HAnimSegment1763.USE = "hanim_c4";
HAnimHumanoid44.segments[119] = HAnimSegment1763;

HAnimSegment HAnimSegment1764 = createNode("HAnimSegment");
HAnimSegment1764.USE = "hanim_c5";
HAnimHumanoid44.segments[120] = HAnimSegment1764;

HAnimSegment HAnimSegment1765 = createNode("HAnimSegment");
HAnimSegment1765.USE = "hanim_c6";
HAnimHumanoid44.segments[121] = HAnimSegment1765;

HAnimSegment HAnimSegment1766 = createNode("HAnimSegment");
HAnimSegment1766.USE = "hanim_c7";
HAnimHumanoid44.segments[122] = HAnimSegment1766;

HAnimSegment HAnimSegment1767 = createNode("HAnimSegment");
HAnimSegment1767.USE = "hanim_t1";
HAnimHumanoid44.segments[123] = HAnimSegment1767;

HAnimSegment HAnimSegment1768 = createNode("HAnimSegment");
HAnimSegment1768.USE = "hanim_t2";
HAnimHumanoid44.segments[124] = HAnimSegment1768;

HAnimSegment HAnimSegment1769 = createNode("HAnimSegment");
HAnimSegment1769.USE = "hanim_t3";
HAnimHumanoid44.segments[125] = HAnimSegment1769;

HAnimSegment HAnimSegment1770 = createNode("HAnimSegment");
HAnimSegment1770.USE = "hanim_t4";
HAnimHumanoid44.segments[126] = HAnimSegment1770;

HAnimSegment HAnimSegment1771 = createNode("HAnimSegment");
HAnimSegment1771.USE = "hanim_t5";
HAnimHumanoid44.segments[127] = HAnimSegment1771;

HAnimSegment HAnimSegment1772 = createNode("HAnimSegment");
HAnimSegment1772.USE = "hanim_t6";
HAnimHumanoid44.segments[128] = HAnimSegment1772;

HAnimSegment HAnimSegment1773 = createNode("HAnimSegment");
HAnimSegment1773.USE = "hanim_t7";
HAnimHumanoid44.segments[129] = HAnimSegment1773;

HAnimSegment HAnimSegment1774 = createNode("HAnimSegment");
HAnimSegment1774.USE = "hanim_t8";
HAnimHumanoid44.segments[130] = HAnimSegment1774;

HAnimSegment HAnimSegment1775 = createNode("HAnimSegment");
HAnimSegment1775.USE = "hanim_t9";
HAnimHumanoid44.segments[131] = HAnimSegment1775;

HAnimSegment HAnimSegment1776 = createNode("HAnimSegment");
HAnimSegment1776.USE = "hanim_t10";
HAnimHumanoid44.segments[132] = HAnimSegment1776;

HAnimSegment HAnimSegment1777 = createNode("HAnimSegment");
HAnimSegment1777.USE = "hanim_t11";
HAnimHumanoid44.segments[133] = HAnimSegment1777;

HAnimSegment HAnimSegment1778 = createNode("HAnimSegment");
HAnimSegment1778.USE = "hanim_t12";
HAnimHumanoid44.segments[134] = HAnimSegment1778;

HAnimSegment HAnimSegment1779 = createNode("HAnimSegment");
HAnimSegment1779.USE = "hanim_l1";
HAnimHumanoid44.segments[135] = HAnimSegment1779;

HAnimSegment HAnimSegment1780 = createNode("HAnimSegment");
HAnimSegment1780.USE = "hanim_l2";
HAnimHumanoid44.segments[136] = HAnimSegment1780;

HAnimSegment HAnimSegment1781 = createNode("HAnimSegment");
HAnimSegment1781.USE = "hanim_l3";
HAnimHumanoid44.segments[137] = HAnimSegment1781;

HAnimSegment HAnimSegment1782 = createNode("HAnimSegment");
HAnimSegment1782.USE = "hanim_l4";
HAnimHumanoid44.segments[138] = HAnimSegment1782;

HAnimSegment HAnimSegment1783 = createNode("HAnimSegment");
HAnimSegment1783.USE = "hanim_l5";
HAnimHumanoid44.segments[139] = HAnimSegment1783;

HAnimSegment HAnimSegment1784 = createNode("HAnimSegment");
HAnimSegment1784.USE = "hanim_sacrum";
HAnimHumanoid44.segments[140] = HAnimSegment1784;

HAnimSegment HAnimSegment1785 = createNode("HAnimSegment");
HAnimSegment1785.USE = "hanim_l_calf";
HAnimHumanoid44.segments[141] = HAnimSegment1785;

HAnimSegment HAnimSegment1786 = createNode("HAnimSegment");
HAnimSegment1786.USE = "hanim_r_calf";
HAnimHumanoid44.segments[142] = HAnimSegment1786;

HAnimSegment HAnimSegment1787 = createNode("HAnimSegment");
HAnimSegment1787.USE = "hanim_l_clavicle";
HAnimHumanoid44.segments[143] = HAnimSegment1787;

HAnimSegment HAnimSegment1788 = createNode("HAnimSegment");
HAnimSegment1788.USE = "hanim_r_clavicle";
HAnimHumanoid44.segments[144] = HAnimSegment1788;

HAnimSegment HAnimSegment1789 = createNode("HAnimSegment");
HAnimSegment1789.USE = "hanim_l_eyeball";
HAnimHumanoid44.segments[145] = HAnimSegment1789;

HAnimSegment HAnimSegment1790 = createNode("HAnimSegment");
HAnimSegment1790.USE = "hanim_r_eyeball";
HAnimHumanoid44.segments[146] = HAnimSegment1790;

HAnimSegment HAnimSegment1791 = createNode("HAnimSegment");
HAnimSegment1791.USE = "hanim_l_eyebrow";
HAnimHumanoid44.segments[147] = HAnimSegment1791;

HAnimSegment HAnimSegment1792 = createNode("HAnimSegment");
HAnimSegment1792.USE = "hanim_r_eyebrow";
HAnimHumanoid44.segments[148] = HAnimSegment1792;

HAnimSegment HAnimSegment1793 = createNode("HAnimSegment");
HAnimSegment1793.USE = "hanim_l_eyelid";
HAnimHumanoid44.segments[149] = HAnimSegment1793;

HAnimSegment HAnimSegment1794 = createNode("HAnimSegment");
HAnimSegment1794.USE = "hanim_r_eyelid";
HAnimHumanoid44.segments[150] = HAnimSegment1794;

HAnimSegment HAnimSegment1795 = createNode("HAnimSegment");
HAnimSegment1795.USE = "hanim_l_forearm";
HAnimHumanoid44.segments[151] = HAnimSegment1795;

HAnimSegment HAnimSegment1796 = createNode("HAnimSegment");
HAnimSegment1796.USE = "hanim_r_forearm";
HAnimHumanoid44.segments[152] = HAnimSegment1796;

HAnimSegment HAnimSegment1797 = createNode("HAnimSegment");
HAnimSegment1797.USE = "hanim_l_forefoot";
HAnimHumanoid44.segments[153] = HAnimSegment1797;

HAnimSegment HAnimSegment1798 = createNode("HAnimSegment");
HAnimSegment1798.USE = "hanim_r_forefoot";
HAnimHumanoid44.segments[154] = HAnimSegment1798;

HAnimSegment HAnimSegment1799 = createNode("HAnimSegment");
HAnimSegment1799.USE = "hanim_l_hand";
HAnimHumanoid44.segments[155] = HAnimSegment1799;

HAnimSegment HAnimSegment1800 = createNode("HAnimSegment");
HAnimSegment1800.USE = "hanim_r_hand";
HAnimHumanoid44.segments[156] = HAnimSegment1800;

HAnimSegment HAnimSegment1801 = createNode("HAnimSegment");
HAnimSegment1801.USE = "hanim_l_hindfoot";
HAnimHumanoid44.segments[157] = HAnimSegment1801;

HAnimSegment HAnimSegment1802 = createNode("HAnimSegment");
HAnimSegment1802.USE = "hanim_r_hindfoot";
HAnimHumanoid44.segments[158] = HAnimSegment1802;

HAnimSegment HAnimSegment1803 = createNode("HAnimSegment");
HAnimSegment1803.USE = "hanim_l_index_distal";
HAnimHumanoid44.segments[159] = HAnimSegment1803;

HAnimSegment HAnimSegment1804 = createNode("HAnimSegment");
HAnimSegment1804.USE = "hanim_r_index_distal";
HAnimHumanoid44.segments[160] = HAnimSegment1804;

HAnimSegment HAnimSegment1805 = createNode("HAnimSegment");
HAnimSegment1805.USE = "hanim_l_index_metacarpal";
HAnimHumanoid44.segments[161] = HAnimSegment1805;

HAnimSegment HAnimSegment1806 = createNode("HAnimSegment");
HAnimSegment1806.USE = "hanim_r_index_metacarpal";
HAnimHumanoid44.segments[162] = HAnimSegment1806;

HAnimSegment HAnimSegment1807 = createNode("HAnimSegment");
HAnimSegment1807.USE = "hanim_l_index_middle";
HAnimHumanoid44.segments[163] = HAnimSegment1807;

HAnimSegment HAnimSegment1808 = createNode("HAnimSegment");
HAnimSegment1808.USE = "hanim_r_index_middle";
HAnimHumanoid44.segments[164] = HAnimSegment1808;

HAnimSegment HAnimSegment1809 = createNode("HAnimSegment");
HAnimSegment1809.USE = "hanim_l_index_proximal";
HAnimHumanoid44.segments[165] = HAnimSegment1809;

HAnimSegment HAnimSegment1810 = createNode("HAnimSegment");
HAnimSegment1810.USE = "hanim_r_index_proximal";
HAnimHumanoid44.segments[166] = HAnimSegment1810;

HAnimSegment HAnimSegment1811 = createNode("HAnimSegment");
HAnimSegment1811.USE = "hanim_l_middistal";
HAnimHumanoid44.segments[167] = HAnimSegment1811;

HAnimSegment HAnimSegment1812 = createNode("HAnimSegment");
HAnimSegment1812.USE = "hanim_r_middistal";
HAnimHumanoid44.segments[168] = HAnimSegment1812;

HAnimSegment HAnimSegment1813 = createNode("HAnimSegment");
HAnimSegment1813.USE = "hanim_l_middle_distal";
HAnimHumanoid44.segments[169] = HAnimSegment1813;

HAnimSegment HAnimSegment1814 = createNode("HAnimSegment");
HAnimSegment1814.USE = "hanim_r_middle_distal";
HAnimHumanoid44.segments[170] = HAnimSegment1814;

HAnimSegment HAnimSegment1815 = createNode("HAnimSegment");
HAnimSegment1815.USE = "hanim_l_middle_metacarpal";
HAnimHumanoid44.segments[171] = HAnimSegment1815;

HAnimSegment HAnimSegment1816 = createNode("HAnimSegment");
HAnimSegment1816.USE = "hanim_r_middle_metacarpal";
HAnimHumanoid44.segments[172] = HAnimSegment1816;

HAnimSegment HAnimSegment1817 = createNode("HAnimSegment");
HAnimSegment1817.USE = "hanim_l_middle_middle";
HAnimHumanoid44.segments[173] = HAnimSegment1817;

HAnimSegment HAnimSegment1818 = createNode("HAnimSegment");
HAnimSegment1818.USE = "hanim_r_middle_middle";
HAnimHumanoid44.segments[174] = HAnimSegment1818;

HAnimSegment HAnimSegment1819 = createNode("HAnimSegment");
HAnimSegment1819.USE = "hanim_l_middle_proximal";
HAnimHumanoid44.segments[175] = HAnimSegment1819;

HAnimSegment HAnimSegment1820 = createNode("HAnimSegment");
HAnimSegment1820.USE = "hanim_r_middle_proximal";
HAnimHumanoid44.segments[176] = HAnimSegment1820;

HAnimSegment HAnimSegment1821 = createNode("HAnimSegment");
HAnimSegment1821.USE = "hanim_l_midproximal";
HAnimHumanoid44.segments[177] = HAnimSegment1821;

HAnimSegment HAnimSegment1822 = createNode("HAnimSegment");
HAnimSegment1822.USE = "hanim_r_midproximal";
HAnimHumanoid44.segments[178] = HAnimSegment1822;

HAnimSegment HAnimSegment1823 = createNode("HAnimSegment");
HAnimSegment1823.USE = "hanim_l_pinky_distal";
HAnimHumanoid44.segments[179] = HAnimSegment1823;

HAnimSegment HAnimSegment1824 = createNode("HAnimSegment");
HAnimSegment1824.USE = "hanim_r_pinky_distal";
HAnimHumanoid44.segments[180] = HAnimSegment1824;

HAnimSegment HAnimSegment1825 = createNode("HAnimSegment");
HAnimSegment1825.USE = "hanim_l_pinky_metacarpal";
HAnimHumanoid44.segments[181] = HAnimSegment1825;

HAnimSegment HAnimSegment1826 = createNode("HAnimSegment");
HAnimSegment1826.USE = "hanim_r_pinky_metacarpal";
HAnimHumanoid44.segments[182] = HAnimSegment1826;

HAnimSegment HAnimSegment1827 = createNode("HAnimSegment");
HAnimSegment1827.USE = "hanim_l_pinky_middle";
HAnimHumanoid44.segments[183] = HAnimSegment1827;

HAnimSegment HAnimSegment1828 = createNode("HAnimSegment");
HAnimSegment1828.USE = "hanim_r_pinky_middle";
HAnimHumanoid44.segments[184] = HAnimSegment1828;

HAnimSegment HAnimSegment1829 = createNode("HAnimSegment");
HAnimSegment1829.USE = "hanim_l_pinky_proximal";
HAnimHumanoid44.segments[185] = HAnimSegment1829;

HAnimSegment HAnimSegment1830 = createNode("HAnimSegment");
HAnimSegment1830.USE = "hanim_r_pinky_proximal";
HAnimHumanoid44.segments[186] = HAnimSegment1830;

HAnimSegment HAnimSegment1831 = createNode("HAnimSegment");
HAnimSegment1831.USE = "hanim_l_ring_distal";
HAnimHumanoid44.segments[187] = HAnimSegment1831;

HAnimSegment HAnimSegment1832 = createNode("HAnimSegment");
HAnimSegment1832.USE = "hanim_r_ring_distal";
HAnimHumanoid44.segments[188] = HAnimSegment1832;

HAnimSegment HAnimSegment1833 = createNode("HAnimSegment");
HAnimSegment1833.USE = "hanim_l_ring_metacarpal";
HAnimHumanoid44.segments[189] = HAnimSegment1833;

HAnimSegment HAnimSegment1834 = createNode("HAnimSegment");
HAnimSegment1834.USE = "hanim_r_ring_metacarpal";
HAnimHumanoid44.segments[190] = HAnimSegment1834;

HAnimSegment HAnimSegment1835 = createNode("HAnimSegment");
HAnimSegment1835.USE = "hanim_l_ring_middle";
HAnimHumanoid44.segments[191] = HAnimSegment1835;

HAnimSegment HAnimSegment1836 = createNode("HAnimSegment");
HAnimSegment1836.USE = "hanim_r_ring_middle";
HAnimHumanoid44.segments[192] = HAnimSegment1836;

HAnimSegment HAnimSegment1837 = createNode("HAnimSegment");
HAnimSegment1837.USE = "hanim_l_ring_proximal";
HAnimHumanoid44.segments[193] = HAnimSegment1837;

HAnimSegment HAnimSegment1838 = createNode("HAnimSegment");
HAnimSegment1838.USE = "hanim_r_ring_proximal";
HAnimHumanoid44.segments[194] = HAnimSegment1838;

HAnimSegment HAnimSegment1839 = createNode("HAnimSegment");
HAnimSegment1839.USE = "hanim_l_scapula";
HAnimHumanoid44.segments[195] = HAnimSegment1839;

HAnimSegment HAnimSegment1840 = createNode("HAnimSegment");
HAnimSegment1840.USE = "hanim_r_scapula";
HAnimHumanoid44.segments[196] = HAnimSegment1840;

HAnimSegment HAnimSegment1841 = createNode("HAnimSegment");
HAnimSegment1841.USE = "hanim_l_thigh";
HAnimHumanoid44.segments[197] = HAnimSegment1841;

HAnimSegment HAnimSegment1842 = createNode("HAnimSegment");
HAnimSegment1842.USE = "hanim_r_thigh";
HAnimHumanoid44.segments[198] = HAnimSegment1842;

HAnimSegment HAnimSegment1843 = createNode("HAnimSegment");
HAnimSegment1843.USE = "hanim_l_thumb_distal";
HAnimHumanoid44.segments[199] = HAnimSegment1843;

HAnimSegment HAnimSegment1844 = createNode("HAnimSegment");
HAnimSegment1844.USE = "hanim_r_thumb_distal";
HAnimHumanoid44.segments[200] = HAnimSegment1844;

HAnimSegment HAnimSegment1845 = createNode("HAnimSegment");
HAnimSegment1845.USE = "hanim_l_thumb_metacarpal";
HAnimHumanoid44.segments[201] = HAnimSegment1845;

HAnimSegment HAnimSegment1846 = createNode("HAnimSegment");
HAnimSegment1846.USE = "hanim_r_thumb_metacarpal";
HAnimHumanoid44.segments[202] = HAnimSegment1846;

HAnimSegment HAnimSegment1847 = createNode("HAnimSegment");
HAnimSegment1847.USE = "hanim_l_thumb_proximal";
HAnimHumanoid44.segments[203] = HAnimSegment1847;

HAnimSegment HAnimSegment1848 = createNode("HAnimSegment");
HAnimSegment1848.USE = "hanim_r_thumb_proximal";
HAnimHumanoid44.segments[204] = HAnimSegment1848;

HAnimSegment HAnimSegment1849 = createNode("HAnimSegment");
HAnimSegment1849.USE = "hanim_l_upperarm";
HAnimHumanoid44.segments[205] = HAnimSegment1849;

HAnimSegment HAnimSegment1850 = createNode("HAnimSegment");
HAnimSegment1850.USE = "hanim_r_upperarm";
HAnimHumanoid44.segments[206] = HAnimSegment1850;

HAnimSite HAnimSite1851 = createNode("HAnimSite");
HAnimSite1851.USE = "hanim_crotch_pt";
HAnimHumanoid44.viewpoints[207] = HAnimSite1851;

HAnimSite HAnimSite1852 = createNode("HAnimSite");
HAnimSite1852.USE = "hanim_skull_tip";
HAnimHumanoid44.viewpoints[208] = HAnimSite1852;

HAnimSite HAnimSite1853 = createNode("HAnimSite");
HAnimSite1853.USE = "hanim_sellion_pt";
HAnimHumanoid44.viewpoints[209] = HAnimSite1853;

HAnimSite HAnimSite1854 = createNode("HAnimSite");
HAnimSite1854.USE = "hanim_supramenton_pt";
HAnimHumanoid44.viewpoints[210] = HAnimSite1854;

HAnimSite HAnimSite1855 = createNode("HAnimSite");
HAnimSite1855.USE = "hanim_nuchale_pt";
HAnimHumanoid44.viewpoints[211] = HAnimSite1855;

HAnimSite HAnimSite1856 = createNode("HAnimSite");
HAnimSite1856.USE = "hanim_suprasternale_pt";
HAnimHumanoid44.viewpoints[212] = HAnimSite1856;

HAnimSite HAnimSite1857 = createNode("HAnimSite");
HAnimSite1857.USE = "hanim_cervicale_pt";
HAnimHumanoid44.viewpoints[213] = HAnimSite1857;

HAnimSite HAnimSite1858 = createNode("HAnimSite");
HAnimSite1858.USE = "hanim_substernale_pt";
HAnimHumanoid44.viewpoints[214] = HAnimSite1858;

HAnimSite HAnimSite1859 = createNode("HAnimSite");
HAnimSite1859.USE = "hanim_rib10_midspine_pt";
HAnimHumanoid44.viewpoints[215] = HAnimSite1859;

HAnimSite HAnimSite1860 = createNode("HAnimSite");
HAnimSite1860.USE = "hanim_waist_preferred_post_pt";
HAnimHumanoid44.viewpoints[216] = HAnimSite1860;

HAnimSite HAnimSite1861 = createNode("HAnimSite");
HAnimSite1861.USE = "hanim_navel_pt";
HAnimHumanoid44.viewpoints[217] = HAnimSite1861;

HAnimSite HAnimSite1862 = createNode("HAnimSite");
HAnimSite1862.USE = "hanim_l_acromion_pt";
HAnimHumanoid44.viewpoints[218] = HAnimSite1862;

HAnimSite HAnimSite1863 = createNode("HAnimSite");
HAnimSite1863.USE = "hanim_r_acromion_pt";
HAnimHumanoid44.viewpoints[219] = HAnimSite1863;

HAnimSite HAnimSite1864 = createNode("HAnimSite");
HAnimSite1864.USE = "hanim_r_asis_pt";
HAnimHumanoid44.viewpoints[220] = HAnimSite1864;

HAnimSite HAnimSite1865 = createNode("HAnimSite");
HAnimSite1865.USE = "hanim_l_asis_pt";
HAnimHumanoid44.viewpoints[221] = HAnimSite1865;

HAnimSite HAnimSite1866 = createNode("HAnimSite");
HAnimSite1866.USE = "hanim_l_axilla_ant_pt";
HAnimHumanoid44.viewpoints[222] = HAnimSite1866;

HAnimSite HAnimSite1867 = createNode("HAnimSite");
HAnimSite1867.USE = "hanim_r_axilla_ant_pt";
HAnimHumanoid44.viewpoints[223] = HAnimSite1867;

HAnimSite HAnimSite1868 = createNode("HAnimSite");
HAnimSite1868.USE = "hanim_l_axilla_post_pt";
HAnimHumanoid44.viewpoints[224] = HAnimSite1868;

HAnimSite HAnimSite1869 = createNode("HAnimSite");
HAnimSite1869.USE = "hanim_r_axilla_post_pt";
HAnimHumanoid44.viewpoints[225] = HAnimSite1869;

HAnimSite HAnimSite1870 = createNode("HAnimSite");
HAnimSite1870.USE = "hanim_l_calcaneous_post_pt";
HAnimHumanoid44.viewpoints[226] = HAnimSite1870;

HAnimSite HAnimSite1871 = createNode("HAnimSite");
HAnimSite1871.USE = "hanim_r_calcaneous_post_pt";
HAnimHumanoid44.viewpoints[227] = HAnimSite1871;

HAnimSite HAnimSite1872 = createNode("HAnimSite");
HAnimSite1872.USE = "hanim_l_clavicale_pt";
HAnimHumanoid44.viewpoints[228] = HAnimSite1872;

HAnimSite HAnimSite1873 = createNode("HAnimSite");
HAnimSite1873.USE = "hanim_r_clavicale_pt";
HAnimHumanoid44.viewpoints[229] = HAnimSite1873;

HAnimSite HAnimSite1874 = createNode("HAnimSite");
HAnimSite1874.USE = "hanim_l_dactylion_pt";
HAnimHumanoid44.viewpoints[230] = HAnimSite1874;

HAnimSite HAnimSite1875 = createNode("HAnimSite");
HAnimSite1875.USE = "hanim_r_dactylion_pt";
HAnimHumanoid44.viewpoints[231] = HAnimSite1875;

HAnimSite HAnimSite1876 = createNode("HAnimSite");
HAnimSite1876.USE = "hanim_l_digit2_pt";
HAnimHumanoid44.viewpoints[232] = HAnimSite1876;

HAnimSite HAnimSite1877 = createNode("HAnimSite");
HAnimSite1877.USE = "hanim_r_digit2_pt";
HAnimHumanoid44.viewpoints[233] = HAnimSite1877;

HAnimSite HAnimSite1878 = createNode("HAnimSite");
HAnimSite1878.USE = "hanim_l_femoral_lateral_epicn_pt";
HAnimHumanoid44.viewpoints[234] = HAnimSite1878;

HAnimSite HAnimSite1879 = createNode("HAnimSite");
HAnimSite1879.USE = "hanim_r_femoral_lateral_epicn_pt";
HAnimHumanoid44.viewpoints[235] = HAnimSite1879;

HAnimSite HAnimSite1880 = createNode("HAnimSite");
HAnimSite1880.USE = "hanim_l_femoral_medial_epicn_pt";
HAnimHumanoid44.viewpoints[236] = HAnimSite1880;

HAnimSite HAnimSite1881 = createNode("HAnimSite");
HAnimSite1881.USE = "hanim_r_femoral_medial_epicn_pt";
HAnimHumanoid44.viewpoints[237] = HAnimSite1881;

HAnimSite HAnimSite1882 = createNode("HAnimSite");
HAnimSite1882.USE = "hanim_l_forefoot_tip";
HAnimHumanoid44.viewpoints[238] = HAnimSite1882;

HAnimSite HAnimSite1883 = createNode("HAnimSite");
HAnimSite1883.USE = "hanim_r_forefoot_tip";
HAnimHumanoid44.viewpoints[239] = HAnimSite1883;

HAnimSite HAnimSite1884 = createNode("HAnimSite");
HAnimSite1884.USE = "hanim_r_gonion_pt";
HAnimHumanoid44.viewpoints[240] = HAnimSite1884;

HAnimSite HAnimSite1885 = createNode("HAnimSite");
HAnimSite1885.USE = "hanim_l_gonion_pt";
HAnimHumanoid44.viewpoints[241] = HAnimSite1885;

HAnimSite HAnimSite1886 = createNode("HAnimSite");
HAnimSite1886.USE = "hanim_l_humeral_lateral_epicn_pt";
HAnimHumanoid44.viewpoints[242] = HAnimSite1886;

HAnimSite HAnimSite1887 = createNode("HAnimSite");
HAnimSite1887.USE = "hanim_r_humeral_lateral_epicn_pt";
HAnimHumanoid44.viewpoints[243] = HAnimSite1887;

HAnimSite HAnimSite1888 = createNode("HAnimSite");
HAnimSite1888.USE = "hanim_l_humeral_medial_epicn_pt";
HAnimHumanoid44.viewpoints[244] = HAnimSite1888;

HAnimSite HAnimSite1889 = createNode("HAnimSite");
HAnimSite1889.USE = "hanim_r_humeral_medial_epicn_pt";
HAnimHumanoid44.viewpoints[245] = HAnimSite1889;

HAnimSite HAnimSite1890 = createNode("HAnimSite");
HAnimSite1890.USE = "hanim_r_iliocristale_pt";
HAnimHumanoid44.viewpoints[246] = HAnimSite1890;

HAnimSite HAnimSite1891 = createNode("HAnimSite");
HAnimSite1891.USE = "hanim_l_iliocristale_pt";
HAnimHumanoid44.viewpoints[247] = HAnimSite1891;

HAnimSite HAnimSite1892 = createNode("HAnimSite");
HAnimSite1892.USE = "hanim_l_index_distal_tip";
HAnimHumanoid44.viewpoints[248] = HAnimSite1892;

HAnimSite HAnimSite1893 = createNode("HAnimSite");
HAnimSite1893.USE = "hanim_r_index_distal_tip";
HAnimHumanoid44.viewpoints[249] = HAnimSite1893;

HAnimSite HAnimSite1894 = createNode("HAnimSite");
HAnimSite1894.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid44.viewpoints[250] = HAnimSite1894;

HAnimSite HAnimSite1895 = createNode("HAnimSite");
HAnimSite1895.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid44.viewpoints[251] = HAnimSite1895;

HAnimSite HAnimSite1896 = createNode("HAnimSite");
HAnimSite1896.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid44.viewpoints[252] = HAnimSite1896;

HAnimSite HAnimSite1897 = createNode("HAnimSite");
HAnimSite1897.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid44.viewpoints[253] = HAnimSite1897;

HAnimSite HAnimSite1898 = createNode("HAnimSite");
HAnimSite1898.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid44.viewpoints[254] = HAnimSite1898;

HAnimSite HAnimSite1899 = createNode("HAnimSite");
HAnimSite1899.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid44.viewpoints[255] = HAnimSite1899;

HAnimSite HAnimSite1900 = createNode("HAnimSite");
HAnimSite1900.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid44.viewpoints[256] = HAnimSite1900;

HAnimSite HAnimSite1901 = createNode("HAnimSite");
HAnimSite1901.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid44.viewpoints[257] = HAnimSite1901;

HAnimSite HAnimSite1902 = createNode("HAnimSite");
HAnimSite1902.USE = "hanim_l_metacarpal_pha2_pt";
HAnimHumanoid44.viewpoints[258] = HAnimSite1902;

HAnimSite HAnimSite1903 = createNode("HAnimSite");
HAnimSite1903.USE = "hanim_r_metacarpal_pha2_pt";
HAnimHumanoid44.viewpoints[259] = HAnimSite1903;

HAnimSite HAnimSite1904 = createNode("HAnimSite");
HAnimSite1904.USE = "hanim_l_metacarpal_pha5_pt";
HAnimHumanoid44.viewpoints[260] = HAnimSite1904;

HAnimSite HAnimSite1905 = createNode("HAnimSite");
HAnimSite1905.USE = "hanim_r_metacarpal_pha5_pt";
HAnimHumanoid44.viewpoints[261] = HAnimSite1905;

HAnimSite HAnimSite1906 = createNode("HAnimSite");
HAnimSite1906.USE = "hanim_l_metatarsal_pha1_pt";
HAnimHumanoid44.viewpoints[262] = HAnimSite1906;

HAnimSite HAnimSite1907 = createNode("HAnimSite");
HAnimSite1907.USE = "hanim_r_metatarsal_pha1_pt";
HAnimHumanoid44.viewpoints[263] = HAnimSite1907;

HAnimSite HAnimSite1908 = createNode("HAnimSite");
HAnimSite1908.USE = "hanim_l_metatarsal_pha5_pt";
HAnimHumanoid44.viewpoints[264] = HAnimSite1908;

HAnimSite HAnimSite1909 = createNode("HAnimSite");
HAnimSite1909.USE = "hanim_r_metatarsal_pha5_pt";
HAnimHumanoid44.viewpoints[265] = HAnimSite1909;

HAnimSite HAnimSite1910 = createNode("HAnimSite");
HAnimSite1910.USE = "hanim_l_middle_distal_tip";
HAnimHumanoid44.viewpoints[266] = HAnimSite1910;

HAnimSite HAnimSite1911 = createNode("HAnimSite");
HAnimSite1911.USE = "hanim_r_middle_distal_tip";
HAnimHumanoid44.viewpoints[267] = HAnimSite1911;

HAnimSite HAnimSite1912 = createNode("HAnimSite");
HAnimSite1912.USE = "hanim_r_neck_base_pt";
HAnimHumanoid44.viewpoints[268] = HAnimSite1912;

HAnimSite HAnimSite1913 = createNode("HAnimSite");
HAnimSite1913.USE = "hanim_l_neck_base_pt";
HAnimHumanoid44.viewpoints[269] = HAnimSite1913;

HAnimSite HAnimSite1914 = createNode("HAnimSite");
HAnimSite1914.USE = "hanim_l_olecranon_pt";
HAnimHumanoid44.viewpoints[270] = HAnimSite1914;

HAnimSite HAnimSite1915 = createNode("HAnimSite");
HAnimSite1915.USE = "hanim_r_olecranon_pt";
HAnimHumanoid44.viewpoints[271] = HAnimSite1915;

HAnimSite HAnimSite1916 = createNode("HAnimSite");
HAnimSite1916.USE = "hanim_l_pinky_distal_tip";
HAnimHumanoid44.viewpoints[272] = HAnimSite1916;

HAnimSite HAnimSite1917 = createNode("HAnimSite");
HAnimSite1917.USE = "hanim_r_pinky_distal_tip";
HAnimHumanoid44.viewpoints[273] = HAnimSite1917;

HAnimSite HAnimSite1918 = createNode("HAnimSite");
HAnimSite1918.USE = "hanim_r_psis_pt";
HAnimHumanoid44.viewpoints[274] = HAnimSite1918;

HAnimSite HAnimSite1919 = createNode("HAnimSite");
HAnimSite1919.USE = "hanim_l_psis_pt";
HAnimHumanoid44.viewpoints[275] = HAnimSite1919;

HAnimSite HAnimSite1920 = createNode("HAnimSite");
HAnimSite1920.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid44.viewpoints[276] = HAnimSite1920;

HAnimSite HAnimSite1921 = createNode("HAnimSite");
HAnimSite1921.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid44.viewpoints[277] = HAnimSite1921;

HAnimSite HAnimSite1922 = createNode("HAnimSite");
HAnimSite1922.USE = "hanim_l_radiale_pt";
HAnimHumanoid44.viewpoints[278] = HAnimSite1922;

HAnimSite HAnimSite1923 = createNode("HAnimSite");
HAnimSite1923.USE = "hanim_r_radiale_pt";
HAnimHumanoid44.viewpoints[279] = HAnimSite1923;

HAnimSite HAnimSite1924 = createNode("HAnimSite");
HAnimSite1924.USE = "hanim_r_rib10_pt";
HAnimHumanoid44.viewpoints[280] = HAnimSite1924;

HAnimSite HAnimSite1925 = createNode("HAnimSite");
HAnimSite1925.USE = "hanim_l_rib10_pt";
HAnimHumanoid44.viewpoints[281] = HAnimSite1925;

HAnimSite HAnimSite1926 = createNode("HAnimSite");
HAnimSite1926.USE = "hanim_l_ring_distal_tip";
HAnimHumanoid44.viewpoints[282] = HAnimSite1926;

HAnimSite HAnimSite1927 = createNode("HAnimSite");
HAnimSite1927.USE = "hanim_r_ring_distal_tip";
HAnimHumanoid44.viewpoints[283] = HAnimSite1927;

HAnimSite HAnimSite1928 = createNode("HAnimSite");
HAnimSite1928.USE = "hanim_temporomandibular_l_site_pt";
HAnimHumanoid44.viewpoints[284] = HAnimSite1928;

HAnimSite HAnimSite1929 = createNode("HAnimSite");
HAnimSite1929.USE = "hanim_temporomandibular_r_site_pt";
HAnimHumanoid44.viewpoints[285] = HAnimSite1929;

HAnimSite HAnimSite1930 = createNode("HAnimSite");
HAnimSite1930.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid44.viewpoints[286] = HAnimSite1930;

HAnimSite HAnimSite1931 = createNode("HAnimSite");
HAnimSite1931.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid44.viewpoints[287] = HAnimSite1931;

HAnimSite HAnimSite1932 = createNode("HAnimSite");
HAnimSite1932.USE = "hanim_r_thelion_pt";
HAnimHumanoid44.viewpoints[288] = HAnimSite1932;

HAnimSite HAnimSite1933 = createNode("HAnimSite");
HAnimSite1933.USE = "hanim_l_thelion_pt";
HAnimHumanoid44.viewpoints[289] = HAnimSite1933;

HAnimSite HAnimSite1934 = createNode("HAnimSite");
HAnimSite1934.USE = "hanim_l_thumb_distal_tip";
HAnimHumanoid44.viewpoints[290] = HAnimSite1934;

HAnimSite HAnimSite1935 = createNode("HAnimSite");
HAnimSite1935.USE = "hanim_r_thumb_distal_tip";
HAnimHumanoid44.viewpoints[291] = HAnimSite1935;

HAnimSite HAnimSite1936 = createNode("HAnimSite");
HAnimSite1936.USE = "hanim_r_tragion_pt";
HAnimHumanoid44.viewpoints[292] = HAnimSite1936;

HAnimSite HAnimSite1937 = createNode("HAnimSite");
HAnimSite1937.USE = "hanim_l_tragion_pt";
HAnimHumanoid44.viewpoints[293] = HAnimSite1937;

HAnimSite HAnimSite1938 = createNode("HAnimSite");
HAnimSite1938.USE = "hanim_r_trochanterion_pt";
HAnimHumanoid44.viewpoints[294] = HAnimSite1938;

HAnimSite HAnimSite1939 = createNode("HAnimSite");
HAnimSite1939.USE = "hanim_l_trochanterion_pt";
HAnimHumanoid44.viewpoints[295] = HAnimSite1939;

HAnimSite HAnimSite1940 = createNode("HAnimSite");
HAnimSite1940.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid44.viewpoints[296] = HAnimSite1940;

HAnimSite HAnimSite1941 = createNode("HAnimSite");
HAnimSite1941.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid44.viewpoints[297] = HAnimSite1941;

children[12] = HAnimHumanoid44;

Group Group1942 = createNode("Group");
Group1942.DEF = "StopAnimation";
TimeSensor TimeSensor1943 = createNode("TimeSensor");
TimeSensor1943.DEF = "StopTimer";
TimeSensor1943.cycleInterval = 5.73;
TimeSensor1943.loop = True;
Group1942.children = new MFNode();

Group1942.children[0] = TimeSensor1943;

PositionInterpolator PositionInterpolator1944 = createNode("PositionInterpolator");
PositionInterpolator1944.DEF = "Stop_humanoid_root_TranslationInterpolator";
PositionInterpolator1944.key = new MFFloat(new float[0,0.5,1]);
PositionInterpolator1944.keyValue = new MFVec3f(new float[0,0,0,0,0,0,0,0,0]);
Group1942.children[1] = PositionInterpolator1944;

OrientationInterpolator OrientationInterpolator1945 = createNode("OrientationInterpolator");
OrientationInterpolator1945.DEF = "Stop_humanoid_root_RotationInterpolator";
OrientationInterpolator1945.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1945.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[2] = OrientationInterpolator1945;

OrientationInterpolator OrientationInterpolator1946 = createNode("OrientationInterpolator");
OrientationInterpolator1946.DEF = "Stop_sacroiliac_RotationInterpolator";
OrientationInterpolator1946.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1946.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[3] = OrientationInterpolator1946;

OrientationInterpolator OrientationInterpolator1947 = createNode("OrientationInterpolator");
OrientationInterpolator1947.DEF = "Stop_l_hip_RotationInterpolator";
OrientationInterpolator1947.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1947.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[4] = OrientationInterpolator1947;

OrientationInterpolator OrientationInterpolator1948 = createNode("OrientationInterpolator");
OrientationInterpolator1948.DEF = "Stop_l_knee_RotationInterpolator";
OrientationInterpolator1948.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1948.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[5] = OrientationInterpolator1948;

OrientationInterpolator OrientationInterpolator1949 = createNode("OrientationInterpolator");
OrientationInterpolator1949.DEF = "Stop_l_ankle_RotationInterpolator";
OrientationInterpolator1949.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1949.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[6] = OrientationInterpolator1949;

OrientationInterpolator OrientationInterpolator1950 = createNode("OrientationInterpolator");
OrientationInterpolator1950.DEF = "Stop_l_subtalar_RotationInterpolator";
OrientationInterpolator1950.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1950.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[7] = OrientationInterpolator1950;

OrientationInterpolator OrientationInterpolator1951 = createNode("OrientationInterpolator");
OrientationInterpolator1951.DEF = "Stop_l_midtarsal_RotationInterpolator";
OrientationInterpolator1951.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1951.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[8] = OrientationInterpolator1951;

OrientationInterpolator OrientationInterpolator1952 = createNode("OrientationInterpolator");
OrientationInterpolator1952.DEF = "Stop_l_metatarsal_RotationInterpolator";
OrientationInterpolator1952.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1952.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[9] = OrientationInterpolator1952;

OrientationInterpolator OrientationInterpolator1953 = createNode("OrientationInterpolator");
OrientationInterpolator1953.DEF = "Stop_r_hip_RotationInterpolator";
OrientationInterpolator1953.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1953.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[10] = OrientationInterpolator1953;

OrientationInterpolator OrientationInterpolator1954 = createNode("OrientationInterpolator");
OrientationInterpolator1954.DEF = "Stop_r_knee_RotationInterpolator";
OrientationInterpolator1954.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1954.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[11] = OrientationInterpolator1954;

OrientationInterpolator OrientationInterpolator1955 = createNode("OrientationInterpolator");
OrientationInterpolator1955.DEF = "Stop_r_ankle_RotationInterpolator";
OrientationInterpolator1955.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1955.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[12] = OrientationInterpolator1955;

OrientationInterpolator OrientationInterpolator1956 = createNode("OrientationInterpolator");
OrientationInterpolator1956.DEF = "Stop_r_subtalar_RotationInterpolator";
OrientationInterpolator1956.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1956.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[13] = OrientationInterpolator1956;

OrientationInterpolator OrientationInterpolator1957 = createNode("OrientationInterpolator");
OrientationInterpolator1957.DEF = "Stop_r_midtarsal_RotationInterpolator";
OrientationInterpolator1957.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1957.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[14] = OrientationInterpolator1957;

OrientationInterpolator OrientationInterpolator1958 = createNode("OrientationInterpolator");
OrientationInterpolator1958.DEF = "Stop_r_metatarsal_RotationInterpolator";
OrientationInterpolator1958.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1958.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[15] = OrientationInterpolator1958;

OrientationInterpolator OrientationInterpolator1959 = createNode("OrientationInterpolator");
OrientationInterpolator1959.DEF = "Stop_vl5_RotationInterpolator";
OrientationInterpolator1959.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1959.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[16] = OrientationInterpolator1959;

OrientationInterpolator OrientationInterpolator1960 = createNode("OrientationInterpolator");
OrientationInterpolator1960.DEF = "Stop_vl4_RotationInterpolator";
OrientationInterpolator1960.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1960.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[17] = OrientationInterpolator1960;

OrientationInterpolator OrientationInterpolator1961 = createNode("OrientationInterpolator");
OrientationInterpolator1961.DEF = "Stop_vl3_RotationInterpolator";
OrientationInterpolator1961.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1961.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[18] = OrientationInterpolator1961;

OrientationInterpolator OrientationInterpolator1962 = createNode("OrientationInterpolator");
OrientationInterpolator1962.DEF = "Stop_vl2_RotationInterpolator";
OrientationInterpolator1962.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1962.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[19] = OrientationInterpolator1962;

OrientationInterpolator OrientationInterpolator1963 = createNode("OrientationInterpolator");
OrientationInterpolator1963.DEF = "Stop_vl1_RotationInterpolator";
OrientationInterpolator1963.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1963.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[20] = OrientationInterpolator1963;

OrientationInterpolator OrientationInterpolator1964 = createNode("OrientationInterpolator");
OrientationInterpolator1964.DEF = "Stop_vt12_RotationInterpolator";
OrientationInterpolator1964.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1964.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[21] = OrientationInterpolator1964;

OrientationInterpolator OrientationInterpolator1965 = createNode("OrientationInterpolator");
OrientationInterpolator1965.DEF = "Stop_vt11_RotationInterpolator";
OrientationInterpolator1965.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1965.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[22] = OrientationInterpolator1965;

OrientationInterpolator OrientationInterpolator1966 = createNode("OrientationInterpolator");
OrientationInterpolator1966.DEF = "Stop_vt10_RotationInterpolator";
OrientationInterpolator1966.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1966.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[23] = OrientationInterpolator1966;

OrientationInterpolator OrientationInterpolator1967 = createNode("OrientationInterpolator");
OrientationInterpolator1967.DEF = "Stop_vt9_RotationInterpolator";
OrientationInterpolator1967.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1967.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[24] = OrientationInterpolator1967;

OrientationInterpolator OrientationInterpolator1968 = createNode("OrientationInterpolator");
OrientationInterpolator1968.DEF = "Stop_vt8_RotationInterpolator";
OrientationInterpolator1968.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1968.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[25] = OrientationInterpolator1968;

OrientationInterpolator OrientationInterpolator1969 = createNode("OrientationInterpolator");
OrientationInterpolator1969.DEF = "Stop_vt7_RotationInterpolator";
OrientationInterpolator1969.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1969.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[26] = OrientationInterpolator1969;

OrientationInterpolator OrientationInterpolator1970 = createNode("OrientationInterpolator");
OrientationInterpolator1970.DEF = "Stop_vt6_RotationInterpolator";
OrientationInterpolator1970.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1970.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[27] = OrientationInterpolator1970;

OrientationInterpolator OrientationInterpolator1971 = createNode("OrientationInterpolator");
OrientationInterpolator1971.DEF = "Stop_vt5_RotationInterpolator";
OrientationInterpolator1971.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1971.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[28] = OrientationInterpolator1971;

OrientationInterpolator OrientationInterpolator1972 = createNode("OrientationInterpolator");
OrientationInterpolator1972.DEF = "Stop_vt4_RotationInterpolator";
OrientationInterpolator1972.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1972.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[29] = OrientationInterpolator1972;

OrientationInterpolator OrientationInterpolator1973 = createNode("OrientationInterpolator");
OrientationInterpolator1973.DEF = "Stop_vt3_RotationInterpolator";
OrientationInterpolator1973.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1973.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[30] = OrientationInterpolator1973;

OrientationInterpolator OrientationInterpolator1974 = createNode("OrientationInterpolator");
OrientationInterpolator1974.DEF = "Stop_vt2_RotationInterpolator";
OrientationInterpolator1974.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1974.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[31] = OrientationInterpolator1974;

OrientationInterpolator OrientationInterpolator1975 = createNode("OrientationInterpolator");
OrientationInterpolator1975.DEF = "Stop_vt1_RotationInterpolator";
OrientationInterpolator1975.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1975.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[32] = OrientationInterpolator1975;

OrientationInterpolator OrientationInterpolator1976 = createNode("OrientationInterpolator");
OrientationInterpolator1976.DEF = "Stop_vc7_RotationInterpolator";
OrientationInterpolator1976.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1976.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[33] = OrientationInterpolator1976;

OrientationInterpolator OrientationInterpolator1977 = createNode("OrientationInterpolator");
OrientationInterpolator1977.DEF = "Stop_vc6_RotationInterpolator";
OrientationInterpolator1977.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1977.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[34] = OrientationInterpolator1977;

OrientationInterpolator OrientationInterpolator1978 = createNode("OrientationInterpolator");
OrientationInterpolator1978.DEF = "Stop_vc5_RotationInterpolator";
OrientationInterpolator1978.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1978.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[35] = OrientationInterpolator1978;

OrientationInterpolator OrientationInterpolator1979 = createNode("OrientationInterpolator");
OrientationInterpolator1979.DEF = "Stop_vc4_RotationInterpolator";
OrientationInterpolator1979.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1979.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[36] = OrientationInterpolator1979;

OrientationInterpolator OrientationInterpolator1980 = createNode("OrientationInterpolator");
OrientationInterpolator1980.DEF = "Stop_vc3_RotationInterpolator";
OrientationInterpolator1980.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1980.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[37] = OrientationInterpolator1980;

OrientationInterpolator OrientationInterpolator1981 = createNode("OrientationInterpolator");
OrientationInterpolator1981.DEF = "Stop_vc2_RotationInterpolator";
OrientationInterpolator1981.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1981.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[38] = OrientationInterpolator1981;

OrientationInterpolator OrientationInterpolator1982 = createNode("OrientationInterpolator");
OrientationInterpolator1982.DEF = "Stop_vc1_RotationInterpolator";
OrientationInterpolator1982.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1982.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[39] = OrientationInterpolator1982;

OrientationInterpolator OrientationInterpolator1983 = createNode("OrientationInterpolator");
OrientationInterpolator1983.DEF = "Stop_skullbase_RotationInterpolator";
OrientationInterpolator1983.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1983.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[40] = OrientationInterpolator1983;

OrientationInterpolator OrientationInterpolator1984 = createNode("OrientationInterpolator");
OrientationInterpolator1984.DEF = "Stop_l_eyeball_joint_RotationInterpolator";
OrientationInterpolator1984.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1984.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[41] = OrientationInterpolator1984;

OrientationInterpolator OrientationInterpolator1985 = createNode("OrientationInterpolator");
OrientationInterpolator1985.DEF = "Stop_r_eyeball_joint_RotationInterpolator";
OrientationInterpolator1985.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1985.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[42] = OrientationInterpolator1985;

OrientationInterpolator OrientationInterpolator1986 = createNode("OrientationInterpolator");
OrientationInterpolator1986.DEF = "Stop_l_sternoclavicular_RotationInterpolator";
OrientationInterpolator1986.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1986.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[43] = OrientationInterpolator1986;

OrientationInterpolator OrientationInterpolator1987 = createNode("OrientationInterpolator");
OrientationInterpolator1987.DEF = "Stop_l_acromioclavicular_RotationInterpolator";
OrientationInterpolator1987.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1987.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[44] = OrientationInterpolator1987;

OrientationInterpolator OrientationInterpolator1988 = createNode("OrientationInterpolator");
OrientationInterpolator1988.DEF = "Stop_l_shoulder_RotationInterpolator";
OrientationInterpolator1988.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1988.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[45] = OrientationInterpolator1988;

OrientationInterpolator OrientationInterpolator1989 = createNode("OrientationInterpolator");
OrientationInterpolator1989.DEF = "Stop_l_elbow_RotationInterpolator";
OrientationInterpolator1989.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1989.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[46] = OrientationInterpolator1989;

OrientationInterpolator OrientationInterpolator1990 = createNode("OrientationInterpolator");
OrientationInterpolator1990.DEF = "Stop_l_wrist_RotationInterpolator";
OrientationInterpolator1990.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1990.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[47] = OrientationInterpolator1990;

OrientationInterpolator OrientationInterpolator1991 = createNode("OrientationInterpolator");
OrientationInterpolator1991.DEF = "Stop_l_thumb1_RotationInterpolator";
OrientationInterpolator1991.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1991.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[48] = OrientationInterpolator1991;

OrientationInterpolator OrientationInterpolator1992 = createNode("OrientationInterpolator");
OrientationInterpolator1992.DEF = "Stop_l_thumb2_RotationInterpolator";
OrientationInterpolator1992.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1992.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[49] = OrientationInterpolator1992;

OrientationInterpolator OrientationInterpolator1993 = createNode("OrientationInterpolator");
OrientationInterpolator1993.DEF = "Stop_l_thumb3_RotationInterpolator";
OrientationInterpolator1993.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1993.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[50] = OrientationInterpolator1993;

OrientationInterpolator OrientationInterpolator1994 = createNode("OrientationInterpolator");
OrientationInterpolator1994.DEF = "Stop_l_index0_RotationInterpolator";
OrientationInterpolator1994.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1994.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[51] = OrientationInterpolator1994;

OrientationInterpolator OrientationInterpolator1995 = createNode("OrientationInterpolator");
OrientationInterpolator1995.DEF = "Stop_l_index1_RotationInterpolator";
OrientationInterpolator1995.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1995.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[52] = OrientationInterpolator1995;

OrientationInterpolator OrientationInterpolator1996 = createNode("OrientationInterpolator");
OrientationInterpolator1996.DEF = "Stop_l_index2_RotationInterpolator";
OrientationInterpolator1996.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1996.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[53] = OrientationInterpolator1996;

OrientationInterpolator OrientationInterpolator1997 = createNode("OrientationInterpolator");
OrientationInterpolator1997.DEF = "Stop_l_index3_RotationInterpolator";
OrientationInterpolator1997.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1997.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[54] = OrientationInterpolator1997;

OrientationInterpolator OrientationInterpolator1998 = createNode("OrientationInterpolator");
OrientationInterpolator1998.DEF = "Stop_l_middle0_RotationInterpolator";
OrientationInterpolator1998.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1998.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[55] = OrientationInterpolator1998;

OrientationInterpolator OrientationInterpolator1999 = createNode("OrientationInterpolator");
OrientationInterpolator1999.DEF = "Stop_l_middle1_RotationInterpolator";
OrientationInterpolator1999.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1999.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[56] = OrientationInterpolator1999;

OrientationInterpolator OrientationInterpolator2000 = createNode("OrientationInterpolator");
OrientationInterpolator2000.DEF = "Stop_l_middle2_RotationInterpolator";
OrientationInterpolator2000.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2000.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[57] = OrientationInterpolator2000;

OrientationInterpolator OrientationInterpolator2001 = createNode("OrientationInterpolator");
OrientationInterpolator2001.DEF = "Stop_l_middle3_RotationInterpolator";
OrientationInterpolator2001.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2001.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[58] = OrientationInterpolator2001;

OrientationInterpolator OrientationInterpolator2002 = createNode("OrientationInterpolator");
OrientationInterpolator2002.DEF = "Stop_l_ring0_RotationInterpolator";
OrientationInterpolator2002.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2002.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[59] = OrientationInterpolator2002;

OrientationInterpolator OrientationInterpolator2003 = createNode("OrientationInterpolator");
OrientationInterpolator2003.DEF = "Stop_l_ring1_RotationInterpolator";
OrientationInterpolator2003.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2003.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[60] = OrientationInterpolator2003;

OrientationInterpolator OrientationInterpolator2004 = createNode("OrientationInterpolator");
OrientationInterpolator2004.DEF = "Stop_l_ring2_RotationInterpolator";
OrientationInterpolator2004.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2004.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[61] = OrientationInterpolator2004;

OrientationInterpolator OrientationInterpolator2005 = createNode("OrientationInterpolator");
OrientationInterpolator2005.DEF = "Stop_l_ring3_RotationInterpolator";
OrientationInterpolator2005.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2005.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[62] = OrientationInterpolator2005;

OrientationInterpolator OrientationInterpolator2006 = createNode("OrientationInterpolator");
OrientationInterpolator2006.DEF = "Stop_l_pinky0_RotationInterpolator";
OrientationInterpolator2006.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2006.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[63] = OrientationInterpolator2006;

OrientationInterpolator OrientationInterpolator2007 = createNode("OrientationInterpolator");
OrientationInterpolator2007.DEF = "Stop_l_pinky1_RotationInterpolator";
OrientationInterpolator2007.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2007.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[64] = OrientationInterpolator2007;

OrientationInterpolator OrientationInterpolator2008 = createNode("OrientationInterpolator");
OrientationInterpolator2008.DEF = "Stop_l_pinky2_RotationInterpolator";
OrientationInterpolator2008.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2008.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[65] = OrientationInterpolator2008;

OrientationInterpolator OrientationInterpolator2009 = createNode("OrientationInterpolator");
OrientationInterpolator2009.DEF = "Stop_l_pinky3_RotationInterpolator";
OrientationInterpolator2009.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2009.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[66] = OrientationInterpolator2009;

OrientationInterpolator OrientationInterpolator2010 = createNode("OrientationInterpolator");
OrientationInterpolator2010.DEF = "Stop_r_sternoclavicular_RotationInterpolator";
OrientationInterpolator2010.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2010.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[67] = OrientationInterpolator2010;

OrientationInterpolator OrientationInterpolator2011 = createNode("OrientationInterpolator");
OrientationInterpolator2011.DEF = "Stop_r_acromioclavicular_RotationInterpolator";
OrientationInterpolator2011.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2011.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[68] = OrientationInterpolator2011;

OrientationInterpolator OrientationInterpolator2012 = createNode("OrientationInterpolator");
OrientationInterpolator2012.DEF = "Stop_r_shoulder_RotationInterpolator";
OrientationInterpolator2012.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2012.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[69] = OrientationInterpolator2012;

OrientationInterpolator OrientationInterpolator2013 = createNode("OrientationInterpolator");
OrientationInterpolator2013.DEF = "Stop_r_elbow_RotationInterpolator";
OrientationInterpolator2013.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2013.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[70] = OrientationInterpolator2013;

OrientationInterpolator OrientationInterpolator2014 = createNode("OrientationInterpolator");
OrientationInterpolator2014.DEF = "Stop_r_wrist_RotationInterpolator";
OrientationInterpolator2014.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2014.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[71] = OrientationInterpolator2014;

OrientationInterpolator OrientationInterpolator2015 = createNode("OrientationInterpolator");
OrientationInterpolator2015.DEF = "Stop_r_thumb1_RotationInterpolator";
OrientationInterpolator2015.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2015.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[72] = OrientationInterpolator2015;

OrientationInterpolator OrientationInterpolator2016 = createNode("OrientationInterpolator");
OrientationInterpolator2016.DEF = "Stop_r_thumb2_RotationInterpolator";
OrientationInterpolator2016.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2016.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[73] = OrientationInterpolator2016;

OrientationInterpolator OrientationInterpolator2017 = createNode("OrientationInterpolator");
OrientationInterpolator2017.DEF = "Stop_r_thumb3_RotationInterpolator";
OrientationInterpolator2017.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2017.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[74] = OrientationInterpolator2017;

OrientationInterpolator OrientationInterpolator2018 = createNode("OrientationInterpolator");
OrientationInterpolator2018.DEF = "Stop_r_index0_RotationInterpolator";
OrientationInterpolator2018.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2018.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[75] = OrientationInterpolator2018;

OrientationInterpolator OrientationInterpolator2019 = createNode("OrientationInterpolator");
OrientationInterpolator2019.DEF = "Stop_r_index1_RotationInterpolator";
OrientationInterpolator2019.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2019.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[76] = OrientationInterpolator2019;

OrientationInterpolator OrientationInterpolator2020 = createNode("OrientationInterpolator");
OrientationInterpolator2020.DEF = "Stop_r_index2_RotationInterpolator";
OrientationInterpolator2020.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2020.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[77] = OrientationInterpolator2020;

OrientationInterpolator OrientationInterpolator2021 = createNode("OrientationInterpolator");
OrientationInterpolator2021.DEF = "Stop_r_index3_RotationInterpolator";
OrientationInterpolator2021.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2021.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[78] = OrientationInterpolator2021;

OrientationInterpolator OrientationInterpolator2022 = createNode("OrientationInterpolator");
OrientationInterpolator2022.DEF = "Stop_r_middle0_RotationInterpolator";
OrientationInterpolator2022.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2022.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[79] = OrientationInterpolator2022;

OrientationInterpolator OrientationInterpolator2023 = createNode("OrientationInterpolator");
OrientationInterpolator2023.DEF = "Stop_r_middle1_RotationInterpolator";
OrientationInterpolator2023.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2023.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[80] = OrientationInterpolator2023;

OrientationInterpolator OrientationInterpolator2024 = createNode("OrientationInterpolator");
OrientationInterpolator2024.DEF = "Stop_r_middle2_RotationInterpolator";
OrientationInterpolator2024.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2024.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[81] = OrientationInterpolator2024;

OrientationInterpolator OrientationInterpolator2025 = createNode("OrientationInterpolator");
OrientationInterpolator2025.DEF = "Stop_r_middle3_RotationInterpolator";
OrientationInterpolator2025.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2025.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[82] = OrientationInterpolator2025;

OrientationInterpolator OrientationInterpolator2026 = createNode("OrientationInterpolator");
OrientationInterpolator2026.DEF = "Stop_r_ring0_RotationInterpolator";
OrientationInterpolator2026.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2026.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[83] = OrientationInterpolator2026;

OrientationInterpolator OrientationInterpolator2027 = createNode("OrientationInterpolator");
OrientationInterpolator2027.DEF = "Stop_r_ring1_RotationInterpolator";
OrientationInterpolator2027.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2027.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[84] = OrientationInterpolator2027;

OrientationInterpolator OrientationInterpolator2028 = createNode("OrientationInterpolator");
OrientationInterpolator2028.DEF = "Stop_r_ring2_RotationInterpolator";
OrientationInterpolator2028.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2028.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[85] = OrientationInterpolator2028;

OrientationInterpolator OrientationInterpolator2029 = createNode("OrientationInterpolator");
OrientationInterpolator2029.DEF = "Stop_r_ring3_RotationInterpolator";
OrientationInterpolator2029.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2029.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[86] = OrientationInterpolator2029;

OrientationInterpolator OrientationInterpolator2030 = createNode("OrientationInterpolator");
OrientationInterpolator2030.DEF = "Stop_r_pinky0_RotationInterpolator";
OrientationInterpolator2030.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2030.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[87] = OrientationInterpolator2030;

OrientationInterpolator OrientationInterpolator2031 = createNode("OrientationInterpolator");
OrientationInterpolator2031.DEF = "Stop_r_pinky1_RotationInterpolator";
OrientationInterpolator2031.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2031.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[88] = OrientationInterpolator2031;

OrientationInterpolator OrientationInterpolator2032 = createNode("OrientationInterpolator");
OrientationInterpolator2032.DEF = "Stop_r_pinky2_RotationInterpolator";
OrientationInterpolator2032.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2032.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[89] = OrientationInterpolator2032;

OrientationInterpolator OrientationInterpolator2033 = createNode("OrientationInterpolator");
OrientationInterpolator2033.DEF = "Stop_r_pinky3_RotationInterpolator";
OrientationInterpolator2033.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2033.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1942.children[90] = OrientationInterpolator2033;

ROUTE ROUTE2034 = createNode("ROUTE");
ROUTE2034.fromField = "fraction_changed";
ROUTE2034.fromNode = "StopTimer";
ROUTE2034.toField = "set_fraction";
ROUTE2034.toNode = "Stop_humanoid_root_TranslationInterpolator";
Group1942.children[91] = ROUTE2034;

ROUTE ROUTE2035 = createNode("ROUTE");
ROUTE2035.fromField = "fraction_changed";
ROUTE2035.fromNode = "StopTimer";
ROUTE2035.toField = "set_fraction";
ROUTE2035.toNode = "Stop_humanoid_root_RotationInterpolator";
Group1942.children[92] = ROUTE2035;

ROUTE ROUTE2036 = createNode("ROUTE");
ROUTE2036.fromField = "fraction_changed";
ROUTE2036.fromNode = "StopTimer";
ROUTE2036.toField = "set_fraction";
ROUTE2036.toNode = "Stop_sacroiliac_RotationInterpolator";
Group1942.children[93] = ROUTE2036;

ROUTE ROUTE2037 = createNode("ROUTE");
ROUTE2037.fromField = "fraction_changed";
ROUTE2037.fromNode = "StopTimer";
ROUTE2037.toField = "set_fraction";
ROUTE2037.toNode = "Stop_l_hip_RotationInterpolator";
Group1942.children[94] = ROUTE2037;

ROUTE ROUTE2038 = createNode("ROUTE");
ROUTE2038.fromField = "fraction_changed";
ROUTE2038.fromNode = "StopTimer";
ROUTE2038.toField = "set_fraction";
ROUTE2038.toNode = "Stop_l_knee_RotationInterpolator";
Group1942.children[95] = ROUTE2038;

ROUTE ROUTE2039 = createNode("ROUTE");
ROUTE2039.fromField = "fraction_changed";
ROUTE2039.fromNode = "StopTimer";
ROUTE2039.toField = "set_fraction";
ROUTE2039.toNode = "Stop_l_ankle_RotationInterpolator";
Group1942.children[96] = ROUTE2039;

ROUTE ROUTE2040 = createNode("ROUTE");
ROUTE2040.fromField = "fraction_changed";
ROUTE2040.fromNode = "StopTimer";
ROUTE2040.toField = "set_fraction";
ROUTE2040.toNode = "Stop_l_subtalar_RotationInterpolator";
Group1942.children[97] = ROUTE2040;

ROUTE ROUTE2041 = createNode("ROUTE");
ROUTE2041.fromField = "fraction_changed";
ROUTE2041.fromNode = "StopTimer";
ROUTE2041.toField = "set_fraction";
ROUTE2041.toNode = "Stop_l_midtarsal_RotationInterpolator";
Group1942.children[98] = ROUTE2041;

ROUTE ROUTE2042 = createNode("ROUTE");
ROUTE2042.fromField = "fraction_changed";
ROUTE2042.fromNode = "StopTimer";
ROUTE2042.toField = "set_fraction";
ROUTE2042.toNode = "Stop_l_metatarsal_RotationInterpolator";
Group1942.children[99] = ROUTE2042;

ROUTE ROUTE2043 = createNode("ROUTE");
ROUTE2043.fromField = "fraction_changed";
ROUTE2043.fromNode = "StopTimer";
ROUTE2043.toField = "set_fraction";
ROUTE2043.toNode = "Stop_r_hip_RotationInterpolator";
Group1942.children[100] = ROUTE2043;

ROUTE ROUTE2044 = createNode("ROUTE");
ROUTE2044.fromField = "fraction_changed";
ROUTE2044.fromNode = "StopTimer";
ROUTE2044.toField = "set_fraction";
ROUTE2044.toNode = "Stop_r_knee_RotationInterpolator";
Group1942.children[101] = ROUTE2044;

ROUTE ROUTE2045 = createNode("ROUTE");
ROUTE2045.fromField = "fraction_changed";
ROUTE2045.fromNode = "StopTimer";
ROUTE2045.toField = "set_fraction";
ROUTE2045.toNode = "Stop_r_ankle_RotationInterpolator";
Group1942.children[102] = ROUTE2045;

ROUTE ROUTE2046 = createNode("ROUTE");
ROUTE2046.fromField = "fraction_changed";
ROUTE2046.fromNode = "StopTimer";
ROUTE2046.toField = "set_fraction";
ROUTE2046.toNode = "Stop_r_subtalar_RotationInterpolator";
Group1942.children[103] = ROUTE2046;

ROUTE ROUTE2047 = createNode("ROUTE");
ROUTE2047.fromField = "fraction_changed";
ROUTE2047.fromNode = "StopTimer";
ROUTE2047.toField = "set_fraction";
ROUTE2047.toNode = "Stop_r_midtarsal_RotationInterpolator";
Group1942.children[104] = ROUTE2047;

ROUTE ROUTE2048 = createNode("ROUTE");
ROUTE2048.fromField = "fraction_changed";
ROUTE2048.fromNode = "StopTimer";
ROUTE2048.toField = "set_fraction";
ROUTE2048.toNode = "Stop_r_metatarsal_RotationInterpolator";
Group1942.children[105] = ROUTE2048;

ROUTE ROUTE2049 = createNode("ROUTE");
ROUTE2049.fromField = "fraction_changed";
ROUTE2049.fromNode = "StopTimer";
ROUTE2049.toField = "set_fraction";
ROUTE2049.toNode = "Stop_vl5_RotationInterpolator";
Group1942.children[106] = ROUTE2049;

ROUTE ROUTE2050 = createNode("ROUTE");
ROUTE2050.fromField = "fraction_changed";
ROUTE2050.fromNode = "StopTimer";
ROUTE2050.toField = "set_fraction";
ROUTE2050.toNode = "Stop_vl4_RotationInterpolator";
Group1942.children[107] = ROUTE2050;

ROUTE ROUTE2051 = createNode("ROUTE");
ROUTE2051.fromField = "fraction_changed";
ROUTE2051.fromNode = "StopTimer";
ROUTE2051.toField = "set_fraction";
ROUTE2051.toNode = "Stop_vl3_RotationInterpolator";
Group1942.children[108] = ROUTE2051;

ROUTE ROUTE2052 = createNode("ROUTE");
ROUTE2052.fromField = "fraction_changed";
ROUTE2052.fromNode = "StopTimer";
ROUTE2052.toField = "set_fraction";
ROUTE2052.toNode = "Stop_vl2_RotationInterpolator";
Group1942.children[109] = ROUTE2052;

ROUTE ROUTE2053 = createNode("ROUTE");
ROUTE2053.fromField = "fraction_changed";
ROUTE2053.fromNode = "StopTimer";
ROUTE2053.toField = "set_fraction";
ROUTE2053.toNode = "Stop_vl1_RotationInterpolator";
Group1942.children[110] = ROUTE2053;

ROUTE ROUTE2054 = createNode("ROUTE");
ROUTE2054.fromField = "fraction_changed";
ROUTE2054.fromNode = "StopTimer";
ROUTE2054.toField = "set_fraction";
ROUTE2054.toNode = "Stop_vt12_RotationInterpolator";
Group1942.children[111] = ROUTE2054;

ROUTE ROUTE2055 = createNode("ROUTE");
ROUTE2055.fromField = "fraction_changed";
ROUTE2055.fromNode = "StopTimer";
ROUTE2055.toField = "set_fraction";
ROUTE2055.toNode = "Stop_vt11_RotationInterpolator";
Group1942.children[112] = ROUTE2055;

ROUTE ROUTE2056 = createNode("ROUTE");
ROUTE2056.fromField = "fraction_changed";
ROUTE2056.fromNode = "StopTimer";
ROUTE2056.toField = "set_fraction";
ROUTE2056.toNode = "Stop_vt10_RotationInterpolator";
Group1942.children[113] = ROUTE2056;

ROUTE ROUTE2057 = createNode("ROUTE");
ROUTE2057.fromField = "fraction_changed";
ROUTE2057.fromNode = "StopTimer";
ROUTE2057.toField = "set_fraction";
ROUTE2057.toNode = "Stop_vt9_RotationInterpolator";
Group1942.children[114] = ROUTE2057;

ROUTE ROUTE2058 = createNode("ROUTE");
ROUTE2058.fromField = "fraction_changed";
ROUTE2058.fromNode = "StopTimer";
ROUTE2058.toField = "set_fraction";
ROUTE2058.toNode = "Stop_vt8_RotationInterpolator";
Group1942.children[115] = ROUTE2058;

ROUTE ROUTE2059 = createNode("ROUTE");
ROUTE2059.fromField = "fraction_changed";
ROUTE2059.fromNode = "StopTimer";
ROUTE2059.toField = "set_fraction";
ROUTE2059.toNode = "Stop_vt7_RotationInterpolator";
Group1942.children[116] = ROUTE2059;

ROUTE ROUTE2060 = createNode("ROUTE");
ROUTE2060.fromField = "fraction_changed";
ROUTE2060.fromNode = "StopTimer";
ROUTE2060.toField = "set_fraction";
ROUTE2060.toNode = "Stop_vt6_RotationInterpolator";
Group1942.children[117] = ROUTE2060;

ROUTE ROUTE2061 = createNode("ROUTE");
ROUTE2061.fromField = "fraction_changed";
ROUTE2061.fromNode = "StopTimer";
ROUTE2061.toField = "set_fraction";
ROUTE2061.toNode = "Stop_vt5_RotationInterpolator";
Group1942.children[118] = ROUTE2061;

ROUTE ROUTE2062 = createNode("ROUTE");
ROUTE2062.fromField = "fraction_changed";
ROUTE2062.fromNode = "StopTimer";
ROUTE2062.toField = "set_fraction";
ROUTE2062.toNode = "Stop_vt4_RotationInterpolator";
Group1942.children[119] = ROUTE2062;

ROUTE ROUTE2063 = createNode("ROUTE");
ROUTE2063.fromField = "fraction_changed";
ROUTE2063.fromNode = "StopTimer";
ROUTE2063.toField = "set_fraction";
ROUTE2063.toNode = "Stop_vt3_RotationInterpolator";
Group1942.children[120] = ROUTE2063;

ROUTE ROUTE2064 = createNode("ROUTE");
ROUTE2064.fromField = "fraction_changed";
ROUTE2064.fromNode = "StopTimer";
ROUTE2064.toField = "set_fraction";
ROUTE2064.toNode = "Stop_vt2_RotationInterpolator";
Group1942.children[121] = ROUTE2064;

ROUTE ROUTE2065 = createNode("ROUTE");
ROUTE2065.fromField = "fraction_changed";
ROUTE2065.fromNode = "StopTimer";
ROUTE2065.toField = "set_fraction";
ROUTE2065.toNode = "Stop_vt1_RotationInterpolator";
Group1942.children[122] = ROUTE2065;

ROUTE ROUTE2066 = createNode("ROUTE");
ROUTE2066.fromField = "fraction_changed";
ROUTE2066.fromNode = "StopTimer";
ROUTE2066.toField = "set_fraction";
ROUTE2066.toNode = "Stop_vc7_RotationInterpolator";
Group1942.children[123] = ROUTE2066;

ROUTE ROUTE2067 = createNode("ROUTE");
ROUTE2067.fromField = "fraction_changed";
ROUTE2067.fromNode = "StopTimer";
ROUTE2067.toField = "set_fraction";
ROUTE2067.toNode = "Stop_vc6_RotationInterpolator";
Group1942.children[124] = ROUTE2067;

ROUTE ROUTE2068 = createNode("ROUTE");
ROUTE2068.fromField = "fraction_changed";
ROUTE2068.fromNode = "StopTimer";
ROUTE2068.toField = "set_fraction";
ROUTE2068.toNode = "Stop_vc5_RotationInterpolator";
Group1942.children[125] = ROUTE2068;

ROUTE ROUTE2069 = createNode("ROUTE");
ROUTE2069.fromField = "fraction_changed";
ROUTE2069.fromNode = "StopTimer";
ROUTE2069.toField = "set_fraction";
ROUTE2069.toNode = "Stop_vc4_RotationInterpolator";
Group1942.children[126] = ROUTE2069;

ROUTE ROUTE2070 = createNode("ROUTE");
ROUTE2070.fromField = "fraction_changed";
ROUTE2070.fromNode = "StopTimer";
ROUTE2070.toField = "set_fraction";
ROUTE2070.toNode = "Stop_vc3_RotationInterpolator";
Group1942.children[127] = ROUTE2070;

ROUTE ROUTE2071 = createNode("ROUTE");
ROUTE2071.fromField = "fraction_changed";
ROUTE2071.fromNode = "StopTimer";
ROUTE2071.toField = "set_fraction";
ROUTE2071.toNode = "Stop_vc2_RotationInterpolator";
Group1942.children[128] = ROUTE2071;

ROUTE ROUTE2072 = createNode("ROUTE");
ROUTE2072.fromField = "fraction_changed";
ROUTE2072.fromNode = "StopTimer";
ROUTE2072.toField = "set_fraction";
ROUTE2072.toNode = "Stop_vc1_RotationInterpolator";
Group1942.children[129] = ROUTE2072;

ROUTE ROUTE2073 = createNode("ROUTE");
ROUTE2073.fromField = "fraction_changed";
ROUTE2073.fromNode = "StopTimer";
ROUTE2073.toField = "set_fraction";
ROUTE2073.toNode = "Stop_skullbase_RotationInterpolator";
Group1942.children[130] = ROUTE2073;

ROUTE ROUTE2074 = createNode("ROUTE");
ROUTE2074.fromField = "fraction_changed";
ROUTE2074.fromNode = "StopTimer";
ROUTE2074.toField = "set_fraction";
ROUTE2074.toNode = "Stop_l_eyeball_joint_RotationInterpolator";
Group1942.children[131] = ROUTE2074;

ROUTE ROUTE2075 = createNode("ROUTE");
ROUTE2075.fromField = "fraction_changed";
ROUTE2075.fromNode = "StopTimer";
ROUTE2075.toField = "set_fraction";
ROUTE2075.toNode = "Stop_r_eyeball_joint_RotationInterpolator";
Group1942.children[132] = ROUTE2075;

ROUTE ROUTE2076 = createNode("ROUTE");
ROUTE2076.fromField = "fraction_changed";
ROUTE2076.fromNode = "StopTimer";
ROUTE2076.toField = "set_fraction";
ROUTE2076.toNode = "Stop_l_sternoclavicular_RotationInterpolator";
Group1942.children[133] = ROUTE2076;

ROUTE ROUTE2077 = createNode("ROUTE");
ROUTE2077.fromField = "fraction_changed";
ROUTE2077.fromNode = "StopTimer";
ROUTE2077.toField = "set_fraction";
ROUTE2077.toNode = "Stop_l_acromioclavicular_RotationInterpolator";
Group1942.children[134] = ROUTE2077;

ROUTE ROUTE2078 = createNode("ROUTE");
ROUTE2078.fromField = "fraction_changed";
ROUTE2078.fromNode = "StopTimer";
ROUTE2078.toField = "set_fraction";
ROUTE2078.toNode = "Stop_l_shoulder_RotationInterpolator";
Group1942.children[135] = ROUTE2078;

ROUTE ROUTE2079 = createNode("ROUTE");
ROUTE2079.fromField = "fraction_changed";
ROUTE2079.fromNode = "StopTimer";
ROUTE2079.toField = "set_fraction";
ROUTE2079.toNode = "Stop_l_elbow_RotationInterpolator";
Group1942.children[136] = ROUTE2079;

ROUTE ROUTE2080 = createNode("ROUTE");
ROUTE2080.fromField = "fraction_changed";
ROUTE2080.fromNode = "StopTimer";
ROUTE2080.toField = "set_fraction";
ROUTE2080.toNode = "Stop_l_wrist_RotationInterpolator";
Group1942.children[137] = ROUTE2080;

ROUTE ROUTE2081 = createNode("ROUTE");
ROUTE2081.fromField = "fraction_changed";
ROUTE2081.fromNode = "StopTimer";
ROUTE2081.toField = "set_fraction";
ROUTE2081.toNode = "Stop_l_thumb1_RotationInterpolator";
Group1942.children[138] = ROUTE2081;

ROUTE ROUTE2082 = createNode("ROUTE");
ROUTE2082.fromField = "fraction_changed";
ROUTE2082.fromNode = "StopTimer";
ROUTE2082.toField = "set_fraction";
ROUTE2082.toNode = "Stop_l_thumb2_RotationInterpolator";
Group1942.children[139] = ROUTE2082;

ROUTE ROUTE2083 = createNode("ROUTE");
ROUTE2083.fromField = "fraction_changed";
ROUTE2083.fromNode = "StopTimer";
ROUTE2083.toField = "set_fraction";
ROUTE2083.toNode = "Stop_l_thumb3_RotationInterpolator";
Group1942.children[140] = ROUTE2083;

ROUTE ROUTE2084 = createNode("ROUTE");
ROUTE2084.fromField = "fraction_changed";
ROUTE2084.fromNode = "StopTimer";
ROUTE2084.toField = "set_fraction";
ROUTE2084.toNode = "Stop_l_index0_RotationInterpolator";
Group1942.children[141] = ROUTE2084;

ROUTE ROUTE2085 = createNode("ROUTE");
ROUTE2085.fromField = "fraction_changed";
ROUTE2085.fromNode = "StopTimer";
ROUTE2085.toField = "set_fraction";
ROUTE2085.toNode = "Stop_l_index1_RotationInterpolator";
Group1942.children[142] = ROUTE2085;

ROUTE ROUTE2086 = createNode("ROUTE");
ROUTE2086.fromField = "fraction_changed";
ROUTE2086.fromNode = "StopTimer";
ROUTE2086.toField = "set_fraction";
ROUTE2086.toNode = "Stop_l_index2_RotationInterpolator";
Group1942.children[143] = ROUTE2086;

ROUTE ROUTE2087 = createNode("ROUTE");
ROUTE2087.fromField = "fraction_changed";
ROUTE2087.fromNode = "StopTimer";
ROUTE2087.toField = "set_fraction";
ROUTE2087.toNode = "Stop_l_index3_RotationInterpolator";
Group1942.children[144] = ROUTE2087;

ROUTE ROUTE2088 = createNode("ROUTE");
ROUTE2088.fromField = "fraction_changed";
ROUTE2088.fromNode = "StopTimer";
ROUTE2088.toField = "set_fraction";
ROUTE2088.toNode = "Stop_l_middle0_RotationInterpolator";
Group1942.children[145] = ROUTE2088;

ROUTE ROUTE2089 = createNode("ROUTE");
ROUTE2089.fromField = "fraction_changed";
ROUTE2089.fromNode = "StopTimer";
ROUTE2089.toField = "set_fraction";
ROUTE2089.toNode = "Stop_l_middle1_RotationInterpolator";
Group1942.children[146] = ROUTE2089;

ROUTE ROUTE2090 = createNode("ROUTE");
ROUTE2090.fromField = "fraction_changed";
ROUTE2090.fromNode = "StopTimer";
ROUTE2090.toField = "set_fraction";
ROUTE2090.toNode = "Stop_l_middle2_RotationInterpolator";
Group1942.children[147] = ROUTE2090;

ROUTE ROUTE2091 = createNode("ROUTE");
ROUTE2091.fromField = "fraction_changed";
ROUTE2091.fromNode = "StopTimer";
ROUTE2091.toField = "set_fraction";
ROUTE2091.toNode = "Stop_l_middle3_RotationInterpolator";
Group1942.children[148] = ROUTE2091;

ROUTE ROUTE2092 = createNode("ROUTE");
ROUTE2092.fromField = "fraction_changed";
ROUTE2092.fromNode = "StopTimer";
ROUTE2092.toField = "set_fraction";
ROUTE2092.toNode = "Stop_l_ring0_RotationInterpolator";
Group1942.children[149] = ROUTE2092;

ROUTE ROUTE2093 = createNode("ROUTE");
ROUTE2093.fromField = "fraction_changed";
ROUTE2093.fromNode = "StopTimer";
ROUTE2093.toField = "set_fraction";
ROUTE2093.toNode = "Stop_l_ring1_RotationInterpolator";
Group1942.children[150] = ROUTE2093;

ROUTE ROUTE2094 = createNode("ROUTE");
ROUTE2094.fromField = "fraction_changed";
ROUTE2094.fromNode = "StopTimer";
ROUTE2094.toField = "set_fraction";
ROUTE2094.toNode = "Stop_l_ring2_RotationInterpolator";
Group1942.children[151] = ROUTE2094;

ROUTE ROUTE2095 = createNode("ROUTE");
ROUTE2095.fromField = "fraction_changed";
ROUTE2095.fromNode = "StopTimer";
ROUTE2095.toField = "set_fraction";
ROUTE2095.toNode = "Stop_l_ring3_RotationInterpolator";
Group1942.children[152] = ROUTE2095;

ROUTE ROUTE2096 = createNode("ROUTE");
ROUTE2096.fromField = "fraction_changed";
ROUTE2096.fromNode = "StopTimer";
ROUTE2096.toField = "set_fraction";
ROUTE2096.toNode = "Stop_l_pinky0_RotationInterpolator";
Group1942.children[153] = ROUTE2096;

ROUTE ROUTE2097 = createNode("ROUTE");
ROUTE2097.fromField = "fraction_changed";
ROUTE2097.fromNode = "StopTimer";
ROUTE2097.toField = "set_fraction";
ROUTE2097.toNode = "Stop_l_pinky1_RotationInterpolator";
Group1942.children[154] = ROUTE2097;

ROUTE ROUTE2098 = createNode("ROUTE");
ROUTE2098.fromField = "fraction_changed";
ROUTE2098.fromNode = "StopTimer";
ROUTE2098.toField = "set_fraction";
ROUTE2098.toNode = "Stop_l_pinky2_RotationInterpolator";
Group1942.children[155] = ROUTE2098;

ROUTE ROUTE2099 = createNode("ROUTE");
ROUTE2099.fromField = "fraction_changed";
ROUTE2099.fromNode = "StopTimer";
ROUTE2099.toField = "set_fraction";
ROUTE2099.toNode = "Stop_l_pinky3_RotationInterpolator";
Group1942.children[156] = ROUTE2099;

ROUTE ROUTE2100 = createNode("ROUTE");
ROUTE2100.fromField = "fraction_changed";
ROUTE2100.fromNode = "StopTimer";
ROUTE2100.toField = "set_fraction";
ROUTE2100.toNode = "Stop_r_sternoclavicular_RotationInterpolator";
Group1942.children[157] = ROUTE2100;

ROUTE ROUTE2101 = createNode("ROUTE");
ROUTE2101.fromField = "fraction_changed";
ROUTE2101.fromNode = "StopTimer";
ROUTE2101.toField = "set_fraction";
ROUTE2101.toNode = "Stop_r_acromioclavicular_RotationInterpolator";
Group1942.children[158] = ROUTE2101;

ROUTE ROUTE2102 = createNode("ROUTE");
ROUTE2102.fromField = "fraction_changed";
ROUTE2102.fromNode = "StopTimer";
ROUTE2102.toField = "set_fraction";
ROUTE2102.toNode = "Stop_r_shoulder_RotationInterpolator";
Group1942.children[159] = ROUTE2102;

ROUTE ROUTE2103 = createNode("ROUTE");
ROUTE2103.fromField = "fraction_changed";
ROUTE2103.fromNode = "StopTimer";
ROUTE2103.toField = "set_fraction";
ROUTE2103.toNode = "Stop_r_elbow_RotationInterpolator";
Group1942.children[160] = ROUTE2103;

ROUTE ROUTE2104 = createNode("ROUTE");
ROUTE2104.fromField = "fraction_changed";
ROUTE2104.fromNode = "StopTimer";
ROUTE2104.toField = "set_fraction";
ROUTE2104.toNode = "Stop_r_wrist_RotationInterpolator";
Group1942.children[161] = ROUTE2104;

ROUTE ROUTE2105 = createNode("ROUTE");
ROUTE2105.fromField = "fraction_changed";
ROUTE2105.fromNode = "StopTimer";
ROUTE2105.toField = "set_fraction";
ROUTE2105.toNode = "Stop_r_thumb1_RotationInterpolator";
Group1942.children[162] = ROUTE2105;

ROUTE ROUTE2106 = createNode("ROUTE");
ROUTE2106.fromField = "fraction_changed";
ROUTE2106.fromNode = "StopTimer";
ROUTE2106.toField = "set_fraction";
ROUTE2106.toNode = "Stop_r_thumb2_RotationInterpolator";
Group1942.children[163] = ROUTE2106;

ROUTE ROUTE2107 = createNode("ROUTE");
ROUTE2107.fromField = "fraction_changed";
ROUTE2107.fromNode = "StopTimer";
ROUTE2107.toField = "set_fraction";
ROUTE2107.toNode = "Stop_r_thumb3_RotationInterpolator";
Group1942.children[164] = ROUTE2107;

ROUTE ROUTE2108 = createNode("ROUTE");
ROUTE2108.fromField = "fraction_changed";
ROUTE2108.fromNode = "StopTimer";
ROUTE2108.toField = "set_fraction";
ROUTE2108.toNode = "Stop_r_index0_RotationInterpolator";
Group1942.children[165] = ROUTE2108;

ROUTE ROUTE2109 = createNode("ROUTE");
ROUTE2109.fromField = "fraction_changed";
ROUTE2109.fromNode = "StopTimer";
ROUTE2109.toField = "set_fraction";
ROUTE2109.toNode = "Stop_r_index1_RotationInterpolator";
Group1942.children[166] = ROUTE2109;

ROUTE ROUTE2110 = createNode("ROUTE");
ROUTE2110.fromField = "fraction_changed";
ROUTE2110.fromNode = "StopTimer";
ROUTE2110.toField = "set_fraction";
ROUTE2110.toNode = "Stop_r_index2_RotationInterpolator";
Group1942.children[167] = ROUTE2110;

ROUTE ROUTE2111 = createNode("ROUTE");
ROUTE2111.fromField = "fraction_changed";
ROUTE2111.fromNode = "StopTimer";
ROUTE2111.toField = "set_fraction";
ROUTE2111.toNode = "Stop_r_index3_RotationInterpolator";
Group1942.children[168] = ROUTE2111;

ROUTE ROUTE2112 = createNode("ROUTE");
ROUTE2112.fromField = "fraction_changed";
ROUTE2112.fromNode = "StopTimer";
ROUTE2112.toField = "set_fraction";
ROUTE2112.toNode = "Stop_r_middle0_RotationInterpolator";
Group1942.children[169] = ROUTE2112;

ROUTE ROUTE2113 = createNode("ROUTE");
ROUTE2113.fromField = "fraction_changed";
ROUTE2113.fromNode = "StopTimer";
ROUTE2113.toField = "set_fraction";
ROUTE2113.toNode = "Stop_r_middle1_RotationInterpolator";
Group1942.children[170] = ROUTE2113;

ROUTE ROUTE2114 = createNode("ROUTE");
ROUTE2114.fromField = "fraction_changed";
ROUTE2114.fromNode = "StopTimer";
ROUTE2114.toField = "set_fraction";
ROUTE2114.toNode = "Stop_r_middle2_RotationInterpolator";
Group1942.children[171] = ROUTE2114;

ROUTE ROUTE2115 = createNode("ROUTE");
ROUTE2115.fromField = "fraction_changed";
ROUTE2115.fromNode = "StopTimer";
ROUTE2115.toField = "set_fraction";
ROUTE2115.toNode = "Stop_r_middle3_RotationInterpolator";
Group1942.children[172] = ROUTE2115;

ROUTE ROUTE2116 = createNode("ROUTE");
ROUTE2116.fromField = "fraction_changed";
ROUTE2116.fromNode = "StopTimer";
ROUTE2116.toField = "set_fraction";
ROUTE2116.toNode = "Stop_r_ring0_RotationInterpolator";
Group1942.children[173] = ROUTE2116;

ROUTE ROUTE2117 = createNode("ROUTE");
ROUTE2117.fromField = "fraction_changed";
ROUTE2117.fromNode = "StopTimer";
ROUTE2117.toField = "set_fraction";
ROUTE2117.toNode = "Stop_r_ring1_RotationInterpolator";
Group1942.children[174] = ROUTE2117;

ROUTE ROUTE2118 = createNode("ROUTE");
ROUTE2118.fromField = "fraction_changed";
ROUTE2118.fromNode = "StopTimer";
ROUTE2118.toField = "set_fraction";
ROUTE2118.toNode = "Stop_r_ring2_RotationInterpolator";
Group1942.children[175] = ROUTE2118;

ROUTE ROUTE2119 = createNode("ROUTE");
ROUTE2119.fromField = "fraction_changed";
ROUTE2119.fromNode = "StopTimer";
ROUTE2119.toField = "set_fraction";
ROUTE2119.toNode = "Stop_r_ring3_RotationInterpolator";
Group1942.children[176] = ROUTE2119;

ROUTE ROUTE2120 = createNode("ROUTE");
ROUTE2120.fromField = "fraction_changed";
ROUTE2120.fromNode = "StopTimer";
ROUTE2120.toField = "set_fraction";
ROUTE2120.toNode = "Stop_r_pinky0_RotationInterpolator";
Group1942.children[177] = ROUTE2120;

ROUTE ROUTE2121 = createNode("ROUTE");
ROUTE2121.fromField = "fraction_changed";
ROUTE2121.fromNode = "StopTimer";
ROUTE2121.toField = "set_fraction";
ROUTE2121.toNode = "Stop_r_pinky1_RotationInterpolator";
Group1942.children[178] = ROUTE2121;

ROUTE ROUTE2122 = createNode("ROUTE");
ROUTE2122.fromField = "fraction_changed";
ROUTE2122.fromNode = "StopTimer";
ROUTE2122.toField = "set_fraction";
ROUTE2122.toNode = "Stop_r_pinky2_RotationInterpolator";
Group1942.children[179] = ROUTE2122;

ROUTE ROUTE2123 = createNode("ROUTE");
ROUTE2123.fromField = "fraction_changed";
ROUTE2123.fromNode = "StopTimer";
ROUTE2123.toField = "set_fraction";
ROUTE2123.toNode = "Stop_r_pinky3_RotationInterpolator";
Group1942.children[180] = ROUTE2123;

ROUTE ROUTE2124 = createNode("ROUTE");
ROUTE2124.fromField = "value_changed";
ROUTE2124.fromNode = "Stop_humanoid_root_TranslationInterpolator";
ROUTE2124.toField = "translation";
ROUTE2124.toNode = "hanim_humanoid_root";
Group1942.children[181] = ROUTE2124;

ROUTE ROUTE2125 = createNode("ROUTE");
ROUTE2125.fromField = "value_changed";
ROUTE2125.fromNode = "Stop_humanoid_root_RotationInterpolator";
ROUTE2125.toField = "rotation";
ROUTE2125.toNode = "hanim_humanoid_root";
Group1942.children[182] = ROUTE2125;

ROUTE ROUTE2126 = createNode("ROUTE");
ROUTE2126.fromField = "value_changed";
ROUTE2126.fromNode = "Stop_sacroiliac_RotationInterpolator";
ROUTE2126.toField = "rotation";
ROUTE2126.toNode = "hanim_sacroiliac";
Group1942.children[183] = ROUTE2126;

ROUTE ROUTE2127 = createNode("ROUTE");
ROUTE2127.fromField = "value_changed";
ROUTE2127.fromNode = "Stop_l_hip_RotationInterpolator";
ROUTE2127.toField = "rotation";
ROUTE2127.toNode = "hanim_l_hip";
Group1942.children[184] = ROUTE2127;

ROUTE ROUTE2128 = createNode("ROUTE");
ROUTE2128.fromField = "value_changed";
ROUTE2128.fromNode = "Stop_l_knee_RotationInterpolator";
ROUTE2128.toField = "rotation";
ROUTE2128.toNode = "hanim_l_knee";
Group1942.children[185] = ROUTE2128;

ROUTE ROUTE2129 = createNode("ROUTE");
ROUTE2129.fromField = "value_changed";
ROUTE2129.fromNode = "Stop_l_ankle_RotationInterpolator";
ROUTE2129.toField = "rotation";
ROUTE2129.toNode = "hanim_l_ankle";
Group1942.children[186] = ROUTE2129;

ROUTE ROUTE2130 = createNode("ROUTE");
ROUTE2130.fromField = "value_changed";
ROUTE2130.fromNode = "Stop_l_subtalar_RotationInterpolator";
ROUTE2130.toField = "rotation";
ROUTE2130.toNode = "hanim_l_subtalar";
Group1942.children[187] = ROUTE2130;

ROUTE ROUTE2131 = createNode("ROUTE");
ROUTE2131.fromField = "value_changed";
ROUTE2131.fromNode = "Stop_l_midtarsal_RotationInterpolator";
ROUTE2131.toField = "rotation";
ROUTE2131.toNode = "hanim_l_midtarsal";
Group1942.children[188] = ROUTE2131;

ROUTE ROUTE2132 = createNode("ROUTE");
ROUTE2132.fromField = "value_changed";
ROUTE2132.fromNode = "Stop_l_metatarsal_RotationInterpolator";
ROUTE2132.toField = "rotation";
ROUTE2132.toNode = "hanim_l_metatarsal";
Group1942.children[189] = ROUTE2132;

ROUTE ROUTE2133 = createNode("ROUTE");
ROUTE2133.fromField = "value_changed";
ROUTE2133.fromNode = "Stop_r_hip_RotationInterpolator";
ROUTE2133.toField = "rotation";
ROUTE2133.toNode = "hanim_r_hip";
Group1942.children[190] = ROUTE2133;

ROUTE ROUTE2134 = createNode("ROUTE");
ROUTE2134.fromField = "value_changed";
ROUTE2134.fromNode = "Stop_r_knee_RotationInterpolator";
ROUTE2134.toField = "rotation";
ROUTE2134.toNode = "hanim_r_knee";
Group1942.children[191] = ROUTE2134;

ROUTE ROUTE2135 = createNode("ROUTE");
ROUTE2135.fromField = "value_changed";
ROUTE2135.fromNode = "Stop_r_ankle_RotationInterpolator";
ROUTE2135.toField = "rotation";
ROUTE2135.toNode = "hanim_r_ankle";
Group1942.children[192] = ROUTE2135;

ROUTE ROUTE2136 = createNode("ROUTE");
ROUTE2136.fromField = "value_changed";
ROUTE2136.fromNode = "Stop_r_subtalar_RotationInterpolator";
ROUTE2136.toField = "rotation";
ROUTE2136.toNode = "hanim_r_subtalar";
Group1942.children[193] = ROUTE2136;

ROUTE ROUTE2137 = createNode("ROUTE");
ROUTE2137.fromField = "value_changed";
ROUTE2137.fromNode = "Stop_r_midtarsal_RotationInterpolator";
ROUTE2137.toField = "rotation";
ROUTE2137.toNode = "hanim_r_midtarsal";
Group1942.children[194] = ROUTE2137;

ROUTE ROUTE2138 = createNode("ROUTE");
ROUTE2138.fromField = "value_changed";
ROUTE2138.fromNode = "Stop_r_metatarsal_RotationInterpolator";
ROUTE2138.toField = "rotation";
ROUTE2138.toNode = "hanim_r_metatarsal";
Group1942.children[195] = ROUTE2138;

ROUTE ROUTE2139 = createNode("ROUTE");
ROUTE2139.fromField = "value_changed";
ROUTE2139.fromNode = "Stop_vl5_RotationInterpolator";
ROUTE2139.toField = "rotation";
ROUTE2139.toNode = "hanim_vl5";
Group1942.children[196] = ROUTE2139;

ROUTE ROUTE2140 = createNode("ROUTE");
ROUTE2140.fromField = "value_changed";
ROUTE2140.fromNode = "Stop_vl4_RotationInterpolator";
ROUTE2140.toField = "rotation";
ROUTE2140.toNode = "hanim_vl4";
Group1942.children[197] = ROUTE2140;

ROUTE ROUTE2141 = createNode("ROUTE");
ROUTE2141.fromField = "value_changed";
ROUTE2141.fromNode = "Stop_vl3_RotationInterpolator";
ROUTE2141.toField = "rotation";
ROUTE2141.toNode = "hanim_vl3";
Group1942.children[198] = ROUTE2141;

ROUTE ROUTE2142 = createNode("ROUTE");
ROUTE2142.fromField = "value_changed";
ROUTE2142.fromNode = "Stop_vl2_RotationInterpolator";
ROUTE2142.toField = "rotation";
ROUTE2142.toNode = "hanim_vl2";
Group1942.children[199] = ROUTE2142;

ROUTE ROUTE2143 = createNode("ROUTE");
ROUTE2143.fromField = "value_changed";
ROUTE2143.fromNode = "Stop_vl1_RotationInterpolator";
ROUTE2143.toField = "rotation";
ROUTE2143.toNode = "hanim_vl1";
Group1942.children[200] = ROUTE2143;

ROUTE ROUTE2144 = createNode("ROUTE");
ROUTE2144.fromField = "value_changed";
ROUTE2144.fromNode = "Stop_vt12_RotationInterpolator";
ROUTE2144.toField = "rotation";
ROUTE2144.toNode = "hanim_vt12";
Group1942.children[201] = ROUTE2144;

ROUTE ROUTE2145 = createNode("ROUTE");
ROUTE2145.fromField = "value_changed";
ROUTE2145.fromNode = "Stop_vt11_RotationInterpolator";
ROUTE2145.toField = "rotation";
ROUTE2145.toNode = "hanim_vt11";
Group1942.children[202] = ROUTE2145;

ROUTE ROUTE2146 = createNode("ROUTE");
ROUTE2146.fromField = "value_changed";
ROUTE2146.fromNode = "Stop_vt10_RotationInterpolator";
ROUTE2146.toField = "rotation";
ROUTE2146.toNode = "hanim_vt10";
Group1942.children[203] = ROUTE2146;

ROUTE ROUTE2147 = createNode("ROUTE");
ROUTE2147.fromField = "value_changed";
ROUTE2147.fromNode = "Stop_vt9_RotationInterpolator";
ROUTE2147.toField = "rotation";
ROUTE2147.toNode = "hanim_vt9";
Group1942.children[204] = ROUTE2147;

ROUTE ROUTE2148 = createNode("ROUTE");
ROUTE2148.fromField = "value_changed";
ROUTE2148.fromNode = "Stop_vt8_RotationInterpolator";
ROUTE2148.toField = "rotation";
ROUTE2148.toNode = "hanim_vt8";
Group1942.children[205] = ROUTE2148;

ROUTE ROUTE2149 = createNode("ROUTE");
ROUTE2149.fromField = "value_changed";
ROUTE2149.fromNode = "Stop_vt7_RotationInterpolator";
ROUTE2149.toField = "rotation";
ROUTE2149.toNode = "hanim_vt7";
Group1942.children[206] = ROUTE2149;

ROUTE ROUTE2150 = createNode("ROUTE");
ROUTE2150.fromField = "value_changed";
ROUTE2150.fromNode = "Stop_vt6_RotationInterpolator";
ROUTE2150.toField = "rotation";
ROUTE2150.toNode = "hanim_vt6";
Group1942.children[207] = ROUTE2150;

ROUTE ROUTE2151 = createNode("ROUTE");
ROUTE2151.fromField = "value_changed";
ROUTE2151.fromNode = "Stop_vt5_RotationInterpolator";
ROUTE2151.toField = "rotation";
ROUTE2151.toNode = "hanim_vt5";
Group1942.children[208] = ROUTE2151;

ROUTE ROUTE2152 = createNode("ROUTE");
ROUTE2152.fromField = "value_changed";
ROUTE2152.fromNode = "Stop_vt4_RotationInterpolator";
ROUTE2152.toField = "rotation";
ROUTE2152.toNode = "hanim_vt4";
Group1942.children[209] = ROUTE2152;

ROUTE ROUTE2153 = createNode("ROUTE");
ROUTE2153.fromField = "value_changed";
ROUTE2153.fromNode = "Stop_vt3_RotationInterpolator";
ROUTE2153.toField = "rotation";
ROUTE2153.toNode = "hanim_vt3";
Group1942.children[210] = ROUTE2153;

ROUTE ROUTE2154 = createNode("ROUTE");
ROUTE2154.fromField = "value_changed";
ROUTE2154.fromNode = "Stop_vt2_RotationInterpolator";
ROUTE2154.toField = "rotation";
ROUTE2154.toNode = "hanim_vt2";
Group1942.children[211] = ROUTE2154;

ROUTE ROUTE2155 = createNode("ROUTE");
ROUTE2155.fromField = "value_changed";
ROUTE2155.fromNode = "Stop_vt1_RotationInterpolator";
ROUTE2155.toField = "rotation";
ROUTE2155.toNode = "hanim_vt1";
Group1942.children[212] = ROUTE2155;

ROUTE ROUTE2156 = createNode("ROUTE");
ROUTE2156.fromField = "value_changed";
ROUTE2156.fromNode = "Stop_vc7_RotationInterpolator";
ROUTE2156.toField = "rotation";
ROUTE2156.toNode = "hanim_vc7";
Group1942.children[213] = ROUTE2156;

ROUTE ROUTE2157 = createNode("ROUTE");
ROUTE2157.fromField = "value_changed";
ROUTE2157.fromNode = "Stop_vc6_RotationInterpolator";
ROUTE2157.toField = "rotation";
ROUTE2157.toNode = "hanim_vc6";
Group1942.children[214] = ROUTE2157;

ROUTE ROUTE2158 = createNode("ROUTE");
ROUTE2158.fromField = "value_changed";
ROUTE2158.fromNode = "Stop_vc5_RotationInterpolator";
ROUTE2158.toField = "rotation";
ROUTE2158.toNode = "hanim_vc5";
Group1942.children[215] = ROUTE2158;

ROUTE ROUTE2159 = createNode("ROUTE");
ROUTE2159.fromField = "value_changed";
ROUTE2159.fromNode = "Stop_vc4_RotationInterpolator";
ROUTE2159.toField = "rotation";
ROUTE2159.toNode = "hanim_vc4";
Group1942.children[216] = ROUTE2159;

ROUTE ROUTE2160 = createNode("ROUTE");
ROUTE2160.fromField = "value_changed";
ROUTE2160.fromNode = "Stop_vc3_RotationInterpolator";
ROUTE2160.toField = "rotation";
ROUTE2160.toNode = "hanim_vc3";
Group1942.children[217] = ROUTE2160;

ROUTE ROUTE2161 = createNode("ROUTE");
ROUTE2161.fromField = "value_changed";
ROUTE2161.fromNode = "Stop_vc2_RotationInterpolator";
ROUTE2161.toField = "rotation";
ROUTE2161.toNode = "hanim_vc2";
Group1942.children[218] = ROUTE2161;

ROUTE ROUTE2162 = createNode("ROUTE");
ROUTE2162.fromField = "value_changed";
ROUTE2162.fromNode = "Stop_vc1_RotationInterpolator";
ROUTE2162.toField = "rotation";
ROUTE2162.toNode = "hanim_vc1";
Group1942.children[219] = ROUTE2162;

ROUTE ROUTE2163 = createNode("ROUTE");
ROUTE2163.fromField = "value_changed";
ROUTE2163.fromNode = "Stop_skullbase_RotationInterpolator";
ROUTE2163.toField = "rotation";
ROUTE2163.toNode = "hanim_skullbase";
Group1942.children[220] = ROUTE2163;

ROUTE ROUTE2164 = createNode("ROUTE");
ROUTE2164.fromField = "value_changed";
ROUTE2164.fromNode = "Stop_l_eyeball_joint_RotationInterpolator";
ROUTE2164.toField = "rotation";
ROUTE2164.toNode = "hanim_l_eyeball_joint";
Group1942.children[221] = ROUTE2164;

ROUTE ROUTE2165 = createNode("ROUTE");
ROUTE2165.fromField = "value_changed";
ROUTE2165.fromNode = "Stop_r_eyeball_joint_RotationInterpolator";
ROUTE2165.toField = "rotation";
ROUTE2165.toNode = "hanim_r_eyeball_joint";
Group1942.children[222] = ROUTE2165;

ROUTE ROUTE2166 = createNode("ROUTE");
ROUTE2166.fromField = "value_changed";
ROUTE2166.fromNode = "Stop_l_sternoclavicular_RotationInterpolator";
ROUTE2166.toField = "rotation";
ROUTE2166.toNode = "hanim_l_sternoclavicular";
Group1942.children[223] = ROUTE2166;

ROUTE ROUTE2167 = createNode("ROUTE");
ROUTE2167.fromField = "value_changed";
ROUTE2167.fromNode = "Stop_l_acromioclavicular_RotationInterpolator";
ROUTE2167.toField = "rotation";
ROUTE2167.toNode = "hanim_l_acromioclavicular";
Group1942.children[224] = ROUTE2167;

ROUTE ROUTE2168 = createNode("ROUTE");
ROUTE2168.fromField = "value_changed";
ROUTE2168.fromNode = "Stop_l_shoulder_RotationInterpolator";
ROUTE2168.toField = "rotation";
ROUTE2168.toNode = "hanim_l_shoulder";
Group1942.children[225] = ROUTE2168;

ROUTE ROUTE2169 = createNode("ROUTE");
ROUTE2169.fromField = "value_changed";
ROUTE2169.fromNode = "Stop_l_elbow_RotationInterpolator";
ROUTE2169.toField = "rotation";
ROUTE2169.toNode = "hanim_l_elbow";
Group1942.children[226] = ROUTE2169;

ROUTE ROUTE2170 = createNode("ROUTE");
ROUTE2170.fromField = "value_changed";
ROUTE2170.fromNode = "Stop_l_wrist_RotationInterpolator";
ROUTE2170.toField = "rotation";
ROUTE2170.toNode = "hanim_l_wrist";
Group1942.children[227] = ROUTE2170;

ROUTE ROUTE2171 = createNode("ROUTE");
ROUTE2171.fromField = "value_changed";
ROUTE2171.fromNode = "Stop_l_thumb1_RotationInterpolator";
ROUTE2171.toField = "rotation";
ROUTE2171.toNode = "hanim_l_thumb1";
Group1942.children[228] = ROUTE2171;

ROUTE ROUTE2172 = createNode("ROUTE");
ROUTE2172.fromField = "value_changed";
ROUTE2172.fromNode = "Stop_l_thumb2_RotationInterpolator";
ROUTE2172.toField = "rotation";
ROUTE2172.toNode = "hanim_l_thumb2";
Group1942.children[229] = ROUTE2172;

ROUTE ROUTE2173 = createNode("ROUTE");
ROUTE2173.fromField = "value_changed";
ROUTE2173.fromNode = "Stop_l_thumb3_RotationInterpolator";
ROUTE2173.toField = "rotation";
ROUTE2173.toNode = "hanim_l_thumb3";
Group1942.children[230] = ROUTE2173;

ROUTE ROUTE2174 = createNode("ROUTE");
ROUTE2174.fromField = "value_changed";
ROUTE2174.fromNode = "Stop_l_index0_RotationInterpolator";
ROUTE2174.toField = "rotation";
ROUTE2174.toNode = "hanim_l_index0";
Group1942.children[231] = ROUTE2174;

ROUTE ROUTE2175 = createNode("ROUTE");
ROUTE2175.fromField = "value_changed";
ROUTE2175.fromNode = "Stop_l_index1_RotationInterpolator";
ROUTE2175.toField = "rotation";
ROUTE2175.toNode = "hanim_l_index1";
Group1942.children[232] = ROUTE2175;

ROUTE ROUTE2176 = createNode("ROUTE");
ROUTE2176.fromField = "value_changed";
ROUTE2176.fromNode = "Stop_l_index2_RotationInterpolator";
ROUTE2176.toField = "rotation";
ROUTE2176.toNode = "hanim_l_index2";
Group1942.children[233] = ROUTE2176;

ROUTE ROUTE2177 = createNode("ROUTE");
ROUTE2177.fromField = "value_changed";
ROUTE2177.fromNode = "Stop_l_index3_RotationInterpolator";
ROUTE2177.toField = "rotation";
ROUTE2177.toNode = "hanim_l_index3";
Group1942.children[234] = ROUTE2177;

ROUTE ROUTE2178 = createNode("ROUTE");
ROUTE2178.fromField = "value_changed";
ROUTE2178.fromNode = "Stop_l_middle0_RotationInterpolator";
ROUTE2178.toField = "rotation";
ROUTE2178.toNode = "hanim_l_middle0";
Group1942.children[235] = ROUTE2178;

ROUTE ROUTE2179 = createNode("ROUTE");
ROUTE2179.fromField = "value_changed";
ROUTE2179.fromNode = "Stop_l_middle1_RotationInterpolator";
ROUTE2179.toField = "rotation";
ROUTE2179.toNode = "hanim_l_middle1";
Group1942.children[236] = ROUTE2179;

ROUTE ROUTE2180 = createNode("ROUTE");
ROUTE2180.fromField = "value_changed";
ROUTE2180.fromNode = "Stop_l_middle2_RotationInterpolator";
ROUTE2180.toField = "rotation";
ROUTE2180.toNode = "hanim_l_middle2";
Group1942.children[237] = ROUTE2180;

ROUTE ROUTE2181 = createNode("ROUTE");
ROUTE2181.fromField = "value_changed";
ROUTE2181.fromNode = "Stop_l_middle3_RotationInterpolator";
ROUTE2181.toField = "rotation";
ROUTE2181.toNode = "hanim_l_middle3";
Group1942.children[238] = ROUTE2181;

ROUTE ROUTE2182 = createNode("ROUTE");
ROUTE2182.fromField = "value_changed";
ROUTE2182.fromNode = "Stop_l_ring0_RotationInterpolator";
ROUTE2182.toField = "rotation";
ROUTE2182.toNode = "hanim_l_ring0";
Group1942.children[239] = ROUTE2182;

ROUTE ROUTE2183 = createNode("ROUTE");
ROUTE2183.fromField = "value_changed";
ROUTE2183.fromNode = "Stop_l_ring1_RotationInterpolator";
ROUTE2183.toField = "rotation";
ROUTE2183.toNode = "hanim_l_ring1";
Group1942.children[240] = ROUTE2183;

ROUTE ROUTE2184 = createNode("ROUTE");
ROUTE2184.fromField = "value_changed";
ROUTE2184.fromNode = "Stop_l_ring2_RotationInterpolator";
ROUTE2184.toField = "rotation";
ROUTE2184.toNode = "hanim_l_ring2";
Group1942.children[241] = ROUTE2184;

ROUTE ROUTE2185 = createNode("ROUTE");
ROUTE2185.fromField = "value_changed";
ROUTE2185.fromNode = "Stop_l_ring3_RotationInterpolator";
ROUTE2185.toField = "rotation";
ROUTE2185.toNode = "hanim_l_ring3";
Group1942.children[242] = ROUTE2185;

ROUTE ROUTE2186 = createNode("ROUTE");
ROUTE2186.fromField = "value_changed";
ROUTE2186.fromNode = "Stop_l_pinky0_RotationInterpolator";
ROUTE2186.toField = "rotation";
ROUTE2186.toNode = "hanim_l_pinky0";
Group1942.children[243] = ROUTE2186;

ROUTE ROUTE2187 = createNode("ROUTE");
ROUTE2187.fromField = "value_changed";
ROUTE2187.fromNode = "Stop_l_pinky1_RotationInterpolator";
ROUTE2187.toField = "rotation";
ROUTE2187.toNode = "hanim_l_pinky1";
Group1942.children[244] = ROUTE2187;

ROUTE ROUTE2188 = createNode("ROUTE");
ROUTE2188.fromField = "value_changed";
ROUTE2188.fromNode = "Stop_l_pinky2_RotationInterpolator";
ROUTE2188.toField = "rotation";
ROUTE2188.toNode = "hanim_l_pinky2";
Group1942.children[245] = ROUTE2188;

ROUTE ROUTE2189 = createNode("ROUTE");
ROUTE2189.fromField = "value_changed";
ROUTE2189.fromNode = "Stop_l_pinky3_RotationInterpolator";
ROUTE2189.toField = "rotation";
ROUTE2189.toNode = "hanim_l_pinky3";
Group1942.children[246] = ROUTE2189;

ROUTE ROUTE2190 = createNode("ROUTE");
ROUTE2190.fromField = "value_changed";
ROUTE2190.fromNode = "Stop_r_sternoclavicular_RotationInterpolator";
ROUTE2190.toField = "rotation";
ROUTE2190.toNode = "hanim_r_sternoclavicular";
Group1942.children[247] = ROUTE2190;

ROUTE ROUTE2191 = createNode("ROUTE");
ROUTE2191.fromField = "value_changed";
ROUTE2191.fromNode = "Stop_r_acromioclavicular_RotationInterpolator";
ROUTE2191.toField = "rotation";
ROUTE2191.toNode = "hanim_r_acromioclavicular";
Group1942.children[248] = ROUTE2191;

ROUTE ROUTE2192 = createNode("ROUTE");
ROUTE2192.fromField = "value_changed";
ROUTE2192.fromNode = "Stop_r_shoulder_RotationInterpolator";
ROUTE2192.toField = "rotation";
ROUTE2192.toNode = "hanim_r_shoulder";
Group1942.children[249] = ROUTE2192;

ROUTE ROUTE2193 = createNode("ROUTE");
ROUTE2193.fromField = "value_changed";
ROUTE2193.fromNode = "Stop_r_elbow_RotationInterpolator";
ROUTE2193.toField = "rotation";
ROUTE2193.toNode = "hanim_r_elbow";
Group1942.children[250] = ROUTE2193;

ROUTE ROUTE2194 = createNode("ROUTE");
ROUTE2194.fromField = "value_changed";
ROUTE2194.fromNode = "Stop_r_wrist_RotationInterpolator";
ROUTE2194.toField = "rotation";
ROUTE2194.toNode = "hanim_r_wrist";
Group1942.children[251] = ROUTE2194;

ROUTE ROUTE2195 = createNode("ROUTE");
ROUTE2195.fromField = "value_changed";
ROUTE2195.fromNode = "Stop_r_thumb1_RotationInterpolator";
ROUTE2195.toField = "rotation";
ROUTE2195.toNode = "hanim_r_thumb1";
Group1942.children[252] = ROUTE2195;

ROUTE ROUTE2196 = createNode("ROUTE");
ROUTE2196.fromField = "value_changed";
ROUTE2196.fromNode = "Stop_r_thumb2_RotationInterpolator";
ROUTE2196.toField = "rotation";
ROUTE2196.toNode = "hanim_r_thumb2";
Group1942.children[253] = ROUTE2196;

ROUTE ROUTE2197 = createNode("ROUTE");
ROUTE2197.fromField = "value_changed";
ROUTE2197.fromNode = "Stop_r_thumb3_RotationInterpolator";
ROUTE2197.toField = "rotation";
ROUTE2197.toNode = "hanim_r_thumb3";
Group1942.children[254] = ROUTE2197;

ROUTE ROUTE2198 = createNode("ROUTE");
ROUTE2198.fromField = "value_changed";
ROUTE2198.fromNode = "Stop_r_index0_RotationInterpolator";
ROUTE2198.toField = "rotation";
ROUTE2198.toNode = "hanim_r_index0";
Group1942.children[255] = ROUTE2198;

ROUTE ROUTE2199 = createNode("ROUTE");
ROUTE2199.fromField = "value_changed";
ROUTE2199.fromNode = "Stop_r_index1_RotationInterpolator";
ROUTE2199.toField = "rotation";
ROUTE2199.toNode = "hanim_r_index1";
Group1942.children[256] = ROUTE2199;

ROUTE ROUTE2200 = createNode("ROUTE");
ROUTE2200.fromField = "value_changed";
ROUTE2200.fromNode = "Stop_r_index2_RotationInterpolator";
ROUTE2200.toField = "rotation";
ROUTE2200.toNode = "hanim_r_index2";
Group1942.children[257] = ROUTE2200;

ROUTE ROUTE2201 = createNode("ROUTE");
ROUTE2201.fromField = "value_changed";
ROUTE2201.fromNode = "Stop_r_index3_RotationInterpolator";
ROUTE2201.toField = "rotation";
ROUTE2201.toNode = "hanim_r_index3";
Group1942.children[258] = ROUTE2201;

ROUTE ROUTE2202 = createNode("ROUTE");
ROUTE2202.fromField = "value_changed";
ROUTE2202.fromNode = "Stop_r_middle0_RotationInterpolator";
ROUTE2202.toField = "rotation";
ROUTE2202.toNode = "hanim_r_middle0";
Group1942.children[259] = ROUTE2202;

ROUTE ROUTE2203 = createNode("ROUTE");
ROUTE2203.fromField = "value_changed";
ROUTE2203.fromNode = "Stop_r_middle1_RotationInterpolator";
ROUTE2203.toField = "rotation";
ROUTE2203.toNode = "hanim_r_middle1";
Group1942.children[260] = ROUTE2203;

ROUTE ROUTE2204 = createNode("ROUTE");
ROUTE2204.fromField = "value_changed";
ROUTE2204.fromNode = "Stop_r_middle2_RotationInterpolator";
ROUTE2204.toField = "rotation";
ROUTE2204.toNode = "hanim_r_middle2";
Group1942.children[261] = ROUTE2204;

ROUTE ROUTE2205 = createNode("ROUTE");
ROUTE2205.fromField = "value_changed";
ROUTE2205.fromNode = "Stop_r_middle3_RotationInterpolator";
ROUTE2205.toField = "rotation";
ROUTE2205.toNode = "hanim_r_middle3";
Group1942.children[262] = ROUTE2205;

ROUTE ROUTE2206 = createNode("ROUTE");
ROUTE2206.fromField = "value_changed";
ROUTE2206.fromNode = "Stop_r_ring0_RotationInterpolator";
ROUTE2206.toField = "rotation";
ROUTE2206.toNode = "hanim_r_ring0";
Group1942.children[263] = ROUTE2206;

ROUTE ROUTE2207 = createNode("ROUTE");
ROUTE2207.fromField = "value_changed";
ROUTE2207.fromNode = "Stop_r_ring1_RotationInterpolator";
ROUTE2207.toField = "rotation";
ROUTE2207.toNode = "hanim_r_ring1";
Group1942.children[264] = ROUTE2207;

ROUTE ROUTE2208 = createNode("ROUTE");
ROUTE2208.fromField = "value_changed";
ROUTE2208.fromNode = "Stop_r_ring2_RotationInterpolator";
ROUTE2208.toField = "rotation";
ROUTE2208.toNode = "hanim_r_ring2";
Group1942.children[265] = ROUTE2208;

ROUTE ROUTE2209 = createNode("ROUTE");
ROUTE2209.fromField = "value_changed";
ROUTE2209.fromNode = "Stop_r_ring3_RotationInterpolator";
ROUTE2209.toField = "rotation";
ROUTE2209.toNode = "hanim_r_ring3";
Group1942.children[266] = ROUTE2209;

ROUTE ROUTE2210 = createNode("ROUTE");
ROUTE2210.fromField = "value_changed";
ROUTE2210.fromNode = "Stop_r_pinky0_RotationInterpolator";
ROUTE2210.toField = "rotation";
ROUTE2210.toNode = "hanim_r_pinky0";
Group1942.children[267] = ROUTE2210;

ROUTE ROUTE2211 = createNode("ROUTE");
ROUTE2211.fromField = "value_changed";
ROUTE2211.fromNode = "Stop_r_pinky1_RotationInterpolator";
ROUTE2211.toField = "rotation";
ROUTE2211.toNode = "hanim_r_pinky1";
Group1942.children[268] = ROUTE2211;

ROUTE ROUTE2212 = createNode("ROUTE");
ROUTE2212.fromField = "value_changed";
ROUTE2212.fromNode = "Stop_r_pinky2_RotationInterpolator";
ROUTE2212.toField = "rotation";
ROUTE2212.toNode = "hanim_r_pinky2";
Group1942.children[269] = ROUTE2212;

ROUTE ROUTE2213 = createNode("ROUTE");
ROUTE2213.fromField = "value_changed";
ROUTE2213.fromNode = "Stop_r_pinky3_RotationInterpolator";
ROUTE2213.toField = "rotation";
ROUTE2213.toNode = "hanim_r_pinky3";
Group1942.children[270] = ROUTE2213;

children[13] = Group1942;

Group Group2214 = createNode("Group");
Group2214.DEF = "StandAnimation";
TimeSensor TimeSensor2215 = createNode("TimeSensor");
TimeSensor2215.DEF = "StandTimer";
TimeSensor2215.cycleInterval = 5.73;
TimeSensor2215.loop = True;
Group2214.children = new MFNode();

Group2214.children[0] = TimeSensor2215;

OrientationInterpolator OrientationInterpolator2216 = createNode("OrientationInterpolator");
OrientationInterpolator2216.DEF = "Stand_r_metatarsal_PitchInterpolator";
OrientationInterpolator2216.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2216.keyValue = new MFRotation(new float[1,0,0,0,-1,0,0,0.015,1,0,0,0.17,-1,0,0,0.025,1,0,0,0.01,1,0,0,0]);
Group2214.children[1] = OrientationInterpolator2216;

OrientationInterpolator OrientationInterpolator2217 = createNode("OrientationInterpolator");
OrientationInterpolator2217.DEF = "Stand_r_ankle_RotationInterpolator";
OrientationInterpolator2217.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2217.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2214.children[2] = OrientationInterpolator2217;

OrientationInterpolator OrientationInterpolator2218 = createNode("OrientationInterpolator");
OrientationInterpolator2218.DEF = "Stand_r_knee_RotationInterpolator";
OrientationInterpolator2218.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2218.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2214.children[3] = OrientationInterpolator2218;

OrientationInterpolator OrientationInterpolator2219 = createNode("OrientationInterpolator");
OrientationInterpolator2219.DEF = "Stand_r_hip_RotationInterpolator";
OrientationInterpolator2219.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2219.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2214.children[4] = OrientationInterpolator2219;

OrientationInterpolator OrientationInterpolator2220 = createNode("OrientationInterpolator");
OrientationInterpolator2220.DEF = "Stand_l_ankle_RotationInterpolator";
OrientationInterpolator2220.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2220.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2214.children[5] = OrientationInterpolator2220;

OrientationInterpolator OrientationInterpolator2221 = createNode("OrientationInterpolator");
OrientationInterpolator2221.DEF = "Stand_l_knee_RotationInterpolator";
OrientationInterpolator2221.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2221.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2214.children[6] = OrientationInterpolator2221;

OrientationInterpolator OrientationInterpolator2222 = createNode("OrientationInterpolator");
OrientationInterpolator2222.DEF = "Stand_l_hip_RotationInterpolator";
OrientationInterpolator2222.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2222.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2214.children[7] = OrientationInterpolator2222;

OrientationInterpolator OrientationInterpolator2223 = createNode("OrientationInterpolator");
OrientationInterpolator2223.DEF = "Stand_r_wrist_RotationInterpolator";
OrientationInterpolator2223.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2223.keyValue = new MFRotation(new float[0,0,1,0,0,0,-1,0.25,0,0,1,0]);
Group2214.children[8] = OrientationInterpolator2223;

OrientationInterpolator OrientationInterpolator2224 = createNode("OrientationInterpolator");
OrientationInterpolator2224.DEF = "Stand_r_elbow_RotationInterpolator";
OrientationInterpolator2224.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2224.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2214.children[9] = OrientationInterpolator2224;

OrientationInterpolator OrientationInterpolator2225 = createNode("OrientationInterpolator");
OrientationInterpolator2225.DEF = "Stand_r_shoulder_RotationInterpolator";
OrientationInterpolator2225.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2225.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2214.children[10] = OrientationInterpolator2225;

OrientationInterpolator OrientationInterpolator2226 = createNode("OrientationInterpolator");
OrientationInterpolator2226.DEF = "Stand_l_wrist_RotationInterpolator";
OrientationInterpolator2226.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2226.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2214.children[11] = OrientationInterpolator2226;

OrientationInterpolator OrientationInterpolator2227 = createNode("OrientationInterpolator");
OrientationInterpolator2227.DEF = "Stand_l_elbow_RotationInterpolator";
OrientationInterpolator2227.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2227.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2214.children[12] = OrientationInterpolator2227;

OrientationInterpolator OrientationInterpolator2228 = createNode("OrientationInterpolator");
OrientationInterpolator2228.DEF = "Stand_l_shoulder_RotationInterpolator";
OrientationInterpolator2228.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2228.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2214.children[13] = OrientationInterpolator2228;

OrientationInterpolator OrientationInterpolator2229 = createNode("OrientationInterpolator");
OrientationInterpolator2229.DEF = "Stand_head_RotationInterpolator";
OrientationInterpolator2229.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2229.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2214.children[14] = OrientationInterpolator2229;

OrientationInterpolator OrientationInterpolator2230 = createNode("OrientationInterpolator");
OrientationInterpolator2230.DEF = "Stand_neck_RotationInterpolator";
OrientationInterpolator2230.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2230.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.5,0,0,1,0]);
Group2214.children[15] = OrientationInterpolator2230;

OrientationInterpolator OrientationInterpolator2231 = createNode("OrientationInterpolator");
OrientationInterpolator2231.DEF = "Stand_l_eyeball_RotationInterpolator";
OrientationInterpolator2231.key = new MFFloat(new float[0,0.4,0.7,1]);
OrientationInterpolator2231.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.5,1,0,0,0.45,0,0,1,0]);
Group2214.children[16] = OrientationInterpolator2231;

OrientationInterpolator OrientationInterpolator2232 = createNode("OrientationInterpolator");
OrientationInterpolator2232.DEF = "Stand_r_eyeball_RotationInterpolator";
OrientationInterpolator2232.key = new MFFloat(new float[0,0.4,0.7,1]);
OrientationInterpolator2232.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.5,1,0,0,0.45,0,0,1,0]);
Group2214.children[17] = OrientationInterpolator2232;

OrientationInterpolator OrientationInterpolator2233 = createNode("OrientationInterpolator");
OrientationInterpolator2233.DEF = "Stand_lower_body_RotationInterpolator";
OrientationInterpolator2233.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2233.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2214.children[18] = OrientationInterpolator2233;

OrientationInterpolator OrientationInterpolator2234 = createNode("OrientationInterpolator");
OrientationInterpolator2234.DEF = "Stand_upper_body_RotationInterpolator";
OrientationInterpolator2234.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2234.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2214.children[19] = OrientationInterpolator2234;

OrientationInterpolator OrientationInterpolator2235 = createNode("OrientationInterpolator");
OrientationInterpolator2235.DEF = "Stand_whole_body_RotationInterpolator";
OrientationInterpolator2235.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2235.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2214.children[20] = OrientationInterpolator2235;

PositionInterpolator PositionInterpolator2236 = createNode("PositionInterpolator");
PositionInterpolator2236.DEF = "Stand_whole_body_TranslationInterpolator";
PositionInterpolator2236.key = new MFFloat(new float[0,0.5,1]);
PositionInterpolator2236.keyValue = new MFVec3f(new float[0,0,0,0,0,0,0,0,0]);
Group2214.children[21] = PositionInterpolator2236;

OrientationInterpolator OrientationInterpolator2237 = createNode("OrientationInterpolator");
OrientationInterpolator2237.DEF = "Stand_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2237.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2237.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2214.children[22] = OrientationInterpolator2237;

OrientationInterpolator OrientationInterpolator2238 = createNode("OrientationInterpolator");
OrientationInterpolator2238.DEF = "Stand_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2238.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2238.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2214.children[23] = OrientationInterpolator2238;

OrientationInterpolator OrientationInterpolator2239 = createNode("OrientationInterpolator");
OrientationInterpolator2239.DEF = "Stand_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2239.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2239.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2214.children[24] = OrientationInterpolator2239;

OrientationInterpolator OrientationInterpolator2240 = createNode("OrientationInterpolator");
OrientationInterpolator2240.DEF = "Stand_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2240.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2240.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2214.children[25] = OrientationInterpolator2240;

OrientationInterpolator OrientationInterpolator2241 = createNode("OrientationInterpolator");
OrientationInterpolator2241.DEF = "Stand_sacroiliac_YawInterpolator";
OrientationInterpolator2241.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2241.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2214.children[26] = OrientationInterpolator2241;

OrientationInterpolator OrientationInterpolator2242 = createNode("OrientationInterpolator");
OrientationInterpolator2242.DEF = "Stand_vl5_YawInterpolator";
OrientationInterpolator2242.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2242.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2214.children[27] = OrientationInterpolator2242;

OrientationInterpolator OrientationInterpolator2243 = createNode("OrientationInterpolator");
OrientationInterpolator2243.DEF = "Stand_vc6_YawInterpolator";
OrientationInterpolator2243.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2243.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,-1,0,0,0,0,-1,0,0,0,1,0,0]);
Group2214.children[28] = OrientationInterpolator2243;

OrientationInterpolator OrientationInterpolator2244 = createNode("OrientationInterpolator");
OrientationInterpolator2244.DEF = "Stand_l_thumb1_PitchInterpolator";
OrientationInterpolator2244.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2244.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2214.children[29] = OrientationInterpolator2244;

OrientationInterpolator OrientationInterpolator2245 = createNode("OrientationInterpolator");
OrientationInterpolator2245.DEF = "Stand_r_thumb1_PitchInterpolator";
OrientationInterpolator2245.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2245.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,0.1,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group2214.children[30] = OrientationInterpolator2245;

OrientationInterpolator OrientationInterpolator2246 = createNode("OrientationInterpolator");
OrientationInterpolator2246.DEF = "Stand_r_index1_RollInterpolator";
OrientationInterpolator2246.key = new MFFloat(new float[0,0.2,0.4,0.5,0.8,1]);
OrientationInterpolator2246.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.1,0,0,1,0.2,0,0,1,0.3,0,0,1,0,0,0,1,0]);
Group2214.children[31] = OrientationInterpolator2246;

OrientationInterpolator OrientationInterpolator2247 = createNode("OrientationInterpolator");
OrientationInterpolator2247.DEF = "Stand_r_index2_RollInterpolator";
OrientationInterpolator2247.key = new MFFloat(new float[0,0.2,0.4,0.5,0.8,1]);
OrientationInterpolator2247.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.4,0,0,1,0.32,0,0,1,0.25,0,0,1,0.2,0,0,1,0]);
Group2214.children[32] = OrientationInterpolator2247;

OrientationInterpolator OrientationInterpolator2248 = createNode("OrientationInterpolator");
OrientationInterpolator2248.DEF = "Stand_r_index3_RollInterpolator";
OrientationInterpolator2248.key = new MFFloat(new float[0,0.2,0.4,0.5,0.8,1]);
OrientationInterpolator2248.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.2,0,0,1,0.3,0,0,1,0.35,0,0,1,0.2,0,0,1,0]);
Group2214.children[33] = OrientationInterpolator2248;

ROUTE ROUTE2249 = createNode("ROUTE");
ROUTE2249.fromField = "fraction_changed";
ROUTE2249.fromNode = "StandTimer";
ROUTE2249.toField = "set_fraction";
ROUTE2249.toNode = "Stand_r_ankle_RotationInterpolator";
Group2214.children[34] = ROUTE2249;

ROUTE ROUTE2250 = createNode("ROUTE");
ROUTE2250.fromField = "fraction_changed";
ROUTE2250.fromNode = "StandTimer";
ROUTE2250.toField = "set_fraction";
ROUTE2250.toNode = "Stand_r_knee_RotationInterpolator";
Group2214.children[35] = ROUTE2250;

ROUTE ROUTE2251 = createNode("ROUTE");
ROUTE2251.fromField = "fraction_changed";
ROUTE2251.fromNode = "StandTimer";
ROUTE2251.toField = "set_fraction";
ROUTE2251.toNode = "Stand_r_hip_RotationInterpolator";
Group2214.children[36] = ROUTE2251;

ROUTE ROUTE2252 = createNode("ROUTE");
ROUTE2252.fromField = "fraction_changed";
ROUTE2252.fromNode = "StandTimer";
ROUTE2252.toField = "set_fraction";
ROUTE2252.toNode = "Stand_l_ankle_RotationInterpolator";
Group2214.children[37] = ROUTE2252;

ROUTE ROUTE2253 = createNode("ROUTE");
ROUTE2253.fromField = "fraction_changed";
ROUTE2253.fromNode = "StandTimer";
ROUTE2253.toField = "set_fraction";
ROUTE2253.toNode = "Stand_l_knee_RotationInterpolator";
Group2214.children[38] = ROUTE2253;

ROUTE ROUTE2254 = createNode("ROUTE");
ROUTE2254.fromField = "fraction_changed";
ROUTE2254.fromNode = "StandTimer";
ROUTE2254.toField = "set_fraction";
ROUTE2254.toNode = "Stand_l_hip_RotationInterpolator";
Group2214.children[39] = ROUTE2254;

ROUTE ROUTE2255 = createNode("ROUTE");
ROUTE2255.fromField = "fraction_changed";
ROUTE2255.fromNode = "StandTimer";
ROUTE2255.toField = "set_fraction";
ROUTE2255.toNode = "Stand_lower_body_RotationInterpolator";
Group2214.children[40] = ROUTE2255;

ROUTE ROUTE2256 = createNode("ROUTE");
ROUTE2256.fromField = "fraction_changed";
ROUTE2256.fromNode = "StandTimer";
ROUTE2256.toField = "set_fraction";
ROUTE2256.toNode = "Stand_r_wrist_RotationInterpolator";
Group2214.children[41] = ROUTE2256;

ROUTE ROUTE2257 = createNode("ROUTE");
ROUTE2257.fromField = "fraction_changed";
ROUTE2257.fromNode = "StandTimer";
ROUTE2257.toField = "set_fraction";
ROUTE2257.toNode = "Stand_r_elbow_RotationInterpolator";
Group2214.children[42] = ROUTE2257;

ROUTE ROUTE2258 = createNode("ROUTE");
ROUTE2258.fromField = "fraction_changed";
ROUTE2258.fromNode = "StandTimer";
ROUTE2258.toField = "set_fraction";
ROUTE2258.toNode = "Stand_r_shoulder_RotationInterpolator";
Group2214.children[43] = ROUTE2258;

ROUTE ROUTE2259 = createNode("ROUTE");
ROUTE2259.fromField = "fraction_changed";
ROUTE2259.fromNode = "StandTimer";
ROUTE2259.toField = "set_fraction";
ROUTE2259.toNode = "Stand_l_wrist_RotationInterpolator";
Group2214.children[44] = ROUTE2259;

ROUTE ROUTE2260 = createNode("ROUTE");
ROUTE2260.fromField = "fraction_changed";
ROUTE2260.fromNode = "StandTimer";
ROUTE2260.toField = "set_fraction";
ROUTE2260.toNode = "Stand_l_elbow_RotationInterpolator";
Group2214.children[45] = ROUTE2260;

ROUTE ROUTE2261 = createNode("ROUTE");
ROUTE2261.fromField = "fraction_changed";
ROUTE2261.fromNode = "StandTimer";
ROUTE2261.toField = "set_fraction";
ROUTE2261.toNode = "Stand_l_shoulder_RotationInterpolator";
Group2214.children[46] = ROUTE2261;

ROUTE ROUTE2262 = createNode("ROUTE");
ROUTE2262.fromField = "fraction_changed";
ROUTE2262.fromNode = "StandTimer";
ROUTE2262.toField = "set_fraction";
ROUTE2262.toNode = "Stand_head_RotationInterpolator";
Group2214.children[47] = ROUTE2262;

ROUTE ROUTE2263 = createNode("ROUTE");
ROUTE2263.fromField = "fraction_changed";
ROUTE2263.fromNode = "StandTimer";
ROUTE2263.toField = "set_fraction";
ROUTE2263.toNode = "Stand_neck_RotationInterpolator";
Group2214.children[48] = ROUTE2263;

ROUTE ROUTE2264 = createNode("ROUTE");
ROUTE2264.fromField = "fraction_changed";
ROUTE2264.fromNode = "StandTimer";
ROUTE2264.toField = "set_fraction";
ROUTE2264.toNode = "Stand_l_eyeball_RotationInterpolator";
Group2214.children[49] = ROUTE2264;

ROUTE ROUTE2265 = createNode("ROUTE");
ROUTE2265.fromField = "fraction_changed";
ROUTE2265.fromNode = "StandTimer";
ROUTE2265.toField = "set_fraction";
ROUTE2265.toNode = "Stand_r_eyeball_RotationInterpolator";
Group2214.children[50] = ROUTE2265;

ROUTE ROUTE2266 = createNode("ROUTE");
ROUTE2266.fromField = "fraction_changed";
ROUTE2266.fromNode = "StandTimer";
ROUTE2266.toField = "set_fraction";
ROUTE2266.toNode = "Stand_upper_body_RotationInterpolator";
Group2214.children[51] = ROUTE2266;

ROUTE ROUTE2267 = createNode("ROUTE");
ROUTE2267.fromField = "fraction_changed";
ROUTE2267.fromNode = "StandTimer";
ROUTE2267.toField = "set_fraction";
ROUTE2267.toNode = "Stand_whole_body_RotationInterpolator";
Group2214.children[52] = ROUTE2267;

ROUTE ROUTE2268 = createNode("ROUTE");
ROUTE2268.fromField = "fraction_changed";
ROUTE2268.fromNode = "StandTimer";
ROUTE2268.toField = "set_fraction";
ROUTE2268.toNode = "Stand_whole_body_TranslationInterpolator";
Group2214.children[53] = ROUTE2268;

ROUTE ROUTE2269 = createNode("ROUTE");
ROUTE2269.fromField = "fraction_changed";
ROUTE2269.fromNode = "StandTimer";
ROUTE2269.toField = "set_fraction";
ROUTE2269.toNode = "Stand_l_sternoclavicular_RollInterpolator";
Group2214.children[54] = ROUTE2269;

ROUTE ROUTE2270 = createNode("ROUTE");
ROUTE2270.fromField = "fraction_changed";
ROUTE2270.fromNode = "StandTimer";
ROUTE2270.toField = "set_fraction";
ROUTE2270.toNode = "Stand_l_acromioclavicular_RollInterpolator";
Group2214.children[55] = ROUTE2270;

ROUTE ROUTE2271 = createNode("ROUTE");
ROUTE2271.fromField = "fraction_changed";
ROUTE2271.fromNode = "StandTimer";
ROUTE2271.toField = "set_fraction";
ROUTE2271.toNode = "Stand_r_sternoclavicular_RollInterpolator";
Group2214.children[56] = ROUTE2271;

ROUTE ROUTE2272 = createNode("ROUTE");
ROUTE2272.fromField = "fraction_changed";
ROUTE2272.fromNode = "StandTimer";
ROUTE2272.toField = "set_fraction";
ROUTE2272.toNode = "Stand_r_acromioclavicular_RollInterpolator";
Group2214.children[57] = ROUTE2272;

ROUTE ROUTE2273 = createNode("ROUTE");
ROUTE2273.fromField = "fraction_changed";
ROUTE2273.fromNode = "StandTimer";
ROUTE2273.toField = "set_fraction";
ROUTE2273.toNode = "Stand_r_metatarsal_PitchInterpolator";
Group2214.children[58] = ROUTE2273;

ROUTE ROUTE2274 = createNode("ROUTE");
ROUTE2274.fromField = "fraction_changed";
ROUTE2274.fromNode = "StandTimer";
ROUTE2274.toField = "set_fraction";
ROUTE2274.toNode = "Stand_sacroiliac_YawInterpolator";
Group2214.children[59] = ROUTE2274;

ROUTE ROUTE2275 = createNode("ROUTE");
ROUTE2275.fromField = "fraction_changed";
ROUTE2275.fromNode = "StandTimer";
ROUTE2275.toField = "set_fraction";
ROUTE2275.toNode = "Stand_vl5_YawInterpolator";
Group2214.children[60] = ROUTE2275;

ROUTE ROUTE2276 = createNode("ROUTE");
ROUTE2276.fromField = "fraction_changed";
ROUTE2276.fromNode = "StandTimer";
ROUTE2276.toField = "set_fraction";
ROUTE2276.toNode = "Stand_vc6_YawInterpolator";
Group2214.children[61] = ROUTE2276;

ROUTE ROUTE2277 = createNode("ROUTE");
ROUTE2277.fromField = "fraction_changed";
ROUTE2277.fromNode = "StandTimer";
ROUTE2277.toField = "set_fraction";
ROUTE2277.toNode = "Stand_l_thumb1_PitchInterpolator";
Group2214.children[62] = ROUTE2277;

ROUTE ROUTE2278 = createNode("ROUTE");
ROUTE2278.fromField = "fraction_changed";
ROUTE2278.fromNode = "StandTimer";
ROUTE2278.toField = "set_fraction";
ROUTE2278.toNode = "Stand_r_thumb1_PitchInterpolator";
Group2214.children[63] = ROUTE2278;

ROUTE ROUTE2279 = createNode("ROUTE");
ROUTE2279.fromField = "fraction_changed";
ROUTE2279.fromNode = "StandTimer";
ROUTE2279.toField = "set_fraction";
ROUTE2279.toNode = "Stand_r_index1_RollInterpolator";
Group2214.children[64] = ROUTE2279;

ROUTE ROUTE2280 = createNode("ROUTE");
ROUTE2280.fromField = "fraction_changed";
ROUTE2280.fromNode = "StandTimer";
ROUTE2280.toField = "set_fraction";
ROUTE2280.toNode = "Stand_r_index2_RollInterpolator";
Group2214.children[65] = ROUTE2280;

ROUTE ROUTE2281 = createNode("ROUTE");
ROUTE2281.fromField = "fraction_changed";
ROUTE2281.fromNode = "StandTimer";
ROUTE2281.toField = "set_fraction";
ROUTE2281.toNode = "Stand_r_index3_RollInterpolator";
Group2214.children[66] = ROUTE2281;

ROUTE ROUTE2282 = createNode("ROUTE");
ROUTE2282.fromField = "value_changed";
ROUTE2282.fromNode = "Stand_r_ankle_RotationInterpolator";
ROUTE2282.toField = "rotation";
ROUTE2282.toNode = "hanim_r_ankle";
Group2214.children[67] = ROUTE2282;

ROUTE ROUTE2283 = createNode("ROUTE");
ROUTE2283.fromField = "value_changed";
ROUTE2283.fromNode = "Stand_r_knee_RotationInterpolator";
ROUTE2283.toField = "rotation";
ROUTE2283.toNode = "hanim_r_knee";
Group2214.children[68] = ROUTE2283;

ROUTE ROUTE2284 = createNode("ROUTE");
ROUTE2284.fromField = "value_changed";
ROUTE2284.fromNode = "Stand_r_hip_RotationInterpolator";
ROUTE2284.toField = "rotation";
ROUTE2284.toNode = "hanim_r_hip";
Group2214.children[69] = ROUTE2284;

ROUTE ROUTE2285 = createNode("ROUTE");
ROUTE2285.fromField = "value_changed";
ROUTE2285.fromNode = "Stand_l_ankle_RotationInterpolator";
ROUTE2285.toField = "rotation";
ROUTE2285.toNode = "hanim_l_ankle";
Group2214.children[70] = ROUTE2285;

ROUTE ROUTE2286 = createNode("ROUTE");
ROUTE2286.fromField = "value_changed";
ROUTE2286.fromNode = "Stand_l_knee_RotationInterpolator";
ROUTE2286.toField = "rotation";
ROUTE2286.toNode = "hanim_l_knee";
Group2214.children[71] = ROUTE2286;

ROUTE ROUTE2287 = createNode("ROUTE");
ROUTE2287.fromField = "value_changed";
ROUTE2287.fromNode = "Stand_l_hip_RotationInterpolator";
ROUTE2287.toField = "rotation";
ROUTE2287.toNode = "hanim_l_hip";
Group2214.children[72] = ROUTE2287;

ROUTE ROUTE2288 = createNode("ROUTE");
ROUTE2288.fromField = "value_changed";
ROUTE2288.fromNode = "Stand_r_wrist_RotationInterpolator";
ROUTE2288.toField = "rotation";
ROUTE2288.toNode = "hanim_r_wrist";
Group2214.children[73] = ROUTE2288;

ROUTE ROUTE2289 = createNode("ROUTE");
ROUTE2289.fromField = "value_changed";
ROUTE2289.fromNode = "Stand_r_elbow_RotationInterpolator";
ROUTE2289.toField = "rotation";
ROUTE2289.toNode = "hanim_r_elbow";
Group2214.children[74] = ROUTE2289;

ROUTE ROUTE2290 = createNode("ROUTE");
ROUTE2290.fromField = "value_changed";
ROUTE2290.fromNode = "Stand_r_shoulder_RotationInterpolator";
ROUTE2290.toField = "rotation";
ROUTE2290.toNode = "hanim_r_shoulder";
Group2214.children[75] = ROUTE2290;

ROUTE ROUTE2291 = createNode("ROUTE");
ROUTE2291.fromField = "value_changed";
ROUTE2291.fromNode = "Stand_l_wrist_RotationInterpolator";
ROUTE2291.toField = "rotation";
ROUTE2291.toNode = "hanim_l_wrist";
Group2214.children[76] = ROUTE2291;

ROUTE ROUTE2292 = createNode("ROUTE");
ROUTE2292.fromField = "value_changed";
ROUTE2292.fromNode = "Stand_l_elbow_RotationInterpolator";
ROUTE2292.toField = "rotation";
ROUTE2292.toNode = "hanim_l_elbow";
Group2214.children[77] = ROUTE2292;

ROUTE ROUTE2293 = createNode("ROUTE");
ROUTE2293.fromField = "value_changed";
ROUTE2293.fromNode = "Stand_l_shoulder_RotationInterpolator";
ROUTE2293.toField = "rotation";
ROUTE2293.toNode = "hanim_l_shoulder";
Group2214.children[78] = ROUTE2293;

ROUTE ROUTE2294 = createNode("ROUTE");
ROUTE2294.fromField = "value_changed";
ROUTE2294.fromNode = "Stand_head_RotationInterpolator";
ROUTE2294.toField = "rotation";
ROUTE2294.toNode = "hanim_skullbase";
Group2214.children[79] = ROUTE2294;

ROUTE ROUTE2295 = createNode("ROUTE");
ROUTE2295.fromField = "value_changed";
ROUTE2295.fromNode = "Stand_neck_RotationInterpolator";
ROUTE2295.toField = "rotation";
ROUTE2295.toNode = "hanim_vc7";
Group2214.children[80] = ROUTE2295;

ROUTE ROUTE2296 = createNode("ROUTE");
ROUTE2296.fromField = "value_changed";
ROUTE2296.fromNode = "Stand_l_eyeball_RotationInterpolator";
ROUTE2296.toField = "rotation";
ROUTE2296.toNode = "hanim_l_eyeball_joint";
Group2214.children[81] = ROUTE2296;

ROUTE ROUTE2297 = createNode("ROUTE");
ROUTE2297.fromField = "value_changed";
ROUTE2297.fromNode = "Stand_r_eyeball_RotationInterpolator";
ROUTE2297.toField = "rotation";
ROUTE2297.toNode = "hanim_r_eyeball_joint";
Group2214.children[82] = ROUTE2297;

ROUTE ROUTE2298 = createNode("ROUTE");
ROUTE2298.fromField = "value_changed";
ROUTE2298.fromNode = "Stand_upper_body_RotationInterpolator";
ROUTE2298.toField = "rotation";
ROUTE2298.toNode = "hanim_vl1";
Group2214.children[83] = ROUTE2298;

ROUTE ROUTE2299 = createNode("ROUTE");
ROUTE2299.fromField = "value_changed";
ROUTE2299.fromNode = "Stand_lower_body_RotationInterpolator";
ROUTE2299.toField = "rotation";
ROUTE2299.toNode = "hanim_sacroiliac";
Group2214.children[84] = ROUTE2299;

ROUTE ROUTE2300 = createNode("ROUTE");
ROUTE2300.fromField = "value_changed";
ROUTE2300.fromNode = "Stand_whole_body_RotationInterpolator";
ROUTE2300.toField = "rotation";
ROUTE2300.toNode = "hanim_humanoid_root";
Group2214.children[85] = ROUTE2300;

ROUTE ROUTE2301 = createNode("ROUTE");
ROUTE2301.fromField = "value_changed";
ROUTE2301.fromNode = "Stand_whole_body_TranslationInterpolator";
ROUTE2301.toField = "translation";
ROUTE2301.toNode = "hanim_humanoid_root";
Group2214.children[86] = ROUTE2301;

ROUTE ROUTE2302 = createNode("ROUTE");
ROUTE2302.fromField = "value_changed";
ROUTE2302.fromNode = "Stand_l_sternoclavicular_RollInterpolator";
ROUTE2302.toField = "rotation";
ROUTE2302.toNode = "hanim_l_sternoclavicular";
Group2214.children[87] = ROUTE2302;

ROUTE ROUTE2303 = createNode("ROUTE");
ROUTE2303.fromField = "value_changed";
ROUTE2303.fromNode = "Stand_l_acromioclavicular_RollInterpolator";
ROUTE2303.toField = "rotation";
ROUTE2303.toNode = "hanim_l_acromioclavicular";
Group2214.children[88] = ROUTE2303;

ROUTE ROUTE2304 = createNode("ROUTE");
ROUTE2304.fromField = "value_changed";
ROUTE2304.fromNode = "Stand_r_sternoclavicular_RollInterpolator";
ROUTE2304.toField = "rotation";
ROUTE2304.toNode = "hanim_r_sternoclavicular";
Group2214.children[89] = ROUTE2304;

ROUTE ROUTE2305 = createNode("ROUTE");
ROUTE2305.fromField = "value_changed";
ROUTE2305.fromNode = "Stand_r_acromioclavicular_RollInterpolator";
ROUTE2305.toField = "rotation";
ROUTE2305.toNode = "hanim_r_acromioclavicular";
Group2214.children[90] = ROUTE2305;

ROUTE ROUTE2306 = createNode("ROUTE");
ROUTE2306.fromField = "value_changed";
ROUTE2306.fromNode = "Stand_r_metatarsal_PitchInterpolator";
ROUTE2306.toField = "rotation";
ROUTE2306.toNode = "hanim_l_metatarsal";
Group2214.children[91] = ROUTE2306;

ROUTE ROUTE2307 = createNode("ROUTE");
ROUTE2307.fromField = "value_changed";
ROUTE2307.fromNode = "Stand_r_metatarsal_PitchInterpolator";
ROUTE2307.toField = "rotation";
ROUTE2307.toNode = "hanim_r_metatarsal";
Group2214.children[92] = ROUTE2307;

ROUTE ROUTE2308 = createNode("ROUTE");
ROUTE2308.fromField = "value_changed";
ROUTE2308.fromNode = "Stand_sacroiliac_YawInterpolator";
ROUTE2308.toField = "rotation";
ROUTE2308.toNode = "hanim_sacroiliac";
Group2214.children[93] = ROUTE2308;

ROUTE ROUTE2309 = createNode("ROUTE");
ROUTE2309.fromField = "value_changed";
ROUTE2309.fromNode = "Stand_vl5_YawInterpolator";
ROUTE2309.toField = "rotation";
ROUTE2309.toNode = "hanim_vl5";
Group2214.children[94] = ROUTE2309;

ROUTE ROUTE2310 = createNode("ROUTE");
ROUTE2310.fromField = "value_changed";
ROUTE2310.fromNode = "Stand_vc6_YawInterpolator";
ROUTE2310.toField = "rotation";
ROUTE2310.toNode = "hanim_vc6";
Group2214.children[95] = ROUTE2310;

ROUTE ROUTE2311 = createNode("ROUTE");
ROUTE2311.fromField = "value_changed";
ROUTE2311.fromNode = "Stand_l_thumb1_PitchInterpolator";
ROUTE2311.toField = "rotation";
ROUTE2311.toNode = "hanim_l_thumb1";
Group2214.children[96] = ROUTE2311;

ROUTE ROUTE2312 = createNode("ROUTE");
ROUTE2312.fromField = "value_changed";
ROUTE2312.fromNode = "Stand_r_thumb1_PitchInterpolator";
ROUTE2312.toField = "rotation";
ROUTE2312.toNode = "hanim_r_thumb1";
Group2214.children[97] = ROUTE2312;

ROUTE ROUTE2313 = createNode("ROUTE");
ROUTE2313.fromField = "value_changed";
ROUTE2313.fromNode = "Stand_r_index1_RollInterpolator";
ROUTE2313.toField = "rotation";
ROUTE2313.toNode = "hanim_r_index1";
Group2214.children[98] = ROUTE2313;

ROUTE ROUTE2314 = createNode("ROUTE");
ROUTE2314.fromField = "value_changed";
ROUTE2314.fromNode = "Stand_r_index2_RollInterpolator";
ROUTE2314.toField = "rotation";
ROUTE2314.toNode = "hanim_r_index2";
Group2214.children[99] = ROUTE2314;

ROUTE ROUTE2315 = createNode("ROUTE");
ROUTE2315.fromField = "value_changed";
ROUTE2315.fromNode = "Stand_r_index3_RollInterpolator";
ROUTE2315.toField = "rotation";
ROUTE2315.toNode = "hanim_r_index3";
Group2214.children[100] = ROUTE2315;

ROUTE ROUTE2316 = createNode("ROUTE");
ROUTE2316.fromField = "value_changed";
ROUTE2316.fromNode = "Stand_r_index1_RollInterpolator";
ROUTE2316.toField = "rotation";
ROUTE2316.toNode = "hanim_r_middle1";
Group2214.children[101] = ROUTE2316;

ROUTE ROUTE2317 = createNode("ROUTE");
ROUTE2317.fromField = "value_changed";
ROUTE2317.fromNode = "Stand_r_index2_RollInterpolator";
ROUTE2317.toField = "rotation";
ROUTE2317.toNode = "hanim_r_middle2";
Group2214.children[102] = ROUTE2317;

ROUTE ROUTE2318 = createNode("ROUTE");
ROUTE2318.fromField = "value_changed";
ROUTE2318.fromNode = "Stand_r_index3_RollInterpolator";
ROUTE2318.toField = "rotation";
ROUTE2318.toNode = "hanim_r_middle3";
Group2214.children[103] = ROUTE2318;

ROUTE ROUTE2319 = createNode("ROUTE");
ROUTE2319.fromField = "value_changed";
ROUTE2319.fromNode = "Stand_r_index1_RollInterpolator";
ROUTE2319.toField = "rotation";
ROUTE2319.toNode = "hanim_r_ring1";
Group2214.children[104] = ROUTE2319;

ROUTE ROUTE2320 = createNode("ROUTE");
ROUTE2320.fromField = "value_changed";
ROUTE2320.fromNode = "Stand_r_index2_RollInterpolator";
ROUTE2320.toField = "rotation";
ROUTE2320.toNode = "hanim_r_ring2";
Group2214.children[105] = ROUTE2320;

ROUTE ROUTE2321 = createNode("ROUTE");
ROUTE2321.fromField = "value_changed";
ROUTE2321.fromNode = "Stand_r_index3_RollInterpolator";
ROUTE2321.toField = "rotation";
ROUTE2321.toNode = "hanim_r_ring3";
Group2214.children[106] = ROUTE2321;

ROUTE ROUTE2322 = createNode("ROUTE");
ROUTE2322.fromField = "value_changed";
ROUTE2322.fromNode = "Stand_r_index1_RollInterpolator";
ROUTE2322.toField = "rotation";
ROUTE2322.toNode = "hanim_r_pinky1";
Group2214.children[107] = ROUTE2322;

ROUTE ROUTE2323 = createNode("ROUTE");
ROUTE2323.fromField = "value_changed";
ROUTE2323.fromNode = "Stand_r_index2_RollInterpolator";
ROUTE2323.toField = "rotation";
ROUTE2323.toNode = "hanim_r_pinky2";
Group2214.children[108] = ROUTE2323;

ROUTE ROUTE2324 = createNode("ROUTE");
ROUTE2324.fromField = "value_changed";
ROUTE2324.fromNode = "Stand_r_index3_RollInterpolator";
ROUTE2324.toField = "rotation";
ROUTE2324.toNode = "hanim_r_pinky3";
Group2214.children[109] = ROUTE2324;

children[14] = Group2214;

Group Group2325 = createNode("Group");
Group2325.DEF = "PitchesAnimation";
TimeSensor TimeSensor2326 = createNode("TimeSensor");
TimeSensor2326.DEF = "PitchTimer";
TimeSensor2326.cycleInterval = 5.73;
TimeSensor2326.loop = True;
Group2325.children = new MFNode();

Group2325.children[0] = TimeSensor2326;

OrientationInterpolator OrientationInterpolator2327 = createNode("OrientationInterpolator");
OrientationInterpolator2327.DEF = "Pitch_r_metatarsal_PitchInterpolator";
OrientationInterpolator2327.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2327.keyValue = new MFRotation(new float[1,0,0,0,-1,0,0,0.5,-1,0,0,0.7,1,0,0,0.75,-1,0,0,0.2,1,0,0,0]);
Group2325.children[1] = OrientationInterpolator2327;

OrientationInterpolator OrientationInterpolator2328 = createNode("OrientationInterpolator");
OrientationInterpolator2328.DEF = "Pitches_r_ankle_RotationInterpolator";
OrientationInterpolator2328.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2328.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0]);
Group2325.children[2] = OrientationInterpolator2328;

OrientationInterpolator OrientationInterpolator2329 = createNode("OrientationInterpolator");
OrientationInterpolator2329.DEF = "Pitches_r_knee_RotationInterpolator";
OrientationInterpolator2329.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2329.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2325.children[3] = OrientationInterpolator2329;

OrientationInterpolator OrientationInterpolator2330 = createNode("OrientationInterpolator");
OrientationInterpolator2330.DEF = "Pitches_r_hip_RotationInterpolator";
OrientationInterpolator2330.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2330.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0]);
Group2325.children[4] = OrientationInterpolator2330;

OrientationInterpolator OrientationInterpolator2331 = createNode("OrientationInterpolator");
OrientationInterpolator2331.DEF = "Pitches_l_ankle_RotationInterpolator";
OrientationInterpolator2331.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2331.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0]);
Group2325.children[5] = OrientationInterpolator2331;

OrientationInterpolator OrientationInterpolator2332 = createNode("OrientationInterpolator");
OrientationInterpolator2332.DEF = "Pitches_l_knee_RotationInterpolator";
OrientationInterpolator2332.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2332.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2325.children[6] = OrientationInterpolator2332;

OrientationInterpolator OrientationInterpolator2333 = createNode("OrientationInterpolator");
OrientationInterpolator2333.DEF = "Pitches_l_hip_RotationInterpolator";
OrientationInterpolator2333.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2333.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0]);
Group2325.children[7] = OrientationInterpolator2333;

OrientationInterpolator OrientationInterpolator2334 = createNode("OrientationInterpolator");
OrientationInterpolator2334.DEF = "Pitches_r_wrist_RotationInterpolator";
OrientationInterpolator2334.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2334.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2325.children[8] = OrientationInterpolator2334;

OrientationInterpolator OrientationInterpolator2335 = createNode("OrientationInterpolator");
OrientationInterpolator2335.DEF = "Pitches_r_elbow_RotationInterpolator";
OrientationInterpolator2335.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2335.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2325.children[9] = OrientationInterpolator2335;

OrientationInterpolator OrientationInterpolator2336 = createNode("OrientationInterpolator");
OrientationInterpolator2336.DEF = "Pitches_r_shoulder_RotationInterpolator";
OrientationInterpolator2336.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2336.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0]);
Group2325.children[10] = OrientationInterpolator2336;

OrientationInterpolator OrientationInterpolator2337 = createNode("OrientationInterpolator");
OrientationInterpolator2337.DEF = "Pitches_l_wrist_RotationInterpolator";
OrientationInterpolator2337.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2337.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2325.children[11] = OrientationInterpolator2337;

OrientationInterpolator OrientationInterpolator2338 = createNode("OrientationInterpolator");
OrientationInterpolator2338.DEF = "Pitches_l_elbow_RotationInterpolator";
OrientationInterpolator2338.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2338.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2325.children[12] = OrientationInterpolator2338;

OrientationInterpolator OrientationInterpolator2339 = createNode("OrientationInterpolator");
OrientationInterpolator2339.DEF = "Pitches_l_shoulder_RotationInterpolator";
OrientationInterpolator2339.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2339.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0]);
Group2325.children[13] = OrientationInterpolator2339;

OrientationInterpolator OrientationInterpolator2340 = createNode("OrientationInterpolator");
OrientationInterpolator2340.DEF = "Pitches_head_RotationInterpolator";
OrientationInterpolator2340.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2340.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2325.children[14] = OrientationInterpolator2340;

OrientationInterpolator OrientationInterpolator2341 = createNode("OrientationInterpolator");
OrientationInterpolator2341.DEF = "Pitches_neck_RotationInterpolator";
OrientationInterpolator2341.key = new MFFloat(new float[0,0.25,0.55,1]);
OrientationInterpolator2341.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,0.55,-1,0,0,1.05,0,0,1,0]);
Group2325.children[15] = OrientationInterpolator2341;

OrientationInterpolator OrientationInterpolator2342 = createNode("OrientationInterpolator");
OrientationInterpolator2342.DEF = "Pitches_lower_body_RotationInterpolator";
OrientationInterpolator2342.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2342.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2325.children[16] = OrientationInterpolator2342;

OrientationInterpolator OrientationInterpolator2343 = createNode("OrientationInterpolator");
OrientationInterpolator2343.DEF = "Pitches_upper_body_RotationInterpolator";
OrientationInterpolator2343.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2343.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2325.children[17] = OrientationInterpolator2343;

OrientationInterpolator OrientationInterpolator2344 = createNode("OrientationInterpolator");
OrientationInterpolator2344.DEF = "Pitches_whole_body_RotationInterpolator";
OrientationInterpolator2344.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2344.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2325.children[18] = OrientationInterpolator2344;

PositionInterpolator PositionInterpolator2345 = createNode("PositionInterpolator");
PositionInterpolator2345.DEF = "Pitches_whole_body_TranslationInterpolator";
PositionInterpolator2345.key = new MFFloat(new float[0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]);
PositionInterpolator2345.keyValue = new MFVec3f(new float[0,0,0,0,-0.15,0,0,-0.7,0,0,-0.15,0,0,0,0,0,-0.15,0,0,-0.7,0,0,-0.15,0,0,0,0]);
Group2325.children[19] = PositionInterpolator2345;

OrientationInterpolator OrientationInterpolator2346 = createNode("OrientationInterpolator");
OrientationInterpolator2346.DEF = "Pitch_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2346.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2346.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2325.children[20] = OrientationInterpolator2346;

OrientationInterpolator OrientationInterpolator2347 = createNode("OrientationInterpolator");
OrientationInterpolator2347.DEF = "Pitch_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2347.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2347.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2325.children[21] = OrientationInterpolator2347;

OrientationInterpolator OrientationInterpolator2348 = createNode("OrientationInterpolator");
OrientationInterpolator2348.DEF = "Pitch_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2348.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2348.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2325.children[22] = OrientationInterpolator2348;

OrientationInterpolator OrientationInterpolator2349 = createNode("OrientationInterpolator");
OrientationInterpolator2349.DEF = "Pitch_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2349.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2349.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2325.children[23] = OrientationInterpolator2349;

OrientationInterpolator OrientationInterpolator2350 = createNode("OrientationInterpolator");
OrientationInterpolator2350.DEF = "Pitch_sacroiliac_YawInterpolator";
OrientationInterpolator2350.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2350.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2325.children[24] = OrientationInterpolator2350;

OrientationInterpolator OrientationInterpolator2351 = createNode("OrientationInterpolator");
OrientationInterpolator2351.DEF = "Pitch_vl5_YawInterpolator";
OrientationInterpolator2351.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2351.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2325.children[25] = OrientationInterpolator2351;

OrientationInterpolator OrientationInterpolator2352 = createNode("OrientationInterpolator");
OrientationInterpolator2352.DEF = "Pitch_vc6_YawInterpolator";
OrientationInterpolator2352.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2352.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2325.children[26] = OrientationInterpolator2352;

OrientationInterpolator OrientationInterpolator2353 = createNode("OrientationInterpolator");
OrientationInterpolator2353.DEF = "Pitch_l_thumb1_PitchInterpolator";
OrientationInterpolator2353.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2353.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.3,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group2325.children[27] = OrientationInterpolator2353;

OrientationInterpolator OrientationInterpolator2354 = createNode("OrientationInterpolator");
OrientationInterpolator2354.DEF = "Pitch_r_thumb1_PitchInterpolator";
OrientationInterpolator2354.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2354.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.3,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group2325.children[28] = OrientationInterpolator2354;

ROUTE ROUTE2355 = createNode("ROUTE");
ROUTE2355.fromField = "fraction_changed";
ROUTE2355.fromNode = "PitchTimer";
ROUTE2355.toField = "set_fraction";
ROUTE2355.toNode = "Pitches_r_ankle_RotationInterpolator";
Group2325.children[29] = ROUTE2355;

ROUTE ROUTE2356 = createNode("ROUTE");
ROUTE2356.fromField = "fraction_changed";
ROUTE2356.fromNode = "PitchTimer";
ROUTE2356.toField = "set_fraction";
ROUTE2356.toNode = "Pitches_r_knee_RotationInterpolator";
Group2325.children[30] = ROUTE2356;

ROUTE ROUTE2357 = createNode("ROUTE");
ROUTE2357.fromField = "fraction_changed";
ROUTE2357.fromNode = "PitchTimer";
ROUTE2357.toField = "set_fraction";
ROUTE2357.toNode = "Pitches_r_hip_RotationInterpolator";
Group2325.children[31] = ROUTE2357;

ROUTE ROUTE2358 = createNode("ROUTE");
ROUTE2358.fromField = "fraction_changed";
ROUTE2358.fromNode = "PitchTimer";
ROUTE2358.toField = "set_fraction";
ROUTE2358.toNode = "Pitches_l_ankle_RotationInterpolator";
Group2325.children[32] = ROUTE2358;

ROUTE ROUTE2359 = createNode("ROUTE");
ROUTE2359.fromField = "fraction_changed";
ROUTE2359.fromNode = "PitchTimer";
ROUTE2359.toField = "set_fraction";
ROUTE2359.toNode = "Pitches_l_knee_RotationInterpolator";
Group2325.children[33] = ROUTE2359;

ROUTE ROUTE2360 = createNode("ROUTE");
ROUTE2360.fromField = "fraction_changed";
ROUTE2360.fromNode = "PitchTimer";
ROUTE2360.toField = "set_fraction";
ROUTE2360.toNode = "Pitches_l_hip_RotationInterpolator";
Group2325.children[34] = ROUTE2360;

ROUTE ROUTE2361 = createNode("ROUTE");
ROUTE2361.fromField = "fraction_changed";
ROUTE2361.fromNode = "PitchTimer";
ROUTE2361.toField = "set_fraction";
ROUTE2361.toNode = "Pitches_lower_body_RotationInterpolator";
Group2325.children[35] = ROUTE2361;

ROUTE ROUTE2362 = createNode("ROUTE");
ROUTE2362.fromField = "fraction_changed";
ROUTE2362.fromNode = "PitchTimer";
ROUTE2362.toField = "set_fraction";
ROUTE2362.toNode = "Pitches_r_wrist_RotationInterpolator";
Group2325.children[36] = ROUTE2362;

ROUTE ROUTE2363 = createNode("ROUTE");
ROUTE2363.fromField = "fraction_changed";
ROUTE2363.fromNode = "PitchTimer";
ROUTE2363.toField = "set_fraction";
ROUTE2363.toNode = "Pitches_r_elbow_RotationInterpolator";
Group2325.children[37] = ROUTE2363;

ROUTE ROUTE2364 = createNode("ROUTE");
ROUTE2364.fromField = "fraction_changed";
ROUTE2364.fromNode = "PitchTimer";
ROUTE2364.toField = "set_fraction";
ROUTE2364.toNode = "Pitches_r_shoulder_RotationInterpolator";
Group2325.children[38] = ROUTE2364;

ROUTE ROUTE2365 = createNode("ROUTE");
ROUTE2365.fromField = "fraction_changed";
ROUTE2365.fromNode = "PitchTimer";
ROUTE2365.toField = "set_fraction";
ROUTE2365.toNode = "Pitches_l_wrist_RotationInterpolator";
Group2325.children[39] = ROUTE2365;

ROUTE ROUTE2366 = createNode("ROUTE");
ROUTE2366.fromField = "fraction_changed";
ROUTE2366.fromNode = "PitchTimer";
ROUTE2366.toField = "set_fraction";
ROUTE2366.toNode = "Pitches_l_elbow_RotationInterpolator";
Group2325.children[40] = ROUTE2366;

ROUTE ROUTE2367 = createNode("ROUTE");
ROUTE2367.fromField = "fraction_changed";
ROUTE2367.fromNode = "PitchTimer";
ROUTE2367.toField = "set_fraction";
ROUTE2367.toNode = "Pitches_l_shoulder_RotationInterpolator";
Group2325.children[41] = ROUTE2367;

ROUTE ROUTE2368 = createNode("ROUTE");
ROUTE2368.fromField = "fraction_changed";
ROUTE2368.fromNode = "PitchTimer";
ROUTE2368.toField = "set_fraction";
ROUTE2368.toNode = "Pitches_head_RotationInterpolator";
Group2325.children[42] = ROUTE2368;

ROUTE ROUTE2369 = createNode("ROUTE");
ROUTE2369.fromField = "fraction_changed";
ROUTE2369.fromNode = "PitchTimer";
ROUTE2369.toField = "set_fraction";
ROUTE2369.toNode = "Pitches_neck_RotationInterpolator";
Group2325.children[43] = ROUTE2369;

ROUTE ROUTE2370 = createNode("ROUTE");
ROUTE2370.fromField = "fraction_changed";
ROUTE2370.fromNode = "PitchTimer";
ROUTE2370.toField = "set_fraction";
ROUTE2370.toNode = "Pitches_upper_body_RotationInterpolator";
Group2325.children[44] = ROUTE2370;

ROUTE ROUTE2371 = createNode("ROUTE");
ROUTE2371.fromField = "fraction_changed";
ROUTE2371.fromNode = "PitchTimer";
ROUTE2371.toField = "set_fraction";
ROUTE2371.toNode = "Pitches_whole_body_RotationInterpolator";
Group2325.children[45] = ROUTE2371;

ROUTE ROUTE2372 = createNode("ROUTE");
ROUTE2372.fromField = "fraction_changed";
ROUTE2372.fromNode = "PitchTimer";
ROUTE2372.toField = "set_fraction";
ROUTE2372.toNode = "Pitches_whole_body_TranslationInterpolator";
Group2325.children[46] = ROUTE2372;

ROUTE ROUTE2373 = createNode("ROUTE");
ROUTE2373.fromField = "fraction_changed";
ROUTE2373.fromNode = "PitchTimer";
ROUTE2373.toField = "set_fraction";
ROUTE2373.toNode = "Pitch_l_sternoclavicular_RollInterpolator";
Group2325.children[47] = ROUTE2373;

ROUTE ROUTE2374 = createNode("ROUTE");
ROUTE2374.fromField = "fraction_changed";
ROUTE2374.fromNode = "PitchTimer";
ROUTE2374.toField = "set_fraction";
ROUTE2374.toNode = "Pitch_l_acromioclavicular_RollInterpolator";
Group2325.children[48] = ROUTE2374;

ROUTE ROUTE2375 = createNode("ROUTE");
ROUTE2375.fromField = "fraction_changed";
ROUTE2375.fromNode = "PitchTimer";
ROUTE2375.toField = "set_fraction";
ROUTE2375.toNode = "Pitch_r_sternoclavicular_RollInterpolator";
Group2325.children[49] = ROUTE2375;

ROUTE ROUTE2376 = createNode("ROUTE");
ROUTE2376.fromField = "fraction_changed";
ROUTE2376.fromNode = "PitchTimer";
ROUTE2376.toField = "set_fraction";
ROUTE2376.toNode = "Pitch_r_acromioclavicular_RollInterpolator";
Group2325.children[50] = ROUTE2376;

ROUTE ROUTE2377 = createNode("ROUTE");
ROUTE2377.fromField = "fraction_changed";
ROUTE2377.fromNode = "PitchTimer";
ROUTE2377.toField = "set_fraction";
ROUTE2377.toNode = "Pitch_r_metatarsal_PitchInterpolator";
Group2325.children[51] = ROUTE2377;

ROUTE ROUTE2378 = createNode("ROUTE");
ROUTE2378.fromField = "fraction_changed";
ROUTE2378.fromNode = "PitchTimer";
ROUTE2378.toField = "set_fraction";
ROUTE2378.toNode = "Pitch_sacroiliac_YawInterpolator";
Group2325.children[52] = ROUTE2378;

ROUTE ROUTE2379 = createNode("ROUTE");
ROUTE2379.fromField = "fraction_changed";
ROUTE2379.fromNode = "PitchTimer";
ROUTE2379.toField = "set_fraction";
ROUTE2379.toNode = "Pitch_vl5_YawInterpolator";
Group2325.children[53] = ROUTE2379;

ROUTE ROUTE2380 = createNode("ROUTE");
ROUTE2380.fromField = "fraction_changed";
ROUTE2380.fromNode = "PitchTimer";
ROUTE2380.toField = "set_fraction";
ROUTE2380.toNode = "Pitch_vc6_YawInterpolator";
Group2325.children[54] = ROUTE2380;

ROUTE ROUTE2381 = createNode("ROUTE");
ROUTE2381.fromField = "fraction_changed";
ROUTE2381.fromNode = "PitchTimer";
ROUTE2381.toField = "set_fraction";
ROUTE2381.toNode = "Pitch_l_thumb1_PitchInterpolator";
Group2325.children[55] = ROUTE2381;

ROUTE ROUTE2382 = createNode("ROUTE");
ROUTE2382.fromField = "fraction_changed";
ROUTE2382.fromNode = "PitchTimer";
ROUTE2382.toField = "set_fraction";
ROUTE2382.toNode = "Pitch_r_thumb1_PitchInterpolator";
Group2325.children[56] = ROUTE2382;

ROUTE ROUTE2383 = createNode("ROUTE");
ROUTE2383.fromField = "value_changed";
ROUTE2383.fromNode = "Pitches_r_ankle_RotationInterpolator";
ROUTE2383.toField = "rotation";
ROUTE2383.toNode = "hanim_r_ankle";
Group2325.children[57] = ROUTE2383;

ROUTE ROUTE2384 = createNode("ROUTE");
ROUTE2384.fromField = "value_changed";
ROUTE2384.fromNode = "Pitches_r_knee_RotationInterpolator";
ROUTE2384.toField = "rotation";
ROUTE2384.toNode = "hanim_r_knee";
Group2325.children[58] = ROUTE2384;

ROUTE ROUTE2385 = createNode("ROUTE");
ROUTE2385.fromField = "value_changed";
ROUTE2385.fromNode = "Pitches_r_hip_RotationInterpolator";
ROUTE2385.toField = "rotation";
ROUTE2385.toNode = "hanim_r_hip";
Group2325.children[59] = ROUTE2385;

ROUTE ROUTE2386 = createNode("ROUTE");
ROUTE2386.fromField = "value_changed";
ROUTE2386.fromNode = "Pitches_l_ankle_RotationInterpolator";
ROUTE2386.toField = "rotation";
ROUTE2386.toNode = "hanim_l_ankle";
Group2325.children[60] = ROUTE2386;

ROUTE ROUTE2387 = createNode("ROUTE");
ROUTE2387.fromField = "value_changed";
ROUTE2387.fromNode = "Pitches_l_knee_RotationInterpolator";
ROUTE2387.toField = "rotation";
ROUTE2387.toNode = "hanim_l_knee";
Group2325.children[61] = ROUTE2387;

ROUTE ROUTE2388 = createNode("ROUTE");
ROUTE2388.fromField = "value_changed";
ROUTE2388.fromNode = "Pitches_l_hip_RotationInterpolator";
ROUTE2388.toField = "rotation";
ROUTE2388.toNode = "hanim_l_hip";
Group2325.children[62] = ROUTE2388;

ROUTE ROUTE2389 = createNode("ROUTE");
ROUTE2389.fromField = "value_changed";
ROUTE2389.fromNode = "Pitches_lower_body_RotationInterpolator";
ROUTE2389.toField = "rotation";
ROUTE2389.toNode = "hanim_sacroiliac";
Group2325.children[63] = ROUTE2389;

ROUTE ROUTE2390 = createNode("ROUTE");
ROUTE2390.fromField = "value_changed";
ROUTE2390.fromNode = "Pitches_r_wrist_RotationInterpolator";
ROUTE2390.toField = "rotation";
ROUTE2390.toNode = "hanim_r_wrist";
Group2325.children[64] = ROUTE2390;

ROUTE ROUTE2391 = createNode("ROUTE");
ROUTE2391.fromField = "value_changed";
ROUTE2391.fromNode = "Pitches_r_elbow_RotationInterpolator";
ROUTE2391.toField = "rotation";
ROUTE2391.toNode = "hanim_r_elbow";
Group2325.children[65] = ROUTE2391;

ROUTE ROUTE2392 = createNode("ROUTE");
ROUTE2392.fromField = "value_changed";
ROUTE2392.fromNode = "Pitches_r_shoulder_RotationInterpolator";
ROUTE2392.toField = "rotation";
ROUTE2392.toNode = "hanim_r_shoulder";
Group2325.children[66] = ROUTE2392;

ROUTE ROUTE2393 = createNode("ROUTE");
ROUTE2393.fromField = "value_changed";
ROUTE2393.fromNode = "Pitches_l_wrist_RotationInterpolator";
ROUTE2393.toField = "rotation";
ROUTE2393.toNode = "hanim_l_wrist";
Group2325.children[67] = ROUTE2393;

ROUTE ROUTE2394 = createNode("ROUTE");
ROUTE2394.fromField = "value_changed";
ROUTE2394.fromNode = "Pitches_l_elbow_RotationInterpolator";
ROUTE2394.toField = "rotation";
ROUTE2394.toNode = "hanim_l_elbow";
Group2325.children[68] = ROUTE2394;

ROUTE ROUTE2395 = createNode("ROUTE");
ROUTE2395.fromField = "value_changed";
ROUTE2395.fromNode = "Pitches_l_shoulder_RotationInterpolator";
ROUTE2395.toField = "rotation";
ROUTE2395.toNode = "hanim_l_shoulder";
Group2325.children[69] = ROUTE2395;

ROUTE ROUTE2396 = createNode("ROUTE");
ROUTE2396.fromField = "value_changed";
ROUTE2396.fromNode = "Pitches_head_RotationInterpolator";
ROUTE2396.toField = "rotation";
ROUTE2396.toNode = "hanim_skullbase";
Group2325.children[70] = ROUTE2396;

ROUTE ROUTE2397 = createNode("ROUTE");
ROUTE2397.fromField = "value_changed";
ROUTE2397.fromNode = "Pitches_neck_RotationInterpolator";
ROUTE2397.toField = "rotation";
ROUTE2397.toNode = "hanim_vc4";
Group2325.children[71] = ROUTE2397;

ROUTE ROUTE2398 = createNode("ROUTE");
ROUTE2398.fromField = "value_changed";
ROUTE2398.fromNode = "Pitches_upper_body_RotationInterpolator";
ROUTE2398.toField = "rotation";
ROUTE2398.toNode = "hanim_vl1";
Group2325.children[72] = ROUTE2398;

ROUTE ROUTE2399 = createNode("ROUTE");
ROUTE2399.fromField = "value_changed";
ROUTE2399.fromNode = "Pitches_whole_body_RotationInterpolator";
ROUTE2399.toField = "rotation";
ROUTE2399.toNode = "hanim_humanoid_root";
Group2325.children[73] = ROUTE2399;

ROUTE ROUTE2400 = createNode("ROUTE");
ROUTE2400.fromField = "value_changed";
ROUTE2400.fromNode = "Pitches_whole_body_TranslationInterpolator";
ROUTE2400.toField = "translation";
ROUTE2400.toNode = "hanim_humanoid_root";
Group2325.children[74] = ROUTE2400;

ROUTE ROUTE2401 = createNode("ROUTE");
ROUTE2401.fromField = "value_changed";
ROUTE2401.fromNode = "Pitch_l_sternoclavicular_RollInterpolator";
ROUTE2401.toField = "rotation";
ROUTE2401.toNode = "hanim_l_sternoclavicular";
Group2325.children[75] = ROUTE2401;

ROUTE ROUTE2402 = createNode("ROUTE");
ROUTE2402.fromField = "value_changed";
ROUTE2402.fromNode = "Pitch_l_acromioclavicular_RollInterpolator";
ROUTE2402.toField = "rotation";
ROUTE2402.toNode = "hanim_l_acromioclavicular";
Group2325.children[76] = ROUTE2402;

ROUTE ROUTE2403 = createNode("ROUTE");
ROUTE2403.fromField = "value_changed";
ROUTE2403.fromNode = "Pitch_r_sternoclavicular_RollInterpolator";
ROUTE2403.toField = "rotation";
ROUTE2403.toNode = "hanim_r_sternoclavicular";
Group2325.children[77] = ROUTE2403;

ROUTE ROUTE2404 = createNode("ROUTE");
ROUTE2404.fromField = "value_changed";
ROUTE2404.fromNode = "Pitch_r_acromioclavicular_RollInterpolator";
ROUTE2404.toField = "rotation";
ROUTE2404.toNode = "hanim_r_acromioclavicular";
Group2325.children[78] = ROUTE2404;

ROUTE ROUTE2405 = createNode("ROUTE");
ROUTE2405.fromField = "value_changed";
ROUTE2405.fromNode = "Pitch_r_metatarsal_PitchInterpolator";
ROUTE2405.toField = "rotation";
ROUTE2405.toNode = "hanim_l_metatarsal";
Group2325.children[79] = ROUTE2405;

ROUTE ROUTE2406 = createNode("ROUTE");
ROUTE2406.fromField = "value_changed";
ROUTE2406.fromNode = "Pitch_r_metatarsal_PitchInterpolator";
ROUTE2406.toField = "rotation";
ROUTE2406.toNode = "hanim_r_metatarsal";
Group2325.children[80] = ROUTE2406;

ROUTE ROUTE2407 = createNode("ROUTE");
ROUTE2407.fromField = "value_changed";
ROUTE2407.fromNode = "Pitch_sacroiliac_YawInterpolator";
ROUTE2407.toField = "rotation";
ROUTE2407.toNode = "hanim_sacroiliac";
Group2325.children[81] = ROUTE2407;

ROUTE ROUTE2408 = createNode("ROUTE");
ROUTE2408.fromField = "value_changed";
ROUTE2408.fromNode = "Pitch_vl5_YawInterpolator";
ROUTE2408.toField = "rotation";
ROUTE2408.toNode = "hanim_vl5";
Group2325.children[82] = ROUTE2408;

ROUTE ROUTE2409 = createNode("ROUTE");
ROUTE2409.fromField = "value_changed";
ROUTE2409.fromNode = "Pitch_vc6_YawInterpolator";
ROUTE2409.toField = "rotation";
ROUTE2409.toNode = "hanim_vc6";
Group2325.children[83] = ROUTE2409;

ROUTE ROUTE2410 = createNode("ROUTE");
ROUTE2410.fromField = "value_changed";
ROUTE2410.fromNode = "Pitch_l_thumb1_PitchInterpolator";
ROUTE2410.toField = "rotation";
ROUTE2410.toNode = "hanim_l_thumb1";
Group2325.children[84] = ROUTE2410;

ROUTE ROUTE2411 = createNode("ROUTE");
ROUTE2411.fromField = "value_changed";
ROUTE2411.fromNode = "Pitch_r_thumb1_PitchInterpolator";
ROUTE2411.toField = "rotation";
ROUTE2411.toNode = "hanim_r_thumb1";
Group2325.children[85] = ROUTE2411;

children[15] = Group2325;

Group Group2412 = createNode("Group");
Group2412.DEF = "YawsAnimation";
TimeSensor TimeSensor2413 = createNode("TimeSensor");
TimeSensor2413.DEF = "YawTimer";
TimeSensor2413.cycleInterval = 5.73;
TimeSensor2413.loop = True;
Group2412.children = new MFNode();

Group2412.children[0] = TimeSensor2413;

OrientationInterpolator OrientationInterpolator2414 = createNode("OrientationInterpolator");
OrientationInterpolator2414.DEF = "Yaw_r_metatarsal_PitchInterpolator";
OrientationInterpolator2414.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2414.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2412.children[1] = OrientationInterpolator2414;

OrientationInterpolator OrientationInterpolator2415 = createNode("OrientationInterpolator");
OrientationInterpolator2415.DEF = "Yaws_r_ankle_RotationInterpolator";
OrientationInterpolator2415.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2415.keyValue = new MFRotation(new float[0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0]);
Group2412.children[2] = OrientationInterpolator2415;

OrientationInterpolator OrientationInterpolator2416 = createNode("OrientationInterpolator");
OrientationInterpolator2416.DEF = "Yaws_r_knee_RotationInterpolator";
OrientationInterpolator2416.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2416.keyValue = new MFRotation(new float[0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0]);
Group2412.children[3] = OrientationInterpolator2416;

OrientationInterpolator OrientationInterpolator2417 = createNode("OrientationInterpolator");
OrientationInterpolator2417.DEF = "Yaws_r_hip_RotationInterpolator";
OrientationInterpolator2417.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2417.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2412.children[4] = OrientationInterpolator2417;

OrientationInterpolator OrientationInterpolator2418 = createNode("OrientationInterpolator");
OrientationInterpolator2418.DEF = "Yaws_l_ankle_RotationInterpolator";
OrientationInterpolator2418.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2418.keyValue = new MFRotation(new float[0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0]);
Group2412.children[5] = OrientationInterpolator2418;

OrientationInterpolator OrientationInterpolator2419 = createNode("OrientationInterpolator");
OrientationInterpolator2419.DEF = "Yaws_l_knee_RotationInterpolator";
OrientationInterpolator2419.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2419.keyValue = new MFRotation(new float[0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0]);
Group2412.children[6] = OrientationInterpolator2419;

OrientationInterpolator OrientationInterpolator2420 = createNode("OrientationInterpolator");
OrientationInterpolator2420.DEF = "Yaws_l_hip_RotationInterpolator";
OrientationInterpolator2420.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2420.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2412.children[7] = OrientationInterpolator2420;

OrientationInterpolator OrientationInterpolator2421 = createNode("OrientationInterpolator");
OrientationInterpolator2421.DEF = "Yaws_r_wrist_RotationInterpolator";
OrientationInterpolator2421.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2421.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2412.children[8] = OrientationInterpolator2421;

OrientationInterpolator OrientationInterpolator2422 = createNode("OrientationInterpolator");
OrientationInterpolator2422.DEF = "Yaws_r_elbow_RotationInterpolator";
OrientationInterpolator2422.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2422.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2412.children[9] = OrientationInterpolator2422;

OrientationInterpolator OrientationInterpolator2423 = createNode("OrientationInterpolator");
OrientationInterpolator2423.DEF = "Yaws_r_shoulder_RotationInterpolator";
OrientationInterpolator2423.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2423.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2412.children[10] = OrientationInterpolator2423;

OrientationInterpolator OrientationInterpolator2424 = createNode("OrientationInterpolator");
OrientationInterpolator2424.DEF = "Yaws_l_wrist_RotationInterpolator";
OrientationInterpolator2424.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2424.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2412.children[11] = OrientationInterpolator2424;

OrientationInterpolator OrientationInterpolator2425 = createNode("OrientationInterpolator");
OrientationInterpolator2425.DEF = "Yaws_l_elbow_RotationInterpolator";
OrientationInterpolator2425.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2425.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2412.children[12] = OrientationInterpolator2425;

OrientationInterpolator OrientationInterpolator2426 = createNode("OrientationInterpolator");
OrientationInterpolator2426.DEF = "Yaws_l_shoulder_RotationInterpolator";
OrientationInterpolator2426.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2426.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2412.children[13] = OrientationInterpolator2426;

OrientationInterpolator OrientationInterpolator2427 = createNode("OrientationInterpolator");
OrientationInterpolator2427.DEF = "Yaws_head_RotationInterpolator";
OrientationInterpolator2427.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2427.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2412.children[14] = OrientationInterpolator2427;

OrientationInterpolator OrientationInterpolator2428 = createNode("OrientationInterpolator");
OrientationInterpolator2428.DEF = "Yaws_neck_RotationInterpolator";
OrientationInterpolator2428.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2428.keyValue = new MFRotation(new float[0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0]);
Group2412.children[15] = OrientationInterpolator2428;

OrientationInterpolator OrientationInterpolator2429 = createNode("OrientationInterpolator");
OrientationInterpolator2429.DEF = "Yaws_upper_body_RotationInterpolator";
OrientationInterpolator2429.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2429.keyValue = new MFRotation(new float[0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0]);
Group2412.children[16] = OrientationInterpolator2429;

OrientationInterpolator OrientationInterpolator2430 = createNode("OrientationInterpolator");
OrientationInterpolator2430.DEF = "Yaws_lower_body_RotationInterpolator";
OrientationInterpolator2430.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2430.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2412.children[17] = OrientationInterpolator2430;

OrientationInterpolator OrientationInterpolator2431 = createNode("OrientationInterpolator");
OrientationInterpolator2431.DEF = "Yaws_whole_body_RotationInterpolator";
OrientationInterpolator2431.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2431.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2412.children[18] = OrientationInterpolator2431;

PositionInterpolator PositionInterpolator2432 = createNode("PositionInterpolator");
PositionInterpolator2432.DEF = "Yaws_whole_body_TranslationInterpolator";
PositionInterpolator2432.key = new MFFloat(new float[0,0.5,1]);
PositionInterpolator2432.keyValue = new MFVec3f(new float[0,0,0,0,0,0,0,0,0]);
Group2412.children[19] = PositionInterpolator2432;

OrientationInterpolator OrientationInterpolator2433 = createNode("OrientationInterpolator");
OrientationInterpolator2433.DEF = "Yaw_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2433.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2433.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2412.children[20] = OrientationInterpolator2433;

OrientationInterpolator OrientationInterpolator2434 = createNode("OrientationInterpolator");
OrientationInterpolator2434.DEF = "Yaw_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2434.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2434.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2412.children[21] = OrientationInterpolator2434;

OrientationInterpolator OrientationInterpolator2435 = createNode("OrientationInterpolator");
OrientationInterpolator2435.DEF = "Yaw_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2435.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2435.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2412.children[22] = OrientationInterpolator2435;

OrientationInterpolator OrientationInterpolator2436 = createNode("OrientationInterpolator");
OrientationInterpolator2436.DEF = "Yaw_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2436.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2436.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2412.children[23] = OrientationInterpolator2436;

OrientationInterpolator OrientationInterpolator2437 = createNode("OrientationInterpolator");
OrientationInterpolator2437.DEF = "Yaw_sacroiliac_YawInterpolator";
OrientationInterpolator2437.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2437.keyValue = new MFRotation(new float[0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,0,0.24,0,-1,0,0.4,0,1,0,0]);
Group2412.children[24] = OrientationInterpolator2437;

OrientationInterpolator OrientationInterpolator2438 = createNode("OrientationInterpolator");
OrientationInterpolator2438.DEF = "Yaw_vl5_YawInterpolator";
OrientationInterpolator2438.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2438.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2412.children[25] = OrientationInterpolator2438;

OrientationInterpolator OrientationInterpolator2439 = createNode("OrientationInterpolator");
OrientationInterpolator2439.DEF = "Yaw_vc6_YawInterpolator";
OrientationInterpolator2439.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2439.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2412.children[26] = OrientationInterpolator2439;

OrientationInterpolator OrientationInterpolator2440 = createNode("OrientationInterpolator");
OrientationInterpolator2440.DEF = "Yaw_l_thumb1_PitchInterpolator";
OrientationInterpolator2440.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2440.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2412.children[27] = OrientationInterpolator2440;

OrientationInterpolator OrientationInterpolator2441 = createNode("OrientationInterpolator");
OrientationInterpolator2441.DEF = "Yaw_r_thumb1_PitchInterpolator";
OrientationInterpolator2441.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2441.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2412.children[28] = OrientationInterpolator2441;

ROUTE ROUTE2442 = createNode("ROUTE");
ROUTE2442.fromField = "fraction_changed";
ROUTE2442.fromNode = "YawTimer";
ROUTE2442.toField = "set_fraction";
ROUTE2442.toNode = "Yaws_r_ankle_RotationInterpolator";
Group2412.children[29] = ROUTE2442;

ROUTE ROUTE2443 = createNode("ROUTE");
ROUTE2443.fromField = "fraction_changed";
ROUTE2443.fromNode = "YawTimer";
ROUTE2443.toField = "set_fraction";
ROUTE2443.toNode = "Yaws_r_knee_RotationInterpolator";
Group2412.children[30] = ROUTE2443;

ROUTE ROUTE2444 = createNode("ROUTE");
ROUTE2444.fromField = "fraction_changed";
ROUTE2444.fromNode = "YawTimer";
ROUTE2444.toField = "set_fraction";
ROUTE2444.toNode = "Yaws_r_hip_RotationInterpolator";
Group2412.children[31] = ROUTE2444;

ROUTE ROUTE2445 = createNode("ROUTE");
ROUTE2445.fromField = "fraction_changed";
ROUTE2445.fromNode = "YawTimer";
ROUTE2445.toField = "set_fraction";
ROUTE2445.toNode = "Yaws_l_ankle_RotationInterpolator";
Group2412.children[32] = ROUTE2445;

ROUTE ROUTE2446 = createNode("ROUTE");
ROUTE2446.fromField = "fraction_changed";
ROUTE2446.fromNode = "YawTimer";
ROUTE2446.toField = "set_fraction";
ROUTE2446.toNode = "Yaws_l_knee_RotationInterpolator";
Group2412.children[33] = ROUTE2446;

ROUTE ROUTE2447 = createNode("ROUTE");
ROUTE2447.fromField = "fraction_changed";
ROUTE2447.fromNode = "YawTimer";
ROUTE2447.toField = "set_fraction";
ROUTE2447.toNode = "Yaws_l_hip_RotationInterpolator";
Group2412.children[34] = ROUTE2447;

ROUTE ROUTE2448 = createNode("ROUTE");
ROUTE2448.fromField = "fraction_changed";
ROUTE2448.fromNode = "YawTimer";
ROUTE2448.toField = "set_fraction";
ROUTE2448.toNode = "Yaws_lower_body_RotationInterpolator";
Group2412.children[35] = ROUTE2448;

ROUTE ROUTE2449 = createNode("ROUTE");
ROUTE2449.fromField = "fraction_changed";
ROUTE2449.fromNode = "YawTimer";
ROUTE2449.toField = "set_fraction";
ROUTE2449.toNode = "Yaws_r_wrist_RotationInterpolator";
Group2412.children[36] = ROUTE2449;

ROUTE ROUTE2450 = createNode("ROUTE");
ROUTE2450.fromField = "fraction_changed";
ROUTE2450.fromNode = "YawTimer";
ROUTE2450.toField = "set_fraction";
ROUTE2450.toNode = "Yaws_r_elbow_RotationInterpolator";
Group2412.children[37] = ROUTE2450;

ROUTE ROUTE2451 = createNode("ROUTE");
ROUTE2451.fromField = "fraction_changed";
ROUTE2451.fromNode = "YawTimer";
ROUTE2451.toField = "set_fraction";
ROUTE2451.toNode = "Yaws_r_shoulder_RotationInterpolator";
Group2412.children[38] = ROUTE2451;

ROUTE ROUTE2452 = createNode("ROUTE");
ROUTE2452.fromField = "fraction_changed";
ROUTE2452.fromNode = "YawTimer";
ROUTE2452.toField = "set_fraction";
ROUTE2452.toNode = "Yaws_l_wrist_RotationInterpolator";
Group2412.children[39] = ROUTE2452;

ROUTE ROUTE2453 = createNode("ROUTE");
ROUTE2453.fromField = "fraction_changed";
ROUTE2453.fromNode = "YawTimer";
ROUTE2453.toField = "set_fraction";
ROUTE2453.toNode = "Yaws_l_elbow_RotationInterpolator";
Group2412.children[40] = ROUTE2453;

ROUTE ROUTE2454 = createNode("ROUTE");
ROUTE2454.fromField = "fraction_changed";
ROUTE2454.fromNode = "YawTimer";
ROUTE2454.toField = "set_fraction";
ROUTE2454.toNode = "Yaws_l_shoulder_RotationInterpolator";
Group2412.children[41] = ROUTE2454;

ROUTE ROUTE2455 = createNode("ROUTE");
ROUTE2455.fromField = "fraction_changed";
ROUTE2455.fromNode = "YawTimer";
ROUTE2455.toField = "set_fraction";
ROUTE2455.toNode = "Yaws_head_RotationInterpolator";
Group2412.children[42] = ROUTE2455;

ROUTE ROUTE2456 = createNode("ROUTE");
ROUTE2456.fromField = "fraction_changed";
ROUTE2456.fromNode = "YawTimer";
ROUTE2456.toField = "set_fraction";
ROUTE2456.toNode = "Yaws_neck_RotationInterpolator";
Group2412.children[43] = ROUTE2456;

ROUTE ROUTE2457 = createNode("ROUTE");
ROUTE2457.fromField = "fraction_changed";
ROUTE2457.fromNode = "YawTimer";
ROUTE2457.toField = "set_fraction";
ROUTE2457.toNode = "Yaws_upper_body_RotationInterpolator";
Group2412.children[44] = ROUTE2457;

ROUTE ROUTE2458 = createNode("ROUTE");
ROUTE2458.fromField = "fraction_changed";
ROUTE2458.fromNode = "YawTimer";
ROUTE2458.toField = "set_fraction";
ROUTE2458.toNode = "Yaws_whole_body_RotationInterpolator";
Group2412.children[45] = ROUTE2458;

ROUTE ROUTE2459 = createNode("ROUTE");
ROUTE2459.fromField = "fraction_changed";
ROUTE2459.fromNode = "YawTimer";
ROUTE2459.toField = "set_fraction";
ROUTE2459.toNode = "Yaws_whole_body_TranslationInterpolator";
Group2412.children[46] = ROUTE2459;

ROUTE ROUTE2460 = createNode("ROUTE");
ROUTE2460.fromField = "fraction_changed";
ROUTE2460.fromNode = "YawTimer";
ROUTE2460.toField = "set_fraction";
ROUTE2460.toNode = "Yaw_l_sternoclavicular_RollInterpolator";
Group2412.children[47] = ROUTE2460;

ROUTE ROUTE2461 = createNode("ROUTE");
ROUTE2461.fromField = "fraction_changed";
ROUTE2461.fromNode = "YawTimer";
ROUTE2461.toField = "set_fraction";
ROUTE2461.toNode = "Yaw_l_acromioclavicular_RollInterpolator";
Group2412.children[48] = ROUTE2461;

ROUTE ROUTE2462 = createNode("ROUTE");
ROUTE2462.fromField = "fraction_changed";
ROUTE2462.fromNode = "YawTimer";
ROUTE2462.toField = "set_fraction";
ROUTE2462.toNode = "Yaw_r_sternoclavicular_RollInterpolator";
Group2412.children[49] = ROUTE2462;

ROUTE ROUTE2463 = createNode("ROUTE");
ROUTE2463.fromField = "fraction_changed";
ROUTE2463.fromNode = "YawTimer";
ROUTE2463.toField = "set_fraction";
ROUTE2463.toNode = "Yaw_r_acromioclavicular_RollInterpolator";
Group2412.children[50] = ROUTE2463;

ROUTE ROUTE2464 = createNode("ROUTE");
ROUTE2464.fromField = "fraction_changed";
ROUTE2464.fromNode = "YawTimer";
ROUTE2464.toField = "set_fraction";
ROUTE2464.toNode = "Yaw_r_metatarsal_PitchInterpolator";
Group2412.children[51] = ROUTE2464;

ROUTE ROUTE2465 = createNode("ROUTE");
ROUTE2465.fromField = "fraction_changed";
ROUTE2465.fromNode = "YawTimer";
ROUTE2465.toField = "set_fraction";
ROUTE2465.toNode = "Yaw_sacroiliac_YawInterpolator";
Group2412.children[52] = ROUTE2465;

ROUTE ROUTE2466 = createNode("ROUTE");
ROUTE2466.fromField = "fraction_changed";
ROUTE2466.fromNode = "YawTimer";
ROUTE2466.toField = "set_fraction";
ROUTE2466.toNode = "Yaw_vl5_YawInterpolator";
Group2412.children[53] = ROUTE2466;

ROUTE ROUTE2467 = createNode("ROUTE");
ROUTE2467.fromField = "fraction_changed";
ROUTE2467.fromNode = "YawTimer";
ROUTE2467.toField = "set_fraction";
ROUTE2467.toNode = "Yaw_vc6_YawInterpolator";
Group2412.children[54] = ROUTE2467;

ROUTE ROUTE2468 = createNode("ROUTE");
ROUTE2468.fromField = "fraction_changed";
ROUTE2468.fromNode = "YawTimer";
ROUTE2468.toField = "set_fraction";
ROUTE2468.toNode = "Yaw_l_thumb1_PitchInterpolator";
Group2412.children[55] = ROUTE2468;

ROUTE ROUTE2469 = createNode("ROUTE");
ROUTE2469.fromField = "fraction_changed";
ROUTE2469.fromNode = "YawTimer";
ROUTE2469.toField = "set_fraction";
ROUTE2469.toNode = "Yaw_r_thumb1_PitchInterpolator";
Group2412.children[56] = ROUTE2469;

ROUTE ROUTE2470 = createNode("ROUTE");
ROUTE2470.fromField = "value_changed";
ROUTE2470.fromNode = "Yaws_r_ankle_RotationInterpolator";
ROUTE2470.toField = "rotation";
ROUTE2470.toNode = "hanim_r_ankle";
Group2412.children[57] = ROUTE2470;

ROUTE ROUTE2471 = createNode("ROUTE");
ROUTE2471.fromField = "value_changed";
ROUTE2471.fromNode = "Yaws_r_knee_RotationInterpolator";
ROUTE2471.toField = "rotation";
ROUTE2471.toNode = "hanim_r_knee";
Group2412.children[58] = ROUTE2471;

ROUTE ROUTE2472 = createNode("ROUTE");
ROUTE2472.fromField = "value_changed";
ROUTE2472.fromNode = "Yaws_r_hip_RotationInterpolator";
ROUTE2472.toField = "rotation";
ROUTE2472.toNode = "hanim_r_hip";
Group2412.children[59] = ROUTE2472;

ROUTE ROUTE2473 = createNode("ROUTE");
ROUTE2473.fromField = "value_changed";
ROUTE2473.fromNode = "Yaws_l_ankle_RotationInterpolator";
ROUTE2473.toField = "rotation";
ROUTE2473.toNode = "hanim_l_ankle";
Group2412.children[60] = ROUTE2473;

ROUTE ROUTE2474 = createNode("ROUTE");
ROUTE2474.fromField = "value_changed";
ROUTE2474.fromNode = "Yaws_l_knee_RotationInterpolator";
ROUTE2474.toField = "rotation";
ROUTE2474.toNode = "hanim_l_knee";
Group2412.children[61] = ROUTE2474;

ROUTE ROUTE2475 = createNode("ROUTE");
ROUTE2475.fromField = "value_changed";
ROUTE2475.fromNode = "Yaws_l_hip_RotationInterpolator";
ROUTE2475.toField = "rotation";
ROUTE2475.toNode = "hanim_l_hip";
Group2412.children[62] = ROUTE2475;

ROUTE ROUTE2476 = createNode("ROUTE");
ROUTE2476.fromField = "value_changed";
ROUTE2476.fromNode = "Yaws_lower_body_RotationInterpolator";
ROUTE2476.toField = "rotation";
ROUTE2476.toNode = "hanim_sacroiliac";
Group2412.children[63] = ROUTE2476;

ROUTE ROUTE2477 = createNode("ROUTE");
ROUTE2477.fromField = "value_changed";
ROUTE2477.fromNode = "Yaws_r_wrist_RotationInterpolator";
ROUTE2477.toField = "rotation";
ROUTE2477.toNode = "hanim_r_wrist";
Group2412.children[64] = ROUTE2477;

ROUTE ROUTE2478 = createNode("ROUTE");
ROUTE2478.fromField = "value_changed";
ROUTE2478.fromNode = "Yaws_r_elbow_RotationInterpolator";
ROUTE2478.toField = "rotation";
ROUTE2478.toNode = "hanim_r_elbow";
Group2412.children[65] = ROUTE2478;

ROUTE ROUTE2479 = createNode("ROUTE");
ROUTE2479.fromField = "value_changed";
ROUTE2479.fromNode = "Yaws_r_shoulder_RotationInterpolator";
ROUTE2479.toField = "rotation";
ROUTE2479.toNode = "hanim_r_shoulder";
Group2412.children[66] = ROUTE2479;

ROUTE ROUTE2480 = createNode("ROUTE");
ROUTE2480.fromField = "value_changed";
ROUTE2480.fromNode = "Yaws_l_wrist_RotationInterpolator";
ROUTE2480.toField = "rotation";
ROUTE2480.toNode = "hanim_l_wrist";
Group2412.children[67] = ROUTE2480;

ROUTE ROUTE2481 = createNode("ROUTE");
ROUTE2481.fromField = "value_changed";
ROUTE2481.fromNode = "Yaws_l_elbow_RotationInterpolator";
ROUTE2481.toField = "rotation";
ROUTE2481.toNode = "hanim_l_elbow";
Group2412.children[68] = ROUTE2481;

ROUTE ROUTE2482 = createNode("ROUTE");
ROUTE2482.fromField = "value_changed";
ROUTE2482.fromNode = "Yaws_l_shoulder_RotationInterpolator";
ROUTE2482.toField = "rotation";
ROUTE2482.toNode = "hanim_l_shoulder";
Group2412.children[69] = ROUTE2482;

ROUTE ROUTE2483 = createNode("ROUTE");
ROUTE2483.fromField = "value_changed";
ROUTE2483.fromNode = "Yaws_head_RotationInterpolator";
ROUTE2483.toField = "rotation";
ROUTE2483.toNode = "hanim_skullbase";
Group2412.children[70] = ROUTE2483;

ROUTE ROUTE2484 = createNode("ROUTE");
ROUTE2484.fromField = "value_changed";
ROUTE2484.fromNode = "Yaws_neck_RotationInterpolator";
ROUTE2484.toField = "rotation";
ROUTE2484.toNode = "hanim_vc4";
Group2412.children[71] = ROUTE2484;

ROUTE ROUTE2485 = createNode("ROUTE");
ROUTE2485.fromField = "value_changed";
ROUTE2485.fromNode = "Yaws_upper_body_RotationInterpolator";
ROUTE2485.toField = "rotation";
ROUTE2485.toNode = "hanim_vl1";
Group2412.children[72] = ROUTE2485;

ROUTE ROUTE2486 = createNode("ROUTE");
ROUTE2486.fromField = "value_changed";
ROUTE2486.fromNode = "Yaws_whole_body_RotationInterpolator";
ROUTE2486.toField = "rotation";
ROUTE2486.toNode = "hanim_humanoid_root";
Group2412.children[73] = ROUTE2486;

ROUTE ROUTE2487 = createNode("ROUTE");
ROUTE2487.fromField = "value_changed";
ROUTE2487.fromNode = "Yaws_whole_body_TranslationInterpolator";
ROUTE2487.toField = "translation";
ROUTE2487.toNode = "hanim_humanoid_root";
Group2412.children[74] = ROUTE2487;

ROUTE ROUTE2488 = createNode("ROUTE");
ROUTE2488.fromField = "value_changed";
ROUTE2488.fromNode = "Yaw_l_sternoclavicular_RollInterpolator";
ROUTE2488.toField = "rotation";
ROUTE2488.toNode = "hanim_l_sternoclavicular";
Group2412.children[75] = ROUTE2488;

ROUTE ROUTE2489 = createNode("ROUTE");
ROUTE2489.fromField = "value_changed";
ROUTE2489.fromNode = "Yaw_l_acromioclavicular_RollInterpolator";
ROUTE2489.toField = "rotation";
ROUTE2489.toNode = "hanim_l_acromioclavicular";
Group2412.children[76] = ROUTE2489;

ROUTE ROUTE2490 = createNode("ROUTE");
ROUTE2490.fromField = "value_changed";
ROUTE2490.fromNode = "Yaw_r_sternoclavicular_RollInterpolator";
ROUTE2490.toField = "rotation";
ROUTE2490.toNode = "hanim_r_sternoclavicular";
Group2412.children[77] = ROUTE2490;

ROUTE ROUTE2491 = createNode("ROUTE");
ROUTE2491.fromField = "value_changed";
ROUTE2491.fromNode = "Yaw_r_acromioclavicular_RollInterpolator";
ROUTE2491.toField = "rotation";
ROUTE2491.toNode = "hanim_r_acromioclavicular";
Group2412.children[78] = ROUTE2491;

ROUTE ROUTE2492 = createNode("ROUTE");
ROUTE2492.fromField = "value_changed";
ROUTE2492.fromNode = "Yaw_r_metatarsal_PitchInterpolator";
ROUTE2492.toField = "rotation";
ROUTE2492.toNode = "hanim_l_metatarsal";
Group2412.children[79] = ROUTE2492;

ROUTE ROUTE2493 = createNode("ROUTE");
ROUTE2493.fromField = "value_changed";
ROUTE2493.fromNode = "Yaw_r_metatarsal_PitchInterpolator";
ROUTE2493.toField = "rotation";
ROUTE2493.toNode = "hanim_r_metatarsal";
Group2412.children[80] = ROUTE2493;

ROUTE ROUTE2494 = createNode("ROUTE");
ROUTE2494.fromField = "value_changed";
ROUTE2494.fromNode = "Yaw_sacroiliac_YawInterpolator";
ROUTE2494.toField = "rotation";
ROUTE2494.toNode = "hanim_sacroiliac";
Group2412.children[81] = ROUTE2494;

ROUTE ROUTE2495 = createNode("ROUTE");
ROUTE2495.fromField = "value_changed";
ROUTE2495.fromNode = "Yaw_vl5_YawInterpolator";
ROUTE2495.toField = "rotation";
ROUTE2495.toNode = "hanim_vl5";
Group2412.children[82] = ROUTE2495;

ROUTE ROUTE2496 = createNode("ROUTE");
ROUTE2496.fromField = "value_changed";
ROUTE2496.fromNode = "Yaw_vc6_YawInterpolator";
ROUTE2496.toField = "rotation";
ROUTE2496.toNode = "hanim_vc6";
Group2412.children[83] = ROUTE2496;

ROUTE ROUTE2497 = createNode("ROUTE");
ROUTE2497.fromField = "value_changed";
ROUTE2497.fromNode = "Yaw_l_thumb1_PitchInterpolator";
ROUTE2497.toField = "rotation";
ROUTE2497.toNode = "hanim_l_thumb1";
Group2412.children[84] = ROUTE2497;

ROUTE ROUTE2498 = createNode("ROUTE");
ROUTE2498.fromField = "value_changed";
ROUTE2498.fromNode = "Yaw_r_thumb1_PitchInterpolator";
ROUTE2498.toField = "rotation";
ROUTE2498.toNode = "hanim_r_thumb1";
Group2412.children[85] = ROUTE2498;

children[16] = Group2412;

Group Group2499 = createNode("Group");
Group2499.DEF = "RollsAnimation";
TimeSensor TimeSensor2500 = createNode("TimeSensor");
TimeSensor2500.DEF = "RollTimer";
TimeSensor2500.cycleInterval = 5.73;
TimeSensor2500.loop = True;
Group2499.children = new MFNode();

Group2499.children[0] = TimeSensor2500;

OrientationInterpolator OrientationInterpolator2501 = createNode("OrientationInterpolator");
OrientationInterpolator2501.DEF = "Roll_r_metatarsal_PitchInterpolator";
OrientationInterpolator2501.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2501.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2499.children[1] = OrientationInterpolator2501;

OrientationInterpolator OrientationInterpolator2502 = createNode("OrientationInterpolator");
OrientationInterpolator2502.DEF = "Rolls_r_ankle_RotationInterpolator";
OrientationInterpolator2502.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2502.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group2499.children[2] = OrientationInterpolator2502;

OrientationInterpolator OrientationInterpolator2503 = createNode("OrientationInterpolator");
OrientationInterpolator2503.DEF = "Rolls_r_knee_RotationInterpolator";
OrientationInterpolator2503.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2503.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2499.children[3] = OrientationInterpolator2503;

OrientationInterpolator OrientationInterpolator2504 = createNode("OrientationInterpolator");
OrientationInterpolator2504.DEF = "Rolls_r_hip_RotationInterpolator";
OrientationInterpolator2504.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2504.keyValue = new MFRotation(new float[0,0,-1,0,0,0,-1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0]);
Group2499.children[4] = OrientationInterpolator2504;

OrientationInterpolator OrientationInterpolator2505 = createNode("OrientationInterpolator");
OrientationInterpolator2505.DEF = "Rolls_l_ankle_RotationInterpolator";
OrientationInterpolator2505.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2505.keyValue = new MFRotation(new float[0,0,1,0,0,0,-1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0]);
Group2499.children[5] = OrientationInterpolator2505;

OrientationInterpolator OrientationInterpolator2506 = createNode("OrientationInterpolator");
OrientationInterpolator2506.DEF = "Rolls_l_knee_RotationInterpolator";
OrientationInterpolator2506.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2506.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2499.children[6] = OrientationInterpolator2506;

OrientationInterpolator OrientationInterpolator2507 = createNode("OrientationInterpolator");
OrientationInterpolator2507.DEF = "Rolls_l_hip_RotationInterpolator";
OrientationInterpolator2507.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2507.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group2499.children[7] = OrientationInterpolator2507;

OrientationInterpolator OrientationInterpolator2508 = createNode("OrientationInterpolator");
OrientationInterpolator2508.DEF = "Rolls_r_wrist_RotationInterpolator";
OrientationInterpolator2508.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2508.keyValue = new MFRotation(new float[0,0,1,0,0,0,-1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group2499.children[8] = OrientationInterpolator2508;

OrientationInterpolator OrientationInterpolator2509 = createNode("OrientationInterpolator");
OrientationInterpolator2509.DEF = "Rolls_r_elbow_RotationInterpolator";
OrientationInterpolator2509.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2509.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2499.children[9] = OrientationInterpolator2509;

OrientationInterpolator OrientationInterpolator2510 = createNode("OrientationInterpolator");
OrientationInterpolator2510.DEF = "Rolls_r_shoulder_RotationInterpolator";
OrientationInterpolator2510.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2510.keyValue = new MFRotation(new float[0,0,1,0,0,0,-1,1.5,0,0,-1,3,0,0,-1,1.5,0,0,1,0]);
Group2499.children[10] = OrientationInterpolator2510;

OrientationInterpolator OrientationInterpolator2511 = createNode("OrientationInterpolator");
OrientationInterpolator2511.DEF = "Rolls_l_wrist_RotationInterpolator";
OrientationInterpolator2511.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2511.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0]);
Group2499.children[11] = OrientationInterpolator2511;

OrientationInterpolator OrientationInterpolator2512 = createNode("OrientationInterpolator");
OrientationInterpolator2512.DEF = "Rolls_l_elbow_RotationInterpolator";
OrientationInterpolator2512.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2512.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2499.children[12] = OrientationInterpolator2512;

OrientationInterpolator OrientationInterpolator2513 = createNode("OrientationInterpolator");
OrientationInterpolator2513.DEF = "Rolls_l_shoulder_RotationInterpolator";
OrientationInterpolator2513.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2513.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.5,0,0,1,3,0,0,1,1.5,0,0,1,0]);
Group2499.children[13] = OrientationInterpolator2513;

OrientationInterpolator OrientationInterpolator2514 = createNode("OrientationInterpolator");
OrientationInterpolator2514.DEF = "Rolls_head_RotationInterpolator";
OrientationInterpolator2514.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2514.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2499.children[14] = OrientationInterpolator2514;

OrientationInterpolator OrientationInterpolator2515 = createNode("OrientationInterpolator");
OrientationInterpolator2515.DEF = "Rolls_neck_RotationInterpolator";
OrientationInterpolator2515.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2515.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.25,0,0,1,0,0,0,-1,1.25,0,0,1,0]);
Group2499.children[15] = OrientationInterpolator2515;

OrientationInterpolator OrientationInterpolator2516 = createNode("OrientationInterpolator");
OrientationInterpolator2516.DEF = "Rolls_lower_body_RotationInterpolator";
OrientationInterpolator2516.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2516.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2499.children[16] = OrientationInterpolator2516;

OrientationInterpolator OrientationInterpolator2517 = createNode("OrientationInterpolator");
OrientationInterpolator2517.DEF = "Rolls_upper_body_RotationInterpolator";
OrientationInterpolator2517.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2517.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2499.children[17] = OrientationInterpolator2517;

OrientationInterpolator OrientationInterpolator2518 = createNode("OrientationInterpolator");
OrientationInterpolator2518.DEF = "Rolls_whole_body_RotationInterpolator";
OrientationInterpolator2518.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2518.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2499.children[18] = OrientationInterpolator2518;

PositionInterpolator PositionInterpolator2519 = createNode("PositionInterpolator");
PositionInterpolator2519.DEF = "Rolls_whole_body_TranslationInterpolator";
PositionInterpolator2519.key = new MFFloat(new float[0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]);
PositionInterpolator2519.keyValue = new MFVec3f(new float[0,0,0,0,-0.25,0,0,-0.8,0,0,-0.25,0,0,0,0,0,-0.25,0,0,-0.8,0,0,-0.25,0,0,0,0]);
Group2499.children[19] = PositionInterpolator2519;

OrientationInterpolator OrientationInterpolator2520 = createNode("OrientationInterpolator");
OrientationInterpolator2520.DEF = "Roll_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2520.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2520.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0]);
Group2499.children[20] = OrientationInterpolator2520;

OrientationInterpolator OrientationInterpolator2521 = createNode("OrientationInterpolator");
OrientationInterpolator2521.DEF = "Roll_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2521.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2521.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2499.children[21] = OrientationInterpolator2521;

OrientationInterpolator OrientationInterpolator2522 = createNode("OrientationInterpolator");
OrientationInterpolator2522.DEF = "Roll_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2522.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2522.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0]);
Group2499.children[22] = OrientationInterpolator2522;

OrientationInterpolator OrientationInterpolator2523 = createNode("OrientationInterpolator");
OrientationInterpolator2523.DEF = "Roll_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2523.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2523.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2499.children[23] = OrientationInterpolator2523;

OrientationInterpolator OrientationInterpolator2524 = createNode("OrientationInterpolator");
OrientationInterpolator2524.DEF = "Roll_sacroiliac_YawInterpolator";
OrientationInterpolator2524.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2524.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2499.children[24] = OrientationInterpolator2524;

OrientationInterpolator OrientationInterpolator2525 = createNode("OrientationInterpolator");
OrientationInterpolator2525.DEF = "Roll_vl5_YawInterpolator";
OrientationInterpolator2525.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2525.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2499.children[25] = OrientationInterpolator2525;

OrientationInterpolator OrientationInterpolator2526 = createNode("OrientationInterpolator");
OrientationInterpolator2526.DEF = "Roll_vc6_YawInterpolator";
OrientationInterpolator2526.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2526.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2499.children[26] = OrientationInterpolator2526;

OrientationInterpolator OrientationInterpolator2527 = createNode("OrientationInterpolator");
OrientationInterpolator2527.DEF = "Roll_l_thumb1_PitchInterpolator";
OrientationInterpolator2527.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2527.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2499.children[27] = OrientationInterpolator2527;

OrientationInterpolator OrientationInterpolator2528 = createNode("OrientationInterpolator");
OrientationInterpolator2528.DEF = "Roll_r_thumb1_PitchInterpolator";
OrientationInterpolator2528.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2528.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2499.children[28] = OrientationInterpolator2528;

ROUTE ROUTE2529 = createNode("ROUTE");
ROUTE2529.fromField = "fraction_changed";
ROUTE2529.fromNode = "RollTimer";
ROUTE2529.toField = "set_fraction";
ROUTE2529.toNode = "Rolls_r_ankle_RotationInterpolator";
Group2499.children[29] = ROUTE2529;

ROUTE ROUTE2530 = createNode("ROUTE");
ROUTE2530.fromField = "fraction_changed";
ROUTE2530.fromNode = "RollTimer";
ROUTE2530.toField = "set_fraction";
ROUTE2530.toNode = "Rolls_r_knee_RotationInterpolator";
Group2499.children[30] = ROUTE2530;

ROUTE ROUTE2531 = createNode("ROUTE");
ROUTE2531.fromField = "fraction_changed";
ROUTE2531.fromNode = "RollTimer";
ROUTE2531.toField = "set_fraction";
ROUTE2531.toNode = "Rolls_r_hip_RotationInterpolator";
Group2499.children[31] = ROUTE2531;

ROUTE ROUTE2532 = createNode("ROUTE");
ROUTE2532.fromField = "fraction_changed";
ROUTE2532.fromNode = "RollTimer";
ROUTE2532.toField = "set_fraction";
ROUTE2532.toNode = "Rolls_l_ankle_RotationInterpolator";
Group2499.children[32] = ROUTE2532;

ROUTE ROUTE2533 = createNode("ROUTE");
ROUTE2533.fromField = "fraction_changed";
ROUTE2533.fromNode = "RollTimer";
ROUTE2533.toField = "set_fraction";
ROUTE2533.toNode = "Rolls_l_knee_RotationInterpolator";
Group2499.children[33] = ROUTE2533;

ROUTE ROUTE2534 = createNode("ROUTE");
ROUTE2534.fromField = "fraction_changed";
ROUTE2534.fromNode = "RollTimer";
ROUTE2534.toField = "set_fraction";
ROUTE2534.toNode = "Rolls_l_hip_RotationInterpolator";
Group2499.children[34] = ROUTE2534;

ROUTE ROUTE2535 = createNode("ROUTE");
ROUTE2535.fromField = "fraction_changed";
ROUTE2535.fromNode = "RollTimer";
ROUTE2535.toField = "set_fraction";
ROUTE2535.toNode = "Rolls_lower_body_RotationInterpolator";
Group2499.children[35] = ROUTE2535;

ROUTE ROUTE2536 = createNode("ROUTE");
ROUTE2536.fromField = "fraction_changed";
ROUTE2536.fromNode = "RollTimer";
ROUTE2536.toField = "set_fraction";
ROUTE2536.toNode = "Rolls_r_wrist_RotationInterpolator";
Group2499.children[36] = ROUTE2536;

ROUTE ROUTE2537 = createNode("ROUTE");
ROUTE2537.fromField = "fraction_changed";
ROUTE2537.fromNode = "RollTimer";
ROUTE2537.toField = "set_fraction";
ROUTE2537.toNode = "Rolls_r_elbow_RotationInterpolator";
Group2499.children[37] = ROUTE2537;

ROUTE ROUTE2538 = createNode("ROUTE");
ROUTE2538.fromField = "fraction_changed";
ROUTE2538.fromNode = "RollTimer";
ROUTE2538.toField = "set_fraction";
ROUTE2538.toNode = "Rolls_r_shoulder_RotationInterpolator";
Group2499.children[38] = ROUTE2538;

ROUTE ROUTE2539 = createNode("ROUTE");
ROUTE2539.fromField = "fraction_changed";
ROUTE2539.fromNode = "RollTimer";
ROUTE2539.toField = "set_fraction";
ROUTE2539.toNode = "Rolls_l_wrist_RotationInterpolator";
Group2499.children[39] = ROUTE2539;

ROUTE ROUTE2540 = createNode("ROUTE");
ROUTE2540.fromField = "fraction_changed";
ROUTE2540.fromNode = "RollTimer";
ROUTE2540.toField = "set_fraction";
ROUTE2540.toNode = "Rolls_l_elbow_RotationInterpolator";
Group2499.children[40] = ROUTE2540;

ROUTE ROUTE2541 = createNode("ROUTE");
ROUTE2541.fromField = "fraction_changed";
ROUTE2541.fromNode = "RollTimer";
ROUTE2541.toField = "set_fraction";
ROUTE2541.toNode = "Rolls_l_shoulder_RotationInterpolator";
Group2499.children[41] = ROUTE2541;

ROUTE ROUTE2542 = createNode("ROUTE");
ROUTE2542.fromField = "fraction_changed";
ROUTE2542.fromNode = "RollTimer";
ROUTE2542.toField = "set_fraction";
ROUTE2542.toNode = "Rolls_head_RotationInterpolator";
Group2499.children[42] = ROUTE2542;

ROUTE ROUTE2543 = createNode("ROUTE");
ROUTE2543.fromField = "fraction_changed";
ROUTE2543.fromNode = "RollTimer";
ROUTE2543.toField = "set_fraction";
ROUTE2543.toNode = "Rolls_neck_RotationInterpolator";
Group2499.children[43] = ROUTE2543;

ROUTE ROUTE2544 = createNode("ROUTE");
ROUTE2544.fromField = "fraction_changed";
ROUTE2544.fromNode = "RollTimer";
ROUTE2544.toField = "set_fraction";
ROUTE2544.toNode = "Rolls_upper_body_RotationInterpolator";
Group2499.children[44] = ROUTE2544;

ROUTE ROUTE2545 = createNode("ROUTE");
ROUTE2545.fromField = "fraction_changed";
ROUTE2545.fromNode = "RollTimer";
ROUTE2545.toField = "set_fraction";
ROUTE2545.toNode = "Rolls_whole_body_RotationInterpolator";
Group2499.children[45] = ROUTE2545;

ROUTE ROUTE2546 = createNode("ROUTE");
ROUTE2546.fromField = "fraction_changed";
ROUTE2546.fromNode = "RollTimer";
ROUTE2546.toField = "set_fraction";
ROUTE2546.toNode = "Rolls_whole_body_TranslationInterpolator";
Group2499.children[46] = ROUTE2546;

ROUTE ROUTE2547 = createNode("ROUTE");
ROUTE2547.fromField = "fraction_changed";
ROUTE2547.fromNode = "RollTimer";
ROUTE2547.toField = "set_fraction";
ROUTE2547.toNode = "Roll_l_sternoclavicular_RollInterpolator";
Group2499.children[47] = ROUTE2547;

ROUTE ROUTE2548 = createNode("ROUTE");
ROUTE2548.fromField = "fraction_changed";
ROUTE2548.fromNode = "RollTimer";
ROUTE2548.toField = "set_fraction";
ROUTE2548.toNode = "Roll_l_acromioclavicular_RollInterpolator";
Group2499.children[48] = ROUTE2548;

ROUTE ROUTE2549 = createNode("ROUTE");
ROUTE2549.fromField = "fraction_changed";
ROUTE2549.fromNode = "RollTimer";
ROUTE2549.toField = "set_fraction";
ROUTE2549.toNode = "Roll_r_sternoclavicular_RollInterpolator";
Group2499.children[49] = ROUTE2549;

ROUTE ROUTE2550 = createNode("ROUTE");
ROUTE2550.fromField = "fraction_changed";
ROUTE2550.fromNode = "RollTimer";
ROUTE2550.toField = "set_fraction";
ROUTE2550.toNode = "Roll_r_acromioclavicular_RollInterpolator";
Group2499.children[50] = ROUTE2550;

ROUTE ROUTE2551 = createNode("ROUTE");
ROUTE2551.fromField = "fraction_changed";
ROUTE2551.fromNode = "RollTimer";
ROUTE2551.toField = "set_fraction";
ROUTE2551.toNode = "Roll_r_metatarsal_PitchInterpolator";
Group2499.children[51] = ROUTE2551;

ROUTE ROUTE2552 = createNode("ROUTE");
ROUTE2552.fromField = "fraction_changed";
ROUTE2552.fromNode = "RollTimer";
ROUTE2552.toField = "set_fraction";
ROUTE2552.toNode = "Roll_sacroiliac_YawInterpolator";
Group2499.children[52] = ROUTE2552;

ROUTE ROUTE2553 = createNode("ROUTE");
ROUTE2553.fromField = "fraction_changed";
ROUTE2553.fromNode = "RollTimer";
ROUTE2553.toField = "set_fraction";
ROUTE2553.toNode = "Roll_vl5_YawInterpolator";
Group2499.children[53] = ROUTE2553;

ROUTE ROUTE2554 = createNode("ROUTE");
ROUTE2554.fromField = "fraction_changed";
ROUTE2554.fromNode = "RollTimer";
ROUTE2554.toField = "set_fraction";
ROUTE2554.toNode = "Roll_vc6_YawInterpolator";
Group2499.children[54] = ROUTE2554;

ROUTE ROUTE2555 = createNode("ROUTE");
ROUTE2555.fromField = "fraction_changed";
ROUTE2555.fromNode = "RollTimer";
ROUTE2555.toField = "set_fraction";
ROUTE2555.toNode = "Roll_l_thumb1_PitchInterpolator";
Group2499.children[55] = ROUTE2555;

ROUTE ROUTE2556 = createNode("ROUTE");
ROUTE2556.fromField = "fraction_changed";
ROUTE2556.fromNode = "RollTimer";
ROUTE2556.toField = "set_fraction";
ROUTE2556.toNode = "Roll_r_thumb1_PitchInterpolator";
Group2499.children[56] = ROUTE2556;

ROUTE ROUTE2557 = createNode("ROUTE");
ROUTE2557.fromField = "value_changed";
ROUTE2557.fromNode = "Rolls_r_ankle_RotationInterpolator";
ROUTE2557.toField = "rotation";
ROUTE2557.toNode = "hanim_r_ankle";
Group2499.children[57] = ROUTE2557;

ROUTE ROUTE2558 = createNode("ROUTE");
ROUTE2558.fromField = "value_changed";
ROUTE2558.fromNode = "Rolls_r_knee_RotationInterpolator";
ROUTE2558.toField = "rotation";
ROUTE2558.toNode = "hanim_r_knee";
Group2499.children[58] = ROUTE2558;

ROUTE ROUTE2559 = createNode("ROUTE");
ROUTE2559.fromField = "value_changed";
ROUTE2559.fromNode = "Rolls_r_hip_RotationInterpolator";
ROUTE2559.toField = "rotation";
ROUTE2559.toNode = "hanim_r_hip";
Group2499.children[59] = ROUTE2559;

ROUTE ROUTE2560 = createNode("ROUTE");
ROUTE2560.fromField = "value_changed";
ROUTE2560.fromNode = "Rolls_l_ankle_RotationInterpolator";
ROUTE2560.toField = "rotation";
ROUTE2560.toNode = "hanim_l_ankle";
Group2499.children[60] = ROUTE2560;

ROUTE ROUTE2561 = createNode("ROUTE");
ROUTE2561.fromField = "value_changed";
ROUTE2561.fromNode = "Rolls_l_knee_RotationInterpolator";
ROUTE2561.toField = "rotation";
ROUTE2561.toNode = "hanim_l_knee";
Group2499.children[61] = ROUTE2561;

ROUTE ROUTE2562 = createNode("ROUTE");
ROUTE2562.fromField = "value_changed";
ROUTE2562.fromNode = "Rolls_l_hip_RotationInterpolator";
ROUTE2562.toField = "rotation";
ROUTE2562.toNode = "hanim_l_hip";
Group2499.children[62] = ROUTE2562;

ROUTE ROUTE2563 = createNode("ROUTE");
ROUTE2563.fromField = "value_changed";
ROUTE2563.fromNode = "Rolls_lower_body_RotationInterpolator";
ROUTE2563.toField = "rotation";
ROUTE2563.toNode = "hanim_sacroiliac";
Group2499.children[63] = ROUTE2563;

ROUTE ROUTE2564 = createNode("ROUTE");
ROUTE2564.fromField = "value_changed";
ROUTE2564.fromNode = "Rolls_r_wrist_RotationInterpolator";
ROUTE2564.toField = "rotation";
ROUTE2564.toNode = "hanim_r_wrist";
Group2499.children[64] = ROUTE2564;

ROUTE ROUTE2565 = createNode("ROUTE");
ROUTE2565.fromField = "value_changed";
ROUTE2565.fromNode = "Rolls_r_elbow_RotationInterpolator";
ROUTE2565.toField = "rotation";
ROUTE2565.toNode = "hanim_r_elbow";
Group2499.children[65] = ROUTE2565;

ROUTE ROUTE2566 = createNode("ROUTE");
ROUTE2566.fromField = "value_changed";
ROUTE2566.fromNode = "Rolls_r_shoulder_RotationInterpolator";
ROUTE2566.toField = "rotation";
ROUTE2566.toNode = "hanim_r_shoulder";
Group2499.children[66] = ROUTE2566;

ROUTE ROUTE2567 = createNode("ROUTE");
ROUTE2567.fromField = "value_changed";
ROUTE2567.fromNode = "Rolls_l_wrist_RotationInterpolator";
ROUTE2567.toField = "rotation";
ROUTE2567.toNode = "hanim_l_wrist";
Group2499.children[67] = ROUTE2567;

ROUTE ROUTE2568 = createNode("ROUTE");
ROUTE2568.fromField = "value_changed";
ROUTE2568.fromNode = "Rolls_l_elbow_RotationInterpolator";
ROUTE2568.toField = "rotation";
ROUTE2568.toNode = "hanim_l_elbow";
Group2499.children[68] = ROUTE2568;

ROUTE ROUTE2569 = createNode("ROUTE");
ROUTE2569.fromField = "value_changed";
ROUTE2569.fromNode = "Rolls_l_shoulder_RotationInterpolator";
ROUTE2569.toField = "rotation";
ROUTE2569.toNode = "hanim_l_shoulder";
Group2499.children[69] = ROUTE2569;

ROUTE ROUTE2570 = createNode("ROUTE");
ROUTE2570.fromField = "value_changed";
ROUTE2570.fromNode = "Rolls_head_RotationInterpolator";
ROUTE2570.toField = "rotation";
ROUTE2570.toNode = "hanim_skullbase";
Group2499.children[70] = ROUTE2570;

ROUTE ROUTE2571 = createNode("ROUTE");
ROUTE2571.fromField = "value_changed";
ROUTE2571.fromNode = "Rolls_neck_RotationInterpolator";
ROUTE2571.toField = "rotation";
ROUTE2571.toNode = "hanim_vc4";
Group2499.children[71] = ROUTE2571;

ROUTE ROUTE2572 = createNode("ROUTE");
ROUTE2572.fromField = "value_changed";
ROUTE2572.fromNode = "Rolls_upper_body_RotationInterpolator";
ROUTE2572.toField = "rotation";
ROUTE2572.toNode = "hanim_vl1";
Group2499.children[72] = ROUTE2572;

ROUTE ROUTE2573 = createNode("ROUTE");
ROUTE2573.fromField = "value_changed";
ROUTE2573.fromNode = "Rolls_whole_body_RotationInterpolator";
ROUTE2573.toField = "rotation";
ROUTE2573.toNode = "hanim_humanoid_root";
Group2499.children[73] = ROUTE2573;

ROUTE ROUTE2574 = createNode("ROUTE");
ROUTE2574.fromField = "value_changed";
ROUTE2574.fromNode = "Rolls_whole_body_TranslationInterpolator";
ROUTE2574.toField = "translation";
ROUTE2574.toNode = "hanim_humanoid_root";
Group2499.children[74] = ROUTE2574;

ROUTE ROUTE2575 = createNode("ROUTE");
ROUTE2575.fromField = "value_changed";
ROUTE2575.fromNode = "Roll_l_sternoclavicular_RollInterpolator";
ROUTE2575.toField = "rotation";
ROUTE2575.toNode = "hanim_l_sternoclavicular";
Group2499.children[75] = ROUTE2575;

ROUTE ROUTE2576 = createNode("ROUTE");
ROUTE2576.fromField = "value_changed";
ROUTE2576.fromNode = "Roll_l_acromioclavicular_RollInterpolator";
ROUTE2576.toField = "rotation";
ROUTE2576.toNode = "hanim_l_acromioclavicular";
Group2499.children[76] = ROUTE2576;

ROUTE ROUTE2577 = createNode("ROUTE");
ROUTE2577.fromField = "value_changed";
ROUTE2577.fromNode = "Roll_r_sternoclavicular_RollInterpolator";
ROUTE2577.toField = "rotation";
ROUTE2577.toNode = "hanim_r_sternoclavicular";
Group2499.children[77] = ROUTE2577;

ROUTE ROUTE2578 = createNode("ROUTE");
ROUTE2578.fromField = "value_changed";
ROUTE2578.fromNode = "Roll_r_acromioclavicular_RollInterpolator";
ROUTE2578.toField = "rotation";
ROUTE2578.toNode = "hanim_r_acromioclavicular";
Group2499.children[78] = ROUTE2578;

ROUTE ROUTE2579 = createNode("ROUTE");
ROUTE2579.fromField = "value_changed";
ROUTE2579.fromNode = "Roll_r_metatarsal_PitchInterpolator";
ROUTE2579.toField = "rotation";
ROUTE2579.toNode = "hanim_l_metatarsal";
Group2499.children[79] = ROUTE2579;

ROUTE ROUTE2580 = createNode("ROUTE");
ROUTE2580.fromField = "value_changed";
ROUTE2580.fromNode = "Roll_r_metatarsal_PitchInterpolator";
ROUTE2580.toField = "rotation";
ROUTE2580.toNode = "hanim_r_metatarsal";
Group2499.children[80] = ROUTE2580;

ROUTE ROUTE2581 = createNode("ROUTE");
ROUTE2581.fromField = "value_changed";
ROUTE2581.fromNode = "Roll_sacroiliac_YawInterpolator";
ROUTE2581.toField = "rotation";
ROUTE2581.toNode = "hanim_sacroiliac";
Group2499.children[81] = ROUTE2581;

ROUTE ROUTE2582 = createNode("ROUTE");
ROUTE2582.fromField = "value_changed";
ROUTE2582.fromNode = "Roll_vl5_YawInterpolator";
ROUTE2582.toField = "rotation";
ROUTE2582.toNode = "hanim_vl5";
Group2499.children[82] = ROUTE2582;

ROUTE ROUTE2583 = createNode("ROUTE");
ROUTE2583.fromField = "value_changed";
ROUTE2583.fromNode = "Roll_vc6_YawInterpolator";
ROUTE2583.toField = "rotation";
ROUTE2583.toNode = "hanim_vc6";
Group2499.children[83] = ROUTE2583;

ROUTE ROUTE2584 = createNode("ROUTE");
ROUTE2584.fromField = "value_changed";
ROUTE2584.fromNode = "Roll_l_thumb1_PitchInterpolator";
ROUTE2584.toField = "rotation";
ROUTE2584.toNode = "hanim_l_thumb1";
Group2499.children[84] = ROUTE2584;

ROUTE ROUTE2585 = createNode("ROUTE");
ROUTE2585.fromField = "value_changed";
ROUTE2585.fromNode = "Roll_r_thumb1_PitchInterpolator";
ROUTE2585.toField = "rotation";
ROUTE2585.toNode = "hanim_r_thumb1";
Group2499.children[85] = ROUTE2585;

children[17] = Group2499;

Group Group2586 = createNode("Group");
Group2586.DEF = "WalkAnimation";
TimeSensor TimeSensor2587 = createNode("TimeSensor");
TimeSensor2587.DEF = "WalkTimer";
TimeSensor2587.cycleInterval = 1.73;
TimeSensor2587.loop = True;
Group2586.children = new MFNode();

Group2586.children[0] = TimeSensor2587;

OrientationInterpolator OrientationInterpolator2588 = createNode("OrientationInterpolator");
OrientationInterpolator2588.DEF = "Walk_r_metatarsal_PitchInterpolator";
OrientationInterpolator2588.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2588.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2586.children[1] = OrientationInterpolator2588;

OrientationInterpolator OrientationInterpolator2589 = createNode("OrientationInterpolator");
OrientationInterpolator2589.DEF = "Walk_r_ankle_RotationInterpolator";
OrientationInterpolator2589.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]);
OrientationInterpolator2589.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.3533,-1,0,0,0.1072,1,0,0,0.2612,1,0,0,0.1268,-1,0,0,0.01793,-1,0,0,0.05824,-1,0,0,0.2398,-1,0,0,0.35,-1,0,0,0.3322,0,0,1,0]);
Group2586.children[2] = OrientationInterpolator2589;

OrientationInterpolator OrientationInterpolator2590 = createNode("OrientationInterpolator");
OrientationInterpolator2590.DEF = "Walk_r_knee_RotationInterpolator";
OrientationInterpolator2590.key = new MFFloat(new float[0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator2590.keyValue = new MFRotation(new float[1,0,0,0.8573,1,0,0,0.8926,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,0,0,0.09354,1,0,0,0.08558,1,0,0,0.2475,1,0,0,0.8573]);
Group2586.children[3] = OrientationInterpolator2590;

OrientationInterpolator OrientationInterpolator2591 = createNode("OrientationInterpolator");
OrientationInterpolator2591.DEF = "Walk_r_hip_RotationInterpolator";
OrientationInterpolator2591.key = new MFFloat(new float[0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator2591.keyValue = new MFRotation(new float[-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9911,-0.03541,-0.1286,0.5419,-0.9131,-0.06243,-0.403,0.3361,-0.4306,-0.07962,-0.899,0.07038,1,0,0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481]);
Group2586.children[4] = OrientationInterpolator2591;

OrientationInterpolator OrientationInterpolator2592 = createNode("OrientationInterpolator");
OrientationInterpolator2592.DEF = "Walk_l_ankle_RotationInterpolator";
OrientationInterpolator2592.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.6667,0.9167,1]);
OrientationInterpolator2592.keyValue = new MFRotation(new float[-1,0,0,0.06714,-1,0,0,0.2152,-1,0,0,0.3184,-1,0,0,0.4717,-1,0,0,0.2912,1,0,0,0.1222,-1,0,0,0.06714]);
Group2586.children[5] = OrientationInterpolator2592;

OrientationInterpolator OrientationInterpolator2593 = createNode("OrientationInterpolator");
OrientationInterpolator2593.DEF = "Walk_l_knee_RotationInterpolator";
OrientationInterpolator2593.key = new MFFloat(new float[0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator2593.keyValue = new MFRotation(new float[1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.08678,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.09961,1,0,0,0.3942,1,0,0,0.3226]);
Group2586.children[6] = OrientationInterpolator2593;

OrientationInterpolator OrientationInterpolator2594 = createNode("OrientationInterpolator");
OrientationInterpolator2594.DEF = "Walk_l_hip_RotationInterpolator";
OrientationInterpolator2594.key = new MFFloat(new float[0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator2594.keyValue = new MFRotation(new float[-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-0.7018,-0.03223,-0.7117,0.1289,-1,0,0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865]);
Group2586.children[7] = OrientationInterpolator2594;

OrientationInterpolator OrientationInterpolator2595 = createNode("OrientationInterpolator");
OrientationInterpolator2595.DEF = "Walk_lower_body_RotationInterpolator";
OrientationInterpolator2595.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2595.keyValue = new MFRotation(new float[0,0,-1,0.1056,0,0,1,0.09018,0,0,-1,0.1056]);
Group2586.children[8] = OrientationInterpolator2595;

OrientationInterpolator OrientationInterpolator2596 = createNode("OrientationInterpolator");
OrientationInterpolator2596.DEF = "Walk_r_wrist_RotationInterpolator";
OrientationInterpolator2596.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator2596.keyValue = new MFRotation(new float[-0.8129,0.4759,-0.3357,0.1346,0.1533,-0.9878,0.02582,0.3902,-0.5701,0.7604,-0.311,0.366,-0.8129,0.4759,-0.3357,0.1346]);
Group2586.children[9] = OrientationInterpolator2596;

OrientationInterpolator OrientationInterpolator2597 = createNode("OrientationInterpolator");
OrientationInterpolator2597.DEF = "Walk_r_elbow_RotationInterpolator";
OrientationInterpolator2597.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator2597.keyValue = new MFRotation(new float[-1,0,0,0.411508,-1,0,0,0.0925011,-1,0,0,0.572568,-1,0,0,0.411508]);
Group2586.children[10] = OrientationInterpolator2597;

OrientationInterpolator OrientationInterpolator2598 = createNode("OrientationInterpolator");
OrientationInterpolator2598.DEF = "Walk_r_shoulder_RotationInterpolator";
OrientationInterpolator2598.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator2598.keyValue = new MFRotation(new float[-1,0,0,0.09346,1,0,0,0.3197,-1,0,0,0.1564,-1,0,0,0.09346]);
Group2586.children[11] = OrientationInterpolator2598;

OrientationInterpolator OrientationInterpolator2599 = createNode("OrientationInterpolator");
OrientationInterpolator2599.DEF = "Walk_l_wrist_RotationInterpolator";
OrientationInterpolator2599.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator2599.keyValue = new MFRotation(new float[0,-1,0,0.461076,-0.330195,-0.927451,0.175516,0.538852,0.0327774,-0.999314,-0.0172185,0.492033,0,-1,0,0.461076]);
Group2586.children[12] = OrientationInterpolator2599;

OrientationInterpolator OrientationInterpolator2600 = createNode("OrientationInterpolator");
OrientationInterpolator2600.DEF = "Walk_l_elbow_RotationInterpolator";
OrientationInterpolator2600.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator2600.keyValue = new MFRotation(new float[-1,0,0,0.0659878,-1,0,0,0.488383,-1,0,0,0.0177536,-1,0,0,0.0659878]);
Group2586.children[13] = OrientationInterpolator2600;

OrientationInterpolator OrientationInterpolator2601 = createNode("OrientationInterpolator");
OrientationInterpolator2601.DEF = "Walk_l_shoulder_RotationInterpolator";
OrientationInterpolator2601.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator2601.keyValue = new MFRotation(new float[1,0,0,0.1189,-1,0,0,0.1861,1,0,0,0.3357,1,0,0,0.1189]);
Group2586.children[14] = OrientationInterpolator2601;

OrientationInterpolator OrientationInterpolator2602 = createNode("OrientationInterpolator");
OrientationInterpolator2602.DEF = "Walk_head_RotationInterpolator";
OrientationInterpolator2602.key = new MFFloat(new float[0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1]);
OrientationInterpolator2602.keyValue = new MFRotation(new float[0,-1,0,0.08642,0,1,0,0.1825,0,1,0,0.1505,0,1,0,0.1053,0,1,0,0.04391,0,-1,0,0.03119,0,-1,0,0.07936,0,-1,0,0.1616,0,-1,0,0.155,0,-1,0,0.08642]);
Group2586.children[15] = OrientationInterpolator2602;

OrientationInterpolator OrientationInterpolator2603 = createNode("OrientationInterpolator");
OrientationInterpolator2603.DEF = "Walk_neck_RotationInterpolator";
OrientationInterpolator2603.key = new MFFloat(new float[0,1]);
OrientationInterpolator2603.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group2586.children[16] = OrientationInterpolator2603;

OrientationInterpolator OrientationInterpolator2604 = createNode("OrientationInterpolator");
OrientationInterpolator2604.DEF = "Walk_upper_body_RotationInterpolator";
OrientationInterpolator2604.key = new MFFloat(new float[0,0.2083,0.375,0.75,0.8333,1]);
OrientationInterpolator2604.keyValue = new MFRotation(new float[0,1,0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0,1,0,0.0826]);
Group2586.children[17] = OrientationInterpolator2604;

OrientationInterpolator OrientationInterpolator2605 = createNode("OrientationInterpolator");
OrientationInterpolator2605.DEF = "Walk_whole_body_RotationInterpolator";
OrientationInterpolator2605.key = new MFFloat(new float[0,1]);
OrientationInterpolator2605.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group2586.children[18] = OrientationInterpolator2605;

PositionInterpolator PositionInterpolator2606 = createNode("PositionInterpolator");
PositionInterpolator2606.DEF = "Walk_whole_body_TranslationInterpolator";
PositionInterpolator2606.key = new MFFloat(new float[0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]);
PositionInterpolator2606.keyValue = new MFVec3f(new float[0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0]);
Group2586.children[19] = PositionInterpolator2606;

OrientationInterpolator OrientationInterpolator2607 = createNode("OrientationInterpolator");
OrientationInterpolator2607.DEF = "Walk_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2607.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2607.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2586.children[20] = OrientationInterpolator2607;

OrientationInterpolator OrientationInterpolator2608 = createNode("OrientationInterpolator");
OrientationInterpolator2608.DEF = "Walk_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2608.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2608.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2586.children[21] = OrientationInterpolator2608;

OrientationInterpolator OrientationInterpolator2609 = createNode("OrientationInterpolator");
OrientationInterpolator2609.DEF = "Walk_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2609.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2609.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2586.children[22] = OrientationInterpolator2609;

OrientationInterpolator OrientationInterpolator2610 = createNode("OrientationInterpolator");
OrientationInterpolator2610.DEF = "Walk_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2610.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2610.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2586.children[23] = OrientationInterpolator2610;

OrientationInterpolator OrientationInterpolator2611 = createNode("OrientationInterpolator");
OrientationInterpolator2611.DEF = "Walk_sacroiliac_YawInterpolator";
OrientationInterpolator2611.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2611.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2586.children[24] = OrientationInterpolator2611;

OrientationInterpolator OrientationInterpolator2612 = createNode("OrientationInterpolator");
OrientationInterpolator2612.DEF = "Walk_vl5_YawInterpolator";
OrientationInterpolator2612.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2612.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2586.children[25] = OrientationInterpolator2612;

OrientationInterpolator OrientationInterpolator2613 = createNode("OrientationInterpolator");
OrientationInterpolator2613.DEF = "Walk_vc6_YawInterpolator";
OrientationInterpolator2613.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2613.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2586.children[26] = OrientationInterpolator2613;

OrientationInterpolator OrientationInterpolator2614 = createNode("OrientationInterpolator");
OrientationInterpolator2614.DEF = "Walk_l_thumb1_PitchInterpolator";
OrientationInterpolator2614.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2614.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.5,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group2586.children[27] = OrientationInterpolator2614;

OrientationInterpolator OrientationInterpolator2615 = createNode("OrientationInterpolator");
OrientationInterpolator2615.DEF = "Walk_r_thumb1_PitchInterpolator";
OrientationInterpolator2615.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2615.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.5,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group2586.children[28] = OrientationInterpolator2615;

ROUTE ROUTE2616 = createNode("ROUTE");
ROUTE2616.fromField = "fraction_changed";
ROUTE2616.fromNode = "WalkTimer";
ROUTE2616.toField = "set_fraction";
ROUTE2616.toNode = "Walk_r_ankle_RotationInterpolator";
Group2586.children[29] = ROUTE2616;

ROUTE ROUTE2617 = createNode("ROUTE");
ROUTE2617.fromField = "fraction_changed";
ROUTE2617.fromNode = "WalkTimer";
ROUTE2617.toField = "set_fraction";
ROUTE2617.toNode = "Walk_r_knee_RotationInterpolator";
Group2586.children[30] = ROUTE2617;

ROUTE ROUTE2618 = createNode("ROUTE");
ROUTE2618.fromField = "fraction_changed";
ROUTE2618.fromNode = "WalkTimer";
ROUTE2618.toField = "set_fraction";
ROUTE2618.toNode = "Walk_r_hip_RotationInterpolator";
Group2586.children[31] = ROUTE2618;

ROUTE ROUTE2619 = createNode("ROUTE");
ROUTE2619.fromField = "fraction_changed";
ROUTE2619.fromNode = "WalkTimer";
ROUTE2619.toField = "set_fraction";
ROUTE2619.toNode = "Walk_l_ankle_RotationInterpolator";
Group2586.children[32] = ROUTE2619;

ROUTE ROUTE2620 = createNode("ROUTE");
ROUTE2620.fromField = "fraction_changed";
ROUTE2620.fromNode = "WalkTimer";
ROUTE2620.toField = "set_fraction";
ROUTE2620.toNode = "Walk_l_knee_RotationInterpolator";
Group2586.children[33] = ROUTE2620;

ROUTE ROUTE2621 = createNode("ROUTE");
ROUTE2621.fromField = "fraction_changed";
ROUTE2621.fromNode = "WalkTimer";
ROUTE2621.toField = "set_fraction";
ROUTE2621.toNode = "Walk_l_hip_RotationInterpolator";
Group2586.children[34] = ROUTE2621;

ROUTE ROUTE2622 = createNode("ROUTE");
ROUTE2622.fromField = "fraction_changed";
ROUTE2622.fromNode = "WalkTimer";
ROUTE2622.toField = "set_fraction";
ROUTE2622.toNode = "Walk_lower_body_RotationInterpolator";
Group2586.children[35] = ROUTE2622;

ROUTE ROUTE2623 = createNode("ROUTE");
ROUTE2623.fromField = "fraction_changed";
ROUTE2623.fromNode = "WalkTimer";
ROUTE2623.toField = "set_fraction";
ROUTE2623.toNode = "Walk_r_wrist_RotationInterpolator";
Group2586.children[36] = ROUTE2623;

ROUTE ROUTE2624 = createNode("ROUTE");
ROUTE2624.fromField = "fraction_changed";
ROUTE2624.fromNode = "WalkTimer";
ROUTE2624.toField = "set_fraction";
ROUTE2624.toNode = "Walk_r_elbow_RotationInterpolator";
Group2586.children[37] = ROUTE2624;

ROUTE ROUTE2625 = createNode("ROUTE");
ROUTE2625.fromField = "fraction_changed";
ROUTE2625.fromNode = "WalkTimer";
ROUTE2625.toField = "set_fraction";
ROUTE2625.toNode = "Walk_r_shoulder_RotationInterpolator";
Group2586.children[38] = ROUTE2625;

ROUTE ROUTE2626 = createNode("ROUTE");
ROUTE2626.fromField = "fraction_changed";
ROUTE2626.fromNode = "WalkTimer";
ROUTE2626.toField = "set_fraction";
ROUTE2626.toNode = "Walk_l_wrist_RotationInterpolator";
Group2586.children[39] = ROUTE2626;

ROUTE ROUTE2627 = createNode("ROUTE");
ROUTE2627.fromField = "fraction_changed";
ROUTE2627.fromNode = "WalkTimer";
ROUTE2627.toField = "set_fraction";
ROUTE2627.toNode = "Walk_l_elbow_RotationInterpolator";
Group2586.children[40] = ROUTE2627;

ROUTE ROUTE2628 = createNode("ROUTE");
ROUTE2628.fromField = "fraction_changed";
ROUTE2628.fromNode = "WalkTimer";
ROUTE2628.toField = "set_fraction";
ROUTE2628.toNode = "Walk_l_shoulder_RotationInterpolator";
Group2586.children[41] = ROUTE2628;

ROUTE ROUTE2629 = createNode("ROUTE");
ROUTE2629.fromField = "fraction_changed";
ROUTE2629.fromNode = "WalkTimer";
ROUTE2629.toField = "set_fraction";
ROUTE2629.toNode = "Walk_head_RotationInterpolator";
Group2586.children[42] = ROUTE2629;

ROUTE ROUTE2630 = createNode("ROUTE");
ROUTE2630.fromField = "fraction_changed";
ROUTE2630.fromNode = "WalkTimer";
ROUTE2630.toField = "set_fraction";
ROUTE2630.toNode = "Walk_neck_RotationInterpolator";
Group2586.children[43] = ROUTE2630;

ROUTE ROUTE2631 = createNode("ROUTE");
ROUTE2631.fromField = "fraction_changed";
ROUTE2631.fromNode = "WalkTimer";
ROUTE2631.toField = "set_fraction";
ROUTE2631.toNode = "Walk_upper_body_RotationInterpolator";
Group2586.children[44] = ROUTE2631;

ROUTE ROUTE2632 = createNode("ROUTE");
ROUTE2632.fromField = "fraction_changed";
ROUTE2632.fromNode = "WalkTimer";
ROUTE2632.toField = "set_fraction";
ROUTE2632.toNode = "Walk_whole_body_RotationInterpolator";
Group2586.children[45] = ROUTE2632;

ROUTE ROUTE2633 = createNode("ROUTE");
ROUTE2633.fromField = "fraction_changed";
ROUTE2633.fromNode = "WalkTimer";
ROUTE2633.toField = "set_fraction";
ROUTE2633.toNode = "Walk_whole_body_TranslationInterpolator";
Group2586.children[46] = ROUTE2633;

ROUTE ROUTE2634 = createNode("ROUTE");
ROUTE2634.fromField = "fraction_changed";
ROUTE2634.fromNode = "WalkTimer";
ROUTE2634.toField = "set_fraction";
ROUTE2634.toNode = "Walk_l_sternoclavicular_RollInterpolator";
Group2586.children[47] = ROUTE2634;

ROUTE ROUTE2635 = createNode("ROUTE");
ROUTE2635.fromField = "fraction_changed";
ROUTE2635.fromNode = "WalkTimer";
ROUTE2635.toField = "set_fraction";
ROUTE2635.toNode = "Walk_l_acromioclavicular_RollInterpolator";
Group2586.children[48] = ROUTE2635;

ROUTE ROUTE2636 = createNode("ROUTE");
ROUTE2636.fromField = "fraction_changed";
ROUTE2636.fromNode = "WalkTimer";
ROUTE2636.toField = "set_fraction";
ROUTE2636.toNode = "Walk_r_sternoclavicular_RollInterpolator";
Group2586.children[49] = ROUTE2636;

ROUTE ROUTE2637 = createNode("ROUTE");
ROUTE2637.fromField = "fraction_changed";
ROUTE2637.fromNode = "WalkTimer";
ROUTE2637.toField = "set_fraction";
ROUTE2637.toNode = "Walk_r_acromioclavicular_RollInterpolator";
Group2586.children[50] = ROUTE2637;

ROUTE ROUTE2638 = createNode("ROUTE");
ROUTE2638.fromField = "fraction_changed";
ROUTE2638.fromNode = "WalkTimer";
ROUTE2638.toField = "set_fraction";
ROUTE2638.toNode = "Walk_r_metatarsal_PitchInterpolator";
Group2586.children[51] = ROUTE2638;

ROUTE ROUTE2639 = createNode("ROUTE");
ROUTE2639.fromField = "fraction_changed";
ROUTE2639.fromNode = "WalkTimer";
ROUTE2639.toField = "set_fraction";
ROUTE2639.toNode = "Walk_sacroiliac_YawInterpolator";
Group2586.children[52] = ROUTE2639;

ROUTE ROUTE2640 = createNode("ROUTE");
ROUTE2640.fromField = "fraction_changed";
ROUTE2640.fromNode = "WalkTimer";
ROUTE2640.toField = "set_fraction";
ROUTE2640.toNode = "Walk_vl5_YawInterpolator";
Group2586.children[53] = ROUTE2640;

ROUTE ROUTE2641 = createNode("ROUTE");
ROUTE2641.fromField = "fraction_changed";
ROUTE2641.fromNode = "WalkTimer";
ROUTE2641.toField = "set_fraction";
ROUTE2641.toNode = "Walk_vc6_YawInterpolator";
Group2586.children[54] = ROUTE2641;

ROUTE ROUTE2642 = createNode("ROUTE");
ROUTE2642.fromField = "fraction_changed";
ROUTE2642.fromNode = "WalkTimer";
ROUTE2642.toField = "set_fraction";
ROUTE2642.toNode = "Walk_l_thumb1_PitchInterpolator";
Group2586.children[55] = ROUTE2642;

ROUTE ROUTE2643 = createNode("ROUTE");
ROUTE2643.fromField = "fraction_changed";
ROUTE2643.fromNode = "WalkTimer";
ROUTE2643.toField = "set_fraction";
ROUTE2643.toNode = "Walk_r_thumb1_PitchInterpolator";
Group2586.children[56] = ROUTE2643;

ROUTE ROUTE2644 = createNode("ROUTE");
ROUTE2644.fromField = "value_changed";
ROUTE2644.fromNode = "Walk_r_ankle_RotationInterpolator";
ROUTE2644.toField = "rotation";
ROUTE2644.toNode = "hanim_r_ankle";
Group2586.children[57] = ROUTE2644;

ROUTE ROUTE2645 = createNode("ROUTE");
ROUTE2645.fromField = "value_changed";
ROUTE2645.fromNode = "Walk_r_knee_RotationInterpolator";
ROUTE2645.toField = "rotation";
ROUTE2645.toNode = "hanim_r_knee";
Group2586.children[58] = ROUTE2645;

ROUTE ROUTE2646 = createNode("ROUTE");
ROUTE2646.fromField = "value_changed";
ROUTE2646.fromNode = "Walk_r_hip_RotationInterpolator";
ROUTE2646.toField = "rotation";
ROUTE2646.toNode = "hanim_r_hip";
Group2586.children[59] = ROUTE2646;

ROUTE ROUTE2647 = createNode("ROUTE");
ROUTE2647.fromField = "value_changed";
ROUTE2647.fromNode = "Walk_l_ankle_RotationInterpolator";
ROUTE2647.toField = "rotation";
ROUTE2647.toNode = "hanim_l_ankle";
Group2586.children[60] = ROUTE2647;

ROUTE ROUTE2648 = createNode("ROUTE");
ROUTE2648.fromField = "value_changed";
ROUTE2648.fromNode = "Walk_l_knee_RotationInterpolator";
ROUTE2648.toField = "rotation";
ROUTE2648.toNode = "hanim_l_knee";
Group2586.children[61] = ROUTE2648;

ROUTE ROUTE2649 = createNode("ROUTE");
ROUTE2649.fromField = "value_changed";
ROUTE2649.fromNode = "Walk_l_hip_RotationInterpolator";
ROUTE2649.toField = "rotation";
ROUTE2649.toNode = "hanim_l_hip";
Group2586.children[62] = ROUTE2649;

ROUTE ROUTE2650 = createNode("ROUTE");
ROUTE2650.fromField = "value_changed";
ROUTE2650.fromNode = "Walk_lower_body_RotationInterpolator";
ROUTE2650.toField = "rotation";
ROUTE2650.toNode = "hanim_sacroiliac";
Group2586.children[63] = ROUTE2650;

ROUTE ROUTE2651 = createNode("ROUTE");
ROUTE2651.fromField = "value_changed";
ROUTE2651.fromNode = "Walk_r_wrist_RotationInterpolator";
ROUTE2651.toField = "rotation";
ROUTE2651.toNode = "hanim_r_wrist";
Group2586.children[64] = ROUTE2651;

ROUTE ROUTE2652 = createNode("ROUTE");
ROUTE2652.fromField = "value_changed";
ROUTE2652.fromNode = "Walk_r_elbow_RotationInterpolator";
ROUTE2652.toField = "rotation";
ROUTE2652.toNode = "hanim_r_elbow";
Group2586.children[65] = ROUTE2652;

ROUTE ROUTE2653 = createNode("ROUTE");
ROUTE2653.fromField = "value_changed";
ROUTE2653.fromNode = "Walk_r_shoulder_RotationInterpolator";
ROUTE2653.toField = "rotation";
ROUTE2653.toNode = "hanim_r_shoulder";
Group2586.children[66] = ROUTE2653;

ROUTE ROUTE2654 = createNode("ROUTE");
ROUTE2654.fromField = "value_changed";
ROUTE2654.fromNode = "Walk_l_wrist_RotationInterpolator";
ROUTE2654.toField = "rotation";
ROUTE2654.toNode = "hanim_l_wrist";
Group2586.children[67] = ROUTE2654;

ROUTE ROUTE2655 = createNode("ROUTE");
ROUTE2655.fromField = "value_changed";
ROUTE2655.fromNode = "Walk_l_elbow_RotationInterpolator";
ROUTE2655.toField = "rotation";
ROUTE2655.toNode = "hanim_l_elbow";
Group2586.children[68] = ROUTE2655;

ROUTE ROUTE2656 = createNode("ROUTE");
ROUTE2656.fromField = "value_changed";
ROUTE2656.fromNode = "Walk_l_shoulder_RotationInterpolator";
ROUTE2656.toField = "rotation";
ROUTE2656.toNode = "hanim_l_shoulder";
Group2586.children[69] = ROUTE2656;

ROUTE ROUTE2657 = createNode("ROUTE");
ROUTE2657.fromField = "value_changed";
ROUTE2657.fromNode = "Walk_head_RotationInterpolator";
ROUTE2657.toField = "rotation";
ROUTE2657.toNode = "hanim_skullbase";
Group2586.children[70] = ROUTE2657;

ROUTE ROUTE2658 = createNode("ROUTE");
ROUTE2658.fromField = "value_changed";
ROUTE2658.fromNode = "Walk_neck_RotationInterpolator";
ROUTE2658.toField = "rotation";
ROUTE2658.toNode = "hanim_vc4";
Group2586.children[71] = ROUTE2658;

ROUTE ROUTE2659 = createNode("ROUTE");
ROUTE2659.fromField = "value_changed";
ROUTE2659.fromNode = "Walk_upper_body_RotationInterpolator";
ROUTE2659.toField = "rotation";
ROUTE2659.toNode = "hanim_vl1";
Group2586.children[72] = ROUTE2659;

ROUTE ROUTE2660 = createNode("ROUTE");
ROUTE2660.fromField = "value_changed";
ROUTE2660.fromNode = "Walk_whole_body_RotationInterpolator";
ROUTE2660.toField = "rotation";
ROUTE2660.toNode = "hanim_humanoid_root";
Group2586.children[73] = ROUTE2660;

ROUTE ROUTE2661 = createNode("ROUTE");
ROUTE2661.fromField = "value_changed";
ROUTE2661.fromNode = "Walk_whole_body_TranslationInterpolator";
ROUTE2661.toField = "translation";
ROUTE2661.toNode = "hanim_humanoid_root";
Group2586.children[74] = ROUTE2661;

ROUTE ROUTE2662 = createNode("ROUTE");
ROUTE2662.fromField = "value_changed";
ROUTE2662.fromNode = "Walk_l_sternoclavicular_RollInterpolator";
ROUTE2662.toField = "rotation";
ROUTE2662.toNode = "hanim_l_sternoclavicular";
Group2586.children[75] = ROUTE2662;

ROUTE ROUTE2663 = createNode("ROUTE");
ROUTE2663.fromField = "value_changed";
ROUTE2663.fromNode = "Walk_l_acromioclavicular_RollInterpolator";
ROUTE2663.toField = "rotation";
ROUTE2663.toNode = "hanim_l_acromioclavicular";
Group2586.children[76] = ROUTE2663;

ROUTE ROUTE2664 = createNode("ROUTE");
ROUTE2664.fromField = "value_changed";
ROUTE2664.fromNode = "Walk_r_sternoclavicular_RollInterpolator";
ROUTE2664.toField = "rotation";
ROUTE2664.toNode = "hanim_r_sternoclavicular";
Group2586.children[77] = ROUTE2664;

ROUTE ROUTE2665 = createNode("ROUTE");
ROUTE2665.fromField = "value_changed";
ROUTE2665.fromNode = "Walk_r_acromioclavicular_RollInterpolator";
ROUTE2665.toField = "rotation";
ROUTE2665.toNode = "hanim_r_acromioclavicular";
Group2586.children[78] = ROUTE2665;

ROUTE ROUTE2666 = createNode("ROUTE");
ROUTE2666.fromField = "value_changed";
ROUTE2666.fromNode = "Walk_r_metatarsal_PitchInterpolator";
ROUTE2666.toField = "rotation";
ROUTE2666.toNode = "hanim_l_metatarsal";
Group2586.children[79] = ROUTE2666;

ROUTE ROUTE2667 = createNode("ROUTE");
ROUTE2667.fromField = "value_changed";
ROUTE2667.fromNode = "Walk_r_metatarsal_PitchInterpolator";
ROUTE2667.toField = "rotation";
ROUTE2667.toNode = "hanim_r_metatarsal";
Group2586.children[80] = ROUTE2667;

ROUTE ROUTE2668 = createNode("ROUTE");
ROUTE2668.fromField = "value_changed";
ROUTE2668.fromNode = "Walk_sacroiliac_YawInterpolator";
ROUTE2668.toField = "rotation";
ROUTE2668.toNode = "hanim_sacroiliac";
Group2586.children[81] = ROUTE2668;

ROUTE ROUTE2669 = createNode("ROUTE");
ROUTE2669.fromField = "value_changed";
ROUTE2669.fromNode = "Walk_vl5_YawInterpolator";
ROUTE2669.toField = "rotation";
ROUTE2669.toNode = "hanim_vl5";
Group2586.children[82] = ROUTE2669;

ROUTE ROUTE2670 = createNode("ROUTE");
ROUTE2670.fromField = "value_changed";
ROUTE2670.fromNode = "Walk_vc6_YawInterpolator";
ROUTE2670.toField = "rotation";
ROUTE2670.toNode = "hanim_vc6";
Group2586.children[83] = ROUTE2670;

ROUTE ROUTE2671 = createNode("ROUTE");
ROUTE2671.fromField = "value_changed";
ROUTE2671.fromNode = "Walk_l_thumb1_PitchInterpolator";
ROUTE2671.toField = "rotation";
ROUTE2671.toNode = "hanim_l_thumb1";
Group2586.children[84] = ROUTE2671;

ROUTE ROUTE2672 = createNode("ROUTE");
ROUTE2672.fromField = "value_changed";
ROUTE2672.fromNode = "Walk_r_thumb1_PitchInterpolator";
ROUTE2672.toField = "rotation";
ROUTE2672.toNode = "hanim_r_thumb1";
Group2586.children[85] = ROUTE2672;

children[18] = Group2586;

Group Group2673 = createNode("Group");
Group2673.DEF = "RunAnimation";
TimeSensor TimeSensor2674 = createNode("TimeSensor");
TimeSensor2674.DEF = "RunTimer";
TimeSensor2674.cycleInterval = 0.9;
TimeSensor2674.loop = True;
Group2673.children = new MFNode();

Group2673.children[0] = TimeSensor2674;

OrientationInterpolator OrientationInterpolator2675 = createNode("OrientationInterpolator");
OrientationInterpolator2675.DEF = "Run_r_metatarsal_PitchInterpolator";
OrientationInterpolator2675.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2675.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2673.children[1] = OrientationInterpolator2675;

OrientationInterpolator OrientationInterpolator2676 = createNode("OrientationInterpolator");
OrientationInterpolator2676.DEF = "Run_l_hip_RotationInterpolator_Run";
OrientationInterpolator2676.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator2676.keyValue = new MFRotation(new float[-0.99,0.033,0.04,1.42,-0.99,0.1328,0.067,0.42,0.99,0.014,0.009,0.9,-0.99,0.0703,0.05,0.7,-0.99,0.033,0.04,1.42]);
Group2673.children[2] = OrientationInterpolator2676;

OrientationInterpolator OrientationInterpolator2677 = createNode("OrientationInterpolator");
OrientationInterpolator2677.DEF = "Run_l_knee_RotationInterpolator_Run";
OrientationInterpolator2677.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator2677.keyValue = new MFRotation(new float[1,0,0,1.01,1,0,0,0.426,1,0,0,0.705,1,0,0,2.179,1,0,0,1.01]);
Group2673.children[3] = OrientationInterpolator2677;

OrientationInterpolator OrientationInterpolator2678 = createNode("OrientationInterpolator");
OrientationInterpolator2678.DEF = "Run_l_ankle_RotationInterpolator_Run";
OrientationInterpolator2678.key = new MFFloat(new float[0,0.22,0.3,0.4,1]);
OrientationInterpolator2678.keyValue = new MFRotation(new float[1,0,0,0.0374,-1,0,0,0.1037,-1,0,0,0.4328,1,0,0,0.1929,1,0,0,0.03574]);
Group2673.children[4] = OrientationInterpolator2678;

OrientationInterpolator OrientationInterpolator2679 = createNode("OrientationInterpolator");
OrientationInterpolator2679.DEF = "Run_r_hip_RotationInterpolator_Run";
OrientationInterpolator2679.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator2679.keyValue = new MFRotation(new float[0.99,-0.014,0.009,0.9,-0.99,-0.0703,-0.05,0.7,-0.99,-0.033,0.04,1.42,-0.99,-0.1328,-0.067,0.42,0.99,-0.014,0.009,0.9]);
Group2673.children[5] = OrientationInterpolator2679;

OrientationInterpolator OrientationInterpolator2680 = createNode("OrientationInterpolator");
OrientationInterpolator2680.DEF = "Run_r_knee_RotationInterpolator_Run";
OrientationInterpolator2680.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator2680.keyValue = new MFRotation(new float[1,0,0,0.705,1,0,0,2.179,1,0,0,1.01,1,0,0,0.426,1,0,0,0.705]);
Group2673.children[6] = OrientationInterpolator2680;

OrientationInterpolator OrientationInterpolator2681 = createNode("OrientationInterpolator");
OrientationInterpolator2681.DEF = "Run_r_ankle_RotationInterpolator_Run";
OrientationInterpolator2681.key = new MFFloat(new float[0,0.4,0.71,0.8,0.82,1]);
OrientationInterpolator2681.keyValue = new MFRotation(new float[1,0,0,0.2323,-1,0,0,0.07843,-1,0,0,0.32,-1,0,0,0.374,-1,0,0,0.3478,1,0,0,0.2323]);
Group2673.children[7] = OrientationInterpolator2681;

OrientationInterpolator OrientationInterpolator2682 = createNode("OrientationInterpolator");
OrientationInterpolator2682.DEF = "Run_l_shoulder_RotationInterpolator_Run";
OrientationInterpolator2682.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator2682.keyValue = new MFRotation(new float[0.99,-0.074,0.25,1.5,0.99,-0.092,0.44,0.3,-0.99,0.136,0.25,0.85,0.99,-0.081,0.38,0.4,0.99,-0.074,0.25,1.5]);
Group2673.children[8] = OrientationInterpolator2682;

OrientationInterpolator OrientationInterpolator2683 = createNode("OrientationInterpolator");
OrientationInterpolator2683.DEF = "Run_l_elbow_RotationInterpolator_Run";
OrientationInterpolator2683.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator2683.keyValue = new MFRotation(new float[-1,0,0,1.85,-0.99,-0.19,0.18,1.35,-1,0,0,0.975,-0.99,-0.09,-0.02,1.55,-1,0,0,1.85]);
Group2673.children[9] = OrientationInterpolator2683;

OrientationInterpolator OrientationInterpolator2684 = createNode("OrientationInterpolator");
OrientationInterpolator2684.DEF = "Run_l_wrist_RotationInterpolator_Run";
OrientationInterpolator2684.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2684.keyValue = new MFRotation(new float[-0.25,-1,0.08,0.14,0.25,1,0.08,0.14,0,0,1,0,-0.25,1,0.08,-0.14,-0.25,1,0.08,0.14]);
Group2673.children[10] = OrientationInterpolator2684;

OrientationInterpolator OrientationInterpolator2685 = createNode("OrientationInterpolator");
OrientationInterpolator2685.DEF = "Run_r_shoulder_RotationInterpolator_Run";
OrientationInterpolator2685.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator2685.keyValue = new MFRotation(new float[-0.99,-0.136,-0.25,0.85,0.99,0.081,-0.38,0.4,0.99,0.074,-0.25,1.5,0.99,0.081,-0.38,0.4,-0.99,-0.136,-0.25,0.85]);
Group2673.children[11] = OrientationInterpolator2685;

OrientationInterpolator OrientationInterpolator2686 = createNode("OrientationInterpolator");
OrientationInterpolator2686.DEF = "Run_r_elbow_RotationInterpolator_Run";
OrientationInterpolator2686.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator2686.keyValue = new MFRotation(new float[-1,0,0,0.975,-0.99,0.09,0.02,1.55,-1,0,0,1.85,-0.99,0.19,-0.18,1.35,-1,0,0,0.975]);
Group2673.children[12] = OrientationInterpolator2686;

OrientationInterpolator OrientationInterpolator2687 = createNode("OrientationInterpolator");
OrientationInterpolator2687.DEF = "Run_r_wrist_RotationInterpolator_Run";
OrientationInterpolator2687.key = new MFFloat(new float[0,1]);
OrientationInterpolator2687.keyValue = new MFRotation(new float[-0.917742,-0.237244,-0.318536,0.214273,-0.917742,-0.237244,-0.318536,0.214273]);
Group2673.children[13] = OrientationInterpolator2687;

OrientationInterpolator OrientationInterpolator2688 = createNode("OrientationInterpolator");
OrientationInterpolator2688.DEF = "Run_lower_body_RotationInterpolator_Run";
OrientationInterpolator2688.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator2688.keyValue = new MFRotation(new float[0,-1,0,0.125,0,0,1,0,0,1,0,0.125,0,0,1,0,0,-1,0,0.125]);
Group2673.children[14] = OrientationInterpolator2688;

OrientationInterpolator OrientationInterpolator2689 = createNode("OrientationInterpolator");
OrientationInterpolator2689.DEF = "Run_head_RotationInterpolator_Run";
OrientationInterpolator2689.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator2689.keyValue = new MFRotation(new float[1,0,0,0.08,1,0,0,0.12,1,0,0,0.3,1,0,0,0.3,1,0,0,0.08]);
Group2673.children[15] = OrientationInterpolator2689;

OrientationInterpolator OrientationInterpolator2690 = createNode("OrientationInterpolator");
OrientationInterpolator2690.DEF = "Run_neck_RotationInterpolator_Run";
OrientationInterpolator2690.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator2690.keyValue = new MFRotation(new float[0.7,0,0,0.4,-0.7,-0.7,0,0.4,0,0,0,0.4,-0.7,0.7,0,0.4,0.7,0,0,0.4]);
Group2673.children[16] = OrientationInterpolator2690;

OrientationInterpolator OrientationInterpolator2691 = createNode("OrientationInterpolator");
OrientationInterpolator2691.DEF = "Run_upper_body_RotationInterpolator_Run";
OrientationInterpolator2691.key = new MFFloat(new float[0,0.2545,0.4909,0.7636,1]);
OrientationInterpolator2691.keyValue = new MFRotation(new float[0.97,0.65,0.086,0.5,0.9,0.003,-0.02,0.38,0.95,-0.68,-0.086,0.5,0.9,0.004,-0.025,0.4,0.97,0.65,0.086,0.5]);
Group2673.children[17] = OrientationInterpolator2691;

OrientationInterpolator OrientationInterpolator2692 = createNode("OrientationInterpolator");
OrientationInterpolator2692.DEF = "Run_whole_body_RotationInterpolator_Run";
OrientationInterpolator2692.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2692.keyValue = new MFRotation(new float[1,0,0,0.06,1,0,0,0.167,1,0,0,0.06,1,0,0,0.168,1,0,0,0.06]);
Group2673.children[18] = OrientationInterpolator2692;

PositionInterpolator PositionInterpolator2693 = createNode("PositionInterpolator");
PositionInterpolator2693.DEF = "Run_whole_body_TranslationInterpolator_Run";
PositionInterpolator2693.key = new MFFloat(new float[0,0.22,0.3,0.31,0.5,0.69,0.7,0.78,1]);
PositionInterpolator2693.keyValue = new MFVec3f(new float[0,-0.01,0,0,-0.037,0,0,-0.049,0,0,-0.037,0,0,-0.01,0,0,-0.037,0,0,-0.049,0,0,-0.037,0,0,-0.01,0]);
Group2673.children[19] = PositionInterpolator2693;

OrientationInterpolator OrientationInterpolator2694 = createNode("OrientationInterpolator");
OrientationInterpolator2694.DEF = "Run_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2694.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2694.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2673.children[20] = OrientationInterpolator2694;

OrientationInterpolator OrientationInterpolator2695 = createNode("OrientationInterpolator");
OrientationInterpolator2695.DEF = "Run_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2695.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2695.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2673.children[21] = OrientationInterpolator2695;

OrientationInterpolator OrientationInterpolator2696 = createNode("OrientationInterpolator");
OrientationInterpolator2696.DEF = "Run_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2696.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2696.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2673.children[22] = OrientationInterpolator2696;

OrientationInterpolator OrientationInterpolator2697 = createNode("OrientationInterpolator");
OrientationInterpolator2697.DEF = "Run_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2697.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2697.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2673.children[23] = OrientationInterpolator2697;

OrientationInterpolator OrientationInterpolator2698 = createNode("OrientationInterpolator");
OrientationInterpolator2698.DEF = "Run_sacroiliac_YawInterpolator";
OrientationInterpolator2698.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2698.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2673.children[24] = OrientationInterpolator2698;

OrientationInterpolator OrientationInterpolator2699 = createNode("OrientationInterpolator");
OrientationInterpolator2699.DEF = "Run_vl5_YawInterpolator";
OrientationInterpolator2699.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2699.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2673.children[25] = OrientationInterpolator2699;

OrientationInterpolator OrientationInterpolator2700 = createNode("OrientationInterpolator");
OrientationInterpolator2700.DEF = "Run_vc6_YawInterpolator";
OrientationInterpolator2700.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2700.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2673.children[26] = OrientationInterpolator2700;

OrientationInterpolator OrientationInterpolator2701 = createNode("OrientationInterpolator");
OrientationInterpolator2701.DEF = "Run_l_thumb1_PitchInterpolator";
OrientationInterpolator2701.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2701.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.7,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group2673.children[27] = OrientationInterpolator2701;

OrientationInterpolator OrientationInterpolator2702 = createNode("OrientationInterpolator");
OrientationInterpolator2702.DEF = "Run_r_thumb1_PitchInterpolator";
OrientationInterpolator2702.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2702.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.7,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group2673.children[28] = OrientationInterpolator2702;

ROUTE ROUTE2703 = createNode("ROUTE");
ROUTE2703.fromField = "fraction_changed";
ROUTE2703.fromNode = "RunTimer";
ROUTE2703.toField = "set_fraction";
ROUTE2703.toNode = "Run_r_ankle_RotationInterpolator_Run";
Group2673.children[29] = ROUTE2703;

ROUTE ROUTE2704 = createNode("ROUTE");
ROUTE2704.fromField = "fraction_changed";
ROUTE2704.fromNode = "RunTimer";
ROUTE2704.toField = "set_fraction";
ROUTE2704.toNode = "Run_r_knee_RotationInterpolator_Run";
Group2673.children[30] = ROUTE2704;

ROUTE ROUTE2705 = createNode("ROUTE");
ROUTE2705.fromField = "fraction_changed";
ROUTE2705.fromNode = "RunTimer";
ROUTE2705.toField = "set_fraction";
ROUTE2705.toNode = "Run_r_hip_RotationInterpolator_Run";
Group2673.children[31] = ROUTE2705;

ROUTE ROUTE2706 = createNode("ROUTE");
ROUTE2706.fromField = "fraction_changed";
ROUTE2706.fromNode = "RunTimer";
ROUTE2706.toField = "set_fraction";
ROUTE2706.toNode = "Run_l_ankle_RotationInterpolator_Run";
Group2673.children[32] = ROUTE2706;

ROUTE ROUTE2707 = createNode("ROUTE");
ROUTE2707.fromField = "fraction_changed";
ROUTE2707.fromNode = "RunTimer";
ROUTE2707.toField = "set_fraction";
ROUTE2707.toNode = "Run_l_knee_RotationInterpolator_Run";
Group2673.children[33] = ROUTE2707;

ROUTE ROUTE2708 = createNode("ROUTE");
ROUTE2708.fromField = "fraction_changed";
ROUTE2708.fromNode = "RunTimer";
ROUTE2708.toField = "set_fraction";
ROUTE2708.toNode = "Run_l_hip_RotationInterpolator_Run";
Group2673.children[34] = ROUTE2708;

ROUTE ROUTE2709 = createNode("ROUTE");
ROUTE2709.fromField = "fraction_changed";
ROUTE2709.fromNode = "RunTimer";
ROUTE2709.toField = "set_fraction";
ROUTE2709.toNode = "Run_lower_body_RotationInterpolator_Run";
Group2673.children[35] = ROUTE2709;

ROUTE ROUTE2710 = createNode("ROUTE");
ROUTE2710.fromField = "fraction_changed";
ROUTE2710.fromNode = "RunTimer";
ROUTE2710.toField = "set_fraction";
ROUTE2710.toNode = "Run_r_wrist_RotationInterpolator_Run";
Group2673.children[36] = ROUTE2710;

ROUTE ROUTE2711 = createNode("ROUTE");
ROUTE2711.fromField = "fraction_changed";
ROUTE2711.fromNode = "RunTimer";
ROUTE2711.toField = "set_fraction";
ROUTE2711.toNode = "Run_r_elbow_RotationInterpolator_Run";
Group2673.children[37] = ROUTE2711;

ROUTE ROUTE2712 = createNode("ROUTE");
ROUTE2712.fromField = "fraction_changed";
ROUTE2712.fromNode = "RunTimer";
ROUTE2712.toField = "set_fraction";
ROUTE2712.toNode = "Run_r_shoulder_RotationInterpolator_Run";
Group2673.children[38] = ROUTE2712;

ROUTE ROUTE2713 = createNode("ROUTE");
ROUTE2713.fromField = "fraction_changed";
ROUTE2713.fromNode = "RunTimer";
ROUTE2713.toField = "set_fraction";
ROUTE2713.toNode = "Run_l_wrist_RotationInterpolator_Run";
Group2673.children[39] = ROUTE2713;

ROUTE ROUTE2714 = createNode("ROUTE");
ROUTE2714.fromField = "fraction_changed";
ROUTE2714.fromNode = "RunTimer";
ROUTE2714.toField = "set_fraction";
ROUTE2714.toNode = "Run_l_elbow_RotationInterpolator_Run";
Group2673.children[40] = ROUTE2714;

ROUTE ROUTE2715 = createNode("ROUTE");
ROUTE2715.fromField = "fraction_changed";
ROUTE2715.fromNode = "RunTimer";
ROUTE2715.toField = "set_fraction";
ROUTE2715.toNode = "Run_l_shoulder_RotationInterpolator_Run";
Group2673.children[41] = ROUTE2715;

ROUTE ROUTE2716 = createNode("ROUTE");
ROUTE2716.fromField = "fraction_changed";
ROUTE2716.fromNode = "RunTimer";
ROUTE2716.toField = "set_fraction";
ROUTE2716.toNode = "Run_head_RotationInterpolator_Run";
Group2673.children[42] = ROUTE2716;

ROUTE ROUTE2717 = createNode("ROUTE");
ROUTE2717.fromField = "fraction_changed";
ROUTE2717.fromNode = "RunTimer";
ROUTE2717.toField = "set_fraction";
ROUTE2717.toNode = "Run_neck_RotationInterpolator_Run";
Group2673.children[43] = ROUTE2717;

ROUTE ROUTE2718 = createNode("ROUTE");
ROUTE2718.fromField = "fraction_changed";
ROUTE2718.fromNode = "RunTimer";
ROUTE2718.toField = "set_fraction";
ROUTE2718.toNode = "Run_upper_body_RotationInterpolator_Run";
Group2673.children[44] = ROUTE2718;

ROUTE ROUTE2719 = createNode("ROUTE");
ROUTE2719.fromField = "fraction_changed";
ROUTE2719.fromNode = "RunTimer";
ROUTE2719.toField = "set_fraction";
ROUTE2719.toNode = "Run_whole_body_RotationInterpolator_Run";
Group2673.children[45] = ROUTE2719;

ROUTE ROUTE2720 = createNode("ROUTE");
ROUTE2720.fromField = "fraction_changed";
ROUTE2720.fromNode = "RunTimer";
ROUTE2720.toField = "set_fraction";
ROUTE2720.toNode = "Run_whole_body_TranslationInterpolator_Run";
Group2673.children[46] = ROUTE2720;

ROUTE ROUTE2721 = createNode("ROUTE");
ROUTE2721.fromField = "fraction_changed";
ROUTE2721.fromNode = "RunTimer";
ROUTE2721.toField = "set_fraction";
ROUTE2721.toNode = "Run_l_sternoclavicular_RollInterpolator";
Group2673.children[47] = ROUTE2721;

ROUTE ROUTE2722 = createNode("ROUTE");
ROUTE2722.fromField = "fraction_changed";
ROUTE2722.fromNode = "RunTimer";
ROUTE2722.toField = "set_fraction";
ROUTE2722.toNode = "Run_l_acromioclavicular_RollInterpolator";
Group2673.children[48] = ROUTE2722;

ROUTE ROUTE2723 = createNode("ROUTE");
ROUTE2723.fromField = "fraction_changed";
ROUTE2723.fromNode = "RunTimer";
ROUTE2723.toField = "set_fraction";
ROUTE2723.toNode = "Run_r_sternoclavicular_RollInterpolator";
Group2673.children[49] = ROUTE2723;

ROUTE ROUTE2724 = createNode("ROUTE");
ROUTE2724.fromField = "fraction_changed";
ROUTE2724.fromNode = "RunTimer";
ROUTE2724.toField = "set_fraction";
ROUTE2724.toNode = "Run_r_acromioclavicular_RollInterpolator";
Group2673.children[50] = ROUTE2724;

ROUTE ROUTE2725 = createNode("ROUTE");
ROUTE2725.fromField = "fraction_changed";
ROUTE2725.fromNode = "RunTimer";
ROUTE2725.toField = "set_fraction";
ROUTE2725.toNode = "Run_r_metatarsal_PitchInterpolator";
Group2673.children[51] = ROUTE2725;

ROUTE ROUTE2726 = createNode("ROUTE");
ROUTE2726.fromField = "fraction_changed";
ROUTE2726.fromNode = "RunTimer";
ROUTE2726.toField = "set_fraction";
ROUTE2726.toNode = "Run_sacroiliac_YawInterpolator";
Group2673.children[52] = ROUTE2726;

ROUTE ROUTE2727 = createNode("ROUTE");
ROUTE2727.fromField = "fraction_changed";
ROUTE2727.fromNode = "RunTimer";
ROUTE2727.toField = "set_fraction";
ROUTE2727.toNode = "Run_vl5_YawInterpolator";
Group2673.children[53] = ROUTE2727;

ROUTE ROUTE2728 = createNode("ROUTE");
ROUTE2728.fromField = "fraction_changed";
ROUTE2728.fromNode = "RunTimer";
ROUTE2728.toField = "set_fraction";
ROUTE2728.toNode = "Run_vc6_YawInterpolator";
Group2673.children[54] = ROUTE2728;

ROUTE ROUTE2729 = createNode("ROUTE");
ROUTE2729.fromField = "fraction_changed";
ROUTE2729.fromNode = "RunTimer";
ROUTE2729.toField = "set_fraction";
ROUTE2729.toNode = "Run_l_thumb1_PitchInterpolator";
Group2673.children[55] = ROUTE2729;

ROUTE ROUTE2730 = createNode("ROUTE");
ROUTE2730.fromField = "fraction_changed";
ROUTE2730.fromNode = "RunTimer";
ROUTE2730.toField = "set_fraction";
ROUTE2730.toNode = "Run_r_thumb1_PitchInterpolator";
Group2673.children[56] = ROUTE2730;

ROUTE ROUTE2731 = createNode("ROUTE");
ROUTE2731.fromField = "value_changed";
ROUTE2731.fromNode = "Run_r_ankle_RotationInterpolator_Run";
ROUTE2731.toField = "rotation";
ROUTE2731.toNode = "hanim_r_ankle";
Group2673.children[57] = ROUTE2731;

ROUTE ROUTE2732 = createNode("ROUTE");
ROUTE2732.fromField = "value_changed";
ROUTE2732.fromNode = "Run_r_knee_RotationInterpolator_Run";
ROUTE2732.toField = "rotation";
ROUTE2732.toNode = "hanim_r_knee";
Group2673.children[58] = ROUTE2732;

ROUTE ROUTE2733 = createNode("ROUTE");
ROUTE2733.fromField = "value_changed";
ROUTE2733.fromNode = "Run_r_hip_RotationInterpolator_Run";
ROUTE2733.toField = "rotation";
ROUTE2733.toNode = "hanim_r_hip";
Group2673.children[59] = ROUTE2733;

ROUTE ROUTE2734 = createNode("ROUTE");
ROUTE2734.fromField = "value_changed";
ROUTE2734.fromNode = "Run_l_ankle_RotationInterpolator_Run";
ROUTE2734.toField = "rotation";
ROUTE2734.toNode = "hanim_l_ankle";
Group2673.children[60] = ROUTE2734;

ROUTE ROUTE2735 = createNode("ROUTE");
ROUTE2735.fromField = "value_changed";
ROUTE2735.fromNode = "Run_l_knee_RotationInterpolator_Run";
ROUTE2735.toField = "rotation";
ROUTE2735.toNode = "hanim_l_knee";
Group2673.children[61] = ROUTE2735;

ROUTE ROUTE2736 = createNode("ROUTE");
ROUTE2736.fromField = "value_changed";
ROUTE2736.fromNode = "Run_l_hip_RotationInterpolator_Run";
ROUTE2736.toField = "rotation";
ROUTE2736.toNode = "hanim_l_hip";
Group2673.children[62] = ROUTE2736;

ROUTE ROUTE2737 = createNode("ROUTE");
ROUTE2737.fromField = "value_changed";
ROUTE2737.fromNode = "Run_r_wrist_RotationInterpolator_Run";
ROUTE2737.toField = "rotation";
ROUTE2737.toNode = "hanim_r_wrist";
Group2673.children[63] = ROUTE2737;

ROUTE ROUTE2738 = createNode("ROUTE");
ROUTE2738.fromField = "value_changed";
ROUTE2738.fromNode = "Run_r_elbow_RotationInterpolator_Run";
ROUTE2738.toField = "rotation";
ROUTE2738.toNode = "hanim_r_elbow";
Group2673.children[64] = ROUTE2738;

ROUTE ROUTE2739 = createNode("ROUTE");
ROUTE2739.fromField = "value_changed";
ROUTE2739.fromNode = "Run_r_shoulder_RotationInterpolator_Run";
ROUTE2739.toField = "rotation";
ROUTE2739.toNode = "hanim_r_shoulder";
Group2673.children[65] = ROUTE2739;

ROUTE ROUTE2740 = createNode("ROUTE");
ROUTE2740.fromField = "value_changed";
ROUTE2740.fromNode = "Run_l_wrist_RotationInterpolator_Run";
ROUTE2740.toField = "rotation";
ROUTE2740.toNode = "hanim_l_wrist";
Group2673.children[66] = ROUTE2740;

ROUTE ROUTE2741 = createNode("ROUTE");
ROUTE2741.fromField = "value_changed";
ROUTE2741.fromNode = "Run_l_elbow_RotationInterpolator_Run";
ROUTE2741.toField = "rotation";
ROUTE2741.toNode = "hanim_l_elbow";
Group2673.children[67] = ROUTE2741;

ROUTE ROUTE2742 = createNode("ROUTE");
ROUTE2742.fromField = "value_changed";
ROUTE2742.fromNode = "Run_l_shoulder_RotationInterpolator_Run";
ROUTE2742.toField = "rotation";
ROUTE2742.toNode = "hanim_l_shoulder";
Group2673.children[68] = ROUTE2742;

ROUTE ROUTE2743 = createNode("ROUTE");
ROUTE2743.fromField = "value_changed";
ROUTE2743.fromNode = "Run_lower_body_RotationInterpolator_Run";
ROUTE2743.toField = "rotation";
ROUTE2743.toNode = "hanim_sacroiliac";
Group2673.children[69] = ROUTE2743;

ROUTE ROUTE2744 = createNode("ROUTE");
ROUTE2744.fromField = "value_changed";
ROUTE2744.fromNode = "Run_head_RotationInterpolator_Run";
ROUTE2744.toField = "rotation";
ROUTE2744.toNode = "hanim_skullbase";
Group2673.children[70] = ROUTE2744;

ROUTE ROUTE2745 = createNode("ROUTE");
ROUTE2745.fromField = "value_changed";
ROUTE2745.fromNode = "Run_neck_RotationInterpolator_Run";
ROUTE2745.toField = "rotation";
ROUTE2745.toNode = "hanim_vc4";
Group2673.children[71] = ROUTE2745;

ROUTE ROUTE2746 = createNode("ROUTE");
ROUTE2746.fromField = "value_changed";
ROUTE2746.fromNode = "Run_upper_body_RotationInterpolator_Run";
ROUTE2746.toField = "rotation";
ROUTE2746.toNode = "hanim_vl1";
Group2673.children[72] = ROUTE2746;

ROUTE ROUTE2747 = createNode("ROUTE");
ROUTE2747.fromField = "value_changed";
ROUTE2747.fromNode = "Run_whole_body_RotationInterpolator_Run";
ROUTE2747.toField = "rotation";
ROUTE2747.toNode = "hanim_humanoid_root";
Group2673.children[73] = ROUTE2747;

ROUTE ROUTE2748 = createNode("ROUTE");
ROUTE2748.fromField = "value_changed";
ROUTE2748.fromNode = "Run_whole_body_TranslationInterpolator_Run";
ROUTE2748.toField = "translation";
ROUTE2748.toNode = "hanim_humanoid_root";
Group2673.children[74] = ROUTE2748;

ROUTE ROUTE2749 = createNode("ROUTE");
ROUTE2749.fromField = "value_changed";
ROUTE2749.fromNode = "Run_l_sternoclavicular_RollInterpolator";
ROUTE2749.toField = "rotation";
ROUTE2749.toNode = "hanim_l_sternoclavicular";
Group2673.children[75] = ROUTE2749;

ROUTE ROUTE2750 = createNode("ROUTE");
ROUTE2750.fromField = "value_changed";
ROUTE2750.fromNode = "Run_l_acromioclavicular_RollInterpolator";
ROUTE2750.toField = "rotation";
ROUTE2750.toNode = "hanim_l_acromioclavicular";
Group2673.children[76] = ROUTE2750;

ROUTE ROUTE2751 = createNode("ROUTE");
ROUTE2751.fromField = "value_changed";
ROUTE2751.fromNode = "Run_r_sternoclavicular_RollInterpolator";
ROUTE2751.toField = "rotation";
ROUTE2751.toNode = "hanim_r_sternoclavicular";
Group2673.children[77] = ROUTE2751;

ROUTE ROUTE2752 = createNode("ROUTE");
ROUTE2752.fromField = "value_changed";
ROUTE2752.fromNode = "Run_r_acromioclavicular_RollInterpolator";
ROUTE2752.toField = "rotation";
ROUTE2752.toNode = "hanim_r_acromioclavicular";
Group2673.children[78] = ROUTE2752;

ROUTE ROUTE2753 = createNode("ROUTE");
ROUTE2753.fromField = "value_changed";
ROUTE2753.fromNode = "Run_r_metatarsal_PitchInterpolator";
ROUTE2753.toField = "rotation";
ROUTE2753.toNode = "hanim_l_metatarsal";
Group2673.children[79] = ROUTE2753;

ROUTE ROUTE2754 = createNode("ROUTE");
ROUTE2754.fromField = "value_changed";
ROUTE2754.fromNode = "Run_r_metatarsal_PitchInterpolator";
ROUTE2754.toField = "rotation";
ROUTE2754.toNode = "hanim_r_metatarsal";
Group2673.children[80] = ROUTE2754;

ROUTE ROUTE2755 = createNode("ROUTE");
ROUTE2755.fromField = "value_changed";
ROUTE2755.fromNode = "Run_sacroiliac_YawInterpolator";
ROUTE2755.toField = "rotation";
ROUTE2755.toNode = "hanim_sacroiliac";
Group2673.children[81] = ROUTE2755;

ROUTE ROUTE2756 = createNode("ROUTE");
ROUTE2756.fromField = "value_changed";
ROUTE2756.fromNode = "Run_vl5_YawInterpolator";
ROUTE2756.toField = "rotation";
ROUTE2756.toNode = "hanim_vl5";
Group2673.children[82] = ROUTE2756;

ROUTE ROUTE2757 = createNode("ROUTE");
ROUTE2757.fromField = "value_changed";
ROUTE2757.fromNode = "Run_vc6_YawInterpolator";
ROUTE2757.toField = "rotation";
ROUTE2757.toNode = "hanim_vc6";
Group2673.children[83] = ROUTE2757;

ROUTE ROUTE2758 = createNode("ROUTE");
ROUTE2758.fromField = "value_changed";
ROUTE2758.fromNode = "Run_l_thumb1_PitchInterpolator";
ROUTE2758.toField = "rotation";
ROUTE2758.toNode = "hanim_l_thumb1";
Group2673.children[84] = ROUTE2758;

ROUTE ROUTE2759 = createNode("ROUTE");
ROUTE2759.fromField = "value_changed";
ROUTE2759.fromNode = "Run_r_thumb1_PitchInterpolator";
ROUTE2759.toField = "rotation";
ROUTE2759.toNode = "hanim_r_thumb1";
Group2673.children[85] = ROUTE2759;

children[19] = Group2673;

Group Group2760 = createNode("Group");
Group2760.DEF = "JumpAnimation";
TimeSensor TimeSensor2761 = createNode("TimeSensor");
TimeSensor2761.DEF = "JumpTimer";
TimeSensor2761.cycleInterval = 3.73;
TimeSensor2761.loop = True;
Group2760.children = new MFNode();

Group2760.children[0] = TimeSensor2761;

OrientationInterpolator OrientationInterpolator2762 = createNode("OrientationInterpolator");
OrientationInterpolator2762.DEF = "Jump_r_metatarsal_PitchInterpolator";
OrientationInterpolator2762.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2762.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2760.children[1] = OrientationInterpolator2762;

OrientationInterpolator OrientationInterpolator2763 = createNode("OrientationInterpolator");
OrientationInterpolator2763.DEF = "Jump_r_ankle_RotationInterpolator";
OrientationInterpolator2763.key = new MFFloat(new float[0,0.1,0.15,0.25,0.28,0.32,0.35,0.64,0.76,0.84,0.88,0.92,0.96,1]);
OrientationInterpolator2763.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.6735,-1,0,0,0.6735,-1,0,0,0.3527,-1,0,0,0.3038,-1,0,0,0.07964,1,0,0,1.3,1,0,0,0.6509,1,0,0,0.3001,-1,0,0,0.2087,-1,0,0,0.3756,-1,0,0,0.3279,-1,0,0,0.1193,0,0,1,0]);
Group2760.children[2] = OrientationInterpolator2763;

OrientationInterpolator OrientationInterpolator2764 = createNode("OrientationInterpolator");
OrientationInterpolator2764.DEF = "Jump_r_knee_RotationInterpolator";
OrientationInterpolator2764.key = new MFFloat(new float[0,0.2,0.25,0.3,0.64,0.76,0.88,1]);
OrientationInterpolator2764.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,2.5,1,0,0,1.7,0,0,1,0,1,0,0,0.9507,1,0,0,0.5845,1,0,0,0.9054,0,0,1,0]);
Group2760.children[3] = OrientationInterpolator2764;

OrientationInterpolator OrientationInterpolator2765 = createNode("OrientationInterpolator");
OrientationInterpolator2765.DEF = "Jump_r_hip_RotationInterpolator";
OrientationInterpolator2765.key = new MFFloat(new float[0,0.18,0.24,0.26,0.28,0.32,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator2765.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,1.63,-1,0,0,1.7,-1,0,0,1.55,-1,0,0,0.8943,-1,0,0,0.3698,0,0,1,0,-1,0,0,0.4963,-1,0,0,0.3829,-1,0,0,0.5169,0,0,1,0]);
Group2760.children[4] = OrientationInterpolator2765;

OrientationInterpolator OrientationInterpolator2766 = createNode("OrientationInterpolator");
OrientationInterpolator2766.DEF = "Jump_l_ankle_RotationInterpolator";
OrientationInterpolator2766.key = new MFFloat(new float[0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1]);
OrientationInterpolator2766.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.625,-1,0,0,0.625,-1,0,0,0.3364,-1,0,0,0.2742,-1,0,0,0.05078,1,0,0,0.2833,1,0,0,0.6667,1,0,0,0.2833,-1,0,0,0.2108,-1,0,0,0.375,-1,0,0,0.3146,-1,0,0,0.1174,0,0,1,0]);
Group2760.children[5] = OrientationInterpolator2766;

OrientationInterpolator OrientationInterpolator2767 = createNode("OrientationInterpolator");
OrientationInterpolator2767.DEF = "Jump_l_knee_RotationInterpolator";
OrientationInterpolator2767.key = new MFFloat(new float[0,0.28,0.32,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator2767.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,2.047,1,0,0,2.047,0,0,1,0,1,0,0,1.566,1,0,0,0.5913,1,0,0,0.9235,0,0,1,0]);
Group2760.children[6] = OrientationInterpolator2767;

OrientationInterpolator OrientationInterpolator2768 = createNode("OrientationInterpolator");
OrientationInterpolator2768.DEF = "Jump_l_hip_RotationInterpolator";
OrientationInterpolator2768.key = new MFFloat(new float[0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator2768.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,4.349,1,0,0,4.349,1,0,0,4.615,-1,0,0,0.9136,-1,0,0,0.3614,0,0,1,0,-1,0,0,0.7869,-1,0,0,0.3918,-1,0,0,0.5433,0,0,1,0]);
Group2760.children[7] = OrientationInterpolator2768;

OrientationInterpolator OrientationInterpolator2769 = createNode("OrientationInterpolator");
OrientationInterpolator2769.DEF = "Jump_lower_body_RotationInterpolator";
OrientationInterpolator2769.key = new MFFloat(new float[0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator2769.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,0.1892,1,0,0,0.1892,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2760.children[8] = OrientationInterpolator2769;

OrientationInterpolator OrientationInterpolator2770 = createNode("OrientationInterpolator");
OrientationInterpolator2770.DEF = "Jump_r_wrist_RotationInterpolator";
OrientationInterpolator2770.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator2770.keyValue = new MFRotation(new float[0,0,1,0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0,1,0,0.497349,0,0,1,0]);
Group2760.children[9] = OrientationInterpolator2770;

OrientationInterpolator OrientationInterpolator2771 = createNode("OrientationInterpolator");
OrientationInterpolator2771.DEF = "Jump_r_elbow_RotationInterpolator";
OrientationInterpolator2771.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator2771.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.04151,-1,0,0,0.04151,-1,0,0,0.5855,-1,0,0,0.5852,0,0,1,0]);
Group2760.children[10] = OrientationInterpolator2771;

OrientationInterpolator OrientationInterpolator2772 = createNode("OrientationInterpolator");
OrientationInterpolator2772.DEF = "Jump_r_shoulder_RotationInterpolator";
OrientationInterpolator2772.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,0.88,1]);
OrientationInterpolator2772.keyValue = new MFRotation(new float[0,0,1,0,0.9992,0.02042,0.03558,4.688,0.9992,0.02042,0.03558,4.688,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0,0,1,0]);
Group2760.children[11] = OrientationInterpolator2772;

OrientationInterpolator OrientationInterpolator2773 = createNode("OrientationInterpolator");
OrientationInterpolator2773.DEF = "Jump_l_wrist_RotationInterpolator";
OrientationInterpolator2773.key = new MFFloat(new float[0,0.48,0.52,0.64,0.76,0.88,1]);
OrientationInterpolator2773.keyValue = new MFRotation(new float[0,0,1,0,0.0672928,0.989475,-0.128107,4.15574,0.0672928,0.989475,-0.128107,4.15574,0.00364942,0.999901,0.0135896,4.5822,0,-1,0,0.655922,-0.00050618,-0.999999,0.0012782,1.28397,0,0,1,0]);
Group2760.children[12] = OrientationInterpolator2773;

OrientationInterpolator OrientationInterpolator2774 = createNode("OrientationInterpolator");
OrientationInterpolator2774.DEF = "Jump_l_elbow_RotationInterpolator";
OrientationInterpolator2774.key = new MFFloat(new float[0,0.28,0.32,0.58,0.72,1]);
OrientationInterpolator2774.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,1.13,-1,0,0,1.7,-1,0,0,1.7,-1,0,0,0.4,0,0,1,0]);
Group2760.children[13] = OrientationInterpolator2774;

OrientationInterpolator OrientationInterpolator2775 = createNode("OrientationInterpolator");
OrientationInterpolator2775.DEF = "Jump_l_shoulder_RotationInterpolator";
OrientationInterpolator2775.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,0.88,1]);
OrientationInterpolator2775.keyValue = new MFRotation(new float[0,0,1,0,-0.9987,0.02554,0.04498,1.57,-0.9987,0.02554,0.04498,1.57,1,0.0004113,0.003055,4.114,-0.8413,0.3238,0.4329,1.453,-0.877,0.4198,0.2337,0.6009,0,0,1,0]);
Group2760.children[14] = OrientationInterpolator2775;

OrientationInterpolator OrientationInterpolator2776 = createNode("OrientationInterpolator");
OrientationInterpolator2776.DEF = "Jump_head_RotationInterpolator";
OrientationInterpolator2776.key = new MFFloat(new float[0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator2776.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.5989,-1,0,0,0.5989,-1,0,0,0.3216,1,0,0,0.06503,0,0,1,0]);
Group2760.children[15] = OrientationInterpolator2776;

OrientationInterpolator OrientationInterpolator2777 = createNode("OrientationInterpolator");
OrientationInterpolator2777.DEF = "Jump_neck_RotationInterpolator";
OrientationInterpolator2777.key = new MFFloat(new float[0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator2777.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.1942,-1,0,0,0.1942,0,0,1,0,1,0,0,0.2284,0,0,1,0]);
Group2760.children[16] = OrientationInterpolator2777;

OrientationInterpolator OrientationInterpolator2778 = createNode("OrientationInterpolator");
OrientationInterpolator2778.DEF = "Jump_upper_body_RotationInterpolator";
OrientationInterpolator2778.key = new MFFloat(new float[0,0.22,0.28,0.34,0.71,0.88,1]);
OrientationInterpolator2778.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.05,1,0,0,1.051,-1,0,0,0.257,1,0,0,0.2171,1,0,0,0.3465,0,0,1,0]);
Group2760.children[17] = OrientationInterpolator2778;

OrientationInterpolator OrientationInterpolator2779 = createNode("OrientationInterpolator");
OrientationInterpolator2779.DEF = "Jump_whole_body_RotationInterpolator";
OrientationInterpolator2779.key = new MFFloat(new float[0,0.28,0.32,0.48,0.64,0.76,1]);
OrientationInterpolator2779.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,0.3273,1,0,0,0.3273,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2760.children[18] = OrientationInterpolator2779;

PositionInterpolator PositionInterpolator2780 = createNode("PositionInterpolator");
PositionInterpolator2780.DEF = "Jump_whole_body_TranslationInterpolator";
PositionInterpolator2780.key = new MFFloat(new float[0,0.04,0.07,0.11,0.15,0.19,0.22,0.25,0.27,0.31,0.33,0.35,0.38,0.53,0.544,0.76,0.8,0.84,0.88,0.92,0.96,1]);
PositionInterpolator2780.keyValue = new MFVec3f(new float[0,0,0,0,-0.01264,-0.01289,0,-0.04712,-0.03738,-0.0003345,-0.1049,-0.05353,-0.0005712,-0.1892,-0.06561,-0.0008233,-0.286,-0.06276,-0.0009591,-0.3795,-0.05148,-0.00106,-0.4484,-0.03656,-0.00106,-0.4484,-0.03656,-0.001122,-0.25,-0.1499,-0.0008616,-0.05,-0.06358,-0.0005128,0.15,-0.05488,0.0004779,0.55,0.02732,0.0001728,1.385,0.006873,0.00017,1.395,0.0069,0,0.35,0.02148,0,-0.01299,-0.01057,0,-0.06932,-0.01064,0.0001365,-0.1037,-0.005059,0.0001279,-0.07198,-0.007596,0.000141,-0.01626,-0.004935,0,0,0]);
Group2760.children[19] = PositionInterpolator2780;

OrientationInterpolator OrientationInterpolator2781 = createNode("OrientationInterpolator");
OrientationInterpolator2781.DEF = "Jump_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2781.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2781.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0]);
Group2760.children[20] = OrientationInterpolator2781;

OrientationInterpolator OrientationInterpolator2782 = createNode("OrientationInterpolator");
OrientationInterpolator2782.DEF = "Jump_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2782.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2782.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2760.children[21] = OrientationInterpolator2782;

OrientationInterpolator OrientationInterpolator2783 = createNode("OrientationInterpolator");
OrientationInterpolator2783.DEF = "Jump_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2783.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2783.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0]);
Group2760.children[22] = OrientationInterpolator2783;

OrientationInterpolator OrientationInterpolator2784 = createNode("OrientationInterpolator");
OrientationInterpolator2784.DEF = "Jump_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2784.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2784.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2760.children[23] = OrientationInterpolator2784;

OrientationInterpolator OrientationInterpolator2785 = createNode("OrientationInterpolator");
OrientationInterpolator2785.DEF = "Jump_sacroiliac_YawInterpolator";
OrientationInterpolator2785.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2785.keyValue = new MFRotation(new float[0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,-1,0.24,0,-1,0,0.4,0,1,0,0]);
Group2760.children[24] = OrientationInterpolator2785;

OrientationInterpolator OrientationInterpolator2786 = createNode("OrientationInterpolator");
OrientationInterpolator2786.DEF = "Jump_vl5_YawInterpolator";
OrientationInterpolator2786.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2786.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,-0.1,0,1,0,0,0,1,0,0,1,0,0,0.6,0,1,0,0.1,0,1,0,0]);
Group2760.children[25] = OrientationInterpolator2786;

OrientationInterpolator OrientationInterpolator2787 = createNode("OrientationInterpolator");
OrientationInterpolator2787.DEF = "Jump_vc6_YawInterpolator";
OrientationInterpolator2787.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2787.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,0.8,0,1,0,0,0,1,0,0,-1,0,0,0.6,0,-1,0,0.8,0,1,0,0]);
Group2760.children[26] = OrientationInterpolator2787;

OrientationInterpolator OrientationInterpolator2788 = createNode("OrientationInterpolator");
OrientationInterpolator2788.DEF = "Jump_l_thumb1_PitchInterpolator";
OrientationInterpolator2788.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2788.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group2760.children[27] = OrientationInterpolator2788;

OrientationInterpolator OrientationInterpolator2789 = createNode("OrientationInterpolator");
OrientationInterpolator2789.DEF = "Jump_r_thumb1_PitchInterpolator";
OrientationInterpolator2789.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2789.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group2760.children[28] = OrientationInterpolator2789;

ROUTE ROUTE2790 = createNode("ROUTE");
ROUTE2790.fromField = "fraction_changed";
ROUTE2790.fromNode = "JumpTimer";
ROUTE2790.toField = "set_fraction";
ROUTE2790.toNode = "Jump_r_ankle_RotationInterpolator";
Group2760.children[29] = ROUTE2790;

ROUTE ROUTE2791 = createNode("ROUTE");
ROUTE2791.fromField = "fraction_changed";
ROUTE2791.fromNode = "JumpTimer";
ROUTE2791.toField = "set_fraction";
ROUTE2791.toNode = "Jump_r_knee_RotationInterpolator";
Group2760.children[30] = ROUTE2791;

ROUTE ROUTE2792 = createNode("ROUTE");
ROUTE2792.fromField = "fraction_changed";
ROUTE2792.fromNode = "JumpTimer";
ROUTE2792.toField = "set_fraction";
ROUTE2792.toNode = "Jump_r_hip_RotationInterpolator";
Group2760.children[31] = ROUTE2792;

ROUTE ROUTE2793 = createNode("ROUTE");
ROUTE2793.fromField = "fraction_changed";
ROUTE2793.fromNode = "JumpTimer";
ROUTE2793.toField = "set_fraction";
ROUTE2793.toNode = "Jump_l_ankle_RotationInterpolator";
Group2760.children[32] = ROUTE2793;

ROUTE ROUTE2794 = createNode("ROUTE");
ROUTE2794.fromField = "fraction_changed";
ROUTE2794.fromNode = "JumpTimer";
ROUTE2794.toField = "set_fraction";
ROUTE2794.toNode = "Jump_l_knee_RotationInterpolator";
Group2760.children[33] = ROUTE2794;

ROUTE ROUTE2795 = createNode("ROUTE");
ROUTE2795.fromField = "fraction_changed";
ROUTE2795.fromNode = "JumpTimer";
ROUTE2795.toField = "set_fraction";
ROUTE2795.toNode = "Jump_l_hip_RotationInterpolator";
Group2760.children[34] = ROUTE2795;

ROUTE ROUTE2796 = createNode("ROUTE");
ROUTE2796.fromField = "fraction_changed";
ROUTE2796.fromNode = "JumpTimer";
ROUTE2796.toField = "set_fraction";
ROUTE2796.toNode = "Jump_lower_body_RotationInterpolator";
Group2760.children[35] = ROUTE2796;

ROUTE ROUTE2797 = createNode("ROUTE");
ROUTE2797.fromField = "fraction_changed";
ROUTE2797.fromNode = "JumpTimer";
ROUTE2797.toField = "set_fraction";
ROUTE2797.toNode = "Jump_r_wrist_RotationInterpolator";
Group2760.children[36] = ROUTE2797;

ROUTE ROUTE2798 = createNode("ROUTE");
ROUTE2798.fromField = "fraction_changed";
ROUTE2798.fromNode = "JumpTimer";
ROUTE2798.toField = "set_fraction";
ROUTE2798.toNode = "Jump_r_elbow_RotationInterpolator";
Group2760.children[37] = ROUTE2798;

ROUTE ROUTE2799 = createNode("ROUTE");
ROUTE2799.fromField = "fraction_changed";
ROUTE2799.fromNode = "JumpTimer";
ROUTE2799.toField = "set_fraction";
ROUTE2799.toNode = "Jump_r_shoulder_RotationInterpolator";
Group2760.children[38] = ROUTE2799;

ROUTE ROUTE2800 = createNode("ROUTE");
ROUTE2800.fromField = "fraction_changed";
ROUTE2800.fromNode = "JumpTimer";
ROUTE2800.toField = "set_fraction";
ROUTE2800.toNode = "Jump_l_wrist_RotationInterpolator";
Group2760.children[39] = ROUTE2800;

ROUTE ROUTE2801 = createNode("ROUTE");
ROUTE2801.fromField = "fraction_changed";
ROUTE2801.fromNode = "JumpTimer";
ROUTE2801.toField = "set_fraction";
ROUTE2801.toNode = "Jump_l_elbow_RotationInterpolator";
Group2760.children[40] = ROUTE2801;

ROUTE ROUTE2802 = createNode("ROUTE");
ROUTE2802.fromField = "fraction_changed";
ROUTE2802.fromNode = "JumpTimer";
ROUTE2802.toField = "set_fraction";
ROUTE2802.toNode = "Jump_l_shoulder_RotationInterpolator";
Group2760.children[41] = ROUTE2802;

ROUTE ROUTE2803 = createNode("ROUTE");
ROUTE2803.fromField = "fraction_changed";
ROUTE2803.fromNode = "JumpTimer";
ROUTE2803.toField = "set_fraction";
ROUTE2803.toNode = "Jump_head_RotationInterpolator";
Group2760.children[42] = ROUTE2803;

ROUTE ROUTE2804 = createNode("ROUTE");
ROUTE2804.fromField = "fraction_changed";
ROUTE2804.fromNode = "JumpTimer";
ROUTE2804.toField = "set_fraction";
ROUTE2804.toNode = "Jump_neck_RotationInterpolator";
Group2760.children[43] = ROUTE2804;

ROUTE ROUTE2805 = createNode("ROUTE");
ROUTE2805.fromField = "fraction_changed";
ROUTE2805.fromNode = "JumpTimer";
ROUTE2805.toField = "set_fraction";
ROUTE2805.toNode = "Jump_upper_body_RotationInterpolator";
Group2760.children[44] = ROUTE2805;

ROUTE ROUTE2806 = createNode("ROUTE");
ROUTE2806.fromField = "fraction_changed";
ROUTE2806.fromNode = "JumpTimer";
ROUTE2806.toField = "set_fraction";
ROUTE2806.toNode = "Jump_whole_body_RotationInterpolator";
Group2760.children[45] = ROUTE2806;

ROUTE ROUTE2807 = createNode("ROUTE");
ROUTE2807.fromField = "fraction_changed";
ROUTE2807.fromNode = "JumpTimer";
ROUTE2807.toField = "set_fraction";
ROUTE2807.toNode = "Jump_whole_body_TranslationInterpolator";
Group2760.children[46] = ROUTE2807;

ROUTE ROUTE2808 = createNode("ROUTE");
ROUTE2808.fromField = "fraction_changed";
ROUTE2808.fromNode = "JumpTimer";
ROUTE2808.toField = "set_fraction";
ROUTE2808.toNode = "Jump_l_sternoclavicular_RollInterpolator";
Group2760.children[47] = ROUTE2808;

ROUTE ROUTE2809 = createNode("ROUTE");
ROUTE2809.fromField = "fraction_changed";
ROUTE2809.fromNode = "JumpTimer";
ROUTE2809.toField = "set_fraction";
ROUTE2809.toNode = "Jump_l_acromioclavicular_RollInterpolator";
Group2760.children[48] = ROUTE2809;

ROUTE ROUTE2810 = createNode("ROUTE");
ROUTE2810.fromField = "fraction_changed";
ROUTE2810.fromNode = "JumpTimer";
ROUTE2810.toField = "set_fraction";
ROUTE2810.toNode = "Jump_r_sternoclavicular_RollInterpolator";
Group2760.children[49] = ROUTE2810;

ROUTE ROUTE2811 = createNode("ROUTE");
ROUTE2811.fromField = "fraction_changed";
ROUTE2811.fromNode = "JumpTimer";
ROUTE2811.toField = "set_fraction";
ROUTE2811.toNode = "Jump_r_acromioclavicular_RollInterpolator";
Group2760.children[50] = ROUTE2811;

ROUTE ROUTE2812 = createNode("ROUTE");
ROUTE2812.fromField = "fraction_changed";
ROUTE2812.fromNode = "JumpTimer";
ROUTE2812.toField = "set_fraction";
ROUTE2812.toNode = "Jump_r_metatarsal_PitchInterpolator";
Group2760.children[51] = ROUTE2812;

ROUTE ROUTE2813 = createNode("ROUTE");
ROUTE2813.fromField = "fraction_changed";
ROUTE2813.fromNode = "JumpTimer";
ROUTE2813.toField = "set_fraction";
ROUTE2813.toNode = "Jump_sacroiliac_YawInterpolator";
Group2760.children[52] = ROUTE2813;

ROUTE ROUTE2814 = createNode("ROUTE");
ROUTE2814.fromField = "fraction_changed";
ROUTE2814.fromNode = "JumpTimer";
ROUTE2814.toField = "set_fraction";
ROUTE2814.toNode = "Jump_vl5_YawInterpolator";
Group2760.children[53] = ROUTE2814;

ROUTE ROUTE2815 = createNode("ROUTE");
ROUTE2815.fromField = "fraction_changed";
ROUTE2815.fromNode = "JumpTimer";
ROUTE2815.toField = "set_fraction";
ROUTE2815.toNode = "Jump_vc6_YawInterpolator";
Group2760.children[54] = ROUTE2815;

ROUTE ROUTE2816 = createNode("ROUTE");
ROUTE2816.fromField = "fraction_changed";
ROUTE2816.fromNode = "JumpTimer";
ROUTE2816.toField = "set_fraction";
ROUTE2816.toNode = "Jump_l_thumb1_PitchInterpolator";
Group2760.children[55] = ROUTE2816;

ROUTE ROUTE2817 = createNode("ROUTE");
ROUTE2817.fromField = "fraction_changed";
ROUTE2817.fromNode = "JumpTimer";
ROUTE2817.toField = "set_fraction";
ROUTE2817.toNode = "Jump_r_thumb1_PitchInterpolator";
Group2760.children[56] = ROUTE2817;

ROUTE ROUTE2818 = createNode("ROUTE");
ROUTE2818.fromField = "value_changed";
ROUTE2818.fromNode = "Jump_r_ankle_RotationInterpolator";
ROUTE2818.toField = "rotation";
ROUTE2818.toNode = "hanim_r_ankle";
Group2760.children[57] = ROUTE2818;

ROUTE ROUTE2819 = createNode("ROUTE");
ROUTE2819.fromField = "value_changed";
ROUTE2819.fromNode = "Jump_r_knee_RotationInterpolator";
ROUTE2819.toField = "rotation";
ROUTE2819.toNode = "hanim_r_knee";
Group2760.children[58] = ROUTE2819;

ROUTE ROUTE2820 = createNode("ROUTE");
ROUTE2820.fromField = "value_changed";
ROUTE2820.fromNode = "Jump_r_hip_RotationInterpolator";
ROUTE2820.toField = "rotation";
ROUTE2820.toNode = "hanim_r_hip";
Group2760.children[59] = ROUTE2820;

ROUTE ROUTE2821 = createNode("ROUTE");
ROUTE2821.fromField = "value_changed";
ROUTE2821.fromNode = "Jump_l_ankle_RotationInterpolator";
ROUTE2821.toField = "rotation";
ROUTE2821.toNode = "hanim_l_ankle";
Group2760.children[60] = ROUTE2821;

ROUTE ROUTE2822 = createNode("ROUTE");
ROUTE2822.fromField = "value_changed";
ROUTE2822.fromNode = "Jump_l_knee_RotationInterpolator";
ROUTE2822.toField = "rotation";
ROUTE2822.toNode = "hanim_l_knee";
Group2760.children[61] = ROUTE2822;

ROUTE ROUTE2823 = createNode("ROUTE");
ROUTE2823.fromField = "value_changed";
ROUTE2823.fromNode = "Jump_l_hip_RotationInterpolator";
ROUTE2823.toField = "rotation";
ROUTE2823.toNode = "hanim_l_hip";
Group2760.children[62] = ROUTE2823;

ROUTE ROUTE2824 = createNode("ROUTE");
ROUTE2824.fromField = "value_changed";
ROUTE2824.fromNode = "Jump_lower_body_RotationInterpolator";
ROUTE2824.toField = "rotation";
ROUTE2824.toNode = "hanim_sacroiliac";
Group2760.children[63] = ROUTE2824;

ROUTE ROUTE2825 = createNode("ROUTE");
ROUTE2825.fromField = "value_changed";
ROUTE2825.fromNode = "Jump_r_wrist_RotationInterpolator";
ROUTE2825.toField = "rotation";
ROUTE2825.toNode = "hanim_r_wrist";
Group2760.children[64] = ROUTE2825;

ROUTE ROUTE2826 = createNode("ROUTE");
ROUTE2826.fromField = "value_changed";
ROUTE2826.fromNode = "Jump_r_elbow_RotationInterpolator";
ROUTE2826.toField = "rotation";
ROUTE2826.toNode = "hanim_r_elbow";
Group2760.children[65] = ROUTE2826;

ROUTE ROUTE2827 = createNode("ROUTE");
ROUTE2827.fromField = "value_changed";
ROUTE2827.fromNode = "Jump_r_shoulder_RotationInterpolator";
ROUTE2827.toField = "rotation";
ROUTE2827.toNode = "hanim_r_shoulder";
Group2760.children[66] = ROUTE2827;

ROUTE ROUTE2828 = createNode("ROUTE");
ROUTE2828.fromField = "value_changed";
ROUTE2828.fromNode = "Jump_l_wrist_RotationInterpolator";
ROUTE2828.toField = "rotation";
ROUTE2828.toNode = "hanim_l_wrist";
Group2760.children[67] = ROUTE2828;

ROUTE ROUTE2829 = createNode("ROUTE");
ROUTE2829.fromField = "value_changed";
ROUTE2829.fromNode = "Jump_l_elbow_RotationInterpolator";
ROUTE2829.toField = "rotation";
ROUTE2829.toNode = "hanim_l_elbow";
Group2760.children[68] = ROUTE2829;

ROUTE ROUTE2830 = createNode("ROUTE");
ROUTE2830.fromField = "value_changed";
ROUTE2830.fromNode = "Jump_l_shoulder_RotationInterpolator";
ROUTE2830.toField = "rotation";
ROUTE2830.toNode = "hanim_l_shoulder";
Group2760.children[69] = ROUTE2830;

ROUTE ROUTE2831 = createNode("ROUTE");
ROUTE2831.fromField = "value_changed";
ROUTE2831.fromNode = "Jump_head_RotationInterpolator";
ROUTE2831.toField = "rotation";
ROUTE2831.toNode = "hanim_skullbase";
Group2760.children[70] = ROUTE2831;

ROUTE ROUTE2832 = createNode("ROUTE");
ROUTE2832.fromField = "value_changed";
ROUTE2832.fromNode = "Jump_neck_RotationInterpolator";
ROUTE2832.toField = "rotation";
ROUTE2832.toNode = "hanim_vc4";
Group2760.children[71] = ROUTE2832;

ROUTE ROUTE2833 = createNode("ROUTE");
ROUTE2833.fromField = "value_changed";
ROUTE2833.fromNode = "Jump_upper_body_RotationInterpolator";
ROUTE2833.toField = "rotation";
ROUTE2833.toNode = "hanim_vl1";
Group2760.children[72] = ROUTE2833;

ROUTE ROUTE2834 = createNode("ROUTE");
ROUTE2834.fromField = "value_changed";
ROUTE2834.fromNode = "Jump_whole_body_RotationInterpolator";
ROUTE2834.toField = "rotation";
ROUTE2834.toNode = "hanim_humanoid_root";
Group2760.children[73] = ROUTE2834;

ROUTE ROUTE2835 = createNode("ROUTE");
ROUTE2835.fromField = "value_changed";
ROUTE2835.fromNode = "Jump_whole_body_TranslationInterpolator";
ROUTE2835.toField = "translation";
ROUTE2835.toNode = "hanim_humanoid_root";
Group2760.children[74] = ROUTE2835;

ROUTE ROUTE2836 = createNode("ROUTE");
ROUTE2836.fromField = "value_changed";
ROUTE2836.fromNode = "Jump_l_sternoclavicular_RollInterpolator";
ROUTE2836.toField = "rotation";
ROUTE2836.toNode = "hanim_l_sternoclavicular";
Group2760.children[75] = ROUTE2836;

ROUTE ROUTE2837 = createNode("ROUTE");
ROUTE2837.fromField = "value_changed";
ROUTE2837.fromNode = "Jump_l_acromioclavicular_RollInterpolator";
ROUTE2837.toField = "rotation";
ROUTE2837.toNode = "hanim_l_acromioclavicular";
Group2760.children[76] = ROUTE2837;

ROUTE ROUTE2838 = createNode("ROUTE");
ROUTE2838.fromField = "value_changed";
ROUTE2838.fromNode = "Jump_r_sternoclavicular_RollInterpolator";
ROUTE2838.toField = "rotation";
ROUTE2838.toNode = "hanim_r_sternoclavicular";
Group2760.children[77] = ROUTE2838;

ROUTE ROUTE2839 = createNode("ROUTE");
ROUTE2839.fromField = "value_changed";
ROUTE2839.fromNode = "Jump_r_acromioclavicular_RollInterpolator";
ROUTE2839.toField = "rotation";
ROUTE2839.toNode = "hanim_r_acromioclavicular";
Group2760.children[78] = ROUTE2839;

ROUTE ROUTE2840 = createNode("ROUTE");
ROUTE2840.fromField = "value_changed";
ROUTE2840.fromNode = "Jump_r_metatarsal_PitchInterpolator";
ROUTE2840.toField = "rotation";
ROUTE2840.toNode = "hanim_l_metatarsal";
Group2760.children[79] = ROUTE2840;

ROUTE ROUTE2841 = createNode("ROUTE");
ROUTE2841.fromField = "value_changed";
ROUTE2841.fromNode = "Jump_r_metatarsal_PitchInterpolator";
ROUTE2841.toField = "rotation";
ROUTE2841.toNode = "hanim_r_metatarsal";
Group2760.children[80] = ROUTE2841;

ROUTE ROUTE2842 = createNode("ROUTE");
ROUTE2842.fromField = "value_changed";
ROUTE2842.fromNode = "Jump_sacroiliac_YawInterpolator";
ROUTE2842.toField = "rotation";
ROUTE2842.toNode = "hanim_sacroiliac";
Group2760.children[81] = ROUTE2842;

ROUTE ROUTE2843 = createNode("ROUTE");
ROUTE2843.fromField = "value_changed";
ROUTE2843.fromNode = "Jump_vl5_YawInterpolator";
ROUTE2843.toField = "rotation";
ROUTE2843.toNode = "hanim_vl5";
Group2760.children[82] = ROUTE2843;

ROUTE ROUTE2844 = createNode("ROUTE");
ROUTE2844.fromField = "value_changed";
ROUTE2844.fromNode = "Jump_vc6_YawInterpolator";
ROUTE2844.toField = "rotation";
ROUTE2844.toNode = "hanim_vc6";
Group2760.children[83] = ROUTE2844;

ROUTE ROUTE2845 = createNode("ROUTE");
ROUTE2845.fromField = "value_changed";
ROUTE2845.fromNode = "Jump_l_thumb1_PitchInterpolator";
ROUTE2845.toField = "rotation";
ROUTE2845.toNode = "hanim_l_thumb1";
Group2760.children[84] = ROUTE2845;

ROUTE ROUTE2846 = createNode("ROUTE");
ROUTE2846.fromField = "value_changed";
ROUTE2846.fromNode = "Jump_r_thumb1_PitchInterpolator";
ROUTE2846.toField = "rotation";
ROUTE2846.toNode = "hanim_r_thumb1";
Group2760.children[85] = ROUTE2846;

children[20] = Group2760;

Group Group2847 = createNode("Group");
Group2847.DEF = "KickAnimation";
TimeSensor TimeSensor2848 = createNode("TimeSensor");
TimeSensor2848.DEF = "KickTimer";
TimeSensor2848.cycleInterval = 3.73;
TimeSensor2848.loop = True;
Group2847.children = new MFNode();

Group2847.children[0] = TimeSensor2848;

OrientationInterpolator OrientationInterpolator2849 = createNode("OrientationInterpolator");
OrientationInterpolator2849.DEF = "Kick_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2849.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2849.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0]);
Group2847.children[1] = OrientationInterpolator2849;

OrientationInterpolator OrientationInterpolator2850 = createNode("OrientationInterpolator");
OrientationInterpolator2850.DEF = "Kick_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2850.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2850.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2847.children[2] = OrientationInterpolator2850;

OrientationInterpolator OrientationInterpolator2851 = createNode("OrientationInterpolator");
OrientationInterpolator2851.DEF = "Kick_l_shoulder_RollInterpolator";
OrientationInterpolator2851.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2851.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.76,-0.25,0,1,1.76,0,0,1,1.256,0,0,1,0.05,0,0,1,0]);
Group2847.children[3] = OrientationInterpolator2851;

OrientationInterpolator OrientationInterpolator2852 = createNode("OrientationInterpolator");
OrientationInterpolator2852.DEF = "Kick_l_ForeArm_PitchInterpolator";
OrientationInterpolator2852.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2852.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,-0.55,-1,0.25,0,2.55,1,0,0,0,1,0,0,0,1,0,0,0]);
Group2847.children[4] = OrientationInterpolator2852;

OrientationInterpolator OrientationInterpolator2853 = createNode("OrientationInterpolator");
OrientationInterpolator2853.DEF = "Kick_l_wrist_RollInterpolator";
OrientationInterpolator2853.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2853.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,1,0,0.55,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2847.children[5] = OrientationInterpolator2853;

OrientationInterpolator OrientationInterpolator2854 = createNode("OrientationInterpolator");
OrientationInterpolator2854.DEF = "Kick_l_thumb1_PitchInterpolator";
OrientationInterpolator2854.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2854.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group2847.children[6] = OrientationInterpolator2854;

OrientationInterpolator OrientationInterpolator2855 = createNode("OrientationInterpolator");
OrientationInterpolator2855.DEF = "Kick_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2855.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2855.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0]);
Group2847.children[7] = OrientationInterpolator2855;

OrientationInterpolator OrientationInterpolator2856 = createNode("OrientationInterpolator");
OrientationInterpolator2856.DEF = "Kick_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2856.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2856.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2847.children[8] = OrientationInterpolator2856;

OrientationInterpolator OrientationInterpolator2857 = createNode("OrientationInterpolator");
OrientationInterpolator2857.DEF = "Kick_r_shoulder_RollInterpolator";
OrientationInterpolator2857.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2857.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,-1.76,0.25,0,1,-1.76,0,0,1,-1.256,0,0,1,-0.05,0,0,1,0]);
Group2847.children[9] = OrientationInterpolator2857;

OrientationInterpolator OrientationInterpolator2858 = createNode("OrientationInterpolator");
OrientationInterpolator2858.DEF = "Kick_r_ForeArm_PitchInterpolator";
OrientationInterpolator2858.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2858.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,-0.55,1,0.25,0,-2.55,1,0,0,0,1,0,0,0,1,0,0,0]);
Group2847.children[10] = OrientationInterpolator2858;

OrientationInterpolator OrientationInterpolator2859 = createNode("OrientationInterpolator");
OrientationInterpolator2859.DEF = "Kick_r_wrist_RollInterpolator";
OrientationInterpolator2859.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2859.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,1,0,-0.55,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2847.children[11] = OrientationInterpolator2859;

OrientationInterpolator OrientationInterpolator2860 = createNode("OrientationInterpolator");
OrientationInterpolator2860.DEF = "Kick_r_thumb1_PitchInterpolator";
OrientationInterpolator2860.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2860.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group2847.children[12] = OrientationInterpolator2860;

OrientationInterpolator OrientationInterpolator2861 = createNode("OrientationInterpolator");
OrientationInterpolator2861.DEF = "Kick_r_hip_PitchInterpolator";
OrientationInterpolator2861.key = new MFFloat(new float[0,0.2,0.3,0.5,0.6,0.9,1]);
OrientationInterpolator2861.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.9,-1,0,0,1.75,-1,0,0,2.25,-1,0,0,2,1,0,0,0,1,0,0,0]);
Group2847.children[13] = OrientationInterpolator2861;

OrientationInterpolator OrientationInterpolator2862 = createNode("OrientationInterpolator");
OrientationInterpolator2862.DEF = "Kick_r_knee_PitchInterpolator";
OrientationInterpolator2862.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2862.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.95,1,0,0,1.75,-1,0,0,0.28,1,0,0,0,1,0,0,0]);
Group2847.children[14] = OrientationInterpolator2862;

OrientationInterpolator OrientationInterpolator2863 = createNode("OrientationInterpolator");
OrientationInterpolator2863.DEF = "Kick_l_hip_PitchInterpolator";
OrientationInterpolator2863.key = new MFFloat(new float[0,0.2,0.3,0.5,0.6,0.9,1]);
OrientationInterpolator2863.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2847.children[15] = OrientationInterpolator2863;

OrientationInterpolator OrientationInterpolator2864 = createNode("OrientationInterpolator");
OrientationInterpolator2864.DEF = "Kick_l_knee_PitchInterpolator";
OrientationInterpolator2864.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2864.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2847.children[16] = OrientationInterpolator2864;

OrientationInterpolator OrientationInterpolator2865 = createNode("OrientationInterpolator");
OrientationInterpolator2865.DEF = "Kick_r_ankle_PitchInterpolator";
OrientationInterpolator2865.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2865.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.9,-1,0,0,0.95,1,0,0,0.75,-1,0,0,0.05,1,0,0,0]);
Group2847.children[17] = OrientationInterpolator2865;

OrientationInterpolator OrientationInterpolator2866 = createNode("OrientationInterpolator");
OrientationInterpolator2866.DEF = "Kick_r_metatarsal_PitchInterpolator";
OrientationInterpolator2866.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2866.keyValue = new MFRotation(new float[1,0,0,0,-1,0,0,0.5,-1,0,0,0.7,1,0,0,0.75,-1,0,0,0.2,1,0,0,0]);
Group2847.children[18] = OrientationInterpolator2866;

OrientationInterpolator OrientationInterpolator2867 = createNode("OrientationInterpolator");
OrientationInterpolator2867.DEF = "Kick_sacroiliac_YawInterpolator";
OrientationInterpolator2867.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2867.keyValue = new MFRotation(new float[0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,-1,0.24,0,-1,0,0.4,0,1,0,0]);
Group2847.children[19] = OrientationInterpolator2867;

OrientationInterpolator OrientationInterpolator2868 = createNode("OrientationInterpolator");
OrientationInterpolator2868.DEF = "Kick_vl5_YawInterpolator";
OrientationInterpolator2868.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2868.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2847.children[20] = OrientationInterpolator2868;

OrientationInterpolator OrientationInterpolator2869 = createNode("OrientationInterpolator");
OrientationInterpolator2869.DEF = "Kick_vc6_YawInterpolator";
OrientationInterpolator2869.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2869.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2847.children[21] = OrientationInterpolator2869;

OrientationInterpolator OrientationInterpolator2870 = createNode("OrientationInterpolator");
OrientationInterpolator2870.DEF = "Kick_lower_body_RotationInterpolator";
OrientationInterpolator2870.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2870.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2847.children[22] = OrientationInterpolator2870;

OrientationInterpolator OrientationInterpolator2871 = createNode("OrientationInterpolator");
OrientationInterpolator2871.DEF = "Kick_upper_body_RotationInterpolator";
OrientationInterpolator2871.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2871.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2847.children[23] = OrientationInterpolator2871;

OrientationInterpolator OrientationInterpolator2872 = createNode("OrientationInterpolator");
OrientationInterpolator2872.DEF = "Kick_whole_body_RotationInterpolator";
OrientationInterpolator2872.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2872.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2847.children[24] = OrientationInterpolator2872;

PositionInterpolator PositionInterpolator2873 = createNode("PositionInterpolator");
PositionInterpolator2873.DEF = "Kick_whole_body_TranslationInterpolator";
PositionInterpolator2873.key = new MFFloat(new float[0,0.5,1]);
PositionInterpolator2873.keyValue = new MFVec3f(new float[0,0,0,0,0,0,0,0,0]);
Group2847.children[25] = PositionInterpolator2873;

OrientationInterpolator OrientationInterpolator2874 = createNode("OrientationInterpolator");
OrientationInterpolator2874.DEF = "Kick_neck_RotationInterpolator";
OrientationInterpolator2874.key = new MFFloat(new float[0,0.25,0.55,1]);
OrientationInterpolator2874.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,0.7,1,0,0,0.5,0,0,1,0]);
Group2847.children[26] = OrientationInterpolator2874;

ROUTE ROUTE2875 = createNode("ROUTE");
ROUTE2875.fromField = "fraction_changed";
ROUTE2875.fromNode = "KickTimer";
ROUTE2875.toField = "set_fraction";
ROUTE2875.toNode = "Kick_l_sternoclavicular_RollInterpolator";
Group2847.children[27] = ROUTE2875;

ROUTE ROUTE2876 = createNode("ROUTE");
ROUTE2876.fromField = "fraction_changed";
ROUTE2876.fromNode = "KickTimer";
ROUTE2876.toField = "set_fraction";
ROUTE2876.toNode = "Kick_l_acromioclavicular_RollInterpolator";
Group2847.children[28] = ROUTE2876;

ROUTE ROUTE2877 = createNode("ROUTE");
ROUTE2877.fromField = "fraction_changed";
ROUTE2877.fromNode = "KickTimer";
ROUTE2877.toField = "set_fraction";
ROUTE2877.toNode = "Kick_l_shoulder_RollInterpolator";
Group2847.children[29] = ROUTE2877;

ROUTE ROUTE2878 = createNode("ROUTE");
ROUTE2878.fromField = "fraction_changed";
ROUTE2878.fromNode = "KickTimer";
ROUTE2878.toField = "set_fraction";
ROUTE2878.toNode = "Kick_l_ForeArm_PitchInterpolator";
Group2847.children[30] = ROUTE2878;

ROUTE ROUTE2879 = createNode("ROUTE");
ROUTE2879.fromField = "fraction_changed";
ROUTE2879.fromNode = "KickTimer";
ROUTE2879.toField = "set_fraction";
ROUTE2879.toNode = "Kick_l_wrist_RollInterpolator";
Group2847.children[31] = ROUTE2879;

ROUTE ROUTE2880 = createNode("ROUTE");
ROUTE2880.fromField = "fraction_changed";
ROUTE2880.fromNode = "KickTimer";
ROUTE2880.toField = "set_fraction";
ROUTE2880.toNode = "Kick_l_thumb1_PitchInterpolator";
Group2847.children[32] = ROUTE2880;

ROUTE ROUTE2881 = createNode("ROUTE");
ROUTE2881.fromField = "fraction_changed";
ROUTE2881.fromNode = "KickTimer";
ROUTE2881.toField = "set_fraction";
ROUTE2881.toNode = "Kick_r_sternoclavicular_RollInterpolator";
Group2847.children[33] = ROUTE2881;

ROUTE ROUTE2882 = createNode("ROUTE");
ROUTE2882.fromField = "fraction_changed";
ROUTE2882.fromNode = "KickTimer";
ROUTE2882.toField = "set_fraction";
ROUTE2882.toNode = "Kick_r_acromioclavicular_RollInterpolator";
Group2847.children[34] = ROUTE2882;

ROUTE ROUTE2883 = createNode("ROUTE");
ROUTE2883.fromField = "fraction_changed";
ROUTE2883.fromNode = "KickTimer";
ROUTE2883.toField = "set_fraction";
ROUTE2883.toNode = "Kick_r_shoulder_RollInterpolator";
Group2847.children[35] = ROUTE2883;

ROUTE ROUTE2884 = createNode("ROUTE");
ROUTE2884.fromField = "fraction_changed";
ROUTE2884.fromNode = "KickTimer";
ROUTE2884.toField = "set_fraction";
ROUTE2884.toNode = "Kick_r_ForeArm_PitchInterpolator";
Group2847.children[36] = ROUTE2884;

ROUTE ROUTE2885 = createNode("ROUTE");
ROUTE2885.fromField = "fraction_changed";
ROUTE2885.fromNode = "KickTimer";
ROUTE2885.toField = "set_fraction";
ROUTE2885.toNode = "Kick_r_wrist_RollInterpolator";
Group2847.children[37] = ROUTE2885;

ROUTE ROUTE2886 = createNode("ROUTE");
ROUTE2886.fromField = "fraction_changed";
ROUTE2886.fromNode = "KickTimer";
ROUTE2886.toField = "set_fraction";
ROUTE2886.toNode = "Kick_r_thumb1_PitchInterpolator";
Group2847.children[38] = ROUTE2886;

ROUTE ROUTE2887 = createNode("ROUTE");
ROUTE2887.fromField = "fraction_changed";
ROUTE2887.fromNode = "KickTimer";
ROUTE2887.toField = "set_fraction";
ROUTE2887.toNode = "Kick_r_hip_PitchInterpolator";
Group2847.children[39] = ROUTE2887;

ROUTE ROUTE2888 = createNode("ROUTE");
ROUTE2888.fromField = "fraction_changed";
ROUTE2888.fromNode = "KickTimer";
ROUTE2888.toField = "set_fraction";
ROUTE2888.toNode = "Kick_r_knee_PitchInterpolator";
Group2847.children[40] = ROUTE2888;

ROUTE ROUTE2889 = createNode("ROUTE");
ROUTE2889.fromField = "fraction_changed";
ROUTE2889.fromNode = "KickTimer";
ROUTE2889.toField = "set_fraction";
ROUTE2889.toNode = "Kick_l_hip_PitchInterpolator";
Group2847.children[41] = ROUTE2889;

ROUTE ROUTE2890 = createNode("ROUTE");
ROUTE2890.fromField = "fraction_changed";
ROUTE2890.fromNode = "KickTimer";
ROUTE2890.toField = "set_fraction";
ROUTE2890.toNode = "Kick_l_knee_PitchInterpolator";
Group2847.children[42] = ROUTE2890;

ROUTE ROUTE2891 = createNode("ROUTE");
ROUTE2891.fromField = "fraction_changed";
ROUTE2891.fromNode = "KickTimer";
ROUTE2891.toField = "set_fraction";
ROUTE2891.toNode = "Kick_r_ankle_PitchInterpolator";
Group2847.children[43] = ROUTE2891;

ROUTE ROUTE2892 = createNode("ROUTE");
ROUTE2892.fromField = "fraction_changed";
ROUTE2892.fromNode = "KickTimer";
ROUTE2892.toField = "set_fraction";
ROUTE2892.toNode = "Kick_r_metatarsal_PitchInterpolator";
Group2847.children[44] = ROUTE2892;

ROUTE ROUTE2893 = createNode("ROUTE");
ROUTE2893.fromField = "fraction_changed";
ROUTE2893.fromNode = "KickTimer";
ROUTE2893.toField = "set_fraction";
ROUTE2893.toNode = "Kick_sacroiliac_YawInterpolator";
Group2847.children[45] = ROUTE2893;

ROUTE ROUTE2894 = createNode("ROUTE");
ROUTE2894.fromField = "fraction_changed";
ROUTE2894.fromNode = "KickTimer";
ROUTE2894.toField = "set_fraction";
ROUTE2894.toNode = "Kick_vl5_YawInterpolator";
Group2847.children[46] = ROUTE2894;

ROUTE ROUTE2895 = createNode("ROUTE");
ROUTE2895.fromField = "fraction_changed";
ROUTE2895.fromNode = "KickTimer";
ROUTE2895.toField = "set_fraction";
ROUTE2895.toNode = "Kick_vc6_YawInterpolator";
Group2847.children[47] = ROUTE2895;

ROUTE ROUTE2896 = createNode("ROUTE");
ROUTE2896.fromField = "fraction_changed";
ROUTE2896.fromNode = "KickTimer";
ROUTE2896.toField = "set_fraction";
ROUTE2896.toNode = "Kick_lower_body_RotationInterpolator";
Group2847.children[48] = ROUTE2896;

ROUTE ROUTE2897 = createNode("ROUTE");
ROUTE2897.fromField = "fraction_changed";
ROUTE2897.fromNode = "KickTimer";
ROUTE2897.toField = "set_fraction";
ROUTE2897.toNode = "Kick_upper_body_RotationInterpolator";
Group2847.children[49] = ROUTE2897;

ROUTE ROUTE2898 = createNode("ROUTE");
ROUTE2898.fromField = "fraction_changed";
ROUTE2898.fromNode = "KickTimer";
ROUTE2898.toField = "set_fraction";
ROUTE2898.toNode = "Kick_whole_body_RotationInterpolator";
Group2847.children[50] = ROUTE2898;

ROUTE ROUTE2899 = createNode("ROUTE");
ROUTE2899.fromField = "fraction_changed";
ROUTE2899.fromNode = "KickTimer";
ROUTE2899.toField = "set_fraction";
ROUTE2899.toNode = "Kick_whole_body_TranslationInterpolator";
Group2847.children[51] = ROUTE2899;

ROUTE ROUTE2900 = createNode("ROUTE");
ROUTE2900.fromField = "fraction_changed";
ROUTE2900.fromNode = "KickTimer";
ROUTE2900.toField = "set_fraction";
ROUTE2900.toNode = "Kick_neck_RotationInterpolator";
Group2847.children[52] = ROUTE2900;

ROUTE ROUTE2901 = createNode("ROUTE");
ROUTE2901.fromField = "value_changed";
ROUTE2901.fromNode = "Kick_l_sternoclavicular_RollInterpolator";
ROUTE2901.toField = "rotation";
ROUTE2901.toNode = "hanim_l_sternoclavicular";
Group2847.children[53] = ROUTE2901;

ROUTE ROUTE2902 = createNode("ROUTE");
ROUTE2902.fromField = "value_changed";
ROUTE2902.fromNode = "Kick_l_acromioclavicular_RollInterpolator";
ROUTE2902.toField = "rotation";
ROUTE2902.toNode = "hanim_l_acromioclavicular";
Group2847.children[54] = ROUTE2902;

ROUTE ROUTE2903 = createNode("ROUTE");
ROUTE2903.fromField = "value_changed";
ROUTE2903.fromNode = "Kick_l_shoulder_RollInterpolator";
ROUTE2903.toField = "rotation";
ROUTE2903.toNode = "hanim_l_shoulder";
Group2847.children[55] = ROUTE2903;

ROUTE ROUTE2904 = createNode("ROUTE");
ROUTE2904.fromField = "value_changed";
ROUTE2904.fromNode = "Kick_l_ForeArm_PitchInterpolator";
ROUTE2904.toField = "rotation";
ROUTE2904.toNode = "hanim_l_elbow";
Group2847.children[56] = ROUTE2904;

ROUTE ROUTE2905 = createNode("ROUTE");
ROUTE2905.fromField = "value_changed";
ROUTE2905.fromNode = "Kick_l_wrist_RollInterpolator";
ROUTE2905.toField = "rotation";
ROUTE2905.toNode = "hanim_l_wrist";
Group2847.children[57] = ROUTE2905;

ROUTE ROUTE2906 = createNode("ROUTE");
ROUTE2906.fromField = "value_changed";
ROUTE2906.fromNode = "Kick_l_thumb1_PitchInterpolator";
ROUTE2906.toField = "rotation";
ROUTE2906.toNode = "hanim_l_thumb1";
Group2847.children[58] = ROUTE2906;

ROUTE ROUTE2907 = createNode("ROUTE");
ROUTE2907.fromField = "value_changed";
ROUTE2907.fromNode = "Kick_r_sternoclavicular_RollInterpolator";
ROUTE2907.toField = "rotation";
ROUTE2907.toNode = "hanim_r_sternoclavicular";
Group2847.children[59] = ROUTE2907;

ROUTE ROUTE2908 = createNode("ROUTE");
ROUTE2908.fromField = "value_changed";
ROUTE2908.fromNode = "Kick_r_acromioclavicular_RollInterpolator";
ROUTE2908.toField = "rotation";
ROUTE2908.toNode = "hanim_r_acromioclavicular";
Group2847.children[60] = ROUTE2908;

ROUTE ROUTE2909 = createNode("ROUTE");
ROUTE2909.fromField = "value_changed";
ROUTE2909.fromNode = "Kick_r_shoulder_RollInterpolator";
ROUTE2909.toField = "rotation";
ROUTE2909.toNode = "hanim_r_shoulder";
Group2847.children[61] = ROUTE2909;

ROUTE ROUTE2910 = createNode("ROUTE");
ROUTE2910.fromField = "value_changed";
ROUTE2910.fromNode = "Kick_r_ForeArm_PitchInterpolator";
ROUTE2910.toField = "rotation";
ROUTE2910.toNode = "hanim_r_elbow";
Group2847.children[62] = ROUTE2910;

ROUTE ROUTE2911 = createNode("ROUTE");
ROUTE2911.fromField = "value_changed";
ROUTE2911.fromNode = "Kick_r_wrist_RollInterpolator";
ROUTE2911.toField = "rotation";
ROUTE2911.toNode = "hanim_r_wrist";
Group2847.children[63] = ROUTE2911;

ROUTE ROUTE2912 = createNode("ROUTE");
ROUTE2912.fromField = "value_changed";
ROUTE2912.fromNode = "Kick_r_thumb1_PitchInterpolator";
ROUTE2912.toField = "rotation";
ROUTE2912.toNode = "hanim_r_thumb1";
Group2847.children[64] = ROUTE2912;

ROUTE ROUTE2913 = createNode("ROUTE");
ROUTE2913.fromField = "value_changed";
ROUTE2913.fromNode = "Kick_r_hip_PitchInterpolator";
ROUTE2913.toField = "rotation";
ROUTE2913.toNode = "hanim_r_hip";
Group2847.children[65] = ROUTE2913;

ROUTE ROUTE2914 = createNode("ROUTE");
ROUTE2914.fromField = "value_changed";
ROUTE2914.fromNode = "Kick_r_knee_PitchInterpolator";
ROUTE2914.toField = "rotation";
ROUTE2914.toNode = "hanim_r_knee";
Group2847.children[66] = ROUTE2914;

ROUTE ROUTE2915 = createNode("ROUTE");
ROUTE2915.fromField = "value_changed";
ROUTE2915.fromNode = "Kick_r_ankle_PitchInterpolator";
ROUTE2915.toField = "rotation";
ROUTE2915.toNode = "hanim_r_ankle";
Group2847.children[67] = ROUTE2915;

ROUTE ROUTE2916 = createNode("ROUTE");
ROUTE2916.fromField = "value_changed";
ROUTE2916.fromNode = "Kick_r_metatarsal_PitchInterpolator";
ROUTE2916.toField = "rotation";
ROUTE2916.toNode = "hanim_r_metatarsal";
Group2847.children[68] = ROUTE2916;

ROUTE ROUTE2917 = createNode("ROUTE");
ROUTE2917.fromField = "value_changed";
ROUTE2917.fromNode = "Kick_l_hip_PitchInterpolator";
ROUTE2917.toField = "rotation";
ROUTE2917.toNode = "hanim_l_hip";
Group2847.children[69] = ROUTE2917;

ROUTE ROUTE2918 = createNode("ROUTE");
ROUTE2918.fromField = "value_changed";
ROUTE2918.fromNode = "Kick_l_knee_PitchInterpolator";
ROUTE2918.toField = "rotation";
ROUTE2918.toNode = "hanim_l_knee";
Group2847.children[70] = ROUTE2918;

ROUTE ROUTE2919 = createNode("ROUTE");
ROUTE2919.fromField = "value_changed";
ROUTE2919.fromNode = "Kick_r_ankle_PitchInterpolator";
ROUTE2919.toField = "rotation";
ROUTE2919.toNode = "hanim_l_ankle";
Group2847.children[71] = ROUTE2919;

ROUTE ROUTE2920 = createNode("ROUTE");
ROUTE2920.fromField = "value_changed";
ROUTE2920.fromNode = "Kick_r_metatarsal_PitchInterpolator";
ROUTE2920.toField = "rotation";
ROUTE2920.toNode = "hanim_l_metatarsal";
Group2847.children[72] = ROUTE2920;

ROUTE ROUTE2921 = createNode("ROUTE");
ROUTE2921.fromField = "value_changed";
ROUTE2921.fromNode = "Kick_sacroiliac_YawInterpolator";
ROUTE2921.toField = "rotation";
ROUTE2921.toNode = "hanim_sacroiliac";
Group2847.children[73] = ROUTE2921;

ROUTE ROUTE2922 = createNode("ROUTE");
ROUTE2922.fromField = "value_changed";
ROUTE2922.fromNode = "Kick_vl5_YawInterpolator";
ROUTE2922.toField = "rotation";
ROUTE2922.toNode = "hanim_vl5";
Group2847.children[74] = ROUTE2922;

ROUTE ROUTE2923 = createNode("ROUTE");
ROUTE2923.fromField = "value_changed";
ROUTE2923.fromNode = "Kick_vc6_YawInterpolator";
ROUTE2923.toField = "rotation";
ROUTE2923.toNode = "hanim_vc6";
Group2847.children[75] = ROUTE2923;

ROUTE ROUTE2924 = createNode("ROUTE");
ROUTE2924.fromField = "value_changed";
ROUTE2924.fromNode = "Kick_upper_body_RotationInterpolator";
ROUTE2924.toField = "rotation";
ROUTE2924.toNode = "hanim_vl1";
Group2847.children[76] = ROUTE2924;

ROUTE ROUTE2925 = createNode("ROUTE");
ROUTE2925.fromField = "value_changed";
ROUTE2925.fromNode = "Kick_lower_body_RotationInterpolator";
ROUTE2925.toField = "rotation";
ROUTE2925.toNode = "hanim_sacroiliac";
Group2847.children[77] = ROUTE2925;

ROUTE ROUTE2926 = createNode("ROUTE");
ROUTE2926.fromField = "value_changed";
ROUTE2926.fromNode = "Kick_whole_body_RotationInterpolator";
ROUTE2926.toField = "rotation";
ROUTE2926.toNode = "hanim_humanoid_root";
Group2847.children[78] = ROUTE2926;

ROUTE ROUTE2927 = createNode("ROUTE");
ROUTE2927.fromField = "value_changed";
ROUTE2927.fromNode = "Kick_whole_body_TranslationInterpolator";
ROUTE2927.toField = "translation";
ROUTE2927.toNode = "hanim_humanoid_root";
Group2847.children[79] = ROUTE2927;

ROUTE ROUTE2928 = createNode("ROUTE");
ROUTE2928.fromField = "value_changed";
ROUTE2928.fromNode = "Kick_neck_RotationInterpolator";
ROUTE2928.toField = "rotation";
ROUTE2928.toNode = "hanim_vc4";
Group2847.children[80] = ROUTE2928;

children[21] = Group2847;

Group Group2929 = createNode("Group");
Group2929.DEF = "UserInterface";
//Authoring hint: these axes are aligned within local coordinate system
Transform Transform2930 = createNode("Transform");
Transform2930.DEF = "CoordinateAxesAdjustedScale";
Transform2930.scale = new SFVec3f(new float[0.175,0.175,0.175]);
Inline Inline2931 = createNode("Inline");
Inline2931.DEF = "CoordinateAxes";
Inline2931.url = new MFString(new java.lang.String["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl"]);
Transform2930.children = new MFNode();

Transform2930.children[0] = Inline2931;

Group2929.children = new MFNode();

Group2929.children[0] = Transform2930;

Transform Transform2932 = createNode("Transform");
Transform2932.DEF = "cordsys";
Transform2932.scale = new SFVec3f(new float[0.175,0.175,0.175]);
//<Inline bboxCenter='0.05143541 0.07883984 0.04731131' bboxSize='2.202872 2.25768 2.194624' url='\"JointCoordinateAxes.x3dv\"'/>
Group2929.children[1] = Transform2932;

ProximitySensor ProximitySensor2933 = createNode("ProximitySensor");
ProximitySensor2933.DEF = "HudProximitySensor";
ProximitySensor2933.center = new SFVec3f(new float[0,20,0]);
ProximitySensor2933.size = new SFVec3f(new float[500,100,500]);
Group2929.children[2] = ProximitySensor2933;

Transform Transform2934 = createNode("Transform");
Transform2934.DEF = "Stage";
Transform2934.scale = new SFVec3f(new float[1,0.0125,1]);
Transform2934.translation = new SFVec3f(new float[0,-0.0125,0]);
Shape Shape2935 = createNode("Shape");
Appearance Appearance2936 = createNode("Appearance");
Material Material2937 = createNode("Material");
Material2937.transparency = 0.6;
Appearance2936.material = Material2937;

Shape2935.appearance = Appearance2936;

Box Box2938 = createNode("Box");
Shape2935.geometry = Box2938;

Transform2934.children = new MFNode();

Transform2934.children[0] = Shape2935;

Transform Transform2939 = createNode("Transform");
Transform2939.DEF = "Circle0";
Transform2939.scale = new SFVec3f(new float[1.175,1,1.175]);
Shape Shape2940 = createNode("Shape");
Appearance Appearance2941 = createNode("Appearance");
Material Material2942 = createNode("Material");
Material2942.diffuseColor = new SFColor(new float[0.9,0,0.7]);
Material2942.emissiveColor = new SFColor(new float[0.424956,0.483976,1]);
Appearance2941.material = Material2942;

Shape2940.appearance = Appearance2941;

IndexedLineSet IndexedLineSet2943 = createNode("IndexedLineSet");
IndexedLineSet2943.DEF = "Orbit1";
IndexedLineSet2943.coordIndex = new MFInt32(new int[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1]);
Coordinate Coordinate2944 = createNode("Coordinate");
Coordinate2944.point = new MFVec3f(new float[1,0,0,0.995,0,-0.105,0.979,0,-0.208,0.951,0,-0.309,0.914,0,-0.407,0.866,0,-0.5,0.809,0,-0.588,0.743,0,-0.669,0.669,0,-0.743,0.588,0,-0.809,0.5,0,-0.866,0.407,0,-0.914,0.309,0,-0.951,0.208,0,-0.978,0.105,0,-0.995,0,0,-1,-0.105,0,-0.994522,-0.208,0,-0.978,-0.309,0,-0.951,-0.407,0,-0.914,-0.5,0,-0.866,-0.588,0,-0.809,-0.669,0,-0.743,-0.743,0,-0.669,-0.809,0,-0.588,-0.866,0,-0.5,-0.914,0,-0.407,-0.951,0,-0.309,-0.978,0,-0.208,-0.995,0,-0.105,-1,0,0,-0.995,0,0.105,-0.978,0,0.208,-0.951,0,0.309,-0.914,0,0.407,-0.866,0,0.5,-0.809,0,0.588,-0.743,0,0.669,-0.669,0,0.743,-0.588,0,0.809,-0.5,0,0.866,-0.407,0,0.914,-0.309,0,0.951,-0.208,0,0.978,-0.105,0,0.995,0,0,1,0.105,0,0.995,0.208,0,0.978,0.309,0,0.951,0.407,0,0.914,0.5,0,0.866,0.588,0,0.809,0.669,0,0.743,0.743,0,0.669,0.809,0,0.588,0.866,0,0.5,0.914,0,0.407,0.951,0,0.309,0.978,0,0.208,0.995,0,0.104,1,0,0]);
IndexedLineSet2943.coord = Coordinate2944;

Shape2940.geometry = IndexedLineSet2943;

Transform2939.children = new MFNode();

Transform2939.children[0] = Shape2940;

Transform2934.children[1] = Transform2939;

Transform Transform2945 = createNode("Transform");
Transform2945.DEF = "Circle1";
Transform2945.scale = new SFVec3f(new float[0.5,1,0.5]);
Shape Shape2946 = createNode("Shape");
Appearance Appearance2947 = createNode("Appearance");
Material Material2948 = createNode("Material");
Material2948.diffuseColor = new SFColor(new float[0.9,0,0.7]);
Material2948.emissiveColor = new SFColor(new float[0.424956,0.483976,1]);
Appearance2947.material = Material2948;

Shape2946.appearance = Appearance2947;

IndexedLineSet IndexedLineSet2949 = createNode("IndexedLineSet");
IndexedLineSet2949.USE = "Orbit1";
Shape2946.geometry = IndexedLineSet2949;

Transform2945.children = new MFNode();

Transform2945.children[0] = Shape2946;

Transform2934.children[2] = Transform2945;

Transform Transform2950 = createNode("Transform");
Transform2950.DEF = "Circle2";
Transform2950.scale = new SFVec3f(new float[0.25,1,0.25]);
Shape Shape2951 = createNode("Shape");
Appearance Appearance2952 = createNode("Appearance");
Material Material2953 = createNode("Material");
Material2953.diffuseColor = new SFColor(new float[0.9,0,0.7]);
Material2953.emissiveColor = new SFColor(new float[0.424956,0.483976,1]);
Appearance2952.material = Material2953;

Shape2951.appearance = Appearance2952;

IndexedLineSet IndexedLineSet2954 = createNode("IndexedLineSet");
IndexedLineSet2954.USE = "Orbit1";
Shape2951.geometry = IndexedLineSet2954;

Transform2950.children = new MFNode();

Transform2950.children[0] = Shape2951;

Transform2934.children[3] = Transform2950;

Group2929.children[3] = Transform2934;

Transform Transform2955 = createNode("Transform");
Transform2955.DEF = "HudXform";
Transform2955.rotation = new SFRotation(new float[-0.09996068,0.9942513,0.03837026,0.7131352]);
Transform2955.translation = new SFVec3f(new float[1.705442,1.042139,1.989742]);
Transform Transform2956 = createNode("Transform");
Transform2956.scale = new SFVec3f(new float[0.035,0.035,0.035]);
Transform2956.translation = new SFVec3f(new float[-0.42,-0.2,-0.75]);
Transform Transform2957 = createNode("Transform");
Transform2957.DEF = "StandTransform";
Transform2957.translation = new SFVec3f(new float[0,-1,0]);
TouchSensor TouchSensor2958 = createNode("TouchSensor");
TouchSensor2958.DEF = "Stand_Touch";
TouchSensor2958.description = "touch to select";
Transform2957.children = new MFNode();

Transform2957.children[0] = TouchSensor2958;

Shape Shape2959 = createNode("Shape");
Shape2959.DEF = "StandTextShape";
Appearance Appearance2960 = createNode("Appearance");
Material Material2961 = createNode("Material");
Material2961.DEF = "text_color";
Material2961.ambientIntensity = 1;
Material2961.diffuseColor = new SFColor(new float[0.819,0.521,0.169]);
Material2961.emissiveColor = new SFColor(new float[0.819,0.521,0.169]);
Material2961.specularColor = new SFColor(new float[0.819,0.521,0.169]);
Appearance2960.material = Material2961;

Shape2959.appearance = Appearance2960;

Text Text2962 = createNode("Text");
Text2962.string = new MFString(new java.lang.String["Stand"]);
Shape2959.geometry = Text2962;

Transform2957.children[1] = Shape2959;

Shape Shape2963 = createNode("Shape");
Shape2963.DEF = "Stand_Back";
Appearance Appearance2964 = createNode("Appearance");
Material Material2965 = createNode("Material");
Material2965.DEF = "Clear";
Material2965.ambientIntensity = 1;
Material2965.diffuseColor = new SFColor(new float[0,0.5,0]);
Material2965.emissiveColor = new SFColor(new float[0,0.5,0]);
Material2965.transparency = 0.8;
Appearance2964.material = Material2965;

Shape2963.appearance = Appearance2964;

IndexedFaceSet IndexedFaceSet2966 = createNode("IndexedFaceSet");
IndexedFaceSet2966.DEF = "Backing";
IndexedFaceSet2966.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate2967 = createNode("Coordinate");
Coordinate2967.point = new MFVec3f(new float[-0.2,-1.2,-0.01,2.5,-1.2,-0.01,2.5,0.75,-0.01,-0.2,0.75,-0.01]);
IndexedFaceSet2966.coord = Coordinate2967;

Shape2963.geometry = IndexedFaceSet2966;

Transform2957.children[2] = Shape2963;

Transform2956.children = new MFNode();

Transform2956.children[0] = Transform2957;

Transform Transform2968 = createNode("Transform");
Transform2968.DEF = "PitchTransform";
Transform2968.translation = new SFVec3f(new float[3,-1,0]);
TouchSensor TouchSensor2969 = createNode("TouchSensor");
TouchSensor2969.DEF = "Pitch_Touch";
TouchSensor2969.description = "touch to select";
Transform2968.children = new MFNode();

Transform2968.children[0] = TouchSensor2969;

Shape Shape2970 = createNode("Shape");
Shape2970.DEF = "PitchTextShape";
Appearance Appearance2971 = createNode("Appearance");
Material Material2972 = createNode("Material");
Material2972.USE = "text_color";
Appearance2971.material = Material2972;

Shape2970.appearance = Appearance2971;

Text Text2973 = createNode("Text");
Text2973.string = new MFString(new java.lang.String["Pitch"]);
Shape2970.geometry = Text2973;

Transform2968.children[1] = Shape2970;

Shape Shape2974 = createNode("Shape");
Shape2974.DEF = "Pitch_Back";
Appearance Appearance2975 = createNode("Appearance");
Material Material2976 = createNode("Material");
Material2976.USE = "Clear";
Appearance2975.material = Material2976;

Shape2974.appearance = Appearance2975;

IndexedFaceSet IndexedFaceSet2977 = createNode("IndexedFaceSet");
IndexedFaceSet2977.USE = "Backing";
Shape2974.geometry = IndexedFaceSet2977;

Transform2968.children[2] = Shape2974;

Transform2956.children[1] = Transform2968;

Transform Transform2978 = createNode("Transform");
Transform2978.DEF = "YawTransform";
Transform2978.translation = new SFVec3f(new float[6,-1,0]);
TouchSensor TouchSensor2979 = createNode("TouchSensor");
TouchSensor2979.DEF = "Yaw_Touch";
TouchSensor2979.description = "touch to select";
Transform2978.children = new MFNode();

Transform2978.children[0] = TouchSensor2979;

Shape Shape2980 = createNode("Shape");
Shape2980.DEF = "YawText";
Appearance Appearance2981 = createNode("Appearance");
Material Material2982 = createNode("Material");
Material2982.USE = "text_color";
Appearance2981.material = Material2982;

Shape2980.appearance = Appearance2981;

Text Text2983 = createNode("Text");
Text2983.string = new MFString(new java.lang.String["Yaw"]);
Shape2980.geometry = Text2983;

Transform2978.children[1] = Shape2980;

Shape Shape2984 = createNode("Shape");
Shape2984.DEF = "Yaw_Back";
Appearance Appearance2985 = createNode("Appearance");
Material Material2986 = createNode("Material");
Material2986.USE = "Clear";
Appearance2985.material = Material2986;

Shape2984.appearance = Appearance2985;

IndexedFaceSet IndexedFaceSet2987 = createNode("IndexedFaceSet");
IndexedFaceSet2987.USE = "Backing";
Shape2984.geometry = IndexedFaceSet2987;

Transform2978.children[2] = Shape2984;

Transform2956.children[2] = Transform2978;

Transform Transform2988 = createNode("Transform");
Transform2988.DEF = "RollTransform";
Transform2988.translation = new SFVec3f(new float[9,-1,0]);
TouchSensor TouchSensor2989 = createNode("TouchSensor");
TouchSensor2989.DEF = "Roll_Touch";
TouchSensor2989.description = "touch to select";
Transform2988.children = new MFNode();

Transform2988.children[0] = TouchSensor2989;

Shape Shape2990 = createNode("Shape");
Shape2990.DEF = "_RollInterpolator";
Appearance Appearance2991 = createNode("Appearance");
Material Material2992 = createNode("Material");
Material2992.USE = "text_color";
Appearance2991.material = Material2992;

Shape2990.appearance = Appearance2991;

Text Text2993 = createNode("Text");
Text2993.string = new MFString(new java.lang.String["Roll"]);
Shape2990.geometry = Text2993;

Transform2988.children[1] = Shape2990;

Shape Shape2994 = createNode("Shape");
Shape2994.DEF = "Roll_Back";
Appearance Appearance2995 = createNode("Appearance");
Material Material2996 = createNode("Material");
Material2996.USE = "Clear";
Appearance2995.material = Material2996;

Shape2994.appearance = Appearance2995;

IndexedFaceSet IndexedFaceSet2997 = createNode("IndexedFaceSet");
IndexedFaceSet2997.USE = "Backing";
Shape2994.geometry = IndexedFaceSet2997;

Transform2988.children[2] = Shape2994;

Transform2956.children[3] = Transform2988;

Transform Transform2998 = createNode("Transform");
Transform2998.DEF = "WalkTransform";
Transform2998.translation = new SFVec3f(new float[12,-1,0]);
TouchSensor TouchSensor2999 = createNode("TouchSensor");
TouchSensor2999.DEF = "Walk_Touch";
TouchSensor2999.description = "touch to select";
Transform2998.children = new MFNode();

Transform2998.children[0] = TouchSensor2999;

Shape Shape3000 = createNode("Shape");
Shape3000.DEF = "WalkText";
Appearance Appearance3001 = createNode("Appearance");
Material Material3002 = createNode("Material");
Material3002.USE = "text_color";
Appearance3001.material = Material3002;

Shape3000.appearance = Appearance3001;

Text Text3003 = createNode("Text");
Text3003.string = new MFString(new java.lang.String["Walk"]);
Shape3000.geometry = Text3003;

Transform2998.children[1] = Shape3000;

Shape Shape3004 = createNode("Shape");
Shape3004.DEF = "Walk_Back";
Appearance Appearance3005 = createNode("Appearance");
Material Material3006 = createNode("Material");
Material3006.USE = "Clear";
Appearance3005.material = Material3006;

Shape3004.appearance = Appearance3005;

IndexedFaceSet IndexedFaceSet3007 = createNode("IndexedFaceSet");
IndexedFaceSet3007.USE = "Backing";
Shape3004.geometry = IndexedFaceSet3007;

Transform2998.children[2] = Shape3004;

Transform2956.children[4] = Transform2998;

Transform Transform3008 = createNode("Transform");
Transform3008.DEF = "RunTransform";
Transform3008.translation = new SFVec3f(new float[15,-1,0]);
TouchSensor TouchSensor3009 = createNode("TouchSensor");
TouchSensor3009.DEF = "Run_Touch";
TouchSensor3009.description = "touch to select";
Transform3008.children = new MFNode();

Transform3008.children[0] = TouchSensor3009;

Shape Shape3010 = createNode("Shape");
Shape3010.DEF = "RunText";
Appearance Appearance3011 = createNode("Appearance");
Material Material3012 = createNode("Material");
Material3012.USE = "text_color";
Appearance3011.material = Material3012;

Shape3010.appearance = Appearance3011;

Text Text3013 = createNode("Text");
Text3013.string = new MFString(new java.lang.String["Run"]);
Shape3010.geometry = Text3013;

Transform3008.children[1] = Shape3010;

Shape Shape3014 = createNode("Shape");
Shape3014.DEF = "Run_Back";
Appearance Appearance3015 = createNode("Appearance");
Material Material3016 = createNode("Material");
Material3016.USE = "Clear";
Appearance3015.material = Material3016;

Shape3014.appearance = Appearance3015;

IndexedFaceSet IndexedFaceSet3017 = createNode("IndexedFaceSet");
IndexedFaceSet3017.USE = "Backing";
Shape3014.geometry = IndexedFaceSet3017;

Transform3008.children[2] = Shape3014;

Transform2956.children[5] = Transform3008;

Transform Transform3018 = createNode("Transform");
Transform3018.DEF = "JumpTransform";
Transform3018.translation = new SFVec3f(new float[18,-1,0]);
TouchSensor TouchSensor3019 = createNode("TouchSensor");
TouchSensor3019.DEF = "Jump_Touch";
TouchSensor3019.description = "touch to select";
Transform3018.children = new MFNode();

Transform3018.children[0] = TouchSensor3019;

Shape Shape3020 = createNode("Shape");
Shape3020.DEF = "Jump";
Appearance Appearance3021 = createNode("Appearance");
Material Material3022 = createNode("Material");
Material3022.USE = "text_color";
Appearance3021.material = Material3022;

Shape3020.appearance = Appearance3021;

Text Text3023 = createNode("Text");
Text3023.string = new MFString(new java.lang.String["Jump"]);
Shape3020.geometry = Text3023;

Transform3018.children[1] = Shape3020;

Shape Shape3024 = createNode("Shape");
Shape3024.DEF = "Jump_Back";
Appearance Appearance3025 = createNode("Appearance");
Material Material3026 = createNode("Material");
Material3026.USE = "Clear";
Appearance3025.material = Material3026;

Shape3024.appearance = Appearance3025;

IndexedFaceSet IndexedFaceSet3027 = createNode("IndexedFaceSet");
IndexedFaceSet3027.USE = "Backing";
Shape3024.geometry = IndexedFaceSet3027;

Transform3018.children[2] = Shape3024;

Transform2956.children[6] = Transform3018;

Transform Transform3028 = createNode("Transform");
Transform3028.DEF = "KickTransform";
Transform3028.translation = new SFVec3f(new float[21,-1,0]);
TouchSensor TouchSensor3029 = createNode("TouchSensor");
TouchSensor3029.DEF = "Kick_Touch";
TouchSensor3029.description = "touch to select";
Transform3028.children = new MFNode();

Transform3028.children[0] = TouchSensor3029;

Shape Shape3030 = createNode("Shape");
Shape3030.DEF = "KickText";
Appearance Appearance3031 = createNode("Appearance");
Material Material3032 = createNode("Material");
Material3032.USE = "text_color";
Appearance3031.material = Material3032;

Shape3030.appearance = Appearance3031;

Text Text3033 = createNode("Text");
Text3033.string = new MFString(new java.lang.String["Kick"]);
Shape3030.geometry = Text3033;

Transform3028.children[1] = Shape3030;

Shape Shape3034 = createNode("Shape");
Shape3034.DEF = "Kick_Back";
Appearance Appearance3035 = createNode("Appearance");
Material Material3036 = createNode("Material");
Material3036.USE = "Clear";
Appearance3035.material = Material3036;

Shape3034.appearance = Appearance3035;

IndexedFaceSet IndexedFaceSet3037 = createNode("IndexedFaceSet");
IndexedFaceSet3037.USE = "Backing";
Shape3034.geometry = IndexedFaceSet3037;

Transform3028.children[2] = Shape3034;

Transform2956.children[7] = Transform3028;

Transform Transform3038 = createNode("Transform");
Transform3038.DEF = "Stop_Text";
Transform3038.translation = new SFVec3f(new float[0,1.4,0]);
TouchSensor TouchSensor3039 = createNode("TouchSensor");
TouchSensor3039.DEF = "Stop_Touch";
TouchSensor3039.description = "touch to select";
Transform3038.children = new MFNode();

Transform3038.children[0] = TouchSensor3039;

Shape Shape3040 = createNode("Shape");
Shape3040.DEF = "StopText";
Appearance Appearance3041 = createNode("Appearance");
Material Material3042 = createNode("Material");
Material3042.USE = "text_color";
Appearance3041.material = Material3042;

Shape3040.appearance = Appearance3041;

Text Text3043 = createNode("Text");
Text3043.string = new MFString(new java.lang.String["Stop","Default Pose"]);
Shape3040.geometry = Text3043;

Transform3038.children[1] = Shape3040;

Shape Shape3044 = createNode("Shape");
Shape3044.DEF = "Stop_Back";
Appearance Appearance3045 = createNode("Appearance");
Material Material3046 = createNode("Material");
Material3046.USE = "Clear";
Appearance3045.material = Material3046;

Shape3044.appearance = Appearance3045;

IndexedFaceSet IndexedFaceSet3047 = createNode("IndexedFaceSet");
IndexedFaceSet3047.USE = "Backing";
Shape3044.geometry = IndexedFaceSet3047;

Transform3038.children[2] = Shape3044;

Transform2956.children[8] = Transform3038;

Transform2955.children = new MFNode();

Transform2955.children[0] = Transform2956;

Group2929.children[4] = Transform2955;

ROUTE ROUTE3048 = createNode("ROUTE");
ROUTE3048.fromField = "position_changed";
ROUTE3048.fromNode = "HudProximitySensor";
ROUTE3048.toField = "translation";
ROUTE3048.toNode = "HudXform";
Group2929.children[5] = ROUTE3048;

ROUTE ROUTE3049 = createNode("ROUTE");
ROUTE3049.fromField = "orientation_changed";
ROUTE3049.fromNode = "HudProximitySensor";
ROUTE3049.toField = "rotation";
ROUTE3049.toNode = "HudXform";
Group2929.children[6] = ROUTE3049;

children[22] = Group2929;

Group Group3050 = createNode("Group");
Group3050.DEF = "BehaviorSynchronization";
ROUTE ROUTE3051 = createNode("ROUTE");
ROUTE3051.fromField = "touchTime";
ROUTE3051.fromNode = "Stand_Touch";
ROUTE3051.toField = "stopTime";
ROUTE3051.toNode = "PitchTimer";
Group3050.children = new MFNode();

Group3050.children[0] = ROUTE3051;

ROUTE ROUTE3052 = createNode("ROUTE");
ROUTE3052.fromField = "touchTime";
ROUTE3052.fromNode = "Stand_Touch";
ROUTE3052.toField = "stopTime";
ROUTE3052.toNode = "YawTimer";
Group3050.children[1] = ROUTE3052;

ROUTE ROUTE3053 = createNode("ROUTE");
ROUTE3053.fromField = "touchTime";
ROUTE3053.fromNode = "Stand_Touch";
ROUTE3053.toField = "stopTime";
ROUTE3053.toNode = "RollTimer";
Group3050.children[2] = ROUTE3053;

ROUTE ROUTE3054 = createNode("ROUTE");
ROUTE3054.fromField = "touchTime";
ROUTE3054.fromNode = "Stand_Touch";
ROUTE3054.toField = "stopTime";
ROUTE3054.toNode = "WalkTimer";
Group3050.children[3] = ROUTE3054;

ROUTE ROUTE3055 = createNode("ROUTE");
ROUTE3055.fromField = "touchTime";
ROUTE3055.fromNode = "Stand_Touch";
ROUTE3055.toField = "stopTime";
ROUTE3055.toNode = "RunTimer";
Group3050.children[4] = ROUTE3055;

ROUTE ROUTE3056 = createNode("ROUTE");
ROUTE3056.fromField = "touchTime";
ROUTE3056.fromNode = "Stand_Touch";
ROUTE3056.toField = "stopTime";
ROUTE3056.toNode = "JumpTimer";
Group3050.children[5] = ROUTE3056;

ROUTE ROUTE3057 = createNode("ROUTE");
ROUTE3057.fromField = "touchTime";
ROUTE3057.fromNode = "Stand_Touch";
ROUTE3057.toField = "stopTime";
ROUTE3057.toNode = "KickTimer";
Group3050.children[6] = ROUTE3057;

ROUTE ROUTE3058 = createNode("ROUTE");
ROUTE3058.fromField = "touchTime";
ROUTE3058.fromNode = "Stand_Touch";
ROUTE3058.toField = "stopTime";
ROUTE3058.toNode = "StopTimer";
Group3050.children[7] = ROUTE3058;

ROUTE ROUTE3059 = createNode("ROUTE");
ROUTE3059.fromField = "touchTime";
ROUTE3059.fromNode = "Stand_Touch";
ROUTE3059.toField = "startTime";
ROUTE3059.toNode = "StandTimer";
Group3050.children[8] = ROUTE3059;

ROUTE ROUTE3060 = createNode("ROUTE");
ROUTE3060.fromField = "touchTime";
ROUTE3060.fromNode = "Pitch_Touch";
ROUTE3060.toField = "stopTime";
ROUTE3060.toNode = "StandTimer";
Group3050.children[9] = ROUTE3060;

ROUTE ROUTE3061 = createNode("ROUTE");
ROUTE3061.fromField = "touchTime";
ROUTE3061.fromNode = "Pitch_Touch";
ROUTE3061.toField = "stopTime";
ROUTE3061.toNode = "YawTimer";
Group3050.children[10] = ROUTE3061;

ROUTE ROUTE3062 = createNode("ROUTE");
ROUTE3062.fromField = "touchTime";
ROUTE3062.fromNode = "Pitch_Touch";
ROUTE3062.toField = "stopTime";
ROUTE3062.toNode = "RollTimer";
Group3050.children[11] = ROUTE3062;

ROUTE ROUTE3063 = createNode("ROUTE");
ROUTE3063.fromField = "touchTime";
ROUTE3063.fromNode = "Pitch_Touch";
ROUTE3063.toField = "stopTime";
ROUTE3063.toNode = "WalkTimer";
Group3050.children[12] = ROUTE3063;

ROUTE ROUTE3064 = createNode("ROUTE");
ROUTE3064.fromField = "touchTime";
ROUTE3064.fromNode = "Pitch_Touch";
ROUTE3064.toField = "stopTime";
ROUTE3064.toNode = "RunTimer";
Group3050.children[13] = ROUTE3064;

ROUTE ROUTE3065 = createNode("ROUTE");
ROUTE3065.fromField = "touchTime";
ROUTE3065.fromNode = "Pitch_Touch";
ROUTE3065.toField = "stopTime";
ROUTE3065.toNode = "JumpTimer";
Group3050.children[14] = ROUTE3065;

ROUTE ROUTE3066 = createNode("ROUTE");
ROUTE3066.fromField = "touchTime";
ROUTE3066.fromNode = "Pitch_Touch";
ROUTE3066.toField = "stopTime";
ROUTE3066.toNode = "KickTimer";
Group3050.children[15] = ROUTE3066;

ROUTE ROUTE3067 = createNode("ROUTE");
ROUTE3067.fromField = "touchTime";
ROUTE3067.fromNode = "Pitch_Touch";
ROUTE3067.toField = "stopTime";
ROUTE3067.toNode = "StopTimer";
Group3050.children[16] = ROUTE3067;

ROUTE ROUTE3068 = createNode("ROUTE");
ROUTE3068.fromField = "touchTime";
ROUTE3068.fromNode = "Pitch_Touch";
ROUTE3068.toField = "startTime";
ROUTE3068.toNode = "PitchTimer";
Group3050.children[17] = ROUTE3068;

ROUTE ROUTE3069 = createNode("ROUTE");
ROUTE3069.fromField = "touchTime";
ROUTE3069.fromNode = "Yaw_Touch";
ROUTE3069.toField = "stopTime";
ROUTE3069.toNode = "StandTimer";
Group3050.children[18] = ROUTE3069;

ROUTE ROUTE3070 = createNode("ROUTE");
ROUTE3070.fromField = "touchTime";
ROUTE3070.fromNode = "Yaw_Touch";
ROUTE3070.toField = "stopTime";
ROUTE3070.toNode = "PitchTimer";
Group3050.children[19] = ROUTE3070;

ROUTE ROUTE3071 = createNode("ROUTE");
ROUTE3071.fromField = "touchTime";
ROUTE3071.fromNode = "Yaw_Touch";
ROUTE3071.toField = "stopTime";
ROUTE3071.toNode = "RollTimer";
Group3050.children[20] = ROUTE3071;

ROUTE ROUTE3072 = createNode("ROUTE");
ROUTE3072.fromField = "touchTime";
ROUTE3072.fromNode = "Yaw_Touch";
ROUTE3072.toField = "stopTime";
ROUTE3072.toNode = "WalkTimer";
Group3050.children[21] = ROUTE3072;

ROUTE ROUTE3073 = createNode("ROUTE");
ROUTE3073.fromField = "touchTime";
ROUTE3073.fromNode = "Yaw_Touch";
ROUTE3073.toField = "stopTime";
ROUTE3073.toNode = "RunTimer";
Group3050.children[22] = ROUTE3073;

ROUTE ROUTE3074 = createNode("ROUTE");
ROUTE3074.fromField = "touchTime";
ROUTE3074.fromNode = "Yaw_Touch";
ROUTE3074.toField = "stopTime";
ROUTE3074.toNode = "JumpTimer";
Group3050.children[23] = ROUTE3074;

ROUTE ROUTE3075 = createNode("ROUTE");
ROUTE3075.fromField = "touchTime";
ROUTE3075.fromNode = "Yaw_Touch";
ROUTE3075.toField = "stopTime";
ROUTE3075.toNode = "KickTimer";
Group3050.children[24] = ROUTE3075;

ROUTE ROUTE3076 = createNode("ROUTE");
ROUTE3076.fromField = "touchTime";
ROUTE3076.fromNode = "Yaw_Touch";
ROUTE3076.toField = "stopTime";
ROUTE3076.toNode = "StopTimer";
Group3050.children[25] = ROUTE3076;

ROUTE ROUTE3077 = createNode("ROUTE");
ROUTE3077.fromField = "touchTime";
ROUTE3077.fromNode = "Yaw_Touch";
ROUTE3077.toField = "startTime";
ROUTE3077.toNode = "YawTimer";
Group3050.children[26] = ROUTE3077;

ROUTE ROUTE3078 = createNode("ROUTE");
ROUTE3078.fromField = "touchTime";
ROUTE3078.fromNode = "Walk_Touch";
ROUTE3078.toField = "stopTime";
ROUTE3078.toNode = "StandTimer";
Group3050.children[27] = ROUTE3078;

ROUTE ROUTE3079 = createNode("ROUTE");
ROUTE3079.fromField = "touchTime";
ROUTE3079.fromNode = "Walk_Touch";
ROUTE3079.toField = "stopTime";
ROUTE3079.toNode = "PitchTimer";
Group3050.children[28] = ROUTE3079;

ROUTE ROUTE3080 = createNode("ROUTE");
ROUTE3080.fromField = "touchTime";
ROUTE3080.fromNode = "Walk_Touch";
ROUTE3080.toField = "stopTime";
ROUTE3080.toNode = "YawTimer";
Group3050.children[29] = ROUTE3080;

ROUTE ROUTE3081 = createNode("ROUTE");
ROUTE3081.fromField = "touchTime";
ROUTE3081.fromNode = "Walk_Touch";
ROUTE3081.toField = "stopTime";
ROUTE3081.toNode = "RollTimer";
Group3050.children[30] = ROUTE3081;

ROUTE ROUTE3082 = createNode("ROUTE");
ROUTE3082.fromField = "touchTime";
ROUTE3082.fromNode = "Walk_Touch";
ROUTE3082.toField = "stopTime";
ROUTE3082.toNode = "RunTimer";
Group3050.children[31] = ROUTE3082;

ROUTE ROUTE3083 = createNode("ROUTE");
ROUTE3083.fromField = "touchTime";
ROUTE3083.fromNode = "Walk_Touch";
ROUTE3083.toField = "stopTime";
ROUTE3083.toNode = "JumpTimer";
Group3050.children[32] = ROUTE3083;

ROUTE ROUTE3084 = createNode("ROUTE");
ROUTE3084.fromField = "touchTime";
ROUTE3084.fromNode = "Walk_Touch";
ROUTE3084.toField = "stopTime";
ROUTE3084.toNode = "KickTimer";
Group3050.children[33] = ROUTE3084;

ROUTE ROUTE3085 = createNode("ROUTE");
ROUTE3085.fromField = "touchTime";
ROUTE3085.fromNode = "Walk_Touch";
ROUTE3085.toField = "stopTime";
ROUTE3085.toNode = "StopTimer";
Group3050.children[34] = ROUTE3085;

ROUTE ROUTE3086 = createNode("ROUTE");
ROUTE3086.fromField = "touchTime";
ROUTE3086.fromNode = "Walk_Touch";
ROUTE3086.toField = "startTime";
ROUTE3086.toNode = "WalkTimer";
Group3050.children[35] = ROUTE3086;

ROUTE ROUTE3087 = createNode("ROUTE");
ROUTE3087.fromField = "touchTime";
ROUTE3087.fromNode = "Roll_Touch";
ROUTE3087.toField = "stopTime";
ROUTE3087.toNode = "StandTimer";
Group3050.children[36] = ROUTE3087;

ROUTE ROUTE3088 = createNode("ROUTE");
ROUTE3088.fromField = "touchTime";
ROUTE3088.fromNode = "Roll_Touch";
ROUTE3088.toField = "stopTime";
ROUTE3088.toNode = "PitchTimer";
Group3050.children[37] = ROUTE3088;

ROUTE ROUTE3089 = createNode("ROUTE");
ROUTE3089.fromField = "touchTime";
ROUTE3089.fromNode = "Roll_Touch";
ROUTE3089.toField = "stopTime";
ROUTE3089.toNode = "YawTimer";
Group3050.children[38] = ROUTE3089;

ROUTE ROUTE3090 = createNode("ROUTE");
ROUTE3090.fromField = "touchTime";
ROUTE3090.fromNode = "Roll_Touch";
ROUTE3090.toField = "stopTime";
ROUTE3090.toNode = "WalkTimer";
Group3050.children[39] = ROUTE3090;

ROUTE ROUTE3091 = createNode("ROUTE");
ROUTE3091.fromField = "touchTime";
ROUTE3091.fromNode = "Roll_Touch";
ROUTE3091.toField = "stopTime";
ROUTE3091.toNode = "RunTimer";
Group3050.children[40] = ROUTE3091;

ROUTE ROUTE3092 = createNode("ROUTE");
ROUTE3092.fromField = "touchTime";
ROUTE3092.fromNode = "Roll_Touch";
ROUTE3092.toField = "stopTime";
ROUTE3092.toNode = "JumpTimer";
Group3050.children[41] = ROUTE3092;

ROUTE ROUTE3093 = createNode("ROUTE");
ROUTE3093.fromField = "touchTime";
ROUTE3093.fromNode = "Roll_Touch";
ROUTE3093.toField = "stopTime";
ROUTE3093.toNode = "KickTimer";
Group3050.children[42] = ROUTE3093;

ROUTE ROUTE3094 = createNode("ROUTE");
ROUTE3094.fromField = "touchTime";
ROUTE3094.fromNode = "Roll_Touch";
ROUTE3094.toField = "stopTime";
ROUTE3094.toNode = "StopTimer";
Group3050.children[43] = ROUTE3094;

ROUTE ROUTE3095 = createNode("ROUTE");
ROUTE3095.fromField = "touchTime";
ROUTE3095.fromNode = "Roll_Touch";
ROUTE3095.toField = "startTime";
ROUTE3095.toNode = "RollTimer";
Group3050.children[44] = ROUTE3095;

ROUTE ROUTE3096 = createNode("ROUTE");
ROUTE3096.fromField = "touchTime";
ROUTE3096.fromNode = "Run_Touch";
ROUTE3096.toField = "stopTime";
ROUTE3096.toNode = "StandTimer";
Group3050.children[45] = ROUTE3096;

ROUTE ROUTE3097 = createNode("ROUTE");
ROUTE3097.fromField = "touchTime";
ROUTE3097.fromNode = "Run_Touch";
ROUTE3097.toField = "stopTime";
ROUTE3097.toNode = "PitchTimer";
Group3050.children[46] = ROUTE3097;

ROUTE ROUTE3098 = createNode("ROUTE");
ROUTE3098.fromField = "touchTime";
ROUTE3098.fromNode = "Run_Touch";
ROUTE3098.toField = "stopTime";
ROUTE3098.toNode = "YawTimer";
Group3050.children[47] = ROUTE3098;

ROUTE ROUTE3099 = createNode("ROUTE");
ROUTE3099.fromField = "touchTime";
ROUTE3099.fromNode = "Run_Touch";
ROUTE3099.toField = "stopTime";
ROUTE3099.toNode = "RollTimer";
Group3050.children[48] = ROUTE3099;

ROUTE ROUTE3100 = createNode("ROUTE");
ROUTE3100.fromField = "touchTime";
ROUTE3100.fromNode = "Run_Touch";
ROUTE3100.toField = "stopTime";
ROUTE3100.toNode = "WalkTimer";
Group3050.children[49] = ROUTE3100;

ROUTE ROUTE3101 = createNode("ROUTE");
ROUTE3101.fromField = "touchTime";
ROUTE3101.fromNode = "Run_Touch";
ROUTE3101.toField = "stopTime";
ROUTE3101.toNode = "JumpTimer";
Group3050.children[50] = ROUTE3101;

ROUTE ROUTE3102 = createNode("ROUTE");
ROUTE3102.fromField = "touchTime";
ROUTE3102.fromNode = "Run_Touch";
ROUTE3102.toField = "stopTime";
ROUTE3102.toNode = "KickTimer";
Group3050.children[51] = ROUTE3102;

ROUTE ROUTE3103 = createNode("ROUTE");
ROUTE3103.fromField = "touchTime";
ROUTE3103.fromNode = "Run_Touch";
ROUTE3103.toField = "stopTime";
ROUTE3103.toNode = "StopTimer";
Group3050.children[52] = ROUTE3103;

ROUTE ROUTE3104 = createNode("ROUTE");
ROUTE3104.fromField = "touchTime";
ROUTE3104.fromNode = "Run_Touch";
ROUTE3104.toField = "startTime";
ROUTE3104.toNode = "RunTimer";
Group3050.children[53] = ROUTE3104;

ROUTE ROUTE3105 = createNode("ROUTE");
ROUTE3105.fromField = "touchTime";
ROUTE3105.fromNode = "Jump_Touch";
ROUTE3105.toField = "stopTime";
ROUTE3105.toNode = "StandTimer";
Group3050.children[54] = ROUTE3105;

ROUTE ROUTE3106 = createNode("ROUTE");
ROUTE3106.fromField = "touchTime";
ROUTE3106.fromNode = "Jump_Touch";
ROUTE3106.toField = "stopTime";
ROUTE3106.toNode = "PitchTimer";
Group3050.children[55] = ROUTE3106;

ROUTE ROUTE3107 = createNode("ROUTE");
ROUTE3107.fromField = "touchTime";
ROUTE3107.fromNode = "Jump_Touch";
ROUTE3107.toField = "stopTime";
ROUTE3107.toNode = "YawTimer";
Group3050.children[56] = ROUTE3107;

ROUTE ROUTE3108 = createNode("ROUTE");
ROUTE3108.fromField = "touchTime";
ROUTE3108.fromNode = "Jump_Touch";
ROUTE3108.toField = "stopTime";
ROUTE3108.toNode = "RollTimer";
Group3050.children[57] = ROUTE3108;

ROUTE ROUTE3109 = createNode("ROUTE");
ROUTE3109.fromField = "touchTime";
ROUTE3109.fromNode = "Jump_Touch";
ROUTE3109.toField = "stopTime";
ROUTE3109.toNode = "WalkTimer";
Group3050.children[58] = ROUTE3109;

ROUTE ROUTE3110 = createNode("ROUTE");
ROUTE3110.fromField = "touchTime";
ROUTE3110.fromNode = "Jump_Touch";
ROUTE3110.toField = "stopTime";
ROUTE3110.toNode = "RunTimer";
Group3050.children[59] = ROUTE3110;

ROUTE ROUTE3111 = createNode("ROUTE");
ROUTE3111.fromField = "touchTime";
ROUTE3111.fromNode = "Jump_Touch";
ROUTE3111.toField = "stopTime";
ROUTE3111.toNode = "KickTimer";
Group3050.children[60] = ROUTE3111;

ROUTE ROUTE3112 = createNode("ROUTE");
ROUTE3112.fromField = "touchTime";
ROUTE3112.fromNode = "Jump_Touch";
ROUTE3112.toField = "stopTime";
ROUTE3112.toNode = "StopTimer";
Group3050.children[61] = ROUTE3112;

ROUTE ROUTE3113 = createNode("ROUTE");
ROUTE3113.fromField = "touchTime";
ROUTE3113.fromNode = "Jump_Touch";
ROUTE3113.toField = "startTime";
ROUTE3113.toNode = "JumpTimer";
Group3050.children[62] = ROUTE3113;

ROUTE ROUTE3114 = createNode("ROUTE");
ROUTE3114.fromField = "touchTime";
ROUTE3114.fromNode = "Kick_Touch";
ROUTE3114.toField = "stopTime";
ROUTE3114.toNode = "StandTimer";
Group3050.children[63] = ROUTE3114;

ROUTE ROUTE3115 = createNode("ROUTE");
ROUTE3115.fromField = "touchTime";
ROUTE3115.fromNode = "Kick_Touch";
ROUTE3115.toField = "stopTime";
ROUTE3115.toNode = "PitchTimer";
Group3050.children[64] = ROUTE3115;

ROUTE ROUTE3116 = createNode("ROUTE");
ROUTE3116.fromField = "touchTime";
ROUTE3116.fromNode = "Kick_Touch";
ROUTE3116.toField = "stopTime";
ROUTE3116.toNode = "YawTimer";
Group3050.children[65] = ROUTE3116;

ROUTE ROUTE3117 = createNode("ROUTE");
ROUTE3117.fromField = "touchTime";
ROUTE3117.fromNode = "Kick_Touch";
ROUTE3117.toField = "stopTime";
ROUTE3117.toNode = "RollTimer";
Group3050.children[66] = ROUTE3117;

ROUTE ROUTE3118 = createNode("ROUTE");
ROUTE3118.fromField = "touchTime";
ROUTE3118.fromNode = "Kick_Touch";
ROUTE3118.toField = "stopTime";
ROUTE3118.toNode = "WalkTimer";
Group3050.children[67] = ROUTE3118;

ROUTE ROUTE3119 = createNode("ROUTE");
ROUTE3119.fromField = "touchTime";
ROUTE3119.fromNode = "Kick_Touch";
ROUTE3119.toField = "stopTime";
ROUTE3119.toNode = "RunTimer";
Group3050.children[68] = ROUTE3119;

ROUTE ROUTE3120 = createNode("ROUTE");
ROUTE3120.fromField = "touchTime";
ROUTE3120.fromNode = "Kick_Touch";
ROUTE3120.toField = "stopTime";
ROUTE3120.toNode = "JumpTimer";
Group3050.children[69] = ROUTE3120;

ROUTE ROUTE3121 = createNode("ROUTE");
ROUTE3121.fromField = "touchTime";
ROUTE3121.fromNode = "Kick_Touch";
ROUTE3121.toField = "stopTime";
ROUTE3121.toNode = "StopTimer";
Group3050.children[70] = ROUTE3121;

ROUTE ROUTE3122 = createNode("ROUTE");
ROUTE3122.fromField = "touchTime";
ROUTE3122.fromNode = "Kick_Touch";
ROUTE3122.toField = "startTime";
ROUTE3122.toNode = "KickTimer";
Group3050.children[71] = ROUTE3122;

ROUTE ROUTE3123 = createNode("ROUTE");
ROUTE3123.fromField = "touchTime";
ROUTE3123.fromNode = "Stop_Touch";
ROUTE3123.toField = "stopTime";
ROUTE3123.toNode = "StandTimer";
Group3050.children[72] = ROUTE3123;

ROUTE ROUTE3124 = createNode("ROUTE");
ROUTE3124.fromField = "touchTime";
ROUTE3124.fromNode = "Stop_Touch";
ROUTE3124.toField = "stopTime";
ROUTE3124.toNode = "PitchTimer";
Group3050.children[73] = ROUTE3124;

ROUTE ROUTE3125 = createNode("ROUTE");
ROUTE3125.fromField = "touchTime";
ROUTE3125.fromNode = "Stop_Touch";
ROUTE3125.toField = "stopTime";
ROUTE3125.toNode = "YawTimer";
Group3050.children[74] = ROUTE3125;

ROUTE ROUTE3126 = createNode("ROUTE");
ROUTE3126.fromField = "touchTime";
ROUTE3126.fromNode = "Stop_Touch";
ROUTE3126.toField = "stopTime";
ROUTE3126.toNode = "RollTimer";
Group3050.children[75] = ROUTE3126;

ROUTE ROUTE3127 = createNode("ROUTE");
ROUTE3127.fromField = "touchTime";
ROUTE3127.fromNode = "Stop_Touch";
ROUTE3127.toField = "stopTime";
ROUTE3127.toNode = "WalkTimer";
Group3050.children[76] = ROUTE3127;

ROUTE ROUTE3128 = createNode("ROUTE");
ROUTE3128.fromField = "touchTime";
ROUTE3128.fromNode = "Stop_Touch";
ROUTE3128.toField = "stopTime";
ROUTE3128.toNode = "RunTimer";
Group3050.children[77] = ROUTE3128;

ROUTE ROUTE3129 = createNode("ROUTE");
ROUTE3129.fromField = "touchTime";
ROUTE3129.fromNode = "Stop_Touch";
ROUTE3129.toField = "stopTime";
ROUTE3129.toNode = "JumpTimer";
Group3050.children[78] = ROUTE3129;

ROUTE ROUTE3130 = createNode("ROUTE");
ROUTE3130.fromField = "touchTime";
ROUTE3130.fromNode = "Stop_Touch";
ROUTE3130.toField = "stopTime";
ROUTE3130.toNode = "KickTimer";
Group3050.children[79] = ROUTE3130;

ROUTE ROUTE3131 = createNode("ROUTE");
ROUTE3131.fromField = "touchTime";
ROUTE3131.fromNode = "Stop_Touch";
ROUTE3131.toField = "startTime";
ROUTE3131.toNode = "StopTimer";
Group3050.children[80] = ROUTE3131;

children[23] = Group3050;

}
