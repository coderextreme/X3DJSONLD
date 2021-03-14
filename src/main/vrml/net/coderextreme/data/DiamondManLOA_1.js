let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.info = new MFString(new java.lang.String["HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 1 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf"]);
WorldInfo2.title = "HANIM 1.1 Default Joint Centers, LOA1";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let NavigationInfo3 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo3.speed = 1.5;
browser.currentScene.children[1] = NavigationInfo3;

let Viewpoint4 = browser.currentScene.createNode("Viewpoint");
Viewpoint4.centerOfRotation = new SFVec3f(new float[0,1,0]);
Viewpoint4.description = "Diamond Man, LOA 1";
Viewpoint4.position = new SFVec3f(new float[0,1,3]);
browser.currentScene.children[2] = Viewpoint4;

let HAnimHumanoid5 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid5.name = "humanoid";
HAnimHumanoid5.DEF = "hanim_humanoid";
HAnimHumanoid5.version = "1.0";
//HAnimHumanoid original info='\"authorEmail=beitler@graphics.cis.upenn.edu beitler@acm.org\" \"authorName=Matthew T. Beitler\" \"copyright=Copyright 1999 Matthew T. Beitler\" \"humanoidVersion=JointCenters 1.1 LOA1\" \"usageRestrictions=PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided _as-is_ and without warranty of any kind express implied or otherwise including without limitation any warranty of merchantability or fitness for a particular purpose.\"'
let MetadataSet6 = browser.currentScene.createNode("MetadataSet");
MetadataSet6.name = "HAnimHumanoid.info";
MetadataSet6.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid";
let MetadataString7 = browser.currentScene.createNode("MetadataString");
MetadataString7.name = "authorEmail";
MetadataString7.value = new MFString(new java.lang.String["beitler@graphics.cis.upenn.edu beitler@acm.org"]);
MetadataSet6.value = new MFNode();

MetadataSet6.value[0] = MetadataString7;

let MetadataString8 = browser.currentScene.createNode("MetadataString");
MetadataString8.name = "authorName";
MetadataString8.value = new MFString(new java.lang.String["Matthew T. Beitler"]);
MetadataSet6.value[1] = MetadataString8;

let MetadataString9 = browser.currentScene.createNode("MetadataString");
MetadataString9.name = "copyright";
MetadataString9.value = new MFString(new java.lang.String["Copyright 1999 Matthew T. Beitler"]);
MetadataSet6.value[2] = MetadataString9;

let MetadataString10 = browser.currentScene.createNode("MetadataString");
MetadataString10.name = "humanoidVersion";
MetadataString10.value = new MFString(new java.lang.String["JointCenters 1.1 LOA1"]);
MetadataSet6.value[3] = MetadataString10;

let MetadataString11 = browser.currentScene.createNode("MetadataString");
MetadataString11.name = "usageRestrictions";
MetadataString11.value = new MFString(new java.lang.String["PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided _as-is_ and without warranty of any kind express implied or otherwise including without limitation any warranty of merchantability or fitness for a particular purpose."]);
MetadataSet6.value[4] = MetadataString11;

HAnimHumanoid5.metadata = MetadataSet6;

let HAnimJoint12 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint12.name = "humanoid_root";
HAnimJoint12.DEF = "hanim_humanoid_root";
HAnimJoint12.center = new SFVec3f(new float[0,0.824,0.0277]);
let HAnimJoint13 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint13.name = "sacroiliac";
HAnimJoint13.DEF = "hanim_sacroiliac";
HAnimJoint13.center = new SFVec3f(new float[0,0.9149,0.0016]);
let HAnimSegment14 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment14.name = "pelvis";
HAnimSegment14.DEF = "hanim_pelvis";
let Transform15 = browser.currentScene.createNode("Transform");
Transform15.translation = new SFVec3f(new float[0,0.9149,0.0016]);
let Shape16 = browser.currentScene.createNode("Shape");
Shape16.DEF = "DiamondShape";
let IndexedFaceSet17 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet17.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet17.creaseAngle = 0.5;
let Coordinate18 = browser.currentScene.createNode("Coordinate");
Coordinate18.DEF = "points";
Coordinate18.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet17.coord = Coordinate18;

Shape16.geometry = IndexedFaceSet17;

let Appearance19 = browser.currentScene.createNode("Appearance");
let Material20 = browser.currentScene.createNode("Material");
Material20.diffuseColor = new SFColor(new float[1,1,0]);
Appearance19.material = Material20;

Shape16.appearance = Appearance19;

Transform15.children = new MFNode();

Transform15.children[0] = Shape16;

HAnimSegment14.children = new MFNode();

HAnimSegment14.children[0] = Transform15;

HAnimJoint13.children = new MFNode();

HAnimJoint13.children[0] = HAnimSegment14;

let HAnimJoint21 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint21.name = "l_hip";
HAnimJoint21.DEF = "hanim_l_hip";
HAnimJoint21.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
let HAnimSegment22 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment22.name = "l_thigh";
HAnimSegment22.DEF = "hanim_l_thigh";
let Transform23 = browser.currentScene.createNode("Transform");
Transform23.translation = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
let Shape24 = browser.currentScene.createNode("Shape");
Shape24.USE = "DiamondShape";
Transform23.children = new MFNode();

Transform23.children[0] = Shape24;

HAnimSegment22.children = new MFNode();

HAnimSegment22.children[0] = Transform23;

let HAnimSite25 = browser.currentScene.createNode("HAnimSite");
HAnimSite25.name = "l_knee_crease_pt";
HAnimSite25.DEF = "hanim_l_knee_crease_pt";
HAnimSite25.translation = new SFVec3f(new float[0.0993,0.4881,-0.0309]);
HAnimSegment22.children[1] = HAnimSite25;

let HAnimSite26 = browser.currentScene.createNode("HAnimSite");
HAnimSite26.name = "l_femoral_lateral_epicn_pt";
HAnimSite26.DEF = "hanim_l_femoral_lateral_epicn_pt";
HAnimSite26.translation = new SFVec3f(new float[0.1598,0.4967,0.0297]);
HAnimSegment22.children[2] = HAnimSite26;

let HAnimSite27 = browser.currentScene.createNode("HAnimSite");
HAnimSite27.name = "l_femoral_medial_epicn_pt";
HAnimSite27.DEF = "hanim_l_femoral_medial_epicn_pt";
HAnimSite27.translation = new SFVec3f(new float[0.0398,0.4946,0.0303]);
HAnimSegment22.children[3] = HAnimSite27;

HAnimJoint21.children = new MFNode();

HAnimJoint21.children[0] = HAnimSegment22;

