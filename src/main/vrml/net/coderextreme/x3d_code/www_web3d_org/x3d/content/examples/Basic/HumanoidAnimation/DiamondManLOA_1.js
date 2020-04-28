let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.info = new MFString(new java.lang.String["HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 1 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~h-anim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf"]);
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
HAnimHumanoid5.info = new MFString(new java.lang.String["authorEmail=beitler@graphics.cis.upenn.edu beitler@acm.org","authorName=Matthew T. Beitler","copyright=Copyright 1999 Matthew T. Beitler","humanoidVersion=JointCenters 1.1 LOA1","usageRestrictions=PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided _as-is_ and without warranty of any kind express implied or otherwise including without limitation any warranty of merchantability or fitness for a particular purpose."]);
HAnimHumanoid5.version = "2.0";
let HAnimJoint6 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint6.name = "humanoid_root";
HAnimJoint6.DEF = "hanim_HumanoidRoot";
HAnimJoint6.center = new SFVec3f(new float[0,0.824,0.0277]);
let HAnimJoint7 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint7.name = "sacroiliac";
HAnimJoint7.DEF = "hanim_sacroiliac";
HAnimJoint7.center = new SFVec3f(new float[0,0.9149,0.0016]);
let HAnimSegment8 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment8.name = "pelvis";
HAnimSegment8.DEF = "hanim_pelvis";
let Transform9 = browser.currentScene.createNode("Transform");
Transform9.translation = new SFVec3f(new float[0,0.9149,0.0016]);
let Shape10 = browser.currentScene.createNode("Shape");
Shape10.DEF = "DiamondShape";
let IndexedFaceSet11 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet11.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet11.creaseAngle = 0.5;
let Coordinate12 = browser.currentScene.createNode("Coordinate");
Coordinate12.DEF = "points";
Coordinate12.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet11.coord = Coordinate12;

Shape10.geometry = IndexedFaceSet11;

let Appearance13 = browser.currentScene.createNode("Appearance");
let Material14 = browser.currentScene.createNode("Material");
Material14.diffuseColor = new SFColor(new float[1,1,0]);
Appearance13.material = Material14;

Shape10.appearance = Appearance13;

Transform9.children = new MFNode();

Transform9.children[0] = Shape10;

HAnimSegment8.children = new MFNode();

HAnimSegment8.children[0] = Transform9;

HAnimJoint7.children = new MFNode();

HAnimJoint7.children[0] = HAnimSegment8;

let HAnimJoint15 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint15.name = "l_hip";
HAnimJoint15.DEF = "hanim_l_hip";
HAnimJoint15.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
let HAnimSegment16 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment16.name = "l_thigh";
HAnimSegment16.DEF = "hanim_l_thigh";
let Transform17 = browser.currentScene.createNode("Transform");
Transform17.translation = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
let Shape18 = browser.currentScene.createNode("Shape");
Shape18.USE = "DiamondShape";
Transform17.children = new MFNode();

Transform17.children[0] = Shape18;

HAnimSegment16.children = new MFNode();

HAnimSegment16.children[0] = Transform17;

let HAnimSite19 = browser.currentScene.createNode("HAnimSite");
HAnimSite19.name = "l_knee_crease";
HAnimSite19.DEF = "hanim_l_knee_crease";
HAnimSite19.translation = new SFVec3f(new float[0.0993,0.4881,-0.0309]);
HAnimSegment16.children[1] = HAnimSite19;

let HAnimSite20 = browser.currentScene.createNode("HAnimSite");
HAnimSite20.name = "l_femoral_lateral_epicn";
HAnimSite20.DEF = "hanim_l_femoral_lateral_epicn";
HAnimSite20.translation = new SFVec3f(new float[0.1598,0.4967,0.0297]);
HAnimSegment16.children[2] = HAnimSite20;

let HAnimSite21 = browser.currentScene.createNode("HAnimSite");
HAnimSite21.name = "l_femoral_lateral_epicn";
HAnimSite21.DEF = "hanim_l_femoral_medial_epicn";
HAnimSite21.translation = new SFVec3f(new float[0.0398,0.4946,0.0303]);
HAnimSegment16.children[3] = HAnimSite21;

HAnimJoint15.children = new MFNode();

HAnimJoint15.children[0] = HAnimSegment16;

let HAnimJoint22 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint22.name = "l_knee";
HAnimJoint22.DEF = "hanim_l_knee";
HAnimJoint22.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
let HAnimSegment23 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment23.name = "l_calf";
HAnimSegment23.DEF = "hanim_l_calf";
let Transform24 = browser.currentScene.createNode("Transform");
Transform24.translation = new SFVec3f(new float[0.104,0.4867,0.0308]);
let Shape25 = browser.currentScene.createNode("Shape");
Shape25.USE = "DiamondShape";
Transform24.children = new MFNode();

Transform24.children[0] = Shape25;

HAnimSegment23.children = new MFNode();

HAnimSegment23.children[0] = Transform24;

HAnimJoint22.children = new MFNode();

HAnimJoint22.children[0] = HAnimSegment23;

let HAnimJoint26 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint26.name = "l_ankle";
HAnimJoint26.DEF = "hanim_l_ankle";
HAnimJoint26.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let HAnimSegment27 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment27.name = "l_hindfoot";
HAnimSegment27.DEF = "hanim_l_hindfoot";
let Transform28 = browser.currentScene.createNode("Transform");
Transform28.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let Shape29 = browser.currentScene.createNode("Shape");
Shape29.USE = "DiamondShape";
Transform28.children = new MFNode();

Transform28.children[0] = Shape29;

HAnimSegment27.children = new MFNode();

HAnimSegment27.children[0] = Transform28;

let HAnimSite30 = browser.currentScene.createNode("HAnimSite");
HAnimSite30.name = "l_lateral_malleolus";
HAnimSite30.DEF = "hanim_l_lateral_malleolus";
HAnimSite30.translation = new SFVec3f(new float[0.1308,0.0597,-0.1032]);
HAnimSegment27.children[1] = HAnimSite30;

let HAnimSite31 = browser.currentScene.createNode("HAnimSite");
HAnimSite31.name = "l_medial_malleolus";
HAnimSite31.DEF = "hanim_l_medial_malleolus";
HAnimSite31.translation = new SFVec3f(new float[0.089,0.0716,-0.0881]);
HAnimSegment27.children[2] = HAnimSite31;

