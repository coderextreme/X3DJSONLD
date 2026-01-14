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
meta3.content = "DiamondManLOA_0.x3d";
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
meta8.content = "Tue, 09 Sep 2025 19:37:54 GMT";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "reference";
meta9.content = "../Templates/DiamondManLOA_0.x3d";
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
meta21.name = "error";
meta21.content = "Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported";
head1.meta[19] = meta21;

meta meta22 = createNode("meta");
meta22.name = "motto";
meta22.content = "(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\"";
head1.meta[20] = meta22;

meta meta23 = createNode("meta");
meta23.name = "Image";
meta23.content = "humanoid_landmark_locations.gif";
head1.meta[21] = meta23;

meta meta24 = createNode("meta");
meta24.name = "Image";
meta24.content = "http://HAnim.org/Specifications/HAnim1.1/humanoid_landmark_locations.gif";
head1.meta[22] = meta24;

meta meta25 = createNode("meta");
meta25.name = "identifier";
meta25.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA_0.x3d";
head1.meta[23] = meta25;

head = head1;

WorldInfo WorldInfo27 = createNode("WorldInfo");
WorldInfo27.title = "HANIM 2.0 Default Joint Centers, LOA0";
WorldInfo27.info = new MFString(new java.lang.String["HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 0 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf"]);
children = new MFNode();

children[0] = WorldInfo27;

NavigationInfo NavigationInfo28 = createNode("NavigationInfo");
NavigationInfo28.speed = 1.5;
children[1] = NavigationInfo28;

Viewpoint Viewpoint29 = createNode("Viewpoint");
Viewpoint29.description = "Diamond Man, LOA 0";
Viewpoint29.position = new SFVec3f(new float[0,1,3]);
Viewpoint29.centerOfRotation = new SFVec3f(new float[0,1,0]);
children[2] = Viewpoint29;

HAnimHumanoid HAnimHumanoid30 = createNode("HAnimHumanoid");
HAnimHumanoid30.DEF = "hanim_humanoid";
HAnimHumanoid30.name = "humanoid";
HAnimHumanoid30.version = "1.0";
MetadataSet MetadataSet31 = createNode("MetadataSet");
MetadataSet31.name = "HAnimHumanoid.info";
MetadataSet31.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid";
MetadataString MetadataString32 = createNode("MetadataString");
MetadataString32.name = "authorEmail";
MetadataSet31.value = new MFNode();

MetadataSet31.value[0] = MetadataString32;

MetadataString MetadataString33 = createNode("MetadataString");
MetadataString33.name = "authorName";
MetadataSet31.value[1] = MetadataString33;

MetadataString MetadataString34 = createNode("MetadataString");
MetadataString34.name = "copyright";
MetadataSet31.value[2] = MetadataString34;

MetadataString MetadataString35 = createNode("MetadataString");
MetadataString35.name = "creationDate";
MetadataSet31.value[3] = MetadataString35;

MetadataString MetadataString36 = createNode("MetadataString");
MetadataString36.name = "humanoidVersion";
MetadataSet31.value[4] = MetadataString36;

MetadataString MetadataString37 = createNode("MetadataString");
MetadataString37.name = "usageRestrictions";
MetadataSet31.value[5] = MetadataString37;

HAnimHumanoid30.metadata = new SFNode();

HAnimHumanoid30.metadata[0] = MetadataSet31;