let HAnimJoint28 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint28.name = "l_knee";
HAnimJoint28.DEF = "hanim_l_knee";
HAnimJoint28.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
let HAnimSegment29 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment29.name = "l_calf";
HAnimSegment29.DEF = "hanim_l_calf";
let Transform30 = browser.currentScene.createNode("Transform");
Transform30.translation = new SFVec3f(new float[0.104,0.4867,0.0308]);
let Shape31 = browser.currentScene.createNode("Shape");
Shape31.USE = "DiamondShape";
Transform30.children = new MFNode();

Transform30.children[0] = Shape31;

HAnimSegment29.children = new MFNode();

HAnimSegment29.children[0] = Transform30;

HAnimJoint28.children = new MFNode();

HAnimJoint28.children[0] = HAnimSegment29;

let HAnimJoint32 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint32.name = "l_ankle";
HAnimJoint32.DEF = "hanim_l_ankle";
HAnimJoint32.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let HAnimSegment33 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment33.name = "l_hindfoot";
HAnimSegment33.DEF = "hanim_l_hindfoot";
let Transform34 = browser.currentScene.createNode("Transform");
Transform34.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let Shape35 = browser.currentScene.createNode("Shape");
Shape35.USE = "DiamondShape";
Transform34.children = new MFNode();

Transform34.children[0] = Shape35;

HAnimSegment33.children = new MFNode();

HAnimSegment33.children[0] = Transform34;

let HAnimSite36 = browser.currentScene.createNode("HAnimSite");
HAnimSite36.name = "l_lateral_malleolus_pt";
HAnimSite36.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite36.translation = new SFVec3f(new float[0.1308,0.0597,-0.1032]);
HAnimSegment33.children[1] = HAnimSite36;

let HAnimSite37 = browser.currentScene.createNode("HAnimSite");
HAnimSite37.name = "l_medial_malleolus_pt";
HAnimSite37.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite37.translation = new SFVec3f(new float[0.089,0.0716,-0.0881]);
HAnimSegment33.children[2] = HAnimSite37;

let HAnimSite38 = browser.currentScene.createNode("HAnimSite");
HAnimSite38.name = "l_sphyrion_pt";
HAnimSite38.DEF = "hanim_l_sphyrion_pt";
HAnimSite38.translation = new SFVec3f(new float[0.089,0.0575,-0.0943]);
HAnimSegment33.children[3] = HAnimSite38;

let HAnimSite39 = browser.currentScene.createNode("HAnimSite");
HAnimSite39.name = "l_calcaneous_post_pt";
HAnimSite39.DEF = "hanim_l_calcaneous_post_pt";
HAnimSite39.translation = new SFVec3f(new float[0.0974,0.0259,-0.1171]);
HAnimSegment33.children[4] = HAnimSite39;

HAnimJoint32.children = new MFNode();

HAnimJoint32.children[0] = HAnimSegment33;

let HAnimJoint40 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint40.name = "l_midtarsal";
HAnimJoint40.DEF = "hanim_l_midtarsal";
HAnimJoint40.center = new SFVec3f(new float[0.1086,0.0001,0.0368]);
let HAnimSegment41 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment41.name = "l_middistal";
HAnimSegment41.DEF = "hanim_l_middistal";
let HAnimSite42 = browser.currentScene.createNode("HAnimSite");
HAnimSite42.name = "l_middistal_tip";
HAnimSite42.DEF = "hanim_l_middistal_tip";
HAnimSite42.translation = new SFVec3f(new float[0.1354,0.0016,0.1476]);
HAnimSegment41.children = new MFNode();

HAnimSegment41.children[0] = HAnimSite42;

let HAnimSite43 = browser.currentScene.createNode("HAnimSite");
HAnimSite43.name = "l_metatarsal_pha5_pt";
HAnimSite43.DEF = "hanim_l_metatarsal_pha5_pt";
HAnimSite43.translation = new SFVec3f(new float[0.1825,0.007,0.0928]);
HAnimSegment41.children[1] = HAnimSite43;

let HAnimSite44 = browser.currentScene.createNode("HAnimSite");
HAnimSite44.name = "l_metatarsal_pha1_pt";
HAnimSite44.DEF = "hanim_l_metatarsal_pha1_pt";
HAnimSite44.translation = new SFVec3f(new float[0.0816,0.0232,0.0106]);
HAnimSegment41.children[2] = HAnimSite44;

let HAnimSite45 = browser.currentScene.createNode("HAnimSite");
HAnimSite45.name = "l_digit2_pt";
HAnimSite45.DEF = "hanim_l_digit2_pt";
HAnimSite45.translation = new SFVec3f(new float[0.1195,0.0079,0.1433]);
HAnimSegment41.children[3] = HAnimSite45;

HAnimJoint40.children = new MFNode();

HAnimJoint40.children[0] = HAnimSegment41;

HAnimJoint32.children[1] = HAnimJoint40;

HAnimJoint28.children[1] = HAnimJoint32;

HAnimJoint21.children[1] = HAnimJoint28;

HAnimJoint13.children[1] = HAnimJoint21;

let HAnimJoint46 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint46.name = "r_hip";
HAnimJoint46.DEF = "hanim_r_hip";
HAnimJoint46.center = new SFVec3f(new float[-0.095,0.9171,0.0029]);
let HAnimSegment47 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment47.name = "r_thigh";
HAnimSegment47.DEF = "hanim_r_thigh";
let Transform48 = browser.currentScene.createNode("Transform");
Transform48.translation = new SFVec3f(new float[-0.095,0.9171,0.0029]);
let Shape49 = browser.currentScene.createNode("Shape");
Shape49.USE = "DiamondShape";
Transform48.children = new MFNode();

Transform48.children[0] = Shape49;

HAnimSegment47.children = new MFNode();

HAnimSegment47.children[0] = Transform48;

let HAnimSite50 = browser.currentScene.createNode("HAnimSite");
HAnimSite50.name = "r_knee_crease_pt";
HAnimSite50.DEF = "hanim_r_knee_crease_pt";
HAnimSite50.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
HAnimSegment47.children[1] = HAnimSite50;

let HAnimSite51 = browser.currentScene.createNode("HAnimSite");
HAnimSite51.name = "r_femoral_lateral_epicn_pt";
HAnimSite51.DEF = "hanim_r_femoral_lateral_epicn_pt";
HAnimSite51.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
HAnimSegment47.children[2] = HAnimSite51;

let HAnimSite52 = browser.currentScene.createNode("HAnimSite");
HAnimSite52.name = "r_femoral_medial_epicn_pt";
HAnimSite52.DEF = "hanim_r_femoral_medial_epicn_pt";
HAnimSite52.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
HAnimSegment47.children[3] = HAnimSite52;

HAnimJoint46.children = new MFNode();

HAnimJoint46.children[0] = HAnimSegment47;

