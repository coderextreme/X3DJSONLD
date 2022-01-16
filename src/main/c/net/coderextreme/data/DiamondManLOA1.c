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
meta3.content = "DiamondManLOA1.x3d";
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
meta8.content = "23 December 2021";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "Image";
meta9.content = "images/BonesAllSkeletonFrontViewLOA1.png";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "motto";
meta10.content = "(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\"";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "warning";
meta11.content = "Still needs comments on CAESAR feature points inserted";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "reference";
meta12.content = "HAnim 1.1 specification, Appendix A: Suggested Body Dimensions and Levels of Articulation, Level of Articulation Two";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "reference";
meta13.content = "http://HAnim.org/Specifications/HAnim1.1/appendices.html#appendixa";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "reference";
meta14.content = "http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1.wrl";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "reference";
meta15.content = "http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1-diamond.wrl";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "reference";
meta16.content = "http://ece.uwaterloo.ca/~HAnim";
head1.meta[14] = meta16;

meta meta17 = createNode("meta");
meta17.name = "reference";
meta17.content = "http://www.cis.upenn.edu/~badler/anthro/89-71.pdf";
head1.meta[15] = meta17;

meta meta18 = createNode("meta");
meta18.name = "reference";
meta18.content = "http://www.cis.upenn.edu/~badler/anthro/89-71.ps";
head1.meta[16] = meta18;

meta meta19 = createNode("meta");
meta19.name = "reference";
meta19.content = "http://www.cis.upenn.edu/~beitler";
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
meta22.name = "identifier";
meta22.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA1.x3d";
head1.meta[20] = meta22;

meta meta23 = createNode("meta");
meta23.name = "generator";
meta23.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
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
WorldInfo27.info = new MFString(new java.lang.String["HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 1 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf"]);
WorldInfo27.title = "HANIM 1.1 Default Joint Centers, LOA1";
children = new MFNode();

children[0] = WorldInfo27;

NavigationInfo NavigationInfo28 = createNode("NavigationInfo");
NavigationInfo28.speed = 1.5;
children[1] = NavigationInfo28;

Viewpoint Viewpoint29 = createNode("Viewpoint");
Viewpoint29.centerOfRotation = new SFVec3f(new float[0,1,0]);
Viewpoint29.description = "Diamond Man, LOA 1";
Viewpoint29.position = new SFVec3f(new float[0,1,3]);
children[2] = Viewpoint29;

HAnimHumanoid HAnimHumanoid30 = createNode("HAnimHumanoid");
HAnimHumanoid30.name = "humanoid";
HAnimHumanoid30.DEF = "hanim_humanoid";
HAnimHumanoid30.loa = 1;
HAnimHumanoid30.version = "2.0";
//original HAnimHumanoid info='\"authorEmail=beitler@graphics.cis.upenn.edu beitler@acm.org\" \"authorName=Matthew T. Beitler\" \"copyright=Copyright 1999 Matthew T. Beitler\" \"humanoidVersion=JointCenters 1.1 LOA1\" \"usageRestrictions=PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided _as-is_ and without warranty of any kind express implied or otherwise including without limitation any warranty of merchantability or fitness for a particular purpose.\"'
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
MetadataString35.name = "humanoidVersion";
MetadataString35.value = new MFString(new java.lang.String["JointCenters 1.1 LOA1"]);
MetadataSet31.value[3] = MetadataString35;

MetadataString MetadataString36 = createNode("MetadataString");
MetadataString36.name = "usageRestrictions";
MetadataString36.value = new MFString(new java.lang.String["PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided _as-is_ and without warranty of any kind express implied or otherwise including without limitation any warranty of merchantability or fitness for a particular purpose."]);
MetadataSet31.value[4] = MetadataString36;

HAnimHumanoid30.metadata = MetadataSet31;

HAnimJoint HAnimJoint37 = createNode("HAnimJoint");
HAnimJoint37.name = "humanoid_root";
HAnimJoint37.DEF = "hanim_humanoid_root";
HAnimJoint37.center = new SFVec3f(new float[0,0.824,0.0277]);
HAnimJoint37.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint37.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint38 = createNode("HAnimJoint");
HAnimJoint38.name = "sacroiliac";
HAnimJoint38.DEF = "hanim_sacroiliac";
HAnimJoint38.center = new SFVec3f(new float[0,0.9149,0.0016]);
HAnimJoint38.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint38.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment39 = createNode("HAnimSegment");
HAnimSegment39.name = "pelvis";
HAnimSegment39.DEF = "hanim_pelvis";
Transform Transform40 = createNode("Transform");
Transform40.translation = new SFVec3f(new float[0,0.9149,0.0016]);
Shape Shape41 = createNode("Shape");
Shape41.DEF = "DiamondShape";
IndexedFaceSet IndexedFaceSet42 = createNode("IndexedFaceSet");
IndexedFaceSet42.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet42.creaseAngle = 0.5;
Coordinate Coordinate43 = createNode("Coordinate");
Coordinate43.DEF = "points";
Coordinate43.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet42.coord = Coordinate43;

Shape41.geometry = IndexedFaceSet42;

Appearance Appearance44 = createNode("Appearance");
Material Material45 = createNode("Material");
Material45.diffuseColor = new SFColor(new float[1,1,0]);
Appearance44.material = Material45;

Shape41.appearance = Appearance44;

Transform40.children = new MFNode();

Transform40.children[0] = Shape41;

HAnimSegment39.children = new MFNode();

HAnimSegment39.children[0] = Transform40;

HAnimJoint38.children = new MFNode();

HAnimJoint38.children[0] = HAnimSegment39;

HAnimJoint HAnimJoint46 = createNode("HAnimJoint");
HAnimJoint46.name = "l_hip";
HAnimJoint46.DEF = "hanim_l_hip";
HAnimJoint46.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
HAnimJoint46.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint46.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment47 = createNode("HAnimSegment");
HAnimSegment47.name = "l_thigh";
HAnimSegment47.DEF = "hanim_l_thigh";
Transform Transform48 = createNode("Transform");
Transform48.translation = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
Shape Shape49 = createNode("Shape");
Shape49.USE = "DiamondShape";
Transform48.children = new MFNode();

Transform48.children[0] = Shape49;

HAnimSegment47.children = new MFNode();

HAnimSegment47.children[0] = Transform48;

HAnimSite HAnimSite50 = createNode("HAnimSite");
HAnimSite50.name = "l_knee_crease_pt";
HAnimSite50.DEF = "hanim_l_knee_crease_pt";
HAnimSite50.translation = new SFVec3f(new float[0.0993,0.4881,-0.0309]);
HAnimSegment47.children[1] = HAnimSite50;

HAnimSite HAnimSite51 = createNode("HAnimSite");
HAnimSite51.name = "l_femoral_lateral_epicondyle_pt";
HAnimSite51.DEF = "hanim_l_femoral_lateral_epicondyle_pt";
HAnimSite51.translation = new SFVec3f(new float[0.1598,0.4967,0.0297]);
HAnimSegment47.children[2] = HAnimSite51;

HAnimSite HAnimSite52 = createNode("HAnimSite");
HAnimSite52.name = "l_femoral_medial_epicondyle_pt";
HAnimSite52.DEF = "hanim_l_femoral_medial_epicondyle_pt";
HAnimSite52.translation = new SFVec3f(new float[0.0398,0.4946,0.0303]);
HAnimSegment47.children[3] = HAnimSite52;

