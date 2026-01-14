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
meta3.content = "DiamondManLOA1.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "description";
meta4.content = "HAnim skeletal structure for Level of Action (LOA) one, with diamonds at the Joint centers, also includes HAnimSite feaature points. LOA-1 is typical low-end real-time 3D hierarchy.";
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
meta8.content = "Mon, 15 Sep 2025 05:18:46 GMT";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "Image";
meta9.content = "images/BonesAllSkeletonFrontViewLOA1.png";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "Image";
meta10.content = "humanoid_landmark_locations.gif";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "Image";
meta11.content = "http://HAnim.org/Specifications/HAnim1.1/humanoid_landmark_locations.gif";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "motto";
meta12.content = "(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\"";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "warning";
meta13.content = "Still needs comments on CAESAR feature points inserted";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "reference";
meta14.content = "HAnim 1.1 specification, Appendix A: Suggested Body Dimensions and Levels of Articulation, Level of Articulation Two";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "reference";
meta15.content = "http://HAnim.org/Specifications/HAnim1.1/appendices.html#appendixa";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "reference";
meta16.content = "http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1.wrl";
head1.meta[14] = meta16;

meta meta17 = createNode("meta");
meta17.name = "reference";
meta17.content = "http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1-diamond.wrl";
head1.meta[15] = meta17;

meta meta18 = createNode("meta");
meta18.name = "reference";
meta18.content = "http://ece.uwaterloo.ca/~HAnim";
head1.meta[16] = meta18;

meta meta19 = createNode("meta");
meta19.name = "reference";
meta19.content = "http://www.cis.upenn.edu/~badler/anthro/89-71.pdf";
head1.meta[17] = meta19;

meta meta20 = createNode("meta");
meta20.name = "reference";
meta20.content = "http://www.cis.upenn.edu/~badler/anthro/89-71.ps";
head1.meta[18] = meta20;

meta meta21 = createNode("meta");
meta21.name = "reference";
meta21.content = "http://www.cis.upenn.edu/~beitler";
head1.meta[19] = meta21;

meta meta22 = createNode("meta");
meta22.name = "identifier";
meta22.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA1.x3d";
head1.meta[20] = meta22;

meta meta23 = createNode("meta");
meta23.name = "generator";
meta23.content = "X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit";
head1.meta[21] = meta23;

head = head1;

WorldInfo WorldInfo25 = createNode("WorldInfo");
WorldInfo25.title = "HANIM 1.1 Default Joint Centers, LOA1";
WorldInfo25.info = new MFString(new java.lang.String["HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 1 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf"]);
children = new MFNode();

children[0] = WorldInfo25;

NavigationInfo NavigationInfo26 = createNode("NavigationInfo");
NavigationInfo26.speed = 1.5;
children[1] = NavigationInfo26;

Viewpoint Viewpoint27 = createNode("Viewpoint");
Viewpoint27.description = "Diamond Man, LOA 1";
Viewpoint27.position = new SFVec3f(new float[0,1,3]);
Viewpoint27.centerOfRotation = new SFVec3f(new float[0,1,0]);
children[2] = Viewpoint27;

HAnimHumanoid HAnimHumanoid28 = createNode("HAnimHumanoid");
HAnimHumanoid28.DEF = "hanim_humanoid";
HAnimHumanoid28.name = "humanoid";
HAnimHumanoid28.loa = 1;
MetadataSet MetadataSet29 = createNode("MetadataSet");
MetadataSet29.name = "HAnimHumanoid.info";
MetadataSet29.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid";
MetadataString MetadataString30 = createNode("MetadataString");
MetadataString30.name = "authorEmail";
MetadataSet29.value = new MFNode();

MetadataSet29.value[0] = MetadataString30;

MetadataString MetadataString31 = createNode("MetadataString");
MetadataString31.name = "authorName";
MetadataSet29.value[1] = MetadataString31;

MetadataString MetadataString32 = createNode("MetadataString");
MetadataString32.name = "copyright";
MetadataSet29.value[2] = MetadataString32;

MetadataString MetadataString33 = createNode("MetadataString");
MetadataString33.name = "humanoidVersion";
MetadataSet29.value[3] = MetadataString33;

MetadataString MetadataString34 = createNode("MetadataString");
MetadataString34.name = "usageRestrictions";
MetadataSet29.value[4] = MetadataString34;

HAnimHumanoid28.metadata = new SFNode();

HAnimHumanoid28.metadata[0] = MetadataSet29;

HAnimJoint HAnimJoint35 = createNode("HAnimJoint");
HAnimJoint35.DEF = "hanim_humanoid_root";
HAnimJoint35.name = "humanoid_root";
HAnimJoint35.center = new SFVec3f(new float[0,0.824,0.0277]);
HAnimJoint HAnimJoint36 = createNode("HAnimJoint");
HAnimJoint36.DEF = "hanim_sacroiliac";
HAnimJoint36.name = "sacroiliac";
HAnimJoint36.center = new SFVec3f(new float[0,0.9149,0.0016]);
HAnimSegment HAnimSegment37 = createNode("HAnimSegment");
HAnimSegment37.DEF = "hanim_pelvis";
HAnimSegment37.name = "pelvis";
Transform Transform38 = createNode("Transform");
Transform38.translation = new SFVec3f(new float[0,0.9149,0.0016]);
Shape Shape39 = createNode("Shape");
Shape39.DEF = "DiamondShape";
Appearance Appearance40 = createNode("Appearance");
Material Material41 = createNode("Material");
Material41.diffuseColor = new SFColor(new float[1,1,0]);
Appearance40.material = Material41;

Shape39.appearance = Appearance40;

IndexedFaceSet IndexedFaceSet42 = createNode("IndexedFaceSet");
IndexedFaceSet42.creaseAngle = 0.5;
IndexedFaceSet42.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate43 = createNode("Coordinate");
Coordinate43.DEF = "points";
Coordinate43.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet42.coord = Coordinate43;

Shape39.geometry = IndexedFaceSet42;

Transform38.child = new undefined();

Transform38.child[0] = Shape39;

HAnimSegment37.children = new MFNode();

HAnimSegment37.children[0] = Transform38;

HAnimJoint36.children = new MFNode();

HAnimJoint36.children[0] = HAnimSegment37;

HAnimJoint HAnimJoint44 = createNode("HAnimJoint");
HAnimJoint44.DEF = "hanim_l_hip";
HAnimJoint44.name = "l_hip";
HAnimJoint44.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
HAnimSegment HAnimSegment45 = createNode("HAnimSegment");
HAnimSegment45.DEF = "hanim_l_thigh";
HAnimSegment45.name = "l_thigh";
Transform Transform46 = createNode("Transform");
Transform46.translation = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
Shape Shape47 = createNode("Shape");
Shape47.USE = "DiamondShape";
Transform46.child = new undefined();

Transform46.child[0] = Shape47;

HAnimSegment45.children = new MFNode();

HAnimSegment45.children[0] = Transform46;

HAnimSite HAnimSite48 = createNode("HAnimSite");
HAnimSite48.DEF = "hanim_l_knee_crease_pt";
HAnimSite48.name = "l_knee_crease_pt";
HAnimSite48.translation = new SFVec3f(new float[0.0993,0.4881,-0.0309]);
HAnimSegment45.children[1] = HAnimSite48;