let HAnimJoint53 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint53.name = "r_knee";
HAnimJoint53.DEF = "hanim_r_knee";
HAnimJoint53.center = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
let HAnimSegment54 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment54.name = "r_calf";
HAnimSegment54.DEF = "hanim_r_calf";
let Transform55 = browser.currentScene.createNode("Transform");
Transform55.translation = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
let Shape56 = browser.currentScene.createNode("Shape");
Shape56.USE = "DiamondShape";
Transform55.children = new MFNode();

Transform55.children[0] = Shape56;

HAnimSegment54.children = new MFNode();

HAnimSegment54.children[0] = Transform55;

HAnimJoint53.children = new MFNode();

HAnimJoint53.children[0] = HAnimSegment54;

let HAnimJoint57 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint57.name = "r_ankle";
HAnimJoint57.DEF = "hanim_r_ankle";
HAnimJoint57.center = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
let HAnimSegment58 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment58.name = "r_hindfoot";
HAnimSegment58.DEF = "hanim_r_hindfoot";
let Transform59 = browser.currentScene.createNode("Transform");
Transform59.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
let Shape60 = browser.currentScene.createNode("Shape");
Shape60.USE = "DiamondShape";
Transform59.children = new MFNode();

Transform59.children[0] = Shape60;

HAnimSegment58.children = new MFNode();

HAnimSegment58.children[0] = Transform59;

let HAnimSite61 = browser.currentScene.createNode("HAnimSite");
HAnimSite61.name = "r_lateral_malleolus_pt";
HAnimSite61.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite61.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
HAnimSegment58.children[1] = HAnimSite61;

let HAnimSite62 = browser.currentScene.createNode("HAnimSite");
HAnimSite62.name = "r_medial_malleolus_pt";
HAnimSite62.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite62.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
HAnimSegment58.children[2] = HAnimSite62;

let HAnimSite63 = browser.currentScene.createNode("HAnimSite");
HAnimSite63.name = "r_sphyrion_pt";
HAnimSite63.DEF = "hanim_r_sphyrion_pt";
HAnimSite63.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
HAnimSegment58.children[3] = HAnimSite63;

let HAnimSite64 = browser.currentScene.createNode("HAnimSite");
HAnimSite64.name = "r_calcaneous_post_pt";
HAnimSite64.DEF = "hanim_r_calcaneous_post_pt";
HAnimSite64.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
HAnimSegment58.children[4] = HAnimSite64;

HAnimJoint57.children = new MFNode();

HAnimJoint57.children[0] = HAnimSegment58;

let HAnimJoint65 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint65.name = "r_midtarsal";
HAnimJoint65.DEF = "hanim_r_midtarsal";
HAnimJoint65.center = new SFVec3f(new float[-0.0801,0,0.0368]);
let HAnimSegment66 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment66.name = "r_middistal";
HAnimSegment66.DEF = "hanim_r_middistal";
let HAnimSite67 = browser.currentScene.createNode("HAnimSite");
HAnimSite67.name = "r_middistal_tip";
HAnimSite67.DEF = "hanim_r_middistal_tip";
HAnimSite67.translation = new SFVec3f(new float[-0.1043,-0.0227,0.145]);
HAnimSegment66.children = new MFNode();

HAnimSegment66.children[0] = HAnimSite67;

let HAnimSite68 = browser.currentScene.createNode("HAnimSite");
HAnimSite68.name = "r_metatarsal_pha5_pt";
HAnimSite68.DEF = "hanim_r_metatarsal_pha5_pt";
HAnimSite68.translation = new SFVec3f(new float[-0.1523,0.0166,0.0895]);
HAnimSegment66.children[1] = HAnimSite68;

let HAnimSite69 = browser.currentScene.createNode("HAnimSite");
HAnimSite69.name = "r_metatarsal_pha1_pt";
HAnimSite69.DEF = "hanim_r_metatarsal_pha1_pt";
HAnimSite69.translation = new SFVec3f(new float[-0.0521,0.026,0.0127]);
HAnimSegment66.children[2] = HAnimSite69;

let HAnimSite70 = browser.currentScene.createNode("HAnimSite");
HAnimSite70.name = "r_digit2_pt";
HAnimSite70.DEF = "hanim_r_digit2_pt";
HAnimSite70.translation = new SFVec3f(new float[-0.0883,0.0134,0.1383]);
HAnimSegment66.children[3] = HAnimSite70;

HAnimJoint65.children = new MFNode();

HAnimJoint65.children[0] = HAnimSegment66;

HAnimJoint57.children[1] = HAnimJoint65;

HAnimJoint53.children[1] = HAnimJoint57;

HAnimJoint46.children[1] = HAnimJoint53;

HAnimJoint13.children[2] = HAnimJoint46;

HAnimJoint12.children = new MFNode();

HAnimJoint12.children[0] = HAnimJoint13;

let HAnimJoint71 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint71.name = "vl1";
HAnimJoint71.DEF = "hanim_vl1";
HAnimJoint71.center = new SFVec3f(new float[-0.00405,1.07,-0.0275]);
let HAnimSegment72 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment72.name = "l1";
HAnimSegment72.DEF = "hanim_l1";
HAnimJoint71.children = new MFNode();

HAnimJoint71.children[0] = HAnimSegment72;

let HAnimJoint73 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint73.name = "l_shoulder";
HAnimJoint73.DEF = "hanim_l_shoulder";
HAnimJoint73.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
let HAnimSegment74 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment74.name = "l_upperarm";
HAnimSegment74.DEF = "hanim_l_upperarm";
let Transform75 = browser.currentScene.createNode("Transform");
Transform75.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
let Shape76 = browser.currentScene.createNode("Shape");
Shape76.USE = "DiamondShape";
Transform75.children = new MFNode();

Transform75.children[0] = Shape76;

HAnimSegment74.children = new MFNode();

HAnimSegment74.children[0] = Transform75;

let Transform77 = browser.currentScene.createNode("Transform");
Transform77.DEF = "l_upperarm_adjust";
Transform77.center = new SFVec3f(new float[0.182,1.22,-0.047]);
Transform77.rotation = new SFRotation(new float[1,0,0,0.119]);
Transform77.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimSegment74.children[1] = Transform77;

let HAnimSite78 = browser.currentScene.createNode("HAnimSite");
HAnimSite78.name = "l_humeral_lateral_epicn_pt";
HAnimSite78.DEF = "hanim_l_humeral_lateral_epicn_pt";
HAnimSite78.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
HAnimSegment74.children[2] = HAnimSite78;

HAnimJoint73.children = new MFNode();

HAnimJoint73.children[0] = HAnimSegment74;