HAnimJoint46.children = new MFNode();

HAnimJoint46.children[0] = HAnimSegment47;

HAnimJoint HAnimJoint53 = createNode("HAnimJoint");
HAnimJoint53.name = "l_knee";
HAnimJoint53.DEF = "hanim_l_knee";
HAnimJoint53.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
HAnimJoint53.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint53.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment54 = createNode("HAnimSegment");
HAnimSegment54.name = "l_calf";
HAnimSegment54.DEF = "hanim_l_calf";
Transform Transform55 = createNode("Transform");
Transform55.translation = new SFVec3f(new float[0.104,0.4867,0.0308]);
Shape Shape56 = createNode("Shape");
Shape56.USE = "DiamondShape";
Transform55.children = new MFNode();

Transform55.children[0] = Shape56;

HAnimSegment54.children = new MFNode();

HAnimSegment54.children[0] = Transform55;

HAnimJoint53.children = new MFNode();

HAnimJoint53.children[0] = HAnimSegment54;

HAnimJoint HAnimJoint57 = createNode("HAnimJoint");
HAnimJoint57.name = "l_talocrural";
HAnimJoint57.DEF = "hanim_l_talocrural";
HAnimJoint57.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
HAnimJoint57.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint57.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment58 = createNode("HAnimSegment");
HAnimSegment58.name = "l_talus";
HAnimSegment58.DEF = "hanim_l_talus";
Transform Transform59 = createNode("Transform");
Transform59.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
Shape Shape60 = createNode("Shape");
Shape60.USE = "DiamondShape";
Transform59.children = new MFNode();

Transform59.children[0] = Shape60;

HAnimSegment58.children = new MFNode();

HAnimSegment58.children[0] = Transform59;

HAnimSite HAnimSite61 = createNode("HAnimSite");
HAnimSite61.name = "l_lateral_malleolus_pt";
HAnimSite61.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite61.translation = new SFVec3f(new float[0.1308,0.0597,-0.1032]);
HAnimSegment58.children[1] = HAnimSite61;

HAnimSite HAnimSite62 = createNode("HAnimSite");
HAnimSite62.name = "l_medial_malleolus_pt";
HAnimSite62.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite62.translation = new SFVec3f(new float[0.089,0.0716,-0.0881]);
HAnimSegment58.children[2] = HAnimSite62;

HAnimSite HAnimSite63 = createNode("HAnimSite");
HAnimSite63.name = "l_sphyrion_pt";
HAnimSite63.DEF = "hanim_l_sphyrion_pt";
HAnimSite63.translation = new SFVec3f(new float[0.089,0.0575,-0.0943]);
HAnimSegment58.children[3] = HAnimSite63;

HAnimSite HAnimSite64 = createNode("HAnimSite");
HAnimSite64.name = "l_calcaneus_posterior_pt";
HAnimSite64.DEF = "hanim_l_calcaneus_posterior_pt";
HAnimSite64.translation = new SFVec3f(new float[0.0974,0.0259,-0.1171]);
HAnimSegment58.children[4] = HAnimSite64;

HAnimJoint57.children = new MFNode();

HAnimJoint57.children[0] = HAnimSegment58;

HAnimJoint HAnimJoint65 = createNode("HAnimJoint");
HAnimJoint65.name = "l_metatarsophalangeal_2";
HAnimJoint65.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint65.center = new SFVec3f(new float[0.1086,0.0001,0.0368]);
HAnimJoint65.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint65.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment66 = createNode("HAnimSegment");
HAnimSegment66.name = "l_tarsal_proximal_phalanx_2";
HAnimSegment66.DEF = "hanim_l_tarsal_proximal_phalanx_2";
HAnimSite HAnimSite67 = createNode("HAnimSite");
HAnimSite67.name = "l_middistal_tip";
HAnimSite67.DEF = "hanim_l_middistal_tip";
HAnimSite67.translation = new SFVec3f(new float[0.1354,0.0016,0.1476]);
HAnimSegment66.children = new MFNode();

HAnimSegment66.children[0] = HAnimSite67;

HAnimSite HAnimSite68 = createNode("HAnimSite");
HAnimSite68.name = "l_metatarsal_phalanx_5_pt";
HAnimSite68.DEF = "hanim_l_metatarsal_phalanx_5_pt";
HAnimSite68.translation = new SFVec3f(new float[0.1825,0.007,0.0928]);
HAnimSegment66.children[1] = HAnimSite68;

HAnimSite HAnimSite69 = createNode("HAnimSite");
HAnimSite69.name = "l_metatarsal_phalanx_1_pt";
HAnimSite69.DEF = "hanim_l_metatarsal_phalanx_1_pt";
HAnimSite69.translation = new SFVec3f(new float[0.0816,0.0232,0.0106]);
HAnimSegment66.children[2] = HAnimSite69;

HAnimSite HAnimSite70 = createNode("HAnimSite");
HAnimSite70.name = "l_tarsal_distal_phalanx_2_pt";
HAnimSite70.DEF = "hanim_l_tarsal_distal_phalanx_2_pt";
HAnimSite70.translation = new SFVec3f(new float[0.1195,0.0079,0.1433]);
HAnimSegment66.children[3] = HAnimSite70;

HAnimJoint65.children = new MFNode();

HAnimJoint65.children[0] = HAnimSegment66;

HAnimJoint57.children[1] = HAnimJoint65;

HAnimJoint53.children[1] = HAnimJoint57;

HAnimJoint46.children[1] = HAnimJoint53;

HAnimJoint38.children[1] = HAnimJoint46;

HAnimJoint HAnimJoint71 = createNode("HAnimJoint");
HAnimJoint71.name = "r_hip";
HAnimJoint71.DEF = "hanim_r_hip";
HAnimJoint71.center = new SFVec3f(new float[-0.095,0.9171,0.0029]);
HAnimJoint71.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint71.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment72 = createNode("HAnimSegment");
HAnimSegment72.name = "r_thigh";
HAnimSegment72.DEF = "hanim_r_thigh";
Transform Transform73 = createNode("Transform");
Transform73.translation = new SFVec3f(new float[-0.095,0.9171,0.0029]);
Shape Shape74 = createNode("Shape");
Shape74.USE = "DiamondShape";
Transform73.children = new MFNode();

Transform73.children[0] = Shape74;

HAnimSegment72.children = new MFNode();

HAnimSegment72.children[0] = Transform73;

HAnimSite HAnimSite75 = createNode("HAnimSite");
HAnimSite75.name = "r_knee_crease_pt";
HAnimSite75.DEF = "hanim_r_knee_crease_pt";
HAnimSite75.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
HAnimSegment72.children[1] = HAnimSite75;

HAnimSite HAnimSite76 = createNode("HAnimSite");
HAnimSite76.name = "r_femoral_lateral_epicondyle_pt";
HAnimSite76.DEF = "hanim_r_femoral_lateral_epicondyle_pt";
HAnimSite76.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
HAnimSegment72.children[2] = HAnimSite76;

HAnimSite HAnimSite77 = createNode("HAnimSite");
HAnimSite77.name = "r_femoral_medial_epicondyle_pt";
HAnimSite77.DEF = "hanim_r_femoral_medial_epicondyle_pt";
HAnimSite77.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
HAnimSegment72.children[3] = HAnimSite77;

