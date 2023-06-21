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
meta3.content = "DiamondManLOA0.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "description";
meta4.content = "HAnim skeletal structure for Level of Action (LOA) zero, with one diamond at the base node for the structure. HumanoidRoot only, so this is the minimum legal HAnim humanoid.";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "creator";
meta5.content = "Matthew T. Beitler";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "translator";
meta6.content = "Joel S. Pawloski";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "created";
meta7.content = "12 November 2001";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "modified";
meta8.content = "8 March 2021";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "motto";
meta9.content = "(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\"";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "reference";
meta10.content = "HAnim 2.0 specification, Appendix A: Nominal human body dimensions and levels of articulation (LOAs)";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "reference";
meta11.content = "https://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/BodyDimensionsAndLOAs.html";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "reference";
meta12.content = "https://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/BodyDimensionsAndLOAs.html#LevelOfArticulationZero";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "reference";
meta13.content = "HAnim 1.1 specification, Appendix A: Suggested Body Dimensions and Levels of Articulation, Level of Articulation Zero";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "reference";
meta14.content = "http://HAnim.org/Specifications/HAnim1.1/appendices.html#appendixa";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "reference";
meta15.content = "http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA0.wrl";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "reference";
meta16.content = "http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA0-diamond.wrl";
head1.meta[14] = meta16;

meta meta17 = createNode("meta");
meta17.name = "reference";
meta17.content = "http://ece.uwaterloo.ca/~HAnim";
head1.meta[15] = meta17;

meta meta18 = createNode("meta");
meta18.name = "reference";
meta18.content = "http://www.cis.upenn.edu/~badler/anthro/89-71.pdf";
head1.meta[16] = meta18;

meta meta19 = createNode("meta");
meta19.name = "reference";
meta19.content = "http://www.cis.upenn.edu/~badler/anthro/89-71.ps";
head1.meta[17] = meta19;

meta meta20 = createNode("meta");
meta20.name = "reference";
meta20.content = "http://www.cis.upenn.edu/~beitler";
head1.meta[18] = meta20;

meta meta21 = createNode("meta");
meta21.name = "Image";
meta21.content = "humanoid_landmark_locations.gif";
head1.meta[19] = meta21;

meta meta22 = createNode("meta");
meta22.name = "Image";
meta22.content = "http://HAnim.org/Specifications/HAnim1.1/humanoid_landmark_locations.gif";
head1.meta[20] = meta22;

meta meta23 = createNode("meta");
meta23.name = "identifier";
meta23.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA0.x3d";
head1.meta[21] = meta23;

meta meta24 = createNode("meta");
meta24.name = "generator";
meta24.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[22] = meta24;

meta meta25 = createNode("meta");
meta25.name = "license";
meta25.content = "../license.html";
head1.meta[23] = meta25;

head = head1;

WorldInfo WorldInfo27 = createNode("WorldInfo");
WorldInfo27.info = new MFString(new java.lang.String["HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 0 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf"]);
WorldInfo27.title = "HANIM 2.0 Default Joint Centers, LOA0";
children = new MFNode();

children[0] = WorldInfo27;

NavigationInfo NavigationInfo28 = createNode("NavigationInfo");
NavigationInfo28.speed = 1.5;
children[1] = NavigationInfo28;

Viewpoint Viewpoint29 = createNode("Viewpoint");
Viewpoint29.centerOfRotation = new SFVec3f(new float[0,1,0]);
Viewpoint29.description = "Diamond Man, LOA 0";
Viewpoint29.position = new SFVec3f(new float[0,1,3]);
children[2] = Viewpoint29;

HAnimHumanoid HAnimHumanoid30 = createNode("HAnimHumanoid");
HAnimHumanoid30.name = "humanoid";
HAnimHumanoid30.DEF = "hanim_humanoid";
HAnimHumanoid30.loa = 0;
HAnimHumanoid30.version = "2.0";
//HAnimHumanoid original info='\"authorEmail=beitler@graphics.cis.upenn.edu beitler@acm.org\" \"authorName=Matthew T. Beitler\" \"copyright=Copyright 1999 Matthew T. Beitler\" \"creationDate=05/12/99\" \"humanoidVersion=JointCenters 1.1 LOA0\" \"usageRestrictions=PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided _as-is_ and without warranty of any kind express implied or otherwise including without limitation any warranty of merchantability or fitness for a particular purpose.\"'
MetadataSet MetadataSet31 = createNode("MetadataSet");
MetadataSet31.name = "HAnimHumanoid.info";
MetadataSet31.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid";
MetadataString MetadataString32 = createNode("MetadataString");
MetadataString32.name = "authorEmail";
MetadataString32.value = new MFString(new java.lang.String["beitler@graphics.cis.upenn.edu beitler@acm.org"]);
MetadataSet31.value = new MFNode();

MetadataSet31.value[0] = MetadataString32;

MetadataString MetadataString33 = createNode("MetadataString");
MetadataString33.name = "authorName";
MetadataString33.value = new MFString(new java.lang.String["Matthew T. Beitler"]);
MetadataSet31.value[1] = MetadataString33;

MetadataString MetadataString34 = createNode("MetadataString");
MetadataString34.name = "copyright";
MetadataString34.value = new MFString(new java.lang.String["Copyright 1999 Matthew T. Beitler"]);
MetadataSet31.value[2] = MetadataString34;