let HAnimSite32 = browser.currentScene.createNode("HAnimSite");
HAnimSite32.name = "l_sphyrion";
HAnimSite32.DEF = "hanim_l_sphyrion";
HAnimSite32.translation = new SFVec3f(new float[0.089,0.0575,-0.0943]);
HAnimSegment27.children[3] = HAnimSite32;

let HAnimSite33 = browser.currentScene.createNode("HAnimSite");
HAnimSite33.name = "l_calcaneous_post";
HAnimSite33.DEF = "hanim_l_calcaneous_post";
HAnimSite33.translation = new SFVec3f(new float[0.0974,0.0259,-0.1171]);
HAnimSegment27.children[4] = HAnimSite33;

HAnimJoint26.children = new MFNode();

HAnimJoint26.children[0] = HAnimSegment27;

let HAnimJoint34 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint34.name = "l_midtarsal";
HAnimJoint34.DEF = "hanim_l_midtarsal";
HAnimJoint34.center = new SFVec3f(new float[0.1086,0.0001,0.0368]);
let HAnimSegment35 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment35.name = "l_middistal";
HAnimSegment35.DEF = "hanim_l_middistal";
let HAnimSite36 = browser.currentScene.createNode("HAnimSite");
HAnimSite36.name = "l_middistal_tip";
HAnimSite36.DEF = "hanim_l_middistal_tip";
HAnimSite36.translation = new SFVec3f(new float[0.1354,0.0016,0.1476]);
HAnimSegment35.children = new MFNode();

HAnimSegment35.children[0] = HAnimSite36;

let HAnimSite37 = browser.currentScene.createNode("HAnimSite");
HAnimSite37.name = "l_metatarsal_pha5";
HAnimSite37.DEF = "hanim_l_metatarsal_pha5";
HAnimSite37.translation = new SFVec3f(new float[0.1825,0.007,0.0928]);
HAnimSegment35.children[1] = HAnimSite37;

let HAnimSite38 = browser.currentScene.createNode("HAnimSite");
HAnimSite38.name = "l_metatarsal_pha1";
HAnimSite38.DEF = "hanim_l_metatarsal_pha1";
HAnimSite38.translation = new SFVec3f(new float[0.0816,0.0232,0.0106]);
HAnimSegment35.children[2] = HAnimSite38;

let HAnimSite39 = browser.currentScene.createNode("HAnimSite");
HAnimSite39.name = "l_digit2";
HAnimSite39.DEF = "hanim_l_digit2";
HAnimSite39.translation = new SFVec3f(new float[0.1195,0.0079,0.1433]);
HAnimSegment35.children[3] = HAnimSite39;

HAnimJoint34.children = new MFNode();

HAnimJoint34.children[0] = HAnimSegment35;

HAnimJoint26.children[1] = HAnimJoint34;

HAnimJoint22.children[1] = HAnimJoint26;

HAnimJoint15.children[1] = HAnimJoint22;

HAnimJoint7.children[1] = HAnimJoint15;

let HAnimJoint40 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint40.name = "r_hip";
HAnimJoint40.DEF = "hanim_r_hip";
HAnimJoint40.center = new SFVec3f(new float[-0.095,0.9171,0.0029]);
let HAnimSegment41 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment41.name = "r_thigh";
HAnimSegment41.DEF = "hanim_r_thigh";
let Transform42 = browser.currentScene.createNode("Transform");
Transform42.translation = new SFVec3f(new float[-0.095,0.9171,0.0029]);
let Shape43 = browser.currentScene.createNode("Shape");
Shape43.USE = "DiamondShape";
Transform42.children = new MFNode();

Transform42.children[0] = Shape43;

HAnimSegment41.children = new MFNode();

HAnimSegment41.children[0] = Transform42;

let HAnimSite44 = browser.currentScene.createNode("HAnimSite");
HAnimSite44.name = "r_knee_crease";
HAnimSite44.DEF = "hanim_r_knee_crease";
HAnimSite44.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
HAnimSegment41.children[1] = HAnimSite44;

let HAnimSite45 = browser.currentScene.createNode("HAnimSite");
HAnimSite45.name = "r_femoral_lateral_epicn";
HAnimSite45.DEF = "hanim_r_femoral_lateral_epicn";
HAnimSite45.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
HAnimSegment41.children[2] = HAnimSite45;

let HAnimSite46 = browser.currentScene.createNode("HAnimSite");
HAnimSite46.name = "r_femoral_lateral_epicn";
HAnimSite46.DEF = "hanim_r_femoral_medial_epicn";
HAnimSite46.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
HAnimSegment41.children[3] = HAnimSite46;

HAnimJoint40.children = new MFNode();

HAnimJoint40.children[0] = HAnimSegment41;

let HAnimJoint47 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint47.name = "r_knee";
HAnimJoint47.DEF = "hanim_r_knee";
HAnimJoint47.center = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
let HAnimSegment48 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment48.name = "r_calf";
HAnimSegment48.DEF = "hanim_r_calf";
let Transform49 = browser.currentScene.createNode("Transform");
Transform49.translation = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
let Shape50 = browser.currentScene.createNode("Shape");
Shape50.USE = "DiamondShape";
Transform49.children = new MFNode();

Transform49.children[0] = Shape50;

HAnimSegment48.children = new MFNode();

HAnimSegment48.children[0] = Transform49;

HAnimJoint47.children = new MFNode();

HAnimJoint47.children[0] = HAnimSegment48;

let HAnimJoint51 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint51.name = "r_ankle";
HAnimJoint51.DEF = "hanim_r_ankle";
HAnimJoint51.center = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
let HAnimSegment52 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment52.name = "r_hindfoot";
HAnimSegment52.DEF = "hanim_r_hindfoot";
let Transform53 = browser.currentScene.createNode("Transform");
Transform53.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
let Shape54 = browser.currentScene.createNode("Shape");
Shape54.USE = "DiamondShape";
Transform53.children = new MFNode();

Transform53.children[0] = Shape54;

HAnimSegment52.children = new MFNode();

HAnimSegment52.children[0] = Transform53;

let HAnimSite55 = browser.currentScene.createNode("HAnimSite");
HAnimSite55.name = "r_lateral_malleolus";
HAnimSite55.DEF = "hanim_r_lateral_malleolus";
HAnimSite55.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
HAnimSegment52.children[1] = HAnimSite55;

let HAnimSite56 = browser.currentScene.createNode("HAnimSite");
HAnimSite56.name = "r_medial_malleolus";
HAnimSite56.DEF = "hanim_r_medial_malleolus";
HAnimSite56.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
HAnimSegment52.children[2] = HAnimSite56;

