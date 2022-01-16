#include "/c/x3d-code/www.web3d.org/x3d/languages/c/X3DLib/X3DLib.h"
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
meta6.name = "created";
meta6.content = "18 February 2021";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "23 December 2021";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "creator";
meta8.content = "Don Brutzman";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "reference";
meta9.content = "HAnim2SpecificationLOA3Invisible.x3d";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "reference";
meta10.content = "HAnim2SpecificationLOA3Animation.x3d";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "reference";
meta11.content = "HAnimSpecificationExampleChangeLog.txt";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "Image";
meta12.content = "images/BonesAllSkeletonFrontViewLOA1.png";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "Image";
meta13.content = "images/BonesAllSkeletonFrontViewLOA2.png";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "Image";
meta14.content = "images/BonesAllSkeletonFrontViewLOA3.png";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "TODO";
meta15.content = "move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "TODO";
meta16.content = "insert MetadataInteger nodes indicating LOA for each Joint and Segment";
head1.meta[14] = meta16;

meta meta17 = createNode("meta");
meta17.name = "reference";
meta17.content = "Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989.";
head1.meta[15] = meta17;

meta meta18 = createNode("meta");
meta18.name = "reference";
meta18.content = "http://www.cis.upenn.edu/~badler/anthro/89-71.ps";
head1.meta[16] = meta18;

meta meta19 = createNode("meta");
meta19.name = "reference";
meta19.content = "tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf";
head1.meta[17] = meta19;

meta meta20 = createNode("meta");
meta20.name = "translator";
meta20.content = "Don Brutzman and Joe Williams";
head1.meta[18] = meta20;

meta meta21 = createNode("meta");
meta21.name = "generator";
meta21.content = "BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo";
head1.meta[19] = meta21;

meta meta22 = createNode("meta");
meta22.name = "reference";
meta22.content = "originals/LOA3ExampleSourceWithDiamondsOriginal.wrl";
head1.meta[20] = meta22;

meta meta23 = createNode("meta");
meta23.name = "reference";
meta23.content = "originals/LOA3ExampleSourceWithDiamondsOriginal.x3d";
head1.meta[21] = meta23;

meta meta24 = createNode("meta");
meta24.name = "reference";
meta24.content = "originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d";
head1.meta[22] = meta24;

meta meta25 = createNode("meta");
meta25.name = "reference";
meta25.content = "HAnim Specification Table 4.4 - Face Joint object names, https://www.web3d.org/files/specifications/19774/V1.0/HAnim/concepts.html#FaceJointObjectNames";
head1.meta[23] = meta25;

meta meta26 = createNode("meta");
meta26.name = "generator";
meta26.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[24] = meta26;

meta meta27 = createNode("meta");
meta27.name = "identifier";
meta27.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/HAnim2SpecificationLOA3Illustrated.x3d";
head1.meta[25] = meta27;

meta meta28 = createNode("meta");
meta28.name = "license";
meta28.content = "../license.html";
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
WorldInfo33.info = new MFString(new java.lang.String[" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "]);
WorldInfo33.title = "HANIM 200x Default Joint Centers, LOA3";
Group32.children = new MFNode();

Group32.children[0] = WorldInfo33;

children[2] = Group32;

//TODO move viewpoints to be internal to HAnimHumanoid
//Viewpoint centerOfRotation=\"0 0.9149 0.0016\" matches initial at-rest locaton of the sacroliac. Note that these viewpoints are external to the HAnimHumanoid and do not move with the human.
Viewpoint Viewpoint34 = createNode("Viewpoint");
Viewpoint34.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint34.description = "Humanoid LOA 3 Front";
Viewpoint34.position = new SFVec3f(new float[0,0.4,4]);
children[3] = Viewpoint34;

Viewpoint Viewpoint35 = createNode("Viewpoint");
Viewpoint35.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint35.description = "Humanoid LOA 3 Front Close";
Viewpoint35.position = new SFVec3f(new float[0,0.8,2]);
children[4] = Viewpoint35;

Viewpoint Viewpoint36 = createNode("Viewpoint");
Viewpoint36.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint36.description = "Humanoid LOA 3 Front Closer";
Viewpoint36.position = new SFVec3f(new float[0,1.2,1]);
children[5] = Viewpoint36;

Viewpoint Viewpoint37 = createNode("Viewpoint");
Viewpoint37.centerOfRotation = new SFVec3f(new float[0,1.5,0.0016]);
Viewpoint37.description = "Humanoid LOA 3 Front Face";
Viewpoint37.position = new SFVec3f(new float[0,1.63,1]);
children[6] = Viewpoint37;

Viewpoint Viewpoint38 = createNode("Viewpoint");
Viewpoint38.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint38.description = "Humanoid LOA 3 Right Side";
Viewpoint38.orientation = new SFRotation(new float[0,1,0,1.5708]);
Viewpoint38.position = new SFVec3f(new float[2.6,0.8,0]);
children[7] = Viewpoint38;

Viewpoint Viewpoint39 = createNode("Viewpoint");
Viewpoint39.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint39.description = "Humanoid LOA 3 Right Side Close";
Viewpoint39.orientation = new SFRotation(new float[0,1,0,1.2]);
Viewpoint39.position = new SFVec3f(new float[1,0.8,0.5]);
children[8] = Viewpoint39;

Viewpoint Viewpoint40 = createNode("Viewpoint");
Viewpoint40.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint40.description = "Humanoid LOA 3 Left Side Close";
Viewpoint40.orientation = new SFRotation(new float[0,1,0,-1.2]);
Viewpoint40.position = new SFVec3f(new float[-1,0.8,0.5]);
children[9] = Viewpoint40;

Viewpoint Viewpoint41 = createNode("Viewpoint");
Viewpoint41.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint41.description = "Humanoid LOA 3 Left Side";
Viewpoint41.orientation = new SFRotation(new float[0,1,0,-1.5708]);
Viewpoint41.position = new SFVec3f(new float[-2.6,0.8,0]);
children[10] = Viewpoint41;

Viewpoint Viewpoint42 = createNode("Viewpoint");
Viewpoint42.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint42.description = "Humanoid LOA 3 Top";
Viewpoint42.orientation = new SFRotation(new float[1,0,0,-1.5708]);
Viewpoint42.position = new SFVec3f(new float[0,3.5,0]);
children[11] = Viewpoint42;

HAnimHumanoid HAnimHumanoid43 = createNode("HAnimHumanoid");
HAnimHumanoid43.name = "humanoid";
HAnimHumanoid43.DEF = "hanim_humanoid";
HAnimHumanoid43.loa = 3;
HAnimHumanoid43.version = "2.0";
//original HAnimHumanoid info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
//Only one root HAnimJoint is allowed
//original HAnimHumanoid info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
//Only one root HAnimJoint is allowed
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//original HAnimHumanoid info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//original HAnimHumanoid info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//original HAnimHumanoid info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//original HAnimHumanoid info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//original HAnimHumanoid info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//original HAnimHumanoid info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
//original HAnimHumanoid info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
//original HAnimHumanoid info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
//original HAnimHumanoid info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
//original HAnimHumanoid info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
//original HAnimHumanoid info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
//original HAnimHumanoid info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
//original HAnimHumanoid info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
//right between the eyes, stationary position not animating except with body itself
MetadataSet MetadataSet44 = createNode("MetadataSet");
MetadataSet44.name = "HAnimHumanoid.info";
MetadataSet44.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid";
MetadataString MetadataString45 = createNode("MetadataString");
MetadataString45.name = "authorName";
MetadataString45.value = new MFString(new java.lang.String["Matthew T. Beitler Joe D. Williams Don Brutzman"]);
MetadataSet44.value = new MFNode();

MetadataSet44.value[0] = MetadataString45;

MetadataString MetadataString46 = createNode("MetadataString");
MetadataString46.name = "authorEmail";
MetadataString46.value = new MFString(new java.lang.String["HAnim@web3D.org"]);
MetadataSet44.value[1] = MetadataString46;

MetadataString MetadataString47 = createNode("MetadataString");
MetadataString47.name = "copyright";
MetadataString47.value = new MFString(new java.lang.String["none"]);
MetadataSet44.value[2] = MetadataString47;

MetadataString MetadataString48 = createNode("MetadataString");
MetadataString48.name = "creationDate";
MetadataString48.value = new MFString(new java.lang.String["12 May 1999"]);
MetadataSet44.value[3] = MetadataString48;

MetadataFloat MetadataFloat49 = createNode("MetadataFloat");
MetadataFloat49.name = "height";
MetadataFloat49.value = new MFFloat(new float[1.7504]);
MetadataSet44.value[4] = MetadataFloat49;

MetadataString MetadataString50 = createNode("MetadataString");
MetadataString50.name = "humanoidVersion";
MetadataString50.value = new MFString(new java.lang.String["2.0"]);
MetadataSet44.value[5] = MetadataString50;

MetadataString MetadataString51 = createNode("MetadataString");
MetadataString51.name = "usageRestrictions";
MetadataString51.value = new MFString(new java.lang.String["none"]);
MetadataSet44.value[6] = MetadataString51;

HAnimHumanoid43.metadata = MetadataSet44;

HAnimJoint HAnimJoint52 = createNode("HAnimJoint");
HAnimJoint52.name = "humanoid_root";
HAnimJoint52.DEF = "hanim_humanoid_root";
HAnimJoint52.center = new SFVec3f(new float[0,0.824,0.0277]);
HAnimJoint52.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint52.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment53 = createNode("HAnimSegment");
HAnimSegment53.name = "sacrum";
HAnimSegment53.DEF = "hanim_sacrum";
//Visualization sphere for <HAnimJoint name='humanoid_root'/> is placed within <HAnimSegment name='sacrum'/>
TouchSensor TouchSensor54 = createNode("TouchSensor");
TouchSensor54.description = "HAnimJoint humanoid_root, HAnimSegment sacrum";
HAnimSegment53.children = new MFNode();

HAnimSegment53.children[0] = TouchSensor54;

Transform Transform55 = createNode("Transform");
Transform55.translation = new SFVec3f(new float[0,0.824,0.0277]);
Shape Shape56 = createNode("Shape");
Shape56.DEF = "HAnimJointShape";
Sphere Sphere57 = createNode("Sphere");
Sphere57.radius = 0.006;
Shape56.geometry = Sphere57;

Appearance Appearance58 = createNode("Appearance");
Appearance58.DEF = "HAnimJointAppearance";
Material Material59 = createNode("Material");
Material59.diffuseColor = new SFColor(new float[1,0.5,0]);
Material59.transparency = 0.5;
Appearance58.material = Material59;

Shape56.appearance = Appearance58;

Transform55.children = new MFNode();

Transform55.children[0] = Shape56;

HAnimSegment53.children[1] = Transform55;

//HAnimSegment visualization line from current <HAnimJoint name='humanoid_root'/> to child <HAnimJoint name='sacroiliac'/>
Shape Shape60 = createNode("Shape");
LineSet LineSet61 = createNode("LineSet");
LineSet61.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate62 = createNode("Coordinate");
Coordinate62.point = new MFVec3f(new float[0,0.824,0.0277,0,0.9149,0.0016]);
LineSet61.coord = Coordinate62;

ColorRGBA ColorRGBA63 = createNode("ColorRGBA");
ColorRGBA63.DEF = "HAnimSegmentLineColorRGBA";
ColorRGBA63.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1]);
LineSet61.color = ColorRGBA63;

Shape60.geometry = LineSet61;

HAnimSegment53.children[2] = Shape60;

//HAnimSegment visualization line from current <HAnimJoint name='humanoid_root'/> to child <HAnimJoint name='vl5'/>
Shape Shape64 = createNode("Shape");
LineSet LineSet65 = createNode("LineSet");
LineSet65.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate66 = createNode("Coordinate");
Coordinate66.point = new MFVec3f(new float[0,0.824,0.0277,0.0028,1.0568,-0.0776]);
LineSet65.coord = Coordinate66;

ColorRGBA ColorRGBA67 = createNode("ColorRGBA");
ColorRGBA67.USE = "HAnimSegmentLineColorRGBA";
LineSet65.color = ColorRGBA67;

Shape64.geometry = LineSet65;

HAnimSegment53.children[3] = Shape64;

HAnimJoint52.children = new MFNode();

HAnimJoint52.children[0] = HAnimSegment53;

HAnimJoint HAnimJoint68 = createNode("HAnimJoint");
HAnimJoint68.name = "sacroiliac";
HAnimJoint68.DEF = "hanim_sacroiliac";
HAnimJoint68.center = new SFVec3f(new float[0,0.9149,0.0016]);
HAnimJoint68.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint68.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment69 = createNode("HAnimSegment");
HAnimSegment69.name = "pelvis";
HAnimSegment69.DEF = "hanim_pelvis";
//Visualization sphere for <HAnimJoint name='sacroiliac'/> is placed within <HAnimSegment name='pelvis'/>
TouchSensor TouchSensor70 = createNode("TouchSensor");
TouchSensor70.description = "HAnimJoint sacroiliac, HAnimSegment pelvis";
HAnimSegment69.children = new MFNode();

HAnimSegment69.children[0] = TouchSensor70;

Transform Transform71 = createNode("Transform");
Transform71.translation = new SFVec3f(new float[0,0.9149,0.0016]);
Shape Shape72 = createNode("Shape");
Shape72.USE = "HAnimJointShape";
Transform71.children = new MFNode();

Transform71.children[0] = Shape72;

HAnimSegment69.children[1] = Transform71;

//HAnimSegment visualization line from current <HAnimJoint name='sacroiliac'/> to child <HAnimJoint name='l_hip'/>
Shape Shape73 = createNode("Shape");
LineSet LineSet74 = createNode("LineSet");
LineSet74.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate75 = createNode("Coordinate");
Coordinate75.point = new MFVec3f(new float[0,0.9149,0.0016,0.0961,0.9124,-0.0001]);
LineSet74.coord = Coordinate75;

ColorRGBA ColorRGBA76 = createNode("ColorRGBA");
ColorRGBA76.USE = "HAnimSegmentLineColorRGBA";
LineSet74.color = ColorRGBA76;

Shape73.geometry = LineSet74;

HAnimSegment69.children[2] = Shape73;

//HAnimSegment visualization line from current <HAnimJoint name='sacroiliac'/> to child <HAnimJoint name='r_hip'/>
Shape Shape77 = createNode("Shape");
LineSet LineSet78 = createNode("LineSet");
LineSet78.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate79 = createNode("Coordinate");
Coordinate79.point = new MFVec3f(new float[0,0.9149,0.0016,-0.0961,0.9124,-0.0001]);
LineSet78.coord = Coordinate79;

ColorRGBA ColorRGBA80 = createNode("ColorRGBA");
ColorRGBA80.USE = "HAnimSegmentLineColorRGBA";
LineSet78.color = ColorRGBA80;

Shape77.geometry = LineSet78;

HAnimSegment69.children[3] = Shape77;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_iliocristale_pt'/>
Shape Shape81 = createNode("Shape");
LineSet LineSet82 = createNode("LineSet");
LineSet82.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate83 = createNode("Coordinate");
Coordinate83.point = new MFVec3f(new float[0,0.9149,0.0016,-0.1525,1.0628,0.0035]);
LineSet82.coord = Coordinate83;

ColorRGBA ColorRGBA84 = createNode("ColorRGBA");
ColorRGBA84.DEF = "HAnimSiteLineColorRGBA";
ColorRGBA84.color = new MFColorRGBA(new float[1,0,0,1,1,0,0,0.1]);
LineSet82.color = ColorRGBA84;

Shape81.geometry = LineSet82;

HAnimSegment69.children[4] = Shape81;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_trochanterion_pt'/>
Shape Shape85 = createNode("Shape");
LineSet LineSet86 = createNode("LineSet");
LineSet86.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate87 = createNode("Coordinate");
Coordinate87.point = new MFVec3f(new float[0,0.9149,0.0016,-0.1689,0.8419,0.0352]);
LineSet86.coord = Coordinate87;

ColorRGBA ColorRGBA88 = createNode("ColorRGBA");
ColorRGBA88.USE = "HAnimSiteLineColorRGBA";
LineSet86.color = ColorRGBA88;

Shape85.geometry = LineSet86;

HAnimSegment69.children[5] = Shape85;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_iliocristale_pt'/>
Shape Shape89 = createNode("Shape");
LineSet LineSet90 = createNode("LineSet");
LineSet90.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate91 = createNode("Coordinate");
Coordinate91.point = new MFVec3f(new float[0,0.9149,0.0016,0.1612,1.0537,0.0008]);
LineSet90.coord = Coordinate91;

ColorRGBA ColorRGBA92 = createNode("ColorRGBA");
ColorRGBA92.USE = "HAnimSiteLineColorRGBA";
LineSet90.color = ColorRGBA92;

Shape89.geometry = LineSet90;

HAnimSegment69.children[6] = Shape89;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_trochanterion_pt'/>
Shape Shape93 = createNode("Shape");
LineSet LineSet94 = createNode("LineSet");
LineSet94.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate95 = createNode("Coordinate");
Coordinate95.point = new MFVec3f(new float[0,0.9149,0.0016,0.1677,0.8336,0.0303]);
LineSet94.coord = Coordinate95;

ColorRGBA ColorRGBA96 = createNode("ColorRGBA");
ColorRGBA96.USE = "HAnimSiteLineColorRGBA";
LineSet94.color = ColorRGBA96;

Shape93.geometry = LineSet94;

HAnimSegment69.children[7] = Shape93;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_asis_pt'/>
Shape Shape97 = createNode("Shape");
LineSet LineSet98 = createNode("LineSet");
LineSet98.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate99 = createNode("Coordinate");
Coordinate99.point = new MFVec3f(new float[0,0.9149,0.0016,-0.0887,1.0021,0.1112]);
LineSet98.coord = Coordinate99;

ColorRGBA ColorRGBA100 = createNode("ColorRGBA");
ColorRGBA100.USE = "HAnimSiteLineColorRGBA";
LineSet98.color = ColorRGBA100;

Shape97.geometry = LineSet98;

HAnimSegment69.children[8] = Shape97;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_asis_pt'/>
Shape Shape101 = createNode("Shape");
LineSet LineSet102 = createNode("LineSet");
LineSet102.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate103 = createNode("Coordinate");
Coordinate103.point = new MFVec3f(new float[0,0.9149,0.0016,0.0925,0.9983,0.1052]);
LineSet102.coord = Coordinate103;

ColorRGBA ColorRGBA104 = createNode("ColorRGBA");
ColorRGBA104.USE = "HAnimSiteLineColorRGBA";
LineSet102.color = ColorRGBA104;

Shape101.geometry = LineSet102;

HAnimSegment69.children[9] = Shape101;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_psis_pt'/>
Shape Shape105 = createNode("Shape");
LineSet LineSet106 = createNode("LineSet");
LineSet106.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate107 = createNode("Coordinate");
Coordinate107.point = new MFVec3f(new float[0,0.9149,0.0016,-0.0716,1.019,-0.1138]);
LineSet106.coord = Coordinate107;

ColorRGBA ColorRGBA108 = createNode("ColorRGBA");
ColorRGBA108.USE = "HAnimSiteLineColorRGBA";
LineSet106.color = ColorRGBA108;

Shape105.geometry = LineSet106;

HAnimSegment69.children[10] = Shape105;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_psis_pt'/>
Shape Shape109 = createNode("Shape");
LineSet LineSet110 = createNode("LineSet");
LineSet110.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate111 = createNode("Coordinate");
Coordinate111.point = new MFVec3f(new float[0,0.9149,0.0016,0.0774,1.019,-0.1151]);
LineSet110.coord = Coordinate111;

ColorRGBA ColorRGBA112 = createNode("ColorRGBA");
ColorRGBA112.USE = "HAnimSiteLineColorRGBA";
LineSet110.color = ColorRGBA112;

Shape109.geometry = LineSet110;

HAnimSegment69.children[11] = Shape109;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='crotch_pt'/>
Shape Shape113 = createNode("Shape");
LineSet LineSet114 = createNode("LineSet");
LineSet114.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate115 = createNode("Coordinate");
Coordinate115.point = new MFVec3f(new float[0,0.9149,0.0016,0.0034,0.8266,0.0257]);
LineSet114.coord = Coordinate115;

ColorRGBA ColorRGBA116 = createNode("ColorRGBA");
ColorRGBA116.USE = "HAnimSiteLineColorRGBA";
LineSet114.color = ColorRGBA116;

Shape113.geometry = LineSet114;

HAnimSegment69.children[12] = Shape113;

HAnimSite HAnimSite117 = createNode("HAnimSite");
HAnimSite117.name = "r_iliocristale_pt";
HAnimSite117.DEF = "hanim_r_iliocristale_pt";
HAnimSite117.translation = new SFVec3f(new float[-0.1525,1.0628,0.0035]);
//HAnimSite visualization shape
TouchSensor TouchSensor118 = createNode("TouchSensor");
TouchSensor118.description = "HAnimSite r_iliocristale_pt";
HAnimSite117.children = new MFNode();

HAnimSite117.children[0] = TouchSensor118;

Shape Shape119 = createNode("Shape");
Shape119.DEF = "HAnimSiteShape";
IndexedFaceSet IndexedFaceSet120 = createNode("IndexedFaceSet");
IndexedFaceSet120.DEF = "DiamondIFS";
IndexedFaceSet120.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet120.creaseAngle = 0.5;
IndexedFaceSet120.solid = False;
Coordinate Coordinate121 = createNode("Coordinate");
Coordinate121.point = new MFVec3f(new float[0,0.008,0,-0.008,0,0,0,0,0.008,0.008,0,0,0,0,-0.008,0,-0.008,0]);
IndexedFaceSet120.coord = Coordinate121;

Shape119.geometry = IndexedFaceSet120;

Appearance Appearance122 = createNode("Appearance");
Material Material123 = createNode("Material");
Material123.diffuseColor = new SFColor(new float[1,0,0]);
Appearance122.material = Material123;

Shape119.appearance = Appearance122;

HAnimSite117.children[1] = Shape119;

HAnimSegment69.children[13] = HAnimSite117;

HAnimSite HAnimSite124 = createNode("HAnimSite");
HAnimSite124.name = "r_trochanterion_pt";
HAnimSite124.DEF = "hanim_r_trochanterion_pt";
HAnimSite124.translation = new SFVec3f(new float[-0.1689,0.8419,0.0352]);
//HAnimSite visualization shape
TouchSensor TouchSensor125 = createNode("TouchSensor");
TouchSensor125.description = "HAnimSite r_trochanterion_pt";
HAnimSite124.children = new MFNode();

HAnimSite124.children[0] = TouchSensor125;

Shape Shape126 = createNode("Shape");
Shape126.USE = "HAnimSiteShape";
HAnimSite124.children[1] = Shape126;

HAnimSegment69.children[14] = HAnimSite124;

HAnimSite HAnimSite127 = createNode("HAnimSite");
HAnimSite127.name = "l_iliocristale_pt";
HAnimSite127.DEF = "hanim_l_iliocristale_pt";
HAnimSite127.translation = new SFVec3f(new float[0.1612,1.0537,0.0008]);
//HAnimSite visualization shape
TouchSensor TouchSensor128 = createNode("TouchSensor");
TouchSensor128.description = "HAnimSite l_iliocristale_pt";
HAnimSite127.children = new MFNode();

HAnimSite127.children[0] = TouchSensor128;

Shape Shape129 = createNode("Shape");
Shape129.USE = "HAnimSiteShape";
HAnimSite127.children[1] = Shape129;

HAnimSegment69.children[15] = HAnimSite127;

HAnimSite HAnimSite130 = createNode("HAnimSite");
HAnimSite130.name = "l_trochanterion_pt";
HAnimSite130.DEF = "hanim_l_trochanterion_pt";
HAnimSite130.translation = new SFVec3f(new float[0.1677,0.8336,0.0303]);
//HAnimSite visualization shape
TouchSensor TouchSensor131 = createNode("TouchSensor");
TouchSensor131.description = "HAnimSite l_trochanterion_pt";
HAnimSite130.children = new MFNode();

HAnimSite130.children[0] = TouchSensor131;

Shape Shape132 = createNode("Shape");
Shape132.USE = "HAnimSiteShape";
HAnimSite130.children[1] = Shape132;

HAnimSegment69.children[16] = HAnimSite130;

HAnimSite HAnimSite133 = createNode("HAnimSite");
HAnimSite133.name = "r_asis_pt";
HAnimSite133.DEF = "hanim_r_asis_pt";
HAnimSite133.translation = new SFVec3f(new float[-0.0887,1.0021,0.1112]);
//HAnimSite visualization shape
TouchSensor TouchSensor134 = createNode("TouchSensor");
TouchSensor134.description = "HAnimSite r_asis_pt";
HAnimSite133.children = new MFNode();

HAnimSite133.children[0] = TouchSensor134;

Shape Shape135 = createNode("Shape");
Shape135.USE = "HAnimSiteShape";
HAnimSite133.children[1] = Shape135;

HAnimSegment69.children[17] = HAnimSite133;

HAnimSite HAnimSite136 = createNode("HAnimSite");
HAnimSite136.name = "l_asis_pt";
HAnimSite136.DEF = "hanim_l_asis_pt";
HAnimSite136.translation = new SFVec3f(new float[0.0925,0.9983,0.1052]);
//HAnimSite visualization shape
TouchSensor TouchSensor137 = createNode("TouchSensor");
TouchSensor137.description = "HAnimSite l_asis_pt";
HAnimSite136.children = new MFNode();

HAnimSite136.children[0] = TouchSensor137;

Shape Shape138 = createNode("Shape");
Shape138.USE = "HAnimSiteShape";
HAnimSite136.children[1] = Shape138;

HAnimSegment69.children[18] = HAnimSite136;

HAnimSite HAnimSite139 = createNode("HAnimSite");
HAnimSite139.name = "r_psis_pt";
HAnimSite139.DEF = "hanim_r_psis_pt";
HAnimSite139.translation = new SFVec3f(new float[-0.0716,1.019,-0.1138]);
//HAnimSite visualization shape
TouchSensor TouchSensor140 = createNode("TouchSensor");
TouchSensor140.description = "HAnimSite r_psis_pt";
HAnimSite139.children = new MFNode();

HAnimSite139.children[0] = TouchSensor140;

Shape Shape141 = createNode("Shape");
Shape141.USE = "HAnimSiteShape";
HAnimSite139.children[1] = Shape141;

HAnimSegment69.children[19] = HAnimSite139;

HAnimSite HAnimSite142 = createNode("HAnimSite");
HAnimSite142.name = "l_psis_pt";
HAnimSite142.DEF = "hanim_l_psis_pt";
HAnimSite142.translation = new SFVec3f(new float[0.0774,1.019,-0.1151]);
//HAnimSite visualization shape
TouchSensor TouchSensor143 = createNode("TouchSensor");
TouchSensor143.description = "HAnimSite l_psis_pt";
HAnimSite142.children = new MFNode();

HAnimSite142.children[0] = TouchSensor143;

Shape Shape144 = createNode("Shape");
Shape144.USE = "HAnimSiteShape";
HAnimSite142.children[1] = Shape144;

HAnimSegment69.children[20] = HAnimSite142;

HAnimSite HAnimSite145 = createNode("HAnimSite");
HAnimSite145.name = "crotch_pt";
HAnimSite145.DEF = "hanim_crotch_pt";
HAnimSite145.translation = new SFVec3f(new float[0.0034,0.8266,0.0257]);
//HAnimSite visualization shape
TouchSensor TouchSensor146 = createNode("TouchSensor");
TouchSensor146.description = "HAnimSite crotch_pt";
HAnimSite145.children = new MFNode();

HAnimSite145.children[0] = TouchSensor146;

Shape Shape147 = createNode("Shape");
Shape147.USE = "HAnimSiteShape";
HAnimSite145.children[1] = Shape147;

HAnimSegment69.children[21] = HAnimSite145;

HAnimJoint68.children = new MFNode();

HAnimJoint68.children[0] = HAnimSegment69;

HAnimJoint HAnimJoint148 = createNode("HAnimJoint");
HAnimJoint148.name = "l_hip";
HAnimJoint148.DEF = "hanim_l_hip";
HAnimJoint148.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
HAnimJoint148.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint148.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment149 = createNode("HAnimSegment");
HAnimSegment149.name = "l_thigh";
HAnimSegment149.DEF = "hanim_l_thigh";
//Visualization sphere for <HAnimJoint name='l_hip'/> is placed within <HAnimSegment name='l_thigh'/>
TouchSensor TouchSensor150 = createNode("TouchSensor");
TouchSensor150.description = "HAnimJoint l_hip, HAnimSegment l_thigh";
HAnimSegment149.children = new MFNode();

HAnimSegment149.children[0] = TouchSensor150;

Transform Transform151 = createNode("Transform");
Transform151.translation = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
Shape Shape152 = createNode("Shape");
Shape152.USE = "HAnimJointShape";
Transform151.children = new MFNode();

Transform151.children[0] = Shape152;

HAnimSegment149.children[1] = Transform151;

//HAnimSegment visualization line from current <HAnimJoint name='l_hip'/> to child <HAnimJoint name='l_knee'/>
Shape Shape153 = createNode("Shape");
LineSet LineSet154 = createNode("LineSet");
LineSet154.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate155 = createNode("Coordinate");
Coordinate155.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.104,0.4867,0.0308]);
LineSet154.coord = Coordinate155;

ColorRGBA ColorRGBA156 = createNode("ColorRGBA");
ColorRGBA156.USE = "HAnimSegmentLineColorRGBA";
LineSet154.color = ColorRGBA156;

Shape153.geometry = LineSet154;

HAnimSegment149.children[2] = Shape153;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_knee_crease_pt'/>
Shape Shape157 = createNode("Shape");
LineSet LineSet158 = createNode("LineSet");
LineSet158.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate159 = createNode("Coordinate");
Coordinate159.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.0993,0.4881,-0.0309]);
LineSet158.coord = Coordinate159;

ColorRGBA ColorRGBA160 = createNode("ColorRGBA");
ColorRGBA160.USE = "HAnimSiteLineColorRGBA";
LineSet158.color = ColorRGBA160;

Shape157.geometry = LineSet158;

HAnimSegment149.children[3] = Shape157;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_lateral_epicn_pt'/>
Shape Shape161 = createNode("Shape");
LineSet LineSet162 = createNode("LineSet");
LineSet162.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate163 = createNode("Coordinate");
Coordinate163.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.1598,0.4967,0.0297]);
LineSet162.coord = Coordinate163;

ColorRGBA ColorRGBA164 = createNode("ColorRGBA");
ColorRGBA164.USE = "HAnimSiteLineColorRGBA";
LineSet162.color = ColorRGBA164;

Shape161.geometry = LineSet162;

HAnimSegment149.children[4] = Shape161;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_medial_epicn_pt'/>
Shape Shape165 = createNode("Shape");
LineSet LineSet166 = createNode("LineSet");
LineSet166.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate167 = createNode("Coordinate");
Coordinate167.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.0398,0.4946,0.0303]);
LineSet166.coord = Coordinate167;

ColorRGBA ColorRGBA168 = createNode("ColorRGBA");
ColorRGBA168.USE = "HAnimSiteLineColorRGBA";
LineSet166.color = ColorRGBA168;

Shape165.geometry = LineSet166;

HAnimSegment149.children[5] = Shape165;

HAnimSite HAnimSite169 = createNode("HAnimSite");
HAnimSite169.name = "l_knee_crease_pt";
HAnimSite169.DEF = "hanim_l_knee_crease_pt";
HAnimSite169.translation = new SFVec3f(new float[0.0993,0.4881,-0.0309]);
//HAnimSite visualization shape
TouchSensor TouchSensor170 = createNode("TouchSensor");
TouchSensor170.description = "HAnimSite l_knee_crease_pt";
HAnimSite169.children = new MFNode();

HAnimSite169.children[0] = TouchSensor170;

Shape Shape171 = createNode("Shape");
Shape171.USE = "HAnimSiteShape";
HAnimSite169.children[1] = Shape171;

HAnimSegment149.children[6] = HAnimSite169;

HAnimSite HAnimSite172 = createNode("HAnimSite");
HAnimSite172.name = "l_femoral_lateral_epicondyle_pt";
HAnimSite172.DEF = "hanim_l_femoral_lateral_epicondyle_pt";
HAnimSite172.translation = new SFVec3f(new float[0.1598,0.4967,0.0297]);
//HAnimSite visualization shape
TouchSensor TouchSensor173 = createNode("TouchSensor");
TouchSensor173.description = "HAnimSite l_femoral_lateral_epicn_pt";
HAnimSite172.children = new MFNode();

HAnimSite172.children[0] = TouchSensor173;

Shape Shape174 = createNode("Shape");
Shape174.USE = "HAnimSiteShape";
HAnimSite172.children[1] = Shape174;

HAnimSegment149.children[7] = HAnimSite172;

HAnimSite HAnimSite175 = createNode("HAnimSite");
HAnimSite175.name = "l_femoral_medial_epicondyle_pt";
HAnimSite175.DEF = "hanim_l_femoral_medial_epicondyle_pt";
HAnimSite175.translation = new SFVec3f(new float[0.0398,0.4946,0.0303]);
//HAnimSite visualization shape
TouchSensor TouchSensor176 = createNode("TouchSensor");
TouchSensor176.description = "HAnimSite l_femoral_medial_epicn_pt";
HAnimSite175.children = new MFNode();

HAnimSite175.children[0] = TouchSensor176;

Shape Shape177 = createNode("Shape");
Shape177.USE = "HAnimSiteShape";
HAnimSite175.children[1] = Shape177;

HAnimSegment149.children[8] = HAnimSite175;

HAnimJoint148.children = new MFNode();

HAnimJoint148.children[0] = HAnimSegment149;

HAnimJoint HAnimJoint178 = createNode("HAnimJoint");
HAnimJoint178.name = "l_knee";
HAnimJoint178.DEF = "hanim_l_knee";
HAnimJoint178.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
HAnimJoint178.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint178.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment179 = createNode("HAnimSegment");
HAnimSegment179.name = "l_calf";
HAnimSegment179.DEF = "hanim_l_calf";
//Visualization sphere for <HAnimJoint name='l_knee'/> is placed within <HAnimSegment name='l_calf'/>
TouchSensor TouchSensor180 = createNode("TouchSensor");
TouchSensor180.description = "HAnimJoint l_knee, HAnimSegment l_calf";
HAnimSegment179.children = new MFNode();

HAnimSegment179.children[0] = TouchSensor180;

Transform Transform181 = createNode("Transform");
Transform181.translation = new SFVec3f(new float[0.104,0.4867,0.0308]);
Shape Shape182 = createNode("Shape");
Shape182.USE = "HAnimJointShape";
Transform181.children = new MFNode();

Transform181.children[0] = Shape182;

HAnimSegment179.children[1] = Transform181;

//HAnimSegment visualization line from current <HAnimJoint name='l_knee'/> to child <HAnimJoint name='l_talocrural'/>
Shape Shape183 = createNode("Shape");
LineSet LineSet184 = createNode("LineSet");
LineSet184.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate185 = createNode("Coordinate");
Coordinate185.point = new MFVec3f(new float[0.104,0.4867,0.0308,0.1101,0.0656,-0.0736]);
LineSet184.coord = Coordinate185;

ColorRGBA ColorRGBA186 = createNode("ColorRGBA");
ColorRGBA186.USE = "HAnimSegmentLineColorRGBA";
LineSet184.color = ColorRGBA186;

Shape183.geometry = LineSet184;

HAnimSegment179.children[2] = Shape183;

HAnimJoint178.children = new MFNode();

HAnimJoint178.children[0] = HAnimSegment179;

HAnimJoint HAnimJoint187 = createNode("HAnimJoint");
HAnimJoint187.name = "l_talocrural";
HAnimJoint187.DEF = "hanim_l_talocrural";
HAnimJoint187.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
HAnimJoint187.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint187.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment188 = createNode("HAnimSegment");
HAnimSegment188.name = "l_talus";
HAnimSegment188.DEF = "hanim_l_talus";
//Visualization sphere for <HAnimJoint name='l_talocrural'/> is placed within <HAnimSegment name='l_talus'/>
TouchSensor TouchSensor189 = createNode("TouchSensor");
TouchSensor189.description = "HAnimJoint l_talocrural, HAnimSegment l_talus";
HAnimSegment188.children = new MFNode();

HAnimSegment188.children[0] = TouchSensor189;

Transform Transform190 = createNode("Transform");
Transform190.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
Shape Shape191 = createNode("Shape");
Shape191.USE = "HAnimJointShape";
Transform190.children = new MFNode();

Transform190.children[0] = Shape191;

HAnimSegment188.children[1] = Transform190;

//HAnimSegment visualization line from current <HAnimJoint name='l_talocrural'/> to child <HAnimJoint name='l_tarsometatarsal_2'/>
Shape Shape192 = createNode("Shape");
LineSet LineSet193 = createNode("LineSet");
LineSet193.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate194 = createNode("Coordinate");
Coordinate194.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.1086,0.0001,-0.0368]);
LineSet193.coord = Coordinate194;

ColorRGBA ColorRGBA195 = createNode("ColorRGBA");
ColorRGBA195.USE = "HAnimSegmentLineColorRGBA";
LineSet193.color = ColorRGBA195;

Shape192.geometry = LineSet193;

HAnimSegment188.children[2] = Shape192;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_talocrural'/> to <HAnimSite name='l_lateral_malleolus_pt'/>
Shape Shape196 = createNode("Shape");
LineSet LineSet197 = createNode("LineSet");
LineSet197.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate198 = createNode("Coordinate");
Coordinate198.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.1308,0.0597,-0.1032]);
LineSet197.coord = Coordinate198;

ColorRGBA ColorRGBA199 = createNode("ColorRGBA");
ColorRGBA199.USE = "HAnimSiteLineColorRGBA";
LineSet197.color = ColorRGBA199;

Shape196.geometry = LineSet197;

HAnimSegment188.children[3] = Shape196;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_talocrural'/> to <HAnimSite name='l_medial_malleolus_pt'/>
Shape Shape200 = createNode("Shape");
LineSet LineSet201 = createNode("LineSet");
LineSet201.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate202 = createNode("Coordinate");
Coordinate202.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.089,0.0716,-0.0881]);
LineSet201.coord = Coordinate202;

ColorRGBA ColorRGBA203 = createNode("ColorRGBA");
ColorRGBA203.USE = "HAnimSiteLineColorRGBA";
LineSet201.color = ColorRGBA203;

Shape200.geometry = LineSet201;

HAnimSegment188.children[4] = Shape200;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_talocrural'/> to <HAnimSite name='l_sphyrion_pt'/>
Shape Shape204 = createNode("Shape");
LineSet LineSet205 = createNode("LineSet");
LineSet205.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate206 = createNode("Coordinate");
Coordinate206.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.089,0.0575,-0.0943]);
LineSet205.coord = Coordinate206;

ColorRGBA ColorRGBA207 = createNode("ColorRGBA");
ColorRGBA207.USE = "HAnimSiteLineColorRGBA";
LineSet205.color = ColorRGBA207;

Shape204.geometry = LineSet205;

HAnimSegment188.children[5] = Shape204;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_talocrural'/> to <HAnimSite name='l_calcaneous_post_pt'/>
Shape Shape208 = createNode("Shape");
LineSet LineSet209 = createNode("LineSet");
LineSet209.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate210 = createNode("Coordinate");
Coordinate210.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.0974,0.0259,-0.1171]);
LineSet209.coord = Coordinate210;

ColorRGBA ColorRGBA211 = createNode("ColorRGBA");
ColorRGBA211.USE = "HAnimSiteLineColorRGBA";
LineSet209.color = ColorRGBA211;

Shape208.geometry = LineSet209;

HAnimSegment188.children[6] = Shape208;

HAnimSite HAnimSite212 = createNode("HAnimSite");
HAnimSite212.name = "l_lateral_malleolus_pt";
HAnimSite212.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite212.translation = new SFVec3f(new float[0.1308,0.0597,-0.1032]);
//HAnimSite visualization shape
TouchSensor TouchSensor213 = createNode("TouchSensor");
TouchSensor213.description = "HAnimSite l_lateral_malleolus_pt";
HAnimSite212.children = new MFNode();

HAnimSite212.children[0] = TouchSensor213;

Shape Shape214 = createNode("Shape");
Shape214.USE = "HAnimSiteShape";
HAnimSite212.children[1] = Shape214;

HAnimSegment188.children[7] = HAnimSite212;

HAnimSite HAnimSite215 = createNode("HAnimSite");
HAnimSite215.name = "l_medial_malleolus_pt";
HAnimSite215.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite215.translation = new SFVec3f(new float[0.089,0.0716,-0.0881]);
//HAnimSite visualization shape
TouchSensor TouchSensor216 = createNode("TouchSensor");
TouchSensor216.description = "HAnimSite l_medial_malleolus_pt";
HAnimSite215.children = new MFNode();

HAnimSite215.children[0] = TouchSensor216;

Shape Shape217 = createNode("Shape");
Shape217.USE = "HAnimSiteShape";
HAnimSite215.children[1] = Shape217;

HAnimSegment188.children[8] = HAnimSite215;

HAnimSite HAnimSite218 = createNode("HAnimSite");
HAnimSite218.name = "l_sphyrion_pt";
HAnimSite218.DEF = "hanim_l_sphyrion_pt";
HAnimSite218.translation = new SFVec3f(new float[0.089,0.0575,-0.0943]);
//HAnimSite visualization shape
TouchSensor TouchSensor219 = createNode("TouchSensor");
TouchSensor219.description = "HAnimSite l_sphyrion_pt";
HAnimSite218.children = new MFNode();

HAnimSite218.children[0] = TouchSensor219;

Shape Shape220 = createNode("Shape");
Shape220.USE = "HAnimSiteShape";
HAnimSite218.children[1] = Shape220;

HAnimSegment188.children[9] = HAnimSite218;

HAnimSite HAnimSite221 = createNode("HAnimSite");
HAnimSite221.name = "l_calcaneus_posterior_pt";
HAnimSite221.DEF = "hanim_l_calcaneus_posterior_pt";
HAnimSite221.translation = new SFVec3f(new float[0.0974,0.0259,-0.1171]);
//HAnimSite visualization shape
TouchSensor TouchSensor222 = createNode("TouchSensor");
TouchSensor222.description = "HAnimSite l_calcaneous_post_pt";
HAnimSite221.children = new MFNode();

HAnimSite221.children[0] = TouchSensor222;

Shape Shape223 = createNode("Shape");
Shape223.USE = "HAnimSiteShape";
HAnimSite221.children[1] = Shape223;

HAnimSegment188.children[10] = HAnimSite221;

HAnimJoint187.children = new MFNode();

HAnimJoint187.children[0] = HAnimSegment188;

HAnimJoint HAnimJoint224 = createNode("HAnimJoint");
HAnimJoint224.name = "l_tarsometatarsal_2";
HAnimJoint224.DEF = "hanim_l_tarsometatarsal_2";
HAnimJoint224.center = new SFVec3f(new float[0.1086,0.0001,-0.0368]);
HAnimJoint224.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint224.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment225 = createNode("HAnimSegment");
HAnimSegment225.name = "l_metatarsal_2";
HAnimSegment225.DEF = "hanim_l_metatarsal_2";
//Visualization sphere for <HAnimJoint name='l_tarsometatarsal_2'/> is placed within <HAnimSegment name='l_metatarsal_2'/>
TouchSensor TouchSensor226 = createNode("TouchSensor");
TouchSensor226.description = "HAnimJoint l_tarsometatarsal_2, HAnimSegment l_metatarsal_2";
HAnimSegment225.children = new MFNode();

HAnimSegment225.children[0] = TouchSensor226;

Transform Transform227 = createNode("Transform");
Transform227.translation = new SFVec3f(new float[0.1086,0.0001,-0.0368]);
Shape Shape228 = createNode("Shape");
Shape228.USE = "HAnimJointShape";
Transform227.children = new MFNode();

Transform227.children[0] = Shape228;

HAnimSegment225.children[1] = Transform227;

//HAnimSegment visualization line from current <HAnimJoint name='l_tarsometatarsal_2'/> to child <HAnimJoint name='l_metatarsophalangeal_2'/>
Shape Shape229 = createNode("Shape");
LineSet LineSet230 = createNode("LineSet");
LineSet230.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate231 = createNode("Coordinate");
Coordinate231.point = new MFVec3f(new float[0.1086,0.0001,-0.0368,0.1086,0.0001,0.0368]);
LineSet230.coord = Coordinate231;

ColorRGBA ColorRGBA232 = createNode("ColorRGBA");
ColorRGBA232.USE = "HAnimSegmentLineColorRGBA";
LineSet230.color = ColorRGBA232;

Shape229.geometry = LineSet230;

HAnimSegment225.children[2] = Shape229;

HAnimJoint224.children = new MFNode();

HAnimJoint224.children[0] = HAnimSegment225;

HAnimJoint HAnimJoint233 = createNode("HAnimJoint");
HAnimJoint233.name = "l_metatarsophalangeal_2";
HAnimJoint233.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint233.center = new SFVec3f(new float[0.1086,0.0001,0.0368]);
HAnimJoint233.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint233.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment234 = createNode("HAnimSegment");
HAnimSegment234.name = "l_tarsal_proximal_phalanx_2";
HAnimSegment234.DEF = "hanim_l_tarsal_proximal_phalanx_2";
//Visualization sphere for <HAnimJoint name='l_metatarsophalangeal_2'/> is placed within <HAnimSegment name='l_tarsal_proximal_phalanx_2'/>
TouchSensor TouchSensor235 = createNode("TouchSensor");
TouchSensor235.description = "HAnimJoint l_metatarsophalangeal_2, HAnimSegment l_tarsal_proximal_phalanx_2";
HAnimSegment234.children = new MFNode();

HAnimSegment234.children[0] = TouchSensor235;

Transform Transform236 = createNode("Transform");
Transform236.translation = new SFVec3f(new float[0.1086,0.0001,0.0368]);
Shape Shape237 = createNode("Shape");
Shape237.USE = "HAnimJointShape";
Transform236.children = new MFNode();

Transform236.children[0] = Shape237;

HAnimSegment234.children[1] = Transform236;

//HAnimSegment visualization line from current <HAnimJoint name='l_metatarsophalangeal_2'/> to child <HAnimJoint name='l_tarsal_distal_interphalangeal_2'/>
Shape Shape238 = createNode("Shape");
LineSet LineSet239 = createNode("LineSet");
LineSet239.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate240 = createNode("Coordinate");
Coordinate240.point = new MFVec3f(new float[0.1086,0.0001,0.0368,0.1086,0,0.0762]);
LineSet239.coord = Coordinate240;

ColorRGBA ColorRGBA241 = createNode("ColorRGBA");
ColorRGBA241.USE = "HAnimSegmentLineColorRGBA";
LineSet239.color = ColorRGBA241;

Shape238.geometry = LineSet239;

HAnimSegment234.children[2] = Shape238;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsophalangeal_2'/> to <HAnimSite name='l_metatarsal_pha1_pt'/>
Shape Shape242 = createNode("Shape");
LineSet LineSet243 = createNode("LineSet");
LineSet243.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate244 = createNode("Coordinate");
Coordinate244.point = new MFVec3f(new float[0.1086,0.0001,0.0368,0.0816,0.0232,0.0106]);
LineSet243.coord = Coordinate244;

ColorRGBA ColorRGBA245 = createNode("ColorRGBA");
ColorRGBA245.USE = "HAnimSiteLineColorRGBA";
LineSet243.color = ColorRGBA245;

Shape242.geometry = LineSet243;

HAnimSegment234.children[3] = Shape242;

HAnimSite HAnimSite246 = createNode("HAnimSite");
HAnimSite246.name = "l_metatarsal_phalanx_1_pt";
HAnimSite246.DEF = "hanim_l_metatarsal_phalanx_1_pt";
HAnimSite246.translation = new SFVec3f(new float[0.0816,0.0232,0.0106]);
//HAnimSite visualization shape
TouchSensor TouchSensor247 = createNode("TouchSensor");
TouchSensor247.description = "HAnimSite l_metatarsal_pha1_pt";
HAnimSite246.children = new MFNode();

HAnimSite246.children[0] = TouchSensor247;

Shape Shape248 = createNode("Shape");
Shape248.USE = "HAnimSiteShape";
HAnimSite246.children[1] = Shape248;

HAnimSegment234.children[4] = HAnimSite246;

HAnimJoint233.children = new MFNode();

HAnimJoint233.children[0] = HAnimSegment234;

HAnimJoint HAnimJoint249 = createNode("HAnimJoint");
HAnimJoint249.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint249.DEF = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimJoint249.center = new SFVec3f(new float[0.1086,0,0.0762]);
HAnimJoint249.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint249.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment250 = createNode("HAnimSegment");
HAnimSegment250.name = "l_tarsal_distal_phalanx_2";
HAnimSegment250.DEF = "hanim_l_tarsal_distal_phalanx_2";
//Visualization sphere for <HAnimJoint name='l_tarsal_distal_interphalangeal_2'/> is placed within <HAnimSegment name='l_tarsal_distal_phalanx_2'/>
TouchSensor TouchSensor251 = createNode("TouchSensor");
TouchSensor251.description = "HAnimJoint l_tarsal_distal_interphalangeal_2, HAnimSegment l_tarsal_distal_phalanx_2";
HAnimSegment250.children = new MFNode();

HAnimSegment250.children[0] = TouchSensor251;

Transform Transform252 = createNode("Transform");
Transform252.translation = new SFVec3f(new float[0.1086,0,0.0762]);
Shape Shape253 = createNode("Shape");
Shape253.USE = "HAnimJointShape";
Transform252.children = new MFNode();

Transform252.children[0] = Shape253;

HAnimSegment250.children[1] = Transform252;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='l_forefoot_tip'/>
Shape Shape254 = createNode("Shape");
LineSet LineSet255 = createNode("LineSet");
LineSet255.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate256 = createNode("Coordinate");
Coordinate256.point = new MFVec3f(new float[0.1086,0,0.0762,0.1354,0.0016,0.1476]);
LineSet255.coord = Coordinate256;

ColorRGBA ColorRGBA257 = createNode("ColorRGBA");
ColorRGBA257.USE = "HAnimSiteLineColorRGBA";
LineSet255.color = ColorRGBA257;

Shape254.geometry = LineSet255;

HAnimSegment250.children[2] = Shape254;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='l_metatarsal_pha5_pt'/>
Shape Shape258 = createNode("Shape");
LineSet LineSet259 = createNode("LineSet");
LineSet259.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate260 = createNode("Coordinate");
Coordinate260.point = new MFVec3f(new float[0.1086,0,0.0762,0.1825,0.007,0.0928]);
LineSet259.coord = Coordinate260;

ColorRGBA ColorRGBA261 = createNode("ColorRGBA");
ColorRGBA261.USE = "HAnimSiteLineColorRGBA";
LineSet259.color = ColorRGBA261;

Shape258.geometry = LineSet259;

HAnimSegment250.children[3] = Shape258;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='l_digit2_pt'/>
Shape Shape262 = createNode("Shape");
LineSet LineSet263 = createNode("LineSet");
LineSet263.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate264 = createNode("Coordinate");
Coordinate264.point = new MFVec3f(new float[0.1086,0,0.0762,0.1195,0.0079,0.1433]);
LineSet263.coord = Coordinate264;

ColorRGBA ColorRGBA265 = createNode("ColorRGBA");
ColorRGBA265.USE = "HAnimSiteLineColorRGBA";
LineSet263.color = ColorRGBA265;

Shape262.geometry = LineSet263;

HAnimSegment250.children[4] = Shape262;

HAnimSite HAnimSite266 = createNode("HAnimSite");
HAnimSite266.name = "l_forefoot_tip_pt";
HAnimSite266.DEF = "hanim_l_forefoot_tip_pt";
HAnimSite266.translation = new SFVec3f(new float[0.1354,0.0016,0.1476]);
//HAnimSite visualization shape
TouchSensor TouchSensor267 = createNode("TouchSensor");
TouchSensor267.description = "HAnimSite l_forefoot_tip";
HAnimSite266.children = new MFNode();

HAnimSite266.children[0] = TouchSensor267;

Shape Shape268 = createNode("Shape");
Shape268.USE = "HAnimSiteShape";
HAnimSite266.children[1] = Shape268;

HAnimSegment250.children[5] = HAnimSite266;

HAnimSite HAnimSite269 = createNode("HAnimSite");
HAnimSite269.name = "l_metatarsal_phalanx_5_pt";
HAnimSite269.DEF = "hanim_l_metatarsal_phalanx_5_pt";
HAnimSite269.translation = new SFVec3f(new float[0.1825,0.007,0.0928]);
//HAnimSite visualization shape
TouchSensor TouchSensor270 = createNode("TouchSensor");
TouchSensor270.description = "HAnimSite l_metatarsal_pha5_pt";
HAnimSite269.children = new MFNode();

HAnimSite269.children[0] = TouchSensor270;

Shape Shape271 = createNode("Shape");
Shape271.USE = "HAnimSiteShape";
HAnimSite269.children[1] = Shape271;

HAnimSegment250.children[6] = HAnimSite269;

HAnimSite HAnimSite272 = createNode("HAnimSite");
HAnimSite272.name = "l_tarsal_distal_phalanx_2_pt";
HAnimSite272.DEF = "hanim_l_tarsal_distal_phalanx_2_pt";
HAnimSite272.translation = new SFVec3f(new float[0.1195,0.0079,0.1433]);
//HAnimSite visualization shape
TouchSensor TouchSensor273 = createNode("TouchSensor");
TouchSensor273.description = "HAnimSite l_digit2_pt";
HAnimSite272.children = new MFNode();

HAnimSite272.children[0] = TouchSensor273;

Shape Shape274 = createNode("Shape");
Shape274.USE = "HAnimSiteShape";
HAnimSite272.children[1] = Shape274;

HAnimSegment250.children[7] = HAnimSite272;

HAnimJoint249.children = new MFNode();

HAnimJoint249.children[0] = HAnimSegment250;

HAnimJoint233.children[1] = HAnimJoint249;

HAnimJoint224.children[1] = HAnimJoint233;

HAnimJoint187.children[1] = HAnimJoint224;

HAnimJoint178.children[1] = HAnimJoint187;

HAnimJoint148.children[1] = HAnimJoint178;

HAnimJoint68.children[1] = HAnimJoint148;

HAnimJoint HAnimJoint275 = createNode("HAnimJoint");
HAnimJoint275.name = "r_hip";
HAnimJoint275.DEF = "hanim_r_hip";
HAnimJoint275.center = new SFVec3f(new float[-0.0961,0.9124,-0.0001]);
HAnimJoint275.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint275.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment276 = createNode("HAnimSegment");
HAnimSegment276.name = "r_thigh";
HAnimSegment276.DEF = "hanim_r_thigh";
//Visualization sphere for <HAnimJoint name='r_hip'/> is placed within <HAnimSegment name='r_thigh'/>
TouchSensor TouchSensor277 = createNode("TouchSensor");
TouchSensor277.description = "HAnimJoint r_hip, HAnimSegment r_thigh";
HAnimSegment276.children = new MFNode();

HAnimSegment276.children[0] = TouchSensor277;

Transform Transform278 = createNode("Transform");
Transform278.translation = new SFVec3f(new float[-0.0961,0.9124,-0.0001]);
Shape Shape279 = createNode("Shape");
Shape279.USE = "HAnimJointShape";
Transform278.children = new MFNode();

Transform278.children[0] = Shape279;

HAnimSegment276.children[1] = Transform278;

//HAnimSegment visualization line from current <HAnimJoint name='r_hip'/> to child <HAnimJoint name='r_knee'/>
Shape Shape280 = createNode("Shape");
LineSet LineSet281 = createNode("LineSet");
LineSet281.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate282 = createNode("Coordinate");
Coordinate282.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.104,0.4867,0.0308]);
LineSet281.coord = Coordinate282;

ColorRGBA ColorRGBA283 = createNode("ColorRGBA");
ColorRGBA283.USE = "HAnimSegmentLineColorRGBA";
LineSet281.color = ColorRGBA283;

Shape280.geometry = LineSet281;

HAnimSegment276.children[2] = Shape280;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_knee_crease_pt'/>
Shape Shape284 = createNode("Shape");
LineSet LineSet285 = createNode("LineSet");
LineSet285.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate286 = createNode("Coordinate");
Coordinate286.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.0825,0.4932,-0.0326]);
LineSet285.coord = Coordinate286;

ColorRGBA ColorRGBA287 = createNode("ColorRGBA");
ColorRGBA287.USE = "HAnimSiteLineColorRGBA";
LineSet285.color = ColorRGBA287;

Shape284.geometry = LineSet285;

HAnimSegment276.children[3] = Shape284;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_lateral_epicn_pt'/>
Shape Shape288 = createNode("Shape");
LineSet LineSet289 = createNode("LineSet");
LineSet289.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate290 = createNode("Coordinate");
Coordinate290.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.1421,0.4992,0.031]);
LineSet289.coord = Coordinate290;

ColorRGBA ColorRGBA291 = createNode("ColorRGBA");
ColorRGBA291.USE = "HAnimSiteLineColorRGBA";
LineSet289.color = ColorRGBA291;

Shape288.geometry = LineSet289;

HAnimSegment276.children[4] = Shape288;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_medial_epicn_pt'/>
Shape Shape292 = createNode("Shape");
LineSet LineSet293 = createNode("LineSet");
LineSet293.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate294 = createNode("Coordinate");
Coordinate294.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.0221,0.5014,0.0289]);
LineSet293.coord = Coordinate294;

ColorRGBA ColorRGBA295 = createNode("ColorRGBA");
ColorRGBA295.USE = "HAnimSiteLineColorRGBA";
LineSet293.color = ColorRGBA295;

Shape292.geometry = LineSet293;

HAnimSegment276.children[5] = Shape292;

HAnimSite HAnimSite296 = createNode("HAnimSite");
HAnimSite296.name = "r_knee_crease_pt";
HAnimSite296.DEF = "hanim_r_knee_crease_pt";
HAnimSite296.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
//HAnimSite visualization shape
TouchSensor TouchSensor297 = createNode("TouchSensor");
TouchSensor297.description = "HAnimSite r_knee_crease_pt";
HAnimSite296.children = new MFNode();

HAnimSite296.children[0] = TouchSensor297;

Shape Shape298 = createNode("Shape");
Shape298.USE = "HAnimSiteShape";
HAnimSite296.children[1] = Shape298;

HAnimSegment276.children[6] = HAnimSite296;

HAnimSite HAnimSite299 = createNode("HAnimSite");
HAnimSite299.name = "r_femoral_lateral_epicondyle_pt";
HAnimSite299.DEF = "hanim_r_femoral_lateral_epicondyle_pt";
HAnimSite299.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
//HAnimSite visualization shape
TouchSensor TouchSensor300 = createNode("TouchSensor");
TouchSensor300.description = "HAnimSite r_femoral_lateral_epicn_pt";
HAnimSite299.children = new MFNode();

HAnimSite299.children[0] = TouchSensor300;

Shape Shape301 = createNode("Shape");
Shape301.USE = "HAnimSiteShape";
HAnimSite299.children[1] = Shape301;

HAnimSegment276.children[7] = HAnimSite299;

HAnimSite HAnimSite302 = createNode("HAnimSite");
HAnimSite302.name = "r_femoral_medial_epicondyle_pt";
HAnimSite302.DEF = "hanim_r_femoral_medial_epicondyle_pt";
HAnimSite302.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
//HAnimSite visualization shape
TouchSensor TouchSensor303 = createNode("TouchSensor");
TouchSensor303.description = "HAnimSite r_femoral_medial_epicn_pt";
HAnimSite302.children = new MFNode();

HAnimSite302.children[0] = TouchSensor303;

Shape Shape304 = createNode("Shape");
Shape304.USE = "HAnimSiteShape";
HAnimSite302.children[1] = Shape304;

HAnimSegment276.children[8] = HAnimSite302;

HAnimJoint275.children = new MFNode();

HAnimJoint275.children[0] = HAnimSegment276;

HAnimJoint HAnimJoint305 = createNode("HAnimJoint");
HAnimJoint305.name = "r_knee";
HAnimJoint305.DEF = "hanim_r_knee";
HAnimJoint305.center = new SFVec3f(new float[-0.104,0.4867,0.0308]);
HAnimJoint305.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint305.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment306 = createNode("HAnimSegment");
HAnimSegment306.name = "r_calf";
HAnimSegment306.DEF = "hanim_r_calf";
//Visualization sphere for <HAnimJoint name='r_knee'/> is placed within <HAnimSegment name='r_calf'/>
TouchSensor TouchSensor307 = createNode("TouchSensor");
TouchSensor307.description = "HAnimJoint r_knee, HAnimSegment r_calf";
HAnimSegment306.children = new MFNode();

HAnimSegment306.children[0] = TouchSensor307;

Transform Transform308 = createNode("Transform");
Transform308.translation = new SFVec3f(new float[-0.104,0.4867,0.0308]);
Shape Shape309 = createNode("Shape");
Shape309.USE = "HAnimJointShape";
Transform308.children = new MFNode();

Transform308.children[0] = Shape309;

HAnimSegment306.children[1] = Transform308;

//HAnimSegment visualization line from current <HAnimJoint name='r_knee'/> to child <HAnimJoint name='r_talocrural'/>
Shape Shape310 = createNode("Shape");
LineSet LineSet311 = createNode("LineSet");
LineSet311.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate312 = createNode("Coordinate");
Coordinate312.point = new MFVec3f(new float[-0.104,0.4867,0.0308,-0.1101,0.0656,-0.0736]);
LineSet311.coord = Coordinate312;

ColorRGBA ColorRGBA313 = createNode("ColorRGBA");
ColorRGBA313.USE = "HAnimSegmentLineColorRGBA";
LineSet311.color = ColorRGBA313;

Shape310.geometry = LineSet311;

HAnimSegment306.children[2] = Shape310;

HAnimJoint305.children = new MFNode();

HAnimJoint305.children[0] = HAnimSegment306;

HAnimJoint HAnimJoint314 = createNode("HAnimJoint");
HAnimJoint314.name = "r_talocrural";
HAnimJoint314.DEF = "hanim_r_talocrural";
HAnimJoint314.center = new SFVec3f(new float[-0.1101,0.0656,-0.0736]);
HAnimJoint314.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint314.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment315 = createNode("HAnimSegment");
HAnimSegment315.name = "r_talus";
HAnimSegment315.DEF = "hanim_r_talus";
//Visualization sphere for <HAnimJoint name='r_talocrural'/> is placed within <HAnimSegment name='r_talus'/>
TouchSensor TouchSensor316 = createNode("TouchSensor");
TouchSensor316.description = "HAnimJoint r_talocrural, HAnimSegment r_talus";
HAnimSegment315.children = new MFNode();

HAnimSegment315.children[0] = TouchSensor316;

Transform Transform317 = createNode("Transform");
Transform317.translation = new SFVec3f(new float[-0.1101,0.0656,-0.0736]);
Shape Shape318 = createNode("Shape");
Shape318.USE = "HAnimJointShape";
Transform317.children = new MFNode();

Transform317.children[0] = Shape318;

HAnimSegment315.children[1] = Transform317;

//HAnimSegment visualization line from current <HAnimJoint name='r_talocrural'/> to child <HAnimJoint name='r_tarsometatarsal_2'/>
Shape Shape319 = createNode("Shape");
LineSet LineSet320 = createNode("LineSet");
LineSet320.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate321 = createNode("Coordinate");
Coordinate321.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.1086,0.0001,-0.0368]);
LineSet320.coord = Coordinate321;

ColorRGBA ColorRGBA322 = createNode("ColorRGBA");
ColorRGBA322.USE = "HAnimSegmentLineColorRGBA";
LineSet320.color = ColorRGBA322;

Shape319.geometry = LineSet320;

HAnimSegment315.children[2] = Shape319;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_talocrural'/> to <HAnimSite name='r_lateral_malleolus_pt'/>
Shape Shape323 = createNode("Shape");
LineSet LineSet324 = createNode("LineSet");
LineSet324.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate325 = createNode("Coordinate");
Coordinate325.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.1006,0.0658,-0.1075]);
LineSet324.coord = Coordinate325;

ColorRGBA ColorRGBA326 = createNode("ColorRGBA");
ColorRGBA326.USE = "HAnimSiteLineColorRGBA";
LineSet324.color = ColorRGBA326;

Shape323.geometry = LineSet324;

HAnimSegment315.children[3] = Shape323;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_talocrural'/> to <HAnimSite name='r_medial_malleolus_pt'/>
Shape Shape327 = createNode("Shape");
LineSet LineSet328 = createNode("LineSet");
LineSet328.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate329 = createNode("Coordinate");
Coordinate329.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.0591,0.076,-0.0928]);
LineSet328.coord = Coordinate329;

ColorRGBA ColorRGBA330 = createNode("ColorRGBA");
ColorRGBA330.USE = "HAnimSiteLineColorRGBA";
LineSet328.color = ColorRGBA330;

Shape327.geometry = LineSet328;

HAnimSegment315.children[4] = Shape327;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_talocrural'/> to <HAnimSite name='r_sphyrion_pt'/>
Shape Shape331 = createNode("Shape");
LineSet LineSet332 = createNode("LineSet");
LineSet332.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate333 = createNode("Coordinate");
Coordinate333.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.0603,0.061,-0.1002]);
LineSet332.coord = Coordinate333;

ColorRGBA ColorRGBA334 = createNode("ColorRGBA");
ColorRGBA334.USE = "HAnimSiteLineColorRGBA";
LineSet332.color = ColorRGBA334;

Shape331.geometry = LineSet332;

HAnimSegment315.children[5] = Shape331;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_talocrural'/> to <HAnimSite name='r_calcaneous_post_pt'/>
Shape Shape335 = createNode("Shape");
LineSet LineSet336 = createNode("LineSet");
LineSet336.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate337 = createNode("Coordinate");
Coordinate337.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.0692,0.0297,-0.1221]);
LineSet336.coord = Coordinate337;

ColorRGBA ColorRGBA338 = createNode("ColorRGBA");
ColorRGBA338.USE = "HAnimSiteLineColorRGBA";
LineSet336.color = ColorRGBA338;

Shape335.geometry = LineSet336;

HAnimSegment315.children[6] = Shape335;

HAnimSite HAnimSite339 = createNode("HAnimSite");
HAnimSite339.name = "r_lateral_malleolus_pt";
HAnimSite339.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite339.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
//HAnimSite visualization shape
TouchSensor TouchSensor340 = createNode("TouchSensor");
TouchSensor340.description = "HAnimSite r_lateral_malleolus_pt";
HAnimSite339.children = new MFNode();

HAnimSite339.children[0] = TouchSensor340;

Shape Shape341 = createNode("Shape");
Shape341.USE = "HAnimSiteShape";
HAnimSite339.children[1] = Shape341;

HAnimSegment315.children[7] = HAnimSite339;

HAnimSite HAnimSite342 = createNode("HAnimSite");
HAnimSite342.name = "r_medial_malleolus_pt";
HAnimSite342.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite342.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
//HAnimSite visualization shape
TouchSensor TouchSensor343 = createNode("TouchSensor");
TouchSensor343.description = "HAnimSite r_medial_malleolus_pt";
HAnimSite342.children = new MFNode();

HAnimSite342.children[0] = TouchSensor343;

Shape Shape344 = createNode("Shape");
Shape344.USE = "HAnimSiteShape";
HAnimSite342.children[1] = Shape344;

HAnimSegment315.children[8] = HAnimSite342;

HAnimSite HAnimSite345 = createNode("HAnimSite");
HAnimSite345.name = "r_sphyrion_pt";
HAnimSite345.DEF = "hanim_r_sphyrion_pt";
HAnimSite345.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
//HAnimSite visualization shape
TouchSensor TouchSensor346 = createNode("TouchSensor");
TouchSensor346.description = "HAnimSite r_sphyrion_pt";
HAnimSite345.children = new MFNode();

HAnimSite345.children[0] = TouchSensor346;

Shape Shape347 = createNode("Shape");
Shape347.USE = "HAnimSiteShape";
HAnimSite345.children[1] = Shape347;

HAnimSegment315.children[9] = HAnimSite345;

HAnimSite HAnimSite348 = createNode("HAnimSite");
HAnimSite348.name = "r_calcaneus_posterior_pt";
HAnimSite348.DEF = "hanim_r_calcaneus_posterior_pt";
HAnimSite348.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
//HAnimSite visualization shape
TouchSensor TouchSensor349 = createNode("TouchSensor");
TouchSensor349.description = "HAnimSite r_calcaneous_post_pt";
HAnimSite348.children = new MFNode();

HAnimSite348.children[0] = TouchSensor349;

Shape Shape350 = createNode("Shape");
Shape350.USE = "HAnimSiteShape";
HAnimSite348.children[1] = Shape350;

HAnimSegment315.children[10] = HAnimSite348;

HAnimJoint314.children = new MFNode();

HAnimJoint314.children[0] = HAnimSegment315;

HAnimJoint HAnimJoint351 = createNode("HAnimJoint");
HAnimJoint351.name = "r_tarsometatarsal_2";
HAnimJoint351.DEF = "hanim_r_tarsometatarsal_2";
HAnimJoint351.center = new SFVec3f(new float[-0.1086,0.0001,-0.0368]);
HAnimJoint351.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint351.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment352 = createNode("HAnimSegment");
HAnimSegment352.name = "r_metatarsal_2";
HAnimSegment352.DEF = "hanim_r_metatarsal_2";
//Visualization sphere for <HAnimJoint name='r_tarsometatarsal_2'/> is placed within <HAnimSegment name='r_metatarsal_2'/>
TouchSensor TouchSensor353 = createNode("TouchSensor");
TouchSensor353.description = "HAnimJoint r_tarsometatarsal_2, HAnimSegment r_metatarsal_2";
HAnimSegment352.children = new MFNode();

HAnimSegment352.children[0] = TouchSensor353;

Transform Transform354 = createNode("Transform");
Transform354.translation = new SFVec3f(new float[-0.1086,0.0001,-0.0368]);
Shape Shape355 = createNode("Shape");
Shape355.USE = "HAnimJointShape";
Transform354.children = new MFNode();

Transform354.children[0] = Shape355;

HAnimSegment352.children[1] = Transform354;

//HAnimSegment visualization line from current <HAnimJoint name='r_tarsometatarsal_2'/> to child <HAnimJoint name='r_metatarsophalangeal_2'/>
Shape Shape356 = createNode("Shape");
LineSet LineSet357 = createNode("LineSet");
LineSet357.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate358 = createNode("Coordinate");
Coordinate358.point = new MFVec3f(new float[-0.1086,0.0001,-0.0368,-0.1086,0.0001,0.0368]);
LineSet357.coord = Coordinate358;

ColorRGBA ColorRGBA359 = createNode("ColorRGBA");
ColorRGBA359.USE = "HAnimSegmentLineColorRGBA";
LineSet357.color = ColorRGBA359;

Shape356.geometry = LineSet357;

HAnimSegment352.children[2] = Shape356;

HAnimJoint351.children = new MFNode();

HAnimJoint351.children[0] = HAnimSegment352;

HAnimJoint HAnimJoint360 = createNode("HAnimJoint");
HAnimJoint360.name = "r_metatarsophalangeal_2";
HAnimJoint360.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint360.center = new SFVec3f(new float[-0.1086,0.0001,0.0368]);
HAnimJoint360.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint360.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment361 = createNode("HAnimSegment");
HAnimSegment361.name = "r_tarsal_proximal_phalanx_2";
HAnimSegment361.DEF = "hanim_r_tarsal_proximal_phalanx_2";
//Visualization sphere for <HAnimJoint name='r_metatarsophalangeal_2'/> is placed within <HAnimSegment name='r_tarsal_proximal_phalanx_2'/>
TouchSensor TouchSensor362 = createNode("TouchSensor");
TouchSensor362.description = "HAnimJoint r_metatarsophalangeal_2, HAnimSegment r_tarsal_proximal_phalanx_2";
HAnimSegment361.children = new MFNode();

HAnimSegment361.children[0] = TouchSensor362;

Transform Transform363 = createNode("Transform");
Transform363.translation = new SFVec3f(new float[-0.1086,0.0001,0.0368]);
Shape Shape364 = createNode("Shape");
Shape364.USE = "HAnimJointShape";
Transform363.children = new MFNode();

Transform363.children[0] = Shape364;

HAnimSegment361.children[1] = Transform363;

//HAnimSegment visualization line from current <HAnimJoint name='r_metatarsophalangeal_2'/> to child <HAnimJoint name='r_tarsal_distal_interphalangeal_2'/>
Shape Shape365 = createNode("Shape");
LineSet LineSet366 = createNode("LineSet");
LineSet366.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate367 = createNode("Coordinate");
Coordinate367.point = new MFVec3f(new float[-0.1086,0.0001,0.0368,-0.1086,0,0.0762]);
LineSet366.coord = Coordinate367;

ColorRGBA ColorRGBA368 = createNode("ColorRGBA");
ColorRGBA368.USE = "HAnimSegmentLineColorRGBA";
LineSet366.color = ColorRGBA368;

Shape365.geometry = LineSet366;

HAnimSegment361.children[2] = Shape365;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsophalangeal_2'/> to <HAnimSite name='r_metatarsal_pha1_pt'/>
Shape Shape369 = createNode("Shape");
LineSet LineSet370 = createNode("LineSet");
LineSet370.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate371 = createNode("Coordinate");
Coordinate371.point = new MFVec3f(new float[-0.1086,0.0001,0.0368,-0.0521,0.026,0.0127]);
LineSet370.coord = Coordinate371;

ColorRGBA ColorRGBA372 = createNode("ColorRGBA");
ColorRGBA372.USE = "HAnimSiteLineColorRGBA";
LineSet370.color = ColorRGBA372;

Shape369.geometry = LineSet370;

HAnimSegment361.children[3] = Shape369;

HAnimSite HAnimSite373 = createNode("HAnimSite");
HAnimSite373.name = "r_metatarsal_phalanx_1_pt";
HAnimSite373.DEF = "hanim_r_metatarsal_phalanx_1_pt";
HAnimSite373.translation = new SFVec3f(new float[-0.0521,0.026,0.0127]);
//HAnimSite visualization shape
TouchSensor TouchSensor374 = createNode("TouchSensor");
TouchSensor374.description = "HAnimSite r_metatarsal_pha1_pt";
HAnimSite373.children = new MFNode();

HAnimSite373.children[0] = TouchSensor374;

Shape Shape375 = createNode("Shape");
Shape375.USE = "HAnimSiteShape";
HAnimSite373.children[1] = Shape375;

HAnimSegment361.children[4] = HAnimSite373;

HAnimJoint360.children = new MFNode();

HAnimJoint360.children[0] = HAnimSegment361;

HAnimJoint HAnimJoint376 = createNode("HAnimJoint");
HAnimJoint376.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint376.DEF = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimJoint376.center = new SFVec3f(new float[-0.1086,0,0.0762]);
HAnimJoint376.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint376.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment377 = createNode("HAnimSegment");
HAnimSegment377.name = "r_tarsal_distal_phalanx_2";
HAnimSegment377.DEF = "hanim_r_tarsal_distal_phalanx_2";
//Visualization sphere for <HAnimJoint name='r_tarsal_distal_interphalangeal_2'/> is placed within <HAnimSegment name='r_tarsal_distal_phalanx_2'/>
TouchSensor TouchSensor378 = createNode("TouchSensor");
TouchSensor378.description = "HAnimJoint r_tarsal_distal_interphalangeal_2, HAnimSegment r_tarsal_distal_phalanx_2";
HAnimSegment377.children = new MFNode();

HAnimSegment377.children[0] = TouchSensor378;

Transform Transform379 = createNode("Transform");
Transform379.translation = new SFVec3f(new float[-0.1086,0,0.0762]);
Shape Shape380 = createNode("Shape");
Shape380.USE = "HAnimJointShape";
Transform379.children = new MFNode();

Transform379.children[0] = Shape380;

HAnimSegment377.children[1] = Transform379;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='r_forefoot_tip'/>
Shape Shape381 = createNode("Shape");
LineSet LineSet382 = createNode("LineSet");
LineSet382.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate383 = createNode("Coordinate");
Coordinate383.point = new MFVec3f(new float[-0.1086,0,0.0762,-0.1043,0.0227,0.145]);
LineSet382.coord = Coordinate383;

ColorRGBA ColorRGBA384 = createNode("ColorRGBA");
ColorRGBA384.USE = "HAnimSiteLineColorRGBA";
LineSet382.color = ColorRGBA384;

Shape381.geometry = LineSet382;

HAnimSegment377.children[2] = Shape381;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='r_metatarsal_pha5_pt'/>
Shape Shape385 = createNode("Shape");
LineSet LineSet386 = createNode("LineSet");
LineSet386.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate387 = createNode("Coordinate");
Coordinate387.point = new MFVec3f(new float[-0.1086,0,0.0762,-0.1523,0.0166,0.0895]);
LineSet386.coord = Coordinate387;

ColorRGBA ColorRGBA388 = createNode("ColorRGBA");
ColorRGBA388.USE = "HAnimSiteLineColorRGBA";
LineSet386.color = ColorRGBA388;

Shape385.geometry = LineSet386;

HAnimSegment377.children[3] = Shape385;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='r_digit2_pt'/>
Shape Shape389 = createNode("Shape");
LineSet LineSet390 = createNode("LineSet");
LineSet390.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate391 = createNode("Coordinate");
Coordinate391.point = new MFVec3f(new float[-0.1086,0,0.0762,-0.0883,0.0134,0.1383]);
LineSet390.coord = Coordinate391;

ColorRGBA ColorRGBA392 = createNode("ColorRGBA");
ColorRGBA392.USE = "HAnimSiteLineColorRGBA";
LineSet390.color = ColorRGBA392;

Shape389.geometry = LineSet390;

HAnimSegment377.children[4] = Shape389;

HAnimSite HAnimSite393 = createNode("HAnimSite");
HAnimSite393.name = "r_forefoot_tip_pt";
HAnimSite393.DEF = "hanim_r_forefoot_tip_pt";
HAnimSite393.translation = new SFVec3f(new float[-0.1043,0.0227,0.145]);
//HAnimSite visualization shape
TouchSensor TouchSensor394 = createNode("TouchSensor");
TouchSensor394.description = "HAnimSite r_forefoot_tip";
HAnimSite393.children = new MFNode();

HAnimSite393.children[0] = TouchSensor394;

Shape Shape395 = createNode("Shape");
Shape395.USE = "HAnimSiteShape";
HAnimSite393.children[1] = Shape395;

HAnimSegment377.children[5] = HAnimSite393;

HAnimSite HAnimSite396 = createNode("HAnimSite");
HAnimSite396.name = "r_metatarsal_phalanx_5_pt";
HAnimSite396.DEF = "hanim_r_metatarsal_phalanx_5_pt";
HAnimSite396.translation = new SFVec3f(new float[-0.1523,0.0166,0.0895]);
//HAnimSite visualization shape
TouchSensor TouchSensor397 = createNode("TouchSensor");
TouchSensor397.description = "HAnimSite r_metatarsal_pha5_pt";
HAnimSite396.children = new MFNode();

HAnimSite396.children[0] = TouchSensor397;

Shape Shape398 = createNode("Shape");
Shape398.USE = "HAnimSiteShape";
HAnimSite396.children[1] = Shape398;

HAnimSegment377.children[6] = HAnimSite396;

HAnimSite HAnimSite399 = createNode("HAnimSite");
HAnimSite399.name = "r_tarsal_distal_phalanx_2_pt";
HAnimSite399.DEF = "hanim_r_tarsal_distal_phalanx_2_pt";
HAnimSite399.translation = new SFVec3f(new float[-0.0883,0.0134,0.1383]);
//HAnimSite visualization shape
TouchSensor TouchSensor400 = createNode("TouchSensor");
TouchSensor400.description = "HAnimSite r_digit2_pt";
HAnimSite399.children = new MFNode();

HAnimSite399.children[0] = TouchSensor400;

Shape Shape401 = createNode("Shape");
Shape401.USE = "HAnimSiteShape";
HAnimSite399.children[1] = Shape401;

HAnimSegment377.children[7] = HAnimSite399;

HAnimJoint376.children = new MFNode();

HAnimJoint376.children[0] = HAnimSegment377;

HAnimJoint360.children[1] = HAnimJoint376;

HAnimJoint351.children[1] = HAnimJoint360;

HAnimJoint314.children[1] = HAnimJoint351;

HAnimJoint305.children[1] = HAnimJoint314;

HAnimJoint275.children[1] = HAnimJoint305;

HAnimJoint68.children[2] = HAnimJoint275;

HAnimJoint52.children[1] = HAnimJoint68;

HAnimJoint HAnimJoint402 = createNode("HAnimJoint");
HAnimJoint402.name = "vl5";
HAnimJoint402.DEF = "hanim_vl5";
HAnimJoint402.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimJoint402.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint402.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment403 = createNode("HAnimSegment");
HAnimSegment403.name = "l5";
HAnimSegment403.DEF = "hanim_l5";
//Visualization sphere for <HAnimJoint name='vl5'/> is placed within <HAnimSegment name='l5'/>
TouchSensor TouchSensor404 = createNode("TouchSensor");
TouchSensor404.description = "HAnimJoint vl5, HAnimSegment l5";
HAnimSegment403.children = new MFNode();

HAnimSegment403.children[0] = TouchSensor404;

Transform Transform405 = createNode("Transform");
Transform405.translation = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
Shape Shape406 = createNode("Shape");
Shape406.USE = "HAnimJointShape";
Transform405.children = new MFNode();

Transform405.children[0] = Shape406;

HAnimSegment403.children[1] = Transform405;

//HAnimSegment visualization line from current <HAnimJoint name='vl5'/> to child <HAnimJoint name='vl4'/>
Shape Shape407 = createNode("Shape");
LineSet LineSet408 = createNode("LineSet");
LineSet408.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate409 = createNode("Coordinate");
Coordinate409.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787]);
LineSet408.coord = Coordinate409;

ColorRGBA ColorRGBA410 = createNode("ColorRGBA");
ColorRGBA410.USE = "HAnimSegmentLineColorRGBA";
LineSet408.color = ColorRGBA410;

Shape407.geometry = LineSet408;

HAnimSegment403.children[2] = Shape407;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='waist_preferred_post_pt'/>
Shape Shape411 = createNode("Shape");
LineSet LineSet412 = createNode("LineSet");
LineSet412.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate413 = createNode("Coordinate");
Coordinate413.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0,1.0915,-0.1091]);
LineSet412.coord = Coordinate413;

ColorRGBA ColorRGBA414 = createNode("ColorRGBA");
ColorRGBA414.USE = "HAnimSiteLineColorRGBA";
LineSet412.color = ColorRGBA414;

Shape411.geometry = LineSet412;

HAnimSegment403.children[3] = Shape411;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='navel_pt'/>
Shape Shape415 = createNode("Shape");
LineSet LineSet416 = createNode("LineSet");
LineSet416.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate417 = createNode("Coordinate");
Coordinate417.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0069,1.0966,0.1017]);
LineSet416.coord = Coordinate417;

ColorRGBA ColorRGBA418 = createNode("ColorRGBA");
ColorRGBA418.USE = "HAnimSiteLineColorRGBA";
LineSet416.color = ColorRGBA418;

Shape415.geometry = LineSet416;

HAnimSegment403.children[4] = Shape415;

HAnimSite HAnimSite419 = createNode("HAnimSite");
HAnimSite419.name = "waist_preferred_posterior_pt";
HAnimSite419.DEF = "hanim_waist_preferred_posterior_pt";
HAnimSite419.translation = new SFVec3f(new float[0,1.0915,-0.1091]);
//HAnimSite visualization shape
TouchSensor TouchSensor420 = createNode("TouchSensor");
TouchSensor420.description = "HAnimSite waist_preferred_post_pt";
HAnimSite419.children = new MFNode();

HAnimSite419.children[0] = TouchSensor420;

Shape Shape421 = createNode("Shape");
Shape421.USE = "HAnimSiteShape";
HAnimSite419.children[1] = Shape421;

HAnimSegment403.children[5] = HAnimSite419;

HAnimSite HAnimSite422 = createNode("HAnimSite");
HAnimSite422.name = "navel_pt";
HAnimSite422.DEF = "hanim_navel_pt";
HAnimSite422.translation = new SFVec3f(new float[0.0069,1.0966,0.1017]);
//HAnimSite visualization shape
TouchSensor TouchSensor423 = createNode("TouchSensor");
TouchSensor423.description = "HAnimSite navel_pt";
HAnimSite422.children = new MFNode();

HAnimSite422.children[0] = TouchSensor423;

Shape Shape424 = createNode("Shape");
Shape424.USE = "HAnimSiteShape";
HAnimSite422.children[1] = Shape424;

HAnimSegment403.children[6] = HAnimSite422;

HAnimJoint402.children = new MFNode();

HAnimJoint402.children[0] = HAnimSegment403;

HAnimJoint HAnimJoint425 = createNode("HAnimJoint");
HAnimJoint425.name = "vl4";
HAnimJoint425.DEF = "hanim_vl4";
HAnimJoint425.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
HAnimJoint425.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint425.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment426 = createNode("HAnimSegment");
HAnimSegment426.name = "l4";
HAnimSegment426.DEF = "hanim_l4";
//Visualization sphere for <HAnimJoint name='vl4'/> is placed within <HAnimSegment name='l4'/>
TouchSensor TouchSensor427 = createNode("TouchSensor");
TouchSensor427.description = "HAnimJoint vl4, HAnimSegment l4";
HAnimSegment426.children = new MFNode();

HAnimSegment426.children[0] = TouchSensor427;

Transform Transform428 = createNode("Transform");
Transform428.translation = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
Shape Shape429 = createNode("Shape");
Shape429.USE = "HAnimJointShape";
Transform428.children = new MFNode();

Transform428.children[0] = Shape429;

HAnimSegment426.children[1] = Transform428;

//HAnimSegment visualization line from current <HAnimJoint name='vl4'/> to child <HAnimJoint name='vl3'/>
Shape Shape430 = createNode("Shape");
LineSet LineSet431 = createNode("LineSet");
LineSet431.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate432 = createNode("Coordinate");
Coordinate432.point = new MFVec3f(new float[0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796]);
LineSet431.coord = Coordinate432;

ColorRGBA ColorRGBA433 = createNode("ColorRGBA");
ColorRGBA433.USE = "HAnimSegmentLineColorRGBA";
LineSet431.color = ColorRGBA433;

Shape430.geometry = LineSet431;

HAnimSegment426.children[2] = Shape430;

HAnimJoint425.children = new MFNode();

HAnimJoint425.children[0] = HAnimSegment426;

HAnimJoint HAnimJoint434 = createNode("HAnimJoint");
HAnimJoint434.name = "vl3";
HAnimJoint434.DEF = "hanim_vl3";
HAnimJoint434.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimJoint434.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint434.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment435 = createNode("HAnimSegment");
HAnimSegment435.name = "l3";
HAnimSegment435.DEF = "hanim_l3";
//Visualization sphere for <HAnimJoint name='vl3'/> is placed within <HAnimSegment name='l3'/>
TouchSensor TouchSensor436 = createNode("TouchSensor");
TouchSensor436.description = "HAnimJoint vl3, HAnimSegment l3";
HAnimSegment435.children = new MFNode();

HAnimSegment435.children[0] = TouchSensor436;

Transform Transform437 = createNode("Transform");
Transform437.translation = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
Shape Shape438 = createNode("Shape");
Shape438.USE = "HAnimJointShape";
Transform437.children = new MFNode();

Transform437.children[0] = Shape438;

HAnimSegment435.children[1] = Transform437;

//HAnimSegment visualization line from current <HAnimJoint name='vl3'/> to child <HAnimJoint name='vl2'/>
Shape Shape439 = createNode("Shape");
LineSet LineSet440 = createNode("LineSet");
LineSet440.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate441 = createNode("Coordinate");
Coordinate441.point = new MFVec3f(new float[0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08]);
LineSet440.coord = Coordinate441;

ColorRGBA ColorRGBA442 = createNode("ColorRGBA");
ColorRGBA442.USE = "HAnimSegmentLineColorRGBA";
LineSet440.color = ColorRGBA442;

Shape439.geometry = LineSet440;

HAnimSegment435.children[2] = Shape439;

HAnimJoint434.children = new MFNode();

HAnimJoint434.children[0] = HAnimSegment435;

HAnimJoint HAnimJoint443 = createNode("HAnimJoint");
HAnimJoint443.name = "vl2";
HAnimJoint443.DEF = "hanim_vl2";
HAnimJoint443.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
HAnimJoint443.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint443.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment444 = createNode("HAnimSegment");
HAnimSegment444.name = "l2";
HAnimSegment444.DEF = "hanim_l2";
//Visualization sphere for <HAnimJoint name='vl2'/> is placed within <HAnimSegment name='l2'/>
TouchSensor TouchSensor445 = createNode("TouchSensor");
TouchSensor445.description = "HAnimJoint vl2, HAnimSegment l2";
HAnimSegment444.children = new MFNode();

HAnimSegment444.children[0] = TouchSensor445;

Transform Transform446 = createNode("Transform");
Transform446.translation = new SFVec3f(new float[0.0045,1.1546,-0.08]);
Shape Shape447 = createNode("Shape");
Shape447.USE = "HAnimJointShape";
Transform446.children = new MFNode();

Transform446.children[0] = Shape447;

HAnimSegment444.children[1] = Transform446;

//HAnimSegment visualization line from current <HAnimJoint name='vl2'/> to child <HAnimJoint name='vl1'/>
Shape Shape448 = createNode("Shape");
LineSet LineSet449 = createNode("LineSet");
LineSet449.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate450 = createNode("Coordinate");
Coordinate450.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805]);
LineSet449.coord = Coordinate450;

ColorRGBA ColorRGBA451 = createNode("ColorRGBA");
ColorRGBA451.USE = "HAnimSegmentLineColorRGBA";
LineSet449.color = ColorRGBA451;

Shape448.geometry = LineSet449;

HAnimSegment444.children[2] = Shape448;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='r_rib10_pt'/>
Shape Shape452 = createNode("Shape");
LineSet LineSet453 = createNode("LineSet");
LineSet453.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate454 = createNode("Coordinate");
Coordinate454.point = new MFVec3f(new float[0.0045,1.1546,-0.08,-0.0711,1.1941,0.1016]);
LineSet453.coord = Coordinate454;

ColorRGBA ColorRGBA455 = createNode("ColorRGBA");
ColorRGBA455.USE = "HAnimSiteLineColorRGBA";
LineSet453.color = ColorRGBA455;

Shape452.geometry = LineSet453;

HAnimSegment444.children[3] = Shape452;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='l_rib10_pt'/>
Shape Shape456 = createNode("Shape");
LineSet LineSet457 = createNode("LineSet");
LineSet457.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate458 = createNode("Coordinate");
Coordinate458.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0871,1.1925,0.0992]);
LineSet457.coord = Coordinate458;

ColorRGBA ColorRGBA459 = createNode("ColorRGBA");
ColorRGBA459.USE = "HAnimSiteLineColorRGBA";
LineSet457.color = ColorRGBA459;

Shape456.geometry = LineSet457;

HAnimSegment444.children[4] = Shape456;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='rib10_midspine_pt'/>
Shape Shape460 = createNode("Shape");
LineSet LineSet461 = createNode("LineSet");
LineSet461.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate462 = createNode("Coordinate");
Coordinate462.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0049,1.1908,-0.1113]);
LineSet461.coord = Coordinate462;

ColorRGBA ColorRGBA463 = createNode("ColorRGBA");
ColorRGBA463.USE = "HAnimSiteLineColorRGBA";
LineSet461.color = ColorRGBA463;

Shape460.geometry = LineSet461;

HAnimSegment444.children[5] = Shape460;

HAnimSite HAnimSite464 = createNode("HAnimSite");
HAnimSite464.name = "r_rib10_pt";
HAnimSite464.DEF = "hanim_r_rib10_pt";
HAnimSite464.translation = new SFVec3f(new float[-0.0711,1.1941,0.1016]);
//HAnimSite visualization shape
TouchSensor TouchSensor465 = createNode("TouchSensor");
TouchSensor465.description = "HAnimSite r_rib10_pt";
HAnimSite464.children = new MFNode();

HAnimSite464.children[0] = TouchSensor465;

Shape Shape466 = createNode("Shape");
Shape466.USE = "HAnimSiteShape";
HAnimSite464.children[1] = Shape466;

HAnimSegment444.children[6] = HAnimSite464;

HAnimSite HAnimSite467 = createNode("HAnimSite");
HAnimSite467.name = "l_rib10_pt";
HAnimSite467.DEF = "hanim_l_rib10_pt";
HAnimSite467.translation = new SFVec3f(new float[0.0871,1.1925,0.0992]);
//HAnimSite visualization shape
TouchSensor TouchSensor468 = createNode("TouchSensor");
TouchSensor468.description = "HAnimSite l_rib10_pt";
HAnimSite467.children = new MFNode();

HAnimSite467.children[0] = TouchSensor468;

Shape Shape469 = createNode("Shape");
Shape469.USE = "HAnimSiteShape";
HAnimSite467.children[1] = Shape469;

HAnimSegment444.children[7] = HAnimSite467;

HAnimSite HAnimSite470 = createNode("HAnimSite");
HAnimSite470.name = "rib10_midspine_pt";
HAnimSite470.DEF = "hanim_rib10_midspine_pt";
HAnimSite470.translation = new SFVec3f(new float[0.0049,1.1908,-0.1113]);
//HAnimSite visualization shape
TouchSensor TouchSensor471 = createNode("TouchSensor");
TouchSensor471.description = "HAnimSite rib10_midspine_pt";
HAnimSite470.children = new MFNode();

HAnimSite470.children[0] = TouchSensor471;

Shape Shape472 = createNode("Shape");
Shape472.USE = "HAnimSiteShape";
HAnimSite470.children[1] = Shape472;

HAnimSegment444.children[8] = HAnimSite470;

HAnimJoint443.children = new MFNode();

HAnimJoint443.children[0] = HAnimSegment444;

HAnimJoint HAnimJoint473 = createNode("HAnimJoint");
HAnimJoint473.name = "vl1";
HAnimJoint473.DEF = "hanim_vl1";
HAnimJoint473.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimJoint473.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint473.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment474 = createNode("HAnimSegment");
HAnimSegment474.name = "l1";
HAnimSegment474.DEF = "hanim_l1";
//Visualization sphere for <HAnimJoint name='vl1'/> is placed within <HAnimSegment name='l1'/>
TouchSensor TouchSensor475 = createNode("TouchSensor");
TouchSensor475.description = "HAnimJoint vl1, HAnimSegment l1";
HAnimSegment474.children = new MFNode();

HAnimSegment474.children[0] = TouchSensor475;

Transform Transform476 = createNode("Transform");
Transform476.translation = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
Shape Shape477 = createNode("Shape");
Shape477.USE = "HAnimJointShape";
Transform476.children = new MFNode();

Transform476.children[0] = Shape477;

HAnimSegment474.children[1] = Transform476;

//HAnimSegment visualization line from current <HAnimJoint name='vl1'/> to child <HAnimJoint name='vt12'/>
Shape Shape478 = createNode("Shape");
LineSet LineSet479 = createNode("LineSet");
LineSet479.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate480 = createNode("Coordinate");
Coordinate480.point = new MFVec3f(new float[0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808]);
LineSet479.coord = Coordinate480;

ColorRGBA ColorRGBA481 = createNode("ColorRGBA");
ColorRGBA481.USE = "HAnimSegmentLineColorRGBA";
LineSet479.color = ColorRGBA481;

Shape478.geometry = LineSet479;

HAnimSegment474.children[2] = Shape478;

HAnimJoint473.children = new MFNode();

HAnimJoint473.children[0] = HAnimSegment474;

HAnimJoint HAnimJoint482 = createNode("HAnimJoint");
HAnimJoint482.name = "vt12";
HAnimJoint482.DEF = "hanim_vt12";
HAnimJoint482.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
HAnimJoint482.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint482.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment483 = createNode("HAnimSegment");
HAnimSegment483.name = "t12";
HAnimSegment483.DEF = "hanim_t12";
//Visualization sphere for <HAnimJoint name='vt12'/> is placed within <HAnimSegment name='t12'/>
TouchSensor TouchSensor484 = createNode("TouchSensor");
TouchSensor484.description = "HAnimJoint vt12, HAnimSegment t12";
HAnimSegment483.children = new MFNode();

HAnimSegment483.children[0] = TouchSensor484;

Transform Transform485 = createNode("Transform");
Transform485.translation = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
Shape Shape486 = createNode("Shape");
Shape486.USE = "HAnimJointShape";
Transform485.children = new MFNode();

Transform485.children[0] = Shape486;

HAnimSegment483.children[1] = Transform485;

//HAnimSegment visualization line from current <HAnimJoint name='vt12'/> to child <HAnimJoint name='vt11'/>
Shape Shape487 = createNode("Shape");
LineSet LineSet488 = createNode("LineSet");
LineSet488.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate489 = createNode("Coordinate");
Coordinate489.point = new MFVec3f(new float[0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081]);
LineSet488.coord = Coordinate489;

ColorRGBA ColorRGBA490 = createNode("ColorRGBA");
ColorRGBA490.USE = "HAnimSegmentLineColorRGBA";
LineSet488.color = ColorRGBA490;

Shape487.geometry = LineSet488;

HAnimSegment483.children[2] = Shape487;

HAnimJoint482.children = new MFNode();

HAnimJoint482.children[0] = HAnimSegment483;

HAnimJoint HAnimJoint491 = createNode("HAnimJoint");
HAnimJoint491.name = "vt11";
HAnimJoint491.DEF = "hanim_vt11";
HAnimJoint491.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
HAnimJoint491.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint491.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment492 = createNode("HAnimSegment");
HAnimSegment492.name = "t11";
HAnimSegment492.DEF = "hanim_t11";
//Visualization sphere for <HAnimJoint name='vt11'/> is placed within <HAnimSegment name='t11'/>
TouchSensor TouchSensor493 = createNode("TouchSensor");
TouchSensor493.description = "HAnimJoint vt11, HAnimSegment t11";
HAnimSegment492.children = new MFNode();

HAnimSegment492.children[0] = TouchSensor493;

Transform Transform494 = createNode("Transform");
Transform494.translation = new SFVec3f(new float[0.0053,1.2679,-0.081]);
Shape Shape495 = createNode("Shape");
Shape495.USE = "HAnimJointShape";
Transform494.children = new MFNode();

Transform494.children[0] = Shape495;

HAnimSegment492.children[1] = Transform494;

//HAnimSegment visualization line from current <HAnimJoint name='vt11'/> to child <HAnimJoint name='vt10'/>
Shape Shape496 = createNode("Shape");
LineSet LineSet497 = createNode("LineSet");
LineSet497.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate498 = createNode("Coordinate");
Coordinate498.point = new MFVec3f(new float[0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822]);
LineSet497.coord = Coordinate498;

ColorRGBA ColorRGBA499 = createNode("ColorRGBA");
ColorRGBA499.USE = "HAnimSegmentLineColorRGBA";
LineSet497.color = ColorRGBA499;

Shape496.geometry = LineSet497;

HAnimSegment492.children[2] = Shape496;

HAnimJoint491.children = new MFNode();

HAnimJoint491.children[0] = HAnimSegment492;

HAnimJoint HAnimJoint500 = createNode("HAnimJoint");
HAnimJoint500.name = "vt10";
HAnimJoint500.DEF = "hanim_vt10";
HAnimJoint500.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimJoint500.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint500.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment501 = createNode("HAnimSegment");
HAnimSegment501.name = "t10";
HAnimSegment501.DEF = "hanim_t10";
//Visualization sphere for <HAnimJoint name='vt10'/> is placed within <HAnimSegment name='t10'/>
TouchSensor TouchSensor502 = createNode("TouchSensor");
TouchSensor502.description = "HAnimJoint vt10, HAnimSegment t10";
HAnimSegment501.children = new MFNode();

HAnimSegment501.children[0] = TouchSensor502;

Transform Transform503 = createNode("Transform");
Transform503.translation = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
Shape Shape504 = createNode("Shape");
Shape504.USE = "HAnimJointShape";
Transform503.children = new MFNode();

Transform503.children[0] = Shape504;

HAnimSegment501.children[1] = Transform503;

//HAnimSegment visualization line from current <HAnimJoint name='vt10'/> to child <HAnimJoint name='vt9'/>
Shape Shape505 = createNode("Shape");
LineSet LineSet506 = createNode("LineSet");
LineSet506.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate507 = createNode("Coordinate");
Coordinate507.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838]);
LineSet506.coord = Coordinate507;

ColorRGBA ColorRGBA508 = createNode("ColorRGBA");
ColorRGBA508.USE = "HAnimSegmentLineColorRGBA";
LineSet506.color = ColorRGBA508;

Shape505.geometry = LineSet506;

HAnimSegment501.children[2] = Shape505;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt10'/> to <HAnimSite name='substernale_pt'/>
Shape Shape509 = createNode("Shape");
LineSet LineSet510 = createNode("LineSet");
LineSet510.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate511 = createNode("Coordinate");
Coordinate511.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0085,1.2995,0.1147]);
LineSet510.coord = Coordinate511;

ColorRGBA ColorRGBA512 = createNode("ColorRGBA");
ColorRGBA512.USE = "HAnimSiteLineColorRGBA";
LineSet510.color = ColorRGBA512;

Shape509.geometry = LineSet510;

HAnimSegment501.children[3] = Shape509;

HAnimSite HAnimSite513 = createNode("HAnimSite");
HAnimSite513.name = "substernale_pt";
HAnimSite513.DEF = "hanim_substernale_pt";
HAnimSite513.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
//HAnimSite visualization shape
TouchSensor TouchSensor514 = createNode("TouchSensor");
TouchSensor514.description = "HAnimSite substernale_pt";
HAnimSite513.children = new MFNode();

HAnimSite513.children[0] = TouchSensor514;

Shape Shape515 = createNode("Shape");
Shape515.USE = "HAnimSiteShape";
HAnimSite513.children[1] = Shape515;

HAnimSegment501.children[4] = HAnimSite513;

HAnimJoint500.children = new MFNode();

HAnimJoint500.children[0] = HAnimSegment501;

HAnimJoint HAnimJoint516 = createNode("HAnimJoint");
HAnimJoint516.name = "vt9";
HAnimJoint516.DEF = "hanim_vt9";
HAnimJoint516.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
HAnimJoint516.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint516.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment517 = createNode("HAnimSegment");
HAnimSegment517.name = "t9";
HAnimSegment517.DEF = "hanim_t9";
//Visualization sphere for <HAnimJoint name='vt9'/> is placed within <HAnimSegment name='t9'/>
TouchSensor TouchSensor518 = createNode("TouchSensor");
TouchSensor518.description = "HAnimJoint vt9, HAnimSegment t9";
HAnimSegment517.children = new MFNode();

HAnimSegment517.children[0] = TouchSensor518;

Transform Transform519 = createNode("Transform");
Transform519.translation = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
Shape Shape520 = createNode("Shape");
Shape520.USE = "HAnimJointShape";
Transform519.children = new MFNode();

Transform519.children[0] = Shape520;

HAnimSegment517.children[1] = Transform519;

//HAnimSegment visualization line from current <HAnimJoint name='vt9'/> to child <HAnimJoint name='vt8'/>
Shape Shape521 = createNode("Shape");
LineSet LineSet522 = createNode("LineSet");
LineSet522.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate523 = createNode("Coordinate");
Coordinate523.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845]);
LineSet522.coord = Coordinate523;

ColorRGBA ColorRGBA524 = createNode("ColorRGBA");
ColorRGBA524.USE = "HAnimSegmentLineColorRGBA";
LineSet522.color = ColorRGBA524;

Shape521.geometry = LineSet522;

HAnimSegment517.children[2] = Shape521;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='r_thelion_pt'/>
Shape Shape525 = createNode("Shape");
LineSet LineSet526 = createNode("LineSet");
LineSet526.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate527 = createNode("Coordinate");
Coordinate527.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,-0.0736,1.3385,0.1217]);
LineSet526.coord = Coordinate527;

ColorRGBA ColorRGBA528 = createNode("ColorRGBA");
ColorRGBA528.USE = "HAnimSiteLineColorRGBA";
LineSet526.color = ColorRGBA528;

Shape525.geometry = LineSet526;

HAnimSegment517.children[3] = Shape525;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='l_thelion_pt'/>
Shape Shape529 = createNode("Shape");
LineSet LineSet530 = createNode("LineSet");
LineSet530.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate531 = createNode("Coordinate");
Coordinate531.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0918,1.3382,0.1192]);
LineSet530.coord = Coordinate531;

ColorRGBA ColorRGBA532 = createNode("ColorRGBA");
ColorRGBA532.USE = "HAnimSiteLineColorRGBA";
LineSet530.color = ColorRGBA532;

Shape529.geometry = LineSet530;

HAnimSegment517.children[4] = Shape529;

HAnimSite HAnimSite533 = createNode("HAnimSite");
HAnimSite533.name = "r_thelion_pt";
HAnimSite533.DEF = "hanim_r_thelion_pt";
HAnimSite533.translation = new SFVec3f(new float[-0.0736,1.3385,0.1217]);
//HAnimSite visualization shape
TouchSensor TouchSensor534 = createNode("TouchSensor");
TouchSensor534.description = "HAnimSite r_thelion_pt";
HAnimSite533.children = new MFNode();

HAnimSite533.children[0] = TouchSensor534;

Shape Shape535 = createNode("Shape");
Shape535.USE = "HAnimSiteShape";
HAnimSite533.children[1] = Shape535;

HAnimSegment517.children[5] = HAnimSite533;

HAnimSite HAnimSite536 = createNode("HAnimSite");
HAnimSite536.name = "l_thelion_pt";
HAnimSite536.DEF = "hanim_l_thelion_pt";
HAnimSite536.translation = new SFVec3f(new float[0.0918,1.3382,0.1192]);
//HAnimSite visualization shape
TouchSensor TouchSensor537 = createNode("TouchSensor");
TouchSensor537.description = "HAnimSite l_thelion_pt";
HAnimSite536.children = new MFNode();

HAnimSite536.children[0] = TouchSensor537;

Shape Shape538 = createNode("Shape");
Shape538.USE = "HAnimSiteShape";
HAnimSite536.children[1] = Shape538;

HAnimSegment517.children[6] = HAnimSite536;

HAnimJoint516.children = new MFNode();

HAnimJoint516.children[0] = HAnimSegment517;

HAnimJoint HAnimJoint539 = createNode("HAnimJoint");
HAnimJoint539.name = "vt8";
HAnimJoint539.DEF = "hanim_vt8";
HAnimJoint539.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
HAnimJoint539.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint539.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment540 = createNode("HAnimSegment");
HAnimSegment540.name = "t8";
HAnimSegment540.DEF = "hanim_t8";
//Visualization sphere for <HAnimJoint name='vt8'/> is placed within <HAnimSegment name='t8'/>
TouchSensor TouchSensor541 = createNode("TouchSensor");
TouchSensor541.description = "HAnimJoint vt8, HAnimSegment t8";
HAnimSegment540.children = new MFNode();

HAnimSegment540.children[0] = TouchSensor541;

Transform Transform542 = createNode("Transform");
Transform542.translation = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
Shape Shape543 = createNode("Shape");
Shape543.USE = "HAnimJointShape";
Transform542.children = new MFNode();

Transform542.children[0] = Shape543;

HAnimSegment540.children[1] = Transform542;

//HAnimSegment visualization line from current <HAnimJoint name='vt8'/> to child <HAnimJoint name='vt7'/>
Shape Shape544 = createNode("Shape");
LineSet LineSet545 = createNode("LineSet");
LineSet545.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate546 = createNode("Coordinate");
Coordinate546.point = new MFVec3f(new float[0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833]);
LineSet545.coord = Coordinate546;

ColorRGBA ColorRGBA547 = createNode("ColorRGBA");
ColorRGBA547.USE = "HAnimSegmentLineColorRGBA";
LineSet545.color = ColorRGBA547;

Shape544.geometry = LineSet545;

HAnimSegment540.children[2] = Shape544;

HAnimJoint539.children = new MFNode();

HAnimJoint539.children[0] = HAnimSegment540;

HAnimJoint HAnimJoint548 = createNode("HAnimJoint");
HAnimJoint548.name = "vt7";
HAnimJoint548.DEF = "hanim_vt7";
HAnimJoint548.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
HAnimJoint548.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint548.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment549 = createNode("HAnimSegment");
HAnimSegment549.name = "t7";
HAnimSegment549.DEF = "hanim_t7";
//Visualization sphere for <HAnimJoint name='vt7'/> is placed within <HAnimSegment name='t7'/>
TouchSensor TouchSensor550 = createNode("TouchSensor");
TouchSensor550.description = "HAnimJoint vt7, HAnimSegment t7";
HAnimSegment549.children = new MFNode();

HAnimSegment549.children[0] = TouchSensor550;

Transform Transform551 = createNode("Transform");
Transform551.translation = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
Shape Shape552 = createNode("Shape");
Shape552.USE = "HAnimJointShape";
Transform551.children = new MFNode();

Transform551.children[0] = Shape552;

HAnimSegment549.children[1] = Transform551;

//HAnimSegment visualization line from current <HAnimJoint name='vt7'/> to child <HAnimJoint name='vt6'/>
Shape Shape553 = createNode("Shape");
LineSet LineSet554 = createNode("LineSet");
LineSet554.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate555 = createNode("Coordinate");
Coordinate555.point = new MFVec3f(new float[0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08]);
LineSet554.coord = Coordinate555;

ColorRGBA ColorRGBA556 = createNode("ColorRGBA");
ColorRGBA556.USE = "HAnimSegmentLineColorRGBA";
LineSet554.color = ColorRGBA556;

Shape553.geometry = LineSet554;

HAnimSegment549.children[2] = Shape553;

HAnimJoint548.children = new MFNode();

HAnimJoint548.children[0] = HAnimSegment549;

HAnimJoint HAnimJoint557 = createNode("HAnimJoint");
HAnimJoint557.name = "vt6";
HAnimJoint557.DEF = "hanim_vt6";
HAnimJoint557.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimJoint557.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint557.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment558 = createNode("HAnimSegment");
HAnimSegment558.name = "t6";
HAnimSegment558.DEF = "hanim_t6";
//Visualization sphere for <HAnimJoint name='vt6'/> is placed within <HAnimSegment name='t6'/>
TouchSensor TouchSensor559 = createNode("TouchSensor");
TouchSensor559.description = "HAnimJoint vt6, HAnimSegment t6";
HAnimSegment558.children = new MFNode();

HAnimSegment558.children[0] = TouchSensor559;

Transform Transform560 = createNode("Transform");
Transform560.translation = new SFVec3f(new float[0.0059,1.3866,-0.08]);
Shape Shape561 = createNode("Shape");
Shape561.USE = "HAnimJointShape";
Transform560.children = new MFNode();

Transform560.children[0] = Shape561;

HAnimSegment558.children[1] = Transform560;

//HAnimSegment visualization line from current <HAnimJoint name='vt6'/> to child <HAnimJoint name='vt5'/>
Shape Shape562 = createNode("Shape");
LineSet LineSet563 = createNode("LineSet");
LineSet563.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate564 = createNode("Coordinate");
Coordinate564.point = new MFVec3f(new float[0.0059,1.3866,-0.08,0.006,1.4102,-0.0745]);
LineSet563.coord = Coordinate564;

ColorRGBA ColorRGBA565 = createNode("ColorRGBA");
ColorRGBA565.USE = "HAnimSegmentLineColorRGBA";
LineSet563.color = ColorRGBA565;

Shape562.geometry = LineSet563;

HAnimSegment558.children[2] = Shape562;

HAnimJoint557.children = new MFNode();

HAnimJoint557.children[0] = HAnimSegment558;

HAnimJoint HAnimJoint566 = createNode("HAnimJoint");
HAnimJoint566.name = "vt5";
HAnimJoint566.DEF = "hanim_vt5";
HAnimJoint566.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
HAnimJoint566.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint566.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment567 = createNode("HAnimSegment");
HAnimSegment567.name = "t5";
HAnimSegment567.DEF = "hanim_t5";
//Visualization sphere for <HAnimJoint name='vt5'/> is placed within <HAnimSegment name='t5'/>
TouchSensor TouchSensor568 = createNode("TouchSensor");
TouchSensor568.description = "HAnimJoint vt5, HAnimSegment t5";
HAnimSegment567.children = new MFNode();

HAnimSegment567.children[0] = TouchSensor568;

Transform Transform569 = createNode("Transform");
Transform569.translation = new SFVec3f(new float[0.006,1.4102,-0.0745]);
Shape Shape570 = createNode("Shape");
Shape570.USE = "HAnimJointShape";
Transform569.children = new MFNode();

Transform569.children[0] = Shape570;

HAnimSegment567.children[1] = Transform569;

//HAnimSegment visualization line from current <HAnimJoint name='vt5'/> to child <HAnimJoint name='vt4'/>
Shape Shape571 = createNode("Shape");
LineSet LineSet572 = createNode("LineSet");
LineSet572.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate573 = createNode("Coordinate");
Coordinate573.point = new MFVec3f(new float[0.006,1.4102,-0.0745,0.0061,1.432,-0.0675]);
LineSet572.coord = Coordinate573;

ColorRGBA ColorRGBA574 = createNode("ColorRGBA");
ColorRGBA574.USE = "HAnimSegmentLineColorRGBA";
LineSet572.color = ColorRGBA574;

Shape571.geometry = LineSet572;

HAnimSegment567.children[2] = Shape571;

HAnimJoint566.children = new MFNode();

HAnimJoint566.children[0] = HAnimSegment567;

HAnimJoint HAnimJoint575 = createNode("HAnimJoint");
HAnimJoint575.name = "vt4";
HAnimJoint575.DEF = "hanim_vt4";
HAnimJoint575.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
HAnimJoint575.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint575.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment576 = createNode("HAnimSegment");
HAnimSegment576.name = "t4";
HAnimSegment576.DEF = "hanim_t4";
//Visualization sphere for <HAnimJoint name='vt4'/> is placed within <HAnimSegment name='t4'/>
TouchSensor TouchSensor577 = createNode("TouchSensor");
TouchSensor577.description = "HAnimJoint vt4, HAnimSegment t4";
HAnimSegment576.children = new MFNode();

HAnimSegment576.children[0] = TouchSensor577;

Transform Transform578 = createNode("Transform");
Transform578.translation = new SFVec3f(new float[0.0061,1.432,-0.0675]);
Shape Shape579 = createNode("Shape");
Shape579.USE = "HAnimJointShape";
Transform578.children = new MFNode();

Transform578.children[0] = Shape579;

HAnimSegment576.children[1] = Transform578;

//HAnimSegment visualization line from current <HAnimJoint name='vt4'/> to child <HAnimJoint name='vt3'/>
Shape Shape580 = createNode("Shape");
LineSet LineSet581 = createNode("LineSet");
LineSet581.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate582 = createNode("Coordinate");
Coordinate582.point = new MFVec3f(new float[0.0061,1.432,-0.0675,0.0062,1.4583,-0.057]);
LineSet581.coord = Coordinate582;

ColorRGBA ColorRGBA583 = createNode("ColorRGBA");
ColorRGBA583.USE = "HAnimSegmentLineColorRGBA";
LineSet581.color = ColorRGBA583;

Shape580.geometry = LineSet581;

HAnimSegment576.children[2] = Shape580;

HAnimJoint575.children = new MFNode();

HAnimJoint575.children[0] = HAnimSegment576;

HAnimJoint HAnimJoint584 = createNode("HAnimJoint");
HAnimJoint584.name = "vt3";
HAnimJoint584.DEF = "hanim_vt3";
HAnimJoint584.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
HAnimJoint584.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint584.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment585 = createNode("HAnimSegment");
HAnimSegment585.name = "t3";
HAnimSegment585.DEF = "hanim_t3";
//Visualization sphere for <HAnimJoint name='vt3'/> is placed within <HAnimSegment name='t3'/>
TouchSensor TouchSensor586 = createNode("TouchSensor");
TouchSensor586.description = "HAnimJoint vt3, HAnimSegment t3";
HAnimSegment585.children = new MFNode();

HAnimSegment585.children[0] = TouchSensor586;

Transform Transform587 = createNode("Transform");
Transform587.translation = new SFVec3f(new float[0.0062,1.4583,-0.057]);
Shape Shape588 = createNode("Shape");
Shape588.USE = "HAnimJointShape";
Transform587.children = new MFNode();

Transform587.children[0] = Shape588;

HAnimSegment585.children[1] = Transform587;

//HAnimSegment visualization line from current <HAnimJoint name='vt3'/> to child <HAnimJoint name='vt2'/>
Shape Shape589 = createNode("Shape");
LineSet LineSet590 = createNode("LineSet");
LineSet590.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate591 = createNode("Coordinate");
Coordinate591.point = new MFVec3f(new float[0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484]);
LineSet590.coord = Coordinate591;

ColorRGBA ColorRGBA592 = createNode("ColorRGBA");
ColorRGBA592.USE = "HAnimSegmentLineColorRGBA";
LineSet590.color = ColorRGBA592;

Shape589.geometry = LineSet590;

HAnimSegment585.children[2] = Shape589;

HAnimJoint584.children = new MFNode();

HAnimJoint584.children[0] = HAnimSegment585;

HAnimJoint HAnimJoint593 = createNode("HAnimJoint");
HAnimJoint593.name = "vt2";
HAnimJoint593.DEF = "hanim_vt2";
HAnimJoint593.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
HAnimJoint593.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint593.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment594 = createNode("HAnimSegment");
HAnimSegment594.name = "t2";
HAnimSegment594.DEF = "hanim_t2";
//Visualization sphere for <HAnimJoint name='vt2'/> is placed within <HAnimSegment name='t2'/>
TouchSensor TouchSensor595 = createNode("TouchSensor");
TouchSensor595.description = "HAnimJoint vt2, HAnimSegment t2";
HAnimSegment594.children = new MFNode();

HAnimSegment594.children[0] = TouchSensor595;

Transform Transform596 = createNode("Transform");
Transform596.translation = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
Shape Shape597 = createNode("Shape");
Shape597.USE = "HAnimJointShape";
Transform596.children = new MFNode();

Transform596.children[0] = Shape597;

HAnimSegment594.children[1] = Transform596;

//HAnimSegment visualization line from current <HAnimJoint name='vt2'/> to child <HAnimJoint name='vt1'/>
Shape Shape598 = createNode("Shape");
LineSet LineSet599 = createNode("LineSet");
LineSet599.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate600 = createNode("Coordinate");
Coordinate600.point = new MFVec3f(new float[0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387]);
LineSet599.coord = Coordinate600;

ColorRGBA ColorRGBA601 = createNode("ColorRGBA");
ColorRGBA601.USE = "HAnimSegmentLineColorRGBA";
LineSet599.color = ColorRGBA601;

Shape598.geometry = LineSet599;

HAnimSegment594.children[2] = Shape598;

HAnimJoint593.children = new MFNode();

HAnimJoint593.children[0] = HAnimSegment594;

HAnimJoint HAnimJoint602 = createNode("HAnimJoint");
HAnimJoint602.name = "vt1";
HAnimJoint602.DEF = "hanim_vt1";
HAnimJoint602.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimJoint602.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint602.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment603 = createNode("HAnimSegment");
HAnimSegment603.name = "t1";
HAnimSegment603.DEF = "hanim_t1";
//Visualization sphere for <HAnimJoint name='vt1'/> is placed within <HAnimSegment name='t1'/>
TouchSensor TouchSensor604 = createNode("TouchSensor");
TouchSensor604.description = "HAnimJoint vt1, HAnimSegment t1";
HAnimSegment603.children = new MFNode();

HAnimSegment603.children[0] = TouchSensor604;

Transform Transform605 = createNode("Transform");
Transform605.translation = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
Shape Shape606 = createNode("Shape");
Shape606.USE = "HAnimJointShape";
Transform605.children = new MFNode();

Transform605.children[0] = Shape606;

HAnimSegment603.children[1] = Transform605;

//HAnimSegment visualization line from current <HAnimJoint name='vt1'/> to child <HAnimJoint name='vc7'/>
Shape Shape607 = createNode("Shape");
LineSet LineSet608 = createNode("LineSet");
LineSet608.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate609 = createNode("Coordinate");
Coordinate609.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301]);
LineSet608.coord = Coordinate609;

ColorRGBA ColorRGBA610 = createNode("ColorRGBA");
ColorRGBA610.USE = "HAnimSegmentLineColorRGBA";
LineSet608.color = ColorRGBA610;

Shape607.geometry = LineSet608;

HAnimSegment603.children[2] = Shape607;

//HAnimSegment visualization line from current <HAnimJoint name='vt1'/> to child <HAnimJoint name='l_sternoclavicular'/>
Shape Shape611 = createNode("Shape");
LineSet LineSet612 = createNode("LineSet");
LineSet612.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate613 = createNode("Coordinate");
Coordinate613.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]);
LineSet612.coord = Coordinate613;

ColorRGBA ColorRGBA614 = createNode("ColorRGBA");
ColorRGBA614.USE = "HAnimSegmentLineColorRGBA";
LineSet612.color = ColorRGBA614;

Shape611.geometry = LineSet612;

HAnimSegment603.children[3] = Shape611;

//HAnimSegment visualization line from current <HAnimJoint name='vt1'/> to child <HAnimJoint name='r_sternoclavicular'/>
Shape Shape615 = createNode("Shape");
LineSet LineSet616 = createNode("LineSet");
LineSet616.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate617 = createNode("Coordinate");
Coordinate617.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,-0.082,1.4488,-0.0353]);
LineSet616.coord = Coordinate617;

ColorRGBA ColorRGBA618 = createNode("ColorRGBA");
ColorRGBA618.USE = "HAnimSegmentLineColorRGBA";
LineSet616.color = ColorRGBA618;

Shape615.geometry = LineSet616;

HAnimSegment603.children[4] = Shape615;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='suprasternale_pt'/>
Shape Shape619 = createNode("Shape");
LineSet LineSet620 = createNode("LineSet");
LineSet620.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate621 = createNode("Coordinate");
Coordinate621.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0084,1.4714,0.0551]);
LineSet620.coord = Coordinate621;

ColorRGBA ColorRGBA622 = createNode("ColorRGBA");
ColorRGBA622.USE = "HAnimSiteLineColorRGBA";
LineSet620.color = ColorRGBA622;

Shape619.geometry = LineSet620;

HAnimSegment603.children[5] = Shape619;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='cervicale_pt'/>
Shape Shape623 = createNode("Shape");
LineSet LineSet624 = createNode("LineSet");
LineSet624.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate625 = createNode("Coordinate");
Coordinate625.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0064,1.52,-0.0815]);
LineSet624.coord = Coordinate625;

ColorRGBA ColorRGBA626 = createNode("ColorRGBA");
ColorRGBA626.USE = "HAnimSiteLineColorRGBA";
LineSet624.color = ColorRGBA626;

Shape623.geometry = LineSet624;

HAnimSegment603.children[6] = Shape623;

HAnimSite HAnimSite627 = createNode("HAnimSite");
HAnimSite627.name = "suprasternale_pt";
HAnimSite627.DEF = "hanim_suprasternale_pt";
HAnimSite627.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
//HAnimSite visualization shape
TouchSensor TouchSensor628 = createNode("TouchSensor");
TouchSensor628.description = "HAnimSite suprasternale_pt";
HAnimSite627.children = new MFNode();

HAnimSite627.children[0] = TouchSensor628;

Shape Shape629 = createNode("Shape");
Shape629.USE = "HAnimSiteShape";
HAnimSite627.children[1] = Shape629;

HAnimSegment603.children[7] = HAnimSite627;

HAnimSite HAnimSite630 = createNode("HAnimSite");
HAnimSite630.name = "cervicale_pt";
HAnimSite630.DEF = "hanim_cervicale_pt";
HAnimSite630.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
//HAnimSite visualization shape
TouchSensor TouchSensor631 = createNode("TouchSensor");
TouchSensor631.description = "HAnimSite cervicale_pt";
HAnimSite630.children = new MFNode();

HAnimSite630.children[0] = TouchSensor631;

Shape Shape632 = createNode("Shape");
Shape632.USE = "HAnimSiteShape";
HAnimSite630.children[1] = Shape632;

HAnimSegment603.children[8] = HAnimSite630;

HAnimJoint602.children = new MFNode();

HAnimJoint602.children[0] = HAnimSegment603;

HAnimJoint HAnimJoint633 = createNode("HAnimJoint");
HAnimJoint633.name = "vc7";
HAnimJoint633.DEF = "hanim_vc7";
HAnimJoint633.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
HAnimJoint633.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint633.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment634 = createNode("HAnimSegment");
HAnimSegment634.name = "c7";
HAnimSegment634.DEF = "hanim_c7";
//Visualization sphere for <HAnimJoint name='vc7'/> is placed within <HAnimSegment name='c7'/>
TouchSensor TouchSensor635 = createNode("TouchSensor");
TouchSensor635.description = "HAnimJoint vc7, HAnimSegment c7";
HAnimSegment634.children = new MFNode();

HAnimSegment634.children[0] = TouchSensor635;

Transform Transform636 = createNode("Transform");
Transform636.translation = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
Shape Shape637 = createNode("Shape");
Shape637.USE = "HAnimJointShape";
Transform636.children = new MFNode();

Transform636.children[0] = Shape637;

HAnimSegment634.children[1] = Transform636;

//HAnimSegment visualization line from current <HAnimJoint name='vc7'/> to child <HAnimJoint name='vc6'/>
Shape Shape638 = createNode("Shape");
LineSet LineSet639 = createNode("LineSet");
LineSet639.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate640 = createNode("Coordinate");
Coordinate640.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143]);
LineSet639.coord = Coordinate640;

ColorRGBA ColorRGBA641 = createNode("ColorRGBA");
ColorRGBA641.USE = "HAnimSegmentLineColorRGBA";
LineSet639.color = ColorRGBA641;

Shape638.geometry = LineSet639;

HAnimSegment634.children[2] = Shape638;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='r_neck_base_pt'/>
Shape Shape642 = createNode("Shape");
LineSet LineSet643 = createNode("LineSet");
LineSet643.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate644 = createNode("Coordinate");
Coordinate644.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,-0.0419,1.5149,-0.022]);
LineSet643.coord = Coordinate644;

ColorRGBA ColorRGBA645 = createNode("ColorRGBA");
ColorRGBA645.USE = "HAnimSiteLineColorRGBA";
LineSet643.color = ColorRGBA645;

Shape642.geometry = LineSet643;

HAnimSegment634.children[3] = Shape642;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='l_neck_base_pt'/>
Shape Shape646 = createNode("Shape");
LineSet LineSet647 = createNode("LineSet");
LineSet647.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate648 = createNode("Coordinate");
Coordinate648.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0646,1.5141,-0.038]);
LineSet647.coord = Coordinate648;

ColorRGBA ColorRGBA649 = createNode("ColorRGBA");
ColorRGBA649.USE = "HAnimSiteLineColorRGBA";
LineSet647.color = ColorRGBA649;

Shape646.geometry = LineSet647;

HAnimSegment634.children[4] = Shape646;

HAnimSite HAnimSite650 = createNode("HAnimSite");
HAnimSite650.name = "r_neck_base_pt";
HAnimSite650.DEF = "hanim_r_neck_base_pt";
HAnimSite650.translation = new SFVec3f(new float[-0.0419,1.5149,-0.022]);
//HAnimSite visualization shape
TouchSensor TouchSensor651 = createNode("TouchSensor");
TouchSensor651.description = "HAnimSite r_neck_base_pt";
HAnimSite650.children = new MFNode();

HAnimSite650.children[0] = TouchSensor651;

Shape Shape652 = createNode("Shape");
Shape652.USE = "HAnimSiteShape";
HAnimSite650.children[1] = Shape652;

HAnimSegment634.children[5] = HAnimSite650;

HAnimSite HAnimSite653 = createNode("HAnimSite");
HAnimSite653.name = "l_neck_base_pt";
HAnimSite653.DEF = "hanim_l_neck_base_pt";
HAnimSite653.translation = new SFVec3f(new float[0.0646,1.5141,-0.038]);
//HAnimSite visualization shape
TouchSensor TouchSensor654 = createNode("TouchSensor");
TouchSensor654.description = "HAnimSite l_neck_base_pt";
HAnimSite653.children = new MFNode();

HAnimSite653.children[0] = TouchSensor654;

Shape Shape655 = createNode("Shape");
Shape655.USE = "HAnimSiteShape";
HAnimSite653.children[1] = Shape655;

HAnimSegment634.children[6] = HAnimSite653;

HAnimJoint633.children = new MFNode();

HAnimJoint633.children[0] = HAnimSegment634;

HAnimJoint HAnimJoint656 = createNode("HAnimJoint");
HAnimJoint656.name = "vc6";
HAnimJoint656.DEF = "hanim_vc6";
HAnimJoint656.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
HAnimJoint656.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint656.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment657 = createNode("HAnimSegment");
HAnimSegment657.name = "c6";
HAnimSegment657.DEF = "hanim_c6";
//Visualization sphere for <HAnimJoint name='vc6'/> is placed within <HAnimSegment name='c6'/>
TouchSensor TouchSensor658 = createNode("TouchSensor");
TouchSensor658.description = "HAnimJoint vc6, HAnimSegment c6";
HAnimSegment657.children = new MFNode();

HAnimSegment657.children[0] = TouchSensor658;

Transform Transform659 = createNode("Transform");
Transform659.translation = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
Shape Shape660 = createNode("Shape");
Shape660.USE = "HAnimJointShape";
Transform659.children = new MFNode();

Transform659.children[0] = Shape660;

HAnimSegment657.children[1] = Transform659;

//HAnimSegment visualization line from current <HAnimJoint name='vc6'/> to child <HAnimJoint name='vc5'/>
Shape Shape661 = createNode("Shape");
LineSet LineSet662 = createNode("LineSet");
LineSet662.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate663 = createNode("Coordinate");
Coordinate663.point = new MFVec3f(new float[0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082]);
LineSet662.coord = Coordinate663;

ColorRGBA ColorRGBA664 = createNode("ColorRGBA");
ColorRGBA664.USE = "HAnimSegmentLineColorRGBA";
LineSet662.color = ColorRGBA664;

Shape661.geometry = LineSet662;

HAnimSegment657.children[2] = Shape661;

HAnimJoint656.children = new MFNode();

HAnimJoint656.children[0] = HAnimSegment657;

HAnimJoint HAnimJoint665 = createNode("HAnimJoint");
HAnimJoint665.name = "vc5";
HAnimJoint665.DEF = "hanim_vc5";
HAnimJoint665.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
HAnimJoint665.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint665.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment666 = createNode("HAnimSegment");
HAnimSegment666.name = "c5";
HAnimSegment666.DEF = "hanim_c5";
//Visualization sphere for <HAnimJoint name='vc5'/> is placed within <HAnimSegment name='c5'/>
TouchSensor TouchSensor667 = createNode("TouchSensor");
TouchSensor667.description = "HAnimJoint vc5, HAnimSegment c5";
HAnimSegment666.children = new MFNode();

HAnimSegment666.children[0] = TouchSensor667;

Transform Transform668 = createNode("Transform");
Transform668.translation = new SFVec3f(new float[0.0066,1.552,-0.0082]);
Shape Shape669 = createNode("Shape");
Shape669.USE = "HAnimJointShape";
Transform668.children = new MFNode();

Transform668.children[0] = Shape669;

HAnimSegment666.children[1] = Transform668;

//HAnimSegment visualization line from current <HAnimJoint name='vc5'/> to child <HAnimJoint name='vc4'/>
Shape Shape670 = createNode("Shape");
LineSet LineSet671 = createNode("LineSet");
LineSet671.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate672 = createNode("Coordinate");
Coordinate672.point = new MFVec3f(new float[0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084]);
LineSet671.coord = Coordinate672;

ColorRGBA ColorRGBA673 = createNode("ColorRGBA");
ColorRGBA673.USE = "HAnimSegmentLineColorRGBA";
LineSet671.color = ColorRGBA673;

Shape670.geometry = LineSet671;

HAnimSegment666.children[2] = Shape670;

HAnimJoint665.children = new MFNode();

HAnimJoint665.children[0] = HAnimSegment666;

HAnimJoint HAnimJoint674 = createNode("HAnimJoint");
HAnimJoint674.name = "vc4";
HAnimJoint674.DEF = "hanim_vc4";
HAnimJoint674.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimJoint674.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint674.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment675 = createNode("HAnimSegment");
HAnimSegment675.name = "c4";
HAnimSegment675.DEF = "hanim_c4";
//Visualization sphere for <HAnimJoint name='vc4'/> is placed within <HAnimSegment name='c4'/>
TouchSensor TouchSensor676 = createNode("TouchSensor");
TouchSensor676.description = "HAnimJoint vc4, HAnimSegment c4";
HAnimSegment675.children = new MFNode();

HAnimSegment675.children[0] = TouchSensor676;

Transform Transform677 = createNode("Transform");
Transform677.translation = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
Shape Shape678 = createNode("Shape");
Shape678.USE = "HAnimJointShape";
Transform677.children = new MFNode();

Transform677.children[0] = Shape678;

HAnimSegment675.children[1] = Transform677;

//HAnimSegment visualization line from current <HAnimJoint name='vc4'/> to child <HAnimJoint name='vc3'/>
Shape Shape679 = createNode("Shape");
LineSet LineSet680 = createNode("LineSet");
LineSet680.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate681 = createNode("Coordinate");
Coordinate681.point = new MFVec3f(new float[0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103]);
LineSet680.coord = Coordinate681;

ColorRGBA ColorRGBA682 = createNode("ColorRGBA");
ColorRGBA682.USE = "HAnimSegmentLineColorRGBA";
LineSet680.color = ColorRGBA682;

Shape679.geometry = LineSet680;

HAnimSegment675.children[2] = Shape679;

HAnimJoint674.children = new MFNode();

HAnimJoint674.children[0] = HAnimSegment675;

HAnimJoint HAnimJoint683 = createNode("HAnimJoint");
HAnimJoint683.name = "vc3";
HAnimJoint683.DEF = "hanim_vc3";
HAnimJoint683.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
HAnimJoint683.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint683.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment684 = createNode("HAnimSegment");
HAnimSegment684.name = "c3";
HAnimSegment684.DEF = "hanim_c3";
//Visualization sphere for <HAnimJoint name='vc3'/> is placed within <HAnimSegment name='c3'/>
TouchSensor TouchSensor685 = createNode("TouchSensor");
TouchSensor685.description = "HAnimJoint vc3, HAnimSegment c3";
HAnimSegment684.children = new MFNode();

HAnimSegment684.children[0] = TouchSensor685;

Transform Transform686 = createNode("Transform");
Transform686.translation = new SFVec3f(new float[0.0066,1.58,-0.0103]);
Shape Shape687 = createNode("Shape");
Shape687.USE = "HAnimJointShape";
Transform686.children = new MFNode();

Transform686.children[0] = Shape687;

HAnimSegment684.children[1] = Transform686;

//HAnimSegment visualization line from current <HAnimJoint name='vc3'/> to child <HAnimJoint name='vc2'/>
Shape Shape688 = createNode("Shape");
LineSet LineSet689 = createNode("LineSet");
LineSet689.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate690 = createNode("Coordinate");
Coordinate690.point = new MFVec3f(new float[0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103]);
LineSet689.coord = Coordinate690;

ColorRGBA ColorRGBA691 = createNode("ColorRGBA");
ColorRGBA691.USE = "HAnimSegmentLineColorRGBA";
LineSet689.color = ColorRGBA691;

Shape688.geometry = LineSet689;

HAnimSegment684.children[2] = Shape688;

HAnimJoint683.children = new MFNode();

HAnimJoint683.children[0] = HAnimSegment684;

HAnimJoint HAnimJoint692 = createNode("HAnimJoint");
HAnimJoint692.name = "vc2";
HAnimJoint692.DEF = "hanim_vc2";
HAnimJoint692.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimJoint692.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint692.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment693 = createNode("HAnimSegment");
HAnimSegment693.name = "c2";
HAnimSegment693.DEF = "hanim_c2";
//Visualization sphere for <HAnimJoint name='vc2'/> is placed within <HAnimSegment name='c2'/>
TouchSensor TouchSensor694 = createNode("TouchSensor");
TouchSensor694.description = "HAnimJoint vc2, HAnimSegment c2";
HAnimSegment693.children = new MFNode();

HAnimSegment693.children[0] = TouchSensor694;

Transform Transform695 = createNode("Transform");
Transform695.translation = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
Shape Shape696 = createNode("Shape");
Shape696.USE = "HAnimJointShape";
Transform695.children = new MFNode();

Transform695.children[0] = Shape696;

HAnimSegment693.children[1] = Transform695;

//HAnimSegment visualization line from current <HAnimJoint name='vc2'/> to child <HAnimJoint name='vc1'/>
Shape Shape697 = createNode("Shape");
LineSet LineSet698 = createNode("LineSet");
LineSet698.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate699 = createNode("Coordinate");
Coordinate699.point = new MFVec3f(new float[0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034]);
LineSet698.coord = Coordinate699;

ColorRGBA ColorRGBA700 = createNode("ColorRGBA");
ColorRGBA700.USE = "HAnimSegmentLineColorRGBA";
LineSet698.color = ColorRGBA700;

Shape697.geometry = LineSet698;

HAnimSegment693.children[2] = Shape697;

HAnimJoint692.children = new MFNode();

HAnimJoint692.children[0] = HAnimSegment693;

HAnimJoint HAnimJoint701 = createNode("HAnimJoint");
HAnimJoint701.name = "vc1";
HAnimJoint701.DEF = "hanim_vc1";
HAnimJoint701.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
HAnimJoint701.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint701.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment702 = createNode("HAnimSegment");
HAnimSegment702.name = "c1";
HAnimSegment702.DEF = "hanim_c1";
//Visualization sphere for <HAnimJoint name='vc1'/> is placed within <HAnimSegment name='c1'/>
TouchSensor TouchSensor703 = createNode("TouchSensor");
TouchSensor703.description = "HAnimJoint vc1, HAnimSegment c1";
HAnimSegment702.children = new MFNode();

HAnimSegment702.children[0] = TouchSensor703;

Transform Transform704 = createNode("Transform");
Transform704.translation = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
Shape Shape705 = createNode("Shape");
Shape705.USE = "HAnimJointShape";
Transform704.children = new MFNode();

Transform704.children[0] = Shape705;

HAnimSegment702.children[1] = Transform704;

//HAnimSegment visualization line from current <HAnimJoint name='vc1'/> to child <HAnimJoint name='skullbase'/>
Shape Shape706 = createNode("Shape");
LineSet LineSet707 = createNode("LineSet");
LineSet707.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate708 = createNode("Coordinate");
Coordinate708.point = new MFVec3f(new float[0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236]);
LineSet707.coord = Coordinate708;

ColorRGBA ColorRGBA709 = createNode("ColorRGBA");
ColorRGBA709.USE = "HAnimSegmentLineColorRGBA";
LineSet707.color = ColorRGBA709;

Shape706.geometry = LineSet707;

HAnimSegment702.children[2] = Shape706;

HAnimJoint701.children = new MFNode();

HAnimJoint701.children[0] = HAnimSegment702;

HAnimJoint HAnimJoint710 = createNode("HAnimJoint");
HAnimJoint710.name = "skullbase";
HAnimJoint710.DEF = "hanim_skullbase";
HAnimJoint710.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimJoint710.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint710.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment711 = createNode("HAnimSegment");
HAnimSegment711.name = "skull";
HAnimSegment711.DEF = "hanim_skull";
//Visualization sphere for <HAnimJoint name='skullbase'/> is placed within <HAnimSegment name='skull'/>
TouchSensor TouchSensor712 = createNode("TouchSensor");
TouchSensor712.description = "HAnimJoint skullbase, HAnimSegment skull";
HAnimSegment711.children = new MFNode();

HAnimSegment711.children[0] = TouchSensor712;

Transform Transform713 = createNode("Transform");
Transform713.translation = new SFVec3f(new float[0.0044,1.6209,0.0236]);
Shape Shape714 = createNode("Shape");
Shape714.USE = "HAnimJointShape";
Transform713.children = new MFNode();

Transform713.children[0] = Shape714;

HAnimSegment711.children[1] = Transform713;

//HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='l_eyeball_joint'/>
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

HAnimSegment711.children[2] = Shape715;

//HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='l_eyelid_joint'/>
Shape Shape719 = createNode("Shape");
LineSet LineSet720 = createNode("LineSet");
LineSet720.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate721 = createNode("Coordinate");
Coordinate721.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0336,1.6332,0.0502]);
LineSet720.coord = Coordinate721;

ColorRGBA ColorRGBA722 = createNode("ColorRGBA");
ColorRGBA722.USE = "HAnimSegmentLineColorRGBA";
LineSet720.color = ColorRGBA722;

Shape719.geometry = LineSet720;

HAnimSegment711.children[3] = Shape719;

//HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='l_eyebrow_joint'/>
Shape Shape723 = createNode("Shape");
LineSet LineSet724 = createNode("LineSet");
LineSet724.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate725 = createNode("Coordinate");
Coordinate725.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0336,1.635,0.0506]);
LineSet724.coord = Coordinate725;

ColorRGBA ColorRGBA726 = createNode("ColorRGBA");
ColorRGBA726.USE = "HAnimSegmentLineColorRGBA";
LineSet724.color = ColorRGBA726;

Shape723.geometry = LineSet724;

HAnimSegment711.children[4] = Shape723;

//HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='r_eyeball_joint'/>
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

HAnimSegment711.children[5] = Shape727;

//HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='r_eyelid_joint'/>
Shape Shape731 = createNode("Shape");
LineSet LineSet732 = createNode("LineSet");
LineSet732.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate733 = createNode("Coordinate");
Coordinate733.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502]);
LineSet732.coord = Coordinate733;

ColorRGBA ColorRGBA734 = createNode("ColorRGBA");
ColorRGBA734.USE = "HAnimSegmentLineColorRGBA";
LineSet732.color = ColorRGBA734;

Shape731.geometry = LineSet732;

HAnimSegment711.children[6] = Shape731;

//HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='r_eyebrow_joint'/>
Shape Shape735 = createNode("Shape");
LineSet LineSet736 = createNode("LineSet");
LineSet736.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate737 = createNode("Coordinate");
Coordinate737.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0336,1.635,0.0506]);
LineSet736.coord = Coordinate737;

ColorRGBA ColorRGBA738 = createNode("ColorRGBA");
ColorRGBA738.USE = "HAnimSegmentLineColorRGBA";
LineSet736.color = ColorRGBA738;

Shape735.geometry = LineSet736;

HAnimSegment711.children[7] = Shape735;

//HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='temporomandibular'/>
Shape Shape739 = createNode("Shape");
LineSet LineSet740 = createNode("LineSet");
LineSet740.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate741 = createNode("Coordinate");
Coordinate741.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1.63,0.015]);
LineSet740.coord = Coordinate741;

ColorRGBA ColorRGBA742 = createNode("ColorRGBA");
ColorRGBA742.USE = "HAnimSegmentLineColorRGBA";
LineSet740.color = ColorRGBA742;

Shape739.geometry = LineSet740;

HAnimSegment711.children[8] = Shape739;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='skull_tip'/>
Shape Shape743 = createNode("Shape");
LineSet LineSet744 = createNode("LineSet");
LineSet744.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate745 = createNode("Coordinate");
Coordinate745.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.005,1.7504,0.0055]);
LineSet744.coord = Coordinate745;

ColorRGBA ColorRGBA746 = createNode("ColorRGBA");
ColorRGBA746.USE = "HAnimSiteLineColorRGBA";
LineSet744.color = ColorRGBA746;

Shape743.geometry = LineSet744;

HAnimSegment711.children[9] = Shape743;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='sellion_pt'/>
Shape Shape747 = createNode("Shape");
LineSet LineSet748 = createNode("LineSet");
LineSet748.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate749 = createNode("Coordinate");
Coordinate749.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0058,1.6316,0.0852]);
LineSet748.coord = Coordinate749;

ColorRGBA ColorRGBA750 = createNode("ColorRGBA");
ColorRGBA750.USE = "HAnimSiteLineColorRGBA";
LineSet748.color = ColorRGBA750;

Shape747.geometry = LineSet748;

HAnimSegment711.children[10] = Shape747;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_infraorbitale_pt'/>
Shape Shape751 = createNode("Shape");
LineSet LineSet752 = createNode("LineSet");
LineSet752.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate753 = createNode("Coordinate");
Coordinate753.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0237,1.6171,0.0752]);
LineSet752.coord = Coordinate753;

ColorRGBA ColorRGBA754 = createNode("ColorRGBA");
ColorRGBA754.USE = "HAnimSiteLineColorRGBA";
LineSet752.color = ColorRGBA754;

Shape751.geometry = LineSet752;

HAnimSegment711.children[11] = Shape751;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_infraorbitale_pt'/>
Shape Shape755 = createNode("Shape");
LineSet LineSet756 = createNode("LineSet");
LineSet756.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate757 = createNode("Coordinate");
Coordinate757.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0341,1.6171,0.0752]);
LineSet756.coord = Coordinate757;

ColorRGBA ColorRGBA758 = createNode("ColorRGBA");
ColorRGBA758.USE = "HAnimSiteLineColorRGBA";
LineSet756.color = ColorRGBA758;

Shape755.geometry = LineSet756;

HAnimSegment711.children[12] = Shape755;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='supramenton_pt'/>
Shape Shape759 = createNode("Shape");
LineSet LineSet760 = createNode("LineSet");
LineSet760.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate761 = createNode("Coordinate");
Coordinate761.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0061,1.541,0.0805]);
LineSet760.coord = Coordinate761;

ColorRGBA ColorRGBA762 = createNode("ColorRGBA");
ColorRGBA762.USE = "HAnimSiteLineColorRGBA";
LineSet760.color = ColorRGBA762;

Shape759.geometry = LineSet760;

HAnimSegment711.children[13] = Shape759;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_tragion_pt'/>
Shape Shape763 = createNode("Shape");
LineSet LineSet764 = createNode("LineSet");
LineSet764.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate765 = createNode("Coordinate");
Coordinate765.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0646,1.6347,0.0302]);
LineSet764.coord = Coordinate765;

ColorRGBA ColorRGBA766 = createNode("ColorRGBA");
ColorRGBA766.USE = "HAnimSiteLineColorRGBA";
LineSet764.color = ColorRGBA766;

Shape763.geometry = LineSet764;

HAnimSegment711.children[14] = Shape763;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_gonion_pt'/>
Shape Shape767 = createNode("Shape");
LineSet LineSet768 = createNode("LineSet");
LineSet768.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate769 = createNode("Coordinate");
Coordinate769.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.052,1.5529,0.0347]);
LineSet768.coord = Coordinate769;

ColorRGBA ColorRGBA770 = createNode("ColorRGBA");
ColorRGBA770.USE = "HAnimSiteLineColorRGBA";
LineSet768.color = ColorRGBA770;

Shape767.geometry = LineSet768;

HAnimSegment711.children[15] = Shape767;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_tragion_pt'/>
Shape Shape771 = createNode("Shape");
LineSet LineSet772 = createNode("LineSet");
LineSet772.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate773 = createNode("Coordinate");
Coordinate773.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0739,1.6348,0.0282]);
LineSet772.coord = Coordinate773;

ColorRGBA ColorRGBA774 = createNode("ColorRGBA");
ColorRGBA774.USE = "HAnimSiteLineColorRGBA";
LineSet772.color = ColorRGBA774;

Shape771.geometry = LineSet772;

HAnimSegment711.children[16] = Shape771;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_gonion_pt'/>
Shape Shape775 = createNode("Shape");
LineSet LineSet776 = createNode("LineSet");
LineSet776.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate777 = createNode("Coordinate");
Coordinate777.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0631,1.553,0.033]);
LineSet776.coord = Coordinate777;

ColorRGBA ColorRGBA778 = createNode("ColorRGBA");
ColorRGBA778.USE = "HAnimSiteLineColorRGBA";
LineSet776.color = ColorRGBA778;

Shape775.geometry = LineSet776;

HAnimSegment711.children[17] = Shape775;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='nuchale_pt'/>
Shape Shape779 = createNode("Shape");
LineSet LineSet780 = createNode("LineSet");
LineSet780.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate781 = createNode("Coordinate");
Coordinate781.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0039,1.5972,-0.0796]);
LineSet780.coord = Coordinate781;

ColorRGBA ColorRGBA782 = createNode("ColorRGBA");
ColorRGBA782.USE = "HAnimSiteLineColorRGBA";
LineSet780.color = ColorRGBA782;

Shape779.geometry = LineSet780;

HAnimSegment711.children[18] = Shape779;

HAnimSite HAnimSite783 = createNode("HAnimSite");
HAnimSite783.name = "skull_vertex_pt";
HAnimSite783.DEF = "hanim_skull_vertex_pt";
HAnimSite783.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
//TODO move skull_tip x to zero, check others for symmetry
//HAnimSite visualization shape
TouchSensor TouchSensor784 = createNode("TouchSensor");
TouchSensor784.description = "HAnimSite skull_tip";
HAnimSite783.children = new MFNode();

HAnimSite783.children[0] = TouchSensor784;

Shape Shape785 = createNode("Shape");
Shape785.USE = "HAnimSiteShape";
HAnimSite783.children[1] = Shape785;

HAnimSegment711.children[19] = HAnimSite783;

HAnimSite HAnimSite786 = createNode("HAnimSite");
HAnimSite786.name = "sellion_pt";
HAnimSite786.DEF = "hanim_sellion_pt";
HAnimSite786.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
//HAnimSite visualization shape
TouchSensor TouchSensor787 = createNode("TouchSensor");
TouchSensor787.description = "HAnimSite sellion_pt";
HAnimSite786.children = new MFNode();

HAnimSite786.children[0] = TouchSensor787;

Shape Shape788 = createNode("Shape");
Shape788.USE = "HAnimSiteShape";
HAnimSite786.children[1] = Shape788;

HAnimSegment711.children[20] = HAnimSite786;

HAnimSite HAnimSite789 = createNode("HAnimSite");
HAnimSite789.name = "r_infraorbitale_pt";
HAnimSite789.DEF = "hanim_r_infraorbitale_pt";
HAnimSite789.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
//HAnimSite visualization shape
TouchSensor TouchSensor790 = createNode("TouchSensor");
TouchSensor790.description = "HAnimSite r_infraorbitale_pt";
HAnimSite789.children = new MFNode();

HAnimSite789.children[0] = TouchSensor790;

Shape Shape791 = createNode("Shape");
Shape791.USE = "HAnimSiteShape";
HAnimSite789.children[1] = Shape791;

HAnimSegment711.children[21] = HAnimSite789;

HAnimSite HAnimSite792 = createNode("HAnimSite");
HAnimSite792.name = "l_infraorbitale_pt";
HAnimSite792.DEF = "hanim_l_infraorbitale_pt";
HAnimSite792.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
//HAnimSite visualization shape
TouchSensor TouchSensor793 = createNode("TouchSensor");
TouchSensor793.description = "HAnimSite l_infraorbitale_pt";
HAnimSite792.children = new MFNode();

HAnimSite792.children[0] = TouchSensor793;

Shape Shape794 = createNode("Shape");
Shape794.USE = "HAnimSiteShape";
HAnimSite792.children[1] = Shape794;

HAnimSegment711.children[22] = HAnimSite792;

HAnimSite HAnimSite795 = createNode("HAnimSite");
HAnimSite795.name = "supramenton_pt";
HAnimSite795.DEF = "hanim_supramenton_pt";
HAnimSite795.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
//HAnimSite visualization shape
TouchSensor TouchSensor796 = createNode("TouchSensor");
TouchSensor796.description = "HAnimSite supramenton_pt";
HAnimSite795.children = new MFNode();

HAnimSite795.children[0] = TouchSensor796;

Shape Shape797 = createNode("Shape");
Shape797.USE = "HAnimSiteShape";
HAnimSite795.children[1] = Shape797;

HAnimSegment711.children[23] = HAnimSite795;

HAnimSite HAnimSite798 = createNode("HAnimSite");
HAnimSite798.name = "r_tragion_pt";
HAnimSite798.DEF = "hanim_r_tragion_pt";
HAnimSite798.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
//HAnimSite visualization shape
TouchSensor TouchSensor799 = createNode("TouchSensor");
TouchSensor799.description = "HAnimSite r_tragion_pt";
HAnimSite798.children = new MFNode();

HAnimSite798.children[0] = TouchSensor799;

Shape Shape800 = createNode("Shape");
Shape800.USE = "HAnimSiteShape";
HAnimSite798.children[1] = Shape800;

HAnimSegment711.children[24] = HAnimSite798;

HAnimSite HAnimSite801 = createNode("HAnimSite");
HAnimSite801.name = "r_gonion_pt";
HAnimSite801.DEF = "hanim_r_gonion_pt";
HAnimSite801.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
//HAnimSite visualization shape
TouchSensor TouchSensor802 = createNode("TouchSensor");
TouchSensor802.description = "HAnimSite r_gonion_pt";
HAnimSite801.children = new MFNode();

HAnimSite801.children[0] = TouchSensor802;

Shape Shape803 = createNode("Shape");
Shape803.USE = "HAnimSiteShape";
HAnimSite801.children[1] = Shape803;

HAnimSegment711.children[25] = HAnimSite801;

HAnimSite HAnimSite804 = createNode("HAnimSite");
HAnimSite804.name = "l_tragion_pt";
HAnimSite804.DEF = "hanim_l_tragion_pt";
HAnimSite804.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
//HAnimSite visualization shape
TouchSensor TouchSensor805 = createNode("TouchSensor");
TouchSensor805.description = "HAnimSite l_tragion_pt";
HAnimSite804.children = new MFNode();

HAnimSite804.children[0] = TouchSensor805;

Shape Shape806 = createNode("Shape");
Shape806.USE = "HAnimSiteShape";
HAnimSite804.children[1] = Shape806;

HAnimSegment711.children[26] = HAnimSite804;

HAnimSite HAnimSite807 = createNode("HAnimSite");
HAnimSite807.name = "l_gonion_pt";
HAnimSite807.DEF = "hanim_l_gonion_pt";
HAnimSite807.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
//HAnimSite visualization shape
TouchSensor TouchSensor808 = createNode("TouchSensor");
TouchSensor808.description = "HAnimSite l_gonion_pt";
HAnimSite807.children = new MFNode();

HAnimSite807.children[0] = TouchSensor808;

Shape Shape809 = createNode("Shape");
Shape809.USE = "HAnimSiteShape";
HAnimSite807.children[1] = Shape809;

HAnimSegment711.children[27] = HAnimSite807;

HAnimSite HAnimSite810 = createNode("HAnimSite");
HAnimSite810.name = "nuchale_pt";
HAnimSite810.DEF = "hanim_nuchale_pt";
HAnimSite810.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
//HAnimSite visualization shape
TouchSensor TouchSensor811 = createNode("TouchSensor");
TouchSensor811.description = "HAnimSite nuchale_pt";
HAnimSite810.children = new MFNode();

HAnimSite810.children[0] = TouchSensor811;

Shape Shape812 = createNode("Shape");
Shape812.USE = "HAnimSiteShape";
HAnimSite810.children[1] = Shape812;

HAnimSegment711.children[28] = HAnimSite810;

HAnimJoint710.children = new MFNode();

HAnimJoint710.children[0] = HAnimSegment711;

HAnimJoint HAnimJoint813 = createNode("HAnimJoint");
HAnimJoint813.name = "l_eyeball_joint";
HAnimJoint813.DEF = "hanim_l_eyeball_joint";
HAnimJoint813.center = new SFVec3f(new float[0.0336,1.6332,0.0502]);
HAnimJoint813.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint813.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment814 = createNode("HAnimSegment");
HAnimSegment814.name = "l_eyeball";
HAnimSegment814.DEF = "hanim_l_eyeball";
//Visualization sphere for <HAnimJoint name='l_eyeball_joint'/> is placed within <HAnimSegment name='l_eyeball'/>
TouchSensor TouchSensor815 = createNode("TouchSensor");
TouchSensor815.description = "HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball";
HAnimSegment814.children = new MFNode();

HAnimSegment814.children[0] = TouchSensor815;

Transform Transform816 = createNode("Transform");
Transform816.translation = new SFVec3f(new float[0.0336,1.6332,0.0502]);
Shape Shape817 = createNode("Shape");
Shape817.USE = "HAnimJointShape";
Transform816.children = new MFNode();

Transform816.children[0] = Shape817;

HAnimSegment814.children[1] = Transform816;

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_eyeball_joint'/> to <HAnimSite name='l_eyeball_site_view'/>
Shape Shape818 = createNode("Shape");
LineSet LineSet819 = createNode("LineSet");
LineSet819.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate820 = createNode("Coordinate");
Coordinate820.point = new MFVec3f(new float[0.0336,1.6332,0.0502,0.034,1.64,0.05]);
LineSet819.coord = Coordinate820;

ColorRGBA ColorRGBA821 = createNode("ColorRGBA");
ColorRGBA821.DEF = "HAnimSiteViewpointLineColorRGBA";
ColorRGBA821.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1]);
LineSet819.color = ColorRGBA821;

Shape818.geometry = LineSet819;

HAnimSegment814.children[2] = Shape818;

HAnimSite HAnimSite822 = createNode("HAnimSite");
HAnimSite822.name = "l_eyeball_site_view";
HAnimSite822.DEF = "hanim_l_eyeball_site_view";
HAnimSite822.translation = new SFVec3f(new float[0.034,1.64,0.05]);
//HAnimSite visualization shape
TouchSensor TouchSensor823 = createNode("TouchSensor");
TouchSensor823.description = "HAnimSite l_eyeball_site_view";
HAnimSite822.children = new MFNode();

HAnimSite822.children[0] = TouchSensor823;

Shape Shape824 = createNode("Shape");
Shape824.USE = "HAnimSiteShape";
HAnimSite822.children[1] = Shape824;

Viewpoint Viewpoint825 = createNode("Viewpoint");
Viewpoint825.DEF = "hanim_l_eyeball_site_viewpoint";
Viewpoint825.description = "l_eyeball_site_viewpoint looking forward";
Viewpoint825.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint825.position = new SFVec3f(new float[0,0,0]);
HAnimSite822.children[2] = Viewpoint825;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor826 = createNode("Anchor");
Anchor826.description = "HAnimSite hanim_l_eyeball_site_view Viewpoint";
Anchor826.url = new MFString(new java.lang.String["#hanim_l_eyeball_site_viewpoint"]);
LOD LOD827 = createNode("LOD");
LOD827.forceTransitions = True;
LOD827.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo828 = createNode("WorldInfo");
WorldInfo828.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD827.children = new MFNode();

LOD827.children[0] = WorldInfo828;

Shape Shape829 = createNode("Shape");
Shape829.DEF = "HAnimSiteViewpointShape";
IndexedFaceSet IndexedFaceSet830 = createNode("IndexedFaceSet");
IndexedFaceSet830.DEF = "SiteViewpointDiamondIFS";
IndexedFaceSet830.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet830.creaseAngle = 0.5;
Coordinate Coordinate831 = createNode("Coordinate");
Coordinate831.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet830.coord = Coordinate831;

Shape829.geometry = IndexedFaceSet830;

Appearance Appearance832 = createNode("Appearance");
Material Material833 = createNode("Material");
Material833.diffuseColor = new SFColor(new float[1,1,0]);
Material833.transparency = 0.3;
Appearance832.material = Material833;

Shape829.appearance = Appearance832;

LOD827.children[1] = Shape829;

Anchor826.children = new MFNode();

Anchor826.children[0] = LOD827;

HAnimSite822.children[3] = Anchor826;

HAnimSegment814.children[3] = HAnimSite822;

HAnimJoint813.children = new MFNode();

HAnimJoint813.children[0] = HAnimSegment814;

HAnimJoint710.children[1] = HAnimJoint813;

HAnimJoint HAnimJoint834 = createNode("HAnimJoint");
HAnimJoint834.name = "l_eyelid_joint";
HAnimJoint834.DEF = "hanim_l_eyelid_joint";
HAnimJoint834.center = new SFVec3f(new float[0.0336,1.6332,0.0502]);
HAnimJoint834.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint834.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment835 = createNode("HAnimSegment");
HAnimSegment835.name = "l_eyelid";
HAnimSegment835.DEF = "hanim_l_eyelid";
//Visualization sphere for <HAnimJoint name='l_eyelid_joint'/> is placed within <HAnimSegment name='l_eyelid'/>
TouchSensor TouchSensor836 = createNode("TouchSensor");
TouchSensor836.description = "HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid";
HAnimSegment835.children = new MFNode();

HAnimSegment835.children[0] = TouchSensor836;

Transform Transform837 = createNode("Transform");
Transform837.translation = new SFVec3f(new float[0.0336,1.6332,0.0502]);
Shape Shape838 = createNode("Shape");
Shape838.USE = "HAnimJointShape";
Transform837.children = new MFNode();

Transform837.children[0] = Shape838;

HAnimSegment835.children[1] = Transform837;

HAnimJoint834.children = new MFNode();

HAnimJoint834.children[0] = HAnimSegment835;

HAnimJoint710.children[2] = HAnimJoint834;

HAnimJoint HAnimJoint839 = createNode("HAnimJoint");
HAnimJoint839.name = "l_eyebrow_joint";
HAnimJoint839.DEF = "hanim_l_eyebrow_joint";
HAnimJoint839.center = new SFVec3f(new float[0.0336,1.635,0.0506]);
HAnimJoint839.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint839.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment840 = createNode("HAnimSegment");
HAnimSegment840.name = "l_eyebrow";
HAnimSegment840.DEF = "hanim_l_eyebrow";
//Visualization sphere for <HAnimJoint name='l_eyebrow_joint'/> is placed within <HAnimSegment name='l_eyebrow'/>
TouchSensor TouchSensor841 = createNode("TouchSensor");
TouchSensor841.description = "HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow";
HAnimSegment840.children = new MFNode();

HAnimSegment840.children[0] = TouchSensor841;

Transform Transform842 = createNode("Transform");
Transform842.translation = new SFVec3f(new float[0.0336,1.635,0.0506]);
Shape Shape843 = createNode("Shape");
Shape843.USE = "HAnimJointShape";
Transform842.children = new MFNode();

Transform842.children[0] = Shape843;

HAnimSegment840.children[1] = Transform842;

HAnimJoint839.children = new MFNode();

HAnimJoint839.children[0] = HAnimSegment840;

HAnimJoint710.children[3] = HAnimJoint839;

HAnimJoint HAnimJoint844 = createNode("HAnimJoint");
HAnimJoint844.name = "r_eyeball_joint";
HAnimJoint844.DEF = "hanim_r_eyeball_joint";
HAnimJoint844.center = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
HAnimJoint844.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint844.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment845 = createNode("HAnimSegment");
HAnimSegment845.name = "r_eyeball";
HAnimSegment845.DEF = "hanim_r_eyeball";
//Visualization sphere for <HAnimJoint name='r_eyeball_joint'/> is placed within <HAnimSegment name='r_eyeball'/>
TouchSensor TouchSensor846 = createNode("TouchSensor");
TouchSensor846.description = "HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball";
HAnimSegment845.children = new MFNode();

HAnimSegment845.children[0] = TouchSensor846;

Transform Transform847 = createNode("Transform");
Transform847.translation = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
Shape Shape848 = createNode("Shape");
Shape848.USE = "HAnimJointShape";
Transform847.children = new MFNode();

Transform847.children[0] = Shape848;

HAnimSegment845.children[1] = Transform847;

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_eyeball_joint'/> to <HAnimSite name='r_eyeball_site_view'/>
Shape Shape849 = createNode("Shape");
LineSet LineSet850 = createNode("LineSet");
LineSet850.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate851 = createNode("Coordinate");
Coordinate851.point = new MFVec3f(new float[-0.0336,1.6332,0.0502,-0.034,1.64,0.05]);
LineSet850.coord = Coordinate851;

ColorRGBA ColorRGBA852 = createNode("ColorRGBA");
ColorRGBA852.USE = "HAnimSiteViewpointLineColorRGBA";
LineSet850.color = ColorRGBA852;

Shape849.geometry = LineSet850;

HAnimSegment845.children[2] = Shape849;

HAnimSite HAnimSite853 = createNode("HAnimSite");
HAnimSite853.name = "r_eyeball_site_view";
HAnimSite853.DEF = "hanim_r_eyeball_site_view";
HAnimSite853.translation = new SFVec3f(new float[-0.034,1.64,0.05]);
//HAnimSite visualization shape
TouchSensor TouchSensor854 = createNode("TouchSensor");
TouchSensor854.description = "HAnimSite r_eyeball_site_view";
HAnimSite853.children = new MFNode();

HAnimSite853.children[0] = TouchSensor854;

Shape Shape855 = createNode("Shape");
Shape855.USE = "HAnimSiteShape";
HAnimSite853.children[1] = Shape855;

Viewpoint Viewpoint856 = createNode("Viewpoint");
Viewpoint856.DEF = "hanim_r_eyeball_site_viewpoint";
Viewpoint856.description = "r_eyeball_site_viewpoint looking forward";
Viewpoint856.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint856.position = new SFVec3f(new float[0,0,0]);
HAnimSite853.children[2] = Viewpoint856;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor857 = createNode("Anchor");
Anchor857.description = "HAnimSite hanim_r_eyeball_site_view Viewpoint";
Anchor857.url = new MFString(new java.lang.String["#hanim_r_eyeball_site_viewpoint"]);
LOD LOD858 = createNode("LOD");
LOD858.forceTransitions = True;
LOD858.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo859 = createNode("WorldInfo");
WorldInfo859.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD858.children = new MFNode();

LOD858.children[0] = WorldInfo859;

Shape Shape860 = createNode("Shape");
Shape860.USE = "HAnimSiteViewpointShape";
LOD858.children[1] = Shape860;

Anchor857.children = new MFNode();

Anchor857.children[0] = LOD858;

HAnimSite853.children[3] = Anchor857;

HAnimSegment845.children[3] = HAnimSite853;

HAnimJoint844.children = new MFNode();

HAnimJoint844.children[0] = HAnimSegment845;

HAnimJoint710.children[4] = HAnimJoint844;

HAnimJoint HAnimJoint861 = createNode("HAnimJoint");
HAnimJoint861.name = "r_eyelid_joint";
HAnimJoint861.DEF = "hanim_r_eyelid_joint";
HAnimJoint861.center = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
HAnimJoint861.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint861.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment862 = createNode("HAnimSegment");
HAnimSegment862.name = "r_eyelid";
HAnimSegment862.DEF = "hanim_r_eyelid";
//Visualization sphere for <HAnimJoint name='r_eyelid_joint'/> is placed within <HAnimSegment name='r_eyelid'/>
TouchSensor TouchSensor863 = createNode("TouchSensor");
TouchSensor863.description = "HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid";
HAnimSegment862.children = new MFNode();

HAnimSegment862.children[0] = TouchSensor863;

Transform Transform864 = createNode("Transform");
Transform864.translation = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
Shape Shape865 = createNode("Shape");
Shape865.USE = "HAnimJointShape";
Transform864.children = new MFNode();

Transform864.children[0] = Shape865;

HAnimSegment862.children[1] = Transform864;

HAnimJoint861.children = new MFNode();

HAnimJoint861.children[0] = HAnimSegment862;

HAnimJoint710.children[5] = HAnimJoint861;

HAnimJoint HAnimJoint866 = createNode("HAnimJoint");
HAnimJoint866.name = "r_eyebrow_joint";
HAnimJoint866.DEF = "hanim_r_eyebrow_joint";
HAnimJoint866.center = new SFVec3f(new float[-0.0336,1.635,0.0506]);
HAnimJoint866.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint866.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment867 = createNode("HAnimSegment");
HAnimSegment867.name = "r_eyebrow";
HAnimSegment867.DEF = "hanim_r_eyebrow";
//Visualization sphere for <HAnimJoint name='r_eyebrow_joint'/> is placed within <HAnimSegment name='r_eyebrow'/>
TouchSensor TouchSensor868 = createNode("TouchSensor");
TouchSensor868.description = "HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow";
HAnimSegment867.children = new MFNode();

HAnimSegment867.children[0] = TouchSensor868;

Transform Transform869 = createNode("Transform");
Transform869.translation = new SFVec3f(new float[-0.0336,1.635,0.0506]);
Shape Shape870 = createNode("Shape");
Shape870.USE = "HAnimJointShape";
Transform869.children = new MFNode();

Transform869.children[0] = Shape870;

HAnimSegment867.children[1] = Transform869;

HAnimJoint866.children = new MFNode();

HAnimJoint866.children[0] = HAnimSegment867;

HAnimJoint710.children[6] = HAnimJoint866;

HAnimJoint HAnimJoint871 = createNode("HAnimJoint");
HAnimJoint871.name = "temporomandibular";
HAnimJoint871.DEF = "hanim_temporomandibular";
HAnimJoint871.center = new SFVec3f(new float[0,1.63,0.015]);
HAnimJoint871.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint871.llimit = new MFFloat(new float[0,0,0]);
//Single joint, single segment for jaw, two sites for left/right TMJs https://en.wikipedia.org/wiki/Temporomandibular_joint
HAnimSegment HAnimSegment872 = createNode("HAnimSegment");
HAnimSegment872.name = "jaw";
HAnimSegment872.DEF = "hanim_jaw";
//Visualization sphere for <HAnimJoint name='temporomandibular'/> is placed within <HAnimSegment name='jaw'/>
TouchSensor TouchSensor873 = createNode("TouchSensor");
TouchSensor873.description = "HAnimJoint temporomandibular, HAnimSegment jaw";
HAnimSegment872.children = new MFNode();

HAnimSegment872.children[0] = TouchSensor873;

Transform Transform874 = createNode("Transform");
Transform874.translation = new SFVec3f(new float[0,1.63,0.015]);
Shape Shape875 = createNode("Shape");
Shape875.USE = "HAnimJointShape";
Transform874.children = new MFNode();

Transform874.children[0] = Shape875;

HAnimSegment872.children[1] = Transform874;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_l_site_pt'/>
Shape Shape876 = createNode("Shape");
LineSet LineSet877 = createNode("LineSet");
LineSet877.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate878 = createNode("Coordinate");
Coordinate878.point = new MFVec3f(new float[0,1.63,0.015,0.045,1.63,0]);
LineSet877.coord = Coordinate878;

ColorRGBA ColorRGBA879 = createNode("ColorRGBA");
ColorRGBA879.USE = "HAnimSiteLineColorRGBA";
LineSet877.color = ColorRGBA879;

Shape876.geometry = LineSet877;

HAnimSegment872.children[2] = Shape876;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_r_site_pt'/>
Shape Shape880 = createNode("Shape");
LineSet LineSet881 = createNode("LineSet");
LineSet881.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate882 = createNode("Coordinate");
Coordinate882.point = new MFVec3f(new float[0,1.63,0.015,-0.045,1.63,0]);
LineSet881.coord = Coordinate882;

ColorRGBA ColorRGBA883 = createNode("ColorRGBA");
ColorRGBA883.USE = "HAnimSiteLineColorRGBA";
LineSet881.color = ColorRGBA883;

Shape880.geometry = LineSet881;

HAnimSegment872.children[3] = Shape880;

HAnimSite HAnimSite884 = createNode("HAnimSite");
HAnimSite884.name = "temporomandibular_l_site_pt";
HAnimSite884.DEF = "hanim_temporomandibular_l_site_pt";
HAnimSite884.translation = new SFVec3f(new float[0.045,1.63,0]);
//HAnimSite visualization shape
TouchSensor TouchSensor885 = createNode("TouchSensor");
TouchSensor885.description = "HAnimSite temporomandibular_l_site_pt";
HAnimSite884.children = new MFNode();

HAnimSite884.children[0] = TouchSensor885;

Shape Shape886 = createNode("Shape");
Shape886.USE = "HAnimSiteShape";
HAnimSite884.children[1] = Shape886;

HAnimSegment872.children[4] = HAnimSite884;

HAnimSite HAnimSite887 = createNode("HAnimSite");
HAnimSite887.name = "temporomandibular_r_site_pt";
HAnimSite887.DEF = "hanim_temporomandibular_r_site_pt";
HAnimSite887.translation = new SFVec3f(new float[-0.045,1.63,0]);
//HAnimSite visualization shape
TouchSensor TouchSensor888 = createNode("TouchSensor");
TouchSensor888.description = "HAnimSite temporomandibular_r_site_pt";
HAnimSite887.children = new MFNode();

HAnimSite887.children[0] = TouchSensor888;

Shape Shape889 = createNode("Shape");
Shape889.USE = "HAnimSiteShape";
HAnimSite887.children[1] = Shape889;

HAnimSegment872.children[5] = HAnimSite887;

HAnimJoint871.children = new MFNode();

HAnimJoint871.children[0] = HAnimSegment872;

HAnimJoint710.children[7] = HAnimJoint871;

HAnimJoint701.children[1] = HAnimJoint710;

HAnimJoint692.children[1] = HAnimJoint701;

HAnimJoint683.children[1] = HAnimJoint692;

HAnimJoint674.children[1] = HAnimJoint683;

HAnimJoint665.children[1] = HAnimJoint674;

HAnimJoint656.children[1] = HAnimJoint665;

HAnimJoint633.children[1] = HAnimJoint656;

HAnimJoint602.children[1] = HAnimJoint633;

HAnimJoint HAnimJoint890 = createNode("HAnimJoint");
HAnimJoint890.name = "l_sternoclavicular";
HAnimJoint890.DEF = "hanim_l_sternoclavicular";
HAnimJoint890.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimJoint890.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint890.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment891 = createNode("HAnimSegment");
HAnimSegment891.name = "l_clavicle";
HAnimSegment891.DEF = "hanim_l_clavicle";
//Visualization sphere for <HAnimJoint name='l_sternoclavicular'/> is placed within <HAnimSegment name='l_clavicle'/>
TouchSensor TouchSensor892 = createNode("TouchSensor");
TouchSensor892.description = "HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle";
HAnimSegment891.children = new MFNode();

HAnimSegment891.children[0] = TouchSensor892;

Transform Transform893 = createNode("Transform");
Transform893.translation = new SFVec3f(new float[0.082,1.4488,-0.0353]);
Shape Shape894 = createNode("Shape");
Shape894.USE = "HAnimJointShape";
Transform893.children = new MFNode();

Transform893.children[0] = Shape894;

HAnimSegment891.children[1] = Transform893;

//HAnimSegment visualization line from current <HAnimJoint name='l_sternoclavicular'/> to child <HAnimJoint name='l_acromioclavicular'/>
Shape Shape895 = createNode("Shape");
LineSet LineSet896 = createNode("LineSet");
LineSet896.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate897 = createNode("Coordinate");
Coordinate897.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
LineSet896.coord = Coordinate897;

ColorRGBA ColorRGBA898 = createNode("ColorRGBA");
ColorRGBA898.USE = "HAnimSegmentLineColorRGBA";
LineSet896.color = ColorRGBA898;

Shape895.geometry = LineSet896;

HAnimSegment891.children[2] = Shape895;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_clavicale_pt'/>
Shape Shape899 = createNode("Shape");
LineSet LineSet900 = createNode("LineSet");
LineSet900.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate901 = createNode("Coordinate");
Coordinate901.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0271,1.4943,0.0394]);
LineSet900.coord = Coordinate901;

ColorRGBA ColorRGBA902 = createNode("ColorRGBA");
ColorRGBA902.USE = "HAnimSiteLineColorRGBA";
LineSet900.color = ColorRGBA902;

Shape899.geometry = LineSet900;

HAnimSegment891.children[3] = Shape899;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_acromion_pt'/>
Shape Shape903 = createNode("Shape");
LineSet LineSet904 = createNode("LineSet");
LineSet904.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate905 = createNode("Coordinate");
Coordinate905.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.2032,1.476,-0.049]);
LineSet904.coord = Coordinate905;

ColorRGBA ColorRGBA906 = createNode("ColorRGBA");
ColorRGBA906.USE = "HAnimSiteLineColorRGBA";
LineSet904.color = ColorRGBA906;

Shape903.geometry = LineSet904;

HAnimSegment891.children[4] = Shape903;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_ant_pt'/>
Shape Shape907 = createNode("Shape");
LineSet LineSet908 = createNode("LineSet");
LineSet908.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate909 = createNode("Coordinate");
Coordinate909.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.1777,1.4065,-0.0075]);
LineSet908.coord = Coordinate909;

ColorRGBA ColorRGBA910 = createNode("ColorRGBA");
ColorRGBA910.USE = "HAnimSiteLineColorRGBA";
LineSet908.color = ColorRGBA910;

Shape907.geometry = LineSet908;

HAnimSegment891.children[5] = Shape907;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_post_pt'/>
Shape Shape911 = createNode("Shape");
LineSet LineSet912 = createNode("LineSet");
LineSet912.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate913 = createNode("Coordinate");
Coordinate913.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.1706,1.4072,-0.0875]);
LineSet912.coord = Coordinate913;

ColorRGBA ColorRGBA914 = createNode("ColorRGBA");
ColorRGBA914.USE = "HAnimSiteLineColorRGBA";
LineSet912.color = ColorRGBA914;

Shape911.geometry = LineSet912;

HAnimSegment891.children[6] = Shape911;

HAnimSite HAnimSite915 = createNode("HAnimSite");
HAnimSite915.name = "l_clavicle_pt";
HAnimSite915.DEF = "hanim_l_clavicle_pt";
HAnimSite915.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
//HAnimSite visualization shape
TouchSensor TouchSensor916 = createNode("TouchSensor");
TouchSensor916.description = "HAnimSite l_clavicale_pt";
HAnimSite915.children = new MFNode();

HAnimSite915.children[0] = TouchSensor916;

Shape Shape917 = createNode("Shape");
Shape917.USE = "HAnimSiteShape";
HAnimSite915.children[1] = Shape917;

HAnimSegment891.children[7] = HAnimSite915;

HAnimSite HAnimSite918 = createNode("HAnimSite");
HAnimSite918.name = "l_acromion_pt";
HAnimSite918.DEF = "hanim_l_acromion_pt";
HAnimSite918.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
//HAnimSite visualization shape
TouchSensor TouchSensor919 = createNode("TouchSensor");
TouchSensor919.description = "HAnimSite l_acromion_pt";
HAnimSite918.children = new MFNode();

HAnimSite918.children[0] = TouchSensor919;

Shape Shape920 = createNode("Shape");
Shape920.USE = "HAnimSiteShape";
HAnimSite918.children[1] = Shape920;

HAnimSegment891.children[8] = HAnimSite918;

HAnimSite HAnimSite921 = createNode("HAnimSite");
HAnimSite921.name = "l_axilla_proximal_pt";
HAnimSite921.DEF = "hanim_l_axilla_proximal_pt";
HAnimSite921.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
//HAnimSite visualization shape
TouchSensor TouchSensor922 = createNode("TouchSensor");
TouchSensor922.description = "HAnimSite l_axilla_ant_pt";
HAnimSite921.children = new MFNode();

HAnimSite921.children[0] = TouchSensor922;

Shape Shape923 = createNode("Shape");
Shape923.USE = "HAnimSiteShape";
HAnimSite921.children[1] = Shape923;

HAnimSegment891.children[9] = HAnimSite921;

HAnimSite HAnimSite924 = createNode("HAnimSite");
HAnimSite924.name = "l_axilla_distal_pt";
HAnimSite924.DEF = "hanim_l_axilla_distal_pt";
HAnimSite924.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
//HAnimSite visualization shape
TouchSensor TouchSensor925 = createNode("TouchSensor");
TouchSensor925.description = "HAnimSite l_axilla_post_pt";
HAnimSite924.children = new MFNode();

HAnimSite924.children[0] = TouchSensor925;

Shape Shape926 = createNode("Shape");
Shape926.USE = "HAnimSiteShape";
HAnimSite924.children[1] = Shape926;

HAnimSegment891.children[10] = HAnimSite924;

HAnimJoint890.children = new MFNode();

HAnimJoint890.children[0] = HAnimSegment891;

HAnimJoint HAnimJoint927 = createNode("HAnimJoint");
HAnimJoint927.name = "l_acromioclavicular";
HAnimJoint927.DEF = "hanim_l_acromioclavicular";
HAnimJoint927.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimJoint927.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint927.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment928 = createNode("HAnimSegment");
HAnimSegment928.name = "l_scapula";
HAnimSegment928.DEF = "hanim_l_scapula";
//Visualization sphere for <HAnimJoint name='l_acromioclavicular'/> is placed within <HAnimSegment name='l_scapula'/>
TouchSensor TouchSensor929 = createNode("TouchSensor");
TouchSensor929.description = "HAnimJoint l_acromioclavicular, HAnimSegment l_scapula";
HAnimSegment928.children = new MFNode();

HAnimSegment928.children[0] = TouchSensor929;

Transform Transform930 = createNode("Transform");
Transform930.translation = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
Shape Shape931 = createNode("Shape");
Shape931.USE = "HAnimJointShape";
Transform930.children = new MFNode();

Transform930.children[0] = Shape931;

HAnimSegment928.children[1] = Transform930;

//HAnimSegment visualization line from current <HAnimJoint name='l_acromioclavicular'/> to child <HAnimJoint name='l_shoulder'/>
Shape Shape932 = createNode("Shape");
LineSet LineSet933 = createNode("LineSet");
LineSet933.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate934 = createNode("Coordinate");
Coordinate934.point = new MFVec3f(new float[0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
LineSet933.coord = Coordinate934;

ColorRGBA ColorRGBA935 = createNode("ColorRGBA");
ColorRGBA935.USE = "HAnimSegmentLineColorRGBA";
LineSet933.color = ColorRGBA935;

Shape932.geometry = LineSet933;

HAnimSegment928.children[2] = Shape932;

HAnimJoint927.children = new MFNode();

HAnimJoint927.children[0] = HAnimSegment928;

HAnimJoint HAnimJoint936 = createNode("HAnimJoint");
HAnimJoint936.name = "l_shoulder";
HAnimJoint936.DEF = "hanim_l_shoulder";
HAnimJoint936.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimJoint936.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint936.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment937 = createNode("HAnimSegment");
HAnimSegment937.name = "l_upperarm";
HAnimSegment937.DEF = "hanim_l_upperarm";
//Visualization sphere for <HAnimJoint name='l_shoulder'/> is placed within <HAnimSegment name='l_upperarm'/>
TouchSensor TouchSensor938 = createNode("TouchSensor");
TouchSensor938.description = "HAnimJoint l_shoulder, HAnimSegment l_upperarm";
HAnimSegment937.children = new MFNode();

HAnimSegment937.children[0] = TouchSensor938;

Transform Transform939 = createNode("Transform");
Transform939.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
Shape Shape940 = createNode("Shape");
Shape940.USE = "HAnimJointShape";
Transform939.children = new MFNode();

Transform939.children[0] = Shape940;

HAnimSegment937.children[1] = Transform939;

//HAnimSegment visualization line from current <HAnimJoint name='l_shoulder'/> to child <HAnimJoint name='l_elbow'/>
Shape Shape941 = createNode("Shape");
LineSet LineSet942 = createNode("LineSet");
LineSet942.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate943 = createNode("Coordinate");
Coordinate943.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
LineSet942.coord = Coordinate943;

ColorRGBA ColorRGBA944 = createNode("ColorRGBA");
ColorRGBA944.USE = "HAnimSegmentLineColorRGBA";
LineSet942.color = ColorRGBA944;

Shape941.geometry = LineSet942;

HAnimSegment937.children[2] = Shape941;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_shoulder'/> to <HAnimSite name='l_humeral_lateral_epicn_pt'/>
Shape Shape945 = createNode("Shape");
LineSet LineSet946 = createNode("LineSet");
LineSet946.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate947 = createNode("Coordinate");
Coordinate947.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.228,1.1482,-0.11]);
LineSet946.coord = Coordinate947;

ColorRGBA ColorRGBA948 = createNode("ColorRGBA");
ColorRGBA948.USE = "HAnimSiteLineColorRGBA";
LineSet946.color = ColorRGBA948;

Shape945.geometry = LineSet946;

HAnimSegment937.children[3] = Shape945;

HAnimSite HAnimSite949 = createNode("HAnimSite");
HAnimSite949.name = "l_humeral_lateral_epicondyle_pt";
HAnimSite949.DEF = "hanim_l_humeral_lateral_epicondyle_pt";
HAnimSite949.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
//HAnimSite visualization shape
TouchSensor TouchSensor950 = createNode("TouchSensor");
TouchSensor950.description = "HAnimSite l_humeral_lateral_epicn_pt";
HAnimSite949.children = new MFNode();

HAnimSite949.children[0] = TouchSensor950;

Shape Shape951 = createNode("Shape");
Shape951.USE = "HAnimSiteShape";
HAnimSite949.children[1] = Shape951;

HAnimSegment937.children[4] = HAnimSite949;

HAnimJoint936.children = new MFNode();

HAnimJoint936.children[0] = HAnimSegment937;

HAnimJoint HAnimJoint952 = createNode("HAnimJoint");
HAnimJoint952.name = "l_elbow";
HAnimJoint952.DEF = "hanim_l_elbow";
HAnimJoint952.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimJoint952.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint952.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment953 = createNode("HAnimSegment");
HAnimSegment953.name = "l_forearm";
HAnimSegment953.DEF = "hanim_l_forearm";
//Visualization sphere for <HAnimJoint name='l_elbow'/> is placed within <HAnimSegment name='l_forearm'/>
TouchSensor TouchSensor954 = createNode("TouchSensor");
TouchSensor954.description = "HAnimJoint l_elbow, HAnimSegment l_forearm";
HAnimSegment953.children = new MFNode();

HAnimSegment953.children[0] = TouchSensor954;

Transform Transform955 = createNode("Transform");
Transform955.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
Shape Shape956 = createNode("Shape");
Shape956.USE = "HAnimJointShape";
Transform955.children = new MFNode();

Transform955.children[0] = Shape956;

HAnimSegment953.children[1] = Transform955;

//HAnimSegment visualization line from current <HAnimJoint name='l_elbow'/> to child <HAnimJoint name='l_radiocarpal'/>
Shape Shape957 = createNode("Shape");
LineSet LineSet958 = createNode("LineSet");
LineSet958.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate959 = createNode("Coordinate");
Coordinate959.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
LineSet958.coord = Coordinate959;

ColorRGBA ColorRGBA960 = createNode("ColorRGBA");
ColorRGBA960.USE = "HAnimSegmentLineColorRGBA";
LineSet958.color = ColorRGBA960;

Shape957.geometry = LineSet958;

HAnimSegment953.children[2] = Shape957;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radial_styloid_pt'/>
Shape Shape961 = createNode("Shape");
LineSet LineSet962 = createNode("LineSet");
LineSet962.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate963 = createNode("Coordinate");
Coordinate963.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1901,0.8645,-0.0415]);
LineSet962.coord = Coordinate963;

ColorRGBA ColorRGBA964 = createNode("ColorRGBA");
ColorRGBA964.USE = "HAnimSiteLineColorRGBA";
LineSet962.color = ColorRGBA964;

Shape961.geometry = LineSet962;

HAnimSegment953.children[3] = Shape961;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_olecranon_pt'/>
Shape Shape965 = createNode("Shape");
LineSet LineSet966 = createNode("LineSet");
LineSet966.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate967 = createNode("Coordinate");
Coordinate967.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1962,1.1375,-0.1123]);
LineSet966.coord = Coordinate967;

ColorRGBA ColorRGBA968 = createNode("ColorRGBA");
ColorRGBA968.USE = "HAnimSiteLineColorRGBA";
LineSet966.color = ColorRGBA968;

Shape965.geometry = LineSet966;

HAnimSegment953.children[4] = Shape965;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_humeral_medial_epicn_pt'/>
Shape Shape969 = createNode("Shape");
LineSet LineSet970 = createNode("LineSet");
LineSet970.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate971 = createNode("Coordinate");
Coordinate971.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1735,1.1272,-0.1113]);
LineSet970.coord = Coordinate971;

ColorRGBA ColorRGBA972 = createNode("ColorRGBA");
ColorRGBA972.USE = "HAnimSiteLineColorRGBA";
LineSet970.color = ColorRGBA972;

Shape969.geometry = LineSet970;

HAnimSegment953.children[5] = Shape969;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radiale_pt'/>
Shape Shape973 = createNode("Shape");
LineSet LineSet974 = createNode("LineSet");
LineSet974.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate975 = createNode("Coordinate");
Coordinate975.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.2182,1.1212,-0.1167]);
LineSet974.coord = Coordinate975;

ColorRGBA ColorRGBA976 = createNode("ColorRGBA");
ColorRGBA976.USE = "HAnimSiteLineColorRGBA";
LineSet974.color = ColorRGBA976;

Shape973.geometry = LineSet974;

HAnimSegment953.children[6] = Shape973;

HAnimSite HAnimSite977 = createNode("HAnimSite");
HAnimSite977.name = "l_radial_styloid_pt";
HAnimSite977.DEF = "hanim_l_radial_styloid_pt";
HAnimSite977.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
//HAnimSite visualization shape
TouchSensor TouchSensor978 = createNode("TouchSensor");
TouchSensor978.description = "HAnimSite l_radial_styloid_pt";
HAnimSite977.children = new MFNode();

HAnimSite977.children[0] = TouchSensor978;

Shape Shape979 = createNode("Shape");
Shape979.USE = "HAnimSiteShape";
HAnimSite977.children[1] = Shape979;

HAnimSegment953.children[7] = HAnimSite977;

HAnimSite HAnimSite980 = createNode("HAnimSite");
HAnimSite980.name = "l_olecranon_pt";
HAnimSite980.DEF = "hanim_l_olecranon_pt";
HAnimSite980.translation = new SFVec3f(new float[0.1962,1.1375,-0.1123]);
//HAnimSite visualization shape
TouchSensor TouchSensor981 = createNode("TouchSensor");
TouchSensor981.description = "HAnimSite l_olecranon_pt";
HAnimSite980.children = new MFNode();

HAnimSite980.children[0] = TouchSensor981;

Shape Shape982 = createNode("Shape");
Shape982.USE = "HAnimSiteShape";
HAnimSite980.children[1] = Shape982;

HAnimSegment953.children[8] = HAnimSite980;

HAnimSite HAnimSite983 = createNode("HAnimSite");
HAnimSite983.name = "l_humeral_medial_epicondyle_pt";
HAnimSite983.DEF = "hanim_l_humeral_medial_epicondyle_pt";
HAnimSite983.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
//HAnimSite visualization shape
TouchSensor TouchSensor984 = createNode("TouchSensor");
TouchSensor984.description = "HAnimSite l_humeral_medial_epicn_pt";
HAnimSite983.children = new MFNode();

HAnimSite983.children[0] = TouchSensor984;

Shape Shape985 = createNode("Shape");
Shape985.USE = "HAnimSiteShape";
HAnimSite983.children[1] = Shape985;

HAnimSegment953.children[9] = HAnimSite983;

HAnimSite HAnimSite986 = createNode("HAnimSite");
HAnimSite986.name = "l_radiale_pt";
HAnimSite986.DEF = "hanim_l_radiale_pt";
HAnimSite986.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
//HAnimSite visualization shape
TouchSensor TouchSensor987 = createNode("TouchSensor");
TouchSensor987.description = "HAnimSite l_radiale_pt";
HAnimSite986.children = new MFNode();

HAnimSite986.children[0] = TouchSensor987;

Shape Shape988 = createNode("Shape");
Shape988.USE = "HAnimSiteShape";
HAnimSite986.children[1] = Shape988;

HAnimSegment953.children[10] = HAnimSite986;

HAnimJoint952.children = new MFNode();

HAnimJoint952.children[0] = HAnimSegment953;

HAnimJoint HAnimJoint989 = createNode("HAnimJoint");
HAnimJoint989.name = "l_radiocarpal";
HAnimJoint989.DEF = "hanim_l_radiocarpal";
HAnimJoint989.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimJoint989.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint989.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment990 = createNode("HAnimSegment");
HAnimSegment990.name = "l_carpal";
HAnimSegment990.DEF = "hanim_l_carpal";
//Visualization sphere for <HAnimJoint name='l_radiocarpal'/> is placed within <HAnimSegment name='l_carpal'/>
TouchSensor TouchSensor991 = createNode("TouchSensor");
TouchSensor991.description = "HAnimJoint l_radiocarpal, HAnimSegment l_carpal";
HAnimSegment990.children = new MFNode();

HAnimSegment990.children[0] = TouchSensor991;

Transform Transform992 = createNode("Transform");
Transform992.translation = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
Shape Shape993 = createNode("Shape");
Shape993.USE = "HAnimJointShape";
Transform992.children = new MFNode();

Transform992.children[0] = Shape993;

HAnimSegment990.children[1] = Transform992;

//HAnimSegment visualization line from current <HAnimJoint name='l_radiocarpal'/> to child <HAnimJoint name='l_thumb1'/>
Shape Shape994 = createNode("Shape");
LineSet LineSet995 = createNode("LineSet");
LineSet995.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate996 = createNode("Coordinate");
Coordinate996.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534]);
LineSet995.coord = Coordinate996;

ColorRGBA ColorRGBA997 = createNode("ColorRGBA");
ColorRGBA997.USE = "HAnimSegmentLineColorRGBA";
LineSet995.color = ColorRGBA997;

Shape994.geometry = LineSet995;

HAnimSegment990.children[2] = Shape994;

//HAnimSegment visualization line from current <HAnimJoint name='l_radiocarpal'/> to child <HAnimJoint name='l_index0'/>
Shape Shape998 = createNode("Shape");
LineSet LineSet999 = createNode("LineSet");
LineSet999.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1000 = createNode("Coordinate");
Coordinate1000.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028]);
LineSet999.coord = Coordinate1000;

ColorRGBA ColorRGBA1001 = createNode("ColorRGBA");
ColorRGBA1001.USE = "HAnimSegmentLineColorRGBA";
LineSet999.color = ColorRGBA1001;

Shape998.geometry = LineSet999;

HAnimSegment990.children[3] = Shape998;

//HAnimSegment visualization line from current <HAnimJoint name='l_radiocarpal'/> to child <HAnimJoint name='l_middle0'/>
Shape Shape1002 = createNode("Shape");
LineSet LineSet1003 = createNode("LineSet");
LineSet1003.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1004 = createNode("Coordinate");
Coordinate1004.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053]);
LineSet1003.coord = Coordinate1004;

ColorRGBA ColorRGBA1005 = createNode("ColorRGBA");
ColorRGBA1005.USE = "HAnimSegmentLineColorRGBA";
LineSet1003.color = ColorRGBA1005;

Shape1002.geometry = LineSet1003;

HAnimSegment990.children[4] = Shape1002;

//HAnimSegment visualization line from current <HAnimJoint name='l_radiocarpal'/> to child <HAnimJoint name='l_ring0'/>
Shape Shape1006 = createNode("Shape");
LineSet LineSet1007 = createNode("LineSet");
LineSet1007.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1008 = createNode("Coordinate");
Coordinate1008.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794]);
LineSet1007.coord = Coordinate1008;

ColorRGBA ColorRGBA1009 = createNode("ColorRGBA");
ColorRGBA1009.USE = "HAnimSegmentLineColorRGBA";
LineSet1007.color = ColorRGBA1009;

Shape1006.geometry = LineSet1007;

HAnimSegment990.children[5] = Shape1006;

//HAnimSegment visualization line from current <HAnimJoint name='l_radiocarpal'/> to child <HAnimJoint name='l_pinky0'/>
Shape Shape1010 = createNode("Shape");
LineSet LineSet1011 = createNode("LineSet");
LineSet1011.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1012 = createNode("Coordinate");
Coordinate1012.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036]);
LineSet1011.coord = Coordinate1012;

ColorRGBA ColorRGBA1013 = createNode("ColorRGBA");
ColorRGBA1013.USE = "HAnimSegmentLineColorRGBA";
LineSet1011.color = ColorRGBA1013;

Shape1010.geometry = LineSet1011;

HAnimSegment990.children[6] = Shape1010;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_radiocarpal'/> to <HAnimSite name='l_metacarpal_pha2_pt'/>
Shape Shape1014 = createNode("Shape");
LineSet LineSet1015 = createNode("LineSet");
LineSet1015.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1016 = createNode("Coordinate");
Coordinate1016.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.2009,0.8139,-0.0237]);
LineSet1015.coord = Coordinate1016;

ColorRGBA ColorRGBA1017 = createNode("ColorRGBA");
ColorRGBA1017.USE = "HAnimSiteLineColorRGBA";
LineSet1015.color = ColorRGBA1017;

Shape1014.geometry = LineSet1015;

HAnimSegment990.children[7] = Shape1014;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_radiocarpal'/> to <HAnimSite name='l_ulnar_styloid_pt'/>
Shape Shape1018 = createNode("Shape");
LineSet LineSet1019 = createNode("LineSet");
LineSet1019.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1020 = createNode("Coordinate");
Coordinate1020.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.2142,0.8529,-0.0648]);
LineSet1019.coord = Coordinate1020;

ColorRGBA ColorRGBA1021 = createNode("ColorRGBA");
ColorRGBA1021.USE = "HAnimSiteLineColorRGBA";
LineSet1019.color = ColorRGBA1021;

Shape1018.geometry = LineSet1019;

HAnimSegment990.children[8] = Shape1018;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_radiocarpal'/> to <HAnimSite name='l_metacarpal_pha5_pt'/>
Shape Shape1022 = createNode("Shape");
LineSet LineSet1023 = createNode("LineSet");
LineSet1023.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1024 = createNode("Coordinate");
Coordinate1024.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1929,0.786,-0.1122]);
LineSet1023.coord = Coordinate1024;

ColorRGBA ColorRGBA1025 = createNode("ColorRGBA");
ColorRGBA1025.USE = "HAnimSiteLineColorRGBA";
LineSet1023.color = ColorRGBA1025;

Shape1022.geometry = LineSet1023;

HAnimSegment990.children[9] = Shape1022;

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_radiocarpal'/> to <HAnimSite name='l_hand_front_view'/>
Shape Shape1026 = createNode("Shape");
LineSet LineSet1027 = createNode("LineSet");
LineSet1027.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1028 = createNode("Coordinate");
Coordinate1028.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.3,0.75,0.45]);
LineSet1027.coord = Coordinate1028;

ColorRGBA ColorRGBA1029 = createNode("ColorRGBA");
ColorRGBA1029.USE = "HAnimSiteViewpointLineColorRGBA";
LineSet1027.color = ColorRGBA1029;

Shape1026.geometry = LineSet1027;

HAnimSegment990.children[10] = Shape1026;

HAnimSite HAnimSite1030 = createNode("HAnimSite");
HAnimSite1030.name = "l_metacarpal_phalanx_2_pt";
HAnimSite1030.DEF = "hanim_l_metacarpal_phalanx_2_pt";
HAnimSite1030.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
//HAnimSite visualization shape
TouchSensor TouchSensor1031 = createNode("TouchSensor");
TouchSensor1031.description = "HAnimSite l_metacarpal_pha2_pt";
HAnimSite1030.children = new MFNode();

HAnimSite1030.children[0] = TouchSensor1031;

Shape Shape1032 = createNode("Shape");
Shape1032.USE = "HAnimSiteShape";
HAnimSite1030.children[1] = Shape1032;

HAnimSegment990.children[11] = HAnimSite1030;

HAnimSite HAnimSite1033 = createNode("HAnimSite");
HAnimSite1033.name = "l_ulnar_styloid_pt";
HAnimSite1033.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite1033.translation = new SFVec3f(new float[0.2142,0.8529,-0.0648]);
//HAnimSite visualization shape
TouchSensor TouchSensor1034 = createNode("TouchSensor");
TouchSensor1034.description = "HAnimSite l_ulnar_styloid_pt";
HAnimSite1033.children = new MFNode();

HAnimSite1033.children[0] = TouchSensor1034;

Shape Shape1035 = createNode("Shape");
Shape1035.USE = "HAnimSiteShape";
HAnimSite1033.children[1] = Shape1035;

HAnimSegment990.children[12] = HAnimSite1033;

HAnimSite HAnimSite1036 = createNode("HAnimSite");
HAnimSite1036.name = "l_metacarpal_phalanx_5_pt";
HAnimSite1036.DEF = "hanim_l_metacarpal_phalanx_5_pt";
HAnimSite1036.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
//HAnimSite visualization shape
TouchSensor TouchSensor1037 = createNode("TouchSensor");
TouchSensor1037.description = "HAnimSite l_metacarpal_pha5_pt";
HAnimSite1036.children = new MFNode();

HAnimSite1036.children[0] = TouchSensor1037;

Shape Shape1038 = createNode("Shape");
Shape1038.USE = "HAnimSiteShape";
HAnimSite1036.children[1] = Shape1038;

HAnimSegment990.children[13] = HAnimSite1036;

HAnimSite HAnimSite1039 = createNode("HAnimSite");
HAnimSite1039.name = "l_hand_front_view";
HAnimSite1039.DEF = "hanim_l_hand_front_view";
HAnimSite1039.translation = new SFVec3f(new float[0.3,0.75,0.45]);
//HAnimSite visualization shape
TouchSensor TouchSensor1040 = createNode("TouchSensor");
TouchSensor1040.description = "HAnimSite l_hand_front_view";
HAnimSite1039.children = new MFNode();

HAnimSite1039.children[0] = TouchSensor1040;

Shape Shape1041 = createNode("Shape");
Shape1041.USE = "HAnimSiteShape";
HAnimSite1039.children[1] = Shape1041;

Viewpoint Viewpoint1042 = createNode("Viewpoint");
Viewpoint1042.DEF = "hanim_l_hand_front_viewpoint";
Viewpoint1042.centerOfRotation = new SFVec3f(new float[0,0.7,0]);
Viewpoint1042.description = "left hand front";
Viewpoint1042.position = new SFVec3f(new float[0,0,0]);
HAnimSite1039.children[2] = Viewpoint1042;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1043 = createNode("Anchor");
Anchor1043.description = "HAnimSite hanim_l_hand_front_view Viewpoint";
Anchor1043.url = new MFString(new java.lang.String["#hanim_l_hand_front_viewpoint"]);
LOD LOD1044 = createNode("LOD");
LOD1044.forceTransitions = True;
LOD1044.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1045 = createNode("WorldInfo");
WorldInfo1045.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1044.children = new MFNode();

LOD1044.children[0] = WorldInfo1045;

Shape Shape1046 = createNode("Shape");
Shape1046.USE = "HAnimSiteViewpointShape";
LOD1044.children[1] = Shape1046;

Anchor1043.children = new MFNode();

Anchor1043.children[0] = LOD1044;

HAnimSite1039.children[3] = Anchor1043;

HAnimSegment990.children[14] = HAnimSite1039;

HAnimJoint989.children = new MFNode();

HAnimJoint989.children[0] = HAnimSegment990;

HAnimJoint HAnimJoint1047 = createNode("HAnimJoint");
HAnimJoint1047.name = "l_carpometacarpal_1";
HAnimJoint1047.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint1047.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimJoint1047.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1047.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1048 = createNode("HAnimSegment");
HAnimSegment1048.name = "l_metacarpal_1";
HAnimSegment1048.DEF = "hanim_l_metacarpal_1";
//Visualization sphere for <HAnimJoint name='l_thumb1'/> is placed within <HAnimSegment name='l_metacarpal_1'/>
TouchSensor TouchSensor1049 = createNode("TouchSensor");
TouchSensor1049.description = "HAnimJoint l_thumb1, HAnimSegment l_metacarpal_1";
HAnimSegment1048.children = new MFNode();

HAnimSegment1048.children[0] = TouchSensor1049;

Transform Transform1050 = createNode("Transform");
Transform1050.translation = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
Shape Shape1051 = createNode("Shape");
Shape1051.USE = "HAnimJointShape";
Transform1050.children = new MFNode();

Transform1050.children[0] = Shape1051;

HAnimSegment1048.children[1] = Transform1050;

//HAnimSegment visualization line from current <HAnimJoint name='l_thumb1'/> to child <HAnimJoint name='l_thumb2'/>
Shape Shape1052 = createNode("Shape");
LineSet LineSet1053 = createNode("LineSet");
LineSet1053.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1054 = createNode("Coordinate");
Coordinate1054.point = new MFVec3f(new float[0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
LineSet1053.coord = Coordinate1054;

ColorRGBA ColorRGBA1055 = createNode("ColorRGBA");
ColorRGBA1055.USE = "HAnimSegmentLineColorRGBA";
LineSet1053.color = ColorRGBA1055;

Shape1052.geometry = LineSet1053;

HAnimSegment1048.children[2] = Shape1052;

HAnimJoint1047.children = new MFNode();

HAnimJoint1047.children[0] = HAnimSegment1048;

HAnimJoint HAnimJoint1056 = createNode("HAnimJoint");
HAnimJoint1056.name = "l_metacarpophalangeal_1";
HAnimJoint1056.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint1056.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimJoint1056.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1056.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1057 = createNode("HAnimSegment");
HAnimSegment1057.name = "l_carpal_proximal_phalanx_1";
HAnimSegment1057.DEF = "hanim_l_carpal_proximal_phalanx_1";
//Visualization sphere for <HAnimJoint name='l_thumb2'/> is placed within <HAnimSegment name='l_carpal_proximal_phalanx_1'/>
TouchSensor TouchSensor1058 = createNode("TouchSensor");
TouchSensor1058.description = "HAnimJoint l_thumb2, HAnimSegment l_carpal_proximal_phalanx_1";
HAnimSegment1057.children = new MFNode();

HAnimSegment1057.children[0] = TouchSensor1058;

Transform Transform1059 = createNode("Transform");
Transform1059.translation = new SFVec3f(new float[0.1951,0.8226,0.0246]);
Shape Shape1060 = createNode("Shape");
Shape1060.USE = "HAnimJointShape";
Transform1059.children = new MFNode();

Transform1059.children[0] = Shape1060;

HAnimSegment1057.children[1] = Transform1059;

//HAnimSegment visualization line from current <HAnimJoint name='l_thumb2'/> to child <HAnimJoint name='l_thumb3'/>
Shape Shape1061 = createNode("Shape");
LineSet LineSet1062 = createNode("LineSet");
LineSet1062.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1063 = createNode("Coordinate");
Coordinate1063.point = new MFVec3f(new float[0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
LineSet1062.coord = Coordinate1063;

ColorRGBA ColorRGBA1064 = createNode("ColorRGBA");
ColorRGBA1064.USE = "HAnimSegmentLineColorRGBA";
LineSet1062.color = ColorRGBA1064;

Shape1061.geometry = LineSet1062;

HAnimSegment1057.children[2] = Shape1061;

HAnimJoint1056.children = new MFNode();

HAnimJoint1056.children[0] = HAnimSegment1057;

HAnimJoint HAnimJoint1065 = createNode("HAnimJoint");
HAnimJoint1065.name = "l_carpal_interphalangeal_1";
HAnimJoint1065.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint1065.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint1065.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1065.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1066 = createNode("HAnimSegment");
HAnimSegment1066.name = "l_carpal_distal_phalanx_1";
HAnimSegment1066.DEF = "hanim_l_carpal_distal_phalanx_1";
//Visualization sphere for <HAnimJoint name='l_thumb3'/> is placed within <HAnimSegment name='l_carpal_distal_phalanx_1'/>
TouchSensor TouchSensor1067 = createNode("TouchSensor");
TouchSensor1067.description = "HAnimJoint l_thumb3, HAnimSegment l_carpal_distal_phalanx_1";
HAnimSegment1066.children = new MFNode();

HAnimSegment1066.children[0] = TouchSensor1067;

Transform Transform1068 = createNode("Transform");
Transform1068.translation = new SFVec3f(new float[0.1955,0.8159,0.0464]);
Shape Shape1069 = createNode("Shape");
Shape1069.USE = "HAnimJointShape";
Transform1068.children = new MFNode();

Transform1068.children[0] = Shape1069;

HAnimSegment1066.children[1] = Transform1068;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_thumb3'/> to <HAnimSite name='l_thumb_distal_tip'/>
Shape Shape1070 = createNode("Shape");
LineSet LineSet1071 = createNode("LineSet");
LineSet1071.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1072 = createNode("Coordinate");
Coordinate1072.point = new MFVec3f(new float[0.1955,0.8159,0.0464,0.1982,0.8061,0.0759]);
LineSet1071.coord = Coordinate1072;

ColorRGBA ColorRGBA1073 = createNode("ColorRGBA");
ColorRGBA1073.USE = "HAnimSiteLineColorRGBA";
LineSet1071.color = ColorRGBA1073;

Shape1070.geometry = LineSet1071;

HAnimSegment1066.children[2] = Shape1070;

HAnimSite HAnimSite1074 = createNode("HAnimSite");
HAnimSite1074.name = "l_carpal_distal_phalanx_1_pt";
HAnimSite1074.DEF = "hanim_l_carpal_distal_phalanx_1_pt";
HAnimSite1074.translation = new SFVec3f(new float[0.1982,0.8061,0.0759]);
//HAnimSite visualization shape
TouchSensor TouchSensor1075 = createNode("TouchSensor");
TouchSensor1075.description = "HAnimSite l_thumb_distal_tip";
HAnimSite1074.children = new MFNode();

HAnimSite1074.children[0] = TouchSensor1075;

Shape Shape1076 = createNode("Shape");
Shape1076.USE = "HAnimSiteShape";
HAnimSite1074.children[1] = Shape1076;

HAnimSegment1066.children[3] = HAnimSite1074;

HAnimJoint1065.children = new MFNode();

HAnimJoint1065.children[0] = HAnimSegment1066;

HAnimJoint1056.children[1] = HAnimJoint1065;

HAnimJoint1047.children[1] = HAnimJoint1056;

HAnimJoint989.children[1] = HAnimJoint1047;

HAnimJoint HAnimJoint1077 = createNode("HAnimJoint");
HAnimJoint1077.name = "l_carpometacarpal_2";
HAnimJoint1077.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint1077.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimJoint1077.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1077.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1078 = createNode("HAnimSegment");
HAnimSegment1078.name = "l_metacarpal_2";
HAnimSegment1078.DEF = "hanim_l_metacarpal_2";
//Visualization sphere for <HAnimJoint name='l_index0'/> is placed within <HAnimSegment name='l_metacarpal_2'/>
TouchSensor TouchSensor1079 = createNode("TouchSensor");
TouchSensor1079.description = "HAnimJoint l_index0, HAnimSegment l_metacarpal_2";
HAnimSegment1078.children = new MFNode();

HAnimSegment1078.children[0] = TouchSensor1079;

Transform Transform1080 = createNode("Transform");
Transform1080.translation = new SFVec3f(new float[0.1983,0.8024,-0.028]);
Shape Shape1081 = createNode("Shape");
Shape1081.USE = "HAnimJointShape";
Transform1080.children = new MFNode();

Transform1080.children[0] = Shape1081;

HAnimSegment1078.children[1] = Transform1080;

//HAnimSegment visualization line from current <HAnimJoint name='l_index0'/> to child <HAnimJoint name='l_index1'/>
Shape Shape1082 = createNode("Shape");
LineSet LineSet1083 = createNode("LineSet");
LineSet1083.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1084 = createNode("Coordinate");
Coordinate1084.point = new MFVec3f(new float[0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
LineSet1083.coord = Coordinate1084;

ColorRGBA ColorRGBA1085 = createNode("ColorRGBA");
ColorRGBA1085.USE = "HAnimSegmentLineColorRGBA";
LineSet1083.color = ColorRGBA1085;

Shape1082.geometry = LineSet1083;

HAnimSegment1078.children[2] = Shape1082;

HAnimJoint1077.children = new MFNode();

HAnimJoint1077.children[0] = HAnimSegment1078;

HAnimJoint HAnimJoint1086 = createNode("HAnimJoint");
HAnimJoint1086.name = "l_metacarpophalangeal_2";
HAnimJoint1086.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint1086.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint1086.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1086.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1087 = createNode("HAnimSegment");
HAnimSegment1087.name = "l_carpal_proximal_phalanx_2";
HAnimSegment1087.DEF = "hanim_l_carpal_proximal_phalanx_2";
//Visualization sphere for <HAnimJoint name='l_index1'/> is placed within <HAnimSegment name='l_carpal_proximal_phalanx_2'/>
TouchSensor TouchSensor1088 = createNode("TouchSensor");
TouchSensor1088.description = "HAnimJoint l_index1, HAnimSegment l_carpal_proximal_phalanx_2";
HAnimSegment1087.children = new MFNode();

HAnimSegment1087.children[0] = TouchSensor1088;

Transform Transform1089 = createNode("Transform");
Transform1089.translation = new SFVec3f(new float[0.1983,0.7815,-0.028]);
Shape Shape1090 = createNode("Shape");
Shape1090.USE = "HAnimJointShape";
Transform1089.children = new MFNode();

Transform1089.children[0] = Shape1090;

HAnimSegment1087.children[1] = Transform1089;

//HAnimSegment visualization line from current <HAnimJoint name='l_index1'/> to child <HAnimJoint name='l_index2'/>
Shape Shape1091 = createNode("Shape");
LineSet LineSet1092 = createNode("LineSet");
LineSet1092.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1093 = createNode("Coordinate");
Coordinate1093.point = new MFVec3f(new float[0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
LineSet1092.coord = Coordinate1093;

ColorRGBA ColorRGBA1094 = createNode("ColorRGBA");
ColorRGBA1094.USE = "HAnimSegmentLineColorRGBA";
LineSet1092.color = ColorRGBA1094;

Shape1091.geometry = LineSet1092;

HAnimSegment1087.children[2] = Shape1091;

HAnimJoint1086.children = new MFNode();

HAnimJoint1086.children[0] = HAnimSegment1087;

HAnimJoint HAnimJoint1095 = createNode("HAnimJoint");
HAnimJoint1095.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint1095.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint1095.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint1095.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1095.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1096 = createNode("HAnimSegment");
HAnimSegment1096.name = "l_carpal_middle_phalanx_2";
HAnimSegment1096.DEF = "hanim_l_carpal_middle_phalanx_2";
//Visualization sphere for <HAnimJoint name='l_index2'/> is placed within <HAnimSegment name='l_carpal_middle_phalanx_2'/>
TouchSensor TouchSensor1097 = createNode("TouchSensor");
TouchSensor1097.description = "HAnimJoint l_index2, HAnimSegment l_carpal_middle_phalanx_2";
HAnimSegment1096.children = new MFNode();

HAnimSegment1096.children[0] = TouchSensor1097;

Transform Transform1098 = createNode("Transform");
Transform1098.translation = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
Shape Shape1099 = createNode("Shape");
Shape1099.USE = "HAnimJointShape";
Transform1098.children = new MFNode();

Transform1098.children[0] = Shape1099;

HAnimSegment1096.children[1] = Transform1098;

//HAnimSegment visualization line from current <HAnimJoint name='l_index2'/> to child <HAnimJoint name='l_index3'/>
Shape Shape1100 = createNode("Shape");
LineSet LineSet1101 = createNode("LineSet");
LineSet1101.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1102 = createNode("Coordinate");
Coordinate1102.point = new MFVec3f(new float[0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
LineSet1101.coord = Coordinate1102;

ColorRGBA ColorRGBA1103 = createNode("ColorRGBA");
ColorRGBA1103.USE = "HAnimSegmentLineColorRGBA";
LineSet1101.color = ColorRGBA1103;

Shape1100.geometry = LineSet1101;

HAnimSegment1096.children[2] = Shape1100;

HAnimJoint1095.children = new MFNode();

HAnimJoint1095.children[0] = HAnimSegment1096;

HAnimJoint HAnimJoint1104 = createNode("HAnimJoint");
HAnimJoint1104.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint1104.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint1104.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint1104.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1104.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1105 = createNode("HAnimSegment");
HAnimSegment1105.name = "l_carpal_distal_phalanx_2";
HAnimSegment1105.DEF = "hanim_l_carpal_distal_phalanx_2";
//Visualization sphere for <HAnimJoint name='l_index3'/> is placed within <HAnimSegment name='l_carpal_distal_phalanx_2'/>
TouchSensor TouchSensor1106 = createNode("TouchSensor");
TouchSensor1106.description = "HAnimJoint l_index3, HAnimSegment l_carpal_distal_phalanx_2";
HAnimSegment1105.children = new MFNode();

HAnimSegment1105.children[0] = TouchSensor1106;

Transform Transform1107 = createNode("Transform");
Transform1107.translation = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
Shape Shape1108 = createNode("Shape");
Shape1108.USE = "HAnimJointShape";
Transform1107.children = new MFNode();

Transform1107.children[0] = Shape1108;

HAnimSegment1105.children[1] = Transform1107;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_index_distal_tip'/>
Shape Shape1109 = createNode("Shape");
LineSet LineSet1110 = createNode("LineSet");
LineSet1110.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1111 = createNode("Coordinate");
Coordinate1111.point = new MFVec3f(new float[0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245]);
LineSet1110.coord = Coordinate1111;

ColorRGBA ColorRGBA1112 = createNode("ColorRGBA");
ColorRGBA1112.USE = "HAnimSiteLineColorRGBA";
LineSet1110.color = ColorRGBA1112;

Shape1109.geometry = LineSet1110;

HAnimSegment1105.children[2] = Shape1109;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_dactylion_pt'/>
Shape Shape1113 = createNode("Shape");
LineSet LineSet1114 = createNode("LineSet");
LineSet1114.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1115 = createNode("Coordinate");
Coordinate1115.point = new MFVec3f(new float[0.2028,0.7139,-0.0236,0.2056,0.6743,-0.0482]);
LineSet1114.coord = Coordinate1115;

ColorRGBA ColorRGBA1116 = createNode("ColorRGBA");
ColorRGBA1116.USE = "HAnimSiteLineColorRGBA";
LineSet1114.color = ColorRGBA1116;

Shape1113.geometry = LineSet1114;

HAnimSegment1105.children[3] = Shape1113;

HAnimSite HAnimSite1117 = createNode("HAnimSite");
HAnimSite1117.name = "l_carpal_distal_phalanx_2_pt";
HAnimSite1117.DEF = "hanim_l_carpal_distal_phalanx_2_pt";
HAnimSite1117.translation = new SFVec3f(new float[0.2089,0.6858,-0.0245]);
//HAnimSite visualization shape
TouchSensor TouchSensor1118 = createNode("TouchSensor");
TouchSensor1118.description = "HAnimSite l_index_distal_tip";
HAnimSite1117.children = new MFNode();

HAnimSite1117.children[0] = TouchSensor1118;

Shape Shape1119 = createNode("Shape");
Shape1119.USE = "HAnimSiteShape";
HAnimSite1117.children[1] = Shape1119;

HAnimSegment1105.children[4] = HAnimSite1117;

HAnimSite HAnimSite1120 = createNode("HAnimSite");
HAnimSite1120.name = "l_dactylion_pt";
HAnimSite1120.DEF = "hanim_l_dactylion_pt";
HAnimSite1120.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
//HAnimSite visualization shape
TouchSensor TouchSensor1121 = createNode("TouchSensor");
TouchSensor1121.description = "HAnimSite l_dactylion_pt";
HAnimSite1120.children = new MFNode();

HAnimSite1120.children[0] = TouchSensor1121;

Shape Shape1122 = createNode("Shape");
Shape1122.USE = "HAnimSiteShape";
HAnimSite1120.children[1] = Shape1122;

HAnimSegment1105.children[5] = HAnimSite1120;

HAnimJoint1104.children = new MFNode();

HAnimJoint1104.children[0] = HAnimSegment1105;

HAnimJoint1095.children[1] = HAnimJoint1104;

HAnimJoint1086.children[1] = HAnimJoint1095;

HAnimJoint1077.children[1] = HAnimJoint1086;

HAnimJoint989.children[2] = HAnimJoint1077;

HAnimJoint HAnimJoint1123 = createNode("HAnimJoint");
HAnimJoint1123.name = "l_carpometacarpal_3";
HAnimJoint1123.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint1123.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimJoint1123.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1123.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1124 = createNode("HAnimSegment");
HAnimSegment1124.name = "l_metacarpal_3";
HAnimSegment1124.DEF = "hanim_l_metacarpal_3";
//Visualization sphere for <HAnimJoint name='l_middle0'/> is placed within <HAnimSegment name='l_metacarpal_3'/>
TouchSensor TouchSensor1125 = createNode("TouchSensor");
TouchSensor1125.description = "HAnimJoint l_middle0, HAnimSegment l_metacarpal_3";
HAnimSegment1124.children = new MFNode();

HAnimSegment1124.children[0] = TouchSensor1125;

Transform Transform1126 = createNode("Transform");
Transform1126.translation = new SFVec3f(new float[0.1987,0.8029,-0.053]);
Shape Shape1127 = createNode("Shape");
Shape1127.USE = "HAnimJointShape";
Transform1126.children = new MFNode();

Transform1126.children[0] = Shape1127;

HAnimSegment1124.children[1] = Transform1126;

//HAnimSegment visualization line from current <HAnimJoint name='l_middle0'/> to child <HAnimJoint name='l_middle1'/>
Shape Shape1128 = createNode("Shape");
LineSet LineSet1129 = createNode("LineSet");
LineSet1129.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1130 = createNode("Coordinate");
Coordinate1130.point = new MFVec3f(new float[0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
LineSet1129.coord = Coordinate1130;

ColorRGBA ColorRGBA1131 = createNode("ColorRGBA");
ColorRGBA1131.USE = "HAnimSegmentLineColorRGBA";
LineSet1129.color = ColorRGBA1131;

Shape1128.geometry = LineSet1129;

HAnimSegment1124.children[2] = Shape1128;

HAnimJoint1123.children = new MFNode();

HAnimJoint1123.children[0] = HAnimSegment1124;

HAnimJoint HAnimJoint1132 = createNode("HAnimJoint");
HAnimJoint1132.name = "l_metacarpophalangeal_3";
HAnimJoint1132.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint1132.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimJoint1132.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1132.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1133 = createNode("HAnimSegment");
HAnimSegment1133.name = "l_carpal_proximal_phalanx_3";
HAnimSegment1133.DEF = "hanim_l_carpal_proximal_phalanx_3";
//Visualization sphere for <HAnimJoint name='l_middle1'/> is placed within <HAnimSegment name='l_carpal_proximal_phalanx_3'/>
TouchSensor TouchSensor1134 = createNode("TouchSensor");
TouchSensor1134.description = "HAnimJoint l_middle1, HAnimSegment l_carpal_proximal_phalanx_3";
HAnimSegment1133.children = new MFNode();

HAnimSegment1133.children[0] = TouchSensor1134;

Transform Transform1135 = createNode("Transform");
Transform1135.translation = new SFVec3f(new float[0.1987,0.7818,-0.053]);
Shape Shape1136 = createNode("Shape");
Shape1136.USE = "HAnimJointShape";
Transform1135.children = new MFNode();

Transform1135.children[0] = Shape1136;

HAnimSegment1133.children[1] = Transform1135;

//HAnimSegment visualization line from current <HAnimJoint name='l_middle1'/> to child <HAnimJoint name='l_middle2'/>
Shape Shape1137 = createNode("Shape");
LineSet LineSet1138 = createNode("LineSet");
LineSet1138.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1139 = createNode("Coordinate");
Coordinate1139.point = new MFVec3f(new float[0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
LineSet1138.coord = Coordinate1139;

ColorRGBA ColorRGBA1140 = createNode("ColorRGBA");
ColorRGBA1140.USE = "HAnimSegmentLineColorRGBA";
LineSet1138.color = ColorRGBA1140;

Shape1137.geometry = LineSet1138;

HAnimSegment1133.children[2] = Shape1137;

HAnimJoint1132.children = new MFNode();

HAnimJoint1132.children[0] = HAnimSegment1133;

HAnimJoint HAnimJoint1141 = createNode("HAnimJoint");
HAnimJoint1141.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint1141.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint1141.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimJoint1141.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1141.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1142 = createNode("HAnimSegment");
HAnimSegment1142.name = "l_carpal_middle_phalanx_3";
HAnimSegment1142.DEF = "hanim_l_carpal_middle_phalanx_3";
//Visualization sphere for <HAnimJoint name='l_middle2'/> is placed within <HAnimSegment name='l_carpal_middle_phalanx_3'/>
TouchSensor TouchSensor1143 = createNode("TouchSensor");
TouchSensor1143.description = "HAnimJoint l_middle2, HAnimSegment l_carpal_middle_phalanx_3";
HAnimSegment1142.children = new MFNode();

HAnimSegment1142.children[0] = TouchSensor1143;

Transform Transform1144 = createNode("Transform");
Transform1144.translation = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
Shape Shape1145 = createNode("Shape");
Shape1145.USE = "HAnimJointShape";
Transform1144.children = new MFNode();

Transform1144.children[0] = Shape1145;

HAnimSegment1142.children[1] = Transform1144;

//HAnimSegment visualization line from current <HAnimJoint name='l_middle2'/> to child <HAnimJoint name='l_middle3'/>
Shape Shape1146 = createNode("Shape");
LineSet LineSet1147 = createNode("LineSet");
LineSet1147.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1148 = createNode("Coordinate");
Coordinate1148.point = new MFVec3f(new float[0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
LineSet1147.coord = Coordinate1148;

ColorRGBA ColorRGBA1149 = createNode("ColorRGBA");
ColorRGBA1149.USE = "HAnimSegmentLineColorRGBA";
LineSet1147.color = ColorRGBA1149;

Shape1146.geometry = LineSet1147;

HAnimSegment1142.children[2] = Shape1146;

HAnimJoint1141.children = new MFNode();

HAnimJoint1141.children[0] = HAnimSegment1142;

HAnimJoint HAnimJoint1150 = createNode("HAnimJoint");
HAnimJoint1150.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint1150.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint1150.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint1150.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1150.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1151 = createNode("HAnimSegment");
HAnimSegment1151.name = "l_carpal_distal_phalanx_3";
HAnimSegment1151.DEF = "hanim_l_carpal_distal_phalanx_3";
//Visualization sphere for <HAnimJoint name='l_middle3'/> is placed within <HAnimSegment name='l_carpal_distal_phalanx_3'/>
TouchSensor TouchSensor1152 = createNode("TouchSensor");
TouchSensor1152.description = "HAnimJoint l_middle3, HAnimSegment l_carpal_distal_phalanx_3";
HAnimSegment1151.children = new MFNode();

HAnimSegment1151.children[0] = TouchSensor1152;

Transform Transform1153 = createNode("Transform");
Transform1153.translation = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
Shape Shape1154 = createNode("Shape");
Shape1154.USE = "HAnimJointShape";
Transform1153.children = new MFNode();

Transform1153.children[0] = Shape1154;

HAnimSegment1151.children[1] = Transform1153;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_middle3'/> to <HAnimSite name='l_middle_distal_tip'/>
Shape Shape1155 = createNode("Shape");
LineSet LineSet1156 = createNode("LineSet");
LineSet1156.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1157 = createNode("Coordinate");
Coordinate1157.point = new MFVec3f(new float[0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491]);
LineSet1156.coord = Coordinate1157;

ColorRGBA ColorRGBA1158 = createNode("ColorRGBA");
ColorRGBA1158.USE = "HAnimSiteLineColorRGBA";
LineSet1156.color = ColorRGBA1158;

Shape1155.geometry = LineSet1156;

HAnimSegment1151.children[2] = Shape1155;

HAnimSite HAnimSite1159 = createNode("HAnimSite");
HAnimSite1159.name = "l_carpal_distal_phalanx_3_pt";
HAnimSite1159.DEF = "hanim_l_carpal_distal_phalanx_3_pt";
HAnimSite1159.translation = new SFVec3f(new float[0.208,0.6731,-0.0491]);
//HAnimSite visualization shape
TouchSensor TouchSensor1160 = createNode("TouchSensor");
TouchSensor1160.description = "HAnimSite l_middle_distal_tip";
HAnimSite1159.children = new MFNode();

HAnimSite1159.children[0] = TouchSensor1160;

Shape Shape1161 = createNode("Shape");
Shape1161.USE = "HAnimSiteShape";
HAnimSite1159.children[1] = Shape1161;

HAnimSegment1151.children[3] = HAnimSite1159;

HAnimJoint1150.children = new MFNode();

HAnimJoint1150.children[0] = HAnimSegment1151;

HAnimJoint1141.children[1] = HAnimJoint1150;

HAnimJoint1132.children[1] = HAnimJoint1141;

HAnimJoint1123.children[1] = HAnimJoint1132;

HAnimJoint989.children[3] = HAnimJoint1123;

HAnimJoint HAnimJoint1162 = createNode("HAnimJoint");
HAnimJoint1162.name = "l_carpometacarpal_4";
HAnimJoint1162.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint1162.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimJoint1162.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1162.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1163 = createNode("HAnimSegment");
HAnimSegment1163.name = "l_metacarpal_4";
HAnimSegment1163.DEF = "hanim_l_metacarpal_4";
//Visualization sphere for <HAnimJoint name='l_ring0'/> is placed within <HAnimSegment name='l_metacarpal_4'/>
TouchSensor TouchSensor1164 = createNode("TouchSensor");
TouchSensor1164.description = "HAnimJoint l_ring0, HAnimSegment l_metacarpal_4";
HAnimSegment1163.children = new MFNode();

HAnimSegment1163.children[0] = TouchSensor1164;

Transform Transform1165 = createNode("Transform");
Transform1165.translation = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
Shape Shape1166 = createNode("Shape");
Shape1166.USE = "HAnimJointShape";
Transform1165.children = new MFNode();

Transform1165.children[0] = Shape1166;

HAnimSegment1163.children[1] = Transform1165;

//HAnimSegment visualization line from current <HAnimJoint name='l_ring0'/> to child <HAnimJoint name='l_ring1'/>
Shape Shape1167 = createNode("Shape");
LineSet LineSet1168 = createNode("LineSet");
LineSet1168.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1169 = createNode("Coordinate");
Coordinate1169.point = new MFVec3f(new float[0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
LineSet1168.coord = Coordinate1169;

ColorRGBA ColorRGBA1170 = createNode("ColorRGBA");
ColorRGBA1170.USE = "HAnimSegmentLineColorRGBA";
LineSet1168.color = ColorRGBA1170;

Shape1167.geometry = LineSet1168;

HAnimSegment1163.children[2] = Shape1167;

HAnimJoint1162.children = new MFNode();

HAnimJoint1162.children[0] = HAnimSegment1163;

HAnimJoint HAnimJoint1171 = createNode("HAnimJoint");
HAnimJoint1171.name = "l_metacarpophalangeal_4";
HAnimJoint1171.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint1171.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimJoint1171.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1171.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1172 = createNode("HAnimSegment");
HAnimSegment1172.name = "l_carpal_proximal_phalanx_4";
HAnimSegment1172.DEF = "hanim_l_carpal_proximal_phalanx_4";
//Visualization sphere for <HAnimJoint name='l_ring1'/> is placed within <HAnimSegment name='l_carpal_proximal_phalanx_4'/>
TouchSensor TouchSensor1173 = createNode("TouchSensor");
TouchSensor1173.description = "HAnimJoint l_ring1, HAnimSegment l_carpal_proximal_phalanx_4";
HAnimSegment1172.children = new MFNode();

HAnimSegment1172.children[0] = TouchSensor1173;

Transform Transform1174 = createNode("Transform");
Transform1174.translation = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
Shape Shape1175 = createNode("Shape");
Shape1175.USE = "HAnimJointShape";
Transform1174.children = new MFNode();

Transform1174.children[0] = Shape1175;

HAnimSegment1172.children[1] = Transform1174;

//HAnimSegment visualization line from current <HAnimJoint name='l_ring1'/> to child <HAnimJoint name='l_ring2'/>
Shape Shape1176 = createNode("Shape");
LineSet LineSet1177 = createNode("LineSet");
LineSet1177.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1178 = createNode("Coordinate");
Coordinate1178.point = new MFVec3f(new float[0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
LineSet1177.coord = Coordinate1178;

ColorRGBA ColorRGBA1179 = createNode("ColorRGBA");
ColorRGBA1179.USE = "HAnimSegmentLineColorRGBA";
LineSet1177.color = ColorRGBA1179;

Shape1176.geometry = LineSet1177;

HAnimSegment1172.children[2] = Shape1176;

HAnimJoint1171.children = new MFNode();

HAnimJoint1171.children[0] = HAnimSegment1172;

HAnimJoint HAnimJoint1180 = createNode("HAnimJoint");
HAnimJoint1180.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint1180.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint1180.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimJoint1180.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1180.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1181 = createNode("HAnimSegment");
HAnimSegment1181.name = "l_carpal_middle_phalanx_4";
HAnimSegment1181.DEF = "hanim_l_carpal_middle_phalanx_4";
//Visualization sphere for <HAnimJoint name='l_ring2'/> is placed within <HAnimSegment name='l_carpal_middle_phalanx_4'/>
TouchSensor TouchSensor1182 = createNode("TouchSensor");
TouchSensor1182.description = "HAnimJoint l_ring2, HAnimSegment l_carpal_middle_phalanx_4";
HAnimSegment1181.children = new MFNode();

HAnimSegment1181.children[0] = TouchSensor1182;

Transform Transform1183 = createNode("Transform");
Transform1183.translation = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
Shape Shape1184 = createNode("Shape");
Shape1184.USE = "HAnimJointShape";
Transform1183.children = new MFNode();

Transform1183.children[0] = Shape1184;

HAnimSegment1181.children[1] = Transform1183;

//HAnimSegment visualization line from current <HAnimJoint name='l_ring2'/> to child <HAnimJoint name='l_ring3'/>
Shape Shape1185 = createNode("Shape");
LineSet LineSet1186 = createNode("LineSet");
LineSet1186.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1187 = createNode("Coordinate");
Coordinate1187.point = new MFVec3f(new float[0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
LineSet1186.coord = Coordinate1187;

ColorRGBA ColorRGBA1188 = createNode("ColorRGBA");
ColorRGBA1188.USE = "HAnimSegmentLineColorRGBA";
LineSet1186.color = ColorRGBA1188;

Shape1185.geometry = LineSet1186;

HAnimSegment1181.children[2] = Shape1185;

HAnimJoint1180.children = new MFNode();

HAnimJoint1180.children[0] = HAnimSegment1181;

HAnimJoint HAnimJoint1189 = createNode("HAnimJoint");
HAnimJoint1189.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint1189.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint1189.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint1189.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1189.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1190 = createNode("HAnimSegment");
HAnimSegment1190.name = "l_carpal_distal_phalanx_4";
HAnimSegment1190.DEF = "hanim_l_carpal_distal_phalanx_4";
//Visualization sphere for <HAnimJoint name='l_ring3'/> is placed within <HAnimSegment name='l_carpal_distal_phalanx_4'/>
TouchSensor TouchSensor1191 = createNode("TouchSensor");
TouchSensor1191.description = "HAnimJoint l_ring3, HAnimSegment l_carpal_distal_phalanx_4";
HAnimSegment1190.children = new MFNode();

HAnimSegment1190.children[0] = TouchSensor1191;

Transform Transform1192 = createNode("Transform");
Transform1192.translation = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
Shape Shape1193 = createNode("Shape");
Shape1193.USE = "HAnimJointShape";
Transform1192.children = new MFNode();

Transform1192.children[0] = Shape1193;

HAnimSegment1190.children[1] = Transform1192;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ring3'/> to <HAnimSite name='l_ring_distal_tip'/>
Shape Shape1194 = createNode("Shape");
LineSet LineSet1195 = createNode("LineSet");
LineSet1195.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1196 = createNode("Coordinate");
Coordinate1196.point = new MFVec3f(new float[0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756]);
LineSet1195.coord = Coordinate1196;

ColorRGBA ColorRGBA1197 = createNode("ColorRGBA");
ColorRGBA1197.USE = "HAnimSiteLineColorRGBA";
LineSet1195.color = ColorRGBA1197;

Shape1194.geometry = LineSet1195;

HAnimSegment1190.children[2] = Shape1194;

HAnimSite HAnimSite1198 = createNode("HAnimSite");
HAnimSite1198.name = "l_carpal_distal_phalanx_4_pt";
HAnimSite1198.DEF = "hanim_l_carpal_distal_phalanx_4_pt";
HAnimSite1198.translation = new SFVec3f(new float[0.2035,0.675,-0.0756]);
//HAnimSite visualization shape
TouchSensor TouchSensor1199 = createNode("TouchSensor");
TouchSensor1199.description = "HAnimSite l_ring_distal_tip";
HAnimSite1198.children = new MFNode();

HAnimSite1198.children[0] = TouchSensor1199;

Shape Shape1200 = createNode("Shape");
Shape1200.USE = "HAnimSiteShape";
HAnimSite1198.children[1] = Shape1200;

HAnimSegment1190.children[3] = HAnimSite1198;

HAnimJoint1189.children = new MFNode();

HAnimJoint1189.children[0] = HAnimSegment1190;

HAnimJoint1180.children[1] = HAnimJoint1189;

HAnimJoint1171.children[1] = HAnimJoint1180;

HAnimJoint1162.children[1] = HAnimJoint1171;

HAnimJoint989.children[4] = HAnimJoint1162;

HAnimJoint HAnimJoint1201 = createNode("HAnimJoint");
HAnimJoint1201.name = "l_carpometacarpal_5";
HAnimJoint1201.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint1201.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimJoint1201.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1201.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1202 = createNode("HAnimSegment");
HAnimSegment1202.name = "l_metacarpal_5";
HAnimSegment1202.DEF = "hanim_l_metacarpal_5";
//Visualization sphere for <HAnimJoint name='l_pinky0'/> is placed within <HAnimSegment name='l_metacarpal_5'/>
TouchSensor TouchSensor1203 = createNode("TouchSensor");
TouchSensor1203.description = "HAnimJoint l_pinky0, HAnimSegment l_metacarpal_5";
HAnimSegment1202.children = new MFNode();

HAnimSegment1202.children[0] = TouchSensor1203;

Transform Transform1204 = createNode("Transform");
Transform1204.translation = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
Shape Shape1205 = createNode("Shape");
Shape1205.USE = "HAnimJointShape";
Transform1204.children = new MFNode();

Transform1204.children[0] = Shape1205;

HAnimSegment1202.children[1] = Transform1204;

//HAnimSegment visualization line from current <HAnimJoint name='l_pinky0'/> to child <HAnimJoint name='l_pinky1'/>
Shape Shape1206 = createNode("Shape");
LineSet LineSet1207 = createNode("LineSet");
LineSet1207.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1208 = createNode("Coordinate");
Coordinate1208.point = new MFVec3f(new float[0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
LineSet1207.coord = Coordinate1208;

ColorRGBA ColorRGBA1209 = createNode("ColorRGBA");
ColorRGBA1209.USE = "HAnimSegmentLineColorRGBA";
LineSet1207.color = ColorRGBA1209;

Shape1206.geometry = LineSet1207;

HAnimSegment1202.children[2] = Shape1206;

HAnimJoint1201.children = new MFNode();

HAnimJoint1201.children[0] = HAnimSegment1202;

HAnimJoint HAnimJoint1210 = createNode("HAnimJoint");
HAnimJoint1210.name = "l_metacarpophalangeal_5";
HAnimJoint1210.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint1210.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimJoint1210.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1210.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1211 = createNode("HAnimSegment");
HAnimSegment1211.name = "l_carpal_proximal_phalanx_5";
HAnimSegment1211.DEF = "hanim_l_carpal_proximal_phalanx_5";
//Visualization sphere for <HAnimJoint name='l_pinky1'/> is placed within <HAnimSegment name='l_carpal_proximal_phalanx_5'/>
TouchSensor TouchSensor1212 = createNode("TouchSensor");
TouchSensor1212.description = "HAnimJoint l_pinky1, HAnimSegment l_carpal_proximal_phalanx_5";
HAnimSegment1211.children = new MFNode();

HAnimSegment1211.children[0] = TouchSensor1212;

Transform Transform1213 = createNode("Transform");
Transform1213.translation = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
Shape Shape1214 = createNode("Shape");
Shape1214.USE = "HAnimJointShape";
Transform1213.children = new MFNode();

Transform1213.children[0] = Shape1214;

HAnimSegment1211.children[1] = Transform1213;

//HAnimSegment visualization line from current <HAnimJoint name='l_pinky1'/> to child <HAnimJoint name='l_pinky2'/>
Shape Shape1215 = createNode("Shape");
LineSet LineSet1216 = createNode("LineSet");
LineSet1216.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1217 = createNode("Coordinate");
Coordinate1217.point = new MFVec3f(new float[0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
LineSet1216.coord = Coordinate1217;

ColorRGBA ColorRGBA1218 = createNode("ColorRGBA");
ColorRGBA1218.USE = "HAnimSegmentLineColorRGBA";
LineSet1216.color = ColorRGBA1218;

Shape1215.geometry = LineSet1216;

HAnimSegment1211.children[2] = Shape1215;

HAnimJoint1210.children = new MFNode();

HAnimJoint1210.children[0] = HAnimSegment1211;

HAnimJoint HAnimJoint1219 = createNode("HAnimJoint");
HAnimJoint1219.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint1219.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint1219.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimJoint1219.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1219.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1220 = createNode("HAnimSegment");
HAnimSegment1220.name = "l_carpal_middle_phalanx_5";
HAnimSegment1220.DEF = "hanim_l_carpal_middle_phalanx_5";
//Visualization sphere for <HAnimJoint name='l_pinky2'/> is placed within <HAnimSegment name='l_carpal_middle_phalanx_5'/>
TouchSensor TouchSensor1221 = createNode("TouchSensor");
TouchSensor1221.description = "HAnimJoint l_pinky2, HAnimSegment l_carpal_middle_phalanx_5";
HAnimSegment1220.children = new MFNode();

HAnimSegment1220.children[0] = TouchSensor1221;

Transform Transform1222 = createNode("Transform");
Transform1222.translation = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
Shape Shape1223 = createNode("Shape");
Shape1223.USE = "HAnimJointShape";
Transform1222.children = new MFNode();

Transform1222.children[0] = Shape1223;

HAnimSegment1220.children[1] = Transform1222;

//HAnimSegment visualization line from current <HAnimJoint name='l_pinky2'/> to child <HAnimJoint name='l_pinky3'/>
Shape Shape1224 = createNode("Shape");
LineSet LineSet1225 = createNode("LineSet");
LineSet1225.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1226 = createNode("Coordinate");
Coordinate1226.point = new MFVec3f(new float[0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
LineSet1225.coord = Coordinate1226;

ColorRGBA ColorRGBA1227 = createNode("ColorRGBA");
ColorRGBA1227.USE = "HAnimSegmentLineColorRGBA";
LineSet1225.color = ColorRGBA1227;

Shape1224.geometry = LineSet1225;

HAnimSegment1220.children[2] = Shape1224;

HAnimJoint1219.children = new MFNode();

HAnimJoint1219.children[0] = HAnimSegment1220;

HAnimJoint HAnimJoint1228 = createNode("HAnimJoint");
HAnimJoint1228.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint1228.DEF = "hanim_l_carpal_distal_interphalangeal_5";
HAnimJoint1228.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint1228.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1228.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1229 = createNode("HAnimSegment");
HAnimSegment1229.name = "l_carpal_distal_phalanx_5";
HAnimSegment1229.DEF = "hanim_l_carpal_distal_phalanx_5";
//Visualization sphere for <HAnimJoint name='l_pinky3'/> is placed within <HAnimSegment name='l_carpal_distal_phalanx_5'/>
TouchSensor TouchSensor1230 = createNode("TouchSensor");
TouchSensor1230.description = "HAnimJoint l_pinky3, HAnimSegment l_carpal_distal_phalanx_5";
HAnimSegment1229.children = new MFNode();

HAnimSegment1229.children[0] = TouchSensor1230;

Transform Transform1231 = createNode("Transform");
Transform1231.translation = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
Shape Shape1232 = createNode("Shape");
Shape1232.USE = "HAnimJointShape";
Transform1231.children = new MFNode();

Transform1231.children[0] = Shape1232;

HAnimSegment1229.children[1] = Transform1231;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_pinky3'/> to <HAnimSite name='l_pinky_distal_tip'/>
Shape Shape1233 = createNode("Shape");
LineSet LineSet1234 = createNode("LineSet");
LineSet1234.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1235 = createNode("Coordinate");
Coordinate1235.point = new MFVec3f(new float[0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012]);
LineSet1234.coord = Coordinate1235;

ColorRGBA ColorRGBA1236 = createNode("ColorRGBA");
ColorRGBA1236.USE = "HAnimSiteLineColorRGBA";
LineSet1234.color = ColorRGBA1236;

Shape1233.geometry = LineSet1234;

HAnimSegment1229.children[2] = Shape1233;

HAnimSite HAnimSite1237 = createNode("HAnimSite");
HAnimSite1237.name = "l_carpal_distal_phalanx_5_pt";
HAnimSite1237.DEF = "hanim_l_carpal_distal_phalanx_5_pt";
HAnimSite1237.translation = new SFVec3f(new float[0.2014,0.7009,-0.1012]);
//HAnimSite visualization shape
TouchSensor TouchSensor1238 = createNode("TouchSensor");
TouchSensor1238.description = "HAnimSite l_pinky_distal_tip";
HAnimSite1237.children = new MFNode();

HAnimSite1237.children[0] = TouchSensor1238;

Shape Shape1239 = createNode("Shape");
Shape1239.USE = "HAnimSiteShape";
HAnimSite1237.children[1] = Shape1239;

HAnimSegment1229.children[3] = HAnimSite1237;

HAnimJoint1228.children = new MFNode();

HAnimJoint1228.children[0] = HAnimSegment1229;

HAnimJoint1219.children[1] = HAnimJoint1228;

HAnimJoint1210.children[1] = HAnimJoint1219;

HAnimJoint1201.children[1] = HAnimJoint1210;

HAnimJoint989.children[5] = HAnimJoint1201;

HAnimJoint952.children[1] = HAnimJoint989;

HAnimJoint936.children[1] = HAnimJoint952;

HAnimJoint927.children[1] = HAnimJoint936;

HAnimJoint890.children[1] = HAnimJoint927;

HAnimJoint602.children[2] = HAnimJoint890;

HAnimJoint HAnimJoint1240 = createNode("HAnimJoint");
HAnimJoint1240.name = "r_sternoclavicular";
HAnimJoint1240.DEF = "hanim_r_sternoclavicular";
HAnimJoint1240.center = new SFVec3f(new float[-0.082,1.4488,-0.0353]);
HAnimJoint1240.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1240.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1241 = createNode("HAnimSegment");
HAnimSegment1241.name = "r_clavicle";
HAnimSegment1241.DEF = "hanim_r_clavicle";
//Visualization sphere for <HAnimJoint name='r_sternoclavicular'/> is placed within <HAnimSegment name='r_clavicle'/>
TouchSensor TouchSensor1242 = createNode("TouchSensor");
TouchSensor1242.description = "HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle";
HAnimSegment1241.children = new MFNode();

HAnimSegment1241.children[0] = TouchSensor1242;

Transform Transform1243 = createNode("Transform");
Transform1243.translation = new SFVec3f(new float[-0.082,1.4488,-0.0353]);
Shape Shape1244 = createNode("Shape");
Shape1244.USE = "HAnimJointShape";
Transform1243.children = new MFNode();

Transform1243.children[0] = Shape1244;

HAnimSegment1241.children[1] = Transform1243;

//HAnimSegment visualization line from current <HAnimJoint name='r_sternoclavicular'/> to child <HAnimJoint name='r_acromioclavicular'/>
Shape Shape1245 = createNode("Shape");
LineSet LineSet1246 = createNode("LineSet");
LineSet1246.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1247 = createNode("Coordinate");
Coordinate1247.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.0962,1.4269,-0.0424]);
LineSet1246.coord = Coordinate1247;

ColorRGBA ColorRGBA1248 = createNode("ColorRGBA");
ColorRGBA1248.USE = "HAnimSegmentLineColorRGBA";
LineSet1246.color = ColorRGBA1248;

Shape1245.geometry = LineSet1246;

HAnimSegment1241.children[2] = Shape1245;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_clavicale_pt'/>
Shape Shape1249 = createNode("Shape");
LineSet LineSet1250 = createNode("LineSet");
LineSet1250.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1251 = createNode("Coordinate");
Coordinate1251.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.0115,1.4943,0.04]);
LineSet1250.coord = Coordinate1251;

ColorRGBA ColorRGBA1252 = createNode("ColorRGBA");
ColorRGBA1252.USE = "HAnimSiteLineColorRGBA";
LineSet1250.color = ColorRGBA1252;

Shape1249.geometry = LineSet1250;

HAnimSegment1241.children[3] = Shape1249;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_acromion_pt'/>
Shape Shape1253 = createNode("Shape");
LineSet LineSet1254 = createNode("LineSet");
LineSet1254.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1255 = createNode("Coordinate");
Coordinate1255.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.1905,1.4791,-0.0431]);
LineSet1254.coord = Coordinate1255;

ColorRGBA ColorRGBA1256 = createNode("ColorRGBA");
ColorRGBA1256.USE = "HAnimSiteLineColorRGBA";
LineSet1254.color = ColorRGBA1256;

Shape1253.geometry = LineSet1254;

HAnimSegment1241.children[4] = Shape1253;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_ant_pt'/>
Shape Shape1257 = createNode("Shape");
LineSet LineSet1258 = createNode("LineSet");
LineSet1258.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1259 = createNode("Coordinate");
Coordinate1259.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.1626,1.4072,-0.0031]);
LineSet1258.coord = Coordinate1259;

ColorRGBA ColorRGBA1260 = createNode("ColorRGBA");
ColorRGBA1260.USE = "HAnimSiteLineColorRGBA";
LineSet1258.color = ColorRGBA1260;

Shape1257.geometry = LineSet1258;

HAnimSegment1241.children[5] = Shape1257;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_post_pt'/>
Shape Shape1261 = createNode("Shape");
LineSet LineSet1262 = createNode("LineSet");
LineSet1262.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1263 = createNode("Coordinate");
Coordinate1263.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.1603,1.4098,-0.0826]);
LineSet1262.coord = Coordinate1263;

ColorRGBA ColorRGBA1264 = createNode("ColorRGBA");
ColorRGBA1264.USE = "HAnimSiteLineColorRGBA";
LineSet1262.color = ColorRGBA1264;

Shape1261.geometry = LineSet1262;

HAnimSegment1241.children[6] = Shape1261;

HAnimSite HAnimSite1265 = createNode("HAnimSite");
HAnimSite1265.name = "r_clavicle_pt";
HAnimSite1265.DEF = "hanim_r_clavicle_pt";
HAnimSite1265.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
//HAnimSite visualization shape
TouchSensor TouchSensor1266 = createNode("TouchSensor");
TouchSensor1266.description = "HAnimSite r_clavicale_pt";
HAnimSite1265.children = new MFNode();

HAnimSite1265.children[0] = TouchSensor1266;

Shape Shape1267 = createNode("Shape");
Shape1267.USE = "HAnimSiteShape";
HAnimSite1265.children[1] = Shape1267;

HAnimSegment1241.children[7] = HAnimSite1265;

HAnimSite HAnimSite1268 = createNode("HAnimSite");
HAnimSite1268.name = "r_acromion_pt";
HAnimSite1268.DEF = "hanim_r_acromion_pt";
HAnimSite1268.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
//HAnimSite visualization shape
TouchSensor TouchSensor1269 = createNode("TouchSensor");
TouchSensor1269.description = "HAnimSite r_acromion_pt";
HAnimSite1268.children = new MFNode();

HAnimSite1268.children[0] = TouchSensor1269;

Shape Shape1270 = createNode("Shape");
Shape1270.USE = "HAnimSiteShape";
HAnimSite1268.children[1] = Shape1270;

HAnimSegment1241.children[8] = HAnimSite1268;

HAnimSite HAnimSite1271 = createNode("HAnimSite");
HAnimSite1271.name = "r_axilla_proximal_pt";
HAnimSite1271.DEF = "hanim_r_axilla_proximal_pt";
HAnimSite1271.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
//HAnimSite visualization shape
TouchSensor TouchSensor1272 = createNode("TouchSensor");
TouchSensor1272.description = "HAnimSite r_axilla_ant_pt";
HAnimSite1271.children = new MFNode();

HAnimSite1271.children[0] = TouchSensor1272;

Shape Shape1273 = createNode("Shape");
Shape1273.USE = "HAnimSiteShape";
HAnimSite1271.children[1] = Shape1273;

HAnimSegment1241.children[9] = HAnimSite1271;

HAnimSite HAnimSite1274 = createNode("HAnimSite");
HAnimSite1274.name = "r_axilla_distal_pt";
HAnimSite1274.DEF = "hanim_r_axilla_distal_pt";
HAnimSite1274.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
//HAnimSite visualization shape
TouchSensor TouchSensor1275 = createNode("TouchSensor");
TouchSensor1275.description = "HAnimSite r_axilla_post_pt";
HAnimSite1274.children = new MFNode();

HAnimSite1274.children[0] = TouchSensor1275;

Shape Shape1276 = createNode("Shape");
Shape1276.USE = "HAnimSiteShape";
HAnimSite1274.children[1] = Shape1276;

HAnimSegment1241.children[10] = HAnimSite1274;

HAnimJoint1240.children = new MFNode();

HAnimJoint1240.children[0] = HAnimSegment1241;

HAnimJoint HAnimJoint1277 = createNode("HAnimJoint");
HAnimJoint1277.name = "r_acromioclavicular";
HAnimJoint1277.DEF = "hanim_r_acromioclavicular";
HAnimJoint1277.center = new SFVec3f(new float[-0.0962,1.4269,-0.0424]);
HAnimJoint1277.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1277.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1278 = createNode("HAnimSegment");
HAnimSegment1278.name = "r_scapula";
HAnimSegment1278.DEF = "hanim_r_scapula";
//Visualization sphere for <HAnimJoint name='r_acromioclavicular'/> is placed within <HAnimSegment name='r_scapula'/>
TouchSensor TouchSensor1279 = createNode("TouchSensor");
TouchSensor1279.description = "HAnimJoint r_acromioclavicular, HAnimSegment r_scapula";
HAnimSegment1278.children = new MFNode();

HAnimSegment1278.children[0] = TouchSensor1279;

Transform Transform1280 = createNode("Transform");
Transform1280.translation = new SFVec3f(new float[-0.0962,1.4269,-0.0424]);
Shape Shape1281 = createNode("Shape");
Shape1281.USE = "HAnimJointShape";
Transform1280.children = new MFNode();

Transform1280.children[0] = Shape1281;

HAnimSegment1278.children[1] = Transform1280;

//HAnimSegment visualization line from current <HAnimJoint name='r_acromioclavicular'/> to child <HAnimJoint name='r_shoulder'/>
Shape Shape1282 = createNode("Shape");
LineSet LineSet1283 = createNode("LineSet");
LineSet1283.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1284 = createNode("Coordinate");
Coordinate1284.point = new MFVec3f(new float[-0.0962,1.4269,-0.0424,-0.2029,1.4376,-0.0387]);
LineSet1283.coord = Coordinate1284;

ColorRGBA ColorRGBA1285 = createNode("ColorRGBA");
ColorRGBA1285.USE = "HAnimSegmentLineColorRGBA";
LineSet1283.color = ColorRGBA1285;

Shape1282.geometry = LineSet1283;

HAnimSegment1278.children[2] = Shape1282;

HAnimJoint1277.children = new MFNode();

HAnimJoint1277.children[0] = HAnimSegment1278;

HAnimJoint HAnimJoint1286 = createNode("HAnimJoint");
HAnimJoint1286.name = "r_shoulder";
HAnimJoint1286.DEF = "hanim_r_shoulder";
HAnimJoint1286.center = new SFVec3f(new float[-0.2029,1.4376,-0.0387]);
HAnimJoint1286.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1286.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1287 = createNode("HAnimSegment");
HAnimSegment1287.name = "r_upperarm";
HAnimSegment1287.DEF = "hanim_r_upperarm";
//Visualization sphere for <HAnimJoint name='r_shoulder'/> is placed within <HAnimSegment name='r_upperarm'/>
TouchSensor TouchSensor1288 = createNode("TouchSensor");
TouchSensor1288.description = "HAnimJoint r_shoulder, HAnimSegment r_upperarm";
HAnimSegment1287.children = new MFNode();

HAnimSegment1287.children[0] = TouchSensor1288;

Transform Transform1289 = createNode("Transform");
Transform1289.translation = new SFVec3f(new float[-0.2029,1.4376,-0.0387]);
Shape Shape1290 = createNode("Shape");
Shape1290.USE = "HAnimJointShape";
Transform1289.children = new MFNode();

Transform1289.children[0] = Shape1290;

HAnimSegment1287.children[1] = Transform1289;

//HAnimSegment visualization line from current <HAnimJoint name='r_shoulder'/> to child <HAnimJoint name='r_elbow'/>
Shape Shape1291 = createNode("Shape");
LineSet LineSet1292 = createNode("LineSet");
LineSet1292.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1293 = createNode("Coordinate");
Coordinate1293.point = new MFVec3f(new float[-0.2029,1.4376,-0.0387,-0.2014,1.1357,-0.0682]);
LineSet1292.coord = Coordinate1293;

ColorRGBA ColorRGBA1294 = createNode("ColorRGBA");
ColorRGBA1294.USE = "HAnimSegmentLineColorRGBA";
LineSet1292.color = ColorRGBA1294;

Shape1291.geometry = LineSet1292;

HAnimSegment1287.children[2] = Shape1291;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_shoulder'/> to <HAnimSite name='r_humeral_lateral_epicn_pt'/>
Shape Shape1295 = createNode("Shape");
LineSet LineSet1296 = createNode("LineSet");
LineSet1296.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1297 = createNode("Coordinate");
Coordinate1297.point = new MFVec3f(new float[-0.2029,1.4376,-0.0387,-0.2224,1.1517,-0.1033]);
LineSet1296.coord = Coordinate1297;

ColorRGBA ColorRGBA1298 = createNode("ColorRGBA");
ColorRGBA1298.USE = "HAnimSiteLineColorRGBA";
LineSet1296.color = ColorRGBA1298;

Shape1295.geometry = LineSet1296;

HAnimSegment1287.children[3] = Shape1295;

HAnimSite HAnimSite1299 = createNode("HAnimSite");
HAnimSite1299.name = "r_humeral_lateral_epicondyle_pt";
HAnimSite1299.DEF = "hanim_r_humeral_lateral_epicondyle_pt";
HAnimSite1299.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
//HAnimSite visualization shape
TouchSensor TouchSensor1300 = createNode("TouchSensor");
TouchSensor1300.description = "HAnimSite r_humeral_lateral_epicn_pt";
HAnimSite1299.children = new MFNode();

HAnimSite1299.children[0] = TouchSensor1300;

Shape Shape1301 = createNode("Shape");
Shape1301.USE = "HAnimSiteShape";
HAnimSite1299.children[1] = Shape1301;

HAnimSegment1287.children[4] = HAnimSite1299;

HAnimJoint1286.children = new MFNode();

HAnimJoint1286.children[0] = HAnimSegment1287;

HAnimJoint HAnimJoint1302 = createNode("HAnimJoint");
HAnimJoint1302.name = "r_elbow";
HAnimJoint1302.DEF = "hanim_r_elbow";
HAnimJoint1302.center = new SFVec3f(new float[-0.2014,1.1357,-0.0682]);
HAnimJoint1302.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1302.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1303 = createNode("HAnimSegment");
HAnimSegment1303.name = "r_forearm";
HAnimSegment1303.DEF = "hanim_r_forearm";
//Visualization sphere for <HAnimJoint name='r_elbow'/> is placed within <HAnimSegment name='r_forearm'/>
TouchSensor TouchSensor1304 = createNode("TouchSensor");
TouchSensor1304.description = "HAnimJoint r_elbow, HAnimSegment r_forearm";
HAnimSegment1303.children = new MFNode();

HAnimSegment1303.children[0] = TouchSensor1304;

Transform Transform1305 = createNode("Transform");
Transform1305.translation = new SFVec3f(new float[-0.2014,1.1357,-0.0682]);
Shape Shape1306 = createNode("Shape");
Shape1306.USE = "HAnimJointShape";
Transform1305.children = new MFNode();

Transform1305.children[0] = Shape1306;

HAnimSegment1303.children[1] = Transform1305;

//HAnimSegment visualization line from current <HAnimJoint name='r_elbow'/> to child <HAnimJoint name='r_radiocarpal'/>
Shape Shape1307 = createNode("Shape");
LineSet LineSet1308 = createNode("LineSet");
LineSet1308.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1309 = createNode("Coordinate");
Coordinate1309.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.1984,0.8663,-0.0583]);
LineSet1308.coord = Coordinate1309;

ColorRGBA ColorRGBA1310 = createNode("ColorRGBA");
ColorRGBA1310.USE = "HAnimSegmentLineColorRGBA";
LineSet1308.color = ColorRGBA1310;

Shape1307.geometry = LineSet1308;

HAnimSegment1303.children[2] = Shape1307;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radial_styloid_pt'/>
Shape Shape1311 = createNode("Shape");
LineSet LineSet1312 = createNode("LineSet");
LineSet1312.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1313 = createNode("Coordinate");
Coordinate1313.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.1884,0.8676,-0.036]);
LineSet1312.coord = Coordinate1313;

ColorRGBA ColorRGBA1314 = createNode("ColorRGBA");
ColorRGBA1314.USE = "HAnimSiteLineColorRGBA";
LineSet1312.color = ColorRGBA1314;

Shape1311.geometry = LineSet1312;

HAnimSegment1303.children[3] = Shape1311;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_olecranon_pt'/>
Shape Shape1315 = createNode("Shape");
LineSet LineSet1316 = createNode("LineSet");
LineSet1316.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1317 = createNode("Coordinate");
Coordinate1317.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.1907,1.1405,-0.1065]);
LineSet1316.coord = Coordinate1317;

ColorRGBA ColorRGBA1318 = createNode("ColorRGBA");
ColorRGBA1318.USE = "HAnimSiteLineColorRGBA";
LineSet1316.color = ColorRGBA1318;

Shape1315.geometry = LineSet1316;

HAnimSegment1303.children[4] = Shape1315;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_humeral_medial_epicn_pt'/>
Shape Shape1319 = createNode("Shape");
LineSet LineSet1320 = createNode("LineSet");
LineSet1320.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1321 = createNode("Coordinate");
Coordinate1321.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.168,1.1298,-0.1062]);
LineSet1320.coord = Coordinate1321;

ColorRGBA ColorRGBA1322 = createNode("ColorRGBA");
ColorRGBA1322.USE = "HAnimSiteLineColorRGBA";
LineSet1320.color = ColorRGBA1322;

Shape1319.geometry = LineSet1320;

HAnimSegment1303.children[5] = Shape1319;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radiale_pt'/>
Shape Shape1323 = createNode("Shape");
LineSet LineSet1324 = createNode("LineSet");
LineSet1324.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1325 = createNode("Coordinate");
Coordinate1325.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.213,1.1305,-0.1091]);
LineSet1324.coord = Coordinate1325;

ColorRGBA ColorRGBA1326 = createNode("ColorRGBA");
ColorRGBA1326.USE = "HAnimSiteLineColorRGBA";
LineSet1324.color = ColorRGBA1326;

Shape1323.geometry = LineSet1324;

HAnimSegment1303.children[6] = Shape1323;

HAnimSite HAnimSite1327 = createNode("HAnimSite");
HAnimSite1327.name = "r_radial_styloid_pt";
HAnimSite1327.DEF = "hanim_r_radial_styloid_pt";
HAnimSite1327.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
//HAnimSite visualization shape
TouchSensor TouchSensor1328 = createNode("TouchSensor");
TouchSensor1328.description = "HAnimSite r_radial_styloid_pt";
HAnimSite1327.children = new MFNode();

HAnimSite1327.children[0] = TouchSensor1328;

Shape Shape1329 = createNode("Shape");
Shape1329.USE = "HAnimSiteShape";
HAnimSite1327.children[1] = Shape1329;

HAnimSegment1303.children[7] = HAnimSite1327;

HAnimSite HAnimSite1330 = createNode("HAnimSite");
HAnimSite1330.name = "r_olecranon_pt";
HAnimSite1330.DEF = "hanim_r_olecranon_pt";
HAnimSite1330.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
//HAnimSite visualization shape
TouchSensor TouchSensor1331 = createNode("TouchSensor");
TouchSensor1331.description = "HAnimSite r_olecranon_pt";
HAnimSite1330.children = new MFNode();

HAnimSite1330.children[0] = TouchSensor1331;

Shape Shape1332 = createNode("Shape");
Shape1332.USE = "HAnimSiteShape";
HAnimSite1330.children[1] = Shape1332;

HAnimSegment1303.children[8] = HAnimSite1330;

HAnimSite HAnimSite1333 = createNode("HAnimSite");
HAnimSite1333.name = "r_humeral_medial_epicondyle_pt";
HAnimSite1333.DEF = "hanim_r_humeral_medial_epicondyle_pt";
HAnimSite1333.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
//HAnimSite visualization shape
TouchSensor TouchSensor1334 = createNode("TouchSensor");
TouchSensor1334.description = "HAnimSite r_humeral_medial_epicn_pt";
HAnimSite1333.children = new MFNode();

HAnimSite1333.children[0] = TouchSensor1334;

Shape Shape1335 = createNode("Shape");
Shape1335.USE = "HAnimSiteShape";
HAnimSite1333.children[1] = Shape1335;

HAnimSegment1303.children[9] = HAnimSite1333;

HAnimSite HAnimSite1336 = createNode("HAnimSite");
HAnimSite1336.name = "r_radiale_pt";
HAnimSite1336.DEF = "hanim_r_radiale_pt";
HAnimSite1336.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
//HAnimSite visualization shape
TouchSensor TouchSensor1337 = createNode("TouchSensor");
TouchSensor1337.description = "HAnimSite r_radiale_pt";
HAnimSite1336.children = new MFNode();

HAnimSite1336.children[0] = TouchSensor1337;

Shape Shape1338 = createNode("Shape");
Shape1338.USE = "HAnimSiteShape";
HAnimSite1336.children[1] = Shape1338;

HAnimSegment1303.children[10] = HAnimSite1336;

HAnimJoint1302.children = new MFNode();

HAnimJoint1302.children[0] = HAnimSegment1303;

HAnimJoint HAnimJoint1339 = createNode("HAnimJoint");
HAnimJoint1339.name = "r_radiocarpal";
HAnimJoint1339.DEF = "hanim_r_radiocarpal";
HAnimJoint1339.center = new SFVec3f(new float[-0.1984,0.8663,-0.0583]);
HAnimJoint1339.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1339.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1340 = createNode("HAnimSegment");
HAnimSegment1340.name = "r_carpal";
HAnimSegment1340.DEF = "hanim_r_carpal";
//Visualization sphere for <HAnimJoint name='r_radiocarpal'/> is placed within <HAnimSegment name='r_carpal'/>
TouchSensor TouchSensor1341 = createNode("TouchSensor");
TouchSensor1341.description = "HAnimJoint r_radiocarpal, HAnimSegment r_carpal";
HAnimSegment1340.children = new MFNode();

HAnimSegment1340.children[0] = TouchSensor1341;

Transform Transform1342 = createNode("Transform");
Transform1342.translation = new SFVec3f(new float[-0.1984,0.8663,-0.0583]);
Shape Shape1343 = createNode("Shape");
Shape1343.USE = "HAnimJointShape";
Transform1342.children = new MFNode();

Transform1342.children[0] = Shape1343;

HAnimSegment1340.children[1] = Transform1342;

//HAnimSegment visualization line from current <HAnimJoint name='r_radiocarpal'/> to child <HAnimJoint name='r_thumb1'/>
Shape Shape1344 = createNode("Shape");
LineSet LineSet1345 = createNode("LineSet");
LineSet1345.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1346 = createNode("Coordinate");
Coordinate1346.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1924,0.8472,-0.0534]);
LineSet1345.coord = Coordinate1346;

ColorRGBA ColorRGBA1347 = createNode("ColorRGBA");
ColorRGBA1347.USE = "HAnimSegmentLineColorRGBA";
LineSet1345.color = ColorRGBA1347;

Shape1344.geometry = LineSet1345;

HAnimSegment1340.children[2] = Shape1344;

//HAnimSegment visualization line from current <HAnimJoint name='r_radiocarpal'/> to child <HAnimJoint name='r_index0'/>
Shape Shape1348 = createNode("Shape");
LineSet LineSet1349 = createNode("LineSet");
LineSet1349.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1350 = createNode("Coordinate");
Coordinate1350.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1983,0.8024,-0.028]);
LineSet1349.coord = Coordinate1350;

ColorRGBA ColorRGBA1351 = createNode("ColorRGBA");
ColorRGBA1351.USE = "HAnimSegmentLineColorRGBA";
LineSet1349.color = ColorRGBA1351;

Shape1348.geometry = LineSet1349;

HAnimSegment1340.children[3] = Shape1348;

//HAnimSegment visualization line from current <HAnimJoint name='r_radiocarpal'/> to child <HAnimJoint name='r_middle0'/>
Shape Shape1352 = createNode("Shape");
LineSet LineSet1353 = createNode("LineSet");
LineSet1353.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1354 = createNode("Coordinate");
Coordinate1354.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1987,0.8029,-0.053]);
LineSet1353.coord = Coordinate1354;

ColorRGBA ColorRGBA1355 = createNode("ColorRGBA");
ColorRGBA1355.USE = "HAnimSegmentLineColorRGBA";
LineSet1353.color = ColorRGBA1355;

Shape1352.geometry = LineSet1353;

HAnimSegment1340.children[4] = Shape1352;

//HAnimSegment visualization line from current <HAnimJoint name='r_radiocarpal'/> to child <HAnimJoint name='r_ring0'/>
Shape Shape1356 = createNode("Shape");
LineSet LineSet1357 = createNode("LineSet");
LineSet1357.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1358 = createNode("Coordinate");
Coordinate1358.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1956,0.8019,-0.0794]);
LineSet1357.coord = Coordinate1358;

ColorRGBA ColorRGBA1359 = createNode("ColorRGBA");
ColorRGBA1359.USE = "HAnimSegmentLineColorRGBA";
LineSet1357.color = ColorRGBA1359;

Shape1356.geometry = LineSet1357;

HAnimSegment1340.children[5] = Shape1356;

//HAnimSegment visualization line from current <HAnimJoint name='r_radiocarpal'/> to child <HAnimJoint name='r_pinky0'/>
Shape Shape1360 = createNode("Shape");
LineSet LineSet1361 = createNode("LineSet");
LineSet1361.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1362 = createNode("Coordinate");
Coordinate1362.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1925,0.8066,-0.1036]);
LineSet1361.coord = Coordinate1362;

ColorRGBA ColorRGBA1363 = createNode("ColorRGBA");
ColorRGBA1363.USE = "HAnimSegmentLineColorRGBA";
LineSet1361.color = ColorRGBA1363;

Shape1360.geometry = LineSet1361;

HAnimSegment1340.children[6] = Shape1360;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_radiocarpal'/> to <HAnimSite name='r_metacarpal_pha2_pt'/>
Shape Shape1364 = createNode("Shape");
LineSet LineSet1365 = createNode("LineSet");
LineSet1365.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1366 = createNode("Coordinate");
Coordinate1366.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1977,0.8169,-0.0177]);
LineSet1365.coord = Coordinate1366;

ColorRGBA ColorRGBA1367 = createNode("ColorRGBA");
ColorRGBA1367.USE = "HAnimSiteLineColorRGBA";
LineSet1365.color = ColorRGBA1367;

Shape1364.geometry = LineSet1365;

HAnimSegment1340.children[7] = Shape1364;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_radiocarpal'/> to <HAnimSite name='r_ulnar_styloid_pt'/>
Shape Shape1368 = createNode("Shape");
LineSet LineSet1369 = createNode("LineSet");
LineSet1369.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1370 = createNode("Coordinate");
Coordinate1370.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.2117,0.8562,-0.0584]);
LineSet1369.coord = Coordinate1370;

ColorRGBA ColorRGBA1371 = createNode("ColorRGBA");
ColorRGBA1371.USE = "HAnimSiteLineColorRGBA";
LineSet1369.color = ColorRGBA1371;

Shape1368.geometry = LineSet1369;

HAnimSegment1340.children[8] = Shape1368;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_radiocarpal'/> to <HAnimSite name='r_metacarpal_pha5_pt'/>
Shape Shape1372 = createNode("Shape");
LineSet LineSet1373 = createNode("LineSet");
LineSet1373.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1374 = createNode("Coordinate");
Coordinate1374.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1929,0.789,-0.1064]);
LineSet1373.coord = Coordinate1374;

ColorRGBA ColorRGBA1375 = createNode("ColorRGBA");
ColorRGBA1375.USE = "HAnimSiteLineColorRGBA";
LineSet1373.color = ColorRGBA1375;

Shape1372.geometry = LineSet1373;

HAnimSegment1340.children[9] = Shape1372;

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_radiocarpal'/> to <HAnimSite name='r_hand_front_view'/>
Shape Shape1376 = createNode("Shape");
LineSet LineSet1377 = createNode("LineSet");
LineSet1377.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1378 = createNode("Coordinate");
Coordinate1378.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.3,0.75,0.45]);
LineSet1377.coord = Coordinate1378;

ColorRGBA ColorRGBA1379 = createNode("ColorRGBA");
ColorRGBA1379.USE = "HAnimSiteViewpointLineColorRGBA";
LineSet1377.color = ColorRGBA1379;

Shape1376.geometry = LineSet1377;

HAnimSegment1340.children[10] = Shape1376;

HAnimSite HAnimSite1380 = createNode("HAnimSite");
HAnimSite1380.name = "r_metacarpal_phalanx_2_pt";
HAnimSite1380.DEF = "hanim_r_metacarpal_phalanx_2_pt";
HAnimSite1380.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
//HAnimSite visualization shape
TouchSensor TouchSensor1381 = createNode("TouchSensor");
TouchSensor1381.description = "HAnimSite r_metacarpal_pha2_pt";
HAnimSite1380.children = new MFNode();

HAnimSite1380.children[0] = TouchSensor1381;

Shape Shape1382 = createNode("Shape");
Shape1382.USE = "HAnimSiteShape";
HAnimSite1380.children[1] = Shape1382;

HAnimSegment1340.children[11] = HAnimSite1380;

HAnimSite HAnimSite1383 = createNode("HAnimSite");
HAnimSite1383.name = "r_ulnar_styloid_pt";
HAnimSite1383.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite1383.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
//HAnimSite visualization shape
TouchSensor TouchSensor1384 = createNode("TouchSensor");
TouchSensor1384.description = "HAnimSite r_ulnar_styloid_pt";
HAnimSite1383.children = new MFNode();

HAnimSite1383.children[0] = TouchSensor1384;

Shape Shape1385 = createNode("Shape");
Shape1385.USE = "HAnimSiteShape";
HAnimSite1383.children[1] = Shape1385;

HAnimSegment1340.children[12] = HAnimSite1383;

HAnimSite HAnimSite1386 = createNode("HAnimSite");
HAnimSite1386.name = "r_metacarpal_phalanx_5_pt";
HAnimSite1386.DEF = "hanim_r_metacarpal_phalanx_5_pt";
HAnimSite1386.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
//HAnimSite visualization shape
TouchSensor TouchSensor1387 = createNode("TouchSensor");
TouchSensor1387.description = "HAnimSite r_metacarpal_pha5_pt";
HAnimSite1386.children = new MFNode();

HAnimSite1386.children[0] = TouchSensor1387;

Shape Shape1388 = createNode("Shape");
Shape1388.USE = "HAnimSiteShape";
HAnimSite1386.children[1] = Shape1388;

HAnimSegment1340.children[13] = HAnimSite1386;

HAnimSite HAnimSite1389 = createNode("HAnimSite");
HAnimSite1389.name = "r_hand_front_view";
HAnimSite1389.DEF = "hanim_r_hand_front_view";
HAnimSite1389.translation = new SFVec3f(new float[-0.3,0.75,0.45]);
//HAnimSite visualization shape
TouchSensor TouchSensor1390 = createNode("TouchSensor");
TouchSensor1390.description = "HAnimSite r_hand_front_view";
HAnimSite1389.children = new MFNode();

HAnimSite1389.children[0] = TouchSensor1390;

Shape Shape1391 = createNode("Shape");
Shape1391.USE = "HAnimSiteShape";
HAnimSite1389.children[1] = Shape1391;

Viewpoint Viewpoint1392 = createNode("Viewpoint");
Viewpoint1392.DEF = "hanim_r_hand_front_viewpoint";
Viewpoint1392.centerOfRotation = new SFVec3f(new float[0,0.7,0]);
Viewpoint1392.description = "right hand front";
Viewpoint1392.position = new SFVec3f(new float[0,0,0]);
HAnimSite1389.children[2] = Viewpoint1392;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1393 = createNode("Anchor");
Anchor1393.description = "HAnimSite hanim_r_hand_front_view Viewpoint";
Anchor1393.url = new MFString(new java.lang.String["#hanim_r_hand_front_viewpoint"]);
LOD LOD1394 = createNode("LOD");
LOD1394.forceTransitions = True;
LOD1394.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1395 = createNode("WorldInfo");
WorldInfo1395.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1394.children = new MFNode();

LOD1394.children[0] = WorldInfo1395;

Shape Shape1396 = createNode("Shape");
Shape1396.USE = "HAnimSiteViewpointShape";
LOD1394.children[1] = Shape1396;

Anchor1393.children = new MFNode();

Anchor1393.children[0] = LOD1394;

HAnimSite1389.children[3] = Anchor1393;

HAnimSegment1340.children[14] = HAnimSite1389;

HAnimJoint1339.children = new MFNode();

HAnimJoint1339.children[0] = HAnimSegment1340;

HAnimJoint HAnimJoint1397 = createNode("HAnimJoint");
HAnimJoint1397.name = "r_carpometacarpal_1";
HAnimJoint1397.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint1397.center = new SFVec3f(new float[-0.1924,0.8472,-0.0534]);
HAnimJoint1397.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1397.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1398 = createNode("HAnimSegment");
HAnimSegment1398.name = "r_metacarpal_1";
HAnimSegment1398.DEF = "hanim_r_metacarpal_1";
//Visualization sphere for <HAnimJoint name='r_thumb1'/> is placed within <HAnimSegment name='r_metacarpal_1'/>
TouchSensor TouchSensor1399 = createNode("TouchSensor");
TouchSensor1399.description = "HAnimJoint r_thumb1, HAnimSegment r_metacarpal_1";
HAnimSegment1398.children = new MFNode();

HAnimSegment1398.children[0] = TouchSensor1399;

Transform Transform1400 = createNode("Transform");
Transform1400.translation = new SFVec3f(new float[-0.1924,0.8472,-0.0534]);
Shape Shape1401 = createNode("Shape");
Shape1401.USE = "HAnimJointShape";
Transform1400.children = new MFNode();

Transform1400.children[0] = Shape1401;

HAnimSegment1398.children[1] = Transform1400;

//HAnimSegment visualization line from current <HAnimJoint name='r_thumb1'/> to child <HAnimJoint name='r_thumb2'/>
Shape Shape1402 = createNode("Shape");
LineSet LineSet1403 = createNode("LineSet");
LineSet1403.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1404 = createNode("Coordinate");
Coordinate1404.point = new MFVec3f(new float[-0.1924,0.8472,-0.0534,-0.1951,0.8226,0.0246]);
LineSet1403.coord = Coordinate1404;

ColorRGBA ColorRGBA1405 = createNode("ColorRGBA");
ColorRGBA1405.USE = "HAnimSegmentLineColorRGBA";
LineSet1403.color = ColorRGBA1405;

Shape1402.geometry = LineSet1403;

HAnimSegment1398.children[2] = Shape1402;

HAnimJoint1397.children = new MFNode();

HAnimJoint1397.children[0] = HAnimSegment1398;

HAnimJoint HAnimJoint1406 = createNode("HAnimJoint");
HAnimJoint1406.name = "r_metacarpophalangeal_1";
HAnimJoint1406.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint1406.center = new SFVec3f(new float[-0.1951,0.8226,0.0246]);
HAnimJoint1406.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1406.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1407 = createNode("HAnimSegment");
HAnimSegment1407.name = "r_carpal_proximal_phalanx_1";
HAnimSegment1407.DEF = "hanim_r_carpal_proximal_phalanx_1";
//Visualization sphere for <HAnimJoint name='r_thumb2'/> is placed within <HAnimSegment name='r_carpal_proximal_phalanx_1'/>
TouchSensor TouchSensor1408 = createNode("TouchSensor");
TouchSensor1408.description = "HAnimJoint r_thumb2, HAnimSegment r_carpal_proximal_phalanx_1";
HAnimSegment1407.children = new MFNode();

HAnimSegment1407.children[0] = TouchSensor1408;

Transform Transform1409 = createNode("Transform");
Transform1409.translation = new SFVec3f(new float[-0.1951,0.8226,0.0246]);
Shape Shape1410 = createNode("Shape");
Shape1410.USE = "HAnimJointShape";
Transform1409.children = new MFNode();

Transform1409.children[0] = Shape1410;

HAnimSegment1407.children[1] = Transform1409;

//HAnimSegment visualization line from current <HAnimJoint name='r_thumb2'/> to child <HAnimJoint name='r_thumb3'/>
Shape Shape1411 = createNode("Shape");
LineSet LineSet1412 = createNode("LineSet");
LineSet1412.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1413 = createNode("Coordinate");
Coordinate1413.point = new MFVec3f(new float[-0.1951,0.8226,0.0246,-0.1955,0.8159,0.0464]);
LineSet1412.coord = Coordinate1413;

ColorRGBA ColorRGBA1414 = createNode("ColorRGBA");
ColorRGBA1414.USE = "HAnimSegmentLineColorRGBA";
LineSet1412.color = ColorRGBA1414;

Shape1411.geometry = LineSet1412;

HAnimSegment1407.children[2] = Shape1411;

HAnimJoint1406.children = new MFNode();

HAnimJoint1406.children[0] = HAnimSegment1407;

HAnimJoint HAnimJoint1415 = createNode("HAnimJoint");
HAnimJoint1415.name = "r_carpal_interphalangeal_1";
HAnimJoint1415.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint1415.center = new SFVec3f(new float[-0.1955,0.8159,0.0464]);
HAnimJoint1415.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1415.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1416 = createNode("HAnimSegment");
HAnimSegment1416.name = "r_carpal_distal_phalanx_1";
HAnimSegment1416.DEF = "hanim_r_carpal_distal_phalanx_1";
//Visualization sphere for <HAnimJoint name='r_thumb3'/> is placed within <HAnimSegment name='r_carpal_distal_phalanx_1'/>
TouchSensor TouchSensor1417 = createNode("TouchSensor");
TouchSensor1417.description = "HAnimJoint r_thumb3, HAnimSegment r_carpal_distal_phalanx_1";
HAnimSegment1416.children = new MFNode();

HAnimSegment1416.children[0] = TouchSensor1417;

Transform Transform1418 = createNode("Transform");
Transform1418.translation = new SFVec3f(new float[-0.1955,0.8159,0.0464]);
Shape Shape1419 = createNode("Shape");
Shape1419.USE = "HAnimJointShape";
Transform1418.children = new MFNode();

Transform1418.children[0] = Shape1419;

HAnimSegment1416.children[1] = Transform1418;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_thumb3'/> to <HAnimSite name='r_thumb_distal_tip'/>
Shape Shape1420 = createNode("Shape");
LineSet LineSet1421 = createNode("LineSet");
LineSet1421.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1422 = createNode("Coordinate");
Coordinate1422.point = new MFVec3f(new float[-0.1955,0.8159,0.0464,-0.1869,0.809,0.082]);
LineSet1421.coord = Coordinate1422;

ColorRGBA ColorRGBA1423 = createNode("ColorRGBA");
ColorRGBA1423.USE = "HAnimSiteLineColorRGBA";
LineSet1421.color = ColorRGBA1423;

Shape1420.geometry = LineSet1421;

HAnimSegment1416.children[2] = Shape1420;

HAnimSite HAnimSite1424 = createNode("HAnimSite");
HAnimSite1424.name = "r_carpal_distal_phalanx_1_pt";
HAnimSite1424.DEF = "hanim_r_carpal_distal_phalanx_1_pt";
HAnimSite1424.translation = new SFVec3f(new float[-0.1869,0.809,0.082]);
//HAnimSite visualization shape
TouchSensor TouchSensor1425 = createNode("TouchSensor");
TouchSensor1425.description = "HAnimSite r_thumb_distal_tip";
HAnimSite1424.children = new MFNode();

HAnimSite1424.children[0] = TouchSensor1425;

Shape Shape1426 = createNode("Shape");
Shape1426.USE = "HAnimSiteShape";
HAnimSite1424.children[1] = Shape1426;

HAnimSegment1416.children[3] = HAnimSite1424;

HAnimJoint1415.children = new MFNode();

HAnimJoint1415.children[0] = HAnimSegment1416;

HAnimJoint1406.children[1] = HAnimJoint1415;

HAnimJoint1397.children[1] = HAnimJoint1406;

HAnimJoint1339.children[1] = HAnimJoint1397;

HAnimJoint HAnimJoint1427 = createNode("HAnimJoint");
HAnimJoint1427.name = "r_carpometacarpal_2";
HAnimJoint1427.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint1427.center = new SFVec3f(new float[-0.1983,0.8024,-0.028]);
HAnimJoint1427.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1427.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1428 = createNode("HAnimSegment");
HAnimSegment1428.name = "r_metacarpal_2";
HAnimSegment1428.DEF = "hanim_r_metacarpal_2";
//Visualization sphere for <HAnimJoint name='r_index0'/> is placed within <HAnimSegment name='r_metacarpal_2'/>
TouchSensor TouchSensor1429 = createNode("TouchSensor");
TouchSensor1429.description = "HAnimJoint r_index0, HAnimSegment r_metacarpal_2";
HAnimSegment1428.children = new MFNode();

HAnimSegment1428.children[0] = TouchSensor1429;

Transform Transform1430 = createNode("Transform");
Transform1430.translation = new SFVec3f(new float[-0.1983,0.8024,-0.028]);
Shape Shape1431 = createNode("Shape");
Shape1431.USE = "HAnimJointShape";
Transform1430.children = new MFNode();

Transform1430.children[0] = Shape1431;

HAnimSegment1428.children[1] = Transform1430;

//HAnimSegment visualization line from current <HAnimJoint name='r_index0'/> to child <HAnimJoint name='r_index1'/>
Shape Shape1432 = createNode("Shape");
LineSet LineSet1433 = createNode("LineSet");
LineSet1433.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1434 = createNode("Coordinate");
Coordinate1434.point = new MFVec3f(new float[-0.1983,0.8024,-0.028,-0.1983,0.7815,-0.028]);
LineSet1433.coord = Coordinate1434;

ColorRGBA ColorRGBA1435 = createNode("ColorRGBA");
ColorRGBA1435.USE = "HAnimSegmentLineColorRGBA";
LineSet1433.color = ColorRGBA1435;

Shape1432.geometry = LineSet1433;

HAnimSegment1428.children[2] = Shape1432;

HAnimJoint1427.children = new MFNode();

HAnimJoint1427.children[0] = HAnimSegment1428;

HAnimJoint HAnimJoint1436 = createNode("HAnimJoint");
HAnimJoint1436.name = "r_metacarpophalangeal_2";
HAnimJoint1436.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint1436.center = new SFVec3f(new float[-0.1983,0.7815,-0.028]);
HAnimJoint1436.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1436.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1437 = createNode("HAnimSegment");
HAnimSegment1437.name = "r_carpal_proximal_phalanx_2";
HAnimSegment1437.DEF = "hanim_r_carpal_proximal_phalanx_2";
//Visualization sphere for <HAnimJoint name='r_index1'/> is placed within <HAnimSegment name='r_carpal_proximal_phalanx_2'/>
TouchSensor TouchSensor1438 = createNode("TouchSensor");
TouchSensor1438.description = "HAnimJoint r_index1, HAnimSegment r_carpal_proximal_phalanx_2";
HAnimSegment1437.children = new MFNode();

HAnimSegment1437.children[0] = TouchSensor1438;

Transform Transform1439 = createNode("Transform");
Transform1439.translation = new SFVec3f(new float[-0.1983,0.7815,-0.028]);
Shape Shape1440 = createNode("Shape");
Shape1440.USE = "HAnimJointShape";
Transform1439.children = new MFNode();

Transform1439.children[0] = Shape1440;

HAnimSegment1437.children[1] = Transform1439;

//HAnimSegment visualization line from current <HAnimJoint name='r_index1'/> to child <HAnimJoint name='r_index2'/>
Shape Shape1441 = createNode("Shape");
LineSet LineSet1442 = createNode("LineSet");
LineSet1442.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1443 = createNode("Coordinate");
Coordinate1443.point = new MFVec3f(new float[-0.1983,0.7815,-0.028,-0.2017,0.7363,-0.0248]);
LineSet1442.coord = Coordinate1443;

ColorRGBA ColorRGBA1444 = createNode("ColorRGBA");
ColorRGBA1444.USE = "HAnimSegmentLineColorRGBA";
LineSet1442.color = ColorRGBA1444;

Shape1441.geometry = LineSet1442;

HAnimSegment1437.children[2] = Shape1441;

HAnimJoint1436.children = new MFNode();

HAnimJoint1436.children[0] = HAnimSegment1437;

HAnimJoint HAnimJoint1445 = createNode("HAnimJoint");
HAnimJoint1445.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint1445.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint1445.center = new SFVec3f(new float[-0.2017,0.7363,-0.0248]);
HAnimJoint1445.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1445.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1446 = createNode("HAnimSegment");
HAnimSegment1446.name = "r_carpal_middle_phalanx_2";
HAnimSegment1446.DEF = "hanim_r_carpal_middle_phalanx_2";
//Visualization sphere for <HAnimJoint name='r_index2'/> is placed within <HAnimSegment name='r_carpal_middle_phalanx_2'/>
TouchSensor TouchSensor1447 = createNode("TouchSensor");
TouchSensor1447.description = "HAnimJoint r_index2, HAnimSegment r_carpal_middle_phalanx_2";
HAnimSegment1446.children = new MFNode();

HAnimSegment1446.children[0] = TouchSensor1447;

Transform Transform1448 = createNode("Transform");
Transform1448.translation = new SFVec3f(new float[-0.2017,0.7363,-0.0248]);
Shape Shape1449 = createNode("Shape");
Shape1449.USE = "HAnimJointShape";
Transform1448.children = new MFNode();

Transform1448.children[0] = Shape1449;

HAnimSegment1446.children[1] = Transform1448;

//HAnimSegment visualization line from current <HAnimJoint name='r_index2'/> to child <HAnimJoint name='r_index3'/>
Shape Shape1450 = createNode("Shape");
LineSet LineSet1451 = createNode("LineSet");
LineSet1451.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1452 = createNode("Coordinate");
Coordinate1452.point = new MFVec3f(new float[-0.2017,0.7363,-0.0248,-0.2028,0.7139,-0.0236]);
LineSet1451.coord = Coordinate1452;

ColorRGBA ColorRGBA1453 = createNode("ColorRGBA");
ColorRGBA1453.USE = "HAnimSegmentLineColorRGBA";
LineSet1451.color = ColorRGBA1453;

Shape1450.geometry = LineSet1451;

HAnimSegment1446.children[2] = Shape1450;

HAnimJoint1445.children = new MFNode();

HAnimJoint1445.children[0] = HAnimSegment1446;

HAnimJoint HAnimJoint1454 = createNode("HAnimJoint");
HAnimJoint1454.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint1454.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint1454.center = new SFVec3f(new float[-0.2028,0.7139,-0.0236]);
HAnimJoint1454.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1454.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1455 = createNode("HAnimSegment");
HAnimSegment1455.name = "r_carpal_distal_phalanx_2";
HAnimSegment1455.DEF = "hanim_r_carpal_distal_phalanx_2";
//Visualization sphere for <HAnimJoint name='r_index3'/> is placed within <HAnimSegment name='r_carpal_distal_phalanx_2'/>
TouchSensor TouchSensor1456 = createNode("TouchSensor");
TouchSensor1456.description = "HAnimJoint r_index3, HAnimSegment r_carpal_distal_phalanx_2";
HAnimSegment1455.children = new MFNode();

HAnimSegment1455.children[0] = TouchSensor1456;

Transform Transform1457 = createNode("Transform");
Transform1457.translation = new SFVec3f(new float[-0.2028,0.7139,-0.0236]);
Shape Shape1458 = createNode("Shape");
Shape1458.USE = "HAnimJointShape";
Transform1457.children = new MFNode();

Transform1457.children[0] = Shape1458;

HAnimSegment1455.children[1] = Transform1457;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_index_distal_tip'/>
Shape Shape1459 = createNode("Shape");
LineSet LineSet1460 = createNode("LineSet");
LineSet1460.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1461 = createNode("Coordinate");
Coordinate1461.point = new MFVec3f(new float[-0.2028,0.7139,-0.0236,-0.198,0.6883,-0.018]);
LineSet1460.coord = Coordinate1461;

ColorRGBA ColorRGBA1462 = createNode("ColorRGBA");
ColorRGBA1462.USE = "HAnimSiteLineColorRGBA";
LineSet1460.color = ColorRGBA1462;

Shape1459.geometry = LineSet1460;

HAnimSegment1455.children[2] = Shape1459;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_dactylion_pt'/>
Shape Shape1463 = createNode("Shape");
LineSet LineSet1464 = createNode("LineSet");
LineSet1464.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1465 = createNode("Coordinate");
Coordinate1465.point = new MFVec3f(new float[-0.2028,0.7139,-0.0236,-0.1941,0.6772,-0.0423]);
LineSet1464.coord = Coordinate1465;

ColorRGBA ColorRGBA1466 = createNode("ColorRGBA");
ColorRGBA1466.USE = "HAnimSiteLineColorRGBA";
LineSet1464.color = ColorRGBA1466;

Shape1463.geometry = LineSet1464;

HAnimSegment1455.children[3] = Shape1463;

HAnimSite HAnimSite1467 = createNode("HAnimSite");
HAnimSite1467.name = "r_carpal_distal_phalanx_2_pt";
HAnimSite1467.DEF = "hanim_r_carpal_distal_phalanx_2_pt";
HAnimSite1467.translation = new SFVec3f(new float[-0.198,0.6883,-0.018]);
//HAnimSite visualization shape
TouchSensor TouchSensor1468 = createNode("TouchSensor");
TouchSensor1468.description = "HAnimSite r_index_distal_tip";
HAnimSite1467.children = new MFNode();

HAnimSite1467.children[0] = TouchSensor1468;

Shape Shape1469 = createNode("Shape");
Shape1469.USE = "HAnimSiteShape";
HAnimSite1467.children[1] = Shape1469;

HAnimSegment1455.children[4] = HAnimSite1467;

HAnimSite HAnimSite1470 = createNode("HAnimSite");
HAnimSite1470.name = "r_dactylion_pt";
HAnimSite1470.DEF = "hanim_r_dactylion_pt";
HAnimSite1470.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
//HAnimSite visualization shape
TouchSensor TouchSensor1471 = createNode("TouchSensor");
TouchSensor1471.description = "HAnimSite r_dactylion_pt";
HAnimSite1470.children = new MFNode();

HAnimSite1470.children[0] = TouchSensor1471;

Shape Shape1472 = createNode("Shape");
Shape1472.USE = "HAnimSiteShape";
HAnimSite1470.children[1] = Shape1472;

HAnimSegment1455.children[5] = HAnimSite1470;

HAnimJoint1454.children = new MFNode();

HAnimJoint1454.children[0] = HAnimSegment1455;

HAnimJoint1445.children[1] = HAnimJoint1454;

HAnimJoint1436.children[1] = HAnimJoint1445;

HAnimJoint1427.children[1] = HAnimJoint1436;

HAnimJoint1339.children[2] = HAnimJoint1427;

HAnimJoint HAnimJoint1473 = createNode("HAnimJoint");
HAnimJoint1473.name = "r_carpometacarpal_3";
HAnimJoint1473.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint1473.center = new SFVec3f(new float[-0.1987,0.8029,-0.053]);
HAnimJoint1473.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1473.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1474 = createNode("HAnimSegment");
HAnimSegment1474.name = "r_metacarpal_3";
HAnimSegment1474.DEF = "hanim_r_metacarpal_3";
//Visualization sphere for <HAnimJoint name='r_middle0'/> is placed within <HAnimSegment name='r_metacarpal_3'/>
TouchSensor TouchSensor1475 = createNode("TouchSensor");
TouchSensor1475.description = "HAnimJoint r_middle0, HAnimSegment r_metacarpal_3";
HAnimSegment1474.children = new MFNode();

HAnimSegment1474.children[0] = TouchSensor1475;

Transform Transform1476 = createNode("Transform");
Transform1476.translation = new SFVec3f(new float[-0.1987,0.8029,-0.053]);
Shape Shape1477 = createNode("Shape");
Shape1477.USE = "HAnimJointShape";
Transform1476.children = new MFNode();

Transform1476.children[0] = Shape1477;

HAnimSegment1474.children[1] = Transform1476;

//HAnimSegment visualization line from current <HAnimJoint name='r_middle0'/> to child <HAnimJoint name='r_middle1'/>
Shape Shape1478 = createNode("Shape");
LineSet LineSet1479 = createNode("LineSet");
LineSet1479.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1480 = createNode("Coordinate");
Coordinate1480.point = new MFVec3f(new float[-0.1987,0.8029,-0.053,-0.1987,0.7818,-0.053]);
LineSet1479.coord = Coordinate1480;

ColorRGBA ColorRGBA1481 = createNode("ColorRGBA");
ColorRGBA1481.USE = "HAnimSegmentLineColorRGBA";
LineSet1479.color = ColorRGBA1481;

Shape1478.geometry = LineSet1479;

HAnimSegment1474.children[2] = Shape1478;

HAnimJoint1473.children = new MFNode();

HAnimJoint1473.children[0] = HAnimSegment1474;

HAnimJoint HAnimJoint1482 = createNode("HAnimJoint");
HAnimJoint1482.name = "r_metacarpophalangeal_3";
HAnimJoint1482.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint1482.center = new SFVec3f(new float[-0.1987,0.7818,-0.053]);
HAnimJoint1482.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1482.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1483 = createNode("HAnimSegment");
HAnimSegment1483.name = "r_carpal_proximal_phalanx_3";
HAnimSegment1483.DEF = "hanim_r_carpal_proximal_phalanx_3";
//Visualization sphere for <HAnimJoint name='r_middle1'/> is placed within <HAnimSegment name='r_carpal_proximal_phalanx_3'/>
TouchSensor TouchSensor1484 = createNode("TouchSensor");
TouchSensor1484.description = "HAnimJoint r_middle1, HAnimSegment r_carpal_proximal_phalanx_3";
HAnimSegment1483.children = new MFNode();

HAnimSegment1483.children[0] = TouchSensor1484;

Transform Transform1485 = createNode("Transform");
Transform1485.translation = new SFVec3f(new float[-0.1987,0.7818,-0.053]);
Shape Shape1486 = createNode("Shape");
Shape1486.USE = "HAnimJointShape";
Transform1485.children = new MFNode();

Transform1485.children[0] = Shape1486;

HAnimSegment1483.children[1] = Transform1485;

//HAnimSegment visualization line from current <HAnimJoint name='r_middle1'/> to child <HAnimJoint name='r_middle2'/>
Shape Shape1487 = createNode("Shape");
LineSet LineSet1488 = createNode("LineSet");
LineSet1488.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1489 = createNode("Coordinate");
Coordinate1489.point = new MFVec3f(new float[-0.1987,0.7818,-0.053,-0.2013,0.7273,-0.0503]);
LineSet1488.coord = Coordinate1489;

ColorRGBA ColorRGBA1490 = createNode("ColorRGBA");
ColorRGBA1490.USE = "HAnimSegmentLineColorRGBA";
LineSet1488.color = ColorRGBA1490;

Shape1487.geometry = LineSet1488;

HAnimSegment1483.children[2] = Shape1487;

HAnimJoint1482.children = new MFNode();

HAnimJoint1482.children[0] = HAnimSegment1483;

HAnimJoint HAnimJoint1491 = createNode("HAnimJoint");
HAnimJoint1491.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint1491.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint1491.center = new SFVec3f(new float[-0.2013,0.7273,-0.0503]);
HAnimJoint1491.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1491.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1492 = createNode("HAnimSegment");
HAnimSegment1492.name = "r_carpal_middle_phalanx_3";
HAnimSegment1492.DEF = "hanim_r_carpal_middle_phalanx_3";
//Visualization sphere for <HAnimJoint name='r_middle2'/> is placed within <HAnimSegment name='r_carpal_middle_phalanx_3'/>
TouchSensor TouchSensor1493 = createNode("TouchSensor");
TouchSensor1493.description = "HAnimJoint r_middle2, HAnimSegment r_carpal_middle_phalanx_3";
HAnimSegment1492.children = new MFNode();

HAnimSegment1492.children[0] = TouchSensor1493;

Transform Transform1494 = createNode("Transform");
Transform1494.translation = new SFVec3f(new float[-0.2013,0.7273,-0.0503]);
Shape Shape1495 = createNode("Shape");
Shape1495.USE = "HAnimJointShape";
Transform1494.children = new MFNode();

Transform1494.children[0] = Shape1495;

HAnimSegment1492.children[1] = Transform1494;

//HAnimSegment visualization line from current <HAnimJoint name='r_middle2'/> to child <HAnimJoint name='r_middle3'/>
Shape Shape1496 = createNode("Shape");
LineSet LineSet1497 = createNode("LineSet");
LineSet1497.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1498 = createNode("Coordinate");
Coordinate1498.point = new MFVec3f(new float[-0.2013,0.7273,-0.0503,-0.2026,0.7011,-0.0494]);
LineSet1497.coord = Coordinate1498;

ColorRGBA ColorRGBA1499 = createNode("ColorRGBA");
ColorRGBA1499.USE = "HAnimSegmentLineColorRGBA";
LineSet1497.color = ColorRGBA1499;

Shape1496.geometry = LineSet1497;

HAnimSegment1492.children[2] = Shape1496;

HAnimJoint1491.children = new MFNode();

HAnimJoint1491.children[0] = HAnimSegment1492;

HAnimJoint HAnimJoint1500 = createNode("HAnimJoint");
HAnimJoint1500.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint1500.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint1500.center = new SFVec3f(new float[-0.2026,0.7011,-0.0494]);
HAnimJoint1500.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1500.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1501 = createNode("HAnimSegment");
HAnimSegment1501.name = "r_carpal_distal_phalanx_3";
HAnimSegment1501.DEF = "hanim_r_carpal_distal_phalanx_3";
//Visualization sphere for <HAnimJoint name='r_middle3'/> is placed within <HAnimSegment name='r_carpal_distal_phalanx_3'/>
TouchSensor TouchSensor1502 = createNode("TouchSensor");
TouchSensor1502.description = "HAnimJoint r_middle3, HAnimSegment r_carpal_distal_phalanx_3";
HAnimSegment1501.children = new MFNode();

HAnimSegment1501.children[0] = TouchSensor1502;

Transform Transform1503 = createNode("Transform");
Transform1503.translation = new SFVec3f(new float[-0.2026,0.7011,-0.0494]);
Shape Shape1504 = createNode("Shape");
Shape1504.USE = "HAnimJointShape";
Transform1503.children = new MFNode();

Transform1503.children[0] = Shape1504;

HAnimSegment1501.children[1] = Transform1503;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_middle3'/> to <HAnimSite name='r_middle_distal_tip'/>
Shape Shape1505 = createNode("Shape");
LineSet LineSet1506 = createNode("LineSet");
LineSet1506.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1507 = createNode("Coordinate");
Coordinate1507.point = new MFVec3f(new float[-0.2026,0.7011,-0.0494,-0.1969,0.6758,-0.0427]);
LineSet1506.coord = Coordinate1507;

ColorRGBA ColorRGBA1508 = createNode("ColorRGBA");
ColorRGBA1508.USE = "HAnimSiteLineColorRGBA";
LineSet1506.color = ColorRGBA1508;

Shape1505.geometry = LineSet1506;

HAnimSegment1501.children[2] = Shape1505;

HAnimSite HAnimSite1509 = createNode("HAnimSite");
HAnimSite1509.name = "r_carpal_distal_phalanx_3_pt";
HAnimSite1509.DEF = "hanim_r_carpal_distal_phalanx_3_pt";
HAnimSite1509.translation = new SFVec3f(new float[-0.1969,0.6758,-0.0427]);
//HAnimSite visualization shape
TouchSensor TouchSensor1510 = createNode("TouchSensor");
TouchSensor1510.description = "HAnimSite r_middle_distal_tip";
HAnimSite1509.children = new MFNode();

HAnimSite1509.children[0] = TouchSensor1510;

Shape Shape1511 = createNode("Shape");
Shape1511.USE = "HAnimSiteShape";
HAnimSite1509.children[1] = Shape1511;

HAnimSegment1501.children[3] = HAnimSite1509;

HAnimJoint1500.children = new MFNode();

HAnimJoint1500.children[0] = HAnimSegment1501;

HAnimJoint1491.children[1] = HAnimJoint1500;

HAnimJoint1482.children[1] = HAnimJoint1491;

HAnimJoint1473.children[1] = HAnimJoint1482;

HAnimJoint1339.children[3] = HAnimJoint1473;

HAnimJoint HAnimJoint1512 = createNode("HAnimJoint");
HAnimJoint1512.name = "r_carpometacarpal_4";
HAnimJoint1512.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint1512.center = new SFVec3f(new float[-0.1956,0.8019,-0.0794]);
HAnimJoint1512.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1512.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1513 = createNode("HAnimSegment");
HAnimSegment1513.name = "r_metacarpal_4";
HAnimSegment1513.DEF = "hanim_r_metacarpal_4";
//Visualization sphere for <HAnimJoint name='r_ring0'/> is placed within <HAnimSegment name='r_metacarpal_4'/>
TouchSensor TouchSensor1514 = createNode("TouchSensor");
TouchSensor1514.description = "HAnimJoint r_ring0, HAnimSegment r_metacarpal_4";
HAnimSegment1513.children = new MFNode();

HAnimSegment1513.children[0] = TouchSensor1514;

Transform Transform1515 = createNode("Transform");
Transform1515.translation = new SFVec3f(new float[-0.1956,0.8019,-0.0794]);
Shape Shape1516 = createNode("Shape");
Shape1516.USE = "HAnimJointShape";
Transform1515.children = new MFNode();

Transform1515.children[0] = Shape1516;

HAnimSegment1513.children[1] = Transform1515;

//HAnimSegment visualization line from current <HAnimJoint name='r_ring0'/> to child <HAnimJoint name='r_ring1'/>
Shape Shape1517 = createNode("Shape");
LineSet LineSet1518 = createNode("LineSet");
LineSet1518.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1519 = createNode("Coordinate");
Coordinate1519.point = new MFVec3f(new float[-0.1956,0.8019,-0.0794,-0.1956,0.7815,-0.0794]);
LineSet1518.coord = Coordinate1519;

ColorRGBA ColorRGBA1520 = createNode("ColorRGBA");
ColorRGBA1520.USE = "HAnimSegmentLineColorRGBA";
LineSet1518.color = ColorRGBA1520;

Shape1517.geometry = LineSet1518;

HAnimSegment1513.children[2] = Shape1517;

HAnimJoint1512.children = new MFNode();

HAnimJoint1512.children[0] = HAnimSegment1513;

HAnimJoint HAnimJoint1521 = createNode("HAnimJoint");
HAnimJoint1521.name = "r_metacarpophalangeal_4";
HAnimJoint1521.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint1521.center = new SFVec3f(new float[-0.1956,0.7815,-0.0794]);
HAnimJoint1521.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1521.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1522 = createNode("HAnimSegment");
HAnimSegment1522.name = "r_carpal_proximal_phalanx_4";
HAnimSegment1522.DEF = "hanim_r_carpal_proximal_phalanx_4";
//Visualization sphere for <HAnimJoint name='r_ring1'/> is placed within <HAnimSegment name='r_carpal_proximal_phalanx_4'/>
TouchSensor TouchSensor1523 = createNode("TouchSensor");
TouchSensor1523.description = "HAnimJoint r_ring1, HAnimSegment r_carpal_proximal_phalanx_4";
HAnimSegment1522.children = new MFNode();

HAnimSegment1522.children[0] = TouchSensor1523;

Transform Transform1524 = createNode("Transform");
Transform1524.translation = new SFVec3f(new float[-0.1956,0.7815,-0.0794]);
Shape Shape1525 = createNode("Shape");
Shape1525.USE = "HAnimJointShape";
Transform1524.children = new MFNode();

Transform1524.children[0] = Shape1525;

HAnimSegment1522.children[1] = Transform1524;

//HAnimSegment visualization line from current <HAnimJoint name='r_ring1'/> to child <HAnimJoint name='r_ring2'/>
Shape Shape1526 = createNode("Shape");
LineSet LineSet1527 = createNode("LineSet");
LineSet1527.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1528 = createNode("Coordinate");
Coordinate1528.point = new MFVec3f(new float[-0.1956,0.7815,-0.0794,-0.1973,0.7287,-0.0777]);
LineSet1527.coord = Coordinate1528;

ColorRGBA ColorRGBA1529 = createNode("ColorRGBA");
ColorRGBA1529.USE = "HAnimSegmentLineColorRGBA";
LineSet1527.color = ColorRGBA1529;

Shape1526.geometry = LineSet1527;

HAnimSegment1522.children[2] = Shape1526;

HAnimJoint1521.children = new MFNode();

HAnimJoint1521.children[0] = HAnimSegment1522;

HAnimJoint HAnimJoint1530 = createNode("HAnimJoint");
HAnimJoint1530.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint1530.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint1530.center = new SFVec3f(new float[-0.1973,0.7287,-0.0777]);
HAnimJoint1530.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1530.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1531 = createNode("HAnimSegment");
HAnimSegment1531.name = "r_carpal_middle_phalanx_4";
HAnimSegment1531.DEF = "hanim_r_carpal_middle_phalanx_4";
//Visualization sphere for <HAnimJoint name='r_ring2'/> is placed within <HAnimSegment name='r_carpal_middle_phalanx_4'/>
TouchSensor TouchSensor1532 = createNode("TouchSensor");
TouchSensor1532.description = "HAnimJoint r_ring2, HAnimSegment r_carpal_middle_phalanx_4";
HAnimSegment1531.children = new MFNode();

HAnimSegment1531.children[0] = TouchSensor1532;

Transform Transform1533 = createNode("Transform");
Transform1533.translation = new SFVec3f(new float[-0.1973,0.7287,-0.0777]);
Shape Shape1534 = createNode("Shape");
Shape1534.USE = "HAnimJointShape";
Transform1533.children = new MFNode();

Transform1533.children[0] = Shape1534;

HAnimSegment1531.children[1] = Transform1533;

//HAnimSegment visualization line from current <HAnimJoint name='r_ring2'/> to child <HAnimJoint name='r_ring3'/>
Shape Shape1535 = createNode("Shape");
LineSet LineSet1536 = createNode("LineSet");
LineSet1536.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1537 = createNode("Coordinate");
Coordinate1537.point = new MFVec3f(new float[-0.1973,0.7287,-0.0777,-0.1983,0.7045,-0.0767]);
LineSet1536.coord = Coordinate1537;

ColorRGBA ColorRGBA1538 = createNode("ColorRGBA");
ColorRGBA1538.USE = "HAnimSegmentLineColorRGBA";
LineSet1536.color = ColorRGBA1538;

Shape1535.geometry = LineSet1536;

HAnimSegment1531.children[2] = Shape1535;

HAnimJoint1530.children = new MFNode();

HAnimJoint1530.children[0] = HAnimSegment1531;

HAnimJoint HAnimJoint1539 = createNode("HAnimJoint");
HAnimJoint1539.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint1539.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint1539.center = new SFVec3f(new float[-0.1983,0.7045,-0.0767]);
HAnimJoint1539.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1539.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1540 = createNode("HAnimSegment");
HAnimSegment1540.name = "r_carpal_distal_phalanx_4";
HAnimSegment1540.DEF = "hanim_r_carpal_distal_phalanx_4";
//Visualization sphere for <HAnimJoint name='r_ring3'/> is placed within <HAnimSegment name='r_carpal_distal_phalanx_4'/>
TouchSensor TouchSensor1541 = createNode("TouchSensor");
TouchSensor1541.description = "HAnimJoint r_ring3, HAnimSegment r_carpal_distal_phalanx_4";
HAnimSegment1540.children = new MFNode();

HAnimSegment1540.children[0] = TouchSensor1541;

Transform Transform1542 = createNode("Transform");
Transform1542.translation = new SFVec3f(new float[-0.1983,0.7045,-0.0767]);
Shape Shape1543 = createNode("Shape");
Shape1543.USE = "HAnimJointShape";
Transform1542.children = new MFNode();

Transform1542.children[0] = Shape1543;

HAnimSegment1540.children[1] = Transform1542;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ring3'/> to <HAnimSite name='r_ring_distal_tip'/>
Shape Shape1544 = createNode("Shape");
LineSet LineSet1545 = createNode("LineSet");
LineSet1545.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1546 = createNode("Coordinate");
Coordinate1546.point = new MFVec3f(new float[-0.1983,0.7045,-0.0767,-0.1934,0.6778,-0.0693]);
LineSet1545.coord = Coordinate1546;

ColorRGBA ColorRGBA1547 = createNode("ColorRGBA");
ColorRGBA1547.USE = "HAnimSiteLineColorRGBA";
LineSet1545.color = ColorRGBA1547;

Shape1544.geometry = LineSet1545;

HAnimSegment1540.children[2] = Shape1544;

HAnimSite HAnimSite1548 = createNode("HAnimSite");
HAnimSite1548.name = "r_carpal_distal_phalanx_4_pt";
HAnimSite1548.DEF = "hanim_r_carpal_distal_phalanx_4_pt";
HAnimSite1548.translation = new SFVec3f(new float[-0.1934,0.6778,-0.0693]);
//HAnimSite visualization shape
TouchSensor TouchSensor1549 = createNode("TouchSensor");
TouchSensor1549.description = "HAnimSite r_ring_distal_tip";
HAnimSite1548.children = new MFNode();

HAnimSite1548.children[0] = TouchSensor1549;

Shape Shape1550 = createNode("Shape");
Shape1550.USE = "HAnimSiteShape";
HAnimSite1548.children[1] = Shape1550;

HAnimSegment1540.children[3] = HAnimSite1548;

HAnimJoint1539.children = new MFNode();

HAnimJoint1539.children[0] = HAnimSegment1540;

HAnimJoint1530.children[1] = HAnimJoint1539;

HAnimJoint1521.children[1] = HAnimJoint1530;

HAnimJoint1512.children[1] = HAnimJoint1521;

HAnimJoint1339.children[4] = HAnimJoint1512;

HAnimJoint HAnimJoint1551 = createNode("HAnimJoint");
HAnimJoint1551.name = "r_carpometacarpal_5";
HAnimJoint1551.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint1551.center = new SFVec3f(new float[-0.1925,0.8066,-0.1036]);
HAnimJoint1551.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1551.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1552 = createNode("HAnimSegment");
HAnimSegment1552.name = "r_metacarpal_5";
HAnimSegment1552.DEF = "hanim_r_metacarpal_5";
//Visualization sphere for <HAnimJoint name='r_pinky0'/> is placed within <HAnimSegment name='r_metacarpal_5'/>
TouchSensor TouchSensor1553 = createNode("TouchSensor");
TouchSensor1553.description = "HAnimJoint r_pinky0, HAnimSegment r_metacarpal_5";
HAnimSegment1552.children = new MFNode();

HAnimSegment1552.children[0] = TouchSensor1553;

Transform Transform1554 = createNode("Transform");
Transform1554.translation = new SFVec3f(new float[-0.1925,0.8066,-0.1036]);
Shape Shape1555 = createNode("Shape");
Shape1555.USE = "HAnimJointShape";
Transform1554.children = new MFNode();

Transform1554.children[0] = Shape1555;

HAnimSegment1552.children[1] = Transform1554;

//HAnimSegment visualization line from current <HAnimJoint name='r_pinky0'/> to child <HAnimJoint name='r_pinky1'/>
Shape Shape1556 = createNode("Shape");
LineSet LineSet1557 = createNode("LineSet");
LineSet1557.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1558 = createNode("Coordinate");
Coordinate1558.point = new MFVec3f(new float[-0.1925,0.8066,-0.1036,-0.1925,0.7866,-0.1036]);
LineSet1557.coord = Coordinate1558;

ColorRGBA ColorRGBA1559 = createNode("ColorRGBA");
ColorRGBA1559.USE = "HAnimSegmentLineColorRGBA";
LineSet1557.color = ColorRGBA1559;

Shape1556.geometry = LineSet1557;

HAnimSegment1552.children[2] = Shape1556;

HAnimJoint1551.children = new MFNode();

HAnimJoint1551.children[0] = HAnimSegment1552;

HAnimJoint HAnimJoint1560 = createNode("HAnimJoint");
HAnimJoint1560.name = "r_metacarpophalangeal_5";
HAnimJoint1560.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint1560.center = new SFVec3f(new float[-0.1925,0.7866,-0.1036]);
HAnimJoint1560.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1560.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1561 = createNode("HAnimSegment");
HAnimSegment1561.name = "r_carpal_proximal_phalanx_5";
HAnimSegment1561.DEF = "hanim_r_carpal_proximal_phalanx_5";
//Visualization sphere for <HAnimJoint name='r_pinky1'/> is placed within <HAnimSegment name='r_carpal_proximal_phalanx_5'/>
TouchSensor TouchSensor1562 = createNode("TouchSensor");
TouchSensor1562.description = "HAnimJoint r_pinky1, HAnimSegment r_carpal_proximal_phalanx_5";
HAnimSegment1561.children = new MFNode();

HAnimSegment1561.children[0] = TouchSensor1562;

Transform Transform1563 = createNode("Transform");
Transform1563.translation = new SFVec3f(new float[-0.1925,0.7866,-0.1036]);
Shape Shape1564 = createNode("Shape");
Shape1564.USE = "HAnimJointShape";
Transform1563.children = new MFNode();

Transform1563.children[0] = Shape1564;

HAnimSegment1561.children[1] = Transform1563;

//HAnimSegment visualization line from current <HAnimJoint name='r_pinky1'/> to child <HAnimJoint name='r_pinky2'/>
Shape Shape1565 = createNode("Shape");
LineSet LineSet1566 = createNode("LineSet");
LineSet1566.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1567 = createNode("Coordinate");
Coordinate1567.point = new MFVec3f(new float[-0.1925,0.7866,-0.1036,-0.1938,0.7452,-0.1024]);
LineSet1566.coord = Coordinate1567;

ColorRGBA ColorRGBA1568 = createNode("ColorRGBA");
ColorRGBA1568.USE = "HAnimSegmentLineColorRGBA";
LineSet1566.color = ColorRGBA1568;

Shape1565.geometry = LineSet1566;

HAnimSegment1561.children[2] = Shape1565;

HAnimJoint1560.children = new MFNode();

HAnimJoint1560.children[0] = HAnimSegment1561;

HAnimJoint HAnimJoint1569 = createNode("HAnimJoint");
HAnimJoint1569.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint1569.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint1569.center = new SFVec3f(new float[-0.1938,0.7452,-0.1024]);
HAnimJoint1569.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1569.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1570 = createNode("HAnimSegment");
HAnimSegment1570.name = "r_carpal_middle_phalanx_5";
HAnimSegment1570.DEF = "hanim_r_carpal_middle_phalanx_5";
//Visualization sphere for <HAnimJoint name='r_pinky2'/> is placed within <HAnimSegment name='r_carpal_middle_phalanx_5'/>
TouchSensor TouchSensor1571 = createNode("TouchSensor");
TouchSensor1571.description = "HAnimJoint r_pinky2, HAnimSegment r_carpal_middle_phalanx_5";
HAnimSegment1570.children = new MFNode();

HAnimSegment1570.children[0] = TouchSensor1571;

Transform Transform1572 = createNode("Transform");
Transform1572.translation = new SFVec3f(new float[-0.1938,0.7452,-0.1024]);
Shape Shape1573 = createNode("Shape");
Shape1573.USE = "HAnimJointShape";
Transform1572.children = new MFNode();

Transform1572.children[0] = Shape1573;

HAnimSegment1570.children[1] = Transform1572;

//HAnimSegment visualization line from current <HAnimJoint name='r_pinky2'/> to child <HAnimJoint name='r_pinky3'/>
Shape Shape1574 = createNode("Shape");
LineSet LineSet1575 = createNode("LineSet");
LineSet1575.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1576 = createNode("Coordinate");
Coordinate1576.point = new MFVec3f(new float[-0.1938,0.7452,-0.1024,-0.1948,0.7277,-0.1017]);
LineSet1575.coord = Coordinate1576;

ColorRGBA ColorRGBA1577 = createNode("ColorRGBA");
ColorRGBA1577.USE = "HAnimSegmentLineColorRGBA";
LineSet1575.color = ColorRGBA1577;

Shape1574.geometry = LineSet1575;

HAnimSegment1570.children[2] = Shape1574;

HAnimJoint1569.children = new MFNode();

HAnimJoint1569.children[0] = HAnimSegment1570;

HAnimJoint HAnimJoint1578 = createNode("HAnimJoint");
HAnimJoint1578.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint1578.DEF = "hanim_r_carpal_distal_interphalangeal_5";
HAnimJoint1578.center = new SFVec3f(new float[-0.1948,0.7277,-0.1017]);
HAnimJoint1578.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1578.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1579 = createNode("HAnimSegment");
HAnimSegment1579.name = "r_carpal_distal_phalanx_5";
HAnimSegment1579.DEF = "hanim_r_carpal_distal_phalanx_5";
//Visualization sphere for <HAnimJoint name='r_pinky3'/> is placed within <HAnimSegment name='r_carpal_distal_phalanx_5'/>
TouchSensor TouchSensor1580 = createNode("TouchSensor");
TouchSensor1580.description = "HAnimJoint r_pinky3, HAnimSegment r_carpal_distal_phalanx_5";
HAnimSegment1579.children = new MFNode();

HAnimSegment1579.children[0] = TouchSensor1580;

Transform Transform1581 = createNode("Transform");
Transform1581.translation = new SFVec3f(new float[-0.1948,0.7277,-0.1017]);
Shape Shape1582 = createNode("Shape");
Shape1582.USE = "HAnimJointShape";
Transform1581.children = new MFNode();

Transform1581.children[0] = Shape1582;

HAnimSegment1579.children[1] = Transform1581;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_pinky3'/> to <HAnimSite name='r_pinky_distal_tip'/>
Shape Shape1583 = createNode("Shape");
LineSet LineSet1584 = createNode("LineSet");
LineSet1584.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1585 = createNode("Coordinate");
Coordinate1585.point = new MFVec3f(new float[-0.1948,0.7277,-0.1017,-0.1938,0.7035,-0.0949]);
LineSet1584.coord = Coordinate1585;

ColorRGBA ColorRGBA1586 = createNode("ColorRGBA");
ColorRGBA1586.USE = "HAnimSiteLineColorRGBA";
LineSet1584.color = ColorRGBA1586;

Shape1583.geometry = LineSet1584;

HAnimSegment1579.children[2] = Shape1583;

HAnimSite HAnimSite1587 = createNode("HAnimSite");
HAnimSite1587.name = "r_carpal_distal_phalanx_5_pt";
HAnimSite1587.DEF = "hanim_r_carpal_distal_phalanx_5_pt";
HAnimSite1587.translation = new SFVec3f(new float[-0.1938,0.7035,-0.0949]);
//HAnimSite visualization shape
TouchSensor TouchSensor1588 = createNode("TouchSensor");
TouchSensor1588.description = "HAnimSite r_pinky_distal_tip";
HAnimSite1587.children = new MFNode();

HAnimSite1587.children[0] = TouchSensor1588;

Shape Shape1589 = createNode("Shape");
Shape1589.USE = "HAnimSiteShape";
HAnimSite1587.children[1] = Shape1589;

HAnimSegment1579.children[3] = HAnimSite1587;

HAnimJoint1578.children = new MFNode();

HAnimJoint1578.children[0] = HAnimSegment1579;

HAnimJoint1569.children[1] = HAnimJoint1578;

HAnimJoint1560.children[1] = HAnimJoint1569;

HAnimJoint1551.children[1] = HAnimJoint1560;

HAnimJoint1339.children[5] = HAnimJoint1551;

HAnimJoint1302.children[1] = HAnimJoint1339;

HAnimJoint1286.children[1] = HAnimJoint1302;

HAnimJoint1277.children[1] = HAnimJoint1286;

HAnimJoint1240.children[1] = HAnimJoint1277;

HAnimJoint602.children[3] = HAnimJoint1240;

HAnimJoint593.children[1] = HAnimJoint602;

HAnimJoint584.children[1] = HAnimJoint593;

HAnimJoint575.children[1] = HAnimJoint584;

HAnimJoint566.children[1] = HAnimJoint575;

HAnimJoint557.children[1] = HAnimJoint566;

HAnimJoint548.children[1] = HAnimJoint557;

HAnimJoint539.children[1] = HAnimJoint548;

HAnimJoint516.children[1] = HAnimJoint539;

HAnimJoint500.children[1] = HAnimJoint516;

HAnimJoint491.children[1] = HAnimJoint500;

HAnimJoint482.children[1] = HAnimJoint491;

HAnimJoint473.children[1] = HAnimJoint482;

HAnimJoint443.children[1] = HAnimJoint473;

HAnimJoint434.children[1] = HAnimJoint443;

HAnimJoint425.children[1] = HAnimJoint434;

HAnimJoint402.children[1] = HAnimJoint425;

HAnimJoint52.children[2] = HAnimJoint402;

HAnimHumanoid43.joints = new MFNode();

HAnimHumanoid43.joints[0] = HAnimJoint52;

HAnimSite HAnimSite1590 = createNode("HAnimSite");
HAnimSite1590.name = "l_inclined_view";
HAnimSite1590.DEF = "hanim_l_inclined_view";
HAnimSite1590.rotation = new SFRotation(new float[-0.113,0.993,0.0347,0.671]);
HAnimSite1590.translation = new SFVec3f(new float[1.62,1.05,2.06]);
//HAnimSite visualization shape
TouchSensor TouchSensor1591 = createNode("TouchSensor");
TouchSensor1591.description = "HAnimSite l_inclined_view";
HAnimSite1590.children = new MFNode();

HAnimSite1590.children[0] = TouchSensor1591;

Shape Shape1592 = createNode("Shape");
Shape1592.USE = "HAnimSiteShape";
HAnimSite1590.children[1] = Shape1592;

Viewpoint Viewpoint1593 = createNode("Viewpoint");
Viewpoint1593.DEF = "hanim_l_inclined_viewpoint";
Viewpoint1593.description = "left inclined";
Viewpoint1593.position = new SFVec3f(new float[0,0,0]);
HAnimSite1590.children[2] = Viewpoint1593;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1594 = createNode("Anchor");
Anchor1594.description = "HAnimSite hanim_l_inclined_view Viewpoint";
Anchor1594.url = new MFString(new java.lang.String["#hanim_l_inclined_viewpoint"]);
LOD LOD1595 = createNode("LOD");
LOD1595.forceTransitions = True;
LOD1595.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1596 = createNode("WorldInfo");
WorldInfo1596.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1595.children = new MFNode();

LOD1595.children[0] = WorldInfo1596;

Shape Shape1597 = createNode("Shape");
Shape1597.USE = "HAnimSiteViewpointShape";
LOD1595.children[1] = Shape1597;

Anchor1594.children = new MFNode();

Anchor1594.children[0] = LOD1595;

HAnimSite1590.children[3] = Anchor1594;

HAnimHumanoid43.viewpoints[1] = HAnimSite1590;

HAnimSite HAnimSite1598 = createNode("HAnimSite");
HAnimSite1598.name = "r_inclined_view";
HAnimSite1598.DEF = "hanim_r_inclined_view";
HAnimSite1598.rotation = new SFRotation(new float[-0.113,-0.993,0.0347,0.671]);
HAnimSite1598.translation = new SFVec3f(new float[-1.62,1.05,2.06]);
//HAnimSite visualization shape
TouchSensor TouchSensor1599 = createNode("TouchSensor");
TouchSensor1599.description = "HAnimSite r_inclined_view";
HAnimSite1598.children = new MFNode();

HAnimSite1598.children[0] = TouchSensor1599;

Shape Shape1600 = createNode("Shape");
Shape1600.USE = "HAnimSiteShape";
HAnimSite1598.children[1] = Shape1600;

Viewpoint Viewpoint1601 = createNode("Viewpoint");
Viewpoint1601.DEF = "hanim_r_inclined_viewpoint";
Viewpoint1601.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1601.description = "right inclined";
Viewpoint1601.position = new SFVec3f(new float[0,0,0]);
HAnimSite1598.children[2] = Viewpoint1601;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1602 = createNode("Anchor");
Anchor1602.description = "HAnimSite hanim_r_inclined_view Viewpoint";
Anchor1602.url = new MFString(new java.lang.String["#hanim_r_inclined_viewpoint"]);
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

HAnimSite1598.children[3] = Anchor1602;

HAnimHumanoid43.viewpoints[2] = HAnimSite1598;

HAnimSite HAnimSite1606 = createNode("HAnimSite");
HAnimSite1606.name = "front_view";
HAnimSite1606.DEF = "hanim_front_view";
HAnimSite1606.translation = new SFVec3f(new float[0,0.85,2.58]);
//HAnimSite visualization shape
TouchSensor TouchSensor1607 = createNode("TouchSensor");
TouchSensor1607.description = "HAnimSite front_view";
HAnimSite1606.children = new MFNode();

HAnimSite1606.children[0] = TouchSensor1607;

Shape Shape1608 = createNode("Shape");
Shape1608.USE = "HAnimSiteShape";
HAnimSite1606.children[1] = Shape1608;

Viewpoint Viewpoint1609 = createNode("Viewpoint");
Viewpoint1609.DEF = "hanim_front_viewpoint";
Viewpoint1609.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1609.description = "front";
Viewpoint1609.position = new SFVec3f(new float[0,0,0]);
HAnimSite1606.children[2] = Viewpoint1609;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1610 = createNode("Anchor");
Anchor1610.description = "HAnimSite hanim_front_view Viewpoint";
Anchor1610.url = new MFString(new java.lang.String["#hanim_front_viewpoint"]);
LOD LOD1611 = createNode("LOD");
LOD1611.forceTransitions = True;
LOD1611.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1612 = createNode("WorldInfo");
WorldInfo1612.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1611.children = new MFNode();

LOD1611.children[0] = WorldInfo1612;

Shape Shape1613 = createNode("Shape");
Shape1613.USE = "HAnimSiteViewpointShape";
LOD1611.children[1] = Shape1613;

Anchor1610.children = new MFNode();

Anchor1610.children[0] = LOD1611;

HAnimSite1606.children[3] = Anchor1610;

HAnimHumanoid43.viewpoints[3] = HAnimSite1606;

HAnimSite HAnimSite1614 = createNode("HAnimSite");
HAnimSite1614.name = "back_view";
HAnimSite1614.DEF = "hanim_back_view";
HAnimSite1614.rotation = new SFRotation(new float[0,1,0,3.14]);
HAnimSite1614.translation = new SFVec3f(new float[0,0.85,-2.58]);
//HAnimSite visualization shape
TouchSensor TouchSensor1615 = createNode("TouchSensor");
TouchSensor1615.description = "HAnimSite back_view";
HAnimSite1614.children = new MFNode();

HAnimSite1614.children[0] = TouchSensor1615;

Shape Shape1616 = createNode("Shape");
Shape1616.USE = "HAnimSiteShape";
HAnimSite1614.children[1] = Shape1616;

Viewpoint Viewpoint1617 = createNode("Viewpoint");
Viewpoint1617.DEF = "hanim_back_viewpoint";
Viewpoint1617.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1617.description = "back";
Viewpoint1617.position = new SFVec3f(new float[0,0,0]);
HAnimSite1614.children[2] = Viewpoint1617;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1618 = createNode("Anchor");
Anchor1618.description = "HAnimSite hanim_back_view Viewpoint";
Anchor1618.url = new MFString(new java.lang.String["#hanim_back_viewpoint"]);
LOD LOD1619 = createNode("LOD");
LOD1619.forceTransitions = True;
LOD1619.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1620 = createNode("WorldInfo");
WorldInfo1620.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1619.children = new MFNode();

LOD1619.children[0] = WorldInfo1620;

Shape Shape1621 = createNode("Shape");
Shape1621.USE = "HAnimSiteViewpointShape";
LOD1619.children[1] = Shape1621;

Anchor1618.children = new MFNode();

Anchor1618.children[0] = LOD1619;

HAnimSite1614.children[3] = Anchor1618;

HAnimHumanoid43.viewpoints[4] = HAnimSite1614;

HAnimSite HAnimSite1622 = createNode("HAnimSite");
HAnimSite1622.name = "l_side_view";
HAnimSite1622.DEF = "hanim_l_side_view";
HAnimSite1622.rotation = new SFRotation(new float[0,1,0,1.5708]);
HAnimSite1622.translation = new SFVec3f(new float[2.6,0.854,0]);
//HAnimSite visualization shape
TouchSensor TouchSensor1623 = createNode("TouchSensor");
TouchSensor1623.description = "HAnimSite l_side_view";
HAnimSite1622.children = new MFNode();

HAnimSite1622.children[0] = TouchSensor1623;

Shape Shape1624 = createNode("Shape");
Shape1624.USE = "HAnimSiteShape";
HAnimSite1622.children[1] = Shape1624;

Viewpoint Viewpoint1625 = createNode("Viewpoint");
Viewpoint1625.DEF = "hanim_l_side_viewpoint";
Viewpoint1625.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1625.description = "left side";
Viewpoint1625.position = new SFVec3f(new float[0,0,0]);
HAnimSite1622.children[2] = Viewpoint1625;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1626 = createNode("Anchor");
Anchor1626.description = "HAnimSite hanim_l_side_view Viewpoint";
Anchor1626.url = new MFString(new java.lang.String["#hanim_l_side_viewpoint"]);
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

HAnimSite1622.children[3] = Anchor1626;

HAnimHumanoid43.viewpoints[5] = HAnimSite1622;

HAnimSite HAnimSite1630 = createNode("HAnimSite");
HAnimSite1630.name = "Top_view";
HAnimSite1630.DEF = "hanim_Top_view";
HAnimSite1630.rotation = new SFRotation(new float[1,0,0,-1.57]);
HAnimSite1630.translation = new SFVec3f(new float[0,3.5,0]);
//HAnimSite visualization shape
TouchSensor TouchSensor1631 = createNode("TouchSensor");
TouchSensor1631.description = "HAnimSite Top_view";
HAnimSite1630.children = new MFNode();

HAnimSite1630.children[0] = TouchSensor1631;

Shape Shape1632 = createNode("Shape");
Shape1632.USE = "HAnimSiteShape";
HAnimSite1630.children[1] = Shape1632;

Viewpoint Viewpoint1633 = createNode("Viewpoint");
Viewpoint1633.DEF = "hanim_Top_viewpoint";
Viewpoint1633.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1633.description = "Top";
Viewpoint1633.position = new SFVec3f(new float[0,0,0]);
HAnimSite1630.children[2] = Viewpoint1633;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1634 = createNode("Anchor");
Anchor1634.description = "HAnimSite hanim_Top_view Viewpoint";
Anchor1634.url = new MFString(new java.lang.String["#hanim_Top_viewpoint"]);
LOD LOD1635 = createNode("LOD");
LOD1635.forceTransitions = True;
LOD1635.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1636 = createNode("WorldInfo");
WorldInfo1636.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1635.children = new MFNode();

LOD1635.children[0] = WorldInfo1636;

Shape Shape1637 = createNode("Shape");
Shape1637.USE = "HAnimSiteViewpointShape";
LOD1635.children[1] = Shape1637;

Anchor1634.children = new MFNode();

Anchor1634.children[0] = LOD1635;

HAnimSite1630.children[3] = Anchor1634;

HAnimHumanoid43.viewpoints[6] = HAnimSite1630;

HAnimSite HAnimSite1638 = createNode("HAnimSite");
HAnimSite1638.name = "front_close_view";
HAnimSite1638.DEF = "hanim_front_close_view";
HAnimSite1638.translation = new SFVec3f(new float[0,0.854,1.575]);
//HAnimSite visualization shape
TouchSensor TouchSensor1639 = createNode("TouchSensor");
TouchSensor1639.description = "HAnimSite front_close_view";
HAnimSite1638.children = new MFNode();

HAnimSite1638.children[0] = TouchSensor1639;

Shape Shape1640 = createNode("Shape");
Shape1640.USE = "HAnimSiteShape";
HAnimSite1638.children[1] = Shape1640;

Viewpoint Viewpoint1641 = createNode("Viewpoint");
Viewpoint1641.DEF = "hanim_front_close_viewpoint";
Viewpoint1641.centerOfRotation = new SFVec3f(new float[0,0,1.575]);
Viewpoint1641.description = "front close";
Viewpoint1641.position = new SFVec3f(new float[0,0,0]);
HAnimSite1638.children[2] = Viewpoint1641;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1642 = createNode("Anchor");
Anchor1642.description = "HAnimSite hanim_front_close_view Viewpoint";
Anchor1642.url = new MFString(new java.lang.String["#hanim_front_close_viewpoint"]);
LOD LOD1643 = createNode("LOD");
LOD1643.forceTransitions = True;
LOD1643.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1644 = createNode("WorldInfo");
WorldInfo1644.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1643.children = new MFNode();

LOD1643.children[0] = WorldInfo1644;

Shape Shape1645 = createNode("Shape");
Shape1645.USE = "HAnimSiteViewpointShape";
LOD1643.children[1] = Shape1645;

Anchor1642.children = new MFNode();

Anchor1642.children[0] = LOD1643;

HAnimSite1638.children[3] = Anchor1642;

HAnimHumanoid43.viewpoints[7] = HAnimSite1638;

HAnimSite HAnimSite1646 = createNode("HAnimSite");
HAnimSite1646.name = "side_close_view";
HAnimSite1646.DEF = "hanim_side_close_view";
HAnimSite1646.rotation = new SFRotation(new float[0,1,0,1.5708]);
HAnimSite1646.translation = new SFVec3f(new float[1.56,0.854,0]);
//HAnimSite visualization shape
TouchSensor TouchSensor1647 = createNode("TouchSensor");
TouchSensor1647.description = "HAnimSite side_close_view";
HAnimSite1646.children = new MFNode();

HAnimSite1646.children[0] = TouchSensor1647;

Shape Shape1648 = createNode("Shape");
Shape1648.USE = "HAnimSiteShape";
HAnimSite1646.children[1] = Shape1648;

Viewpoint Viewpoint1649 = createNode("Viewpoint");
Viewpoint1649.DEF = "hanim_side_close_viewpoint";
Viewpoint1649.centerOfRotation = new SFVec3f(new float[1.6,0,0]);
Viewpoint1649.description = "side close";
Viewpoint1649.position = new SFVec3f(new float[0,0,0]);
HAnimSite1646.children[2] = Viewpoint1649;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1650 = createNode("Anchor");
Anchor1650.description = "HAnimSite hanim_side_close_view Viewpoint";
Anchor1650.url = new MFString(new java.lang.String["#hanim_side_close_viewpoint"]);
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

HAnimSite1646.children[3] = Anchor1650;

HAnimHumanoid43.viewpoints[8] = HAnimSite1646;

HAnimSite HAnimSite1654 = createNode("HAnimSite");
HAnimSite1654.name = "head_front_close_view";
HAnimSite1654.DEF = "hanim_head_front_close_view";
HAnimSite1654.translation = new SFVec3f(new float[0,1.5,1]);
//HAnimSite visualization shape
TouchSensor TouchSensor1655 = createNode("TouchSensor");
TouchSensor1655.description = "HAnimSite head_front_close_view";
HAnimSite1654.children = new MFNode();

HAnimSite1654.children[0] = TouchSensor1655;

Shape Shape1656 = createNode("Shape");
Shape1656.USE = "HAnimSiteShape";
HAnimSite1654.children[1] = Shape1656;

Viewpoint Viewpoint1657 = createNode("Viewpoint");
Viewpoint1657.DEF = "hanim_head_front_close_viewpoint";
Viewpoint1657.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint1657.description = "head front close";
Viewpoint1657.position = new SFVec3f(new float[0,0,0]);
HAnimSite1654.children[2] = Viewpoint1657;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1658 = createNode("Anchor");
Anchor1658.description = "HAnimSite hanim_head_front_close_view Viewpoint";
Anchor1658.url = new MFString(new java.lang.String["#hanim_head_front_close_viewpoint"]);
LOD LOD1659 = createNode("LOD");
LOD1659.forceTransitions = True;
LOD1659.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1660 = createNode("WorldInfo");
WorldInfo1660.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1659.children = new MFNode();

LOD1659.children[0] = WorldInfo1660;

Shape Shape1661 = createNode("Shape");
Shape1661.USE = "HAnimSiteViewpointShape";
LOD1659.children[1] = Shape1661;

Anchor1658.children = new MFNode();

Anchor1658.children[0] = LOD1659;

HAnimSite1654.children[3] = Anchor1658;

HAnimHumanoid43.viewpoints[9] = HAnimSite1654;

HAnimSite HAnimSite1662 = createNode("HAnimSite");
HAnimSite1662.name = "chest_front_close_view";
HAnimSite1662.DEF = "hanim_chest_front_close_view";
HAnimSite1662.translation = new SFVec3f(new float[0,1.2,1]);
//HAnimSite visualization shape
TouchSensor TouchSensor1663 = createNode("TouchSensor");
TouchSensor1663.description = "HAnimSite chest_front_close_view";
HAnimSite1662.children = new MFNode();

HAnimSite1662.children[0] = TouchSensor1663;

Shape Shape1664 = createNode("Shape");
Shape1664.USE = "HAnimSiteShape";
HAnimSite1662.children[1] = Shape1664;

Viewpoint Viewpoint1665 = createNode("Viewpoint");
Viewpoint1665.DEF = "hanim_chest_front_close_viewpoint";
Viewpoint1665.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint1665.description = "chest front close";
Viewpoint1665.position = new SFVec3f(new float[0,0,0]);
HAnimSite1662.children[2] = Viewpoint1665;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1666 = createNode("Anchor");
Anchor1666.description = "HAnimSite hanim_chest_front_close_view Viewpoint";
Anchor1666.url = new MFString(new java.lang.String["#hanim_chest_front_close_viewpoint"]);
LOD LOD1667 = createNode("LOD");
LOD1667.forceTransitions = True;
LOD1667.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1668 = createNode("WorldInfo");
WorldInfo1668.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1667.children = new MFNode();

LOD1667.children[0] = WorldInfo1668;

Shape Shape1669 = createNode("Shape");
Shape1669.USE = "HAnimSiteViewpointShape";
LOD1667.children[1] = Shape1669;

Anchor1666.children = new MFNode();

Anchor1666.children[0] = LOD1667;

HAnimSite1662.children[3] = Anchor1666;

HAnimHumanoid43.viewpoints[10] = HAnimSite1662;

HAnimSite HAnimSite1670 = createNode("HAnimSite");
HAnimSite1670.name = "pelvis_front_close_view";
HAnimSite1670.DEF = "hanim_pelvis_front_close_view";
HAnimSite1670.translation = new SFVec3f(new float[0,0.8,1]);
//HAnimSite visualization shape
TouchSensor TouchSensor1671 = createNode("TouchSensor");
TouchSensor1671.description = "HAnimSite pelvis_front_close_view";
HAnimSite1670.children = new MFNode();

HAnimSite1670.children[0] = TouchSensor1671;

Shape Shape1672 = createNode("Shape");
Shape1672.USE = "HAnimSiteShape";
HAnimSite1670.children[1] = Shape1672;

Viewpoint Viewpoint1673 = createNode("Viewpoint");
Viewpoint1673.DEF = "hanim_pelvis_front_close_viewpoint";
Viewpoint1673.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint1673.description = "pelvis front close";
Viewpoint1673.position = new SFVec3f(new float[0,0,0]);
HAnimSite1670.children[2] = Viewpoint1673;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1674 = createNode("Anchor");
Anchor1674.description = "HAnimSite hanim_pelvis_front_close_view Viewpoint";
Anchor1674.url = new MFString(new java.lang.String["#hanim_pelvis_front_close_viewpoint"]);
LOD LOD1675 = createNode("LOD");
LOD1675.forceTransitions = True;
LOD1675.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1676 = createNode("WorldInfo");
WorldInfo1676.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1675.children = new MFNode();

LOD1675.children[0] = WorldInfo1676;

Shape Shape1677 = createNode("Shape");
Shape1677.USE = "HAnimSiteViewpointShape";
LOD1675.children[1] = Shape1677;

Anchor1674.children = new MFNode();

Anchor1674.children[0] = LOD1675;

HAnimSite1670.children[3] = Anchor1674;

HAnimHumanoid43.viewpoints[11] = HAnimSite1670;

HAnimSite HAnimSite1678 = createNode("HAnimSite");
HAnimSite1678.name = "knees_front_close_view";
HAnimSite1678.DEF = "hanim_knees_front_close_view";
HAnimSite1678.translation = new SFVec3f(new float[0,0.4,1]);
//HAnimSite visualization shape
TouchSensor TouchSensor1679 = createNode("TouchSensor");
TouchSensor1679.description = "HAnimSite knees_front_close_view";
HAnimSite1678.children = new MFNode();

HAnimSite1678.children[0] = TouchSensor1679;

Shape Shape1680 = createNode("Shape");
Shape1680.USE = "HAnimSiteShape";
HAnimSite1678.children[1] = Shape1680;

Viewpoint Viewpoint1681 = createNode("Viewpoint");
Viewpoint1681.DEF = "hanim_knees_front_close_viewpoint";
Viewpoint1681.centerOfRotation = new SFVec3f(new float[0,0.4,0]);
Viewpoint1681.description = "knees front close";
Viewpoint1681.position = new SFVec3f(new float[0,0,0]);
HAnimSite1678.children[2] = Viewpoint1681;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1682 = createNode("Anchor");
Anchor1682.description = "HAnimSite hanim_knees_front_close_view Viewpoint";
Anchor1682.url = new MFString(new java.lang.String["#hanim_knees_front_close_viewpoint"]);
LOD LOD1683 = createNode("LOD");
LOD1683.forceTransitions = True;
LOD1683.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1684 = createNode("WorldInfo");
WorldInfo1684.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1683.children = new MFNode();

LOD1683.children[0] = WorldInfo1684;

Shape Shape1685 = createNode("Shape");
Shape1685.USE = "HAnimSiteViewpointShape";
LOD1683.children[1] = Shape1685;

Anchor1682.children = new MFNode();

Anchor1682.children[0] = LOD1683;

HAnimSite1678.children[3] = Anchor1682;

HAnimHumanoid43.viewpoints[12] = HAnimSite1678;

HAnimSite HAnimSite1686 = createNode("HAnimSite");
HAnimSite1686.name = "feet_front_close_view";
HAnimSite1686.DEF = "hanim_feet_front_close_view";
HAnimSite1686.translation = new SFVec3f(new float[0,0,1]);
//HAnimSite visualization shape
TouchSensor TouchSensor1687 = createNode("TouchSensor");
TouchSensor1687.description = "HAnimSite feet_front_close_view";
HAnimSite1686.children = new MFNode();

HAnimSite1686.children[0] = TouchSensor1687;

Shape Shape1688 = createNode("Shape");
Shape1688.USE = "HAnimSiteShape";
HAnimSite1686.children[1] = Shape1688;

Viewpoint Viewpoint1689 = createNode("Viewpoint");
Viewpoint1689.DEF = "hanim_feet_front_close_viewpoint";
Viewpoint1689.description = "feet front close";
Viewpoint1689.position = new SFVec3f(new float[0,0,0]);
HAnimSite1686.children[2] = Viewpoint1689;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1690 = createNode("Anchor");
Anchor1690.description = "HAnimSite hanim_feet_front_close_view Viewpoint";
Anchor1690.url = new MFString(new java.lang.String["#hanim_feet_front_close_viewpoint"]);
LOD LOD1691 = createNode("LOD");
LOD1691.forceTransitions = True;
LOD1691.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1692 = createNode("WorldInfo");
WorldInfo1692.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1691.children = new MFNode();

LOD1691.children[0] = WorldInfo1692;

Shape Shape1693 = createNode("Shape");
Shape1693.USE = "HAnimSiteViewpointShape";
LOD1691.children[1] = Shape1693;

Anchor1690.children = new MFNode();

Anchor1690.children[0] = LOD1691;

HAnimSite1686.children[3] = Anchor1690;

HAnimHumanoid43.viewpoints[13] = HAnimSite1686;

HAnimSite HAnimSite1694 = createNode("HAnimSite");
HAnimSite1694.name = "eye_level_view";
HAnimSite1694.DEF = "hanim_eye_level_view";
HAnimSite1694.translation = new SFVec3f(new float[0,1.6332,0.0502]);
//HAnimSite visualization shape
TouchSensor TouchSensor1695 = createNode("TouchSensor");
TouchSensor1695.description = "HAnimSite eye_level_view";
HAnimSite1694.children = new MFNode();

HAnimSite1694.children[0] = TouchSensor1695;

Shape Shape1696 = createNode("Shape");
Shape1696.USE = "HAnimSiteShape";
HAnimSite1694.children[1] = Shape1696;

Viewpoint Viewpoint1697 = createNode("Viewpoint");
Viewpoint1697.DEF = "hanim_eye_level_viewpoint";
Viewpoint1697.description = "eye level looking forward";
Viewpoint1697.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint1697.position = new SFVec3f(new float[0,0,0]);
HAnimSite1694.children[2] = Viewpoint1697;

//HAnimSite/Viewpoint visualization shape
Anchor Anchor1698 = createNode("Anchor");
Anchor1698.description = "HAnimSite hanim_eye_level_view Viewpoint";
Anchor1698.url = new MFString(new java.lang.String["#hanim_eye_level_viewpoint"]);
LOD LOD1699 = createNode("LOD");
LOD1699.forceTransitions = True;
LOD1699.range = new MFFloat(new float[0.04]);
WorldInfo WorldInfo1700 = createNode("WorldInfo");
WorldInfo1700.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1699.children = new MFNode();

LOD1699.children[0] = WorldInfo1700;

Shape Shape1701 = createNode("Shape");
Shape1701.USE = "HAnimSiteViewpointShape";
LOD1699.children[1] = Shape1701;

Anchor1698.children = new MFNode();

Anchor1698.children[0] = LOD1699;

HAnimSite1694.children[3] = Anchor1698;

HAnimHumanoid43.viewpoints[14] = HAnimSite1694;

HAnimSite HAnimSite1702 = createNode("HAnimSite");
HAnimSite1702.USE = "hanim_l_eyeball_site_view";
HAnimHumanoid43.viewpoints[15] = HAnimSite1702;

HAnimSite HAnimSite1703 = createNode("HAnimSite");
HAnimSite1703.USE = "hanim_r_eyeball_site_view";
HAnimHumanoid43.viewpoints[16] = HAnimSite1703;

HAnimSite HAnimSite1704 = createNode("HAnimSite");
HAnimSite1704.USE = "hanim_l_hand_front_view";
HAnimHumanoid43.viewpoints[17] = HAnimSite1704;

HAnimSite HAnimSite1705 = createNode("HAnimSite");
HAnimSite1705.USE = "hanim_r_hand_front_view";
HAnimHumanoid43.viewpoints[18] = HAnimSite1705;

HAnimJoint HAnimJoint1706 = createNode("HAnimJoint");
HAnimJoint1706.USE = "hanim_humanoid_root";
HAnimHumanoid43.joints[19] = HAnimJoint1706;

HAnimJoint HAnimJoint1707 = createNode("HAnimJoint");
HAnimJoint1707.USE = "hanim_sacroiliac";
HAnimHumanoid43.joints[20] = HAnimJoint1707;

HAnimJoint HAnimJoint1708 = createNode("HAnimJoint");
HAnimJoint1708.USE = "hanim_vl5";
HAnimHumanoid43.joints[21] = HAnimJoint1708;

HAnimJoint HAnimJoint1709 = createNode("HAnimJoint");
HAnimJoint1709.USE = "hanim_vl4";
HAnimHumanoid43.joints[22] = HAnimJoint1709;

HAnimJoint HAnimJoint1710 = createNode("HAnimJoint");
HAnimJoint1710.USE = "hanim_vl3";
HAnimHumanoid43.joints[23] = HAnimJoint1710;

HAnimJoint HAnimJoint1711 = createNode("HAnimJoint");
HAnimJoint1711.USE = "hanim_vl2";
HAnimHumanoid43.joints[24] = HAnimJoint1711;

HAnimJoint HAnimJoint1712 = createNode("HAnimJoint");
HAnimJoint1712.USE = "hanim_vl1";
HAnimHumanoid43.joints[25] = HAnimJoint1712;

HAnimJoint HAnimJoint1713 = createNode("HAnimJoint");
HAnimJoint1713.USE = "hanim_vt12";
HAnimHumanoid43.joints[26] = HAnimJoint1713;

HAnimJoint HAnimJoint1714 = createNode("HAnimJoint");
HAnimJoint1714.USE = "hanim_vt11";
HAnimHumanoid43.joints[27] = HAnimJoint1714;

HAnimJoint HAnimJoint1715 = createNode("HAnimJoint");
HAnimJoint1715.USE = "hanim_vt10";
HAnimHumanoid43.joints[28] = HAnimJoint1715;

HAnimJoint HAnimJoint1716 = createNode("HAnimJoint");
HAnimJoint1716.USE = "hanim_vt9";
HAnimHumanoid43.joints[29] = HAnimJoint1716;

HAnimJoint HAnimJoint1717 = createNode("HAnimJoint");
HAnimJoint1717.USE = "hanim_vt8";
HAnimHumanoid43.joints[30] = HAnimJoint1717;

HAnimJoint HAnimJoint1718 = createNode("HAnimJoint");
HAnimJoint1718.USE = "hanim_vt7";
HAnimHumanoid43.joints[31] = HAnimJoint1718;

HAnimJoint HAnimJoint1719 = createNode("HAnimJoint");
HAnimJoint1719.USE = "hanim_vt6";
HAnimHumanoid43.joints[32] = HAnimJoint1719;

HAnimJoint HAnimJoint1720 = createNode("HAnimJoint");
HAnimJoint1720.USE = "hanim_vt5";
HAnimHumanoid43.joints[33] = HAnimJoint1720;

HAnimJoint HAnimJoint1721 = createNode("HAnimJoint");
HAnimJoint1721.USE = "hanim_vt4";
HAnimHumanoid43.joints[34] = HAnimJoint1721;

HAnimJoint HAnimJoint1722 = createNode("HAnimJoint");
HAnimJoint1722.USE = "hanim_vt3";
HAnimHumanoid43.joints[35] = HAnimJoint1722;

HAnimJoint HAnimJoint1723 = createNode("HAnimJoint");
HAnimJoint1723.USE = "hanim_vt2";
HAnimHumanoid43.joints[36] = HAnimJoint1723;

HAnimJoint HAnimJoint1724 = createNode("HAnimJoint");
HAnimJoint1724.USE = "hanim_vt1";
HAnimHumanoid43.joints[37] = HAnimJoint1724;

HAnimJoint HAnimJoint1725 = createNode("HAnimJoint");
HAnimJoint1725.USE = "hanim_vc7";
HAnimHumanoid43.joints[38] = HAnimJoint1725;

HAnimJoint HAnimJoint1726 = createNode("HAnimJoint");
HAnimJoint1726.USE = "hanim_vc6";
HAnimHumanoid43.joints[39] = HAnimJoint1726;

HAnimJoint HAnimJoint1727 = createNode("HAnimJoint");
HAnimJoint1727.USE = "hanim_vc5";
HAnimHumanoid43.joints[40] = HAnimJoint1727;

HAnimJoint HAnimJoint1728 = createNode("HAnimJoint");
HAnimJoint1728.USE = "hanim_vc4";
HAnimHumanoid43.joints[41] = HAnimJoint1728;

HAnimJoint HAnimJoint1729 = createNode("HAnimJoint");
HAnimJoint1729.USE = "hanim_vc3";
HAnimHumanoid43.joints[42] = HAnimJoint1729;

HAnimJoint HAnimJoint1730 = createNode("HAnimJoint");
HAnimJoint1730.USE = "hanim_vc2";
HAnimHumanoid43.joints[43] = HAnimJoint1730;

HAnimJoint HAnimJoint1731 = createNode("HAnimJoint");
HAnimJoint1731.USE = "hanim_vc1";
HAnimHumanoid43.joints[44] = HAnimJoint1731;

HAnimJoint HAnimJoint1732 = createNode("HAnimJoint");
HAnimJoint1732.USE = "hanim_skullbase";
HAnimHumanoid43.joints[45] = HAnimJoint1732;

HAnimJoint HAnimJoint1733 = createNode("HAnimJoint");
HAnimJoint1733.USE = "hanim_temporomandibular";
HAnimHumanoid43.joints[46] = HAnimJoint1733;

HAnimJoint HAnimJoint1734 = createNode("HAnimJoint");
HAnimJoint1734.USE = "hanim_l_acromioclavicular";
HAnimHumanoid43.joints[47] = HAnimJoint1734;

HAnimJoint HAnimJoint1735 = createNode("HAnimJoint");
HAnimJoint1735.USE = "hanim_r_acromioclavicular";
HAnimHumanoid43.joints[48] = HAnimJoint1735;

HAnimJoint HAnimJoint1736 = createNode("HAnimJoint");
HAnimJoint1736.USE = "hanim_l_carpal_distal_interphalangeal_2";
HAnimHumanoid43.joints[49] = HAnimJoint1736;

HAnimJoint HAnimJoint1737 = createNode("HAnimJoint");
HAnimJoint1737.USE = "hanim_r_carpal_distal_interphalangeal_2";
HAnimHumanoid43.joints[50] = HAnimJoint1737;

HAnimJoint HAnimJoint1738 = createNode("HAnimJoint");
HAnimJoint1738.USE = "hanim_l_carpal_distal_interphalangeal_3";
HAnimHumanoid43.joints[51] = HAnimJoint1738;

HAnimJoint HAnimJoint1739 = createNode("HAnimJoint");
HAnimJoint1739.USE = "hanim_r_carpal_distal_interphalangeal_3";
HAnimHumanoid43.joints[52] = HAnimJoint1739;

HAnimJoint HAnimJoint1740 = createNode("HAnimJoint");
HAnimJoint1740.USE = "hanim_l_carpal_distal_interphalangeal_4";
HAnimHumanoid43.joints[53] = HAnimJoint1740;

HAnimJoint HAnimJoint1741 = createNode("HAnimJoint");
HAnimJoint1741.USE = "hanim_r_carpal_distal_interphalangeal_4";
HAnimHumanoid43.joints[54] = HAnimJoint1741;

HAnimJoint HAnimJoint1742 = createNode("HAnimJoint");
HAnimJoint1742.USE = "hanim_l_carpal_distal_interphalangeal_5";
HAnimHumanoid43.joints[55] = HAnimJoint1742;

HAnimJoint HAnimJoint1743 = createNode("HAnimJoint");
HAnimJoint1743.USE = "hanim_r_carpal_distal_interphalangeal_5";
HAnimHumanoid43.joints[56] = HAnimJoint1743;

HAnimJoint HAnimJoint1744 = createNode("HAnimJoint");
HAnimJoint1744.USE = "hanim_l_carpal_interphalangeal_1";
HAnimHumanoid43.joints[57] = HAnimJoint1744;

HAnimJoint HAnimJoint1745 = createNode("HAnimJoint");
HAnimJoint1745.USE = "hanim_r_carpal_interphalangeal_1";
HAnimHumanoid43.joints[58] = HAnimJoint1745;

HAnimJoint HAnimJoint1746 = createNode("HAnimJoint");
HAnimJoint1746.USE = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[59] = HAnimJoint1746;

HAnimJoint HAnimJoint1747 = createNode("HAnimJoint");
HAnimJoint1747.USE = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[60] = HAnimJoint1747;

HAnimJoint HAnimJoint1748 = createNode("HAnimJoint");
HAnimJoint1748.USE = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[61] = HAnimJoint1748;

HAnimJoint HAnimJoint1749 = createNode("HAnimJoint");
HAnimJoint1749.USE = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[62] = HAnimJoint1749;

HAnimJoint HAnimJoint1750 = createNode("HAnimJoint");
HAnimJoint1750.USE = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[63] = HAnimJoint1750;

HAnimJoint HAnimJoint1751 = createNode("HAnimJoint");
HAnimJoint1751.USE = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[64] = HAnimJoint1751;

HAnimJoint HAnimJoint1752 = createNode("HAnimJoint");
HAnimJoint1752.USE = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[65] = HAnimJoint1752;

HAnimJoint HAnimJoint1753 = createNode("HAnimJoint");
HAnimJoint1753.USE = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[66] = HAnimJoint1753;

HAnimJoint HAnimJoint1754 = createNode("HAnimJoint");
HAnimJoint1754.USE = "hanim_l_carpometacarpal_1";
HAnimHumanoid43.joints[67] = HAnimJoint1754;

HAnimJoint HAnimJoint1755 = createNode("HAnimJoint");
HAnimJoint1755.USE = "hanim_r_carpometacarpal_1";
HAnimHumanoid43.joints[68] = HAnimJoint1755;

HAnimJoint HAnimJoint1756 = createNode("HAnimJoint");
HAnimJoint1756.USE = "hanim_l_carpometacarpal_2";
HAnimHumanoid43.joints[69] = HAnimJoint1756;

HAnimJoint HAnimJoint1757 = createNode("HAnimJoint");
HAnimJoint1757.USE = "hanim_r_carpometacarpal_2";
HAnimHumanoid43.joints[70] = HAnimJoint1757;

HAnimJoint HAnimJoint1758 = createNode("HAnimJoint");
HAnimJoint1758.USE = "hanim_l_carpometacarpal_3";
HAnimHumanoid43.joints[71] = HAnimJoint1758;

HAnimJoint HAnimJoint1759 = createNode("HAnimJoint");
HAnimJoint1759.USE = "hanim_r_carpometacarpal_3";
HAnimHumanoid43.joints[72] = HAnimJoint1759;

HAnimJoint HAnimJoint1760 = createNode("HAnimJoint");
HAnimJoint1760.USE = "hanim_l_carpometacarpal_4";
HAnimHumanoid43.joints[73] = HAnimJoint1760;

HAnimJoint HAnimJoint1761 = createNode("HAnimJoint");
HAnimJoint1761.USE = "hanim_r_carpometacarpal_4";
HAnimHumanoid43.joints[74] = HAnimJoint1761;

HAnimJoint HAnimJoint1762 = createNode("HAnimJoint");
HAnimJoint1762.USE = "hanim_l_carpometacarpal_5";
HAnimHumanoid43.joints[75] = HAnimJoint1762;

HAnimJoint HAnimJoint1763 = createNode("HAnimJoint");
HAnimJoint1763.USE = "hanim_r_carpometacarpal_5";
HAnimHumanoid43.joints[76] = HAnimJoint1763;

HAnimJoint HAnimJoint1764 = createNode("HAnimJoint");
HAnimJoint1764.USE = "hanim_l_elbow";
HAnimHumanoid43.joints[77] = HAnimJoint1764;

HAnimJoint HAnimJoint1765 = createNode("HAnimJoint");
HAnimJoint1765.USE = "hanim_r_elbow";
HAnimHumanoid43.joints[78] = HAnimJoint1765;

HAnimJoint HAnimJoint1766 = createNode("HAnimJoint");
HAnimJoint1766.USE = "hanim_l_eyeball_joint";
HAnimHumanoid43.joints[79] = HAnimJoint1766;

HAnimJoint HAnimJoint1767 = createNode("HAnimJoint");
HAnimJoint1767.USE = "hanim_r_eyeball_joint";
HAnimHumanoid43.joints[80] = HAnimJoint1767;

HAnimJoint HAnimJoint1768 = createNode("HAnimJoint");
HAnimJoint1768.USE = "hanim_l_eyebrow_joint";
HAnimHumanoid43.joints[81] = HAnimJoint1768;

HAnimJoint HAnimJoint1769 = createNode("HAnimJoint");
HAnimJoint1769.USE = "hanim_r_eyebrow_joint";
HAnimHumanoid43.joints[82] = HAnimJoint1769;

HAnimJoint HAnimJoint1770 = createNode("HAnimJoint");
HAnimJoint1770.USE = "hanim_l_eyelid_joint";
HAnimHumanoid43.joints[83] = HAnimJoint1770;

HAnimJoint HAnimJoint1771 = createNode("HAnimJoint");
HAnimJoint1771.USE = "hanim_r_eyelid_joint";
HAnimHumanoid43.joints[84] = HAnimJoint1771;

HAnimJoint HAnimJoint1772 = createNode("HAnimJoint");
HAnimJoint1772.USE = "hanim_l_hip";
HAnimHumanoid43.joints[85] = HAnimJoint1772;

HAnimJoint HAnimJoint1773 = createNode("HAnimJoint");
HAnimJoint1773.USE = "hanim_r_hip";
HAnimHumanoid43.joints[86] = HAnimJoint1773;

HAnimJoint HAnimJoint1774 = createNode("HAnimJoint");
HAnimJoint1774.USE = "hanim_l_knee";
HAnimHumanoid43.joints[87] = HAnimJoint1774;

HAnimJoint HAnimJoint1775 = createNode("HAnimJoint");
HAnimJoint1775.USE = "hanim_r_knee";
HAnimHumanoid43.joints[88] = HAnimJoint1775;

HAnimJoint HAnimJoint1776 = createNode("HAnimJoint");
HAnimJoint1776.USE = "hanim_l_metacarpophalangeal_1";
HAnimHumanoid43.joints[89] = HAnimJoint1776;

HAnimJoint HAnimJoint1777 = createNode("HAnimJoint");
HAnimJoint1777.USE = "hanim_r_metacarpophalangeal_1";
HAnimHumanoid43.joints[90] = HAnimJoint1777;

HAnimJoint HAnimJoint1778 = createNode("HAnimJoint");
HAnimJoint1778.USE = "hanim_l_metacarpophalangeal_2";
HAnimHumanoid43.joints[91] = HAnimJoint1778;

HAnimJoint HAnimJoint1779 = createNode("HAnimJoint");
HAnimJoint1779.USE = "hanim_r_metacarpophalangeal_2";
HAnimHumanoid43.joints[92] = HAnimJoint1779;

HAnimJoint HAnimJoint1780 = createNode("HAnimJoint");
HAnimJoint1780.USE = "hanim_l_metacarpophalangeal_3";
HAnimHumanoid43.joints[93] = HAnimJoint1780;

HAnimJoint HAnimJoint1781 = createNode("HAnimJoint");
HAnimJoint1781.USE = "hanim_r_metacarpophalangeal_3";
HAnimHumanoid43.joints[94] = HAnimJoint1781;

HAnimJoint HAnimJoint1782 = createNode("HAnimJoint");
HAnimJoint1782.USE = "hanim_l_metacarpophalangeal_4";
HAnimHumanoid43.joints[95] = HAnimJoint1782;

HAnimJoint HAnimJoint1783 = createNode("HAnimJoint");
HAnimJoint1783.USE = "hanim_r_metacarpophalangeal_4";
HAnimHumanoid43.joints[96] = HAnimJoint1783;

HAnimJoint HAnimJoint1784 = createNode("HAnimJoint");
HAnimJoint1784.USE = "hanim_l_metacarpophalangeal_5";
HAnimHumanoid43.joints[97] = HAnimJoint1784;

HAnimJoint HAnimJoint1785 = createNode("HAnimJoint");
HAnimJoint1785.USE = "hanim_r_metacarpophalangeal_5";
HAnimHumanoid43.joints[98] = HAnimJoint1785;

HAnimJoint HAnimJoint1786 = createNode("HAnimJoint");
HAnimJoint1786.USE = "hanim_l_metatarsophalangeal_2";
HAnimHumanoid43.joints[99] = HAnimJoint1786;

HAnimJoint HAnimJoint1787 = createNode("HAnimJoint");
HAnimJoint1787.USE = "hanim_r_metatarsophalangeal_2";
HAnimHumanoid43.joints[100] = HAnimJoint1787;

HAnimJoint HAnimJoint1788 = createNode("HAnimJoint");
HAnimJoint1788.USE = "hanim_l_radiocarpal";
HAnimHumanoid43.joints[101] = HAnimJoint1788;

HAnimJoint HAnimJoint1789 = createNode("HAnimJoint");
HAnimJoint1789.USE = "hanim_r_radiocarpal";
HAnimHumanoid43.joints[102] = HAnimJoint1789;

HAnimJoint HAnimJoint1790 = createNode("HAnimJoint");
HAnimJoint1790.USE = "hanim_l_shoulder";
HAnimHumanoid43.joints[103] = HAnimJoint1790;

HAnimJoint HAnimJoint1791 = createNode("HAnimJoint");
HAnimJoint1791.USE = "hanim_r_shoulder";
HAnimHumanoid43.joints[104] = HAnimJoint1791;

HAnimJoint HAnimJoint1792 = createNode("HAnimJoint");
HAnimJoint1792.USE = "hanim_l_sternoclavicular";
HAnimHumanoid43.joints[105] = HAnimJoint1792;

HAnimJoint HAnimJoint1793 = createNode("HAnimJoint");
HAnimJoint1793.USE = "hanim_r_sternoclavicular";
HAnimHumanoid43.joints[106] = HAnimJoint1793;

HAnimJoint HAnimJoint1794 = createNode("HAnimJoint");
HAnimJoint1794.USE = "hanim_l_talocrural";
HAnimHumanoid43.joints[107] = HAnimJoint1794;

HAnimJoint HAnimJoint1795 = createNode("HAnimJoint");
HAnimJoint1795.USE = "hanim_r_talocrural";
HAnimHumanoid43.joints[108] = HAnimJoint1795;

HAnimJoint HAnimJoint1796 = createNode("HAnimJoint");
HAnimJoint1796.USE = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimHumanoid43.joints[109] = HAnimJoint1796;

HAnimJoint HAnimJoint1797 = createNode("HAnimJoint");
HAnimJoint1797.USE = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimHumanoid43.joints[110] = HAnimJoint1797;

HAnimJoint HAnimJoint1798 = createNode("HAnimJoint");
HAnimJoint1798.USE = "hanim_l_tarsometatarsal_2";
HAnimHumanoid43.joints[111] = HAnimJoint1798;

HAnimJoint HAnimJoint1799 = createNode("HAnimJoint");
HAnimJoint1799.USE = "hanim_r_tarsometatarsal_2";
HAnimHumanoid43.joints[112] = HAnimJoint1799;

HAnimSegment HAnimSegment1800 = createNode("HAnimSegment");
HAnimSegment1800.USE = "hanim_pelvis";
HAnimHumanoid43.segments[113] = HAnimSegment1800;

HAnimSegment HAnimSegment1801 = createNode("HAnimSegment");
HAnimSegment1801.USE = "hanim_skull";
HAnimHumanoid43.segments[114] = HAnimSegment1801;

HAnimSegment HAnimSegment1802 = createNode("HAnimSegment");
HAnimSegment1802.USE = "hanim_jaw";
HAnimHumanoid43.segments[115] = HAnimSegment1802;

HAnimSegment HAnimSegment1803 = createNode("HAnimSegment");
HAnimSegment1803.USE = "hanim_c1";
HAnimHumanoid43.segments[116] = HAnimSegment1803;

HAnimSegment HAnimSegment1804 = createNode("HAnimSegment");
HAnimSegment1804.USE = "hanim_c2";
HAnimHumanoid43.segments[117] = HAnimSegment1804;

HAnimSegment HAnimSegment1805 = createNode("HAnimSegment");
HAnimSegment1805.USE = "hanim_c3";
HAnimHumanoid43.segments[118] = HAnimSegment1805;

HAnimSegment HAnimSegment1806 = createNode("HAnimSegment");
HAnimSegment1806.USE = "hanim_c4";
HAnimHumanoid43.segments[119] = HAnimSegment1806;

HAnimSegment HAnimSegment1807 = createNode("HAnimSegment");
HAnimSegment1807.USE = "hanim_c5";
HAnimHumanoid43.segments[120] = HAnimSegment1807;

HAnimSegment HAnimSegment1808 = createNode("HAnimSegment");
HAnimSegment1808.USE = "hanim_c6";
HAnimHumanoid43.segments[121] = HAnimSegment1808;

HAnimSegment HAnimSegment1809 = createNode("HAnimSegment");
HAnimSegment1809.USE = "hanim_c7";
HAnimHumanoid43.segments[122] = HAnimSegment1809;

HAnimSegment HAnimSegment1810 = createNode("HAnimSegment");
HAnimSegment1810.USE = "hanim_t1";
HAnimHumanoid43.segments[123] = HAnimSegment1810;

HAnimSegment HAnimSegment1811 = createNode("HAnimSegment");
HAnimSegment1811.USE = "hanim_t2";
HAnimHumanoid43.segments[124] = HAnimSegment1811;

HAnimSegment HAnimSegment1812 = createNode("HAnimSegment");
HAnimSegment1812.USE = "hanim_t3";
HAnimHumanoid43.segments[125] = HAnimSegment1812;

HAnimSegment HAnimSegment1813 = createNode("HAnimSegment");
HAnimSegment1813.USE = "hanim_t4";
HAnimHumanoid43.segments[126] = HAnimSegment1813;

HAnimSegment HAnimSegment1814 = createNode("HAnimSegment");
HAnimSegment1814.USE = "hanim_t5";
HAnimHumanoid43.segments[127] = HAnimSegment1814;

HAnimSegment HAnimSegment1815 = createNode("HAnimSegment");
HAnimSegment1815.USE = "hanim_t6";
HAnimHumanoid43.segments[128] = HAnimSegment1815;

HAnimSegment HAnimSegment1816 = createNode("HAnimSegment");
HAnimSegment1816.USE = "hanim_t7";
HAnimHumanoid43.segments[129] = HAnimSegment1816;

HAnimSegment HAnimSegment1817 = createNode("HAnimSegment");
HAnimSegment1817.USE = "hanim_t8";
HAnimHumanoid43.segments[130] = HAnimSegment1817;

HAnimSegment HAnimSegment1818 = createNode("HAnimSegment");
HAnimSegment1818.USE = "hanim_t9";
HAnimHumanoid43.segments[131] = HAnimSegment1818;

HAnimSegment HAnimSegment1819 = createNode("HAnimSegment");
HAnimSegment1819.USE = "hanim_t10";
HAnimHumanoid43.segments[132] = HAnimSegment1819;

HAnimSegment HAnimSegment1820 = createNode("HAnimSegment");
HAnimSegment1820.USE = "hanim_t11";
HAnimHumanoid43.segments[133] = HAnimSegment1820;

HAnimSegment HAnimSegment1821 = createNode("HAnimSegment");
HAnimSegment1821.USE = "hanim_t12";
HAnimHumanoid43.segments[134] = HAnimSegment1821;

HAnimSegment HAnimSegment1822 = createNode("HAnimSegment");
HAnimSegment1822.USE = "hanim_l1";
HAnimHumanoid43.segments[135] = HAnimSegment1822;

HAnimSegment HAnimSegment1823 = createNode("HAnimSegment");
HAnimSegment1823.USE = "hanim_l2";
HAnimHumanoid43.segments[136] = HAnimSegment1823;

HAnimSegment HAnimSegment1824 = createNode("HAnimSegment");
HAnimSegment1824.USE = "hanim_l3";
HAnimHumanoid43.segments[137] = HAnimSegment1824;

HAnimSegment HAnimSegment1825 = createNode("HAnimSegment");
HAnimSegment1825.USE = "hanim_l4";
HAnimHumanoid43.segments[138] = HAnimSegment1825;

HAnimSegment HAnimSegment1826 = createNode("HAnimSegment");
HAnimSegment1826.USE = "hanim_l5";
HAnimHumanoid43.segments[139] = HAnimSegment1826;

HAnimSegment HAnimSegment1827 = createNode("HAnimSegment");
HAnimSegment1827.USE = "hanim_sacrum";
HAnimHumanoid43.segments[140] = HAnimSegment1827;

HAnimSegment HAnimSegment1828 = createNode("HAnimSegment");
HAnimSegment1828.USE = "hanim_l_calf";
HAnimHumanoid43.segments[141] = HAnimSegment1828;

HAnimSegment HAnimSegment1829 = createNode("HAnimSegment");
HAnimSegment1829.USE = "hanim_r_calf";
HAnimHumanoid43.segments[142] = HAnimSegment1829;

HAnimSegment HAnimSegment1830 = createNode("HAnimSegment");
HAnimSegment1830.USE = "hanim_l_carpal";
HAnimHumanoid43.segments[143] = HAnimSegment1830;

HAnimSegment HAnimSegment1831 = createNode("HAnimSegment");
HAnimSegment1831.USE = "hanim_r_carpal";
HAnimHumanoid43.segments[144] = HAnimSegment1831;

HAnimSegment HAnimSegment1832 = createNode("HAnimSegment");
HAnimSegment1832.USE = "hanim_l_carpal_distal_phalanx_1";
HAnimHumanoid43.segments[145] = HAnimSegment1832;

HAnimSegment HAnimSegment1833 = createNode("HAnimSegment");
HAnimSegment1833.USE = "hanim_r_carpal_distal_phalanx_1";
HAnimHumanoid43.segments[146] = HAnimSegment1833;

HAnimSegment HAnimSegment1834 = createNode("HAnimSegment");
HAnimSegment1834.USE = "hanim_l_carpal_distal_phalanx_2";
HAnimHumanoid43.segments[147] = HAnimSegment1834;

HAnimSegment HAnimSegment1835 = createNode("HAnimSegment");
HAnimSegment1835.USE = "hanim_r_carpal_distal_phalanx_2";
HAnimHumanoid43.segments[148] = HAnimSegment1835;

HAnimSegment HAnimSegment1836 = createNode("HAnimSegment");
HAnimSegment1836.USE = "hanim_l_carpal_distal_phalanx_3";
HAnimHumanoid43.segments[149] = HAnimSegment1836;

HAnimSegment HAnimSegment1837 = createNode("HAnimSegment");
HAnimSegment1837.USE = "hanim_r_carpal_distal_phalanx_3";
HAnimHumanoid43.segments[150] = HAnimSegment1837;

HAnimSegment HAnimSegment1838 = createNode("HAnimSegment");
HAnimSegment1838.USE = "hanim_l_carpal_distal_phalanx_4";
HAnimHumanoid43.segments[151] = HAnimSegment1838;

HAnimSegment HAnimSegment1839 = createNode("HAnimSegment");
HAnimSegment1839.USE = "hanim_r_carpal_distal_phalanx_4";
HAnimHumanoid43.segments[152] = HAnimSegment1839;

HAnimSegment HAnimSegment1840 = createNode("HAnimSegment");
HAnimSegment1840.USE = "hanim_l_carpal_distal_phalanx_5";
HAnimHumanoid43.segments[153] = HAnimSegment1840;

HAnimSegment HAnimSegment1841 = createNode("HAnimSegment");
HAnimSegment1841.USE = "hanim_r_carpal_distal_phalanx_5";
HAnimHumanoid43.segments[154] = HAnimSegment1841;

HAnimSegment HAnimSegment1842 = createNode("HAnimSegment");
HAnimSegment1842.USE = "hanim_l_carpal_middle_phalanx_2";
HAnimHumanoid43.segments[155] = HAnimSegment1842;

HAnimSegment HAnimSegment1843 = createNode("HAnimSegment");
HAnimSegment1843.USE = "hanim_r_carpal_middle_phalanx_2";
HAnimHumanoid43.segments[156] = HAnimSegment1843;

HAnimSegment HAnimSegment1844 = createNode("HAnimSegment");
HAnimSegment1844.USE = "hanim_l_carpal_middle_phalanx_3";
HAnimHumanoid43.segments[157] = HAnimSegment1844;

HAnimSegment HAnimSegment1845 = createNode("HAnimSegment");
HAnimSegment1845.USE = "hanim_r_carpal_middle_phalanx_3";
HAnimHumanoid43.segments[158] = HAnimSegment1845;

HAnimSegment HAnimSegment1846 = createNode("HAnimSegment");
HAnimSegment1846.USE = "hanim_l_carpal_middle_phalanx_4";
HAnimHumanoid43.segments[159] = HAnimSegment1846;

HAnimSegment HAnimSegment1847 = createNode("HAnimSegment");
HAnimSegment1847.USE = "hanim_r_carpal_middle_phalanx_4";
HAnimHumanoid43.segments[160] = HAnimSegment1847;

HAnimSegment HAnimSegment1848 = createNode("HAnimSegment");
HAnimSegment1848.USE = "hanim_l_carpal_middle_phalanx_5";
HAnimHumanoid43.segments[161] = HAnimSegment1848;

HAnimSegment HAnimSegment1849 = createNode("HAnimSegment");
HAnimSegment1849.USE = "hanim_r_carpal_middle_phalanx_5";
HAnimHumanoid43.segments[162] = HAnimSegment1849;

HAnimSegment HAnimSegment1850 = createNode("HAnimSegment");
HAnimSegment1850.USE = "hanim_l_carpal_proximal_phalanx_1";
HAnimHumanoid43.segments[163] = HAnimSegment1850;

HAnimSegment HAnimSegment1851 = createNode("HAnimSegment");
HAnimSegment1851.USE = "hanim_r_carpal_proximal_phalanx_1";
HAnimHumanoid43.segments[164] = HAnimSegment1851;

HAnimSegment HAnimSegment1852 = createNode("HAnimSegment");
HAnimSegment1852.USE = "hanim_l_carpal_proximal_phalanx_2";
HAnimHumanoid43.segments[165] = HAnimSegment1852;

HAnimSegment HAnimSegment1853 = createNode("HAnimSegment");
HAnimSegment1853.USE = "hanim_r_carpal_proximal_phalanx_2";
HAnimHumanoid43.segments[166] = HAnimSegment1853;

HAnimSegment HAnimSegment1854 = createNode("HAnimSegment");
HAnimSegment1854.USE = "hanim_l_carpal_proximal_phalanx_3";
HAnimHumanoid43.segments[167] = HAnimSegment1854;

HAnimSegment HAnimSegment1855 = createNode("HAnimSegment");
HAnimSegment1855.USE = "hanim_r_carpal_proximal_phalanx_3";
HAnimHumanoid43.segments[168] = HAnimSegment1855;

HAnimSegment HAnimSegment1856 = createNode("HAnimSegment");
HAnimSegment1856.USE = "hanim_l_carpal_proximal_phalanx_4";
HAnimHumanoid43.segments[169] = HAnimSegment1856;

HAnimSegment HAnimSegment1857 = createNode("HAnimSegment");
HAnimSegment1857.USE = "hanim_r_carpal_proximal_phalanx_4";
HAnimHumanoid43.segments[170] = HAnimSegment1857;

HAnimSegment HAnimSegment1858 = createNode("HAnimSegment");
HAnimSegment1858.USE = "hanim_l_carpal_proximal_phalanx_5";
HAnimHumanoid43.segments[171] = HAnimSegment1858;

HAnimSegment HAnimSegment1859 = createNode("HAnimSegment");
HAnimSegment1859.USE = "hanim_r_carpal_proximal_phalanx_5";
HAnimHumanoid43.segments[172] = HAnimSegment1859;

HAnimSegment HAnimSegment1860 = createNode("HAnimSegment");
HAnimSegment1860.USE = "hanim_l_clavicle";
HAnimHumanoid43.segments[173] = HAnimSegment1860;

HAnimSegment HAnimSegment1861 = createNode("HAnimSegment");
HAnimSegment1861.USE = "hanim_r_clavicle";
HAnimHumanoid43.segments[174] = HAnimSegment1861;

HAnimSegment HAnimSegment1862 = createNode("HAnimSegment");
HAnimSegment1862.USE = "hanim_l_eyeball";
HAnimHumanoid43.segments[175] = HAnimSegment1862;

HAnimSegment HAnimSegment1863 = createNode("HAnimSegment");
HAnimSegment1863.USE = "hanim_r_eyeball";
HAnimHumanoid43.segments[176] = HAnimSegment1863;

HAnimSegment HAnimSegment1864 = createNode("HAnimSegment");
HAnimSegment1864.USE = "hanim_l_eyebrow";
HAnimHumanoid43.segments[177] = HAnimSegment1864;

HAnimSegment HAnimSegment1865 = createNode("HAnimSegment");
HAnimSegment1865.USE = "hanim_r_eyebrow";
HAnimHumanoid43.segments[178] = HAnimSegment1865;

HAnimSegment HAnimSegment1866 = createNode("HAnimSegment");
HAnimSegment1866.USE = "hanim_l_eyelid";
HAnimHumanoid43.segments[179] = HAnimSegment1866;

HAnimSegment HAnimSegment1867 = createNode("HAnimSegment");
HAnimSegment1867.USE = "hanim_r_eyelid";
HAnimHumanoid43.segments[180] = HAnimSegment1867;

HAnimSegment HAnimSegment1868 = createNode("HAnimSegment");
HAnimSegment1868.USE = "hanim_l_forearm";
HAnimHumanoid43.segments[181] = HAnimSegment1868;

HAnimSegment HAnimSegment1869 = createNode("HAnimSegment");
HAnimSegment1869.USE = "hanim_r_forearm";
HAnimHumanoid43.segments[182] = HAnimSegment1869;

HAnimSegment HAnimSegment1870 = createNode("HAnimSegment");
HAnimSegment1870.USE = "hanim_l_metacarpal_1";
HAnimHumanoid43.segments[183] = HAnimSegment1870;

HAnimSegment HAnimSegment1871 = createNode("HAnimSegment");
HAnimSegment1871.USE = "hanim_r_metacarpal_1";
HAnimHumanoid43.segments[184] = HAnimSegment1871;

HAnimSegment HAnimSegment1872 = createNode("HAnimSegment");
HAnimSegment1872.USE = "hanim_l_metacarpal_2";
HAnimHumanoid43.segments[185] = HAnimSegment1872;

HAnimSegment HAnimSegment1873 = createNode("HAnimSegment");
HAnimSegment1873.USE = "hanim_r_metacarpal_2";
HAnimHumanoid43.segments[186] = HAnimSegment1873;

HAnimSegment HAnimSegment1874 = createNode("HAnimSegment");
HAnimSegment1874.USE = "hanim_l_metacarpal_3";
HAnimHumanoid43.segments[187] = HAnimSegment1874;

HAnimSegment HAnimSegment1875 = createNode("HAnimSegment");
HAnimSegment1875.USE = "hanim_r_metacarpal_3";
HAnimHumanoid43.segments[188] = HAnimSegment1875;

HAnimSegment HAnimSegment1876 = createNode("HAnimSegment");
HAnimSegment1876.USE = "hanim_l_metacarpal_4";
HAnimHumanoid43.segments[189] = HAnimSegment1876;

HAnimSegment HAnimSegment1877 = createNode("HAnimSegment");
HAnimSegment1877.USE = "hanim_r_metacarpal_4";
HAnimHumanoid43.segments[190] = HAnimSegment1877;

HAnimSegment HAnimSegment1878 = createNode("HAnimSegment");
HAnimSegment1878.USE = "hanim_l_metacarpal_5";
HAnimHumanoid43.segments[191] = HAnimSegment1878;

HAnimSegment HAnimSegment1879 = createNode("HAnimSegment");
HAnimSegment1879.USE = "hanim_r_metacarpal_5";
HAnimHumanoid43.segments[192] = HAnimSegment1879;

HAnimSegment HAnimSegment1880 = createNode("HAnimSegment");
HAnimSegment1880.USE = "hanim_l_metatarsal_2";
HAnimHumanoid43.segments[193] = HAnimSegment1880;

HAnimSegment HAnimSegment1881 = createNode("HAnimSegment");
HAnimSegment1881.USE = "hanim_r_metatarsal_2";
HAnimHumanoid43.segments[194] = HAnimSegment1881;

HAnimSegment HAnimSegment1882 = createNode("HAnimSegment");
HAnimSegment1882.USE = "hanim_l_scapula";
HAnimHumanoid43.segments[195] = HAnimSegment1882;

HAnimSegment HAnimSegment1883 = createNode("HAnimSegment");
HAnimSegment1883.USE = "hanim_r_scapula";
HAnimHumanoid43.segments[196] = HAnimSegment1883;

HAnimSegment HAnimSegment1884 = createNode("HAnimSegment");
HAnimSegment1884.USE = "hanim_l_talus";
HAnimHumanoid43.segments[197] = HAnimSegment1884;

HAnimSegment HAnimSegment1885 = createNode("HAnimSegment");
HAnimSegment1885.USE = "hanim_r_talus";
HAnimHumanoid43.segments[198] = HAnimSegment1885;

HAnimSegment HAnimSegment1886 = createNode("HAnimSegment");
HAnimSegment1886.USE = "hanim_l_tarsal_distal_phalanx_2";
HAnimHumanoid43.segments[199] = HAnimSegment1886;

HAnimSegment HAnimSegment1887 = createNode("HAnimSegment");
HAnimSegment1887.USE = "hanim_r_tarsal_distal_phalanx_2";
HAnimHumanoid43.segments[200] = HAnimSegment1887;

HAnimSegment HAnimSegment1888 = createNode("HAnimSegment");
HAnimSegment1888.USE = "hanim_l_tarsal_proximal_phalanx_2";
HAnimHumanoid43.segments[201] = HAnimSegment1888;

HAnimSegment HAnimSegment1889 = createNode("HAnimSegment");
HAnimSegment1889.USE = "hanim_r_tarsal_proximal_phalanx_2";
HAnimHumanoid43.segments[202] = HAnimSegment1889;

HAnimSegment HAnimSegment1890 = createNode("HAnimSegment");
HAnimSegment1890.USE = "hanim_l_thigh";
HAnimHumanoid43.segments[203] = HAnimSegment1890;

HAnimSegment HAnimSegment1891 = createNode("HAnimSegment");
HAnimSegment1891.USE = "hanim_r_thigh";
HAnimHumanoid43.segments[204] = HAnimSegment1891;

HAnimSegment HAnimSegment1892 = createNode("HAnimSegment");
HAnimSegment1892.USE = "hanim_l_upperarm";
HAnimHumanoid43.segments[205] = HAnimSegment1892;

HAnimSegment HAnimSegment1893 = createNode("HAnimSegment");
HAnimSegment1893.USE = "hanim_r_upperarm";
HAnimHumanoid43.segments[206] = HAnimSegment1893;

HAnimSite HAnimSite1894 = createNode("HAnimSite");
HAnimSite1894.USE = "hanim_crotch_pt";
HAnimHumanoid43.viewpoints[207] = HAnimSite1894;

HAnimSite HAnimSite1895 = createNode("HAnimSite");
HAnimSite1895.USE = "hanim_skull_vertex_pt";
HAnimHumanoid43.viewpoints[208] = HAnimSite1895;

HAnimSite HAnimSite1896 = createNode("HAnimSite");
HAnimSite1896.USE = "hanim_sellion_pt";
HAnimHumanoid43.viewpoints[209] = HAnimSite1896;

HAnimSite HAnimSite1897 = createNode("HAnimSite");
HAnimSite1897.USE = "hanim_supramenton_pt";
HAnimHumanoid43.viewpoints[210] = HAnimSite1897;

HAnimSite HAnimSite1898 = createNode("HAnimSite");
HAnimSite1898.USE = "hanim_nuchale_pt";
HAnimHumanoid43.viewpoints[211] = HAnimSite1898;

HAnimSite HAnimSite1899 = createNode("HAnimSite");
HAnimSite1899.USE = "hanim_suprasternale_pt";
HAnimHumanoid43.viewpoints[212] = HAnimSite1899;

HAnimSite HAnimSite1900 = createNode("HAnimSite");
HAnimSite1900.USE = "hanim_cervicale_pt";
HAnimHumanoid43.viewpoints[213] = HAnimSite1900;

HAnimSite HAnimSite1901 = createNode("HAnimSite");
HAnimSite1901.USE = "hanim_substernale_pt";
HAnimHumanoid43.viewpoints[214] = HAnimSite1901;

HAnimSite HAnimSite1902 = createNode("HAnimSite");
HAnimSite1902.USE = "hanim_rib10_midspine_pt";
HAnimHumanoid43.viewpoints[215] = HAnimSite1902;

HAnimSite HAnimSite1903 = createNode("HAnimSite");
HAnimSite1903.USE = "hanim_waist_preferred_posterior_pt";
HAnimHumanoid43.viewpoints[216] = HAnimSite1903;

HAnimSite HAnimSite1904 = createNode("HAnimSite");
HAnimSite1904.USE = "hanim_navel_pt";
HAnimHumanoid43.viewpoints[217] = HAnimSite1904;

HAnimSite HAnimSite1905 = createNode("HAnimSite");
HAnimSite1905.USE = "hanim_l_acromion_pt";
HAnimHumanoid43.viewpoints[218] = HAnimSite1905;

HAnimSite HAnimSite1906 = createNode("HAnimSite");
HAnimSite1906.USE = "hanim_r_acromion_pt";
HAnimHumanoid43.viewpoints[219] = HAnimSite1906;

HAnimSite HAnimSite1907 = createNode("HAnimSite");
HAnimSite1907.USE = "hanim_r_asis_pt";
HAnimHumanoid43.viewpoints[220] = HAnimSite1907;

HAnimSite HAnimSite1908 = createNode("HAnimSite");
HAnimSite1908.USE = "hanim_l_asis_pt";
HAnimHumanoid43.viewpoints[221] = HAnimSite1908;

HAnimSite HAnimSite1909 = createNode("HAnimSite");
HAnimSite1909.USE = "hanim_l_axilla_distal_pt";
HAnimHumanoid43.viewpoints[222] = HAnimSite1909;

HAnimSite HAnimSite1910 = createNode("HAnimSite");
HAnimSite1910.USE = "hanim_r_axilla_distal_pt";
HAnimHumanoid43.viewpoints[223] = HAnimSite1910;

HAnimSite HAnimSite1911 = createNode("HAnimSite");
HAnimSite1911.USE = "hanim_l_axilla_proximal_pt";
HAnimHumanoid43.viewpoints[224] = HAnimSite1911;

HAnimSite HAnimSite1912 = createNode("HAnimSite");
HAnimSite1912.USE = "hanim_r_axilla_proximal_pt";
HAnimHumanoid43.viewpoints[225] = HAnimSite1912;

HAnimSite HAnimSite1913 = createNode("HAnimSite");
HAnimSite1913.USE = "hanim_l_calcaneus_posterior_pt";
HAnimHumanoid43.viewpoints[226] = HAnimSite1913;

HAnimSite HAnimSite1914 = createNode("HAnimSite");
HAnimSite1914.USE = "hanim_r_calcaneus_posterior_pt";
HAnimHumanoid43.viewpoints[227] = HAnimSite1914;

HAnimSite HAnimSite1915 = createNode("HAnimSite");
HAnimSite1915.USE = "hanim_l_carpal_distal_phalanx_1_pt";
HAnimHumanoid43.viewpoints[228] = HAnimSite1915;

HAnimSite HAnimSite1916 = createNode("HAnimSite");
HAnimSite1916.USE = "hanim_r_carpal_distal_phalanx_1_pt";
HAnimHumanoid43.viewpoints[229] = HAnimSite1916;

HAnimSite HAnimSite1917 = createNode("HAnimSite");
HAnimSite1917.USE = "hanim_l_carpal_distal_phalanx_2_pt";
HAnimHumanoid43.viewpoints[230] = HAnimSite1917;

HAnimSite HAnimSite1918 = createNode("HAnimSite");
HAnimSite1918.USE = "hanim_r_carpal_distal_phalanx_2_pt";
HAnimHumanoid43.viewpoints[231] = HAnimSite1918;

HAnimSite HAnimSite1919 = createNode("HAnimSite");
HAnimSite1919.USE = "hanim_l_carpal_distal_phalanx_3_pt";
HAnimHumanoid43.viewpoints[232] = HAnimSite1919;

HAnimSite HAnimSite1920 = createNode("HAnimSite");
HAnimSite1920.USE = "hanim_r_carpal_distal_phalanx_3_pt";
HAnimHumanoid43.viewpoints[233] = HAnimSite1920;

HAnimSite HAnimSite1921 = createNode("HAnimSite");
HAnimSite1921.USE = "hanim_l_carpal_distal_phalanx_4_pt";
HAnimHumanoid43.viewpoints[234] = HAnimSite1921;

HAnimSite HAnimSite1922 = createNode("HAnimSite");
HAnimSite1922.USE = "hanim_r_carpal_distal_phalanx_4_pt";
HAnimHumanoid43.viewpoints[235] = HAnimSite1922;

HAnimSite HAnimSite1923 = createNode("HAnimSite");
HAnimSite1923.USE = "hanim_l_carpal_distal_phalanx_5_pt";
HAnimHumanoid43.viewpoints[236] = HAnimSite1923;

HAnimSite HAnimSite1924 = createNode("HAnimSite");
HAnimSite1924.USE = "hanim_r_carpal_distal_phalanx_5_pt";
HAnimHumanoid43.viewpoints[237] = HAnimSite1924;

HAnimSite HAnimSite1925 = createNode("HAnimSite");
HAnimSite1925.USE = "hanim_l_clavicle_pt";
HAnimHumanoid43.viewpoints[238] = HAnimSite1925;

HAnimSite HAnimSite1926 = createNode("HAnimSite");
HAnimSite1926.USE = "hanim_r_clavicle_pt";
HAnimHumanoid43.viewpoints[239] = HAnimSite1926;

HAnimSite HAnimSite1927 = createNode("HAnimSite");
HAnimSite1927.USE = "hanim_l_dactylion_pt";
HAnimHumanoid43.viewpoints[240] = HAnimSite1927;

HAnimSite HAnimSite1928 = createNode("HAnimSite");
HAnimSite1928.USE = "hanim_r_dactylion_pt";
HAnimHumanoid43.viewpoints[241] = HAnimSite1928;

HAnimSite HAnimSite1929 = createNode("HAnimSite");
HAnimSite1929.USE = "hanim_l_femoral_lateral_epicondyle_pt";
HAnimHumanoid43.viewpoints[242] = HAnimSite1929;

HAnimSite HAnimSite1930 = createNode("HAnimSite");
HAnimSite1930.USE = "hanim_r_femoral_lateral_epicondyle_pt";
HAnimHumanoid43.viewpoints[243] = HAnimSite1930;

HAnimSite HAnimSite1931 = createNode("HAnimSite");
HAnimSite1931.USE = "hanim_l_femoral_medial_epicondyle_pt";
HAnimHumanoid43.viewpoints[244] = HAnimSite1931;

HAnimSite HAnimSite1932 = createNode("HAnimSite");
HAnimSite1932.USE = "hanim_r_femoral_medial_epicondyle_pt";
HAnimHumanoid43.viewpoints[245] = HAnimSite1932;

HAnimSite HAnimSite1933 = createNode("HAnimSite");
HAnimSite1933.USE = "hanim_l_forefoot_tip_pt";
HAnimHumanoid43.viewpoints[246] = HAnimSite1933;

HAnimSite HAnimSite1934 = createNode("HAnimSite");
HAnimSite1934.USE = "hanim_r_forefoot_tip_pt";
HAnimHumanoid43.viewpoints[247] = HAnimSite1934;

HAnimSite HAnimSite1935 = createNode("HAnimSite");
HAnimSite1935.USE = "hanim_r_gonion_pt";
HAnimHumanoid43.viewpoints[248] = HAnimSite1935;

HAnimSite HAnimSite1936 = createNode("HAnimSite");
HAnimSite1936.USE = "hanim_l_gonion_pt";
HAnimHumanoid43.viewpoints[249] = HAnimSite1936;

HAnimSite HAnimSite1937 = createNode("HAnimSite");
HAnimSite1937.USE = "hanim_l_humeral_lateral_epicondyle_pt";
HAnimHumanoid43.viewpoints[250] = HAnimSite1937;

HAnimSite HAnimSite1938 = createNode("HAnimSite");
HAnimSite1938.USE = "hanim_r_humeral_lateral_epicondyle_pt";
HAnimHumanoid43.viewpoints[251] = HAnimSite1938;

HAnimSite HAnimSite1939 = createNode("HAnimSite");
HAnimSite1939.USE = "hanim_l_humeral_medial_epicondyle_pt";
HAnimHumanoid43.viewpoints[252] = HAnimSite1939;

HAnimSite HAnimSite1940 = createNode("HAnimSite");
HAnimSite1940.USE = "hanim_r_humeral_medial_epicondyle_pt";
HAnimHumanoid43.viewpoints[253] = HAnimSite1940;

HAnimSite HAnimSite1941 = createNode("HAnimSite");
HAnimSite1941.USE = "hanim_r_iliocristale_pt";
HAnimHumanoid43.viewpoints[254] = HAnimSite1941;

HAnimSite HAnimSite1942 = createNode("HAnimSite");
HAnimSite1942.USE = "hanim_l_iliocristale_pt";
HAnimHumanoid43.viewpoints[255] = HAnimSite1942;

HAnimSite HAnimSite1943 = createNode("HAnimSite");
HAnimSite1943.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid43.viewpoints[256] = HAnimSite1943;

HAnimSite HAnimSite1944 = createNode("HAnimSite");
HAnimSite1944.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid43.viewpoints[257] = HAnimSite1944;

HAnimSite HAnimSite1945 = createNode("HAnimSite");
HAnimSite1945.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid43.viewpoints[258] = HAnimSite1945;

HAnimSite HAnimSite1946 = createNode("HAnimSite");
HAnimSite1946.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid43.viewpoints[259] = HAnimSite1946;

HAnimSite HAnimSite1947 = createNode("HAnimSite");
HAnimSite1947.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid43.viewpoints[260] = HAnimSite1947;

HAnimSite HAnimSite1948 = createNode("HAnimSite");
HAnimSite1948.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid43.viewpoints[261] = HAnimSite1948;

HAnimSite HAnimSite1949 = createNode("HAnimSite");
HAnimSite1949.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid43.viewpoints[262] = HAnimSite1949;

HAnimSite HAnimSite1950 = createNode("HAnimSite");
HAnimSite1950.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid43.viewpoints[263] = HAnimSite1950;

HAnimSite HAnimSite1951 = createNode("HAnimSite");
HAnimSite1951.USE = "hanim_l_metacarpal_phalanx_2_pt";
HAnimHumanoid43.viewpoints[264] = HAnimSite1951;

HAnimSite HAnimSite1952 = createNode("HAnimSite");
HAnimSite1952.USE = "hanim_r_metacarpal_phalanx_2_pt";
HAnimHumanoid43.viewpoints[265] = HAnimSite1952;

HAnimSite HAnimSite1953 = createNode("HAnimSite");
HAnimSite1953.USE = "hanim_l_metacarpal_phalanx_5_pt";
HAnimHumanoid43.viewpoints[266] = HAnimSite1953;

HAnimSite HAnimSite1954 = createNode("HAnimSite");
HAnimSite1954.USE = "hanim_r_metacarpal_phalanx_5_pt";
HAnimHumanoid43.viewpoints[267] = HAnimSite1954;

HAnimSite HAnimSite1955 = createNode("HAnimSite");
HAnimSite1955.USE = "hanim_l_metatarsal_phalanx_1_pt";
HAnimHumanoid43.viewpoints[268] = HAnimSite1955;

HAnimSite HAnimSite1956 = createNode("HAnimSite");
HAnimSite1956.USE = "hanim_r_metatarsal_phalanx_1_pt";
HAnimHumanoid43.viewpoints[269] = HAnimSite1956;

HAnimSite HAnimSite1957 = createNode("HAnimSite");
HAnimSite1957.USE = "hanim_l_metatarsal_phalanx_5_pt";
HAnimHumanoid43.viewpoints[270] = HAnimSite1957;

HAnimSite HAnimSite1958 = createNode("HAnimSite");
HAnimSite1958.USE = "hanim_r_metatarsal_phalanx_5_pt";
HAnimHumanoid43.viewpoints[271] = HAnimSite1958;

HAnimSite HAnimSite1959 = createNode("HAnimSite");
HAnimSite1959.USE = "hanim_r_neck_base_pt";
HAnimHumanoid43.viewpoints[272] = HAnimSite1959;

HAnimSite HAnimSite1960 = createNode("HAnimSite");
HAnimSite1960.USE = "hanim_l_neck_base_pt";
HAnimHumanoid43.viewpoints[273] = HAnimSite1960;

HAnimSite HAnimSite1961 = createNode("HAnimSite");
HAnimSite1961.USE = "hanim_l_olecranon_pt";
HAnimHumanoid43.viewpoints[274] = HAnimSite1961;

HAnimSite HAnimSite1962 = createNode("HAnimSite");
HAnimSite1962.USE = "hanim_r_olecranon_pt";
HAnimHumanoid43.viewpoints[275] = HAnimSite1962;

HAnimSite HAnimSite1963 = createNode("HAnimSite");
HAnimSite1963.USE = "hanim_r_psis_pt";
HAnimHumanoid43.viewpoints[276] = HAnimSite1963;

HAnimSite HAnimSite1964 = createNode("HAnimSite");
HAnimSite1964.USE = "hanim_l_psis_pt";
HAnimHumanoid43.viewpoints[277] = HAnimSite1964;

HAnimSite HAnimSite1965 = createNode("HAnimSite");
HAnimSite1965.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid43.viewpoints[278] = HAnimSite1965;

HAnimSite HAnimSite1966 = createNode("HAnimSite");
HAnimSite1966.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid43.viewpoints[279] = HAnimSite1966;

HAnimSite HAnimSite1967 = createNode("HAnimSite");
HAnimSite1967.USE = "hanim_l_radiale_pt";
HAnimHumanoid43.viewpoints[280] = HAnimSite1967;

HAnimSite HAnimSite1968 = createNode("HAnimSite");
HAnimSite1968.USE = "hanim_r_radiale_pt";
HAnimHumanoid43.viewpoints[281] = HAnimSite1968;

HAnimSite HAnimSite1969 = createNode("HAnimSite");
HAnimSite1969.USE = "hanim_r_rib10_pt";
HAnimHumanoid43.viewpoints[282] = HAnimSite1969;

HAnimSite HAnimSite1970 = createNode("HAnimSite");
HAnimSite1970.USE = "hanim_l_rib10_pt";
HAnimHumanoid43.viewpoints[283] = HAnimSite1970;

HAnimSite HAnimSite1971 = createNode("HAnimSite");
HAnimSite1971.USE = "hanim_temporomandibular_l_site_pt";
HAnimHumanoid43.viewpoints[284] = HAnimSite1971;

HAnimSite HAnimSite1972 = createNode("HAnimSite");
HAnimSite1972.USE = "hanim_temporomandibular_r_site_pt";
HAnimHumanoid43.viewpoints[285] = HAnimSite1972;

HAnimSite HAnimSite1973 = createNode("HAnimSite");
HAnimSite1973.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid43.viewpoints[286] = HAnimSite1973;

HAnimSite HAnimSite1974 = createNode("HAnimSite");
HAnimSite1974.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid43.viewpoints[287] = HAnimSite1974;

HAnimSite HAnimSite1975 = createNode("HAnimSite");
HAnimSite1975.USE = "hanim_l_tarsal_distal_phalanx_2_pt";
HAnimHumanoid43.viewpoints[288] = HAnimSite1975;

HAnimSite HAnimSite1976 = createNode("HAnimSite");
HAnimSite1976.USE = "hanim_r_tarsal_distal_phalanx_2_pt";
HAnimHumanoid43.viewpoints[289] = HAnimSite1976;

HAnimSite HAnimSite1977 = createNode("HAnimSite");
HAnimSite1977.USE = "hanim_r_thelion_pt";
HAnimHumanoid43.viewpoints[290] = HAnimSite1977;

HAnimSite HAnimSite1978 = createNode("HAnimSite");
HAnimSite1978.USE = "hanim_l_thelion_pt";
HAnimHumanoid43.viewpoints[291] = HAnimSite1978;

HAnimSite HAnimSite1979 = createNode("HAnimSite");
HAnimSite1979.USE = "hanim_r_tragion_pt";
HAnimHumanoid43.viewpoints[292] = HAnimSite1979;

HAnimSite HAnimSite1980 = createNode("HAnimSite");
HAnimSite1980.USE = "hanim_l_tragion_pt";
HAnimHumanoid43.viewpoints[293] = HAnimSite1980;

HAnimSite HAnimSite1981 = createNode("HAnimSite");
HAnimSite1981.USE = "hanim_r_trochanterion_pt";
HAnimHumanoid43.viewpoints[294] = HAnimSite1981;

HAnimSite HAnimSite1982 = createNode("HAnimSite");
HAnimSite1982.USE = "hanim_l_trochanterion_pt";
HAnimHumanoid43.viewpoints[295] = HAnimSite1982;

HAnimSite HAnimSite1983 = createNode("HAnimSite");
HAnimSite1983.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid43.viewpoints[296] = HAnimSite1983;

HAnimSite HAnimSite1984 = createNode("HAnimSite");
HAnimSite1984.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid43.viewpoints[297] = HAnimSite1984;

children[12] = HAnimHumanoid43;

}