let HAnimJoint79 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint79.name = "l_elbow";
HAnimJoint79.DEF = "hanim_l_elbow";
HAnimJoint79.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
let HAnimSegment80 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment80.name = "l_forearm";
HAnimSegment80.DEF = "hanim_l_forearm";
let Transform81 = browser.currentScene.createNode("Transform");
Transform81.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
let Shape82 = browser.currentScene.createNode("Shape");
Shape82.USE = "DiamondShape";
Transform81.children = new MFNode();

Transform81.children[0] = Shape82;

HAnimSegment80.children = new MFNode();

HAnimSegment80.children[0] = Transform81;

let Transform83 = browser.currentScene.createNode("Transform");
Transform83.DEF = "l_forearm_adjust";
Transform83.center = new SFVec3f(new float[0.198,0.961,-0.0405]);
Transform83.rotation = new SFRotation(new float[-1,0,0,0.1]);
Transform83.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimSegment80.children[1] = Transform83;

let HAnimSite84 = browser.currentScene.createNode("HAnimSite");
HAnimSite84.name = "l_radial_styloid_pt";
HAnimSite84.DEF = "hanim_l_radial_styloid_pt";
HAnimSite84.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
HAnimSegment80.children[2] = HAnimSite84;

let HAnimSite85 = browser.currentScene.createNode("HAnimSite");
HAnimSite85.name = "l_olecranon_pt";
HAnimSite85.DEF = "hanim_l_olecranon_pt";
HAnimSite85.translation = new SFVec3f(new float[-0.1962,1.1375,-0.1123]);
HAnimSegment80.children[3] = HAnimSite85;

let HAnimSite86 = browser.currentScene.createNode("HAnimSite");
HAnimSite86.name = "l_humeral_medial_epicn_pt";
HAnimSite86.DEF = "hanim_l_humeral_medial_epicn_pt";
HAnimSite86.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
HAnimSegment80.children[4] = HAnimSite86;

let HAnimSite87 = browser.currentScene.createNode("HAnimSite");
HAnimSite87.name = "l_radiale_pt";
HAnimSite87.DEF = "hanim_l_radiale_pt";
HAnimSite87.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
HAnimSegment80.children[5] = HAnimSite87;

HAnimJoint79.children = new MFNode();

HAnimJoint79.children[0] = HAnimSegment80;

let HAnimJoint88 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint88.name = "l_wrist";
HAnimJoint88.DEF = "hanim_l_wrist";
HAnimJoint88.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
let HAnimSegment89 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment89.name = "l_hand";
HAnimSegment89.DEF = "hanim_l_hand";
let Transform90 = browser.currentScene.createNode("Transform");
Transform90.translation = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
let Shape91 = browser.currentScene.createNode("Shape");
Shape91.USE = "DiamondShape";
Transform90.children = new MFNode();

Transform90.children[0] = Shape91;

HAnimSegment89.children = new MFNode();

HAnimSegment89.children[0] = Transform90;

let Transform92 = browser.currentScene.createNode("Transform");
Transform92.DEF = "l_hand_adjust";
Transform92.center = new SFVec3f(new float[0.213,0.811,-0.0338]);
Transform92.rotation = new SFRotation(new float[-0.06361,-0.9967,0.04988,1.333]);
Transform92.translation = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimSegment89.children[1] = Transform92;

let HAnimSite93 = browser.currentScene.createNode("HAnimSite");
HAnimSite93.name = "l_hand_tip";
HAnimSite93.DEF = "hanim_l_hand_tip";
HAnimSite93.translation = new SFVec3f(new float[0.208,0.6731,-0.0491]);
HAnimSegment89.children[2] = HAnimSite93;

let HAnimSite94 = browser.currentScene.createNode("HAnimSite");
HAnimSite94.name = "l_metacarpal_pha2_pt";
HAnimSite94.DEF = "hanim_l_metacarpal_pha2_pt";
HAnimSite94.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
HAnimSegment89.children[3] = HAnimSite94;

let HAnimSite95 = browser.currentScene.createNode("HAnimSite");
HAnimSite95.name = "l_dactylion_pt";
HAnimSite95.DEF = "hanim_l_dactylion_pt";
HAnimSite95.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
HAnimSegment89.children[4] = HAnimSite95;

let HAnimSite96 = browser.currentScene.createNode("HAnimSite");
HAnimSite96.name = "l_ulnar_styloid_pt";
HAnimSite96.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite96.translation = new SFVec3f(new float[-0.2142,0.8529,-0.0648]);
HAnimSegment89.children[5] = HAnimSite96;

let HAnimSite97 = browser.currentScene.createNode("HAnimSite");
HAnimSite97.name = "l_metacarpal_pha5_pt";
HAnimSite97.DEF = "hanim_l_metacarpal_pha5_pt";
HAnimSite97.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
HAnimSegment89.children[6] = HAnimSite97;

HAnimJoint88.children = new MFNode();

HAnimJoint88.children[0] = HAnimSegment89;

HAnimJoint79.children[1] = HAnimJoint88;

HAnimJoint73.children[1] = HAnimJoint79;

HAnimJoint71.children[1] = HAnimJoint73;

let HAnimJoint98 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint98.name = "r_shoulder";
HAnimJoint98.DEF = "hanim_r_shoulder";
HAnimJoint98.center = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
let HAnimSegment99 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment99.name = "r_upperarm";
HAnimSegment99.DEF = "hanim_r_upperarm";
let Transform100 = browser.currentScene.createNode("Transform");
Transform100.translation = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
let Shape101 = browser.currentScene.createNode("Shape");
Shape101.USE = "DiamondShape";
Transform100.children = new MFNode();

Transform100.children[0] = Shape101;

HAnimSegment99.children = new MFNode();

HAnimSegment99.children[0] = Transform100;

let Transform102 = browser.currentScene.createNode("Transform");
Transform102.DEF = "r_upperarm_adjust";
Transform102.center = new SFVec3f(new float[-0.182,1.22,-0.047]);
Transform102.rotation = new SFRotation(new float[1,0,0,0.0836]);
Transform102.translation = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
HAnimSegment99.children[1] = Transform102;

let HAnimSite103 = browser.currentScene.createNode("HAnimSite");
HAnimSite103.name = "r_humeral_lateral_epicn_pt";
HAnimSite103.DEF = "hanim_r_humeral_lateral_epicn_pt";
HAnimSite103.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
HAnimSegment99.children[2] = HAnimSite103;

HAnimJoint98.children = new MFNode();

HAnimJoint98.children[0] = HAnimSegment99;

