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
meta3.content = "DiamondManLOA_1.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "description";
meta4.content = "HAnim skeletal structure for Level of Action (LOA) one, with diamonds at the Joint centers. LOA-1 is typical low-end real-time 3D hierarchy.";
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
meta9.content = "../Templates/DiamondManLOA_1.x3d";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "reference";
meta10.content = "HAnim 1.1 specification, Appendix A: Suggested Body Dimensions and Levels of Articulation, Level of Articulation Two";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "reference";
meta11.content = "http://HAnim.org/Specifications/HAnim1.1/appendices.html#appendixa";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "reference";
meta12.content = "http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1.wrl";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "reference";
meta13.content = "http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1-diamond.wrl";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "reference";
meta14.content = "http://ece.uwaterloo.ca/~HAnim";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "reference";
meta15.content = "http://www.cis.upenn.edu/~badler/anthro/89-71.pdf";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "reference";
meta16.content = "http://www.cis.upenn.edu/~badler/anthro/89-71.ps";
head1.meta[14] = meta16;

meta meta17 = createNode("meta");
meta17.name = "reference";
meta17.content = "http://www.cis.upenn.edu/~beitler";
head1.meta[15] = meta17;

meta meta18 = createNode("meta");
meta18.name = "error";
meta18.content = "Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported";
head1.meta[16] = meta18;

meta meta19 = createNode("meta");
meta19.name = "Image";
meta19.content = "images/BonesAllSkeletonFrontViewLOA1.png";
head1.meta[17] = meta19;

meta meta20 = createNode("meta");
meta20.name = "Image";
meta20.content = "humanoid_landmark_locations.gif";
head1.meta[18] = meta20;

meta meta21 = createNode("meta");
meta21.name = "Image";
meta21.content = "http://HAnim.org/Specifications/HAnim1.1/humanoid_landmark_locations.gif";
head1.meta[19] = meta21;

meta meta22 = createNode("meta");
meta22.name = "motto";
meta22.content = "(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\"";
head1.meta[20] = meta22;

meta meta23 = createNode("meta");
meta23.name = "warning";
meta23.content = "Still needs comments on CAESAR feature points inserted";
head1.meta[21] = meta23;

meta meta24 = createNode("meta");
meta24.name = "identifier";
meta24.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA_1.x3d";
head1.meta[22] = meta24;

head = head1;

WorldInfo WorldInfo26 = createNode("WorldInfo");
WorldInfo26.title = "HANIM 1.1 Default Joint Centers, LOA1";
WorldInfo26.info = new MFString(new java.lang.String["HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 1 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf"]);
children = new MFNode();

children[0] = WorldInfo26;

NavigationInfo NavigationInfo27 = createNode("NavigationInfo");
NavigationInfo27.speed = 1.5;
children[1] = NavigationInfo27;

Viewpoint Viewpoint28 = createNode("Viewpoint");
Viewpoint28.description = "Diamond Man, LOA 1";
Viewpoint28.position = new SFVec3f(new float[0,1,3]);
Viewpoint28.centerOfRotation = new SFVec3f(new float[0,1,0]);
children[2] = Viewpoint28;

HAnimHumanoid HAnimHumanoid29 = createNode("HAnimHumanoid");
HAnimHumanoid29.DEF = "hanim_humanoid";
HAnimHumanoid29.name = "humanoid";
HAnimHumanoid29.version = "1.0";
MetadataSet MetadataSet30 = createNode("MetadataSet");
MetadataSet30.name = "HAnimHumanoid.info";
MetadataSet30.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid";
MetadataString MetadataString31 = createNode("MetadataString");
MetadataString31.name = "authorEmail";
MetadataSet30.value = new MFNode();

MetadataSet30.value[0] = MetadataString31;

MetadataString MetadataString32 = createNode("MetadataString");
MetadataString32.name = "authorName";
MetadataSet30.value[1] = MetadataString32;

MetadataString MetadataString33 = createNode("MetadataString");
MetadataString33.name = "copyright";
MetadataSet30.value[2] = MetadataString33;

MetadataString MetadataString34 = createNode("MetadataString");
MetadataString34.name = "humanoidVersion";
MetadataSet30.value[3] = MetadataString34;

MetadataString MetadataString35 = createNode("MetadataString");
MetadataString35.name = "usageRestrictions";
MetadataSet30.value[4] = MetadataString35;

HAnimHumanoid29.metadata = new SFNode();

HAnimHumanoid29.metadata[0] = MetadataSet30;

HAnimJoint HAnimJoint36 = createNode("HAnimJoint");
HAnimJoint36.DEF = "hanim_HumanoidRoot";
HAnimJoint36.name = "humanoid_root";
HAnimJoint36.center = new SFVec3f(new float[0,0.824,0.0277]);
HAnimJoint HAnimJoint37 = createNode("HAnimJoint");
HAnimJoint37.DEF = "hanim_sacroiliac";
HAnimJoint37.name = "sacroiliac";
HAnimJoint37.center = new SFVec3f(new float[0,0.9149,0.0016]);
HAnimSegment HAnimSegment38 = createNode("HAnimSegment");
HAnimSegment38.DEF = "hanim_pelvis";
HAnimSegment38.name = "pelvis";
Transform Transform39 = createNode("Transform");
Transform39.translation = new SFVec3f(new float[0,0.9149,0.0016]);
Shape Shape40 = createNode("Shape");
Shape40.DEF = "DiamondShape";
Appearance Appearance41 = createNode("Appearance");
Material Material42 = createNode("Material");
Material42.diffuseColor = new SFColor(new float[1,1,0]);
Appearance41.material = Material42;

Shape40.appearance = Appearance41;

IndexedFaceSet IndexedFaceSet43 = createNode("IndexedFaceSet");
IndexedFaceSet43.creaseAngle = 0.5;
IndexedFaceSet43.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate44 = createNode("Coordinate");
Coordinate44.DEF = "points";
Coordinate44.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet43.coord = Coordinate44;

Shape40.geometry = IndexedFaceSet43;

Transform39.child = new undefined();

Transform39.child[0] = Shape40;

HAnimSegment38.children = new MFNode();

HAnimSegment38.children[0] = Transform39;

HAnimJoint37.children = new MFNode();

HAnimJoint37.children[0] = HAnimSegment38;

HAnimJoint HAnimJoint45 = createNode("HAnimJoint");
HAnimJoint45.DEF = "hanim_l_hip";
HAnimJoint45.name = "l_hip";
HAnimJoint45.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
HAnimSegment HAnimSegment46 = createNode("HAnimSegment");
HAnimSegment46.DEF = "hanim_l_thigh";
HAnimSegment46.name = "l_thigh";
Transform Transform47 = createNode("Transform");
Transform47.translation = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
Shape Shape48 = createNode("Shape");
Shape48.USE = "DiamondShape";
Transform47.child = new undefined();

Transform47.child[0] = Shape48;

HAnimSegment46.children = new MFNode();

HAnimSegment46.children[0] = Transform47;

HAnimSite HAnimSite49 = createNode("HAnimSite");
HAnimSite49.DEF = "hanim_l_knee_crease_pt";
HAnimSite49.name = "l_knee_crease_pt";
HAnimSite49.translation = new SFVec3f(new float[0.0993,0.4881,-0.0309]);
HAnimSegment46.children[1] = HAnimSite49;