HAnimSite HAnimSite49 = createNode("HAnimSite");
HAnimSite49.DEF = "hanim_l_femoral_lateral_epicondyle_pt";
HAnimSite49.name = "l_femoral_lateral_epicondyle_pt";
HAnimSite49.translation = new SFVec3f(new float[0.1598,0.4967,0.0297]);
HAnimSegment45.children[2] = HAnimSite49;

HAnimSite HAnimSite50 = createNode("HAnimSite");
HAnimSite50.DEF = "hanim_l_femoral_medial_epicondyle_pt";
HAnimSite50.name = "l_femoral_medial_epicondyle_pt";
HAnimSite50.translation = new SFVec3f(new float[0.0398,0.4946,0.0303]);
HAnimSegment45.children[3] = HAnimSite50;

HAnimJoint44.children = new MFNode();

HAnimJoint44.children[0] = HAnimSegment45;

HAnimJoint HAnimJoint51 = createNode("HAnimJoint");
HAnimJoint51.DEF = "hanim_l_knee";
HAnimJoint51.name = "l_knee";
HAnimJoint51.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
HAnimSegment HAnimSegment52 = createNode("HAnimSegment");
HAnimSegment52.DEF = "hanim_l_calf";
HAnimSegment52.name = "l_calf";
Transform Transform53 = createNode("Transform");
Transform53.translation = new SFVec3f(new float[0.104,0.4867,0.0308]);
Shape Shape54 = createNode("Shape");
Shape54.USE = "DiamondShape";
Transform53.child = new undefined();

Transform53.child[0] = Shape54;

HAnimSegment52.children = new MFNode();

HAnimSegment52.children[0] = Transform53;

HAnimJoint51.children = new MFNode();

HAnimJoint51.children[0] = HAnimSegment52;

HAnimJoint HAnimJoint55 = createNode("HAnimJoint");
HAnimJoint55.DEF = "hanim_l_talocrural";
HAnimJoint55.name = "l_talocrural";
HAnimJoint55.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
HAnimSegment HAnimSegment56 = createNode("HAnimSegment");
HAnimSegment56.DEF = "hanim_l_talus";
HAnimSegment56.name = "l_talus";
Transform Transform57 = createNode("Transform");
Transform57.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
Shape Shape58 = createNode("Shape");
Shape58.USE = "DiamondShape";
Transform57.child = new undefined();

Transform57.child[0] = Shape58;

HAnimSegment56.children = new MFNode();

HAnimSegment56.children[0] = Transform57;

HAnimSite HAnimSite59 = createNode("HAnimSite");
HAnimSite59.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite59.name = "l_lateral_malleolus_pt";
HAnimSite59.translation = new SFVec3f(new float[0.1308,0.0597,-0.1032]);
HAnimSegment56.children[1] = HAnimSite59;

HAnimSite HAnimSite60 = createNode("HAnimSite");
HAnimSite60.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite60.name = "l_medial_malleolus_pt";
HAnimSite60.translation = new SFVec3f(new float[0.089,0.0716,-0.0881]);
HAnimSegment56.children[2] = HAnimSite60;

HAnimSite HAnimSite61 = createNode("HAnimSite");
HAnimSite61.DEF = "hanim_l_sphyrion_pt";
HAnimSite61.name = "l_sphyrion_pt";
HAnimSite61.translation = new SFVec3f(new float[0.089,0.0575,-0.0943]);
HAnimSegment56.children[3] = HAnimSite61;

HAnimSite HAnimSite62 = createNode("HAnimSite");
HAnimSite62.DEF = "hanim_l_calcaneus_posterior_pt";
HAnimSite62.name = "l_calcaneus_posterior_pt";
HAnimSite62.translation = new SFVec3f(new float[0.0974,0.0259,-0.1171]);
HAnimSegment56.children[4] = HAnimSite62;

HAnimJoint55.children = new MFNode();

HAnimJoint55.children[0] = HAnimSegment56;

HAnimJoint HAnimJoint63 = createNode("HAnimJoint");
HAnimJoint63.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint63.name = "l_metatarsophalangeal_2";
HAnimJoint63.center = new SFVec3f(new float[0.1086,0.0001,0.0368]);
HAnimSegment HAnimSegment64 = createNode("HAnimSegment");
HAnimSegment64.DEF = "hanim_l_tarsal_proximal_phalanx_2";
HAnimSegment64.name = "l_tarsal_proximal_phalanx_2";
HAnimSite HAnimSite65 = createNode("HAnimSite");
HAnimSite65.DEF = "hanim_l_middistal_tip";
HAnimSite65.name = "l_middistal_tip";
HAnimSite65.translation = new SFVec3f(new float[0.1354,0.0016,0.1476]);
HAnimSegment64.children = new MFNode();

HAnimSegment64.children[0] = HAnimSite65;

HAnimSite HAnimSite66 = createNode("HAnimSite");
HAnimSite66.DEF = "hanim_l_metatarsal_phalanx_5_pt";
HAnimSite66.name = "l_metatarsal_phalanx_5_pt";
HAnimSite66.translation = new SFVec3f(new float[0.1825,0.007,0.0928]);
HAnimSegment64.children[1] = HAnimSite66;

HAnimSite HAnimSite67 = createNode("HAnimSite");
HAnimSite67.DEF = "hanim_l_metatarsal_phalanx_1_pt";
HAnimSite67.name = "l_metatarsal_phalanx_1_pt";
HAnimSite67.translation = new SFVec3f(new float[0.0816,0.0232,0.0106]);
HAnimSegment64.children[2] = HAnimSite67;

HAnimSite HAnimSite68 = createNode("HAnimSite");
HAnimSite68.DEF = "hanim_l_tarsal_distal_phalanx_2_pt";
HAnimSite68.name = "l_tarsal_distal_phalanx_2_pt";
HAnimSite68.translation = new SFVec3f(new float[0.1195,0.0079,0.1433]);
HAnimSegment64.children[3] = HAnimSite68;

HAnimJoint63.children = new MFNode();

HAnimJoint63.children[0] = HAnimSegment64;

HAnimJoint55.children[1] = HAnimJoint63;

HAnimJoint51.children[1] = HAnimJoint55;

HAnimJoint44.children[1] = HAnimJoint51;

HAnimJoint36.children[1] = HAnimJoint44;

HAnimJoint HAnimJoint69 = createNode("HAnimJoint");
HAnimJoint69.DEF = "hanim_r_hip";
HAnimJoint69.name = "r_hip";
HAnimJoint69.center = new SFVec3f(new float[-0.095,0.9171,0.0029]);
HAnimSegment HAnimSegment70 = createNode("HAnimSegment");
HAnimSegment70.DEF = "hanim_r_thigh";
HAnimSegment70.name = "r_thigh";
Transform Transform71 = createNode("Transform");
Transform71.translation = new SFVec3f(new float[-0.095,0.9171,0.0029]);
Shape Shape72 = createNode("Shape");
Shape72.USE = "DiamondShape";
Transform71.child = new undefined();

Transform71.child[0] = Shape72;

HAnimSegment70.children = new MFNode();

HAnimSegment70.children[0] = Transform71;

HAnimSite HAnimSite73 = createNode("HAnimSite");
HAnimSite73.DEF = "hanim_r_knee_crease_pt";
HAnimSite73.name = "r_knee_crease_pt";
HAnimSite73.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
HAnimSegment70.children[1] = HAnimSite73;