let HAnimJoint104 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint104.name = "r_elbow";
HAnimJoint104.DEF = "hanim_r_elbow";
HAnimJoint104.center = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
let HAnimSegment105 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment105.name = "r_forearm";
HAnimSegment105.DEF = "hanim_r_forearm";
let Transform106 = browser.currentScene.createNode("Transform");
Transform106.translation = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
let Shape107 = browser.currentScene.createNode("Shape");
Shape107.USE = "DiamondShape";
Transform106.children = new MFNode();

Transform106.children[0] = Shape107;

HAnimSegment105.children = new MFNode();

HAnimSegment105.children[0] = Transform106;

let Transform108 = browser.currentScene.createNode("Transform");
Transform108.DEF = "r_forearm_adjust";
Transform108.center = new SFVec3f(new float[-0.198,0.961,-0.0397]);
Transform108.rotation = new SFRotation(new float[-1,0,0,0.1254]);
Transform108.translation = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
HAnimSegment105.children[1] = Transform108;

let HAnimSite109 = browser.currentScene.createNode("HAnimSite");
HAnimSite109.name = "r_radial_styloid_pt";
HAnimSite109.DEF = "hanim_r_radial_styloid_pt";
HAnimSite109.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
HAnimSegment105.children[2] = HAnimSite109;

let HAnimSite110 = browser.currentScene.createNode("HAnimSite");
HAnimSite110.name = "r_olecranon_pt";
HAnimSite110.DEF = "hanim_r_olecranon_pt";
HAnimSite110.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
HAnimSegment105.children[3] = HAnimSite110;

let HAnimSite111 = browser.currentScene.createNode("HAnimSite");
HAnimSite111.name = "r_humeral_medial_epicn_pt";
HAnimSite111.DEF = "hanim_r_humeral_medial_epicn_pt";
HAnimSite111.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
HAnimSegment105.children[4] = HAnimSite111;

let HAnimSite112 = browser.currentScene.createNode("HAnimSite");
HAnimSite112.name = "r_radiale_pt";
HAnimSite112.DEF = "hanim_r_radiale_pt";
HAnimSite112.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
HAnimSegment105.children[5] = HAnimSite112;

HAnimJoint104.children = new MFNode();

HAnimJoint104.children[0] = HAnimSegment105;

let HAnimJoint113 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint113.name = "r_wrist";
HAnimJoint113.DEF = "hanim_r_wrist";
HAnimJoint113.center = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
let HAnimSegment114 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment114.name = "r_hand";
HAnimSegment114.DEF = "hanim_r_hand";
let Transform115 = browser.currentScene.createNode("Transform");
Transform115.translation = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
let Shape116 = browser.currentScene.createNode("Shape");
Shape116.USE = "DiamondShape";
Transform115.children = new MFNode();

Transform115.children[0] = Shape116;

HAnimSegment114.children = new MFNode();

HAnimSegment114.children[0] = Transform115;

let Transform117 = browser.currentScene.createNode("Transform");
Transform117.DEF = "r_hand_adjust";
Transform117.center = new SFVec3f(new float[-0.217,0.811,-0.0338]);
Transform117.rotation = new SFRotation(new float[-0.09024,0.994,-0.0624,1.216]);
HAnimSegment114.children[1] = Transform117;

let HAnimSite118 = browser.currentScene.createNode("HAnimSite");
HAnimSite118.name = "r_hand_tip";
HAnimSite118.DEF = "hanim_r_hand_tip";
HAnimSite118.translation = new SFVec3f(new float[-0.1969,0.6758,-0.0427]);
HAnimSegment114.children[2] = HAnimSite118;

let HAnimSite119 = browser.currentScene.createNode("HAnimSite");
HAnimSite119.name = "r_metacarpal_pha2_pt";
HAnimSite119.DEF = "hanim_r_metacarpal_pha2_pt";
HAnimSite119.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
HAnimSegment114.children[3] = HAnimSite119;

let HAnimSite120 = browser.currentScene.createNode("HAnimSite");
HAnimSite120.name = "r_dactylion_pt";
HAnimSite120.DEF = "hanim_r_dactylion_pt";
HAnimSite120.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
HAnimSegment114.children[4] = HAnimSite120;

let HAnimSite121 = browser.currentScene.createNode("HAnimSite");
HAnimSite121.name = "r_ulnar_styloid_pt";
HAnimSite121.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite121.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
HAnimSegment114.children[5] = HAnimSite121;

let HAnimSite122 = browser.currentScene.createNode("HAnimSite");
HAnimSite122.name = "r_metacarpal_pha5_pt";
HAnimSite122.DEF = "hanim_r_metacarpal_pha5_pt";
HAnimSite122.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
HAnimSegment114.children[6] = HAnimSite122;

HAnimJoint113.children = new MFNode();

HAnimJoint113.children[0] = HAnimSegment114;

HAnimJoint104.children[1] = HAnimJoint113;

HAnimJoint98.children[1] = HAnimJoint104;

HAnimJoint71.children[2] = HAnimJoint98;

let HAnimJoint123 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint123.name = "vc4";
HAnimJoint123.DEF = "hanim_vc4";
HAnimJoint123.center = new SFVec3f(new float[0,1.43,-0.0458]);
let HAnimSegment124 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment124.name = "c4";
HAnimSegment124.DEF = "hanim_c4";
HAnimJoint123.children = new MFNode();

HAnimJoint123.children[0] = HAnimSegment124;

HAnimJoint71.children[3] = HAnimJoint123;

HAnimJoint12.children[1] = HAnimJoint71;

let HAnimJoint125 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint125.name = "vl5";
HAnimJoint125.DEF = "hanim_vl5";
HAnimJoint125.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
let HAnimJoint126 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint126.name = "skullbase";
HAnimJoint126.DEF = "hanim_skullbase";
HAnimJoint126.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
let HAnimSegment127 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment127.name = "skull";
HAnimSegment127.DEF = "hanim_skull";
let Transform128 = browser.currentScene.createNode("Transform");
Transform128.translation = new SFVec3f(new float[0.0044,1.6209,0.0236]);
let Shape129 = browser.currentScene.createNode("Shape");
Shape129.USE = "DiamondShape";
Transform128.children = new MFNode();

Transform128.children[0] = Shape129;

HAnimSegment127.children = new MFNode();

HAnimSegment127.children[0] = Transform128;

let HAnimSite130 = browser.currentScene.createNode("HAnimSite");
HAnimSite130.name = "skull_tip";
HAnimSite130.DEF = "hanim_skull_tip";
HAnimSite130.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
HAnimSegment127.children[1] = HAnimSite130;

let HAnimSite131 = browser.currentScene.createNode("HAnimSite");
HAnimSite131.name = "sellion_pt";
HAnimSite131.DEF = "hanim_sellion_pt";
HAnimSite131.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
HAnimSegment127.children[2] = HAnimSite131;