HAnimSite HAnimSite50 = createNode("HAnimSite");
HAnimSite50.DEF = "hanim_l_femoral_lateral_epicn_pt";
HAnimSite50.name = "l_femoral_lateral_epicn_pt";
HAnimSite50.translation = new SFVec3f(new float[0.1598,0.4967,0.0297]);
HAnimSegment46.children[2] = HAnimSite50;

HAnimSite HAnimSite51 = createNode("HAnimSite");
HAnimSite51.DEF = "hanim_l_femoral_medial_epicn_pt";
HAnimSite51.name = "l_femoral_medial_epicn_pt";
HAnimSite51.translation = new SFVec3f(new float[0.0398,0.4946,0.0303]);
HAnimSegment46.children[3] = HAnimSite51;

HAnimJoint45.children = new MFNode();

HAnimJoint45.children[0] = HAnimSegment46;

HAnimJoint HAnimJoint52 = createNode("HAnimJoint");
HAnimJoint52.DEF = "hanim_l_knee";
HAnimJoint52.name = "l_knee";
HAnimJoint52.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
HAnimSegment HAnimSegment53 = createNode("HAnimSegment");
HAnimSegment53.DEF = "hanim_l_calf";
HAnimSegment53.name = "l_calf";
Transform Transform54 = createNode("Transform");
Transform54.translation = new SFVec3f(new float[0.104,0.4867,0.0308]);
Shape Shape55 = createNode("Shape");
Shape55.USE = "DiamondShape";
Transform54.child = new undefined();

Transform54.child[0] = Shape55;

HAnimSegment53.children = new MFNode();

HAnimSegment53.children[0] = Transform54;

HAnimJoint52.children = new MFNode();

HAnimJoint52.children[0] = HAnimSegment53;

HAnimJoint HAnimJoint56 = createNode("HAnimJoint");
HAnimJoint56.DEF = "hanim_l_ankle";
HAnimJoint56.name = "l_ankle";
HAnimJoint56.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
HAnimSegment HAnimSegment57 = createNode("HAnimSegment");
HAnimSegment57.DEF = "hanim_l_hindfoot";
HAnimSegment57.name = "l_hindfoot";
Transform Transform58 = createNode("Transform");
Transform58.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
Shape Shape59 = createNode("Shape");
Shape59.USE = "DiamondShape";
Transform58.child = new undefined();

Transform58.child[0] = Shape59;

HAnimSegment57.children = new MFNode();

HAnimSegment57.children[0] = Transform58;

HAnimSite HAnimSite60 = createNode("HAnimSite");
HAnimSite60.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite60.name = "l_lateral_malleolus_pt";
HAnimSite60.translation = new SFVec3f(new float[0.1308,0.0597,-0.1032]);
HAnimSegment57.children[1] = HAnimSite60;

HAnimSite HAnimSite61 = createNode("HAnimSite");
HAnimSite61.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite61.name = "l_medial_malleolus_pt";
HAnimSite61.translation = new SFVec3f(new float[0.089,0.0716,-0.0881]);
HAnimSegment57.children[2] = HAnimSite61;

HAnimSite HAnimSite62 = createNode("HAnimSite");
HAnimSite62.DEF = "hanim_l_sphyrion_pt";
HAnimSite62.name = "l_sphyrion_pt";
HAnimSite62.translation = new SFVec3f(new float[0.089,0.0575,-0.0943]);
HAnimSegment57.children[3] = HAnimSite62;

HAnimSite HAnimSite63 = createNode("HAnimSite");
HAnimSite63.DEF = "hanim_l_calcaneous_post_pt";
HAnimSite63.name = "l_calcaneous_post_pt";
HAnimSite63.translation = new SFVec3f(new float[0.0974,0.0259,-0.1171]);
HAnimSegment57.children[4] = HAnimSite63;

HAnimJoint56.children = new MFNode();

HAnimJoint56.children[0] = HAnimSegment57;

HAnimJoint HAnimJoint64 = createNode("HAnimJoint");
HAnimJoint64.DEF = "hanim_l_midtarsal";
HAnimJoint64.name = "l_midtarsal";
HAnimJoint64.center = new SFVec3f(new float[0.1086,0.0001,0.0368]);
HAnimSegment HAnimSegment65 = createNode("HAnimSegment");
HAnimSegment65.DEF = "hanim_l_middistal";
HAnimSegment65.name = "l_middistal";
HAnimSite HAnimSite66 = createNode("HAnimSite");
HAnimSite66.DEF = "hanim_l_middistal_tip";
HAnimSite66.name = "l_middistal_tip";
HAnimSite66.translation = new SFVec3f(new float[0.1354,0.0016,0.1476]);
HAnimSegment65.children = new MFNode();

HAnimSegment65.children[0] = HAnimSite66;

HAnimSite HAnimSite67 = createNode("HAnimSite");
HAnimSite67.DEF = "hanim_l_metatarsal_pha5_pt";
HAnimSite67.name = "l_metatarsal_pha5_pt";
HAnimSite67.translation = new SFVec3f(new float[0.1825,0.007,0.0928]);
HAnimSegment65.children[1] = HAnimSite67;

HAnimSite HAnimSite68 = createNode("HAnimSite");
HAnimSite68.DEF = "hanim_l_metatarsal_pha1_pt";
HAnimSite68.name = "l_metatarsal_pha1_pt";
HAnimSite68.translation = new SFVec3f(new float[0.0816,0.0232,0.0106]);
HAnimSegment65.children[2] = HAnimSite68;

HAnimSite HAnimSite69 = createNode("HAnimSite");
HAnimSite69.DEF = "hanim_l_digit2_pt";
HAnimSite69.name = "l_digit2_pt";
HAnimSite69.translation = new SFVec3f(new float[0.1195,0.0079,0.1433]);
HAnimSegment65.children[3] = HAnimSite69;

HAnimJoint64.children = new MFNode();

HAnimJoint64.children[0] = HAnimSegment65;

HAnimJoint56.children[1] = HAnimJoint64;

HAnimJoint52.children[1] = HAnimJoint56;

HAnimJoint45.children[1] = HAnimJoint52;

HAnimJoint37.children[1] = HAnimJoint45;

HAnimJoint HAnimJoint70 = createNode("HAnimJoint");
HAnimJoint70.DEF = "hanim_r_hip";
HAnimJoint70.name = "r_hip";
HAnimJoint70.center = new SFVec3f(new float[-0.095,0.9171,0.0029]);
HAnimSegment HAnimSegment71 = createNode("HAnimSegment");
HAnimSegment71.DEF = "hanim_r_thigh";
HAnimSegment71.name = "r_thigh";
Transform Transform72 = createNode("Transform");
Transform72.translation = new SFVec3f(new float[-0.095,0.9171,0.0029]);
Shape Shape73 = createNode("Shape");
Shape73.USE = "DiamondShape";
Transform72.child = new undefined();

Transform72.child[0] = Shape73;

HAnimSegment71.children = new MFNode();

HAnimSegment71.children[0] = Transform72;

HAnimSite HAnimSite74 = createNode("HAnimSite");
HAnimSite74.DEF = "hanim_r_knee_crease_pt";
HAnimSite74.name = "r_knee_crease_pt";
HAnimSite74.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
HAnimSegment71.children[1] = HAnimSite74;