HAnimJoint71.children = new MFNode();

HAnimJoint71.children[0] = HAnimSegment72;

HAnimJoint HAnimJoint78 = createNode("HAnimJoint");
HAnimJoint78.name = "r_knee";
HAnimJoint78.DEF = "hanim_r_knee";
HAnimJoint78.center = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
HAnimJoint78.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint78.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment79 = createNode("HAnimSegment");
HAnimSegment79.name = "r_calf";
HAnimSegment79.DEF = "hanim_r_calf";
Transform Transform80 = createNode("Transform");
Transform80.translation = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
Shape Shape81 = createNode("Shape");
Shape81.USE = "DiamondShape";
Transform80.children = new MFNode();

Transform80.children[0] = Shape81;

HAnimSegment79.children = new MFNode();

HAnimSegment79.children[0] = Transform80;

HAnimJoint78.children = new MFNode();

HAnimJoint78.children[0] = HAnimSegment79;

HAnimJoint HAnimJoint82 = createNode("HAnimJoint");
HAnimJoint82.name = "r_talocrural";
HAnimJoint82.DEF = "hanim_r_talocrural";
HAnimJoint82.center = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
HAnimJoint82.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint82.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment83 = createNode("HAnimSegment");
HAnimSegment83.name = "r_talus";
HAnimSegment83.DEF = "hanim_r_talus";
Transform Transform84 = createNode("Transform");
Transform84.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
Shape Shape85 = createNode("Shape");
Shape85.USE = "DiamondShape";
Transform84.children = new MFNode();

Transform84.children[0] = Shape85;

HAnimSegment83.children = new MFNode();

HAnimSegment83.children[0] = Transform84;

HAnimSite HAnimSite86 = createNode("HAnimSite");
HAnimSite86.name = "r_lateral_malleolus_pt";
HAnimSite86.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite86.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
HAnimSegment83.children[1] = HAnimSite86;

HAnimSite HAnimSite87 = createNode("HAnimSite");
HAnimSite87.name = "r_medial_malleolus_pt";
HAnimSite87.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite87.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
HAnimSegment83.children[2] = HAnimSite87;

HAnimSite HAnimSite88 = createNode("HAnimSite");
HAnimSite88.name = "r_sphyrion_pt";
HAnimSite88.DEF = "hanim_r_sphyrion_pt";
HAnimSite88.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
HAnimSegment83.children[3] = HAnimSite88;

HAnimSite HAnimSite89 = createNode("HAnimSite");
HAnimSite89.name = "r_calcaneus_posterior_pt";
HAnimSite89.DEF = "hanim_r_calcaneus_posterior_pt";
HAnimSite89.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
HAnimSegment83.children[4] = HAnimSite89;

HAnimJoint82.children = new MFNode();

HAnimJoint82.children[0] = HAnimSegment83;

HAnimJoint HAnimJoint90 = createNode("HAnimJoint");
HAnimJoint90.name = "r_metatarsophalangeal_2";
HAnimJoint90.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint90.center = new SFVec3f(new float[-0.0801,0,0.0368]);
HAnimJoint90.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint90.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment91 = createNode("HAnimSegment");
HAnimSegment91.name = "r_tarsal_proximal_phalanx_2";
HAnimSegment91.DEF = "hanim_r_tarsal_proximal_phalanx_2";
HAnimSite HAnimSite92 = createNode("HAnimSite");
HAnimSite92.name = "r_middistal_tip";
HAnimSite92.DEF = "hanim_r_middistal_tip";
HAnimSite92.translation = new SFVec3f(new float[-0.1043,-0.0227,0.145]);
HAnimSegment91.children = new MFNode();

HAnimSegment91.children[0] = HAnimSite92;

HAnimSite HAnimSite93 = createNode("HAnimSite");
HAnimSite93.name = "r_metatarsal_phalanx_5_pt";
HAnimSite93.DEF = "hanim_r_metatarsal_phalanx_5_pt";
HAnimSite93.translation = new SFVec3f(new float[-0.1523,0.0166,0.0895]);
HAnimSegment91.children[1] = HAnimSite93;

HAnimSite HAnimSite94 = createNode("HAnimSite");
HAnimSite94.name = "r_metatarsal_phalanx_1_pt";
HAnimSite94.DEF = "hanim_r_metatarsal_phalanx_1_pt";
HAnimSite94.translation = new SFVec3f(new float[-0.0521,0.026,0.0127]);
HAnimSegment91.children[2] = HAnimSite94;

HAnimSite HAnimSite95 = createNode("HAnimSite");
HAnimSite95.name = "r_tarsal_distal_phalanx_2_pt";
HAnimSite95.DEF = "hanim_r_tarsal_distal_phalanx_2_pt";
HAnimSite95.translation = new SFVec3f(new float[-0.0883,0.0134,0.1383]);
HAnimSegment91.children[3] = HAnimSite95;

HAnimJoint90.children = new MFNode();

HAnimJoint90.children[0] = HAnimSegment91;

HAnimJoint82.children[1] = HAnimJoint90;

HAnimJoint78.children[1] = HAnimJoint82;

HAnimJoint71.children[1] = HAnimJoint78;

HAnimJoint38.children[2] = HAnimJoint71;

HAnimJoint37.children = new MFNode();

HAnimJoint37.children[0] = HAnimJoint38;

HAnimJoint HAnimJoint96 = createNode("HAnimJoint");
HAnimJoint96.name = "vl1";
HAnimJoint96.DEF = "hanim_vl1";
HAnimJoint96.center = new SFVec3f(new float[-0.00405,1.07,-0.0275]);
HAnimJoint96.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint96.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment97 = createNode("HAnimSegment");
HAnimSegment97.name = "l1";
HAnimSegment97.DEF = "hanim_l1";
HAnimJoint96.children = new MFNode();

HAnimJoint96.children[0] = HAnimSegment97;

HAnimJoint HAnimJoint98 = createNode("HAnimJoint");
HAnimJoint98.name = "l_shoulder";
HAnimJoint98.DEF = "hanim_l_shoulder";
HAnimJoint98.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimJoint98.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint98.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment99 = createNode("HAnimSegment");
HAnimSegment99.name = "l_upperarm";
HAnimSegment99.DEF = "hanim_l_upperarm";
Transform Transform100 = createNode("Transform");
Transform100.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
Shape Shape101 = createNode("Shape");
Shape101.USE = "DiamondShape";
Transform100.children = new MFNode();

Transform100.children[0] = Shape101;

HAnimSegment99.children = new MFNode();

HAnimSegment99.children[0] = Transform100;

Transform Transform102 = createNode("Transform");
Transform102.DEF = "l_upperarm_adjust";
Transform102.center = new SFVec3f(new float[0.182,1.22,-0.047]);
Transform102.rotation = new SFRotation(new float[1,0,0,0.119]);
Transform102.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimSegment99.children[1] = Transform102;

HAnimSite HAnimSite103 = createNode("HAnimSite");
HAnimSite103.name = "l_humeral_lateral_epicondyle_pt";
HAnimSite103.DEF = "hanim_l_humeral_lateral_epicondyle_pt";
HAnimSite103.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
HAnimSegment99.children[2] = HAnimSite103;