HAnimSite HAnimSite74 = createNode("HAnimSite");
HAnimSite74.DEF = "hanim_r_femoral_lateral_epicondyle_pt";
HAnimSite74.name = "r_femoral_lateral_epicondyle_pt";
HAnimSite74.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
HAnimSegment70.children[2] = HAnimSite74;

HAnimSite HAnimSite75 = createNode("HAnimSite");
HAnimSite75.DEF = "hanim_r_femoral_medial_epicondyle_pt";
HAnimSite75.name = "r_femoral_medial_epicondyle_pt";
HAnimSite75.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
HAnimSegment70.children[3] = HAnimSite75;

HAnimJoint69.children = new MFNode();

HAnimJoint69.children[0] = HAnimSegment70;

HAnimJoint HAnimJoint76 = createNode("HAnimJoint");
HAnimJoint76.DEF = "hanim_r_knee";
HAnimJoint76.name = "r_knee";
HAnimJoint76.center = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
HAnimSegment HAnimSegment77 = createNode("HAnimSegment");
HAnimSegment77.DEF = "hanim_r_calf";
HAnimSegment77.name = "r_calf";
Transform Transform78 = createNode("Transform");
Transform78.translation = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
Shape Shape79 = createNode("Shape");
Shape79.USE = "DiamondShape";
Transform78.child = new undefined();

Transform78.child[0] = Shape79;

HAnimSegment77.children = new MFNode();

HAnimSegment77.children[0] = Transform78;

HAnimJoint76.children = new MFNode();

HAnimJoint76.children[0] = HAnimSegment77;

HAnimJoint HAnimJoint80 = createNode("HAnimJoint");
HAnimJoint80.DEF = "hanim_r_talocrural";
HAnimJoint80.name = "r_talocrural";
HAnimJoint80.center = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
HAnimSegment HAnimSegment81 = createNode("HAnimSegment");
HAnimSegment81.DEF = "hanim_r_talus";
HAnimSegment81.name = "r_talus";
Transform Transform82 = createNode("Transform");
Transform82.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
Shape Shape83 = createNode("Shape");
Shape83.USE = "DiamondShape";
Transform82.child = new undefined();

Transform82.child[0] = Shape83;

HAnimSegment81.children = new MFNode();

HAnimSegment81.children[0] = Transform82;

HAnimSite HAnimSite84 = createNode("HAnimSite");
HAnimSite84.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite84.name = "r_lateral_malleolus_pt";
HAnimSite84.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
HAnimSegment81.children[1] = HAnimSite84;

HAnimSite HAnimSite85 = createNode("HAnimSite");
HAnimSite85.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite85.name = "r_medial_malleolus_pt";
HAnimSite85.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
HAnimSegment81.children[2] = HAnimSite85;

HAnimSite HAnimSite86 = createNode("HAnimSite");
HAnimSite86.DEF = "hanim_r_sphyrion_pt";
HAnimSite86.name = "r_sphyrion_pt";
HAnimSite86.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
HAnimSegment81.children[3] = HAnimSite86;

HAnimSite HAnimSite87 = createNode("HAnimSite");
HAnimSite87.DEF = "hanim_r_calcaneus_posterior_pt";
HAnimSite87.name = "r_calcaneus_posterior_pt";
HAnimSite87.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
HAnimSegment81.children[4] = HAnimSite87;

HAnimJoint80.children = new MFNode();

HAnimJoint80.children[0] = HAnimSegment81;

HAnimJoint HAnimJoint88 = createNode("HAnimJoint");
HAnimJoint88.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint88.name = "r_metatarsophalangeal_2";
HAnimJoint88.center = new SFVec3f(new float[-0.0801,0,0.0368]);
HAnimSegment HAnimSegment89 = createNode("HAnimSegment");
HAnimSegment89.DEF = "hanim_r_tarsal_proximal_phalanx_2";
HAnimSegment89.name = "r_tarsal_proximal_phalanx_2";
HAnimSite HAnimSite90 = createNode("HAnimSite");
HAnimSite90.DEF = "hanim_r_middistal_tip";
HAnimSite90.name = "r_middistal_tip";
HAnimSite90.translation = new SFVec3f(new float[-0.1043,-0.0227,0.145]);
HAnimSegment89.children = new MFNode();

HAnimSegment89.children[0] = HAnimSite90;

HAnimSite HAnimSite91 = createNode("HAnimSite");
HAnimSite91.DEF = "hanim_r_metatarsal_phalanx_5_pt";
HAnimSite91.name = "r_metatarsal_phalanx_5_pt";
HAnimSite91.translation = new SFVec3f(new float[-0.1523,0.0166,0.0895]);
HAnimSegment89.children[1] = HAnimSite91;

HAnimSite HAnimSite92 = createNode("HAnimSite");
HAnimSite92.DEF = "hanim_r_metatarsal_phalanx_1_pt";
HAnimSite92.name = "r_metatarsal_phalanx_1_pt";
HAnimSite92.translation = new SFVec3f(new float[-0.0521,0.026,0.0127]);
HAnimSegment89.children[2] = HAnimSite92;

HAnimSite HAnimSite93 = createNode("HAnimSite");
HAnimSite93.DEF = "hanim_r_tarsal_distal_phalanx_2_pt";
HAnimSite93.name = "r_tarsal_distal_phalanx_2_pt";
HAnimSite93.translation = new SFVec3f(new float[-0.0883,0.0134,0.1383]);
HAnimSegment89.children[3] = HAnimSite93;

HAnimJoint88.children = new MFNode();

HAnimJoint88.children[0] = HAnimSegment89;

HAnimJoint80.children[1] = HAnimJoint88;

HAnimJoint76.children[1] = HAnimJoint80;

HAnimJoint69.children[1] = HAnimJoint76;

HAnimJoint36.children[2] = HAnimJoint69;

HAnimJoint35.children = new MFNode();

HAnimJoint35.children[0] = HAnimJoint36;

HAnimJoint HAnimJoint94 = createNode("HAnimJoint");
HAnimJoint94.DEF = "hanim_vl1";
HAnimJoint94.name = "vl1";
HAnimJoint94.center = new SFVec3f(new float[-0.00405,1.07,-0.0275]);
HAnimSegment HAnimSegment95 = createNode("HAnimSegment");
HAnimSegment95.DEF = "hanim_l1";
HAnimSegment95.name = "l1";
HAnimJoint94.children = new MFNode();

HAnimJoint94.children[0] = HAnimSegment95;

HAnimJoint HAnimJoint96 = createNode("HAnimJoint");
HAnimJoint96.DEF = "hanim_l_shoulder";
HAnimJoint96.name = "l_shoulder";
HAnimJoint96.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimSegment HAnimSegment97 = createNode("HAnimSegment");
HAnimSegment97.DEF = "hanim_l_upperarm";
HAnimSegment97.name = "l_upperarm";
Transform Transform98 = createNode("Transform");
Transform98.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
Shape Shape99 = createNode("Shape");
Shape99.USE = "DiamondShape";
Transform98.child = new undefined();

Transform98.child[0] = Shape99;

HAnimSegment97.children = new MFNode();

HAnimSegment97.children[0] = Transform98;

Transform Transform100 = createNode("Transform");
Transform100.DEF = "l_upperarm_adjust";
Transform100.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
Transform100.rotation = new SFRotation(new float[1,0,0,0.119]);
Transform100.center = new SFVec3f(new float[0.182,1.22,-0.047]);
HAnimSegment97.children[1] = Transform100;