HAnimSite HAnimSite75 = createNode("HAnimSite");
HAnimSite75.DEF = "hanim_r_femoral_lateral_epicn_pt";
HAnimSite75.name = "r_femoral_lateral_epicn_pt";
HAnimSite75.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
HAnimSegment71.children[2] = HAnimSite75;

HAnimSite HAnimSite76 = createNode("HAnimSite");
HAnimSite76.DEF = "hanim_r_femoral_medial_epicn_pt";
HAnimSite76.name = "r_femoral_medial_epicn_pt";
HAnimSite76.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
HAnimSegment71.children[3] = HAnimSite76;

HAnimJoint70.children = new MFNode();

HAnimJoint70.children[0] = HAnimSegment71;

HAnimJoint HAnimJoint77 = createNode("HAnimJoint");
HAnimJoint77.DEF = "hanim_r_knee";
HAnimJoint77.name = "r_knee";
HAnimJoint77.center = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
HAnimSegment HAnimSegment78 = createNode("HAnimSegment");
HAnimSegment78.DEF = "hanim_r_calf";
HAnimSegment78.name = "r_calf";
Transform Transform79 = createNode("Transform");
Transform79.translation = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
Shape Shape80 = createNode("Shape");
Shape80.USE = "DiamondShape";
Transform79.child = new undefined();

Transform79.child[0] = Shape80;

HAnimSegment78.children = new MFNode();

HAnimSegment78.children[0] = Transform79;

HAnimJoint77.children = new MFNode();

HAnimJoint77.children[0] = HAnimSegment78;

HAnimJoint HAnimJoint81 = createNode("HAnimJoint");
HAnimJoint81.DEF = "hanim_r_ankle";
HAnimJoint81.name = "r_ankle";
HAnimJoint81.center = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
HAnimSegment HAnimSegment82 = createNode("HAnimSegment");
HAnimSegment82.DEF = "hanim_r_hindfoot";
HAnimSegment82.name = "r_hindfoot";
Transform Transform83 = createNode("Transform");
Transform83.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
Shape Shape84 = createNode("Shape");
Shape84.USE = "DiamondShape";
Transform83.child = new undefined();

Transform83.child[0] = Shape84;

HAnimSegment82.children = new MFNode();

HAnimSegment82.children[0] = Transform83;

HAnimSite HAnimSite85 = createNode("HAnimSite");
HAnimSite85.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite85.name = "r_lateral_malleolus_pt";
HAnimSite85.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
HAnimSegment82.children[1] = HAnimSite85;

HAnimSite HAnimSite86 = createNode("HAnimSite");
HAnimSite86.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite86.name = "r_medial_malleolus_pt";
HAnimSite86.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
HAnimSegment82.children[2] = HAnimSite86;

HAnimSite HAnimSite87 = createNode("HAnimSite");
HAnimSite87.DEF = "hanim_r_sphyrion_pt";
HAnimSite87.name = "r_sphyrion_pt";
HAnimSite87.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
HAnimSegment82.children[3] = HAnimSite87;

HAnimSite HAnimSite88 = createNode("HAnimSite");
HAnimSite88.DEF = "hanim_r_calcaneous_post_pt";
HAnimSite88.name = "r_calcaneous_post_pt";
HAnimSite88.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
HAnimSegment82.children[4] = HAnimSite88;

HAnimJoint81.children = new MFNode();

HAnimJoint81.children[0] = HAnimSegment82;

HAnimJoint HAnimJoint89 = createNode("HAnimJoint");
HAnimJoint89.DEF = "hanim_r_midtarsal";
HAnimJoint89.name = "r_midtarsal";
HAnimJoint89.center = new SFVec3f(new float[-0.0801,0,0.0368]);
HAnimSegment HAnimSegment90 = createNode("HAnimSegment");
HAnimSegment90.DEF = "hanim_r_middistal";
HAnimSegment90.name = "r_middistal";
HAnimSite HAnimSite91 = createNode("HAnimSite");
HAnimSite91.DEF = "hanim_r_middistal_tip";
HAnimSite91.name = "r_middistal_tip";
HAnimSite91.translation = new SFVec3f(new float[-0.1043,-0.0227,0.145]);
HAnimSegment90.children = new MFNode();

HAnimSegment90.children[0] = HAnimSite91;

HAnimSite HAnimSite92 = createNode("HAnimSite");
HAnimSite92.DEF = "hanim_r_metatarsal_pha5_pt";
HAnimSite92.name = "r_metatarsal_pha5_pt";
HAnimSite92.translation = new SFVec3f(new float[-0.1523,0.0166,0.0895]);
HAnimSegment90.children[1] = HAnimSite92;

HAnimSite HAnimSite93 = createNode("HAnimSite");
HAnimSite93.DEF = "hanim_r_metatarsal_pha1_pt";
HAnimSite93.name = "r_metatarsal_pha1_pt";
HAnimSite93.translation = new SFVec3f(new float[-0.0521,0.026,0.0127]);
HAnimSegment90.children[2] = HAnimSite93;

HAnimSite HAnimSite94 = createNode("HAnimSite");
HAnimSite94.DEF = "hanim_r_digit2_pt";
HAnimSite94.name = "r_digit2_pt";
HAnimSite94.translation = new SFVec3f(new float[-0.0883,0.0134,0.1383]);
HAnimSegment90.children[3] = HAnimSite94;

HAnimJoint89.children = new MFNode();

HAnimJoint89.children[0] = HAnimSegment90;

HAnimJoint81.children[1] = HAnimJoint89;

HAnimJoint77.children[1] = HAnimJoint81;

HAnimJoint70.children[1] = HAnimJoint77;

HAnimJoint37.children[2] = HAnimJoint70;

HAnimJoint36.children = new MFNode();

HAnimJoint36.children[0] = HAnimJoint37;

HAnimJoint HAnimJoint95 = createNode("HAnimJoint");
HAnimJoint95.DEF = "hanim_vl1";
HAnimJoint95.name = "vl1";
HAnimJoint95.center = new SFVec3f(new float[-0.00405,1.07,-0.0275]);
HAnimSegment HAnimSegment96 = createNode("HAnimSegment");
HAnimSegment96.DEF = "hanim_l1";
HAnimSegment96.name = "l1";
HAnimJoint95.children = new MFNode();

HAnimJoint95.children[0] = HAnimSegment96;

HAnimJoint HAnimJoint97 = createNode("HAnimJoint");
HAnimJoint97.DEF = "hanim_l_shoulder";
HAnimJoint97.name = "l_shoulder";
HAnimJoint97.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimSegment HAnimSegment98 = createNode("HAnimSegment");
HAnimSegment98.DEF = "hanim_l_upperarm";
HAnimSegment98.name = "l_upperarm";
Transform Transform99 = createNode("Transform");
Transform99.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
Shape Shape100 = createNode("Shape");
Shape100.USE = "DiamondShape";
Transform99.child = new undefined();

Transform99.child[0] = Shape100;

HAnimSegment98.children = new MFNode();

HAnimSegment98.children[0] = Transform99;

Transform Transform101 = createNode("Transform");
Transform101.DEF = "l_upperarm_adjust";
Transform101.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
Transform101.rotation = new SFRotation(new float[1,0,0,0.119]);
Transform101.center = new SFVec3f(new float[0.182,1.22,-0.047]);
HAnimSegment98.children[1] = Transform101;