HAnimJoint98.children = new MFNode();

HAnimJoint98.children[0] = HAnimSegment99;

HAnimJoint HAnimJoint104 = createNode("HAnimJoint");
HAnimJoint104.name = "l_elbow";
HAnimJoint104.DEF = "hanim_l_elbow";
HAnimJoint104.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimJoint104.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint104.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment105 = createNode("HAnimSegment");
HAnimSegment105.name = "l_forearm";
HAnimSegment105.DEF = "hanim_l_forearm";
Transform Transform106 = createNode("Transform");
Transform106.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
Shape Shape107 = createNode("Shape");
Shape107.USE = "DiamondShape";
Transform106.children = new MFNode();

Transform106.children[0] = Shape107;

HAnimSegment105.children = new MFNode();

HAnimSegment105.children[0] = Transform106;

Transform Transform108 = createNode("Transform");
Transform108.DEF = "l_forearm_adjust";
Transform108.center = new SFVec3f(new float[0.198,0.961,-0.0405]);
Transform108.rotation = new SFRotation(new float[-1,0,0,0.1]);
Transform108.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimSegment105.children[1] = Transform108;

HAnimSite HAnimSite109 = createNode("HAnimSite");
HAnimSite109.name = "l_radial_styloid_pt";
HAnimSite109.DEF = "hanim_l_radial_styloid_pt";
HAnimSite109.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
HAnimSegment105.children[2] = HAnimSite109;

HAnimSite HAnimSite110 = createNode("HAnimSite");
HAnimSite110.name = "l_olecranon_pt";
HAnimSite110.DEF = "hanim_l_olecranon_pt";
HAnimSite110.translation = new SFVec3f(new float[-0.1962,1.1375,-0.1123]);
HAnimSegment105.children[3] = HAnimSite110;

HAnimSite HAnimSite111 = createNode("HAnimSite");
HAnimSite111.name = "l_humeral_medial_epicondyle_pt";
HAnimSite111.DEF = "hanim_l_humeral_medial_epicondyle_pt";
HAnimSite111.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
HAnimSegment105.children[4] = HAnimSite111;

HAnimSite HAnimSite112 = createNode("HAnimSite");
HAnimSite112.name = "l_radiale_pt";
HAnimSite112.DEF = "hanim_l_radiale_pt";
HAnimSite112.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
HAnimSegment105.children[5] = HAnimSite112;

HAnimJoint104.children = new MFNode();

HAnimJoint104.children[0] = HAnimSegment105;

HAnimJoint HAnimJoint113 = createNode("HAnimJoint");
HAnimJoint113.name = "l_radiocarpal";
HAnimJoint113.DEF = "hanim_l_radiocarpal";
HAnimJoint113.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimJoint113.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint113.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment114 = createNode("HAnimSegment");
HAnimSegment114.name = "l_carpal";
HAnimSegment114.DEF = "hanim_l_carpal";
Transform Transform115 = createNode("Transform");
Transform115.translation = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
Shape Shape116 = createNode("Shape");
Shape116.USE = "DiamondShape";
Transform115.children = new MFNode();

Transform115.children[0] = Shape116;

HAnimSegment114.children = new MFNode();

HAnimSegment114.children[0] = Transform115;

Transform Transform117 = createNode("Transform");
Transform117.DEF = "l_hand_adjust";
Transform117.center = new SFVec3f(new float[0.213,0.811,-0.0338]);
Transform117.rotation = new SFRotation(new float[-0.06361,-0.9967,0.04988,1.333]);
Transform117.translation = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimSegment114.children[1] = Transform117;

HAnimSite HAnimSite118 = createNode("HAnimSite");
HAnimSite118.name = "l_hand_tip";
HAnimSite118.DEF = "hanim_l_hand_tip";
HAnimSite118.translation = new SFVec3f(new float[0.208,0.6731,-0.0491]);
HAnimSegment114.children[2] = HAnimSite118;

HAnimSite HAnimSite119 = createNode("HAnimSite");
HAnimSite119.name = "l_metacarpal_phalanx_2_pt";
HAnimSite119.DEF = "hanim_l_metacarpal_phalanx_2_pt";
HAnimSite119.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
HAnimSegment114.children[3] = HAnimSite119;

HAnimSite HAnimSite120 = createNode("HAnimSite");
HAnimSite120.name = "l_dactylion_pt";
HAnimSite120.DEF = "hanim_l_dactylion_pt";
HAnimSite120.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
HAnimSegment114.children[4] = HAnimSite120;

HAnimSite HAnimSite121 = createNode("HAnimSite");
HAnimSite121.name = "l_ulnar_styloid_pt";
HAnimSite121.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite121.translation = new SFVec3f(new float[-0.2142,0.8529,-0.0648]);
HAnimSegment114.children[5] = HAnimSite121;

HAnimSite HAnimSite122 = createNode("HAnimSite");
HAnimSite122.name = "l_metacarpal_phalanx_5_pt";
HAnimSite122.DEF = "hanim_l_metacarpal_phalanx_5_pt";
HAnimSite122.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
HAnimSegment114.children[6] = HAnimSite122;

HAnimJoint113.children = new MFNode();

HAnimJoint113.children[0] = HAnimSegment114;

HAnimJoint104.children[1] = HAnimJoint113;

HAnimJoint98.children[1] = HAnimJoint104;

HAnimJoint96.children[1] = HAnimJoint98;

HAnimJoint HAnimJoint123 = createNode("HAnimJoint");
HAnimJoint123.name = "r_shoulder";
HAnimJoint123.DEF = "hanim_r_shoulder";
HAnimJoint123.center = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
HAnimJoint123.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint123.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment124 = createNode("HAnimSegment");
HAnimSegment124.name = "r_upperarm";
HAnimSegment124.DEF = "hanim_r_upperarm";
Transform Transform125 = createNode("Transform");
Transform125.translation = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
Shape Shape126 = createNode("Shape");
Shape126.USE = "DiamondShape";
Transform125.children = new MFNode();

Transform125.children[0] = Shape126;

HAnimSegment124.children = new MFNode();

HAnimSegment124.children[0] = Transform125;

Transform Transform127 = createNode("Transform");
Transform127.DEF = "r_upperarm_adjust";
Transform127.center = new SFVec3f(new float[-0.182,1.22,-0.047]);
Transform127.rotation = new SFRotation(new float[1,0,0,0.0836]);
Transform127.translation = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
HAnimSegment124.children[1] = Transform127;

HAnimSite HAnimSite128 = createNode("HAnimSite");
HAnimSite128.name = "r_humeral_lateral_epicondyle_pt";
HAnimSite128.DEF = "hanim_r_humeral_lateral_epicondyle_pt";
HAnimSite128.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
HAnimSegment124.children[2] = HAnimSite128;

HAnimJoint123.children = new MFNode();

HAnimJoint123.children[0] = HAnimSegment124;

HAnimJoint HAnimJoint129 = createNode("HAnimJoint");
HAnimJoint129.name = "r_elbow";
HAnimJoint129.DEF = "hanim_r_elbow";
HAnimJoint129.center = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
HAnimJoint129.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint129.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment130 = createNode("HAnimSegment");
HAnimSegment130.name = "r_forearm";
HAnimSegment130.DEF = "hanim_r_forearm";
Transform Transform131 = createNode("Transform");
Transform131.translation = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
Shape Shape132 = createNode("Shape");
Shape132.USE = "DiamondShape";
Transform131.children = new MFNode();