HAnimSite HAnimSite101 = createNode("HAnimSite");
HAnimSite101.DEF = "hanim_l_humeral_lateral_epicondyle_pt";
HAnimSite101.name = "l_humeral_lateral_epicondyle_pt";
HAnimSite101.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
HAnimSegment97.children[2] = HAnimSite101;

HAnimJoint96.children = new MFNode();

HAnimJoint96.children[0] = HAnimSegment97;

HAnimJoint HAnimJoint102 = createNode("HAnimJoint");
HAnimJoint102.DEF = "hanim_l_elbow";
HAnimJoint102.name = "l_elbow";
HAnimJoint102.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimSegment HAnimSegment103 = createNode("HAnimSegment");
HAnimSegment103.DEF = "hanim_l_forearm";
HAnimSegment103.name = "l_forearm";
Transform Transform104 = createNode("Transform");
Transform104.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
Shape Shape105 = createNode("Shape");
Shape105.USE = "DiamondShape";
Transform104.child = new undefined();

Transform104.child[0] = Shape105;

HAnimSegment103.children = new MFNode();

HAnimSegment103.children[0] = Transform104;

Transform Transform106 = createNode("Transform");
Transform106.DEF = "l_forearm_adjust";
Transform106.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
Transform106.rotation = new SFRotation(new float[-1,0,0,0.1]);
Transform106.center = new SFVec3f(new float[0.198,0.961,-0.0405]);
HAnimSegment103.children[1] = Transform106;

HAnimSite HAnimSite107 = createNode("HAnimSite");
HAnimSite107.DEF = "hanim_l_radial_styloid_pt";
HAnimSite107.name = "l_radial_styloid_pt";
HAnimSite107.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
HAnimSegment103.children[2] = HAnimSite107;

HAnimSite HAnimSite108 = createNode("HAnimSite");
HAnimSite108.DEF = "hanim_l_olecranon_pt";
HAnimSite108.name = "l_olecranon_pt";
HAnimSite108.translation = new SFVec3f(new float[-0.1962,1.1375,-0.1123]);
HAnimSegment103.children[3] = HAnimSite108;

HAnimSite HAnimSite109 = createNode("HAnimSite");
HAnimSite109.DEF = "hanim_l_humeral_medial_epicondyle_pt";
HAnimSite109.name = "l_humeral_medial_epicondyle_pt";
HAnimSite109.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
HAnimSegment103.children[4] = HAnimSite109;

HAnimSite HAnimSite110 = createNode("HAnimSite");
HAnimSite110.DEF = "hanim_l_radiale_pt";
HAnimSite110.name = "l_radiale_pt";
HAnimSite110.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
HAnimSegment103.children[5] = HAnimSite110;

HAnimJoint102.children = new MFNode();

HAnimJoint102.children[0] = HAnimSegment103;

HAnimJoint HAnimJoint111 = createNode("HAnimJoint");
HAnimJoint111.DEF = "hanim_l_radiocarpal";
HAnimJoint111.name = "l_radiocarpal";
HAnimJoint111.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimSegment HAnimSegment112 = createNode("HAnimSegment");
HAnimSegment112.DEF = "hanim_l_carpal";
HAnimSegment112.name = "l_carpal";
Transform Transform113 = createNode("Transform");
Transform113.translation = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
Shape Shape114 = createNode("Shape");
Shape114.USE = "DiamondShape";
Transform113.child = new undefined();

Transform113.child[0] = Shape114;

HAnimSegment112.children = new MFNode();

HAnimSegment112.children[0] = Transform113;

Transform Transform115 = createNode("Transform");
Transform115.DEF = "l_hand_adjust";
Transform115.translation = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
Transform115.rotation = new SFRotation(new float[-0.06361,-0.9967,0.04988,1.333]);
Transform115.center = new SFVec3f(new float[0.213,0.811,-0.0338]);
HAnimSegment112.children[1] = Transform115;

HAnimSite HAnimSite116 = createNode("HAnimSite");
HAnimSite116.DEF = "hanim_l_hand_tip";
HAnimSite116.name = "l_hand_tip";
HAnimSite116.translation = new SFVec3f(new float[0.208,0.6731,-0.0491]);
HAnimSegment112.children[2] = HAnimSite116;

HAnimSite HAnimSite117 = createNode("HAnimSite");
HAnimSite117.DEF = "hanim_l_metacarpal_phalanx_2_pt";
HAnimSite117.name = "l_metacarpal_phalanx_2_pt";
HAnimSite117.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
HAnimSegment112.children[3] = HAnimSite117;

HAnimSite HAnimSite118 = createNode("HAnimSite");
HAnimSite118.DEF = "hanim_l_dactylion_pt";
HAnimSite118.name = "l_dactylion_pt";
HAnimSite118.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
HAnimSegment112.children[4] = HAnimSite118;

HAnimSite HAnimSite119 = createNode("HAnimSite");
HAnimSite119.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite119.name = "l_ulnar_styloid_pt";
HAnimSite119.translation = new SFVec3f(new float[-0.2142,0.8529,-0.0648]);
HAnimSegment112.children[5] = HAnimSite119;

HAnimSite HAnimSite120 = createNode("HAnimSite");
HAnimSite120.DEF = "hanim_l_metacarpal_phalanx_5_pt";
HAnimSite120.name = "l_metacarpal_phalanx_5_pt";
HAnimSite120.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
HAnimSegment112.children[6] = HAnimSite120;

HAnimJoint111.children = new MFNode();

HAnimJoint111.children[0] = HAnimSegment112;

HAnimJoint102.children[1] = HAnimJoint111;

HAnimJoint96.children[1] = HAnimJoint102;

HAnimJoint94.children[1] = HAnimJoint96;

HAnimJoint HAnimJoint121 = createNode("HAnimJoint");
HAnimJoint121.DEF = "hanim_r_shoulder";
HAnimJoint121.name = "r_shoulder";
HAnimJoint121.center = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
HAnimSegment HAnimSegment122 = createNode("HAnimSegment");
HAnimSegment122.DEF = "hanim_r_upperarm";
HAnimSegment122.name = "r_upperarm";
Transform Transform123 = createNode("Transform");
Transform123.translation = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
Shape Shape124 = createNode("Shape");
Shape124.USE = "DiamondShape";
Transform123.child = new undefined();

Transform123.child[0] = Shape124;

HAnimSegment122.children = new MFNode();

HAnimSegment122.children[0] = Transform123;

Transform Transform125 = createNode("Transform");
Transform125.DEF = "r_upperarm_adjust";
Transform125.translation = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
Transform125.rotation = new SFRotation(new float[1,0,0,0.0836]);
Transform125.center = new SFVec3f(new float[-0.182,1.22,-0.047]);
HAnimSegment122.children[1] = Transform125;

HAnimSite HAnimSite126 = createNode("HAnimSite");
HAnimSite126.DEF = "hanim_r_humeral_lateral_epicondyle_pt";
HAnimSite126.name = "r_humeral_lateral_epicondyle_pt";
HAnimSite126.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
HAnimSegment122.children[2] = HAnimSite126;

HAnimJoint121.children = new MFNode();

HAnimJoint121.children[0] = HAnimSegment122;