MetadataString MetadataString35 = createNode("MetadataString");
MetadataString35.name = "creationDate";
MetadataString35.value = new MFString(new java.lang.String["05/12/99"]);
MetadataSet31.value[3] = MetadataString35;

MetadataString MetadataString36 = createNode("MetadataString");
MetadataString36.name = "humanoidVersion";
MetadataString36.value = new MFString(new java.lang.String["JointCenters 1.1 LOA0"]);
MetadataSet31.value[4] = MetadataString36;

MetadataString MetadataString37 = createNode("MetadataString");
MetadataString37.name = "usageRestrictions";
MetadataString37.value = new MFString(new java.lang.String["PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided _as-is_ and without warranty of any kind express implied or otherwise including without limitation any warranty of merchantability or fitness for a particular purpose."]);
MetadataSet31.value[5] = MetadataString37;

HAnimHumanoid30.metadata = new SFNode();

HAnimHumanoid30.metadata[0] = MetadataSet31;

HAnimJoint HAnimJoint38 = createNode("HAnimJoint");
HAnimJoint38.name = "humanoid_root";
HAnimJoint38.DEF = "hanim_humanoid_root";
HAnimJoint38.center = new SFVec3f(new float[0,0.824,0.0277]);
HAnimJoint38.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint38.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint38.stiffness = new SFVec3f(new float[0,0,0]);
HAnimJoint HAnimJoint39 = createNode("HAnimJoint");
HAnimJoint39.name = "sacroiliac";
HAnimJoint39.DEF = "hanim_sacroiliac";
HAnimJoint39.center = new SFVec3f(new float[0,0.9149,0.0016]);
HAnimJoint39.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint39.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint39.stiffness = new SFVec3f(new float[0,0,0]);
HAnimSegment HAnimSegment40 = createNode("HAnimSegment");
HAnimSegment40.name = "pelvis";
HAnimSegment40.DEF = "hanim_pelvis";
Transform Transform41 = createNode("Transform");
Transform41.translation = new SFVec3f(new float[0,0.9149,0.0016]);
Shape Shape42 = createNode("Shape");
Shape42.DEF = "DiamondShape";
IndexedFaceSet IndexedFaceSet43 = createNode("IndexedFaceSet");
IndexedFaceSet43.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet43.creaseAngle = 0.5;
Coordinate Coordinate44 = createNode("Coordinate");
Coordinate44.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet43.coord = Coordinate44;

Shape42.geometry = IndexedFaceSet43;

Appearance Appearance45 = createNode("Appearance");
Material Material46 = createNode("Material");
Material46.diffuseColor = new SFColor(new float[1,1,0]);
Appearance45.material = Material46;

Shape42.appearance = Appearance45;

Transform41.children = new MFNode();

Transform41.children[0] = Shape42;

HAnimSegment40.children = new MFNode();

HAnimSegment40.children[0] = Transform41;

HAnimJoint39.children = new MFNode();

HAnimJoint39.children[0] = HAnimSegment40;

HAnimJoint38.children = new MFNode();

HAnimJoint38.children[0] = HAnimJoint39;

HAnimHumanoid30.joints[1] = HAnimJoint38;

HAnimSite HAnimSite47 = createNode("HAnimSite");
HAnimSite47.name = "site_view";
HAnimSite47.DEF = "hanim_site_view";
Viewpoint Viewpoint48 = createNode("Viewpoint");
Viewpoint48.DEF = "InclinedView";
Viewpoint48.description = "Inclined View";
Viewpoint48.orientation = new SFRotation(new float[-0.113,0.993,0.0347,0.671]);
Viewpoint48.position = new SFVec3f(new float[1.62,1.05,2.06]);
HAnimSite47.children = new MFNode();

HAnimSite47.children[0] = Viewpoint48;

Viewpoint Viewpoint49 = createNode("Viewpoint");
Viewpoint49.DEF = "FrontView";
Viewpoint49.description = "Front View";
Viewpoint49.position = new SFVec3f(new float[0,0.854,2.57665]);
HAnimSite47.children[1] = Viewpoint49;

Viewpoint Viewpoint50 = createNode("Viewpoint");
Viewpoint50.DEF = "SideView";
Viewpoint50.description = "Side View";
Viewpoint50.orientation = new SFRotation(new float[0,1,0,1.57079]);
Viewpoint50.position = new SFVec3f(new float[2.5929,0.854,0]);
HAnimSite47.children[2] = Viewpoint50;

Viewpoint Viewpoint51 = createNode("Viewpoint");
Viewpoint51.DEF = "TopView";
Viewpoint51.description = "Top View";
Viewpoint51.orientation = new SFRotation(new float[1,0,0,-1.57079]);
Viewpoint51.position = new SFVec3f(new float[0,3.4495,0]);
HAnimSite47.children[3] = Viewpoint51;

HAnimHumanoid30.viewpoints[2] = HAnimSite47;

HAnimJoint HAnimJoint52 = createNode("HAnimJoint");
HAnimJoint52.USE = "hanim_humanoid_root";
HAnimHumanoid30.joints[3] = HAnimJoint52;

HAnimJoint HAnimJoint53 = createNode("HAnimJoint");
HAnimJoint53.USE = "hanim_sacroiliac";
HAnimHumanoid30.joints[4] = HAnimJoint53;

HAnimSegment HAnimSegment54 = createNode("HAnimSegment");
HAnimSegment54.USE = "hanim_pelvis";
HAnimHumanoid30.segments[5] = HAnimSegment54;

children[3] = HAnimHumanoid30;

}