let HAnimSite57 = browser.currentScene.createNode("HAnimSite");
HAnimSite57.name = "r_sphyrion";
HAnimSite57.DEF = "hanim_r_sphyrion";
HAnimSite57.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
HAnimSegment52.children[3] = HAnimSite57;

let HAnimSite58 = browser.currentScene.createNode("HAnimSite");
HAnimSite58.name = "r_calcaneous_post";
HAnimSite58.DEF = "hanim_r_calcaneous_post";
HAnimSite58.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
HAnimSegment52.children[4] = HAnimSite58;

HAnimJoint51.children = new MFNode();

HAnimJoint51.children[0] = HAnimSegment52;

let HAnimJoint59 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint59.name = "r_midtarsal";
HAnimJoint59.DEF = "hanim_r_midtarsal";
HAnimJoint59.center = new SFVec3f(new float[-0.0801,0,0.0368]);
let HAnimSegment60 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment60.name = "r_middistal";
HAnimSegment60.DEF = "hanim_r_middistal";
let HAnimSite61 = browser.currentScene.createNode("HAnimSite");
HAnimSite61.name = "r_middistal_tip";
HAnimSite61.DEF = "hanim_r_middistal_tip";
HAnimSite61.translation = new SFVec3f(new float[-0.1043,-0.0227,0.145]);
HAnimSegment60.children = new MFNode();

HAnimSegment60.children[0] = HAnimSite61;

let HAnimSite62 = browser.currentScene.createNode("HAnimSite");
HAnimSite62.name = "r_metatarsal_pha5";
HAnimSite62.DEF = "hanim_r_metatarsal_pha5";
HAnimSite62.translation = new SFVec3f(new float[-0.1523,0.0166,0.0895]);
HAnimSegment60.children[1] = HAnimSite62;

let HAnimSite63 = browser.currentScene.createNode("HAnimSite");
HAnimSite63.name = "r_metatarsal_pha1";
HAnimSite63.DEF = "hanim_r_metatarsal_pha1";
HAnimSite63.translation = new SFVec3f(new float[-0.0521,0.026,0.0127]);
HAnimSegment60.children[2] = HAnimSite63;

let HAnimSite64 = browser.currentScene.createNode("HAnimSite");
HAnimSite64.name = "r_digit2";
HAnimSite64.DEF = "hanim_r_digit2";
HAnimSite64.translation = new SFVec3f(new float[-0.0883,0.0134,0.1383]);
HAnimSegment60.children[3] = HAnimSite64;

HAnimJoint59.children = new MFNode();

HAnimJoint59.children[0] = HAnimSegment60;

HAnimJoint51.children[1] = HAnimJoint59;

HAnimJoint47.children[1] = HAnimJoint51;

HAnimJoint40.children[1] = HAnimJoint47;

HAnimJoint7.children[2] = HAnimJoint40;

HAnimJoint6.children = new MFNode();

HAnimJoint6.children[0] = HAnimJoint7;

let HAnimJoint65 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint65.name = "vl1";
HAnimJoint65.DEF = "hanim_vl1";
HAnimJoint65.center = new SFVec3f(new float[-0.00405,1.07,-0.0275]);
let HAnimSegment66 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment66.name = "l1";
HAnimSegment66.DEF = "hanim_c7";
HAnimJoint65.children = new MFNode();

HAnimJoint65.children[0] = HAnimSegment66;

let HAnimJoint67 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint67.name = "l_shoulder";
HAnimJoint67.DEF = "hanim_l_shoulder";
HAnimJoint67.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
let HAnimSegment68 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment68.name = "l_upperarm";
HAnimSegment68.DEF = "hanim_l_upperarm";
let Transform69 = browser.currentScene.createNode("Transform");
Transform69.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
let Shape70 = browser.currentScene.createNode("Shape");
Shape70.USE = "DiamondShape";
Transform69.children = new MFNode();

Transform69.children[0] = Shape70;

HAnimSegment68.children = new MFNode();

HAnimSegment68.children[0] = Transform69;

let Transform71 = browser.currentScene.createNode("Transform");
Transform71.DEF = "l_upperarm_adjust";
Transform71.center = new SFVec3f(new float[0.182,1.22,-0.047]);
Transform71.rotation = new SFRotation(new float[1,0,0,0.119]);
Transform71.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimSegment68.children[1] = Transform71;

let HAnimSite72 = browser.currentScene.createNode("HAnimSite");
HAnimSite72.name = "l_humeral_lateral_epicn";
HAnimSite72.DEF = "hanim_l_humeral_lateral_epicn";
HAnimSite72.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
HAnimSegment68.children[2] = HAnimSite72;

HAnimJoint67.children = new MFNode();

HAnimJoint67.children[0] = HAnimSegment68;

let HAnimJoint73 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint73.name = "l_elbow";
HAnimJoint73.DEF = "hanim_l_elbow";
HAnimJoint73.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
let HAnimSegment74 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment74.name = "l_forearm";
HAnimSegment74.DEF = "hanim_l_forearm";
let Transform75 = browser.currentScene.createNode("Transform");
Transform75.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
let Shape76 = browser.currentScene.createNode("Shape");
Shape76.USE = "DiamondShape";
Transform75.children = new MFNode();

Transform75.children[0] = Shape76;

HAnimSegment74.children = new MFNode();

HAnimSegment74.children[0] = Transform75;

let Transform77 = browser.currentScene.createNode("Transform");
Transform77.DEF = "l_forearm_adjust";
Transform77.center = new SFVec3f(new float[0.198,0.961,-0.0405]);
Transform77.rotation = new SFRotation(new float[-1,0,0,0.1]);
Transform77.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimSegment74.children[1] = Transform77;

let HAnimSite78 = browser.currentScene.createNode("HAnimSite");
HAnimSite78.name = "l_radial_styloid";
HAnimSite78.DEF = "hanim_l_radial_styloid";
HAnimSite78.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
HAnimSegment74.children[2] = HAnimSite78;

let HAnimSite79 = browser.currentScene.createNode("HAnimSite");
HAnimSite79.name = "l_olecranon";
HAnimSite79.DEF = "hanim_l_olecranon";
HAnimSite79.translation = new SFVec3f(new float[-0.1962,1.1375,-0.1123]);
HAnimSegment74.children[3] = HAnimSite79;