let HAnimSite132 = browser.currentScene.createNode("HAnimSite");
HAnimSite132.name = "r_infraorbitale_pt";
HAnimSite132.DEF = "hanim_r_infraorbitale_pt";
HAnimSite132.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
HAnimSegment127.children[3] = HAnimSite132;

let HAnimSite133 = browser.currentScene.createNode("HAnimSite");
HAnimSite133.name = "l_infraorbitale_pt";
HAnimSite133.DEF = "hanim_l_infraorbitale_pt";
HAnimSite133.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
HAnimSegment127.children[4] = HAnimSite133;

let HAnimSite134 = browser.currentScene.createNode("HAnimSite");
HAnimSite134.name = "supramenton_pt";
HAnimSite134.DEF = "hanim_supramenton_pt";
HAnimSite134.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
HAnimSegment127.children[5] = HAnimSite134;

let HAnimSite135 = browser.currentScene.createNode("HAnimSite");
HAnimSite135.name = "r_tragion_pt";
HAnimSite135.DEF = "hanim_r_tragion_pt";
HAnimSite135.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
HAnimSegment127.children[6] = HAnimSite135;

let HAnimSite136 = browser.currentScene.createNode("HAnimSite");
HAnimSite136.name = "r_gonion_pt";
HAnimSite136.DEF = "hanim_r_gonion_pt";
HAnimSite136.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
HAnimSegment127.children[7] = HAnimSite136;

let HAnimSite137 = browser.currentScene.createNode("HAnimSite");
HAnimSite137.name = "l_tragion_pt";
HAnimSite137.DEF = "hanim_l_tragion_pt";
HAnimSite137.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
HAnimSegment127.children[8] = HAnimSite137;

let HAnimSite138 = browser.currentScene.createNode("HAnimSite");
HAnimSite138.name = "l_gonion_pt";
HAnimSite138.DEF = "hanim_l_gonion_pt";
HAnimSite138.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
HAnimSegment127.children[9] = HAnimSite138;

let HAnimSite139 = browser.currentScene.createNode("HAnimSite");
HAnimSite139.name = "nuchale_pt";
HAnimSite139.DEF = "hanim_nuchale_pt";
HAnimSite139.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
HAnimSegment127.children[10] = HAnimSite139;

HAnimJoint126.children = new MFNode();

HAnimJoint126.children[0] = HAnimSegment127;

HAnimJoint125.children = new MFNode();

HAnimJoint125.children[0] = HAnimJoint126;

HAnimJoint12.children[2] = HAnimJoint125;

HAnimHumanoid5.joints = new MFNode();

HAnimHumanoid5.joints[0] = HAnimJoint12;

let HAnimSite140 = browser.currentScene.createNode("HAnimSite");
HAnimSite140.name = "DiamondManLOA_1_view";
HAnimSite140.DEF = "hanim_DiamondManLOA_1_view";
let Viewpoint141 = browser.currentScene.createNode("Viewpoint");
Viewpoint141.DEF = "InclinedView";
Viewpoint141.description = "Inclined View";
Viewpoint141.orientation = new SFRotation(new float[-0.113,0.993,0.0347,0.671]);
Viewpoint141.position = new SFVec3f(new float[1.62,1.05,2.06]);
HAnimSite140.children = new MFNode();

HAnimSite140.children[0] = Viewpoint141;

let Viewpoint142 = browser.currentScene.createNode("Viewpoint");
Viewpoint142.DEF = "FrontView";
Viewpoint142.description = "Front View";
Viewpoint142.position = new SFVec3f(new float[0,0.854,2.57665]);
HAnimSite140.children[1] = Viewpoint142;

let Viewpoint143 = browser.currentScene.createNode("Viewpoint");
Viewpoint143.DEF = "SideView";
Viewpoint143.description = "Side View";
Viewpoint143.orientation = new SFRotation(new float[0,1,0,1.57079]);
Viewpoint143.position = new SFVec3f(new float[2.5929,0.854,0]);
HAnimSite140.children[2] = Viewpoint143;

let Viewpoint144 = browser.currentScene.createNode("Viewpoint");
Viewpoint144.DEF = "TopView";
Viewpoint144.description = "Top View";
Viewpoint144.orientation = new SFRotation(new float[1,0,0,-1.57079]);
Viewpoint144.position = new SFVec3f(new float[0,3.4495,0]);
HAnimSite140.children[3] = Viewpoint144;

HAnimHumanoid5.viewpoints[1] = HAnimSite140;

let HAnimJoint145 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint145.USE = "hanim_humanoid_root";
HAnimHumanoid5.joints[2] = HAnimJoint145;

let HAnimJoint146 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint146.USE = "hanim_sacroiliac";
HAnimHumanoid5.joints[3] = HAnimJoint146;

let HAnimJoint147 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint147.USE = "hanim_vl1";
HAnimHumanoid5.joints[4] = HAnimJoint147;

let HAnimJoint148 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint148.USE = "hanim_vc4";
HAnimHumanoid5.joints[5] = HAnimJoint148;

let HAnimJoint149 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint149.USE = "hanim_skullbase";
HAnimHumanoid5.joints[6] = HAnimJoint149;

let HAnimJoint150 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint150.USE = "hanim_vl5";
HAnimHumanoid5.joints[7] = HAnimJoint150;

let HAnimJoint151 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint151.USE = "hanim_l_ankle";
HAnimHumanoid5.joints[8] = HAnimJoint151;

let HAnimJoint152 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint152.USE = "hanim_r_ankle";
HAnimHumanoid5.joints[9] = HAnimJoint152;

let HAnimJoint153 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint153.USE = "hanim_l_elbow";
HAnimHumanoid5.joints[10] = HAnimJoint153;

let HAnimJoint154 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint154.USE = "hanim_r_elbow";
HAnimHumanoid5.joints[11] = HAnimJoint154;

let HAnimJoint155 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint155.USE = "hanim_l_hip";
HAnimHumanoid5.joints[12] = HAnimJoint155;

let HAnimJoint156 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint156.USE = "hanim_r_hip";
HAnimHumanoid5.joints[13] = HAnimJoint156;

let HAnimJoint157 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint157.USE = "hanim_l_knee";
HAnimHumanoid5.joints[14] = HAnimJoint157;

let HAnimJoint158 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint158.USE = "hanim_r_knee";
HAnimHumanoid5.joints[15] = HAnimJoint158;

let HAnimJoint159 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint159.USE = "hanim_l_midtarsal";
HAnimHumanoid5.joints[16] = HAnimJoint159;

let HAnimJoint160 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint160.USE = "hanim_r_midtarsal";
HAnimHumanoid5.joints[17] = HAnimJoint160;

let HAnimJoint161 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint161.USE = "hanim_l_shoulder";
HAnimHumanoid5.joints[18] = HAnimJoint161;