HAnimJoint HAnimJoint127 = createNode("HAnimJoint");
HAnimJoint127.DEF = "hanim_r_elbow";
HAnimJoint127.name = "r_elbow";
HAnimJoint127.center = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
HAnimSegment HAnimSegment128 = createNode("HAnimSegment");
HAnimSegment128.DEF = "hanim_r_forearm";
HAnimSegment128.name = "r_forearm";
Transform Transform129 = createNode("Transform");
Transform129.translation = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
Shape Shape130 = createNode("Shape");
Shape130.USE = "DiamondShape";
Transform129.child = new undefined();

Transform129.child[0] = Shape130;

HAnimSegment128.children = new MFNode();

HAnimSegment128.children[0] = Transform129;

Transform Transform131 = createNode("Transform");
Transform131.DEF = "r_forearm_adjust";
Transform131.translation = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
Transform131.rotation = new SFRotation(new float[-1,0,0,0.1254]);
Transform131.center = new SFVec3f(new float[-0.198,0.961,-0.0397]);
HAnimSegment128.children[1] = Transform131;

HAnimSite HAnimSite132 = createNode("HAnimSite");
HAnimSite132.DEF = "hanim_r_radial_styloid_pt";
HAnimSite132.name = "r_radial_styloid_pt";
HAnimSite132.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
HAnimSegment128.children[2] = HAnimSite132;

HAnimSite HAnimSite133 = createNode("HAnimSite");
HAnimSite133.DEF = "hanim_r_olecranon_pt";
HAnimSite133.name = "r_olecranon_pt";
HAnimSite133.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
HAnimSegment128.children[3] = HAnimSite133;

HAnimSite HAnimSite134 = createNode("HAnimSite");
HAnimSite134.DEF = "hanim_r_humeral_medial_epicondyle_pt";
HAnimSite134.name = "r_humeral_medial_epicondyle_pt";
HAnimSite134.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
HAnimSegment128.children[4] = HAnimSite134;

HAnimSite HAnimSite135 = createNode("HAnimSite");
HAnimSite135.DEF = "hanim_r_radiale_pt";
HAnimSite135.name = "r_radiale_pt";
HAnimSite135.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
HAnimSegment128.children[5] = HAnimSite135;

HAnimJoint127.children = new MFNode();

HAnimJoint127.children[0] = HAnimSegment128;

HAnimJoint HAnimJoint136 = createNode("HAnimJoint");
HAnimJoint136.DEF = "hanim_r_radiocarpal";
HAnimJoint136.name = "r_radiocarpal";
HAnimJoint136.center = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
HAnimSegment HAnimSegment137 = createNode("HAnimSegment");
HAnimSegment137.DEF = "hanim_r_carpal";
HAnimSegment137.name = "r_carpal";
Transform Transform138 = createNode("Transform");
Transform138.translation = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
Shape Shape139 = createNode("Shape");
Shape139.USE = "DiamondShape";
Transform138.child = new undefined();

Transform138.child[0] = Shape139;

HAnimSegment137.children = new MFNode();

HAnimSegment137.children[0] = Transform138;

Transform Transform140 = createNode("Transform");
Transform140.DEF = "r_hand_adjust";
Transform140.rotation = new SFRotation(new float[-0.09024,0.994,-0.0624,1.216]);
Transform140.center = new SFVec3f(new float[-0.217,0.811,-0.0338]);
HAnimSegment137.children[1] = Transform140;

HAnimSite HAnimSite141 = createNode("HAnimSite");
HAnimSite141.DEF = "hanim_r_hand_tip";
HAnimSite141.name = "r_hand_tip";
HAnimSite141.translation = new SFVec3f(new float[-0.1969,0.6758,-0.0427]);
HAnimSegment137.children[2] = HAnimSite141;

HAnimSite HAnimSite142 = createNode("HAnimSite");
HAnimSite142.DEF = "hanim_r_metacarpal_phalanx_2_pt";
HAnimSite142.name = "r_metacarpal_phalanx_2_pt";
HAnimSite142.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
HAnimSegment137.children[3] = HAnimSite142;

HAnimSite HAnimSite143 = createNode("HAnimSite");
HAnimSite143.DEF = "hanim_r_dactylion_pt";
HAnimSite143.name = "r_dactylion_pt";
HAnimSite143.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
HAnimSegment137.children[4] = HAnimSite143;

HAnimSite HAnimSite144 = createNode("HAnimSite");
HAnimSite144.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite144.name = "r_ulnar_styloid_pt";
HAnimSite144.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
HAnimSegment137.children[5] = HAnimSite144;

HAnimSite HAnimSite145 = createNode("HAnimSite");
HAnimSite145.DEF = "hanim_r_metacarpal_phalanx_5_pt";
HAnimSite145.name = "r_metacarpal_phalanx_5_pt";
HAnimSite145.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
HAnimSegment137.children[6] = HAnimSite145;

HAnimJoint136.children = new MFNode();

HAnimJoint136.children[0] = HAnimSegment137;

HAnimJoint127.children[1] = HAnimJoint136;

HAnimJoint121.children[1] = HAnimJoint127;

HAnimJoint94.children[2] = HAnimJoint121;

HAnimJoint HAnimJoint146 = createNode("HAnimJoint");
HAnimJoint146.DEF = "hanim_vc4";
HAnimJoint146.name = "vc4";
HAnimJoint146.center = new SFVec3f(new float[0,1.43,-0.0458]);
HAnimSegment HAnimSegment147 = createNode("HAnimSegment");
HAnimSegment147.DEF = "hanim_c4";
HAnimSegment147.name = "c4";
HAnimJoint146.children = new MFNode();

HAnimJoint146.children[0] = HAnimSegment147;

HAnimJoint94.children[3] = HAnimJoint146;

HAnimJoint35.children[1] = HAnimJoint94;

HAnimJoint HAnimJoint148 = createNode("HAnimJoint");
HAnimJoint148.DEF = "hanim_vl5";
HAnimJoint148.name = "vl5";
HAnimJoint148.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimJoint HAnimJoint149 = createNode("HAnimJoint");
HAnimJoint149.DEF = "hanim_skullbase";
HAnimJoint149.name = "skullbase";
HAnimJoint149.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimSegment HAnimSegment150 = createNode("HAnimSegment");
HAnimSegment150.DEF = "hanim_skull";
HAnimSegment150.name = "skull";
Transform Transform151 = createNode("Transform");
Transform151.translation = new SFVec3f(new float[0.0044,1.6209,0.0236]);
Shape Shape152 = createNode("Shape");
Shape152.USE = "DiamondShape";
Transform151.child = new undefined();

Transform151.child[0] = Shape152;

HAnimSegment150.children = new MFNode();

HAnimSegment150.children[0] = Transform151;

HAnimSite HAnimSite153 = createNode("HAnimSite");
HAnimSite153.DEF = "hanim_skull_vertex_tip";
HAnimSite153.name = "skull_vertex_tip";
HAnimSite153.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
HAnimSegment150.children[1] = HAnimSite153;

HAnimSite HAnimSite154 = createNode("HAnimSite");
HAnimSite154.DEF = "hanim_sellion_pt";
HAnimSite154.name = "sellion_pt";
HAnimSite154.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
HAnimSegment150.children[2] = HAnimSite154;

HAnimSite HAnimSite155 = createNode("HAnimSite");
HAnimSite155.DEF = "hanim_r_infraorbitale_pt";
HAnimSite155.name = "r_infraorbitale_pt";
HAnimSite155.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
HAnimSegment150.children[3] = HAnimSite155;