let HAnimSite80 = browser.currentScene.createNode("HAnimSite");
HAnimSite80.name = "l_humeral_medial_epicn";
HAnimSite80.DEF = "hanim_l_humeral_medial_epicn";
HAnimSite80.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
HAnimSegment74.children[4] = HAnimSite80;

let HAnimSite81 = browser.currentScene.createNode("HAnimSite");
HAnimSite81.name = "l_radiale";
HAnimSite81.DEF = "hanim_l_radiale";
HAnimSite81.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
HAnimSegment74.children[5] = HAnimSite81;

HAnimJoint73.children = new MFNode();

HAnimJoint73.children[0] = HAnimSegment74;

let HAnimJoint82 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint82.name = "l_wrist";
HAnimJoint82.DEF = "hanim_l_wrist";
HAnimJoint82.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
let HAnimSegment83 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment83.name = "l_hand";
HAnimSegment83.DEF = "hanim_l_hand";
let Transform84 = browser.currentScene.createNode("Transform");
Transform84.translation = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
let Shape85 = browser.currentScene.createNode("Shape");
Shape85.USE = "DiamondShape";
Transform84.children = new MFNode();

Transform84.children[0] = Shape85;

HAnimSegment83.children = new MFNode();

HAnimSegment83.children[0] = Transform84;

let Transform86 = browser.currentScene.createNode("Transform");
Transform86.DEF = "l_hand_adjust";
Transform86.center = new SFVec3f(new float[0.213,0.811,-0.0338]);
Transform86.rotation = new SFRotation(new float[-0.06361,-0.9967,0.04988,1.333]);
Transform86.translation = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimSegment83.children[1] = Transform86;

let HAnimSite87 = browser.currentScene.createNode("HAnimSite");
HAnimSite87.name = "l_hand_tip";
HAnimSite87.DEF = "hanim_l_hand_tip";
HAnimSite87.translation = new SFVec3f(new float[0.208,0.6731,-0.0491]);
HAnimSegment83.children[2] = HAnimSite87;

let HAnimSite88 = browser.currentScene.createNode("HAnimSite");
HAnimSite88.name = "l_metacarpal_pha2";
HAnimSite88.DEF = "hanim_l_metacarpal_pha2";
HAnimSite88.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
HAnimSegment83.children[3] = HAnimSite88;

let HAnimSite89 = browser.currentScene.createNode("HAnimSite");
HAnimSite89.name = "l_dactylion";
HAnimSite89.DEF = "hanim_l_dactylion";
HAnimSite89.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
HAnimSegment83.children[4] = HAnimSite89;

let HAnimSite90 = browser.currentScene.createNode("HAnimSite");
HAnimSite90.name = "l_ulnar_styloid";
HAnimSite90.DEF = "hanim_l_ulnar_styloid";
HAnimSite90.translation = new SFVec3f(new float[-0.2142,0.8529,-0.0648]);
HAnimSegment83.children[5] = HAnimSite90;

let HAnimSite91 = browser.currentScene.createNode("HAnimSite");
HAnimSite91.name = "l_metacarpal_pha5";
HAnimSite91.DEF = "hanim_l_metacarpal_pha5";
HAnimSite91.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
HAnimSegment83.children[6] = HAnimSite91;

HAnimJoint82.children = new MFNode();

HAnimJoint82.children[0] = HAnimSegment83;

HAnimJoint73.children[1] = HAnimJoint82;

HAnimJoint67.children[1] = HAnimJoint73;

HAnimJoint65.children[1] = HAnimJoint67;

let HAnimJoint92 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint92.name = "r_shoulder";
HAnimJoint92.DEF = "hanim_r_shoulder";
HAnimJoint92.center = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
let HAnimSegment93 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment93.name = "r_upperarm";
HAnimSegment93.DEF = "hanim_r_upperarm";
let Transform94 = browser.currentScene.createNode("Transform");
Transform94.translation = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
let Shape95 = browser.currentScene.createNode("Shape");
Shape95.USE = "DiamondShape";
Transform94.children = new MFNode();

Transform94.children[0] = Shape95;

HAnimSegment93.children = new MFNode();

HAnimSegment93.children[0] = Transform94;

let Transform96 = browser.currentScene.createNode("Transform");
Transform96.DEF = "r_upperarm_adjust";
Transform96.center = new SFVec3f(new float[-0.182,1.22,-0.047]);
Transform96.rotation = new SFRotation(new float[1,0,0,0.0836]);
Transform96.translation = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
HAnimSegment93.children[1] = Transform96;

let HAnimSite97 = browser.currentScene.createNode("HAnimSite");
HAnimSite97.name = "r_humeral_lateral_epicn";
HAnimSite97.DEF = "hanim_r_humeral_lateral_epicn";
HAnimSite97.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
HAnimSegment93.children[2] = HAnimSite97;

HAnimJoint92.children = new MFNode();

HAnimJoint92.children[0] = HAnimSegment93;

let HAnimJoint98 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint98.name = "r_elbow";
HAnimJoint98.DEF = "hanim_r_elbow";
HAnimJoint98.center = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
let HAnimSegment99 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment99.name = "r_forearm";
HAnimSegment99.DEF = "hanim_r_forearm";
let Transform100 = browser.currentScene.createNode("Transform");
Transform100.translation = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
let Shape101 = browser.currentScene.createNode("Shape");
Shape101.USE = "DiamondShape";
Transform100.children = new MFNode();

Transform100.children[0] = Shape101;

HAnimSegment99.children = new MFNode();

HAnimSegment99.children[0] = Transform100;

let Transform102 = browser.currentScene.createNode("Transform");
Transform102.DEF = "r_forearm_adjust";
Transform102.center = new SFVec3f(new float[-0.198,0.961,-0.0397]);
Transform102.rotation = new SFRotation(new float[-1,0,0,0.1254]);
Transform102.translation = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
HAnimSegment99.children[1] = Transform102;

let HAnimSite103 = browser.currentScene.createNode("HAnimSite");
HAnimSite103.name = "r_radial_styloid";
HAnimSite103.DEF = "hanim_r_radial_styloid";
HAnimSite103.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
HAnimSegment99.children[2] = HAnimSite103;

let HAnimSite104 = browser.currentScene.createNode("HAnimSite");
HAnimSite104.name = "r_olecranon";
HAnimSite104.DEF = "hanim_r_olecranon";
HAnimSite104.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
HAnimSegment99.children[3] = HAnimSite104;