Transform131.children[0] = Shape132;

HAnimSegment130.children = new MFNode();

HAnimSegment130.children[0] = Transform131;

Transform Transform133 = createNode("Transform");
Transform133.DEF = "r_forearm_adjust";
Transform133.center = new SFVec3f(new float[-0.198,0.961,-0.0397]);
Transform133.rotation = new SFRotation(new float[-1,0,0,0.1254]);
Transform133.translation = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
HAnimSegment130.children[1] = Transform133;

HAnimSite HAnimSite134 = createNode("HAnimSite");
HAnimSite134.name = "r_radial_styloid_pt";
HAnimSite134.DEF = "hanim_r_radial_styloid_pt";
HAnimSite134.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
HAnimSegment130.children[2] = HAnimSite134;

HAnimSite HAnimSite135 = createNode("HAnimSite");
HAnimSite135.name = "r_olecranon_pt";
HAnimSite135.DEF = "hanim_r_olecranon_pt";
HAnimSite135.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
HAnimSegment130.children[3] = HAnimSite135;

HAnimSite HAnimSite136 = createNode("HAnimSite");
HAnimSite136.name = "r_humeral_medial_epicondyle_pt";
HAnimSite136.DEF = "hanim_r_humeral_medial_epicondyle_pt";
HAnimSite136.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
HAnimSegment130.children[4] = HAnimSite136;

HAnimSite HAnimSite137 = createNode("HAnimSite");
HAnimSite137.name = "r_radiale_pt";
HAnimSite137.DEF = "hanim_r_radiale_pt";
HAnimSite137.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
HAnimSegment130.children[5] = HAnimSite137;

HAnimJoint129.children = new MFNode();

HAnimJoint129.children[0] = HAnimSegment130;

HAnimJoint HAnimJoint138 = createNode("HAnimJoint");
HAnimJoint138.name = "r_radiocarpal";
HAnimJoint138.DEF = "hanim_r_radiocarpal";
HAnimJoint138.center = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
HAnimJoint138.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint138.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment139 = createNode("HAnimSegment");
HAnimSegment139.name = "r_carpal";
HAnimSegment139.DEF = "hanim_r_carpal";
Transform Transform140 = createNode("Transform");
Transform140.translation = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
Shape Shape141 = createNode("Shape");
Shape141.USE = "DiamondShape";
Transform140.children = new MFNode();

Transform140.children[0] = Shape141;

HAnimSegment139.children = new MFNode();

HAnimSegment139.children[0] = Transform140;

Transform Transform142 = createNode("Transform");
Transform142.DEF = "r_hand_adjust";
Transform142.center = new SFVec3f(new float[-0.217,0.811,-0.0338]);
Transform142.rotation = new SFRotation(new float[-0.09024,0.994,-0.0624,1.216]);
HAnimSegment139.children[1] = Transform142;

HAnimSite HAnimSite143 = createNode("HAnimSite");
HAnimSite143.name = "r_hand_tip";
HAnimSite143.DEF = "hanim_r_hand_tip";
HAnimSite143.translation = new SFVec3f(new float[-0.1969,0.6758,-0.0427]);
HAnimSegment139.children[2] = HAnimSite143;

HAnimSite HAnimSite144 = createNode("HAnimSite");
HAnimSite144.name = "r_metacarpal_phalanx_2_pt";
HAnimSite144.DEF = "hanim_r_metacarpal_phalanx_2_pt";
HAnimSite144.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
HAnimSegment139.children[3] = HAnimSite144;

HAnimSite HAnimSite145 = createNode("HAnimSite");
HAnimSite145.name = "r_dactylion_pt";
HAnimSite145.DEF = "hanim_r_dactylion_pt";
HAnimSite145.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
HAnimSegment139.children[4] = HAnimSite145;

HAnimSite HAnimSite146 = createNode("HAnimSite");
HAnimSite146.name = "r_ulnar_styloid_pt";
HAnimSite146.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite146.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
HAnimSegment139.children[5] = HAnimSite146;

HAnimSite HAnimSite147 = createNode("HAnimSite");
HAnimSite147.name = "r_metacarpal_phalanx_5_pt";
HAnimSite147.DEF = "hanim_r_metacarpal_phalanx_5_pt";
HAnimSite147.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
HAnimSegment139.children[6] = HAnimSite147;

HAnimJoint138.children = new MFNode();

HAnimJoint138.children[0] = HAnimSegment139;

HAnimJoint129.children[1] = HAnimJoint138;

HAnimJoint123.children[1] = HAnimJoint129;

HAnimJoint96.children[2] = HAnimJoint123;

HAnimJoint HAnimJoint148 = createNode("HAnimJoint");
HAnimJoint148.name = "vc4";
HAnimJoint148.DEF = "hanim_vc4";
HAnimJoint148.center = new SFVec3f(new float[0,1.43,-0.0458]);
HAnimJoint148.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint148.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment149 = createNode("HAnimSegment");
HAnimSegment149.name = "c4";
HAnimSegment149.DEF = "hanim_c4";
HAnimJoint148.children = new MFNode();

HAnimJoint148.children[0] = HAnimSegment149;

HAnimJoint96.children[3] = HAnimJoint148;

HAnimJoint37.children[1] = HAnimJoint96;

HAnimJoint HAnimJoint150 = createNode("HAnimJoint");
HAnimJoint150.name = "vl5";
HAnimJoint150.DEF = "hanim_vl5";
HAnimJoint150.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimJoint150.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint150.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint151 = createNode("HAnimJoint");
HAnimJoint151.name = "skullbase";
HAnimJoint151.DEF = "hanim_skullbase";
HAnimJoint151.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimJoint151.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint151.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment152 = createNode("HAnimSegment");
HAnimSegment152.name = "skull";
HAnimSegment152.DEF = "hanim_skull";
Transform Transform153 = createNode("Transform");
Transform153.translation = new SFVec3f(new float[0.0044,1.6209,0.0236]);
Shape Shape154 = createNode("Shape");
Shape154.USE = "DiamondShape";
Transform153.children = new MFNode();

Transform153.children[0] = Shape154;

HAnimSegment152.children = new MFNode();

HAnimSegment152.children[0] = Transform153;

HAnimSite HAnimSite155 = createNode("HAnimSite");
HAnimSite155.name = "skull_vertex_tip";
HAnimSite155.DEF = "hanim_skull_vertex_tip";
HAnimSite155.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
HAnimSegment152.children[1] = HAnimSite155;

HAnimSite HAnimSite156 = createNode("HAnimSite");
HAnimSite156.name = "sellion_pt";
HAnimSite156.DEF = "hanim_sellion_pt";
HAnimSite156.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
HAnimSegment152.children[2] = HAnimSite156;

HAnimSite HAnimSite157 = createNode("HAnimSite");
HAnimSite157.name = "r_infraorbitale_pt";
HAnimSite157.DEF = "hanim_r_infraorbitale_pt";
HAnimSite157.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
HAnimSegment152.children[3] = HAnimSite157;

