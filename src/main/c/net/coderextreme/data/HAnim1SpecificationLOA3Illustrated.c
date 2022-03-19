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
meta3.content = "HAnim1SpecificationLOA3Illustrated.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "description";
meta4.content = "HAnim Specification reference example providing full coverage and visibility of all specified HAnim constructs, also suitable for re-use as an authoring template. Geometry visualizations are derived from HAnim1SpecificationLOA3Invisible.x3d visualization report. Resusable exemplar animations also added via heads-up display (HUD) interface to confirm proper parent-child relationships.";
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
meta8.name = "creator";
meta8.content = "Matthew T. Beitler, Joe D. Williams, Don Brutzman";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "Image";
meta9.content = "HAnim1SpecificationLOA3Illustrated.png";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "Image";
meta10.content = "HAnim1SpecificationLOA3IllustratedLeftSide.png";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "reference";
meta11.content = "HAnim1SpecificationLOA3Invisible.x3d";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "reference";
meta12.content = "HAnim1SpecificationLOA3Animation.x3d";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "reference";
meta13.content = "HAnimSpecificationExampleChangeLog.txt";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "Image";
meta14.content = "images/BonesAllSkeletonFrontViewLOA1.png";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "Image";
meta15.content = "images/BonesAllSkeletonFrontViewLOA2.png";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "Image";
meta16.content = "images/BonesAllSkeletonFrontViewLOA3.png";
head1.meta[14] = meta16;

meta meta17 = createNode("meta");
meta17.name = "TODO";
meta17.content = "move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations";
head1.meta[15] = meta17;

meta meta18 = createNode("meta");
meta18.name = "warning";
meta18.content = "BS Contact and H3DViewer have polygon-culling problems at close range (possibly related to avatarSize), other players look OK";
head1.meta[16] = meta18;

meta meta19 = createNode("meta");
meta19.name = "TODO";
meta19.content = "insert MetadataInteger nodes indicating LOA for each Joint and Segment";
head1.meta[17] = meta19;

meta meta20 = createNode("meta");
meta20.name = "reference";
meta20.content = "Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989.";
head1.meta[18] = meta20;

meta meta21 = createNode("meta");
meta21.name = "reference";
meta21.content = "http://www.cis.upenn.edu/~badler/anthro/89-71.ps";
head1.meta[19] = meta21;

meta meta22 = createNode("meta");
meta22.name = "reference";
meta22.content = "tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf";
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
meta28.name = "reference";
meta28.content = "HAnim Specification Table 4.4 - Face Joint object names, https://www.web3d.org/files/specifications/19774/V1.0/HAnim/concepts.html#FaceJointObjectNames";
head1.meta[26] = meta28;

meta meta29 = createNode("meta");
meta29.name = "generator";
meta29.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[27] = meta29;

meta meta30 = createNode("meta");
meta30.name = "identifier";
meta30.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/HAnim1SpecificationLOA3Illustrated.x3d";
head1.meta[28] = meta30;

meta meta31 = createNode("meta");
meta31.name = "license";
meta31.content = "../license.html";
head1.meta[29] = meta31;

head = head1;

Background Background33 = createNode("Background");
Background33.skyColor = new MFColor(new float[0.3,0.3,0.3]);
children = new MFNode();

children[0] = Background33;

NavigationInfo NavigationInfo34 = createNode("NavigationInfo");
children[1] = NavigationInfo34;

Group Group35 = createNode("Group");
Group35.DEF = "Original_WorldInfo";
WorldInfo WorldInfo36 = createNode("WorldInfo");
WorldInfo36.info = new MFString(new java.lang.String[" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "]);
WorldInfo36.title = "HANIM 200x Default Joint Centers, LOA3";
Group35.children = new MFNode();

Group35.children[0] = WorldInfo36;

children[2] = Group35;

//TODO move viewpoints to be internal to HAnimHumanoid
//Viewpoint centerOfRotation=\"0 0.9149 0.0016\" matches initial at-rest locaton of the sacroliac. Note that these viewpoints are external to the HAnimHumanoid and do not move with the human.
Viewpoint Viewpoint37 = createNode("Viewpoint");
Viewpoint37.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint37.description = "Humanoid LOA 3 Front";
Viewpoint37.position = new SFVec3f(new float[0,0.4,4]);
children[3] = Viewpoint37;

Viewpoint Viewpoint38 = createNode("Viewpoint");
Viewpoint38.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint38.description = "Humanoid LOA 3 Front Close";
Viewpoint38.position = new SFVec3f(new float[0,0.8,2]);
children[4] = Viewpoint38;

Viewpoint Viewpoint39 = createNode("Viewpoint");
Viewpoint39.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint39.description = "Humanoid LOA 3 Front Closer";
Viewpoint39.position = new SFVec3f(new float[0,1.2,1]);
children[5] = Viewpoint39;

Viewpoint Viewpoint40 = createNode("Viewpoint");
Viewpoint40.centerOfRotation = new SFVec3f(new float[0,1.5,0.0016]);
Viewpoint40.description = "Humanoid LOA 3 Front Face";
Viewpoint40.position = new SFVec3f(new float[0,1.63,1]);
children[6] = Viewpoint40;

Viewpoint Viewpoint41 = createNode("Viewpoint");
Viewpoint41.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint41.description = "Humanoid LOA 3 Right Side";
Viewpoint41.orientation = new SFRotation(new float[0,1,0,1.5708]);
Viewpoint41.position = new SFVec3f(new float[2.6,0.8,0]);
children[7] = Viewpoint41;

Viewpoint Viewpoint42 = createNode("Viewpoint");
Viewpoint42.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint42.description = "Humanoid LOA 3 Right Side Close";
Viewpoint42.orientation = new SFRotation(new float[0,1,0,1.2]);
Viewpoint42.position = new SFVec3f(new float[1,0.8,0.5]);
children[8] = Viewpoint42;

Viewpoint Viewpoint43 = createNode("Viewpoint");
Viewpoint43.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint43.description = "Humanoid LOA 3 Left Side Close";
Viewpoint43.orientation = new SFRotation(new float[0,1,0,-1.2]);
Viewpoint43.position = new SFVec3f(new float[-1,0.8,0.5]);
children[9] = Viewpoint43;

Viewpoint Viewpoint44 = createNode("Viewpoint");
Viewpoint44.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint44.description = "Humanoid LOA 3 Left Side";
Viewpoint44.orientation = new SFRotation(new float[0,1,0,-1.5708]);
Viewpoint44.position = new SFVec3f(new float[-2.6,0.8,0]);
children[10] = Viewpoint44;

Viewpoint Viewpoint45 = createNode("Viewpoint");
Viewpoint45.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint45.description = "Humanoid LOA 3 Top";
Viewpoint45.orientation = new SFRotation(new float[1,0,0,-1.5708]);
Viewpoint45.position = new SFVec3f(new float[0,3.5,0]);
children[11] = Viewpoint45;

HAnimHumanoid HAnimHumanoid46 = createNode("HAnimHumanoid");
HAnimHumanoid46.name = "humanoid";
HAnimHumanoid46.DEF = "hanim_humanoid";
HAnimHumanoid46.info = new MFString(new java.lang.String["authorName=Matthew T. Beitler Joe D. Williams Don Brutzman","authorEmail=HAnim@web3D.org","copyright=none","creationDate=12 May 1999","usageRestrictions=none","humanoidVersion=2.0","height=1.7504"]);
HAnimHumanoid46.version = "1.0";
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
//right between the eyes, stationary position not animating except with body itself
HAnimJoint HAnimJoint47 = createNode("HAnimJoint");
HAnimJoint47.name = "humanoid_root";
HAnimJoint47.DEF = "hanim_humanoid_root";
HAnimJoint47.center = new SFVec3f(new float[0,0.824,0.0277]);
HAnimJoint47.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint47.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment48 = createNode("HAnimSegment");
HAnimSegment48.name = "sacrum";
HAnimSegment48.DEF = "hanim_sacrum";
//<HAnimJoint name='humanoid_root'/> visualization sphere is placed within <HAnimSegment name='sacrum'/>
TouchSensor TouchSensor49 = createNode("TouchSensor");
TouchSensor49.description = "HAnimJoint HumanoidRoot, HAnimSegment sacrum";
HAnimSegment48.children = new MFNode();

HAnimSegment48.children[0] = TouchSensor49;

Transform Transform50 = createNode("Transform");
Transform50.translation = new SFVec3f(new float[0,0.824,0.0277]);
Shape Shape51 = createNode("Shape");
Shape51.DEF = "HAnimJointShape";
Sphere Sphere52 = createNode("Sphere");
Sphere52.radius = 0.006;
Shape51.geometry = Sphere52;

Appearance Appearance53 = createNode("Appearance");
Appearance53.DEF = "HAnimJointAppearance";
Material Material54 = createNode("Material");
Material54.diffuseColor = new SFColor(new float[1,0.5,0]);
Material54.transparency = 0.5;
Appearance53.material = Material54;

Shape51.appearance = Appearance53;

Transform50.children = new MFNode();

Transform50.children[0] = Shape51;

HAnimSegment48.children[1] = Transform50;

//HAnimSegment visualization line segment from parent <HAnimJoint name='humanoid_root'/> to <HAnimJoint name='sacroiliac'/>
Shape Shape55 = createNode("Shape");
LineSet LineSet56 = createNode("LineSet");
LineSet56.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate57 = createNode("Coordinate");
Coordinate57.point = new MFVec3f(new float[0,0.824,0.0277,0,0.9149,0.0016]);
LineSet56.coord = Coordinate57;

ColorRGBA ColorRGBA58 = createNode("ColorRGBA");
ColorRGBA58.DEF = "HAnimSegmentLineColorRGBA";
ColorRGBA58.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1]);
LineSet56.color = ColorRGBA58;

Shape55.geometry = LineSet56;

HAnimSegment48.children[2] = Shape55;

//HAnimSegment visualization line segment from parent <HAnimJoint name='humanoid_root'/> to <HAnimJoint name='vl5'/>
Shape Shape59 = createNode("Shape");
LineSet LineSet60 = createNode("LineSet");
LineSet60.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate61 = createNode("Coordinate");
Coordinate61.point = new MFVec3f(new float[0,0.824,0.0277,0.0028,1.0568,-0.0776]);
LineSet60.coord = Coordinate61;

ColorRGBA ColorRGBA62 = createNode("ColorRGBA");
ColorRGBA62.USE = "HAnimSegmentLineColorRGBA";
LineSet60.color = ColorRGBA62;

Shape59.geometry = LineSet60;

HAnimSegment48.children[3] = Shape59;

HAnimJoint47.children = new MFNode();

HAnimJoint47.children[0] = HAnimSegment48;

HAnimJoint HAnimJoint63 = createNode("HAnimJoint");
HAnimJoint63.name = "sacroiliac";
HAnimJoint63.DEF = "hanim_sacroiliac";
HAnimJoint63.center = new SFVec3f(new float[0,0.9149,0.0016]);
HAnimJoint63.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint63.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment64 = createNode("HAnimSegment");
HAnimSegment64.name = "pelvis";
HAnimSegment64.DEF = "hanim_pelvis";
//<HAnimJoint name='sacroiliac'/> visualization sphere is placed within <HAnimSegment name='pelvis'/>
TouchSensor TouchSensor65 = createNode("TouchSensor");
TouchSensor65.description = "HAnimJoint sacroiliac, HAnimSegment pelvis";
HAnimSegment64.children = new MFNode();

HAnimSegment64.children[0] = TouchSensor65;

Transform Transform66 = createNode("Transform");
Transform66.translation = new SFVec3f(new float[0,0.9149,0.0016]);
Shape Shape67 = createNode("Shape");
Shape67.USE = "HAnimJointShape";
Transform66.children = new MFNode();

Transform66.children[0] = Shape67;

HAnimSegment64.children[1] = Transform66;

//HAnimSegment visualization line segment from parent <HAnimJoint name='sacroiliac'/> to <HAnimJoint name='l_hip'/>
Shape Shape68 = createNode("Shape");
LineSet LineSet69 = createNode("LineSet");
LineSet69.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate70 = createNode("Coordinate");
Coordinate70.point = new MFVec3f(new float[0,0.9149,0.0016,0.0961,0.9124,-0.0001]);
LineSet69.coord = Coordinate70;

ColorRGBA ColorRGBA71 = createNode("ColorRGBA");
ColorRGBA71.USE = "HAnimSegmentLineColorRGBA";
LineSet69.color = ColorRGBA71;

Shape68.geometry = LineSet69;

HAnimSegment64.children[2] = Shape68;

//HAnimSegment visualization line segment from parent <HAnimJoint name='sacroiliac'/> to <HAnimJoint name='r_hip'/>
Shape Shape72 = createNode("Shape");
LineSet LineSet73 = createNode("LineSet");
LineSet73.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate74 = createNode("Coordinate");
Coordinate74.point = new MFVec3f(new float[0,0.9149,0.0016,-0.0961,0.9124,-0.0001]);
LineSet73.coord = Coordinate74;

ColorRGBA ColorRGBA75 = createNode("ColorRGBA");
ColorRGBA75.USE = "HAnimSegmentLineColorRGBA";
LineSet73.color = ColorRGBA75;

Shape72.geometry = LineSet73;

HAnimSegment64.children[3] = Shape72;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_iliocristale'/>
Shape Shape76 = createNode("Shape");
LineSet LineSet77 = createNode("LineSet");
LineSet77.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate78 = createNode("Coordinate");
Coordinate78.point = new MFVec3f(new float[0,0.9149,0.0016,-0.1525,1.0628,0.0035]);
LineSet77.coord = Coordinate78;

ColorRGBA ColorRGBA79 = createNode("ColorRGBA");
ColorRGBA79.DEF = "HAnimSiteLineColorRGBA";
ColorRGBA79.color = new MFColorRGBA(new float[1,0,0,1,1,0,0,0.1]);
LineSet77.color = ColorRGBA79;

Shape76.geometry = LineSet77;

HAnimSegment64.children[4] = Shape76;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_trochanterion'/>
Shape Shape80 = createNode("Shape");
LineSet LineSet81 = createNode("LineSet");
LineSet81.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate82 = createNode("Coordinate");
Coordinate82.point = new MFVec3f(new float[0,0.9149,0.0016,-0.1689,0.8419,0.0352]);
LineSet81.coord = Coordinate82;

ColorRGBA ColorRGBA83 = createNode("ColorRGBA");
ColorRGBA83.USE = "HAnimSiteLineColorRGBA";
LineSet81.color = ColorRGBA83;

Shape80.geometry = LineSet81;

HAnimSegment64.children[5] = Shape80;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_iliocristale'/>
Shape Shape84 = createNode("Shape");
LineSet LineSet85 = createNode("LineSet");
LineSet85.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate86 = createNode("Coordinate");
Coordinate86.point = new MFVec3f(new float[0,0.9149,0.0016,0.1612,1.0537,0.0008]);
LineSet85.coord = Coordinate86;

ColorRGBA ColorRGBA87 = createNode("ColorRGBA");
ColorRGBA87.USE = "HAnimSiteLineColorRGBA";
LineSet85.color = ColorRGBA87;

Shape84.geometry = LineSet85;

HAnimSegment64.children[6] = Shape84;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_trochanterion'/>
Shape Shape88 = createNode("Shape");
LineSet LineSet89 = createNode("LineSet");
LineSet89.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate90 = createNode("Coordinate");
Coordinate90.point = new MFVec3f(new float[0,0.9149,0.0016,0.1677,0.8336,0.0303]);
LineSet89.coord = Coordinate90;

ColorRGBA ColorRGBA91 = createNode("ColorRGBA");
ColorRGBA91.USE = "HAnimSiteLineColorRGBA";
LineSet89.color = ColorRGBA91;

Shape88.geometry = LineSet89;

HAnimSegment64.children[7] = Shape88;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_asis'/>
Shape Shape92 = createNode("Shape");
LineSet LineSet93 = createNode("LineSet");
LineSet93.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate94 = createNode("Coordinate");
Coordinate94.point = new MFVec3f(new float[0,0.9149,0.0016,-0.0887,1.0021,0.1112]);
LineSet93.coord = Coordinate94;

ColorRGBA ColorRGBA95 = createNode("ColorRGBA");
ColorRGBA95.USE = "HAnimSiteLineColorRGBA";
LineSet93.color = ColorRGBA95;

Shape92.geometry = LineSet93;

HAnimSegment64.children[8] = Shape92;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_asis'/>
Shape Shape96 = createNode("Shape");
LineSet LineSet97 = createNode("LineSet");
LineSet97.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate98 = createNode("Coordinate");
Coordinate98.point = new MFVec3f(new float[0,0.9149,0.0016,0.0925,0.9983,0.1052]);
LineSet97.coord = Coordinate98;

ColorRGBA ColorRGBA99 = createNode("ColorRGBA");
ColorRGBA99.USE = "HAnimSiteLineColorRGBA";
LineSet97.color = ColorRGBA99;

Shape96.geometry = LineSet97;

HAnimSegment64.children[9] = Shape96;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_psis'/>
Shape Shape100 = createNode("Shape");
LineSet LineSet101 = createNode("LineSet");
LineSet101.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate102 = createNode("Coordinate");
Coordinate102.point = new MFVec3f(new float[0,0.9149,0.0016,-0.0716,1.019,-0.1138]);
LineSet101.coord = Coordinate102;

ColorRGBA ColorRGBA103 = createNode("ColorRGBA");
ColorRGBA103.USE = "HAnimSiteLineColorRGBA";
LineSet101.color = ColorRGBA103;

Shape100.geometry = LineSet101;

HAnimSegment64.children[10] = Shape100;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_psis'/>
Shape Shape104 = createNode("Shape");
LineSet LineSet105 = createNode("LineSet");
LineSet105.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate106 = createNode("Coordinate");
Coordinate106.point = new MFVec3f(new float[0,0.9149,0.0016,0.0774,1.019,-0.1151]);
LineSet105.coord = Coordinate106;

ColorRGBA ColorRGBA107 = createNode("ColorRGBA");
ColorRGBA107.USE = "HAnimSiteLineColorRGBA";
LineSet105.color = ColorRGBA107;

Shape104.geometry = LineSet105;

HAnimSegment64.children[11] = Shape104;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='crotch'/>
Shape Shape108 = createNode("Shape");
LineSet LineSet109 = createNode("LineSet");
LineSet109.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate110 = createNode("Coordinate");
Coordinate110.point = new MFVec3f(new float[0,0.9149,0.0016,0.0034,0.8266,0.0257]);
LineSet109.coord = Coordinate110;

ColorRGBA ColorRGBA111 = createNode("ColorRGBA");
ColorRGBA111.USE = "HAnimSiteLineColorRGBA";
LineSet109.color = ColorRGBA111;

Shape108.geometry = LineSet109;

HAnimSegment64.children[12] = Shape108;

HAnimSite HAnimSite112 = createNode("HAnimSite");
HAnimSite112.name = "r_iliocristale_pt";
HAnimSite112.DEF = "hanim_r_iliocristale_pt";
HAnimSite112.translation = new SFVec3f(new float[-0.1525,1.0628,0.0035]);
//HAnimSite visualization shape
TouchSensor TouchSensor113 = createNode("TouchSensor");
TouchSensor113.description = "HAnimSite r_iliocristale";
HAnimSite112.children = new MFNode();

HAnimSite112.children[0] = TouchSensor113;

Shape Shape114 = createNode("Shape");
Shape114.DEF = "HAnimSiteShape";
IndexedFaceSet IndexedFaceSet115 = createNode("IndexedFaceSet");
IndexedFaceSet115.DEF = "DiamondIFS";
IndexedFaceSet115.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet115.creaseAngle = 0.5;
IndexedFaceSet115.solid = False;
Coordinate Coordinate116 = createNode("Coordinate");
Coordinate116.point = new MFVec3f(new float[0,0.008,0,-0.008,0,0,0,0,0.008,0.008,0,0,0,0,-0.008,0,-0.008,0]);
IndexedFaceSet115.coord = Coordinate116;

Shape114.geometry = IndexedFaceSet115;

Appearance Appearance117 = createNode("Appearance");
Material Material118 = createNode("Material");
Material118.diffuseColor = new SFColor(new float[1,0,0]);
Appearance117.material = Material118;

Shape114.appearance = Appearance117;

HAnimSite112.children[1] = Shape114;

HAnimSegment64.children[13] = HAnimSite112;

HAnimSite HAnimSite119 = createNode("HAnimSite");
HAnimSite119.name = "r_trochanterion_pt";
HAnimSite119.DEF = "hanim_r_trochanterion_pt";
HAnimSite119.translation = new SFVec3f(new float[-0.1689,0.8419,0.0352]);
//HAnimSite visualization shape
TouchSensor TouchSensor120 = createNode("TouchSensor");
TouchSensor120.description = "HAnimSite r_trochanterion";
HAnimSite119.children = new MFNode();

HAnimSite119.children[0] = TouchSensor120;

Shape Shape121 = createNode("Shape");
Shape121.USE = "HAnimSiteShape";
HAnimSite119.children[1] = Shape121;

HAnimSegment64.children[14] = HAnimSite119;

HAnimSite HAnimSite122 = createNode("HAnimSite");
HAnimSite122.name = "l_iliocristale_pt";
HAnimSite122.DEF = "hanim_l_iliocristale_pt";
HAnimSite122.translation = new SFVec3f(new float[0.1612,1.0537,0.0008]);
//HAnimSite visualization shape
TouchSensor TouchSensor123 = createNode("TouchSensor");
TouchSensor123.description = "HAnimSite l_iliocristale";
HAnimSite122.children = new MFNode();

HAnimSite122.children[0] = TouchSensor123;

Shape Shape124 = createNode("Shape");
Shape124.USE = "HAnimSiteShape";
HAnimSite122.children[1] = Shape124;

HAnimSegment64.children[15] = HAnimSite122;

HAnimSite HAnimSite125 = createNode("HAnimSite");
HAnimSite125.name = "l_trochanterion_pt";
HAnimSite125.DEF = "hanim_l_trochanterion_pt";
HAnimSite125.translation = new SFVec3f(new float[0.1677,0.8336,0.0303]);
//HAnimSite visualization shape
TouchSensor TouchSensor126 = createNode("TouchSensor");
TouchSensor126.description = "HAnimSite l_trochanterion";
HAnimSite125.children = new MFNode();

HAnimSite125.children[0] = TouchSensor126;

Shape Shape127 = createNode("Shape");
Shape127.USE = "HAnimSiteShape";
HAnimSite125.children[1] = Shape127;

HAnimSegment64.children[16] = HAnimSite125;

HAnimSite HAnimSite128 = createNode("HAnimSite");
HAnimSite128.name = "r_asis_pt";
HAnimSite128.DEF = "hanim_r_asis_pt";
HAnimSite128.translation = new SFVec3f(new float[-0.0887,1.0021,0.1112]);
//HAnimSite visualization shape
TouchSensor TouchSensor129 = createNode("TouchSensor");
TouchSensor129.description = "HAnimSite r_asis";
HAnimSite128.children = new MFNode();

HAnimSite128.children[0] = TouchSensor129;

Shape Shape130 = createNode("Shape");
Shape130.USE = "HAnimSiteShape";
HAnimSite128.children[1] = Shape130;

HAnimSegment64.children[17] = HAnimSite128;

HAnimSite HAnimSite131 = createNode("HAnimSite");
HAnimSite131.name = "l_asis_pt";
HAnimSite131.DEF = "hanim_l_asis_pt";
HAnimSite131.translation = new SFVec3f(new float[0.0925,0.9983,0.1052]);
//HAnimSite visualization shape
TouchSensor TouchSensor132 = createNode("TouchSensor");
TouchSensor132.description = "HAnimSite l_asis";
HAnimSite131.children = new MFNode();

HAnimSite131.children[0] = TouchSensor132;

Shape Shape133 = createNode("Shape");
Shape133.USE = "HAnimSiteShape";
HAnimSite131.children[1] = Shape133;

HAnimSegment64.children[18] = HAnimSite131;

HAnimSite HAnimSite134 = createNode("HAnimSite");
HAnimSite134.name = "r_psis_pt";
HAnimSite134.DEF = "hanim_r_psis_pt";
HAnimSite134.translation = new SFVec3f(new float[-0.0716,1.019,-0.1138]);
//HAnimSite visualization shape
TouchSensor TouchSensor135 = createNode("TouchSensor");
TouchSensor135.description = "HAnimSite r_psis";
HAnimSite134.children = new MFNode();

HAnimSite134.children[0] = TouchSensor135;

Shape Shape136 = createNode("Shape");
Shape136.USE = "HAnimSiteShape";
HAnimSite134.children[1] = Shape136;

HAnimSegment64.children[19] = HAnimSite134;

HAnimSite HAnimSite137 = createNode("HAnimSite");
HAnimSite137.name = "l_psis_pt";
HAnimSite137.DEF = "hanim_l_psis_pt";
HAnimSite137.translation = new SFVec3f(new float[0.0774,1.019,-0.1151]);
//HAnimSite visualization shape
TouchSensor TouchSensor138 = createNode("TouchSensor");
TouchSensor138.description = "HAnimSite l_psis";
HAnimSite137.children = new MFNode();

HAnimSite137.children[0] = TouchSensor138;

Shape Shape139 = createNode("Shape");
Shape139.USE = "HAnimSiteShape";
HAnimSite137.children[1] = Shape139;

HAnimSegment64.children[20] = HAnimSite137;

HAnimSite HAnimSite140 = createNode("HAnimSite");
HAnimSite140.name = "crotch_pt";
HAnimSite140.DEF = "hanim_crotch_pt";
HAnimSite140.translation = new SFVec3f(new float[0.0034,0.8266,0.0257]);
//HAnimSite visualization shape
TouchSensor TouchSensor141 = createNode("TouchSensor");
TouchSensor141.description = "HAnimSite crotch";
HAnimSite140.children = new MFNode();

HAnimSite140.children[0] = TouchSensor141;

Shape Shape142 = createNode("Shape");
Shape142.USE = "HAnimSiteShape";
HAnimSite140.children[1] = Shape142;

HAnimSegment64.children[21] = HAnimSite140;

HAnimJoint63.children = new MFNode();

HAnimJoint63.children[0] = HAnimSegment64;

HAnimJoint HAnimJoint143 = createNode("HAnimJoint");
HAnimJoint143.name = "l_hip";
HAnimJoint143.DEF = "hanim_l_hip";
HAnimJoint143.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
HAnimJoint143.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint143.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment144 = createNode("HAnimSegment");
HAnimSegment144.name = "l_thigh";
HAnimSegment144.DEF = "hanim_l_thigh";
//<HAnimJoint name='l_hip'/> visualization sphere is placed within <HAnimSegment name='l_thigh'/>
TouchSensor TouchSensor145 = createNode("TouchSensor");
TouchSensor145.description = "HAnimJoint l_hip, HAnimSegment l_thigh";
HAnimSegment144.children = new MFNode();

HAnimSegment144.children[0] = TouchSensor145;

Transform Transform146 = createNode("Transform");
Transform146.translation = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
Shape Shape147 = createNode("Shape");
Shape147.USE = "HAnimJointShape";
Transform146.children = new MFNode();

Transform146.children[0] = Shape147;

HAnimSegment144.children[1] = Transform146;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_hip'/> to <HAnimJoint name='l_knee'/>
Shape Shape148 = createNode("Shape");
LineSet LineSet149 = createNode("LineSet");
LineSet149.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate150 = createNode("Coordinate");
Coordinate150.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.104,0.4867,0.0308]);
LineSet149.coord = Coordinate150;

ColorRGBA ColorRGBA151 = createNode("ColorRGBA");
ColorRGBA151.USE = "HAnimSegmentLineColorRGBA";
LineSet149.color = ColorRGBA151;

Shape148.geometry = LineSet149;

HAnimSegment144.children[2] = Shape148;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_knee_crease'/>
Shape Shape152 = createNode("Shape");
LineSet LineSet153 = createNode("LineSet");
LineSet153.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate154 = createNode("Coordinate");
Coordinate154.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.0993,0.4881,-0.0309]);
LineSet153.coord = Coordinate154;

ColorRGBA ColorRGBA155 = createNode("ColorRGBA");
ColorRGBA155.USE = "HAnimSiteLineColorRGBA";
LineSet153.color = ColorRGBA155;

Shape152.geometry = LineSet153;

HAnimSegment144.children[3] = Shape152;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_lateral_epicn'/>
Shape Shape156 = createNode("Shape");
LineSet LineSet157 = createNode("LineSet");
LineSet157.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate158 = createNode("Coordinate");
Coordinate158.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.1598,0.4967,0.0297]);
LineSet157.coord = Coordinate158;

ColorRGBA ColorRGBA159 = createNode("ColorRGBA");
ColorRGBA159.USE = "HAnimSiteLineColorRGBA";
LineSet157.color = ColorRGBA159;

Shape156.geometry = LineSet157;

HAnimSegment144.children[4] = Shape156;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_medial_epicn'/>
Shape Shape160 = createNode("Shape");
LineSet LineSet161 = createNode("LineSet");
LineSet161.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate162 = createNode("Coordinate");
Coordinate162.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.0398,0.4946,0.0303]);
LineSet161.coord = Coordinate162;

ColorRGBA ColorRGBA163 = createNode("ColorRGBA");
ColorRGBA163.USE = "HAnimSiteLineColorRGBA";
LineSet161.color = ColorRGBA163;

Shape160.geometry = LineSet161;

HAnimSegment144.children[5] = Shape160;

HAnimSite HAnimSite164 = createNode("HAnimSite");
HAnimSite164.name = "l_knee_crease_pt";
HAnimSite164.DEF = "hanim_l_knee_crease_pt";
HAnimSite164.translation = new SFVec3f(new float[0.0993,0.4881,-0.0309]);
//HAnimSite visualization shape
TouchSensor TouchSensor165 = createNode("TouchSensor");
TouchSensor165.description = "HAnimSite l_knee_crease";
HAnimSite164.children = new MFNode();

HAnimSite164.children[0] = TouchSensor165;

Shape Shape166 = createNode("Shape");
Shape166.USE = "HAnimSiteShape";
HAnimSite164.children[1] = Shape166;

HAnimSegment144.children[6] = HAnimSite164;

HAnimSite HAnimSite167 = createNode("HAnimSite");
HAnimSite167.name = "l_femoral_lateral_epicn_pt";
HAnimSite167.DEF = "hanim_l_femoral_lateral_epicn_pt";
HAnimSite167.translation = new SFVec3f(new float[0.1598,0.4967,0.0297]);
//HAnimSite visualization shape
TouchSensor TouchSensor168 = createNode("TouchSensor");
TouchSensor168.description = "HAnimSite l_femoral_lateral_epicn";
HAnimSite167.children = new MFNode();

HAnimSite167.children[0] = TouchSensor168;

Shape Shape169 = createNode("Shape");
Shape169.USE = "HAnimSiteShape";
HAnimSite167.children[1] = Shape169;

HAnimSegment144.children[7] = HAnimSite167;

HAnimSite HAnimSite170 = createNode("HAnimSite");
HAnimSite170.name = "l_femoral_medial_epicn_pt";
HAnimSite170.DEF = "hanim_l_femoral_medial_epicn_pt";
HAnimSite170.translation = new SFVec3f(new float[0.0398,0.4946,0.0303]);
//HAnimSite visualization shape
TouchSensor TouchSensor171 = createNode("TouchSensor");
TouchSensor171.description = "HAnimSite l_femoral_medial_epicn";
HAnimSite170.children = new MFNode();

HAnimSite170.children[0] = TouchSensor171;

Shape Shape172 = createNode("Shape");
Shape172.USE = "HAnimSiteShape";
HAnimSite170.children[1] = Shape172;

HAnimSegment144.children[8] = HAnimSite170;

HAnimJoint143.children = new MFNode();

HAnimJoint143.children[0] = HAnimSegment144;

HAnimJoint HAnimJoint173 = createNode("HAnimJoint");
HAnimJoint173.name = "l_knee";
HAnimJoint173.DEF = "hanim_l_knee";
HAnimJoint173.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
HAnimJoint173.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint173.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment174 = createNode("HAnimSegment");
HAnimSegment174.name = "l_calf";
HAnimSegment174.DEF = "hanim_l_calf";
//<HAnimJoint name='l_knee'/> visualization sphere is placed within <HAnimSegment name='l_calf'/>
TouchSensor TouchSensor175 = createNode("TouchSensor");
TouchSensor175.description = "HAnimJoint l_knee, HAnimSegment l_calf";
HAnimSegment174.children = new MFNode();

HAnimSegment174.children[0] = TouchSensor175;

Transform Transform176 = createNode("Transform");
Transform176.translation = new SFVec3f(new float[0.104,0.4867,0.0308]);
Shape Shape177 = createNode("Shape");
Shape177.USE = "HAnimJointShape";
Transform176.children = new MFNode();

Transform176.children[0] = Shape177;

HAnimSegment174.children[1] = Transform176;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_knee'/> to <HAnimJoint name='l_ankle'/>
Shape Shape178 = createNode("Shape");
LineSet LineSet179 = createNode("LineSet");
LineSet179.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate180 = createNode("Coordinate");
Coordinate180.point = new MFVec3f(new float[0.104,0.4867,0.0308,0.1101,0.0656,-0.0736]);
LineSet179.coord = Coordinate180;

ColorRGBA ColorRGBA181 = createNode("ColorRGBA");
ColorRGBA181.USE = "HAnimSegmentLineColorRGBA";
LineSet179.color = ColorRGBA181;

Shape178.geometry = LineSet179;

HAnimSegment174.children[2] = Shape178;

HAnimJoint173.children = new MFNode();

HAnimJoint173.children[0] = HAnimSegment174;

HAnimJoint HAnimJoint182 = createNode("HAnimJoint");
HAnimJoint182.name = "l_ankle";
HAnimJoint182.DEF = "hanim_l_ankle";
HAnimJoint182.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
HAnimJoint182.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint182.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment183 = createNode("HAnimSegment");
HAnimSegment183.name = "l_hindfoot";
HAnimSegment183.DEF = "hanim_l_hindfoot";
//<HAnimJoint name='l_ankle'/> visualization sphere is placed within <HAnimSegment name='l_hindfoot'/>
TouchSensor TouchSensor184 = createNode("TouchSensor");
TouchSensor184.description = "HAnimJoint l_ankle, HAnimSegment l_hindfoot";
HAnimSegment183.children = new MFNode();

HAnimSegment183.children[0] = TouchSensor184;

Transform Transform185 = createNode("Transform");
Transform185.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
Shape Shape186 = createNode("Shape");
Shape186.USE = "HAnimJointShape";
Transform185.children = new MFNode();

Transform185.children[0] = Shape186;

HAnimSegment183.children[1] = Transform185;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ankle'/> to <HAnimJoint name='l_subtalar'/>
Shape Shape187 = createNode("Shape");
LineSet LineSet188 = createNode("LineSet");
LineSet188.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate189 = createNode("Coordinate");
Coordinate189.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.1086,0.0001,-0.0368]);
LineSet188.coord = Coordinate189;

ColorRGBA ColorRGBA190 = createNode("ColorRGBA");
ColorRGBA190.USE = "HAnimSegmentLineColorRGBA";
LineSet188.color = ColorRGBA190;

Shape187.geometry = LineSet188;

HAnimSegment183.children[2] = Shape187;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_lateral_malleolus'/>
Shape Shape191 = createNode("Shape");
LineSet LineSet192 = createNode("LineSet");
LineSet192.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate193 = createNode("Coordinate");
Coordinate193.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.1308,0.0597,-0.1032]);
LineSet192.coord = Coordinate193;

ColorRGBA ColorRGBA194 = createNode("ColorRGBA");
ColorRGBA194.USE = "HAnimSiteLineColorRGBA";
LineSet192.color = ColorRGBA194;

Shape191.geometry = LineSet192;

HAnimSegment183.children[3] = Shape191;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_medial_malleolus'/>
Shape Shape195 = createNode("Shape");
LineSet LineSet196 = createNode("LineSet");
LineSet196.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate197 = createNode("Coordinate");
Coordinate197.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.089,0.0716,-0.0881]);
LineSet196.coord = Coordinate197;

ColorRGBA ColorRGBA198 = createNode("ColorRGBA");
ColorRGBA198.USE = "HAnimSiteLineColorRGBA";
LineSet196.color = ColorRGBA198;

Shape195.geometry = LineSet196;

HAnimSegment183.children[4] = Shape195;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_sphyrion'/>
Shape Shape199 = createNode("Shape");
LineSet LineSet200 = createNode("LineSet");
LineSet200.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate201 = createNode("Coordinate");
Coordinate201.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.089,0.0575,-0.0943]);
LineSet200.coord = Coordinate201;

ColorRGBA ColorRGBA202 = createNode("ColorRGBA");
ColorRGBA202.USE = "HAnimSiteLineColorRGBA";
LineSet200.color = ColorRGBA202;

Shape199.geometry = LineSet200;

HAnimSegment183.children[5] = Shape199;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_calcaneous_post'/>
Shape Shape203 = createNode("Shape");
LineSet LineSet204 = createNode("LineSet");
LineSet204.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate205 = createNode("Coordinate");
Coordinate205.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.0974,0.0259,-0.1171]);
LineSet204.coord = Coordinate205;

ColorRGBA ColorRGBA206 = createNode("ColorRGBA");
ColorRGBA206.USE = "HAnimSiteLineColorRGBA";
LineSet204.color = ColorRGBA206;

Shape203.geometry = LineSet204;

HAnimSegment183.children[6] = Shape203;

HAnimSite HAnimSite207 = createNode("HAnimSite");
HAnimSite207.name = "l_lateral_malleolus_pt";
HAnimSite207.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite207.translation = new SFVec3f(new float[0.1308,0.0597,-0.1032]);
//HAnimSite visualization shape
TouchSensor TouchSensor208 = createNode("TouchSensor");
TouchSensor208.description = "HAnimSite l_lateral_malleolus";
HAnimSite207.children = new MFNode();

HAnimSite207.children[0] = TouchSensor208;

Shape Shape209 = createNode("Shape");
Shape209.USE = "HAnimSiteShape";
HAnimSite207.children[1] = Shape209;

HAnimSegment183.children[7] = HAnimSite207;

HAnimSite HAnimSite210 = createNode("HAnimSite");
HAnimSite210.name = "l_medial_malleolus_pt";
HAnimSite210.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite210.translation = new SFVec3f(new float[0.089,0.0716,-0.0881]);
//HAnimSite visualization shape
TouchSensor TouchSensor211 = createNode("TouchSensor");
TouchSensor211.description = "HAnimSite l_medial_malleolus";
HAnimSite210.children = new MFNode();

HAnimSite210.children[0] = TouchSensor211;

Shape Shape212 = createNode("Shape");
Shape212.USE = "HAnimSiteShape";
HAnimSite210.children[1] = Shape212;

HAnimSegment183.children[8] = HAnimSite210;

HAnimSite HAnimSite213 = createNode("HAnimSite");
HAnimSite213.name = "l_sphyrion_pt";
HAnimSite213.DEF = "hanim_l_sphyrion_pt";
HAnimSite213.translation = new SFVec3f(new float[0.089,0.0575,-0.0943]);
//HAnimSite visualization shape
TouchSensor TouchSensor214 = createNode("TouchSensor");
TouchSensor214.description = "HAnimSite l_sphyrion";
HAnimSite213.children = new MFNode();

HAnimSite213.children[0] = TouchSensor214;

Shape Shape215 = createNode("Shape");
Shape215.USE = "HAnimSiteShape";
HAnimSite213.children[1] = Shape215;

HAnimSegment183.children[9] = HAnimSite213;

HAnimSite HAnimSite216 = createNode("HAnimSite");
HAnimSite216.name = "l_calcaneous_post_pt";
HAnimSite216.DEF = "hanim_l_calcaneous_post_pt";
HAnimSite216.translation = new SFVec3f(new float[0.0974,0.0259,-0.1171]);
//HAnimSite visualization shape
TouchSensor TouchSensor217 = createNode("TouchSensor");
TouchSensor217.description = "HAnimSite l_calcaneous_post";
HAnimSite216.children = new MFNode();

HAnimSite216.children[0] = TouchSensor217;

Shape Shape218 = createNode("Shape");
Shape218.USE = "HAnimSiteShape";
HAnimSite216.children[1] = Shape218;

HAnimSegment183.children[10] = HAnimSite216;

HAnimJoint182.children = new MFNode();

HAnimJoint182.children[0] = HAnimSegment183;

HAnimJoint HAnimJoint219 = createNode("HAnimJoint");
HAnimJoint219.name = "l_subtalar";
HAnimJoint219.DEF = "hanim_l_subtalar";
HAnimJoint219.center = new SFVec3f(new float[0.1086,0.0001,-0.0368]);
HAnimJoint219.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint219.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment220 = createNode("HAnimSegment");
HAnimSegment220.name = "l_midproximal";
HAnimSegment220.DEF = "hanim_l_midproximal";
//<HAnimJoint name='l_subtalar'/> visualization sphere is placed within <HAnimSegment name='l_midproximal'/>
TouchSensor TouchSensor221 = createNode("TouchSensor");
TouchSensor221.description = "HAnimJoint l_subtalar, HAnimSegment l_midproximal";
HAnimSegment220.children = new MFNode();

HAnimSegment220.children[0] = TouchSensor221;

Transform Transform222 = createNode("Transform");
Transform222.translation = new SFVec3f(new float[0.1086,0.0001,-0.0368]);
Shape Shape223 = createNode("Shape");
Shape223.USE = "HAnimJointShape";
Transform222.children = new MFNode();

Transform222.children[0] = Shape223;

HAnimSegment220.children[1] = Transform222;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_subtalar'/> to <HAnimJoint name='l_midtarsal'/>
Shape Shape224 = createNode("Shape");
LineSet LineSet225 = createNode("LineSet");
LineSet225.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate226 = createNode("Coordinate");
Coordinate226.point = new MFVec3f(new float[0.1086,0.0001,-0.0368,0.1086,0.0001,0.0368]);
LineSet225.coord = Coordinate226;

ColorRGBA ColorRGBA227 = createNode("ColorRGBA");
ColorRGBA227.USE = "HAnimSegmentLineColorRGBA";
LineSet225.color = ColorRGBA227;

Shape224.geometry = LineSet225;

HAnimSegment220.children[2] = Shape224;

HAnimJoint219.children = new MFNode();

HAnimJoint219.children[0] = HAnimSegment220;

HAnimJoint HAnimJoint228 = createNode("HAnimJoint");
HAnimJoint228.name = "l_midtarsal";
HAnimJoint228.DEF = "hanim_l_midtarsal";
HAnimJoint228.center = new SFVec3f(new float[0.1086,0.0001,0.0368]);
HAnimJoint228.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint228.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment229 = createNode("HAnimSegment");
HAnimSegment229.name = "l_middistal";
HAnimSegment229.DEF = "hanim_l_middistal";
//<HAnimJoint name='l_midtarsal'/> visualization sphere is placed within <HAnimSegment name='l_middistal'/>
TouchSensor TouchSensor230 = createNode("TouchSensor");
TouchSensor230.description = "HAnimJoint l_midtarsal, HAnimSegment l_middistal";
HAnimSegment229.children = new MFNode();

HAnimSegment229.children[0] = TouchSensor230;

Transform Transform231 = createNode("Transform");
Transform231.translation = new SFVec3f(new float[0.1086,0.0001,0.0368]);
Shape Shape232 = createNode("Shape");
Shape232.USE = "HAnimJointShape";
Transform231.children = new MFNode();

Transform231.children[0] = Shape232;

HAnimSegment229.children[1] = Transform231;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_midtarsal'/> to <HAnimJoint name='l_metatarsal'/>
Shape Shape233 = createNode("Shape");
LineSet LineSet234 = createNode("LineSet");
LineSet234.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate235 = createNode("Coordinate");
Coordinate235.point = new MFVec3f(new float[0.1086,0.0001,0.0368,0.1086,0,0.0762]);
LineSet234.coord = Coordinate235;

ColorRGBA ColorRGBA236 = createNode("ColorRGBA");
ColorRGBA236.USE = "HAnimSegmentLineColorRGBA";
LineSet234.color = ColorRGBA236;

Shape233.geometry = LineSet234;

HAnimSegment229.children[2] = Shape233;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_midtarsal'/> to <HAnimSite name='l_metatarsal_pha1'/>
Shape Shape237 = createNode("Shape");
LineSet LineSet238 = createNode("LineSet");
LineSet238.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate239 = createNode("Coordinate");
Coordinate239.point = new MFVec3f(new float[0.1086,0.0001,0.0368,0.0816,0.0232,0.0106]);
LineSet238.coord = Coordinate239;

ColorRGBA ColorRGBA240 = createNode("ColorRGBA");
ColorRGBA240.USE = "HAnimSiteLineColorRGBA";
LineSet238.color = ColorRGBA240;

Shape237.geometry = LineSet238;

HAnimSegment229.children[3] = Shape237;

HAnimSite HAnimSite241 = createNode("HAnimSite");
HAnimSite241.name = "l_metatarsal_pha1_pt";
HAnimSite241.DEF = "hanim_l_metatarsal_pha1_pt";
HAnimSite241.translation = new SFVec3f(new float[0.0816,0.0232,0.0106]);
//HAnimSite visualization shape
TouchSensor TouchSensor242 = createNode("TouchSensor");
TouchSensor242.description = "HAnimSite l_metatarsal_pha1";
HAnimSite241.children = new MFNode();

HAnimSite241.children[0] = TouchSensor242;

Shape Shape243 = createNode("Shape");
Shape243.USE = "HAnimSiteShape";
HAnimSite241.children[1] = Shape243;

HAnimSegment229.children[4] = HAnimSite241;

HAnimJoint228.children = new MFNode();

HAnimJoint228.children[0] = HAnimSegment229;

HAnimJoint HAnimJoint244 = createNode("HAnimJoint");
HAnimJoint244.name = "l_metatarsal";
HAnimJoint244.DEF = "hanim_l_metatarsal";
HAnimJoint244.center = new SFVec3f(new float[0.1086,0,0.0762]);
HAnimJoint244.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint244.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment245 = createNode("HAnimSegment");
HAnimSegment245.name = "l_forefoot";
HAnimSegment245.DEF = "hanim_l_forefoot";
//<HAnimJoint name='l_metatarsal'/> visualization sphere is placed within <HAnimSegment name='l_forefoot'/>
TouchSensor TouchSensor246 = createNode("TouchSensor");
TouchSensor246.description = "HAnimJoint l_metatarsal, HAnimSegment l_forefoot";
HAnimSegment245.children = new MFNode();

HAnimSegment245.children[0] = TouchSensor246;

Transform Transform247 = createNode("Transform");
Transform247.translation = new SFVec3f(new float[0.1086,0,0.0762]);
Shape Shape248 = createNode("Shape");
Shape248.USE = "HAnimJointShape";
Transform247.children = new MFNode();

Transform247.children[0] = Shape248;

HAnimSegment245.children[1] = Transform247;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_forefoot_tip'/>
Shape Shape249 = createNode("Shape");
LineSet LineSet250 = createNode("LineSet");
LineSet250.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate251 = createNode("Coordinate");
Coordinate251.point = new MFVec3f(new float[0.1086,0,0.0762,0.1354,0.0016,0.1476]);
LineSet250.coord = Coordinate251;

ColorRGBA ColorRGBA252 = createNode("ColorRGBA");
ColorRGBA252.USE = "HAnimSiteLineColorRGBA";
LineSet250.color = ColorRGBA252;

Shape249.geometry = LineSet250;

HAnimSegment245.children[2] = Shape249;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_metatarsal_pha5'/>
Shape Shape253 = createNode("Shape");
LineSet LineSet254 = createNode("LineSet");
LineSet254.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate255 = createNode("Coordinate");
Coordinate255.point = new MFVec3f(new float[0.1086,0,0.0762,0.1825,0.007,0.0928]);
LineSet254.coord = Coordinate255;

ColorRGBA ColorRGBA256 = createNode("ColorRGBA");
ColorRGBA256.USE = "HAnimSiteLineColorRGBA";
LineSet254.color = ColorRGBA256;

Shape253.geometry = LineSet254;

HAnimSegment245.children[3] = Shape253;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_digit2'/>
Shape Shape257 = createNode("Shape");
LineSet LineSet258 = createNode("LineSet");
LineSet258.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate259 = createNode("Coordinate");
Coordinate259.point = new MFVec3f(new float[0.1086,0,0.0762,0.1195,0.0079,0.1433]);
LineSet258.coord = Coordinate259;

ColorRGBA ColorRGBA260 = createNode("ColorRGBA");
ColorRGBA260.USE = "HAnimSiteLineColorRGBA";
LineSet258.color = ColorRGBA260;

Shape257.geometry = LineSet258;

HAnimSegment245.children[4] = Shape257;

HAnimSite HAnimSite261 = createNode("HAnimSite");
HAnimSite261.name = "l_forefoot_tip";
HAnimSite261.DEF = "hanim_l_forefoot_tip";
HAnimSite261.translation = new SFVec3f(new float[0.1354,0.0016,0.1476]);
//HAnimSite visualization shape
TouchSensor TouchSensor262 = createNode("TouchSensor");
TouchSensor262.description = "HAnimSite l_forefoot_tip";
HAnimSite261.children = new MFNode();

HAnimSite261.children[0] = TouchSensor262;

Shape Shape263 = createNode("Shape");
Shape263.USE = "HAnimSiteShape";
HAnimSite261.children[1] = Shape263;

HAnimSegment245.children[5] = HAnimSite261;

HAnimSite HAnimSite264 = createNode("HAnimSite");
HAnimSite264.name = "l_metatarsal_pha5_pt";
HAnimSite264.DEF = "hanim_l_metatarsal_pha5_pt";
HAnimSite264.translation = new SFVec3f(new float[0.1825,0.007,0.0928]);
//HAnimSite visualization shape
TouchSensor TouchSensor265 = createNode("TouchSensor");
TouchSensor265.description = "HAnimSite l_metatarsal_pha5";
HAnimSite264.children = new MFNode();

HAnimSite264.children[0] = TouchSensor265;

Shape Shape266 = createNode("Shape");
Shape266.USE = "HAnimSiteShape";
HAnimSite264.children[1] = Shape266;

HAnimSegment245.children[6] = HAnimSite264;

HAnimSite HAnimSite267 = createNode("HAnimSite");
HAnimSite267.name = "l_digit2_pt";
HAnimSite267.DEF = "hanim_l_digit2_pt";
HAnimSite267.translation = new SFVec3f(new float[0.1195,0.0079,0.1433]);
//HAnimSite visualization shape
TouchSensor TouchSensor268 = createNode("TouchSensor");
TouchSensor268.description = "HAnimSite l_digit2";
HAnimSite267.children = new MFNode();

HAnimSite267.children[0] = TouchSensor268;

Shape Shape269 = createNode("Shape");
Shape269.USE = "HAnimSiteShape";
HAnimSite267.children[1] = Shape269;

HAnimSegment245.children[7] = HAnimSite267;

HAnimJoint244.children = new MFNode();

HAnimJoint244.children[0] = HAnimSegment245;

HAnimJoint228.children[1] = HAnimJoint244;

HAnimJoint219.children[1] = HAnimJoint228;

HAnimJoint182.children[1] = HAnimJoint219;

HAnimJoint173.children[1] = HAnimJoint182;

HAnimJoint143.children[1] = HAnimJoint173;

HAnimJoint63.children[1] = HAnimJoint143;

HAnimJoint HAnimJoint270 = createNode("HAnimJoint");
HAnimJoint270.name = "r_hip";
HAnimJoint270.DEF = "hanim_r_hip";
HAnimJoint270.center = new SFVec3f(new float[-0.0961,0.9124,-0.0001]);
HAnimJoint270.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint270.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment271 = createNode("HAnimSegment");
HAnimSegment271.name = "r_thigh";
HAnimSegment271.DEF = "hanim_r_thigh";
//<HAnimJoint name='r_hip'/> visualization sphere is placed within <HAnimSegment name='r_thigh'/>
TouchSensor TouchSensor272 = createNode("TouchSensor");
TouchSensor272.description = "HAnimJoint r_hip, HAnimSegment r_thigh";
HAnimSegment271.children = new MFNode();

HAnimSegment271.children[0] = TouchSensor272;

Transform Transform273 = createNode("Transform");
Transform273.translation = new SFVec3f(new float[-0.0961,0.9124,-0.0001]);
Shape Shape274 = createNode("Shape");
Shape274.USE = "HAnimJointShape";
Transform273.children = new MFNode();

Transform273.children[0] = Shape274;

HAnimSegment271.children[1] = Transform273;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_hip'/> to <HAnimJoint name='r_knee'/>
Shape Shape275 = createNode("Shape");
LineSet LineSet276 = createNode("LineSet");
LineSet276.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate277 = createNode("Coordinate");
Coordinate277.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.104,0.4867,0.0308]);
LineSet276.coord = Coordinate277;

ColorRGBA ColorRGBA278 = createNode("ColorRGBA");
ColorRGBA278.USE = "HAnimSegmentLineColorRGBA";
LineSet276.color = ColorRGBA278;

Shape275.geometry = LineSet276;

HAnimSegment271.children[2] = Shape275;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_knee_crease'/>
Shape Shape279 = createNode("Shape");
LineSet LineSet280 = createNode("LineSet");
LineSet280.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate281 = createNode("Coordinate");
Coordinate281.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.0825,0.4932,-0.0326]);
LineSet280.coord = Coordinate281;

ColorRGBA ColorRGBA282 = createNode("ColorRGBA");
ColorRGBA282.USE = "HAnimSiteLineColorRGBA";
LineSet280.color = ColorRGBA282;

Shape279.geometry = LineSet280;

HAnimSegment271.children[3] = Shape279;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_lateral_epicn'/>
Shape Shape283 = createNode("Shape");
LineSet LineSet284 = createNode("LineSet");
LineSet284.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate285 = createNode("Coordinate");
Coordinate285.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.1421,0.4992,0.031]);
LineSet284.coord = Coordinate285;

ColorRGBA ColorRGBA286 = createNode("ColorRGBA");
ColorRGBA286.USE = "HAnimSiteLineColorRGBA";
LineSet284.color = ColorRGBA286;

Shape283.geometry = LineSet284;

HAnimSegment271.children[4] = Shape283;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_medial_epicn'/>
Shape Shape287 = createNode("Shape");
LineSet LineSet288 = createNode("LineSet");
LineSet288.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate289 = createNode("Coordinate");
Coordinate289.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.0221,0.5014,0.0289]);
LineSet288.coord = Coordinate289;

ColorRGBA ColorRGBA290 = createNode("ColorRGBA");
ColorRGBA290.USE = "HAnimSiteLineColorRGBA";
LineSet288.color = ColorRGBA290;

Shape287.geometry = LineSet288;

HAnimSegment271.children[5] = Shape287;

HAnimSite HAnimSite291 = createNode("HAnimSite");
HAnimSite291.name = "r_knee_crease_pt";
HAnimSite291.DEF = "hanim_r_knee_crease_pt";
HAnimSite291.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
//HAnimSite visualization shape
TouchSensor TouchSensor292 = createNode("TouchSensor");
TouchSensor292.description = "HAnimSite r_knee_crease";
HAnimSite291.children = new MFNode();

HAnimSite291.children[0] = TouchSensor292;

Shape Shape293 = createNode("Shape");
Shape293.USE = "HAnimSiteShape";
HAnimSite291.children[1] = Shape293;

HAnimSegment271.children[6] = HAnimSite291;

HAnimSite HAnimSite294 = createNode("HAnimSite");
HAnimSite294.name = "r_femoral_lateral_epicn_pt";
HAnimSite294.DEF = "hanim_r_femoral_lateral_epicn_pt";
HAnimSite294.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
//HAnimSite visualization shape
TouchSensor TouchSensor295 = createNode("TouchSensor");
TouchSensor295.description = "HAnimSite r_femoral_lateral_epicn";
HAnimSite294.children = new MFNode();

HAnimSite294.children[0] = TouchSensor295;

Shape Shape296 = createNode("Shape");
Shape296.USE = "HAnimSiteShape";
HAnimSite294.children[1] = Shape296;

HAnimSegment271.children[7] = HAnimSite294;

HAnimSite HAnimSite297 = createNode("HAnimSite");
HAnimSite297.name = "r_femoral_medial_epicn_pt";
HAnimSite297.DEF = "hanim_r_femoral_medial_epicn_pt";
HAnimSite297.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
//HAnimSite visualization shape
TouchSensor TouchSensor298 = createNode("TouchSensor");
TouchSensor298.description = "HAnimSite r_femoral_medial_epicn";
HAnimSite297.children = new MFNode();

HAnimSite297.children[0] = TouchSensor298;

Shape Shape299 = createNode("Shape");
Shape299.USE = "HAnimSiteShape";
HAnimSite297.children[1] = Shape299;

HAnimSegment271.children[8] = HAnimSite297;

HAnimJoint270.children = new MFNode();

HAnimJoint270.children[0] = HAnimSegment271;

HAnimJoint HAnimJoint300 = createNode("HAnimJoint");
HAnimJoint300.name = "r_knee";
HAnimJoint300.DEF = "hanim_r_knee";
HAnimJoint300.center = new SFVec3f(new float[-0.104,0.4867,0.0308]);
HAnimJoint300.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint300.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment301 = createNode("HAnimSegment");
HAnimSegment301.name = "r_calf";
HAnimSegment301.DEF = "hanim_r_calf";
//<HAnimJoint name='r_knee'/> visualization sphere is placed within <HAnimSegment name='r_calf'/>
TouchSensor TouchSensor302 = createNode("TouchSensor");
TouchSensor302.description = "HAnimJoint r_knee, HAnimSegment r_calf";
HAnimSegment301.children = new MFNode();

HAnimSegment301.children[0] = TouchSensor302;

Transform Transform303 = createNode("Transform");
Transform303.translation = new SFVec3f(new float[-0.104,0.4867,0.0308]);
Shape Shape304 = createNode("Shape");
Shape304.USE = "HAnimJointShape";
Transform303.children = new MFNode();

Transform303.children[0] = Shape304;

HAnimSegment301.children[1] = Transform303;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_knee'/> to <HAnimJoint name='r_ankle'/>
Shape Shape305 = createNode("Shape");
LineSet LineSet306 = createNode("LineSet");
LineSet306.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate307 = createNode("Coordinate");
Coordinate307.point = new MFVec3f(new float[-0.104,0.4867,0.0308,-0.1101,0.0656,-0.0736]);
LineSet306.coord = Coordinate307;

ColorRGBA ColorRGBA308 = createNode("ColorRGBA");
ColorRGBA308.USE = "HAnimSegmentLineColorRGBA";
LineSet306.color = ColorRGBA308;

Shape305.geometry = LineSet306;

HAnimSegment301.children[2] = Shape305;

HAnimJoint300.children = new MFNode();

HAnimJoint300.children[0] = HAnimSegment301;

HAnimJoint HAnimJoint309 = createNode("HAnimJoint");
HAnimJoint309.name = "r_ankle";
HAnimJoint309.DEF = "hanim_r_ankle";
HAnimJoint309.center = new SFVec3f(new float[-0.1101,0.0656,-0.0736]);
HAnimJoint309.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint309.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment310 = createNode("HAnimSegment");
HAnimSegment310.name = "r_hindfoot";
HAnimSegment310.DEF = "hanim_r_hindfoot";
//<HAnimJoint name='r_ankle'/> visualization sphere is placed within <HAnimSegment name='r_hindfoot'/>
TouchSensor TouchSensor311 = createNode("TouchSensor");
TouchSensor311.description = "HAnimJoint r_ankle, HAnimSegment r_hindfoot";
HAnimSegment310.children = new MFNode();

HAnimSegment310.children[0] = TouchSensor311;

Transform Transform312 = createNode("Transform");
Transform312.translation = new SFVec3f(new float[-0.1101,0.0656,-0.0736]);
Shape Shape313 = createNode("Shape");
Shape313.USE = "HAnimJointShape";
Transform312.children = new MFNode();

Transform312.children[0] = Shape313;

HAnimSegment310.children[1] = Transform312;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ankle'/> to <HAnimJoint name='r_subtalar'/>
Shape Shape314 = createNode("Shape");
LineSet LineSet315 = createNode("LineSet");
LineSet315.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate316 = createNode("Coordinate");
Coordinate316.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.1086,0.0001,-0.0368]);
LineSet315.coord = Coordinate316;

ColorRGBA ColorRGBA317 = createNode("ColorRGBA");
ColorRGBA317.USE = "HAnimSegmentLineColorRGBA";
LineSet315.color = ColorRGBA317;

Shape314.geometry = LineSet315;

HAnimSegment310.children[2] = Shape314;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_lateral_malleolus'/>
Shape Shape318 = createNode("Shape");
LineSet LineSet319 = createNode("LineSet");
LineSet319.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate320 = createNode("Coordinate");
Coordinate320.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.1006,0.0658,-0.1075]);
LineSet319.coord = Coordinate320;

ColorRGBA ColorRGBA321 = createNode("ColorRGBA");
ColorRGBA321.USE = "HAnimSiteLineColorRGBA";
LineSet319.color = ColorRGBA321;

Shape318.geometry = LineSet319;

HAnimSegment310.children[3] = Shape318;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_medial_malleolus'/>
Shape Shape322 = createNode("Shape");
LineSet LineSet323 = createNode("LineSet");
LineSet323.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate324 = createNode("Coordinate");
Coordinate324.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.0591,0.076,-0.0928]);
LineSet323.coord = Coordinate324;

ColorRGBA ColorRGBA325 = createNode("ColorRGBA");
ColorRGBA325.USE = "HAnimSiteLineColorRGBA";
LineSet323.color = ColorRGBA325;

Shape322.geometry = LineSet323;

HAnimSegment310.children[4] = Shape322;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_sphyrion'/>
Shape Shape326 = createNode("Shape");
LineSet LineSet327 = createNode("LineSet");
LineSet327.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate328 = createNode("Coordinate");
Coordinate328.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.0603,0.061,-0.1002]);
LineSet327.coord = Coordinate328;

ColorRGBA ColorRGBA329 = createNode("ColorRGBA");
ColorRGBA329.USE = "HAnimSiteLineColorRGBA";
LineSet327.color = ColorRGBA329;

Shape326.geometry = LineSet327;

HAnimSegment310.children[5] = Shape326;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_calcaneous_post'/>
Shape Shape330 = createNode("Shape");
LineSet LineSet331 = createNode("LineSet");
LineSet331.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate332 = createNode("Coordinate");
Coordinate332.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.0692,0.0297,-0.1221]);
LineSet331.coord = Coordinate332;

ColorRGBA ColorRGBA333 = createNode("ColorRGBA");
ColorRGBA333.USE = "HAnimSiteLineColorRGBA";
LineSet331.color = ColorRGBA333;

Shape330.geometry = LineSet331;

HAnimSegment310.children[6] = Shape330;

HAnimSite HAnimSite334 = createNode("HAnimSite");
HAnimSite334.name = "r_lateral_malleolus_pt";
HAnimSite334.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite334.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
//HAnimSite visualization shape
TouchSensor TouchSensor335 = createNode("TouchSensor");
TouchSensor335.description = "HAnimSite r_lateral_malleolus";
HAnimSite334.children = new MFNode();

HAnimSite334.children[0] = TouchSensor335;

Shape Shape336 = createNode("Shape");
Shape336.USE = "HAnimSiteShape";
HAnimSite334.children[1] = Shape336;

HAnimSegment310.children[7] = HAnimSite334;

HAnimSite HAnimSite337 = createNode("HAnimSite");
HAnimSite337.name = "r_medial_malleolus_pt";
HAnimSite337.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite337.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
//HAnimSite visualization shape
TouchSensor TouchSensor338 = createNode("TouchSensor");
TouchSensor338.description = "HAnimSite r_medial_malleolus";
HAnimSite337.children = new MFNode();

HAnimSite337.children[0] = TouchSensor338;

Shape Shape339 = createNode("Shape");
Shape339.USE = "HAnimSiteShape";
HAnimSite337.children[1] = Shape339;

HAnimSegment310.children[8] = HAnimSite337;

HAnimSite HAnimSite340 = createNode("HAnimSite");
HAnimSite340.name = "r_sphyrion_pt";
HAnimSite340.DEF = "hanim_r_sphyrion_pt";
HAnimSite340.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
//HAnimSite visualization shape
TouchSensor TouchSensor341 = createNode("TouchSensor");
TouchSensor341.description = "HAnimSite r_sphyrion";
HAnimSite340.children = new MFNode();

HAnimSite340.children[0] = TouchSensor341;

Shape Shape342 = createNode("Shape");
Shape342.USE = "HAnimSiteShape";
HAnimSite340.children[1] = Shape342;

HAnimSegment310.children[9] = HAnimSite340;

HAnimSite HAnimSite343 = createNode("HAnimSite");
HAnimSite343.name = "r_calcaneous_post_pt";
HAnimSite343.DEF = "hanim_r_calcaneous_post_pt";
HAnimSite343.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
//HAnimSite visualization shape
TouchSensor TouchSensor344 = createNode("TouchSensor");
TouchSensor344.description = "HAnimSite r_calcaneous_post";
HAnimSite343.children = new MFNode();

HAnimSite343.children[0] = TouchSensor344;

Shape Shape345 = createNode("Shape");
Shape345.USE = "HAnimSiteShape";
HAnimSite343.children[1] = Shape345;

HAnimSegment310.children[10] = HAnimSite343;

HAnimJoint309.children = new MFNode();

HAnimJoint309.children[0] = HAnimSegment310;

HAnimJoint HAnimJoint346 = createNode("HAnimJoint");
HAnimJoint346.name = "r_subtalar";
HAnimJoint346.DEF = "hanim_r_subtalar";
HAnimJoint346.center = new SFVec3f(new float[-0.1086,0.0001,-0.0368]);
HAnimJoint346.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint346.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment347 = createNode("HAnimSegment");
HAnimSegment347.name = "r_midproximal";
HAnimSegment347.DEF = "hanim_r_midproximal";
//<HAnimJoint name='r_subtalar'/> visualization sphere is placed within <HAnimSegment name='r_midproximal'/>
TouchSensor TouchSensor348 = createNode("TouchSensor");
TouchSensor348.description = "HAnimJoint r_subtalar, HAnimSegment r_midproximal";
HAnimSegment347.children = new MFNode();

HAnimSegment347.children[0] = TouchSensor348;

Transform Transform349 = createNode("Transform");
Transform349.translation = new SFVec3f(new float[-0.1086,0.0001,-0.0368]);
Shape Shape350 = createNode("Shape");
Shape350.USE = "HAnimJointShape";
Transform349.children = new MFNode();

Transform349.children[0] = Shape350;

HAnimSegment347.children[1] = Transform349;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_subtalar'/> to <HAnimJoint name='r_midtarsal'/>
Shape Shape351 = createNode("Shape");
LineSet LineSet352 = createNode("LineSet");
LineSet352.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate353 = createNode("Coordinate");
Coordinate353.point = new MFVec3f(new float[-0.1086,0.0001,-0.0368,-0.1086,0.0001,0.0368]);
LineSet352.coord = Coordinate353;

ColorRGBA ColorRGBA354 = createNode("ColorRGBA");
ColorRGBA354.USE = "HAnimSegmentLineColorRGBA";
LineSet352.color = ColorRGBA354;

Shape351.geometry = LineSet352;

HAnimSegment347.children[2] = Shape351;

HAnimJoint346.children = new MFNode();

HAnimJoint346.children[0] = HAnimSegment347;

HAnimJoint HAnimJoint355 = createNode("HAnimJoint");
HAnimJoint355.name = "r_midtarsal";
HAnimJoint355.DEF = "hanim_r_midtarsal";
HAnimJoint355.center = new SFVec3f(new float[-0.1086,0.0001,0.0368]);
HAnimJoint355.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint355.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment356 = createNode("HAnimSegment");
HAnimSegment356.name = "r_middistal";
HAnimSegment356.DEF = "hanim_r_middistal";
//<HAnimJoint name='r_midtarsal'/> visualization sphere is placed within <HAnimSegment name='r_middistal'/>
TouchSensor TouchSensor357 = createNode("TouchSensor");
TouchSensor357.description = "HAnimJoint r_midtarsal, HAnimSegment r_middistal";
HAnimSegment356.children = new MFNode();

HAnimSegment356.children[0] = TouchSensor357;

Transform Transform358 = createNode("Transform");
Transform358.translation = new SFVec3f(new float[-0.1086,0.0001,0.0368]);
Shape Shape359 = createNode("Shape");
Shape359.USE = "HAnimJointShape";
Transform358.children = new MFNode();

Transform358.children[0] = Shape359;

HAnimSegment356.children[1] = Transform358;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_midtarsal'/> to <HAnimJoint name='r_metatarsal'/>
Shape Shape360 = createNode("Shape");
LineSet LineSet361 = createNode("LineSet");
LineSet361.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate362 = createNode("Coordinate");
Coordinate362.point = new MFVec3f(new float[-0.1086,0.0001,0.0368,-0.1086,0,0.0762]);
LineSet361.coord = Coordinate362;

ColorRGBA ColorRGBA363 = createNode("ColorRGBA");
ColorRGBA363.USE = "HAnimSegmentLineColorRGBA";
LineSet361.color = ColorRGBA363;

Shape360.geometry = LineSet361;

HAnimSegment356.children[2] = Shape360;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_midtarsal'/> to <HAnimSite name='r_metatarsal_pha1'/>
Shape Shape364 = createNode("Shape");
LineSet LineSet365 = createNode("LineSet");
LineSet365.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate366 = createNode("Coordinate");
Coordinate366.point = new MFVec3f(new float[-0.1086,0.0001,0.0368,-0.0521,0.026,0.0127]);
LineSet365.coord = Coordinate366;

ColorRGBA ColorRGBA367 = createNode("ColorRGBA");
ColorRGBA367.USE = "HAnimSiteLineColorRGBA";
LineSet365.color = ColorRGBA367;

Shape364.geometry = LineSet365;

HAnimSegment356.children[3] = Shape364;

HAnimSite HAnimSite368 = createNode("HAnimSite");
HAnimSite368.name = "r_metatarsal_pha1_pt";
HAnimSite368.DEF = "hanim_r_metatarsal_pha1_pt";
HAnimSite368.translation = new SFVec3f(new float[-0.0521,0.026,0.0127]);
//HAnimSite visualization shape
TouchSensor TouchSensor369 = createNode("TouchSensor");
TouchSensor369.description = "HAnimSite r_metatarsal_pha1";
HAnimSite368.children = new MFNode();

HAnimSite368.children[0] = TouchSensor369;

Shape Shape370 = createNode("Shape");
Shape370.USE = "HAnimSiteShape";
HAnimSite368.children[1] = Shape370;

HAnimSegment356.children[4] = HAnimSite368;

HAnimJoint355.children = new MFNode();

HAnimJoint355.children[0] = HAnimSegment356;

HAnimJoint HAnimJoint371 = createNode("HAnimJoint");
HAnimJoint371.name = "r_metatarsal";
HAnimJoint371.DEF = "hanim_r_metatarsal";
HAnimJoint371.center = new SFVec3f(new float[-0.1086,0,0.0762]);
HAnimJoint371.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint371.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment372 = createNode("HAnimSegment");
HAnimSegment372.name = "r_forefoot";
HAnimSegment372.DEF = "hanim_r_forefoot";
//<HAnimJoint name='r_metatarsal'/> visualization sphere is placed within <HAnimSegment name='r_forefoot'/>
TouchSensor TouchSensor373 = createNode("TouchSensor");
TouchSensor373.description = "HAnimJoint r_metatarsal, HAnimSegment r_forefoot";
HAnimSegment372.children = new MFNode();

HAnimSegment372.children[0] = TouchSensor373;

Transform Transform374 = createNode("Transform");
Transform374.translation = new SFVec3f(new float[-0.1086,0,0.0762]);
Shape Shape375 = createNode("Shape");
Shape375.USE = "HAnimJointShape";
Transform374.children = new MFNode();

Transform374.children[0] = Shape375;

HAnimSegment372.children[1] = Transform374;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_forefoot_tip'/>
Shape Shape376 = createNode("Shape");
LineSet LineSet377 = createNode("LineSet");
LineSet377.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate378 = createNode("Coordinate");
Coordinate378.point = new MFVec3f(new float[-0.1086,0,0.0762,-0.1043,0.0227,0.145]);
LineSet377.coord = Coordinate378;

ColorRGBA ColorRGBA379 = createNode("ColorRGBA");
ColorRGBA379.USE = "HAnimSiteLineColorRGBA";
LineSet377.color = ColorRGBA379;

Shape376.geometry = LineSet377;

HAnimSegment372.children[2] = Shape376;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_metatarsal_pha5'/>
Shape Shape380 = createNode("Shape");
LineSet LineSet381 = createNode("LineSet");
LineSet381.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate382 = createNode("Coordinate");
Coordinate382.point = new MFVec3f(new float[-0.1086,0,0.0762,-0.1523,0.0166,0.0895]);
LineSet381.coord = Coordinate382;

ColorRGBA ColorRGBA383 = createNode("ColorRGBA");
ColorRGBA383.USE = "HAnimSiteLineColorRGBA";
LineSet381.color = ColorRGBA383;

Shape380.geometry = LineSet381;

HAnimSegment372.children[3] = Shape380;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_digit2'/>
Shape Shape384 = createNode("Shape");
LineSet LineSet385 = createNode("LineSet");
LineSet385.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate386 = createNode("Coordinate");
Coordinate386.point = new MFVec3f(new float[-0.1086,0,0.0762,-0.0883,0.0134,0.1383]);
LineSet385.coord = Coordinate386;

ColorRGBA ColorRGBA387 = createNode("ColorRGBA");
ColorRGBA387.USE = "HAnimSiteLineColorRGBA";
LineSet385.color = ColorRGBA387;

Shape384.geometry = LineSet385;

HAnimSegment372.children[4] = Shape384;

HAnimSite HAnimSite388 = createNode("HAnimSite");
HAnimSite388.name = "r_forefoot_tip";
HAnimSite388.DEF = "hanim_r_forefoot_tip";
HAnimSite388.translation = new SFVec3f(new float[-0.1043,0.0227,0.145]);
//HAnimSite visualization shape
TouchSensor TouchSensor389 = createNode("TouchSensor");
TouchSensor389.description = "HAnimSite r_forefoot_tip";
HAnimSite388.children = new MFNode();

HAnimSite388.children[0] = TouchSensor389;

Shape Shape390 = createNode("Shape");
Shape390.USE = "HAnimSiteShape";
HAnimSite388.children[1] = Shape390;

HAnimSegment372.children[5] = HAnimSite388;

HAnimSite HAnimSite391 = createNode("HAnimSite");
HAnimSite391.name = "r_metatarsal_pha5_pt";
HAnimSite391.DEF = "hanim_r_metatarsal_pha5_pt";
HAnimSite391.translation = new SFVec3f(new float[-0.1523,0.0166,0.0895]);
//HAnimSite visualization shape
TouchSensor TouchSensor392 = createNode("TouchSensor");
TouchSensor392.description = "HAnimSite r_metatarsal_pha5";
HAnimSite391.children = new MFNode();

HAnimSite391.children[0] = TouchSensor392;

Shape Shape393 = createNode("Shape");
Shape393.USE = "HAnimSiteShape";
HAnimSite391.children[1] = Shape393;

HAnimSegment372.children[6] = HAnimSite391;

HAnimSite HAnimSite394 = createNode("HAnimSite");
HAnimSite394.name = "r_digit2_pt";
HAnimSite394.DEF = "hanim_r_digit2_pt";
HAnimSite394.translation = new SFVec3f(new float[-0.0883,0.0134,0.1383]);
//HAnimSite visualization shape
TouchSensor TouchSensor395 = createNode("TouchSensor");
TouchSensor395.description = "HAnimSite r_digit2";
HAnimSite394.children = new MFNode();

HAnimSite394.children[0] = TouchSensor395;

Shape Shape396 = createNode("Shape");
Shape396.USE = "HAnimSiteShape";
HAnimSite394.children[1] = Shape396;

HAnimSegment372.children[7] = HAnimSite394;

HAnimJoint371.children = new MFNode();

HAnimJoint371.children[0] = HAnimSegment372;

HAnimJoint355.children[1] = HAnimJoint371;

HAnimJoint346.children[1] = HAnimJoint355;

HAnimJoint309.children[1] = HAnimJoint346;

HAnimJoint300.children[1] = HAnimJoint309;

HAnimJoint270.children[1] = HAnimJoint300;

HAnimJoint63.children[2] = HAnimJoint270;

HAnimJoint47.children[1] = HAnimJoint63;

HAnimJoint HAnimJoint397 = createNode("HAnimJoint");
HAnimJoint397.name = "vl5";
HAnimJoint397.DEF = "hanim_vl5";
HAnimJoint397.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimJoint397.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint397.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment398 = createNode("HAnimSegment");
HAnimSegment398.name = "l5";
HAnimSegment398.DEF = "hanim_l5";
//<HAnimJoint name='vl5'/> visualization sphere is placed within <HAnimSegment name='l5'/>
TouchSensor TouchSensor399 = createNode("TouchSensor");
TouchSensor399.description = "HAnimJoint vl5, HAnimSegment l5";
HAnimSegment398.children = new MFNode();

HAnimSegment398.children[0] = TouchSensor399;

Transform Transform400 = createNode("Transform");
Transform400.translation = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
Shape Shape401 = createNode("Shape");
Shape401.USE = "HAnimJointShape";
Transform400.children = new MFNode();

Transform400.children[0] = Shape401;

HAnimSegment398.children[1] = Transform400;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl5'/> to <HAnimJoint name='vl4'/>
Shape Shape402 = createNode("Shape");
LineSet LineSet403 = createNode("LineSet");
LineSet403.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate404 = createNode("Coordinate");
Coordinate404.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787]);
LineSet403.coord = Coordinate404;

ColorRGBA ColorRGBA405 = createNode("ColorRGBA");
ColorRGBA405.USE = "HAnimSegmentLineColorRGBA";
LineSet403.color = ColorRGBA405;

Shape402.geometry = LineSet403;

HAnimSegment398.children[2] = Shape402;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='waist_preferred_post'/>
Shape Shape406 = createNode("Shape");
LineSet LineSet407 = createNode("LineSet");
LineSet407.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate408 = createNode("Coordinate");
Coordinate408.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0,1.0915,-0.1091]);
LineSet407.coord = Coordinate408;

ColorRGBA ColorRGBA409 = createNode("ColorRGBA");
ColorRGBA409.USE = "HAnimSiteLineColorRGBA";
LineSet407.color = ColorRGBA409;

Shape406.geometry = LineSet407;

HAnimSegment398.children[3] = Shape406;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='navel'/>
Shape Shape410 = createNode("Shape");
LineSet LineSet411 = createNode("LineSet");
LineSet411.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate412 = createNode("Coordinate");
Coordinate412.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0069,1.0966,0.1017]);
LineSet411.coord = Coordinate412;

ColorRGBA ColorRGBA413 = createNode("ColorRGBA");
ColorRGBA413.USE = "HAnimSiteLineColorRGBA";
LineSet411.color = ColorRGBA413;

Shape410.geometry = LineSet411;

HAnimSegment398.children[4] = Shape410;

HAnimSite HAnimSite414 = createNode("HAnimSite");
HAnimSite414.name = "waist_preferred_post_pt";
HAnimSite414.DEF = "hanim_waist_preferred_post_pt";
HAnimSite414.translation = new SFVec3f(new float[0,1.0915,-0.1091]);
//HAnimSite visualization shape
TouchSensor TouchSensor415 = createNode("TouchSensor");
TouchSensor415.description = "HAnimSite waist_preferred_post";
HAnimSite414.children = new MFNode();

HAnimSite414.children[0] = TouchSensor415;

Shape Shape416 = createNode("Shape");
Shape416.USE = "HAnimSiteShape";
HAnimSite414.children[1] = Shape416;

HAnimSegment398.children[5] = HAnimSite414;

HAnimSite HAnimSite417 = createNode("HAnimSite");
HAnimSite417.name = "navel_pt";
HAnimSite417.DEF = "hanim_navel_pt";
HAnimSite417.translation = new SFVec3f(new float[0.0069,1.0966,0.1017]);
//HAnimSite visualization shape
TouchSensor TouchSensor418 = createNode("TouchSensor");
TouchSensor418.description = "HAnimSite navel";
HAnimSite417.children = new MFNode();

HAnimSite417.children[0] = TouchSensor418;

Shape Shape419 = createNode("Shape");
Shape419.USE = "HAnimSiteShape";
HAnimSite417.children[1] = Shape419;

HAnimSegment398.children[6] = HAnimSite417;

HAnimJoint397.children = new MFNode();

HAnimJoint397.children[0] = HAnimSegment398;

HAnimJoint HAnimJoint420 = createNode("HAnimJoint");
HAnimJoint420.name = "vl4";
HAnimJoint420.DEF = "hanim_vl4";
HAnimJoint420.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
HAnimJoint420.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint420.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment421 = createNode("HAnimSegment");
HAnimSegment421.name = "l4";
HAnimSegment421.DEF = "hanim_l4";
//<HAnimJoint name='vl4'/> visualization sphere is placed within <HAnimSegment name='l4'/>
TouchSensor TouchSensor422 = createNode("TouchSensor");
TouchSensor422.description = "HAnimJoint vl4, HAnimSegment l4";
HAnimSegment421.children = new MFNode();

HAnimSegment421.children[0] = TouchSensor422;

Transform Transform423 = createNode("Transform");
Transform423.translation = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
Shape Shape424 = createNode("Shape");
Shape424.USE = "HAnimJointShape";
Transform423.children = new MFNode();

Transform423.children[0] = Shape424;

HAnimSegment421.children[1] = Transform423;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl4'/> to <HAnimJoint name='vl3'/>
Shape Shape425 = createNode("Shape");
LineSet LineSet426 = createNode("LineSet");
LineSet426.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate427 = createNode("Coordinate");
Coordinate427.point = new MFVec3f(new float[0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796]);
LineSet426.coord = Coordinate427;

ColorRGBA ColorRGBA428 = createNode("ColorRGBA");
ColorRGBA428.USE = "HAnimSegmentLineColorRGBA";
LineSet426.color = ColorRGBA428;

Shape425.geometry = LineSet426;

HAnimSegment421.children[2] = Shape425;

HAnimJoint420.children = new MFNode();

HAnimJoint420.children[0] = HAnimSegment421;

HAnimJoint HAnimJoint429 = createNode("HAnimJoint");
HAnimJoint429.name = "vl3";
HAnimJoint429.DEF = "hanim_vl3";
HAnimJoint429.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimJoint429.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint429.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment430 = createNode("HAnimSegment");
HAnimSegment430.name = "l3";
HAnimSegment430.DEF = "hanim_l3";
//<HAnimJoint name='vl3'/> visualization sphere is placed within <HAnimSegment name='l3'/>
TouchSensor TouchSensor431 = createNode("TouchSensor");
TouchSensor431.description = "HAnimJoint vl3, HAnimSegment l3";
HAnimSegment430.children = new MFNode();

HAnimSegment430.children[0] = TouchSensor431;

Transform Transform432 = createNode("Transform");
Transform432.translation = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
Shape Shape433 = createNode("Shape");
Shape433.USE = "HAnimJointShape";
Transform432.children = new MFNode();

Transform432.children[0] = Shape433;

HAnimSegment430.children[1] = Transform432;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl3'/> to <HAnimJoint name='vl2'/>
Shape Shape434 = createNode("Shape");
LineSet LineSet435 = createNode("LineSet");
LineSet435.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate436 = createNode("Coordinate");
Coordinate436.point = new MFVec3f(new float[0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08]);
LineSet435.coord = Coordinate436;

ColorRGBA ColorRGBA437 = createNode("ColorRGBA");
ColorRGBA437.USE = "HAnimSegmentLineColorRGBA";
LineSet435.color = ColorRGBA437;

Shape434.geometry = LineSet435;

HAnimSegment430.children[2] = Shape434;

HAnimJoint429.children = new MFNode();

HAnimJoint429.children[0] = HAnimSegment430;

HAnimJoint HAnimJoint438 = createNode("HAnimJoint");
HAnimJoint438.name = "vl2";
HAnimJoint438.DEF = "hanim_vl2";
HAnimJoint438.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
HAnimJoint438.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint438.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment439 = createNode("HAnimSegment");
HAnimSegment439.name = "l2";
HAnimSegment439.DEF = "hanim_l2";
//<HAnimJoint name='vl2'/> visualization sphere is placed within <HAnimSegment name='l2'/>
TouchSensor TouchSensor440 = createNode("TouchSensor");
TouchSensor440.description = "HAnimJoint vl2, HAnimSegment l2";
HAnimSegment439.children = new MFNode();

HAnimSegment439.children[0] = TouchSensor440;

Transform Transform441 = createNode("Transform");
Transform441.translation = new SFVec3f(new float[0.0045,1.1546,-0.08]);
Shape Shape442 = createNode("Shape");
Shape442.USE = "HAnimJointShape";
Transform441.children = new MFNode();

Transform441.children[0] = Shape442;

HAnimSegment439.children[1] = Transform441;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl2'/> to <HAnimJoint name='vl1'/>
Shape Shape443 = createNode("Shape");
LineSet LineSet444 = createNode("LineSet");
LineSet444.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate445 = createNode("Coordinate");
Coordinate445.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805]);
LineSet444.coord = Coordinate445;

ColorRGBA ColorRGBA446 = createNode("ColorRGBA");
ColorRGBA446.USE = "HAnimSegmentLineColorRGBA";
LineSet444.color = ColorRGBA446;

Shape443.geometry = LineSet444;

HAnimSegment439.children[2] = Shape443;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='r_rib10'/>
Shape Shape447 = createNode("Shape");
LineSet LineSet448 = createNode("LineSet");
LineSet448.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate449 = createNode("Coordinate");
Coordinate449.point = new MFVec3f(new float[0.0045,1.1546,-0.08,-0.0711,1.1941,0.1016]);
LineSet448.coord = Coordinate449;

ColorRGBA ColorRGBA450 = createNode("ColorRGBA");
ColorRGBA450.USE = "HAnimSiteLineColorRGBA";
LineSet448.color = ColorRGBA450;

Shape447.geometry = LineSet448;

HAnimSegment439.children[3] = Shape447;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='l_rib10'/>
Shape Shape451 = createNode("Shape");
LineSet LineSet452 = createNode("LineSet");
LineSet452.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate453 = createNode("Coordinate");
Coordinate453.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0871,1.1925,0.0992]);
LineSet452.coord = Coordinate453;

ColorRGBA ColorRGBA454 = createNode("ColorRGBA");
ColorRGBA454.USE = "HAnimSiteLineColorRGBA";
LineSet452.color = ColorRGBA454;

Shape451.geometry = LineSet452;

HAnimSegment439.children[4] = Shape451;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='rib10_midspine'/>
Shape Shape455 = createNode("Shape");
LineSet LineSet456 = createNode("LineSet");
LineSet456.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate457 = createNode("Coordinate");
Coordinate457.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0049,1.1908,-0.1113]);
LineSet456.coord = Coordinate457;

ColorRGBA ColorRGBA458 = createNode("ColorRGBA");
ColorRGBA458.USE = "HAnimSiteLineColorRGBA";
LineSet456.color = ColorRGBA458;

Shape455.geometry = LineSet456;

HAnimSegment439.children[5] = Shape455;

HAnimSite HAnimSite459 = createNode("HAnimSite");
HAnimSite459.name = "r_rib10_pt";
HAnimSite459.DEF = "hanim_r_rib10_pt";
HAnimSite459.translation = new SFVec3f(new float[-0.0711,1.1941,0.1016]);
//HAnimSite visualization shape
TouchSensor TouchSensor460 = createNode("TouchSensor");
TouchSensor460.description = "HAnimSite r_rib10";
HAnimSite459.children = new MFNode();

HAnimSite459.children[0] = TouchSensor460;

Shape Shape461 = createNode("Shape");
Shape461.USE = "HAnimSiteShape";
HAnimSite459.children[1] = Shape461;

HAnimSegment439.children[6] = HAnimSite459;

HAnimSite HAnimSite462 = createNode("HAnimSite");
HAnimSite462.name = "l_rib10_pt";
HAnimSite462.DEF = "hanim_l_rib10_pt";
HAnimSite462.translation = new SFVec3f(new float[0.0871,1.1925,0.0992]);
//HAnimSite visualization shape
TouchSensor TouchSensor463 = createNode("TouchSensor");
TouchSensor463.description = "HAnimSite l_rib10";
HAnimSite462.children = new MFNode();

HAnimSite462.children[0] = TouchSensor463;

Shape Shape464 = createNode("Shape");
Shape464.USE = "HAnimSiteShape";
HAnimSite462.children[1] = Shape464;

HAnimSegment439.children[7] = HAnimSite462;

HAnimSite HAnimSite465 = createNode("HAnimSite");
HAnimSite465.name = "rib10_midspine_pt";
HAnimSite465.DEF = "hanim_rib10_midspine_pt";
HAnimSite465.translation = new SFVec3f(new float[0.0049,1.1908,-0.1113]);
//HAnimSite visualization shape
TouchSensor TouchSensor466 = createNode("TouchSensor");
TouchSensor466.description = "HAnimSite rib10_midspine";
HAnimSite465.children = new MFNode();

HAnimSite465.children[0] = TouchSensor466;

Shape Shape467 = createNode("Shape");
Shape467.USE = "HAnimSiteShape";
HAnimSite465.children[1] = Shape467;

HAnimSegment439.children[8] = HAnimSite465;

HAnimJoint438.children = new MFNode();

HAnimJoint438.children[0] = HAnimSegment439;

HAnimJoint HAnimJoint468 = createNode("HAnimJoint");
HAnimJoint468.name = "vl1";
HAnimJoint468.DEF = "hanim_vl1";
HAnimJoint468.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimJoint468.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint468.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment469 = createNode("HAnimSegment");
HAnimSegment469.name = "l1";
HAnimSegment469.DEF = "hanim_l1";
//<HAnimJoint name='vl1'/> visualization sphere is placed within <HAnimSegment name='l1'/>
TouchSensor TouchSensor470 = createNode("TouchSensor");
TouchSensor470.description = "HAnimJoint vl1, HAnimSegment l1";
HAnimSegment469.children = new MFNode();

HAnimSegment469.children[0] = TouchSensor470;

Transform Transform471 = createNode("Transform");
Transform471.translation = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
Shape Shape472 = createNode("Shape");
Shape472.USE = "HAnimJointShape";
Transform471.children = new MFNode();

Transform471.children[0] = Shape472;

HAnimSegment469.children[1] = Transform471;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl1'/> to <HAnimJoint name='vt12'/>
Shape Shape473 = createNode("Shape");
LineSet LineSet474 = createNode("LineSet");
LineSet474.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate475 = createNode("Coordinate");
Coordinate475.point = new MFVec3f(new float[0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808]);
LineSet474.coord = Coordinate475;

ColorRGBA ColorRGBA476 = createNode("ColorRGBA");
ColorRGBA476.USE = "HAnimSegmentLineColorRGBA";
LineSet474.color = ColorRGBA476;

Shape473.geometry = LineSet474;

HAnimSegment469.children[2] = Shape473;

HAnimJoint468.children = new MFNode();

HAnimJoint468.children[0] = HAnimSegment469;

HAnimJoint HAnimJoint477 = createNode("HAnimJoint");
HAnimJoint477.name = "vt12";
HAnimJoint477.DEF = "hanim_vt12";
HAnimJoint477.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
HAnimJoint477.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint477.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment478 = createNode("HAnimSegment");
HAnimSegment478.name = "t12";
HAnimSegment478.DEF = "hanim_t12";
//<HAnimJoint name='vt12'/> visualization sphere is placed within <HAnimSegment name='t12'/>
TouchSensor TouchSensor479 = createNode("TouchSensor");
TouchSensor479.description = "HAnimJoint vt12, HAnimSegment t12";
HAnimSegment478.children = new MFNode();

HAnimSegment478.children[0] = TouchSensor479;

Transform Transform480 = createNode("Transform");
Transform480.translation = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
Shape Shape481 = createNode("Shape");
Shape481.USE = "HAnimJointShape";
Transform480.children = new MFNode();

Transform480.children[0] = Shape481;

HAnimSegment478.children[1] = Transform480;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt12'/> to <HAnimJoint name='vt11'/>
Shape Shape482 = createNode("Shape");
LineSet LineSet483 = createNode("LineSet");
LineSet483.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate484 = createNode("Coordinate");
Coordinate484.point = new MFVec3f(new float[0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081]);
LineSet483.coord = Coordinate484;

ColorRGBA ColorRGBA485 = createNode("ColorRGBA");
ColorRGBA485.USE = "HAnimSegmentLineColorRGBA";
LineSet483.color = ColorRGBA485;

Shape482.geometry = LineSet483;

HAnimSegment478.children[2] = Shape482;

HAnimJoint477.children = new MFNode();

HAnimJoint477.children[0] = HAnimSegment478;

HAnimJoint HAnimJoint486 = createNode("HAnimJoint");
HAnimJoint486.name = "vt11";
HAnimJoint486.DEF = "hanim_vt11";
HAnimJoint486.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
HAnimJoint486.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint486.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment487 = createNode("HAnimSegment");
HAnimSegment487.name = "t11";
HAnimSegment487.DEF = "hanim_t11";
//<HAnimJoint name='vt11'/> visualization sphere is placed within <HAnimSegment name='t11'/>
TouchSensor TouchSensor488 = createNode("TouchSensor");
TouchSensor488.description = "HAnimJoint vt11, HAnimSegment t11";
HAnimSegment487.children = new MFNode();

HAnimSegment487.children[0] = TouchSensor488;

Transform Transform489 = createNode("Transform");
Transform489.translation = new SFVec3f(new float[0.0053,1.2679,-0.081]);
Shape Shape490 = createNode("Shape");
Shape490.USE = "HAnimJointShape";
Transform489.children = new MFNode();

Transform489.children[0] = Shape490;

HAnimSegment487.children[1] = Transform489;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt11'/> to <HAnimJoint name='vt10'/>
Shape Shape491 = createNode("Shape");
LineSet LineSet492 = createNode("LineSet");
LineSet492.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate493 = createNode("Coordinate");
Coordinate493.point = new MFVec3f(new float[0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822]);
LineSet492.coord = Coordinate493;

ColorRGBA ColorRGBA494 = createNode("ColorRGBA");
ColorRGBA494.USE = "HAnimSegmentLineColorRGBA";
LineSet492.color = ColorRGBA494;

Shape491.geometry = LineSet492;

HAnimSegment487.children[2] = Shape491;

HAnimJoint486.children = new MFNode();

HAnimJoint486.children[0] = HAnimSegment487;

HAnimJoint HAnimJoint495 = createNode("HAnimJoint");
HAnimJoint495.name = "vt10";
HAnimJoint495.DEF = "hanim_vt10";
HAnimJoint495.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimJoint495.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint495.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment496 = createNode("HAnimSegment");
HAnimSegment496.name = "t10";
HAnimSegment496.DEF = "hanim_t10";
//<HAnimJoint name='vt10'/> visualization sphere is placed within <HAnimSegment name='t10'/>
TouchSensor TouchSensor497 = createNode("TouchSensor");
TouchSensor497.description = "HAnimJoint vt10, HAnimSegment t10";
HAnimSegment496.children = new MFNode();

HAnimSegment496.children[0] = TouchSensor497;

Transform Transform498 = createNode("Transform");
Transform498.translation = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
Shape Shape499 = createNode("Shape");
Shape499.USE = "HAnimJointShape";
Transform498.children = new MFNode();

Transform498.children[0] = Shape499;

HAnimSegment496.children[1] = Transform498;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt10'/> to <HAnimJoint name='vt9'/>
Shape Shape500 = createNode("Shape");
LineSet LineSet501 = createNode("LineSet");
LineSet501.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate502 = createNode("Coordinate");
Coordinate502.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838]);
LineSet501.coord = Coordinate502;

ColorRGBA ColorRGBA503 = createNode("ColorRGBA");
ColorRGBA503.USE = "HAnimSegmentLineColorRGBA";
LineSet501.color = ColorRGBA503;

Shape500.geometry = LineSet501;

HAnimSegment496.children[2] = Shape500;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt10'/> to <HAnimSite name='substernale'/>
Shape Shape504 = createNode("Shape");
LineSet LineSet505 = createNode("LineSet");
LineSet505.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate506 = createNode("Coordinate");
Coordinate506.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0085,1.2995,0.1147]);
LineSet505.coord = Coordinate506;

ColorRGBA ColorRGBA507 = createNode("ColorRGBA");
ColorRGBA507.USE = "HAnimSiteLineColorRGBA";
LineSet505.color = ColorRGBA507;

Shape504.geometry = LineSet505;

HAnimSegment496.children[3] = Shape504;

HAnimSite HAnimSite508 = createNode("HAnimSite");
HAnimSite508.name = "substernale_pt";
HAnimSite508.DEF = "hanim_substernale_pt";
HAnimSite508.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
//HAnimSite visualization shape
TouchSensor TouchSensor509 = createNode("TouchSensor");
TouchSensor509.description = "HAnimSite substernale";
HAnimSite508.children = new MFNode();

HAnimSite508.children[0] = TouchSensor509;

Shape Shape510 = createNode("Shape");
Shape510.USE = "HAnimSiteShape";
HAnimSite508.children[1] = Shape510;

HAnimSegment496.children[4] = HAnimSite508;

HAnimJoint495.children = new MFNode();

HAnimJoint495.children[0] = HAnimSegment496;

HAnimJoint HAnimJoint511 = createNode("HAnimJoint");
HAnimJoint511.name = "vt9";
HAnimJoint511.DEF = "hanim_vt9";
HAnimJoint511.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
HAnimJoint511.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint511.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment512 = createNode("HAnimSegment");
HAnimSegment512.name = "t9";
HAnimSegment512.DEF = "hanim_t9";
//<HAnimJoint name='vt9'/> visualization sphere is placed within <HAnimSegment name='t9'/>
TouchSensor TouchSensor513 = createNode("TouchSensor");
TouchSensor513.description = "HAnimJoint vt9, HAnimSegment t9";
HAnimSegment512.children = new MFNode();

HAnimSegment512.children[0] = TouchSensor513;

Transform Transform514 = createNode("Transform");
Transform514.translation = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
Shape Shape515 = createNode("Shape");
Shape515.USE = "HAnimJointShape";
Transform514.children = new MFNode();

Transform514.children[0] = Shape515;

HAnimSegment512.children[1] = Transform514;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt9'/> to <HAnimJoint name='vt8'/>
Shape Shape516 = createNode("Shape");
LineSet LineSet517 = createNode("LineSet");
LineSet517.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate518 = createNode("Coordinate");
Coordinate518.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845]);
LineSet517.coord = Coordinate518;

ColorRGBA ColorRGBA519 = createNode("ColorRGBA");
ColorRGBA519.USE = "HAnimSegmentLineColorRGBA";
LineSet517.color = ColorRGBA519;

Shape516.geometry = LineSet517;

HAnimSegment512.children[2] = Shape516;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='r_thelion'/>
Shape Shape520 = createNode("Shape");
LineSet LineSet521 = createNode("LineSet");
LineSet521.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate522 = createNode("Coordinate");
Coordinate522.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,-0.0736,1.3385,0.1217]);
LineSet521.coord = Coordinate522;

ColorRGBA ColorRGBA523 = createNode("ColorRGBA");
ColorRGBA523.USE = "HAnimSiteLineColorRGBA";
LineSet521.color = ColorRGBA523;

Shape520.geometry = LineSet521;

HAnimSegment512.children[3] = Shape520;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='l_thelion'/>
Shape Shape524 = createNode("Shape");
LineSet LineSet525 = createNode("LineSet");
LineSet525.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate526 = createNode("Coordinate");
Coordinate526.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0918,1.3382,0.1192]);
LineSet525.coord = Coordinate526;

ColorRGBA ColorRGBA527 = createNode("ColorRGBA");
ColorRGBA527.USE = "HAnimSiteLineColorRGBA";
LineSet525.color = ColorRGBA527;

Shape524.geometry = LineSet525;

HAnimSegment512.children[4] = Shape524;

HAnimSite HAnimSite528 = createNode("HAnimSite");
HAnimSite528.name = "r_thelion_pt";
HAnimSite528.DEF = "hanim_r_thelion_pt";
HAnimSite528.translation = new SFVec3f(new float[-0.0736,1.3385,0.1217]);
//HAnimSite visualization shape
TouchSensor TouchSensor529 = createNode("TouchSensor");
TouchSensor529.description = "HAnimSite r_thelion";
HAnimSite528.children = new MFNode();

HAnimSite528.children[0] = TouchSensor529;

Shape Shape530 = createNode("Shape");
Shape530.USE = "HAnimSiteShape";
HAnimSite528.children[1] = Shape530;

HAnimSegment512.children[5] = HAnimSite528;

HAnimSite HAnimSite531 = createNode("HAnimSite");
HAnimSite531.name = "l_thelion_pt";
HAnimSite531.DEF = "hanim_l_thelion_pt";
HAnimSite531.translation = new SFVec3f(new float[0.0918,1.3382,0.1192]);
//HAnimSite visualization shape
TouchSensor TouchSensor532 = createNode("TouchSensor");
TouchSensor532.description = "HAnimSite l_thelion";
HAnimSite531.children = new MFNode();

HAnimSite531.children[0] = TouchSensor532;

Shape Shape533 = createNode("Shape");
Shape533.USE = "HAnimSiteShape";
HAnimSite531.children[1] = Shape533;

HAnimSegment512.children[6] = HAnimSite531;

HAnimJoint511.children = new MFNode();

HAnimJoint511.children[0] = HAnimSegment512;

HAnimJoint HAnimJoint534 = createNode("HAnimJoint");
HAnimJoint534.name = "vt8";
HAnimJoint534.DEF = "hanim_vt8";
HAnimJoint534.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
HAnimJoint534.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint534.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment535 = createNode("HAnimSegment");
HAnimSegment535.name = "t8";
HAnimSegment535.DEF = "hanim_t8";
//<HAnimJoint name='vt8'/> visualization sphere is placed within <HAnimSegment name='t8'/>
TouchSensor TouchSensor536 = createNode("TouchSensor");
TouchSensor536.description = "HAnimJoint vt8, HAnimSegment t8";
HAnimSegment535.children = new MFNode();

HAnimSegment535.children[0] = TouchSensor536;

Transform Transform537 = createNode("Transform");
Transform537.translation = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
Shape Shape538 = createNode("Shape");
Shape538.USE = "HAnimJointShape";
Transform537.children = new MFNode();

Transform537.children[0] = Shape538;

HAnimSegment535.children[1] = Transform537;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt8'/> to <HAnimJoint name='vt7'/>
Shape Shape539 = createNode("Shape");
LineSet LineSet540 = createNode("LineSet");
LineSet540.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate541 = createNode("Coordinate");
Coordinate541.point = new MFVec3f(new float[0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833]);
LineSet540.coord = Coordinate541;

ColorRGBA ColorRGBA542 = createNode("ColorRGBA");
ColorRGBA542.USE = "HAnimSegmentLineColorRGBA";
LineSet540.color = ColorRGBA542;

Shape539.geometry = LineSet540;

HAnimSegment535.children[2] = Shape539;

HAnimJoint534.children = new MFNode();

HAnimJoint534.children[0] = HAnimSegment535;

HAnimJoint HAnimJoint543 = createNode("HAnimJoint");
HAnimJoint543.name = "vt7";
HAnimJoint543.DEF = "hanim_vt7";
HAnimJoint543.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
HAnimJoint543.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint543.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment544 = createNode("HAnimSegment");
HAnimSegment544.name = "t7";
HAnimSegment544.DEF = "hanim_t7";
//<HAnimJoint name='vt7'/> visualization sphere is placed within <HAnimSegment name='t7'/>
TouchSensor TouchSensor545 = createNode("TouchSensor");
TouchSensor545.description = "HAnimJoint vt7, HAnimSegment t7";
HAnimSegment544.children = new MFNode();

HAnimSegment544.children[0] = TouchSensor545;

Transform Transform546 = createNode("Transform");
Transform546.translation = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
Shape Shape547 = createNode("Shape");
Shape547.USE = "HAnimJointShape";
Transform546.children = new MFNode();

Transform546.children[0] = Shape547;

HAnimSegment544.children[1] = Transform546;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt7'/> to <HAnimJoint name='vt6'/>
Shape Shape548 = createNode("Shape");
LineSet LineSet549 = createNode("LineSet");
LineSet549.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate550 = createNode("Coordinate");
Coordinate550.point = new MFVec3f(new float[0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08]);
LineSet549.coord = Coordinate550;

ColorRGBA ColorRGBA551 = createNode("ColorRGBA");
ColorRGBA551.USE = "HAnimSegmentLineColorRGBA";
LineSet549.color = ColorRGBA551;

Shape548.geometry = LineSet549;

HAnimSegment544.children[2] = Shape548;

HAnimJoint543.children = new MFNode();

HAnimJoint543.children[0] = HAnimSegment544;

HAnimJoint HAnimJoint552 = createNode("HAnimJoint");
HAnimJoint552.name = "vt6";
HAnimJoint552.DEF = "hanim_vt6";
HAnimJoint552.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimJoint552.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint552.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment553 = createNode("HAnimSegment");
HAnimSegment553.name = "t6";
HAnimSegment553.DEF = "hanim_t6";
//<HAnimJoint name='vt6'/> visualization sphere is placed within <HAnimSegment name='t6'/>
TouchSensor TouchSensor554 = createNode("TouchSensor");
TouchSensor554.description = "HAnimJoint vt6, HAnimSegment t6";
HAnimSegment553.children = new MFNode();

HAnimSegment553.children[0] = TouchSensor554;

Transform Transform555 = createNode("Transform");
Transform555.translation = new SFVec3f(new float[0.0059,1.3866,-0.08]);
Shape Shape556 = createNode("Shape");
Shape556.USE = "HAnimJointShape";
Transform555.children = new MFNode();

Transform555.children[0] = Shape556;

HAnimSegment553.children[1] = Transform555;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt6'/> to <HAnimJoint name='vt5'/>
Shape Shape557 = createNode("Shape");
LineSet LineSet558 = createNode("LineSet");
LineSet558.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate559 = createNode("Coordinate");
Coordinate559.point = new MFVec3f(new float[0.0059,1.3866,-0.08,0.006,1.4102,-0.0745]);
LineSet558.coord = Coordinate559;

ColorRGBA ColorRGBA560 = createNode("ColorRGBA");
ColorRGBA560.USE = "HAnimSegmentLineColorRGBA";
LineSet558.color = ColorRGBA560;

Shape557.geometry = LineSet558;

HAnimSegment553.children[2] = Shape557;

HAnimJoint552.children = new MFNode();

HAnimJoint552.children[0] = HAnimSegment553;

HAnimJoint HAnimJoint561 = createNode("HAnimJoint");
HAnimJoint561.name = "vt5";
HAnimJoint561.DEF = "hanim_vt5";
HAnimJoint561.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
HAnimJoint561.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint561.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment562 = createNode("HAnimSegment");
HAnimSegment562.name = "t5";
HAnimSegment562.DEF = "hanim_t5";
//<HAnimJoint name='vt5'/> visualization sphere is placed within <HAnimSegment name='t5'/>
TouchSensor TouchSensor563 = createNode("TouchSensor");
TouchSensor563.description = "HAnimJoint vt5, HAnimSegment t5";
HAnimSegment562.children = new MFNode();

HAnimSegment562.children[0] = TouchSensor563;

Transform Transform564 = createNode("Transform");
Transform564.translation = new SFVec3f(new float[0.006,1.4102,-0.0745]);
Shape Shape565 = createNode("Shape");
Shape565.USE = "HAnimJointShape";
Transform564.children = new MFNode();

Transform564.children[0] = Shape565;

HAnimSegment562.children[1] = Transform564;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt5'/> to <HAnimJoint name='vt4'/>
Shape Shape566 = createNode("Shape");
LineSet LineSet567 = createNode("LineSet");
LineSet567.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate568 = createNode("Coordinate");
Coordinate568.point = new MFVec3f(new float[0.006,1.4102,-0.0745,0.0061,1.432,-0.0675]);
LineSet567.coord = Coordinate568;

ColorRGBA ColorRGBA569 = createNode("ColorRGBA");
ColorRGBA569.USE = "HAnimSegmentLineColorRGBA";
LineSet567.color = ColorRGBA569;

Shape566.geometry = LineSet567;

HAnimSegment562.children[2] = Shape566;

HAnimJoint561.children = new MFNode();

HAnimJoint561.children[0] = HAnimSegment562;

HAnimJoint HAnimJoint570 = createNode("HAnimJoint");
HAnimJoint570.name = "vt4";
HAnimJoint570.DEF = "hanim_vt4";
HAnimJoint570.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
HAnimJoint570.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint570.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment571 = createNode("HAnimSegment");
HAnimSegment571.name = "t4";
HAnimSegment571.DEF = "hanim_t4";
//<HAnimJoint name='vt4'/> visualization sphere is placed within <HAnimSegment name='t4'/>
TouchSensor TouchSensor572 = createNode("TouchSensor");
TouchSensor572.description = "HAnimJoint vt4, HAnimSegment t4";
HAnimSegment571.children = new MFNode();

HAnimSegment571.children[0] = TouchSensor572;

Transform Transform573 = createNode("Transform");
Transform573.translation = new SFVec3f(new float[0.0061,1.432,-0.0675]);
Shape Shape574 = createNode("Shape");
Shape574.USE = "HAnimJointShape";
Transform573.children = new MFNode();

Transform573.children[0] = Shape574;

HAnimSegment571.children[1] = Transform573;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt4'/> to <HAnimJoint name='vt3'/>
Shape Shape575 = createNode("Shape");
LineSet LineSet576 = createNode("LineSet");
LineSet576.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate577 = createNode("Coordinate");
Coordinate577.point = new MFVec3f(new float[0.0061,1.432,-0.0675,0.0062,1.4583,-0.057]);
LineSet576.coord = Coordinate577;

ColorRGBA ColorRGBA578 = createNode("ColorRGBA");
ColorRGBA578.USE = "HAnimSegmentLineColorRGBA";
LineSet576.color = ColorRGBA578;

Shape575.geometry = LineSet576;

HAnimSegment571.children[2] = Shape575;

HAnimJoint570.children = new MFNode();

HAnimJoint570.children[0] = HAnimSegment571;

HAnimJoint HAnimJoint579 = createNode("HAnimJoint");
HAnimJoint579.name = "vt3";
HAnimJoint579.DEF = "hanim_vt3";
HAnimJoint579.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
HAnimJoint579.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint579.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment580 = createNode("HAnimSegment");
HAnimSegment580.name = "t3";
HAnimSegment580.DEF = "hanim_t3";
//<HAnimJoint name='vt3'/> visualization sphere is placed within <HAnimSegment name='t3'/>
TouchSensor TouchSensor581 = createNode("TouchSensor");
TouchSensor581.description = "HAnimJoint vt3, HAnimSegment t3";
HAnimSegment580.children = new MFNode();

HAnimSegment580.children[0] = TouchSensor581;

Transform Transform582 = createNode("Transform");
Transform582.translation = new SFVec3f(new float[0.0062,1.4583,-0.057]);
Shape Shape583 = createNode("Shape");
Shape583.USE = "HAnimJointShape";
Transform582.children = new MFNode();

Transform582.children[0] = Shape583;

HAnimSegment580.children[1] = Transform582;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt3'/> to <HAnimJoint name='vt2'/>
Shape Shape584 = createNode("Shape");
LineSet LineSet585 = createNode("LineSet");
LineSet585.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate586 = createNode("Coordinate");
Coordinate586.point = new MFVec3f(new float[0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484]);
LineSet585.coord = Coordinate586;

ColorRGBA ColorRGBA587 = createNode("ColorRGBA");
ColorRGBA587.USE = "HAnimSegmentLineColorRGBA";
LineSet585.color = ColorRGBA587;

Shape584.geometry = LineSet585;

HAnimSegment580.children[2] = Shape584;

HAnimJoint579.children = new MFNode();

HAnimJoint579.children[0] = HAnimSegment580;

HAnimJoint HAnimJoint588 = createNode("HAnimJoint");
HAnimJoint588.name = "vt2";
HAnimJoint588.DEF = "hanim_vt2";
HAnimJoint588.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
HAnimJoint588.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint588.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment589 = createNode("HAnimSegment");
HAnimSegment589.name = "t2";
HAnimSegment589.DEF = "hanim_t2";
//<HAnimJoint name='vt2'/> visualization sphere is placed within <HAnimSegment name='t2'/>
TouchSensor TouchSensor590 = createNode("TouchSensor");
TouchSensor590.description = "HAnimJoint vt2, HAnimSegment t2";
HAnimSegment589.children = new MFNode();

HAnimSegment589.children[0] = TouchSensor590;

Transform Transform591 = createNode("Transform");
Transform591.translation = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
Shape Shape592 = createNode("Shape");
Shape592.USE = "HAnimJointShape";
Transform591.children = new MFNode();

Transform591.children[0] = Shape592;

HAnimSegment589.children[1] = Transform591;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt2'/> to <HAnimJoint name='vt1'/>
Shape Shape593 = createNode("Shape");
LineSet LineSet594 = createNode("LineSet");
LineSet594.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate595 = createNode("Coordinate");
Coordinate595.point = new MFVec3f(new float[0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387]);
LineSet594.coord = Coordinate595;

ColorRGBA ColorRGBA596 = createNode("ColorRGBA");
ColorRGBA596.USE = "HAnimSegmentLineColorRGBA";
LineSet594.color = ColorRGBA596;

Shape593.geometry = LineSet594;

HAnimSegment589.children[2] = Shape593;

HAnimJoint588.children = new MFNode();

HAnimJoint588.children[0] = HAnimSegment589;

HAnimJoint HAnimJoint597 = createNode("HAnimJoint");
HAnimJoint597.name = "vt1";
HAnimJoint597.DEF = "hanim_vt1";
HAnimJoint597.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimJoint597.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint597.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment598 = createNode("HAnimSegment");
HAnimSegment598.name = "t1";
HAnimSegment598.DEF = "hanim_t1";
//<HAnimJoint name='vt1'/> visualization sphere is placed within <HAnimSegment name='t1'/>
TouchSensor TouchSensor599 = createNode("TouchSensor");
TouchSensor599.description = "HAnimJoint vt1, HAnimSegment t1";
HAnimSegment598.children = new MFNode();

HAnimSegment598.children[0] = TouchSensor599;

Transform Transform600 = createNode("Transform");
Transform600.translation = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
Shape Shape601 = createNode("Shape");
Shape601.USE = "HAnimJointShape";
Transform600.children = new MFNode();

Transform600.children[0] = Shape601;

HAnimSegment598.children[1] = Transform600;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='vc7'/>
Shape Shape602 = createNode("Shape");
LineSet LineSet603 = createNode("LineSet");
LineSet603.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate604 = createNode("Coordinate");
Coordinate604.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301]);
LineSet603.coord = Coordinate604;

ColorRGBA ColorRGBA605 = createNode("ColorRGBA");
ColorRGBA605.USE = "HAnimSegmentLineColorRGBA";
LineSet603.color = ColorRGBA605;

Shape602.geometry = LineSet603;

HAnimSegment598.children[2] = Shape602;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='l_sternoclavicular'/>
Shape Shape606 = createNode("Shape");
LineSet LineSet607 = createNode("LineSet");
LineSet607.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate608 = createNode("Coordinate");
Coordinate608.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]);
LineSet607.coord = Coordinate608;

ColorRGBA ColorRGBA609 = createNode("ColorRGBA");
ColorRGBA609.USE = "HAnimSegmentLineColorRGBA";
LineSet607.color = ColorRGBA609;

Shape606.geometry = LineSet607;

HAnimSegment598.children[3] = Shape606;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='r_sternoclavicular'/>
Shape Shape610 = createNode("Shape");
LineSet LineSet611 = createNode("LineSet");
LineSet611.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate612 = createNode("Coordinate");
Coordinate612.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,-0.082,1.4488,-0.0353]);
LineSet611.coord = Coordinate612;

ColorRGBA ColorRGBA613 = createNode("ColorRGBA");
ColorRGBA613.USE = "HAnimSegmentLineColorRGBA";
LineSet611.color = ColorRGBA613;

Shape610.geometry = LineSet611;

HAnimSegment598.children[4] = Shape610;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='suprasternale'/>
Shape Shape614 = createNode("Shape");
LineSet LineSet615 = createNode("LineSet");
LineSet615.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate616 = createNode("Coordinate");
Coordinate616.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0084,1.4714,0.0551]);
LineSet615.coord = Coordinate616;

ColorRGBA ColorRGBA617 = createNode("ColorRGBA");
ColorRGBA617.USE = "HAnimSiteLineColorRGBA";
LineSet615.color = ColorRGBA617;

Shape614.geometry = LineSet615;

HAnimSegment598.children[5] = Shape614;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='cervicale'/>
Shape Shape618 = createNode("Shape");
LineSet LineSet619 = createNode("LineSet");
LineSet619.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate620 = createNode("Coordinate");
Coordinate620.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0064,1.52,-0.0815]);
LineSet619.coord = Coordinate620;

ColorRGBA ColorRGBA621 = createNode("ColorRGBA");
ColorRGBA621.USE = "HAnimSiteLineColorRGBA";
LineSet619.color = ColorRGBA621;

Shape618.geometry = LineSet619;

HAnimSegment598.children[6] = Shape618;

HAnimSite HAnimSite622 = createNode("HAnimSite");
HAnimSite622.name = "suprasternale_pt";
HAnimSite622.DEF = "hanim_suprasternale_pt";
HAnimSite622.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
//HAnimSite visualization shape
TouchSensor TouchSensor623 = createNode("TouchSensor");
TouchSensor623.description = "HAnimSite suprasternale";
HAnimSite622.children = new MFNode();

HAnimSite622.children[0] = TouchSensor623;

Shape Shape624 = createNode("Shape");
Shape624.USE = "HAnimSiteShape";
HAnimSite622.children[1] = Shape624;

HAnimSegment598.children[7] = HAnimSite622;

HAnimSite HAnimSite625 = createNode("HAnimSite");
HAnimSite625.name = "cervicale_pt";
HAnimSite625.DEF = "hanim_cervicale_pt";
HAnimSite625.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
//HAnimSite visualization shape
TouchSensor TouchSensor626 = createNode("TouchSensor");
TouchSensor626.description = "HAnimSite cervicale";
HAnimSite625.children = new MFNode();

HAnimSite625.children[0] = TouchSensor626;

Shape Shape627 = createNode("Shape");
Shape627.USE = "HAnimSiteShape";
HAnimSite625.children[1] = Shape627;

HAnimSegment598.children[8] = HAnimSite625;

HAnimJoint597.children = new MFNode();

HAnimJoint597.children[0] = HAnimSegment598;

HAnimJoint HAnimJoint628 = createNode("HAnimJoint");
HAnimJoint628.name = "vc7";
HAnimJoint628.DEF = "hanim_vc7";
HAnimJoint628.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
HAnimJoint628.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint628.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment629 = createNode("HAnimSegment");
HAnimSegment629.name = "c7";
HAnimSegment629.DEF = "hanim_c7";
//<HAnimJoint name='vc7'/> visualization sphere is placed within <HAnimSegment name='c7'/>
TouchSensor TouchSensor630 = createNode("TouchSensor");
TouchSensor630.description = "HAnimJoint vc7, HAnimSegment c7";
HAnimSegment629.children = new MFNode();

HAnimSegment629.children[0] = TouchSensor630;

Transform Transform631 = createNode("Transform");
Transform631.translation = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
Shape Shape632 = createNode("Shape");
Shape632.USE = "HAnimJointShape";
Transform631.children = new MFNode();

Transform631.children[0] = Shape632;

HAnimSegment629.children[1] = Transform631;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc7'/> to <HAnimJoint name='vc6'/>
Shape Shape633 = createNode("Shape");
LineSet LineSet634 = createNode("LineSet");
LineSet634.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate635 = createNode("Coordinate");
Coordinate635.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143]);
LineSet634.coord = Coordinate635;

ColorRGBA ColorRGBA636 = createNode("ColorRGBA");
ColorRGBA636.USE = "HAnimSegmentLineColorRGBA";
LineSet634.color = ColorRGBA636;

Shape633.geometry = LineSet634;

HAnimSegment629.children[2] = Shape633;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='r_neck_base'/>
Shape Shape637 = createNode("Shape");
LineSet LineSet638 = createNode("LineSet");
LineSet638.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate639 = createNode("Coordinate");
Coordinate639.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,-0.0419,1.5149,-0.022]);
LineSet638.coord = Coordinate639;

ColorRGBA ColorRGBA640 = createNode("ColorRGBA");
ColorRGBA640.USE = "HAnimSiteLineColorRGBA";
LineSet638.color = ColorRGBA640;

Shape637.geometry = LineSet638;

HAnimSegment629.children[3] = Shape637;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='l_neck_base'/>
Shape Shape641 = createNode("Shape");
LineSet LineSet642 = createNode("LineSet");
LineSet642.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate643 = createNode("Coordinate");
Coordinate643.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0646,1.5141,-0.038]);
LineSet642.coord = Coordinate643;

ColorRGBA ColorRGBA644 = createNode("ColorRGBA");
ColorRGBA644.USE = "HAnimSiteLineColorRGBA";
LineSet642.color = ColorRGBA644;

Shape641.geometry = LineSet642;

HAnimSegment629.children[4] = Shape641;

HAnimSite HAnimSite645 = createNode("HAnimSite");
HAnimSite645.name = "r_neck_base_pt";
HAnimSite645.DEF = "hanim_r_neck_base_pt";
HAnimSite645.translation = new SFVec3f(new float[-0.0419,1.5149,-0.022]);
//HAnimSite visualization shape
TouchSensor TouchSensor646 = createNode("TouchSensor");
TouchSensor646.description = "HAnimSite r_neck_base";
HAnimSite645.children = new MFNode();

HAnimSite645.children[0] = TouchSensor646;

Shape Shape647 = createNode("Shape");
Shape647.USE = "HAnimSiteShape";
HAnimSite645.children[1] = Shape647;

HAnimSegment629.children[5] = HAnimSite645;

HAnimSite HAnimSite648 = createNode("HAnimSite");
HAnimSite648.name = "l_neck_base_pt";
HAnimSite648.DEF = "hanim_l_neck_base_pt";
HAnimSite648.translation = new SFVec3f(new float[0.0646,1.5141,-0.038]);
//HAnimSite visualization shape
TouchSensor TouchSensor649 = createNode("TouchSensor");
TouchSensor649.description = "HAnimSite l_neck_base";
HAnimSite648.children = new MFNode();

HAnimSite648.children[0] = TouchSensor649;

Shape Shape650 = createNode("Shape");
Shape650.USE = "HAnimSiteShape";
HAnimSite648.children[1] = Shape650;

HAnimSegment629.children[6] = HAnimSite648;

HAnimJoint628.children = new MFNode();

HAnimJoint628.children[0] = HAnimSegment629;

HAnimJoint HAnimJoint651 = createNode("HAnimJoint");
HAnimJoint651.name = "vc6";
HAnimJoint651.DEF = "hanim_vc6";
HAnimJoint651.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
HAnimJoint651.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint651.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment652 = createNode("HAnimSegment");
HAnimSegment652.name = "c6";
HAnimSegment652.DEF = "hanim_c6";
//<HAnimJoint name='vc6'/> visualization sphere is placed within <HAnimSegment name='c6'/>
TouchSensor TouchSensor653 = createNode("TouchSensor");
TouchSensor653.description = "HAnimJoint vc6, HAnimSegment c6";
HAnimSegment652.children = new MFNode();

HAnimSegment652.children[0] = TouchSensor653;

Transform Transform654 = createNode("Transform");
Transform654.translation = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
Shape Shape655 = createNode("Shape");
Shape655.USE = "HAnimJointShape";
Transform654.children = new MFNode();

Transform654.children[0] = Shape655;

HAnimSegment652.children[1] = Transform654;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc6'/> to <HAnimJoint name='vc5'/>
Shape Shape656 = createNode("Shape");
LineSet LineSet657 = createNode("LineSet");
LineSet657.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate658 = createNode("Coordinate");
Coordinate658.point = new MFVec3f(new float[0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082]);
LineSet657.coord = Coordinate658;

ColorRGBA ColorRGBA659 = createNode("ColorRGBA");
ColorRGBA659.USE = "HAnimSegmentLineColorRGBA";
LineSet657.color = ColorRGBA659;

Shape656.geometry = LineSet657;

HAnimSegment652.children[2] = Shape656;

HAnimJoint651.children = new MFNode();

HAnimJoint651.children[0] = HAnimSegment652;

HAnimJoint HAnimJoint660 = createNode("HAnimJoint");
HAnimJoint660.name = "vc5";
HAnimJoint660.DEF = "hanim_vc5";
HAnimJoint660.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
HAnimJoint660.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint660.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment661 = createNode("HAnimSegment");
HAnimSegment661.name = "c5";
HAnimSegment661.DEF = "hanim_c5";
//<HAnimJoint name='vc5'/> visualization sphere is placed within <HAnimSegment name='c5'/>
TouchSensor TouchSensor662 = createNode("TouchSensor");
TouchSensor662.description = "HAnimJoint vc5, HAnimSegment c5";
HAnimSegment661.children = new MFNode();

HAnimSegment661.children[0] = TouchSensor662;

Transform Transform663 = createNode("Transform");
Transform663.translation = new SFVec3f(new float[0.0066,1.552,-0.0082]);
Shape Shape664 = createNode("Shape");
Shape664.USE = "HAnimJointShape";
Transform663.children = new MFNode();

Transform663.children[0] = Shape664;

HAnimSegment661.children[1] = Transform663;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc5'/> to <HAnimJoint name='vc4'/>
Shape Shape665 = createNode("Shape");
LineSet LineSet666 = createNode("LineSet");
LineSet666.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate667 = createNode("Coordinate");
Coordinate667.point = new MFVec3f(new float[0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084]);
LineSet666.coord = Coordinate667;

ColorRGBA ColorRGBA668 = createNode("ColorRGBA");
ColorRGBA668.USE = "HAnimSegmentLineColorRGBA";
LineSet666.color = ColorRGBA668;

Shape665.geometry = LineSet666;

HAnimSegment661.children[2] = Shape665;

HAnimJoint660.children = new MFNode();

HAnimJoint660.children[0] = HAnimSegment661;

HAnimJoint HAnimJoint669 = createNode("HAnimJoint");
HAnimJoint669.name = "vc4";
HAnimJoint669.DEF = "hanim_vc4";
HAnimJoint669.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimJoint669.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint669.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment670 = createNode("HAnimSegment");
HAnimSegment670.name = "c4";
HAnimSegment670.DEF = "hanim_c4";
//<HAnimJoint name='vc4'/> visualization sphere is placed within <HAnimSegment name='c4'/>
TouchSensor TouchSensor671 = createNode("TouchSensor");
TouchSensor671.description = "HAnimJoint vc4, HAnimSegment c4";
HAnimSegment670.children = new MFNode();

HAnimSegment670.children[0] = TouchSensor671;

Transform Transform672 = createNode("Transform");
Transform672.translation = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
Shape Shape673 = createNode("Shape");
Shape673.USE = "HAnimJointShape";
Transform672.children = new MFNode();

Transform672.children[0] = Shape673;

HAnimSegment670.children[1] = Transform672;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc4'/> to <HAnimJoint name='vc3'/>
Shape Shape674 = createNode("Shape");
LineSet LineSet675 = createNode("LineSet");
LineSet675.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate676 = createNode("Coordinate");
Coordinate676.point = new MFVec3f(new float[0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103]);
LineSet675.coord = Coordinate676;

ColorRGBA ColorRGBA677 = createNode("ColorRGBA");
ColorRGBA677.USE = "HAnimSegmentLineColorRGBA";
LineSet675.color = ColorRGBA677;

Shape674.geometry = LineSet675;

HAnimSegment670.children[2] = Shape674;

HAnimJoint669.children = new MFNode();

HAnimJoint669.children[0] = HAnimSegment670;

HAnimJoint HAnimJoint678 = createNode("HAnimJoint");
HAnimJoint678.name = "vc3";
HAnimJoint678.DEF = "hanim_vc3";
HAnimJoint678.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
HAnimJoint678.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint678.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment679 = createNode("HAnimSegment");
HAnimSegment679.name = "c3";
HAnimSegment679.DEF = "hanim_c3";
//<HAnimJoint name='vc3'/> visualization sphere is placed within <HAnimSegment name='c3'/>
TouchSensor TouchSensor680 = createNode("TouchSensor");
TouchSensor680.description = "HAnimJoint vc3, HAnimSegment c3";
HAnimSegment679.children = new MFNode();

HAnimSegment679.children[0] = TouchSensor680;

Transform Transform681 = createNode("Transform");
Transform681.translation = new SFVec3f(new float[0.0066,1.58,-0.0103]);
Shape Shape682 = createNode("Shape");
Shape682.USE = "HAnimJointShape";
Transform681.children = new MFNode();

Transform681.children[0] = Shape682;

HAnimSegment679.children[1] = Transform681;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc3'/> to <HAnimJoint name='vc2'/>
Shape Shape683 = createNode("Shape");
LineSet LineSet684 = createNode("LineSet");
LineSet684.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate685 = createNode("Coordinate");
Coordinate685.point = new MFVec3f(new float[0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103]);
LineSet684.coord = Coordinate685;

ColorRGBA ColorRGBA686 = createNode("ColorRGBA");
ColorRGBA686.USE = "HAnimSegmentLineColorRGBA";
LineSet684.color = ColorRGBA686;

Shape683.geometry = LineSet684;

HAnimSegment679.children[2] = Shape683;

HAnimJoint678.children = new MFNode();

HAnimJoint678.children[0] = HAnimSegment679;

HAnimJoint HAnimJoint687 = createNode("HAnimJoint");
HAnimJoint687.name = "vc2";
HAnimJoint687.DEF = "hanim_vc2";
HAnimJoint687.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimJoint687.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint687.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment688 = createNode("HAnimSegment");
HAnimSegment688.name = "c2";
HAnimSegment688.DEF = "hanim_c2";
//<HAnimJoint name='vc2'/> visualization sphere is placed within <HAnimSegment name='c2'/>
TouchSensor TouchSensor689 = createNode("TouchSensor");
TouchSensor689.description = "HAnimJoint vc2, HAnimSegment c2";
HAnimSegment688.children = new MFNode();

HAnimSegment688.children[0] = TouchSensor689;

Transform Transform690 = createNode("Transform");
Transform690.translation = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
Shape Shape691 = createNode("Shape");
Shape691.USE = "HAnimJointShape";
Transform690.children = new MFNode();

Transform690.children[0] = Shape691;

HAnimSegment688.children[1] = Transform690;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc2'/> to <HAnimJoint name='vc1'/>
Shape Shape692 = createNode("Shape");
LineSet LineSet693 = createNode("LineSet");
LineSet693.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate694 = createNode("Coordinate");
Coordinate694.point = new MFVec3f(new float[0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034]);
LineSet693.coord = Coordinate694;

ColorRGBA ColorRGBA695 = createNode("ColorRGBA");
ColorRGBA695.USE = "HAnimSegmentLineColorRGBA";
LineSet693.color = ColorRGBA695;

Shape692.geometry = LineSet693;

HAnimSegment688.children[2] = Shape692;

HAnimJoint687.children = new MFNode();

HAnimJoint687.children[0] = HAnimSegment688;

HAnimJoint HAnimJoint696 = createNode("HAnimJoint");
HAnimJoint696.name = "vc1";
HAnimJoint696.DEF = "hanim_vc1";
HAnimJoint696.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
HAnimJoint696.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint696.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment697 = createNode("HAnimSegment");
HAnimSegment697.name = "c1";
HAnimSegment697.DEF = "hanim_c1";
//<HAnimJoint name='vc1'/> visualization sphere is placed within <HAnimSegment name='c1'/>
TouchSensor TouchSensor698 = createNode("TouchSensor");
TouchSensor698.description = "HAnimJoint vc1, HAnimSegment c1";
HAnimSegment697.children = new MFNode();

HAnimSegment697.children[0] = TouchSensor698;

Transform Transform699 = createNode("Transform");
Transform699.translation = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
Shape Shape700 = createNode("Shape");
Shape700.USE = "HAnimJointShape";
Transform699.children = new MFNode();

Transform699.children[0] = Shape700;

HAnimSegment697.children[1] = Transform699;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc1'/> to <HAnimJoint name='skullbase'/>
Shape Shape701 = createNode("Shape");
LineSet LineSet702 = createNode("LineSet");
LineSet702.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate703 = createNode("Coordinate");
Coordinate703.point = new MFVec3f(new float[0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236]);
LineSet702.coord = Coordinate703;

ColorRGBA ColorRGBA704 = createNode("ColorRGBA");
ColorRGBA704.USE = "HAnimSegmentLineColorRGBA";
LineSet702.color = ColorRGBA704;

Shape701.geometry = LineSet702;

HAnimSegment697.children[2] = Shape701;

HAnimJoint696.children = new MFNode();

HAnimJoint696.children[0] = HAnimSegment697;

HAnimJoint HAnimJoint705 = createNode("HAnimJoint");
HAnimJoint705.name = "skullbase";
HAnimJoint705.DEF = "hanim_skullbase";
HAnimJoint705.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimJoint705.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint705.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment706 = createNode("HAnimSegment");
HAnimSegment706.name = "skull";
HAnimSegment706.DEF = "hanim_skull";
//<HAnimJoint name='skullbase'/> visualization sphere is placed within <HAnimSegment name='skull'/>
TouchSensor TouchSensor707 = createNode("TouchSensor");
TouchSensor707.description = "HAnimJoint skullbase, HAnimSegment skull";
HAnimSegment706.children = new MFNode();

HAnimSegment706.children[0] = TouchSensor707;

Transform Transform708 = createNode("Transform");
Transform708.translation = new SFVec3f(new float[0.0044,1.6209,0.0236]);
Shape Shape709 = createNode("Shape");
Shape709.USE = "HAnimJointShape";
Transform708.children = new MFNode();

Transform708.children[0] = Shape709;

HAnimSegment706.children[1] = Transform708;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyeball_joint'/>
Shape Shape710 = createNode("Shape");
LineSet LineSet711 = createNode("LineSet");
LineSet711.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate712 = createNode("Coordinate");
Coordinate712.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0336,1.6332,0.0502]);
LineSet711.coord = Coordinate712;

ColorRGBA ColorRGBA713 = createNode("ColorRGBA");
ColorRGBA713.USE = "HAnimSegmentLineColorRGBA";
LineSet711.color = ColorRGBA713;

Shape710.geometry = LineSet711;

HAnimSegment706.children[2] = Shape710;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyelid_joint'/>
Shape Shape714 = createNode("Shape");
LineSet LineSet715 = createNode("LineSet");
LineSet715.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate716 = createNode("Coordinate");
Coordinate716.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0336,1.6332,0.0502]);
LineSet715.coord = Coordinate716;

ColorRGBA ColorRGBA717 = createNode("ColorRGBA");
ColorRGBA717.USE = "HAnimSegmentLineColorRGBA";
LineSet715.color = ColorRGBA717;

Shape714.geometry = LineSet715;

HAnimSegment706.children[3] = Shape714;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyebrow_joint'/>
Shape Shape718 = createNode("Shape");
LineSet LineSet719 = createNode("LineSet");
LineSet719.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate720 = createNode("Coordinate");
Coordinate720.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0336,1.635,0.0506]);
LineSet719.coord = Coordinate720;

ColorRGBA ColorRGBA721 = createNode("ColorRGBA");
ColorRGBA721.USE = "HAnimSegmentLineColorRGBA";
LineSet719.color = ColorRGBA721;

Shape718.geometry = LineSet719;

HAnimSegment706.children[4] = Shape718;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyeball_joint'/>
Shape Shape722 = createNode("Shape");
LineSet LineSet723 = createNode("LineSet");
LineSet723.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate724 = createNode("Coordinate");
Coordinate724.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502]);
LineSet723.coord = Coordinate724;

ColorRGBA ColorRGBA725 = createNode("ColorRGBA");
ColorRGBA725.USE = "HAnimSegmentLineColorRGBA";
LineSet723.color = ColorRGBA725;

Shape722.geometry = LineSet723;

HAnimSegment706.children[5] = Shape722;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyelid_joint'/>
Shape Shape726 = createNode("Shape");
LineSet LineSet727 = createNode("LineSet");
LineSet727.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate728 = createNode("Coordinate");
Coordinate728.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502]);
LineSet727.coord = Coordinate728;

ColorRGBA ColorRGBA729 = createNode("ColorRGBA");
ColorRGBA729.USE = "HAnimSegmentLineColorRGBA";
LineSet727.color = ColorRGBA729;

Shape726.geometry = LineSet727;

HAnimSegment706.children[6] = Shape726;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyebrow_joint'/>
Shape Shape730 = createNode("Shape");
LineSet LineSet731 = createNode("LineSet");
LineSet731.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate732 = createNode("Coordinate");
Coordinate732.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0336,1.635,0.0506]);
LineSet731.coord = Coordinate732;

ColorRGBA ColorRGBA733 = createNode("ColorRGBA");
ColorRGBA733.USE = "HAnimSegmentLineColorRGBA";
LineSet731.color = ColorRGBA733;

Shape730.geometry = LineSet731;

HAnimSegment706.children[7] = Shape730;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='temporomandibular'/>
Shape Shape734 = createNode("Shape");
LineSet LineSet735 = createNode("LineSet");
LineSet735.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate736 = createNode("Coordinate");
Coordinate736.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1.63,0.015]);
LineSet735.coord = Coordinate736;

ColorRGBA ColorRGBA737 = createNode("ColorRGBA");
ColorRGBA737.USE = "HAnimSegmentLineColorRGBA";
LineSet735.color = ColorRGBA737;

Shape734.geometry = LineSet735;

HAnimSegment706.children[8] = Shape734;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='skull_tip'/>
Shape Shape738 = createNode("Shape");
LineSet LineSet739 = createNode("LineSet");
LineSet739.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate740 = createNode("Coordinate");
Coordinate740.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.005,1.7504,0.0055]);
LineSet739.coord = Coordinate740;

ColorRGBA ColorRGBA741 = createNode("ColorRGBA");
ColorRGBA741.USE = "HAnimSiteLineColorRGBA";
LineSet739.color = ColorRGBA741;

Shape738.geometry = LineSet739;

HAnimSegment706.children[9] = Shape738;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='sellion'/>
Shape Shape742 = createNode("Shape");
LineSet LineSet743 = createNode("LineSet");
LineSet743.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate744 = createNode("Coordinate");
Coordinate744.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0058,1.6316,0.0852]);
LineSet743.coord = Coordinate744;

ColorRGBA ColorRGBA745 = createNode("ColorRGBA");
ColorRGBA745.USE = "HAnimSiteLineColorRGBA";
LineSet743.color = ColorRGBA745;

Shape742.geometry = LineSet743;

HAnimSegment706.children[10] = Shape742;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_infraorbitale'/>
Shape Shape746 = createNode("Shape");
LineSet LineSet747 = createNode("LineSet");
LineSet747.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate748 = createNode("Coordinate");
Coordinate748.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0237,1.6171,0.0752]);
LineSet747.coord = Coordinate748;

ColorRGBA ColorRGBA749 = createNode("ColorRGBA");
ColorRGBA749.USE = "HAnimSiteLineColorRGBA";
LineSet747.color = ColorRGBA749;

Shape746.geometry = LineSet747;

HAnimSegment706.children[11] = Shape746;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_infraorbitale'/>
Shape Shape750 = createNode("Shape");
LineSet LineSet751 = createNode("LineSet");
LineSet751.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate752 = createNode("Coordinate");
Coordinate752.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0341,1.6171,0.0752]);
LineSet751.coord = Coordinate752;

ColorRGBA ColorRGBA753 = createNode("ColorRGBA");
ColorRGBA753.USE = "HAnimSiteLineColorRGBA";
LineSet751.color = ColorRGBA753;

Shape750.geometry = LineSet751;

HAnimSegment706.children[12] = Shape750;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='supramenton'/>
Shape Shape754 = createNode("Shape");
LineSet LineSet755 = createNode("LineSet");
LineSet755.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate756 = createNode("Coordinate");
Coordinate756.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0061,1.541,0.0805]);
LineSet755.coord = Coordinate756;

ColorRGBA ColorRGBA757 = createNode("ColorRGBA");
ColorRGBA757.USE = "HAnimSiteLineColorRGBA";
LineSet755.color = ColorRGBA757;

Shape754.geometry = LineSet755;

HAnimSegment706.children[13] = Shape754;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_tragion'/>
Shape Shape758 = createNode("Shape");
LineSet LineSet759 = createNode("LineSet");
LineSet759.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate760 = createNode("Coordinate");
Coordinate760.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0646,1.6347,0.0302]);
LineSet759.coord = Coordinate760;

ColorRGBA ColorRGBA761 = createNode("ColorRGBA");
ColorRGBA761.USE = "HAnimSiteLineColorRGBA";
LineSet759.color = ColorRGBA761;

Shape758.geometry = LineSet759;

HAnimSegment706.children[14] = Shape758;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_gonion'/>
Shape Shape762 = createNode("Shape");
LineSet LineSet763 = createNode("LineSet");
LineSet763.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate764 = createNode("Coordinate");
Coordinate764.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.052,1.5529,0.0347]);
LineSet763.coord = Coordinate764;

ColorRGBA ColorRGBA765 = createNode("ColorRGBA");
ColorRGBA765.USE = "HAnimSiteLineColorRGBA";
LineSet763.color = ColorRGBA765;

Shape762.geometry = LineSet763;

HAnimSegment706.children[15] = Shape762;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_tragion'/>
Shape Shape766 = createNode("Shape");
LineSet LineSet767 = createNode("LineSet");
LineSet767.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate768 = createNode("Coordinate");
Coordinate768.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0739,1.6348,0.0282]);
LineSet767.coord = Coordinate768;

ColorRGBA ColorRGBA769 = createNode("ColorRGBA");
ColorRGBA769.USE = "HAnimSiteLineColorRGBA";
LineSet767.color = ColorRGBA769;

Shape766.geometry = LineSet767;

HAnimSegment706.children[16] = Shape766;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_gonion'/>
Shape Shape770 = createNode("Shape");
LineSet LineSet771 = createNode("LineSet");
LineSet771.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate772 = createNode("Coordinate");
Coordinate772.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0631,1.553,0.033]);
LineSet771.coord = Coordinate772;

ColorRGBA ColorRGBA773 = createNode("ColorRGBA");
ColorRGBA773.USE = "HAnimSiteLineColorRGBA";
LineSet771.color = ColorRGBA773;

Shape770.geometry = LineSet771;

HAnimSegment706.children[17] = Shape770;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='nuchale'/>
Shape Shape774 = createNode("Shape");
LineSet LineSet775 = createNode("LineSet");
LineSet775.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate776 = createNode("Coordinate");
Coordinate776.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0039,1.5972,-0.0796]);
LineSet775.coord = Coordinate776;

ColorRGBA ColorRGBA777 = createNode("ColorRGBA");
ColorRGBA777.USE = "HAnimSiteLineColorRGBA";
LineSet775.color = ColorRGBA777;

Shape774.geometry = LineSet775;

HAnimSegment706.children[18] = Shape774;

HAnimSite HAnimSite778 = createNode("HAnimSite");
HAnimSite778.name = "skull_tip";
HAnimSite778.DEF = "hanim_skull_tip";
HAnimSite778.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
//TODO move skull_tip x to zero, check others for symmetry
//HAnimSite visualization shape
TouchSensor TouchSensor779 = createNode("TouchSensor");
TouchSensor779.description = "HAnimSite skull_tip";
HAnimSite778.children = new MFNode();

HAnimSite778.children[0] = TouchSensor779;

Shape Shape780 = createNode("Shape");
Shape780.USE = "HAnimSiteShape";
HAnimSite778.children[1] = Shape780;

HAnimSegment706.children[19] = HAnimSite778;

HAnimSite HAnimSite781 = createNode("HAnimSite");
HAnimSite781.name = "sellion_pt";
HAnimSite781.DEF = "hanim_sellion_pt";
HAnimSite781.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
//HAnimSite visualization shape
TouchSensor TouchSensor782 = createNode("TouchSensor");
TouchSensor782.description = "HAnimSite sellion";
HAnimSite781.children = new MFNode();

HAnimSite781.children[0] = TouchSensor782;

Shape Shape783 = createNode("Shape");
Shape783.USE = "HAnimSiteShape";
HAnimSite781.children[1] = Shape783;

HAnimSegment706.children[20] = HAnimSite781;

HAnimSite HAnimSite784 = createNode("HAnimSite");
HAnimSite784.name = "r_infraorbitale_pt";
HAnimSite784.DEF = "hanim_r_infraorbitale_pt";
HAnimSite784.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
//HAnimSite visualization shape
TouchSensor TouchSensor785 = createNode("TouchSensor");
TouchSensor785.description = "HAnimSite r_infraorbitale";
HAnimSite784.children = new MFNode();

HAnimSite784.children[0] = TouchSensor785;

Shape Shape786 = createNode("Shape");
Shape786.USE = "HAnimSiteShape";
HAnimSite784.children[1] = Shape786;

HAnimSegment706.children[21] = HAnimSite784;

HAnimSite HAnimSite787 = createNode("HAnimSite");
HAnimSite787.name = "l_infraorbitale_pt";
HAnimSite787.DEF = "hanim_l_infraorbitale_pt";
HAnimSite787.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
//HAnimSite visualization shape
TouchSensor TouchSensor788 = createNode("TouchSensor");
TouchSensor788.description = "HAnimSite l_infraorbitale";
HAnimSite787.children = new MFNode();

HAnimSite787.children[0] = TouchSensor788;

Shape Shape789 = createNode("Shape");
Shape789.USE = "HAnimSiteShape";
HAnimSite787.children[1] = Shape789;

HAnimSegment706.children[22] = HAnimSite787;

HAnimSite HAnimSite790 = createNode("HAnimSite");
HAnimSite790.name = "supramenton_pt";
HAnimSite790.DEF = "hanim_supramenton_pt";
HAnimSite790.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
//HAnimSite visualization shape
TouchSensor TouchSensor791 = createNode("TouchSensor");
TouchSensor791.description = "HAnimSite supramenton";
HAnimSite790.children = new MFNode();

HAnimSite790.children[0] = TouchSensor791;

Shape Shape792 = createNode("Shape");
Shape792.USE = "HAnimSiteShape";
HAnimSite790.children[1] = Shape792;

HAnimSegment706.children[23] = HAnimSite790;

HAnimSite HAnimSite793 = createNode("HAnimSite");
HAnimSite793.name = "r_tragion_pt";
HAnimSite793.DEF = "hanim_r_tragion_pt";
HAnimSite793.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
//HAnimSite visualization shape
TouchSensor TouchSensor794 = createNode("TouchSensor");
TouchSensor794.description = "HAnimSite r_tragion";
HAnimSite793.children = new MFNode();

HAnimSite793.children[0] = TouchSensor794;

Shape Shape795 = createNode("Shape");
Shape795.USE = "HAnimSiteShape";
HAnimSite793.children[1] = Shape795;

HAnimSegment706.children[24] = HAnimSite793;

HAnimSite HAnimSite796 = createNode("HAnimSite");
HAnimSite796.name = "r_gonion_pt";
HAnimSite796.DEF = "hanim_r_gonion_pt";
HAnimSite796.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
//HAnimSite visualization shape
TouchSensor TouchSensor797 = createNode("TouchSensor");
TouchSensor797.description = "HAnimSite r_gonion";
HAnimSite796.children = new MFNode();

HAnimSite796.children[0] = TouchSensor797;

Shape Shape798 = createNode("Shape");
Shape798.USE = "HAnimSiteShape";
HAnimSite796.children[1] = Shape798;

HAnimSegment706.children[25] = HAnimSite796;

HAnimSite HAnimSite799 = createNode("HAnimSite");
HAnimSite799.name = "l_tragion_pt";
HAnimSite799.DEF = "hanim_l_tragion_pt";
HAnimSite799.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
//HAnimSite visualization shape
TouchSensor TouchSensor800 = createNode("TouchSensor");
TouchSensor800.description = "HAnimSite l_tragion";
HAnimSite799.children = new MFNode();

HAnimSite799.children[0] = TouchSensor800;

Shape Shape801 = createNode("Shape");
Shape801.USE = "HAnimSiteShape";
HAnimSite799.children[1] = Shape801;

HAnimSegment706.children[26] = HAnimSite799;

HAnimSite HAnimSite802 = createNode("HAnimSite");
HAnimSite802.name = "l_gonion_pt";
HAnimSite802.DEF = "hanim_l_gonion_pt";
HAnimSite802.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
//HAnimSite visualization shape
TouchSensor TouchSensor803 = createNode("TouchSensor");
TouchSensor803.description = "HAnimSite l_gonion";
HAnimSite802.children = new MFNode();

HAnimSite802.children[0] = TouchSensor803;

Shape Shape804 = createNode("Shape");
Shape804.USE = "HAnimSiteShape";
HAnimSite802.children[1] = Shape804;

HAnimSegment706.children[27] = HAnimSite802;

HAnimSite HAnimSite805 = createNode("HAnimSite");
HAnimSite805.name = "nuchale_pt";
HAnimSite805.DEF = "hanim_nuchale_pt";
HAnimSite805.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
//HAnimSite visualization shape
TouchSensor TouchSensor806 = createNode("TouchSensor");
TouchSensor806.description = "HAnimSite nuchale";
HAnimSite805.children = new MFNode();

HAnimSite805.children[0] = TouchSensor806;

Shape Shape807 = createNode("Shape");
Shape807.USE = "HAnimSiteShape";
HAnimSite805.children[1] = Shape807;

HAnimSegment706.children[28] = HAnimSite805;

HAnimJoint705.children = new MFNode();

HAnimJoint705.children[0] = HAnimSegment706;

HAnimJoint HAnimJoint808 = createNode("HAnimJoint");
HAnimJoint808.name = "l_eyeball_joint";
HAnimJoint808.DEF = "hanim_l_eyeball_joint";
HAnimJoint808.center = new SFVec3f(new float[0.0336,1.6332,0.0502]);
HAnimJoint808.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint808.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment809 = createNode("HAnimSegment");
HAnimSegment809.name = "l_eyeball";
HAnimSegment809.DEF = "hanim_l_eyeball";
//<HAnimJoint name='l_eyeball_joint'/> visualization sphere is placed within <HAnimSegment name='l_eyeball'/>
TouchSensor TouchSensor810 = createNode("TouchSensor");
TouchSensor810.description = "HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball";
HAnimSegment809.children = new MFNode();

HAnimSegment809.children[0] = TouchSensor810;

Transform Transform811 = createNode("Transform");
Transform811.translation = new SFVec3f(new float[0.0336,1.6332,0.0502]);
Shape Shape812 = createNode("Shape");
Shape812.USE = "HAnimJointShape";
Transform811.children = new MFNode();

Transform811.children[0] = Shape812;

HAnimSegment809.children[1] = Transform811;

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_eyeball_joint'/> to <HAnimSite name='l_eyeball_site_view'/>
Shape Shape813 = createNode("Shape");
LineSet LineSet814 = createNode("LineSet");
LineSet814.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate815 = createNode("Coordinate");
Coordinate815.point = new MFVec3f(new float[0.0336,1.6332,0.0502,0.034,1.64,0.05]);
LineSet814.coord = Coordinate815;

ColorRGBA ColorRGBA816 = createNode("ColorRGBA");
ColorRGBA816.DEF = "HAnimSiteViewpointLineColorRGBA";
ColorRGBA816.color = new MFColorRGBA(new float[0,0,1,1,0,0,1,0.1]);
LineSet814.color = ColorRGBA816;

Shape813.geometry = LineSet814;

HAnimSegment809.children[2] = Shape813;

HAnimSite HAnimSite817 = createNode("HAnimSite");
HAnimSite817.name = "l_eyeball_site_view";
HAnimSite817.DEF = "hanim_l_eyeball_site_view";
HAnimSite817.translation = new SFVec3f(new float[0.034,1.64,0.05]);
//HAnimSite visualization shape
TouchSensor TouchSensor818 = createNode("TouchSensor");
TouchSensor818.description = "HAnimSite l_eyeball_site_view";
HAnimSite817.children = new MFNode();

HAnimSite817.children[0] = TouchSensor818;

Shape Shape819 = createNode("Shape");
Shape819.USE = "HAnimSiteShape";
HAnimSite817.children[1] = Shape819;

Viewpoint Viewpoint820 = createNode("Viewpoint");
Viewpoint820.DEF = "hanim_l_eyeball_site_viewpoint";
Viewpoint820.description = "l_eyeball_site_viewpoint looking forward";
Viewpoint820.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint820.position = new SFVec3f(new float[0,0,0]);
HAnimSite817.children[2] = Viewpoint820;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor821 = createNode("Anchor");
Anchor821.description = "HAnimSite hanim_l_eyeball_site_view Viewpoint";
Anchor821.url = new MFString(new java.lang.String["#hanim_l_eyeball_site_viewpoint"]);
LOD LOD822 = createNode("LOD");
LOD822.forceTransitions = True;
LOD822.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo823 = createNode("WorldInfo");
WorldInfo823.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD822.children = new MFNode();

LOD822.children[0] = WorldInfo823;

Shape Shape824 = createNode("Shape");
Shape824.DEF = "HAnimSiteViewpointShape";
IndexedFaceSet IndexedFaceSet825 = createNode("IndexedFaceSet");
IndexedFaceSet825.DEF = "SiteViewpointDiamondIFS";
IndexedFaceSet825.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet825.creaseAngle = 0.5;
Coordinate Coordinate826 = createNode("Coordinate");
Coordinate826.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet825.coord = Coordinate826;

Shape824.geometry = IndexedFaceSet825;

Appearance Appearance827 = createNode("Appearance");
Material Material828 = createNode("Material");
Material828.diffuseColor = new SFColor(new float[0,0,1]);
Material828.transparency = 0.6;
Appearance827.material = Material828;

Shape824.appearance = Appearance827;

LOD822.children[1] = Shape824;

Anchor821.children = new MFNode();

Anchor821.children[0] = LOD822;

HAnimSite817.children[3] = Anchor821;

HAnimSegment809.children[3] = HAnimSite817;

HAnimJoint808.children = new MFNode();

HAnimJoint808.children[0] = HAnimSegment809;

HAnimJoint705.children[1] = HAnimJoint808;

HAnimJoint HAnimJoint829 = createNode("HAnimJoint");
HAnimJoint829.name = "l_eyelid_joint";
HAnimJoint829.DEF = "hanim_l_eyelid_joint";
HAnimJoint829.center = new SFVec3f(new float[0.0336,1.6332,0.0502]);
HAnimJoint829.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint829.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment830 = createNode("HAnimSegment");
HAnimSegment830.name = "l_eyelid";
HAnimSegment830.DEF = "hanim_l_eyelid";
//<HAnimJoint name='l_eyelid_joint'/> visualization sphere is placed within <HAnimSegment name='l_eyelid'/>
TouchSensor TouchSensor831 = createNode("TouchSensor");
TouchSensor831.description = "HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid";
HAnimSegment830.children = new MFNode();

HAnimSegment830.children[0] = TouchSensor831;

Transform Transform832 = createNode("Transform");
Transform832.translation = new SFVec3f(new float[0.0336,1.6332,0.0502]);
Shape Shape833 = createNode("Shape");
Shape833.USE = "HAnimJointShape";
Transform832.children = new MFNode();

Transform832.children[0] = Shape833;

HAnimSegment830.children[1] = Transform832;

HAnimJoint829.children = new MFNode();

HAnimJoint829.children[0] = HAnimSegment830;

HAnimJoint705.children[2] = HAnimJoint829;

HAnimJoint HAnimJoint834 = createNode("HAnimJoint");
HAnimJoint834.name = "l_eyebrow_joint";
HAnimJoint834.DEF = "hanim_l_eyebrow_joint";
HAnimJoint834.center = new SFVec3f(new float[0.0336,1.635,0.0506]);
HAnimJoint834.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint834.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment835 = createNode("HAnimSegment");
HAnimSegment835.name = "l_eyebrow";
HAnimSegment835.DEF = "hanim_l_eyebrow";
//<HAnimJoint name='l_eyebrow_joint'/> visualization sphere is placed within <HAnimSegment name='l_eyebrow'/>
TouchSensor TouchSensor836 = createNode("TouchSensor");
TouchSensor836.description = "HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow";
HAnimSegment835.children = new MFNode();

HAnimSegment835.children[0] = TouchSensor836;

Transform Transform837 = createNode("Transform");
Transform837.translation = new SFVec3f(new float[0.0336,1.635,0.0506]);
Shape Shape838 = createNode("Shape");
Shape838.USE = "HAnimJointShape";
Transform837.children = new MFNode();

Transform837.children[0] = Shape838;

HAnimSegment835.children[1] = Transform837;

HAnimJoint834.children = new MFNode();

HAnimJoint834.children[0] = HAnimSegment835;

HAnimJoint705.children[3] = HAnimJoint834;

HAnimJoint HAnimJoint839 = createNode("HAnimJoint");
HAnimJoint839.name = "r_eyeball_joint";
HAnimJoint839.DEF = "hanim_r_eyeball_joint";
HAnimJoint839.center = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
HAnimJoint839.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint839.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment840 = createNode("HAnimSegment");
HAnimSegment840.name = "r_eyeball";
HAnimSegment840.DEF = "hanim_r_eyeball";
//<HAnimJoint name='r_eyeball_joint'/> visualization sphere is placed within <HAnimSegment name='r_eyeball'/>
TouchSensor TouchSensor841 = createNode("TouchSensor");
TouchSensor841.description = "HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball";
HAnimSegment840.children = new MFNode();

HAnimSegment840.children[0] = TouchSensor841;

Transform Transform842 = createNode("Transform");
Transform842.translation = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
Shape Shape843 = createNode("Shape");
Shape843.USE = "HAnimJointShape";
Transform842.children = new MFNode();

Transform842.children[0] = Shape843;

HAnimSegment840.children[1] = Transform842;

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_eyeball_joint'/> to <HAnimSite name='r_eyeball_site_view'/>
Shape Shape844 = createNode("Shape");
LineSet LineSet845 = createNode("LineSet");
LineSet845.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate846 = createNode("Coordinate");
Coordinate846.point = new MFVec3f(new float[-0.0336,1.6332,0.0502,-0.034,1.64,0.05]);
LineSet845.coord = Coordinate846;

ColorRGBA ColorRGBA847 = createNode("ColorRGBA");
ColorRGBA847.USE = "HAnimSiteViewpointLineColorRGBA";
LineSet845.color = ColorRGBA847;

Shape844.geometry = LineSet845;

HAnimSegment840.children[2] = Shape844;

HAnimSite HAnimSite848 = createNode("HAnimSite");
HAnimSite848.name = "r_eyeball_site_view";
HAnimSite848.DEF = "hanim_r_eyeball_site_view";
HAnimSite848.translation = new SFVec3f(new float[-0.034,1.64,0.05]);
//HAnimSite visualization shape
TouchSensor TouchSensor849 = createNode("TouchSensor");
TouchSensor849.description = "HAnimSite r_eyeball_site_view";
HAnimSite848.children = new MFNode();

HAnimSite848.children[0] = TouchSensor849;

Shape Shape850 = createNode("Shape");
Shape850.USE = "HAnimSiteShape";
HAnimSite848.children[1] = Shape850;

Viewpoint Viewpoint851 = createNode("Viewpoint");
Viewpoint851.DEF = "hanim_r_eyeball_site_viewpoint";
Viewpoint851.description = "r_eyeball_site_viewpoint looking forward";
Viewpoint851.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint851.position = new SFVec3f(new float[0,0,0]);
HAnimSite848.children[2] = Viewpoint851;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor852 = createNode("Anchor");
Anchor852.description = "HAnimSite hanim_r_eyeball_site_view Viewpoint";
Anchor852.url = new MFString(new java.lang.String["#hanim_r_eyeball_site_viewpoint"]);
LOD LOD853 = createNode("LOD");
LOD853.forceTransitions = True;
LOD853.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo854 = createNode("WorldInfo");
WorldInfo854.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD853.children = new MFNode();

LOD853.children[0] = WorldInfo854;

Shape Shape855 = createNode("Shape");
Shape855.USE = "HAnimSiteViewpointShape";
LOD853.children[1] = Shape855;

Anchor852.children = new MFNode();

Anchor852.children[0] = LOD853;

HAnimSite848.children[3] = Anchor852;

HAnimSegment840.children[3] = HAnimSite848;

HAnimJoint839.children = new MFNode();

HAnimJoint839.children[0] = HAnimSegment840;

HAnimJoint705.children[4] = HAnimJoint839;

HAnimJoint HAnimJoint856 = createNode("HAnimJoint");
HAnimJoint856.name = "r_eyelid_joint";
HAnimJoint856.DEF = "hanim_r_eyelid_joint";
HAnimJoint856.center = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
HAnimJoint856.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint856.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment857 = createNode("HAnimSegment");
HAnimSegment857.name = "r_eyelid";
HAnimSegment857.DEF = "hanim_r_eyelid";
//<HAnimJoint name='r_eyelid_joint'/> visualization sphere is placed within <HAnimSegment name='r_eyelid'/>
TouchSensor TouchSensor858 = createNode("TouchSensor");
TouchSensor858.description = "HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid";
HAnimSegment857.children = new MFNode();

HAnimSegment857.children[0] = TouchSensor858;

Transform Transform859 = createNode("Transform");
Transform859.translation = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
Shape Shape860 = createNode("Shape");
Shape860.USE = "HAnimJointShape";
Transform859.children = new MFNode();

Transform859.children[0] = Shape860;

HAnimSegment857.children[1] = Transform859;

HAnimJoint856.children = new MFNode();

HAnimJoint856.children[0] = HAnimSegment857;

HAnimJoint705.children[5] = HAnimJoint856;

HAnimJoint HAnimJoint861 = createNode("HAnimJoint");
HAnimJoint861.name = "r_eyebrow_joint";
HAnimJoint861.DEF = "hanim_r_eyebrow_joint";
HAnimJoint861.center = new SFVec3f(new float[-0.0336,1.635,0.0506]);
HAnimJoint861.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint861.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment862 = createNode("HAnimSegment");
HAnimSegment862.name = "r_eyebrow";
HAnimSegment862.DEF = "hanim_r_eyebrow";
//<HAnimJoint name='r_eyebrow_joint'/> visualization sphere is placed within <HAnimSegment name='r_eyebrow'/>
TouchSensor TouchSensor863 = createNode("TouchSensor");
TouchSensor863.description = "HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow";
HAnimSegment862.children = new MFNode();

HAnimSegment862.children[0] = TouchSensor863;

Transform Transform864 = createNode("Transform");
Transform864.translation = new SFVec3f(new float[-0.0336,1.635,0.0506]);
Shape Shape865 = createNode("Shape");
Shape865.USE = "HAnimJointShape";
Transform864.children = new MFNode();

Transform864.children[0] = Shape865;

HAnimSegment862.children[1] = Transform864;

HAnimJoint861.children = new MFNode();

HAnimJoint861.children[0] = HAnimSegment862;

HAnimJoint705.children[6] = HAnimJoint861;

HAnimJoint HAnimJoint866 = createNode("HAnimJoint");
HAnimJoint866.name = "temporomandibular";
HAnimJoint866.DEF = "hanim_temporomandibular";
HAnimJoint866.center = new SFVec3f(new float[0,1.63,0.015]);
HAnimJoint866.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint866.llimit = new MFFloat(new float[0,0,0]);
//Single joint, single segment for jaw, two sites for left/right TMJs https://en.wikipedia.org/wiki/Temporomandibular_joint
HAnimSegment HAnimSegment867 = createNode("HAnimSegment");
HAnimSegment867.name = "jaw";
HAnimSegment867.DEF = "hanim_jaw";
//<HAnimJoint name='temporomandibular'/> visualization sphere is placed within <HAnimSegment name='jaw'/>
TouchSensor TouchSensor868 = createNode("TouchSensor");
TouchSensor868.description = "HAnimJoint temporomandibular, HAnimSegment jaw";
HAnimSegment867.children = new MFNode();

HAnimSegment867.children[0] = TouchSensor868;

Transform Transform869 = createNode("Transform");
Transform869.translation = new SFVec3f(new float[0,1.63,0.015]);
Shape Shape870 = createNode("Shape");
Shape870.USE = "HAnimJointShape";
Transform869.children = new MFNode();

Transform869.children[0] = Shape870;

HAnimSegment867.children[1] = Transform869;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_l_site'/>
Shape Shape871 = createNode("Shape");
LineSet LineSet872 = createNode("LineSet");
LineSet872.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate873 = createNode("Coordinate");
Coordinate873.point = new MFVec3f(new float[0,1.63,0.015,0.045,1.63,0]);
LineSet872.coord = Coordinate873;

ColorRGBA ColorRGBA874 = createNode("ColorRGBA");
ColorRGBA874.USE = "HAnimSiteLineColorRGBA";
LineSet872.color = ColorRGBA874;

Shape871.geometry = LineSet872;

HAnimSegment867.children[2] = Shape871;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_r_site'/>
Shape Shape875 = createNode("Shape");
LineSet LineSet876 = createNode("LineSet");
LineSet876.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate877 = createNode("Coordinate");
Coordinate877.point = new MFVec3f(new float[0,1.63,0.015,-0.045,1.63,0]);
LineSet876.coord = Coordinate877;

ColorRGBA ColorRGBA878 = createNode("ColorRGBA");
ColorRGBA878.USE = "HAnimSiteLineColorRGBA";
LineSet876.color = ColorRGBA878;

Shape875.geometry = LineSet876;

HAnimSegment867.children[3] = Shape875;

HAnimSite HAnimSite879 = createNode("HAnimSite");
HAnimSite879.name = "temporomandibular_l_site_pt";
HAnimSite879.DEF = "hanim_temporomandibular_l_site_pt";
HAnimSite879.translation = new SFVec3f(new float[0.045,1.63,0]);
//HAnimSite visualization shape
TouchSensor TouchSensor880 = createNode("TouchSensor");
TouchSensor880.description = "HAnimSite temporomandibular_l_site";
HAnimSite879.children = new MFNode();

HAnimSite879.children[0] = TouchSensor880;

Shape Shape881 = createNode("Shape");
Shape881.USE = "HAnimSiteShape";
HAnimSite879.children[1] = Shape881;

HAnimSegment867.children[4] = HAnimSite879;

HAnimSite HAnimSite882 = createNode("HAnimSite");
HAnimSite882.name = "temporomandibular_r_site_pt";
HAnimSite882.DEF = "hanim_temporomandibular_r_site_pt";
HAnimSite882.translation = new SFVec3f(new float[-0.045,1.63,0]);
//HAnimSite visualization shape
TouchSensor TouchSensor883 = createNode("TouchSensor");
TouchSensor883.description = "HAnimSite temporomandibular_r_site";
HAnimSite882.children = new MFNode();

HAnimSite882.children[0] = TouchSensor883;

Shape Shape884 = createNode("Shape");
Shape884.USE = "HAnimSiteShape";
HAnimSite882.children[1] = Shape884;

HAnimSegment867.children[5] = HAnimSite882;

HAnimJoint866.children = new MFNode();

HAnimJoint866.children[0] = HAnimSegment867;

HAnimJoint705.children[7] = HAnimJoint866;

HAnimJoint696.children[1] = HAnimJoint705;

HAnimJoint687.children[1] = HAnimJoint696;

HAnimJoint678.children[1] = HAnimJoint687;

HAnimJoint669.children[1] = HAnimJoint678;

HAnimJoint660.children[1] = HAnimJoint669;

HAnimJoint651.children[1] = HAnimJoint660;

HAnimJoint628.children[1] = HAnimJoint651;

HAnimJoint597.children[1] = HAnimJoint628;

HAnimJoint HAnimJoint885 = createNode("HAnimJoint");
HAnimJoint885.name = "l_sternoclavicular";
HAnimJoint885.DEF = "hanim_l_sternoclavicular";
HAnimJoint885.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimJoint885.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint885.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment886 = createNode("HAnimSegment");
HAnimSegment886.name = "l_clavicle";
HAnimSegment886.DEF = "hanim_l_clavicle";
//<HAnimJoint name='l_sternoclavicular'/> visualization sphere is placed within <HAnimSegment name='l_clavicle'/>
TouchSensor TouchSensor887 = createNode("TouchSensor");
TouchSensor887.description = "HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle";
HAnimSegment886.children = new MFNode();

HAnimSegment886.children[0] = TouchSensor887;

Transform Transform888 = createNode("Transform");
Transform888.translation = new SFVec3f(new float[0.082,1.4488,-0.0353]);
Shape Shape889 = createNode("Shape");
Shape889.USE = "HAnimJointShape";
Transform888.children = new MFNode();

Transform888.children[0] = Shape889;

HAnimSegment886.children[1] = Transform888;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_sternoclavicular'/> to <HAnimJoint name='l_acromioclavicular'/>
Shape Shape890 = createNode("Shape");
LineSet LineSet891 = createNode("LineSet");
LineSet891.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate892 = createNode("Coordinate");
Coordinate892.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
LineSet891.coord = Coordinate892;

ColorRGBA ColorRGBA893 = createNode("ColorRGBA");
ColorRGBA893.USE = "HAnimSegmentLineColorRGBA";
LineSet891.color = ColorRGBA893;

Shape890.geometry = LineSet891;

HAnimSegment886.children[2] = Shape890;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_clavicale'/>
Shape Shape894 = createNode("Shape");
LineSet LineSet895 = createNode("LineSet");
LineSet895.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate896 = createNode("Coordinate");
Coordinate896.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0271,1.4943,0.0394]);
LineSet895.coord = Coordinate896;

ColorRGBA ColorRGBA897 = createNode("ColorRGBA");
ColorRGBA897.USE = "HAnimSiteLineColorRGBA";
LineSet895.color = ColorRGBA897;

Shape894.geometry = LineSet895;

HAnimSegment886.children[3] = Shape894;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_acromion'/>
Shape Shape898 = createNode("Shape");
LineSet LineSet899 = createNode("LineSet");
LineSet899.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate900 = createNode("Coordinate");
Coordinate900.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.2032,1.476,-0.049]);
LineSet899.coord = Coordinate900;

ColorRGBA ColorRGBA901 = createNode("ColorRGBA");
ColorRGBA901.USE = "HAnimSiteLineColorRGBA";
LineSet899.color = ColorRGBA901;

Shape898.geometry = LineSet899;

HAnimSegment886.children[4] = Shape898;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_ant'/>
Shape Shape902 = createNode("Shape");
LineSet LineSet903 = createNode("LineSet");
LineSet903.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate904 = createNode("Coordinate");
Coordinate904.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.1777,1.4065,-0.0075]);
LineSet903.coord = Coordinate904;

ColorRGBA ColorRGBA905 = createNode("ColorRGBA");
ColorRGBA905.USE = "HAnimSiteLineColorRGBA";
LineSet903.color = ColorRGBA905;

Shape902.geometry = LineSet903;

HAnimSegment886.children[5] = Shape902;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_post'/>
Shape Shape906 = createNode("Shape");
LineSet LineSet907 = createNode("LineSet");
LineSet907.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate908 = createNode("Coordinate");
Coordinate908.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.1706,1.4072,-0.0875]);
LineSet907.coord = Coordinate908;

ColorRGBA ColorRGBA909 = createNode("ColorRGBA");
ColorRGBA909.USE = "HAnimSiteLineColorRGBA";
LineSet907.color = ColorRGBA909;

Shape906.geometry = LineSet907;

HAnimSegment886.children[6] = Shape906;

HAnimSite HAnimSite910 = createNode("HAnimSite");
HAnimSite910.name = "l_clavicale_pt";
HAnimSite910.DEF = "hanim_l_clavicale_pt";
HAnimSite910.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
//HAnimSite visualization shape
TouchSensor TouchSensor911 = createNode("TouchSensor");
TouchSensor911.description = "HAnimSite l_clavicale";
HAnimSite910.children = new MFNode();

HAnimSite910.children[0] = TouchSensor911;

Shape Shape912 = createNode("Shape");
Shape912.USE = "HAnimSiteShape";
HAnimSite910.children[1] = Shape912;

HAnimSegment886.children[7] = HAnimSite910;

HAnimSite HAnimSite913 = createNode("HAnimSite");
HAnimSite913.name = "l_acromion_pt";
HAnimSite913.DEF = "hanim_l_acromion_pt";
HAnimSite913.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
//HAnimSite visualization shape
TouchSensor TouchSensor914 = createNode("TouchSensor");
TouchSensor914.description = "HAnimSite l_acromion";
HAnimSite913.children = new MFNode();

HAnimSite913.children[0] = TouchSensor914;

Shape Shape915 = createNode("Shape");
Shape915.USE = "HAnimSiteShape";
HAnimSite913.children[1] = Shape915;

HAnimSegment886.children[8] = HAnimSite913;

HAnimSite HAnimSite916 = createNode("HAnimSite");
HAnimSite916.name = "l_axilla_ant_pt";
HAnimSite916.DEF = "hanim_l_axilla_ant_pt";
HAnimSite916.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
//HAnimSite visualization shape
TouchSensor TouchSensor917 = createNode("TouchSensor");
TouchSensor917.description = "HAnimSite l_axilla_ant";
HAnimSite916.children = new MFNode();

HAnimSite916.children[0] = TouchSensor917;

Shape Shape918 = createNode("Shape");
Shape918.USE = "HAnimSiteShape";
HAnimSite916.children[1] = Shape918;

HAnimSegment886.children[9] = HAnimSite916;

HAnimSite HAnimSite919 = createNode("HAnimSite");
HAnimSite919.name = "l_axilla_post_pt";
HAnimSite919.DEF = "hanim_l_axilla_post_pt";
HAnimSite919.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
//HAnimSite visualization shape
TouchSensor TouchSensor920 = createNode("TouchSensor");
TouchSensor920.description = "HAnimSite l_axilla_post";
HAnimSite919.children = new MFNode();

HAnimSite919.children[0] = TouchSensor920;

Shape Shape921 = createNode("Shape");
Shape921.USE = "HAnimSiteShape";
HAnimSite919.children[1] = Shape921;

HAnimSegment886.children[10] = HAnimSite919;

HAnimJoint885.children = new MFNode();

HAnimJoint885.children[0] = HAnimSegment886;

HAnimJoint HAnimJoint922 = createNode("HAnimJoint");
HAnimJoint922.name = "l_acromioclavicular";
HAnimJoint922.DEF = "hanim_l_acromioclavicular";
HAnimJoint922.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimJoint922.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint922.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment923 = createNode("HAnimSegment");
HAnimSegment923.name = "l_scapula";
HAnimSegment923.DEF = "hanim_l_scapula";
//<HAnimJoint name='l_acromioclavicular'/> visualization sphere is placed within <HAnimSegment name='l_scapula'/>
TouchSensor TouchSensor924 = createNode("TouchSensor");
TouchSensor924.description = "HAnimJoint l_acromioclavicular, HAnimSegment l_scapula";
HAnimSegment923.children = new MFNode();

HAnimSegment923.children[0] = TouchSensor924;

Transform Transform925 = createNode("Transform");
Transform925.translation = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
Shape Shape926 = createNode("Shape");
Shape926.USE = "HAnimJointShape";
Transform925.children = new MFNode();

Transform925.children[0] = Shape926;

HAnimSegment923.children[1] = Transform925;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_acromioclavicular'/> to <HAnimJoint name='l_shoulder'/>
Shape Shape927 = createNode("Shape");
LineSet LineSet928 = createNode("LineSet");
LineSet928.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate929 = createNode("Coordinate");
Coordinate929.point = new MFVec3f(new float[0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
LineSet928.coord = Coordinate929;

ColorRGBA ColorRGBA930 = createNode("ColorRGBA");
ColorRGBA930.USE = "HAnimSegmentLineColorRGBA";
LineSet928.color = ColorRGBA930;

Shape927.geometry = LineSet928;

HAnimSegment923.children[2] = Shape927;

HAnimJoint922.children = new MFNode();

HAnimJoint922.children[0] = HAnimSegment923;

HAnimJoint HAnimJoint931 = createNode("HAnimJoint");
HAnimJoint931.name = "l_shoulder";
HAnimJoint931.DEF = "hanim_l_shoulder";
HAnimJoint931.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimJoint931.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint931.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment932 = createNode("HAnimSegment");
HAnimSegment932.name = "l_upperarm";
HAnimSegment932.DEF = "hanim_l_upperarm";
//<HAnimJoint name='l_shoulder'/> visualization sphere is placed within <HAnimSegment name='l_upperarm'/>
TouchSensor TouchSensor933 = createNode("TouchSensor");
TouchSensor933.description = "HAnimJoint l_shoulder, HAnimSegment l_upperarm";
HAnimSegment932.children = new MFNode();

HAnimSegment932.children[0] = TouchSensor933;

Transform Transform934 = createNode("Transform");
Transform934.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
Shape Shape935 = createNode("Shape");
Shape935.USE = "HAnimJointShape";
Transform934.children = new MFNode();

Transform934.children[0] = Shape935;

HAnimSegment932.children[1] = Transform934;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_shoulder'/> to <HAnimJoint name='l_elbow'/>
Shape Shape936 = createNode("Shape");
LineSet LineSet937 = createNode("LineSet");
LineSet937.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate938 = createNode("Coordinate");
Coordinate938.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
LineSet937.coord = Coordinate938;

ColorRGBA ColorRGBA939 = createNode("ColorRGBA");
ColorRGBA939.USE = "HAnimSegmentLineColorRGBA";
LineSet937.color = ColorRGBA939;

Shape936.geometry = LineSet937;

HAnimSegment932.children[2] = Shape936;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_shoulder'/> to <HAnimSite name='l_humeral_lateral_epicn'/>
Shape Shape940 = createNode("Shape");
LineSet LineSet941 = createNode("LineSet");
LineSet941.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate942 = createNode("Coordinate");
Coordinate942.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.228,1.1482,-0.11]);
LineSet941.coord = Coordinate942;

ColorRGBA ColorRGBA943 = createNode("ColorRGBA");
ColorRGBA943.USE = "HAnimSiteLineColorRGBA";
LineSet941.color = ColorRGBA943;

Shape940.geometry = LineSet941;

HAnimSegment932.children[3] = Shape940;

HAnimSite HAnimSite944 = createNode("HAnimSite");
HAnimSite944.name = "l_humeral_lateral_epicn_pt";
HAnimSite944.DEF = "hanim_l_humeral_lateral_epicn_pt";
HAnimSite944.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
//HAnimSite visualization shape
TouchSensor TouchSensor945 = createNode("TouchSensor");
TouchSensor945.description = "HAnimSite l_humeral_lateral_epicn";
HAnimSite944.children = new MFNode();

HAnimSite944.children[0] = TouchSensor945;

Shape Shape946 = createNode("Shape");
Shape946.USE = "HAnimSiteShape";
HAnimSite944.children[1] = Shape946;

HAnimSegment932.children[4] = HAnimSite944;

HAnimJoint931.children = new MFNode();

HAnimJoint931.children[0] = HAnimSegment932;

HAnimJoint HAnimJoint947 = createNode("HAnimJoint");
HAnimJoint947.name = "l_elbow";
HAnimJoint947.DEF = "hanim_l_elbow";
HAnimJoint947.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimJoint947.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint947.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment948 = createNode("HAnimSegment");
HAnimSegment948.name = "l_forearm";
HAnimSegment948.DEF = "hanim_l_forearm";
//<HAnimJoint name='l_elbow'/> visualization sphere is placed within <HAnimSegment name='l_forearm'/>
TouchSensor TouchSensor949 = createNode("TouchSensor");
TouchSensor949.description = "HAnimJoint l_elbow, HAnimSegment l_forearm";
HAnimSegment948.children = new MFNode();

HAnimSegment948.children[0] = TouchSensor949;

Transform Transform950 = createNode("Transform");
Transform950.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
Shape Shape951 = createNode("Shape");
Shape951.USE = "HAnimJointShape";
Transform950.children = new MFNode();

Transform950.children[0] = Shape951;

HAnimSegment948.children[1] = Transform950;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_elbow'/> to <HAnimJoint name='l_wrist'/>
Shape Shape952 = createNode("Shape");
LineSet LineSet953 = createNode("LineSet");
LineSet953.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate954 = createNode("Coordinate");
Coordinate954.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
LineSet953.coord = Coordinate954;

ColorRGBA ColorRGBA955 = createNode("ColorRGBA");
ColorRGBA955.USE = "HAnimSegmentLineColorRGBA";
LineSet953.color = ColorRGBA955;

Shape952.geometry = LineSet953;

HAnimSegment948.children[2] = Shape952;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radial_styloid'/>
Shape Shape956 = createNode("Shape");
LineSet LineSet957 = createNode("LineSet");
LineSet957.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate958 = createNode("Coordinate");
Coordinate958.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1901,0.8645,-0.0415]);
LineSet957.coord = Coordinate958;

ColorRGBA ColorRGBA959 = createNode("ColorRGBA");
ColorRGBA959.USE = "HAnimSiteLineColorRGBA";
LineSet957.color = ColorRGBA959;

Shape956.geometry = LineSet957;

HAnimSegment948.children[3] = Shape956;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_olecranon'/>
Shape Shape960 = createNode("Shape");
LineSet LineSet961 = createNode("LineSet");
LineSet961.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate962 = createNode("Coordinate");
Coordinate962.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1962,1.1375,-0.1123]);
LineSet961.coord = Coordinate962;

ColorRGBA ColorRGBA963 = createNode("ColorRGBA");
ColorRGBA963.USE = "HAnimSiteLineColorRGBA";
LineSet961.color = ColorRGBA963;

Shape960.geometry = LineSet961;

HAnimSegment948.children[4] = Shape960;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_humeral_medial_epicn'/>
Shape Shape964 = createNode("Shape");
LineSet LineSet965 = createNode("LineSet");
LineSet965.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate966 = createNode("Coordinate");
Coordinate966.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1735,1.1272,-0.1113]);
LineSet965.coord = Coordinate966;

ColorRGBA ColorRGBA967 = createNode("ColorRGBA");
ColorRGBA967.USE = "HAnimSiteLineColorRGBA";
LineSet965.color = ColorRGBA967;

Shape964.geometry = LineSet965;

HAnimSegment948.children[5] = Shape964;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radiale'/>
Shape Shape968 = createNode("Shape");
LineSet LineSet969 = createNode("LineSet");
LineSet969.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate970 = createNode("Coordinate");
Coordinate970.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.2182,1.1212,-0.1167]);
LineSet969.coord = Coordinate970;

ColorRGBA ColorRGBA971 = createNode("ColorRGBA");
ColorRGBA971.USE = "HAnimSiteLineColorRGBA";
LineSet969.color = ColorRGBA971;

Shape968.geometry = LineSet969;

HAnimSegment948.children[6] = Shape968;

HAnimSite HAnimSite972 = createNode("HAnimSite");
HAnimSite972.name = "l_radial_styloid_pt";
HAnimSite972.DEF = "hanim_l_radial_styloid_pt";
HAnimSite972.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
//HAnimSite visualization shape
TouchSensor TouchSensor973 = createNode("TouchSensor");
TouchSensor973.description = "HAnimSite l_radial_styloid";
HAnimSite972.children = new MFNode();

HAnimSite972.children[0] = TouchSensor973;

Shape Shape974 = createNode("Shape");
Shape974.USE = "HAnimSiteShape";
HAnimSite972.children[1] = Shape974;

HAnimSegment948.children[7] = HAnimSite972;

HAnimSite HAnimSite975 = createNode("HAnimSite");
HAnimSite975.name = "l_olecranon_pt";
HAnimSite975.DEF = "hanim_l_olecranon_pt";
HAnimSite975.translation = new SFVec3f(new float[0.1962,1.1375,-0.1123]);
//HAnimSite visualization shape
TouchSensor TouchSensor976 = createNode("TouchSensor");
TouchSensor976.description = "HAnimSite l_olecranon";
HAnimSite975.children = new MFNode();

HAnimSite975.children[0] = TouchSensor976;

Shape Shape977 = createNode("Shape");
Shape977.USE = "HAnimSiteShape";
HAnimSite975.children[1] = Shape977;

HAnimSegment948.children[8] = HAnimSite975;

HAnimSite HAnimSite978 = createNode("HAnimSite");
HAnimSite978.name = "l_humeral_medial_epicn_pt";
HAnimSite978.DEF = "hanim_l_humeral_medial_epicn_pt";
HAnimSite978.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
//HAnimSite visualization shape
TouchSensor TouchSensor979 = createNode("TouchSensor");
TouchSensor979.description = "HAnimSite l_humeral_medial_epicn";
HAnimSite978.children = new MFNode();

HAnimSite978.children[0] = TouchSensor979;

Shape Shape980 = createNode("Shape");
Shape980.USE = "HAnimSiteShape";
HAnimSite978.children[1] = Shape980;

HAnimSegment948.children[9] = HAnimSite978;

HAnimSite HAnimSite981 = createNode("HAnimSite");
HAnimSite981.name = "l_radiale_pt";
HAnimSite981.DEF = "hanim_l_radiale_pt";
HAnimSite981.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
//HAnimSite visualization shape
TouchSensor TouchSensor982 = createNode("TouchSensor");
TouchSensor982.description = "HAnimSite l_radiale";
HAnimSite981.children = new MFNode();

HAnimSite981.children[0] = TouchSensor982;

Shape Shape983 = createNode("Shape");
Shape983.USE = "HAnimSiteShape";
HAnimSite981.children[1] = Shape983;

HAnimSegment948.children[10] = HAnimSite981;

HAnimJoint947.children = new MFNode();

HAnimJoint947.children[0] = HAnimSegment948;

HAnimJoint HAnimJoint984 = createNode("HAnimJoint");
HAnimJoint984.name = "l_wrist";
HAnimJoint984.DEF = "hanim_l_wrist";
HAnimJoint984.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimJoint984.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint984.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment985 = createNode("HAnimSegment");
HAnimSegment985.name = "l_hand";
HAnimSegment985.DEF = "hanim_l_hand";
//<HAnimJoint name='l_wrist'/> visualization sphere is placed within <HAnimSegment name='l_hand'/>
TouchSensor TouchSensor986 = createNode("TouchSensor");
TouchSensor986.description = "HAnimJoint l_wrist, HAnimSegment l_hand";
HAnimSegment985.children = new MFNode();

HAnimSegment985.children[0] = TouchSensor986;

Transform Transform987 = createNode("Transform");
Transform987.translation = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
Shape Shape988 = createNode("Shape");
Shape988.USE = "HAnimJointShape";
Transform987.children = new MFNode();

Transform987.children[0] = Shape988;

HAnimSegment985.children[1] = Transform987;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_thumb1'/>
Shape Shape989 = createNode("Shape");
LineSet LineSet990 = createNode("LineSet");
LineSet990.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate991 = createNode("Coordinate");
Coordinate991.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534]);
LineSet990.coord = Coordinate991;

ColorRGBA ColorRGBA992 = createNode("ColorRGBA");
ColorRGBA992.USE = "HAnimSegmentLineColorRGBA";
LineSet990.color = ColorRGBA992;

Shape989.geometry = LineSet990;

HAnimSegment985.children[2] = Shape989;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_index0'/>
Shape Shape993 = createNode("Shape");
LineSet LineSet994 = createNode("LineSet");
LineSet994.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate995 = createNode("Coordinate");
Coordinate995.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028]);
LineSet994.coord = Coordinate995;

ColorRGBA ColorRGBA996 = createNode("ColorRGBA");
ColorRGBA996.USE = "HAnimSegmentLineColorRGBA";
LineSet994.color = ColorRGBA996;

Shape993.geometry = LineSet994;

HAnimSegment985.children[3] = Shape993;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_middle0'/>
Shape Shape997 = createNode("Shape");
LineSet LineSet998 = createNode("LineSet");
LineSet998.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate999 = createNode("Coordinate");
Coordinate999.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053]);
LineSet998.coord = Coordinate999;

ColorRGBA ColorRGBA1000 = createNode("ColorRGBA");
ColorRGBA1000.USE = "HAnimSegmentLineColorRGBA";
LineSet998.color = ColorRGBA1000;

Shape997.geometry = LineSet998;

HAnimSegment985.children[4] = Shape997;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_ring0'/>
Shape Shape1001 = createNode("Shape");
LineSet LineSet1002 = createNode("LineSet");
LineSet1002.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1003 = createNode("Coordinate");
Coordinate1003.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794]);
LineSet1002.coord = Coordinate1003;

ColorRGBA ColorRGBA1004 = createNode("ColorRGBA");
ColorRGBA1004.USE = "HAnimSegmentLineColorRGBA";
LineSet1002.color = ColorRGBA1004;

Shape1001.geometry = LineSet1002;

HAnimSegment985.children[5] = Shape1001;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_pinky0'/>
Shape Shape1005 = createNode("Shape");
LineSet LineSet1006 = createNode("LineSet");
LineSet1006.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1007 = createNode("Coordinate");
Coordinate1007.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036]);
LineSet1006.coord = Coordinate1007;

ColorRGBA ColorRGBA1008 = createNode("ColorRGBA");
ColorRGBA1008.USE = "HAnimSegmentLineColorRGBA";
LineSet1006.color = ColorRGBA1008;

Shape1005.geometry = LineSet1006;

HAnimSegment985.children[6] = Shape1005;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_metacarpal_pha2'/>
Shape Shape1009 = createNode("Shape");
LineSet LineSet1010 = createNode("LineSet");
LineSet1010.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1011 = createNode("Coordinate");
Coordinate1011.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.2009,0.8139,-0.0237]);
LineSet1010.coord = Coordinate1011;

ColorRGBA ColorRGBA1012 = createNode("ColorRGBA");
ColorRGBA1012.USE = "HAnimSiteLineColorRGBA";
LineSet1010.color = ColorRGBA1012;

Shape1009.geometry = LineSet1010;

HAnimSegment985.children[7] = Shape1009;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_ulnar_styloid'/>
Shape Shape1013 = createNode("Shape");
LineSet LineSet1014 = createNode("LineSet");
LineSet1014.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1015 = createNode("Coordinate");
Coordinate1015.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.2142,0.8529,-0.0648]);
LineSet1014.coord = Coordinate1015;

ColorRGBA ColorRGBA1016 = createNode("ColorRGBA");
ColorRGBA1016.USE = "HAnimSiteLineColorRGBA";
LineSet1014.color = ColorRGBA1016;

Shape1013.geometry = LineSet1014;

HAnimSegment985.children[8] = Shape1013;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_metacarpal_pha5'/>
Shape Shape1017 = createNode("Shape");
LineSet LineSet1018 = createNode("LineSet");
LineSet1018.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1019 = createNode("Coordinate");
Coordinate1019.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1929,0.786,-0.1122]);
LineSet1018.coord = Coordinate1019;

ColorRGBA ColorRGBA1020 = createNode("ColorRGBA");
ColorRGBA1020.USE = "HAnimSiteLineColorRGBA";
LineSet1018.color = ColorRGBA1020;

Shape1017.geometry = LineSet1018;

HAnimSegment985.children[9] = Shape1017;

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_hand_front_view'/>
Shape Shape1021 = createNode("Shape");
LineSet LineSet1022 = createNode("LineSet");
LineSet1022.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1023 = createNode("Coordinate");
Coordinate1023.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.3,0.75,0.45]);
LineSet1022.coord = Coordinate1023;

ColorRGBA ColorRGBA1024 = createNode("ColorRGBA");
ColorRGBA1024.USE = "HAnimSiteViewpointLineColorRGBA";
LineSet1022.color = ColorRGBA1024;

Shape1021.geometry = LineSet1022;

HAnimSegment985.children[10] = Shape1021;

HAnimSite HAnimSite1025 = createNode("HAnimSite");
HAnimSite1025.name = "l_metacarpal_pha2_pt";
HAnimSite1025.DEF = "hanim_l_metacarpal_pha2_pt";
HAnimSite1025.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
//HAnimSite visualization shape
TouchSensor TouchSensor1026 = createNode("TouchSensor");
TouchSensor1026.description = "HAnimSite l_metacarpal_pha2";
HAnimSite1025.children = new MFNode();

HAnimSite1025.children[0] = TouchSensor1026;

Shape Shape1027 = createNode("Shape");
Shape1027.USE = "HAnimSiteShape";
HAnimSite1025.children[1] = Shape1027;

HAnimSegment985.children[11] = HAnimSite1025;

HAnimSite HAnimSite1028 = createNode("HAnimSite");
HAnimSite1028.name = "l_ulnar_styloid_pt";
HAnimSite1028.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite1028.translation = new SFVec3f(new float[0.2142,0.8529,-0.0648]);
//HAnimSite visualization shape
TouchSensor TouchSensor1029 = createNode("TouchSensor");
TouchSensor1029.description = "HAnimSite l_ulnar_styloid";
HAnimSite1028.children = new MFNode();

HAnimSite1028.children[0] = TouchSensor1029;

Shape Shape1030 = createNode("Shape");
Shape1030.USE = "HAnimSiteShape";
HAnimSite1028.children[1] = Shape1030;

HAnimSegment985.children[12] = HAnimSite1028;

HAnimSite HAnimSite1031 = createNode("HAnimSite");
HAnimSite1031.name = "l_metacarpal_pha5_pt";
HAnimSite1031.DEF = "hanim_l_metacarpal_pha5_pt";
HAnimSite1031.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
//HAnimSite visualization shape
TouchSensor TouchSensor1032 = createNode("TouchSensor");
TouchSensor1032.description = "HAnimSite l_metacarpal_pha5";
HAnimSite1031.children = new MFNode();

HAnimSite1031.children[0] = TouchSensor1032;

Shape Shape1033 = createNode("Shape");
Shape1033.USE = "HAnimSiteShape";
HAnimSite1031.children[1] = Shape1033;

HAnimSegment985.children[13] = HAnimSite1031;

HAnimSite HAnimSite1034 = createNode("HAnimSite");
HAnimSite1034.name = "l_hand_front_view";
HAnimSite1034.DEF = "hanim_l_hand_front_view";
HAnimSite1034.translation = new SFVec3f(new float[0.3,0.75,0.45]);
//HAnimSite visualization shape
TouchSensor TouchSensor1035 = createNode("TouchSensor");
TouchSensor1035.description = "HAnimSite l_hand_front_view";
HAnimSite1034.children = new MFNode();

HAnimSite1034.children[0] = TouchSensor1035;

Shape Shape1036 = createNode("Shape");
Shape1036.USE = "HAnimSiteShape";
HAnimSite1034.children[1] = Shape1036;

Viewpoint Viewpoint1037 = createNode("Viewpoint");
Viewpoint1037.DEF = "hanim_l_hand_front_viewpoint";
Viewpoint1037.centerOfRotation = new SFVec3f(new float[0,0.7,0]);
Viewpoint1037.description = "left hand front";
Viewpoint1037.position = new SFVec3f(new float[0,0,0]);
HAnimSite1034.children[2] = Viewpoint1037;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1038 = createNode("Anchor");
Anchor1038.description = "HAnimSite hanim_l_hand_front_view Viewpoint";
Anchor1038.url = new MFString(new java.lang.String["#hanim_l_hand_front_viewpoint"]);
LOD LOD1039 = createNode("LOD");
LOD1039.forceTransitions = True;
LOD1039.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1040 = createNode("WorldInfo");
WorldInfo1040.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1039.children = new MFNode();

LOD1039.children[0] = WorldInfo1040;

Shape Shape1041 = createNode("Shape");
Shape1041.USE = "HAnimSiteViewpointShape";
LOD1039.children[1] = Shape1041;

Anchor1038.children = new MFNode();

Anchor1038.children[0] = LOD1039;

HAnimSite1034.children[3] = Anchor1038;

HAnimSegment985.children[14] = HAnimSite1034;

HAnimJoint984.children = new MFNode();

HAnimJoint984.children[0] = HAnimSegment985;

HAnimJoint HAnimJoint1042 = createNode("HAnimJoint");
HAnimJoint1042.name = "l_thumb1";
HAnimJoint1042.DEF = "hanim_l_thumb1";
HAnimJoint1042.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimJoint1042.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1042.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1043 = createNode("HAnimSegment");
HAnimSegment1043.name = "l_thumb_metacarpal";
HAnimSegment1043.DEF = "hanim_l_thumb_metacarpal";
//<HAnimJoint name='l_thumb1'/> visualization sphere is placed within <HAnimSegment name='l_thumb_metacarpal'/>
TouchSensor TouchSensor1044 = createNode("TouchSensor");
TouchSensor1044.description = "HAnimJoint l_thumb1, HAnimSegment l_thumb_metacarpal";
HAnimSegment1043.children = new MFNode();

HAnimSegment1043.children[0] = TouchSensor1044;

Transform Transform1045 = createNode("Transform");
Transform1045.translation = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
Shape Shape1046 = createNode("Shape");
Shape1046.USE = "HAnimJointShape";
Transform1045.children = new MFNode();

Transform1045.children[0] = Shape1046;

HAnimSegment1043.children[1] = Transform1045;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_thumb1'/> to <HAnimJoint name='l_thumb2'/>
Shape Shape1047 = createNode("Shape");
LineSet LineSet1048 = createNode("LineSet");
LineSet1048.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1049 = createNode("Coordinate");
Coordinate1049.point = new MFVec3f(new float[0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
LineSet1048.coord = Coordinate1049;

ColorRGBA ColorRGBA1050 = createNode("ColorRGBA");
ColorRGBA1050.USE = "HAnimSegmentLineColorRGBA";
LineSet1048.color = ColorRGBA1050;

Shape1047.geometry = LineSet1048;

HAnimSegment1043.children[2] = Shape1047;

HAnimJoint1042.children = new MFNode();

HAnimJoint1042.children[0] = HAnimSegment1043;

HAnimJoint HAnimJoint1051 = createNode("HAnimJoint");
HAnimJoint1051.name = "l_thumb2";
HAnimJoint1051.DEF = "hanim_l_thumb2";
HAnimJoint1051.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimJoint1051.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1051.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1052 = createNode("HAnimSegment");
HAnimSegment1052.name = "l_thumb_proximal";
HAnimSegment1052.DEF = "hanim_l_thumb_proximal";
//<HAnimJoint name='l_thumb2'/> visualization sphere is placed within <HAnimSegment name='l_thumb_proximal'/>
TouchSensor TouchSensor1053 = createNode("TouchSensor");
TouchSensor1053.description = "HAnimJoint l_thumb2, HAnimSegment l_thumb_proximal";
HAnimSegment1052.children = new MFNode();

HAnimSegment1052.children[0] = TouchSensor1053;

Transform Transform1054 = createNode("Transform");
Transform1054.translation = new SFVec3f(new float[0.1951,0.8226,0.0246]);
Shape Shape1055 = createNode("Shape");
Shape1055.USE = "HAnimJointShape";
Transform1054.children = new MFNode();

Transform1054.children[0] = Shape1055;

HAnimSegment1052.children[1] = Transform1054;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_thumb2'/> to <HAnimJoint name='l_thumb3'/>
Shape Shape1056 = createNode("Shape");
LineSet LineSet1057 = createNode("LineSet");
LineSet1057.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1058 = createNode("Coordinate");
Coordinate1058.point = new MFVec3f(new float[0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
LineSet1057.coord = Coordinate1058;

ColorRGBA ColorRGBA1059 = createNode("ColorRGBA");
ColorRGBA1059.USE = "HAnimSegmentLineColorRGBA";
LineSet1057.color = ColorRGBA1059;

Shape1056.geometry = LineSet1057;

HAnimSegment1052.children[2] = Shape1056;

HAnimJoint1051.children = new MFNode();

HAnimJoint1051.children[0] = HAnimSegment1052;

HAnimJoint HAnimJoint1060 = createNode("HAnimJoint");
HAnimJoint1060.name = "l_thumb3";
HAnimJoint1060.DEF = "hanim_l_thumb3";
HAnimJoint1060.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint1060.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1060.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1061 = createNode("HAnimSegment");
HAnimSegment1061.name = "l_thumb_distal";
HAnimSegment1061.DEF = "hanim_l_thumb_distal";
//<HAnimJoint name='l_thumb3'/> visualization sphere is placed within <HAnimSegment name='l_thumb_distal'/>
TouchSensor TouchSensor1062 = createNode("TouchSensor");
TouchSensor1062.description = "HAnimJoint l_thumb3, HAnimSegment l_thumb_distal";
HAnimSegment1061.children = new MFNode();

HAnimSegment1061.children[0] = TouchSensor1062;

Transform Transform1063 = createNode("Transform");
Transform1063.translation = new SFVec3f(new float[0.1955,0.8159,0.0464]);
Shape Shape1064 = createNode("Shape");
Shape1064.USE = "HAnimJointShape";
Transform1063.children = new MFNode();

Transform1063.children[0] = Shape1064;

HAnimSegment1061.children[1] = Transform1063;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_thumb3'/> to <HAnimSite name='l_thumb_distal_tip'/>
Shape Shape1065 = createNode("Shape");
LineSet LineSet1066 = createNode("LineSet");
LineSet1066.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1067 = createNode("Coordinate");
Coordinate1067.point = new MFVec3f(new float[0.1955,0.8159,0.0464,0.1982,0.8061,0.0759]);
LineSet1066.coord = Coordinate1067;

ColorRGBA ColorRGBA1068 = createNode("ColorRGBA");
ColorRGBA1068.USE = "HAnimSiteLineColorRGBA";
LineSet1066.color = ColorRGBA1068;

Shape1065.geometry = LineSet1066;

HAnimSegment1061.children[2] = Shape1065;

HAnimSite HAnimSite1069 = createNode("HAnimSite");
HAnimSite1069.name = "l_thumb_distal_tip";
HAnimSite1069.DEF = "hanim_l_thumb_distal_tip";
HAnimSite1069.translation = new SFVec3f(new float[0.1982,0.8061,0.0759]);
//HAnimSite visualization shape
TouchSensor TouchSensor1070 = createNode("TouchSensor");
TouchSensor1070.description = "HAnimSite l_thumb_distal_tip";
HAnimSite1069.children = new MFNode();

HAnimSite1069.children[0] = TouchSensor1070;

Shape Shape1071 = createNode("Shape");
Shape1071.USE = "HAnimSiteShape";
HAnimSite1069.children[1] = Shape1071;

HAnimSegment1061.children[3] = HAnimSite1069;

HAnimJoint1060.children = new MFNode();

HAnimJoint1060.children[0] = HAnimSegment1061;

HAnimJoint1051.children[1] = HAnimJoint1060;

HAnimJoint1042.children[1] = HAnimJoint1051;

HAnimJoint984.children[1] = HAnimJoint1042;

HAnimJoint HAnimJoint1072 = createNode("HAnimJoint");
HAnimJoint1072.name = "l_index0";
HAnimJoint1072.DEF = "hanim_l_index0";
HAnimJoint1072.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimJoint1072.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1072.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1073 = createNode("HAnimSegment");
HAnimSegment1073.name = "l_index_metacarpal";
HAnimSegment1073.DEF = "hanim_l_index_metacarpal";
//<HAnimJoint name='l_index0'/> visualization sphere is placed within <HAnimSegment name='l_index_metacarpal'/>
TouchSensor TouchSensor1074 = createNode("TouchSensor");
TouchSensor1074.description = "HAnimJoint l_index0, HAnimSegment l_index_metacarpal";
HAnimSegment1073.children = new MFNode();

HAnimSegment1073.children[0] = TouchSensor1074;

Transform Transform1075 = createNode("Transform");
Transform1075.translation = new SFVec3f(new float[0.1983,0.8024,-0.028]);
Shape Shape1076 = createNode("Shape");
Shape1076.USE = "HAnimJointShape";
Transform1075.children = new MFNode();

Transform1075.children[0] = Shape1076;

HAnimSegment1073.children[1] = Transform1075;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_index0'/> to <HAnimJoint name='l_index1'/>
Shape Shape1077 = createNode("Shape");
LineSet LineSet1078 = createNode("LineSet");
LineSet1078.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1079 = createNode("Coordinate");
Coordinate1079.point = new MFVec3f(new float[0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
LineSet1078.coord = Coordinate1079;

ColorRGBA ColorRGBA1080 = createNode("ColorRGBA");
ColorRGBA1080.USE = "HAnimSegmentLineColorRGBA";
LineSet1078.color = ColorRGBA1080;

Shape1077.geometry = LineSet1078;

HAnimSegment1073.children[2] = Shape1077;

HAnimJoint1072.children = new MFNode();

HAnimJoint1072.children[0] = HAnimSegment1073;

HAnimJoint HAnimJoint1081 = createNode("HAnimJoint");
HAnimJoint1081.name = "l_index1";
HAnimJoint1081.DEF = "hanim_l_index1";
HAnimJoint1081.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint1081.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1081.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1082 = createNode("HAnimSegment");
HAnimSegment1082.name = "l_index_proximal";
HAnimSegment1082.DEF = "hanim_l_index_proximal";
//<HAnimJoint name='l_index1'/> visualization sphere is placed within <HAnimSegment name='l_index_proximal'/>
TouchSensor TouchSensor1083 = createNode("TouchSensor");
TouchSensor1083.description = "HAnimJoint l_index1, HAnimSegment l_index_proximal";
HAnimSegment1082.children = new MFNode();

HAnimSegment1082.children[0] = TouchSensor1083;

Transform Transform1084 = createNode("Transform");
Transform1084.translation = new SFVec3f(new float[0.1983,0.7815,-0.028]);
Shape Shape1085 = createNode("Shape");
Shape1085.USE = "HAnimJointShape";
Transform1084.children = new MFNode();

Transform1084.children[0] = Shape1085;

HAnimSegment1082.children[1] = Transform1084;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_index1'/> to <HAnimJoint name='l_index2'/>
Shape Shape1086 = createNode("Shape");
LineSet LineSet1087 = createNode("LineSet");
LineSet1087.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1088 = createNode("Coordinate");
Coordinate1088.point = new MFVec3f(new float[0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
LineSet1087.coord = Coordinate1088;

ColorRGBA ColorRGBA1089 = createNode("ColorRGBA");
ColorRGBA1089.USE = "HAnimSegmentLineColorRGBA";
LineSet1087.color = ColorRGBA1089;

Shape1086.geometry = LineSet1087;

HAnimSegment1082.children[2] = Shape1086;

HAnimJoint1081.children = new MFNode();

HAnimJoint1081.children[0] = HAnimSegment1082;

HAnimJoint HAnimJoint1090 = createNode("HAnimJoint");
HAnimJoint1090.name = "l_index2";
HAnimJoint1090.DEF = "hanim_l_index2";
HAnimJoint1090.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint1090.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1090.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1091 = createNode("HAnimSegment");
HAnimSegment1091.name = "l_index_middle";
HAnimSegment1091.DEF = "hanim_l_index_middle";
//<HAnimJoint name='l_index2'/> visualization sphere is placed within <HAnimSegment name='l_index_middle'/>
TouchSensor TouchSensor1092 = createNode("TouchSensor");
TouchSensor1092.description = "HAnimJoint l_index2, HAnimSegment l_index_middle";
HAnimSegment1091.children = new MFNode();

HAnimSegment1091.children[0] = TouchSensor1092;

Transform Transform1093 = createNode("Transform");
Transform1093.translation = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
Shape Shape1094 = createNode("Shape");
Shape1094.USE = "HAnimJointShape";
Transform1093.children = new MFNode();

Transform1093.children[0] = Shape1094;

HAnimSegment1091.children[1] = Transform1093;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_index2'/> to <HAnimJoint name='l_index3'/>
Shape Shape1095 = createNode("Shape");
LineSet LineSet1096 = createNode("LineSet");
LineSet1096.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1097 = createNode("Coordinate");
Coordinate1097.point = new MFVec3f(new float[0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
LineSet1096.coord = Coordinate1097;

ColorRGBA ColorRGBA1098 = createNode("ColorRGBA");
ColorRGBA1098.USE = "HAnimSegmentLineColorRGBA";
LineSet1096.color = ColorRGBA1098;

Shape1095.geometry = LineSet1096;

HAnimSegment1091.children[2] = Shape1095;

HAnimJoint1090.children = new MFNode();

HAnimJoint1090.children[0] = HAnimSegment1091;

HAnimJoint HAnimJoint1099 = createNode("HAnimJoint");
HAnimJoint1099.name = "l_index3";
HAnimJoint1099.DEF = "hanim_l_index3";
HAnimJoint1099.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint1099.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1099.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1100 = createNode("HAnimSegment");
HAnimSegment1100.name = "l_index_distal";
HAnimSegment1100.DEF = "hanim_l_index_distal";
//<HAnimJoint name='l_index3'/> visualization sphere is placed within <HAnimSegment name='l_index_distal'/>
TouchSensor TouchSensor1101 = createNode("TouchSensor");
TouchSensor1101.description = "HAnimJoint l_index3, HAnimSegment l_index_distal";
HAnimSegment1100.children = new MFNode();

HAnimSegment1100.children[0] = TouchSensor1101;

Transform Transform1102 = createNode("Transform");
Transform1102.translation = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
Shape Shape1103 = createNode("Shape");
Shape1103.USE = "HAnimJointShape";
Transform1102.children = new MFNode();

Transform1102.children[0] = Shape1103;

HAnimSegment1100.children[1] = Transform1102;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_index_distal_tip'/>
Shape Shape1104 = createNode("Shape");
LineSet LineSet1105 = createNode("LineSet");
LineSet1105.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1106 = createNode("Coordinate");
Coordinate1106.point = new MFVec3f(new float[0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245]);
LineSet1105.coord = Coordinate1106;

ColorRGBA ColorRGBA1107 = createNode("ColorRGBA");
ColorRGBA1107.USE = "HAnimSiteLineColorRGBA";
LineSet1105.color = ColorRGBA1107;

Shape1104.geometry = LineSet1105;

HAnimSegment1100.children[2] = Shape1104;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_dactylion'/>
Shape Shape1108 = createNode("Shape");
LineSet LineSet1109 = createNode("LineSet");
LineSet1109.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1110 = createNode("Coordinate");
Coordinate1110.point = new MFVec3f(new float[0.2028,0.7139,-0.0236,0.2056,0.6743,-0.0482]);
LineSet1109.coord = Coordinate1110;

ColorRGBA ColorRGBA1111 = createNode("ColorRGBA");
ColorRGBA1111.USE = "HAnimSiteLineColorRGBA";
LineSet1109.color = ColorRGBA1111;

Shape1108.geometry = LineSet1109;

HAnimSegment1100.children[3] = Shape1108;

HAnimSite HAnimSite1112 = createNode("HAnimSite");
HAnimSite1112.name = "l_index_distal_tip";
HAnimSite1112.DEF = "hanim_l_index_distal_tip";
HAnimSite1112.translation = new SFVec3f(new float[0.2089,0.6858,-0.0245]);
//HAnimSite visualization shape
TouchSensor TouchSensor1113 = createNode("TouchSensor");
TouchSensor1113.description = "HAnimSite l_index_distal_tip";
HAnimSite1112.children = new MFNode();

HAnimSite1112.children[0] = TouchSensor1113;

Shape Shape1114 = createNode("Shape");
Shape1114.USE = "HAnimSiteShape";
HAnimSite1112.children[1] = Shape1114;

HAnimSegment1100.children[4] = HAnimSite1112;

HAnimSite HAnimSite1115 = createNode("HAnimSite");
HAnimSite1115.name = "l_dactylion_pt";
HAnimSite1115.DEF = "hanim_l_dactylion_pt";
HAnimSite1115.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
//HAnimSite visualization shape
TouchSensor TouchSensor1116 = createNode("TouchSensor");
TouchSensor1116.description = "HAnimSite l_dactylion";
HAnimSite1115.children = new MFNode();

HAnimSite1115.children[0] = TouchSensor1116;

Shape Shape1117 = createNode("Shape");
Shape1117.USE = "HAnimSiteShape";
HAnimSite1115.children[1] = Shape1117;

HAnimSegment1100.children[5] = HAnimSite1115;

HAnimJoint1099.children = new MFNode();

HAnimJoint1099.children[0] = HAnimSegment1100;

HAnimJoint1090.children[1] = HAnimJoint1099;

HAnimJoint1081.children[1] = HAnimJoint1090;

HAnimJoint1072.children[1] = HAnimJoint1081;

HAnimJoint984.children[2] = HAnimJoint1072;

HAnimJoint HAnimJoint1118 = createNode("HAnimJoint");
HAnimJoint1118.name = "l_middle0";
HAnimJoint1118.DEF = "hanim_l_middle0";
HAnimJoint1118.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimJoint1118.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1118.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1119 = createNode("HAnimSegment");
HAnimSegment1119.name = "l_middle_metacarpal";
HAnimSegment1119.DEF = "hanim_l_middle_metacarpal";
//<HAnimJoint name='l_middle0'/> visualization sphere is placed within <HAnimSegment name='l_middle_metacarpal'/>
TouchSensor TouchSensor1120 = createNode("TouchSensor");
TouchSensor1120.description = "HAnimJoint l_middle0, HAnimSegment l_middle_metacarpal";
HAnimSegment1119.children = new MFNode();

HAnimSegment1119.children[0] = TouchSensor1120;

Transform Transform1121 = createNode("Transform");
Transform1121.translation = new SFVec3f(new float[0.1987,0.8029,-0.053]);
Shape Shape1122 = createNode("Shape");
Shape1122.USE = "HAnimJointShape";
Transform1121.children = new MFNode();

Transform1121.children[0] = Shape1122;

HAnimSegment1119.children[1] = Transform1121;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle0'/> to <HAnimJoint name='l_middle1'/>
Shape Shape1123 = createNode("Shape");
LineSet LineSet1124 = createNode("LineSet");
LineSet1124.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1125 = createNode("Coordinate");
Coordinate1125.point = new MFVec3f(new float[0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
LineSet1124.coord = Coordinate1125;

ColorRGBA ColorRGBA1126 = createNode("ColorRGBA");
ColorRGBA1126.USE = "HAnimSegmentLineColorRGBA";
LineSet1124.color = ColorRGBA1126;

Shape1123.geometry = LineSet1124;

HAnimSegment1119.children[2] = Shape1123;

HAnimJoint1118.children = new MFNode();

HAnimJoint1118.children[0] = HAnimSegment1119;

HAnimJoint HAnimJoint1127 = createNode("HAnimJoint");
HAnimJoint1127.name = "l_middle1";
HAnimJoint1127.DEF = "hanim_l_middle1";
HAnimJoint1127.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimJoint1127.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1127.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1128 = createNode("HAnimSegment");
HAnimSegment1128.name = "l_middle_proximal";
HAnimSegment1128.DEF = "hanim_l_middle_proximal";
//<HAnimJoint name='l_middle1'/> visualization sphere is placed within <HAnimSegment name='l_middle_proximal'/>
TouchSensor TouchSensor1129 = createNode("TouchSensor");
TouchSensor1129.description = "HAnimJoint l_middle1, HAnimSegment l_middle_proximal";
HAnimSegment1128.children = new MFNode();

HAnimSegment1128.children[0] = TouchSensor1129;

Transform Transform1130 = createNode("Transform");
Transform1130.translation = new SFVec3f(new float[0.1987,0.7818,-0.053]);
Shape Shape1131 = createNode("Shape");
Shape1131.USE = "HAnimJointShape";
Transform1130.children = new MFNode();

Transform1130.children[0] = Shape1131;

HAnimSegment1128.children[1] = Transform1130;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle1'/> to <HAnimJoint name='l_middle2'/>
Shape Shape1132 = createNode("Shape");
LineSet LineSet1133 = createNode("LineSet");
LineSet1133.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1134 = createNode("Coordinate");
Coordinate1134.point = new MFVec3f(new float[0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
LineSet1133.coord = Coordinate1134;

ColorRGBA ColorRGBA1135 = createNode("ColorRGBA");
ColorRGBA1135.USE = "HAnimSegmentLineColorRGBA";
LineSet1133.color = ColorRGBA1135;

Shape1132.geometry = LineSet1133;

HAnimSegment1128.children[2] = Shape1132;

HAnimJoint1127.children = new MFNode();

HAnimJoint1127.children[0] = HAnimSegment1128;

HAnimJoint HAnimJoint1136 = createNode("HAnimJoint");
HAnimJoint1136.name = "l_middle2";
HAnimJoint1136.DEF = "hanim_l_middle2";
HAnimJoint1136.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimJoint1136.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1136.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1137 = createNode("HAnimSegment");
HAnimSegment1137.name = "l_middle_middle";
HAnimSegment1137.DEF = "hanim_l_middle_middle";
//<HAnimJoint name='l_middle2'/> visualization sphere is placed within <HAnimSegment name='l_middle_middle'/>
TouchSensor TouchSensor1138 = createNode("TouchSensor");
TouchSensor1138.description = "HAnimJoint l_middle2, HAnimSegment l_middle_middle";
HAnimSegment1137.children = new MFNode();

HAnimSegment1137.children[0] = TouchSensor1138;

Transform Transform1139 = createNode("Transform");
Transform1139.translation = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
Shape Shape1140 = createNode("Shape");
Shape1140.USE = "HAnimJointShape";
Transform1139.children = new MFNode();

Transform1139.children[0] = Shape1140;

HAnimSegment1137.children[1] = Transform1139;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle2'/> to <HAnimJoint name='l_middle3'/>
Shape Shape1141 = createNode("Shape");
LineSet LineSet1142 = createNode("LineSet");
LineSet1142.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1143 = createNode("Coordinate");
Coordinate1143.point = new MFVec3f(new float[0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
LineSet1142.coord = Coordinate1143;

ColorRGBA ColorRGBA1144 = createNode("ColorRGBA");
ColorRGBA1144.USE = "HAnimSegmentLineColorRGBA";
LineSet1142.color = ColorRGBA1144;

Shape1141.geometry = LineSet1142;

HAnimSegment1137.children[2] = Shape1141;

HAnimJoint1136.children = new MFNode();

HAnimJoint1136.children[0] = HAnimSegment1137;

HAnimJoint HAnimJoint1145 = createNode("HAnimJoint");
HAnimJoint1145.name = "l_middle3";
HAnimJoint1145.DEF = "hanim_l_middle3";
HAnimJoint1145.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint1145.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1145.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1146 = createNode("HAnimSegment");
HAnimSegment1146.name = "l_middle_distal";
HAnimSegment1146.DEF = "hanim_l_middle_distal";
//<HAnimJoint name='l_middle3'/> visualization sphere is placed within <HAnimSegment name='l_middle_distal'/>
TouchSensor TouchSensor1147 = createNode("TouchSensor");
TouchSensor1147.description = "HAnimJoint l_middle3, HAnimSegment l_middle_distal";
HAnimSegment1146.children = new MFNode();

HAnimSegment1146.children[0] = TouchSensor1147;

Transform Transform1148 = createNode("Transform");
Transform1148.translation = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
Shape Shape1149 = createNode("Shape");
Shape1149.USE = "HAnimJointShape";
Transform1148.children = new MFNode();

Transform1148.children[0] = Shape1149;

HAnimSegment1146.children[1] = Transform1148;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_middle3'/> to <HAnimSite name='l_middle_distal_tip'/>
Shape Shape1150 = createNode("Shape");
LineSet LineSet1151 = createNode("LineSet");
LineSet1151.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1152 = createNode("Coordinate");
Coordinate1152.point = new MFVec3f(new float[0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491]);
LineSet1151.coord = Coordinate1152;

ColorRGBA ColorRGBA1153 = createNode("ColorRGBA");
ColorRGBA1153.USE = "HAnimSiteLineColorRGBA";
LineSet1151.color = ColorRGBA1153;

Shape1150.geometry = LineSet1151;

HAnimSegment1146.children[2] = Shape1150;

HAnimSite HAnimSite1154 = createNode("HAnimSite");
HAnimSite1154.name = "l_middle_distal_tip";
HAnimSite1154.DEF = "hanim_l_middle_distal_tip";
HAnimSite1154.translation = new SFVec3f(new float[0.208,0.6731,-0.0491]);
//HAnimSite visualization shape
TouchSensor TouchSensor1155 = createNode("TouchSensor");
TouchSensor1155.description = "HAnimSite l_middle_distal_tip";
HAnimSite1154.children = new MFNode();

HAnimSite1154.children[0] = TouchSensor1155;

Shape Shape1156 = createNode("Shape");
Shape1156.USE = "HAnimSiteShape";
HAnimSite1154.children[1] = Shape1156;

HAnimSegment1146.children[3] = HAnimSite1154;

HAnimJoint1145.children = new MFNode();

HAnimJoint1145.children[0] = HAnimSegment1146;

HAnimJoint1136.children[1] = HAnimJoint1145;

HAnimJoint1127.children[1] = HAnimJoint1136;

HAnimJoint1118.children[1] = HAnimJoint1127;

HAnimJoint984.children[3] = HAnimJoint1118;

HAnimJoint HAnimJoint1157 = createNode("HAnimJoint");
HAnimJoint1157.name = "l_ring0";
HAnimJoint1157.DEF = "hanim_l_ring0";
HAnimJoint1157.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimJoint1157.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1157.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1158 = createNode("HAnimSegment");
HAnimSegment1158.name = "l_ring_metacarpal";
HAnimSegment1158.DEF = "hanim_l_ring_metacarpal";
//<HAnimJoint name='l_ring0'/> visualization sphere is placed within <HAnimSegment name='l_ring_metacarpal'/>
TouchSensor TouchSensor1159 = createNode("TouchSensor");
TouchSensor1159.description = "HAnimJoint l_ring0, HAnimSegment l_ring_metacarpal";
HAnimSegment1158.children = new MFNode();

HAnimSegment1158.children[0] = TouchSensor1159;

Transform Transform1160 = createNode("Transform");
Transform1160.translation = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
Shape Shape1161 = createNode("Shape");
Shape1161.USE = "HAnimJointShape";
Transform1160.children = new MFNode();

Transform1160.children[0] = Shape1161;

HAnimSegment1158.children[1] = Transform1160;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring0'/> to <HAnimJoint name='l_ring1'/>
Shape Shape1162 = createNode("Shape");
LineSet LineSet1163 = createNode("LineSet");
LineSet1163.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1164 = createNode("Coordinate");
Coordinate1164.point = new MFVec3f(new float[0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
LineSet1163.coord = Coordinate1164;

ColorRGBA ColorRGBA1165 = createNode("ColorRGBA");
ColorRGBA1165.USE = "HAnimSegmentLineColorRGBA";
LineSet1163.color = ColorRGBA1165;

Shape1162.geometry = LineSet1163;

HAnimSegment1158.children[2] = Shape1162;

HAnimJoint1157.children = new MFNode();

HAnimJoint1157.children[0] = HAnimSegment1158;

HAnimJoint HAnimJoint1166 = createNode("HAnimJoint");
HAnimJoint1166.name = "l_ring1";
HAnimJoint1166.DEF = "hanim_l_ring1";
HAnimJoint1166.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimJoint1166.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1166.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1167 = createNode("HAnimSegment");
HAnimSegment1167.name = "l_ring_proximal";
HAnimSegment1167.DEF = "hanim_l_ring_proximal";
//<HAnimJoint name='l_ring1'/> visualization sphere is placed within <HAnimSegment name='l_ring_proximal'/>
TouchSensor TouchSensor1168 = createNode("TouchSensor");
TouchSensor1168.description = "HAnimJoint l_ring1, HAnimSegment l_ring_proximal";
HAnimSegment1167.children = new MFNode();

HAnimSegment1167.children[0] = TouchSensor1168;

Transform Transform1169 = createNode("Transform");
Transform1169.translation = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
Shape Shape1170 = createNode("Shape");
Shape1170.USE = "HAnimJointShape";
Transform1169.children = new MFNode();

Transform1169.children[0] = Shape1170;

HAnimSegment1167.children[1] = Transform1169;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring1'/> to <HAnimJoint name='l_ring2'/>
Shape Shape1171 = createNode("Shape");
LineSet LineSet1172 = createNode("LineSet");
LineSet1172.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1173 = createNode("Coordinate");
Coordinate1173.point = new MFVec3f(new float[0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
LineSet1172.coord = Coordinate1173;

ColorRGBA ColorRGBA1174 = createNode("ColorRGBA");
ColorRGBA1174.USE = "HAnimSegmentLineColorRGBA";
LineSet1172.color = ColorRGBA1174;

Shape1171.geometry = LineSet1172;

HAnimSegment1167.children[2] = Shape1171;

HAnimJoint1166.children = new MFNode();

HAnimJoint1166.children[0] = HAnimSegment1167;

HAnimJoint HAnimJoint1175 = createNode("HAnimJoint");
HAnimJoint1175.name = "l_ring2";
HAnimJoint1175.DEF = "hanim_l_ring2";
HAnimJoint1175.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimJoint1175.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1175.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1176 = createNode("HAnimSegment");
HAnimSegment1176.name = "l_ring_middle";
HAnimSegment1176.DEF = "hanim_l_ring_middle";
//<HAnimJoint name='l_ring2'/> visualization sphere is placed within <HAnimSegment name='l_ring_middle'/>
TouchSensor TouchSensor1177 = createNode("TouchSensor");
TouchSensor1177.description = "HAnimJoint l_ring2, HAnimSegment l_ring_middle";
HAnimSegment1176.children = new MFNode();

HAnimSegment1176.children[0] = TouchSensor1177;

Transform Transform1178 = createNode("Transform");
Transform1178.translation = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
Shape Shape1179 = createNode("Shape");
Shape1179.USE = "HAnimJointShape";
Transform1178.children = new MFNode();

Transform1178.children[0] = Shape1179;

HAnimSegment1176.children[1] = Transform1178;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring2'/> to <HAnimJoint name='l_ring3'/>
Shape Shape1180 = createNode("Shape");
LineSet LineSet1181 = createNode("LineSet");
LineSet1181.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1182 = createNode("Coordinate");
Coordinate1182.point = new MFVec3f(new float[0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
LineSet1181.coord = Coordinate1182;

ColorRGBA ColorRGBA1183 = createNode("ColorRGBA");
ColorRGBA1183.USE = "HAnimSegmentLineColorRGBA";
LineSet1181.color = ColorRGBA1183;

Shape1180.geometry = LineSet1181;

HAnimSegment1176.children[2] = Shape1180;

HAnimJoint1175.children = new MFNode();

HAnimJoint1175.children[0] = HAnimSegment1176;

HAnimJoint HAnimJoint1184 = createNode("HAnimJoint");
HAnimJoint1184.name = "l_ring3";
HAnimJoint1184.DEF = "hanim_l_ring3";
HAnimJoint1184.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint1184.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1184.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1185 = createNode("HAnimSegment");
HAnimSegment1185.name = "l_ring_distal";
HAnimSegment1185.DEF = "hanim_l_ring_distal";
//<HAnimJoint name='l_ring3'/> visualization sphere is placed within <HAnimSegment name='l_ring_distal'/>
TouchSensor TouchSensor1186 = createNode("TouchSensor");
TouchSensor1186.description = "HAnimJoint l_ring3, HAnimSegment l_ring_distal";
HAnimSegment1185.children = new MFNode();

HAnimSegment1185.children[0] = TouchSensor1186;

Transform Transform1187 = createNode("Transform");
Transform1187.translation = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
Shape Shape1188 = createNode("Shape");
Shape1188.USE = "HAnimJointShape";
Transform1187.children = new MFNode();

Transform1187.children[0] = Shape1188;

HAnimSegment1185.children[1] = Transform1187;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ring3'/> to <HAnimSite name='l_ring_distal_tip'/>
Shape Shape1189 = createNode("Shape");
LineSet LineSet1190 = createNode("LineSet");
LineSet1190.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1191 = createNode("Coordinate");
Coordinate1191.point = new MFVec3f(new float[0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756]);
LineSet1190.coord = Coordinate1191;

ColorRGBA ColorRGBA1192 = createNode("ColorRGBA");
ColorRGBA1192.USE = "HAnimSiteLineColorRGBA";
LineSet1190.color = ColorRGBA1192;

Shape1189.geometry = LineSet1190;

HAnimSegment1185.children[2] = Shape1189;

HAnimSite HAnimSite1193 = createNode("HAnimSite");
HAnimSite1193.name = "l_ring_distal_tip";
HAnimSite1193.DEF = "hanim_l_ring_distal_tip";
HAnimSite1193.translation = new SFVec3f(new float[0.2035,0.675,-0.0756]);
//HAnimSite visualization shape
TouchSensor TouchSensor1194 = createNode("TouchSensor");
TouchSensor1194.description = "HAnimSite l_ring_distal_tip";
HAnimSite1193.children = new MFNode();

HAnimSite1193.children[0] = TouchSensor1194;

Shape Shape1195 = createNode("Shape");
Shape1195.USE = "HAnimSiteShape";
HAnimSite1193.children[1] = Shape1195;

HAnimSegment1185.children[3] = HAnimSite1193;

HAnimJoint1184.children = new MFNode();

HAnimJoint1184.children[0] = HAnimSegment1185;

HAnimJoint1175.children[1] = HAnimJoint1184;

HAnimJoint1166.children[1] = HAnimJoint1175;

HAnimJoint1157.children[1] = HAnimJoint1166;

HAnimJoint984.children[4] = HAnimJoint1157;

HAnimJoint HAnimJoint1196 = createNode("HAnimJoint");
HAnimJoint1196.name = "l_pinky0";
HAnimJoint1196.DEF = "hanim_l_pinky0";
HAnimJoint1196.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimJoint1196.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1196.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1197 = createNode("HAnimSegment");
HAnimSegment1197.name = "l_pinky_metacarpal";
HAnimSegment1197.DEF = "hanim_l_pinky_metacarpal";
//<HAnimJoint name='l_pinky0'/> visualization sphere is placed within <HAnimSegment name='l_pinky_metacarpal'/>
TouchSensor TouchSensor1198 = createNode("TouchSensor");
TouchSensor1198.description = "HAnimJoint l_pinky0, HAnimSegment l_pinky_metacarpal";
HAnimSegment1197.children = new MFNode();

HAnimSegment1197.children[0] = TouchSensor1198;

Transform Transform1199 = createNode("Transform");
Transform1199.translation = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
Shape Shape1200 = createNode("Shape");
Shape1200.USE = "HAnimJointShape";
Transform1199.children = new MFNode();

Transform1199.children[0] = Shape1200;

HAnimSegment1197.children[1] = Transform1199;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky0'/> to <HAnimJoint name='l_pinky1'/>
Shape Shape1201 = createNode("Shape");
LineSet LineSet1202 = createNode("LineSet");
LineSet1202.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1203 = createNode("Coordinate");
Coordinate1203.point = new MFVec3f(new float[0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
LineSet1202.coord = Coordinate1203;

ColorRGBA ColorRGBA1204 = createNode("ColorRGBA");
ColorRGBA1204.USE = "HAnimSegmentLineColorRGBA";
LineSet1202.color = ColorRGBA1204;

Shape1201.geometry = LineSet1202;

HAnimSegment1197.children[2] = Shape1201;

HAnimJoint1196.children = new MFNode();

HAnimJoint1196.children[0] = HAnimSegment1197;

HAnimJoint HAnimJoint1205 = createNode("HAnimJoint");
HAnimJoint1205.name = "l_pinky1";
HAnimJoint1205.DEF = "hanim_l_pinky1";
HAnimJoint1205.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimJoint1205.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1205.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1206 = createNode("HAnimSegment");
HAnimSegment1206.name = "l_pinky_proximal";
HAnimSegment1206.DEF = "hanim_l_pinky_proximal";
//<HAnimJoint name='l_pinky1'/> visualization sphere is placed within <HAnimSegment name='l_pinky_proximal'/>
TouchSensor TouchSensor1207 = createNode("TouchSensor");
TouchSensor1207.description = "HAnimJoint l_pinky1, HAnimSegment l_pinky_proximal";
HAnimSegment1206.children = new MFNode();

HAnimSegment1206.children[0] = TouchSensor1207;

Transform Transform1208 = createNode("Transform");
Transform1208.translation = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
Shape Shape1209 = createNode("Shape");
Shape1209.USE = "HAnimJointShape";
Transform1208.children = new MFNode();

Transform1208.children[0] = Shape1209;

HAnimSegment1206.children[1] = Transform1208;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky1'/> to <HAnimJoint name='l_pinky2'/>
Shape Shape1210 = createNode("Shape");
LineSet LineSet1211 = createNode("LineSet");
LineSet1211.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1212 = createNode("Coordinate");
Coordinate1212.point = new MFVec3f(new float[0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
LineSet1211.coord = Coordinate1212;

ColorRGBA ColorRGBA1213 = createNode("ColorRGBA");
ColorRGBA1213.USE = "HAnimSegmentLineColorRGBA";
LineSet1211.color = ColorRGBA1213;

Shape1210.geometry = LineSet1211;

HAnimSegment1206.children[2] = Shape1210;

HAnimJoint1205.children = new MFNode();

HAnimJoint1205.children[0] = HAnimSegment1206;

HAnimJoint HAnimJoint1214 = createNode("HAnimJoint");
HAnimJoint1214.name = "l_pinky2";
HAnimJoint1214.DEF = "hanim_l_pinky2";
HAnimJoint1214.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimJoint1214.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1214.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1215 = createNode("HAnimSegment");
HAnimSegment1215.name = "l_pinky_middle";
HAnimSegment1215.DEF = "hanim_l_pinky_middle";
//<HAnimJoint name='l_pinky2'/> visualization sphere is placed within <HAnimSegment name='l_pinky_middle'/>
TouchSensor TouchSensor1216 = createNode("TouchSensor");
TouchSensor1216.description = "HAnimJoint l_pinky2, HAnimSegment l_pinky_middle";
HAnimSegment1215.children = new MFNode();

HAnimSegment1215.children[0] = TouchSensor1216;

Transform Transform1217 = createNode("Transform");
Transform1217.translation = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
Shape Shape1218 = createNode("Shape");
Shape1218.USE = "HAnimJointShape";
Transform1217.children = new MFNode();

Transform1217.children[0] = Shape1218;

HAnimSegment1215.children[1] = Transform1217;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky2'/> to <HAnimJoint name='l_pinky3'/>
Shape Shape1219 = createNode("Shape");
LineSet LineSet1220 = createNode("LineSet");
LineSet1220.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1221 = createNode("Coordinate");
Coordinate1221.point = new MFVec3f(new float[0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
LineSet1220.coord = Coordinate1221;

ColorRGBA ColorRGBA1222 = createNode("ColorRGBA");
ColorRGBA1222.USE = "HAnimSegmentLineColorRGBA";
LineSet1220.color = ColorRGBA1222;

Shape1219.geometry = LineSet1220;

HAnimSegment1215.children[2] = Shape1219;

HAnimJoint1214.children = new MFNode();

HAnimJoint1214.children[0] = HAnimSegment1215;

HAnimJoint HAnimJoint1223 = createNode("HAnimJoint");
HAnimJoint1223.name = "l_pinky3";
HAnimJoint1223.DEF = "hanim_l_pinky3";
HAnimJoint1223.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint1223.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1223.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1224 = createNode("HAnimSegment");
HAnimSegment1224.name = "l_pinky_distal";
HAnimSegment1224.DEF = "hanim_l_pinky_distal";
//<HAnimJoint name='l_pinky3'/> visualization sphere is placed within <HAnimSegment name='l_pinky_distal'/>
TouchSensor TouchSensor1225 = createNode("TouchSensor");
TouchSensor1225.description = "HAnimJoint l_pinky3, HAnimSegment l_pinky_distal";
HAnimSegment1224.children = new MFNode();

HAnimSegment1224.children[0] = TouchSensor1225;

Transform Transform1226 = createNode("Transform");
Transform1226.translation = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
Shape Shape1227 = createNode("Shape");
Shape1227.USE = "HAnimJointShape";
Transform1226.children = new MFNode();

Transform1226.children[0] = Shape1227;

HAnimSegment1224.children[1] = Transform1226;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_pinky3'/> to <HAnimSite name='l_pinky_distal_tip'/>
Shape Shape1228 = createNode("Shape");
LineSet LineSet1229 = createNode("LineSet");
LineSet1229.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1230 = createNode("Coordinate");
Coordinate1230.point = new MFVec3f(new float[0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012]);
LineSet1229.coord = Coordinate1230;

ColorRGBA ColorRGBA1231 = createNode("ColorRGBA");
ColorRGBA1231.USE = "HAnimSiteLineColorRGBA";
LineSet1229.color = ColorRGBA1231;

Shape1228.geometry = LineSet1229;

HAnimSegment1224.children[2] = Shape1228;

HAnimSite HAnimSite1232 = createNode("HAnimSite");
HAnimSite1232.name = "l_pinky_distal_tip";
HAnimSite1232.DEF = "hanim_l_pinky_distal_tip";
HAnimSite1232.translation = new SFVec3f(new float[0.2014,0.7009,-0.1012]);
//HAnimSite visualization shape
TouchSensor TouchSensor1233 = createNode("TouchSensor");
TouchSensor1233.description = "HAnimSite l_pinky_distal_tip";
HAnimSite1232.children = new MFNode();

HAnimSite1232.children[0] = TouchSensor1233;

Shape Shape1234 = createNode("Shape");
Shape1234.USE = "HAnimSiteShape";
HAnimSite1232.children[1] = Shape1234;

HAnimSegment1224.children[3] = HAnimSite1232;

HAnimJoint1223.children = new MFNode();

HAnimJoint1223.children[0] = HAnimSegment1224;

HAnimJoint1214.children[1] = HAnimJoint1223;

HAnimJoint1205.children[1] = HAnimJoint1214;

HAnimJoint1196.children[1] = HAnimJoint1205;

HAnimJoint984.children[5] = HAnimJoint1196;

HAnimJoint947.children[1] = HAnimJoint984;

HAnimJoint931.children[1] = HAnimJoint947;

HAnimJoint922.children[1] = HAnimJoint931;

HAnimJoint885.children[1] = HAnimJoint922;

HAnimJoint597.children[2] = HAnimJoint885;

HAnimJoint HAnimJoint1235 = createNode("HAnimJoint");
HAnimJoint1235.name = "r_sternoclavicular";
HAnimJoint1235.DEF = "hanim_r_sternoclavicular";
HAnimJoint1235.center = new SFVec3f(new float[-0.082,1.4488,-0.0353]);
HAnimJoint1235.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1235.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1236 = createNode("HAnimSegment");
HAnimSegment1236.name = "r_clavicle";
HAnimSegment1236.DEF = "hanim_r_clavicle";
//<HAnimJoint name='r_sternoclavicular'/> visualization sphere is placed within <HAnimSegment name='r_clavicle'/>
TouchSensor TouchSensor1237 = createNode("TouchSensor");
TouchSensor1237.description = "HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle";
HAnimSegment1236.children = new MFNode();

HAnimSegment1236.children[0] = TouchSensor1237;

Transform Transform1238 = createNode("Transform");
Transform1238.translation = new SFVec3f(new float[-0.082,1.4488,-0.0353]);
Shape Shape1239 = createNode("Shape");
Shape1239.USE = "HAnimJointShape";
Transform1238.children = new MFNode();

Transform1238.children[0] = Shape1239;

HAnimSegment1236.children[1] = Transform1238;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_sternoclavicular'/> to <HAnimJoint name='r_acromioclavicular'/>
Shape Shape1240 = createNode("Shape");
LineSet LineSet1241 = createNode("LineSet");
LineSet1241.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1242 = createNode("Coordinate");
Coordinate1242.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.0962,1.4269,-0.0424]);
LineSet1241.coord = Coordinate1242;

ColorRGBA ColorRGBA1243 = createNode("ColorRGBA");
ColorRGBA1243.USE = "HAnimSegmentLineColorRGBA";
LineSet1241.color = ColorRGBA1243;

Shape1240.geometry = LineSet1241;

HAnimSegment1236.children[2] = Shape1240;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_clavicale'/>
Shape Shape1244 = createNode("Shape");
LineSet LineSet1245 = createNode("LineSet");
LineSet1245.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1246 = createNode("Coordinate");
Coordinate1246.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.0115,1.4943,0.04]);
LineSet1245.coord = Coordinate1246;

ColorRGBA ColorRGBA1247 = createNode("ColorRGBA");
ColorRGBA1247.USE = "HAnimSiteLineColorRGBA";
LineSet1245.color = ColorRGBA1247;

Shape1244.geometry = LineSet1245;

HAnimSegment1236.children[3] = Shape1244;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_acromion'/>
Shape Shape1248 = createNode("Shape");
LineSet LineSet1249 = createNode("LineSet");
LineSet1249.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1250 = createNode("Coordinate");
Coordinate1250.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.1905,1.4791,-0.0431]);
LineSet1249.coord = Coordinate1250;

ColorRGBA ColorRGBA1251 = createNode("ColorRGBA");
ColorRGBA1251.USE = "HAnimSiteLineColorRGBA";
LineSet1249.color = ColorRGBA1251;

Shape1248.geometry = LineSet1249;

HAnimSegment1236.children[4] = Shape1248;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_ant'/>
Shape Shape1252 = createNode("Shape");
LineSet LineSet1253 = createNode("LineSet");
LineSet1253.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1254 = createNode("Coordinate");
Coordinate1254.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.1626,1.4072,-0.0031]);
LineSet1253.coord = Coordinate1254;

ColorRGBA ColorRGBA1255 = createNode("ColorRGBA");
ColorRGBA1255.USE = "HAnimSiteLineColorRGBA";
LineSet1253.color = ColorRGBA1255;

Shape1252.geometry = LineSet1253;

HAnimSegment1236.children[5] = Shape1252;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_post'/>
Shape Shape1256 = createNode("Shape");
LineSet LineSet1257 = createNode("LineSet");
LineSet1257.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1258 = createNode("Coordinate");
Coordinate1258.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.1603,1.4098,-0.0826]);
LineSet1257.coord = Coordinate1258;

ColorRGBA ColorRGBA1259 = createNode("ColorRGBA");
ColorRGBA1259.USE = "HAnimSiteLineColorRGBA";
LineSet1257.color = ColorRGBA1259;

Shape1256.geometry = LineSet1257;

HAnimSegment1236.children[6] = Shape1256;

HAnimSite HAnimSite1260 = createNode("HAnimSite");
HAnimSite1260.name = "r_clavicale_pt";
HAnimSite1260.DEF = "hanim_r_clavicale_pt";
HAnimSite1260.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
//HAnimSite visualization shape
TouchSensor TouchSensor1261 = createNode("TouchSensor");
TouchSensor1261.description = "HAnimSite r_clavicale";
HAnimSite1260.children = new MFNode();

HAnimSite1260.children[0] = TouchSensor1261;

Shape Shape1262 = createNode("Shape");
Shape1262.USE = "HAnimSiteShape";
HAnimSite1260.children[1] = Shape1262;

HAnimSegment1236.children[7] = HAnimSite1260;

HAnimSite HAnimSite1263 = createNode("HAnimSite");
HAnimSite1263.name = "r_acromion_pt";
HAnimSite1263.DEF = "hanim_r_acromion_pt";
HAnimSite1263.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
//HAnimSite visualization shape
TouchSensor TouchSensor1264 = createNode("TouchSensor");
TouchSensor1264.description = "HAnimSite r_acromion";
HAnimSite1263.children = new MFNode();

HAnimSite1263.children[0] = TouchSensor1264;

Shape Shape1265 = createNode("Shape");
Shape1265.USE = "HAnimSiteShape";
HAnimSite1263.children[1] = Shape1265;

HAnimSegment1236.children[8] = HAnimSite1263;

HAnimSite HAnimSite1266 = createNode("HAnimSite");
HAnimSite1266.name = "r_axilla_ant_pt";
HAnimSite1266.DEF = "hanim_r_axilla_ant_pt";
HAnimSite1266.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
//HAnimSite visualization shape
TouchSensor TouchSensor1267 = createNode("TouchSensor");
TouchSensor1267.description = "HAnimSite r_axilla_ant";
HAnimSite1266.children = new MFNode();

HAnimSite1266.children[0] = TouchSensor1267;

Shape Shape1268 = createNode("Shape");
Shape1268.USE = "HAnimSiteShape";
HAnimSite1266.children[1] = Shape1268;

HAnimSegment1236.children[9] = HAnimSite1266;

HAnimSite HAnimSite1269 = createNode("HAnimSite");
HAnimSite1269.name = "r_axilla_post_pt";
HAnimSite1269.DEF = "hanim_r_axilla_post_pt";
HAnimSite1269.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
//HAnimSite visualization shape
TouchSensor TouchSensor1270 = createNode("TouchSensor");
TouchSensor1270.description = "HAnimSite r_axilla_post";
HAnimSite1269.children = new MFNode();

HAnimSite1269.children[0] = TouchSensor1270;

Shape Shape1271 = createNode("Shape");
Shape1271.USE = "HAnimSiteShape";
HAnimSite1269.children[1] = Shape1271;

HAnimSegment1236.children[10] = HAnimSite1269;

HAnimJoint1235.children = new MFNode();

HAnimJoint1235.children[0] = HAnimSegment1236;

HAnimJoint HAnimJoint1272 = createNode("HAnimJoint");
HAnimJoint1272.name = "r_acromioclavicular";
HAnimJoint1272.DEF = "hanim_r_acromioclavicular";
HAnimJoint1272.center = new SFVec3f(new float[-0.0962,1.4269,-0.0424]);
HAnimJoint1272.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1272.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1273 = createNode("HAnimSegment");
HAnimSegment1273.name = "r_scapula";
HAnimSegment1273.DEF = "hanim_r_scapula";
//<HAnimJoint name='r_acromioclavicular'/> visualization sphere is placed within <HAnimSegment name='r_scapula'/>
TouchSensor TouchSensor1274 = createNode("TouchSensor");
TouchSensor1274.description = "HAnimJoint r_acromioclavicular, HAnimSegment r_scapula";
HAnimSegment1273.children = new MFNode();

HAnimSegment1273.children[0] = TouchSensor1274;

Transform Transform1275 = createNode("Transform");
Transform1275.translation = new SFVec3f(new float[-0.0962,1.4269,-0.0424]);
Shape Shape1276 = createNode("Shape");
Shape1276.USE = "HAnimJointShape";
Transform1275.children = new MFNode();

Transform1275.children[0] = Shape1276;

HAnimSegment1273.children[1] = Transform1275;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_acromioclavicular'/> to <HAnimJoint name='r_shoulder'/>
Shape Shape1277 = createNode("Shape");
LineSet LineSet1278 = createNode("LineSet");
LineSet1278.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1279 = createNode("Coordinate");
Coordinate1279.point = new MFVec3f(new float[-0.0962,1.4269,-0.0424,-0.2029,1.4376,-0.0387]);
LineSet1278.coord = Coordinate1279;

ColorRGBA ColorRGBA1280 = createNode("ColorRGBA");
ColorRGBA1280.USE = "HAnimSegmentLineColorRGBA";
LineSet1278.color = ColorRGBA1280;

Shape1277.geometry = LineSet1278;

HAnimSegment1273.children[2] = Shape1277;

HAnimJoint1272.children = new MFNode();

HAnimJoint1272.children[0] = HAnimSegment1273;

HAnimJoint HAnimJoint1281 = createNode("HAnimJoint");
HAnimJoint1281.name = "r_shoulder";
HAnimJoint1281.DEF = "hanim_r_shoulder";
HAnimJoint1281.center = new SFVec3f(new float[-0.2029,1.4376,-0.0387]);
HAnimJoint1281.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1281.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1282 = createNode("HAnimSegment");
HAnimSegment1282.name = "r_upperarm";
HAnimSegment1282.DEF = "hanim_r_upperarm";
//<HAnimJoint name='r_shoulder'/> visualization sphere is placed within <HAnimSegment name='r_upperarm'/>
TouchSensor TouchSensor1283 = createNode("TouchSensor");
TouchSensor1283.description = "HAnimJoint r_shoulder, HAnimSegment r_upperarm";
HAnimSegment1282.children = new MFNode();

HAnimSegment1282.children[0] = TouchSensor1283;

Transform Transform1284 = createNode("Transform");
Transform1284.translation = new SFVec3f(new float[-0.2029,1.4376,-0.0387]);
Shape Shape1285 = createNode("Shape");
Shape1285.USE = "HAnimJointShape";
Transform1284.children = new MFNode();

Transform1284.children[0] = Shape1285;

HAnimSegment1282.children[1] = Transform1284;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_shoulder'/> to <HAnimJoint name='r_elbow'/>
Shape Shape1286 = createNode("Shape");
LineSet LineSet1287 = createNode("LineSet");
LineSet1287.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1288 = createNode("Coordinate");
Coordinate1288.point = new MFVec3f(new float[-0.2029,1.4376,-0.0387,-0.2014,1.1357,-0.0682]);
LineSet1287.coord = Coordinate1288;

ColorRGBA ColorRGBA1289 = createNode("ColorRGBA");
ColorRGBA1289.USE = "HAnimSegmentLineColorRGBA";
LineSet1287.color = ColorRGBA1289;

Shape1286.geometry = LineSet1287;

HAnimSegment1282.children[2] = Shape1286;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_shoulder'/> to <HAnimSite name='r_humeral_lateral_epicn'/>
Shape Shape1290 = createNode("Shape");
LineSet LineSet1291 = createNode("LineSet");
LineSet1291.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1292 = createNode("Coordinate");
Coordinate1292.point = new MFVec3f(new float[-0.2029,1.4376,-0.0387,-0.2224,1.1517,-0.1033]);
LineSet1291.coord = Coordinate1292;

ColorRGBA ColorRGBA1293 = createNode("ColorRGBA");
ColorRGBA1293.USE = "HAnimSiteLineColorRGBA";
LineSet1291.color = ColorRGBA1293;

Shape1290.geometry = LineSet1291;

HAnimSegment1282.children[3] = Shape1290;

HAnimSite HAnimSite1294 = createNode("HAnimSite");
HAnimSite1294.name = "r_humeral_lateral_epicn_pt";
HAnimSite1294.DEF = "hanim_r_humeral_lateral_epicn_pt";
HAnimSite1294.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
//HAnimSite visualization shape
TouchSensor TouchSensor1295 = createNode("TouchSensor");
TouchSensor1295.description = "HAnimSite r_humeral_lateral_epicn";
HAnimSite1294.children = new MFNode();

HAnimSite1294.children[0] = TouchSensor1295;

Shape Shape1296 = createNode("Shape");
Shape1296.USE = "HAnimSiteShape";
HAnimSite1294.children[1] = Shape1296;

HAnimSegment1282.children[4] = HAnimSite1294;

HAnimJoint1281.children = new MFNode();

HAnimJoint1281.children[0] = HAnimSegment1282;

HAnimJoint HAnimJoint1297 = createNode("HAnimJoint");
HAnimJoint1297.name = "r_elbow";
HAnimJoint1297.DEF = "hanim_r_elbow";
HAnimJoint1297.center = new SFVec3f(new float[-0.2014,1.1357,-0.0682]);
HAnimJoint1297.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1297.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1298 = createNode("HAnimSegment");
HAnimSegment1298.name = "r_forearm";
HAnimSegment1298.DEF = "hanim_r_forearm";
//<HAnimJoint name='r_elbow'/> visualization sphere is placed within <HAnimSegment name='r_forearm'/>
TouchSensor TouchSensor1299 = createNode("TouchSensor");
TouchSensor1299.description = "HAnimJoint r_elbow, HAnimSegment r_forearm";
HAnimSegment1298.children = new MFNode();

HAnimSegment1298.children[0] = TouchSensor1299;

Transform Transform1300 = createNode("Transform");
Transform1300.translation = new SFVec3f(new float[-0.2014,1.1357,-0.0682]);
Shape Shape1301 = createNode("Shape");
Shape1301.USE = "HAnimJointShape";
Transform1300.children = new MFNode();

Transform1300.children[0] = Shape1301;

HAnimSegment1298.children[1] = Transform1300;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_elbow'/> to <HAnimJoint name='r_wrist'/>
Shape Shape1302 = createNode("Shape");
LineSet LineSet1303 = createNode("LineSet");
LineSet1303.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1304 = createNode("Coordinate");
Coordinate1304.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.1984,0.8663,-0.0583]);
LineSet1303.coord = Coordinate1304;

ColorRGBA ColorRGBA1305 = createNode("ColorRGBA");
ColorRGBA1305.USE = "HAnimSegmentLineColorRGBA";
LineSet1303.color = ColorRGBA1305;

Shape1302.geometry = LineSet1303;

HAnimSegment1298.children[2] = Shape1302;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radial_styloid'/>
Shape Shape1306 = createNode("Shape");
LineSet LineSet1307 = createNode("LineSet");
LineSet1307.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1308 = createNode("Coordinate");
Coordinate1308.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.1884,0.8676,-0.036]);
LineSet1307.coord = Coordinate1308;

ColorRGBA ColorRGBA1309 = createNode("ColorRGBA");
ColorRGBA1309.USE = "HAnimSiteLineColorRGBA";
LineSet1307.color = ColorRGBA1309;

Shape1306.geometry = LineSet1307;

HAnimSegment1298.children[3] = Shape1306;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_olecranon'/>
Shape Shape1310 = createNode("Shape");
LineSet LineSet1311 = createNode("LineSet");
LineSet1311.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1312 = createNode("Coordinate");
Coordinate1312.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.1907,1.1405,-0.1065]);
LineSet1311.coord = Coordinate1312;

ColorRGBA ColorRGBA1313 = createNode("ColorRGBA");
ColorRGBA1313.USE = "HAnimSiteLineColorRGBA";
LineSet1311.color = ColorRGBA1313;

Shape1310.geometry = LineSet1311;

HAnimSegment1298.children[4] = Shape1310;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_humeral_medial_epicn'/>
Shape Shape1314 = createNode("Shape");
LineSet LineSet1315 = createNode("LineSet");
LineSet1315.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1316 = createNode("Coordinate");
Coordinate1316.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.168,1.1298,-0.1062]);
LineSet1315.coord = Coordinate1316;

ColorRGBA ColorRGBA1317 = createNode("ColorRGBA");
ColorRGBA1317.USE = "HAnimSiteLineColorRGBA";
LineSet1315.color = ColorRGBA1317;

Shape1314.geometry = LineSet1315;

HAnimSegment1298.children[5] = Shape1314;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radiale'/>
Shape Shape1318 = createNode("Shape");
LineSet LineSet1319 = createNode("LineSet");
LineSet1319.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1320 = createNode("Coordinate");
Coordinate1320.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.213,1.1305,-0.1091]);
LineSet1319.coord = Coordinate1320;

ColorRGBA ColorRGBA1321 = createNode("ColorRGBA");
ColorRGBA1321.USE = "HAnimSiteLineColorRGBA";
LineSet1319.color = ColorRGBA1321;

Shape1318.geometry = LineSet1319;

HAnimSegment1298.children[6] = Shape1318;

HAnimSite HAnimSite1322 = createNode("HAnimSite");
HAnimSite1322.name = "r_radial_styloid_pt";
HAnimSite1322.DEF = "hanim_r_radial_styloid_pt";
HAnimSite1322.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
//HAnimSite visualization shape
TouchSensor TouchSensor1323 = createNode("TouchSensor");
TouchSensor1323.description = "HAnimSite r_radial_styloid";
HAnimSite1322.children = new MFNode();

HAnimSite1322.children[0] = TouchSensor1323;

Shape Shape1324 = createNode("Shape");
Shape1324.USE = "HAnimSiteShape";
HAnimSite1322.children[1] = Shape1324;

HAnimSegment1298.children[7] = HAnimSite1322;

HAnimSite HAnimSite1325 = createNode("HAnimSite");
HAnimSite1325.name = "r_olecranon_pt";
HAnimSite1325.DEF = "hanim_r_olecranon_pt";
HAnimSite1325.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
//HAnimSite visualization shape
TouchSensor TouchSensor1326 = createNode("TouchSensor");
TouchSensor1326.description = "HAnimSite r_olecranon";
HAnimSite1325.children = new MFNode();

HAnimSite1325.children[0] = TouchSensor1326;

Shape Shape1327 = createNode("Shape");
Shape1327.USE = "HAnimSiteShape";
HAnimSite1325.children[1] = Shape1327;

HAnimSegment1298.children[8] = HAnimSite1325;

HAnimSite HAnimSite1328 = createNode("HAnimSite");
HAnimSite1328.name = "r_humeral_medial_epicn_pt";
HAnimSite1328.DEF = "hanim_r_humeral_medial_epicn_pt";
HAnimSite1328.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
//HAnimSite visualization shape
TouchSensor TouchSensor1329 = createNode("TouchSensor");
TouchSensor1329.description = "HAnimSite r_humeral_medial_epicn";
HAnimSite1328.children = new MFNode();

HAnimSite1328.children[0] = TouchSensor1329;

Shape Shape1330 = createNode("Shape");
Shape1330.USE = "HAnimSiteShape";
HAnimSite1328.children[1] = Shape1330;

HAnimSegment1298.children[9] = HAnimSite1328;

HAnimSite HAnimSite1331 = createNode("HAnimSite");
HAnimSite1331.name = "r_radiale_pt";
HAnimSite1331.DEF = "hanim_r_radiale_pt";
HAnimSite1331.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
//HAnimSite visualization shape
TouchSensor TouchSensor1332 = createNode("TouchSensor");
TouchSensor1332.description = "HAnimSite r_radiale";
HAnimSite1331.children = new MFNode();

HAnimSite1331.children[0] = TouchSensor1332;

Shape Shape1333 = createNode("Shape");
Shape1333.USE = "HAnimSiteShape";
HAnimSite1331.children[1] = Shape1333;

HAnimSegment1298.children[10] = HAnimSite1331;

HAnimJoint1297.children = new MFNode();

HAnimJoint1297.children[0] = HAnimSegment1298;

HAnimJoint HAnimJoint1334 = createNode("HAnimJoint");
HAnimJoint1334.name = "r_wrist";
HAnimJoint1334.DEF = "hanim_r_wrist";
HAnimJoint1334.center = new SFVec3f(new float[-0.1984,0.8663,-0.0583]);
HAnimJoint1334.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1334.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1335 = createNode("HAnimSegment");
HAnimSegment1335.name = "r_hand";
HAnimSegment1335.DEF = "hanim_r_hand";
//<HAnimJoint name='r_wrist'/> visualization sphere is placed within <HAnimSegment name='r_hand'/>
TouchSensor TouchSensor1336 = createNode("TouchSensor");
TouchSensor1336.description = "HAnimJoint r_wrist, HAnimSegment r_hand";
HAnimSegment1335.children = new MFNode();

HAnimSegment1335.children[0] = TouchSensor1336;

Transform Transform1337 = createNode("Transform");
Transform1337.translation = new SFVec3f(new float[-0.1984,0.8663,-0.0583]);
Shape Shape1338 = createNode("Shape");
Shape1338.USE = "HAnimJointShape";
Transform1337.children = new MFNode();

Transform1337.children[0] = Shape1338;

HAnimSegment1335.children[1] = Transform1337;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_thumb1'/>
Shape Shape1339 = createNode("Shape");
LineSet LineSet1340 = createNode("LineSet");
LineSet1340.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1341 = createNode("Coordinate");
Coordinate1341.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1924,0.8472,-0.0534]);
LineSet1340.coord = Coordinate1341;

ColorRGBA ColorRGBA1342 = createNode("ColorRGBA");
ColorRGBA1342.USE = "HAnimSegmentLineColorRGBA";
LineSet1340.color = ColorRGBA1342;

Shape1339.geometry = LineSet1340;

HAnimSegment1335.children[2] = Shape1339;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_index0'/>
Shape Shape1343 = createNode("Shape");
LineSet LineSet1344 = createNode("LineSet");
LineSet1344.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1345 = createNode("Coordinate");
Coordinate1345.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1983,0.8024,-0.028]);
LineSet1344.coord = Coordinate1345;

ColorRGBA ColorRGBA1346 = createNode("ColorRGBA");
ColorRGBA1346.USE = "HAnimSegmentLineColorRGBA";
LineSet1344.color = ColorRGBA1346;

Shape1343.geometry = LineSet1344;

HAnimSegment1335.children[3] = Shape1343;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_middle0'/>
Shape Shape1347 = createNode("Shape");
LineSet LineSet1348 = createNode("LineSet");
LineSet1348.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1349 = createNode("Coordinate");
Coordinate1349.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1987,0.8029,-0.053]);
LineSet1348.coord = Coordinate1349;

ColorRGBA ColorRGBA1350 = createNode("ColorRGBA");
ColorRGBA1350.USE = "HAnimSegmentLineColorRGBA";
LineSet1348.color = ColorRGBA1350;

Shape1347.geometry = LineSet1348;

HAnimSegment1335.children[4] = Shape1347;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_ring0'/>
Shape Shape1351 = createNode("Shape");
LineSet LineSet1352 = createNode("LineSet");
LineSet1352.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1353 = createNode("Coordinate");
Coordinate1353.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1956,0.8019,-0.0794]);
LineSet1352.coord = Coordinate1353;

ColorRGBA ColorRGBA1354 = createNode("ColorRGBA");
ColorRGBA1354.USE = "HAnimSegmentLineColorRGBA";
LineSet1352.color = ColorRGBA1354;

Shape1351.geometry = LineSet1352;

HAnimSegment1335.children[5] = Shape1351;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_pinky0'/>
Shape Shape1355 = createNode("Shape");
LineSet LineSet1356 = createNode("LineSet");
LineSet1356.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1357 = createNode("Coordinate");
Coordinate1357.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1925,0.8066,-0.1036]);
LineSet1356.coord = Coordinate1357;

ColorRGBA ColorRGBA1358 = createNode("ColorRGBA");
ColorRGBA1358.USE = "HAnimSegmentLineColorRGBA";
LineSet1356.color = ColorRGBA1358;

Shape1355.geometry = LineSet1356;

HAnimSegment1335.children[6] = Shape1355;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_metacarpal_pha2'/>
Shape Shape1359 = createNode("Shape");
LineSet LineSet1360 = createNode("LineSet");
LineSet1360.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1361 = createNode("Coordinate");
Coordinate1361.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1977,0.8169,-0.0177]);
LineSet1360.coord = Coordinate1361;

ColorRGBA ColorRGBA1362 = createNode("ColorRGBA");
ColorRGBA1362.USE = "HAnimSiteLineColorRGBA";
LineSet1360.color = ColorRGBA1362;

Shape1359.geometry = LineSet1360;

HAnimSegment1335.children[7] = Shape1359;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_ulnar_styloid'/>
Shape Shape1363 = createNode("Shape");
LineSet LineSet1364 = createNode("LineSet");
LineSet1364.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1365 = createNode("Coordinate");
Coordinate1365.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.2117,0.8562,-0.0584]);
LineSet1364.coord = Coordinate1365;

ColorRGBA ColorRGBA1366 = createNode("ColorRGBA");
ColorRGBA1366.USE = "HAnimSiteLineColorRGBA";
LineSet1364.color = ColorRGBA1366;

Shape1363.geometry = LineSet1364;

HAnimSegment1335.children[8] = Shape1363;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_metacarpal_pha5'/>
Shape Shape1367 = createNode("Shape");
LineSet LineSet1368 = createNode("LineSet");
LineSet1368.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1369 = createNode("Coordinate");
Coordinate1369.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1929,0.789,-0.1064]);
LineSet1368.coord = Coordinate1369;

ColorRGBA ColorRGBA1370 = createNode("ColorRGBA");
ColorRGBA1370.USE = "HAnimSiteLineColorRGBA";
LineSet1368.color = ColorRGBA1370;

Shape1367.geometry = LineSet1368;

HAnimSegment1335.children[9] = Shape1367;

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_hand_front_view'/>
Shape Shape1371 = createNode("Shape");
LineSet LineSet1372 = createNode("LineSet");
LineSet1372.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1373 = createNode("Coordinate");
Coordinate1373.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.3,0.75,0.45]);
LineSet1372.coord = Coordinate1373;

ColorRGBA ColorRGBA1374 = createNode("ColorRGBA");
ColorRGBA1374.USE = "HAnimSiteViewpointLineColorRGBA";
LineSet1372.color = ColorRGBA1374;

Shape1371.geometry = LineSet1372;

HAnimSegment1335.children[10] = Shape1371;

HAnimSite HAnimSite1375 = createNode("HAnimSite");
HAnimSite1375.name = "r_metacarpal_pha2_pt";
HAnimSite1375.DEF = "hanim_r_metacarpal_pha2_pt";
HAnimSite1375.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
//HAnimSite visualization shape
TouchSensor TouchSensor1376 = createNode("TouchSensor");
TouchSensor1376.description = "HAnimSite r_metacarpal_pha2";
HAnimSite1375.children = new MFNode();

HAnimSite1375.children[0] = TouchSensor1376;

Shape Shape1377 = createNode("Shape");
Shape1377.USE = "HAnimSiteShape";
HAnimSite1375.children[1] = Shape1377;

HAnimSegment1335.children[11] = HAnimSite1375;

HAnimSite HAnimSite1378 = createNode("HAnimSite");
HAnimSite1378.name = "r_ulnar_styloid_pt";
HAnimSite1378.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite1378.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
//HAnimSite visualization shape
TouchSensor TouchSensor1379 = createNode("TouchSensor");
TouchSensor1379.description = "HAnimSite r_ulnar_styloid";
HAnimSite1378.children = new MFNode();

HAnimSite1378.children[0] = TouchSensor1379;

Shape Shape1380 = createNode("Shape");
Shape1380.USE = "HAnimSiteShape";
HAnimSite1378.children[1] = Shape1380;

HAnimSegment1335.children[12] = HAnimSite1378;

HAnimSite HAnimSite1381 = createNode("HAnimSite");
HAnimSite1381.name = "r_metacarpal_pha5_pt";
HAnimSite1381.DEF = "hanim_r_metacarpal_pha5_pt";
HAnimSite1381.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
//HAnimSite visualization shape
TouchSensor TouchSensor1382 = createNode("TouchSensor");
TouchSensor1382.description = "HAnimSite r_metacarpal_pha5";
HAnimSite1381.children = new MFNode();

HAnimSite1381.children[0] = TouchSensor1382;

Shape Shape1383 = createNode("Shape");
Shape1383.USE = "HAnimSiteShape";
HAnimSite1381.children[1] = Shape1383;

HAnimSegment1335.children[13] = HAnimSite1381;

HAnimSite HAnimSite1384 = createNode("HAnimSite");
HAnimSite1384.name = "r_hand_front_view";
HAnimSite1384.DEF = "hanim_r_hand_front_view";
HAnimSite1384.translation = new SFVec3f(new float[-0.3,0.75,0.45]);
//HAnimSite visualization shape
TouchSensor TouchSensor1385 = createNode("TouchSensor");
TouchSensor1385.description = "HAnimSite r_hand_front_view";
HAnimSite1384.children = new MFNode();

HAnimSite1384.children[0] = TouchSensor1385;

Shape Shape1386 = createNode("Shape");
Shape1386.USE = "HAnimSiteShape";
HAnimSite1384.children[1] = Shape1386;

Viewpoint Viewpoint1387 = createNode("Viewpoint");
Viewpoint1387.DEF = "hanim_r_hand_front_viewpoint";
Viewpoint1387.centerOfRotation = new SFVec3f(new float[0,0.7,0]);
Viewpoint1387.description = "right hand front";
Viewpoint1387.position = new SFVec3f(new float[0,0,0]);
HAnimSite1384.children[2] = Viewpoint1387;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1388 = createNode("Anchor");
Anchor1388.description = "HAnimSite hanim_r_hand_front_view Viewpoint";
Anchor1388.url = new MFString(new java.lang.String["#hanim_r_hand_front_viewpoint"]);
LOD LOD1389 = createNode("LOD");
LOD1389.forceTransitions = True;
LOD1389.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1390 = createNode("WorldInfo");
WorldInfo1390.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1389.children = new MFNode();

LOD1389.children[0] = WorldInfo1390;

Shape Shape1391 = createNode("Shape");
Shape1391.USE = "HAnimSiteViewpointShape";
LOD1389.children[1] = Shape1391;

Anchor1388.children = new MFNode();

Anchor1388.children[0] = LOD1389;

HAnimSite1384.children[3] = Anchor1388;

HAnimSegment1335.children[14] = HAnimSite1384;

HAnimJoint1334.children = new MFNode();

HAnimJoint1334.children[0] = HAnimSegment1335;

HAnimJoint HAnimJoint1392 = createNode("HAnimJoint");
HAnimJoint1392.name = "r_thumb1";
HAnimJoint1392.DEF = "hanim_r_thumb1";
HAnimJoint1392.center = new SFVec3f(new float[-0.1924,0.8472,-0.0534]);
HAnimJoint1392.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1392.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1393 = createNode("HAnimSegment");
HAnimSegment1393.name = "r_thumb_metacarpal";
HAnimSegment1393.DEF = "hanim_r_thumb_metacarpal";
//<HAnimJoint name='r_thumb1'/> visualization sphere is placed within <HAnimSegment name='r_thumb_metacarpal'/>
TouchSensor TouchSensor1394 = createNode("TouchSensor");
TouchSensor1394.description = "HAnimJoint r_thumb1, HAnimSegment r_thumb_metacarpal";
HAnimSegment1393.children = new MFNode();

HAnimSegment1393.children[0] = TouchSensor1394;

Transform Transform1395 = createNode("Transform");
Transform1395.translation = new SFVec3f(new float[-0.1924,0.8472,-0.0534]);
Shape Shape1396 = createNode("Shape");
Shape1396.USE = "HAnimJointShape";
Transform1395.children = new MFNode();

Transform1395.children[0] = Shape1396;

HAnimSegment1393.children[1] = Transform1395;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_thumb1'/> to <HAnimJoint name='r_thumb2'/>
Shape Shape1397 = createNode("Shape");
LineSet LineSet1398 = createNode("LineSet");
LineSet1398.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1399 = createNode("Coordinate");
Coordinate1399.point = new MFVec3f(new float[-0.1924,0.8472,-0.0534,-0.1951,0.8226,0.0246]);
LineSet1398.coord = Coordinate1399;

ColorRGBA ColorRGBA1400 = createNode("ColorRGBA");
ColorRGBA1400.USE = "HAnimSegmentLineColorRGBA";
LineSet1398.color = ColorRGBA1400;

Shape1397.geometry = LineSet1398;

HAnimSegment1393.children[2] = Shape1397;

HAnimJoint1392.children = new MFNode();

HAnimJoint1392.children[0] = HAnimSegment1393;

HAnimJoint HAnimJoint1401 = createNode("HAnimJoint");
HAnimJoint1401.name = "r_thumb2";
HAnimJoint1401.DEF = "hanim_r_thumb2";
HAnimJoint1401.center = new SFVec3f(new float[-0.1951,0.8226,0.0246]);
HAnimJoint1401.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1401.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1402 = createNode("HAnimSegment");
HAnimSegment1402.name = "r_thumb_proximal";
HAnimSegment1402.DEF = "hanim_r_thumb_proximal";
//<HAnimJoint name='r_thumb2'/> visualization sphere is placed within <HAnimSegment name='r_thumb_proximal'/>
TouchSensor TouchSensor1403 = createNode("TouchSensor");
TouchSensor1403.description = "HAnimJoint r_thumb2, HAnimSegment r_thumb_proximal";
HAnimSegment1402.children = new MFNode();

HAnimSegment1402.children[0] = TouchSensor1403;

Transform Transform1404 = createNode("Transform");
Transform1404.translation = new SFVec3f(new float[-0.1951,0.8226,0.0246]);
Shape Shape1405 = createNode("Shape");
Shape1405.USE = "HAnimJointShape";
Transform1404.children = new MFNode();

Transform1404.children[0] = Shape1405;

HAnimSegment1402.children[1] = Transform1404;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_thumb2'/> to <HAnimJoint name='r_thumb3'/>
Shape Shape1406 = createNode("Shape");
LineSet LineSet1407 = createNode("LineSet");
LineSet1407.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1408 = createNode("Coordinate");
Coordinate1408.point = new MFVec3f(new float[-0.1951,0.8226,0.0246,-0.1955,0.8159,0.0464]);
LineSet1407.coord = Coordinate1408;

ColorRGBA ColorRGBA1409 = createNode("ColorRGBA");
ColorRGBA1409.USE = "HAnimSegmentLineColorRGBA";
LineSet1407.color = ColorRGBA1409;

Shape1406.geometry = LineSet1407;

HAnimSegment1402.children[2] = Shape1406;

HAnimJoint1401.children = new MFNode();

HAnimJoint1401.children[0] = HAnimSegment1402;

HAnimJoint HAnimJoint1410 = createNode("HAnimJoint");
HAnimJoint1410.name = "r_thumb3";
HAnimJoint1410.DEF = "hanim_r_thumb3";
HAnimJoint1410.center = new SFVec3f(new float[-0.1955,0.8159,0.0464]);
HAnimJoint1410.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1410.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1411 = createNode("HAnimSegment");
HAnimSegment1411.name = "r_thumb_distal";
HAnimSegment1411.DEF = "hanim_r_thumb_distal";
//<HAnimJoint name='r_thumb3'/> visualization sphere is placed within <HAnimSegment name='r_thumb_distal'/>
TouchSensor TouchSensor1412 = createNode("TouchSensor");
TouchSensor1412.description = "HAnimJoint r_thumb3, HAnimSegment r_thumb_distal";
HAnimSegment1411.children = new MFNode();

HAnimSegment1411.children[0] = TouchSensor1412;

Transform Transform1413 = createNode("Transform");
Transform1413.translation = new SFVec3f(new float[-0.1955,0.8159,0.0464]);
Shape Shape1414 = createNode("Shape");
Shape1414.USE = "HAnimJointShape";
Transform1413.children = new MFNode();

Transform1413.children[0] = Shape1414;

HAnimSegment1411.children[1] = Transform1413;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_thumb3'/> to <HAnimSite name='r_thumb_distal_tip'/>
Shape Shape1415 = createNode("Shape");
LineSet LineSet1416 = createNode("LineSet");
LineSet1416.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1417 = createNode("Coordinate");
Coordinate1417.point = new MFVec3f(new float[-0.1955,0.8159,0.0464,-0.1869,0.809,0.082]);
LineSet1416.coord = Coordinate1417;

ColorRGBA ColorRGBA1418 = createNode("ColorRGBA");
ColorRGBA1418.USE = "HAnimSiteLineColorRGBA";
LineSet1416.color = ColorRGBA1418;

Shape1415.geometry = LineSet1416;

HAnimSegment1411.children[2] = Shape1415;

HAnimSite HAnimSite1419 = createNode("HAnimSite");
HAnimSite1419.name = "r_thumb_distal_tip";
HAnimSite1419.DEF = "hanim_r_thumb_distal_tip";
HAnimSite1419.translation = new SFVec3f(new float[-0.1869,0.809,0.082]);
//HAnimSite visualization shape
TouchSensor TouchSensor1420 = createNode("TouchSensor");
TouchSensor1420.description = "HAnimSite r_thumb_distal_tip";
HAnimSite1419.children = new MFNode();

HAnimSite1419.children[0] = TouchSensor1420;

Shape Shape1421 = createNode("Shape");
Shape1421.USE = "HAnimSiteShape";
HAnimSite1419.children[1] = Shape1421;

HAnimSegment1411.children[3] = HAnimSite1419;

HAnimJoint1410.children = new MFNode();

HAnimJoint1410.children[0] = HAnimSegment1411;

HAnimJoint1401.children[1] = HAnimJoint1410;

HAnimJoint1392.children[1] = HAnimJoint1401;

HAnimJoint1334.children[1] = HAnimJoint1392;

HAnimJoint HAnimJoint1422 = createNode("HAnimJoint");
HAnimJoint1422.name = "r_index0";
HAnimJoint1422.DEF = "hanim_r_index0";
HAnimJoint1422.center = new SFVec3f(new float[-0.1983,0.8024,-0.028]);
HAnimJoint1422.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1422.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1423 = createNode("HAnimSegment");
HAnimSegment1423.name = "r_index_metacarpal";
HAnimSegment1423.DEF = "hanim_r_index_metacarpal";
//<HAnimJoint name='r_index0'/> visualization sphere is placed within <HAnimSegment name='r_index_metacarpal'/>
TouchSensor TouchSensor1424 = createNode("TouchSensor");
TouchSensor1424.description = "HAnimJoint r_index0, HAnimSegment r_index_metacarpal";
HAnimSegment1423.children = new MFNode();

HAnimSegment1423.children[0] = TouchSensor1424;

Transform Transform1425 = createNode("Transform");
Transform1425.translation = new SFVec3f(new float[-0.1983,0.8024,-0.028]);
Shape Shape1426 = createNode("Shape");
Shape1426.USE = "HAnimJointShape";
Transform1425.children = new MFNode();

Transform1425.children[0] = Shape1426;

HAnimSegment1423.children[1] = Transform1425;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_index0'/> to <HAnimJoint name='r_index1'/>
Shape Shape1427 = createNode("Shape");
LineSet LineSet1428 = createNode("LineSet");
LineSet1428.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1429 = createNode("Coordinate");
Coordinate1429.point = new MFVec3f(new float[-0.1983,0.8024,-0.028,-0.1983,0.7815,-0.028]);
LineSet1428.coord = Coordinate1429;

ColorRGBA ColorRGBA1430 = createNode("ColorRGBA");
ColorRGBA1430.USE = "HAnimSegmentLineColorRGBA";
LineSet1428.color = ColorRGBA1430;

Shape1427.geometry = LineSet1428;

HAnimSegment1423.children[2] = Shape1427;

HAnimJoint1422.children = new MFNode();

HAnimJoint1422.children[0] = HAnimSegment1423;

HAnimJoint HAnimJoint1431 = createNode("HAnimJoint");
HAnimJoint1431.name = "r_index1";
HAnimJoint1431.DEF = "hanim_r_index1";
HAnimJoint1431.center = new SFVec3f(new float[-0.1983,0.7815,-0.028]);
HAnimJoint1431.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1431.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1432 = createNode("HAnimSegment");
HAnimSegment1432.name = "r_index_proximal";
HAnimSegment1432.DEF = "hanim_r_index_proximal";
//<HAnimJoint name='r_index1'/> visualization sphere is placed within <HAnimSegment name='r_index_proximal'/>
TouchSensor TouchSensor1433 = createNode("TouchSensor");
TouchSensor1433.description = "HAnimJoint r_index1, HAnimSegment r_index_proximal";
HAnimSegment1432.children = new MFNode();

HAnimSegment1432.children[0] = TouchSensor1433;

Transform Transform1434 = createNode("Transform");
Transform1434.translation = new SFVec3f(new float[-0.1983,0.7815,-0.028]);
Shape Shape1435 = createNode("Shape");
Shape1435.USE = "HAnimJointShape";
Transform1434.children = new MFNode();

Transform1434.children[0] = Shape1435;

HAnimSegment1432.children[1] = Transform1434;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_index1'/> to <HAnimJoint name='r_index2'/>
Shape Shape1436 = createNode("Shape");
LineSet LineSet1437 = createNode("LineSet");
LineSet1437.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1438 = createNode("Coordinate");
Coordinate1438.point = new MFVec3f(new float[-0.1983,0.7815,-0.028,-0.2017,0.7363,-0.0248]);
LineSet1437.coord = Coordinate1438;

ColorRGBA ColorRGBA1439 = createNode("ColorRGBA");
ColorRGBA1439.USE = "HAnimSegmentLineColorRGBA";
LineSet1437.color = ColorRGBA1439;

Shape1436.geometry = LineSet1437;

HAnimSegment1432.children[2] = Shape1436;

HAnimJoint1431.children = new MFNode();

HAnimJoint1431.children[0] = HAnimSegment1432;

HAnimJoint HAnimJoint1440 = createNode("HAnimJoint");
HAnimJoint1440.name = "r_index2";
HAnimJoint1440.DEF = "hanim_r_index2";
HAnimJoint1440.center = new SFVec3f(new float[-0.2017,0.7363,-0.0248]);
HAnimJoint1440.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1440.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1441 = createNode("HAnimSegment");
HAnimSegment1441.name = "r_index_middle";
HAnimSegment1441.DEF = "hanim_r_index_middle";
//<HAnimJoint name='r_index2'/> visualization sphere is placed within <HAnimSegment name='r_index_middle'/>
TouchSensor TouchSensor1442 = createNode("TouchSensor");
TouchSensor1442.description = "HAnimJoint r_index2, HAnimSegment r_index_middle";
HAnimSegment1441.children = new MFNode();

HAnimSegment1441.children[0] = TouchSensor1442;

Transform Transform1443 = createNode("Transform");
Transform1443.translation = new SFVec3f(new float[-0.2017,0.7363,-0.0248]);
Shape Shape1444 = createNode("Shape");
Shape1444.USE = "HAnimJointShape";
Transform1443.children = new MFNode();

Transform1443.children[0] = Shape1444;

HAnimSegment1441.children[1] = Transform1443;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_index2'/> to <HAnimJoint name='r_index3'/>
Shape Shape1445 = createNode("Shape");
LineSet LineSet1446 = createNode("LineSet");
LineSet1446.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1447 = createNode("Coordinate");
Coordinate1447.point = new MFVec3f(new float[-0.2017,0.7363,-0.0248,-0.2028,0.7139,-0.0236]);
LineSet1446.coord = Coordinate1447;

ColorRGBA ColorRGBA1448 = createNode("ColorRGBA");
ColorRGBA1448.USE = "HAnimSegmentLineColorRGBA";
LineSet1446.color = ColorRGBA1448;

Shape1445.geometry = LineSet1446;

HAnimSegment1441.children[2] = Shape1445;

HAnimJoint1440.children = new MFNode();

HAnimJoint1440.children[0] = HAnimSegment1441;

HAnimJoint HAnimJoint1449 = createNode("HAnimJoint");
HAnimJoint1449.name = "r_index3";
HAnimJoint1449.DEF = "hanim_r_index3";
HAnimJoint1449.center = new SFVec3f(new float[-0.2028,0.7139,-0.0236]);
HAnimJoint1449.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1449.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1450 = createNode("HAnimSegment");
HAnimSegment1450.name = "r_index_distal";
HAnimSegment1450.DEF = "hanim_r_index_distal";
//<HAnimJoint name='r_index3'/> visualization sphere is placed within <HAnimSegment name='r_index_distal'/>
TouchSensor TouchSensor1451 = createNode("TouchSensor");
TouchSensor1451.description = "HAnimJoint r_index3, HAnimSegment r_index_distal";
HAnimSegment1450.children = new MFNode();

HAnimSegment1450.children[0] = TouchSensor1451;

Transform Transform1452 = createNode("Transform");
Transform1452.translation = new SFVec3f(new float[-0.2028,0.7139,-0.0236]);
Shape Shape1453 = createNode("Shape");
Shape1453.USE = "HAnimJointShape";
Transform1452.children = new MFNode();

Transform1452.children[0] = Shape1453;

HAnimSegment1450.children[1] = Transform1452;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_index_distal_tip'/>
Shape Shape1454 = createNode("Shape");
LineSet LineSet1455 = createNode("LineSet");
LineSet1455.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1456 = createNode("Coordinate");
Coordinate1456.point = new MFVec3f(new float[-0.2028,0.7139,-0.0236,-0.198,0.6883,-0.018]);
LineSet1455.coord = Coordinate1456;

ColorRGBA ColorRGBA1457 = createNode("ColorRGBA");
ColorRGBA1457.USE = "HAnimSiteLineColorRGBA";
LineSet1455.color = ColorRGBA1457;

Shape1454.geometry = LineSet1455;

HAnimSegment1450.children[2] = Shape1454;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_dactylion'/>
Shape Shape1458 = createNode("Shape");
LineSet LineSet1459 = createNode("LineSet");
LineSet1459.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1460 = createNode("Coordinate");
Coordinate1460.point = new MFVec3f(new float[-0.2028,0.7139,-0.0236,-0.1941,0.6772,-0.0423]);
LineSet1459.coord = Coordinate1460;

ColorRGBA ColorRGBA1461 = createNode("ColorRGBA");
ColorRGBA1461.USE = "HAnimSiteLineColorRGBA";
LineSet1459.color = ColorRGBA1461;

Shape1458.geometry = LineSet1459;

HAnimSegment1450.children[3] = Shape1458;

HAnimSite HAnimSite1462 = createNode("HAnimSite");
HAnimSite1462.name = "r_index_distal_tip";
HAnimSite1462.DEF = "hanim_r_index_distal_tip";
HAnimSite1462.translation = new SFVec3f(new float[-0.198,0.6883,-0.018]);
//HAnimSite visualization shape
TouchSensor TouchSensor1463 = createNode("TouchSensor");
TouchSensor1463.description = "HAnimSite r_index_distal_tip";
HAnimSite1462.children = new MFNode();

HAnimSite1462.children[0] = TouchSensor1463;

Shape Shape1464 = createNode("Shape");
Shape1464.USE = "HAnimSiteShape";
HAnimSite1462.children[1] = Shape1464;

HAnimSegment1450.children[4] = HAnimSite1462;

HAnimSite HAnimSite1465 = createNode("HAnimSite");
HAnimSite1465.name = "r_dactylion_pt";
HAnimSite1465.DEF = "hanim_r_dactylion_pt";
HAnimSite1465.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
//HAnimSite visualization shape
TouchSensor TouchSensor1466 = createNode("TouchSensor");
TouchSensor1466.description = "HAnimSite r_dactylion";
HAnimSite1465.children = new MFNode();

HAnimSite1465.children[0] = TouchSensor1466;

Shape Shape1467 = createNode("Shape");
Shape1467.USE = "HAnimSiteShape";
HAnimSite1465.children[1] = Shape1467;

HAnimSegment1450.children[5] = HAnimSite1465;

HAnimJoint1449.children = new MFNode();

HAnimJoint1449.children[0] = HAnimSegment1450;

HAnimJoint1440.children[1] = HAnimJoint1449;

HAnimJoint1431.children[1] = HAnimJoint1440;

HAnimJoint1422.children[1] = HAnimJoint1431;

HAnimJoint1334.children[2] = HAnimJoint1422;

HAnimJoint HAnimJoint1468 = createNode("HAnimJoint");
HAnimJoint1468.name = "r_middle0";
HAnimJoint1468.DEF = "hanim_r_middle0";
HAnimJoint1468.center = new SFVec3f(new float[-0.1987,0.8029,-0.053]);
HAnimJoint1468.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1468.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1469 = createNode("HAnimSegment");
HAnimSegment1469.name = "r_middle_metacarpal";
HAnimSegment1469.DEF = "hanim_r_middle_metacarpal";
//<HAnimJoint name='r_middle0'/> visualization sphere is placed within <HAnimSegment name='r_middle_metacarpal'/>
TouchSensor TouchSensor1470 = createNode("TouchSensor");
TouchSensor1470.description = "HAnimJoint r_middle0, HAnimSegment r_middle_metacarpal";
HAnimSegment1469.children = new MFNode();

HAnimSegment1469.children[0] = TouchSensor1470;

Transform Transform1471 = createNode("Transform");
Transform1471.translation = new SFVec3f(new float[-0.1987,0.8029,-0.053]);
Shape Shape1472 = createNode("Shape");
Shape1472.USE = "HAnimJointShape";
Transform1471.children = new MFNode();

Transform1471.children[0] = Shape1472;

HAnimSegment1469.children[1] = Transform1471;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle0'/> to <HAnimJoint name='r_middle1'/>
Shape Shape1473 = createNode("Shape");
LineSet LineSet1474 = createNode("LineSet");
LineSet1474.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1475 = createNode("Coordinate");
Coordinate1475.point = new MFVec3f(new float[-0.1987,0.8029,-0.053,-0.1987,0.7818,-0.053]);
LineSet1474.coord = Coordinate1475;

ColorRGBA ColorRGBA1476 = createNode("ColorRGBA");
ColorRGBA1476.USE = "HAnimSegmentLineColorRGBA";
LineSet1474.color = ColorRGBA1476;

Shape1473.geometry = LineSet1474;

HAnimSegment1469.children[2] = Shape1473;

HAnimJoint1468.children = new MFNode();

HAnimJoint1468.children[0] = HAnimSegment1469;

HAnimJoint HAnimJoint1477 = createNode("HAnimJoint");
HAnimJoint1477.name = "r_middle1";
HAnimJoint1477.DEF = "hanim_r_middle1";
HAnimJoint1477.center = new SFVec3f(new float[-0.1987,0.7818,-0.053]);
HAnimJoint1477.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1477.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1478 = createNode("HAnimSegment");
HAnimSegment1478.name = "r_middle_proximal";
HAnimSegment1478.DEF = "hanim_r_middle_proximal";
//<HAnimJoint name='r_middle1'/> visualization sphere is placed within <HAnimSegment name='r_middle_proximal'/>
TouchSensor TouchSensor1479 = createNode("TouchSensor");
TouchSensor1479.description = "HAnimJoint r_middle1, HAnimSegment r_middle_proximal";
HAnimSegment1478.children = new MFNode();

HAnimSegment1478.children[0] = TouchSensor1479;

Transform Transform1480 = createNode("Transform");
Transform1480.translation = new SFVec3f(new float[-0.1987,0.7818,-0.053]);
Shape Shape1481 = createNode("Shape");
Shape1481.USE = "HAnimJointShape";
Transform1480.children = new MFNode();

Transform1480.children[0] = Shape1481;

HAnimSegment1478.children[1] = Transform1480;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle1'/> to <HAnimJoint name='r_middle2'/>
Shape Shape1482 = createNode("Shape");
LineSet LineSet1483 = createNode("LineSet");
LineSet1483.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1484 = createNode("Coordinate");
Coordinate1484.point = new MFVec3f(new float[-0.1987,0.7818,-0.053,-0.2013,0.7273,-0.0503]);
LineSet1483.coord = Coordinate1484;

ColorRGBA ColorRGBA1485 = createNode("ColorRGBA");
ColorRGBA1485.USE = "HAnimSegmentLineColorRGBA";
LineSet1483.color = ColorRGBA1485;

Shape1482.geometry = LineSet1483;

HAnimSegment1478.children[2] = Shape1482;

HAnimJoint1477.children = new MFNode();

HAnimJoint1477.children[0] = HAnimSegment1478;

HAnimJoint HAnimJoint1486 = createNode("HAnimJoint");
HAnimJoint1486.name = "r_middle2";
HAnimJoint1486.DEF = "hanim_r_middle2";
HAnimJoint1486.center = new SFVec3f(new float[-0.2013,0.7273,-0.0503]);
HAnimJoint1486.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1486.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1487 = createNode("HAnimSegment");
HAnimSegment1487.name = "r_middle_middle";
HAnimSegment1487.DEF = "hanim_r_middle_middle";
//<HAnimJoint name='r_middle2'/> visualization sphere is placed within <HAnimSegment name='r_middle_middle'/>
TouchSensor TouchSensor1488 = createNode("TouchSensor");
TouchSensor1488.description = "HAnimJoint r_middle2, HAnimSegment r_middle_middle";
HAnimSegment1487.children = new MFNode();

HAnimSegment1487.children[0] = TouchSensor1488;

Transform Transform1489 = createNode("Transform");
Transform1489.translation = new SFVec3f(new float[-0.2013,0.7273,-0.0503]);
Shape Shape1490 = createNode("Shape");
Shape1490.USE = "HAnimJointShape";
Transform1489.children = new MFNode();

Transform1489.children[0] = Shape1490;

HAnimSegment1487.children[1] = Transform1489;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle2'/> to <HAnimJoint name='r_middle3'/>
Shape Shape1491 = createNode("Shape");
LineSet LineSet1492 = createNode("LineSet");
LineSet1492.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1493 = createNode("Coordinate");
Coordinate1493.point = new MFVec3f(new float[-0.2013,0.7273,-0.0503,-0.2026,0.7011,-0.0494]);
LineSet1492.coord = Coordinate1493;

ColorRGBA ColorRGBA1494 = createNode("ColorRGBA");
ColorRGBA1494.USE = "HAnimSegmentLineColorRGBA";
LineSet1492.color = ColorRGBA1494;

Shape1491.geometry = LineSet1492;

HAnimSegment1487.children[2] = Shape1491;

HAnimJoint1486.children = new MFNode();

HAnimJoint1486.children[0] = HAnimSegment1487;

HAnimJoint HAnimJoint1495 = createNode("HAnimJoint");
HAnimJoint1495.name = "r_middle3";
HAnimJoint1495.DEF = "hanim_r_middle3";
HAnimJoint1495.center = new SFVec3f(new float[-0.2026,0.7011,-0.0494]);
HAnimJoint1495.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1495.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1496 = createNode("HAnimSegment");
HAnimSegment1496.name = "r_middle_distal";
HAnimSegment1496.DEF = "hanim_r_middle_distal";
//<HAnimJoint name='r_middle3'/> visualization sphere is placed within <HAnimSegment name='r_middle_distal'/>
TouchSensor TouchSensor1497 = createNode("TouchSensor");
TouchSensor1497.description = "HAnimJoint r_middle3, HAnimSegment r_middle_distal";
HAnimSegment1496.children = new MFNode();

HAnimSegment1496.children[0] = TouchSensor1497;

Transform Transform1498 = createNode("Transform");
Transform1498.translation = new SFVec3f(new float[-0.2026,0.7011,-0.0494]);
Shape Shape1499 = createNode("Shape");
Shape1499.USE = "HAnimJointShape";
Transform1498.children = new MFNode();

Transform1498.children[0] = Shape1499;

HAnimSegment1496.children[1] = Transform1498;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_middle3'/> to <HAnimSite name='r_middle_distal_tip'/>
Shape Shape1500 = createNode("Shape");
LineSet LineSet1501 = createNode("LineSet");
LineSet1501.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1502 = createNode("Coordinate");
Coordinate1502.point = new MFVec3f(new float[-0.2026,0.7011,-0.0494,-0.1969,0.6758,-0.0427]);
LineSet1501.coord = Coordinate1502;

ColorRGBA ColorRGBA1503 = createNode("ColorRGBA");
ColorRGBA1503.USE = "HAnimSiteLineColorRGBA";
LineSet1501.color = ColorRGBA1503;

Shape1500.geometry = LineSet1501;

HAnimSegment1496.children[2] = Shape1500;

HAnimSite HAnimSite1504 = createNode("HAnimSite");
HAnimSite1504.name = "r_middle_distal_tip";
HAnimSite1504.DEF = "hanim_r_middle_distal_tip";
HAnimSite1504.translation = new SFVec3f(new float[-0.1969,0.6758,-0.0427]);
//HAnimSite visualization shape
TouchSensor TouchSensor1505 = createNode("TouchSensor");
TouchSensor1505.description = "HAnimSite r_middle_distal_tip";
HAnimSite1504.children = new MFNode();

HAnimSite1504.children[0] = TouchSensor1505;

Shape Shape1506 = createNode("Shape");
Shape1506.USE = "HAnimSiteShape";
HAnimSite1504.children[1] = Shape1506;

HAnimSegment1496.children[3] = HAnimSite1504;

HAnimJoint1495.children = new MFNode();

HAnimJoint1495.children[0] = HAnimSegment1496;

HAnimJoint1486.children[1] = HAnimJoint1495;

HAnimJoint1477.children[1] = HAnimJoint1486;

HAnimJoint1468.children[1] = HAnimJoint1477;

HAnimJoint1334.children[3] = HAnimJoint1468;

HAnimJoint HAnimJoint1507 = createNode("HAnimJoint");
HAnimJoint1507.name = "r_ring0";
HAnimJoint1507.DEF = "hanim_r_ring0";
HAnimJoint1507.center = new SFVec3f(new float[-0.1956,0.8019,-0.0794]);
HAnimJoint1507.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1507.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1508 = createNode("HAnimSegment");
HAnimSegment1508.name = "r_ring_metacarpal";
HAnimSegment1508.DEF = "hanim_r_ring_metacarpal";
//<HAnimJoint name='r_ring0'/> visualization sphere is placed within <HAnimSegment name='r_ring_metacarpal'/>
TouchSensor TouchSensor1509 = createNode("TouchSensor");
TouchSensor1509.description = "HAnimJoint r_ring0, HAnimSegment r_ring_metacarpal";
HAnimSegment1508.children = new MFNode();

HAnimSegment1508.children[0] = TouchSensor1509;

Transform Transform1510 = createNode("Transform");
Transform1510.translation = new SFVec3f(new float[-0.1956,0.8019,-0.0794]);
Shape Shape1511 = createNode("Shape");
Shape1511.USE = "HAnimJointShape";
Transform1510.children = new MFNode();

Transform1510.children[0] = Shape1511;

HAnimSegment1508.children[1] = Transform1510;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring0'/> to <HAnimJoint name='r_ring1'/>
Shape Shape1512 = createNode("Shape");
LineSet LineSet1513 = createNode("LineSet");
LineSet1513.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1514 = createNode("Coordinate");
Coordinate1514.point = new MFVec3f(new float[-0.1956,0.8019,-0.0794,-0.1956,0.7815,-0.0794]);
LineSet1513.coord = Coordinate1514;

ColorRGBA ColorRGBA1515 = createNode("ColorRGBA");
ColorRGBA1515.USE = "HAnimSegmentLineColorRGBA";
LineSet1513.color = ColorRGBA1515;

Shape1512.geometry = LineSet1513;

HAnimSegment1508.children[2] = Shape1512;

HAnimJoint1507.children = new MFNode();

HAnimJoint1507.children[0] = HAnimSegment1508;

HAnimJoint HAnimJoint1516 = createNode("HAnimJoint");
HAnimJoint1516.name = "r_ring1";
HAnimJoint1516.DEF = "hanim_r_ring1";
HAnimJoint1516.center = new SFVec3f(new float[-0.1956,0.7815,-0.0794]);
HAnimJoint1516.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1516.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1517 = createNode("HAnimSegment");
HAnimSegment1517.name = "r_ring_proximal";
HAnimSegment1517.DEF = "hanim_r_ring_proximal";
//<HAnimJoint name='r_ring1'/> visualization sphere is placed within <HAnimSegment name='r_ring_proximal'/>
TouchSensor TouchSensor1518 = createNode("TouchSensor");
TouchSensor1518.description = "HAnimJoint r_ring1, HAnimSegment r_ring_proximal";
HAnimSegment1517.children = new MFNode();

HAnimSegment1517.children[0] = TouchSensor1518;

Transform Transform1519 = createNode("Transform");
Transform1519.translation = new SFVec3f(new float[-0.1956,0.7815,-0.0794]);
Shape Shape1520 = createNode("Shape");
Shape1520.USE = "HAnimJointShape";
Transform1519.children = new MFNode();

Transform1519.children[0] = Shape1520;

HAnimSegment1517.children[1] = Transform1519;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring1'/> to <HAnimJoint name='r_ring2'/>
Shape Shape1521 = createNode("Shape");
LineSet LineSet1522 = createNode("LineSet");
LineSet1522.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1523 = createNode("Coordinate");
Coordinate1523.point = new MFVec3f(new float[-0.1956,0.7815,-0.0794,-0.1973,0.7287,-0.0777]);
LineSet1522.coord = Coordinate1523;

ColorRGBA ColorRGBA1524 = createNode("ColorRGBA");
ColorRGBA1524.USE = "HAnimSegmentLineColorRGBA";
LineSet1522.color = ColorRGBA1524;

Shape1521.geometry = LineSet1522;

HAnimSegment1517.children[2] = Shape1521;

HAnimJoint1516.children = new MFNode();

HAnimJoint1516.children[0] = HAnimSegment1517;

HAnimJoint HAnimJoint1525 = createNode("HAnimJoint");
HAnimJoint1525.name = "r_ring2";
HAnimJoint1525.DEF = "hanim_r_ring2";
HAnimJoint1525.center = new SFVec3f(new float[-0.1973,0.7287,-0.0777]);
HAnimJoint1525.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1525.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1526 = createNode("HAnimSegment");
HAnimSegment1526.name = "r_ring_middle";
HAnimSegment1526.DEF = "hanim_r_ring_middle";
//<HAnimJoint name='r_ring2'/> visualization sphere is placed within <HAnimSegment name='r_ring_middle'/>
TouchSensor TouchSensor1527 = createNode("TouchSensor");
TouchSensor1527.description = "HAnimJoint r_ring2, HAnimSegment r_ring_middle";
HAnimSegment1526.children = new MFNode();

HAnimSegment1526.children[0] = TouchSensor1527;

Transform Transform1528 = createNode("Transform");
Transform1528.translation = new SFVec3f(new float[-0.1973,0.7287,-0.0777]);
Shape Shape1529 = createNode("Shape");
Shape1529.USE = "HAnimJointShape";
Transform1528.children = new MFNode();

Transform1528.children[0] = Shape1529;

HAnimSegment1526.children[1] = Transform1528;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring2'/> to <HAnimJoint name='r_ring3'/>
Shape Shape1530 = createNode("Shape");
LineSet LineSet1531 = createNode("LineSet");
LineSet1531.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1532 = createNode("Coordinate");
Coordinate1532.point = new MFVec3f(new float[-0.1973,0.7287,-0.0777,-0.1983,0.7045,-0.0767]);
LineSet1531.coord = Coordinate1532;

ColorRGBA ColorRGBA1533 = createNode("ColorRGBA");
ColorRGBA1533.USE = "HAnimSegmentLineColorRGBA";
LineSet1531.color = ColorRGBA1533;

Shape1530.geometry = LineSet1531;

HAnimSegment1526.children[2] = Shape1530;

HAnimJoint1525.children = new MFNode();

HAnimJoint1525.children[0] = HAnimSegment1526;

HAnimJoint HAnimJoint1534 = createNode("HAnimJoint");
HAnimJoint1534.name = "r_ring3";
HAnimJoint1534.DEF = "hanim_r_ring3";
HAnimJoint1534.center = new SFVec3f(new float[-0.1983,0.7045,-0.0767]);
HAnimJoint1534.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1534.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1535 = createNode("HAnimSegment");
HAnimSegment1535.name = "r_ring_distal";
HAnimSegment1535.DEF = "hanim_r_ring_distal";
//<HAnimJoint name='r_ring3'/> visualization sphere is placed within <HAnimSegment name='r_ring_distal'/>
TouchSensor TouchSensor1536 = createNode("TouchSensor");
TouchSensor1536.description = "HAnimJoint r_ring3, HAnimSegment r_ring_distal";
HAnimSegment1535.children = new MFNode();

HAnimSegment1535.children[0] = TouchSensor1536;

Transform Transform1537 = createNode("Transform");
Transform1537.translation = new SFVec3f(new float[-0.1983,0.7045,-0.0767]);
Shape Shape1538 = createNode("Shape");
Shape1538.USE = "HAnimJointShape";
Transform1537.children = new MFNode();

Transform1537.children[0] = Shape1538;

HAnimSegment1535.children[1] = Transform1537;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ring3'/> to <HAnimSite name='r_ring_distal_tip'/>
Shape Shape1539 = createNode("Shape");
LineSet LineSet1540 = createNode("LineSet");
LineSet1540.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1541 = createNode("Coordinate");
Coordinate1541.point = new MFVec3f(new float[-0.1983,0.7045,-0.0767,-0.1934,0.6778,-0.0693]);
LineSet1540.coord = Coordinate1541;

ColorRGBA ColorRGBA1542 = createNode("ColorRGBA");
ColorRGBA1542.USE = "HAnimSiteLineColorRGBA";
LineSet1540.color = ColorRGBA1542;

Shape1539.geometry = LineSet1540;

HAnimSegment1535.children[2] = Shape1539;

HAnimSite HAnimSite1543 = createNode("HAnimSite");
HAnimSite1543.name = "r_ring_distal_tip";
HAnimSite1543.DEF = "hanim_r_ring_distal_tip";
HAnimSite1543.translation = new SFVec3f(new float[-0.1934,0.6778,-0.0693]);
//HAnimSite visualization shape
TouchSensor TouchSensor1544 = createNode("TouchSensor");
TouchSensor1544.description = "HAnimSite r_ring_distal_tip";
HAnimSite1543.children = new MFNode();

HAnimSite1543.children[0] = TouchSensor1544;

Shape Shape1545 = createNode("Shape");
Shape1545.USE = "HAnimSiteShape";
HAnimSite1543.children[1] = Shape1545;

HAnimSegment1535.children[3] = HAnimSite1543;

HAnimJoint1534.children = new MFNode();

HAnimJoint1534.children[0] = HAnimSegment1535;

HAnimJoint1525.children[1] = HAnimJoint1534;

HAnimJoint1516.children[1] = HAnimJoint1525;

HAnimJoint1507.children[1] = HAnimJoint1516;

HAnimJoint1334.children[4] = HAnimJoint1507;

HAnimJoint HAnimJoint1546 = createNode("HAnimJoint");
HAnimJoint1546.name = "r_pinky0";
HAnimJoint1546.DEF = "hanim_r_pinky0";
HAnimJoint1546.center = new SFVec3f(new float[-0.1925,0.8066,-0.1036]);
HAnimJoint1546.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1546.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1547 = createNode("HAnimSegment");
HAnimSegment1547.name = "r_pinky_metacarpal";
HAnimSegment1547.DEF = "hanim_r_pinky_metacarpal";
//<HAnimJoint name='r_pinky0'/> visualization sphere is placed within <HAnimSegment name='r_pinky_metacarpal'/>
TouchSensor TouchSensor1548 = createNode("TouchSensor");
TouchSensor1548.description = "HAnimJoint r_pinky0, HAnimSegment r_pinky_metacarpal";
HAnimSegment1547.children = new MFNode();

HAnimSegment1547.children[0] = TouchSensor1548;

Transform Transform1549 = createNode("Transform");
Transform1549.translation = new SFVec3f(new float[-0.1925,0.8066,-0.1036]);
Shape Shape1550 = createNode("Shape");
Shape1550.USE = "HAnimJointShape";
Transform1549.children = new MFNode();

Transform1549.children[0] = Shape1550;

HAnimSegment1547.children[1] = Transform1549;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky0'/> to <HAnimJoint name='r_pinky1'/>
Shape Shape1551 = createNode("Shape");
LineSet LineSet1552 = createNode("LineSet");
LineSet1552.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1553 = createNode("Coordinate");
Coordinate1553.point = new MFVec3f(new float[-0.1925,0.8066,-0.1036,-0.1925,0.7866,-0.1036]);
LineSet1552.coord = Coordinate1553;

ColorRGBA ColorRGBA1554 = createNode("ColorRGBA");
ColorRGBA1554.USE = "HAnimSegmentLineColorRGBA";
LineSet1552.color = ColorRGBA1554;

Shape1551.geometry = LineSet1552;

HAnimSegment1547.children[2] = Shape1551;

HAnimJoint1546.children = new MFNode();

HAnimJoint1546.children[0] = HAnimSegment1547;

HAnimJoint HAnimJoint1555 = createNode("HAnimJoint");
HAnimJoint1555.name = "r_pinky1";
HAnimJoint1555.DEF = "hanim_r_pinky1";
HAnimJoint1555.center = new SFVec3f(new float[-0.1925,0.7866,-0.1036]);
HAnimJoint1555.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1555.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1556 = createNode("HAnimSegment");
HAnimSegment1556.name = "r_pinky_proximal";
HAnimSegment1556.DEF = "hanim_r_pinky_proximal";
//<HAnimJoint name='r_pinky1'/> visualization sphere is placed within <HAnimSegment name='r_pinky_proximal'/>
TouchSensor TouchSensor1557 = createNode("TouchSensor");
TouchSensor1557.description = "HAnimJoint r_pinky1, HAnimSegment r_pinky_proximal";
HAnimSegment1556.children = new MFNode();

HAnimSegment1556.children[0] = TouchSensor1557;

Transform Transform1558 = createNode("Transform");
Transform1558.translation = new SFVec3f(new float[-0.1925,0.7866,-0.1036]);
Shape Shape1559 = createNode("Shape");
Shape1559.USE = "HAnimJointShape";
Transform1558.children = new MFNode();

Transform1558.children[0] = Shape1559;

HAnimSegment1556.children[1] = Transform1558;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky1'/> to <HAnimJoint name='r_pinky2'/>
Shape Shape1560 = createNode("Shape");
LineSet LineSet1561 = createNode("LineSet");
LineSet1561.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1562 = createNode("Coordinate");
Coordinate1562.point = new MFVec3f(new float[-0.1925,0.7866,-0.1036,-0.1938,0.7452,-0.1024]);
LineSet1561.coord = Coordinate1562;

ColorRGBA ColorRGBA1563 = createNode("ColorRGBA");
ColorRGBA1563.USE = "HAnimSegmentLineColorRGBA";
LineSet1561.color = ColorRGBA1563;

Shape1560.geometry = LineSet1561;

HAnimSegment1556.children[2] = Shape1560;

HAnimJoint1555.children = new MFNode();

HAnimJoint1555.children[0] = HAnimSegment1556;

HAnimJoint HAnimJoint1564 = createNode("HAnimJoint");
HAnimJoint1564.name = "r_pinky2";
HAnimJoint1564.DEF = "hanim_r_pinky2";
HAnimJoint1564.center = new SFVec3f(new float[-0.1938,0.7452,-0.1024]);
HAnimJoint1564.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1564.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1565 = createNode("HAnimSegment");
HAnimSegment1565.name = "r_pinky_middle";
HAnimSegment1565.DEF = "hanim_r_pinky_middle";
//<HAnimJoint name='r_pinky2'/> visualization sphere is placed within <HAnimSegment name='r_pinky_middle'/>
TouchSensor TouchSensor1566 = createNode("TouchSensor");
TouchSensor1566.description = "HAnimJoint r_pinky2, HAnimSegment r_pinky_middle";
HAnimSegment1565.children = new MFNode();

HAnimSegment1565.children[0] = TouchSensor1566;

Transform Transform1567 = createNode("Transform");
Transform1567.translation = new SFVec3f(new float[-0.1938,0.7452,-0.1024]);
Shape Shape1568 = createNode("Shape");
Shape1568.USE = "HAnimJointShape";
Transform1567.children = new MFNode();

Transform1567.children[0] = Shape1568;

HAnimSegment1565.children[1] = Transform1567;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky2'/> to <HAnimJoint name='r_pinky3'/>
Shape Shape1569 = createNode("Shape");
LineSet LineSet1570 = createNode("LineSet");
LineSet1570.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1571 = createNode("Coordinate");
Coordinate1571.point = new MFVec3f(new float[-0.1938,0.7452,-0.1024,-0.1948,0.7277,-0.1017]);
LineSet1570.coord = Coordinate1571;

ColorRGBA ColorRGBA1572 = createNode("ColorRGBA");
ColorRGBA1572.USE = "HAnimSegmentLineColorRGBA";
LineSet1570.color = ColorRGBA1572;

Shape1569.geometry = LineSet1570;

HAnimSegment1565.children[2] = Shape1569;

HAnimJoint1564.children = new MFNode();

HAnimJoint1564.children[0] = HAnimSegment1565;

HAnimJoint HAnimJoint1573 = createNode("HAnimJoint");
HAnimJoint1573.name = "r_pinky3";
HAnimJoint1573.DEF = "hanim_r_pinky3";
HAnimJoint1573.center = new SFVec3f(new float[-0.1948,0.7277,-0.1017]);
HAnimJoint1573.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1573.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1574 = createNode("HAnimSegment");
HAnimSegment1574.name = "r_pinky_distal";
HAnimSegment1574.DEF = "hanim_r_pinky_distal";
//<HAnimJoint name='r_pinky3'/> visualization sphere is placed within <HAnimSegment name='r_pinky_distal'/>
TouchSensor TouchSensor1575 = createNode("TouchSensor");
TouchSensor1575.description = "HAnimJoint r_pinky3, HAnimSegment r_pinky_distal";
HAnimSegment1574.children = new MFNode();

HAnimSegment1574.children[0] = TouchSensor1575;

Transform Transform1576 = createNode("Transform");
Transform1576.translation = new SFVec3f(new float[-0.1948,0.7277,-0.1017]);
Shape Shape1577 = createNode("Shape");
Shape1577.USE = "HAnimJointShape";
Transform1576.children = new MFNode();

Transform1576.children[0] = Shape1577;

HAnimSegment1574.children[1] = Transform1576;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_pinky3'/> to <HAnimSite name='r_pinky_distal_tip'/>
Shape Shape1578 = createNode("Shape");
LineSet LineSet1579 = createNode("LineSet");
LineSet1579.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1580 = createNode("Coordinate");
Coordinate1580.point = new MFVec3f(new float[-0.1948,0.7277,-0.1017,-0.1938,0.7035,-0.0949]);
LineSet1579.coord = Coordinate1580;

ColorRGBA ColorRGBA1581 = createNode("ColorRGBA");
ColorRGBA1581.USE = "HAnimSiteLineColorRGBA";
LineSet1579.color = ColorRGBA1581;

Shape1578.geometry = LineSet1579;

HAnimSegment1574.children[2] = Shape1578;

HAnimSite HAnimSite1582 = createNode("HAnimSite");
HAnimSite1582.name = "r_pinky_distal_tip";
HAnimSite1582.DEF = "hanim_r_pinky_distal_tip";
HAnimSite1582.translation = new SFVec3f(new float[-0.1938,0.7035,-0.0949]);
//HAnimSite visualization shape
TouchSensor TouchSensor1583 = createNode("TouchSensor");
TouchSensor1583.description = "HAnimSite r_pinky_distal_tip";
HAnimSite1582.children = new MFNode();

HAnimSite1582.children[0] = TouchSensor1583;

Shape Shape1584 = createNode("Shape");
Shape1584.USE = "HAnimSiteShape";
HAnimSite1582.children[1] = Shape1584;

HAnimSegment1574.children[3] = HAnimSite1582;

HAnimJoint1573.children = new MFNode();

HAnimJoint1573.children[0] = HAnimSegment1574;

HAnimJoint1564.children[1] = HAnimJoint1573;

HAnimJoint1555.children[1] = HAnimJoint1564;

HAnimJoint1546.children[1] = HAnimJoint1555;

HAnimJoint1334.children[5] = HAnimJoint1546;

HAnimJoint1297.children[1] = HAnimJoint1334;

HAnimJoint1281.children[1] = HAnimJoint1297;

HAnimJoint1272.children[1] = HAnimJoint1281;

HAnimJoint1235.children[1] = HAnimJoint1272;

HAnimJoint597.children[3] = HAnimJoint1235;

HAnimJoint588.children[1] = HAnimJoint597;

HAnimJoint579.children[1] = HAnimJoint588;

HAnimJoint570.children[1] = HAnimJoint579;

HAnimJoint561.children[1] = HAnimJoint570;

HAnimJoint552.children[1] = HAnimJoint561;

HAnimJoint543.children[1] = HAnimJoint552;

HAnimJoint534.children[1] = HAnimJoint543;

HAnimJoint511.children[1] = HAnimJoint534;

HAnimJoint495.children[1] = HAnimJoint511;

HAnimJoint486.children[1] = HAnimJoint495;

HAnimJoint477.children[1] = HAnimJoint486;

HAnimJoint468.children[1] = HAnimJoint477;

HAnimJoint438.children[1] = HAnimJoint468;

HAnimJoint429.children[1] = HAnimJoint438;

HAnimJoint420.children[1] = HAnimJoint429;

HAnimJoint397.children[1] = HAnimJoint420;

HAnimJoint47.children[2] = HAnimJoint397;

HAnimHumanoid46.joints = new MFNode();

HAnimHumanoid46.joints[0] = HAnimJoint47;

HAnimSite HAnimSite1585 = createNode("HAnimSite");
HAnimSite1585.name = "l_inclined_view";
HAnimSite1585.DEF = "hanim_l_inclined_view";
HAnimSite1585.rotation = new SFRotation(new float[-0.113,0.993,0.0347,0.671]);
HAnimSite1585.translation = new SFVec3f(new float[1.62,1.05,2.06]);
//HAnimSite visualization shape
TouchSensor TouchSensor1586 = createNode("TouchSensor");
TouchSensor1586.description = "HAnimSite l_inclined_view";
HAnimSite1585.children = new MFNode();

HAnimSite1585.children[0] = TouchSensor1586;

Shape Shape1587 = createNode("Shape");
Shape1587.USE = "HAnimSiteShape";
HAnimSite1585.children[1] = Shape1587;

Viewpoint Viewpoint1588 = createNode("Viewpoint");
Viewpoint1588.DEF = "hanim_l_inclined_viewpoint";
Viewpoint1588.description = "left inclined";
Viewpoint1588.position = new SFVec3f(new float[0,0,0]);
HAnimSite1585.children[2] = Viewpoint1588;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1589 = createNode("Anchor");
Anchor1589.description = "HAnimSite hanim_l_inclined_view Viewpoint";
Anchor1589.url = new MFString(new java.lang.String["#hanim_l_inclined_viewpoint"]);
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

HAnimSite1585.children[3] = Anchor1589;

HAnimHumanoid46.viewpoints[1] = HAnimSite1585;

HAnimSite HAnimSite1593 = createNode("HAnimSite");
HAnimSite1593.name = "r_inclined_view";
HAnimSite1593.DEF = "hanim_r_inclined_view";
HAnimSite1593.rotation = new SFRotation(new float[-0.113,-0.993,0.0347,0.671]);
HAnimSite1593.translation = new SFVec3f(new float[-1.62,1.05,2.06]);
//HAnimSite visualization shape
TouchSensor TouchSensor1594 = createNode("TouchSensor");
TouchSensor1594.description = "HAnimSite r_inclined_view";
HAnimSite1593.children = new MFNode();

HAnimSite1593.children[0] = TouchSensor1594;

Shape Shape1595 = createNode("Shape");
Shape1595.USE = "HAnimSiteShape";
HAnimSite1593.children[1] = Shape1595;

Viewpoint Viewpoint1596 = createNode("Viewpoint");
Viewpoint1596.DEF = "hanim_r_inclined_viewpoint";
Viewpoint1596.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1596.description = "right inclined";
Viewpoint1596.position = new SFVec3f(new float[0,0,0]);
HAnimSite1593.children[2] = Viewpoint1596;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1597 = createNode("Anchor");
Anchor1597.description = "HAnimSite hanim_r_inclined_view Viewpoint";
Anchor1597.url = new MFString(new java.lang.String["#hanim_r_inclined_viewpoint"]);
LOD LOD1598 = createNode("LOD");
LOD1598.forceTransitions = True;
LOD1598.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1599 = createNode("WorldInfo");
WorldInfo1599.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1598.children = new MFNode();

LOD1598.children[0] = WorldInfo1599;

Shape Shape1600 = createNode("Shape");
Shape1600.USE = "HAnimSiteViewpointShape";
LOD1598.children[1] = Shape1600;

Anchor1597.children = new MFNode();

Anchor1597.children[0] = LOD1598;

HAnimSite1593.children[3] = Anchor1597;

HAnimHumanoid46.viewpoints[2] = HAnimSite1593;

HAnimSite HAnimSite1601 = createNode("HAnimSite");
HAnimSite1601.name = "front_view";
HAnimSite1601.DEF = "hanim_front_view";
HAnimSite1601.translation = new SFVec3f(new float[0,0.85,2.58]);
//HAnimSite visualization shape
TouchSensor TouchSensor1602 = createNode("TouchSensor");
TouchSensor1602.description = "HAnimSite front_view";
HAnimSite1601.children = new MFNode();

HAnimSite1601.children[0] = TouchSensor1602;

Shape Shape1603 = createNode("Shape");
Shape1603.USE = "HAnimSiteShape";
HAnimSite1601.children[1] = Shape1603;

Viewpoint Viewpoint1604 = createNode("Viewpoint");
Viewpoint1604.DEF = "hanim_front_viewpoint";
Viewpoint1604.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1604.description = "front";
Viewpoint1604.position = new SFVec3f(new float[0,0,0]);
HAnimSite1601.children[2] = Viewpoint1604;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1605 = createNode("Anchor");
Anchor1605.description = "HAnimSite hanim_front_view Viewpoint";
Anchor1605.url = new MFString(new java.lang.String["#hanim_front_viewpoint"]);
LOD LOD1606 = createNode("LOD");
LOD1606.forceTransitions = True;
LOD1606.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1607 = createNode("WorldInfo");
WorldInfo1607.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1606.children = new MFNode();

LOD1606.children[0] = WorldInfo1607;

Shape Shape1608 = createNode("Shape");
Shape1608.USE = "HAnimSiteViewpointShape";
LOD1606.children[1] = Shape1608;

Anchor1605.children = new MFNode();

Anchor1605.children[0] = LOD1606;

HAnimSite1601.children[3] = Anchor1605;

HAnimHumanoid46.viewpoints[3] = HAnimSite1601;

HAnimSite HAnimSite1609 = createNode("HAnimSite");
HAnimSite1609.name = "back_view";
HAnimSite1609.DEF = "hanim_back_view";
HAnimSite1609.rotation = new SFRotation(new float[0,1,0,3.14]);
HAnimSite1609.translation = new SFVec3f(new float[0,0.85,-2.58]);
//HAnimSite visualization shape
TouchSensor TouchSensor1610 = createNode("TouchSensor");
TouchSensor1610.description = "HAnimSite back_view";
HAnimSite1609.children = new MFNode();

HAnimSite1609.children[0] = TouchSensor1610;

Shape Shape1611 = createNode("Shape");
Shape1611.USE = "HAnimSiteShape";
HAnimSite1609.children[1] = Shape1611;

Viewpoint Viewpoint1612 = createNode("Viewpoint");
Viewpoint1612.DEF = "hanim_back_viewpoint";
Viewpoint1612.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1612.description = "back";
Viewpoint1612.position = new SFVec3f(new float[0,0,0]);
HAnimSite1609.children[2] = Viewpoint1612;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1613 = createNode("Anchor");
Anchor1613.description = "HAnimSite hanim_back_view Viewpoint";
Anchor1613.url = new MFString(new java.lang.String["#hanim_back_viewpoint"]);
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

HAnimSite1609.children[3] = Anchor1613;

HAnimHumanoid46.viewpoints[4] = HAnimSite1609;

HAnimSite HAnimSite1617 = createNode("HAnimSite");
HAnimSite1617.name = "l_side_view";
HAnimSite1617.DEF = "hanim_l_side_view";
HAnimSite1617.rotation = new SFRotation(new float[0,1,0,1.5708]);
HAnimSite1617.translation = new SFVec3f(new float[2.6,0.854,0]);
//HAnimSite visualization shape
TouchSensor TouchSensor1618 = createNode("TouchSensor");
TouchSensor1618.description = "HAnimSite l_side_view";
HAnimSite1617.children = new MFNode();

HAnimSite1617.children[0] = TouchSensor1618;

Shape Shape1619 = createNode("Shape");
Shape1619.USE = "HAnimSiteShape";
HAnimSite1617.children[1] = Shape1619;

Viewpoint Viewpoint1620 = createNode("Viewpoint");
Viewpoint1620.DEF = "hanim_l_side_viewpoint";
Viewpoint1620.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1620.description = "left side";
Viewpoint1620.position = new SFVec3f(new float[0,0,0]);
HAnimSite1617.children[2] = Viewpoint1620;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1621 = createNode("Anchor");
Anchor1621.description = "HAnimSite hanim_l_side_view Viewpoint";
Anchor1621.url = new MFString(new java.lang.String["#hanim_l_side_viewpoint"]);
LOD LOD1622 = createNode("LOD");
LOD1622.forceTransitions = True;
LOD1622.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1623 = createNode("WorldInfo");
WorldInfo1623.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1622.children = new MFNode();

LOD1622.children[0] = WorldInfo1623;

Shape Shape1624 = createNode("Shape");
Shape1624.USE = "HAnimSiteViewpointShape";
LOD1622.children[1] = Shape1624;

Anchor1621.children = new MFNode();

Anchor1621.children[0] = LOD1622;

HAnimSite1617.children[3] = Anchor1621;

HAnimHumanoid46.viewpoints[5] = HAnimSite1617;

HAnimSite HAnimSite1625 = createNode("HAnimSite");
HAnimSite1625.name = "Top_view";
HAnimSite1625.DEF = "hanim_Top_view";
HAnimSite1625.rotation = new SFRotation(new float[1,0,0,-1.57]);
HAnimSite1625.translation = new SFVec3f(new float[0,3.5,0]);
//HAnimSite visualization shape
TouchSensor TouchSensor1626 = createNode("TouchSensor");
TouchSensor1626.description = "HAnimSite Top_view";
HAnimSite1625.children = new MFNode();

HAnimSite1625.children[0] = TouchSensor1626;

Shape Shape1627 = createNode("Shape");
Shape1627.USE = "HAnimSiteShape";
HAnimSite1625.children[1] = Shape1627;

Viewpoint Viewpoint1628 = createNode("Viewpoint");
Viewpoint1628.DEF = "hanim_Top_viewpoint";
Viewpoint1628.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1628.description = "Top";
Viewpoint1628.position = new SFVec3f(new float[0,0,0]);
HAnimSite1625.children[2] = Viewpoint1628;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1629 = createNode("Anchor");
Anchor1629.description = "HAnimSite hanim_Top_view Viewpoint";
Anchor1629.url = new MFString(new java.lang.String["#hanim_Top_viewpoint"]);
LOD LOD1630 = createNode("LOD");
LOD1630.forceTransitions = True;
LOD1630.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1631 = createNode("WorldInfo");
WorldInfo1631.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1630.children = new MFNode();

LOD1630.children[0] = WorldInfo1631;

Shape Shape1632 = createNode("Shape");
Shape1632.USE = "HAnimSiteViewpointShape";
LOD1630.children[1] = Shape1632;

Anchor1629.children = new MFNode();

Anchor1629.children[0] = LOD1630;

HAnimSite1625.children[3] = Anchor1629;

HAnimHumanoid46.viewpoints[6] = HAnimSite1625;

HAnimSite HAnimSite1633 = createNode("HAnimSite");
HAnimSite1633.name = "front_close_view";
HAnimSite1633.DEF = "hanim_front_close_view";
HAnimSite1633.translation = new SFVec3f(new float[0,0.854,1.575]);
//HAnimSite visualization shape
TouchSensor TouchSensor1634 = createNode("TouchSensor");
TouchSensor1634.description = "HAnimSite front_close_view";
HAnimSite1633.children = new MFNode();

HAnimSite1633.children[0] = TouchSensor1634;

Shape Shape1635 = createNode("Shape");
Shape1635.USE = "HAnimSiteShape";
HAnimSite1633.children[1] = Shape1635;

Viewpoint Viewpoint1636 = createNode("Viewpoint");
Viewpoint1636.DEF = "hanim_front_close_viewpoint";
Viewpoint1636.centerOfRotation = new SFVec3f(new float[0,0,1.575]);
Viewpoint1636.description = "front close";
Viewpoint1636.position = new SFVec3f(new float[0,0,0]);
HAnimSite1633.children[2] = Viewpoint1636;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1637 = createNode("Anchor");
Anchor1637.description = "HAnimSite hanim_front_close_view Viewpoint";
Anchor1637.url = new MFString(new java.lang.String["#hanim_front_close_viewpoint"]);
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

HAnimSite1633.children[3] = Anchor1637;

HAnimHumanoid46.viewpoints[7] = HAnimSite1633;

HAnimSite HAnimSite1641 = createNode("HAnimSite");
HAnimSite1641.name = "side_close_view";
HAnimSite1641.DEF = "hanim_side_close_view";
HAnimSite1641.rotation = new SFRotation(new float[0,1,0,1.5708]);
HAnimSite1641.translation = new SFVec3f(new float[1.56,0.854,0]);
//HAnimSite visualization shape
TouchSensor TouchSensor1642 = createNode("TouchSensor");
TouchSensor1642.description = "HAnimSite side_close_view";
HAnimSite1641.children = new MFNode();

HAnimSite1641.children[0] = TouchSensor1642;

Shape Shape1643 = createNode("Shape");
Shape1643.USE = "HAnimSiteShape";
HAnimSite1641.children[1] = Shape1643;

Viewpoint Viewpoint1644 = createNode("Viewpoint");
Viewpoint1644.DEF = "hanim_side_close_viewpoint";
Viewpoint1644.centerOfRotation = new SFVec3f(new float[1.6,0,0]);
Viewpoint1644.description = "side close";
Viewpoint1644.position = new SFVec3f(new float[0,0,0]);
HAnimSite1641.children[2] = Viewpoint1644;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1645 = createNode("Anchor");
Anchor1645.description = "HAnimSite hanim_side_close_view Viewpoint";
Anchor1645.url = new MFString(new java.lang.String["#hanim_side_close_viewpoint"]);
LOD LOD1646 = createNode("LOD");
LOD1646.forceTransitions = True;
LOD1646.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1647 = createNode("WorldInfo");
WorldInfo1647.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1646.children = new MFNode();

LOD1646.children[0] = WorldInfo1647;

Shape Shape1648 = createNode("Shape");
Shape1648.USE = "HAnimSiteViewpointShape";
LOD1646.children[1] = Shape1648;

Anchor1645.children = new MFNode();

Anchor1645.children[0] = LOD1646;

HAnimSite1641.children[3] = Anchor1645;

HAnimHumanoid46.viewpoints[8] = HAnimSite1641;

HAnimSite HAnimSite1649 = createNode("HAnimSite");
HAnimSite1649.name = "head_front_close_view";
HAnimSite1649.DEF = "hanim_head_front_close_view";
HAnimSite1649.translation = new SFVec3f(new float[0,1.5,1]);
//HAnimSite visualization shape
TouchSensor TouchSensor1650 = createNode("TouchSensor");
TouchSensor1650.description = "HAnimSite head_front_close_view";
HAnimSite1649.children = new MFNode();

HAnimSite1649.children[0] = TouchSensor1650;

Shape Shape1651 = createNode("Shape");
Shape1651.USE = "HAnimSiteShape";
HAnimSite1649.children[1] = Shape1651;

Viewpoint Viewpoint1652 = createNode("Viewpoint");
Viewpoint1652.DEF = "hanim_head_front_close_viewpoint";
Viewpoint1652.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint1652.description = "head front close";
Viewpoint1652.position = new SFVec3f(new float[0,0,0]);
HAnimSite1649.children[2] = Viewpoint1652;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1653 = createNode("Anchor");
Anchor1653.description = "HAnimSite hanim_head_front_close_view Viewpoint";
Anchor1653.url = new MFString(new java.lang.String["#hanim_head_front_close_viewpoint"]);
LOD LOD1654 = createNode("LOD");
LOD1654.forceTransitions = True;
LOD1654.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1655 = createNode("WorldInfo");
WorldInfo1655.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1654.children = new MFNode();

LOD1654.children[0] = WorldInfo1655;

Shape Shape1656 = createNode("Shape");
Shape1656.USE = "HAnimSiteViewpointShape";
LOD1654.children[1] = Shape1656;

Anchor1653.children = new MFNode();

Anchor1653.children[0] = LOD1654;

HAnimSite1649.children[3] = Anchor1653;

HAnimHumanoid46.viewpoints[9] = HAnimSite1649;

HAnimSite HAnimSite1657 = createNode("HAnimSite");
HAnimSite1657.name = "chest_front_close_view";
HAnimSite1657.DEF = "hanim_chest_front_close_view";
HAnimSite1657.translation = new SFVec3f(new float[0,1.2,1]);
//HAnimSite visualization shape
TouchSensor TouchSensor1658 = createNode("TouchSensor");
TouchSensor1658.description = "HAnimSite chest_front_close_view";
HAnimSite1657.children = new MFNode();

HAnimSite1657.children[0] = TouchSensor1658;

Shape Shape1659 = createNode("Shape");
Shape1659.USE = "HAnimSiteShape";
HAnimSite1657.children[1] = Shape1659;

Viewpoint Viewpoint1660 = createNode("Viewpoint");
Viewpoint1660.DEF = "hanim_chest_front_close_viewpoint";
Viewpoint1660.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint1660.description = "chest front close";
Viewpoint1660.position = new SFVec3f(new float[0,0,0]);
HAnimSite1657.children[2] = Viewpoint1660;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1661 = createNode("Anchor");
Anchor1661.description = "HAnimSite hanim_chest_front_close_view Viewpoint";
Anchor1661.url = new MFString(new java.lang.String["#hanim_chest_front_close_viewpoint"]);
LOD LOD1662 = createNode("LOD");
LOD1662.forceTransitions = True;
LOD1662.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1663 = createNode("WorldInfo");
WorldInfo1663.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1662.children = new MFNode();

LOD1662.children[0] = WorldInfo1663;

Shape Shape1664 = createNode("Shape");
Shape1664.USE = "HAnimSiteViewpointShape";
LOD1662.children[1] = Shape1664;

Anchor1661.children = new MFNode();

Anchor1661.children[0] = LOD1662;

HAnimSite1657.children[3] = Anchor1661;

HAnimHumanoid46.viewpoints[10] = HAnimSite1657;

HAnimSite HAnimSite1665 = createNode("HAnimSite");
HAnimSite1665.name = "pelvis_front_close_view";
HAnimSite1665.DEF = "hanim_pelvis_front_close_view";
HAnimSite1665.translation = new SFVec3f(new float[0,0.8,1]);
//HAnimSite visualization shape
TouchSensor TouchSensor1666 = createNode("TouchSensor");
TouchSensor1666.description = "HAnimSite pelvis_front_close_view";
HAnimSite1665.children = new MFNode();

HAnimSite1665.children[0] = TouchSensor1666;

Shape Shape1667 = createNode("Shape");
Shape1667.USE = "HAnimSiteShape";
HAnimSite1665.children[1] = Shape1667;

Viewpoint Viewpoint1668 = createNode("Viewpoint");
Viewpoint1668.DEF = "hanim_pelvis_front_close_viewpoint";
Viewpoint1668.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint1668.description = "pelvis front close";
Viewpoint1668.position = new SFVec3f(new float[0,0,0]);
HAnimSite1665.children[2] = Viewpoint1668;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1669 = createNode("Anchor");
Anchor1669.description = "HAnimSite hanim_pelvis_front_close_view Viewpoint";
Anchor1669.url = new MFString(new java.lang.String["#hanim_pelvis_front_close_viewpoint"]);
LOD LOD1670 = createNode("LOD");
LOD1670.forceTransitions = True;
LOD1670.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1671 = createNode("WorldInfo");
WorldInfo1671.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1670.children = new MFNode();

LOD1670.children[0] = WorldInfo1671;

Shape Shape1672 = createNode("Shape");
Shape1672.USE = "HAnimSiteViewpointShape";
LOD1670.children[1] = Shape1672;

Anchor1669.children = new MFNode();

Anchor1669.children[0] = LOD1670;

HAnimSite1665.children[3] = Anchor1669;

HAnimHumanoid46.viewpoints[11] = HAnimSite1665;

HAnimSite HAnimSite1673 = createNode("HAnimSite");
HAnimSite1673.name = "knees_front_close_view";
HAnimSite1673.DEF = "hanim_knees_front_close_view";
HAnimSite1673.translation = new SFVec3f(new float[0,0.4,1]);
//HAnimSite visualization shape
TouchSensor TouchSensor1674 = createNode("TouchSensor");
TouchSensor1674.description = "HAnimSite knees_front_close_view";
HAnimSite1673.children = new MFNode();

HAnimSite1673.children[0] = TouchSensor1674;

Shape Shape1675 = createNode("Shape");
Shape1675.USE = "HAnimSiteShape";
HAnimSite1673.children[1] = Shape1675;

Viewpoint Viewpoint1676 = createNode("Viewpoint");
Viewpoint1676.DEF = "hanim_knees_front_close_viewpoint";
Viewpoint1676.centerOfRotation = new SFVec3f(new float[0,0.4,0]);
Viewpoint1676.description = "knees front close";
Viewpoint1676.position = new SFVec3f(new float[0,0,0]);
HAnimSite1673.children[2] = Viewpoint1676;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1677 = createNode("Anchor");
Anchor1677.description = "HAnimSite hanim_knees_front_close_view Viewpoint";
Anchor1677.url = new MFString(new java.lang.String["#hanim_knees_front_close_viewpoint"]);
LOD LOD1678 = createNode("LOD");
LOD1678.forceTransitions = True;
LOD1678.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1679 = createNode("WorldInfo");
WorldInfo1679.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1678.children = new MFNode();

LOD1678.children[0] = WorldInfo1679;

Shape Shape1680 = createNode("Shape");
Shape1680.USE = "HAnimSiteViewpointShape";
LOD1678.children[1] = Shape1680;

Anchor1677.children = new MFNode();

Anchor1677.children[0] = LOD1678;

HAnimSite1673.children[3] = Anchor1677;

HAnimHumanoid46.viewpoints[12] = HAnimSite1673;

HAnimSite HAnimSite1681 = createNode("HAnimSite");
HAnimSite1681.name = "feet_front_close_view";
HAnimSite1681.DEF = "hanim_feet_front_close_view";
HAnimSite1681.translation = new SFVec3f(new float[0,0,1]);
//HAnimSite visualization shape
TouchSensor TouchSensor1682 = createNode("TouchSensor");
TouchSensor1682.description = "HAnimSite feet_front_close_view";
HAnimSite1681.children = new MFNode();

HAnimSite1681.children[0] = TouchSensor1682;

Shape Shape1683 = createNode("Shape");
Shape1683.USE = "HAnimSiteShape";
HAnimSite1681.children[1] = Shape1683;

Viewpoint Viewpoint1684 = createNode("Viewpoint");
Viewpoint1684.DEF = "hanim_feet_front_close_viewpoint";
Viewpoint1684.description = "feet front close";
Viewpoint1684.position = new SFVec3f(new float[0,0,0]);
HAnimSite1681.children[2] = Viewpoint1684;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1685 = createNode("Anchor");
Anchor1685.description = "HAnimSite hanim_feet_front_close_view Viewpoint";
Anchor1685.url = new MFString(new java.lang.String["#hanim_feet_front_close_viewpoint"]);
LOD LOD1686 = createNode("LOD");
LOD1686.forceTransitions = True;
LOD1686.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1687 = createNode("WorldInfo");
WorldInfo1687.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1686.children = new MFNode();

LOD1686.children[0] = WorldInfo1687;

Shape Shape1688 = createNode("Shape");
Shape1688.USE = "HAnimSiteViewpointShape";
LOD1686.children[1] = Shape1688;

Anchor1685.children = new MFNode();

Anchor1685.children[0] = LOD1686;

HAnimSite1681.children[3] = Anchor1685;

HAnimHumanoid46.viewpoints[13] = HAnimSite1681;

HAnimSite HAnimSite1689 = createNode("HAnimSite");
HAnimSite1689.name = "eye_level_view";
HAnimSite1689.DEF = "hanim_eye_level_view";
HAnimSite1689.translation = new SFVec3f(new float[0,1.6332,0.0502]);
//HAnimSite visualization shape
TouchSensor TouchSensor1690 = createNode("TouchSensor");
TouchSensor1690.description = "HAnimSite eye_level_view";
HAnimSite1689.children = new MFNode();

HAnimSite1689.children[0] = TouchSensor1690;

Shape Shape1691 = createNode("Shape");
Shape1691.USE = "HAnimSiteShape";
HAnimSite1689.children[1] = Shape1691;

Viewpoint Viewpoint1692 = createNode("Viewpoint");
Viewpoint1692.DEF = "hanim_eye_level_viewpoint";
Viewpoint1692.description = "eye level looking forward";
Viewpoint1692.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint1692.position = new SFVec3f(new float[0,0,0]);
HAnimSite1689.children[2] = Viewpoint1692;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1693 = createNode("Anchor");
Anchor1693.description = "HAnimSite hanim_eye_level_view Viewpoint";
Anchor1693.url = new MFString(new java.lang.String["#hanim_eye_level_viewpoint"]);
LOD LOD1694 = createNode("LOD");
LOD1694.forceTransitions = True;
LOD1694.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1695 = createNode("WorldInfo");
WorldInfo1695.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1694.children = new MFNode();

LOD1694.children[0] = WorldInfo1695;

Shape Shape1696 = createNode("Shape");
Shape1696.USE = "HAnimSiteViewpointShape";
LOD1694.children[1] = Shape1696;

Anchor1693.children = new MFNode();

Anchor1693.children[0] = LOD1694;

HAnimSite1689.children[3] = Anchor1693;

HAnimHumanoid46.viewpoints[14] = HAnimSite1689;

HAnimSite HAnimSite1697 = createNode("HAnimSite");
HAnimSite1697.USE = "hanim_l_eyeball_site_view";
HAnimHumanoid46.viewpoints[15] = HAnimSite1697;

HAnimSite HAnimSite1698 = createNode("HAnimSite");
HAnimSite1698.USE = "hanim_r_eyeball_site_view";
HAnimHumanoid46.viewpoints[16] = HAnimSite1698;

HAnimSite HAnimSite1699 = createNode("HAnimSite");
HAnimSite1699.USE = "hanim_l_hand_front_view";
HAnimHumanoid46.viewpoints[17] = HAnimSite1699;

HAnimSite HAnimSite1700 = createNode("HAnimSite");
HAnimSite1700.USE = "hanim_r_hand_front_view";
HAnimHumanoid46.viewpoints[18] = HAnimSite1700;

HAnimJoint HAnimJoint1701 = createNode("HAnimJoint");
HAnimJoint1701.USE = "hanim_humanoid_root";
HAnimHumanoid46.joints[19] = HAnimJoint1701;

HAnimJoint HAnimJoint1702 = createNode("HAnimJoint");
HAnimJoint1702.USE = "hanim_sacroiliac";
HAnimHumanoid46.joints[20] = HAnimJoint1702;

HAnimJoint HAnimJoint1703 = createNode("HAnimJoint");
HAnimJoint1703.USE = "hanim_vl5";
HAnimHumanoid46.joints[21] = HAnimJoint1703;

HAnimJoint HAnimJoint1704 = createNode("HAnimJoint");
HAnimJoint1704.USE = "hanim_vl4";
HAnimHumanoid46.joints[22] = HAnimJoint1704;

HAnimJoint HAnimJoint1705 = createNode("HAnimJoint");
HAnimJoint1705.USE = "hanim_vl3";
HAnimHumanoid46.joints[23] = HAnimJoint1705;

HAnimJoint HAnimJoint1706 = createNode("HAnimJoint");
HAnimJoint1706.USE = "hanim_vl2";
HAnimHumanoid46.joints[24] = HAnimJoint1706;

HAnimJoint HAnimJoint1707 = createNode("HAnimJoint");
HAnimJoint1707.USE = "hanim_vl1";
HAnimHumanoid46.joints[25] = HAnimJoint1707;

HAnimJoint HAnimJoint1708 = createNode("HAnimJoint");
HAnimJoint1708.USE = "hanim_vt12";
HAnimHumanoid46.joints[26] = HAnimJoint1708;

HAnimJoint HAnimJoint1709 = createNode("HAnimJoint");
HAnimJoint1709.USE = "hanim_vt11";
HAnimHumanoid46.joints[27] = HAnimJoint1709;

HAnimJoint HAnimJoint1710 = createNode("HAnimJoint");
HAnimJoint1710.USE = "hanim_vt10";
HAnimHumanoid46.joints[28] = HAnimJoint1710;

HAnimJoint HAnimJoint1711 = createNode("HAnimJoint");
HAnimJoint1711.USE = "hanim_vt9";
HAnimHumanoid46.joints[29] = HAnimJoint1711;

HAnimJoint HAnimJoint1712 = createNode("HAnimJoint");
HAnimJoint1712.USE = "hanim_vt8";
HAnimHumanoid46.joints[30] = HAnimJoint1712;

HAnimJoint HAnimJoint1713 = createNode("HAnimJoint");
HAnimJoint1713.USE = "hanim_vt7";
HAnimHumanoid46.joints[31] = HAnimJoint1713;

HAnimJoint HAnimJoint1714 = createNode("HAnimJoint");
HAnimJoint1714.USE = "hanim_vt6";
HAnimHumanoid46.joints[32] = HAnimJoint1714;

HAnimJoint HAnimJoint1715 = createNode("HAnimJoint");
HAnimJoint1715.USE = "hanim_vt5";
HAnimHumanoid46.joints[33] = HAnimJoint1715;

HAnimJoint HAnimJoint1716 = createNode("HAnimJoint");
HAnimJoint1716.USE = "hanim_vt4";
HAnimHumanoid46.joints[34] = HAnimJoint1716;

HAnimJoint HAnimJoint1717 = createNode("HAnimJoint");
HAnimJoint1717.USE = "hanim_vt3";
HAnimHumanoid46.joints[35] = HAnimJoint1717;

HAnimJoint HAnimJoint1718 = createNode("HAnimJoint");
HAnimJoint1718.USE = "hanim_vt2";
HAnimHumanoid46.joints[36] = HAnimJoint1718;

HAnimJoint HAnimJoint1719 = createNode("HAnimJoint");
HAnimJoint1719.USE = "hanim_vt1";
HAnimHumanoid46.joints[37] = HAnimJoint1719;

HAnimJoint HAnimJoint1720 = createNode("HAnimJoint");
HAnimJoint1720.USE = "hanim_vc7";
HAnimHumanoid46.joints[38] = HAnimJoint1720;

HAnimJoint HAnimJoint1721 = createNode("HAnimJoint");
HAnimJoint1721.USE = "hanim_vc6";
HAnimHumanoid46.joints[39] = HAnimJoint1721;

HAnimJoint HAnimJoint1722 = createNode("HAnimJoint");
HAnimJoint1722.USE = "hanim_vc5";
HAnimHumanoid46.joints[40] = HAnimJoint1722;

HAnimJoint HAnimJoint1723 = createNode("HAnimJoint");
HAnimJoint1723.USE = "hanim_vc4";
HAnimHumanoid46.joints[41] = HAnimJoint1723;

HAnimJoint HAnimJoint1724 = createNode("HAnimJoint");
HAnimJoint1724.USE = "hanim_vc3";
HAnimHumanoid46.joints[42] = HAnimJoint1724;

HAnimJoint HAnimJoint1725 = createNode("HAnimJoint");
HAnimJoint1725.USE = "hanim_vc2";
HAnimHumanoid46.joints[43] = HAnimJoint1725;

HAnimJoint HAnimJoint1726 = createNode("HAnimJoint");
HAnimJoint1726.USE = "hanim_vc1";
HAnimHumanoid46.joints[44] = HAnimJoint1726;

HAnimJoint HAnimJoint1727 = createNode("HAnimJoint");
HAnimJoint1727.USE = "hanim_skullbase";
HAnimHumanoid46.joints[45] = HAnimJoint1727;

HAnimJoint HAnimJoint1728 = createNode("HAnimJoint");
HAnimJoint1728.USE = "hanim_temporomandibular";
HAnimHumanoid46.joints[46] = HAnimJoint1728;

HAnimJoint HAnimJoint1729 = createNode("HAnimJoint");
HAnimJoint1729.USE = "hanim_l_acromioclavicular";
HAnimHumanoid46.joints[47] = HAnimJoint1729;

HAnimJoint HAnimJoint1730 = createNode("HAnimJoint");
HAnimJoint1730.USE = "hanim_r_acromioclavicular";
HAnimHumanoid46.joints[48] = HAnimJoint1730;

HAnimJoint HAnimJoint1731 = createNode("HAnimJoint");
HAnimJoint1731.USE = "hanim_l_ankle";
HAnimHumanoid46.joints[49] = HAnimJoint1731;

HAnimJoint HAnimJoint1732 = createNode("HAnimJoint");
HAnimJoint1732.USE = "hanim_r_ankle";
HAnimHumanoid46.joints[50] = HAnimJoint1732;

HAnimJoint HAnimJoint1733 = createNode("HAnimJoint");
HAnimJoint1733.USE = "hanim_l_elbow";
HAnimHumanoid46.joints[51] = HAnimJoint1733;

HAnimJoint HAnimJoint1734 = createNode("HAnimJoint");
HAnimJoint1734.USE = "hanim_r_elbow";
HAnimHumanoid46.joints[52] = HAnimJoint1734;

HAnimJoint HAnimJoint1735 = createNode("HAnimJoint");
HAnimJoint1735.USE = "hanim_l_eyeball_joint";
HAnimHumanoid46.joints[53] = HAnimJoint1735;

HAnimJoint HAnimJoint1736 = createNode("HAnimJoint");
HAnimJoint1736.USE = "hanim_r_eyeball_joint";
HAnimHumanoid46.joints[54] = HAnimJoint1736;

HAnimJoint HAnimJoint1737 = createNode("HAnimJoint");
HAnimJoint1737.USE = "hanim_l_eyebrow_joint";
HAnimHumanoid46.joints[55] = HAnimJoint1737;

HAnimJoint HAnimJoint1738 = createNode("HAnimJoint");
HAnimJoint1738.USE = "hanim_r_eyebrow_joint";
HAnimHumanoid46.joints[56] = HAnimJoint1738;

HAnimJoint HAnimJoint1739 = createNode("HAnimJoint");
HAnimJoint1739.USE = "hanim_l_eyelid_joint";
HAnimHumanoid46.joints[57] = HAnimJoint1739;

HAnimJoint HAnimJoint1740 = createNode("HAnimJoint");
HAnimJoint1740.USE = "hanim_r_eyelid_joint";
HAnimHumanoid46.joints[58] = HAnimJoint1740;

HAnimJoint HAnimJoint1741 = createNode("HAnimJoint");
HAnimJoint1741.USE = "hanim_l_hip";
HAnimHumanoid46.joints[59] = HAnimJoint1741;

HAnimJoint HAnimJoint1742 = createNode("HAnimJoint");
HAnimJoint1742.USE = "hanim_r_hip";
HAnimHumanoid46.joints[60] = HAnimJoint1742;

HAnimJoint HAnimJoint1743 = createNode("HAnimJoint");
HAnimJoint1743.USE = "hanim_l_index0";
HAnimHumanoid46.joints[61] = HAnimJoint1743;

HAnimJoint HAnimJoint1744 = createNode("HAnimJoint");
HAnimJoint1744.USE = "hanim_r_index0";
HAnimHumanoid46.joints[62] = HAnimJoint1744;

HAnimJoint HAnimJoint1745 = createNode("HAnimJoint");
HAnimJoint1745.USE = "hanim_l_index1";
HAnimHumanoid46.joints[63] = HAnimJoint1745;

HAnimJoint HAnimJoint1746 = createNode("HAnimJoint");
HAnimJoint1746.USE = "hanim_r_index1";
HAnimHumanoid46.joints[64] = HAnimJoint1746;

HAnimJoint HAnimJoint1747 = createNode("HAnimJoint");
HAnimJoint1747.USE = "hanim_l_index2";
HAnimHumanoid46.joints[65] = HAnimJoint1747;

HAnimJoint HAnimJoint1748 = createNode("HAnimJoint");
HAnimJoint1748.USE = "hanim_r_index2";
HAnimHumanoid46.joints[66] = HAnimJoint1748;

HAnimJoint HAnimJoint1749 = createNode("HAnimJoint");
HAnimJoint1749.USE = "hanim_l_index3";
HAnimHumanoid46.joints[67] = HAnimJoint1749;

HAnimJoint HAnimJoint1750 = createNode("HAnimJoint");
HAnimJoint1750.USE = "hanim_r_index3";
HAnimHumanoid46.joints[68] = HAnimJoint1750;

HAnimJoint HAnimJoint1751 = createNode("HAnimJoint");
HAnimJoint1751.USE = "hanim_l_knee";
HAnimHumanoid46.joints[69] = HAnimJoint1751;

HAnimJoint HAnimJoint1752 = createNode("HAnimJoint");
HAnimJoint1752.USE = "hanim_r_knee";
HAnimHumanoid46.joints[70] = HAnimJoint1752;

HAnimJoint HAnimJoint1753 = createNode("HAnimJoint");
HAnimJoint1753.USE = "hanim_l_metatarsal";
HAnimHumanoid46.joints[71] = HAnimJoint1753;

HAnimJoint HAnimJoint1754 = createNode("HAnimJoint");
HAnimJoint1754.USE = "hanim_r_metatarsal";
HAnimHumanoid46.joints[72] = HAnimJoint1754;

HAnimJoint HAnimJoint1755 = createNode("HAnimJoint");
HAnimJoint1755.USE = "hanim_l_middle0";
HAnimHumanoid46.joints[73] = HAnimJoint1755;

HAnimJoint HAnimJoint1756 = createNode("HAnimJoint");
HAnimJoint1756.USE = "hanim_r_middle0";
HAnimHumanoid46.joints[74] = HAnimJoint1756;

HAnimJoint HAnimJoint1757 = createNode("HAnimJoint");
HAnimJoint1757.USE = "hanim_l_middle1";
HAnimHumanoid46.joints[75] = HAnimJoint1757;

HAnimJoint HAnimJoint1758 = createNode("HAnimJoint");
HAnimJoint1758.USE = "hanim_r_middle1";
HAnimHumanoid46.joints[76] = HAnimJoint1758;

HAnimJoint HAnimJoint1759 = createNode("HAnimJoint");
HAnimJoint1759.USE = "hanim_l_middle2";
HAnimHumanoid46.joints[77] = HAnimJoint1759;

HAnimJoint HAnimJoint1760 = createNode("HAnimJoint");
HAnimJoint1760.USE = "hanim_r_middle2";
HAnimHumanoid46.joints[78] = HAnimJoint1760;

HAnimJoint HAnimJoint1761 = createNode("HAnimJoint");
HAnimJoint1761.USE = "hanim_l_middle3";
HAnimHumanoid46.joints[79] = HAnimJoint1761;

HAnimJoint HAnimJoint1762 = createNode("HAnimJoint");
HAnimJoint1762.USE = "hanim_r_middle3";
HAnimHumanoid46.joints[80] = HAnimJoint1762;

HAnimJoint HAnimJoint1763 = createNode("HAnimJoint");
HAnimJoint1763.USE = "hanim_l_midtarsal";
HAnimHumanoid46.joints[81] = HAnimJoint1763;

HAnimJoint HAnimJoint1764 = createNode("HAnimJoint");
HAnimJoint1764.USE = "hanim_r_midtarsal";
HAnimHumanoid46.joints[82] = HAnimJoint1764;

HAnimJoint HAnimJoint1765 = createNode("HAnimJoint");
HAnimJoint1765.USE = "hanim_l_pinky0";
HAnimHumanoid46.joints[83] = HAnimJoint1765;

HAnimJoint HAnimJoint1766 = createNode("HAnimJoint");
HAnimJoint1766.USE = "hanim_r_pinky0";
HAnimHumanoid46.joints[84] = HAnimJoint1766;

HAnimJoint HAnimJoint1767 = createNode("HAnimJoint");
HAnimJoint1767.USE = "hanim_l_pinky1";
HAnimHumanoid46.joints[85] = HAnimJoint1767;

HAnimJoint HAnimJoint1768 = createNode("HAnimJoint");
HAnimJoint1768.USE = "hanim_r_pinky1";
HAnimHumanoid46.joints[86] = HAnimJoint1768;

HAnimJoint HAnimJoint1769 = createNode("HAnimJoint");
HAnimJoint1769.USE = "hanim_l_pinky2";
HAnimHumanoid46.joints[87] = HAnimJoint1769;

HAnimJoint HAnimJoint1770 = createNode("HAnimJoint");
HAnimJoint1770.USE = "hanim_r_pinky2";
HAnimHumanoid46.joints[88] = HAnimJoint1770;

HAnimJoint HAnimJoint1771 = createNode("HAnimJoint");
HAnimJoint1771.USE = "hanim_l_pinky3";
HAnimHumanoid46.joints[89] = HAnimJoint1771;

HAnimJoint HAnimJoint1772 = createNode("HAnimJoint");
HAnimJoint1772.USE = "hanim_r_pinky3";
HAnimHumanoid46.joints[90] = HAnimJoint1772;

HAnimJoint HAnimJoint1773 = createNode("HAnimJoint");
HAnimJoint1773.USE = "hanim_l_ring0";
HAnimHumanoid46.joints[91] = HAnimJoint1773;

HAnimJoint HAnimJoint1774 = createNode("HAnimJoint");
HAnimJoint1774.USE = "hanim_r_ring0";
HAnimHumanoid46.joints[92] = HAnimJoint1774;

HAnimJoint HAnimJoint1775 = createNode("HAnimJoint");
HAnimJoint1775.USE = "hanim_l_ring1";
HAnimHumanoid46.joints[93] = HAnimJoint1775;

HAnimJoint HAnimJoint1776 = createNode("HAnimJoint");
HAnimJoint1776.USE = "hanim_r_ring1";
HAnimHumanoid46.joints[94] = HAnimJoint1776;

HAnimJoint HAnimJoint1777 = createNode("HAnimJoint");
HAnimJoint1777.USE = "hanim_l_ring2";
HAnimHumanoid46.joints[95] = HAnimJoint1777;

HAnimJoint HAnimJoint1778 = createNode("HAnimJoint");
HAnimJoint1778.USE = "hanim_r_ring2";
HAnimHumanoid46.joints[96] = HAnimJoint1778;

HAnimJoint HAnimJoint1779 = createNode("HAnimJoint");
HAnimJoint1779.USE = "hanim_l_ring3";
HAnimHumanoid46.joints[97] = HAnimJoint1779;

HAnimJoint HAnimJoint1780 = createNode("HAnimJoint");
HAnimJoint1780.USE = "hanim_r_ring3";
HAnimHumanoid46.joints[98] = HAnimJoint1780;

HAnimJoint HAnimJoint1781 = createNode("HAnimJoint");
HAnimJoint1781.USE = "hanim_l_shoulder";
HAnimHumanoid46.joints[99] = HAnimJoint1781;

HAnimJoint HAnimJoint1782 = createNode("HAnimJoint");
HAnimJoint1782.USE = "hanim_r_shoulder";
HAnimHumanoid46.joints[100] = HAnimJoint1782;

HAnimJoint HAnimJoint1783 = createNode("HAnimJoint");
HAnimJoint1783.USE = "hanim_l_sternoclavicular";
HAnimHumanoid46.joints[101] = HAnimJoint1783;

HAnimJoint HAnimJoint1784 = createNode("HAnimJoint");
HAnimJoint1784.USE = "hanim_r_sternoclavicular";
HAnimHumanoid46.joints[102] = HAnimJoint1784;

HAnimJoint HAnimJoint1785 = createNode("HAnimJoint");
HAnimJoint1785.USE = "hanim_l_subtalar";
HAnimHumanoid46.joints[103] = HAnimJoint1785;

HAnimJoint HAnimJoint1786 = createNode("HAnimJoint");
HAnimJoint1786.USE = "hanim_r_subtalar";
HAnimHumanoid46.joints[104] = HAnimJoint1786;

HAnimJoint HAnimJoint1787 = createNode("HAnimJoint");
HAnimJoint1787.USE = "hanim_l_thumb1";
HAnimHumanoid46.joints[105] = HAnimJoint1787;

HAnimJoint HAnimJoint1788 = createNode("HAnimJoint");
HAnimJoint1788.USE = "hanim_r_thumb1";
HAnimHumanoid46.joints[106] = HAnimJoint1788;

HAnimJoint HAnimJoint1789 = createNode("HAnimJoint");
HAnimJoint1789.USE = "hanim_l_thumb2";
HAnimHumanoid46.joints[107] = HAnimJoint1789;

HAnimJoint HAnimJoint1790 = createNode("HAnimJoint");
HAnimJoint1790.USE = "hanim_r_thumb2";
HAnimHumanoid46.joints[108] = HAnimJoint1790;

HAnimJoint HAnimJoint1791 = createNode("HAnimJoint");
HAnimJoint1791.USE = "hanim_l_thumb3";
HAnimHumanoid46.joints[109] = HAnimJoint1791;

HAnimJoint HAnimJoint1792 = createNode("HAnimJoint");
HAnimJoint1792.USE = "hanim_r_thumb3";
HAnimHumanoid46.joints[110] = HAnimJoint1792;

HAnimJoint HAnimJoint1793 = createNode("HAnimJoint");
HAnimJoint1793.USE = "hanim_l_wrist";
HAnimHumanoid46.joints[111] = HAnimJoint1793;

HAnimJoint HAnimJoint1794 = createNode("HAnimJoint");
HAnimJoint1794.USE = "hanim_r_wrist";
HAnimHumanoid46.joints[112] = HAnimJoint1794;

HAnimSegment HAnimSegment1795 = createNode("HAnimSegment");
HAnimSegment1795.USE = "hanim_pelvis";
HAnimHumanoid46.segments[113] = HAnimSegment1795;

HAnimSegment HAnimSegment1796 = createNode("HAnimSegment");
HAnimSegment1796.USE = "hanim_skull";
HAnimHumanoid46.segments[114] = HAnimSegment1796;

HAnimSegment HAnimSegment1797 = createNode("HAnimSegment");
HAnimSegment1797.USE = "hanim_jaw";
HAnimHumanoid46.segments[115] = HAnimSegment1797;

HAnimSegment HAnimSegment1798 = createNode("HAnimSegment");
HAnimSegment1798.USE = "hanim_c1";
HAnimHumanoid46.segments[116] = HAnimSegment1798;

HAnimSegment HAnimSegment1799 = createNode("HAnimSegment");
HAnimSegment1799.USE = "hanim_c2";
HAnimHumanoid46.segments[117] = HAnimSegment1799;

HAnimSegment HAnimSegment1800 = createNode("HAnimSegment");
HAnimSegment1800.USE = "hanim_c3";
HAnimHumanoid46.segments[118] = HAnimSegment1800;

HAnimSegment HAnimSegment1801 = createNode("HAnimSegment");
HAnimSegment1801.USE = "hanim_c4";
HAnimHumanoid46.segments[119] = HAnimSegment1801;

HAnimSegment HAnimSegment1802 = createNode("HAnimSegment");
HAnimSegment1802.USE = "hanim_c5";
HAnimHumanoid46.segments[120] = HAnimSegment1802;

HAnimSegment HAnimSegment1803 = createNode("HAnimSegment");
HAnimSegment1803.USE = "hanim_c6";
HAnimHumanoid46.segments[121] = HAnimSegment1803;

HAnimSegment HAnimSegment1804 = createNode("HAnimSegment");
HAnimSegment1804.USE = "hanim_c7";
HAnimHumanoid46.segments[122] = HAnimSegment1804;

HAnimSegment HAnimSegment1805 = createNode("HAnimSegment");
HAnimSegment1805.USE = "hanim_t1";
HAnimHumanoid46.segments[123] = HAnimSegment1805;

HAnimSegment HAnimSegment1806 = createNode("HAnimSegment");
HAnimSegment1806.USE = "hanim_t2";
HAnimHumanoid46.segments[124] = HAnimSegment1806;

HAnimSegment HAnimSegment1807 = createNode("HAnimSegment");
HAnimSegment1807.USE = "hanim_t3";
HAnimHumanoid46.segments[125] = HAnimSegment1807;

HAnimSegment HAnimSegment1808 = createNode("HAnimSegment");
HAnimSegment1808.USE = "hanim_t4";
HAnimHumanoid46.segments[126] = HAnimSegment1808;

HAnimSegment HAnimSegment1809 = createNode("HAnimSegment");
HAnimSegment1809.USE = "hanim_t5";
HAnimHumanoid46.segments[127] = HAnimSegment1809;

HAnimSegment HAnimSegment1810 = createNode("HAnimSegment");
HAnimSegment1810.USE = "hanim_t6";
HAnimHumanoid46.segments[128] = HAnimSegment1810;

HAnimSegment HAnimSegment1811 = createNode("HAnimSegment");
HAnimSegment1811.USE = "hanim_t7";
HAnimHumanoid46.segments[129] = HAnimSegment1811;

HAnimSegment HAnimSegment1812 = createNode("HAnimSegment");
HAnimSegment1812.USE = "hanim_t8";
HAnimHumanoid46.segments[130] = HAnimSegment1812;

HAnimSegment HAnimSegment1813 = createNode("HAnimSegment");
HAnimSegment1813.USE = "hanim_t9";
HAnimHumanoid46.segments[131] = HAnimSegment1813;

HAnimSegment HAnimSegment1814 = createNode("HAnimSegment");
HAnimSegment1814.USE = "hanim_t10";
HAnimHumanoid46.segments[132] = HAnimSegment1814;

HAnimSegment HAnimSegment1815 = createNode("HAnimSegment");
HAnimSegment1815.USE = "hanim_t11";
HAnimHumanoid46.segments[133] = HAnimSegment1815;

HAnimSegment HAnimSegment1816 = createNode("HAnimSegment");
HAnimSegment1816.USE = "hanim_t12";
HAnimHumanoid46.segments[134] = HAnimSegment1816;

HAnimSegment HAnimSegment1817 = createNode("HAnimSegment");
HAnimSegment1817.USE = "hanim_l1";
HAnimHumanoid46.segments[135] = HAnimSegment1817;

HAnimSegment HAnimSegment1818 = createNode("HAnimSegment");
HAnimSegment1818.USE = "hanim_l2";
HAnimHumanoid46.segments[136] = HAnimSegment1818;

HAnimSegment HAnimSegment1819 = createNode("HAnimSegment");
HAnimSegment1819.USE = "hanim_l3";
HAnimHumanoid46.segments[137] = HAnimSegment1819;

HAnimSegment HAnimSegment1820 = createNode("HAnimSegment");
HAnimSegment1820.USE = "hanim_l4";
HAnimHumanoid46.segments[138] = HAnimSegment1820;

HAnimSegment HAnimSegment1821 = createNode("HAnimSegment");
HAnimSegment1821.USE = "hanim_l5";
HAnimHumanoid46.segments[139] = HAnimSegment1821;

HAnimSegment HAnimSegment1822 = createNode("HAnimSegment");
HAnimSegment1822.USE = "hanim_sacrum";
HAnimHumanoid46.segments[140] = HAnimSegment1822;

HAnimSegment HAnimSegment1823 = createNode("HAnimSegment");
HAnimSegment1823.USE = "hanim_l_calf";
HAnimHumanoid46.segments[141] = HAnimSegment1823;

HAnimSegment HAnimSegment1824 = createNode("HAnimSegment");
HAnimSegment1824.USE = "hanim_r_calf";
HAnimHumanoid46.segments[142] = HAnimSegment1824;

HAnimSegment HAnimSegment1825 = createNode("HAnimSegment");
HAnimSegment1825.USE = "hanim_l_clavicle";
HAnimHumanoid46.segments[143] = HAnimSegment1825;

HAnimSegment HAnimSegment1826 = createNode("HAnimSegment");
HAnimSegment1826.USE = "hanim_r_clavicle";
HAnimHumanoid46.segments[144] = HAnimSegment1826;

HAnimSegment HAnimSegment1827 = createNode("HAnimSegment");
HAnimSegment1827.USE = "hanim_l_eyeball";
HAnimHumanoid46.segments[145] = HAnimSegment1827;

HAnimSegment HAnimSegment1828 = createNode("HAnimSegment");
HAnimSegment1828.USE = "hanim_r_eyeball";
HAnimHumanoid46.segments[146] = HAnimSegment1828;

HAnimSegment HAnimSegment1829 = createNode("HAnimSegment");
HAnimSegment1829.USE = "hanim_l_eyebrow";
HAnimHumanoid46.segments[147] = HAnimSegment1829;

HAnimSegment HAnimSegment1830 = createNode("HAnimSegment");
HAnimSegment1830.USE = "hanim_r_eyebrow";
HAnimHumanoid46.segments[148] = HAnimSegment1830;

HAnimSegment HAnimSegment1831 = createNode("HAnimSegment");
HAnimSegment1831.USE = "hanim_l_eyelid";
HAnimHumanoid46.segments[149] = HAnimSegment1831;

HAnimSegment HAnimSegment1832 = createNode("HAnimSegment");
HAnimSegment1832.USE = "hanim_r_eyelid";
HAnimHumanoid46.segments[150] = HAnimSegment1832;

HAnimSegment HAnimSegment1833 = createNode("HAnimSegment");
HAnimSegment1833.USE = "hanim_l_forearm";
HAnimHumanoid46.segments[151] = HAnimSegment1833;

HAnimSegment HAnimSegment1834 = createNode("HAnimSegment");
HAnimSegment1834.USE = "hanim_r_forearm";
HAnimHumanoid46.segments[152] = HAnimSegment1834;

HAnimSegment HAnimSegment1835 = createNode("HAnimSegment");
HAnimSegment1835.USE = "hanim_l_forefoot";
HAnimHumanoid46.segments[153] = HAnimSegment1835;

HAnimSegment HAnimSegment1836 = createNode("HAnimSegment");
HAnimSegment1836.USE = "hanim_r_forefoot";
HAnimHumanoid46.segments[154] = HAnimSegment1836;

HAnimSegment HAnimSegment1837 = createNode("HAnimSegment");
HAnimSegment1837.USE = "hanim_l_hand";
HAnimHumanoid46.segments[155] = HAnimSegment1837;

HAnimSegment HAnimSegment1838 = createNode("HAnimSegment");
HAnimSegment1838.USE = "hanim_r_hand";
HAnimHumanoid46.segments[156] = HAnimSegment1838;

HAnimSegment HAnimSegment1839 = createNode("HAnimSegment");
HAnimSegment1839.USE = "hanim_l_hindfoot";
HAnimHumanoid46.segments[157] = HAnimSegment1839;

HAnimSegment HAnimSegment1840 = createNode("HAnimSegment");
HAnimSegment1840.USE = "hanim_r_hindfoot";
HAnimHumanoid46.segments[158] = HAnimSegment1840;

HAnimSegment HAnimSegment1841 = createNode("HAnimSegment");
HAnimSegment1841.USE = "hanim_l_index_distal";
HAnimHumanoid46.segments[159] = HAnimSegment1841;

HAnimSegment HAnimSegment1842 = createNode("HAnimSegment");
HAnimSegment1842.USE = "hanim_r_index_distal";
HAnimHumanoid46.segments[160] = HAnimSegment1842;

HAnimSegment HAnimSegment1843 = createNode("HAnimSegment");
HAnimSegment1843.USE = "hanim_l_index_metacarpal";
HAnimHumanoid46.segments[161] = HAnimSegment1843;

HAnimSegment HAnimSegment1844 = createNode("HAnimSegment");
HAnimSegment1844.USE = "hanim_r_index_metacarpal";
HAnimHumanoid46.segments[162] = HAnimSegment1844;

HAnimSegment HAnimSegment1845 = createNode("HAnimSegment");
HAnimSegment1845.USE = "hanim_l_index_middle";
HAnimHumanoid46.segments[163] = HAnimSegment1845;

HAnimSegment HAnimSegment1846 = createNode("HAnimSegment");
HAnimSegment1846.USE = "hanim_r_index_middle";
HAnimHumanoid46.segments[164] = HAnimSegment1846;

HAnimSegment HAnimSegment1847 = createNode("HAnimSegment");
HAnimSegment1847.USE = "hanim_l_index_proximal";
HAnimHumanoid46.segments[165] = HAnimSegment1847;

HAnimSegment HAnimSegment1848 = createNode("HAnimSegment");
HAnimSegment1848.USE = "hanim_r_index_proximal";
HAnimHumanoid46.segments[166] = HAnimSegment1848;

HAnimSegment HAnimSegment1849 = createNode("HAnimSegment");
HAnimSegment1849.USE = "hanim_l_middistal";
HAnimHumanoid46.segments[167] = HAnimSegment1849;

HAnimSegment HAnimSegment1850 = createNode("HAnimSegment");
HAnimSegment1850.USE = "hanim_r_middistal";
HAnimHumanoid46.segments[168] = HAnimSegment1850;

HAnimSegment HAnimSegment1851 = createNode("HAnimSegment");
HAnimSegment1851.USE = "hanim_l_middle_distal";
HAnimHumanoid46.segments[169] = HAnimSegment1851;

HAnimSegment HAnimSegment1852 = createNode("HAnimSegment");
HAnimSegment1852.USE = "hanim_r_middle_distal";
HAnimHumanoid46.segments[170] = HAnimSegment1852;

HAnimSegment HAnimSegment1853 = createNode("HAnimSegment");
HAnimSegment1853.USE = "hanim_l_middle_metacarpal";
HAnimHumanoid46.segments[171] = HAnimSegment1853;

HAnimSegment HAnimSegment1854 = createNode("HAnimSegment");
HAnimSegment1854.USE = "hanim_r_middle_metacarpal";
HAnimHumanoid46.segments[172] = HAnimSegment1854;

HAnimSegment HAnimSegment1855 = createNode("HAnimSegment");
HAnimSegment1855.USE = "hanim_l_middle_middle";
HAnimHumanoid46.segments[173] = HAnimSegment1855;

HAnimSegment HAnimSegment1856 = createNode("HAnimSegment");
HAnimSegment1856.USE = "hanim_r_middle_middle";
HAnimHumanoid46.segments[174] = HAnimSegment1856;

HAnimSegment HAnimSegment1857 = createNode("HAnimSegment");
HAnimSegment1857.USE = "hanim_l_middle_proximal";
HAnimHumanoid46.segments[175] = HAnimSegment1857;

HAnimSegment HAnimSegment1858 = createNode("HAnimSegment");
HAnimSegment1858.USE = "hanim_r_middle_proximal";
HAnimHumanoid46.segments[176] = HAnimSegment1858;

HAnimSegment HAnimSegment1859 = createNode("HAnimSegment");
HAnimSegment1859.USE = "hanim_l_midproximal";
HAnimHumanoid46.segments[177] = HAnimSegment1859;

HAnimSegment HAnimSegment1860 = createNode("HAnimSegment");
HAnimSegment1860.USE = "hanim_r_midproximal";
HAnimHumanoid46.segments[178] = HAnimSegment1860;

HAnimSegment HAnimSegment1861 = createNode("HAnimSegment");
HAnimSegment1861.USE = "hanim_l_pinky_distal";
HAnimHumanoid46.segments[179] = HAnimSegment1861;

HAnimSegment HAnimSegment1862 = createNode("HAnimSegment");
HAnimSegment1862.USE = "hanim_r_pinky_distal";
HAnimHumanoid46.segments[180] = HAnimSegment1862;

HAnimSegment HAnimSegment1863 = createNode("HAnimSegment");
HAnimSegment1863.USE = "hanim_l_pinky_metacarpal";
HAnimHumanoid46.segments[181] = HAnimSegment1863;

HAnimSegment HAnimSegment1864 = createNode("HAnimSegment");
HAnimSegment1864.USE = "hanim_r_pinky_metacarpal";
HAnimHumanoid46.segments[182] = HAnimSegment1864;

HAnimSegment HAnimSegment1865 = createNode("HAnimSegment");
HAnimSegment1865.USE = "hanim_l_pinky_middle";
HAnimHumanoid46.segments[183] = HAnimSegment1865;

HAnimSegment HAnimSegment1866 = createNode("HAnimSegment");
HAnimSegment1866.USE = "hanim_r_pinky_middle";
HAnimHumanoid46.segments[184] = HAnimSegment1866;

HAnimSegment HAnimSegment1867 = createNode("HAnimSegment");
HAnimSegment1867.USE = "hanim_l_pinky_proximal";
HAnimHumanoid46.segments[185] = HAnimSegment1867;

HAnimSegment HAnimSegment1868 = createNode("HAnimSegment");
HAnimSegment1868.USE = "hanim_r_pinky_proximal";
HAnimHumanoid46.segments[186] = HAnimSegment1868;

HAnimSegment HAnimSegment1869 = createNode("HAnimSegment");
HAnimSegment1869.USE = "hanim_l_ring_distal";
HAnimHumanoid46.segments[187] = HAnimSegment1869;

HAnimSegment HAnimSegment1870 = createNode("HAnimSegment");
HAnimSegment1870.USE = "hanim_r_ring_distal";
HAnimHumanoid46.segments[188] = HAnimSegment1870;

HAnimSegment HAnimSegment1871 = createNode("HAnimSegment");
HAnimSegment1871.USE = "hanim_l_ring_metacarpal";
HAnimHumanoid46.segments[189] = HAnimSegment1871;

HAnimSegment HAnimSegment1872 = createNode("HAnimSegment");
HAnimSegment1872.USE = "hanim_r_ring_metacarpal";
HAnimHumanoid46.segments[190] = HAnimSegment1872;

HAnimSegment HAnimSegment1873 = createNode("HAnimSegment");
HAnimSegment1873.USE = "hanim_l_ring_middle";
HAnimHumanoid46.segments[191] = HAnimSegment1873;

HAnimSegment HAnimSegment1874 = createNode("HAnimSegment");
HAnimSegment1874.USE = "hanim_r_ring_middle";
HAnimHumanoid46.segments[192] = HAnimSegment1874;

HAnimSegment HAnimSegment1875 = createNode("HAnimSegment");
HAnimSegment1875.USE = "hanim_l_ring_proximal";
HAnimHumanoid46.segments[193] = HAnimSegment1875;

HAnimSegment HAnimSegment1876 = createNode("HAnimSegment");
HAnimSegment1876.USE = "hanim_r_ring_proximal";
HAnimHumanoid46.segments[194] = HAnimSegment1876;

HAnimSegment HAnimSegment1877 = createNode("HAnimSegment");
HAnimSegment1877.USE = "hanim_l_scapula";
HAnimHumanoid46.segments[195] = HAnimSegment1877;

HAnimSegment HAnimSegment1878 = createNode("HAnimSegment");
HAnimSegment1878.USE = "hanim_r_scapula";
HAnimHumanoid46.segments[196] = HAnimSegment1878;

HAnimSegment HAnimSegment1879 = createNode("HAnimSegment");
HAnimSegment1879.USE = "hanim_l_thigh";
HAnimHumanoid46.segments[197] = HAnimSegment1879;

HAnimSegment HAnimSegment1880 = createNode("HAnimSegment");
HAnimSegment1880.USE = "hanim_r_thigh";
HAnimHumanoid46.segments[198] = HAnimSegment1880;

HAnimSegment HAnimSegment1881 = createNode("HAnimSegment");
HAnimSegment1881.USE = "hanim_l_thumb_distal";
HAnimHumanoid46.segments[199] = HAnimSegment1881;

HAnimSegment HAnimSegment1882 = createNode("HAnimSegment");
HAnimSegment1882.USE = "hanim_r_thumb_distal";
HAnimHumanoid46.segments[200] = HAnimSegment1882;

HAnimSegment HAnimSegment1883 = createNode("HAnimSegment");
HAnimSegment1883.USE = "hanim_l_thumb_metacarpal";
HAnimHumanoid46.segments[201] = HAnimSegment1883;

HAnimSegment HAnimSegment1884 = createNode("HAnimSegment");
HAnimSegment1884.USE = "hanim_r_thumb_metacarpal";
HAnimHumanoid46.segments[202] = HAnimSegment1884;

HAnimSegment HAnimSegment1885 = createNode("HAnimSegment");
HAnimSegment1885.USE = "hanim_l_thumb_proximal";
HAnimHumanoid46.segments[203] = HAnimSegment1885;

HAnimSegment HAnimSegment1886 = createNode("HAnimSegment");
HAnimSegment1886.USE = "hanim_r_thumb_proximal";
HAnimHumanoid46.segments[204] = HAnimSegment1886;

HAnimSegment HAnimSegment1887 = createNode("HAnimSegment");
HAnimSegment1887.USE = "hanim_l_upperarm";
HAnimHumanoid46.segments[205] = HAnimSegment1887;

HAnimSegment HAnimSegment1888 = createNode("HAnimSegment");
HAnimSegment1888.USE = "hanim_r_upperarm";
HAnimHumanoid46.segments[206] = HAnimSegment1888;

HAnimSite HAnimSite1889 = createNode("HAnimSite");
HAnimSite1889.USE = "hanim_crotch_pt";
HAnimHumanoid46.viewpoints[207] = HAnimSite1889;

HAnimSite HAnimSite1890 = createNode("HAnimSite");
HAnimSite1890.USE = "hanim_skull_tip";
HAnimHumanoid46.viewpoints[208] = HAnimSite1890;

HAnimSite HAnimSite1891 = createNode("HAnimSite");
HAnimSite1891.USE = "hanim_sellion_pt";
HAnimHumanoid46.viewpoints[209] = HAnimSite1891;

HAnimSite HAnimSite1892 = createNode("HAnimSite");
HAnimSite1892.USE = "hanim_supramenton_pt";
HAnimHumanoid46.viewpoints[210] = HAnimSite1892;

HAnimSite HAnimSite1893 = createNode("HAnimSite");
HAnimSite1893.USE = "hanim_nuchale_pt";
HAnimHumanoid46.viewpoints[211] = HAnimSite1893;

HAnimSite HAnimSite1894 = createNode("HAnimSite");
HAnimSite1894.USE = "hanim_suprasternale_pt";
HAnimHumanoid46.viewpoints[212] = HAnimSite1894;

HAnimSite HAnimSite1895 = createNode("HAnimSite");
HAnimSite1895.USE = "hanim_cervicale_pt";
HAnimHumanoid46.viewpoints[213] = HAnimSite1895;

HAnimSite HAnimSite1896 = createNode("HAnimSite");
HAnimSite1896.USE = "hanim_substernale_pt";
HAnimHumanoid46.viewpoints[214] = HAnimSite1896;

HAnimSite HAnimSite1897 = createNode("HAnimSite");
HAnimSite1897.USE = "hanim_rib10_midspine_pt";
HAnimHumanoid46.viewpoints[215] = HAnimSite1897;

HAnimSite HAnimSite1898 = createNode("HAnimSite");
HAnimSite1898.USE = "hanim_waist_preferred_post_pt";
HAnimHumanoid46.viewpoints[216] = HAnimSite1898;

HAnimSite HAnimSite1899 = createNode("HAnimSite");
HAnimSite1899.USE = "hanim_navel_pt";
HAnimHumanoid46.viewpoints[217] = HAnimSite1899;

HAnimSite HAnimSite1900 = createNode("HAnimSite");
HAnimSite1900.USE = "hanim_l_acromion_pt";
HAnimHumanoid46.viewpoints[218] = HAnimSite1900;

HAnimSite HAnimSite1901 = createNode("HAnimSite");
HAnimSite1901.USE = "hanim_r_acromion_pt";
HAnimHumanoid46.viewpoints[219] = HAnimSite1901;

HAnimSite HAnimSite1902 = createNode("HAnimSite");
HAnimSite1902.USE = "hanim_r_asis_pt";
HAnimHumanoid46.viewpoints[220] = HAnimSite1902;

HAnimSite HAnimSite1903 = createNode("HAnimSite");
HAnimSite1903.USE = "hanim_l_asis_pt";
HAnimHumanoid46.viewpoints[221] = HAnimSite1903;

HAnimSite HAnimSite1904 = createNode("HAnimSite");
HAnimSite1904.USE = "hanim_l_axilla_ant_pt";
HAnimHumanoid46.viewpoints[222] = HAnimSite1904;

HAnimSite HAnimSite1905 = createNode("HAnimSite");
HAnimSite1905.USE = "hanim_r_axilla_ant_pt";
HAnimHumanoid46.viewpoints[223] = HAnimSite1905;

HAnimSite HAnimSite1906 = createNode("HAnimSite");
HAnimSite1906.USE = "hanim_l_axilla_post_pt";
HAnimHumanoid46.viewpoints[224] = HAnimSite1906;

HAnimSite HAnimSite1907 = createNode("HAnimSite");
HAnimSite1907.USE = "hanim_r_axilla_post_pt";
HAnimHumanoid46.viewpoints[225] = HAnimSite1907;

HAnimSite HAnimSite1908 = createNode("HAnimSite");
HAnimSite1908.USE = "hanim_l_calcaneous_post_pt";
HAnimHumanoid46.viewpoints[226] = HAnimSite1908;

HAnimSite HAnimSite1909 = createNode("HAnimSite");
HAnimSite1909.USE = "hanim_r_calcaneous_post_pt";
HAnimHumanoid46.viewpoints[227] = HAnimSite1909;

HAnimSite HAnimSite1910 = createNode("HAnimSite");
HAnimSite1910.USE = "hanim_l_clavicale_pt";
HAnimHumanoid46.viewpoints[228] = HAnimSite1910;

HAnimSite HAnimSite1911 = createNode("HAnimSite");
HAnimSite1911.USE = "hanim_r_clavicale_pt";
HAnimHumanoid46.viewpoints[229] = HAnimSite1911;

HAnimSite HAnimSite1912 = createNode("HAnimSite");
HAnimSite1912.USE = "hanim_l_dactylion_pt";
HAnimHumanoid46.viewpoints[230] = HAnimSite1912;

HAnimSite HAnimSite1913 = createNode("HAnimSite");
HAnimSite1913.USE = "hanim_r_dactylion_pt";
HAnimHumanoid46.viewpoints[231] = HAnimSite1913;

HAnimSite HAnimSite1914 = createNode("HAnimSite");
HAnimSite1914.USE = "hanim_l_digit2_pt";
HAnimHumanoid46.viewpoints[232] = HAnimSite1914;

HAnimSite HAnimSite1915 = createNode("HAnimSite");
HAnimSite1915.USE = "hanim_r_digit2_pt";
HAnimHumanoid46.viewpoints[233] = HAnimSite1915;

HAnimSite HAnimSite1916 = createNode("HAnimSite");
HAnimSite1916.USE = "hanim_l_femoral_lateral_epicn_pt";
HAnimHumanoid46.viewpoints[234] = HAnimSite1916;

HAnimSite HAnimSite1917 = createNode("HAnimSite");
HAnimSite1917.USE = "hanim_r_femoral_lateral_epicn_pt";
HAnimHumanoid46.viewpoints[235] = HAnimSite1917;

HAnimSite HAnimSite1918 = createNode("HAnimSite");
HAnimSite1918.USE = "hanim_l_femoral_medial_epicn_pt";
HAnimHumanoid46.viewpoints[236] = HAnimSite1918;

HAnimSite HAnimSite1919 = createNode("HAnimSite");
HAnimSite1919.USE = "hanim_r_femoral_medial_epicn_pt";
HAnimHumanoid46.viewpoints[237] = HAnimSite1919;

HAnimSite HAnimSite1920 = createNode("HAnimSite");
HAnimSite1920.USE = "hanim_l_forefoot_tip";
HAnimHumanoid46.viewpoints[238] = HAnimSite1920;

HAnimSite HAnimSite1921 = createNode("HAnimSite");
HAnimSite1921.USE = "hanim_r_forefoot_tip";
HAnimHumanoid46.viewpoints[239] = HAnimSite1921;

HAnimSite HAnimSite1922 = createNode("HAnimSite");
HAnimSite1922.USE = "hanim_r_gonion_pt";
HAnimHumanoid46.viewpoints[240] = HAnimSite1922;

HAnimSite HAnimSite1923 = createNode("HAnimSite");
HAnimSite1923.USE = "hanim_l_gonion_pt";
HAnimHumanoid46.viewpoints[241] = HAnimSite1923;

HAnimSite HAnimSite1924 = createNode("HAnimSite");
HAnimSite1924.USE = "hanim_l_humeral_lateral_epicn_pt";
HAnimHumanoid46.viewpoints[242] = HAnimSite1924;

HAnimSite HAnimSite1925 = createNode("HAnimSite");
HAnimSite1925.USE = "hanim_r_humeral_lateral_epicn_pt";
HAnimHumanoid46.viewpoints[243] = HAnimSite1925;

HAnimSite HAnimSite1926 = createNode("HAnimSite");
HAnimSite1926.USE = "hanim_l_humeral_medial_epicn_pt";
HAnimHumanoid46.viewpoints[244] = HAnimSite1926;

HAnimSite HAnimSite1927 = createNode("HAnimSite");
HAnimSite1927.USE = "hanim_r_humeral_medial_epicn_pt";
HAnimHumanoid46.viewpoints[245] = HAnimSite1927;

HAnimSite HAnimSite1928 = createNode("HAnimSite");
HAnimSite1928.USE = "hanim_r_iliocristale_pt";
HAnimHumanoid46.viewpoints[246] = HAnimSite1928;

HAnimSite HAnimSite1929 = createNode("HAnimSite");
HAnimSite1929.USE = "hanim_l_iliocristale_pt";
HAnimHumanoid46.viewpoints[247] = HAnimSite1929;

HAnimSite HAnimSite1930 = createNode("HAnimSite");
HAnimSite1930.USE = "hanim_l_index_distal_tip";
HAnimHumanoid46.viewpoints[248] = HAnimSite1930;

HAnimSite HAnimSite1931 = createNode("HAnimSite");
HAnimSite1931.USE = "hanim_r_index_distal_tip";
HAnimHumanoid46.viewpoints[249] = HAnimSite1931;

HAnimSite HAnimSite1932 = createNode("HAnimSite");
HAnimSite1932.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid46.viewpoints[250] = HAnimSite1932;

HAnimSite HAnimSite1933 = createNode("HAnimSite");
HAnimSite1933.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid46.viewpoints[251] = HAnimSite1933;

HAnimSite HAnimSite1934 = createNode("HAnimSite");
HAnimSite1934.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid46.viewpoints[252] = HAnimSite1934;

HAnimSite HAnimSite1935 = createNode("HAnimSite");
HAnimSite1935.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid46.viewpoints[253] = HAnimSite1935;

HAnimSite HAnimSite1936 = createNode("HAnimSite");
HAnimSite1936.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid46.viewpoints[254] = HAnimSite1936;

HAnimSite HAnimSite1937 = createNode("HAnimSite");
HAnimSite1937.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid46.viewpoints[255] = HAnimSite1937;

HAnimSite HAnimSite1938 = createNode("HAnimSite");
HAnimSite1938.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid46.viewpoints[256] = HAnimSite1938;

HAnimSite HAnimSite1939 = createNode("HAnimSite");
HAnimSite1939.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid46.viewpoints[257] = HAnimSite1939;

HAnimSite HAnimSite1940 = createNode("HAnimSite");
HAnimSite1940.USE = "hanim_l_metacarpal_pha2_pt";
HAnimHumanoid46.viewpoints[258] = HAnimSite1940;

HAnimSite HAnimSite1941 = createNode("HAnimSite");
HAnimSite1941.USE = "hanim_r_metacarpal_pha2_pt";
HAnimHumanoid46.viewpoints[259] = HAnimSite1941;

HAnimSite HAnimSite1942 = createNode("HAnimSite");
HAnimSite1942.USE = "hanim_l_metacarpal_pha5_pt";
HAnimHumanoid46.viewpoints[260] = HAnimSite1942;

HAnimSite HAnimSite1943 = createNode("HAnimSite");
HAnimSite1943.USE = "hanim_r_metacarpal_pha5_pt";
HAnimHumanoid46.viewpoints[261] = HAnimSite1943;

HAnimSite HAnimSite1944 = createNode("HAnimSite");
HAnimSite1944.USE = "hanim_l_metatarsal_pha1_pt";
HAnimHumanoid46.viewpoints[262] = HAnimSite1944;

HAnimSite HAnimSite1945 = createNode("HAnimSite");
HAnimSite1945.USE = "hanim_r_metatarsal_pha1_pt";
HAnimHumanoid46.viewpoints[263] = HAnimSite1945;

HAnimSite HAnimSite1946 = createNode("HAnimSite");
HAnimSite1946.USE = "hanim_l_metatarsal_pha5_pt";
HAnimHumanoid46.viewpoints[264] = HAnimSite1946;

HAnimSite HAnimSite1947 = createNode("HAnimSite");
HAnimSite1947.USE = "hanim_r_metatarsal_pha5_pt";
HAnimHumanoid46.viewpoints[265] = HAnimSite1947;

HAnimSite HAnimSite1948 = createNode("HAnimSite");
HAnimSite1948.USE = "hanim_l_middle_distal_tip";
HAnimHumanoid46.viewpoints[266] = HAnimSite1948;

HAnimSite HAnimSite1949 = createNode("HAnimSite");
HAnimSite1949.USE = "hanim_r_middle_distal_tip";
HAnimHumanoid46.viewpoints[267] = HAnimSite1949;

HAnimSite HAnimSite1950 = createNode("HAnimSite");
HAnimSite1950.USE = "hanim_r_neck_base_pt";
HAnimHumanoid46.viewpoints[268] = HAnimSite1950;

HAnimSite HAnimSite1951 = createNode("HAnimSite");
HAnimSite1951.USE = "hanim_l_neck_base_pt";
HAnimHumanoid46.viewpoints[269] = HAnimSite1951;

HAnimSite HAnimSite1952 = createNode("HAnimSite");
HAnimSite1952.USE = "hanim_l_olecranon_pt";
HAnimHumanoid46.viewpoints[270] = HAnimSite1952;

HAnimSite HAnimSite1953 = createNode("HAnimSite");
HAnimSite1953.USE = "hanim_r_olecranon_pt";
HAnimHumanoid46.viewpoints[271] = HAnimSite1953;

HAnimSite HAnimSite1954 = createNode("HAnimSite");
HAnimSite1954.USE = "hanim_l_pinky_distal_tip";
HAnimHumanoid46.viewpoints[272] = HAnimSite1954;

HAnimSite HAnimSite1955 = createNode("HAnimSite");
HAnimSite1955.USE = "hanim_r_pinky_distal_tip";
HAnimHumanoid46.viewpoints[273] = HAnimSite1955;

HAnimSite HAnimSite1956 = createNode("HAnimSite");
HAnimSite1956.USE = "hanim_r_psis_pt";
HAnimHumanoid46.viewpoints[274] = HAnimSite1956;

HAnimSite HAnimSite1957 = createNode("HAnimSite");
HAnimSite1957.USE = "hanim_l_psis_pt";
HAnimHumanoid46.viewpoints[275] = HAnimSite1957;

HAnimSite HAnimSite1958 = createNode("HAnimSite");
HAnimSite1958.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid46.viewpoints[276] = HAnimSite1958;

HAnimSite HAnimSite1959 = createNode("HAnimSite");
HAnimSite1959.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid46.viewpoints[277] = HAnimSite1959;

HAnimSite HAnimSite1960 = createNode("HAnimSite");
HAnimSite1960.USE = "hanim_l_radiale_pt";
HAnimHumanoid46.viewpoints[278] = HAnimSite1960;

HAnimSite HAnimSite1961 = createNode("HAnimSite");
HAnimSite1961.USE = "hanim_r_radiale_pt";
HAnimHumanoid46.viewpoints[279] = HAnimSite1961;

HAnimSite HAnimSite1962 = createNode("HAnimSite");
HAnimSite1962.USE = "hanim_r_rib10_pt";
HAnimHumanoid46.viewpoints[280] = HAnimSite1962;

HAnimSite HAnimSite1963 = createNode("HAnimSite");
HAnimSite1963.USE = "hanim_l_rib10_pt";
HAnimHumanoid46.viewpoints[281] = HAnimSite1963;

HAnimSite HAnimSite1964 = createNode("HAnimSite");
HAnimSite1964.USE = "hanim_l_ring_distal_tip";
HAnimHumanoid46.viewpoints[282] = HAnimSite1964;

HAnimSite HAnimSite1965 = createNode("HAnimSite");
HAnimSite1965.USE = "hanim_r_ring_distal_tip";
HAnimHumanoid46.viewpoints[283] = HAnimSite1965;

HAnimSite HAnimSite1966 = createNode("HAnimSite");
HAnimSite1966.USE = "hanim_temporomandibular_l_site_pt";
HAnimHumanoid46.viewpoints[284] = HAnimSite1966;

HAnimSite HAnimSite1967 = createNode("HAnimSite");
HAnimSite1967.USE = "hanim_temporomandibular_r_site_pt";
HAnimHumanoid46.viewpoints[285] = HAnimSite1967;

HAnimSite HAnimSite1968 = createNode("HAnimSite");
HAnimSite1968.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid46.viewpoints[286] = HAnimSite1968;

HAnimSite HAnimSite1969 = createNode("HAnimSite");
HAnimSite1969.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid46.viewpoints[287] = HAnimSite1969;

HAnimSite HAnimSite1970 = createNode("HAnimSite");
HAnimSite1970.USE = "hanim_r_thelion_pt";
HAnimHumanoid46.viewpoints[288] = HAnimSite1970;

HAnimSite HAnimSite1971 = createNode("HAnimSite");
HAnimSite1971.USE = "hanim_l_thelion_pt";
HAnimHumanoid46.viewpoints[289] = HAnimSite1971;

HAnimSite HAnimSite1972 = createNode("HAnimSite");
HAnimSite1972.USE = "hanim_l_thumb_distal_tip";
HAnimHumanoid46.viewpoints[290] = HAnimSite1972;

HAnimSite HAnimSite1973 = createNode("HAnimSite");
HAnimSite1973.USE = "hanim_r_thumb_distal_tip";
HAnimHumanoid46.viewpoints[291] = HAnimSite1973;

HAnimSite HAnimSite1974 = createNode("HAnimSite");
HAnimSite1974.USE = "hanim_r_tragion_pt";
HAnimHumanoid46.viewpoints[292] = HAnimSite1974;

HAnimSite HAnimSite1975 = createNode("HAnimSite");
HAnimSite1975.USE = "hanim_l_tragion_pt";
HAnimHumanoid46.viewpoints[293] = HAnimSite1975;

HAnimSite HAnimSite1976 = createNode("HAnimSite");
HAnimSite1976.USE = "hanim_r_trochanterion_pt";
HAnimHumanoid46.viewpoints[294] = HAnimSite1976;

HAnimSite HAnimSite1977 = createNode("HAnimSite");
HAnimSite1977.USE = "hanim_l_trochanterion_pt";
HAnimHumanoid46.viewpoints[295] = HAnimSite1977;

HAnimSite HAnimSite1978 = createNode("HAnimSite");
HAnimSite1978.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid46.viewpoints[296] = HAnimSite1978;

HAnimSite HAnimSite1979 = createNode("HAnimSite");
HAnimSite1979.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid46.viewpoints[297] = HAnimSite1979;

children[12] = HAnimHumanoid46;

}