let HAnimSite105 = browser.currentScene.createNode("HAnimSite");
HAnimSite105.name = "r_humeral_medial_epicn";
HAnimSite105.DEF = "hanim_r_humeral_medial_epicn";
HAnimSite105.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
HAnimSegment99.children[4] = HAnimSite105;

let HAnimSite106 = browser.currentScene.createNode("HAnimSite");
HAnimSite106.name = "r_radiale";
HAnimSite106.DEF = "hanim_r_radiale";
HAnimSite106.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
HAnimSegment99.children[5] = HAnimSite106;

HAnimJoint98.children = new MFNode();

HAnimJoint98.children[0] = HAnimSegment99;

let HAnimJoint107 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint107.name = "r_wrist";
HAnimJoint107.DEF = "hanim_r_wrist";
HAnimJoint107.center = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
let HAnimSegment108 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment108.name = "r_hand";
HAnimSegment108.DEF = "hanim_r_hand";
let Transform109 = browser.currentScene.createNode("Transform");
Transform109.translation = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
let Shape110 = browser.currentScene.createNode("Shape");
Shape110.USE = "DiamondShape";
Transform109.children = new MFNode();

Transform109.children[0] = Shape110;

HAnimSegment108.children = new MFNode();

HAnimSegment108.children[0] = Transform109;

let Transform111 = browser.currentScene.createNode("Transform");
Transform111.DEF = "r_hand_adjust";
Transform111.center = new SFVec3f(new float[-0.217,0.811,-0.0338]);
Transform111.rotation = new SFRotation(new float[-0.09024,0.994,-0.0624,1.216]);
HAnimSegment108.children[1] = Transform111;

let HAnimSite112 = browser.currentScene.createNode("HAnimSite");
HAnimSite112.name = "r_hand_tip";
HAnimSite112.DEF = "hanim_r_hand_tip";
HAnimSite112.translation = new SFVec3f(new float[-0.1969,0.6758,-0.0427]);
HAnimSegment108.children[2] = HAnimSite112;

let HAnimSite113 = browser.currentScene.createNode("HAnimSite");
HAnimSite113.name = "r_metacarpal_pha2";
HAnimSite113.DEF = "hanim_r_metacarpal_pha2";
HAnimSite113.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
HAnimSegment108.children[3] = HAnimSite113;

let HAnimSite114 = browser.currentScene.createNode("HAnimSite");
HAnimSite114.name = "r_dactylion";
HAnimSite114.DEF = "hanim_r_dactylion";
HAnimSite114.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
HAnimSegment108.children[4] = HAnimSite114;

let HAnimSite115 = browser.currentScene.createNode("HAnimSite");
HAnimSite115.name = "r_ulnar_styloid";
HAnimSite115.DEF = "hanim_r_ulnar_styloid";
HAnimSite115.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
HAnimSegment108.children[5] = HAnimSite115;

let HAnimSite116 = browser.currentScene.createNode("HAnimSite");
HAnimSite116.name = "r_metacarpal_pha5";
HAnimSite116.DEF = "hanim_r_metacarpal_pha5";
HAnimSite116.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
HAnimSegment108.children[6] = HAnimSite116;

HAnimJoint107.children = new MFNode();

HAnimJoint107.children[0] = HAnimSegment108;

HAnimJoint98.children[1] = HAnimJoint107;

HAnimJoint92.children[1] = HAnimJoint98;

HAnimJoint65.children[2] = HAnimJoint92;

let HAnimJoint117 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint117.name = "vc4";
HAnimJoint117.DEF = "hanim_vc4";
HAnimJoint117.center = new SFVec3f(new float[0,1.43,-0.0458]);
let HAnimSegment118 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment118.name = "c4";
HAnimSegment118.DEF = "hanim_c4";
HAnimJoint117.children = new MFNode();

HAnimJoint117.children[0] = HAnimSegment118;

HAnimJoint65.children[3] = HAnimJoint117;

HAnimJoint6.children[1] = HAnimJoint65;

let HAnimJoint119 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint119.name = "vl5";
HAnimJoint119.DEF = "hanim_vl5";
HAnimJoint119.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
let HAnimJoint120 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint120.name = "skullbase";
HAnimJoint120.DEF = "hanim_skullbase";
HAnimJoint120.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
let HAnimSegment121 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment121.name = "skull";
HAnimSegment121.DEF = "hanim_skull";
let Transform122 = browser.currentScene.createNode("Transform");
Transform122.translation = new SFVec3f(new float[0.0044,1.6209,0.0236]);
let Shape123 = browser.currentScene.createNode("Shape");
Shape123.USE = "DiamondShape";
Transform122.children = new MFNode();

Transform122.children[0] = Shape123;

HAnimSegment121.children = new MFNode();

HAnimSegment121.children[0] = Transform122;

let HAnimSite124 = browser.currentScene.createNode("HAnimSite");
HAnimSite124.name = "skull_tip";
HAnimSite124.DEF = "hanim_skull_tip";
HAnimSite124.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
HAnimSegment121.children[1] = HAnimSite124;

let HAnimSite125 = browser.currentScene.createNode("HAnimSite");
HAnimSite125.name = "sellion";
HAnimSite125.DEF = "hanim_sellion";
HAnimSite125.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
HAnimSegment121.children[2] = HAnimSite125;

let HAnimSite126 = browser.currentScene.createNode("HAnimSite");
HAnimSite126.name = "r_infraorbitale";
HAnimSite126.DEF = "hanim_r_infraorbitale";
HAnimSite126.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
HAnimSegment121.children[3] = HAnimSite126;

let HAnimSite127 = browser.currentScene.createNode("HAnimSite");
HAnimSite127.name = "l_infraorbitale";
HAnimSite127.DEF = "hanim_l_infraorbitale";
HAnimSite127.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
HAnimSegment121.children[4] = HAnimSite127;

let HAnimSite128 = browser.currentScene.createNode("HAnimSite");
HAnimSite128.name = "supramenton";
HAnimSite128.DEF = "hanim_supramenton";
HAnimSite128.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
HAnimSegment121.children[5] = HAnimSite128;

let HAnimSite129 = browser.currentScene.createNode("HAnimSite");
HAnimSite129.name = "r_tragion";
HAnimSite129.DEF = "hanim_r_tragion";
HAnimSite129.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
HAnimSegment121.children[6] = HAnimSite129;

let HAnimSite130 = browser.currentScene.createNode("HAnimSite");
HAnimSite130.name = "r_gonion";
HAnimSite130.DEF = "hanim_r_gonion";
HAnimSite130.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
HAnimSegment121.children[7] = HAnimSite130;

