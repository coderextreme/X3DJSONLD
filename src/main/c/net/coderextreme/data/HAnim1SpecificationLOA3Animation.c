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
meta9.name = "Image";
meta9.content = "HAnimSpecificationLOA3MotionH3DViewer.png";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "Image";
meta10.content = "HAnimSpecificationLOA3MotionInstantReality.png";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "Image";
meta11.content = "HAnimSpecificationLOA3MotionOctagaVS.png";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "Image";
meta12.content = "HAnimSpecificationLOA3MotionView3dscene.png";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "reference";
meta13.content = "HAnimSpecificationLOA3Illustrated.x3d";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "reference";
meta14.content = "HAnimSpecificationLOA3Invisible.x3d";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "reference";
meta15.content = "HAnimSpecificationExampleChangeLog.txt";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "Image";
meta16.content = "images/BonesAllSkeletonFrontViewLOA1.png";
head1.meta[14] = meta16;

meta meta17 = createNode("meta");
meta17.name = "Image";
meta17.content = "images/BonesAllSkeletonFrontViewLOA2.png";
head1.meta[15] = meta17;

meta meta18 = createNode("meta");
meta18.name = "Image";
meta18.content = "images/BonesAllSkeletonFrontViewLOA3.png";
head1.meta[16] = meta18;

meta meta19 = createNode("meta");
meta19.name = "reference";
meta19.content = "Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989.";
head1.meta[17] = meta19;

meta meta20 = createNode("meta");
meta20.name = "reference";
meta20.content = "http://www.cis.upenn.edu/~badler/anthro/89-71.ps";
head1.meta[18] = meta20;

meta meta21 = createNode("meta");
meta21.name = "reference";
meta21.content = "tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf";
head1.meta[19] = meta21;

meta meta22 = createNode("meta");
meta22.name = "creator";
meta22.content = "Matthew T. Beitler, Joe D. Williams, Don Brutzman";
head1.meta[20] = meta22;

meta meta23 = createNode("meta");
meta23.name = "translator";
meta23.content = "Don Brutzman and Joe Williams";
head1.meta[21] = meta23;

meta meta24 = createNode("meta");
meta24.name = "generator";
meta24.content = "BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo";
head1.meta[22] = meta24;

meta meta25 = createNode("meta");
meta25.name = "reference";
meta25.content = "originals/LOA3ExampleSourceWithDiamondsOriginal.wrl";
head1.meta[23] = meta25;

meta meta26 = createNode("meta");
meta26.name = "reference";
meta26.content = "originals/LOA3ExampleSourceWithDiamondsOriginal.x3d";
head1.meta[24] = meta26;

meta meta27 = createNode("meta");
meta27.name = "reference";
meta27.content = "originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d";
head1.meta[25] = meta27;

meta meta28 = createNode("meta");
meta28.name = "generator";
meta28.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[26] = meta28;

meta meta29 = createNode("meta");
meta29.name = "identifier";
meta29.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/HAnimSpecificationLOA3Animation.x3d";
head1.meta[27] = meta29;

meta meta30 = createNode("meta");
meta30.name = "license";
meta30.content = "../license.html";
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
WorldInfo35.info = new MFString(new java.lang.String[" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "]);
WorldInfo35.title = "HANIM 200x Default Joint Centers, LOA3";
Group34.children = new MFNode();

Group34.children[0] = WorldInfo35;

children[2] = Group34;

//TODO move viewpoints to be internal to HAnimHumanoid
//Viewpoint centerOfRotation=\"0 0.9149 0.0016\" matches initial at-rest locaton of the sacroliac. Note that these viewpoints are external to the HAnimHumanoid and do not move with the human.
Viewpoint Viewpoint36 = createNode("Viewpoint");
Viewpoint36.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint36.description = "Humanoid LOA 3 Front";
Viewpoint36.position = new SFVec3f(new float[0,0.4,4]);
children[3] = Viewpoint36;

Viewpoint Viewpoint37 = createNode("Viewpoint");
Viewpoint37.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint37.description = "Humanoid LOA 3 Front Close";
Viewpoint37.position = new SFVec3f(new float[0,0.8,2]);
children[4] = Viewpoint37;

Viewpoint Viewpoint38 = createNode("Viewpoint");
Viewpoint38.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint38.description = "Humanoid LOA 3 Front Closer";
Viewpoint38.position = new SFVec3f(new float[0,1.2,1]);
children[5] = Viewpoint38;

Viewpoint Viewpoint39 = createNode("Viewpoint");
Viewpoint39.centerOfRotation = new SFVec3f(new float[0,1.5,0.0016]);
Viewpoint39.description = "Humanoid LOA 3 Front Face";
Viewpoint39.position = new SFVec3f(new float[0,1.63,1]);
children[6] = Viewpoint39;

Viewpoint Viewpoint40 = createNode("Viewpoint");
Viewpoint40.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint40.description = "Humanoid LOA 3 Right Side";
Viewpoint40.orientation = new SFRotation(new float[0,1,0,1.5708]);
Viewpoint40.position = new SFVec3f(new float[2.6,0.8,0]);
children[7] = Viewpoint40;

Viewpoint Viewpoint41 = createNode("Viewpoint");
Viewpoint41.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint41.description = "Humanoid LOA 3 Right Side Close";
Viewpoint41.orientation = new SFRotation(new float[0,1,0,1.2]);
Viewpoint41.position = new SFVec3f(new float[1,0.8,0.5]);
children[8] = Viewpoint41;

Viewpoint Viewpoint42 = createNode("Viewpoint");
Viewpoint42.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint42.description = "Humanoid LOA 3 Left Side Close";
Viewpoint42.orientation = new SFRotation(new float[0,1,0,-1.2]);
Viewpoint42.position = new SFVec3f(new float[-1,0.8,0.5]);
children[9] = Viewpoint42;

Viewpoint Viewpoint43 = createNode("Viewpoint");
Viewpoint43.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint43.description = "Humanoid LOA 3 Left Side";
Viewpoint43.orientation = new SFRotation(new float[0,1,0,-1.5708]);
Viewpoint43.position = new SFVec3f(new float[-2.6,0.8,0]);
children[10] = Viewpoint43;

Viewpoint Viewpoint44 = createNode("Viewpoint");
Viewpoint44.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint44.description = "Humanoid LOA 3 Top";
Viewpoint44.orientation = new SFRotation(new float[1,0,0,-1.5708]);
Viewpoint44.position = new SFVec3f(new float[0,3.5,0]);
children[11] = Viewpoint44;

HAnimHumanoid HAnimHumanoid45 = createNode("HAnimHumanoid");
HAnimHumanoid45.name = "humanoid";
HAnimHumanoid45.DEF = "hanim_humanoid";
HAnimHumanoid45.info = new MFString(new java.lang.String["authorName=Matthew T. Beitler Joe D. Williams Don Brutzman","authorEmail=HAnim@web3D.org","copyright=none","creationDate=12 May 1999","usageRestrictions=none","humanoidVersion=2.0","height=1.7504"]);
HAnimHumanoid45.version = "1.0";
HAnimJoint HAnimJoint46 = createNode("HAnimJoint");
HAnimJoint46.name = "humanoid_root";
HAnimJoint46.DEF = "hanim_humanoid_root";
HAnimJoint46.center = new SFVec3f(new float[0,0.824,0.0277]);
HAnimJoint46.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment47 = createNode("HAnimSegment");
HAnimSegment47.name = "sacrum";
HAnimSegment47.DEF = "hanim_sacrum";
//<HAnimJoint name='humanoid_root'/> visualization sphere within <HAnimSegment name='sacrum'/>
TouchSensor TouchSensor48 = createNode("TouchSensor");
TouchSensor48.description = "HAnimJoint HumanoidRoot, HAnimSegment sacrum";
HAnimSegment47.children = new MFNode();

HAnimSegment47.children[0] = TouchSensor48;

Transform Transform49 = createNode("Transform");
Transform49.translation = new SFVec3f(new float[0,0.824,0.0277]);
Shape Shape50 = createNode("Shape");
Shape50.DEF = "HAnimJointShape";
Sphere Sphere51 = createNode("Sphere");
Sphere51.radius = 0.006;
Shape50.geometry = Sphere51;

Appearance Appearance52 = createNode("Appearance");
Appearance52.DEF = "HAnimJointAppearance";
Material Material53 = createNode("Material");
Material53.diffuseColor = new SFColor(new float[1,0.5,0]);
Material53.transparency = 0.5;
Appearance52.material = Material53;

Shape50.appearance = Appearance52;

Transform49.children = new MFNode();

Transform49.children[0] = Shape50;

HAnimSegment47.children[1] = Transform49;

//HAnimSegment visualization line segment from parent <HAnimJoint name='humanoid_root'/> to <HAnimJoint name='sacroiliac'/>
Shape Shape54 = createNode("Shape");
LineSet LineSet55 = createNode("LineSet");
LineSet55.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate56 = createNode("Coordinate");
Coordinate56.point = new MFVec3f(new float[0,0.824,0.0277,0,0.9149,0.0016]);
LineSet55.coord = Coordinate56;

ColorRGBA ColorRGBA57 = createNode("ColorRGBA");
ColorRGBA57.DEF = "HAnimSegmentLineColorRGBA";
ColorRGBA57.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1]);
LineSet55.color = ColorRGBA57;

Shape54.geometry = LineSet55;

HAnimSegment47.children[2] = Shape54;

//HAnimSegment visualization line segment from parent <HAnimJoint name='humanoid_root'/> to <HAnimJoint name='vl5'/>
Shape Shape58 = createNode("Shape");
LineSet LineSet59 = createNode("LineSet");
LineSet59.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate60 = createNode("Coordinate");
Coordinate60.point = new MFVec3f(new float[0,0.824,0.0277,0.0028,1.0568,-0.0776]);
LineSet59.coord = Coordinate60;

ColorRGBA ColorRGBA61 = createNode("ColorRGBA");
ColorRGBA61.USE = "HAnimSegmentLineColorRGBA";
LineSet59.color = ColorRGBA61;

Shape58.geometry = LineSet59;

HAnimSegment47.children[3] = Shape58;

HAnimJoint46.children = new MFNode();

HAnimJoint46.children[0] = HAnimSegment47;

HAnimJoint HAnimJoint62 = createNode("HAnimJoint");
HAnimJoint62.name = "sacroiliac";
HAnimJoint62.DEF = "hanim_sacroiliac";
HAnimJoint62.center = new SFVec3f(new float[0,0.9149,0.0016]);
HAnimJoint62.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment63 = createNode("HAnimSegment");
HAnimSegment63.name = "pelvis";
HAnimSegment63.DEF = "hanim_pelvis";
//<HAnimJoint name='sacroiliac'/> visualization sphere within <HAnimSegment name='pelvis'/>
TouchSensor TouchSensor64 = createNode("TouchSensor");
TouchSensor64.description = "HAnimJoint sacroiliac, HAnimSegment pelvis";
HAnimSegment63.children = new MFNode();

HAnimSegment63.children[0] = TouchSensor64;

Transform Transform65 = createNode("Transform");
Transform65.translation = new SFVec3f(new float[0,0.9149,0.0016]);
Shape Shape66 = createNode("Shape");
Shape66.USE = "HAnimJointShape";
Transform65.children = new MFNode();

Transform65.children[0] = Shape66;

HAnimSegment63.children[1] = Transform65;

//HAnimSegment visualization line segment from parent <HAnimJoint name='sacroiliac'/> to <HAnimJoint name='l_hip'/>
Shape Shape67 = createNode("Shape");
LineSet LineSet68 = createNode("LineSet");
LineSet68.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate69 = createNode("Coordinate");
Coordinate69.point = new MFVec3f(new float[0,0.9149,0.0016,0.0961,0.9124,-0.0001]);
LineSet68.coord = Coordinate69;

ColorRGBA ColorRGBA70 = createNode("ColorRGBA");
ColorRGBA70.USE = "HAnimSegmentLineColorRGBA";
LineSet68.color = ColorRGBA70;

Shape67.geometry = LineSet68;

HAnimSegment63.children[2] = Shape67;

//HAnimSegment visualization line segment from parent <HAnimJoint name='sacroiliac'/> to <HAnimJoint name='r_hip'/>
Shape Shape71 = createNode("Shape");
LineSet LineSet72 = createNode("LineSet");
LineSet72.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate73 = createNode("Coordinate");
Coordinate73.point = new MFVec3f(new float[0,0.9149,0.0016,-0.0961,0.9124,-0.0001]);
LineSet72.coord = Coordinate73;

ColorRGBA ColorRGBA74 = createNode("ColorRGBA");
ColorRGBA74.USE = "HAnimSegmentLineColorRGBA";
LineSet72.color = ColorRGBA74;

Shape71.geometry = LineSet72;

HAnimSegment63.children[3] = Shape71;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_iliocristale'/>
Shape Shape75 = createNode("Shape");
LineSet LineSet76 = createNode("LineSet");
LineSet76.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate77 = createNode("Coordinate");
Coordinate77.point = new MFVec3f(new float[0,0.9149,0.0016,-0.1525,1.0628,0.0035]);
LineSet76.coord = Coordinate77;

ColorRGBA ColorRGBA78 = createNode("ColorRGBA");
ColorRGBA78.DEF = "HAnimSiteLineColorRGBA";
ColorRGBA78.color = new MFColorRGBA(new float[1,0,0,1,1,0,0,0.1]);
LineSet76.color = ColorRGBA78;

Shape75.geometry = LineSet76;

HAnimSegment63.children[4] = Shape75;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_trochanterion'/>
Shape Shape79 = createNode("Shape");
LineSet LineSet80 = createNode("LineSet");
LineSet80.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate81 = createNode("Coordinate");
Coordinate81.point = new MFVec3f(new float[0,0.9149,0.0016,-0.1689,0.8419,0.0352]);
LineSet80.coord = Coordinate81;

ColorRGBA ColorRGBA82 = createNode("ColorRGBA");
ColorRGBA82.USE = "HAnimSiteLineColorRGBA";
LineSet80.color = ColorRGBA82;

Shape79.geometry = LineSet80;

HAnimSegment63.children[5] = Shape79;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_iliocristale'/>
Shape Shape83 = createNode("Shape");
LineSet LineSet84 = createNode("LineSet");
LineSet84.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate85 = createNode("Coordinate");
Coordinate85.point = new MFVec3f(new float[0,0.9149,0.0016,0.1612,1.0537,0.0008]);
LineSet84.coord = Coordinate85;

ColorRGBA ColorRGBA86 = createNode("ColorRGBA");
ColorRGBA86.USE = "HAnimSiteLineColorRGBA";
LineSet84.color = ColorRGBA86;

Shape83.geometry = LineSet84;

HAnimSegment63.children[6] = Shape83;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_trochanterion'/>
Shape Shape87 = createNode("Shape");
LineSet LineSet88 = createNode("LineSet");
LineSet88.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate89 = createNode("Coordinate");
Coordinate89.point = new MFVec3f(new float[0,0.9149,0.0016,0.1677,0.8336,0.0303]);
LineSet88.coord = Coordinate89;

ColorRGBA ColorRGBA90 = createNode("ColorRGBA");
ColorRGBA90.USE = "HAnimSiteLineColorRGBA";
LineSet88.color = ColorRGBA90;

Shape87.geometry = LineSet88;

HAnimSegment63.children[7] = Shape87;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_asis'/>
Shape Shape91 = createNode("Shape");
LineSet LineSet92 = createNode("LineSet");
LineSet92.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate93 = createNode("Coordinate");
Coordinate93.point = new MFVec3f(new float[0,0.9149,0.0016,-0.0887,1.0021,0.1112]);
LineSet92.coord = Coordinate93;

ColorRGBA ColorRGBA94 = createNode("ColorRGBA");
ColorRGBA94.USE = "HAnimSiteLineColorRGBA";
LineSet92.color = ColorRGBA94;

Shape91.geometry = LineSet92;

HAnimSegment63.children[8] = Shape91;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_asis'/>
Shape Shape95 = createNode("Shape");
LineSet LineSet96 = createNode("LineSet");
LineSet96.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate97 = createNode("Coordinate");
Coordinate97.point = new MFVec3f(new float[0,0.9149,0.0016,0.0925,0.9983,0.1052]);
LineSet96.coord = Coordinate97;

ColorRGBA ColorRGBA98 = createNode("ColorRGBA");
ColorRGBA98.USE = "HAnimSiteLineColorRGBA";
LineSet96.color = ColorRGBA98;

Shape95.geometry = LineSet96;

HAnimSegment63.children[9] = Shape95;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_psis'/>
Shape Shape99 = createNode("Shape");
LineSet LineSet100 = createNode("LineSet");
LineSet100.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate101 = createNode("Coordinate");
Coordinate101.point = new MFVec3f(new float[0,0.9149,0.0016,-0.0716,1.019,-0.1138]);
LineSet100.coord = Coordinate101;

ColorRGBA ColorRGBA102 = createNode("ColorRGBA");
ColorRGBA102.USE = "HAnimSiteLineColorRGBA";
LineSet100.color = ColorRGBA102;

Shape99.geometry = LineSet100;

HAnimSegment63.children[10] = Shape99;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_psis'/>
Shape Shape103 = createNode("Shape");
LineSet LineSet104 = createNode("LineSet");
LineSet104.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate105 = createNode("Coordinate");
Coordinate105.point = new MFVec3f(new float[0,0.9149,0.0016,0.0774,1.019,-0.1151]);
LineSet104.coord = Coordinate105;

ColorRGBA ColorRGBA106 = createNode("ColorRGBA");
ColorRGBA106.USE = "HAnimSiteLineColorRGBA";
LineSet104.color = ColorRGBA106;

Shape103.geometry = LineSet104;

HAnimSegment63.children[11] = Shape103;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='crotch'/>
Shape Shape107 = createNode("Shape");
LineSet LineSet108 = createNode("LineSet");
LineSet108.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate109 = createNode("Coordinate");
Coordinate109.point = new MFVec3f(new float[0,0.9149,0.0016,0.0034,0.8266,0.0257]);
LineSet108.coord = Coordinate109;

ColorRGBA ColorRGBA110 = createNode("ColorRGBA");
ColorRGBA110.USE = "HAnimSiteLineColorRGBA";
LineSet108.color = ColorRGBA110;

Shape107.geometry = LineSet108;

HAnimSegment63.children[12] = Shape107;

HAnimSite HAnimSite111 = createNode("HAnimSite");
HAnimSite111.name = "r_iliocristale_pt";
HAnimSite111.DEF = "hanim_r_iliocristale_pt";
HAnimSite111.translation = new SFVec3f(new float[-0.1525,1.0628,0.0035]);
//HAnimSite visualization shape
TouchSensor TouchSensor112 = createNode("TouchSensor");
TouchSensor112.description = "HAnimSite r_iliocristale";
HAnimSite111.children = new MFNode();

HAnimSite111.children[0] = TouchSensor112;

Shape Shape113 = createNode("Shape");
Shape113.DEF = "HAnimSiteShape";
IndexedFaceSet IndexedFaceSet114 = createNode("IndexedFaceSet");
IndexedFaceSet114.DEF = "DiamondIFS";
IndexedFaceSet114.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet114.creaseAngle = 0.5;
IndexedFaceSet114.solid = False;
Coordinate Coordinate115 = createNode("Coordinate");
Coordinate115.point = new MFVec3f(new float[0,0.008,0,-0.008,0,0,0,0,0.008,0.008,0,0,0,0,-0.008,0,-0.008,0]);
IndexedFaceSet114.coord = Coordinate115;

Shape113.geometry = IndexedFaceSet114;

Appearance Appearance116 = createNode("Appearance");
Material Material117 = createNode("Material");
Material117.diffuseColor = new SFColor(new float[1,0,0]);
Appearance116.material = Material117;

Shape113.appearance = Appearance116;

HAnimSite111.children[1] = Shape113;

HAnimSegment63.children[13] = HAnimSite111;

HAnimSite HAnimSite118 = createNode("HAnimSite");
HAnimSite118.name = "r_trochanterion_pt";
HAnimSite118.DEF = "hanim_r_trochanterion_pt";
HAnimSite118.translation = new SFVec3f(new float[-0.1689,0.8419,0.0352]);
//HAnimSite visualization shape
TouchSensor TouchSensor119 = createNode("TouchSensor");
TouchSensor119.description = "HAnimSite r_trochanterion";
HAnimSite118.children = new MFNode();

HAnimSite118.children[0] = TouchSensor119;

Shape Shape120 = createNode("Shape");
Shape120.USE = "HAnimSiteShape";
HAnimSite118.children[1] = Shape120;

HAnimSegment63.children[14] = HAnimSite118;

HAnimSite HAnimSite121 = createNode("HAnimSite");
HAnimSite121.name = "l_iliocristale_pt";
HAnimSite121.DEF = "hanim_l_iliocristale_pt";
HAnimSite121.translation = new SFVec3f(new float[0.1612,1.0537,0.0008]);
//HAnimSite visualization shape
TouchSensor TouchSensor122 = createNode("TouchSensor");
TouchSensor122.description = "HAnimSite l_iliocristale";
HAnimSite121.children = new MFNode();

HAnimSite121.children[0] = TouchSensor122;

Shape Shape123 = createNode("Shape");
Shape123.USE = "HAnimSiteShape";
HAnimSite121.children[1] = Shape123;

HAnimSegment63.children[15] = HAnimSite121;

HAnimSite HAnimSite124 = createNode("HAnimSite");
HAnimSite124.name = "l_trochanterion_pt";
HAnimSite124.DEF = "hanim_l_trochanterion_pt";
HAnimSite124.translation = new SFVec3f(new float[0.1677,0.8336,0.0303]);
//HAnimSite visualization shape
TouchSensor TouchSensor125 = createNode("TouchSensor");
TouchSensor125.description = "HAnimSite l_trochanterion";
HAnimSite124.children = new MFNode();

HAnimSite124.children[0] = TouchSensor125;

Shape Shape126 = createNode("Shape");
Shape126.USE = "HAnimSiteShape";
HAnimSite124.children[1] = Shape126;

HAnimSegment63.children[16] = HAnimSite124;

HAnimSite HAnimSite127 = createNode("HAnimSite");
HAnimSite127.name = "r_asis_pt";
HAnimSite127.DEF = "hanim_r_asis_pt";
HAnimSite127.translation = new SFVec3f(new float[-0.0887,1.0021,0.1112]);
//HAnimSite visualization shape
TouchSensor TouchSensor128 = createNode("TouchSensor");
TouchSensor128.description = "HAnimSite r_asis";
HAnimSite127.children = new MFNode();

HAnimSite127.children[0] = TouchSensor128;

Shape Shape129 = createNode("Shape");
Shape129.USE = "HAnimSiteShape";
HAnimSite127.children[1] = Shape129;

HAnimSegment63.children[17] = HAnimSite127;

HAnimSite HAnimSite130 = createNode("HAnimSite");
HAnimSite130.name = "l_asis_pt";
HAnimSite130.DEF = "hanim_l_asis_pt";
HAnimSite130.translation = new SFVec3f(new float[0.0925,0.9983,0.1052]);
//HAnimSite visualization shape
TouchSensor TouchSensor131 = createNode("TouchSensor");
TouchSensor131.description = "HAnimSite l_asis";
HAnimSite130.children = new MFNode();

HAnimSite130.children[0] = TouchSensor131;

Shape Shape132 = createNode("Shape");
Shape132.USE = "HAnimSiteShape";
HAnimSite130.children[1] = Shape132;

HAnimSegment63.children[18] = HAnimSite130;

HAnimSite HAnimSite133 = createNode("HAnimSite");
HAnimSite133.name = "r_psis_pt";
HAnimSite133.DEF = "hanim_r_psis_pt";
HAnimSite133.translation = new SFVec3f(new float[-0.0716,1.019,-0.1138]);
//HAnimSite visualization shape
TouchSensor TouchSensor134 = createNode("TouchSensor");
TouchSensor134.description = "HAnimSite r_psis";
HAnimSite133.children = new MFNode();

HAnimSite133.children[0] = TouchSensor134;

Shape Shape135 = createNode("Shape");
Shape135.USE = "HAnimSiteShape";
HAnimSite133.children[1] = Shape135;

HAnimSegment63.children[19] = HAnimSite133;

HAnimSite HAnimSite136 = createNode("HAnimSite");
HAnimSite136.name = "l_psis_pt";
HAnimSite136.DEF = "hanim_l_psis_pt";
HAnimSite136.translation = new SFVec3f(new float[0.0774,1.019,-0.1151]);
//HAnimSite visualization shape
TouchSensor TouchSensor137 = createNode("TouchSensor");
TouchSensor137.description = "HAnimSite l_psis";
HAnimSite136.children = new MFNode();

HAnimSite136.children[0] = TouchSensor137;

Shape Shape138 = createNode("Shape");
Shape138.USE = "HAnimSiteShape";
HAnimSite136.children[1] = Shape138;

HAnimSegment63.children[20] = HAnimSite136;

HAnimSite HAnimSite139 = createNode("HAnimSite");
HAnimSite139.name = "crotch_pt";
HAnimSite139.DEF = "hanim_crotch_pt";
HAnimSite139.translation = new SFVec3f(new float[0.0034,0.8266,0.0257]);
//HAnimSite visualization shape
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
HAnimJoint142.name = "l_hip";
HAnimJoint142.DEF = "hanim_l_hip";
HAnimJoint142.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
HAnimJoint142.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment143 = createNode("HAnimSegment");
HAnimSegment143.name = "l_thigh";
HAnimSegment143.DEF = "hanim_l_thigh";
//<HAnimJoint name='l_hip'/> visualization sphere within <HAnimSegment name='l_thigh'/>
TouchSensor TouchSensor144 = createNode("TouchSensor");
TouchSensor144.description = "HAnimJoint l_hip, HAnimSegment l_thigh";
HAnimSegment143.children = new MFNode();

HAnimSegment143.children[0] = TouchSensor144;

Transform Transform145 = createNode("Transform");
Transform145.translation = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
Shape Shape146 = createNode("Shape");
Shape146.USE = "HAnimJointShape";
Transform145.children = new MFNode();

Transform145.children[0] = Shape146;

HAnimSegment143.children[1] = Transform145;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_hip'/> to <HAnimJoint name='l_knee'/>
Shape Shape147 = createNode("Shape");
LineSet LineSet148 = createNode("LineSet");
LineSet148.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate149 = createNode("Coordinate");
Coordinate149.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.104,0.4867,0.0308]);
LineSet148.coord = Coordinate149;

ColorRGBA ColorRGBA150 = createNode("ColorRGBA");
ColorRGBA150.USE = "HAnimSegmentLineColorRGBA";
LineSet148.color = ColorRGBA150;

Shape147.geometry = LineSet148;

HAnimSegment143.children[2] = Shape147;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_knee_crease'/>
Shape Shape151 = createNode("Shape");
LineSet LineSet152 = createNode("LineSet");
LineSet152.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate153 = createNode("Coordinate");
Coordinate153.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.0993,0.4881,-0.0309]);
LineSet152.coord = Coordinate153;

ColorRGBA ColorRGBA154 = createNode("ColorRGBA");
ColorRGBA154.USE = "HAnimSiteLineColorRGBA";
LineSet152.color = ColorRGBA154;

Shape151.geometry = LineSet152;

HAnimSegment143.children[3] = Shape151;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_lateral_epicn'/>
Shape Shape155 = createNode("Shape");
LineSet LineSet156 = createNode("LineSet");
LineSet156.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate157 = createNode("Coordinate");
Coordinate157.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.1598,0.4967,0.0297]);
LineSet156.coord = Coordinate157;

ColorRGBA ColorRGBA158 = createNode("ColorRGBA");
ColorRGBA158.USE = "HAnimSiteLineColorRGBA";
LineSet156.color = ColorRGBA158;

Shape155.geometry = LineSet156;

HAnimSegment143.children[4] = Shape155;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_medial_epicn'/>
Shape Shape159 = createNode("Shape");
LineSet LineSet160 = createNode("LineSet");
LineSet160.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate161 = createNode("Coordinate");
Coordinate161.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.0398,0.4946,0.0303]);
LineSet160.coord = Coordinate161;

ColorRGBA ColorRGBA162 = createNode("ColorRGBA");
ColorRGBA162.USE = "HAnimSiteLineColorRGBA";
LineSet160.color = ColorRGBA162;

Shape159.geometry = LineSet160;

HAnimSegment143.children[5] = Shape159;

HAnimSite HAnimSite163 = createNode("HAnimSite");
HAnimSite163.name = "l_knee_crease_pt";
HAnimSite163.DEF = "hanim_l_knee_crease_pt";
HAnimSite163.translation = new SFVec3f(new float[0.0993,0.4881,-0.0309]);
//HAnimSite visualization shape
TouchSensor TouchSensor164 = createNode("TouchSensor");
TouchSensor164.description = "HAnimSite l_knee_crease";
HAnimSite163.children = new MFNode();

HAnimSite163.children[0] = TouchSensor164;

Shape Shape165 = createNode("Shape");
Shape165.USE = "HAnimSiteShape";
HAnimSite163.children[1] = Shape165;

HAnimSegment143.children[6] = HAnimSite163;

HAnimSite HAnimSite166 = createNode("HAnimSite");
HAnimSite166.name = "l_femoral_lateral_epicn_pt";
HAnimSite166.DEF = "hanim_l_femoral_lateral_epicn_pt";
HAnimSite166.translation = new SFVec3f(new float[0.1598,0.4967,0.0297]);
//HAnimSite visualization shape
TouchSensor TouchSensor167 = createNode("TouchSensor");
TouchSensor167.description = "HAnimSite l_femoral_lateral_epicn";
HAnimSite166.children = new MFNode();

HAnimSite166.children[0] = TouchSensor167;

Shape Shape168 = createNode("Shape");
Shape168.USE = "HAnimSiteShape";
HAnimSite166.children[1] = Shape168;

HAnimSegment143.children[7] = HAnimSite166;

HAnimSite HAnimSite169 = createNode("HAnimSite");
HAnimSite169.name = "l_femoral_medial_epicn_pt";
HAnimSite169.DEF = "hanim_l_femoral_medial_epicn_pt";
HAnimSite169.translation = new SFVec3f(new float[0.0398,0.4946,0.0303]);
//HAnimSite visualization shape
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
HAnimJoint172.name = "l_knee";
HAnimJoint172.DEF = "hanim_l_knee";
HAnimJoint172.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
HAnimJoint172.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment173 = createNode("HAnimSegment");
HAnimSegment173.name = "l_calf";
HAnimSegment173.DEF = "hanim_l_calf";
//<HAnimJoint name='l_knee'/> visualization sphere within <HAnimSegment name='l_calf'/>
TouchSensor TouchSensor174 = createNode("TouchSensor");
TouchSensor174.description = "HAnimJoint l_knee, HAnimSegment l_calf";
HAnimSegment173.children = new MFNode();

HAnimSegment173.children[0] = TouchSensor174;

Transform Transform175 = createNode("Transform");
Transform175.translation = new SFVec3f(new float[0.104,0.4867,0.0308]);
Shape Shape176 = createNode("Shape");
Shape176.USE = "HAnimJointShape";
Transform175.children = new MFNode();

Transform175.children[0] = Shape176;

HAnimSegment173.children[1] = Transform175;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_knee'/> to <HAnimJoint name='l_ankle'/>
Shape Shape177 = createNode("Shape");
LineSet LineSet178 = createNode("LineSet");
LineSet178.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate179 = createNode("Coordinate");
Coordinate179.point = new MFVec3f(new float[0.104,0.4867,0.0308,0.1101,0.0656,-0.0736]);
LineSet178.coord = Coordinate179;

ColorRGBA ColorRGBA180 = createNode("ColorRGBA");
ColorRGBA180.USE = "HAnimSegmentLineColorRGBA";
LineSet178.color = ColorRGBA180;

Shape177.geometry = LineSet178;

HAnimSegment173.children[2] = Shape177;

HAnimJoint172.children = new MFNode();

HAnimJoint172.children[0] = HAnimSegment173;

HAnimJoint HAnimJoint181 = createNode("HAnimJoint");
HAnimJoint181.name = "l_ankle";
HAnimJoint181.DEF = "hanim_l_ankle";
HAnimJoint181.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
HAnimJoint181.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment182 = createNode("HAnimSegment");
HAnimSegment182.name = "l_hindfoot";
HAnimSegment182.DEF = "hanim_l_hindfoot";
//<HAnimJoint name='l_ankle'/> visualization sphere within <HAnimSegment name='l_hindfoot'/>
TouchSensor TouchSensor183 = createNode("TouchSensor");
TouchSensor183.description = "HAnimJoint l_ankle, HAnimSegment l_hindfoot";
HAnimSegment182.children = new MFNode();

HAnimSegment182.children[0] = TouchSensor183;

Transform Transform184 = createNode("Transform");
Transform184.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
Shape Shape185 = createNode("Shape");
Shape185.USE = "HAnimJointShape";
Transform184.children = new MFNode();

Transform184.children[0] = Shape185;

HAnimSegment182.children[1] = Transform184;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ankle'/> to <HAnimJoint name='l_subtalar'/>
Shape Shape186 = createNode("Shape");
LineSet LineSet187 = createNode("LineSet");
LineSet187.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate188 = createNode("Coordinate");
Coordinate188.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.1086,0.0001,-0.0368]);
LineSet187.coord = Coordinate188;

ColorRGBA ColorRGBA189 = createNode("ColorRGBA");
ColorRGBA189.USE = "HAnimSegmentLineColorRGBA";
LineSet187.color = ColorRGBA189;

Shape186.geometry = LineSet187;

HAnimSegment182.children[2] = Shape186;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_lateral_malleolus'/>
Shape Shape190 = createNode("Shape");
LineSet LineSet191 = createNode("LineSet");
LineSet191.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate192 = createNode("Coordinate");
Coordinate192.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.1308,0.0597,-0.1032]);
LineSet191.coord = Coordinate192;

ColorRGBA ColorRGBA193 = createNode("ColorRGBA");
ColorRGBA193.USE = "HAnimSiteLineColorRGBA";
LineSet191.color = ColorRGBA193;

Shape190.geometry = LineSet191;

HAnimSegment182.children[3] = Shape190;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_medial_malleolus'/>
Shape Shape194 = createNode("Shape");
LineSet LineSet195 = createNode("LineSet");
LineSet195.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate196 = createNode("Coordinate");
Coordinate196.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.089,0.0716,-0.0881]);
LineSet195.coord = Coordinate196;

ColorRGBA ColorRGBA197 = createNode("ColorRGBA");
ColorRGBA197.USE = "HAnimSiteLineColorRGBA";
LineSet195.color = ColorRGBA197;

Shape194.geometry = LineSet195;

HAnimSegment182.children[4] = Shape194;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_sphyrion'/>
Shape Shape198 = createNode("Shape");
LineSet LineSet199 = createNode("LineSet");
LineSet199.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate200 = createNode("Coordinate");
Coordinate200.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.089,0.0575,-0.0943]);
LineSet199.coord = Coordinate200;

ColorRGBA ColorRGBA201 = createNode("ColorRGBA");
ColorRGBA201.USE = "HAnimSiteLineColorRGBA";
LineSet199.color = ColorRGBA201;

Shape198.geometry = LineSet199;

HAnimSegment182.children[5] = Shape198;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_calcaneous_post'/>
Shape Shape202 = createNode("Shape");
LineSet LineSet203 = createNode("LineSet");
LineSet203.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate204 = createNode("Coordinate");
Coordinate204.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.0974,0.0259,-0.1171]);
LineSet203.coord = Coordinate204;

ColorRGBA ColorRGBA205 = createNode("ColorRGBA");
ColorRGBA205.USE = "HAnimSiteLineColorRGBA";
LineSet203.color = ColorRGBA205;

Shape202.geometry = LineSet203;

HAnimSegment182.children[6] = Shape202;

HAnimSite HAnimSite206 = createNode("HAnimSite");
HAnimSite206.name = "l_lateral_malleolus_pt";
HAnimSite206.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite206.translation = new SFVec3f(new float[0.1308,0.0597,-0.1032]);
//HAnimSite visualization shape
TouchSensor TouchSensor207 = createNode("TouchSensor");
TouchSensor207.description = "HAnimSite l_lateral_malleolus";
HAnimSite206.children = new MFNode();

HAnimSite206.children[0] = TouchSensor207;

Shape Shape208 = createNode("Shape");
Shape208.USE = "HAnimSiteShape";
HAnimSite206.children[1] = Shape208;

HAnimSegment182.children[7] = HAnimSite206;

HAnimSite HAnimSite209 = createNode("HAnimSite");
HAnimSite209.name = "l_medial_malleolus_pt";
HAnimSite209.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite209.translation = new SFVec3f(new float[0.089,0.0716,-0.0881]);
//HAnimSite visualization shape
TouchSensor TouchSensor210 = createNode("TouchSensor");
TouchSensor210.description = "HAnimSite l_medial_malleolus";
HAnimSite209.children = new MFNode();

HAnimSite209.children[0] = TouchSensor210;

Shape Shape211 = createNode("Shape");
Shape211.USE = "HAnimSiteShape";
HAnimSite209.children[1] = Shape211;

HAnimSegment182.children[8] = HAnimSite209;

HAnimSite HAnimSite212 = createNode("HAnimSite");
HAnimSite212.name = "l_sphyrion_pt";
HAnimSite212.DEF = "hanim_l_sphyrion_pt";
HAnimSite212.translation = new SFVec3f(new float[0.089,0.0575,-0.0943]);
//HAnimSite visualization shape
TouchSensor TouchSensor213 = createNode("TouchSensor");
TouchSensor213.description = "HAnimSite l_sphyrion";
HAnimSite212.children = new MFNode();

HAnimSite212.children[0] = TouchSensor213;

Shape Shape214 = createNode("Shape");
Shape214.USE = "HAnimSiteShape";
HAnimSite212.children[1] = Shape214;

HAnimSegment182.children[9] = HAnimSite212;

HAnimSite HAnimSite215 = createNode("HAnimSite");
HAnimSite215.name = "l_calcaneous_post_pt";
HAnimSite215.DEF = "hanim_l_calcaneous_post_pt";
HAnimSite215.translation = new SFVec3f(new float[0.0974,0.0259,-0.1171]);
//HAnimSite visualization shape
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
HAnimJoint218.name = "l_subtalar";
HAnimJoint218.DEF = "hanim_l_subtalar";
HAnimJoint218.center = new SFVec3f(new float[0.1086,0.0001,-0.0368]);
HAnimJoint218.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment219 = createNode("HAnimSegment");
HAnimSegment219.name = "l_midproximal";
HAnimSegment219.DEF = "hanim_l_midproximal";
//<HAnimJoint name='l_subtalar'/> visualization sphere within <HAnimSegment name='l_midproximal'/>
TouchSensor TouchSensor220 = createNode("TouchSensor");
TouchSensor220.description = "HAnimJoint l_subtalar, HAnimSegment l_midproximal";
HAnimSegment219.children = new MFNode();

HAnimSegment219.children[0] = TouchSensor220;

Transform Transform221 = createNode("Transform");
Transform221.translation = new SFVec3f(new float[0.1086,0.0001,-0.0368]);
Shape Shape222 = createNode("Shape");
Shape222.USE = "HAnimJointShape";
Transform221.children = new MFNode();

Transform221.children[0] = Shape222;

HAnimSegment219.children[1] = Transform221;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_subtalar'/> to <HAnimJoint name='l_midtarsal'/>
Shape Shape223 = createNode("Shape");
LineSet LineSet224 = createNode("LineSet");
LineSet224.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate225 = createNode("Coordinate");
Coordinate225.point = new MFVec3f(new float[0.1086,0.0001,-0.0368,0.1086,0.0001,0.0368]);
LineSet224.coord = Coordinate225;

ColorRGBA ColorRGBA226 = createNode("ColorRGBA");
ColorRGBA226.USE = "HAnimSegmentLineColorRGBA";
LineSet224.color = ColorRGBA226;

Shape223.geometry = LineSet224;

HAnimSegment219.children[2] = Shape223;

HAnimJoint218.children = new MFNode();

HAnimJoint218.children[0] = HAnimSegment219;

HAnimJoint HAnimJoint227 = createNode("HAnimJoint");
HAnimJoint227.name = "l_midtarsal";
HAnimJoint227.DEF = "hanim_l_midtarsal";
HAnimJoint227.center = new SFVec3f(new float[0.1086,0.0001,0.0368]);
HAnimJoint227.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment228 = createNode("HAnimSegment");
HAnimSegment228.name = "l_middistal";
HAnimSegment228.DEF = "hanim_l_middistal";
//<HAnimJoint name='l_midtarsal'/> visualization sphere within <HAnimSegment name='l_middistal'/>
TouchSensor TouchSensor229 = createNode("TouchSensor");
TouchSensor229.description = "HAnimJoint l_midtarsal, HAnimSegment l_middistal";
HAnimSegment228.children = new MFNode();

HAnimSegment228.children[0] = TouchSensor229;

Transform Transform230 = createNode("Transform");
Transform230.translation = new SFVec3f(new float[0.1086,0.0001,0.0368]);
Shape Shape231 = createNode("Shape");
Shape231.USE = "HAnimJointShape";
Transform230.children = new MFNode();

Transform230.children[0] = Shape231;

HAnimSegment228.children[1] = Transform230;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_midtarsal'/> to <HAnimJoint name='l_metatarsal'/>
Shape Shape232 = createNode("Shape");
LineSet LineSet233 = createNode("LineSet");
LineSet233.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate234 = createNode("Coordinate");
Coordinate234.point = new MFVec3f(new float[0.1086,0.0001,0.0368,0.1086,0,0.0762]);
LineSet233.coord = Coordinate234;

ColorRGBA ColorRGBA235 = createNode("ColorRGBA");
ColorRGBA235.USE = "HAnimSegmentLineColorRGBA";
LineSet233.color = ColorRGBA235;

Shape232.geometry = LineSet233;

HAnimSegment228.children[2] = Shape232;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_midtarsal'/> to <HAnimSite name='l_metatarsal_pha1'/>
Shape Shape236 = createNode("Shape");
LineSet LineSet237 = createNode("LineSet");
LineSet237.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate238 = createNode("Coordinate");
Coordinate238.point = new MFVec3f(new float[0.1086,0.0001,0.0368,0.0816,0.0232,0.0106]);
LineSet237.coord = Coordinate238;

ColorRGBA ColorRGBA239 = createNode("ColorRGBA");
ColorRGBA239.USE = "HAnimSiteLineColorRGBA";
LineSet237.color = ColorRGBA239;

Shape236.geometry = LineSet237;

HAnimSegment228.children[3] = Shape236;

HAnimSite HAnimSite240 = createNode("HAnimSite");
HAnimSite240.name = "l_metatarsal_pha1_pt";
HAnimSite240.DEF = "hanim_l_metatarsal_pha1_pt";
HAnimSite240.translation = new SFVec3f(new float[0.0816,0.0232,0.0106]);
//HAnimSite visualization shape
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
HAnimJoint243.name = "l_metatarsal";
HAnimJoint243.DEF = "hanim_l_metatarsal";
HAnimJoint243.center = new SFVec3f(new float[0.1086,0,0.0762]);
HAnimJoint243.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment244 = createNode("HAnimSegment");
HAnimSegment244.name = "l_forefoot";
HAnimSegment244.DEF = "hanim_l_forefoot";
//<HAnimJoint name='l_metatarsal'/> visualization sphere within <HAnimSegment name='l_forefoot'/>
TouchSensor TouchSensor245 = createNode("TouchSensor");
TouchSensor245.description = "HAnimJoint l_metatarsal, HAnimSegment l_forefoot";
HAnimSegment244.children = new MFNode();

HAnimSegment244.children[0] = TouchSensor245;

Transform Transform246 = createNode("Transform");
Transform246.translation = new SFVec3f(new float[0.1086,0,0.0762]);
Shape Shape247 = createNode("Shape");
Shape247.USE = "HAnimJointShape";
Transform246.children = new MFNode();

Transform246.children[0] = Shape247;

HAnimSegment244.children[1] = Transform246;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_forefoot_tip'/>
Shape Shape248 = createNode("Shape");
LineSet LineSet249 = createNode("LineSet");
LineSet249.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate250 = createNode("Coordinate");
Coordinate250.point = new MFVec3f(new float[0.1086,0,0.0762,0.1354,0.0016,0.1476]);
LineSet249.coord = Coordinate250;

ColorRGBA ColorRGBA251 = createNode("ColorRGBA");
ColorRGBA251.USE = "HAnimSiteLineColorRGBA";
LineSet249.color = ColorRGBA251;

Shape248.geometry = LineSet249;

HAnimSegment244.children[2] = Shape248;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_metatarsal_pha5'/>
Shape Shape252 = createNode("Shape");
LineSet LineSet253 = createNode("LineSet");
LineSet253.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate254 = createNode("Coordinate");
Coordinate254.point = new MFVec3f(new float[0.1086,0,0.0762,0.1825,0.007,0.0928]);
LineSet253.coord = Coordinate254;

ColorRGBA ColorRGBA255 = createNode("ColorRGBA");
ColorRGBA255.USE = "HAnimSiteLineColorRGBA";
LineSet253.color = ColorRGBA255;

Shape252.geometry = LineSet253;

HAnimSegment244.children[3] = Shape252;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_digit2'/>
Shape Shape256 = createNode("Shape");
LineSet LineSet257 = createNode("LineSet");
LineSet257.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate258 = createNode("Coordinate");
Coordinate258.point = new MFVec3f(new float[0.1086,0,0.0762,0.1195,0.0079,0.1433]);
LineSet257.coord = Coordinate258;

ColorRGBA ColorRGBA259 = createNode("ColorRGBA");
ColorRGBA259.USE = "HAnimSiteLineColorRGBA";
LineSet257.color = ColorRGBA259;

Shape256.geometry = LineSet257;

HAnimSegment244.children[4] = Shape256;

HAnimSite HAnimSite260 = createNode("HAnimSite");
HAnimSite260.name = "l_forefoot_tip";
HAnimSite260.DEF = "hanim_l_forefoot_tip";
HAnimSite260.translation = new SFVec3f(new float[0.1354,0.0016,0.1476]);
//HAnimSite visualization shape
TouchSensor TouchSensor261 = createNode("TouchSensor");
TouchSensor261.description = "HAnimSite l_forefoot_tip";
HAnimSite260.children = new MFNode();

HAnimSite260.children[0] = TouchSensor261;

Shape Shape262 = createNode("Shape");
Shape262.USE = "HAnimSiteShape";
HAnimSite260.children[1] = Shape262;

HAnimSegment244.children[5] = HAnimSite260;

HAnimSite HAnimSite263 = createNode("HAnimSite");
HAnimSite263.name = "l_metatarsal_pha5_pt";
HAnimSite263.DEF = "hanim_l_metatarsal_pha5_pt";
HAnimSite263.translation = new SFVec3f(new float[0.1825,0.007,0.0928]);
//HAnimSite visualization shape
TouchSensor TouchSensor264 = createNode("TouchSensor");
TouchSensor264.description = "HAnimSite l_metatarsal_pha5";
HAnimSite263.children = new MFNode();

HAnimSite263.children[0] = TouchSensor264;

Shape Shape265 = createNode("Shape");
Shape265.USE = "HAnimSiteShape";
HAnimSite263.children[1] = Shape265;

HAnimSegment244.children[6] = HAnimSite263;

HAnimSite HAnimSite266 = createNode("HAnimSite");
HAnimSite266.name = "l_digit2_pt";
HAnimSite266.DEF = "hanim_l_digit2_pt";
HAnimSite266.translation = new SFVec3f(new float[0.1195,0.0079,0.1433]);
//HAnimSite visualization shape
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
HAnimJoint269.name = "r_hip";
HAnimJoint269.DEF = "hanim_r_hip";
HAnimJoint269.center = new SFVec3f(new float[-0.0961,0.9124,-0.0001]);
HAnimJoint269.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment270 = createNode("HAnimSegment");
HAnimSegment270.name = "r_thigh";
HAnimSegment270.DEF = "hanim_r_thigh";
//<HAnimJoint name='r_hip'/> visualization sphere within <HAnimSegment name='r_thigh'/>
TouchSensor TouchSensor271 = createNode("TouchSensor");
TouchSensor271.description = "HAnimJoint r_hip, HAnimSegment r_thigh";
HAnimSegment270.children = new MFNode();

HAnimSegment270.children[0] = TouchSensor271;

Transform Transform272 = createNode("Transform");
Transform272.translation = new SFVec3f(new float[-0.0961,0.9124,-0.0001]);
Shape Shape273 = createNode("Shape");
Shape273.USE = "HAnimJointShape";
Transform272.children = new MFNode();

Transform272.children[0] = Shape273;

HAnimSegment270.children[1] = Transform272;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_hip'/> to <HAnimJoint name='r_knee'/>
Shape Shape274 = createNode("Shape");
LineSet LineSet275 = createNode("LineSet");
LineSet275.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate276 = createNode("Coordinate");
Coordinate276.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.104,0.4867,0.0308]);
LineSet275.coord = Coordinate276;

ColorRGBA ColorRGBA277 = createNode("ColorRGBA");
ColorRGBA277.USE = "HAnimSegmentLineColorRGBA";
LineSet275.color = ColorRGBA277;

Shape274.geometry = LineSet275;

HAnimSegment270.children[2] = Shape274;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_knee_crease'/>
Shape Shape278 = createNode("Shape");
LineSet LineSet279 = createNode("LineSet");
LineSet279.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate280 = createNode("Coordinate");
Coordinate280.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.0825,0.4932,-0.0326]);
LineSet279.coord = Coordinate280;

ColorRGBA ColorRGBA281 = createNode("ColorRGBA");
ColorRGBA281.USE = "HAnimSiteLineColorRGBA";
LineSet279.color = ColorRGBA281;

Shape278.geometry = LineSet279;

HAnimSegment270.children[3] = Shape278;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_lateral_epicn'/>
Shape Shape282 = createNode("Shape");
LineSet LineSet283 = createNode("LineSet");
LineSet283.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate284 = createNode("Coordinate");
Coordinate284.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.1421,0.4992,0.031]);
LineSet283.coord = Coordinate284;

ColorRGBA ColorRGBA285 = createNode("ColorRGBA");
ColorRGBA285.USE = "HAnimSiteLineColorRGBA";
LineSet283.color = ColorRGBA285;

Shape282.geometry = LineSet283;

HAnimSegment270.children[4] = Shape282;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_medial_epicn'/>
Shape Shape286 = createNode("Shape");
LineSet LineSet287 = createNode("LineSet");
LineSet287.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate288 = createNode("Coordinate");
Coordinate288.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.0221,0.5014,0.0289]);
LineSet287.coord = Coordinate288;

ColorRGBA ColorRGBA289 = createNode("ColorRGBA");
ColorRGBA289.USE = "HAnimSiteLineColorRGBA";
LineSet287.color = ColorRGBA289;

Shape286.geometry = LineSet287;

HAnimSegment270.children[5] = Shape286;

HAnimSite HAnimSite290 = createNode("HAnimSite");
HAnimSite290.name = "r_knee_crease_pt";
HAnimSite290.DEF = "hanim_r_knee_crease_pt";
HAnimSite290.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
//HAnimSite visualization shape
TouchSensor TouchSensor291 = createNode("TouchSensor");
TouchSensor291.description = "HAnimSite r_knee_crease";
HAnimSite290.children = new MFNode();

HAnimSite290.children[0] = TouchSensor291;

Shape Shape292 = createNode("Shape");
Shape292.USE = "HAnimSiteShape";
HAnimSite290.children[1] = Shape292;

HAnimSegment270.children[6] = HAnimSite290;

HAnimSite HAnimSite293 = createNode("HAnimSite");
HAnimSite293.name = "r_femoral_lateral_epicn_pt";
HAnimSite293.DEF = "hanim_r_femoral_lateral_epicn_pt";
HAnimSite293.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
//HAnimSite visualization shape
TouchSensor TouchSensor294 = createNode("TouchSensor");
TouchSensor294.description = "HAnimSite r_femoral_lateral_epicn";
HAnimSite293.children = new MFNode();

HAnimSite293.children[0] = TouchSensor294;

Shape Shape295 = createNode("Shape");
Shape295.USE = "HAnimSiteShape";
HAnimSite293.children[1] = Shape295;

HAnimSegment270.children[7] = HAnimSite293;

HAnimSite HAnimSite296 = createNode("HAnimSite");
HAnimSite296.name = "r_femoral_medial_epicn_pt";
HAnimSite296.DEF = "hanim_r_femoral_medial_epicn_pt";
HAnimSite296.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
//HAnimSite visualization shape
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
HAnimJoint299.name = "r_knee";
HAnimJoint299.DEF = "hanim_r_knee";
HAnimJoint299.center = new SFVec3f(new float[-0.104,0.4867,0.0308]);
HAnimJoint299.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment300 = createNode("HAnimSegment");
HAnimSegment300.name = "r_calf";
HAnimSegment300.DEF = "hanim_r_calf";
//<HAnimJoint name='r_knee'/> visualization sphere within <HAnimSegment name='r_calf'/>
TouchSensor TouchSensor301 = createNode("TouchSensor");
TouchSensor301.description = "HAnimJoint r_knee, HAnimSegment r_calf";
HAnimSegment300.children = new MFNode();

HAnimSegment300.children[0] = TouchSensor301;

Transform Transform302 = createNode("Transform");
Transform302.translation = new SFVec3f(new float[-0.104,0.4867,0.0308]);
Shape Shape303 = createNode("Shape");
Shape303.USE = "HAnimJointShape";
Transform302.children = new MFNode();

Transform302.children[0] = Shape303;

HAnimSegment300.children[1] = Transform302;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_knee'/> to <HAnimJoint name='r_ankle'/>
Shape Shape304 = createNode("Shape");
LineSet LineSet305 = createNode("LineSet");
LineSet305.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate306 = createNode("Coordinate");
Coordinate306.point = new MFVec3f(new float[-0.104,0.4867,0.0308,-0.1101,0.0656,-0.0736]);
LineSet305.coord = Coordinate306;

ColorRGBA ColorRGBA307 = createNode("ColorRGBA");
ColorRGBA307.USE = "HAnimSegmentLineColorRGBA";
LineSet305.color = ColorRGBA307;

Shape304.geometry = LineSet305;

HAnimSegment300.children[2] = Shape304;

HAnimJoint299.children = new MFNode();

HAnimJoint299.children[0] = HAnimSegment300;

HAnimJoint HAnimJoint308 = createNode("HAnimJoint");
HAnimJoint308.name = "r_ankle";
HAnimJoint308.DEF = "hanim_r_ankle";
HAnimJoint308.center = new SFVec3f(new float[-0.1101,0.0656,-0.0736]);
HAnimJoint308.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment309 = createNode("HAnimSegment");
HAnimSegment309.name = "r_hindfoot";
HAnimSegment309.DEF = "hanim_r_hindfoot";
//<HAnimJoint name='r_ankle'/> visualization sphere within <HAnimSegment name='r_hindfoot'/>
TouchSensor TouchSensor310 = createNode("TouchSensor");
TouchSensor310.description = "HAnimJoint r_ankle, HAnimSegment r_hindfoot";
HAnimSegment309.children = new MFNode();

HAnimSegment309.children[0] = TouchSensor310;

Transform Transform311 = createNode("Transform");
Transform311.translation = new SFVec3f(new float[-0.1101,0.0656,-0.0736]);
Shape Shape312 = createNode("Shape");
Shape312.USE = "HAnimJointShape";
Transform311.children = new MFNode();

Transform311.children[0] = Shape312;

HAnimSegment309.children[1] = Transform311;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ankle'/> to <HAnimJoint name='r_subtalar'/>
Shape Shape313 = createNode("Shape");
LineSet LineSet314 = createNode("LineSet");
LineSet314.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate315 = createNode("Coordinate");
Coordinate315.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.1086,0.0001,-0.0368]);
LineSet314.coord = Coordinate315;

ColorRGBA ColorRGBA316 = createNode("ColorRGBA");
ColorRGBA316.USE = "HAnimSegmentLineColorRGBA";
LineSet314.color = ColorRGBA316;

Shape313.geometry = LineSet314;

HAnimSegment309.children[2] = Shape313;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_lateral_malleolus'/>
Shape Shape317 = createNode("Shape");
LineSet LineSet318 = createNode("LineSet");
LineSet318.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate319 = createNode("Coordinate");
Coordinate319.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.1006,0.0658,-0.1075]);
LineSet318.coord = Coordinate319;

ColorRGBA ColorRGBA320 = createNode("ColorRGBA");
ColorRGBA320.USE = "HAnimSiteLineColorRGBA";
LineSet318.color = ColorRGBA320;

Shape317.geometry = LineSet318;

HAnimSegment309.children[3] = Shape317;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_medial_malleolus'/>
Shape Shape321 = createNode("Shape");
LineSet LineSet322 = createNode("LineSet");
LineSet322.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate323 = createNode("Coordinate");
Coordinate323.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.0591,0.076,-0.0928]);
LineSet322.coord = Coordinate323;

ColorRGBA ColorRGBA324 = createNode("ColorRGBA");
ColorRGBA324.USE = "HAnimSiteLineColorRGBA";
LineSet322.color = ColorRGBA324;

Shape321.geometry = LineSet322;

HAnimSegment309.children[4] = Shape321;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_sphyrion'/>
Shape Shape325 = createNode("Shape");
LineSet LineSet326 = createNode("LineSet");
LineSet326.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate327 = createNode("Coordinate");
Coordinate327.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.0603,0.061,-0.1002]);
LineSet326.coord = Coordinate327;

ColorRGBA ColorRGBA328 = createNode("ColorRGBA");
ColorRGBA328.USE = "HAnimSiteLineColorRGBA";
LineSet326.color = ColorRGBA328;

Shape325.geometry = LineSet326;

HAnimSegment309.children[5] = Shape325;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_calcaneous_post'/>
Shape Shape329 = createNode("Shape");
LineSet LineSet330 = createNode("LineSet");
LineSet330.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate331 = createNode("Coordinate");
Coordinate331.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.0692,0.0297,-0.1221]);
LineSet330.coord = Coordinate331;

ColorRGBA ColorRGBA332 = createNode("ColorRGBA");
ColorRGBA332.USE = "HAnimSiteLineColorRGBA";
LineSet330.color = ColorRGBA332;

Shape329.geometry = LineSet330;

HAnimSegment309.children[6] = Shape329;

HAnimSite HAnimSite333 = createNode("HAnimSite");
HAnimSite333.name = "r_lateral_malleolus_pt";
HAnimSite333.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite333.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
//HAnimSite visualization shape
TouchSensor TouchSensor334 = createNode("TouchSensor");
TouchSensor334.description = "HAnimSite r_lateral_malleolus";
HAnimSite333.children = new MFNode();

HAnimSite333.children[0] = TouchSensor334;

Shape Shape335 = createNode("Shape");
Shape335.USE = "HAnimSiteShape";
HAnimSite333.children[1] = Shape335;

HAnimSegment309.children[7] = HAnimSite333;

HAnimSite HAnimSite336 = createNode("HAnimSite");
HAnimSite336.name = "r_medial_malleolus_pt";
HAnimSite336.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite336.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
//HAnimSite visualization shape
TouchSensor TouchSensor337 = createNode("TouchSensor");
TouchSensor337.description = "HAnimSite r_medial_malleolus";
HAnimSite336.children = new MFNode();

HAnimSite336.children[0] = TouchSensor337;

Shape Shape338 = createNode("Shape");
Shape338.USE = "HAnimSiteShape";
HAnimSite336.children[1] = Shape338;

HAnimSegment309.children[8] = HAnimSite336;

HAnimSite HAnimSite339 = createNode("HAnimSite");
HAnimSite339.name = "r_sphyrion_pt";
HAnimSite339.DEF = "hanim_r_sphyrion_pt";
HAnimSite339.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
//HAnimSite visualization shape
TouchSensor TouchSensor340 = createNode("TouchSensor");
TouchSensor340.description = "HAnimSite r_sphyrion";
HAnimSite339.children = new MFNode();

HAnimSite339.children[0] = TouchSensor340;

Shape Shape341 = createNode("Shape");
Shape341.USE = "HAnimSiteShape";
HAnimSite339.children[1] = Shape341;

HAnimSegment309.children[9] = HAnimSite339;

HAnimSite HAnimSite342 = createNode("HAnimSite");
HAnimSite342.name = "r_calcaneous_post_pt";
HAnimSite342.DEF = "hanim_r_calcaneous_post_pt";
HAnimSite342.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
//HAnimSite visualization shape
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
HAnimJoint345.name = "r_subtalar";
HAnimJoint345.DEF = "hanim_r_subtalar";
HAnimJoint345.center = new SFVec3f(new float[-0.1086,0.0001,-0.0368]);
HAnimJoint345.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment346 = createNode("HAnimSegment");
HAnimSegment346.name = "r_midproximal";
HAnimSegment346.DEF = "hanim_r_midproximal";
//<HAnimJoint name='r_subtalar'/> visualization sphere within <HAnimSegment name='r_midproximal'/>
TouchSensor TouchSensor347 = createNode("TouchSensor");
TouchSensor347.description = "HAnimJoint r_subtalar, HAnimSegment r_midproximal";
HAnimSegment346.children = new MFNode();

HAnimSegment346.children[0] = TouchSensor347;

Transform Transform348 = createNode("Transform");
Transform348.translation = new SFVec3f(new float[-0.1086,0.0001,-0.0368]);
Shape Shape349 = createNode("Shape");
Shape349.USE = "HAnimJointShape";
Transform348.children = new MFNode();

Transform348.children[0] = Shape349;

HAnimSegment346.children[1] = Transform348;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_subtalar'/> to <HAnimJoint name='r_midtarsal'/>
Shape Shape350 = createNode("Shape");
LineSet LineSet351 = createNode("LineSet");
LineSet351.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate352 = createNode("Coordinate");
Coordinate352.point = new MFVec3f(new float[-0.1086,0.0001,-0.0368,-0.1086,0.0001,0.0368]);
LineSet351.coord = Coordinate352;

ColorRGBA ColorRGBA353 = createNode("ColorRGBA");
ColorRGBA353.USE = "HAnimSegmentLineColorRGBA";
LineSet351.color = ColorRGBA353;

Shape350.geometry = LineSet351;

HAnimSegment346.children[2] = Shape350;

HAnimJoint345.children = new MFNode();

HAnimJoint345.children[0] = HAnimSegment346;

HAnimJoint HAnimJoint354 = createNode("HAnimJoint");
HAnimJoint354.name = "r_midtarsal";
HAnimJoint354.DEF = "hanim_r_midtarsal";
HAnimJoint354.center = new SFVec3f(new float[-0.1086,0.0001,0.0368]);
HAnimJoint354.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment355 = createNode("HAnimSegment");
HAnimSegment355.name = "r_middistal";
HAnimSegment355.DEF = "hanim_r_middistal";
//<HAnimJoint name='r_midtarsal'/> visualization sphere within <HAnimSegment name='r_middistal'/>
TouchSensor TouchSensor356 = createNode("TouchSensor");
TouchSensor356.description = "HAnimJoint r_midtarsal, HAnimSegment r_middistal";
HAnimSegment355.children = new MFNode();

HAnimSegment355.children[0] = TouchSensor356;

Transform Transform357 = createNode("Transform");
Transform357.translation = new SFVec3f(new float[-0.1086,0.0001,0.0368]);
Shape Shape358 = createNode("Shape");
Shape358.USE = "HAnimJointShape";
Transform357.children = new MFNode();

Transform357.children[0] = Shape358;

HAnimSegment355.children[1] = Transform357;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_midtarsal'/> to <HAnimJoint name='r_metatarsal'/>
Shape Shape359 = createNode("Shape");
LineSet LineSet360 = createNode("LineSet");
LineSet360.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate361 = createNode("Coordinate");
Coordinate361.point = new MFVec3f(new float[-0.1086,0.0001,0.0368,-0.1086,0,0.0762]);
LineSet360.coord = Coordinate361;

ColorRGBA ColorRGBA362 = createNode("ColorRGBA");
ColorRGBA362.USE = "HAnimSegmentLineColorRGBA";
LineSet360.color = ColorRGBA362;

Shape359.geometry = LineSet360;

HAnimSegment355.children[2] = Shape359;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_midtarsal'/> to <HAnimSite name='r_metatarsal_pha1'/>
Shape Shape363 = createNode("Shape");
LineSet LineSet364 = createNode("LineSet");
LineSet364.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate365 = createNode("Coordinate");
Coordinate365.point = new MFVec3f(new float[-0.1086,0.0001,0.0368,-0.0521,0.026,0.0127]);
LineSet364.coord = Coordinate365;

ColorRGBA ColorRGBA366 = createNode("ColorRGBA");
ColorRGBA366.USE = "HAnimSiteLineColorRGBA";
LineSet364.color = ColorRGBA366;

Shape363.geometry = LineSet364;

HAnimSegment355.children[3] = Shape363;

HAnimSite HAnimSite367 = createNode("HAnimSite");
HAnimSite367.name = "r_metatarsal_pha1_pt";
HAnimSite367.DEF = "hanim_r_metatarsal_pha1_pt";
HAnimSite367.translation = new SFVec3f(new float[-0.0521,0.026,0.0127]);
//HAnimSite visualization shape
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
HAnimJoint370.name = "r_metatarsal";
HAnimJoint370.DEF = "hanim_r_metatarsal";
HAnimJoint370.center = new SFVec3f(new float[-0.1086,0,0.0762]);
HAnimJoint370.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment371 = createNode("HAnimSegment");
HAnimSegment371.name = "r_forefoot";
HAnimSegment371.DEF = "hanim_r_forefoot";
//<HAnimJoint name='r_metatarsal'/> visualization sphere within <HAnimSegment name='r_forefoot'/>
TouchSensor TouchSensor372 = createNode("TouchSensor");
TouchSensor372.description = "HAnimJoint r_metatarsal, HAnimSegment r_forefoot";
HAnimSegment371.children = new MFNode();

HAnimSegment371.children[0] = TouchSensor372;

Transform Transform373 = createNode("Transform");
Transform373.translation = new SFVec3f(new float[-0.1086,0,0.0762]);
Shape Shape374 = createNode("Shape");
Shape374.USE = "HAnimJointShape";
Transform373.children = new MFNode();

Transform373.children[0] = Shape374;

HAnimSegment371.children[1] = Transform373;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_forefoot_tip'/>
Shape Shape375 = createNode("Shape");
LineSet LineSet376 = createNode("LineSet");
LineSet376.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate377 = createNode("Coordinate");
Coordinate377.point = new MFVec3f(new float[-0.1086,0,0.0762,-0.1043,0.0227,0.145]);
LineSet376.coord = Coordinate377;

ColorRGBA ColorRGBA378 = createNode("ColorRGBA");
ColorRGBA378.USE = "HAnimSiteLineColorRGBA";
LineSet376.color = ColorRGBA378;

Shape375.geometry = LineSet376;

HAnimSegment371.children[2] = Shape375;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_metatarsal_pha5'/>
Shape Shape379 = createNode("Shape");
LineSet LineSet380 = createNode("LineSet");
LineSet380.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate381 = createNode("Coordinate");
Coordinate381.point = new MFVec3f(new float[-0.1086,0,0.0762,-0.1523,0.0166,0.0895]);
LineSet380.coord = Coordinate381;

ColorRGBA ColorRGBA382 = createNode("ColorRGBA");
ColorRGBA382.USE = "HAnimSiteLineColorRGBA";
LineSet380.color = ColorRGBA382;

Shape379.geometry = LineSet380;

HAnimSegment371.children[3] = Shape379;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_digit2'/>
Shape Shape383 = createNode("Shape");
LineSet LineSet384 = createNode("LineSet");
LineSet384.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate385 = createNode("Coordinate");
Coordinate385.point = new MFVec3f(new float[-0.1086,0,0.0762,-0.0883,0.0134,0.1383]);
LineSet384.coord = Coordinate385;

ColorRGBA ColorRGBA386 = createNode("ColorRGBA");
ColorRGBA386.USE = "HAnimSiteLineColorRGBA";
LineSet384.color = ColorRGBA386;

Shape383.geometry = LineSet384;

HAnimSegment371.children[4] = Shape383;

HAnimSite HAnimSite387 = createNode("HAnimSite");
HAnimSite387.name = "r_forefoot_tip";
HAnimSite387.DEF = "hanim_r_forefoot_tip";
HAnimSite387.translation = new SFVec3f(new float[-0.1043,0.0227,0.145]);
//HAnimSite visualization shape
TouchSensor TouchSensor388 = createNode("TouchSensor");
TouchSensor388.description = "HAnimSite r_forefoot_tip";
HAnimSite387.children = new MFNode();

HAnimSite387.children[0] = TouchSensor388;

Shape Shape389 = createNode("Shape");
Shape389.USE = "HAnimSiteShape";
HAnimSite387.children[1] = Shape389;

HAnimSegment371.children[5] = HAnimSite387;

HAnimSite HAnimSite390 = createNode("HAnimSite");
HAnimSite390.name = "r_metatarsal_pha5_pt";
HAnimSite390.DEF = "hanim_r_metatarsal_pha5_pt";
HAnimSite390.translation = new SFVec3f(new float[-0.1523,0.0166,0.0895]);
//HAnimSite visualization shape
TouchSensor TouchSensor391 = createNode("TouchSensor");
TouchSensor391.description = "HAnimSite r_metatarsal_pha5";
HAnimSite390.children = new MFNode();

HAnimSite390.children[0] = TouchSensor391;

Shape Shape392 = createNode("Shape");
Shape392.USE = "HAnimSiteShape";
HAnimSite390.children[1] = Shape392;

HAnimSegment371.children[6] = HAnimSite390;

HAnimSite HAnimSite393 = createNode("HAnimSite");
HAnimSite393.name = "r_digit2_pt";
HAnimSite393.DEF = "hanim_r_digit2_pt";
HAnimSite393.translation = new SFVec3f(new float[-0.0883,0.0134,0.1383]);
//HAnimSite visualization shape
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
HAnimJoint396.name = "vl5";
HAnimJoint396.DEF = "hanim_vl5";
HAnimJoint396.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimJoint396.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment397 = createNode("HAnimSegment");
HAnimSegment397.name = "l5";
HAnimSegment397.DEF = "hanim_l5";
//<HAnimJoint name='vl5'/> visualization sphere within <HAnimSegment name='l5'/>
TouchSensor TouchSensor398 = createNode("TouchSensor");
TouchSensor398.description = "HAnimJoint vl5, HAnimSegment l5";
HAnimSegment397.children = new MFNode();

HAnimSegment397.children[0] = TouchSensor398;

Transform Transform399 = createNode("Transform");
Transform399.translation = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
Shape Shape400 = createNode("Shape");
Shape400.USE = "HAnimJointShape";
Transform399.children = new MFNode();

Transform399.children[0] = Shape400;

HAnimSegment397.children[1] = Transform399;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl5'/> to <HAnimJoint name='vl4'/>
Shape Shape401 = createNode("Shape");
LineSet LineSet402 = createNode("LineSet");
LineSet402.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate403 = createNode("Coordinate");
Coordinate403.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787]);
LineSet402.coord = Coordinate403;

ColorRGBA ColorRGBA404 = createNode("ColorRGBA");
ColorRGBA404.USE = "HAnimSegmentLineColorRGBA";
LineSet402.color = ColorRGBA404;

Shape401.geometry = LineSet402;

HAnimSegment397.children[2] = Shape401;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='waist_preferred_post'/>
Shape Shape405 = createNode("Shape");
LineSet LineSet406 = createNode("LineSet");
LineSet406.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate407 = createNode("Coordinate");
Coordinate407.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0,1.0915,-0.1091]);
LineSet406.coord = Coordinate407;

ColorRGBA ColorRGBA408 = createNode("ColorRGBA");
ColorRGBA408.USE = "HAnimSiteLineColorRGBA";
LineSet406.color = ColorRGBA408;

Shape405.geometry = LineSet406;

HAnimSegment397.children[3] = Shape405;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='navel'/>
Shape Shape409 = createNode("Shape");
LineSet LineSet410 = createNode("LineSet");
LineSet410.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate411 = createNode("Coordinate");
Coordinate411.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0069,1.0966,0.1017]);
LineSet410.coord = Coordinate411;

ColorRGBA ColorRGBA412 = createNode("ColorRGBA");
ColorRGBA412.USE = "HAnimSiteLineColorRGBA";
LineSet410.color = ColorRGBA412;

Shape409.geometry = LineSet410;

HAnimSegment397.children[4] = Shape409;

HAnimSite HAnimSite413 = createNode("HAnimSite");
HAnimSite413.name = "waist_preferred_post_pt";
HAnimSite413.DEF = "hanim_waist_preferred_post_pt";
HAnimSite413.translation = new SFVec3f(new float[0,1.0915,-0.1091]);
//HAnimSite visualization shape
TouchSensor TouchSensor414 = createNode("TouchSensor");
TouchSensor414.description = "HAnimSite waist_preferred_post";
HAnimSite413.children = new MFNode();

HAnimSite413.children[0] = TouchSensor414;

Shape Shape415 = createNode("Shape");
Shape415.USE = "HAnimSiteShape";
HAnimSite413.children[1] = Shape415;

HAnimSegment397.children[5] = HAnimSite413;

HAnimSite HAnimSite416 = createNode("HAnimSite");
HAnimSite416.name = "navel_pt";
HAnimSite416.DEF = "hanim_navel_pt";
HAnimSite416.translation = new SFVec3f(new float[0.0069,1.0966,0.1017]);
//HAnimSite visualization shape
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
HAnimJoint419.name = "vl4";
HAnimJoint419.DEF = "hanim_vl4";
HAnimJoint419.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
HAnimJoint419.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment420 = createNode("HAnimSegment");
HAnimSegment420.name = "l4";
HAnimSegment420.DEF = "hanim_l4";
//<HAnimJoint name='vl4'/> visualization sphere within <HAnimSegment name='l4'/>
TouchSensor TouchSensor421 = createNode("TouchSensor");
TouchSensor421.description = "HAnimJoint vl4, HAnimSegment l4";
HAnimSegment420.children = new MFNode();

HAnimSegment420.children[0] = TouchSensor421;

Transform Transform422 = createNode("Transform");
Transform422.translation = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
Shape Shape423 = createNode("Shape");
Shape423.USE = "HAnimJointShape";
Transform422.children = new MFNode();

Transform422.children[0] = Shape423;

HAnimSegment420.children[1] = Transform422;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl4'/> to <HAnimJoint name='vl3'/>
Shape Shape424 = createNode("Shape");
LineSet LineSet425 = createNode("LineSet");
LineSet425.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate426 = createNode("Coordinate");
Coordinate426.point = new MFVec3f(new float[0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796]);
LineSet425.coord = Coordinate426;

ColorRGBA ColorRGBA427 = createNode("ColorRGBA");
ColorRGBA427.USE = "HAnimSegmentLineColorRGBA";
LineSet425.color = ColorRGBA427;

Shape424.geometry = LineSet425;

HAnimSegment420.children[2] = Shape424;

HAnimJoint419.children = new MFNode();

HAnimJoint419.children[0] = HAnimSegment420;

HAnimJoint HAnimJoint428 = createNode("HAnimJoint");
HAnimJoint428.name = "vl3";
HAnimJoint428.DEF = "hanim_vl3";
HAnimJoint428.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimJoint428.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment429 = createNode("HAnimSegment");
HAnimSegment429.name = "l3";
HAnimSegment429.DEF = "hanim_l3";
//<HAnimJoint name='vl3'/> visualization sphere within <HAnimSegment name='l3'/>
TouchSensor TouchSensor430 = createNode("TouchSensor");
TouchSensor430.description = "HAnimJoint vl3, HAnimSegment l3";
HAnimSegment429.children = new MFNode();

HAnimSegment429.children[0] = TouchSensor430;

Transform Transform431 = createNode("Transform");
Transform431.translation = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
Shape Shape432 = createNode("Shape");
Shape432.USE = "HAnimJointShape";
Transform431.children = new MFNode();

Transform431.children[0] = Shape432;

HAnimSegment429.children[1] = Transform431;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl3'/> to <HAnimJoint name='vl2'/>
Shape Shape433 = createNode("Shape");
LineSet LineSet434 = createNode("LineSet");
LineSet434.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate435 = createNode("Coordinate");
Coordinate435.point = new MFVec3f(new float[0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08]);
LineSet434.coord = Coordinate435;

ColorRGBA ColorRGBA436 = createNode("ColorRGBA");
ColorRGBA436.USE = "HAnimSegmentLineColorRGBA";
LineSet434.color = ColorRGBA436;

Shape433.geometry = LineSet434;

HAnimSegment429.children[2] = Shape433;

HAnimJoint428.children = new MFNode();

HAnimJoint428.children[0] = HAnimSegment429;

HAnimJoint HAnimJoint437 = createNode("HAnimJoint");
HAnimJoint437.name = "vl2";
HAnimJoint437.DEF = "hanim_vl2";
HAnimJoint437.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
HAnimJoint437.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment438 = createNode("HAnimSegment");
HAnimSegment438.name = "l2";
HAnimSegment438.DEF = "hanim_l2";
//<HAnimJoint name='vl2'/> visualization sphere within <HAnimSegment name='l2'/>
TouchSensor TouchSensor439 = createNode("TouchSensor");
TouchSensor439.description = "HAnimJoint vl2, HAnimSegment l2";
HAnimSegment438.children = new MFNode();

HAnimSegment438.children[0] = TouchSensor439;

Transform Transform440 = createNode("Transform");
Transform440.translation = new SFVec3f(new float[0.0045,1.1546,-0.08]);
Shape Shape441 = createNode("Shape");
Shape441.USE = "HAnimJointShape";
Transform440.children = new MFNode();

Transform440.children[0] = Shape441;

HAnimSegment438.children[1] = Transform440;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl2'/> to <HAnimJoint name='vl1'/>
Shape Shape442 = createNode("Shape");
LineSet LineSet443 = createNode("LineSet");
LineSet443.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate444 = createNode("Coordinate");
Coordinate444.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805]);
LineSet443.coord = Coordinate444;

ColorRGBA ColorRGBA445 = createNode("ColorRGBA");
ColorRGBA445.USE = "HAnimSegmentLineColorRGBA";
LineSet443.color = ColorRGBA445;

Shape442.geometry = LineSet443;

HAnimSegment438.children[2] = Shape442;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='r_rib10'/>
Shape Shape446 = createNode("Shape");
LineSet LineSet447 = createNode("LineSet");
LineSet447.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate448 = createNode("Coordinate");
Coordinate448.point = new MFVec3f(new float[0.0045,1.1546,-0.08,-0.0711,1.1941,0.1016]);
LineSet447.coord = Coordinate448;

ColorRGBA ColorRGBA449 = createNode("ColorRGBA");
ColorRGBA449.USE = "HAnimSiteLineColorRGBA";
LineSet447.color = ColorRGBA449;

Shape446.geometry = LineSet447;

HAnimSegment438.children[3] = Shape446;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='l_rib10'/>
Shape Shape450 = createNode("Shape");
LineSet LineSet451 = createNode("LineSet");
LineSet451.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate452 = createNode("Coordinate");
Coordinate452.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0871,1.1925,0.0992]);
LineSet451.coord = Coordinate452;

ColorRGBA ColorRGBA453 = createNode("ColorRGBA");
ColorRGBA453.USE = "HAnimSiteLineColorRGBA";
LineSet451.color = ColorRGBA453;

Shape450.geometry = LineSet451;

HAnimSegment438.children[4] = Shape450;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='rib10_midspine'/>
Shape Shape454 = createNode("Shape");
LineSet LineSet455 = createNode("LineSet");
LineSet455.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate456 = createNode("Coordinate");
Coordinate456.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0049,1.1908,-0.1113]);
LineSet455.coord = Coordinate456;

ColorRGBA ColorRGBA457 = createNode("ColorRGBA");
ColorRGBA457.USE = "HAnimSiteLineColorRGBA";
LineSet455.color = ColorRGBA457;

Shape454.geometry = LineSet455;

HAnimSegment438.children[5] = Shape454;

HAnimSite HAnimSite458 = createNode("HAnimSite");
HAnimSite458.name = "r_rib10_pt";
HAnimSite458.DEF = "hanim_r_rib10_pt";
HAnimSite458.translation = new SFVec3f(new float[-0.0711,1.1941,0.1016]);
//HAnimSite visualization shape
TouchSensor TouchSensor459 = createNode("TouchSensor");
TouchSensor459.description = "HAnimSite r_rib10";
HAnimSite458.children = new MFNode();

HAnimSite458.children[0] = TouchSensor459;

Shape Shape460 = createNode("Shape");
Shape460.USE = "HAnimSiteShape";
HAnimSite458.children[1] = Shape460;

HAnimSegment438.children[6] = HAnimSite458;

HAnimSite HAnimSite461 = createNode("HAnimSite");
HAnimSite461.name = "l_rib10_pt";
HAnimSite461.DEF = "hanim_l_rib10_pt";
HAnimSite461.translation = new SFVec3f(new float[0.0871,1.1925,0.0992]);
//HAnimSite visualization shape
TouchSensor TouchSensor462 = createNode("TouchSensor");
TouchSensor462.description = "HAnimSite l_rib10";
HAnimSite461.children = new MFNode();

HAnimSite461.children[0] = TouchSensor462;

Shape Shape463 = createNode("Shape");
Shape463.USE = "HAnimSiteShape";
HAnimSite461.children[1] = Shape463;

HAnimSegment438.children[7] = HAnimSite461;

HAnimSite HAnimSite464 = createNode("HAnimSite");
HAnimSite464.name = "rib10_midspine_pt";
HAnimSite464.DEF = "hanim_rib10_midspine_pt";
HAnimSite464.translation = new SFVec3f(new float[0.0049,1.1908,-0.1113]);
//HAnimSite visualization shape
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
HAnimJoint467.name = "vl1";
HAnimJoint467.DEF = "hanim_vl1";
HAnimJoint467.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimJoint467.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment468 = createNode("HAnimSegment");
HAnimSegment468.name = "l1";
HAnimSegment468.DEF = "hanim_l1";
//<HAnimJoint name='vl1'/> visualization sphere within <HAnimSegment name='l1'/>
TouchSensor TouchSensor469 = createNode("TouchSensor");
TouchSensor469.description = "HAnimJoint vl1, HAnimSegment l1";
HAnimSegment468.children = new MFNode();

HAnimSegment468.children[0] = TouchSensor469;

Transform Transform470 = createNode("Transform");
Transform470.translation = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
Shape Shape471 = createNode("Shape");
Shape471.USE = "HAnimJointShape";
Transform470.children = new MFNode();

Transform470.children[0] = Shape471;

HAnimSegment468.children[1] = Transform470;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl1'/> to <HAnimJoint name='vt12'/>
Shape Shape472 = createNode("Shape");
LineSet LineSet473 = createNode("LineSet");
LineSet473.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate474 = createNode("Coordinate");
Coordinate474.point = new MFVec3f(new float[0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808]);
LineSet473.coord = Coordinate474;

ColorRGBA ColorRGBA475 = createNode("ColorRGBA");
ColorRGBA475.USE = "HAnimSegmentLineColorRGBA";
LineSet473.color = ColorRGBA475;

Shape472.geometry = LineSet473;

HAnimSegment468.children[2] = Shape472;

HAnimJoint467.children = new MFNode();

HAnimJoint467.children[0] = HAnimSegment468;

HAnimJoint HAnimJoint476 = createNode("HAnimJoint");
HAnimJoint476.name = "vt12";
HAnimJoint476.DEF = "hanim_vt12";
HAnimJoint476.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
HAnimJoint476.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment477 = createNode("HAnimSegment");
HAnimSegment477.name = "t12";
HAnimSegment477.DEF = "hanim_t12";
//<HAnimJoint name='vt12'/> visualization sphere within <HAnimSegment name='t12'/>
TouchSensor TouchSensor478 = createNode("TouchSensor");
TouchSensor478.description = "HAnimJoint vt12, HAnimSegment t12";
HAnimSegment477.children = new MFNode();

HAnimSegment477.children[0] = TouchSensor478;

Transform Transform479 = createNode("Transform");
Transform479.translation = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
Shape Shape480 = createNode("Shape");
Shape480.USE = "HAnimJointShape";
Transform479.children = new MFNode();

Transform479.children[0] = Shape480;

HAnimSegment477.children[1] = Transform479;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt12'/> to <HAnimJoint name='vt11'/>
Shape Shape481 = createNode("Shape");
LineSet LineSet482 = createNode("LineSet");
LineSet482.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate483 = createNode("Coordinate");
Coordinate483.point = new MFVec3f(new float[0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081]);
LineSet482.coord = Coordinate483;

ColorRGBA ColorRGBA484 = createNode("ColorRGBA");
ColorRGBA484.USE = "HAnimSegmentLineColorRGBA";
LineSet482.color = ColorRGBA484;

Shape481.geometry = LineSet482;

HAnimSegment477.children[2] = Shape481;

HAnimJoint476.children = new MFNode();

HAnimJoint476.children[0] = HAnimSegment477;

HAnimJoint HAnimJoint485 = createNode("HAnimJoint");
HAnimJoint485.name = "vt11";
HAnimJoint485.DEF = "hanim_vt11";
HAnimJoint485.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
HAnimJoint485.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment486 = createNode("HAnimSegment");
HAnimSegment486.name = "t11";
HAnimSegment486.DEF = "hanim_t11";
//<HAnimJoint name='vt11'/> visualization sphere within <HAnimSegment name='t11'/>
TouchSensor TouchSensor487 = createNode("TouchSensor");
TouchSensor487.description = "HAnimJoint vt11, HAnimSegment t11";
HAnimSegment486.children = new MFNode();

HAnimSegment486.children[0] = TouchSensor487;

Transform Transform488 = createNode("Transform");
Transform488.translation = new SFVec3f(new float[0.0053,1.2679,-0.081]);
Shape Shape489 = createNode("Shape");
Shape489.USE = "HAnimJointShape";
Transform488.children = new MFNode();

Transform488.children[0] = Shape489;

HAnimSegment486.children[1] = Transform488;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt11'/> to <HAnimJoint name='vt10'/>
Shape Shape490 = createNode("Shape");
LineSet LineSet491 = createNode("LineSet");
LineSet491.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate492 = createNode("Coordinate");
Coordinate492.point = new MFVec3f(new float[0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822]);
LineSet491.coord = Coordinate492;

ColorRGBA ColorRGBA493 = createNode("ColorRGBA");
ColorRGBA493.USE = "HAnimSegmentLineColorRGBA";
LineSet491.color = ColorRGBA493;

Shape490.geometry = LineSet491;

HAnimSegment486.children[2] = Shape490;

HAnimJoint485.children = new MFNode();

HAnimJoint485.children[0] = HAnimSegment486;

HAnimJoint HAnimJoint494 = createNode("HAnimJoint");
HAnimJoint494.name = "vt10";
HAnimJoint494.DEF = "hanim_vt10";
HAnimJoint494.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimJoint494.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment495 = createNode("HAnimSegment");
HAnimSegment495.name = "t10";
HAnimSegment495.DEF = "hanim_t10";
//<HAnimJoint name='vt10'/> visualization sphere within <HAnimSegment name='t10'/>
TouchSensor TouchSensor496 = createNode("TouchSensor");
TouchSensor496.description = "HAnimJoint vt10, HAnimSegment t10";
HAnimSegment495.children = new MFNode();

HAnimSegment495.children[0] = TouchSensor496;

Transform Transform497 = createNode("Transform");
Transform497.translation = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
Shape Shape498 = createNode("Shape");
Shape498.USE = "HAnimJointShape";
Transform497.children = new MFNode();

Transform497.children[0] = Shape498;

HAnimSegment495.children[1] = Transform497;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt10'/> to <HAnimJoint name='vt9'/>
Shape Shape499 = createNode("Shape");
LineSet LineSet500 = createNode("LineSet");
LineSet500.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate501 = createNode("Coordinate");
Coordinate501.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838]);
LineSet500.coord = Coordinate501;

ColorRGBA ColorRGBA502 = createNode("ColorRGBA");
ColorRGBA502.USE = "HAnimSegmentLineColorRGBA";
LineSet500.color = ColorRGBA502;

Shape499.geometry = LineSet500;

HAnimSegment495.children[2] = Shape499;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt10'/> to <HAnimSite name='substernale'/>
Shape Shape503 = createNode("Shape");
LineSet LineSet504 = createNode("LineSet");
LineSet504.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate505 = createNode("Coordinate");
Coordinate505.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0085,1.2995,0.1147]);
LineSet504.coord = Coordinate505;

ColorRGBA ColorRGBA506 = createNode("ColorRGBA");
ColorRGBA506.USE = "HAnimSiteLineColorRGBA";
LineSet504.color = ColorRGBA506;

Shape503.geometry = LineSet504;

HAnimSegment495.children[3] = Shape503;

HAnimSite HAnimSite507 = createNode("HAnimSite");
HAnimSite507.name = "substernale_pt";
HAnimSite507.DEF = "hanim_substernale_pt";
HAnimSite507.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
//HAnimSite visualization shape
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
HAnimJoint510.name = "vt9";
HAnimJoint510.DEF = "hanim_vt9";
HAnimJoint510.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
HAnimJoint510.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment511 = createNode("HAnimSegment");
HAnimSegment511.name = "t9";
HAnimSegment511.DEF = "hanim_t9";
//<HAnimJoint name='vt9'/> visualization sphere within <HAnimSegment name='t9'/>
TouchSensor TouchSensor512 = createNode("TouchSensor");
TouchSensor512.description = "HAnimJoint vt9, HAnimSegment t9";
HAnimSegment511.children = new MFNode();

HAnimSegment511.children[0] = TouchSensor512;

Transform Transform513 = createNode("Transform");
Transform513.translation = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
Shape Shape514 = createNode("Shape");
Shape514.USE = "HAnimJointShape";
Transform513.children = new MFNode();

Transform513.children[0] = Shape514;

HAnimSegment511.children[1] = Transform513;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt9'/> to <HAnimJoint name='vt8'/>
Shape Shape515 = createNode("Shape");
LineSet LineSet516 = createNode("LineSet");
LineSet516.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate517 = createNode("Coordinate");
Coordinate517.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845]);
LineSet516.coord = Coordinate517;

ColorRGBA ColorRGBA518 = createNode("ColorRGBA");
ColorRGBA518.USE = "HAnimSegmentLineColorRGBA";
LineSet516.color = ColorRGBA518;

Shape515.geometry = LineSet516;

HAnimSegment511.children[2] = Shape515;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='r_thelion'/>
Shape Shape519 = createNode("Shape");
LineSet LineSet520 = createNode("LineSet");
LineSet520.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate521 = createNode("Coordinate");
Coordinate521.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,-0.0736,1.3385,0.1217]);
LineSet520.coord = Coordinate521;

ColorRGBA ColorRGBA522 = createNode("ColorRGBA");
ColorRGBA522.USE = "HAnimSiteLineColorRGBA";
LineSet520.color = ColorRGBA522;

Shape519.geometry = LineSet520;

HAnimSegment511.children[3] = Shape519;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='l_thelion'/>
Shape Shape523 = createNode("Shape");
LineSet LineSet524 = createNode("LineSet");
LineSet524.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate525 = createNode("Coordinate");
Coordinate525.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0918,1.3382,0.1192]);
LineSet524.coord = Coordinate525;

ColorRGBA ColorRGBA526 = createNode("ColorRGBA");
ColorRGBA526.USE = "HAnimSiteLineColorRGBA";
LineSet524.color = ColorRGBA526;

Shape523.geometry = LineSet524;

HAnimSegment511.children[4] = Shape523;

HAnimSite HAnimSite527 = createNode("HAnimSite");
HAnimSite527.name = "r_thelion_pt";
HAnimSite527.DEF = "hanim_r_thelion_pt";
HAnimSite527.translation = new SFVec3f(new float[-0.0736,1.3385,0.1217]);
//HAnimSite visualization shape
TouchSensor TouchSensor528 = createNode("TouchSensor");
TouchSensor528.description = "HAnimSite r_thelion";
HAnimSite527.children = new MFNode();

HAnimSite527.children[0] = TouchSensor528;

Shape Shape529 = createNode("Shape");
Shape529.USE = "HAnimSiteShape";
HAnimSite527.children[1] = Shape529;

HAnimSegment511.children[5] = HAnimSite527;

HAnimSite HAnimSite530 = createNode("HAnimSite");
HAnimSite530.name = "l_thelion_pt";
HAnimSite530.DEF = "hanim_l_thelion_pt";
HAnimSite530.translation = new SFVec3f(new float[0.0918,1.3382,0.1192]);
//HAnimSite visualization shape
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
HAnimJoint533.name = "vt8";
HAnimJoint533.DEF = "hanim_vt8";
HAnimJoint533.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
HAnimJoint533.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment534 = createNode("HAnimSegment");
HAnimSegment534.name = "t8";
HAnimSegment534.DEF = "hanim_t8";
//<HAnimJoint name='vt8'/> visualization sphere within <HAnimSegment name='t8'/>
TouchSensor TouchSensor535 = createNode("TouchSensor");
TouchSensor535.description = "HAnimJoint vt8, HAnimSegment t8";
HAnimSegment534.children = new MFNode();

HAnimSegment534.children[0] = TouchSensor535;

Transform Transform536 = createNode("Transform");
Transform536.translation = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
Shape Shape537 = createNode("Shape");
Shape537.USE = "HAnimJointShape";
Transform536.children = new MFNode();

Transform536.children[0] = Shape537;

HAnimSegment534.children[1] = Transform536;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt8'/> to <HAnimJoint name='vt7'/>
Shape Shape538 = createNode("Shape");
LineSet LineSet539 = createNode("LineSet");
LineSet539.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate540 = createNode("Coordinate");
Coordinate540.point = new MFVec3f(new float[0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833]);
LineSet539.coord = Coordinate540;

ColorRGBA ColorRGBA541 = createNode("ColorRGBA");
ColorRGBA541.USE = "HAnimSegmentLineColorRGBA";
LineSet539.color = ColorRGBA541;

Shape538.geometry = LineSet539;

HAnimSegment534.children[2] = Shape538;

HAnimJoint533.children = new MFNode();

HAnimJoint533.children[0] = HAnimSegment534;

HAnimJoint HAnimJoint542 = createNode("HAnimJoint");
HAnimJoint542.name = "vt7";
HAnimJoint542.DEF = "hanim_vt7";
HAnimJoint542.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
HAnimJoint542.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment543 = createNode("HAnimSegment");
HAnimSegment543.name = "t7";
HAnimSegment543.DEF = "hanim_t7";
//<HAnimJoint name='vt7'/> visualization sphere within <HAnimSegment name='t7'/>
TouchSensor TouchSensor544 = createNode("TouchSensor");
TouchSensor544.description = "HAnimJoint vt7, HAnimSegment t7";
HAnimSegment543.children = new MFNode();

HAnimSegment543.children[0] = TouchSensor544;

Transform Transform545 = createNode("Transform");
Transform545.translation = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
Shape Shape546 = createNode("Shape");
Shape546.USE = "HAnimJointShape";
Transform545.children = new MFNode();

Transform545.children[0] = Shape546;

HAnimSegment543.children[1] = Transform545;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt7'/> to <HAnimJoint name='vt6'/>
Shape Shape547 = createNode("Shape");
LineSet LineSet548 = createNode("LineSet");
LineSet548.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate549 = createNode("Coordinate");
Coordinate549.point = new MFVec3f(new float[0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08]);
LineSet548.coord = Coordinate549;

ColorRGBA ColorRGBA550 = createNode("ColorRGBA");
ColorRGBA550.USE = "HAnimSegmentLineColorRGBA";
LineSet548.color = ColorRGBA550;

Shape547.geometry = LineSet548;

HAnimSegment543.children[2] = Shape547;

HAnimJoint542.children = new MFNode();

HAnimJoint542.children[0] = HAnimSegment543;

HAnimJoint HAnimJoint551 = createNode("HAnimJoint");
HAnimJoint551.name = "vt6";
HAnimJoint551.DEF = "hanim_vt6";
HAnimJoint551.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimJoint551.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment552 = createNode("HAnimSegment");
HAnimSegment552.name = "t6";
HAnimSegment552.DEF = "hanim_t6";
//<HAnimJoint name='vt6'/> visualization sphere within <HAnimSegment name='t6'/>
TouchSensor TouchSensor553 = createNode("TouchSensor");
TouchSensor553.description = "HAnimJoint vt6, HAnimSegment t6";
HAnimSegment552.children = new MFNode();

HAnimSegment552.children[0] = TouchSensor553;

Transform Transform554 = createNode("Transform");
Transform554.translation = new SFVec3f(new float[0.0059,1.3866,-0.08]);
Shape Shape555 = createNode("Shape");
Shape555.USE = "HAnimJointShape";
Transform554.children = new MFNode();

Transform554.children[0] = Shape555;

HAnimSegment552.children[1] = Transform554;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt6'/> to <HAnimJoint name='vt5'/>
Shape Shape556 = createNode("Shape");
LineSet LineSet557 = createNode("LineSet");
LineSet557.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate558 = createNode("Coordinate");
Coordinate558.point = new MFVec3f(new float[0.0059,1.3866,-0.08,0.006,1.4102,-0.0745]);
LineSet557.coord = Coordinate558;

ColorRGBA ColorRGBA559 = createNode("ColorRGBA");
ColorRGBA559.USE = "HAnimSegmentLineColorRGBA";
LineSet557.color = ColorRGBA559;

Shape556.geometry = LineSet557;

HAnimSegment552.children[2] = Shape556;

HAnimJoint551.children = new MFNode();

HAnimJoint551.children[0] = HAnimSegment552;

HAnimJoint HAnimJoint560 = createNode("HAnimJoint");
HAnimJoint560.name = "vt5";
HAnimJoint560.DEF = "hanim_vt5";
HAnimJoint560.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
HAnimJoint560.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment561 = createNode("HAnimSegment");
HAnimSegment561.name = "t5";
HAnimSegment561.DEF = "hanim_t5";
//<HAnimJoint name='vt5'/> visualization sphere within <HAnimSegment name='t5'/>
TouchSensor TouchSensor562 = createNode("TouchSensor");
TouchSensor562.description = "HAnimJoint vt5, HAnimSegment t5";
HAnimSegment561.children = new MFNode();

HAnimSegment561.children[0] = TouchSensor562;

Transform Transform563 = createNode("Transform");
Transform563.translation = new SFVec3f(new float[0.006,1.4102,-0.0745]);
Shape Shape564 = createNode("Shape");
Shape564.USE = "HAnimJointShape";
Transform563.children = new MFNode();

Transform563.children[0] = Shape564;

HAnimSegment561.children[1] = Transform563;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt5'/> to <HAnimJoint name='vt4'/>
Shape Shape565 = createNode("Shape");
LineSet LineSet566 = createNode("LineSet");
LineSet566.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate567 = createNode("Coordinate");
Coordinate567.point = new MFVec3f(new float[0.006,1.4102,-0.0745,0.0061,1.432,-0.0675]);
LineSet566.coord = Coordinate567;

ColorRGBA ColorRGBA568 = createNode("ColorRGBA");
ColorRGBA568.USE = "HAnimSegmentLineColorRGBA";
LineSet566.color = ColorRGBA568;

Shape565.geometry = LineSet566;

HAnimSegment561.children[2] = Shape565;

HAnimJoint560.children = new MFNode();

HAnimJoint560.children[0] = HAnimSegment561;

HAnimJoint HAnimJoint569 = createNode("HAnimJoint");
HAnimJoint569.name = "vt4";
HAnimJoint569.DEF = "hanim_vt4";
HAnimJoint569.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
HAnimJoint569.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment570 = createNode("HAnimSegment");
HAnimSegment570.name = "t4";
HAnimSegment570.DEF = "hanim_t4";
//<HAnimJoint name='vt4'/> visualization sphere within <HAnimSegment name='t4'/>
TouchSensor TouchSensor571 = createNode("TouchSensor");
TouchSensor571.description = "HAnimJoint vt4, HAnimSegment t4";
HAnimSegment570.children = new MFNode();

HAnimSegment570.children[0] = TouchSensor571;

Transform Transform572 = createNode("Transform");
Transform572.translation = new SFVec3f(new float[0.0061,1.432,-0.0675]);
Shape Shape573 = createNode("Shape");
Shape573.USE = "HAnimJointShape";
Transform572.children = new MFNode();

Transform572.children[0] = Shape573;

HAnimSegment570.children[1] = Transform572;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt4'/> to <HAnimJoint name='vt3'/>
Shape Shape574 = createNode("Shape");
LineSet LineSet575 = createNode("LineSet");
LineSet575.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate576 = createNode("Coordinate");
Coordinate576.point = new MFVec3f(new float[0.0061,1.432,-0.0675,0.0062,1.4583,-0.057]);
LineSet575.coord = Coordinate576;

ColorRGBA ColorRGBA577 = createNode("ColorRGBA");
ColorRGBA577.USE = "HAnimSegmentLineColorRGBA";
LineSet575.color = ColorRGBA577;

Shape574.geometry = LineSet575;

HAnimSegment570.children[2] = Shape574;

HAnimJoint569.children = new MFNode();

HAnimJoint569.children[0] = HAnimSegment570;

HAnimJoint HAnimJoint578 = createNode("HAnimJoint");
HAnimJoint578.name = "vt3";
HAnimJoint578.DEF = "hanim_vt3";
HAnimJoint578.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
HAnimJoint578.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment579 = createNode("HAnimSegment");
HAnimSegment579.name = "t3";
HAnimSegment579.DEF = "hanim_t3";
//<HAnimJoint name='vt3'/> visualization sphere within <HAnimSegment name='t3'/>
TouchSensor TouchSensor580 = createNode("TouchSensor");
TouchSensor580.description = "HAnimJoint vt3, HAnimSegment t3";
HAnimSegment579.children = new MFNode();

HAnimSegment579.children[0] = TouchSensor580;

Transform Transform581 = createNode("Transform");
Transform581.translation = new SFVec3f(new float[0.0062,1.4583,-0.057]);
Shape Shape582 = createNode("Shape");
Shape582.USE = "HAnimJointShape";
Transform581.children = new MFNode();

Transform581.children[0] = Shape582;

HAnimSegment579.children[1] = Transform581;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt3'/> to <HAnimJoint name='vt2'/>
Shape Shape583 = createNode("Shape");
LineSet LineSet584 = createNode("LineSet");
LineSet584.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate585 = createNode("Coordinate");
Coordinate585.point = new MFVec3f(new float[0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484]);
LineSet584.coord = Coordinate585;

ColorRGBA ColorRGBA586 = createNode("ColorRGBA");
ColorRGBA586.USE = "HAnimSegmentLineColorRGBA";
LineSet584.color = ColorRGBA586;

Shape583.geometry = LineSet584;

HAnimSegment579.children[2] = Shape583;

HAnimJoint578.children = new MFNode();

HAnimJoint578.children[0] = HAnimSegment579;

HAnimJoint HAnimJoint587 = createNode("HAnimJoint");
HAnimJoint587.name = "vt2";
HAnimJoint587.DEF = "hanim_vt2";
HAnimJoint587.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
HAnimJoint587.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment588 = createNode("HAnimSegment");
HAnimSegment588.name = "t2";
HAnimSegment588.DEF = "hanim_t2";
//<HAnimJoint name='vt2'/> visualization sphere within <HAnimSegment name='t2'/>
TouchSensor TouchSensor589 = createNode("TouchSensor");
TouchSensor589.description = "HAnimJoint vt2, HAnimSegment t2";
HAnimSegment588.children = new MFNode();

HAnimSegment588.children[0] = TouchSensor589;

Transform Transform590 = createNode("Transform");
Transform590.translation = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
Shape Shape591 = createNode("Shape");
Shape591.USE = "HAnimJointShape";
Transform590.children = new MFNode();

Transform590.children[0] = Shape591;

HAnimSegment588.children[1] = Transform590;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt2'/> to <HAnimJoint name='vt1'/>
Shape Shape592 = createNode("Shape");
LineSet LineSet593 = createNode("LineSet");
LineSet593.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate594 = createNode("Coordinate");
Coordinate594.point = new MFVec3f(new float[0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387]);
LineSet593.coord = Coordinate594;

ColorRGBA ColorRGBA595 = createNode("ColorRGBA");
ColorRGBA595.USE = "HAnimSegmentLineColorRGBA";
LineSet593.color = ColorRGBA595;

Shape592.geometry = LineSet593;

HAnimSegment588.children[2] = Shape592;

HAnimJoint587.children = new MFNode();

HAnimJoint587.children[0] = HAnimSegment588;

HAnimJoint HAnimJoint596 = createNode("HAnimJoint");
HAnimJoint596.name = "vt1";
HAnimJoint596.DEF = "hanim_vt1";
HAnimJoint596.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimJoint596.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment597 = createNode("HAnimSegment");
HAnimSegment597.name = "t1";
HAnimSegment597.DEF = "hanim_t1";
//<HAnimJoint name='vt1'/> visualization sphere within <HAnimSegment name='t1'/>
TouchSensor TouchSensor598 = createNode("TouchSensor");
TouchSensor598.description = "HAnimJoint vt1, HAnimSegment t1";
HAnimSegment597.children = new MFNode();

HAnimSegment597.children[0] = TouchSensor598;

Transform Transform599 = createNode("Transform");
Transform599.translation = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
Shape Shape600 = createNode("Shape");
Shape600.USE = "HAnimJointShape";
Transform599.children = new MFNode();

Transform599.children[0] = Shape600;

HAnimSegment597.children[1] = Transform599;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='vc7'/>
Shape Shape601 = createNode("Shape");
LineSet LineSet602 = createNode("LineSet");
LineSet602.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate603 = createNode("Coordinate");
Coordinate603.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301]);
LineSet602.coord = Coordinate603;

ColorRGBA ColorRGBA604 = createNode("ColorRGBA");
ColorRGBA604.USE = "HAnimSegmentLineColorRGBA";
LineSet602.color = ColorRGBA604;

Shape601.geometry = LineSet602;

HAnimSegment597.children[2] = Shape601;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='l_sternoclavicular'/>
Shape Shape605 = createNode("Shape");
LineSet LineSet606 = createNode("LineSet");
LineSet606.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate607 = createNode("Coordinate");
Coordinate607.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]);
LineSet606.coord = Coordinate607;

ColorRGBA ColorRGBA608 = createNode("ColorRGBA");
ColorRGBA608.USE = "HAnimSegmentLineColorRGBA";
LineSet606.color = ColorRGBA608;

Shape605.geometry = LineSet606;

HAnimSegment597.children[3] = Shape605;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='r_sternoclavicular'/>
Shape Shape609 = createNode("Shape");
LineSet LineSet610 = createNode("LineSet");
LineSet610.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate611 = createNode("Coordinate");
Coordinate611.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,-0.082,1.4488,-0.0353]);
LineSet610.coord = Coordinate611;

ColorRGBA ColorRGBA612 = createNode("ColorRGBA");
ColorRGBA612.USE = "HAnimSegmentLineColorRGBA";
LineSet610.color = ColorRGBA612;

Shape609.geometry = LineSet610;

HAnimSegment597.children[4] = Shape609;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='suprasternale'/>
Shape Shape613 = createNode("Shape");
LineSet LineSet614 = createNode("LineSet");
LineSet614.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate615 = createNode("Coordinate");
Coordinate615.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0084,1.4714,0.0551]);
LineSet614.coord = Coordinate615;

ColorRGBA ColorRGBA616 = createNode("ColorRGBA");
ColorRGBA616.USE = "HAnimSiteLineColorRGBA";
LineSet614.color = ColorRGBA616;

Shape613.geometry = LineSet614;

HAnimSegment597.children[5] = Shape613;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='cervicale'/>
Shape Shape617 = createNode("Shape");
LineSet LineSet618 = createNode("LineSet");
LineSet618.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate619 = createNode("Coordinate");
Coordinate619.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0064,1.52,-0.0815]);
LineSet618.coord = Coordinate619;

ColorRGBA ColorRGBA620 = createNode("ColorRGBA");
ColorRGBA620.USE = "HAnimSiteLineColorRGBA";
LineSet618.color = ColorRGBA620;

Shape617.geometry = LineSet618;

HAnimSegment597.children[6] = Shape617;

HAnimSite HAnimSite621 = createNode("HAnimSite");
HAnimSite621.name = "suprasternale_pt";
HAnimSite621.DEF = "hanim_suprasternale_pt";
HAnimSite621.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
//HAnimSite visualization shape
TouchSensor TouchSensor622 = createNode("TouchSensor");
TouchSensor622.description = "HAnimSite suprasternale";
HAnimSite621.children = new MFNode();

HAnimSite621.children[0] = TouchSensor622;

Shape Shape623 = createNode("Shape");
Shape623.USE = "HAnimSiteShape";
HAnimSite621.children[1] = Shape623;

HAnimSegment597.children[7] = HAnimSite621;

HAnimSite HAnimSite624 = createNode("HAnimSite");
HAnimSite624.name = "cervicale_pt";
HAnimSite624.DEF = "hanim_cervicale_pt";
HAnimSite624.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
//HAnimSite visualization shape
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
HAnimJoint627.name = "vc7";
HAnimJoint627.DEF = "hanim_vc7";
HAnimJoint627.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
HAnimJoint627.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment628 = createNode("HAnimSegment");
HAnimSegment628.name = "c7";
HAnimSegment628.DEF = "hanim_c7";
//<HAnimJoint name='vc7'/> visualization sphere within <HAnimSegment name='c7'/>
TouchSensor TouchSensor629 = createNode("TouchSensor");
TouchSensor629.description = "HAnimJoint vc7, HAnimSegment c7";
HAnimSegment628.children = new MFNode();

HAnimSegment628.children[0] = TouchSensor629;

Transform Transform630 = createNode("Transform");
Transform630.translation = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
Shape Shape631 = createNode("Shape");
Shape631.USE = "HAnimJointShape";
Transform630.children = new MFNode();

Transform630.children[0] = Shape631;

HAnimSegment628.children[1] = Transform630;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc7'/> to <HAnimJoint name='vc6'/>
Shape Shape632 = createNode("Shape");
LineSet LineSet633 = createNode("LineSet");
LineSet633.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate634 = createNode("Coordinate");
Coordinate634.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143]);
LineSet633.coord = Coordinate634;

ColorRGBA ColorRGBA635 = createNode("ColorRGBA");
ColorRGBA635.USE = "HAnimSegmentLineColorRGBA";
LineSet633.color = ColorRGBA635;

Shape632.geometry = LineSet633;

HAnimSegment628.children[2] = Shape632;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='r_neck_base'/>
Shape Shape636 = createNode("Shape");
LineSet LineSet637 = createNode("LineSet");
LineSet637.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate638 = createNode("Coordinate");
Coordinate638.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,-0.0419,1.5149,-0.022]);
LineSet637.coord = Coordinate638;

ColorRGBA ColorRGBA639 = createNode("ColorRGBA");
ColorRGBA639.USE = "HAnimSiteLineColorRGBA";
LineSet637.color = ColorRGBA639;

Shape636.geometry = LineSet637;

HAnimSegment628.children[3] = Shape636;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='l_neck_base'/>
Shape Shape640 = createNode("Shape");
LineSet LineSet641 = createNode("LineSet");
LineSet641.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate642 = createNode("Coordinate");
Coordinate642.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0646,1.5141,-0.038]);
LineSet641.coord = Coordinate642;

ColorRGBA ColorRGBA643 = createNode("ColorRGBA");
ColorRGBA643.USE = "HAnimSiteLineColorRGBA";
LineSet641.color = ColorRGBA643;

Shape640.geometry = LineSet641;

HAnimSegment628.children[4] = Shape640;

HAnimSite HAnimSite644 = createNode("HAnimSite");
HAnimSite644.name = "r_neck_base_pt";
HAnimSite644.DEF = "hanim_r_neck_base_pt";
HAnimSite644.translation = new SFVec3f(new float[-0.0419,1.5149,-0.022]);
//HAnimSite visualization shape
TouchSensor TouchSensor645 = createNode("TouchSensor");
TouchSensor645.description = "HAnimSite r_neck_base";
HAnimSite644.children = new MFNode();

HAnimSite644.children[0] = TouchSensor645;

Shape Shape646 = createNode("Shape");
Shape646.USE = "HAnimSiteShape";
HAnimSite644.children[1] = Shape646;

HAnimSegment628.children[5] = HAnimSite644;

HAnimSite HAnimSite647 = createNode("HAnimSite");
HAnimSite647.name = "l_neck_base_pt";
HAnimSite647.DEF = "hanim_l_neck_base_pt";
HAnimSite647.translation = new SFVec3f(new float[0.0646,1.5141,-0.038]);
//HAnimSite visualization shape
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
HAnimJoint650.name = "vc6";
HAnimJoint650.DEF = "hanim_vc6";
HAnimJoint650.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
HAnimJoint650.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment651 = createNode("HAnimSegment");
HAnimSegment651.name = "c6";
HAnimSegment651.DEF = "hanim_c6";
//<HAnimJoint name='vc6'/> visualization sphere within <HAnimSegment name='c6'/>
TouchSensor TouchSensor652 = createNode("TouchSensor");
TouchSensor652.description = "HAnimJoint vc6, HAnimSegment c6";
HAnimSegment651.children = new MFNode();

HAnimSegment651.children[0] = TouchSensor652;

Transform Transform653 = createNode("Transform");
Transform653.translation = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
Shape Shape654 = createNode("Shape");
Shape654.USE = "HAnimJointShape";
Transform653.children = new MFNode();

Transform653.children[0] = Shape654;

HAnimSegment651.children[1] = Transform653;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc6'/> to <HAnimJoint name='vc5'/>
Shape Shape655 = createNode("Shape");
LineSet LineSet656 = createNode("LineSet");
LineSet656.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate657 = createNode("Coordinate");
Coordinate657.point = new MFVec3f(new float[0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082]);
LineSet656.coord = Coordinate657;

ColorRGBA ColorRGBA658 = createNode("ColorRGBA");
ColorRGBA658.USE = "HAnimSegmentLineColorRGBA";
LineSet656.color = ColorRGBA658;

Shape655.geometry = LineSet656;

HAnimSegment651.children[2] = Shape655;

HAnimJoint650.children = new MFNode();

HAnimJoint650.children[0] = HAnimSegment651;

HAnimJoint HAnimJoint659 = createNode("HAnimJoint");
HAnimJoint659.name = "vc5";
HAnimJoint659.DEF = "hanim_vc5";
HAnimJoint659.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
HAnimJoint659.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment660 = createNode("HAnimSegment");
HAnimSegment660.name = "c5";
HAnimSegment660.DEF = "hanim_c5";
//<HAnimJoint name='vc5'/> visualization sphere within <HAnimSegment name='c5'/>
TouchSensor TouchSensor661 = createNode("TouchSensor");
TouchSensor661.description = "HAnimJoint vc5, HAnimSegment c5";
HAnimSegment660.children = new MFNode();

HAnimSegment660.children[0] = TouchSensor661;

Transform Transform662 = createNode("Transform");
Transform662.translation = new SFVec3f(new float[0.0066,1.552,-0.0082]);
Shape Shape663 = createNode("Shape");
Shape663.USE = "HAnimJointShape";
Transform662.children = new MFNode();

Transform662.children[0] = Shape663;

HAnimSegment660.children[1] = Transform662;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc5'/> to <HAnimJoint name='vc4'/>
Shape Shape664 = createNode("Shape");
LineSet LineSet665 = createNode("LineSet");
LineSet665.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate666 = createNode("Coordinate");
Coordinate666.point = new MFVec3f(new float[0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084]);
LineSet665.coord = Coordinate666;

ColorRGBA ColorRGBA667 = createNode("ColorRGBA");
ColorRGBA667.USE = "HAnimSegmentLineColorRGBA";
LineSet665.color = ColorRGBA667;

Shape664.geometry = LineSet665;

HAnimSegment660.children[2] = Shape664;

HAnimJoint659.children = new MFNode();

HAnimJoint659.children[0] = HAnimSegment660;

HAnimJoint HAnimJoint668 = createNode("HAnimJoint");
HAnimJoint668.name = "vc4";
HAnimJoint668.DEF = "hanim_vc4";
HAnimJoint668.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimJoint668.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment669 = createNode("HAnimSegment");
HAnimSegment669.name = "c4";
HAnimSegment669.DEF = "hanim_c4";
//<HAnimJoint name='vc4'/> visualization sphere within <HAnimSegment name='c4'/>
TouchSensor TouchSensor670 = createNode("TouchSensor");
TouchSensor670.description = "HAnimJoint vc4, HAnimSegment c4";
HAnimSegment669.children = new MFNode();

HAnimSegment669.children[0] = TouchSensor670;

Transform Transform671 = createNode("Transform");
Transform671.translation = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
Shape Shape672 = createNode("Shape");
Shape672.USE = "HAnimJointShape";
Transform671.children = new MFNode();

Transform671.children[0] = Shape672;

HAnimSegment669.children[1] = Transform671;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc4'/> to <HAnimJoint name='vc3'/>
Shape Shape673 = createNode("Shape");
LineSet LineSet674 = createNode("LineSet");
LineSet674.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate675 = createNode("Coordinate");
Coordinate675.point = new MFVec3f(new float[0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103]);
LineSet674.coord = Coordinate675;

ColorRGBA ColorRGBA676 = createNode("ColorRGBA");
ColorRGBA676.USE = "HAnimSegmentLineColorRGBA";
LineSet674.color = ColorRGBA676;

Shape673.geometry = LineSet674;

HAnimSegment669.children[2] = Shape673;

HAnimJoint668.children = new MFNode();

HAnimJoint668.children[0] = HAnimSegment669;

HAnimJoint HAnimJoint677 = createNode("HAnimJoint");
HAnimJoint677.name = "vc3";
HAnimJoint677.DEF = "hanim_vc3";
HAnimJoint677.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
HAnimJoint677.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment678 = createNode("HAnimSegment");
HAnimSegment678.name = "c3";
HAnimSegment678.DEF = "hanim_c3";
//<HAnimJoint name='vc3'/> visualization sphere within <HAnimSegment name='c3'/>
TouchSensor TouchSensor679 = createNode("TouchSensor");
TouchSensor679.description = "HAnimJoint vc3, HAnimSegment c3";
HAnimSegment678.children = new MFNode();

HAnimSegment678.children[0] = TouchSensor679;

Transform Transform680 = createNode("Transform");
Transform680.translation = new SFVec3f(new float[0.0066,1.58,-0.0103]);
Shape Shape681 = createNode("Shape");
Shape681.USE = "HAnimJointShape";
Transform680.children = new MFNode();

Transform680.children[0] = Shape681;

HAnimSegment678.children[1] = Transform680;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc3'/> to <HAnimJoint name='vc2'/>
Shape Shape682 = createNode("Shape");
LineSet LineSet683 = createNode("LineSet");
LineSet683.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate684 = createNode("Coordinate");
Coordinate684.point = new MFVec3f(new float[0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103]);
LineSet683.coord = Coordinate684;

ColorRGBA ColorRGBA685 = createNode("ColorRGBA");
ColorRGBA685.USE = "HAnimSegmentLineColorRGBA";
LineSet683.color = ColorRGBA685;

Shape682.geometry = LineSet683;

HAnimSegment678.children[2] = Shape682;

HAnimJoint677.children = new MFNode();

HAnimJoint677.children[0] = HAnimSegment678;

HAnimJoint HAnimJoint686 = createNode("HAnimJoint");
HAnimJoint686.name = "vc2";
HAnimJoint686.DEF = "hanim_vc2";
HAnimJoint686.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimJoint686.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment687 = createNode("HAnimSegment");
HAnimSegment687.name = "c2";
HAnimSegment687.DEF = "hanim_c2";
//<HAnimJoint name='vc2'/> visualization sphere within <HAnimSegment name='c2'/>
TouchSensor TouchSensor688 = createNode("TouchSensor");
TouchSensor688.description = "HAnimJoint vc2, HAnimSegment c2";
HAnimSegment687.children = new MFNode();

HAnimSegment687.children[0] = TouchSensor688;

Transform Transform689 = createNode("Transform");
Transform689.translation = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
Shape Shape690 = createNode("Shape");
Shape690.USE = "HAnimJointShape";
Transform689.children = new MFNode();

Transform689.children[0] = Shape690;

HAnimSegment687.children[1] = Transform689;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc2'/> to <HAnimJoint name='vc1'/>
Shape Shape691 = createNode("Shape");
LineSet LineSet692 = createNode("LineSet");
LineSet692.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate693 = createNode("Coordinate");
Coordinate693.point = new MFVec3f(new float[0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034]);
LineSet692.coord = Coordinate693;

ColorRGBA ColorRGBA694 = createNode("ColorRGBA");
ColorRGBA694.USE = "HAnimSegmentLineColorRGBA";
LineSet692.color = ColorRGBA694;

Shape691.geometry = LineSet692;

HAnimSegment687.children[2] = Shape691;

HAnimJoint686.children = new MFNode();

HAnimJoint686.children[0] = HAnimSegment687;

HAnimJoint HAnimJoint695 = createNode("HAnimJoint");
HAnimJoint695.name = "vc1";
HAnimJoint695.DEF = "hanim_vc1";
HAnimJoint695.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
HAnimJoint695.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment696 = createNode("HAnimSegment");
HAnimSegment696.name = "c1";
HAnimSegment696.DEF = "hanim_c1";
//<HAnimJoint name='vc1'/> visualization sphere within <HAnimSegment name='c1'/>
TouchSensor TouchSensor697 = createNode("TouchSensor");
TouchSensor697.description = "HAnimJoint vc1, HAnimSegment c1";
HAnimSegment696.children = new MFNode();

HAnimSegment696.children[0] = TouchSensor697;

Transform Transform698 = createNode("Transform");
Transform698.translation = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
Shape Shape699 = createNode("Shape");
Shape699.USE = "HAnimJointShape";
Transform698.children = new MFNode();

Transform698.children[0] = Shape699;

HAnimSegment696.children[1] = Transform698;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc1'/> to <HAnimJoint name='skullbase'/>
Shape Shape700 = createNode("Shape");
LineSet LineSet701 = createNode("LineSet");
LineSet701.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate702 = createNode("Coordinate");
Coordinate702.point = new MFVec3f(new float[0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236]);
LineSet701.coord = Coordinate702;

ColorRGBA ColorRGBA703 = createNode("ColorRGBA");
ColorRGBA703.USE = "HAnimSegmentLineColorRGBA";
LineSet701.color = ColorRGBA703;

Shape700.geometry = LineSet701;

HAnimSegment696.children[2] = Shape700;

HAnimJoint695.children = new MFNode();

HAnimJoint695.children[0] = HAnimSegment696;

HAnimJoint HAnimJoint704 = createNode("HAnimJoint");
HAnimJoint704.name = "skullbase";
HAnimJoint704.DEF = "hanim_skullbase";
HAnimJoint704.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimJoint704.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment705 = createNode("HAnimSegment");
HAnimSegment705.name = "skull";
HAnimSegment705.DEF = "hanim_skull";
//<HAnimJoint name='skullbase'/> visualization sphere within <HAnimSegment name='skull'/>
TouchSensor TouchSensor706 = createNode("TouchSensor");
TouchSensor706.description = "HAnimJoint skullbase, HAnimSegment skull";
HAnimSegment705.children = new MFNode();

HAnimSegment705.children[0] = TouchSensor706;

Transform Transform707 = createNode("Transform");
Transform707.translation = new SFVec3f(new float[0.0044,1.6209,0.0236]);
Shape Shape708 = createNode("Shape");
Shape708.USE = "HAnimJointShape";
Transform707.children = new MFNode();

Transform707.children[0] = Shape708;

HAnimSegment705.children[1] = Transform707;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyeball_joint'/>
Shape Shape709 = createNode("Shape");
LineSet LineSet710 = createNode("LineSet");
LineSet710.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate711 = createNode("Coordinate");
Coordinate711.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0336,1.6332,0.0502]);
LineSet710.coord = Coordinate711;

ColorRGBA ColorRGBA712 = createNode("ColorRGBA");
ColorRGBA712.USE = "HAnimSegmentLineColorRGBA";
LineSet710.color = ColorRGBA712;

Shape709.geometry = LineSet710;

HAnimSegment705.children[2] = Shape709;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyelid_joint'/>
Shape Shape713 = createNode("Shape");
LineSet LineSet714 = createNode("LineSet");
LineSet714.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate715 = createNode("Coordinate");
Coordinate715.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0336,1.6332,0.0502]);
LineSet714.coord = Coordinate715;

ColorRGBA ColorRGBA716 = createNode("ColorRGBA");
ColorRGBA716.USE = "HAnimSegmentLineColorRGBA";
LineSet714.color = ColorRGBA716;

Shape713.geometry = LineSet714;

HAnimSegment705.children[3] = Shape713;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyebrow_joint'/>
Shape Shape717 = createNode("Shape");
LineSet LineSet718 = createNode("LineSet");
LineSet718.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate719 = createNode("Coordinate");
Coordinate719.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0336,1.635,0.0506]);
LineSet718.coord = Coordinate719;

ColorRGBA ColorRGBA720 = createNode("ColorRGBA");
ColorRGBA720.USE = "HAnimSegmentLineColorRGBA";
LineSet718.color = ColorRGBA720;

Shape717.geometry = LineSet718;

HAnimSegment705.children[4] = Shape717;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyeball_joint'/>
Shape Shape721 = createNode("Shape");
LineSet LineSet722 = createNode("LineSet");
LineSet722.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate723 = createNode("Coordinate");
Coordinate723.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502]);
LineSet722.coord = Coordinate723;

ColorRGBA ColorRGBA724 = createNode("ColorRGBA");
ColorRGBA724.USE = "HAnimSegmentLineColorRGBA";
LineSet722.color = ColorRGBA724;

Shape721.geometry = LineSet722;

HAnimSegment705.children[5] = Shape721;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyelid_joint'/>
Shape Shape725 = createNode("Shape");
LineSet LineSet726 = createNode("LineSet");
LineSet726.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate727 = createNode("Coordinate");
Coordinate727.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502]);
LineSet726.coord = Coordinate727;

ColorRGBA ColorRGBA728 = createNode("ColorRGBA");
ColorRGBA728.USE = "HAnimSegmentLineColorRGBA";
LineSet726.color = ColorRGBA728;

Shape725.geometry = LineSet726;

HAnimSegment705.children[6] = Shape725;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyebrow_joint'/>
Shape Shape729 = createNode("Shape");
LineSet LineSet730 = createNode("LineSet");
LineSet730.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate731 = createNode("Coordinate");
Coordinate731.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0336,1.635,0.0506]);
LineSet730.coord = Coordinate731;

ColorRGBA ColorRGBA732 = createNode("ColorRGBA");
ColorRGBA732.USE = "HAnimSegmentLineColorRGBA";
LineSet730.color = ColorRGBA732;

Shape729.geometry = LineSet730;

HAnimSegment705.children[7] = Shape729;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='temporomandibular'/>
Shape Shape733 = createNode("Shape");
LineSet LineSet734 = createNode("LineSet");
LineSet734.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate735 = createNode("Coordinate");
Coordinate735.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1.63,0.015]);
LineSet734.coord = Coordinate735;

ColorRGBA ColorRGBA736 = createNode("ColorRGBA");
ColorRGBA736.USE = "HAnimSegmentLineColorRGBA";
LineSet734.color = ColorRGBA736;

Shape733.geometry = LineSet734;

HAnimSegment705.children[8] = Shape733;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='skull_tip'/>
Shape Shape737 = createNode("Shape");
LineSet LineSet738 = createNode("LineSet");
LineSet738.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate739 = createNode("Coordinate");
Coordinate739.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.005,1.7504,0.0055]);
LineSet738.coord = Coordinate739;

ColorRGBA ColorRGBA740 = createNode("ColorRGBA");
ColorRGBA740.USE = "HAnimSiteLineColorRGBA";
LineSet738.color = ColorRGBA740;

Shape737.geometry = LineSet738;

HAnimSegment705.children[9] = Shape737;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='sellion'/>
Shape Shape741 = createNode("Shape");
LineSet LineSet742 = createNode("LineSet");
LineSet742.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate743 = createNode("Coordinate");
Coordinate743.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0058,1.6316,0.0852]);
LineSet742.coord = Coordinate743;

ColorRGBA ColorRGBA744 = createNode("ColorRGBA");
ColorRGBA744.USE = "HAnimSiteLineColorRGBA";
LineSet742.color = ColorRGBA744;

Shape741.geometry = LineSet742;

HAnimSegment705.children[10] = Shape741;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_infraorbitale'/>
Shape Shape745 = createNode("Shape");
LineSet LineSet746 = createNode("LineSet");
LineSet746.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate747 = createNode("Coordinate");
Coordinate747.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0237,1.6171,0.0752]);
LineSet746.coord = Coordinate747;

ColorRGBA ColorRGBA748 = createNode("ColorRGBA");
ColorRGBA748.USE = "HAnimSiteLineColorRGBA";
LineSet746.color = ColorRGBA748;

Shape745.geometry = LineSet746;

HAnimSegment705.children[11] = Shape745;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_infraorbitale'/>
Shape Shape749 = createNode("Shape");
LineSet LineSet750 = createNode("LineSet");
LineSet750.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate751 = createNode("Coordinate");
Coordinate751.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0341,1.6171,0.0752]);
LineSet750.coord = Coordinate751;

ColorRGBA ColorRGBA752 = createNode("ColorRGBA");
ColorRGBA752.USE = "HAnimSiteLineColorRGBA";
LineSet750.color = ColorRGBA752;

Shape749.geometry = LineSet750;

HAnimSegment705.children[12] = Shape749;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='supramenton'/>
Shape Shape753 = createNode("Shape");
LineSet LineSet754 = createNode("LineSet");
LineSet754.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate755 = createNode("Coordinate");
Coordinate755.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0061,1.541,0.0805]);
LineSet754.coord = Coordinate755;

ColorRGBA ColorRGBA756 = createNode("ColorRGBA");
ColorRGBA756.USE = "HAnimSiteLineColorRGBA";
LineSet754.color = ColorRGBA756;

Shape753.geometry = LineSet754;

HAnimSegment705.children[13] = Shape753;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_tragion'/>
Shape Shape757 = createNode("Shape");
LineSet LineSet758 = createNode("LineSet");
LineSet758.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate759 = createNode("Coordinate");
Coordinate759.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0646,1.6347,0.0302]);
LineSet758.coord = Coordinate759;

ColorRGBA ColorRGBA760 = createNode("ColorRGBA");
ColorRGBA760.USE = "HAnimSiteLineColorRGBA";
LineSet758.color = ColorRGBA760;

Shape757.geometry = LineSet758;

HAnimSegment705.children[14] = Shape757;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_gonion'/>
Shape Shape761 = createNode("Shape");
LineSet LineSet762 = createNode("LineSet");
LineSet762.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate763 = createNode("Coordinate");
Coordinate763.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.052,1.5529,0.0347]);
LineSet762.coord = Coordinate763;

ColorRGBA ColorRGBA764 = createNode("ColorRGBA");
ColorRGBA764.USE = "HAnimSiteLineColorRGBA";
LineSet762.color = ColorRGBA764;

Shape761.geometry = LineSet762;

HAnimSegment705.children[15] = Shape761;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_tragion'/>
Shape Shape765 = createNode("Shape");
LineSet LineSet766 = createNode("LineSet");
LineSet766.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate767 = createNode("Coordinate");
Coordinate767.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0739,1.6348,0.0282]);
LineSet766.coord = Coordinate767;

ColorRGBA ColorRGBA768 = createNode("ColorRGBA");
ColorRGBA768.USE = "HAnimSiteLineColorRGBA";
LineSet766.color = ColorRGBA768;

Shape765.geometry = LineSet766;

HAnimSegment705.children[16] = Shape765;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_gonion'/>
Shape Shape769 = createNode("Shape");
LineSet LineSet770 = createNode("LineSet");
LineSet770.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate771 = createNode("Coordinate");
Coordinate771.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0631,1.553,0.033]);
LineSet770.coord = Coordinate771;

ColorRGBA ColorRGBA772 = createNode("ColorRGBA");
ColorRGBA772.USE = "HAnimSiteLineColorRGBA";
LineSet770.color = ColorRGBA772;

Shape769.geometry = LineSet770;

HAnimSegment705.children[17] = Shape769;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='nuchale'/>
Shape Shape773 = createNode("Shape");
LineSet LineSet774 = createNode("LineSet");
LineSet774.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate775 = createNode("Coordinate");
Coordinate775.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0039,1.5972,-0.0796]);
LineSet774.coord = Coordinate775;

ColorRGBA ColorRGBA776 = createNode("ColorRGBA");
ColorRGBA776.USE = "HAnimSiteLineColorRGBA";
LineSet774.color = ColorRGBA776;

Shape773.geometry = LineSet774;

HAnimSegment705.children[18] = Shape773;

//TODO move skull_tip x to zero
HAnimSite HAnimSite777 = createNode("HAnimSite");
HAnimSite777.name = "skull_tip";
HAnimSite777.DEF = "hanim_skull_tip";
HAnimSite777.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
//HAnimSite visualization shape
TouchSensor TouchSensor778 = createNode("TouchSensor");
TouchSensor778.description = "HAnimSite skull_tip";
HAnimSite777.children = new MFNode();

HAnimSite777.children[0] = TouchSensor778;

Shape Shape779 = createNode("Shape");
Shape779.USE = "HAnimSiteShape";
HAnimSite777.children[1] = Shape779;

HAnimSegment705.children[19] = HAnimSite777;

HAnimSite HAnimSite780 = createNode("HAnimSite");
HAnimSite780.name = "sellion_pt";
HAnimSite780.DEF = "hanim_sellion_pt";
HAnimSite780.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
//HAnimSite visualization shape
TouchSensor TouchSensor781 = createNode("TouchSensor");
TouchSensor781.description = "HAnimSite sellion";
HAnimSite780.children = new MFNode();

HAnimSite780.children[0] = TouchSensor781;

Shape Shape782 = createNode("Shape");
Shape782.USE = "HAnimSiteShape";
HAnimSite780.children[1] = Shape782;

HAnimSegment705.children[20] = HAnimSite780;

HAnimSite HAnimSite783 = createNode("HAnimSite");
HAnimSite783.name = "r_infraorbitale_pt";
HAnimSite783.DEF = "hanim_r_infraorbitale_pt";
HAnimSite783.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
//HAnimSite visualization shape
TouchSensor TouchSensor784 = createNode("TouchSensor");
TouchSensor784.description = "HAnimSite r_infraorbitale";
HAnimSite783.children = new MFNode();

HAnimSite783.children[0] = TouchSensor784;

Shape Shape785 = createNode("Shape");
Shape785.USE = "HAnimSiteShape";
HAnimSite783.children[1] = Shape785;

HAnimSegment705.children[21] = HAnimSite783;

HAnimSite HAnimSite786 = createNode("HAnimSite");
HAnimSite786.name = "l_infraorbitale_pt";
HAnimSite786.DEF = "hanim_l_infraorbitale_pt";
HAnimSite786.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
//HAnimSite visualization shape
TouchSensor TouchSensor787 = createNode("TouchSensor");
TouchSensor787.description = "HAnimSite l_infraorbitale";
HAnimSite786.children = new MFNode();

HAnimSite786.children[0] = TouchSensor787;

Shape Shape788 = createNode("Shape");
Shape788.USE = "HAnimSiteShape";
HAnimSite786.children[1] = Shape788;

HAnimSegment705.children[22] = HAnimSite786;

HAnimSite HAnimSite789 = createNode("HAnimSite");
HAnimSite789.name = "supramenton_pt";
HAnimSite789.DEF = "hanim_supramenton_pt";
HAnimSite789.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
//HAnimSite visualization shape
TouchSensor TouchSensor790 = createNode("TouchSensor");
TouchSensor790.description = "HAnimSite supramenton";
HAnimSite789.children = new MFNode();

HAnimSite789.children[0] = TouchSensor790;

Shape Shape791 = createNode("Shape");
Shape791.USE = "HAnimSiteShape";
HAnimSite789.children[1] = Shape791;

HAnimSegment705.children[23] = HAnimSite789;

HAnimSite HAnimSite792 = createNode("HAnimSite");
HAnimSite792.name = "r_tragion_pt";
HAnimSite792.DEF = "hanim_r_tragion_pt";
HAnimSite792.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
//HAnimSite visualization shape
TouchSensor TouchSensor793 = createNode("TouchSensor");
TouchSensor793.description = "HAnimSite r_tragion";
HAnimSite792.children = new MFNode();

HAnimSite792.children[0] = TouchSensor793;

Shape Shape794 = createNode("Shape");
Shape794.USE = "HAnimSiteShape";
HAnimSite792.children[1] = Shape794;

HAnimSegment705.children[24] = HAnimSite792;

HAnimSite HAnimSite795 = createNode("HAnimSite");
HAnimSite795.name = "r_gonion_pt";
HAnimSite795.DEF = "hanim_r_gonion_pt";
HAnimSite795.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
//HAnimSite visualization shape
TouchSensor TouchSensor796 = createNode("TouchSensor");
TouchSensor796.description = "HAnimSite r_gonion";
HAnimSite795.children = new MFNode();

HAnimSite795.children[0] = TouchSensor796;

Shape Shape797 = createNode("Shape");
Shape797.USE = "HAnimSiteShape";
HAnimSite795.children[1] = Shape797;

HAnimSegment705.children[25] = HAnimSite795;

HAnimSite HAnimSite798 = createNode("HAnimSite");
HAnimSite798.name = "l_tragion_pt";
HAnimSite798.DEF = "hanim_l_tragion_pt";
HAnimSite798.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
//HAnimSite visualization shape
TouchSensor TouchSensor799 = createNode("TouchSensor");
TouchSensor799.description = "HAnimSite l_tragion";
HAnimSite798.children = new MFNode();

HAnimSite798.children[0] = TouchSensor799;

Shape Shape800 = createNode("Shape");
Shape800.USE = "HAnimSiteShape";
HAnimSite798.children[1] = Shape800;

HAnimSegment705.children[26] = HAnimSite798;

HAnimSite HAnimSite801 = createNode("HAnimSite");
HAnimSite801.name = "l_gonion_pt";
HAnimSite801.DEF = "hanim_l_gonion_pt";
HAnimSite801.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
//HAnimSite visualization shape
TouchSensor TouchSensor802 = createNode("TouchSensor");
TouchSensor802.description = "HAnimSite l_gonion";
HAnimSite801.children = new MFNode();

HAnimSite801.children[0] = TouchSensor802;

Shape Shape803 = createNode("Shape");
Shape803.USE = "HAnimSiteShape";
HAnimSite801.children[1] = Shape803;

HAnimSegment705.children[27] = HAnimSite801;

HAnimSite HAnimSite804 = createNode("HAnimSite");
HAnimSite804.name = "nuchale_pt";
HAnimSite804.DEF = "hanim_nuchale_pt";
HAnimSite804.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
//HAnimSite visualization shape
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
HAnimJoint807.name = "l_eyeball_joint";
HAnimJoint807.DEF = "hanim_l_eyeball_joint";
HAnimJoint807.center = new SFVec3f(new float[0.0336,1.6332,0.0502]);
HAnimJoint807.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment808 = createNode("HAnimSegment");
HAnimSegment808.name = "l_eyeball";
HAnimSegment808.DEF = "hanim_l_eyeball";
//<HAnimJoint name='l_eyeball_joint'/> visualization sphere within <HAnimSegment name='l_eyeball'/>
TouchSensor TouchSensor809 = createNode("TouchSensor");
TouchSensor809.description = "HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball";
HAnimSegment808.children = new MFNode();

HAnimSegment808.children[0] = TouchSensor809;

Transform Transform810 = createNode("Transform");
Transform810.translation = new SFVec3f(new float[0.0336,1.6332,0.0502]);
Shape Shape811 = createNode("Shape");
Shape811.USE = "HAnimJointShape";
Transform810.children = new MFNode();

Transform810.children[0] = Shape811;

HAnimSegment808.children[1] = Transform810;

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_eyeball_joint'/> to <HAnimSite name='l_eyeball_site_view'/>
Shape Shape812 = createNode("Shape");
LineSet LineSet813 = createNode("LineSet");
LineSet813.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate814 = createNode("Coordinate");
Coordinate814.point = new MFVec3f(new float[0.0336,1.6332,0.0502,0.034,1.64,0.05]);
LineSet813.coord = Coordinate814;

ColorRGBA ColorRGBA815 = createNode("ColorRGBA");
ColorRGBA815.DEF = "HAnimSiteViewpointLineColorRGBA";
ColorRGBA815.color = new MFColorRGBA(new float[0,0,1,1,0,0,1,0.1]);
LineSet813.color = ColorRGBA815;

Shape812.geometry = LineSet813;

HAnimSegment808.children[2] = Shape812;

HAnimSite HAnimSite816 = createNode("HAnimSite");
HAnimSite816.name = "l_eyeball_site_view";
HAnimSite816.DEF = "hanim_l_eyeball_site_view";
HAnimSite816.translation = new SFVec3f(new float[0.034,1.64,0.05]);
Viewpoint Viewpoint817 = createNode("Viewpoint");
Viewpoint817.DEF = "hanim_l_eyeball_site_viewpoint";
Viewpoint817.description = "l_eyeball_site_viewpoint looking forward";
Viewpoint817.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint817.position = new SFVec3f(new float[0,0,0]);
HAnimSite816.children = new MFNode();

HAnimSite816.children[0] = Viewpoint817;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor818 = createNode("Anchor");
Anchor818.description = "HAnimSite Viewpoint hanim_l_eyeball_site_view";
Anchor818.url = new MFString(new java.lang.String["#hanim_l_eyeball_site_viewpoint"]);
LOD LOD819 = createNode("LOD");
LOD819.forceTransitions = True;
LOD819.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo820 = createNode("WorldInfo");
WorldInfo820.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD819.children = new MFNode();

LOD819.children[0] = WorldInfo820;

Shape Shape821 = createNode("Shape");
Shape821.DEF = "HAnimSiteViewpointShape";
IndexedFaceSet IndexedFaceSet822 = createNode("IndexedFaceSet");
IndexedFaceSet822.DEF = "SiteViewpointDiamondIFS";
IndexedFaceSet822.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet822.creaseAngle = 0.5;
Coordinate Coordinate823 = createNode("Coordinate");
Coordinate823.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet822.coord = Coordinate823;

Shape821.geometry = IndexedFaceSet822;

Appearance Appearance824 = createNode("Appearance");
Material Material825 = createNode("Material");
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

HAnimJoint HAnimJoint826 = createNode("HAnimJoint");
HAnimJoint826.name = "l_eyelid_joint";
HAnimJoint826.DEF = "hanim_l_eyelid_joint";
HAnimJoint826.center = new SFVec3f(new float[0.0336,1.6332,0.0502]);
HAnimJoint826.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment827 = createNode("HAnimSegment");
HAnimSegment827.name = "l_eyelid";
HAnimSegment827.DEF = "hanim_l_eyelid";
//<HAnimJoint name='l_eyelid_joint'/> visualization sphere within <HAnimSegment name='l_eyelid'/>
TouchSensor TouchSensor828 = createNode("TouchSensor");
TouchSensor828.description = "HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid";
HAnimSegment827.children = new MFNode();

HAnimSegment827.children[0] = TouchSensor828;

Transform Transform829 = createNode("Transform");
Transform829.translation = new SFVec3f(new float[0.0336,1.6332,0.0502]);
Shape Shape830 = createNode("Shape");
Shape830.USE = "HAnimJointShape";
Transform829.children = new MFNode();

Transform829.children[0] = Shape830;

HAnimSegment827.children[1] = Transform829;

HAnimJoint826.children = new MFNode();

HAnimJoint826.children[0] = HAnimSegment827;

HAnimJoint704.children[2] = HAnimJoint826;

HAnimJoint HAnimJoint831 = createNode("HAnimJoint");
HAnimJoint831.name = "l_eyebrow_joint";
HAnimJoint831.DEF = "hanim_l_eyebrow_joint";
HAnimJoint831.center = new SFVec3f(new float[0.0336,1.635,0.0506]);
HAnimJoint831.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment832 = createNode("HAnimSegment");
HAnimSegment832.name = "l_eyebrow";
HAnimSegment832.DEF = "hanim_l_eyebrow";
//<HAnimJoint name='l_eyebrow_joint'/> visualization sphere within <HAnimSegment name='l_eyebrow'/>
TouchSensor TouchSensor833 = createNode("TouchSensor");
TouchSensor833.description = "HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow";
HAnimSegment832.children = new MFNode();

HAnimSegment832.children[0] = TouchSensor833;

Transform Transform834 = createNode("Transform");
Transform834.translation = new SFVec3f(new float[0.0336,1.635,0.0506]);
Shape Shape835 = createNode("Shape");
Shape835.USE = "HAnimJointShape";
Transform834.children = new MFNode();

Transform834.children[0] = Shape835;

HAnimSegment832.children[1] = Transform834;

HAnimJoint831.children = new MFNode();

HAnimJoint831.children[0] = HAnimSegment832;

HAnimJoint704.children[3] = HAnimJoint831;

HAnimJoint HAnimJoint836 = createNode("HAnimJoint");
HAnimJoint836.name = "r_eyeball_joint";
HAnimJoint836.DEF = "hanim_r_eyeball_joint";
HAnimJoint836.center = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
HAnimJoint836.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment837 = createNode("HAnimSegment");
HAnimSegment837.name = "r_eyeball";
HAnimSegment837.DEF = "hanim_r_eyeball";
//<HAnimJoint name='r_eyeball_joint'/> visualization sphere within <HAnimSegment name='r_eyeball'/>
TouchSensor TouchSensor838 = createNode("TouchSensor");
TouchSensor838.description = "HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball";
HAnimSegment837.children = new MFNode();

HAnimSegment837.children[0] = TouchSensor838;

Transform Transform839 = createNode("Transform");
Transform839.translation = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
Shape Shape840 = createNode("Shape");
Shape840.USE = "HAnimJointShape";
Transform839.children = new MFNode();

Transform839.children[0] = Shape840;

HAnimSegment837.children[1] = Transform839;

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_eyeball_joint'/> to <HAnimSite name='r_eyeball_site_view'/>
Shape Shape841 = createNode("Shape");
LineSet LineSet842 = createNode("LineSet");
LineSet842.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate843 = createNode("Coordinate");
Coordinate843.point = new MFVec3f(new float[-0.0336,1.6332,0.0502,-0.034,1.64,0.05]);
LineSet842.coord = Coordinate843;

ColorRGBA ColorRGBA844 = createNode("ColorRGBA");
ColorRGBA844.USE = "HAnimSiteViewpointLineColorRGBA";
LineSet842.color = ColorRGBA844;

Shape841.geometry = LineSet842;

HAnimSegment837.children[2] = Shape841;

HAnimSite HAnimSite845 = createNode("HAnimSite");
HAnimSite845.name = "r_eyeball_site_view";
HAnimSite845.DEF = "hanim_r_eyeball_site_view";
HAnimSite845.translation = new SFVec3f(new float[-0.034,1.64,0.05]);
Viewpoint Viewpoint846 = createNode("Viewpoint");
Viewpoint846.DEF = "hanim_r_eyeball_site_viewpoint";
Viewpoint846.description = "r_eyeball_site_viewpoint looking forward";
Viewpoint846.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint846.position = new SFVec3f(new float[0,0,0]);
HAnimSite845.children = new MFNode();

HAnimSite845.children[0] = Viewpoint846;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor847 = createNode("Anchor");
Anchor847.description = "HAnimSite Viewpoint hanim_r_eyeball_site_view";
Anchor847.url = new MFString(new java.lang.String["#hanim_r_eyeball_site_viewpoint"]);
LOD LOD848 = createNode("LOD");
LOD848.forceTransitions = True;
LOD848.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo849 = createNode("WorldInfo");
WorldInfo849.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD848.children = new MFNode();

LOD848.children[0] = WorldInfo849;

Shape Shape850 = createNode("Shape");
Shape850.USE = "HAnimSiteViewpointShape";
LOD848.children[1] = Shape850;

Anchor847.children = new MFNode();

Anchor847.children[0] = LOD848;

HAnimSite845.children[1] = Anchor847;

HAnimSegment837.children[3] = HAnimSite845;

HAnimJoint836.children = new MFNode();

HAnimJoint836.children[0] = HAnimSegment837;

HAnimJoint704.children[4] = HAnimJoint836;

HAnimJoint HAnimJoint851 = createNode("HAnimJoint");
HAnimJoint851.name = "r_eyelid_joint";
HAnimJoint851.DEF = "hanim_r_eyelid_joint";
HAnimJoint851.center = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
HAnimJoint851.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment852 = createNode("HAnimSegment");
HAnimSegment852.name = "r_eyelid";
HAnimSegment852.DEF = "hanim_r_eyelid";
//<HAnimJoint name='r_eyelid_joint'/> visualization sphere within <HAnimSegment name='r_eyelid'/>
TouchSensor TouchSensor853 = createNode("TouchSensor");
TouchSensor853.description = "HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid";
HAnimSegment852.children = new MFNode();

HAnimSegment852.children[0] = TouchSensor853;

Transform Transform854 = createNode("Transform");
Transform854.translation = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
Shape Shape855 = createNode("Shape");
Shape855.USE = "HAnimJointShape";
Transform854.children = new MFNode();

Transform854.children[0] = Shape855;

HAnimSegment852.children[1] = Transform854;

HAnimJoint851.children = new MFNode();

HAnimJoint851.children[0] = HAnimSegment852;

HAnimJoint704.children[5] = HAnimJoint851;

HAnimJoint HAnimJoint856 = createNode("HAnimJoint");
HAnimJoint856.name = "r_eyebrow_joint";
HAnimJoint856.DEF = "hanim_r_eyebrow_joint";
HAnimJoint856.center = new SFVec3f(new float[-0.0336,1.635,0.0506]);
HAnimJoint856.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment857 = createNode("HAnimSegment");
HAnimSegment857.name = "r_eyebrow";
HAnimSegment857.DEF = "hanim_r_eyebrow";
//<HAnimJoint name='r_eyebrow_joint'/> visualization sphere within <HAnimSegment name='r_eyebrow'/>
TouchSensor TouchSensor858 = createNode("TouchSensor");
TouchSensor858.description = "HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow";
HAnimSegment857.children = new MFNode();

HAnimSegment857.children[0] = TouchSensor858;

Transform Transform859 = createNode("Transform");
Transform859.translation = new SFVec3f(new float[-0.0336,1.635,0.0506]);
Shape Shape860 = createNode("Shape");
Shape860.USE = "HAnimJointShape";
Transform859.children = new MFNode();

Transform859.children[0] = Shape860;

HAnimSegment857.children[1] = Transform859;

HAnimJoint856.children = new MFNode();

HAnimJoint856.children[0] = HAnimSegment857;

HAnimJoint704.children[6] = HAnimJoint856;

//Single joint, single segment for jaw, two sites for left/right TMJs https://en.wikipedia.org/wiki/Temporomandibular_joint
HAnimJoint HAnimJoint861 = createNode("HAnimJoint");
HAnimJoint861.name = "temporomandibular";
HAnimJoint861.DEF = "hanim_temporomandibular";
HAnimJoint861.center = new SFVec3f(new float[0,1.63,0.015]);
HAnimJoint861.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment862 = createNode("HAnimSegment");
HAnimSegment862.name = "jaw";
HAnimSegment862.DEF = "hanim_jaw";
//<HAnimJoint name='temporomandibular'/> visualization sphere within <HAnimSegment name='jaw'/>
TouchSensor TouchSensor863 = createNode("TouchSensor");
TouchSensor863.description = "HAnimJoint temporomandibular, HAnimSegment jaw";
HAnimSegment862.children = new MFNode();

HAnimSegment862.children[0] = TouchSensor863;

Transform Transform864 = createNode("Transform");
Transform864.translation = new SFVec3f(new float[0,1.63,0.015]);
Shape Shape865 = createNode("Shape");
Shape865.USE = "HAnimJointShape";
Transform864.children = new MFNode();

Transform864.children[0] = Shape865;

HAnimSegment862.children[1] = Transform864;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_l_site'/>
Shape Shape866 = createNode("Shape");
LineSet LineSet867 = createNode("LineSet");
LineSet867.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate868 = createNode("Coordinate");
Coordinate868.point = new MFVec3f(new float[0,1.63,0.015,0.045,1.63,0]);
LineSet867.coord = Coordinate868;

ColorRGBA ColorRGBA869 = createNode("ColorRGBA");
ColorRGBA869.USE = "HAnimSiteLineColorRGBA";
LineSet867.color = ColorRGBA869;

Shape866.geometry = LineSet867;

HAnimSegment862.children[2] = Shape866;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_r_site'/>
Shape Shape870 = createNode("Shape");
LineSet LineSet871 = createNode("LineSet");
LineSet871.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate872 = createNode("Coordinate");
Coordinate872.point = new MFVec3f(new float[0,1.63,0.015,-0.045,1.63,0]);
LineSet871.coord = Coordinate872;

ColorRGBA ColorRGBA873 = createNode("ColorRGBA");
ColorRGBA873.USE = "HAnimSiteLineColorRGBA";
LineSet871.color = ColorRGBA873;

Shape870.geometry = LineSet871;

HAnimSegment862.children[3] = Shape870;

HAnimSite HAnimSite874 = createNode("HAnimSite");
HAnimSite874.name = "temporomandibular_l_site_pt";
HAnimSite874.DEF = "hanim_temporomandibular_l_site_pt";
HAnimSite874.translation = new SFVec3f(new float[0.045,1.63,0]);
//HAnimSite visualization shape
TouchSensor TouchSensor875 = createNode("TouchSensor");
TouchSensor875.description = "HAnimSite temporomandibular_l_site";
HAnimSite874.children = new MFNode();

HAnimSite874.children[0] = TouchSensor875;

Shape Shape876 = createNode("Shape");
Shape876.USE = "HAnimSiteShape";
HAnimSite874.children[1] = Shape876;

HAnimSegment862.children[4] = HAnimSite874;

HAnimSite HAnimSite877 = createNode("HAnimSite");
HAnimSite877.name = "temporomandibular_r_site_pt";
HAnimSite877.DEF = "hanim_temporomandibular_r_site_pt";
HAnimSite877.translation = new SFVec3f(new float[-0.045,1.63,0]);
//HAnimSite visualization shape
TouchSensor TouchSensor878 = createNode("TouchSensor");
TouchSensor878.description = "HAnimSite temporomandibular_r_site";
HAnimSite877.children = new MFNode();

HAnimSite877.children[0] = TouchSensor878;

Shape Shape879 = createNode("Shape");
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

HAnimJoint HAnimJoint880 = createNode("HAnimJoint");
HAnimJoint880.name = "l_sternoclavicular";
HAnimJoint880.DEF = "hanim_l_sternoclavicular";
HAnimJoint880.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimJoint880.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment881 = createNode("HAnimSegment");
HAnimSegment881.name = "l_clavicle";
HAnimSegment881.DEF = "hanim_l_clavicle";
//<HAnimJoint name='l_sternoclavicular'/> visualization sphere within <HAnimSegment name='l_clavicle'/>
TouchSensor TouchSensor882 = createNode("TouchSensor");
TouchSensor882.description = "HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle";
HAnimSegment881.children = new MFNode();

HAnimSegment881.children[0] = TouchSensor882;

Transform Transform883 = createNode("Transform");
Transform883.translation = new SFVec3f(new float[0.082,1.4488,-0.0353]);
Shape Shape884 = createNode("Shape");
Shape884.USE = "HAnimJointShape";
Transform883.children = new MFNode();

Transform883.children[0] = Shape884;

HAnimSegment881.children[1] = Transform883;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_sternoclavicular'/> to <HAnimJoint name='l_acromioclavicular'/>
Shape Shape885 = createNode("Shape");
LineSet LineSet886 = createNode("LineSet");
LineSet886.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate887 = createNode("Coordinate");
Coordinate887.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
LineSet886.coord = Coordinate887;

ColorRGBA ColorRGBA888 = createNode("ColorRGBA");
ColorRGBA888.USE = "HAnimSegmentLineColorRGBA";
LineSet886.color = ColorRGBA888;

Shape885.geometry = LineSet886;

HAnimSegment881.children[2] = Shape885;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_clavicale'/>
Shape Shape889 = createNode("Shape");
LineSet LineSet890 = createNode("LineSet");
LineSet890.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate891 = createNode("Coordinate");
Coordinate891.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0271,1.4943,0.0394]);
LineSet890.coord = Coordinate891;

ColorRGBA ColorRGBA892 = createNode("ColorRGBA");
ColorRGBA892.USE = "HAnimSiteLineColorRGBA";
LineSet890.color = ColorRGBA892;

Shape889.geometry = LineSet890;

HAnimSegment881.children[3] = Shape889;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_acromion'/>
Shape Shape893 = createNode("Shape");
LineSet LineSet894 = createNode("LineSet");
LineSet894.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate895 = createNode("Coordinate");
Coordinate895.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.2032,1.476,-0.049]);
LineSet894.coord = Coordinate895;

ColorRGBA ColorRGBA896 = createNode("ColorRGBA");
ColorRGBA896.USE = "HAnimSiteLineColorRGBA";
LineSet894.color = ColorRGBA896;

Shape893.geometry = LineSet894;

HAnimSegment881.children[4] = Shape893;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_ant'/>
Shape Shape897 = createNode("Shape");
LineSet LineSet898 = createNode("LineSet");
LineSet898.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate899 = createNode("Coordinate");
Coordinate899.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.1777,1.4065,-0.0075]);
LineSet898.coord = Coordinate899;

ColorRGBA ColorRGBA900 = createNode("ColorRGBA");
ColorRGBA900.USE = "HAnimSiteLineColorRGBA";
LineSet898.color = ColorRGBA900;

Shape897.geometry = LineSet898;

HAnimSegment881.children[5] = Shape897;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_post'/>
Shape Shape901 = createNode("Shape");
LineSet LineSet902 = createNode("LineSet");
LineSet902.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate903 = createNode("Coordinate");
Coordinate903.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.1706,1.4072,-0.0875]);
LineSet902.coord = Coordinate903;

ColorRGBA ColorRGBA904 = createNode("ColorRGBA");
ColorRGBA904.USE = "HAnimSiteLineColorRGBA";
LineSet902.color = ColorRGBA904;

Shape901.geometry = LineSet902;

HAnimSegment881.children[6] = Shape901;

HAnimSite HAnimSite905 = createNode("HAnimSite");
HAnimSite905.name = "l_clavicale_pt";
HAnimSite905.DEF = "hanim_l_clavicale_pt";
HAnimSite905.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
//HAnimSite visualization shape
TouchSensor TouchSensor906 = createNode("TouchSensor");
TouchSensor906.description = "HAnimSite l_clavicale";
HAnimSite905.children = new MFNode();

HAnimSite905.children[0] = TouchSensor906;

Shape Shape907 = createNode("Shape");
Shape907.USE = "HAnimSiteShape";
HAnimSite905.children[1] = Shape907;

HAnimSegment881.children[7] = HAnimSite905;

HAnimSite HAnimSite908 = createNode("HAnimSite");
HAnimSite908.name = "l_acromion_pt";
HAnimSite908.DEF = "hanim_l_acromion_pt";
HAnimSite908.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
//HAnimSite visualization shape
TouchSensor TouchSensor909 = createNode("TouchSensor");
TouchSensor909.description = "HAnimSite l_acromion";
HAnimSite908.children = new MFNode();

HAnimSite908.children[0] = TouchSensor909;

Shape Shape910 = createNode("Shape");
Shape910.USE = "HAnimSiteShape";
HAnimSite908.children[1] = Shape910;

HAnimSegment881.children[8] = HAnimSite908;

HAnimSite HAnimSite911 = createNode("HAnimSite");
HAnimSite911.name = "l_axilla_ant_pt";
HAnimSite911.DEF = "hanim_l_axilla_ant_pt";
HAnimSite911.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
//HAnimSite visualization shape
TouchSensor TouchSensor912 = createNode("TouchSensor");
TouchSensor912.description = "HAnimSite l_axilla_ant";
HAnimSite911.children = new MFNode();

HAnimSite911.children[0] = TouchSensor912;

Shape Shape913 = createNode("Shape");
Shape913.USE = "HAnimSiteShape";
HAnimSite911.children[1] = Shape913;

HAnimSegment881.children[9] = HAnimSite911;

HAnimSite HAnimSite914 = createNode("HAnimSite");
HAnimSite914.name = "l_axilla_post_pt";
HAnimSite914.DEF = "hanim_l_axilla_post_pt";
HAnimSite914.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
//HAnimSite visualization shape
TouchSensor TouchSensor915 = createNode("TouchSensor");
TouchSensor915.description = "HAnimSite l_axilla_post";
HAnimSite914.children = new MFNode();

HAnimSite914.children[0] = TouchSensor915;

Shape Shape916 = createNode("Shape");
Shape916.USE = "HAnimSiteShape";
HAnimSite914.children[1] = Shape916;

HAnimSegment881.children[10] = HAnimSite914;

HAnimJoint880.children = new MFNode();

HAnimJoint880.children[0] = HAnimSegment881;

HAnimJoint HAnimJoint917 = createNode("HAnimJoint");
HAnimJoint917.name = "l_acromioclavicular";
HAnimJoint917.DEF = "hanim_l_acromioclavicular";
HAnimJoint917.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimJoint917.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment918 = createNode("HAnimSegment");
HAnimSegment918.name = "l_scapula";
HAnimSegment918.DEF = "hanim_l_scapula";
//<HAnimJoint name='l_acromioclavicular'/> visualization sphere within <HAnimSegment name='l_scapula'/>
TouchSensor TouchSensor919 = createNode("TouchSensor");
TouchSensor919.description = "HAnimJoint l_acromioclavicular, HAnimSegment l_scapula";
HAnimSegment918.children = new MFNode();

HAnimSegment918.children[0] = TouchSensor919;

Transform Transform920 = createNode("Transform");
Transform920.translation = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
Shape Shape921 = createNode("Shape");
Shape921.USE = "HAnimJointShape";
Transform920.children = new MFNode();

Transform920.children[0] = Shape921;

HAnimSegment918.children[1] = Transform920;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_acromioclavicular'/> to <HAnimJoint name='l_shoulder'/>
Shape Shape922 = createNode("Shape");
LineSet LineSet923 = createNode("LineSet");
LineSet923.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate924 = createNode("Coordinate");
Coordinate924.point = new MFVec3f(new float[0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
LineSet923.coord = Coordinate924;

ColorRGBA ColorRGBA925 = createNode("ColorRGBA");
ColorRGBA925.USE = "HAnimSegmentLineColorRGBA";
LineSet923.color = ColorRGBA925;

Shape922.geometry = LineSet923;

HAnimSegment918.children[2] = Shape922;

HAnimJoint917.children = new MFNode();

HAnimJoint917.children[0] = HAnimSegment918;

HAnimJoint HAnimJoint926 = createNode("HAnimJoint");
HAnimJoint926.name = "l_shoulder";
HAnimJoint926.DEF = "hanim_l_shoulder";
HAnimJoint926.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimJoint926.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment927 = createNode("HAnimSegment");
HAnimSegment927.name = "l_upperarm";
HAnimSegment927.DEF = "hanim_l_upperarm";
//<HAnimJoint name='l_shoulder'/> visualization sphere within <HAnimSegment name='l_upperarm'/>
TouchSensor TouchSensor928 = createNode("TouchSensor");
TouchSensor928.description = "HAnimJoint l_shoulder, HAnimSegment l_upperarm";
HAnimSegment927.children = new MFNode();

HAnimSegment927.children[0] = TouchSensor928;

Transform Transform929 = createNode("Transform");
Transform929.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
Shape Shape930 = createNode("Shape");
Shape930.USE = "HAnimJointShape";
Transform929.children = new MFNode();

Transform929.children[0] = Shape930;

HAnimSegment927.children[1] = Transform929;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_shoulder'/> to <HAnimJoint name='l_elbow'/>
Shape Shape931 = createNode("Shape");
LineSet LineSet932 = createNode("LineSet");
LineSet932.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate933 = createNode("Coordinate");
Coordinate933.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
LineSet932.coord = Coordinate933;

ColorRGBA ColorRGBA934 = createNode("ColorRGBA");
ColorRGBA934.USE = "HAnimSegmentLineColorRGBA";
LineSet932.color = ColorRGBA934;

Shape931.geometry = LineSet932;

HAnimSegment927.children[2] = Shape931;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_shoulder'/> to <HAnimSite name='l_humeral_lateral_epicn'/>
Shape Shape935 = createNode("Shape");
LineSet LineSet936 = createNode("LineSet");
LineSet936.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate937 = createNode("Coordinate");
Coordinate937.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.228,1.1482,-0.11]);
LineSet936.coord = Coordinate937;

ColorRGBA ColorRGBA938 = createNode("ColorRGBA");
ColorRGBA938.USE = "HAnimSiteLineColorRGBA";
LineSet936.color = ColorRGBA938;

Shape935.geometry = LineSet936;

HAnimSegment927.children[3] = Shape935;

HAnimSite HAnimSite939 = createNode("HAnimSite");
HAnimSite939.name = "l_humeral_lateral_epicn_pt";
HAnimSite939.DEF = "hanim_l_humeral_lateral_epicn_pt";
HAnimSite939.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
//HAnimSite visualization shape
TouchSensor TouchSensor940 = createNode("TouchSensor");
TouchSensor940.description = "HAnimSite l_humeral_lateral_epicn";
HAnimSite939.children = new MFNode();

HAnimSite939.children[0] = TouchSensor940;

Shape Shape941 = createNode("Shape");
Shape941.USE = "HAnimSiteShape";
HAnimSite939.children[1] = Shape941;

HAnimSegment927.children[4] = HAnimSite939;

HAnimJoint926.children = new MFNode();

HAnimJoint926.children[0] = HAnimSegment927;

HAnimJoint HAnimJoint942 = createNode("HAnimJoint");
HAnimJoint942.name = "l_elbow";
HAnimJoint942.DEF = "hanim_l_elbow";
HAnimJoint942.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimJoint942.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment943 = createNode("HAnimSegment");
HAnimSegment943.name = "l_forearm";
HAnimSegment943.DEF = "hanim_l_forearm";
//<HAnimJoint name='l_elbow'/> visualization sphere within <HAnimSegment name='l_forearm'/>
TouchSensor TouchSensor944 = createNode("TouchSensor");
TouchSensor944.description = "HAnimJoint l_elbow, HAnimSegment l_forearm";
HAnimSegment943.children = new MFNode();

HAnimSegment943.children[0] = TouchSensor944;

Transform Transform945 = createNode("Transform");
Transform945.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
Shape Shape946 = createNode("Shape");
Shape946.USE = "HAnimJointShape";
Transform945.children = new MFNode();

Transform945.children[0] = Shape946;

HAnimSegment943.children[1] = Transform945;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_elbow'/> to <HAnimJoint name='l_wrist'/>
Shape Shape947 = createNode("Shape");
LineSet LineSet948 = createNode("LineSet");
LineSet948.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate949 = createNode("Coordinate");
Coordinate949.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
LineSet948.coord = Coordinate949;

ColorRGBA ColorRGBA950 = createNode("ColorRGBA");
ColorRGBA950.USE = "HAnimSegmentLineColorRGBA";
LineSet948.color = ColorRGBA950;

Shape947.geometry = LineSet948;

HAnimSegment943.children[2] = Shape947;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radial_styloid'/>
Shape Shape951 = createNode("Shape");
LineSet LineSet952 = createNode("LineSet");
LineSet952.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate953 = createNode("Coordinate");
Coordinate953.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1901,0.8645,-0.0415]);
LineSet952.coord = Coordinate953;

ColorRGBA ColorRGBA954 = createNode("ColorRGBA");
ColorRGBA954.USE = "HAnimSiteLineColorRGBA";
LineSet952.color = ColorRGBA954;

Shape951.geometry = LineSet952;

HAnimSegment943.children[3] = Shape951;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_olecranon'/>
Shape Shape955 = createNode("Shape");
LineSet LineSet956 = createNode("LineSet");
LineSet956.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate957 = createNode("Coordinate");
Coordinate957.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1962,1.1375,-0.1123]);
LineSet956.coord = Coordinate957;

ColorRGBA ColorRGBA958 = createNode("ColorRGBA");
ColorRGBA958.USE = "HAnimSiteLineColorRGBA";
LineSet956.color = ColorRGBA958;

Shape955.geometry = LineSet956;

HAnimSegment943.children[4] = Shape955;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_humeral_medial_epicn'/>
Shape Shape959 = createNode("Shape");
LineSet LineSet960 = createNode("LineSet");
LineSet960.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate961 = createNode("Coordinate");
Coordinate961.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1735,1.1272,-0.1113]);
LineSet960.coord = Coordinate961;

ColorRGBA ColorRGBA962 = createNode("ColorRGBA");
ColorRGBA962.USE = "HAnimSiteLineColorRGBA";
LineSet960.color = ColorRGBA962;

Shape959.geometry = LineSet960;

HAnimSegment943.children[5] = Shape959;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radiale'/>
Shape Shape963 = createNode("Shape");
LineSet LineSet964 = createNode("LineSet");
LineSet964.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate965 = createNode("Coordinate");
Coordinate965.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.2182,1.1212,-0.1167]);
LineSet964.coord = Coordinate965;

ColorRGBA ColorRGBA966 = createNode("ColorRGBA");
ColorRGBA966.USE = "HAnimSiteLineColorRGBA";
LineSet964.color = ColorRGBA966;

Shape963.geometry = LineSet964;

HAnimSegment943.children[6] = Shape963;

HAnimSite HAnimSite967 = createNode("HAnimSite");
HAnimSite967.name = "l_radial_styloid_pt";
HAnimSite967.DEF = "hanim_l_radial_styloid_pt";
HAnimSite967.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
//HAnimSite visualization shape
TouchSensor TouchSensor968 = createNode("TouchSensor");
TouchSensor968.description = "HAnimSite l_radial_styloid";
HAnimSite967.children = new MFNode();

HAnimSite967.children[0] = TouchSensor968;

Shape Shape969 = createNode("Shape");
Shape969.USE = "HAnimSiteShape";
HAnimSite967.children[1] = Shape969;

HAnimSegment943.children[7] = HAnimSite967;

HAnimSite HAnimSite970 = createNode("HAnimSite");
HAnimSite970.name = "l_olecranon_pt";
HAnimSite970.DEF = "hanim_l_olecranon_pt";
HAnimSite970.translation = new SFVec3f(new float[0.1962,1.1375,-0.1123]);
//HAnimSite visualization shape
TouchSensor TouchSensor971 = createNode("TouchSensor");
TouchSensor971.description = "HAnimSite l_olecranon";
HAnimSite970.children = new MFNode();

HAnimSite970.children[0] = TouchSensor971;

Shape Shape972 = createNode("Shape");
Shape972.USE = "HAnimSiteShape";
HAnimSite970.children[1] = Shape972;

HAnimSegment943.children[8] = HAnimSite970;

HAnimSite HAnimSite973 = createNode("HAnimSite");
HAnimSite973.name = "l_humeral_medial_epicn_pt";
HAnimSite973.DEF = "hanim_l_humeral_medial_epicn_pt";
HAnimSite973.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
//HAnimSite visualization shape
TouchSensor TouchSensor974 = createNode("TouchSensor");
TouchSensor974.description = "HAnimSite l_humeral_medial_epicn";
HAnimSite973.children = new MFNode();

HAnimSite973.children[0] = TouchSensor974;

Shape Shape975 = createNode("Shape");
Shape975.USE = "HAnimSiteShape";
HAnimSite973.children[1] = Shape975;

HAnimSegment943.children[9] = HAnimSite973;

HAnimSite HAnimSite976 = createNode("HAnimSite");
HAnimSite976.name = "l_radiale_pt";
HAnimSite976.DEF = "hanim_l_radiale_pt";
HAnimSite976.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
//HAnimSite visualization shape
TouchSensor TouchSensor977 = createNode("TouchSensor");
TouchSensor977.description = "HAnimSite l_radiale";
HAnimSite976.children = new MFNode();

HAnimSite976.children[0] = TouchSensor977;

Shape Shape978 = createNode("Shape");
Shape978.USE = "HAnimSiteShape";
HAnimSite976.children[1] = Shape978;

HAnimSegment943.children[10] = HAnimSite976;

HAnimJoint942.children = new MFNode();

HAnimJoint942.children[0] = HAnimSegment943;

HAnimJoint HAnimJoint979 = createNode("HAnimJoint");
HAnimJoint979.name = "l_wrist";
HAnimJoint979.DEF = "hanim_l_wrist";
HAnimJoint979.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimJoint979.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment980 = createNode("HAnimSegment");
HAnimSegment980.name = "l_hand";
HAnimSegment980.DEF = "hanim_l_hand";
//<HAnimJoint name='l_wrist'/> visualization sphere within <HAnimSegment name='l_hand'/>
TouchSensor TouchSensor981 = createNode("TouchSensor");
TouchSensor981.description = "HAnimJoint l_wrist, HAnimSegment l_hand";
HAnimSegment980.children = new MFNode();

HAnimSegment980.children[0] = TouchSensor981;

Transform Transform982 = createNode("Transform");
Transform982.translation = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
Shape Shape983 = createNode("Shape");
Shape983.USE = "HAnimJointShape";
Transform982.children = new MFNode();

Transform982.children[0] = Shape983;

HAnimSegment980.children[1] = Transform982;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_thumb1'/>
Shape Shape984 = createNode("Shape");
LineSet LineSet985 = createNode("LineSet");
LineSet985.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate986 = createNode("Coordinate");
Coordinate986.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534]);
LineSet985.coord = Coordinate986;

ColorRGBA ColorRGBA987 = createNode("ColorRGBA");
ColorRGBA987.USE = "HAnimSegmentLineColorRGBA";
LineSet985.color = ColorRGBA987;

Shape984.geometry = LineSet985;

HAnimSegment980.children[2] = Shape984;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_index0'/>
Shape Shape988 = createNode("Shape");
LineSet LineSet989 = createNode("LineSet");
LineSet989.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate990 = createNode("Coordinate");
Coordinate990.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028]);
LineSet989.coord = Coordinate990;

ColorRGBA ColorRGBA991 = createNode("ColorRGBA");
ColorRGBA991.USE = "HAnimSegmentLineColorRGBA";
LineSet989.color = ColorRGBA991;

Shape988.geometry = LineSet989;

HAnimSegment980.children[3] = Shape988;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_middle0'/>
Shape Shape992 = createNode("Shape");
LineSet LineSet993 = createNode("LineSet");
LineSet993.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate994 = createNode("Coordinate");
Coordinate994.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053]);
LineSet993.coord = Coordinate994;

ColorRGBA ColorRGBA995 = createNode("ColorRGBA");
ColorRGBA995.USE = "HAnimSegmentLineColorRGBA";
LineSet993.color = ColorRGBA995;

Shape992.geometry = LineSet993;

HAnimSegment980.children[4] = Shape992;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_ring0'/>
Shape Shape996 = createNode("Shape");
LineSet LineSet997 = createNode("LineSet");
LineSet997.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate998 = createNode("Coordinate");
Coordinate998.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794]);
LineSet997.coord = Coordinate998;

ColorRGBA ColorRGBA999 = createNode("ColorRGBA");
ColorRGBA999.USE = "HAnimSegmentLineColorRGBA";
LineSet997.color = ColorRGBA999;

Shape996.geometry = LineSet997;

HAnimSegment980.children[5] = Shape996;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_pinky0'/>
Shape Shape1000 = createNode("Shape");
LineSet LineSet1001 = createNode("LineSet");
LineSet1001.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1002 = createNode("Coordinate");
Coordinate1002.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036]);
LineSet1001.coord = Coordinate1002;

ColorRGBA ColorRGBA1003 = createNode("ColorRGBA");
ColorRGBA1003.USE = "HAnimSegmentLineColorRGBA";
LineSet1001.color = ColorRGBA1003;

Shape1000.geometry = LineSet1001;

HAnimSegment980.children[6] = Shape1000;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_metacarpal_pha2'/>
Shape Shape1004 = createNode("Shape");
LineSet LineSet1005 = createNode("LineSet");
LineSet1005.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1006 = createNode("Coordinate");
Coordinate1006.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.2009,0.8139,-0.0237]);
LineSet1005.coord = Coordinate1006;

ColorRGBA ColorRGBA1007 = createNode("ColorRGBA");
ColorRGBA1007.USE = "HAnimSiteLineColorRGBA";
LineSet1005.color = ColorRGBA1007;

Shape1004.geometry = LineSet1005;

HAnimSegment980.children[7] = Shape1004;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_ulnar_styloid'/>
Shape Shape1008 = createNode("Shape");
LineSet LineSet1009 = createNode("LineSet");
LineSet1009.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1010 = createNode("Coordinate");
Coordinate1010.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.2142,0.8529,-0.0648]);
LineSet1009.coord = Coordinate1010;

ColorRGBA ColorRGBA1011 = createNode("ColorRGBA");
ColorRGBA1011.USE = "HAnimSiteLineColorRGBA";
LineSet1009.color = ColorRGBA1011;

Shape1008.geometry = LineSet1009;

HAnimSegment980.children[8] = Shape1008;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_metacarpal_pha5'/>
Shape Shape1012 = createNode("Shape");
LineSet LineSet1013 = createNode("LineSet");
LineSet1013.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1014 = createNode("Coordinate");
Coordinate1014.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1929,0.786,-0.1122]);
LineSet1013.coord = Coordinate1014;

ColorRGBA ColorRGBA1015 = createNode("ColorRGBA");
ColorRGBA1015.USE = "HAnimSiteLineColorRGBA";
LineSet1013.color = ColorRGBA1015;

Shape1012.geometry = LineSet1013;

HAnimSegment980.children[9] = Shape1012;

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_hand_front_view'/>
Shape Shape1016 = createNode("Shape");
LineSet LineSet1017 = createNode("LineSet");
LineSet1017.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1018 = createNode("Coordinate");
Coordinate1018.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.3,0.75,0.45]);
LineSet1017.coord = Coordinate1018;

ColorRGBA ColorRGBA1019 = createNode("ColorRGBA");
ColorRGBA1019.USE = "HAnimSiteViewpointLineColorRGBA";
LineSet1017.color = ColorRGBA1019;

Shape1016.geometry = LineSet1017;

HAnimSegment980.children[10] = Shape1016;

HAnimSite HAnimSite1020 = createNode("HAnimSite");
HAnimSite1020.name = "l_metacarpal_pha2_pt";
HAnimSite1020.DEF = "hanim_l_metacarpal_pha2_pt";
HAnimSite1020.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
//HAnimSite visualization shape
TouchSensor TouchSensor1021 = createNode("TouchSensor");
TouchSensor1021.description = "HAnimSite l_metacarpal_pha2";
HAnimSite1020.children = new MFNode();

HAnimSite1020.children[0] = TouchSensor1021;

Shape Shape1022 = createNode("Shape");
Shape1022.USE = "HAnimSiteShape";
HAnimSite1020.children[1] = Shape1022;

HAnimSegment980.children[11] = HAnimSite1020;

HAnimSite HAnimSite1023 = createNode("HAnimSite");
HAnimSite1023.name = "l_ulnar_styloid_pt";
HAnimSite1023.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite1023.translation = new SFVec3f(new float[0.2142,0.8529,-0.0648]);
//HAnimSite visualization shape
TouchSensor TouchSensor1024 = createNode("TouchSensor");
TouchSensor1024.description = "HAnimSite l_ulnar_styloid";
HAnimSite1023.children = new MFNode();

HAnimSite1023.children[0] = TouchSensor1024;

Shape Shape1025 = createNode("Shape");
Shape1025.USE = "HAnimSiteShape";
HAnimSite1023.children[1] = Shape1025;

HAnimSegment980.children[12] = HAnimSite1023;

HAnimSite HAnimSite1026 = createNode("HAnimSite");
HAnimSite1026.name = "l_metacarpal_pha5_pt";
HAnimSite1026.DEF = "hanim_l_metacarpal_pha5_pt";
HAnimSite1026.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
//HAnimSite visualization shape
TouchSensor TouchSensor1027 = createNode("TouchSensor");
TouchSensor1027.description = "HAnimSite l_metacarpal_pha5";
HAnimSite1026.children = new MFNode();

HAnimSite1026.children[0] = TouchSensor1027;

Shape Shape1028 = createNode("Shape");
Shape1028.USE = "HAnimSiteShape";
HAnimSite1026.children[1] = Shape1028;

HAnimSegment980.children[13] = HAnimSite1026;

HAnimSite HAnimSite1029 = createNode("HAnimSite");
HAnimSite1029.name = "l_hand_front_view";
HAnimSite1029.DEF = "hanim_l_hand_front_view";
HAnimSite1029.translation = new SFVec3f(new float[0.3,0.75,0.45]);
Viewpoint Viewpoint1030 = createNode("Viewpoint");
Viewpoint1030.DEF = "hanim_l_hand_front_viewpoint";
Viewpoint1030.centerOfRotation = new SFVec3f(new float[0,0.7,0]);
Viewpoint1030.description = "left hand front";
Viewpoint1030.position = new SFVec3f(new float[0,0,0]);
HAnimSite1029.children = new MFNode();

HAnimSite1029.children[0] = Viewpoint1030;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1031 = createNode("Anchor");
Anchor1031.description = "HAnimSite Viewpoint hanim_l_hand_front_view";
Anchor1031.url = new MFString(new java.lang.String["#hanim_l_hand_front_viewpoint"]);
LOD LOD1032 = createNode("LOD");
LOD1032.forceTransitions = True;
LOD1032.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1033 = createNode("WorldInfo");
WorldInfo1033.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1032.children = new MFNode();

LOD1032.children[0] = WorldInfo1033;

Shape Shape1034 = createNode("Shape");
Shape1034.USE = "HAnimSiteViewpointShape";
LOD1032.children[1] = Shape1034;

Anchor1031.children = new MFNode();

Anchor1031.children[0] = LOD1032;

HAnimSite1029.children[1] = Anchor1031;

HAnimSegment980.children[14] = HAnimSite1029;

HAnimJoint979.children = new MFNode();

HAnimJoint979.children[0] = HAnimSegment980;

HAnimJoint HAnimJoint1035 = createNode("HAnimJoint");
HAnimJoint1035.name = "l_thumb1";
HAnimJoint1035.DEF = "hanim_l_thumb1";
HAnimJoint1035.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimJoint1035.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1036 = createNode("HAnimSegment");
HAnimSegment1036.name = "l_thumb_metacarpal";
HAnimSegment1036.DEF = "hanim_l_thumb_metacarpal";
//<HAnimJoint name='l_thumb1'/> visualization sphere within <HAnimSegment name='l_thumb_metacarpal'/>
TouchSensor TouchSensor1037 = createNode("TouchSensor");
TouchSensor1037.description = "HAnimJoint l_thumb1, HAnimSegment l_thumb_metacarpal";
HAnimSegment1036.children = new MFNode();

HAnimSegment1036.children[0] = TouchSensor1037;

Transform Transform1038 = createNode("Transform");
Transform1038.translation = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
Shape Shape1039 = createNode("Shape");
Shape1039.USE = "HAnimJointShape";
Transform1038.children = new MFNode();

Transform1038.children[0] = Shape1039;

HAnimSegment1036.children[1] = Transform1038;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_thumb1'/> to <HAnimJoint name='l_thumb2'/>
Shape Shape1040 = createNode("Shape");
LineSet LineSet1041 = createNode("LineSet");
LineSet1041.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1042 = createNode("Coordinate");
Coordinate1042.point = new MFVec3f(new float[0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
LineSet1041.coord = Coordinate1042;

ColorRGBA ColorRGBA1043 = createNode("ColorRGBA");
ColorRGBA1043.USE = "HAnimSegmentLineColorRGBA";
LineSet1041.color = ColorRGBA1043;

Shape1040.geometry = LineSet1041;

HAnimSegment1036.children[2] = Shape1040;

HAnimJoint1035.children = new MFNode();

HAnimJoint1035.children[0] = HAnimSegment1036;

HAnimJoint HAnimJoint1044 = createNode("HAnimJoint");
HAnimJoint1044.name = "l_thumb2";
HAnimJoint1044.DEF = "hanim_l_thumb2";
HAnimJoint1044.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimJoint1044.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1045 = createNode("HAnimSegment");
HAnimSegment1045.name = "l_thumb_proximal";
HAnimSegment1045.DEF = "hanim_l_thumb_proximal";
//<HAnimJoint name='l_thumb2'/> visualization sphere within <HAnimSegment name='l_thumb_proximal'/>
TouchSensor TouchSensor1046 = createNode("TouchSensor");
TouchSensor1046.description = "HAnimJoint l_thumb2, HAnimSegment l_thumb_proximal";
HAnimSegment1045.children = new MFNode();

HAnimSegment1045.children[0] = TouchSensor1046;

Transform Transform1047 = createNode("Transform");
Transform1047.translation = new SFVec3f(new float[0.1951,0.8226,0.0246]);
Shape Shape1048 = createNode("Shape");
Shape1048.USE = "HAnimJointShape";
Transform1047.children = new MFNode();

Transform1047.children[0] = Shape1048;

HAnimSegment1045.children[1] = Transform1047;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_thumb2'/> to <HAnimJoint name='l_thumb3'/>
Shape Shape1049 = createNode("Shape");
LineSet LineSet1050 = createNode("LineSet");
LineSet1050.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1051 = createNode("Coordinate");
Coordinate1051.point = new MFVec3f(new float[0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
LineSet1050.coord = Coordinate1051;

ColorRGBA ColorRGBA1052 = createNode("ColorRGBA");
ColorRGBA1052.USE = "HAnimSegmentLineColorRGBA";
LineSet1050.color = ColorRGBA1052;

Shape1049.geometry = LineSet1050;

HAnimSegment1045.children[2] = Shape1049;

HAnimJoint1044.children = new MFNode();

HAnimJoint1044.children[0] = HAnimSegment1045;

HAnimJoint HAnimJoint1053 = createNode("HAnimJoint");
HAnimJoint1053.name = "l_thumb3";
HAnimJoint1053.DEF = "hanim_l_thumb3";
HAnimJoint1053.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint1053.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1054 = createNode("HAnimSegment");
HAnimSegment1054.name = "l_thumb_distal";
HAnimSegment1054.DEF = "hanim_l_thumb_distal";
//<HAnimJoint name='l_thumb3'/> visualization sphere within <HAnimSegment name='l_thumb_distal'/>
TouchSensor TouchSensor1055 = createNode("TouchSensor");
TouchSensor1055.description = "HAnimJoint l_thumb3, HAnimSegment l_thumb_distal";
HAnimSegment1054.children = new MFNode();

HAnimSegment1054.children[0] = TouchSensor1055;

Transform Transform1056 = createNode("Transform");
Transform1056.translation = new SFVec3f(new float[0.1955,0.8159,0.0464]);
Shape Shape1057 = createNode("Shape");
Shape1057.USE = "HAnimJointShape";
Transform1056.children = new MFNode();

Transform1056.children[0] = Shape1057;

HAnimSegment1054.children[1] = Transform1056;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_thumb3'/> to <HAnimSite name='l_thumb_distal_tip'/>
Shape Shape1058 = createNode("Shape");
LineSet LineSet1059 = createNode("LineSet");
LineSet1059.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1060 = createNode("Coordinate");
Coordinate1060.point = new MFVec3f(new float[0.1955,0.8159,0.0464,0.1982,0.8061,0.0759]);
LineSet1059.coord = Coordinate1060;

ColorRGBA ColorRGBA1061 = createNode("ColorRGBA");
ColorRGBA1061.USE = "HAnimSiteLineColorRGBA";
LineSet1059.color = ColorRGBA1061;

Shape1058.geometry = LineSet1059;

HAnimSegment1054.children[2] = Shape1058;

HAnimSite HAnimSite1062 = createNode("HAnimSite");
HAnimSite1062.name = "l_thumb_distal_tip";
HAnimSite1062.DEF = "hanim_l_thumb_distal_tip";
HAnimSite1062.translation = new SFVec3f(new float[0.1982,0.8061,0.0759]);
//HAnimSite visualization shape
TouchSensor TouchSensor1063 = createNode("TouchSensor");
TouchSensor1063.description = "HAnimSite l_thumb_distal_tip";
HAnimSite1062.children = new MFNode();

HAnimSite1062.children[0] = TouchSensor1063;

Shape Shape1064 = createNode("Shape");
Shape1064.USE = "HAnimSiteShape";
HAnimSite1062.children[1] = Shape1064;

HAnimSegment1054.children[3] = HAnimSite1062;

HAnimJoint1053.children = new MFNode();

HAnimJoint1053.children[0] = HAnimSegment1054;

HAnimJoint1044.children[1] = HAnimJoint1053;

HAnimJoint1035.children[1] = HAnimJoint1044;

HAnimJoint979.children[1] = HAnimJoint1035;

HAnimJoint HAnimJoint1065 = createNode("HAnimJoint");
HAnimJoint1065.name = "l_index0";
HAnimJoint1065.DEF = "hanim_l_index0";
HAnimJoint1065.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimJoint1065.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1066 = createNode("HAnimSegment");
HAnimSegment1066.name = "l_index_metacarpal";
HAnimSegment1066.DEF = "hanim_l_index_metacarpal";
//<HAnimJoint name='l_index0'/> visualization sphere within <HAnimSegment name='l_index_metacarpal'/>
TouchSensor TouchSensor1067 = createNode("TouchSensor");
TouchSensor1067.description = "HAnimJoint l_index0, HAnimSegment l_index_metacarpal";
HAnimSegment1066.children = new MFNode();

HAnimSegment1066.children[0] = TouchSensor1067;

Transform Transform1068 = createNode("Transform");
Transform1068.translation = new SFVec3f(new float[0.1983,0.8024,-0.028]);
Shape Shape1069 = createNode("Shape");
Shape1069.USE = "HAnimJointShape";
Transform1068.children = new MFNode();

Transform1068.children[0] = Shape1069;

HAnimSegment1066.children[1] = Transform1068;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_index0'/> to <HAnimJoint name='l_index1'/>
Shape Shape1070 = createNode("Shape");
LineSet LineSet1071 = createNode("LineSet");
LineSet1071.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1072 = createNode("Coordinate");
Coordinate1072.point = new MFVec3f(new float[0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
LineSet1071.coord = Coordinate1072;

ColorRGBA ColorRGBA1073 = createNode("ColorRGBA");
ColorRGBA1073.USE = "HAnimSegmentLineColorRGBA";
LineSet1071.color = ColorRGBA1073;

Shape1070.geometry = LineSet1071;

HAnimSegment1066.children[2] = Shape1070;

HAnimJoint1065.children = new MFNode();

HAnimJoint1065.children[0] = HAnimSegment1066;

HAnimJoint HAnimJoint1074 = createNode("HAnimJoint");
HAnimJoint1074.name = "l_index1";
HAnimJoint1074.DEF = "hanim_l_index1";
HAnimJoint1074.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint1074.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1075 = createNode("HAnimSegment");
HAnimSegment1075.name = "l_index_proximal";
HAnimSegment1075.DEF = "hanim_l_index_proximal";
//<HAnimJoint name='l_index1'/> visualization sphere within <HAnimSegment name='l_index_proximal'/>
TouchSensor TouchSensor1076 = createNode("TouchSensor");
TouchSensor1076.description = "HAnimJoint l_index1, HAnimSegment l_index_proximal";
HAnimSegment1075.children = new MFNode();

HAnimSegment1075.children[0] = TouchSensor1076;

Transform Transform1077 = createNode("Transform");
Transform1077.translation = new SFVec3f(new float[0.1983,0.7815,-0.028]);
Shape Shape1078 = createNode("Shape");
Shape1078.USE = "HAnimJointShape";
Transform1077.children = new MFNode();

Transform1077.children[0] = Shape1078;

HAnimSegment1075.children[1] = Transform1077;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_index1'/> to <HAnimJoint name='l_index2'/>
Shape Shape1079 = createNode("Shape");
LineSet LineSet1080 = createNode("LineSet");
LineSet1080.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1081 = createNode("Coordinate");
Coordinate1081.point = new MFVec3f(new float[0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
LineSet1080.coord = Coordinate1081;

ColorRGBA ColorRGBA1082 = createNode("ColorRGBA");
ColorRGBA1082.USE = "HAnimSegmentLineColorRGBA";
LineSet1080.color = ColorRGBA1082;

Shape1079.geometry = LineSet1080;

HAnimSegment1075.children[2] = Shape1079;

HAnimJoint1074.children = new MFNode();

HAnimJoint1074.children[0] = HAnimSegment1075;

HAnimJoint HAnimJoint1083 = createNode("HAnimJoint");
HAnimJoint1083.name = "l_index2";
HAnimJoint1083.DEF = "hanim_l_index2";
HAnimJoint1083.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint1083.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1084 = createNode("HAnimSegment");
HAnimSegment1084.name = "l_index_middle";
HAnimSegment1084.DEF = "hanim_l_index_middle";
//<HAnimJoint name='l_index2'/> visualization sphere within <HAnimSegment name='l_index_middle'/>
TouchSensor TouchSensor1085 = createNode("TouchSensor");
TouchSensor1085.description = "HAnimJoint l_index2, HAnimSegment l_index_middle";
HAnimSegment1084.children = new MFNode();

HAnimSegment1084.children[0] = TouchSensor1085;

Transform Transform1086 = createNode("Transform");
Transform1086.translation = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
Shape Shape1087 = createNode("Shape");
Shape1087.USE = "HAnimJointShape";
Transform1086.children = new MFNode();

Transform1086.children[0] = Shape1087;

HAnimSegment1084.children[1] = Transform1086;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_index2'/> to <HAnimJoint name='l_index3'/>
Shape Shape1088 = createNode("Shape");
LineSet LineSet1089 = createNode("LineSet");
LineSet1089.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1090 = createNode("Coordinate");
Coordinate1090.point = new MFVec3f(new float[0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
LineSet1089.coord = Coordinate1090;

ColorRGBA ColorRGBA1091 = createNode("ColorRGBA");
ColorRGBA1091.USE = "HAnimSegmentLineColorRGBA";
LineSet1089.color = ColorRGBA1091;

Shape1088.geometry = LineSet1089;

HAnimSegment1084.children[2] = Shape1088;

HAnimJoint1083.children = new MFNode();

HAnimJoint1083.children[0] = HAnimSegment1084;

HAnimJoint HAnimJoint1092 = createNode("HAnimJoint");
HAnimJoint1092.name = "l_index3";
HAnimJoint1092.DEF = "hanim_l_index3";
HAnimJoint1092.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint1092.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1093 = createNode("HAnimSegment");
HAnimSegment1093.name = "l_index_distal";
HAnimSegment1093.DEF = "hanim_l_index_distal";
//<HAnimJoint name='l_index3'/> visualization sphere within <HAnimSegment name='l_index_distal'/>
TouchSensor TouchSensor1094 = createNode("TouchSensor");
TouchSensor1094.description = "HAnimJoint l_index3, HAnimSegment l_index_distal";
HAnimSegment1093.children = new MFNode();

HAnimSegment1093.children[0] = TouchSensor1094;

Transform Transform1095 = createNode("Transform");
Transform1095.translation = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
Shape Shape1096 = createNode("Shape");
Shape1096.USE = "HAnimJointShape";
Transform1095.children = new MFNode();

Transform1095.children[0] = Shape1096;

HAnimSegment1093.children[1] = Transform1095;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_index_distal_tip'/>
Shape Shape1097 = createNode("Shape");
LineSet LineSet1098 = createNode("LineSet");
LineSet1098.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1099 = createNode("Coordinate");
Coordinate1099.point = new MFVec3f(new float[0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245]);
LineSet1098.coord = Coordinate1099;

ColorRGBA ColorRGBA1100 = createNode("ColorRGBA");
ColorRGBA1100.USE = "HAnimSiteLineColorRGBA";
LineSet1098.color = ColorRGBA1100;

Shape1097.geometry = LineSet1098;

HAnimSegment1093.children[2] = Shape1097;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_dactylion'/>
Shape Shape1101 = createNode("Shape");
LineSet LineSet1102 = createNode("LineSet");
LineSet1102.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1103 = createNode("Coordinate");
Coordinate1103.point = new MFVec3f(new float[0.2028,0.7139,-0.0236,0.2056,0.6743,-0.0482]);
LineSet1102.coord = Coordinate1103;

ColorRGBA ColorRGBA1104 = createNode("ColorRGBA");
ColorRGBA1104.USE = "HAnimSiteLineColorRGBA";
LineSet1102.color = ColorRGBA1104;

Shape1101.geometry = LineSet1102;

HAnimSegment1093.children[3] = Shape1101;

HAnimSite HAnimSite1105 = createNode("HAnimSite");
HAnimSite1105.name = "l_index_distal_tip";
HAnimSite1105.DEF = "hanim_l_index_distal_tip";
HAnimSite1105.translation = new SFVec3f(new float[0.2089,0.6858,-0.0245]);
//HAnimSite visualization shape
TouchSensor TouchSensor1106 = createNode("TouchSensor");
TouchSensor1106.description = "HAnimSite l_index_distal_tip";
HAnimSite1105.children = new MFNode();

HAnimSite1105.children[0] = TouchSensor1106;

Shape Shape1107 = createNode("Shape");
Shape1107.USE = "HAnimSiteShape";
HAnimSite1105.children[1] = Shape1107;

HAnimSegment1093.children[4] = HAnimSite1105;

HAnimSite HAnimSite1108 = createNode("HAnimSite");
HAnimSite1108.name = "l_dactylion_pt";
HAnimSite1108.DEF = "hanim_l_dactylion_pt";
HAnimSite1108.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
//HAnimSite visualization shape
TouchSensor TouchSensor1109 = createNode("TouchSensor");
TouchSensor1109.description = "HAnimSite l_dactylion";
HAnimSite1108.children = new MFNode();

HAnimSite1108.children[0] = TouchSensor1109;

Shape Shape1110 = createNode("Shape");
Shape1110.USE = "HAnimSiteShape";
HAnimSite1108.children[1] = Shape1110;

HAnimSegment1093.children[5] = HAnimSite1108;

HAnimJoint1092.children = new MFNode();

HAnimJoint1092.children[0] = HAnimSegment1093;

HAnimJoint1083.children[1] = HAnimJoint1092;

HAnimJoint1074.children[1] = HAnimJoint1083;

HAnimJoint1065.children[1] = HAnimJoint1074;

HAnimJoint979.children[2] = HAnimJoint1065;

HAnimJoint HAnimJoint1111 = createNode("HAnimJoint");
HAnimJoint1111.name = "l_middle0";
HAnimJoint1111.DEF = "hanim_l_middle0";
HAnimJoint1111.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimJoint1111.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1112 = createNode("HAnimSegment");
HAnimSegment1112.name = "l_middle_metacarpal";
HAnimSegment1112.DEF = "hanim_l_middle_metacarpal";
//<HAnimJoint name='l_middle0'/> visualization sphere within <HAnimSegment name='l_middle_metacarpal'/>
TouchSensor TouchSensor1113 = createNode("TouchSensor");
TouchSensor1113.description = "HAnimJoint l_middle0, HAnimSegment l_middle_metacarpal";
HAnimSegment1112.children = new MFNode();

HAnimSegment1112.children[0] = TouchSensor1113;

Transform Transform1114 = createNode("Transform");
Transform1114.translation = new SFVec3f(new float[0.1987,0.8029,-0.053]);
Shape Shape1115 = createNode("Shape");
Shape1115.USE = "HAnimJointShape";
Transform1114.children = new MFNode();

Transform1114.children[0] = Shape1115;

HAnimSegment1112.children[1] = Transform1114;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle0'/> to <HAnimJoint name='l_middle1'/>
Shape Shape1116 = createNode("Shape");
LineSet LineSet1117 = createNode("LineSet");
LineSet1117.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1118 = createNode("Coordinate");
Coordinate1118.point = new MFVec3f(new float[0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
LineSet1117.coord = Coordinate1118;

ColorRGBA ColorRGBA1119 = createNode("ColorRGBA");
ColorRGBA1119.USE = "HAnimSegmentLineColorRGBA";
LineSet1117.color = ColorRGBA1119;

Shape1116.geometry = LineSet1117;

HAnimSegment1112.children[2] = Shape1116;

HAnimJoint1111.children = new MFNode();

HAnimJoint1111.children[0] = HAnimSegment1112;

HAnimJoint HAnimJoint1120 = createNode("HAnimJoint");
HAnimJoint1120.name = "l_middle1";
HAnimJoint1120.DEF = "hanim_l_middle1";
HAnimJoint1120.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimJoint1120.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1121 = createNode("HAnimSegment");
HAnimSegment1121.name = "l_middle_proximal";
HAnimSegment1121.DEF = "hanim_l_middle_proximal";
//<HAnimJoint name='l_middle1'/> visualization sphere within <HAnimSegment name='l_middle_proximal'/>
TouchSensor TouchSensor1122 = createNode("TouchSensor");
TouchSensor1122.description = "HAnimJoint l_middle1, HAnimSegment l_middle_proximal";
HAnimSegment1121.children = new MFNode();

HAnimSegment1121.children[0] = TouchSensor1122;

Transform Transform1123 = createNode("Transform");
Transform1123.translation = new SFVec3f(new float[0.1987,0.7818,-0.053]);
Shape Shape1124 = createNode("Shape");
Shape1124.USE = "HAnimJointShape";
Transform1123.children = new MFNode();

Transform1123.children[0] = Shape1124;

HAnimSegment1121.children[1] = Transform1123;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle1'/> to <HAnimJoint name='l_middle2'/>
Shape Shape1125 = createNode("Shape");
LineSet LineSet1126 = createNode("LineSet");
LineSet1126.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1127 = createNode("Coordinate");
Coordinate1127.point = new MFVec3f(new float[0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
LineSet1126.coord = Coordinate1127;

ColorRGBA ColorRGBA1128 = createNode("ColorRGBA");
ColorRGBA1128.USE = "HAnimSegmentLineColorRGBA";
LineSet1126.color = ColorRGBA1128;

Shape1125.geometry = LineSet1126;

HAnimSegment1121.children[2] = Shape1125;

HAnimJoint1120.children = new MFNode();

HAnimJoint1120.children[0] = HAnimSegment1121;

HAnimJoint HAnimJoint1129 = createNode("HAnimJoint");
HAnimJoint1129.name = "l_middle2";
HAnimJoint1129.DEF = "hanim_l_middle2";
HAnimJoint1129.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimJoint1129.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1130 = createNode("HAnimSegment");
HAnimSegment1130.name = "l_middle_middle";
HAnimSegment1130.DEF = "hanim_l_middle_middle";
//<HAnimJoint name='l_middle2'/> visualization sphere within <HAnimSegment name='l_middle_middle'/>
TouchSensor TouchSensor1131 = createNode("TouchSensor");
TouchSensor1131.description = "HAnimJoint l_middle2, HAnimSegment l_middle_middle";
HAnimSegment1130.children = new MFNode();

HAnimSegment1130.children[0] = TouchSensor1131;

Transform Transform1132 = createNode("Transform");
Transform1132.translation = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
Shape Shape1133 = createNode("Shape");
Shape1133.USE = "HAnimJointShape";
Transform1132.children = new MFNode();

Transform1132.children[0] = Shape1133;

HAnimSegment1130.children[1] = Transform1132;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle2'/> to <HAnimJoint name='l_middle3'/>
Shape Shape1134 = createNode("Shape");
LineSet LineSet1135 = createNode("LineSet");
LineSet1135.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1136 = createNode("Coordinate");
Coordinate1136.point = new MFVec3f(new float[0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
LineSet1135.coord = Coordinate1136;

ColorRGBA ColorRGBA1137 = createNode("ColorRGBA");
ColorRGBA1137.USE = "HAnimSegmentLineColorRGBA";
LineSet1135.color = ColorRGBA1137;

Shape1134.geometry = LineSet1135;

HAnimSegment1130.children[2] = Shape1134;

HAnimJoint1129.children = new MFNode();

HAnimJoint1129.children[0] = HAnimSegment1130;

HAnimJoint HAnimJoint1138 = createNode("HAnimJoint");
HAnimJoint1138.name = "l_middle3";
HAnimJoint1138.DEF = "hanim_l_middle3";
HAnimJoint1138.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint1138.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1139 = createNode("HAnimSegment");
HAnimSegment1139.name = "l_middle_distal";
HAnimSegment1139.DEF = "hanim_l_middle_distal";
//<HAnimJoint name='l_middle3'/> visualization sphere within <HAnimSegment name='l_middle_distal'/>
TouchSensor TouchSensor1140 = createNode("TouchSensor");
TouchSensor1140.description = "HAnimJoint l_middle3, HAnimSegment l_middle_distal";
HAnimSegment1139.children = new MFNode();

HAnimSegment1139.children[0] = TouchSensor1140;

Transform Transform1141 = createNode("Transform");
Transform1141.translation = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
Shape Shape1142 = createNode("Shape");
Shape1142.USE = "HAnimJointShape";
Transform1141.children = new MFNode();

Transform1141.children[0] = Shape1142;

HAnimSegment1139.children[1] = Transform1141;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_middle3'/> to <HAnimSite name='l_middle_distal_tip'/>
Shape Shape1143 = createNode("Shape");
LineSet LineSet1144 = createNode("LineSet");
LineSet1144.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1145 = createNode("Coordinate");
Coordinate1145.point = new MFVec3f(new float[0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491]);
LineSet1144.coord = Coordinate1145;

ColorRGBA ColorRGBA1146 = createNode("ColorRGBA");
ColorRGBA1146.USE = "HAnimSiteLineColorRGBA";
LineSet1144.color = ColorRGBA1146;

Shape1143.geometry = LineSet1144;

HAnimSegment1139.children[2] = Shape1143;

HAnimSite HAnimSite1147 = createNode("HAnimSite");
HAnimSite1147.name = "l_middle_distal_tip";
HAnimSite1147.DEF = "hanim_l_middle_distal_tip";
HAnimSite1147.translation = new SFVec3f(new float[0.208,0.6731,-0.0491]);
//HAnimSite visualization shape
TouchSensor TouchSensor1148 = createNode("TouchSensor");
TouchSensor1148.description = "HAnimSite l_middle_distal_tip";
HAnimSite1147.children = new MFNode();

HAnimSite1147.children[0] = TouchSensor1148;

Shape Shape1149 = createNode("Shape");
Shape1149.USE = "HAnimSiteShape";
HAnimSite1147.children[1] = Shape1149;

HAnimSegment1139.children[3] = HAnimSite1147;

HAnimJoint1138.children = new MFNode();

HAnimJoint1138.children[0] = HAnimSegment1139;

HAnimJoint1129.children[1] = HAnimJoint1138;

HAnimJoint1120.children[1] = HAnimJoint1129;

HAnimJoint1111.children[1] = HAnimJoint1120;

HAnimJoint979.children[3] = HAnimJoint1111;

HAnimJoint HAnimJoint1150 = createNode("HAnimJoint");
HAnimJoint1150.name = "l_ring0";
HAnimJoint1150.DEF = "hanim_l_ring0";
HAnimJoint1150.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimJoint1150.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1151 = createNode("HAnimSegment");
HAnimSegment1151.name = "l_ring_metacarpal";
HAnimSegment1151.DEF = "hanim_l_ring_metacarpal";
//<HAnimJoint name='l_ring0'/> visualization sphere within <HAnimSegment name='l_ring_metacarpal'/>
TouchSensor TouchSensor1152 = createNode("TouchSensor");
TouchSensor1152.description = "HAnimJoint l_ring0, HAnimSegment l_ring_metacarpal";
HAnimSegment1151.children = new MFNode();

HAnimSegment1151.children[0] = TouchSensor1152;

Transform Transform1153 = createNode("Transform");
Transform1153.translation = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
Shape Shape1154 = createNode("Shape");
Shape1154.USE = "HAnimJointShape";
Transform1153.children = new MFNode();

Transform1153.children[0] = Shape1154;

HAnimSegment1151.children[1] = Transform1153;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring0'/> to <HAnimJoint name='l_ring1'/>
Shape Shape1155 = createNode("Shape");
LineSet LineSet1156 = createNode("LineSet");
LineSet1156.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1157 = createNode("Coordinate");
Coordinate1157.point = new MFVec3f(new float[0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
LineSet1156.coord = Coordinate1157;

ColorRGBA ColorRGBA1158 = createNode("ColorRGBA");
ColorRGBA1158.USE = "HAnimSegmentLineColorRGBA";
LineSet1156.color = ColorRGBA1158;

Shape1155.geometry = LineSet1156;

HAnimSegment1151.children[2] = Shape1155;

HAnimJoint1150.children = new MFNode();

HAnimJoint1150.children[0] = HAnimSegment1151;

HAnimJoint HAnimJoint1159 = createNode("HAnimJoint");
HAnimJoint1159.name = "l_ring1";
HAnimJoint1159.DEF = "hanim_l_ring1";
HAnimJoint1159.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimJoint1159.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1160 = createNode("HAnimSegment");
HAnimSegment1160.name = "l_ring_proximal";
HAnimSegment1160.DEF = "hanim_l_ring_proximal";
//<HAnimJoint name='l_ring1'/> visualization sphere within <HAnimSegment name='l_ring_proximal'/>
TouchSensor TouchSensor1161 = createNode("TouchSensor");
TouchSensor1161.description = "HAnimJoint l_ring1, HAnimSegment l_ring_proximal";
HAnimSegment1160.children = new MFNode();

HAnimSegment1160.children[0] = TouchSensor1161;

Transform Transform1162 = createNode("Transform");
Transform1162.translation = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
Shape Shape1163 = createNode("Shape");
Shape1163.USE = "HAnimJointShape";
Transform1162.children = new MFNode();

Transform1162.children[0] = Shape1163;

HAnimSegment1160.children[1] = Transform1162;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring1'/> to <HAnimJoint name='l_ring2'/>
Shape Shape1164 = createNode("Shape");
LineSet LineSet1165 = createNode("LineSet");
LineSet1165.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1166 = createNode("Coordinate");
Coordinate1166.point = new MFVec3f(new float[0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
LineSet1165.coord = Coordinate1166;

ColorRGBA ColorRGBA1167 = createNode("ColorRGBA");
ColorRGBA1167.USE = "HAnimSegmentLineColorRGBA";
LineSet1165.color = ColorRGBA1167;

Shape1164.geometry = LineSet1165;

HAnimSegment1160.children[2] = Shape1164;

HAnimJoint1159.children = new MFNode();

HAnimJoint1159.children[0] = HAnimSegment1160;

HAnimJoint HAnimJoint1168 = createNode("HAnimJoint");
HAnimJoint1168.name = "l_ring2";
HAnimJoint1168.DEF = "hanim_l_ring2";
HAnimJoint1168.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimJoint1168.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1169 = createNode("HAnimSegment");
HAnimSegment1169.name = "l_ring_middle";
HAnimSegment1169.DEF = "hanim_l_ring_middle";
//<HAnimJoint name='l_ring2'/> visualization sphere within <HAnimSegment name='l_ring_middle'/>
TouchSensor TouchSensor1170 = createNode("TouchSensor");
TouchSensor1170.description = "HAnimJoint l_ring2, HAnimSegment l_ring_middle";
HAnimSegment1169.children = new MFNode();

HAnimSegment1169.children[0] = TouchSensor1170;

Transform Transform1171 = createNode("Transform");
Transform1171.translation = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
Shape Shape1172 = createNode("Shape");
Shape1172.USE = "HAnimJointShape";
Transform1171.children = new MFNode();

Transform1171.children[0] = Shape1172;

HAnimSegment1169.children[1] = Transform1171;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring2'/> to <HAnimJoint name='l_ring3'/>
Shape Shape1173 = createNode("Shape");
LineSet LineSet1174 = createNode("LineSet");
LineSet1174.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1175 = createNode("Coordinate");
Coordinate1175.point = new MFVec3f(new float[0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
LineSet1174.coord = Coordinate1175;

ColorRGBA ColorRGBA1176 = createNode("ColorRGBA");
ColorRGBA1176.USE = "HAnimSegmentLineColorRGBA";
LineSet1174.color = ColorRGBA1176;

Shape1173.geometry = LineSet1174;

HAnimSegment1169.children[2] = Shape1173;

HAnimJoint1168.children = new MFNode();

HAnimJoint1168.children[0] = HAnimSegment1169;

HAnimJoint HAnimJoint1177 = createNode("HAnimJoint");
HAnimJoint1177.name = "l_ring3";
HAnimJoint1177.DEF = "hanim_l_ring3";
HAnimJoint1177.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint1177.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1178 = createNode("HAnimSegment");
HAnimSegment1178.name = "l_ring_distal";
HAnimSegment1178.DEF = "hanim_l_ring_distal";
//<HAnimJoint name='l_ring3'/> visualization sphere within <HAnimSegment name='l_ring_distal'/>
TouchSensor TouchSensor1179 = createNode("TouchSensor");
TouchSensor1179.description = "HAnimJoint l_ring3, HAnimSegment l_ring_distal";
HAnimSegment1178.children = new MFNode();

HAnimSegment1178.children[0] = TouchSensor1179;

Transform Transform1180 = createNode("Transform");
Transform1180.translation = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
Shape Shape1181 = createNode("Shape");
Shape1181.USE = "HAnimJointShape";
Transform1180.children = new MFNode();

Transform1180.children[0] = Shape1181;

HAnimSegment1178.children[1] = Transform1180;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ring3'/> to <HAnimSite name='l_ring_distal_tip'/>
Shape Shape1182 = createNode("Shape");
LineSet LineSet1183 = createNode("LineSet");
LineSet1183.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1184 = createNode("Coordinate");
Coordinate1184.point = new MFVec3f(new float[0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756]);
LineSet1183.coord = Coordinate1184;

ColorRGBA ColorRGBA1185 = createNode("ColorRGBA");
ColorRGBA1185.USE = "HAnimSiteLineColorRGBA";
LineSet1183.color = ColorRGBA1185;

Shape1182.geometry = LineSet1183;

HAnimSegment1178.children[2] = Shape1182;

HAnimSite HAnimSite1186 = createNode("HAnimSite");
HAnimSite1186.name = "l_ring_distal_tip";
HAnimSite1186.DEF = "hanim_l_ring_distal_tip";
HAnimSite1186.translation = new SFVec3f(new float[0.2035,0.675,-0.0756]);
//HAnimSite visualization shape
TouchSensor TouchSensor1187 = createNode("TouchSensor");
TouchSensor1187.description = "HAnimSite l_ring_distal_tip";
HAnimSite1186.children = new MFNode();

HAnimSite1186.children[0] = TouchSensor1187;

Shape Shape1188 = createNode("Shape");
Shape1188.USE = "HAnimSiteShape";
HAnimSite1186.children[1] = Shape1188;

HAnimSegment1178.children[3] = HAnimSite1186;

HAnimJoint1177.children = new MFNode();

HAnimJoint1177.children[0] = HAnimSegment1178;

HAnimJoint1168.children[1] = HAnimJoint1177;

HAnimJoint1159.children[1] = HAnimJoint1168;

HAnimJoint1150.children[1] = HAnimJoint1159;

HAnimJoint979.children[4] = HAnimJoint1150;

HAnimJoint HAnimJoint1189 = createNode("HAnimJoint");
HAnimJoint1189.name = "l_pinky0";
HAnimJoint1189.DEF = "hanim_l_pinky0";
HAnimJoint1189.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimJoint1189.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1190 = createNode("HAnimSegment");
HAnimSegment1190.name = "l_pinky_metacarpal";
HAnimSegment1190.DEF = "hanim_l_pinky_metacarpal";
//<HAnimJoint name='l_pinky0'/> visualization sphere within <HAnimSegment name='l_pinky_metacarpal'/>
TouchSensor TouchSensor1191 = createNode("TouchSensor");
TouchSensor1191.description = "HAnimJoint l_pinky0, HAnimSegment l_pinky_metacarpal";
HAnimSegment1190.children = new MFNode();

HAnimSegment1190.children[0] = TouchSensor1191;

Transform Transform1192 = createNode("Transform");
Transform1192.translation = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
Shape Shape1193 = createNode("Shape");
Shape1193.USE = "HAnimJointShape";
Transform1192.children = new MFNode();

Transform1192.children[0] = Shape1193;

HAnimSegment1190.children[1] = Transform1192;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky0'/> to <HAnimJoint name='l_pinky1'/>
Shape Shape1194 = createNode("Shape");
LineSet LineSet1195 = createNode("LineSet");
LineSet1195.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1196 = createNode("Coordinate");
Coordinate1196.point = new MFVec3f(new float[0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
LineSet1195.coord = Coordinate1196;

ColorRGBA ColorRGBA1197 = createNode("ColorRGBA");
ColorRGBA1197.USE = "HAnimSegmentLineColorRGBA";
LineSet1195.color = ColorRGBA1197;

Shape1194.geometry = LineSet1195;

HAnimSegment1190.children[2] = Shape1194;

HAnimJoint1189.children = new MFNode();

HAnimJoint1189.children[0] = HAnimSegment1190;

HAnimJoint HAnimJoint1198 = createNode("HAnimJoint");
HAnimJoint1198.name = "l_pinky1";
HAnimJoint1198.DEF = "hanim_l_pinky1";
HAnimJoint1198.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimJoint1198.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1199 = createNode("HAnimSegment");
HAnimSegment1199.name = "l_pinky_proximal";
HAnimSegment1199.DEF = "hanim_l_pinky_proximal";
//<HAnimJoint name='l_pinky1'/> visualization sphere within <HAnimSegment name='l_pinky_proximal'/>
TouchSensor TouchSensor1200 = createNode("TouchSensor");
TouchSensor1200.description = "HAnimJoint l_pinky1, HAnimSegment l_pinky_proximal";
HAnimSegment1199.children = new MFNode();

HAnimSegment1199.children[0] = TouchSensor1200;

Transform Transform1201 = createNode("Transform");
Transform1201.translation = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
Shape Shape1202 = createNode("Shape");
Shape1202.USE = "HAnimJointShape";
Transform1201.children = new MFNode();

Transform1201.children[0] = Shape1202;

HAnimSegment1199.children[1] = Transform1201;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky1'/> to <HAnimJoint name='l_pinky2'/>
Shape Shape1203 = createNode("Shape");
LineSet LineSet1204 = createNode("LineSet");
LineSet1204.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1205 = createNode("Coordinate");
Coordinate1205.point = new MFVec3f(new float[0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
LineSet1204.coord = Coordinate1205;

ColorRGBA ColorRGBA1206 = createNode("ColorRGBA");
ColorRGBA1206.USE = "HAnimSegmentLineColorRGBA";
LineSet1204.color = ColorRGBA1206;

Shape1203.geometry = LineSet1204;

HAnimSegment1199.children[2] = Shape1203;

HAnimJoint1198.children = new MFNode();

HAnimJoint1198.children[0] = HAnimSegment1199;

HAnimJoint HAnimJoint1207 = createNode("HAnimJoint");
HAnimJoint1207.name = "l_pinky2";
HAnimJoint1207.DEF = "hanim_l_pinky2";
HAnimJoint1207.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimJoint1207.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1208 = createNode("HAnimSegment");
HAnimSegment1208.name = "l_pinky_middle";
HAnimSegment1208.DEF = "hanim_l_pinky_middle";
//<HAnimJoint name='l_pinky2'/> visualization sphere within <HAnimSegment name='l_pinky_middle'/>
TouchSensor TouchSensor1209 = createNode("TouchSensor");
TouchSensor1209.description = "HAnimJoint l_pinky2, HAnimSegment l_pinky_middle";
HAnimSegment1208.children = new MFNode();

HAnimSegment1208.children[0] = TouchSensor1209;

Transform Transform1210 = createNode("Transform");
Transform1210.translation = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
Shape Shape1211 = createNode("Shape");
Shape1211.USE = "HAnimJointShape";
Transform1210.children = new MFNode();

Transform1210.children[0] = Shape1211;

HAnimSegment1208.children[1] = Transform1210;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky2'/> to <HAnimJoint name='l_pinky3'/>
Shape Shape1212 = createNode("Shape");
LineSet LineSet1213 = createNode("LineSet");
LineSet1213.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1214 = createNode("Coordinate");
Coordinate1214.point = new MFVec3f(new float[0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
LineSet1213.coord = Coordinate1214;

ColorRGBA ColorRGBA1215 = createNode("ColorRGBA");
ColorRGBA1215.USE = "HAnimSegmentLineColorRGBA";
LineSet1213.color = ColorRGBA1215;

Shape1212.geometry = LineSet1213;

HAnimSegment1208.children[2] = Shape1212;

HAnimJoint1207.children = new MFNode();

HAnimJoint1207.children[0] = HAnimSegment1208;

HAnimJoint HAnimJoint1216 = createNode("HAnimJoint");
HAnimJoint1216.name = "l_pinky3";
HAnimJoint1216.DEF = "hanim_l_pinky3";
HAnimJoint1216.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint1216.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1217 = createNode("HAnimSegment");
HAnimSegment1217.name = "l_pinky_distal";
HAnimSegment1217.DEF = "hanim_l_pinky_distal";
//<HAnimJoint name='l_pinky3'/> visualization sphere within <HAnimSegment name='l_pinky_distal'/>
TouchSensor TouchSensor1218 = createNode("TouchSensor");
TouchSensor1218.description = "HAnimJoint l_pinky3, HAnimSegment l_pinky_distal";
HAnimSegment1217.children = new MFNode();

HAnimSegment1217.children[0] = TouchSensor1218;

Transform Transform1219 = createNode("Transform");
Transform1219.translation = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
Shape Shape1220 = createNode("Shape");
Shape1220.USE = "HAnimJointShape";
Transform1219.children = new MFNode();

Transform1219.children[0] = Shape1220;

HAnimSegment1217.children[1] = Transform1219;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_pinky3'/> to <HAnimSite name='l_pinky_distal_tip'/>
Shape Shape1221 = createNode("Shape");
LineSet LineSet1222 = createNode("LineSet");
LineSet1222.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1223 = createNode("Coordinate");
Coordinate1223.point = new MFVec3f(new float[0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012]);
LineSet1222.coord = Coordinate1223;

ColorRGBA ColorRGBA1224 = createNode("ColorRGBA");
ColorRGBA1224.USE = "HAnimSiteLineColorRGBA";
LineSet1222.color = ColorRGBA1224;

Shape1221.geometry = LineSet1222;

HAnimSegment1217.children[2] = Shape1221;

HAnimSite HAnimSite1225 = createNode("HAnimSite");
HAnimSite1225.name = "l_pinky_distal_tip";
HAnimSite1225.DEF = "hanim_l_pinky_distal_tip";
HAnimSite1225.translation = new SFVec3f(new float[0.2014,0.7009,-0.1012]);
//HAnimSite visualization shape
TouchSensor TouchSensor1226 = createNode("TouchSensor");
TouchSensor1226.description = "HAnimSite l_pinky_distal_tip";
HAnimSite1225.children = new MFNode();

HAnimSite1225.children[0] = TouchSensor1226;

Shape Shape1227 = createNode("Shape");
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

HAnimJoint HAnimJoint1228 = createNode("HAnimJoint");
HAnimJoint1228.name = "r_sternoclavicular";
HAnimJoint1228.DEF = "hanim_r_sternoclavicular";
HAnimJoint1228.center = new SFVec3f(new float[-0.082,1.4488,-0.0353]);
HAnimJoint1228.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1229 = createNode("HAnimSegment");
HAnimSegment1229.name = "r_clavicle";
HAnimSegment1229.DEF = "hanim_r_clavicle";
//<HAnimJoint name='r_sternoclavicular'/> visualization sphere within <HAnimSegment name='r_clavicle'/>
TouchSensor TouchSensor1230 = createNode("TouchSensor");
TouchSensor1230.description = "HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle";
HAnimSegment1229.children = new MFNode();

HAnimSegment1229.children[0] = TouchSensor1230;

Transform Transform1231 = createNode("Transform");
Transform1231.translation = new SFVec3f(new float[-0.082,1.4488,-0.0353]);
Shape Shape1232 = createNode("Shape");
Shape1232.USE = "HAnimJointShape";
Transform1231.children = new MFNode();

Transform1231.children[0] = Shape1232;

HAnimSegment1229.children[1] = Transform1231;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_sternoclavicular'/> to <HAnimJoint name='r_acromioclavicular'/>
Shape Shape1233 = createNode("Shape");
LineSet LineSet1234 = createNode("LineSet");
LineSet1234.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1235 = createNode("Coordinate");
Coordinate1235.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.0962,1.4269,-0.0424]);
LineSet1234.coord = Coordinate1235;

ColorRGBA ColorRGBA1236 = createNode("ColorRGBA");
ColorRGBA1236.USE = "HAnimSegmentLineColorRGBA";
LineSet1234.color = ColorRGBA1236;

Shape1233.geometry = LineSet1234;

HAnimSegment1229.children[2] = Shape1233;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_clavicale'/>
Shape Shape1237 = createNode("Shape");
LineSet LineSet1238 = createNode("LineSet");
LineSet1238.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1239 = createNode("Coordinate");
Coordinate1239.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.0115,1.4943,0.04]);
LineSet1238.coord = Coordinate1239;

ColorRGBA ColorRGBA1240 = createNode("ColorRGBA");
ColorRGBA1240.USE = "HAnimSiteLineColorRGBA";
LineSet1238.color = ColorRGBA1240;

Shape1237.geometry = LineSet1238;

HAnimSegment1229.children[3] = Shape1237;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_acromion'/>
Shape Shape1241 = createNode("Shape");
LineSet LineSet1242 = createNode("LineSet");
LineSet1242.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1243 = createNode("Coordinate");
Coordinate1243.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.1905,1.4791,-0.0431]);
LineSet1242.coord = Coordinate1243;

ColorRGBA ColorRGBA1244 = createNode("ColorRGBA");
ColorRGBA1244.USE = "HAnimSiteLineColorRGBA";
LineSet1242.color = ColorRGBA1244;

Shape1241.geometry = LineSet1242;

HAnimSegment1229.children[4] = Shape1241;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_ant'/>
Shape Shape1245 = createNode("Shape");
LineSet LineSet1246 = createNode("LineSet");
LineSet1246.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1247 = createNode("Coordinate");
Coordinate1247.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.1626,1.4072,-0.0031]);
LineSet1246.coord = Coordinate1247;

ColorRGBA ColorRGBA1248 = createNode("ColorRGBA");
ColorRGBA1248.USE = "HAnimSiteLineColorRGBA";
LineSet1246.color = ColorRGBA1248;

Shape1245.geometry = LineSet1246;

HAnimSegment1229.children[5] = Shape1245;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_post'/>
Shape Shape1249 = createNode("Shape");
LineSet LineSet1250 = createNode("LineSet");
LineSet1250.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1251 = createNode("Coordinate");
Coordinate1251.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.1603,1.4098,-0.0826]);
LineSet1250.coord = Coordinate1251;

ColorRGBA ColorRGBA1252 = createNode("ColorRGBA");
ColorRGBA1252.USE = "HAnimSiteLineColorRGBA";
LineSet1250.color = ColorRGBA1252;

Shape1249.geometry = LineSet1250;

HAnimSegment1229.children[6] = Shape1249;

HAnimSite HAnimSite1253 = createNode("HAnimSite");
HAnimSite1253.name = "r_clavicale_pt";
HAnimSite1253.DEF = "hanim_r_clavicale_pt";
HAnimSite1253.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
//HAnimSite visualization shape
TouchSensor TouchSensor1254 = createNode("TouchSensor");
TouchSensor1254.description = "HAnimSite r_clavicale";
HAnimSite1253.children = new MFNode();

HAnimSite1253.children[0] = TouchSensor1254;

Shape Shape1255 = createNode("Shape");
Shape1255.USE = "HAnimSiteShape";
HAnimSite1253.children[1] = Shape1255;

HAnimSegment1229.children[7] = HAnimSite1253;

HAnimSite HAnimSite1256 = createNode("HAnimSite");
HAnimSite1256.name = "r_acromion_pt";
HAnimSite1256.DEF = "hanim_r_acromion_pt";
HAnimSite1256.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
//HAnimSite visualization shape
TouchSensor TouchSensor1257 = createNode("TouchSensor");
TouchSensor1257.description = "HAnimSite r_acromion";
HAnimSite1256.children = new MFNode();

HAnimSite1256.children[0] = TouchSensor1257;

Shape Shape1258 = createNode("Shape");
Shape1258.USE = "HAnimSiteShape";
HAnimSite1256.children[1] = Shape1258;

HAnimSegment1229.children[8] = HAnimSite1256;

HAnimSite HAnimSite1259 = createNode("HAnimSite");
HAnimSite1259.name = "r_axilla_ant_pt";
HAnimSite1259.DEF = "hanim_r_axilla_ant_pt";
HAnimSite1259.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
//HAnimSite visualization shape
TouchSensor TouchSensor1260 = createNode("TouchSensor");
TouchSensor1260.description = "HAnimSite r_axilla_ant";
HAnimSite1259.children = new MFNode();

HAnimSite1259.children[0] = TouchSensor1260;

Shape Shape1261 = createNode("Shape");
Shape1261.USE = "HAnimSiteShape";
HAnimSite1259.children[1] = Shape1261;

HAnimSegment1229.children[9] = HAnimSite1259;

HAnimSite HAnimSite1262 = createNode("HAnimSite");
HAnimSite1262.name = "r_axilla_post_pt";
HAnimSite1262.DEF = "hanim_r_axilla_post_pt";
HAnimSite1262.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
//HAnimSite visualization shape
TouchSensor TouchSensor1263 = createNode("TouchSensor");
TouchSensor1263.description = "HAnimSite r_axilla_post";
HAnimSite1262.children = new MFNode();

HAnimSite1262.children[0] = TouchSensor1263;

Shape Shape1264 = createNode("Shape");
Shape1264.USE = "HAnimSiteShape";
HAnimSite1262.children[1] = Shape1264;

HAnimSegment1229.children[10] = HAnimSite1262;

HAnimJoint1228.children = new MFNode();

HAnimJoint1228.children[0] = HAnimSegment1229;

HAnimJoint HAnimJoint1265 = createNode("HAnimJoint");
HAnimJoint1265.name = "r_acromioclavicular";
HAnimJoint1265.DEF = "hanim_r_acromioclavicular";
HAnimJoint1265.center = new SFVec3f(new float[-0.0962,1.4269,-0.0424]);
HAnimJoint1265.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1266 = createNode("HAnimSegment");
HAnimSegment1266.name = "r_scapula";
HAnimSegment1266.DEF = "hanim_r_scapula";
//<HAnimJoint name='r_acromioclavicular'/> visualization sphere within <HAnimSegment name='r_scapula'/>
TouchSensor TouchSensor1267 = createNode("TouchSensor");
TouchSensor1267.description = "HAnimJoint r_acromioclavicular, HAnimSegment r_scapula";
HAnimSegment1266.children = new MFNode();

HAnimSegment1266.children[0] = TouchSensor1267;

Transform Transform1268 = createNode("Transform");
Transform1268.translation = new SFVec3f(new float[-0.0962,1.4269,-0.0424]);
Shape Shape1269 = createNode("Shape");
Shape1269.USE = "HAnimJointShape";
Transform1268.children = new MFNode();

Transform1268.children[0] = Shape1269;

HAnimSegment1266.children[1] = Transform1268;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_acromioclavicular'/> to <HAnimJoint name='r_shoulder'/>
Shape Shape1270 = createNode("Shape");
LineSet LineSet1271 = createNode("LineSet");
LineSet1271.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1272 = createNode("Coordinate");
Coordinate1272.point = new MFVec3f(new float[-0.0962,1.4269,-0.0424,-0.2029,1.4376,-0.0387]);
LineSet1271.coord = Coordinate1272;

ColorRGBA ColorRGBA1273 = createNode("ColorRGBA");
ColorRGBA1273.USE = "HAnimSegmentLineColorRGBA";
LineSet1271.color = ColorRGBA1273;

Shape1270.geometry = LineSet1271;

HAnimSegment1266.children[2] = Shape1270;

HAnimJoint1265.children = new MFNode();

HAnimJoint1265.children[0] = HAnimSegment1266;

HAnimJoint HAnimJoint1274 = createNode("HAnimJoint");
HAnimJoint1274.name = "r_shoulder";
HAnimJoint1274.DEF = "hanim_r_shoulder";
HAnimJoint1274.center = new SFVec3f(new float[-0.2029,1.4376,-0.0387]);
HAnimJoint1274.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1275 = createNode("HAnimSegment");
HAnimSegment1275.name = "r_upperarm";
HAnimSegment1275.DEF = "hanim_r_upperarm";
//<HAnimJoint name='r_shoulder'/> visualization sphere within <HAnimSegment name='r_upperarm'/>
TouchSensor TouchSensor1276 = createNode("TouchSensor");
TouchSensor1276.description = "HAnimJoint r_shoulder, HAnimSegment r_upperarm";
HAnimSegment1275.children = new MFNode();

HAnimSegment1275.children[0] = TouchSensor1276;

Transform Transform1277 = createNode("Transform");
Transform1277.translation = new SFVec3f(new float[-0.2029,1.4376,-0.0387]);
Shape Shape1278 = createNode("Shape");
Shape1278.USE = "HAnimJointShape";
Transform1277.children = new MFNode();

Transform1277.children[0] = Shape1278;

HAnimSegment1275.children[1] = Transform1277;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_shoulder'/> to <HAnimJoint name='r_elbow'/>
Shape Shape1279 = createNode("Shape");
LineSet LineSet1280 = createNode("LineSet");
LineSet1280.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1281 = createNode("Coordinate");
Coordinate1281.point = new MFVec3f(new float[-0.2029,1.4376,-0.0387,-0.2014,1.1357,-0.0682]);
LineSet1280.coord = Coordinate1281;

ColorRGBA ColorRGBA1282 = createNode("ColorRGBA");
ColorRGBA1282.USE = "HAnimSegmentLineColorRGBA";
LineSet1280.color = ColorRGBA1282;

Shape1279.geometry = LineSet1280;

HAnimSegment1275.children[2] = Shape1279;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_shoulder'/> to <HAnimSite name='r_humeral_lateral_epicn'/>
Shape Shape1283 = createNode("Shape");
LineSet LineSet1284 = createNode("LineSet");
LineSet1284.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1285 = createNode("Coordinate");
Coordinate1285.point = new MFVec3f(new float[-0.2029,1.4376,-0.0387,-0.2224,1.1517,-0.1033]);
LineSet1284.coord = Coordinate1285;

ColorRGBA ColorRGBA1286 = createNode("ColorRGBA");
ColorRGBA1286.USE = "HAnimSiteLineColorRGBA";
LineSet1284.color = ColorRGBA1286;

Shape1283.geometry = LineSet1284;

HAnimSegment1275.children[3] = Shape1283;

HAnimSite HAnimSite1287 = createNode("HAnimSite");
HAnimSite1287.name = "r_humeral_lateral_epicn_pt";
HAnimSite1287.DEF = "hanim_r_humeral_lateral_epicn_pt";
HAnimSite1287.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
//HAnimSite visualization shape
TouchSensor TouchSensor1288 = createNode("TouchSensor");
TouchSensor1288.description = "HAnimSite r_humeral_lateral_epicn";
HAnimSite1287.children = new MFNode();

HAnimSite1287.children[0] = TouchSensor1288;

Shape Shape1289 = createNode("Shape");
Shape1289.USE = "HAnimSiteShape";
HAnimSite1287.children[1] = Shape1289;

HAnimSegment1275.children[4] = HAnimSite1287;

HAnimJoint1274.children = new MFNode();

HAnimJoint1274.children[0] = HAnimSegment1275;

HAnimJoint HAnimJoint1290 = createNode("HAnimJoint");
HAnimJoint1290.name = "r_elbow";
HAnimJoint1290.DEF = "hanim_r_elbow";
HAnimJoint1290.center = new SFVec3f(new float[-0.2014,1.1357,-0.0682]);
HAnimJoint1290.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1291 = createNode("HAnimSegment");
HAnimSegment1291.name = "r_forearm";
HAnimSegment1291.DEF = "hanim_r_forearm";
//<HAnimJoint name='r_elbow'/> visualization sphere within <HAnimSegment name='r_forearm'/>
TouchSensor TouchSensor1292 = createNode("TouchSensor");
TouchSensor1292.description = "HAnimJoint r_elbow, HAnimSegment r_forearm";
HAnimSegment1291.children = new MFNode();

HAnimSegment1291.children[0] = TouchSensor1292;

Transform Transform1293 = createNode("Transform");
Transform1293.translation = new SFVec3f(new float[-0.2014,1.1357,-0.0682]);
Shape Shape1294 = createNode("Shape");
Shape1294.USE = "HAnimJointShape";
Transform1293.children = new MFNode();

Transform1293.children[0] = Shape1294;

HAnimSegment1291.children[1] = Transform1293;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_elbow'/> to <HAnimJoint name='r_wrist'/>
Shape Shape1295 = createNode("Shape");
LineSet LineSet1296 = createNode("LineSet");
LineSet1296.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1297 = createNode("Coordinate");
Coordinate1297.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.1984,0.8663,-0.0583]);
LineSet1296.coord = Coordinate1297;

ColorRGBA ColorRGBA1298 = createNode("ColorRGBA");
ColorRGBA1298.USE = "HAnimSegmentLineColorRGBA";
LineSet1296.color = ColorRGBA1298;

Shape1295.geometry = LineSet1296;

HAnimSegment1291.children[2] = Shape1295;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radial_styloid'/>
Shape Shape1299 = createNode("Shape");
LineSet LineSet1300 = createNode("LineSet");
LineSet1300.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1301 = createNode("Coordinate");
Coordinate1301.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.1884,0.8676,-0.036]);
LineSet1300.coord = Coordinate1301;

ColorRGBA ColorRGBA1302 = createNode("ColorRGBA");
ColorRGBA1302.USE = "HAnimSiteLineColorRGBA";
LineSet1300.color = ColorRGBA1302;

Shape1299.geometry = LineSet1300;

HAnimSegment1291.children[3] = Shape1299;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_olecranon'/>
Shape Shape1303 = createNode("Shape");
LineSet LineSet1304 = createNode("LineSet");
LineSet1304.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1305 = createNode("Coordinate");
Coordinate1305.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.1907,1.1405,-0.1065]);
LineSet1304.coord = Coordinate1305;

ColorRGBA ColorRGBA1306 = createNode("ColorRGBA");
ColorRGBA1306.USE = "HAnimSiteLineColorRGBA";
LineSet1304.color = ColorRGBA1306;

Shape1303.geometry = LineSet1304;

HAnimSegment1291.children[4] = Shape1303;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_humeral_medial_epicn'/>
Shape Shape1307 = createNode("Shape");
LineSet LineSet1308 = createNode("LineSet");
LineSet1308.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1309 = createNode("Coordinate");
Coordinate1309.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.168,1.1298,-0.1062]);
LineSet1308.coord = Coordinate1309;

ColorRGBA ColorRGBA1310 = createNode("ColorRGBA");
ColorRGBA1310.USE = "HAnimSiteLineColorRGBA";
LineSet1308.color = ColorRGBA1310;

Shape1307.geometry = LineSet1308;

HAnimSegment1291.children[5] = Shape1307;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radiale'/>
Shape Shape1311 = createNode("Shape");
LineSet LineSet1312 = createNode("LineSet");
LineSet1312.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1313 = createNode("Coordinate");
Coordinate1313.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.213,1.1305,-0.1091]);
LineSet1312.coord = Coordinate1313;

ColorRGBA ColorRGBA1314 = createNode("ColorRGBA");
ColorRGBA1314.USE = "HAnimSiteLineColorRGBA";
LineSet1312.color = ColorRGBA1314;

Shape1311.geometry = LineSet1312;

HAnimSegment1291.children[6] = Shape1311;

HAnimSite HAnimSite1315 = createNode("HAnimSite");
HAnimSite1315.name = "r_radial_styloid_pt";
HAnimSite1315.DEF = "hanim_r_radial_styloid_pt";
HAnimSite1315.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
//HAnimSite visualization shape
TouchSensor TouchSensor1316 = createNode("TouchSensor");
TouchSensor1316.description = "HAnimSite r_radial_styloid";
HAnimSite1315.children = new MFNode();

HAnimSite1315.children[0] = TouchSensor1316;

Shape Shape1317 = createNode("Shape");
Shape1317.USE = "HAnimSiteShape";
HAnimSite1315.children[1] = Shape1317;

HAnimSegment1291.children[7] = HAnimSite1315;

HAnimSite HAnimSite1318 = createNode("HAnimSite");
HAnimSite1318.name = "r_olecranon_pt";
HAnimSite1318.DEF = "hanim_r_olecranon_pt";
HAnimSite1318.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
//HAnimSite visualization shape
TouchSensor TouchSensor1319 = createNode("TouchSensor");
TouchSensor1319.description = "HAnimSite r_olecranon";
HAnimSite1318.children = new MFNode();

HAnimSite1318.children[0] = TouchSensor1319;

Shape Shape1320 = createNode("Shape");
Shape1320.USE = "HAnimSiteShape";
HAnimSite1318.children[1] = Shape1320;

HAnimSegment1291.children[8] = HAnimSite1318;

HAnimSite HAnimSite1321 = createNode("HAnimSite");
HAnimSite1321.name = "r_humeral_medial_epicn_pt";
HAnimSite1321.DEF = "hanim_r_humeral_medial_epicn_pt";
HAnimSite1321.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
//HAnimSite visualization shape
TouchSensor TouchSensor1322 = createNode("TouchSensor");
TouchSensor1322.description = "HAnimSite r_humeral_medial_epicn";
HAnimSite1321.children = new MFNode();

HAnimSite1321.children[0] = TouchSensor1322;

Shape Shape1323 = createNode("Shape");
Shape1323.USE = "HAnimSiteShape";
HAnimSite1321.children[1] = Shape1323;

HAnimSegment1291.children[9] = HAnimSite1321;

HAnimSite HAnimSite1324 = createNode("HAnimSite");
HAnimSite1324.name = "r_radiale_pt";
HAnimSite1324.DEF = "hanim_r_radiale_pt";
HAnimSite1324.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
//HAnimSite visualization shape
TouchSensor TouchSensor1325 = createNode("TouchSensor");
TouchSensor1325.description = "HAnimSite r_radiale";
HAnimSite1324.children = new MFNode();

HAnimSite1324.children[0] = TouchSensor1325;

Shape Shape1326 = createNode("Shape");
Shape1326.USE = "HAnimSiteShape";
HAnimSite1324.children[1] = Shape1326;

HAnimSegment1291.children[10] = HAnimSite1324;

HAnimJoint1290.children = new MFNode();

HAnimJoint1290.children[0] = HAnimSegment1291;

HAnimJoint HAnimJoint1327 = createNode("HAnimJoint");
HAnimJoint1327.name = "r_wrist";
HAnimJoint1327.DEF = "hanim_r_wrist";
HAnimJoint1327.center = new SFVec3f(new float[-0.1984,0.8663,-0.0583]);
HAnimJoint1327.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1328 = createNode("HAnimSegment");
HAnimSegment1328.name = "r_hand";
HAnimSegment1328.DEF = "hanim_r_hand";
//<HAnimJoint name='r_wrist'/> visualization sphere within <HAnimSegment name='r_hand'/>
TouchSensor TouchSensor1329 = createNode("TouchSensor");
TouchSensor1329.description = "HAnimJoint r_wrist, HAnimSegment r_hand";
HAnimSegment1328.children = new MFNode();

HAnimSegment1328.children[0] = TouchSensor1329;

Transform Transform1330 = createNode("Transform");
Transform1330.translation = new SFVec3f(new float[-0.1984,0.8663,-0.0583]);
Shape Shape1331 = createNode("Shape");
Shape1331.USE = "HAnimJointShape";
Transform1330.children = new MFNode();

Transform1330.children[0] = Shape1331;

HAnimSegment1328.children[1] = Transform1330;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_thumb1'/>
Shape Shape1332 = createNode("Shape");
LineSet LineSet1333 = createNode("LineSet");
LineSet1333.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1334 = createNode("Coordinate");
Coordinate1334.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1924,0.8472,-0.0534]);
LineSet1333.coord = Coordinate1334;

ColorRGBA ColorRGBA1335 = createNode("ColorRGBA");
ColorRGBA1335.USE = "HAnimSegmentLineColorRGBA";
LineSet1333.color = ColorRGBA1335;

Shape1332.geometry = LineSet1333;

HAnimSegment1328.children[2] = Shape1332;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_index0'/>
Shape Shape1336 = createNode("Shape");
LineSet LineSet1337 = createNode("LineSet");
LineSet1337.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1338 = createNode("Coordinate");
Coordinate1338.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1983,0.8024,-0.028]);
LineSet1337.coord = Coordinate1338;

ColorRGBA ColorRGBA1339 = createNode("ColorRGBA");
ColorRGBA1339.USE = "HAnimSegmentLineColorRGBA";
LineSet1337.color = ColorRGBA1339;

Shape1336.geometry = LineSet1337;

HAnimSegment1328.children[3] = Shape1336;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_middle0'/>
Shape Shape1340 = createNode("Shape");
LineSet LineSet1341 = createNode("LineSet");
LineSet1341.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1342 = createNode("Coordinate");
Coordinate1342.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1987,0.8029,-0.053]);
LineSet1341.coord = Coordinate1342;

ColorRGBA ColorRGBA1343 = createNode("ColorRGBA");
ColorRGBA1343.USE = "HAnimSegmentLineColorRGBA";
LineSet1341.color = ColorRGBA1343;

Shape1340.geometry = LineSet1341;

HAnimSegment1328.children[4] = Shape1340;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_ring0'/>
Shape Shape1344 = createNode("Shape");
LineSet LineSet1345 = createNode("LineSet");
LineSet1345.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1346 = createNode("Coordinate");
Coordinate1346.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1956,0.8019,-0.0794]);
LineSet1345.coord = Coordinate1346;

ColorRGBA ColorRGBA1347 = createNode("ColorRGBA");
ColorRGBA1347.USE = "HAnimSegmentLineColorRGBA";
LineSet1345.color = ColorRGBA1347;

Shape1344.geometry = LineSet1345;

HAnimSegment1328.children[5] = Shape1344;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_pinky0'/>
Shape Shape1348 = createNode("Shape");
LineSet LineSet1349 = createNode("LineSet");
LineSet1349.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1350 = createNode("Coordinate");
Coordinate1350.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1925,0.8066,-0.1036]);
LineSet1349.coord = Coordinate1350;

ColorRGBA ColorRGBA1351 = createNode("ColorRGBA");
ColorRGBA1351.USE = "HAnimSegmentLineColorRGBA";
LineSet1349.color = ColorRGBA1351;

Shape1348.geometry = LineSet1349;

HAnimSegment1328.children[6] = Shape1348;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_metacarpal_pha2'/>
Shape Shape1352 = createNode("Shape");
LineSet LineSet1353 = createNode("LineSet");
LineSet1353.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1354 = createNode("Coordinate");
Coordinate1354.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1977,0.8169,-0.0177]);
LineSet1353.coord = Coordinate1354;

ColorRGBA ColorRGBA1355 = createNode("ColorRGBA");
ColorRGBA1355.USE = "HAnimSiteLineColorRGBA";
LineSet1353.color = ColorRGBA1355;

Shape1352.geometry = LineSet1353;

HAnimSegment1328.children[7] = Shape1352;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_ulnar_styloid'/>
Shape Shape1356 = createNode("Shape");
LineSet LineSet1357 = createNode("LineSet");
LineSet1357.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1358 = createNode("Coordinate");
Coordinate1358.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.2117,0.8562,-0.0584]);
LineSet1357.coord = Coordinate1358;

ColorRGBA ColorRGBA1359 = createNode("ColorRGBA");
ColorRGBA1359.USE = "HAnimSiteLineColorRGBA";
LineSet1357.color = ColorRGBA1359;

Shape1356.geometry = LineSet1357;

HAnimSegment1328.children[8] = Shape1356;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_metacarpal_pha5'/>
Shape Shape1360 = createNode("Shape");
LineSet LineSet1361 = createNode("LineSet");
LineSet1361.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1362 = createNode("Coordinate");
Coordinate1362.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1929,0.789,-0.1064]);
LineSet1361.coord = Coordinate1362;

ColorRGBA ColorRGBA1363 = createNode("ColorRGBA");
ColorRGBA1363.USE = "HAnimSiteLineColorRGBA";
LineSet1361.color = ColorRGBA1363;

Shape1360.geometry = LineSet1361;

HAnimSegment1328.children[9] = Shape1360;

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_hand_front_view'/>
Shape Shape1364 = createNode("Shape");
LineSet LineSet1365 = createNode("LineSet");
LineSet1365.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1366 = createNode("Coordinate");
Coordinate1366.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.3,0.75,0.45]);
LineSet1365.coord = Coordinate1366;

ColorRGBA ColorRGBA1367 = createNode("ColorRGBA");
ColorRGBA1367.USE = "HAnimSiteViewpointLineColorRGBA";
LineSet1365.color = ColorRGBA1367;

Shape1364.geometry = LineSet1365;

HAnimSegment1328.children[10] = Shape1364;

HAnimSite HAnimSite1368 = createNode("HAnimSite");
HAnimSite1368.name = "r_metacarpal_pha2_pt";
HAnimSite1368.DEF = "hanim_r_metacarpal_pha2_pt";
HAnimSite1368.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
//HAnimSite visualization shape
TouchSensor TouchSensor1369 = createNode("TouchSensor");
TouchSensor1369.description = "HAnimSite r_metacarpal_pha2";
HAnimSite1368.children = new MFNode();

HAnimSite1368.children[0] = TouchSensor1369;

Shape Shape1370 = createNode("Shape");
Shape1370.USE = "HAnimSiteShape";
HAnimSite1368.children[1] = Shape1370;

HAnimSegment1328.children[11] = HAnimSite1368;

HAnimSite HAnimSite1371 = createNode("HAnimSite");
HAnimSite1371.name = "r_ulnar_styloid_pt";
HAnimSite1371.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite1371.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
//HAnimSite visualization shape
TouchSensor TouchSensor1372 = createNode("TouchSensor");
TouchSensor1372.description = "HAnimSite r_ulnar_styloid";
HAnimSite1371.children = new MFNode();

HAnimSite1371.children[0] = TouchSensor1372;

Shape Shape1373 = createNode("Shape");
Shape1373.USE = "HAnimSiteShape";
HAnimSite1371.children[1] = Shape1373;

HAnimSegment1328.children[12] = HAnimSite1371;

HAnimSite HAnimSite1374 = createNode("HAnimSite");
HAnimSite1374.name = "r_metacarpal_pha5_pt";
HAnimSite1374.DEF = "hanim_r_metacarpal_pha5_pt";
HAnimSite1374.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
//HAnimSite visualization shape
TouchSensor TouchSensor1375 = createNode("TouchSensor");
TouchSensor1375.description = "HAnimSite r_metacarpal_pha5";
HAnimSite1374.children = new MFNode();

HAnimSite1374.children[0] = TouchSensor1375;

Shape Shape1376 = createNode("Shape");
Shape1376.USE = "HAnimSiteShape";
HAnimSite1374.children[1] = Shape1376;

HAnimSegment1328.children[13] = HAnimSite1374;

HAnimSite HAnimSite1377 = createNode("HAnimSite");
HAnimSite1377.name = "r_hand_front_view";
HAnimSite1377.DEF = "hanim_r_hand_front_view";
HAnimSite1377.translation = new SFVec3f(new float[-0.3,0.75,0.45]);
Viewpoint Viewpoint1378 = createNode("Viewpoint");
Viewpoint1378.DEF = "hanim_r_hand_front_viewpoint";
Viewpoint1378.centerOfRotation = new SFVec3f(new float[0,0.7,0]);
Viewpoint1378.description = "right hand front";
Viewpoint1378.position = new SFVec3f(new float[0,0,0]);
HAnimSite1377.children = new MFNode();

HAnimSite1377.children[0] = Viewpoint1378;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1379 = createNode("Anchor");
Anchor1379.description = "HAnimSite Viewpoint hanim_r_hand_front_view";
Anchor1379.url = new MFString(new java.lang.String["#hanim_r_hand_front_viewpoint"]);
LOD LOD1380 = createNode("LOD");
LOD1380.forceTransitions = True;
LOD1380.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1381 = createNode("WorldInfo");
WorldInfo1381.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1380.children = new MFNode();

LOD1380.children[0] = WorldInfo1381;

Shape Shape1382 = createNode("Shape");
Shape1382.USE = "HAnimSiteViewpointShape";
LOD1380.children[1] = Shape1382;

Anchor1379.children = new MFNode();

Anchor1379.children[0] = LOD1380;

HAnimSite1377.children[1] = Anchor1379;

HAnimSegment1328.children[14] = HAnimSite1377;

HAnimJoint1327.children = new MFNode();

HAnimJoint1327.children[0] = HAnimSegment1328;

HAnimJoint HAnimJoint1383 = createNode("HAnimJoint");
HAnimJoint1383.name = "r_thumb1";
HAnimJoint1383.DEF = "hanim_r_thumb1";
HAnimJoint1383.center = new SFVec3f(new float[-0.1924,0.8472,-0.0534]);
HAnimJoint1383.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1384 = createNode("HAnimSegment");
HAnimSegment1384.name = "r_thumb_metacarpal";
HAnimSegment1384.DEF = "hanim_r_thumb_metacarpal";
//<HAnimJoint name='r_thumb1'/> visualization sphere within <HAnimSegment name='r_thumb_metacarpal'/>
TouchSensor TouchSensor1385 = createNode("TouchSensor");
TouchSensor1385.description = "HAnimJoint r_thumb1, HAnimSegment r_thumb_metacarpal";
HAnimSegment1384.children = new MFNode();

HAnimSegment1384.children[0] = TouchSensor1385;

Transform Transform1386 = createNode("Transform");
Transform1386.translation = new SFVec3f(new float[-0.1924,0.8472,-0.0534]);
Shape Shape1387 = createNode("Shape");
Shape1387.USE = "HAnimJointShape";
Transform1386.children = new MFNode();

Transform1386.children[0] = Shape1387;

HAnimSegment1384.children[1] = Transform1386;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_thumb1'/> to <HAnimJoint name='r_thumb2'/>
Shape Shape1388 = createNode("Shape");
LineSet LineSet1389 = createNode("LineSet");
LineSet1389.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1390 = createNode("Coordinate");
Coordinate1390.point = new MFVec3f(new float[-0.1924,0.8472,-0.0534,-0.1951,0.8226,0.0246]);
LineSet1389.coord = Coordinate1390;

ColorRGBA ColorRGBA1391 = createNode("ColorRGBA");
ColorRGBA1391.USE = "HAnimSegmentLineColorRGBA";
LineSet1389.color = ColorRGBA1391;

Shape1388.geometry = LineSet1389;

HAnimSegment1384.children[2] = Shape1388;

HAnimJoint1383.children = new MFNode();

HAnimJoint1383.children[0] = HAnimSegment1384;

HAnimJoint HAnimJoint1392 = createNode("HAnimJoint");
HAnimJoint1392.name = "r_thumb2";
HAnimJoint1392.DEF = "hanim_r_thumb2";
HAnimJoint1392.center = new SFVec3f(new float[-0.1951,0.8226,0.0246]);
HAnimJoint1392.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1393 = createNode("HAnimSegment");
HAnimSegment1393.name = "r_thumb_proximal";
HAnimSegment1393.DEF = "hanim_r_thumb_proximal";
//<HAnimJoint name='r_thumb2'/> visualization sphere within <HAnimSegment name='r_thumb_proximal'/>
TouchSensor TouchSensor1394 = createNode("TouchSensor");
TouchSensor1394.description = "HAnimJoint r_thumb2, HAnimSegment r_thumb_proximal";
HAnimSegment1393.children = new MFNode();

HAnimSegment1393.children[0] = TouchSensor1394;

Transform Transform1395 = createNode("Transform");
Transform1395.translation = new SFVec3f(new float[-0.1951,0.8226,0.0246]);
Shape Shape1396 = createNode("Shape");
Shape1396.USE = "HAnimJointShape";
Transform1395.children = new MFNode();

Transform1395.children[0] = Shape1396;

HAnimSegment1393.children[1] = Transform1395;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_thumb2'/> to <HAnimJoint name='r_thumb3'/>
Shape Shape1397 = createNode("Shape");
LineSet LineSet1398 = createNode("LineSet");
LineSet1398.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1399 = createNode("Coordinate");
Coordinate1399.point = new MFVec3f(new float[-0.1951,0.8226,0.0246,-0.1955,0.8159,0.0464]);
LineSet1398.coord = Coordinate1399;

ColorRGBA ColorRGBA1400 = createNode("ColorRGBA");
ColorRGBA1400.USE = "HAnimSegmentLineColorRGBA";
LineSet1398.color = ColorRGBA1400;

Shape1397.geometry = LineSet1398;

HAnimSegment1393.children[2] = Shape1397;

HAnimJoint1392.children = new MFNode();

HAnimJoint1392.children[0] = HAnimSegment1393;

HAnimJoint HAnimJoint1401 = createNode("HAnimJoint");
HAnimJoint1401.name = "r_thumb3";
HAnimJoint1401.DEF = "hanim_r_thumb3";
HAnimJoint1401.center = new SFVec3f(new float[-0.1955,0.8159,0.0464]);
HAnimJoint1401.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1402 = createNode("HAnimSegment");
HAnimSegment1402.name = "r_thumb_distal";
HAnimSegment1402.DEF = "hanim_r_thumb_distal";
//<HAnimJoint name='r_thumb3'/> visualization sphere within <HAnimSegment name='r_thumb_distal'/>
TouchSensor TouchSensor1403 = createNode("TouchSensor");
TouchSensor1403.description = "HAnimJoint r_thumb3, HAnimSegment r_thumb_distal";
HAnimSegment1402.children = new MFNode();

HAnimSegment1402.children[0] = TouchSensor1403;

Transform Transform1404 = createNode("Transform");
Transform1404.translation = new SFVec3f(new float[-0.1955,0.8159,0.0464]);
Shape Shape1405 = createNode("Shape");
Shape1405.USE = "HAnimJointShape";
Transform1404.children = new MFNode();

Transform1404.children[0] = Shape1405;

HAnimSegment1402.children[1] = Transform1404;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_thumb3'/> to <HAnimSite name='r_thumb_distal_tip'/>
Shape Shape1406 = createNode("Shape");
LineSet LineSet1407 = createNode("LineSet");
LineSet1407.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1408 = createNode("Coordinate");
Coordinate1408.point = new MFVec3f(new float[-0.1955,0.8159,0.0464,-0.1869,0.809,0.082]);
LineSet1407.coord = Coordinate1408;

ColorRGBA ColorRGBA1409 = createNode("ColorRGBA");
ColorRGBA1409.USE = "HAnimSiteLineColorRGBA";
LineSet1407.color = ColorRGBA1409;

Shape1406.geometry = LineSet1407;

HAnimSegment1402.children[2] = Shape1406;

HAnimSite HAnimSite1410 = createNode("HAnimSite");
HAnimSite1410.name = "r_thumb_distal_tip";
HAnimSite1410.DEF = "hanim_r_thumb_distal_tip";
HAnimSite1410.translation = new SFVec3f(new float[-0.1869,0.809,0.082]);
//HAnimSite visualization shape
TouchSensor TouchSensor1411 = createNode("TouchSensor");
TouchSensor1411.description = "HAnimSite r_thumb_distal_tip";
HAnimSite1410.children = new MFNode();

HAnimSite1410.children[0] = TouchSensor1411;

Shape Shape1412 = createNode("Shape");
Shape1412.USE = "HAnimSiteShape";
HAnimSite1410.children[1] = Shape1412;

HAnimSegment1402.children[3] = HAnimSite1410;

HAnimJoint1401.children = new MFNode();

HAnimJoint1401.children[0] = HAnimSegment1402;

HAnimJoint1392.children[1] = HAnimJoint1401;

HAnimJoint1383.children[1] = HAnimJoint1392;

HAnimJoint1327.children[1] = HAnimJoint1383;

HAnimJoint HAnimJoint1413 = createNode("HAnimJoint");
HAnimJoint1413.name = "r_index0";
HAnimJoint1413.DEF = "hanim_r_index0";
HAnimJoint1413.center = new SFVec3f(new float[-0.1983,0.8024,-0.028]);
HAnimJoint1413.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1414 = createNode("HAnimSegment");
HAnimSegment1414.name = "r_index_metacarpal";
HAnimSegment1414.DEF = "hanim_r_index_metacarpal";
//<HAnimJoint name='r_index0'/> visualization sphere within <HAnimSegment name='r_index_metacarpal'/>
TouchSensor TouchSensor1415 = createNode("TouchSensor");
TouchSensor1415.description = "HAnimJoint r_index0, HAnimSegment r_index_metacarpal";
HAnimSegment1414.children = new MFNode();

HAnimSegment1414.children[0] = TouchSensor1415;

Transform Transform1416 = createNode("Transform");
Transform1416.translation = new SFVec3f(new float[-0.1983,0.8024,-0.028]);
Shape Shape1417 = createNode("Shape");
Shape1417.USE = "HAnimJointShape";
Transform1416.children = new MFNode();

Transform1416.children[0] = Shape1417;

HAnimSegment1414.children[1] = Transform1416;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_index0'/> to <HAnimJoint name='r_index1'/>
Shape Shape1418 = createNode("Shape");
LineSet LineSet1419 = createNode("LineSet");
LineSet1419.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1420 = createNode("Coordinate");
Coordinate1420.point = new MFVec3f(new float[-0.1983,0.8024,-0.028,-0.1983,0.7815,-0.028]);
LineSet1419.coord = Coordinate1420;

ColorRGBA ColorRGBA1421 = createNode("ColorRGBA");
ColorRGBA1421.USE = "HAnimSegmentLineColorRGBA";
LineSet1419.color = ColorRGBA1421;

Shape1418.geometry = LineSet1419;

HAnimSegment1414.children[2] = Shape1418;

HAnimJoint1413.children = new MFNode();

HAnimJoint1413.children[0] = HAnimSegment1414;

HAnimJoint HAnimJoint1422 = createNode("HAnimJoint");
HAnimJoint1422.name = "r_index1";
HAnimJoint1422.DEF = "hanim_r_index1";
HAnimJoint1422.center = new SFVec3f(new float[-0.1983,0.7815,-0.028]);
HAnimJoint1422.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1423 = createNode("HAnimSegment");
HAnimSegment1423.name = "r_index_proximal";
HAnimSegment1423.DEF = "hanim_r_index_proximal";
//<HAnimJoint name='r_index1'/> visualization sphere within <HAnimSegment name='r_index_proximal'/>
TouchSensor TouchSensor1424 = createNode("TouchSensor");
TouchSensor1424.description = "HAnimJoint r_index1, HAnimSegment r_index_proximal";
HAnimSegment1423.children = new MFNode();

HAnimSegment1423.children[0] = TouchSensor1424;

Transform Transform1425 = createNode("Transform");
Transform1425.translation = new SFVec3f(new float[-0.1983,0.7815,-0.028]);
Shape Shape1426 = createNode("Shape");
Shape1426.USE = "HAnimJointShape";
Transform1425.children = new MFNode();

Transform1425.children[0] = Shape1426;

HAnimSegment1423.children[1] = Transform1425;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_index1'/> to <HAnimJoint name='r_index2'/>
Shape Shape1427 = createNode("Shape");
LineSet LineSet1428 = createNode("LineSet");
LineSet1428.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1429 = createNode("Coordinate");
Coordinate1429.point = new MFVec3f(new float[-0.1983,0.7815,-0.028,-0.2017,0.7363,-0.0248]);
LineSet1428.coord = Coordinate1429;

ColorRGBA ColorRGBA1430 = createNode("ColorRGBA");
ColorRGBA1430.USE = "HAnimSegmentLineColorRGBA";
LineSet1428.color = ColorRGBA1430;

Shape1427.geometry = LineSet1428;

HAnimSegment1423.children[2] = Shape1427;

HAnimJoint1422.children = new MFNode();

HAnimJoint1422.children[0] = HAnimSegment1423;

HAnimJoint HAnimJoint1431 = createNode("HAnimJoint");
HAnimJoint1431.name = "r_index2";
HAnimJoint1431.DEF = "hanim_r_index2";
HAnimJoint1431.center = new SFVec3f(new float[-0.2017,0.7363,-0.0248]);
HAnimJoint1431.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1432 = createNode("HAnimSegment");
HAnimSegment1432.name = "r_index_middle";
HAnimSegment1432.DEF = "hanim_r_index_middle";
//<HAnimJoint name='r_index2'/> visualization sphere within <HAnimSegment name='r_index_middle'/>
TouchSensor TouchSensor1433 = createNode("TouchSensor");
TouchSensor1433.description = "HAnimJoint r_index2, HAnimSegment r_index_middle";
HAnimSegment1432.children = new MFNode();

HAnimSegment1432.children[0] = TouchSensor1433;

Transform Transform1434 = createNode("Transform");
Transform1434.translation = new SFVec3f(new float[-0.2017,0.7363,-0.0248]);
Shape Shape1435 = createNode("Shape");
Shape1435.USE = "HAnimJointShape";
Transform1434.children = new MFNode();

Transform1434.children[0] = Shape1435;

HAnimSegment1432.children[1] = Transform1434;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_index2'/> to <HAnimJoint name='r_index3'/>
Shape Shape1436 = createNode("Shape");
LineSet LineSet1437 = createNode("LineSet");
LineSet1437.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1438 = createNode("Coordinate");
Coordinate1438.point = new MFVec3f(new float[-0.2017,0.7363,-0.0248,-0.2028,0.7139,-0.0236]);
LineSet1437.coord = Coordinate1438;

ColorRGBA ColorRGBA1439 = createNode("ColorRGBA");
ColorRGBA1439.USE = "HAnimSegmentLineColorRGBA";
LineSet1437.color = ColorRGBA1439;

Shape1436.geometry = LineSet1437;

HAnimSegment1432.children[2] = Shape1436;

HAnimJoint1431.children = new MFNode();

HAnimJoint1431.children[0] = HAnimSegment1432;

HAnimJoint HAnimJoint1440 = createNode("HAnimJoint");
HAnimJoint1440.name = "r_index3";
HAnimJoint1440.DEF = "hanim_r_index3";
HAnimJoint1440.center = new SFVec3f(new float[-0.2028,0.7139,-0.0236]);
HAnimJoint1440.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1441 = createNode("HAnimSegment");
HAnimSegment1441.name = "r_index_distal";
HAnimSegment1441.DEF = "hanim_r_index_distal";
//<HAnimJoint name='r_index3'/> visualization sphere within <HAnimSegment name='r_index_distal'/>
TouchSensor TouchSensor1442 = createNode("TouchSensor");
TouchSensor1442.description = "HAnimJoint r_index3, HAnimSegment r_index_distal";
HAnimSegment1441.children = new MFNode();

HAnimSegment1441.children[0] = TouchSensor1442;

Transform Transform1443 = createNode("Transform");
Transform1443.translation = new SFVec3f(new float[-0.2028,0.7139,-0.0236]);
Shape Shape1444 = createNode("Shape");
Shape1444.USE = "HAnimJointShape";
Transform1443.children = new MFNode();

Transform1443.children[0] = Shape1444;

HAnimSegment1441.children[1] = Transform1443;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_index_distal_tip'/>
Shape Shape1445 = createNode("Shape");
LineSet LineSet1446 = createNode("LineSet");
LineSet1446.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1447 = createNode("Coordinate");
Coordinate1447.point = new MFVec3f(new float[-0.2028,0.7139,-0.0236,-0.198,0.6883,-0.018]);
LineSet1446.coord = Coordinate1447;

ColorRGBA ColorRGBA1448 = createNode("ColorRGBA");
ColorRGBA1448.USE = "HAnimSiteLineColorRGBA";
LineSet1446.color = ColorRGBA1448;

Shape1445.geometry = LineSet1446;

HAnimSegment1441.children[2] = Shape1445;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_dactylion'/>
Shape Shape1449 = createNode("Shape");
LineSet LineSet1450 = createNode("LineSet");
LineSet1450.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1451 = createNode("Coordinate");
Coordinate1451.point = new MFVec3f(new float[-0.2028,0.7139,-0.0236,-0.1941,0.6772,-0.0423]);
LineSet1450.coord = Coordinate1451;

ColorRGBA ColorRGBA1452 = createNode("ColorRGBA");
ColorRGBA1452.USE = "HAnimSiteLineColorRGBA";
LineSet1450.color = ColorRGBA1452;

Shape1449.geometry = LineSet1450;

HAnimSegment1441.children[3] = Shape1449;

HAnimSite HAnimSite1453 = createNode("HAnimSite");
HAnimSite1453.name = "r_index_distal_tip";
HAnimSite1453.DEF = "hanim_r_index_distal_tip";
HAnimSite1453.translation = new SFVec3f(new float[-0.198,0.6883,-0.018]);
//HAnimSite visualization shape
TouchSensor TouchSensor1454 = createNode("TouchSensor");
TouchSensor1454.description = "HAnimSite r_index_distal_tip";
HAnimSite1453.children = new MFNode();

HAnimSite1453.children[0] = TouchSensor1454;

Shape Shape1455 = createNode("Shape");
Shape1455.USE = "HAnimSiteShape";
HAnimSite1453.children[1] = Shape1455;

HAnimSegment1441.children[4] = HAnimSite1453;

HAnimSite HAnimSite1456 = createNode("HAnimSite");
HAnimSite1456.name = "r_dactylion_pt";
HAnimSite1456.DEF = "hanim_r_dactylion_pt";
HAnimSite1456.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
//HAnimSite visualization shape
TouchSensor TouchSensor1457 = createNode("TouchSensor");
TouchSensor1457.description = "HAnimSite r_dactylion";
HAnimSite1456.children = new MFNode();

HAnimSite1456.children[0] = TouchSensor1457;

Shape Shape1458 = createNode("Shape");
Shape1458.USE = "HAnimSiteShape";
HAnimSite1456.children[1] = Shape1458;

HAnimSegment1441.children[5] = HAnimSite1456;

HAnimJoint1440.children = new MFNode();

HAnimJoint1440.children[0] = HAnimSegment1441;

HAnimJoint1431.children[1] = HAnimJoint1440;

HAnimJoint1422.children[1] = HAnimJoint1431;

HAnimJoint1413.children[1] = HAnimJoint1422;

HAnimJoint1327.children[2] = HAnimJoint1413;

HAnimJoint HAnimJoint1459 = createNode("HAnimJoint");
HAnimJoint1459.name = "r_middle0";
HAnimJoint1459.DEF = "hanim_r_middle0";
HAnimJoint1459.center = new SFVec3f(new float[-0.1987,0.8029,-0.053]);
HAnimJoint1459.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1460 = createNode("HAnimSegment");
HAnimSegment1460.name = "r_middle_metacarpal";
HAnimSegment1460.DEF = "hanim_r_middle_metacarpal";
//<HAnimJoint name='r_middle0'/> visualization sphere within <HAnimSegment name='r_middle_metacarpal'/>
TouchSensor TouchSensor1461 = createNode("TouchSensor");
TouchSensor1461.description = "HAnimJoint r_middle0, HAnimSegment r_middle_metacarpal";
HAnimSegment1460.children = new MFNode();

HAnimSegment1460.children[0] = TouchSensor1461;

Transform Transform1462 = createNode("Transform");
Transform1462.translation = new SFVec3f(new float[-0.1987,0.8029,-0.053]);
Shape Shape1463 = createNode("Shape");
Shape1463.USE = "HAnimJointShape";
Transform1462.children = new MFNode();

Transform1462.children[0] = Shape1463;

HAnimSegment1460.children[1] = Transform1462;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle0'/> to <HAnimJoint name='r_middle1'/>
Shape Shape1464 = createNode("Shape");
LineSet LineSet1465 = createNode("LineSet");
LineSet1465.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1466 = createNode("Coordinate");
Coordinate1466.point = new MFVec3f(new float[-0.1987,0.8029,-0.053,-0.1987,0.7818,-0.053]);
LineSet1465.coord = Coordinate1466;

ColorRGBA ColorRGBA1467 = createNode("ColorRGBA");
ColorRGBA1467.USE = "HAnimSegmentLineColorRGBA";
LineSet1465.color = ColorRGBA1467;

Shape1464.geometry = LineSet1465;

HAnimSegment1460.children[2] = Shape1464;

HAnimJoint1459.children = new MFNode();

HAnimJoint1459.children[0] = HAnimSegment1460;

HAnimJoint HAnimJoint1468 = createNode("HAnimJoint");
HAnimJoint1468.name = "r_middle1";
HAnimJoint1468.DEF = "hanim_r_middle1";
HAnimJoint1468.center = new SFVec3f(new float[-0.1987,0.7818,-0.053]);
HAnimJoint1468.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1469 = createNode("HAnimSegment");
HAnimSegment1469.name = "r_middle_proximal";
HAnimSegment1469.DEF = "hanim_r_middle_proximal";
//<HAnimJoint name='r_middle1'/> visualization sphere within <HAnimSegment name='r_middle_proximal'/>
TouchSensor TouchSensor1470 = createNode("TouchSensor");
TouchSensor1470.description = "HAnimJoint r_middle1, HAnimSegment r_middle_proximal";
HAnimSegment1469.children = new MFNode();

HAnimSegment1469.children[0] = TouchSensor1470;

Transform Transform1471 = createNode("Transform");
Transform1471.translation = new SFVec3f(new float[-0.1987,0.7818,-0.053]);
Shape Shape1472 = createNode("Shape");
Shape1472.USE = "HAnimJointShape";
Transform1471.children = new MFNode();

Transform1471.children[0] = Shape1472;

HAnimSegment1469.children[1] = Transform1471;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle1'/> to <HAnimJoint name='r_middle2'/>
Shape Shape1473 = createNode("Shape");
LineSet LineSet1474 = createNode("LineSet");
LineSet1474.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1475 = createNode("Coordinate");
Coordinate1475.point = new MFVec3f(new float[-0.1987,0.7818,-0.053,-0.2013,0.7273,-0.0503]);
LineSet1474.coord = Coordinate1475;

ColorRGBA ColorRGBA1476 = createNode("ColorRGBA");
ColorRGBA1476.USE = "HAnimSegmentLineColorRGBA";
LineSet1474.color = ColorRGBA1476;

Shape1473.geometry = LineSet1474;

HAnimSegment1469.children[2] = Shape1473;

HAnimJoint1468.children = new MFNode();

HAnimJoint1468.children[0] = HAnimSegment1469;

HAnimJoint HAnimJoint1477 = createNode("HAnimJoint");
HAnimJoint1477.name = "r_middle2";
HAnimJoint1477.DEF = "hanim_r_middle2";
HAnimJoint1477.center = new SFVec3f(new float[-0.2013,0.7273,-0.0503]);
HAnimJoint1477.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1478 = createNode("HAnimSegment");
HAnimSegment1478.name = "r_middle_middle";
HAnimSegment1478.DEF = "hanim_r_middle_middle";
//<HAnimJoint name='r_middle2'/> visualization sphere within <HAnimSegment name='r_middle_middle'/>
TouchSensor TouchSensor1479 = createNode("TouchSensor");
TouchSensor1479.description = "HAnimJoint r_middle2, HAnimSegment r_middle_middle";
HAnimSegment1478.children = new MFNode();

HAnimSegment1478.children[0] = TouchSensor1479;

Transform Transform1480 = createNode("Transform");
Transform1480.translation = new SFVec3f(new float[-0.2013,0.7273,-0.0503]);
Shape Shape1481 = createNode("Shape");
Shape1481.USE = "HAnimJointShape";
Transform1480.children = new MFNode();

Transform1480.children[0] = Shape1481;

HAnimSegment1478.children[1] = Transform1480;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle2'/> to <HAnimJoint name='r_middle3'/>
Shape Shape1482 = createNode("Shape");
LineSet LineSet1483 = createNode("LineSet");
LineSet1483.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1484 = createNode("Coordinate");
Coordinate1484.point = new MFVec3f(new float[-0.2013,0.7273,-0.0503,-0.2026,0.7011,-0.0494]);
LineSet1483.coord = Coordinate1484;

ColorRGBA ColorRGBA1485 = createNode("ColorRGBA");
ColorRGBA1485.USE = "HAnimSegmentLineColorRGBA";
LineSet1483.color = ColorRGBA1485;

Shape1482.geometry = LineSet1483;

HAnimSegment1478.children[2] = Shape1482;

HAnimJoint1477.children = new MFNode();

HAnimJoint1477.children[0] = HAnimSegment1478;

HAnimJoint HAnimJoint1486 = createNode("HAnimJoint");
HAnimJoint1486.name = "r_middle3";
HAnimJoint1486.DEF = "hanim_r_middle3";
HAnimJoint1486.center = new SFVec3f(new float[-0.2026,0.7011,-0.0494]);
HAnimJoint1486.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1487 = createNode("HAnimSegment");
HAnimSegment1487.name = "r_middle_distal";
HAnimSegment1487.DEF = "hanim_r_middle_distal";
//<HAnimJoint name='r_middle3'/> visualization sphere within <HAnimSegment name='r_middle_distal'/>
TouchSensor TouchSensor1488 = createNode("TouchSensor");
TouchSensor1488.description = "HAnimJoint r_middle3, HAnimSegment r_middle_distal";
HAnimSegment1487.children = new MFNode();

HAnimSegment1487.children[0] = TouchSensor1488;

Transform Transform1489 = createNode("Transform");
Transform1489.translation = new SFVec3f(new float[-0.2026,0.7011,-0.0494]);
Shape Shape1490 = createNode("Shape");
Shape1490.USE = "HAnimJointShape";
Transform1489.children = new MFNode();

Transform1489.children[0] = Shape1490;

HAnimSegment1487.children[1] = Transform1489;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_middle3'/> to <HAnimSite name='r_middle_distal_tip'/>
Shape Shape1491 = createNode("Shape");
LineSet LineSet1492 = createNode("LineSet");
LineSet1492.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1493 = createNode("Coordinate");
Coordinate1493.point = new MFVec3f(new float[-0.2026,0.7011,-0.0494,-0.1969,0.6758,-0.0427]);
LineSet1492.coord = Coordinate1493;

ColorRGBA ColorRGBA1494 = createNode("ColorRGBA");
ColorRGBA1494.USE = "HAnimSiteLineColorRGBA";
LineSet1492.color = ColorRGBA1494;

Shape1491.geometry = LineSet1492;

HAnimSegment1487.children[2] = Shape1491;

HAnimSite HAnimSite1495 = createNode("HAnimSite");
HAnimSite1495.name = "r_middle_distal_tip";
HAnimSite1495.DEF = "hanim_r_middle_distal_tip";
HAnimSite1495.translation = new SFVec3f(new float[-0.1969,0.6758,-0.0427]);
//HAnimSite visualization shape
TouchSensor TouchSensor1496 = createNode("TouchSensor");
TouchSensor1496.description = "HAnimSite r_middle_distal_tip";
HAnimSite1495.children = new MFNode();

HAnimSite1495.children[0] = TouchSensor1496;

Shape Shape1497 = createNode("Shape");
Shape1497.USE = "HAnimSiteShape";
HAnimSite1495.children[1] = Shape1497;

HAnimSegment1487.children[3] = HAnimSite1495;

HAnimJoint1486.children = new MFNode();

HAnimJoint1486.children[0] = HAnimSegment1487;

HAnimJoint1477.children[1] = HAnimJoint1486;

HAnimJoint1468.children[1] = HAnimJoint1477;

HAnimJoint1459.children[1] = HAnimJoint1468;

HAnimJoint1327.children[3] = HAnimJoint1459;

HAnimJoint HAnimJoint1498 = createNode("HAnimJoint");
HAnimJoint1498.name = "r_ring0";
HAnimJoint1498.DEF = "hanim_r_ring0";
HAnimJoint1498.center = new SFVec3f(new float[-0.1956,0.8019,-0.0794]);
HAnimJoint1498.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1499 = createNode("HAnimSegment");
HAnimSegment1499.name = "r_ring_metacarpal";
HAnimSegment1499.DEF = "hanim_r_ring_metacarpal";
//<HAnimJoint name='r_ring0'/> visualization sphere within <HAnimSegment name='r_ring_metacarpal'/>
TouchSensor TouchSensor1500 = createNode("TouchSensor");
TouchSensor1500.description = "HAnimJoint r_ring0, HAnimSegment r_ring_metacarpal";
HAnimSegment1499.children = new MFNode();

HAnimSegment1499.children[0] = TouchSensor1500;

Transform Transform1501 = createNode("Transform");
Transform1501.translation = new SFVec3f(new float[-0.1956,0.8019,-0.0794]);
Shape Shape1502 = createNode("Shape");
Shape1502.USE = "HAnimJointShape";
Transform1501.children = new MFNode();

Transform1501.children[0] = Shape1502;

HAnimSegment1499.children[1] = Transform1501;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring0'/> to <HAnimJoint name='r_ring1'/>
Shape Shape1503 = createNode("Shape");
LineSet LineSet1504 = createNode("LineSet");
LineSet1504.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1505 = createNode("Coordinate");
Coordinate1505.point = new MFVec3f(new float[-0.1956,0.8019,-0.0794,-0.1956,0.7815,-0.0794]);
LineSet1504.coord = Coordinate1505;

ColorRGBA ColorRGBA1506 = createNode("ColorRGBA");
ColorRGBA1506.USE = "HAnimSegmentLineColorRGBA";
LineSet1504.color = ColorRGBA1506;

Shape1503.geometry = LineSet1504;

HAnimSegment1499.children[2] = Shape1503;

HAnimJoint1498.children = new MFNode();

HAnimJoint1498.children[0] = HAnimSegment1499;

HAnimJoint HAnimJoint1507 = createNode("HAnimJoint");
HAnimJoint1507.name = "r_ring1";
HAnimJoint1507.DEF = "hanim_r_ring1";
HAnimJoint1507.center = new SFVec3f(new float[-0.1956,0.7815,-0.0794]);
HAnimJoint1507.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1508 = createNode("HAnimSegment");
HAnimSegment1508.name = "r_ring_proximal";
HAnimSegment1508.DEF = "hanim_r_ring_proximal";
//<HAnimJoint name='r_ring1'/> visualization sphere within <HAnimSegment name='r_ring_proximal'/>
TouchSensor TouchSensor1509 = createNode("TouchSensor");
TouchSensor1509.description = "HAnimJoint r_ring1, HAnimSegment r_ring_proximal";
HAnimSegment1508.children = new MFNode();

HAnimSegment1508.children[0] = TouchSensor1509;

Transform Transform1510 = createNode("Transform");
Transform1510.translation = new SFVec3f(new float[-0.1956,0.7815,-0.0794]);
Shape Shape1511 = createNode("Shape");
Shape1511.USE = "HAnimJointShape";
Transform1510.children = new MFNode();

Transform1510.children[0] = Shape1511;

HAnimSegment1508.children[1] = Transform1510;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring1'/> to <HAnimJoint name='r_ring2'/>
Shape Shape1512 = createNode("Shape");
LineSet LineSet1513 = createNode("LineSet");
LineSet1513.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1514 = createNode("Coordinate");
Coordinate1514.point = new MFVec3f(new float[-0.1956,0.7815,-0.0794,-0.1973,0.7287,-0.0777]);
LineSet1513.coord = Coordinate1514;

ColorRGBA ColorRGBA1515 = createNode("ColorRGBA");
ColorRGBA1515.USE = "HAnimSegmentLineColorRGBA";
LineSet1513.color = ColorRGBA1515;

Shape1512.geometry = LineSet1513;

HAnimSegment1508.children[2] = Shape1512;

HAnimJoint1507.children = new MFNode();

HAnimJoint1507.children[0] = HAnimSegment1508;

HAnimJoint HAnimJoint1516 = createNode("HAnimJoint");
HAnimJoint1516.name = "r_ring2";
HAnimJoint1516.DEF = "hanim_r_ring2";
HAnimJoint1516.center = new SFVec3f(new float[-0.1973,0.7287,-0.0777]);
HAnimJoint1516.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1517 = createNode("HAnimSegment");
HAnimSegment1517.name = "r_ring_middle";
HAnimSegment1517.DEF = "hanim_r_ring_middle";
//<HAnimJoint name='r_ring2'/> visualization sphere within <HAnimSegment name='r_ring_middle'/>
TouchSensor TouchSensor1518 = createNode("TouchSensor");
TouchSensor1518.description = "HAnimJoint r_ring2, HAnimSegment r_ring_middle";
HAnimSegment1517.children = new MFNode();

HAnimSegment1517.children[0] = TouchSensor1518;

Transform Transform1519 = createNode("Transform");
Transform1519.translation = new SFVec3f(new float[-0.1973,0.7287,-0.0777]);
Shape Shape1520 = createNode("Shape");
Shape1520.USE = "HAnimJointShape";
Transform1519.children = new MFNode();

Transform1519.children[0] = Shape1520;

HAnimSegment1517.children[1] = Transform1519;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring2'/> to <HAnimJoint name='r_ring3'/>
Shape Shape1521 = createNode("Shape");
LineSet LineSet1522 = createNode("LineSet");
LineSet1522.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1523 = createNode("Coordinate");
Coordinate1523.point = new MFVec3f(new float[-0.1973,0.7287,-0.0777,-0.1983,0.7045,-0.0767]);
LineSet1522.coord = Coordinate1523;

ColorRGBA ColorRGBA1524 = createNode("ColorRGBA");
ColorRGBA1524.USE = "HAnimSegmentLineColorRGBA";
LineSet1522.color = ColorRGBA1524;

Shape1521.geometry = LineSet1522;

HAnimSegment1517.children[2] = Shape1521;

HAnimJoint1516.children = new MFNode();

HAnimJoint1516.children[0] = HAnimSegment1517;

HAnimJoint HAnimJoint1525 = createNode("HAnimJoint");
HAnimJoint1525.name = "r_ring3";
HAnimJoint1525.DEF = "hanim_r_ring3";
HAnimJoint1525.center = new SFVec3f(new float[-0.1983,0.7045,-0.0767]);
HAnimJoint1525.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1526 = createNode("HAnimSegment");
HAnimSegment1526.name = "r_ring_distal";
HAnimSegment1526.DEF = "hanim_r_ring_distal";
//<HAnimJoint name='r_ring3'/> visualization sphere within <HAnimSegment name='r_ring_distal'/>
TouchSensor TouchSensor1527 = createNode("TouchSensor");
TouchSensor1527.description = "HAnimJoint r_ring3, HAnimSegment r_ring_distal";
HAnimSegment1526.children = new MFNode();

HAnimSegment1526.children[0] = TouchSensor1527;

Transform Transform1528 = createNode("Transform");
Transform1528.translation = new SFVec3f(new float[-0.1983,0.7045,-0.0767]);
Shape Shape1529 = createNode("Shape");
Shape1529.USE = "HAnimJointShape";
Transform1528.children = new MFNode();

Transform1528.children[0] = Shape1529;

HAnimSegment1526.children[1] = Transform1528;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ring3'/> to <HAnimSite name='r_ring_distal_tip'/>
Shape Shape1530 = createNode("Shape");
LineSet LineSet1531 = createNode("LineSet");
LineSet1531.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1532 = createNode("Coordinate");
Coordinate1532.point = new MFVec3f(new float[-0.1983,0.7045,-0.0767,-0.1934,0.6778,-0.0693]);
LineSet1531.coord = Coordinate1532;

ColorRGBA ColorRGBA1533 = createNode("ColorRGBA");
ColorRGBA1533.USE = "HAnimSiteLineColorRGBA";
LineSet1531.color = ColorRGBA1533;

Shape1530.geometry = LineSet1531;

HAnimSegment1526.children[2] = Shape1530;

HAnimSite HAnimSite1534 = createNode("HAnimSite");
HAnimSite1534.name = "r_ring_distal_tip";
HAnimSite1534.DEF = "hanim_r_ring_distal_tip";
HAnimSite1534.translation = new SFVec3f(new float[-0.1934,0.6778,-0.0693]);
//HAnimSite visualization shape
TouchSensor TouchSensor1535 = createNode("TouchSensor");
TouchSensor1535.description = "HAnimSite r_ring_distal_tip";
HAnimSite1534.children = new MFNode();

HAnimSite1534.children[0] = TouchSensor1535;

Shape Shape1536 = createNode("Shape");
Shape1536.USE = "HAnimSiteShape";
HAnimSite1534.children[1] = Shape1536;

HAnimSegment1526.children[3] = HAnimSite1534;

HAnimJoint1525.children = new MFNode();

HAnimJoint1525.children[0] = HAnimSegment1526;

HAnimJoint1516.children[1] = HAnimJoint1525;

HAnimJoint1507.children[1] = HAnimJoint1516;

HAnimJoint1498.children[1] = HAnimJoint1507;

HAnimJoint1327.children[4] = HAnimJoint1498;

HAnimJoint HAnimJoint1537 = createNode("HAnimJoint");
HAnimJoint1537.name = "r_pinky0";
HAnimJoint1537.DEF = "hanim_r_pinky0";
HAnimJoint1537.center = new SFVec3f(new float[-0.1925,0.8066,-0.1036]);
HAnimJoint1537.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1538 = createNode("HAnimSegment");
HAnimSegment1538.name = "r_pinky_metacarpal";
HAnimSegment1538.DEF = "hanim_r_pinky_metacarpal";
//<HAnimJoint name='r_pinky0'/> visualization sphere within <HAnimSegment name='r_pinky_metacarpal'/>
TouchSensor TouchSensor1539 = createNode("TouchSensor");
TouchSensor1539.description = "HAnimJoint r_pinky0, HAnimSegment r_pinky_metacarpal";
HAnimSegment1538.children = new MFNode();

HAnimSegment1538.children[0] = TouchSensor1539;

Transform Transform1540 = createNode("Transform");
Transform1540.translation = new SFVec3f(new float[-0.1925,0.8066,-0.1036]);
Shape Shape1541 = createNode("Shape");
Shape1541.USE = "HAnimJointShape";
Transform1540.children = new MFNode();

Transform1540.children[0] = Shape1541;

HAnimSegment1538.children[1] = Transform1540;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky0'/> to <HAnimJoint name='r_pinky1'/>
Shape Shape1542 = createNode("Shape");
LineSet LineSet1543 = createNode("LineSet");
LineSet1543.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1544 = createNode("Coordinate");
Coordinate1544.point = new MFVec3f(new float[-0.1925,0.8066,-0.1036,-0.1925,0.7866,-0.1036]);
LineSet1543.coord = Coordinate1544;

ColorRGBA ColorRGBA1545 = createNode("ColorRGBA");
ColorRGBA1545.USE = "HAnimSegmentLineColorRGBA";
LineSet1543.color = ColorRGBA1545;

Shape1542.geometry = LineSet1543;

HAnimSegment1538.children[2] = Shape1542;

HAnimJoint1537.children = new MFNode();

HAnimJoint1537.children[0] = HAnimSegment1538;

HAnimJoint HAnimJoint1546 = createNode("HAnimJoint");
HAnimJoint1546.name = "r_pinky1";
HAnimJoint1546.DEF = "hanim_r_pinky1";
HAnimJoint1546.center = new SFVec3f(new float[-0.1925,0.7866,-0.1036]);
HAnimJoint1546.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1547 = createNode("HAnimSegment");
HAnimSegment1547.name = "r_pinky_proximal";
HAnimSegment1547.DEF = "hanim_r_pinky_proximal";
//<HAnimJoint name='r_pinky1'/> visualization sphere within <HAnimSegment name='r_pinky_proximal'/>
TouchSensor TouchSensor1548 = createNode("TouchSensor");
TouchSensor1548.description = "HAnimJoint r_pinky1, HAnimSegment r_pinky_proximal";
HAnimSegment1547.children = new MFNode();

HAnimSegment1547.children[0] = TouchSensor1548;

Transform Transform1549 = createNode("Transform");
Transform1549.translation = new SFVec3f(new float[-0.1925,0.7866,-0.1036]);
Shape Shape1550 = createNode("Shape");
Shape1550.USE = "HAnimJointShape";
Transform1549.children = new MFNode();

Transform1549.children[0] = Shape1550;

HAnimSegment1547.children[1] = Transform1549;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky1'/> to <HAnimJoint name='r_pinky2'/>
Shape Shape1551 = createNode("Shape");
LineSet LineSet1552 = createNode("LineSet");
LineSet1552.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1553 = createNode("Coordinate");
Coordinate1553.point = new MFVec3f(new float[-0.1925,0.7866,-0.1036,-0.1938,0.7452,-0.1024]);
LineSet1552.coord = Coordinate1553;

ColorRGBA ColorRGBA1554 = createNode("ColorRGBA");
ColorRGBA1554.USE = "HAnimSegmentLineColorRGBA";
LineSet1552.color = ColorRGBA1554;

Shape1551.geometry = LineSet1552;

HAnimSegment1547.children[2] = Shape1551;

HAnimJoint1546.children = new MFNode();

HAnimJoint1546.children[0] = HAnimSegment1547;

HAnimJoint HAnimJoint1555 = createNode("HAnimJoint");
HAnimJoint1555.name = "r_pinky2";
HAnimJoint1555.DEF = "hanim_r_pinky2";
HAnimJoint1555.center = new SFVec3f(new float[-0.1938,0.7452,-0.1024]);
HAnimJoint1555.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1556 = createNode("HAnimSegment");
HAnimSegment1556.name = "r_pinky_middle";
HAnimSegment1556.DEF = "hanim_r_pinky_middle";
//<HAnimJoint name='r_pinky2'/> visualization sphere within <HAnimSegment name='r_pinky_middle'/>
TouchSensor TouchSensor1557 = createNode("TouchSensor");
TouchSensor1557.description = "HAnimJoint r_pinky2, HAnimSegment r_pinky_middle";
HAnimSegment1556.children = new MFNode();

HAnimSegment1556.children[0] = TouchSensor1557;

Transform Transform1558 = createNode("Transform");
Transform1558.translation = new SFVec3f(new float[-0.1938,0.7452,-0.1024]);
Shape Shape1559 = createNode("Shape");
Shape1559.USE = "HAnimJointShape";
Transform1558.children = new MFNode();

Transform1558.children[0] = Shape1559;

HAnimSegment1556.children[1] = Transform1558;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky2'/> to <HAnimJoint name='r_pinky3'/>
Shape Shape1560 = createNode("Shape");
LineSet LineSet1561 = createNode("LineSet");
LineSet1561.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1562 = createNode("Coordinate");
Coordinate1562.point = new MFVec3f(new float[-0.1938,0.7452,-0.1024,-0.1948,0.7277,-0.1017]);
LineSet1561.coord = Coordinate1562;

ColorRGBA ColorRGBA1563 = createNode("ColorRGBA");
ColorRGBA1563.USE = "HAnimSegmentLineColorRGBA";
LineSet1561.color = ColorRGBA1563;

Shape1560.geometry = LineSet1561;

HAnimSegment1556.children[2] = Shape1560;

HAnimJoint1555.children = new MFNode();

HAnimJoint1555.children[0] = HAnimSegment1556;

HAnimJoint HAnimJoint1564 = createNode("HAnimJoint");
HAnimJoint1564.name = "r_pinky3";
HAnimJoint1564.DEF = "hanim_r_pinky3";
HAnimJoint1564.center = new SFVec3f(new float[-0.1948,0.7277,-0.1017]);
HAnimJoint1564.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment1565 = createNode("HAnimSegment");
HAnimSegment1565.name = "r_pinky_distal";
HAnimSegment1565.DEF = "hanim_r_pinky_distal";
//<HAnimJoint name='r_pinky3'/> visualization sphere within <HAnimSegment name='r_pinky_distal'/>
TouchSensor TouchSensor1566 = createNode("TouchSensor");
TouchSensor1566.description = "HAnimJoint r_pinky3, HAnimSegment r_pinky_distal";
HAnimSegment1565.children = new MFNode();

HAnimSegment1565.children[0] = TouchSensor1566;

Transform Transform1567 = createNode("Transform");
Transform1567.translation = new SFVec3f(new float[-0.1948,0.7277,-0.1017]);
Shape Shape1568 = createNode("Shape");
Shape1568.USE = "HAnimJointShape";
Transform1567.children = new MFNode();

Transform1567.children[0] = Shape1568;

HAnimSegment1565.children[1] = Transform1567;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_pinky3'/> to <HAnimSite name='r_pinky_distal_tip'/>
Shape Shape1569 = createNode("Shape");
LineSet LineSet1570 = createNode("LineSet");
LineSet1570.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1571 = createNode("Coordinate");
Coordinate1571.point = new MFVec3f(new float[-0.1948,0.7277,-0.1017,-0.1938,0.7035,-0.0949]);
LineSet1570.coord = Coordinate1571;

ColorRGBA ColorRGBA1572 = createNode("ColorRGBA");
ColorRGBA1572.USE = "HAnimSiteLineColorRGBA";
LineSet1570.color = ColorRGBA1572;

Shape1569.geometry = LineSet1570;

HAnimSegment1565.children[2] = Shape1569;

HAnimSite HAnimSite1573 = createNode("HAnimSite");
HAnimSite1573.name = "r_pinky_distal_tip";
HAnimSite1573.DEF = "hanim_r_pinky_distal_tip";
HAnimSite1573.translation = new SFVec3f(new float[-0.1938,0.7035,-0.0949]);
//HAnimSite visualization shape
TouchSensor TouchSensor1574 = createNode("TouchSensor");
TouchSensor1574.description = "HAnimSite r_pinky_distal_tip";
HAnimSite1573.children = new MFNode();

HAnimSite1573.children[0] = TouchSensor1574;

Shape Shape1575 = createNode("Shape");
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
HAnimSite HAnimSite1576 = createNode("HAnimSite");
HAnimSite1576.name = "l_inclined_view";
HAnimSite1576.DEF = "hanim_l_inclined_view";
HAnimSite1576.rotation = new SFRotation(new float[-0.113,0.993,0.0347,0.671]);
HAnimSite1576.translation = new SFVec3f(new float[1.62,1.05,2.06]);
Viewpoint Viewpoint1577 = createNode("Viewpoint");
Viewpoint1577.DEF = "hanim_l_inclined_viewpoint";
Viewpoint1577.description = "left inclined";
Viewpoint1577.position = new SFVec3f(new float[0,0,0]);
HAnimSite1576.children = new MFNode();

HAnimSite1576.children[0] = Viewpoint1577;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1578 = createNode("Anchor");
Anchor1578.description = "HAnimSite Viewpoint hanim_l_inclined_view";
Anchor1578.url = new MFString(new java.lang.String["#hanim_l_inclined_viewpoint"]);
LOD LOD1579 = createNode("LOD");
LOD1579.forceTransitions = True;
LOD1579.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1580 = createNode("WorldInfo");
WorldInfo1580.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1579.children = new MFNode();

LOD1579.children[0] = WorldInfo1580;

Shape Shape1581 = createNode("Shape");
Shape1581.USE = "HAnimSiteViewpointShape";
LOD1579.children[1] = Shape1581;

Anchor1578.children = new MFNode();

Anchor1578.children[0] = LOD1579;

HAnimSite1576.children[1] = Anchor1578;

HAnimHumanoid45.viewpoints[1] = HAnimSite1576;

HAnimSite HAnimSite1582 = createNode("HAnimSite");
HAnimSite1582.name = "r_inclined_view";
HAnimSite1582.DEF = "hanim_r_inclined_view";
HAnimSite1582.rotation = new SFRotation(new float[-0.113,-0.993,0.0347,0.671]);
HAnimSite1582.translation = new SFVec3f(new float[-1.62,1.05,2.06]);
Viewpoint Viewpoint1583 = createNode("Viewpoint");
Viewpoint1583.DEF = "hanim_r_inclined_viewpoint";
Viewpoint1583.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1583.description = "right inclined";
Viewpoint1583.position = new SFVec3f(new float[0,0,0]);
HAnimSite1582.children = new MFNode();

HAnimSite1582.children[0] = Viewpoint1583;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1584 = createNode("Anchor");
Anchor1584.description = "HAnimSite Viewpoint hanim_r_inclined_view";
Anchor1584.url = new MFString(new java.lang.String["#hanim_r_inclined_viewpoint"]);
LOD LOD1585 = createNode("LOD");
LOD1585.forceTransitions = True;
LOD1585.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1586 = createNode("WorldInfo");
WorldInfo1586.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1585.children = new MFNode();

LOD1585.children[0] = WorldInfo1586;

Shape Shape1587 = createNode("Shape");
Shape1587.USE = "HAnimSiteViewpointShape";
LOD1585.children[1] = Shape1587;

Anchor1584.children = new MFNode();

Anchor1584.children[0] = LOD1585;

HAnimSite1582.children[1] = Anchor1584;

HAnimHumanoid45.viewpoints[2] = HAnimSite1582;

HAnimSite HAnimSite1588 = createNode("HAnimSite");
HAnimSite1588.name = "front_view";
HAnimSite1588.DEF = "hanim_front_view";
HAnimSite1588.translation = new SFVec3f(new float[0,0.85,2.58]);
Viewpoint Viewpoint1589 = createNode("Viewpoint");
Viewpoint1589.DEF = "hanim_front_viewpoint";
Viewpoint1589.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1589.description = "front";
Viewpoint1589.position = new SFVec3f(new float[0,0,0]);
HAnimSite1588.children = new MFNode();

HAnimSite1588.children[0] = Viewpoint1589;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1590 = createNode("Anchor");
Anchor1590.description = "HAnimSite Viewpoint hanim_front_view";
Anchor1590.url = new MFString(new java.lang.String["#hanim_front_viewpoint"]);
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

HAnimSite1588.children[1] = Anchor1590;

HAnimHumanoid45.viewpoints[3] = HAnimSite1588;

HAnimSite HAnimSite1594 = createNode("HAnimSite");
HAnimSite1594.name = "back_view";
HAnimSite1594.DEF = "hanim_back_view";
HAnimSite1594.rotation = new SFRotation(new float[0,1,0,3.14]);
HAnimSite1594.translation = new SFVec3f(new float[0,0.85,-2.58]);
Viewpoint Viewpoint1595 = createNode("Viewpoint");
Viewpoint1595.DEF = "hanim_back_viewpoint";
Viewpoint1595.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1595.description = "back";
Viewpoint1595.position = new SFVec3f(new float[0,0,0]);
HAnimSite1594.children = new MFNode();

HAnimSite1594.children[0] = Viewpoint1595;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1596 = createNode("Anchor");
Anchor1596.description = "HAnimSite Viewpoint hanim_back_view";
Anchor1596.url = new MFString(new java.lang.String["#hanim_back_viewpoint"]);
LOD LOD1597 = createNode("LOD");
LOD1597.forceTransitions = True;
LOD1597.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1598 = createNode("WorldInfo");
WorldInfo1598.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1597.children = new MFNode();

LOD1597.children[0] = WorldInfo1598;

Shape Shape1599 = createNode("Shape");
Shape1599.USE = "HAnimSiteViewpointShape";
LOD1597.children[1] = Shape1599;

Anchor1596.children = new MFNode();

Anchor1596.children[0] = LOD1597;

HAnimSite1594.children[1] = Anchor1596;

HAnimHumanoid45.viewpoints[4] = HAnimSite1594;

HAnimSite HAnimSite1600 = createNode("HAnimSite");
HAnimSite1600.name = "l_side_view";
HAnimSite1600.DEF = "hanim_l_side_view";
HAnimSite1600.rotation = new SFRotation(new float[0,1,0,1.5708]);
HAnimSite1600.translation = new SFVec3f(new float[2.6,0.854,0]);
Viewpoint Viewpoint1601 = createNode("Viewpoint");
Viewpoint1601.DEF = "hanim_l_side_viewpoint";
Viewpoint1601.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1601.description = "left side";
Viewpoint1601.position = new SFVec3f(new float[0,0,0]);
HAnimSite1600.children = new MFNode();

HAnimSite1600.children[0] = Viewpoint1601;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1602 = createNode("Anchor");
Anchor1602.description = "HAnimSite Viewpoint hanim_l_side_view";
Anchor1602.url = new MFString(new java.lang.String["#hanim_l_side_viewpoint"]);
LOD LOD1603 = createNode("LOD");
LOD1603.forceTransitions = True;
LOD1603.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1604 = createNode("WorldInfo");
WorldInfo1604.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1603.children = new MFNode();

LOD1603.children[0] = WorldInfo1604;

Shape Shape1605 = createNode("Shape");
Shape1605.USE = "HAnimSiteViewpointShape";
LOD1603.children[1] = Shape1605;

Anchor1602.children = new MFNode();

Anchor1602.children[0] = LOD1603;

HAnimSite1600.children[1] = Anchor1602;

HAnimHumanoid45.viewpoints[5] = HAnimSite1600;

HAnimSite HAnimSite1606 = createNode("HAnimSite");
HAnimSite1606.name = "Top_view";
HAnimSite1606.DEF = "hanim_Top_view";
HAnimSite1606.rotation = new SFRotation(new float[1,0,0,-1.57]);
HAnimSite1606.translation = new SFVec3f(new float[0,3.5,0]);
Viewpoint Viewpoint1607 = createNode("Viewpoint");
Viewpoint1607.DEF = "hanim_Top_viewpoint";
Viewpoint1607.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1607.description = "Top";
Viewpoint1607.position = new SFVec3f(new float[0,0,0]);
HAnimSite1606.children = new MFNode();

HAnimSite1606.children[0] = Viewpoint1607;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1608 = createNode("Anchor");
Anchor1608.description = "HAnimSite Viewpoint hanim_Top_view";
Anchor1608.url = new MFString(new java.lang.String["#hanim_Top_viewpoint"]);
LOD LOD1609 = createNode("LOD");
LOD1609.forceTransitions = True;
LOD1609.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1610 = createNode("WorldInfo");
WorldInfo1610.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1609.children = new MFNode();

LOD1609.children[0] = WorldInfo1610;

Shape Shape1611 = createNode("Shape");
Shape1611.USE = "HAnimSiteViewpointShape";
LOD1609.children[1] = Shape1611;

Anchor1608.children = new MFNode();

Anchor1608.children[0] = LOD1609;

HAnimSite1606.children[1] = Anchor1608;

HAnimHumanoid45.viewpoints[6] = HAnimSite1606;

HAnimSite HAnimSite1612 = createNode("HAnimSite");
HAnimSite1612.name = "front_close_view";
HAnimSite1612.DEF = "hanim_front_close_view";
HAnimSite1612.translation = new SFVec3f(new float[0,0.854,1.575]);
Viewpoint Viewpoint1613 = createNode("Viewpoint");
Viewpoint1613.DEF = "hanim_front_close_viewpoint";
Viewpoint1613.centerOfRotation = new SFVec3f(new float[0,0,1.575]);
Viewpoint1613.description = "front close";
Viewpoint1613.position = new SFVec3f(new float[0,0,0]);
HAnimSite1612.children = new MFNode();

HAnimSite1612.children[0] = Viewpoint1613;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1614 = createNode("Anchor");
Anchor1614.description = "HAnimSite Viewpoint hanim_front_close_view";
Anchor1614.url = new MFString(new java.lang.String["#hanim_front_close_viewpoint"]);
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

HAnimSite1612.children[1] = Anchor1614;

HAnimHumanoid45.viewpoints[7] = HAnimSite1612;

HAnimSite HAnimSite1618 = createNode("HAnimSite");
HAnimSite1618.name = "side_close_view";
HAnimSite1618.DEF = "hanim_side_close_view";
HAnimSite1618.rotation = new SFRotation(new float[0,1,0,1.5708]);
HAnimSite1618.translation = new SFVec3f(new float[1.56,0.854,0]);
Viewpoint Viewpoint1619 = createNode("Viewpoint");
Viewpoint1619.DEF = "hanim_side_close_viewpoint";
Viewpoint1619.centerOfRotation = new SFVec3f(new float[1.6,0,0]);
Viewpoint1619.description = "side close";
Viewpoint1619.position = new SFVec3f(new float[0,0,0]);
HAnimSite1618.children = new MFNode();

HAnimSite1618.children[0] = Viewpoint1619;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1620 = createNode("Anchor");
Anchor1620.description = "HAnimSite Viewpoint hanim_side_close_view";
Anchor1620.url = new MFString(new java.lang.String["#hanim_side_close_viewpoint"]);
LOD LOD1621 = createNode("LOD");
LOD1621.forceTransitions = True;
LOD1621.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1622 = createNode("WorldInfo");
WorldInfo1622.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1621.children = new MFNode();

LOD1621.children[0] = WorldInfo1622;

Shape Shape1623 = createNode("Shape");
Shape1623.USE = "HAnimSiteViewpointShape";
LOD1621.children[1] = Shape1623;

Anchor1620.children = new MFNode();

Anchor1620.children[0] = LOD1621;

HAnimSite1618.children[1] = Anchor1620;

HAnimHumanoid45.viewpoints[8] = HAnimSite1618;

HAnimSite HAnimSite1624 = createNode("HAnimSite");
HAnimSite1624.name = "head_front_close_view";
HAnimSite1624.DEF = "hanim_head_front_close_view";
HAnimSite1624.translation = new SFVec3f(new float[0,1.5,1]);
Viewpoint Viewpoint1625 = createNode("Viewpoint");
Viewpoint1625.DEF = "hanim_head_front_close_viewpoint";
Viewpoint1625.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint1625.description = "head front close";
Viewpoint1625.position = new SFVec3f(new float[0,0,0]);
HAnimSite1624.children = new MFNode();

HAnimSite1624.children[0] = Viewpoint1625;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1626 = createNode("Anchor");
Anchor1626.description = "HAnimSite Viewpoint hanim_head_front_close_view";
Anchor1626.url = new MFString(new java.lang.String["#hanim_head_front_close_viewpoint"]);
LOD LOD1627 = createNode("LOD");
LOD1627.forceTransitions = True;
LOD1627.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1628 = createNode("WorldInfo");
WorldInfo1628.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1627.children = new MFNode();

LOD1627.children[0] = WorldInfo1628;

Shape Shape1629 = createNode("Shape");
Shape1629.USE = "HAnimSiteViewpointShape";
LOD1627.children[1] = Shape1629;

Anchor1626.children = new MFNode();

Anchor1626.children[0] = LOD1627;

HAnimSite1624.children[1] = Anchor1626;

HAnimHumanoid45.viewpoints[9] = HAnimSite1624;

HAnimSite HAnimSite1630 = createNode("HAnimSite");
HAnimSite1630.name = "chest_front_close_view";
HAnimSite1630.DEF = "hanim_chest_front_close_view";
HAnimSite1630.translation = new SFVec3f(new float[0,1.2,1]);
Viewpoint Viewpoint1631 = createNode("Viewpoint");
Viewpoint1631.DEF = "hanim_chest_front_close_viewpoint";
Viewpoint1631.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint1631.description = "chest front close";
Viewpoint1631.position = new SFVec3f(new float[0,0,0]);
HAnimSite1630.children = new MFNode();

HAnimSite1630.children[0] = Viewpoint1631;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1632 = createNode("Anchor");
Anchor1632.description = "HAnimSite Viewpoint hanim_chest_front_close_view";
Anchor1632.url = new MFString(new java.lang.String["#hanim_chest_front_close_viewpoint"]);
LOD LOD1633 = createNode("LOD");
LOD1633.forceTransitions = True;
LOD1633.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1634 = createNode("WorldInfo");
WorldInfo1634.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1633.children = new MFNode();

LOD1633.children[0] = WorldInfo1634;

Shape Shape1635 = createNode("Shape");
Shape1635.USE = "HAnimSiteViewpointShape";
LOD1633.children[1] = Shape1635;

Anchor1632.children = new MFNode();

Anchor1632.children[0] = LOD1633;

HAnimSite1630.children[1] = Anchor1632;

HAnimHumanoid45.viewpoints[10] = HAnimSite1630;

HAnimSite HAnimSite1636 = createNode("HAnimSite");
HAnimSite1636.name = "pelvis_front_close_view";
HAnimSite1636.DEF = "hanim_pelvis_front_close_view";
HAnimSite1636.translation = new SFVec3f(new float[0,0.8,1]);
Viewpoint Viewpoint1637 = createNode("Viewpoint");
Viewpoint1637.DEF = "hanim_pelvis_front_close_viewpoint";
Viewpoint1637.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint1637.description = "pelvis front close";
Viewpoint1637.position = new SFVec3f(new float[0,0,0]);
HAnimSite1636.children = new MFNode();

HAnimSite1636.children[0] = Viewpoint1637;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1638 = createNode("Anchor");
Anchor1638.description = "HAnimSite Viewpoint hanim_pelvis_front_close_view";
Anchor1638.url = new MFString(new java.lang.String["#hanim_pelvis_front_close_viewpoint"]);
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

HAnimSite1636.children[1] = Anchor1638;

HAnimHumanoid45.viewpoints[11] = HAnimSite1636;

HAnimSite HAnimSite1642 = createNode("HAnimSite");
HAnimSite1642.name = "knees_front_close_view";
HAnimSite1642.DEF = "hanim_knees_front_close_view";
HAnimSite1642.translation = new SFVec3f(new float[0,0.4,1]);
Viewpoint Viewpoint1643 = createNode("Viewpoint");
Viewpoint1643.DEF = "hanim_knees_front_close_viewpoint";
Viewpoint1643.centerOfRotation = new SFVec3f(new float[0,0.4,0]);
Viewpoint1643.description = "knees front close";
Viewpoint1643.position = new SFVec3f(new float[0,0,0]);
HAnimSite1642.children = new MFNode();

HAnimSite1642.children[0] = Viewpoint1643;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1644 = createNode("Anchor");
Anchor1644.description = "HAnimSite Viewpoint hanim_knees_front_close_view";
Anchor1644.url = new MFString(new java.lang.String["#hanim_knees_front_close_viewpoint"]);
LOD LOD1645 = createNode("LOD");
LOD1645.forceTransitions = True;
LOD1645.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1646 = createNode("WorldInfo");
WorldInfo1646.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1645.children = new MFNode();

LOD1645.children[0] = WorldInfo1646;

Shape Shape1647 = createNode("Shape");
Shape1647.USE = "HAnimSiteViewpointShape";
LOD1645.children[1] = Shape1647;

Anchor1644.children = new MFNode();

Anchor1644.children[0] = LOD1645;

HAnimSite1642.children[1] = Anchor1644;

HAnimHumanoid45.viewpoints[12] = HAnimSite1642;

HAnimSite HAnimSite1648 = createNode("HAnimSite");
HAnimSite1648.name = "feet_front_close_view";
HAnimSite1648.DEF = "hanim_feet_front_close_view";
HAnimSite1648.translation = new SFVec3f(new float[0,0,1]);
Viewpoint Viewpoint1649 = createNode("Viewpoint");
Viewpoint1649.DEF = "hanim_feet_front_close_viewpoint";
Viewpoint1649.description = "feet front close";
Viewpoint1649.position = new SFVec3f(new float[0,0,0]);
HAnimSite1648.children = new MFNode();

HAnimSite1648.children[0] = Viewpoint1649;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1650 = createNode("Anchor");
Anchor1650.description = "HAnimSite Viewpoint hanim_feet_front_close_view";
Anchor1650.url = new MFString(new java.lang.String["#hanim_feet_front_close_viewpoint"]);
LOD LOD1651 = createNode("LOD");
LOD1651.forceTransitions = True;
LOD1651.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1652 = createNode("WorldInfo");
WorldInfo1652.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1651.children = new MFNode();

LOD1651.children[0] = WorldInfo1652;

Shape Shape1653 = createNode("Shape");
Shape1653.USE = "HAnimSiteViewpointShape";
LOD1651.children[1] = Shape1653;

Anchor1650.children = new MFNode();

Anchor1650.children[0] = LOD1651;

HAnimSite1648.children[1] = Anchor1650;

HAnimHumanoid45.viewpoints[13] = HAnimSite1648;

HAnimSite HAnimSite1654 = createNode("HAnimSite");
HAnimSite1654.name = "eye_level_view";
HAnimSite1654.DEF = "hanim_eye_level_view";
HAnimSite1654.translation = new SFVec3f(new float[0,1.6332,0.0502]);
Viewpoint Viewpoint1655 = createNode("Viewpoint");
Viewpoint1655.DEF = "hanim_eye_level_viewpoint";
Viewpoint1655.description = "eye level looking forward";
Viewpoint1655.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint1655.position = new SFVec3f(new float[0,0,0]);
HAnimSite1654.children = new MFNode();

HAnimSite1654.children[0] = Viewpoint1655;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1656 = createNode("Anchor");
Anchor1656.description = "HAnimSite Viewpoint hanim_eye_level_view";
Anchor1656.url = new MFString(new java.lang.String["#hanim_eye_level_viewpoint"]);
LOD LOD1657 = createNode("LOD");
LOD1657.forceTransitions = True;
LOD1657.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1658 = createNode("WorldInfo");
WorldInfo1658.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1657.children = new MFNode();

LOD1657.children[0] = WorldInfo1658;

Shape Shape1659 = createNode("Shape");
Shape1659.USE = "HAnimSiteViewpointShape";
LOD1657.children[1] = Shape1659;

Anchor1656.children = new MFNode();

Anchor1656.children[0] = LOD1657;

HAnimSite1654.children[1] = Anchor1656;

HAnimHumanoid45.viewpoints[14] = HAnimSite1654;

HAnimSite HAnimSite1660 = createNode("HAnimSite");
HAnimSite1660.USE = "hanim_l_eyeball_site_view";
HAnimHumanoid45.viewpoints[15] = HAnimSite1660;

HAnimSite HAnimSite1661 = createNode("HAnimSite");
HAnimSite1661.USE = "hanim_r_eyeball_site_view";
HAnimHumanoid45.viewpoints[16] = HAnimSite1661;

HAnimSite HAnimSite1662 = createNode("HAnimSite");
HAnimSite1662.USE = "hanim_l_hand_front_view";
HAnimHumanoid45.viewpoints[17] = HAnimSite1662;

HAnimSite HAnimSite1663 = createNode("HAnimSite");
HAnimSite1663.USE = "hanim_r_hand_front_view";
HAnimHumanoid45.viewpoints[18] = HAnimSite1663;

HAnimJoint HAnimJoint1664 = createNode("HAnimJoint");
HAnimJoint1664.USE = "hanim_humanoid_root";
HAnimHumanoid45.joints[19] = HAnimJoint1664;

HAnimJoint HAnimJoint1665 = createNode("HAnimJoint");
HAnimJoint1665.USE = "hanim_sacroiliac";
HAnimHumanoid45.joints[20] = HAnimJoint1665;

HAnimJoint HAnimJoint1666 = createNode("HAnimJoint");
HAnimJoint1666.USE = "hanim_vl5";
HAnimHumanoid45.joints[21] = HAnimJoint1666;

HAnimJoint HAnimJoint1667 = createNode("HAnimJoint");
HAnimJoint1667.USE = "hanim_vl4";
HAnimHumanoid45.joints[22] = HAnimJoint1667;

HAnimJoint HAnimJoint1668 = createNode("HAnimJoint");
HAnimJoint1668.USE = "hanim_vl3";
HAnimHumanoid45.joints[23] = HAnimJoint1668;

HAnimJoint HAnimJoint1669 = createNode("HAnimJoint");
HAnimJoint1669.USE = "hanim_vl2";
HAnimHumanoid45.joints[24] = HAnimJoint1669;

HAnimJoint HAnimJoint1670 = createNode("HAnimJoint");
HAnimJoint1670.USE = "hanim_vl1";
HAnimHumanoid45.joints[25] = HAnimJoint1670;

HAnimJoint HAnimJoint1671 = createNode("HAnimJoint");
HAnimJoint1671.USE = "hanim_vt12";
HAnimHumanoid45.joints[26] = HAnimJoint1671;

HAnimJoint HAnimJoint1672 = createNode("HAnimJoint");
HAnimJoint1672.USE = "hanim_vt11";
HAnimHumanoid45.joints[27] = HAnimJoint1672;

HAnimJoint HAnimJoint1673 = createNode("HAnimJoint");
HAnimJoint1673.USE = "hanim_vt10";
HAnimHumanoid45.joints[28] = HAnimJoint1673;

HAnimJoint HAnimJoint1674 = createNode("HAnimJoint");
HAnimJoint1674.USE = "hanim_vt9";
HAnimHumanoid45.joints[29] = HAnimJoint1674;

HAnimJoint HAnimJoint1675 = createNode("HAnimJoint");
HAnimJoint1675.USE = "hanim_vt8";
HAnimHumanoid45.joints[30] = HAnimJoint1675;

HAnimJoint HAnimJoint1676 = createNode("HAnimJoint");
HAnimJoint1676.USE = "hanim_vt7";
HAnimHumanoid45.joints[31] = HAnimJoint1676;

HAnimJoint HAnimJoint1677 = createNode("HAnimJoint");
HAnimJoint1677.USE = "hanim_vt6";
HAnimHumanoid45.joints[32] = HAnimJoint1677;

HAnimJoint HAnimJoint1678 = createNode("HAnimJoint");
HAnimJoint1678.USE = "hanim_vt5";
HAnimHumanoid45.joints[33] = HAnimJoint1678;

HAnimJoint HAnimJoint1679 = createNode("HAnimJoint");
HAnimJoint1679.USE = "hanim_vt4";
HAnimHumanoid45.joints[34] = HAnimJoint1679;

HAnimJoint HAnimJoint1680 = createNode("HAnimJoint");
HAnimJoint1680.USE = "hanim_vt3";
HAnimHumanoid45.joints[35] = HAnimJoint1680;

HAnimJoint HAnimJoint1681 = createNode("HAnimJoint");
HAnimJoint1681.USE = "hanim_vt2";
HAnimHumanoid45.joints[36] = HAnimJoint1681;

HAnimJoint HAnimJoint1682 = createNode("HAnimJoint");
HAnimJoint1682.USE = "hanim_vt1";
HAnimHumanoid45.joints[37] = HAnimJoint1682;

HAnimJoint HAnimJoint1683 = createNode("HAnimJoint");
HAnimJoint1683.USE = "hanim_vc7";
HAnimHumanoid45.joints[38] = HAnimJoint1683;

HAnimJoint HAnimJoint1684 = createNode("HAnimJoint");
HAnimJoint1684.USE = "hanim_vc6";
HAnimHumanoid45.joints[39] = HAnimJoint1684;

HAnimJoint HAnimJoint1685 = createNode("HAnimJoint");
HAnimJoint1685.USE = "hanim_vc5";
HAnimHumanoid45.joints[40] = HAnimJoint1685;

HAnimJoint HAnimJoint1686 = createNode("HAnimJoint");
HAnimJoint1686.USE = "hanim_vc4";
HAnimHumanoid45.joints[41] = HAnimJoint1686;

HAnimJoint HAnimJoint1687 = createNode("HAnimJoint");
HAnimJoint1687.USE = "hanim_vc3";
HAnimHumanoid45.joints[42] = HAnimJoint1687;

HAnimJoint HAnimJoint1688 = createNode("HAnimJoint");
HAnimJoint1688.USE = "hanim_vc2";
HAnimHumanoid45.joints[43] = HAnimJoint1688;

HAnimJoint HAnimJoint1689 = createNode("HAnimJoint");
HAnimJoint1689.USE = "hanim_vc1";
HAnimHumanoid45.joints[44] = HAnimJoint1689;

HAnimJoint HAnimJoint1690 = createNode("HAnimJoint");
HAnimJoint1690.USE = "hanim_skullbase";
HAnimHumanoid45.joints[45] = HAnimJoint1690;

HAnimJoint HAnimJoint1691 = createNode("HAnimJoint");
HAnimJoint1691.USE = "hanim_temporomandibular";
HAnimHumanoid45.joints[46] = HAnimJoint1691;

HAnimJoint HAnimJoint1692 = createNode("HAnimJoint");
HAnimJoint1692.USE = "hanim_l_acromioclavicular";
HAnimHumanoid45.joints[47] = HAnimJoint1692;

HAnimJoint HAnimJoint1693 = createNode("HAnimJoint");
HAnimJoint1693.USE = "hanim_r_acromioclavicular";
HAnimHumanoid45.joints[48] = HAnimJoint1693;

HAnimJoint HAnimJoint1694 = createNode("HAnimJoint");
HAnimJoint1694.USE = "hanim_l_ankle";
HAnimHumanoid45.joints[49] = HAnimJoint1694;

HAnimJoint HAnimJoint1695 = createNode("HAnimJoint");
HAnimJoint1695.USE = "hanim_r_ankle";
HAnimHumanoid45.joints[50] = HAnimJoint1695;

HAnimJoint HAnimJoint1696 = createNode("HAnimJoint");
HAnimJoint1696.USE = "hanim_l_elbow";
HAnimHumanoid45.joints[51] = HAnimJoint1696;

HAnimJoint HAnimJoint1697 = createNode("HAnimJoint");
HAnimJoint1697.USE = "hanim_r_elbow";
HAnimHumanoid45.joints[52] = HAnimJoint1697;

HAnimJoint HAnimJoint1698 = createNode("HAnimJoint");
HAnimJoint1698.USE = "hanim_l_eyeball_joint";
HAnimHumanoid45.joints[53] = HAnimJoint1698;

HAnimJoint HAnimJoint1699 = createNode("HAnimJoint");
HAnimJoint1699.USE = "hanim_r_eyeball_joint";
HAnimHumanoid45.joints[54] = HAnimJoint1699;

HAnimJoint HAnimJoint1700 = createNode("HAnimJoint");
HAnimJoint1700.USE = "hanim_l_eyebrow_joint";
HAnimHumanoid45.joints[55] = HAnimJoint1700;

HAnimJoint HAnimJoint1701 = createNode("HAnimJoint");
HAnimJoint1701.USE = "hanim_r_eyebrow_joint";
HAnimHumanoid45.joints[56] = HAnimJoint1701;

HAnimJoint HAnimJoint1702 = createNode("HAnimJoint");
HAnimJoint1702.USE = "hanim_l_eyelid_joint";
HAnimHumanoid45.joints[57] = HAnimJoint1702;

HAnimJoint HAnimJoint1703 = createNode("HAnimJoint");
HAnimJoint1703.USE = "hanim_r_eyelid_joint";
HAnimHumanoid45.joints[58] = HAnimJoint1703;

HAnimJoint HAnimJoint1704 = createNode("HAnimJoint");
HAnimJoint1704.USE = "hanim_l_hip";
HAnimHumanoid45.joints[59] = HAnimJoint1704;

HAnimJoint HAnimJoint1705 = createNode("HAnimJoint");
HAnimJoint1705.USE = "hanim_r_hip";
HAnimHumanoid45.joints[60] = HAnimJoint1705;

HAnimJoint HAnimJoint1706 = createNode("HAnimJoint");
HAnimJoint1706.USE = "hanim_l_index0";
HAnimHumanoid45.joints[61] = HAnimJoint1706;

HAnimJoint HAnimJoint1707 = createNode("HAnimJoint");
HAnimJoint1707.USE = "hanim_r_index0";
HAnimHumanoid45.joints[62] = HAnimJoint1707;

HAnimJoint HAnimJoint1708 = createNode("HAnimJoint");
HAnimJoint1708.USE = "hanim_l_index1";
HAnimHumanoid45.joints[63] = HAnimJoint1708;

HAnimJoint HAnimJoint1709 = createNode("HAnimJoint");
HAnimJoint1709.USE = "hanim_r_index1";
HAnimHumanoid45.joints[64] = HAnimJoint1709;

HAnimJoint HAnimJoint1710 = createNode("HAnimJoint");
HAnimJoint1710.USE = "hanim_l_index2";
HAnimHumanoid45.joints[65] = HAnimJoint1710;

HAnimJoint HAnimJoint1711 = createNode("HAnimJoint");
HAnimJoint1711.USE = "hanim_r_index2";
HAnimHumanoid45.joints[66] = HAnimJoint1711;

HAnimJoint HAnimJoint1712 = createNode("HAnimJoint");
HAnimJoint1712.USE = "hanim_l_index3";
HAnimHumanoid45.joints[67] = HAnimJoint1712;

HAnimJoint HAnimJoint1713 = createNode("HAnimJoint");
HAnimJoint1713.USE = "hanim_r_index3";
HAnimHumanoid45.joints[68] = HAnimJoint1713;

HAnimJoint HAnimJoint1714 = createNode("HAnimJoint");
HAnimJoint1714.USE = "hanim_l_knee";
HAnimHumanoid45.joints[69] = HAnimJoint1714;

HAnimJoint HAnimJoint1715 = createNode("HAnimJoint");
HAnimJoint1715.USE = "hanim_r_knee";
HAnimHumanoid45.joints[70] = HAnimJoint1715;

HAnimJoint HAnimJoint1716 = createNode("HAnimJoint");
HAnimJoint1716.USE = "hanim_l_metatarsal";
HAnimHumanoid45.joints[71] = HAnimJoint1716;

HAnimJoint HAnimJoint1717 = createNode("HAnimJoint");
HAnimJoint1717.USE = "hanim_r_metatarsal";
HAnimHumanoid45.joints[72] = HAnimJoint1717;

HAnimJoint HAnimJoint1718 = createNode("HAnimJoint");
HAnimJoint1718.USE = "hanim_l_middle0";
HAnimHumanoid45.joints[73] = HAnimJoint1718;

HAnimJoint HAnimJoint1719 = createNode("HAnimJoint");
HAnimJoint1719.USE = "hanim_r_middle0";
HAnimHumanoid45.joints[74] = HAnimJoint1719;

HAnimJoint HAnimJoint1720 = createNode("HAnimJoint");
HAnimJoint1720.USE = "hanim_l_middle1";
HAnimHumanoid45.joints[75] = HAnimJoint1720;

HAnimJoint HAnimJoint1721 = createNode("HAnimJoint");
HAnimJoint1721.USE = "hanim_r_middle1";
HAnimHumanoid45.joints[76] = HAnimJoint1721;

HAnimJoint HAnimJoint1722 = createNode("HAnimJoint");
HAnimJoint1722.USE = "hanim_l_middle2";
HAnimHumanoid45.joints[77] = HAnimJoint1722;

HAnimJoint HAnimJoint1723 = createNode("HAnimJoint");
HAnimJoint1723.USE = "hanim_r_middle2";
HAnimHumanoid45.joints[78] = HAnimJoint1723;

HAnimJoint HAnimJoint1724 = createNode("HAnimJoint");
HAnimJoint1724.USE = "hanim_l_middle3";
HAnimHumanoid45.joints[79] = HAnimJoint1724;

HAnimJoint HAnimJoint1725 = createNode("HAnimJoint");
HAnimJoint1725.USE = "hanim_r_middle3";
HAnimHumanoid45.joints[80] = HAnimJoint1725;

HAnimJoint HAnimJoint1726 = createNode("HAnimJoint");
HAnimJoint1726.USE = "hanim_l_midtarsal";
HAnimHumanoid45.joints[81] = HAnimJoint1726;

HAnimJoint HAnimJoint1727 = createNode("HAnimJoint");
HAnimJoint1727.USE = "hanim_r_midtarsal";
HAnimHumanoid45.joints[82] = HAnimJoint1727;

HAnimJoint HAnimJoint1728 = createNode("HAnimJoint");
HAnimJoint1728.USE = "hanim_l_pinky0";
HAnimHumanoid45.joints[83] = HAnimJoint1728;

HAnimJoint HAnimJoint1729 = createNode("HAnimJoint");
HAnimJoint1729.USE = "hanim_r_pinky0";
HAnimHumanoid45.joints[84] = HAnimJoint1729;

HAnimJoint HAnimJoint1730 = createNode("HAnimJoint");
HAnimJoint1730.USE = "hanim_l_pinky1";
HAnimHumanoid45.joints[85] = HAnimJoint1730;

HAnimJoint HAnimJoint1731 = createNode("HAnimJoint");
HAnimJoint1731.USE = "hanim_r_pinky1";
HAnimHumanoid45.joints[86] = HAnimJoint1731;

HAnimJoint HAnimJoint1732 = createNode("HAnimJoint");
HAnimJoint1732.USE = "hanim_l_pinky2";
HAnimHumanoid45.joints[87] = HAnimJoint1732;

HAnimJoint HAnimJoint1733 = createNode("HAnimJoint");
HAnimJoint1733.USE = "hanim_r_pinky2";
HAnimHumanoid45.joints[88] = HAnimJoint1733;

HAnimJoint HAnimJoint1734 = createNode("HAnimJoint");
HAnimJoint1734.USE = "hanim_l_pinky3";
HAnimHumanoid45.joints[89] = HAnimJoint1734;

HAnimJoint HAnimJoint1735 = createNode("HAnimJoint");
HAnimJoint1735.USE = "hanim_r_pinky3";
HAnimHumanoid45.joints[90] = HAnimJoint1735;

HAnimJoint HAnimJoint1736 = createNode("HAnimJoint");
HAnimJoint1736.USE = "hanim_l_ring0";
HAnimHumanoid45.joints[91] = HAnimJoint1736;

HAnimJoint HAnimJoint1737 = createNode("HAnimJoint");
HAnimJoint1737.USE = "hanim_r_ring0";
HAnimHumanoid45.joints[92] = HAnimJoint1737;

HAnimJoint HAnimJoint1738 = createNode("HAnimJoint");
HAnimJoint1738.USE = "hanim_l_ring1";
HAnimHumanoid45.joints[93] = HAnimJoint1738;

HAnimJoint HAnimJoint1739 = createNode("HAnimJoint");
HAnimJoint1739.USE = "hanim_r_ring1";
HAnimHumanoid45.joints[94] = HAnimJoint1739;

HAnimJoint HAnimJoint1740 = createNode("HAnimJoint");
HAnimJoint1740.USE = "hanim_l_ring2";
HAnimHumanoid45.joints[95] = HAnimJoint1740;

HAnimJoint HAnimJoint1741 = createNode("HAnimJoint");
HAnimJoint1741.USE = "hanim_r_ring2";
HAnimHumanoid45.joints[96] = HAnimJoint1741;

HAnimJoint HAnimJoint1742 = createNode("HAnimJoint");
HAnimJoint1742.USE = "hanim_l_ring3";
HAnimHumanoid45.joints[97] = HAnimJoint1742;

HAnimJoint HAnimJoint1743 = createNode("HAnimJoint");
HAnimJoint1743.USE = "hanim_r_ring3";
HAnimHumanoid45.joints[98] = HAnimJoint1743;

HAnimJoint HAnimJoint1744 = createNode("HAnimJoint");
HAnimJoint1744.USE = "hanim_l_shoulder";
HAnimHumanoid45.joints[99] = HAnimJoint1744;

HAnimJoint HAnimJoint1745 = createNode("HAnimJoint");
HAnimJoint1745.USE = "hanim_r_shoulder";
HAnimHumanoid45.joints[100] = HAnimJoint1745;

HAnimJoint HAnimJoint1746 = createNode("HAnimJoint");
HAnimJoint1746.USE = "hanim_l_sternoclavicular";
HAnimHumanoid45.joints[101] = HAnimJoint1746;

HAnimJoint HAnimJoint1747 = createNode("HAnimJoint");
HAnimJoint1747.USE = "hanim_r_sternoclavicular";
HAnimHumanoid45.joints[102] = HAnimJoint1747;

HAnimJoint HAnimJoint1748 = createNode("HAnimJoint");
HAnimJoint1748.USE = "hanim_l_subtalar";
HAnimHumanoid45.joints[103] = HAnimJoint1748;

HAnimJoint HAnimJoint1749 = createNode("HAnimJoint");
HAnimJoint1749.USE = "hanim_r_subtalar";
HAnimHumanoid45.joints[104] = HAnimJoint1749;

HAnimJoint HAnimJoint1750 = createNode("HAnimJoint");
HAnimJoint1750.USE = "hanim_l_thumb1";
HAnimHumanoid45.joints[105] = HAnimJoint1750;

HAnimJoint HAnimJoint1751 = createNode("HAnimJoint");
HAnimJoint1751.USE = "hanim_r_thumb1";
HAnimHumanoid45.joints[106] = HAnimJoint1751;

HAnimJoint HAnimJoint1752 = createNode("HAnimJoint");
HAnimJoint1752.USE = "hanim_l_thumb2";
HAnimHumanoid45.joints[107] = HAnimJoint1752;

HAnimJoint HAnimJoint1753 = createNode("HAnimJoint");
HAnimJoint1753.USE = "hanim_r_thumb2";
HAnimHumanoid45.joints[108] = HAnimJoint1753;

HAnimJoint HAnimJoint1754 = createNode("HAnimJoint");
HAnimJoint1754.USE = "hanim_l_thumb3";
HAnimHumanoid45.joints[109] = HAnimJoint1754;

HAnimJoint HAnimJoint1755 = createNode("HAnimJoint");
HAnimJoint1755.USE = "hanim_r_thumb3";
HAnimHumanoid45.joints[110] = HAnimJoint1755;

HAnimJoint HAnimJoint1756 = createNode("HAnimJoint");
HAnimJoint1756.USE = "hanim_l_wrist";
HAnimHumanoid45.joints[111] = HAnimJoint1756;

HAnimJoint HAnimJoint1757 = createNode("HAnimJoint");
HAnimJoint1757.USE = "hanim_r_wrist";
HAnimHumanoid45.joints[112] = HAnimJoint1757;

HAnimSegment HAnimSegment1758 = createNode("HAnimSegment");
HAnimSegment1758.USE = "hanim_pelvis";
HAnimHumanoid45.segments[113] = HAnimSegment1758;

HAnimSegment HAnimSegment1759 = createNode("HAnimSegment");
HAnimSegment1759.USE = "hanim_skull";
HAnimHumanoid45.segments[114] = HAnimSegment1759;

HAnimSegment HAnimSegment1760 = createNode("HAnimSegment");
HAnimSegment1760.USE = "hanim_jaw";
HAnimHumanoid45.segments[115] = HAnimSegment1760;

HAnimSegment HAnimSegment1761 = createNode("HAnimSegment");
HAnimSegment1761.USE = "hanim_c1";
HAnimHumanoid45.segments[116] = HAnimSegment1761;

HAnimSegment HAnimSegment1762 = createNode("HAnimSegment");
HAnimSegment1762.USE = "hanim_c2";
HAnimHumanoid45.segments[117] = HAnimSegment1762;

HAnimSegment HAnimSegment1763 = createNode("HAnimSegment");
HAnimSegment1763.USE = "hanim_c3";
HAnimHumanoid45.segments[118] = HAnimSegment1763;

HAnimSegment HAnimSegment1764 = createNode("HAnimSegment");
HAnimSegment1764.USE = "hanim_c4";
HAnimHumanoid45.segments[119] = HAnimSegment1764;

HAnimSegment HAnimSegment1765 = createNode("HAnimSegment");
HAnimSegment1765.USE = "hanim_c5";
HAnimHumanoid45.segments[120] = HAnimSegment1765;

HAnimSegment HAnimSegment1766 = createNode("HAnimSegment");
HAnimSegment1766.USE = "hanim_c6";
HAnimHumanoid45.segments[121] = HAnimSegment1766;

HAnimSegment HAnimSegment1767 = createNode("HAnimSegment");
HAnimSegment1767.USE = "hanim_c7";
HAnimHumanoid45.segments[122] = HAnimSegment1767;

HAnimSegment HAnimSegment1768 = createNode("HAnimSegment");
HAnimSegment1768.USE = "hanim_t1";
HAnimHumanoid45.segments[123] = HAnimSegment1768;

HAnimSegment HAnimSegment1769 = createNode("HAnimSegment");
HAnimSegment1769.USE = "hanim_t2";
HAnimHumanoid45.segments[124] = HAnimSegment1769;

HAnimSegment HAnimSegment1770 = createNode("HAnimSegment");
HAnimSegment1770.USE = "hanim_t3";
HAnimHumanoid45.segments[125] = HAnimSegment1770;

HAnimSegment HAnimSegment1771 = createNode("HAnimSegment");
HAnimSegment1771.USE = "hanim_t4";
HAnimHumanoid45.segments[126] = HAnimSegment1771;

HAnimSegment HAnimSegment1772 = createNode("HAnimSegment");
HAnimSegment1772.USE = "hanim_t5";
HAnimHumanoid45.segments[127] = HAnimSegment1772;

HAnimSegment HAnimSegment1773 = createNode("HAnimSegment");
HAnimSegment1773.USE = "hanim_t6";
HAnimHumanoid45.segments[128] = HAnimSegment1773;

HAnimSegment HAnimSegment1774 = createNode("HAnimSegment");
HAnimSegment1774.USE = "hanim_t7";
HAnimHumanoid45.segments[129] = HAnimSegment1774;

HAnimSegment HAnimSegment1775 = createNode("HAnimSegment");
HAnimSegment1775.USE = "hanim_t8";
HAnimHumanoid45.segments[130] = HAnimSegment1775;

HAnimSegment HAnimSegment1776 = createNode("HAnimSegment");
HAnimSegment1776.USE = "hanim_t9";
HAnimHumanoid45.segments[131] = HAnimSegment1776;

HAnimSegment HAnimSegment1777 = createNode("HAnimSegment");
HAnimSegment1777.USE = "hanim_t10";
HAnimHumanoid45.segments[132] = HAnimSegment1777;

HAnimSegment HAnimSegment1778 = createNode("HAnimSegment");
HAnimSegment1778.USE = "hanim_t11";
HAnimHumanoid45.segments[133] = HAnimSegment1778;

HAnimSegment HAnimSegment1779 = createNode("HAnimSegment");
HAnimSegment1779.USE = "hanim_t12";
HAnimHumanoid45.segments[134] = HAnimSegment1779;

HAnimSegment HAnimSegment1780 = createNode("HAnimSegment");
HAnimSegment1780.USE = "hanim_l1";
HAnimHumanoid45.segments[135] = HAnimSegment1780;

HAnimSegment HAnimSegment1781 = createNode("HAnimSegment");
HAnimSegment1781.USE = "hanim_l2";
HAnimHumanoid45.segments[136] = HAnimSegment1781;

HAnimSegment HAnimSegment1782 = createNode("HAnimSegment");
HAnimSegment1782.USE = "hanim_l3";
HAnimHumanoid45.segments[137] = HAnimSegment1782;

HAnimSegment HAnimSegment1783 = createNode("HAnimSegment");
HAnimSegment1783.USE = "hanim_l4";
HAnimHumanoid45.segments[138] = HAnimSegment1783;

HAnimSegment HAnimSegment1784 = createNode("HAnimSegment");
HAnimSegment1784.USE = "hanim_l5";
HAnimHumanoid45.segments[139] = HAnimSegment1784;

HAnimSegment HAnimSegment1785 = createNode("HAnimSegment");
HAnimSegment1785.USE = "hanim_sacrum";
HAnimHumanoid45.segments[140] = HAnimSegment1785;

HAnimSegment HAnimSegment1786 = createNode("HAnimSegment");
HAnimSegment1786.USE = "hanim_l_calf";
HAnimHumanoid45.segments[141] = HAnimSegment1786;

HAnimSegment HAnimSegment1787 = createNode("HAnimSegment");
HAnimSegment1787.USE = "hanim_r_calf";
HAnimHumanoid45.segments[142] = HAnimSegment1787;

HAnimSegment HAnimSegment1788 = createNode("HAnimSegment");
HAnimSegment1788.USE = "hanim_l_clavicle";
HAnimHumanoid45.segments[143] = HAnimSegment1788;

HAnimSegment HAnimSegment1789 = createNode("HAnimSegment");
HAnimSegment1789.USE = "hanim_r_clavicle";
HAnimHumanoid45.segments[144] = HAnimSegment1789;

HAnimSegment HAnimSegment1790 = createNode("HAnimSegment");
HAnimSegment1790.USE = "hanim_l_eyeball";
HAnimHumanoid45.segments[145] = HAnimSegment1790;

HAnimSegment HAnimSegment1791 = createNode("HAnimSegment");
HAnimSegment1791.USE = "hanim_r_eyeball";
HAnimHumanoid45.segments[146] = HAnimSegment1791;

HAnimSegment HAnimSegment1792 = createNode("HAnimSegment");
HAnimSegment1792.USE = "hanim_l_eyebrow";
HAnimHumanoid45.segments[147] = HAnimSegment1792;

HAnimSegment HAnimSegment1793 = createNode("HAnimSegment");
HAnimSegment1793.USE = "hanim_r_eyebrow";
HAnimHumanoid45.segments[148] = HAnimSegment1793;

HAnimSegment HAnimSegment1794 = createNode("HAnimSegment");
HAnimSegment1794.USE = "hanim_l_eyelid";
HAnimHumanoid45.segments[149] = HAnimSegment1794;

HAnimSegment HAnimSegment1795 = createNode("HAnimSegment");
HAnimSegment1795.USE = "hanim_r_eyelid";
HAnimHumanoid45.segments[150] = HAnimSegment1795;

HAnimSegment HAnimSegment1796 = createNode("HAnimSegment");
HAnimSegment1796.USE = "hanim_l_forearm";
HAnimHumanoid45.segments[151] = HAnimSegment1796;

HAnimSegment HAnimSegment1797 = createNode("HAnimSegment");
HAnimSegment1797.USE = "hanim_r_forearm";
HAnimHumanoid45.segments[152] = HAnimSegment1797;

HAnimSegment HAnimSegment1798 = createNode("HAnimSegment");
HAnimSegment1798.USE = "hanim_l_forefoot";
HAnimHumanoid45.segments[153] = HAnimSegment1798;

HAnimSegment HAnimSegment1799 = createNode("HAnimSegment");
HAnimSegment1799.USE = "hanim_r_forefoot";
HAnimHumanoid45.segments[154] = HAnimSegment1799;

HAnimSegment HAnimSegment1800 = createNode("HAnimSegment");
HAnimSegment1800.USE = "hanim_l_hand";
HAnimHumanoid45.segments[155] = HAnimSegment1800;

HAnimSegment HAnimSegment1801 = createNode("HAnimSegment");
HAnimSegment1801.USE = "hanim_r_hand";
HAnimHumanoid45.segments[156] = HAnimSegment1801;

HAnimSegment HAnimSegment1802 = createNode("HAnimSegment");
HAnimSegment1802.USE = "hanim_l_hindfoot";
HAnimHumanoid45.segments[157] = HAnimSegment1802;

HAnimSegment HAnimSegment1803 = createNode("HAnimSegment");
HAnimSegment1803.USE = "hanim_r_hindfoot";
HAnimHumanoid45.segments[158] = HAnimSegment1803;

HAnimSegment HAnimSegment1804 = createNode("HAnimSegment");
HAnimSegment1804.USE = "hanim_l_index_distal";
HAnimHumanoid45.segments[159] = HAnimSegment1804;

HAnimSegment HAnimSegment1805 = createNode("HAnimSegment");
HAnimSegment1805.USE = "hanim_r_index_distal";
HAnimHumanoid45.segments[160] = HAnimSegment1805;

HAnimSegment HAnimSegment1806 = createNode("HAnimSegment");
HAnimSegment1806.USE = "hanim_l_index_metacarpal";
HAnimHumanoid45.segments[161] = HAnimSegment1806;

HAnimSegment HAnimSegment1807 = createNode("HAnimSegment");
HAnimSegment1807.USE = "hanim_r_index_metacarpal";
HAnimHumanoid45.segments[162] = HAnimSegment1807;

HAnimSegment HAnimSegment1808 = createNode("HAnimSegment");
HAnimSegment1808.USE = "hanim_l_index_middle";
HAnimHumanoid45.segments[163] = HAnimSegment1808;

HAnimSegment HAnimSegment1809 = createNode("HAnimSegment");
HAnimSegment1809.USE = "hanim_r_index_middle";
HAnimHumanoid45.segments[164] = HAnimSegment1809;

HAnimSegment HAnimSegment1810 = createNode("HAnimSegment");
HAnimSegment1810.USE = "hanim_l_index_proximal";
HAnimHumanoid45.segments[165] = HAnimSegment1810;

HAnimSegment HAnimSegment1811 = createNode("HAnimSegment");
HAnimSegment1811.USE = "hanim_r_index_proximal";
HAnimHumanoid45.segments[166] = HAnimSegment1811;

HAnimSegment HAnimSegment1812 = createNode("HAnimSegment");
HAnimSegment1812.USE = "hanim_l_middistal";
HAnimHumanoid45.segments[167] = HAnimSegment1812;

HAnimSegment HAnimSegment1813 = createNode("HAnimSegment");
HAnimSegment1813.USE = "hanim_r_middistal";
HAnimHumanoid45.segments[168] = HAnimSegment1813;

HAnimSegment HAnimSegment1814 = createNode("HAnimSegment");
HAnimSegment1814.USE = "hanim_l_middle_distal";
HAnimHumanoid45.segments[169] = HAnimSegment1814;

HAnimSegment HAnimSegment1815 = createNode("HAnimSegment");
HAnimSegment1815.USE = "hanim_r_middle_distal";
HAnimHumanoid45.segments[170] = HAnimSegment1815;

HAnimSegment HAnimSegment1816 = createNode("HAnimSegment");
HAnimSegment1816.USE = "hanim_l_middle_metacarpal";
HAnimHumanoid45.segments[171] = HAnimSegment1816;

HAnimSegment HAnimSegment1817 = createNode("HAnimSegment");
HAnimSegment1817.USE = "hanim_r_middle_metacarpal";
HAnimHumanoid45.segments[172] = HAnimSegment1817;

HAnimSegment HAnimSegment1818 = createNode("HAnimSegment");
HAnimSegment1818.USE = "hanim_l_middle_middle";
HAnimHumanoid45.segments[173] = HAnimSegment1818;

HAnimSegment HAnimSegment1819 = createNode("HAnimSegment");
HAnimSegment1819.USE = "hanim_r_middle_middle";
HAnimHumanoid45.segments[174] = HAnimSegment1819;

HAnimSegment HAnimSegment1820 = createNode("HAnimSegment");
HAnimSegment1820.USE = "hanim_l_middle_proximal";
HAnimHumanoid45.segments[175] = HAnimSegment1820;

HAnimSegment HAnimSegment1821 = createNode("HAnimSegment");
HAnimSegment1821.USE = "hanim_r_middle_proximal";
HAnimHumanoid45.segments[176] = HAnimSegment1821;

HAnimSegment HAnimSegment1822 = createNode("HAnimSegment");
HAnimSegment1822.USE = "hanim_l_midproximal";
HAnimHumanoid45.segments[177] = HAnimSegment1822;

HAnimSegment HAnimSegment1823 = createNode("HAnimSegment");
HAnimSegment1823.USE = "hanim_r_midproximal";
HAnimHumanoid45.segments[178] = HAnimSegment1823;

HAnimSegment HAnimSegment1824 = createNode("HAnimSegment");
HAnimSegment1824.USE = "hanim_l_pinky_distal";
HAnimHumanoid45.segments[179] = HAnimSegment1824;

HAnimSegment HAnimSegment1825 = createNode("HAnimSegment");
HAnimSegment1825.USE = "hanim_r_pinky_distal";
HAnimHumanoid45.segments[180] = HAnimSegment1825;

HAnimSegment HAnimSegment1826 = createNode("HAnimSegment");
HAnimSegment1826.USE = "hanim_l_pinky_metacarpal";
HAnimHumanoid45.segments[181] = HAnimSegment1826;

HAnimSegment HAnimSegment1827 = createNode("HAnimSegment");
HAnimSegment1827.USE = "hanim_r_pinky_metacarpal";
HAnimHumanoid45.segments[182] = HAnimSegment1827;

HAnimSegment HAnimSegment1828 = createNode("HAnimSegment");
HAnimSegment1828.USE = "hanim_l_pinky_middle";
HAnimHumanoid45.segments[183] = HAnimSegment1828;

HAnimSegment HAnimSegment1829 = createNode("HAnimSegment");
HAnimSegment1829.USE = "hanim_r_pinky_middle";
HAnimHumanoid45.segments[184] = HAnimSegment1829;

HAnimSegment HAnimSegment1830 = createNode("HAnimSegment");
HAnimSegment1830.USE = "hanim_l_pinky_proximal";
HAnimHumanoid45.segments[185] = HAnimSegment1830;

HAnimSegment HAnimSegment1831 = createNode("HAnimSegment");
HAnimSegment1831.USE = "hanim_r_pinky_proximal";
HAnimHumanoid45.segments[186] = HAnimSegment1831;

HAnimSegment HAnimSegment1832 = createNode("HAnimSegment");
HAnimSegment1832.USE = "hanim_l_ring_distal";
HAnimHumanoid45.segments[187] = HAnimSegment1832;

HAnimSegment HAnimSegment1833 = createNode("HAnimSegment");
HAnimSegment1833.USE = "hanim_r_ring_distal";
HAnimHumanoid45.segments[188] = HAnimSegment1833;

HAnimSegment HAnimSegment1834 = createNode("HAnimSegment");
HAnimSegment1834.USE = "hanim_l_ring_metacarpal";
HAnimHumanoid45.segments[189] = HAnimSegment1834;

HAnimSegment HAnimSegment1835 = createNode("HAnimSegment");
HAnimSegment1835.USE = "hanim_r_ring_metacarpal";
HAnimHumanoid45.segments[190] = HAnimSegment1835;

HAnimSegment HAnimSegment1836 = createNode("HAnimSegment");
HAnimSegment1836.USE = "hanim_l_ring_middle";
HAnimHumanoid45.segments[191] = HAnimSegment1836;

HAnimSegment HAnimSegment1837 = createNode("HAnimSegment");
HAnimSegment1837.USE = "hanim_r_ring_middle";
HAnimHumanoid45.segments[192] = HAnimSegment1837;

HAnimSegment HAnimSegment1838 = createNode("HAnimSegment");
HAnimSegment1838.USE = "hanim_l_ring_proximal";
HAnimHumanoid45.segments[193] = HAnimSegment1838;

HAnimSegment HAnimSegment1839 = createNode("HAnimSegment");
HAnimSegment1839.USE = "hanim_r_ring_proximal";
HAnimHumanoid45.segments[194] = HAnimSegment1839;

HAnimSegment HAnimSegment1840 = createNode("HAnimSegment");
HAnimSegment1840.USE = "hanim_l_scapula";
HAnimHumanoid45.segments[195] = HAnimSegment1840;

HAnimSegment HAnimSegment1841 = createNode("HAnimSegment");
HAnimSegment1841.USE = "hanim_r_scapula";
HAnimHumanoid45.segments[196] = HAnimSegment1841;

HAnimSegment HAnimSegment1842 = createNode("HAnimSegment");
HAnimSegment1842.USE = "hanim_l_thigh";
HAnimHumanoid45.segments[197] = HAnimSegment1842;

HAnimSegment HAnimSegment1843 = createNode("HAnimSegment");
HAnimSegment1843.USE = "hanim_r_thigh";
HAnimHumanoid45.segments[198] = HAnimSegment1843;

HAnimSegment HAnimSegment1844 = createNode("HAnimSegment");
HAnimSegment1844.USE = "hanim_l_thumb_distal";
HAnimHumanoid45.segments[199] = HAnimSegment1844;

HAnimSegment HAnimSegment1845 = createNode("HAnimSegment");
HAnimSegment1845.USE = "hanim_r_thumb_distal";
HAnimHumanoid45.segments[200] = HAnimSegment1845;

HAnimSegment HAnimSegment1846 = createNode("HAnimSegment");
HAnimSegment1846.USE = "hanim_l_thumb_metacarpal";
HAnimHumanoid45.segments[201] = HAnimSegment1846;

HAnimSegment HAnimSegment1847 = createNode("HAnimSegment");
HAnimSegment1847.USE = "hanim_r_thumb_metacarpal";
HAnimHumanoid45.segments[202] = HAnimSegment1847;

HAnimSegment HAnimSegment1848 = createNode("HAnimSegment");
HAnimSegment1848.USE = "hanim_l_thumb_proximal";
HAnimHumanoid45.segments[203] = HAnimSegment1848;

HAnimSegment HAnimSegment1849 = createNode("HAnimSegment");
HAnimSegment1849.USE = "hanim_r_thumb_proximal";
HAnimHumanoid45.segments[204] = HAnimSegment1849;

HAnimSegment HAnimSegment1850 = createNode("HAnimSegment");
HAnimSegment1850.USE = "hanim_l_upperarm";
HAnimHumanoid45.segments[205] = HAnimSegment1850;

HAnimSegment HAnimSegment1851 = createNode("HAnimSegment");
HAnimSegment1851.USE = "hanim_r_upperarm";
HAnimHumanoid45.segments[206] = HAnimSegment1851;

HAnimSite HAnimSite1852 = createNode("HAnimSite");
HAnimSite1852.USE = "hanim_crotch_pt";
HAnimHumanoid45.viewpoints[207] = HAnimSite1852;

HAnimSite HAnimSite1853 = createNode("HAnimSite");
HAnimSite1853.USE = "hanim_skull_tip";
HAnimHumanoid45.viewpoints[208] = HAnimSite1853;

HAnimSite HAnimSite1854 = createNode("HAnimSite");
HAnimSite1854.USE = "hanim_sellion_pt";
HAnimHumanoid45.viewpoints[209] = HAnimSite1854;

HAnimSite HAnimSite1855 = createNode("HAnimSite");
HAnimSite1855.USE = "hanim_supramenton_pt";
HAnimHumanoid45.viewpoints[210] = HAnimSite1855;

HAnimSite HAnimSite1856 = createNode("HAnimSite");
HAnimSite1856.USE = "hanim_nuchale_pt";
HAnimHumanoid45.viewpoints[211] = HAnimSite1856;

HAnimSite HAnimSite1857 = createNode("HAnimSite");
HAnimSite1857.USE = "hanim_suprasternale_pt";
HAnimHumanoid45.viewpoints[212] = HAnimSite1857;

HAnimSite HAnimSite1858 = createNode("HAnimSite");
HAnimSite1858.USE = "hanim_cervicale_pt";
HAnimHumanoid45.viewpoints[213] = HAnimSite1858;

HAnimSite HAnimSite1859 = createNode("HAnimSite");
HAnimSite1859.USE = "hanim_substernale_pt";
HAnimHumanoid45.viewpoints[214] = HAnimSite1859;

HAnimSite HAnimSite1860 = createNode("HAnimSite");
HAnimSite1860.USE = "hanim_rib10_midspine_pt";
HAnimHumanoid45.viewpoints[215] = HAnimSite1860;

HAnimSite HAnimSite1861 = createNode("HAnimSite");
HAnimSite1861.USE = "hanim_waist_preferred_post_pt";
HAnimHumanoid45.viewpoints[216] = HAnimSite1861;

HAnimSite HAnimSite1862 = createNode("HAnimSite");
HAnimSite1862.USE = "hanim_navel_pt";
HAnimHumanoid45.viewpoints[217] = HAnimSite1862;

HAnimSite HAnimSite1863 = createNode("HAnimSite");
HAnimSite1863.USE = "hanim_l_acromion_pt";
HAnimHumanoid45.viewpoints[218] = HAnimSite1863;

HAnimSite HAnimSite1864 = createNode("HAnimSite");
HAnimSite1864.USE = "hanim_r_acromion_pt";
HAnimHumanoid45.viewpoints[219] = HAnimSite1864;

HAnimSite HAnimSite1865 = createNode("HAnimSite");
HAnimSite1865.USE = "hanim_r_asis_pt";
HAnimHumanoid45.viewpoints[220] = HAnimSite1865;

HAnimSite HAnimSite1866 = createNode("HAnimSite");
HAnimSite1866.USE = "hanim_l_asis_pt";
HAnimHumanoid45.viewpoints[221] = HAnimSite1866;

HAnimSite HAnimSite1867 = createNode("HAnimSite");
HAnimSite1867.USE = "hanim_l_axilla_ant_pt";
HAnimHumanoid45.viewpoints[222] = HAnimSite1867;

HAnimSite HAnimSite1868 = createNode("HAnimSite");
HAnimSite1868.USE = "hanim_r_axilla_ant_pt";
HAnimHumanoid45.viewpoints[223] = HAnimSite1868;

HAnimSite HAnimSite1869 = createNode("HAnimSite");
HAnimSite1869.USE = "hanim_l_axilla_post_pt";
HAnimHumanoid45.viewpoints[224] = HAnimSite1869;

HAnimSite HAnimSite1870 = createNode("HAnimSite");
HAnimSite1870.USE = "hanim_r_axilla_post_pt";
HAnimHumanoid45.viewpoints[225] = HAnimSite1870;

HAnimSite HAnimSite1871 = createNode("HAnimSite");
HAnimSite1871.USE = "hanim_l_calcaneous_post_pt";
HAnimHumanoid45.viewpoints[226] = HAnimSite1871;

HAnimSite HAnimSite1872 = createNode("HAnimSite");
HAnimSite1872.USE = "hanim_r_calcaneous_post_pt";
HAnimHumanoid45.viewpoints[227] = HAnimSite1872;

HAnimSite HAnimSite1873 = createNode("HAnimSite");
HAnimSite1873.USE = "hanim_l_clavicale_pt";
HAnimHumanoid45.viewpoints[228] = HAnimSite1873;

HAnimSite HAnimSite1874 = createNode("HAnimSite");
HAnimSite1874.USE = "hanim_r_clavicale_pt";
HAnimHumanoid45.viewpoints[229] = HAnimSite1874;

HAnimSite HAnimSite1875 = createNode("HAnimSite");
HAnimSite1875.USE = "hanim_l_dactylion_pt";
HAnimHumanoid45.viewpoints[230] = HAnimSite1875;

HAnimSite HAnimSite1876 = createNode("HAnimSite");
HAnimSite1876.USE = "hanim_r_dactylion_pt";
HAnimHumanoid45.viewpoints[231] = HAnimSite1876;

HAnimSite HAnimSite1877 = createNode("HAnimSite");
HAnimSite1877.USE = "hanim_l_digit2_pt";
HAnimHumanoid45.viewpoints[232] = HAnimSite1877;

HAnimSite HAnimSite1878 = createNode("HAnimSite");
HAnimSite1878.USE = "hanim_r_digit2_pt";
HAnimHumanoid45.viewpoints[233] = HAnimSite1878;

HAnimSite HAnimSite1879 = createNode("HAnimSite");
HAnimSite1879.USE = "hanim_l_femoral_lateral_epicn_pt";
HAnimHumanoid45.viewpoints[234] = HAnimSite1879;

HAnimSite HAnimSite1880 = createNode("HAnimSite");
HAnimSite1880.USE = "hanim_r_femoral_lateral_epicn_pt";
HAnimHumanoid45.viewpoints[235] = HAnimSite1880;

HAnimSite HAnimSite1881 = createNode("HAnimSite");
HAnimSite1881.USE = "hanim_l_femoral_medial_epicn_pt";
HAnimHumanoid45.viewpoints[236] = HAnimSite1881;

HAnimSite HAnimSite1882 = createNode("HAnimSite");
HAnimSite1882.USE = "hanim_r_femoral_medial_epicn_pt";
HAnimHumanoid45.viewpoints[237] = HAnimSite1882;

HAnimSite HAnimSite1883 = createNode("HAnimSite");
HAnimSite1883.USE = "hanim_l_forefoot_tip";
HAnimHumanoid45.viewpoints[238] = HAnimSite1883;

HAnimSite HAnimSite1884 = createNode("HAnimSite");
HAnimSite1884.USE = "hanim_r_forefoot_tip";
HAnimHumanoid45.viewpoints[239] = HAnimSite1884;

HAnimSite HAnimSite1885 = createNode("HAnimSite");
HAnimSite1885.USE = "hanim_r_gonion_pt";
HAnimHumanoid45.viewpoints[240] = HAnimSite1885;

HAnimSite HAnimSite1886 = createNode("HAnimSite");
HAnimSite1886.USE = "hanim_l_gonion_pt";
HAnimHumanoid45.viewpoints[241] = HAnimSite1886;

HAnimSite HAnimSite1887 = createNode("HAnimSite");
HAnimSite1887.USE = "hanim_l_humeral_lateral_epicn_pt";
HAnimHumanoid45.viewpoints[242] = HAnimSite1887;

HAnimSite HAnimSite1888 = createNode("HAnimSite");
HAnimSite1888.USE = "hanim_r_humeral_lateral_epicn_pt";
HAnimHumanoid45.viewpoints[243] = HAnimSite1888;

HAnimSite HAnimSite1889 = createNode("HAnimSite");
HAnimSite1889.USE = "hanim_l_humeral_medial_epicn_pt";
HAnimHumanoid45.viewpoints[244] = HAnimSite1889;

HAnimSite HAnimSite1890 = createNode("HAnimSite");
HAnimSite1890.USE = "hanim_r_humeral_medial_epicn_pt";
HAnimHumanoid45.viewpoints[245] = HAnimSite1890;

HAnimSite HAnimSite1891 = createNode("HAnimSite");
HAnimSite1891.USE = "hanim_r_iliocristale_pt";
HAnimHumanoid45.viewpoints[246] = HAnimSite1891;

HAnimSite HAnimSite1892 = createNode("HAnimSite");
HAnimSite1892.USE = "hanim_l_iliocristale_pt";
HAnimHumanoid45.viewpoints[247] = HAnimSite1892;

HAnimSite HAnimSite1893 = createNode("HAnimSite");
HAnimSite1893.USE = "hanim_l_index_distal_tip";
HAnimHumanoid45.viewpoints[248] = HAnimSite1893;

HAnimSite HAnimSite1894 = createNode("HAnimSite");
HAnimSite1894.USE = "hanim_r_index_distal_tip";
HAnimHumanoid45.viewpoints[249] = HAnimSite1894;

HAnimSite HAnimSite1895 = createNode("HAnimSite");
HAnimSite1895.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid45.viewpoints[250] = HAnimSite1895;

HAnimSite HAnimSite1896 = createNode("HAnimSite");
HAnimSite1896.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid45.viewpoints[251] = HAnimSite1896;

HAnimSite HAnimSite1897 = createNode("HAnimSite");
HAnimSite1897.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid45.viewpoints[252] = HAnimSite1897;

HAnimSite HAnimSite1898 = createNode("HAnimSite");
HAnimSite1898.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid45.viewpoints[253] = HAnimSite1898;

HAnimSite HAnimSite1899 = createNode("HAnimSite");
HAnimSite1899.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid45.viewpoints[254] = HAnimSite1899;

HAnimSite HAnimSite1900 = createNode("HAnimSite");
HAnimSite1900.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid45.viewpoints[255] = HAnimSite1900;

HAnimSite HAnimSite1901 = createNode("HAnimSite");
HAnimSite1901.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid45.viewpoints[256] = HAnimSite1901;

HAnimSite HAnimSite1902 = createNode("HAnimSite");
HAnimSite1902.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid45.viewpoints[257] = HAnimSite1902;

HAnimSite HAnimSite1903 = createNode("HAnimSite");
HAnimSite1903.USE = "hanim_l_metacarpal_pha2_pt";
HAnimHumanoid45.viewpoints[258] = HAnimSite1903;

HAnimSite HAnimSite1904 = createNode("HAnimSite");
HAnimSite1904.USE = "hanim_r_metacarpal_pha2_pt";
HAnimHumanoid45.viewpoints[259] = HAnimSite1904;

HAnimSite HAnimSite1905 = createNode("HAnimSite");
HAnimSite1905.USE = "hanim_l_metacarpal_pha5_pt";
HAnimHumanoid45.viewpoints[260] = HAnimSite1905;

HAnimSite HAnimSite1906 = createNode("HAnimSite");
HAnimSite1906.USE = "hanim_r_metacarpal_pha5_pt";
HAnimHumanoid45.viewpoints[261] = HAnimSite1906;

HAnimSite HAnimSite1907 = createNode("HAnimSite");
HAnimSite1907.USE = "hanim_l_metatarsal_pha1_pt";
HAnimHumanoid45.viewpoints[262] = HAnimSite1907;

HAnimSite HAnimSite1908 = createNode("HAnimSite");
HAnimSite1908.USE = "hanim_r_metatarsal_pha1_pt";
HAnimHumanoid45.viewpoints[263] = HAnimSite1908;

HAnimSite HAnimSite1909 = createNode("HAnimSite");
HAnimSite1909.USE = "hanim_l_metatarsal_pha5_pt";
HAnimHumanoid45.viewpoints[264] = HAnimSite1909;

HAnimSite HAnimSite1910 = createNode("HAnimSite");
HAnimSite1910.USE = "hanim_r_metatarsal_pha5_pt";
HAnimHumanoid45.viewpoints[265] = HAnimSite1910;

HAnimSite HAnimSite1911 = createNode("HAnimSite");
HAnimSite1911.USE = "hanim_l_middle_distal_tip";
HAnimHumanoid45.viewpoints[266] = HAnimSite1911;

HAnimSite HAnimSite1912 = createNode("HAnimSite");
HAnimSite1912.USE = "hanim_r_middle_distal_tip";
HAnimHumanoid45.viewpoints[267] = HAnimSite1912;

HAnimSite HAnimSite1913 = createNode("HAnimSite");
HAnimSite1913.USE = "hanim_r_neck_base_pt";
HAnimHumanoid45.viewpoints[268] = HAnimSite1913;

HAnimSite HAnimSite1914 = createNode("HAnimSite");
HAnimSite1914.USE = "hanim_l_neck_base_pt";
HAnimHumanoid45.viewpoints[269] = HAnimSite1914;

HAnimSite HAnimSite1915 = createNode("HAnimSite");
HAnimSite1915.USE = "hanim_l_olecranon_pt";
HAnimHumanoid45.viewpoints[270] = HAnimSite1915;

HAnimSite HAnimSite1916 = createNode("HAnimSite");
HAnimSite1916.USE = "hanim_r_olecranon_pt";
HAnimHumanoid45.viewpoints[271] = HAnimSite1916;

HAnimSite HAnimSite1917 = createNode("HAnimSite");
HAnimSite1917.USE = "hanim_l_pinky_distal_tip";
HAnimHumanoid45.viewpoints[272] = HAnimSite1917;

HAnimSite HAnimSite1918 = createNode("HAnimSite");
HAnimSite1918.USE = "hanim_r_pinky_distal_tip";
HAnimHumanoid45.viewpoints[273] = HAnimSite1918;

HAnimSite HAnimSite1919 = createNode("HAnimSite");
HAnimSite1919.USE = "hanim_r_psis_pt";
HAnimHumanoid45.viewpoints[274] = HAnimSite1919;

HAnimSite HAnimSite1920 = createNode("HAnimSite");
HAnimSite1920.USE = "hanim_l_psis_pt";
HAnimHumanoid45.viewpoints[275] = HAnimSite1920;

HAnimSite HAnimSite1921 = createNode("HAnimSite");
HAnimSite1921.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid45.viewpoints[276] = HAnimSite1921;

HAnimSite HAnimSite1922 = createNode("HAnimSite");
HAnimSite1922.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid45.viewpoints[277] = HAnimSite1922;

HAnimSite HAnimSite1923 = createNode("HAnimSite");
HAnimSite1923.USE = "hanim_l_radiale_pt";
HAnimHumanoid45.viewpoints[278] = HAnimSite1923;

HAnimSite HAnimSite1924 = createNode("HAnimSite");
HAnimSite1924.USE = "hanim_r_radiale_pt";
HAnimHumanoid45.viewpoints[279] = HAnimSite1924;

HAnimSite HAnimSite1925 = createNode("HAnimSite");
HAnimSite1925.USE = "hanim_r_rib10_pt";
HAnimHumanoid45.viewpoints[280] = HAnimSite1925;

HAnimSite HAnimSite1926 = createNode("HAnimSite");
HAnimSite1926.USE = "hanim_l_rib10_pt";
HAnimHumanoid45.viewpoints[281] = HAnimSite1926;

HAnimSite HAnimSite1927 = createNode("HAnimSite");
HAnimSite1927.USE = "hanim_l_ring_distal_tip";
HAnimHumanoid45.viewpoints[282] = HAnimSite1927;

HAnimSite HAnimSite1928 = createNode("HAnimSite");
HAnimSite1928.USE = "hanim_r_ring_distal_tip";
HAnimHumanoid45.viewpoints[283] = HAnimSite1928;

HAnimSite HAnimSite1929 = createNode("HAnimSite");
HAnimSite1929.USE = "hanim_temporomandibular_l_site_pt";
HAnimHumanoid45.viewpoints[284] = HAnimSite1929;

HAnimSite HAnimSite1930 = createNode("HAnimSite");
HAnimSite1930.USE = "hanim_temporomandibular_r_site_pt";
HAnimHumanoid45.viewpoints[285] = HAnimSite1930;

HAnimSite HAnimSite1931 = createNode("HAnimSite");
HAnimSite1931.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid45.viewpoints[286] = HAnimSite1931;

HAnimSite HAnimSite1932 = createNode("HAnimSite");
HAnimSite1932.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid45.viewpoints[287] = HAnimSite1932;

HAnimSite HAnimSite1933 = createNode("HAnimSite");
HAnimSite1933.USE = "hanim_r_thelion_pt";
HAnimHumanoid45.viewpoints[288] = HAnimSite1933;

HAnimSite HAnimSite1934 = createNode("HAnimSite");
HAnimSite1934.USE = "hanim_l_thelion_pt";
HAnimHumanoid45.viewpoints[289] = HAnimSite1934;

HAnimSite HAnimSite1935 = createNode("HAnimSite");
HAnimSite1935.USE = "hanim_l_thumb_distal_tip";
HAnimHumanoid45.viewpoints[290] = HAnimSite1935;

HAnimSite HAnimSite1936 = createNode("HAnimSite");
HAnimSite1936.USE = "hanim_r_thumb_distal_tip";
HAnimHumanoid45.viewpoints[291] = HAnimSite1936;

HAnimSite HAnimSite1937 = createNode("HAnimSite");
HAnimSite1937.USE = "hanim_r_tragion_pt";
HAnimHumanoid45.viewpoints[292] = HAnimSite1937;

HAnimSite HAnimSite1938 = createNode("HAnimSite");
HAnimSite1938.USE = "hanim_l_tragion_pt";
HAnimHumanoid45.viewpoints[293] = HAnimSite1938;

HAnimSite HAnimSite1939 = createNode("HAnimSite");
HAnimSite1939.USE = "hanim_r_trochanterion_pt";
HAnimHumanoid45.viewpoints[294] = HAnimSite1939;

HAnimSite HAnimSite1940 = createNode("HAnimSite");
HAnimSite1940.USE = "hanim_l_trochanterion_pt";
HAnimHumanoid45.viewpoints[295] = HAnimSite1940;

HAnimSite HAnimSite1941 = createNode("HAnimSite");
HAnimSite1941.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid45.viewpoints[296] = HAnimSite1941;

HAnimSite HAnimSite1942 = createNode("HAnimSite");
HAnimSite1942.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid45.viewpoints[297] = HAnimSite1942;

children[12] = HAnimHumanoid45;

Group Group1943 = createNode("Group");
Group1943.DEF = "StopAnimation";
TimeSensor TimeSensor1944 = createNode("TimeSensor");
TimeSensor1944.DEF = "StopTimer";
TimeSensor1944.cycleInterval = 5.73;
TimeSensor1944.loop = True;
Group1943.children = new MFNode();

Group1943.children[0] = TimeSensor1944;

PositionInterpolator PositionInterpolator1945 = createNode("PositionInterpolator");
PositionInterpolator1945.DEF = "Stop_HumanoidRoot_TranslationInterpolator";
PositionInterpolator1945.key = new MFFloat(new float[0,0.5,1]);
PositionInterpolator1945.keyValue = new MFVec3f(new float[0,0,0,0,0,0,0,0,0]);
Group1943.children[1] = PositionInterpolator1945;

OrientationInterpolator OrientationInterpolator1946 = createNode("OrientationInterpolator");
OrientationInterpolator1946.DEF = "Stop_HumanoidRoot_RotationInterpolator";
OrientationInterpolator1946.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1946.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[2] = OrientationInterpolator1946;

OrientationInterpolator OrientationInterpolator1947 = createNode("OrientationInterpolator");
OrientationInterpolator1947.DEF = "Stop_sacroiliac_RotationInterpolator";
OrientationInterpolator1947.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1947.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[3] = OrientationInterpolator1947;

OrientationInterpolator OrientationInterpolator1948 = createNode("OrientationInterpolator");
OrientationInterpolator1948.DEF = "Stop_l_hip_RotationInterpolator";
OrientationInterpolator1948.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1948.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[4] = OrientationInterpolator1948;

OrientationInterpolator OrientationInterpolator1949 = createNode("OrientationInterpolator");
OrientationInterpolator1949.DEF = "Stop_l_knee_RotationInterpolator";
OrientationInterpolator1949.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1949.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[5] = OrientationInterpolator1949;

OrientationInterpolator OrientationInterpolator1950 = createNode("OrientationInterpolator");
OrientationInterpolator1950.DEF = "Stop_l_ankle_RotationInterpolator";
OrientationInterpolator1950.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1950.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[6] = OrientationInterpolator1950;

OrientationInterpolator OrientationInterpolator1951 = createNode("OrientationInterpolator");
OrientationInterpolator1951.DEF = "Stop_l_subtalar_RotationInterpolator";
OrientationInterpolator1951.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1951.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[7] = OrientationInterpolator1951;

OrientationInterpolator OrientationInterpolator1952 = createNode("OrientationInterpolator");
OrientationInterpolator1952.DEF = "Stop_l_midtarsal_RotationInterpolator";
OrientationInterpolator1952.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1952.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[8] = OrientationInterpolator1952;

OrientationInterpolator OrientationInterpolator1953 = createNode("OrientationInterpolator");
OrientationInterpolator1953.DEF = "Stop_l_metatarsal_RotationInterpolator";
OrientationInterpolator1953.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1953.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[9] = OrientationInterpolator1953;

OrientationInterpolator OrientationInterpolator1954 = createNode("OrientationInterpolator");
OrientationInterpolator1954.DEF = "Stop_r_hip_RotationInterpolator";
OrientationInterpolator1954.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1954.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[10] = OrientationInterpolator1954;

OrientationInterpolator OrientationInterpolator1955 = createNode("OrientationInterpolator");
OrientationInterpolator1955.DEF = "Stop_r_knee_RotationInterpolator";
OrientationInterpolator1955.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1955.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[11] = OrientationInterpolator1955;

OrientationInterpolator OrientationInterpolator1956 = createNode("OrientationInterpolator");
OrientationInterpolator1956.DEF = "Stop_r_ankle_RotationInterpolator";
OrientationInterpolator1956.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1956.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[12] = OrientationInterpolator1956;

OrientationInterpolator OrientationInterpolator1957 = createNode("OrientationInterpolator");
OrientationInterpolator1957.DEF = "Stop_r_subtalar_RotationInterpolator";
OrientationInterpolator1957.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1957.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[13] = OrientationInterpolator1957;

OrientationInterpolator OrientationInterpolator1958 = createNode("OrientationInterpolator");
OrientationInterpolator1958.DEF = "Stop_r_midtarsal_RotationInterpolator";
OrientationInterpolator1958.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1958.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[14] = OrientationInterpolator1958;

OrientationInterpolator OrientationInterpolator1959 = createNode("OrientationInterpolator");
OrientationInterpolator1959.DEF = "Stop_r_metatarsal_RotationInterpolator";
OrientationInterpolator1959.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1959.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[15] = OrientationInterpolator1959;

OrientationInterpolator OrientationInterpolator1960 = createNode("OrientationInterpolator");
OrientationInterpolator1960.DEF = "Stop_vl5_RotationInterpolator";
OrientationInterpolator1960.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1960.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[16] = OrientationInterpolator1960;

OrientationInterpolator OrientationInterpolator1961 = createNode("OrientationInterpolator");
OrientationInterpolator1961.DEF = "Stop_vl4_RotationInterpolator";
OrientationInterpolator1961.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1961.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[17] = OrientationInterpolator1961;

OrientationInterpolator OrientationInterpolator1962 = createNode("OrientationInterpolator");
OrientationInterpolator1962.DEF = "Stop_vl3_RotationInterpolator";
OrientationInterpolator1962.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1962.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[18] = OrientationInterpolator1962;

OrientationInterpolator OrientationInterpolator1963 = createNode("OrientationInterpolator");
OrientationInterpolator1963.DEF = "Stop_vl2_RotationInterpolator";
OrientationInterpolator1963.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1963.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[19] = OrientationInterpolator1963;

OrientationInterpolator OrientationInterpolator1964 = createNode("OrientationInterpolator");
OrientationInterpolator1964.DEF = "Stop_vl1_RotationInterpolator";
OrientationInterpolator1964.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1964.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[20] = OrientationInterpolator1964;

OrientationInterpolator OrientationInterpolator1965 = createNode("OrientationInterpolator");
OrientationInterpolator1965.DEF = "Stop_vt12_RotationInterpolator";
OrientationInterpolator1965.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1965.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[21] = OrientationInterpolator1965;

OrientationInterpolator OrientationInterpolator1966 = createNode("OrientationInterpolator");
OrientationInterpolator1966.DEF = "Stop_vt11_RotationInterpolator";
OrientationInterpolator1966.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1966.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[22] = OrientationInterpolator1966;

OrientationInterpolator OrientationInterpolator1967 = createNode("OrientationInterpolator");
OrientationInterpolator1967.DEF = "Stop_vt10_RotationInterpolator";
OrientationInterpolator1967.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1967.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[23] = OrientationInterpolator1967;

OrientationInterpolator OrientationInterpolator1968 = createNode("OrientationInterpolator");
OrientationInterpolator1968.DEF = "Stop_vt9_RotationInterpolator";
OrientationInterpolator1968.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1968.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[24] = OrientationInterpolator1968;

OrientationInterpolator OrientationInterpolator1969 = createNode("OrientationInterpolator");
OrientationInterpolator1969.DEF = "Stop_vt8_RotationInterpolator";
OrientationInterpolator1969.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1969.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[25] = OrientationInterpolator1969;

OrientationInterpolator OrientationInterpolator1970 = createNode("OrientationInterpolator");
OrientationInterpolator1970.DEF = "Stop_vt7_RotationInterpolator";
OrientationInterpolator1970.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1970.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[26] = OrientationInterpolator1970;

OrientationInterpolator OrientationInterpolator1971 = createNode("OrientationInterpolator");
OrientationInterpolator1971.DEF = "Stop_vt6_RotationInterpolator";
OrientationInterpolator1971.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1971.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[27] = OrientationInterpolator1971;

OrientationInterpolator OrientationInterpolator1972 = createNode("OrientationInterpolator");
OrientationInterpolator1972.DEF = "Stop_vt5_RotationInterpolator";
OrientationInterpolator1972.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1972.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[28] = OrientationInterpolator1972;

OrientationInterpolator OrientationInterpolator1973 = createNode("OrientationInterpolator");
OrientationInterpolator1973.DEF = "Stop_vt4_RotationInterpolator";
OrientationInterpolator1973.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1973.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[29] = OrientationInterpolator1973;

OrientationInterpolator OrientationInterpolator1974 = createNode("OrientationInterpolator");
OrientationInterpolator1974.DEF = "Stop_vt3_RotationInterpolator";
OrientationInterpolator1974.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1974.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[30] = OrientationInterpolator1974;

OrientationInterpolator OrientationInterpolator1975 = createNode("OrientationInterpolator");
OrientationInterpolator1975.DEF = "Stop_vt2_RotationInterpolator";
OrientationInterpolator1975.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1975.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[31] = OrientationInterpolator1975;

OrientationInterpolator OrientationInterpolator1976 = createNode("OrientationInterpolator");
OrientationInterpolator1976.DEF = "Stop_vt1_RotationInterpolator";
OrientationInterpolator1976.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1976.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[32] = OrientationInterpolator1976;

OrientationInterpolator OrientationInterpolator1977 = createNode("OrientationInterpolator");
OrientationInterpolator1977.DEF = "Stop_vc7_RotationInterpolator";
OrientationInterpolator1977.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1977.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[33] = OrientationInterpolator1977;

OrientationInterpolator OrientationInterpolator1978 = createNode("OrientationInterpolator");
OrientationInterpolator1978.DEF = "Stop_vc6_RotationInterpolator";
OrientationInterpolator1978.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1978.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[34] = OrientationInterpolator1978;

OrientationInterpolator OrientationInterpolator1979 = createNode("OrientationInterpolator");
OrientationInterpolator1979.DEF = "Stop_vc5_RotationInterpolator";
OrientationInterpolator1979.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1979.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[35] = OrientationInterpolator1979;

OrientationInterpolator OrientationInterpolator1980 = createNode("OrientationInterpolator");
OrientationInterpolator1980.DEF = "Stop_vc4_RotationInterpolator";
OrientationInterpolator1980.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1980.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[36] = OrientationInterpolator1980;

OrientationInterpolator OrientationInterpolator1981 = createNode("OrientationInterpolator");
OrientationInterpolator1981.DEF = "Stop_vc3_RotationInterpolator";
OrientationInterpolator1981.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1981.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[37] = OrientationInterpolator1981;

OrientationInterpolator OrientationInterpolator1982 = createNode("OrientationInterpolator");
OrientationInterpolator1982.DEF = "Stop_vc2_RotationInterpolator";
OrientationInterpolator1982.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1982.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[38] = OrientationInterpolator1982;

OrientationInterpolator OrientationInterpolator1983 = createNode("OrientationInterpolator");
OrientationInterpolator1983.DEF = "Stop_vc1_RotationInterpolator";
OrientationInterpolator1983.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1983.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[39] = OrientationInterpolator1983;

OrientationInterpolator OrientationInterpolator1984 = createNode("OrientationInterpolator");
OrientationInterpolator1984.DEF = "Stop_skullbase_RotationInterpolator";
OrientationInterpolator1984.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1984.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[40] = OrientationInterpolator1984;

OrientationInterpolator OrientationInterpolator1985 = createNode("OrientationInterpolator");
OrientationInterpolator1985.DEF = "Stop_l_eyeball_joint_RotationInterpolator";
OrientationInterpolator1985.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1985.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[41] = OrientationInterpolator1985;

OrientationInterpolator OrientationInterpolator1986 = createNode("OrientationInterpolator");
OrientationInterpolator1986.DEF = "Stop_r_eyeball_joint_RotationInterpolator";
OrientationInterpolator1986.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1986.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[42] = OrientationInterpolator1986;

OrientationInterpolator OrientationInterpolator1987 = createNode("OrientationInterpolator");
OrientationInterpolator1987.DEF = "Stop_l_sternoclavicular_RotationInterpolator";
OrientationInterpolator1987.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1987.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[43] = OrientationInterpolator1987;

OrientationInterpolator OrientationInterpolator1988 = createNode("OrientationInterpolator");
OrientationInterpolator1988.DEF = "Stop_l_acromioclavicular_RotationInterpolator";
OrientationInterpolator1988.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1988.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[44] = OrientationInterpolator1988;

OrientationInterpolator OrientationInterpolator1989 = createNode("OrientationInterpolator");
OrientationInterpolator1989.DEF = "Stop_l_shoulder_RotationInterpolator";
OrientationInterpolator1989.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1989.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[45] = OrientationInterpolator1989;

OrientationInterpolator OrientationInterpolator1990 = createNode("OrientationInterpolator");
OrientationInterpolator1990.DEF = "Stop_l_elbow_RotationInterpolator";
OrientationInterpolator1990.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1990.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[46] = OrientationInterpolator1990;

OrientationInterpolator OrientationInterpolator1991 = createNode("OrientationInterpolator");
OrientationInterpolator1991.DEF = "Stop_l_wrist_RotationInterpolator";
OrientationInterpolator1991.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1991.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[47] = OrientationInterpolator1991;

OrientationInterpolator OrientationInterpolator1992 = createNode("OrientationInterpolator");
OrientationInterpolator1992.DEF = "Stop_l_thumb1_RotationInterpolator";
OrientationInterpolator1992.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1992.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[48] = OrientationInterpolator1992;

OrientationInterpolator OrientationInterpolator1993 = createNode("OrientationInterpolator");
OrientationInterpolator1993.DEF = "Stop_l_thumb2_RotationInterpolator";
OrientationInterpolator1993.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1993.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[49] = OrientationInterpolator1993;

OrientationInterpolator OrientationInterpolator1994 = createNode("OrientationInterpolator");
OrientationInterpolator1994.DEF = "Stop_l_thumb3_RotationInterpolator";
OrientationInterpolator1994.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1994.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[50] = OrientationInterpolator1994;

OrientationInterpolator OrientationInterpolator1995 = createNode("OrientationInterpolator");
OrientationInterpolator1995.DEF = "Stop_l_index0_RotationInterpolator";
OrientationInterpolator1995.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1995.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[51] = OrientationInterpolator1995;

OrientationInterpolator OrientationInterpolator1996 = createNode("OrientationInterpolator");
OrientationInterpolator1996.DEF = "Stop_l_index1_RotationInterpolator";
OrientationInterpolator1996.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1996.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[52] = OrientationInterpolator1996;

OrientationInterpolator OrientationInterpolator1997 = createNode("OrientationInterpolator");
OrientationInterpolator1997.DEF = "Stop_l_index2_RotationInterpolator";
OrientationInterpolator1997.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1997.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[53] = OrientationInterpolator1997;

OrientationInterpolator OrientationInterpolator1998 = createNode("OrientationInterpolator");
OrientationInterpolator1998.DEF = "Stop_l_index3_RotationInterpolator";
OrientationInterpolator1998.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1998.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[54] = OrientationInterpolator1998;

OrientationInterpolator OrientationInterpolator1999 = createNode("OrientationInterpolator");
OrientationInterpolator1999.DEF = "Stop_l_middle0_RotationInterpolator";
OrientationInterpolator1999.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1999.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[55] = OrientationInterpolator1999;

OrientationInterpolator OrientationInterpolator2000 = createNode("OrientationInterpolator");
OrientationInterpolator2000.DEF = "Stop_l_middle1_RotationInterpolator";
OrientationInterpolator2000.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2000.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[56] = OrientationInterpolator2000;

OrientationInterpolator OrientationInterpolator2001 = createNode("OrientationInterpolator");
OrientationInterpolator2001.DEF = "Stop_l_middle2_RotationInterpolator";
OrientationInterpolator2001.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2001.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[57] = OrientationInterpolator2001;

OrientationInterpolator OrientationInterpolator2002 = createNode("OrientationInterpolator");
OrientationInterpolator2002.DEF = "Stop_l_middle3_RotationInterpolator";
OrientationInterpolator2002.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2002.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[58] = OrientationInterpolator2002;

OrientationInterpolator OrientationInterpolator2003 = createNode("OrientationInterpolator");
OrientationInterpolator2003.DEF = "Stop_l_ring0_RotationInterpolator";
OrientationInterpolator2003.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2003.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[59] = OrientationInterpolator2003;

OrientationInterpolator OrientationInterpolator2004 = createNode("OrientationInterpolator");
OrientationInterpolator2004.DEF = "Stop_l_ring1_RotationInterpolator";
OrientationInterpolator2004.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2004.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[60] = OrientationInterpolator2004;

OrientationInterpolator OrientationInterpolator2005 = createNode("OrientationInterpolator");
OrientationInterpolator2005.DEF = "Stop_l_ring2_RotationInterpolator";
OrientationInterpolator2005.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2005.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[61] = OrientationInterpolator2005;

OrientationInterpolator OrientationInterpolator2006 = createNode("OrientationInterpolator");
OrientationInterpolator2006.DEF = "Stop_l_ring3_RotationInterpolator";
OrientationInterpolator2006.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2006.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[62] = OrientationInterpolator2006;

OrientationInterpolator OrientationInterpolator2007 = createNode("OrientationInterpolator");
OrientationInterpolator2007.DEF = "Stop_l_pinky0_RotationInterpolator";
OrientationInterpolator2007.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2007.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[63] = OrientationInterpolator2007;

OrientationInterpolator OrientationInterpolator2008 = createNode("OrientationInterpolator");
OrientationInterpolator2008.DEF = "Stop_l_pinky1_RotationInterpolator";
OrientationInterpolator2008.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2008.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[64] = OrientationInterpolator2008;

OrientationInterpolator OrientationInterpolator2009 = createNode("OrientationInterpolator");
OrientationInterpolator2009.DEF = "Stop_l_pinky2_RotationInterpolator";
OrientationInterpolator2009.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2009.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[65] = OrientationInterpolator2009;

OrientationInterpolator OrientationInterpolator2010 = createNode("OrientationInterpolator");
OrientationInterpolator2010.DEF = "Stop_l_pinky3_RotationInterpolator";
OrientationInterpolator2010.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2010.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[66] = OrientationInterpolator2010;

OrientationInterpolator OrientationInterpolator2011 = createNode("OrientationInterpolator");
OrientationInterpolator2011.DEF = "Stop_r_sternoclavicular_RotationInterpolator";
OrientationInterpolator2011.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2011.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[67] = OrientationInterpolator2011;

OrientationInterpolator OrientationInterpolator2012 = createNode("OrientationInterpolator");
OrientationInterpolator2012.DEF = "Stop_r_acromioclavicular_RotationInterpolator";
OrientationInterpolator2012.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2012.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[68] = OrientationInterpolator2012;

OrientationInterpolator OrientationInterpolator2013 = createNode("OrientationInterpolator");
OrientationInterpolator2013.DEF = "Stop_r_shoulder_RotationInterpolator";
OrientationInterpolator2013.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2013.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[69] = OrientationInterpolator2013;

OrientationInterpolator OrientationInterpolator2014 = createNode("OrientationInterpolator");
OrientationInterpolator2014.DEF = "Stop_r_elbow_RotationInterpolator";
OrientationInterpolator2014.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2014.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[70] = OrientationInterpolator2014;

OrientationInterpolator OrientationInterpolator2015 = createNode("OrientationInterpolator");
OrientationInterpolator2015.DEF = "Stop_r_wrist_RotationInterpolator";
OrientationInterpolator2015.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2015.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[71] = OrientationInterpolator2015;

OrientationInterpolator OrientationInterpolator2016 = createNode("OrientationInterpolator");
OrientationInterpolator2016.DEF = "Stop_r_thumb1_RotationInterpolator";
OrientationInterpolator2016.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2016.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[72] = OrientationInterpolator2016;

OrientationInterpolator OrientationInterpolator2017 = createNode("OrientationInterpolator");
OrientationInterpolator2017.DEF = "Stop_r_thumb2_RotationInterpolator";
OrientationInterpolator2017.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2017.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[73] = OrientationInterpolator2017;

OrientationInterpolator OrientationInterpolator2018 = createNode("OrientationInterpolator");
OrientationInterpolator2018.DEF = "Stop_r_thumb3_RotationInterpolator";
OrientationInterpolator2018.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2018.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[74] = OrientationInterpolator2018;

OrientationInterpolator OrientationInterpolator2019 = createNode("OrientationInterpolator");
OrientationInterpolator2019.DEF = "Stop_r_index0_RotationInterpolator";
OrientationInterpolator2019.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2019.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[75] = OrientationInterpolator2019;

OrientationInterpolator OrientationInterpolator2020 = createNode("OrientationInterpolator");
OrientationInterpolator2020.DEF = "Stop_r_index1_RotationInterpolator";
OrientationInterpolator2020.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2020.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[76] = OrientationInterpolator2020;

OrientationInterpolator OrientationInterpolator2021 = createNode("OrientationInterpolator");
OrientationInterpolator2021.DEF = "Stop_r_index2_RotationInterpolator";
OrientationInterpolator2021.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2021.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[77] = OrientationInterpolator2021;

OrientationInterpolator OrientationInterpolator2022 = createNode("OrientationInterpolator");
OrientationInterpolator2022.DEF = "Stop_r_index3_RotationInterpolator";
OrientationInterpolator2022.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2022.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[78] = OrientationInterpolator2022;

OrientationInterpolator OrientationInterpolator2023 = createNode("OrientationInterpolator");
OrientationInterpolator2023.DEF = "Stop_r_middle0_RotationInterpolator";
OrientationInterpolator2023.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2023.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[79] = OrientationInterpolator2023;

OrientationInterpolator OrientationInterpolator2024 = createNode("OrientationInterpolator");
OrientationInterpolator2024.DEF = "Stop_r_middle1_RotationInterpolator";
OrientationInterpolator2024.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2024.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[80] = OrientationInterpolator2024;

OrientationInterpolator OrientationInterpolator2025 = createNode("OrientationInterpolator");
OrientationInterpolator2025.DEF = "Stop_r_middle2_RotationInterpolator";
OrientationInterpolator2025.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2025.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[81] = OrientationInterpolator2025;

OrientationInterpolator OrientationInterpolator2026 = createNode("OrientationInterpolator");
OrientationInterpolator2026.DEF = "Stop_r_middle3_RotationInterpolator";
OrientationInterpolator2026.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2026.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[82] = OrientationInterpolator2026;

OrientationInterpolator OrientationInterpolator2027 = createNode("OrientationInterpolator");
OrientationInterpolator2027.DEF = "Stop_r_ring0_RotationInterpolator";
OrientationInterpolator2027.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2027.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[83] = OrientationInterpolator2027;

OrientationInterpolator OrientationInterpolator2028 = createNode("OrientationInterpolator");
OrientationInterpolator2028.DEF = "Stop_r_ring1_RotationInterpolator";
OrientationInterpolator2028.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2028.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[84] = OrientationInterpolator2028;

OrientationInterpolator OrientationInterpolator2029 = createNode("OrientationInterpolator");
OrientationInterpolator2029.DEF = "Stop_r_ring2_RotationInterpolator";
OrientationInterpolator2029.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2029.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[85] = OrientationInterpolator2029;

OrientationInterpolator OrientationInterpolator2030 = createNode("OrientationInterpolator");
OrientationInterpolator2030.DEF = "Stop_r_ring3_RotationInterpolator";
OrientationInterpolator2030.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2030.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[86] = OrientationInterpolator2030;

OrientationInterpolator OrientationInterpolator2031 = createNode("OrientationInterpolator");
OrientationInterpolator2031.DEF = "Stop_r_pinky0_RotationInterpolator";
OrientationInterpolator2031.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2031.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[87] = OrientationInterpolator2031;

OrientationInterpolator OrientationInterpolator2032 = createNode("OrientationInterpolator");
OrientationInterpolator2032.DEF = "Stop_r_pinky1_RotationInterpolator";
OrientationInterpolator2032.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2032.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[88] = OrientationInterpolator2032;

OrientationInterpolator OrientationInterpolator2033 = createNode("OrientationInterpolator");
OrientationInterpolator2033.DEF = "Stop_r_pinky2_RotationInterpolator";
OrientationInterpolator2033.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2033.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[89] = OrientationInterpolator2033;

OrientationInterpolator OrientationInterpolator2034 = createNode("OrientationInterpolator");
OrientationInterpolator2034.DEF = "Stop_r_pinky3_RotationInterpolator";
OrientationInterpolator2034.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2034.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1943.children[90] = OrientationInterpolator2034;

ROUTE ROUTE2035 = createNode("ROUTE");
ROUTE2035.fromField = "fraction_changed";
ROUTE2035.fromNode = "StopTimer";
ROUTE2035.toField = "set_fraction";
ROUTE2035.toNode = "Stop_HumanoidRoot_TranslationInterpolator";
Group1943.children[91] = ROUTE2035;

ROUTE ROUTE2036 = createNode("ROUTE");
ROUTE2036.fromField = "fraction_changed";
ROUTE2036.fromNode = "StopTimer";
ROUTE2036.toField = "set_fraction";
ROUTE2036.toNode = "Stop_HumanoidRoot_RotationInterpolator";
Group1943.children[92] = ROUTE2036;

ROUTE ROUTE2037 = createNode("ROUTE");
ROUTE2037.fromField = "fraction_changed";
ROUTE2037.fromNode = "StopTimer";
ROUTE2037.toField = "set_fraction";
ROUTE2037.toNode = "Stop_sacroiliac_RotationInterpolator";
Group1943.children[93] = ROUTE2037;

ROUTE ROUTE2038 = createNode("ROUTE");
ROUTE2038.fromField = "fraction_changed";
ROUTE2038.fromNode = "StopTimer";
ROUTE2038.toField = "set_fraction";
ROUTE2038.toNode = "Stop_l_hip_RotationInterpolator";
Group1943.children[94] = ROUTE2038;

ROUTE ROUTE2039 = createNode("ROUTE");
ROUTE2039.fromField = "fraction_changed";
ROUTE2039.fromNode = "StopTimer";
ROUTE2039.toField = "set_fraction";
ROUTE2039.toNode = "Stop_l_knee_RotationInterpolator";
Group1943.children[95] = ROUTE2039;

ROUTE ROUTE2040 = createNode("ROUTE");
ROUTE2040.fromField = "fraction_changed";
ROUTE2040.fromNode = "StopTimer";
ROUTE2040.toField = "set_fraction";
ROUTE2040.toNode = "Stop_l_ankle_RotationInterpolator";
Group1943.children[96] = ROUTE2040;

ROUTE ROUTE2041 = createNode("ROUTE");
ROUTE2041.fromField = "fraction_changed";
ROUTE2041.fromNode = "StopTimer";
ROUTE2041.toField = "set_fraction";
ROUTE2041.toNode = "Stop_l_subtalar_RotationInterpolator";
Group1943.children[97] = ROUTE2041;

ROUTE ROUTE2042 = createNode("ROUTE");
ROUTE2042.fromField = "fraction_changed";
ROUTE2042.fromNode = "StopTimer";
ROUTE2042.toField = "set_fraction";
ROUTE2042.toNode = "Stop_l_midtarsal_RotationInterpolator";
Group1943.children[98] = ROUTE2042;

ROUTE ROUTE2043 = createNode("ROUTE");
ROUTE2043.fromField = "fraction_changed";
ROUTE2043.fromNode = "StopTimer";
ROUTE2043.toField = "set_fraction";
ROUTE2043.toNode = "Stop_l_metatarsal_RotationInterpolator";
Group1943.children[99] = ROUTE2043;

ROUTE ROUTE2044 = createNode("ROUTE");
ROUTE2044.fromField = "fraction_changed";
ROUTE2044.fromNode = "StopTimer";
ROUTE2044.toField = "set_fraction";
ROUTE2044.toNode = "Stop_r_hip_RotationInterpolator";
Group1943.children[100] = ROUTE2044;

ROUTE ROUTE2045 = createNode("ROUTE");
ROUTE2045.fromField = "fraction_changed";
ROUTE2045.fromNode = "StopTimer";
ROUTE2045.toField = "set_fraction";
ROUTE2045.toNode = "Stop_r_knee_RotationInterpolator";
Group1943.children[101] = ROUTE2045;

ROUTE ROUTE2046 = createNode("ROUTE");
ROUTE2046.fromField = "fraction_changed";
ROUTE2046.fromNode = "StopTimer";
ROUTE2046.toField = "set_fraction";
ROUTE2046.toNode = "Stop_r_ankle_RotationInterpolator";
Group1943.children[102] = ROUTE2046;

ROUTE ROUTE2047 = createNode("ROUTE");
ROUTE2047.fromField = "fraction_changed";
ROUTE2047.fromNode = "StopTimer";
ROUTE2047.toField = "set_fraction";
ROUTE2047.toNode = "Stop_r_subtalar_RotationInterpolator";
Group1943.children[103] = ROUTE2047;

ROUTE ROUTE2048 = createNode("ROUTE");
ROUTE2048.fromField = "fraction_changed";
ROUTE2048.fromNode = "StopTimer";
ROUTE2048.toField = "set_fraction";
ROUTE2048.toNode = "Stop_r_midtarsal_RotationInterpolator";
Group1943.children[104] = ROUTE2048;

ROUTE ROUTE2049 = createNode("ROUTE");
ROUTE2049.fromField = "fraction_changed";
ROUTE2049.fromNode = "StopTimer";
ROUTE2049.toField = "set_fraction";
ROUTE2049.toNode = "Stop_r_metatarsal_RotationInterpolator";
Group1943.children[105] = ROUTE2049;

ROUTE ROUTE2050 = createNode("ROUTE");
ROUTE2050.fromField = "fraction_changed";
ROUTE2050.fromNode = "StopTimer";
ROUTE2050.toField = "set_fraction";
ROUTE2050.toNode = "Stop_vl5_RotationInterpolator";
Group1943.children[106] = ROUTE2050;

ROUTE ROUTE2051 = createNode("ROUTE");
ROUTE2051.fromField = "fraction_changed";
ROUTE2051.fromNode = "StopTimer";
ROUTE2051.toField = "set_fraction";
ROUTE2051.toNode = "Stop_vl4_RotationInterpolator";
Group1943.children[107] = ROUTE2051;

ROUTE ROUTE2052 = createNode("ROUTE");
ROUTE2052.fromField = "fraction_changed";
ROUTE2052.fromNode = "StopTimer";
ROUTE2052.toField = "set_fraction";
ROUTE2052.toNode = "Stop_vl3_RotationInterpolator";
Group1943.children[108] = ROUTE2052;

ROUTE ROUTE2053 = createNode("ROUTE");
ROUTE2053.fromField = "fraction_changed";
ROUTE2053.fromNode = "StopTimer";
ROUTE2053.toField = "set_fraction";
ROUTE2053.toNode = "Stop_vl2_RotationInterpolator";
Group1943.children[109] = ROUTE2053;

ROUTE ROUTE2054 = createNode("ROUTE");
ROUTE2054.fromField = "fraction_changed";
ROUTE2054.fromNode = "StopTimer";
ROUTE2054.toField = "set_fraction";
ROUTE2054.toNode = "Stop_vl1_RotationInterpolator";
Group1943.children[110] = ROUTE2054;

ROUTE ROUTE2055 = createNode("ROUTE");
ROUTE2055.fromField = "fraction_changed";
ROUTE2055.fromNode = "StopTimer";
ROUTE2055.toField = "set_fraction";
ROUTE2055.toNode = "Stop_vt12_RotationInterpolator";
Group1943.children[111] = ROUTE2055;

ROUTE ROUTE2056 = createNode("ROUTE");
ROUTE2056.fromField = "fraction_changed";
ROUTE2056.fromNode = "StopTimer";
ROUTE2056.toField = "set_fraction";
ROUTE2056.toNode = "Stop_vt11_RotationInterpolator";
Group1943.children[112] = ROUTE2056;

ROUTE ROUTE2057 = createNode("ROUTE");
ROUTE2057.fromField = "fraction_changed";
ROUTE2057.fromNode = "StopTimer";
ROUTE2057.toField = "set_fraction";
ROUTE2057.toNode = "Stop_vt10_RotationInterpolator";
Group1943.children[113] = ROUTE2057;

ROUTE ROUTE2058 = createNode("ROUTE");
ROUTE2058.fromField = "fraction_changed";
ROUTE2058.fromNode = "StopTimer";
ROUTE2058.toField = "set_fraction";
ROUTE2058.toNode = "Stop_vt9_RotationInterpolator";
Group1943.children[114] = ROUTE2058;

ROUTE ROUTE2059 = createNode("ROUTE");
ROUTE2059.fromField = "fraction_changed";
ROUTE2059.fromNode = "StopTimer";
ROUTE2059.toField = "set_fraction";
ROUTE2059.toNode = "Stop_vt8_RotationInterpolator";
Group1943.children[115] = ROUTE2059;

ROUTE ROUTE2060 = createNode("ROUTE");
ROUTE2060.fromField = "fraction_changed";
ROUTE2060.fromNode = "StopTimer";
ROUTE2060.toField = "set_fraction";
ROUTE2060.toNode = "Stop_vt7_RotationInterpolator";
Group1943.children[116] = ROUTE2060;

ROUTE ROUTE2061 = createNode("ROUTE");
ROUTE2061.fromField = "fraction_changed";
ROUTE2061.fromNode = "StopTimer";
ROUTE2061.toField = "set_fraction";
ROUTE2061.toNode = "Stop_vt6_RotationInterpolator";
Group1943.children[117] = ROUTE2061;

ROUTE ROUTE2062 = createNode("ROUTE");
ROUTE2062.fromField = "fraction_changed";
ROUTE2062.fromNode = "StopTimer";
ROUTE2062.toField = "set_fraction";
ROUTE2062.toNode = "Stop_vt5_RotationInterpolator";
Group1943.children[118] = ROUTE2062;

ROUTE ROUTE2063 = createNode("ROUTE");
ROUTE2063.fromField = "fraction_changed";
ROUTE2063.fromNode = "StopTimer";
ROUTE2063.toField = "set_fraction";
ROUTE2063.toNode = "Stop_vt4_RotationInterpolator";
Group1943.children[119] = ROUTE2063;

ROUTE ROUTE2064 = createNode("ROUTE");
ROUTE2064.fromField = "fraction_changed";
ROUTE2064.fromNode = "StopTimer";
ROUTE2064.toField = "set_fraction";
ROUTE2064.toNode = "Stop_vt3_RotationInterpolator";
Group1943.children[120] = ROUTE2064;

ROUTE ROUTE2065 = createNode("ROUTE");
ROUTE2065.fromField = "fraction_changed";
ROUTE2065.fromNode = "StopTimer";
ROUTE2065.toField = "set_fraction";
ROUTE2065.toNode = "Stop_vt2_RotationInterpolator";
Group1943.children[121] = ROUTE2065;

ROUTE ROUTE2066 = createNode("ROUTE");
ROUTE2066.fromField = "fraction_changed";
ROUTE2066.fromNode = "StopTimer";
ROUTE2066.toField = "set_fraction";
ROUTE2066.toNode = "Stop_vt1_RotationInterpolator";
Group1943.children[122] = ROUTE2066;

ROUTE ROUTE2067 = createNode("ROUTE");
ROUTE2067.fromField = "fraction_changed";
ROUTE2067.fromNode = "StopTimer";
ROUTE2067.toField = "set_fraction";
ROUTE2067.toNode = "Stop_vc7_RotationInterpolator";
Group1943.children[123] = ROUTE2067;

ROUTE ROUTE2068 = createNode("ROUTE");
ROUTE2068.fromField = "fraction_changed";
ROUTE2068.fromNode = "StopTimer";
ROUTE2068.toField = "set_fraction";
ROUTE2068.toNode = "Stop_vc6_RotationInterpolator";
Group1943.children[124] = ROUTE2068;

ROUTE ROUTE2069 = createNode("ROUTE");
ROUTE2069.fromField = "fraction_changed";
ROUTE2069.fromNode = "StopTimer";
ROUTE2069.toField = "set_fraction";
ROUTE2069.toNode = "Stop_vc5_RotationInterpolator";
Group1943.children[125] = ROUTE2069;

ROUTE ROUTE2070 = createNode("ROUTE");
ROUTE2070.fromField = "fraction_changed";
ROUTE2070.fromNode = "StopTimer";
ROUTE2070.toField = "set_fraction";
ROUTE2070.toNode = "Stop_vc4_RotationInterpolator";
Group1943.children[126] = ROUTE2070;

ROUTE ROUTE2071 = createNode("ROUTE");
ROUTE2071.fromField = "fraction_changed";
ROUTE2071.fromNode = "StopTimer";
ROUTE2071.toField = "set_fraction";
ROUTE2071.toNode = "Stop_vc3_RotationInterpolator";
Group1943.children[127] = ROUTE2071;

ROUTE ROUTE2072 = createNode("ROUTE");
ROUTE2072.fromField = "fraction_changed";
ROUTE2072.fromNode = "StopTimer";
ROUTE2072.toField = "set_fraction";
ROUTE2072.toNode = "Stop_vc2_RotationInterpolator";
Group1943.children[128] = ROUTE2072;

ROUTE ROUTE2073 = createNode("ROUTE");
ROUTE2073.fromField = "fraction_changed";
ROUTE2073.fromNode = "StopTimer";
ROUTE2073.toField = "set_fraction";
ROUTE2073.toNode = "Stop_vc1_RotationInterpolator";
Group1943.children[129] = ROUTE2073;

ROUTE ROUTE2074 = createNode("ROUTE");
ROUTE2074.fromField = "fraction_changed";
ROUTE2074.fromNode = "StopTimer";
ROUTE2074.toField = "set_fraction";
ROUTE2074.toNode = "Stop_skullbase_RotationInterpolator";
Group1943.children[130] = ROUTE2074;

ROUTE ROUTE2075 = createNode("ROUTE");
ROUTE2075.fromField = "fraction_changed";
ROUTE2075.fromNode = "StopTimer";
ROUTE2075.toField = "set_fraction";
ROUTE2075.toNode = "Stop_l_eyeball_joint_RotationInterpolator";
Group1943.children[131] = ROUTE2075;

ROUTE ROUTE2076 = createNode("ROUTE");
ROUTE2076.fromField = "fraction_changed";
ROUTE2076.fromNode = "StopTimer";
ROUTE2076.toField = "set_fraction";
ROUTE2076.toNode = "Stop_r_eyeball_joint_RotationInterpolator";
Group1943.children[132] = ROUTE2076;

ROUTE ROUTE2077 = createNode("ROUTE");
ROUTE2077.fromField = "fraction_changed";
ROUTE2077.fromNode = "StopTimer";
ROUTE2077.toField = "set_fraction";
ROUTE2077.toNode = "Stop_l_sternoclavicular_RotationInterpolator";
Group1943.children[133] = ROUTE2077;

ROUTE ROUTE2078 = createNode("ROUTE");
ROUTE2078.fromField = "fraction_changed";
ROUTE2078.fromNode = "StopTimer";
ROUTE2078.toField = "set_fraction";
ROUTE2078.toNode = "Stop_l_acromioclavicular_RotationInterpolator";
Group1943.children[134] = ROUTE2078;

ROUTE ROUTE2079 = createNode("ROUTE");
ROUTE2079.fromField = "fraction_changed";
ROUTE2079.fromNode = "StopTimer";
ROUTE2079.toField = "set_fraction";
ROUTE2079.toNode = "Stop_l_shoulder_RotationInterpolator";
Group1943.children[135] = ROUTE2079;

ROUTE ROUTE2080 = createNode("ROUTE");
ROUTE2080.fromField = "fraction_changed";
ROUTE2080.fromNode = "StopTimer";
ROUTE2080.toField = "set_fraction";
ROUTE2080.toNode = "Stop_l_elbow_RotationInterpolator";
Group1943.children[136] = ROUTE2080;

ROUTE ROUTE2081 = createNode("ROUTE");
ROUTE2081.fromField = "fraction_changed";
ROUTE2081.fromNode = "StopTimer";
ROUTE2081.toField = "set_fraction";
ROUTE2081.toNode = "Stop_l_wrist_RotationInterpolator";
Group1943.children[137] = ROUTE2081;

ROUTE ROUTE2082 = createNode("ROUTE");
ROUTE2082.fromField = "fraction_changed";
ROUTE2082.fromNode = "StopTimer";
ROUTE2082.toField = "set_fraction";
ROUTE2082.toNode = "Stop_l_thumb1_RotationInterpolator";
Group1943.children[138] = ROUTE2082;

ROUTE ROUTE2083 = createNode("ROUTE");
ROUTE2083.fromField = "fraction_changed";
ROUTE2083.fromNode = "StopTimer";
ROUTE2083.toField = "set_fraction";
ROUTE2083.toNode = "Stop_l_thumb2_RotationInterpolator";
Group1943.children[139] = ROUTE2083;

ROUTE ROUTE2084 = createNode("ROUTE");
ROUTE2084.fromField = "fraction_changed";
ROUTE2084.fromNode = "StopTimer";
ROUTE2084.toField = "set_fraction";
ROUTE2084.toNode = "Stop_l_thumb3_RotationInterpolator";
Group1943.children[140] = ROUTE2084;

ROUTE ROUTE2085 = createNode("ROUTE");
ROUTE2085.fromField = "fraction_changed";
ROUTE2085.fromNode = "StopTimer";
ROUTE2085.toField = "set_fraction";
ROUTE2085.toNode = "Stop_l_index0_RotationInterpolator";
Group1943.children[141] = ROUTE2085;

ROUTE ROUTE2086 = createNode("ROUTE");
ROUTE2086.fromField = "fraction_changed";
ROUTE2086.fromNode = "StopTimer";
ROUTE2086.toField = "set_fraction";
ROUTE2086.toNode = "Stop_l_index1_RotationInterpolator";
Group1943.children[142] = ROUTE2086;

ROUTE ROUTE2087 = createNode("ROUTE");
ROUTE2087.fromField = "fraction_changed";
ROUTE2087.fromNode = "StopTimer";
ROUTE2087.toField = "set_fraction";
ROUTE2087.toNode = "Stop_l_index2_RotationInterpolator";
Group1943.children[143] = ROUTE2087;

ROUTE ROUTE2088 = createNode("ROUTE");
ROUTE2088.fromField = "fraction_changed";
ROUTE2088.fromNode = "StopTimer";
ROUTE2088.toField = "set_fraction";
ROUTE2088.toNode = "Stop_l_index3_RotationInterpolator";
Group1943.children[144] = ROUTE2088;

ROUTE ROUTE2089 = createNode("ROUTE");
ROUTE2089.fromField = "fraction_changed";
ROUTE2089.fromNode = "StopTimer";
ROUTE2089.toField = "set_fraction";
ROUTE2089.toNode = "Stop_l_middle0_RotationInterpolator";
Group1943.children[145] = ROUTE2089;

ROUTE ROUTE2090 = createNode("ROUTE");
ROUTE2090.fromField = "fraction_changed";
ROUTE2090.fromNode = "StopTimer";
ROUTE2090.toField = "set_fraction";
ROUTE2090.toNode = "Stop_l_middle1_RotationInterpolator";
Group1943.children[146] = ROUTE2090;

ROUTE ROUTE2091 = createNode("ROUTE");
ROUTE2091.fromField = "fraction_changed";
ROUTE2091.fromNode = "StopTimer";
ROUTE2091.toField = "set_fraction";
ROUTE2091.toNode = "Stop_l_middle2_RotationInterpolator";
Group1943.children[147] = ROUTE2091;

ROUTE ROUTE2092 = createNode("ROUTE");
ROUTE2092.fromField = "fraction_changed";
ROUTE2092.fromNode = "StopTimer";
ROUTE2092.toField = "set_fraction";
ROUTE2092.toNode = "Stop_l_middle3_RotationInterpolator";
Group1943.children[148] = ROUTE2092;

ROUTE ROUTE2093 = createNode("ROUTE");
ROUTE2093.fromField = "fraction_changed";
ROUTE2093.fromNode = "StopTimer";
ROUTE2093.toField = "set_fraction";
ROUTE2093.toNode = "Stop_l_ring0_RotationInterpolator";
Group1943.children[149] = ROUTE2093;

ROUTE ROUTE2094 = createNode("ROUTE");
ROUTE2094.fromField = "fraction_changed";
ROUTE2094.fromNode = "StopTimer";
ROUTE2094.toField = "set_fraction";
ROUTE2094.toNode = "Stop_l_ring1_RotationInterpolator";
Group1943.children[150] = ROUTE2094;

ROUTE ROUTE2095 = createNode("ROUTE");
ROUTE2095.fromField = "fraction_changed";
ROUTE2095.fromNode = "StopTimer";
ROUTE2095.toField = "set_fraction";
ROUTE2095.toNode = "Stop_l_ring2_RotationInterpolator";
Group1943.children[151] = ROUTE2095;

ROUTE ROUTE2096 = createNode("ROUTE");
ROUTE2096.fromField = "fraction_changed";
ROUTE2096.fromNode = "StopTimer";
ROUTE2096.toField = "set_fraction";
ROUTE2096.toNode = "Stop_l_ring3_RotationInterpolator";
Group1943.children[152] = ROUTE2096;

ROUTE ROUTE2097 = createNode("ROUTE");
ROUTE2097.fromField = "fraction_changed";
ROUTE2097.fromNode = "StopTimer";
ROUTE2097.toField = "set_fraction";
ROUTE2097.toNode = "Stop_l_pinky0_RotationInterpolator";
Group1943.children[153] = ROUTE2097;

ROUTE ROUTE2098 = createNode("ROUTE");
ROUTE2098.fromField = "fraction_changed";
ROUTE2098.fromNode = "StopTimer";
ROUTE2098.toField = "set_fraction";
ROUTE2098.toNode = "Stop_l_pinky1_RotationInterpolator";
Group1943.children[154] = ROUTE2098;

ROUTE ROUTE2099 = createNode("ROUTE");
ROUTE2099.fromField = "fraction_changed";
ROUTE2099.fromNode = "StopTimer";
ROUTE2099.toField = "set_fraction";
ROUTE2099.toNode = "Stop_l_pinky2_RotationInterpolator";
Group1943.children[155] = ROUTE2099;

ROUTE ROUTE2100 = createNode("ROUTE");
ROUTE2100.fromField = "fraction_changed";
ROUTE2100.fromNode = "StopTimer";
ROUTE2100.toField = "set_fraction";
ROUTE2100.toNode = "Stop_l_pinky3_RotationInterpolator";
Group1943.children[156] = ROUTE2100;

ROUTE ROUTE2101 = createNode("ROUTE");
ROUTE2101.fromField = "fraction_changed";
ROUTE2101.fromNode = "StopTimer";
ROUTE2101.toField = "set_fraction";
ROUTE2101.toNode = "Stop_r_sternoclavicular_RotationInterpolator";
Group1943.children[157] = ROUTE2101;

ROUTE ROUTE2102 = createNode("ROUTE");
ROUTE2102.fromField = "fraction_changed";
ROUTE2102.fromNode = "StopTimer";
ROUTE2102.toField = "set_fraction";
ROUTE2102.toNode = "Stop_r_acromioclavicular_RotationInterpolator";
Group1943.children[158] = ROUTE2102;

ROUTE ROUTE2103 = createNode("ROUTE");
ROUTE2103.fromField = "fraction_changed";
ROUTE2103.fromNode = "StopTimer";
ROUTE2103.toField = "set_fraction";
ROUTE2103.toNode = "Stop_r_shoulder_RotationInterpolator";
Group1943.children[159] = ROUTE2103;

ROUTE ROUTE2104 = createNode("ROUTE");
ROUTE2104.fromField = "fraction_changed";
ROUTE2104.fromNode = "StopTimer";
ROUTE2104.toField = "set_fraction";
ROUTE2104.toNode = "Stop_r_elbow_RotationInterpolator";
Group1943.children[160] = ROUTE2104;

ROUTE ROUTE2105 = createNode("ROUTE");
ROUTE2105.fromField = "fraction_changed";
ROUTE2105.fromNode = "StopTimer";
ROUTE2105.toField = "set_fraction";
ROUTE2105.toNode = "Stop_r_wrist_RotationInterpolator";
Group1943.children[161] = ROUTE2105;

ROUTE ROUTE2106 = createNode("ROUTE");
ROUTE2106.fromField = "fraction_changed";
ROUTE2106.fromNode = "StopTimer";
ROUTE2106.toField = "set_fraction";
ROUTE2106.toNode = "Stop_r_thumb1_RotationInterpolator";
Group1943.children[162] = ROUTE2106;

ROUTE ROUTE2107 = createNode("ROUTE");
ROUTE2107.fromField = "fraction_changed";
ROUTE2107.fromNode = "StopTimer";
ROUTE2107.toField = "set_fraction";
ROUTE2107.toNode = "Stop_r_thumb2_RotationInterpolator";
Group1943.children[163] = ROUTE2107;

ROUTE ROUTE2108 = createNode("ROUTE");
ROUTE2108.fromField = "fraction_changed";
ROUTE2108.fromNode = "StopTimer";
ROUTE2108.toField = "set_fraction";
ROUTE2108.toNode = "Stop_r_thumb3_RotationInterpolator";
Group1943.children[164] = ROUTE2108;

ROUTE ROUTE2109 = createNode("ROUTE");
ROUTE2109.fromField = "fraction_changed";
ROUTE2109.fromNode = "StopTimer";
ROUTE2109.toField = "set_fraction";
ROUTE2109.toNode = "Stop_r_index0_RotationInterpolator";
Group1943.children[165] = ROUTE2109;

ROUTE ROUTE2110 = createNode("ROUTE");
ROUTE2110.fromField = "fraction_changed";
ROUTE2110.fromNode = "StopTimer";
ROUTE2110.toField = "set_fraction";
ROUTE2110.toNode = "Stop_r_index1_RotationInterpolator";
Group1943.children[166] = ROUTE2110;

ROUTE ROUTE2111 = createNode("ROUTE");
ROUTE2111.fromField = "fraction_changed";
ROUTE2111.fromNode = "StopTimer";
ROUTE2111.toField = "set_fraction";
ROUTE2111.toNode = "Stop_r_index2_RotationInterpolator";
Group1943.children[167] = ROUTE2111;

ROUTE ROUTE2112 = createNode("ROUTE");
ROUTE2112.fromField = "fraction_changed";
ROUTE2112.fromNode = "StopTimer";
ROUTE2112.toField = "set_fraction";
ROUTE2112.toNode = "Stop_r_index3_RotationInterpolator";
Group1943.children[168] = ROUTE2112;

ROUTE ROUTE2113 = createNode("ROUTE");
ROUTE2113.fromField = "fraction_changed";
ROUTE2113.fromNode = "StopTimer";
ROUTE2113.toField = "set_fraction";
ROUTE2113.toNode = "Stop_r_middle0_RotationInterpolator";
Group1943.children[169] = ROUTE2113;

ROUTE ROUTE2114 = createNode("ROUTE");
ROUTE2114.fromField = "fraction_changed";
ROUTE2114.fromNode = "StopTimer";
ROUTE2114.toField = "set_fraction";
ROUTE2114.toNode = "Stop_r_middle1_RotationInterpolator";
Group1943.children[170] = ROUTE2114;

ROUTE ROUTE2115 = createNode("ROUTE");
ROUTE2115.fromField = "fraction_changed";
ROUTE2115.fromNode = "StopTimer";
ROUTE2115.toField = "set_fraction";
ROUTE2115.toNode = "Stop_r_middle2_RotationInterpolator";
Group1943.children[171] = ROUTE2115;

ROUTE ROUTE2116 = createNode("ROUTE");
ROUTE2116.fromField = "fraction_changed";
ROUTE2116.fromNode = "StopTimer";
ROUTE2116.toField = "set_fraction";
ROUTE2116.toNode = "Stop_r_middle3_RotationInterpolator";
Group1943.children[172] = ROUTE2116;

ROUTE ROUTE2117 = createNode("ROUTE");
ROUTE2117.fromField = "fraction_changed";
ROUTE2117.fromNode = "StopTimer";
ROUTE2117.toField = "set_fraction";
ROUTE2117.toNode = "Stop_r_ring0_RotationInterpolator";
Group1943.children[173] = ROUTE2117;

ROUTE ROUTE2118 = createNode("ROUTE");
ROUTE2118.fromField = "fraction_changed";
ROUTE2118.fromNode = "StopTimer";
ROUTE2118.toField = "set_fraction";
ROUTE2118.toNode = "Stop_r_ring1_RotationInterpolator";
Group1943.children[174] = ROUTE2118;

ROUTE ROUTE2119 = createNode("ROUTE");
ROUTE2119.fromField = "fraction_changed";
ROUTE2119.fromNode = "StopTimer";
ROUTE2119.toField = "set_fraction";
ROUTE2119.toNode = "Stop_r_ring2_RotationInterpolator";
Group1943.children[175] = ROUTE2119;

ROUTE ROUTE2120 = createNode("ROUTE");
ROUTE2120.fromField = "fraction_changed";
ROUTE2120.fromNode = "StopTimer";
ROUTE2120.toField = "set_fraction";
ROUTE2120.toNode = "Stop_r_ring3_RotationInterpolator";
Group1943.children[176] = ROUTE2120;

ROUTE ROUTE2121 = createNode("ROUTE");
ROUTE2121.fromField = "fraction_changed";
ROUTE2121.fromNode = "StopTimer";
ROUTE2121.toField = "set_fraction";
ROUTE2121.toNode = "Stop_r_pinky0_RotationInterpolator";
Group1943.children[177] = ROUTE2121;

ROUTE ROUTE2122 = createNode("ROUTE");
ROUTE2122.fromField = "fraction_changed";
ROUTE2122.fromNode = "StopTimer";
ROUTE2122.toField = "set_fraction";
ROUTE2122.toNode = "Stop_r_pinky1_RotationInterpolator";
Group1943.children[178] = ROUTE2122;

ROUTE ROUTE2123 = createNode("ROUTE");
ROUTE2123.fromField = "fraction_changed";
ROUTE2123.fromNode = "StopTimer";
ROUTE2123.toField = "set_fraction";
ROUTE2123.toNode = "Stop_r_pinky2_RotationInterpolator";
Group1943.children[179] = ROUTE2123;

ROUTE ROUTE2124 = createNode("ROUTE");
ROUTE2124.fromField = "fraction_changed";
ROUTE2124.fromNode = "StopTimer";
ROUTE2124.toField = "set_fraction";
ROUTE2124.toNode = "Stop_r_pinky3_RotationInterpolator";
Group1943.children[180] = ROUTE2124;

ROUTE ROUTE2125 = createNode("ROUTE");
ROUTE2125.fromField = "value_changed";
ROUTE2125.fromNode = "Stop_HumanoidRoot_TranslationInterpolator";
ROUTE2125.toField = "translation";
ROUTE2125.toNode = "hanim_humanoid_root";
Group1943.children[181] = ROUTE2125;

ROUTE ROUTE2126 = createNode("ROUTE");
ROUTE2126.fromField = "value_changed";
ROUTE2126.fromNode = "Stop_HumanoidRoot_RotationInterpolator";
ROUTE2126.toField = "rotation";
ROUTE2126.toNode = "hanim_humanoid_root";
Group1943.children[182] = ROUTE2126;

ROUTE ROUTE2127 = createNode("ROUTE");
ROUTE2127.fromField = "value_changed";
ROUTE2127.fromNode = "Stop_sacroiliac_RotationInterpolator";
ROUTE2127.toField = "rotation";
ROUTE2127.toNode = "hanim_sacroiliac";
Group1943.children[183] = ROUTE2127;

ROUTE ROUTE2128 = createNode("ROUTE");
ROUTE2128.fromField = "value_changed";
ROUTE2128.fromNode = "Stop_l_hip_RotationInterpolator";
ROUTE2128.toField = "rotation";
ROUTE2128.toNode = "hanim_l_hip";
Group1943.children[184] = ROUTE2128;

ROUTE ROUTE2129 = createNode("ROUTE");
ROUTE2129.fromField = "value_changed";
ROUTE2129.fromNode = "Stop_l_knee_RotationInterpolator";
ROUTE2129.toField = "rotation";
ROUTE2129.toNode = "hanim_l_knee";
Group1943.children[185] = ROUTE2129;

ROUTE ROUTE2130 = createNode("ROUTE");
ROUTE2130.fromField = "value_changed";
ROUTE2130.fromNode = "Stop_l_ankle_RotationInterpolator";
ROUTE2130.toField = "rotation";
ROUTE2130.toNode = "hanim_l_ankle";
Group1943.children[186] = ROUTE2130;

ROUTE ROUTE2131 = createNode("ROUTE");
ROUTE2131.fromField = "value_changed";
ROUTE2131.fromNode = "Stop_l_subtalar_RotationInterpolator";
ROUTE2131.toField = "rotation";
ROUTE2131.toNode = "hanim_l_subtalar";
Group1943.children[187] = ROUTE2131;

ROUTE ROUTE2132 = createNode("ROUTE");
ROUTE2132.fromField = "value_changed";
ROUTE2132.fromNode = "Stop_l_midtarsal_RotationInterpolator";
ROUTE2132.toField = "rotation";
ROUTE2132.toNode = "hanim_l_midtarsal";
Group1943.children[188] = ROUTE2132;

ROUTE ROUTE2133 = createNode("ROUTE");
ROUTE2133.fromField = "value_changed";
ROUTE2133.fromNode = "Stop_l_metatarsal_RotationInterpolator";
ROUTE2133.toField = "rotation";
ROUTE2133.toNode = "hanim_l_metatarsal";
Group1943.children[189] = ROUTE2133;

ROUTE ROUTE2134 = createNode("ROUTE");
ROUTE2134.fromField = "value_changed";
ROUTE2134.fromNode = "Stop_r_hip_RotationInterpolator";
ROUTE2134.toField = "rotation";
ROUTE2134.toNode = "hanim_r_hip";
Group1943.children[190] = ROUTE2134;

ROUTE ROUTE2135 = createNode("ROUTE");
ROUTE2135.fromField = "value_changed";
ROUTE2135.fromNode = "Stop_r_knee_RotationInterpolator";
ROUTE2135.toField = "rotation";
ROUTE2135.toNode = "hanim_r_knee";
Group1943.children[191] = ROUTE2135;

ROUTE ROUTE2136 = createNode("ROUTE");
ROUTE2136.fromField = "value_changed";
ROUTE2136.fromNode = "Stop_r_ankle_RotationInterpolator";
ROUTE2136.toField = "rotation";
ROUTE2136.toNode = "hanim_r_ankle";
Group1943.children[192] = ROUTE2136;

ROUTE ROUTE2137 = createNode("ROUTE");
ROUTE2137.fromField = "value_changed";
ROUTE2137.fromNode = "Stop_r_subtalar_RotationInterpolator";
ROUTE2137.toField = "rotation";
ROUTE2137.toNode = "hanim_r_subtalar";
Group1943.children[193] = ROUTE2137;

ROUTE ROUTE2138 = createNode("ROUTE");
ROUTE2138.fromField = "value_changed";
ROUTE2138.fromNode = "Stop_r_midtarsal_RotationInterpolator";
ROUTE2138.toField = "rotation";
ROUTE2138.toNode = "hanim_r_midtarsal";
Group1943.children[194] = ROUTE2138;

ROUTE ROUTE2139 = createNode("ROUTE");
ROUTE2139.fromField = "value_changed";
ROUTE2139.fromNode = "Stop_r_metatarsal_RotationInterpolator";
ROUTE2139.toField = "rotation";
ROUTE2139.toNode = "hanim_r_metatarsal";
Group1943.children[195] = ROUTE2139;

ROUTE ROUTE2140 = createNode("ROUTE");
ROUTE2140.fromField = "value_changed";
ROUTE2140.fromNode = "Stop_vl5_RotationInterpolator";
ROUTE2140.toField = "rotation";
ROUTE2140.toNode = "hanim_vl5";
Group1943.children[196] = ROUTE2140;

ROUTE ROUTE2141 = createNode("ROUTE");
ROUTE2141.fromField = "value_changed";
ROUTE2141.fromNode = "Stop_vl4_RotationInterpolator";
ROUTE2141.toField = "rotation";
ROUTE2141.toNode = "hanim_vl4";
Group1943.children[197] = ROUTE2141;

ROUTE ROUTE2142 = createNode("ROUTE");
ROUTE2142.fromField = "value_changed";
ROUTE2142.fromNode = "Stop_vl3_RotationInterpolator";
ROUTE2142.toField = "rotation";
ROUTE2142.toNode = "hanim_vl3";
Group1943.children[198] = ROUTE2142;

ROUTE ROUTE2143 = createNode("ROUTE");
ROUTE2143.fromField = "value_changed";
ROUTE2143.fromNode = "Stop_vl2_RotationInterpolator";
ROUTE2143.toField = "rotation";
ROUTE2143.toNode = "hanim_vl2";
Group1943.children[199] = ROUTE2143;

ROUTE ROUTE2144 = createNode("ROUTE");
ROUTE2144.fromField = "value_changed";
ROUTE2144.fromNode = "Stop_vl1_RotationInterpolator";
ROUTE2144.toField = "rotation";
ROUTE2144.toNode = "hanim_vl1";
Group1943.children[200] = ROUTE2144;

ROUTE ROUTE2145 = createNode("ROUTE");
ROUTE2145.fromField = "value_changed";
ROUTE2145.fromNode = "Stop_vt12_RotationInterpolator";
ROUTE2145.toField = "rotation";
ROUTE2145.toNode = "hanim_vt12";
Group1943.children[201] = ROUTE2145;

ROUTE ROUTE2146 = createNode("ROUTE");
ROUTE2146.fromField = "value_changed";
ROUTE2146.fromNode = "Stop_vt11_RotationInterpolator";
ROUTE2146.toField = "rotation";
ROUTE2146.toNode = "hanim_vt11";
Group1943.children[202] = ROUTE2146;

ROUTE ROUTE2147 = createNode("ROUTE");
ROUTE2147.fromField = "value_changed";
ROUTE2147.fromNode = "Stop_vt10_RotationInterpolator";
ROUTE2147.toField = "rotation";
ROUTE2147.toNode = "hanim_vt10";
Group1943.children[203] = ROUTE2147;

ROUTE ROUTE2148 = createNode("ROUTE");
ROUTE2148.fromField = "value_changed";
ROUTE2148.fromNode = "Stop_vt9_RotationInterpolator";
ROUTE2148.toField = "rotation";
ROUTE2148.toNode = "hanim_vt9";
Group1943.children[204] = ROUTE2148;

ROUTE ROUTE2149 = createNode("ROUTE");
ROUTE2149.fromField = "value_changed";
ROUTE2149.fromNode = "Stop_vt8_RotationInterpolator";
ROUTE2149.toField = "rotation";
ROUTE2149.toNode = "hanim_vt8";
Group1943.children[205] = ROUTE2149;

ROUTE ROUTE2150 = createNode("ROUTE");
ROUTE2150.fromField = "value_changed";
ROUTE2150.fromNode = "Stop_vt7_RotationInterpolator";
ROUTE2150.toField = "rotation";
ROUTE2150.toNode = "hanim_vt7";
Group1943.children[206] = ROUTE2150;

ROUTE ROUTE2151 = createNode("ROUTE");
ROUTE2151.fromField = "value_changed";
ROUTE2151.fromNode = "Stop_vt6_RotationInterpolator";
ROUTE2151.toField = "rotation";
ROUTE2151.toNode = "hanim_vt6";
Group1943.children[207] = ROUTE2151;

ROUTE ROUTE2152 = createNode("ROUTE");
ROUTE2152.fromField = "value_changed";
ROUTE2152.fromNode = "Stop_vt5_RotationInterpolator";
ROUTE2152.toField = "rotation";
ROUTE2152.toNode = "hanim_vt5";
Group1943.children[208] = ROUTE2152;

ROUTE ROUTE2153 = createNode("ROUTE");
ROUTE2153.fromField = "value_changed";
ROUTE2153.fromNode = "Stop_vt4_RotationInterpolator";
ROUTE2153.toField = "rotation";
ROUTE2153.toNode = "hanim_vt4";
Group1943.children[209] = ROUTE2153;

ROUTE ROUTE2154 = createNode("ROUTE");
ROUTE2154.fromField = "value_changed";
ROUTE2154.fromNode = "Stop_vt3_RotationInterpolator";
ROUTE2154.toField = "rotation";
ROUTE2154.toNode = "hanim_vt3";
Group1943.children[210] = ROUTE2154;

ROUTE ROUTE2155 = createNode("ROUTE");
ROUTE2155.fromField = "value_changed";
ROUTE2155.fromNode = "Stop_vt2_RotationInterpolator";
ROUTE2155.toField = "rotation";
ROUTE2155.toNode = "hanim_vt2";
Group1943.children[211] = ROUTE2155;

ROUTE ROUTE2156 = createNode("ROUTE");
ROUTE2156.fromField = "value_changed";
ROUTE2156.fromNode = "Stop_vt1_RotationInterpolator";
ROUTE2156.toField = "rotation";
ROUTE2156.toNode = "hanim_vt1";
Group1943.children[212] = ROUTE2156;

ROUTE ROUTE2157 = createNode("ROUTE");
ROUTE2157.fromField = "value_changed";
ROUTE2157.fromNode = "Stop_vc7_RotationInterpolator";
ROUTE2157.toField = "rotation";
ROUTE2157.toNode = "hanim_vc7";
Group1943.children[213] = ROUTE2157;

ROUTE ROUTE2158 = createNode("ROUTE");
ROUTE2158.fromField = "value_changed";
ROUTE2158.fromNode = "Stop_vc6_RotationInterpolator";
ROUTE2158.toField = "rotation";
ROUTE2158.toNode = "hanim_vc6";
Group1943.children[214] = ROUTE2158;

ROUTE ROUTE2159 = createNode("ROUTE");
ROUTE2159.fromField = "value_changed";
ROUTE2159.fromNode = "Stop_vc5_RotationInterpolator";
ROUTE2159.toField = "rotation";
ROUTE2159.toNode = "hanim_vc5";
Group1943.children[215] = ROUTE2159;

ROUTE ROUTE2160 = createNode("ROUTE");
ROUTE2160.fromField = "value_changed";
ROUTE2160.fromNode = "Stop_vc4_RotationInterpolator";
ROUTE2160.toField = "rotation";
ROUTE2160.toNode = "hanim_vc4";
Group1943.children[216] = ROUTE2160;

ROUTE ROUTE2161 = createNode("ROUTE");
ROUTE2161.fromField = "value_changed";
ROUTE2161.fromNode = "Stop_vc3_RotationInterpolator";
ROUTE2161.toField = "rotation";
ROUTE2161.toNode = "hanim_vc3";
Group1943.children[217] = ROUTE2161;

ROUTE ROUTE2162 = createNode("ROUTE");
ROUTE2162.fromField = "value_changed";
ROUTE2162.fromNode = "Stop_vc2_RotationInterpolator";
ROUTE2162.toField = "rotation";
ROUTE2162.toNode = "hanim_vc2";
Group1943.children[218] = ROUTE2162;

ROUTE ROUTE2163 = createNode("ROUTE");
ROUTE2163.fromField = "value_changed";
ROUTE2163.fromNode = "Stop_vc1_RotationInterpolator";
ROUTE2163.toField = "rotation";
ROUTE2163.toNode = "hanim_vc1";
Group1943.children[219] = ROUTE2163;

ROUTE ROUTE2164 = createNode("ROUTE");
ROUTE2164.fromField = "value_changed";
ROUTE2164.fromNode = "Stop_skullbase_RotationInterpolator";
ROUTE2164.toField = "rotation";
ROUTE2164.toNode = "hanim_skullbase";
Group1943.children[220] = ROUTE2164;

ROUTE ROUTE2165 = createNode("ROUTE");
ROUTE2165.fromField = "value_changed";
ROUTE2165.fromNode = "Stop_l_eyeball_joint_RotationInterpolator";
ROUTE2165.toField = "rotation";
ROUTE2165.toNode = "hanim_l_eyeball_joint";
Group1943.children[221] = ROUTE2165;

ROUTE ROUTE2166 = createNode("ROUTE");
ROUTE2166.fromField = "value_changed";
ROUTE2166.fromNode = "Stop_r_eyeball_joint_RotationInterpolator";
ROUTE2166.toField = "rotation";
ROUTE2166.toNode = "hanim_r_eyeball_joint";
Group1943.children[222] = ROUTE2166;

ROUTE ROUTE2167 = createNode("ROUTE");
ROUTE2167.fromField = "value_changed";
ROUTE2167.fromNode = "Stop_l_sternoclavicular_RotationInterpolator";
ROUTE2167.toField = "rotation";
ROUTE2167.toNode = "hanim_l_sternoclavicular";
Group1943.children[223] = ROUTE2167;

ROUTE ROUTE2168 = createNode("ROUTE");
ROUTE2168.fromField = "value_changed";
ROUTE2168.fromNode = "Stop_l_acromioclavicular_RotationInterpolator";
ROUTE2168.toField = "rotation";
ROUTE2168.toNode = "hanim_l_acromioclavicular";
Group1943.children[224] = ROUTE2168;

ROUTE ROUTE2169 = createNode("ROUTE");
ROUTE2169.fromField = "value_changed";
ROUTE2169.fromNode = "Stop_l_shoulder_RotationInterpolator";
ROUTE2169.toField = "rotation";
ROUTE2169.toNode = "hanim_l_shoulder";
Group1943.children[225] = ROUTE2169;

ROUTE ROUTE2170 = createNode("ROUTE");
ROUTE2170.fromField = "value_changed";
ROUTE2170.fromNode = "Stop_l_elbow_RotationInterpolator";
ROUTE2170.toField = "rotation";
ROUTE2170.toNode = "hanim_l_elbow";
Group1943.children[226] = ROUTE2170;

ROUTE ROUTE2171 = createNode("ROUTE");
ROUTE2171.fromField = "value_changed";
ROUTE2171.fromNode = "Stop_l_wrist_RotationInterpolator";
ROUTE2171.toField = "rotation";
ROUTE2171.toNode = "hanim_l_wrist";
Group1943.children[227] = ROUTE2171;

ROUTE ROUTE2172 = createNode("ROUTE");
ROUTE2172.fromField = "value_changed";
ROUTE2172.fromNode = "Stop_l_thumb1_RotationInterpolator";
ROUTE2172.toField = "rotation";
ROUTE2172.toNode = "hanim_l_thumb1";
Group1943.children[228] = ROUTE2172;

ROUTE ROUTE2173 = createNode("ROUTE");
ROUTE2173.fromField = "value_changed";
ROUTE2173.fromNode = "Stop_l_thumb2_RotationInterpolator";
ROUTE2173.toField = "rotation";
ROUTE2173.toNode = "hanim_l_thumb2";
Group1943.children[229] = ROUTE2173;

ROUTE ROUTE2174 = createNode("ROUTE");
ROUTE2174.fromField = "value_changed";
ROUTE2174.fromNode = "Stop_l_thumb3_RotationInterpolator";
ROUTE2174.toField = "rotation";
ROUTE2174.toNode = "hanim_l_thumb3";
Group1943.children[230] = ROUTE2174;

ROUTE ROUTE2175 = createNode("ROUTE");
ROUTE2175.fromField = "value_changed";
ROUTE2175.fromNode = "Stop_l_index0_RotationInterpolator";
ROUTE2175.toField = "rotation";
ROUTE2175.toNode = "hanim_l_index0";
Group1943.children[231] = ROUTE2175;

ROUTE ROUTE2176 = createNode("ROUTE");
ROUTE2176.fromField = "value_changed";
ROUTE2176.fromNode = "Stop_l_index1_RotationInterpolator";
ROUTE2176.toField = "rotation";
ROUTE2176.toNode = "hanim_l_index1";
Group1943.children[232] = ROUTE2176;

ROUTE ROUTE2177 = createNode("ROUTE");
ROUTE2177.fromField = "value_changed";
ROUTE2177.fromNode = "Stop_l_index2_RotationInterpolator";
ROUTE2177.toField = "rotation";
ROUTE2177.toNode = "hanim_l_index2";
Group1943.children[233] = ROUTE2177;

ROUTE ROUTE2178 = createNode("ROUTE");
ROUTE2178.fromField = "value_changed";
ROUTE2178.fromNode = "Stop_l_index3_RotationInterpolator";
ROUTE2178.toField = "rotation";
ROUTE2178.toNode = "hanim_l_index3";
Group1943.children[234] = ROUTE2178;

ROUTE ROUTE2179 = createNode("ROUTE");
ROUTE2179.fromField = "value_changed";
ROUTE2179.fromNode = "Stop_l_middle0_RotationInterpolator";
ROUTE2179.toField = "rotation";
ROUTE2179.toNode = "hanim_l_middle0";
Group1943.children[235] = ROUTE2179;

ROUTE ROUTE2180 = createNode("ROUTE");
ROUTE2180.fromField = "value_changed";
ROUTE2180.fromNode = "Stop_l_middle1_RotationInterpolator";
ROUTE2180.toField = "rotation";
ROUTE2180.toNode = "hanim_l_middle1";
Group1943.children[236] = ROUTE2180;

ROUTE ROUTE2181 = createNode("ROUTE");
ROUTE2181.fromField = "value_changed";
ROUTE2181.fromNode = "Stop_l_middle2_RotationInterpolator";
ROUTE2181.toField = "rotation";
ROUTE2181.toNode = "hanim_l_middle2";
Group1943.children[237] = ROUTE2181;

ROUTE ROUTE2182 = createNode("ROUTE");
ROUTE2182.fromField = "value_changed";
ROUTE2182.fromNode = "Stop_l_middle3_RotationInterpolator";
ROUTE2182.toField = "rotation";
ROUTE2182.toNode = "hanim_l_middle3";
Group1943.children[238] = ROUTE2182;

ROUTE ROUTE2183 = createNode("ROUTE");
ROUTE2183.fromField = "value_changed";
ROUTE2183.fromNode = "Stop_l_ring0_RotationInterpolator";
ROUTE2183.toField = "rotation";
ROUTE2183.toNode = "hanim_l_ring0";
Group1943.children[239] = ROUTE2183;

ROUTE ROUTE2184 = createNode("ROUTE");
ROUTE2184.fromField = "value_changed";
ROUTE2184.fromNode = "Stop_l_ring1_RotationInterpolator";
ROUTE2184.toField = "rotation";
ROUTE2184.toNode = "hanim_l_ring1";
Group1943.children[240] = ROUTE2184;

ROUTE ROUTE2185 = createNode("ROUTE");
ROUTE2185.fromField = "value_changed";
ROUTE2185.fromNode = "Stop_l_ring2_RotationInterpolator";
ROUTE2185.toField = "rotation";
ROUTE2185.toNode = "hanim_l_ring2";
Group1943.children[241] = ROUTE2185;

ROUTE ROUTE2186 = createNode("ROUTE");
ROUTE2186.fromField = "value_changed";
ROUTE2186.fromNode = "Stop_l_ring3_RotationInterpolator";
ROUTE2186.toField = "rotation";
ROUTE2186.toNode = "hanim_l_ring3";
Group1943.children[242] = ROUTE2186;

ROUTE ROUTE2187 = createNode("ROUTE");
ROUTE2187.fromField = "value_changed";
ROUTE2187.fromNode = "Stop_l_pinky0_RotationInterpolator";
ROUTE2187.toField = "rotation";
ROUTE2187.toNode = "hanim_l_pinky0";
Group1943.children[243] = ROUTE2187;

ROUTE ROUTE2188 = createNode("ROUTE");
ROUTE2188.fromField = "value_changed";
ROUTE2188.fromNode = "Stop_l_pinky1_RotationInterpolator";
ROUTE2188.toField = "rotation";
ROUTE2188.toNode = "hanim_l_pinky1";
Group1943.children[244] = ROUTE2188;

ROUTE ROUTE2189 = createNode("ROUTE");
ROUTE2189.fromField = "value_changed";
ROUTE2189.fromNode = "Stop_l_pinky2_RotationInterpolator";
ROUTE2189.toField = "rotation";
ROUTE2189.toNode = "hanim_l_pinky2";
Group1943.children[245] = ROUTE2189;

ROUTE ROUTE2190 = createNode("ROUTE");
ROUTE2190.fromField = "value_changed";
ROUTE2190.fromNode = "Stop_l_pinky3_RotationInterpolator";
ROUTE2190.toField = "rotation";
ROUTE2190.toNode = "hanim_l_pinky3";
Group1943.children[246] = ROUTE2190;

ROUTE ROUTE2191 = createNode("ROUTE");
ROUTE2191.fromField = "value_changed";
ROUTE2191.fromNode = "Stop_r_sternoclavicular_RotationInterpolator";
ROUTE2191.toField = "rotation";
ROUTE2191.toNode = "hanim_r_sternoclavicular";
Group1943.children[247] = ROUTE2191;

ROUTE ROUTE2192 = createNode("ROUTE");
ROUTE2192.fromField = "value_changed";
ROUTE2192.fromNode = "Stop_r_acromioclavicular_RotationInterpolator";
ROUTE2192.toField = "rotation";
ROUTE2192.toNode = "hanim_r_acromioclavicular";
Group1943.children[248] = ROUTE2192;

ROUTE ROUTE2193 = createNode("ROUTE");
ROUTE2193.fromField = "value_changed";
ROUTE2193.fromNode = "Stop_r_shoulder_RotationInterpolator";
ROUTE2193.toField = "rotation";
ROUTE2193.toNode = "hanim_r_shoulder";
Group1943.children[249] = ROUTE2193;

ROUTE ROUTE2194 = createNode("ROUTE");
ROUTE2194.fromField = "value_changed";
ROUTE2194.fromNode = "Stop_r_elbow_RotationInterpolator";
ROUTE2194.toField = "rotation";
ROUTE2194.toNode = "hanim_r_elbow";
Group1943.children[250] = ROUTE2194;

ROUTE ROUTE2195 = createNode("ROUTE");
ROUTE2195.fromField = "value_changed";
ROUTE2195.fromNode = "Stop_r_wrist_RotationInterpolator";
ROUTE2195.toField = "rotation";
ROUTE2195.toNode = "hanim_r_wrist";
Group1943.children[251] = ROUTE2195;

ROUTE ROUTE2196 = createNode("ROUTE");
ROUTE2196.fromField = "value_changed";
ROUTE2196.fromNode = "Stop_r_thumb1_RotationInterpolator";
ROUTE2196.toField = "rotation";
ROUTE2196.toNode = "hanim_r_thumb1";
Group1943.children[252] = ROUTE2196;

ROUTE ROUTE2197 = createNode("ROUTE");
ROUTE2197.fromField = "value_changed";
ROUTE2197.fromNode = "Stop_r_thumb2_RotationInterpolator";
ROUTE2197.toField = "rotation";
ROUTE2197.toNode = "hanim_r_thumb2";
Group1943.children[253] = ROUTE2197;

ROUTE ROUTE2198 = createNode("ROUTE");
ROUTE2198.fromField = "value_changed";
ROUTE2198.fromNode = "Stop_r_thumb3_RotationInterpolator";
ROUTE2198.toField = "rotation";
ROUTE2198.toNode = "hanim_r_thumb3";
Group1943.children[254] = ROUTE2198;

ROUTE ROUTE2199 = createNode("ROUTE");
ROUTE2199.fromField = "value_changed";
ROUTE2199.fromNode = "Stop_r_index0_RotationInterpolator";
ROUTE2199.toField = "rotation";
ROUTE2199.toNode = "hanim_r_index0";
Group1943.children[255] = ROUTE2199;

ROUTE ROUTE2200 = createNode("ROUTE");
ROUTE2200.fromField = "value_changed";
ROUTE2200.fromNode = "Stop_r_index1_RotationInterpolator";
ROUTE2200.toField = "rotation";
ROUTE2200.toNode = "hanim_r_index1";
Group1943.children[256] = ROUTE2200;

ROUTE ROUTE2201 = createNode("ROUTE");
ROUTE2201.fromField = "value_changed";
ROUTE2201.fromNode = "Stop_r_index2_RotationInterpolator";
ROUTE2201.toField = "rotation";
ROUTE2201.toNode = "hanim_r_index2";
Group1943.children[257] = ROUTE2201;

ROUTE ROUTE2202 = createNode("ROUTE");
ROUTE2202.fromField = "value_changed";
ROUTE2202.fromNode = "Stop_r_index3_RotationInterpolator";
ROUTE2202.toField = "rotation";
ROUTE2202.toNode = "hanim_r_index3";
Group1943.children[258] = ROUTE2202;

ROUTE ROUTE2203 = createNode("ROUTE");
ROUTE2203.fromField = "value_changed";
ROUTE2203.fromNode = "Stop_r_middle0_RotationInterpolator";
ROUTE2203.toField = "rotation";
ROUTE2203.toNode = "hanim_r_middle0";
Group1943.children[259] = ROUTE2203;

ROUTE ROUTE2204 = createNode("ROUTE");
ROUTE2204.fromField = "value_changed";
ROUTE2204.fromNode = "Stop_r_middle1_RotationInterpolator";
ROUTE2204.toField = "rotation";
ROUTE2204.toNode = "hanim_r_middle1";
Group1943.children[260] = ROUTE2204;

ROUTE ROUTE2205 = createNode("ROUTE");
ROUTE2205.fromField = "value_changed";
ROUTE2205.fromNode = "Stop_r_middle2_RotationInterpolator";
ROUTE2205.toField = "rotation";
ROUTE2205.toNode = "hanim_r_middle2";
Group1943.children[261] = ROUTE2205;

ROUTE ROUTE2206 = createNode("ROUTE");
ROUTE2206.fromField = "value_changed";
ROUTE2206.fromNode = "Stop_r_middle3_RotationInterpolator";
ROUTE2206.toField = "rotation";
ROUTE2206.toNode = "hanim_r_middle3";
Group1943.children[262] = ROUTE2206;

ROUTE ROUTE2207 = createNode("ROUTE");
ROUTE2207.fromField = "value_changed";
ROUTE2207.fromNode = "Stop_r_ring0_RotationInterpolator";
ROUTE2207.toField = "rotation";
ROUTE2207.toNode = "hanim_r_ring0";
Group1943.children[263] = ROUTE2207;

ROUTE ROUTE2208 = createNode("ROUTE");
ROUTE2208.fromField = "value_changed";
ROUTE2208.fromNode = "Stop_r_ring1_RotationInterpolator";
ROUTE2208.toField = "rotation";
ROUTE2208.toNode = "hanim_r_ring1";
Group1943.children[264] = ROUTE2208;

ROUTE ROUTE2209 = createNode("ROUTE");
ROUTE2209.fromField = "value_changed";
ROUTE2209.fromNode = "Stop_r_ring2_RotationInterpolator";
ROUTE2209.toField = "rotation";
ROUTE2209.toNode = "hanim_r_ring2";
Group1943.children[265] = ROUTE2209;

ROUTE ROUTE2210 = createNode("ROUTE");
ROUTE2210.fromField = "value_changed";
ROUTE2210.fromNode = "Stop_r_ring3_RotationInterpolator";
ROUTE2210.toField = "rotation";
ROUTE2210.toNode = "hanim_r_ring3";
Group1943.children[266] = ROUTE2210;

ROUTE ROUTE2211 = createNode("ROUTE");
ROUTE2211.fromField = "value_changed";
ROUTE2211.fromNode = "Stop_r_pinky0_RotationInterpolator";
ROUTE2211.toField = "rotation";
ROUTE2211.toNode = "hanim_r_pinky0";
Group1943.children[267] = ROUTE2211;

ROUTE ROUTE2212 = createNode("ROUTE");
ROUTE2212.fromField = "value_changed";
ROUTE2212.fromNode = "Stop_r_pinky1_RotationInterpolator";
ROUTE2212.toField = "rotation";
ROUTE2212.toNode = "hanim_r_pinky1";
Group1943.children[268] = ROUTE2212;

ROUTE ROUTE2213 = createNode("ROUTE");
ROUTE2213.fromField = "value_changed";
ROUTE2213.fromNode = "Stop_r_pinky2_RotationInterpolator";
ROUTE2213.toField = "rotation";
ROUTE2213.toNode = "hanim_r_pinky2";
Group1943.children[269] = ROUTE2213;

ROUTE ROUTE2214 = createNode("ROUTE");
ROUTE2214.fromField = "value_changed";
ROUTE2214.fromNode = "Stop_r_pinky3_RotationInterpolator";
ROUTE2214.toField = "rotation";
ROUTE2214.toNode = "hanim_r_pinky3";
Group1943.children[270] = ROUTE2214;

children[13] = Group1943;

Group Group2215 = createNode("Group");
Group2215.DEF = "StandAnimation";
TimeSensor TimeSensor2216 = createNode("TimeSensor");
TimeSensor2216.DEF = "StandTimer";
TimeSensor2216.cycleInterval = 5.73;
TimeSensor2216.loop = True;
Group2215.children = new MFNode();

Group2215.children[0] = TimeSensor2216;

OrientationInterpolator OrientationInterpolator2217 = createNode("OrientationInterpolator");
OrientationInterpolator2217.DEF = "Stand_r_metatarsal_PitchInterpolator";
OrientationInterpolator2217.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2217.keyValue = new MFRotation(new float[1,0,0,0,-1,0,0,0.015,1,0,0,0.17,-1,0,0,0.025,1,0,0,0.01,1,0,0,0]);
Group2215.children[1] = OrientationInterpolator2217;

OrientationInterpolator OrientationInterpolator2218 = createNode("OrientationInterpolator");
OrientationInterpolator2218.DEF = "Stand_r_ankle_RotationInterpolator";
OrientationInterpolator2218.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2218.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2215.children[2] = OrientationInterpolator2218;

OrientationInterpolator OrientationInterpolator2219 = createNode("OrientationInterpolator");
OrientationInterpolator2219.DEF = "Stand_r_knee_RotationInterpolator";
OrientationInterpolator2219.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2219.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2215.children[3] = OrientationInterpolator2219;

OrientationInterpolator OrientationInterpolator2220 = createNode("OrientationInterpolator");
OrientationInterpolator2220.DEF = "Stand_r_hip_RotationInterpolator";
OrientationInterpolator2220.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2220.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2215.children[4] = OrientationInterpolator2220;

OrientationInterpolator OrientationInterpolator2221 = createNode("OrientationInterpolator");
OrientationInterpolator2221.DEF = "Stand_l_ankle_RotationInterpolator";
OrientationInterpolator2221.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2221.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2215.children[5] = OrientationInterpolator2221;

OrientationInterpolator OrientationInterpolator2222 = createNode("OrientationInterpolator");
OrientationInterpolator2222.DEF = "Stand_l_knee_RotationInterpolator";
OrientationInterpolator2222.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2222.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2215.children[6] = OrientationInterpolator2222;

OrientationInterpolator OrientationInterpolator2223 = createNode("OrientationInterpolator");
OrientationInterpolator2223.DEF = "Stand_l_hip_RotationInterpolator";
OrientationInterpolator2223.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2223.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2215.children[7] = OrientationInterpolator2223;

OrientationInterpolator OrientationInterpolator2224 = createNode("OrientationInterpolator");
OrientationInterpolator2224.DEF = "Stand_r_wrist_RotationInterpolator";
OrientationInterpolator2224.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2224.keyValue = new MFRotation(new float[0,0,1,0,0,0,-1,0.25,0,0,1,0]);
Group2215.children[8] = OrientationInterpolator2224;

OrientationInterpolator OrientationInterpolator2225 = createNode("OrientationInterpolator");
OrientationInterpolator2225.DEF = "Stand_r_elbow_RotationInterpolator";
OrientationInterpolator2225.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2225.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2215.children[9] = OrientationInterpolator2225;

OrientationInterpolator OrientationInterpolator2226 = createNode("OrientationInterpolator");
OrientationInterpolator2226.DEF = "Stand_r_shoulder_RotationInterpolator";
OrientationInterpolator2226.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2226.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2215.children[10] = OrientationInterpolator2226;

OrientationInterpolator OrientationInterpolator2227 = createNode("OrientationInterpolator");
OrientationInterpolator2227.DEF = "Stand_l_wrist_RotationInterpolator";
OrientationInterpolator2227.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2227.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2215.children[11] = OrientationInterpolator2227;

OrientationInterpolator OrientationInterpolator2228 = createNode("OrientationInterpolator");
OrientationInterpolator2228.DEF = "Stand_l_elbow_RotationInterpolator";
OrientationInterpolator2228.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2228.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2215.children[12] = OrientationInterpolator2228;

OrientationInterpolator OrientationInterpolator2229 = createNode("OrientationInterpolator");
OrientationInterpolator2229.DEF = "Stand_l_shoulder_RotationInterpolator";
OrientationInterpolator2229.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2229.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2215.children[13] = OrientationInterpolator2229;

OrientationInterpolator OrientationInterpolator2230 = createNode("OrientationInterpolator");
OrientationInterpolator2230.DEF = "Stand_head_RotationInterpolator";
OrientationInterpolator2230.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2230.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2215.children[14] = OrientationInterpolator2230;

OrientationInterpolator OrientationInterpolator2231 = createNode("OrientationInterpolator");
OrientationInterpolator2231.DEF = "Stand_neck_RotationInterpolator";
OrientationInterpolator2231.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2231.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.5,0,0,1,0]);
Group2215.children[15] = OrientationInterpolator2231;

OrientationInterpolator OrientationInterpolator2232 = createNode("OrientationInterpolator");
OrientationInterpolator2232.DEF = "Stand_l_eyeball_RotationInterpolator";
OrientationInterpolator2232.key = new MFFloat(new float[0,0.4,0.7,1]);
OrientationInterpolator2232.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.5,1,0,0,0.45,0,0,1,0]);
Group2215.children[16] = OrientationInterpolator2232;

OrientationInterpolator OrientationInterpolator2233 = createNode("OrientationInterpolator");
OrientationInterpolator2233.DEF = "Stand_r_eyeball_RotationInterpolator";
OrientationInterpolator2233.key = new MFFloat(new float[0,0.4,0.7,1]);
OrientationInterpolator2233.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.5,1,0,0,0.45,0,0,1,0]);
Group2215.children[17] = OrientationInterpolator2233;

OrientationInterpolator OrientationInterpolator2234 = createNode("OrientationInterpolator");
OrientationInterpolator2234.DEF = "Stand_lower_body_RotationInterpolator";
OrientationInterpolator2234.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2234.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2215.children[18] = OrientationInterpolator2234;

OrientationInterpolator OrientationInterpolator2235 = createNode("OrientationInterpolator");
OrientationInterpolator2235.DEF = "Stand_upper_body_RotationInterpolator";
OrientationInterpolator2235.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2235.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2215.children[19] = OrientationInterpolator2235;

OrientationInterpolator OrientationInterpolator2236 = createNode("OrientationInterpolator");
OrientationInterpolator2236.DEF = "Stand_whole_body_RotationInterpolator";
OrientationInterpolator2236.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2236.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2215.children[20] = OrientationInterpolator2236;

PositionInterpolator PositionInterpolator2237 = createNode("PositionInterpolator");
PositionInterpolator2237.DEF = "Stand_whole_body_TranslationInterpolator";
PositionInterpolator2237.key = new MFFloat(new float[0,0.5,1]);
PositionInterpolator2237.keyValue = new MFVec3f(new float[0,0,0,0,0,0,0,0,0]);
Group2215.children[21] = PositionInterpolator2237;

OrientationInterpolator OrientationInterpolator2238 = createNode("OrientationInterpolator");
OrientationInterpolator2238.DEF = "Stand_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2238.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2238.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2215.children[22] = OrientationInterpolator2238;

OrientationInterpolator OrientationInterpolator2239 = createNode("OrientationInterpolator");
OrientationInterpolator2239.DEF = "Stand_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2239.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2239.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2215.children[23] = OrientationInterpolator2239;

OrientationInterpolator OrientationInterpolator2240 = createNode("OrientationInterpolator");
OrientationInterpolator2240.DEF = "Stand_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2240.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2240.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2215.children[24] = OrientationInterpolator2240;

OrientationInterpolator OrientationInterpolator2241 = createNode("OrientationInterpolator");
OrientationInterpolator2241.DEF = "Stand_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2241.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2241.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2215.children[25] = OrientationInterpolator2241;

OrientationInterpolator OrientationInterpolator2242 = createNode("OrientationInterpolator");
OrientationInterpolator2242.DEF = "Stand_sacroiliac_YawInterpolator";
OrientationInterpolator2242.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2242.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2215.children[26] = OrientationInterpolator2242;

OrientationInterpolator OrientationInterpolator2243 = createNode("OrientationInterpolator");
OrientationInterpolator2243.DEF = "Stand_vl5_YawInterpolator";
OrientationInterpolator2243.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2243.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2215.children[27] = OrientationInterpolator2243;

OrientationInterpolator OrientationInterpolator2244 = createNode("OrientationInterpolator");
OrientationInterpolator2244.DEF = "Stand_vc6_YawInterpolator";
OrientationInterpolator2244.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2244.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,-1,0,0,0,0,-1,0,0,0,1,0,0]);
Group2215.children[28] = OrientationInterpolator2244;

OrientationInterpolator OrientationInterpolator2245 = createNode("OrientationInterpolator");
OrientationInterpolator2245.DEF = "Stand_l_thumb1_PitchInterpolator";
OrientationInterpolator2245.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2245.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2215.children[29] = OrientationInterpolator2245;

OrientationInterpolator OrientationInterpolator2246 = createNode("OrientationInterpolator");
OrientationInterpolator2246.DEF = "Stand_r_thumb1_PitchInterpolator";
OrientationInterpolator2246.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2246.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,0.1,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group2215.children[30] = OrientationInterpolator2246;

OrientationInterpolator OrientationInterpolator2247 = createNode("OrientationInterpolator");
OrientationInterpolator2247.DEF = "Stand_r_index1_RollInterpolator";
OrientationInterpolator2247.key = new MFFloat(new float[0,0.2,0.4,0.5,0.8,1]);
OrientationInterpolator2247.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.1,0,0,1,0.2,0,0,1,0.3,0,0,1,0,0,0,1,0]);
Group2215.children[31] = OrientationInterpolator2247;

OrientationInterpolator OrientationInterpolator2248 = createNode("OrientationInterpolator");
OrientationInterpolator2248.DEF = "Stand_r_index2_RollInterpolator";
OrientationInterpolator2248.key = new MFFloat(new float[0,0.2,0.4,0.5,0.8,1]);
OrientationInterpolator2248.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.4,0,0,1,0.32,0,0,1,0.25,0,0,1,0.2,0,0,1,0]);
Group2215.children[32] = OrientationInterpolator2248;

OrientationInterpolator OrientationInterpolator2249 = createNode("OrientationInterpolator");
OrientationInterpolator2249.DEF = "Stand_r_index3_RollInterpolator";
OrientationInterpolator2249.key = new MFFloat(new float[0,0.2,0.4,0.5,0.8,1]);
OrientationInterpolator2249.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.2,0,0,1,0.3,0,0,1,0.35,0,0,1,0.2,0,0,1,0]);
Group2215.children[33] = OrientationInterpolator2249;

ROUTE ROUTE2250 = createNode("ROUTE");
ROUTE2250.fromField = "fraction_changed";
ROUTE2250.fromNode = "StandTimer";
ROUTE2250.toField = "set_fraction";
ROUTE2250.toNode = "Stand_r_ankle_RotationInterpolator";
Group2215.children[34] = ROUTE2250;

ROUTE ROUTE2251 = createNode("ROUTE");
ROUTE2251.fromField = "fraction_changed";
ROUTE2251.fromNode = "StandTimer";
ROUTE2251.toField = "set_fraction";
ROUTE2251.toNode = "Stand_r_knee_RotationInterpolator";
Group2215.children[35] = ROUTE2251;

ROUTE ROUTE2252 = createNode("ROUTE");
ROUTE2252.fromField = "fraction_changed";
ROUTE2252.fromNode = "StandTimer";
ROUTE2252.toField = "set_fraction";
ROUTE2252.toNode = "Stand_r_hip_RotationInterpolator";
Group2215.children[36] = ROUTE2252;

ROUTE ROUTE2253 = createNode("ROUTE");
ROUTE2253.fromField = "fraction_changed";
ROUTE2253.fromNode = "StandTimer";
ROUTE2253.toField = "set_fraction";
ROUTE2253.toNode = "Stand_l_ankle_RotationInterpolator";
Group2215.children[37] = ROUTE2253;

ROUTE ROUTE2254 = createNode("ROUTE");
ROUTE2254.fromField = "fraction_changed";
ROUTE2254.fromNode = "StandTimer";
ROUTE2254.toField = "set_fraction";
ROUTE2254.toNode = "Stand_l_knee_RotationInterpolator";
Group2215.children[38] = ROUTE2254;

ROUTE ROUTE2255 = createNode("ROUTE");
ROUTE2255.fromField = "fraction_changed";
ROUTE2255.fromNode = "StandTimer";
ROUTE2255.toField = "set_fraction";
ROUTE2255.toNode = "Stand_l_hip_RotationInterpolator";
Group2215.children[39] = ROUTE2255;

ROUTE ROUTE2256 = createNode("ROUTE");
ROUTE2256.fromField = "fraction_changed";
ROUTE2256.fromNode = "StandTimer";
ROUTE2256.toField = "set_fraction";
ROUTE2256.toNode = "Stand_lower_body_RotationInterpolator";
Group2215.children[40] = ROUTE2256;

ROUTE ROUTE2257 = createNode("ROUTE");
ROUTE2257.fromField = "fraction_changed";
ROUTE2257.fromNode = "StandTimer";
ROUTE2257.toField = "set_fraction";
ROUTE2257.toNode = "Stand_r_wrist_RotationInterpolator";
Group2215.children[41] = ROUTE2257;

ROUTE ROUTE2258 = createNode("ROUTE");
ROUTE2258.fromField = "fraction_changed";
ROUTE2258.fromNode = "StandTimer";
ROUTE2258.toField = "set_fraction";
ROUTE2258.toNode = "Stand_r_elbow_RotationInterpolator";
Group2215.children[42] = ROUTE2258;

ROUTE ROUTE2259 = createNode("ROUTE");
ROUTE2259.fromField = "fraction_changed";
ROUTE2259.fromNode = "StandTimer";
ROUTE2259.toField = "set_fraction";
ROUTE2259.toNode = "Stand_r_shoulder_RotationInterpolator";
Group2215.children[43] = ROUTE2259;

ROUTE ROUTE2260 = createNode("ROUTE");
ROUTE2260.fromField = "fraction_changed";
ROUTE2260.fromNode = "StandTimer";
ROUTE2260.toField = "set_fraction";
ROUTE2260.toNode = "Stand_l_wrist_RotationInterpolator";
Group2215.children[44] = ROUTE2260;

ROUTE ROUTE2261 = createNode("ROUTE");
ROUTE2261.fromField = "fraction_changed";
ROUTE2261.fromNode = "StandTimer";
ROUTE2261.toField = "set_fraction";
ROUTE2261.toNode = "Stand_l_elbow_RotationInterpolator";
Group2215.children[45] = ROUTE2261;

ROUTE ROUTE2262 = createNode("ROUTE");
ROUTE2262.fromField = "fraction_changed";
ROUTE2262.fromNode = "StandTimer";
ROUTE2262.toField = "set_fraction";
ROUTE2262.toNode = "Stand_l_shoulder_RotationInterpolator";
Group2215.children[46] = ROUTE2262;

ROUTE ROUTE2263 = createNode("ROUTE");
ROUTE2263.fromField = "fraction_changed";
ROUTE2263.fromNode = "StandTimer";
ROUTE2263.toField = "set_fraction";
ROUTE2263.toNode = "Stand_head_RotationInterpolator";
Group2215.children[47] = ROUTE2263;

ROUTE ROUTE2264 = createNode("ROUTE");
ROUTE2264.fromField = "fraction_changed";
ROUTE2264.fromNode = "StandTimer";
ROUTE2264.toField = "set_fraction";
ROUTE2264.toNode = "Stand_neck_RotationInterpolator";
Group2215.children[48] = ROUTE2264;

ROUTE ROUTE2265 = createNode("ROUTE");
ROUTE2265.fromField = "fraction_changed";
ROUTE2265.fromNode = "StandTimer";
ROUTE2265.toField = "set_fraction";
ROUTE2265.toNode = "Stand_l_eyeball_RotationInterpolator";
Group2215.children[49] = ROUTE2265;

ROUTE ROUTE2266 = createNode("ROUTE");
ROUTE2266.fromField = "fraction_changed";
ROUTE2266.fromNode = "StandTimer";
ROUTE2266.toField = "set_fraction";
ROUTE2266.toNode = "Stand_r_eyeball_RotationInterpolator";
Group2215.children[50] = ROUTE2266;

ROUTE ROUTE2267 = createNode("ROUTE");
ROUTE2267.fromField = "fraction_changed";
ROUTE2267.fromNode = "StandTimer";
ROUTE2267.toField = "set_fraction";
ROUTE2267.toNode = "Stand_upper_body_RotationInterpolator";
Group2215.children[51] = ROUTE2267;

ROUTE ROUTE2268 = createNode("ROUTE");
ROUTE2268.fromField = "fraction_changed";
ROUTE2268.fromNode = "StandTimer";
ROUTE2268.toField = "set_fraction";
ROUTE2268.toNode = "Stand_whole_body_RotationInterpolator";
Group2215.children[52] = ROUTE2268;

ROUTE ROUTE2269 = createNode("ROUTE");
ROUTE2269.fromField = "fraction_changed";
ROUTE2269.fromNode = "StandTimer";
ROUTE2269.toField = "set_fraction";
ROUTE2269.toNode = "Stand_whole_body_TranslationInterpolator";
Group2215.children[53] = ROUTE2269;

ROUTE ROUTE2270 = createNode("ROUTE");
ROUTE2270.fromField = "fraction_changed";
ROUTE2270.fromNode = "StandTimer";
ROUTE2270.toField = "set_fraction";
ROUTE2270.toNode = "Stand_l_sternoclavicular_RollInterpolator";
Group2215.children[54] = ROUTE2270;

ROUTE ROUTE2271 = createNode("ROUTE");
ROUTE2271.fromField = "fraction_changed";
ROUTE2271.fromNode = "StandTimer";
ROUTE2271.toField = "set_fraction";
ROUTE2271.toNode = "Stand_l_acromioclavicular_RollInterpolator";
Group2215.children[55] = ROUTE2271;

ROUTE ROUTE2272 = createNode("ROUTE");
ROUTE2272.fromField = "fraction_changed";
ROUTE2272.fromNode = "StandTimer";
ROUTE2272.toField = "set_fraction";
ROUTE2272.toNode = "Stand_r_sternoclavicular_RollInterpolator";
Group2215.children[56] = ROUTE2272;

ROUTE ROUTE2273 = createNode("ROUTE");
ROUTE2273.fromField = "fraction_changed";
ROUTE2273.fromNode = "StandTimer";
ROUTE2273.toField = "set_fraction";
ROUTE2273.toNode = "Stand_r_acromioclavicular_RollInterpolator";
Group2215.children[57] = ROUTE2273;

ROUTE ROUTE2274 = createNode("ROUTE");
ROUTE2274.fromField = "fraction_changed";
ROUTE2274.fromNode = "StandTimer";
ROUTE2274.toField = "set_fraction";
ROUTE2274.toNode = "Stand_r_metatarsal_PitchInterpolator";
Group2215.children[58] = ROUTE2274;

ROUTE ROUTE2275 = createNode("ROUTE");
ROUTE2275.fromField = "fraction_changed";
ROUTE2275.fromNode = "StandTimer";
ROUTE2275.toField = "set_fraction";
ROUTE2275.toNode = "Stand_sacroiliac_YawInterpolator";
Group2215.children[59] = ROUTE2275;

ROUTE ROUTE2276 = createNode("ROUTE");
ROUTE2276.fromField = "fraction_changed";
ROUTE2276.fromNode = "StandTimer";
ROUTE2276.toField = "set_fraction";
ROUTE2276.toNode = "Stand_vl5_YawInterpolator";
Group2215.children[60] = ROUTE2276;

ROUTE ROUTE2277 = createNode("ROUTE");
ROUTE2277.fromField = "fraction_changed";
ROUTE2277.fromNode = "StandTimer";
ROUTE2277.toField = "set_fraction";
ROUTE2277.toNode = "Stand_vc6_YawInterpolator";
Group2215.children[61] = ROUTE2277;

ROUTE ROUTE2278 = createNode("ROUTE");
ROUTE2278.fromField = "fraction_changed";
ROUTE2278.fromNode = "StandTimer";
ROUTE2278.toField = "set_fraction";
ROUTE2278.toNode = "Stand_l_thumb1_PitchInterpolator";
Group2215.children[62] = ROUTE2278;

ROUTE ROUTE2279 = createNode("ROUTE");
ROUTE2279.fromField = "fraction_changed";
ROUTE2279.fromNode = "StandTimer";
ROUTE2279.toField = "set_fraction";
ROUTE2279.toNode = "Stand_r_thumb1_PitchInterpolator";
Group2215.children[63] = ROUTE2279;

ROUTE ROUTE2280 = createNode("ROUTE");
ROUTE2280.fromField = "fraction_changed";
ROUTE2280.fromNode = "StandTimer";
ROUTE2280.toField = "set_fraction";
ROUTE2280.toNode = "Stand_r_index1_RollInterpolator";
Group2215.children[64] = ROUTE2280;

ROUTE ROUTE2281 = createNode("ROUTE");
ROUTE2281.fromField = "fraction_changed";
ROUTE2281.fromNode = "StandTimer";
ROUTE2281.toField = "set_fraction";
ROUTE2281.toNode = "Stand_r_index2_RollInterpolator";
Group2215.children[65] = ROUTE2281;

ROUTE ROUTE2282 = createNode("ROUTE");
ROUTE2282.fromField = "fraction_changed";
ROUTE2282.fromNode = "StandTimer";
ROUTE2282.toField = "set_fraction";
ROUTE2282.toNode = "Stand_r_index3_RollInterpolator";
Group2215.children[66] = ROUTE2282;

ROUTE ROUTE2283 = createNode("ROUTE");
ROUTE2283.fromField = "value_changed";
ROUTE2283.fromNode = "Stand_r_ankle_RotationInterpolator";
ROUTE2283.toField = "rotation";
ROUTE2283.toNode = "hanim_r_ankle";
Group2215.children[67] = ROUTE2283;

ROUTE ROUTE2284 = createNode("ROUTE");
ROUTE2284.fromField = "value_changed";
ROUTE2284.fromNode = "Stand_r_knee_RotationInterpolator";
ROUTE2284.toField = "rotation";
ROUTE2284.toNode = "hanim_r_knee";
Group2215.children[68] = ROUTE2284;

ROUTE ROUTE2285 = createNode("ROUTE");
ROUTE2285.fromField = "value_changed";
ROUTE2285.fromNode = "Stand_r_hip_RotationInterpolator";
ROUTE2285.toField = "rotation";
ROUTE2285.toNode = "hanim_r_hip";
Group2215.children[69] = ROUTE2285;

ROUTE ROUTE2286 = createNode("ROUTE");
ROUTE2286.fromField = "value_changed";
ROUTE2286.fromNode = "Stand_l_ankle_RotationInterpolator";
ROUTE2286.toField = "rotation";
ROUTE2286.toNode = "hanim_l_ankle";
Group2215.children[70] = ROUTE2286;

ROUTE ROUTE2287 = createNode("ROUTE");
ROUTE2287.fromField = "value_changed";
ROUTE2287.fromNode = "Stand_l_knee_RotationInterpolator";
ROUTE2287.toField = "rotation";
ROUTE2287.toNode = "hanim_l_knee";
Group2215.children[71] = ROUTE2287;

ROUTE ROUTE2288 = createNode("ROUTE");
ROUTE2288.fromField = "value_changed";
ROUTE2288.fromNode = "Stand_l_hip_RotationInterpolator";
ROUTE2288.toField = "rotation";
ROUTE2288.toNode = "hanim_l_hip";
Group2215.children[72] = ROUTE2288;

ROUTE ROUTE2289 = createNode("ROUTE");
ROUTE2289.fromField = "value_changed";
ROUTE2289.fromNode = "Stand_r_wrist_RotationInterpolator";
ROUTE2289.toField = "rotation";
ROUTE2289.toNode = "hanim_r_wrist";
Group2215.children[73] = ROUTE2289;

ROUTE ROUTE2290 = createNode("ROUTE");
ROUTE2290.fromField = "value_changed";
ROUTE2290.fromNode = "Stand_r_elbow_RotationInterpolator";
ROUTE2290.toField = "rotation";
ROUTE2290.toNode = "hanim_r_elbow";
Group2215.children[74] = ROUTE2290;

ROUTE ROUTE2291 = createNode("ROUTE");
ROUTE2291.fromField = "value_changed";
ROUTE2291.fromNode = "Stand_r_shoulder_RotationInterpolator";
ROUTE2291.toField = "rotation";
ROUTE2291.toNode = "hanim_r_shoulder";
Group2215.children[75] = ROUTE2291;

ROUTE ROUTE2292 = createNode("ROUTE");
ROUTE2292.fromField = "value_changed";
ROUTE2292.fromNode = "Stand_l_wrist_RotationInterpolator";
ROUTE2292.toField = "rotation";
ROUTE2292.toNode = "hanim_l_wrist";
Group2215.children[76] = ROUTE2292;

ROUTE ROUTE2293 = createNode("ROUTE");
ROUTE2293.fromField = "value_changed";
ROUTE2293.fromNode = "Stand_l_elbow_RotationInterpolator";
ROUTE2293.toField = "rotation";
ROUTE2293.toNode = "hanim_l_elbow";
Group2215.children[77] = ROUTE2293;

ROUTE ROUTE2294 = createNode("ROUTE");
ROUTE2294.fromField = "value_changed";
ROUTE2294.fromNode = "Stand_l_shoulder_RotationInterpolator";
ROUTE2294.toField = "rotation";
ROUTE2294.toNode = "hanim_l_shoulder";
Group2215.children[78] = ROUTE2294;

ROUTE ROUTE2295 = createNode("ROUTE");
ROUTE2295.fromField = "value_changed";
ROUTE2295.fromNode = "Stand_head_RotationInterpolator";
ROUTE2295.toField = "rotation";
ROUTE2295.toNode = "hanim_skullbase";
Group2215.children[79] = ROUTE2295;

ROUTE ROUTE2296 = createNode("ROUTE");
ROUTE2296.fromField = "value_changed";
ROUTE2296.fromNode = "Stand_neck_RotationInterpolator";
ROUTE2296.toField = "rotation";
ROUTE2296.toNode = "hanim_vc7";
Group2215.children[80] = ROUTE2296;

ROUTE ROUTE2297 = createNode("ROUTE");
ROUTE2297.fromField = "value_changed";
ROUTE2297.fromNode = "Stand_l_eyeball_RotationInterpolator";
ROUTE2297.toField = "rotation";
ROUTE2297.toNode = "hanim_l_eyeball_joint";
Group2215.children[81] = ROUTE2297;

ROUTE ROUTE2298 = createNode("ROUTE");
ROUTE2298.fromField = "value_changed";
ROUTE2298.fromNode = "Stand_r_eyeball_RotationInterpolator";
ROUTE2298.toField = "rotation";
ROUTE2298.toNode = "hanim_r_eyeball_joint";
Group2215.children[82] = ROUTE2298;

ROUTE ROUTE2299 = createNode("ROUTE");
ROUTE2299.fromField = "value_changed";
ROUTE2299.fromNode = "Stand_upper_body_RotationInterpolator";
ROUTE2299.toField = "rotation";
ROUTE2299.toNode = "hanim_vl1";
Group2215.children[83] = ROUTE2299;

ROUTE ROUTE2300 = createNode("ROUTE");
ROUTE2300.fromField = "value_changed";
ROUTE2300.fromNode = "Stand_lower_body_RotationInterpolator";
ROUTE2300.toField = "rotation";
ROUTE2300.toNode = "hanim_sacroiliac";
Group2215.children[84] = ROUTE2300;

ROUTE ROUTE2301 = createNode("ROUTE");
ROUTE2301.fromField = "value_changed";
ROUTE2301.fromNode = "Stand_whole_body_RotationInterpolator";
ROUTE2301.toField = "rotation";
ROUTE2301.toNode = "hanim_humanoid_root";
Group2215.children[85] = ROUTE2301;

ROUTE ROUTE2302 = createNode("ROUTE");
ROUTE2302.fromField = "value_changed";
ROUTE2302.fromNode = "Stand_whole_body_TranslationInterpolator";
ROUTE2302.toField = "translation";
ROUTE2302.toNode = "hanim_humanoid_root";
Group2215.children[86] = ROUTE2302;

ROUTE ROUTE2303 = createNode("ROUTE");
ROUTE2303.fromField = "value_changed";
ROUTE2303.fromNode = "Stand_l_sternoclavicular_RollInterpolator";
ROUTE2303.toField = "rotation";
ROUTE2303.toNode = "hanim_l_sternoclavicular";
Group2215.children[87] = ROUTE2303;

ROUTE ROUTE2304 = createNode("ROUTE");
ROUTE2304.fromField = "value_changed";
ROUTE2304.fromNode = "Stand_l_acromioclavicular_RollInterpolator";
ROUTE2304.toField = "rotation";
ROUTE2304.toNode = "hanim_l_acromioclavicular";
Group2215.children[88] = ROUTE2304;

ROUTE ROUTE2305 = createNode("ROUTE");
ROUTE2305.fromField = "value_changed";
ROUTE2305.fromNode = "Stand_r_sternoclavicular_RollInterpolator";
ROUTE2305.toField = "rotation";
ROUTE2305.toNode = "hanim_r_sternoclavicular";
Group2215.children[89] = ROUTE2305;

ROUTE ROUTE2306 = createNode("ROUTE");
ROUTE2306.fromField = "value_changed";
ROUTE2306.fromNode = "Stand_r_acromioclavicular_RollInterpolator";
ROUTE2306.toField = "rotation";
ROUTE2306.toNode = "hanim_r_acromioclavicular";
Group2215.children[90] = ROUTE2306;

ROUTE ROUTE2307 = createNode("ROUTE");
ROUTE2307.fromField = "value_changed";
ROUTE2307.fromNode = "Stand_r_metatarsal_PitchInterpolator";
ROUTE2307.toField = "rotation";
ROUTE2307.toNode = "hanim_l_metatarsal";
Group2215.children[91] = ROUTE2307;

ROUTE ROUTE2308 = createNode("ROUTE");
ROUTE2308.fromField = "value_changed";
ROUTE2308.fromNode = "Stand_r_metatarsal_PitchInterpolator";
ROUTE2308.toField = "rotation";
ROUTE2308.toNode = "hanim_r_metatarsal";
Group2215.children[92] = ROUTE2308;

ROUTE ROUTE2309 = createNode("ROUTE");
ROUTE2309.fromField = "value_changed";
ROUTE2309.fromNode = "Stand_sacroiliac_YawInterpolator";
ROUTE2309.toField = "rotation";
ROUTE2309.toNode = "hanim_sacroiliac";
Group2215.children[93] = ROUTE2309;

ROUTE ROUTE2310 = createNode("ROUTE");
ROUTE2310.fromField = "value_changed";
ROUTE2310.fromNode = "Stand_vl5_YawInterpolator";
ROUTE2310.toField = "rotation";
ROUTE2310.toNode = "hanim_vl5";
Group2215.children[94] = ROUTE2310;

ROUTE ROUTE2311 = createNode("ROUTE");
ROUTE2311.fromField = "value_changed";
ROUTE2311.fromNode = "Stand_vc6_YawInterpolator";
ROUTE2311.toField = "rotation";
ROUTE2311.toNode = "hanim_vc6";
Group2215.children[95] = ROUTE2311;

ROUTE ROUTE2312 = createNode("ROUTE");
ROUTE2312.fromField = "value_changed";
ROUTE2312.fromNode = "Stand_l_thumb1_PitchInterpolator";
ROUTE2312.toField = "rotation";
ROUTE2312.toNode = "hanim_l_thumb1";
Group2215.children[96] = ROUTE2312;

ROUTE ROUTE2313 = createNode("ROUTE");
ROUTE2313.fromField = "value_changed";
ROUTE2313.fromNode = "Stand_r_thumb1_PitchInterpolator";
ROUTE2313.toField = "rotation";
ROUTE2313.toNode = "hanim_r_thumb1";
Group2215.children[97] = ROUTE2313;

ROUTE ROUTE2314 = createNode("ROUTE");
ROUTE2314.fromField = "value_changed";
ROUTE2314.fromNode = "Stand_r_index1_RollInterpolator";
ROUTE2314.toField = "rotation";
ROUTE2314.toNode = "hanim_r_index1";
Group2215.children[98] = ROUTE2314;

ROUTE ROUTE2315 = createNode("ROUTE");
ROUTE2315.fromField = "value_changed";
ROUTE2315.fromNode = "Stand_r_index2_RollInterpolator";
ROUTE2315.toField = "rotation";
ROUTE2315.toNode = "hanim_r_index2";
Group2215.children[99] = ROUTE2315;

ROUTE ROUTE2316 = createNode("ROUTE");
ROUTE2316.fromField = "value_changed";
ROUTE2316.fromNode = "Stand_r_index3_RollInterpolator";
ROUTE2316.toField = "rotation";
ROUTE2316.toNode = "hanim_r_index3";
Group2215.children[100] = ROUTE2316;

ROUTE ROUTE2317 = createNode("ROUTE");
ROUTE2317.fromField = "value_changed";
ROUTE2317.fromNode = "Stand_r_index1_RollInterpolator";
ROUTE2317.toField = "rotation";
ROUTE2317.toNode = "hanim_r_middle1";
Group2215.children[101] = ROUTE2317;

ROUTE ROUTE2318 = createNode("ROUTE");
ROUTE2318.fromField = "value_changed";
ROUTE2318.fromNode = "Stand_r_index2_RollInterpolator";
ROUTE2318.toField = "rotation";
ROUTE2318.toNode = "hanim_r_middle2";
Group2215.children[102] = ROUTE2318;

ROUTE ROUTE2319 = createNode("ROUTE");
ROUTE2319.fromField = "value_changed";
ROUTE2319.fromNode = "Stand_r_index3_RollInterpolator";
ROUTE2319.toField = "rotation";
ROUTE2319.toNode = "hanim_r_middle3";
Group2215.children[103] = ROUTE2319;

ROUTE ROUTE2320 = createNode("ROUTE");
ROUTE2320.fromField = "value_changed";
ROUTE2320.fromNode = "Stand_r_index1_RollInterpolator";
ROUTE2320.toField = "rotation";
ROUTE2320.toNode = "hanim_r_ring1";
Group2215.children[104] = ROUTE2320;

ROUTE ROUTE2321 = createNode("ROUTE");
ROUTE2321.fromField = "value_changed";
ROUTE2321.fromNode = "Stand_r_index2_RollInterpolator";
ROUTE2321.toField = "rotation";
ROUTE2321.toNode = "hanim_r_ring2";
Group2215.children[105] = ROUTE2321;

ROUTE ROUTE2322 = createNode("ROUTE");
ROUTE2322.fromField = "value_changed";
ROUTE2322.fromNode = "Stand_r_index3_RollInterpolator";
ROUTE2322.toField = "rotation";
ROUTE2322.toNode = "hanim_r_ring3";
Group2215.children[106] = ROUTE2322;

ROUTE ROUTE2323 = createNode("ROUTE");
ROUTE2323.fromField = "value_changed";
ROUTE2323.fromNode = "Stand_r_index1_RollInterpolator";
ROUTE2323.toField = "rotation";
ROUTE2323.toNode = "hanim_r_pinky1";
Group2215.children[107] = ROUTE2323;

ROUTE ROUTE2324 = createNode("ROUTE");
ROUTE2324.fromField = "value_changed";
ROUTE2324.fromNode = "Stand_r_index2_RollInterpolator";
ROUTE2324.toField = "rotation";
ROUTE2324.toNode = "hanim_r_pinky2";
Group2215.children[108] = ROUTE2324;

ROUTE ROUTE2325 = createNode("ROUTE");
ROUTE2325.fromField = "value_changed";
ROUTE2325.fromNode = "Stand_r_index3_RollInterpolator";
ROUTE2325.toField = "rotation";
ROUTE2325.toNode = "hanim_r_pinky3";
Group2215.children[109] = ROUTE2325;

children[14] = Group2215;

Group Group2326 = createNode("Group");
Group2326.DEF = "PitchesAnimation";
TimeSensor TimeSensor2327 = createNode("TimeSensor");
TimeSensor2327.DEF = "PitchTimer";
TimeSensor2327.cycleInterval = 5.73;
TimeSensor2327.loop = True;
Group2326.children = new MFNode();

Group2326.children[0] = TimeSensor2327;

OrientationInterpolator OrientationInterpolator2328 = createNode("OrientationInterpolator");
OrientationInterpolator2328.DEF = "Pitch_r_metatarsal_PitchInterpolator";
OrientationInterpolator2328.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2328.keyValue = new MFRotation(new float[1,0,0,0,-1,0,0,0.5,-1,0,0,0.7,1,0,0,0.75,-1,0,0,0.2,1,0,0,0]);
Group2326.children[1] = OrientationInterpolator2328;

OrientationInterpolator OrientationInterpolator2329 = createNode("OrientationInterpolator");
OrientationInterpolator2329.DEF = "Pitches_r_ankle_RotationInterpolator";
OrientationInterpolator2329.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2329.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0]);
Group2326.children[2] = OrientationInterpolator2329;

OrientationInterpolator OrientationInterpolator2330 = createNode("OrientationInterpolator");
OrientationInterpolator2330.DEF = "Pitches_r_knee_RotationInterpolator";
OrientationInterpolator2330.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2330.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2326.children[3] = OrientationInterpolator2330;

OrientationInterpolator OrientationInterpolator2331 = createNode("OrientationInterpolator");
OrientationInterpolator2331.DEF = "Pitches_r_hip_RotationInterpolator";
OrientationInterpolator2331.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2331.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0]);
Group2326.children[4] = OrientationInterpolator2331;

OrientationInterpolator OrientationInterpolator2332 = createNode("OrientationInterpolator");
OrientationInterpolator2332.DEF = "Pitches_l_ankle_RotationInterpolator";
OrientationInterpolator2332.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2332.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0]);
Group2326.children[5] = OrientationInterpolator2332;

OrientationInterpolator OrientationInterpolator2333 = createNode("OrientationInterpolator");
OrientationInterpolator2333.DEF = "Pitches_l_knee_RotationInterpolator";
OrientationInterpolator2333.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2333.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2326.children[6] = OrientationInterpolator2333;

OrientationInterpolator OrientationInterpolator2334 = createNode("OrientationInterpolator");
OrientationInterpolator2334.DEF = "Pitches_l_hip_RotationInterpolator";
OrientationInterpolator2334.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2334.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0]);
Group2326.children[7] = OrientationInterpolator2334;

OrientationInterpolator OrientationInterpolator2335 = createNode("OrientationInterpolator");
OrientationInterpolator2335.DEF = "Pitches_r_wrist_RotationInterpolator";
OrientationInterpolator2335.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2335.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2326.children[8] = OrientationInterpolator2335;

OrientationInterpolator OrientationInterpolator2336 = createNode("OrientationInterpolator");
OrientationInterpolator2336.DEF = "Pitches_r_elbow_RotationInterpolator";
OrientationInterpolator2336.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2336.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2326.children[9] = OrientationInterpolator2336;

OrientationInterpolator OrientationInterpolator2337 = createNode("OrientationInterpolator");
OrientationInterpolator2337.DEF = "Pitches_r_shoulder_RotationInterpolator";
OrientationInterpolator2337.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2337.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0]);
Group2326.children[10] = OrientationInterpolator2337;

OrientationInterpolator OrientationInterpolator2338 = createNode("OrientationInterpolator");
OrientationInterpolator2338.DEF = "Pitches_l_wrist_RotationInterpolator";
OrientationInterpolator2338.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2338.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2326.children[11] = OrientationInterpolator2338;

OrientationInterpolator OrientationInterpolator2339 = createNode("OrientationInterpolator");
OrientationInterpolator2339.DEF = "Pitches_l_elbow_RotationInterpolator";
OrientationInterpolator2339.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2339.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2326.children[12] = OrientationInterpolator2339;

OrientationInterpolator OrientationInterpolator2340 = createNode("OrientationInterpolator");
OrientationInterpolator2340.DEF = "Pitches_l_shoulder_RotationInterpolator";
OrientationInterpolator2340.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2340.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0]);
Group2326.children[13] = OrientationInterpolator2340;

OrientationInterpolator OrientationInterpolator2341 = createNode("OrientationInterpolator");
OrientationInterpolator2341.DEF = "Pitches_head_RotationInterpolator";
OrientationInterpolator2341.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2341.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2326.children[14] = OrientationInterpolator2341;

OrientationInterpolator OrientationInterpolator2342 = createNode("OrientationInterpolator");
OrientationInterpolator2342.DEF = "Pitches_neck_RotationInterpolator";
OrientationInterpolator2342.key = new MFFloat(new float[0,0.25,0.55,1]);
OrientationInterpolator2342.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,0.55,-1,0,0,1.05,0,0,1,0]);
Group2326.children[15] = OrientationInterpolator2342;

OrientationInterpolator OrientationInterpolator2343 = createNode("OrientationInterpolator");
OrientationInterpolator2343.DEF = "Pitches_lower_body_RotationInterpolator";
OrientationInterpolator2343.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2343.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2326.children[16] = OrientationInterpolator2343;

OrientationInterpolator OrientationInterpolator2344 = createNode("OrientationInterpolator");
OrientationInterpolator2344.DEF = "Pitches_upper_body_RotationInterpolator";
OrientationInterpolator2344.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2344.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2326.children[17] = OrientationInterpolator2344;

OrientationInterpolator OrientationInterpolator2345 = createNode("OrientationInterpolator");
OrientationInterpolator2345.DEF = "Pitches_whole_body_RotationInterpolator";
OrientationInterpolator2345.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2345.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2326.children[18] = OrientationInterpolator2345;

PositionInterpolator PositionInterpolator2346 = createNode("PositionInterpolator");
PositionInterpolator2346.DEF = "Pitches_whole_body_TranslationInterpolator";
PositionInterpolator2346.key = new MFFloat(new float[0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]);
PositionInterpolator2346.keyValue = new MFVec3f(new float[0,0,0,0,-0.15,0,0,-0.7,0,0,-0.15,0,0,0,0,0,-0.15,0,0,-0.7,0,0,-0.15,0,0,0,0]);
Group2326.children[19] = PositionInterpolator2346;

OrientationInterpolator OrientationInterpolator2347 = createNode("OrientationInterpolator");
OrientationInterpolator2347.DEF = "Pitch_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2347.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2347.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2326.children[20] = OrientationInterpolator2347;

OrientationInterpolator OrientationInterpolator2348 = createNode("OrientationInterpolator");
OrientationInterpolator2348.DEF = "Pitch_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2348.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2348.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2326.children[21] = OrientationInterpolator2348;

OrientationInterpolator OrientationInterpolator2349 = createNode("OrientationInterpolator");
OrientationInterpolator2349.DEF = "Pitch_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2349.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2349.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2326.children[22] = OrientationInterpolator2349;

OrientationInterpolator OrientationInterpolator2350 = createNode("OrientationInterpolator");
OrientationInterpolator2350.DEF = "Pitch_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2350.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2350.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2326.children[23] = OrientationInterpolator2350;

OrientationInterpolator OrientationInterpolator2351 = createNode("OrientationInterpolator");
OrientationInterpolator2351.DEF = "Pitch_sacroiliac_YawInterpolator";
OrientationInterpolator2351.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2351.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2326.children[24] = OrientationInterpolator2351;

OrientationInterpolator OrientationInterpolator2352 = createNode("OrientationInterpolator");
OrientationInterpolator2352.DEF = "Pitch_vl5_YawInterpolator";
OrientationInterpolator2352.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2352.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2326.children[25] = OrientationInterpolator2352;

OrientationInterpolator OrientationInterpolator2353 = createNode("OrientationInterpolator");
OrientationInterpolator2353.DEF = "Pitch_vc6_YawInterpolator";
OrientationInterpolator2353.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2353.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2326.children[26] = OrientationInterpolator2353;

OrientationInterpolator OrientationInterpolator2354 = createNode("OrientationInterpolator");
OrientationInterpolator2354.DEF = "Pitch_l_thumb1_PitchInterpolator";
OrientationInterpolator2354.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2354.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.3,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group2326.children[27] = OrientationInterpolator2354;

OrientationInterpolator OrientationInterpolator2355 = createNode("OrientationInterpolator");
OrientationInterpolator2355.DEF = "Pitch_r_thumb1_PitchInterpolator";
OrientationInterpolator2355.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2355.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.3,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group2326.children[28] = OrientationInterpolator2355;

ROUTE ROUTE2356 = createNode("ROUTE");
ROUTE2356.fromField = "fraction_changed";
ROUTE2356.fromNode = "PitchTimer";
ROUTE2356.toField = "set_fraction";
ROUTE2356.toNode = "Pitches_r_ankle_RotationInterpolator";
Group2326.children[29] = ROUTE2356;

ROUTE ROUTE2357 = createNode("ROUTE");
ROUTE2357.fromField = "fraction_changed";
ROUTE2357.fromNode = "PitchTimer";
ROUTE2357.toField = "set_fraction";
ROUTE2357.toNode = "Pitches_r_knee_RotationInterpolator";
Group2326.children[30] = ROUTE2357;

ROUTE ROUTE2358 = createNode("ROUTE");
ROUTE2358.fromField = "fraction_changed";
ROUTE2358.fromNode = "PitchTimer";
ROUTE2358.toField = "set_fraction";
ROUTE2358.toNode = "Pitches_r_hip_RotationInterpolator";
Group2326.children[31] = ROUTE2358;

ROUTE ROUTE2359 = createNode("ROUTE");
ROUTE2359.fromField = "fraction_changed";
ROUTE2359.fromNode = "PitchTimer";
ROUTE2359.toField = "set_fraction";
ROUTE2359.toNode = "Pitches_l_ankle_RotationInterpolator";
Group2326.children[32] = ROUTE2359;

ROUTE ROUTE2360 = createNode("ROUTE");
ROUTE2360.fromField = "fraction_changed";
ROUTE2360.fromNode = "PitchTimer";
ROUTE2360.toField = "set_fraction";
ROUTE2360.toNode = "Pitches_l_knee_RotationInterpolator";
Group2326.children[33] = ROUTE2360;

ROUTE ROUTE2361 = createNode("ROUTE");
ROUTE2361.fromField = "fraction_changed";
ROUTE2361.fromNode = "PitchTimer";
ROUTE2361.toField = "set_fraction";
ROUTE2361.toNode = "Pitches_l_hip_RotationInterpolator";
Group2326.children[34] = ROUTE2361;

ROUTE ROUTE2362 = createNode("ROUTE");
ROUTE2362.fromField = "fraction_changed";
ROUTE2362.fromNode = "PitchTimer";
ROUTE2362.toField = "set_fraction";
ROUTE2362.toNode = "Pitches_lower_body_RotationInterpolator";
Group2326.children[35] = ROUTE2362;

ROUTE ROUTE2363 = createNode("ROUTE");
ROUTE2363.fromField = "fraction_changed";
ROUTE2363.fromNode = "PitchTimer";
ROUTE2363.toField = "set_fraction";
ROUTE2363.toNode = "Pitches_r_wrist_RotationInterpolator";
Group2326.children[36] = ROUTE2363;

ROUTE ROUTE2364 = createNode("ROUTE");
ROUTE2364.fromField = "fraction_changed";
ROUTE2364.fromNode = "PitchTimer";
ROUTE2364.toField = "set_fraction";
ROUTE2364.toNode = "Pitches_r_elbow_RotationInterpolator";
Group2326.children[37] = ROUTE2364;

ROUTE ROUTE2365 = createNode("ROUTE");
ROUTE2365.fromField = "fraction_changed";
ROUTE2365.fromNode = "PitchTimer";
ROUTE2365.toField = "set_fraction";
ROUTE2365.toNode = "Pitches_r_shoulder_RotationInterpolator";
Group2326.children[38] = ROUTE2365;

ROUTE ROUTE2366 = createNode("ROUTE");
ROUTE2366.fromField = "fraction_changed";
ROUTE2366.fromNode = "PitchTimer";
ROUTE2366.toField = "set_fraction";
ROUTE2366.toNode = "Pitches_l_wrist_RotationInterpolator";
Group2326.children[39] = ROUTE2366;

ROUTE ROUTE2367 = createNode("ROUTE");
ROUTE2367.fromField = "fraction_changed";
ROUTE2367.fromNode = "PitchTimer";
ROUTE2367.toField = "set_fraction";
ROUTE2367.toNode = "Pitches_l_elbow_RotationInterpolator";
Group2326.children[40] = ROUTE2367;

ROUTE ROUTE2368 = createNode("ROUTE");
ROUTE2368.fromField = "fraction_changed";
ROUTE2368.fromNode = "PitchTimer";
ROUTE2368.toField = "set_fraction";
ROUTE2368.toNode = "Pitches_l_shoulder_RotationInterpolator";
Group2326.children[41] = ROUTE2368;

ROUTE ROUTE2369 = createNode("ROUTE");
ROUTE2369.fromField = "fraction_changed";
ROUTE2369.fromNode = "PitchTimer";
ROUTE2369.toField = "set_fraction";
ROUTE2369.toNode = "Pitches_head_RotationInterpolator";
Group2326.children[42] = ROUTE2369;

ROUTE ROUTE2370 = createNode("ROUTE");
ROUTE2370.fromField = "fraction_changed";
ROUTE2370.fromNode = "PitchTimer";
ROUTE2370.toField = "set_fraction";
ROUTE2370.toNode = "Pitches_neck_RotationInterpolator";
Group2326.children[43] = ROUTE2370;

ROUTE ROUTE2371 = createNode("ROUTE");
ROUTE2371.fromField = "fraction_changed";
ROUTE2371.fromNode = "PitchTimer";
ROUTE2371.toField = "set_fraction";
ROUTE2371.toNode = "Pitches_upper_body_RotationInterpolator";
Group2326.children[44] = ROUTE2371;

ROUTE ROUTE2372 = createNode("ROUTE");
ROUTE2372.fromField = "fraction_changed";
ROUTE2372.fromNode = "PitchTimer";
ROUTE2372.toField = "set_fraction";
ROUTE2372.toNode = "Pitches_whole_body_RotationInterpolator";
Group2326.children[45] = ROUTE2372;

ROUTE ROUTE2373 = createNode("ROUTE");
ROUTE2373.fromField = "fraction_changed";
ROUTE2373.fromNode = "PitchTimer";
ROUTE2373.toField = "set_fraction";
ROUTE2373.toNode = "Pitches_whole_body_TranslationInterpolator";
Group2326.children[46] = ROUTE2373;

ROUTE ROUTE2374 = createNode("ROUTE");
ROUTE2374.fromField = "fraction_changed";
ROUTE2374.fromNode = "PitchTimer";
ROUTE2374.toField = "set_fraction";
ROUTE2374.toNode = "Pitch_l_sternoclavicular_RollInterpolator";
Group2326.children[47] = ROUTE2374;

ROUTE ROUTE2375 = createNode("ROUTE");
ROUTE2375.fromField = "fraction_changed";
ROUTE2375.fromNode = "PitchTimer";
ROUTE2375.toField = "set_fraction";
ROUTE2375.toNode = "Pitch_l_acromioclavicular_RollInterpolator";
Group2326.children[48] = ROUTE2375;

ROUTE ROUTE2376 = createNode("ROUTE");
ROUTE2376.fromField = "fraction_changed";
ROUTE2376.fromNode = "PitchTimer";
ROUTE2376.toField = "set_fraction";
ROUTE2376.toNode = "Pitch_r_sternoclavicular_RollInterpolator";
Group2326.children[49] = ROUTE2376;

ROUTE ROUTE2377 = createNode("ROUTE");
ROUTE2377.fromField = "fraction_changed";
ROUTE2377.fromNode = "PitchTimer";
ROUTE2377.toField = "set_fraction";
ROUTE2377.toNode = "Pitch_r_acromioclavicular_RollInterpolator";
Group2326.children[50] = ROUTE2377;

ROUTE ROUTE2378 = createNode("ROUTE");
ROUTE2378.fromField = "fraction_changed";
ROUTE2378.fromNode = "PitchTimer";
ROUTE2378.toField = "set_fraction";
ROUTE2378.toNode = "Pitch_r_metatarsal_PitchInterpolator";
Group2326.children[51] = ROUTE2378;

ROUTE ROUTE2379 = createNode("ROUTE");
ROUTE2379.fromField = "fraction_changed";
ROUTE2379.fromNode = "PitchTimer";
ROUTE2379.toField = "set_fraction";
ROUTE2379.toNode = "Pitch_sacroiliac_YawInterpolator";
Group2326.children[52] = ROUTE2379;

ROUTE ROUTE2380 = createNode("ROUTE");
ROUTE2380.fromField = "fraction_changed";
ROUTE2380.fromNode = "PitchTimer";
ROUTE2380.toField = "set_fraction";
ROUTE2380.toNode = "Pitch_vl5_YawInterpolator";
Group2326.children[53] = ROUTE2380;

ROUTE ROUTE2381 = createNode("ROUTE");
ROUTE2381.fromField = "fraction_changed";
ROUTE2381.fromNode = "PitchTimer";
ROUTE2381.toField = "set_fraction";
ROUTE2381.toNode = "Pitch_vc6_YawInterpolator";
Group2326.children[54] = ROUTE2381;

ROUTE ROUTE2382 = createNode("ROUTE");
ROUTE2382.fromField = "fraction_changed";
ROUTE2382.fromNode = "PitchTimer";
ROUTE2382.toField = "set_fraction";
ROUTE2382.toNode = "Pitch_l_thumb1_PitchInterpolator";
Group2326.children[55] = ROUTE2382;

ROUTE ROUTE2383 = createNode("ROUTE");
ROUTE2383.fromField = "fraction_changed";
ROUTE2383.fromNode = "PitchTimer";
ROUTE2383.toField = "set_fraction";
ROUTE2383.toNode = "Pitch_r_thumb1_PitchInterpolator";
Group2326.children[56] = ROUTE2383;

ROUTE ROUTE2384 = createNode("ROUTE");
ROUTE2384.fromField = "value_changed";
ROUTE2384.fromNode = "Pitches_r_ankle_RotationInterpolator";
ROUTE2384.toField = "rotation";
ROUTE2384.toNode = "hanim_r_ankle";
Group2326.children[57] = ROUTE2384;

ROUTE ROUTE2385 = createNode("ROUTE");
ROUTE2385.fromField = "value_changed";
ROUTE2385.fromNode = "Pitches_r_knee_RotationInterpolator";
ROUTE2385.toField = "rotation";
ROUTE2385.toNode = "hanim_r_knee";
Group2326.children[58] = ROUTE2385;

ROUTE ROUTE2386 = createNode("ROUTE");
ROUTE2386.fromField = "value_changed";
ROUTE2386.fromNode = "Pitches_r_hip_RotationInterpolator";
ROUTE2386.toField = "rotation";
ROUTE2386.toNode = "hanim_r_hip";
Group2326.children[59] = ROUTE2386;

ROUTE ROUTE2387 = createNode("ROUTE");
ROUTE2387.fromField = "value_changed";
ROUTE2387.fromNode = "Pitches_l_ankle_RotationInterpolator";
ROUTE2387.toField = "rotation";
ROUTE2387.toNode = "hanim_l_ankle";
Group2326.children[60] = ROUTE2387;

ROUTE ROUTE2388 = createNode("ROUTE");
ROUTE2388.fromField = "value_changed";
ROUTE2388.fromNode = "Pitches_l_knee_RotationInterpolator";
ROUTE2388.toField = "rotation";
ROUTE2388.toNode = "hanim_l_knee";
Group2326.children[61] = ROUTE2388;

ROUTE ROUTE2389 = createNode("ROUTE");
ROUTE2389.fromField = "value_changed";
ROUTE2389.fromNode = "Pitches_l_hip_RotationInterpolator";
ROUTE2389.toField = "rotation";
ROUTE2389.toNode = "hanim_l_hip";
Group2326.children[62] = ROUTE2389;

ROUTE ROUTE2390 = createNode("ROUTE");
ROUTE2390.fromField = "value_changed";
ROUTE2390.fromNode = "Pitches_lower_body_RotationInterpolator";
ROUTE2390.toField = "rotation";
ROUTE2390.toNode = "hanim_sacroiliac";
Group2326.children[63] = ROUTE2390;

ROUTE ROUTE2391 = createNode("ROUTE");
ROUTE2391.fromField = "value_changed";
ROUTE2391.fromNode = "Pitches_r_wrist_RotationInterpolator";
ROUTE2391.toField = "rotation";
ROUTE2391.toNode = "hanim_r_wrist";
Group2326.children[64] = ROUTE2391;

ROUTE ROUTE2392 = createNode("ROUTE");
ROUTE2392.fromField = "value_changed";
ROUTE2392.fromNode = "Pitches_r_elbow_RotationInterpolator";
ROUTE2392.toField = "rotation";
ROUTE2392.toNode = "hanim_r_elbow";
Group2326.children[65] = ROUTE2392;

ROUTE ROUTE2393 = createNode("ROUTE");
ROUTE2393.fromField = "value_changed";
ROUTE2393.fromNode = "Pitches_r_shoulder_RotationInterpolator";
ROUTE2393.toField = "rotation";
ROUTE2393.toNode = "hanim_r_shoulder";
Group2326.children[66] = ROUTE2393;

ROUTE ROUTE2394 = createNode("ROUTE");
ROUTE2394.fromField = "value_changed";
ROUTE2394.fromNode = "Pitches_l_wrist_RotationInterpolator";
ROUTE2394.toField = "rotation";
ROUTE2394.toNode = "hanim_l_wrist";
Group2326.children[67] = ROUTE2394;

ROUTE ROUTE2395 = createNode("ROUTE");
ROUTE2395.fromField = "value_changed";
ROUTE2395.fromNode = "Pitches_l_elbow_RotationInterpolator";
ROUTE2395.toField = "rotation";
ROUTE2395.toNode = "hanim_l_elbow";
Group2326.children[68] = ROUTE2395;

ROUTE ROUTE2396 = createNode("ROUTE");
ROUTE2396.fromField = "value_changed";
ROUTE2396.fromNode = "Pitches_l_shoulder_RotationInterpolator";
ROUTE2396.toField = "rotation";
ROUTE2396.toNode = "hanim_l_shoulder";
Group2326.children[69] = ROUTE2396;

ROUTE ROUTE2397 = createNode("ROUTE");
ROUTE2397.fromField = "value_changed";
ROUTE2397.fromNode = "Pitches_head_RotationInterpolator";
ROUTE2397.toField = "rotation";
ROUTE2397.toNode = "hanim_skullbase";
Group2326.children[70] = ROUTE2397;

ROUTE ROUTE2398 = createNode("ROUTE");
ROUTE2398.fromField = "value_changed";
ROUTE2398.fromNode = "Pitches_neck_RotationInterpolator";
ROUTE2398.toField = "rotation";
ROUTE2398.toNode = "hanim_vc4";
Group2326.children[71] = ROUTE2398;

ROUTE ROUTE2399 = createNode("ROUTE");
ROUTE2399.fromField = "value_changed";
ROUTE2399.fromNode = "Pitches_upper_body_RotationInterpolator";
ROUTE2399.toField = "rotation";
ROUTE2399.toNode = "hanim_vl1";
Group2326.children[72] = ROUTE2399;

ROUTE ROUTE2400 = createNode("ROUTE");
ROUTE2400.fromField = "value_changed";
ROUTE2400.fromNode = "Pitches_whole_body_RotationInterpolator";
ROUTE2400.toField = "rotation";
ROUTE2400.toNode = "hanim_humanoid_root";
Group2326.children[73] = ROUTE2400;

ROUTE ROUTE2401 = createNode("ROUTE");
ROUTE2401.fromField = "value_changed";
ROUTE2401.fromNode = "Pitches_whole_body_TranslationInterpolator";
ROUTE2401.toField = "translation";
ROUTE2401.toNode = "hanim_humanoid_root";
Group2326.children[74] = ROUTE2401;

ROUTE ROUTE2402 = createNode("ROUTE");
ROUTE2402.fromField = "value_changed";
ROUTE2402.fromNode = "Pitch_l_sternoclavicular_RollInterpolator";
ROUTE2402.toField = "rotation";
ROUTE2402.toNode = "hanim_l_sternoclavicular";
Group2326.children[75] = ROUTE2402;

ROUTE ROUTE2403 = createNode("ROUTE");
ROUTE2403.fromField = "value_changed";
ROUTE2403.fromNode = "Pitch_l_acromioclavicular_RollInterpolator";
ROUTE2403.toField = "rotation";
ROUTE2403.toNode = "hanim_l_acromioclavicular";
Group2326.children[76] = ROUTE2403;

ROUTE ROUTE2404 = createNode("ROUTE");
ROUTE2404.fromField = "value_changed";
ROUTE2404.fromNode = "Pitch_r_sternoclavicular_RollInterpolator";
ROUTE2404.toField = "rotation";
ROUTE2404.toNode = "hanim_r_sternoclavicular";
Group2326.children[77] = ROUTE2404;

ROUTE ROUTE2405 = createNode("ROUTE");
ROUTE2405.fromField = "value_changed";
ROUTE2405.fromNode = "Pitch_r_acromioclavicular_RollInterpolator";
ROUTE2405.toField = "rotation";
ROUTE2405.toNode = "hanim_r_acromioclavicular";
Group2326.children[78] = ROUTE2405;

ROUTE ROUTE2406 = createNode("ROUTE");
ROUTE2406.fromField = "value_changed";
ROUTE2406.fromNode = "Pitch_r_metatarsal_PitchInterpolator";
ROUTE2406.toField = "rotation";
ROUTE2406.toNode = "hanim_l_metatarsal";
Group2326.children[79] = ROUTE2406;

ROUTE ROUTE2407 = createNode("ROUTE");
ROUTE2407.fromField = "value_changed";
ROUTE2407.fromNode = "Pitch_r_metatarsal_PitchInterpolator";
ROUTE2407.toField = "rotation";
ROUTE2407.toNode = "hanim_r_metatarsal";
Group2326.children[80] = ROUTE2407;

ROUTE ROUTE2408 = createNode("ROUTE");
ROUTE2408.fromField = "value_changed";
ROUTE2408.fromNode = "Pitch_sacroiliac_YawInterpolator";
ROUTE2408.toField = "rotation";
ROUTE2408.toNode = "hanim_sacroiliac";
Group2326.children[81] = ROUTE2408;

ROUTE ROUTE2409 = createNode("ROUTE");
ROUTE2409.fromField = "value_changed";
ROUTE2409.fromNode = "Pitch_vl5_YawInterpolator";
ROUTE2409.toField = "rotation";
ROUTE2409.toNode = "hanim_vl5";
Group2326.children[82] = ROUTE2409;

ROUTE ROUTE2410 = createNode("ROUTE");
ROUTE2410.fromField = "value_changed";
ROUTE2410.fromNode = "Pitch_vc6_YawInterpolator";
ROUTE2410.toField = "rotation";
ROUTE2410.toNode = "hanim_vc6";
Group2326.children[83] = ROUTE2410;

ROUTE ROUTE2411 = createNode("ROUTE");
ROUTE2411.fromField = "value_changed";
ROUTE2411.fromNode = "Pitch_l_thumb1_PitchInterpolator";
ROUTE2411.toField = "rotation";
ROUTE2411.toNode = "hanim_l_thumb1";
Group2326.children[84] = ROUTE2411;

ROUTE ROUTE2412 = createNode("ROUTE");
ROUTE2412.fromField = "value_changed";
ROUTE2412.fromNode = "Pitch_r_thumb1_PitchInterpolator";
ROUTE2412.toField = "rotation";
ROUTE2412.toNode = "hanim_r_thumb1";
Group2326.children[85] = ROUTE2412;

children[15] = Group2326;

Group Group2413 = createNode("Group");
Group2413.DEF = "YawsAnimation";
TimeSensor TimeSensor2414 = createNode("TimeSensor");
TimeSensor2414.DEF = "YawTimer";
TimeSensor2414.cycleInterval = 5.73;
TimeSensor2414.loop = True;
Group2413.children = new MFNode();

Group2413.children[0] = TimeSensor2414;

OrientationInterpolator OrientationInterpolator2415 = createNode("OrientationInterpolator");
OrientationInterpolator2415.DEF = "Yaw_r_metatarsal_PitchInterpolator";
OrientationInterpolator2415.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2415.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2413.children[1] = OrientationInterpolator2415;

OrientationInterpolator OrientationInterpolator2416 = createNode("OrientationInterpolator");
OrientationInterpolator2416.DEF = "Yaws_r_ankle_RotationInterpolator";
OrientationInterpolator2416.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2416.keyValue = new MFRotation(new float[0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0]);
Group2413.children[2] = OrientationInterpolator2416;

OrientationInterpolator OrientationInterpolator2417 = createNode("OrientationInterpolator");
OrientationInterpolator2417.DEF = "Yaws_r_knee_RotationInterpolator";
OrientationInterpolator2417.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2417.keyValue = new MFRotation(new float[0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0]);
Group2413.children[3] = OrientationInterpolator2417;

OrientationInterpolator OrientationInterpolator2418 = createNode("OrientationInterpolator");
OrientationInterpolator2418.DEF = "Yaws_r_hip_RotationInterpolator";
OrientationInterpolator2418.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2418.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2413.children[4] = OrientationInterpolator2418;

OrientationInterpolator OrientationInterpolator2419 = createNode("OrientationInterpolator");
OrientationInterpolator2419.DEF = "Yaws_l_ankle_RotationInterpolator";
OrientationInterpolator2419.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2419.keyValue = new MFRotation(new float[0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0]);
Group2413.children[5] = OrientationInterpolator2419;

OrientationInterpolator OrientationInterpolator2420 = createNode("OrientationInterpolator");
OrientationInterpolator2420.DEF = "Yaws_l_knee_RotationInterpolator";
OrientationInterpolator2420.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2420.keyValue = new MFRotation(new float[0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0]);
Group2413.children[6] = OrientationInterpolator2420;

OrientationInterpolator OrientationInterpolator2421 = createNode("OrientationInterpolator");
OrientationInterpolator2421.DEF = "Yaws_l_hip_RotationInterpolator";
OrientationInterpolator2421.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2421.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2413.children[7] = OrientationInterpolator2421;

OrientationInterpolator OrientationInterpolator2422 = createNode("OrientationInterpolator");
OrientationInterpolator2422.DEF = "Yaws_r_wrist_RotationInterpolator";
OrientationInterpolator2422.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2422.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2413.children[8] = OrientationInterpolator2422;

OrientationInterpolator OrientationInterpolator2423 = createNode("OrientationInterpolator");
OrientationInterpolator2423.DEF = "Yaws_r_elbow_RotationInterpolator";
OrientationInterpolator2423.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2423.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2413.children[9] = OrientationInterpolator2423;

OrientationInterpolator OrientationInterpolator2424 = createNode("OrientationInterpolator");
OrientationInterpolator2424.DEF = "Yaws_r_shoulder_RotationInterpolator";
OrientationInterpolator2424.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2424.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2413.children[10] = OrientationInterpolator2424;

OrientationInterpolator OrientationInterpolator2425 = createNode("OrientationInterpolator");
OrientationInterpolator2425.DEF = "Yaws_l_wrist_RotationInterpolator";
OrientationInterpolator2425.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2425.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2413.children[11] = OrientationInterpolator2425;

OrientationInterpolator OrientationInterpolator2426 = createNode("OrientationInterpolator");
OrientationInterpolator2426.DEF = "Yaws_l_elbow_RotationInterpolator";
OrientationInterpolator2426.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2426.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2413.children[12] = OrientationInterpolator2426;

OrientationInterpolator OrientationInterpolator2427 = createNode("OrientationInterpolator");
OrientationInterpolator2427.DEF = "Yaws_l_shoulder_RotationInterpolator";
OrientationInterpolator2427.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2427.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2413.children[13] = OrientationInterpolator2427;

OrientationInterpolator OrientationInterpolator2428 = createNode("OrientationInterpolator");
OrientationInterpolator2428.DEF = "Yaws_head_RotationInterpolator";
OrientationInterpolator2428.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2428.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2413.children[14] = OrientationInterpolator2428;

OrientationInterpolator OrientationInterpolator2429 = createNode("OrientationInterpolator");
OrientationInterpolator2429.DEF = "Yaws_neck_RotationInterpolator";
OrientationInterpolator2429.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2429.keyValue = new MFRotation(new float[0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0]);
Group2413.children[15] = OrientationInterpolator2429;

OrientationInterpolator OrientationInterpolator2430 = createNode("OrientationInterpolator");
OrientationInterpolator2430.DEF = "Yaws_upper_body_RotationInterpolator";
OrientationInterpolator2430.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2430.keyValue = new MFRotation(new float[0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0]);
Group2413.children[16] = OrientationInterpolator2430;

OrientationInterpolator OrientationInterpolator2431 = createNode("OrientationInterpolator");
OrientationInterpolator2431.DEF = "Yaws_lower_body_RotationInterpolator";
OrientationInterpolator2431.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2431.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2413.children[17] = OrientationInterpolator2431;

OrientationInterpolator OrientationInterpolator2432 = createNode("OrientationInterpolator");
OrientationInterpolator2432.DEF = "Yaws_whole_body_RotationInterpolator";
OrientationInterpolator2432.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2432.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2413.children[18] = OrientationInterpolator2432;

PositionInterpolator PositionInterpolator2433 = createNode("PositionInterpolator");
PositionInterpolator2433.DEF = "Yaws_whole_body_TranslationInterpolator";
PositionInterpolator2433.key = new MFFloat(new float[0,0.5,1]);
PositionInterpolator2433.keyValue = new MFVec3f(new float[0,0,0,0,0,0,0,0,0]);
Group2413.children[19] = PositionInterpolator2433;

OrientationInterpolator OrientationInterpolator2434 = createNode("OrientationInterpolator");
OrientationInterpolator2434.DEF = "Yaw_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2434.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2434.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2413.children[20] = OrientationInterpolator2434;

OrientationInterpolator OrientationInterpolator2435 = createNode("OrientationInterpolator");
OrientationInterpolator2435.DEF = "Yaw_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2435.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2435.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2413.children[21] = OrientationInterpolator2435;

OrientationInterpolator OrientationInterpolator2436 = createNode("OrientationInterpolator");
OrientationInterpolator2436.DEF = "Yaw_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2436.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2436.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2413.children[22] = OrientationInterpolator2436;

OrientationInterpolator OrientationInterpolator2437 = createNode("OrientationInterpolator");
OrientationInterpolator2437.DEF = "Yaw_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2437.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2437.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2413.children[23] = OrientationInterpolator2437;

OrientationInterpolator OrientationInterpolator2438 = createNode("OrientationInterpolator");
OrientationInterpolator2438.DEF = "Yaw_sacroiliac_YawInterpolator";
OrientationInterpolator2438.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2438.keyValue = new MFRotation(new float[0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,0,0.24,0,-1,0,0.4,0,1,0,0]);
Group2413.children[24] = OrientationInterpolator2438;

OrientationInterpolator OrientationInterpolator2439 = createNode("OrientationInterpolator");
OrientationInterpolator2439.DEF = "Yaw_vl5_YawInterpolator";
OrientationInterpolator2439.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2439.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2413.children[25] = OrientationInterpolator2439;

OrientationInterpolator OrientationInterpolator2440 = createNode("OrientationInterpolator");
OrientationInterpolator2440.DEF = "Yaw_vc6_YawInterpolator";
OrientationInterpolator2440.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2440.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2413.children[26] = OrientationInterpolator2440;

OrientationInterpolator OrientationInterpolator2441 = createNode("OrientationInterpolator");
OrientationInterpolator2441.DEF = "Yaw_l_thumb1_PitchInterpolator";
OrientationInterpolator2441.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2441.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2413.children[27] = OrientationInterpolator2441;

OrientationInterpolator OrientationInterpolator2442 = createNode("OrientationInterpolator");
OrientationInterpolator2442.DEF = "Yaw_r_thumb1_PitchInterpolator";
OrientationInterpolator2442.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2442.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2413.children[28] = OrientationInterpolator2442;

ROUTE ROUTE2443 = createNode("ROUTE");
ROUTE2443.fromField = "fraction_changed";
ROUTE2443.fromNode = "YawTimer";
ROUTE2443.toField = "set_fraction";
ROUTE2443.toNode = "Yaws_r_ankle_RotationInterpolator";
Group2413.children[29] = ROUTE2443;

ROUTE ROUTE2444 = createNode("ROUTE");
ROUTE2444.fromField = "fraction_changed";
ROUTE2444.fromNode = "YawTimer";
ROUTE2444.toField = "set_fraction";
ROUTE2444.toNode = "Yaws_r_knee_RotationInterpolator";
Group2413.children[30] = ROUTE2444;

ROUTE ROUTE2445 = createNode("ROUTE");
ROUTE2445.fromField = "fraction_changed";
ROUTE2445.fromNode = "YawTimer";
ROUTE2445.toField = "set_fraction";
ROUTE2445.toNode = "Yaws_r_hip_RotationInterpolator";
Group2413.children[31] = ROUTE2445;

ROUTE ROUTE2446 = createNode("ROUTE");
ROUTE2446.fromField = "fraction_changed";
ROUTE2446.fromNode = "YawTimer";
ROUTE2446.toField = "set_fraction";
ROUTE2446.toNode = "Yaws_l_ankle_RotationInterpolator";
Group2413.children[32] = ROUTE2446;

ROUTE ROUTE2447 = createNode("ROUTE");
ROUTE2447.fromField = "fraction_changed";
ROUTE2447.fromNode = "YawTimer";
ROUTE2447.toField = "set_fraction";
ROUTE2447.toNode = "Yaws_l_knee_RotationInterpolator";
Group2413.children[33] = ROUTE2447;

ROUTE ROUTE2448 = createNode("ROUTE");
ROUTE2448.fromField = "fraction_changed";
ROUTE2448.fromNode = "YawTimer";
ROUTE2448.toField = "set_fraction";
ROUTE2448.toNode = "Yaws_l_hip_RotationInterpolator";
Group2413.children[34] = ROUTE2448;

ROUTE ROUTE2449 = createNode("ROUTE");
ROUTE2449.fromField = "fraction_changed";
ROUTE2449.fromNode = "YawTimer";
ROUTE2449.toField = "set_fraction";
ROUTE2449.toNode = "Yaws_lower_body_RotationInterpolator";
Group2413.children[35] = ROUTE2449;

ROUTE ROUTE2450 = createNode("ROUTE");
ROUTE2450.fromField = "fraction_changed";
ROUTE2450.fromNode = "YawTimer";
ROUTE2450.toField = "set_fraction";
ROUTE2450.toNode = "Yaws_r_wrist_RotationInterpolator";
Group2413.children[36] = ROUTE2450;

ROUTE ROUTE2451 = createNode("ROUTE");
ROUTE2451.fromField = "fraction_changed";
ROUTE2451.fromNode = "YawTimer";
ROUTE2451.toField = "set_fraction";
ROUTE2451.toNode = "Yaws_r_elbow_RotationInterpolator";
Group2413.children[37] = ROUTE2451;

ROUTE ROUTE2452 = createNode("ROUTE");
ROUTE2452.fromField = "fraction_changed";
ROUTE2452.fromNode = "YawTimer";
ROUTE2452.toField = "set_fraction";
ROUTE2452.toNode = "Yaws_r_shoulder_RotationInterpolator";
Group2413.children[38] = ROUTE2452;

ROUTE ROUTE2453 = createNode("ROUTE");
ROUTE2453.fromField = "fraction_changed";
ROUTE2453.fromNode = "YawTimer";
ROUTE2453.toField = "set_fraction";
ROUTE2453.toNode = "Yaws_l_wrist_RotationInterpolator";
Group2413.children[39] = ROUTE2453;

ROUTE ROUTE2454 = createNode("ROUTE");
ROUTE2454.fromField = "fraction_changed";
ROUTE2454.fromNode = "YawTimer";
ROUTE2454.toField = "set_fraction";
ROUTE2454.toNode = "Yaws_l_elbow_RotationInterpolator";
Group2413.children[40] = ROUTE2454;

ROUTE ROUTE2455 = createNode("ROUTE");
ROUTE2455.fromField = "fraction_changed";
ROUTE2455.fromNode = "YawTimer";
ROUTE2455.toField = "set_fraction";
ROUTE2455.toNode = "Yaws_l_shoulder_RotationInterpolator";
Group2413.children[41] = ROUTE2455;

ROUTE ROUTE2456 = createNode("ROUTE");
ROUTE2456.fromField = "fraction_changed";
ROUTE2456.fromNode = "YawTimer";
ROUTE2456.toField = "set_fraction";
ROUTE2456.toNode = "Yaws_head_RotationInterpolator";
Group2413.children[42] = ROUTE2456;

ROUTE ROUTE2457 = createNode("ROUTE");
ROUTE2457.fromField = "fraction_changed";
ROUTE2457.fromNode = "YawTimer";
ROUTE2457.toField = "set_fraction";
ROUTE2457.toNode = "Yaws_neck_RotationInterpolator";
Group2413.children[43] = ROUTE2457;

ROUTE ROUTE2458 = createNode("ROUTE");
ROUTE2458.fromField = "fraction_changed";
ROUTE2458.fromNode = "YawTimer";
ROUTE2458.toField = "set_fraction";
ROUTE2458.toNode = "Yaws_upper_body_RotationInterpolator";
Group2413.children[44] = ROUTE2458;

ROUTE ROUTE2459 = createNode("ROUTE");
ROUTE2459.fromField = "fraction_changed";
ROUTE2459.fromNode = "YawTimer";
ROUTE2459.toField = "set_fraction";
ROUTE2459.toNode = "Yaws_whole_body_RotationInterpolator";
Group2413.children[45] = ROUTE2459;

ROUTE ROUTE2460 = createNode("ROUTE");
ROUTE2460.fromField = "fraction_changed";
ROUTE2460.fromNode = "YawTimer";
ROUTE2460.toField = "set_fraction";
ROUTE2460.toNode = "Yaws_whole_body_TranslationInterpolator";
Group2413.children[46] = ROUTE2460;

ROUTE ROUTE2461 = createNode("ROUTE");
ROUTE2461.fromField = "fraction_changed";
ROUTE2461.fromNode = "YawTimer";
ROUTE2461.toField = "set_fraction";
ROUTE2461.toNode = "Yaw_l_sternoclavicular_RollInterpolator";
Group2413.children[47] = ROUTE2461;

ROUTE ROUTE2462 = createNode("ROUTE");
ROUTE2462.fromField = "fraction_changed";
ROUTE2462.fromNode = "YawTimer";
ROUTE2462.toField = "set_fraction";
ROUTE2462.toNode = "Yaw_l_acromioclavicular_RollInterpolator";
Group2413.children[48] = ROUTE2462;

ROUTE ROUTE2463 = createNode("ROUTE");
ROUTE2463.fromField = "fraction_changed";
ROUTE2463.fromNode = "YawTimer";
ROUTE2463.toField = "set_fraction";
ROUTE2463.toNode = "Yaw_r_sternoclavicular_RollInterpolator";
Group2413.children[49] = ROUTE2463;

ROUTE ROUTE2464 = createNode("ROUTE");
ROUTE2464.fromField = "fraction_changed";
ROUTE2464.fromNode = "YawTimer";
ROUTE2464.toField = "set_fraction";
ROUTE2464.toNode = "Yaw_r_acromioclavicular_RollInterpolator";
Group2413.children[50] = ROUTE2464;

ROUTE ROUTE2465 = createNode("ROUTE");
ROUTE2465.fromField = "fraction_changed";
ROUTE2465.fromNode = "YawTimer";
ROUTE2465.toField = "set_fraction";
ROUTE2465.toNode = "Yaw_r_metatarsal_PitchInterpolator";
Group2413.children[51] = ROUTE2465;

ROUTE ROUTE2466 = createNode("ROUTE");
ROUTE2466.fromField = "fraction_changed";
ROUTE2466.fromNode = "YawTimer";
ROUTE2466.toField = "set_fraction";
ROUTE2466.toNode = "Yaw_sacroiliac_YawInterpolator";
Group2413.children[52] = ROUTE2466;

ROUTE ROUTE2467 = createNode("ROUTE");
ROUTE2467.fromField = "fraction_changed";
ROUTE2467.fromNode = "YawTimer";
ROUTE2467.toField = "set_fraction";
ROUTE2467.toNode = "Yaw_vl5_YawInterpolator";
Group2413.children[53] = ROUTE2467;

ROUTE ROUTE2468 = createNode("ROUTE");
ROUTE2468.fromField = "fraction_changed";
ROUTE2468.fromNode = "YawTimer";
ROUTE2468.toField = "set_fraction";
ROUTE2468.toNode = "Yaw_vc6_YawInterpolator";
Group2413.children[54] = ROUTE2468;

ROUTE ROUTE2469 = createNode("ROUTE");
ROUTE2469.fromField = "fraction_changed";
ROUTE2469.fromNode = "YawTimer";
ROUTE2469.toField = "set_fraction";
ROUTE2469.toNode = "Yaw_l_thumb1_PitchInterpolator";
Group2413.children[55] = ROUTE2469;

ROUTE ROUTE2470 = createNode("ROUTE");
ROUTE2470.fromField = "fraction_changed";
ROUTE2470.fromNode = "YawTimer";
ROUTE2470.toField = "set_fraction";
ROUTE2470.toNode = "Yaw_r_thumb1_PitchInterpolator";
Group2413.children[56] = ROUTE2470;

ROUTE ROUTE2471 = createNode("ROUTE");
ROUTE2471.fromField = "value_changed";
ROUTE2471.fromNode = "Yaws_r_ankle_RotationInterpolator";
ROUTE2471.toField = "rotation";
ROUTE2471.toNode = "hanim_r_ankle";
Group2413.children[57] = ROUTE2471;

ROUTE ROUTE2472 = createNode("ROUTE");
ROUTE2472.fromField = "value_changed";
ROUTE2472.fromNode = "Yaws_r_knee_RotationInterpolator";
ROUTE2472.toField = "rotation";
ROUTE2472.toNode = "hanim_r_knee";
Group2413.children[58] = ROUTE2472;

ROUTE ROUTE2473 = createNode("ROUTE");
ROUTE2473.fromField = "value_changed";
ROUTE2473.fromNode = "Yaws_r_hip_RotationInterpolator";
ROUTE2473.toField = "rotation";
ROUTE2473.toNode = "hanim_r_hip";
Group2413.children[59] = ROUTE2473;

ROUTE ROUTE2474 = createNode("ROUTE");
ROUTE2474.fromField = "value_changed";
ROUTE2474.fromNode = "Yaws_l_ankle_RotationInterpolator";
ROUTE2474.toField = "rotation";
ROUTE2474.toNode = "hanim_l_ankle";
Group2413.children[60] = ROUTE2474;

ROUTE ROUTE2475 = createNode("ROUTE");
ROUTE2475.fromField = "value_changed";
ROUTE2475.fromNode = "Yaws_l_knee_RotationInterpolator";
ROUTE2475.toField = "rotation";
ROUTE2475.toNode = "hanim_l_knee";
Group2413.children[61] = ROUTE2475;

ROUTE ROUTE2476 = createNode("ROUTE");
ROUTE2476.fromField = "value_changed";
ROUTE2476.fromNode = "Yaws_l_hip_RotationInterpolator";
ROUTE2476.toField = "rotation";
ROUTE2476.toNode = "hanim_l_hip";
Group2413.children[62] = ROUTE2476;

ROUTE ROUTE2477 = createNode("ROUTE");
ROUTE2477.fromField = "value_changed";
ROUTE2477.fromNode = "Yaws_lower_body_RotationInterpolator";
ROUTE2477.toField = "rotation";
ROUTE2477.toNode = "hanim_sacroiliac";
Group2413.children[63] = ROUTE2477;

ROUTE ROUTE2478 = createNode("ROUTE");
ROUTE2478.fromField = "value_changed";
ROUTE2478.fromNode = "Yaws_r_wrist_RotationInterpolator";
ROUTE2478.toField = "rotation";
ROUTE2478.toNode = "hanim_r_wrist";
Group2413.children[64] = ROUTE2478;

ROUTE ROUTE2479 = createNode("ROUTE");
ROUTE2479.fromField = "value_changed";
ROUTE2479.fromNode = "Yaws_r_elbow_RotationInterpolator";
ROUTE2479.toField = "rotation";
ROUTE2479.toNode = "hanim_r_elbow";
Group2413.children[65] = ROUTE2479;

ROUTE ROUTE2480 = createNode("ROUTE");
ROUTE2480.fromField = "value_changed";
ROUTE2480.fromNode = "Yaws_r_shoulder_RotationInterpolator";
ROUTE2480.toField = "rotation";
ROUTE2480.toNode = "hanim_r_shoulder";
Group2413.children[66] = ROUTE2480;

ROUTE ROUTE2481 = createNode("ROUTE");
ROUTE2481.fromField = "value_changed";
ROUTE2481.fromNode = "Yaws_l_wrist_RotationInterpolator";
ROUTE2481.toField = "rotation";
ROUTE2481.toNode = "hanim_l_wrist";
Group2413.children[67] = ROUTE2481;

ROUTE ROUTE2482 = createNode("ROUTE");
ROUTE2482.fromField = "value_changed";
ROUTE2482.fromNode = "Yaws_l_elbow_RotationInterpolator";
ROUTE2482.toField = "rotation";
ROUTE2482.toNode = "hanim_l_elbow";
Group2413.children[68] = ROUTE2482;

ROUTE ROUTE2483 = createNode("ROUTE");
ROUTE2483.fromField = "value_changed";
ROUTE2483.fromNode = "Yaws_l_shoulder_RotationInterpolator";
ROUTE2483.toField = "rotation";
ROUTE2483.toNode = "hanim_l_shoulder";
Group2413.children[69] = ROUTE2483;

ROUTE ROUTE2484 = createNode("ROUTE");
ROUTE2484.fromField = "value_changed";
ROUTE2484.fromNode = "Yaws_head_RotationInterpolator";
ROUTE2484.toField = "rotation";
ROUTE2484.toNode = "hanim_skullbase";
Group2413.children[70] = ROUTE2484;

ROUTE ROUTE2485 = createNode("ROUTE");
ROUTE2485.fromField = "value_changed";
ROUTE2485.fromNode = "Yaws_neck_RotationInterpolator";
ROUTE2485.toField = "rotation";
ROUTE2485.toNode = "hanim_vc4";
Group2413.children[71] = ROUTE2485;

ROUTE ROUTE2486 = createNode("ROUTE");
ROUTE2486.fromField = "value_changed";
ROUTE2486.fromNode = "Yaws_upper_body_RotationInterpolator";
ROUTE2486.toField = "rotation";
ROUTE2486.toNode = "hanim_vl1";
Group2413.children[72] = ROUTE2486;

ROUTE ROUTE2487 = createNode("ROUTE");
ROUTE2487.fromField = "value_changed";
ROUTE2487.fromNode = "Yaws_whole_body_RotationInterpolator";
ROUTE2487.toField = "rotation";
ROUTE2487.toNode = "hanim_humanoid_root";
Group2413.children[73] = ROUTE2487;

ROUTE ROUTE2488 = createNode("ROUTE");
ROUTE2488.fromField = "value_changed";
ROUTE2488.fromNode = "Yaws_whole_body_TranslationInterpolator";
ROUTE2488.toField = "translation";
ROUTE2488.toNode = "hanim_humanoid_root";
Group2413.children[74] = ROUTE2488;

ROUTE ROUTE2489 = createNode("ROUTE");
ROUTE2489.fromField = "value_changed";
ROUTE2489.fromNode = "Yaw_l_sternoclavicular_RollInterpolator";
ROUTE2489.toField = "rotation";
ROUTE2489.toNode = "hanim_l_sternoclavicular";
Group2413.children[75] = ROUTE2489;

ROUTE ROUTE2490 = createNode("ROUTE");
ROUTE2490.fromField = "value_changed";
ROUTE2490.fromNode = "Yaw_l_acromioclavicular_RollInterpolator";
ROUTE2490.toField = "rotation";
ROUTE2490.toNode = "hanim_l_acromioclavicular";
Group2413.children[76] = ROUTE2490;

ROUTE ROUTE2491 = createNode("ROUTE");
ROUTE2491.fromField = "value_changed";
ROUTE2491.fromNode = "Yaw_r_sternoclavicular_RollInterpolator";
ROUTE2491.toField = "rotation";
ROUTE2491.toNode = "hanim_r_sternoclavicular";
Group2413.children[77] = ROUTE2491;

ROUTE ROUTE2492 = createNode("ROUTE");
ROUTE2492.fromField = "value_changed";
ROUTE2492.fromNode = "Yaw_r_acromioclavicular_RollInterpolator";
ROUTE2492.toField = "rotation";
ROUTE2492.toNode = "hanim_r_acromioclavicular";
Group2413.children[78] = ROUTE2492;

ROUTE ROUTE2493 = createNode("ROUTE");
ROUTE2493.fromField = "value_changed";
ROUTE2493.fromNode = "Yaw_r_metatarsal_PitchInterpolator";
ROUTE2493.toField = "rotation";
ROUTE2493.toNode = "hanim_l_metatarsal";
Group2413.children[79] = ROUTE2493;

ROUTE ROUTE2494 = createNode("ROUTE");
ROUTE2494.fromField = "value_changed";
ROUTE2494.fromNode = "Yaw_r_metatarsal_PitchInterpolator";
ROUTE2494.toField = "rotation";
ROUTE2494.toNode = "hanim_r_metatarsal";
Group2413.children[80] = ROUTE2494;

ROUTE ROUTE2495 = createNode("ROUTE");
ROUTE2495.fromField = "value_changed";
ROUTE2495.fromNode = "Yaw_sacroiliac_YawInterpolator";
ROUTE2495.toField = "rotation";
ROUTE2495.toNode = "hanim_sacroiliac";
Group2413.children[81] = ROUTE2495;

ROUTE ROUTE2496 = createNode("ROUTE");
ROUTE2496.fromField = "value_changed";
ROUTE2496.fromNode = "Yaw_vl5_YawInterpolator";
ROUTE2496.toField = "rotation";
ROUTE2496.toNode = "hanim_vl5";
Group2413.children[82] = ROUTE2496;

ROUTE ROUTE2497 = createNode("ROUTE");
ROUTE2497.fromField = "value_changed";
ROUTE2497.fromNode = "Yaw_vc6_YawInterpolator";
ROUTE2497.toField = "rotation";
ROUTE2497.toNode = "hanim_vc6";
Group2413.children[83] = ROUTE2497;

ROUTE ROUTE2498 = createNode("ROUTE");
ROUTE2498.fromField = "value_changed";
ROUTE2498.fromNode = "Yaw_l_thumb1_PitchInterpolator";
ROUTE2498.toField = "rotation";
ROUTE2498.toNode = "hanim_l_thumb1";
Group2413.children[84] = ROUTE2498;

ROUTE ROUTE2499 = createNode("ROUTE");
ROUTE2499.fromField = "value_changed";
ROUTE2499.fromNode = "Yaw_r_thumb1_PitchInterpolator";
ROUTE2499.toField = "rotation";
ROUTE2499.toNode = "hanim_r_thumb1";
Group2413.children[85] = ROUTE2499;

children[16] = Group2413;

Group Group2500 = createNode("Group");
Group2500.DEF = "RollsAnimation";
TimeSensor TimeSensor2501 = createNode("TimeSensor");
TimeSensor2501.DEF = "RollTimer";
TimeSensor2501.cycleInterval = 5.73;
TimeSensor2501.loop = True;
Group2500.children = new MFNode();

Group2500.children[0] = TimeSensor2501;

OrientationInterpolator OrientationInterpolator2502 = createNode("OrientationInterpolator");
OrientationInterpolator2502.DEF = "Roll_r_metatarsal_PitchInterpolator";
OrientationInterpolator2502.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2502.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2500.children[1] = OrientationInterpolator2502;

OrientationInterpolator OrientationInterpolator2503 = createNode("OrientationInterpolator");
OrientationInterpolator2503.DEF = "Rolls_r_ankle_RotationInterpolator";
OrientationInterpolator2503.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2503.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group2500.children[2] = OrientationInterpolator2503;

OrientationInterpolator OrientationInterpolator2504 = createNode("OrientationInterpolator");
OrientationInterpolator2504.DEF = "Rolls_r_knee_RotationInterpolator";
OrientationInterpolator2504.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2504.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2500.children[3] = OrientationInterpolator2504;

OrientationInterpolator OrientationInterpolator2505 = createNode("OrientationInterpolator");
OrientationInterpolator2505.DEF = "Rolls_r_hip_RotationInterpolator";
OrientationInterpolator2505.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2505.keyValue = new MFRotation(new float[0,0,-1,0,0,0,-1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0]);
Group2500.children[4] = OrientationInterpolator2505;

OrientationInterpolator OrientationInterpolator2506 = createNode("OrientationInterpolator");
OrientationInterpolator2506.DEF = "Rolls_l_ankle_RotationInterpolator";
OrientationInterpolator2506.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2506.keyValue = new MFRotation(new float[0,0,1,0,0,0,-1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0]);
Group2500.children[5] = OrientationInterpolator2506;

OrientationInterpolator OrientationInterpolator2507 = createNode("OrientationInterpolator");
OrientationInterpolator2507.DEF = "Rolls_l_knee_RotationInterpolator";
OrientationInterpolator2507.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2507.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2500.children[6] = OrientationInterpolator2507;

OrientationInterpolator OrientationInterpolator2508 = createNode("OrientationInterpolator");
OrientationInterpolator2508.DEF = "Rolls_l_hip_RotationInterpolator";
OrientationInterpolator2508.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2508.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group2500.children[7] = OrientationInterpolator2508;

OrientationInterpolator OrientationInterpolator2509 = createNode("OrientationInterpolator");
OrientationInterpolator2509.DEF = "Rolls_r_wrist_RotationInterpolator";
OrientationInterpolator2509.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2509.keyValue = new MFRotation(new float[0,0,1,0,0,0,-1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group2500.children[8] = OrientationInterpolator2509;

OrientationInterpolator OrientationInterpolator2510 = createNode("OrientationInterpolator");
OrientationInterpolator2510.DEF = "Rolls_r_elbow_RotationInterpolator";
OrientationInterpolator2510.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2510.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2500.children[9] = OrientationInterpolator2510;

OrientationInterpolator OrientationInterpolator2511 = createNode("OrientationInterpolator");
OrientationInterpolator2511.DEF = "Rolls_r_shoulder_RotationInterpolator";
OrientationInterpolator2511.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2511.keyValue = new MFRotation(new float[0,0,1,0,0,0,-1,1.5,0,0,-1,3,0,0,-1,1.5,0,0,1,0]);
Group2500.children[10] = OrientationInterpolator2511;

OrientationInterpolator OrientationInterpolator2512 = createNode("OrientationInterpolator");
OrientationInterpolator2512.DEF = "Rolls_l_wrist_RotationInterpolator";
OrientationInterpolator2512.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2512.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0]);
Group2500.children[11] = OrientationInterpolator2512;

OrientationInterpolator OrientationInterpolator2513 = createNode("OrientationInterpolator");
OrientationInterpolator2513.DEF = "Rolls_l_elbow_RotationInterpolator";
OrientationInterpolator2513.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2513.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2500.children[12] = OrientationInterpolator2513;

OrientationInterpolator OrientationInterpolator2514 = createNode("OrientationInterpolator");
OrientationInterpolator2514.DEF = "Rolls_l_shoulder_RotationInterpolator";
OrientationInterpolator2514.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2514.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.5,0,0,1,3,0,0,1,1.5,0,0,1,0]);
Group2500.children[13] = OrientationInterpolator2514;

OrientationInterpolator OrientationInterpolator2515 = createNode("OrientationInterpolator");
OrientationInterpolator2515.DEF = "Rolls_head_RotationInterpolator";
OrientationInterpolator2515.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2515.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2500.children[14] = OrientationInterpolator2515;

OrientationInterpolator OrientationInterpolator2516 = createNode("OrientationInterpolator");
OrientationInterpolator2516.DEF = "Rolls_neck_RotationInterpolator";
OrientationInterpolator2516.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2516.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.25,0,0,1,0,0,0,-1,1.25,0,0,1,0]);
Group2500.children[15] = OrientationInterpolator2516;

OrientationInterpolator OrientationInterpolator2517 = createNode("OrientationInterpolator");
OrientationInterpolator2517.DEF = "Rolls_lower_body_RotationInterpolator";
OrientationInterpolator2517.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2517.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2500.children[16] = OrientationInterpolator2517;

OrientationInterpolator OrientationInterpolator2518 = createNode("OrientationInterpolator");
OrientationInterpolator2518.DEF = "Rolls_upper_body_RotationInterpolator";
OrientationInterpolator2518.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2518.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2500.children[17] = OrientationInterpolator2518;

OrientationInterpolator OrientationInterpolator2519 = createNode("OrientationInterpolator");
OrientationInterpolator2519.DEF = "Rolls_whole_body_RotationInterpolator";
OrientationInterpolator2519.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2519.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2500.children[18] = OrientationInterpolator2519;

PositionInterpolator PositionInterpolator2520 = createNode("PositionInterpolator");
PositionInterpolator2520.DEF = "Rolls_whole_body_TranslationInterpolator";
PositionInterpolator2520.key = new MFFloat(new float[0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]);
PositionInterpolator2520.keyValue = new MFVec3f(new float[0,0,0,0,-0.25,0,0,-0.8,0,0,-0.25,0,0,0,0,0,-0.25,0,0,-0.8,0,0,-0.25,0,0,0,0]);
Group2500.children[19] = PositionInterpolator2520;

OrientationInterpolator OrientationInterpolator2521 = createNode("OrientationInterpolator");
OrientationInterpolator2521.DEF = "Roll_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2521.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2521.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0]);
Group2500.children[20] = OrientationInterpolator2521;

OrientationInterpolator OrientationInterpolator2522 = createNode("OrientationInterpolator");
OrientationInterpolator2522.DEF = "Roll_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2522.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2522.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2500.children[21] = OrientationInterpolator2522;

OrientationInterpolator OrientationInterpolator2523 = createNode("OrientationInterpolator");
OrientationInterpolator2523.DEF = "Roll_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2523.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2523.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0]);
Group2500.children[22] = OrientationInterpolator2523;

OrientationInterpolator OrientationInterpolator2524 = createNode("OrientationInterpolator");
OrientationInterpolator2524.DEF = "Roll_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2524.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2524.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2500.children[23] = OrientationInterpolator2524;

OrientationInterpolator OrientationInterpolator2525 = createNode("OrientationInterpolator");
OrientationInterpolator2525.DEF = "Roll_sacroiliac_YawInterpolator";
OrientationInterpolator2525.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2525.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2500.children[24] = OrientationInterpolator2525;

OrientationInterpolator OrientationInterpolator2526 = createNode("OrientationInterpolator");
OrientationInterpolator2526.DEF = "Roll_vl5_YawInterpolator";
OrientationInterpolator2526.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2526.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2500.children[25] = OrientationInterpolator2526;

OrientationInterpolator OrientationInterpolator2527 = createNode("OrientationInterpolator");
OrientationInterpolator2527.DEF = "Roll_vc6_YawInterpolator";
OrientationInterpolator2527.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2527.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2500.children[26] = OrientationInterpolator2527;

OrientationInterpolator OrientationInterpolator2528 = createNode("OrientationInterpolator");
OrientationInterpolator2528.DEF = "Roll_l_thumb1_PitchInterpolator";
OrientationInterpolator2528.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2528.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2500.children[27] = OrientationInterpolator2528;

OrientationInterpolator OrientationInterpolator2529 = createNode("OrientationInterpolator");
OrientationInterpolator2529.DEF = "Roll_r_thumb1_PitchInterpolator";
OrientationInterpolator2529.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2529.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2500.children[28] = OrientationInterpolator2529;

ROUTE ROUTE2530 = createNode("ROUTE");
ROUTE2530.fromField = "fraction_changed";
ROUTE2530.fromNode = "RollTimer";
ROUTE2530.toField = "set_fraction";
ROUTE2530.toNode = "Rolls_r_ankle_RotationInterpolator";
Group2500.children[29] = ROUTE2530;

ROUTE ROUTE2531 = createNode("ROUTE");
ROUTE2531.fromField = "fraction_changed";
ROUTE2531.fromNode = "RollTimer";
ROUTE2531.toField = "set_fraction";
ROUTE2531.toNode = "Rolls_r_knee_RotationInterpolator";
Group2500.children[30] = ROUTE2531;

ROUTE ROUTE2532 = createNode("ROUTE");
ROUTE2532.fromField = "fraction_changed";
ROUTE2532.fromNode = "RollTimer";
ROUTE2532.toField = "set_fraction";
ROUTE2532.toNode = "Rolls_r_hip_RotationInterpolator";
Group2500.children[31] = ROUTE2532;

ROUTE ROUTE2533 = createNode("ROUTE");
ROUTE2533.fromField = "fraction_changed";
ROUTE2533.fromNode = "RollTimer";
ROUTE2533.toField = "set_fraction";
ROUTE2533.toNode = "Rolls_l_ankle_RotationInterpolator";
Group2500.children[32] = ROUTE2533;

ROUTE ROUTE2534 = createNode("ROUTE");
ROUTE2534.fromField = "fraction_changed";
ROUTE2534.fromNode = "RollTimer";
ROUTE2534.toField = "set_fraction";
ROUTE2534.toNode = "Rolls_l_knee_RotationInterpolator";
Group2500.children[33] = ROUTE2534;

ROUTE ROUTE2535 = createNode("ROUTE");
ROUTE2535.fromField = "fraction_changed";
ROUTE2535.fromNode = "RollTimer";
ROUTE2535.toField = "set_fraction";
ROUTE2535.toNode = "Rolls_l_hip_RotationInterpolator";
Group2500.children[34] = ROUTE2535;

ROUTE ROUTE2536 = createNode("ROUTE");
ROUTE2536.fromField = "fraction_changed";
ROUTE2536.fromNode = "RollTimer";
ROUTE2536.toField = "set_fraction";
ROUTE2536.toNode = "Rolls_lower_body_RotationInterpolator";
Group2500.children[35] = ROUTE2536;

ROUTE ROUTE2537 = createNode("ROUTE");
ROUTE2537.fromField = "fraction_changed";
ROUTE2537.fromNode = "RollTimer";
ROUTE2537.toField = "set_fraction";
ROUTE2537.toNode = "Rolls_r_wrist_RotationInterpolator";
Group2500.children[36] = ROUTE2537;

ROUTE ROUTE2538 = createNode("ROUTE");
ROUTE2538.fromField = "fraction_changed";
ROUTE2538.fromNode = "RollTimer";
ROUTE2538.toField = "set_fraction";
ROUTE2538.toNode = "Rolls_r_elbow_RotationInterpolator";
Group2500.children[37] = ROUTE2538;

ROUTE ROUTE2539 = createNode("ROUTE");
ROUTE2539.fromField = "fraction_changed";
ROUTE2539.fromNode = "RollTimer";
ROUTE2539.toField = "set_fraction";
ROUTE2539.toNode = "Rolls_r_shoulder_RotationInterpolator";
Group2500.children[38] = ROUTE2539;

ROUTE ROUTE2540 = createNode("ROUTE");
ROUTE2540.fromField = "fraction_changed";
ROUTE2540.fromNode = "RollTimer";
ROUTE2540.toField = "set_fraction";
ROUTE2540.toNode = "Rolls_l_wrist_RotationInterpolator";
Group2500.children[39] = ROUTE2540;

ROUTE ROUTE2541 = createNode("ROUTE");
ROUTE2541.fromField = "fraction_changed";
ROUTE2541.fromNode = "RollTimer";
ROUTE2541.toField = "set_fraction";
ROUTE2541.toNode = "Rolls_l_elbow_RotationInterpolator";
Group2500.children[40] = ROUTE2541;

ROUTE ROUTE2542 = createNode("ROUTE");
ROUTE2542.fromField = "fraction_changed";
ROUTE2542.fromNode = "RollTimer";
ROUTE2542.toField = "set_fraction";
ROUTE2542.toNode = "Rolls_l_shoulder_RotationInterpolator";
Group2500.children[41] = ROUTE2542;

ROUTE ROUTE2543 = createNode("ROUTE");
ROUTE2543.fromField = "fraction_changed";
ROUTE2543.fromNode = "RollTimer";
ROUTE2543.toField = "set_fraction";
ROUTE2543.toNode = "Rolls_head_RotationInterpolator";
Group2500.children[42] = ROUTE2543;

ROUTE ROUTE2544 = createNode("ROUTE");
ROUTE2544.fromField = "fraction_changed";
ROUTE2544.fromNode = "RollTimer";
ROUTE2544.toField = "set_fraction";
ROUTE2544.toNode = "Rolls_neck_RotationInterpolator";
Group2500.children[43] = ROUTE2544;

ROUTE ROUTE2545 = createNode("ROUTE");
ROUTE2545.fromField = "fraction_changed";
ROUTE2545.fromNode = "RollTimer";
ROUTE2545.toField = "set_fraction";
ROUTE2545.toNode = "Rolls_upper_body_RotationInterpolator";
Group2500.children[44] = ROUTE2545;

ROUTE ROUTE2546 = createNode("ROUTE");
ROUTE2546.fromField = "fraction_changed";
ROUTE2546.fromNode = "RollTimer";
ROUTE2546.toField = "set_fraction";
ROUTE2546.toNode = "Rolls_whole_body_RotationInterpolator";
Group2500.children[45] = ROUTE2546;

ROUTE ROUTE2547 = createNode("ROUTE");
ROUTE2547.fromField = "fraction_changed";
ROUTE2547.fromNode = "RollTimer";
ROUTE2547.toField = "set_fraction";
ROUTE2547.toNode = "Rolls_whole_body_TranslationInterpolator";
Group2500.children[46] = ROUTE2547;

ROUTE ROUTE2548 = createNode("ROUTE");
ROUTE2548.fromField = "fraction_changed";
ROUTE2548.fromNode = "RollTimer";
ROUTE2548.toField = "set_fraction";
ROUTE2548.toNode = "Roll_l_sternoclavicular_RollInterpolator";
Group2500.children[47] = ROUTE2548;

ROUTE ROUTE2549 = createNode("ROUTE");
ROUTE2549.fromField = "fraction_changed";
ROUTE2549.fromNode = "RollTimer";
ROUTE2549.toField = "set_fraction";
ROUTE2549.toNode = "Roll_l_acromioclavicular_RollInterpolator";
Group2500.children[48] = ROUTE2549;

ROUTE ROUTE2550 = createNode("ROUTE");
ROUTE2550.fromField = "fraction_changed";
ROUTE2550.fromNode = "RollTimer";
ROUTE2550.toField = "set_fraction";
ROUTE2550.toNode = "Roll_r_sternoclavicular_RollInterpolator";
Group2500.children[49] = ROUTE2550;

ROUTE ROUTE2551 = createNode("ROUTE");
ROUTE2551.fromField = "fraction_changed";
ROUTE2551.fromNode = "RollTimer";
ROUTE2551.toField = "set_fraction";
ROUTE2551.toNode = "Roll_r_acromioclavicular_RollInterpolator";
Group2500.children[50] = ROUTE2551;

ROUTE ROUTE2552 = createNode("ROUTE");
ROUTE2552.fromField = "fraction_changed";
ROUTE2552.fromNode = "RollTimer";
ROUTE2552.toField = "set_fraction";
ROUTE2552.toNode = "Roll_r_metatarsal_PitchInterpolator";
Group2500.children[51] = ROUTE2552;

ROUTE ROUTE2553 = createNode("ROUTE");
ROUTE2553.fromField = "fraction_changed";
ROUTE2553.fromNode = "RollTimer";
ROUTE2553.toField = "set_fraction";
ROUTE2553.toNode = "Roll_sacroiliac_YawInterpolator";
Group2500.children[52] = ROUTE2553;

ROUTE ROUTE2554 = createNode("ROUTE");
ROUTE2554.fromField = "fraction_changed";
ROUTE2554.fromNode = "RollTimer";
ROUTE2554.toField = "set_fraction";
ROUTE2554.toNode = "Roll_vl5_YawInterpolator";
Group2500.children[53] = ROUTE2554;

ROUTE ROUTE2555 = createNode("ROUTE");
ROUTE2555.fromField = "fraction_changed";
ROUTE2555.fromNode = "RollTimer";
ROUTE2555.toField = "set_fraction";
ROUTE2555.toNode = "Roll_vc6_YawInterpolator";
Group2500.children[54] = ROUTE2555;

ROUTE ROUTE2556 = createNode("ROUTE");
ROUTE2556.fromField = "fraction_changed";
ROUTE2556.fromNode = "RollTimer";
ROUTE2556.toField = "set_fraction";
ROUTE2556.toNode = "Roll_l_thumb1_PitchInterpolator";
Group2500.children[55] = ROUTE2556;

ROUTE ROUTE2557 = createNode("ROUTE");
ROUTE2557.fromField = "fraction_changed";
ROUTE2557.fromNode = "RollTimer";
ROUTE2557.toField = "set_fraction";
ROUTE2557.toNode = "Roll_r_thumb1_PitchInterpolator";
Group2500.children[56] = ROUTE2557;

ROUTE ROUTE2558 = createNode("ROUTE");
ROUTE2558.fromField = "value_changed";
ROUTE2558.fromNode = "Rolls_r_ankle_RotationInterpolator";
ROUTE2558.toField = "rotation";
ROUTE2558.toNode = "hanim_r_ankle";
Group2500.children[57] = ROUTE2558;

ROUTE ROUTE2559 = createNode("ROUTE");
ROUTE2559.fromField = "value_changed";
ROUTE2559.fromNode = "Rolls_r_knee_RotationInterpolator";
ROUTE2559.toField = "rotation";
ROUTE2559.toNode = "hanim_r_knee";
Group2500.children[58] = ROUTE2559;

ROUTE ROUTE2560 = createNode("ROUTE");
ROUTE2560.fromField = "value_changed";
ROUTE2560.fromNode = "Rolls_r_hip_RotationInterpolator";
ROUTE2560.toField = "rotation";
ROUTE2560.toNode = "hanim_r_hip";
Group2500.children[59] = ROUTE2560;

ROUTE ROUTE2561 = createNode("ROUTE");
ROUTE2561.fromField = "value_changed";
ROUTE2561.fromNode = "Rolls_l_ankle_RotationInterpolator";
ROUTE2561.toField = "rotation";
ROUTE2561.toNode = "hanim_l_ankle";
Group2500.children[60] = ROUTE2561;

ROUTE ROUTE2562 = createNode("ROUTE");
ROUTE2562.fromField = "value_changed";
ROUTE2562.fromNode = "Rolls_l_knee_RotationInterpolator";
ROUTE2562.toField = "rotation";
ROUTE2562.toNode = "hanim_l_knee";
Group2500.children[61] = ROUTE2562;

ROUTE ROUTE2563 = createNode("ROUTE");
ROUTE2563.fromField = "value_changed";
ROUTE2563.fromNode = "Rolls_l_hip_RotationInterpolator";
ROUTE2563.toField = "rotation";
ROUTE2563.toNode = "hanim_l_hip";
Group2500.children[62] = ROUTE2563;

ROUTE ROUTE2564 = createNode("ROUTE");
ROUTE2564.fromField = "value_changed";
ROUTE2564.fromNode = "Rolls_lower_body_RotationInterpolator";
ROUTE2564.toField = "rotation";
ROUTE2564.toNode = "hanim_sacroiliac";
Group2500.children[63] = ROUTE2564;

ROUTE ROUTE2565 = createNode("ROUTE");
ROUTE2565.fromField = "value_changed";
ROUTE2565.fromNode = "Rolls_r_wrist_RotationInterpolator";
ROUTE2565.toField = "rotation";
ROUTE2565.toNode = "hanim_r_wrist";
Group2500.children[64] = ROUTE2565;

ROUTE ROUTE2566 = createNode("ROUTE");
ROUTE2566.fromField = "value_changed";
ROUTE2566.fromNode = "Rolls_r_elbow_RotationInterpolator";
ROUTE2566.toField = "rotation";
ROUTE2566.toNode = "hanim_r_elbow";
Group2500.children[65] = ROUTE2566;

ROUTE ROUTE2567 = createNode("ROUTE");
ROUTE2567.fromField = "value_changed";
ROUTE2567.fromNode = "Rolls_r_shoulder_RotationInterpolator";
ROUTE2567.toField = "rotation";
ROUTE2567.toNode = "hanim_r_shoulder";
Group2500.children[66] = ROUTE2567;

ROUTE ROUTE2568 = createNode("ROUTE");
ROUTE2568.fromField = "value_changed";
ROUTE2568.fromNode = "Rolls_l_wrist_RotationInterpolator";
ROUTE2568.toField = "rotation";
ROUTE2568.toNode = "hanim_l_wrist";
Group2500.children[67] = ROUTE2568;

ROUTE ROUTE2569 = createNode("ROUTE");
ROUTE2569.fromField = "value_changed";
ROUTE2569.fromNode = "Rolls_l_elbow_RotationInterpolator";
ROUTE2569.toField = "rotation";
ROUTE2569.toNode = "hanim_l_elbow";
Group2500.children[68] = ROUTE2569;

ROUTE ROUTE2570 = createNode("ROUTE");
ROUTE2570.fromField = "value_changed";
ROUTE2570.fromNode = "Rolls_l_shoulder_RotationInterpolator";
ROUTE2570.toField = "rotation";
ROUTE2570.toNode = "hanim_l_shoulder";
Group2500.children[69] = ROUTE2570;

ROUTE ROUTE2571 = createNode("ROUTE");
ROUTE2571.fromField = "value_changed";
ROUTE2571.fromNode = "Rolls_head_RotationInterpolator";
ROUTE2571.toField = "rotation";
ROUTE2571.toNode = "hanim_skullbase";
Group2500.children[70] = ROUTE2571;

ROUTE ROUTE2572 = createNode("ROUTE");
ROUTE2572.fromField = "value_changed";
ROUTE2572.fromNode = "Rolls_neck_RotationInterpolator";
ROUTE2572.toField = "rotation";
ROUTE2572.toNode = "hanim_vc4";
Group2500.children[71] = ROUTE2572;

ROUTE ROUTE2573 = createNode("ROUTE");
ROUTE2573.fromField = "value_changed";
ROUTE2573.fromNode = "Rolls_upper_body_RotationInterpolator";
ROUTE2573.toField = "rotation";
ROUTE2573.toNode = "hanim_vl1";
Group2500.children[72] = ROUTE2573;

ROUTE ROUTE2574 = createNode("ROUTE");
ROUTE2574.fromField = "value_changed";
ROUTE2574.fromNode = "Rolls_whole_body_RotationInterpolator";
ROUTE2574.toField = "rotation";
ROUTE2574.toNode = "hanim_humanoid_root";
Group2500.children[73] = ROUTE2574;

ROUTE ROUTE2575 = createNode("ROUTE");
ROUTE2575.fromField = "value_changed";
ROUTE2575.fromNode = "Rolls_whole_body_TranslationInterpolator";
ROUTE2575.toField = "translation";
ROUTE2575.toNode = "hanim_humanoid_root";
Group2500.children[74] = ROUTE2575;

ROUTE ROUTE2576 = createNode("ROUTE");
ROUTE2576.fromField = "value_changed";
ROUTE2576.fromNode = "Roll_l_sternoclavicular_RollInterpolator";
ROUTE2576.toField = "rotation";
ROUTE2576.toNode = "hanim_l_sternoclavicular";
Group2500.children[75] = ROUTE2576;

ROUTE ROUTE2577 = createNode("ROUTE");
ROUTE2577.fromField = "value_changed";
ROUTE2577.fromNode = "Roll_l_acromioclavicular_RollInterpolator";
ROUTE2577.toField = "rotation";
ROUTE2577.toNode = "hanim_l_acromioclavicular";
Group2500.children[76] = ROUTE2577;

ROUTE ROUTE2578 = createNode("ROUTE");
ROUTE2578.fromField = "value_changed";
ROUTE2578.fromNode = "Roll_r_sternoclavicular_RollInterpolator";
ROUTE2578.toField = "rotation";
ROUTE2578.toNode = "hanim_r_sternoclavicular";
Group2500.children[77] = ROUTE2578;

ROUTE ROUTE2579 = createNode("ROUTE");
ROUTE2579.fromField = "value_changed";
ROUTE2579.fromNode = "Roll_r_acromioclavicular_RollInterpolator";
ROUTE2579.toField = "rotation";
ROUTE2579.toNode = "hanim_r_acromioclavicular";
Group2500.children[78] = ROUTE2579;

ROUTE ROUTE2580 = createNode("ROUTE");
ROUTE2580.fromField = "value_changed";
ROUTE2580.fromNode = "Roll_r_metatarsal_PitchInterpolator";
ROUTE2580.toField = "rotation";
ROUTE2580.toNode = "hanim_l_metatarsal";
Group2500.children[79] = ROUTE2580;

ROUTE ROUTE2581 = createNode("ROUTE");
ROUTE2581.fromField = "value_changed";
ROUTE2581.fromNode = "Roll_r_metatarsal_PitchInterpolator";
ROUTE2581.toField = "rotation";
ROUTE2581.toNode = "hanim_r_metatarsal";
Group2500.children[80] = ROUTE2581;

ROUTE ROUTE2582 = createNode("ROUTE");
ROUTE2582.fromField = "value_changed";
ROUTE2582.fromNode = "Roll_sacroiliac_YawInterpolator";
ROUTE2582.toField = "rotation";
ROUTE2582.toNode = "hanim_sacroiliac";
Group2500.children[81] = ROUTE2582;

ROUTE ROUTE2583 = createNode("ROUTE");
ROUTE2583.fromField = "value_changed";
ROUTE2583.fromNode = "Roll_vl5_YawInterpolator";
ROUTE2583.toField = "rotation";
ROUTE2583.toNode = "hanim_vl5";
Group2500.children[82] = ROUTE2583;

ROUTE ROUTE2584 = createNode("ROUTE");
ROUTE2584.fromField = "value_changed";
ROUTE2584.fromNode = "Roll_vc6_YawInterpolator";
ROUTE2584.toField = "rotation";
ROUTE2584.toNode = "hanim_vc6";
Group2500.children[83] = ROUTE2584;

ROUTE ROUTE2585 = createNode("ROUTE");
ROUTE2585.fromField = "value_changed";
ROUTE2585.fromNode = "Roll_l_thumb1_PitchInterpolator";
ROUTE2585.toField = "rotation";
ROUTE2585.toNode = "hanim_l_thumb1";
Group2500.children[84] = ROUTE2585;

ROUTE ROUTE2586 = createNode("ROUTE");
ROUTE2586.fromField = "value_changed";
ROUTE2586.fromNode = "Roll_r_thumb1_PitchInterpolator";
ROUTE2586.toField = "rotation";
ROUTE2586.toNode = "hanim_r_thumb1";
Group2500.children[85] = ROUTE2586;

children[17] = Group2500;

Group Group2587 = createNode("Group");
Group2587.DEF = "WalkAnimation";
TimeSensor TimeSensor2588 = createNode("TimeSensor");
TimeSensor2588.DEF = "WalkTimer";
TimeSensor2588.cycleInterval = 1.73;
TimeSensor2588.loop = True;
Group2587.children = new MFNode();

Group2587.children[0] = TimeSensor2588;

OrientationInterpolator OrientationInterpolator2589 = createNode("OrientationInterpolator");
OrientationInterpolator2589.DEF = "Walk_r_metatarsal_PitchInterpolator";
OrientationInterpolator2589.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2589.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2587.children[1] = OrientationInterpolator2589;

OrientationInterpolator OrientationInterpolator2590 = createNode("OrientationInterpolator");
OrientationInterpolator2590.DEF = "Walk_r_ankle_RotationInterpolator";
OrientationInterpolator2590.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]);
OrientationInterpolator2590.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.3533,-1,0,0,0.1072,1,0,0,0.2612,1,0,0,0.1268,-1,0,0,0.01793,-1,0,0,0.05824,-1,0,0,0.2398,-1,0,0,0.35,-1,0,0,0.3322,0,0,1,0]);
Group2587.children[2] = OrientationInterpolator2590;

OrientationInterpolator OrientationInterpolator2591 = createNode("OrientationInterpolator");
OrientationInterpolator2591.DEF = "Walk_r_knee_RotationInterpolator";
OrientationInterpolator2591.key = new MFFloat(new float[0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator2591.keyValue = new MFRotation(new float[1,0,0,0.8573,1,0,0,0.8926,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,0,0,0.09354,1,0,0,0.08558,1,0,0,0.2475,1,0,0,0.8573]);
Group2587.children[3] = OrientationInterpolator2591;

OrientationInterpolator OrientationInterpolator2592 = createNode("OrientationInterpolator");
OrientationInterpolator2592.DEF = "Walk_r_hip_RotationInterpolator";
OrientationInterpolator2592.key = new MFFloat(new float[0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator2592.keyValue = new MFRotation(new float[-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9911,-0.03541,-0.1286,0.5419,-0.9131,-0.06243,-0.403,0.3361,-0.4306,-0.07962,-0.899,0.07038,1,0,0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481]);
Group2587.children[4] = OrientationInterpolator2592;

OrientationInterpolator OrientationInterpolator2593 = createNode("OrientationInterpolator");
OrientationInterpolator2593.DEF = "Walk_l_ankle_RotationInterpolator";
OrientationInterpolator2593.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.6667,0.9167,1]);
OrientationInterpolator2593.keyValue = new MFRotation(new float[-1,0,0,0.06714,-1,0,0,0.2152,-1,0,0,0.3184,-1,0,0,0.4717,-1,0,0,0.2912,1,0,0,0.1222,-1,0,0,0.06714]);
Group2587.children[5] = OrientationInterpolator2593;

OrientationInterpolator OrientationInterpolator2594 = createNode("OrientationInterpolator");
OrientationInterpolator2594.DEF = "Walk_l_knee_RotationInterpolator";
OrientationInterpolator2594.key = new MFFloat(new float[0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator2594.keyValue = new MFRotation(new float[1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.08678,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.09961,1,0,0,0.3942,1,0,0,0.3226]);
Group2587.children[6] = OrientationInterpolator2594;

OrientationInterpolator OrientationInterpolator2595 = createNode("OrientationInterpolator");
OrientationInterpolator2595.DEF = "Walk_l_hip_RotationInterpolator";
OrientationInterpolator2595.key = new MFFloat(new float[0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator2595.keyValue = new MFRotation(new float[-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-0.7018,-0.03223,-0.7117,0.1289,-1,0,0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865]);
Group2587.children[7] = OrientationInterpolator2595;

OrientationInterpolator OrientationInterpolator2596 = createNode("OrientationInterpolator");
OrientationInterpolator2596.DEF = "Walk_lower_body_RotationInterpolator";
OrientationInterpolator2596.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2596.keyValue = new MFRotation(new float[0,0,-1,0.1056,0,0,1,0.09018,0,0,-1,0.1056]);
Group2587.children[8] = OrientationInterpolator2596;

OrientationInterpolator OrientationInterpolator2597 = createNode("OrientationInterpolator");
OrientationInterpolator2597.DEF = "Walk_r_wrist_RotationInterpolator";
OrientationInterpolator2597.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator2597.keyValue = new MFRotation(new float[-0.8129,0.4759,-0.3357,0.1346,0.1533,-0.9878,0.02582,0.3902,-0.5701,0.7604,-0.311,0.366,-0.8129,0.4759,-0.3357,0.1346]);
Group2587.children[9] = OrientationInterpolator2597;

OrientationInterpolator OrientationInterpolator2598 = createNode("OrientationInterpolator");
OrientationInterpolator2598.DEF = "Walk_r_elbow_RotationInterpolator";
OrientationInterpolator2598.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator2598.keyValue = new MFRotation(new float[-1,0,0,0.411508,-1,0,0,0.0925011,-1,0,0,0.572568,-1,0,0,0.411508]);
Group2587.children[10] = OrientationInterpolator2598;

OrientationInterpolator OrientationInterpolator2599 = createNode("OrientationInterpolator");
OrientationInterpolator2599.DEF = "Walk_r_shoulder_RotationInterpolator";
OrientationInterpolator2599.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator2599.keyValue = new MFRotation(new float[-1,0,0,0.09346,1,0,0,0.3197,-1,0,0,0.1564,-1,0,0,0.09346]);
Group2587.children[11] = OrientationInterpolator2599;

OrientationInterpolator OrientationInterpolator2600 = createNode("OrientationInterpolator");
OrientationInterpolator2600.DEF = "Walk_l_wrist_RotationInterpolator";
OrientationInterpolator2600.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator2600.keyValue = new MFRotation(new float[0,-1,0,0.461076,-0.330195,-0.927451,0.175516,0.538852,0.0327774,-0.999314,-0.0172185,0.492033,0,-1,0,0.461076]);
Group2587.children[12] = OrientationInterpolator2600;

OrientationInterpolator OrientationInterpolator2601 = createNode("OrientationInterpolator");
OrientationInterpolator2601.DEF = "Walk_l_elbow_RotationInterpolator";
OrientationInterpolator2601.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator2601.keyValue = new MFRotation(new float[-1,0,0,0.0659878,-1,0,0,0.488383,-1,0,0,0.0177536,-1,0,0,0.0659878]);
Group2587.children[13] = OrientationInterpolator2601;

OrientationInterpolator OrientationInterpolator2602 = createNode("OrientationInterpolator");
OrientationInterpolator2602.DEF = "Walk_l_shoulder_RotationInterpolator";
OrientationInterpolator2602.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator2602.keyValue = new MFRotation(new float[1,0,0,0.1189,-1,0,0,0.1861,1,0,0,0.3357,1,0,0,0.1189]);
Group2587.children[14] = OrientationInterpolator2602;

OrientationInterpolator OrientationInterpolator2603 = createNode("OrientationInterpolator");
OrientationInterpolator2603.DEF = "Walk_head_RotationInterpolator";
OrientationInterpolator2603.key = new MFFloat(new float[0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1]);
OrientationInterpolator2603.keyValue = new MFRotation(new float[0,-1,0,0.08642,0,1,0,0.1825,0,1,0,0.1505,0,1,0,0.1053,0,1,0,0.04391,0,-1,0,0.03119,0,-1,0,0.07936,0,-1,0,0.1616,0,-1,0,0.155,0,-1,0,0.08642]);
Group2587.children[15] = OrientationInterpolator2603;

OrientationInterpolator OrientationInterpolator2604 = createNode("OrientationInterpolator");
OrientationInterpolator2604.DEF = "Walk_neck_RotationInterpolator";
OrientationInterpolator2604.key = new MFFloat(new float[0,1]);
OrientationInterpolator2604.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group2587.children[16] = OrientationInterpolator2604;

OrientationInterpolator OrientationInterpolator2605 = createNode("OrientationInterpolator");
OrientationInterpolator2605.DEF = "Walk_upper_body_RotationInterpolator";
OrientationInterpolator2605.key = new MFFloat(new float[0,0.2083,0.375,0.75,0.8333,1]);
OrientationInterpolator2605.keyValue = new MFRotation(new float[0,1,0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0,1,0,0.0826]);
Group2587.children[17] = OrientationInterpolator2605;

OrientationInterpolator OrientationInterpolator2606 = createNode("OrientationInterpolator");
OrientationInterpolator2606.DEF = "Walk_whole_body_RotationInterpolator";
OrientationInterpolator2606.key = new MFFloat(new float[0,1]);
OrientationInterpolator2606.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group2587.children[18] = OrientationInterpolator2606;

PositionInterpolator PositionInterpolator2607 = createNode("PositionInterpolator");
PositionInterpolator2607.DEF = "Walk_whole_body_TranslationInterpolator";
PositionInterpolator2607.key = new MFFloat(new float[0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]);
PositionInterpolator2607.keyValue = new MFVec3f(new float[0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0]);
Group2587.children[19] = PositionInterpolator2607;

OrientationInterpolator OrientationInterpolator2608 = createNode("OrientationInterpolator");
OrientationInterpolator2608.DEF = "Walk_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2608.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2608.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2587.children[20] = OrientationInterpolator2608;

OrientationInterpolator OrientationInterpolator2609 = createNode("OrientationInterpolator");
OrientationInterpolator2609.DEF = "Walk_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2609.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2609.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2587.children[21] = OrientationInterpolator2609;

OrientationInterpolator OrientationInterpolator2610 = createNode("OrientationInterpolator");
OrientationInterpolator2610.DEF = "Walk_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2610.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2610.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2587.children[22] = OrientationInterpolator2610;

OrientationInterpolator OrientationInterpolator2611 = createNode("OrientationInterpolator");
OrientationInterpolator2611.DEF = "Walk_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2611.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2611.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2587.children[23] = OrientationInterpolator2611;

OrientationInterpolator OrientationInterpolator2612 = createNode("OrientationInterpolator");
OrientationInterpolator2612.DEF = "Walk_sacroiliac_YawInterpolator";
OrientationInterpolator2612.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2612.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2587.children[24] = OrientationInterpolator2612;

OrientationInterpolator OrientationInterpolator2613 = createNode("OrientationInterpolator");
OrientationInterpolator2613.DEF = "Walk_vl5_YawInterpolator";
OrientationInterpolator2613.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2613.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2587.children[25] = OrientationInterpolator2613;

OrientationInterpolator OrientationInterpolator2614 = createNode("OrientationInterpolator");
OrientationInterpolator2614.DEF = "Walk_vc6_YawInterpolator";
OrientationInterpolator2614.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2614.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2587.children[26] = OrientationInterpolator2614;

OrientationInterpolator OrientationInterpolator2615 = createNode("OrientationInterpolator");
OrientationInterpolator2615.DEF = "Walk_l_thumb1_PitchInterpolator";
OrientationInterpolator2615.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2615.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.5,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group2587.children[27] = OrientationInterpolator2615;

OrientationInterpolator OrientationInterpolator2616 = createNode("OrientationInterpolator");
OrientationInterpolator2616.DEF = "Walk_r_thumb1_PitchInterpolator";
OrientationInterpolator2616.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2616.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.5,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group2587.children[28] = OrientationInterpolator2616;

ROUTE ROUTE2617 = createNode("ROUTE");
ROUTE2617.fromField = "fraction_changed";
ROUTE2617.fromNode = "WalkTimer";
ROUTE2617.toField = "set_fraction";
ROUTE2617.toNode = "Walk_r_ankle_RotationInterpolator";
Group2587.children[29] = ROUTE2617;

ROUTE ROUTE2618 = createNode("ROUTE");
ROUTE2618.fromField = "fraction_changed";
ROUTE2618.fromNode = "WalkTimer";
ROUTE2618.toField = "set_fraction";
ROUTE2618.toNode = "Walk_r_knee_RotationInterpolator";
Group2587.children[30] = ROUTE2618;

ROUTE ROUTE2619 = createNode("ROUTE");
ROUTE2619.fromField = "fraction_changed";
ROUTE2619.fromNode = "WalkTimer";
ROUTE2619.toField = "set_fraction";
ROUTE2619.toNode = "Walk_r_hip_RotationInterpolator";
Group2587.children[31] = ROUTE2619;

ROUTE ROUTE2620 = createNode("ROUTE");
ROUTE2620.fromField = "fraction_changed";
ROUTE2620.fromNode = "WalkTimer";
ROUTE2620.toField = "set_fraction";
ROUTE2620.toNode = "Walk_l_ankle_RotationInterpolator";
Group2587.children[32] = ROUTE2620;

ROUTE ROUTE2621 = createNode("ROUTE");
ROUTE2621.fromField = "fraction_changed";
ROUTE2621.fromNode = "WalkTimer";
ROUTE2621.toField = "set_fraction";
ROUTE2621.toNode = "Walk_l_knee_RotationInterpolator";
Group2587.children[33] = ROUTE2621;

ROUTE ROUTE2622 = createNode("ROUTE");
ROUTE2622.fromField = "fraction_changed";
ROUTE2622.fromNode = "WalkTimer";
ROUTE2622.toField = "set_fraction";
ROUTE2622.toNode = "Walk_l_hip_RotationInterpolator";
Group2587.children[34] = ROUTE2622;

ROUTE ROUTE2623 = createNode("ROUTE");
ROUTE2623.fromField = "fraction_changed";
ROUTE2623.fromNode = "WalkTimer";
ROUTE2623.toField = "set_fraction";
ROUTE2623.toNode = "Walk_lower_body_RotationInterpolator";
Group2587.children[35] = ROUTE2623;

ROUTE ROUTE2624 = createNode("ROUTE");
ROUTE2624.fromField = "fraction_changed";
ROUTE2624.fromNode = "WalkTimer";
ROUTE2624.toField = "set_fraction";
ROUTE2624.toNode = "Walk_r_wrist_RotationInterpolator";
Group2587.children[36] = ROUTE2624;

ROUTE ROUTE2625 = createNode("ROUTE");
ROUTE2625.fromField = "fraction_changed";
ROUTE2625.fromNode = "WalkTimer";
ROUTE2625.toField = "set_fraction";
ROUTE2625.toNode = "Walk_r_elbow_RotationInterpolator";
Group2587.children[37] = ROUTE2625;

ROUTE ROUTE2626 = createNode("ROUTE");
ROUTE2626.fromField = "fraction_changed";
ROUTE2626.fromNode = "WalkTimer";
ROUTE2626.toField = "set_fraction";
ROUTE2626.toNode = "Walk_r_shoulder_RotationInterpolator";
Group2587.children[38] = ROUTE2626;

ROUTE ROUTE2627 = createNode("ROUTE");
ROUTE2627.fromField = "fraction_changed";
ROUTE2627.fromNode = "WalkTimer";
ROUTE2627.toField = "set_fraction";
ROUTE2627.toNode = "Walk_l_wrist_RotationInterpolator";
Group2587.children[39] = ROUTE2627;

ROUTE ROUTE2628 = createNode("ROUTE");
ROUTE2628.fromField = "fraction_changed";
ROUTE2628.fromNode = "WalkTimer";
ROUTE2628.toField = "set_fraction";
ROUTE2628.toNode = "Walk_l_elbow_RotationInterpolator";
Group2587.children[40] = ROUTE2628;

ROUTE ROUTE2629 = createNode("ROUTE");
ROUTE2629.fromField = "fraction_changed";
ROUTE2629.fromNode = "WalkTimer";
ROUTE2629.toField = "set_fraction";
ROUTE2629.toNode = "Walk_l_shoulder_RotationInterpolator";
Group2587.children[41] = ROUTE2629;

ROUTE ROUTE2630 = createNode("ROUTE");
ROUTE2630.fromField = "fraction_changed";
ROUTE2630.fromNode = "WalkTimer";
ROUTE2630.toField = "set_fraction";
ROUTE2630.toNode = "Walk_head_RotationInterpolator";
Group2587.children[42] = ROUTE2630;

ROUTE ROUTE2631 = createNode("ROUTE");
ROUTE2631.fromField = "fraction_changed";
ROUTE2631.fromNode = "WalkTimer";
ROUTE2631.toField = "set_fraction";
ROUTE2631.toNode = "Walk_neck_RotationInterpolator";
Group2587.children[43] = ROUTE2631;

ROUTE ROUTE2632 = createNode("ROUTE");
ROUTE2632.fromField = "fraction_changed";
ROUTE2632.fromNode = "WalkTimer";
ROUTE2632.toField = "set_fraction";
ROUTE2632.toNode = "Walk_upper_body_RotationInterpolator";
Group2587.children[44] = ROUTE2632;

ROUTE ROUTE2633 = createNode("ROUTE");
ROUTE2633.fromField = "fraction_changed";
ROUTE2633.fromNode = "WalkTimer";
ROUTE2633.toField = "set_fraction";
ROUTE2633.toNode = "Walk_whole_body_RotationInterpolator";
Group2587.children[45] = ROUTE2633;

ROUTE ROUTE2634 = createNode("ROUTE");
ROUTE2634.fromField = "fraction_changed";
ROUTE2634.fromNode = "WalkTimer";
ROUTE2634.toField = "set_fraction";
ROUTE2634.toNode = "Walk_whole_body_TranslationInterpolator";
Group2587.children[46] = ROUTE2634;

ROUTE ROUTE2635 = createNode("ROUTE");
ROUTE2635.fromField = "fraction_changed";
ROUTE2635.fromNode = "WalkTimer";
ROUTE2635.toField = "set_fraction";
ROUTE2635.toNode = "Walk_l_sternoclavicular_RollInterpolator";
Group2587.children[47] = ROUTE2635;

ROUTE ROUTE2636 = createNode("ROUTE");
ROUTE2636.fromField = "fraction_changed";
ROUTE2636.fromNode = "WalkTimer";
ROUTE2636.toField = "set_fraction";
ROUTE2636.toNode = "Walk_l_acromioclavicular_RollInterpolator";
Group2587.children[48] = ROUTE2636;

ROUTE ROUTE2637 = createNode("ROUTE");
ROUTE2637.fromField = "fraction_changed";
ROUTE2637.fromNode = "WalkTimer";
ROUTE2637.toField = "set_fraction";
ROUTE2637.toNode = "Walk_r_sternoclavicular_RollInterpolator";
Group2587.children[49] = ROUTE2637;

ROUTE ROUTE2638 = createNode("ROUTE");
ROUTE2638.fromField = "fraction_changed";
ROUTE2638.fromNode = "WalkTimer";
ROUTE2638.toField = "set_fraction";
ROUTE2638.toNode = "Walk_r_acromioclavicular_RollInterpolator";
Group2587.children[50] = ROUTE2638;

ROUTE ROUTE2639 = createNode("ROUTE");
ROUTE2639.fromField = "fraction_changed";
ROUTE2639.fromNode = "WalkTimer";
ROUTE2639.toField = "set_fraction";
ROUTE2639.toNode = "Walk_r_metatarsal_PitchInterpolator";
Group2587.children[51] = ROUTE2639;

ROUTE ROUTE2640 = createNode("ROUTE");
ROUTE2640.fromField = "fraction_changed";
ROUTE2640.fromNode = "WalkTimer";
ROUTE2640.toField = "set_fraction";
ROUTE2640.toNode = "Walk_sacroiliac_YawInterpolator";
Group2587.children[52] = ROUTE2640;

ROUTE ROUTE2641 = createNode("ROUTE");
ROUTE2641.fromField = "fraction_changed";
ROUTE2641.fromNode = "WalkTimer";
ROUTE2641.toField = "set_fraction";
ROUTE2641.toNode = "Walk_vl5_YawInterpolator";
Group2587.children[53] = ROUTE2641;

ROUTE ROUTE2642 = createNode("ROUTE");
ROUTE2642.fromField = "fraction_changed";
ROUTE2642.fromNode = "WalkTimer";
ROUTE2642.toField = "set_fraction";
ROUTE2642.toNode = "Walk_vc6_YawInterpolator";
Group2587.children[54] = ROUTE2642;

ROUTE ROUTE2643 = createNode("ROUTE");
ROUTE2643.fromField = "fraction_changed";
ROUTE2643.fromNode = "WalkTimer";
ROUTE2643.toField = "set_fraction";
ROUTE2643.toNode = "Walk_l_thumb1_PitchInterpolator";
Group2587.children[55] = ROUTE2643;

ROUTE ROUTE2644 = createNode("ROUTE");
ROUTE2644.fromField = "fraction_changed";
ROUTE2644.fromNode = "WalkTimer";
ROUTE2644.toField = "set_fraction";
ROUTE2644.toNode = "Walk_r_thumb1_PitchInterpolator";
Group2587.children[56] = ROUTE2644;

ROUTE ROUTE2645 = createNode("ROUTE");
ROUTE2645.fromField = "value_changed";
ROUTE2645.fromNode = "Walk_r_ankle_RotationInterpolator";
ROUTE2645.toField = "rotation";
ROUTE2645.toNode = "hanim_r_ankle";
Group2587.children[57] = ROUTE2645;

ROUTE ROUTE2646 = createNode("ROUTE");
ROUTE2646.fromField = "value_changed";
ROUTE2646.fromNode = "Walk_r_knee_RotationInterpolator";
ROUTE2646.toField = "rotation";
ROUTE2646.toNode = "hanim_r_knee";
Group2587.children[58] = ROUTE2646;

ROUTE ROUTE2647 = createNode("ROUTE");
ROUTE2647.fromField = "value_changed";
ROUTE2647.fromNode = "Walk_r_hip_RotationInterpolator";
ROUTE2647.toField = "rotation";
ROUTE2647.toNode = "hanim_r_hip";
Group2587.children[59] = ROUTE2647;

ROUTE ROUTE2648 = createNode("ROUTE");
ROUTE2648.fromField = "value_changed";
ROUTE2648.fromNode = "Walk_l_ankle_RotationInterpolator";
ROUTE2648.toField = "rotation";
ROUTE2648.toNode = "hanim_l_ankle";
Group2587.children[60] = ROUTE2648;

ROUTE ROUTE2649 = createNode("ROUTE");
ROUTE2649.fromField = "value_changed";
ROUTE2649.fromNode = "Walk_l_knee_RotationInterpolator";
ROUTE2649.toField = "rotation";
ROUTE2649.toNode = "hanim_l_knee";
Group2587.children[61] = ROUTE2649;

ROUTE ROUTE2650 = createNode("ROUTE");
ROUTE2650.fromField = "value_changed";
ROUTE2650.fromNode = "Walk_l_hip_RotationInterpolator";
ROUTE2650.toField = "rotation";
ROUTE2650.toNode = "hanim_l_hip";
Group2587.children[62] = ROUTE2650;

ROUTE ROUTE2651 = createNode("ROUTE");
ROUTE2651.fromField = "value_changed";
ROUTE2651.fromNode = "Walk_lower_body_RotationInterpolator";
ROUTE2651.toField = "rotation";
ROUTE2651.toNode = "hanim_sacroiliac";
Group2587.children[63] = ROUTE2651;

ROUTE ROUTE2652 = createNode("ROUTE");
ROUTE2652.fromField = "value_changed";
ROUTE2652.fromNode = "Walk_r_wrist_RotationInterpolator";
ROUTE2652.toField = "rotation";
ROUTE2652.toNode = "hanim_r_wrist";
Group2587.children[64] = ROUTE2652;

ROUTE ROUTE2653 = createNode("ROUTE");
ROUTE2653.fromField = "value_changed";
ROUTE2653.fromNode = "Walk_r_elbow_RotationInterpolator";
ROUTE2653.toField = "rotation";
ROUTE2653.toNode = "hanim_r_elbow";
Group2587.children[65] = ROUTE2653;

ROUTE ROUTE2654 = createNode("ROUTE");
ROUTE2654.fromField = "value_changed";
ROUTE2654.fromNode = "Walk_r_shoulder_RotationInterpolator";
ROUTE2654.toField = "rotation";
ROUTE2654.toNode = "hanim_r_shoulder";
Group2587.children[66] = ROUTE2654;

ROUTE ROUTE2655 = createNode("ROUTE");
ROUTE2655.fromField = "value_changed";
ROUTE2655.fromNode = "Walk_l_wrist_RotationInterpolator";
ROUTE2655.toField = "rotation";
ROUTE2655.toNode = "hanim_l_wrist";
Group2587.children[67] = ROUTE2655;

ROUTE ROUTE2656 = createNode("ROUTE");
ROUTE2656.fromField = "value_changed";
ROUTE2656.fromNode = "Walk_l_elbow_RotationInterpolator";
ROUTE2656.toField = "rotation";
ROUTE2656.toNode = "hanim_l_elbow";
Group2587.children[68] = ROUTE2656;

ROUTE ROUTE2657 = createNode("ROUTE");
ROUTE2657.fromField = "value_changed";
ROUTE2657.fromNode = "Walk_l_shoulder_RotationInterpolator";
ROUTE2657.toField = "rotation";
ROUTE2657.toNode = "hanim_l_shoulder";
Group2587.children[69] = ROUTE2657;

ROUTE ROUTE2658 = createNode("ROUTE");
ROUTE2658.fromField = "value_changed";
ROUTE2658.fromNode = "Walk_head_RotationInterpolator";
ROUTE2658.toField = "rotation";
ROUTE2658.toNode = "hanim_skullbase";
Group2587.children[70] = ROUTE2658;

ROUTE ROUTE2659 = createNode("ROUTE");
ROUTE2659.fromField = "value_changed";
ROUTE2659.fromNode = "Walk_neck_RotationInterpolator";
ROUTE2659.toField = "rotation";
ROUTE2659.toNode = "hanim_vc4";
Group2587.children[71] = ROUTE2659;

ROUTE ROUTE2660 = createNode("ROUTE");
ROUTE2660.fromField = "value_changed";
ROUTE2660.fromNode = "Walk_upper_body_RotationInterpolator";
ROUTE2660.toField = "rotation";
ROUTE2660.toNode = "hanim_vl1";
Group2587.children[72] = ROUTE2660;

ROUTE ROUTE2661 = createNode("ROUTE");
ROUTE2661.fromField = "value_changed";
ROUTE2661.fromNode = "Walk_whole_body_RotationInterpolator";
ROUTE2661.toField = "rotation";
ROUTE2661.toNode = "hanim_humanoid_root";
Group2587.children[73] = ROUTE2661;

ROUTE ROUTE2662 = createNode("ROUTE");
ROUTE2662.fromField = "value_changed";
ROUTE2662.fromNode = "Walk_whole_body_TranslationInterpolator";
ROUTE2662.toField = "translation";
ROUTE2662.toNode = "hanim_humanoid_root";
Group2587.children[74] = ROUTE2662;

ROUTE ROUTE2663 = createNode("ROUTE");
ROUTE2663.fromField = "value_changed";
ROUTE2663.fromNode = "Walk_l_sternoclavicular_RollInterpolator";
ROUTE2663.toField = "rotation";
ROUTE2663.toNode = "hanim_l_sternoclavicular";
Group2587.children[75] = ROUTE2663;

ROUTE ROUTE2664 = createNode("ROUTE");
ROUTE2664.fromField = "value_changed";
ROUTE2664.fromNode = "Walk_l_acromioclavicular_RollInterpolator";
ROUTE2664.toField = "rotation";
ROUTE2664.toNode = "hanim_l_acromioclavicular";
Group2587.children[76] = ROUTE2664;

ROUTE ROUTE2665 = createNode("ROUTE");
ROUTE2665.fromField = "value_changed";
ROUTE2665.fromNode = "Walk_r_sternoclavicular_RollInterpolator";
ROUTE2665.toField = "rotation";
ROUTE2665.toNode = "hanim_r_sternoclavicular";
Group2587.children[77] = ROUTE2665;

ROUTE ROUTE2666 = createNode("ROUTE");
ROUTE2666.fromField = "value_changed";
ROUTE2666.fromNode = "Walk_r_acromioclavicular_RollInterpolator";
ROUTE2666.toField = "rotation";
ROUTE2666.toNode = "hanim_r_acromioclavicular";
Group2587.children[78] = ROUTE2666;

ROUTE ROUTE2667 = createNode("ROUTE");
ROUTE2667.fromField = "value_changed";
ROUTE2667.fromNode = "Walk_r_metatarsal_PitchInterpolator";
ROUTE2667.toField = "rotation";
ROUTE2667.toNode = "hanim_l_metatarsal";
Group2587.children[79] = ROUTE2667;

ROUTE ROUTE2668 = createNode("ROUTE");
ROUTE2668.fromField = "value_changed";
ROUTE2668.fromNode = "Walk_r_metatarsal_PitchInterpolator";
ROUTE2668.toField = "rotation";
ROUTE2668.toNode = "hanim_r_metatarsal";
Group2587.children[80] = ROUTE2668;

ROUTE ROUTE2669 = createNode("ROUTE");
ROUTE2669.fromField = "value_changed";
ROUTE2669.fromNode = "Walk_sacroiliac_YawInterpolator";
ROUTE2669.toField = "rotation";
ROUTE2669.toNode = "hanim_sacroiliac";
Group2587.children[81] = ROUTE2669;

ROUTE ROUTE2670 = createNode("ROUTE");
ROUTE2670.fromField = "value_changed";
ROUTE2670.fromNode = "Walk_vl5_YawInterpolator";
ROUTE2670.toField = "rotation";
ROUTE2670.toNode = "hanim_vl5";
Group2587.children[82] = ROUTE2670;

ROUTE ROUTE2671 = createNode("ROUTE");
ROUTE2671.fromField = "value_changed";
ROUTE2671.fromNode = "Walk_vc6_YawInterpolator";
ROUTE2671.toField = "rotation";
ROUTE2671.toNode = "hanim_vc6";
Group2587.children[83] = ROUTE2671;

ROUTE ROUTE2672 = createNode("ROUTE");
ROUTE2672.fromField = "value_changed";
ROUTE2672.fromNode = "Walk_l_thumb1_PitchInterpolator";
ROUTE2672.toField = "rotation";
ROUTE2672.toNode = "hanim_l_thumb1";
Group2587.children[84] = ROUTE2672;

ROUTE ROUTE2673 = createNode("ROUTE");
ROUTE2673.fromField = "value_changed";
ROUTE2673.fromNode = "Walk_r_thumb1_PitchInterpolator";
ROUTE2673.toField = "rotation";
ROUTE2673.toNode = "hanim_r_thumb1";
Group2587.children[85] = ROUTE2673;

children[18] = Group2587;

Group Group2674 = createNode("Group");
Group2674.DEF = "RunAnimation";
TimeSensor TimeSensor2675 = createNode("TimeSensor");
TimeSensor2675.DEF = "RunTimer";
TimeSensor2675.cycleInterval = 0.9;
TimeSensor2675.loop = True;
Group2674.children = new MFNode();

Group2674.children[0] = TimeSensor2675;

OrientationInterpolator OrientationInterpolator2676 = createNode("OrientationInterpolator");
OrientationInterpolator2676.DEF = "Run_r_metatarsal_PitchInterpolator";
OrientationInterpolator2676.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2676.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2674.children[1] = OrientationInterpolator2676;

OrientationInterpolator OrientationInterpolator2677 = createNode("OrientationInterpolator");
OrientationInterpolator2677.DEF = "Run_l_hip_RotationInterpolator_Run";
OrientationInterpolator2677.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator2677.keyValue = new MFRotation(new float[-0.99,0.033,0.04,1.42,-0.99,0.1328,0.067,0.42,0.99,0.014,0.009,0.9,-0.99,0.0703,0.05,0.7,-0.99,0.033,0.04,1.42]);
Group2674.children[2] = OrientationInterpolator2677;

OrientationInterpolator OrientationInterpolator2678 = createNode("OrientationInterpolator");
OrientationInterpolator2678.DEF = "Run_l_knee_RotationInterpolator_Run";
OrientationInterpolator2678.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator2678.keyValue = new MFRotation(new float[1,0,0,1.01,1,0,0,0.426,1,0,0,0.705,1,0,0,2.179,1,0,0,1.01]);
Group2674.children[3] = OrientationInterpolator2678;

OrientationInterpolator OrientationInterpolator2679 = createNode("OrientationInterpolator");
OrientationInterpolator2679.DEF = "Run_l_ankle_RotationInterpolator_Run";
OrientationInterpolator2679.key = new MFFloat(new float[0,0.22,0.3,0.4,1]);
OrientationInterpolator2679.keyValue = new MFRotation(new float[1,0,0,0.0374,-1,0,0,0.1037,-1,0,0,0.4328,1,0,0,0.1929,1,0,0,0.03574]);
Group2674.children[4] = OrientationInterpolator2679;

OrientationInterpolator OrientationInterpolator2680 = createNode("OrientationInterpolator");
OrientationInterpolator2680.DEF = "Run_r_hip_RotationInterpolator_Run";
OrientationInterpolator2680.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator2680.keyValue = new MFRotation(new float[0.99,-0.014,0.009,0.9,-0.99,-0.0703,-0.05,0.7,-0.99,-0.033,0.04,1.42,-0.99,-0.1328,-0.067,0.42,0.99,-0.014,0.009,0.9]);
Group2674.children[5] = OrientationInterpolator2680;

OrientationInterpolator OrientationInterpolator2681 = createNode("OrientationInterpolator");
OrientationInterpolator2681.DEF = "Run_r_knee_RotationInterpolator_Run";
OrientationInterpolator2681.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator2681.keyValue = new MFRotation(new float[1,0,0,0.705,1,0,0,2.179,1,0,0,1.01,1,0,0,0.426,1,0,0,0.705]);
Group2674.children[6] = OrientationInterpolator2681;

OrientationInterpolator OrientationInterpolator2682 = createNode("OrientationInterpolator");
OrientationInterpolator2682.DEF = "Run_r_ankle_RotationInterpolator_Run";
OrientationInterpolator2682.key = new MFFloat(new float[0,0.4,0.71,0.8,0.82,1]);
OrientationInterpolator2682.keyValue = new MFRotation(new float[1,0,0,0.2323,-1,0,0,0.07843,-1,0,0,0.32,-1,0,0,0.374,-1,0,0,0.3478,1,0,0,0.2323]);
Group2674.children[7] = OrientationInterpolator2682;

OrientationInterpolator OrientationInterpolator2683 = createNode("OrientationInterpolator");
OrientationInterpolator2683.DEF = "Run_l_shoulder_RotationInterpolator_Run";
OrientationInterpolator2683.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator2683.keyValue = new MFRotation(new float[0.99,-0.074,0.25,1.5,0.99,-0.092,0.44,0.3,-0.99,0.136,0.25,0.85,0.99,-0.081,0.38,0.4,0.99,-0.074,0.25,1.5]);
Group2674.children[8] = OrientationInterpolator2683;

OrientationInterpolator OrientationInterpolator2684 = createNode("OrientationInterpolator");
OrientationInterpolator2684.DEF = "Run_l_elbow_RotationInterpolator_Run";
OrientationInterpolator2684.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator2684.keyValue = new MFRotation(new float[-1,0,0,1.85,-0.99,-0.19,0.18,1.35,-1,0,0,0.975,-0.99,-0.09,-0.02,1.55,-1,0,0,1.85]);
Group2674.children[9] = OrientationInterpolator2684;

OrientationInterpolator OrientationInterpolator2685 = createNode("OrientationInterpolator");
OrientationInterpolator2685.DEF = "Run_l_wrist_RotationInterpolator_Run";
OrientationInterpolator2685.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2685.keyValue = new MFRotation(new float[-0.25,-1,0.08,0.14,0.25,1,0.08,0.14,0,0,1,0,-0.25,1,0.08,-0.14,-0.25,1,0.08,0.14]);
Group2674.children[10] = OrientationInterpolator2685;

OrientationInterpolator OrientationInterpolator2686 = createNode("OrientationInterpolator");
OrientationInterpolator2686.DEF = "Run_r_shoulder_RotationInterpolator_Run";
OrientationInterpolator2686.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator2686.keyValue = new MFRotation(new float[-0.99,-0.136,-0.25,0.85,0.99,0.081,-0.38,0.4,0.99,0.074,-0.25,1.5,0.99,0.081,-0.38,0.4,-0.99,-0.136,-0.25,0.85]);
Group2674.children[11] = OrientationInterpolator2686;

OrientationInterpolator OrientationInterpolator2687 = createNode("OrientationInterpolator");
OrientationInterpolator2687.DEF = "Run_r_elbow_RotationInterpolator_Run";
OrientationInterpolator2687.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator2687.keyValue = new MFRotation(new float[-1,0,0,0.975,-0.99,0.09,0.02,1.55,-1,0,0,1.85,-0.99,0.19,-0.18,1.35,-1,0,0,0.975]);
Group2674.children[12] = OrientationInterpolator2687;

OrientationInterpolator OrientationInterpolator2688 = createNode("OrientationInterpolator");
OrientationInterpolator2688.DEF = "Run_r_wrist_RotationInterpolator_Run";
OrientationInterpolator2688.key = new MFFloat(new float[0,1]);
OrientationInterpolator2688.keyValue = new MFRotation(new float[-0.917742,-0.237244,-0.318536,0.214273,-0.917742,-0.237244,-0.318536,0.214273]);
Group2674.children[13] = OrientationInterpolator2688;

OrientationInterpolator OrientationInterpolator2689 = createNode("OrientationInterpolator");
OrientationInterpolator2689.DEF = "Run_lower_body_RotationInterpolator_Run";
OrientationInterpolator2689.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator2689.keyValue = new MFRotation(new float[0,-1,0,0.125,0,0,1,0,0,1,0,0.125,0,0,1,0,0,-1,0,0.125]);
Group2674.children[14] = OrientationInterpolator2689;

OrientationInterpolator OrientationInterpolator2690 = createNode("OrientationInterpolator");
OrientationInterpolator2690.DEF = "Run_head_RotationInterpolator_Run";
OrientationInterpolator2690.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator2690.keyValue = new MFRotation(new float[1,0,0,0.08,1,0,0,0.12,1,0,0,0.3,1,0,0,0.3,1,0,0,0.08]);
Group2674.children[15] = OrientationInterpolator2690;

OrientationInterpolator OrientationInterpolator2691 = createNode("OrientationInterpolator");
OrientationInterpolator2691.DEF = "Run_neck_RotationInterpolator_Run";
OrientationInterpolator2691.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator2691.keyValue = new MFRotation(new float[0.7,0,0,0.4,-0.7,-0.7,0,0.4,0,0,0,0.4,-0.7,0.7,0,0.4,0.7,0,0,0.4]);
Group2674.children[16] = OrientationInterpolator2691;

OrientationInterpolator OrientationInterpolator2692 = createNode("OrientationInterpolator");
OrientationInterpolator2692.DEF = "Run_upper_body_RotationInterpolator_Run";
OrientationInterpolator2692.key = new MFFloat(new float[0,0.2545,0.4909,0.7636,1]);
OrientationInterpolator2692.keyValue = new MFRotation(new float[0.97,0.65,0.086,0.5,0.9,0.003,-0.02,0.38,0.95,-0.68,-0.086,0.5,0.9,0.004,-0.025,0.4,0.97,0.65,0.086,0.5]);
Group2674.children[17] = OrientationInterpolator2692;

OrientationInterpolator OrientationInterpolator2693 = createNode("OrientationInterpolator");
OrientationInterpolator2693.DEF = "Run_whole_body_RotationInterpolator_Run";
OrientationInterpolator2693.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2693.keyValue = new MFRotation(new float[1,0,0,0.06,1,0,0,0.167,1,0,0,0.06,1,0,0,0.168,1,0,0,0.06]);
Group2674.children[18] = OrientationInterpolator2693;

PositionInterpolator PositionInterpolator2694 = createNode("PositionInterpolator");
PositionInterpolator2694.DEF = "Run_whole_body_TranslationInterpolator_Run";
PositionInterpolator2694.key = new MFFloat(new float[0,0.22,0.3,0.31,0.5,0.69,0.7,0.78,1]);
PositionInterpolator2694.keyValue = new MFVec3f(new float[0,-0.01,0,0,-0.037,0,0,-0.049,0,0,-0.037,0,0,-0.01,0,0,-0.037,0,0,-0.049,0,0,-0.037,0,0,-0.01,0]);
Group2674.children[19] = PositionInterpolator2694;

OrientationInterpolator OrientationInterpolator2695 = createNode("OrientationInterpolator");
OrientationInterpolator2695.DEF = "Run_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2695.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2695.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2674.children[20] = OrientationInterpolator2695;

OrientationInterpolator OrientationInterpolator2696 = createNode("OrientationInterpolator");
OrientationInterpolator2696.DEF = "Run_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2696.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2696.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2674.children[21] = OrientationInterpolator2696;

OrientationInterpolator OrientationInterpolator2697 = createNode("OrientationInterpolator");
OrientationInterpolator2697.DEF = "Run_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2697.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2697.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2674.children[22] = OrientationInterpolator2697;

OrientationInterpolator OrientationInterpolator2698 = createNode("OrientationInterpolator");
OrientationInterpolator2698.DEF = "Run_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2698.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2698.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2674.children[23] = OrientationInterpolator2698;

OrientationInterpolator OrientationInterpolator2699 = createNode("OrientationInterpolator");
OrientationInterpolator2699.DEF = "Run_sacroiliac_YawInterpolator";
OrientationInterpolator2699.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2699.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2674.children[24] = OrientationInterpolator2699;

OrientationInterpolator OrientationInterpolator2700 = createNode("OrientationInterpolator");
OrientationInterpolator2700.DEF = "Run_vl5_YawInterpolator";
OrientationInterpolator2700.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2700.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2674.children[25] = OrientationInterpolator2700;

OrientationInterpolator OrientationInterpolator2701 = createNode("OrientationInterpolator");
OrientationInterpolator2701.DEF = "Run_vc6_YawInterpolator";
OrientationInterpolator2701.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2701.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2674.children[26] = OrientationInterpolator2701;

OrientationInterpolator OrientationInterpolator2702 = createNode("OrientationInterpolator");
OrientationInterpolator2702.DEF = "Run_l_thumb1_PitchInterpolator";
OrientationInterpolator2702.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2702.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.7,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group2674.children[27] = OrientationInterpolator2702;

OrientationInterpolator OrientationInterpolator2703 = createNode("OrientationInterpolator");
OrientationInterpolator2703.DEF = "Run_r_thumb1_PitchInterpolator";
OrientationInterpolator2703.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2703.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.7,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group2674.children[28] = OrientationInterpolator2703;

ROUTE ROUTE2704 = createNode("ROUTE");
ROUTE2704.fromField = "fraction_changed";
ROUTE2704.fromNode = "RunTimer";
ROUTE2704.toField = "set_fraction";
ROUTE2704.toNode = "Run_r_ankle_RotationInterpolator_Run";
Group2674.children[29] = ROUTE2704;

ROUTE ROUTE2705 = createNode("ROUTE");
ROUTE2705.fromField = "fraction_changed";
ROUTE2705.fromNode = "RunTimer";
ROUTE2705.toField = "set_fraction";
ROUTE2705.toNode = "Run_r_knee_RotationInterpolator_Run";
Group2674.children[30] = ROUTE2705;

ROUTE ROUTE2706 = createNode("ROUTE");
ROUTE2706.fromField = "fraction_changed";
ROUTE2706.fromNode = "RunTimer";
ROUTE2706.toField = "set_fraction";
ROUTE2706.toNode = "Run_r_hip_RotationInterpolator_Run";
Group2674.children[31] = ROUTE2706;

ROUTE ROUTE2707 = createNode("ROUTE");
ROUTE2707.fromField = "fraction_changed";
ROUTE2707.fromNode = "RunTimer";
ROUTE2707.toField = "set_fraction";
ROUTE2707.toNode = "Run_l_ankle_RotationInterpolator_Run";
Group2674.children[32] = ROUTE2707;

ROUTE ROUTE2708 = createNode("ROUTE");
ROUTE2708.fromField = "fraction_changed";
ROUTE2708.fromNode = "RunTimer";
ROUTE2708.toField = "set_fraction";
ROUTE2708.toNode = "Run_l_knee_RotationInterpolator_Run";
Group2674.children[33] = ROUTE2708;

ROUTE ROUTE2709 = createNode("ROUTE");
ROUTE2709.fromField = "fraction_changed";
ROUTE2709.fromNode = "RunTimer";
ROUTE2709.toField = "set_fraction";
ROUTE2709.toNode = "Run_l_hip_RotationInterpolator_Run";
Group2674.children[34] = ROUTE2709;

ROUTE ROUTE2710 = createNode("ROUTE");
ROUTE2710.fromField = "fraction_changed";
ROUTE2710.fromNode = "RunTimer";
ROUTE2710.toField = "set_fraction";
ROUTE2710.toNode = "Run_lower_body_RotationInterpolator_Run";
Group2674.children[35] = ROUTE2710;

ROUTE ROUTE2711 = createNode("ROUTE");
ROUTE2711.fromField = "fraction_changed";
ROUTE2711.fromNode = "RunTimer";
ROUTE2711.toField = "set_fraction";
ROUTE2711.toNode = "Run_r_wrist_RotationInterpolator_Run";
Group2674.children[36] = ROUTE2711;

ROUTE ROUTE2712 = createNode("ROUTE");
ROUTE2712.fromField = "fraction_changed";
ROUTE2712.fromNode = "RunTimer";
ROUTE2712.toField = "set_fraction";
ROUTE2712.toNode = "Run_r_elbow_RotationInterpolator_Run";
Group2674.children[37] = ROUTE2712;

ROUTE ROUTE2713 = createNode("ROUTE");
ROUTE2713.fromField = "fraction_changed";
ROUTE2713.fromNode = "RunTimer";
ROUTE2713.toField = "set_fraction";
ROUTE2713.toNode = "Run_r_shoulder_RotationInterpolator_Run";
Group2674.children[38] = ROUTE2713;

ROUTE ROUTE2714 = createNode("ROUTE");
ROUTE2714.fromField = "fraction_changed";
ROUTE2714.fromNode = "RunTimer";
ROUTE2714.toField = "set_fraction";
ROUTE2714.toNode = "Run_l_wrist_RotationInterpolator_Run";
Group2674.children[39] = ROUTE2714;

ROUTE ROUTE2715 = createNode("ROUTE");
ROUTE2715.fromField = "fraction_changed";
ROUTE2715.fromNode = "RunTimer";
ROUTE2715.toField = "set_fraction";
ROUTE2715.toNode = "Run_l_elbow_RotationInterpolator_Run";
Group2674.children[40] = ROUTE2715;

ROUTE ROUTE2716 = createNode("ROUTE");
ROUTE2716.fromField = "fraction_changed";
ROUTE2716.fromNode = "RunTimer";
ROUTE2716.toField = "set_fraction";
ROUTE2716.toNode = "Run_l_shoulder_RotationInterpolator_Run";
Group2674.children[41] = ROUTE2716;

ROUTE ROUTE2717 = createNode("ROUTE");
ROUTE2717.fromField = "fraction_changed";
ROUTE2717.fromNode = "RunTimer";
ROUTE2717.toField = "set_fraction";
ROUTE2717.toNode = "Run_head_RotationInterpolator_Run";
Group2674.children[42] = ROUTE2717;

ROUTE ROUTE2718 = createNode("ROUTE");
ROUTE2718.fromField = "fraction_changed";
ROUTE2718.fromNode = "RunTimer";
ROUTE2718.toField = "set_fraction";
ROUTE2718.toNode = "Run_neck_RotationInterpolator_Run";
Group2674.children[43] = ROUTE2718;

ROUTE ROUTE2719 = createNode("ROUTE");
ROUTE2719.fromField = "fraction_changed";
ROUTE2719.fromNode = "RunTimer";
ROUTE2719.toField = "set_fraction";
ROUTE2719.toNode = "Run_upper_body_RotationInterpolator_Run";
Group2674.children[44] = ROUTE2719;

ROUTE ROUTE2720 = createNode("ROUTE");
ROUTE2720.fromField = "fraction_changed";
ROUTE2720.fromNode = "RunTimer";
ROUTE2720.toField = "set_fraction";
ROUTE2720.toNode = "Run_whole_body_RotationInterpolator_Run";
Group2674.children[45] = ROUTE2720;

ROUTE ROUTE2721 = createNode("ROUTE");
ROUTE2721.fromField = "fraction_changed";
ROUTE2721.fromNode = "RunTimer";
ROUTE2721.toField = "set_fraction";
ROUTE2721.toNode = "Run_whole_body_TranslationInterpolator_Run";
Group2674.children[46] = ROUTE2721;

ROUTE ROUTE2722 = createNode("ROUTE");
ROUTE2722.fromField = "fraction_changed";
ROUTE2722.fromNode = "RunTimer";
ROUTE2722.toField = "set_fraction";
ROUTE2722.toNode = "Run_l_sternoclavicular_RollInterpolator";
Group2674.children[47] = ROUTE2722;

ROUTE ROUTE2723 = createNode("ROUTE");
ROUTE2723.fromField = "fraction_changed";
ROUTE2723.fromNode = "RunTimer";
ROUTE2723.toField = "set_fraction";
ROUTE2723.toNode = "Run_l_acromioclavicular_RollInterpolator";
Group2674.children[48] = ROUTE2723;

ROUTE ROUTE2724 = createNode("ROUTE");
ROUTE2724.fromField = "fraction_changed";
ROUTE2724.fromNode = "RunTimer";
ROUTE2724.toField = "set_fraction";
ROUTE2724.toNode = "Run_r_sternoclavicular_RollInterpolator";
Group2674.children[49] = ROUTE2724;

ROUTE ROUTE2725 = createNode("ROUTE");
ROUTE2725.fromField = "fraction_changed";
ROUTE2725.fromNode = "RunTimer";
ROUTE2725.toField = "set_fraction";
ROUTE2725.toNode = "Run_r_acromioclavicular_RollInterpolator";
Group2674.children[50] = ROUTE2725;

ROUTE ROUTE2726 = createNode("ROUTE");
ROUTE2726.fromField = "fraction_changed";
ROUTE2726.fromNode = "RunTimer";
ROUTE2726.toField = "set_fraction";
ROUTE2726.toNode = "Run_r_metatarsal_PitchInterpolator";
Group2674.children[51] = ROUTE2726;

ROUTE ROUTE2727 = createNode("ROUTE");
ROUTE2727.fromField = "fraction_changed";
ROUTE2727.fromNode = "RunTimer";
ROUTE2727.toField = "set_fraction";
ROUTE2727.toNode = "Run_sacroiliac_YawInterpolator";
Group2674.children[52] = ROUTE2727;

ROUTE ROUTE2728 = createNode("ROUTE");
ROUTE2728.fromField = "fraction_changed";
ROUTE2728.fromNode = "RunTimer";
ROUTE2728.toField = "set_fraction";
ROUTE2728.toNode = "Run_vl5_YawInterpolator";
Group2674.children[53] = ROUTE2728;

ROUTE ROUTE2729 = createNode("ROUTE");
ROUTE2729.fromField = "fraction_changed";
ROUTE2729.fromNode = "RunTimer";
ROUTE2729.toField = "set_fraction";
ROUTE2729.toNode = "Run_vc6_YawInterpolator";
Group2674.children[54] = ROUTE2729;

ROUTE ROUTE2730 = createNode("ROUTE");
ROUTE2730.fromField = "fraction_changed";
ROUTE2730.fromNode = "RunTimer";
ROUTE2730.toField = "set_fraction";
ROUTE2730.toNode = "Run_l_thumb1_PitchInterpolator";
Group2674.children[55] = ROUTE2730;

ROUTE ROUTE2731 = createNode("ROUTE");
ROUTE2731.fromField = "fraction_changed";
ROUTE2731.fromNode = "RunTimer";
ROUTE2731.toField = "set_fraction";
ROUTE2731.toNode = "Run_r_thumb1_PitchInterpolator";
Group2674.children[56] = ROUTE2731;

ROUTE ROUTE2732 = createNode("ROUTE");
ROUTE2732.fromField = "value_changed";
ROUTE2732.fromNode = "Run_r_ankle_RotationInterpolator_Run";
ROUTE2732.toField = "rotation";
ROUTE2732.toNode = "hanim_r_ankle";
Group2674.children[57] = ROUTE2732;

ROUTE ROUTE2733 = createNode("ROUTE");
ROUTE2733.fromField = "value_changed";
ROUTE2733.fromNode = "Run_r_knee_RotationInterpolator_Run";
ROUTE2733.toField = "rotation";
ROUTE2733.toNode = "hanim_r_knee";
Group2674.children[58] = ROUTE2733;

ROUTE ROUTE2734 = createNode("ROUTE");
ROUTE2734.fromField = "value_changed";
ROUTE2734.fromNode = "Run_r_hip_RotationInterpolator_Run";
ROUTE2734.toField = "rotation";
ROUTE2734.toNode = "hanim_r_hip";
Group2674.children[59] = ROUTE2734;

ROUTE ROUTE2735 = createNode("ROUTE");
ROUTE2735.fromField = "value_changed";
ROUTE2735.fromNode = "Run_l_ankle_RotationInterpolator_Run";
ROUTE2735.toField = "rotation";
ROUTE2735.toNode = "hanim_l_ankle";
Group2674.children[60] = ROUTE2735;

ROUTE ROUTE2736 = createNode("ROUTE");
ROUTE2736.fromField = "value_changed";
ROUTE2736.fromNode = "Run_l_knee_RotationInterpolator_Run";
ROUTE2736.toField = "rotation";
ROUTE2736.toNode = "hanim_l_knee";
Group2674.children[61] = ROUTE2736;

ROUTE ROUTE2737 = createNode("ROUTE");
ROUTE2737.fromField = "value_changed";
ROUTE2737.fromNode = "Run_l_hip_RotationInterpolator_Run";
ROUTE2737.toField = "rotation";
ROUTE2737.toNode = "hanim_l_hip";
Group2674.children[62] = ROUTE2737;

ROUTE ROUTE2738 = createNode("ROUTE");
ROUTE2738.fromField = "value_changed";
ROUTE2738.fromNode = "Run_r_wrist_RotationInterpolator_Run";
ROUTE2738.toField = "rotation";
ROUTE2738.toNode = "hanim_r_wrist";
Group2674.children[63] = ROUTE2738;

ROUTE ROUTE2739 = createNode("ROUTE");
ROUTE2739.fromField = "value_changed";
ROUTE2739.fromNode = "Run_r_elbow_RotationInterpolator_Run";
ROUTE2739.toField = "rotation";
ROUTE2739.toNode = "hanim_r_elbow";
Group2674.children[64] = ROUTE2739;

ROUTE ROUTE2740 = createNode("ROUTE");
ROUTE2740.fromField = "value_changed";
ROUTE2740.fromNode = "Run_r_shoulder_RotationInterpolator_Run";
ROUTE2740.toField = "rotation";
ROUTE2740.toNode = "hanim_r_shoulder";
Group2674.children[65] = ROUTE2740;

ROUTE ROUTE2741 = createNode("ROUTE");
ROUTE2741.fromField = "value_changed";
ROUTE2741.fromNode = "Run_l_wrist_RotationInterpolator_Run";
ROUTE2741.toField = "rotation";
ROUTE2741.toNode = "hanim_l_wrist";
Group2674.children[66] = ROUTE2741;

ROUTE ROUTE2742 = createNode("ROUTE");
ROUTE2742.fromField = "value_changed";
ROUTE2742.fromNode = "Run_l_elbow_RotationInterpolator_Run";
ROUTE2742.toField = "rotation";
ROUTE2742.toNode = "hanim_l_elbow";
Group2674.children[67] = ROUTE2742;

ROUTE ROUTE2743 = createNode("ROUTE");
ROUTE2743.fromField = "value_changed";
ROUTE2743.fromNode = "Run_l_shoulder_RotationInterpolator_Run";
ROUTE2743.toField = "rotation";
ROUTE2743.toNode = "hanim_l_shoulder";
Group2674.children[68] = ROUTE2743;

ROUTE ROUTE2744 = createNode("ROUTE");
ROUTE2744.fromField = "value_changed";
ROUTE2744.fromNode = "Run_lower_body_RotationInterpolator_Run";
ROUTE2744.toField = "rotation";
ROUTE2744.toNode = "hanim_sacroiliac";
Group2674.children[69] = ROUTE2744;

ROUTE ROUTE2745 = createNode("ROUTE");
ROUTE2745.fromField = "value_changed";
ROUTE2745.fromNode = "Run_head_RotationInterpolator_Run";
ROUTE2745.toField = "rotation";
ROUTE2745.toNode = "hanim_skullbase";
Group2674.children[70] = ROUTE2745;

ROUTE ROUTE2746 = createNode("ROUTE");
ROUTE2746.fromField = "value_changed";
ROUTE2746.fromNode = "Run_neck_RotationInterpolator_Run";
ROUTE2746.toField = "rotation";
ROUTE2746.toNode = "hanim_vc4";
Group2674.children[71] = ROUTE2746;

ROUTE ROUTE2747 = createNode("ROUTE");
ROUTE2747.fromField = "value_changed";
ROUTE2747.fromNode = "Run_upper_body_RotationInterpolator_Run";
ROUTE2747.toField = "rotation";
ROUTE2747.toNode = "hanim_vl1";
Group2674.children[72] = ROUTE2747;

ROUTE ROUTE2748 = createNode("ROUTE");
ROUTE2748.fromField = "value_changed";
ROUTE2748.fromNode = "Run_whole_body_RotationInterpolator_Run";
ROUTE2748.toField = "rotation";
ROUTE2748.toNode = "hanim_humanoid_root";
Group2674.children[73] = ROUTE2748;

ROUTE ROUTE2749 = createNode("ROUTE");
ROUTE2749.fromField = "value_changed";
ROUTE2749.fromNode = "Run_whole_body_TranslationInterpolator_Run";
ROUTE2749.toField = "translation";
ROUTE2749.toNode = "hanim_humanoid_root";
Group2674.children[74] = ROUTE2749;

ROUTE ROUTE2750 = createNode("ROUTE");
ROUTE2750.fromField = "value_changed";
ROUTE2750.fromNode = "Run_l_sternoclavicular_RollInterpolator";
ROUTE2750.toField = "rotation";
ROUTE2750.toNode = "hanim_l_sternoclavicular";
Group2674.children[75] = ROUTE2750;

ROUTE ROUTE2751 = createNode("ROUTE");
ROUTE2751.fromField = "value_changed";
ROUTE2751.fromNode = "Run_l_acromioclavicular_RollInterpolator";
ROUTE2751.toField = "rotation";
ROUTE2751.toNode = "hanim_l_acromioclavicular";
Group2674.children[76] = ROUTE2751;

ROUTE ROUTE2752 = createNode("ROUTE");
ROUTE2752.fromField = "value_changed";
ROUTE2752.fromNode = "Run_r_sternoclavicular_RollInterpolator";
ROUTE2752.toField = "rotation";
ROUTE2752.toNode = "hanim_r_sternoclavicular";
Group2674.children[77] = ROUTE2752;

ROUTE ROUTE2753 = createNode("ROUTE");
ROUTE2753.fromField = "value_changed";
ROUTE2753.fromNode = "Run_r_acromioclavicular_RollInterpolator";
ROUTE2753.toField = "rotation";
ROUTE2753.toNode = "hanim_r_acromioclavicular";
Group2674.children[78] = ROUTE2753;

ROUTE ROUTE2754 = createNode("ROUTE");
ROUTE2754.fromField = "value_changed";
ROUTE2754.fromNode = "Run_r_metatarsal_PitchInterpolator";
ROUTE2754.toField = "rotation";
ROUTE2754.toNode = "hanim_l_metatarsal";
Group2674.children[79] = ROUTE2754;

ROUTE ROUTE2755 = createNode("ROUTE");
ROUTE2755.fromField = "value_changed";
ROUTE2755.fromNode = "Run_r_metatarsal_PitchInterpolator";
ROUTE2755.toField = "rotation";
ROUTE2755.toNode = "hanim_r_metatarsal";
Group2674.children[80] = ROUTE2755;

ROUTE ROUTE2756 = createNode("ROUTE");
ROUTE2756.fromField = "value_changed";
ROUTE2756.fromNode = "Run_sacroiliac_YawInterpolator";
ROUTE2756.toField = "rotation";
ROUTE2756.toNode = "hanim_sacroiliac";
Group2674.children[81] = ROUTE2756;

ROUTE ROUTE2757 = createNode("ROUTE");
ROUTE2757.fromField = "value_changed";
ROUTE2757.fromNode = "Run_vl5_YawInterpolator";
ROUTE2757.toField = "rotation";
ROUTE2757.toNode = "hanim_vl5";
Group2674.children[82] = ROUTE2757;

ROUTE ROUTE2758 = createNode("ROUTE");
ROUTE2758.fromField = "value_changed";
ROUTE2758.fromNode = "Run_vc6_YawInterpolator";
ROUTE2758.toField = "rotation";
ROUTE2758.toNode = "hanim_vc6";
Group2674.children[83] = ROUTE2758;

ROUTE ROUTE2759 = createNode("ROUTE");
ROUTE2759.fromField = "value_changed";
ROUTE2759.fromNode = "Run_l_thumb1_PitchInterpolator";
ROUTE2759.toField = "rotation";
ROUTE2759.toNode = "hanim_l_thumb1";
Group2674.children[84] = ROUTE2759;

ROUTE ROUTE2760 = createNode("ROUTE");
ROUTE2760.fromField = "value_changed";
ROUTE2760.fromNode = "Run_r_thumb1_PitchInterpolator";
ROUTE2760.toField = "rotation";
ROUTE2760.toNode = "hanim_r_thumb1";
Group2674.children[85] = ROUTE2760;

children[19] = Group2674;

Group Group2761 = createNode("Group");
Group2761.DEF = "JumpAnimation";
TimeSensor TimeSensor2762 = createNode("TimeSensor");
TimeSensor2762.DEF = "JumpTimer";
TimeSensor2762.cycleInterval = 3.73;
TimeSensor2762.loop = True;
Group2761.children = new MFNode();

Group2761.children[0] = TimeSensor2762;

OrientationInterpolator OrientationInterpolator2763 = createNode("OrientationInterpolator");
OrientationInterpolator2763.DEF = "Jump_r_metatarsal_PitchInterpolator";
OrientationInterpolator2763.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2763.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2761.children[1] = OrientationInterpolator2763;

OrientationInterpolator OrientationInterpolator2764 = createNode("OrientationInterpolator");
OrientationInterpolator2764.DEF = "Jump_r_ankle_RotationInterpolator";
OrientationInterpolator2764.key = new MFFloat(new float[0,0.1,0.15,0.25,0.28,0.32,0.35,0.64,0.76,0.84,0.88,0.92,0.96,1]);
OrientationInterpolator2764.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.6735,-1,0,0,0.6735,-1,0,0,0.3527,-1,0,0,0.3038,-1,0,0,0.07964,1,0,0,1.3,1,0,0,0.6509,1,0,0,0.3001,-1,0,0,0.2087,-1,0,0,0.3756,-1,0,0,0.3279,-1,0,0,0.1193,0,0,1,0]);
Group2761.children[2] = OrientationInterpolator2764;

OrientationInterpolator OrientationInterpolator2765 = createNode("OrientationInterpolator");
OrientationInterpolator2765.DEF = "Jump_r_knee_RotationInterpolator";
OrientationInterpolator2765.key = new MFFloat(new float[0,0.2,0.25,0.3,0.64,0.76,0.88,1]);
OrientationInterpolator2765.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,2.5,1,0,0,1.7,0,0,1,0,1,0,0,0.9507,1,0,0,0.5845,1,0,0,0.9054,0,0,1,0]);
Group2761.children[3] = OrientationInterpolator2765;

OrientationInterpolator OrientationInterpolator2766 = createNode("OrientationInterpolator");
OrientationInterpolator2766.DEF = "Jump_r_hip_RotationInterpolator";
OrientationInterpolator2766.key = new MFFloat(new float[0,0.18,0.24,0.26,0.28,0.32,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator2766.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,1.63,-1,0,0,1.7,-1,0,0,1.55,-1,0,0,0.8943,-1,0,0,0.3698,0,0,1,0,-1,0,0,0.4963,-1,0,0,0.3829,-1,0,0,0.5169,0,0,1,0]);
Group2761.children[4] = OrientationInterpolator2766;

OrientationInterpolator OrientationInterpolator2767 = createNode("OrientationInterpolator");
OrientationInterpolator2767.DEF = "Jump_l_ankle_RotationInterpolator";
OrientationInterpolator2767.key = new MFFloat(new float[0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1]);
OrientationInterpolator2767.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.625,-1,0,0,0.625,-1,0,0,0.3364,-1,0,0,0.2742,-1,0,0,0.05078,1,0,0,0.2833,1,0,0,0.6667,1,0,0,0.2833,-1,0,0,0.2108,-1,0,0,0.375,-1,0,0,0.3146,-1,0,0,0.1174,0,0,1,0]);
Group2761.children[5] = OrientationInterpolator2767;

OrientationInterpolator OrientationInterpolator2768 = createNode("OrientationInterpolator");
OrientationInterpolator2768.DEF = "Jump_l_knee_RotationInterpolator";
OrientationInterpolator2768.key = new MFFloat(new float[0,0.28,0.32,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator2768.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,2.047,1,0,0,2.047,0,0,1,0,1,0,0,1.566,1,0,0,0.5913,1,0,0,0.9235,0,0,1,0]);
Group2761.children[6] = OrientationInterpolator2768;

OrientationInterpolator OrientationInterpolator2769 = createNode("OrientationInterpolator");
OrientationInterpolator2769.DEF = "Jump_l_hip_RotationInterpolator";
OrientationInterpolator2769.key = new MFFloat(new float[0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator2769.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,4.349,1,0,0,4.349,1,0,0,4.615,-1,0,0,0.9136,-1,0,0,0.3614,0,0,1,0,-1,0,0,0.7869,-1,0,0,0.3918,-1,0,0,0.5433,0,0,1,0]);
Group2761.children[7] = OrientationInterpolator2769;

OrientationInterpolator OrientationInterpolator2770 = createNode("OrientationInterpolator");
OrientationInterpolator2770.DEF = "Jump_lower_body_RotationInterpolator";
OrientationInterpolator2770.key = new MFFloat(new float[0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator2770.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,0.1892,1,0,0,0.1892,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2761.children[8] = OrientationInterpolator2770;

OrientationInterpolator OrientationInterpolator2771 = createNode("OrientationInterpolator");
OrientationInterpolator2771.DEF = "Jump_r_wrist_RotationInterpolator";
OrientationInterpolator2771.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator2771.keyValue = new MFRotation(new float[0,0,1,0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0,1,0,0.497349,0,0,1,0]);
Group2761.children[9] = OrientationInterpolator2771;

OrientationInterpolator OrientationInterpolator2772 = createNode("OrientationInterpolator");
OrientationInterpolator2772.DEF = "Jump_r_elbow_RotationInterpolator";
OrientationInterpolator2772.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator2772.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.04151,-1,0,0,0.04151,-1,0,0,0.5855,-1,0,0,0.5852,0,0,1,0]);
Group2761.children[10] = OrientationInterpolator2772;

OrientationInterpolator OrientationInterpolator2773 = createNode("OrientationInterpolator");
OrientationInterpolator2773.DEF = "Jump_r_shoulder_RotationInterpolator";
OrientationInterpolator2773.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,0.88,1]);
OrientationInterpolator2773.keyValue = new MFRotation(new float[0,0,1,0,0.9992,0.02042,0.03558,4.688,0.9992,0.02042,0.03558,4.688,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0,0,1,0]);
Group2761.children[11] = OrientationInterpolator2773;

OrientationInterpolator OrientationInterpolator2774 = createNode("OrientationInterpolator");
OrientationInterpolator2774.DEF = "Jump_l_wrist_RotationInterpolator";
OrientationInterpolator2774.key = new MFFloat(new float[0,0.48,0.52,0.64,0.76,0.88,1]);
OrientationInterpolator2774.keyValue = new MFRotation(new float[0,0,1,0,0.0672928,0.989475,-0.128107,4.15574,0.0672928,0.989475,-0.128107,4.15574,0.00364942,0.999901,0.0135896,4.5822,0,-1,0,0.655922,-0.00050618,-0.999999,0.0012782,1.28397,0,0,1,0]);
Group2761.children[12] = OrientationInterpolator2774;

OrientationInterpolator OrientationInterpolator2775 = createNode("OrientationInterpolator");
OrientationInterpolator2775.DEF = "Jump_l_elbow_RotationInterpolator";
OrientationInterpolator2775.key = new MFFloat(new float[0,0.28,0.32,0.58,0.72,1]);
OrientationInterpolator2775.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,1.13,-1,0,0,1.7,-1,0,0,1.7,-1,0,0,0.4,0,0,1,0]);
Group2761.children[13] = OrientationInterpolator2775;

OrientationInterpolator OrientationInterpolator2776 = createNode("OrientationInterpolator");
OrientationInterpolator2776.DEF = "Jump_l_shoulder_RotationInterpolator";
OrientationInterpolator2776.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,0.88,1]);
OrientationInterpolator2776.keyValue = new MFRotation(new float[0,0,1,0,-0.9987,0.02554,0.04498,1.57,-0.9987,0.02554,0.04498,1.57,1,0.0004113,0.003055,4.114,-0.8413,0.3238,0.4329,1.453,-0.877,0.4198,0.2337,0.6009,0,0,1,0]);
Group2761.children[14] = OrientationInterpolator2776;

OrientationInterpolator OrientationInterpolator2777 = createNode("OrientationInterpolator");
OrientationInterpolator2777.DEF = "Jump_head_RotationInterpolator";
OrientationInterpolator2777.key = new MFFloat(new float[0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator2777.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.5989,-1,0,0,0.5989,-1,0,0,0.3216,1,0,0,0.06503,0,0,1,0]);
Group2761.children[15] = OrientationInterpolator2777;

OrientationInterpolator OrientationInterpolator2778 = createNode("OrientationInterpolator");
OrientationInterpolator2778.DEF = "Jump_neck_RotationInterpolator";
OrientationInterpolator2778.key = new MFFloat(new float[0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator2778.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.1942,-1,0,0,0.1942,0,0,1,0,1,0,0,0.2284,0,0,1,0]);
Group2761.children[16] = OrientationInterpolator2778;

OrientationInterpolator OrientationInterpolator2779 = createNode("OrientationInterpolator");
OrientationInterpolator2779.DEF = "Jump_upper_body_RotationInterpolator";
OrientationInterpolator2779.key = new MFFloat(new float[0,0.22,0.28,0.34,0.71,0.88,1]);
OrientationInterpolator2779.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.05,1,0,0,1.051,-1,0,0,0.257,1,0,0,0.2171,1,0,0,0.3465,0,0,1,0]);
Group2761.children[17] = OrientationInterpolator2779;

OrientationInterpolator OrientationInterpolator2780 = createNode("OrientationInterpolator");
OrientationInterpolator2780.DEF = "Jump_whole_body_RotationInterpolator";
OrientationInterpolator2780.key = new MFFloat(new float[0,0.28,0.32,0.48,0.64,0.76,1]);
OrientationInterpolator2780.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,0.3273,1,0,0,0.3273,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2761.children[18] = OrientationInterpolator2780;

PositionInterpolator PositionInterpolator2781 = createNode("PositionInterpolator");
PositionInterpolator2781.DEF = "Jump_whole_body_TranslationInterpolator";
PositionInterpolator2781.key = new MFFloat(new float[0,0.04,0.07,0.11,0.15,0.19,0.22,0.25,0.27,0.31,0.33,0.35,0.38,0.53,0.544,0.76,0.8,0.84,0.88,0.92,0.96,1]);
PositionInterpolator2781.keyValue = new MFVec3f(new float[0,0,0,0,-0.01264,-0.01289,0,-0.04712,-0.03738,-0.0003345,-0.1049,-0.05353,-0.0005712,-0.1892,-0.06561,-0.0008233,-0.286,-0.06276,-0.0009591,-0.3795,-0.05148,-0.00106,-0.4484,-0.03656,-0.00106,-0.4484,-0.03656,-0.001122,-0.25,-0.1499,-0.0008616,-0.05,-0.06358,-0.0005128,0.15,-0.05488,0.0004779,0.55,0.02732,0.0001728,1.385,0.006873,0.00017,1.395,0.0069,0,0.35,0.02148,0,-0.01299,-0.01057,0,-0.06932,-0.01064,0.0001365,-0.1037,-0.005059,0.0001279,-0.07198,-0.007596,0.000141,-0.01626,-0.004935,0,0,0]);
Group2761.children[19] = PositionInterpolator2781;

OrientationInterpolator OrientationInterpolator2782 = createNode("OrientationInterpolator");
OrientationInterpolator2782.DEF = "Jump_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2782.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2782.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0]);
Group2761.children[20] = OrientationInterpolator2782;

OrientationInterpolator OrientationInterpolator2783 = createNode("OrientationInterpolator");
OrientationInterpolator2783.DEF = "Jump_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2783.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2783.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2761.children[21] = OrientationInterpolator2783;

OrientationInterpolator OrientationInterpolator2784 = createNode("OrientationInterpolator");
OrientationInterpolator2784.DEF = "Jump_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2784.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2784.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0]);
Group2761.children[22] = OrientationInterpolator2784;

OrientationInterpolator OrientationInterpolator2785 = createNode("OrientationInterpolator");
OrientationInterpolator2785.DEF = "Jump_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2785.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2785.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2761.children[23] = OrientationInterpolator2785;

OrientationInterpolator OrientationInterpolator2786 = createNode("OrientationInterpolator");
OrientationInterpolator2786.DEF = "Jump_sacroiliac_YawInterpolator";
OrientationInterpolator2786.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2786.keyValue = new MFRotation(new float[0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,-1,0.24,0,-1,0,0.4,0,1,0,0]);
Group2761.children[24] = OrientationInterpolator2786;

OrientationInterpolator OrientationInterpolator2787 = createNode("OrientationInterpolator");
OrientationInterpolator2787.DEF = "Jump_vl5_YawInterpolator";
OrientationInterpolator2787.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2787.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,-0.1,0,1,0,0,0,1,0,0,1,0,0,0.6,0,1,0,0.1,0,1,0,0]);
Group2761.children[25] = OrientationInterpolator2787;

OrientationInterpolator OrientationInterpolator2788 = createNode("OrientationInterpolator");
OrientationInterpolator2788.DEF = "Jump_vc6_YawInterpolator";
OrientationInterpolator2788.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2788.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,0.8,0,1,0,0,0,1,0,0,-1,0,0,0.6,0,-1,0,0.8,0,1,0,0]);
Group2761.children[26] = OrientationInterpolator2788;

OrientationInterpolator OrientationInterpolator2789 = createNode("OrientationInterpolator");
OrientationInterpolator2789.DEF = "Jump_l_thumb1_PitchInterpolator";
OrientationInterpolator2789.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2789.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group2761.children[27] = OrientationInterpolator2789;

OrientationInterpolator OrientationInterpolator2790 = createNode("OrientationInterpolator");
OrientationInterpolator2790.DEF = "Jump_r_thumb1_PitchInterpolator";
OrientationInterpolator2790.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2790.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group2761.children[28] = OrientationInterpolator2790;

ROUTE ROUTE2791 = createNode("ROUTE");
ROUTE2791.fromField = "fraction_changed";
ROUTE2791.fromNode = "JumpTimer";
ROUTE2791.toField = "set_fraction";
ROUTE2791.toNode = "Jump_r_ankle_RotationInterpolator";
Group2761.children[29] = ROUTE2791;

ROUTE ROUTE2792 = createNode("ROUTE");
ROUTE2792.fromField = "fraction_changed";
ROUTE2792.fromNode = "JumpTimer";
ROUTE2792.toField = "set_fraction";
ROUTE2792.toNode = "Jump_r_knee_RotationInterpolator";
Group2761.children[30] = ROUTE2792;

ROUTE ROUTE2793 = createNode("ROUTE");
ROUTE2793.fromField = "fraction_changed";
ROUTE2793.fromNode = "JumpTimer";
ROUTE2793.toField = "set_fraction";
ROUTE2793.toNode = "Jump_r_hip_RotationInterpolator";
Group2761.children[31] = ROUTE2793;

ROUTE ROUTE2794 = createNode("ROUTE");
ROUTE2794.fromField = "fraction_changed";
ROUTE2794.fromNode = "JumpTimer";
ROUTE2794.toField = "set_fraction";
ROUTE2794.toNode = "Jump_l_ankle_RotationInterpolator";
Group2761.children[32] = ROUTE2794;

ROUTE ROUTE2795 = createNode("ROUTE");
ROUTE2795.fromField = "fraction_changed";
ROUTE2795.fromNode = "JumpTimer";
ROUTE2795.toField = "set_fraction";
ROUTE2795.toNode = "Jump_l_knee_RotationInterpolator";
Group2761.children[33] = ROUTE2795;

ROUTE ROUTE2796 = createNode("ROUTE");
ROUTE2796.fromField = "fraction_changed";
ROUTE2796.fromNode = "JumpTimer";
ROUTE2796.toField = "set_fraction";
ROUTE2796.toNode = "Jump_l_hip_RotationInterpolator";
Group2761.children[34] = ROUTE2796;

ROUTE ROUTE2797 = createNode("ROUTE");
ROUTE2797.fromField = "fraction_changed";
ROUTE2797.fromNode = "JumpTimer";
ROUTE2797.toField = "set_fraction";
ROUTE2797.toNode = "Jump_lower_body_RotationInterpolator";
Group2761.children[35] = ROUTE2797;

ROUTE ROUTE2798 = createNode("ROUTE");
ROUTE2798.fromField = "fraction_changed";
ROUTE2798.fromNode = "JumpTimer";
ROUTE2798.toField = "set_fraction";
ROUTE2798.toNode = "Jump_r_wrist_RotationInterpolator";
Group2761.children[36] = ROUTE2798;

ROUTE ROUTE2799 = createNode("ROUTE");
ROUTE2799.fromField = "fraction_changed";
ROUTE2799.fromNode = "JumpTimer";
ROUTE2799.toField = "set_fraction";
ROUTE2799.toNode = "Jump_r_elbow_RotationInterpolator";
Group2761.children[37] = ROUTE2799;

ROUTE ROUTE2800 = createNode("ROUTE");
ROUTE2800.fromField = "fraction_changed";
ROUTE2800.fromNode = "JumpTimer";
ROUTE2800.toField = "set_fraction";
ROUTE2800.toNode = "Jump_r_shoulder_RotationInterpolator";
Group2761.children[38] = ROUTE2800;

ROUTE ROUTE2801 = createNode("ROUTE");
ROUTE2801.fromField = "fraction_changed";
ROUTE2801.fromNode = "JumpTimer";
ROUTE2801.toField = "set_fraction";
ROUTE2801.toNode = "Jump_l_wrist_RotationInterpolator";
Group2761.children[39] = ROUTE2801;

ROUTE ROUTE2802 = createNode("ROUTE");
ROUTE2802.fromField = "fraction_changed";
ROUTE2802.fromNode = "JumpTimer";
ROUTE2802.toField = "set_fraction";
ROUTE2802.toNode = "Jump_l_elbow_RotationInterpolator";
Group2761.children[40] = ROUTE2802;

ROUTE ROUTE2803 = createNode("ROUTE");
ROUTE2803.fromField = "fraction_changed";
ROUTE2803.fromNode = "JumpTimer";
ROUTE2803.toField = "set_fraction";
ROUTE2803.toNode = "Jump_l_shoulder_RotationInterpolator";
Group2761.children[41] = ROUTE2803;

ROUTE ROUTE2804 = createNode("ROUTE");
ROUTE2804.fromField = "fraction_changed";
ROUTE2804.fromNode = "JumpTimer";
ROUTE2804.toField = "set_fraction";
ROUTE2804.toNode = "Jump_head_RotationInterpolator";
Group2761.children[42] = ROUTE2804;

ROUTE ROUTE2805 = createNode("ROUTE");
ROUTE2805.fromField = "fraction_changed";
ROUTE2805.fromNode = "JumpTimer";
ROUTE2805.toField = "set_fraction";
ROUTE2805.toNode = "Jump_neck_RotationInterpolator";
Group2761.children[43] = ROUTE2805;

ROUTE ROUTE2806 = createNode("ROUTE");
ROUTE2806.fromField = "fraction_changed";
ROUTE2806.fromNode = "JumpTimer";
ROUTE2806.toField = "set_fraction";
ROUTE2806.toNode = "Jump_upper_body_RotationInterpolator";
Group2761.children[44] = ROUTE2806;

ROUTE ROUTE2807 = createNode("ROUTE");
ROUTE2807.fromField = "fraction_changed";
ROUTE2807.fromNode = "JumpTimer";
ROUTE2807.toField = "set_fraction";
ROUTE2807.toNode = "Jump_whole_body_RotationInterpolator";
Group2761.children[45] = ROUTE2807;

ROUTE ROUTE2808 = createNode("ROUTE");
ROUTE2808.fromField = "fraction_changed";
ROUTE2808.fromNode = "JumpTimer";
ROUTE2808.toField = "set_fraction";
ROUTE2808.toNode = "Jump_whole_body_TranslationInterpolator";
Group2761.children[46] = ROUTE2808;

ROUTE ROUTE2809 = createNode("ROUTE");
ROUTE2809.fromField = "fraction_changed";
ROUTE2809.fromNode = "JumpTimer";
ROUTE2809.toField = "set_fraction";
ROUTE2809.toNode = "Jump_l_sternoclavicular_RollInterpolator";
Group2761.children[47] = ROUTE2809;

ROUTE ROUTE2810 = createNode("ROUTE");
ROUTE2810.fromField = "fraction_changed";
ROUTE2810.fromNode = "JumpTimer";
ROUTE2810.toField = "set_fraction";
ROUTE2810.toNode = "Jump_l_acromioclavicular_RollInterpolator";
Group2761.children[48] = ROUTE2810;

ROUTE ROUTE2811 = createNode("ROUTE");
ROUTE2811.fromField = "fraction_changed";
ROUTE2811.fromNode = "JumpTimer";
ROUTE2811.toField = "set_fraction";
ROUTE2811.toNode = "Jump_r_sternoclavicular_RollInterpolator";
Group2761.children[49] = ROUTE2811;

ROUTE ROUTE2812 = createNode("ROUTE");
ROUTE2812.fromField = "fraction_changed";
ROUTE2812.fromNode = "JumpTimer";
ROUTE2812.toField = "set_fraction";
ROUTE2812.toNode = "Jump_r_acromioclavicular_RollInterpolator";
Group2761.children[50] = ROUTE2812;

ROUTE ROUTE2813 = createNode("ROUTE");
ROUTE2813.fromField = "fraction_changed";
ROUTE2813.fromNode = "JumpTimer";
ROUTE2813.toField = "set_fraction";
ROUTE2813.toNode = "Jump_r_metatarsal_PitchInterpolator";
Group2761.children[51] = ROUTE2813;

ROUTE ROUTE2814 = createNode("ROUTE");
ROUTE2814.fromField = "fraction_changed";
ROUTE2814.fromNode = "JumpTimer";
ROUTE2814.toField = "set_fraction";
ROUTE2814.toNode = "Jump_sacroiliac_YawInterpolator";
Group2761.children[52] = ROUTE2814;

ROUTE ROUTE2815 = createNode("ROUTE");
ROUTE2815.fromField = "fraction_changed";
ROUTE2815.fromNode = "JumpTimer";
ROUTE2815.toField = "set_fraction";
ROUTE2815.toNode = "Jump_vl5_YawInterpolator";
Group2761.children[53] = ROUTE2815;

ROUTE ROUTE2816 = createNode("ROUTE");
ROUTE2816.fromField = "fraction_changed";
ROUTE2816.fromNode = "JumpTimer";
ROUTE2816.toField = "set_fraction";
ROUTE2816.toNode = "Jump_vc6_YawInterpolator";
Group2761.children[54] = ROUTE2816;

ROUTE ROUTE2817 = createNode("ROUTE");
ROUTE2817.fromField = "fraction_changed";
ROUTE2817.fromNode = "JumpTimer";
ROUTE2817.toField = "set_fraction";
ROUTE2817.toNode = "Jump_l_thumb1_PitchInterpolator";
Group2761.children[55] = ROUTE2817;

ROUTE ROUTE2818 = createNode("ROUTE");
ROUTE2818.fromField = "fraction_changed";
ROUTE2818.fromNode = "JumpTimer";
ROUTE2818.toField = "set_fraction";
ROUTE2818.toNode = "Jump_r_thumb1_PitchInterpolator";
Group2761.children[56] = ROUTE2818;

ROUTE ROUTE2819 = createNode("ROUTE");
ROUTE2819.fromField = "value_changed";
ROUTE2819.fromNode = "Jump_r_ankle_RotationInterpolator";
ROUTE2819.toField = "rotation";
ROUTE2819.toNode = "hanim_r_ankle";
Group2761.children[57] = ROUTE2819;

ROUTE ROUTE2820 = createNode("ROUTE");
ROUTE2820.fromField = "value_changed";
ROUTE2820.fromNode = "Jump_r_knee_RotationInterpolator";
ROUTE2820.toField = "rotation";
ROUTE2820.toNode = "hanim_r_knee";
Group2761.children[58] = ROUTE2820;

ROUTE ROUTE2821 = createNode("ROUTE");
ROUTE2821.fromField = "value_changed";
ROUTE2821.fromNode = "Jump_r_hip_RotationInterpolator";
ROUTE2821.toField = "rotation";
ROUTE2821.toNode = "hanim_r_hip";
Group2761.children[59] = ROUTE2821;

ROUTE ROUTE2822 = createNode("ROUTE");
ROUTE2822.fromField = "value_changed";
ROUTE2822.fromNode = "Jump_l_ankle_RotationInterpolator";
ROUTE2822.toField = "rotation";
ROUTE2822.toNode = "hanim_l_ankle";
Group2761.children[60] = ROUTE2822;

ROUTE ROUTE2823 = createNode("ROUTE");
ROUTE2823.fromField = "value_changed";
ROUTE2823.fromNode = "Jump_l_knee_RotationInterpolator";
ROUTE2823.toField = "rotation";
ROUTE2823.toNode = "hanim_l_knee";
Group2761.children[61] = ROUTE2823;

ROUTE ROUTE2824 = createNode("ROUTE");
ROUTE2824.fromField = "value_changed";
ROUTE2824.fromNode = "Jump_l_hip_RotationInterpolator";
ROUTE2824.toField = "rotation";
ROUTE2824.toNode = "hanim_l_hip";
Group2761.children[62] = ROUTE2824;

ROUTE ROUTE2825 = createNode("ROUTE");
ROUTE2825.fromField = "value_changed";
ROUTE2825.fromNode = "Jump_lower_body_RotationInterpolator";
ROUTE2825.toField = "rotation";
ROUTE2825.toNode = "hanim_sacroiliac";
Group2761.children[63] = ROUTE2825;

ROUTE ROUTE2826 = createNode("ROUTE");
ROUTE2826.fromField = "value_changed";
ROUTE2826.fromNode = "Jump_r_wrist_RotationInterpolator";
ROUTE2826.toField = "rotation";
ROUTE2826.toNode = "hanim_r_wrist";
Group2761.children[64] = ROUTE2826;

ROUTE ROUTE2827 = createNode("ROUTE");
ROUTE2827.fromField = "value_changed";
ROUTE2827.fromNode = "Jump_r_elbow_RotationInterpolator";
ROUTE2827.toField = "rotation";
ROUTE2827.toNode = "hanim_r_elbow";
Group2761.children[65] = ROUTE2827;

ROUTE ROUTE2828 = createNode("ROUTE");
ROUTE2828.fromField = "value_changed";
ROUTE2828.fromNode = "Jump_r_shoulder_RotationInterpolator";
ROUTE2828.toField = "rotation";
ROUTE2828.toNode = "hanim_r_shoulder";
Group2761.children[66] = ROUTE2828;

ROUTE ROUTE2829 = createNode("ROUTE");
ROUTE2829.fromField = "value_changed";
ROUTE2829.fromNode = "Jump_l_wrist_RotationInterpolator";
ROUTE2829.toField = "rotation";
ROUTE2829.toNode = "hanim_l_wrist";
Group2761.children[67] = ROUTE2829;

ROUTE ROUTE2830 = createNode("ROUTE");
ROUTE2830.fromField = "value_changed";
ROUTE2830.fromNode = "Jump_l_elbow_RotationInterpolator";
ROUTE2830.toField = "rotation";
ROUTE2830.toNode = "hanim_l_elbow";
Group2761.children[68] = ROUTE2830;

ROUTE ROUTE2831 = createNode("ROUTE");
ROUTE2831.fromField = "value_changed";
ROUTE2831.fromNode = "Jump_l_shoulder_RotationInterpolator";
ROUTE2831.toField = "rotation";
ROUTE2831.toNode = "hanim_l_shoulder";
Group2761.children[69] = ROUTE2831;

ROUTE ROUTE2832 = createNode("ROUTE");
ROUTE2832.fromField = "value_changed";
ROUTE2832.fromNode = "Jump_head_RotationInterpolator";
ROUTE2832.toField = "rotation";
ROUTE2832.toNode = "hanim_skullbase";
Group2761.children[70] = ROUTE2832;

ROUTE ROUTE2833 = createNode("ROUTE");
ROUTE2833.fromField = "value_changed";
ROUTE2833.fromNode = "Jump_neck_RotationInterpolator";
ROUTE2833.toField = "rotation";
ROUTE2833.toNode = "hanim_vc4";
Group2761.children[71] = ROUTE2833;

ROUTE ROUTE2834 = createNode("ROUTE");
ROUTE2834.fromField = "value_changed";
ROUTE2834.fromNode = "Jump_upper_body_RotationInterpolator";
ROUTE2834.toField = "rotation";
ROUTE2834.toNode = "hanim_vl1";
Group2761.children[72] = ROUTE2834;

ROUTE ROUTE2835 = createNode("ROUTE");
ROUTE2835.fromField = "value_changed";
ROUTE2835.fromNode = "Jump_whole_body_RotationInterpolator";
ROUTE2835.toField = "rotation";
ROUTE2835.toNode = "hanim_humanoid_root";
Group2761.children[73] = ROUTE2835;

ROUTE ROUTE2836 = createNode("ROUTE");
ROUTE2836.fromField = "value_changed";
ROUTE2836.fromNode = "Jump_whole_body_TranslationInterpolator";
ROUTE2836.toField = "translation";
ROUTE2836.toNode = "hanim_humanoid_root";
Group2761.children[74] = ROUTE2836;

ROUTE ROUTE2837 = createNode("ROUTE");
ROUTE2837.fromField = "value_changed";
ROUTE2837.fromNode = "Jump_l_sternoclavicular_RollInterpolator";
ROUTE2837.toField = "rotation";
ROUTE2837.toNode = "hanim_l_sternoclavicular";
Group2761.children[75] = ROUTE2837;

ROUTE ROUTE2838 = createNode("ROUTE");
ROUTE2838.fromField = "value_changed";
ROUTE2838.fromNode = "Jump_l_acromioclavicular_RollInterpolator";
ROUTE2838.toField = "rotation";
ROUTE2838.toNode = "hanim_l_acromioclavicular";
Group2761.children[76] = ROUTE2838;

ROUTE ROUTE2839 = createNode("ROUTE");
ROUTE2839.fromField = "value_changed";
ROUTE2839.fromNode = "Jump_r_sternoclavicular_RollInterpolator";
ROUTE2839.toField = "rotation";
ROUTE2839.toNode = "hanim_r_sternoclavicular";
Group2761.children[77] = ROUTE2839;

ROUTE ROUTE2840 = createNode("ROUTE");
ROUTE2840.fromField = "value_changed";
ROUTE2840.fromNode = "Jump_r_acromioclavicular_RollInterpolator";
ROUTE2840.toField = "rotation";
ROUTE2840.toNode = "hanim_r_acromioclavicular";
Group2761.children[78] = ROUTE2840;

ROUTE ROUTE2841 = createNode("ROUTE");
ROUTE2841.fromField = "value_changed";
ROUTE2841.fromNode = "Jump_r_metatarsal_PitchInterpolator";
ROUTE2841.toField = "rotation";
ROUTE2841.toNode = "hanim_l_metatarsal";
Group2761.children[79] = ROUTE2841;

ROUTE ROUTE2842 = createNode("ROUTE");
ROUTE2842.fromField = "value_changed";
ROUTE2842.fromNode = "Jump_r_metatarsal_PitchInterpolator";
ROUTE2842.toField = "rotation";
ROUTE2842.toNode = "hanim_r_metatarsal";
Group2761.children[80] = ROUTE2842;

ROUTE ROUTE2843 = createNode("ROUTE");
ROUTE2843.fromField = "value_changed";
ROUTE2843.fromNode = "Jump_sacroiliac_YawInterpolator";
ROUTE2843.toField = "rotation";
ROUTE2843.toNode = "hanim_sacroiliac";
Group2761.children[81] = ROUTE2843;

ROUTE ROUTE2844 = createNode("ROUTE");
ROUTE2844.fromField = "value_changed";
ROUTE2844.fromNode = "Jump_vl5_YawInterpolator";
ROUTE2844.toField = "rotation";
ROUTE2844.toNode = "hanim_vl5";
Group2761.children[82] = ROUTE2844;

ROUTE ROUTE2845 = createNode("ROUTE");
ROUTE2845.fromField = "value_changed";
ROUTE2845.fromNode = "Jump_vc6_YawInterpolator";
ROUTE2845.toField = "rotation";
ROUTE2845.toNode = "hanim_vc6";
Group2761.children[83] = ROUTE2845;

ROUTE ROUTE2846 = createNode("ROUTE");
ROUTE2846.fromField = "value_changed";
ROUTE2846.fromNode = "Jump_l_thumb1_PitchInterpolator";
ROUTE2846.toField = "rotation";
ROUTE2846.toNode = "hanim_l_thumb1";
Group2761.children[84] = ROUTE2846;

ROUTE ROUTE2847 = createNode("ROUTE");
ROUTE2847.fromField = "value_changed";
ROUTE2847.fromNode = "Jump_r_thumb1_PitchInterpolator";
ROUTE2847.toField = "rotation";
ROUTE2847.toNode = "hanim_r_thumb1";
Group2761.children[85] = ROUTE2847;

children[20] = Group2761;

Group Group2848 = createNode("Group");
Group2848.DEF = "KickAnimation";
TimeSensor TimeSensor2849 = createNode("TimeSensor");
TimeSensor2849.DEF = "KickTimer";
TimeSensor2849.cycleInterval = 3.73;
TimeSensor2849.loop = True;
Group2848.children = new MFNode();

Group2848.children[0] = TimeSensor2849;

OrientationInterpolator OrientationInterpolator2850 = createNode("OrientationInterpolator");
OrientationInterpolator2850.DEF = "Kick_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2850.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2850.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0]);
Group2848.children[1] = OrientationInterpolator2850;

OrientationInterpolator OrientationInterpolator2851 = createNode("OrientationInterpolator");
OrientationInterpolator2851.DEF = "Kick_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2851.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2851.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2848.children[2] = OrientationInterpolator2851;

OrientationInterpolator OrientationInterpolator2852 = createNode("OrientationInterpolator");
OrientationInterpolator2852.DEF = "Kick_l_shoulder_RollInterpolator";
OrientationInterpolator2852.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2852.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.76,-0.25,0,1,1.76,0,0,1,1.256,0,0,1,0.05,0,0,1,0]);
Group2848.children[3] = OrientationInterpolator2852;

OrientationInterpolator OrientationInterpolator2853 = createNode("OrientationInterpolator");
OrientationInterpolator2853.DEF = "Kick_l_ForeArm_PitchInterpolator";
OrientationInterpolator2853.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2853.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,-0.55,-1,0.25,0,2.55,1,0,0,0,1,0,0,0,1,0,0,0]);
Group2848.children[4] = OrientationInterpolator2853;

OrientationInterpolator OrientationInterpolator2854 = createNode("OrientationInterpolator");
OrientationInterpolator2854.DEF = "Kick_l_wrist_RollInterpolator";
OrientationInterpolator2854.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2854.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,1,0,0.55,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2848.children[5] = OrientationInterpolator2854;

OrientationInterpolator OrientationInterpolator2855 = createNode("OrientationInterpolator");
OrientationInterpolator2855.DEF = "Kick_l_thumb1_PitchInterpolator";
OrientationInterpolator2855.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2855.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group2848.children[6] = OrientationInterpolator2855;

OrientationInterpolator OrientationInterpolator2856 = createNode("OrientationInterpolator");
OrientationInterpolator2856.DEF = "Kick_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2856.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2856.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0]);
Group2848.children[7] = OrientationInterpolator2856;

OrientationInterpolator OrientationInterpolator2857 = createNode("OrientationInterpolator");
OrientationInterpolator2857.DEF = "Kick_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2857.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2857.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2848.children[8] = OrientationInterpolator2857;

OrientationInterpolator OrientationInterpolator2858 = createNode("OrientationInterpolator");
OrientationInterpolator2858.DEF = "Kick_r_shoulder_RollInterpolator";
OrientationInterpolator2858.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2858.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,-1.76,0.25,0,1,-1.76,0,0,1,-1.256,0,0,1,-0.05,0,0,1,0]);
Group2848.children[9] = OrientationInterpolator2858;

OrientationInterpolator OrientationInterpolator2859 = createNode("OrientationInterpolator");
OrientationInterpolator2859.DEF = "Kick_r_ForeArm_PitchInterpolator";
OrientationInterpolator2859.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2859.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,-0.55,1,0.25,0,-2.55,1,0,0,0,1,0,0,0,1,0,0,0]);
Group2848.children[10] = OrientationInterpolator2859;

OrientationInterpolator OrientationInterpolator2860 = createNode("OrientationInterpolator");
OrientationInterpolator2860.DEF = "Kick_r_wrist_RollInterpolator";
OrientationInterpolator2860.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2860.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,1,0,-0.55,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2848.children[11] = OrientationInterpolator2860;

OrientationInterpolator OrientationInterpolator2861 = createNode("OrientationInterpolator");
OrientationInterpolator2861.DEF = "Kick_r_thumb1_PitchInterpolator";
OrientationInterpolator2861.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2861.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group2848.children[12] = OrientationInterpolator2861;

OrientationInterpolator OrientationInterpolator2862 = createNode("OrientationInterpolator");
OrientationInterpolator2862.DEF = "Kick_r_hip_PitchInterpolator";
OrientationInterpolator2862.key = new MFFloat(new float[0,0.2,0.3,0.5,0.6,0.9,1]);
OrientationInterpolator2862.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.9,-1,0,0,1.75,-1,0,0,2.25,-1,0,0,2,1,0,0,0,1,0,0,0]);
Group2848.children[13] = OrientationInterpolator2862;

OrientationInterpolator OrientationInterpolator2863 = createNode("OrientationInterpolator");
OrientationInterpolator2863.DEF = "Kick_r_knee_PitchInterpolator";
OrientationInterpolator2863.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2863.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.95,1,0,0,1.75,-1,0,0,0.28,1,0,0,0,1,0,0,0]);
Group2848.children[14] = OrientationInterpolator2863;

OrientationInterpolator OrientationInterpolator2864 = createNode("OrientationInterpolator");
OrientationInterpolator2864.DEF = "Kick_l_hip_PitchInterpolator";
OrientationInterpolator2864.key = new MFFloat(new float[0,0.2,0.3,0.5,0.6,0.9,1]);
OrientationInterpolator2864.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2848.children[15] = OrientationInterpolator2864;

OrientationInterpolator OrientationInterpolator2865 = createNode("OrientationInterpolator");
OrientationInterpolator2865.DEF = "Kick_l_knee_PitchInterpolator";
OrientationInterpolator2865.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2865.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2848.children[16] = OrientationInterpolator2865;

OrientationInterpolator OrientationInterpolator2866 = createNode("OrientationInterpolator");
OrientationInterpolator2866.DEF = "Kick_r_ankle_PitchInterpolator";
OrientationInterpolator2866.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2866.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.9,-1,0,0,0.95,1,0,0,0.75,-1,0,0,0.05,1,0,0,0]);
Group2848.children[17] = OrientationInterpolator2866;

OrientationInterpolator OrientationInterpolator2867 = createNode("OrientationInterpolator");
OrientationInterpolator2867.DEF = "Kick_r_metatarsal_PitchInterpolator";
OrientationInterpolator2867.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2867.keyValue = new MFRotation(new float[1,0,0,0,-1,0,0,0.5,-1,0,0,0.7,1,0,0,0.75,-1,0,0,0.2,1,0,0,0]);
Group2848.children[18] = OrientationInterpolator2867;

OrientationInterpolator OrientationInterpolator2868 = createNode("OrientationInterpolator");
OrientationInterpolator2868.DEF = "Kick_sacroiliac_YawInterpolator";
OrientationInterpolator2868.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2868.keyValue = new MFRotation(new float[0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,-1,0.24,0,-1,0,0.4,0,1,0,0]);
Group2848.children[19] = OrientationInterpolator2868;

OrientationInterpolator OrientationInterpolator2869 = createNode("OrientationInterpolator");
OrientationInterpolator2869.DEF = "Kick_vl5_YawInterpolator";
OrientationInterpolator2869.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2869.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2848.children[20] = OrientationInterpolator2869;

OrientationInterpolator OrientationInterpolator2870 = createNode("OrientationInterpolator");
OrientationInterpolator2870.DEF = "Kick_vc6_YawInterpolator";
OrientationInterpolator2870.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2870.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2848.children[21] = OrientationInterpolator2870;

OrientationInterpolator OrientationInterpolator2871 = createNode("OrientationInterpolator");
OrientationInterpolator2871.DEF = "Kick_lower_body_RotationInterpolator";
OrientationInterpolator2871.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2871.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2848.children[22] = OrientationInterpolator2871;

OrientationInterpolator OrientationInterpolator2872 = createNode("OrientationInterpolator");
OrientationInterpolator2872.DEF = "Kick_upper_body_RotationInterpolator";
OrientationInterpolator2872.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2872.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2848.children[23] = OrientationInterpolator2872;

OrientationInterpolator OrientationInterpolator2873 = createNode("OrientationInterpolator");
OrientationInterpolator2873.DEF = "Kick_whole_body_RotationInterpolator";
OrientationInterpolator2873.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2873.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2848.children[24] = OrientationInterpolator2873;

PositionInterpolator PositionInterpolator2874 = createNode("PositionInterpolator");
PositionInterpolator2874.DEF = "Kick_whole_body_TranslationInterpolator";
PositionInterpolator2874.key = new MFFloat(new float[0,0.5,1]);
PositionInterpolator2874.keyValue = new MFVec3f(new float[0,0,0,0,0,0,0,0,0]);
Group2848.children[25] = PositionInterpolator2874;

OrientationInterpolator OrientationInterpolator2875 = createNode("OrientationInterpolator");
OrientationInterpolator2875.DEF = "Kick_neck_RotationInterpolator";
OrientationInterpolator2875.key = new MFFloat(new float[0,0.25,0.55,1]);
OrientationInterpolator2875.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,0.7,1,0,0,0.5,0,0,1,0]);
Group2848.children[26] = OrientationInterpolator2875;

ROUTE ROUTE2876 = createNode("ROUTE");
ROUTE2876.fromField = "fraction_changed";
ROUTE2876.fromNode = "KickTimer";
ROUTE2876.toField = "set_fraction";
ROUTE2876.toNode = "Kick_l_sternoclavicular_RollInterpolator";
Group2848.children[27] = ROUTE2876;

ROUTE ROUTE2877 = createNode("ROUTE");
ROUTE2877.fromField = "fraction_changed";
ROUTE2877.fromNode = "KickTimer";
ROUTE2877.toField = "set_fraction";
ROUTE2877.toNode = "Kick_l_acromioclavicular_RollInterpolator";
Group2848.children[28] = ROUTE2877;

ROUTE ROUTE2878 = createNode("ROUTE");
ROUTE2878.fromField = "fraction_changed";
ROUTE2878.fromNode = "KickTimer";
ROUTE2878.toField = "set_fraction";
ROUTE2878.toNode = "Kick_l_shoulder_RollInterpolator";
Group2848.children[29] = ROUTE2878;

ROUTE ROUTE2879 = createNode("ROUTE");
ROUTE2879.fromField = "fraction_changed";
ROUTE2879.fromNode = "KickTimer";
ROUTE2879.toField = "set_fraction";
ROUTE2879.toNode = "Kick_l_ForeArm_PitchInterpolator";
Group2848.children[30] = ROUTE2879;

ROUTE ROUTE2880 = createNode("ROUTE");
ROUTE2880.fromField = "fraction_changed";
ROUTE2880.fromNode = "KickTimer";
ROUTE2880.toField = "set_fraction";
ROUTE2880.toNode = "Kick_l_wrist_RollInterpolator";
Group2848.children[31] = ROUTE2880;

ROUTE ROUTE2881 = createNode("ROUTE");
ROUTE2881.fromField = "fraction_changed";
ROUTE2881.fromNode = "KickTimer";
ROUTE2881.toField = "set_fraction";
ROUTE2881.toNode = "Kick_l_thumb1_PitchInterpolator";
Group2848.children[32] = ROUTE2881;

ROUTE ROUTE2882 = createNode("ROUTE");
ROUTE2882.fromField = "fraction_changed";
ROUTE2882.fromNode = "KickTimer";
ROUTE2882.toField = "set_fraction";
ROUTE2882.toNode = "Kick_r_sternoclavicular_RollInterpolator";
Group2848.children[33] = ROUTE2882;

ROUTE ROUTE2883 = createNode("ROUTE");
ROUTE2883.fromField = "fraction_changed";
ROUTE2883.fromNode = "KickTimer";
ROUTE2883.toField = "set_fraction";
ROUTE2883.toNode = "Kick_r_acromioclavicular_RollInterpolator";
Group2848.children[34] = ROUTE2883;

ROUTE ROUTE2884 = createNode("ROUTE");
ROUTE2884.fromField = "fraction_changed";
ROUTE2884.fromNode = "KickTimer";
ROUTE2884.toField = "set_fraction";
ROUTE2884.toNode = "Kick_r_shoulder_RollInterpolator";
Group2848.children[35] = ROUTE2884;

ROUTE ROUTE2885 = createNode("ROUTE");
ROUTE2885.fromField = "fraction_changed";
ROUTE2885.fromNode = "KickTimer";
ROUTE2885.toField = "set_fraction";
ROUTE2885.toNode = "Kick_r_ForeArm_PitchInterpolator";
Group2848.children[36] = ROUTE2885;

ROUTE ROUTE2886 = createNode("ROUTE");
ROUTE2886.fromField = "fraction_changed";
ROUTE2886.fromNode = "KickTimer";
ROUTE2886.toField = "set_fraction";
ROUTE2886.toNode = "Kick_r_wrist_RollInterpolator";
Group2848.children[37] = ROUTE2886;

ROUTE ROUTE2887 = createNode("ROUTE");
ROUTE2887.fromField = "fraction_changed";
ROUTE2887.fromNode = "KickTimer";
ROUTE2887.toField = "set_fraction";
ROUTE2887.toNode = "Kick_r_thumb1_PitchInterpolator";
Group2848.children[38] = ROUTE2887;

ROUTE ROUTE2888 = createNode("ROUTE");
ROUTE2888.fromField = "fraction_changed";
ROUTE2888.fromNode = "KickTimer";
ROUTE2888.toField = "set_fraction";
ROUTE2888.toNode = "Kick_r_hip_PitchInterpolator";
Group2848.children[39] = ROUTE2888;

ROUTE ROUTE2889 = createNode("ROUTE");
ROUTE2889.fromField = "fraction_changed";
ROUTE2889.fromNode = "KickTimer";
ROUTE2889.toField = "set_fraction";
ROUTE2889.toNode = "Kick_r_knee_PitchInterpolator";
Group2848.children[40] = ROUTE2889;

ROUTE ROUTE2890 = createNode("ROUTE");
ROUTE2890.fromField = "fraction_changed";
ROUTE2890.fromNode = "KickTimer";
ROUTE2890.toField = "set_fraction";
ROUTE2890.toNode = "Kick_l_hip_PitchInterpolator";
Group2848.children[41] = ROUTE2890;

ROUTE ROUTE2891 = createNode("ROUTE");
ROUTE2891.fromField = "fraction_changed";
ROUTE2891.fromNode = "KickTimer";
ROUTE2891.toField = "set_fraction";
ROUTE2891.toNode = "Kick_l_knee_PitchInterpolator";
Group2848.children[42] = ROUTE2891;

ROUTE ROUTE2892 = createNode("ROUTE");
ROUTE2892.fromField = "fraction_changed";
ROUTE2892.fromNode = "KickTimer";
ROUTE2892.toField = "set_fraction";
ROUTE2892.toNode = "Kick_r_ankle_PitchInterpolator";
Group2848.children[43] = ROUTE2892;

ROUTE ROUTE2893 = createNode("ROUTE");
ROUTE2893.fromField = "fraction_changed";
ROUTE2893.fromNode = "KickTimer";
ROUTE2893.toField = "set_fraction";
ROUTE2893.toNode = "Kick_r_metatarsal_PitchInterpolator";
Group2848.children[44] = ROUTE2893;

ROUTE ROUTE2894 = createNode("ROUTE");
ROUTE2894.fromField = "fraction_changed";
ROUTE2894.fromNode = "KickTimer";
ROUTE2894.toField = "set_fraction";
ROUTE2894.toNode = "Kick_sacroiliac_YawInterpolator";
Group2848.children[45] = ROUTE2894;

ROUTE ROUTE2895 = createNode("ROUTE");
ROUTE2895.fromField = "fraction_changed";
ROUTE2895.fromNode = "KickTimer";
ROUTE2895.toField = "set_fraction";
ROUTE2895.toNode = "Kick_vl5_YawInterpolator";
Group2848.children[46] = ROUTE2895;

ROUTE ROUTE2896 = createNode("ROUTE");
ROUTE2896.fromField = "fraction_changed";
ROUTE2896.fromNode = "KickTimer";
ROUTE2896.toField = "set_fraction";
ROUTE2896.toNode = "Kick_vc6_YawInterpolator";
Group2848.children[47] = ROUTE2896;

ROUTE ROUTE2897 = createNode("ROUTE");
ROUTE2897.fromField = "fraction_changed";
ROUTE2897.fromNode = "KickTimer";
ROUTE2897.toField = "set_fraction";
ROUTE2897.toNode = "Kick_lower_body_RotationInterpolator";
Group2848.children[48] = ROUTE2897;

ROUTE ROUTE2898 = createNode("ROUTE");
ROUTE2898.fromField = "fraction_changed";
ROUTE2898.fromNode = "KickTimer";
ROUTE2898.toField = "set_fraction";
ROUTE2898.toNode = "Kick_upper_body_RotationInterpolator";
Group2848.children[49] = ROUTE2898;

ROUTE ROUTE2899 = createNode("ROUTE");
ROUTE2899.fromField = "fraction_changed";
ROUTE2899.fromNode = "KickTimer";
ROUTE2899.toField = "set_fraction";
ROUTE2899.toNode = "Kick_whole_body_RotationInterpolator";
Group2848.children[50] = ROUTE2899;

ROUTE ROUTE2900 = createNode("ROUTE");
ROUTE2900.fromField = "fraction_changed";
ROUTE2900.fromNode = "KickTimer";
ROUTE2900.toField = "set_fraction";
ROUTE2900.toNode = "Kick_whole_body_TranslationInterpolator";
Group2848.children[51] = ROUTE2900;

ROUTE ROUTE2901 = createNode("ROUTE");
ROUTE2901.fromField = "fraction_changed";
ROUTE2901.fromNode = "KickTimer";
ROUTE2901.toField = "set_fraction";
ROUTE2901.toNode = "Kick_neck_RotationInterpolator";
Group2848.children[52] = ROUTE2901;

ROUTE ROUTE2902 = createNode("ROUTE");
ROUTE2902.fromField = "value_changed";
ROUTE2902.fromNode = "Kick_l_sternoclavicular_RollInterpolator";
ROUTE2902.toField = "rotation";
ROUTE2902.toNode = "hanim_l_sternoclavicular";
Group2848.children[53] = ROUTE2902;

ROUTE ROUTE2903 = createNode("ROUTE");
ROUTE2903.fromField = "value_changed";
ROUTE2903.fromNode = "Kick_l_acromioclavicular_RollInterpolator";
ROUTE2903.toField = "rotation";
ROUTE2903.toNode = "hanim_l_acromioclavicular";
Group2848.children[54] = ROUTE2903;

ROUTE ROUTE2904 = createNode("ROUTE");
ROUTE2904.fromField = "value_changed";
ROUTE2904.fromNode = "Kick_l_shoulder_RollInterpolator";
ROUTE2904.toField = "rotation";
ROUTE2904.toNode = "hanim_l_shoulder";
Group2848.children[55] = ROUTE2904;

ROUTE ROUTE2905 = createNode("ROUTE");
ROUTE2905.fromField = "value_changed";
ROUTE2905.fromNode = "Kick_l_ForeArm_PitchInterpolator";
ROUTE2905.toField = "rotation";
ROUTE2905.toNode = "hanim_l_elbow";
Group2848.children[56] = ROUTE2905;

ROUTE ROUTE2906 = createNode("ROUTE");
ROUTE2906.fromField = "value_changed";
ROUTE2906.fromNode = "Kick_l_wrist_RollInterpolator";
ROUTE2906.toField = "rotation";
ROUTE2906.toNode = "hanim_l_wrist";
Group2848.children[57] = ROUTE2906;

ROUTE ROUTE2907 = createNode("ROUTE");
ROUTE2907.fromField = "value_changed";
ROUTE2907.fromNode = "Kick_l_thumb1_PitchInterpolator";
ROUTE2907.toField = "rotation";
ROUTE2907.toNode = "hanim_l_thumb1";
Group2848.children[58] = ROUTE2907;

ROUTE ROUTE2908 = createNode("ROUTE");
ROUTE2908.fromField = "value_changed";
ROUTE2908.fromNode = "Kick_r_sternoclavicular_RollInterpolator";
ROUTE2908.toField = "rotation";
ROUTE2908.toNode = "hanim_r_sternoclavicular";
Group2848.children[59] = ROUTE2908;

ROUTE ROUTE2909 = createNode("ROUTE");
ROUTE2909.fromField = "value_changed";
ROUTE2909.fromNode = "Kick_r_acromioclavicular_RollInterpolator";
ROUTE2909.toField = "rotation";
ROUTE2909.toNode = "hanim_r_acromioclavicular";
Group2848.children[60] = ROUTE2909;

ROUTE ROUTE2910 = createNode("ROUTE");
ROUTE2910.fromField = "value_changed";
ROUTE2910.fromNode = "Kick_r_shoulder_RollInterpolator";
ROUTE2910.toField = "rotation";
ROUTE2910.toNode = "hanim_r_shoulder";
Group2848.children[61] = ROUTE2910;

ROUTE ROUTE2911 = createNode("ROUTE");
ROUTE2911.fromField = "value_changed";
ROUTE2911.fromNode = "Kick_r_ForeArm_PitchInterpolator";
ROUTE2911.toField = "rotation";
ROUTE2911.toNode = "hanim_r_elbow";
Group2848.children[62] = ROUTE2911;

ROUTE ROUTE2912 = createNode("ROUTE");
ROUTE2912.fromField = "value_changed";
ROUTE2912.fromNode = "Kick_r_wrist_RollInterpolator";
ROUTE2912.toField = "rotation";
ROUTE2912.toNode = "hanim_r_wrist";
Group2848.children[63] = ROUTE2912;

ROUTE ROUTE2913 = createNode("ROUTE");
ROUTE2913.fromField = "value_changed";
ROUTE2913.fromNode = "Kick_r_thumb1_PitchInterpolator";
ROUTE2913.toField = "rotation";
ROUTE2913.toNode = "hanim_r_thumb1";
Group2848.children[64] = ROUTE2913;

ROUTE ROUTE2914 = createNode("ROUTE");
ROUTE2914.fromField = "value_changed";
ROUTE2914.fromNode = "Kick_r_hip_PitchInterpolator";
ROUTE2914.toField = "rotation";
ROUTE2914.toNode = "hanim_r_hip";
Group2848.children[65] = ROUTE2914;

ROUTE ROUTE2915 = createNode("ROUTE");
ROUTE2915.fromField = "value_changed";
ROUTE2915.fromNode = "Kick_r_knee_PitchInterpolator";
ROUTE2915.toField = "rotation";
ROUTE2915.toNode = "hanim_r_knee";
Group2848.children[66] = ROUTE2915;

ROUTE ROUTE2916 = createNode("ROUTE");
ROUTE2916.fromField = "value_changed";
ROUTE2916.fromNode = "Kick_r_ankle_PitchInterpolator";
ROUTE2916.toField = "rotation";
ROUTE2916.toNode = "hanim_r_ankle";
Group2848.children[67] = ROUTE2916;

ROUTE ROUTE2917 = createNode("ROUTE");
ROUTE2917.fromField = "value_changed";
ROUTE2917.fromNode = "Kick_r_metatarsal_PitchInterpolator";
ROUTE2917.toField = "rotation";
ROUTE2917.toNode = "hanim_r_metatarsal";
Group2848.children[68] = ROUTE2917;

ROUTE ROUTE2918 = createNode("ROUTE");
ROUTE2918.fromField = "value_changed";
ROUTE2918.fromNode = "Kick_l_hip_PitchInterpolator";
ROUTE2918.toField = "rotation";
ROUTE2918.toNode = "hanim_l_hip";
Group2848.children[69] = ROUTE2918;

ROUTE ROUTE2919 = createNode("ROUTE");
ROUTE2919.fromField = "value_changed";
ROUTE2919.fromNode = "Kick_l_knee_PitchInterpolator";
ROUTE2919.toField = "rotation";
ROUTE2919.toNode = "hanim_l_knee";
Group2848.children[70] = ROUTE2919;

ROUTE ROUTE2920 = createNode("ROUTE");
ROUTE2920.fromField = "value_changed";
ROUTE2920.fromNode = "Kick_r_ankle_PitchInterpolator";
ROUTE2920.toField = "rotation";
ROUTE2920.toNode = "hanim_l_ankle";
Group2848.children[71] = ROUTE2920;

ROUTE ROUTE2921 = createNode("ROUTE");
ROUTE2921.fromField = "value_changed";
ROUTE2921.fromNode = "Kick_r_metatarsal_PitchInterpolator";
ROUTE2921.toField = "rotation";
ROUTE2921.toNode = "hanim_l_metatarsal";
Group2848.children[72] = ROUTE2921;

ROUTE ROUTE2922 = createNode("ROUTE");
ROUTE2922.fromField = "value_changed";
ROUTE2922.fromNode = "Kick_sacroiliac_YawInterpolator";
ROUTE2922.toField = "rotation";
ROUTE2922.toNode = "hanim_sacroiliac";
Group2848.children[73] = ROUTE2922;

ROUTE ROUTE2923 = createNode("ROUTE");
ROUTE2923.fromField = "value_changed";
ROUTE2923.fromNode = "Kick_vl5_YawInterpolator";
ROUTE2923.toField = "rotation";
ROUTE2923.toNode = "hanim_vl5";
Group2848.children[74] = ROUTE2923;

ROUTE ROUTE2924 = createNode("ROUTE");
ROUTE2924.fromField = "value_changed";
ROUTE2924.fromNode = "Kick_vc6_YawInterpolator";
ROUTE2924.toField = "rotation";
ROUTE2924.toNode = "hanim_vc6";
Group2848.children[75] = ROUTE2924;

ROUTE ROUTE2925 = createNode("ROUTE");
ROUTE2925.fromField = "value_changed";
ROUTE2925.fromNode = "Kick_upper_body_RotationInterpolator";
ROUTE2925.toField = "rotation";
ROUTE2925.toNode = "hanim_vl1";
Group2848.children[76] = ROUTE2925;

ROUTE ROUTE2926 = createNode("ROUTE");
ROUTE2926.fromField = "value_changed";
ROUTE2926.fromNode = "Kick_lower_body_RotationInterpolator";
ROUTE2926.toField = "rotation";
ROUTE2926.toNode = "hanim_sacroiliac";
Group2848.children[77] = ROUTE2926;

ROUTE ROUTE2927 = createNode("ROUTE");
ROUTE2927.fromField = "value_changed";
ROUTE2927.fromNode = "Kick_whole_body_RotationInterpolator";
ROUTE2927.toField = "rotation";
ROUTE2927.toNode = "hanim_humanoid_root";
Group2848.children[78] = ROUTE2927;

ROUTE ROUTE2928 = createNode("ROUTE");
ROUTE2928.fromField = "value_changed";
ROUTE2928.fromNode = "Kick_whole_body_TranslationInterpolator";
ROUTE2928.toField = "translation";
ROUTE2928.toNode = "hanim_humanoid_root";
Group2848.children[79] = ROUTE2928;

ROUTE ROUTE2929 = createNode("ROUTE");
ROUTE2929.fromField = "value_changed";
ROUTE2929.fromNode = "Kick_neck_RotationInterpolator";
ROUTE2929.toField = "rotation";
ROUTE2929.toNode = "hanim_vc4";
Group2848.children[80] = ROUTE2929;

children[21] = Group2848;

Group Group2930 = createNode("Group");
Group2930.DEF = "UserInterface";
//Authoring hint: these axes are aligned within local coordinate system
Transform Transform2931 = createNode("Transform");
Transform2931.DEF = "CoordinateAxesAdjustedScale";
Transform2931.scale = new SFVec3f(new float[0.175,0.175,0.175]);
Inline Inline2932 = createNode("Inline");
Inline2932.DEF = "CoordinateAxes";
Inline2932.url = new MFString(new java.lang.String["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl"]);
Transform2931.children = new MFNode();

Transform2931.children[0] = Inline2932;

Group2930.children = new MFNode();

Group2930.children[0] = Transform2931;

Transform Transform2933 = createNode("Transform");
Transform2933.DEF = "cordsys";
Transform2933.scale = new SFVec3f(new float[0.175,0.175,0.175]);
//<Inline bboxCenter='0.05143541 0.07883984 0.04731131' bboxSize='2.202872 2.25768 2.194624' url='\"JointCoordinateAxes.x3dv\"'/>
Group2930.children[1] = Transform2933;

ProximitySensor ProximitySensor2934 = createNode("ProximitySensor");
ProximitySensor2934.DEF = "HudProximitySensor";
ProximitySensor2934.center = new SFVec3f(new float[0,20,0]);
ProximitySensor2934.size = new SFVec3f(new float[500,100,500]);
Group2930.children[2] = ProximitySensor2934;

Transform Transform2935 = createNode("Transform");
Transform2935.DEF = "Stage";
Transform2935.scale = new SFVec3f(new float[1,0.0125,1]);
Transform2935.translation = new SFVec3f(new float[0,-0.0125,0]);
Shape Shape2936 = createNode("Shape");
Appearance Appearance2937 = createNode("Appearance");
Material Material2938 = createNode("Material");
Material2938.transparency = 0.6;
Appearance2937.material = Material2938;

Shape2936.appearance = Appearance2937;

Box Box2939 = createNode("Box");
Shape2936.geometry = Box2939;

Transform2935.children = new MFNode();

Transform2935.children[0] = Shape2936;

Transform Transform2940 = createNode("Transform");
Transform2940.DEF = "Circle0";
Transform2940.scale = new SFVec3f(new float[1.175,1,1.175]);
Shape Shape2941 = createNode("Shape");
Appearance Appearance2942 = createNode("Appearance");
Material Material2943 = createNode("Material");
Material2943.diffuseColor = new SFColor(new float[0.9,0,0.7]);
Material2943.emissiveColor = new SFColor(new float[0.424956,0.483976,1]);
Appearance2942.material = Material2943;

Shape2941.appearance = Appearance2942;

IndexedLineSet IndexedLineSet2944 = createNode("IndexedLineSet");
IndexedLineSet2944.DEF = "Orbit1";
IndexedLineSet2944.coordIndex = new MFInt32(new int[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1]);
Coordinate Coordinate2945 = createNode("Coordinate");
Coordinate2945.point = new MFVec3f(new float[1,0,0,0.995,0,-0.105,0.979,0,-0.208,0.951,0,-0.309,0.914,0,-0.407,0.866,0,-0.5,0.809,0,-0.588,0.743,0,-0.669,0.669,0,-0.743,0.588,0,-0.809,0.5,0,-0.866,0.407,0,-0.914,0.309,0,-0.951,0.208,0,-0.978,0.105,0,-0.995,0,0,-1,-0.105,0,-0.994522,-0.208,0,-0.978,-0.309,0,-0.951,-0.407,0,-0.914,-0.5,0,-0.866,-0.588,0,-0.809,-0.669,0,-0.743,-0.743,0,-0.669,-0.809,0,-0.588,-0.866,0,-0.5,-0.914,0,-0.407,-0.951,0,-0.309,-0.978,0,-0.208,-0.995,0,-0.105,-1,0,0,-0.995,0,0.105,-0.978,0,0.208,-0.951,0,0.309,-0.914,0,0.407,-0.866,0,0.5,-0.809,0,0.588,-0.743,0,0.669,-0.669,0,0.743,-0.588,0,0.809,-0.5,0,0.866,-0.407,0,0.914,-0.309,0,0.951,-0.208,0,0.978,-0.105,0,0.995,0,0,1,0.105,0,0.995,0.208,0,0.978,0.309,0,0.951,0.407,0,0.914,0.5,0,0.866,0.588,0,0.809,0.669,0,0.743,0.743,0,0.669,0.809,0,0.588,0.866,0,0.5,0.914,0,0.407,0.951,0,0.309,0.978,0,0.208,0.995,0,0.104,1,0,0]);
IndexedLineSet2944.coord = Coordinate2945;

Shape2941.geometry = IndexedLineSet2944;

Transform2940.children = new MFNode();

Transform2940.children[0] = Shape2941;

Transform2935.children[1] = Transform2940;

Transform Transform2946 = createNode("Transform");
Transform2946.DEF = "Circle1";
Transform2946.scale = new SFVec3f(new float[0.5,1,0.5]);
Shape Shape2947 = createNode("Shape");
Appearance Appearance2948 = createNode("Appearance");
Material Material2949 = createNode("Material");
Material2949.diffuseColor = new SFColor(new float[0.9,0,0.7]);
Material2949.emissiveColor = new SFColor(new float[0.424956,0.483976,1]);
Appearance2948.material = Material2949;

Shape2947.appearance = Appearance2948;

IndexedLineSet IndexedLineSet2950 = createNode("IndexedLineSet");
IndexedLineSet2950.USE = "Orbit1";
Shape2947.geometry = IndexedLineSet2950;

Transform2946.children = new MFNode();

Transform2946.children[0] = Shape2947;

Transform2935.children[2] = Transform2946;

Transform Transform2951 = createNode("Transform");
Transform2951.DEF = "Circle2";
Transform2951.scale = new SFVec3f(new float[0.25,1,0.25]);
Shape Shape2952 = createNode("Shape");
Appearance Appearance2953 = createNode("Appearance");
Material Material2954 = createNode("Material");
Material2954.diffuseColor = new SFColor(new float[0.9,0,0.7]);
Material2954.emissiveColor = new SFColor(new float[0.424956,0.483976,1]);
Appearance2953.material = Material2954;

Shape2952.appearance = Appearance2953;

IndexedLineSet IndexedLineSet2955 = createNode("IndexedLineSet");
IndexedLineSet2955.USE = "Orbit1";
Shape2952.geometry = IndexedLineSet2955;

Transform2951.children = new MFNode();

Transform2951.children[0] = Shape2952;

Transform2935.children[3] = Transform2951;

Group2930.children[3] = Transform2935;

Transform Transform2956 = createNode("Transform");
Transform2956.DEF = "HudXform";
Transform2956.rotation = new SFRotation(new float[-0.09996068,0.9942513,0.03837026,0.7131352]);
Transform2956.translation = new SFVec3f(new float[1.705442,1.042139,1.989742]);
Transform Transform2957 = createNode("Transform");
Transform2957.scale = new SFVec3f(new float[0.035,0.035,0.035]);
Transform2957.translation = new SFVec3f(new float[-0.42,-0.2,-0.75]);
Transform Transform2958 = createNode("Transform");
Transform2958.DEF = "StandTransform";
Transform2958.translation = new SFVec3f(new float[0,-1,0]);
TouchSensor TouchSensor2959 = createNode("TouchSensor");
TouchSensor2959.DEF = "Stand_Touch";
TouchSensor2959.description = "touch to select";
Transform2958.children = new MFNode();

Transform2958.children[0] = TouchSensor2959;

Shape Shape2960 = createNode("Shape");
Shape2960.DEF = "StandTextShape";
Appearance Appearance2961 = createNode("Appearance");
Material Material2962 = createNode("Material");
Material2962.DEF = "text_color";
Material2962.ambientIntensity = 1;
Material2962.diffuseColor = new SFColor(new float[0.819,0.521,0.169]);
Material2962.emissiveColor = new SFColor(new float[0.819,0.521,0.169]);
Material2962.specularColor = new SFColor(new float[0.819,0.521,0.169]);
Appearance2961.material = Material2962;

Shape2960.appearance = Appearance2961;

Text Text2963 = createNode("Text");
Text2963.string = new MFString(new java.lang.String["Stand"]);
Shape2960.geometry = Text2963;

Transform2958.children[1] = Shape2960;

Shape Shape2964 = createNode("Shape");
Shape2964.DEF = "Stand_Back";
Appearance Appearance2965 = createNode("Appearance");
Material Material2966 = createNode("Material");
Material2966.DEF = "Clear";
Material2966.ambientIntensity = 1;
Material2966.diffuseColor = new SFColor(new float[0,0.5,0]);
Material2966.emissiveColor = new SFColor(new float[0,0.5,0]);
Material2966.transparency = 0.8;
Appearance2965.material = Material2966;

Shape2964.appearance = Appearance2965;

IndexedFaceSet IndexedFaceSet2967 = createNode("IndexedFaceSet");
IndexedFaceSet2967.DEF = "Backing";
IndexedFaceSet2967.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate2968 = createNode("Coordinate");
Coordinate2968.point = new MFVec3f(new float[-0.2,-1.2,-0.01,2.5,-1.2,-0.01,2.5,0.75,-0.01,-0.2,0.75,-0.01]);
IndexedFaceSet2967.coord = Coordinate2968;

Shape2964.geometry = IndexedFaceSet2967;

Transform2958.children[2] = Shape2964;

Transform2957.children = new MFNode();

Transform2957.children[0] = Transform2958;

Transform Transform2969 = createNode("Transform");
Transform2969.DEF = "PitchTransform";
Transform2969.translation = new SFVec3f(new float[3,-1,0]);
TouchSensor TouchSensor2970 = createNode("TouchSensor");
TouchSensor2970.DEF = "Pitch_Touch";
TouchSensor2970.description = "touch to select";
Transform2969.children = new MFNode();

Transform2969.children[0] = TouchSensor2970;

Shape Shape2971 = createNode("Shape");
Shape2971.DEF = "PitchTextShape";
Appearance Appearance2972 = createNode("Appearance");
Material Material2973 = createNode("Material");
Material2973.USE = "text_color";
Appearance2972.material = Material2973;

Shape2971.appearance = Appearance2972;

Text Text2974 = createNode("Text");
Text2974.string = new MFString(new java.lang.String["Pitch"]);
Shape2971.geometry = Text2974;

Transform2969.children[1] = Shape2971;

Shape Shape2975 = createNode("Shape");
Shape2975.DEF = "Pitch_Back";
Appearance Appearance2976 = createNode("Appearance");
Material Material2977 = createNode("Material");
Material2977.USE = "Clear";
Appearance2976.material = Material2977;

Shape2975.appearance = Appearance2976;

IndexedFaceSet IndexedFaceSet2978 = createNode("IndexedFaceSet");
IndexedFaceSet2978.USE = "Backing";
Shape2975.geometry = IndexedFaceSet2978;

Transform2969.children[2] = Shape2975;

Transform2957.children[1] = Transform2969;

Transform Transform2979 = createNode("Transform");
Transform2979.DEF = "YawTransform";
Transform2979.translation = new SFVec3f(new float[6,-1,0]);
TouchSensor TouchSensor2980 = createNode("TouchSensor");
TouchSensor2980.DEF = "Yaw_Touch";
TouchSensor2980.description = "touch to select";
Transform2979.children = new MFNode();

Transform2979.children[0] = TouchSensor2980;

Shape Shape2981 = createNode("Shape");
Shape2981.DEF = "YawText";
Appearance Appearance2982 = createNode("Appearance");
Material Material2983 = createNode("Material");
Material2983.USE = "text_color";
Appearance2982.material = Material2983;

Shape2981.appearance = Appearance2982;

Text Text2984 = createNode("Text");
Text2984.string = new MFString(new java.lang.String["Yaw"]);
Shape2981.geometry = Text2984;

Transform2979.children[1] = Shape2981;

Shape Shape2985 = createNode("Shape");
Shape2985.DEF = "Yaw_Back";
Appearance Appearance2986 = createNode("Appearance");
Material Material2987 = createNode("Material");
Material2987.USE = "Clear";
Appearance2986.material = Material2987;

Shape2985.appearance = Appearance2986;

IndexedFaceSet IndexedFaceSet2988 = createNode("IndexedFaceSet");
IndexedFaceSet2988.USE = "Backing";
Shape2985.geometry = IndexedFaceSet2988;

Transform2979.children[2] = Shape2985;

Transform2957.children[2] = Transform2979;

Transform Transform2989 = createNode("Transform");
Transform2989.DEF = "RollTransform";
Transform2989.translation = new SFVec3f(new float[9,-1,0]);
TouchSensor TouchSensor2990 = createNode("TouchSensor");
TouchSensor2990.DEF = "Roll_Touch";
TouchSensor2990.description = "touch to select";
Transform2989.children = new MFNode();

Transform2989.children[0] = TouchSensor2990;

Shape Shape2991 = createNode("Shape");
Shape2991.DEF = "_RollInterpolator";
Appearance Appearance2992 = createNode("Appearance");
Material Material2993 = createNode("Material");
Material2993.USE = "text_color";
Appearance2992.material = Material2993;

Shape2991.appearance = Appearance2992;

Text Text2994 = createNode("Text");
Text2994.string = new MFString(new java.lang.String["Roll"]);
Shape2991.geometry = Text2994;

Transform2989.children[1] = Shape2991;

Shape Shape2995 = createNode("Shape");
Shape2995.DEF = "Roll_Back";
Appearance Appearance2996 = createNode("Appearance");
Material Material2997 = createNode("Material");
Material2997.USE = "Clear";
Appearance2996.material = Material2997;

Shape2995.appearance = Appearance2996;

IndexedFaceSet IndexedFaceSet2998 = createNode("IndexedFaceSet");
IndexedFaceSet2998.USE = "Backing";
Shape2995.geometry = IndexedFaceSet2998;

Transform2989.children[2] = Shape2995;

Transform2957.children[3] = Transform2989;

Transform Transform2999 = createNode("Transform");
Transform2999.DEF = "WalkTransform";
Transform2999.translation = new SFVec3f(new float[12,-1,0]);
TouchSensor TouchSensor3000 = createNode("TouchSensor");
TouchSensor3000.DEF = "Walk_Touch";
TouchSensor3000.description = "touch to select";
Transform2999.children = new MFNode();

Transform2999.children[0] = TouchSensor3000;

Shape Shape3001 = createNode("Shape");
Shape3001.DEF = "WalkText";
Appearance Appearance3002 = createNode("Appearance");
Material Material3003 = createNode("Material");
Material3003.USE = "text_color";
Appearance3002.material = Material3003;

Shape3001.appearance = Appearance3002;

Text Text3004 = createNode("Text");
Text3004.string = new MFString(new java.lang.String["Walk"]);
Shape3001.geometry = Text3004;

Transform2999.children[1] = Shape3001;

Shape Shape3005 = createNode("Shape");
Shape3005.DEF = "Walk_Back";
Appearance Appearance3006 = createNode("Appearance");
Material Material3007 = createNode("Material");
Material3007.USE = "Clear";
Appearance3006.material = Material3007;

Shape3005.appearance = Appearance3006;

IndexedFaceSet IndexedFaceSet3008 = createNode("IndexedFaceSet");
IndexedFaceSet3008.USE = "Backing";
Shape3005.geometry = IndexedFaceSet3008;

Transform2999.children[2] = Shape3005;

Transform2957.children[4] = Transform2999;

Transform Transform3009 = createNode("Transform");
Transform3009.DEF = "RunTransform";
Transform3009.translation = new SFVec3f(new float[15,-1,0]);
TouchSensor TouchSensor3010 = createNode("TouchSensor");
TouchSensor3010.DEF = "Run_Touch";
TouchSensor3010.description = "touch to select";
Transform3009.children = new MFNode();

Transform3009.children[0] = TouchSensor3010;

Shape Shape3011 = createNode("Shape");
Shape3011.DEF = "RunText";
Appearance Appearance3012 = createNode("Appearance");
Material Material3013 = createNode("Material");
Material3013.USE = "text_color";
Appearance3012.material = Material3013;

Shape3011.appearance = Appearance3012;

Text Text3014 = createNode("Text");
Text3014.string = new MFString(new java.lang.String["Run"]);
Shape3011.geometry = Text3014;

Transform3009.children[1] = Shape3011;

Shape Shape3015 = createNode("Shape");
Shape3015.DEF = "Run_Back";
Appearance Appearance3016 = createNode("Appearance");
Material Material3017 = createNode("Material");
Material3017.USE = "Clear";
Appearance3016.material = Material3017;

Shape3015.appearance = Appearance3016;

IndexedFaceSet IndexedFaceSet3018 = createNode("IndexedFaceSet");
IndexedFaceSet3018.USE = "Backing";
Shape3015.geometry = IndexedFaceSet3018;

Transform3009.children[2] = Shape3015;

Transform2957.children[5] = Transform3009;

Transform Transform3019 = createNode("Transform");
Transform3019.DEF = "JumpTransform";
Transform3019.translation = new SFVec3f(new float[18,-1,0]);
TouchSensor TouchSensor3020 = createNode("TouchSensor");
TouchSensor3020.DEF = "Jump_Touch";
TouchSensor3020.description = "touch to select";
Transform3019.children = new MFNode();

Transform3019.children[0] = TouchSensor3020;

Shape Shape3021 = createNode("Shape");
Shape3021.DEF = "Jump";
Appearance Appearance3022 = createNode("Appearance");
Material Material3023 = createNode("Material");
Material3023.USE = "text_color";
Appearance3022.material = Material3023;

Shape3021.appearance = Appearance3022;

Text Text3024 = createNode("Text");
Text3024.string = new MFString(new java.lang.String["Jump"]);
Shape3021.geometry = Text3024;

Transform3019.children[1] = Shape3021;

Shape Shape3025 = createNode("Shape");
Shape3025.DEF = "Jump_Back";
Appearance Appearance3026 = createNode("Appearance");
Material Material3027 = createNode("Material");
Material3027.USE = "Clear";
Appearance3026.material = Material3027;

Shape3025.appearance = Appearance3026;

IndexedFaceSet IndexedFaceSet3028 = createNode("IndexedFaceSet");
IndexedFaceSet3028.USE = "Backing";
Shape3025.geometry = IndexedFaceSet3028;

Transform3019.children[2] = Shape3025;

Transform2957.children[6] = Transform3019;

Transform Transform3029 = createNode("Transform");
Transform3029.DEF = "KickTransform";
Transform3029.translation = new SFVec3f(new float[21,-1,0]);
TouchSensor TouchSensor3030 = createNode("TouchSensor");
TouchSensor3030.DEF = "Kick_Touch";
TouchSensor3030.description = "touch to select";
Transform3029.children = new MFNode();

Transform3029.children[0] = TouchSensor3030;

Shape Shape3031 = createNode("Shape");
Shape3031.DEF = "KickText";
Appearance Appearance3032 = createNode("Appearance");
Material Material3033 = createNode("Material");
Material3033.USE = "text_color";
Appearance3032.material = Material3033;

Shape3031.appearance = Appearance3032;

Text Text3034 = createNode("Text");
Text3034.string = new MFString(new java.lang.String["Kick"]);
Shape3031.geometry = Text3034;

Transform3029.children[1] = Shape3031;

Shape Shape3035 = createNode("Shape");
Shape3035.DEF = "Kick_Back";
Appearance Appearance3036 = createNode("Appearance");
Material Material3037 = createNode("Material");
Material3037.USE = "Clear";
Appearance3036.material = Material3037;

Shape3035.appearance = Appearance3036;

IndexedFaceSet IndexedFaceSet3038 = createNode("IndexedFaceSet");
IndexedFaceSet3038.USE = "Backing";
Shape3035.geometry = IndexedFaceSet3038;

Transform3029.children[2] = Shape3035;

Transform2957.children[7] = Transform3029;

Transform Transform3039 = createNode("Transform");
Transform3039.DEF = "Stop_Text";
Transform3039.translation = new SFVec3f(new float[0,1.4,0]);
TouchSensor TouchSensor3040 = createNode("TouchSensor");
TouchSensor3040.DEF = "Stop_Touch";
TouchSensor3040.description = "touch to select";
Transform3039.children = new MFNode();

Transform3039.children[0] = TouchSensor3040;

Shape Shape3041 = createNode("Shape");
Shape3041.DEF = "StopText";
Appearance Appearance3042 = createNode("Appearance");
Material Material3043 = createNode("Material");
Material3043.USE = "text_color";
Appearance3042.material = Material3043;

Shape3041.appearance = Appearance3042;

Text Text3044 = createNode("Text");
Text3044.string = new MFString(new java.lang.String["Stop","Default Pose"]);
Shape3041.geometry = Text3044;

Transform3039.children[1] = Shape3041;

Shape Shape3045 = createNode("Shape");
Shape3045.DEF = "Stop_Back";
Appearance Appearance3046 = createNode("Appearance");
Material Material3047 = createNode("Material");
Material3047.USE = "Clear";
Appearance3046.material = Material3047;

Shape3045.appearance = Appearance3046;

IndexedFaceSet IndexedFaceSet3048 = createNode("IndexedFaceSet");
IndexedFaceSet3048.USE = "Backing";
Shape3045.geometry = IndexedFaceSet3048;

Transform3039.children[2] = Shape3045;

Transform2957.children[8] = Transform3039;

Transform2956.children = new MFNode();

Transform2956.children[0] = Transform2957;

Group2930.children[4] = Transform2956;

ROUTE ROUTE3049 = createNode("ROUTE");
ROUTE3049.fromField = "position_changed";
ROUTE3049.fromNode = "HudProximitySensor";
ROUTE3049.toField = "translation";
ROUTE3049.toNode = "HudXform";
Group2930.children[5] = ROUTE3049;

ROUTE ROUTE3050 = createNode("ROUTE");
ROUTE3050.fromField = "orientation_changed";
ROUTE3050.fromNode = "HudProximitySensor";
ROUTE3050.toField = "rotation";
ROUTE3050.toNode = "HudXform";
Group2930.children[6] = ROUTE3050;

children[22] = Group2930;

Group Group3051 = createNode("Group");
Group3051.DEF = "BehaviorSynchronization";
ROUTE ROUTE3052 = createNode("ROUTE");
ROUTE3052.fromField = "touchTime";
ROUTE3052.fromNode = "Stand_Touch";
ROUTE3052.toField = "stopTime";
ROUTE3052.toNode = "PitchTimer";
Group3051.children = new MFNode();

Group3051.children[0] = ROUTE3052;

ROUTE ROUTE3053 = createNode("ROUTE");
ROUTE3053.fromField = "touchTime";
ROUTE3053.fromNode = "Stand_Touch";
ROUTE3053.toField = "stopTime";
ROUTE3053.toNode = "YawTimer";
Group3051.children[1] = ROUTE3053;

ROUTE ROUTE3054 = createNode("ROUTE");
ROUTE3054.fromField = "touchTime";
ROUTE3054.fromNode = "Stand_Touch";
ROUTE3054.toField = "stopTime";
ROUTE3054.toNode = "RollTimer";
Group3051.children[2] = ROUTE3054;

ROUTE ROUTE3055 = createNode("ROUTE");
ROUTE3055.fromField = "touchTime";
ROUTE3055.fromNode = "Stand_Touch";
ROUTE3055.toField = "stopTime";
ROUTE3055.toNode = "WalkTimer";
Group3051.children[3] = ROUTE3055;

ROUTE ROUTE3056 = createNode("ROUTE");
ROUTE3056.fromField = "touchTime";
ROUTE3056.fromNode = "Stand_Touch";
ROUTE3056.toField = "stopTime";
ROUTE3056.toNode = "RunTimer";
Group3051.children[4] = ROUTE3056;

ROUTE ROUTE3057 = createNode("ROUTE");
ROUTE3057.fromField = "touchTime";
ROUTE3057.fromNode = "Stand_Touch";
ROUTE3057.toField = "stopTime";
ROUTE3057.toNode = "JumpTimer";
Group3051.children[5] = ROUTE3057;

ROUTE ROUTE3058 = createNode("ROUTE");
ROUTE3058.fromField = "touchTime";
ROUTE3058.fromNode = "Stand_Touch";
ROUTE3058.toField = "stopTime";
ROUTE3058.toNode = "KickTimer";
Group3051.children[6] = ROUTE3058;

ROUTE ROUTE3059 = createNode("ROUTE");
ROUTE3059.fromField = "touchTime";
ROUTE3059.fromNode = "Stand_Touch";
ROUTE3059.toField = "stopTime";
ROUTE3059.toNode = "StopTimer";
Group3051.children[7] = ROUTE3059;

ROUTE ROUTE3060 = createNode("ROUTE");
ROUTE3060.fromField = "touchTime";
ROUTE3060.fromNode = "Stand_Touch";
ROUTE3060.toField = "startTime";
ROUTE3060.toNode = "StandTimer";
Group3051.children[8] = ROUTE3060;

ROUTE ROUTE3061 = createNode("ROUTE");
ROUTE3061.fromField = "touchTime";
ROUTE3061.fromNode = "Pitch_Touch";
ROUTE3061.toField = "stopTime";
ROUTE3061.toNode = "StandTimer";
Group3051.children[9] = ROUTE3061;

ROUTE ROUTE3062 = createNode("ROUTE");
ROUTE3062.fromField = "touchTime";
ROUTE3062.fromNode = "Pitch_Touch";
ROUTE3062.toField = "stopTime";
ROUTE3062.toNode = "YawTimer";
Group3051.children[10] = ROUTE3062;

ROUTE ROUTE3063 = createNode("ROUTE");
ROUTE3063.fromField = "touchTime";
ROUTE3063.fromNode = "Pitch_Touch";
ROUTE3063.toField = "stopTime";
ROUTE3063.toNode = "RollTimer";
Group3051.children[11] = ROUTE3063;

ROUTE ROUTE3064 = createNode("ROUTE");
ROUTE3064.fromField = "touchTime";
ROUTE3064.fromNode = "Pitch_Touch";
ROUTE3064.toField = "stopTime";
ROUTE3064.toNode = "WalkTimer";
Group3051.children[12] = ROUTE3064;

ROUTE ROUTE3065 = createNode("ROUTE");
ROUTE3065.fromField = "touchTime";
ROUTE3065.fromNode = "Pitch_Touch";
ROUTE3065.toField = "stopTime";
ROUTE3065.toNode = "RunTimer";
Group3051.children[13] = ROUTE3065;

ROUTE ROUTE3066 = createNode("ROUTE");
ROUTE3066.fromField = "touchTime";
ROUTE3066.fromNode = "Pitch_Touch";
ROUTE3066.toField = "stopTime";
ROUTE3066.toNode = "JumpTimer";
Group3051.children[14] = ROUTE3066;

ROUTE ROUTE3067 = createNode("ROUTE");
ROUTE3067.fromField = "touchTime";
ROUTE3067.fromNode = "Pitch_Touch";
ROUTE3067.toField = "stopTime";
ROUTE3067.toNode = "KickTimer";
Group3051.children[15] = ROUTE3067;

ROUTE ROUTE3068 = createNode("ROUTE");
ROUTE3068.fromField = "touchTime";
ROUTE3068.fromNode = "Pitch_Touch";
ROUTE3068.toField = "stopTime";
ROUTE3068.toNode = "StopTimer";
Group3051.children[16] = ROUTE3068;

ROUTE ROUTE3069 = createNode("ROUTE");
ROUTE3069.fromField = "touchTime";
ROUTE3069.fromNode = "Pitch_Touch";
ROUTE3069.toField = "startTime";
ROUTE3069.toNode = "PitchTimer";
Group3051.children[17] = ROUTE3069;

ROUTE ROUTE3070 = createNode("ROUTE");
ROUTE3070.fromField = "touchTime";
ROUTE3070.fromNode = "Yaw_Touch";
ROUTE3070.toField = "stopTime";
ROUTE3070.toNode = "StandTimer";
Group3051.children[18] = ROUTE3070;

ROUTE ROUTE3071 = createNode("ROUTE");
ROUTE3071.fromField = "touchTime";
ROUTE3071.fromNode = "Yaw_Touch";
ROUTE3071.toField = "stopTime";
ROUTE3071.toNode = "PitchTimer";
Group3051.children[19] = ROUTE3071;

ROUTE ROUTE3072 = createNode("ROUTE");
ROUTE3072.fromField = "touchTime";
ROUTE3072.fromNode = "Yaw_Touch";
ROUTE3072.toField = "stopTime";
ROUTE3072.toNode = "RollTimer";
Group3051.children[20] = ROUTE3072;

ROUTE ROUTE3073 = createNode("ROUTE");
ROUTE3073.fromField = "touchTime";
ROUTE3073.fromNode = "Yaw_Touch";
ROUTE3073.toField = "stopTime";
ROUTE3073.toNode = "WalkTimer";
Group3051.children[21] = ROUTE3073;

ROUTE ROUTE3074 = createNode("ROUTE");
ROUTE3074.fromField = "touchTime";
ROUTE3074.fromNode = "Yaw_Touch";
ROUTE3074.toField = "stopTime";
ROUTE3074.toNode = "RunTimer";
Group3051.children[22] = ROUTE3074;

ROUTE ROUTE3075 = createNode("ROUTE");
ROUTE3075.fromField = "touchTime";
ROUTE3075.fromNode = "Yaw_Touch";
ROUTE3075.toField = "stopTime";
ROUTE3075.toNode = "JumpTimer";
Group3051.children[23] = ROUTE3075;

ROUTE ROUTE3076 = createNode("ROUTE");
ROUTE3076.fromField = "touchTime";
ROUTE3076.fromNode = "Yaw_Touch";
ROUTE3076.toField = "stopTime";
ROUTE3076.toNode = "KickTimer";
Group3051.children[24] = ROUTE3076;

ROUTE ROUTE3077 = createNode("ROUTE");
ROUTE3077.fromField = "touchTime";
ROUTE3077.fromNode = "Yaw_Touch";
ROUTE3077.toField = "stopTime";
ROUTE3077.toNode = "StopTimer";
Group3051.children[25] = ROUTE3077;

ROUTE ROUTE3078 = createNode("ROUTE");
ROUTE3078.fromField = "touchTime";
ROUTE3078.fromNode = "Yaw_Touch";
ROUTE3078.toField = "startTime";
ROUTE3078.toNode = "YawTimer";
Group3051.children[26] = ROUTE3078;

ROUTE ROUTE3079 = createNode("ROUTE");
ROUTE3079.fromField = "touchTime";
ROUTE3079.fromNode = "Walk_Touch";
ROUTE3079.toField = "stopTime";
ROUTE3079.toNode = "StandTimer";
Group3051.children[27] = ROUTE3079;

ROUTE ROUTE3080 = createNode("ROUTE");
ROUTE3080.fromField = "touchTime";
ROUTE3080.fromNode = "Walk_Touch";
ROUTE3080.toField = "stopTime";
ROUTE3080.toNode = "PitchTimer";
Group3051.children[28] = ROUTE3080;

ROUTE ROUTE3081 = createNode("ROUTE");
ROUTE3081.fromField = "touchTime";
ROUTE3081.fromNode = "Walk_Touch";
ROUTE3081.toField = "stopTime";
ROUTE3081.toNode = "YawTimer";
Group3051.children[29] = ROUTE3081;

ROUTE ROUTE3082 = createNode("ROUTE");
ROUTE3082.fromField = "touchTime";
ROUTE3082.fromNode = "Walk_Touch";
ROUTE3082.toField = "stopTime";
ROUTE3082.toNode = "RollTimer";
Group3051.children[30] = ROUTE3082;

ROUTE ROUTE3083 = createNode("ROUTE");
ROUTE3083.fromField = "touchTime";
ROUTE3083.fromNode = "Walk_Touch";
ROUTE3083.toField = "stopTime";
ROUTE3083.toNode = "RunTimer";
Group3051.children[31] = ROUTE3083;

ROUTE ROUTE3084 = createNode("ROUTE");
ROUTE3084.fromField = "touchTime";
ROUTE3084.fromNode = "Walk_Touch";
ROUTE3084.toField = "stopTime";
ROUTE3084.toNode = "JumpTimer";
Group3051.children[32] = ROUTE3084;

ROUTE ROUTE3085 = createNode("ROUTE");
ROUTE3085.fromField = "touchTime";
ROUTE3085.fromNode = "Walk_Touch";
ROUTE3085.toField = "stopTime";
ROUTE3085.toNode = "KickTimer";
Group3051.children[33] = ROUTE3085;

ROUTE ROUTE3086 = createNode("ROUTE");
ROUTE3086.fromField = "touchTime";
ROUTE3086.fromNode = "Walk_Touch";
ROUTE3086.toField = "stopTime";
ROUTE3086.toNode = "StopTimer";
Group3051.children[34] = ROUTE3086;

ROUTE ROUTE3087 = createNode("ROUTE");
ROUTE3087.fromField = "touchTime";
ROUTE3087.fromNode = "Walk_Touch";
ROUTE3087.toField = "startTime";
ROUTE3087.toNode = "WalkTimer";
Group3051.children[35] = ROUTE3087;

ROUTE ROUTE3088 = createNode("ROUTE");
ROUTE3088.fromField = "touchTime";
ROUTE3088.fromNode = "Roll_Touch";
ROUTE3088.toField = "stopTime";
ROUTE3088.toNode = "StandTimer";
Group3051.children[36] = ROUTE3088;

ROUTE ROUTE3089 = createNode("ROUTE");
ROUTE3089.fromField = "touchTime";
ROUTE3089.fromNode = "Roll_Touch";
ROUTE3089.toField = "stopTime";
ROUTE3089.toNode = "PitchTimer";
Group3051.children[37] = ROUTE3089;

ROUTE ROUTE3090 = createNode("ROUTE");
ROUTE3090.fromField = "touchTime";
ROUTE3090.fromNode = "Roll_Touch";
ROUTE3090.toField = "stopTime";
ROUTE3090.toNode = "YawTimer";
Group3051.children[38] = ROUTE3090;

ROUTE ROUTE3091 = createNode("ROUTE");
ROUTE3091.fromField = "touchTime";
ROUTE3091.fromNode = "Roll_Touch";
ROUTE3091.toField = "stopTime";
ROUTE3091.toNode = "WalkTimer";
Group3051.children[39] = ROUTE3091;

ROUTE ROUTE3092 = createNode("ROUTE");
ROUTE3092.fromField = "touchTime";
ROUTE3092.fromNode = "Roll_Touch";
ROUTE3092.toField = "stopTime";
ROUTE3092.toNode = "RunTimer";
Group3051.children[40] = ROUTE3092;

ROUTE ROUTE3093 = createNode("ROUTE");
ROUTE3093.fromField = "touchTime";
ROUTE3093.fromNode = "Roll_Touch";
ROUTE3093.toField = "stopTime";
ROUTE3093.toNode = "JumpTimer";
Group3051.children[41] = ROUTE3093;

ROUTE ROUTE3094 = createNode("ROUTE");
ROUTE3094.fromField = "touchTime";
ROUTE3094.fromNode = "Roll_Touch";
ROUTE3094.toField = "stopTime";
ROUTE3094.toNode = "KickTimer";
Group3051.children[42] = ROUTE3094;

ROUTE ROUTE3095 = createNode("ROUTE");
ROUTE3095.fromField = "touchTime";
ROUTE3095.fromNode = "Roll_Touch";
ROUTE3095.toField = "stopTime";
ROUTE3095.toNode = "StopTimer";
Group3051.children[43] = ROUTE3095;

ROUTE ROUTE3096 = createNode("ROUTE");
ROUTE3096.fromField = "touchTime";
ROUTE3096.fromNode = "Roll_Touch";
ROUTE3096.toField = "startTime";
ROUTE3096.toNode = "RollTimer";
Group3051.children[44] = ROUTE3096;

ROUTE ROUTE3097 = createNode("ROUTE");
ROUTE3097.fromField = "touchTime";
ROUTE3097.fromNode = "Run_Touch";
ROUTE3097.toField = "stopTime";
ROUTE3097.toNode = "StandTimer";
Group3051.children[45] = ROUTE3097;

ROUTE ROUTE3098 = createNode("ROUTE");
ROUTE3098.fromField = "touchTime";
ROUTE3098.fromNode = "Run_Touch";
ROUTE3098.toField = "stopTime";
ROUTE3098.toNode = "PitchTimer";
Group3051.children[46] = ROUTE3098;

ROUTE ROUTE3099 = createNode("ROUTE");
ROUTE3099.fromField = "touchTime";
ROUTE3099.fromNode = "Run_Touch";
ROUTE3099.toField = "stopTime";
ROUTE3099.toNode = "YawTimer";
Group3051.children[47] = ROUTE3099;

ROUTE ROUTE3100 = createNode("ROUTE");
ROUTE3100.fromField = "touchTime";
ROUTE3100.fromNode = "Run_Touch";
ROUTE3100.toField = "stopTime";
ROUTE3100.toNode = "RollTimer";
Group3051.children[48] = ROUTE3100;

ROUTE ROUTE3101 = createNode("ROUTE");
ROUTE3101.fromField = "touchTime";
ROUTE3101.fromNode = "Run_Touch";
ROUTE3101.toField = "stopTime";
ROUTE3101.toNode = "WalkTimer";
Group3051.children[49] = ROUTE3101;

ROUTE ROUTE3102 = createNode("ROUTE");
ROUTE3102.fromField = "touchTime";
ROUTE3102.fromNode = "Run_Touch";
ROUTE3102.toField = "stopTime";
ROUTE3102.toNode = "JumpTimer";
Group3051.children[50] = ROUTE3102;

ROUTE ROUTE3103 = createNode("ROUTE");
ROUTE3103.fromField = "touchTime";
ROUTE3103.fromNode = "Run_Touch";
ROUTE3103.toField = "stopTime";
ROUTE3103.toNode = "KickTimer";
Group3051.children[51] = ROUTE3103;

ROUTE ROUTE3104 = createNode("ROUTE");
ROUTE3104.fromField = "touchTime";
ROUTE3104.fromNode = "Run_Touch";
ROUTE3104.toField = "stopTime";
ROUTE3104.toNode = "StopTimer";
Group3051.children[52] = ROUTE3104;

ROUTE ROUTE3105 = createNode("ROUTE");
ROUTE3105.fromField = "touchTime";
ROUTE3105.fromNode = "Run_Touch";
ROUTE3105.toField = "startTime";
ROUTE3105.toNode = "RunTimer";
Group3051.children[53] = ROUTE3105;

ROUTE ROUTE3106 = createNode("ROUTE");
ROUTE3106.fromField = "touchTime";
ROUTE3106.fromNode = "Jump_Touch";
ROUTE3106.toField = "stopTime";
ROUTE3106.toNode = "StandTimer";
Group3051.children[54] = ROUTE3106;

ROUTE ROUTE3107 = createNode("ROUTE");
ROUTE3107.fromField = "touchTime";
ROUTE3107.fromNode = "Jump_Touch";
ROUTE3107.toField = "stopTime";
ROUTE3107.toNode = "PitchTimer";
Group3051.children[55] = ROUTE3107;

ROUTE ROUTE3108 = createNode("ROUTE");
ROUTE3108.fromField = "touchTime";
ROUTE3108.fromNode = "Jump_Touch";
ROUTE3108.toField = "stopTime";
ROUTE3108.toNode = "YawTimer";
Group3051.children[56] = ROUTE3108;

ROUTE ROUTE3109 = createNode("ROUTE");
ROUTE3109.fromField = "touchTime";
ROUTE3109.fromNode = "Jump_Touch";
ROUTE3109.toField = "stopTime";
ROUTE3109.toNode = "RollTimer";
Group3051.children[57] = ROUTE3109;

ROUTE ROUTE3110 = createNode("ROUTE");
ROUTE3110.fromField = "touchTime";
ROUTE3110.fromNode = "Jump_Touch";
ROUTE3110.toField = "stopTime";
ROUTE3110.toNode = "WalkTimer";
Group3051.children[58] = ROUTE3110;

ROUTE ROUTE3111 = createNode("ROUTE");
ROUTE3111.fromField = "touchTime";
ROUTE3111.fromNode = "Jump_Touch";
ROUTE3111.toField = "stopTime";
ROUTE3111.toNode = "RunTimer";
Group3051.children[59] = ROUTE3111;

ROUTE ROUTE3112 = createNode("ROUTE");
ROUTE3112.fromField = "touchTime";
ROUTE3112.fromNode = "Jump_Touch";
ROUTE3112.toField = "stopTime";
ROUTE3112.toNode = "KickTimer";
Group3051.children[60] = ROUTE3112;

ROUTE ROUTE3113 = createNode("ROUTE");
ROUTE3113.fromField = "touchTime";
ROUTE3113.fromNode = "Jump_Touch";
ROUTE3113.toField = "stopTime";
ROUTE3113.toNode = "StopTimer";
Group3051.children[61] = ROUTE3113;

ROUTE ROUTE3114 = createNode("ROUTE");
ROUTE3114.fromField = "touchTime";
ROUTE3114.fromNode = "Jump_Touch";
ROUTE3114.toField = "startTime";
ROUTE3114.toNode = "JumpTimer";
Group3051.children[62] = ROUTE3114;

ROUTE ROUTE3115 = createNode("ROUTE");
ROUTE3115.fromField = "touchTime";
ROUTE3115.fromNode = "Kick_Touch";
ROUTE3115.toField = "stopTime";
ROUTE3115.toNode = "StandTimer";
Group3051.children[63] = ROUTE3115;

ROUTE ROUTE3116 = createNode("ROUTE");
ROUTE3116.fromField = "touchTime";
ROUTE3116.fromNode = "Kick_Touch";
ROUTE3116.toField = "stopTime";
ROUTE3116.toNode = "PitchTimer";
Group3051.children[64] = ROUTE3116;

ROUTE ROUTE3117 = createNode("ROUTE");
ROUTE3117.fromField = "touchTime";
ROUTE3117.fromNode = "Kick_Touch";
ROUTE3117.toField = "stopTime";
ROUTE3117.toNode = "YawTimer";
Group3051.children[65] = ROUTE3117;

ROUTE ROUTE3118 = createNode("ROUTE");
ROUTE3118.fromField = "touchTime";
ROUTE3118.fromNode = "Kick_Touch";
ROUTE3118.toField = "stopTime";
ROUTE3118.toNode = "RollTimer";
Group3051.children[66] = ROUTE3118;

ROUTE ROUTE3119 = createNode("ROUTE");
ROUTE3119.fromField = "touchTime";
ROUTE3119.fromNode = "Kick_Touch";
ROUTE3119.toField = "stopTime";
ROUTE3119.toNode = "WalkTimer";
Group3051.children[67] = ROUTE3119;

ROUTE ROUTE3120 = createNode("ROUTE");
ROUTE3120.fromField = "touchTime";
ROUTE3120.fromNode = "Kick_Touch";
ROUTE3120.toField = "stopTime";
ROUTE3120.toNode = "RunTimer";
Group3051.children[68] = ROUTE3120;

ROUTE ROUTE3121 = createNode("ROUTE");
ROUTE3121.fromField = "touchTime";
ROUTE3121.fromNode = "Kick_Touch";
ROUTE3121.toField = "stopTime";
ROUTE3121.toNode = "JumpTimer";
Group3051.children[69] = ROUTE3121;

ROUTE ROUTE3122 = createNode("ROUTE");
ROUTE3122.fromField = "touchTime";
ROUTE3122.fromNode = "Kick_Touch";
ROUTE3122.toField = "stopTime";
ROUTE3122.toNode = "StopTimer";
Group3051.children[70] = ROUTE3122;

ROUTE ROUTE3123 = createNode("ROUTE");
ROUTE3123.fromField = "touchTime";
ROUTE3123.fromNode = "Kick_Touch";
ROUTE3123.toField = "startTime";
ROUTE3123.toNode = "KickTimer";
Group3051.children[71] = ROUTE3123;

ROUTE ROUTE3124 = createNode("ROUTE");
ROUTE3124.fromField = "touchTime";
ROUTE3124.fromNode = "Stop_Touch";
ROUTE3124.toField = "stopTime";
ROUTE3124.toNode = "StandTimer";
Group3051.children[72] = ROUTE3124;

ROUTE ROUTE3125 = createNode("ROUTE");
ROUTE3125.fromField = "touchTime";
ROUTE3125.fromNode = "Stop_Touch";
ROUTE3125.toField = "stopTime";
ROUTE3125.toNode = "PitchTimer";
Group3051.children[73] = ROUTE3125;

ROUTE ROUTE3126 = createNode("ROUTE");
ROUTE3126.fromField = "touchTime";
ROUTE3126.fromNode = "Stop_Touch";
ROUTE3126.toField = "stopTime";
ROUTE3126.toNode = "YawTimer";
Group3051.children[74] = ROUTE3126;

ROUTE ROUTE3127 = createNode("ROUTE");
ROUTE3127.fromField = "touchTime";
ROUTE3127.fromNode = "Stop_Touch";
ROUTE3127.toField = "stopTime";
ROUTE3127.toNode = "RollTimer";
Group3051.children[75] = ROUTE3127;

ROUTE ROUTE3128 = createNode("ROUTE");
ROUTE3128.fromField = "touchTime";
ROUTE3128.fromNode = "Stop_Touch";
ROUTE3128.toField = "stopTime";
ROUTE3128.toNode = "WalkTimer";
Group3051.children[76] = ROUTE3128;

ROUTE ROUTE3129 = createNode("ROUTE");
ROUTE3129.fromField = "touchTime";
ROUTE3129.fromNode = "Stop_Touch";
ROUTE3129.toField = "stopTime";
ROUTE3129.toNode = "RunTimer";
Group3051.children[77] = ROUTE3129;

ROUTE ROUTE3130 = createNode("ROUTE");
ROUTE3130.fromField = "touchTime";
ROUTE3130.fromNode = "Stop_Touch";
ROUTE3130.toField = "stopTime";
ROUTE3130.toNode = "JumpTimer";
Group3051.children[78] = ROUTE3130;

ROUTE ROUTE3131 = createNode("ROUTE");
ROUTE3131.fromField = "touchTime";
ROUTE3131.fromNode = "Stop_Touch";
ROUTE3131.toField = "stopTime";
ROUTE3131.toNode = "KickTimer";
Group3051.children[79] = ROUTE3131;

ROUTE ROUTE3132 = createNode("ROUTE");
ROUTE3132.fromField = "touchTime";
ROUTE3132.fromNode = "Stop_Touch";
ROUTE3132.toField = "startTime";
ROUTE3132.toNode = "StopTimer";
Group3051.children[80] = ROUTE3132;

children[23] = Group3051;

}