HAnimSite HAnimSite158 = createNode("HAnimSite");
HAnimSite158.name = "l_infraorbitale_pt";
HAnimSite158.DEF = "hanim_l_infraorbitale_pt";
HAnimSite158.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
HAnimSegment152.children[4] = HAnimSite158;

HAnimSite HAnimSite159 = createNode("HAnimSite");
HAnimSite159.name = "supramenton_pt";
HAnimSite159.DEF = "hanim_supramenton_pt";
HAnimSite159.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
HAnimSegment152.children[5] = HAnimSite159;

HAnimSite HAnimSite160 = createNode("HAnimSite");
HAnimSite160.name = "r_tragion_pt";
HAnimSite160.DEF = "hanim_r_tragion_pt";
HAnimSite160.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
HAnimSegment152.children[6] = HAnimSite160;

HAnimSite HAnimSite161 = createNode("HAnimSite");
HAnimSite161.name = "r_gonion_pt";
HAnimSite161.DEF = "hanim_r_gonion_pt";
HAnimSite161.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
HAnimSegment152.children[7] = HAnimSite161;

HAnimSite HAnimSite162 = createNode("HAnimSite");
HAnimSite162.name = "l_tragion_pt";
HAnimSite162.DEF = "hanim_l_tragion_pt";
HAnimSite162.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
HAnimSegment152.children[8] = HAnimSite162;

HAnimSite HAnimSite163 = createNode("HAnimSite");
HAnimSite163.name = "l_gonion_pt";
HAnimSite163.DEF = "hanim_l_gonion_pt";
HAnimSite163.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
HAnimSegment152.children[9] = HAnimSite163;

HAnimSite HAnimSite164 = createNode("HAnimSite");
HAnimSite164.name = "nuchale_pt";
HAnimSite164.DEF = "hanim_nuchale_pt";
HAnimSite164.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
HAnimSegment152.children[10] = HAnimSite164;

HAnimJoint151.children = new MFNode();

HAnimJoint151.children[0] = HAnimSegment152;

HAnimJoint150.children = new MFNode();

HAnimJoint150.children[0] = HAnimJoint151;

HAnimJoint37.children[2] = HAnimJoint150;

HAnimHumanoid30.joints = new MFNode();

HAnimHumanoid30.joints[0] = HAnimJoint37;

HAnimSite HAnimSite165 = createNode("HAnimSite");
HAnimSite165.name = "DiamondManLOA1_view";
HAnimSite165.DEF = "hanim_DiamondManLOA1_view";
Viewpoint Viewpoint166 = createNode("Viewpoint");
Viewpoint166.DEF = "InclinedView";
Viewpoint166.description = "Inclined View";
Viewpoint166.orientation = new SFRotation(new float[-0.113,0.993,0.0347,0.671]);
Viewpoint166.position = new SFVec3f(new float[1.62,1.05,2.06]);
HAnimSite165.children = new MFNode();

HAnimSite165.children[0] = Viewpoint166;

Viewpoint Viewpoint167 = createNode("Viewpoint");
Viewpoint167.DEF = "FrontView";
Viewpoint167.description = "Front View";
Viewpoint167.position = new SFVec3f(new float[0,0.854,2.57665]);
HAnimSite165.children[1] = Viewpoint167;

Viewpoint Viewpoint168 = createNode("Viewpoint");
Viewpoint168.DEF = "SideView";
Viewpoint168.description = "Side View";
Viewpoint168.orientation = new SFRotation(new float[0,1,0,1.57079]);
Viewpoint168.position = new SFVec3f(new float[2.5929,0.854,0]);
HAnimSite165.children[2] = Viewpoint168;

Viewpoint Viewpoint169 = createNode("Viewpoint");
Viewpoint169.DEF = "TopView";
Viewpoint169.description = "Top View";
Viewpoint169.orientation = new SFRotation(new float[1,0,0,-1.57079]);
Viewpoint169.position = new SFVec3f(new float[0,3.4495,0]);
HAnimSite165.children[3] = Viewpoint169;

HAnimHumanoid30.viewpoints[1] = HAnimSite165;

HAnimJoint HAnimJoint170 = createNode("HAnimJoint");
HAnimJoint170.USE = "hanim_humanoid_root";
HAnimHumanoid30.joints[2] = HAnimJoint170;

HAnimJoint HAnimJoint171 = createNode("HAnimJoint");
HAnimJoint171.USE = "hanim_sacroiliac";
HAnimHumanoid30.joints[3] = HAnimJoint171;

HAnimJoint HAnimJoint172 = createNode("HAnimJoint");
HAnimJoint172.USE = "hanim_vl1";
HAnimHumanoid30.joints[4] = HAnimJoint172;

HAnimJoint HAnimJoint173 = createNode("HAnimJoint");
HAnimJoint173.USE = "hanim_vc4";
HAnimHumanoid30.joints[5] = HAnimJoint173;

HAnimJoint HAnimJoint174 = createNode("HAnimJoint");
HAnimJoint174.USE = "hanim_skullbase";
HAnimHumanoid30.joints[6] = HAnimJoint174;

HAnimJoint HAnimJoint175 = createNode("HAnimJoint");
HAnimJoint175.USE = "hanim_vl5";
HAnimHumanoid30.joints[7] = HAnimJoint175;

HAnimJoint HAnimJoint176 = createNode("HAnimJoint");
HAnimJoint176.USE = "hanim_l_elbow";
HAnimHumanoid30.joints[8] = HAnimJoint176;

HAnimJoint HAnimJoint177 = createNode("HAnimJoint");
HAnimJoint177.USE = "hanim_r_elbow";
HAnimHumanoid30.joints[9] = HAnimJoint177;

HAnimJoint HAnimJoint178 = createNode("HAnimJoint");
HAnimJoint178.USE = "hanim_l_hip";
HAnimHumanoid30.joints[10] = HAnimJoint178;

HAnimJoint HAnimJoint179 = createNode("HAnimJoint");
HAnimJoint179.USE = "hanim_r_hip";
HAnimHumanoid30.joints[11] = HAnimJoint179;

HAnimJoint HAnimJoint180 = createNode("HAnimJoint");
HAnimJoint180.USE = "hanim_l_knee";
HAnimHumanoid30.joints[12] = HAnimJoint180;

HAnimJoint HAnimJoint181 = createNode("HAnimJoint");
HAnimJoint181.USE = "hanim_r_knee";
HAnimHumanoid30.joints[13] = HAnimJoint181;

HAnimJoint HAnimJoint182 = createNode("HAnimJoint");
HAnimJoint182.USE = "hanim_l_metatarsophalangeal_2";
HAnimHumanoid30.joints[14] = HAnimJoint182;

HAnimJoint HAnimJoint183 = createNode("HAnimJoint");
HAnimJoint183.USE = "hanim_r_metatarsophalangeal_2";
HAnimHumanoid30.joints[15] = HAnimJoint183;

HAnimJoint HAnimJoint184 = createNode("HAnimJoint");
HAnimJoint184.USE = "hanim_l_radiocarpal";
HAnimHumanoid30.joints[16] = HAnimJoint184;

HAnimJoint HAnimJoint185 = createNode("HAnimJoint");
HAnimJoint185.USE = "hanim_r_radiocarpal";
HAnimHumanoid30.joints[17] = HAnimJoint185;

HAnimJoint HAnimJoint186 = createNode("HAnimJoint");
HAnimJoint186.USE = "hanim_l_shoulder";
HAnimHumanoid30.joints[18] = HAnimJoint186;