let HAnimSite131 = browser.currentScene.createNode("HAnimSite");
HAnimSite131.name = "l_tragion";
HAnimSite131.DEF = "hanim_l_tragion";
HAnimSite131.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
HAnimSegment121.children[8] = HAnimSite131;

let HAnimSite132 = browser.currentScene.createNode("HAnimSite");
HAnimSite132.name = "l_gonion";
HAnimSite132.DEF = "hanim_l_gonion";
HAnimSite132.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
HAnimSegment121.children[9] = HAnimSite132;

let HAnimSite133 = browser.currentScene.createNode("HAnimSite");
HAnimSite133.name = "nuchale";
HAnimSite133.DEF = "hanim_nuchale";
HAnimSite133.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
HAnimSegment121.children[10] = HAnimSite133;

HAnimJoint120.children = new MFNode();

HAnimJoint120.children[0] = HAnimSegment121;

HAnimJoint119.children = new MFNode();

HAnimJoint119.children[0] = HAnimJoint120;

HAnimJoint6.children[2] = HAnimJoint119;

HAnimHumanoid5.joints = new MFNode();

HAnimHumanoid5.joints[0] = HAnimJoint6;

let HAnimJoint134 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint134.USE = "hanim_HumanoidRoot";
HAnimHumanoid5.joints[1] = HAnimJoint134;

let HAnimJoint135 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint135.USE = "hanim_sacroiliac";
HAnimHumanoid5.joints[2] = HAnimJoint135;

let HAnimJoint136 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint136.USE = "hanim_l_hip";
HAnimHumanoid5.joints[3] = HAnimJoint136;

let HAnimJoint137 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint137.USE = "hanim_l_knee";
HAnimHumanoid5.joints[4] = HAnimJoint137;

let HAnimJoint138 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint138.USE = "hanim_l_ankle";
HAnimHumanoid5.joints[5] = HAnimJoint138;

let HAnimJoint139 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint139.USE = "hanim_r_hip";
HAnimHumanoid5.joints[6] = HAnimJoint139;

let HAnimJoint140 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint140.USE = "hanim_r_knee";
HAnimHumanoid5.joints[7] = HAnimJoint140;

let HAnimJoint141 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint141.USE = "hanim_r_ankle";
HAnimHumanoid5.joints[8] = HAnimJoint141;

let HAnimJoint142 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint142.USE = "hanim_vl1";
HAnimHumanoid5.joints[9] = HAnimJoint142;

let HAnimJoint143 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint143.USE = "hanim_l_shoulder";
HAnimHumanoid5.joints[10] = HAnimJoint143;

let HAnimJoint144 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint144.USE = "hanim_l_elbow";
HAnimHumanoid5.joints[11] = HAnimJoint144;

let HAnimJoint145 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint145.USE = "hanim_l_wrist";
HAnimHumanoid5.joints[12] = HAnimJoint145;

let HAnimJoint146 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint146.USE = "hanim_r_shoulder";
HAnimHumanoid5.joints[13] = HAnimJoint146;

let HAnimJoint147 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint147.USE = "hanim_r_elbow";
HAnimHumanoid5.joints[14] = HAnimJoint147;

let HAnimJoint148 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint148.USE = "hanim_r_wrist";
HAnimHumanoid5.joints[15] = HAnimJoint148;

let HAnimJoint149 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint149.USE = "hanim_vc4";
HAnimHumanoid5.joints[16] = HAnimJoint149;

let HAnimJoint150 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint150.USE = "hanim_skullbase";
HAnimHumanoid5.joints[17] = HAnimJoint150;

let HAnimJoint151 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint151.USE = "hanim_l_midtarsal";
HAnimHumanoid5.joints[18] = HAnimJoint151;

let HAnimJoint152 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint152.USE = "hanim_r_midtarsal";
HAnimHumanoid5.joints[19] = HAnimJoint152;

let HAnimJoint153 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint153.USE = "hanim_vl5";
HAnimHumanoid5.joints[20] = HAnimJoint153;

let HAnimSegment154 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment154.USE = "hanim_pelvis";
HAnimHumanoid5.segments[21] = HAnimSegment154;

let HAnimSegment155 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment155.USE = "hanim_l_thigh";
HAnimHumanoid5.segments[22] = HAnimSegment155;

let HAnimSegment156 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment156.USE = "hanim_l_calf";
HAnimHumanoid5.segments[23] = HAnimSegment156;

let HAnimSegment157 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment157.USE = "hanim_l_hindfoot";
HAnimHumanoid5.segments[24] = HAnimSegment157;

let HAnimSegment158 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment158.USE = "hanim_r_thigh";
HAnimHumanoid5.segments[25] = HAnimSegment158;

let HAnimSegment159 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment159.USE = "hanim_r_calf";
HAnimHumanoid5.segments[26] = HAnimSegment159;

let HAnimSegment160 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment160.USE = "hanim_r_hindfoot";
HAnimHumanoid5.segments[27] = HAnimSegment160;

let HAnimSegment161 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment161.USE = "hanim_c7";
HAnimHumanoid5.segments[28] = HAnimSegment161;

let HAnimSegment162 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment162.USE = "hanim_l_upperarm";
HAnimHumanoid5.segments[29] = HAnimSegment162;

let HAnimSegment163 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment163.USE = "hanim_l_forearm";
HAnimHumanoid5.segments[30] = HAnimSegment163;

let HAnimSegment164 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment164.USE = "hanim_l_hand";
HAnimHumanoid5.segments[31] = HAnimSegment164;

let HAnimSegment165 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment165.USE = "hanim_r_upperarm";
HAnimHumanoid5.segments[32] = HAnimSegment165;

let HAnimSegment166 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment166.USE = "hanim_r_forearm";
HAnimHumanoid5.segments[33] = HAnimSegment166;

let HAnimSegment167 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment167.USE = "hanim_r_hand";
HAnimHumanoid5.segments[34] = HAnimSegment167;

let HAnimSegment168 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment168.USE = "hanim_c4";
HAnimHumanoid5.segments[35] = HAnimSegment168;

let HAnimSegment169 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment169.USE = "hanim_skull";
HAnimHumanoid5.segments[36] = HAnimSegment169;

let HAnimSegment170 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment170.USE = "hanim_l_middistal";
HAnimHumanoid5.segments[37] = HAnimSegment170;

let HAnimSegment171 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment171.USE = "hanim_r_middistal";
HAnimHumanoid5.segments[38] = HAnimSegment171;