HAnimSite HAnimSite102 = createNode("HAnimSite");
HAnimSite102.DEF = "hanim_l_humeral_lateral_epicn_pt";
HAnimSite102.name = "l_humeral_lateral_epicn_pt";
HAnimSite102.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
HAnimSegment98.children[2] = HAnimSite102;

HAnimJoint97.children = new MFNode();

HAnimJoint97.children[0] = HAnimSegment98;

HAnimJoint HAnimJoint103 = createNode("HAnimJoint");
HAnimJoint103.DEF = "hanim_l_elbow";
HAnimJoint103.name = "l_elbow";
HAnimJoint103.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimSegment HAnimSegment104 = createNode("HAnimSegment");
HAnimSegment104.DEF = "hanim_l_forearm";
HAnimSegment104.name = "l_forearm";
Transform Transform105 = createNode("Transform");
Transform105.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
Shape Shape106 = createNode("Shape");
Shape106.USE = "DiamondShape";
Transform105.child = new undefined();

Transform105.child[0] = Shape106;

HAnimSegment104.children = new MFNode();

HAnimSegment104.children[0] = Transform105;

Transform Transform107 = createNode("Transform");
Transform107.DEF = "l_forearm_adjust";
Transform107.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
Transform107.rotation = new SFRotation(new float[-1,0,0,0.1]);
Transform107.center = new SFVec3f(new float[0.198,0.961,-0.0405]);
HAnimSegment104.children[1] = Transform107;

HAnimSite HAnimSite108 = createNode("HAnimSite");
HAnimSite108.DEF = "hanim_l_radial_styloid_pt";
HAnimSite108.name = "l_radial_styloid_pt";
HAnimSite108.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
HAnimSegment104.children[2] = HAnimSite108;

HAnimSite HAnimSite109 = createNode("HAnimSite");
HAnimSite109.DEF = "hanim_l_olecranon_pt";
HAnimSite109.name = "l_olecranon_pt";
HAnimSite109.translation = new SFVec3f(new float[-0.1962,1.1375,-0.1123]);
HAnimSegment104.children[3] = HAnimSite109;

HAnimSite HAnimSite110 = createNode("HAnimSite");
HAnimSite110.DEF = "hanim_l_humeral_medial_epicn_pt";
HAnimSite110.name = "l_humeral_medial_epicn_pt";
HAnimSite110.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
HAnimSegment104.children[4] = HAnimSite110;

HAnimSite HAnimSite111 = createNode("HAnimSite");
HAnimSite111.DEF = "hanim_l_radiale_pt";
HAnimSite111.name = "l_radiale_pt";
HAnimSite111.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
HAnimSegment104.children[5] = HAnimSite111;

HAnimJoint103.children = new MFNode();

HAnimJoint103.children[0] = HAnimSegment104;

HAnimJoint HAnimJoint112 = createNode("HAnimJoint");
HAnimJoint112.DEF = "hanim_l_wrist";
HAnimJoint112.name = "l_wrist";
HAnimJoint112.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimSegment HAnimSegment113 = createNode("HAnimSegment");
HAnimSegment113.DEF = "hanim_l_hand";
HAnimSegment113.name = "l_hand";
Transform Transform114 = createNode("Transform");
Transform114.translation = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
Shape Shape115 = createNode("Shape");
Shape115.USE = "DiamondShape";
Transform114.child = new undefined();

Transform114.child[0] = Shape115;

HAnimSegment113.children = new MFNode();

HAnimSegment113.children[0] = Transform114;

Transform Transform116 = createNode("Transform");
Transform116.DEF = "l_hand_adjust";
Transform116.translation = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
Transform116.rotation = new SFRotation(new float[-0.06361,-0.9967,0.04988,1.333]);
Transform116.center = new SFVec3f(new float[0.213,0.811,-0.0338]);
HAnimSegment113.children[1] = Transform116;

HAnimSite HAnimSite117 = createNode("HAnimSite");
HAnimSite117.DEF = "hanim_l_hand_tip";
HAnimSite117.name = "l_hand_tip";
HAnimSite117.translation = new SFVec3f(new float[0.208,0.6731,-0.0491]);
HAnimSegment113.children[2] = HAnimSite117;

HAnimSite HAnimSite118 = createNode("HAnimSite");
HAnimSite118.DEF = "hanim_l_metacarpal_pha2_pt";
HAnimSite118.name = "l_metacarpal_pha2_pt";
HAnimSite118.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
HAnimSegment113.children[3] = HAnimSite118;

HAnimSite HAnimSite119 = createNode("HAnimSite");
HAnimSite119.DEF = "hanim_l_dactylion_pt";
HAnimSite119.name = "l_dactylion_pt";
HAnimSite119.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
HAnimSegment113.children[4] = HAnimSite119;

HAnimSite HAnimSite120 = createNode("HAnimSite");
HAnimSite120.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite120.name = "l_ulnar_styloid_pt";
HAnimSite120.translation = new SFVec3f(new float[-0.2142,0.8529,-0.0648]);
HAnimSegment113.children[5] = HAnimSite120;

HAnimSite HAnimSite121 = createNode("HAnimSite");
HAnimSite121.DEF = "hanim_l_metacarpal_pha5_pt";
HAnimSite121.name = "l_metacarpal_pha5_pt";
HAnimSite121.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
HAnimSegment113.children[6] = HAnimSite121;

HAnimJoint112.children = new MFNode();

HAnimJoint112.children[0] = HAnimSegment113;

HAnimJoint103.children[1] = HAnimJoint112;

HAnimJoint97.children[1] = HAnimJoint103;

HAnimJoint95.children[1] = HAnimJoint97;

HAnimJoint HAnimJoint122 = createNode("HAnimJoint");
HAnimJoint122.DEF = "hanim_r_shoulder";
HAnimJoint122.name = "r_shoulder";
HAnimJoint122.center = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
HAnimSegment HAnimSegment123 = createNode("HAnimSegment");
HAnimSegment123.DEF = "hanim_r_upperarm";
HAnimSegment123.name = "r_upperarm";
Transform Transform124 = createNode("Transform");
Transform124.translation = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
Shape Shape125 = createNode("Shape");
Shape125.USE = "DiamondShape";
Transform124.child = new undefined();

Transform124.child[0] = Shape125;

HAnimSegment123.children = new MFNode();

HAnimSegment123.children[0] = Transform124;

Transform Transform126 = createNode("Transform");
Transform126.DEF = "r_upperarm_adjust";
Transform126.translation = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
Transform126.rotation = new SFRotation(new float[1,0,0,0.0836]);
Transform126.center = new SFVec3f(new float[-0.182,1.22,-0.047]);
HAnimSegment123.children[1] = Transform126;

HAnimSite HAnimSite127 = createNode("HAnimSite");
HAnimSite127.DEF = "hanim_r_humeral_lateral_epicn_pt";
HAnimSite127.name = "r_humeral_lateral_epicn_pt";
HAnimSite127.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
HAnimSegment123.children[2] = HAnimSite127;

HAnimJoint122.children = new MFNode();

HAnimJoint122.children[0] = HAnimSegment123;