let HAnimJoint162 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint162.USE = "hanim_r_shoulder";
HAnimHumanoid5.joints[19] = HAnimJoint162;

let HAnimJoint163 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint163.USE = "hanim_l_wrist";
HAnimHumanoid5.joints[20] = HAnimJoint163;

let HAnimJoint164 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint164.USE = "hanim_r_wrist";
HAnimHumanoid5.joints[21] = HAnimJoint164;

let HAnimSegment165 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment165.USE = "hanim_pelvis";
HAnimHumanoid5.segments[22] = HAnimSegment165;

let HAnimSegment166 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment166.USE = "hanim_l1";
HAnimHumanoid5.segments[23] = HAnimSegment166;

let HAnimSegment167 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment167.USE = "hanim_c4";
HAnimHumanoid5.segments[24] = HAnimSegment167;

let HAnimSegment168 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment168.USE = "hanim_skull";
HAnimHumanoid5.segments[25] = HAnimSegment168;

let HAnimSegment169 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment169.USE = "hanim_l_calf";
HAnimHumanoid5.segments[26] = HAnimSegment169;

let HAnimSegment170 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment170.USE = "hanim_r_calf";
HAnimHumanoid5.segments[27] = HAnimSegment170;

let HAnimSegment171 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment171.USE = "hanim_l_forearm";
HAnimHumanoid5.segments[28] = HAnimSegment171;

let HAnimSegment172 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment172.USE = "hanim_r_forearm";
HAnimHumanoid5.segments[29] = HAnimSegment172;

let HAnimSegment173 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment173.USE = "hanim_l_hand";
HAnimHumanoid5.segments[30] = HAnimSegment173;

let HAnimSegment174 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment174.USE = "hanim_r_hand";
HAnimHumanoid5.segments[31] = HAnimSegment174;

let HAnimSegment175 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment175.USE = "hanim_l_hindfoot";
HAnimHumanoid5.segments[32] = HAnimSegment175;

let HAnimSegment176 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment176.USE = "hanim_r_hindfoot";
HAnimHumanoid5.segments[33] = HAnimSegment176;

let HAnimSegment177 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment177.USE = "hanim_l_middistal";
HAnimHumanoid5.segments[34] = HAnimSegment177;

let HAnimSegment178 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment178.USE = "hanim_r_middistal";
HAnimHumanoid5.segments[35] = HAnimSegment178;

let HAnimSegment179 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment179.USE = "hanim_l_thigh";
HAnimHumanoid5.segments[36] = HAnimSegment179;

let HAnimSegment180 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment180.USE = "hanim_r_thigh";
HAnimHumanoid5.segments[37] = HAnimSegment180;

let HAnimSegment181 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment181.USE = "hanim_l_upperarm";
HAnimHumanoid5.segments[38] = HAnimSegment181;

let HAnimSegment182 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment182.USE = "hanim_r_upperarm";
HAnimHumanoid5.segments[39] = HAnimSegment182;

let HAnimSite183 = browser.currentScene.createNode("HAnimSite");
HAnimSite183.USE = "hanim_skull_tip";
HAnimHumanoid5.viewpoints[40] = HAnimSite183;

let HAnimSite184 = browser.currentScene.createNode("HAnimSite");
HAnimSite184.USE = "hanim_sellion_pt";
HAnimHumanoid5.viewpoints[41] = HAnimSite184;

let HAnimSite185 = browser.currentScene.createNode("HAnimSite");
HAnimSite185.USE = "hanim_supramenton_pt";
HAnimHumanoid5.viewpoints[42] = HAnimSite185;

let HAnimSite186 = browser.currentScene.createNode("HAnimSite");
HAnimSite186.USE = "hanim_nuchale_pt";
HAnimHumanoid5.viewpoints[43] = HAnimSite186;

let HAnimSite187 = browser.currentScene.createNode("HAnimSite");
HAnimSite187.USE = "hanim_l_calcaneous_post_pt";
HAnimHumanoid5.viewpoints[44] = HAnimSite187;

let HAnimSite188 = browser.currentScene.createNode("HAnimSite");
HAnimSite188.USE = "hanim_r_calcaneous_post_pt";
HAnimHumanoid5.viewpoints[45] = HAnimSite188;

let HAnimSite189 = browser.currentScene.createNode("HAnimSite");
HAnimSite189.USE = "hanim_l_dactylion_pt";
HAnimHumanoid5.viewpoints[46] = HAnimSite189;

let HAnimSite190 = browser.currentScene.createNode("HAnimSite");
HAnimSite190.USE = "hanim_r_dactylion_pt";
HAnimHumanoid5.viewpoints[47] = HAnimSite190;

let HAnimSite191 = browser.currentScene.createNode("HAnimSite");
HAnimSite191.USE = "hanim_l_digit2_pt";
HAnimHumanoid5.viewpoints[48] = HAnimSite191;

let HAnimSite192 = browser.currentScene.createNode("HAnimSite");
HAnimSite192.USE = "hanim_r_digit2_pt";
HAnimHumanoid5.viewpoints[49] = HAnimSite192;

let HAnimSite193 = browser.currentScene.createNode("HAnimSite");
HAnimSite193.USE = "hanim_l_femoral_lateral_epicn_pt";
HAnimHumanoid5.viewpoints[50] = HAnimSite193;

let HAnimSite194 = browser.currentScene.createNode("HAnimSite");
HAnimSite194.USE = "hanim_r_femoral_lateral_epicn_pt";
HAnimHumanoid5.viewpoints[51] = HAnimSite194;

let HAnimSite195 = browser.currentScene.createNode("HAnimSite");
HAnimSite195.USE = "hanim_l_femoral_medial_epicn_pt";
HAnimHumanoid5.viewpoints[52] = HAnimSite195;

let HAnimSite196 = browser.currentScene.createNode("HAnimSite");
HAnimSite196.USE = "hanim_r_femoral_medial_epicn_pt";
HAnimHumanoid5.viewpoints[53] = HAnimSite196;

let HAnimSite197 = browser.currentScene.createNode("HAnimSite");
HAnimSite197.USE = "hanim_r_gonion_pt";
HAnimHumanoid5.viewpoints[54] = HAnimSite197;

let HAnimSite198 = browser.currentScene.createNode("HAnimSite");
HAnimSite198.USE = "hanim_l_gonion_pt";
HAnimHumanoid5.viewpoints[55] = HAnimSite198;

let HAnimSite199 = browser.currentScene.createNode("HAnimSite");
HAnimSite199.USE = "hanim_l_hand_tip";
HAnimHumanoid5.viewpoints[56] = HAnimSite199;