let HAnimSite172 = browser.currentScene.createNode("HAnimSite");
HAnimSite172.name = "DiamondManLOA_1_view";
let Viewpoint173 = browser.currentScene.createNode("Viewpoint");
Viewpoint173.DEF = "InclinedView";
Viewpoint173.description = "Inclined View";
Viewpoint173.orientation = new SFRotation(new float[-0.113,0.993,0.0347,0.671]);
Viewpoint173.position = new SFVec3f(new float[1.62,1.05,2.06]);
HAnimSite172.children = new MFNode();

HAnimSite172.children[0] = Viewpoint173;

let Viewpoint174 = browser.currentScene.createNode("Viewpoint");
Viewpoint174.DEF = "FrontView";
Viewpoint174.description = "Front View";
Viewpoint174.position = new SFVec3f(new float[0,0.854,2.57665]);
HAnimSite172.children[1] = Viewpoint174;

let Viewpoint175 = browser.currentScene.createNode("Viewpoint");
Viewpoint175.DEF = "SideView";
Viewpoint175.description = "Side View";
Viewpoint175.orientation = new SFRotation(new float[0,1,0,1.57079]);
Viewpoint175.position = new SFVec3f(new float[2.5929,0.854,0]);
HAnimSite172.children[2] = Viewpoint175;

let Viewpoint176 = browser.currentScene.createNode("Viewpoint");
Viewpoint176.DEF = "TopView";
Viewpoint176.description = "Top View";
Viewpoint176.orientation = new SFRotation(new float[1,0,0,-1.57079]);
Viewpoint176.position = new SFVec3f(new float[0,3.4495,0]);
HAnimSite172.children[3] = Viewpoint176;

HAnimHumanoid5.viewpoints[39] = HAnimSite172;

let HAnimSite177 = browser.currentScene.createNode("HAnimSite");
HAnimSite177.USE = "hanim_l_knee_crease";
HAnimHumanoid5.viewpoints[40] = HAnimSite177;

let HAnimSite178 = browser.currentScene.createNode("HAnimSite");
HAnimSite178.USE = "hanim_l_femoral_lateral_epicn";
HAnimHumanoid5.viewpoints[41] = HAnimSite178;

let HAnimSite179 = browser.currentScene.createNode("HAnimSite");
HAnimSite179.USE = "hanim_l_femoral_medial_epicn";
HAnimHumanoid5.viewpoints[42] = HAnimSite179;

let HAnimSite180 = browser.currentScene.createNode("HAnimSite");
HAnimSite180.USE = "hanim_l_lateral_malleolus";
HAnimHumanoid5.viewpoints[43] = HAnimSite180;

let HAnimSite181 = browser.currentScene.createNode("HAnimSite");
HAnimSite181.USE = "hanim_l_medial_malleolus";
HAnimHumanoid5.viewpoints[44] = HAnimSite181;

let HAnimSite182 = browser.currentScene.createNode("HAnimSite");
HAnimSite182.USE = "hanim_l_sphyrion";
HAnimHumanoid5.viewpoints[45] = HAnimSite182;

let HAnimSite183 = browser.currentScene.createNode("HAnimSite");
HAnimSite183.USE = "hanim_l_calcaneous_post";
HAnimHumanoid5.viewpoints[46] = HAnimSite183;

let HAnimSite184 = browser.currentScene.createNode("HAnimSite");
HAnimSite184.USE = "hanim_l_middistal_tip";
HAnimHumanoid5.viewpoints[47] = HAnimSite184;

let HAnimSite185 = browser.currentScene.createNode("HAnimSite");
HAnimSite185.USE = "hanim_l_metatarsal_pha5";
HAnimHumanoid5.viewpoints[48] = HAnimSite185;

let HAnimSite186 = browser.currentScene.createNode("HAnimSite");
HAnimSite186.USE = "hanim_l_metatarsal_pha1";
HAnimHumanoid5.viewpoints[49] = HAnimSite186;

let HAnimSite187 = browser.currentScene.createNode("HAnimSite");
HAnimSite187.USE = "hanim_l_digit2";
HAnimHumanoid5.viewpoints[50] = HAnimSite187;

let HAnimSite188 = browser.currentScene.createNode("HAnimSite");
HAnimSite188.USE = "hanim_r_knee_crease";
HAnimHumanoid5.viewpoints[51] = HAnimSite188;

let HAnimSite189 = browser.currentScene.createNode("HAnimSite");
HAnimSite189.USE = "hanim_r_femoral_lateral_epicn";
HAnimHumanoid5.viewpoints[52] = HAnimSite189;

let HAnimSite190 = browser.currentScene.createNode("HAnimSite");
HAnimSite190.USE = "hanim_r_femoral_medial_epicn";
HAnimHumanoid5.viewpoints[53] = HAnimSite190;

let HAnimSite191 = browser.currentScene.createNode("HAnimSite");
HAnimSite191.USE = "hanim_r_lateral_malleolus";
HAnimHumanoid5.viewpoints[54] = HAnimSite191;

let HAnimSite192 = browser.currentScene.createNode("HAnimSite");
HAnimSite192.USE = "hanim_r_medial_malleolus";
HAnimHumanoid5.viewpoints[55] = HAnimSite192;

let HAnimSite193 = browser.currentScene.createNode("HAnimSite");
HAnimSite193.USE = "hanim_r_sphyrion";
HAnimHumanoid5.viewpoints[56] = HAnimSite193;

let HAnimSite194 = browser.currentScene.createNode("HAnimSite");
HAnimSite194.USE = "hanim_r_calcaneous_post";
HAnimHumanoid5.viewpoints[57] = HAnimSite194;

let HAnimSite195 = browser.currentScene.createNode("HAnimSite");
HAnimSite195.USE = "hanim_r_middistal_tip";
HAnimHumanoid5.viewpoints[58] = HAnimSite195;

let HAnimSite196 = browser.currentScene.createNode("HAnimSite");
HAnimSite196.USE = "hanim_r_metatarsal_pha5";
HAnimHumanoid5.viewpoints[59] = HAnimSite196;

let HAnimSite197 = browser.currentScene.createNode("HAnimSite");
HAnimSite197.USE = "hanim_r_metatarsal_pha1";
HAnimHumanoid5.viewpoints[60] = HAnimSite197;

let HAnimSite198 = browser.currentScene.createNode("HAnimSite");
HAnimSite198.USE = "hanim_r_digit2";
HAnimHumanoid5.viewpoints[61] = HAnimSite198;