HAnimJoint HAnimJoint128 = createNode("HAnimJoint");
HAnimJoint128.DEF = "hanim_r_elbow";
HAnimJoint128.name = "r_elbow";
HAnimJoint128.center = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
HAnimSegment HAnimSegment129 = createNode("HAnimSegment");
HAnimSegment129.DEF = "hanim_r_forearm";
HAnimSegment129.name = "r_forearm";
Transform Transform130 = createNode("Transform");
Transform130.translation = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
Shape Shape131 = createNode("Shape");
Shape131.USE = "DiamondShape";
Transform130.child = new undefined();

Transform130.child[0] = Shape131;

HAnimSegment129.children = new MFNode();

HAnimSegment129.children[0] = Transform130;

Transform Transform132 = createNode("Transform");
Transform132.DEF = "r_forearm_adjust";
Transform132.translation = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
Transform132.rotation = new SFRotation(new float[-1,0,0,0.1254]);
Transform132.center = new SFVec3f(new float[-0.198,0.961,-0.0397]);
HAnimSegment129.children[1] = Transform132;

HAnimSite HAnimSite133 = createNode("HAnimSite");
HAnimSite133.DEF = "hanim_r_radial_styloid_pt";
HAnimSite133.name = "r_radial_styloid_pt";
HAnimSite133.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
HAnimSegment129.children[2] = HAnimSite133;

HAnimSite HAnimSite134 = createNode("HAnimSite");
HAnimSite134.DEF = "hanim_r_olecranon_pt";
HAnimSite134.name = "r_olecranon_pt";
HAnimSite134.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
HAnimSegment129.children[3] = HAnimSite134;

HAnimSite HAnimSite135 = createNode("HAnimSite");
HAnimSite135.DEF = "hanim_r_humeral_medial_epicn_pt";
HAnimSite135.name = "r_humeral_medial_epicn_pt";
HAnimSite135.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
HAnimSegment129.children[4] = HAnimSite135;

HAnimSite HAnimSite136 = createNode("HAnimSite");
HAnimSite136.DEF = "hanim_r_radiale_pt";
HAnimSite136.name = "r_radiale_pt";
HAnimSite136.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
HAnimSegment129.children[5] = HAnimSite136;

HAnimJoint128.children = new MFNode();

HAnimJoint128.children[0] = HAnimSegment129;

HAnimJoint HAnimJoint137 = createNode("HAnimJoint");
HAnimJoint137.DEF = "hanim_r_wrist";
HAnimJoint137.name = "r_wrist";
HAnimJoint137.center = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
HAnimSegment HAnimSegment138 = createNode("HAnimSegment");
HAnimSegment138.DEF = "hanim_r_hand";
HAnimSegment138.name = "r_hand";
Transform Transform139 = createNode("Transform");
Transform139.translation = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
Shape Shape140 = createNode("Shape");
Shape140.USE = "DiamondShape";
Transform139.child = new undefined();

Transform139.child[0] = Shape140;

HAnimSegment138.children = new MFNode();

HAnimSegment138.children[0] = Transform139;

Transform Transform141 = createNode("Transform");
Transform141.DEF = "r_hand_adjust";
Transform141.rotation = new SFRotation(new float[-0.09024,0.994,-0.0624,1.216]);
Transform141.center = new SFVec3f(new float[-0.217,0.811,-0.0338]);
HAnimSegment138.children[1] = Transform141;

HAnimSite HAnimSite142 = createNode("HAnimSite");
HAnimSite142.DEF = "hanim_r_hand_tip";
HAnimSite142.name = "r_hand_tip";
HAnimSite142.translation = new SFVec3f(new float[-0.1969,0.6758,-0.0427]);
HAnimSegment138.children[2] = HAnimSite142;

HAnimSite HAnimSite143 = createNode("HAnimSite");
HAnimSite143.DEF = "hanim_r_metacarpal_pha2_pt";
HAnimSite143.name = "r_metacarpal_pha2_pt";
HAnimSite143.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
HAnimSegment138.children[3] = HAnimSite143;

HAnimSite HAnimSite144 = createNode("HAnimSite");
HAnimSite144.DEF = "hanim_r_dactylion_pt";
HAnimSite144.name = "r_dactylion_pt";
HAnimSite144.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
HAnimSegment138.children[4] = HAnimSite144;

HAnimSite HAnimSite145 = createNode("HAnimSite");
HAnimSite145.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite145.name = "r_ulnar_styloid_pt";
HAnimSite145.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
HAnimSegment138.children[5] = HAnimSite145;

HAnimSite HAnimSite146 = createNode("HAnimSite");
HAnimSite146.DEF = "hanim_r_metacarpal_pha5_pt";
HAnimSite146.name = "r_metacarpal_pha5_pt";
HAnimSite146.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
HAnimSegment138.children[6] = HAnimSite146;

HAnimJoint137.children = new MFNode();

HAnimJoint137.children[0] = HAnimSegment138;

HAnimJoint128.children[1] = HAnimJoint137;

HAnimJoint122.children[1] = HAnimJoint128;

HAnimJoint95.children[2] = HAnimJoint122;

HAnimJoint HAnimJoint147 = createNode("HAnimJoint");
HAnimJoint147.DEF = "hanim_vc4";
HAnimJoint147.name = "vc4";
HAnimJoint147.center = new SFVec3f(new float[0,1.43,-0.0458]);
HAnimSegment HAnimSegment148 = createNode("HAnimSegment");
HAnimSegment148.DEF = "hanim_c4";
HAnimSegment148.name = "c4";
HAnimJoint147.children = new MFNode();

HAnimJoint147.children[0] = HAnimSegment148;

HAnimJoint95.children[3] = HAnimJoint147;

HAnimJoint36.children[1] = HAnimJoint95;

HAnimJoint HAnimJoint149 = createNode("HAnimJoint");
HAnimJoint149.DEF = "hanim_vl5";
HAnimJoint149.name = "vl5";
HAnimJoint149.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimJoint HAnimJoint150 = createNode("HAnimJoint");
HAnimJoint150.DEF = "hanim_skullbase";
HAnimJoint150.name = "skullbase";
HAnimJoint150.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimSegment HAnimSegment151 = createNode("HAnimSegment");
HAnimSegment151.DEF = "hanim_skull";
HAnimSegment151.name = "skull";
Transform Transform152 = createNode("Transform");
Transform152.translation = new SFVec3f(new float[0.0044,1.6209,0.0236]);
Shape Shape153 = createNode("Shape");
Shape153.USE = "DiamondShape";
Transform152.child = new undefined();

Transform152.child[0] = Shape153;

HAnimSegment151.children = new MFNode();

HAnimSegment151.children[0] = Transform152;

HAnimSite HAnimSite154 = createNode("HAnimSite");
HAnimSite154.DEF = "hanim_skull_tip";
HAnimSite154.name = "skull_tip";
HAnimSite154.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
HAnimSegment151.children[1] = HAnimSite154;

HAnimSite HAnimSite155 = createNode("HAnimSite");
HAnimSite155.DEF = "hanim_sellion_pt";
HAnimSite155.name = "sellion_pt";
HAnimSite155.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
HAnimSegment151.children[2] = HAnimSite155;

HAnimSite HAnimSite156 = createNode("HAnimSite");
HAnimSite156.DEF = "hanim_r_infraorbitale_pt";
HAnimSite156.name = "r_infraorbitale_pt";
HAnimSite156.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
HAnimSegment151.children[3] = HAnimSite156;