HAnimSite HAnimSite156 = createNode("HAnimSite");
HAnimSite156.DEF = "hanim_l_infraorbitale_pt";
HAnimSite156.name = "l_infraorbitale_pt";
HAnimSite156.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
HAnimSegment150.children[4] = HAnimSite156;

HAnimSite HAnimSite157 = createNode("HAnimSite");
HAnimSite157.DEF = "hanim_supramenton_pt";
HAnimSite157.name = "supramenton_pt";
HAnimSite157.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
HAnimSegment150.children[5] = HAnimSite157;

HAnimSite HAnimSite158 = createNode("HAnimSite");
HAnimSite158.DEF = "hanim_r_tragion_pt";
HAnimSite158.name = "r_tragion_pt";
HAnimSite158.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
HAnimSegment150.children[6] = HAnimSite158;

HAnimSite HAnimSite159 = createNode("HAnimSite");
HAnimSite159.DEF = "hanim_r_gonion_pt";
HAnimSite159.name = "r_gonion_pt";
HAnimSite159.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
HAnimSegment150.children[7] = HAnimSite159;

HAnimSite HAnimSite160 = createNode("HAnimSite");
HAnimSite160.DEF = "hanim_l_tragion_pt";
HAnimSite160.name = "l_tragion_pt";
HAnimSite160.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
HAnimSegment150.children[8] = HAnimSite160;

HAnimSite HAnimSite161 = createNode("HAnimSite");
HAnimSite161.DEF = "hanim_l_gonion_pt";
HAnimSite161.name = "l_gonion_pt";
HAnimSite161.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
HAnimSegment150.children[9] = HAnimSite161;

HAnimSite HAnimSite162 = createNode("HAnimSite");
HAnimSite162.DEF = "hanim_nuchale_pt";
HAnimSite162.name = "nuchale_pt";
HAnimSite162.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
HAnimSegment150.children[10] = HAnimSite162;

HAnimJoint149.children = new MFNode();

HAnimJoint149.children[0] = HAnimSegment150;

HAnimJoint148.children = new MFNode();

HAnimJoint148.children[0] = HAnimJoint149;

HAnimJoint35.children[2] = HAnimJoint148;

HAnimHumanoid28.joints[1] = HAnimJoint35;

HAnimJoint HAnimJoint163 = createNode("HAnimJoint");
HAnimJoint163.USE = "hanim_humanoid_root";
HAnimHumanoid28.joints[2] = HAnimJoint163;

HAnimJoint HAnimJoint164 = createNode("HAnimJoint");
HAnimJoint164.USE = "hanim_sacroiliac";
HAnimHumanoid28.joints[3] = HAnimJoint164;

HAnimJoint HAnimJoint165 = createNode("HAnimJoint");
HAnimJoint165.USE = "hanim_vl1";
HAnimHumanoid28.joints[4] = HAnimJoint165;

HAnimJoint HAnimJoint166 = createNode("HAnimJoint");
HAnimJoint166.USE = "hanim_vc4";
HAnimHumanoid28.joints[5] = HAnimJoint166;

HAnimJoint HAnimJoint167 = createNode("HAnimJoint");
HAnimJoint167.USE = "hanim_skullbase";
HAnimHumanoid28.joints[6] = HAnimJoint167;

HAnimJoint HAnimJoint168 = createNode("HAnimJoint");
HAnimJoint168.USE = "hanim_vl5";
HAnimHumanoid28.joints[7] = HAnimJoint168;

HAnimJoint HAnimJoint169 = createNode("HAnimJoint");
HAnimJoint169.USE = "hanim_l_elbow";
HAnimHumanoid28.joints[8] = HAnimJoint169;

HAnimJoint HAnimJoint170 = createNode("HAnimJoint");
HAnimJoint170.USE = "hanim_r_elbow";
HAnimHumanoid28.joints[9] = HAnimJoint170;

HAnimJoint HAnimJoint171 = createNode("HAnimJoint");
HAnimJoint171.USE = "hanim_l_hip";
HAnimHumanoid28.joints[10] = HAnimJoint171;

HAnimJoint HAnimJoint172 = createNode("HAnimJoint");
HAnimJoint172.USE = "hanim_r_hip";
HAnimHumanoid28.joints[11] = HAnimJoint172;

HAnimJoint HAnimJoint173 = createNode("HAnimJoint");
HAnimJoint173.USE = "hanim_l_knee";
HAnimHumanoid28.joints[12] = HAnimJoint173;

HAnimJoint HAnimJoint174 = createNode("HAnimJoint");
HAnimJoint174.USE = "hanim_r_knee";
HAnimHumanoid28.joints[13] = HAnimJoint174;

HAnimJoint HAnimJoint175 = createNode("HAnimJoint");
HAnimJoint175.USE = "hanim_l_metatarsophalangeal_2";
HAnimHumanoid28.joints[14] = HAnimJoint175;

HAnimJoint HAnimJoint176 = createNode("HAnimJoint");
HAnimJoint176.USE = "hanim_r_metatarsophalangeal_2";
HAnimHumanoid28.joints[15] = HAnimJoint176;

HAnimJoint HAnimJoint177 = createNode("HAnimJoint");
HAnimJoint177.USE = "hanim_l_radiocarpal";
HAnimHumanoid28.joints[16] = HAnimJoint177;

HAnimJoint HAnimJoint178 = createNode("HAnimJoint");
HAnimJoint178.USE = "hanim_r_radiocarpal";
HAnimHumanoid28.joints[17] = HAnimJoint178;

HAnimJoint HAnimJoint179 = createNode("HAnimJoint");
HAnimJoint179.USE = "hanim_l_shoulder";
HAnimHumanoid28.joints[18] = HAnimJoint179;

HAnimJoint HAnimJoint180 = createNode("HAnimJoint");
HAnimJoint180.USE = "hanim_r_shoulder";
HAnimHumanoid28.joints[19] = HAnimJoint180;

HAnimJoint HAnimJoint181 = createNode("HAnimJoint");
HAnimJoint181.USE = "hanim_l_talocrural";
HAnimHumanoid28.joints[20] = HAnimJoint181;

HAnimJoint HAnimJoint182 = createNode("HAnimJoint");
HAnimJoint182.USE = "hanim_r_talocrural";
HAnimHumanoid28.joints[21] = HAnimJoint182;

HAnimSegment HAnimSegment183 = createNode("HAnimSegment");
HAnimSegment183.USE = "hanim_pelvis";
HAnimHumanoid28.segments[22] = HAnimSegment183;

HAnimSegment HAnimSegment184 = createNode("HAnimSegment");
HAnimSegment184.USE = "hanim_l1";
HAnimHumanoid28.segments[23] = HAnimSegment184;

HAnimSegment HAnimSegment185 = createNode("HAnimSegment");
HAnimSegment185.USE = "hanim_c4";
HAnimHumanoid28.segments[24] = HAnimSegment185;

HAnimSegment HAnimSegment186 = createNode("HAnimSegment");
HAnimSegment186.USE = "hanim_skull";
HAnimHumanoid28.segments[25] = HAnimSegment186;

HAnimSegment HAnimSegment187 = createNode("HAnimSegment");
HAnimSegment187.USE = "hanim_l_calf";
HAnimHumanoid28.segments[26] = HAnimSegment187;