HAnimJoint HAnimJoint38 = createNode("HAnimJoint");
HAnimJoint38.DEF = "hanim_HumanoidRoot";
HAnimJoint38.name = "humanoid_root";
HAnimJoint38.center = new SFVec3f(new float[0,0.824,0.0277]);
HAnimJoint HAnimJoint39 = createNode("HAnimJoint");
HAnimJoint39.DEF = "hanim_sacroiliac";
HAnimJoint39.name = "sacroiliac";
HAnimJoint39.center = new SFVec3f(new float[0,0.9149,0.0016]);
HAnimSegment HAnimSegment40 = createNode("HAnimSegment");
HAnimSegment40.DEF = "hanim_pelvis";
HAnimSegment40.name = "pelvis";
Transform Transform41 = createNode("Transform");
Transform41.translation = new SFVec3f(new float[0,0.9149,0.0016]);
Shape Shape42 = createNode("Shape");
Shape42.DEF = "DiamondShape";
Appearance Appearance43 = createNode("Appearance");
Material Material44 = createNode("Material");
Material44.diffuseColor = new SFColor(new float[1,1,0]);
Appearance43.material = Material44;

Shape42.appearance = Appearance43;

IndexedFaceSet IndexedFaceSet45 = createNode("IndexedFaceSet");
IndexedFaceSet45.creaseAngle = 0.5;
IndexedFaceSet45.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate46 = createNode("Coordinate");
Coordinate46.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet45.coord = Coordinate46;

Shape42.geometry = IndexedFaceSet45;

Transform41.child = new undefined();

Transform41.child[0] = Shape42;

HAnimSegment40.children = new MFNode();

HAnimSegment40.children[0] = Transform41;

HAnimJoint39.children = new MFNode();

HAnimJoint39.children[0] = HAnimSegment40;

HAnimJoint38.children = new MFNode();

HAnimJoint38.children[0] = HAnimJoint39;

HAnimHumanoid30.joints[1] = HAnimJoint38;

HAnimJoint HAnimJoint47 = createNode("HAnimJoint");
HAnimJoint47.USE = "hanim_HumanoidRoot";
HAnimHumanoid30.joints[2] = HAnimJoint47;

HAnimJoint HAnimJoint48 = createNode("HAnimJoint");
HAnimJoint48.USE = "hanim_sacroiliac";
HAnimHumanoid30.joints[3] = HAnimJoint48;

HAnimSegment HAnimSegment49 = createNode("HAnimSegment");
HAnimSegment49.USE = "hanim_pelvis";
HAnimHumanoid30.segments[4] = HAnimSegment49;

HAnimSite HAnimSite50 = createNode("HAnimSite");
HAnimSite50.DEF = "hanim_site_view";
HAnimSite50.name = "site_view";
Viewpoint Viewpoint51 = createNode("Viewpoint");
Viewpoint51.DEF = "InclinedView";
Viewpoint51.description = "Inclined View";
Viewpoint51.position = new SFVec3f(new float[1.62,1.05,2.06]);
Viewpoint51.orientation = new SFRotation(new float[-0.113,0.993,0.0347,0.671]);
HAnimSite50.children = new MFNode();

HAnimSite50.children[0] = Viewpoint51;

Viewpoint Viewpoint52 = createNode("Viewpoint");
Viewpoint52.DEF = "FrontView";
Viewpoint52.description = "Front View";
Viewpoint52.position = new SFVec3f(new float[0,0.854,2.57665]);
HAnimSite50.children[1] = Viewpoint52;

Viewpoint Viewpoint53 = createNode("Viewpoint");
Viewpoint53.DEF = "SideView";
Viewpoint53.description = "Side View";
Viewpoint53.position = new SFVec3f(new float[2.5929,0.854,0]);
Viewpoint53.orientation = new SFRotation(new float[0,1,0,1.57079]);
HAnimSite50.children[2] = Viewpoint53;

Viewpoint Viewpoint54 = createNode("Viewpoint");
Viewpoint54.DEF = "TopView";
Viewpoint54.description = "Top View";
Viewpoint54.position = new SFVec3f(new float[0,3.4495,0]);
Viewpoint54.orientation = new SFRotation(new float[1,0,0,-1.57079]);
HAnimSite50.children[3] = Viewpoint54;

HAnimHumanoid30.viewpoints[5] = HAnimSite50;

children[3] = HAnimHumanoid30;

}