HAnimSite HAnimSite157 = createNode("HAnimSite");
HAnimSite157.DEF = "hanim_l_infraorbitale_pt";
HAnimSite157.name = "l_infraorbitale_pt";
HAnimSite157.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
HAnimSegment151.children[4] = HAnimSite157;

HAnimSite HAnimSite158 = createNode("HAnimSite");
HAnimSite158.DEF = "hanim_supramenton_pt";
HAnimSite158.name = "supramenton_pt";
HAnimSite158.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
HAnimSegment151.children[5] = HAnimSite158;

HAnimSite HAnimSite159 = createNode("HAnimSite");
HAnimSite159.DEF = "hanim_r_tragion_pt";
HAnimSite159.name = "r_tragion_pt";
HAnimSite159.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
HAnimSegment151.children[6] = HAnimSite159;

HAnimSite HAnimSite160 = createNode("HAnimSite");
HAnimSite160.DEF = "hanim_r_gonion_pt";
HAnimSite160.name = "r_gonion_pt";
HAnimSite160.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
HAnimSegment151.children[7] = HAnimSite160;

HAnimSite HAnimSite161 = createNode("HAnimSite");
HAnimSite161.DEF = "hanim_l_tragion_pt";
HAnimSite161.name = "l_tragion_pt";
HAnimSite161.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
HAnimSegment151.children[8] = HAnimSite161;

HAnimSite HAnimSite162 = createNode("HAnimSite");
HAnimSite162.DEF = "hanim_l_gonion_pt";
HAnimSite162.name = "l_gonion_pt";
HAnimSite162.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
HAnimSegment151.children[9] = HAnimSite162;

HAnimSite HAnimSite163 = createNode("HAnimSite");
HAnimSite163.DEF = "hanim_nuchale_pt";
HAnimSite163.name = "nuchale_pt";
HAnimSite163.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
HAnimSegment151.children[10] = HAnimSite163;

HAnimJoint150.children = new MFNode();

HAnimJoint150.children[0] = HAnimSegment151;

HAnimJoint149.children = new MFNode();

HAnimJoint149.children[0] = HAnimJoint150;

HAnimJoint36.children[2] = HAnimJoint149;

HAnimHumanoid29.joints[1] = HAnimJoint36;

HAnimJoint HAnimJoint164 = createNode("HAnimJoint");
HAnimJoint164.USE = "hanim_HumanoidRoot";
HAnimHumanoid29.joints[2] = HAnimJoint164;

HAnimJoint HAnimJoint165 = createNode("HAnimJoint");
HAnimJoint165.USE = "hanim_sacroiliac";
HAnimHumanoid29.joints[3] = HAnimJoint165;

HAnimJoint HAnimJoint166 = createNode("HAnimJoint");
HAnimJoint166.USE = "hanim_vl1";
HAnimHumanoid29.joints[4] = HAnimJoint166;

HAnimJoint HAnimJoint167 = createNode("HAnimJoint");
HAnimJoint167.USE = "hanim_vc4";
HAnimHumanoid29.joints[5] = HAnimJoint167;

HAnimJoint HAnimJoint168 = createNode("HAnimJoint");
HAnimJoint168.USE = "hanim_skullbase";
HAnimHumanoid29.joints[6] = HAnimJoint168;

HAnimJoint HAnimJoint169 = createNode("HAnimJoint");
HAnimJoint169.USE = "hanim_vl5";
HAnimHumanoid29.joints[7] = HAnimJoint169;

HAnimJoint HAnimJoint170 = createNode("HAnimJoint");
HAnimJoint170.USE = "hanim_l_ankle";
HAnimHumanoid29.joints[8] = HAnimJoint170;

HAnimJoint HAnimJoint171 = createNode("HAnimJoint");
HAnimJoint171.USE = "hanim_r_ankle";
HAnimHumanoid29.joints[9] = HAnimJoint171;

HAnimJoint HAnimJoint172 = createNode("HAnimJoint");
HAnimJoint172.USE = "hanim_l_elbow";
HAnimHumanoid29.joints[10] = HAnimJoint172;

HAnimJoint HAnimJoint173 = createNode("HAnimJoint");
HAnimJoint173.USE = "hanim_r_elbow";
HAnimHumanoid29.joints[11] = HAnimJoint173;

HAnimJoint HAnimJoint174 = createNode("HAnimJoint");
HAnimJoint174.USE = "hanim_l_hip";
HAnimHumanoid29.joints[12] = HAnimJoint174;

HAnimJoint HAnimJoint175 = createNode("HAnimJoint");
HAnimJoint175.USE = "hanim_r_hip";
HAnimHumanoid29.joints[13] = HAnimJoint175;

HAnimJoint HAnimJoint176 = createNode("HAnimJoint");
HAnimJoint176.USE = "hanim_l_knee";
HAnimHumanoid29.joints[14] = HAnimJoint176;

HAnimJoint HAnimJoint177 = createNode("HAnimJoint");
HAnimJoint177.USE = "hanim_r_knee";
HAnimHumanoid29.joints[15] = HAnimJoint177;

HAnimJoint HAnimJoint178 = createNode("HAnimJoint");
HAnimJoint178.USE = "hanim_l_midtarsal";
HAnimHumanoid29.joints[16] = HAnimJoint178;

HAnimJoint HAnimJoint179 = createNode("HAnimJoint");
HAnimJoint179.USE = "hanim_r_midtarsal";
HAnimHumanoid29.joints[17] = HAnimJoint179;

HAnimJoint HAnimJoint180 = createNode("HAnimJoint");
HAnimJoint180.USE = "hanim_l_shoulder";
HAnimHumanoid29.joints[18] = HAnimJoint180;

HAnimJoint HAnimJoint181 = createNode("HAnimJoint");
HAnimJoint181.USE = "hanim_r_shoulder";
HAnimHumanoid29.joints[19] = HAnimJoint181;

HAnimJoint HAnimJoint182 = createNode("HAnimJoint");
HAnimJoint182.USE = "hanim_l_wrist";
HAnimHumanoid29.joints[20] = HAnimJoint182;

HAnimJoint HAnimJoint183 = createNode("HAnimJoint");
HAnimJoint183.USE = "hanim_r_wrist";
HAnimHumanoid29.joints[21] = HAnimJoint183;

HAnimSegment HAnimSegment184 = createNode("HAnimSegment");
HAnimSegment184.USE = "hanim_pelvis";
HAnimHumanoid29.segments[22] = HAnimSegment184;

HAnimSegment HAnimSegment185 = createNode("HAnimSegment");
HAnimSegment185.USE = "hanim_l1";
HAnimHumanoid29.segments[23] = HAnimSegment185;

HAnimSegment HAnimSegment186 = createNode("HAnimSegment");
HAnimSegment186.USE = "hanim_c4";
HAnimHumanoid29.segments[24] = HAnimSegment186;

HAnimSegment HAnimSegment187 = createNode("HAnimSegment");
HAnimSegment187.USE = "hanim_skull";
HAnimHumanoid29.segments[25] = HAnimSegment187;

HAnimSegment HAnimSegment188 = createNode("HAnimSegment");
HAnimSegment188.USE = "hanim_l_calf";
HAnimHumanoid29.segments[26] = HAnimSegment188;