HAnimJoint HAnimJoint187 = createNode("HAnimJoint");
HAnimJoint187.USE = "hanim_r_shoulder";
HAnimHumanoid30.joints[19] = HAnimJoint187;

HAnimJoint HAnimJoint188 = createNode("HAnimJoint");
HAnimJoint188.USE = "hanim_l_talocrural";
HAnimHumanoid30.joints[20] = HAnimJoint188;

HAnimJoint HAnimJoint189 = createNode("HAnimJoint");
HAnimJoint189.USE = "hanim_r_talocrural";
HAnimHumanoid30.joints[21] = HAnimJoint189;

HAnimSegment HAnimSegment190 = createNode("HAnimSegment");
HAnimSegment190.USE = "hanim_pelvis";
HAnimHumanoid30.segments[22] = HAnimSegment190;

HAnimSegment HAnimSegment191 = createNode("HAnimSegment");
HAnimSegment191.USE = "hanim_l1";
HAnimHumanoid30.segments[23] = HAnimSegment191;

HAnimSegment HAnimSegment192 = createNode("HAnimSegment");
HAnimSegment192.USE = "hanim_c4";
HAnimHumanoid30.segments[24] = HAnimSegment192;

HAnimSegment HAnimSegment193 = createNode("HAnimSegment");
HAnimSegment193.USE = "hanim_skull";
HAnimHumanoid30.segments[25] = HAnimSegment193;

HAnimSegment HAnimSegment194 = createNode("HAnimSegment");
HAnimSegment194.USE = "hanim_l_calf";
HAnimHumanoid30.segments[26] = HAnimSegment194;

HAnimSegment HAnimSegment195 = createNode("HAnimSegment");
HAnimSegment195.USE = "hanim_r_calf";
HAnimHumanoid30.segments[27] = HAnimSegment195;

HAnimSegment HAnimSegment196 = createNode("HAnimSegment");
HAnimSegment196.USE = "hanim_l_carpal";
HAnimHumanoid30.segments[28] = HAnimSegment196;

HAnimSegment HAnimSegment197 = createNode("HAnimSegment");
HAnimSegment197.USE = "hanim_r_carpal";
HAnimHumanoid30.segments[29] = HAnimSegment197;

HAnimSegment HAnimSegment198 = createNode("HAnimSegment");
HAnimSegment198.USE = "hanim_l_forearm";
HAnimHumanoid30.segments[30] = HAnimSegment198;

HAnimSegment HAnimSegment199 = createNode("HAnimSegment");
HAnimSegment199.USE = "hanim_r_forearm";
HAnimHumanoid30.segments[31] = HAnimSegment199;

HAnimSegment HAnimSegment200 = createNode("HAnimSegment");
HAnimSegment200.USE = "hanim_l_talus";
HAnimHumanoid30.segments[32] = HAnimSegment200;

HAnimSegment HAnimSegment201 = createNode("HAnimSegment");
HAnimSegment201.USE = "hanim_r_talus";
HAnimHumanoid30.segments[33] = HAnimSegment201;

HAnimSegment HAnimSegment202 = createNode("HAnimSegment");
HAnimSegment202.USE = "hanim_l_tarsal_proximal_phalanx_2";
HAnimHumanoid30.segments[34] = HAnimSegment202;

HAnimSegment HAnimSegment203 = createNode("HAnimSegment");
HAnimSegment203.USE = "hanim_r_tarsal_proximal_phalanx_2";
HAnimHumanoid30.segments[35] = HAnimSegment203;

HAnimSegment HAnimSegment204 = createNode("HAnimSegment");
HAnimSegment204.USE = "hanim_l_thigh";
HAnimHumanoid30.segments[36] = HAnimSegment204;

HAnimSegment HAnimSegment205 = createNode("HAnimSegment");
HAnimSegment205.USE = "hanim_r_thigh";
HAnimHumanoid30.segments[37] = HAnimSegment205;

HAnimSegment HAnimSegment206 = createNode("HAnimSegment");
HAnimSegment206.USE = "hanim_l_upperarm";
HAnimHumanoid30.segments[38] = HAnimSegment206;

HAnimSegment HAnimSegment207 = createNode("HAnimSegment");
HAnimSegment207.USE = "hanim_r_upperarm";
HAnimHumanoid30.segments[39] = HAnimSegment207;

HAnimSite HAnimSite208 = createNode("HAnimSite");
HAnimSite208.USE = "hanim_skull_vertex_tip";
HAnimHumanoid30.viewpoints[40] = HAnimSite208;

HAnimSite HAnimSite209 = createNode("HAnimSite");
HAnimSite209.USE = "hanim_sellion_pt";
HAnimHumanoid30.viewpoints[41] = HAnimSite209;

HAnimSite HAnimSite210 = createNode("HAnimSite");
HAnimSite210.USE = "hanim_supramenton_pt";
HAnimHumanoid30.viewpoints[42] = HAnimSite210;

HAnimSite HAnimSite211 = createNode("HAnimSite");
HAnimSite211.USE = "hanim_nuchale_pt";
HAnimHumanoid30.viewpoints[43] = HAnimSite211;

HAnimSite HAnimSite212 = createNode("HAnimSite");
HAnimSite212.USE = "hanim_l_calcaneus_posterior_pt";
HAnimHumanoid30.viewpoints[44] = HAnimSite212;

HAnimSite HAnimSite213 = createNode("HAnimSite");
HAnimSite213.USE = "hanim_r_calcaneus_posterior_pt";
HAnimHumanoid30.viewpoints[45] = HAnimSite213;

HAnimSite HAnimSite214 = createNode("HAnimSite");
HAnimSite214.USE = "hanim_l_dactylion_pt";
HAnimHumanoid30.viewpoints[46] = HAnimSite214;

HAnimSite HAnimSite215 = createNode("HAnimSite");
HAnimSite215.USE = "hanim_r_dactylion_pt";
HAnimHumanoid30.viewpoints[47] = HAnimSite215;

HAnimSite HAnimSite216 = createNode("HAnimSite");
HAnimSite216.USE = "hanim_l_femoral_lateral_epicondyle_pt";
HAnimHumanoid30.viewpoints[48] = HAnimSite216;

HAnimSite HAnimSite217 = createNode("HAnimSite");
HAnimSite217.USE = "hanim_r_femoral_lateral_epicondyle_pt";
HAnimHumanoid30.viewpoints[49] = HAnimSite217;

HAnimSite HAnimSite218 = createNode("HAnimSite");
HAnimSite218.USE = "hanim_l_femoral_medial_epicondyle_pt";
HAnimHumanoid30.viewpoints[50] = HAnimSite218;

HAnimSite HAnimSite219 = createNode("HAnimSite");
HAnimSite219.USE = "hanim_r_femoral_medial_epicondyle_pt";
HAnimHumanoid30.viewpoints[51] = HAnimSite219;

HAnimSite HAnimSite220 = createNode("HAnimSite");
HAnimSite220.USE = "hanim_r_gonion_pt";
HAnimHumanoid30.viewpoints[52] = HAnimSite220;

HAnimSite HAnimSite221 = createNode("HAnimSite");
HAnimSite221.USE = "hanim_l_gonion_pt";
HAnimHumanoid30.viewpoints[53] = HAnimSite221;