let HAnimSite199 = browser.currentScene.createNode("HAnimSite");
HAnimSite199.USE = "hanim_l_humeral_lateral_epicn";
HAnimHumanoid5.viewpoints[62] = HAnimSite199;

let HAnimSite200 = browser.currentScene.createNode("HAnimSite");
HAnimSite200.USE = "hanim_l_radial_styloid";
HAnimHumanoid5.viewpoints[63] = HAnimSite200;

let HAnimSite201 = browser.currentScene.createNode("HAnimSite");
HAnimSite201.USE = "hanim_l_olecranon";
HAnimHumanoid5.viewpoints[64] = HAnimSite201;

let HAnimSite202 = browser.currentScene.createNode("HAnimSite");
HAnimSite202.USE = "hanim_l_humeral_medial_epicn";
HAnimHumanoid5.viewpoints[65] = HAnimSite202;

let HAnimSite203 = browser.currentScene.createNode("HAnimSite");
HAnimSite203.USE = "hanim_l_radiale";
HAnimHumanoid5.viewpoints[66] = HAnimSite203;

let HAnimSite204 = browser.currentScene.createNode("HAnimSite");
HAnimSite204.USE = "hanim_l_hand_tip";
HAnimHumanoid5.viewpoints[67] = HAnimSite204;

let HAnimSite205 = browser.currentScene.createNode("HAnimSite");
HAnimSite205.USE = "hanim_l_metacarpal_pha2";
HAnimHumanoid5.viewpoints[68] = HAnimSite205;

let HAnimSite206 = browser.currentScene.createNode("HAnimSite");
HAnimSite206.USE = "hanim_l_dactylion";
HAnimHumanoid5.viewpoints[69] = HAnimSite206;

let HAnimSite207 = browser.currentScene.createNode("HAnimSite");
HAnimSite207.USE = "hanim_l_ulnar_styloid";
HAnimHumanoid5.viewpoints[70] = HAnimSite207;

let HAnimSite208 = browser.currentScene.createNode("HAnimSite");
HAnimSite208.USE = "hanim_l_metacarpal_pha5";
HAnimHumanoid5.viewpoints[71] = HAnimSite208;

let HAnimSite209 = browser.currentScene.createNode("HAnimSite");
HAnimSite209.USE = "hanim_r_humeral_lateral_epicn";
HAnimHumanoid5.viewpoints[72] = HAnimSite209;

let HAnimSite210 = browser.currentScene.createNode("HAnimSite");
HAnimSite210.USE = "hanim_r_radial_styloid";
HAnimHumanoid5.viewpoints[73] = HAnimSite210;

let HAnimSite211 = browser.currentScene.createNode("HAnimSite");
HAnimSite211.USE = "hanim_r_olecranon";
HAnimHumanoid5.viewpoints[74] = HAnimSite211;

let HAnimSite212 = browser.currentScene.createNode("HAnimSite");
HAnimSite212.USE = "hanim_r_humeral_medial_epicn";
HAnimHumanoid5.viewpoints[75] = HAnimSite212;

let HAnimSite213 = browser.currentScene.createNode("HAnimSite");
HAnimSite213.USE = "hanim_r_radiale";
HAnimHumanoid5.viewpoints[76] = HAnimSite213;

let HAnimSite214 = browser.currentScene.createNode("HAnimSite");
HAnimSite214.USE = "hanim_r_hand_tip";
HAnimHumanoid5.viewpoints[77] = HAnimSite214;

let HAnimSite215 = browser.currentScene.createNode("HAnimSite");
HAnimSite215.USE = "hanim_r_metacarpal_pha2";
HAnimHumanoid5.viewpoints[78] = HAnimSite215;

let HAnimSite216 = browser.currentScene.createNode("HAnimSite");
HAnimSite216.USE = "hanim_r_dactylion";
HAnimHumanoid5.viewpoints[79] = HAnimSite216;

let HAnimSite217 = browser.currentScene.createNode("HAnimSite");
HAnimSite217.USE = "hanim_r_ulnar_styloid";
HAnimHumanoid5.viewpoints[80] = HAnimSite217;

let HAnimSite218 = browser.currentScene.createNode("HAnimSite");
HAnimSite218.USE = "hanim_r_metacarpal_pha5";
HAnimHumanoid5.viewpoints[81] = HAnimSite218;

let HAnimSite219 = browser.currentScene.createNode("HAnimSite");
HAnimSite219.USE = "hanim_skull_tip";
HAnimHumanoid5.viewpoints[82] = HAnimSite219;

let HAnimSite220 = browser.currentScene.createNode("HAnimSite");
HAnimSite220.USE = "hanim_sellion";
HAnimHumanoid5.viewpoints[83] = HAnimSite220;

let HAnimSite221 = browser.currentScene.createNode("HAnimSite");
HAnimSite221.USE = "hanim_r_infraorbitale";
HAnimHumanoid5.viewpoints[84] = HAnimSite221;

let HAnimSite222 = browser.currentScene.createNode("HAnimSite");
HAnimSite222.USE = "hanim_l_infraorbitale";
HAnimHumanoid5.viewpoints[85] = HAnimSite222;

let HAnimSite223 = browser.currentScene.createNode("HAnimSite");
HAnimSite223.USE = "hanim_supramenton";
HAnimHumanoid5.viewpoints[86] = HAnimSite223;

let HAnimSite224 = browser.currentScene.createNode("HAnimSite");
HAnimSite224.USE = "hanim_r_tragion";
HAnimHumanoid5.viewpoints[87] = HAnimSite224;

let HAnimSite225 = browser.currentScene.createNode("HAnimSite");
HAnimSite225.USE = "hanim_r_gonion";
HAnimHumanoid5.viewpoints[88] = HAnimSite225;

let HAnimSite226 = browser.currentScene.createNode("HAnimSite");
HAnimSite226.USE = "hanim_l_tragion";
HAnimHumanoid5.viewpoints[89] = HAnimSite226;

let HAnimSite227 = browser.currentScene.createNode("HAnimSite");
HAnimSite227.USE = "hanim_l_gonion";
HAnimHumanoid5.viewpoints[90] = HAnimSite227;

let HAnimSite228 = browser.currentScene.createNode("HAnimSite");
HAnimSite228.USE = "hanim_nuchale";
HAnimHumanoid5.viewpoints[91] = HAnimSite228;

browser.currentScene.children[3] = HAnimHumanoid5;

