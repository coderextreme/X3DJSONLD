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
meta3.content = "HAnim1SpecificationLOA3Illustrated.x3d";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "description";
meta4.content = "HAnim Specification reference example providing full coverage and visibility of all specified HAnim constructs, also suitable for re-use as an authoring template. Geometry visualizations are derived from HAnim1SpecificationLOA3Invisible.x3d visualization report. Resusable exemplar animations also added via heads-up display (HUD) interface to confirm proper parent-child relationships.";
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
meta8.name = "creator";
meta8.content = "Matthew T. Beitler, Joe D. Williams, Don Brutzman";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "Image";
meta9.content = "HAnim1SpecificationLOA3Illustrated.png";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "Image";
meta10.content = "HAnim1SpecificationLOA3IllustratedLeftSide.png";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "reference";
meta11.content = "HAnim1SpecificationLOA3Invisible.x3d";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "reference";
meta12.content = "HAnim1SpecificationLOA3Animation.x3d";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "reference";
meta13.content = "HAnimSpecificationExampleChangeLog.txt";
head1.meta[11] = meta13;

let meta14 = browser.currentScene.createNode("meta");
meta14.name = "Image";
meta14.content = "images/BonesAllSkeletonFrontViewLOA1.png";
head1.meta[12] = meta14;

let meta15 = browser.currentScene.createNode("meta");
meta15.name = "Image";
meta15.content = "images/BonesAllSkeletonFrontViewLOA2.png";
head1.meta[13] = meta15;

let meta16 = browser.currentScene.createNode("meta");
meta16.name = "Image";
meta16.content = "images/BonesAllSkeletonFrontViewLOA3.png";
head1.meta[14] = meta16;

let meta17 = browser.currentScene.createNode("meta");
meta17.name = "TODO";
meta17.content = "move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations";
head1.meta[15] = meta17;

let meta18 = browser.currentScene.createNode("meta");
meta18.name = "warning";
meta18.content = "BS Contact and H3DViewer have polygon-culling problems at close range (possibly related to avatarSize), other players look OK";
head1.meta[16] = meta18;

let meta19 = browser.currentScene.createNode("meta");
meta19.name = "TODO";
meta19.content = "insert MetadataInteger nodes indicating LOA for each Joint and Segment";
head1.meta[17] = meta19;

let meta20 = browser.currentScene.createNode("meta");
meta20.name = "reference";
meta20.content = "Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989.";
head1.meta[18] = meta20;

let meta21 = browser.currentScene.createNode("meta");
meta21.name = "reference";
meta21.content = "http://www.cis.upenn.edu/~badler/anthro/89-71.ps";
head1.meta[19] = meta21;

let meta22 = browser.currentScene.createNode("meta");
meta22.name = "reference";
meta22.content = "tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf";
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
meta28.name = "reference";
meta28.content = "HAnim Specification Table 4.4 - Face Joint object names, https://www.web3d.org/files/specifications/19774/V1.0/HAnim/concepts.html#FaceJointObjectNames";
head1.meta[26] = meta28;

let meta29 = browser.currentScene.createNode("meta");
meta29.name = "generator";
meta29.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[27] = meta29;

let meta30 = browser.currentScene.createNode("meta");
meta30.name = "identifier";
meta30.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/HAnim1SpecificationLOA3Illustrated.x3d";
head1.meta[28] = meta30;

let meta31 = browser.currentScene.createNode("meta");
meta31.name = "license";
meta31.content = "../license.html";
head1.meta[29] = meta31;

head = head1;

let Background33 = browser.currentScene.createNode("Background");
Background33.skyColor = new MFColor(new float[0.3,0.3,0.3]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Background33;

let NavigationInfo34 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children[1] = NavigationInfo34;

let Group35 = browser.currentScene.createNode("Group");
Group35.DEF = "Original_WorldInfo";
let WorldInfo36 = browser.currentScene.createNode("WorldInfo");
WorldInfo36.info = new MFString(new java.lang.String[" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "]);
WorldInfo36.title = "HANIM 200x Default Joint Centers, LOA3";
Group35.children = new MFNode();

Group35.children[0] = WorldInfo36;

browser.currentScene.children[2] = Group35;

//TODO move viewpoints to be internal to HAnimHumanoid
//Viewpoint centerOfRotation=\"0 0.9149 0.0016\" matches initial at-rest locaton of the sacroliac. Note that these viewpoints are external to the HAnimHumanoid and do not move with the human.
let Viewpoint37 = browser.currentScene.createNode("Viewpoint");
Viewpoint37.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint37.description = "Humanoid LOA 3 Front";
Viewpoint37.position = new SFVec3f(new float[0,0.4,4]);
browser.currentScene.children[3] = Viewpoint37;

let Viewpoint38 = browser.currentScene.createNode("Viewpoint");
Viewpoint38.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint38.description = "Humanoid LOA 3 Front Close";
Viewpoint38.position = new SFVec3f(new float[0,0.8,2]);
browser.currentScene.children[4] = Viewpoint38;

let Viewpoint39 = browser.currentScene.createNode("Viewpoint");
Viewpoint39.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint39.description = "Humanoid LOA 3 Front Closer";
Viewpoint39.position = new SFVec3f(new float[0,1.2,1]);
browser.currentScene.children[5] = Viewpoint39;

let Viewpoint40 = browser.currentScene.createNode("Viewpoint");
Viewpoint40.centerOfRotation = new SFVec3f(new float[0,1.5,0.0016]);
Viewpoint40.description = "Humanoid LOA 3 Front Face";
Viewpoint40.position = new SFVec3f(new float[0,1.63,1]);
browser.currentScene.children[6] = Viewpoint40;

let Viewpoint41 = browser.currentScene.createNode("Viewpoint");
Viewpoint41.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint41.description = "Humanoid LOA 3 Right Side";
Viewpoint41.orientation = new SFRotation(new float[0,1,0,1.5708]);
Viewpoint41.position = new SFVec3f(new float[2.6,0.8,0]);
browser.currentScene.children[7] = Viewpoint41;

let Viewpoint42 = browser.currentScene.createNode("Viewpoint");
Viewpoint42.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint42.description = "Humanoid LOA 3 Right Side Close";
Viewpoint42.orientation = new SFRotation(new float[0,1,0,1.2]);
Viewpoint42.position = new SFVec3f(new float[1,0.8,0.5]);
browser.currentScene.children[8] = Viewpoint42;

let Viewpoint43 = browser.currentScene.createNode("Viewpoint");
Viewpoint43.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint43.description = "Humanoid LOA 3 Left Side Close";
Viewpoint43.orientation = new SFRotation(new float[0,1,0,-1.2]);
Viewpoint43.position = new SFVec3f(new float[-1,0.8,0.5]);
browser.currentScene.children[9] = Viewpoint43;

let Viewpoint44 = browser.currentScene.createNode("Viewpoint");
Viewpoint44.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint44.description = "Humanoid LOA 3 Left Side";
Viewpoint44.orientation = new SFRotation(new float[0,1,0,-1.5708]);
Viewpoint44.position = new SFVec3f(new float[-2.6,0.8,0]);
browser.currentScene.children[10] = Viewpoint44;

let Viewpoint45 = browser.currentScene.createNode("Viewpoint");
Viewpoint45.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint45.description = "Humanoid LOA 3 Top";
Viewpoint45.orientation = new SFRotation(new float[1,0,0,-1.5708]);
Viewpoint45.position = new SFVec3f(new float[0,3.5,0]);
browser.currentScene.children[11] = Viewpoint45;

let HAnimHumanoid46 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid46.name = "humanoid";
HAnimHumanoid46.DEF = "hanim_humanoid";
HAnimHumanoid46.info = new MFString(new java.lang.String["authorName=Matthew T. Beitler Joe D. Williams Don Brutzman","authorEmail=HAnim@web3D.org","copyright=none","creationDate=12 May 1999","usageRestrictions=none","humanoidVersion=2.0","height=1.7504"]);
HAnimHumanoid46.version = "1.0";
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
//right between the eyes, stationary position not animating except with body itself
let HAnimJoint47 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint47.name = "humanoid_root";
HAnimJoint47.DEF = "hanim_humanoid_root";
HAnimJoint47.center = new SFVec3f(new float[0,0.824,0.0277]);
HAnimJoint47.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint47.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment48 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment48.name = "sacrum";
HAnimSegment48.DEF = "hanim_sacrum";
//<HAnimJoint name='humanoid_root'/> visualization sphere is placed within <HAnimSegment name='sacrum'/>
let TouchSensor49 = browser.currentScene.createNode("TouchSensor");
TouchSensor49.description = "HAnimJoint HumanoidRoot, HAnimSegment sacrum";
HAnimSegment48.children = new MFNode();

HAnimSegment48.children[0] = TouchSensor49;

let Transform50 = browser.currentScene.createNode("Transform");
Transform50.translation = new SFVec3f(new float[0,0.824,0.0277]);
let Shape51 = browser.currentScene.createNode("Shape");
Shape51.DEF = "HAnimJointShape";
let Sphere52 = browser.currentScene.createNode("Sphere");
Sphere52.radius = 0.006;
Shape51.geometry = Sphere52;

let Appearance53 = browser.currentScene.createNode("Appearance");
Appearance53.DEF = "HAnimJointAppearance";
let Material54 = browser.currentScene.createNode("Material");
Material54.diffuseColor = new SFColor(new float[1,0.5,0]);
Material54.transparency = 0.5;
Appearance53.material = Material54;

Shape51.appearance = Appearance53;

Transform50.children = new MFNode();

Transform50.children[0] = Shape51;

HAnimSegment48.children[1] = Transform50;

//HAnimSegment visualization line segment from parent <HAnimJoint name='humanoid_root'/> to <HAnimJoint name='sacroiliac'/>
let Shape55 = browser.currentScene.createNode("Shape");
let LineSet56 = browser.currentScene.createNode("LineSet");
LineSet56.vertexCount = new MFInt32(new int[2]);
let Coordinate57 = browser.currentScene.createNode("Coordinate");
Coordinate57.point = new MFVec3f(new float[0,0.824,0.0277,0,0.9149,0.0016]);
LineSet56.coord = Coordinate57;

let ColorRGBA58 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA58.DEF = "HAnimSegmentLineColorRGBA";
ColorRGBA58.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1]);
LineSet56.color = ColorRGBA58;

Shape55.geometry = LineSet56;

HAnimSegment48.children[2] = Shape55;

//HAnimSegment visualization line segment from parent <HAnimJoint name='humanoid_root'/> to <HAnimJoint name='vl5'/>
let Shape59 = browser.currentScene.createNode("Shape");
let LineSet60 = browser.currentScene.createNode("LineSet");
LineSet60.vertexCount = new MFInt32(new int[2]);
let Coordinate61 = browser.currentScene.createNode("Coordinate");
Coordinate61.point = new MFVec3f(new float[0,0.824,0.0277,0.0028,1.0568,-0.0776]);
LineSet60.coord = Coordinate61;

let ColorRGBA62 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA62.USE = "HAnimSegmentLineColorRGBA";
LineSet60.color = ColorRGBA62;

Shape59.geometry = LineSet60;

HAnimSegment48.children[3] = Shape59;

HAnimJoint47.children = new MFNode();

HAnimJoint47.children[0] = HAnimSegment48;

let HAnimJoint63 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint63.name = "sacroiliac";
HAnimJoint63.DEF = "hanim_sacroiliac";
HAnimJoint63.center = new SFVec3f(new float[0,0.9149,0.0016]);
HAnimJoint63.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint63.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment64 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment64.name = "pelvis";
HAnimSegment64.DEF = "hanim_pelvis";
//<HAnimJoint name='sacroiliac'/> visualization sphere is placed within <HAnimSegment name='pelvis'/>
let TouchSensor65 = browser.currentScene.createNode("TouchSensor");
TouchSensor65.description = "HAnimJoint sacroiliac, HAnimSegment pelvis";
HAnimSegment64.children = new MFNode();

HAnimSegment64.children[0] = TouchSensor65;

let Transform66 = browser.currentScene.createNode("Transform");
Transform66.translation = new SFVec3f(new float[0,0.9149,0.0016]);
let Shape67 = browser.currentScene.createNode("Shape");
Shape67.USE = "HAnimJointShape";
Transform66.children = new MFNode();

Transform66.children[0] = Shape67;

HAnimSegment64.children[1] = Transform66;

//HAnimSegment visualization line segment from parent <HAnimJoint name='sacroiliac'/> to <HAnimJoint name='l_hip'/>
let Shape68 = browser.currentScene.createNode("Shape");
let LineSet69 = browser.currentScene.createNode("LineSet");
LineSet69.vertexCount = new MFInt32(new int[2]);
let Coordinate70 = browser.currentScene.createNode("Coordinate");
Coordinate70.point = new MFVec3f(new float[0,0.9149,0.0016,0.0961,0.9124,-0.0001]);
LineSet69.coord = Coordinate70;

let ColorRGBA71 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA71.USE = "HAnimSegmentLineColorRGBA";
LineSet69.color = ColorRGBA71;

Shape68.geometry = LineSet69;

HAnimSegment64.children[2] = Shape68;

//HAnimSegment visualization line segment from parent <HAnimJoint name='sacroiliac'/> to <HAnimJoint name='r_hip'/>
let Shape72 = browser.currentScene.createNode("Shape");
let LineSet73 = browser.currentScene.createNode("LineSet");
LineSet73.vertexCount = new MFInt32(new int[2]);
let Coordinate74 = browser.currentScene.createNode("Coordinate");
Coordinate74.point = new MFVec3f(new float[0,0.9149,0.0016,-0.0961,0.9124,-0.0001]);
LineSet73.coord = Coordinate74;

let ColorRGBA75 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA75.USE = "HAnimSegmentLineColorRGBA";
LineSet73.color = ColorRGBA75;

Shape72.geometry = LineSet73;

HAnimSegment64.children[3] = Shape72;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_iliocristale'/>
let Shape76 = browser.currentScene.createNode("Shape");
let LineSet77 = browser.currentScene.createNode("LineSet");
LineSet77.vertexCount = new MFInt32(new int[2]);
let Coordinate78 = browser.currentScene.createNode("Coordinate");
Coordinate78.point = new MFVec3f(new float[0,0.9149,0.0016,-0.1525,1.0628,0.0035]);
LineSet77.coord = Coordinate78;

let ColorRGBA79 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA79.DEF = "HAnimSiteLineColorRGBA";
ColorRGBA79.color = new MFColorRGBA(new float[1,0,0,1,1,0,0,0.1]);
LineSet77.color = ColorRGBA79;

Shape76.geometry = LineSet77;

HAnimSegment64.children[4] = Shape76;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_trochanterion'/>
let Shape80 = browser.currentScene.createNode("Shape");
let LineSet81 = browser.currentScene.createNode("LineSet");
LineSet81.vertexCount = new MFInt32(new int[2]);
let Coordinate82 = browser.currentScene.createNode("Coordinate");
Coordinate82.point = new MFVec3f(new float[0,0.9149,0.0016,-0.1689,0.8419,0.0352]);
LineSet81.coord = Coordinate82;

let ColorRGBA83 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA83.USE = "HAnimSiteLineColorRGBA";
LineSet81.color = ColorRGBA83;

Shape80.geometry = LineSet81;

HAnimSegment64.children[5] = Shape80;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_iliocristale'/>
let Shape84 = browser.currentScene.createNode("Shape");
let LineSet85 = browser.currentScene.createNode("LineSet");
LineSet85.vertexCount = new MFInt32(new int[2]);
let Coordinate86 = browser.currentScene.createNode("Coordinate");
Coordinate86.point = new MFVec3f(new float[0,0.9149,0.0016,0.1612,1.0537,0.0008]);
LineSet85.coord = Coordinate86;

let ColorRGBA87 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA87.USE = "HAnimSiteLineColorRGBA";
LineSet85.color = ColorRGBA87;

Shape84.geometry = LineSet85;

HAnimSegment64.children[6] = Shape84;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_trochanterion'/>
let Shape88 = browser.currentScene.createNode("Shape");
let LineSet89 = browser.currentScene.createNode("LineSet");
LineSet89.vertexCount = new MFInt32(new int[2]);
let Coordinate90 = browser.currentScene.createNode("Coordinate");
Coordinate90.point = new MFVec3f(new float[0,0.9149,0.0016,0.1677,0.8336,0.0303]);
LineSet89.coord = Coordinate90;

let ColorRGBA91 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA91.USE = "HAnimSiteLineColorRGBA";
LineSet89.color = ColorRGBA91;

Shape88.geometry = LineSet89;

HAnimSegment64.children[7] = Shape88;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_asis'/>
let Shape92 = browser.currentScene.createNode("Shape");
let LineSet93 = browser.currentScene.createNode("LineSet");
LineSet93.vertexCount = new MFInt32(new int[2]);
let Coordinate94 = browser.currentScene.createNode("Coordinate");
Coordinate94.point = new MFVec3f(new float[0,0.9149,0.0016,-0.0887,1.0021,0.1112]);
LineSet93.coord = Coordinate94;

let ColorRGBA95 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA95.USE = "HAnimSiteLineColorRGBA";
LineSet93.color = ColorRGBA95;

Shape92.geometry = LineSet93;

HAnimSegment64.children[8] = Shape92;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_asis'/>
let Shape96 = browser.currentScene.createNode("Shape");
let LineSet97 = browser.currentScene.createNode("LineSet");
LineSet97.vertexCount = new MFInt32(new int[2]);
let Coordinate98 = browser.currentScene.createNode("Coordinate");
Coordinate98.point = new MFVec3f(new float[0,0.9149,0.0016,0.0925,0.9983,0.1052]);
LineSet97.coord = Coordinate98;

let ColorRGBA99 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA99.USE = "HAnimSiteLineColorRGBA";
LineSet97.color = ColorRGBA99;

Shape96.geometry = LineSet97;

HAnimSegment64.children[9] = Shape96;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_psis'/>
let Shape100 = browser.currentScene.createNode("Shape");
let LineSet101 = browser.currentScene.createNode("LineSet");
LineSet101.vertexCount = new MFInt32(new int[2]);
let Coordinate102 = browser.currentScene.createNode("Coordinate");
Coordinate102.point = new MFVec3f(new float[0,0.9149,0.0016,-0.0716,1.019,-0.1138]);
LineSet101.coord = Coordinate102;

let ColorRGBA103 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA103.USE = "HAnimSiteLineColorRGBA";
LineSet101.color = ColorRGBA103;

Shape100.geometry = LineSet101;

HAnimSegment64.children[10] = Shape100;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_psis'/>
let Shape104 = browser.currentScene.createNode("Shape");
let LineSet105 = browser.currentScene.createNode("LineSet");
LineSet105.vertexCount = new MFInt32(new int[2]);
let Coordinate106 = browser.currentScene.createNode("Coordinate");
Coordinate106.point = new MFVec3f(new float[0,0.9149,0.0016,0.0774,1.019,-0.1151]);
LineSet105.coord = Coordinate106;

let ColorRGBA107 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA107.USE = "HAnimSiteLineColorRGBA";
LineSet105.color = ColorRGBA107;

Shape104.geometry = LineSet105;

HAnimSegment64.children[11] = Shape104;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='crotch'/>
let Shape108 = browser.currentScene.createNode("Shape");
let LineSet109 = browser.currentScene.createNode("LineSet");
LineSet109.vertexCount = new MFInt32(new int[2]);
let Coordinate110 = browser.currentScene.createNode("Coordinate");
Coordinate110.point = new MFVec3f(new float[0,0.9149,0.0016,0.0034,0.8266,0.0257]);
LineSet109.coord = Coordinate110;

let ColorRGBA111 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA111.USE = "HAnimSiteLineColorRGBA";
LineSet109.color = ColorRGBA111;

Shape108.geometry = LineSet109;

HAnimSegment64.children[12] = Shape108;

let HAnimSite112 = browser.currentScene.createNode("HAnimSite");
HAnimSite112.name = "r_iliocristale_pt";
HAnimSite112.DEF = "hanim_r_iliocristale_pt";
HAnimSite112.translation = new SFVec3f(new float[-0.1525,1.0628,0.0035]);
//HAnimSite visualization shape
let TouchSensor113 = browser.currentScene.createNode("TouchSensor");
TouchSensor113.description = "HAnimSite r_iliocristale";
HAnimSite112.children = new MFNode();

HAnimSite112.children[0] = TouchSensor113;

let Shape114 = browser.currentScene.createNode("Shape");
Shape114.DEF = "HAnimSiteShape";
let IndexedFaceSet115 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet115.DEF = "DiamondIFS";
IndexedFaceSet115.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet115.creaseAngle = 0.5;
IndexedFaceSet115.solid = False;
let Coordinate116 = browser.currentScene.createNode("Coordinate");
Coordinate116.point = new MFVec3f(new float[0,0.008,0,-0.008,0,0,0,0,0.008,0.008,0,0,0,0,-0.008,0,-0.008,0]);
IndexedFaceSet115.coord = Coordinate116;

Shape114.geometry = IndexedFaceSet115;

let Appearance117 = browser.currentScene.createNode("Appearance");
let Material118 = browser.currentScene.createNode("Material");
Material118.diffuseColor = new SFColor(new float[1,0,0]);
Appearance117.material = Material118;

Shape114.appearance = Appearance117;

HAnimSite112.children[1] = Shape114;

HAnimSegment64.children[13] = HAnimSite112;

let HAnimSite119 = browser.currentScene.createNode("HAnimSite");
HAnimSite119.name = "r_trochanterion_pt";
HAnimSite119.DEF = "hanim_r_trochanterion_pt";
HAnimSite119.translation = new SFVec3f(new float[-0.1689,0.8419,0.0352]);
//HAnimSite visualization shape
let TouchSensor120 = browser.currentScene.createNode("TouchSensor");
TouchSensor120.description = "HAnimSite r_trochanterion";
HAnimSite119.children = new MFNode();

HAnimSite119.children[0] = TouchSensor120;

let Shape121 = browser.currentScene.createNode("Shape");
Shape121.USE = "HAnimSiteShape";
HAnimSite119.children[1] = Shape121;

HAnimSegment64.children[14] = HAnimSite119;

let HAnimSite122 = browser.currentScene.createNode("HAnimSite");
HAnimSite122.name = "l_iliocristale_pt";
HAnimSite122.DEF = "hanim_l_iliocristale_pt";
HAnimSite122.translation = new SFVec3f(new float[0.1612,1.0537,0.0008]);
//HAnimSite visualization shape
let TouchSensor123 = browser.currentScene.createNode("TouchSensor");
TouchSensor123.description = "HAnimSite l_iliocristale";
HAnimSite122.children = new MFNode();

HAnimSite122.children[0] = TouchSensor123;

let Shape124 = browser.currentScene.createNode("Shape");
Shape124.USE = "HAnimSiteShape";
HAnimSite122.children[1] = Shape124;

HAnimSegment64.children[15] = HAnimSite122;

let HAnimSite125 = browser.currentScene.createNode("HAnimSite");
HAnimSite125.name = "l_trochanterion_pt";
HAnimSite125.DEF = "hanim_l_trochanterion_pt";
HAnimSite125.translation = new SFVec3f(new float[0.1677,0.8336,0.0303]);
//HAnimSite visualization shape
let TouchSensor126 = browser.currentScene.createNode("TouchSensor");
TouchSensor126.description = "HAnimSite l_trochanterion";
HAnimSite125.children = new MFNode();

HAnimSite125.children[0] = TouchSensor126;

let Shape127 = browser.currentScene.createNode("Shape");
Shape127.USE = "HAnimSiteShape";
HAnimSite125.children[1] = Shape127;

HAnimSegment64.children[16] = HAnimSite125;

let HAnimSite128 = browser.currentScene.createNode("HAnimSite");
HAnimSite128.name = "r_asis_pt";
HAnimSite128.DEF = "hanim_r_asis_pt";
HAnimSite128.translation = new SFVec3f(new float[-0.0887,1.0021,0.1112]);
//HAnimSite visualization shape
let TouchSensor129 = browser.currentScene.createNode("TouchSensor");
TouchSensor129.description = "HAnimSite r_asis";
HAnimSite128.children = new MFNode();

HAnimSite128.children[0] = TouchSensor129;

let Shape130 = browser.currentScene.createNode("Shape");
Shape130.USE = "HAnimSiteShape";
HAnimSite128.children[1] = Shape130;

HAnimSegment64.children[17] = HAnimSite128;

let HAnimSite131 = browser.currentScene.createNode("HAnimSite");
HAnimSite131.name = "l_asis_pt";
HAnimSite131.DEF = "hanim_l_asis_pt";
HAnimSite131.translation = new SFVec3f(new float[0.0925,0.9983,0.1052]);
//HAnimSite visualization shape
let TouchSensor132 = browser.currentScene.createNode("TouchSensor");
TouchSensor132.description = "HAnimSite l_asis";
HAnimSite131.children = new MFNode();

HAnimSite131.children[0] = TouchSensor132;

let Shape133 = browser.currentScene.createNode("Shape");
Shape133.USE = "HAnimSiteShape";
HAnimSite131.children[1] = Shape133;

HAnimSegment64.children[18] = HAnimSite131;

let HAnimSite134 = browser.currentScene.createNode("HAnimSite");
HAnimSite134.name = "r_psis_pt";
HAnimSite134.DEF = "hanim_r_psis_pt";
HAnimSite134.translation = new SFVec3f(new float[-0.0716,1.019,-0.1138]);
//HAnimSite visualization shape
let TouchSensor135 = browser.currentScene.createNode("TouchSensor");
TouchSensor135.description = "HAnimSite r_psis";
HAnimSite134.children = new MFNode();

HAnimSite134.children[0] = TouchSensor135;

let Shape136 = browser.currentScene.createNode("Shape");
Shape136.USE = "HAnimSiteShape";
HAnimSite134.children[1] = Shape136;

HAnimSegment64.children[19] = HAnimSite134;

let HAnimSite137 = browser.currentScene.createNode("HAnimSite");
HAnimSite137.name = "l_psis_pt";
HAnimSite137.DEF = "hanim_l_psis_pt";
HAnimSite137.translation = new SFVec3f(new float[0.0774,1.019,-0.1151]);
//HAnimSite visualization shape
let TouchSensor138 = browser.currentScene.createNode("TouchSensor");
TouchSensor138.description = "HAnimSite l_psis";
HAnimSite137.children = new MFNode();

HAnimSite137.children[0] = TouchSensor138;

let Shape139 = browser.currentScene.createNode("Shape");
Shape139.USE = "HAnimSiteShape";
HAnimSite137.children[1] = Shape139;

HAnimSegment64.children[20] = HAnimSite137;

let HAnimSite140 = browser.currentScene.createNode("HAnimSite");
HAnimSite140.name = "crotch_pt";
HAnimSite140.DEF = "hanim_crotch_pt";
HAnimSite140.translation = new SFVec3f(new float[0.0034,0.8266,0.0257]);
//HAnimSite visualization shape
let TouchSensor141 = browser.currentScene.createNode("TouchSensor");
TouchSensor141.description = "HAnimSite crotch";
HAnimSite140.children = new MFNode();

HAnimSite140.children[0] = TouchSensor141;

let Shape142 = browser.currentScene.createNode("Shape");
Shape142.USE = "HAnimSiteShape";
HAnimSite140.children[1] = Shape142;

HAnimSegment64.children[21] = HAnimSite140;

HAnimJoint63.children = new MFNode();

HAnimJoint63.children[0] = HAnimSegment64;

let HAnimJoint143 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint143.name = "l_hip";
HAnimJoint143.DEF = "hanim_l_hip";
HAnimJoint143.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
HAnimJoint143.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint143.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment144 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment144.name = "l_thigh";
HAnimSegment144.DEF = "hanim_l_thigh";
//<HAnimJoint name='l_hip'/> visualization sphere is placed within <HAnimSegment name='l_thigh'/>
let TouchSensor145 = browser.currentScene.createNode("TouchSensor");
TouchSensor145.description = "HAnimJoint l_hip, HAnimSegment l_thigh";
HAnimSegment144.children = new MFNode();

HAnimSegment144.children[0] = TouchSensor145;

let Transform146 = browser.currentScene.createNode("Transform");
Transform146.translation = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
let Shape147 = browser.currentScene.createNode("Shape");
Shape147.USE = "HAnimJointShape";
Transform146.children = new MFNode();

Transform146.children[0] = Shape147;

HAnimSegment144.children[1] = Transform146;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_hip'/> to <HAnimJoint name='l_knee'/>
let Shape148 = browser.currentScene.createNode("Shape");
let LineSet149 = browser.currentScene.createNode("LineSet");
LineSet149.vertexCount = new MFInt32(new int[2]);
let Coordinate150 = browser.currentScene.createNode("Coordinate");
Coordinate150.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.104,0.4867,0.0308]);
LineSet149.coord = Coordinate150;

let ColorRGBA151 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA151.USE = "HAnimSegmentLineColorRGBA";
LineSet149.color = ColorRGBA151;

Shape148.geometry = LineSet149;

HAnimSegment144.children[2] = Shape148;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_knee_crease'/>
let Shape152 = browser.currentScene.createNode("Shape");
let LineSet153 = browser.currentScene.createNode("LineSet");
LineSet153.vertexCount = new MFInt32(new int[2]);
let Coordinate154 = browser.currentScene.createNode("Coordinate");
Coordinate154.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.0993,0.4881,-0.0309]);
LineSet153.coord = Coordinate154;

let ColorRGBA155 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA155.USE = "HAnimSiteLineColorRGBA";
LineSet153.color = ColorRGBA155;

Shape152.geometry = LineSet153;

HAnimSegment144.children[3] = Shape152;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_lateral_epicn'/>
let Shape156 = browser.currentScene.createNode("Shape");
let LineSet157 = browser.currentScene.createNode("LineSet");
LineSet157.vertexCount = new MFInt32(new int[2]);
let Coordinate158 = browser.currentScene.createNode("Coordinate");
Coordinate158.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.1598,0.4967,0.0297]);
LineSet157.coord = Coordinate158;

let ColorRGBA159 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA159.USE = "HAnimSiteLineColorRGBA";
LineSet157.color = ColorRGBA159;

Shape156.geometry = LineSet157;

HAnimSegment144.children[4] = Shape156;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_medial_epicn'/>
let Shape160 = browser.currentScene.createNode("Shape");
let LineSet161 = browser.currentScene.createNode("LineSet");
LineSet161.vertexCount = new MFInt32(new int[2]);
let Coordinate162 = browser.currentScene.createNode("Coordinate");
Coordinate162.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.0398,0.4946,0.0303]);
LineSet161.coord = Coordinate162;

let ColorRGBA163 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA163.USE = "HAnimSiteLineColorRGBA";
LineSet161.color = ColorRGBA163;

Shape160.geometry = LineSet161;

HAnimSegment144.children[5] = Shape160;

let HAnimSite164 = browser.currentScene.createNode("HAnimSite");
HAnimSite164.name = "l_knee_crease_pt";
HAnimSite164.DEF = "hanim_l_knee_crease_pt";
HAnimSite164.translation = new SFVec3f(new float[0.0993,0.4881,-0.0309]);
//HAnimSite visualization shape
let TouchSensor165 = browser.currentScene.createNode("TouchSensor");
TouchSensor165.description = "HAnimSite l_knee_crease";
HAnimSite164.children = new MFNode();

HAnimSite164.children[0] = TouchSensor165;

let Shape166 = browser.currentScene.createNode("Shape");
Shape166.USE = "HAnimSiteShape";
HAnimSite164.children[1] = Shape166;

HAnimSegment144.children[6] = HAnimSite164;

let HAnimSite167 = browser.currentScene.createNode("HAnimSite");
HAnimSite167.name = "l_femoral_lateral_epicn_pt";
HAnimSite167.DEF = "hanim_l_femoral_lateral_epicn_pt";
HAnimSite167.translation = new SFVec3f(new float[0.1598,0.4967,0.0297]);
//HAnimSite visualization shape
let TouchSensor168 = browser.currentScene.createNode("TouchSensor");
TouchSensor168.description = "HAnimSite l_femoral_lateral_epicn";
HAnimSite167.children = new MFNode();

HAnimSite167.children[0] = TouchSensor168;

let Shape169 = browser.currentScene.createNode("Shape");
Shape169.USE = "HAnimSiteShape";
HAnimSite167.children[1] = Shape169;

HAnimSegment144.children[7] = HAnimSite167;

let HAnimSite170 = browser.currentScene.createNode("HAnimSite");
HAnimSite170.name = "l_femoral_medial_epicn_pt";
HAnimSite170.DEF = "hanim_l_femoral_medial_epicn_pt";
HAnimSite170.translation = new SFVec3f(new float[0.0398,0.4946,0.0303]);
//HAnimSite visualization shape
let TouchSensor171 = browser.currentScene.createNode("TouchSensor");
TouchSensor171.description = "HAnimSite l_femoral_medial_epicn";
HAnimSite170.children = new MFNode();

HAnimSite170.children[0] = TouchSensor171;

let Shape172 = browser.currentScene.createNode("Shape");
Shape172.USE = "HAnimSiteShape";
HAnimSite170.children[1] = Shape172;

HAnimSegment144.children[8] = HAnimSite170;

HAnimJoint143.children = new MFNode();

HAnimJoint143.children[0] = HAnimSegment144;

let HAnimJoint173 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint173.name = "l_knee";
HAnimJoint173.DEF = "hanim_l_knee";
HAnimJoint173.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
HAnimJoint173.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint173.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment174 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment174.name = "l_calf";
HAnimSegment174.DEF = "hanim_l_calf";
//<HAnimJoint name='l_knee'/> visualization sphere is placed within <HAnimSegment name='l_calf'/>
let TouchSensor175 = browser.currentScene.createNode("TouchSensor");
TouchSensor175.description = "HAnimJoint l_knee, HAnimSegment l_calf";
HAnimSegment174.children = new MFNode();

HAnimSegment174.children[0] = TouchSensor175;

let Transform176 = browser.currentScene.createNode("Transform");
Transform176.translation = new SFVec3f(new float[0.104,0.4867,0.0308]);
let Shape177 = browser.currentScene.createNode("Shape");
Shape177.USE = "HAnimJointShape";
Transform176.children = new MFNode();

Transform176.children[0] = Shape177;

HAnimSegment174.children[1] = Transform176;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_knee'/> to <HAnimJoint name='l_ankle'/>
let Shape178 = browser.currentScene.createNode("Shape");
let LineSet179 = browser.currentScene.createNode("LineSet");
LineSet179.vertexCount = new MFInt32(new int[2]);
let Coordinate180 = browser.currentScene.createNode("Coordinate");
Coordinate180.point = new MFVec3f(new float[0.104,0.4867,0.0308,0.1101,0.0656,-0.0736]);
LineSet179.coord = Coordinate180;

let ColorRGBA181 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA181.USE = "HAnimSegmentLineColorRGBA";
LineSet179.color = ColorRGBA181;

Shape178.geometry = LineSet179;

HAnimSegment174.children[2] = Shape178;

HAnimJoint173.children = new MFNode();

HAnimJoint173.children[0] = HAnimSegment174;

let HAnimJoint182 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint182.name = "l_ankle";
HAnimJoint182.DEF = "hanim_l_ankle";
HAnimJoint182.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
HAnimJoint182.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint182.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment183 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment183.name = "l_hindfoot";
HAnimSegment183.DEF = "hanim_l_hindfoot";
//<HAnimJoint name='l_ankle'/> visualization sphere is placed within <HAnimSegment name='l_hindfoot'/>
let TouchSensor184 = browser.currentScene.createNode("TouchSensor");
TouchSensor184.description = "HAnimJoint l_ankle, HAnimSegment l_hindfoot";
HAnimSegment183.children = new MFNode();

HAnimSegment183.children[0] = TouchSensor184;

let Transform185 = browser.currentScene.createNode("Transform");
Transform185.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let Shape186 = browser.currentScene.createNode("Shape");
Shape186.USE = "HAnimJointShape";
Transform185.children = new MFNode();

Transform185.children[0] = Shape186;

HAnimSegment183.children[1] = Transform185;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ankle'/> to <HAnimJoint name='l_subtalar'/>
let Shape187 = browser.currentScene.createNode("Shape");
let LineSet188 = browser.currentScene.createNode("LineSet");
LineSet188.vertexCount = new MFInt32(new int[2]);
let Coordinate189 = browser.currentScene.createNode("Coordinate");
Coordinate189.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.1086,0.0001,-0.0368]);
LineSet188.coord = Coordinate189;

let ColorRGBA190 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA190.USE = "HAnimSegmentLineColorRGBA";
LineSet188.color = ColorRGBA190;

Shape187.geometry = LineSet188;

HAnimSegment183.children[2] = Shape187;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_lateral_malleolus'/>
let Shape191 = browser.currentScene.createNode("Shape");
let LineSet192 = browser.currentScene.createNode("LineSet");
LineSet192.vertexCount = new MFInt32(new int[2]);
let Coordinate193 = browser.currentScene.createNode("Coordinate");
Coordinate193.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.1308,0.0597,-0.1032]);
LineSet192.coord = Coordinate193;

let ColorRGBA194 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA194.USE = "HAnimSiteLineColorRGBA";
LineSet192.color = ColorRGBA194;

Shape191.geometry = LineSet192;

HAnimSegment183.children[3] = Shape191;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_medial_malleolus'/>
let Shape195 = browser.currentScene.createNode("Shape");
let LineSet196 = browser.currentScene.createNode("LineSet");
LineSet196.vertexCount = new MFInt32(new int[2]);
let Coordinate197 = browser.currentScene.createNode("Coordinate");
Coordinate197.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.089,0.0716,-0.0881]);
LineSet196.coord = Coordinate197;

let ColorRGBA198 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA198.USE = "HAnimSiteLineColorRGBA";
LineSet196.color = ColorRGBA198;

Shape195.geometry = LineSet196;

HAnimSegment183.children[4] = Shape195;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_sphyrion'/>
let Shape199 = browser.currentScene.createNode("Shape");
let LineSet200 = browser.currentScene.createNode("LineSet");
LineSet200.vertexCount = new MFInt32(new int[2]);
let Coordinate201 = browser.currentScene.createNode("Coordinate");
Coordinate201.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.089,0.0575,-0.0943]);
LineSet200.coord = Coordinate201;

let ColorRGBA202 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA202.USE = "HAnimSiteLineColorRGBA";
LineSet200.color = ColorRGBA202;

Shape199.geometry = LineSet200;

HAnimSegment183.children[5] = Shape199;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_calcaneous_post'/>
let Shape203 = browser.currentScene.createNode("Shape");
let LineSet204 = browser.currentScene.createNode("LineSet");
LineSet204.vertexCount = new MFInt32(new int[2]);
let Coordinate205 = browser.currentScene.createNode("Coordinate");
Coordinate205.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.0974,0.0259,-0.1171]);
LineSet204.coord = Coordinate205;

let ColorRGBA206 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA206.USE = "HAnimSiteLineColorRGBA";
LineSet204.color = ColorRGBA206;

Shape203.geometry = LineSet204;

HAnimSegment183.children[6] = Shape203;

let HAnimSite207 = browser.currentScene.createNode("HAnimSite");
HAnimSite207.name = "l_lateral_malleolus_pt";
HAnimSite207.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite207.translation = new SFVec3f(new float[0.1308,0.0597,-0.1032]);
//HAnimSite visualization shape
let TouchSensor208 = browser.currentScene.createNode("TouchSensor");
TouchSensor208.description = "HAnimSite l_lateral_malleolus";
HAnimSite207.children = new MFNode();

HAnimSite207.children[0] = TouchSensor208;

let Shape209 = browser.currentScene.createNode("Shape");
Shape209.USE = "HAnimSiteShape";
HAnimSite207.children[1] = Shape209;

HAnimSegment183.children[7] = HAnimSite207;

let HAnimSite210 = browser.currentScene.createNode("HAnimSite");
HAnimSite210.name = "l_medial_malleolus_pt";
HAnimSite210.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite210.translation = new SFVec3f(new float[0.089,0.0716,-0.0881]);
//HAnimSite visualization shape
let TouchSensor211 = browser.currentScene.createNode("TouchSensor");
TouchSensor211.description = "HAnimSite l_medial_malleolus";
HAnimSite210.children = new MFNode();

HAnimSite210.children[0] = TouchSensor211;

let Shape212 = browser.currentScene.createNode("Shape");
Shape212.USE = "HAnimSiteShape";
HAnimSite210.children[1] = Shape212;

HAnimSegment183.children[8] = HAnimSite210;

let HAnimSite213 = browser.currentScene.createNode("HAnimSite");
HAnimSite213.name = "l_sphyrion_pt";
HAnimSite213.DEF = "hanim_l_sphyrion_pt";
HAnimSite213.translation = new SFVec3f(new float[0.089,0.0575,-0.0943]);
//HAnimSite visualization shape
let TouchSensor214 = browser.currentScene.createNode("TouchSensor");
TouchSensor214.description = "HAnimSite l_sphyrion";
HAnimSite213.children = new MFNode();

HAnimSite213.children[0] = TouchSensor214;

let Shape215 = browser.currentScene.createNode("Shape");
Shape215.USE = "HAnimSiteShape";
HAnimSite213.children[1] = Shape215;

HAnimSegment183.children[9] = HAnimSite213;

let HAnimSite216 = browser.currentScene.createNode("HAnimSite");
HAnimSite216.name = "l_calcaneous_post_pt";
HAnimSite216.DEF = "hanim_l_calcaneous_post_pt";
HAnimSite216.translation = new SFVec3f(new float[0.0974,0.0259,-0.1171]);
//HAnimSite visualization shape
let TouchSensor217 = browser.currentScene.createNode("TouchSensor");
TouchSensor217.description = "HAnimSite l_calcaneous_post";
HAnimSite216.children = new MFNode();

HAnimSite216.children[0] = TouchSensor217;

let Shape218 = browser.currentScene.createNode("Shape");
Shape218.USE = "HAnimSiteShape";
HAnimSite216.children[1] = Shape218;

HAnimSegment183.children[10] = HAnimSite216;

HAnimJoint182.children = new MFNode();

HAnimJoint182.children[0] = HAnimSegment183;

let HAnimJoint219 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint219.name = "l_subtalar";
HAnimJoint219.DEF = "hanim_l_subtalar";
HAnimJoint219.center = new SFVec3f(new float[0.1086,0.0001,-0.0368]);
HAnimJoint219.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint219.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment220 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment220.name = "l_midproximal";
HAnimSegment220.DEF = "hanim_l_midproximal";
//<HAnimJoint name='l_subtalar'/> visualization sphere is placed within <HAnimSegment name='l_midproximal'/>
let TouchSensor221 = browser.currentScene.createNode("TouchSensor");
TouchSensor221.description = "HAnimJoint l_subtalar, HAnimSegment l_midproximal";
HAnimSegment220.children = new MFNode();

HAnimSegment220.children[0] = TouchSensor221;

let Transform222 = browser.currentScene.createNode("Transform");
Transform222.translation = new SFVec3f(new float[0.1086,0.0001,-0.0368]);
let Shape223 = browser.currentScene.createNode("Shape");
Shape223.USE = "HAnimJointShape";
Transform222.children = new MFNode();

Transform222.children[0] = Shape223;

HAnimSegment220.children[1] = Transform222;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_subtalar'/> to <HAnimJoint name='l_midtarsal'/>
let Shape224 = browser.currentScene.createNode("Shape");
let LineSet225 = browser.currentScene.createNode("LineSet");
LineSet225.vertexCount = new MFInt32(new int[2]);
let Coordinate226 = browser.currentScene.createNode("Coordinate");
Coordinate226.point = new MFVec3f(new float[0.1086,0.0001,-0.0368,0.1086,0.0001,0.0368]);
LineSet225.coord = Coordinate226;

let ColorRGBA227 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA227.USE = "HAnimSegmentLineColorRGBA";
LineSet225.color = ColorRGBA227;

Shape224.geometry = LineSet225;

HAnimSegment220.children[2] = Shape224;

HAnimJoint219.children = new MFNode();

HAnimJoint219.children[0] = HAnimSegment220;

let HAnimJoint228 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint228.name = "l_midtarsal";
HAnimJoint228.DEF = "hanim_l_midtarsal";
HAnimJoint228.center = new SFVec3f(new float[0.1086,0.0001,0.0368]);
HAnimJoint228.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint228.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment229 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment229.name = "l_middistal";
HAnimSegment229.DEF = "hanim_l_middistal";
//<HAnimJoint name='l_midtarsal'/> visualization sphere is placed within <HAnimSegment name='l_middistal'/>
let TouchSensor230 = browser.currentScene.createNode("TouchSensor");
TouchSensor230.description = "HAnimJoint l_midtarsal, HAnimSegment l_middistal";
HAnimSegment229.children = new MFNode();

HAnimSegment229.children[0] = TouchSensor230;

let Transform231 = browser.currentScene.createNode("Transform");
Transform231.translation = new SFVec3f(new float[0.1086,0.0001,0.0368]);
let Shape232 = browser.currentScene.createNode("Shape");
Shape232.USE = "HAnimJointShape";
Transform231.children = new MFNode();

Transform231.children[0] = Shape232;

HAnimSegment229.children[1] = Transform231;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_midtarsal'/> to <HAnimJoint name='l_metatarsal'/>
let Shape233 = browser.currentScene.createNode("Shape");
let LineSet234 = browser.currentScene.createNode("LineSet");
LineSet234.vertexCount = new MFInt32(new int[2]);
let Coordinate235 = browser.currentScene.createNode("Coordinate");
Coordinate235.point = new MFVec3f(new float[0.1086,0.0001,0.0368,0.1086,0,0.0762]);
LineSet234.coord = Coordinate235;

let ColorRGBA236 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA236.USE = "HAnimSegmentLineColorRGBA";
LineSet234.color = ColorRGBA236;

Shape233.geometry = LineSet234;

HAnimSegment229.children[2] = Shape233;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_midtarsal'/> to <HAnimSite name='l_metatarsal_pha1'/>
let Shape237 = browser.currentScene.createNode("Shape");
let LineSet238 = browser.currentScene.createNode("LineSet");
LineSet238.vertexCount = new MFInt32(new int[2]);
let Coordinate239 = browser.currentScene.createNode("Coordinate");
Coordinate239.point = new MFVec3f(new float[0.1086,0.0001,0.0368,0.0816,0.0232,0.0106]);
LineSet238.coord = Coordinate239;

let ColorRGBA240 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA240.USE = "HAnimSiteLineColorRGBA";
LineSet238.color = ColorRGBA240;

Shape237.geometry = LineSet238;

HAnimSegment229.children[3] = Shape237;

let HAnimSite241 = browser.currentScene.createNode("HAnimSite");
HAnimSite241.name = "l_metatarsal_pha1_pt";
HAnimSite241.DEF = "hanim_l_metatarsal_pha1_pt";
HAnimSite241.translation = new SFVec3f(new float[0.0816,0.0232,0.0106]);
//HAnimSite visualization shape
let TouchSensor242 = browser.currentScene.createNode("TouchSensor");
TouchSensor242.description = "HAnimSite l_metatarsal_pha1";
HAnimSite241.children = new MFNode();

HAnimSite241.children[0] = TouchSensor242;

let Shape243 = browser.currentScene.createNode("Shape");
Shape243.USE = "HAnimSiteShape";
HAnimSite241.children[1] = Shape243;

HAnimSegment229.children[4] = HAnimSite241;

HAnimJoint228.children = new MFNode();

HAnimJoint228.children[0] = HAnimSegment229;

let HAnimJoint244 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint244.name = "l_metatarsal";
HAnimJoint244.DEF = "hanim_l_metatarsal";
HAnimJoint244.center = new SFVec3f(new float[0.1086,0,0.0762]);
HAnimJoint244.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint244.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment245 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment245.name = "l_forefoot";
HAnimSegment245.DEF = "hanim_l_forefoot";
//<HAnimJoint name='l_metatarsal'/> visualization sphere is placed within <HAnimSegment name='l_forefoot'/>
let TouchSensor246 = browser.currentScene.createNode("TouchSensor");
TouchSensor246.description = "HAnimJoint l_metatarsal, HAnimSegment l_forefoot";
HAnimSegment245.children = new MFNode();

HAnimSegment245.children[0] = TouchSensor246;

let Transform247 = browser.currentScene.createNode("Transform");
Transform247.translation = new SFVec3f(new float[0.1086,0,0.0762]);
let Shape248 = browser.currentScene.createNode("Shape");
Shape248.USE = "HAnimJointShape";
Transform247.children = new MFNode();

Transform247.children[0] = Shape248;

HAnimSegment245.children[1] = Transform247;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_forefoot_tip'/>
let Shape249 = browser.currentScene.createNode("Shape");
let LineSet250 = browser.currentScene.createNode("LineSet");
LineSet250.vertexCount = new MFInt32(new int[2]);
let Coordinate251 = browser.currentScene.createNode("Coordinate");
Coordinate251.point = new MFVec3f(new float[0.1086,0,0.0762,0.1354,0.0016,0.1476]);
LineSet250.coord = Coordinate251;

let ColorRGBA252 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA252.USE = "HAnimSiteLineColorRGBA";
LineSet250.color = ColorRGBA252;

Shape249.geometry = LineSet250;

HAnimSegment245.children[2] = Shape249;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_metatarsal_pha5'/>
let Shape253 = browser.currentScene.createNode("Shape");
let LineSet254 = browser.currentScene.createNode("LineSet");
LineSet254.vertexCount = new MFInt32(new int[2]);
let Coordinate255 = browser.currentScene.createNode("Coordinate");
Coordinate255.point = new MFVec3f(new float[0.1086,0,0.0762,0.1825,0.007,0.0928]);
LineSet254.coord = Coordinate255;

let ColorRGBA256 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA256.USE = "HAnimSiteLineColorRGBA";
LineSet254.color = ColorRGBA256;

Shape253.geometry = LineSet254;

HAnimSegment245.children[3] = Shape253;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_digit2'/>
let Shape257 = browser.currentScene.createNode("Shape");
let LineSet258 = browser.currentScene.createNode("LineSet");
LineSet258.vertexCount = new MFInt32(new int[2]);
let Coordinate259 = browser.currentScene.createNode("Coordinate");
Coordinate259.point = new MFVec3f(new float[0.1086,0,0.0762,0.1195,0.0079,0.1433]);
LineSet258.coord = Coordinate259;

let ColorRGBA260 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA260.USE = "HAnimSiteLineColorRGBA";
LineSet258.color = ColorRGBA260;

Shape257.geometry = LineSet258;

HAnimSegment245.children[4] = Shape257;

let HAnimSite261 = browser.currentScene.createNode("HAnimSite");
HAnimSite261.name = "l_forefoot_tip";
HAnimSite261.DEF = "hanim_l_forefoot_tip";
HAnimSite261.translation = new SFVec3f(new float[0.1354,0.0016,0.1476]);
//HAnimSite visualization shape
let TouchSensor262 = browser.currentScene.createNode("TouchSensor");
TouchSensor262.description = "HAnimSite l_forefoot_tip";
HAnimSite261.children = new MFNode();

HAnimSite261.children[0] = TouchSensor262;

let Shape263 = browser.currentScene.createNode("Shape");
Shape263.USE = "HAnimSiteShape";
HAnimSite261.children[1] = Shape263;

HAnimSegment245.children[5] = HAnimSite261;

let HAnimSite264 = browser.currentScene.createNode("HAnimSite");
HAnimSite264.name = "l_metatarsal_pha5_pt";
HAnimSite264.DEF = "hanim_l_metatarsal_pha5_pt";
HAnimSite264.translation = new SFVec3f(new float[0.1825,0.007,0.0928]);
//HAnimSite visualization shape
let TouchSensor265 = browser.currentScene.createNode("TouchSensor");
TouchSensor265.description = "HAnimSite l_metatarsal_pha5";
HAnimSite264.children = new MFNode();

HAnimSite264.children[0] = TouchSensor265;

let Shape266 = browser.currentScene.createNode("Shape");
Shape266.USE = "HAnimSiteShape";
HAnimSite264.children[1] = Shape266;

HAnimSegment245.children[6] = HAnimSite264;

let HAnimSite267 = browser.currentScene.createNode("HAnimSite");
HAnimSite267.name = "l_digit2_pt";
HAnimSite267.DEF = "hanim_l_digit2_pt";
HAnimSite267.translation = new SFVec3f(new float[0.1195,0.0079,0.1433]);
//HAnimSite visualization shape
let TouchSensor268 = browser.currentScene.createNode("TouchSensor");
TouchSensor268.description = "HAnimSite l_digit2";
HAnimSite267.children = new MFNode();

HAnimSite267.children[0] = TouchSensor268;

let Shape269 = browser.currentScene.createNode("Shape");
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

let HAnimJoint270 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint270.name = "r_hip";
HAnimJoint270.DEF = "hanim_r_hip";
HAnimJoint270.center = new SFVec3f(new float[-0.0961,0.9124,-0.0001]);
HAnimJoint270.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint270.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment271 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment271.name = "r_thigh";
HAnimSegment271.DEF = "hanim_r_thigh";
//<HAnimJoint name='r_hip'/> visualization sphere is placed within <HAnimSegment name='r_thigh'/>
let TouchSensor272 = browser.currentScene.createNode("TouchSensor");
TouchSensor272.description = "HAnimJoint r_hip, HAnimSegment r_thigh";
HAnimSegment271.children = new MFNode();

HAnimSegment271.children[0] = TouchSensor272;

let Transform273 = browser.currentScene.createNode("Transform");
Transform273.translation = new SFVec3f(new float[-0.0961,0.9124,-0.0001]);
let Shape274 = browser.currentScene.createNode("Shape");
Shape274.USE = "HAnimJointShape";
Transform273.children = new MFNode();

Transform273.children[0] = Shape274;

HAnimSegment271.children[1] = Transform273;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_hip'/> to <HAnimJoint name='r_knee'/>
let Shape275 = browser.currentScene.createNode("Shape");
let LineSet276 = browser.currentScene.createNode("LineSet");
LineSet276.vertexCount = new MFInt32(new int[2]);
let Coordinate277 = browser.currentScene.createNode("Coordinate");
Coordinate277.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.104,0.4867,0.0308]);
LineSet276.coord = Coordinate277;

let ColorRGBA278 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA278.USE = "HAnimSegmentLineColorRGBA";
LineSet276.color = ColorRGBA278;

Shape275.geometry = LineSet276;

HAnimSegment271.children[2] = Shape275;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_knee_crease'/>
let Shape279 = browser.currentScene.createNode("Shape");
let LineSet280 = browser.currentScene.createNode("LineSet");
LineSet280.vertexCount = new MFInt32(new int[2]);
let Coordinate281 = browser.currentScene.createNode("Coordinate");
Coordinate281.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.0825,0.4932,-0.0326]);
LineSet280.coord = Coordinate281;

let ColorRGBA282 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA282.USE = "HAnimSiteLineColorRGBA";
LineSet280.color = ColorRGBA282;

Shape279.geometry = LineSet280;

HAnimSegment271.children[3] = Shape279;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_lateral_epicn'/>
let Shape283 = browser.currentScene.createNode("Shape");
let LineSet284 = browser.currentScene.createNode("LineSet");
LineSet284.vertexCount = new MFInt32(new int[2]);
let Coordinate285 = browser.currentScene.createNode("Coordinate");
Coordinate285.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.1421,0.4992,0.031]);
LineSet284.coord = Coordinate285;

let ColorRGBA286 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA286.USE = "HAnimSiteLineColorRGBA";
LineSet284.color = ColorRGBA286;

Shape283.geometry = LineSet284;

HAnimSegment271.children[4] = Shape283;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_medial_epicn'/>
let Shape287 = browser.currentScene.createNode("Shape");
let LineSet288 = browser.currentScene.createNode("LineSet");
LineSet288.vertexCount = new MFInt32(new int[2]);
let Coordinate289 = browser.currentScene.createNode("Coordinate");
Coordinate289.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.0221,0.5014,0.0289]);
LineSet288.coord = Coordinate289;

let ColorRGBA290 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA290.USE = "HAnimSiteLineColorRGBA";
LineSet288.color = ColorRGBA290;

Shape287.geometry = LineSet288;

HAnimSegment271.children[5] = Shape287;

let HAnimSite291 = browser.currentScene.createNode("HAnimSite");
HAnimSite291.name = "r_knee_crease_pt";
HAnimSite291.DEF = "hanim_r_knee_crease_pt";
HAnimSite291.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
//HAnimSite visualization shape
let TouchSensor292 = browser.currentScene.createNode("TouchSensor");
TouchSensor292.description = "HAnimSite r_knee_crease";
HAnimSite291.children = new MFNode();

HAnimSite291.children[0] = TouchSensor292;

let Shape293 = browser.currentScene.createNode("Shape");
Shape293.USE = "HAnimSiteShape";
HAnimSite291.children[1] = Shape293;

HAnimSegment271.children[6] = HAnimSite291;

let HAnimSite294 = browser.currentScene.createNode("HAnimSite");
HAnimSite294.name = "r_femoral_lateral_epicn_pt";
HAnimSite294.DEF = "hanim_r_femoral_lateral_epicn_pt";
HAnimSite294.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
//HAnimSite visualization shape
let TouchSensor295 = browser.currentScene.createNode("TouchSensor");
TouchSensor295.description = "HAnimSite r_femoral_lateral_epicn";
HAnimSite294.children = new MFNode();

HAnimSite294.children[0] = TouchSensor295;

let Shape296 = browser.currentScene.createNode("Shape");
Shape296.USE = "HAnimSiteShape";
HAnimSite294.children[1] = Shape296;

HAnimSegment271.children[7] = HAnimSite294;

let HAnimSite297 = browser.currentScene.createNode("HAnimSite");
HAnimSite297.name = "r_femoral_medial_epicn_pt";
HAnimSite297.DEF = "hanim_r_femoral_medial_epicn_pt";
HAnimSite297.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
//HAnimSite visualization shape
let TouchSensor298 = browser.currentScene.createNode("TouchSensor");
TouchSensor298.description = "HAnimSite r_femoral_medial_epicn";
HAnimSite297.children = new MFNode();

HAnimSite297.children[0] = TouchSensor298;

let Shape299 = browser.currentScene.createNode("Shape");
Shape299.USE = "HAnimSiteShape";
HAnimSite297.children[1] = Shape299;

HAnimSegment271.children[8] = HAnimSite297;

HAnimJoint270.children = new MFNode();

HAnimJoint270.children[0] = HAnimSegment271;

let HAnimJoint300 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint300.name = "r_knee";
HAnimJoint300.DEF = "hanim_r_knee";
HAnimJoint300.center = new SFVec3f(new float[-0.104,0.4867,0.0308]);
HAnimJoint300.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint300.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment301 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment301.name = "r_calf";
HAnimSegment301.DEF = "hanim_r_calf";
//<HAnimJoint name='r_knee'/> visualization sphere is placed within <HAnimSegment name='r_calf'/>
let TouchSensor302 = browser.currentScene.createNode("TouchSensor");
TouchSensor302.description = "HAnimJoint r_knee, HAnimSegment r_calf";
HAnimSegment301.children = new MFNode();

HAnimSegment301.children[0] = TouchSensor302;

let Transform303 = browser.currentScene.createNode("Transform");
Transform303.translation = new SFVec3f(new float[-0.104,0.4867,0.0308]);
let Shape304 = browser.currentScene.createNode("Shape");
Shape304.USE = "HAnimJointShape";
Transform303.children = new MFNode();

Transform303.children[0] = Shape304;

HAnimSegment301.children[1] = Transform303;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_knee'/> to <HAnimJoint name='r_ankle'/>
let Shape305 = browser.currentScene.createNode("Shape");
let LineSet306 = browser.currentScene.createNode("LineSet");
LineSet306.vertexCount = new MFInt32(new int[2]);
let Coordinate307 = browser.currentScene.createNode("Coordinate");
Coordinate307.point = new MFVec3f(new float[-0.104,0.4867,0.0308,-0.1101,0.0656,-0.0736]);
LineSet306.coord = Coordinate307;

let ColorRGBA308 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA308.USE = "HAnimSegmentLineColorRGBA";
LineSet306.color = ColorRGBA308;

Shape305.geometry = LineSet306;

HAnimSegment301.children[2] = Shape305;

HAnimJoint300.children = new MFNode();

HAnimJoint300.children[0] = HAnimSegment301;

let HAnimJoint309 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint309.name = "r_ankle";
HAnimJoint309.DEF = "hanim_r_ankle";
HAnimJoint309.center = new SFVec3f(new float[-0.1101,0.0656,-0.0736]);
HAnimJoint309.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint309.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment310 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment310.name = "r_hindfoot";
HAnimSegment310.DEF = "hanim_r_hindfoot";
//<HAnimJoint name='r_ankle'/> visualization sphere is placed within <HAnimSegment name='r_hindfoot'/>
let TouchSensor311 = browser.currentScene.createNode("TouchSensor");
TouchSensor311.description = "HAnimJoint r_ankle, HAnimSegment r_hindfoot";
HAnimSegment310.children = new MFNode();

HAnimSegment310.children[0] = TouchSensor311;

let Transform312 = browser.currentScene.createNode("Transform");
Transform312.translation = new SFVec3f(new float[-0.1101,0.0656,-0.0736]);
let Shape313 = browser.currentScene.createNode("Shape");
Shape313.USE = "HAnimJointShape";
Transform312.children = new MFNode();

Transform312.children[0] = Shape313;

HAnimSegment310.children[1] = Transform312;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ankle'/> to <HAnimJoint name='r_subtalar'/>
let Shape314 = browser.currentScene.createNode("Shape");
let LineSet315 = browser.currentScene.createNode("LineSet");
LineSet315.vertexCount = new MFInt32(new int[2]);
let Coordinate316 = browser.currentScene.createNode("Coordinate");
Coordinate316.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.1086,0.0001,-0.0368]);
LineSet315.coord = Coordinate316;

let ColorRGBA317 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA317.USE = "HAnimSegmentLineColorRGBA";
LineSet315.color = ColorRGBA317;

Shape314.geometry = LineSet315;

HAnimSegment310.children[2] = Shape314;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_lateral_malleolus'/>
let Shape318 = browser.currentScene.createNode("Shape");
let LineSet319 = browser.currentScene.createNode("LineSet");
LineSet319.vertexCount = new MFInt32(new int[2]);
let Coordinate320 = browser.currentScene.createNode("Coordinate");
Coordinate320.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.1006,0.0658,-0.1075]);
LineSet319.coord = Coordinate320;

let ColorRGBA321 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA321.USE = "HAnimSiteLineColorRGBA";
LineSet319.color = ColorRGBA321;

Shape318.geometry = LineSet319;

HAnimSegment310.children[3] = Shape318;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_medial_malleolus'/>
let Shape322 = browser.currentScene.createNode("Shape");
let LineSet323 = browser.currentScene.createNode("LineSet");
LineSet323.vertexCount = new MFInt32(new int[2]);
let Coordinate324 = browser.currentScene.createNode("Coordinate");
Coordinate324.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.0591,0.076,-0.0928]);
LineSet323.coord = Coordinate324;

let ColorRGBA325 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA325.USE = "HAnimSiteLineColorRGBA";
LineSet323.color = ColorRGBA325;

Shape322.geometry = LineSet323;

HAnimSegment310.children[4] = Shape322;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_sphyrion'/>
let Shape326 = browser.currentScene.createNode("Shape");
let LineSet327 = browser.currentScene.createNode("LineSet");
LineSet327.vertexCount = new MFInt32(new int[2]);
let Coordinate328 = browser.currentScene.createNode("Coordinate");
Coordinate328.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.0603,0.061,-0.1002]);
LineSet327.coord = Coordinate328;

let ColorRGBA329 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA329.USE = "HAnimSiteLineColorRGBA";
LineSet327.color = ColorRGBA329;

Shape326.geometry = LineSet327;

HAnimSegment310.children[5] = Shape326;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_calcaneous_post'/>
let Shape330 = browser.currentScene.createNode("Shape");
let LineSet331 = browser.currentScene.createNode("LineSet");
LineSet331.vertexCount = new MFInt32(new int[2]);
let Coordinate332 = browser.currentScene.createNode("Coordinate");
Coordinate332.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.0692,0.0297,-0.1221]);
LineSet331.coord = Coordinate332;

let ColorRGBA333 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA333.USE = "HAnimSiteLineColorRGBA";
LineSet331.color = ColorRGBA333;

Shape330.geometry = LineSet331;

HAnimSegment310.children[6] = Shape330;

let HAnimSite334 = browser.currentScene.createNode("HAnimSite");
HAnimSite334.name = "r_lateral_malleolus_pt";
HAnimSite334.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite334.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
//HAnimSite visualization shape
let TouchSensor335 = browser.currentScene.createNode("TouchSensor");
TouchSensor335.description = "HAnimSite r_lateral_malleolus";
HAnimSite334.children = new MFNode();

HAnimSite334.children[0] = TouchSensor335;

let Shape336 = browser.currentScene.createNode("Shape");
Shape336.USE = "HAnimSiteShape";
HAnimSite334.children[1] = Shape336;

HAnimSegment310.children[7] = HAnimSite334;

let HAnimSite337 = browser.currentScene.createNode("HAnimSite");
HAnimSite337.name = "r_medial_malleolus_pt";
HAnimSite337.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite337.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
//HAnimSite visualization shape
let TouchSensor338 = browser.currentScene.createNode("TouchSensor");
TouchSensor338.description = "HAnimSite r_medial_malleolus";
HAnimSite337.children = new MFNode();

HAnimSite337.children[0] = TouchSensor338;

let Shape339 = browser.currentScene.createNode("Shape");
Shape339.USE = "HAnimSiteShape";
HAnimSite337.children[1] = Shape339;

HAnimSegment310.children[8] = HAnimSite337;

let HAnimSite340 = browser.currentScene.createNode("HAnimSite");
HAnimSite340.name = "r_sphyrion_pt";
HAnimSite340.DEF = "hanim_r_sphyrion_pt";
HAnimSite340.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
//HAnimSite visualization shape
let TouchSensor341 = browser.currentScene.createNode("TouchSensor");
TouchSensor341.description = "HAnimSite r_sphyrion";
HAnimSite340.children = new MFNode();

HAnimSite340.children[0] = TouchSensor341;

let Shape342 = browser.currentScene.createNode("Shape");
Shape342.USE = "HAnimSiteShape";
HAnimSite340.children[1] = Shape342;

HAnimSegment310.children[9] = HAnimSite340;

let HAnimSite343 = browser.currentScene.createNode("HAnimSite");
HAnimSite343.name = "r_calcaneous_post_pt";
HAnimSite343.DEF = "hanim_r_calcaneous_post_pt";
HAnimSite343.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
//HAnimSite visualization shape
let TouchSensor344 = browser.currentScene.createNode("TouchSensor");
TouchSensor344.description = "HAnimSite r_calcaneous_post";
HAnimSite343.children = new MFNode();

HAnimSite343.children[0] = TouchSensor344;

let Shape345 = browser.currentScene.createNode("Shape");
Shape345.USE = "HAnimSiteShape";
HAnimSite343.children[1] = Shape345;

HAnimSegment310.children[10] = HAnimSite343;

HAnimJoint309.children = new MFNode();

HAnimJoint309.children[0] = HAnimSegment310;

let HAnimJoint346 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint346.name = "r_subtalar";
HAnimJoint346.DEF = "hanim_r_subtalar";
HAnimJoint346.center = new SFVec3f(new float[-0.1086,0.0001,-0.0368]);
HAnimJoint346.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint346.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment347 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment347.name = "r_midproximal";
HAnimSegment347.DEF = "hanim_r_midproximal";
//<HAnimJoint name='r_subtalar'/> visualization sphere is placed within <HAnimSegment name='r_midproximal'/>
let TouchSensor348 = browser.currentScene.createNode("TouchSensor");
TouchSensor348.description = "HAnimJoint r_subtalar, HAnimSegment r_midproximal";
HAnimSegment347.children = new MFNode();

HAnimSegment347.children[0] = TouchSensor348;

let Transform349 = browser.currentScene.createNode("Transform");
Transform349.translation = new SFVec3f(new float[-0.1086,0.0001,-0.0368]);
let Shape350 = browser.currentScene.createNode("Shape");
Shape350.USE = "HAnimJointShape";
Transform349.children = new MFNode();

Transform349.children[0] = Shape350;

HAnimSegment347.children[1] = Transform349;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_subtalar'/> to <HAnimJoint name='r_midtarsal'/>
let Shape351 = browser.currentScene.createNode("Shape");
let LineSet352 = browser.currentScene.createNode("LineSet");
LineSet352.vertexCount = new MFInt32(new int[2]);
let Coordinate353 = browser.currentScene.createNode("Coordinate");
Coordinate353.point = new MFVec3f(new float[-0.1086,0.0001,-0.0368,-0.1086,0.0001,0.0368]);
LineSet352.coord = Coordinate353;

let ColorRGBA354 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA354.USE = "HAnimSegmentLineColorRGBA";
LineSet352.color = ColorRGBA354;

Shape351.geometry = LineSet352;

HAnimSegment347.children[2] = Shape351;

HAnimJoint346.children = new MFNode();

HAnimJoint346.children[0] = HAnimSegment347;

let HAnimJoint355 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint355.name = "r_midtarsal";
HAnimJoint355.DEF = "hanim_r_midtarsal";
HAnimJoint355.center = new SFVec3f(new float[-0.1086,0.0001,0.0368]);
HAnimJoint355.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint355.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment356 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment356.name = "r_middistal";
HAnimSegment356.DEF = "hanim_r_middistal";
//<HAnimJoint name='r_midtarsal'/> visualization sphere is placed within <HAnimSegment name='r_middistal'/>
let TouchSensor357 = browser.currentScene.createNode("TouchSensor");
TouchSensor357.description = "HAnimJoint r_midtarsal, HAnimSegment r_middistal";
HAnimSegment356.children = new MFNode();

HAnimSegment356.children[0] = TouchSensor357;

let Transform358 = browser.currentScene.createNode("Transform");
Transform358.translation = new SFVec3f(new float[-0.1086,0.0001,0.0368]);
let Shape359 = browser.currentScene.createNode("Shape");
Shape359.USE = "HAnimJointShape";
Transform358.children = new MFNode();

Transform358.children[0] = Shape359;

HAnimSegment356.children[1] = Transform358;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_midtarsal'/> to <HAnimJoint name='r_metatarsal'/>
let Shape360 = browser.currentScene.createNode("Shape");
let LineSet361 = browser.currentScene.createNode("LineSet");
LineSet361.vertexCount = new MFInt32(new int[2]);
let Coordinate362 = browser.currentScene.createNode("Coordinate");
Coordinate362.point = new MFVec3f(new float[-0.1086,0.0001,0.0368,-0.1086,0,0.0762]);
LineSet361.coord = Coordinate362;

let ColorRGBA363 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA363.USE = "HAnimSegmentLineColorRGBA";
LineSet361.color = ColorRGBA363;

Shape360.geometry = LineSet361;

HAnimSegment356.children[2] = Shape360;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_midtarsal'/> to <HAnimSite name='r_metatarsal_pha1'/>
let Shape364 = browser.currentScene.createNode("Shape");
let LineSet365 = browser.currentScene.createNode("LineSet");
LineSet365.vertexCount = new MFInt32(new int[2]);
let Coordinate366 = browser.currentScene.createNode("Coordinate");
Coordinate366.point = new MFVec3f(new float[-0.1086,0.0001,0.0368,-0.0521,0.026,0.0127]);
LineSet365.coord = Coordinate366;

let ColorRGBA367 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA367.USE = "HAnimSiteLineColorRGBA";
LineSet365.color = ColorRGBA367;

Shape364.geometry = LineSet365;

HAnimSegment356.children[3] = Shape364;

let HAnimSite368 = browser.currentScene.createNode("HAnimSite");
HAnimSite368.name = "r_metatarsal_pha1_pt";
HAnimSite368.DEF = "hanim_r_metatarsal_pha1_pt";
HAnimSite368.translation = new SFVec3f(new float[-0.0521,0.026,0.0127]);
//HAnimSite visualization shape
let TouchSensor369 = browser.currentScene.createNode("TouchSensor");
TouchSensor369.description = "HAnimSite r_metatarsal_pha1";
HAnimSite368.children = new MFNode();

HAnimSite368.children[0] = TouchSensor369;

let Shape370 = browser.currentScene.createNode("Shape");
Shape370.USE = "HAnimSiteShape";
HAnimSite368.children[1] = Shape370;

HAnimSegment356.children[4] = HAnimSite368;

HAnimJoint355.children = new MFNode();

HAnimJoint355.children[0] = HAnimSegment356;

let HAnimJoint371 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint371.name = "r_metatarsal";
HAnimJoint371.DEF = "hanim_r_metatarsal";
HAnimJoint371.center = new SFVec3f(new float[-0.1086,0,0.0762]);
HAnimJoint371.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint371.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment372 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment372.name = "r_forefoot";
HAnimSegment372.DEF = "hanim_r_forefoot";
//<HAnimJoint name='r_metatarsal'/> visualization sphere is placed within <HAnimSegment name='r_forefoot'/>
let TouchSensor373 = browser.currentScene.createNode("TouchSensor");
TouchSensor373.description = "HAnimJoint r_metatarsal, HAnimSegment r_forefoot";
HAnimSegment372.children = new MFNode();

HAnimSegment372.children[0] = TouchSensor373;

let Transform374 = browser.currentScene.createNode("Transform");
Transform374.translation = new SFVec3f(new float[-0.1086,0,0.0762]);
let Shape375 = browser.currentScene.createNode("Shape");
Shape375.USE = "HAnimJointShape";
Transform374.children = new MFNode();

Transform374.children[0] = Shape375;

HAnimSegment372.children[1] = Transform374;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_forefoot_tip'/>
let Shape376 = browser.currentScene.createNode("Shape");
let LineSet377 = browser.currentScene.createNode("LineSet");
LineSet377.vertexCount = new MFInt32(new int[2]);
let Coordinate378 = browser.currentScene.createNode("Coordinate");
Coordinate378.point = new MFVec3f(new float[-0.1086,0,0.0762,-0.1043,0.0227,0.145]);
LineSet377.coord = Coordinate378;

let ColorRGBA379 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA379.USE = "HAnimSiteLineColorRGBA";
LineSet377.color = ColorRGBA379;

Shape376.geometry = LineSet377;

HAnimSegment372.children[2] = Shape376;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_metatarsal_pha5'/>
let Shape380 = browser.currentScene.createNode("Shape");
let LineSet381 = browser.currentScene.createNode("LineSet");
LineSet381.vertexCount = new MFInt32(new int[2]);
let Coordinate382 = browser.currentScene.createNode("Coordinate");
Coordinate382.point = new MFVec3f(new float[-0.1086,0,0.0762,-0.1523,0.0166,0.0895]);
LineSet381.coord = Coordinate382;

let ColorRGBA383 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA383.USE = "HAnimSiteLineColorRGBA";
LineSet381.color = ColorRGBA383;

Shape380.geometry = LineSet381;

HAnimSegment372.children[3] = Shape380;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_digit2'/>
let Shape384 = browser.currentScene.createNode("Shape");
let LineSet385 = browser.currentScene.createNode("LineSet");
LineSet385.vertexCount = new MFInt32(new int[2]);
let Coordinate386 = browser.currentScene.createNode("Coordinate");
Coordinate386.point = new MFVec3f(new float[-0.1086,0,0.0762,-0.0883,0.0134,0.1383]);
LineSet385.coord = Coordinate386;

let ColorRGBA387 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA387.USE = "HAnimSiteLineColorRGBA";
LineSet385.color = ColorRGBA387;

Shape384.geometry = LineSet385;

HAnimSegment372.children[4] = Shape384;

let HAnimSite388 = browser.currentScene.createNode("HAnimSite");
HAnimSite388.name = "r_forefoot_tip";
HAnimSite388.DEF = "hanim_r_forefoot_tip";
HAnimSite388.translation = new SFVec3f(new float[-0.1043,0.0227,0.145]);
//HAnimSite visualization shape
let TouchSensor389 = browser.currentScene.createNode("TouchSensor");
TouchSensor389.description = "HAnimSite r_forefoot_tip";
HAnimSite388.children = new MFNode();

HAnimSite388.children[0] = TouchSensor389;

let Shape390 = browser.currentScene.createNode("Shape");
Shape390.USE = "HAnimSiteShape";
HAnimSite388.children[1] = Shape390;

HAnimSegment372.children[5] = HAnimSite388;

let HAnimSite391 = browser.currentScene.createNode("HAnimSite");
HAnimSite391.name = "r_metatarsal_pha5_pt";
HAnimSite391.DEF = "hanim_r_metatarsal_pha5_pt";
HAnimSite391.translation = new SFVec3f(new float[-0.1523,0.0166,0.0895]);
//HAnimSite visualization shape
let TouchSensor392 = browser.currentScene.createNode("TouchSensor");
TouchSensor392.description = "HAnimSite r_metatarsal_pha5";
HAnimSite391.children = new MFNode();

HAnimSite391.children[0] = TouchSensor392;

let Shape393 = browser.currentScene.createNode("Shape");
Shape393.USE = "HAnimSiteShape";
HAnimSite391.children[1] = Shape393;

HAnimSegment372.children[6] = HAnimSite391;

let HAnimSite394 = browser.currentScene.createNode("HAnimSite");
HAnimSite394.name = "r_digit2_pt";
HAnimSite394.DEF = "hanim_r_digit2_pt";
HAnimSite394.translation = new SFVec3f(new float[-0.0883,0.0134,0.1383]);
//HAnimSite visualization shape
let TouchSensor395 = browser.currentScene.createNode("TouchSensor");
TouchSensor395.description = "HAnimSite r_digit2";
HAnimSite394.children = new MFNode();

HAnimSite394.children[0] = TouchSensor395;

let Shape396 = browser.currentScene.createNode("Shape");
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

let HAnimJoint397 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint397.name = "vl5";
HAnimJoint397.DEF = "hanim_vl5";
HAnimJoint397.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimJoint397.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint397.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment398 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment398.name = "l5";
HAnimSegment398.DEF = "hanim_l5";
//<HAnimJoint name='vl5'/> visualization sphere is placed within <HAnimSegment name='l5'/>
let TouchSensor399 = browser.currentScene.createNode("TouchSensor");
TouchSensor399.description = "HAnimJoint vl5, HAnimSegment l5";
HAnimSegment398.children = new MFNode();

HAnimSegment398.children[0] = TouchSensor399;

let Transform400 = browser.currentScene.createNode("Transform");
Transform400.translation = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
let Shape401 = browser.currentScene.createNode("Shape");
Shape401.USE = "HAnimJointShape";
Transform400.children = new MFNode();

Transform400.children[0] = Shape401;

HAnimSegment398.children[1] = Transform400;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl5'/> to <HAnimJoint name='vl4'/>
let Shape402 = browser.currentScene.createNode("Shape");
let LineSet403 = browser.currentScene.createNode("LineSet");
LineSet403.vertexCount = new MFInt32(new int[2]);
let Coordinate404 = browser.currentScene.createNode("Coordinate");
Coordinate404.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787]);
LineSet403.coord = Coordinate404;

let ColorRGBA405 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA405.USE = "HAnimSegmentLineColorRGBA";
LineSet403.color = ColorRGBA405;

Shape402.geometry = LineSet403;

HAnimSegment398.children[2] = Shape402;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='waist_preferred_post'/>
let Shape406 = browser.currentScene.createNode("Shape");
let LineSet407 = browser.currentScene.createNode("LineSet");
LineSet407.vertexCount = new MFInt32(new int[2]);
let Coordinate408 = browser.currentScene.createNode("Coordinate");
Coordinate408.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0,1.0915,-0.1091]);
LineSet407.coord = Coordinate408;

let ColorRGBA409 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA409.USE = "HAnimSiteLineColorRGBA";
LineSet407.color = ColorRGBA409;

Shape406.geometry = LineSet407;

HAnimSegment398.children[3] = Shape406;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='navel'/>
let Shape410 = browser.currentScene.createNode("Shape");
let LineSet411 = browser.currentScene.createNode("LineSet");
LineSet411.vertexCount = new MFInt32(new int[2]);
let Coordinate412 = browser.currentScene.createNode("Coordinate");
Coordinate412.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0069,1.0966,0.1017]);
LineSet411.coord = Coordinate412;

let ColorRGBA413 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA413.USE = "HAnimSiteLineColorRGBA";
LineSet411.color = ColorRGBA413;

Shape410.geometry = LineSet411;

HAnimSegment398.children[4] = Shape410;

let HAnimSite414 = browser.currentScene.createNode("HAnimSite");
HAnimSite414.name = "waist_preferred_post_pt";
HAnimSite414.DEF = "hanim_waist_preferred_post_pt";
HAnimSite414.translation = new SFVec3f(new float[0,1.0915,-0.1091]);
//HAnimSite visualization shape
let TouchSensor415 = browser.currentScene.createNode("TouchSensor");
TouchSensor415.description = "HAnimSite waist_preferred_post";
HAnimSite414.children = new MFNode();

HAnimSite414.children[0] = TouchSensor415;

let Shape416 = browser.currentScene.createNode("Shape");
Shape416.USE = "HAnimSiteShape";
HAnimSite414.children[1] = Shape416;

HAnimSegment398.children[5] = HAnimSite414;

let HAnimSite417 = browser.currentScene.createNode("HAnimSite");
HAnimSite417.name = "navel_pt";
HAnimSite417.DEF = "hanim_navel_pt";
HAnimSite417.translation = new SFVec3f(new float[0.0069,1.0966,0.1017]);
//HAnimSite visualization shape
let TouchSensor418 = browser.currentScene.createNode("TouchSensor");
TouchSensor418.description = "HAnimSite navel";
HAnimSite417.children = new MFNode();

HAnimSite417.children[0] = TouchSensor418;

let Shape419 = browser.currentScene.createNode("Shape");
Shape419.USE = "HAnimSiteShape";
HAnimSite417.children[1] = Shape419;

HAnimSegment398.children[6] = HAnimSite417;

HAnimJoint397.children = new MFNode();

HAnimJoint397.children[0] = HAnimSegment398;

let HAnimJoint420 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint420.name = "vl4";
HAnimJoint420.DEF = "hanim_vl4";
HAnimJoint420.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
HAnimJoint420.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint420.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment421 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment421.name = "l4";
HAnimSegment421.DEF = "hanim_l4";
//<HAnimJoint name='vl4'/> visualization sphere is placed within <HAnimSegment name='l4'/>
let TouchSensor422 = browser.currentScene.createNode("TouchSensor");
TouchSensor422.description = "HAnimJoint vl4, HAnimSegment l4";
HAnimSegment421.children = new MFNode();

HAnimSegment421.children[0] = TouchSensor422;

let Transform423 = browser.currentScene.createNode("Transform");
Transform423.translation = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
let Shape424 = browser.currentScene.createNode("Shape");
Shape424.USE = "HAnimJointShape";
Transform423.children = new MFNode();

Transform423.children[0] = Shape424;

HAnimSegment421.children[1] = Transform423;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl4'/> to <HAnimJoint name='vl3'/>
let Shape425 = browser.currentScene.createNode("Shape");
let LineSet426 = browser.currentScene.createNode("LineSet");
LineSet426.vertexCount = new MFInt32(new int[2]);
let Coordinate427 = browser.currentScene.createNode("Coordinate");
Coordinate427.point = new MFVec3f(new float[0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796]);
LineSet426.coord = Coordinate427;

let ColorRGBA428 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA428.USE = "HAnimSegmentLineColorRGBA";
LineSet426.color = ColorRGBA428;

Shape425.geometry = LineSet426;

HAnimSegment421.children[2] = Shape425;

HAnimJoint420.children = new MFNode();

HAnimJoint420.children[0] = HAnimSegment421;

let HAnimJoint429 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint429.name = "vl3";
HAnimJoint429.DEF = "hanim_vl3";
HAnimJoint429.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimJoint429.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint429.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment430 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment430.name = "l3";
HAnimSegment430.DEF = "hanim_l3";
//<HAnimJoint name='vl3'/> visualization sphere is placed within <HAnimSegment name='l3'/>
let TouchSensor431 = browser.currentScene.createNode("TouchSensor");
TouchSensor431.description = "HAnimJoint vl3, HAnimSegment l3";
HAnimSegment430.children = new MFNode();

HAnimSegment430.children[0] = TouchSensor431;

let Transform432 = browser.currentScene.createNode("Transform");
Transform432.translation = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
let Shape433 = browser.currentScene.createNode("Shape");
Shape433.USE = "HAnimJointShape";
Transform432.children = new MFNode();

Transform432.children[0] = Shape433;

HAnimSegment430.children[1] = Transform432;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl3'/> to <HAnimJoint name='vl2'/>
let Shape434 = browser.currentScene.createNode("Shape");
let LineSet435 = browser.currentScene.createNode("LineSet");
LineSet435.vertexCount = new MFInt32(new int[2]);
let Coordinate436 = browser.currentScene.createNode("Coordinate");
Coordinate436.point = new MFVec3f(new float[0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08]);
LineSet435.coord = Coordinate436;

let ColorRGBA437 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA437.USE = "HAnimSegmentLineColorRGBA";
LineSet435.color = ColorRGBA437;

Shape434.geometry = LineSet435;

HAnimSegment430.children[2] = Shape434;

HAnimJoint429.children = new MFNode();

HAnimJoint429.children[0] = HAnimSegment430;

let HAnimJoint438 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint438.name = "vl2";
HAnimJoint438.DEF = "hanim_vl2";
HAnimJoint438.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
HAnimJoint438.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint438.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment439 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment439.name = "l2";
HAnimSegment439.DEF = "hanim_l2";
//<HAnimJoint name='vl2'/> visualization sphere is placed within <HAnimSegment name='l2'/>
let TouchSensor440 = browser.currentScene.createNode("TouchSensor");
TouchSensor440.description = "HAnimJoint vl2, HAnimSegment l2";
HAnimSegment439.children = new MFNode();

HAnimSegment439.children[0] = TouchSensor440;

let Transform441 = browser.currentScene.createNode("Transform");
Transform441.translation = new SFVec3f(new float[0.0045,1.1546,-0.08]);
let Shape442 = browser.currentScene.createNode("Shape");
Shape442.USE = "HAnimJointShape";
Transform441.children = new MFNode();

Transform441.children[0] = Shape442;

HAnimSegment439.children[1] = Transform441;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl2'/> to <HAnimJoint name='vl1'/>
let Shape443 = browser.currentScene.createNode("Shape");
let LineSet444 = browser.currentScene.createNode("LineSet");
LineSet444.vertexCount = new MFInt32(new int[2]);
let Coordinate445 = browser.currentScene.createNode("Coordinate");
Coordinate445.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805]);
LineSet444.coord = Coordinate445;

let ColorRGBA446 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA446.USE = "HAnimSegmentLineColorRGBA";
LineSet444.color = ColorRGBA446;

Shape443.geometry = LineSet444;

HAnimSegment439.children[2] = Shape443;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='r_rib10'/>
let Shape447 = browser.currentScene.createNode("Shape");
let LineSet448 = browser.currentScene.createNode("LineSet");
LineSet448.vertexCount = new MFInt32(new int[2]);
let Coordinate449 = browser.currentScene.createNode("Coordinate");
Coordinate449.point = new MFVec3f(new float[0.0045,1.1546,-0.08,-0.0711,1.1941,0.1016]);
LineSet448.coord = Coordinate449;

let ColorRGBA450 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA450.USE = "HAnimSiteLineColorRGBA";
LineSet448.color = ColorRGBA450;

Shape447.geometry = LineSet448;

HAnimSegment439.children[3] = Shape447;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='l_rib10'/>
let Shape451 = browser.currentScene.createNode("Shape");
let LineSet452 = browser.currentScene.createNode("LineSet");
LineSet452.vertexCount = new MFInt32(new int[2]);
let Coordinate453 = browser.currentScene.createNode("Coordinate");
Coordinate453.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0871,1.1925,0.0992]);
LineSet452.coord = Coordinate453;

let ColorRGBA454 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA454.USE = "HAnimSiteLineColorRGBA";
LineSet452.color = ColorRGBA454;

Shape451.geometry = LineSet452;

HAnimSegment439.children[4] = Shape451;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='rib10_midspine'/>
let Shape455 = browser.currentScene.createNode("Shape");
let LineSet456 = browser.currentScene.createNode("LineSet");
LineSet456.vertexCount = new MFInt32(new int[2]);
let Coordinate457 = browser.currentScene.createNode("Coordinate");
Coordinate457.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0049,1.1908,-0.1113]);
LineSet456.coord = Coordinate457;

let ColorRGBA458 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA458.USE = "HAnimSiteLineColorRGBA";
LineSet456.color = ColorRGBA458;

Shape455.geometry = LineSet456;

HAnimSegment439.children[5] = Shape455;

let HAnimSite459 = browser.currentScene.createNode("HAnimSite");
HAnimSite459.name = "r_rib10_pt";
HAnimSite459.DEF = "hanim_r_rib10_pt";
HAnimSite459.translation = new SFVec3f(new float[-0.0711,1.1941,0.1016]);
//HAnimSite visualization shape
let TouchSensor460 = browser.currentScene.createNode("TouchSensor");
TouchSensor460.description = "HAnimSite r_rib10";
HAnimSite459.children = new MFNode();

HAnimSite459.children[0] = TouchSensor460;

let Shape461 = browser.currentScene.createNode("Shape");
Shape461.USE = "HAnimSiteShape";
HAnimSite459.children[1] = Shape461;

HAnimSegment439.children[6] = HAnimSite459;

let HAnimSite462 = browser.currentScene.createNode("HAnimSite");
HAnimSite462.name = "l_rib10_pt";
HAnimSite462.DEF = "hanim_l_rib10_pt";
HAnimSite462.translation = new SFVec3f(new float[0.0871,1.1925,0.0992]);
//HAnimSite visualization shape
let TouchSensor463 = browser.currentScene.createNode("TouchSensor");
TouchSensor463.description = "HAnimSite l_rib10";
HAnimSite462.children = new MFNode();

HAnimSite462.children[0] = TouchSensor463;

let Shape464 = browser.currentScene.createNode("Shape");
Shape464.USE = "HAnimSiteShape";
HAnimSite462.children[1] = Shape464;

HAnimSegment439.children[7] = HAnimSite462;

let HAnimSite465 = browser.currentScene.createNode("HAnimSite");
HAnimSite465.name = "rib10_midspine_pt";
HAnimSite465.DEF = "hanim_rib10_midspine_pt";
HAnimSite465.translation = new SFVec3f(new float[0.0049,1.1908,-0.1113]);
//HAnimSite visualization shape
let TouchSensor466 = browser.currentScene.createNode("TouchSensor");
TouchSensor466.description = "HAnimSite rib10_midspine";
HAnimSite465.children = new MFNode();

HAnimSite465.children[0] = TouchSensor466;

let Shape467 = browser.currentScene.createNode("Shape");
Shape467.USE = "HAnimSiteShape";
HAnimSite465.children[1] = Shape467;

HAnimSegment439.children[8] = HAnimSite465;

HAnimJoint438.children = new MFNode();

HAnimJoint438.children[0] = HAnimSegment439;

let HAnimJoint468 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint468.name = "vl1";
HAnimJoint468.DEF = "hanim_vl1";
HAnimJoint468.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimJoint468.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint468.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment469 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment469.name = "l1";
HAnimSegment469.DEF = "hanim_l1";
//<HAnimJoint name='vl1'/> visualization sphere is placed within <HAnimSegment name='l1'/>
let TouchSensor470 = browser.currentScene.createNode("TouchSensor");
TouchSensor470.description = "HAnimJoint vl1, HAnimSegment l1";
HAnimSegment469.children = new MFNode();

HAnimSegment469.children[0] = TouchSensor470;

let Transform471 = browser.currentScene.createNode("Transform");
Transform471.translation = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
let Shape472 = browser.currentScene.createNode("Shape");
Shape472.USE = "HAnimJointShape";
Transform471.children = new MFNode();

Transform471.children[0] = Shape472;

HAnimSegment469.children[1] = Transform471;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl1'/> to <HAnimJoint name='vt12'/>
let Shape473 = browser.currentScene.createNode("Shape");
let LineSet474 = browser.currentScene.createNode("LineSet");
LineSet474.vertexCount = new MFInt32(new int[2]);
let Coordinate475 = browser.currentScene.createNode("Coordinate");
Coordinate475.point = new MFVec3f(new float[0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808]);
LineSet474.coord = Coordinate475;

let ColorRGBA476 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA476.USE = "HAnimSegmentLineColorRGBA";
LineSet474.color = ColorRGBA476;

Shape473.geometry = LineSet474;

HAnimSegment469.children[2] = Shape473;

HAnimJoint468.children = new MFNode();

HAnimJoint468.children[0] = HAnimSegment469;

let HAnimJoint477 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint477.name = "vt12";
HAnimJoint477.DEF = "hanim_vt12";
HAnimJoint477.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
HAnimJoint477.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint477.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment478 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment478.name = "t12";
HAnimSegment478.DEF = "hanim_t12";
//<HAnimJoint name='vt12'/> visualization sphere is placed within <HAnimSegment name='t12'/>
let TouchSensor479 = browser.currentScene.createNode("TouchSensor");
TouchSensor479.description = "HAnimJoint vt12, HAnimSegment t12";
HAnimSegment478.children = new MFNode();

HAnimSegment478.children[0] = TouchSensor479;

let Transform480 = browser.currentScene.createNode("Transform");
Transform480.translation = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
let Shape481 = browser.currentScene.createNode("Shape");
Shape481.USE = "HAnimJointShape";
Transform480.children = new MFNode();

Transform480.children[0] = Shape481;

HAnimSegment478.children[1] = Transform480;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt12'/> to <HAnimJoint name='vt11'/>
let Shape482 = browser.currentScene.createNode("Shape");
let LineSet483 = browser.currentScene.createNode("LineSet");
LineSet483.vertexCount = new MFInt32(new int[2]);
let Coordinate484 = browser.currentScene.createNode("Coordinate");
Coordinate484.point = new MFVec3f(new float[0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081]);
LineSet483.coord = Coordinate484;

let ColorRGBA485 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA485.USE = "HAnimSegmentLineColorRGBA";
LineSet483.color = ColorRGBA485;

Shape482.geometry = LineSet483;

HAnimSegment478.children[2] = Shape482;

HAnimJoint477.children = new MFNode();

HAnimJoint477.children[0] = HAnimSegment478;

let HAnimJoint486 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint486.name = "vt11";
HAnimJoint486.DEF = "hanim_vt11";
HAnimJoint486.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
HAnimJoint486.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint486.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment487 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment487.name = "t11";
HAnimSegment487.DEF = "hanim_t11";
//<HAnimJoint name='vt11'/> visualization sphere is placed within <HAnimSegment name='t11'/>
let TouchSensor488 = browser.currentScene.createNode("TouchSensor");
TouchSensor488.description = "HAnimJoint vt11, HAnimSegment t11";
HAnimSegment487.children = new MFNode();

HAnimSegment487.children[0] = TouchSensor488;

let Transform489 = browser.currentScene.createNode("Transform");
Transform489.translation = new SFVec3f(new float[0.0053,1.2679,-0.081]);
let Shape490 = browser.currentScene.createNode("Shape");
Shape490.USE = "HAnimJointShape";
Transform489.children = new MFNode();

Transform489.children[0] = Shape490;

HAnimSegment487.children[1] = Transform489;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt11'/> to <HAnimJoint name='vt10'/>
let Shape491 = browser.currentScene.createNode("Shape");
let LineSet492 = browser.currentScene.createNode("LineSet");
LineSet492.vertexCount = new MFInt32(new int[2]);
let Coordinate493 = browser.currentScene.createNode("Coordinate");
Coordinate493.point = new MFVec3f(new float[0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822]);
LineSet492.coord = Coordinate493;

let ColorRGBA494 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA494.USE = "HAnimSegmentLineColorRGBA";
LineSet492.color = ColorRGBA494;

Shape491.geometry = LineSet492;

HAnimSegment487.children[2] = Shape491;

HAnimJoint486.children = new MFNode();

HAnimJoint486.children[0] = HAnimSegment487;

let HAnimJoint495 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint495.name = "vt10";
HAnimJoint495.DEF = "hanim_vt10";
HAnimJoint495.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimJoint495.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint495.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment496 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment496.name = "t10";
HAnimSegment496.DEF = "hanim_t10";
//<HAnimJoint name='vt10'/> visualization sphere is placed within <HAnimSegment name='t10'/>
let TouchSensor497 = browser.currentScene.createNode("TouchSensor");
TouchSensor497.description = "HAnimJoint vt10, HAnimSegment t10";
HAnimSegment496.children = new MFNode();

HAnimSegment496.children[0] = TouchSensor497;

let Transform498 = browser.currentScene.createNode("Transform");
Transform498.translation = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
let Shape499 = browser.currentScene.createNode("Shape");
Shape499.USE = "HAnimJointShape";
Transform498.children = new MFNode();

Transform498.children[0] = Shape499;

HAnimSegment496.children[1] = Transform498;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt10'/> to <HAnimJoint name='vt9'/>
let Shape500 = browser.currentScene.createNode("Shape");
let LineSet501 = browser.currentScene.createNode("LineSet");
LineSet501.vertexCount = new MFInt32(new int[2]);
let Coordinate502 = browser.currentScene.createNode("Coordinate");
Coordinate502.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838]);
LineSet501.coord = Coordinate502;

let ColorRGBA503 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA503.USE = "HAnimSegmentLineColorRGBA";
LineSet501.color = ColorRGBA503;

Shape500.geometry = LineSet501;

HAnimSegment496.children[2] = Shape500;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt10'/> to <HAnimSite name='substernale'/>
let Shape504 = browser.currentScene.createNode("Shape");
let LineSet505 = browser.currentScene.createNode("LineSet");
LineSet505.vertexCount = new MFInt32(new int[2]);
let Coordinate506 = browser.currentScene.createNode("Coordinate");
Coordinate506.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0085,1.2995,0.1147]);
LineSet505.coord = Coordinate506;

let ColorRGBA507 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA507.USE = "HAnimSiteLineColorRGBA";
LineSet505.color = ColorRGBA507;

Shape504.geometry = LineSet505;

HAnimSegment496.children[3] = Shape504;

let HAnimSite508 = browser.currentScene.createNode("HAnimSite");
HAnimSite508.name = "substernale_pt";
HAnimSite508.DEF = "hanim_substernale_pt";
HAnimSite508.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
//HAnimSite visualization shape
let TouchSensor509 = browser.currentScene.createNode("TouchSensor");
TouchSensor509.description = "HAnimSite substernale";
HAnimSite508.children = new MFNode();

HAnimSite508.children[0] = TouchSensor509;

let Shape510 = browser.currentScene.createNode("Shape");
Shape510.USE = "HAnimSiteShape";
HAnimSite508.children[1] = Shape510;

HAnimSegment496.children[4] = HAnimSite508;

HAnimJoint495.children = new MFNode();

HAnimJoint495.children[0] = HAnimSegment496;

let HAnimJoint511 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint511.name = "vt9";
HAnimJoint511.DEF = "hanim_vt9";
HAnimJoint511.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
HAnimJoint511.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint511.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment512 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment512.name = "t9";
HAnimSegment512.DEF = "hanim_t9";
//<HAnimJoint name='vt9'/> visualization sphere is placed within <HAnimSegment name='t9'/>
let TouchSensor513 = browser.currentScene.createNode("TouchSensor");
TouchSensor513.description = "HAnimJoint vt9, HAnimSegment t9";
HAnimSegment512.children = new MFNode();

HAnimSegment512.children[0] = TouchSensor513;

let Transform514 = browser.currentScene.createNode("Transform");
Transform514.translation = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
let Shape515 = browser.currentScene.createNode("Shape");
Shape515.USE = "HAnimJointShape";
Transform514.children = new MFNode();

Transform514.children[0] = Shape515;

HAnimSegment512.children[1] = Transform514;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt9'/> to <HAnimJoint name='vt8'/>
let Shape516 = browser.currentScene.createNode("Shape");
let LineSet517 = browser.currentScene.createNode("LineSet");
LineSet517.vertexCount = new MFInt32(new int[2]);
let Coordinate518 = browser.currentScene.createNode("Coordinate");
Coordinate518.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845]);
LineSet517.coord = Coordinate518;

let ColorRGBA519 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA519.USE = "HAnimSegmentLineColorRGBA";
LineSet517.color = ColorRGBA519;

Shape516.geometry = LineSet517;

HAnimSegment512.children[2] = Shape516;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='r_thelion'/>
let Shape520 = browser.currentScene.createNode("Shape");
let LineSet521 = browser.currentScene.createNode("LineSet");
LineSet521.vertexCount = new MFInt32(new int[2]);
let Coordinate522 = browser.currentScene.createNode("Coordinate");
Coordinate522.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,-0.0736,1.3385,0.1217]);
LineSet521.coord = Coordinate522;

let ColorRGBA523 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA523.USE = "HAnimSiteLineColorRGBA";
LineSet521.color = ColorRGBA523;

Shape520.geometry = LineSet521;

HAnimSegment512.children[3] = Shape520;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='l_thelion'/>
let Shape524 = browser.currentScene.createNode("Shape");
let LineSet525 = browser.currentScene.createNode("LineSet");
LineSet525.vertexCount = new MFInt32(new int[2]);
let Coordinate526 = browser.currentScene.createNode("Coordinate");
Coordinate526.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0918,1.3382,0.1192]);
LineSet525.coord = Coordinate526;

let ColorRGBA527 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA527.USE = "HAnimSiteLineColorRGBA";
LineSet525.color = ColorRGBA527;

Shape524.geometry = LineSet525;

HAnimSegment512.children[4] = Shape524;

let HAnimSite528 = browser.currentScene.createNode("HAnimSite");
HAnimSite528.name = "r_thelion_pt";
HAnimSite528.DEF = "hanim_r_thelion_pt";
HAnimSite528.translation = new SFVec3f(new float[-0.0736,1.3385,0.1217]);
//HAnimSite visualization shape
let TouchSensor529 = browser.currentScene.createNode("TouchSensor");
TouchSensor529.description = "HAnimSite r_thelion";
HAnimSite528.children = new MFNode();

HAnimSite528.children[0] = TouchSensor529;

let Shape530 = browser.currentScene.createNode("Shape");
Shape530.USE = "HAnimSiteShape";
HAnimSite528.children[1] = Shape530;

HAnimSegment512.children[5] = HAnimSite528;

let HAnimSite531 = browser.currentScene.createNode("HAnimSite");
HAnimSite531.name = "l_thelion_pt";
HAnimSite531.DEF = "hanim_l_thelion_pt";
HAnimSite531.translation = new SFVec3f(new float[0.0918,1.3382,0.1192]);
//HAnimSite visualization shape
let TouchSensor532 = browser.currentScene.createNode("TouchSensor");
TouchSensor532.description = "HAnimSite l_thelion";
HAnimSite531.children = new MFNode();

HAnimSite531.children[0] = TouchSensor532;

let Shape533 = browser.currentScene.createNode("Shape");
Shape533.USE = "HAnimSiteShape";
HAnimSite531.children[1] = Shape533;

HAnimSegment512.children[6] = HAnimSite531;

HAnimJoint511.children = new MFNode();

HAnimJoint511.children[0] = HAnimSegment512;

let HAnimJoint534 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint534.name = "vt8";
HAnimJoint534.DEF = "hanim_vt8";
HAnimJoint534.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
HAnimJoint534.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint534.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment535 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment535.name = "t8";
HAnimSegment535.DEF = "hanim_t8";
//<HAnimJoint name='vt8'/> visualization sphere is placed within <HAnimSegment name='t8'/>
let TouchSensor536 = browser.currentScene.createNode("TouchSensor");
TouchSensor536.description = "HAnimJoint vt8, HAnimSegment t8";
HAnimSegment535.children = new MFNode();

HAnimSegment535.children[0] = TouchSensor536;

let Transform537 = browser.currentScene.createNode("Transform");
Transform537.translation = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
let Shape538 = browser.currentScene.createNode("Shape");
Shape538.USE = "HAnimJointShape";
Transform537.children = new MFNode();

Transform537.children[0] = Shape538;

HAnimSegment535.children[1] = Transform537;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt8'/> to <HAnimJoint name='vt7'/>
let Shape539 = browser.currentScene.createNode("Shape");
let LineSet540 = browser.currentScene.createNode("LineSet");
LineSet540.vertexCount = new MFInt32(new int[2]);
let Coordinate541 = browser.currentScene.createNode("Coordinate");
Coordinate541.point = new MFVec3f(new float[0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833]);
LineSet540.coord = Coordinate541;

let ColorRGBA542 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA542.USE = "HAnimSegmentLineColorRGBA";
LineSet540.color = ColorRGBA542;

Shape539.geometry = LineSet540;

HAnimSegment535.children[2] = Shape539;

HAnimJoint534.children = new MFNode();

HAnimJoint534.children[0] = HAnimSegment535;

let HAnimJoint543 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint543.name = "vt7";
HAnimJoint543.DEF = "hanim_vt7";
HAnimJoint543.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
HAnimJoint543.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint543.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment544 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment544.name = "t7";
HAnimSegment544.DEF = "hanim_t7";
//<HAnimJoint name='vt7'/> visualization sphere is placed within <HAnimSegment name='t7'/>
let TouchSensor545 = browser.currentScene.createNode("TouchSensor");
TouchSensor545.description = "HAnimJoint vt7, HAnimSegment t7";
HAnimSegment544.children = new MFNode();

HAnimSegment544.children[0] = TouchSensor545;

let Transform546 = browser.currentScene.createNode("Transform");
Transform546.translation = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
let Shape547 = browser.currentScene.createNode("Shape");
Shape547.USE = "HAnimJointShape";
Transform546.children = new MFNode();

Transform546.children[0] = Shape547;

HAnimSegment544.children[1] = Transform546;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt7'/> to <HAnimJoint name='vt6'/>
let Shape548 = browser.currentScene.createNode("Shape");
let LineSet549 = browser.currentScene.createNode("LineSet");
LineSet549.vertexCount = new MFInt32(new int[2]);
let Coordinate550 = browser.currentScene.createNode("Coordinate");
Coordinate550.point = new MFVec3f(new float[0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08]);
LineSet549.coord = Coordinate550;

let ColorRGBA551 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA551.USE = "HAnimSegmentLineColorRGBA";
LineSet549.color = ColorRGBA551;

Shape548.geometry = LineSet549;

HAnimSegment544.children[2] = Shape548;

HAnimJoint543.children = new MFNode();

HAnimJoint543.children[0] = HAnimSegment544;

let HAnimJoint552 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint552.name = "vt6";
HAnimJoint552.DEF = "hanim_vt6";
HAnimJoint552.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimJoint552.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint552.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment553 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment553.name = "t6";
HAnimSegment553.DEF = "hanim_t6";
//<HAnimJoint name='vt6'/> visualization sphere is placed within <HAnimSegment name='t6'/>
let TouchSensor554 = browser.currentScene.createNode("TouchSensor");
TouchSensor554.description = "HAnimJoint vt6, HAnimSegment t6";
HAnimSegment553.children = new MFNode();

HAnimSegment553.children[0] = TouchSensor554;

let Transform555 = browser.currentScene.createNode("Transform");
Transform555.translation = new SFVec3f(new float[0.0059,1.3866,-0.08]);
let Shape556 = browser.currentScene.createNode("Shape");
Shape556.USE = "HAnimJointShape";
Transform555.children = new MFNode();

Transform555.children[0] = Shape556;

HAnimSegment553.children[1] = Transform555;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt6'/> to <HAnimJoint name='vt5'/>
let Shape557 = browser.currentScene.createNode("Shape");
let LineSet558 = browser.currentScene.createNode("LineSet");
LineSet558.vertexCount = new MFInt32(new int[2]);
let Coordinate559 = browser.currentScene.createNode("Coordinate");
Coordinate559.point = new MFVec3f(new float[0.0059,1.3866,-0.08,0.006,1.4102,-0.0745]);
LineSet558.coord = Coordinate559;

let ColorRGBA560 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA560.USE = "HAnimSegmentLineColorRGBA";
LineSet558.color = ColorRGBA560;

Shape557.geometry = LineSet558;

HAnimSegment553.children[2] = Shape557;

HAnimJoint552.children = new MFNode();

HAnimJoint552.children[0] = HAnimSegment553;

let HAnimJoint561 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint561.name = "vt5";
HAnimJoint561.DEF = "hanim_vt5";
HAnimJoint561.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
HAnimJoint561.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint561.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment562 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment562.name = "t5";
HAnimSegment562.DEF = "hanim_t5";
//<HAnimJoint name='vt5'/> visualization sphere is placed within <HAnimSegment name='t5'/>
let TouchSensor563 = browser.currentScene.createNode("TouchSensor");
TouchSensor563.description = "HAnimJoint vt5, HAnimSegment t5";
HAnimSegment562.children = new MFNode();

HAnimSegment562.children[0] = TouchSensor563;

let Transform564 = browser.currentScene.createNode("Transform");
Transform564.translation = new SFVec3f(new float[0.006,1.4102,-0.0745]);
let Shape565 = browser.currentScene.createNode("Shape");
Shape565.USE = "HAnimJointShape";
Transform564.children = new MFNode();

Transform564.children[0] = Shape565;

HAnimSegment562.children[1] = Transform564;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt5'/> to <HAnimJoint name='vt4'/>
let Shape566 = browser.currentScene.createNode("Shape");
let LineSet567 = browser.currentScene.createNode("LineSet");
LineSet567.vertexCount = new MFInt32(new int[2]);
let Coordinate568 = browser.currentScene.createNode("Coordinate");
Coordinate568.point = new MFVec3f(new float[0.006,1.4102,-0.0745,0.0061,1.432,-0.0675]);
LineSet567.coord = Coordinate568;

let ColorRGBA569 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA569.USE = "HAnimSegmentLineColorRGBA";
LineSet567.color = ColorRGBA569;

Shape566.geometry = LineSet567;

HAnimSegment562.children[2] = Shape566;

HAnimJoint561.children = new MFNode();

HAnimJoint561.children[0] = HAnimSegment562;

let HAnimJoint570 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint570.name = "vt4";
HAnimJoint570.DEF = "hanim_vt4";
HAnimJoint570.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
HAnimJoint570.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint570.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment571 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment571.name = "t4";
HAnimSegment571.DEF = "hanim_t4";
//<HAnimJoint name='vt4'/> visualization sphere is placed within <HAnimSegment name='t4'/>
let TouchSensor572 = browser.currentScene.createNode("TouchSensor");
TouchSensor572.description = "HAnimJoint vt4, HAnimSegment t4";
HAnimSegment571.children = new MFNode();

HAnimSegment571.children[0] = TouchSensor572;

let Transform573 = browser.currentScene.createNode("Transform");
Transform573.translation = new SFVec3f(new float[0.0061,1.432,-0.0675]);
let Shape574 = browser.currentScene.createNode("Shape");
Shape574.USE = "HAnimJointShape";
Transform573.children = new MFNode();

Transform573.children[0] = Shape574;

HAnimSegment571.children[1] = Transform573;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt4'/> to <HAnimJoint name='vt3'/>
let Shape575 = browser.currentScene.createNode("Shape");
let LineSet576 = browser.currentScene.createNode("LineSet");
LineSet576.vertexCount = new MFInt32(new int[2]);
let Coordinate577 = browser.currentScene.createNode("Coordinate");
Coordinate577.point = new MFVec3f(new float[0.0061,1.432,-0.0675,0.0062,1.4583,-0.057]);
LineSet576.coord = Coordinate577;

let ColorRGBA578 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA578.USE = "HAnimSegmentLineColorRGBA";
LineSet576.color = ColorRGBA578;

Shape575.geometry = LineSet576;

HAnimSegment571.children[2] = Shape575;

HAnimJoint570.children = new MFNode();

HAnimJoint570.children[0] = HAnimSegment571;

let HAnimJoint579 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint579.name = "vt3";
HAnimJoint579.DEF = "hanim_vt3";
HAnimJoint579.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
HAnimJoint579.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint579.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment580 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment580.name = "t3";
HAnimSegment580.DEF = "hanim_t3";
//<HAnimJoint name='vt3'/> visualization sphere is placed within <HAnimSegment name='t3'/>
let TouchSensor581 = browser.currentScene.createNode("TouchSensor");
TouchSensor581.description = "HAnimJoint vt3, HAnimSegment t3";
HAnimSegment580.children = new MFNode();

HAnimSegment580.children[0] = TouchSensor581;

let Transform582 = browser.currentScene.createNode("Transform");
Transform582.translation = new SFVec3f(new float[0.0062,1.4583,-0.057]);
let Shape583 = browser.currentScene.createNode("Shape");
Shape583.USE = "HAnimJointShape";
Transform582.children = new MFNode();

Transform582.children[0] = Shape583;

HAnimSegment580.children[1] = Transform582;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt3'/> to <HAnimJoint name='vt2'/>
let Shape584 = browser.currentScene.createNode("Shape");
let LineSet585 = browser.currentScene.createNode("LineSet");
LineSet585.vertexCount = new MFInt32(new int[2]);
let Coordinate586 = browser.currentScene.createNode("Coordinate");
Coordinate586.point = new MFVec3f(new float[0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484]);
LineSet585.coord = Coordinate586;

let ColorRGBA587 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA587.USE = "HAnimSegmentLineColorRGBA";
LineSet585.color = ColorRGBA587;

Shape584.geometry = LineSet585;

HAnimSegment580.children[2] = Shape584;

HAnimJoint579.children = new MFNode();

HAnimJoint579.children[0] = HAnimSegment580;

let HAnimJoint588 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint588.name = "vt2";
HAnimJoint588.DEF = "hanim_vt2";
HAnimJoint588.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
HAnimJoint588.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint588.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment589 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment589.name = "t2";
HAnimSegment589.DEF = "hanim_t2";
//<HAnimJoint name='vt2'/> visualization sphere is placed within <HAnimSegment name='t2'/>
let TouchSensor590 = browser.currentScene.createNode("TouchSensor");
TouchSensor590.description = "HAnimJoint vt2, HAnimSegment t2";
HAnimSegment589.children = new MFNode();

HAnimSegment589.children[0] = TouchSensor590;

let Transform591 = browser.currentScene.createNode("Transform");
Transform591.translation = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
let Shape592 = browser.currentScene.createNode("Shape");
Shape592.USE = "HAnimJointShape";
Transform591.children = new MFNode();

Transform591.children[0] = Shape592;

HAnimSegment589.children[1] = Transform591;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt2'/> to <HAnimJoint name='vt1'/>
let Shape593 = browser.currentScene.createNode("Shape");
let LineSet594 = browser.currentScene.createNode("LineSet");
LineSet594.vertexCount = new MFInt32(new int[2]);
let Coordinate595 = browser.currentScene.createNode("Coordinate");
Coordinate595.point = new MFVec3f(new float[0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387]);
LineSet594.coord = Coordinate595;

let ColorRGBA596 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA596.USE = "HAnimSegmentLineColorRGBA";
LineSet594.color = ColorRGBA596;

Shape593.geometry = LineSet594;

HAnimSegment589.children[2] = Shape593;

HAnimJoint588.children = new MFNode();

HAnimJoint588.children[0] = HAnimSegment589;

let HAnimJoint597 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint597.name = "vt1";
HAnimJoint597.DEF = "hanim_vt1";
HAnimJoint597.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimJoint597.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint597.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment598 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment598.name = "t1";
HAnimSegment598.DEF = "hanim_t1";
//<HAnimJoint name='vt1'/> visualization sphere is placed within <HAnimSegment name='t1'/>
let TouchSensor599 = browser.currentScene.createNode("TouchSensor");
TouchSensor599.description = "HAnimJoint vt1, HAnimSegment t1";
HAnimSegment598.children = new MFNode();

HAnimSegment598.children[0] = TouchSensor599;

let Transform600 = browser.currentScene.createNode("Transform");
Transform600.translation = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
let Shape601 = browser.currentScene.createNode("Shape");
Shape601.USE = "HAnimJointShape";
Transform600.children = new MFNode();

Transform600.children[0] = Shape601;

HAnimSegment598.children[1] = Transform600;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='vc7'/>
let Shape602 = browser.currentScene.createNode("Shape");
let LineSet603 = browser.currentScene.createNode("LineSet");
LineSet603.vertexCount = new MFInt32(new int[2]);
let Coordinate604 = browser.currentScene.createNode("Coordinate");
Coordinate604.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301]);
LineSet603.coord = Coordinate604;

let ColorRGBA605 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA605.USE = "HAnimSegmentLineColorRGBA";
LineSet603.color = ColorRGBA605;

Shape602.geometry = LineSet603;

HAnimSegment598.children[2] = Shape602;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='l_sternoclavicular'/>
let Shape606 = browser.currentScene.createNode("Shape");
let LineSet607 = browser.currentScene.createNode("LineSet");
LineSet607.vertexCount = new MFInt32(new int[2]);
let Coordinate608 = browser.currentScene.createNode("Coordinate");
Coordinate608.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]);
LineSet607.coord = Coordinate608;

let ColorRGBA609 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA609.USE = "HAnimSegmentLineColorRGBA";
LineSet607.color = ColorRGBA609;

Shape606.geometry = LineSet607;

HAnimSegment598.children[3] = Shape606;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='r_sternoclavicular'/>
let Shape610 = browser.currentScene.createNode("Shape");
let LineSet611 = browser.currentScene.createNode("LineSet");
LineSet611.vertexCount = new MFInt32(new int[2]);
let Coordinate612 = browser.currentScene.createNode("Coordinate");
Coordinate612.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,-0.082,1.4488,-0.0353]);
LineSet611.coord = Coordinate612;

let ColorRGBA613 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA613.USE = "HAnimSegmentLineColorRGBA";
LineSet611.color = ColorRGBA613;

Shape610.geometry = LineSet611;

HAnimSegment598.children[4] = Shape610;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='suprasternale'/>
let Shape614 = browser.currentScene.createNode("Shape");
let LineSet615 = browser.currentScene.createNode("LineSet");
LineSet615.vertexCount = new MFInt32(new int[2]);
let Coordinate616 = browser.currentScene.createNode("Coordinate");
Coordinate616.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0084,1.4714,0.0551]);
LineSet615.coord = Coordinate616;

let ColorRGBA617 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA617.USE = "HAnimSiteLineColorRGBA";
LineSet615.color = ColorRGBA617;

Shape614.geometry = LineSet615;

HAnimSegment598.children[5] = Shape614;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='cervicale'/>
let Shape618 = browser.currentScene.createNode("Shape");
let LineSet619 = browser.currentScene.createNode("LineSet");
LineSet619.vertexCount = new MFInt32(new int[2]);
let Coordinate620 = browser.currentScene.createNode("Coordinate");
Coordinate620.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0064,1.52,-0.0815]);
LineSet619.coord = Coordinate620;

let ColorRGBA621 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA621.USE = "HAnimSiteLineColorRGBA";
LineSet619.color = ColorRGBA621;

Shape618.geometry = LineSet619;

HAnimSegment598.children[6] = Shape618;

let HAnimSite622 = browser.currentScene.createNode("HAnimSite");
HAnimSite622.name = "suprasternale_pt";
HAnimSite622.DEF = "hanim_suprasternale_pt";
HAnimSite622.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
//HAnimSite visualization shape
let TouchSensor623 = browser.currentScene.createNode("TouchSensor");
TouchSensor623.description = "HAnimSite suprasternale";
HAnimSite622.children = new MFNode();

HAnimSite622.children[0] = TouchSensor623;

let Shape624 = browser.currentScene.createNode("Shape");
Shape624.USE = "HAnimSiteShape";
HAnimSite622.children[1] = Shape624;

HAnimSegment598.children[7] = HAnimSite622;

let HAnimSite625 = browser.currentScene.createNode("HAnimSite");
HAnimSite625.name = "cervicale_pt";
HAnimSite625.DEF = "hanim_cervicale_pt";
HAnimSite625.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
//HAnimSite visualization shape
let TouchSensor626 = browser.currentScene.createNode("TouchSensor");
TouchSensor626.description = "HAnimSite cervicale";
HAnimSite625.children = new MFNode();

HAnimSite625.children[0] = TouchSensor626;

let Shape627 = browser.currentScene.createNode("Shape");
Shape627.USE = "HAnimSiteShape";
HAnimSite625.children[1] = Shape627;

HAnimSegment598.children[8] = HAnimSite625;

HAnimJoint597.children = new MFNode();

HAnimJoint597.children[0] = HAnimSegment598;

let HAnimJoint628 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint628.name = "vc7";
HAnimJoint628.DEF = "hanim_vc7";
HAnimJoint628.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
HAnimJoint628.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint628.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment629 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment629.name = "c7";
HAnimSegment629.DEF = "hanim_c7";
//<HAnimJoint name='vc7'/> visualization sphere is placed within <HAnimSegment name='c7'/>
let TouchSensor630 = browser.currentScene.createNode("TouchSensor");
TouchSensor630.description = "HAnimJoint vc7, HAnimSegment c7";
HAnimSegment629.children = new MFNode();

HAnimSegment629.children[0] = TouchSensor630;

let Transform631 = browser.currentScene.createNode("Transform");
Transform631.translation = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
let Shape632 = browser.currentScene.createNode("Shape");
Shape632.USE = "HAnimJointShape";
Transform631.children = new MFNode();

Transform631.children[0] = Shape632;

HAnimSegment629.children[1] = Transform631;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc7'/> to <HAnimJoint name='vc6'/>
let Shape633 = browser.currentScene.createNode("Shape");
let LineSet634 = browser.currentScene.createNode("LineSet");
LineSet634.vertexCount = new MFInt32(new int[2]);
let Coordinate635 = browser.currentScene.createNode("Coordinate");
Coordinate635.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143]);
LineSet634.coord = Coordinate635;

let ColorRGBA636 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA636.USE = "HAnimSegmentLineColorRGBA";
LineSet634.color = ColorRGBA636;

Shape633.geometry = LineSet634;

HAnimSegment629.children[2] = Shape633;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='r_neck_base'/>
let Shape637 = browser.currentScene.createNode("Shape");
let LineSet638 = browser.currentScene.createNode("LineSet");
LineSet638.vertexCount = new MFInt32(new int[2]);
let Coordinate639 = browser.currentScene.createNode("Coordinate");
Coordinate639.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,-0.0419,1.5149,-0.022]);
LineSet638.coord = Coordinate639;

let ColorRGBA640 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA640.USE = "HAnimSiteLineColorRGBA";
LineSet638.color = ColorRGBA640;

Shape637.geometry = LineSet638;

HAnimSegment629.children[3] = Shape637;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='l_neck_base'/>
let Shape641 = browser.currentScene.createNode("Shape");
let LineSet642 = browser.currentScene.createNode("LineSet");
LineSet642.vertexCount = new MFInt32(new int[2]);
let Coordinate643 = browser.currentScene.createNode("Coordinate");
Coordinate643.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0646,1.5141,-0.038]);
LineSet642.coord = Coordinate643;

let ColorRGBA644 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA644.USE = "HAnimSiteLineColorRGBA";
LineSet642.color = ColorRGBA644;

Shape641.geometry = LineSet642;

HAnimSegment629.children[4] = Shape641;

let HAnimSite645 = browser.currentScene.createNode("HAnimSite");
HAnimSite645.name = "r_neck_base_pt";
HAnimSite645.DEF = "hanim_r_neck_base_pt";
HAnimSite645.translation = new SFVec3f(new float[-0.0419,1.5149,-0.022]);
//HAnimSite visualization shape
let TouchSensor646 = browser.currentScene.createNode("TouchSensor");
TouchSensor646.description = "HAnimSite r_neck_base";
HAnimSite645.children = new MFNode();

HAnimSite645.children[0] = TouchSensor646;

let Shape647 = browser.currentScene.createNode("Shape");
Shape647.USE = "HAnimSiteShape";
HAnimSite645.children[1] = Shape647;

HAnimSegment629.children[5] = HAnimSite645;

let HAnimSite648 = browser.currentScene.createNode("HAnimSite");
HAnimSite648.name = "l_neck_base_pt";
HAnimSite648.DEF = "hanim_l_neck_base_pt";
HAnimSite648.translation = new SFVec3f(new float[0.0646,1.5141,-0.038]);
//HAnimSite visualization shape
let TouchSensor649 = browser.currentScene.createNode("TouchSensor");
TouchSensor649.description = "HAnimSite l_neck_base";
HAnimSite648.children = new MFNode();

HAnimSite648.children[0] = TouchSensor649;

let Shape650 = browser.currentScene.createNode("Shape");
Shape650.USE = "HAnimSiteShape";
HAnimSite648.children[1] = Shape650;

HAnimSegment629.children[6] = HAnimSite648;

HAnimJoint628.children = new MFNode();

HAnimJoint628.children[0] = HAnimSegment629;

let HAnimJoint651 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint651.name = "vc6";
HAnimJoint651.DEF = "hanim_vc6";
HAnimJoint651.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
HAnimJoint651.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint651.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment652 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment652.name = "c6";
HAnimSegment652.DEF = "hanim_c6";
//<HAnimJoint name='vc6'/> visualization sphere is placed within <HAnimSegment name='c6'/>
let TouchSensor653 = browser.currentScene.createNode("TouchSensor");
TouchSensor653.description = "HAnimJoint vc6, HAnimSegment c6";
HAnimSegment652.children = new MFNode();

HAnimSegment652.children[0] = TouchSensor653;

let Transform654 = browser.currentScene.createNode("Transform");
Transform654.translation = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
let Shape655 = browser.currentScene.createNode("Shape");
Shape655.USE = "HAnimJointShape";
Transform654.children = new MFNode();

Transform654.children[0] = Shape655;

HAnimSegment652.children[1] = Transform654;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc6'/> to <HAnimJoint name='vc5'/>
let Shape656 = browser.currentScene.createNode("Shape");
let LineSet657 = browser.currentScene.createNode("LineSet");
LineSet657.vertexCount = new MFInt32(new int[2]);
let Coordinate658 = browser.currentScene.createNode("Coordinate");
Coordinate658.point = new MFVec3f(new float[0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082]);
LineSet657.coord = Coordinate658;

let ColorRGBA659 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA659.USE = "HAnimSegmentLineColorRGBA";
LineSet657.color = ColorRGBA659;

Shape656.geometry = LineSet657;

HAnimSegment652.children[2] = Shape656;

HAnimJoint651.children = new MFNode();

HAnimJoint651.children[0] = HAnimSegment652;

let HAnimJoint660 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint660.name = "vc5";
HAnimJoint660.DEF = "hanim_vc5";
HAnimJoint660.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
HAnimJoint660.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint660.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment661 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment661.name = "c5";
HAnimSegment661.DEF = "hanim_c5";
//<HAnimJoint name='vc5'/> visualization sphere is placed within <HAnimSegment name='c5'/>
let TouchSensor662 = browser.currentScene.createNode("TouchSensor");
TouchSensor662.description = "HAnimJoint vc5, HAnimSegment c5";
HAnimSegment661.children = new MFNode();

HAnimSegment661.children[0] = TouchSensor662;

let Transform663 = browser.currentScene.createNode("Transform");
Transform663.translation = new SFVec3f(new float[0.0066,1.552,-0.0082]);
let Shape664 = browser.currentScene.createNode("Shape");
Shape664.USE = "HAnimJointShape";
Transform663.children = new MFNode();

Transform663.children[0] = Shape664;

HAnimSegment661.children[1] = Transform663;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc5'/> to <HAnimJoint name='vc4'/>
let Shape665 = browser.currentScene.createNode("Shape");
let LineSet666 = browser.currentScene.createNode("LineSet");
LineSet666.vertexCount = new MFInt32(new int[2]);
let Coordinate667 = browser.currentScene.createNode("Coordinate");
Coordinate667.point = new MFVec3f(new float[0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084]);
LineSet666.coord = Coordinate667;

let ColorRGBA668 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA668.USE = "HAnimSegmentLineColorRGBA";
LineSet666.color = ColorRGBA668;

Shape665.geometry = LineSet666;

HAnimSegment661.children[2] = Shape665;

HAnimJoint660.children = new MFNode();

HAnimJoint660.children[0] = HAnimSegment661;

let HAnimJoint669 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint669.name = "vc4";
HAnimJoint669.DEF = "hanim_vc4";
HAnimJoint669.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimJoint669.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint669.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment670 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment670.name = "c4";
HAnimSegment670.DEF = "hanim_c4";
//<HAnimJoint name='vc4'/> visualization sphere is placed within <HAnimSegment name='c4'/>
let TouchSensor671 = browser.currentScene.createNode("TouchSensor");
TouchSensor671.description = "HAnimJoint vc4, HAnimSegment c4";
HAnimSegment670.children = new MFNode();

HAnimSegment670.children[0] = TouchSensor671;

let Transform672 = browser.currentScene.createNode("Transform");
Transform672.translation = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
let Shape673 = browser.currentScene.createNode("Shape");
Shape673.USE = "HAnimJointShape";
Transform672.children = new MFNode();

Transform672.children[0] = Shape673;

HAnimSegment670.children[1] = Transform672;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc4'/> to <HAnimJoint name='vc3'/>
let Shape674 = browser.currentScene.createNode("Shape");
let LineSet675 = browser.currentScene.createNode("LineSet");
LineSet675.vertexCount = new MFInt32(new int[2]);
let Coordinate676 = browser.currentScene.createNode("Coordinate");
Coordinate676.point = new MFVec3f(new float[0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103]);
LineSet675.coord = Coordinate676;

let ColorRGBA677 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA677.USE = "HAnimSegmentLineColorRGBA";
LineSet675.color = ColorRGBA677;

Shape674.geometry = LineSet675;

HAnimSegment670.children[2] = Shape674;

HAnimJoint669.children = new MFNode();

HAnimJoint669.children[0] = HAnimSegment670;

let HAnimJoint678 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint678.name = "vc3";
HAnimJoint678.DEF = "hanim_vc3";
HAnimJoint678.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
HAnimJoint678.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint678.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment679 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment679.name = "c3";
HAnimSegment679.DEF = "hanim_c3";
//<HAnimJoint name='vc3'/> visualization sphere is placed within <HAnimSegment name='c3'/>
let TouchSensor680 = browser.currentScene.createNode("TouchSensor");
TouchSensor680.description = "HAnimJoint vc3, HAnimSegment c3";
HAnimSegment679.children = new MFNode();

HAnimSegment679.children[0] = TouchSensor680;

let Transform681 = browser.currentScene.createNode("Transform");
Transform681.translation = new SFVec3f(new float[0.0066,1.58,-0.0103]);
let Shape682 = browser.currentScene.createNode("Shape");
Shape682.USE = "HAnimJointShape";
Transform681.children = new MFNode();

Transform681.children[0] = Shape682;

HAnimSegment679.children[1] = Transform681;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc3'/> to <HAnimJoint name='vc2'/>
let Shape683 = browser.currentScene.createNode("Shape");
let LineSet684 = browser.currentScene.createNode("LineSet");
LineSet684.vertexCount = new MFInt32(new int[2]);
let Coordinate685 = browser.currentScene.createNode("Coordinate");
Coordinate685.point = new MFVec3f(new float[0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103]);
LineSet684.coord = Coordinate685;

let ColorRGBA686 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA686.USE = "HAnimSegmentLineColorRGBA";
LineSet684.color = ColorRGBA686;

Shape683.geometry = LineSet684;

HAnimSegment679.children[2] = Shape683;

HAnimJoint678.children = new MFNode();

HAnimJoint678.children[0] = HAnimSegment679;

let HAnimJoint687 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint687.name = "vc2";
HAnimJoint687.DEF = "hanim_vc2";
HAnimJoint687.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimJoint687.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint687.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment688 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment688.name = "c2";
HAnimSegment688.DEF = "hanim_c2";
//<HAnimJoint name='vc2'/> visualization sphere is placed within <HAnimSegment name='c2'/>
let TouchSensor689 = browser.currentScene.createNode("TouchSensor");
TouchSensor689.description = "HAnimJoint vc2, HAnimSegment c2";
HAnimSegment688.children = new MFNode();

HAnimSegment688.children[0] = TouchSensor689;

let Transform690 = browser.currentScene.createNode("Transform");
Transform690.translation = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
let Shape691 = browser.currentScene.createNode("Shape");
Shape691.USE = "HAnimJointShape";
Transform690.children = new MFNode();

Transform690.children[0] = Shape691;

HAnimSegment688.children[1] = Transform690;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc2'/> to <HAnimJoint name='vc1'/>
let Shape692 = browser.currentScene.createNode("Shape");
let LineSet693 = browser.currentScene.createNode("LineSet");
LineSet693.vertexCount = new MFInt32(new int[2]);
let Coordinate694 = browser.currentScene.createNode("Coordinate");
Coordinate694.point = new MFVec3f(new float[0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034]);
LineSet693.coord = Coordinate694;

let ColorRGBA695 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA695.USE = "HAnimSegmentLineColorRGBA";
LineSet693.color = ColorRGBA695;

Shape692.geometry = LineSet693;

HAnimSegment688.children[2] = Shape692;

HAnimJoint687.children = new MFNode();

HAnimJoint687.children[0] = HAnimSegment688;

let HAnimJoint696 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint696.name = "vc1";
HAnimJoint696.DEF = "hanim_vc1";
HAnimJoint696.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
HAnimJoint696.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint696.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment697 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment697.name = "c1";
HAnimSegment697.DEF = "hanim_c1";
//<HAnimJoint name='vc1'/> visualization sphere is placed within <HAnimSegment name='c1'/>
let TouchSensor698 = browser.currentScene.createNode("TouchSensor");
TouchSensor698.description = "HAnimJoint vc1, HAnimSegment c1";
HAnimSegment697.children = new MFNode();

HAnimSegment697.children[0] = TouchSensor698;

let Transform699 = browser.currentScene.createNode("Transform");
Transform699.translation = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
let Shape700 = browser.currentScene.createNode("Shape");
Shape700.USE = "HAnimJointShape";
Transform699.children = new MFNode();

Transform699.children[0] = Shape700;

HAnimSegment697.children[1] = Transform699;

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc1'/> to <HAnimJoint name='skullbase'/>
let Shape701 = browser.currentScene.createNode("Shape");
let LineSet702 = browser.currentScene.createNode("LineSet");
LineSet702.vertexCount = new MFInt32(new int[2]);
let Coordinate703 = browser.currentScene.createNode("Coordinate");
Coordinate703.point = new MFVec3f(new float[0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236]);
LineSet702.coord = Coordinate703;

let ColorRGBA704 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA704.USE = "HAnimSegmentLineColorRGBA";
LineSet702.color = ColorRGBA704;

Shape701.geometry = LineSet702;

HAnimSegment697.children[2] = Shape701;

HAnimJoint696.children = new MFNode();

HAnimJoint696.children[0] = HAnimSegment697;

let HAnimJoint705 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint705.name = "skullbase";
HAnimJoint705.DEF = "hanim_skullbase";
HAnimJoint705.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimJoint705.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint705.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment706 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment706.name = "skull";
HAnimSegment706.DEF = "hanim_skull";
//<HAnimJoint name='skullbase'/> visualization sphere is placed within <HAnimSegment name='skull'/>
let TouchSensor707 = browser.currentScene.createNode("TouchSensor");
TouchSensor707.description = "HAnimJoint skullbase, HAnimSegment skull";
HAnimSegment706.children = new MFNode();

HAnimSegment706.children[0] = TouchSensor707;

let Transform708 = browser.currentScene.createNode("Transform");
Transform708.translation = new SFVec3f(new float[0.0044,1.6209,0.0236]);
let Shape709 = browser.currentScene.createNode("Shape");
Shape709.USE = "HAnimJointShape";
Transform708.children = new MFNode();

Transform708.children[0] = Shape709;

HAnimSegment706.children[1] = Transform708;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyeball_joint'/>
let Shape710 = browser.currentScene.createNode("Shape");
let LineSet711 = browser.currentScene.createNode("LineSet");
LineSet711.vertexCount = new MFInt32(new int[2]);
let Coordinate712 = browser.currentScene.createNode("Coordinate");
Coordinate712.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0336,1.6332,0.0502]);
LineSet711.coord = Coordinate712;

let ColorRGBA713 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA713.USE = "HAnimSegmentLineColorRGBA";
LineSet711.color = ColorRGBA713;

Shape710.geometry = LineSet711;

HAnimSegment706.children[2] = Shape710;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyelid_joint'/>
let Shape714 = browser.currentScene.createNode("Shape");
let LineSet715 = browser.currentScene.createNode("LineSet");
LineSet715.vertexCount = new MFInt32(new int[2]);
let Coordinate716 = browser.currentScene.createNode("Coordinate");
Coordinate716.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0336,1.6332,0.0502]);
LineSet715.coord = Coordinate716;

let ColorRGBA717 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA717.USE = "HAnimSegmentLineColorRGBA";
LineSet715.color = ColorRGBA717;

Shape714.geometry = LineSet715;

HAnimSegment706.children[3] = Shape714;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyebrow_joint'/>
let Shape718 = browser.currentScene.createNode("Shape");
let LineSet719 = browser.currentScene.createNode("LineSet");
LineSet719.vertexCount = new MFInt32(new int[2]);
let Coordinate720 = browser.currentScene.createNode("Coordinate");
Coordinate720.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0336,1.635,0.0506]);
LineSet719.coord = Coordinate720;

let ColorRGBA721 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA721.USE = "HAnimSegmentLineColorRGBA";
LineSet719.color = ColorRGBA721;

Shape718.geometry = LineSet719;

HAnimSegment706.children[4] = Shape718;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyeball_joint'/>
let Shape722 = browser.currentScene.createNode("Shape");
let LineSet723 = browser.currentScene.createNode("LineSet");
LineSet723.vertexCount = new MFInt32(new int[2]);
let Coordinate724 = browser.currentScene.createNode("Coordinate");
Coordinate724.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502]);
LineSet723.coord = Coordinate724;

let ColorRGBA725 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA725.USE = "HAnimSegmentLineColorRGBA";
LineSet723.color = ColorRGBA725;

Shape722.geometry = LineSet723;

HAnimSegment706.children[5] = Shape722;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyelid_joint'/>
let Shape726 = browser.currentScene.createNode("Shape");
let LineSet727 = browser.currentScene.createNode("LineSet");
LineSet727.vertexCount = new MFInt32(new int[2]);
let Coordinate728 = browser.currentScene.createNode("Coordinate");
Coordinate728.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502]);
LineSet727.coord = Coordinate728;

let ColorRGBA729 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA729.USE = "HAnimSegmentLineColorRGBA";
LineSet727.color = ColorRGBA729;

Shape726.geometry = LineSet727;

HAnimSegment706.children[6] = Shape726;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyebrow_joint'/>
let Shape730 = browser.currentScene.createNode("Shape");
let LineSet731 = browser.currentScene.createNode("LineSet");
LineSet731.vertexCount = new MFInt32(new int[2]);
let Coordinate732 = browser.currentScene.createNode("Coordinate");
Coordinate732.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0336,1.635,0.0506]);
LineSet731.coord = Coordinate732;

let ColorRGBA733 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA733.USE = "HAnimSegmentLineColorRGBA";
LineSet731.color = ColorRGBA733;

Shape730.geometry = LineSet731;

HAnimSegment706.children[7] = Shape730;

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='temporomandibular'/>
let Shape734 = browser.currentScene.createNode("Shape");
let LineSet735 = browser.currentScene.createNode("LineSet");
LineSet735.vertexCount = new MFInt32(new int[2]);
let Coordinate736 = browser.currentScene.createNode("Coordinate");
Coordinate736.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1.63,0.015]);
LineSet735.coord = Coordinate736;

let ColorRGBA737 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA737.USE = "HAnimSegmentLineColorRGBA";
LineSet735.color = ColorRGBA737;

Shape734.geometry = LineSet735;

HAnimSegment706.children[8] = Shape734;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='skull_tip'/>
let Shape738 = browser.currentScene.createNode("Shape");
let LineSet739 = browser.currentScene.createNode("LineSet");
LineSet739.vertexCount = new MFInt32(new int[2]);
let Coordinate740 = browser.currentScene.createNode("Coordinate");
Coordinate740.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.005,1.7504,0.0055]);
LineSet739.coord = Coordinate740;

let ColorRGBA741 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA741.USE = "HAnimSiteLineColorRGBA";
LineSet739.color = ColorRGBA741;

Shape738.geometry = LineSet739;

HAnimSegment706.children[9] = Shape738;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='sellion'/>
let Shape742 = browser.currentScene.createNode("Shape");
let LineSet743 = browser.currentScene.createNode("LineSet");
LineSet743.vertexCount = new MFInt32(new int[2]);
let Coordinate744 = browser.currentScene.createNode("Coordinate");
Coordinate744.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0058,1.6316,0.0852]);
LineSet743.coord = Coordinate744;

let ColorRGBA745 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA745.USE = "HAnimSiteLineColorRGBA";
LineSet743.color = ColorRGBA745;

Shape742.geometry = LineSet743;

HAnimSegment706.children[10] = Shape742;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_infraorbitale'/>
let Shape746 = browser.currentScene.createNode("Shape");
let LineSet747 = browser.currentScene.createNode("LineSet");
LineSet747.vertexCount = new MFInt32(new int[2]);
let Coordinate748 = browser.currentScene.createNode("Coordinate");
Coordinate748.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0237,1.6171,0.0752]);
LineSet747.coord = Coordinate748;

let ColorRGBA749 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA749.USE = "HAnimSiteLineColorRGBA";
LineSet747.color = ColorRGBA749;

Shape746.geometry = LineSet747;

HAnimSegment706.children[11] = Shape746;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_infraorbitale'/>
let Shape750 = browser.currentScene.createNode("Shape");
let LineSet751 = browser.currentScene.createNode("LineSet");
LineSet751.vertexCount = new MFInt32(new int[2]);
let Coordinate752 = browser.currentScene.createNode("Coordinate");
Coordinate752.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0341,1.6171,0.0752]);
LineSet751.coord = Coordinate752;

let ColorRGBA753 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA753.USE = "HAnimSiteLineColorRGBA";
LineSet751.color = ColorRGBA753;

Shape750.geometry = LineSet751;

HAnimSegment706.children[12] = Shape750;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='supramenton'/>
let Shape754 = browser.currentScene.createNode("Shape");
let LineSet755 = browser.currentScene.createNode("LineSet");
LineSet755.vertexCount = new MFInt32(new int[2]);
let Coordinate756 = browser.currentScene.createNode("Coordinate");
Coordinate756.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0061,1.541,0.0805]);
LineSet755.coord = Coordinate756;

let ColorRGBA757 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA757.USE = "HAnimSiteLineColorRGBA";
LineSet755.color = ColorRGBA757;

Shape754.geometry = LineSet755;

HAnimSegment706.children[13] = Shape754;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_tragion'/>
let Shape758 = browser.currentScene.createNode("Shape");
let LineSet759 = browser.currentScene.createNode("LineSet");
LineSet759.vertexCount = new MFInt32(new int[2]);
let Coordinate760 = browser.currentScene.createNode("Coordinate");
Coordinate760.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0646,1.6347,0.0302]);
LineSet759.coord = Coordinate760;

let ColorRGBA761 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA761.USE = "HAnimSiteLineColorRGBA";
LineSet759.color = ColorRGBA761;

Shape758.geometry = LineSet759;

HAnimSegment706.children[14] = Shape758;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_gonion'/>
let Shape762 = browser.currentScene.createNode("Shape");
let LineSet763 = browser.currentScene.createNode("LineSet");
LineSet763.vertexCount = new MFInt32(new int[2]);
let Coordinate764 = browser.currentScene.createNode("Coordinate");
Coordinate764.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.052,1.5529,0.0347]);
LineSet763.coord = Coordinate764;

let ColorRGBA765 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA765.USE = "HAnimSiteLineColorRGBA";
LineSet763.color = ColorRGBA765;

Shape762.geometry = LineSet763;

HAnimSegment706.children[15] = Shape762;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_tragion'/>
let Shape766 = browser.currentScene.createNode("Shape");
let LineSet767 = browser.currentScene.createNode("LineSet");
LineSet767.vertexCount = new MFInt32(new int[2]);
let Coordinate768 = browser.currentScene.createNode("Coordinate");
Coordinate768.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0739,1.6348,0.0282]);
LineSet767.coord = Coordinate768;

let ColorRGBA769 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA769.USE = "HAnimSiteLineColorRGBA";
LineSet767.color = ColorRGBA769;

Shape766.geometry = LineSet767;

HAnimSegment706.children[16] = Shape766;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_gonion'/>
let Shape770 = browser.currentScene.createNode("Shape");
let LineSet771 = browser.currentScene.createNode("LineSet");
LineSet771.vertexCount = new MFInt32(new int[2]);
let Coordinate772 = browser.currentScene.createNode("Coordinate");
Coordinate772.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0631,1.553,0.033]);
LineSet771.coord = Coordinate772;

let ColorRGBA773 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA773.USE = "HAnimSiteLineColorRGBA";
LineSet771.color = ColorRGBA773;

Shape770.geometry = LineSet771;

HAnimSegment706.children[17] = Shape770;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='nuchale'/>
let Shape774 = browser.currentScene.createNode("Shape");
let LineSet775 = browser.currentScene.createNode("LineSet");
LineSet775.vertexCount = new MFInt32(new int[2]);
let Coordinate776 = browser.currentScene.createNode("Coordinate");
Coordinate776.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0039,1.5972,-0.0796]);
LineSet775.coord = Coordinate776;

let ColorRGBA777 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA777.USE = "HAnimSiteLineColorRGBA";
LineSet775.color = ColorRGBA777;

Shape774.geometry = LineSet775;

HAnimSegment706.children[18] = Shape774;

let HAnimSite778 = browser.currentScene.createNode("HAnimSite");
HAnimSite778.name = "skull_tip";
HAnimSite778.DEF = "hanim_skull_tip";
HAnimSite778.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
//TODO move skull_tip x to zero, check others for symmetry
//HAnimSite visualization shape
let TouchSensor779 = browser.currentScene.createNode("TouchSensor");
TouchSensor779.description = "HAnimSite skull_tip";
HAnimSite778.children = new MFNode();

HAnimSite778.children[0] = TouchSensor779;

let Shape780 = browser.currentScene.createNode("Shape");
Shape780.USE = "HAnimSiteShape";
HAnimSite778.children[1] = Shape780;

HAnimSegment706.children[19] = HAnimSite778;

let HAnimSite781 = browser.currentScene.createNode("HAnimSite");
HAnimSite781.name = "sellion_pt";
HAnimSite781.DEF = "hanim_sellion_pt";
HAnimSite781.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
//HAnimSite visualization shape
let TouchSensor782 = browser.currentScene.createNode("TouchSensor");
TouchSensor782.description = "HAnimSite sellion";
HAnimSite781.children = new MFNode();

HAnimSite781.children[0] = TouchSensor782;

let Shape783 = browser.currentScene.createNode("Shape");
Shape783.USE = "HAnimSiteShape";
HAnimSite781.children[1] = Shape783;

HAnimSegment706.children[20] = HAnimSite781;

let HAnimSite784 = browser.currentScene.createNode("HAnimSite");
HAnimSite784.name = "r_infraorbitale_pt";
HAnimSite784.DEF = "hanim_r_infraorbitale_pt";
HAnimSite784.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
//HAnimSite visualization shape
let TouchSensor785 = browser.currentScene.createNode("TouchSensor");
TouchSensor785.description = "HAnimSite r_infraorbitale";
HAnimSite784.children = new MFNode();

HAnimSite784.children[0] = TouchSensor785;

let Shape786 = browser.currentScene.createNode("Shape");
Shape786.USE = "HAnimSiteShape";
HAnimSite784.children[1] = Shape786;

HAnimSegment706.children[21] = HAnimSite784;

let HAnimSite787 = browser.currentScene.createNode("HAnimSite");
HAnimSite787.name = "l_infraorbitale_pt";
HAnimSite787.DEF = "hanim_l_infraorbitale_pt";
HAnimSite787.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
//HAnimSite visualization shape
let TouchSensor788 = browser.currentScene.createNode("TouchSensor");
TouchSensor788.description = "HAnimSite l_infraorbitale";
HAnimSite787.children = new MFNode();

HAnimSite787.children[0] = TouchSensor788;

let Shape789 = browser.currentScene.createNode("Shape");
Shape789.USE = "HAnimSiteShape";
HAnimSite787.children[1] = Shape789;

HAnimSegment706.children[22] = HAnimSite787;

let HAnimSite790 = browser.currentScene.createNode("HAnimSite");
HAnimSite790.name = "supramenton_pt";
HAnimSite790.DEF = "hanim_supramenton_pt";
HAnimSite790.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
//HAnimSite visualization shape
let TouchSensor791 = browser.currentScene.createNode("TouchSensor");
TouchSensor791.description = "HAnimSite supramenton";
HAnimSite790.children = new MFNode();

HAnimSite790.children[0] = TouchSensor791;

let Shape792 = browser.currentScene.createNode("Shape");
Shape792.USE = "HAnimSiteShape";
HAnimSite790.children[1] = Shape792;

HAnimSegment706.children[23] = HAnimSite790;

let HAnimSite793 = browser.currentScene.createNode("HAnimSite");
HAnimSite793.name = "r_tragion_pt";
HAnimSite793.DEF = "hanim_r_tragion_pt";
HAnimSite793.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
//HAnimSite visualization shape
let TouchSensor794 = browser.currentScene.createNode("TouchSensor");
TouchSensor794.description = "HAnimSite r_tragion";
HAnimSite793.children = new MFNode();

HAnimSite793.children[0] = TouchSensor794;

let Shape795 = browser.currentScene.createNode("Shape");
Shape795.USE = "HAnimSiteShape";
HAnimSite793.children[1] = Shape795;

HAnimSegment706.children[24] = HAnimSite793;

let HAnimSite796 = browser.currentScene.createNode("HAnimSite");
HAnimSite796.name = "r_gonion_pt";
HAnimSite796.DEF = "hanim_r_gonion_pt";
HAnimSite796.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
//HAnimSite visualization shape
let TouchSensor797 = browser.currentScene.createNode("TouchSensor");
TouchSensor797.description = "HAnimSite r_gonion";
HAnimSite796.children = new MFNode();

HAnimSite796.children[0] = TouchSensor797;

let Shape798 = browser.currentScene.createNode("Shape");
Shape798.USE = "HAnimSiteShape";
HAnimSite796.children[1] = Shape798;

HAnimSegment706.children[25] = HAnimSite796;

let HAnimSite799 = browser.currentScene.createNode("HAnimSite");
HAnimSite799.name = "l_tragion_pt";
HAnimSite799.DEF = "hanim_l_tragion_pt";
HAnimSite799.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
//HAnimSite visualization shape
let TouchSensor800 = browser.currentScene.createNode("TouchSensor");
TouchSensor800.description = "HAnimSite l_tragion";
HAnimSite799.children = new MFNode();

HAnimSite799.children[0] = TouchSensor800;

let Shape801 = browser.currentScene.createNode("Shape");
Shape801.USE = "HAnimSiteShape";
HAnimSite799.children[1] = Shape801;

HAnimSegment706.children[26] = HAnimSite799;

let HAnimSite802 = browser.currentScene.createNode("HAnimSite");
HAnimSite802.name = "l_gonion_pt";
HAnimSite802.DEF = "hanim_l_gonion_pt";
HAnimSite802.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
//HAnimSite visualization shape
let TouchSensor803 = browser.currentScene.createNode("TouchSensor");
TouchSensor803.description = "HAnimSite l_gonion";
HAnimSite802.children = new MFNode();

HAnimSite802.children[0] = TouchSensor803;

let Shape804 = browser.currentScene.createNode("Shape");
Shape804.USE = "HAnimSiteShape";
HAnimSite802.children[1] = Shape804;

HAnimSegment706.children[27] = HAnimSite802;

let HAnimSite805 = browser.currentScene.createNode("HAnimSite");
HAnimSite805.name = "nuchale_pt";
HAnimSite805.DEF = "hanim_nuchale_pt";
HAnimSite805.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
//HAnimSite visualization shape
let TouchSensor806 = browser.currentScene.createNode("TouchSensor");
TouchSensor806.description = "HAnimSite nuchale";
HAnimSite805.children = new MFNode();

HAnimSite805.children[0] = TouchSensor806;

let Shape807 = browser.currentScene.createNode("Shape");
Shape807.USE = "HAnimSiteShape";
HAnimSite805.children[1] = Shape807;

HAnimSegment706.children[28] = HAnimSite805;

HAnimJoint705.children = new MFNode();

HAnimJoint705.children[0] = HAnimSegment706;

let HAnimJoint808 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint808.name = "l_eyeball_joint";
HAnimJoint808.DEF = "hanim_l_eyeball_joint";
HAnimJoint808.center = new SFVec3f(new float[0.0336,1.6332,0.0502]);
HAnimJoint808.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint808.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment809 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment809.name = "l_eyeball";
HAnimSegment809.DEF = "hanim_l_eyeball";
//<HAnimJoint name='l_eyeball_joint'/> visualization sphere is placed within <HAnimSegment name='l_eyeball'/>
let TouchSensor810 = browser.currentScene.createNode("TouchSensor");
TouchSensor810.description = "HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball";
HAnimSegment809.children = new MFNode();

HAnimSegment809.children[0] = TouchSensor810;

let Transform811 = browser.currentScene.createNode("Transform");
Transform811.translation = new SFVec3f(new float[0.0336,1.6332,0.0502]);
let Shape812 = browser.currentScene.createNode("Shape");
Shape812.USE = "HAnimJointShape";
Transform811.children = new MFNode();

Transform811.children[0] = Shape812;

HAnimSegment809.children[1] = Transform811;

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_eyeball_joint'/> to <HAnimSite name='l_eyeball_site_view'/>
let Shape813 = browser.currentScene.createNode("Shape");
let LineSet814 = browser.currentScene.createNode("LineSet");
LineSet814.vertexCount = new MFInt32(new int[2]);
let Coordinate815 = browser.currentScene.createNode("Coordinate");
Coordinate815.point = new MFVec3f(new float[0.0336,1.6332,0.0502,0.034,1.64,0.05]);
LineSet814.coord = Coordinate815;

let ColorRGBA816 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA816.DEF = "HAnimSiteViewpointLineColorRGBA";
ColorRGBA816.color = new MFColorRGBA(new float[0,0,1,1,0,0,1,0.1]);
LineSet814.color = ColorRGBA816;

Shape813.geometry = LineSet814;

HAnimSegment809.children[2] = Shape813;

let HAnimSite817 = browser.currentScene.createNode("HAnimSite");
HAnimSite817.name = "l_eyeball_site_view";
HAnimSite817.DEF = "hanim_l_eyeball_site_view";
HAnimSite817.translation = new SFVec3f(new float[0.034,1.64,0.05]);
//HAnimSite visualization shape
let TouchSensor818 = browser.currentScene.createNode("TouchSensor");
TouchSensor818.description = "HAnimSite l_eyeball_site_view";
HAnimSite817.children = new MFNode();

HAnimSite817.children[0] = TouchSensor818;

let Shape819 = browser.currentScene.createNode("Shape");
Shape819.USE = "HAnimSiteShape";
HAnimSite817.children[1] = Shape819;

let Viewpoint820 = browser.currentScene.createNode("Viewpoint");
Viewpoint820.DEF = "hanim_l_eyeball_site_viewpoint";
Viewpoint820.description = "l_eyeball_site_viewpoint looking forward";
Viewpoint820.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint820.position = new SFVec3f(new float[0,0,0]);
HAnimSite817.children[2] = Viewpoint820;

//HAnimSite/Viewpoint visualization shape
let Anchor821 = browser.currentScene.createNode("Anchor");
Anchor821.description = "HAnimSite hanim_l_eyeball_site_view Viewpoint";
Anchor821.url = new MFString(new java.lang.String["#hanim_l_eyeball_site_viewpoint"]);
let LOD822 = browser.currentScene.createNode("LOD");
LOD822.forceTransitions = True;
LOD822.range = new MFFloat(new float[0.04]);
let WorldInfo823 = browser.currentScene.createNode("WorldInfo");
WorldInfo823.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD822.children = new MFNode();

LOD822.children[0] = WorldInfo823;

let Shape824 = browser.currentScene.createNode("Shape");
Shape824.DEF = "HAnimSiteViewpointShape";
let IndexedFaceSet825 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet825.DEF = "SiteViewpointDiamondIFS";
IndexedFaceSet825.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet825.creaseAngle = 0.5;
let Coordinate826 = browser.currentScene.createNode("Coordinate");
Coordinate826.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet825.coord = Coordinate826;

Shape824.geometry = IndexedFaceSet825;

let Appearance827 = browser.currentScene.createNode("Appearance");
let Material828 = browser.currentScene.createNode("Material");
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

let HAnimJoint829 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint829.name = "l_eyelid_joint";
HAnimJoint829.DEF = "hanim_l_eyelid_joint";
HAnimJoint829.center = new SFVec3f(new float[0.0336,1.6332,0.0502]);
HAnimJoint829.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint829.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment830 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment830.name = "l_eyelid";
HAnimSegment830.DEF = "hanim_l_eyelid";
//<HAnimJoint name='l_eyelid_joint'/> visualization sphere is placed within <HAnimSegment name='l_eyelid'/>
let TouchSensor831 = browser.currentScene.createNode("TouchSensor");
TouchSensor831.description = "HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid";
HAnimSegment830.children = new MFNode();

HAnimSegment830.children[0] = TouchSensor831;

let Transform832 = browser.currentScene.createNode("Transform");
Transform832.translation = new SFVec3f(new float[0.0336,1.6332,0.0502]);
let Shape833 = browser.currentScene.createNode("Shape");
Shape833.USE = "HAnimJointShape";
Transform832.children = new MFNode();

Transform832.children[0] = Shape833;

HAnimSegment830.children[1] = Transform832;

HAnimJoint829.children = new MFNode();

HAnimJoint829.children[0] = HAnimSegment830;

HAnimJoint705.children[2] = HAnimJoint829;

let HAnimJoint834 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint834.name = "l_eyebrow_joint";
HAnimJoint834.DEF = "hanim_l_eyebrow_joint";
HAnimJoint834.center = new SFVec3f(new float[0.0336,1.635,0.0506]);
HAnimJoint834.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint834.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment835 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment835.name = "l_eyebrow";
HAnimSegment835.DEF = "hanim_l_eyebrow";
//<HAnimJoint name='l_eyebrow_joint'/> visualization sphere is placed within <HAnimSegment name='l_eyebrow'/>
let TouchSensor836 = browser.currentScene.createNode("TouchSensor");
TouchSensor836.description = "HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow";
HAnimSegment835.children = new MFNode();

HAnimSegment835.children[0] = TouchSensor836;

let Transform837 = browser.currentScene.createNode("Transform");
Transform837.translation = new SFVec3f(new float[0.0336,1.635,0.0506]);
let Shape838 = browser.currentScene.createNode("Shape");
Shape838.USE = "HAnimJointShape";
Transform837.children = new MFNode();

Transform837.children[0] = Shape838;

HAnimSegment835.children[1] = Transform837;

HAnimJoint834.children = new MFNode();

HAnimJoint834.children[0] = HAnimSegment835;

HAnimJoint705.children[3] = HAnimJoint834;

let HAnimJoint839 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint839.name = "r_eyeball_joint";
HAnimJoint839.DEF = "hanim_r_eyeball_joint";
HAnimJoint839.center = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
HAnimJoint839.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint839.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment840 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment840.name = "r_eyeball";
HAnimSegment840.DEF = "hanim_r_eyeball";
//<HAnimJoint name='r_eyeball_joint'/> visualization sphere is placed within <HAnimSegment name='r_eyeball'/>
let TouchSensor841 = browser.currentScene.createNode("TouchSensor");
TouchSensor841.description = "HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball";
HAnimSegment840.children = new MFNode();

HAnimSegment840.children[0] = TouchSensor841;

let Transform842 = browser.currentScene.createNode("Transform");
Transform842.translation = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
let Shape843 = browser.currentScene.createNode("Shape");
Shape843.USE = "HAnimJointShape";
Transform842.children = new MFNode();

Transform842.children[0] = Shape843;

HAnimSegment840.children[1] = Transform842;

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_eyeball_joint'/> to <HAnimSite name='r_eyeball_site_view'/>
let Shape844 = browser.currentScene.createNode("Shape");
let LineSet845 = browser.currentScene.createNode("LineSet");
LineSet845.vertexCount = new MFInt32(new int[2]);
let Coordinate846 = browser.currentScene.createNode("Coordinate");
Coordinate846.point = new MFVec3f(new float[-0.0336,1.6332,0.0502,-0.034,1.64,0.05]);
LineSet845.coord = Coordinate846;

let ColorRGBA847 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA847.USE = "HAnimSiteViewpointLineColorRGBA";
LineSet845.color = ColorRGBA847;

Shape844.geometry = LineSet845;

HAnimSegment840.children[2] = Shape844;

let HAnimSite848 = browser.currentScene.createNode("HAnimSite");
HAnimSite848.name = "r_eyeball_site_view";
HAnimSite848.DEF = "hanim_r_eyeball_site_view";
HAnimSite848.translation = new SFVec3f(new float[-0.034,1.64,0.05]);
//HAnimSite visualization shape
let TouchSensor849 = browser.currentScene.createNode("TouchSensor");
TouchSensor849.description = "HAnimSite r_eyeball_site_view";
HAnimSite848.children = new MFNode();

HAnimSite848.children[0] = TouchSensor849;

let Shape850 = browser.currentScene.createNode("Shape");
Shape850.USE = "HAnimSiteShape";
HAnimSite848.children[1] = Shape850;

let Viewpoint851 = browser.currentScene.createNode("Viewpoint");
Viewpoint851.DEF = "hanim_r_eyeball_site_viewpoint";
Viewpoint851.description = "r_eyeball_site_viewpoint looking forward";
Viewpoint851.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint851.position = new SFVec3f(new float[0,0,0]);
HAnimSite848.children[2] = Viewpoint851;

//HAnimSite/Viewpoint visualization shape
let Anchor852 = browser.currentScene.createNode("Anchor");
Anchor852.description = "HAnimSite hanim_r_eyeball_site_view Viewpoint";
Anchor852.url = new MFString(new java.lang.String["#hanim_r_eyeball_site_viewpoint"]);
let LOD853 = browser.currentScene.createNode("LOD");
LOD853.forceTransitions = True;
LOD853.range = new MFFloat(new float[0.04]);
let WorldInfo854 = browser.currentScene.createNode("WorldInfo");
WorldInfo854.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD853.children = new MFNode();

LOD853.children[0] = WorldInfo854;

let Shape855 = browser.currentScene.createNode("Shape");
Shape855.USE = "HAnimSiteViewpointShape";
LOD853.children[1] = Shape855;

Anchor852.children = new MFNode();

Anchor852.children[0] = LOD853;

HAnimSite848.children[3] = Anchor852;

HAnimSegment840.children[3] = HAnimSite848;

HAnimJoint839.children = new MFNode();

HAnimJoint839.children[0] = HAnimSegment840;

HAnimJoint705.children[4] = HAnimJoint839;

let HAnimJoint856 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint856.name = "r_eyelid_joint";
HAnimJoint856.DEF = "hanim_r_eyelid_joint";
HAnimJoint856.center = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
HAnimJoint856.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint856.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment857 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment857.name = "r_eyelid";
HAnimSegment857.DEF = "hanim_r_eyelid";
//<HAnimJoint name='r_eyelid_joint'/> visualization sphere is placed within <HAnimSegment name='r_eyelid'/>
let TouchSensor858 = browser.currentScene.createNode("TouchSensor");
TouchSensor858.description = "HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid";
HAnimSegment857.children = new MFNode();

HAnimSegment857.children[0] = TouchSensor858;

let Transform859 = browser.currentScene.createNode("Transform");
Transform859.translation = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
let Shape860 = browser.currentScene.createNode("Shape");
Shape860.USE = "HAnimJointShape";
Transform859.children = new MFNode();

Transform859.children[0] = Shape860;

HAnimSegment857.children[1] = Transform859;

HAnimJoint856.children = new MFNode();

HAnimJoint856.children[0] = HAnimSegment857;

HAnimJoint705.children[5] = HAnimJoint856;

let HAnimJoint861 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint861.name = "r_eyebrow_joint";
HAnimJoint861.DEF = "hanim_r_eyebrow_joint";
HAnimJoint861.center = new SFVec3f(new float[-0.0336,1.635,0.0506]);
HAnimJoint861.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint861.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment862 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment862.name = "r_eyebrow";
HAnimSegment862.DEF = "hanim_r_eyebrow";
//<HAnimJoint name='r_eyebrow_joint'/> visualization sphere is placed within <HAnimSegment name='r_eyebrow'/>
let TouchSensor863 = browser.currentScene.createNode("TouchSensor");
TouchSensor863.description = "HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow";
HAnimSegment862.children = new MFNode();

HAnimSegment862.children[0] = TouchSensor863;

let Transform864 = browser.currentScene.createNode("Transform");
Transform864.translation = new SFVec3f(new float[-0.0336,1.635,0.0506]);
let Shape865 = browser.currentScene.createNode("Shape");
Shape865.USE = "HAnimJointShape";
Transform864.children = new MFNode();

Transform864.children[0] = Shape865;

HAnimSegment862.children[1] = Transform864;

HAnimJoint861.children = new MFNode();

HAnimJoint861.children[0] = HAnimSegment862;

HAnimJoint705.children[6] = HAnimJoint861;

let HAnimJoint866 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint866.name = "temporomandibular";
HAnimJoint866.DEF = "hanim_temporomandibular";
HAnimJoint866.center = new SFVec3f(new float[0,1.63,0.015]);
HAnimJoint866.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint866.llimit = new MFFloat(new float[0,0,0]);
//Single joint, single segment for jaw, two sites for left/right TMJs https://en.wikipedia.org/wiki/Temporomandibular_joint
let HAnimSegment867 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment867.name = "jaw";
HAnimSegment867.DEF = "hanim_jaw";
//<HAnimJoint name='temporomandibular'/> visualization sphere is placed within <HAnimSegment name='jaw'/>
let TouchSensor868 = browser.currentScene.createNode("TouchSensor");
TouchSensor868.description = "HAnimJoint temporomandibular, HAnimSegment jaw";
HAnimSegment867.children = new MFNode();

HAnimSegment867.children[0] = TouchSensor868;

let Transform869 = browser.currentScene.createNode("Transform");
Transform869.translation = new SFVec3f(new float[0,1.63,0.015]);
let Shape870 = browser.currentScene.createNode("Shape");
Shape870.USE = "HAnimJointShape";
Transform869.children = new MFNode();

Transform869.children[0] = Shape870;

HAnimSegment867.children[1] = Transform869;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_l_site'/>
let Shape871 = browser.currentScene.createNode("Shape");
let LineSet872 = browser.currentScene.createNode("LineSet");
LineSet872.vertexCount = new MFInt32(new int[2]);
let Coordinate873 = browser.currentScene.createNode("Coordinate");
Coordinate873.point = new MFVec3f(new float[0,1.63,0.015,0.045,1.63,0]);
LineSet872.coord = Coordinate873;

let ColorRGBA874 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA874.USE = "HAnimSiteLineColorRGBA";
LineSet872.color = ColorRGBA874;

Shape871.geometry = LineSet872;

HAnimSegment867.children[2] = Shape871;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_r_site'/>
let Shape875 = browser.currentScene.createNode("Shape");
let LineSet876 = browser.currentScene.createNode("LineSet");
LineSet876.vertexCount = new MFInt32(new int[2]);
let Coordinate877 = browser.currentScene.createNode("Coordinate");
Coordinate877.point = new MFVec3f(new float[0,1.63,0.015,-0.045,1.63,0]);
LineSet876.coord = Coordinate877;

let ColorRGBA878 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA878.USE = "HAnimSiteLineColorRGBA";
LineSet876.color = ColorRGBA878;

Shape875.geometry = LineSet876;

HAnimSegment867.children[3] = Shape875;

let HAnimSite879 = browser.currentScene.createNode("HAnimSite");
HAnimSite879.name = "temporomandibular_l_site_pt";
HAnimSite879.DEF = "hanim_temporomandibular_l_site_pt";
HAnimSite879.translation = new SFVec3f(new float[0.045,1.63,0]);
//HAnimSite visualization shape
let TouchSensor880 = browser.currentScene.createNode("TouchSensor");
TouchSensor880.description = "HAnimSite temporomandibular_l_site";
HAnimSite879.children = new MFNode();

HAnimSite879.children[0] = TouchSensor880;

let Shape881 = browser.currentScene.createNode("Shape");
Shape881.USE = "HAnimSiteShape";
HAnimSite879.children[1] = Shape881;

HAnimSegment867.children[4] = HAnimSite879;

let HAnimSite882 = browser.currentScene.createNode("HAnimSite");
HAnimSite882.name = "temporomandibular_r_site_pt";
HAnimSite882.DEF = "hanim_temporomandibular_r_site_pt";
HAnimSite882.translation = new SFVec3f(new float[-0.045,1.63,0]);
//HAnimSite visualization shape
let TouchSensor883 = browser.currentScene.createNode("TouchSensor");
TouchSensor883.description = "HAnimSite temporomandibular_r_site";
HAnimSite882.children = new MFNode();

HAnimSite882.children[0] = TouchSensor883;

let Shape884 = browser.currentScene.createNode("Shape");
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

let HAnimJoint885 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint885.name = "l_sternoclavicular";
HAnimJoint885.DEF = "hanim_l_sternoclavicular";
HAnimJoint885.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimJoint885.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint885.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment886 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment886.name = "l_clavicle";
HAnimSegment886.DEF = "hanim_l_clavicle";
//<HAnimJoint name='l_sternoclavicular'/> visualization sphere is placed within <HAnimSegment name='l_clavicle'/>
let TouchSensor887 = browser.currentScene.createNode("TouchSensor");
TouchSensor887.description = "HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle";
HAnimSegment886.children = new MFNode();

HAnimSegment886.children[0] = TouchSensor887;

let Transform888 = browser.currentScene.createNode("Transform");
Transform888.translation = new SFVec3f(new float[0.082,1.4488,-0.0353]);
let Shape889 = browser.currentScene.createNode("Shape");
Shape889.USE = "HAnimJointShape";
Transform888.children = new MFNode();

Transform888.children[0] = Shape889;

HAnimSegment886.children[1] = Transform888;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_sternoclavicular'/> to <HAnimJoint name='l_acromioclavicular'/>
let Shape890 = browser.currentScene.createNode("Shape");
let LineSet891 = browser.currentScene.createNode("LineSet");
LineSet891.vertexCount = new MFInt32(new int[2]);
let Coordinate892 = browser.currentScene.createNode("Coordinate");
Coordinate892.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
LineSet891.coord = Coordinate892;

let ColorRGBA893 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA893.USE = "HAnimSegmentLineColorRGBA";
LineSet891.color = ColorRGBA893;

Shape890.geometry = LineSet891;

HAnimSegment886.children[2] = Shape890;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_clavicale'/>
let Shape894 = browser.currentScene.createNode("Shape");
let LineSet895 = browser.currentScene.createNode("LineSet");
LineSet895.vertexCount = new MFInt32(new int[2]);
let Coordinate896 = browser.currentScene.createNode("Coordinate");
Coordinate896.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0271,1.4943,0.0394]);
LineSet895.coord = Coordinate896;

let ColorRGBA897 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA897.USE = "HAnimSiteLineColorRGBA";
LineSet895.color = ColorRGBA897;

Shape894.geometry = LineSet895;

HAnimSegment886.children[3] = Shape894;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_acromion'/>
let Shape898 = browser.currentScene.createNode("Shape");
let LineSet899 = browser.currentScene.createNode("LineSet");
LineSet899.vertexCount = new MFInt32(new int[2]);
let Coordinate900 = browser.currentScene.createNode("Coordinate");
Coordinate900.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.2032,1.476,-0.049]);
LineSet899.coord = Coordinate900;

let ColorRGBA901 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA901.USE = "HAnimSiteLineColorRGBA";
LineSet899.color = ColorRGBA901;

Shape898.geometry = LineSet899;

HAnimSegment886.children[4] = Shape898;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_ant'/>
let Shape902 = browser.currentScene.createNode("Shape");
let LineSet903 = browser.currentScene.createNode("LineSet");
LineSet903.vertexCount = new MFInt32(new int[2]);
let Coordinate904 = browser.currentScene.createNode("Coordinate");
Coordinate904.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.1777,1.4065,-0.0075]);
LineSet903.coord = Coordinate904;

let ColorRGBA905 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA905.USE = "HAnimSiteLineColorRGBA";
LineSet903.color = ColorRGBA905;

Shape902.geometry = LineSet903;

HAnimSegment886.children[5] = Shape902;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_post'/>
let Shape906 = browser.currentScene.createNode("Shape");
let LineSet907 = browser.currentScene.createNode("LineSet");
LineSet907.vertexCount = new MFInt32(new int[2]);
let Coordinate908 = browser.currentScene.createNode("Coordinate");
Coordinate908.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.1706,1.4072,-0.0875]);
LineSet907.coord = Coordinate908;

let ColorRGBA909 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA909.USE = "HAnimSiteLineColorRGBA";
LineSet907.color = ColorRGBA909;

Shape906.geometry = LineSet907;

HAnimSegment886.children[6] = Shape906;

let HAnimSite910 = browser.currentScene.createNode("HAnimSite");
HAnimSite910.name = "l_clavicale_pt";
HAnimSite910.DEF = "hanim_l_clavicale_pt";
HAnimSite910.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
//HAnimSite visualization shape
let TouchSensor911 = browser.currentScene.createNode("TouchSensor");
TouchSensor911.description = "HAnimSite l_clavicale";
HAnimSite910.children = new MFNode();

HAnimSite910.children[0] = TouchSensor911;

let Shape912 = browser.currentScene.createNode("Shape");
Shape912.USE = "HAnimSiteShape";
HAnimSite910.children[1] = Shape912;

HAnimSegment886.children[7] = HAnimSite910;

let HAnimSite913 = browser.currentScene.createNode("HAnimSite");
HAnimSite913.name = "l_acromion_pt";
HAnimSite913.DEF = "hanim_l_acromion_pt";
HAnimSite913.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
//HAnimSite visualization shape
let TouchSensor914 = browser.currentScene.createNode("TouchSensor");
TouchSensor914.description = "HAnimSite l_acromion";
HAnimSite913.children = new MFNode();

HAnimSite913.children[0] = TouchSensor914;

let Shape915 = browser.currentScene.createNode("Shape");
Shape915.USE = "HAnimSiteShape";
HAnimSite913.children[1] = Shape915;

HAnimSegment886.children[8] = HAnimSite913;

let HAnimSite916 = browser.currentScene.createNode("HAnimSite");
HAnimSite916.name = "l_axilla_ant_pt";
HAnimSite916.DEF = "hanim_l_axilla_ant_pt";
HAnimSite916.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
//HAnimSite visualization shape
let TouchSensor917 = browser.currentScene.createNode("TouchSensor");
TouchSensor917.description = "HAnimSite l_axilla_ant";
HAnimSite916.children = new MFNode();

HAnimSite916.children[0] = TouchSensor917;

let Shape918 = browser.currentScene.createNode("Shape");
Shape918.USE = "HAnimSiteShape";
HAnimSite916.children[1] = Shape918;

HAnimSegment886.children[9] = HAnimSite916;

let HAnimSite919 = browser.currentScene.createNode("HAnimSite");
HAnimSite919.name = "l_axilla_post_pt";
HAnimSite919.DEF = "hanim_l_axilla_post_pt";
HAnimSite919.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
//HAnimSite visualization shape
let TouchSensor920 = browser.currentScene.createNode("TouchSensor");
TouchSensor920.description = "HAnimSite l_axilla_post";
HAnimSite919.children = new MFNode();

HAnimSite919.children[0] = TouchSensor920;

let Shape921 = browser.currentScene.createNode("Shape");
Shape921.USE = "HAnimSiteShape";
HAnimSite919.children[1] = Shape921;

HAnimSegment886.children[10] = HAnimSite919;

HAnimJoint885.children = new MFNode();

HAnimJoint885.children[0] = HAnimSegment886;

let HAnimJoint922 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint922.name = "l_acromioclavicular";
HAnimJoint922.DEF = "hanim_l_acromioclavicular";
HAnimJoint922.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimJoint922.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint922.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment923 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment923.name = "l_scapula";
HAnimSegment923.DEF = "hanim_l_scapula";
//<HAnimJoint name='l_acromioclavicular'/> visualization sphere is placed within <HAnimSegment name='l_scapula'/>
let TouchSensor924 = browser.currentScene.createNode("TouchSensor");
TouchSensor924.description = "HAnimJoint l_acromioclavicular, HAnimSegment l_scapula";
HAnimSegment923.children = new MFNode();

HAnimSegment923.children[0] = TouchSensor924;

let Transform925 = browser.currentScene.createNode("Transform");
Transform925.translation = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
let Shape926 = browser.currentScene.createNode("Shape");
Shape926.USE = "HAnimJointShape";
Transform925.children = new MFNode();

Transform925.children[0] = Shape926;

HAnimSegment923.children[1] = Transform925;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_acromioclavicular'/> to <HAnimJoint name='l_shoulder'/>
let Shape927 = browser.currentScene.createNode("Shape");
let LineSet928 = browser.currentScene.createNode("LineSet");
LineSet928.vertexCount = new MFInt32(new int[2]);
let Coordinate929 = browser.currentScene.createNode("Coordinate");
Coordinate929.point = new MFVec3f(new float[0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
LineSet928.coord = Coordinate929;

let ColorRGBA930 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA930.USE = "HAnimSegmentLineColorRGBA";
LineSet928.color = ColorRGBA930;

Shape927.geometry = LineSet928;

HAnimSegment923.children[2] = Shape927;

HAnimJoint922.children = new MFNode();

HAnimJoint922.children[0] = HAnimSegment923;

let HAnimJoint931 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint931.name = "l_shoulder";
HAnimJoint931.DEF = "hanim_l_shoulder";
HAnimJoint931.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimJoint931.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint931.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment932 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment932.name = "l_upperarm";
HAnimSegment932.DEF = "hanim_l_upperarm";
//<HAnimJoint name='l_shoulder'/> visualization sphere is placed within <HAnimSegment name='l_upperarm'/>
let TouchSensor933 = browser.currentScene.createNode("TouchSensor");
TouchSensor933.description = "HAnimJoint l_shoulder, HAnimSegment l_upperarm";
HAnimSegment932.children = new MFNode();

HAnimSegment932.children[0] = TouchSensor933;

let Transform934 = browser.currentScene.createNode("Transform");
Transform934.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
let Shape935 = browser.currentScene.createNode("Shape");
Shape935.USE = "HAnimJointShape";
Transform934.children = new MFNode();

Transform934.children[0] = Shape935;

HAnimSegment932.children[1] = Transform934;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_shoulder'/> to <HAnimJoint name='l_elbow'/>
let Shape936 = browser.currentScene.createNode("Shape");
let LineSet937 = browser.currentScene.createNode("LineSet");
LineSet937.vertexCount = new MFInt32(new int[2]);
let Coordinate938 = browser.currentScene.createNode("Coordinate");
Coordinate938.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
LineSet937.coord = Coordinate938;

let ColorRGBA939 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA939.USE = "HAnimSegmentLineColorRGBA";
LineSet937.color = ColorRGBA939;

Shape936.geometry = LineSet937;

HAnimSegment932.children[2] = Shape936;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_shoulder'/> to <HAnimSite name='l_humeral_lateral_epicn'/>
let Shape940 = browser.currentScene.createNode("Shape");
let LineSet941 = browser.currentScene.createNode("LineSet");
LineSet941.vertexCount = new MFInt32(new int[2]);
let Coordinate942 = browser.currentScene.createNode("Coordinate");
Coordinate942.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.228,1.1482,-0.11]);
LineSet941.coord = Coordinate942;

let ColorRGBA943 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA943.USE = "HAnimSiteLineColorRGBA";
LineSet941.color = ColorRGBA943;

Shape940.geometry = LineSet941;

HAnimSegment932.children[3] = Shape940;

let HAnimSite944 = browser.currentScene.createNode("HAnimSite");
HAnimSite944.name = "l_humeral_lateral_epicn_pt";
HAnimSite944.DEF = "hanim_l_humeral_lateral_epicn_pt";
HAnimSite944.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
//HAnimSite visualization shape
let TouchSensor945 = browser.currentScene.createNode("TouchSensor");
TouchSensor945.description = "HAnimSite l_humeral_lateral_epicn";
HAnimSite944.children = new MFNode();

HAnimSite944.children[0] = TouchSensor945;

let Shape946 = browser.currentScene.createNode("Shape");
Shape946.USE = "HAnimSiteShape";
HAnimSite944.children[1] = Shape946;

HAnimSegment932.children[4] = HAnimSite944;

HAnimJoint931.children = new MFNode();

HAnimJoint931.children[0] = HAnimSegment932;

let HAnimJoint947 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint947.name = "l_elbow";
HAnimJoint947.DEF = "hanim_l_elbow";
HAnimJoint947.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimJoint947.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint947.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment948 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment948.name = "l_forearm";
HAnimSegment948.DEF = "hanim_l_forearm";
//<HAnimJoint name='l_elbow'/> visualization sphere is placed within <HAnimSegment name='l_forearm'/>
let TouchSensor949 = browser.currentScene.createNode("TouchSensor");
TouchSensor949.description = "HAnimJoint l_elbow, HAnimSegment l_forearm";
HAnimSegment948.children = new MFNode();

HAnimSegment948.children[0] = TouchSensor949;

let Transform950 = browser.currentScene.createNode("Transform");
Transform950.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
let Shape951 = browser.currentScene.createNode("Shape");
Shape951.USE = "HAnimJointShape";
Transform950.children = new MFNode();

Transform950.children[0] = Shape951;

HAnimSegment948.children[1] = Transform950;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_elbow'/> to <HAnimJoint name='l_wrist'/>
let Shape952 = browser.currentScene.createNode("Shape");
let LineSet953 = browser.currentScene.createNode("LineSet");
LineSet953.vertexCount = new MFInt32(new int[2]);
let Coordinate954 = browser.currentScene.createNode("Coordinate");
Coordinate954.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
LineSet953.coord = Coordinate954;

let ColorRGBA955 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA955.USE = "HAnimSegmentLineColorRGBA";
LineSet953.color = ColorRGBA955;

Shape952.geometry = LineSet953;

HAnimSegment948.children[2] = Shape952;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radial_styloid'/>
let Shape956 = browser.currentScene.createNode("Shape");
let LineSet957 = browser.currentScene.createNode("LineSet");
LineSet957.vertexCount = new MFInt32(new int[2]);
let Coordinate958 = browser.currentScene.createNode("Coordinate");
Coordinate958.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1901,0.8645,-0.0415]);
LineSet957.coord = Coordinate958;

let ColorRGBA959 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA959.USE = "HAnimSiteLineColorRGBA";
LineSet957.color = ColorRGBA959;

Shape956.geometry = LineSet957;

HAnimSegment948.children[3] = Shape956;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_olecranon'/>
let Shape960 = browser.currentScene.createNode("Shape");
let LineSet961 = browser.currentScene.createNode("LineSet");
LineSet961.vertexCount = new MFInt32(new int[2]);
let Coordinate962 = browser.currentScene.createNode("Coordinate");
Coordinate962.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1962,1.1375,-0.1123]);
LineSet961.coord = Coordinate962;

let ColorRGBA963 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA963.USE = "HAnimSiteLineColorRGBA";
LineSet961.color = ColorRGBA963;

Shape960.geometry = LineSet961;

HAnimSegment948.children[4] = Shape960;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_humeral_medial_epicn'/>
let Shape964 = browser.currentScene.createNode("Shape");
let LineSet965 = browser.currentScene.createNode("LineSet");
LineSet965.vertexCount = new MFInt32(new int[2]);
let Coordinate966 = browser.currentScene.createNode("Coordinate");
Coordinate966.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1735,1.1272,-0.1113]);
LineSet965.coord = Coordinate966;

let ColorRGBA967 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA967.USE = "HAnimSiteLineColorRGBA";
LineSet965.color = ColorRGBA967;

Shape964.geometry = LineSet965;

HAnimSegment948.children[5] = Shape964;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radiale'/>
let Shape968 = browser.currentScene.createNode("Shape");
let LineSet969 = browser.currentScene.createNode("LineSet");
LineSet969.vertexCount = new MFInt32(new int[2]);
let Coordinate970 = browser.currentScene.createNode("Coordinate");
Coordinate970.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.2182,1.1212,-0.1167]);
LineSet969.coord = Coordinate970;

let ColorRGBA971 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA971.USE = "HAnimSiteLineColorRGBA";
LineSet969.color = ColorRGBA971;

Shape968.geometry = LineSet969;

HAnimSegment948.children[6] = Shape968;

let HAnimSite972 = browser.currentScene.createNode("HAnimSite");
HAnimSite972.name = "l_radial_styloid_pt";
HAnimSite972.DEF = "hanim_l_radial_styloid_pt";
HAnimSite972.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
//HAnimSite visualization shape
let TouchSensor973 = browser.currentScene.createNode("TouchSensor");
TouchSensor973.description = "HAnimSite l_radial_styloid";
HAnimSite972.children = new MFNode();

HAnimSite972.children[0] = TouchSensor973;

let Shape974 = browser.currentScene.createNode("Shape");
Shape974.USE = "HAnimSiteShape";
HAnimSite972.children[1] = Shape974;

HAnimSegment948.children[7] = HAnimSite972;

let HAnimSite975 = browser.currentScene.createNode("HAnimSite");
HAnimSite975.name = "l_olecranon_pt";
HAnimSite975.DEF = "hanim_l_olecranon_pt";
HAnimSite975.translation = new SFVec3f(new float[0.1962,1.1375,-0.1123]);
//HAnimSite visualization shape
let TouchSensor976 = browser.currentScene.createNode("TouchSensor");
TouchSensor976.description = "HAnimSite l_olecranon";
HAnimSite975.children = new MFNode();

HAnimSite975.children[0] = TouchSensor976;

let Shape977 = browser.currentScene.createNode("Shape");
Shape977.USE = "HAnimSiteShape";
HAnimSite975.children[1] = Shape977;

HAnimSegment948.children[8] = HAnimSite975;

let HAnimSite978 = browser.currentScene.createNode("HAnimSite");
HAnimSite978.name = "l_humeral_medial_epicn_pt";
HAnimSite978.DEF = "hanim_l_humeral_medial_epicn_pt";
HAnimSite978.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
//HAnimSite visualization shape
let TouchSensor979 = browser.currentScene.createNode("TouchSensor");
TouchSensor979.description = "HAnimSite l_humeral_medial_epicn";
HAnimSite978.children = new MFNode();

HAnimSite978.children[0] = TouchSensor979;

let Shape980 = browser.currentScene.createNode("Shape");
Shape980.USE = "HAnimSiteShape";
HAnimSite978.children[1] = Shape980;

HAnimSegment948.children[9] = HAnimSite978;

let HAnimSite981 = browser.currentScene.createNode("HAnimSite");
HAnimSite981.name = "l_radiale_pt";
HAnimSite981.DEF = "hanim_l_radiale_pt";
HAnimSite981.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
//HAnimSite visualization shape
let TouchSensor982 = browser.currentScene.createNode("TouchSensor");
TouchSensor982.description = "HAnimSite l_radiale";
HAnimSite981.children = new MFNode();

HAnimSite981.children[0] = TouchSensor982;

let Shape983 = browser.currentScene.createNode("Shape");
Shape983.USE = "HAnimSiteShape";
HAnimSite981.children[1] = Shape983;

HAnimSegment948.children[10] = HAnimSite981;

HAnimJoint947.children = new MFNode();

HAnimJoint947.children[0] = HAnimSegment948;

let HAnimJoint984 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint984.name = "l_wrist";
HAnimJoint984.DEF = "hanim_l_wrist";
HAnimJoint984.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimJoint984.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint984.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment985 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment985.name = "l_hand";
HAnimSegment985.DEF = "hanim_l_hand";
//<HAnimJoint name='l_wrist'/> visualization sphere is placed within <HAnimSegment name='l_hand'/>
let TouchSensor986 = browser.currentScene.createNode("TouchSensor");
TouchSensor986.description = "HAnimJoint l_wrist, HAnimSegment l_hand";
HAnimSegment985.children = new MFNode();

HAnimSegment985.children[0] = TouchSensor986;

let Transform987 = browser.currentScene.createNode("Transform");
Transform987.translation = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
let Shape988 = browser.currentScene.createNode("Shape");
Shape988.USE = "HAnimJointShape";
Transform987.children = new MFNode();

Transform987.children[0] = Shape988;

HAnimSegment985.children[1] = Transform987;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_thumb1'/>
let Shape989 = browser.currentScene.createNode("Shape");
let LineSet990 = browser.currentScene.createNode("LineSet");
LineSet990.vertexCount = new MFInt32(new int[2]);
let Coordinate991 = browser.currentScene.createNode("Coordinate");
Coordinate991.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534]);
LineSet990.coord = Coordinate991;

let ColorRGBA992 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA992.USE = "HAnimSegmentLineColorRGBA";
LineSet990.color = ColorRGBA992;

Shape989.geometry = LineSet990;

HAnimSegment985.children[2] = Shape989;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_index0'/>
let Shape993 = browser.currentScene.createNode("Shape");
let LineSet994 = browser.currentScene.createNode("LineSet");
LineSet994.vertexCount = new MFInt32(new int[2]);
let Coordinate995 = browser.currentScene.createNode("Coordinate");
Coordinate995.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028]);
LineSet994.coord = Coordinate995;

let ColorRGBA996 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA996.USE = "HAnimSegmentLineColorRGBA";
LineSet994.color = ColorRGBA996;

Shape993.geometry = LineSet994;

HAnimSegment985.children[3] = Shape993;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_middle0'/>
let Shape997 = browser.currentScene.createNode("Shape");
let LineSet998 = browser.currentScene.createNode("LineSet");
LineSet998.vertexCount = new MFInt32(new int[2]);
let Coordinate999 = browser.currentScene.createNode("Coordinate");
Coordinate999.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053]);
LineSet998.coord = Coordinate999;

let ColorRGBA1000 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1000.USE = "HAnimSegmentLineColorRGBA";
LineSet998.color = ColorRGBA1000;

Shape997.geometry = LineSet998;

HAnimSegment985.children[4] = Shape997;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_ring0'/>
let Shape1001 = browser.currentScene.createNode("Shape");
let LineSet1002 = browser.currentScene.createNode("LineSet");
LineSet1002.vertexCount = new MFInt32(new int[2]);
let Coordinate1003 = browser.currentScene.createNode("Coordinate");
Coordinate1003.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794]);
LineSet1002.coord = Coordinate1003;

let ColorRGBA1004 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1004.USE = "HAnimSegmentLineColorRGBA";
LineSet1002.color = ColorRGBA1004;

Shape1001.geometry = LineSet1002;

HAnimSegment985.children[5] = Shape1001;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_pinky0'/>
let Shape1005 = browser.currentScene.createNode("Shape");
let LineSet1006 = browser.currentScene.createNode("LineSet");
LineSet1006.vertexCount = new MFInt32(new int[2]);
let Coordinate1007 = browser.currentScene.createNode("Coordinate");
Coordinate1007.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036]);
LineSet1006.coord = Coordinate1007;

let ColorRGBA1008 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1008.USE = "HAnimSegmentLineColorRGBA";
LineSet1006.color = ColorRGBA1008;

Shape1005.geometry = LineSet1006;

HAnimSegment985.children[6] = Shape1005;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_metacarpal_pha2'/>
let Shape1009 = browser.currentScene.createNode("Shape");
let LineSet1010 = browser.currentScene.createNode("LineSet");
LineSet1010.vertexCount = new MFInt32(new int[2]);
let Coordinate1011 = browser.currentScene.createNode("Coordinate");
Coordinate1011.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.2009,0.8139,-0.0237]);
LineSet1010.coord = Coordinate1011;

let ColorRGBA1012 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1012.USE = "HAnimSiteLineColorRGBA";
LineSet1010.color = ColorRGBA1012;

Shape1009.geometry = LineSet1010;

HAnimSegment985.children[7] = Shape1009;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_ulnar_styloid'/>
let Shape1013 = browser.currentScene.createNode("Shape");
let LineSet1014 = browser.currentScene.createNode("LineSet");
LineSet1014.vertexCount = new MFInt32(new int[2]);
let Coordinate1015 = browser.currentScene.createNode("Coordinate");
Coordinate1015.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.2142,0.8529,-0.0648]);
LineSet1014.coord = Coordinate1015;

let ColorRGBA1016 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1016.USE = "HAnimSiteLineColorRGBA";
LineSet1014.color = ColorRGBA1016;

Shape1013.geometry = LineSet1014;

HAnimSegment985.children[8] = Shape1013;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_metacarpal_pha5'/>
let Shape1017 = browser.currentScene.createNode("Shape");
let LineSet1018 = browser.currentScene.createNode("LineSet");
LineSet1018.vertexCount = new MFInt32(new int[2]);
let Coordinate1019 = browser.currentScene.createNode("Coordinate");
Coordinate1019.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1929,0.786,-0.1122]);
LineSet1018.coord = Coordinate1019;

let ColorRGBA1020 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1020.USE = "HAnimSiteLineColorRGBA";
LineSet1018.color = ColorRGBA1020;

Shape1017.geometry = LineSet1018;

HAnimSegment985.children[9] = Shape1017;

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_hand_front_view'/>
let Shape1021 = browser.currentScene.createNode("Shape");
let LineSet1022 = browser.currentScene.createNode("LineSet");
LineSet1022.vertexCount = new MFInt32(new int[2]);
let Coordinate1023 = browser.currentScene.createNode("Coordinate");
Coordinate1023.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.3,0.75,0.45]);
LineSet1022.coord = Coordinate1023;

let ColorRGBA1024 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1024.USE = "HAnimSiteViewpointLineColorRGBA";
LineSet1022.color = ColorRGBA1024;

Shape1021.geometry = LineSet1022;

HAnimSegment985.children[10] = Shape1021;

let HAnimSite1025 = browser.currentScene.createNode("HAnimSite");
HAnimSite1025.name = "l_metacarpal_pha2_pt";
HAnimSite1025.DEF = "hanim_l_metacarpal_pha2_pt";
HAnimSite1025.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
//HAnimSite visualization shape
let TouchSensor1026 = browser.currentScene.createNode("TouchSensor");
TouchSensor1026.description = "HAnimSite l_metacarpal_pha2";
HAnimSite1025.children = new MFNode();

HAnimSite1025.children[0] = TouchSensor1026;

let Shape1027 = browser.currentScene.createNode("Shape");
Shape1027.USE = "HAnimSiteShape";
HAnimSite1025.children[1] = Shape1027;

HAnimSegment985.children[11] = HAnimSite1025;

let HAnimSite1028 = browser.currentScene.createNode("HAnimSite");
HAnimSite1028.name = "l_ulnar_styloid_pt";
HAnimSite1028.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite1028.translation = new SFVec3f(new float[0.2142,0.8529,-0.0648]);
//HAnimSite visualization shape
let TouchSensor1029 = browser.currentScene.createNode("TouchSensor");
TouchSensor1029.description = "HAnimSite l_ulnar_styloid";
HAnimSite1028.children = new MFNode();

HAnimSite1028.children[0] = TouchSensor1029;

let Shape1030 = browser.currentScene.createNode("Shape");
Shape1030.USE = "HAnimSiteShape";
HAnimSite1028.children[1] = Shape1030;

HAnimSegment985.children[12] = HAnimSite1028;

let HAnimSite1031 = browser.currentScene.createNode("HAnimSite");
HAnimSite1031.name = "l_metacarpal_pha5_pt";
HAnimSite1031.DEF = "hanim_l_metacarpal_pha5_pt";
HAnimSite1031.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
//HAnimSite visualization shape
let TouchSensor1032 = browser.currentScene.createNode("TouchSensor");
TouchSensor1032.description = "HAnimSite l_metacarpal_pha5";
HAnimSite1031.children = new MFNode();

HAnimSite1031.children[0] = TouchSensor1032;

let Shape1033 = browser.currentScene.createNode("Shape");
Shape1033.USE = "HAnimSiteShape";
HAnimSite1031.children[1] = Shape1033;

HAnimSegment985.children[13] = HAnimSite1031;

let HAnimSite1034 = browser.currentScene.createNode("HAnimSite");
HAnimSite1034.name = "l_hand_front_view";
HAnimSite1034.DEF = "hanim_l_hand_front_view";
HAnimSite1034.translation = new SFVec3f(new float[0.3,0.75,0.45]);
//HAnimSite visualization shape
let TouchSensor1035 = browser.currentScene.createNode("TouchSensor");
TouchSensor1035.description = "HAnimSite l_hand_front_view";
HAnimSite1034.children = new MFNode();

HAnimSite1034.children[0] = TouchSensor1035;

let Shape1036 = browser.currentScene.createNode("Shape");
Shape1036.USE = "HAnimSiteShape";
HAnimSite1034.children[1] = Shape1036;

let Viewpoint1037 = browser.currentScene.createNode("Viewpoint");
Viewpoint1037.DEF = "hanim_l_hand_front_viewpoint";
Viewpoint1037.centerOfRotation = new SFVec3f(new float[0,0.7,0]);
Viewpoint1037.description = "left hand front";
Viewpoint1037.position = new SFVec3f(new float[0,0,0]);
HAnimSite1034.children[2] = Viewpoint1037;

//HAnimSite/Viewpoint visualization shape
let Anchor1038 = browser.currentScene.createNode("Anchor");
Anchor1038.description = "HAnimSite hanim_l_hand_front_view Viewpoint";
Anchor1038.url = new MFString(new java.lang.String["#hanim_l_hand_front_viewpoint"]);
let LOD1039 = browser.currentScene.createNode("LOD");
LOD1039.forceTransitions = True;
LOD1039.range = new MFFloat(new float[0.04]);
let WorldInfo1040 = browser.currentScene.createNode("WorldInfo");
WorldInfo1040.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1039.children = new MFNode();

LOD1039.children[0] = WorldInfo1040;

let Shape1041 = browser.currentScene.createNode("Shape");
Shape1041.USE = "HAnimSiteViewpointShape";
LOD1039.children[1] = Shape1041;

Anchor1038.children = new MFNode();

Anchor1038.children[0] = LOD1039;

HAnimSite1034.children[3] = Anchor1038;

HAnimSegment985.children[14] = HAnimSite1034;

HAnimJoint984.children = new MFNode();

HAnimJoint984.children[0] = HAnimSegment985;

let HAnimJoint1042 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1042.name = "l_thumb1";
HAnimJoint1042.DEF = "hanim_l_thumb1";
HAnimJoint1042.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimJoint1042.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1042.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1043 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1043.name = "l_thumb_metacarpal";
HAnimSegment1043.DEF = "hanim_l_thumb_metacarpal";
//<HAnimJoint name='l_thumb1'/> visualization sphere is placed within <HAnimSegment name='l_thumb_metacarpal'/>
let TouchSensor1044 = browser.currentScene.createNode("TouchSensor");
TouchSensor1044.description = "HAnimJoint l_thumb1, HAnimSegment l_thumb_metacarpal";
HAnimSegment1043.children = new MFNode();

HAnimSegment1043.children[0] = TouchSensor1044;

let Transform1045 = browser.currentScene.createNode("Transform");
Transform1045.translation = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
let Shape1046 = browser.currentScene.createNode("Shape");
Shape1046.USE = "HAnimJointShape";
Transform1045.children = new MFNode();

Transform1045.children[0] = Shape1046;

HAnimSegment1043.children[1] = Transform1045;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_thumb1'/> to <HAnimJoint name='l_thumb2'/>
let Shape1047 = browser.currentScene.createNode("Shape");
let LineSet1048 = browser.currentScene.createNode("LineSet");
LineSet1048.vertexCount = new MFInt32(new int[2]);
let Coordinate1049 = browser.currentScene.createNode("Coordinate");
Coordinate1049.point = new MFVec3f(new float[0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
LineSet1048.coord = Coordinate1049;

let ColorRGBA1050 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1050.USE = "HAnimSegmentLineColorRGBA";
LineSet1048.color = ColorRGBA1050;

Shape1047.geometry = LineSet1048;

HAnimSegment1043.children[2] = Shape1047;

HAnimJoint1042.children = new MFNode();

HAnimJoint1042.children[0] = HAnimSegment1043;

let HAnimJoint1051 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1051.name = "l_thumb2";
HAnimJoint1051.DEF = "hanim_l_thumb2";
HAnimJoint1051.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimJoint1051.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1051.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1052 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1052.name = "l_thumb_proximal";
HAnimSegment1052.DEF = "hanim_l_thumb_proximal";
//<HAnimJoint name='l_thumb2'/> visualization sphere is placed within <HAnimSegment name='l_thumb_proximal'/>
let TouchSensor1053 = browser.currentScene.createNode("TouchSensor");
TouchSensor1053.description = "HAnimJoint l_thumb2, HAnimSegment l_thumb_proximal";
HAnimSegment1052.children = new MFNode();

HAnimSegment1052.children[0] = TouchSensor1053;

let Transform1054 = browser.currentScene.createNode("Transform");
Transform1054.translation = new SFVec3f(new float[0.1951,0.8226,0.0246]);
let Shape1055 = browser.currentScene.createNode("Shape");
Shape1055.USE = "HAnimJointShape";
Transform1054.children = new MFNode();

Transform1054.children[0] = Shape1055;

HAnimSegment1052.children[1] = Transform1054;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_thumb2'/> to <HAnimJoint name='l_thumb3'/>
let Shape1056 = browser.currentScene.createNode("Shape");
let LineSet1057 = browser.currentScene.createNode("LineSet");
LineSet1057.vertexCount = new MFInt32(new int[2]);
let Coordinate1058 = browser.currentScene.createNode("Coordinate");
Coordinate1058.point = new MFVec3f(new float[0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
LineSet1057.coord = Coordinate1058;

let ColorRGBA1059 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1059.USE = "HAnimSegmentLineColorRGBA";
LineSet1057.color = ColorRGBA1059;

Shape1056.geometry = LineSet1057;

HAnimSegment1052.children[2] = Shape1056;

HAnimJoint1051.children = new MFNode();

HAnimJoint1051.children[0] = HAnimSegment1052;

let HAnimJoint1060 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1060.name = "l_thumb3";
HAnimJoint1060.DEF = "hanim_l_thumb3";
HAnimJoint1060.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint1060.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1060.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1061 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1061.name = "l_thumb_distal";
HAnimSegment1061.DEF = "hanim_l_thumb_distal";
//<HAnimJoint name='l_thumb3'/> visualization sphere is placed within <HAnimSegment name='l_thumb_distal'/>
let TouchSensor1062 = browser.currentScene.createNode("TouchSensor");
TouchSensor1062.description = "HAnimJoint l_thumb3, HAnimSegment l_thumb_distal";
HAnimSegment1061.children = new MFNode();

HAnimSegment1061.children[0] = TouchSensor1062;

let Transform1063 = browser.currentScene.createNode("Transform");
Transform1063.translation = new SFVec3f(new float[0.1955,0.8159,0.0464]);
let Shape1064 = browser.currentScene.createNode("Shape");
Shape1064.USE = "HAnimJointShape";
Transform1063.children = new MFNode();

Transform1063.children[0] = Shape1064;

HAnimSegment1061.children[1] = Transform1063;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_thumb3'/> to <HAnimSite name='l_thumb_distal_tip'/>
let Shape1065 = browser.currentScene.createNode("Shape");
let LineSet1066 = browser.currentScene.createNode("LineSet");
LineSet1066.vertexCount = new MFInt32(new int[2]);
let Coordinate1067 = browser.currentScene.createNode("Coordinate");
Coordinate1067.point = new MFVec3f(new float[0.1955,0.8159,0.0464,0.1982,0.8061,0.0759]);
LineSet1066.coord = Coordinate1067;

let ColorRGBA1068 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1068.USE = "HAnimSiteLineColorRGBA";
LineSet1066.color = ColorRGBA1068;

Shape1065.geometry = LineSet1066;

HAnimSegment1061.children[2] = Shape1065;

let HAnimSite1069 = browser.currentScene.createNode("HAnimSite");
HAnimSite1069.name = "l_thumb_distal_tip";
HAnimSite1069.DEF = "hanim_l_thumb_distal_tip";
HAnimSite1069.translation = new SFVec3f(new float[0.1982,0.8061,0.0759]);
//HAnimSite visualization shape
let TouchSensor1070 = browser.currentScene.createNode("TouchSensor");
TouchSensor1070.description = "HAnimSite l_thumb_distal_tip";
HAnimSite1069.children = new MFNode();

HAnimSite1069.children[0] = TouchSensor1070;

let Shape1071 = browser.currentScene.createNode("Shape");
Shape1071.USE = "HAnimSiteShape";
HAnimSite1069.children[1] = Shape1071;

HAnimSegment1061.children[3] = HAnimSite1069;

HAnimJoint1060.children = new MFNode();

HAnimJoint1060.children[0] = HAnimSegment1061;

HAnimJoint1051.children[1] = HAnimJoint1060;

HAnimJoint1042.children[1] = HAnimJoint1051;

HAnimJoint984.children[1] = HAnimJoint1042;

let HAnimJoint1072 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1072.name = "l_index0";
HAnimJoint1072.DEF = "hanim_l_index0";
HAnimJoint1072.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimJoint1072.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1072.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1073 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1073.name = "l_index_metacarpal";
HAnimSegment1073.DEF = "hanim_l_index_metacarpal";
//<HAnimJoint name='l_index0'/> visualization sphere is placed within <HAnimSegment name='l_index_metacarpal'/>
let TouchSensor1074 = browser.currentScene.createNode("TouchSensor");
TouchSensor1074.description = "HAnimJoint l_index0, HAnimSegment l_index_metacarpal";
HAnimSegment1073.children = new MFNode();

HAnimSegment1073.children[0] = TouchSensor1074;

let Transform1075 = browser.currentScene.createNode("Transform");
Transform1075.translation = new SFVec3f(new float[0.1983,0.8024,-0.028]);
let Shape1076 = browser.currentScene.createNode("Shape");
Shape1076.USE = "HAnimJointShape";
Transform1075.children = new MFNode();

Transform1075.children[0] = Shape1076;

HAnimSegment1073.children[1] = Transform1075;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_index0'/> to <HAnimJoint name='l_index1'/>
let Shape1077 = browser.currentScene.createNode("Shape");
let LineSet1078 = browser.currentScene.createNode("LineSet");
LineSet1078.vertexCount = new MFInt32(new int[2]);
let Coordinate1079 = browser.currentScene.createNode("Coordinate");
Coordinate1079.point = new MFVec3f(new float[0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
LineSet1078.coord = Coordinate1079;

let ColorRGBA1080 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1080.USE = "HAnimSegmentLineColorRGBA";
LineSet1078.color = ColorRGBA1080;

Shape1077.geometry = LineSet1078;

HAnimSegment1073.children[2] = Shape1077;

HAnimJoint1072.children = new MFNode();

HAnimJoint1072.children[0] = HAnimSegment1073;

let HAnimJoint1081 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1081.name = "l_index1";
HAnimJoint1081.DEF = "hanim_l_index1";
HAnimJoint1081.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint1081.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1081.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1082 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1082.name = "l_index_proximal";
HAnimSegment1082.DEF = "hanim_l_index_proximal";
//<HAnimJoint name='l_index1'/> visualization sphere is placed within <HAnimSegment name='l_index_proximal'/>
let TouchSensor1083 = browser.currentScene.createNode("TouchSensor");
TouchSensor1083.description = "HAnimJoint l_index1, HAnimSegment l_index_proximal";
HAnimSegment1082.children = new MFNode();

HAnimSegment1082.children[0] = TouchSensor1083;

let Transform1084 = browser.currentScene.createNode("Transform");
Transform1084.translation = new SFVec3f(new float[0.1983,0.7815,-0.028]);
let Shape1085 = browser.currentScene.createNode("Shape");
Shape1085.USE = "HAnimJointShape";
Transform1084.children = new MFNode();

Transform1084.children[0] = Shape1085;

HAnimSegment1082.children[1] = Transform1084;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_index1'/> to <HAnimJoint name='l_index2'/>
let Shape1086 = browser.currentScene.createNode("Shape");
let LineSet1087 = browser.currentScene.createNode("LineSet");
LineSet1087.vertexCount = new MFInt32(new int[2]);
let Coordinate1088 = browser.currentScene.createNode("Coordinate");
Coordinate1088.point = new MFVec3f(new float[0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
LineSet1087.coord = Coordinate1088;

let ColorRGBA1089 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1089.USE = "HAnimSegmentLineColorRGBA";
LineSet1087.color = ColorRGBA1089;

Shape1086.geometry = LineSet1087;

HAnimSegment1082.children[2] = Shape1086;

HAnimJoint1081.children = new MFNode();

HAnimJoint1081.children[0] = HAnimSegment1082;

let HAnimJoint1090 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1090.name = "l_index2";
HAnimJoint1090.DEF = "hanim_l_index2";
HAnimJoint1090.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint1090.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1090.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1091 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1091.name = "l_index_middle";
HAnimSegment1091.DEF = "hanim_l_index_middle";
//<HAnimJoint name='l_index2'/> visualization sphere is placed within <HAnimSegment name='l_index_middle'/>
let TouchSensor1092 = browser.currentScene.createNode("TouchSensor");
TouchSensor1092.description = "HAnimJoint l_index2, HAnimSegment l_index_middle";
HAnimSegment1091.children = new MFNode();

HAnimSegment1091.children[0] = TouchSensor1092;

let Transform1093 = browser.currentScene.createNode("Transform");
Transform1093.translation = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
let Shape1094 = browser.currentScene.createNode("Shape");
Shape1094.USE = "HAnimJointShape";
Transform1093.children = new MFNode();

Transform1093.children[0] = Shape1094;

HAnimSegment1091.children[1] = Transform1093;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_index2'/> to <HAnimJoint name='l_index3'/>
let Shape1095 = browser.currentScene.createNode("Shape");
let LineSet1096 = browser.currentScene.createNode("LineSet");
LineSet1096.vertexCount = new MFInt32(new int[2]);
let Coordinate1097 = browser.currentScene.createNode("Coordinate");
Coordinate1097.point = new MFVec3f(new float[0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
LineSet1096.coord = Coordinate1097;

let ColorRGBA1098 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1098.USE = "HAnimSegmentLineColorRGBA";
LineSet1096.color = ColorRGBA1098;

Shape1095.geometry = LineSet1096;

HAnimSegment1091.children[2] = Shape1095;

HAnimJoint1090.children = new MFNode();

HAnimJoint1090.children[0] = HAnimSegment1091;

let HAnimJoint1099 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1099.name = "l_index3";
HAnimJoint1099.DEF = "hanim_l_index3";
HAnimJoint1099.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint1099.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1099.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1100 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1100.name = "l_index_distal";
HAnimSegment1100.DEF = "hanim_l_index_distal";
//<HAnimJoint name='l_index3'/> visualization sphere is placed within <HAnimSegment name='l_index_distal'/>
let TouchSensor1101 = browser.currentScene.createNode("TouchSensor");
TouchSensor1101.description = "HAnimJoint l_index3, HAnimSegment l_index_distal";
HAnimSegment1100.children = new MFNode();

HAnimSegment1100.children[0] = TouchSensor1101;

let Transform1102 = browser.currentScene.createNode("Transform");
Transform1102.translation = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
let Shape1103 = browser.currentScene.createNode("Shape");
Shape1103.USE = "HAnimJointShape";
Transform1102.children = new MFNode();

Transform1102.children[0] = Shape1103;

HAnimSegment1100.children[1] = Transform1102;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_index_distal_tip'/>
let Shape1104 = browser.currentScene.createNode("Shape");
let LineSet1105 = browser.currentScene.createNode("LineSet");
LineSet1105.vertexCount = new MFInt32(new int[2]);
let Coordinate1106 = browser.currentScene.createNode("Coordinate");
Coordinate1106.point = new MFVec3f(new float[0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245]);
LineSet1105.coord = Coordinate1106;

let ColorRGBA1107 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1107.USE = "HAnimSiteLineColorRGBA";
LineSet1105.color = ColorRGBA1107;

Shape1104.geometry = LineSet1105;

HAnimSegment1100.children[2] = Shape1104;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_dactylion'/>
let Shape1108 = browser.currentScene.createNode("Shape");
let LineSet1109 = browser.currentScene.createNode("LineSet");
LineSet1109.vertexCount = new MFInt32(new int[2]);
let Coordinate1110 = browser.currentScene.createNode("Coordinate");
Coordinate1110.point = new MFVec3f(new float[0.2028,0.7139,-0.0236,0.2056,0.6743,-0.0482]);
LineSet1109.coord = Coordinate1110;

let ColorRGBA1111 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1111.USE = "HAnimSiteLineColorRGBA";
LineSet1109.color = ColorRGBA1111;

Shape1108.geometry = LineSet1109;

HAnimSegment1100.children[3] = Shape1108;

let HAnimSite1112 = browser.currentScene.createNode("HAnimSite");
HAnimSite1112.name = "l_index_distal_tip";
HAnimSite1112.DEF = "hanim_l_index_distal_tip";
HAnimSite1112.translation = new SFVec3f(new float[0.2089,0.6858,-0.0245]);
//HAnimSite visualization shape
let TouchSensor1113 = browser.currentScene.createNode("TouchSensor");
TouchSensor1113.description = "HAnimSite l_index_distal_tip";
HAnimSite1112.children = new MFNode();

HAnimSite1112.children[0] = TouchSensor1113;

let Shape1114 = browser.currentScene.createNode("Shape");
Shape1114.USE = "HAnimSiteShape";
HAnimSite1112.children[1] = Shape1114;

HAnimSegment1100.children[4] = HAnimSite1112;

let HAnimSite1115 = browser.currentScene.createNode("HAnimSite");
HAnimSite1115.name = "l_dactylion_pt";
HAnimSite1115.DEF = "hanim_l_dactylion_pt";
HAnimSite1115.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
//HAnimSite visualization shape
let TouchSensor1116 = browser.currentScene.createNode("TouchSensor");
TouchSensor1116.description = "HAnimSite l_dactylion";
HAnimSite1115.children = new MFNode();

HAnimSite1115.children[0] = TouchSensor1116;

let Shape1117 = browser.currentScene.createNode("Shape");
Shape1117.USE = "HAnimSiteShape";
HAnimSite1115.children[1] = Shape1117;

HAnimSegment1100.children[5] = HAnimSite1115;

HAnimJoint1099.children = new MFNode();

HAnimJoint1099.children[0] = HAnimSegment1100;

HAnimJoint1090.children[1] = HAnimJoint1099;

HAnimJoint1081.children[1] = HAnimJoint1090;

HAnimJoint1072.children[1] = HAnimJoint1081;

HAnimJoint984.children[2] = HAnimJoint1072;

let HAnimJoint1118 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1118.name = "l_middle0";
HAnimJoint1118.DEF = "hanim_l_middle0";
HAnimJoint1118.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimJoint1118.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1118.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1119 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1119.name = "l_middle_metacarpal";
HAnimSegment1119.DEF = "hanim_l_middle_metacarpal";
//<HAnimJoint name='l_middle0'/> visualization sphere is placed within <HAnimSegment name='l_middle_metacarpal'/>
let TouchSensor1120 = browser.currentScene.createNode("TouchSensor");
TouchSensor1120.description = "HAnimJoint l_middle0, HAnimSegment l_middle_metacarpal";
HAnimSegment1119.children = new MFNode();

HAnimSegment1119.children[0] = TouchSensor1120;

let Transform1121 = browser.currentScene.createNode("Transform");
Transform1121.translation = new SFVec3f(new float[0.1987,0.8029,-0.053]);
let Shape1122 = browser.currentScene.createNode("Shape");
Shape1122.USE = "HAnimJointShape";
Transform1121.children = new MFNode();

Transform1121.children[0] = Shape1122;

HAnimSegment1119.children[1] = Transform1121;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle0'/> to <HAnimJoint name='l_middle1'/>
let Shape1123 = browser.currentScene.createNode("Shape");
let LineSet1124 = browser.currentScene.createNode("LineSet");
LineSet1124.vertexCount = new MFInt32(new int[2]);
let Coordinate1125 = browser.currentScene.createNode("Coordinate");
Coordinate1125.point = new MFVec3f(new float[0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
LineSet1124.coord = Coordinate1125;

let ColorRGBA1126 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1126.USE = "HAnimSegmentLineColorRGBA";
LineSet1124.color = ColorRGBA1126;

Shape1123.geometry = LineSet1124;

HAnimSegment1119.children[2] = Shape1123;

HAnimJoint1118.children = new MFNode();

HAnimJoint1118.children[0] = HAnimSegment1119;

let HAnimJoint1127 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1127.name = "l_middle1";
HAnimJoint1127.DEF = "hanim_l_middle1";
HAnimJoint1127.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimJoint1127.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1127.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1128 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1128.name = "l_middle_proximal";
HAnimSegment1128.DEF = "hanim_l_middle_proximal";
//<HAnimJoint name='l_middle1'/> visualization sphere is placed within <HAnimSegment name='l_middle_proximal'/>
let TouchSensor1129 = browser.currentScene.createNode("TouchSensor");
TouchSensor1129.description = "HAnimJoint l_middle1, HAnimSegment l_middle_proximal";
HAnimSegment1128.children = new MFNode();

HAnimSegment1128.children[0] = TouchSensor1129;

let Transform1130 = browser.currentScene.createNode("Transform");
Transform1130.translation = new SFVec3f(new float[0.1987,0.7818,-0.053]);
let Shape1131 = browser.currentScene.createNode("Shape");
Shape1131.USE = "HAnimJointShape";
Transform1130.children = new MFNode();

Transform1130.children[0] = Shape1131;

HAnimSegment1128.children[1] = Transform1130;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle1'/> to <HAnimJoint name='l_middle2'/>
let Shape1132 = browser.currentScene.createNode("Shape");
let LineSet1133 = browser.currentScene.createNode("LineSet");
LineSet1133.vertexCount = new MFInt32(new int[2]);
let Coordinate1134 = browser.currentScene.createNode("Coordinate");
Coordinate1134.point = new MFVec3f(new float[0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
LineSet1133.coord = Coordinate1134;

let ColorRGBA1135 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1135.USE = "HAnimSegmentLineColorRGBA";
LineSet1133.color = ColorRGBA1135;

Shape1132.geometry = LineSet1133;

HAnimSegment1128.children[2] = Shape1132;

HAnimJoint1127.children = new MFNode();

HAnimJoint1127.children[0] = HAnimSegment1128;

let HAnimJoint1136 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1136.name = "l_middle2";
HAnimJoint1136.DEF = "hanim_l_middle2";
HAnimJoint1136.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimJoint1136.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1136.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1137 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1137.name = "l_middle_middle";
HAnimSegment1137.DEF = "hanim_l_middle_middle";
//<HAnimJoint name='l_middle2'/> visualization sphere is placed within <HAnimSegment name='l_middle_middle'/>
let TouchSensor1138 = browser.currentScene.createNode("TouchSensor");
TouchSensor1138.description = "HAnimJoint l_middle2, HAnimSegment l_middle_middle";
HAnimSegment1137.children = new MFNode();

HAnimSegment1137.children[0] = TouchSensor1138;

let Transform1139 = browser.currentScene.createNode("Transform");
Transform1139.translation = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
let Shape1140 = browser.currentScene.createNode("Shape");
Shape1140.USE = "HAnimJointShape";
Transform1139.children = new MFNode();

Transform1139.children[0] = Shape1140;

HAnimSegment1137.children[1] = Transform1139;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle2'/> to <HAnimJoint name='l_middle3'/>
let Shape1141 = browser.currentScene.createNode("Shape");
let LineSet1142 = browser.currentScene.createNode("LineSet");
LineSet1142.vertexCount = new MFInt32(new int[2]);
let Coordinate1143 = browser.currentScene.createNode("Coordinate");
Coordinate1143.point = new MFVec3f(new float[0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
LineSet1142.coord = Coordinate1143;

let ColorRGBA1144 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1144.USE = "HAnimSegmentLineColorRGBA";
LineSet1142.color = ColorRGBA1144;

Shape1141.geometry = LineSet1142;

HAnimSegment1137.children[2] = Shape1141;

HAnimJoint1136.children = new MFNode();

HAnimJoint1136.children[0] = HAnimSegment1137;

let HAnimJoint1145 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1145.name = "l_middle3";
HAnimJoint1145.DEF = "hanim_l_middle3";
HAnimJoint1145.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint1145.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1145.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1146 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1146.name = "l_middle_distal";
HAnimSegment1146.DEF = "hanim_l_middle_distal";
//<HAnimJoint name='l_middle3'/> visualization sphere is placed within <HAnimSegment name='l_middle_distal'/>
let TouchSensor1147 = browser.currentScene.createNode("TouchSensor");
TouchSensor1147.description = "HAnimJoint l_middle3, HAnimSegment l_middle_distal";
HAnimSegment1146.children = new MFNode();

HAnimSegment1146.children[0] = TouchSensor1147;

let Transform1148 = browser.currentScene.createNode("Transform");
Transform1148.translation = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
let Shape1149 = browser.currentScene.createNode("Shape");
Shape1149.USE = "HAnimJointShape";
Transform1148.children = new MFNode();

Transform1148.children[0] = Shape1149;

HAnimSegment1146.children[1] = Transform1148;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_middle3'/> to <HAnimSite name='l_middle_distal_tip'/>
let Shape1150 = browser.currentScene.createNode("Shape");
let LineSet1151 = browser.currentScene.createNode("LineSet");
LineSet1151.vertexCount = new MFInt32(new int[2]);
let Coordinate1152 = browser.currentScene.createNode("Coordinate");
Coordinate1152.point = new MFVec3f(new float[0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491]);
LineSet1151.coord = Coordinate1152;

let ColorRGBA1153 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1153.USE = "HAnimSiteLineColorRGBA";
LineSet1151.color = ColorRGBA1153;

Shape1150.geometry = LineSet1151;

HAnimSegment1146.children[2] = Shape1150;

let HAnimSite1154 = browser.currentScene.createNode("HAnimSite");
HAnimSite1154.name = "l_middle_distal_tip";
HAnimSite1154.DEF = "hanim_l_middle_distal_tip";
HAnimSite1154.translation = new SFVec3f(new float[0.208,0.6731,-0.0491]);
//HAnimSite visualization shape
let TouchSensor1155 = browser.currentScene.createNode("TouchSensor");
TouchSensor1155.description = "HAnimSite l_middle_distal_tip";
HAnimSite1154.children = new MFNode();

HAnimSite1154.children[0] = TouchSensor1155;

let Shape1156 = browser.currentScene.createNode("Shape");
Shape1156.USE = "HAnimSiteShape";
HAnimSite1154.children[1] = Shape1156;

HAnimSegment1146.children[3] = HAnimSite1154;

HAnimJoint1145.children = new MFNode();

HAnimJoint1145.children[0] = HAnimSegment1146;

HAnimJoint1136.children[1] = HAnimJoint1145;

HAnimJoint1127.children[1] = HAnimJoint1136;

HAnimJoint1118.children[1] = HAnimJoint1127;

HAnimJoint984.children[3] = HAnimJoint1118;

let HAnimJoint1157 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1157.name = "l_ring0";
HAnimJoint1157.DEF = "hanim_l_ring0";
HAnimJoint1157.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimJoint1157.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1157.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1158 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1158.name = "l_ring_metacarpal";
HAnimSegment1158.DEF = "hanim_l_ring_metacarpal";
//<HAnimJoint name='l_ring0'/> visualization sphere is placed within <HAnimSegment name='l_ring_metacarpal'/>
let TouchSensor1159 = browser.currentScene.createNode("TouchSensor");
TouchSensor1159.description = "HAnimJoint l_ring0, HAnimSegment l_ring_metacarpal";
HAnimSegment1158.children = new MFNode();

HAnimSegment1158.children[0] = TouchSensor1159;

let Transform1160 = browser.currentScene.createNode("Transform");
Transform1160.translation = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
let Shape1161 = browser.currentScene.createNode("Shape");
Shape1161.USE = "HAnimJointShape";
Transform1160.children = new MFNode();

Transform1160.children[0] = Shape1161;

HAnimSegment1158.children[1] = Transform1160;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring0'/> to <HAnimJoint name='l_ring1'/>
let Shape1162 = browser.currentScene.createNode("Shape");
let LineSet1163 = browser.currentScene.createNode("LineSet");
LineSet1163.vertexCount = new MFInt32(new int[2]);
let Coordinate1164 = browser.currentScene.createNode("Coordinate");
Coordinate1164.point = new MFVec3f(new float[0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
LineSet1163.coord = Coordinate1164;

let ColorRGBA1165 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1165.USE = "HAnimSegmentLineColorRGBA";
LineSet1163.color = ColorRGBA1165;

Shape1162.geometry = LineSet1163;

HAnimSegment1158.children[2] = Shape1162;

HAnimJoint1157.children = new MFNode();

HAnimJoint1157.children[0] = HAnimSegment1158;

let HAnimJoint1166 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1166.name = "l_ring1";
HAnimJoint1166.DEF = "hanim_l_ring1";
HAnimJoint1166.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimJoint1166.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1166.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1167 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1167.name = "l_ring_proximal";
HAnimSegment1167.DEF = "hanim_l_ring_proximal";
//<HAnimJoint name='l_ring1'/> visualization sphere is placed within <HAnimSegment name='l_ring_proximal'/>
let TouchSensor1168 = browser.currentScene.createNode("TouchSensor");
TouchSensor1168.description = "HAnimJoint l_ring1, HAnimSegment l_ring_proximal";
HAnimSegment1167.children = new MFNode();

HAnimSegment1167.children[0] = TouchSensor1168;

let Transform1169 = browser.currentScene.createNode("Transform");
Transform1169.translation = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
let Shape1170 = browser.currentScene.createNode("Shape");
Shape1170.USE = "HAnimJointShape";
Transform1169.children = new MFNode();

Transform1169.children[0] = Shape1170;

HAnimSegment1167.children[1] = Transform1169;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring1'/> to <HAnimJoint name='l_ring2'/>
let Shape1171 = browser.currentScene.createNode("Shape");
let LineSet1172 = browser.currentScene.createNode("LineSet");
LineSet1172.vertexCount = new MFInt32(new int[2]);
let Coordinate1173 = browser.currentScene.createNode("Coordinate");
Coordinate1173.point = new MFVec3f(new float[0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
LineSet1172.coord = Coordinate1173;

let ColorRGBA1174 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1174.USE = "HAnimSegmentLineColorRGBA";
LineSet1172.color = ColorRGBA1174;

Shape1171.geometry = LineSet1172;

HAnimSegment1167.children[2] = Shape1171;

HAnimJoint1166.children = new MFNode();

HAnimJoint1166.children[0] = HAnimSegment1167;

let HAnimJoint1175 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1175.name = "l_ring2";
HAnimJoint1175.DEF = "hanim_l_ring2";
HAnimJoint1175.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimJoint1175.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1175.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1176 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1176.name = "l_ring_middle";
HAnimSegment1176.DEF = "hanim_l_ring_middle";
//<HAnimJoint name='l_ring2'/> visualization sphere is placed within <HAnimSegment name='l_ring_middle'/>
let TouchSensor1177 = browser.currentScene.createNode("TouchSensor");
TouchSensor1177.description = "HAnimJoint l_ring2, HAnimSegment l_ring_middle";
HAnimSegment1176.children = new MFNode();

HAnimSegment1176.children[0] = TouchSensor1177;

let Transform1178 = browser.currentScene.createNode("Transform");
Transform1178.translation = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
let Shape1179 = browser.currentScene.createNode("Shape");
Shape1179.USE = "HAnimJointShape";
Transform1178.children = new MFNode();

Transform1178.children[0] = Shape1179;

HAnimSegment1176.children[1] = Transform1178;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring2'/> to <HAnimJoint name='l_ring3'/>
let Shape1180 = browser.currentScene.createNode("Shape");
let LineSet1181 = browser.currentScene.createNode("LineSet");
LineSet1181.vertexCount = new MFInt32(new int[2]);
let Coordinate1182 = browser.currentScene.createNode("Coordinate");
Coordinate1182.point = new MFVec3f(new float[0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
LineSet1181.coord = Coordinate1182;

let ColorRGBA1183 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1183.USE = "HAnimSegmentLineColorRGBA";
LineSet1181.color = ColorRGBA1183;

Shape1180.geometry = LineSet1181;

HAnimSegment1176.children[2] = Shape1180;

HAnimJoint1175.children = new MFNode();

HAnimJoint1175.children[0] = HAnimSegment1176;

let HAnimJoint1184 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1184.name = "l_ring3";
HAnimJoint1184.DEF = "hanim_l_ring3";
HAnimJoint1184.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint1184.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1184.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1185 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1185.name = "l_ring_distal";
HAnimSegment1185.DEF = "hanim_l_ring_distal";
//<HAnimJoint name='l_ring3'/> visualization sphere is placed within <HAnimSegment name='l_ring_distal'/>
let TouchSensor1186 = browser.currentScene.createNode("TouchSensor");
TouchSensor1186.description = "HAnimJoint l_ring3, HAnimSegment l_ring_distal";
HAnimSegment1185.children = new MFNode();

HAnimSegment1185.children[0] = TouchSensor1186;

let Transform1187 = browser.currentScene.createNode("Transform");
Transform1187.translation = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
let Shape1188 = browser.currentScene.createNode("Shape");
Shape1188.USE = "HAnimJointShape";
Transform1187.children = new MFNode();

Transform1187.children[0] = Shape1188;

HAnimSegment1185.children[1] = Transform1187;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ring3'/> to <HAnimSite name='l_ring_distal_tip'/>
let Shape1189 = browser.currentScene.createNode("Shape");
let LineSet1190 = browser.currentScene.createNode("LineSet");
LineSet1190.vertexCount = new MFInt32(new int[2]);
let Coordinate1191 = browser.currentScene.createNode("Coordinate");
Coordinate1191.point = new MFVec3f(new float[0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756]);
LineSet1190.coord = Coordinate1191;

let ColorRGBA1192 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1192.USE = "HAnimSiteLineColorRGBA";
LineSet1190.color = ColorRGBA1192;

Shape1189.geometry = LineSet1190;

HAnimSegment1185.children[2] = Shape1189;

let HAnimSite1193 = browser.currentScene.createNode("HAnimSite");
HAnimSite1193.name = "l_ring_distal_tip";
HAnimSite1193.DEF = "hanim_l_ring_distal_tip";
HAnimSite1193.translation = new SFVec3f(new float[0.2035,0.675,-0.0756]);
//HAnimSite visualization shape
let TouchSensor1194 = browser.currentScene.createNode("TouchSensor");
TouchSensor1194.description = "HAnimSite l_ring_distal_tip";
HAnimSite1193.children = new MFNode();

HAnimSite1193.children[0] = TouchSensor1194;

let Shape1195 = browser.currentScene.createNode("Shape");
Shape1195.USE = "HAnimSiteShape";
HAnimSite1193.children[1] = Shape1195;

HAnimSegment1185.children[3] = HAnimSite1193;

HAnimJoint1184.children = new MFNode();

HAnimJoint1184.children[0] = HAnimSegment1185;

HAnimJoint1175.children[1] = HAnimJoint1184;

HAnimJoint1166.children[1] = HAnimJoint1175;

HAnimJoint1157.children[1] = HAnimJoint1166;

HAnimJoint984.children[4] = HAnimJoint1157;

let HAnimJoint1196 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1196.name = "l_pinky0";
HAnimJoint1196.DEF = "hanim_l_pinky0";
HAnimJoint1196.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimJoint1196.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1196.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1197 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1197.name = "l_pinky_metacarpal";
HAnimSegment1197.DEF = "hanim_l_pinky_metacarpal";
//<HAnimJoint name='l_pinky0'/> visualization sphere is placed within <HAnimSegment name='l_pinky_metacarpal'/>
let TouchSensor1198 = browser.currentScene.createNode("TouchSensor");
TouchSensor1198.description = "HAnimJoint l_pinky0, HAnimSegment l_pinky_metacarpal";
HAnimSegment1197.children = new MFNode();

HAnimSegment1197.children[0] = TouchSensor1198;

let Transform1199 = browser.currentScene.createNode("Transform");
Transform1199.translation = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
let Shape1200 = browser.currentScene.createNode("Shape");
Shape1200.USE = "HAnimJointShape";
Transform1199.children = new MFNode();

Transform1199.children[0] = Shape1200;

HAnimSegment1197.children[1] = Transform1199;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky0'/> to <HAnimJoint name='l_pinky1'/>
let Shape1201 = browser.currentScene.createNode("Shape");
let LineSet1202 = browser.currentScene.createNode("LineSet");
LineSet1202.vertexCount = new MFInt32(new int[2]);
let Coordinate1203 = browser.currentScene.createNode("Coordinate");
Coordinate1203.point = new MFVec3f(new float[0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
LineSet1202.coord = Coordinate1203;

let ColorRGBA1204 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1204.USE = "HAnimSegmentLineColorRGBA";
LineSet1202.color = ColorRGBA1204;

Shape1201.geometry = LineSet1202;

HAnimSegment1197.children[2] = Shape1201;

HAnimJoint1196.children = new MFNode();

HAnimJoint1196.children[0] = HAnimSegment1197;

let HAnimJoint1205 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1205.name = "l_pinky1";
HAnimJoint1205.DEF = "hanim_l_pinky1";
HAnimJoint1205.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimJoint1205.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1205.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1206 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1206.name = "l_pinky_proximal";
HAnimSegment1206.DEF = "hanim_l_pinky_proximal";
//<HAnimJoint name='l_pinky1'/> visualization sphere is placed within <HAnimSegment name='l_pinky_proximal'/>
let TouchSensor1207 = browser.currentScene.createNode("TouchSensor");
TouchSensor1207.description = "HAnimJoint l_pinky1, HAnimSegment l_pinky_proximal";
HAnimSegment1206.children = new MFNode();

HAnimSegment1206.children[0] = TouchSensor1207;

let Transform1208 = browser.currentScene.createNode("Transform");
Transform1208.translation = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
let Shape1209 = browser.currentScene.createNode("Shape");
Shape1209.USE = "HAnimJointShape";
Transform1208.children = new MFNode();

Transform1208.children[0] = Shape1209;

HAnimSegment1206.children[1] = Transform1208;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky1'/> to <HAnimJoint name='l_pinky2'/>
let Shape1210 = browser.currentScene.createNode("Shape");
let LineSet1211 = browser.currentScene.createNode("LineSet");
LineSet1211.vertexCount = new MFInt32(new int[2]);
let Coordinate1212 = browser.currentScene.createNode("Coordinate");
Coordinate1212.point = new MFVec3f(new float[0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
LineSet1211.coord = Coordinate1212;

let ColorRGBA1213 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1213.USE = "HAnimSegmentLineColorRGBA";
LineSet1211.color = ColorRGBA1213;

Shape1210.geometry = LineSet1211;

HAnimSegment1206.children[2] = Shape1210;

HAnimJoint1205.children = new MFNode();

HAnimJoint1205.children[0] = HAnimSegment1206;

let HAnimJoint1214 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1214.name = "l_pinky2";
HAnimJoint1214.DEF = "hanim_l_pinky2";
HAnimJoint1214.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimJoint1214.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1214.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1215 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1215.name = "l_pinky_middle";
HAnimSegment1215.DEF = "hanim_l_pinky_middle";
//<HAnimJoint name='l_pinky2'/> visualization sphere is placed within <HAnimSegment name='l_pinky_middle'/>
let TouchSensor1216 = browser.currentScene.createNode("TouchSensor");
TouchSensor1216.description = "HAnimJoint l_pinky2, HAnimSegment l_pinky_middle";
HAnimSegment1215.children = new MFNode();

HAnimSegment1215.children[0] = TouchSensor1216;

let Transform1217 = browser.currentScene.createNode("Transform");
Transform1217.translation = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
let Shape1218 = browser.currentScene.createNode("Shape");
Shape1218.USE = "HAnimJointShape";
Transform1217.children = new MFNode();

Transform1217.children[0] = Shape1218;

HAnimSegment1215.children[1] = Transform1217;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky2'/> to <HAnimJoint name='l_pinky3'/>
let Shape1219 = browser.currentScene.createNode("Shape");
let LineSet1220 = browser.currentScene.createNode("LineSet");
LineSet1220.vertexCount = new MFInt32(new int[2]);
let Coordinate1221 = browser.currentScene.createNode("Coordinate");
Coordinate1221.point = new MFVec3f(new float[0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
LineSet1220.coord = Coordinate1221;

let ColorRGBA1222 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1222.USE = "HAnimSegmentLineColorRGBA";
LineSet1220.color = ColorRGBA1222;

Shape1219.geometry = LineSet1220;

HAnimSegment1215.children[2] = Shape1219;

HAnimJoint1214.children = new MFNode();

HAnimJoint1214.children[0] = HAnimSegment1215;

let HAnimJoint1223 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1223.name = "l_pinky3";
HAnimJoint1223.DEF = "hanim_l_pinky3";
HAnimJoint1223.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint1223.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1223.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1224 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1224.name = "l_pinky_distal";
HAnimSegment1224.DEF = "hanim_l_pinky_distal";
//<HAnimJoint name='l_pinky3'/> visualization sphere is placed within <HAnimSegment name='l_pinky_distal'/>
let TouchSensor1225 = browser.currentScene.createNode("TouchSensor");
TouchSensor1225.description = "HAnimJoint l_pinky3, HAnimSegment l_pinky_distal";
HAnimSegment1224.children = new MFNode();

HAnimSegment1224.children[0] = TouchSensor1225;

let Transform1226 = browser.currentScene.createNode("Transform");
Transform1226.translation = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
let Shape1227 = browser.currentScene.createNode("Shape");
Shape1227.USE = "HAnimJointShape";
Transform1226.children = new MFNode();

Transform1226.children[0] = Shape1227;

HAnimSegment1224.children[1] = Transform1226;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_pinky3'/> to <HAnimSite name='l_pinky_distal_tip'/>
let Shape1228 = browser.currentScene.createNode("Shape");
let LineSet1229 = browser.currentScene.createNode("LineSet");
LineSet1229.vertexCount = new MFInt32(new int[2]);
let Coordinate1230 = browser.currentScene.createNode("Coordinate");
Coordinate1230.point = new MFVec3f(new float[0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012]);
LineSet1229.coord = Coordinate1230;

let ColorRGBA1231 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1231.USE = "HAnimSiteLineColorRGBA";
LineSet1229.color = ColorRGBA1231;

Shape1228.geometry = LineSet1229;

HAnimSegment1224.children[2] = Shape1228;

let HAnimSite1232 = browser.currentScene.createNode("HAnimSite");
HAnimSite1232.name = "l_pinky_distal_tip";
HAnimSite1232.DEF = "hanim_l_pinky_distal_tip";
HAnimSite1232.translation = new SFVec3f(new float[0.2014,0.7009,-0.1012]);
//HAnimSite visualization shape
let TouchSensor1233 = browser.currentScene.createNode("TouchSensor");
TouchSensor1233.description = "HAnimSite l_pinky_distal_tip";
HAnimSite1232.children = new MFNode();

HAnimSite1232.children[0] = TouchSensor1233;

let Shape1234 = browser.currentScene.createNode("Shape");
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

let HAnimJoint1235 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1235.name = "r_sternoclavicular";
HAnimJoint1235.DEF = "hanim_r_sternoclavicular";
HAnimJoint1235.center = new SFVec3f(new float[-0.082,1.4488,-0.0353]);
HAnimJoint1235.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1235.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1236 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1236.name = "r_clavicle";
HAnimSegment1236.DEF = "hanim_r_clavicle";
//<HAnimJoint name='r_sternoclavicular'/> visualization sphere is placed within <HAnimSegment name='r_clavicle'/>
let TouchSensor1237 = browser.currentScene.createNode("TouchSensor");
TouchSensor1237.description = "HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle";
HAnimSegment1236.children = new MFNode();

HAnimSegment1236.children[0] = TouchSensor1237;

let Transform1238 = browser.currentScene.createNode("Transform");
Transform1238.translation = new SFVec3f(new float[-0.082,1.4488,-0.0353]);
let Shape1239 = browser.currentScene.createNode("Shape");
Shape1239.USE = "HAnimJointShape";
Transform1238.children = new MFNode();

Transform1238.children[0] = Shape1239;

HAnimSegment1236.children[1] = Transform1238;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_sternoclavicular'/> to <HAnimJoint name='r_acromioclavicular'/>
let Shape1240 = browser.currentScene.createNode("Shape");
let LineSet1241 = browser.currentScene.createNode("LineSet");
LineSet1241.vertexCount = new MFInt32(new int[2]);
let Coordinate1242 = browser.currentScene.createNode("Coordinate");
Coordinate1242.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.0962,1.4269,-0.0424]);
LineSet1241.coord = Coordinate1242;

let ColorRGBA1243 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1243.USE = "HAnimSegmentLineColorRGBA";
LineSet1241.color = ColorRGBA1243;

Shape1240.geometry = LineSet1241;

HAnimSegment1236.children[2] = Shape1240;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_clavicale'/>
let Shape1244 = browser.currentScene.createNode("Shape");
let LineSet1245 = browser.currentScene.createNode("LineSet");
LineSet1245.vertexCount = new MFInt32(new int[2]);
let Coordinate1246 = browser.currentScene.createNode("Coordinate");
Coordinate1246.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.0115,1.4943,0.04]);
LineSet1245.coord = Coordinate1246;

let ColorRGBA1247 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1247.USE = "HAnimSiteLineColorRGBA";
LineSet1245.color = ColorRGBA1247;

Shape1244.geometry = LineSet1245;

HAnimSegment1236.children[3] = Shape1244;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_acromion'/>
let Shape1248 = browser.currentScene.createNode("Shape");
let LineSet1249 = browser.currentScene.createNode("LineSet");
LineSet1249.vertexCount = new MFInt32(new int[2]);
let Coordinate1250 = browser.currentScene.createNode("Coordinate");
Coordinate1250.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.1905,1.4791,-0.0431]);
LineSet1249.coord = Coordinate1250;

let ColorRGBA1251 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1251.USE = "HAnimSiteLineColorRGBA";
LineSet1249.color = ColorRGBA1251;

Shape1248.geometry = LineSet1249;

HAnimSegment1236.children[4] = Shape1248;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_ant'/>
let Shape1252 = browser.currentScene.createNode("Shape");
let LineSet1253 = browser.currentScene.createNode("LineSet");
LineSet1253.vertexCount = new MFInt32(new int[2]);
let Coordinate1254 = browser.currentScene.createNode("Coordinate");
Coordinate1254.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.1626,1.4072,-0.0031]);
LineSet1253.coord = Coordinate1254;

let ColorRGBA1255 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1255.USE = "HAnimSiteLineColorRGBA";
LineSet1253.color = ColorRGBA1255;

Shape1252.geometry = LineSet1253;

HAnimSegment1236.children[5] = Shape1252;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_post'/>
let Shape1256 = browser.currentScene.createNode("Shape");
let LineSet1257 = browser.currentScene.createNode("LineSet");
LineSet1257.vertexCount = new MFInt32(new int[2]);
let Coordinate1258 = browser.currentScene.createNode("Coordinate");
Coordinate1258.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.1603,1.4098,-0.0826]);
LineSet1257.coord = Coordinate1258;

let ColorRGBA1259 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1259.USE = "HAnimSiteLineColorRGBA";
LineSet1257.color = ColorRGBA1259;

Shape1256.geometry = LineSet1257;

HAnimSegment1236.children[6] = Shape1256;

let HAnimSite1260 = browser.currentScene.createNode("HAnimSite");
HAnimSite1260.name = "r_clavicale_pt";
HAnimSite1260.DEF = "hanim_r_clavicale_pt";
HAnimSite1260.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
//HAnimSite visualization shape
let TouchSensor1261 = browser.currentScene.createNode("TouchSensor");
TouchSensor1261.description = "HAnimSite r_clavicale";
HAnimSite1260.children = new MFNode();

HAnimSite1260.children[0] = TouchSensor1261;

let Shape1262 = browser.currentScene.createNode("Shape");
Shape1262.USE = "HAnimSiteShape";
HAnimSite1260.children[1] = Shape1262;

HAnimSegment1236.children[7] = HAnimSite1260;

let HAnimSite1263 = browser.currentScene.createNode("HAnimSite");
HAnimSite1263.name = "r_acromion_pt";
HAnimSite1263.DEF = "hanim_r_acromion_pt";
HAnimSite1263.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
//HAnimSite visualization shape
let TouchSensor1264 = browser.currentScene.createNode("TouchSensor");
TouchSensor1264.description = "HAnimSite r_acromion";
HAnimSite1263.children = new MFNode();

HAnimSite1263.children[0] = TouchSensor1264;

let Shape1265 = browser.currentScene.createNode("Shape");
Shape1265.USE = "HAnimSiteShape";
HAnimSite1263.children[1] = Shape1265;

HAnimSegment1236.children[8] = HAnimSite1263;

let HAnimSite1266 = browser.currentScene.createNode("HAnimSite");
HAnimSite1266.name = "r_axilla_ant_pt";
HAnimSite1266.DEF = "hanim_r_axilla_ant_pt";
HAnimSite1266.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
//HAnimSite visualization shape
let TouchSensor1267 = browser.currentScene.createNode("TouchSensor");
TouchSensor1267.description = "HAnimSite r_axilla_ant";
HAnimSite1266.children = new MFNode();

HAnimSite1266.children[0] = TouchSensor1267;

let Shape1268 = browser.currentScene.createNode("Shape");
Shape1268.USE = "HAnimSiteShape";
HAnimSite1266.children[1] = Shape1268;

HAnimSegment1236.children[9] = HAnimSite1266;

let HAnimSite1269 = browser.currentScene.createNode("HAnimSite");
HAnimSite1269.name = "r_axilla_post_pt";
HAnimSite1269.DEF = "hanim_r_axilla_post_pt";
HAnimSite1269.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
//HAnimSite visualization shape
let TouchSensor1270 = browser.currentScene.createNode("TouchSensor");
TouchSensor1270.description = "HAnimSite r_axilla_post";
HAnimSite1269.children = new MFNode();

HAnimSite1269.children[0] = TouchSensor1270;

let Shape1271 = browser.currentScene.createNode("Shape");
Shape1271.USE = "HAnimSiteShape";
HAnimSite1269.children[1] = Shape1271;

HAnimSegment1236.children[10] = HAnimSite1269;

HAnimJoint1235.children = new MFNode();

HAnimJoint1235.children[0] = HAnimSegment1236;

let HAnimJoint1272 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1272.name = "r_acromioclavicular";
HAnimJoint1272.DEF = "hanim_r_acromioclavicular";
HAnimJoint1272.center = new SFVec3f(new float[-0.0962,1.4269,-0.0424]);
HAnimJoint1272.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1272.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1273 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1273.name = "r_scapula";
HAnimSegment1273.DEF = "hanim_r_scapula";
//<HAnimJoint name='r_acromioclavicular'/> visualization sphere is placed within <HAnimSegment name='r_scapula'/>
let TouchSensor1274 = browser.currentScene.createNode("TouchSensor");
TouchSensor1274.description = "HAnimJoint r_acromioclavicular, HAnimSegment r_scapula";
HAnimSegment1273.children = new MFNode();

HAnimSegment1273.children[0] = TouchSensor1274;

let Transform1275 = browser.currentScene.createNode("Transform");
Transform1275.translation = new SFVec3f(new float[-0.0962,1.4269,-0.0424]);
let Shape1276 = browser.currentScene.createNode("Shape");
Shape1276.USE = "HAnimJointShape";
Transform1275.children = new MFNode();

Transform1275.children[0] = Shape1276;

HAnimSegment1273.children[1] = Transform1275;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_acromioclavicular'/> to <HAnimJoint name='r_shoulder'/>
let Shape1277 = browser.currentScene.createNode("Shape");
let LineSet1278 = browser.currentScene.createNode("LineSet");
LineSet1278.vertexCount = new MFInt32(new int[2]);
let Coordinate1279 = browser.currentScene.createNode("Coordinate");
Coordinate1279.point = new MFVec3f(new float[-0.0962,1.4269,-0.0424,-0.2029,1.4376,-0.0387]);
LineSet1278.coord = Coordinate1279;

let ColorRGBA1280 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1280.USE = "HAnimSegmentLineColorRGBA";
LineSet1278.color = ColorRGBA1280;

Shape1277.geometry = LineSet1278;

HAnimSegment1273.children[2] = Shape1277;

HAnimJoint1272.children = new MFNode();

HAnimJoint1272.children[0] = HAnimSegment1273;

let HAnimJoint1281 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1281.name = "r_shoulder";
HAnimJoint1281.DEF = "hanim_r_shoulder";
HAnimJoint1281.center = new SFVec3f(new float[-0.2029,1.4376,-0.0387]);
HAnimJoint1281.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1281.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1282 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1282.name = "r_upperarm";
HAnimSegment1282.DEF = "hanim_r_upperarm";
//<HAnimJoint name='r_shoulder'/> visualization sphere is placed within <HAnimSegment name='r_upperarm'/>
let TouchSensor1283 = browser.currentScene.createNode("TouchSensor");
TouchSensor1283.description = "HAnimJoint r_shoulder, HAnimSegment r_upperarm";
HAnimSegment1282.children = new MFNode();

HAnimSegment1282.children[0] = TouchSensor1283;

let Transform1284 = browser.currentScene.createNode("Transform");
Transform1284.translation = new SFVec3f(new float[-0.2029,1.4376,-0.0387]);
let Shape1285 = browser.currentScene.createNode("Shape");
Shape1285.USE = "HAnimJointShape";
Transform1284.children = new MFNode();

Transform1284.children[0] = Shape1285;

HAnimSegment1282.children[1] = Transform1284;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_shoulder'/> to <HAnimJoint name='r_elbow'/>
let Shape1286 = browser.currentScene.createNode("Shape");
let LineSet1287 = browser.currentScene.createNode("LineSet");
LineSet1287.vertexCount = new MFInt32(new int[2]);
let Coordinate1288 = browser.currentScene.createNode("Coordinate");
Coordinate1288.point = new MFVec3f(new float[-0.2029,1.4376,-0.0387,-0.2014,1.1357,-0.0682]);
LineSet1287.coord = Coordinate1288;

let ColorRGBA1289 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1289.USE = "HAnimSegmentLineColorRGBA";
LineSet1287.color = ColorRGBA1289;

Shape1286.geometry = LineSet1287;

HAnimSegment1282.children[2] = Shape1286;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_shoulder'/> to <HAnimSite name='r_humeral_lateral_epicn'/>
let Shape1290 = browser.currentScene.createNode("Shape");
let LineSet1291 = browser.currentScene.createNode("LineSet");
LineSet1291.vertexCount = new MFInt32(new int[2]);
let Coordinate1292 = browser.currentScene.createNode("Coordinate");
Coordinate1292.point = new MFVec3f(new float[-0.2029,1.4376,-0.0387,-0.2224,1.1517,-0.1033]);
LineSet1291.coord = Coordinate1292;

let ColorRGBA1293 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1293.USE = "HAnimSiteLineColorRGBA";
LineSet1291.color = ColorRGBA1293;

Shape1290.geometry = LineSet1291;

HAnimSegment1282.children[3] = Shape1290;

let HAnimSite1294 = browser.currentScene.createNode("HAnimSite");
HAnimSite1294.name = "r_humeral_lateral_epicn_pt";
HAnimSite1294.DEF = "hanim_r_humeral_lateral_epicn_pt";
HAnimSite1294.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
//HAnimSite visualization shape
let TouchSensor1295 = browser.currentScene.createNode("TouchSensor");
TouchSensor1295.description = "HAnimSite r_humeral_lateral_epicn";
HAnimSite1294.children = new MFNode();

HAnimSite1294.children[0] = TouchSensor1295;

let Shape1296 = browser.currentScene.createNode("Shape");
Shape1296.USE = "HAnimSiteShape";
HAnimSite1294.children[1] = Shape1296;

HAnimSegment1282.children[4] = HAnimSite1294;

HAnimJoint1281.children = new MFNode();

HAnimJoint1281.children[0] = HAnimSegment1282;

let HAnimJoint1297 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1297.name = "r_elbow";
HAnimJoint1297.DEF = "hanim_r_elbow";
HAnimJoint1297.center = new SFVec3f(new float[-0.2014,1.1357,-0.0682]);
HAnimJoint1297.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1297.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1298 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1298.name = "r_forearm";
HAnimSegment1298.DEF = "hanim_r_forearm";
//<HAnimJoint name='r_elbow'/> visualization sphere is placed within <HAnimSegment name='r_forearm'/>
let TouchSensor1299 = browser.currentScene.createNode("TouchSensor");
TouchSensor1299.description = "HAnimJoint r_elbow, HAnimSegment r_forearm";
HAnimSegment1298.children = new MFNode();

HAnimSegment1298.children[0] = TouchSensor1299;

let Transform1300 = browser.currentScene.createNode("Transform");
Transform1300.translation = new SFVec3f(new float[-0.2014,1.1357,-0.0682]);
let Shape1301 = browser.currentScene.createNode("Shape");
Shape1301.USE = "HAnimJointShape";
Transform1300.children = new MFNode();

Transform1300.children[0] = Shape1301;

HAnimSegment1298.children[1] = Transform1300;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_elbow'/> to <HAnimJoint name='r_wrist'/>
let Shape1302 = browser.currentScene.createNode("Shape");
let LineSet1303 = browser.currentScene.createNode("LineSet");
LineSet1303.vertexCount = new MFInt32(new int[2]);
let Coordinate1304 = browser.currentScene.createNode("Coordinate");
Coordinate1304.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.1984,0.8663,-0.0583]);
LineSet1303.coord = Coordinate1304;

let ColorRGBA1305 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1305.USE = "HAnimSegmentLineColorRGBA";
LineSet1303.color = ColorRGBA1305;

Shape1302.geometry = LineSet1303;

HAnimSegment1298.children[2] = Shape1302;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radial_styloid'/>
let Shape1306 = browser.currentScene.createNode("Shape");
let LineSet1307 = browser.currentScene.createNode("LineSet");
LineSet1307.vertexCount = new MFInt32(new int[2]);
let Coordinate1308 = browser.currentScene.createNode("Coordinate");
Coordinate1308.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.1884,0.8676,-0.036]);
LineSet1307.coord = Coordinate1308;

let ColorRGBA1309 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1309.USE = "HAnimSiteLineColorRGBA";
LineSet1307.color = ColorRGBA1309;

Shape1306.geometry = LineSet1307;

HAnimSegment1298.children[3] = Shape1306;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_olecranon'/>
let Shape1310 = browser.currentScene.createNode("Shape");
let LineSet1311 = browser.currentScene.createNode("LineSet");
LineSet1311.vertexCount = new MFInt32(new int[2]);
let Coordinate1312 = browser.currentScene.createNode("Coordinate");
Coordinate1312.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.1907,1.1405,-0.1065]);
LineSet1311.coord = Coordinate1312;

let ColorRGBA1313 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1313.USE = "HAnimSiteLineColorRGBA";
LineSet1311.color = ColorRGBA1313;

Shape1310.geometry = LineSet1311;

HAnimSegment1298.children[4] = Shape1310;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_humeral_medial_epicn'/>
let Shape1314 = browser.currentScene.createNode("Shape");
let LineSet1315 = browser.currentScene.createNode("LineSet");
LineSet1315.vertexCount = new MFInt32(new int[2]);
let Coordinate1316 = browser.currentScene.createNode("Coordinate");
Coordinate1316.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.168,1.1298,-0.1062]);
LineSet1315.coord = Coordinate1316;

let ColorRGBA1317 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1317.USE = "HAnimSiteLineColorRGBA";
LineSet1315.color = ColorRGBA1317;

Shape1314.geometry = LineSet1315;

HAnimSegment1298.children[5] = Shape1314;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radiale'/>
let Shape1318 = browser.currentScene.createNode("Shape");
let LineSet1319 = browser.currentScene.createNode("LineSet");
LineSet1319.vertexCount = new MFInt32(new int[2]);
let Coordinate1320 = browser.currentScene.createNode("Coordinate");
Coordinate1320.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.213,1.1305,-0.1091]);
LineSet1319.coord = Coordinate1320;

let ColorRGBA1321 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1321.USE = "HAnimSiteLineColorRGBA";
LineSet1319.color = ColorRGBA1321;

Shape1318.geometry = LineSet1319;

HAnimSegment1298.children[6] = Shape1318;

let HAnimSite1322 = browser.currentScene.createNode("HAnimSite");
HAnimSite1322.name = "r_radial_styloid_pt";
HAnimSite1322.DEF = "hanim_r_radial_styloid_pt";
HAnimSite1322.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
//HAnimSite visualization shape
let TouchSensor1323 = browser.currentScene.createNode("TouchSensor");
TouchSensor1323.description = "HAnimSite r_radial_styloid";
HAnimSite1322.children = new MFNode();

HAnimSite1322.children[0] = TouchSensor1323;

let Shape1324 = browser.currentScene.createNode("Shape");
Shape1324.USE = "HAnimSiteShape";
HAnimSite1322.children[1] = Shape1324;

HAnimSegment1298.children[7] = HAnimSite1322;

let HAnimSite1325 = browser.currentScene.createNode("HAnimSite");
HAnimSite1325.name = "r_olecranon_pt";
HAnimSite1325.DEF = "hanim_r_olecranon_pt";
HAnimSite1325.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
//HAnimSite visualization shape
let TouchSensor1326 = browser.currentScene.createNode("TouchSensor");
TouchSensor1326.description = "HAnimSite r_olecranon";
HAnimSite1325.children = new MFNode();

HAnimSite1325.children[0] = TouchSensor1326;

let Shape1327 = browser.currentScene.createNode("Shape");
Shape1327.USE = "HAnimSiteShape";
HAnimSite1325.children[1] = Shape1327;

HAnimSegment1298.children[8] = HAnimSite1325;

let HAnimSite1328 = browser.currentScene.createNode("HAnimSite");
HAnimSite1328.name = "r_humeral_medial_epicn_pt";
HAnimSite1328.DEF = "hanim_r_humeral_medial_epicn_pt";
HAnimSite1328.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
//HAnimSite visualization shape
let TouchSensor1329 = browser.currentScene.createNode("TouchSensor");
TouchSensor1329.description = "HAnimSite r_humeral_medial_epicn";
HAnimSite1328.children = new MFNode();

HAnimSite1328.children[0] = TouchSensor1329;

let Shape1330 = browser.currentScene.createNode("Shape");
Shape1330.USE = "HAnimSiteShape";
HAnimSite1328.children[1] = Shape1330;

HAnimSegment1298.children[9] = HAnimSite1328;

let HAnimSite1331 = browser.currentScene.createNode("HAnimSite");
HAnimSite1331.name = "r_radiale_pt";
HAnimSite1331.DEF = "hanim_r_radiale_pt";
HAnimSite1331.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
//HAnimSite visualization shape
let TouchSensor1332 = browser.currentScene.createNode("TouchSensor");
TouchSensor1332.description = "HAnimSite r_radiale";
HAnimSite1331.children = new MFNode();

HAnimSite1331.children[0] = TouchSensor1332;

let Shape1333 = browser.currentScene.createNode("Shape");
Shape1333.USE = "HAnimSiteShape";
HAnimSite1331.children[1] = Shape1333;

HAnimSegment1298.children[10] = HAnimSite1331;

HAnimJoint1297.children = new MFNode();

HAnimJoint1297.children[0] = HAnimSegment1298;

let HAnimJoint1334 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1334.name = "r_wrist";
HAnimJoint1334.DEF = "hanim_r_wrist";
HAnimJoint1334.center = new SFVec3f(new float[-0.1984,0.8663,-0.0583]);
HAnimJoint1334.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1334.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1335 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1335.name = "r_hand";
HAnimSegment1335.DEF = "hanim_r_hand";
//<HAnimJoint name='r_wrist'/> visualization sphere is placed within <HAnimSegment name='r_hand'/>
let TouchSensor1336 = browser.currentScene.createNode("TouchSensor");
TouchSensor1336.description = "HAnimJoint r_wrist, HAnimSegment r_hand";
HAnimSegment1335.children = new MFNode();

HAnimSegment1335.children[0] = TouchSensor1336;

let Transform1337 = browser.currentScene.createNode("Transform");
Transform1337.translation = new SFVec3f(new float[-0.1984,0.8663,-0.0583]);
let Shape1338 = browser.currentScene.createNode("Shape");
Shape1338.USE = "HAnimJointShape";
Transform1337.children = new MFNode();

Transform1337.children[0] = Shape1338;

HAnimSegment1335.children[1] = Transform1337;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_thumb1'/>
let Shape1339 = browser.currentScene.createNode("Shape");
let LineSet1340 = browser.currentScene.createNode("LineSet");
LineSet1340.vertexCount = new MFInt32(new int[2]);
let Coordinate1341 = browser.currentScene.createNode("Coordinate");
Coordinate1341.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1924,0.8472,-0.0534]);
LineSet1340.coord = Coordinate1341;

let ColorRGBA1342 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1342.USE = "HAnimSegmentLineColorRGBA";
LineSet1340.color = ColorRGBA1342;

Shape1339.geometry = LineSet1340;

HAnimSegment1335.children[2] = Shape1339;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_index0'/>
let Shape1343 = browser.currentScene.createNode("Shape");
let LineSet1344 = browser.currentScene.createNode("LineSet");
LineSet1344.vertexCount = new MFInt32(new int[2]);
let Coordinate1345 = browser.currentScene.createNode("Coordinate");
Coordinate1345.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1983,0.8024,-0.028]);
LineSet1344.coord = Coordinate1345;

let ColorRGBA1346 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1346.USE = "HAnimSegmentLineColorRGBA";
LineSet1344.color = ColorRGBA1346;

Shape1343.geometry = LineSet1344;

HAnimSegment1335.children[3] = Shape1343;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_middle0'/>
let Shape1347 = browser.currentScene.createNode("Shape");
let LineSet1348 = browser.currentScene.createNode("LineSet");
LineSet1348.vertexCount = new MFInt32(new int[2]);
let Coordinate1349 = browser.currentScene.createNode("Coordinate");
Coordinate1349.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1987,0.8029,-0.053]);
LineSet1348.coord = Coordinate1349;

let ColorRGBA1350 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1350.USE = "HAnimSegmentLineColorRGBA";
LineSet1348.color = ColorRGBA1350;

Shape1347.geometry = LineSet1348;

HAnimSegment1335.children[4] = Shape1347;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_ring0'/>
let Shape1351 = browser.currentScene.createNode("Shape");
let LineSet1352 = browser.currentScene.createNode("LineSet");
LineSet1352.vertexCount = new MFInt32(new int[2]);
let Coordinate1353 = browser.currentScene.createNode("Coordinate");
Coordinate1353.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1956,0.8019,-0.0794]);
LineSet1352.coord = Coordinate1353;

let ColorRGBA1354 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1354.USE = "HAnimSegmentLineColorRGBA";
LineSet1352.color = ColorRGBA1354;

Shape1351.geometry = LineSet1352;

HAnimSegment1335.children[5] = Shape1351;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_pinky0'/>
let Shape1355 = browser.currentScene.createNode("Shape");
let LineSet1356 = browser.currentScene.createNode("LineSet");
LineSet1356.vertexCount = new MFInt32(new int[2]);
let Coordinate1357 = browser.currentScene.createNode("Coordinate");
Coordinate1357.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1925,0.8066,-0.1036]);
LineSet1356.coord = Coordinate1357;

let ColorRGBA1358 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1358.USE = "HAnimSegmentLineColorRGBA";
LineSet1356.color = ColorRGBA1358;

Shape1355.geometry = LineSet1356;

HAnimSegment1335.children[6] = Shape1355;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_metacarpal_pha2'/>
let Shape1359 = browser.currentScene.createNode("Shape");
let LineSet1360 = browser.currentScene.createNode("LineSet");
LineSet1360.vertexCount = new MFInt32(new int[2]);
let Coordinate1361 = browser.currentScene.createNode("Coordinate");
Coordinate1361.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1977,0.8169,-0.0177]);
LineSet1360.coord = Coordinate1361;

let ColorRGBA1362 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1362.USE = "HAnimSiteLineColorRGBA";
LineSet1360.color = ColorRGBA1362;

Shape1359.geometry = LineSet1360;

HAnimSegment1335.children[7] = Shape1359;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_ulnar_styloid'/>
let Shape1363 = browser.currentScene.createNode("Shape");
let LineSet1364 = browser.currentScene.createNode("LineSet");
LineSet1364.vertexCount = new MFInt32(new int[2]);
let Coordinate1365 = browser.currentScene.createNode("Coordinate");
Coordinate1365.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.2117,0.8562,-0.0584]);
LineSet1364.coord = Coordinate1365;

let ColorRGBA1366 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1366.USE = "HAnimSiteLineColorRGBA";
LineSet1364.color = ColorRGBA1366;

Shape1363.geometry = LineSet1364;

HAnimSegment1335.children[8] = Shape1363;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_metacarpal_pha5'/>
let Shape1367 = browser.currentScene.createNode("Shape");
let LineSet1368 = browser.currentScene.createNode("LineSet");
LineSet1368.vertexCount = new MFInt32(new int[2]);
let Coordinate1369 = browser.currentScene.createNode("Coordinate");
Coordinate1369.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1929,0.789,-0.1064]);
LineSet1368.coord = Coordinate1369;

let ColorRGBA1370 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1370.USE = "HAnimSiteLineColorRGBA";
LineSet1368.color = ColorRGBA1370;

Shape1367.geometry = LineSet1368;

HAnimSegment1335.children[9] = Shape1367;

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_hand_front_view'/>
let Shape1371 = browser.currentScene.createNode("Shape");
let LineSet1372 = browser.currentScene.createNode("LineSet");
LineSet1372.vertexCount = new MFInt32(new int[2]);
let Coordinate1373 = browser.currentScene.createNode("Coordinate");
Coordinate1373.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.3,0.75,0.45]);
LineSet1372.coord = Coordinate1373;

let ColorRGBA1374 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1374.USE = "HAnimSiteViewpointLineColorRGBA";
LineSet1372.color = ColorRGBA1374;

Shape1371.geometry = LineSet1372;

HAnimSegment1335.children[10] = Shape1371;

let HAnimSite1375 = browser.currentScene.createNode("HAnimSite");
HAnimSite1375.name = "r_metacarpal_pha2_pt";
HAnimSite1375.DEF = "hanim_r_metacarpal_pha2_pt";
HAnimSite1375.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
//HAnimSite visualization shape
let TouchSensor1376 = browser.currentScene.createNode("TouchSensor");
TouchSensor1376.description = "HAnimSite r_metacarpal_pha2";
HAnimSite1375.children = new MFNode();

HAnimSite1375.children[0] = TouchSensor1376;

let Shape1377 = browser.currentScene.createNode("Shape");
Shape1377.USE = "HAnimSiteShape";
HAnimSite1375.children[1] = Shape1377;

HAnimSegment1335.children[11] = HAnimSite1375;

let HAnimSite1378 = browser.currentScene.createNode("HAnimSite");
HAnimSite1378.name = "r_ulnar_styloid_pt";
HAnimSite1378.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite1378.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
//HAnimSite visualization shape
let TouchSensor1379 = browser.currentScene.createNode("TouchSensor");
TouchSensor1379.description = "HAnimSite r_ulnar_styloid";
HAnimSite1378.children = new MFNode();

HAnimSite1378.children[0] = TouchSensor1379;

let Shape1380 = browser.currentScene.createNode("Shape");
Shape1380.USE = "HAnimSiteShape";
HAnimSite1378.children[1] = Shape1380;

HAnimSegment1335.children[12] = HAnimSite1378;

let HAnimSite1381 = browser.currentScene.createNode("HAnimSite");
HAnimSite1381.name = "r_metacarpal_pha5_pt";
HAnimSite1381.DEF = "hanim_r_metacarpal_pha5_pt";
HAnimSite1381.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
//HAnimSite visualization shape
let TouchSensor1382 = browser.currentScene.createNode("TouchSensor");
TouchSensor1382.description = "HAnimSite r_metacarpal_pha5";
HAnimSite1381.children = new MFNode();

HAnimSite1381.children[0] = TouchSensor1382;

let Shape1383 = browser.currentScene.createNode("Shape");
Shape1383.USE = "HAnimSiteShape";
HAnimSite1381.children[1] = Shape1383;

HAnimSegment1335.children[13] = HAnimSite1381;

let HAnimSite1384 = browser.currentScene.createNode("HAnimSite");
HAnimSite1384.name = "r_hand_front_view";
HAnimSite1384.DEF = "hanim_r_hand_front_view";
HAnimSite1384.translation = new SFVec3f(new float[-0.3,0.75,0.45]);
//HAnimSite visualization shape
let TouchSensor1385 = browser.currentScene.createNode("TouchSensor");
TouchSensor1385.description = "HAnimSite r_hand_front_view";
HAnimSite1384.children = new MFNode();

HAnimSite1384.children[0] = TouchSensor1385;

let Shape1386 = browser.currentScene.createNode("Shape");
Shape1386.USE = "HAnimSiteShape";
HAnimSite1384.children[1] = Shape1386;

let Viewpoint1387 = browser.currentScene.createNode("Viewpoint");
Viewpoint1387.DEF = "hanim_r_hand_front_viewpoint";
Viewpoint1387.centerOfRotation = new SFVec3f(new float[0,0.7,0]);
Viewpoint1387.description = "right hand front";
Viewpoint1387.position = new SFVec3f(new float[0,0,0]);
HAnimSite1384.children[2] = Viewpoint1387;

//HAnimSite/Viewpoint visualization shape
let Anchor1388 = browser.currentScene.createNode("Anchor");
Anchor1388.description = "HAnimSite hanim_r_hand_front_view Viewpoint";
Anchor1388.url = new MFString(new java.lang.String["#hanim_r_hand_front_viewpoint"]);
let LOD1389 = browser.currentScene.createNode("LOD");
LOD1389.forceTransitions = True;
LOD1389.range = new MFFloat(new float[0.04]);
let WorldInfo1390 = browser.currentScene.createNode("WorldInfo");
WorldInfo1390.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1389.children = new MFNode();

LOD1389.children[0] = WorldInfo1390;

let Shape1391 = browser.currentScene.createNode("Shape");
Shape1391.USE = "HAnimSiteViewpointShape";
LOD1389.children[1] = Shape1391;

Anchor1388.children = new MFNode();

Anchor1388.children[0] = LOD1389;

HAnimSite1384.children[3] = Anchor1388;

HAnimSegment1335.children[14] = HAnimSite1384;

HAnimJoint1334.children = new MFNode();

HAnimJoint1334.children[0] = HAnimSegment1335;

let HAnimJoint1392 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1392.name = "r_thumb1";
HAnimJoint1392.DEF = "hanim_r_thumb1";
HAnimJoint1392.center = new SFVec3f(new float[-0.1924,0.8472,-0.0534]);
HAnimJoint1392.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1392.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1393 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1393.name = "r_thumb_metacarpal";
HAnimSegment1393.DEF = "hanim_r_thumb_metacarpal";
//<HAnimJoint name='r_thumb1'/> visualization sphere is placed within <HAnimSegment name='r_thumb_metacarpal'/>
let TouchSensor1394 = browser.currentScene.createNode("TouchSensor");
TouchSensor1394.description = "HAnimJoint r_thumb1, HAnimSegment r_thumb_metacarpal";
HAnimSegment1393.children = new MFNode();

HAnimSegment1393.children[0] = TouchSensor1394;

let Transform1395 = browser.currentScene.createNode("Transform");
Transform1395.translation = new SFVec3f(new float[-0.1924,0.8472,-0.0534]);
let Shape1396 = browser.currentScene.createNode("Shape");
Shape1396.USE = "HAnimJointShape";
Transform1395.children = new MFNode();

Transform1395.children[0] = Shape1396;

HAnimSegment1393.children[1] = Transform1395;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_thumb1'/> to <HAnimJoint name='r_thumb2'/>
let Shape1397 = browser.currentScene.createNode("Shape");
let LineSet1398 = browser.currentScene.createNode("LineSet");
LineSet1398.vertexCount = new MFInt32(new int[2]);
let Coordinate1399 = browser.currentScene.createNode("Coordinate");
Coordinate1399.point = new MFVec3f(new float[-0.1924,0.8472,-0.0534,-0.1951,0.8226,0.0246]);
LineSet1398.coord = Coordinate1399;

let ColorRGBA1400 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1400.USE = "HAnimSegmentLineColorRGBA";
LineSet1398.color = ColorRGBA1400;

Shape1397.geometry = LineSet1398;

HAnimSegment1393.children[2] = Shape1397;

HAnimJoint1392.children = new MFNode();

HAnimJoint1392.children[0] = HAnimSegment1393;

let HAnimJoint1401 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1401.name = "r_thumb2";
HAnimJoint1401.DEF = "hanim_r_thumb2";
HAnimJoint1401.center = new SFVec3f(new float[-0.1951,0.8226,0.0246]);
HAnimJoint1401.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1401.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1402 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1402.name = "r_thumb_proximal";
HAnimSegment1402.DEF = "hanim_r_thumb_proximal";
//<HAnimJoint name='r_thumb2'/> visualization sphere is placed within <HAnimSegment name='r_thumb_proximal'/>
let TouchSensor1403 = browser.currentScene.createNode("TouchSensor");
TouchSensor1403.description = "HAnimJoint r_thumb2, HAnimSegment r_thumb_proximal";
HAnimSegment1402.children = new MFNode();

HAnimSegment1402.children[0] = TouchSensor1403;

let Transform1404 = browser.currentScene.createNode("Transform");
Transform1404.translation = new SFVec3f(new float[-0.1951,0.8226,0.0246]);
let Shape1405 = browser.currentScene.createNode("Shape");
Shape1405.USE = "HAnimJointShape";
Transform1404.children = new MFNode();

Transform1404.children[0] = Shape1405;

HAnimSegment1402.children[1] = Transform1404;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_thumb2'/> to <HAnimJoint name='r_thumb3'/>
let Shape1406 = browser.currentScene.createNode("Shape");
let LineSet1407 = browser.currentScene.createNode("LineSet");
LineSet1407.vertexCount = new MFInt32(new int[2]);
let Coordinate1408 = browser.currentScene.createNode("Coordinate");
Coordinate1408.point = new MFVec3f(new float[-0.1951,0.8226,0.0246,-0.1955,0.8159,0.0464]);
LineSet1407.coord = Coordinate1408;

let ColorRGBA1409 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1409.USE = "HAnimSegmentLineColorRGBA";
LineSet1407.color = ColorRGBA1409;

Shape1406.geometry = LineSet1407;

HAnimSegment1402.children[2] = Shape1406;

HAnimJoint1401.children = new MFNode();

HAnimJoint1401.children[0] = HAnimSegment1402;

let HAnimJoint1410 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1410.name = "r_thumb3";
HAnimJoint1410.DEF = "hanim_r_thumb3";
HAnimJoint1410.center = new SFVec3f(new float[-0.1955,0.8159,0.0464]);
HAnimJoint1410.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1410.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1411 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1411.name = "r_thumb_distal";
HAnimSegment1411.DEF = "hanim_r_thumb_distal";
//<HAnimJoint name='r_thumb3'/> visualization sphere is placed within <HAnimSegment name='r_thumb_distal'/>
let TouchSensor1412 = browser.currentScene.createNode("TouchSensor");
TouchSensor1412.description = "HAnimJoint r_thumb3, HAnimSegment r_thumb_distal";
HAnimSegment1411.children = new MFNode();

HAnimSegment1411.children[0] = TouchSensor1412;

let Transform1413 = browser.currentScene.createNode("Transform");
Transform1413.translation = new SFVec3f(new float[-0.1955,0.8159,0.0464]);
let Shape1414 = browser.currentScene.createNode("Shape");
Shape1414.USE = "HAnimJointShape";
Transform1413.children = new MFNode();

Transform1413.children[0] = Shape1414;

HAnimSegment1411.children[1] = Transform1413;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_thumb3'/> to <HAnimSite name='r_thumb_distal_tip'/>
let Shape1415 = browser.currentScene.createNode("Shape");
let LineSet1416 = browser.currentScene.createNode("LineSet");
LineSet1416.vertexCount = new MFInt32(new int[2]);
let Coordinate1417 = browser.currentScene.createNode("Coordinate");
Coordinate1417.point = new MFVec3f(new float[-0.1955,0.8159,0.0464,-0.1869,0.809,0.082]);
LineSet1416.coord = Coordinate1417;

let ColorRGBA1418 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1418.USE = "HAnimSiteLineColorRGBA";
LineSet1416.color = ColorRGBA1418;

Shape1415.geometry = LineSet1416;

HAnimSegment1411.children[2] = Shape1415;

let HAnimSite1419 = browser.currentScene.createNode("HAnimSite");
HAnimSite1419.name = "r_thumb_distal_tip";
HAnimSite1419.DEF = "hanim_r_thumb_distal_tip";
HAnimSite1419.translation = new SFVec3f(new float[-0.1869,0.809,0.082]);
//HAnimSite visualization shape
let TouchSensor1420 = browser.currentScene.createNode("TouchSensor");
TouchSensor1420.description = "HAnimSite r_thumb_distal_tip";
HAnimSite1419.children = new MFNode();

HAnimSite1419.children[0] = TouchSensor1420;

let Shape1421 = browser.currentScene.createNode("Shape");
Shape1421.USE = "HAnimSiteShape";
HAnimSite1419.children[1] = Shape1421;

HAnimSegment1411.children[3] = HAnimSite1419;

HAnimJoint1410.children = new MFNode();

HAnimJoint1410.children[0] = HAnimSegment1411;

HAnimJoint1401.children[1] = HAnimJoint1410;

HAnimJoint1392.children[1] = HAnimJoint1401;

HAnimJoint1334.children[1] = HAnimJoint1392;

let HAnimJoint1422 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1422.name = "r_index0";
HAnimJoint1422.DEF = "hanim_r_index0";
HAnimJoint1422.center = new SFVec3f(new float[-0.1983,0.8024,-0.028]);
HAnimJoint1422.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1422.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1423 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1423.name = "r_index_metacarpal";
HAnimSegment1423.DEF = "hanim_r_index_metacarpal";
//<HAnimJoint name='r_index0'/> visualization sphere is placed within <HAnimSegment name='r_index_metacarpal'/>
let TouchSensor1424 = browser.currentScene.createNode("TouchSensor");
TouchSensor1424.description = "HAnimJoint r_index0, HAnimSegment r_index_metacarpal";
HAnimSegment1423.children = new MFNode();

HAnimSegment1423.children[0] = TouchSensor1424;

let Transform1425 = browser.currentScene.createNode("Transform");
Transform1425.translation = new SFVec3f(new float[-0.1983,0.8024,-0.028]);
let Shape1426 = browser.currentScene.createNode("Shape");
Shape1426.USE = "HAnimJointShape";
Transform1425.children = new MFNode();

Transform1425.children[0] = Shape1426;

HAnimSegment1423.children[1] = Transform1425;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_index0'/> to <HAnimJoint name='r_index1'/>
let Shape1427 = browser.currentScene.createNode("Shape");
let LineSet1428 = browser.currentScene.createNode("LineSet");
LineSet1428.vertexCount = new MFInt32(new int[2]);
let Coordinate1429 = browser.currentScene.createNode("Coordinate");
Coordinate1429.point = new MFVec3f(new float[-0.1983,0.8024,-0.028,-0.1983,0.7815,-0.028]);
LineSet1428.coord = Coordinate1429;

let ColorRGBA1430 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1430.USE = "HAnimSegmentLineColorRGBA";
LineSet1428.color = ColorRGBA1430;

Shape1427.geometry = LineSet1428;

HAnimSegment1423.children[2] = Shape1427;

HAnimJoint1422.children = new MFNode();

HAnimJoint1422.children[0] = HAnimSegment1423;

let HAnimJoint1431 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1431.name = "r_index1";
HAnimJoint1431.DEF = "hanim_r_index1";
HAnimJoint1431.center = new SFVec3f(new float[-0.1983,0.7815,-0.028]);
HAnimJoint1431.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1431.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1432 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1432.name = "r_index_proximal";
HAnimSegment1432.DEF = "hanim_r_index_proximal";
//<HAnimJoint name='r_index1'/> visualization sphere is placed within <HAnimSegment name='r_index_proximal'/>
let TouchSensor1433 = browser.currentScene.createNode("TouchSensor");
TouchSensor1433.description = "HAnimJoint r_index1, HAnimSegment r_index_proximal";
HAnimSegment1432.children = new MFNode();

HAnimSegment1432.children[0] = TouchSensor1433;

let Transform1434 = browser.currentScene.createNode("Transform");
Transform1434.translation = new SFVec3f(new float[-0.1983,0.7815,-0.028]);
let Shape1435 = browser.currentScene.createNode("Shape");
Shape1435.USE = "HAnimJointShape";
Transform1434.children = new MFNode();

Transform1434.children[0] = Shape1435;

HAnimSegment1432.children[1] = Transform1434;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_index1'/> to <HAnimJoint name='r_index2'/>
let Shape1436 = browser.currentScene.createNode("Shape");
let LineSet1437 = browser.currentScene.createNode("LineSet");
LineSet1437.vertexCount = new MFInt32(new int[2]);
let Coordinate1438 = browser.currentScene.createNode("Coordinate");
Coordinate1438.point = new MFVec3f(new float[-0.1983,0.7815,-0.028,-0.2017,0.7363,-0.0248]);
LineSet1437.coord = Coordinate1438;

let ColorRGBA1439 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1439.USE = "HAnimSegmentLineColorRGBA";
LineSet1437.color = ColorRGBA1439;

Shape1436.geometry = LineSet1437;

HAnimSegment1432.children[2] = Shape1436;

HAnimJoint1431.children = new MFNode();

HAnimJoint1431.children[0] = HAnimSegment1432;

let HAnimJoint1440 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1440.name = "r_index2";
HAnimJoint1440.DEF = "hanim_r_index2";
HAnimJoint1440.center = new SFVec3f(new float[-0.2017,0.7363,-0.0248]);
HAnimJoint1440.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1440.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1441 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1441.name = "r_index_middle";
HAnimSegment1441.DEF = "hanim_r_index_middle";
//<HAnimJoint name='r_index2'/> visualization sphere is placed within <HAnimSegment name='r_index_middle'/>
let TouchSensor1442 = browser.currentScene.createNode("TouchSensor");
TouchSensor1442.description = "HAnimJoint r_index2, HAnimSegment r_index_middle";
HAnimSegment1441.children = new MFNode();

HAnimSegment1441.children[0] = TouchSensor1442;

let Transform1443 = browser.currentScene.createNode("Transform");
Transform1443.translation = new SFVec3f(new float[-0.2017,0.7363,-0.0248]);
let Shape1444 = browser.currentScene.createNode("Shape");
Shape1444.USE = "HAnimJointShape";
Transform1443.children = new MFNode();

Transform1443.children[0] = Shape1444;

HAnimSegment1441.children[1] = Transform1443;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_index2'/> to <HAnimJoint name='r_index3'/>
let Shape1445 = browser.currentScene.createNode("Shape");
let LineSet1446 = browser.currentScene.createNode("LineSet");
LineSet1446.vertexCount = new MFInt32(new int[2]);
let Coordinate1447 = browser.currentScene.createNode("Coordinate");
Coordinate1447.point = new MFVec3f(new float[-0.2017,0.7363,-0.0248,-0.2028,0.7139,-0.0236]);
LineSet1446.coord = Coordinate1447;

let ColorRGBA1448 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1448.USE = "HAnimSegmentLineColorRGBA";
LineSet1446.color = ColorRGBA1448;

Shape1445.geometry = LineSet1446;

HAnimSegment1441.children[2] = Shape1445;

HAnimJoint1440.children = new MFNode();

HAnimJoint1440.children[0] = HAnimSegment1441;

let HAnimJoint1449 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1449.name = "r_index3";
HAnimJoint1449.DEF = "hanim_r_index3";
HAnimJoint1449.center = new SFVec3f(new float[-0.2028,0.7139,-0.0236]);
HAnimJoint1449.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1449.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1450 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1450.name = "r_index_distal";
HAnimSegment1450.DEF = "hanim_r_index_distal";
//<HAnimJoint name='r_index3'/> visualization sphere is placed within <HAnimSegment name='r_index_distal'/>
let TouchSensor1451 = browser.currentScene.createNode("TouchSensor");
TouchSensor1451.description = "HAnimJoint r_index3, HAnimSegment r_index_distal";
HAnimSegment1450.children = new MFNode();

HAnimSegment1450.children[0] = TouchSensor1451;

let Transform1452 = browser.currentScene.createNode("Transform");
Transform1452.translation = new SFVec3f(new float[-0.2028,0.7139,-0.0236]);
let Shape1453 = browser.currentScene.createNode("Shape");
Shape1453.USE = "HAnimJointShape";
Transform1452.children = new MFNode();

Transform1452.children[0] = Shape1453;

HAnimSegment1450.children[1] = Transform1452;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_index_distal_tip'/>
let Shape1454 = browser.currentScene.createNode("Shape");
let LineSet1455 = browser.currentScene.createNode("LineSet");
LineSet1455.vertexCount = new MFInt32(new int[2]);
let Coordinate1456 = browser.currentScene.createNode("Coordinate");
Coordinate1456.point = new MFVec3f(new float[-0.2028,0.7139,-0.0236,-0.198,0.6883,-0.018]);
LineSet1455.coord = Coordinate1456;

let ColorRGBA1457 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1457.USE = "HAnimSiteLineColorRGBA";
LineSet1455.color = ColorRGBA1457;

Shape1454.geometry = LineSet1455;

HAnimSegment1450.children[2] = Shape1454;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_dactylion'/>
let Shape1458 = browser.currentScene.createNode("Shape");
let LineSet1459 = browser.currentScene.createNode("LineSet");
LineSet1459.vertexCount = new MFInt32(new int[2]);
let Coordinate1460 = browser.currentScene.createNode("Coordinate");
Coordinate1460.point = new MFVec3f(new float[-0.2028,0.7139,-0.0236,-0.1941,0.6772,-0.0423]);
LineSet1459.coord = Coordinate1460;

let ColorRGBA1461 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1461.USE = "HAnimSiteLineColorRGBA";
LineSet1459.color = ColorRGBA1461;

Shape1458.geometry = LineSet1459;

HAnimSegment1450.children[3] = Shape1458;

let HAnimSite1462 = browser.currentScene.createNode("HAnimSite");
HAnimSite1462.name = "r_index_distal_tip";
HAnimSite1462.DEF = "hanim_r_index_distal_tip";
HAnimSite1462.translation = new SFVec3f(new float[-0.198,0.6883,-0.018]);
//HAnimSite visualization shape
let TouchSensor1463 = browser.currentScene.createNode("TouchSensor");
TouchSensor1463.description = "HAnimSite r_index_distal_tip";
HAnimSite1462.children = new MFNode();

HAnimSite1462.children[0] = TouchSensor1463;

let Shape1464 = browser.currentScene.createNode("Shape");
Shape1464.USE = "HAnimSiteShape";
HAnimSite1462.children[1] = Shape1464;

HAnimSegment1450.children[4] = HAnimSite1462;

let HAnimSite1465 = browser.currentScene.createNode("HAnimSite");
HAnimSite1465.name = "r_dactylion_pt";
HAnimSite1465.DEF = "hanim_r_dactylion_pt";
HAnimSite1465.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
//HAnimSite visualization shape
let TouchSensor1466 = browser.currentScene.createNode("TouchSensor");
TouchSensor1466.description = "HAnimSite r_dactylion";
HAnimSite1465.children = new MFNode();

HAnimSite1465.children[0] = TouchSensor1466;

let Shape1467 = browser.currentScene.createNode("Shape");
Shape1467.USE = "HAnimSiteShape";
HAnimSite1465.children[1] = Shape1467;

HAnimSegment1450.children[5] = HAnimSite1465;

HAnimJoint1449.children = new MFNode();

HAnimJoint1449.children[0] = HAnimSegment1450;

HAnimJoint1440.children[1] = HAnimJoint1449;

HAnimJoint1431.children[1] = HAnimJoint1440;

HAnimJoint1422.children[1] = HAnimJoint1431;

HAnimJoint1334.children[2] = HAnimJoint1422;

let HAnimJoint1468 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1468.name = "r_middle0";
HAnimJoint1468.DEF = "hanim_r_middle0";
HAnimJoint1468.center = new SFVec3f(new float[-0.1987,0.8029,-0.053]);
HAnimJoint1468.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1468.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1469 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1469.name = "r_middle_metacarpal";
HAnimSegment1469.DEF = "hanim_r_middle_metacarpal";
//<HAnimJoint name='r_middle0'/> visualization sphere is placed within <HAnimSegment name='r_middle_metacarpal'/>
let TouchSensor1470 = browser.currentScene.createNode("TouchSensor");
TouchSensor1470.description = "HAnimJoint r_middle0, HAnimSegment r_middle_metacarpal";
HAnimSegment1469.children = new MFNode();

HAnimSegment1469.children[0] = TouchSensor1470;

let Transform1471 = browser.currentScene.createNode("Transform");
Transform1471.translation = new SFVec3f(new float[-0.1987,0.8029,-0.053]);
let Shape1472 = browser.currentScene.createNode("Shape");
Shape1472.USE = "HAnimJointShape";
Transform1471.children = new MFNode();

Transform1471.children[0] = Shape1472;

HAnimSegment1469.children[1] = Transform1471;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle0'/> to <HAnimJoint name='r_middle1'/>
let Shape1473 = browser.currentScene.createNode("Shape");
let LineSet1474 = browser.currentScene.createNode("LineSet");
LineSet1474.vertexCount = new MFInt32(new int[2]);
let Coordinate1475 = browser.currentScene.createNode("Coordinate");
Coordinate1475.point = new MFVec3f(new float[-0.1987,0.8029,-0.053,-0.1987,0.7818,-0.053]);
LineSet1474.coord = Coordinate1475;

let ColorRGBA1476 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1476.USE = "HAnimSegmentLineColorRGBA";
LineSet1474.color = ColorRGBA1476;

Shape1473.geometry = LineSet1474;

HAnimSegment1469.children[2] = Shape1473;

HAnimJoint1468.children = new MFNode();

HAnimJoint1468.children[0] = HAnimSegment1469;

let HAnimJoint1477 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1477.name = "r_middle1";
HAnimJoint1477.DEF = "hanim_r_middle1";
HAnimJoint1477.center = new SFVec3f(new float[-0.1987,0.7818,-0.053]);
HAnimJoint1477.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1477.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1478 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1478.name = "r_middle_proximal";
HAnimSegment1478.DEF = "hanim_r_middle_proximal";
//<HAnimJoint name='r_middle1'/> visualization sphere is placed within <HAnimSegment name='r_middle_proximal'/>
let TouchSensor1479 = browser.currentScene.createNode("TouchSensor");
TouchSensor1479.description = "HAnimJoint r_middle1, HAnimSegment r_middle_proximal";
HAnimSegment1478.children = new MFNode();

HAnimSegment1478.children[0] = TouchSensor1479;

let Transform1480 = browser.currentScene.createNode("Transform");
Transform1480.translation = new SFVec3f(new float[-0.1987,0.7818,-0.053]);
let Shape1481 = browser.currentScene.createNode("Shape");
Shape1481.USE = "HAnimJointShape";
Transform1480.children = new MFNode();

Transform1480.children[0] = Shape1481;

HAnimSegment1478.children[1] = Transform1480;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle1'/> to <HAnimJoint name='r_middle2'/>
let Shape1482 = browser.currentScene.createNode("Shape");
let LineSet1483 = browser.currentScene.createNode("LineSet");
LineSet1483.vertexCount = new MFInt32(new int[2]);
let Coordinate1484 = browser.currentScene.createNode("Coordinate");
Coordinate1484.point = new MFVec3f(new float[-0.1987,0.7818,-0.053,-0.2013,0.7273,-0.0503]);
LineSet1483.coord = Coordinate1484;

let ColorRGBA1485 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1485.USE = "HAnimSegmentLineColorRGBA";
LineSet1483.color = ColorRGBA1485;

Shape1482.geometry = LineSet1483;

HAnimSegment1478.children[2] = Shape1482;

HAnimJoint1477.children = new MFNode();

HAnimJoint1477.children[0] = HAnimSegment1478;

let HAnimJoint1486 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1486.name = "r_middle2";
HAnimJoint1486.DEF = "hanim_r_middle2";
HAnimJoint1486.center = new SFVec3f(new float[-0.2013,0.7273,-0.0503]);
HAnimJoint1486.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1486.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1487 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1487.name = "r_middle_middle";
HAnimSegment1487.DEF = "hanim_r_middle_middle";
//<HAnimJoint name='r_middle2'/> visualization sphere is placed within <HAnimSegment name='r_middle_middle'/>
let TouchSensor1488 = browser.currentScene.createNode("TouchSensor");
TouchSensor1488.description = "HAnimJoint r_middle2, HAnimSegment r_middle_middle";
HAnimSegment1487.children = new MFNode();

HAnimSegment1487.children[0] = TouchSensor1488;

let Transform1489 = browser.currentScene.createNode("Transform");
Transform1489.translation = new SFVec3f(new float[-0.2013,0.7273,-0.0503]);
let Shape1490 = browser.currentScene.createNode("Shape");
Shape1490.USE = "HAnimJointShape";
Transform1489.children = new MFNode();

Transform1489.children[0] = Shape1490;

HAnimSegment1487.children[1] = Transform1489;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle2'/> to <HAnimJoint name='r_middle3'/>
let Shape1491 = browser.currentScene.createNode("Shape");
let LineSet1492 = browser.currentScene.createNode("LineSet");
LineSet1492.vertexCount = new MFInt32(new int[2]);
let Coordinate1493 = browser.currentScene.createNode("Coordinate");
Coordinate1493.point = new MFVec3f(new float[-0.2013,0.7273,-0.0503,-0.2026,0.7011,-0.0494]);
LineSet1492.coord = Coordinate1493;

let ColorRGBA1494 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1494.USE = "HAnimSegmentLineColorRGBA";
LineSet1492.color = ColorRGBA1494;

Shape1491.geometry = LineSet1492;

HAnimSegment1487.children[2] = Shape1491;

HAnimJoint1486.children = new MFNode();

HAnimJoint1486.children[0] = HAnimSegment1487;

let HAnimJoint1495 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1495.name = "r_middle3";
HAnimJoint1495.DEF = "hanim_r_middle3";
HAnimJoint1495.center = new SFVec3f(new float[-0.2026,0.7011,-0.0494]);
HAnimJoint1495.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1495.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1496 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1496.name = "r_middle_distal";
HAnimSegment1496.DEF = "hanim_r_middle_distal";
//<HAnimJoint name='r_middle3'/> visualization sphere is placed within <HAnimSegment name='r_middle_distal'/>
let TouchSensor1497 = browser.currentScene.createNode("TouchSensor");
TouchSensor1497.description = "HAnimJoint r_middle3, HAnimSegment r_middle_distal";
HAnimSegment1496.children = new MFNode();

HAnimSegment1496.children[0] = TouchSensor1497;

let Transform1498 = browser.currentScene.createNode("Transform");
Transform1498.translation = new SFVec3f(new float[-0.2026,0.7011,-0.0494]);
let Shape1499 = browser.currentScene.createNode("Shape");
Shape1499.USE = "HAnimJointShape";
Transform1498.children = new MFNode();

Transform1498.children[0] = Shape1499;

HAnimSegment1496.children[1] = Transform1498;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_middle3'/> to <HAnimSite name='r_middle_distal_tip'/>
let Shape1500 = browser.currentScene.createNode("Shape");
let LineSet1501 = browser.currentScene.createNode("LineSet");
LineSet1501.vertexCount = new MFInt32(new int[2]);
let Coordinate1502 = browser.currentScene.createNode("Coordinate");
Coordinate1502.point = new MFVec3f(new float[-0.2026,0.7011,-0.0494,-0.1969,0.6758,-0.0427]);
LineSet1501.coord = Coordinate1502;

let ColorRGBA1503 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1503.USE = "HAnimSiteLineColorRGBA";
LineSet1501.color = ColorRGBA1503;

Shape1500.geometry = LineSet1501;

HAnimSegment1496.children[2] = Shape1500;

let HAnimSite1504 = browser.currentScene.createNode("HAnimSite");
HAnimSite1504.name = "r_middle_distal_tip";
HAnimSite1504.DEF = "hanim_r_middle_distal_tip";
HAnimSite1504.translation = new SFVec3f(new float[-0.1969,0.6758,-0.0427]);
//HAnimSite visualization shape
let TouchSensor1505 = browser.currentScene.createNode("TouchSensor");
TouchSensor1505.description = "HAnimSite r_middle_distal_tip";
HAnimSite1504.children = new MFNode();

HAnimSite1504.children[0] = TouchSensor1505;

let Shape1506 = browser.currentScene.createNode("Shape");
Shape1506.USE = "HAnimSiteShape";
HAnimSite1504.children[1] = Shape1506;

HAnimSegment1496.children[3] = HAnimSite1504;

HAnimJoint1495.children = new MFNode();

HAnimJoint1495.children[0] = HAnimSegment1496;

HAnimJoint1486.children[1] = HAnimJoint1495;

HAnimJoint1477.children[1] = HAnimJoint1486;

HAnimJoint1468.children[1] = HAnimJoint1477;

HAnimJoint1334.children[3] = HAnimJoint1468;

let HAnimJoint1507 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1507.name = "r_ring0";
HAnimJoint1507.DEF = "hanim_r_ring0";
HAnimJoint1507.center = new SFVec3f(new float[-0.1956,0.8019,-0.0794]);
HAnimJoint1507.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1507.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1508 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1508.name = "r_ring_metacarpal";
HAnimSegment1508.DEF = "hanim_r_ring_metacarpal";
//<HAnimJoint name='r_ring0'/> visualization sphere is placed within <HAnimSegment name='r_ring_metacarpal'/>
let TouchSensor1509 = browser.currentScene.createNode("TouchSensor");
TouchSensor1509.description = "HAnimJoint r_ring0, HAnimSegment r_ring_metacarpal";
HAnimSegment1508.children = new MFNode();

HAnimSegment1508.children[0] = TouchSensor1509;

let Transform1510 = browser.currentScene.createNode("Transform");
Transform1510.translation = new SFVec3f(new float[-0.1956,0.8019,-0.0794]);
let Shape1511 = browser.currentScene.createNode("Shape");
Shape1511.USE = "HAnimJointShape";
Transform1510.children = new MFNode();

Transform1510.children[0] = Shape1511;

HAnimSegment1508.children[1] = Transform1510;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring0'/> to <HAnimJoint name='r_ring1'/>
let Shape1512 = browser.currentScene.createNode("Shape");
let LineSet1513 = browser.currentScene.createNode("LineSet");
LineSet1513.vertexCount = new MFInt32(new int[2]);
let Coordinate1514 = browser.currentScene.createNode("Coordinate");
Coordinate1514.point = new MFVec3f(new float[-0.1956,0.8019,-0.0794,-0.1956,0.7815,-0.0794]);
LineSet1513.coord = Coordinate1514;

let ColorRGBA1515 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1515.USE = "HAnimSegmentLineColorRGBA";
LineSet1513.color = ColorRGBA1515;

Shape1512.geometry = LineSet1513;

HAnimSegment1508.children[2] = Shape1512;

HAnimJoint1507.children = new MFNode();

HAnimJoint1507.children[0] = HAnimSegment1508;

let HAnimJoint1516 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1516.name = "r_ring1";
HAnimJoint1516.DEF = "hanim_r_ring1";
HAnimJoint1516.center = new SFVec3f(new float[-0.1956,0.7815,-0.0794]);
HAnimJoint1516.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1516.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1517 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1517.name = "r_ring_proximal";
HAnimSegment1517.DEF = "hanim_r_ring_proximal";
//<HAnimJoint name='r_ring1'/> visualization sphere is placed within <HAnimSegment name='r_ring_proximal'/>
let TouchSensor1518 = browser.currentScene.createNode("TouchSensor");
TouchSensor1518.description = "HAnimJoint r_ring1, HAnimSegment r_ring_proximal";
HAnimSegment1517.children = new MFNode();

HAnimSegment1517.children[0] = TouchSensor1518;

let Transform1519 = browser.currentScene.createNode("Transform");
Transform1519.translation = new SFVec3f(new float[-0.1956,0.7815,-0.0794]);
let Shape1520 = browser.currentScene.createNode("Shape");
Shape1520.USE = "HAnimJointShape";
Transform1519.children = new MFNode();

Transform1519.children[0] = Shape1520;

HAnimSegment1517.children[1] = Transform1519;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring1'/> to <HAnimJoint name='r_ring2'/>
let Shape1521 = browser.currentScene.createNode("Shape");
let LineSet1522 = browser.currentScene.createNode("LineSet");
LineSet1522.vertexCount = new MFInt32(new int[2]);
let Coordinate1523 = browser.currentScene.createNode("Coordinate");
Coordinate1523.point = new MFVec3f(new float[-0.1956,0.7815,-0.0794,-0.1973,0.7287,-0.0777]);
LineSet1522.coord = Coordinate1523;

let ColorRGBA1524 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1524.USE = "HAnimSegmentLineColorRGBA";
LineSet1522.color = ColorRGBA1524;

Shape1521.geometry = LineSet1522;

HAnimSegment1517.children[2] = Shape1521;

HAnimJoint1516.children = new MFNode();

HAnimJoint1516.children[0] = HAnimSegment1517;

let HAnimJoint1525 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1525.name = "r_ring2";
HAnimJoint1525.DEF = "hanim_r_ring2";
HAnimJoint1525.center = new SFVec3f(new float[-0.1973,0.7287,-0.0777]);
HAnimJoint1525.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1525.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1526 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1526.name = "r_ring_middle";
HAnimSegment1526.DEF = "hanim_r_ring_middle";
//<HAnimJoint name='r_ring2'/> visualization sphere is placed within <HAnimSegment name='r_ring_middle'/>
let TouchSensor1527 = browser.currentScene.createNode("TouchSensor");
TouchSensor1527.description = "HAnimJoint r_ring2, HAnimSegment r_ring_middle";
HAnimSegment1526.children = new MFNode();

HAnimSegment1526.children[0] = TouchSensor1527;

let Transform1528 = browser.currentScene.createNode("Transform");
Transform1528.translation = new SFVec3f(new float[-0.1973,0.7287,-0.0777]);
let Shape1529 = browser.currentScene.createNode("Shape");
Shape1529.USE = "HAnimJointShape";
Transform1528.children = new MFNode();

Transform1528.children[0] = Shape1529;

HAnimSegment1526.children[1] = Transform1528;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring2'/> to <HAnimJoint name='r_ring3'/>
let Shape1530 = browser.currentScene.createNode("Shape");
let LineSet1531 = browser.currentScene.createNode("LineSet");
LineSet1531.vertexCount = new MFInt32(new int[2]);
let Coordinate1532 = browser.currentScene.createNode("Coordinate");
Coordinate1532.point = new MFVec3f(new float[-0.1973,0.7287,-0.0777,-0.1983,0.7045,-0.0767]);
LineSet1531.coord = Coordinate1532;

let ColorRGBA1533 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1533.USE = "HAnimSegmentLineColorRGBA";
LineSet1531.color = ColorRGBA1533;

Shape1530.geometry = LineSet1531;

HAnimSegment1526.children[2] = Shape1530;

HAnimJoint1525.children = new MFNode();

HAnimJoint1525.children[0] = HAnimSegment1526;

let HAnimJoint1534 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1534.name = "r_ring3";
HAnimJoint1534.DEF = "hanim_r_ring3";
HAnimJoint1534.center = new SFVec3f(new float[-0.1983,0.7045,-0.0767]);
HAnimJoint1534.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1534.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1535 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1535.name = "r_ring_distal";
HAnimSegment1535.DEF = "hanim_r_ring_distal";
//<HAnimJoint name='r_ring3'/> visualization sphere is placed within <HAnimSegment name='r_ring_distal'/>
let TouchSensor1536 = browser.currentScene.createNode("TouchSensor");
TouchSensor1536.description = "HAnimJoint r_ring3, HAnimSegment r_ring_distal";
HAnimSegment1535.children = new MFNode();

HAnimSegment1535.children[0] = TouchSensor1536;

let Transform1537 = browser.currentScene.createNode("Transform");
Transform1537.translation = new SFVec3f(new float[-0.1983,0.7045,-0.0767]);
let Shape1538 = browser.currentScene.createNode("Shape");
Shape1538.USE = "HAnimJointShape";
Transform1537.children = new MFNode();

Transform1537.children[0] = Shape1538;

HAnimSegment1535.children[1] = Transform1537;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ring3'/> to <HAnimSite name='r_ring_distal_tip'/>
let Shape1539 = browser.currentScene.createNode("Shape");
let LineSet1540 = browser.currentScene.createNode("LineSet");
LineSet1540.vertexCount = new MFInt32(new int[2]);
let Coordinate1541 = browser.currentScene.createNode("Coordinate");
Coordinate1541.point = new MFVec3f(new float[-0.1983,0.7045,-0.0767,-0.1934,0.6778,-0.0693]);
LineSet1540.coord = Coordinate1541;

let ColorRGBA1542 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1542.USE = "HAnimSiteLineColorRGBA";
LineSet1540.color = ColorRGBA1542;

Shape1539.geometry = LineSet1540;

HAnimSegment1535.children[2] = Shape1539;

let HAnimSite1543 = browser.currentScene.createNode("HAnimSite");
HAnimSite1543.name = "r_ring_distal_tip";
HAnimSite1543.DEF = "hanim_r_ring_distal_tip";
HAnimSite1543.translation = new SFVec3f(new float[-0.1934,0.6778,-0.0693]);
//HAnimSite visualization shape
let TouchSensor1544 = browser.currentScene.createNode("TouchSensor");
TouchSensor1544.description = "HAnimSite r_ring_distal_tip";
HAnimSite1543.children = new MFNode();

HAnimSite1543.children[0] = TouchSensor1544;

let Shape1545 = browser.currentScene.createNode("Shape");
Shape1545.USE = "HAnimSiteShape";
HAnimSite1543.children[1] = Shape1545;

HAnimSegment1535.children[3] = HAnimSite1543;

HAnimJoint1534.children = new MFNode();

HAnimJoint1534.children[0] = HAnimSegment1535;

HAnimJoint1525.children[1] = HAnimJoint1534;

HAnimJoint1516.children[1] = HAnimJoint1525;

HAnimJoint1507.children[1] = HAnimJoint1516;

HAnimJoint1334.children[4] = HAnimJoint1507;

let HAnimJoint1546 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1546.name = "r_pinky0";
HAnimJoint1546.DEF = "hanim_r_pinky0";
HAnimJoint1546.center = new SFVec3f(new float[-0.1925,0.8066,-0.1036]);
HAnimJoint1546.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1546.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1547 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1547.name = "r_pinky_metacarpal";
HAnimSegment1547.DEF = "hanim_r_pinky_metacarpal";
//<HAnimJoint name='r_pinky0'/> visualization sphere is placed within <HAnimSegment name='r_pinky_metacarpal'/>
let TouchSensor1548 = browser.currentScene.createNode("TouchSensor");
TouchSensor1548.description = "HAnimJoint r_pinky0, HAnimSegment r_pinky_metacarpal";
HAnimSegment1547.children = new MFNode();

HAnimSegment1547.children[0] = TouchSensor1548;

let Transform1549 = browser.currentScene.createNode("Transform");
Transform1549.translation = new SFVec3f(new float[-0.1925,0.8066,-0.1036]);
let Shape1550 = browser.currentScene.createNode("Shape");
Shape1550.USE = "HAnimJointShape";
Transform1549.children = new MFNode();

Transform1549.children[0] = Shape1550;

HAnimSegment1547.children[1] = Transform1549;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky0'/> to <HAnimJoint name='r_pinky1'/>
let Shape1551 = browser.currentScene.createNode("Shape");
let LineSet1552 = browser.currentScene.createNode("LineSet");
LineSet1552.vertexCount = new MFInt32(new int[2]);
let Coordinate1553 = browser.currentScene.createNode("Coordinate");
Coordinate1553.point = new MFVec3f(new float[-0.1925,0.8066,-0.1036,-0.1925,0.7866,-0.1036]);
LineSet1552.coord = Coordinate1553;

let ColorRGBA1554 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1554.USE = "HAnimSegmentLineColorRGBA";
LineSet1552.color = ColorRGBA1554;

Shape1551.geometry = LineSet1552;

HAnimSegment1547.children[2] = Shape1551;

HAnimJoint1546.children = new MFNode();

HAnimJoint1546.children[0] = HAnimSegment1547;

let HAnimJoint1555 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1555.name = "r_pinky1";
HAnimJoint1555.DEF = "hanim_r_pinky1";
HAnimJoint1555.center = new SFVec3f(new float[-0.1925,0.7866,-0.1036]);
HAnimJoint1555.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1555.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1556 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1556.name = "r_pinky_proximal";
HAnimSegment1556.DEF = "hanim_r_pinky_proximal";
//<HAnimJoint name='r_pinky1'/> visualization sphere is placed within <HAnimSegment name='r_pinky_proximal'/>
let TouchSensor1557 = browser.currentScene.createNode("TouchSensor");
TouchSensor1557.description = "HAnimJoint r_pinky1, HAnimSegment r_pinky_proximal";
HAnimSegment1556.children = new MFNode();

HAnimSegment1556.children[0] = TouchSensor1557;

let Transform1558 = browser.currentScene.createNode("Transform");
Transform1558.translation = new SFVec3f(new float[-0.1925,0.7866,-0.1036]);
let Shape1559 = browser.currentScene.createNode("Shape");
Shape1559.USE = "HAnimJointShape";
Transform1558.children = new MFNode();

Transform1558.children[0] = Shape1559;

HAnimSegment1556.children[1] = Transform1558;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky1'/> to <HAnimJoint name='r_pinky2'/>
let Shape1560 = browser.currentScene.createNode("Shape");
let LineSet1561 = browser.currentScene.createNode("LineSet");
LineSet1561.vertexCount = new MFInt32(new int[2]);
let Coordinate1562 = browser.currentScene.createNode("Coordinate");
Coordinate1562.point = new MFVec3f(new float[-0.1925,0.7866,-0.1036,-0.1938,0.7452,-0.1024]);
LineSet1561.coord = Coordinate1562;

let ColorRGBA1563 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1563.USE = "HAnimSegmentLineColorRGBA";
LineSet1561.color = ColorRGBA1563;

Shape1560.geometry = LineSet1561;

HAnimSegment1556.children[2] = Shape1560;

HAnimJoint1555.children = new MFNode();

HAnimJoint1555.children[0] = HAnimSegment1556;

let HAnimJoint1564 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1564.name = "r_pinky2";
HAnimJoint1564.DEF = "hanim_r_pinky2";
HAnimJoint1564.center = new SFVec3f(new float[-0.1938,0.7452,-0.1024]);
HAnimJoint1564.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1564.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1565 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1565.name = "r_pinky_middle";
HAnimSegment1565.DEF = "hanim_r_pinky_middle";
//<HAnimJoint name='r_pinky2'/> visualization sphere is placed within <HAnimSegment name='r_pinky_middle'/>
let TouchSensor1566 = browser.currentScene.createNode("TouchSensor");
TouchSensor1566.description = "HAnimJoint r_pinky2, HAnimSegment r_pinky_middle";
HAnimSegment1565.children = new MFNode();

HAnimSegment1565.children[0] = TouchSensor1566;

let Transform1567 = browser.currentScene.createNode("Transform");
Transform1567.translation = new SFVec3f(new float[-0.1938,0.7452,-0.1024]);
let Shape1568 = browser.currentScene.createNode("Shape");
Shape1568.USE = "HAnimJointShape";
Transform1567.children = new MFNode();

Transform1567.children[0] = Shape1568;

HAnimSegment1565.children[1] = Transform1567;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky2'/> to <HAnimJoint name='r_pinky3'/>
let Shape1569 = browser.currentScene.createNode("Shape");
let LineSet1570 = browser.currentScene.createNode("LineSet");
LineSet1570.vertexCount = new MFInt32(new int[2]);
let Coordinate1571 = browser.currentScene.createNode("Coordinate");
Coordinate1571.point = new MFVec3f(new float[-0.1938,0.7452,-0.1024,-0.1948,0.7277,-0.1017]);
LineSet1570.coord = Coordinate1571;

let ColorRGBA1572 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1572.USE = "HAnimSegmentLineColorRGBA";
LineSet1570.color = ColorRGBA1572;

Shape1569.geometry = LineSet1570;

HAnimSegment1565.children[2] = Shape1569;

HAnimJoint1564.children = new MFNode();

HAnimJoint1564.children[0] = HAnimSegment1565;

let HAnimJoint1573 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1573.name = "r_pinky3";
HAnimJoint1573.DEF = "hanim_r_pinky3";
HAnimJoint1573.center = new SFVec3f(new float[-0.1948,0.7277,-0.1017]);
HAnimJoint1573.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1573.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1574 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1574.name = "r_pinky_distal";
HAnimSegment1574.DEF = "hanim_r_pinky_distal";
//<HAnimJoint name='r_pinky3'/> visualization sphere is placed within <HAnimSegment name='r_pinky_distal'/>
let TouchSensor1575 = browser.currentScene.createNode("TouchSensor");
TouchSensor1575.description = "HAnimJoint r_pinky3, HAnimSegment r_pinky_distal";
HAnimSegment1574.children = new MFNode();

HAnimSegment1574.children[0] = TouchSensor1575;

let Transform1576 = browser.currentScene.createNode("Transform");
Transform1576.translation = new SFVec3f(new float[-0.1948,0.7277,-0.1017]);
let Shape1577 = browser.currentScene.createNode("Shape");
Shape1577.USE = "HAnimJointShape";
Transform1576.children = new MFNode();

Transform1576.children[0] = Shape1577;

HAnimSegment1574.children[1] = Transform1576;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_pinky3'/> to <HAnimSite name='r_pinky_distal_tip'/>
let Shape1578 = browser.currentScene.createNode("Shape");
let LineSet1579 = browser.currentScene.createNode("LineSet");
LineSet1579.vertexCount = new MFInt32(new int[2]);
let Coordinate1580 = browser.currentScene.createNode("Coordinate");
Coordinate1580.point = new MFVec3f(new float[-0.1948,0.7277,-0.1017,-0.1938,0.7035,-0.0949]);
LineSet1579.coord = Coordinate1580;

let ColorRGBA1581 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1581.USE = "HAnimSiteLineColorRGBA";
LineSet1579.color = ColorRGBA1581;

Shape1578.geometry = LineSet1579;

HAnimSegment1574.children[2] = Shape1578;

let HAnimSite1582 = browser.currentScene.createNode("HAnimSite");
HAnimSite1582.name = "r_pinky_distal_tip";
HAnimSite1582.DEF = "hanim_r_pinky_distal_tip";
HAnimSite1582.translation = new SFVec3f(new float[-0.1938,0.7035,-0.0949]);
//HAnimSite visualization shape
let TouchSensor1583 = browser.currentScene.createNode("TouchSensor");
TouchSensor1583.description = "HAnimSite r_pinky_distal_tip";
HAnimSite1582.children = new MFNode();

HAnimSite1582.children[0] = TouchSensor1583;

let Shape1584 = browser.currentScene.createNode("Shape");
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

let HAnimSite1585 = browser.currentScene.createNode("HAnimSite");
HAnimSite1585.name = "l_inclined_view";
HAnimSite1585.DEF = "hanim_l_inclined_view";
HAnimSite1585.rotation = new SFRotation(new float[-0.113,0.993,0.0347,0.671]);
HAnimSite1585.translation = new SFVec3f(new float[1.62,1.05,2.06]);
//HAnimSite visualization shape
let TouchSensor1586 = browser.currentScene.createNode("TouchSensor");
TouchSensor1586.description = "HAnimSite l_inclined_view";
HAnimSite1585.children = new MFNode();

HAnimSite1585.children[0] = TouchSensor1586;

let Shape1587 = browser.currentScene.createNode("Shape");
Shape1587.USE = "HAnimSiteShape";
HAnimSite1585.children[1] = Shape1587;

let Viewpoint1588 = browser.currentScene.createNode("Viewpoint");
Viewpoint1588.DEF = "hanim_l_inclined_viewpoint";
Viewpoint1588.description = "left inclined";
Viewpoint1588.position = new SFVec3f(new float[0,0,0]);
HAnimSite1585.children[2] = Viewpoint1588;

//HAnimSite/Viewpoint visualization shape
let Anchor1589 = browser.currentScene.createNode("Anchor");
Anchor1589.description = "HAnimSite hanim_l_inclined_view Viewpoint";
Anchor1589.url = new MFString(new java.lang.String["#hanim_l_inclined_viewpoint"]);
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

HAnimSite1585.children[3] = Anchor1589;

HAnimHumanoid46.viewpoints[1] = HAnimSite1585;

let HAnimSite1593 = browser.currentScene.createNode("HAnimSite");
HAnimSite1593.name = "r_inclined_view";
HAnimSite1593.DEF = "hanim_r_inclined_view";
HAnimSite1593.rotation = new SFRotation(new float[-0.113,-0.993,0.0347,0.671]);
HAnimSite1593.translation = new SFVec3f(new float[-1.62,1.05,2.06]);
//HAnimSite visualization shape
let TouchSensor1594 = browser.currentScene.createNode("TouchSensor");
TouchSensor1594.description = "HAnimSite r_inclined_view";
HAnimSite1593.children = new MFNode();

HAnimSite1593.children[0] = TouchSensor1594;

let Shape1595 = browser.currentScene.createNode("Shape");
Shape1595.USE = "HAnimSiteShape";
HAnimSite1593.children[1] = Shape1595;

let Viewpoint1596 = browser.currentScene.createNode("Viewpoint");
Viewpoint1596.DEF = "hanim_r_inclined_viewpoint";
Viewpoint1596.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1596.description = "right inclined";
Viewpoint1596.position = new SFVec3f(new float[0,0,0]);
HAnimSite1593.children[2] = Viewpoint1596;

//HAnimSite/Viewpoint visualization shape
let Anchor1597 = browser.currentScene.createNode("Anchor");
Anchor1597.description = "HAnimSite hanim_r_inclined_view Viewpoint";
Anchor1597.url = new MFString(new java.lang.String["#hanim_r_inclined_viewpoint"]);
let LOD1598 = browser.currentScene.createNode("LOD");
LOD1598.forceTransitions = True;
LOD1598.range = new MFFloat(new float[0.04]);
let WorldInfo1599 = browser.currentScene.createNode("WorldInfo");
WorldInfo1599.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1598.children = new MFNode();

LOD1598.children[0] = WorldInfo1599;

let Shape1600 = browser.currentScene.createNode("Shape");
Shape1600.USE = "HAnimSiteViewpointShape";
LOD1598.children[1] = Shape1600;

Anchor1597.children = new MFNode();

Anchor1597.children[0] = LOD1598;

HAnimSite1593.children[3] = Anchor1597;

HAnimHumanoid46.viewpoints[2] = HAnimSite1593;

let HAnimSite1601 = browser.currentScene.createNode("HAnimSite");
HAnimSite1601.name = "front_view";
HAnimSite1601.DEF = "hanim_front_view";
HAnimSite1601.translation = new SFVec3f(new float[0,0.85,2.58]);
//HAnimSite visualization shape
let TouchSensor1602 = browser.currentScene.createNode("TouchSensor");
TouchSensor1602.description = "HAnimSite front_view";
HAnimSite1601.children = new MFNode();

HAnimSite1601.children[0] = TouchSensor1602;

let Shape1603 = browser.currentScene.createNode("Shape");
Shape1603.USE = "HAnimSiteShape";
HAnimSite1601.children[1] = Shape1603;

let Viewpoint1604 = browser.currentScene.createNode("Viewpoint");
Viewpoint1604.DEF = "hanim_front_viewpoint";
Viewpoint1604.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1604.description = "front";
Viewpoint1604.position = new SFVec3f(new float[0,0,0]);
HAnimSite1601.children[2] = Viewpoint1604;

//HAnimSite/Viewpoint visualization shape
let Anchor1605 = browser.currentScene.createNode("Anchor");
Anchor1605.description = "HAnimSite hanim_front_view Viewpoint";
Anchor1605.url = new MFString(new java.lang.String["#hanim_front_viewpoint"]);
let LOD1606 = browser.currentScene.createNode("LOD");
LOD1606.forceTransitions = True;
LOD1606.range = new MFFloat(new float[0.04]);
let WorldInfo1607 = browser.currentScene.createNode("WorldInfo");
WorldInfo1607.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1606.children = new MFNode();

LOD1606.children[0] = WorldInfo1607;

let Shape1608 = browser.currentScene.createNode("Shape");
Shape1608.USE = "HAnimSiteViewpointShape";
LOD1606.children[1] = Shape1608;

Anchor1605.children = new MFNode();

Anchor1605.children[0] = LOD1606;

HAnimSite1601.children[3] = Anchor1605;

HAnimHumanoid46.viewpoints[3] = HAnimSite1601;

let HAnimSite1609 = browser.currentScene.createNode("HAnimSite");
HAnimSite1609.name = "back_view";
HAnimSite1609.DEF = "hanim_back_view";
HAnimSite1609.rotation = new SFRotation(new float[0,1,0,3.14]);
HAnimSite1609.translation = new SFVec3f(new float[0,0.85,-2.58]);
//HAnimSite visualization shape
let TouchSensor1610 = browser.currentScene.createNode("TouchSensor");
TouchSensor1610.description = "HAnimSite back_view";
HAnimSite1609.children = new MFNode();

HAnimSite1609.children[0] = TouchSensor1610;

let Shape1611 = browser.currentScene.createNode("Shape");
Shape1611.USE = "HAnimSiteShape";
HAnimSite1609.children[1] = Shape1611;

let Viewpoint1612 = browser.currentScene.createNode("Viewpoint");
Viewpoint1612.DEF = "hanim_back_viewpoint";
Viewpoint1612.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1612.description = "back";
Viewpoint1612.position = new SFVec3f(new float[0,0,0]);
HAnimSite1609.children[2] = Viewpoint1612;

//HAnimSite/Viewpoint visualization shape
let Anchor1613 = browser.currentScene.createNode("Anchor");
Anchor1613.description = "HAnimSite hanim_back_view Viewpoint";
Anchor1613.url = new MFString(new java.lang.String["#hanim_back_viewpoint"]);
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

HAnimSite1609.children[3] = Anchor1613;

HAnimHumanoid46.viewpoints[4] = HAnimSite1609;

let HAnimSite1617 = browser.currentScene.createNode("HAnimSite");
HAnimSite1617.name = "l_side_view";
HAnimSite1617.DEF = "hanim_l_side_view";
HAnimSite1617.rotation = new SFRotation(new float[0,1,0,1.5708]);
HAnimSite1617.translation = new SFVec3f(new float[2.6,0.854,0]);
//HAnimSite visualization shape
let TouchSensor1618 = browser.currentScene.createNode("TouchSensor");
TouchSensor1618.description = "HAnimSite l_side_view";
HAnimSite1617.children = new MFNode();

HAnimSite1617.children[0] = TouchSensor1618;

let Shape1619 = browser.currentScene.createNode("Shape");
Shape1619.USE = "HAnimSiteShape";
HAnimSite1617.children[1] = Shape1619;

let Viewpoint1620 = browser.currentScene.createNode("Viewpoint");
Viewpoint1620.DEF = "hanim_l_side_viewpoint";
Viewpoint1620.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1620.description = "left side";
Viewpoint1620.position = new SFVec3f(new float[0,0,0]);
HAnimSite1617.children[2] = Viewpoint1620;

//HAnimSite/Viewpoint visualization shape
let Anchor1621 = browser.currentScene.createNode("Anchor");
Anchor1621.description = "HAnimSite hanim_l_side_view Viewpoint";
Anchor1621.url = new MFString(new java.lang.String["#hanim_l_side_viewpoint"]);
let LOD1622 = browser.currentScene.createNode("LOD");
LOD1622.forceTransitions = True;
LOD1622.range = new MFFloat(new float[0.04]);
let WorldInfo1623 = browser.currentScene.createNode("WorldInfo");
WorldInfo1623.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1622.children = new MFNode();

LOD1622.children[0] = WorldInfo1623;

let Shape1624 = browser.currentScene.createNode("Shape");
Shape1624.USE = "HAnimSiteViewpointShape";
LOD1622.children[1] = Shape1624;

Anchor1621.children = new MFNode();

Anchor1621.children[0] = LOD1622;

HAnimSite1617.children[3] = Anchor1621;

HAnimHumanoid46.viewpoints[5] = HAnimSite1617;

let HAnimSite1625 = browser.currentScene.createNode("HAnimSite");
HAnimSite1625.name = "Top_view";
HAnimSite1625.DEF = "hanim_Top_view";
HAnimSite1625.rotation = new SFRotation(new float[1,0,0,-1.57]);
HAnimSite1625.translation = new SFVec3f(new float[0,3.5,0]);
//HAnimSite visualization shape
let TouchSensor1626 = browser.currentScene.createNode("TouchSensor");
TouchSensor1626.description = "HAnimSite Top_view";
HAnimSite1625.children = new MFNode();

HAnimSite1625.children[0] = TouchSensor1626;

let Shape1627 = browser.currentScene.createNode("Shape");
Shape1627.USE = "HAnimSiteShape";
HAnimSite1625.children[1] = Shape1627;

let Viewpoint1628 = browser.currentScene.createNode("Viewpoint");
Viewpoint1628.DEF = "hanim_Top_viewpoint";
Viewpoint1628.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1628.description = "Top";
Viewpoint1628.position = new SFVec3f(new float[0,0,0]);
HAnimSite1625.children[2] = Viewpoint1628;

//HAnimSite/Viewpoint visualization shape
let Anchor1629 = browser.currentScene.createNode("Anchor");
Anchor1629.description = "HAnimSite hanim_Top_view Viewpoint";
Anchor1629.url = new MFString(new java.lang.String["#hanim_Top_viewpoint"]);
let LOD1630 = browser.currentScene.createNode("LOD");
LOD1630.forceTransitions = True;
LOD1630.range = new MFFloat(new float[0.04]);
let WorldInfo1631 = browser.currentScene.createNode("WorldInfo");
WorldInfo1631.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1630.children = new MFNode();

LOD1630.children[0] = WorldInfo1631;

let Shape1632 = browser.currentScene.createNode("Shape");
Shape1632.USE = "HAnimSiteViewpointShape";
LOD1630.children[1] = Shape1632;

Anchor1629.children = new MFNode();

Anchor1629.children[0] = LOD1630;

HAnimSite1625.children[3] = Anchor1629;

HAnimHumanoid46.viewpoints[6] = HAnimSite1625;

let HAnimSite1633 = browser.currentScene.createNode("HAnimSite");
HAnimSite1633.name = "front_close_view";
HAnimSite1633.DEF = "hanim_front_close_view";
HAnimSite1633.translation = new SFVec3f(new float[0,0.854,1.575]);
//HAnimSite visualization shape
let TouchSensor1634 = browser.currentScene.createNode("TouchSensor");
TouchSensor1634.description = "HAnimSite front_close_view";
HAnimSite1633.children = new MFNode();

HAnimSite1633.children[0] = TouchSensor1634;

let Shape1635 = browser.currentScene.createNode("Shape");
Shape1635.USE = "HAnimSiteShape";
HAnimSite1633.children[1] = Shape1635;

let Viewpoint1636 = browser.currentScene.createNode("Viewpoint");
Viewpoint1636.DEF = "hanim_front_close_viewpoint";
Viewpoint1636.centerOfRotation = new SFVec3f(new float[0,0,1.575]);
Viewpoint1636.description = "front close";
Viewpoint1636.position = new SFVec3f(new float[0,0,0]);
HAnimSite1633.children[2] = Viewpoint1636;

//HAnimSite/Viewpoint visualization shape
let Anchor1637 = browser.currentScene.createNode("Anchor");
Anchor1637.description = "HAnimSite hanim_front_close_view Viewpoint";
Anchor1637.url = new MFString(new java.lang.String["#hanim_front_close_viewpoint"]);
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

HAnimSite1633.children[3] = Anchor1637;

HAnimHumanoid46.viewpoints[7] = HAnimSite1633;

let HAnimSite1641 = browser.currentScene.createNode("HAnimSite");
HAnimSite1641.name = "side_close_view";
HAnimSite1641.DEF = "hanim_side_close_view";
HAnimSite1641.rotation = new SFRotation(new float[0,1,0,1.5708]);
HAnimSite1641.translation = new SFVec3f(new float[1.56,0.854,0]);
//HAnimSite visualization shape
let TouchSensor1642 = browser.currentScene.createNode("TouchSensor");
TouchSensor1642.description = "HAnimSite side_close_view";
HAnimSite1641.children = new MFNode();

HAnimSite1641.children[0] = TouchSensor1642;

let Shape1643 = browser.currentScene.createNode("Shape");
Shape1643.USE = "HAnimSiteShape";
HAnimSite1641.children[1] = Shape1643;

let Viewpoint1644 = browser.currentScene.createNode("Viewpoint");
Viewpoint1644.DEF = "hanim_side_close_viewpoint";
Viewpoint1644.centerOfRotation = new SFVec3f(new float[1.6,0,0]);
Viewpoint1644.description = "side close";
Viewpoint1644.position = new SFVec3f(new float[0,0,0]);
HAnimSite1641.children[2] = Viewpoint1644;

//HAnimSite/Viewpoint visualization shape
let Anchor1645 = browser.currentScene.createNode("Anchor");
Anchor1645.description = "HAnimSite hanim_side_close_view Viewpoint";
Anchor1645.url = new MFString(new java.lang.String["#hanim_side_close_viewpoint"]);
let LOD1646 = browser.currentScene.createNode("LOD");
LOD1646.forceTransitions = True;
LOD1646.range = new MFFloat(new float[0.04]);
let WorldInfo1647 = browser.currentScene.createNode("WorldInfo");
WorldInfo1647.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1646.children = new MFNode();

LOD1646.children[0] = WorldInfo1647;

let Shape1648 = browser.currentScene.createNode("Shape");
Shape1648.USE = "HAnimSiteViewpointShape";
LOD1646.children[1] = Shape1648;

Anchor1645.children = new MFNode();

Anchor1645.children[0] = LOD1646;

HAnimSite1641.children[3] = Anchor1645;

HAnimHumanoid46.viewpoints[8] = HAnimSite1641;

let HAnimSite1649 = browser.currentScene.createNode("HAnimSite");
HAnimSite1649.name = "head_front_close_view";
HAnimSite1649.DEF = "hanim_head_front_close_view";
HAnimSite1649.translation = new SFVec3f(new float[0,1.5,1]);
//HAnimSite visualization shape
let TouchSensor1650 = browser.currentScene.createNode("TouchSensor");
TouchSensor1650.description = "HAnimSite head_front_close_view";
HAnimSite1649.children = new MFNode();

HAnimSite1649.children[0] = TouchSensor1650;

let Shape1651 = browser.currentScene.createNode("Shape");
Shape1651.USE = "HAnimSiteShape";
HAnimSite1649.children[1] = Shape1651;

let Viewpoint1652 = browser.currentScene.createNode("Viewpoint");
Viewpoint1652.DEF = "hanim_head_front_close_viewpoint";
Viewpoint1652.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint1652.description = "head front close";
Viewpoint1652.position = new SFVec3f(new float[0,0,0]);
HAnimSite1649.children[2] = Viewpoint1652;

//HAnimSite/Viewpoint visualization shape
let Anchor1653 = browser.currentScene.createNode("Anchor");
Anchor1653.description = "HAnimSite hanim_head_front_close_view Viewpoint";
Anchor1653.url = new MFString(new java.lang.String["#hanim_head_front_close_viewpoint"]);
let LOD1654 = browser.currentScene.createNode("LOD");
LOD1654.forceTransitions = True;
LOD1654.range = new MFFloat(new float[0.04]);
let WorldInfo1655 = browser.currentScene.createNode("WorldInfo");
WorldInfo1655.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1654.children = new MFNode();

LOD1654.children[0] = WorldInfo1655;

let Shape1656 = browser.currentScene.createNode("Shape");
Shape1656.USE = "HAnimSiteViewpointShape";
LOD1654.children[1] = Shape1656;

Anchor1653.children = new MFNode();

Anchor1653.children[0] = LOD1654;

HAnimSite1649.children[3] = Anchor1653;

HAnimHumanoid46.viewpoints[9] = HAnimSite1649;

let HAnimSite1657 = browser.currentScene.createNode("HAnimSite");
HAnimSite1657.name = "chest_front_close_view";
HAnimSite1657.DEF = "hanim_chest_front_close_view";
HAnimSite1657.translation = new SFVec3f(new float[0,1.2,1]);
//HAnimSite visualization shape
let TouchSensor1658 = browser.currentScene.createNode("TouchSensor");
TouchSensor1658.description = "HAnimSite chest_front_close_view";
HAnimSite1657.children = new MFNode();

HAnimSite1657.children[0] = TouchSensor1658;

let Shape1659 = browser.currentScene.createNode("Shape");
Shape1659.USE = "HAnimSiteShape";
HAnimSite1657.children[1] = Shape1659;

let Viewpoint1660 = browser.currentScene.createNode("Viewpoint");
Viewpoint1660.DEF = "hanim_chest_front_close_viewpoint";
Viewpoint1660.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint1660.description = "chest front close";
Viewpoint1660.position = new SFVec3f(new float[0,0,0]);
HAnimSite1657.children[2] = Viewpoint1660;

//HAnimSite/Viewpoint visualization shape
let Anchor1661 = browser.currentScene.createNode("Anchor");
Anchor1661.description = "HAnimSite hanim_chest_front_close_view Viewpoint";
Anchor1661.url = new MFString(new java.lang.String["#hanim_chest_front_close_viewpoint"]);
let LOD1662 = browser.currentScene.createNode("LOD");
LOD1662.forceTransitions = True;
LOD1662.range = new MFFloat(new float[0.04]);
let WorldInfo1663 = browser.currentScene.createNode("WorldInfo");
WorldInfo1663.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1662.children = new MFNode();

LOD1662.children[0] = WorldInfo1663;

let Shape1664 = browser.currentScene.createNode("Shape");
Shape1664.USE = "HAnimSiteViewpointShape";
LOD1662.children[1] = Shape1664;

Anchor1661.children = new MFNode();

Anchor1661.children[0] = LOD1662;

HAnimSite1657.children[3] = Anchor1661;

HAnimHumanoid46.viewpoints[10] = HAnimSite1657;

let HAnimSite1665 = browser.currentScene.createNode("HAnimSite");
HAnimSite1665.name = "pelvis_front_close_view";
HAnimSite1665.DEF = "hanim_pelvis_front_close_view";
HAnimSite1665.translation = new SFVec3f(new float[0,0.8,1]);
//HAnimSite visualization shape
let TouchSensor1666 = browser.currentScene.createNode("TouchSensor");
TouchSensor1666.description = "HAnimSite pelvis_front_close_view";
HAnimSite1665.children = new MFNode();

HAnimSite1665.children[0] = TouchSensor1666;

let Shape1667 = browser.currentScene.createNode("Shape");
Shape1667.USE = "HAnimSiteShape";
HAnimSite1665.children[1] = Shape1667;

let Viewpoint1668 = browser.currentScene.createNode("Viewpoint");
Viewpoint1668.DEF = "hanim_pelvis_front_close_viewpoint";
Viewpoint1668.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint1668.description = "pelvis front close";
Viewpoint1668.position = new SFVec3f(new float[0,0,0]);
HAnimSite1665.children[2] = Viewpoint1668;

//HAnimSite/Viewpoint visualization shape
let Anchor1669 = browser.currentScene.createNode("Anchor");
Anchor1669.description = "HAnimSite hanim_pelvis_front_close_view Viewpoint";
Anchor1669.url = new MFString(new java.lang.String["#hanim_pelvis_front_close_viewpoint"]);
let LOD1670 = browser.currentScene.createNode("LOD");
LOD1670.forceTransitions = True;
LOD1670.range = new MFFloat(new float[0.04]);
let WorldInfo1671 = browser.currentScene.createNode("WorldInfo");
WorldInfo1671.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1670.children = new MFNode();

LOD1670.children[0] = WorldInfo1671;

let Shape1672 = browser.currentScene.createNode("Shape");
Shape1672.USE = "HAnimSiteViewpointShape";
LOD1670.children[1] = Shape1672;

Anchor1669.children = new MFNode();

Anchor1669.children[0] = LOD1670;

HAnimSite1665.children[3] = Anchor1669;

HAnimHumanoid46.viewpoints[11] = HAnimSite1665;

let HAnimSite1673 = browser.currentScene.createNode("HAnimSite");
HAnimSite1673.name = "knees_front_close_view";
HAnimSite1673.DEF = "hanim_knees_front_close_view";
HAnimSite1673.translation = new SFVec3f(new float[0,0.4,1]);
//HAnimSite visualization shape
let TouchSensor1674 = browser.currentScene.createNode("TouchSensor");
TouchSensor1674.description = "HAnimSite knees_front_close_view";
HAnimSite1673.children = new MFNode();

HAnimSite1673.children[0] = TouchSensor1674;

let Shape1675 = browser.currentScene.createNode("Shape");
Shape1675.USE = "HAnimSiteShape";
HAnimSite1673.children[1] = Shape1675;

let Viewpoint1676 = browser.currentScene.createNode("Viewpoint");
Viewpoint1676.DEF = "hanim_knees_front_close_viewpoint";
Viewpoint1676.centerOfRotation = new SFVec3f(new float[0,0.4,0]);
Viewpoint1676.description = "knees front close";
Viewpoint1676.position = new SFVec3f(new float[0,0,0]);
HAnimSite1673.children[2] = Viewpoint1676;

//HAnimSite/Viewpoint visualization shape
let Anchor1677 = browser.currentScene.createNode("Anchor");
Anchor1677.description = "HAnimSite hanim_knees_front_close_view Viewpoint";
Anchor1677.url = new MFString(new java.lang.String["#hanim_knees_front_close_viewpoint"]);
let LOD1678 = browser.currentScene.createNode("LOD");
LOD1678.forceTransitions = True;
LOD1678.range = new MFFloat(new float[0.04]);
let WorldInfo1679 = browser.currentScene.createNode("WorldInfo");
WorldInfo1679.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1678.children = new MFNode();

LOD1678.children[0] = WorldInfo1679;

let Shape1680 = browser.currentScene.createNode("Shape");
Shape1680.USE = "HAnimSiteViewpointShape";
LOD1678.children[1] = Shape1680;

Anchor1677.children = new MFNode();

Anchor1677.children[0] = LOD1678;

HAnimSite1673.children[3] = Anchor1677;

HAnimHumanoid46.viewpoints[12] = HAnimSite1673;

let HAnimSite1681 = browser.currentScene.createNode("HAnimSite");
HAnimSite1681.name = "feet_front_close_view";
HAnimSite1681.DEF = "hanim_feet_front_close_view";
HAnimSite1681.translation = new SFVec3f(new float[0,0,1]);
//HAnimSite visualization shape
let TouchSensor1682 = browser.currentScene.createNode("TouchSensor");
TouchSensor1682.description = "HAnimSite feet_front_close_view";
HAnimSite1681.children = new MFNode();

HAnimSite1681.children[0] = TouchSensor1682;

let Shape1683 = browser.currentScene.createNode("Shape");
Shape1683.USE = "HAnimSiteShape";
HAnimSite1681.children[1] = Shape1683;

let Viewpoint1684 = browser.currentScene.createNode("Viewpoint");
Viewpoint1684.DEF = "hanim_feet_front_close_viewpoint";
Viewpoint1684.description = "feet front close";
Viewpoint1684.position = new SFVec3f(new float[0,0,0]);
HAnimSite1681.children[2] = Viewpoint1684;

//HAnimSite/Viewpoint visualization shape
let Anchor1685 = browser.currentScene.createNode("Anchor");
Anchor1685.description = "HAnimSite hanim_feet_front_close_view Viewpoint";
Anchor1685.url = new MFString(new java.lang.String["#hanim_feet_front_close_viewpoint"]);
let LOD1686 = browser.currentScene.createNode("LOD");
LOD1686.forceTransitions = True;
LOD1686.range = new MFFloat(new float[0.04]);
let WorldInfo1687 = browser.currentScene.createNode("WorldInfo");
WorldInfo1687.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1686.children = new MFNode();

LOD1686.children[0] = WorldInfo1687;

let Shape1688 = browser.currentScene.createNode("Shape");
Shape1688.USE = "HAnimSiteViewpointShape";
LOD1686.children[1] = Shape1688;

Anchor1685.children = new MFNode();

Anchor1685.children[0] = LOD1686;

HAnimSite1681.children[3] = Anchor1685;

HAnimHumanoid46.viewpoints[13] = HAnimSite1681;

let HAnimSite1689 = browser.currentScene.createNode("HAnimSite");
HAnimSite1689.name = "eye_level_view";
HAnimSite1689.DEF = "hanim_eye_level_view";
HAnimSite1689.translation = new SFVec3f(new float[0,1.6332,0.0502]);
//HAnimSite visualization shape
let TouchSensor1690 = browser.currentScene.createNode("TouchSensor");
TouchSensor1690.description = "HAnimSite eye_level_view";
HAnimSite1689.children = new MFNode();

HAnimSite1689.children[0] = TouchSensor1690;

let Shape1691 = browser.currentScene.createNode("Shape");
Shape1691.USE = "HAnimSiteShape";
HAnimSite1689.children[1] = Shape1691;

let Viewpoint1692 = browser.currentScene.createNode("Viewpoint");
Viewpoint1692.DEF = "hanim_eye_level_viewpoint";
Viewpoint1692.description = "eye level looking forward";
Viewpoint1692.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint1692.position = new SFVec3f(new float[0,0,0]);
HAnimSite1689.children[2] = Viewpoint1692;

//HAnimSite/Viewpoint visualization shape
let Anchor1693 = browser.currentScene.createNode("Anchor");
Anchor1693.description = "HAnimSite hanim_eye_level_view Viewpoint";
Anchor1693.url = new MFString(new java.lang.String["#hanim_eye_level_viewpoint"]);
let LOD1694 = browser.currentScene.createNode("LOD");
LOD1694.forceTransitions = True;
LOD1694.range = new MFFloat(new float[0.04]);
let WorldInfo1695 = browser.currentScene.createNode("WorldInfo");
WorldInfo1695.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1694.children = new MFNode();

LOD1694.children[0] = WorldInfo1695;

let Shape1696 = browser.currentScene.createNode("Shape");
Shape1696.USE = "HAnimSiteViewpointShape";
LOD1694.children[1] = Shape1696;

Anchor1693.children = new MFNode();

Anchor1693.children[0] = LOD1694;

HAnimSite1689.children[3] = Anchor1693;

HAnimHumanoid46.viewpoints[14] = HAnimSite1689;

let HAnimSite1697 = browser.currentScene.createNode("HAnimSite");
HAnimSite1697.USE = "hanim_l_eyeball_site_view";
HAnimHumanoid46.viewpoints[15] = HAnimSite1697;

let HAnimSite1698 = browser.currentScene.createNode("HAnimSite");
HAnimSite1698.USE = "hanim_r_eyeball_site_view";
HAnimHumanoid46.viewpoints[16] = HAnimSite1698;

let HAnimSite1699 = browser.currentScene.createNode("HAnimSite");
HAnimSite1699.USE = "hanim_l_hand_front_view";
HAnimHumanoid46.viewpoints[17] = HAnimSite1699;

let HAnimSite1700 = browser.currentScene.createNode("HAnimSite");
HAnimSite1700.USE = "hanim_r_hand_front_view";
HAnimHumanoid46.viewpoints[18] = HAnimSite1700;

let HAnimJoint1701 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1701.USE = "hanim_humanoid_root";
HAnimHumanoid46.joints[19] = HAnimJoint1701;

let HAnimJoint1702 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1702.USE = "hanim_sacroiliac";
HAnimHumanoid46.joints[20] = HAnimJoint1702;

let HAnimJoint1703 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1703.USE = "hanim_vl5";
HAnimHumanoid46.joints[21] = HAnimJoint1703;

let HAnimJoint1704 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1704.USE = "hanim_vl4";
HAnimHumanoid46.joints[22] = HAnimJoint1704;

let HAnimJoint1705 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1705.USE = "hanim_vl3";
HAnimHumanoid46.joints[23] = HAnimJoint1705;

let HAnimJoint1706 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1706.USE = "hanim_vl2";
HAnimHumanoid46.joints[24] = HAnimJoint1706;

let HAnimJoint1707 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1707.USE = "hanim_vl1";
HAnimHumanoid46.joints[25] = HAnimJoint1707;

let HAnimJoint1708 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1708.USE = "hanim_vt12";
HAnimHumanoid46.joints[26] = HAnimJoint1708;

let HAnimJoint1709 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1709.USE = "hanim_vt11";
HAnimHumanoid46.joints[27] = HAnimJoint1709;

let HAnimJoint1710 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1710.USE = "hanim_vt10";
HAnimHumanoid46.joints[28] = HAnimJoint1710;

let HAnimJoint1711 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1711.USE = "hanim_vt9";
HAnimHumanoid46.joints[29] = HAnimJoint1711;

let HAnimJoint1712 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1712.USE = "hanim_vt8";
HAnimHumanoid46.joints[30] = HAnimJoint1712;

let HAnimJoint1713 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1713.USE = "hanim_vt7";
HAnimHumanoid46.joints[31] = HAnimJoint1713;

let HAnimJoint1714 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1714.USE = "hanim_vt6";
HAnimHumanoid46.joints[32] = HAnimJoint1714;

let HAnimJoint1715 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1715.USE = "hanim_vt5";
HAnimHumanoid46.joints[33] = HAnimJoint1715;

let HAnimJoint1716 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1716.USE = "hanim_vt4";
HAnimHumanoid46.joints[34] = HAnimJoint1716;

let HAnimJoint1717 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1717.USE = "hanim_vt3";
HAnimHumanoid46.joints[35] = HAnimJoint1717;

let HAnimJoint1718 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1718.USE = "hanim_vt2";
HAnimHumanoid46.joints[36] = HAnimJoint1718;

let HAnimJoint1719 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1719.USE = "hanim_vt1";
HAnimHumanoid46.joints[37] = HAnimJoint1719;

let HAnimJoint1720 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1720.USE = "hanim_vc7";
HAnimHumanoid46.joints[38] = HAnimJoint1720;

let HAnimJoint1721 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1721.USE = "hanim_vc6";
HAnimHumanoid46.joints[39] = HAnimJoint1721;

let HAnimJoint1722 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1722.USE = "hanim_vc5";
HAnimHumanoid46.joints[40] = HAnimJoint1722;

let HAnimJoint1723 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1723.USE = "hanim_vc4";
HAnimHumanoid46.joints[41] = HAnimJoint1723;

let HAnimJoint1724 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1724.USE = "hanim_vc3";
HAnimHumanoid46.joints[42] = HAnimJoint1724;

let HAnimJoint1725 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1725.USE = "hanim_vc2";
HAnimHumanoid46.joints[43] = HAnimJoint1725;

let HAnimJoint1726 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1726.USE = "hanim_vc1";
HAnimHumanoid46.joints[44] = HAnimJoint1726;

let HAnimJoint1727 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1727.USE = "hanim_skullbase";
HAnimHumanoid46.joints[45] = HAnimJoint1727;

let HAnimJoint1728 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1728.USE = "hanim_temporomandibular";
HAnimHumanoid46.joints[46] = HAnimJoint1728;

let HAnimJoint1729 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1729.USE = "hanim_l_acromioclavicular";
HAnimHumanoid46.joints[47] = HAnimJoint1729;

let HAnimJoint1730 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1730.USE = "hanim_r_acromioclavicular";
HAnimHumanoid46.joints[48] = HAnimJoint1730;

let HAnimJoint1731 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1731.USE = "hanim_l_ankle";
HAnimHumanoid46.joints[49] = HAnimJoint1731;

let HAnimJoint1732 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1732.USE = "hanim_r_ankle";
HAnimHumanoid46.joints[50] = HAnimJoint1732;

let HAnimJoint1733 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1733.USE = "hanim_l_elbow";
HAnimHumanoid46.joints[51] = HAnimJoint1733;

let HAnimJoint1734 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1734.USE = "hanim_r_elbow";
HAnimHumanoid46.joints[52] = HAnimJoint1734;

let HAnimJoint1735 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1735.USE = "hanim_l_eyeball_joint";
HAnimHumanoid46.joints[53] = HAnimJoint1735;

let HAnimJoint1736 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1736.USE = "hanim_r_eyeball_joint";
HAnimHumanoid46.joints[54] = HAnimJoint1736;

let HAnimJoint1737 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1737.USE = "hanim_l_eyebrow_joint";
HAnimHumanoid46.joints[55] = HAnimJoint1737;

let HAnimJoint1738 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1738.USE = "hanim_r_eyebrow_joint";
HAnimHumanoid46.joints[56] = HAnimJoint1738;

let HAnimJoint1739 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1739.USE = "hanim_l_eyelid_joint";
HAnimHumanoid46.joints[57] = HAnimJoint1739;

let HAnimJoint1740 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1740.USE = "hanim_r_eyelid_joint";
HAnimHumanoid46.joints[58] = HAnimJoint1740;

let HAnimJoint1741 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1741.USE = "hanim_l_hip";
HAnimHumanoid46.joints[59] = HAnimJoint1741;

let HAnimJoint1742 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1742.USE = "hanim_r_hip";
HAnimHumanoid46.joints[60] = HAnimJoint1742;

let HAnimJoint1743 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1743.USE = "hanim_l_index0";
HAnimHumanoid46.joints[61] = HAnimJoint1743;

let HAnimJoint1744 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1744.USE = "hanim_r_index0";
HAnimHumanoid46.joints[62] = HAnimJoint1744;

let HAnimJoint1745 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1745.USE = "hanim_l_index1";
HAnimHumanoid46.joints[63] = HAnimJoint1745;

let HAnimJoint1746 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1746.USE = "hanim_r_index1";
HAnimHumanoid46.joints[64] = HAnimJoint1746;

let HAnimJoint1747 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1747.USE = "hanim_l_index2";
HAnimHumanoid46.joints[65] = HAnimJoint1747;

let HAnimJoint1748 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1748.USE = "hanim_r_index2";
HAnimHumanoid46.joints[66] = HAnimJoint1748;

let HAnimJoint1749 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1749.USE = "hanim_l_index3";
HAnimHumanoid46.joints[67] = HAnimJoint1749;

let HAnimJoint1750 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1750.USE = "hanim_r_index3";
HAnimHumanoid46.joints[68] = HAnimJoint1750;

let HAnimJoint1751 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1751.USE = "hanim_l_knee";
HAnimHumanoid46.joints[69] = HAnimJoint1751;

let HAnimJoint1752 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1752.USE = "hanim_r_knee";
HAnimHumanoid46.joints[70] = HAnimJoint1752;

let HAnimJoint1753 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1753.USE = "hanim_l_metatarsal";
HAnimHumanoid46.joints[71] = HAnimJoint1753;

let HAnimJoint1754 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1754.USE = "hanim_r_metatarsal";
HAnimHumanoid46.joints[72] = HAnimJoint1754;

let HAnimJoint1755 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1755.USE = "hanim_l_middle0";
HAnimHumanoid46.joints[73] = HAnimJoint1755;

let HAnimJoint1756 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1756.USE = "hanim_r_middle0";
HAnimHumanoid46.joints[74] = HAnimJoint1756;

let HAnimJoint1757 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1757.USE = "hanim_l_middle1";
HAnimHumanoid46.joints[75] = HAnimJoint1757;

let HAnimJoint1758 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1758.USE = "hanim_r_middle1";
HAnimHumanoid46.joints[76] = HAnimJoint1758;

let HAnimJoint1759 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1759.USE = "hanim_l_middle2";
HAnimHumanoid46.joints[77] = HAnimJoint1759;

let HAnimJoint1760 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1760.USE = "hanim_r_middle2";
HAnimHumanoid46.joints[78] = HAnimJoint1760;

let HAnimJoint1761 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1761.USE = "hanim_l_middle3";
HAnimHumanoid46.joints[79] = HAnimJoint1761;

let HAnimJoint1762 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1762.USE = "hanim_r_middle3";
HAnimHumanoid46.joints[80] = HAnimJoint1762;

let HAnimJoint1763 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1763.USE = "hanim_l_midtarsal";
HAnimHumanoid46.joints[81] = HAnimJoint1763;

let HAnimJoint1764 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1764.USE = "hanim_r_midtarsal";
HAnimHumanoid46.joints[82] = HAnimJoint1764;

let HAnimJoint1765 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1765.USE = "hanim_l_pinky0";
HAnimHumanoid46.joints[83] = HAnimJoint1765;

let HAnimJoint1766 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1766.USE = "hanim_r_pinky0";
HAnimHumanoid46.joints[84] = HAnimJoint1766;

let HAnimJoint1767 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1767.USE = "hanim_l_pinky1";
HAnimHumanoid46.joints[85] = HAnimJoint1767;

let HAnimJoint1768 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1768.USE = "hanim_r_pinky1";
HAnimHumanoid46.joints[86] = HAnimJoint1768;

let HAnimJoint1769 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1769.USE = "hanim_l_pinky2";
HAnimHumanoid46.joints[87] = HAnimJoint1769;

let HAnimJoint1770 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1770.USE = "hanim_r_pinky2";
HAnimHumanoid46.joints[88] = HAnimJoint1770;

let HAnimJoint1771 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1771.USE = "hanim_l_pinky3";
HAnimHumanoid46.joints[89] = HAnimJoint1771;

let HAnimJoint1772 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1772.USE = "hanim_r_pinky3";
HAnimHumanoid46.joints[90] = HAnimJoint1772;

let HAnimJoint1773 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1773.USE = "hanim_l_ring0";
HAnimHumanoid46.joints[91] = HAnimJoint1773;

let HAnimJoint1774 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1774.USE = "hanim_r_ring0";
HAnimHumanoid46.joints[92] = HAnimJoint1774;

let HAnimJoint1775 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1775.USE = "hanim_l_ring1";
HAnimHumanoid46.joints[93] = HAnimJoint1775;

let HAnimJoint1776 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1776.USE = "hanim_r_ring1";
HAnimHumanoid46.joints[94] = HAnimJoint1776;

let HAnimJoint1777 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1777.USE = "hanim_l_ring2";
HAnimHumanoid46.joints[95] = HAnimJoint1777;

let HAnimJoint1778 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1778.USE = "hanim_r_ring2";
HAnimHumanoid46.joints[96] = HAnimJoint1778;

let HAnimJoint1779 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1779.USE = "hanim_l_ring3";
HAnimHumanoid46.joints[97] = HAnimJoint1779;

let HAnimJoint1780 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1780.USE = "hanim_r_ring3";
HAnimHumanoid46.joints[98] = HAnimJoint1780;

let HAnimJoint1781 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1781.USE = "hanim_l_shoulder";
HAnimHumanoid46.joints[99] = HAnimJoint1781;

let HAnimJoint1782 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1782.USE = "hanim_r_shoulder";
HAnimHumanoid46.joints[100] = HAnimJoint1782;

let HAnimJoint1783 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1783.USE = "hanim_l_sternoclavicular";
HAnimHumanoid46.joints[101] = HAnimJoint1783;

let HAnimJoint1784 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1784.USE = "hanim_r_sternoclavicular";
HAnimHumanoid46.joints[102] = HAnimJoint1784;

let HAnimJoint1785 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1785.USE = "hanim_l_subtalar";
HAnimHumanoid46.joints[103] = HAnimJoint1785;

let HAnimJoint1786 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1786.USE = "hanim_r_subtalar";
HAnimHumanoid46.joints[104] = HAnimJoint1786;

let HAnimJoint1787 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1787.USE = "hanim_l_thumb1";
HAnimHumanoid46.joints[105] = HAnimJoint1787;

let HAnimJoint1788 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1788.USE = "hanim_r_thumb1";
HAnimHumanoid46.joints[106] = HAnimJoint1788;

let HAnimJoint1789 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1789.USE = "hanim_l_thumb2";
HAnimHumanoid46.joints[107] = HAnimJoint1789;

let HAnimJoint1790 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1790.USE = "hanim_r_thumb2";
HAnimHumanoid46.joints[108] = HAnimJoint1790;

let HAnimJoint1791 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1791.USE = "hanim_l_thumb3";
HAnimHumanoid46.joints[109] = HAnimJoint1791;

let HAnimJoint1792 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1792.USE = "hanim_r_thumb3";
HAnimHumanoid46.joints[110] = HAnimJoint1792;

let HAnimJoint1793 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1793.USE = "hanim_l_wrist";
HAnimHumanoid46.joints[111] = HAnimJoint1793;

let HAnimJoint1794 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1794.USE = "hanim_r_wrist";
HAnimHumanoid46.joints[112] = HAnimJoint1794;

let HAnimSegment1795 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1795.USE = "hanim_pelvis";
HAnimHumanoid46.segments[113] = HAnimSegment1795;

let HAnimSegment1796 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1796.USE = "hanim_skull";
HAnimHumanoid46.segments[114] = HAnimSegment1796;

let HAnimSegment1797 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1797.USE = "hanim_jaw";
HAnimHumanoid46.segments[115] = HAnimSegment1797;

let HAnimSegment1798 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1798.USE = "hanim_c1";
HAnimHumanoid46.segments[116] = HAnimSegment1798;

let HAnimSegment1799 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1799.USE = "hanim_c2";
HAnimHumanoid46.segments[117] = HAnimSegment1799;

let HAnimSegment1800 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1800.USE = "hanim_c3";
HAnimHumanoid46.segments[118] = HAnimSegment1800;

let HAnimSegment1801 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1801.USE = "hanim_c4";
HAnimHumanoid46.segments[119] = HAnimSegment1801;

let HAnimSegment1802 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1802.USE = "hanim_c5";
HAnimHumanoid46.segments[120] = HAnimSegment1802;

let HAnimSegment1803 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1803.USE = "hanim_c6";
HAnimHumanoid46.segments[121] = HAnimSegment1803;

let HAnimSegment1804 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1804.USE = "hanim_c7";
HAnimHumanoid46.segments[122] = HAnimSegment1804;

let HAnimSegment1805 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1805.USE = "hanim_t1";
HAnimHumanoid46.segments[123] = HAnimSegment1805;

let HAnimSegment1806 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1806.USE = "hanim_t2";
HAnimHumanoid46.segments[124] = HAnimSegment1806;

let HAnimSegment1807 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1807.USE = "hanim_t3";
HAnimHumanoid46.segments[125] = HAnimSegment1807;

let HAnimSegment1808 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1808.USE = "hanim_t4";
HAnimHumanoid46.segments[126] = HAnimSegment1808;

let HAnimSegment1809 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1809.USE = "hanim_t5";
HAnimHumanoid46.segments[127] = HAnimSegment1809;

let HAnimSegment1810 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1810.USE = "hanim_t6";
HAnimHumanoid46.segments[128] = HAnimSegment1810;

let HAnimSegment1811 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1811.USE = "hanim_t7";
HAnimHumanoid46.segments[129] = HAnimSegment1811;

let HAnimSegment1812 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1812.USE = "hanim_t8";
HAnimHumanoid46.segments[130] = HAnimSegment1812;

let HAnimSegment1813 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1813.USE = "hanim_t9";
HAnimHumanoid46.segments[131] = HAnimSegment1813;

let HAnimSegment1814 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1814.USE = "hanim_t10";
HAnimHumanoid46.segments[132] = HAnimSegment1814;

let HAnimSegment1815 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1815.USE = "hanim_t11";
HAnimHumanoid46.segments[133] = HAnimSegment1815;

let HAnimSegment1816 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1816.USE = "hanim_t12";
HAnimHumanoid46.segments[134] = HAnimSegment1816;

let HAnimSegment1817 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1817.USE = "hanim_l1";
HAnimHumanoid46.segments[135] = HAnimSegment1817;

let HAnimSegment1818 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1818.USE = "hanim_l2";
HAnimHumanoid46.segments[136] = HAnimSegment1818;

let HAnimSegment1819 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1819.USE = "hanim_l3";
HAnimHumanoid46.segments[137] = HAnimSegment1819;

let HAnimSegment1820 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1820.USE = "hanim_l4";
HAnimHumanoid46.segments[138] = HAnimSegment1820;

let HAnimSegment1821 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1821.USE = "hanim_l5";
HAnimHumanoid46.segments[139] = HAnimSegment1821;

let HAnimSegment1822 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1822.USE = "hanim_sacrum";
HAnimHumanoid46.segments[140] = HAnimSegment1822;

let HAnimSegment1823 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1823.USE = "hanim_l_calf";
HAnimHumanoid46.segments[141] = HAnimSegment1823;

let HAnimSegment1824 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1824.USE = "hanim_r_calf";
HAnimHumanoid46.segments[142] = HAnimSegment1824;

let HAnimSegment1825 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1825.USE = "hanim_l_clavicle";
HAnimHumanoid46.segments[143] = HAnimSegment1825;

let HAnimSegment1826 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1826.USE = "hanim_r_clavicle";
HAnimHumanoid46.segments[144] = HAnimSegment1826;

let HAnimSegment1827 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1827.USE = "hanim_l_eyeball";
HAnimHumanoid46.segments[145] = HAnimSegment1827;

let HAnimSegment1828 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1828.USE = "hanim_r_eyeball";
HAnimHumanoid46.segments[146] = HAnimSegment1828;

let HAnimSegment1829 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1829.USE = "hanim_l_eyebrow";
HAnimHumanoid46.segments[147] = HAnimSegment1829;

let HAnimSegment1830 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1830.USE = "hanim_r_eyebrow";
HAnimHumanoid46.segments[148] = HAnimSegment1830;

let HAnimSegment1831 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1831.USE = "hanim_l_eyelid";
HAnimHumanoid46.segments[149] = HAnimSegment1831;

let HAnimSegment1832 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1832.USE = "hanim_r_eyelid";
HAnimHumanoid46.segments[150] = HAnimSegment1832;

let HAnimSegment1833 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1833.USE = "hanim_l_forearm";
HAnimHumanoid46.segments[151] = HAnimSegment1833;

let HAnimSegment1834 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1834.USE = "hanim_r_forearm";
HAnimHumanoid46.segments[152] = HAnimSegment1834;

let HAnimSegment1835 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1835.USE = "hanim_l_forefoot";
HAnimHumanoid46.segments[153] = HAnimSegment1835;

let HAnimSegment1836 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1836.USE = "hanim_r_forefoot";
HAnimHumanoid46.segments[154] = HAnimSegment1836;

let HAnimSegment1837 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1837.USE = "hanim_l_hand";
HAnimHumanoid46.segments[155] = HAnimSegment1837;

let HAnimSegment1838 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1838.USE = "hanim_r_hand";
HAnimHumanoid46.segments[156] = HAnimSegment1838;

let HAnimSegment1839 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1839.USE = "hanim_l_hindfoot";
HAnimHumanoid46.segments[157] = HAnimSegment1839;

let HAnimSegment1840 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1840.USE = "hanim_r_hindfoot";
HAnimHumanoid46.segments[158] = HAnimSegment1840;

let HAnimSegment1841 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1841.USE = "hanim_l_index_distal";
HAnimHumanoid46.segments[159] = HAnimSegment1841;

let HAnimSegment1842 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1842.USE = "hanim_r_index_distal";
HAnimHumanoid46.segments[160] = HAnimSegment1842;

let HAnimSegment1843 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1843.USE = "hanim_l_index_metacarpal";
HAnimHumanoid46.segments[161] = HAnimSegment1843;

let HAnimSegment1844 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1844.USE = "hanim_r_index_metacarpal";
HAnimHumanoid46.segments[162] = HAnimSegment1844;

let HAnimSegment1845 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1845.USE = "hanim_l_index_middle";
HAnimHumanoid46.segments[163] = HAnimSegment1845;

let HAnimSegment1846 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1846.USE = "hanim_r_index_middle";
HAnimHumanoid46.segments[164] = HAnimSegment1846;

let HAnimSegment1847 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1847.USE = "hanim_l_index_proximal";
HAnimHumanoid46.segments[165] = HAnimSegment1847;

let HAnimSegment1848 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1848.USE = "hanim_r_index_proximal";
HAnimHumanoid46.segments[166] = HAnimSegment1848;

let HAnimSegment1849 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1849.USE = "hanim_l_middistal";
HAnimHumanoid46.segments[167] = HAnimSegment1849;

let HAnimSegment1850 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1850.USE = "hanim_r_middistal";
HAnimHumanoid46.segments[168] = HAnimSegment1850;

let HAnimSegment1851 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1851.USE = "hanim_l_middle_distal";
HAnimHumanoid46.segments[169] = HAnimSegment1851;

let HAnimSegment1852 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1852.USE = "hanim_r_middle_distal";
HAnimHumanoid46.segments[170] = HAnimSegment1852;

let HAnimSegment1853 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1853.USE = "hanim_l_middle_metacarpal";
HAnimHumanoid46.segments[171] = HAnimSegment1853;

let HAnimSegment1854 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1854.USE = "hanim_r_middle_metacarpal";
HAnimHumanoid46.segments[172] = HAnimSegment1854;

let HAnimSegment1855 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1855.USE = "hanim_l_middle_middle";
HAnimHumanoid46.segments[173] = HAnimSegment1855;

let HAnimSegment1856 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1856.USE = "hanim_r_middle_middle";
HAnimHumanoid46.segments[174] = HAnimSegment1856;

let HAnimSegment1857 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1857.USE = "hanim_l_middle_proximal";
HAnimHumanoid46.segments[175] = HAnimSegment1857;

let HAnimSegment1858 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1858.USE = "hanim_r_middle_proximal";
HAnimHumanoid46.segments[176] = HAnimSegment1858;

let HAnimSegment1859 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1859.USE = "hanim_l_midproximal";
HAnimHumanoid46.segments[177] = HAnimSegment1859;

let HAnimSegment1860 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1860.USE = "hanim_r_midproximal";
HAnimHumanoid46.segments[178] = HAnimSegment1860;

let HAnimSegment1861 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1861.USE = "hanim_l_pinky_distal";
HAnimHumanoid46.segments[179] = HAnimSegment1861;

let HAnimSegment1862 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1862.USE = "hanim_r_pinky_distal";
HAnimHumanoid46.segments[180] = HAnimSegment1862;

let HAnimSegment1863 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1863.USE = "hanim_l_pinky_metacarpal";
HAnimHumanoid46.segments[181] = HAnimSegment1863;

let HAnimSegment1864 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1864.USE = "hanim_r_pinky_metacarpal";
HAnimHumanoid46.segments[182] = HAnimSegment1864;

let HAnimSegment1865 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1865.USE = "hanim_l_pinky_middle";
HAnimHumanoid46.segments[183] = HAnimSegment1865;

let HAnimSegment1866 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1866.USE = "hanim_r_pinky_middle";
HAnimHumanoid46.segments[184] = HAnimSegment1866;

let HAnimSegment1867 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1867.USE = "hanim_l_pinky_proximal";
HAnimHumanoid46.segments[185] = HAnimSegment1867;

let HAnimSegment1868 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1868.USE = "hanim_r_pinky_proximal";
HAnimHumanoid46.segments[186] = HAnimSegment1868;

let HAnimSegment1869 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1869.USE = "hanim_l_ring_distal";
HAnimHumanoid46.segments[187] = HAnimSegment1869;

let HAnimSegment1870 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1870.USE = "hanim_r_ring_distal";
HAnimHumanoid46.segments[188] = HAnimSegment1870;

let HAnimSegment1871 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1871.USE = "hanim_l_ring_metacarpal";
HAnimHumanoid46.segments[189] = HAnimSegment1871;

let HAnimSegment1872 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1872.USE = "hanim_r_ring_metacarpal";
HAnimHumanoid46.segments[190] = HAnimSegment1872;

let HAnimSegment1873 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1873.USE = "hanim_l_ring_middle";
HAnimHumanoid46.segments[191] = HAnimSegment1873;

let HAnimSegment1874 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1874.USE = "hanim_r_ring_middle";
HAnimHumanoid46.segments[192] = HAnimSegment1874;

let HAnimSegment1875 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1875.USE = "hanim_l_ring_proximal";
HAnimHumanoid46.segments[193] = HAnimSegment1875;

let HAnimSegment1876 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1876.USE = "hanim_r_ring_proximal";
HAnimHumanoid46.segments[194] = HAnimSegment1876;

let HAnimSegment1877 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1877.USE = "hanim_l_scapula";
HAnimHumanoid46.segments[195] = HAnimSegment1877;

let HAnimSegment1878 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1878.USE = "hanim_r_scapula";
HAnimHumanoid46.segments[196] = HAnimSegment1878;

let HAnimSegment1879 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1879.USE = "hanim_l_thigh";
HAnimHumanoid46.segments[197] = HAnimSegment1879;

let HAnimSegment1880 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1880.USE = "hanim_r_thigh";
HAnimHumanoid46.segments[198] = HAnimSegment1880;

let HAnimSegment1881 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1881.USE = "hanim_l_thumb_distal";
HAnimHumanoid46.segments[199] = HAnimSegment1881;

let HAnimSegment1882 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1882.USE = "hanim_r_thumb_distal";
HAnimHumanoid46.segments[200] = HAnimSegment1882;

let HAnimSegment1883 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1883.USE = "hanim_l_thumb_metacarpal";
HAnimHumanoid46.segments[201] = HAnimSegment1883;

let HAnimSegment1884 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1884.USE = "hanim_r_thumb_metacarpal";
HAnimHumanoid46.segments[202] = HAnimSegment1884;

let HAnimSegment1885 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1885.USE = "hanim_l_thumb_proximal";
HAnimHumanoid46.segments[203] = HAnimSegment1885;

let HAnimSegment1886 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1886.USE = "hanim_r_thumb_proximal";
HAnimHumanoid46.segments[204] = HAnimSegment1886;

let HAnimSegment1887 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1887.USE = "hanim_l_upperarm";
HAnimHumanoid46.segments[205] = HAnimSegment1887;

let HAnimSegment1888 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1888.USE = "hanim_r_upperarm";
HAnimHumanoid46.segments[206] = HAnimSegment1888;

let HAnimSite1889 = browser.currentScene.createNode("HAnimSite");
HAnimSite1889.USE = "hanim_crotch_pt";
HAnimHumanoid46.viewpoints[207] = HAnimSite1889;

let HAnimSite1890 = browser.currentScene.createNode("HAnimSite");
HAnimSite1890.USE = "hanim_skull_tip";
HAnimHumanoid46.viewpoints[208] = HAnimSite1890;

let HAnimSite1891 = browser.currentScene.createNode("HAnimSite");
HAnimSite1891.USE = "hanim_sellion_pt";
HAnimHumanoid46.viewpoints[209] = HAnimSite1891;

let HAnimSite1892 = browser.currentScene.createNode("HAnimSite");
HAnimSite1892.USE = "hanim_supramenton_pt";
HAnimHumanoid46.viewpoints[210] = HAnimSite1892;

let HAnimSite1893 = browser.currentScene.createNode("HAnimSite");
HAnimSite1893.USE = "hanim_nuchale_pt";
HAnimHumanoid46.viewpoints[211] = HAnimSite1893;

let HAnimSite1894 = browser.currentScene.createNode("HAnimSite");
HAnimSite1894.USE = "hanim_suprasternale_pt";
HAnimHumanoid46.viewpoints[212] = HAnimSite1894;

let HAnimSite1895 = browser.currentScene.createNode("HAnimSite");
HAnimSite1895.USE = "hanim_cervicale_pt";
HAnimHumanoid46.viewpoints[213] = HAnimSite1895;

let HAnimSite1896 = browser.currentScene.createNode("HAnimSite");
HAnimSite1896.USE = "hanim_substernale_pt";
HAnimHumanoid46.viewpoints[214] = HAnimSite1896;

let HAnimSite1897 = browser.currentScene.createNode("HAnimSite");
HAnimSite1897.USE = "hanim_rib10_midspine_pt";
HAnimHumanoid46.viewpoints[215] = HAnimSite1897;

let HAnimSite1898 = browser.currentScene.createNode("HAnimSite");
HAnimSite1898.USE = "hanim_waist_preferred_post_pt";
HAnimHumanoid46.viewpoints[216] = HAnimSite1898;

let HAnimSite1899 = browser.currentScene.createNode("HAnimSite");
HAnimSite1899.USE = "hanim_navel_pt";
HAnimHumanoid46.viewpoints[217] = HAnimSite1899;

let HAnimSite1900 = browser.currentScene.createNode("HAnimSite");
HAnimSite1900.USE = "hanim_l_acromion_pt";
HAnimHumanoid46.viewpoints[218] = HAnimSite1900;

let HAnimSite1901 = browser.currentScene.createNode("HAnimSite");
HAnimSite1901.USE = "hanim_r_acromion_pt";
HAnimHumanoid46.viewpoints[219] = HAnimSite1901;

let HAnimSite1902 = browser.currentScene.createNode("HAnimSite");
HAnimSite1902.USE = "hanim_r_asis_pt";
HAnimHumanoid46.viewpoints[220] = HAnimSite1902;

let HAnimSite1903 = browser.currentScene.createNode("HAnimSite");
HAnimSite1903.USE = "hanim_l_asis_pt";
HAnimHumanoid46.viewpoints[221] = HAnimSite1903;

let HAnimSite1904 = browser.currentScene.createNode("HAnimSite");
HAnimSite1904.USE = "hanim_l_axilla_ant_pt";
HAnimHumanoid46.viewpoints[222] = HAnimSite1904;

let HAnimSite1905 = browser.currentScene.createNode("HAnimSite");
HAnimSite1905.USE = "hanim_r_axilla_ant_pt";
HAnimHumanoid46.viewpoints[223] = HAnimSite1905;

let HAnimSite1906 = browser.currentScene.createNode("HAnimSite");
HAnimSite1906.USE = "hanim_l_axilla_post_pt";
HAnimHumanoid46.viewpoints[224] = HAnimSite1906;

let HAnimSite1907 = browser.currentScene.createNode("HAnimSite");
HAnimSite1907.USE = "hanim_r_axilla_post_pt";
HAnimHumanoid46.viewpoints[225] = HAnimSite1907;

let HAnimSite1908 = browser.currentScene.createNode("HAnimSite");
HAnimSite1908.USE = "hanim_l_calcaneous_post_pt";
HAnimHumanoid46.viewpoints[226] = HAnimSite1908;

let HAnimSite1909 = browser.currentScene.createNode("HAnimSite");
HAnimSite1909.USE = "hanim_r_calcaneous_post_pt";
HAnimHumanoid46.viewpoints[227] = HAnimSite1909;

let HAnimSite1910 = browser.currentScene.createNode("HAnimSite");
HAnimSite1910.USE = "hanim_l_clavicale_pt";
HAnimHumanoid46.viewpoints[228] = HAnimSite1910;

let HAnimSite1911 = browser.currentScene.createNode("HAnimSite");
HAnimSite1911.USE = "hanim_r_clavicale_pt";
HAnimHumanoid46.viewpoints[229] = HAnimSite1911;

let HAnimSite1912 = browser.currentScene.createNode("HAnimSite");
HAnimSite1912.USE = "hanim_l_dactylion_pt";
HAnimHumanoid46.viewpoints[230] = HAnimSite1912;

let HAnimSite1913 = browser.currentScene.createNode("HAnimSite");
HAnimSite1913.USE = "hanim_r_dactylion_pt";
HAnimHumanoid46.viewpoints[231] = HAnimSite1913;

let HAnimSite1914 = browser.currentScene.createNode("HAnimSite");
HAnimSite1914.USE = "hanim_l_digit2_pt";
HAnimHumanoid46.viewpoints[232] = HAnimSite1914;

let HAnimSite1915 = browser.currentScene.createNode("HAnimSite");
HAnimSite1915.USE = "hanim_r_digit2_pt";
HAnimHumanoid46.viewpoints[233] = HAnimSite1915;

let HAnimSite1916 = browser.currentScene.createNode("HAnimSite");
HAnimSite1916.USE = "hanim_l_femoral_lateral_epicn_pt";
HAnimHumanoid46.viewpoints[234] = HAnimSite1916;

let HAnimSite1917 = browser.currentScene.createNode("HAnimSite");
HAnimSite1917.USE = "hanim_r_femoral_lateral_epicn_pt";
HAnimHumanoid46.viewpoints[235] = HAnimSite1917;

let HAnimSite1918 = browser.currentScene.createNode("HAnimSite");
HAnimSite1918.USE = "hanim_l_femoral_medial_epicn_pt";
HAnimHumanoid46.viewpoints[236] = HAnimSite1918;

let HAnimSite1919 = browser.currentScene.createNode("HAnimSite");
HAnimSite1919.USE = "hanim_r_femoral_medial_epicn_pt";
HAnimHumanoid46.viewpoints[237] = HAnimSite1919;

let HAnimSite1920 = browser.currentScene.createNode("HAnimSite");
HAnimSite1920.USE = "hanim_l_forefoot_tip";
HAnimHumanoid46.viewpoints[238] = HAnimSite1920;

let HAnimSite1921 = browser.currentScene.createNode("HAnimSite");
HAnimSite1921.USE = "hanim_r_forefoot_tip";
HAnimHumanoid46.viewpoints[239] = HAnimSite1921;

let HAnimSite1922 = browser.currentScene.createNode("HAnimSite");
HAnimSite1922.USE = "hanim_r_gonion_pt";
HAnimHumanoid46.viewpoints[240] = HAnimSite1922;

let HAnimSite1923 = browser.currentScene.createNode("HAnimSite");
HAnimSite1923.USE = "hanim_l_gonion_pt";
HAnimHumanoid46.viewpoints[241] = HAnimSite1923;

let HAnimSite1924 = browser.currentScene.createNode("HAnimSite");
HAnimSite1924.USE = "hanim_l_humeral_lateral_epicn_pt";
HAnimHumanoid46.viewpoints[242] = HAnimSite1924;

let HAnimSite1925 = browser.currentScene.createNode("HAnimSite");
HAnimSite1925.USE = "hanim_r_humeral_lateral_epicn_pt";
HAnimHumanoid46.viewpoints[243] = HAnimSite1925;

let HAnimSite1926 = browser.currentScene.createNode("HAnimSite");
HAnimSite1926.USE = "hanim_l_humeral_medial_epicn_pt";
HAnimHumanoid46.viewpoints[244] = HAnimSite1926;

let HAnimSite1927 = browser.currentScene.createNode("HAnimSite");
HAnimSite1927.USE = "hanim_r_humeral_medial_epicn_pt";
HAnimHumanoid46.viewpoints[245] = HAnimSite1927;

let HAnimSite1928 = browser.currentScene.createNode("HAnimSite");
HAnimSite1928.USE = "hanim_r_iliocristale_pt";
HAnimHumanoid46.viewpoints[246] = HAnimSite1928;

let HAnimSite1929 = browser.currentScene.createNode("HAnimSite");
HAnimSite1929.USE = "hanim_l_iliocristale_pt";
HAnimHumanoid46.viewpoints[247] = HAnimSite1929;

let HAnimSite1930 = browser.currentScene.createNode("HAnimSite");
HAnimSite1930.USE = "hanim_l_index_distal_tip";
HAnimHumanoid46.viewpoints[248] = HAnimSite1930;

let HAnimSite1931 = browser.currentScene.createNode("HAnimSite");
HAnimSite1931.USE = "hanim_r_index_distal_tip";
HAnimHumanoid46.viewpoints[249] = HAnimSite1931;

let HAnimSite1932 = browser.currentScene.createNode("HAnimSite");
HAnimSite1932.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid46.viewpoints[250] = HAnimSite1932;

let HAnimSite1933 = browser.currentScene.createNode("HAnimSite");
HAnimSite1933.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid46.viewpoints[251] = HAnimSite1933;

let HAnimSite1934 = browser.currentScene.createNode("HAnimSite");
HAnimSite1934.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid46.viewpoints[252] = HAnimSite1934;

let HAnimSite1935 = browser.currentScene.createNode("HAnimSite");
HAnimSite1935.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid46.viewpoints[253] = HAnimSite1935;

let HAnimSite1936 = browser.currentScene.createNode("HAnimSite");
HAnimSite1936.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid46.viewpoints[254] = HAnimSite1936;

let HAnimSite1937 = browser.currentScene.createNode("HAnimSite");
HAnimSite1937.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid46.viewpoints[255] = HAnimSite1937;

let HAnimSite1938 = browser.currentScene.createNode("HAnimSite");
HAnimSite1938.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid46.viewpoints[256] = HAnimSite1938;

let HAnimSite1939 = browser.currentScene.createNode("HAnimSite");
HAnimSite1939.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid46.viewpoints[257] = HAnimSite1939;

let HAnimSite1940 = browser.currentScene.createNode("HAnimSite");
HAnimSite1940.USE = "hanim_l_metacarpal_pha2_pt";
HAnimHumanoid46.viewpoints[258] = HAnimSite1940;

let HAnimSite1941 = browser.currentScene.createNode("HAnimSite");
HAnimSite1941.USE = "hanim_r_metacarpal_pha2_pt";
HAnimHumanoid46.viewpoints[259] = HAnimSite1941;

let HAnimSite1942 = browser.currentScene.createNode("HAnimSite");
HAnimSite1942.USE = "hanim_l_metacarpal_pha5_pt";
HAnimHumanoid46.viewpoints[260] = HAnimSite1942;

let HAnimSite1943 = browser.currentScene.createNode("HAnimSite");
HAnimSite1943.USE = "hanim_r_metacarpal_pha5_pt";
HAnimHumanoid46.viewpoints[261] = HAnimSite1943;

let HAnimSite1944 = browser.currentScene.createNode("HAnimSite");
HAnimSite1944.USE = "hanim_l_metatarsal_pha1_pt";
HAnimHumanoid46.viewpoints[262] = HAnimSite1944;

let HAnimSite1945 = browser.currentScene.createNode("HAnimSite");
HAnimSite1945.USE = "hanim_r_metatarsal_pha1_pt";
HAnimHumanoid46.viewpoints[263] = HAnimSite1945;

let HAnimSite1946 = browser.currentScene.createNode("HAnimSite");
HAnimSite1946.USE = "hanim_l_metatarsal_pha5_pt";
HAnimHumanoid46.viewpoints[264] = HAnimSite1946;

let HAnimSite1947 = browser.currentScene.createNode("HAnimSite");
HAnimSite1947.USE = "hanim_r_metatarsal_pha5_pt";
HAnimHumanoid46.viewpoints[265] = HAnimSite1947;

let HAnimSite1948 = browser.currentScene.createNode("HAnimSite");
HAnimSite1948.USE = "hanim_l_middle_distal_tip";
HAnimHumanoid46.viewpoints[266] = HAnimSite1948;

let HAnimSite1949 = browser.currentScene.createNode("HAnimSite");
HAnimSite1949.USE = "hanim_r_middle_distal_tip";
HAnimHumanoid46.viewpoints[267] = HAnimSite1949;

let HAnimSite1950 = browser.currentScene.createNode("HAnimSite");
HAnimSite1950.USE = "hanim_r_neck_base_pt";
HAnimHumanoid46.viewpoints[268] = HAnimSite1950;

let HAnimSite1951 = browser.currentScene.createNode("HAnimSite");
HAnimSite1951.USE = "hanim_l_neck_base_pt";
HAnimHumanoid46.viewpoints[269] = HAnimSite1951;

let HAnimSite1952 = browser.currentScene.createNode("HAnimSite");
HAnimSite1952.USE = "hanim_l_olecranon_pt";
HAnimHumanoid46.viewpoints[270] = HAnimSite1952;

let HAnimSite1953 = browser.currentScene.createNode("HAnimSite");
HAnimSite1953.USE = "hanim_r_olecranon_pt";
HAnimHumanoid46.viewpoints[271] = HAnimSite1953;

let HAnimSite1954 = browser.currentScene.createNode("HAnimSite");
HAnimSite1954.USE = "hanim_l_pinky_distal_tip";
HAnimHumanoid46.viewpoints[272] = HAnimSite1954;

let HAnimSite1955 = browser.currentScene.createNode("HAnimSite");
HAnimSite1955.USE = "hanim_r_pinky_distal_tip";
HAnimHumanoid46.viewpoints[273] = HAnimSite1955;

let HAnimSite1956 = browser.currentScene.createNode("HAnimSite");
HAnimSite1956.USE = "hanim_r_psis_pt";
HAnimHumanoid46.viewpoints[274] = HAnimSite1956;

let HAnimSite1957 = browser.currentScene.createNode("HAnimSite");
HAnimSite1957.USE = "hanim_l_psis_pt";
HAnimHumanoid46.viewpoints[275] = HAnimSite1957;

let HAnimSite1958 = browser.currentScene.createNode("HAnimSite");
HAnimSite1958.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid46.viewpoints[276] = HAnimSite1958;

let HAnimSite1959 = browser.currentScene.createNode("HAnimSite");
HAnimSite1959.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid46.viewpoints[277] = HAnimSite1959;

let HAnimSite1960 = browser.currentScene.createNode("HAnimSite");
HAnimSite1960.USE = "hanim_l_radiale_pt";
HAnimHumanoid46.viewpoints[278] = HAnimSite1960;

let HAnimSite1961 = browser.currentScene.createNode("HAnimSite");
HAnimSite1961.USE = "hanim_r_radiale_pt";
HAnimHumanoid46.viewpoints[279] = HAnimSite1961;

let HAnimSite1962 = browser.currentScene.createNode("HAnimSite");
HAnimSite1962.USE = "hanim_r_rib10_pt";
HAnimHumanoid46.viewpoints[280] = HAnimSite1962;

let HAnimSite1963 = browser.currentScene.createNode("HAnimSite");
HAnimSite1963.USE = "hanim_l_rib10_pt";
HAnimHumanoid46.viewpoints[281] = HAnimSite1963;

let HAnimSite1964 = browser.currentScene.createNode("HAnimSite");
HAnimSite1964.USE = "hanim_l_ring_distal_tip";
HAnimHumanoid46.viewpoints[282] = HAnimSite1964;

let HAnimSite1965 = browser.currentScene.createNode("HAnimSite");
HAnimSite1965.USE = "hanim_r_ring_distal_tip";
HAnimHumanoid46.viewpoints[283] = HAnimSite1965;

let HAnimSite1966 = browser.currentScene.createNode("HAnimSite");
HAnimSite1966.USE = "hanim_temporomandibular_l_site_pt";
HAnimHumanoid46.viewpoints[284] = HAnimSite1966;

let HAnimSite1967 = browser.currentScene.createNode("HAnimSite");
HAnimSite1967.USE = "hanim_temporomandibular_r_site_pt";
HAnimHumanoid46.viewpoints[285] = HAnimSite1967;

let HAnimSite1968 = browser.currentScene.createNode("HAnimSite");
HAnimSite1968.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid46.viewpoints[286] = HAnimSite1968;

let HAnimSite1969 = browser.currentScene.createNode("HAnimSite");
HAnimSite1969.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid46.viewpoints[287] = HAnimSite1969;

let HAnimSite1970 = browser.currentScene.createNode("HAnimSite");
HAnimSite1970.USE = "hanim_r_thelion_pt";
HAnimHumanoid46.viewpoints[288] = HAnimSite1970;

let HAnimSite1971 = browser.currentScene.createNode("HAnimSite");
HAnimSite1971.USE = "hanim_l_thelion_pt";
HAnimHumanoid46.viewpoints[289] = HAnimSite1971;

let HAnimSite1972 = browser.currentScene.createNode("HAnimSite");
HAnimSite1972.USE = "hanim_l_thumb_distal_tip";
HAnimHumanoid46.viewpoints[290] = HAnimSite1972;

let HAnimSite1973 = browser.currentScene.createNode("HAnimSite");
HAnimSite1973.USE = "hanim_r_thumb_distal_tip";
HAnimHumanoid46.viewpoints[291] = HAnimSite1973;

let HAnimSite1974 = browser.currentScene.createNode("HAnimSite");
HAnimSite1974.USE = "hanim_r_tragion_pt";
HAnimHumanoid46.viewpoints[292] = HAnimSite1974;

let HAnimSite1975 = browser.currentScene.createNode("HAnimSite");
HAnimSite1975.USE = "hanim_l_tragion_pt";
HAnimHumanoid46.viewpoints[293] = HAnimSite1975;

let HAnimSite1976 = browser.currentScene.createNode("HAnimSite");
HAnimSite1976.USE = "hanim_r_trochanterion_pt";
HAnimHumanoid46.viewpoints[294] = HAnimSite1976;

let HAnimSite1977 = browser.currentScene.createNode("HAnimSite");
HAnimSite1977.USE = "hanim_l_trochanterion_pt";
HAnimHumanoid46.viewpoints[295] = HAnimSite1977;

let HAnimSite1978 = browser.currentScene.createNode("HAnimSite");
HAnimSite1978.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid46.viewpoints[296] = HAnimSite1978;

let HAnimSite1979 = browser.currentScene.createNode("HAnimSite");
HAnimSite1979.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid46.viewpoints[297] = HAnimSite1979;

browser.currentScene.children[12] = HAnimHumanoid46;