HAnimSegment HAnimSegment188 = createNode("HAnimSegment");
HAnimSegment188.USE = "hanim_r_calf";
HAnimHumanoid28.segments[27] = HAnimSegment188;

HAnimSegment HAnimSegment189 = createNode("HAnimSegment");
HAnimSegment189.USE = "hanim_l_carpal";
HAnimHumanoid28.segments[28] = HAnimSegment189;

HAnimSegment HAnimSegment190 = createNode("HAnimSegment");
HAnimSegment190.USE = "hanim_r_carpal";
HAnimHumanoid28.segments[29] = HAnimSegment190;

HAnimSegment HAnimSegment191 = createNode("HAnimSegment");
HAnimSegment191.USE = "hanim_l_forearm";
HAnimHumanoid28.segments[30] = HAnimSegment191;

HAnimSegment HAnimSegment192 = createNode("HAnimSegment");
HAnimSegment192.USE = "hanim_r_forearm";
HAnimHumanoid28.segments[31] = HAnimSegment192;

HAnimSegment HAnimSegment193 = createNode("HAnimSegment");
HAnimSegment193.USE = "hanim_l_talus";
HAnimHumanoid28.segments[32] = HAnimSegment193;

HAnimSegment HAnimSegment194 = createNode("HAnimSegment");
HAnimSegment194.USE = "hanim_r_talus";
HAnimHumanoid28.segments[33] = HAnimSegment194;

HAnimSegment HAnimSegment195 = createNode("HAnimSegment");
HAnimSegment195.USE = "hanim_l_tarsal_proximal_phalanx_2";
HAnimHumanoid28.segments[34] = HAnimSegment195;

HAnimSegment HAnimSegment196 = createNode("HAnimSegment");
HAnimSegment196.USE = "hanim_r_tarsal_proximal_phalanx_2";
HAnimHumanoid28.segments[35] = HAnimSegment196;

HAnimSegment HAnimSegment197 = createNode("HAnimSegment");
HAnimSegment197.USE = "hanim_l_thigh";
HAnimHumanoid28.segments[36] = HAnimSegment197;

HAnimSegment HAnimSegment198 = createNode("HAnimSegment");
HAnimSegment198.USE = "hanim_r_thigh";
HAnimHumanoid28.segments[37] = HAnimSegment198;

HAnimSegment HAnimSegment199 = createNode("HAnimSegment");
HAnimSegment199.USE = "hanim_l_upperarm";
HAnimHumanoid28.segments[38] = HAnimSegment199;

HAnimSegment HAnimSegment200 = createNode("HAnimSegment");
HAnimSegment200.USE = "hanim_r_upperarm";
HAnimHumanoid28.segments[39] = HAnimSegment200;

HAnimSite HAnimSite201 = createNode("HAnimSite");
HAnimSite201.USE = "hanim_skull_vertex_tip";
HAnimHumanoid28.viewpoints[40] = HAnimSite201;

HAnimSite HAnimSite202 = createNode("HAnimSite");
HAnimSite202.USE = "hanim_sellion_pt";
HAnimHumanoid28.viewpoints[41] = HAnimSite202;

HAnimSite HAnimSite203 = createNode("HAnimSite");
HAnimSite203.USE = "hanim_supramenton_pt";
HAnimHumanoid28.viewpoints[42] = HAnimSite203;

HAnimSite HAnimSite204 = createNode("HAnimSite");
HAnimSite204.USE = "hanim_nuchale_pt";
HAnimHumanoid28.viewpoints[43] = HAnimSite204;

HAnimSite HAnimSite205 = createNode("HAnimSite");
HAnimSite205.USE = "hanim_l_calcaneus_posterior_pt";
HAnimHumanoid28.viewpoints[44] = HAnimSite205;

HAnimSite HAnimSite206 = createNode("HAnimSite");
HAnimSite206.USE = "hanim_r_calcaneus_posterior_pt";
HAnimHumanoid28.viewpoints[45] = HAnimSite206;

HAnimSite HAnimSite207 = createNode("HAnimSite");
HAnimSite207.USE = "hanim_l_dactylion_pt";
HAnimHumanoid28.viewpoints[46] = HAnimSite207;

HAnimSite HAnimSite208 = createNode("HAnimSite");
HAnimSite208.USE = "hanim_r_dactylion_pt";
HAnimHumanoid28.viewpoints[47] = HAnimSite208;

HAnimSite HAnimSite209 = createNode("HAnimSite");
HAnimSite209.USE = "hanim_l_femoral_lateral_epicondyle_pt";
HAnimHumanoid28.viewpoints[48] = HAnimSite209;

HAnimSite HAnimSite210 = createNode("HAnimSite");
HAnimSite210.USE = "hanim_r_femoral_lateral_epicondyle_pt";
HAnimHumanoid28.viewpoints[49] = HAnimSite210;

HAnimSite HAnimSite211 = createNode("HAnimSite");
HAnimSite211.USE = "hanim_l_femoral_medial_epicondyle_pt";
HAnimHumanoid28.viewpoints[50] = HAnimSite211;

HAnimSite HAnimSite212 = createNode("HAnimSite");
HAnimSite212.USE = "hanim_r_femoral_medial_epicondyle_pt";
HAnimHumanoid28.viewpoints[51] = HAnimSite212;

HAnimSite HAnimSite213 = createNode("HAnimSite");
HAnimSite213.USE = "hanim_r_gonion_pt";
HAnimHumanoid28.viewpoints[52] = HAnimSite213;

HAnimSite HAnimSite214 = createNode("HAnimSite");
HAnimSite214.USE = "hanim_l_gonion_pt";
HAnimHumanoid28.viewpoints[53] = HAnimSite214;

HAnimSite HAnimSite215 = createNode("HAnimSite");
HAnimSite215.USE = "hanim_l_hand_tip";
HAnimHumanoid28.viewpoints[54] = HAnimSite215;

HAnimSite HAnimSite216 = createNode("HAnimSite");
HAnimSite216.USE = "hanim_r_hand_tip";
HAnimHumanoid28.viewpoints[55] = HAnimSite216;

HAnimSite HAnimSite217 = createNode("HAnimSite");
HAnimSite217.USE = "hanim_l_humeral_lateral_epicondyle_pt";
HAnimHumanoid28.viewpoints[56] = HAnimSite217;

HAnimSite HAnimSite218 = createNode("HAnimSite");
HAnimSite218.USE = "hanim_r_humeral_lateral_epicondyle_pt";
HAnimHumanoid28.viewpoints[57] = HAnimSite218;

HAnimSite HAnimSite219 = createNode("HAnimSite");
HAnimSite219.USE = "hanim_l_humeral_medial_epicondyle_pt";
HAnimHumanoid28.viewpoints[58] = HAnimSite219;

HAnimSite HAnimSite220 = createNode("HAnimSite");
HAnimSite220.USE = "hanim_r_humeral_medial_epicondyle_pt";
HAnimHumanoid28.viewpoints[59] = HAnimSite220;

HAnimSite HAnimSite221 = createNode("HAnimSite");
HAnimSite221.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid28.viewpoints[60] = HAnimSite221;

HAnimSite HAnimSite222 = createNode("HAnimSite");
HAnimSite222.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid28.viewpoints[61] = HAnimSite222;

HAnimSite HAnimSite223 = createNode("HAnimSite");
HAnimSite223.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid28.viewpoints[62] = HAnimSite223;