HAnimSite HAnimSite222 = createNode("HAnimSite");
HAnimSite222.USE = "hanim_l_hand_tip";
HAnimHumanoid30.viewpoints[54] = HAnimSite222;

HAnimSite HAnimSite223 = createNode("HAnimSite");
HAnimSite223.USE = "hanim_r_hand_tip";
HAnimHumanoid30.viewpoints[55] = HAnimSite223;

HAnimSite HAnimSite224 = createNode("HAnimSite");
HAnimSite224.USE = "hanim_l_humeral_lateral_epicondyle_pt";
HAnimHumanoid30.viewpoints[56] = HAnimSite224;

HAnimSite HAnimSite225 = createNode("HAnimSite");
HAnimSite225.USE = "hanim_r_humeral_lateral_epicondyle_pt";
HAnimHumanoid30.viewpoints[57] = HAnimSite225;

HAnimSite HAnimSite226 = createNode("HAnimSite");
HAnimSite226.USE = "hanim_l_humeral_medial_epicondyle_pt";
HAnimHumanoid30.viewpoints[58] = HAnimSite226;

HAnimSite HAnimSite227 = createNode("HAnimSite");
HAnimSite227.USE = "hanim_r_humeral_medial_epicondyle_pt";
HAnimHumanoid30.viewpoints[59] = HAnimSite227;

HAnimSite HAnimSite228 = createNode("HAnimSite");
HAnimSite228.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid30.viewpoints[60] = HAnimSite228;

HAnimSite HAnimSite229 = createNode("HAnimSite");
HAnimSite229.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid30.viewpoints[61] = HAnimSite229;

HAnimSite HAnimSite230 = createNode("HAnimSite");
HAnimSite230.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid30.viewpoints[62] = HAnimSite230;

HAnimSite HAnimSite231 = createNode("HAnimSite");
HAnimSite231.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid30.viewpoints[63] = HAnimSite231;

HAnimSite HAnimSite232 = createNode("HAnimSite");
HAnimSite232.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid30.viewpoints[64] = HAnimSite232;

HAnimSite HAnimSite233 = createNode("HAnimSite");
HAnimSite233.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid30.viewpoints[65] = HAnimSite233;

HAnimSite HAnimSite234 = createNode("HAnimSite");
HAnimSite234.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid30.viewpoints[66] = HAnimSite234;

HAnimSite HAnimSite235 = createNode("HAnimSite");
HAnimSite235.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid30.viewpoints[67] = HAnimSite235;

HAnimSite HAnimSite236 = createNode("HAnimSite");
HAnimSite236.USE = "hanim_l_metacarpal_phalanx_2_pt";
HAnimHumanoid30.viewpoints[68] = HAnimSite236;

HAnimSite HAnimSite237 = createNode("HAnimSite");
HAnimSite237.USE = "hanim_r_metacarpal_phalanx_2_pt";
HAnimHumanoid30.viewpoints[69] = HAnimSite237;

HAnimSite HAnimSite238 = createNode("HAnimSite");
HAnimSite238.USE = "hanim_l_metacarpal_phalanx_5_pt";
HAnimHumanoid30.viewpoints[70] = HAnimSite238;

HAnimSite HAnimSite239 = createNode("HAnimSite");
HAnimSite239.USE = "hanim_r_metacarpal_phalanx_5_pt";
HAnimHumanoid30.viewpoints[71] = HAnimSite239;

HAnimSite HAnimSite240 = createNode("HAnimSite");
HAnimSite240.USE = "hanim_l_metatarsal_phalanx_1_pt";
HAnimHumanoid30.viewpoints[72] = HAnimSite240;

HAnimSite HAnimSite241 = createNode("HAnimSite");
HAnimSite241.USE = "hanim_r_metatarsal_phalanx_1_pt";
HAnimHumanoid30.viewpoints[73] = HAnimSite241;

HAnimSite HAnimSite242 = createNode("HAnimSite");
HAnimSite242.USE = "hanim_l_metatarsal_phalanx_5_pt";
HAnimHumanoid30.viewpoints[74] = HAnimSite242;

HAnimSite HAnimSite243 = createNode("HAnimSite");
HAnimSite243.USE = "hanim_r_metatarsal_phalanx_5_pt";
HAnimHumanoid30.viewpoints[75] = HAnimSite243;

HAnimSite HAnimSite244 = createNode("HAnimSite");
HAnimSite244.USE = "hanim_l_middistal_tip";
HAnimHumanoid30.viewpoints[76] = HAnimSite244;

HAnimSite HAnimSite245 = createNode("HAnimSite");
HAnimSite245.USE = "hanim_r_middistal_tip";
HAnimHumanoid30.viewpoints[77] = HAnimSite245;

HAnimSite HAnimSite246 = createNode("HAnimSite");
HAnimSite246.USE = "hanim_l_olecranon_pt";
HAnimHumanoid30.viewpoints[78] = HAnimSite246;

HAnimSite HAnimSite247 = createNode("HAnimSite");
HAnimSite247.USE = "hanim_r_olecranon_pt";
HAnimHumanoid30.viewpoints[79] = HAnimSite247;

HAnimSite HAnimSite248 = createNode("HAnimSite");
HAnimSite248.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid30.viewpoints[80] = HAnimSite248;

HAnimSite HAnimSite249 = createNode("HAnimSite");
HAnimSite249.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid30.viewpoints[81] = HAnimSite249;

HAnimSite HAnimSite250 = createNode("HAnimSite");
HAnimSite250.USE = "hanim_l_radiale_pt";
HAnimHumanoid30.viewpoints[82] = HAnimSite250;

HAnimSite HAnimSite251 = createNode("HAnimSite");
HAnimSite251.USE = "hanim_r_radiale_pt";
HAnimHumanoid30.viewpoints[83] = HAnimSite251;

HAnimSite HAnimSite252 = createNode("HAnimSite");
HAnimSite252.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid30.viewpoints[84] = HAnimSite252;

HAnimSite HAnimSite253 = createNode("HAnimSite");
HAnimSite253.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid30.viewpoints[85] = HAnimSite253;

HAnimSite HAnimSite254 = createNode("HAnimSite");
HAnimSite254.USE = "hanim_l_tarsal_distal_phalanx_2_pt";
HAnimHumanoid30.viewpoints[86] = HAnimSite254;

HAnimSite HAnimSite255 = createNode("HAnimSite");
HAnimSite255.USE = "hanim_r_tarsal_distal_phalanx_2_pt";
HAnimHumanoid30.viewpoints[87] = HAnimSite255;

HAnimSite HAnimSite256 = createNode("HAnimSite");
HAnimSite256.USE = "hanim_r_tragion_pt";
HAnimHumanoid30.viewpoints[88] = HAnimSite256;

HAnimSite HAnimSite257 = createNode("HAnimSite");
HAnimSite257.USE = "hanim_l_tragion_pt";
HAnimHumanoid30.viewpoints[89] = HAnimSite257;

HAnimSite HAnimSite258 = createNode("HAnimSite");
HAnimSite258.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid30.viewpoints[90] = HAnimSite258;

HAnimSite HAnimSite259 = createNode("HAnimSite");
HAnimSite259.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid30.viewpoints[91] = HAnimSite259;

children[3] = HAnimHumanoid30;

}