HAnimSegment HAnimSegment189 = createNode("HAnimSegment");
HAnimSegment189.USE = "hanim_r_calf";
HAnimHumanoid29.segments[27] = HAnimSegment189;

HAnimSegment HAnimSegment190 = createNode("HAnimSegment");
HAnimSegment190.USE = "hanim_l_forearm";
HAnimHumanoid29.segments[28] = HAnimSegment190;

HAnimSegment HAnimSegment191 = createNode("HAnimSegment");
HAnimSegment191.USE = "hanim_r_forearm";
HAnimHumanoid29.segments[29] = HAnimSegment191;

HAnimSegment HAnimSegment192 = createNode("HAnimSegment");
HAnimSegment192.USE = "hanim_l_hand";
HAnimHumanoid29.segments[30] = HAnimSegment192;

HAnimSegment HAnimSegment193 = createNode("HAnimSegment");
HAnimSegment193.USE = "hanim_r_hand";
HAnimHumanoid29.segments[31] = HAnimSegment193;

HAnimSegment HAnimSegment194 = createNode("HAnimSegment");
HAnimSegment194.USE = "hanim_l_hindfoot";
HAnimHumanoid29.segments[32] = HAnimSegment194;

HAnimSegment HAnimSegment195 = createNode("HAnimSegment");
HAnimSegment195.USE = "hanim_r_hindfoot";
HAnimHumanoid29.segments[33] = HAnimSegment195;

HAnimSegment HAnimSegment196 = createNode("HAnimSegment");
HAnimSegment196.USE = "hanim_l_middistal";
HAnimHumanoid29.segments[34] = HAnimSegment196;

HAnimSegment HAnimSegment197 = createNode("HAnimSegment");
HAnimSegment197.USE = "hanim_r_middistal";
HAnimHumanoid29.segments[35] = HAnimSegment197;

HAnimSegment HAnimSegment198 = createNode("HAnimSegment");
HAnimSegment198.USE = "hanim_l_thigh";
HAnimHumanoid29.segments[36] = HAnimSegment198;

HAnimSegment HAnimSegment199 = createNode("HAnimSegment");
HAnimSegment199.USE = "hanim_r_thigh";
HAnimHumanoid29.segments[37] = HAnimSegment199;

HAnimSegment HAnimSegment200 = createNode("HAnimSegment");
HAnimSegment200.USE = "hanim_l_upperarm";
HAnimHumanoid29.segments[38] = HAnimSegment200;

HAnimSegment HAnimSegment201 = createNode("HAnimSegment");
HAnimSegment201.USE = "hanim_r_upperarm";
HAnimHumanoid29.segments[39] = HAnimSegment201;

HAnimSite HAnimSite202 = createNode("HAnimSite");
HAnimSite202.USE = "hanim_skull_tip";
HAnimHumanoid29.viewpoints[40] = HAnimSite202;

HAnimSite HAnimSite203 = createNode("HAnimSite");
HAnimSite203.USE = "hanim_sellion_pt";
HAnimHumanoid29.viewpoints[41] = HAnimSite203;

HAnimSite HAnimSite204 = createNode("HAnimSite");
HAnimSite204.USE = "hanim_supramenton_pt";
HAnimHumanoid29.viewpoints[42] = HAnimSite204;

HAnimSite HAnimSite205 = createNode("HAnimSite");
HAnimSite205.USE = "hanim_nuchale_pt";
HAnimHumanoid29.viewpoints[43] = HAnimSite205;

HAnimSite HAnimSite206 = createNode("HAnimSite");
HAnimSite206.USE = "hanim_l_calcaneous_post_pt";
HAnimHumanoid29.viewpoints[44] = HAnimSite206;

HAnimSite HAnimSite207 = createNode("HAnimSite");
HAnimSite207.USE = "hanim_r_calcaneous_post_pt";
HAnimHumanoid29.viewpoints[45] = HAnimSite207;

HAnimSite HAnimSite208 = createNode("HAnimSite");
HAnimSite208.USE = "hanim_l_dactylion_pt";
HAnimHumanoid29.viewpoints[46] = HAnimSite208;

HAnimSite HAnimSite209 = createNode("HAnimSite");
HAnimSite209.USE = "hanim_r_dactylion_pt";
HAnimHumanoid29.viewpoints[47] = HAnimSite209;

HAnimSite HAnimSite210 = createNode("HAnimSite");
HAnimSite210.USE = "hanim_l_digit2_pt";
HAnimHumanoid29.viewpoints[48] = HAnimSite210;

HAnimSite HAnimSite211 = createNode("HAnimSite");
HAnimSite211.USE = "hanim_r_digit2_pt";
HAnimHumanoid29.viewpoints[49] = HAnimSite211;

HAnimSite HAnimSite212 = createNode("HAnimSite");
HAnimSite212.USE = "hanim_l_femoral_lateral_epicn_pt";
HAnimHumanoid29.viewpoints[50] = HAnimSite212;

HAnimSite HAnimSite213 = createNode("HAnimSite");
HAnimSite213.USE = "hanim_r_femoral_lateral_epicn_pt";
HAnimHumanoid29.viewpoints[51] = HAnimSite213;

HAnimSite HAnimSite214 = createNode("HAnimSite");
HAnimSite214.USE = "hanim_l_femoral_medial_epicn_pt";
HAnimHumanoid29.viewpoints[52] = HAnimSite214;

HAnimSite HAnimSite215 = createNode("HAnimSite");
HAnimSite215.USE = "hanim_r_femoral_medial_epicn_pt";
HAnimHumanoid29.viewpoints[53] = HAnimSite215;

HAnimSite HAnimSite216 = createNode("HAnimSite");
HAnimSite216.USE = "hanim_r_gonion_pt";
HAnimHumanoid29.viewpoints[54] = HAnimSite216;

HAnimSite HAnimSite217 = createNode("HAnimSite");
HAnimSite217.USE = "hanim_l_gonion_pt";
HAnimHumanoid29.viewpoints[55] = HAnimSite217;

HAnimSite HAnimSite218 = createNode("HAnimSite");
HAnimSite218.USE = "hanim_l_hand_tip";
HAnimHumanoid29.viewpoints[56] = HAnimSite218;

HAnimSite HAnimSite219 = createNode("HAnimSite");
HAnimSite219.USE = "hanim_r_hand_tip";
HAnimHumanoid29.viewpoints[57] = HAnimSite219;

HAnimSite HAnimSite220 = createNode("HAnimSite");
HAnimSite220.USE = "hanim_l_humeral_lateral_epicn_pt";
HAnimHumanoid29.viewpoints[58] = HAnimSite220;

HAnimSite HAnimSite221 = createNode("HAnimSite");
HAnimSite221.USE = "hanim_r_humeral_lateral_epicn_pt";
HAnimHumanoid29.viewpoints[59] = HAnimSite221;

HAnimSite HAnimSite222 = createNode("HAnimSite");
HAnimSite222.USE = "hanim_l_humeral_medial_epicn_pt";
HAnimHumanoid29.viewpoints[60] = HAnimSite222;

HAnimSite HAnimSite223 = createNode("HAnimSite");
HAnimSite223.USE = "hanim_r_humeral_medial_epicn_pt";
HAnimHumanoid29.viewpoints[61] = HAnimSite223;