HAnimSite HAnimSite224 = createNode("HAnimSite");
HAnimSite224.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid28.viewpoints[63] = HAnimSite224;

HAnimSite HAnimSite225 = createNode("HAnimSite");
HAnimSite225.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid28.viewpoints[64] = HAnimSite225;

HAnimSite HAnimSite226 = createNode("HAnimSite");
HAnimSite226.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid28.viewpoints[65] = HAnimSite226;

HAnimSite HAnimSite227 = createNode("HAnimSite");
HAnimSite227.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid28.viewpoints[66] = HAnimSite227;

HAnimSite HAnimSite228 = createNode("HAnimSite");
HAnimSite228.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid28.viewpoints[67] = HAnimSite228;

HAnimSite HAnimSite229 = createNode("HAnimSite");
HAnimSite229.USE = "hanim_l_metacarpal_phalanx_2_pt";
HAnimHumanoid28.viewpoints[68] = HAnimSite229;

HAnimSite HAnimSite230 = createNode("HAnimSite");
HAnimSite230.USE = "hanim_r_metacarpal_phalanx_2_pt";
HAnimHumanoid28.viewpoints[69] = HAnimSite230;

HAnimSite HAnimSite231 = createNode("HAnimSite");
HAnimSite231.USE = "hanim_l_metacarpal_phalanx_5_pt";
HAnimHumanoid28.viewpoints[70] = HAnimSite231;

HAnimSite HAnimSite232 = createNode("HAnimSite");
HAnimSite232.USE = "hanim_r_metacarpal_phalanx_5_pt";
HAnimHumanoid28.viewpoints[71] = HAnimSite232;

HAnimSite HAnimSite233 = createNode("HAnimSite");
HAnimSite233.USE = "hanim_l_metatarsal_phalanx_1_pt";
HAnimHumanoid28.viewpoints[72] = HAnimSite233;

HAnimSite HAnimSite234 = createNode("HAnimSite");
HAnimSite234.USE = "hanim_r_metatarsal_phalanx_1_pt";
HAnimHumanoid28.viewpoints[73] = HAnimSite234;

HAnimSite HAnimSite235 = createNode("HAnimSite");
HAnimSite235.USE = "hanim_l_metatarsal_phalanx_5_pt";
HAnimHumanoid28.viewpoints[74] = HAnimSite235;

HAnimSite HAnimSite236 = createNode("HAnimSite");
HAnimSite236.USE = "hanim_r_metatarsal_phalanx_5_pt";
HAnimHumanoid28.viewpoints[75] = HAnimSite236;

HAnimSite HAnimSite237 = createNode("HAnimSite");
HAnimSite237.USE = "hanim_l_middistal_tip";
HAnimHumanoid28.viewpoints[76] = HAnimSite237;

HAnimSite HAnimSite238 = createNode("HAnimSite");
HAnimSite238.USE = "hanim_r_middistal_tip";
HAnimHumanoid28.viewpoints[77] = HAnimSite238;

HAnimSite HAnimSite239 = createNode("HAnimSite");
HAnimSite239.USE = "hanim_l_olecranon_pt";
HAnimHumanoid28.viewpoints[78] = HAnimSite239;

HAnimSite HAnimSite240 = createNode("HAnimSite");
HAnimSite240.USE = "hanim_r_olecranon_pt";
HAnimHumanoid28.viewpoints[79] = HAnimSite240;

HAnimSite HAnimSite241 = createNode("HAnimSite");
HAnimSite241.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid28.viewpoints[80] = HAnimSite241;

HAnimSite HAnimSite242 = createNode("HAnimSite");
HAnimSite242.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid28.viewpoints[81] = HAnimSite242;

HAnimSite HAnimSite243 = createNode("HAnimSite");
HAnimSite243.USE = "hanim_l_radiale_pt";
HAnimHumanoid28.viewpoints[82] = HAnimSite243;

HAnimSite HAnimSite244 = createNode("HAnimSite");
HAnimSite244.USE = "hanim_r_radiale_pt";
HAnimHumanoid28.viewpoints[83] = HAnimSite244;

HAnimSite HAnimSite245 = createNode("HAnimSite");
HAnimSite245.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid28.viewpoints[84] = HAnimSite245;

HAnimSite HAnimSite246 = createNode("HAnimSite");
HAnimSite246.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid28.viewpoints[85] = HAnimSite246;

HAnimSite HAnimSite247 = createNode("HAnimSite");
HAnimSite247.USE = "hanim_l_tarsal_distal_phalanx_2_pt";
HAnimHumanoid28.viewpoints[86] = HAnimSite247;

HAnimSite HAnimSite248 = createNode("HAnimSite");
HAnimSite248.USE = "hanim_r_tarsal_distal_phalanx_2_pt";
HAnimHumanoid28.viewpoints[87] = HAnimSite248;

HAnimSite HAnimSite249 = createNode("HAnimSite");
HAnimSite249.USE = "hanim_r_tragion_pt";
HAnimHumanoid28.viewpoints[88] = HAnimSite249;

HAnimSite HAnimSite250 = createNode("HAnimSite");
HAnimSite250.USE = "hanim_l_tragion_pt";
HAnimHumanoid28.viewpoints[89] = HAnimSite250;

HAnimSite HAnimSite251 = createNode("HAnimSite");
HAnimSite251.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid28.viewpoints[90] = HAnimSite251;

HAnimSite HAnimSite252 = createNode("HAnimSite");
HAnimSite252.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid28.viewpoints[91] = HAnimSite252;

HAnimSite HAnimSite253 = createNode("HAnimSite");
HAnimSite253.DEF = "hanim_DiamondManLOA1_view";
HAnimSite253.name = "DiamondManLOA1_view";
Viewpoint Viewpoint254 = createNode("Viewpoint");
Viewpoint254.DEF = "InclinedView";
Viewpoint254.description = "Inclined View";
Viewpoint254.position = new SFVec3f(new float[1.62,1.05,2.06]);
Viewpoint254.orientation = new SFRotation(new float[-0.113,0.993,0.0347,0.671]);
HAnimSite253.children = new MFNode();

HAnimSite253.children[0] = Viewpoint254;

Viewpoint Viewpoint255 = createNode("Viewpoint");
Viewpoint255.DEF = "FrontView";
Viewpoint255.description = "Front View";
Viewpoint255.position = new SFVec3f(new float[0,0.854,2.57665]);
HAnimSite253.children[1] = Viewpoint255;

Viewpoint Viewpoint256 = createNode("Viewpoint");
Viewpoint256.DEF = "SideView";
Viewpoint256.description = "Side View";
Viewpoint256.position = new SFVec3f(new float[2.5929,0.854,0]);
Viewpoint256.orientation = new SFRotation(new float[0,1,0,1.57079]);
HAnimSite253.children[2] = Viewpoint256;

Viewpoint Viewpoint257 = createNode("Viewpoint");
Viewpoint257.DEF = "TopView";
Viewpoint257.description = "Top View";
Viewpoint257.position = new SFVec3f(new float[0,3.4495,0]);
Viewpoint257.orientation = new SFRotation(new float[1,0,0,-1.57079]);
HAnimSite253.children[3] = Viewpoint257;

HAnimHumanoid28.viewpoints[92] = HAnimSite253;

children[3] = HAnimHumanoid28;

}