let HAnimSite200 = browser.currentScene.createNode("HAnimSite");
HAnimSite200.USE = "hanim_r_hand_tip";
HAnimHumanoid5.viewpoints[57] = HAnimSite200;

let HAnimSite201 = browser.currentScene.createNode("HAnimSite");
HAnimSite201.USE = "hanim_l_humeral_lateral_epicn_pt";
HAnimHumanoid5.viewpoints[58] = HAnimSite201;

let HAnimSite202 = browser.currentScene.createNode("HAnimSite");
HAnimSite202.USE = "hanim_r_humeral_lateral_epicn_pt";
HAnimHumanoid5.viewpoints[59] = HAnimSite202;

let HAnimSite203 = browser.currentScene.createNode("HAnimSite");
HAnimSite203.USE = "hanim_l_humeral_medial_epicn_pt";
HAnimHumanoid5.viewpoints[60] = HAnimSite203;

let HAnimSite204 = browser.currentScene.createNode("HAnimSite");
HAnimSite204.USE = "hanim_r_humeral_medial_epicn_pt";
HAnimHumanoid5.viewpoints[61] = HAnimSite204;

let HAnimSite205 = browser.currentScene.createNode("HAnimSite");
HAnimSite205.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid5.viewpoints[62] = HAnimSite205;

let HAnimSite206 = browser.currentScene.createNode("HAnimSite");
HAnimSite206.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid5.viewpoints[63] = HAnimSite206;

let HAnimSite207 = browser.currentScene.createNode("HAnimSite");
HAnimSite207.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid5.viewpoints[64] = HAnimSite207;

let HAnimSite208 = browser.currentScene.createNode("HAnimSite");
HAnimSite208.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid5.viewpoints[65] = HAnimSite208;

let HAnimSite209 = browser.currentScene.createNode("HAnimSite");
HAnimSite209.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid5.viewpoints[66] = HAnimSite209;

let HAnimSite210 = browser.currentScene.createNode("HAnimSite");
HAnimSite210.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid5.viewpoints[67] = HAnimSite210;

let HAnimSite211 = browser.currentScene.createNode("HAnimSite");
HAnimSite211.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid5.viewpoints[68] = HAnimSite211;

let HAnimSite212 = browser.currentScene.createNode("HAnimSite");
HAnimSite212.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid5.viewpoints[69] = HAnimSite212;

let HAnimSite213 = browser.currentScene.createNode("HAnimSite");
HAnimSite213.USE = "hanim_l_metacarpal_pha2_pt";
HAnimHumanoid5.viewpoints[70] = HAnimSite213;

let HAnimSite214 = browser.currentScene.createNode("HAnimSite");
HAnimSite214.USE = "hanim_r_metacarpal_pha2_pt";
HAnimHumanoid5.viewpoints[71] = HAnimSite214;

let HAnimSite215 = browser.currentScene.createNode("HAnimSite");
HAnimSite215.USE = "hanim_l_metacarpal_pha5_pt";
HAnimHumanoid5.viewpoints[72] = HAnimSite215;

let HAnimSite216 = browser.currentScene.createNode("HAnimSite");
HAnimSite216.USE = "hanim_r_metacarpal_pha5_pt";
HAnimHumanoid5.viewpoints[73] = HAnimSite216;

let HAnimSite217 = browser.currentScene.createNode("HAnimSite");
HAnimSite217.USE = "hanim_l_metatarsal_pha1_pt";
HAnimHumanoid5.viewpoints[74] = HAnimSite217;

let HAnimSite218 = browser.currentScene.createNode("HAnimSite");
HAnimSite218.USE = "hanim_r_metatarsal_pha1_pt";
HAnimHumanoid5.viewpoints[75] = HAnimSite218;

let HAnimSite219 = browser.currentScene.createNode("HAnimSite");
HAnimSite219.USE = "hanim_l_metatarsal_pha5_pt";
HAnimHumanoid5.viewpoints[76] = HAnimSite219;

let HAnimSite220 = browser.currentScene.createNode("HAnimSite");
HAnimSite220.USE = "hanim_r_metatarsal_pha5_pt";
HAnimHumanoid5.viewpoints[77] = HAnimSite220;

let HAnimSite221 = browser.currentScene.createNode("HAnimSite");
HAnimSite221.USE = "hanim_l_middistal_tip";
HAnimHumanoid5.viewpoints[78] = HAnimSite221;

let HAnimSite222 = browser.currentScene.createNode("HAnimSite");
HAnimSite222.USE = "hanim_r_middistal_tip";
HAnimHumanoid5.viewpoints[79] = HAnimSite222;

let HAnimSite223 = browser.currentScene.createNode("HAnimSite");
HAnimSite223.USE = "hanim_l_olecranon_pt";
HAnimHumanoid5.viewpoints[80] = HAnimSite223;

let HAnimSite224 = browser.currentScene.createNode("HAnimSite");
HAnimSite224.USE = "hanim_r_olecranon_pt";
HAnimHumanoid5.viewpoints[81] = HAnimSite224;

let HAnimSite225 = browser.currentScene.createNode("HAnimSite");
HAnimSite225.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid5.viewpoints[82] = HAnimSite225;

let HAnimSite226 = browser.currentScene.createNode("HAnimSite");
HAnimSite226.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid5.viewpoints[83] = HAnimSite226;

let HAnimSite227 = browser.currentScene.createNode("HAnimSite");
HAnimSite227.USE = "hanim_l_radiale_pt";
HAnimHumanoid5.viewpoints[84] = HAnimSite227;

let HAnimSite228 = browser.currentScene.createNode("HAnimSite");
HAnimSite228.USE = "hanim_r_radiale_pt";
HAnimHumanoid5.viewpoints[85] = HAnimSite228;

let HAnimSite229 = browser.currentScene.createNode("HAnimSite");
HAnimSite229.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid5.viewpoints[86] = HAnimSite229;

let HAnimSite230 = browser.currentScene.createNode("HAnimSite");
HAnimSite230.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid5.viewpoints[87] = HAnimSite230;

let HAnimSite231 = browser.currentScene.createNode("HAnimSite");
HAnimSite231.USE = "hanim_r_tragion_pt";
HAnimHumanoid5.viewpoints[88] = HAnimSite231;

let HAnimSite232 = browser.currentScene.createNode("HAnimSite");
HAnimSite232.USE = "hanim_l_tragion_pt";
HAnimHumanoid5.viewpoints[89] = HAnimSite232;

let HAnimSite233 = browser.currentScene.createNode("HAnimSite");
HAnimSite233.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid5.viewpoints[90] = HAnimSite233;

let HAnimSite234 = browser.currentScene.createNode("HAnimSite");
HAnimSite234.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid5.viewpoints[91] = HAnimSite234;

browser.currentScene.children[3] = HAnimHumanoid5;