HAnimSite HAnimSite224 = createNode("HAnimSite");
HAnimSite224.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid29.viewpoints[62] = HAnimSite224;

HAnimSite HAnimSite225 = createNode("HAnimSite");
HAnimSite225.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid29.viewpoints[63] = HAnimSite225;

HAnimSite HAnimSite226 = createNode("HAnimSite");
HAnimSite226.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid29.viewpoints[64] = HAnimSite226;

HAnimSite HAnimSite227 = createNode("HAnimSite");
HAnimSite227.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid29.viewpoints[65] = HAnimSite227;

HAnimSite HAnimSite228 = createNode("HAnimSite");
HAnimSite228.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid29.viewpoints[66] = HAnimSite228;

HAnimSite HAnimSite229 = createNode("HAnimSite");
HAnimSite229.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid29.viewpoints[67] = HAnimSite229;

HAnimSite HAnimSite230 = createNode("HAnimSite");
HAnimSite230.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid29.viewpoints[68] = HAnimSite230;

HAnimSite HAnimSite231 = createNode("HAnimSite");
HAnimSite231.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid29.viewpoints[69] = HAnimSite231;

HAnimSite HAnimSite232 = createNode("HAnimSite");
HAnimSite232.USE = "hanim_l_metacarpal_pha2_pt";
HAnimHumanoid29.viewpoints[70] = HAnimSite232;

HAnimSite HAnimSite233 = createNode("HAnimSite");
HAnimSite233.USE = "hanim_r_metacarpal_pha2_pt";
HAnimHumanoid29.viewpoints[71] = HAnimSite233;

HAnimSite HAnimSite234 = createNode("HAnimSite");
HAnimSite234.USE = "hanim_l_metacarpal_pha5_pt";
HAnimHumanoid29.viewpoints[72] = HAnimSite234;

HAnimSite HAnimSite235 = createNode("HAnimSite");
HAnimSite235.USE = "hanim_r_metacarpal_pha5_pt";
HAnimHumanoid29.viewpoints[73] = HAnimSite235;

HAnimSite HAnimSite236 = createNode("HAnimSite");
HAnimSite236.USE = "hanim_l_metatarsal_pha1_pt";
HAnimHumanoid29.viewpoints[74] = HAnimSite236;

HAnimSite HAnimSite237 = createNode("HAnimSite");
HAnimSite237.USE = "hanim_r_metatarsal_pha1_pt";
HAnimHumanoid29.viewpoints[75] = HAnimSite237;

HAnimSite HAnimSite238 = createNode("HAnimSite");
HAnimSite238.USE = "hanim_l_metatarsal_pha5_pt";
HAnimHumanoid29.viewpoints[76] = HAnimSite238;

HAnimSite HAnimSite239 = createNode("HAnimSite");
HAnimSite239.USE = "hanim_r_metatarsal_pha5_pt";
HAnimHumanoid29.viewpoints[77] = HAnimSite239;

HAnimSite HAnimSite240 = createNode("HAnimSite");
HAnimSite240.USE = "hanim_l_middistal_tip";
HAnimHumanoid29.viewpoints[78] = HAnimSite240;

HAnimSite HAnimSite241 = createNode("HAnimSite");
HAnimSite241.USE = "hanim_r_middistal_tip";
HAnimHumanoid29.viewpoints[79] = HAnimSite241;

HAnimSite HAnimSite242 = createNode("HAnimSite");
HAnimSite242.USE = "hanim_l_olecranon_pt";
HAnimHumanoid29.viewpoints[80] = HAnimSite242;

HAnimSite HAnimSite243 = createNode("HAnimSite");
HAnimSite243.USE = "hanim_r_olecranon_pt";
HAnimHumanoid29.viewpoints[81] = HAnimSite243;

HAnimSite HAnimSite244 = createNode("HAnimSite");
HAnimSite244.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid29.viewpoints[82] = HAnimSite244;

HAnimSite HAnimSite245 = createNode("HAnimSite");
HAnimSite245.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid29.viewpoints[83] = HAnimSite245;

HAnimSite HAnimSite246 = createNode("HAnimSite");
HAnimSite246.USE = "hanim_l_radiale_pt";
HAnimHumanoid29.viewpoints[84] = HAnimSite246;

HAnimSite HAnimSite247 = createNode("HAnimSite");
HAnimSite247.USE = "hanim_r_radiale_pt";
HAnimHumanoid29.viewpoints[85] = HAnimSite247;

HAnimSite HAnimSite248 = createNode("HAnimSite");
HAnimSite248.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid29.viewpoints[86] = HAnimSite248;

HAnimSite HAnimSite249 = createNode("HAnimSite");
HAnimSite249.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid29.viewpoints[87] = HAnimSite249;

HAnimSite HAnimSite250 = createNode("HAnimSite");
HAnimSite250.USE = "hanim_r_tragion_pt";
HAnimHumanoid29.viewpoints[88] = HAnimSite250;

HAnimSite HAnimSite251 = createNode("HAnimSite");
HAnimSite251.USE = "hanim_l_tragion_pt";
HAnimHumanoid29.viewpoints[89] = HAnimSite251;

HAnimSite HAnimSite252 = createNode("HAnimSite");
HAnimSite252.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid29.viewpoints[90] = HAnimSite252;

HAnimSite HAnimSite253 = createNode("HAnimSite");
HAnimSite253.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid29.viewpoints[91] = HAnimSite253;

HAnimSite HAnimSite254 = createNode("HAnimSite");
HAnimSite254.DEF = "hanim_DiamondManLOA_1_view";
HAnimSite254.name = "DiamondManLOA_1_view";
Viewpoint Viewpoint255 = createNode("Viewpoint");
Viewpoint255.DEF = "InclinedView";
Viewpoint255.description = "Inclined View";
Viewpoint255.position = new SFVec3f(new float[1.62,1.05,2.06]);
Viewpoint255.orientation = new SFRotation(new float[-0.113,0.993,0.0347,0.671]);
HAnimSite254.children = new MFNode();

HAnimSite254.children[0] = Viewpoint255;

Viewpoint Viewpoint256 = createNode("Viewpoint");
Viewpoint256.DEF = "FrontView";
Viewpoint256.description = "Front View";
Viewpoint256.position = new SFVec3f(new float[0,0.854,2.57665]);
HAnimSite254.children[1] = Viewpoint256;

Viewpoint Viewpoint257 = createNode("Viewpoint");
Viewpoint257.DEF = "SideView";
Viewpoint257.description = "Side View";
Viewpoint257.position = new SFVec3f(new float[2.5929,0.854,0]);
Viewpoint257.orientation = new SFRotation(new float[0,1,0,1.57079]);
HAnimSite254.children[2] = Viewpoint257;

Viewpoint Viewpoint258 = createNode("Viewpoint");
Viewpoint258.DEF = "TopView";
Viewpoint258.description = "Top View";
Viewpoint258.position = new SFVec3f(new float[0,3.4495,0]);
Viewpoint258.orientation = new SFRotation(new float[1,0,0,-1.57079]);
HAnimSite254.children[3] = Viewpoint258;

HAnimHumanoid29.viewpoints[92] = HAnimSite254;

children[3] = HAnimHumanoid29;

}
