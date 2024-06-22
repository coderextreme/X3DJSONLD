let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let component2 = browser.currentScene.createNode("component");
component2.name = "HAnim";
component2.level = 3;
head1.component = new MFNode();

head1.component[0] = component2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "title";
meta3.content = "blenderSkeleton.x3d";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "copyright";
meta4.content = "2023";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "reference";
meta5.content = "http://www.web3D.org";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "generator";
meta6.content = "Blender 4.0.1";
head1.meta[4] = meta6;

head = head1;

let NavigationInfo8 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo8;

let Background9 = browser.currentScene.createNode("Background");
Background9.DEF = "WO_World";
Background9.groundColor = new MFColor(new float[0.05087608844041824,0.05087608844041824,0.05087608844041824]);
Background9.skyColor = new MFColor(new float[0.05087608844041824,0.05087608844041824,0.05087608844041824]);
browser.currentScene.children[1] = Background9;

let Transform10 = browser.currentScene.createNode("Transform");
let Shape11 = browser.currentScene.createNode("Shape");
Shape11.DEF = "SiteShape";
let Box12 = browser.currentScene.createNode("Box");
Box12.size = new SFVec3f(new float[0.05,0.05,0.05]);
Shape11.geometry = Box12;

let Appearance13 = browser.currentScene.createNode("Appearance");
let Material14 = browser.currentScene.createNode("Material");
Material14.diffuseColor = new SFColor(new float[0,0,1]);
Appearance13.material = Material14;

Shape11.appearance = Appearance13;

Transform10.child = new undefined();

Transform10.child[0] = Shape11;

browser.currentScene.children[2] = Transform10;

let Transform15 = browser.currentScene.createNode("Transform");
let Shape16 = browser.currentScene.createNode("Shape");
Shape16.DEF = "JointShape";
let Sphere17 = browser.currentScene.createNode("Sphere");
Sphere17.radius = 0.06;
Shape16.geometry = Sphere17;

let Appearance18 = browser.currentScene.createNode("Appearance");
Appearance18.DEF = "JointAppearance";
let Material19 = browser.currentScene.createNode("Material");
Material19.diffuseColor = new SFColor(new float[1,0.5,0]);
Material19.transparency = 0.5;
Appearance18.material = Material19;

Shape16.appearance = Appearance18;

Transform15.child = new undefined();

Transform15.child[0] = Shape16;

browser.currentScene.children[3] = Transform15;

let Transform20 = browser.currentScene.createNode("Transform");
Transform20.DEF = "Light_TRANSFORM";
Transform20.rotation = new SFRotation(new float[0.20594,0.33152,0.9207,1.92627]);
Transform20.translation = new SFVec3f(new float[4.07625,1.00545,5.90386]);
let PointLight21 = browser.currentScene.createNode("PointLight");
PointLight21.DEF = "LA_Light";
PointLight21.location = new SFVec3f(new float[-8.940696716308594e-8,-3.5762786865234375e-7,4.6193599700927734e-7]);
PointLight21.radius = 40;
Transform20.children = new MFNode();

Transform20.children[0] = PointLight21;

browser.currentScene.children[4] = Transform20;

let Transform22 = browser.currentScene.createNode("Transform");
Transform22.DEF = "Camera_TRANSFORM";
Transform22.rotation = new SFRotation(new float[0.77344,0.33383,0.53884,1.35072]);
Transform22.translation = new SFVec3f(new float[7.35889,-6.92579,4.95831]);
let Viewpoint23 = browser.currentScene.createNode("Viewpoint");
Viewpoint23.DEF = "CA_Camera";
Viewpoint23.fieldOfView = 0.6911112070083618;
Viewpoint23.orientation = new SFRotation(new float[-3.627339850709177e-8,-0.4730778932571411,-0.8810206651687622,0]);
Viewpoint23.position = new SFVec3f(new float[-3.927080456378462e-7,-2.123415470123291e-7,2.384185791015625e-7]);
Transform22.children = new MFNode();

Transform22.children[0] = Viewpoint23;

browser.currentScene.children[5] = Transform22;

let Transform24 = browser.currentScene.createNode("Transform");
Transform24.DEF = "Armature_TRANSFORM";
let HAnimHumanoid25 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid25.name = "humanoid";
HAnimHumanoid25.DEF = "hanim_humanoid";
HAnimHumanoid25.version = "2.0";
let HAnimJoint26 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint26.name = "Armature";
HAnimJoint26.DEF = "hanim_Armature";
HAnimJoint26.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint26.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment27 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment27.name = "SEGMENT_FOR_Armature";
HAnimSegment27.DEF = "hanim_SEGMENT_FOR_Armature";
let TouchSensor28 = browser.currentScene.createNode("TouchSensor");
TouchSensor28.description = "joint Armature segment SEGMENT_FOR_Armature";
HAnimSegment27.children = new MFNode();

HAnimSegment27.children[0] = TouchSensor28;

let Transform29 = browser.currentScene.createNode("Transform");
let Shape30 = browser.currentScene.createNode("Shape");
Shape30.USE = "JointShape";
Transform29.child = new undefined();

Transform29.child[0] = Shape30;

HAnimSegment27.children[1] = Transform29;

let HAnimSite31 = browser.currentScene.createNode("HAnimSite");
HAnimSite31.name = "SEGMENT_FOR_Armature_tip";
HAnimSite31.DEF = "hanim_SEGMENT_FOR_Armature_tip";
let Transform32 = browser.currentScene.createNode("Transform");
let Shape33 = browser.currentScene.createNode("Shape");
Shape33.USE = "SiteShape";
Transform32.child = new undefined();

Transform32.child[0] = Shape33;

HAnimSite31.children = new MFNode();

HAnimSite31.children[0] = Transform32;

HAnimSegment27.children[2] = HAnimSite31;

HAnimJoint26.children = new MFNode();

HAnimJoint26.children[0] = HAnimSegment27;

let HAnimJoint34 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint34.name = "sacrum";
HAnimJoint34.DEF = "hanim_sacrum";
HAnimJoint34.center = new SFVec3f(new float[-0.0002,-0.1178,0.8174]);
HAnimJoint34.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint34.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment35 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment35.name = "SEGMENT_FOR_sacrum";
HAnimSegment35.DEF = "hanim_SEGMENT_FOR_sacrum";
let TouchSensor36 = browser.currentScene.createNode("TouchSensor");
TouchSensor36.description = "joint sacrum segment SEGMENT_FOR_sacrum";
HAnimSegment35.children = new MFNode();

HAnimSegment35.children[0] = TouchSensor36;

let Transform37 = browser.currentScene.createNode("Transform");
Transform37.translation = new SFVec3f(new float[-0.0002,-0.1178,0.8174]);
let Shape38 = browser.currentScene.createNode("Shape");
Shape38.USE = "JointShape";
Transform37.child = new undefined();

Transform37.child[0] = Shape38;

HAnimSegment35.children[1] = Transform37;

let HAnimSite39 = browser.currentScene.createNode("HAnimSite");
HAnimSite39.name = "SEGMENT_FOR_sacrum_tip";
HAnimSite39.DEF = "hanim_SEGMENT_FOR_sacrum_tip";
let Transform40 = browser.currentScene.createNode("Transform");
Transform40.translation = new SFVec3f(new float[-0.0002,-0.1178,0.8174]);
let Shape41 = browser.currentScene.createNode("Shape");
Shape41.USE = "SiteShape";
Transform40.child = new undefined();

Transform40.child[0] = Shape41;

HAnimSite39.children = new MFNode();

HAnimSite39.children[0] = Transform40;

HAnimSegment35.children[2] = HAnimSite39;

HAnimJoint34.children = new MFNode();

HAnimJoint34.children[0] = HAnimSegment35;

let HAnimJoint42 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint42.name = "pelvis";
HAnimJoint42.DEF = "hanim_pelvis";
HAnimJoint42.center = new SFVec3f(new float[-0.0002,-0.1178,0.6986]);
HAnimJoint42.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint42.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment43 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment43.name = "SEGMENT_FOR_pelvis";
HAnimSegment43.DEF = "hanim_SEGMENT_FOR_pelvis";
let TouchSensor44 = browser.currentScene.createNode("TouchSensor");
TouchSensor44.description = "joint pelvis segment SEGMENT_FOR_pelvis";
HAnimSegment43.children = new MFNode();

HAnimSegment43.children[0] = TouchSensor44;

let Transform45 = browser.currentScene.createNode("Transform");
Transform45.translation = new SFVec3f(new float[-0.0002,-0.1178,0.6986]);
let Shape46 = browser.currentScene.createNode("Shape");
Shape46.USE = "JointShape";
Transform45.child = new undefined();

Transform45.child[0] = Shape46;

HAnimSegment43.children[1] = Transform45;

let HAnimSite47 = browser.currentScene.createNode("HAnimSite");
HAnimSite47.name = "SEGMENT_FOR_pelvis_tip";
HAnimSite47.DEF = "hanim_SEGMENT_FOR_pelvis_tip";
let Transform48 = browser.currentScene.createNode("Transform");
Transform48.translation = new SFVec3f(new float[-0.0002,-0.1178,0.6986]);
let Shape49 = browser.currentScene.createNode("Shape");
Shape49.USE = "SiteShape";
Transform48.child = new undefined();

Transform48.child[0] = Shape49;

HAnimSite47.children = new MFNode();

HAnimSite47.children[0] = Transform48;

HAnimSegment43.children[2] = HAnimSite47;

HAnimJoint42.children = new MFNode();

HAnimJoint42.children[0] = HAnimSegment43;

let HAnimJoint50 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint50.name = "l_thigh";
HAnimJoint50.DEF = "hanim_l_thigh";
HAnimJoint50.center = new SFVec3f(new float[0.0945,-0.1202,0.8181]);
HAnimJoint50.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint50.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment51 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment51.name = "SEGMENT_FOR_l_thigh";
HAnimSegment51.DEF = "hanim_SEGMENT_FOR_l_thigh";
let TouchSensor52 = browser.currentScene.createNode("TouchSensor");
TouchSensor52.description = "joint l_thigh segment SEGMENT_FOR_l_thigh";
HAnimSegment51.children = new MFNode();

HAnimSegment51.children[0] = TouchSensor52;

let Transform53 = browser.currentScene.createNode("Transform");
Transform53.translation = new SFVec3f(new float[0.0945,-0.1202,0.8181]);
let Shape54 = browser.currentScene.createNode("Shape");
Shape54.USE = "JointShape";
Transform53.child = new undefined();

Transform53.child[0] = Shape54;

HAnimSegment51.children[1] = Transform53;

let HAnimSite55 = browser.currentScene.createNode("HAnimSite");
HAnimSite55.name = "SEGMENT_FOR_l_thigh_tip";
HAnimSite55.DEF = "hanim_SEGMENT_FOR_l_thigh_tip";
let Transform56 = browser.currentScene.createNode("Transform");
Transform56.translation = new SFVec3f(new float[0.0945,-0.1202,0.8181]);
let Shape57 = browser.currentScene.createNode("Shape");
Shape57.USE = "SiteShape";
Transform56.child = new undefined();

Transform56.child[0] = Shape57;

HAnimSite55.children = new MFNode();

HAnimSite55.children[0] = Transform56;

HAnimSegment51.children[2] = HAnimSite55;

HAnimJoint50.children = new MFNode();

HAnimJoint50.children[0] = HAnimSegment51;

let HAnimJoint58 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint58.name = "l_calf";
HAnimJoint58.DEF = "hanim_l_calf";
HAnimJoint58.center = new SFVec3f(new float[0.0924,-0.1213,0.4003]);
HAnimJoint58.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint58.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment59 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment59.name = "SEGMENT_FOR_l_calf";
HAnimSegment59.DEF = "hanim_SEGMENT_FOR_l_calf";
let TouchSensor60 = browser.currentScene.createNode("TouchSensor");
TouchSensor60.description = "joint l_calf segment SEGMENT_FOR_l_calf";
HAnimSegment59.children = new MFNode();

HAnimSegment59.children[0] = TouchSensor60;

let Transform61 = browser.currentScene.createNode("Transform");
Transform61.translation = new SFVec3f(new float[0.0924,-0.1213,0.4003]);
let Shape62 = browser.currentScene.createNode("Shape");
Shape62.USE = "JointShape";
Transform61.child = new undefined();

Transform61.child[0] = Shape62;

HAnimSegment59.children[1] = Transform61;

let HAnimSite63 = browser.currentScene.createNode("HAnimSite");
HAnimSite63.name = "SEGMENT_FOR_l_calf_tip";
HAnimSite63.DEF = "hanim_SEGMENT_FOR_l_calf_tip";
let Transform64 = browser.currentScene.createNode("Transform");
Transform64.translation = new SFVec3f(new float[0.0924,-0.1213,0.4003]);
let Shape65 = browser.currentScene.createNode("Shape");
Shape65.USE = "SiteShape";
Transform64.child = new undefined();

Transform64.child[0] = Shape65;

HAnimSite63.children = new MFNode();

HAnimSite63.children[0] = Transform64;

HAnimSegment59.children[2] = HAnimSite63;

HAnimJoint58.children = new MFNode();

HAnimJoint58.children[0] = HAnimSegment59;

let HAnimJoint66 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint66.name = "l_talus";
HAnimJoint66.DEF = "hanim_l_talus";
HAnimJoint66.center = new SFVec3f(new float[0.0886,-0.1123,0.0869]);
HAnimJoint66.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint66.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment67 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment67.name = "SEGMENT_FOR_l_talus";
HAnimSegment67.DEF = "hanim_SEGMENT_FOR_l_talus";
let TouchSensor68 = browser.currentScene.createNode("TouchSensor");
TouchSensor68.description = "joint l_talus segment SEGMENT_FOR_l_talus";
HAnimSegment67.children = new MFNode();

HAnimSegment67.children[0] = TouchSensor68;

let Transform69 = browser.currentScene.createNode("Transform");
Transform69.translation = new SFVec3f(new float[0.0886,-0.1123,0.0869]);
let Shape70 = browser.currentScene.createNode("Shape");
Shape70.USE = "JointShape";
Transform69.child = new undefined();

Transform69.child[0] = Shape70;

HAnimSegment67.children[1] = Transform69;

let HAnimSite71 = browser.currentScene.createNode("HAnimSite");
HAnimSite71.name = "SEGMENT_FOR_l_talus_tip";
HAnimSite71.DEF = "hanim_SEGMENT_FOR_l_talus_tip";
let Transform72 = browser.currentScene.createNode("Transform");
Transform72.translation = new SFVec3f(new float[0.0886,-0.1123,0.0869]);
let Shape73 = browser.currentScene.createNode("Shape");
Shape73.USE = "SiteShape";
Transform72.child = new undefined();

Transform72.child[0] = Shape73;

HAnimSite71.children = new MFNode();

HAnimSite71.children[0] = Transform72;

HAnimSegment67.children[2] = HAnimSite71;

HAnimJoint66.children = new MFNode();

HAnimJoint66.children[0] = HAnimSegment67;

let HAnimJoint74 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint74.name = "l_navicular";
HAnimJoint74.DEF = "hanim_l_navicular";
HAnimJoint74.center = new SFVec3f(new float[0.0781,-0.097,0.0283]);
HAnimJoint74.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint74.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment75 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment75.name = "SEGMENT_FOR_l_navicular";
HAnimSegment75.DEF = "hanim_SEGMENT_FOR_l_navicular";
let TouchSensor76 = browser.currentScene.createNode("TouchSensor");
TouchSensor76.description = "joint l_navicular segment SEGMENT_FOR_l_navicular";
HAnimSegment75.children = new MFNode();

HAnimSegment75.children[0] = TouchSensor76;

let Transform77 = browser.currentScene.createNode("Transform");
Transform77.translation = new SFVec3f(new float[0.0781,-0.097,0.0283]);
let Shape78 = browser.currentScene.createNode("Shape");
Shape78.USE = "JointShape";
Transform77.child = new undefined();

Transform77.child[0] = Shape78;

HAnimSegment75.children[1] = Transform77;

let HAnimSite79 = browser.currentScene.createNode("HAnimSite");
HAnimSite79.name = "SEGMENT_FOR_l_navicular_tip";
HAnimSite79.DEF = "hanim_SEGMENT_FOR_l_navicular_tip";
let Transform80 = browser.currentScene.createNode("Transform");
Transform80.translation = new SFVec3f(new float[0.0781,-0.097,0.0283]);
let Shape81 = browser.currentScene.createNode("Shape");
Shape81.USE = "SiteShape";
Transform80.child = new undefined();

Transform80.child[0] = Shape81;

HAnimSite79.children = new MFNode();

HAnimSite79.children[0] = Transform80;

HAnimSegment75.children[2] = HAnimSite79;

HAnimJoint74.children = new MFNode();

HAnimJoint74.children[0] = HAnimSegment75;

let HAnimJoint82 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint82.name = "l_cuneiform_1";
HAnimJoint82.DEF = "hanim_l_cuneiform_1";
HAnimJoint82.center = new SFVec3f(new float[0.0672,-0.0835,0.0235]);
HAnimJoint82.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint82.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment83 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment83.name = "SEGMENT_FOR_l_cuneiform_1";
HAnimSegment83.DEF = "hanim_SEGMENT_FOR_l_cuneiform_1";
let TouchSensor84 = browser.currentScene.createNode("TouchSensor");
TouchSensor84.description = "joint l_cuneiform_1 segment SEGMENT_FOR_l_cuneiform_1";
HAnimSegment83.children = new MFNode();

HAnimSegment83.children[0] = TouchSensor84;

let Transform85 = browser.currentScene.createNode("Transform");
Transform85.translation = new SFVec3f(new float[0.0672,-0.0835,0.0235]);
let Shape86 = browser.currentScene.createNode("Shape");
Shape86.USE = "JointShape";
Transform85.child = new undefined();

Transform85.child[0] = Shape86;

HAnimSegment83.children[1] = Transform85;

let HAnimSite87 = browser.currentScene.createNode("HAnimSite");
HAnimSite87.name = "SEGMENT_FOR_l_cuneiform_1_tip";
HAnimSite87.DEF = "hanim_SEGMENT_FOR_l_cuneiform_1_tip";
let Transform88 = browser.currentScene.createNode("Transform");
Transform88.translation = new SFVec3f(new float[0.0672,-0.0835,0.0235]);
let Shape89 = browser.currentScene.createNode("Shape");
Shape89.USE = "SiteShape";
Transform88.child = new undefined();

Transform88.child[0] = Shape89;

HAnimSite87.children = new MFNode();

HAnimSite87.children[0] = Transform88;

HAnimSegment83.children[2] = HAnimSite87;

HAnimJoint82.children = new MFNode();

HAnimJoint82.children[0] = HAnimSegment83;

let HAnimJoint90 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint90.name = "l_metatarsal_1";
HAnimJoint90.DEF = "hanim_l_metatarsal_1";
HAnimJoint90.center = new SFVec3f(new float[0.0644,-0.0577,0.0147]);
HAnimJoint90.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint90.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment91 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment91.name = "SEGMENT_FOR_l_metatarsal_1";
HAnimSegment91.DEF = "hanim_SEGMENT_FOR_l_metatarsal_1";
let TouchSensor92 = browser.currentScene.createNode("TouchSensor");
TouchSensor92.description = "joint l_metatarsal_1 segment SEGMENT_FOR_l_metatarsal_1";
HAnimSegment91.children = new MFNode();

HAnimSegment91.children[0] = TouchSensor92;

let Transform93 = browser.currentScene.createNode("Transform");
Transform93.translation = new SFVec3f(new float[0.0644,-0.0577,0.0147]);
let Shape94 = browser.currentScene.createNode("Shape");
Shape94.USE = "JointShape";
Transform93.child = new undefined();

Transform93.child[0] = Shape94;

HAnimSegment91.children[1] = Transform93;

let HAnimSite95 = browser.currentScene.createNode("HAnimSite");
HAnimSite95.name = "SEGMENT_FOR_l_metatarsal_1_tip";
HAnimSite95.DEF = "hanim_SEGMENT_FOR_l_metatarsal_1_tip";
let Transform96 = browser.currentScene.createNode("Transform");
Transform96.translation = new SFVec3f(new float[0.0644,-0.0577,0.0147]);
let Shape97 = browser.currentScene.createNode("Shape");
Shape97.USE = "SiteShape";
Transform96.child = new undefined();

Transform96.child[0] = Shape97;

HAnimSite95.children = new MFNode();

HAnimSite95.children[0] = Transform96;

HAnimSegment91.children[2] = HAnimSite95;

HAnimJoint90.children = new MFNode();

HAnimJoint90.children[0] = HAnimSegment91;

let HAnimJoint98 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint98.name = "l_tarsal_proximal_phalanx_1";
HAnimJoint98.DEF = "hanim_l_tarsal_proximal_phalanx_1";
HAnimJoint98.center = new SFVec3f(new float[0.0619,-0.0083,0.0059]);
HAnimJoint98.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint98.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment99 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment99.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_1";
HAnimSegment99.DEF = "hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_1";
let TouchSensor100 = browser.currentScene.createNode("TouchSensor");
TouchSensor100.description = "joint l_tarsal_proximal_phalanx_1 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_1";
HAnimSegment99.children = new MFNode();

HAnimSegment99.children[0] = TouchSensor100;

let Transform101 = browser.currentScene.createNode("Transform");
Transform101.translation = new SFVec3f(new float[0.0619,-0.0083,0.0059]);
let Shape102 = browser.currentScene.createNode("Shape");
Shape102.USE = "JointShape";
Transform101.child = new undefined();

Transform101.child[0] = Shape102;

HAnimSegment99.children[1] = Transform101;

let HAnimSite103 = browser.currentScene.createNode("HAnimSite");
HAnimSite103.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_1_tip";
HAnimSite103.DEF = "hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_1_tip";
let Transform104 = browser.currentScene.createNode("Transform");
Transform104.translation = new SFVec3f(new float[0.0619,-0.0083,0.0059]);
let Shape105 = browser.currentScene.createNode("Shape");
Shape105.USE = "SiteShape";
Transform104.child = new undefined();

Transform104.child[0] = Shape105;

HAnimSite103.children = new MFNode();

HAnimSite103.children[0] = Transform104;

HAnimSegment99.children[2] = HAnimSite103;

HAnimJoint98.children = new MFNode();

HAnimJoint98.children[0] = HAnimSegment99;

let HAnimJoint106 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint106.name = "l_tarsal_distal_phalanx_1";
HAnimJoint106.DEF = "hanim_l_tarsal_distal_phalanx_1";
HAnimJoint106.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint106.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment107 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment107.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_1";
HAnimSegment107.DEF = "hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_1";
let TouchSensor108 = browser.currentScene.createNode("TouchSensor");
TouchSensor108.description = "joint l_tarsal_distal_phalanx_1 segment SEGMENT_FOR_l_tarsal_distal_phalanx_1";
HAnimSegment107.children = new MFNode();

HAnimSegment107.children[0] = TouchSensor108;

let Transform109 = browser.currentScene.createNode("Transform");
let Shape110 = browser.currentScene.createNode("Shape");
Shape110.USE = "JointShape";
Transform109.child = new undefined();

Transform109.child[0] = Shape110;

HAnimSegment107.children[1] = Transform109;

let HAnimSite111 = browser.currentScene.createNode("HAnimSite");
HAnimSite111.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_1_tip";
HAnimSite111.DEF = "hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_1_tip";
let Transform112 = browser.currentScene.createNode("Transform");
let Shape113 = browser.currentScene.createNode("Shape");
Shape113.USE = "SiteShape";
Transform112.child = new undefined();

Transform112.child[0] = Shape113;

HAnimSite111.children = new MFNode();

HAnimSite111.children[0] = Transform112;

HAnimSegment107.children[2] = HAnimSite111;

HAnimJoint106.children = new MFNode();

HAnimJoint106.children[0] = HAnimSegment107;

HAnimJoint98.children[1] = HAnimJoint106;

HAnimJoint90.children[1] = HAnimJoint98;

HAnimJoint82.children[1] = HAnimJoint90;

HAnimJoint74.children[1] = HAnimJoint82;

let HAnimJoint114 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint114.name = "l_cuneiform_2";
HAnimJoint114.DEF = "hanim_l_cuneiform_2";
HAnimJoint114.center = new SFVec3f(new float[0.0812,-0.0805,0.025]);
HAnimJoint114.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint114.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment115 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment115.name = "SEGMENT_FOR_l_cuneiform_2";
HAnimSegment115.DEF = "hanim_SEGMENT_FOR_l_cuneiform_2";
let TouchSensor116 = browser.currentScene.createNode("TouchSensor");
TouchSensor116.description = "joint l_cuneiform_2 segment SEGMENT_FOR_l_cuneiform_2";
HAnimSegment115.children = new MFNode();

HAnimSegment115.children[0] = TouchSensor116;

let Transform117 = browser.currentScene.createNode("Transform");
Transform117.translation = new SFVec3f(new float[0.0812,-0.0805,0.025]);
let Shape118 = browser.currentScene.createNode("Shape");
Shape118.USE = "JointShape";
Transform117.child = new undefined();

Transform117.child[0] = Shape118;

HAnimSegment115.children[1] = Transform117;

let HAnimSite119 = browser.currentScene.createNode("HAnimSite");
HAnimSite119.name = "SEGMENT_FOR_l_cuneiform_2_tip";
HAnimSite119.DEF = "hanim_SEGMENT_FOR_l_cuneiform_2_tip";
let Transform120 = browser.currentScene.createNode("Transform");
Transform120.translation = new SFVec3f(new float[0.0812,-0.0805,0.025]);
let Shape121 = browser.currentScene.createNode("Shape");
Shape121.USE = "SiteShape";
Transform120.child = new undefined();

Transform120.child[0] = Shape121;

HAnimSite119.children = new MFNode();

HAnimSite119.children[0] = Transform120;

HAnimSegment115.children[2] = HAnimSite119;

HAnimJoint114.children = new MFNode();

HAnimJoint114.children[0] = HAnimSegment115;

let HAnimJoint122 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint122.name = "l_metatarsal_2";
HAnimJoint122.DEF = "hanim_l_metatarsal_2";
HAnimJoint122.center = new SFVec3f(new float[0.08,-0.0608,0.0175]);
HAnimJoint122.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint122.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment123 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment123.name = "SEGMENT_FOR_l_metatarsal_2";
HAnimSegment123.DEF = "hanim_SEGMENT_FOR_l_metatarsal_2";
let TouchSensor124 = browser.currentScene.createNode("TouchSensor");
TouchSensor124.description = "joint l_metatarsal_2 segment SEGMENT_FOR_l_metatarsal_2";
HAnimSegment123.children = new MFNode();

HAnimSegment123.children[0] = TouchSensor124;

let Transform125 = browser.currentScene.createNode("Transform");
Transform125.translation = new SFVec3f(new float[0.08,-0.0608,0.0175]);
let Shape126 = browser.currentScene.createNode("Shape");
Shape126.USE = "JointShape";
Transform125.child = new undefined();

Transform125.child[0] = Shape126;

HAnimSegment123.children[1] = Transform125;

let HAnimSite127 = browser.currentScene.createNode("HAnimSite");
HAnimSite127.name = "SEGMENT_FOR_l_metatarsal_2_tip";
HAnimSite127.DEF = "hanim_SEGMENT_FOR_l_metatarsal_2_tip";
let Transform128 = browser.currentScene.createNode("Transform");
Transform128.translation = new SFVec3f(new float[0.08,-0.0608,0.0175]);
let Shape129 = browser.currentScene.createNode("Shape");
Shape129.USE = "SiteShape";
Transform128.child = new undefined();

Transform128.child[0] = Shape129;

HAnimSite127.children = new MFNode();

HAnimSite127.children[0] = Transform128;

HAnimSegment123.children[2] = HAnimSite127;

HAnimJoint122.children = new MFNode();

HAnimJoint122.children[0] = HAnimSegment123;

let HAnimJoint130 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint130.name = "l_tarsal_proximal_phalanx_2";
HAnimJoint130.DEF = "hanim_l_tarsal_proximal_phalanx_2";
HAnimJoint130.center = new SFVec3f(new float[0.0824,-0.004,0.0064]);
HAnimJoint130.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint130.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment131 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment131.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_2";
HAnimSegment131.DEF = "hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_2";
let TouchSensor132 = browser.currentScene.createNode("TouchSensor");
TouchSensor132.description = "joint l_tarsal_proximal_phalanx_2 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_2";
HAnimSegment131.children = new MFNode();

HAnimSegment131.children[0] = TouchSensor132;

let Transform133 = browser.currentScene.createNode("Transform");
Transform133.translation = new SFVec3f(new float[0.0824,-0.004,0.0064]);
let Shape134 = browser.currentScene.createNode("Shape");
Shape134.USE = "JointShape";
Transform133.child = new undefined();

Transform133.child[0] = Shape134;

HAnimSegment131.children[1] = Transform133;

let HAnimSite135 = browser.currentScene.createNode("HAnimSite");
HAnimSite135.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_2_tip";
HAnimSite135.DEF = "hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_2_tip";
let Transform136 = browser.currentScene.createNode("Transform");
Transform136.translation = new SFVec3f(new float[0.0824,-0.004,0.0064]);
let Shape137 = browser.currentScene.createNode("Shape");
Shape137.USE = "SiteShape";
Transform136.child = new undefined();

Transform136.child[0] = Shape137;

HAnimSite135.children = new MFNode();

HAnimSite135.children[0] = Transform136;

HAnimSegment131.children[2] = HAnimSite135;

HAnimJoint130.children = new MFNode();

HAnimJoint130.children[0] = HAnimSegment131;

let HAnimJoint138 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint138.name = "l_tarsal_middle_phalanx_2";
HAnimJoint138.DEF = "hanim_l_tarsal_middle_phalanx_2";
HAnimJoint138.center = new SFVec3f(new float[0.0841,0.0121,0.0041]);
HAnimJoint138.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint138.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment139 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment139.name = "SEGMENT_FOR_l_tarsal_middle_phalanx_2";
HAnimSegment139.DEF = "hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_2";
let TouchSensor140 = browser.currentScene.createNode("TouchSensor");
TouchSensor140.description = "joint l_tarsal_middle_phalanx_2 segment SEGMENT_FOR_l_tarsal_middle_phalanx_2";
HAnimSegment139.children = new MFNode();

HAnimSegment139.children[0] = TouchSensor140;

let Transform141 = browser.currentScene.createNode("Transform");
Transform141.translation = new SFVec3f(new float[0.0841,0.0121,0.0041]);
let Shape142 = browser.currentScene.createNode("Shape");
Shape142.USE = "JointShape";
Transform141.child = new undefined();

Transform141.child[0] = Shape142;

HAnimSegment139.children[1] = Transform141;

let HAnimSite143 = browser.currentScene.createNode("HAnimSite");
HAnimSite143.name = "SEGMENT_FOR_l_tarsal_middle_phalanx_2_tip";
HAnimSite143.DEF = "hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_2_tip";
let Transform144 = browser.currentScene.createNode("Transform");
Transform144.translation = new SFVec3f(new float[0.0841,0.0121,0.0041]);
let Shape145 = browser.currentScene.createNode("Shape");
Shape145.USE = "SiteShape";
Transform144.child = new undefined();

Transform144.child[0] = Shape145;

HAnimSite143.children = new MFNode();

HAnimSite143.children[0] = Transform144;

HAnimSegment139.children[2] = HAnimSite143;

HAnimJoint138.children = new MFNode();

HAnimJoint138.children[0] = HAnimSegment139;

let HAnimJoint146 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint146.name = "l_tarsal_distal_phalanx_2";
HAnimJoint146.DEF = "hanim_l_tarsal_distal_phalanx_2";
HAnimJoint146.center = new SFVec3f(new float[0.0841,0.0216,0.0013]);
HAnimJoint146.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint146.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment147 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment147.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_2";
HAnimSegment147.DEF = "hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_2";
let TouchSensor148 = browser.currentScene.createNode("TouchSensor");
TouchSensor148.description = "joint l_tarsal_distal_phalanx_2 segment SEGMENT_FOR_l_tarsal_distal_phalanx_2";
HAnimSegment147.children = new MFNode();

HAnimSegment147.children[0] = TouchSensor148;

let Transform149 = browser.currentScene.createNode("Transform");
Transform149.translation = new SFVec3f(new float[0.0841,0.0216,0.0013]);
let Shape150 = browser.currentScene.createNode("Shape");
Shape150.USE = "JointShape";
Transform149.child = new undefined();

Transform149.child[0] = Shape150;

HAnimSegment147.children[1] = Transform149;

let HAnimSite151 = browser.currentScene.createNode("HAnimSite");
HAnimSite151.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_2_tip";
HAnimSite151.DEF = "hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_2_tip";
let Transform152 = browser.currentScene.createNode("Transform");
Transform152.translation = new SFVec3f(new float[0.0841,0.0216,0.0013]);
let Shape153 = browser.currentScene.createNode("Shape");
Shape153.USE = "SiteShape";
Transform152.child = new undefined();

Transform152.child[0] = Shape153;

HAnimSite151.children = new MFNode();

HAnimSite151.children[0] = Transform152;

HAnimSegment147.children[2] = HAnimSite151;

HAnimJoint146.children = new MFNode();

HAnimJoint146.children[0] = HAnimSegment147;

HAnimJoint138.children[1] = HAnimJoint146;

HAnimJoint130.children[1] = HAnimJoint138;

HAnimJoint122.children[1] = HAnimJoint130;

HAnimJoint114.children[1] = HAnimJoint122;

HAnimJoint74.children[2] = HAnimJoint114;

let HAnimJoint154 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint154.name = "l_cuneiform_3";
HAnimJoint154.DEF = "hanim_l_cuneiform_3";
HAnimJoint154.center = new SFVec3f(new float[0.0928,-0.0821,0.0248]);
HAnimJoint154.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint154.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment155 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment155.name = "SEGMENT_FOR_l_cuneiform_3";
HAnimSegment155.DEF = "hanim_SEGMENT_FOR_l_cuneiform_3";
let TouchSensor156 = browser.currentScene.createNode("TouchSensor");
TouchSensor156.description = "joint l_cuneiform_3 segment SEGMENT_FOR_l_cuneiform_3";
HAnimSegment155.children = new MFNode();

HAnimSegment155.children[0] = TouchSensor156;

let Transform157 = browser.currentScene.createNode("Transform");
Transform157.translation = new SFVec3f(new float[0.0928,-0.0821,0.0248]);
let Shape158 = browser.currentScene.createNode("Shape");
Shape158.USE = "JointShape";
Transform157.child = new undefined();

Transform157.child[0] = Shape158;

HAnimSegment155.children[1] = Transform157;

let HAnimSite159 = browser.currentScene.createNode("HAnimSite");
HAnimSite159.name = "SEGMENT_FOR_l_cuneiform_3_tip";
HAnimSite159.DEF = "hanim_SEGMENT_FOR_l_cuneiform_3_tip";
let Transform160 = browser.currentScene.createNode("Transform");
Transform160.translation = new SFVec3f(new float[0.0928,-0.0821,0.0248]);
let Shape161 = browser.currentScene.createNode("Shape");
Shape161.USE = "SiteShape";
Transform160.child = new undefined();

Transform160.child[0] = Shape161;

HAnimSite159.children = new MFNode();

HAnimSite159.children[0] = Transform160;

HAnimSegment155.children[2] = HAnimSite159;

HAnimJoint154.children = new MFNode();

HAnimJoint154.children[0] = HAnimSegment155;

let HAnimJoint162 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint162.name = "l_metatarsal_3";
HAnimJoint162.DEF = "hanim_l_metatarsal_3";
HAnimJoint162.center = new SFVec3f(new float[0.0944,-0.0625,0.0175]);
HAnimJoint162.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint162.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment163 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment163.name = "SEGMENT_FOR_l_metatarsal_3";
HAnimSegment163.DEF = "hanim_SEGMENT_FOR_l_metatarsal_3";
let TouchSensor164 = browser.currentScene.createNode("TouchSensor");
TouchSensor164.description = "joint l_metatarsal_3 segment SEGMENT_FOR_l_metatarsal_3";
HAnimSegment163.children = new MFNode();

HAnimSegment163.children[0] = TouchSensor164;

let Transform165 = browser.currentScene.createNode("Transform");
Transform165.translation = new SFVec3f(new float[0.0944,-0.0625,0.0175]);
let Shape166 = browser.currentScene.createNode("Shape");
Shape166.USE = "JointShape";
Transform165.child = new undefined();

Transform165.child[0] = Shape166;

HAnimSegment163.children[1] = Transform165;

let HAnimSite167 = browser.currentScene.createNode("HAnimSite");
HAnimSite167.name = "SEGMENT_FOR_l_metatarsal_3_tip";
HAnimSite167.DEF = "hanim_SEGMENT_FOR_l_metatarsal_3_tip";
let Transform168 = browser.currentScene.createNode("Transform");
Transform168.translation = new SFVec3f(new float[0.0944,-0.0625,0.0175]);
let Shape169 = browser.currentScene.createNode("Shape");
Shape169.USE = "SiteShape";
Transform168.child = new undefined();

Transform168.child[0] = Shape169;

HAnimSite167.children = new MFNode();

HAnimSite167.children[0] = Transform168;

HAnimSegment163.children[2] = HAnimSite167;

HAnimJoint162.children = new MFNode();

HAnimJoint162.children[0] = HAnimSegment163;

let HAnimJoint170 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint170.name = "l_tarsal_proximal_phalanx_3";
HAnimJoint170.DEF = "hanim_l_tarsal_proximal_phalanx_3";
HAnimJoint170.center = new SFVec3f(new float[0.0963,-0.0065,0.0065]);
HAnimJoint170.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint170.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment171 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment171.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_3";
HAnimSegment171.DEF = "hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_3";
let TouchSensor172 = browser.currentScene.createNode("TouchSensor");
TouchSensor172.description = "joint l_tarsal_proximal_phalanx_3 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_3";
HAnimSegment171.children = new MFNode();

HAnimSegment171.children[0] = TouchSensor172;

let Transform173 = browser.currentScene.createNode("Transform");
Transform173.translation = new SFVec3f(new float[0.0963,-0.0065,0.0065]);
let Shape174 = browser.currentScene.createNode("Shape");
Shape174.USE = "JointShape";
Transform173.child = new undefined();

Transform173.child[0] = Shape174;

HAnimSegment171.children[1] = Transform173;

let HAnimSite175 = browser.currentScene.createNode("HAnimSite");
HAnimSite175.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_3_tip";
HAnimSite175.DEF = "hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_3_tip";
let Transform176 = browser.currentScene.createNode("Transform");
Transform176.translation = new SFVec3f(new float[0.0963,-0.0065,0.0065]);
let Shape177 = browser.currentScene.createNode("Shape");
Shape177.USE = "SiteShape";
Transform176.child = new undefined();

Transform176.child[0] = Shape177;

HAnimSite175.children = new MFNode();

HAnimSite175.children[0] = Transform176;

HAnimSegment171.children[2] = HAnimSite175;

HAnimJoint170.children = new MFNode();

HAnimJoint170.children[0] = HAnimSegment171;

let HAnimJoint178 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint178.name = "l_tarsal_middle_phalanx_3";
HAnimJoint178.DEF = "hanim_l_tarsal_middle_phalanx_3";
HAnimJoint178.center = new SFVec3f(new float[0.0987,0.0086,0.0034]);
HAnimJoint178.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint178.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment179 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment179.name = "SEGMENT_FOR_l_tarsal_middle_phalanx_3";
HAnimSegment179.DEF = "hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_3";
let TouchSensor180 = browser.currentScene.createNode("TouchSensor");
TouchSensor180.description = "joint l_tarsal_middle_phalanx_3 segment SEGMENT_FOR_l_tarsal_middle_phalanx_3";
HAnimSegment179.children = new MFNode();

HAnimSegment179.children[0] = TouchSensor180;

let Transform181 = browser.currentScene.createNode("Transform");
Transform181.translation = new SFVec3f(new float[0.0987,0.0086,0.0034]);
let Shape182 = browser.currentScene.createNode("Shape");
Shape182.USE = "JointShape";
Transform181.child = new undefined();

Transform181.child[0] = Shape182;

HAnimSegment179.children[1] = Transform181;

let HAnimSite183 = browser.currentScene.createNode("HAnimSite");
HAnimSite183.name = "SEGMENT_FOR_l_tarsal_middle_phalanx_3_tip";
HAnimSite183.DEF = "hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_3_tip";
let Transform184 = browser.currentScene.createNode("Transform");
Transform184.translation = new SFVec3f(new float[0.0987,0.0086,0.0034]);
let Shape185 = browser.currentScene.createNode("Shape");
Shape185.USE = "SiteShape";
Transform184.child = new undefined();

Transform184.child[0] = Shape185;

HAnimSite183.children = new MFNode();

HAnimSite183.children[0] = Transform184;

HAnimSegment179.children[2] = HAnimSite183;

HAnimJoint178.children = new MFNode();

HAnimJoint178.children[0] = HAnimSegment179;

let HAnimJoint186 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint186.name = "l_tarsal_distal_phalanx_3";
HAnimJoint186.DEF = "hanim_l_tarsal_distal_phalanx_3";
HAnimJoint186.center = new SFVec3f(new float[0.1002,0.0178,0.0013]);
HAnimJoint186.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint186.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment187 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment187.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_3";
HAnimSegment187.DEF = "hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_3";
let TouchSensor188 = browser.currentScene.createNode("TouchSensor");
TouchSensor188.description = "joint l_tarsal_distal_phalanx_3 segment SEGMENT_FOR_l_tarsal_distal_phalanx_3";
HAnimSegment187.children = new MFNode();

HAnimSegment187.children[0] = TouchSensor188;

let Transform189 = browser.currentScene.createNode("Transform");
Transform189.translation = new SFVec3f(new float[0.1002,0.0178,0.0013]);
let Shape190 = browser.currentScene.createNode("Shape");
Shape190.USE = "JointShape";
Transform189.child = new undefined();

Transform189.child[0] = Shape190;

HAnimSegment187.children[1] = Transform189;

let HAnimSite191 = browser.currentScene.createNode("HAnimSite");
HAnimSite191.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_3_tip";
HAnimSite191.DEF = "hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_3_tip";
let Transform192 = browser.currentScene.createNode("Transform");
Transform192.translation = new SFVec3f(new float[0.1002,0.0178,0.0013]);
let Shape193 = browser.currentScene.createNode("Shape");
Shape193.USE = "SiteShape";
Transform192.child = new undefined();

Transform192.child[0] = Shape193;

HAnimSite191.children = new MFNode();

HAnimSite191.children[0] = Transform192;

HAnimSegment187.children[2] = HAnimSite191;

HAnimJoint186.children = new MFNode();

HAnimJoint186.children[0] = HAnimSegment187;

HAnimJoint178.children[1] = HAnimJoint186;

HAnimJoint170.children[1] = HAnimJoint178;

HAnimJoint162.children[1] = HAnimJoint170;

HAnimJoint154.children[1] = HAnimJoint162;

HAnimJoint74.children[3] = HAnimJoint154;

HAnimJoint66.children[1] = HAnimJoint74;

let HAnimJoint194 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint194.name = "l_calcaneus";
HAnimJoint194.DEF = "hanim_l_calcaneus";
HAnimJoint194.center = new SFVec3f(new float[0.0889,-0.1278,0.0494]);
HAnimJoint194.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint194.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment195 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment195.name = "SEGMENT_FOR_l_calcaneus";
HAnimSegment195.DEF = "hanim_SEGMENT_FOR_l_calcaneus";
let TouchSensor196 = browser.currentScene.createNode("TouchSensor");
TouchSensor196.description = "joint l_calcaneus segment SEGMENT_FOR_l_calcaneus";
HAnimSegment195.children = new MFNode();

HAnimSegment195.children[0] = TouchSensor196;

let Transform197 = browser.currentScene.createNode("Transform");
Transform197.translation = new SFVec3f(new float[0.0889,-0.1278,0.0494]);
let Shape198 = browser.currentScene.createNode("Shape");
Shape198.USE = "JointShape";
Transform197.child = new undefined();

Transform197.child[0] = Shape198;

HAnimSegment195.children[1] = Transform197;

let HAnimSite199 = browser.currentScene.createNode("HAnimSite");
HAnimSite199.name = "SEGMENT_FOR_l_calcaneus_tip";
HAnimSite199.DEF = "hanim_SEGMENT_FOR_l_calcaneus_tip";
let Transform200 = browser.currentScene.createNode("Transform");
Transform200.translation = new SFVec3f(new float[0.0889,-0.1278,0.0494]);
let Shape201 = browser.currentScene.createNode("Shape");
Shape201.USE = "SiteShape";
Transform200.child = new undefined();

Transform200.child[0] = Shape201;

HAnimSite199.children = new MFNode();

HAnimSite199.children[0] = Transform200;

HAnimSegment195.children[2] = HAnimSite199;

HAnimJoint194.children = new MFNode();

HAnimJoint194.children[0] = HAnimSegment195;

let HAnimJoint202 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint202.name = "l_cuboid";
HAnimJoint202.DEF = "hanim_l_cuboid";
HAnimJoint202.center = new SFVec3f(new float[0.1105,-0.0998,0.0267]);
HAnimJoint202.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint202.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment203 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment203.name = "SEGMENT_FOR_l_cuboid";
HAnimSegment203.DEF = "hanim_SEGMENT_FOR_l_cuboid";
let TouchSensor204 = browser.currentScene.createNode("TouchSensor");
TouchSensor204.description = "joint l_cuboid segment SEGMENT_FOR_l_cuboid";
HAnimSegment203.children = new MFNode();

HAnimSegment203.children[0] = TouchSensor204;

let Transform205 = browser.currentScene.createNode("Transform");
Transform205.translation = new SFVec3f(new float[0.1105,-0.0998,0.0267]);
let Shape206 = browser.currentScene.createNode("Shape");
Shape206.USE = "JointShape";
Transform205.child = new undefined();

Transform205.child[0] = Shape206;

HAnimSegment203.children[1] = Transform205;

let HAnimSite207 = browser.currentScene.createNode("HAnimSite");
HAnimSite207.name = "SEGMENT_FOR_l_cuboid_tip";
HAnimSite207.DEF = "hanim_SEGMENT_FOR_l_cuboid_tip";
let Transform208 = browser.currentScene.createNode("Transform");
Transform208.translation = new SFVec3f(new float[0.1105,-0.0998,0.0267]);
let Shape209 = browser.currentScene.createNode("Shape");
Shape209.USE = "SiteShape";
Transform208.child = new undefined();

Transform208.child[0] = Shape209;

HAnimSite207.children = new MFNode();

HAnimSite207.children[0] = Transform208;

HAnimSegment203.children[2] = HAnimSite207;

HAnimJoint202.children = new MFNode();

HAnimJoint202.children[0] = HAnimSegment203;

let HAnimJoint210 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint210.name = "l_metatarsal_4";
HAnimJoint210.DEF = "hanim_l_metatarsal_4";
HAnimJoint210.center = new SFVec3f(new float[0.1063,-0.0634,0.016]);
HAnimJoint210.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint210.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment211 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment211.name = "SEGMENT_FOR_l_metatarsal_4";
HAnimSegment211.DEF = "hanim_SEGMENT_FOR_l_metatarsal_4";
let TouchSensor212 = browser.currentScene.createNode("TouchSensor");
TouchSensor212.description = "joint l_metatarsal_4 segment SEGMENT_FOR_l_metatarsal_4";
HAnimSegment211.children = new MFNode();

HAnimSegment211.children[0] = TouchSensor212;

let Transform213 = browser.currentScene.createNode("Transform");
Transform213.translation = new SFVec3f(new float[0.1063,-0.0634,0.016]);
let Shape214 = browser.currentScene.createNode("Shape");
Shape214.USE = "JointShape";
Transform213.child = new undefined();

Transform213.child[0] = Shape214;

HAnimSegment211.children[1] = Transform213;

let HAnimSite215 = browser.currentScene.createNode("HAnimSite");
HAnimSite215.name = "SEGMENT_FOR_l_metatarsal_4_tip";
HAnimSite215.DEF = "hanim_SEGMENT_FOR_l_metatarsal_4_tip";
let Transform216 = browser.currentScene.createNode("Transform");
Transform216.translation = new SFVec3f(new float[0.1063,-0.0634,0.016]);
let Shape217 = browser.currentScene.createNode("Shape");
Shape217.USE = "SiteShape";
Transform216.child = new undefined();

Transform216.child[0] = Shape217;

HAnimSite215.children = new MFNode();

HAnimSite215.children[0] = Transform216;

HAnimSegment211.children[2] = HAnimSite215;

HAnimJoint210.children = new MFNode();

HAnimJoint210.children[0] = HAnimSegment211;

let HAnimJoint218 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint218.name = "l_tarsal_proximal_phalanx_4";
HAnimJoint218.DEF = "hanim_l_tarsal_proximal_phalanx_4";
HAnimJoint218.center = new SFVec3f(new float[0.1097,-0.0107,0.0058]);
HAnimJoint218.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint218.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment219 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment219.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_4";
HAnimSegment219.DEF = "hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_4";
let TouchSensor220 = browser.currentScene.createNode("TouchSensor");
TouchSensor220.description = "joint l_tarsal_proximal_phalanx_4 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_4";
HAnimSegment219.children = new MFNode();

HAnimSegment219.children[0] = TouchSensor220;

let Transform221 = browser.currentScene.createNode("Transform");
Transform221.translation = new SFVec3f(new float[0.1097,-0.0107,0.0058]);
let Shape222 = browser.currentScene.createNode("Shape");
Shape222.USE = "JointShape";
Transform221.child = new undefined();

Transform221.child[0] = Shape222;

HAnimSegment219.children[1] = Transform221;

let HAnimSite223 = browser.currentScene.createNode("HAnimSite");
HAnimSite223.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_4_tip";
HAnimSite223.DEF = "hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_4_tip";
let Transform224 = browser.currentScene.createNode("Transform");
Transform224.translation = new SFVec3f(new float[0.1097,-0.0107,0.0058]);
let Shape225 = browser.currentScene.createNode("Shape");
Shape225.USE = "SiteShape";
Transform224.child = new undefined();

Transform224.child[0] = Shape225;

HAnimSite223.children = new MFNode();

HAnimSite223.children[0] = Transform224;

HAnimSegment219.children[2] = HAnimSite223;

HAnimJoint218.children = new MFNode();

HAnimJoint218.children[0] = HAnimSegment219;

let HAnimJoint226 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint226.name = "l_tarsal_middle_phalanx_4";
HAnimJoint226.DEF = "hanim_l_tarsal_middle_phalanx_4";
HAnimJoint226.center = new SFVec3f(new float[0.114,0.0044,0.0037]);
HAnimJoint226.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint226.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment227 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment227.name = "SEGMENT_FOR_l_tarsal_middle_phalanx_4";
HAnimSegment227.DEF = "hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_4";
let TouchSensor228 = browser.currentScene.createNode("TouchSensor");
TouchSensor228.description = "joint l_tarsal_middle_phalanx_4 segment SEGMENT_FOR_l_tarsal_middle_phalanx_4";
HAnimSegment227.children = new MFNode();

HAnimSegment227.children[0] = TouchSensor228;

let Transform229 = browser.currentScene.createNode("Transform");
Transform229.translation = new SFVec3f(new float[0.114,0.0044,0.0037]);
let Shape230 = browser.currentScene.createNode("Shape");
Shape230.USE = "JointShape";
Transform229.child = new undefined();

Transform229.child[0] = Shape230;

HAnimSegment227.children[1] = Transform229;

let HAnimSite231 = browser.currentScene.createNode("HAnimSite");
HAnimSite231.name = "SEGMENT_FOR_l_tarsal_middle_phalanx_4_tip";
HAnimSite231.DEF = "hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_4_tip";
let Transform232 = browser.currentScene.createNode("Transform");
Transform232.translation = new SFVec3f(new float[0.114,0.0044,0.0037]);
let Shape233 = browser.currentScene.createNode("Shape");
Shape233.USE = "SiteShape";
Transform232.child = new undefined();

Transform232.child[0] = Shape233;

HAnimSite231.children = new MFNode();

HAnimSite231.children[0] = Transform232;

HAnimSegment227.children[2] = HAnimSite231;

HAnimJoint226.children = new MFNode();

HAnimJoint226.children[0] = HAnimSegment227;

let HAnimJoint234 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint234.name = "l_tarsal_distal_phalanx_4";
HAnimJoint234.DEF = "hanim_l_tarsal_distal_phalanx_4";
HAnimJoint234.center = new SFVec3f(new float[0.1155,0.0118,0.0008]);
HAnimJoint234.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint234.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment235 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment235.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_4";
HAnimSegment235.DEF = "hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_4";
let TouchSensor236 = browser.currentScene.createNode("TouchSensor");
TouchSensor236.description = "joint l_tarsal_distal_phalanx_4 segment SEGMENT_FOR_l_tarsal_distal_phalanx_4";
HAnimSegment235.children = new MFNode();

HAnimSegment235.children[0] = TouchSensor236;

let Transform237 = browser.currentScene.createNode("Transform");
Transform237.translation = new SFVec3f(new float[0.1155,0.0118,0.0008]);
let Shape238 = browser.currentScene.createNode("Shape");
Shape238.USE = "JointShape";
Transform237.child = new undefined();

Transform237.child[0] = Shape238;

HAnimSegment235.children[1] = Transform237;

let HAnimSite239 = browser.currentScene.createNode("HAnimSite");
HAnimSite239.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_4_tip";
HAnimSite239.DEF = "hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_4_tip";
let Transform240 = browser.currentScene.createNode("Transform");
Transform240.translation = new SFVec3f(new float[0.1155,0.0118,0.0008]);
let Shape241 = browser.currentScene.createNode("Shape");
Shape241.USE = "SiteShape";
Transform240.child = new undefined();

Transform240.child[0] = Shape241;

HAnimSite239.children = new MFNode();

HAnimSite239.children[0] = Transform240;

HAnimSegment235.children[2] = HAnimSite239;

HAnimJoint234.children = new MFNode();

HAnimJoint234.children[0] = HAnimSegment235;

HAnimJoint226.children[1] = HAnimJoint234;

HAnimJoint218.children[1] = HAnimJoint226;

HAnimJoint210.children[1] = HAnimJoint218;

HAnimJoint202.children[1] = HAnimJoint210;

let HAnimJoint242 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint242.name = "l_metatarsal_5";
HAnimJoint242.DEF = "hanim_l_metatarsal_5";
HAnimJoint242.center = new SFVec3f(new float[0.1206,-0.0671,0.0124]);
HAnimJoint242.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint242.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment243 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment243.name = "SEGMENT_FOR_l_metatarsal_5";
HAnimSegment243.DEF = "hanim_SEGMENT_FOR_l_metatarsal_5";
let TouchSensor244 = browser.currentScene.createNode("TouchSensor");
TouchSensor244.description = "joint l_metatarsal_5 segment SEGMENT_FOR_l_metatarsal_5";
HAnimSegment243.children = new MFNode();

HAnimSegment243.children[0] = TouchSensor244;

let Transform245 = browser.currentScene.createNode("Transform");
Transform245.translation = new SFVec3f(new float[0.1206,-0.0671,0.0124]);
let Shape246 = browser.currentScene.createNode("Shape");
Shape246.USE = "JointShape";
Transform245.child = new undefined();

Transform245.child[0] = Shape246;

HAnimSegment243.children[1] = Transform245;

let HAnimSite247 = browser.currentScene.createNode("HAnimSite");
HAnimSite247.name = "SEGMENT_FOR_l_metatarsal_5_tip";
HAnimSite247.DEF = "hanim_SEGMENT_FOR_l_metatarsal_5_tip";
let Transform248 = browser.currentScene.createNode("Transform");
Transform248.translation = new SFVec3f(new float[0.1206,-0.0671,0.0124]);
let Shape249 = browser.currentScene.createNode("Shape");
Shape249.USE = "SiteShape";
Transform248.child = new undefined();

Transform248.child[0] = Shape249;

HAnimSite247.children = new MFNode();

HAnimSite247.children[0] = Transform248;

HAnimSegment243.children[2] = HAnimSite247;

HAnimJoint242.children = new MFNode();

HAnimJoint242.children[0] = HAnimSegment243;

let HAnimJoint250 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint250.name = "l_tarsal_proximal_phalanx_5";
HAnimJoint250.DEF = "hanim_l_tarsal_proximal_phalanx_5";
HAnimJoint250.center = new SFVec3f(new float[0.1239,-0.0153,0.0051]);
HAnimJoint250.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint250.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment251 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment251.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_5";
HAnimSegment251.DEF = "hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_5";
let TouchSensor252 = browser.currentScene.createNode("TouchSensor");
TouchSensor252.description = "joint l_tarsal_proximal_phalanx_5 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_5";
HAnimSegment251.children = new MFNode();

HAnimSegment251.children[0] = TouchSensor252;

let Transform253 = browser.currentScene.createNode("Transform");
Transform253.translation = new SFVec3f(new float[0.1239,-0.0153,0.0051]);
let Shape254 = browser.currentScene.createNode("Shape");
Shape254.USE = "JointShape";
Transform253.child = new undefined();

Transform253.child[0] = Shape254;

HAnimSegment251.children[1] = Transform253;

let HAnimSite255 = browser.currentScene.createNode("HAnimSite");
HAnimSite255.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_5_tip";
HAnimSite255.DEF = "hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_5_tip";
let Transform256 = browser.currentScene.createNode("Transform");
Transform256.translation = new SFVec3f(new float[0.1239,-0.0153,0.0051]);
let Shape257 = browser.currentScene.createNode("Shape");
Shape257.USE = "SiteShape";
Transform256.child = new undefined();

Transform256.child[0] = Shape257;

HAnimSite255.children = new MFNode();

HAnimSite255.children[0] = Transform256;

HAnimSegment251.children[2] = HAnimSite255;

HAnimJoint250.children = new MFNode();

HAnimJoint250.children[0] = HAnimSegment251;

let HAnimJoint258 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint258.name = "l_tarsal_middle_phalanx_5";
HAnimJoint258.DEF = "hanim_l_tarsal_middle_phalanx_5";
HAnimJoint258.center = new SFVec3f(new float[0.1262,-0.0077,0.0023]);
HAnimJoint258.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint258.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment259 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment259.name = "SEGMENT_FOR_l_tarsal_middle_phalanx_5";
HAnimSegment259.DEF = "hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_5";
let TouchSensor260 = browser.currentScene.createNode("TouchSensor");
TouchSensor260.description = "joint l_tarsal_middle_phalanx_5 segment SEGMENT_FOR_l_tarsal_middle_phalanx_5";
HAnimSegment259.children = new MFNode();

HAnimSegment259.children[0] = TouchSensor260;

let Transform261 = browser.currentScene.createNode("Transform");
Transform261.translation = new SFVec3f(new float[0.1262,-0.0077,0.0023]);
let Shape262 = browser.currentScene.createNode("Shape");
Shape262.USE = "JointShape";
Transform261.child = new undefined();

Transform261.child[0] = Shape262;

HAnimSegment259.children[1] = Transform261;

let HAnimSite263 = browser.currentScene.createNode("HAnimSite");
HAnimSite263.name = "SEGMENT_FOR_l_tarsal_middle_phalanx_5_tip";
HAnimSite263.DEF = "hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_5_tip";
let Transform264 = browser.currentScene.createNode("Transform");
Transform264.translation = new SFVec3f(new float[0.1262,-0.0077,0.0023]);
let Shape265 = browser.currentScene.createNode("Shape");
Shape265.USE = "SiteShape";
Transform264.child = new undefined();

Transform264.child[0] = Shape265;

HAnimSite263.children = new MFNode();

HAnimSite263.children[0] = Transform264;

HAnimSegment259.children[2] = HAnimSite263;

HAnimJoint258.children = new MFNode();

HAnimJoint258.children[0] = HAnimSegment259;

let HAnimJoint266 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint266.name = "l_tarsal_distal_phalanx_5";
HAnimJoint266.DEF = "hanim_l_tarsal_distal_phalanx_5";
HAnimJoint266.center = new SFVec3f(new float[0.1271,0,0]);
HAnimJoint266.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint266.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment267 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment267.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_5";
HAnimSegment267.DEF = "hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_5";
let TouchSensor268 = browser.currentScene.createNode("TouchSensor");
TouchSensor268.description = "joint l_tarsal_distal_phalanx_5 segment SEGMENT_FOR_l_tarsal_distal_phalanx_5";
HAnimSegment267.children = new MFNode();

HAnimSegment267.children[0] = TouchSensor268;

let Transform269 = browser.currentScene.createNode("Transform");
Transform269.translation = new SFVec3f(new float[0.1271,0,0]);
let Shape270 = browser.currentScene.createNode("Shape");
Shape270.USE = "JointShape";
Transform269.child = new undefined();

Transform269.child[0] = Shape270;

HAnimSegment267.children[1] = Transform269;

let HAnimSite271 = browser.currentScene.createNode("HAnimSite");
HAnimSite271.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_5_tip";
HAnimSite271.DEF = "hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_5_tip";
let Transform272 = browser.currentScene.createNode("Transform");
Transform272.translation = new SFVec3f(new float[0.1271,0,0]);
let Shape273 = browser.currentScene.createNode("Shape");
Shape273.USE = "SiteShape";
Transform272.child = new undefined();

Transform272.child[0] = Shape273;

HAnimSite271.children = new MFNode();

HAnimSite271.children[0] = Transform272;

HAnimSegment267.children[2] = HAnimSite271;

HAnimJoint266.children = new MFNode();

HAnimJoint266.children[0] = HAnimSegment267;

HAnimJoint258.children[1] = HAnimJoint266;

HAnimJoint250.children[1] = HAnimJoint258;

HAnimJoint242.children[1] = HAnimJoint250;

HAnimJoint202.children[2] = HAnimJoint242;

HAnimJoint194.children[1] = HAnimJoint202;

HAnimJoint66.children[2] = HAnimJoint194;

HAnimJoint58.children[1] = HAnimJoint66;

HAnimJoint50.children[1] = HAnimJoint58;

HAnimJoint42.children[1] = HAnimJoint50;

let HAnimJoint274 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint274.name = "r_thigh";
HAnimJoint274.DEF = "hanim_r_thigh";
HAnimJoint274.center = new SFVec3f(new float[-0.0948,-0.1202,0.8181]);
HAnimJoint274.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint274.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment275 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment275.name = "SEGMENT_FOR_r_thigh";
HAnimSegment275.DEF = "hanim_SEGMENT_FOR_r_thigh";
let TouchSensor276 = browser.currentScene.createNode("TouchSensor");
TouchSensor276.description = "joint r_thigh segment SEGMENT_FOR_r_thigh";
HAnimSegment275.children = new MFNode();

HAnimSegment275.children[0] = TouchSensor276;

let Transform277 = browser.currentScene.createNode("Transform");
Transform277.translation = new SFVec3f(new float[-0.0948,-0.1202,0.8181]);
let Shape278 = browser.currentScene.createNode("Shape");
Shape278.USE = "JointShape";
Transform277.child = new undefined();

Transform277.child[0] = Shape278;

HAnimSegment275.children[1] = Transform277;

let HAnimSite279 = browser.currentScene.createNode("HAnimSite");
HAnimSite279.name = "SEGMENT_FOR_r_thigh_tip";
HAnimSite279.DEF = "hanim_SEGMENT_FOR_r_thigh_tip";
let Transform280 = browser.currentScene.createNode("Transform");
Transform280.translation = new SFVec3f(new float[-0.0948,-0.1202,0.8181]);
let Shape281 = browser.currentScene.createNode("Shape");
Shape281.USE = "SiteShape";
Transform280.child = new undefined();

Transform280.child[0] = Shape281;

HAnimSite279.children = new MFNode();

HAnimSite279.children[0] = Transform280;

HAnimSegment275.children[2] = HAnimSite279;

HAnimJoint274.children = new MFNode();

HAnimJoint274.children[0] = HAnimSegment275;

let HAnimJoint282 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint282.name = "r_calf";
HAnimJoint282.DEF = "hanim_r_calf";
HAnimJoint282.center = new SFVec3f(new float[-0.0928,-0.1213,0.4003]);
HAnimJoint282.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint282.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment283 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment283.name = "SEGMENT_FOR_r_calf";
HAnimSegment283.DEF = "hanim_SEGMENT_FOR_r_calf";
let TouchSensor284 = browser.currentScene.createNode("TouchSensor");
TouchSensor284.description = "joint r_calf segment SEGMENT_FOR_r_calf";
HAnimSegment283.children = new MFNode();

HAnimSegment283.children[0] = TouchSensor284;

let Transform285 = browser.currentScene.createNode("Transform");
Transform285.translation = new SFVec3f(new float[-0.0928,-0.1213,0.4003]);
let Shape286 = browser.currentScene.createNode("Shape");
Shape286.USE = "JointShape";
Transform285.child = new undefined();

Transform285.child[0] = Shape286;

HAnimSegment283.children[1] = Transform285;

let HAnimSite287 = browser.currentScene.createNode("HAnimSite");
HAnimSite287.name = "SEGMENT_FOR_r_calf_tip";
HAnimSite287.DEF = "hanim_SEGMENT_FOR_r_calf_tip";
let Transform288 = browser.currentScene.createNode("Transform");
Transform288.translation = new SFVec3f(new float[-0.0928,-0.1213,0.4003]);
let Shape289 = browser.currentScene.createNode("Shape");
Shape289.USE = "SiteShape";
Transform288.child = new undefined();

Transform288.child[0] = Shape289;

HAnimSite287.children = new MFNode();

HAnimSite287.children[0] = Transform288;

HAnimSegment283.children[2] = HAnimSite287;

HAnimJoint282.children = new MFNode();

HAnimJoint282.children[0] = HAnimSegment283;

let HAnimJoint290 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint290.name = "r_talus";
HAnimJoint290.DEF = "hanim_r_talus";
HAnimJoint290.center = new SFVec3f(new float[-0.0886,-0.1123,0.0869]);
HAnimJoint290.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint290.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment291 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment291.name = "SEGMENT_FOR_r_talus";
HAnimSegment291.DEF = "hanim_SEGMENT_FOR_r_talus";
let TouchSensor292 = browser.currentScene.createNode("TouchSensor");
TouchSensor292.description = "joint r_talus segment SEGMENT_FOR_r_talus";
HAnimSegment291.children = new MFNode();

HAnimSegment291.children[0] = TouchSensor292;

let Transform293 = browser.currentScene.createNode("Transform");
Transform293.translation = new SFVec3f(new float[-0.0886,-0.1123,0.0869]);
let Shape294 = browser.currentScene.createNode("Shape");
Shape294.USE = "JointShape";
Transform293.child = new undefined();

Transform293.child[0] = Shape294;

HAnimSegment291.children[1] = Transform293;

let HAnimSite295 = browser.currentScene.createNode("HAnimSite");
HAnimSite295.name = "SEGMENT_FOR_r_talus_tip";
HAnimSite295.DEF = "hanim_SEGMENT_FOR_r_talus_tip";
let Transform296 = browser.currentScene.createNode("Transform");
Transform296.translation = new SFVec3f(new float[-0.0886,-0.1123,0.0869]);
let Shape297 = browser.currentScene.createNode("Shape");
Shape297.USE = "SiteShape";
Transform296.child = new undefined();

Transform296.child[0] = Shape297;

HAnimSite295.children = new MFNode();

HAnimSite295.children[0] = Transform296;

HAnimSegment291.children[2] = HAnimSite295;

HAnimJoint290.children = new MFNode();

HAnimJoint290.children[0] = HAnimSegment291;

let HAnimJoint298 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint298.name = "r_navicular";
HAnimJoint298.DEF = "hanim_r_navicular";
HAnimJoint298.center = new SFVec3f(new float[-0.0781,-0.097,0.0283]);
HAnimJoint298.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint298.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment299 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment299.name = "SEGMENT_FOR_r_navicular";
HAnimSegment299.DEF = "hanim_SEGMENT_FOR_r_navicular";
let TouchSensor300 = browser.currentScene.createNode("TouchSensor");
TouchSensor300.description = "joint r_navicular segment SEGMENT_FOR_r_navicular";
HAnimSegment299.children = new MFNode();

HAnimSegment299.children[0] = TouchSensor300;

let Transform301 = browser.currentScene.createNode("Transform");
Transform301.translation = new SFVec3f(new float[-0.0781,-0.097,0.0283]);
let Shape302 = browser.currentScene.createNode("Shape");
Shape302.USE = "JointShape";
Transform301.child = new undefined();

Transform301.child[0] = Shape302;

HAnimSegment299.children[1] = Transform301;

let HAnimSite303 = browser.currentScene.createNode("HAnimSite");
HAnimSite303.name = "SEGMENT_FOR_r_navicular_tip";
HAnimSite303.DEF = "hanim_SEGMENT_FOR_r_navicular_tip";
let Transform304 = browser.currentScene.createNode("Transform");
Transform304.translation = new SFVec3f(new float[-0.0781,-0.097,0.0283]);
let Shape305 = browser.currentScene.createNode("Shape");
Shape305.USE = "SiteShape";
Transform304.child = new undefined();

Transform304.child[0] = Shape305;

HAnimSite303.children = new MFNode();

HAnimSite303.children[0] = Transform304;

HAnimSegment299.children[2] = HAnimSite303;

HAnimJoint298.children = new MFNode();

HAnimJoint298.children[0] = HAnimSegment299;

let HAnimJoint306 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint306.name = "r_cuneiform_1";
HAnimJoint306.DEF = "hanim_r_cuneiform_1";
HAnimJoint306.center = new SFVec3f(new float[-0.0672,-0.0835,0.0235]);
HAnimJoint306.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint306.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment307 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment307.name = "SEGMENT_FOR_r_cuneiform_1";
HAnimSegment307.DEF = "hanim_SEGMENT_FOR_r_cuneiform_1";
let TouchSensor308 = browser.currentScene.createNode("TouchSensor");
TouchSensor308.description = "joint r_cuneiform_1 segment SEGMENT_FOR_r_cuneiform_1";
HAnimSegment307.children = new MFNode();

HAnimSegment307.children[0] = TouchSensor308;

let Transform309 = browser.currentScene.createNode("Transform");
Transform309.translation = new SFVec3f(new float[-0.0672,-0.0835,0.0235]);
let Shape310 = browser.currentScene.createNode("Shape");
Shape310.USE = "JointShape";
Transform309.child = new undefined();

Transform309.child[0] = Shape310;

HAnimSegment307.children[1] = Transform309;

let HAnimSite311 = browser.currentScene.createNode("HAnimSite");
HAnimSite311.name = "SEGMENT_FOR_r_cuneiform_1_tip";
HAnimSite311.DEF = "hanim_SEGMENT_FOR_r_cuneiform_1_tip";
let Transform312 = browser.currentScene.createNode("Transform");
Transform312.translation = new SFVec3f(new float[-0.0672,-0.0835,0.0235]);
let Shape313 = browser.currentScene.createNode("Shape");
Shape313.USE = "SiteShape";
Transform312.child = new undefined();

Transform312.child[0] = Shape313;

HAnimSite311.children = new MFNode();

HAnimSite311.children[0] = Transform312;

HAnimSegment307.children[2] = HAnimSite311;

HAnimJoint306.children = new MFNode();

HAnimJoint306.children[0] = HAnimSegment307;

let HAnimJoint314 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint314.name = "r_metatarsal_1";
HAnimJoint314.DEF = "hanim_r_metatarsal_1";
HAnimJoint314.center = new SFVec3f(new float[-0.0644,-0.0577,0.0147]);
HAnimJoint314.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint314.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment315 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment315.name = "SEGMENT_FOR_r_metatarsal_1";
HAnimSegment315.DEF = "hanim_SEGMENT_FOR_r_metatarsal_1";
let TouchSensor316 = browser.currentScene.createNode("TouchSensor");
TouchSensor316.description = "joint r_metatarsal_1 segment SEGMENT_FOR_r_metatarsal_1";
HAnimSegment315.children = new MFNode();

HAnimSegment315.children[0] = TouchSensor316;

let Transform317 = browser.currentScene.createNode("Transform");
Transform317.translation = new SFVec3f(new float[-0.0644,-0.0577,0.0147]);
let Shape318 = browser.currentScene.createNode("Shape");
Shape318.USE = "JointShape";
Transform317.child = new undefined();

Transform317.child[0] = Shape318;

HAnimSegment315.children[1] = Transform317;

let HAnimSite319 = browser.currentScene.createNode("HAnimSite");
HAnimSite319.name = "SEGMENT_FOR_r_metatarsal_1_tip";
HAnimSite319.DEF = "hanim_SEGMENT_FOR_r_metatarsal_1_tip";
let Transform320 = browser.currentScene.createNode("Transform");
Transform320.translation = new SFVec3f(new float[-0.0644,-0.0577,0.0147]);
let Shape321 = browser.currentScene.createNode("Shape");
Shape321.USE = "SiteShape";
Transform320.child = new undefined();

Transform320.child[0] = Shape321;

HAnimSite319.children = new MFNode();

HAnimSite319.children[0] = Transform320;

HAnimSegment315.children[2] = HAnimSite319;

HAnimJoint314.children = new MFNode();

HAnimJoint314.children[0] = HAnimSegment315;

let HAnimJoint322 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint322.name = "r_tarsal_proximal_phalanx_1";
HAnimJoint322.DEF = "hanim_r_tarsal_proximal_phalanx_1";
HAnimJoint322.center = new SFVec3f(new float[-0.0619,-0.0083,0.0059]);
HAnimJoint322.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint322.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment323 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment323.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_1";
HAnimSegment323.DEF = "hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_1";
let TouchSensor324 = browser.currentScene.createNode("TouchSensor");
TouchSensor324.description = "joint r_tarsal_proximal_phalanx_1 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_1";
HAnimSegment323.children = new MFNode();

HAnimSegment323.children[0] = TouchSensor324;

let Transform325 = browser.currentScene.createNode("Transform");
Transform325.translation = new SFVec3f(new float[-0.0619,-0.0083,0.0059]);
let Shape326 = browser.currentScene.createNode("Shape");
Shape326.USE = "JointShape";
Transform325.child = new undefined();

Transform325.child[0] = Shape326;

HAnimSegment323.children[1] = Transform325;

let HAnimSite327 = browser.currentScene.createNode("HAnimSite");
HAnimSite327.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_1_tip";
HAnimSite327.DEF = "hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_1_tip";
let Transform328 = browser.currentScene.createNode("Transform");
Transform328.translation = new SFVec3f(new float[-0.0619,-0.0083,0.0059]);
let Shape329 = browser.currentScene.createNode("Shape");
Shape329.USE = "SiteShape";
Transform328.child = new undefined();

Transform328.child[0] = Shape329;

HAnimSite327.children = new MFNode();

HAnimSite327.children[0] = Transform328;

HAnimSegment323.children[2] = HAnimSite327;

HAnimJoint322.children = new MFNode();

HAnimJoint322.children[0] = HAnimSegment323;

let HAnimJoint330 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint330.name = "r_tarsal_distal_phalanx_1";
HAnimJoint330.DEF = "hanim_r_tarsal_distal_phalanx_1";
HAnimJoint330.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint330.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment331 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment331.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_1";
HAnimSegment331.DEF = "hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_1";
let TouchSensor332 = browser.currentScene.createNode("TouchSensor");
TouchSensor332.description = "joint r_tarsal_distal_phalanx_1 segment SEGMENT_FOR_r_tarsal_distal_phalanx_1";
HAnimSegment331.children = new MFNode();

HAnimSegment331.children[0] = TouchSensor332;

let Transform333 = browser.currentScene.createNode("Transform");
let Shape334 = browser.currentScene.createNode("Shape");
Shape334.USE = "JointShape";
Transform333.child = new undefined();

Transform333.child[0] = Shape334;

HAnimSegment331.children[1] = Transform333;

let HAnimSite335 = browser.currentScene.createNode("HAnimSite");
HAnimSite335.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_1_tip";
HAnimSite335.DEF = "hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_1_tip";
let Transform336 = browser.currentScene.createNode("Transform");
let Shape337 = browser.currentScene.createNode("Shape");
Shape337.USE = "SiteShape";
Transform336.child = new undefined();

Transform336.child[0] = Shape337;

HAnimSite335.children = new MFNode();

HAnimSite335.children[0] = Transform336;

HAnimSegment331.children[2] = HAnimSite335;

HAnimJoint330.children = new MFNode();

HAnimJoint330.children[0] = HAnimSegment331;

HAnimJoint322.children[1] = HAnimJoint330;

HAnimJoint314.children[1] = HAnimJoint322;

HAnimJoint306.children[1] = HAnimJoint314;

HAnimJoint298.children[1] = HAnimJoint306;

let HAnimJoint338 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint338.name = "r_cuneiform_2";
HAnimJoint338.DEF = "hanim_r_cuneiform_2";
HAnimJoint338.center = new SFVec3f(new float[-0.0812,-0.0805,0.025]);
HAnimJoint338.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint338.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment339 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment339.name = "SEGMENT_FOR_r_cuneiform_2";
HAnimSegment339.DEF = "hanim_SEGMENT_FOR_r_cuneiform_2";
let TouchSensor340 = browser.currentScene.createNode("TouchSensor");
TouchSensor340.description = "joint r_cuneiform_2 segment SEGMENT_FOR_r_cuneiform_2";
HAnimSegment339.children = new MFNode();

HAnimSegment339.children[0] = TouchSensor340;

let Transform341 = browser.currentScene.createNode("Transform");
Transform341.translation = new SFVec3f(new float[-0.0812,-0.0805,0.025]);
let Shape342 = browser.currentScene.createNode("Shape");
Shape342.USE = "JointShape";
Transform341.child = new undefined();

Transform341.child[0] = Shape342;

HAnimSegment339.children[1] = Transform341;

let HAnimSite343 = browser.currentScene.createNode("HAnimSite");
HAnimSite343.name = "SEGMENT_FOR_r_cuneiform_2_tip";
HAnimSite343.DEF = "hanim_SEGMENT_FOR_r_cuneiform_2_tip";
let Transform344 = browser.currentScene.createNode("Transform");
Transform344.translation = new SFVec3f(new float[-0.0812,-0.0805,0.025]);
let Shape345 = browser.currentScene.createNode("Shape");
Shape345.USE = "SiteShape";
Transform344.child = new undefined();

Transform344.child[0] = Shape345;

HAnimSite343.children = new MFNode();

HAnimSite343.children[0] = Transform344;

HAnimSegment339.children[2] = HAnimSite343;

HAnimJoint338.children = new MFNode();

HAnimJoint338.children[0] = HAnimSegment339;

let HAnimJoint346 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint346.name = "r_metatarsal_2";
HAnimJoint346.DEF = "hanim_r_metatarsal_2";
HAnimJoint346.center = new SFVec3f(new float[-0.08,-0.0608,0.0175]);
HAnimJoint346.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint346.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment347 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment347.name = "SEGMENT_FOR_r_metatarsal_2";
HAnimSegment347.DEF = "hanim_SEGMENT_FOR_r_metatarsal_2";
let TouchSensor348 = browser.currentScene.createNode("TouchSensor");
TouchSensor348.description = "joint r_metatarsal_2 segment SEGMENT_FOR_r_metatarsal_2";
HAnimSegment347.children = new MFNode();

HAnimSegment347.children[0] = TouchSensor348;

let Transform349 = browser.currentScene.createNode("Transform");
Transform349.translation = new SFVec3f(new float[-0.08,-0.0608,0.0175]);
let Shape350 = browser.currentScene.createNode("Shape");
Shape350.USE = "JointShape";
Transform349.child = new undefined();

Transform349.child[0] = Shape350;

HAnimSegment347.children[1] = Transform349;

let HAnimSite351 = browser.currentScene.createNode("HAnimSite");
HAnimSite351.name = "SEGMENT_FOR_r_metatarsal_2_tip";
HAnimSite351.DEF = "hanim_SEGMENT_FOR_r_metatarsal_2_tip";
let Transform352 = browser.currentScene.createNode("Transform");
Transform352.translation = new SFVec3f(new float[-0.08,-0.0608,0.0175]);
let Shape353 = browser.currentScene.createNode("Shape");
Shape353.USE = "SiteShape";
Transform352.child = new undefined();

Transform352.child[0] = Shape353;

HAnimSite351.children = new MFNode();

HAnimSite351.children[0] = Transform352;

HAnimSegment347.children[2] = HAnimSite351;

HAnimJoint346.children = new MFNode();

HAnimJoint346.children[0] = HAnimSegment347;

let HAnimJoint354 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint354.name = "r_tarsal_proximal_phalanx_2";
HAnimJoint354.DEF = "hanim_r_tarsal_proximal_phalanx_2";
HAnimJoint354.center = new SFVec3f(new float[-0.0823,-0.004,0.0064]);
HAnimJoint354.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint354.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment355 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment355.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_2";
HAnimSegment355.DEF = "hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_2";
let TouchSensor356 = browser.currentScene.createNode("TouchSensor");
TouchSensor356.description = "joint r_tarsal_proximal_phalanx_2 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_2";
HAnimSegment355.children = new MFNode();

HAnimSegment355.children[0] = TouchSensor356;

let Transform357 = browser.currentScene.createNode("Transform");
Transform357.translation = new SFVec3f(new float[-0.0823,-0.004,0.0064]);
let Shape358 = browser.currentScene.createNode("Shape");
Shape358.USE = "JointShape";
Transform357.child = new undefined();

Transform357.child[0] = Shape358;

HAnimSegment355.children[1] = Transform357;

let HAnimSite359 = browser.currentScene.createNode("HAnimSite");
HAnimSite359.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_2_tip";
HAnimSite359.DEF = "hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_2_tip";
let Transform360 = browser.currentScene.createNode("Transform");
Transform360.translation = new SFVec3f(new float[-0.0823,-0.004,0.0064]);
let Shape361 = browser.currentScene.createNode("Shape");
Shape361.USE = "SiteShape";
Transform360.child = new undefined();

Transform360.child[0] = Shape361;

HAnimSite359.children = new MFNode();

HAnimSite359.children[0] = Transform360;

HAnimSegment355.children[2] = HAnimSite359;

HAnimJoint354.children = new MFNode();

HAnimJoint354.children[0] = HAnimSegment355;

let HAnimJoint362 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint362.name = "r_tarsal_middle_phalanx_2";
HAnimJoint362.DEF = "hanim_r_tarsal_middle_phalanx_2";
HAnimJoint362.center = new SFVec3f(new float[-0.0841,0.0121,0.0041]);
HAnimJoint362.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint362.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment363 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment363.name = "SEGMENT_FOR_r_tarsal_middle_phalanx_2";
HAnimSegment363.DEF = "hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_2";
let TouchSensor364 = browser.currentScene.createNode("TouchSensor");
TouchSensor364.description = "joint r_tarsal_middle_phalanx_2 segment SEGMENT_FOR_r_tarsal_middle_phalanx_2";
HAnimSegment363.children = new MFNode();

HAnimSegment363.children[0] = TouchSensor364;

let Transform365 = browser.currentScene.createNode("Transform");
Transform365.translation = new SFVec3f(new float[-0.0841,0.0121,0.0041]);
let Shape366 = browser.currentScene.createNode("Shape");
Shape366.USE = "JointShape";
Transform365.child = new undefined();

Transform365.child[0] = Shape366;

HAnimSegment363.children[1] = Transform365;

let HAnimSite367 = browser.currentScene.createNode("HAnimSite");
HAnimSite367.name = "SEGMENT_FOR_r_tarsal_middle_phalanx_2_tip";
HAnimSite367.DEF = "hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_2_tip";
let Transform368 = browser.currentScene.createNode("Transform");
Transform368.translation = new SFVec3f(new float[-0.0841,0.0121,0.0041]);
let Shape369 = browser.currentScene.createNode("Shape");
Shape369.USE = "SiteShape";
Transform368.child = new undefined();

Transform368.child[0] = Shape369;

HAnimSite367.children = new MFNode();

HAnimSite367.children[0] = Transform368;

HAnimSegment363.children[2] = HAnimSite367;

HAnimJoint362.children = new MFNode();

HAnimJoint362.children[0] = HAnimSegment363;

let HAnimJoint370 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint370.name = "r_tarsal_distal_phalanx_2";
HAnimJoint370.DEF = "hanim_r_tarsal_distal_phalanx_2";
HAnimJoint370.center = new SFVec3f(new float[-0.0841,0.0216,0.0013]);
HAnimJoint370.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint370.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment371 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment371.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_2";
HAnimSegment371.DEF = "hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_2";
let TouchSensor372 = browser.currentScene.createNode("TouchSensor");
TouchSensor372.description = "joint r_tarsal_distal_phalanx_2 segment SEGMENT_FOR_r_tarsal_distal_phalanx_2";
HAnimSegment371.children = new MFNode();

HAnimSegment371.children[0] = TouchSensor372;

let Transform373 = browser.currentScene.createNode("Transform");
Transform373.translation = new SFVec3f(new float[-0.0841,0.0216,0.0013]);
let Shape374 = browser.currentScene.createNode("Shape");
Shape374.USE = "JointShape";
Transform373.child = new undefined();

Transform373.child[0] = Shape374;

HAnimSegment371.children[1] = Transform373;

let HAnimSite375 = browser.currentScene.createNode("HAnimSite");
HAnimSite375.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_2_tip";
HAnimSite375.DEF = "hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_2_tip";
let Transform376 = browser.currentScene.createNode("Transform");
Transform376.translation = new SFVec3f(new float[-0.0841,0.0216,0.0013]);
let Shape377 = browser.currentScene.createNode("Shape");
Shape377.USE = "SiteShape";
Transform376.child = new undefined();

Transform376.child[0] = Shape377;

HAnimSite375.children = new MFNode();

HAnimSite375.children[0] = Transform376;

HAnimSegment371.children[2] = HAnimSite375;

HAnimJoint370.children = new MFNode();

HAnimJoint370.children[0] = HAnimSegment371;

HAnimJoint362.children[1] = HAnimJoint370;

HAnimJoint354.children[1] = HAnimJoint362;

HAnimJoint346.children[1] = HAnimJoint354;

HAnimJoint338.children[1] = HAnimJoint346;

HAnimJoint298.children[2] = HAnimJoint338;

let HAnimJoint378 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint378.name = "r_cuneiform_3";
HAnimJoint378.DEF = "hanim_r_cuneiform_3";
HAnimJoint378.center = new SFVec3f(new float[-0.0928,-0.0821,0.0248]);
HAnimJoint378.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint378.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment379 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment379.name = "SEGMENT_FOR_r_cuneiform_3";
HAnimSegment379.DEF = "hanim_SEGMENT_FOR_r_cuneiform_3";
let TouchSensor380 = browser.currentScene.createNode("TouchSensor");
TouchSensor380.description = "joint r_cuneiform_3 segment SEGMENT_FOR_r_cuneiform_3";
HAnimSegment379.children = new MFNode();

HAnimSegment379.children[0] = TouchSensor380;

let Transform381 = browser.currentScene.createNode("Transform");
Transform381.translation = new SFVec3f(new float[-0.0928,-0.0821,0.0248]);
let Shape382 = browser.currentScene.createNode("Shape");
Shape382.USE = "JointShape";
Transform381.child = new undefined();

Transform381.child[0] = Shape382;

HAnimSegment379.children[1] = Transform381;

let HAnimSite383 = browser.currentScene.createNode("HAnimSite");
HAnimSite383.name = "SEGMENT_FOR_r_cuneiform_3_tip";
HAnimSite383.DEF = "hanim_SEGMENT_FOR_r_cuneiform_3_tip";
let Transform384 = browser.currentScene.createNode("Transform");
Transform384.translation = new SFVec3f(new float[-0.0928,-0.0821,0.0248]);
let Shape385 = browser.currentScene.createNode("Shape");
Shape385.USE = "SiteShape";
Transform384.child = new undefined();

Transform384.child[0] = Shape385;

HAnimSite383.children = new MFNode();

HAnimSite383.children[0] = Transform384;

HAnimSegment379.children[2] = HAnimSite383;

HAnimJoint378.children = new MFNode();

HAnimJoint378.children[0] = HAnimSegment379;

let HAnimJoint386 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint386.name = "r_metatarsal_3";
HAnimJoint386.DEF = "hanim_r_metatarsal_3";
HAnimJoint386.center = new SFVec3f(new float[-0.0944,-0.0625,0.0175]);
HAnimJoint386.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint386.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment387 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment387.name = "SEGMENT_FOR_r_metatarsal_3";
HAnimSegment387.DEF = "hanim_SEGMENT_FOR_r_metatarsal_3";
let TouchSensor388 = browser.currentScene.createNode("TouchSensor");
TouchSensor388.description = "joint r_metatarsal_3 segment SEGMENT_FOR_r_metatarsal_3";
HAnimSegment387.children = new MFNode();

HAnimSegment387.children[0] = TouchSensor388;

let Transform389 = browser.currentScene.createNode("Transform");
Transform389.translation = new SFVec3f(new float[-0.0944,-0.0625,0.0175]);
let Shape390 = browser.currentScene.createNode("Shape");
Shape390.USE = "JointShape";
Transform389.child = new undefined();

Transform389.child[0] = Shape390;

HAnimSegment387.children[1] = Transform389;

let HAnimSite391 = browser.currentScene.createNode("HAnimSite");
HAnimSite391.name = "SEGMENT_FOR_r_metatarsal_3_tip";
HAnimSite391.DEF = "hanim_SEGMENT_FOR_r_metatarsal_3_tip";
let Transform392 = browser.currentScene.createNode("Transform");
Transform392.translation = new SFVec3f(new float[-0.0944,-0.0625,0.0175]);
let Shape393 = browser.currentScene.createNode("Shape");
Shape393.USE = "SiteShape";
Transform392.child = new undefined();

Transform392.child[0] = Shape393;

HAnimSite391.children = new MFNode();

HAnimSite391.children[0] = Transform392;

HAnimSegment387.children[2] = HAnimSite391;

HAnimJoint386.children = new MFNode();

HAnimJoint386.children[0] = HAnimSegment387;

let HAnimJoint394 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint394.name = "r_tarsal_proximal_phalanx_3";
HAnimJoint394.DEF = "hanim_r_tarsal_proximal_phalanx_3";
HAnimJoint394.center = new SFVec3f(new float[-0.0963,-0.0065,0.0065]);
HAnimJoint394.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint394.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment395 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment395.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_3";
HAnimSegment395.DEF = "hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_3";
let TouchSensor396 = browser.currentScene.createNode("TouchSensor");
TouchSensor396.description = "joint r_tarsal_proximal_phalanx_3 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_3";
HAnimSegment395.children = new MFNode();

HAnimSegment395.children[0] = TouchSensor396;

let Transform397 = browser.currentScene.createNode("Transform");
Transform397.translation = new SFVec3f(new float[-0.0963,-0.0065,0.0065]);
let Shape398 = browser.currentScene.createNode("Shape");
Shape398.USE = "JointShape";
Transform397.child = new undefined();

Transform397.child[0] = Shape398;

HAnimSegment395.children[1] = Transform397;

let HAnimSite399 = browser.currentScene.createNode("HAnimSite");
HAnimSite399.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_3_tip";
HAnimSite399.DEF = "hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_3_tip";
let Transform400 = browser.currentScene.createNode("Transform");
Transform400.translation = new SFVec3f(new float[-0.0963,-0.0065,0.0065]);
let Shape401 = browser.currentScene.createNode("Shape");
Shape401.USE = "SiteShape";
Transform400.child = new undefined();

Transform400.child[0] = Shape401;

HAnimSite399.children = new MFNode();

HAnimSite399.children[0] = Transform400;

HAnimSegment395.children[2] = HAnimSite399;

HAnimJoint394.children = new MFNode();

HAnimJoint394.children[0] = HAnimSegment395;

let HAnimJoint402 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint402.name = "r_tarsal_middle_phalanx_3";
HAnimJoint402.DEF = "hanim_r_tarsal_middle_phalanx_3";
HAnimJoint402.center = new SFVec3f(new float[-0.0987,0.0086,0.0034]);
HAnimJoint402.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint402.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment403 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment403.name = "SEGMENT_FOR_r_tarsal_middle_phalanx_3";
HAnimSegment403.DEF = "hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_3";
let TouchSensor404 = browser.currentScene.createNode("TouchSensor");
TouchSensor404.description = "joint r_tarsal_middle_phalanx_3 segment SEGMENT_FOR_r_tarsal_middle_phalanx_3";
HAnimSegment403.children = new MFNode();

HAnimSegment403.children[0] = TouchSensor404;

let Transform405 = browser.currentScene.createNode("Transform");
Transform405.translation = new SFVec3f(new float[-0.0987,0.0086,0.0034]);
let Shape406 = browser.currentScene.createNode("Shape");
Shape406.USE = "JointShape";
Transform405.child = new undefined();

Transform405.child[0] = Shape406;

HAnimSegment403.children[1] = Transform405;

let HAnimSite407 = browser.currentScene.createNode("HAnimSite");
HAnimSite407.name = "SEGMENT_FOR_r_tarsal_middle_phalanx_3_tip";
HAnimSite407.DEF = "hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_3_tip";
let Transform408 = browser.currentScene.createNode("Transform");
Transform408.translation = new SFVec3f(new float[-0.0987,0.0086,0.0034]);
let Shape409 = browser.currentScene.createNode("Shape");
Shape409.USE = "SiteShape";
Transform408.child = new undefined();

Transform408.child[0] = Shape409;

HAnimSite407.children = new MFNode();

HAnimSite407.children[0] = Transform408;

HAnimSegment403.children[2] = HAnimSite407;

HAnimJoint402.children = new MFNode();

HAnimJoint402.children[0] = HAnimSegment403;

let HAnimJoint410 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint410.name = "r_tarsal_distal_phalanx_3";
HAnimJoint410.DEF = "hanim_r_tarsal_distal_phalanx_3";
HAnimJoint410.center = new SFVec3f(new float[-0.1002,0.0178,0.0013]);
HAnimJoint410.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint410.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment411 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment411.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_3";
HAnimSegment411.DEF = "hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_3";
let TouchSensor412 = browser.currentScene.createNode("TouchSensor");
TouchSensor412.description = "joint r_tarsal_distal_phalanx_3 segment SEGMENT_FOR_r_tarsal_distal_phalanx_3";
HAnimSegment411.children = new MFNode();

HAnimSegment411.children[0] = TouchSensor412;

let Transform413 = browser.currentScene.createNode("Transform");
Transform413.translation = new SFVec3f(new float[-0.1002,0.0178,0.0013]);
let Shape414 = browser.currentScene.createNode("Shape");
Shape414.USE = "JointShape";
Transform413.child = new undefined();

Transform413.child[0] = Shape414;

HAnimSegment411.children[1] = Transform413;

let HAnimSite415 = browser.currentScene.createNode("HAnimSite");
HAnimSite415.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_3_tip";
HAnimSite415.DEF = "hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_3_tip";
let Transform416 = browser.currentScene.createNode("Transform");
Transform416.translation = new SFVec3f(new float[-0.1002,0.0178,0.0013]);
let Shape417 = browser.currentScene.createNode("Shape");
Shape417.USE = "SiteShape";
Transform416.child = new undefined();

Transform416.child[0] = Shape417;

HAnimSite415.children = new MFNode();

HAnimSite415.children[0] = Transform416;

HAnimSegment411.children[2] = HAnimSite415;

HAnimJoint410.children = new MFNode();

HAnimJoint410.children[0] = HAnimSegment411;

HAnimJoint402.children[1] = HAnimJoint410;

HAnimJoint394.children[1] = HAnimJoint402;

HAnimJoint386.children[1] = HAnimJoint394;

HAnimJoint378.children[1] = HAnimJoint386;

HAnimJoint298.children[3] = HAnimJoint378;

HAnimJoint290.children[1] = HAnimJoint298;

let HAnimJoint418 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint418.name = "r_calcaneus";
HAnimJoint418.DEF = "hanim_r_calcaneus";
HAnimJoint418.center = new SFVec3f(new float[-0.0889,-0.1278,0.0494]);
HAnimJoint418.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint418.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment419 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment419.name = "SEGMENT_FOR_r_calcaneus";
HAnimSegment419.DEF = "hanim_SEGMENT_FOR_r_calcaneus";
let TouchSensor420 = browser.currentScene.createNode("TouchSensor");
TouchSensor420.description = "joint r_calcaneus segment SEGMENT_FOR_r_calcaneus";
HAnimSegment419.children = new MFNode();

HAnimSegment419.children[0] = TouchSensor420;

let Transform421 = browser.currentScene.createNode("Transform");
Transform421.translation = new SFVec3f(new float[-0.0889,-0.1278,0.0494]);
let Shape422 = browser.currentScene.createNode("Shape");
Shape422.USE = "JointShape";
Transform421.child = new undefined();

Transform421.child[0] = Shape422;

HAnimSegment419.children[1] = Transform421;

let HAnimSite423 = browser.currentScene.createNode("HAnimSite");
HAnimSite423.name = "SEGMENT_FOR_r_calcaneus_tip";
HAnimSite423.DEF = "hanim_SEGMENT_FOR_r_calcaneus_tip";
let Transform424 = browser.currentScene.createNode("Transform");
Transform424.translation = new SFVec3f(new float[-0.0889,-0.1278,0.0494]);
let Shape425 = browser.currentScene.createNode("Shape");
Shape425.USE = "SiteShape";
Transform424.child = new undefined();

Transform424.child[0] = Shape425;

HAnimSite423.children = new MFNode();

HAnimSite423.children[0] = Transform424;

HAnimSegment419.children[2] = HAnimSite423;

HAnimJoint418.children = new MFNode();

HAnimJoint418.children[0] = HAnimSegment419;

let HAnimJoint426 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint426.name = "r_cuboid";
HAnimJoint426.DEF = "hanim_r_cuboid";
HAnimJoint426.center = new SFVec3f(new float[-0.1105,-0.0998,0.0267]);
HAnimJoint426.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint426.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment427 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment427.name = "SEGMENT_FOR_r_cuboid";
HAnimSegment427.DEF = "hanim_SEGMENT_FOR_r_cuboid";
let TouchSensor428 = browser.currentScene.createNode("TouchSensor");
TouchSensor428.description = "joint r_cuboid segment SEGMENT_FOR_r_cuboid";
HAnimSegment427.children = new MFNode();

HAnimSegment427.children[0] = TouchSensor428;

let Transform429 = browser.currentScene.createNode("Transform");
Transform429.translation = new SFVec3f(new float[-0.1105,-0.0998,0.0267]);
let Shape430 = browser.currentScene.createNode("Shape");
Shape430.USE = "JointShape";
Transform429.child = new undefined();

Transform429.child[0] = Shape430;

HAnimSegment427.children[1] = Transform429;

let HAnimSite431 = browser.currentScene.createNode("HAnimSite");
HAnimSite431.name = "SEGMENT_FOR_r_cuboid_tip";
HAnimSite431.DEF = "hanim_SEGMENT_FOR_r_cuboid_tip";
let Transform432 = browser.currentScene.createNode("Transform");
Transform432.translation = new SFVec3f(new float[-0.1105,-0.0998,0.0267]);
let Shape433 = browser.currentScene.createNode("Shape");
Shape433.USE = "SiteShape";
Transform432.child = new undefined();

Transform432.child[0] = Shape433;

HAnimSite431.children = new MFNode();

HAnimSite431.children[0] = Transform432;

HAnimSegment427.children[2] = HAnimSite431;

HAnimJoint426.children = new MFNode();

HAnimJoint426.children[0] = HAnimSegment427;

let HAnimJoint434 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint434.name = "r_metatarsal_4";
HAnimJoint434.DEF = "hanim_r_metatarsal_4";
HAnimJoint434.center = new SFVec3f(new float[-0.1063,-0.0634,0.016]);
HAnimJoint434.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint434.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment435 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment435.name = "SEGMENT_FOR_r_metatarsal_4";
HAnimSegment435.DEF = "hanim_SEGMENT_FOR_r_metatarsal_4";
let TouchSensor436 = browser.currentScene.createNode("TouchSensor");
TouchSensor436.description = "joint r_metatarsal_4 segment SEGMENT_FOR_r_metatarsal_4";
HAnimSegment435.children = new MFNode();

HAnimSegment435.children[0] = TouchSensor436;

let Transform437 = browser.currentScene.createNode("Transform");
Transform437.translation = new SFVec3f(new float[-0.1063,-0.0634,0.016]);
let Shape438 = browser.currentScene.createNode("Shape");
Shape438.USE = "JointShape";
Transform437.child = new undefined();

Transform437.child[0] = Shape438;

HAnimSegment435.children[1] = Transform437;

let HAnimSite439 = browser.currentScene.createNode("HAnimSite");
HAnimSite439.name = "SEGMENT_FOR_r_metatarsal_4_tip";
HAnimSite439.DEF = "hanim_SEGMENT_FOR_r_metatarsal_4_tip";
let Transform440 = browser.currentScene.createNode("Transform");
Transform440.translation = new SFVec3f(new float[-0.1063,-0.0634,0.016]);
let Shape441 = browser.currentScene.createNode("Shape");
Shape441.USE = "SiteShape";
Transform440.child = new undefined();

Transform440.child[0] = Shape441;

HAnimSite439.children = new MFNode();

HAnimSite439.children[0] = Transform440;

HAnimSegment435.children[2] = HAnimSite439;

HAnimJoint434.children = new MFNode();

HAnimJoint434.children[0] = HAnimSegment435;

let HAnimJoint442 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint442.name = "r_tarsal_proximal_phalanx_4";
HAnimJoint442.DEF = "hanim_r_tarsal_proximal_phalanx_4";
HAnimJoint442.center = new SFVec3f(new float[-0.1097,-0.0107,0.0058]);
HAnimJoint442.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint442.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment443 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment443.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_4";
HAnimSegment443.DEF = "hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_4";
let TouchSensor444 = browser.currentScene.createNode("TouchSensor");
TouchSensor444.description = "joint r_tarsal_proximal_phalanx_4 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_4";
HAnimSegment443.children = new MFNode();

HAnimSegment443.children[0] = TouchSensor444;

let Transform445 = browser.currentScene.createNode("Transform");
Transform445.translation = new SFVec3f(new float[-0.1097,-0.0107,0.0058]);
let Shape446 = browser.currentScene.createNode("Shape");
Shape446.USE = "JointShape";
Transform445.child = new undefined();

Transform445.child[0] = Shape446;

HAnimSegment443.children[1] = Transform445;

let HAnimSite447 = browser.currentScene.createNode("HAnimSite");
HAnimSite447.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_4_tip";
HAnimSite447.DEF = "hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_4_tip";
let Transform448 = browser.currentScene.createNode("Transform");
Transform448.translation = new SFVec3f(new float[-0.1097,-0.0107,0.0058]);
let Shape449 = browser.currentScene.createNode("Shape");
Shape449.USE = "SiteShape";
Transform448.child = new undefined();

Transform448.child[0] = Shape449;

HAnimSite447.children = new MFNode();

HAnimSite447.children[0] = Transform448;

HAnimSegment443.children[2] = HAnimSite447;

HAnimJoint442.children = new MFNode();

HAnimJoint442.children[0] = HAnimSegment443;

let HAnimJoint450 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint450.name = "r_tarsal_middle_phalanx_4";
HAnimJoint450.DEF = "hanim_r_tarsal_middle_phalanx_4";
HAnimJoint450.center = new SFVec3f(new float[-0.114,0.0044,0.0037]);
HAnimJoint450.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint450.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment451 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment451.name = "SEGMENT_FOR_r_tarsal_middle_phalanx_4";
HAnimSegment451.DEF = "hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_4";
let TouchSensor452 = browser.currentScene.createNode("TouchSensor");
TouchSensor452.description = "joint r_tarsal_middle_phalanx_4 segment SEGMENT_FOR_r_tarsal_middle_phalanx_4";
HAnimSegment451.children = new MFNode();

HAnimSegment451.children[0] = TouchSensor452;

let Transform453 = browser.currentScene.createNode("Transform");
Transform453.translation = new SFVec3f(new float[-0.114,0.0044,0.0037]);
let Shape454 = browser.currentScene.createNode("Shape");
Shape454.USE = "JointShape";
Transform453.child = new undefined();

Transform453.child[0] = Shape454;

HAnimSegment451.children[1] = Transform453;

let HAnimSite455 = browser.currentScene.createNode("HAnimSite");
HAnimSite455.name = "SEGMENT_FOR_r_tarsal_middle_phalanx_4_tip";
HAnimSite455.DEF = "hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_4_tip";
let Transform456 = browser.currentScene.createNode("Transform");
Transform456.translation = new SFVec3f(new float[-0.114,0.0044,0.0037]);
let Shape457 = browser.currentScene.createNode("Shape");
Shape457.USE = "SiteShape";
Transform456.child = new undefined();

Transform456.child[0] = Shape457;

HAnimSite455.children = new MFNode();

HAnimSite455.children[0] = Transform456;

HAnimSegment451.children[2] = HAnimSite455;

HAnimJoint450.children = new MFNode();

HAnimJoint450.children[0] = HAnimSegment451;

let HAnimJoint458 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint458.name = "r_tarsal_distal_phalanx_4";
HAnimJoint458.DEF = "hanim_r_tarsal_distal_phalanx_4";
HAnimJoint458.center = new SFVec3f(new float[-0.1155,0.0118,0.0008]);
HAnimJoint458.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint458.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment459 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment459.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_4";
HAnimSegment459.DEF = "hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_4";
let TouchSensor460 = browser.currentScene.createNode("TouchSensor");
TouchSensor460.description = "joint r_tarsal_distal_phalanx_4 segment SEGMENT_FOR_r_tarsal_distal_phalanx_4";
HAnimSegment459.children = new MFNode();

HAnimSegment459.children[0] = TouchSensor460;

let Transform461 = browser.currentScene.createNode("Transform");
Transform461.translation = new SFVec3f(new float[-0.1155,0.0118,0.0008]);
let Shape462 = browser.currentScene.createNode("Shape");
Shape462.USE = "JointShape";
Transform461.child = new undefined();

Transform461.child[0] = Shape462;

HAnimSegment459.children[1] = Transform461;

let HAnimSite463 = browser.currentScene.createNode("HAnimSite");
HAnimSite463.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_4_tip";
HAnimSite463.DEF = "hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_4_tip";
let Transform464 = browser.currentScene.createNode("Transform");
Transform464.translation = new SFVec3f(new float[-0.1155,0.0118,0.0008]);
let Shape465 = browser.currentScene.createNode("Shape");
Shape465.USE = "SiteShape";
Transform464.child = new undefined();

Transform464.child[0] = Shape465;

HAnimSite463.children = new MFNode();

HAnimSite463.children[0] = Transform464;

HAnimSegment459.children[2] = HAnimSite463;

HAnimJoint458.children = new MFNode();

HAnimJoint458.children[0] = HAnimSegment459;

HAnimJoint450.children[1] = HAnimJoint458;

HAnimJoint442.children[1] = HAnimJoint450;

HAnimJoint434.children[1] = HAnimJoint442;

HAnimJoint426.children[1] = HAnimJoint434;

let HAnimJoint466 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint466.name = "r_metatarsal_5";
HAnimJoint466.DEF = "hanim_r_metatarsal_5";
HAnimJoint466.center = new SFVec3f(new float[-0.1206,-0.0671,0.0124]);
HAnimJoint466.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint466.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment467 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment467.name = "SEGMENT_FOR_r_metatarsal_5";
HAnimSegment467.DEF = "hanim_SEGMENT_FOR_r_metatarsal_5";
let TouchSensor468 = browser.currentScene.createNode("TouchSensor");
TouchSensor468.description = "joint r_metatarsal_5 segment SEGMENT_FOR_r_metatarsal_5";
HAnimSegment467.children = new MFNode();

HAnimSegment467.children[0] = TouchSensor468;

let Transform469 = browser.currentScene.createNode("Transform");
Transform469.translation = new SFVec3f(new float[-0.1206,-0.0671,0.0124]);
let Shape470 = browser.currentScene.createNode("Shape");
Shape470.USE = "JointShape";
Transform469.child = new undefined();

Transform469.child[0] = Shape470;

HAnimSegment467.children[1] = Transform469;

let HAnimSite471 = browser.currentScene.createNode("HAnimSite");
HAnimSite471.name = "SEGMENT_FOR_r_metatarsal_5_tip";
HAnimSite471.DEF = "hanim_SEGMENT_FOR_r_metatarsal_5_tip";
let Transform472 = browser.currentScene.createNode("Transform");
Transform472.translation = new SFVec3f(new float[-0.1206,-0.0671,0.0124]);
let Shape473 = browser.currentScene.createNode("Shape");
Shape473.USE = "SiteShape";
Transform472.child = new undefined();

Transform472.child[0] = Shape473;

HAnimSite471.children = new MFNode();

HAnimSite471.children[0] = Transform472;

HAnimSegment467.children[2] = HAnimSite471;

HAnimJoint466.children = new MFNode();

HAnimJoint466.children[0] = HAnimSegment467;

let HAnimJoint474 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint474.name = "r_tarsal_proximal_phalanx_5";
HAnimJoint474.DEF = "hanim_r_tarsal_proximal_phalanx_5";
HAnimJoint474.center = new SFVec3f(new float[-0.1239,-0.0153,0.0051]);
HAnimJoint474.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint474.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment475 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment475.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_5";
HAnimSegment475.DEF = "hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_5";
let TouchSensor476 = browser.currentScene.createNode("TouchSensor");
TouchSensor476.description = "joint r_tarsal_proximal_phalanx_5 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_5";
HAnimSegment475.children = new MFNode();

HAnimSegment475.children[0] = TouchSensor476;

let Transform477 = browser.currentScene.createNode("Transform");
Transform477.translation = new SFVec3f(new float[-0.1239,-0.0153,0.0051]);
let Shape478 = browser.currentScene.createNode("Shape");
Shape478.USE = "JointShape";
Transform477.child = new undefined();

Transform477.child[0] = Shape478;

HAnimSegment475.children[1] = Transform477;

let HAnimSite479 = browser.currentScene.createNode("HAnimSite");
HAnimSite479.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_5_tip";
HAnimSite479.DEF = "hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_5_tip";
let Transform480 = browser.currentScene.createNode("Transform");
Transform480.translation = new SFVec3f(new float[-0.1239,-0.0153,0.0051]);
let Shape481 = browser.currentScene.createNode("Shape");
Shape481.USE = "SiteShape";
Transform480.child = new undefined();

Transform480.child[0] = Shape481;

HAnimSite479.children = new MFNode();

HAnimSite479.children[0] = Transform480;

HAnimSegment475.children[2] = HAnimSite479;

HAnimJoint474.children = new MFNode();

HAnimJoint474.children[0] = HAnimSegment475;

let HAnimJoint482 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint482.name = "r_tarsal_middle_phalanx_5";
HAnimJoint482.DEF = "hanim_r_tarsal_middle_phalanx_5";
HAnimJoint482.center = new SFVec3f(new float[-0.1262,-0.0077,0.0023]);
HAnimJoint482.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint482.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment483 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment483.name = "SEGMENT_FOR_r_tarsal_middle_phalanx_5";
HAnimSegment483.DEF = "hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_5";
let TouchSensor484 = browser.currentScene.createNode("TouchSensor");
TouchSensor484.description = "joint r_tarsal_middle_phalanx_5 segment SEGMENT_FOR_r_tarsal_middle_phalanx_5";
HAnimSegment483.children = new MFNode();

HAnimSegment483.children[0] = TouchSensor484;

let Transform485 = browser.currentScene.createNode("Transform");
Transform485.translation = new SFVec3f(new float[-0.1262,-0.0077,0.0023]);
let Shape486 = browser.currentScene.createNode("Shape");
Shape486.USE = "JointShape";
Transform485.child = new undefined();

Transform485.child[0] = Shape486;

HAnimSegment483.children[1] = Transform485;

let HAnimSite487 = browser.currentScene.createNode("HAnimSite");
HAnimSite487.name = "SEGMENT_FOR_r_tarsal_middle_phalanx_5_tip";
HAnimSite487.DEF = "hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_5_tip";
let Transform488 = browser.currentScene.createNode("Transform");
Transform488.translation = new SFVec3f(new float[-0.1262,-0.0077,0.0023]);
let Shape489 = browser.currentScene.createNode("Shape");
Shape489.USE = "SiteShape";
Transform488.child = new undefined();

Transform488.child[0] = Shape489;

HAnimSite487.children = new MFNode();

HAnimSite487.children[0] = Transform488;

HAnimSegment483.children[2] = HAnimSite487;

HAnimJoint482.children = new MFNode();

HAnimJoint482.children[0] = HAnimSegment483;

let HAnimJoint490 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint490.name = "r_tarsal_distal_phalanx_5";
HAnimJoint490.DEF = "hanim_r_tarsal_distal_phalanx_5";
HAnimJoint490.center = new SFVec3f(new float[-0.1271,0,0]);
HAnimJoint490.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint490.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment491 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment491.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_5";
HAnimSegment491.DEF = "hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_5";
let TouchSensor492 = browser.currentScene.createNode("TouchSensor");
TouchSensor492.description = "joint r_tarsal_distal_phalanx_5 segment SEGMENT_FOR_r_tarsal_distal_phalanx_5";
HAnimSegment491.children = new MFNode();

HAnimSegment491.children[0] = TouchSensor492;

let Transform493 = browser.currentScene.createNode("Transform");
Transform493.translation = new SFVec3f(new float[-0.1271,0,0]);
let Shape494 = browser.currentScene.createNode("Shape");
Shape494.USE = "JointShape";
Transform493.child = new undefined();

Transform493.child[0] = Shape494;

HAnimSegment491.children[1] = Transform493;

let HAnimSite495 = browser.currentScene.createNode("HAnimSite");
HAnimSite495.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_5_tip";
HAnimSite495.DEF = "hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_5_tip";
let Transform496 = browser.currentScene.createNode("Transform");
Transform496.translation = new SFVec3f(new float[-0.1271,0,0]);
let Shape497 = browser.currentScene.createNode("Shape");
Shape497.USE = "SiteShape";
Transform496.child = new undefined();

Transform496.child[0] = Shape497;

HAnimSite495.children = new MFNode();

HAnimSite495.children[0] = Transform496;

HAnimSegment491.children[2] = HAnimSite495;

HAnimJoint490.children = new MFNode();

HAnimJoint490.children[0] = HAnimSegment491;

HAnimJoint482.children[1] = HAnimJoint490;

HAnimJoint474.children[1] = HAnimJoint482;

HAnimJoint466.children[1] = HAnimJoint474;

HAnimJoint426.children[2] = HAnimJoint466;

HAnimJoint418.children[1] = HAnimJoint426;

HAnimJoint290.children[2] = HAnimJoint418;

HAnimJoint282.children[1] = HAnimJoint290;

HAnimJoint274.children[1] = HAnimJoint282;

HAnimJoint42.children[2] = HAnimJoint274;

HAnimJoint34.children[1] = HAnimJoint42;

let HAnimJoint498 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint498.name = "l5";
HAnimJoint498.DEF = "hanim_l5";
HAnimJoint498.center = new SFVec3f(new float[-0.0002,-0.1156,0.9169]);
HAnimJoint498.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint498.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment499 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment499.name = "SEGMENT_FOR_l5";
HAnimSegment499.DEF = "hanim_SEGMENT_FOR_l5";
let TouchSensor500 = browser.currentScene.createNode("TouchSensor");
TouchSensor500.description = "joint l5 segment SEGMENT_FOR_l5";
HAnimSegment499.children = new MFNode();

HAnimSegment499.children[0] = TouchSensor500;

let Transform501 = browser.currentScene.createNode("Transform");
Transform501.translation = new SFVec3f(new float[-0.0002,-0.1156,0.9169]);
let Shape502 = browser.currentScene.createNode("Shape");
Shape502.USE = "JointShape";
Transform501.child = new undefined();

Transform501.child[0] = Shape502;

HAnimSegment499.children[1] = Transform501;

let HAnimSite503 = browser.currentScene.createNode("HAnimSite");
HAnimSite503.name = "SEGMENT_FOR_l5_tip";
HAnimSite503.DEF = "hanim_SEGMENT_FOR_l5_tip";
let Transform504 = browser.currentScene.createNode("Transform");
Transform504.translation = new SFVec3f(new float[-0.0002,-0.1156,0.9169]);
let Shape505 = browser.currentScene.createNode("Shape");
Shape505.USE = "SiteShape";
Transform504.child = new undefined();

Transform504.child[0] = Shape505;

HAnimSite503.children = new MFNode();

HAnimSite503.children[0] = Transform504;

HAnimSegment499.children[2] = HAnimSite503;

HAnimJoint498.children = new MFNode();

HAnimJoint498.children[0] = HAnimSegment499;

let HAnimJoint506 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint506.name = "l4";
HAnimJoint506.DEF = "hanim_l4";
HAnimJoint506.center = new SFVec3f(new float[-0.0002,-0.1156,0.9412]);
HAnimJoint506.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint506.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment507 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment507.name = "SEGMENT_FOR_l4";
HAnimSegment507.DEF = "hanim_SEGMENT_FOR_l4";
let TouchSensor508 = browser.currentScene.createNode("TouchSensor");
TouchSensor508.description = "joint l4 segment SEGMENT_FOR_l4";
HAnimSegment507.children = new MFNode();

HAnimSegment507.children[0] = TouchSensor508;

let Transform509 = browser.currentScene.createNode("Transform");
Transform509.translation = new SFVec3f(new float[-0.0002,-0.1156,0.9412]);
let Shape510 = browser.currentScene.createNode("Shape");
Shape510.USE = "JointShape";
Transform509.child = new undefined();

Transform509.child[0] = Shape510;

HAnimSegment507.children[1] = Transform509;

let HAnimSite511 = browser.currentScene.createNode("HAnimSite");
HAnimSite511.name = "SEGMENT_FOR_l4_tip";
HAnimSite511.DEF = "hanim_SEGMENT_FOR_l4_tip";
let Transform512 = browser.currentScene.createNode("Transform");
Transform512.translation = new SFVec3f(new float[-0.0002,-0.1156,0.9412]);
let Shape513 = browser.currentScene.createNode("Shape");
Shape513.USE = "SiteShape";
Transform512.child = new undefined();

Transform512.child[0] = Shape513;

HAnimSite511.children = new MFNode();

HAnimSite511.children[0] = Transform512;

HAnimSegment507.children[2] = HAnimSite511;

HAnimJoint506.children = new MFNode();

HAnimJoint506.children[0] = HAnimSegment507;

let HAnimJoint514 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint514.name = "l3";
HAnimJoint514.DEF = "hanim_l3";
HAnimJoint514.center = new SFVec3f(new float[-0.0002,-0.1156,0.9574]);
HAnimJoint514.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint514.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment515 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment515.name = "SEGMENT_FOR_l3";
HAnimSegment515.DEF = "hanim_SEGMENT_FOR_l3";
let TouchSensor516 = browser.currentScene.createNode("TouchSensor");
TouchSensor516.description = "joint l3 segment SEGMENT_FOR_l3";
HAnimSegment515.children = new MFNode();

HAnimSegment515.children[0] = TouchSensor516;

let Transform517 = browser.currentScene.createNode("Transform");
Transform517.translation = new SFVec3f(new float[-0.0002,-0.1156,0.9574]);
let Shape518 = browser.currentScene.createNode("Shape");
Shape518.USE = "JointShape";
Transform517.child = new undefined();

Transform517.child[0] = Shape518;

HAnimSegment515.children[1] = Transform517;

let HAnimSite519 = browser.currentScene.createNode("HAnimSite");
HAnimSite519.name = "SEGMENT_FOR_l3_tip";
HAnimSite519.DEF = "hanim_SEGMENT_FOR_l3_tip";
let Transform520 = browser.currentScene.createNode("Transform");
Transform520.translation = new SFVec3f(new float[-0.0002,-0.1156,0.9574]);
let Shape521 = browser.currentScene.createNode("Shape");
Shape521.USE = "SiteShape";
Transform520.child = new undefined();

Transform520.child[0] = Shape521;

HAnimSite519.children = new MFNode();

HAnimSite519.children[0] = Transform520;

HAnimSegment515.children[2] = HAnimSite519;

HAnimJoint514.children = new MFNode();

HAnimJoint514.children[0] = HAnimSegment515;

let HAnimJoint522 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint522.name = "l2";
HAnimJoint522.DEF = "hanim_l2";
HAnimJoint522.center = new SFVec3f(new float[-0.0002,-0.1156,0.9738]);
HAnimJoint522.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint522.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment523 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment523.name = "SEGMENT_FOR_l2";
HAnimSegment523.DEF = "hanim_SEGMENT_FOR_l2";
let TouchSensor524 = browser.currentScene.createNode("TouchSensor");
TouchSensor524.description = "joint l2 segment SEGMENT_FOR_l2";
HAnimSegment523.children = new MFNode();

HAnimSegment523.children[0] = TouchSensor524;

let Transform525 = browser.currentScene.createNode("Transform");
Transform525.translation = new SFVec3f(new float[-0.0002,-0.1156,0.9738]);
let Shape526 = browser.currentScene.createNode("Shape");
Shape526.USE = "JointShape";
Transform525.child = new undefined();

Transform525.child[0] = Shape526;

HAnimSegment523.children[1] = Transform525;

let HAnimSite527 = browser.currentScene.createNode("HAnimSite");
HAnimSite527.name = "SEGMENT_FOR_l2_tip";
HAnimSite527.DEF = "hanim_SEGMENT_FOR_l2_tip";
let Transform528 = browser.currentScene.createNode("Transform");
Transform528.translation = new SFVec3f(new float[-0.0002,-0.1156,0.9738]);
let Shape529 = browser.currentScene.createNode("Shape");
Shape529.USE = "SiteShape";
Transform528.child = new undefined();

Transform528.child[0] = Shape529;

HAnimSite527.children = new MFNode();

HAnimSite527.children[0] = Transform528;

HAnimSegment523.children[2] = HAnimSite527;

HAnimJoint522.children = new MFNode();

HAnimJoint522.children[0] = HAnimSegment523;

let HAnimJoint530 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint530.name = "l1";
HAnimJoint530.DEF = "hanim_l1";
HAnimJoint530.center = new SFVec3f(new float[-0.0002,-0.1156,0.9911]);
HAnimJoint530.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint530.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment531 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment531.name = "SEGMENT_FOR_l1";
HAnimSegment531.DEF = "hanim_SEGMENT_FOR_l1";
let TouchSensor532 = browser.currentScene.createNode("TouchSensor");
TouchSensor532.description = "joint l1 segment SEGMENT_FOR_l1";
HAnimSegment531.children = new MFNode();

HAnimSegment531.children[0] = TouchSensor532;

let Transform533 = browser.currentScene.createNode("Transform");
Transform533.translation = new SFVec3f(new float[-0.0002,-0.1156,0.9911]);
let Shape534 = browser.currentScene.createNode("Shape");
Shape534.USE = "JointShape";
Transform533.child = new undefined();

Transform533.child[0] = Shape534;

HAnimSegment531.children[1] = Transform533;

let HAnimSite535 = browser.currentScene.createNode("HAnimSite");
HAnimSite535.name = "SEGMENT_FOR_l1_tip";
HAnimSite535.DEF = "hanim_SEGMENT_FOR_l1_tip";
let Transform536 = browser.currentScene.createNode("Transform");
Transform536.translation = new SFVec3f(new float[-0.0002,-0.1156,0.9911]);
let Shape537 = browser.currentScene.createNode("Shape");
Shape537.USE = "SiteShape";
Transform536.child = new undefined();

Transform536.child[0] = Shape537;

HAnimSite535.children = new MFNode();

HAnimSite535.children[0] = Transform536;

HAnimSegment531.children[2] = HAnimSite535;

HAnimJoint530.children = new MFNode();

HAnimJoint530.children[0] = HAnimSegment531;

let HAnimJoint538 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint538.name = "t12";
HAnimJoint538.DEF = "hanim_t12";
HAnimJoint538.center = new SFVec3f(new float[-0.0002,-0.1156,1.0145]);
HAnimJoint538.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint538.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment539 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment539.name = "SEGMENT_FOR_t12";
HAnimSegment539.DEF = "hanim_SEGMENT_FOR_t12";
let TouchSensor540 = browser.currentScene.createNode("TouchSensor");
TouchSensor540.description = "joint t12 segment SEGMENT_FOR_t12";
HAnimSegment539.children = new MFNode();

HAnimSegment539.children[0] = TouchSensor540;

let Transform541 = browser.currentScene.createNode("Transform");
Transform541.translation = new SFVec3f(new float[-0.0002,-0.1156,1.0145]);
let Shape542 = browser.currentScene.createNode("Shape");
Shape542.USE = "JointShape";
Transform541.child = new undefined();

Transform541.child[0] = Shape542;

HAnimSegment539.children[1] = Transform541;

let HAnimSite543 = browser.currentScene.createNode("HAnimSite");
HAnimSite543.name = "SEGMENT_FOR_t12_tip";
HAnimSite543.DEF = "hanim_SEGMENT_FOR_t12_tip";
let Transform544 = browser.currentScene.createNode("Transform");
Transform544.translation = new SFVec3f(new float[-0.0002,-0.1156,1.0145]);
let Shape545 = browser.currentScene.createNode("Shape");
Shape545.USE = "SiteShape";
Transform544.child = new undefined();

Transform544.child[0] = Shape545;

HAnimSite543.children = new MFNode();

HAnimSite543.children[0] = Transform544;

HAnimSegment539.children[2] = HAnimSite543;

HAnimJoint538.children = new MFNode();

HAnimJoint538.children[0] = HAnimSegment539;

let HAnimJoint546 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint546.name = "t11";
HAnimJoint546.DEF = "hanim_t11";
HAnimJoint546.center = new SFVec3f(new float[-0.0002,-0.1156,1.0381]);
HAnimJoint546.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint546.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment547 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment547.name = "SEGMENT_FOR_t11";
HAnimSegment547.DEF = "hanim_SEGMENT_FOR_t11";
let TouchSensor548 = browser.currentScene.createNode("TouchSensor");
TouchSensor548.description = "joint t11 segment SEGMENT_FOR_t11";
HAnimSegment547.children = new MFNode();

HAnimSegment547.children[0] = TouchSensor548;

let Transform549 = browser.currentScene.createNode("Transform");
Transform549.translation = new SFVec3f(new float[-0.0002,-0.1156,1.0381]);
let Shape550 = browser.currentScene.createNode("Shape");
Shape550.USE = "JointShape";
Transform549.child = new undefined();

Transform549.child[0] = Shape550;

HAnimSegment547.children[1] = Transform549;

let HAnimSite551 = browser.currentScene.createNode("HAnimSite");
HAnimSite551.name = "SEGMENT_FOR_t11_tip";
HAnimSite551.DEF = "hanim_SEGMENT_FOR_t11_tip";
let Transform552 = browser.currentScene.createNode("Transform");
Transform552.translation = new SFVec3f(new float[-0.0002,-0.1156,1.0381]);
let Shape553 = browser.currentScene.createNode("Shape");
Shape553.USE = "SiteShape";
Transform552.child = new undefined();

Transform552.child[0] = Shape553;

HAnimSite551.children = new MFNode();

HAnimSite551.children[0] = Transform552;

HAnimSegment547.children[2] = HAnimSite551;

HAnimJoint546.children = new MFNode();

HAnimJoint546.children[0] = HAnimSegment547;

let HAnimJoint554 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint554.name = "t10";
HAnimJoint554.DEF = "hanim_t10";
HAnimJoint554.center = new SFVec3f(new float[-0.0002,-0.1157,1.0552]);
HAnimJoint554.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint554.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment555 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment555.name = "SEGMENT_FOR_t10";
HAnimSegment555.DEF = "hanim_SEGMENT_FOR_t10";
let TouchSensor556 = browser.currentScene.createNode("TouchSensor");
TouchSensor556.description = "joint t10 segment SEGMENT_FOR_t10";
HAnimSegment555.children = new MFNode();

HAnimSegment555.children[0] = TouchSensor556;

let Transform557 = browser.currentScene.createNode("Transform");
Transform557.translation = new SFVec3f(new float[-0.0002,-0.1157,1.0552]);
let Shape558 = browser.currentScene.createNode("Shape");
Shape558.USE = "JointShape";
Transform557.child = new undefined();

Transform557.child[0] = Shape558;

HAnimSegment555.children[1] = Transform557;

let HAnimSite559 = browser.currentScene.createNode("HAnimSite");
HAnimSite559.name = "SEGMENT_FOR_t10_tip";
HAnimSite559.DEF = "hanim_SEGMENT_FOR_t10_tip";
let Transform560 = browser.currentScene.createNode("Transform");
Transform560.translation = new SFVec3f(new float[-0.0002,-0.1157,1.0552]);
let Shape561 = browser.currentScene.createNode("Shape");
Shape561.USE = "SiteShape";
Transform560.child = new undefined();

Transform560.child[0] = Shape561;

HAnimSite559.children = new MFNode();

HAnimSite559.children[0] = Transform560;

HAnimSegment555.children[2] = HAnimSite559;

HAnimJoint554.children = new MFNode();

HAnimJoint554.children[0] = HAnimSegment555;

let HAnimJoint562 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint562.name = "t9";
HAnimJoint562.DEF = "hanim_t9";
HAnimJoint562.center = new SFVec3f(new float[-0.0002,-0.1156,1.0699]);
HAnimJoint562.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint562.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment563 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment563.name = "SEGMENT_FOR_t9";
HAnimSegment563.DEF = "hanim_SEGMENT_FOR_t9";
let TouchSensor564 = browser.currentScene.createNode("TouchSensor");
TouchSensor564.description = "joint t9 segment SEGMENT_FOR_t9";
HAnimSegment563.children = new MFNode();

HAnimSegment563.children[0] = TouchSensor564;

let Transform565 = browser.currentScene.createNode("Transform");
Transform565.translation = new SFVec3f(new float[-0.0002,-0.1156,1.0699]);
let Shape566 = browser.currentScene.createNode("Shape");
Shape566.USE = "JointShape";
Transform565.child = new undefined();

Transform565.child[0] = Shape566;

HAnimSegment563.children[1] = Transform565;

let HAnimSite567 = browser.currentScene.createNode("HAnimSite");
HAnimSite567.name = "SEGMENT_FOR_t9_tip";
HAnimSite567.DEF = "hanim_SEGMENT_FOR_t9_tip";
let Transform568 = browser.currentScene.createNode("Transform");
Transform568.translation = new SFVec3f(new float[-0.0002,-0.1156,1.0699]);
let Shape569 = browser.currentScene.createNode("Shape");
Shape569.USE = "SiteShape";
Transform568.child = new undefined();

Transform568.child[0] = Shape569;

HAnimSite567.children = new MFNode();

HAnimSite567.children[0] = Transform568;

HAnimSegment563.children[2] = HAnimSite567;

HAnimJoint562.children = new MFNode();

HAnimJoint562.children[0] = HAnimSegment563;

let HAnimJoint570 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint570.name = "t8";
HAnimJoint570.DEF = "hanim_t8";
HAnimJoint570.center = new SFVec3f(new float[-0.0002,-0.1156,1.0845]);
HAnimJoint570.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint570.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment571 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment571.name = "SEGMENT_FOR_t8";
HAnimSegment571.DEF = "hanim_SEGMENT_FOR_t8";
let TouchSensor572 = browser.currentScene.createNode("TouchSensor");
TouchSensor572.description = "joint t8 segment SEGMENT_FOR_t8";
HAnimSegment571.children = new MFNode();

HAnimSegment571.children[0] = TouchSensor572;

let Transform573 = browser.currentScene.createNode("Transform");
Transform573.translation = new SFVec3f(new float[-0.0002,-0.1156,1.0845]);
let Shape574 = browser.currentScene.createNode("Shape");
Shape574.USE = "JointShape";
Transform573.child = new undefined();

Transform573.child[0] = Shape574;

HAnimSegment571.children[1] = Transform573;

let HAnimSite575 = browser.currentScene.createNode("HAnimSite");
HAnimSite575.name = "SEGMENT_FOR_t8_tip";
HAnimSite575.DEF = "hanim_SEGMENT_FOR_t8_tip";
let Transform576 = browser.currentScene.createNode("Transform");
Transform576.translation = new SFVec3f(new float[-0.0002,-0.1156,1.0845]);
let Shape577 = browser.currentScene.createNode("Shape");
Shape577.USE = "SiteShape";
Transform576.child = new undefined();

Transform576.child[0] = Shape577;

HAnimSite575.children = new MFNode();

HAnimSite575.children[0] = Transform576;

HAnimSegment571.children[2] = HAnimSite575;

HAnimJoint570.children = new MFNode();

HAnimJoint570.children[0] = HAnimSegment571;

let HAnimJoint578 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint578.name = "t7";
HAnimJoint578.DEF = "hanim_t7";
HAnimJoint578.center = new SFVec3f(new float[-0.0002,-0.1156,1.1002]);
HAnimJoint578.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint578.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment579 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment579.name = "SEGMENT_FOR_t7";
HAnimSegment579.DEF = "hanim_SEGMENT_FOR_t7";
let TouchSensor580 = browser.currentScene.createNode("TouchSensor");
TouchSensor580.description = "joint t7 segment SEGMENT_FOR_t7";
HAnimSegment579.children = new MFNode();

HAnimSegment579.children[0] = TouchSensor580;

let Transform581 = browser.currentScene.createNode("Transform");
Transform581.translation = new SFVec3f(new float[-0.0002,-0.1156,1.1002]);
let Shape582 = browser.currentScene.createNode("Shape");
Shape582.USE = "JointShape";
Transform581.child = new undefined();

Transform581.child[0] = Shape582;

HAnimSegment579.children[1] = Transform581;

let HAnimSite583 = browser.currentScene.createNode("HAnimSite");
HAnimSite583.name = "SEGMENT_FOR_t7_tip";
HAnimSite583.DEF = "hanim_SEGMENT_FOR_t7_tip";
let Transform584 = browser.currentScene.createNode("Transform");
Transform584.translation = new SFVec3f(new float[-0.0002,-0.1156,1.1002]);
let Shape585 = browser.currentScene.createNode("Shape");
Shape585.USE = "SiteShape";
Transform584.child = new undefined();

Transform584.child[0] = Shape585;

HAnimSite583.children = new MFNode();

HAnimSite583.children[0] = Transform584;

HAnimSegment579.children[2] = HAnimSite583;

HAnimJoint578.children = new MFNode();

HAnimJoint578.children[0] = HAnimSegment579;

let HAnimJoint586 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint586.name = "t6";
HAnimJoint586.DEF = "hanim_t6";
HAnimJoint586.center = new SFVec3f(new float[-0.0002,-0.1156,1.1131]);
HAnimJoint586.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint586.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment587 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment587.name = "SEGMENT_FOR_t6";
HAnimSegment587.DEF = "hanim_SEGMENT_FOR_t6";
let TouchSensor588 = browser.currentScene.createNode("TouchSensor");
TouchSensor588.description = "joint t6 segment SEGMENT_FOR_t6";
HAnimSegment587.children = new MFNode();

HAnimSegment587.children[0] = TouchSensor588;

let Transform589 = browser.currentScene.createNode("Transform");
Transform589.translation = new SFVec3f(new float[-0.0002,-0.1156,1.1131]);
let Shape590 = browser.currentScene.createNode("Shape");
Shape590.USE = "JointShape";
Transform589.child = new undefined();

Transform589.child[0] = Shape590;

HAnimSegment587.children[1] = Transform589;

let HAnimSite591 = browser.currentScene.createNode("HAnimSite");
HAnimSite591.name = "SEGMENT_FOR_t6_tip";
HAnimSite591.DEF = "hanim_SEGMENT_FOR_t6_tip";
let Transform592 = browser.currentScene.createNode("Transform");
Transform592.translation = new SFVec3f(new float[-0.0002,-0.1156,1.1131]);
let Shape593 = browser.currentScene.createNode("Shape");
Shape593.USE = "SiteShape";
Transform592.child = new undefined();

Transform592.child[0] = Shape593;

HAnimSite591.children = new MFNode();

HAnimSite591.children[0] = Transform592;

HAnimSegment587.children[2] = HAnimSite591;

HAnimJoint586.children = new MFNode();

HAnimJoint586.children[0] = HAnimSegment587;

let HAnimJoint594 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint594.name = "t5";
HAnimJoint594.DEF = "hanim_t5";
HAnimJoint594.center = new SFVec3f(new float[-0.0002,-0.1156,1.1286]);
HAnimJoint594.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint594.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment595 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment595.name = "SEGMENT_FOR_t5";
HAnimSegment595.DEF = "hanim_SEGMENT_FOR_t5";
let TouchSensor596 = browser.currentScene.createNode("TouchSensor");
TouchSensor596.description = "joint t5 segment SEGMENT_FOR_t5";
HAnimSegment595.children = new MFNode();

HAnimSegment595.children[0] = TouchSensor596;

let Transform597 = browser.currentScene.createNode("Transform");
Transform597.translation = new SFVec3f(new float[-0.0002,-0.1156,1.1286]);
let Shape598 = browser.currentScene.createNode("Shape");
Shape598.USE = "JointShape";
Transform597.child = new undefined();

Transform597.child[0] = Shape598;

HAnimSegment595.children[1] = Transform597;

let HAnimSite599 = browser.currentScene.createNode("HAnimSite");
HAnimSite599.name = "SEGMENT_FOR_t5_tip";
HAnimSite599.DEF = "hanim_SEGMENT_FOR_t5_tip";
let Transform600 = browser.currentScene.createNode("Transform");
Transform600.translation = new SFVec3f(new float[-0.0002,-0.1156,1.1286]);
let Shape601 = browser.currentScene.createNode("Shape");
Shape601.USE = "SiteShape";
Transform600.child = new undefined();

Transform600.child[0] = Shape601;

HAnimSite599.children = new MFNode();

HAnimSite599.children[0] = Transform600;

HAnimSegment595.children[2] = HAnimSite599;

HAnimJoint594.children = new MFNode();

HAnimJoint594.children[0] = HAnimSegment595;

let HAnimJoint602 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint602.name = "t4";
HAnimJoint602.DEF = "hanim_t4";
HAnimJoint602.center = new SFVec3f(new float[-0.0002,-0.1156,1.1439]);
HAnimJoint602.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint602.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment603 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment603.name = "SEGMENT_FOR_t4";
HAnimSegment603.DEF = "hanim_SEGMENT_FOR_t4";
let TouchSensor604 = browser.currentScene.createNode("TouchSensor");
TouchSensor604.description = "joint t4 segment SEGMENT_FOR_t4";
HAnimSegment603.children = new MFNode();

HAnimSegment603.children[0] = TouchSensor604;

let Transform605 = browser.currentScene.createNode("Transform");
Transform605.translation = new SFVec3f(new float[-0.0002,-0.1156,1.1439]);
let Shape606 = browser.currentScene.createNode("Shape");
Shape606.USE = "JointShape";
Transform605.child = new undefined();

Transform605.child[0] = Shape606;

HAnimSegment603.children[1] = Transform605;

let HAnimSite607 = browser.currentScene.createNode("HAnimSite");
HAnimSite607.name = "SEGMENT_FOR_t4_tip";
HAnimSite607.DEF = "hanim_SEGMENT_FOR_t4_tip";
let Transform608 = browser.currentScene.createNode("Transform");
Transform608.translation = new SFVec3f(new float[-0.0002,-0.1156,1.1439]);
let Shape609 = browser.currentScene.createNode("Shape");
Shape609.USE = "SiteShape";
Transform608.child = new undefined();

Transform608.child[0] = Shape609;

HAnimSite607.children = new MFNode();

HAnimSite607.children[0] = Transform608;

HAnimSegment603.children[2] = HAnimSite607;

HAnimJoint602.children = new MFNode();

HAnimJoint602.children[0] = HAnimSegment603;

let HAnimJoint610 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint610.name = "t3";
HAnimJoint610.DEF = "hanim_t3";
HAnimJoint610.center = new SFVec3f(new float[-0.0002,-0.1156,1.1623]);
HAnimJoint610.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint610.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment611 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment611.name = "SEGMENT_FOR_t3";
HAnimSegment611.DEF = "hanim_SEGMENT_FOR_t3";
let TouchSensor612 = browser.currentScene.createNode("TouchSensor");
TouchSensor612.description = "joint t3 segment SEGMENT_FOR_t3";
HAnimSegment611.children = new MFNode();

HAnimSegment611.children[0] = TouchSensor612;

let Transform613 = browser.currentScene.createNode("Transform");
Transform613.translation = new SFVec3f(new float[-0.0002,-0.1156,1.1623]);
let Shape614 = browser.currentScene.createNode("Shape");
Shape614.USE = "JointShape";
Transform613.child = new undefined();

Transform613.child[0] = Shape614;

HAnimSegment611.children[1] = Transform613;

let HAnimSite615 = browser.currentScene.createNode("HAnimSite");
HAnimSite615.name = "SEGMENT_FOR_t3_tip";
HAnimSite615.DEF = "hanim_SEGMENT_FOR_t3_tip";
let Transform616 = browser.currentScene.createNode("Transform");
Transform616.translation = new SFVec3f(new float[-0.0002,-0.1156,1.1623]);
let Shape617 = browser.currentScene.createNode("Shape");
Shape617.USE = "SiteShape";
Transform616.child = new undefined();

Transform616.child[0] = Shape617;

HAnimSite615.children = new MFNode();

HAnimSite615.children[0] = Transform616;

HAnimSegment611.children[2] = HAnimSite615;

HAnimJoint610.children = new MFNode();

HAnimJoint610.children[0] = HAnimSegment611;

let HAnimJoint618 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint618.name = "t2";
HAnimJoint618.DEF = "hanim_t2";
HAnimJoint618.center = new SFVec3f(new float[-0.0002,-0.1157,1.1871]);
HAnimJoint618.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint618.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment619 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment619.name = "SEGMENT_FOR_t2";
HAnimSegment619.DEF = "hanim_SEGMENT_FOR_t2";
let TouchSensor620 = browser.currentScene.createNode("TouchSensor");
TouchSensor620.description = "joint t2 segment SEGMENT_FOR_t2";
HAnimSegment619.children = new MFNode();

HAnimSegment619.children[0] = TouchSensor620;

let Transform621 = browser.currentScene.createNode("Transform");
Transform621.translation = new SFVec3f(new float[-0.0002,-0.1157,1.1871]);
let Shape622 = browser.currentScene.createNode("Shape");
Shape622.USE = "JointShape";
Transform621.child = new undefined();

Transform621.child[0] = Shape622;

HAnimSegment619.children[1] = Transform621;

let HAnimSite623 = browser.currentScene.createNode("HAnimSite");
HAnimSite623.name = "SEGMENT_FOR_t2_tip";
HAnimSite623.DEF = "hanim_SEGMENT_FOR_t2_tip";
let Transform624 = browser.currentScene.createNode("Transform");
Transform624.translation = new SFVec3f(new float[-0.0002,-0.1157,1.1871]);
let Shape625 = browser.currentScene.createNode("Shape");
Shape625.USE = "SiteShape";
Transform624.child = new undefined();

Transform624.child[0] = Shape625;

HAnimSite623.children = new MFNode();

HAnimSite623.children[0] = Transform624;

HAnimSegment619.children[2] = HAnimSite623;

HAnimJoint618.children = new MFNode();

HAnimJoint618.children[0] = HAnimSegment619;

let HAnimJoint626 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint626.name = "t1";
HAnimJoint626.DEF = "hanim_t1";
HAnimJoint626.center = new SFVec3f(new float[-0.0002,-0.1156,1.2109]);
HAnimJoint626.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint626.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment627 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment627.name = "SEGMENT_FOR_t1";
HAnimSegment627.DEF = "hanim_SEGMENT_FOR_t1";
let TouchSensor628 = browser.currentScene.createNode("TouchSensor");
TouchSensor628.description = "joint t1 segment SEGMENT_FOR_t1";
HAnimSegment627.children = new MFNode();

HAnimSegment627.children[0] = TouchSensor628;

let Transform629 = browser.currentScene.createNode("Transform");
Transform629.translation = new SFVec3f(new float[-0.0002,-0.1156,1.2109]);
let Shape630 = browser.currentScene.createNode("Shape");
Shape630.USE = "JointShape";
Transform629.child = new undefined();

Transform629.child[0] = Shape630;

HAnimSegment627.children[1] = Transform629;

let HAnimSite631 = browser.currentScene.createNode("HAnimSite");
HAnimSite631.name = "SEGMENT_FOR_t1_tip";
HAnimSite631.DEF = "hanim_SEGMENT_FOR_t1_tip";
let Transform632 = browser.currentScene.createNode("Transform");
Transform632.translation = new SFVec3f(new float[-0.0002,-0.1156,1.2109]);
let Shape633 = browser.currentScene.createNode("Shape");
Shape633.USE = "SiteShape";
Transform632.child = new undefined();

Transform632.child[0] = Shape633;

HAnimSite631.children = new MFNode();

HAnimSite631.children[0] = Transform632;

HAnimSegment627.children[2] = HAnimSite631;

HAnimJoint626.children = new MFNode();

HAnimJoint626.children[0] = HAnimSegment627;

let HAnimJoint634 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint634.name = "c7";
HAnimJoint634.DEF = "hanim_c7";
HAnimJoint634.center = new SFVec3f(new float[-0.0002,-0.1169,1.2368]);
HAnimJoint634.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint634.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment635 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment635.name = "SEGMENT_FOR_c7";
HAnimSegment635.DEF = "hanim_SEGMENT_FOR_c7";
let TouchSensor636 = browser.currentScene.createNode("TouchSensor");
TouchSensor636.description = "joint c7 segment SEGMENT_FOR_c7";
HAnimSegment635.children = new MFNode();

HAnimSegment635.children[0] = TouchSensor636;

let Transform637 = browser.currentScene.createNode("Transform");
Transform637.translation = new SFVec3f(new float[-0.0002,-0.1169,1.2368]);
let Shape638 = browser.currentScene.createNode("Shape");
Shape638.USE = "JointShape";
Transform637.child = new undefined();

Transform637.child[0] = Shape638;

HAnimSegment635.children[1] = Transform637;

let HAnimSite639 = browser.currentScene.createNode("HAnimSite");
HAnimSite639.name = "SEGMENT_FOR_c7_tip";
HAnimSite639.DEF = "hanim_SEGMENT_FOR_c7_tip";
let Transform640 = browser.currentScene.createNode("Transform");
Transform640.translation = new SFVec3f(new float[-0.0002,-0.1169,1.2368]);
let Shape641 = browser.currentScene.createNode("Shape");
Shape641.USE = "SiteShape";
Transform640.child = new undefined();

Transform640.child[0] = Shape641;

HAnimSite639.children = new MFNode();

HAnimSite639.children[0] = Transform640;

HAnimSegment635.children[2] = HAnimSite639;

HAnimJoint634.children = new MFNode();

HAnimJoint634.children[0] = HAnimSegment635;

let HAnimJoint642 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint642.name = "c6";
HAnimJoint642.DEF = "hanim_c6";
HAnimJoint642.center = new SFVec3f(new float[-0.0002,-0.1169,1.249]);
HAnimJoint642.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint642.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment643 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment643.name = "SEGMENT_FOR_c6";
HAnimSegment643.DEF = "hanim_SEGMENT_FOR_c6";
let TouchSensor644 = browser.currentScene.createNode("TouchSensor");
TouchSensor644.description = "joint c6 segment SEGMENT_FOR_c6";
HAnimSegment643.children = new MFNode();

HAnimSegment643.children[0] = TouchSensor644;

let Transform645 = browser.currentScene.createNode("Transform");
Transform645.translation = new SFVec3f(new float[-0.0002,-0.1169,1.249]);
let Shape646 = browser.currentScene.createNode("Shape");
Shape646.USE = "JointShape";
Transform645.child = new undefined();

Transform645.child[0] = Shape646;

HAnimSegment643.children[1] = Transform645;

let HAnimSite647 = browser.currentScene.createNode("HAnimSite");
HAnimSite647.name = "SEGMENT_FOR_c6_tip";
HAnimSite647.DEF = "hanim_SEGMENT_FOR_c6_tip";
let Transform648 = browser.currentScene.createNode("Transform");
Transform648.translation = new SFVec3f(new float[-0.0002,-0.1169,1.249]);
let Shape649 = browser.currentScene.createNode("Shape");
Shape649.USE = "SiteShape";
Transform648.child = new undefined();

Transform648.child[0] = Shape649;

HAnimSite647.children = new MFNode();

HAnimSite647.children[0] = Transform648;

HAnimSegment643.children[2] = HAnimSite647;

HAnimJoint642.children = new MFNode();

HAnimJoint642.children[0] = HAnimSegment643;

let HAnimJoint650 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint650.name = "c5";
HAnimJoint650.DEF = "hanim_c5";
HAnimJoint650.center = new SFVec3f(new float[-0.0002,-0.1169,1.2613]);
HAnimJoint650.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint650.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment651 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment651.name = "SEGMENT_FOR_c5";
HAnimSegment651.DEF = "hanim_SEGMENT_FOR_c5";
let TouchSensor652 = browser.currentScene.createNode("TouchSensor");
TouchSensor652.description = "joint c5 segment SEGMENT_FOR_c5";
HAnimSegment651.children = new MFNode();

HAnimSegment651.children[0] = TouchSensor652;

let Transform653 = browser.currentScene.createNode("Transform");
Transform653.translation = new SFVec3f(new float[-0.0002,-0.1169,1.2613]);
let Shape654 = browser.currentScene.createNode("Shape");
Shape654.USE = "JointShape";
Transform653.child = new undefined();

Transform653.child[0] = Shape654;

HAnimSegment651.children[1] = Transform653;

let HAnimSite655 = browser.currentScene.createNode("HAnimSite");
HAnimSite655.name = "SEGMENT_FOR_c5_tip";
HAnimSite655.DEF = "hanim_SEGMENT_FOR_c5_tip";
let Transform656 = browser.currentScene.createNode("Transform");
Transform656.translation = new SFVec3f(new float[-0.0002,-0.1169,1.2613]);
let Shape657 = browser.currentScene.createNode("Shape");
Shape657.USE = "SiteShape";
Transform656.child = new undefined();

Transform656.child[0] = Shape657;

HAnimSite655.children = new MFNode();

HAnimSite655.children[0] = Transform656;

HAnimSegment651.children[2] = HAnimSite655;

HAnimJoint650.children = new MFNode();

HAnimJoint650.children[0] = HAnimSegment651;

let HAnimJoint658 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint658.name = "c4";
HAnimJoint658.DEF = "hanim_c4";
HAnimJoint658.center = new SFVec3f(new float[-0.0002,-0.1169,1.2737]);
HAnimJoint658.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint658.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment659 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment659.name = "SEGMENT_FOR_c4";
HAnimSegment659.DEF = "hanim_SEGMENT_FOR_c4";
let TouchSensor660 = browser.currentScene.createNode("TouchSensor");
TouchSensor660.description = "joint c4 segment SEGMENT_FOR_c4";
HAnimSegment659.children = new MFNode();

HAnimSegment659.children[0] = TouchSensor660;

let Transform661 = browser.currentScene.createNode("Transform");
Transform661.translation = new SFVec3f(new float[-0.0002,-0.1169,1.2737]);
let Shape662 = browser.currentScene.createNode("Shape");
Shape662.USE = "JointShape";
Transform661.child = new undefined();

Transform661.child[0] = Shape662;

HAnimSegment659.children[1] = Transform661;

let HAnimSite663 = browser.currentScene.createNode("HAnimSite");
HAnimSite663.name = "SEGMENT_FOR_c4_tip";
HAnimSite663.DEF = "hanim_SEGMENT_FOR_c4_tip";
let Transform664 = browser.currentScene.createNode("Transform");
Transform664.translation = new SFVec3f(new float[-0.0002,-0.1169,1.2737]);
let Shape665 = browser.currentScene.createNode("Shape");
Shape665.USE = "SiteShape";
Transform664.child = new undefined();

Transform664.child[0] = Shape665;

HAnimSite663.children = new MFNode();

HAnimSite663.children[0] = Transform664;

HAnimSegment659.children[2] = HAnimSite663;

HAnimJoint658.children = new MFNode();

HAnimJoint658.children[0] = HAnimSegment659;

let HAnimJoint666 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint666.name = "c3";
HAnimJoint666.DEF = "hanim_c3";
HAnimJoint666.center = new SFVec3f(new float[-0.0002,-0.1169,1.2865]);
HAnimJoint666.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint666.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment667 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment667.name = "SEGMENT_FOR_c3";
HAnimSegment667.DEF = "hanim_SEGMENT_FOR_c3";
let TouchSensor668 = browser.currentScene.createNode("TouchSensor");
TouchSensor668.description = "joint c3 segment SEGMENT_FOR_c3";
HAnimSegment667.children = new MFNode();

HAnimSegment667.children[0] = TouchSensor668;

let Transform669 = browser.currentScene.createNode("Transform");
Transform669.translation = new SFVec3f(new float[-0.0002,-0.1169,1.2865]);
let Shape670 = browser.currentScene.createNode("Shape");
Shape670.USE = "JointShape";
Transform669.child = new undefined();

Transform669.child[0] = Shape670;

HAnimSegment667.children[1] = Transform669;

let HAnimSite671 = browser.currentScene.createNode("HAnimSite");
HAnimSite671.name = "SEGMENT_FOR_c3_tip";
HAnimSite671.DEF = "hanim_SEGMENT_FOR_c3_tip";
let Transform672 = browser.currentScene.createNode("Transform");
Transform672.translation = new SFVec3f(new float[-0.0002,-0.1169,1.2865]);
let Shape673 = browser.currentScene.createNode("Shape");
Shape673.USE = "SiteShape";
Transform672.child = new undefined();

Transform672.child[0] = Shape673;

HAnimSite671.children = new MFNode();

HAnimSite671.children[0] = Transform672;

HAnimSegment667.children[2] = HAnimSite671;

HAnimJoint666.children = new MFNode();

HAnimJoint666.children[0] = HAnimSegment667;

let HAnimJoint674 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint674.name = "c2";
HAnimJoint674.DEF = "hanim_c2";
HAnimJoint674.center = new SFVec3f(new float[-0.0002,-0.1169,1.2982]);
HAnimJoint674.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint674.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment675 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment675.name = "SEGMENT_FOR_c2";
HAnimSegment675.DEF = "hanim_SEGMENT_FOR_c2";
let TouchSensor676 = browser.currentScene.createNode("TouchSensor");
TouchSensor676.description = "joint c2 segment SEGMENT_FOR_c2";
HAnimSegment675.children = new MFNode();

HAnimSegment675.children[0] = TouchSensor676;

let Transform677 = browser.currentScene.createNode("Transform");
Transform677.translation = new SFVec3f(new float[-0.0002,-0.1169,1.2982]);
let Shape678 = browser.currentScene.createNode("Shape");
Shape678.USE = "JointShape";
Transform677.child = new undefined();

Transform677.child[0] = Shape678;

HAnimSegment675.children[1] = Transform677;

let HAnimSite679 = browser.currentScene.createNode("HAnimSite");
HAnimSite679.name = "SEGMENT_FOR_c2_tip";
HAnimSite679.DEF = "hanim_SEGMENT_FOR_c2_tip";
let Transform680 = browser.currentScene.createNode("Transform");
Transform680.translation = new SFVec3f(new float[-0.0002,-0.1169,1.2982]);
let Shape681 = browser.currentScene.createNode("Shape");
Shape681.USE = "SiteShape";
Transform680.child = new undefined();

Transform680.child[0] = Shape681;

HAnimSite679.children = new MFNode();

HAnimSite679.children[0] = Transform680;

HAnimSegment675.children[2] = HAnimSite679;

HAnimJoint674.children = new MFNode();

HAnimJoint674.children[0] = HAnimSegment675;

let HAnimJoint682 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint682.name = "c1";
HAnimJoint682.DEF = "hanim_c1";
HAnimJoint682.center = new SFVec3f(new float[-0.0002,-0.1169,1.3099]);
HAnimJoint682.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint682.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment683 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment683.name = "SEGMENT_FOR_c1";
HAnimSegment683.DEF = "hanim_SEGMENT_FOR_c1";
let TouchSensor684 = browser.currentScene.createNode("TouchSensor");
TouchSensor684.description = "joint c1 segment SEGMENT_FOR_c1";
HAnimSegment683.children = new MFNode();

HAnimSegment683.children[0] = TouchSensor684;

let Transform685 = browser.currentScene.createNode("Transform");
Transform685.translation = new SFVec3f(new float[-0.0002,-0.1169,1.3099]);
let Shape686 = browser.currentScene.createNode("Shape");
Shape686.USE = "JointShape";
Transform685.child = new undefined();

Transform685.child[0] = Shape686;

HAnimSegment683.children[1] = Transform685;

let HAnimSite687 = browser.currentScene.createNode("HAnimSite");
HAnimSite687.name = "SEGMENT_FOR_c1_tip";
HAnimSite687.DEF = "hanim_SEGMENT_FOR_c1_tip";
let Transform688 = browser.currentScene.createNode("Transform");
Transform688.translation = new SFVec3f(new float[-0.0002,-0.1169,1.3099]);
let Shape689 = browser.currentScene.createNode("Shape");
Shape689.USE = "SiteShape";
Transform688.child = new undefined();

Transform688.child[0] = Shape689;

HAnimSite687.children = new MFNode();

HAnimSite687.children[0] = Transform688;

HAnimSegment683.children[2] = HAnimSite687;

HAnimJoint682.children = new MFNode();

HAnimJoint682.children[0] = HAnimSegment683;

let HAnimJoint690 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint690.name = "skull";
HAnimJoint690.DEF = "hanim_skull";
HAnimJoint690.center = new SFVec3f(new float[-0.0002,-0.1173,1.3041]);
HAnimJoint690.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint690.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment691 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment691.name = "SEGMENT_FOR_skull";
HAnimSegment691.DEF = "hanim_SEGMENT_FOR_skull";
let TouchSensor692 = browser.currentScene.createNode("TouchSensor");
TouchSensor692.description = "joint skull segment SEGMENT_FOR_skull";
HAnimSegment691.children = new MFNode();

HAnimSegment691.children[0] = TouchSensor692;

let Transform693 = browser.currentScene.createNode("Transform");
Transform693.translation = new SFVec3f(new float[-0.0002,-0.1173,1.3041]);
let Shape694 = browser.currentScene.createNode("Shape");
Shape694.USE = "JointShape";
Transform693.child = new undefined();

Transform693.child[0] = Shape694;

HAnimSegment691.children[1] = Transform693;

let HAnimSite695 = browser.currentScene.createNode("HAnimSite");
HAnimSite695.name = "SEGMENT_FOR_skull_tip";
HAnimSite695.DEF = "hanim_SEGMENT_FOR_skull_tip";
let Transform696 = browser.currentScene.createNode("Transform");
Transform696.translation = new SFVec3f(new float[-0.0002,-0.1173,1.3041]);
let Shape697 = browser.currentScene.createNode("Shape");
Shape697.USE = "SiteShape";
Transform696.child = new undefined();

Transform696.child[0] = Shape697;

HAnimSite695.children = new MFNode();

HAnimSite695.children[0] = Transform696;

HAnimSegment691.children[2] = HAnimSite695;

HAnimJoint690.children = new MFNode();

HAnimJoint690.children[0] = HAnimSegment691;

let HAnimJoint698 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint698.name = "l_eyelid";
HAnimJoint698.DEF = "hanim_l_eyelid";
HAnimJoint698.center = new SFVec3f(new float[0.0503,-0.0689,1.4157]);
HAnimJoint698.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint698.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment699 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment699.name = "SEGMENT_FOR_l_eyelid";
HAnimSegment699.DEF = "hanim_SEGMENT_FOR_l_eyelid";
let TouchSensor700 = browser.currentScene.createNode("TouchSensor");
TouchSensor700.description = "joint l_eyelid segment SEGMENT_FOR_l_eyelid";
HAnimSegment699.children = new MFNode();

HAnimSegment699.children[0] = TouchSensor700;

let Transform701 = browser.currentScene.createNode("Transform");
Transform701.translation = new SFVec3f(new float[0.0503,-0.0689,1.4157]);
let Shape702 = browser.currentScene.createNode("Shape");
Shape702.USE = "JointShape";
Transform701.child = new undefined();

Transform701.child[0] = Shape702;

HAnimSegment699.children[1] = Transform701;

let HAnimSite703 = browser.currentScene.createNode("HAnimSite");
HAnimSite703.name = "SEGMENT_FOR_l_eyelid_tip";
HAnimSite703.DEF = "hanim_SEGMENT_FOR_l_eyelid_tip";
let Transform704 = browser.currentScene.createNode("Transform");
Transform704.translation = new SFVec3f(new float[0.0503,-0.0689,1.4157]);
let Shape705 = browser.currentScene.createNode("Shape");
Shape705.USE = "SiteShape";
Transform704.child = new undefined();

Transform704.child[0] = Shape705;

HAnimSite703.children = new MFNode();

HAnimSite703.children[0] = Transform704;

HAnimSegment699.children[2] = HAnimSite703;

HAnimJoint698.children = new MFNode();

HAnimJoint698.children[0] = HAnimSegment699;

HAnimJoint690.children[1] = HAnimJoint698;

let HAnimJoint706 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint706.name = "r_eyelid";
HAnimJoint706.DEF = "hanim_r_eyelid";
HAnimJoint706.center = new SFVec3f(new float[-0.0507,-0.0689,1.4157]);
HAnimJoint706.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint706.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment707 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment707.name = "SEGMENT_FOR_r_eyelid";
HAnimSegment707.DEF = "hanim_SEGMENT_FOR_r_eyelid";
let TouchSensor708 = browser.currentScene.createNode("TouchSensor");
TouchSensor708.description = "joint r_eyelid segment SEGMENT_FOR_r_eyelid";
HAnimSegment707.children = new MFNode();

HAnimSegment707.children[0] = TouchSensor708;

let Transform709 = browser.currentScene.createNode("Transform");
Transform709.translation = new SFVec3f(new float[-0.0507,-0.0689,1.4157]);
let Shape710 = browser.currentScene.createNode("Shape");
Shape710.USE = "JointShape";
Transform709.child = new undefined();

Transform709.child[0] = Shape710;

HAnimSegment707.children[1] = Transform709;

let HAnimSite711 = browser.currentScene.createNode("HAnimSite");
HAnimSite711.name = "SEGMENT_FOR_r_eyelid_tip";
HAnimSite711.DEF = "hanim_SEGMENT_FOR_r_eyelid_tip";
let Transform712 = browser.currentScene.createNode("Transform");
Transform712.translation = new SFVec3f(new float[-0.0507,-0.0689,1.4157]);
let Shape713 = browser.currentScene.createNode("Shape");
Shape713.USE = "SiteShape";
Transform712.child = new undefined();

Transform712.child[0] = Shape713;

HAnimSite711.children = new MFNode();

HAnimSite711.children[0] = Transform712;

HAnimSegment707.children[2] = HAnimSite711;

HAnimJoint706.children = new MFNode();

HAnimJoint706.children[0] = HAnimSegment707;

HAnimJoint690.children[2] = HAnimJoint706;

let HAnimJoint714 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint714.name = "l_eyeball";
HAnimJoint714.DEF = "hanim_l_eyeball";
HAnimJoint714.center = new SFVec3f(new float[0.0479,-0.0188,1.3963]);
HAnimJoint714.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint714.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment715 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment715.name = "SEGMENT_FOR_l_eyeball";
HAnimSegment715.DEF = "hanim_SEGMENT_FOR_l_eyeball";
let TouchSensor716 = browser.currentScene.createNode("TouchSensor");
TouchSensor716.description = "joint l_eyeball segment SEGMENT_FOR_l_eyeball";
HAnimSegment715.children = new MFNode();

HAnimSegment715.children[0] = TouchSensor716;

let Transform717 = browser.currentScene.createNode("Transform");
Transform717.translation = new SFVec3f(new float[0.0479,-0.0188,1.3963]);
let Shape718 = browser.currentScene.createNode("Shape");
Shape718.USE = "JointShape";
Transform717.child = new undefined();

Transform717.child[0] = Shape718;

HAnimSegment715.children[1] = Transform717;

let HAnimSite719 = browser.currentScene.createNode("HAnimSite");
HAnimSite719.name = "SEGMENT_FOR_l_eyeball_tip";
HAnimSite719.DEF = "hanim_SEGMENT_FOR_l_eyeball_tip";
let Transform720 = browser.currentScene.createNode("Transform");
Transform720.translation = new SFVec3f(new float[0.0479,-0.0188,1.3963]);
let Shape721 = browser.currentScene.createNode("Shape");
Shape721.USE = "SiteShape";
Transform720.child = new undefined();

Transform720.child[0] = Shape721;

HAnimSite719.children = new MFNode();

HAnimSite719.children[0] = Transform720;

HAnimSegment715.children[2] = HAnimSite719;

HAnimJoint714.children = new MFNode();

HAnimJoint714.children[0] = HAnimSegment715;

HAnimJoint690.children[3] = HAnimJoint714;

let HAnimJoint722 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint722.name = "r_eyeball";
HAnimJoint722.DEF = "hanim_r_eyeball";
HAnimJoint722.center = new SFVec3f(new float[-0.0483,-0.0188,1.3963]);
HAnimJoint722.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint722.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment723 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment723.name = "SEGMENT_FOR_r_eyeball";
HAnimSegment723.DEF = "hanim_SEGMENT_FOR_r_eyeball";
let TouchSensor724 = browser.currentScene.createNode("TouchSensor");
TouchSensor724.description = "joint r_eyeball segment SEGMENT_FOR_r_eyeball";
HAnimSegment723.children = new MFNode();

HAnimSegment723.children[0] = TouchSensor724;

let Transform725 = browser.currentScene.createNode("Transform");
Transform725.translation = new SFVec3f(new float[-0.0483,-0.0188,1.3963]);
let Shape726 = browser.currentScene.createNode("Shape");
Shape726.USE = "JointShape";
Transform725.child = new undefined();

Transform725.child[0] = Shape726;

HAnimSegment723.children[1] = Transform725;

let HAnimSite727 = browser.currentScene.createNode("HAnimSite");
HAnimSite727.name = "SEGMENT_FOR_r_eyeball_tip";
HAnimSite727.DEF = "hanim_SEGMENT_FOR_r_eyeball_tip";
let Transform728 = browser.currentScene.createNode("Transform");
Transform728.translation = new SFVec3f(new float[-0.0483,-0.0188,1.3963]);
let Shape729 = browser.currentScene.createNode("Shape");
Shape729.USE = "SiteShape";
Transform728.child = new undefined();

Transform728.child[0] = Shape729;

HAnimSite727.children = new MFNode();

HAnimSite727.children[0] = Transform728;

HAnimSegment723.children[2] = HAnimSite727;

HAnimJoint722.children = new MFNode();

HAnimJoint722.children[0] = HAnimSegment723;

HAnimJoint690.children[4] = HAnimJoint722;

let HAnimJoint730 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint730.name = "l_eyebrow";
HAnimJoint730.DEF = "hanim_l_eyebrow";
HAnimJoint730.center = new SFVec3f(new float[0.0216,0.0051,1.4053]);
HAnimJoint730.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint730.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment731 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment731.name = "SEGMENT_FOR_l_eyebrow";
HAnimSegment731.DEF = "hanim_SEGMENT_FOR_l_eyebrow";
let TouchSensor732 = browser.currentScene.createNode("TouchSensor");
TouchSensor732.description = "joint l_eyebrow segment SEGMENT_FOR_l_eyebrow";
HAnimSegment731.children = new MFNode();

HAnimSegment731.children[0] = TouchSensor732;

let Transform733 = browser.currentScene.createNode("Transform");
Transform733.translation = new SFVec3f(new float[0.0216,0.0051,1.4053]);
let Shape734 = browser.currentScene.createNode("Shape");
Shape734.USE = "JointShape";
Transform733.child = new undefined();

Transform733.child[0] = Shape734;

HAnimSegment731.children[1] = Transform733;

let HAnimSite735 = browser.currentScene.createNode("HAnimSite");
HAnimSite735.name = "SEGMENT_FOR_l_eyebrow_tip";
HAnimSite735.DEF = "hanim_SEGMENT_FOR_l_eyebrow_tip";
let Transform736 = browser.currentScene.createNode("Transform");
Transform736.translation = new SFVec3f(new float[0.0216,0.0051,1.4053]);
let Shape737 = browser.currentScene.createNode("Shape");
Shape737.USE = "SiteShape";
Transform736.child = new undefined();

Transform736.child[0] = Shape737;

HAnimSite735.children = new MFNode();

HAnimSite735.children[0] = Transform736;

HAnimSegment731.children[2] = HAnimSite735;

HAnimJoint730.children = new MFNode();

HAnimJoint730.children[0] = HAnimSegment731;

HAnimJoint690.children[5] = HAnimJoint730;

let HAnimJoint738 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint738.name = "r_eyebrow";
HAnimJoint738.DEF = "hanim_r_eyebrow";
HAnimJoint738.center = new SFVec3f(new float[-0.0219,0.0051,1.4053]);
HAnimJoint738.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint738.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment739 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment739.name = "SEGMENT_FOR_r_eyebrow";
HAnimSegment739.DEF = "hanim_SEGMENT_FOR_r_eyebrow";
let TouchSensor740 = browser.currentScene.createNode("TouchSensor");
TouchSensor740.description = "joint r_eyebrow segment SEGMENT_FOR_r_eyebrow";
HAnimSegment739.children = new MFNode();

HAnimSegment739.children[0] = TouchSensor740;

let Transform741 = browser.currentScene.createNode("Transform");
Transform741.translation = new SFVec3f(new float[-0.0219,0.0051,1.4053]);
let Shape742 = browser.currentScene.createNode("Shape");
Shape742.USE = "JointShape";
Transform741.child = new undefined();

Transform741.child[0] = Shape742;

HAnimSegment739.children[1] = Transform741;

let HAnimSite743 = browser.currentScene.createNode("HAnimSite");
HAnimSite743.name = "SEGMENT_FOR_r_eyebrow_tip";
HAnimSite743.DEF = "hanim_SEGMENT_FOR_r_eyebrow_tip";
let Transform744 = browser.currentScene.createNode("Transform");
Transform744.translation = new SFVec3f(new float[-0.0219,0.0051,1.4053]);
let Shape745 = browser.currentScene.createNode("Shape");
Shape745.USE = "SiteShape";
Transform744.child = new undefined();

Transform744.child[0] = Shape745;

HAnimSite743.children = new MFNode();

HAnimSite743.children[0] = Transform744;

HAnimSegment739.children[2] = HAnimSite743;

HAnimJoint738.children = new MFNode();

HAnimJoint738.children[0] = HAnimSegment739;

HAnimJoint690.children[6] = HAnimJoint738;

let HAnimJoint746 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint746.name = "jaw";
HAnimJoint746.DEF = "hanim_jaw";
HAnimJoint746.center = new SFVec3f(new float[-0.0002,-0.0865,1.3043]);
HAnimJoint746.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint746.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment747 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment747.name = "SEGMENT_FOR_jaw";
HAnimSegment747.DEF = "hanim_SEGMENT_FOR_jaw";
let TouchSensor748 = browser.currentScene.createNode("TouchSensor");
TouchSensor748.description = "joint jaw segment SEGMENT_FOR_jaw";
HAnimSegment747.children = new MFNode();

HAnimSegment747.children[0] = TouchSensor748;

let Transform749 = browser.currentScene.createNode("Transform");
Transform749.translation = new SFVec3f(new float[-0.0002,-0.0865,1.3043]);
let Shape750 = browser.currentScene.createNode("Shape");
Shape750.USE = "JointShape";
Transform749.child = new undefined();

Transform749.child[0] = Shape750;

HAnimSegment747.children[1] = Transform749;

let HAnimSite751 = browser.currentScene.createNode("HAnimSite");
HAnimSite751.name = "SEGMENT_FOR_jaw_tip";
HAnimSite751.DEF = "hanim_SEGMENT_FOR_jaw_tip";
let Transform752 = browser.currentScene.createNode("Transform");
Transform752.translation = new SFVec3f(new float[-0.0002,-0.0865,1.3043]);
let Shape753 = browser.currentScene.createNode("Shape");
Shape753.USE = "SiteShape";
Transform752.child = new undefined();

Transform752.child[0] = Shape753;

HAnimSite751.children = new MFNode();

HAnimSite751.children[0] = Transform752;

HAnimSegment747.children[2] = HAnimSite751;

HAnimJoint746.children = new MFNode();

HAnimJoint746.children[0] = HAnimSegment747;

HAnimJoint690.children[7] = HAnimJoint746;

HAnimJoint682.children[1] = HAnimJoint690;

HAnimJoint674.children[1] = HAnimJoint682;

HAnimJoint666.children[1] = HAnimJoint674;

HAnimJoint658.children[1] = HAnimJoint666;

HAnimJoint650.children[1] = HAnimJoint658;

HAnimJoint642.children[1] = HAnimJoint650;

HAnimJoint634.children[1] = HAnimJoint642;

HAnimJoint626.children[1] = HAnimJoint634;

let HAnimJoint754 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint754.name = "l_clavicle";
HAnimJoint754.DEF = "hanim_l_clavicle";
HAnimJoint754.center = new SFVec3f(new float[0.1228,-0.1148,1.1833]);
HAnimJoint754.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint754.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment755 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment755.name = "SEGMENT_FOR_l_clavicle";
HAnimSegment755.DEF = "hanim_SEGMENT_FOR_l_clavicle";
let TouchSensor756 = browser.currentScene.createNode("TouchSensor");
TouchSensor756.description = "joint l_clavicle segment SEGMENT_FOR_l_clavicle";
HAnimSegment755.children = new MFNode();

HAnimSegment755.children[0] = TouchSensor756;

let Transform757 = browser.currentScene.createNode("Transform");
Transform757.translation = new SFVec3f(new float[0.1228,-0.1148,1.1833]);
let Shape758 = browser.currentScene.createNode("Shape");
Shape758.USE = "JointShape";
Transform757.child = new undefined();

Transform757.child[0] = Shape758;

HAnimSegment755.children[1] = Transform757;

let HAnimSite759 = browser.currentScene.createNode("HAnimSite");
HAnimSite759.name = "SEGMENT_FOR_l_clavicle_tip";
HAnimSite759.DEF = "hanim_SEGMENT_FOR_l_clavicle_tip";
let Transform760 = browser.currentScene.createNode("Transform");
Transform760.translation = new SFVec3f(new float[0.1228,-0.1148,1.1833]);
let Shape761 = browser.currentScene.createNode("Shape");
Shape761.USE = "SiteShape";
Transform760.child = new undefined();

Transform760.child[0] = Shape761;

HAnimSite759.children = new MFNode();

HAnimSite759.children[0] = Transform760;

HAnimSegment755.children[2] = HAnimSite759;

HAnimJoint754.children = new MFNode();

HAnimJoint754.children[0] = HAnimSegment755;

let HAnimJoint762 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint762.name = "l_scapula";
HAnimJoint762.DEF = "hanim_l_scapula";
HAnimJoint762.center = new SFVec3f(new float[0.0383,-0.1157,1.2001]);
HAnimJoint762.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint762.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment763 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment763.name = "SEGMENT_FOR_l_scapula";
HAnimSegment763.DEF = "hanim_SEGMENT_FOR_l_scapula";
let TouchSensor764 = browser.currentScene.createNode("TouchSensor");
TouchSensor764.description = "joint l_scapula segment SEGMENT_FOR_l_scapula";
HAnimSegment763.children = new MFNode();

HAnimSegment763.children[0] = TouchSensor764;

let Transform765 = browser.currentScene.createNode("Transform");
Transform765.translation = new SFVec3f(new float[0.0383,-0.1157,1.2001]);
let Shape766 = browser.currentScene.createNode("Shape");
Shape766.USE = "JointShape";
Transform765.child = new undefined();

Transform765.child[0] = Shape766;

HAnimSegment763.children[1] = Transform765;

let HAnimSite767 = browser.currentScene.createNode("HAnimSite");
HAnimSite767.name = "SEGMENT_FOR_l_scapula_tip";
HAnimSite767.DEF = "hanim_SEGMENT_FOR_l_scapula_tip";
let Transform768 = browser.currentScene.createNode("Transform");
Transform768.translation = new SFVec3f(new float[0.0383,-0.1157,1.2001]);
let Shape769 = browser.currentScene.createNode("Shape");
Shape769.USE = "SiteShape";
Transform768.child = new undefined();

Transform768.child[0] = Shape769;

HAnimSite767.children = new MFNode();

HAnimSite767.children[0] = Transform768;

HAnimSegment763.children[2] = HAnimSite767;

HAnimJoint762.children = new MFNode();

HAnimJoint762.children[0] = HAnimSegment763;

let HAnimJoint770 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint770.name = "l_upperarm";
HAnimJoint770.DEF = "hanim_l_upperarm";
HAnimJoint770.center = new SFVec3f(new float[0.1649,-0.1051,1.17]);
HAnimJoint770.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint770.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment771 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment771.name = "SEGMENT_FOR_l_upperarm";
HAnimSegment771.DEF = "hanim_SEGMENT_FOR_l_upperarm";
let TouchSensor772 = browser.currentScene.createNode("TouchSensor");
TouchSensor772.description = "joint l_upperarm segment SEGMENT_FOR_l_upperarm";
HAnimSegment771.children = new MFNode();

HAnimSegment771.children[0] = TouchSensor772;

let Transform773 = browser.currentScene.createNode("Transform");
Transform773.translation = new SFVec3f(new float[0.1649,-0.1051,1.17]);
let Shape774 = browser.currentScene.createNode("Shape");
Shape774.USE = "JointShape";
Transform773.child = new undefined();

Transform773.child[0] = Shape774;

HAnimSegment771.children[1] = Transform773;

let HAnimSite775 = browser.currentScene.createNode("HAnimSite");
HAnimSite775.name = "SEGMENT_FOR_l_upperarm_tip";
HAnimSite775.DEF = "hanim_SEGMENT_FOR_l_upperarm_tip";
let Transform776 = browser.currentScene.createNode("Transform");
Transform776.translation = new SFVec3f(new float[0.1649,-0.1051,1.17]);
let Shape777 = browser.currentScene.createNode("Shape");
Shape777.USE = "SiteShape";
Transform776.child = new undefined();

Transform776.child[0] = Shape777;

HAnimSite775.children = new MFNode();

HAnimSite775.children[0] = Transform776;

HAnimSegment771.children[2] = HAnimSite775;

HAnimJoint770.children = new MFNode();

HAnimJoint770.children[0] = HAnimSegment771;

let HAnimJoint778 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint778.name = "l_forearm";
HAnimJoint778.DEF = "hanim_l_forearm";
HAnimJoint778.center = new SFVec3f(new float[0.1819,-0.1075,0.9202]);
HAnimJoint778.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint778.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment779 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment779.name = "SEGMENT_FOR_l_forearm";
HAnimSegment779.DEF = "hanim_SEGMENT_FOR_l_forearm";
let TouchSensor780 = browser.currentScene.createNode("TouchSensor");
TouchSensor780.description = "joint l_forearm segment SEGMENT_FOR_l_forearm";
HAnimSegment779.children = new MFNode();

HAnimSegment779.children[0] = TouchSensor780;

let Transform781 = browser.currentScene.createNode("Transform");
Transform781.translation = new SFVec3f(new float[0.1819,-0.1075,0.9202]);
let Shape782 = browser.currentScene.createNode("Shape");
Shape782.USE = "JointShape";
Transform781.child = new undefined();

Transform781.child[0] = Shape782;

HAnimSegment779.children[1] = Transform781;

let HAnimSite783 = browser.currentScene.createNode("HAnimSite");
HAnimSite783.name = "SEGMENT_FOR_l_forearm_tip";
HAnimSite783.DEF = "hanim_SEGMENT_FOR_l_forearm_tip";
let Transform784 = browser.currentScene.createNode("Transform");
Transform784.translation = new SFVec3f(new float[0.1819,-0.1075,0.9202]);
let Shape785 = browser.currentScene.createNode("Shape");
Shape785.USE = "SiteShape";
Transform784.child = new undefined();

Transform784.child[0] = Shape785;

HAnimSite783.children = new MFNode();

HAnimSite783.children[0] = Transform784;

HAnimSegment779.children[2] = HAnimSite783;

HAnimJoint778.children = new MFNode();

HAnimJoint778.children[0] = HAnimSegment779;

let HAnimJoint786 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint786.name = "l_carpal";
HAnimJoint786.DEF = "hanim_l_carpal";
HAnimJoint786.center = new SFVec3f(new float[0.1818,-0.1069,0.7157]);
HAnimJoint786.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint786.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment787 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment787.name = "SEGMENT_FOR_l_carpal";
HAnimSegment787.DEF = "hanim_SEGMENT_FOR_l_carpal";
let TouchSensor788 = browser.currentScene.createNode("TouchSensor");
TouchSensor788.description = "joint l_carpal segment SEGMENT_FOR_l_carpal";
HAnimSegment787.children = new MFNode();

HAnimSegment787.children[0] = TouchSensor788;

let Transform789 = browser.currentScene.createNode("Transform");
Transform789.translation = new SFVec3f(new float[0.1818,-0.1069,0.7157]);
let Shape790 = browser.currentScene.createNode("Shape");
Shape790.USE = "JointShape";
Transform789.child = new undefined();

Transform789.child[0] = Shape790;

HAnimSegment787.children[1] = Transform789;

let HAnimSite791 = browser.currentScene.createNode("HAnimSite");
HAnimSite791.name = "SEGMENT_FOR_l_carpal_tip";
HAnimSite791.DEF = "hanim_SEGMENT_FOR_l_carpal_tip";
let Transform792 = browser.currentScene.createNode("Transform");
Transform792.translation = new SFVec3f(new float[0.1818,-0.1069,0.7157]);
let Shape793 = browser.currentScene.createNode("Shape");
Shape793.USE = "SiteShape";
Transform792.child = new undefined();

Transform792.child[0] = Shape793;

HAnimSite791.children = new MFNode();

HAnimSite791.children[0] = Transform792;

HAnimSegment787.children[2] = HAnimSite791;

HAnimJoint786.children = new MFNode();

HAnimJoint786.children[0] = HAnimSegment787;

let HAnimJoint794 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint794.name = "l_trapezium";
HAnimJoint794.DEF = "hanim_l_trapezium";
HAnimJoint794.center = new SFVec3f(new float[0.1811,-0.0826,0.6975]);
HAnimJoint794.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint794.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment795 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment795.name = "SEGMENT_FOR_l_trapezium";
HAnimSegment795.DEF = "hanim_SEGMENT_FOR_l_trapezium";
let TouchSensor796 = browser.currentScene.createNode("TouchSensor");
TouchSensor796.description = "joint l_trapezium segment SEGMENT_FOR_l_trapezium";
HAnimSegment795.children = new MFNode();

HAnimSegment795.children[0] = TouchSensor796;

let Transform797 = browser.currentScene.createNode("Transform");
Transform797.translation = new SFVec3f(new float[0.1811,-0.0826,0.6975]);
let Shape798 = browser.currentScene.createNode("Shape");
Shape798.USE = "JointShape";
Transform797.child = new undefined();

Transform797.child[0] = Shape798;

HAnimSegment795.children[1] = Transform797;

let HAnimSite799 = browser.currentScene.createNode("HAnimSite");
HAnimSite799.name = "SEGMENT_FOR_l_trapezium_tip";
HAnimSite799.DEF = "hanim_SEGMENT_FOR_l_trapezium_tip";
let Transform800 = browser.currentScene.createNode("Transform");
Transform800.translation = new SFVec3f(new float[0.1811,-0.0826,0.6975]);
let Shape801 = browser.currentScene.createNode("Shape");
Shape801.USE = "SiteShape";
Transform800.child = new undefined();

Transform800.child[0] = Shape801;

HAnimSite799.children = new MFNode();

HAnimSite799.children[0] = Transform800;

HAnimSegment795.children[2] = HAnimSite799;

HAnimJoint794.children = new MFNode();

HAnimJoint794.children[0] = HAnimSegment795;

let HAnimJoint802 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint802.name = "l_metacarpal_1";
HAnimJoint802.DEF = "hanim_l_metacarpal_1";
HAnimJoint802.center = new SFVec3f(new float[0.1803,-0.0759,0.684]);
HAnimJoint802.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint802.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment803 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment803.name = "SEGMENT_FOR_l_metacarpal_1";
HAnimSegment803.DEF = "hanim_SEGMENT_FOR_l_metacarpal_1";
let TouchSensor804 = browser.currentScene.createNode("TouchSensor");
TouchSensor804.description = "joint l_metacarpal_1 segment SEGMENT_FOR_l_metacarpal_1";
HAnimSegment803.children = new MFNode();

HAnimSegment803.children[0] = TouchSensor804;

let Transform805 = browser.currentScene.createNode("Transform");
Transform805.translation = new SFVec3f(new float[0.1803,-0.0759,0.684]);
let Shape806 = browser.currentScene.createNode("Shape");
Shape806.USE = "JointShape";
Transform805.child = new undefined();

Transform805.child[0] = Shape806;

HAnimSegment803.children[1] = Transform805;

let HAnimSite807 = browser.currentScene.createNode("HAnimSite");
HAnimSite807.name = "SEGMENT_FOR_l_metacarpal_1_tip";
HAnimSite807.DEF = "hanim_SEGMENT_FOR_l_metacarpal_1_tip";
let Transform808 = browser.currentScene.createNode("Transform");
Transform808.translation = new SFVec3f(new float[0.1803,-0.0759,0.684]);
let Shape809 = browser.currentScene.createNode("Shape");
Shape809.USE = "SiteShape";
Transform808.child = new undefined();

Transform808.child[0] = Shape809;

HAnimSite807.children = new MFNode();

HAnimSite807.children[0] = Transform808;

HAnimSegment803.children[2] = HAnimSite807;

HAnimJoint802.children = new MFNode();

HAnimJoint802.children[0] = HAnimSegment803;

let HAnimJoint810 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint810.name = "l_carpal_proximal_phalanx_1";
HAnimJoint810.DEF = "hanim_l_carpal_proximal_phalanx_1";
HAnimJoint810.center = new SFVec3f(new float[0.1809,-0.0661,0.6642]);
HAnimJoint810.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint810.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment811 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment811.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_1";
HAnimSegment811.DEF = "hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_1";
let TouchSensor812 = browser.currentScene.createNode("TouchSensor");
TouchSensor812.description = "joint l_carpal_proximal_phalanx_1 segment SEGMENT_FOR_l_carpal_proximal_phalanx_1";
HAnimSegment811.children = new MFNode();

HAnimSegment811.children[0] = TouchSensor812;

let Transform813 = browser.currentScene.createNode("Transform");
Transform813.translation = new SFVec3f(new float[0.1809,-0.0661,0.6642]);
let Shape814 = browser.currentScene.createNode("Shape");
Shape814.USE = "JointShape";
Transform813.child = new undefined();

Transform813.child[0] = Shape814;

HAnimSegment811.children[1] = Transform813;

let HAnimSite815 = browser.currentScene.createNode("HAnimSite");
HAnimSite815.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_1_tip";
HAnimSite815.DEF = "hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_1_tip";
let Transform816 = browser.currentScene.createNode("Transform");
Transform816.translation = new SFVec3f(new float[0.1809,-0.0661,0.6642]);
let Shape817 = browser.currentScene.createNode("Shape");
Shape817.USE = "SiteShape";
Transform816.child = new undefined();

Transform816.child[0] = Shape817;

HAnimSite815.children = new MFNode();

HAnimSite815.children[0] = Transform816;

HAnimSegment811.children[2] = HAnimSite815;

HAnimJoint810.children = new MFNode();

HAnimJoint810.children[0] = HAnimSegment811;

let HAnimJoint818 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint818.name = "l_carpal_distal_phalanx_1";
HAnimJoint818.DEF = "hanim_l_carpal_distal_phalanx_1";
HAnimJoint818.center = new SFVec3f(new float[0.1825,-0.0522,0.6455]);
HAnimJoint818.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint818.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment819 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment819.name = "SEGMENT_FOR_l_carpal_distal_phalanx_1";
HAnimSegment819.DEF = "hanim_SEGMENT_FOR_l_carpal_distal_phalanx_1";
let TouchSensor820 = browser.currentScene.createNode("TouchSensor");
TouchSensor820.description = "joint l_carpal_distal_phalanx_1 segment SEGMENT_FOR_l_carpal_distal_phalanx_1";
HAnimSegment819.children = new MFNode();

HAnimSegment819.children[0] = TouchSensor820;

let Transform821 = browser.currentScene.createNode("Transform");
Transform821.translation = new SFVec3f(new float[0.1825,-0.0522,0.6455]);
let Shape822 = browser.currentScene.createNode("Shape");
Shape822.USE = "JointShape";
Transform821.child = new undefined();

Transform821.child[0] = Shape822;

HAnimSegment819.children[1] = Transform821;

let HAnimSite823 = browser.currentScene.createNode("HAnimSite");
HAnimSite823.name = "SEGMENT_FOR_l_carpal_distal_phalanx_1_tip";
HAnimSite823.DEF = "hanim_SEGMENT_FOR_l_carpal_distal_phalanx_1_tip";
let Transform824 = browser.currentScene.createNode("Transform");
Transform824.translation = new SFVec3f(new float[0.1825,-0.0522,0.6455]);
let Shape825 = browser.currentScene.createNode("Shape");
Shape825.USE = "SiteShape";
Transform824.child = new undefined();

Transform824.child[0] = Shape825;

HAnimSite823.children = new MFNode();

HAnimSite823.children[0] = Transform824;

HAnimSegment819.children[2] = HAnimSite823;

HAnimJoint818.children = new MFNode();

HAnimJoint818.children[0] = HAnimSegment819;

HAnimJoint810.children[1] = HAnimJoint818;

HAnimJoint802.children[1] = HAnimJoint810;

HAnimJoint794.children[1] = HAnimJoint802;

HAnimJoint786.children[1] = HAnimJoint794;

let HAnimJoint826 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint826.name = "l_trapezoid";
HAnimJoint826.DEF = "hanim_l_trapezoid";
HAnimJoint826.center = new SFVec3f(new float[0.1811,-0.0935,0.6984]);
HAnimJoint826.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint826.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment827 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment827.name = "SEGMENT_FOR_l_trapezoid";
HAnimSegment827.DEF = "hanim_SEGMENT_FOR_l_trapezoid";
let TouchSensor828 = browser.currentScene.createNode("TouchSensor");
TouchSensor828.description = "joint l_trapezoid segment SEGMENT_FOR_l_trapezoid";
HAnimSegment827.children = new MFNode();

HAnimSegment827.children[0] = TouchSensor828;

let Transform829 = browser.currentScene.createNode("Transform");
Transform829.translation = new SFVec3f(new float[0.1811,-0.0935,0.6984]);
let Shape830 = browser.currentScene.createNode("Shape");
Shape830.USE = "JointShape";
Transform829.child = new undefined();

Transform829.child[0] = Shape830;

HAnimSegment827.children[1] = Transform829;

let HAnimSite831 = browser.currentScene.createNode("HAnimSite");
HAnimSite831.name = "SEGMENT_FOR_l_trapezoid_tip";
HAnimSite831.DEF = "hanim_SEGMENT_FOR_l_trapezoid_tip";
let Transform832 = browser.currentScene.createNode("Transform");
Transform832.translation = new SFVec3f(new float[0.1811,-0.0935,0.6984]);
let Shape833 = browser.currentScene.createNode("Shape");
Shape833.USE = "SiteShape";
Transform832.child = new undefined();

Transform832.child[0] = Shape833;

HAnimSite831.children = new MFNode();

HAnimSite831.children[0] = Transform832;

HAnimSegment827.children[2] = HAnimSite831;

HAnimJoint826.children = new MFNode();

HAnimJoint826.children[0] = HAnimSegment827;

let HAnimJoint834 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint834.name = "l_metacarpal_2";
HAnimJoint834.DEF = "hanim_l_metacarpal_2";
HAnimJoint834.center = new SFVec3f(new float[0.1811,-0.0922,0.679]);
HAnimJoint834.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint834.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment835 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment835.name = "SEGMENT_FOR_l_metacarpal_2";
HAnimSegment835.DEF = "hanim_SEGMENT_FOR_l_metacarpal_2";
let TouchSensor836 = browser.currentScene.createNode("TouchSensor");
TouchSensor836.description = "joint l_metacarpal_2 segment SEGMENT_FOR_l_metacarpal_2";
HAnimSegment835.children = new MFNode();

HAnimSegment835.children[0] = TouchSensor836;

let Transform837 = browser.currentScene.createNode("Transform");
Transform837.translation = new SFVec3f(new float[0.1811,-0.0922,0.679]);
let Shape838 = browser.currentScene.createNode("Shape");
Shape838.USE = "JointShape";
Transform837.child = new undefined();

Transform837.child[0] = Shape838;

HAnimSegment835.children[1] = Transform837;

let HAnimSite839 = browser.currentScene.createNode("HAnimSite");
HAnimSite839.name = "SEGMENT_FOR_l_metacarpal_2_tip";
HAnimSite839.DEF = "hanim_SEGMENT_FOR_l_metacarpal_2_tip";
let Transform840 = browser.currentScene.createNode("Transform");
Transform840.translation = new SFVec3f(new float[0.1811,-0.0922,0.679]);
let Shape841 = browser.currentScene.createNode("Shape");
Shape841.USE = "SiteShape";
Transform840.child = new undefined();

Transform840.child[0] = Shape841;

HAnimSite839.children = new MFNode();

HAnimSite839.children[0] = Transform840;

HAnimSegment835.children[2] = HAnimSite839;

HAnimJoint834.children = new MFNode();

HAnimJoint834.children[0] = HAnimSegment835;

let HAnimJoint842 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint842.name = "l_carpal_proximal_phalanx_2";
HAnimJoint842.DEF = "hanim_l_carpal_proximal_phalanx_2";
HAnimJoint842.center = new SFVec3f(new float[0.1836,-0.0868,0.6286]);
HAnimJoint842.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint842.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment843 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment843.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_2";
HAnimSegment843.DEF = "hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_2";
let TouchSensor844 = browser.currentScene.createNode("TouchSensor");
TouchSensor844.description = "joint l_carpal_proximal_phalanx_2 segment SEGMENT_FOR_l_carpal_proximal_phalanx_2";
HAnimSegment843.children = new MFNode();

HAnimSegment843.children[0] = TouchSensor844;

let Transform845 = browser.currentScene.createNode("Transform");
Transform845.translation = new SFVec3f(new float[0.1836,-0.0868,0.6286]);
let Shape846 = browser.currentScene.createNode("Shape");
Shape846.USE = "JointShape";
Transform845.child = new undefined();

Transform845.child[0] = Shape846;

HAnimSegment843.children[1] = Transform845;

let HAnimSite847 = browser.currentScene.createNode("HAnimSite");
HAnimSite847.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_2_tip";
HAnimSite847.DEF = "hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_2_tip";
let Transform848 = browser.currentScene.createNode("Transform");
Transform848.translation = new SFVec3f(new float[0.1836,-0.0868,0.6286]);
let Shape849 = browser.currentScene.createNode("Shape");
Shape849.USE = "SiteShape";
Transform848.child = new undefined();

Transform848.child[0] = Shape849;

HAnimSite847.children = new MFNode();

HAnimSite847.children[0] = Transform848;

HAnimSegment843.children[2] = HAnimSite847;

HAnimJoint842.children = new MFNode();

HAnimJoint842.children[0] = HAnimSegment843;

let HAnimJoint850 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint850.name = "l_carpal_middle_phalanx_2";
HAnimJoint850.DEF = "hanim_l_carpal_middle_phalanx_2";
HAnimJoint850.center = new SFVec3f(new float[0.1815,-0.0877,0.5983]);
HAnimJoint850.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint850.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment851 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment851.name = "SEGMENT_FOR_l_carpal_middle_phalanx_2";
HAnimSegment851.DEF = "hanim_SEGMENT_FOR_l_carpal_middle_phalanx_2";
let TouchSensor852 = browser.currentScene.createNode("TouchSensor");
TouchSensor852.description = "joint l_carpal_middle_phalanx_2 segment SEGMENT_FOR_l_carpal_middle_phalanx_2";
HAnimSegment851.children = new MFNode();

HAnimSegment851.children[0] = TouchSensor852;

let Transform853 = browser.currentScene.createNode("Transform");
Transform853.translation = new SFVec3f(new float[0.1815,-0.0877,0.5983]);
let Shape854 = browser.currentScene.createNode("Shape");
Shape854.USE = "JointShape";
Transform853.child = new undefined();

Transform853.child[0] = Shape854;

HAnimSegment851.children[1] = Transform853;

let HAnimSite855 = browser.currentScene.createNode("HAnimSite");
HAnimSite855.name = "SEGMENT_FOR_l_carpal_middle_phalanx_2_tip";
HAnimSite855.DEF = "hanim_SEGMENT_FOR_l_carpal_middle_phalanx_2_tip";
let Transform856 = browser.currentScene.createNode("Transform");
Transform856.translation = new SFVec3f(new float[0.1815,-0.0877,0.5983]);
let Shape857 = browser.currentScene.createNode("Shape");
Shape857.USE = "SiteShape";
Transform856.child = new undefined();

Transform856.child[0] = Shape857;

HAnimSite855.children = new MFNode();

HAnimSite855.children[0] = Transform856;

HAnimSegment851.children[2] = HAnimSite855;

HAnimJoint850.children = new MFNode();

HAnimJoint850.children[0] = HAnimSegment851;

let HAnimJoint858 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint858.name = "l_carpal_distal_phalanx_2";
HAnimJoint858.DEF = "hanim_l_carpal_distal_phalanx_2";
HAnimJoint858.center = new SFVec3f(new float[0.1805,-0.0885,0.5731]);
HAnimJoint858.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint858.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment859 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment859.name = "SEGMENT_FOR_l_carpal_distal_phalanx_2";
HAnimSegment859.DEF = "hanim_SEGMENT_FOR_l_carpal_distal_phalanx_2";
let TouchSensor860 = browser.currentScene.createNode("TouchSensor");
TouchSensor860.description = "joint l_carpal_distal_phalanx_2 segment SEGMENT_FOR_l_carpal_distal_phalanx_2";
HAnimSegment859.children = new MFNode();

HAnimSegment859.children[0] = TouchSensor860;

let Transform861 = browser.currentScene.createNode("Transform");
Transform861.translation = new SFVec3f(new float[0.1805,-0.0885,0.5731]);
let Shape862 = browser.currentScene.createNode("Shape");
Shape862.USE = "JointShape";
Transform861.child = new undefined();

Transform861.child[0] = Shape862;

HAnimSegment859.children[1] = Transform861;

let HAnimSite863 = browser.currentScene.createNode("HAnimSite");
HAnimSite863.name = "SEGMENT_FOR_l_carpal_distal_phalanx_2_tip";
HAnimSite863.DEF = "hanim_SEGMENT_FOR_l_carpal_distal_phalanx_2_tip";
let Transform864 = browser.currentScene.createNode("Transform");
Transform864.translation = new SFVec3f(new float[0.1805,-0.0885,0.5731]);
let Shape865 = browser.currentScene.createNode("Shape");
Shape865.USE = "SiteShape";
Transform864.child = new undefined();

Transform864.child[0] = Shape865;

HAnimSite863.children = new MFNode();

HAnimSite863.children[0] = Transform864;

HAnimSegment859.children[2] = HAnimSite863;

HAnimJoint858.children = new MFNode();

HAnimJoint858.children[0] = HAnimSegment859;

HAnimJoint850.children[1] = HAnimJoint858;

HAnimJoint842.children[1] = HAnimJoint850;

HAnimJoint834.children[1] = HAnimJoint842;

HAnimJoint826.children[1] = HAnimJoint834;

HAnimJoint786.children[2] = HAnimJoint826;

let HAnimJoint866 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint866.name = "l_capitate";
HAnimJoint866.DEF = "hanim_l_capitate";
HAnimJoint866.center = new SFVec3f(new float[0.1809,-0.1067,0.7]);
HAnimJoint866.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint866.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment867 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment867.name = "SEGMENT_FOR_l_capitate";
HAnimSegment867.DEF = "hanim_SEGMENT_FOR_l_capitate";
let TouchSensor868 = browser.currentScene.createNode("TouchSensor");
TouchSensor868.description = "joint l_capitate segment SEGMENT_FOR_l_capitate";
HAnimSegment867.children = new MFNode();

HAnimSegment867.children[0] = TouchSensor868;

let Transform869 = browser.currentScene.createNode("Transform");
Transform869.translation = new SFVec3f(new float[0.1809,-0.1067,0.7]);
let Shape870 = browser.currentScene.createNode("Shape");
Shape870.USE = "JointShape";
Transform869.child = new undefined();

Transform869.child[0] = Shape870;

HAnimSegment867.children[1] = Transform869;

let HAnimSite871 = browser.currentScene.createNode("HAnimSite");
HAnimSite871.name = "SEGMENT_FOR_l_capitate_tip";
HAnimSite871.DEF = "hanim_SEGMENT_FOR_l_capitate_tip";
let Transform872 = browser.currentScene.createNode("Transform");
Transform872.translation = new SFVec3f(new float[0.1809,-0.1067,0.7]);
let Shape873 = browser.currentScene.createNode("Shape");
Shape873.USE = "SiteShape";
Transform872.child = new undefined();

Transform872.child[0] = Shape873;

HAnimSite871.children = new MFNode();

HAnimSite871.children[0] = Transform872;

HAnimSegment867.children[2] = HAnimSite871;

HAnimJoint866.children = new MFNode();

HAnimJoint866.children[0] = HAnimSegment867;

let HAnimJoint874 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint874.name = "l_metacarpal_3";
HAnimJoint874.DEF = "hanim_l_metacarpal_3";
HAnimJoint874.center = new SFVec3f(new float[0.1809,-0.1081,0.6772]);
HAnimJoint874.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint874.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment875 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment875.name = "SEGMENT_FOR_l_metacarpal_3";
HAnimSegment875.DEF = "hanim_SEGMENT_FOR_l_metacarpal_3";
let TouchSensor876 = browser.currentScene.createNode("TouchSensor");
TouchSensor876.description = "joint l_metacarpal_3 segment SEGMENT_FOR_l_metacarpal_3";
HAnimSegment875.children = new MFNode();

HAnimSegment875.children[0] = TouchSensor876;

let Transform877 = browser.currentScene.createNode("Transform");
Transform877.translation = new SFVec3f(new float[0.1809,-0.1081,0.6772]);
let Shape878 = browser.currentScene.createNode("Shape");
Shape878.USE = "JointShape";
Transform877.child = new undefined();

Transform877.child[0] = Shape878;

HAnimSegment875.children[1] = Transform877;

let HAnimSite879 = browser.currentScene.createNode("HAnimSite");
HAnimSite879.name = "SEGMENT_FOR_l_metacarpal_3_tip";
HAnimSite879.DEF = "hanim_SEGMENT_FOR_l_metacarpal_3_tip";
let Transform880 = browser.currentScene.createNode("Transform");
Transform880.translation = new SFVec3f(new float[0.1809,-0.1081,0.6772]);
let Shape881 = browser.currentScene.createNode("Shape");
Shape881.USE = "SiteShape";
Transform880.child = new undefined();

Transform880.child[0] = Shape881;

HAnimSite879.children = new MFNode();

HAnimSite879.children[0] = Transform880;

HAnimSegment875.children[2] = HAnimSite879;

HAnimJoint874.children = new MFNode();

HAnimJoint874.children[0] = HAnimSegment875;

let HAnimJoint882 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint882.name = "l_carpal_proximal_phalanx_3";
HAnimJoint882.DEF = "hanim_l_carpal_proximal_phalanx_3";
HAnimJoint882.center = new SFVec3f(new float[0.1835,-0.1058,0.6264]);
HAnimJoint882.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint882.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment883 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment883.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_3";
HAnimSegment883.DEF = "hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_3";
let TouchSensor884 = browser.currentScene.createNode("TouchSensor");
TouchSensor884.description = "joint l_carpal_proximal_phalanx_3 segment SEGMENT_FOR_l_carpal_proximal_phalanx_3";
HAnimSegment883.children = new MFNode();

HAnimSegment883.children[0] = TouchSensor884;

let Transform885 = browser.currentScene.createNode("Transform");
Transform885.translation = new SFVec3f(new float[0.1835,-0.1058,0.6264]);
let Shape886 = browser.currentScene.createNode("Shape");
Shape886.USE = "JointShape";
Transform885.child = new undefined();

Transform885.child[0] = Shape886;

HAnimSegment883.children[1] = Transform885;

let HAnimSite887 = browser.currentScene.createNode("HAnimSite");
HAnimSite887.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_3_tip";
HAnimSite887.DEF = "hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_3_tip";
let Transform888 = browser.currentScene.createNode("Transform");
Transform888.translation = new SFVec3f(new float[0.1835,-0.1058,0.6264]);
let Shape889 = browser.currentScene.createNode("Shape");
Shape889.USE = "SiteShape";
Transform888.child = new undefined();

Transform888.child[0] = Shape889;

HAnimSite887.children = new MFNode();

HAnimSite887.children[0] = Transform888;

HAnimSegment883.children[2] = HAnimSite887;

HAnimJoint882.children = new MFNode();

HAnimJoint882.children[0] = HAnimSegment883;

let HAnimJoint890 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint890.name = "l_carpal_middle_phalanx_3";
HAnimJoint890.DEF = "hanim_l_carpal_middle_phalanx_3";
HAnimJoint890.center = new SFVec3f(new float[0.1815,-0.1054,0.5947]);
HAnimJoint890.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint890.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment891 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment891.name = "SEGMENT_FOR_l_carpal_middle_phalanx_3";
HAnimSegment891.DEF = "hanim_SEGMENT_FOR_l_carpal_middle_phalanx_3";
let TouchSensor892 = browser.currentScene.createNode("TouchSensor");
TouchSensor892.description = "joint l_carpal_middle_phalanx_3 segment SEGMENT_FOR_l_carpal_middle_phalanx_3";
HAnimSegment891.children = new MFNode();

HAnimSegment891.children[0] = TouchSensor892;

let Transform893 = browser.currentScene.createNode("Transform");
Transform893.translation = new SFVec3f(new float[0.1815,-0.1054,0.5947]);
let Shape894 = browser.currentScene.createNode("Shape");
Shape894.USE = "JointShape";
Transform893.child = new undefined();

Transform893.child[0] = Shape894;

HAnimSegment891.children[1] = Transform893;

let HAnimSite895 = browser.currentScene.createNode("HAnimSite");
HAnimSite895.name = "SEGMENT_FOR_l_carpal_middle_phalanx_3_tip";
HAnimSite895.DEF = "hanim_SEGMENT_FOR_l_carpal_middle_phalanx_3_tip";
let Transform896 = browser.currentScene.createNode("Transform");
Transform896.translation = new SFVec3f(new float[0.1815,-0.1054,0.5947]);
let Shape897 = browser.currentScene.createNode("Shape");
Shape897.USE = "SiteShape";
Transform896.child = new undefined();

Transform896.child[0] = Shape897;

HAnimSite895.children = new MFNode();

HAnimSite895.children[0] = Transform896;

HAnimSegment891.children[2] = HAnimSite895;

HAnimJoint890.children = new MFNode();

HAnimJoint890.children[0] = HAnimSegment891;

let HAnimJoint898 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint898.name = "l_carpal_distal_phalanx_3";
HAnimJoint898.DEF = "hanim_l_carpal_distal_phalanx_3";
HAnimJoint898.center = new SFVec3f(new float[0.1805,-0.1056,0.5668]);
HAnimJoint898.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint898.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment899 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment899.name = "SEGMENT_FOR_l_carpal_distal_phalanx_3";
HAnimSegment899.DEF = "hanim_SEGMENT_FOR_l_carpal_distal_phalanx_3";
let TouchSensor900 = browser.currentScene.createNode("TouchSensor");
TouchSensor900.description = "joint l_carpal_distal_phalanx_3 segment SEGMENT_FOR_l_carpal_distal_phalanx_3";
HAnimSegment899.children = new MFNode();

HAnimSegment899.children[0] = TouchSensor900;

let Transform901 = browser.currentScene.createNode("Transform");
Transform901.translation = new SFVec3f(new float[0.1805,-0.1056,0.5668]);
let Shape902 = browser.currentScene.createNode("Shape");
Shape902.USE = "JointShape";
Transform901.child = new undefined();

Transform901.child[0] = Shape902;

HAnimSegment899.children[1] = Transform901;

let HAnimSite903 = browser.currentScene.createNode("HAnimSite");
HAnimSite903.name = "SEGMENT_FOR_l_carpal_distal_phalanx_3_tip";
HAnimSite903.DEF = "hanim_SEGMENT_FOR_l_carpal_distal_phalanx_3_tip";
let Transform904 = browser.currentScene.createNode("Transform");
Transform904.translation = new SFVec3f(new float[0.1805,-0.1056,0.5668]);
let Shape905 = browser.currentScene.createNode("Shape");
Shape905.USE = "SiteShape";
Transform904.child = new undefined();

Transform904.child[0] = Shape905;

HAnimSite903.children = new MFNode();

HAnimSite903.children[0] = Transform904;

HAnimSegment899.children[2] = HAnimSite903;

HAnimJoint898.children = new MFNode();

HAnimJoint898.children[0] = HAnimSegment899;

HAnimJoint890.children[1] = HAnimJoint898;

HAnimJoint882.children[1] = HAnimJoint890;

HAnimJoint874.children[1] = HAnimJoint882;

HAnimJoint866.children[1] = HAnimJoint874;

HAnimJoint786.children[3] = HAnimJoint866;

let HAnimJoint906 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint906.name = "l_hamate";
HAnimJoint906.DEF = "hanim_l_hamate";
HAnimJoint906.center = new SFVec3f(new float[0.1809,-0.1276,0.6973]);
HAnimJoint906.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint906.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment907 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment907.name = "SEGMENT_FOR_l_hamate";
HAnimSegment907.DEF = "hanim_SEGMENT_FOR_l_hamate";
let TouchSensor908 = browser.currentScene.createNode("TouchSensor");
TouchSensor908.description = "joint l_hamate segment SEGMENT_FOR_l_hamate";
HAnimSegment907.children = new MFNode();

HAnimSegment907.children[0] = TouchSensor908;

let Transform909 = browser.currentScene.createNode("Transform");
Transform909.translation = new SFVec3f(new float[0.1809,-0.1276,0.6973]);
let Shape910 = browser.currentScene.createNode("Shape");
Shape910.USE = "JointShape";
Transform909.child = new undefined();

Transform909.child[0] = Shape910;

HAnimSegment907.children[1] = Transform909;

let HAnimSite911 = browser.currentScene.createNode("HAnimSite");
HAnimSite911.name = "SEGMENT_FOR_l_hamate_tip";
HAnimSite911.DEF = "hanim_SEGMENT_FOR_l_hamate_tip";
let Transform912 = browser.currentScene.createNode("Transform");
Transform912.translation = new SFVec3f(new float[0.1809,-0.1276,0.6973]);
let Shape913 = browser.currentScene.createNode("Shape");
Shape913.USE = "SiteShape";
Transform912.child = new undefined();

Transform912.child[0] = Shape913;

HAnimSite911.children = new MFNode();

HAnimSite911.children[0] = Transform912;

HAnimSegment907.children[2] = HAnimSite911;

HAnimJoint906.children = new MFNode();

HAnimJoint906.children[0] = HAnimSegment907;

let HAnimJoint914 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint914.name = "l_metacarpal_4";
HAnimJoint914.DEF = "hanim_l_metacarpal_4";
HAnimJoint914.center = new SFVec3f(new float[0.1809,-0.1218,0.6777]);
HAnimJoint914.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint914.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment915 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment915.name = "SEGMENT_FOR_l_metacarpal_4";
HAnimSegment915.DEF = "hanim_SEGMENT_FOR_l_metacarpal_4";
let TouchSensor916 = browser.currentScene.createNode("TouchSensor");
TouchSensor916.description = "joint l_metacarpal_4 segment SEGMENT_FOR_l_metacarpal_4";
HAnimSegment915.children = new MFNode();

HAnimSegment915.children[0] = TouchSensor916;

let Transform917 = browser.currentScene.createNode("Transform");
Transform917.translation = new SFVec3f(new float[0.1809,-0.1218,0.6777]);
let Shape918 = browser.currentScene.createNode("Shape");
Shape918.USE = "JointShape";
Transform917.child = new undefined();

Transform917.child[0] = Shape918;

HAnimSegment915.children[1] = Transform917;

let HAnimSite919 = browser.currentScene.createNode("HAnimSite");
HAnimSite919.name = "SEGMENT_FOR_l_metacarpal_4_tip";
HAnimSite919.DEF = "hanim_SEGMENT_FOR_l_metacarpal_4_tip";
let Transform920 = browser.currentScene.createNode("Transform");
Transform920.translation = new SFVec3f(new float[0.1809,-0.1218,0.6777]);
let Shape921 = browser.currentScene.createNode("Shape");
Shape921.USE = "SiteShape";
Transform920.child = new undefined();

Transform920.child[0] = Shape921;

HAnimSite919.children = new MFNode();

HAnimSite919.children[0] = Transform920;

HAnimSegment915.children[2] = HAnimSite919;

HAnimJoint914.children = new MFNode();

HAnimJoint914.children[0] = HAnimSegment915;

let HAnimJoint922 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint922.name = "l_carpal_proximal_phalanx_4";
HAnimJoint922.DEF = "hanim_l_carpal_proximal_phalanx_4";
HAnimJoint922.center = new SFVec3f(new float[0.1835,-0.1233,0.6255]);
HAnimJoint922.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint922.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment923 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment923.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_4";
HAnimSegment923.DEF = "hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_4";
let TouchSensor924 = browser.currentScene.createNode("TouchSensor");
TouchSensor924.description = "joint l_carpal_proximal_phalanx_4 segment SEGMENT_FOR_l_carpal_proximal_phalanx_4";
HAnimSegment923.children = new MFNode();

HAnimSegment923.children[0] = TouchSensor924;

let Transform925 = browser.currentScene.createNode("Transform");
Transform925.translation = new SFVec3f(new float[0.1835,-0.1233,0.6255]);
let Shape926 = browser.currentScene.createNode("Shape");
Shape926.USE = "JointShape";
Transform925.child = new undefined();

Transform925.child[0] = Shape926;

HAnimSegment923.children[1] = Transform925;

let HAnimSite927 = browser.currentScene.createNode("HAnimSite");
HAnimSite927.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_4_tip";
HAnimSite927.DEF = "hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_4_tip";
let Transform928 = browser.currentScene.createNode("Transform");
Transform928.translation = new SFVec3f(new float[0.1835,-0.1233,0.6255]);
let Shape929 = browser.currentScene.createNode("Shape");
Shape929.USE = "SiteShape";
Transform928.child = new undefined();

Transform928.child[0] = Shape929;

HAnimSite927.children = new MFNode();

HAnimSite927.children[0] = Transform928;

HAnimSegment923.children[2] = HAnimSite927;

HAnimJoint922.children = new MFNode();

HAnimJoint922.children[0] = HAnimSegment923;

let HAnimJoint930 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint930.name = "l_carpal_middle_phalanx_4";
HAnimJoint930.DEF = "hanim_l_carpal_middle_phalanx_4";
HAnimJoint930.center = new SFVec3f(new float[0.1815,-0.1225,0.598]);
HAnimJoint930.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint930.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment931 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment931.name = "SEGMENT_FOR_l_carpal_middle_phalanx_4";
HAnimSegment931.DEF = "hanim_SEGMENT_FOR_l_carpal_middle_phalanx_4";
let TouchSensor932 = browser.currentScene.createNode("TouchSensor");
TouchSensor932.description = "joint l_carpal_middle_phalanx_4 segment SEGMENT_FOR_l_carpal_middle_phalanx_4";
HAnimSegment931.children = new MFNode();

HAnimSegment931.children[0] = TouchSensor932;

let Transform933 = browser.currentScene.createNode("Transform");
Transform933.translation = new SFVec3f(new float[0.1815,-0.1225,0.598]);
let Shape934 = browser.currentScene.createNode("Shape");
Shape934.USE = "JointShape";
Transform933.child = new undefined();

Transform933.child[0] = Shape934;

HAnimSegment931.children[1] = Transform933;

let HAnimSite935 = browser.currentScene.createNode("HAnimSite");
HAnimSite935.name = "SEGMENT_FOR_l_carpal_middle_phalanx_4_tip";
HAnimSite935.DEF = "hanim_SEGMENT_FOR_l_carpal_middle_phalanx_4_tip";
let Transform936 = browser.currentScene.createNode("Transform");
Transform936.translation = new SFVec3f(new float[0.1815,-0.1225,0.598]);
let Shape937 = browser.currentScene.createNode("Shape");
Shape937.USE = "SiteShape";
Transform936.child = new undefined();

Transform936.child[0] = Shape937;

HAnimSite935.children = new MFNode();

HAnimSite935.children[0] = Transform936;

HAnimSegment931.children[2] = HAnimSite935;

HAnimJoint930.children = new MFNode();

HAnimJoint930.children[0] = HAnimSegment931;

let HAnimJoint938 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint938.name = "l_carpal_distal_phalanx_4";
HAnimJoint938.DEF = "hanim_l_carpal_distal_phalanx_4";
HAnimJoint938.center = new SFVec3f(new float[0.1805,-0.1217,0.5722]);
HAnimJoint938.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint938.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment939 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment939.name = "SEGMENT_FOR_l_carpal_distal_phalanx_4";
HAnimSegment939.DEF = "hanim_SEGMENT_FOR_l_carpal_distal_phalanx_4";
let TouchSensor940 = browser.currentScene.createNode("TouchSensor");
TouchSensor940.description = "joint l_carpal_distal_phalanx_4 segment SEGMENT_FOR_l_carpal_distal_phalanx_4";
HAnimSegment939.children = new MFNode();

HAnimSegment939.children[0] = TouchSensor940;

let Transform941 = browser.currentScene.createNode("Transform");
Transform941.translation = new SFVec3f(new float[0.1805,-0.1217,0.5722]);
let Shape942 = browser.currentScene.createNode("Shape");
Shape942.USE = "JointShape";
Transform941.child = new undefined();

Transform941.child[0] = Shape942;

HAnimSegment939.children[1] = Transform941;

let HAnimSite943 = browser.currentScene.createNode("HAnimSite");
HAnimSite943.name = "SEGMENT_FOR_l_carpal_distal_phalanx_4_tip";
HAnimSite943.DEF = "hanim_SEGMENT_FOR_l_carpal_distal_phalanx_4_tip";
let Transform944 = browser.currentScene.createNode("Transform");
Transform944.translation = new SFVec3f(new float[0.1805,-0.1217,0.5722]);
let Shape945 = browser.currentScene.createNode("Shape");
Shape945.USE = "SiteShape";
Transform944.child = new undefined();

Transform944.child[0] = Shape945;

HAnimSite943.children = new MFNode();

HAnimSite943.children[0] = Transform944;

HAnimSegment939.children[2] = HAnimSite943;

HAnimJoint938.children = new MFNode();

HAnimJoint938.children[0] = HAnimSegment939;

HAnimJoint930.children[1] = HAnimJoint938;

HAnimJoint922.children[1] = HAnimJoint930;

HAnimJoint914.children[1] = HAnimJoint922;

HAnimJoint906.children[1] = HAnimJoint914;

let HAnimJoint946 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint946.name = "l_metacarpal_5";
HAnimJoint946.DEF = "hanim_l_metacarpal_5";
HAnimJoint946.center = new SFVec3f(new float[0.1815,-0.1347,0.6797]);
HAnimJoint946.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint946.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment947 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment947.name = "SEGMENT_FOR_l_metacarpal_5";
HAnimSegment947.DEF = "hanim_SEGMENT_FOR_l_metacarpal_5";
let TouchSensor948 = browser.currentScene.createNode("TouchSensor");
TouchSensor948.description = "joint l_metacarpal_5 segment SEGMENT_FOR_l_metacarpal_5";
HAnimSegment947.children = new MFNode();

HAnimSegment947.children[0] = TouchSensor948;

let Transform949 = browser.currentScene.createNode("Transform");
Transform949.translation = new SFVec3f(new float[0.1815,-0.1347,0.6797]);
let Shape950 = browser.currentScene.createNode("Shape");
Shape950.USE = "JointShape";
Transform949.child = new undefined();

Transform949.child[0] = Shape950;

HAnimSegment947.children[1] = Transform949;

let HAnimSite951 = browser.currentScene.createNode("HAnimSite");
HAnimSite951.name = "SEGMENT_FOR_l_metacarpal_5_tip";
HAnimSite951.DEF = "hanim_SEGMENT_FOR_l_metacarpal_5_tip";
let Transform952 = browser.currentScene.createNode("Transform");
Transform952.translation = new SFVec3f(new float[0.1815,-0.1347,0.6797]);
let Shape953 = browser.currentScene.createNode("Shape");
Shape953.USE = "SiteShape";
Transform952.child = new undefined();

Transform952.child[0] = Shape953;

HAnimSite951.children = new MFNode();

HAnimSite951.children[0] = Transform952;

HAnimSegment947.children[2] = HAnimSite951;

HAnimJoint946.children = new MFNode();

HAnimJoint946.children[0] = HAnimSegment947;

let HAnimJoint954 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint954.name = "l_carpal_proximal_phalanx_5";
HAnimJoint954.DEF = "hanim_l_carpal_proximal_phalanx_5";
HAnimJoint954.center = new SFVec3f(new float[0.1832,-0.1389,0.6295]);
HAnimJoint954.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint954.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment955 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment955.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_5";
HAnimSegment955.DEF = "hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_5";
let TouchSensor956 = browser.currentScene.createNode("TouchSensor");
TouchSensor956.description = "joint l_carpal_proximal_phalanx_5 segment SEGMENT_FOR_l_carpal_proximal_phalanx_5";
HAnimSegment955.children = new MFNode();

HAnimSegment955.children[0] = TouchSensor956;

let Transform957 = browser.currentScene.createNode("Transform");
Transform957.translation = new SFVec3f(new float[0.1832,-0.1389,0.6295]);
let Shape958 = browser.currentScene.createNode("Shape");
Shape958.USE = "JointShape";
Transform957.child = new undefined();

Transform957.child[0] = Shape958;

HAnimSegment955.children[1] = Transform957;

let HAnimSite959 = browser.currentScene.createNode("HAnimSite");
HAnimSite959.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_5_tip";
HAnimSite959.DEF = "hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_5_tip";
let Transform960 = browser.currentScene.createNode("Transform");
Transform960.translation = new SFVec3f(new float[0.1832,-0.1389,0.6295]);
let Shape961 = browser.currentScene.createNode("Shape");
Shape961.USE = "SiteShape";
Transform960.child = new undefined();

Transform960.child[0] = Shape961;

HAnimSite959.children = new MFNode();

HAnimSite959.children[0] = Transform960;

HAnimSegment955.children[2] = HAnimSite959;

HAnimJoint954.children = new MFNode();

HAnimJoint954.children[0] = HAnimSegment955;

let HAnimJoint962 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint962.name = "l_carpal_middle_phalanx_5";
HAnimJoint962.DEF = "hanim_l_carpal_middle_phalanx_5";
HAnimJoint962.center = new SFVec3f(new float[0.1815,-0.139,0.6124]);
HAnimJoint962.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint962.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment963 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment963.name = "SEGMENT_FOR_l_carpal_middle_phalanx_5";
HAnimSegment963.DEF = "hanim_SEGMENT_FOR_l_carpal_middle_phalanx_5";
let TouchSensor964 = browser.currentScene.createNode("TouchSensor");
TouchSensor964.description = "joint l_carpal_middle_phalanx_5 segment SEGMENT_FOR_l_carpal_middle_phalanx_5";
HAnimSegment963.children = new MFNode();

HAnimSegment963.children[0] = TouchSensor964;

let Transform965 = browser.currentScene.createNode("Transform");
Transform965.translation = new SFVec3f(new float[0.1815,-0.139,0.6124]);
let Shape966 = browser.currentScene.createNode("Shape");
Shape966.USE = "JointShape";
Transform965.child = new undefined();

Transform965.child[0] = Shape966;

HAnimSegment963.children[1] = Transform965;

let HAnimSite967 = browser.currentScene.createNode("HAnimSite");
HAnimSite967.name = "SEGMENT_FOR_l_carpal_middle_phalanx_5_tip";
HAnimSite967.DEF = "hanim_SEGMENT_FOR_l_carpal_middle_phalanx_5_tip";
let Transform968 = browser.currentScene.createNode("Transform");
Transform968.translation = new SFVec3f(new float[0.1815,-0.139,0.6124]);
let Shape969 = browser.currentScene.createNode("Shape");
Shape969.USE = "SiteShape";
Transform968.child = new undefined();

Transform968.child[0] = Shape969;

HAnimSite967.children = new MFNode();

HAnimSite967.children[0] = Transform968;

HAnimSegment963.children[2] = HAnimSite967;

HAnimJoint962.children = new MFNode();

HAnimJoint962.children[0] = HAnimSegment963;

let HAnimJoint970 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint970.name = "l_carpal_distal_phalanx_5";
HAnimJoint970.DEF = "hanim_l_carpal_distal_phalanx_5";
HAnimJoint970.center = new SFVec3f(new float[0.1806,-0.1388,0.5938]);
HAnimJoint970.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint970.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment971 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment971.name = "SEGMENT_FOR_l_carpal_distal_phalanx_5";
HAnimSegment971.DEF = "hanim_SEGMENT_FOR_l_carpal_distal_phalanx_5";
let TouchSensor972 = browser.currentScene.createNode("TouchSensor");
TouchSensor972.description = "joint l_carpal_distal_phalanx_5 segment SEGMENT_FOR_l_carpal_distal_phalanx_5";
HAnimSegment971.children = new MFNode();

HAnimSegment971.children[0] = TouchSensor972;

let Transform973 = browser.currentScene.createNode("Transform");
Transform973.translation = new SFVec3f(new float[0.1806,-0.1388,0.5938]);
let Shape974 = browser.currentScene.createNode("Shape");
Shape974.USE = "JointShape";
Transform973.child = new undefined();

Transform973.child[0] = Shape974;

HAnimSegment971.children[1] = Transform973;

let HAnimSite975 = browser.currentScene.createNode("HAnimSite");
HAnimSite975.name = "SEGMENT_FOR_l_carpal_distal_phalanx_5_tip";
HAnimSite975.DEF = "hanim_SEGMENT_FOR_l_carpal_distal_phalanx_5_tip";
let Transform976 = browser.currentScene.createNode("Transform");
Transform976.translation = new SFVec3f(new float[0.1806,-0.1388,0.5938]);
let Shape977 = browser.currentScene.createNode("Shape");
Shape977.USE = "SiteShape";
Transform976.child = new undefined();

Transform976.child[0] = Shape977;

HAnimSite975.children = new MFNode();

HAnimSite975.children[0] = Transform976;

HAnimSegment971.children[2] = HAnimSite975;

HAnimJoint970.children = new MFNode();

HAnimJoint970.children[0] = HAnimSegment971;

HAnimJoint962.children[1] = HAnimJoint970;

HAnimJoint954.children[1] = HAnimJoint962;

HAnimJoint946.children[1] = HAnimJoint954;

HAnimJoint906.children[2] = HAnimJoint946;

HAnimJoint786.children[4] = HAnimJoint906;

HAnimJoint778.children[1] = HAnimJoint786;

HAnimJoint770.children[1] = HAnimJoint778;

HAnimJoint762.children[1] = HAnimJoint770;

HAnimJoint754.children[1] = HAnimJoint762;

HAnimJoint626.children[2] = HAnimJoint754;

let HAnimJoint978 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint978.name = "r_clavicle";
HAnimJoint978.DEF = "hanim_r_clavicle";
HAnimJoint978.center = new SFVec3f(new float[-0.1231,-0.1148,1.1833]);
HAnimJoint978.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint978.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment979 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment979.name = "SEGMENT_FOR_r_clavicle";
HAnimSegment979.DEF = "hanim_SEGMENT_FOR_r_clavicle";
let TouchSensor980 = browser.currentScene.createNode("TouchSensor");
TouchSensor980.description = "joint r_clavicle segment SEGMENT_FOR_r_clavicle";
HAnimSegment979.children = new MFNode();

HAnimSegment979.children[0] = TouchSensor980;

let Transform981 = browser.currentScene.createNode("Transform");
Transform981.translation = new SFVec3f(new float[-0.1231,-0.1148,1.1833]);
let Shape982 = browser.currentScene.createNode("Shape");
Shape982.USE = "JointShape";
Transform981.child = new undefined();

Transform981.child[0] = Shape982;

HAnimSegment979.children[1] = Transform981;

let HAnimSite983 = browser.currentScene.createNode("HAnimSite");
HAnimSite983.name = "SEGMENT_FOR_r_clavicle_tip";
HAnimSite983.DEF = "hanim_SEGMENT_FOR_r_clavicle_tip";
let Transform984 = browser.currentScene.createNode("Transform");
Transform984.translation = new SFVec3f(new float[-0.1231,-0.1148,1.1833]);
let Shape985 = browser.currentScene.createNode("Shape");
Shape985.USE = "SiteShape";
Transform984.child = new undefined();

Transform984.child[0] = Shape985;

HAnimSite983.children = new MFNode();

HAnimSite983.children[0] = Transform984;

HAnimSegment979.children[2] = HAnimSite983;

HAnimJoint978.children = new MFNode();

HAnimJoint978.children[0] = HAnimSegment979;

let HAnimJoint986 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint986.name = "r_scapula";
HAnimJoint986.DEF = "hanim_r_scapula";
HAnimJoint986.center = new SFVec3f(new float[-0.0387,-0.1157,1.2001]);
HAnimJoint986.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint986.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment987 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment987.name = "SEGMENT_FOR_r_scapula";
HAnimSegment987.DEF = "hanim_SEGMENT_FOR_r_scapula";
let TouchSensor988 = browser.currentScene.createNode("TouchSensor");
TouchSensor988.description = "joint r_scapula segment SEGMENT_FOR_r_scapula";
HAnimSegment987.children = new MFNode();

HAnimSegment987.children[0] = TouchSensor988;

let Transform989 = browser.currentScene.createNode("Transform");
Transform989.translation = new SFVec3f(new float[-0.0387,-0.1157,1.2001]);
let Shape990 = browser.currentScene.createNode("Shape");
Shape990.USE = "JointShape";
Transform989.child = new undefined();

Transform989.child[0] = Shape990;

HAnimSegment987.children[1] = Transform989;

let HAnimSite991 = browser.currentScene.createNode("HAnimSite");
HAnimSite991.name = "SEGMENT_FOR_r_scapula_tip";
HAnimSite991.DEF = "hanim_SEGMENT_FOR_r_scapula_tip";
let Transform992 = browser.currentScene.createNode("Transform");
Transform992.translation = new SFVec3f(new float[-0.0387,-0.1157,1.2001]);
let Shape993 = browser.currentScene.createNode("Shape");
Shape993.USE = "SiteShape";
Transform992.child = new undefined();

Transform992.child[0] = Shape993;

HAnimSite991.children = new MFNode();

HAnimSite991.children[0] = Transform992;

HAnimSegment987.children[2] = HAnimSite991;

HAnimJoint986.children = new MFNode();

HAnimJoint986.children[0] = HAnimSegment987;

let HAnimJoint994 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint994.name = "r_upperarm";
HAnimJoint994.DEF = "hanim_r_upperarm";
HAnimJoint994.center = new SFVec3f(new float[-0.1649,-0.1051,1.17]);
HAnimJoint994.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint994.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment995 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment995.name = "SEGMENT_FOR_r_upperarm";
HAnimSegment995.DEF = "hanim_SEGMENT_FOR_r_upperarm";
let TouchSensor996 = browser.currentScene.createNode("TouchSensor");
TouchSensor996.description = "joint r_upperarm segment SEGMENT_FOR_r_upperarm";
HAnimSegment995.children = new MFNode();

HAnimSegment995.children[0] = TouchSensor996;

let Transform997 = browser.currentScene.createNode("Transform");
Transform997.translation = new SFVec3f(new float[-0.1649,-0.1051,1.17]);
let Shape998 = browser.currentScene.createNode("Shape");
Shape998.USE = "JointShape";
Transform997.child = new undefined();

Transform997.child[0] = Shape998;

HAnimSegment995.children[1] = Transform997;

let HAnimSite999 = browser.currentScene.createNode("HAnimSite");
HAnimSite999.name = "SEGMENT_FOR_r_upperarm_tip";
HAnimSite999.DEF = "hanim_SEGMENT_FOR_r_upperarm_tip";
let Transform1000 = browser.currentScene.createNode("Transform");
Transform1000.translation = new SFVec3f(new float[-0.1649,-0.1051,1.17]);
let Shape1001 = browser.currentScene.createNode("Shape");
Shape1001.USE = "SiteShape";
Transform1000.child = new undefined();

Transform1000.child[0] = Shape1001;

HAnimSite999.children = new MFNode();

HAnimSite999.children[0] = Transform1000;

HAnimSegment995.children[2] = HAnimSite999;

HAnimJoint994.children = new MFNode();

HAnimJoint994.children[0] = HAnimSegment995;

let HAnimJoint1002 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1002.name = "r_forearm";
HAnimJoint1002.DEF = "hanim_r_forearm";
HAnimJoint1002.center = new SFVec3f(new float[-0.1819,-0.1075,0.9202]);
HAnimJoint1002.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1002.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1003 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1003.name = "SEGMENT_FOR_r_forearm";
HAnimSegment1003.DEF = "hanim_SEGMENT_FOR_r_forearm";
let TouchSensor1004 = browser.currentScene.createNode("TouchSensor");
TouchSensor1004.description = "joint r_forearm segment SEGMENT_FOR_r_forearm";
HAnimSegment1003.children = new MFNode();

HAnimSegment1003.children[0] = TouchSensor1004;

let Transform1005 = browser.currentScene.createNode("Transform");
Transform1005.translation = new SFVec3f(new float[-0.1819,-0.1075,0.9202]);
let Shape1006 = browser.currentScene.createNode("Shape");
Shape1006.USE = "JointShape";
Transform1005.child = new undefined();

Transform1005.child[0] = Shape1006;

HAnimSegment1003.children[1] = Transform1005;

let HAnimSite1007 = browser.currentScene.createNode("HAnimSite");
HAnimSite1007.name = "SEGMENT_FOR_r_forearm_tip";
HAnimSite1007.DEF = "hanim_SEGMENT_FOR_r_forearm_tip";
let Transform1008 = browser.currentScene.createNode("Transform");
Transform1008.translation = new SFVec3f(new float[-0.1819,-0.1075,0.9202]);
let Shape1009 = browser.currentScene.createNode("Shape");
Shape1009.USE = "SiteShape";
Transform1008.child = new undefined();

Transform1008.child[0] = Shape1009;

HAnimSite1007.children = new MFNode();

HAnimSite1007.children[0] = Transform1008;

HAnimSegment1003.children[2] = HAnimSite1007;

HAnimJoint1002.children = new MFNode();

HAnimJoint1002.children[0] = HAnimSegment1003;

let HAnimJoint1010 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1010.name = "r_carpal";
HAnimJoint1010.DEF = "hanim_r_carpal";
HAnimJoint1010.center = new SFVec3f(new float[-0.1818,-0.1069,0.7157]);
HAnimJoint1010.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1010.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1011 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1011.name = "SEGMENT_FOR_r_carpal";
HAnimSegment1011.DEF = "hanim_SEGMENT_FOR_r_carpal";
let TouchSensor1012 = browser.currentScene.createNode("TouchSensor");
TouchSensor1012.description = "joint r_carpal segment SEGMENT_FOR_r_carpal";
HAnimSegment1011.children = new MFNode();

HAnimSegment1011.children[0] = TouchSensor1012;

let Transform1013 = browser.currentScene.createNode("Transform");
Transform1013.translation = new SFVec3f(new float[-0.1818,-0.1069,0.7157]);
let Shape1014 = browser.currentScene.createNode("Shape");
Shape1014.USE = "JointShape";
Transform1013.child = new undefined();

Transform1013.child[0] = Shape1014;

HAnimSegment1011.children[1] = Transform1013;

let HAnimSite1015 = browser.currentScene.createNode("HAnimSite");
HAnimSite1015.name = "SEGMENT_FOR_r_carpal_tip";
HAnimSite1015.DEF = "hanim_SEGMENT_FOR_r_carpal_tip";
let Transform1016 = browser.currentScene.createNode("Transform");
Transform1016.translation = new SFVec3f(new float[-0.1818,-0.1069,0.7157]);
let Shape1017 = browser.currentScene.createNode("Shape");
Shape1017.USE = "SiteShape";
Transform1016.child = new undefined();

Transform1016.child[0] = Shape1017;

HAnimSite1015.children = new MFNode();

HAnimSite1015.children[0] = Transform1016;

HAnimSegment1011.children[2] = HAnimSite1015;

HAnimJoint1010.children = new MFNode();

HAnimJoint1010.children[0] = HAnimSegment1011;

let HAnimJoint1018 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1018.name = "r_trapezium";
HAnimJoint1018.DEF = "hanim_r_trapezium";
HAnimJoint1018.center = new SFVec3f(new float[-0.1811,-0.0826,0.6975]);
HAnimJoint1018.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1018.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1019 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1019.name = "SEGMENT_FOR_r_trapezium";
HAnimSegment1019.DEF = "hanim_SEGMENT_FOR_r_trapezium";
let TouchSensor1020 = browser.currentScene.createNode("TouchSensor");
TouchSensor1020.description = "joint r_trapezium segment SEGMENT_FOR_r_trapezium";
HAnimSegment1019.children = new MFNode();

HAnimSegment1019.children[0] = TouchSensor1020;

let Transform1021 = browser.currentScene.createNode("Transform");
Transform1021.translation = new SFVec3f(new float[-0.1811,-0.0826,0.6975]);
let Shape1022 = browser.currentScene.createNode("Shape");
Shape1022.USE = "JointShape";
Transform1021.child = new undefined();

Transform1021.child[0] = Shape1022;

HAnimSegment1019.children[1] = Transform1021;

let HAnimSite1023 = browser.currentScene.createNode("HAnimSite");
HAnimSite1023.name = "SEGMENT_FOR_r_trapezium_tip";
HAnimSite1023.DEF = "hanim_SEGMENT_FOR_r_trapezium_tip";
let Transform1024 = browser.currentScene.createNode("Transform");
Transform1024.translation = new SFVec3f(new float[-0.1811,-0.0826,0.6975]);
let Shape1025 = browser.currentScene.createNode("Shape");
Shape1025.USE = "SiteShape";
Transform1024.child = new undefined();

Transform1024.child[0] = Shape1025;

HAnimSite1023.children = new MFNode();

HAnimSite1023.children[0] = Transform1024;

HAnimSegment1019.children[2] = HAnimSite1023;

HAnimJoint1018.children = new MFNode();

HAnimJoint1018.children[0] = HAnimSegment1019;

let HAnimJoint1026 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1026.name = "r_metacarpal_1";
HAnimJoint1026.DEF = "hanim_r_metacarpal_1";
HAnimJoint1026.center = new SFVec3f(new float[-0.1803,-0.0759,0.684]);
HAnimJoint1026.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1026.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1027 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1027.name = "SEGMENT_FOR_r_metacarpal_1";
HAnimSegment1027.DEF = "hanim_SEGMENT_FOR_r_metacarpal_1";
let TouchSensor1028 = browser.currentScene.createNode("TouchSensor");
TouchSensor1028.description = "joint r_metacarpal_1 segment SEGMENT_FOR_r_metacarpal_1";
HAnimSegment1027.children = new MFNode();

HAnimSegment1027.children[0] = TouchSensor1028;

let Transform1029 = browser.currentScene.createNode("Transform");
Transform1029.translation = new SFVec3f(new float[-0.1803,-0.0759,0.684]);
let Shape1030 = browser.currentScene.createNode("Shape");
Shape1030.USE = "JointShape";
Transform1029.child = new undefined();

Transform1029.child[0] = Shape1030;

HAnimSegment1027.children[1] = Transform1029;

let HAnimSite1031 = browser.currentScene.createNode("HAnimSite");
HAnimSite1031.name = "SEGMENT_FOR_r_metacarpal_1_tip";
HAnimSite1031.DEF = "hanim_SEGMENT_FOR_r_metacarpal_1_tip";
let Transform1032 = browser.currentScene.createNode("Transform");
Transform1032.translation = new SFVec3f(new float[-0.1803,-0.0759,0.684]);
let Shape1033 = browser.currentScene.createNode("Shape");
Shape1033.USE = "SiteShape";
Transform1032.child = new undefined();

Transform1032.child[0] = Shape1033;

HAnimSite1031.children = new MFNode();

HAnimSite1031.children[0] = Transform1032;

HAnimSegment1027.children[2] = HAnimSite1031;

HAnimJoint1026.children = new MFNode();

HAnimJoint1026.children[0] = HAnimSegment1027;

let HAnimJoint1034 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1034.name = "r_carpal_proximal_phalanx_1";
HAnimJoint1034.DEF = "hanim_r_carpal_proximal_phalanx_1";
HAnimJoint1034.center = new SFVec3f(new float[-0.1808,-0.0661,0.6642]);
HAnimJoint1034.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1034.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1035 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1035.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_1";
HAnimSegment1035.DEF = "hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_1";
let TouchSensor1036 = browser.currentScene.createNode("TouchSensor");
TouchSensor1036.description = "joint r_carpal_proximal_phalanx_1 segment SEGMENT_FOR_r_carpal_proximal_phalanx_1";
HAnimSegment1035.children = new MFNode();

HAnimSegment1035.children[0] = TouchSensor1036;

let Transform1037 = browser.currentScene.createNode("Transform");
Transform1037.translation = new SFVec3f(new float[-0.1808,-0.0661,0.6642]);
let Shape1038 = browser.currentScene.createNode("Shape");
Shape1038.USE = "JointShape";
Transform1037.child = new undefined();

Transform1037.child[0] = Shape1038;

HAnimSegment1035.children[1] = Transform1037;

let HAnimSite1039 = browser.currentScene.createNode("HAnimSite");
HAnimSite1039.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_1_tip";
HAnimSite1039.DEF = "hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_1_tip";
let Transform1040 = browser.currentScene.createNode("Transform");
Transform1040.translation = new SFVec3f(new float[-0.1808,-0.0661,0.6642]);
let Shape1041 = browser.currentScene.createNode("Shape");
Shape1041.USE = "SiteShape";
Transform1040.child = new undefined();

Transform1040.child[0] = Shape1041;

HAnimSite1039.children = new MFNode();

HAnimSite1039.children[0] = Transform1040;

HAnimSegment1035.children[2] = HAnimSite1039;

HAnimJoint1034.children = new MFNode();

HAnimJoint1034.children[0] = HAnimSegment1035;

let HAnimJoint1042 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1042.name = "r_carpal_distal_phalanx_1";
HAnimJoint1042.DEF = "hanim_r_carpal_distal_phalanx_1";
HAnimJoint1042.center = new SFVec3f(new float[-0.1825,-0.0522,0.6455]);
HAnimJoint1042.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1042.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1043 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1043.name = "SEGMENT_FOR_r_carpal_distal_phalanx_1";
HAnimSegment1043.DEF = "hanim_SEGMENT_FOR_r_carpal_distal_phalanx_1";
let TouchSensor1044 = browser.currentScene.createNode("TouchSensor");
TouchSensor1044.description = "joint r_carpal_distal_phalanx_1 segment SEGMENT_FOR_r_carpal_distal_phalanx_1";
HAnimSegment1043.children = new MFNode();

HAnimSegment1043.children[0] = TouchSensor1044;

let Transform1045 = browser.currentScene.createNode("Transform");
Transform1045.translation = new SFVec3f(new float[-0.1825,-0.0522,0.6455]);
let Shape1046 = browser.currentScene.createNode("Shape");
Shape1046.USE = "JointShape";
Transform1045.child = new undefined();

Transform1045.child[0] = Shape1046;

HAnimSegment1043.children[1] = Transform1045;

let HAnimSite1047 = browser.currentScene.createNode("HAnimSite");
HAnimSite1047.name = "SEGMENT_FOR_r_carpal_distal_phalanx_1_tip";
HAnimSite1047.DEF = "hanim_SEGMENT_FOR_r_carpal_distal_phalanx_1_tip";
let Transform1048 = browser.currentScene.createNode("Transform");
Transform1048.translation = new SFVec3f(new float[-0.1825,-0.0522,0.6455]);
let Shape1049 = browser.currentScene.createNode("Shape");
Shape1049.USE = "SiteShape";
Transform1048.child = new undefined();

Transform1048.child[0] = Shape1049;

HAnimSite1047.children = new MFNode();

HAnimSite1047.children[0] = Transform1048;

HAnimSegment1043.children[2] = HAnimSite1047;

HAnimJoint1042.children = new MFNode();

HAnimJoint1042.children[0] = HAnimSegment1043;

HAnimJoint1034.children[1] = HAnimJoint1042;

HAnimJoint1026.children[1] = HAnimJoint1034;

HAnimJoint1018.children[1] = HAnimJoint1026;

HAnimJoint1010.children[1] = HAnimJoint1018;

let HAnimJoint1050 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1050.name = "r_trapezoid";
HAnimJoint1050.DEF = "hanim_r_trapezoid";
HAnimJoint1050.center = new SFVec3f(new float[-0.1811,-0.0935,0.6984]);
HAnimJoint1050.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1050.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1051 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1051.name = "SEGMENT_FOR_r_trapezoid";
HAnimSegment1051.DEF = "hanim_SEGMENT_FOR_r_trapezoid";
let TouchSensor1052 = browser.currentScene.createNode("TouchSensor");
TouchSensor1052.description = "joint r_trapezoid segment SEGMENT_FOR_r_trapezoid";
HAnimSegment1051.children = new MFNode();

HAnimSegment1051.children[0] = TouchSensor1052;

let Transform1053 = browser.currentScene.createNode("Transform");
Transform1053.translation = new SFVec3f(new float[-0.1811,-0.0935,0.6984]);
let Shape1054 = browser.currentScene.createNode("Shape");
Shape1054.USE = "JointShape";
Transform1053.child = new undefined();

Transform1053.child[0] = Shape1054;

HAnimSegment1051.children[1] = Transform1053;

let HAnimSite1055 = browser.currentScene.createNode("HAnimSite");
HAnimSite1055.name = "SEGMENT_FOR_r_trapezoid_tip";
HAnimSite1055.DEF = "hanim_SEGMENT_FOR_r_trapezoid_tip";
let Transform1056 = browser.currentScene.createNode("Transform");
Transform1056.translation = new SFVec3f(new float[-0.1811,-0.0935,0.6984]);
let Shape1057 = browser.currentScene.createNode("Shape");
Shape1057.USE = "SiteShape";
Transform1056.child = new undefined();

Transform1056.child[0] = Shape1057;

HAnimSite1055.children = new MFNode();

HAnimSite1055.children[0] = Transform1056;

HAnimSegment1051.children[2] = HAnimSite1055;

HAnimJoint1050.children = new MFNode();

HAnimJoint1050.children[0] = HAnimSegment1051;

let HAnimJoint1058 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1058.name = "r_metacarpal_2";
HAnimJoint1058.DEF = "hanim_r_metacarpal_2";
HAnimJoint1058.center = new SFVec3f(new float[-0.1811,-0.0922,0.679]);
HAnimJoint1058.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1058.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1059 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1059.name = "SEGMENT_FOR_r_metacarpal_2";
HAnimSegment1059.DEF = "hanim_SEGMENT_FOR_r_metacarpal_2";
let TouchSensor1060 = browser.currentScene.createNode("TouchSensor");
TouchSensor1060.description = "joint r_metacarpal_2 segment SEGMENT_FOR_r_metacarpal_2";
HAnimSegment1059.children = new MFNode();

HAnimSegment1059.children[0] = TouchSensor1060;

let Transform1061 = browser.currentScene.createNode("Transform");
Transform1061.translation = new SFVec3f(new float[-0.1811,-0.0922,0.679]);
let Shape1062 = browser.currentScene.createNode("Shape");
Shape1062.USE = "JointShape";
Transform1061.child = new undefined();

Transform1061.child[0] = Shape1062;

HAnimSegment1059.children[1] = Transform1061;

let HAnimSite1063 = browser.currentScene.createNode("HAnimSite");
HAnimSite1063.name = "SEGMENT_FOR_r_metacarpal_2_tip";
HAnimSite1063.DEF = "hanim_SEGMENT_FOR_r_metacarpal_2_tip";
let Transform1064 = browser.currentScene.createNode("Transform");
Transform1064.translation = new SFVec3f(new float[-0.1811,-0.0922,0.679]);
let Shape1065 = browser.currentScene.createNode("Shape");
Shape1065.USE = "SiteShape";
Transform1064.child = new undefined();

Transform1064.child[0] = Shape1065;

HAnimSite1063.children = new MFNode();

HAnimSite1063.children[0] = Transform1064;

HAnimSegment1059.children[2] = HAnimSite1063;

HAnimJoint1058.children = new MFNode();

HAnimJoint1058.children[0] = HAnimSegment1059;

let HAnimJoint1066 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1066.name = "r_carpal_proximal_phalanx_2";
HAnimJoint1066.DEF = "hanim_r_carpal_proximal_phalanx_2";
HAnimJoint1066.center = new SFVec3f(new float[-0.1835,-0.0868,0.6286]);
HAnimJoint1066.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1066.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1067 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1067.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_2";
HAnimSegment1067.DEF = "hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_2";
let TouchSensor1068 = browser.currentScene.createNode("TouchSensor");
TouchSensor1068.description = "joint r_carpal_proximal_phalanx_2 segment SEGMENT_FOR_r_carpal_proximal_phalanx_2";
HAnimSegment1067.children = new MFNode();

HAnimSegment1067.children[0] = TouchSensor1068;

let Transform1069 = browser.currentScene.createNode("Transform");
Transform1069.translation = new SFVec3f(new float[-0.1835,-0.0868,0.6286]);
let Shape1070 = browser.currentScene.createNode("Shape");
Shape1070.USE = "JointShape";
Transform1069.child = new undefined();

Transform1069.child[0] = Shape1070;

HAnimSegment1067.children[1] = Transform1069;

let HAnimSite1071 = browser.currentScene.createNode("HAnimSite");
HAnimSite1071.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_2_tip";
HAnimSite1071.DEF = "hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_2_tip";
let Transform1072 = browser.currentScene.createNode("Transform");
Transform1072.translation = new SFVec3f(new float[-0.1835,-0.0868,0.6286]);
let Shape1073 = browser.currentScene.createNode("Shape");
Shape1073.USE = "SiteShape";
Transform1072.child = new undefined();

Transform1072.child[0] = Shape1073;

HAnimSite1071.children = new MFNode();

HAnimSite1071.children[0] = Transform1072;

HAnimSegment1067.children[2] = HAnimSite1071;

HAnimJoint1066.children = new MFNode();

HAnimJoint1066.children[0] = HAnimSegment1067;

let HAnimJoint1074 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1074.name = "r_carpal_middle_phalanx_2";
HAnimJoint1074.DEF = "hanim_r_carpal_middle_phalanx_2";
HAnimJoint1074.center = new SFVec3f(new float[-0.1815,-0.0877,0.5983]);
HAnimJoint1074.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1074.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1075 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1075.name = "SEGMENT_FOR_r_carpal_middle_phalanx_2";
HAnimSegment1075.DEF = "hanim_SEGMENT_FOR_r_carpal_middle_phalanx_2";
let TouchSensor1076 = browser.currentScene.createNode("TouchSensor");
TouchSensor1076.description = "joint r_carpal_middle_phalanx_2 segment SEGMENT_FOR_r_carpal_middle_phalanx_2";
HAnimSegment1075.children = new MFNode();

HAnimSegment1075.children[0] = TouchSensor1076;

let Transform1077 = browser.currentScene.createNode("Transform");
Transform1077.translation = new SFVec3f(new float[-0.1815,-0.0877,0.5983]);
let Shape1078 = browser.currentScene.createNode("Shape");
Shape1078.USE = "JointShape";
Transform1077.child = new undefined();

Transform1077.child[0] = Shape1078;

HAnimSegment1075.children[1] = Transform1077;

let HAnimSite1079 = browser.currentScene.createNode("HAnimSite");
HAnimSite1079.name = "SEGMENT_FOR_r_carpal_middle_phalanx_2_tip";
HAnimSite1079.DEF = "hanim_SEGMENT_FOR_r_carpal_middle_phalanx_2_tip";
let Transform1080 = browser.currentScene.createNode("Transform");
Transform1080.translation = new SFVec3f(new float[-0.1815,-0.0877,0.5983]);
let Shape1081 = browser.currentScene.createNode("Shape");
Shape1081.USE = "SiteShape";
Transform1080.child = new undefined();

Transform1080.child[0] = Shape1081;

HAnimSite1079.children = new MFNode();

HAnimSite1079.children[0] = Transform1080;

HAnimSegment1075.children[2] = HAnimSite1079;

HAnimJoint1074.children = new MFNode();

HAnimJoint1074.children[0] = HAnimSegment1075;

let HAnimJoint1082 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1082.name = "r_carpal_distal_phalanx_2";
HAnimJoint1082.DEF = "hanim_r_carpal_distal_phalanx_2";
HAnimJoint1082.center = new SFVec3f(new float[-0.1805,-0.0885,0.5731]);
HAnimJoint1082.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1082.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1083 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1083.name = "SEGMENT_FOR_r_carpal_distal_phalanx_2";
HAnimSegment1083.DEF = "hanim_SEGMENT_FOR_r_carpal_distal_phalanx_2";
let TouchSensor1084 = browser.currentScene.createNode("TouchSensor");
TouchSensor1084.description = "joint r_carpal_distal_phalanx_2 segment SEGMENT_FOR_r_carpal_distal_phalanx_2";
HAnimSegment1083.children = new MFNode();

HAnimSegment1083.children[0] = TouchSensor1084;

let Transform1085 = browser.currentScene.createNode("Transform");
Transform1085.translation = new SFVec3f(new float[-0.1805,-0.0885,0.5731]);
let Shape1086 = browser.currentScene.createNode("Shape");
Shape1086.USE = "JointShape";
Transform1085.child = new undefined();

Transform1085.child[0] = Shape1086;

HAnimSegment1083.children[1] = Transform1085;

let HAnimSite1087 = browser.currentScene.createNode("HAnimSite");
HAnimSite1087.name = "SEGMENT_FOR_r_carpal_distal_phalanx_2_tip";
HAnimSite1087.DEF = "hanim_SEGMENT_FOR_r_carpal_distal_phalanx_2_tip";
let Transform1088 = browser.currentScene.createNode("Transform");
Transform1088.translation = new SFVec3f(new float[-0.1805,-0.0885,0.5731]);
let Shape1089 = browser.currentScene.createNode("Shape");
Shape1089.USE = "SiteShape";
Transform1088.child = new undefined();

Transform1088.child[0] = Shape1089;

HAnimSite1087.children = new MFNode();

HAnimSite1087.children[0] = Transform1088;

HAnimSegment1083.children[2] = HAnimSite1087;

HAnimJoint1082.children = new MFNode();

HAnimJoint1082.children[0] = HAnimSegment1083;

HAnimJoint1074.children[1] = HAnimJoint1082;

HAnimJoint1066.children[1] = HAnimJoint1074;

HAnimJoint1058.children[1] = HAnimJoint1066;

HAnimJoint1050.children[1] = HAnimJoint1058;

HAnimJoint1010.children[2] = HAnimJoint1050;

let HAnimJoint1090 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1090.name = "r_capitate";
HAnimJoint1090.DEF = "hanim_r_capitate";
HAnimJoint1090.center = new SFVec3f(new float[-0.1809,-0.1067,0.7]);
HAnimJoint1090.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1090.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1091 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1091.name = "SEGMENT_FOR_r_capitate";
HAnimSegment1091.DEF = "hanim_SEGMENT_FOR_r_capitate";
let TouchSensor1092 = browser.currentScene.createNode("TouchSensor");
TouchSensor1092.description = "joint r_capitate segment SEGMENT_FOR_r_capitate";
HAnimSegment1091.children = new MFNode();

HAnimSegment1091.children[0] = TouchSensor1092;

let Transform1093 = browser.currentScene.createNode("Transform");
Transform1093.translation = new SFVec3f(new float[-0.1809,-0.1067,0.7]);
let Shape1094 = browser.currentScene.createNode("Shape");
Shape1094.USE = "JointShape";
Transform1093.child = new undefined();

Transform1093.child[0] = Shape1094;

HAnimSegment1091.children[1] = Transform1093;

let HAnimSite1095 = browser.currentScene.createNode("HAnimSite");
HAnimSite1095.name = "SEGMENT_FOR_r_capitate_tip";
HAnimSite1095.DEF = "hanim_SEGMENT_FOR_r_capitate_tip";
let Transform1096 = browser.currentScene.createNode("Transform");
Transform1096.translation = new SFVec3f(new float[-0.1809,-0.1067,0.7]);
let Shape1097 = browser.currentScene.createNode("Shape");
Shape1097.USE = "SiteShape";
Transform1096.child = new undefined();

Transform1096.child[0] = Shape1097;

HAnimSite1095.children = new MFNode();

HAnimSite1095.children[0] = Transform1096;

HAnimSegment1091.children[2] = HAnimSite1095;

HAnimJoint1090.children = new MFNode();

HAnimJoint1090.children[0] = HAnimSegment1091;

let HAnimJoint1098 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1098.name = "r_metacarpal_3";
HAnimJoint1098.DEF = "hanim_r_metacarpal_3";
HAnimJoint1098.center = new SFVec3f(new float[-0.1809,-0.1081,0.6772]);
HAnimJoint1098.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1098.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1099 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1099.name = "SEGMENT_FOR_r_metacarpal_3";
HAnimSegment1099.DEF = "hanim_SEGMENT_FOR_r_metacarpal_3";
let TouchSensor1100 = browser.currentScene.createNode("TouchSensor");
TouchSensor1100.description = "joint r_metacarpal_3 segment SEGMENT_FOR_r_metacarpal_3";
HAnimSegment1099.children = new MFNode();

HAnimSegment1099.children[0] = TouchSensor1100;

let Transform1101 = browser.currentScene.createNode("Transform");
Transform1101.translation = new SFVec3f(new float[-0.1809,-0.1081,0.6772]);
let Shape1102 = browser.currentScene.createNode("Shape");
Shape1102.USE = "JointShape";
Transform1101.child = new undefined();

Transform1101.child[0] = Shape1102;

HAnimSegment1099.children[1] = Transform1101;

let HAnimSite1103 = browser.currentScene.createNode("HAnimSite");
HAnimSite1103.name = "SEGMENT_FOR_r_metacarpal_3_tip";
HAnimSite1103.DEF = "hanim_SEGMENT_FOR_r_metacarpal_3_tip";
let Transform1104 = browser.currentScene.createNode("Transform");
Transform1104.translation = new SFVec3f(new float[-0.1809,-0.1081,0.6772]);
let Shape1105 = browser.currentScene.createNode("Shape");
Shape1105.USE = "SiteShape";
Transform1104.child = new undefined();

Transform1104.child[0] = Shape1105;

HAnimSite1103.children = new MFNode();

HAnimSite1103.children[0] = Transform1104;

HAnimSegment1099.children[2] = HAnimSite1103;

HAnimJoint1098.children = new MFNode();

HAnimJoint1098.children[0] = HAnimSegment1099;

let HAnimJoint1106 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1106.name = "r_carpal_proximal_phalanx_3";
HAnimJoint1106.DEF = "hanim_r_carpal_proximal_phalanx_3";
HAnimJoint1106.center = new SFVec3f(new float[-0.1835,-0.1058,0.6264]);
HAnimJoint1106.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1106.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1107 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1107.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_3";
HAnimSegment1107.DEF = "hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_3";
let TouchSensor1108 = browser.currentScene.createNode("TouchSensor");
TouchSensor1108.description = "joint r_carpal_proximal_phalanx_3 segment SEGMENT_FOR_r_carpal_proximal_phalanx_3";
HAnimSegment1107.children = new MFNode();

HAnimSegment1107.children[0] = TouchSensor1108;

let Transform1109 = browser.currentScene.createNode("Transform");
Transform1109.translation = new SFVec3f(new float[-0.1835,-0.1058,0.6264]);
let Shape1110 = browser.currentScene.createNode("Shape");
Shape1110.USE = "JointShape";
Transform1109.child = new undefined();

Transform1109.child[0] = Shape1110;

HAnimSegment1107.children[1] = Transform1109;

let HAnimSite1111 = browser.currentScene.createNode("HAnimSite");
HAnimSite1111.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_3_tip";
HAnimSite1111.DEF = "hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_3_tip";
let Transform1112 = browser.currentScene.createNode("Transform");
Transform1112.translation = new SFVec3f(new float[-0.1835,-0.1058,0.6264]);
let Shape1113 = browser.currentScene.createNode("Shape");
Shape1113.USE = "SiteShape";
Transform1112.child = new undefined();

Transform1112.child[0] = Shape1113;

HAnimSite1111.children = new MFNode();

HAnimSite1111.children[0] = Transform1112;

HAnimSegment1107.children[2] = HAnimSite1111;

HAnimJoint1106.children = new MFNode();

HAnimJoint1106.children[0] = HAnimSegment1107;

let HAnimJoint1114 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1114.name = "r_carpal_middle_phalanx_3";
HAnimJoint1114.DEF = "hanim_r_carpal_middle_phalanx_3";
HAnimJoint1114.center = new SFVec3f(new float[-0.1815,-0.1054,0.5947]);
HAnimJoint1114.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1114.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1115 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1115.name = "SEGMENT_FOR_r_carpal_middle_phalanx_3";
HAnimSegment1115.DEF = "hanim_SEGMENT_FOR_r_carpal_middle_phalanx_3";
let TouchSensor1116 = browser.currentScene.createNode("TouchSensor");
TouchSensor1116.description = "joint r_carpal_middle_phalanx_3 segment SEGMENT_FOR_r_carpal_middle_phalanx_3";
HAnimSegment1115.children = new MFNode();

HAnimSegment1115.children[0] = TouchSensor1116;

let Transform1117 = browser.currentScene.createNode("Transform");
Transform1117.translation = new SFVec3f(new float[-0.1815,-0.1054,0.5947]);
let Shape1118 = browser.currentScene.createNode("Shape");
Shape1118.USE = "JointShape";
Transform1117.child = new undefined();

Transform1117.child[0] = Shape1118;

HAnimSegment1115.children[1] = Transform1117;

let HAnimSite1119 = browser.currentScene.createNode("HAnimSite");
HAnimSite1119.name = "SEGMENT_FOR_r_carpal_middle_phalanx_3_tip";
HAnimSite1119.DEF = "hanim_SEGMENT_FOR_r_carpal_middle_phalanx_3_tip";
let Transform1120 = browser.currentScene.createNode("Transform");
Transform1120.translation = new SFVec3f(new float[-0.1815,-0.1054,0.5947]);
let Shape1121 = browser.currentScene.createNode("Shape");
Shape1121.USE = "SiteShape";
Transform1120.child = new undefined();

Transform1120.child[0] = Shape1121;

HAnimSite1119.children = new MFNode();

HAnimSite1119.children[0] = Transform1120;

HAnimSegment1115.children[2] = HAnimSite1119;

HAnimJoint1114.children = new MFNode();

HAnimJoint1114.children[0] = HAnimSegment1115;

let HAnimJoint1122 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1122.name = "r_carpal_distal_phalanx_3";
HAnimJoint1122.DEF = "hanim_r_carpal_distal_phalanx_3";
HAnimJoint1122.center = new SFVec3f(new float[-0.1805,-0.1056,0.5668]);
HAnimJoint1122.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1122.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1123 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1123.name = "SEGMENT_FOR_r_carpal_distal_phalanx_3";
HAnimSegment1123.DEF = "hanim_SEGMENT_FOR_r_carpal_distal_phalanx_3";
let TouchSensor1124 = browser.currentScene.createNode("TouchSensor");
TouchSensor1124.description = "joint r_carpal_distal_phalanx_3 segment SEGMENT_FOR_r_carpal_distal_phalanx_3";
HAnimSegment1123.children = new MFNode();

HAnimSegment1123.children[0] = TouchSensor1124;

let Transform1125 = browser.currentScene.createNode("Transform");
Transform1125.translation = new SFVec3f(new float[-0.1805,-0.1056,0.5668]);
let Shape1126 = browser.currentScene.createNode("Shape");
Shape1126.USE = "JointShape";
Transform1125.child = new undefined();

Transform1125.child[0] = Shape1126;

HAnimSegment1123.children[1] = Transform1125;

let HAnimSite1127 = browser.currentScene.createNode("HAnimSite");
HAnimSite1127.name = "SEGMENT_FOR_r_carpal_distal_phalanx_3_tip";
HAnimSite1127.DEF = "hanim_SEGMENT_FOR_r_carpal_distal_phalanx_3_tip";
let Transform1128 = browser.currentScene.createNode("Transform");
Transform1128.translation = new SFVec3f(new float[-0.1805,-0.1056,0.5668]);
let Shape1129 = browser.currentScene.createNode("Shape");
Shape1129.USE = "SiteShape";
Transform1128.child = new undefined();

Transform1128.child[0] = Shape1129;

HAnimSite1127.children = new MFNode();

HAnimSite1127.children[0] = Transform1128;

HAnimSegment1123.children[2] = HAnimSite1127;

HAnimJoint1122.children = new MFNode();

HAnimJoint1122.children[0] = HAnimSegment1123;

HAnimJoint1114.children[1] = HAnimJoint1122;

HAnimJoint1106.children[1] = HAnimJoint1114;

HAnimJoint1098.children[1] = HAnimJoint1106;

HAnimJoint1090.children[1] = HAnimJoint1098;

HAnimJoint1010.children[3] = HAnimJoint1090;

let HAnimJoint1130 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1130.name = "r_hamate";
HAnimJoint1130.DEF = "hanim_r_hamate";
HAnimJoint1130.center = new SFVec3f(new float[-0.1809,-0.1276,0.6973]);
HAnimJoint1130.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1130.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1131 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1131.name = "SEGMENT_FOR_r_hamate";
HAnimSegment1131.DEF = "hanim_SEGMENT_FOR_r_hamate";
let TouchSensor1132 = browser.currentScene.createNode("TouchSensor");
TouchSensor1132.description = "joint r_hamate segment SEGMENT_FOR_r_hamate";
HAnimSegment1131.children = new MFNode();

HAnimSegment1131.children[0] = TouchSensor1132;

let Transform1133 = browser.currentScene.createNode("Transform");
Transform1133.translation = new SFVec3f(new float[-0.1809,-0.1276,0.6973]);
let Shape1134 = browser.currentScene.createNode("Shape");
Shape1134.USE = "JointShape";
Transform1133.child = new undefined();

Transform1133.child[0] = Shape1134;

HAnimSegment1131.children[1] = Transform1133;

let HAnimSite1135 = browser.currentScene.createNode("HAnimSite");
HAnimSite1135.name = "SEGMENT_FOR_r_hamate_tip";
HAnimSite1135.DEF = "hanim_SEGMENT_FOR_r_hamate_tip";
let Transform1136 = browser.currentScene.createNode("Transform");
Transform1136.translation = new SFVec3f(new float[-0.1809,-0.1276,0.6973]);
let Shape1137 = browser.currentScene.createNode("Shape");
Shape1137.USE = "SiteShape";
Transform1136.child = new undefined();

Transform1136.child[0] = Shape1137;

HAnimSite1135.children = new MFNode();

HAnimSite1135.children[0] = Transform1136;

HAnimSegment1131.children[2] = HAnimSite1135;

HAnimJoint1130.children = new MFNode();

HAnimJoint1130.children[0] = HAnimSegment1131;

let HAnimJoint1138 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1138.name = "r_metacarpal_4";
HAnimJoint1138.DEF = "hanim_r_metacarpal_4";
HAnimJoint1138.center = new SFVec3f(new float[-0.1809,-0.1218,0.6777]);
HAnimJoint1138.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1138.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1139 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1139.name = "SEGMENT_FOR_r_metacarpal_4";
HAnimSegment1139.DEF = "hanim_SEGMENT_FOR_r_metacarpal_4";
let TouchSensor1140 = browser.currentScene.createNode("TouchSensor");
TouchSensor1140.description = "joint r_metacarpal_4 segment SEGMENT_FOR_r_metacarpal_4";
HAnimSegment1139.children = new MFNode();

HAnimSegment1139.children[0] = TouchSensor1140;

let Transform1141 = browser.currentScene.createNode("Transform");
Transform1141.translation = new SFVec3f(new float[-0.1809,-0.1218,0.6777]);
let Shape1142 = browser.currentScene.createNode("Shape");
Shape1142.USE = "JointShape";
Transform1141.child = new undefined();

Transform1141.child[0] = Shape1142;

HAnimSegment1139.children[1] = Transform1141;

let HAnimSite1143 = browser.currentScene.createNode("HAnimSite");
HAnimSite1143.name = "SEGMENT_FOR_r_metacarpal_4_tip";
HAnimSite1143.DEF = "hanim_SEGMENT_FOR_r_metacarpal_4_tip";
let Transform1144 = browser.currentScene.createNode("Transform");
Transform1144.translation = new SFVec3f(new float[-0.1809,-0.1218,0.6777]);
let Shape1145 = browser.currentScene.createNode("Shape");
Shape1145.USE = "SiteShape";
Transform1144.child = new undefined();

Transform1144.child[0] = Shape1145;

HAnimSite1143.children = new MFNode();

HAnimSite1143.children[0] = Transform1144;

HAnimSegment1139.children[2] = HAnimSite1143;

HAnimJoint1138.children = new MFNode();

HAnimJoint1138.children[0] = HAnimSegment1139;

let HAnimJoint1146 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1146.name = "r_carpal_proximal_phalanx_4";
HAnimJoint1146.DEF = "hanim_r_carpal_proximal_phalanx_4";
HAnimJoint1146.center = new SFVec3f(new float[-0.1835,-0.1233,0.6255]);
HAnimJoint1146.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1146.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1147 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1147.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_4";
HAnimSegment1147.DEF = "hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_4";
let TouchSensor1148 = browser.currentScene.createNode("TouchSensor");
TouchSensor1148.description = "joint r_carpal_proximal_phalanx_4 segment SEGMENT_FOR_r_carpal_proximal_phalanx_4";
HAnimSegment1147.children = new MFNode();

HAnimSegment1147.children[0] = TouchSensor1148;

let Transform1149 = browser.currentScene.createNode("Transform");
Transform1149.translation = new SFVec3f(new float[-0.1835,-0.1233,0.6255]);
let Shape1150 = browser.currentScene.createNode("Shape");
Shape1150.USE = "JointShape";
Transform1149.child = new undefined();

Transform1149.child[0] = Shape1150;

HAnimSegment1147.children[1] = Transform1149;

let HAnimSite1151 = browser.currentScene.createNode("HAnimSite");
HAnimSite1151.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_4_tip";
HAnimSite1151.DEF = "hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_4_tip";
let Transform1152 = browser.currentScene.createNode("Transform");
Transform1152.translation = new SFVec3f(new float[-0.1835,-0.1233,0.6255]);
let Shape1153 = browser.currentScene.createNode("Shape");
Shape1153.USE = "SiteShape";
Transform1152.child = new undefined();

Transform1152.child[0] = Shape1153;

HAnimSite1151.children = new MFNode();

HAnimSite1151.children[0] = Transform1152;

HAnimSegment1147.children[2] = HAnimSite1151;

HAnimJoint1146.children = new MFNode();

HAnimJoint1146.children[0] = HAnimSegment1147;

let HAnimJoint1154 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1154.name = "r_carpal_middle_phalanx_4";
HAnimJoint1154.DEF = "hanim_r_carpal_middle_phalanx_4";
HAnimJoint1154.center = new SFVec3f(new float[-0.1815,-0.1225,0.598]);
HAnimJoint1154.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1154.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1155 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1155.name = "SEGMENT_FOR_r_carpal_middle_phalanx_4";
HAnimSegment1155.DEF = "hanim_SEGMENT_FOR_r_carpal_middle_phalanx_4";
let TouchSensor1156 = browser.currentScene.createNode("TouchSensor");
TouchSensor1156.description = "joint r_carpal_middle_phalanx_4 segment SEGMENT_FOR_r_carpal_middle_phalanx_4";
HAnimSegment1155.children = new MFNode();

HAnimSegment1155.children[0] = TouchSensor1156;

let Transform1157 = browser.currentScene.createNode("Transform");
Transform1157.translation = new SFVec3f(new float[-0.1815,-0.1225,0.598]);
let Shape1158 = browser.currentScene.createNode("Shape");
Shape1158.USE = "JointShape";
Transform1157.child = new undefined();

Transform1157.child[0] = Shape1158;

HAnimSegment1155.children[1] = Transform1157;

let HAnimSite1159 = browser.currentScene.createNode("HAnimSite");
HAnimSite1159.name = "SEGMENT_FOR_r_carpal_middle_phalanx_4_tip";
HAnimSite1159.DEF = "hanim_SEGMENT_FOR_r_carpal_middle_phalanx_4_tip";
let Transform1160 = browser.currentScene.createNode("Transform");
Transform1160.translation = new SFVec3f(new float[-0.1815,-0.1225,0.598]);
let Shape1161 = browser.currentScene.createNode("Shape");
Shape1161.USE = "SiteShape";
Transform1160.child = new undefined();

Transform1160.child[0] = Shape1161;

HAnimSite1159.children = new MFNode();

HAnimSite1159.children[0] = Transform1160;

HAnimSegment1155.children[2] = HAnimSite1159;

HAnimJoint1154.children = new MFNode();

HAnimJoint1154.children[0] = HAnimSegment1155;

let HAnimJoint1162 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1162.name = "r_carpal_distal_phalanx_4";
HAnimJoint1162.DEF = "hanim_r_carpal_distal_phalanx_4";
HAnimJoint1162.center = new SFVec3f(new float[-0.1805,-0.1217,0.5722]);
HAnimJoint1162.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1162.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1163 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1163.name = "SEGMENT_FOR_r_carpal_distal_phalanx_4";
HAnimSegment1163.DEF = "hanim_SEGMENT_FOR_r_carpal_distal_phalanx_4";
let TouchSensor1164 = browser.currentScene.createNode("TouchSensor");
TouchSensor1164.description = "joint r_carpal_distal_phalanx_4 segment SEGMENT_FOR_r_carpal_distal_phalanx_4";
HAnimSegment1163.children = new MFNode();

HAnimSegment1163.children[0] = TouchSensor1164;

let Transform1165 = browser.currentScene.createNode("Transform");
Transform1165.translation = new SFVec3f(new float[-0.1805,-0.1217,0.5722]);
let Shape1166 = browser.currentScene.createNode("Shape");
Shape1166.USE = "JointShape";
Transform1165.child = new undefined();

Transform1165.child[0] = Shape1166;

HAnimSegment1163.children[1] = Transform1165;

let HAnimSite1167 = browser.currentScene.createNode("HAnimSite");
HAnimSite1167.name = "SEGMENT_FOR_r_carpal_distal_phalanx_4_tip";
HAnimSite1167.DEF = "hanim_SEGMENT_FOR_r_carpal_distal_phalanx_4_tip";
let Transform1168 = browser.currentScene.createNode("Transform");
Transform1168.translation = new SFVec3f(new float[-0.1805,-0.1217,0.5722]);
let Shape1169 = browser.currentScene.createNode("Shape");
Shape1169.USE = "SiteShape";
Transform1168.child = new undefined();

Transform1168.child[0] = Shape1169;

HAnimSite1167.children = new MFNode();

HAnimSite1167.children[0] = Transform1168;

HAnimSegment1163.children[2] = HAnimSite1167;

HAnimJoint1162.children = new MFNode();

HAnimJoint1162.children[0] = HAnimSegment1163;

HAnimJoint1154.children[1] = HAnimJoint1162;

HAnimJoint1146.children[1] = HAnimJoint1154;

HAnimJoint1138.children[1] = HAnimJoint1146;

HAnimJoint1130.children[1] = HAnimJoint1138;

let HAnimJoint1170 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1170.name = "r_metacarpal_5";
HAnimJoint1170.DEF = "hanim_r_metacarpal_5";
HAnimJoint1170.center = new SFVec3f(new float[-0.1814,-0.1347,0.6797]);
HAnimJoint1170.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1170.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1171 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1171.name = "SEGMENT_FOR_r_metacarpal_5";
HAnimSegment1171.DEF = "hanim_SEGMENT_FOR_r_metacarpal_5";
let TouchSensor1172 = browser.currentScene.createNode("TouchSensor");
TouchSensor1172.description = "joint r_metacarpal_5 segment SEGMENT_FOR_r_metacarpal_5";
HAnimSegment1171.children = new MFNode();

HAnimSegment1171.children[0] = TouchSensor1172;

let Transform1173 = browser.currentScene.createNode("Transform");
Transform1173.translation = new SFVec3f(new float[-0.1814,-0.1347,0.6797]);
let Shape1174 = browser.currentScene.createNode("Shape");
Shape1174.USE = "JointShape";
Transform1173.child = new undefined();

Transform1173.child[0] = Shape1174;

HAnimSegment1171.children[1] = Transform1173;

let HAnimSite1175 = browser.currentScene.createNode("HAnimSite");
HAnimSite1175.name = "SEGMENT_FOR_r_metacarpal_5_tip";
HAnimSite1175.DEF = "hanim_SEGMENT_FOR_r_metacarpal_5_tip";
let Transform1176 = browser.currentScene.createNode("Transform");
Transform1176.translation = new SFVec3f(new float[-0.1814,-0.1347,0.6797]);
let Shape1177 = browser.currentScene.createNode("Shape");
Shape1177.USE = "SiteShape";
Transform1176.child = new undefined();

Transform1176.child[0] = Shape1177;

HAnimSite1175.children = new MFNode();

HAnimSite1175.children[0] = Transform1176;

HAnimSegment1171.children[2] = HAnimSite1175;

HAnimJoint1170.children = new MFNode();

HAnimJoint1170.children[0] = HAnimSegment1171;

let HAnimJoint1178 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1178.name = "r_carpal_proximal_phalanx_5";
HAnimJoint1178.DEF = "hanim_r_carpal_proximal_phalanx_5";
HAnimJoint1178.center = new SFVec3f(new float[-0.1832,-0.1389,0.6295]);
HAnimJoint1178.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1178.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1179 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1179.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_5";
HAnimSegment1179.DEF = "hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_5";
let TouchSensor1180 = browser.currentScene.createNode("TouchSensor");
TouchSensor1180.description = "joint r_carpal_proximal_phalanx_5 segment SEGMENT_FOR_r_carpal_proximal_phalanx_5";
HAnimSegment1179.children = new MFNode();

HAnimSegment1179.children[0] = TouchSensor1180;

let Transform1181 = browser.currentScene.createNode("Transform");
Transform1181.translation = new SFVec3f(new float[-0.1832,-0.1389,0.6295]);
let Shape1182 = browser.currentScene.createNode("Shape");
Shape1182.USE = "JointShape";
Transform1181.child = new undefined();

Transform1181.child[0] = Shape1182;

HAnimSegment1179.children[1] = Transform1181;

let HAnimSite1183 = browser.currentScene.createNode("HAnimSite");
HAnimSite1183.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_5_tip";
HAnimSite1183.DEF = "hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_5_tip";
let Transform1184 = browser.currentScene.createNode("Transform");
Transform1184.translation = new SFVec3f(new float[-0.1832,-0.1389,0.6295]);
let Shape1185 = browser.currentScene.createNode("Shape");
Shape1185.USE = "SiteShape";
Transform1184.child = new undefined();

Transform1184.child[0] = Shape1185;

HAnimSite1183.children = new MFNode();

HAnimSite1183.children[0] = Transform1184;

HAnimSegment1179.children[2] = HAnimSite1183;

HAnimJoint1178.children = new MFNode();

HAnimJoint1178.children[0] = HAnimSegment1179;

let HAnimJoint1186 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1186.name = "r_carpal_middle_phalanx_5";
HAnimJoint1186.DEF = "hanim_r_carpal_middle_phalanx_5";
HAnimJoint1186.center = new SFVec3f(new float[-0.1815,-0.139,0.6124]);
HAnimJoint1186.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1186.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1187 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1187.name = "SEGMENT_FOR_r_carpal_middle_phalanx_5";
HAnimSegment1187.DEF = "hanim_SEGMENT_FOR_r_carpal_middle_phalanx_5";
let TouchSensor1188 = browser.currentScene.createNode("TouchSensor");
TouchSensor1188.description = "joint r_carpal_middle_phalanx_5 segment SEGMENT_FOR_r_carpal_middle_phalanx_5";
HAnimSegment1187.children = new MFNode();

HAnimSegment1187.children[0] = TouchSensor1188;

let Transform1189 = browser.currentScene.createNode("Transform");
Transform1189.translation = new SFVec3f(new float[-0.1815,-0.139,0.6124]);
let Shape1190 = browser.currentScene.createNode("Shape");
Shape1190.USE = "JointShape";
Transform1189.child = new undefined();

Transform1189.child[0] = Shape1190;

HAnimSegment1187.children[1] = Transform1189;

let HAnimSite1191 = browser.currentScene.createNode("HAnimSite");
HAnimSite1191.name = "SEGMENT_FOR_r_carpal_middle_phalanx_5_tip";
HAnimSite1191.DEF = "hanim_SEGMENT_FOR_r_carpal_middle_phalanx_5_tip";
let Transform1192 = browser.currentScene.createNode("Transform");
Transform1192.translation = new SFVec3f(new float[-0.1815,-0.139,0.6124]);
let Shape1193 = browser.currentScene.createNode("Shape");
Shape1193.USE = "SiteShape";
Transform1192.child = new undefined();

Transform1192.child[0] = Shape1193;

HAnimSite1191.children = new MFNode();

HAnimSite1191.children[0] = Transform1192;

HAnimSegment1187.children[2] = HAnimSite1191;

HAnimJoint1186.children = new MFNode();

HAnimJoint1186.children[0] = HAnimSegment1187;

let HAnimJoint1194 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1194.name = "r_carpal_distal_phalanx_5";
HAnimJoint1194.DEF = "hanim_r_carpal_distal_phalanx_5";
HAnimJoint1194.center = new SFVec3f(new float[-0.1806,-0.1388,0.5938]);
HAnimJoint1194.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1194.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1195 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1195.name = "SEGMENT_FOR_r_carpal_distal_phalanx_5";
HAnimSegment1195.DEF = "hanim_SEGMENT_FOR_r_carpal_distal_phalanx_5";
let TouchSensor1196 = browser.currentScene.createNode("TouchSensor");
TouchSensor1196.description = "joint r_carpal_distal_phalanx_5 segment SEGMENT_FOR_r_carpal_distal_phalanx_5";
HAnimSegment1195.children = new MFNode();

HAnimSegment1195.children[0] = TouchSensor1196;

let Transform1197 = browser.currentScene.createNode("Transform");
Transform1197.translation = new SFVec3f(new float[-0.1806,-0.1388,0.5938]);
let Shape1198 = browser.currentScene.createNode("Shape");
Shape1198.USE = "JointShape";
Transform1197.child = new undefined();

Transform1197.child[0] = Shape1198;

HAnimSegment1195.children[1] = Transform1197;

let HAnimSite1199 = browser.currentScene.createNode("HAnimSite");
HAnimSite1199.name = "SEGMENT_FOR_r_carpal_distal_phalanx_5_tip";
HAnimSite1199.DEF = "hanim_SEGMENT_FOR_r_carpal_distal_phalanx_5_tip";
let Transform1200 = browser.currentScene.createNode("Transform");
Transform1200.translation = new SFVec3f(new float[-0.1806,-0.1388,0.5938]);
let Shape1201 = browser.currentScene.createNode("Shape");
Shape1201.USE = "SiteShape";
Transform1200.child = new undefined();

Transform1200.child[0] = Shape1201;

HAnimSite1199.children = new MFNode();

HAnimSite1199.children[0] = Transform1200;

HAnimSegment1195.children[2] = HAnimSite1199;

HAnimJoint1194.children = new MFNode();

HAnimJoint1194.children[0] = HAnimSegment1195;

HAnimJoint1186.children[1] = HAnimJoint1194;

HAnimJoint1178.children[1] = HAnimJoint1186;

HAnimJoint1170.children[1] = HAnimJoint1178;

HAnimJoint1130.children[2] = HAnimJoint1170;

HAnimJoint1010.children[4] = HAnimJoint1130;

HAnimJoint1002.children[1] = HAnimJoint1010;

HAnimJoint994.children[1] = HAnimJoint1002;

HAnimJoint986.children[1] = HAnimJoint994;

HAnimJoint978.children[1] = HAnimJoint986;

HAnimJoint626.children[3] = HAnimJoint978;

HAnimJoint618.children[1] = HAnimJoint626;

HAnimJoint610.children[1] = HAnimJoint618;

HAnimJoint602.children[1] = HAnimJoint610;

HAnimJoint594.children[1] = HAnimJoint602;

HAnimJoint586.children[1] = HAnimJoint594;

HAnimJoint578.children[1] = HAnimJoint586;

HAnimJoint570.children[1] = HAnimJoint578;

HAnimJoint562.children[1] = HAnimJoint570;

HAnimJoint554.children[1] = HAnimJoint562;

HAnimJoint546.children[1] = HAnimJoint554;

HAnimJoint538.children[1] = HAnimJoint546;

HAnimJoint530.children[1] = HAnimJoint538;

HAnimJoint522.children[1] = HAnimJoint530;

HAnimJoint514.children[1] = HAnimJoint522;

HAnimJoint506.children[1] = HAnimJoint514;

HAnimJoint498.children[1] = HAnimJoint506;

HAnimJoint34.children[2] = HAnimJoint498;

HAnimJoint26.children[1] = HAnimJoint34;

HAnimHumanoid25.joints = new MFNode();

HAnimHumanoid25.joints[0] = HAnimJoint26;

let HAnimJoint1202 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1202.USE = "hanim_sacrum";
HAnimHumanoid25.joints[1] = HAnimJoint1202;

let HAnimJoint1203 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1203.USE = "hanim_pelvis";
HAnimHumanoid25.joints[2] = HAnimJoint1203;

let HAnimJoint1204 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1204.USE = "hanim_l_thigh";
HAnimHumanoid25.joints[3] = HAnimJoint1204;

let HAnimJoint1205 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1205.USE = "hanim_l_calf";
HAnimHumanoid25.joints[4] = HAnimJoint1205;

let HAnimJoint1206 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1206.USE = "hanim_l_talus";
HAnimHumanoid25.joints[5] = HAnimJoint1206;

let HAnimJoint1207 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1207.USE = "hanim_l_navicular";
HAnimHumanoid25.joints[6] = HAnimJoint1207;

let HAnimJoint1208 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1208.USE = "hanim_l_cuneiform_1";
HAnimHumanoid25.joints[7] = HAnimJoint1208;

let HAnimJoint1209 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1209.USE = "hanim_l_metatarsal_1";
HAnimHumanoid25.joints[8] = HAnimJoint1209;

let HAnimJoint1210 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1210.USE = "hanim_l_tarsal_proximal_phalanx_1";
HAnimHumanoid25.joints[9] = HAnimJoint1210;

let HAnimJoint1211 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1211.USE = "hanim_l_tarsal_distal_phalanx_1";
HAnimHumanoid25.joints[10] = HAnimJoint1211;

let HAnimJoint1212 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1212.USE = "hanim_l_cuneiform_2";
HAnimHumanoid25.joints[11] = HAnimJoint1212;

let HAnimJoint1213 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1213.USE = "hanim_l_metatarsal_2";
HAnimHumanoid25.joints[12] = HAnimJoint1213;

let HAnimJoint1214 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1214.USE = "hanim_l_tarsal_proximal_phalanx_2";
HAnimHumanoid25.joints[13] = HAnimJoint1214;

let HAnimJoint1215 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1215.USE = "hanim_l_tarsal_middle_phalanx_2";
HAnimHumanoid25.joints[14] = HAnimJoint1215;

let HAnimJoint1216 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1216.USE = "hanim_l_tarsal_distal_phalanx_2";
HAnimHumanoid25.joints[15] = HAnimJoint1216;

let HAnimJoint1217 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1217.USE = "hanim_l_cuneiform_3";
HAnimHumanoid25.joints[16] = HAnimJoint1217;

let HAnimJoint1218 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1218.USE = "hanim_l_metatarsal_3";
HAnimHumanoid25.joints[17] = HAnimJoint1218;

let HAnimJoint1219 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1219.USE = "hanim_l_tarsal_proximal_phalanx_3";
HAnimHumanoid25.joints[18] = HAnimJoint1219;

let HAnimJoint1220 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1220.USE = "hanim_l_tarsal_middle_phalanx_3";
HAnimHumanoid25.joints[19] = HAnimJoint1220;

let HAnimJoint1221 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1221.USE = "hanim_l_tarsal_distal_phalanx_3";
HAnimHumanoid25.joints[20] = HAnimJoint1221;

let HAnimJoint1222 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1222.USE = "hanim_l_calcaneus";
HAnimHumanoid25.joints[21] = HAnimJoint1222;

let HAnimJoint1223 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1223.USE = "hanim_l_cuboid";
HAnimHumanoid25.joints[22] = HAnimJoint1223;

let HAnimJoint1224 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1224.USE = "hanim_l_metatarsal_4";
HAnimHumanoid25.joints[23] = HAnimJoint1224;

let HAnimJoint1225 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1225.USE = "hanim_l_tarsal_proximal_phalanx_4";
HAnimHumanoid25.joints[24] = HAnimJoint1225;

let HAnimJoint1226 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1226.USE = "hanim_l_tarsal_middle_phalanx_4";
HAnimHumanoid25.joints[25] = HAnimJoint1226;

let HAnimJoint1227 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1227.USE = "hanim_l_tarsal_distal_phalanx_4";
HAnimHumanoid25.joints[26] = HAnimJoint1227;

let HAnimJoint1228 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1228.USE = "hanim_l_metatarsal_5";
HAnimHumanoid25.joints[27] = HAnimJoint1228;

let HAnimJoint1229 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1229.USE = "hanim_l_tarsal_proximal_phalanx_5";
HAnimHumanoid25.joints[28] = HAnimJoint1229;

let HAnimJoint1230 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1230.USE = "hanim_l_tarsal_middle_phalanx_5";
HAnimHumanoid25.joints[29] = HAnimJoint1230;

let HAnimJoint1231 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1231.USE = "hanim_l_tarsal_distal_phalanx_5";
HAnimHumanoid25.joints[30] = HAnimJoint1231;

let HAnimJoint1232 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1232.USE = "hanim_r_thigh";
HAnimHumanoid25.joints[31] = HAnimJoint1232;

let HAnimJoint1233 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1233.USE = "hanim_r_calf";
HAnimHumanoid25.joints[32] = HAnimJoint1233;

let HAnimJoint1234 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1234.USE = "hanim_r_talus";
HAnimHumanoid25.joints[33] = HAnimJoint1234;

let HAnimJoint1235 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1235.USE = "hanim_r_navicular";
HAnimHumanoid25.joints[34] = HAnimJoint1235;

let HAnimJoint1236 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1236.USE = "hanim_r_cuneiform_1";
HAnimHumanoid25.joints[35] = HAnimJoint1236;

let HAnimJoint1237 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1237.USE = "hanim_r_metatarsal_1";
HAnimHumanoid25.joints[36] = HAnimJoint1237;

let HAnimJoint1238 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1238.USE = "hanim_r_tarsal_proximal_phalanx_1";
HAnimHumanoid25.joints[37] = HAnimJoint1238;

let HAnimJoint1239 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1239.USE = "hanim_r_tarsal_distal_phalanx_1";
HAnimHumanoid25.joints[38] = HAnimJoint1239;

let HAnimJoint1240 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1240.USE = "hanim_r_cuneiform_2";
HAnimHumanoid25.joints[39] = HAnimJoint1240;

let HAnimJoint1241 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1241.USE = "hanim_r_metatarsal_2";
HAnimHumanoid25.joints[40] = HAnimJoint1241;

let HAnimJoint1242 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1242.USE = "hanim_r_tarsal_proximal_phalanx_2";
HAnimHumanoid25.joints[41] = HAnimJoint1242;

let HAnimJoint1243 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1243.USE = "hanim_r_tarsal_middle_phalanx_2";
HAnimHumanoid25.joints[42] = HAnimJoint1243;

let HAnimJoint1244 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1244.USE = "hanim_r_tarsal_distal_phalanx_2";
HAnimHumanoid25.joints[43] = HAnimJoint1244;

let HAnimJoint1245 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1245.USE = "hanim_r_cuneiform_3";
HAnimHumanoid25.joints[44] = HAnimJoint1245;

let HAnimJoint1246 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1246.USE = "hanim_r_metatarsal_3";
HAnimHumanoid25.joints[45] = HAnimJoint1246;

let HAnimJoint1247 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1247.USE = "hanim_r_tarsal_proximal_phalanx_3";
HAnimHumanoid25.joints[46] = HAnimJoint1247;

let HAnimJoint1248 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1248.USE = "hanim_r_tarsal_middle_phalanx_3";
HAnimHumanoid25.joints[47] = HAnimJoint1248;

let HAnimJoint1249 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1249.USE = "hanim_r_tarsal_distal_phalanx_3";
HAnimHumanoid25.joints[48] = HAnimJoint1249;

let HAnimJoint1250 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1250.USE = "hanim_r_calcaneus";
HAnimHumanoid25.joints[49] = HAnimJoint1250;

let HAnimJoint1251 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1251.USE = "hanim_r_cuboid";
HAnimHumanoid25.joints[50] = HAnimJoint1251;

let HAnimJoint1252 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1252.USE = "hanim_r_metatarsal_4";
HAnimHumanoid25.joints[51] = HAnimJoint1252;

let HAnimJoint1253 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1253.USE = "hanim_r_tarsal_proximal_phalanx_4";
HAnimHumanoid25.joints[52] = HAnimJoint1253;

let HAnimJoint1254 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1254.USE = "hanim_r_tarsal_middle_phalanx_4";
HAnimHumanoid25.joints[53] = HAnimJoint1254;

let HAnimJoint1255 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1255.USE = "hanim_r_tarsal_distal_phalanx_4";
HAnimHumanoid25.joints[54] = HAnimJoint1255;

let HAnimJoint1256 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1256.USE = "hanim_r_metatarsal_5";
HAnimHumanoid25.joints[55] = HAnimJoint1256;

let HAnimJoint1257 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1257.USE = "hanim_r_tarsal_proximal_phalanx_5";
HAnimHumanoid25.joints[56] = HAnimJoint1257;

let HAnimJoint1258 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1258.USE = "hanim_r_tarsal_middle_phalanx_5";
HAnimHumanoid25.joints[57] = HAnimJoint1258;

let HAnimJoint1259 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1259.USE = "hanim_r_tarsal_distal_phalanx_5";
HAnimHumanoid25.joints[58] = HAnimJoint1259;

let HAnimJoint1260 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1260.USE = "hanim_l5";
HAnimHumanoid25.joints[59] = HAnimJoint1260;

let HAnimJoint1261 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1261.USE = "hanim_l4";
HAnimHumanoid25.joints[60] = HAnimJoint1261;

let HAnimJoint1262 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1262.USE = "hanim_l3";
HAnimHumanoid25.joints[61] = HAnimJoint1262;

let HAnimJoint1263 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1263.USE = "hanim_l2";
HAnimHumanoid25.joints[62] = HAnimJoint1263;

let HAnimJoint1264 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1264.USE = "hanim_l1";
HAnimHumanoid25.joints[63] = HAnimJoint1264;

let HAnimJoint1265 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1265.USE = "hanim_t12";
HAnimHumanoid25.joints[64] = HAnimJoint1265;

let HAnimJoint1266 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1266.USE = "hanim_t11";
HAnimHumanoid25.joints[65] = HAnimJoint1266;

let HAnimJoint1267 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1267.USE = "hanim_t10";
HAnimHumanoid25.joints[66] = HAnimJoint1267;

let HAnimJoint1268 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1268.USE = "hanim_t9";
HAnimHumanoid25.joints[67] = HAnimJoint1268;

let HAnimJoint1269 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1269.USE = "hanim_t8";
HAnimHumanoid25.joints[68] = HAnimJoint1269;

let HAnimJoint1270 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1270.USE = "hanim_t7";
HAnimHumanoid25.joints[69] = HAnimJoint1270;

let HAnimJoint1271 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1271.USE = "hanim_t6";
HAnimHumanoid25.joints[70] = HAnimJoint1271;

let HAnimJoint1272 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1272.USE = "hanim_t5";
HAnimHumanoid25.joints[71] = HAnimJoint1272;

let HAnimJoint1273 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1273.USE = "hanim_t4";
HAnimHumanoid25.joints[72] = HAnimJoint1273;

let HAnimJoint1274 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1274.USE = "hanim_t3";
HAnimHumanoid25.joints[73] = HAnimJoint1274;

let HAnimJoint1275 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1275.USE = "hanim_t2";
HAnimHumanoid25.joints[74] = HAnimJoint1275;

let HAnimJoint1276 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1276.USE = "hanim_t1";
HAnimHumanoid25.joints[75] = HAnimJoint1276;

let HAnimJoint1277 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1277.USE = "hanim_c7";
HAnimHumanoid25.joints[76] = HAnimJoint1277;

let HAnimJoint1278 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1278.USE = "hanim_c6";
HAnimHumanoid25.joints[77] = HAnimJoint1278;

let HAnimJoint1279 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1279.USE = "hanim_c5";
HAnimHumanoid25.joints[78] = HAnimJoint1279;

let HAnimJoint1280 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1280.USE = "hanim_c4";
HAnimHumanoid25.joints[79] = HAnimJoint1280;

let HAnimJoint1281 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1281.USE = "hanim_c3";
HAnimHumanoid25.joints[80] = HAnimJoint1281;

let HAnimJoint1282 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1282.USE = "hanim_c2";
HAnimHumanoid25.joints[81] = HAnimJoint1282;

let HAnimJoint1283 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1283.USE = "hanim_c1";
HAnimHumanoid25.joints[82] = HAnimJoint1283;

let HAnimJoint1284 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1284.USE = "hanim_skull";
HAnimHumanoid25.joints[83] = HAnimJoint1284;

let HAnimJoint1285 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1285.USE = "hanim_l_eyelid";
HAnimHumanoid25.joints[84] = HAnimJoint1285;

let HAnimJoint1286 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1286.USE = "hanim_r_eyelid";
HAnimHumanoid25.joints[85] = HAnimJoint1286;

let HAnimJoint1287 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1287.USE = "hanim_l_eyeball";
HAnimHumanoid25.joints[86] = HAnimJoint1287;

let HAnimJoint1288 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1288.USE = "hanim_r_eyeball";
HAnimHumanoid25.joints[87] = HAnimJoint1288;

let HAnimJoint1289 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1289.USE = "hanim_l_eyebrow";
HAnimHumanoid25.joints[88] = HAnimJoint1289;

let HAnimJoint1290 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1290.USE = "hanim_r_eyebrow";
HAnimHumanoid25.joints[89] = HAnimJoint1290;

let HAnimJoint1291 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1291.USE = "hanim_jaw";
HAnimHumanoid25.joints[90] = HAnimJoint1291;

let HAnimJoint1292 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1292.USE = "hanim_l_clavicle";
HAnimHumanoid25.joints[91] = HAnimJoint1292;

let HAnimJoint1293 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1293.USE = "hanim_l_scapula";
HAnimHumanoid25.joints[92] = HAnimJoint1293;

let HAnimJoint1294 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1294.USE = "hanim_l_upperarm";
HAnimHumanoid25.joints[93] = HAnimJoint1294;

let HAnimJoint1295 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1295.USE = "hanim_l_forearm";
HAnimHumanoid25.joints[94] = HAnimJoint1295;

let HAnimJoint1296 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1296.USE = "hanim_l_carpal";
HAnimHumanoid25.joints[95] = HAnimJoint1296;

let HAnimJoint1297 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1297.USE = "hanim_l_trapezium";
HAnimHumanoid25.joints[96] = HAnimJoint1297;

let HAnimJoint1298 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1298.USE = "hanim_l_metacarpal_1";
HAnimHumanoid25.joints[97] = HAnimJoint1298;

let HAnimJoint1299 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1299.USE = "hanim_l_carpal_proximal_phalanx_1";
HAnimHumanoid25.joints[98] = HAnimJoint1299;

let HAnimJoint1300 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1300.USE = "hanim_l_carpal_distal_phalanx_1";
HAnimHumanoid25.joints[99] = HAnimJoint1300;

let HAnimJoint1301 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1301.USE = "hanim_l_trapezoid";
HAnimHumanoid25.joints[100] = HAnimJoint1301;

let HAnimJoint1302 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1302.USE = "hanim_l_metacarpal_2";
HAnimHumanoid25.joints[101] = HAnimJoint1302;

let HAnimJoint1303 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1303.USE = "hanim_l_carpal_proximal_phalanx_2";
HAnimHumanoid25.joints[102] = HAnimJoint1303;

let HAnimJoint1304 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1304.USE = "hanim_l_carpal_middle_phalanx_2";
HAnimHumanoid25.joints[103] = HAnimJoint1304;

let HAnimJoint1305 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1305.USE = "hanim_l_carpal_distal_phalanx_2";
HAnimHumanoid25.joints[104] = HAnimJoint1305;

let HAnimJoint1306 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1306.USE = "hanim_l_capitate";
HAnimHumanoid25.joints[105] = HAnimJoint1306;

let HAnimJoint1307 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1307.USE = "hanim_l_metacarpal_3";
HAnimHumanoid25.joints[106] = HAnimJoint1307;

let HAnimJoint1308 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1308.USE = "hanim_l_carpal_proximal_phalanx_3";
HAnimHumanoid25.joints[107] = HAnimJoint1308;

let HAnimJoint1309 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1309.USE = "hanim_l_carpal_middle_phalanx_3";
HAnimHumanoid25.joints[108] = HAnimJoint1309;

let HAnimJoint1310 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1310.USE = "hanim_l_carpal_distal_phalanx_3";
HAnimHumanoid25.joints[109] = HAnimJoint1310;

let HAnimJoint1311 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1311.USE = "hanim_l_hamate";
HAnimHumanoid25.joints[110] = HAnimJoint1311;

let HAnimJoint1312 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1312.USE = "hanim_l_metacarpal_4";
HAnimHumanoid25.joints[111] = HAnimJoint1312;

let HAnimJoint1313 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1313.USE = "hanim_l_carpal_proximal_phalanx_4";
HAnimHumanoid25.joints[112] = HAnimJoint1313;

let HAnimJoint1314 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1314.USE = "hanim_l_carpal_middle_phalanx_4";
HAnimHumanoid25.joints[113] = HAnimJoint1314;

let HAnimJoint1315 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1315.USE = "hanim_l_carpal_distal_phalanx_4";
HAnimHumanoid25.joints[114] = HAnimJoint1315;

let HAnimJoint1316 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1316.USE = "hanim_l_metacarpal_5";
HAnimHumanoid25.joints[115] = HAnimJoint1316;

let HAnimJoint1317 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1317.USE = "hanim_l_carpal_proximal_phalanx_5";
HAnimHumanoid25.joints[116] = HAnimJoint1317;

let HAnimJoint1318 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1318.USE = "hanim_l_carpal_middle_phalanx_5";
HAnimHumanoid25.joints[117] = HAnimJoint1318;

let HAnimJoint1319 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1319.USE = "hanim_l_carpal_distal_phalanx_5";
HAnimHumanoid25.joints[118] = HAnimJoint1319;

let HAnimJoint1320 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1320.USE = "hanim_r_clavicle";
HAnimHumanoid25.joints[119] = HAnimJoint1320;

let HAnimJoint1321 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1321.USE = "hanim_r_scapula";
HAnimHumanoid25.joints[120] = HAnimJoint1321;

let HAnimJoint1322 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1322.USE = "hanim_r_upperarm";
HAnimHumanoid25.joints[121] = HAnimJoint1322;

let HAnimJoint1323 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1323.USE = "hanim_r_forearm";
HAnimHumanoid25.joints[122] = HAnimJoint1323;

let HAnimJoint1324 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1324.USE = "hanim_r_carpal";
HAnimHumanoid25.joints[123] = HAnimJoint1324;

let HAnimJoint1325 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1325.USE = "hanim_r_trapezium";
HAnimHumanoid25.joints[124] = HAnimJoint1325;

let HAnimJoint1326 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1326.USE = "hanim_r_metacarpal_1";
HAnimHumanoid25.joints[125] = HAnimJoint1326;

let HAnimJoint1327 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1327.USE = "hanim_r_carpal_proximal_phalanx_1";
HAnimHumanoid25.joints[126] = HAnimJoint1327;

let HAnimJoint1328 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1328.USE = "hanim_r_carpal_distal_phalanx_1";
HAnimHumanoid25.joints[127] = HAnimJoint1328;

let HAnimJoint1329 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1329.USE = "hanim_r_trapezoid";
HAnimHumanoid25.joints[128] = HAnimJoint1329;

let HAnimJoint1330 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1330.USE = "hanim_r_metacarpal_2";
HAnimHumanoid25.joints[129] = HAnimJoint1330;

let HAnimJoint1331 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1331.USE = "hanim_r_carpal_proximal_phalanx_2";
HAnimHumanoid25.joints[130] = HAnimJoint1331;

let HAnimJoint1332 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1332.USE = "hanim_r_carpal_middle_phalanx_2";
HAnimHumanoid25.joints[131] = HAnimJoint1332;

let HAnimJoint1333 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1333.USE = "hanim_r_carpal_distal_phalanx_2";
HAnimHumanoid25.joints[132] = HAnimJoint1333;

let HAnimJoint1334 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1334.USE = "hanim_r_capitate";
HAnimHumanoid25.joints[133] = HAnimJoint1334;

let HAnimJoint1335 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1335.USE = "hanim_r_metacarpal_3";
HAnimHumanoid25.joints[134] = HAnimJoint1335;

let HAnimJoint1336 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1336.USE = "hanim_r_carpal_proximal_phalanx_3";
HAnimHumanoid25.joints[135] = HAnimJoint1336;

let HAnimJoint1337 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1337.USE = "hanim_r_carpal_middle_phalanx_3";
HAnimHumanoid25.joints[136] = HAnimJoint1337;

let HAnimJoint1338 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1338.USE = "hanim_r_carpal_distal_phalanx_3";
HAnimHumanoid25.joints[137] = HAnimJoint1338;

let HAnimJoint1339 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1339.USE = "hanim_r_hamate";
HAnimHumanoid25.joints[138] = HAnimJoint1339;

let HAnimJoint1340 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1340.USE = "hanim_r_metacarpal_4";
HAnimHumanoid25.joints[139] = HAnimJoint1340;

let HAnimJoint1341 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1341.USE = "hanim_r_carpal_proximal_phalanx_4";
HAnimHumanoid25.joints[140] = HAnimJoint1341;

let HAnimJoint1342 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1342.USE = "hanim_r_carpal_middle_phalanx_4";
HAnimHumanoid25.joints[141] = HAnimJoint1342;

let HAnimJoint1343 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1343.USE = "hanim_r_carpal_distal_phalanx_4";
HAnimHumanoid25.joints[142] = HAnimJoint1343;

let HAnimJoint1344 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1344.USE = "hanim_r_metacarpal_5";
HAnimHumanoid25.joints[143] = HAnimJoint1344;

let HAnimJoint1345 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1345.USE = "hanim_r_carpal_proximal_phalanx_5";
HAnimHumanoid25.joints[144] = HAnimJoint1345;

let HAnimJoint1346 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1346.USE = "hanim_r_carpal_middle_phalanx_5";
HAnimHumanoid25.joints[145] = HAnimJoint1346;

let HAnimJoint1347 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1347.USE = "hanim_r_carpal_distal_phalanx_5";
HAnimHumanoid25.joints[146] = HAnimJoint1347;

Transform24.children = new MFNode();

Transform24.children[0] = HAnimHumanoid25;

browser.currentScene.children[6] = Transform24;

let TimeSensor1348 = browser.currentScene.createNode("TimeSensor");
TimeSensor1348.DEF = "Armature_Clock";
TimeSensor1348.cycleInterval = 10.416666666666666;
TimeSensor1348.loop = True;
browser.currentScene.children[7] = TimeSensor1348;

let ProximitySensor1349 = browser.currentScene.createNode("ProximitySensor");
ProximitySensor1349.DEF = "Armature_Close";
ProximitySensor1349.size = new SFVec3f(new float[1000000,1000000,1000000]);
browser.currentScene.children[8] = ProximitySensor1349;

let ROUTE1350 = browser.currentScene.createNode("ROUTE");
ROUTE1350.fromField = "enterTime";
ROUTE1350.fromNode = "Armature_Close";
ROUTE1350.toField = "startTime";
ROUTE1350.toNode = "Armature_Clock";
browser.currentScene.children[9] = ROUTE1350;

let OrientationInterpolator1351 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1351.DEF = "Armature_OI_sacrum";
OrientationInterpolator1351.key = new MFFloat(new float[0,1]);
OrientationInterpolator1351.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[10] = OrientationInterpolator1351;

let OrientationInterpolator1352 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1352.DEF = "Armature_OI_pelvis";
OrientationInterpolator1352.key = new MFFloat(new float[0,1]);
OrientationInterpolator1352.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[11] = OrientationInterpolator1352;

let OrientationInterpolator1353 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1353.DEF = "Armature_OI_l_thigh";
OrientationInterpolator1353.key = new MFFloat(new float[0,1]);
OrientationInterpolator1353.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[12] = OrientationInterpolator1353;

let OrientationInterpolator1354 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1354.DEF = "Armature_OI_l_calf";
OrientationInterpolator1354.key = new MFFloat(new float[0,1]);
OrientationInterpolator1354.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[13] = OrientationInterpolator1354;

let OrientationInterpolator1355 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1355.DEF = "Armature_OI_l_talus";
OrientationInterpolator1355.key = new MFFloat(new float[0,1]);
OrientationInterpolator1355.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[14] = OrientationInterpolator1355;

let OrientationInterpolator1356 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1356.DEF = "Armature_OI_l_navicular";
OrientationInterpolator1356.key = new MFFloat(new float[0,1]);
OrientationInterpolator1356.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[15] = OrientationInterpolator1356;

let OrientationInterpolator1357 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1357.DEF = "Armature_OI_l_cuneiform_1";
OrientationInterpolator1357.key = new MFFloat(new float[0,1]);
OrientationInterpolator1357.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[16] = OrientationInterpolator1357;

let OrientationInterpolator1358 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1358.DEF = "Armature_OI_l_metatarsal_1";
OrientationInterpolator1358.key = new MFFloat(new float[0,1]);
OrientationInterpolator1358.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[17] = OrientationInterpolator1358;

let OrientationInterpolator1359 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1359.DEF = "Armature_OI_l_tarsal_proximal_phalanx_1";
OrientationInterpolator1359.key = new MFFloat(new float[0,1]);
OrientationInterpolator1359.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[18] = OrientationInterpolator1359;

let OrientationInterpolator1360 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1360.DEF = "Armature_OI_l_tarsal_distal_phalanx_1";
OrientationInterpolator1360.key = new MFFloat(new float[0,1]);
OrientationInterpolator1360.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[19] = OrientationInterpolator1360;

let OrientationInterpolator1361 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1361.DEF = "Armature_OI_l_cuneiform_2";
OrientationInterpolator1361.key = new MFFloat(new float[0,1]);
OrientationInterpolator1361.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[20] = OrientationInterpolator1361;

let OrientationInterpolator1362 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1362.DEF = "Armature_OI_l_metatarsal_2";
OrientationInterpolator1362.key = new MFFloat(new float[0,1]);
OrientationInterpolator1362.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[21] = OrientationInterpolator1362;

let OrientationInterpolator1363 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1363.DEF = "Armature_OI_l_tarsal_proximal_phalanx_2";
OrientationInterpolator1363.key = new MFFloat(new float[0,1]);
OrientationInterpolator1363.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[22] = OrientationInterpolator1363;

let OrientationInterpolator1364 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1364.DEF = "Armature_OI_l_tarsal_middle_phalanx_2";
OrientationInterpolator1364.key = new MFFloat(new float[0,1]);
OrientationInterpolator1364.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[23] = OrientationInterpolator1364;

let OrientationInterpolator1365 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1365.DEF = "Armature_OI_l_tarsal_distal_phalanx_2";
OrientationInterpolator1365.key = new MFFloat(new float[0,1]);
OrientationInterpolator1365.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[24] = OrientationInterpolator1365;

let OrientationInterpolator1366 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1366.DEF = "Armature_OI_l_cuneiform_3";
OrientationInterpolator1366.key = new MFFloat(new float[0,1]);
OrientationInterpolator1366.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[25] = OrientationInterpolator1366;

let OrientationInterpolator1367 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1367.DEF = "Armature_OI_l_metatarsal_3";
OrientationInterpolator1367.key = new MFFloat(new float[0,1]);
OrientationInterpolator1367.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[26] = OrientationInterpolator1367;

let OrientationInterpolator1368 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1368.DEF = "Armature_OI_l_tarsal_proximal_phalanx_3";
OrientationInterpolator1368.key = new MFFloat(new float[0,1]);
OrientationInterpolator1368.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[27] = OrientationInterpolator1368;

let OrientationInterpolator1369 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1369.DEF = "Armature_OI_l_tarsal_middle_phalanx_3";
OrientationInterpolator1369.key = new MFFloat(new float[0,1]);
OrientationInterpolator1369.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[28] = OrientationInterpolator1369;

let OrientationInterpolator1370 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1370.DEF = "Armature_OI_l_tarsal_distal_phalanx_3";
OrientationInterpolator1370.key = new MFFloat(new float[0,1]);
OrientationInterpolator1370.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[29] = OrientationInterpolator1370;

let OrientationInterpolator1371 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1371.DEF = "Armature_OI_l_calcaneus";
OrientationInterpolator1371.key = new MFFloat(new float[0,1]);
OrientationInterpolator1371.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[30] = OrientationInterpolator1371;

let OrientationInterpolator1372 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1372.DEF = "Armature_OI_l_cuboid";
OrientationInterpolator1372.key = new MFFloat(new float[0,1]);
OrientationInterpolator1372.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[31] = OrientationInterpolator1372;

let OrientationInterpolator1373 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1373.DEF = "Armature_OI_l_metatarsal_4";
OrientationInterpolator1373.key = new MFFloat(new float[0,1]);
OrientationInterpolator1373.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[32] = OrientationInterpolator1373;

let OrientationInterpolator1374 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1374.DEF = "Armature_OI_l_tarsal_proximal_phalanx_4";
OrientationInterpolator1374.key = new MFFloat(new float[0,1]);
OrientationInterpolator1374.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[33] = OrientationInterpolator1374;

let OrientationInterpolator1375 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1375.DEF = "Armature_OI_l_tarsal_middle_phalanx_4";
OrientationInterpolator1375.key = new MFFloat(new float[0,1]);
OrientationInterpolator1375.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[34] = OrientationInterpolator1375;

let OrientationInterpolator1376 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1376.DEF = "Armature_OI_l_tarsal_distal_phalanx_4";
OrientationInterpolator1376.key = new MFFloat(new float[0,1]);
OrientationInterpolator1376.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[35] = OrientationInterpolator1376;

let OrientationInterpolator1377 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1377.DEF = "Armature_OI_l_metatarsal_5";
OrientationInterpolator1377.key = new MFFloat(new float[0,1]);
OrientationInterpolator1377.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[36] = OrientationInterpolator1377;

let OrientationInterpolator1378 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1378.DEF = "Armature_OI_l_tarsal_proximal_phalanx_5";
OrientationInterpolator1378.key = new MFFloat(new float[0,1]);
OrientationInterpolator1378.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[37] = OrientationInterpolator1378;

let OrientationInterpolator1379 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1379.DEF = "Armature_OI_l_tarsal_middle_phalanx_5";
OrientationInterpolator1379.key = new MFFloat(new float[0,1]);
OrientationInterpolator1379.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[38] = OrientationInterpolator1379;

let OrientationInterpolator1380 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1380.DEF = "Armature_OI_l_tarsal_distal_phalanx_5";
OrientationInterpolator1380.key = new MFFloat(new float[0,1]);
OrientationInterpolator1380.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[39] = OrientationInterpolator1380;

let OrientationInterpolator1381 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1381.DEF = "Armature_OI_r_thigh";
OrientationInterpolator1381.key = new MFFloat(new float[0,1]);
OrientationInterpolator1381.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[40] = OrientationInterpolator1381;

let OrientationInterpolator1382 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1382.DEF = "Armature_OI_r_calf";
OrientationInterpolator1382.key = new MFFloat(new float[0,1]);
OrientationInterpolator1382.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[41] = OrientationInterpolator1382;

let OrientationInterpolator1383 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1383.DEF = "Armature_OI_r_talus";
OrientationInterpolator1383.key = new MFFloat(new float[0,1]);
OrientationInterpolator1383.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[42] = OrientationInterpolator1383;

let OrientationInterpolator1384 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1384.DEF = "Armature_OI_r_navicular";
OrientationInterpolator1384.key = new MFFloat(new float[0,1]);
OrientationInterpolator1384.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[43] = OrientationInterpolator1384;

let OrientationInterpolator1385 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1385.DEF = "Armature_OI_r_cuneiform_1";
OrientationInterpolator1385.key = new MFFloat(new float[0,1]);
OrientationInterpolator1385.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[44] = OrientationInterpolator1385;

let OrientationInterpolator1386 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1386.DEF = "Armature_OI_r_metatarsal_1";
OrientationInterpolator1386.key = new MFFloat(new float[0,1]);
OrientationInterpolator1386.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[45] = OrientationInterpolator1386;

let OrientationInterpolator1387 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1387.DEF = "Armature_OI_r_tarsal_proximal_phalanx_1";
OrientationInterpolator1387.key = new MFFloat(new float[0,1]);
OrientationInterpolator1387.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[46] = OrientationInterpolator1387;

let OrientationInterpolator1388 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1388.DEF = "Armature_OI_r_tarsal_distal_phalanx_1";
OrientationInterpolator1388.key = new MFFloat(new float[0,1]);
OrientationInterpolator1388.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[47] = OrientationInterpolator1388;

let OrientationInterpolator1389 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1389.DEF = "Armature_OI_r_cuneiform_2";
OrientationInterpolator1389.key = new MFFloat(new float[0,1]);
OrientationInterpolator1389.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[48] = OrientationInterpolator1389;

let OrientationInterpolator1390 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1390.DEF = "Armature_OI_r_metatarsal_2";
OrientationInterpolator1390.key = new MFFloat(new float[0,1]);
OrientationInterpolator1390.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[49] = OrientationInterpolator1390;

let OrientationInterpolator1391 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1391.DEF = "Armature_OI_r_tarsal_proximal_phalanx_2";
OrientationInterpolator1391.key = new MFFloat(new float[0,1]);
OrientationInterpolator1391.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[50] = OrientationInterpolator1391;

let OrientationInterpolator1392 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1392.DEF = "Armature_OI_r_tarsal_middle_phalanx_2";
OrientationInterpolator1392.key = new MFFloat(new float[0,1]);
OrientationInterpolator1392.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[51] = OrientationInterpolator1392;

let OrientationInterpolator1393 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1393.DEF = "Armature_OI_r_tarsal_distal_phalanx_2";
OrientationInterpolator1393.key = new MFFloat(new float[0,1]);
OrientationInterpolator1393.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[52] = OrientationInterpolator1393;

let OrientationInterpolator1394 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1394.DEF = "Armature_OI_r_cuneiform_3";
OrientationInterpolator1394.key = new MFFloat(new float[0,1]);
OrientationInterpolator1394.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[53] = OrientationInterpolator1394;

let OrientationInterpolator1395 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1395.DEF = "Armature_OI_r_metatarsal_3";
OrientationInterpolator1395.key = new MFFloat(new float[0,1]);
OrientationInterpolator1395.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[54] = OrientationInterpolator1395;

let OrientationInterpolator1396 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1396.DEF = "Armature_OI_r_tarsal_proximal_phalanx_3";
OrientationInterpolator1396.key = new MFFloat(new float[0,1]);
OrientationInterpolator1396.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[55] = OrientationInterpolator1396;

let OrientationInterpolator1397 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1397.DEF = "Armature_OI_r_tarsal_middle_phalanx_3";
OrientationInterpolator1397.key = new MFFloat(new float[0,1]);
OrientationInterpolator1397.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[56] = OrientationInterpolator1397;

let OrientationInterpolator1398 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1398.DEF = "Armature_OI_r_tarsal_distal_phalanx_3";
OrientationInterpolator1398.key = new MFFloat(new float[0,1]);
OrientationInterpolator1398.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[57] = OrientationInterpolator1398;

let OrientationInterpolator1399 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1399.DEF = "Armature_OI_r_calcaneus";
OrientationInterpolator1399.key = new MFFloat(new float[0,1]);
OrientationInterpolator1399.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[58] = OrientationInterpolator1399;

let OrientationInterpolator1400 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1400.DEF = "Armature_OI_r_cuboid";
OrientationInterpolator1400.key = new MFFloat(new float[0,1]);
OrientationInterpolator1400.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[59] = OrientationInterpolator1400;

let OrientationInterpolator1401 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1401.DEF = "Armature_OI_r_metatarsal_4";
OrientationInterpolator1401.key = new MFFloat(new float[0,1]);
OrientationInterpolator1401.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[60] = OrientationInterpolator1401;

let OrientationInterpolator1402 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1402.DEF = "Armature_OI_r_tarsal_proximal_phalanx_4";
OrientationInterpolator1402.key = new MFFloat(new float[0,1]);
OrientationInterpolator1402.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[61] = OrientationInterpolator1402;

let OrientationInterpolator1403 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1403.DEF = "Armature_OI_r_tarsal_middle_phalanx_4";
OrientationInterpolator1403.key = new MFFloat(new float[0,1]);
OrientationInterpolator1403.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[62] = OrientationInterpolator1403;

let OrientationInterpolator1404 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1404.DEF = "Armature_OI_r_tarsal_distal_phalanx_4";
OrientationInterpolator1404.key = new MFFloat(new float[0,1]);
OrientationInterpolator1404.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[63] = OrientationInterpolator1404;

let OrientationInterpolator1405 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1405.DEF = "Armature_OI_r_metatarsal_5";
OrientationInterpolator1405.key = new MFFloat(new float[0,1]);
OrientationInterpolator1405.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[64] = OrientationInterpolator1405;

let OrientationInterpolator1406 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1406.DEF = "Armature_OI_r_tarsal_proximal_phalanx_5";
OrientationInterpolator1406.key = new MFFloat(new float[0,1]);
OrientationInterpolator1406.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[65] = OrientationInterpolator1406;

let OrientationInterpolator1407 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1407.DEF = "Armature_OI_r_tarsal_middle_phalanx_5";
OrientationInterpolator1407.key = new MFFloat(new float[0,1]);
OrientationInterpolator1407.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[66] = OrientationInterpolator1407;

let OrientationInterpolator1408 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1408.DEF = "Armature_OI_r_tarsal_distal_phalanx_5";
OrientationInterpolator1408.key = new MFFloat(new float[0,1]);
OrientationInterpolator1408.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[67] = OrientationInterpolator1408;

let OrientationInterpolator1409 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1409.DEF = "Armature_OI_l5";
OrientationInterpolator1409.key = new MFFloat(new float[0,1]);
OrientationInterpolator1409.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[68] = OrientationInterpolator1409;

let OrientationInterpolator1410 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1410.DEF = "Armature_OI_l4";
OrientationInterpolator1410.key = new MFFloat(new float[0,1]);
OrientationInterpolator1410.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[69] = OrientationInterpolator1410;

let OrientationInterpolator1411 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1411.DEF = "Armature_OI_l3";
OrientationInterpolator1411.key = new MFFloat(new float[0,1]);
OrientationInterpolator1411.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[70] = OrientationInterpolator1411;

let OrientationInterpolator1412 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1412.DEF = "Armature_OI_l2";
OrientationInterpolator1412.key = new MFFloat(new float[0,1]);
OrientationInterpolator1412.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[71] = OrientationInterpolator1412;

let OrientationInterpolator1413 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1413.DEF = "Armature_OI_l1";
OrientationInterpolator1413.key = new MFFloat(new float[0,1]);
OrientationInterpolator1413.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[72] = OrientationInterpolator1413;

let OrientationInterpolator1414 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1414.DEF = "Armature_OI_t12";
OrientationInterpolator1414.key = new MFFloat(new float[0,1]);
OrientationInterpolator1414.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[73] = OrientationInterpolator1414;

let OrientationInterpolator1415 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1415.DEF = "Armature_OI_t11";
OrientationInterpolator1415.key = new MFFloat(new float[0,1]);
OrientationInterpolator1415.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[74] = OrientationInterpolator1415;

let OrientationInterpolator1416 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1416.DEF = "Armature_OI_t10";
OrientationInterpolator1416.key = new MFFloat(new float[0,1]);
OrientationInterpolator1416.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[75] = OrientationInterpolator1416;

let OrientationInterpolator1417 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1417.DEF = "Armature_OI_t9";
OrientationInterpolator1417.key = new MFFloat(new float[0,1]);
OrientationInterpolator1417.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[76] = OrientationInterpolator1417;

let OrientationInterpolator1418 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1418.DEF = "Armature_OI_t8";
OrientationInterpolator1418.key = new MFFloat(new float[0,1]);
OrientationInterpolator1418.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[77] = OrientationInterpolator1418;

let OrientationInterpolator1419 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1419.DEF = "Armature_OI_t7";
OrientationInterpolator1419.key = new MFFloat(new float[0,1]);
OrientationInterpolator1419.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[78] = OrientationInterpolator1419;

let OrientationInterpolator1420 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1420.DEF = "Armature_OI_t6";
OrientationInterpolator1420.key = new MFFloat(new float[0,1]);
OrientationInterpolator1420.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[79] = OrientationInterpolator1420;

let OrientationInterpolator1421 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1421.DEF = "Armature_OI_t5";
OrientationInterpolator1421.key = new MFFloat(new float[0,1]);
OrientationInterpolator1421.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[80] = OrientationInterpolator1421;

let OrientationInterpolator1422 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1422.DEF = "Armature_OI_t4";
OrientationInterpolator1422.key = new MFFloat(new float[0,1]);
OrientationInterpolator1422.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[81] = OrientationInterpolator1422;

let OrientationInterpolator1423 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1423.DEF = "Armature_OI_t3";
OrientationInterpolator1423.key = new MFFloat(new float[0,1]);
OrientationInterpolator1423.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[82] = OrientationInterpolator1423;

let OrientationInterpolator1424 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1424.DEF = "Armature_OI_t2";
OrientationInterpolator1424.key = new MFFloat(new float[0,1]);
OrientationInterpolator1424.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[83] = OrientationInterpolator1424;

let OrientationInterpolator1425 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1425.DEF = "Armature_OI_t1";
OrientationInterpolator1425.key = new MFFloat(new float[0,1]);
OrientationInterpolator1425.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[84] = OrientationInterpolator1425;

let OrientationInterpolator1426 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1426.DEF = "Armature_OI_c7";
OrientationInterpolator1426.key = new MFFloat(new float[0,1]);
OrientationInterpolator1426.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[85] = OrientationInterpolator1426;

let OrientationInterpolator1427 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1427.DEF = "Armature_OI_c6";
OrientationInterpolator1427.key = new MFFloat(new float[0,1]);
OrientationInterpolator1427.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[86] = OrientationInterpolator1427;

let OrientationInterpolator1428 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1428.DEF = "Armature_OI_c5";
OrientationInterpolator1428.key = new MFFloat(new float[0,1]);
OrientationInterpolator1428.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[87] = OrientationInterpolator1428;

let OrientationInterpolator1429 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1429.DEF = "Armature_OI_c4";
OrientationInterpolator1429.key = new MFFloat(new float[0,1]);
OrientationInterpolator1429.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[88] = OrientationInterpolator1429;

let OrientationInterpolator1430 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1430.DEF = "Armature_OI_c3";
OrientationInterpolator1430.key = new MFFloat(new float[0,1]);
OrientationInterpolator1430.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[89] = OrientationInterpolator1430;

let OrientationInterpolator1431 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1431.DEF = "Armature_OI_c2";
OrientationInterpolator1431.key = new MFFloat(new float[0,1]);
OrientationInterpolator1431.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[90] = OrientationInterpolator1431;

let OrientationInterpolator1432 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1432.DEF = "Armature_OI_c1";
OrientationInterpolator1432.key = new MFFloat(new float[0,1]);
OrientationInterpolator1432.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[91] = OrientationInterpolator1432;

let OrientationInterpolator1433 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1433.DEF = "Armature_OI_skull";
OrientationInterpolator1433.key = new MFFloat(new float[0,1]);
OrientationInterpolator1433.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[92] = OrientationInterpolator1433;

let OrientationInterpolator1434 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1434.DEF = "Armature_OI_l_eyelid";
OrientationInterpolator1434.key = new MFFloat(new float[0,1]);
OrientationInterpolator1434.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[93] = OrientationInterpolator1434;

let OrientationInterpolator1435 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1435.DEF = "Armature_OI_r_eyelid";
OrientationInterpolator1435.key = new MFFloat(new float[0,1]);
OrientationInterpolator1435.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[94] = OrientationInterpolator1435;

let OrientationInterpolator1436 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1436.DEF = "Armature_OI_l_eyeball";
OrientationInterpolator1436.key = new MFFloat(new float[0,1]);
OrientationInterpolator1436.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[95] = OrientationInterpolator1436;

let OrientationInterpolator1437 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1437.DEF = "Armature_OI_r_eyeball";
OrientationInterpolator1437.key = new MFFloat(new float[0,1]);
OrientationInterpolator1437.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[96] = OrientationInterpolator1437;

let OrientationInterpolator1438 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1438.DEF = "Armature_OI_l_eyebrow";
OrientationInterpolator1438.key = new MFFloat(new float[0,1]);
OrientationInterpolator1438.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[97] = OrientationInterpolator1438;

let OrientationInterpolator1439 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1439.DEF = "Armature_OI_r_eyebrow";
OrientationInterpolator1439.key = new MFFloat(new float[0,1]);
OrientationInterpolator1439.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[98] = OrientationInterpolator1439;

let OrientationInterpolator1440 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1440.DEF = "Armature_OI_jaw";
OrientationInterpolator1440.key = new MFFloat(new float[0,1]);
OrientationInterpolator1440.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[99] = OrientationInterpolator1440;

let OrientationInterpolator1441 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1441.DEF = "Armature_OI_l_clavicle";
OrientationInterpolator1441.key = new MFFloat(new float[0,1]);
OrientationInterpolator1441.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[100] = OrientationInterpolator1441;

let OrientationInterpolator1442 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1442.DEF = "Armature_OI_l_scapula";
OrientationInterpolator1442.key = new MFFloat(new float[0,1]);
OrientationInterpolator1442.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[101] = OrientationInterpolator1442;

let OrientationInterpolator1443 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1443.DEF = "Armature_OI_l_upperarm";
OrientationInterpolator1443.key = new MFFloat(new float[0,1]);
OrientationInterpolator1443.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[102] = OrientationInterpolator1443;

let OrientationInterpolator1444 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1444.DEF = "Armature_OI_l_forearm";
OrientationInterpolator1444.key = new MFFloat(new float[0,1]);
OrientationInterpolator1444.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[103] = OrientationInterpolator1444;

let OrientationInterpolator1445 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1445.DEF = "Armature_OI_l_carpal";
OrientationInterpolator1445.key = new MFFloat(new float[0,1]);
OrientationInterpolator1445.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[104] = OrientationInterpolator1445;

let OrientationInterpolator1446 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1446.DEF = "Armature_OI_l_trapezium";
OrientationInterpolator1446.key = new MFFloat(new float[0,1]);
OrientationInterpolator1446.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[105] = OrientationInterpolator1446;

let OrientationInterpolator1447 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1447.DEF = "Armature_OI_l_metacarpal_1";
OrientationInterpolator1447.key = new MFFloat(new float[0,1]);
OrientationInterpolator1447.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[106] = OrientationInterpolator1447;

let OrientationInterpolator1448 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1448.DEF = "Armature_OI_l_carpal_proximal_phalanx_1";
OrientationInterpolator1448.key = new MFFloat(new float[0,1]);
OrientationInterpolator1448.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[107] = OrientationInterpolator1448;

let OrientationInterpolator1449 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1449.DEF = "Armature_OI_l_carpal_distal_phalanx_1";
OrientationInterpolator1449.key = new MFFloat(new float[0,1]);
OrientationInterpolator1449.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[108] = OrientationInterpolator1449;

let OrientationInterpolator1450 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1450.DEF = "Armature_OI_l_trapezoid";
OrientationInterpolator1450.key = new MFFloat(new float[0,1]);
OrientationInterpolator1450.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[109] = OrientationInterpolator1450;

let OrientationInterpolator1451 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1451.DEF = "Armature_OI_l_metacarpal_2";
OrientationInterpolator1451.key = new MFFloat(new float[0,1]);
OrientationInterpolator1451.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[110] = OrientationInterpolator1451;

let OrientationInterpolator1452 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1452.DEF = "Armature_OI_l_carpal_proximal_phalanx_2";
OrientationInterpolator1452.key = new MFFloat(new float[0,1]);
OrientationInterpolator1452.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[111] = OrientationInterpolator1452;

let OrientationInterpolator1453 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1453.DEF = "Armature_OI_l_carpal_middle_phalanx_2";
OrientationInterpolator1453.key = new MFFloat(new float[0,1]);
OrientationInterpolator1453.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[112] = OrientationInterpolator1453;

let OrientationInterpolator1454 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1454.DEF = "Armature_OI_l_carpal_distal_phalanx_2";
OrientationInterpolator1454.key = new MFFloat(new float[0,1]);
OrientationInterpolator1454.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[113] = OrientationInterpolator1454;

let OrientationInterpolator1455 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1455.DEF = "Armature_OI_l_capitate";
OrientationInterpolator1455.key = new MFFloat(new float[0,1]);
OrientationInterpolator1455.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[114] = OrientationInterpolator1455;

let OrientationInterpolator1456 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1456.DEF = "Armature_OI_l_metacarpal_3";
OrientationInterpolator1456.key = new MFFloat(new float[0,1]);
OrientationInterpolator1456.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[115] = OrientationInterpolator1456;

let OrientationInterpolator1457 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1457.DEF = "Armature_OI_l_carpal_proximal_phalanx_3";
OrientationInterpolator1457.key = new MFFloat(new float[0,1]);
OrientationInterpolator1457.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[116] = OrientationInterpolator1457;

let OrientationInterpolator1458 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1458.DEF = "Armature_OI_l_carpal_middle_phalanx_3";
OrientationInterpolator1458.key = new MFFloat(new float[0,1]);
OrientationInterpolator1458.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[117] = OrientationInterpolator1458;

let OrientationInterpolator1459 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1459.DEF = "Armature_OI_l_carpal_distal_phalanx_3";
OrientationInterpolator1459.key = new MFFloat(new float[0,1]);
OrientationInterpolator1459.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[118] = OrientationInterpolator1459;

let OrientationInterpolator1460 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1460.DEF = "Armature_OI_l_hamate";
OrientationInterpolator1460.key = new MFFloat(new float[0,1]);
OrientationInterpolator1460.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[119] = OrientationInterpolator1460;

let OrientationInterpolator1461 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1461.DEF = "Armature_OI_l_metacarpal_4";
OrientationInterpolator1461.key = new MFFloat(new float[0,1]);
OrientationInterpolator1461.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[120] = OrientationInterpolator1461;

let OrientationInterpolator1462 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1462.DEF = "Armature_OI_l_carpal_proximal_phalanx_4";
OrientationInterpolator1462.key = new MFFloat(new float[0,1]);
OrientationInterpolator1462.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[121] = OrientationInterpolator1462;

let OrientationInterpolator1463 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1463.DEF = "Armature_OI_l_carpal_middle_phalanx_4";
OrientationInterpolator1463.key = new MFFloat(new float[0,1]);
OrientationInterpolator1463.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[122] = OrientationInterpolator1463;

let OrientationInterpolator1464 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1464.DEF = "Armature_OI_l_carpal_distal_phalanx_4";
OrientationInterpolator1464.key = new MFFloat(new float[0,1]);
OrientationInterpolator1464.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[123] = OrientationInterpolator1464;

let OrientationInterpolator1465 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1465.DEF = "Armature_OI_l_metacarpal_5";
OrientationInterpolator1465.key = new MFFloat(new float[0,1]);
OrientationInterpolator1465.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[124] = OrientationInterpolator1465;

let OrientationInterpolator1466 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1466.DEF = "Armature_OI_l_carpal_proximal_phalanx_5";
OrientationInterpolator1466.key = new MFFloat(new float[0,1]);
OrientationInterpolator1466.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[125] = OrientationInterpolator1466;

let OrientationInterpolator1467 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1467.DEF = "Armature_OI_l_carpal_middle_phalanx_5";
OrientationInterpolator1467.key = new MFFloat(new float[0,1]);
OrientationInterpolator1467.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[126] = OrientationInterpolator1467;

let OrientationInterpolator1468 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1468.DEF = "Armature_OI_l_carpal_distal_phalanx_5";
OrientationInterpolator1468.key = new MFFloat(new float[0,1]);
OrientationInterpolator1468.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[127] = OrientationInterpolator1468;

let OrientationInterpolator1469 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1469.DEF = "Armature_OI_r_clavicle";
OrientationInterpolator1469.key = new MFFloat(new float[0,1]);
OrientationInterpolator1469.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[128] = OrientationInterpolator1469;

let OrientationInterpolator1470 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1470.DEF = "Armature_OI_r_scapula";
OrientationInterpolator1470.key = new MFFloat(new float[0,1]);
OrientationInterpolator1470.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[129] = OrientationInterpolator1470;

let OrientationInterpolator1471 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1471.DEF = "Armature_OI_r_upperarm";
OrientationInterpolator1471.key = new MFFloat(new float[0,1]);
OrientationInterpolator1471.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[130] = OrientationInterpolator1471;

let OrientationInterpolator1472 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1472.DEF = "Armature_OI_r_forearm";
OrientationInterpolator1472.key = new MFFloat(new float[0,1]);
OrientationInterpolator1472.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[131] = OrientationInterpolator1472;

let OrientationInterpolator1473 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1473.DEF = "Armature_OI_r_carpal";
OrientationInterpolator1473.key = new MFFloat(new float[0,1]);
OrientationInterpolator1473.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[132] = OrientationInterpolator1473;

let OrientationInterpolator1474 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1474.DEF = "Armature_OI_r_trapezium";
OrientationInterpolator1474.key = new MFFloat(new float[0,1]);
OrientationInterpolator1474.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[133] = OrientationInterpolator1474;

let OrientationInterpolator1475 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1475.DEF = "Armature_OI_r_metacarpal_1";
OrientationInterpolator1475.key = new MFFloat(new float[0,1]);
OrientationInterpolator1475.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[134] = OrientationInterpolator1475;

let OrientationInterpolator1476 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1476.DEF = "Armature_OI_r_carpal_proximal_phalanx_1";
OrientationInterpolator1476.key = new MFFloat(new float[0,1]);
OrientationInterpolator1476.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[135] = OrientationInterpolator1476;

let OrientationInterpolator1477 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1477.DEF = "Armature_OI_r_carpal_distal_phalanx_1";
OrientationInterpolator1477.key = new MFFloat(new float[0,1]);
OrientationInterpolator1477.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[136] = OrientationInterpolator1477;

let OrientationInterpolator1478 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1478.DEF = "Armature_OI_r_trapezoid";
OrientationInterpolator1478.key = new MFFloat(new float[0,1]);
OrientationInterpolator1478.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[137] = OrientationInterpolator1478;

let OrientationInterpolator1479 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1479.DEF = "Armature_OI_r_metacarpal_2";
OrientationInterpolator1479.key = new MFFloat(new float[0,1]);
OrientationInterpolator1479.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[138] = OrientationInterpolator1479;

let OrientationInterpolator1480 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1480.DEF = "Armature_OI_r_carpal_proximal_phalanx_2";
OrientationInterpolator1480.key = new MFFloat(new float[0,1]);
OrientationInterpolator1480.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[139] = OrientationInterpolator1480;

let OrientationInterpolator1481 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1481.DEF = "Armature_OI_r_carpal_middle_phalanx_2";
OrientationInterpolator1481.key = new MFFloat(new float[0,1]);
OrientationInterpolator1481.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[140] = OrientationInterpolator1481;

let OrientationInterpolator1482 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1482.DEF = "Armature_OI_r_carpal_distal_phalanx_2";
OrientationInterpolator1482.key = new MFFloat(new float[0,1]);
OrientationInterpolator1482.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[141] = OrientationInterpolator1482;

let OrientationInterpolator1483 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1483.DEF = "Armature_OI_r_capitate";
OrientationInterpolator1483.key = new MFFloat(new float[0,1]);
OrientationInterpolator1483.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[142] = OrientationInterpolator1483;

let OrientationInterpolator1484 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1484.DEF = "Armature_OI_r_metacarpal_3";
OrientationInterpolator1484.key = new MFFloat(new float[0,1]);
OrientationInterpolator1484.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[143] = OrientationInterpolator1484;

let OrientationInterpolator1485 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1485.DEF = "Armature_OI_r_carpal_proximal_phalanx_3";
OrientationInterpolator1485.key = new MFFloat(new float[0,1]);
OrientationInterpolator1485.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[144] = OrientationInterpolator1485;

let OrientationInterpolator1486 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1486.DEF = "Armature_OI_r_carpal_middle_phalanx_3";
OrientationInterpolator1486.key = new MFFloat(new float[0,1]);
OrientationInterpolator1486.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[145] = OrientationInterpolator1486;

let OrientationInterpolator1487 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1487.DEF = "Armature_OI_r_carpal_distal_phalanx_3";
OrientationInterpolator1487.key = new MFFloat(new float[0,1]);
OrientationInterpolator1487.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[146] = OrientationInterpolator1487;

let OrientationInterpolator1488 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1488.DEF = "Armature_OI_r_hamate";
OrientationInterpolator1488.key = new MFFloat(new float[0,1]);
OrientationInterpolator1488.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[147] = OrientationInterpolator1488;

let OrientationInterpolator1489 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1489.DEF = "Armature_OI_r_metacarpal_4";
OrientationInterpolator1489.key = new MFFloat(new float[0,1]);
OrientationInterpolator1489.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[148] = OrientationInterpolator1489;

let OrientationInterpolator1490 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1490.DEF = "Armature_OI_r_carpal_proximal_phalanx_4";
OrientationInterpolator1490.key = new MFFloat(new float[0,1]);
OrientationInterpolator1490.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[149] = OrientationInterpolator1490;

let OrientationInterpolator1491 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1491.DEF = "Armature_OI_r_carpal_middle_phalanx_4";
OrientationInterpolator1491.key = new MFFloat(new float[0,1]);
OrientationInterpolator1491.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[150] = OrientationInterpolator1491;

let OrientationInterpolator1492 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1492.DEF = "Armature_OI_r_carpal_distal_phalanx_4";
OrientationInterpolator1492.key = new MFFloat(new float[0,1]);
OrientationInterpolator1492.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[151] = OrientationInterpolator1492;

let OrientationInterpolator1493 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1493.DEF = "Armature_OI_r_metacarpal_5";
OrientationInterpolator1493.key = new MFFloat(new float[0,1]);
OrientationInterpolator1493.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[152] = OrientationInterpolator1493;

let OrientationInterpolator1494 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1494.DEF = "Armature_OI_r_carpal_proximal_phalanx_5";
OrientationInterpolator1494.key = new MFFloat(new float[0,1]);
OrientationInterpolator1494.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[153] = OrientationInterpolator1494;

let OrientationInterpolator1495 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1495.DEF = "Armature_OI_r_carpal_middle_phalanx_5";
OrientationInterpolator1495.key = new MFFloat(new float[0,1]);
OrientationInterpolator1495.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[154] = OrientationInterpolator1495;

let OrientationInterpolator1496 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1496.DEF = "Armature_OI_r_carpal_distal_phalanx_5";
OrientationInterpolator1496.key = new MFFloat(new float[0,1]);
OrientationInterpolator1496.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[155] = OrientationInterpolator1496;

let ROUTE1497 = browser.currentScene.createNode("ROUTE");
ROUTE1497.fromField = "fraction_changed";
ROUTE1497.fromNode = "Armature_Clock";
ROUTE1497.toField = "set_fraction";
ROUTE1497.toNode = "Armature_OI_sacrum";
browser.currentScene.children[156] = ROUTE1497;

let ROUTE1498 = browser.currentScene.createNode("ROUTE");
ROUTE1498.fromField = "value_changed";
ROUTE1498.fromNode = "Armature_OI_sacrum";
ROUTE1498.toField = "rotation";
ROUTE1498.toNode = "hanim_sacrum";
browser.currentScene.children[157] = ROUTE1498;

let ROUTE1499 = browser.currentScene.createNode("ROUTE");
ROUTE1499.fromField = "fraction_changed";
ROUTE1499.fromNode = "Armature_Clock";
ROUTE1499.toField = "set_fraction";
ROUTE1499.toNode = "Armature_OI_pelvis";
browser.currentScene.children[158] = ROUTE1499;

let ROUTE1500 = browser.currentScene.createNode("ROUTE");
ROUTE1500.fromField = "value_changed";
ROUTE1500.fromNode = "Armature_OI_pelvis";
ROUTE1500.toField = "rotation";
ROUTE1500.toNode = "hanim_pelvis";
browser.currentScene.children[159] = ROUTE1500;

let ROUTE1501 = browser.currentScene.createNode("ROUTE");
ROUTE1501.fromField = "fraction_changed";
ROUTE1501.fromNode = "Armature_Clock";
ROUTE1501.toField = "set_fraction";
ROUTE1501.toNode = "Armature_OI_l_thigh";
browser.currentScene.children[160] = ROUTE1501;

let ROUTE1502 = browser.currentScene.createNode("ROUTE");
ROUTE1502.fromField = "value_changed";
ROUTE1502.fromNode = "Armature_OI_l_thigh";
ROUTE1502.toField = "rotation";
ROUTE1502.toNode = "hanim_l_thigh";
browser.currentScene.children[161] = ROUTE1502;

let ROUTE1503 = browser.currentScene.createNode("ROUTE");
ROUTE1503.fromField = "fraction_changed";
ROUTE1503.fromNode = "Armature_Clock";
ROUTE1503.toField = "set_fraction";
ROUTE1503.toNode = "Armature_OI_l_calf";
browser.currentScene.children[162] = ROUTE1503;

let ROUTE1504 = browser.currentScene.createNode("ROUTE");
ROUTE1504.fromField = "value_changed";
ROUTE1504.fromNode = "Armature_OI_l_calf";
ROUTE1504.toField = "rotation";
ROUTE1504.toNode = "hanim_l_calf";
browser.currentScene.children[163] = ROUTE1504;

let ROUTE1505 = browser.currentScene.createNode("ROUTE");
ROUTE1505.fromField = "fraction_changed";
ROUTE1505.fromNode = "Armature_Clock";
ROUTE1505.toField = "set_fraction";
ROUTE1505.toNode = "Armature_OI_l_talus";
browser.currentScene.children[164] = ROUTE1505;

let ROUTE1506 = browser.currentScene.createNode("ROUTE");
ROUTE1506.fromField = "value_changed";
ROUTE1506.fromNode = "Armature_OI_l_talus";
ROUTE1506.toField = "rotation";
ROUTE1506.toNode = "hanim_l_talus";
browser.currentScene.children[165] = ROUTE1506;

let ROUTE1507 = browser.currentScene.createNode("ROUTE");
ROUTE1507.fromField = "fraction_changed";
ROUTE1507.fromNode = "Armature_Clock";
ROUTE1507.toField = "set_fraction";
ROUTE1507.toNode = "Armature_OI_l_navicular";
browser.currentScene.children[166] = ROUTE1507;

let ROUTE1508 = browser.currentScene.createNode("ROUTE");
ROUTE1508.fromField = "value_changed";
ROUTE1508.fromNode = "Armature_OI_l_navicular";
ROUTE1508.toField = "rotation";
ROUTE1508.toNode = "hanim_l_navicular";
browser.currentScene.children[167] = ROUTE1508;

let ROUTE1509 = browser.currentScene.createNode("ROUTE");
ROUTE1509.fromField = "fraction_changed";
ROUTE1509.fromNode = "Armature_Clock";
ROUTE1509.toField = "set_fraction";
ROUTE1509.toNode = "Armature_OI_l_cuneiform_1";
browser.currentScene.children[168] = ROUTE1509;

let ROUTE1510 = browser.currentScene.createNode("ROUTE");
ROUTE1510.fromField = "value_changed";
ROUTE1510.fromNode = "Armature_OI_l_cuneiform_1";
ROUTE1510.toField = "rotation";
ROUTE1510.toNode = "hanim_l_cuneiform_1";
browser.currentScene.children[169] = ROUTE1510;

let ROUTE1511 = browser.currentScene.createNode("ROUTE");
ROUTE1511.fromField = "fraction_changed";
ROUTE1511.fromNode = "Armature_Clock";
ROUTE1511.toField = "set_fraction";
ROUTE1511.toNode = "Armature_OI_l_metatarsal_1";
browser.currentScene.children[170] = ROUTE1511;

let ROUTE1512 = browser.currentScene.createNode("ROUTE");
ROUTE1512.fromField = "value_changed";
ROUTE1512.fromNode = "Armature_OI_l_metatarsal_1";
ROUTE1512.toField = "rotation";
ROUTE1512.toNode = "hanim_l_metatarsal_1";
browser.currentScene.children[171] = ROUTE1512;

let ROUTE1513 = browser.currentScene.createNode("ROUTE");
ROUTE1513.fromField = "fraction_changed";
ROUTE1513.fromNode = "Armature_Clock";
ROUTE1513.toField = "set_fraction";
ROUTE1513.toNode = "Armature_OI_l_tarsal_proximal_phalanx_1";
browser.currentScene.children[172] = ROUTE1513;

let ROUTE1514 = browser.currentScene.createNode("ROUTE");
ROUTE1514.fromField = "value_changed";
ROUTE1514.fromNode = "Armature_OI_l_tarsal_proximal_phalanx_1";
ROUTE1514.toField = "rotation";
ROUTE1514.toNode = "hanim_l_tarsal_proximal_phalanx_1";
browser.currentScene.children[173] = ROUTE1514;

let ROUTE1515 = browser.currentScene.createNode("ROUTE");
ROUTE1515.fromField = "fraction_changed";
ROUTE1515.fromNode = "Armature_Clock";
ROUTE1515.toField = "set_fraction";
ROUTE1515.toNode = "Armature_OI_l_tarsal_distal_phalanx_1";
browser.currentScene.children[174] = ROUTE1515;

let ROUTE1516 = browser.currentScene.createNode("ROUTE");
ROUTE1516.fromField = "value_changed";
ROUTE1516.fromNode = "Armature_OI_l_tarsal_distal_phalanx_1";
ROUTE1516.toField = "rotation";
ROUTE1516.toNode = "hanim_l_tarsal_distal_phalanx_1";
browser.currentScene.children[175] = ROUTE1516;

let ROUTE1517 = browser.currentScene.createNode("ROUTE");
ROUTE1517.fromField = "fraction_changed";
ROUTE1517.fromNode = "Armature_Clock";
ROUTE1517.toField = "set_fraction";
ROUTE1517.toNode = "Armature_OI_l_cuneiform_2";
browser.currentScene.children[176] = ROUTE1517;

let ROUTE1518 = browser.currentScene.createNode("ROUTE");
ROUTE1518.fromField = "value_changed";
ROUTE1518.fromNode = "Armature_OI_l_cuneiform_2";
ROUTE1518.toField = "rotation";
ROUTE1518.toNode = "hanim_l_cuneiform_2";
browser.currentScene.children[177] = ROUTE1518;

let ROUTE1519 = browser.currentScene.createNode("ROUTE");
ROUTE1519.fromField = "fraction_changed";
ROUTE1519.fromNode = "Armature_Clock";
ROUTE1519.toField = "set_fraction";
ROUTE1519.toNode = "Armature_OI_l_metatarsal_2";
browser.currentScene.children[178] = ROUTE1519;

let ROUTE1520 = browser.currentScene.createNode("ROUTE");
ROUTE1520.fromField = "value_changed";
ROUTE1520.fromNode = "Armature_OI_l_metatarsal_2";
ROUTE1520.toField = "rotation";
ROUTE1520.toNode = "hanim_l_metatarsal_2";
browser.currentScene.children[179] = ROUTE1520;

let ROUTE1521 = browser.currentScene.createNode("ROUTE");
ROUTE1521.fromField = "fraction_changed";
ROUTE1521.fromNode = "Armature_Clock";
ROUTE1521.toField = "set_fraction";
ROUTE1521.toNode = "Armature_OI_l_tarsal_proximal_phalanx_2";
browser.currentScene.children[180] = ROUTE1521;

let ROUTE1522 = browser.currentScene.createNode("ROUTE");
ROUTE1522.fromField = "value_changed";
ROUTE1522.fromNode = "Armature_OI_l_tarsal_proximal_phalanx_2";
ROUTE1522.toField = "rotation";
ROUTE1522.toNode = "hanim_l_tarsal_proximal_phalanx_2";
browser.currentScene.children[181] = ROUTE1522;

let ROUTE1523 = browser.currentScene.createNode("ROUTE");
ROUTE1523.fromField = "fraction_changed";
ROUTE1523.fromNode = "Armature_Clock";
ROUTE1523.toField = "set_fraction";
ROUTE1523.toNode = "Armature_OI_l_tarsal_middle_phalanx_2";
browser.currentScene.children[182] = ROUTE1523;

let ROUTE1524 = browser.currentScene.createNode("ROUTE");
ROUTE1524.fromField = "value_changed";
ROUTE1524.fromNode = "Armature_OI_l_tarsal_middle_phalanx_2";
ROUTE1524.toField = "rotation";
ROUTE1524.toNode = "hanim_l_tarsal_middle_phalanx_2";
browser.currentScene.children[183] = ROUTE1524;

let ROUTE1525 = browser.currentScene.createNode("ROUTE");
ROUTE1525.fromField = "fraction_changed";
ROUTE1525.fromNode = "Armature_Clock";
ROUTE1525.toField = "set_fraction";
ROUTE1525.toNode = "Armature_OI_l_tarsal_distal_phalanx_2";
browser.currentScene.children[184] = ROUTE1525;

let ROUTE1526 = browser.currentScene.createNode("ROUTE");
ROUTE1526.fromField = "value_changed";
ROUTE1526.fromNode = "Armature_OI_l_tarsal_distal_phalanx_2";
ROUTE1526.toField = "rotation";
ROUTE1526.toNode = "hanim_l_tarsal_distal_phalanx_2";
browser.currentScene.children[185] = ROUTE1526;

let ROUTE1527 = browser.currentScene.createNode("ROUTE");
ROUTE1527.fromField = "fraction_changed";
ROUTE1527.fromNode = "Armature_Clock";
ROUTE1527.toField = "set_fraction";
ROUTE1527.toNode = "Armature_OI_l_cuneiform_3";
browser.currentScene.children[186] = ROUTE1527;

let ROUTE1528 = browser.currentScene.createNode("ROUTE");
ROUTE1528.fromField = "value_changed";
ROUTE1528.fromNode = "Armature_OI_l_cuneiform_3";
ROUTE1528.toField = "rotation";
ROUTE1528.toNode = "hanim_l_cuneiform_3";
browser.currentScene.children[187] = ROUTE1528;

let ROUTE1529 = browser.currentScene.createNode("ROUTE");
ROUTE1529.fromField = "fraction_changed";
ROUTE1529.fromNode = "Armature_Clock";
ROUTE1529.toField = "set_fraction";
ROUTE1529.toNode = "Armature_OI_l_metatarsal_3";
browser.currentScene.children[188] = ROUTE1529;

let ROUTE1530 = browser.currentScene.createNode("ROUTE");
ROUTE1530.fromField = "value_changed";
ROUTE1530.fromNode = "Armature_OI_l_metatarsal_3";
ROUTE1530.toField = "rotation";
ROUTE1530.toNode = "hanim_l_metatarsal_3";
browser.currentScene.children[189] = ROUTE1530;

let ROUTE1531 = browser.currentScene.createNode("ROUTE");
ROUTE1531.fromField = "fraction_changed";
ROUTE1531.fromNode = "Armature_Clock";
ROUTE1531.toField = "set_fraction";
ROUTE1531.toNode = "Armature_OI_l_tarsal_proximal_phalanx_3";
browser.currentScene.children[190] = ROUTE1531;

let ROUTE1532 = browser.currentScene.createNode("ROUTE");
ROUTE1532.fromField = "value_changed";
ROUTE1532.fromNode = "Armature_OI_l_tarsal_proximal_phalanx_3";
ROUTE1532.toField = "rotation";
ROUTE1532.toNode = "hanim_l_tarsal_proximal_phalanx_3";
browser.currentScene.children[191] = ROUTE1532;

let ROUTE1533 = browser.currentScene.createNode("ROUTE");
ROUTE1533.fromField = "fraction_changed";
ROUTE1533.fromNode = "Armature_Clock";
ROUTE1533.toField = "set_fraction";
ROUTE1533.toNode = "Armature_OI_l_tarsal_middle_phalanx_3";
browser.currentScene.children[192] = ROUTE1533;

let ROUTE1534 = browser.currentScene.createNode("ROUTE");
ROUTE1534.fromField = "value_changed";
ROUTE1534.fromNode = "Armature_OI_l_tarsal_middle_phalanx_3";
ROUTE1534.toField = "rotation";
ROUTE1534.toNode = "hanim_l_tarsal_middle_phalanx_3";
browser.currentScene.children[193] = ROUTE1534;

let ROUTE1535 = browser.currentScene.createNode("ROUTE");
ROUTE1535.fromField = "fraction_changed";
ROUTE1535.fromNode = "Armature_Clock";
ROUTE1535.toField = "set_fraction";
ROUTE1535.toNode = "Armature_OI_l_tarsal_distal_phalanx_3";
browser.currentScene.children[194] = ROUTE1535;

let ROUTE1536 = browser.currentScene.createNode("ROUTE");
ROUTE1536.fromField = "value_changed";
ROUTE1536.fromNode = "Armature_OI_l_tarsal_distal_phalanx_3";
ROUTE1536.toField = "rotation";
ROUTE1536.toNode = "hanim_l_tarsal_distal_phalanx_3";
browser.currentScene.children[195] = ROUTE1536;

let ROUTE1537 = browser.currentScene.createNode("ROUTE");
ROUTE1537.fromField = "fraction_changed";
ROUTE1537.fromNode = "Armature_Clock";
ROUTE1537.toField = "set_fraction";
ROUTE1537.toNode = "Armature_OI_l_calcaneus";
browser.currentScene.children[196] = ROUTE1537;

let ROUTE1538 = browser.currentScene.createNode("ROUTE");
ROUTE1538.fromField = "value_changed";
ROUTE1538.fromNode = "Armature_OI_l_calcaneus";
ROUTE1538.toField = "rotation";
ROUTE1538.toNode = "hanim_l_calcaneus";
browser.currentScene.children[197] = ROUTE1538;

let ROUTE1539 = browser.currentScene.createNode("ROUTE");
ROUTE1539.fromField = "fraction_changed";
ROUTE1539.fromNode = "Armature_Clock";
ROUTE1539.toField = "set_fraction";
ROUTE1539.toNode = "Armature_OI_l_cuboid";
browser.currentScene.children[198] = ROUTE1539;

let ROUTE1540 = browser.currentScene.createNode("ROUTE");
ROUTE1540.fromField = "value_changed";
ROUTE1540.fromNode = "Armature_OI_l_cuboid";
ROUTE1540.toField = "rotation";
ROUTE1540.toNode = "hanim_l_cuboid";
browser.currentScene.children[199] = ROUTE1540;

let ROUTE1541 = browser.currentScene.createNode("ROUTE");
ROUTE1541.fromField = "fraction_changed";
ROUTE1541.fromNode = "Armature_Clock";
ROUTE1541.toField = "set_fraction";
ROUTE1541.toNode = "Armature_OI_l_metatarsal_4";
browser.currentScene.children[200] = ROUTE1541;

let ROUTE1542 = browser.currentScene.createNode("ROUTE");
ROUTE1542.fromField = "value_changed";
ROUTE1542.fromNode = "Armature_OI_l_metatarsal_4";
ROUTE1542.toField = "rotation";
ROUTE1542.toNode = "hanim_l_metatarsal_4";
browser.currentScene.children[201] = ROUTE1542;

let ROUTE1543 = browser.currentScene.createNode("ROUTE");
ROUTE1543.fromField = "fraction_changed";
ROUTE1543.fromNode = "Armature_Clock";
ROUTE1543.toField = "set_fraction";
ROUTE1543.toNode = "Armature_OI_l_tarsal_proximal_phalanx_4";
browser.currentScene.children[202] = ROUTE1543;

let ROUTE1544 = browser.currentScene.createNode("ROUTE");
ROUTE1544.fromField = "value_changed";
ROUTE1544.fromNode = "Armature_OI_l_tarsal_proximal_phalanx_4";
ROUTE1544.toField = "rotation";
ROUTE1544.toNode = "hanim_l_tarsal_proximal_phalanx_4";
browser.currentScene.children[203] = ROUTE1544;

let ROUTE1545 = browser.currentScene.createNode("ROUTE");
ROUTE1545.fromField = "fraction_changed";
ROUTE1545.fromNode = "Armature_Clock";
ROUTE1545.toField = "set_fraction";
ROUTE1545.toNode = "Armature_OI_l_tarsal_middle_phalanx_4";
browser.currentScene.children[204] = ROUTE1545;

let ROUTE1546 = browser.currentScene.createNode("ROUTE");
ROUTE1546.fromField = "value_changed";
ROUTE1546.fromNode = "Armature_OI_l_tarsal_middle_phalanx_4";
ROUTE1546.toField = "rotation";
ROUTE1546.toNode = "hanim_l_tarsal_middle_phalanx_4";
browser.currentScene.children[205] = ROUTE1546;

let ROUTE1547 = browser.currentScene.createNode("ROUTE");
ROUTE1547.fromField = "fraction_changed";
ROUTE1547.fromNode = "Armature_Clock";
ROUTE1547.toField = "set_fraction";
ROUTE1547.toNode = "Armature_OI_l_tarsal_distal_phalanx_4";
browser.currentScene.children[206] = ROUTE1547;

let ROUTE1548 = browser.currentScene.createNode("ROUTE");
ROUTE1548.fromField = "value_changed";
ROUTE1548.fromNode = "Armature_OI_l_tarsal_distal_phalanx_4";
ROUTE1548.toField = "rotation";
ROUTE1548.toNode = "hanim_l_tarsal_distal_phalanx_4";
browser.currentScene.children[207] = ROUTE1548;

let ROUTE1549 = browser.currentScene.createNode("ROUTE");
ROUTE1549.fromField = "fraction_changed";
ROUTE1549.fromNode = "Armature_Clock";
ROUTE1549.toField = "set_fraction";
ROUTE1549.toNode = "Armature_OI_l_metatarsal_5";
browser.currentScene.children[208] = ROUTE1549;

let ROUTE1550 = browser.currentScene.createNode("ROUTE");
ROUTE1550.fromField = "value_changed";
ROUTE1550.fromNode = "Armature_OI_l_metatarsal_5";
ROUTE1550.toField = "rotation";
ROUTE1550.toNode = "hanim_l_metatarsal_5";
browser.currentScene.children[209] = ROUTE1550;

let ROUTE1551 = browser.currentScene.createNode("ROUTE");
ROUTE1551.fromField = "fraction_changed";
ROUTE1551.fromNode = "Armature_Clock";
ROUTE1551.toField = "set_fraction";
ROUTE1551.toNode = "Armature_OI_l_tarsal_proximal_phalanx_5";
browser.currentScene.children[210] = ROUTE1551;

let ROUTE1552 = browser.currentScene.createNode("ROUTE");
ROUTE1552.fromField = "value_changed";
ROUTE1552.fromNode = "Armature_OI_l_tarsal_proximal_phalanx_5";
ROUTE1552.toField = "rotation";
ROUTE1552.toNode = "hanim_l_tarsal_proximal_phalanx_5";
browser.currentScene.children[211] = ROUTE1552;

let ROUTE1553 = browser.currentScene.createNode("ROUTE");
ROUTE1553.fromField = "fraction_changed";
ROUTE1553.fromNode = "Armature_Clock";
ROUTE1553.toField = "set_fraction";
ROUTE1553.toNode = "Armature_OI_l_tarsal_middle_phalanx_5";
browser.currentScene.children[212] = ROUTE1553;

let ROUTE1554 = browser.currentScene.createNode("ROUTE");
ROUTE1554.fromField = "value_changed";
ROUTE1554.fromNode = "Armature_OI_l_tarsal_middle_phalanx_5";
ROUTE1554.toField = "rotation";
ROUTE1554.toNode = "hanim_l_tarsal_middle_phalanx_5";
browser.currentScene.children[213] = ROUTE1554;

let ROUTE1555 = browser.currentScene.createNode("ROUTE");
ROUTE1555.fromField = "fraction_changed";
ROUTE1555.fromNode = "Armature_Clock";
ROUTE1555.toField = "set_fraction";
ROUTE1555.toNode = "Armature_OI_l_tarsal_distal_phalanx_5";
browser.currentScene.children[214] = ROUTE1555;

let ROUTE1556 = browser.currentScene.createNode("ROUTE");
ROUTE1556.fromField = "value_changed";
ROUTE1556.fromNode = "Armature_OI_l_tarsal_distal_phalanx_5";
ROUTE1556.toField = "rotation";
ROUTE1556.toNode = "hanim_l_tarsal_distal_phalanx_5";
browser.currentScene.children[215] = ROUTE1556;

let ROUTE1557 = browser.currentScene.createNode("ROUTE");
ROUTE1557.fromField = "fraction_changed";
ROUTE1557.fromNode = "Armature_Clock";
ROUTE1557.toField = "set_fraction";
ROUTE1557.toNode = "Armature_OI_r_thigh";
browser.currentScene.children[216] = ROUTE1557;

let ROUTE1558 = browser.currentScene.createNode("ROUTE");
ROUTE1558.fromField = "value_changed";
ROUTE1558.fromNode = "Armature_OI_r_thigh";
ROUTE1558.toField = "rotation";
ROUTE1558.toNode = "hanim_r_thigh";
browser.currentScene.children[217] = ROUTE1558;

let ROUTE1559 = browser.currentScene.createNode("ROUTE");
ROUTE1559.fromField = "fraction_changed";
ROUTE1559.fromNode = "Armature_Clock";
ROUTE1559.toField = "set_fraction";
ROUTE1559.toNode = "Armature_OI_r_calf";
browser.currentScene.children[218] = ROUTE1559;

let ROUTE1560 = browser.currentScene.createNode("ROUTE");
ROUTE1560.fromField = "value_changed";
ROUTE1560.fromNode = "Armature_OI_r_calf";
ROUTE1560.toField = "rotation";
ROUTE1560.toNode = "hanim_r_calf";
browser.currentScene.children[219] = ROUTE1560;

let ROUTE1561 = browser.currentScene.createNode("ROUTE");
ROUTE1561.fromField = "fraction_changed";
ROUTE1561.fromNode = "Armature_Clock";
ROUTE1561.toField = "set_fraction";
ROUTE1561.toNode = "Armature_OI_r_talus";
browser.currentScene.children[220] = ROUTE1561;

let ROUTE1562 = browser.currentScene.createNode("ROUTE");
ROUTE1562.fromField = "value_changed";
ROUTE1562.fromNode = "Armature_OI_r_talus";
ROUTE1562.toField = "rotation";
ROUTE1562.toNode = "hanim_r_talus";
browser.currentScene.children[221] = ROUTE1562;

let ROUTE1563 = browser.currentScene.createNode("ROUTE");
ROUTE1563.fromField = "fraction_changed";
ROUTE1563.fromNode = "Armature_Clock";
ROUTE1563.toField = "set_fraction";
ROUTE1563.toNode = "Armature_OI_r_navicular";
browser.currentScene.children[222] = ROUTE1563;

let ROUTE1564 = browser.currentScene.createNode("ROUTE");
ROUTE1564.fromField = "value_changed";
ROUTE1564.fromNode = "Armature_OI_r_navicular";
ROUTE1564.toField = "rotation";
ROUTE1564.toNode = "hanim_r_navicular";
browser.currentScene.children[223] = ROUTE1564;

let ROUTE1565 = browser.currentScene.createNode("ROUTE");
ROUTE1565.fromField = "fraction_changed";
ROUTE1565.fromNode = "Armature_Clock";
ROUTE1565.toField = "set_fraction";
ROUTE1565.toNode = "Armature_OI_r_cuneiform_1";
browser.currentScene.children[224] = ROUTE1565;

let ROUTE1566 = browser.currentScene.createNode("ROUTE");
ROUTE1566.fromField = "value_changed";
ROUTE1566.fromNode = "Armature_OI_r_cuneiform_1";
ROUTE1566.toField = "rotation";
ROUTE1566.toNode = "hanim_r_cuneiform_1";
browser.currentScene.children[225] = ROUTE1566;

let ROUTE1567 = browser.currentScene.createNode("ROUTE");
ROUTE1567.fromField = "fraction_changed";
ROUTE1567.fromNode = "Armature_Clock";
ROUTE1567.toField = "set_fraction";
ROUTE1567.toNode = "Armature_OI_r_metatarsal_1";
browser.currentScene.children[226] = ROUTE1567;

let ROUTE1568 = browser.currentScene.createNode("ROUTE");
ROUTE1568.fromField = "value_changed";
ROUTE1568.fromNode = "Armature_OI_r_metatarsal_1";
ROUTE1568.toField = "rotation";
ROUTE1568.toNode = "hanim_r_metatarsal_1";
browser.currentScene.children[227] = ROUTE1568;

let ROUTE1569 = browser.currentScene.createNode("ROUTE");
ROUTE1569.fromField = "fraction_changed";
ROUTE1569.fromNode = "Armature_Clock";
ROUTE1569.toField = "set_fraction";
ROUTE1569.toNode = "Armature_OI_r_tarsal_proximal_phalanx_1";
browser.currentScene.children[228] = ROUTE1569;

let ROUTE1570 = browser.currentScene.createNode("ROUTE");
ROUTE1570.fromField = "value_changed";
ROUTE1570.fromNode = "Armature_OI_r_tarsal_proximal_phalanx_1";
ROUTE1570.toField = "rotation";
ROUTE1570.toNode = "hanim_r_tarsal_proximal_phalanx_1";
browser.currentScene.children[229] = ROUTE1570;

let ROUTE1571 = browser.currentScene.createNode("ROUTE");
ROUTE1571.fromField = "fraction_changed";
ROUTE1571.fromNode = "Armature_Clock";
ROUTE1571.toField = "set_fraction";
ROUTE1571.toNode = "Armature_OI_r_tarsal_distal_phalanx_1";
browser.currentScene.children[230] = ROUTE1571;

let ROUTE1572 = browser.currentScene.createNode("ROUTE");
ROUTE1572.fromField = "value_changed";
ROUTE1572.fromNode = "Armature_OI_r_tarsal_distal_phalanx_1";
ROUTE1572.toField = "rotation";
ROUTE1572.toNode = "hanim_r_tarsal_distal_phalanx_1";
browser.currentScene.children[231] = ROUTE1572;

let ROUTE1573 = browser.currentScene.createNode("ROUTE");
ROUTE1573.fromField = "fraction_changed";
ROUTE1573.fromNode = "Armature_Clock";
ROUTE1573.toField = "set_fraction";
ROUTE1573.toNode = "Armature_OI_r_cuneiform_2";
browser.currentScene.children[232] = ROUTE1573;

let ROUTE1574 = browser.currentScene.createNode("ROUTE");
ROUTE1574.fromField = "value_changed";
ROUTE1574.fromNode = "Armature_OI_r_cuneiform_2";
ROUTE1574.toField = "rotation";
ROUTE1574.toNode = "hanim_r_cuneiform_2";
browser.currentScene.children[233] = ROUTE1574;

let ROUTE1575 = browser.currentScene.createNode("ROUTE");
ROUTE1575.fromField = "fraction_changed";
ROUTE1575.fromNode = "Armature_Clock";
ROUTE1575.toField = "set_fraction";
ROUTE1575.toNode = "Armature_OI_r_metatarsal_2";
browser.currentScene.children[234] = ROUTE1575;

let ROUTE1576 = browser.currentScene.createNode("ROUTE");
ROUTE1576.fromField = "value_changed";
ROUTE1576.fromNode = "Armature_OI_r_metatarsal_2";
ROUTE1576.toField = "rotation";
ROUTE1576.toNode = "hanim_r_metatarsal_2";
browser.currentScene.children[235] = ROUTE1576;

let ROUTE1577 = browser.currentScene.createNode("ROUTE");
ROUTE1577.fromField = "fraction_changed";
ROUTE1577.fromNode = "Armature_Clock";
ROUTE1577.toField = "set_fraction";
ROUTE1577.toNode = "Armature_OI_r_tarsal_proximal_phalanx_2";
browser.currentScene.children[236] = ROUTE1577;

let ROUTE1578 = browser.currentScene.createNode("ROUTE");
ROUTE1578.fromField = "value_changed";
ROUTE1578.fromNode = "Armature_OI_r_tarsal_proximal_phalanx_2";
ROUTE1578.toField = "rotation";
ROUTE1578.toNode = "hanim_r_tarsal_proximal_phalanx_2";
browser.currentScene.children[237] = ROUTE1578;

let ROUTE1579 = browser.currentScene.createNode("ROUTE");
ROUTE1579.fromField = "fraction_changed";
ROUTE1579.fromNode = "Armature_Clock";
ROUTE1579.toField = "set_fraction";
ROUTE1579.toNode = "Armature_OI_r_tarsal_middle_phalanx_2";
browser.currentScene.children[238] = ROUTE1579;

let ROUTE1580 = browser.currentScene.createNode("ROUTE");
ROUTE1580.fromField = "value_changed";
ROUTE1580.fromNode = "Armature_OI_r_tarsal_middle_phalanx_2";
ROUTE1580.toField = "rotation";
ROUTE1580.toNode = "hanim_r_tarsal_middle_phalanx_2";
browser.currentScene.children[239] = ROUTE1580;

let ROUTE1581 = browser.currentScene.createNode("ROUTE");
ROUTE1581.fromField = "fraction_changed";
ROUTE1581.fromNode = "Armature_Clock";
ROUTE1581.toField = "set_fraction";
ROUTE1581.toNode = "Armature_OI_r_tarsal_distal_phalanx_2";
browser.currentScene.children[240] = ROUTE1581;

let ROUTE1582 = browser.currentScene.createNode("ROUTE");
ROUTE1582.fromField = "value_changed";
ROUTE1582.fromNode = "Armature_OI_r_tarsal_distal_phalanx_2";
ROUTE1582.toField = "rotation";
ROUTE1582.toNode = "hanim_r_tarsal_distal_phalanx_2";
browser.currentScene.children[241] = ROUTE1582;

let ROUTE1583 = browser.currentScene.createNode("ROUTE");
ROUTE1583.fromField = "fraction_changed";
ROUTE1583.fromNode = "Armature_Clock";
ROUTE1583.toField = "set_fraction";
ROUTE1583.toNode = "Armature_OI_r_cuneiform_3";
browser.currentScene.children[242] = ROUTE1583;

let ROUTE1584 = browser.currentScene.createNode("ROUTE");
ROUTE1584.fromField = "value_changed";
ROUTE1584.fromNode = "Armature_OI_r_cuneiform_3";
ROUTE1584.toField = "rotation";
ROUTE1584.toNode = "hanim_r_cuneiform_3";
browser.currentScene.children[243] = ROUTE1584;

let ROUTE1585 = browser.currentScene.createNode("ROUTE");
ROUTE1585.fromField = "fraction_changed";
ROUTE1585.fromNode = "Armature_Clock";
ROUTE1585.toField = "set_fraction";
ROUTE1585.toNode = "Armature_OI_r_metatarsal_3";
browser.currentScene.children[244] = ROUTE1585;

let ROUTE1586 = browser.currentScene.createNode("ROUTE");
ROUTE1586.fromField = "value_changed";
ROUTE1586.fromNode = "Armature_OI_r_metatarsal_3";
ROUTE1586.toField = "rotation";
ROUTE1586.toNode = "hanim_r_metatarsal_3";
browser.currentScene.children[245] = ROUTE1586;

let ROUTE1587 = browser.currentScene.createNode("ROUTE");
ROUTE1587.fromField = "fraction_changed";
ROUTE1587.fromNode = "Armature_Clock";
ROUTE1587.toField = "set_fraction";
ROUTE1587.toNode = "Armature_OI_r_tarsal_proximal_phalanx_3";
browser.currentScene.children[246] = ROUTE1587;

let ROUTE1588 = browser.currentScene.createNode("ROUTE");
ROUTE1588.fromField = "value_changed";
ROUTE1588.fromNode = "Armature_OI_r_tarsal_proximal_phalanx_3";
ROUTE1588.toField = "rotation";
ROUTE1588.toNode = "hanim_r_tarsal_proximal_phalanx_3";
browser.currentScene.children[247] = ROUTE1588;

let ROUTE1589 = browser.currentScene.createNode("ROUTE");
ROUTE1589.fromField = "fraction_changed";
ROUTE1589.fromNode = "Armature_Clock";
ROUTE1589.toField = "set_fraction";
ROUTE1589.toNode = "Armature_OI_r_tarsal_middle_phalanx_3";
browser.currentScene.children[248] = ROUTE1589;

let ROUTE1590 = browser.currentScene.createNode("ROUTE");
ROUTE1590.fromField = "value_changed";
ROUTE1590.fromNode = "Armature_OI_r_tarsal_middle_phalanx_3";
ROUTE1590.toField = "rotation";
ROUTE1590.toNode = "hanim_r_tarsal_middle_phalanx_3";
browser.currentScene.children[249] = ROUTE1590;

let ROUTE1591 = browser.currentScene.createNode("ROUTE");
ROUTE1591.fromField = "fraction_changed";
ROUTE1591.fromNode = "Armature_Clock";
ROUTE1591.toField = "set_fraction";
ROUTE1591.toNode = "Armature_OI_r_tarsal_distal_phalanx_3";
browser.currentScene.children[250] = ROUTE1591;

let ROUTE1592 = browser.currentScene.createNode("ROUTE");
ROUTE1592.fromField = "value_changed";
ROUTE1592.fromNode = "Armature_OI_r_tarsal_distal_phalanx_3";
ROUTE1592.toField = "rotation";
ROUTE1592.toNode = "hanim_r_tarsal_distal_phalanx_3";
browser.currentScene.children[251] = ROUTE1592;

let ROUTE1593 = browser.currentScene.createNode("ROUTE");
ROUTE1593.fromField = "fraction_changed";
ROUTE1593.fromNode = "Armature_Clock";
ROUTE1593.toField = "set_fraction";
ROUTE1593.toNode = "Armature_OI_r_calcaneus";
browser.currentScene.children[252] = ROUTE1593;

let ROUTE1594 = browser.currentScene.createNode("ROUTE");
ROUTE1594.fromField = "value_changed";
ROUTE1594.fromNode = "Armature_OI_r_calcaneus";
ROUTE1594.toField = "rotation";
ROUTE1594.toNode = "hanim_r_calcaneus";
browser.currentScene.children[253] = ROUTE1594;

let ROUTE1595 = browser.currentScene.createNode("ROUTE");
ROUTE1595.fromField = "fraction_changed";
ROUTE1595.fromNode = "Armature_Clock";
ROUTE1595.toField = "set_fraction";
ROUTE1595.toNode = "Armature_OI_r_cuboid";
browser.currentScene.children[254] = ROUTE1595;

let ROUTE1596 = browser.currentScene.createNode("ROUTE");
ROUTE1596.fromField = "value_changed";
ROUTE1596.fromNode = "Armature_OI_r_cuboid";
ROUTE1596.toField = "rotation";
ROUTE1596.toNode = "hanim_r_cuboid";
browser.currentScene.children[255] = ROUTE1596;

let ROUTE1597 = browser.currentScene.createNode("ROUTE");
ROUTE1597.fromField = "fraction_changed";
ROUTE1597.fromNode = "Armature_Clock";
ROUTE1597.toField = "set_fraction";
ROUTE1597.toNode = "Armature_OI_r_metatarsal_4";
browser.currentScene.children[256] = ROUTE1597;

let ROUTE1598 = browser.currentScene.createNode("ROUTE");
ROUTE1598.fromField = "value_changed";
ROUTE1598.fromNode = "Armature_OI_r_metatarsal_4";
ROUTE1598.toField = "rotation";
ROUTE1598.toNode = "hanim_r_metatarsal_4";
browser.currentScene.children[257] = ROUTE1598;

let ROUTE1599 = browser.currentScene.createNode("ROUTE");
ROUTE1599.fromField = "fraction_changed";
ROUTE1599.fromNode = "Armature_Clock";
ROUTE1599.toField = "set_fraction";
ROUTE1599.toNode = "Armature_OI_r_tarsal_proximal_phalanx_4";
browser.currentScene.children[258] = ROUTE1599;

let ROUTE1600 = browser.currentScene.createNode("ROUTE");
ROUTE1600.fromField = "value_changed";
ROUTE1600.fromNode = "Armature_OI_r_tarsal_proximal_phalanx_4";
ROUTE1600.toField = "rotation";
ROUTE1600.toNode = "hanim_r_tarsal_proximal_phalanx_4";
browser.currentScene.children[259] = ROUTE1600;

let ROUTE1601 = browser.currentScene.createNode("ROUTE");
ROUTE1601.fromField = "fraction_changed";
ROUTE1601.fromNode = "Armature_Clock";
ROUTE1601.toField = "set_fraction";
ROUTE1601.toNode = "Armature_OI_r_tarsal_middle_phalanx_4";
browser.currentScene.children[260] = ROUTE1601;

let ROUTE1602 = browser.currentScene.createNode("ROUTE");
ROUTE1602.fromField = "value_changed";
ROUTE1602.fromNode = "Armature_OI_r_tarsal_middle_phalanx_4";
ROUTE1602.toField = "rotation";
ROUTE1602.toNode = "hanim_r_tarsal_middle_phalanx_4";
browser.currentScene.children[261] = ROUTE1602;

let ROUTE1603 = browser.currentScene.createNode("ROUTE");
ROUTE1603.fromField = "fraction_changed";
ROUTE1603.fromNode = "Armature_Clock";
ROUTE1603.toField = "set_fraction";
ROUTE1603.toNode = "Armature_OI_r_tarsal_distal_phalanx_4";
browser.currentScene.children[262] = ROUTE1603;

let ROUTE1604 = browser.currentScene.createNode("ROUTE");
ROUTE1604.fromField = "value_changed";
ROUTE1604.fromNode = "Armature_OI_r_tarsal_distal_phalanx_4";
ROUTE1604.toField = "rotation";
ROUTE1604.toNode = "hanim_r_tarsal_distal_phalanx_4";
browser.currentScene.children[263] = ROUTE1604;

let ROUTE1605 = browser.currentScene.createNode("ROUTE");
ROUTE1605.fromField = "fraction_changed";
ROUTE1605.fromNode = "Armature_Clock";
ROUTE1605.toField = "set_fraction";
ROUTE1605.toNode = "Armature_OI_r_metatarsal_5";
browser.currentScene.children[264] = ROUTE1605;

let ROUTE1606 = browser.currentScene.createNode("ROUTE");
ROUTE1606.fromField = "value_changed";
ROUTE1606.fromNode = "Armature_OI_r_metatarsal_5";
ROUTE1606.toField = "rotation";
ROUTE1606.toNode = "hanim_r_metatarsal_5";
browser.currentScene.children[265] = ROUTE1606;

let ROUTE1607 = browser.currentScene.createNode("ROUTE");
ROUTE1607.fromField = "fraction_changed";
ROUTE1607.fromNode = "Armature_Clock";
ROUTE1607.toField = "set_fraction";
ROUTE1607.toNode = "Armature_OI_r_tarsal_proximal_phalanx_5";
browser.currentScene.children[266] = ROUTE1607;

let ROUTE1608 = browser.currentScene.createNode("ROUTE");
ROUTE1608.fromField = "value_changed";
ROUTE1608.fromNode = "Armature_OI_r_tarsal_proximal_phalanx_5";
ROUTE1608.toField = "rotation";
ROUTE1608.toNode = "hanim_r_tarsal_proximal_phalanx_5";
browser.currentScene.children[267] = ROUTE1608;

let ROUTE1609 = browser.currentScene.createNode("ROUTE");
ROUTE1609.fromField = "fraction_changed";
ROUTE1609.fromNode = "Armature_Clock";
ROUTE1609.toField = "set_fraction";
ROUTE1609.toNode = "Armature_OI_r_tarsal_middle_phalanx_5";
browser.currentScene.children[268] = ROUTE1609;

let ROUTE1610 = browser.currentScene.createNode("ROUTE");
ROUTE1610.fromField = "value_changed";
ROUTE1610.fromNode = "Armature_OI_r_tarsal_middle_phalanx_5";
ROUTE1610.toField = "rotation";
ROUTE1610.toNode = "hanim_r_tarsal_middle_phalanx_5";
browser.currentScene.children[269] = ROUTE1610;

let ROUTE1611 = browser.currentScene.createNode("ROUTE");
ROUTE1611.fromField = "fraction_changed";
ROUTE1611.fromNode = "Armature_Clock";
ROUTE1611.toField = "set_fraction";
ROUTE1611.toNode = "Armature_OI_r_tarsal_distal_phalanx_5";
browser.currentScene.children[270] = ROUTE1611;

let ROUTE1612 = browser.currentScene.createNode("ROUTE");
ROUTE1612.fromField = "value_changed";
ROUTE1612.fromNode = "Armature_OI_r_tarsal_distal_phalanx_5";
ROUTE1612.toField = "rotation";
ROUTE1612.toNode = "hanim_r_tarsal_distal_phalanx_5";
browser.currentScene.children[271] = ROUTE1612;

let ROUTE1613 = browser.currentScene.createNode("ROUTE");
ROUTE1613.fromField = "fraction_changed";
ROUTE1613.fromNode = "Armature_Clock";
ROUTE1613.toField = "set_fraction";
ROUTE1613.toNode = "Armature_OI_l5";
browser.currentScene.children[272] = ROUTE1613;

let ROUTE1614 = browser.currentScene.createNode("ROUTE");
ROUTE1614.fromField = "value_changed";
ROUTE1614.fromNode = "Armature_OI_l5";
ROUTE1614.toField = "rotation";
ROUTE1614.toNode = "hanim_l5";
browser.currentScene.children[273] = ROUTE1614;

let ROUTE1615 = browser.currentScene.createNode("ROUTE");
ROUTE1615.fromField = "fraction_changed";
ROUTE1615.fromNode = "Armature_Clock";
ROUTE1615.toField = "set_fraction";
ROUTE1615.toNode = "Armature_OI_l4";
browser.currentScene.children[274] = ROUTE1615;

let ROUTE1616 = browser.currentScene.createNode("ROUTE");
ROUTE1616.fromField = "value_changed";
ROUTE1616.fromNode = "Armature_OI_l4";
ROUTE1616.toField = "rotation";
ROUTE1616.toNode = "hanim_l4";
browser.currentScene.children[275] = ROUTE1616;

let ROUTE1617 = browser.currentScene.createNode("ROUTE");
ROUTE1617.fromField = "fraction_changed";
ROUTE1617.fromNode = "Armature_Clock";
ROUTE1617.toField = "set_fraction";
ROUTE1617.toNode = "Armature_OI_l3";
browser.currentScene.children[276] = ROUTE1617;

let ROUTE1618 = browser.currentScene.createNode("ROUTE");
ROUTE1618.fromField = "value_changed";
ROUTE1618.fromNode = "Armature_OI_l3";
ROUTE1618.toField = "rotation";
ROUTE1618.toNode = "hanim_l3";
browser.currentScene.children[277] = ROUTE1618;

let ROUTE1619 = browser.currentScene.createNode("ROUTE");
ROUTE1619.fromField = "fraction_changed";
ROUTE1619.fromNode = "Armature_Clock";
ROUTE1619.toField = "set_fraction";
ROUTE1619.toNode = "Armature_OI_l2";
browser.currentScene.children[278] = ROUTE1619;

let ROUTE1620 = browser.currentScene.createNode("ROUTE");
ROUTE1620.fromField = "value_changed";
ROUTE1620.fromNode = "Armature_OI_l2";
ROUTE1620.toField = "rotation";
ROUTE1620.toNode = "hanim_l2";
browser.currentScene.children[279] = ROUTE1620;

let ROUTE1621 = browser.currentScene.createNode("ROUTE");
ROUTE1621.fromField = "fraction_changed";
ROUTE1621.fromNode = "Armature_Clock";
ROUTE1621.toField = "set_fraction";
ROUTE1621.toNode = "Armature_OI_l1";
browser.currentScene.children[280] = ROUTE1621;

let ROUTE1622 = browser.currentScene.createNode("ROUTE");
ROUTE1622.fromField = "value_changed";
ROUTE1622.fromNode = "Armature_OI_l1";
ROUTE1622.toField = "rotation";
ROUTE1622.toNode = "hanim_l1";
browser.currentScene.children[281] = ROUTE1622;

let ROUTE1623 = browser.currentScene.createNode("ROUTE");
ROUTE1623.fromField = "fraction_changed";
ROUTE1623.fromNode = "Armature_Clock";
ROUTE1623.toField = "set_fraction";
ROUTE1623.toNode = "Armature_OI_t12";
browser.currentScene.children[282] = ROUTE1623;

let ROUTE1624 = browser.currentScene.createNode("ROUTE");
ROUTE1624.fromField = "value_changed";
ROUTE1624.fromNode = "Armature_OI_t12";
ROUTE1624.toField = "rotation";
ROUTE1624.toNode = "hanim_t12";
browser.currentScene.children[283] = ROUTE1624;

let ROUTE1625 = browser.currentScene.createNode("ROUTE");
ROUTE1625.fromField = "fraction_changed";
ROUTE1625.fromNode = "Armature_Clock";
ROUTE1625.toField = "set_fraction";
ROUTE1625.toNode = "Armature_OI_t11";
browser.currentScene.children[284] = ROUTE1625;

let ROUTE1626 = browser.currentScene.createNode("ROUTE");
ROUTE1626.fromField = "value_changed";
ROUTE1626.fromNode = "Armature_OI_t11";
ROUTE1626.toField = "rotation";
ROUTE1626.toNode = "hanim_t11";
browser.currentScene.children[285] = ROUTE1626;

let ROUTE1627 = browser.currentScene.createNode("ROUTE");
ROUTE1627.fromField = "fraction_changed";
ROUTE1627.fromNode = "Armature_Clock";
ROUTE1627.toField = "set_fraction";
ROUTE1627.toNode = "Armature_OI_t10";
browser.currentScene.children[286] = ROUTE1627;

let ROUTE1628 = browser.currentScene.createNode("ROUTE");
ROUTE1628.fromField = "value_changed";
ROUTE1628.fromNode = "Armature_OI_t10";
ROUTE1628.toField = "rotation";
ROUTE1628.toNode = "hanim_t10";
browser.currentScene.children[287] = ROUTE1628;

let ROUTE1629 = browser.currentScene.createNode("ROUTE");
ROUTE1629.fromField = "fraction_changed";
ROUTE1629.fromNode = "Armature_Clock";
ROUTE1629.toField = "set_fraction";
ROUTE1629.toNode = "Armature_OI_t9";
browser.currentScene.children[288] = ROUTE1629;

let ROUTE1630 = browser.currentScene.createNode("ROUTE");
ROUTE1630.fromField = "value_changed";
ROUTE1630.fromNode = "Armature_OI_t9";
ROUTE1630.toField = "rotation";
ROUTE1630.toNode = "hanim_t9";
browser.currentScene.children[289] = ROUTE1630;

let ROUTE1631 = browser.currentScene.createNode("ROUTE");
ROUTE1631.fromField = "fraction_changed";
ROUTE1631.fromNode = "Armature_Clock";
ROUTE1631.toField = "set_fraction";
ROUTE1631.toNode = "Armature_OI_t8";
browser.currentScene.children[290] = ROUTE1631;

let ROUTE1632 = browser.currentScene.createNode("ROUTE");
ROUTE1632.fromField = "value_changed";
ROUTE1632.fromNode = "Armature_OI_t8";
ROUTE1632.toField = "rotation";
ROUTE1632.toNode = "hanim_t8";
browser.currentScene.children[291] = ROUTE1632;

let ROUTE1633 = browser.currentScene.createNode("ROUTE");
ROUTE1633.fromField = "fraction_changed";
ROUTE1633.fromNode = "Armature_Clock";
ROUTE1633.toField = "set_fraction";
ROUTE1633.toNode = "Armature_OI_t7";
browser.currentScene.children[292] = ROUTE1633;

let ROUTE1634 = browser.currentScene.createNode("ROUTE");
ROUTE1634.fromField = "value_changed";
ROUTE1634.fromNode = "Armature_OI_t7";
ROUTE1634.toField = "rotation";
ROUTE1634.toNode = "hanim_t7";
browser.currentScene.children[293] = ROUTE1634;

let ROUTE1635 = browser.currentScene.createNode("ROUTE");
ROUTE1635.fromField = "fraction_changed";
ROUTE1635.fromNode = "Armature_Clock";
ROUTE1635.toField = "set_fraction";
ROUTE1635.toNode = "Armature_OI_t6";
browser.currentScene.children[294] = ROUTE1635;

let ROUTE1636 = browser.currentScene.createNode("ROUTE");
ROUTE1636.fromField = "value_changed";
ROUTE1636.fromNode = "Armature_OI_t6";
ROUTE1636.toField = "rotation";
ROUTE1636.toNode = "hanim_t6";
browser.currentScene.children[295] = ROUTE1636;

let ROUTE1637 = browser.currentScene.createNode("ROUTE");
ROUTE1637.fromField = "fraction_changed";
ROUTE1637.fromNode = "Armature_Clock";
ROUTE1637.toField = "set_fraction";
ROUTE1637.toNode = "Armature_OI_t5";
browser.currentScene.children[296] = ROUTE1637;

let ROUTE1638 = browser.currentScene.createNode("ROUTE");
ROUTE1638.fromField = "value_changed";
ROUTE1638.fromNode = "Armature_OI_t5";
ROUTE1638.toField = "rotation";
ROUTE1638.toNode = "hanim_t5";
browser.currentScene.children[297] = ROUTE1638;

let ROUTE1639 = browser.currentScene.createNode("ROUTE");
ROUTE1639.fromField = "fraction_changed";
ROUTE1639.fromNode = "Armature_Clock";
ROUTE1639.toField = "set_fraction";
ROUTE1639.toNode = "Armature_OI_t4";
browser.currentScene.children[298] = ROUTE1639;

let ROUTE1640 = browser.currentScene.createNode("ROUTE");
ROUTE1640.fromField = "value_changed";
ROUTE1640.fromNode = "Armature_OI_t4";
ROUTE1640.toField = "rotation";
ROUTE1640.toNode = "hanim_t4";
browser.currentScene.children[299] = ROUTE1640;

let ROUTE1641 = browser.currentScene.createNode("ROUTE");
ROUTE1641.fromField = "fraction_changed";
ROUTE1641.fromNode = "Armature_Clock";
ROUTE1641.toField = "set_fraction";
ROUTE1641.toNode = "Armature_OI_t3";
browser.currentScene.children[300] = ROUTE1641;

let ROUTE1642 = browser.currentScene.createNode("ROUTE");
ROUTE1642.fromField = "value_changed";
ROUTE1642.fromNode = "Armature_OI_t3";
ROUTE1642.toField = "rotation";
ROUTE1642.toNode = "hanim_t3";
browser.currentScene.children[301] = ROUTE1642;

let ROUTE1643 = browser.currentScene.createNode("ROUTE");
ROUTE1643.fromField = "fraction_changed";
ROUTE1643.fromNode = "Armature_Clock";
ROUTE1643.toField = "set_fraction";
ROUTE1643.toNode = "Armature_OI_t2";
browser.currentScene.children[302] = ROUTE1643;

let ROUTE1644 = browser.currentScene.createNode("ROUTE");
ROUTE1644.fromField = "value_changed";
ROUTE1644.fromNode = "Armature_OI_t2";
ROUTE1644.toField = "rotation";
ROUTE1644.toNode = "hanim_t2";
browser.currentScene.children[303] = ROUTE1644;

let ROUTE1645 = browser.currentScene.createNode("ROUTE");
ROUTE1645.fromField = "fraction_changed";
ROUTE1645.fromNode = "Armature_Clock";
ROUTE1645.toField = "set_fraction";
ROUTE1645.toNode = "Armature_OI_t1";
browser.currentScene.children[304] = ROUTE1645;

let ROUTE1646 = browser.currentScene.createNode("ROUTE");
ROUTE1646.fromField = "value_changed";
ROUTE1646.fromNode = "Armature_OI_t1";
ROUTE1646.toField = "rotation";
ROUTE1646.toNode = "hanim_t1";
browser.currentScene.children[305] = ROUTE1646;

let ROUTE1647 = browser.currentScene.createNode("ROUTE");
ROUTE1647.fromField = "fraction_changed";
ROUTE1647.fromNode = "Armature_Clock";
ROUTE1647.toField = "set_fraction";
ROUTE1647.toNode = "Armature_OI_c7";
browser.currentScene.children[306] = ROUTE1647;

let ROUTE1648 = browser.currentScene.createNode("ROUTE");
ROUTE1648.fromField = "value_changed";
ROUTE1648.fromNode = "Armature_OI_c7";
ROUTE1648.toField = "rotation";
ROUTE1648.toNode = "hanim_c7";
browser.currentScene.children[307] = ROUTE1648;

let ROUTE1649 = browser.currentScene.createNode("ROUTE");
ROUTE1649.fromField = "fraction_changed";
ROUTE1649.fromNode = "Armature_Clock";
ROUTE1649.toField = "set_fraction";
ROUTE1649.toNode = "Armature_OI_c6";
browser.currentScene.children[308] = ROUTE1649;

let ROUTE1650 = browser.currentScene.createNode("ROUTE");
ROUTE1650.fromField = "value_changed";
ROUTE1650.fromNode = "Armature_OI_c6";
ROUTE1650.toField = "rotation";
ROUTE1650.toNode = "hanim_c6";
browser.currentScene.children[309] = ROUTE1650;

let ROUTE1651 = browser.currentScene.createNode("ROUTE");
ROUTE1651.fromField = "fraction_changed";
ROUTE1651.fromNode = "Armature_Clock";
ROUTE1651.toField = "set_fraction";
ROUTE1651.toNode = "Armature_OI_c5";
browser.currentScene.children[310] = ROUTE1651;

let ROUTE1652 = browser.currentScene.createNode("ROUTE");
ROUTE1652.fromField = "value_changed";
ROUTE1652.fromNode = "Armature_OI_c5";
ROUTE1652.toField = "rotation";
ROUTE1652.toNode = "hanim_c5";
browser.currentScene.children[311] = ROUTE1652;

let ROUTE1653 = browser.currentScene.createNode("ROUTE");
ROUTE1653.fromField = "fraction_changed";
ROUTE1653.fromNode = "Armature_Clock";
ROUTE1653.toField = "set_fraction";
ROUTE1653.toNode = "Armature_OI_c4";
browser.currentScene.children[312] = ROUTE1653;

let ROUTE1654 = browser.currentScene.createNode("ROUTE");
ROUTE1654.fromField = "value_changed";
ROUTE1654.fromNode = "Armature_OI_c4";
ROUTE1654.toField = "rotation";
ROUTE1654.toNode = "hanim_c4";
browser.currentScene.children[313] = ROUTE1654;

let ROUTE1655 = browser.currentScene.createNode("ROUTE");
ROUTE1655.fromField = "fraction_changed";
ROUTE1655.fromNode = "Armature_Clock";
ROUTE1655.toField = "set_fraction";
ROUTE1655.toNode = "Armature_OI_c3";
browser.currentScene.children[314] = ROUTE1655;

let ROUTE1656 = browser.currentScene.createNode("ROUTE");
ROUTE1656.fromField = "value_changed";
ROUTE1656.fromNode = "Armature_OI_c3";
ROUTE1656.toField = "rotation";
ROUTE1656.toNode = "hanim_c3";
browser.currentScene.children[315] = ROUTE1656;

let ROUTE1657 = browser.currentScene.createNode("ROUTE");
ROUTE1657.fromField = "fraction_changed";
ROUTE1657.fromNode = "Armature_Clock";
ROUTE1657.toField = "set_fraction";
ROUTE1657.toNode = "Armature_OI_c2";
browser.currentScene.children[316] = ROUTE1657;

let ROUTE1658 = browser.currentScene.createNode("ROUTE");
ROUTE1658.fromField = "value_changed";
ROUTE1658.fromNode = "Armature_OI_c2";
ROUTE1658.toField = "rotation";
ROUTE1658.toNode = "hanim_c2";
browser.currentScene.children[317] = ROUTE1658;

let ROUTE1659 = browser.currentScene.createNode("ROUTE");
ROUTE1659.fromField = "fraction_changed";
ROUTE1659.fromNode = "Armature_Clock";
ROUTE1659.toField = "set_fraction";
ROUTE1659.toNode = "Armature_OI_c1";
browser.currentScene.children[318] = ROUTE1659;

let ROUTE1660 = browser.currentScene.createNode("ROUTE");
ROUTE1660.fromField = "value_changed";
ROUTE1660.fromNode = "Armature_OI_c1";
ROUTE1660.toField = "rotation";
ROUTE1660.toNode = "hanim_c1";
browser.currentScene.children[319] = ROUTE1660;

let ROUTE1661 = browser.currentScene.createNode("ROUTE");
ROUTE1661.fromField = "fraction_changed";
ROUTE1661.fromNode = "Armature_Clock";
ROUTE1661.toField = "set_fraction";
ROUTE1661.toNode = "Armature_OI_skull";
browser.currentScene.children[320] = ROUTE1661;

let ROUTE1662 = browser.currentScene.createNode("ROUTE");
ROUTE1662.fromField = "value_changed";
ROUTE1662.fromNode = "Armature_OI_skull";
ROUTE1662.toField = "rotation";
ROUTE1662.toNode = "hanim_skull";
browser.currentScene.children[321] = ROUTE1662;

let ROUTE1663 = browser.currentScene.createNode("ROUTE");
ROUTE1663.fromField = "fraction_changed";
ROUTE1663.fromNode = "Armature_Clock";
ROUTE1663.toField = "set_fraction";
ROUTE1663.toNode = "Armature_OI_l_eyelid";
browser.currentScene.children[322] = ROUTE1663;

let ROUTE1664 = browser.currentScene.createNode("ROUTE");
ROUTE1664.fromField = "value_changed";
ROUTE1664.fromNode = "Armature_OI_l_eyelid";
ROUTE1664.toField = "rotation";
ROUTE1664.toNode = "hanim_l_eyelid";
browser.currentScene.children[323] = ROUTE1664;

let ROUTE1665 = browser.currentScene.createNode("ROUTE");
ROUTE1665.fromField = "fraction_changed";
ROUTE1665.fromNode = "Armature_Clock";
ROUTE1665.toField = "set_fraction";
ROUTE1665.toNode = "Armature_OI_r_eyelid";
browser.currentScene.children[324] = ROUTE1665;

let ROUTE1666 = browser.currentScene.createNode("ROUTE");
ROUTE1666.fromField = "value_changed";
ROUTE1666.fromNode = "Armature_OI_r_eyelid";
ROUTE1666.toField = "rotation";
ROUTE1666.toNode = "hanim_r_eyelid";
browser.currentScene.children[325] = ROUTE1666;

let ROUTE1667 = browser.currentScene.createNode("ROUTE");
ROUTE1667.fromField = "fraction_changed";
ROUTE1667.fromNode = "Armature_Clock";
ROUTE1667.toField = "set_fraction";
ROUTE1667.toNode = "Armature_OI_l_eyeball";
browser.currentScene.children[326] = ROUTE1667;

let ROUTE1668 = browser.currentScene.createNode("ROUTE");
ROUTE1668.fromField = "value_changed";
ROUTE1668.fromNode = "Armature_OI_l_eyeball";
ROUTE1668.toField = "rotation";
ROUTE1668.toNode = "hanim_l_eyeball";
browser.currentScene.children[327] = ROUTE1668;

let ROUTE1669 = browser.currentScene.createNode("ROUTE");
ROUTE1669.fromField = "fraction_changed";
ROUTE1669.fromNode = "Armature_Clock";
ROUTE1669.toField = "set_fraction";
ROUTE1669.toNode = "Armature_OI_r_eyeball";
browser.currentScene.children[328] = ROUTE1669;

let ROUTE1670 = browser.currentScene.createNode("ROUTE");
ROUTE1670.fromField = "value_changed";
ROUTE1670.fromNode = "Armature_OI_r_eyeball";
ROUTE1670.toField = "rotation";
ROUTE1670.toNode = "hanim_r_eyeball";
browser.currentScene.children[329] = ROUTE1670;

let ROUTE1671 = browser.currentScene.createNode("ROUTE");
ROUTE1671.fromField = "fraction_changed";
ROUTE1671.fromNode = "Armature_Clock";
ROUTE1671.toField = "set_fraction";
ROUTE1671.toNode = "Armature_OI_l_eyebrow";
browser.currentScene.children[330] = ROUTE1671;

let ROUTE1672 = browser.currentScene.createNode("ROUTE");
ROUTE1672.fromField = "value_changed";
ROUTE1672.fromNode = "Armature_OI_l_eyebrow";
ROUTE1672.toField = "rotation";
ROUTE1672.toNode = "hanim_l_eyebrow";
browser.currentScene.children[331] = ROUTE1672;

let ROUTE1673 = browser.currentScene.createNode("ROUTE");
ROUTE1673.fromField = "fraction_changed";
ROUTE1673.fromNode = "Armature_Clock";
ROUTE1673.toField = "set_fraction";
ROUTE1673.toNode = "Armature_OI_r_eyebrow";
browser.currentScene.children[332] = ROUTE1673;

let ROUTE1674 = browser.currentScene.createNode("ROUTE");
ROUTE1674.fromField = "value_changed";
ROUTE1674.fromNode = "Armature_OI_r_eyebrow";
ROUTE1674.toField = "rotation";
ROUTE1674.toNode = "hanim_r_eyebrow";
browser.currentScene.children[333] = ROUTE1674;

let ROUTE1675 = browser.currentScene.createNode("ROUTE");
ROUTE1675.fromField = "fraction_changed";
ROUTE1675.fromNode = "Armature_Clock";
ROUTE1675.toField = "set_fraction";
ROUTE1675.toNode = "Armature_OI_jaw";
browser.currentScene.children[334] = ROUTE1675;

let ROUTE1676 = browser.currentScene.createNode("ROUTE");
ROUTE1676.fromField = "value_changed";
ROUTE1676.fromNode = "Armature_OI_jaw";
ROUTE1676.toField = "rotation";
ROUTE1676.toNode = "hanim_jaw";
browser.currentScene.children[335] = ROUTE1676;

let ROUTE1677 = browser.currentScene.createNode("ROUTE");
ROUTE1677.fromField = "fraction_changed";
ROUTE1677.fromNode = "Armature_Clock";
ROUTE1677.toField = "set_fraction";
ROUTE1677.toNode = "Armature_OI_l_clavicle";
browser.currentScene.children[336] = ROUTE1677;

let ROUTE1678 = browser.currentScene.createNode("ROUTE");
ROUTE1678.fromField = "value_changed";
ROUTE1678.fromNode = "Armature_OI_l_clavicle";
ROUTE1678.toField = "rotation";
ROUTE1678.toNode = "hanim_l_clavicle";
browser.currentScene.children[337] = ROUTE1678;

let ROUTE1679 = browser.currentScene.createNode("ROUTE");
ROUTE1679.fromField = "fraction_changed";
ROUTE1679.fromNode = "Armature_Clock";
ROUTE1679.toField = "set_fraction";
ROUTE1679.toNode = "Armature_OI_l_scapula";
browser.currentScene.children[338] = ROUTE1679;

let ROUTE1680 = browser.currentScene.createNode("ROUTE");
ROUTE1680.fromField = "value_changed";
ROUTE1680.fromNode = "Armature_OI_l_scapula";
ROUTE1680.toField = "rotation";
ROUTE1680.toNode = "hanim_l_scapula";
browser.currentScene.children[339] = ROUTE1680;

let ROUTE1681 = browser.currentScene.createNode("ROUTE");
ROUTE1681.fromField = "fraction_changed";
ROUTE1681.fromNode = "Armature_Clock";
ROUTE1681.toField = "set_fraction";
ROUTE1681.toNode = "Armature_OI_l_upperarm";
browser.currentScene.children[340] = ROUTE1681;

let ROUTE1682 = browser.currentScene.createNode("ROUTE");
ROUTE1682.fromField = "value_changed";
ROUTE1682.fromNode = "Armature_OI_l_upperarm";
ROUTE1682.toField = "rotation";
ROUTE1682.toNode = "hanim_l_upperarm";
browser.currentScene.children[341] = ROUTE1682;

let ROUTE1683 = browser.currentScene.createNode("ROUTE");
ROUTE1683.fromField = "fraction_changed";
ROUTE1683.fromNode = "Armature_Clock";
ROUTE1683.toField = "set_fraction";
ROUTE1683.toNode = "Armature_OI_l_forearm";
browser.currentScene.children[342] = ROUTE1683;

let ROUTE1684 = browser.currentScene.createNode("ROUTE");
ROUTE1684.fromField = "value_changed";
ROUTE1684.fromNode = "Armature_OI_l_forearm";
ROUTE1684.toField = "rotation";
ROUTE1684.toNode = "hanim_l_forearm";
browser.currentScene.children[343] = ROUTE1684;

let ROUTE1685 = browser.currentScene.createNode("ROUTE");
ROUTE1685.fromField = "fraction_changed";
ROUTE1685.fromNode = "Armature_Clock";
ROUTE1685.toField = "set_fraction";
ROUTE1685.toNode = "Armature_OI_l_carpal";
browser.currentScene.children[344] = ROUTE1685;

let ROUTE1686 = browser.currentScene.createNode("ROUTE");
ROUTE1686.fromField = "value_changed";
ROUTE1686.fromNode = "Armature_OI_l_carpal";
ROUTE1686.toField = "rotation";
ROUTE1686.toNode = "hanim_l_carpal";
browser.currentScene.children[345] = ROUTE1686;

let ROUTE1687 = browser.currentScene.createNode("ROUTE");
ROUTE1687.fromField = "fraction_changed";
ROUTE1687.fromNode = "Armature_Clock";
ROUTE1687.toField = "set_fraction";
ROUTE1687.toNode = "Armature_OI_l_trapezium";
browser.currentScene.children[346] = ROUTE1687;

let ROUTE1688 = browser.currentScene.createNode("ROUTE");
ROUTE1688.fromField = "value_changed";
ROUTE1688.fromNode = "Armature_OI_l_trapezium";
ROUTE1688.toField = "rotation";
ROUTE1688.toNode = "hanim_l_trapezium";
browser.currentScene.children[347] = ROUTE1688;

let ROUTE1689 = browser.currentScene.createNode("ROUTE");
ROUTE1689.fromField = "fraction_changed";
ROUTE1689.fromNode = "Armature_Clock";
ROUTE1689.toField = "set_fraction";
ROUTE1689.toNode = "Armature_OI_l_metacarpal_1";
browser.currentScene.children[348] = ROUTE1689;

let ROUTE1690 = browser.currentScene.createNode("ROUTE");
ROUTE1690.fromField = "value_changed";
ROUTE1690.fromNode = "Armature_OI_l_metacarpal_1";
ROUTE1690.toField = "rotation";
ROUTE1690.toNode = "hanim_l_metacarpal_1";
browser.currentScene.children[349] = ROUTE1690;

let ROUTE1691 = browser.currentScene.createNode("ROUTE");
ROUTE1691.fromField = "fraction_changed";
ROUTE1691.fromNode = "Armature_Clock";
ROUTE1691.toField = "set_fraction";
ROUTE1691.toNode = "Armature_OI_l_carpal_proximal_phalanx_1";
browser.currentScene.children[350] = ROUTE1691;

let ROUTE1692 = browser.currentScene.createNode("ROUTE");
ROUTE1692.fromField = "value_changed";
ROUTE1692.fromNode = "Armature_OI_l_carpal_proximal_phalanx_1";
ROUTE1692.toField = "rotation";
ROUTE1692.toNode = "hanim_l_carpal_proximal_phalanx_1";
browser.currentScene.children[351] = ROUTE1692;

let ROUTE1693 = browser.currentScene.createNode("ROUTE");
ROUTE1693.fromField = "fraction_changed";
ROUTE1693.fromNode = "Armature_Clock";
ROUTE1693.toField = "set_fraction";
ROUTE1693.toNode = "Armature_OI_l_carpal_distal_phalanx_1";
browser.currentScene.children[352] = ROUTE1693;

let ROUTE1694 = browser.currentScene.createNode("ROUTE");
ROUTE1694.fromField = "value_changed";
ROUTE1694.fromNode = "Armature_OI_l_carpal_distal_phalanx_1";
ROUTE1694.toField = "rotation";
ROUTE1694.toNode = "hanim_l_carpal_distal_phalanx_1";
browser.currentScene.children[353] = ROUTE1694;

let ROUTE1695 = browser.currentScene.createNode("ROUTE");
ROUTE1695.fromField = "fraction_changed";
ROUTE1695.fromNode = "Armature_Clock";
ROUTE1695.toField = "set_fraction";
ROUTE1695.toNode = "Armature_OI_l_trapezoid";
browser.currentScene.children[354] = ROUTE1695;

let ROUTE1696 = browser.currentScene.createNode("ROUTE");
ROUTE1696.fromField = "value_changed";
ROUTE1696.fromNode = "Armature_OI_l_trapezoid";
ROUTE1696.toField = "rotation";
ROUTE1696.toNode = "hanim_l_trapezoid";
browser.currentScene.children[355] = ROUTE1696;

let ROUTE1697 = browser.currentScene.createNode("ROUTE");
ROUTE1697.fromField = "fraction_changed";
ROUTE1697.fromNode = "Armature_Clock";
ROUTE1697.toField = "set_fraction";
ROUTE1697.toNode = "Armature_OI_l_metacarpal_2";
browser.currentScene.children[356] = ROUTE1697;

let ROUTE1698 = browser.currentScene.createNode("ROUTE");
ROUTE1698.fromField = "value_changed";
ROUTE1698.fromNode = "Armature_OI_l_metacarpal_2";
ROUTE1698.toField = "rotation";
ROUTE1698.toNode = "hanim_l_metacarpal_2";
browser.currentScene.children[357] = ROUTE1698;

let ROUTE1699 = browser.currentScene.createNode("ROUTE");
ROUTE1699.fromField = "fraction_changed";
ROUTE1699.fromNode = "Armature_Clock";
ROUTE1699.toField = "set_fraction";
ROUTE1699.toNode = "Armature_OI_l_carpal_proximal_phalanx_2";
browser.currentScene.children[358] = ROUTE1699;

let ROUTE1700 = browser.currentScene.createNode("ROUTE");
ROUTE1700.fromField = "value_changed";
ROUTE1700.fromNode = "Armature_OI_l_carpal_proximal_phalanx_2";
ROUTE1700.toField = "rotation";
ROUTE1700.toNode = "hanim_l_carpal_proximal_phalanx_2";
browser.currentScene.children[359] = ROUTE1700;

let ROUTE1701 = browser.currentScene.createNode("ROUTE");
ROUTE1701.fromField = "fraction_changed";
ROUTE1701.fromNode = "Armature_Clock";
ROUTE1701.toField = "set_fraction";
ROUTE1701.toNode = "Armature_OI_l_carpal_middle_phalanx_2";
browser.currentScene.children[360] = ROUTE1701;

let ROUTE1702 = browser.currentScene.createNode("ROUTE");
ROUTE1702.fromField = "value_changed";
ROUTE1702.fromNode = "Armature_OI_l_carpal_middle_phalanx_2";
ROUTE1702.toField = "rotation";
ROUTE1702.toNode = "hanim_l_carpal_middle_phalanx_2";
browser.currentScene.children[361] = ROUTE1702;

let ROUTE1703 = browser.currentScene.createNode("ROUTE");
ROUTE1703.fromField = "fraction_changed";
ROUTE1703.fromNode = "Armature_Clock";
ROUTE1703.toField = "set_fraction";
ROUTE1703.toNode = "Armature_OI_l_carpal_distal_phalanx_2";
browser.currentScene.children[362] = ROUTE1703;

let ROUTE1704 = browser.currentScene.createNode("ROUTE");
ROUTE1704.fromField = "value_changed";
ROUTE1704.fromNode = "Armature_OI_l_carpal_distal_phalanx_2";
ROUTE1704.toField = "rotation";
ROUTE1704.toNode = "hanim_l_carpal_distal_phalanx_2";
browser.currentScene.children[363] = ROUTE1704;

let ROUTE1705 = browser.currentScene.createNode("ROUTE");
ROUTE1705.fromField = "fraction_changed";
ROUTE1705.fromNode = "Armature_Clock";
ROUTE1705.toField = "set_fraction";
ROUTE1705.toNode = "Armature_OI_l_capitate";
browser.currentScene.children[364] = ROUTE1705;

let ROUTE1706 = browser.currentScene.createNode("ROUTE");
ROUTE1706.fromField = "value_changed";
ROUTE1706.fromNode = "Armature_OI_l_capitate";
ROUTE1706.toField = "rotation";
ROUTE1706.toNode = "hanim_l_capitate";
browser.currentScene.children[365] = ROUTE1706;

let ROUTE1707 = browser.currentScene.createNode("ROUTE");
ROUTE1707.fromField = "fraction_changed";
ROUTE1707.fromNode = "Armature_Clock";
ROUTE1707.toField = "set_fraction";
ROUTE1707.toNode = "Armature_OI_l_metacarpal_3";
browser.currentScene.children[366] = ROUTE1707;

let ROUTE1708 = browser.currentScene.createNode("ROUTE");
ROUTE1708.fromField = "value_changed";
ROUTE1708.fromNode = "Armature_OI_l_metacarpal_3";
ROUTE1708.toField = "rotation";
ROUTE1708.toNode = "hanim_l_metacarpal_3";
browser.currentScene.children[367] = ROUTE1708;

let ROUTE1709 = browser.currentScene.createNode("ROUTE");
ROUTE1709.fromField = "fraction_changed";
ROUTE1709.fromNode = "Armature_Clock";
ROUTE1709.toField = "set_fraction";
ROUTE1709.toNode = "Armature_OI_l_carpal_proximal_phalanx_3";
browser.currentScene.children[368] = ROUTE1709;

let ROUTE1710 = browser.currentScene.createNode("ROUTE");
ROUTE1710.fromField = "value_changed";
ROUTE1710.fromNode = "Armature_OI_l_carpal_proximal_phalanx_3";
ROUTE1710.toField = "rotation";
ROUTE1710.toNode = "hanim_l_carpal_proximal_phalanx_3";
browser.currentScene.children[369] = ROUTE1710;

let ROUTE1711 = browser.currentScene.createNode("ROUTE");
ROUTE1711.fromField = "fraction_changed";
ROUTE1711.fromNode = "Armature_Clock";
ROUTE1711.toField = "set_fraction";
ROUTE1711.toNode = "Armature_OI_l_carpal_middle_phalanx_3";
browser.currentScene.children[370] = ROUTE1711;

let ROUTE1712 = browser.currentScene.createNode("ROUTE");
ROUTE1712.fromField = "value_changed";
ROUTE1712.fromNode = "Armature_OI_l_carpal_middle_phalanx_3";
ROUTE1712.toField = "rotation";
ROUTE1712.toNode = "hanim_l_carpal_middle_phalanx_3";
browser.currentScene.children[371] = ROUTE1712;

let ROUTE1713 = browser.currentScene.createNode("ROUTE");
ROUTE1713.fromField = "fraction_changed";
ROUTE1713.fromNode = "Armature_Clock";
ROUTE1713.toField = "set_fraction";
ROUTE1713.toNode = "Armature_OI_l_carpal_distal_phalanx_3";
browser.currentScene.children[372] = ROUTE1713;

let ROUTE1714 = browser.currentScene.createNode("ROUTE");
ROUTE1714.fromField = "value_changed";
ROUTE1714.fromNode = "Armature_OI_l_carpal_distal_phalanx_3";
ROUTE1714.toField = "rotation";
ROUTE1714.toNode = "hanim_l_carpal_distal_phalanx_3";
browser.currentScene.children[373] = ROUTE1714;

let ROUTE1715 = browser.currentScene.createNode("ROUTE");
ROUTE1715.fromField = "fraction_changed";
ROUTE1715.fromNode = "Armature_Clock";
ROUTE1715.toField = "set_fraction";
ROUTE1715.toNode = "Armature_OI_l_hamate";
browser.currentScene.children[374] = ROUTE1715;

let ROUTE1716 = browser.currentScene.createNode("ROUTE");
ROUTE1716.fromField = "value_changed";
ROUTE1716.fromNode = "Armature_OI_l_hamate";
ROUTE1716.toField = "rotation";
ROUTE1716.toNode = "hanim_l_hamate";
browser.currentScene.children[375] = ROUTE1716;

let ROUTE1717 = browser.currentScene.createNode("ROUTE");
ROUTE1717.fromField = "fraction_changed";
ROUTE1717.fromNode = "Armature_Clock";
ROUTE1717.toField = "set_fraction";
ROUTE1717.toNode = "Armature_OI_l_metacarpal_4";
browser.currentScene.children[376] = ROUTE1717;

let ROUTE1718 = browser.currentScene.createNode("ROUTE");
ROUTE1718.fromField = "value_changed";
ROUTE1718.fromNode = "Armature_OI_l_metacarpal_4";
ROUTE1718.toField = "rotation";
ROUTE1718.toNode = "hanim_l_metacarpal_4";
browser.currentScene.children[377] = ROUTE1718;

let ROUTE1719 = browser.currentScene.createNode("ROUTE");
ROUTE1719.fromField = "fraction_changed";
ROUTE1719.fromNode = "Armature_Clock";
ROUTE1719.toField = "set_fraction";
ROUTE1719.toNode = "Armature_OI_l_carpal_proximal_phalanx_4";
browser.currentScene.children[378] = ROUTE1719;

let ROUTE1720 = browser.currentScene.createNode("ROUTE");
ROUTE1720.fromField = "value_changed";
ROUTE1720.fromNode = "Armature_OI_l_carpal_proximal_phalanx_4";
ROUTE1720.toField = "rotation";
ROUTE1720.toNode = "hanim_l_carpal_proximal_phalanx_4";
browser.currentScene.children[379] = ROUTE1720;

let ROUTE1721 = browser.currentScene.createNode("ROUTE");
ROUTE1721.fromField = "fraction_changed";
ROUTE1721.fromNode = "Armature_Clock";
ROUTE1721.toField = "set_fraction";
ROUTE1721.toNode = "Armature_OI_l_carpal_middle_phalanx_4";
browser.currentScene.children[380] = ROUTE1721;

let ROUTE1722 = browser.currentScene.createNode("ROUTE");
ROUTE1722.fromField = "value_changed";
ROUTE1722.fromNode = "Armature_OI_l_carpal_middle_phalanx_4";
ROUTE1722.toField = "rotation";
ROUTE1722.toNode = "hanim_l_carpal_middle_phalanx_4";
browser.currentScene.children[381] = ROUTE1722;

let ROUTE1723 = browser.currentScene.createNode("ROUTE");
ROUTE1723.fromField = "fraction_changed";
ROUTE1723.fromNode = "Armature_Clock";
ROUTE1723.toField = "set_fraction";
ROUTE1723.toNode = "Armature_OI_l_carpal_distal_phalanx_4";
browser.currentScene.children[382] = ROUTE1723;

let ROUTE1724 = browser.currentScene.createNode("ROUTE");
ROUTE1724.fromField = "value_changed";
ROUTE1724.fromNode = "Armature_OI_l_carpal_distal_phalanx_4";
ROUTE1724.toField = "rotation";
ROUTE1724.toNode = "hanim_l_carpal_distal_phalanx_4";
browser.currentScene.children[383] = ROUTE1724;

let ROUTE1725 = browser.currentScene.createNode("ROUTE");
ROUTE1725.fromField = "fraction_changed";
ROUTE1725.fromNode = "Armature_Clock";
ROUTE1725.toField = "set_fraction";
ROUTE1725.toNode = "Armature_OI_l_metacarpal_5";
browser.currentScene.children[384] = ROUTE1725;

let ROUTE1726 = browser.currentScene.createNode("ROUTE");
ROUTE1726.fromField = "value_changed";
ROUTE1726.fromNode = "Armature_OI_l_metacarpal_5";
ROUTE1726.toField = "rotation";
ROUTE1726.toNode = "hanim_l_metacarpal_5";
browser.currentScene.children[385] = ROUTE1726;

let ROUTE1727 = browser.currentScene.createNode("ROUTE");
ROUTE1727.fromField = "fraction_changed";
ROUTE1727.fromNode = "Armature_Clock";
ROUTE1727.toField = "set_fraction";
ROUTE1727.toNode = "Armature_OI_l_carpal_proximal_phalanx_5";
browser.currentScene.children[386] = ROUTE1727;

let ROUTE1728 = browser.currentScene.createNode("ROUTE");
ROUTE1728.fromField = "value_changed";
ROUTE1728.fromNode = "Armature_OI_l_carpal_proximal_phalanx_5";
ROUTE1728.toField = "rotation";
ROUTE1728.toNode = "hanim_l_carpal_proximal_phalanx_5";
browser.currentScene.children[387] = ROUTE1728;

let ROUTE1729 = browser.currentScene.createNode("ROUTE");
ROUTE1729.fromField = "fraction_changed";
ROUTE1729.fromNode = "Armature_Clock";
ROUTE1729.toField = "set_fraction";
ROUTE1729.toNode = "Armature_OI_l_carpal_middle_phalanx_5";
browser.currentScene.children[388] = ROUTE1729;

let ROUTE1730 = browser.currentScene.createNode("ROUTE");
ROUTE1730.fromField = "value_changed";
ROUTE1730.fromNode = "Armature_OI_l_carpal_middle_phalanx_5";
ROUTE1730.toField = "rotation";
ROUTE1730.toNode = "hanim_l_carpal_middle_phalanx_5";
browser.currentScene.children[389] = ROUTE1730;

let ROUTE1731 = browser.currentScene.createNode("ROUTE");
ROUTE1731.fromField = "fraction_changed";
ROUTE1731.fromNode = "Armature_Clock";
ROUTE1731.toField = "set_fraction";
ROUTE1731.toNode = "Armature_OI_l_carpal_distal_phalanx_5";
browser.currentScene.children[390] = ROUTE1731;

let ROUTE1732 = browser.currentScene.createNode("ROUTE");
ROUTE1732.fromField = "value_changed";
ROUTE1732.fromNode = "Armature_OI_l_carpal_distal_phalanx_5";
ROUTE1732.toField = "rotation";
ROUTE1732.toNode = "hanim_l_carpal_distal_phalanx_5";
browser.currentScene.children[391] = ROUTE1732;

let ROUTE1733 = browser.currentScene.createNode("ROUTE");
ROUTE1733.fromField = "fraction_changed";
ROUTE1733.fromNode = "Armature_Clock";
ROUTE1733.toField = "set_fraction";
ROUTE1733.toNode = "Armature_OI_r_clavicle";
browser.currentScene.children[392] = ROUTE1733;

let ROUTE1734 = browser.currentScene.createNode("ROUTE");
ROUTE1734.fromField = "value_changed";
ROUTE1734.fromNode = "Armature_OI_r_clavicle";
ROUTE1734.toField = "rotation";
ROUTE1734.toNode = "hanim_r_clavicle";
browser.currentScene.children[393] = ROUTE1734;

let ROUTE1735 = browser.currentScene.createNode("ROUTE");
ROUTE1735.fromField = "fraction_changed";
ROUTE1735.fromNode = "Armature_Clock";
ROUTE1735.toField = "set_fraction";
ROUTE1735.toNode = "Armature_OI_r_scapula";
browser.currentScene.children[394] = ROUTE1735;

let ROUTE1736 = browser.currentScene.createNode("ROUTE");
ROUTE1736.fromField = "value_changed";
ROUTE1736.fromNode = "Armature_OI_r_scapula";
ROUTE1736.toField = "rotation";
ROUTE1736.toNode = "hanim_r_scapula";
browser.currentScene.children[395] = ROUTE1736;

let ROUTE1737 = browser.currentScene.createNode("ROUTE");
ROUTE1737.fromField = "fraction_changed";
ROUTE1737.fromNode = "Armature_Clock";
ROUTE1737.toField = "set_fraction";
ROUTE1737.toNode = "Armature_OI_r_upperarm";
browser.currentScene.children[396] = ROUTE1737;

let ROUTE1738 = browser.currentScene.createNode("ROUTE");
ROUTE1738.fromField = "value_changed";
ROUTE1738.fromNode = "Armature_OI_r_upperarm";
ROUTE1738.toField = "rotation";
ROUTE1738.toNode = "hanim_r_upperarm";
browser.currentScene.children[397] = ROUTE1738;

let ROUTE1739 = browser.currentScene.createNode("ROUTE");
ROUTE1739.fromField = "fraction_changed";
ROUTE1739.fromNode = "Armature_Clock";
ROUTE1739.toField = "set_fraction";
ROUTE1739.toNode = "Armature_OI_r_forearm";
browser.currentScene.children[398] = ROUTE1739;

let ROUTE1740 = browser.currentScene.createNode("ROUTE");
ROUTE1740.fromField = "value_changed";
ROUTE1740.fromNode = "Armature_OI_r_forearm";
ROUTE1740.toField = "rotation";
ROUTE1740.toNode = "hanim_r_forearm";
browser.currentScene.children[399] = ROUTE1740;

let ROUTE1741 = browser.currentScene.createNode("ROUTE");
ROUTE1741.fromField = "fraction_changed";
ROUTE1741.fromNode = "Armature_Clock";
ROUTE1741.toField = "set_fraction";
ROUTE1741.toNode = "Armature_OI_r_carpal";
browser.currentScene.children[400] = ROUTE1741;

let ROUTE1742 = browser.currentScene.createNode("ROUTE");
ROUTE1742.fromField = "value_changed";
ROUTE1742.fromNode = "Armature_OI_r_carpal";
ROUTE1742.toField = "rotation";
ROUTE1742.toNode = "hanim_r_carpal";
browser.currentScene.children[401] = ROUTE1742;

let ROUTE1743 = browser.currentScene.createNode("ROUTE");
ROUTE1743.fromField = "fraction_changed";
ROUTE1743.fromNode = "Armature_Clock";
ROUTE1743.toField = "set_fraction";
ROUTE1743.toNode = "Armature_OI_r_trapezium";
browser.currentScene.children[402] = ROUTE1743;

let ROUTE1744 = browser.currentScene.createNode("ROUTE");
ROUTE1744.fromField = "value_changed";
ROUTE1744.fromNode = "Armature_OI_r_trapezium";
ROUTE1744.toField = "rotation";
ROUTE1744.toNode = "hanim_r_trapezium";
browser.currentScene.children[403] = ROUTE1744;

let ROUTE1745 = browser.currentScene.createNode("ROUTE");
ROUTE1745.fromField = "fraction_changed";
ROUTE1745.fromNode = "Armature_Clock";
ROUTE1745.toField = "set_fraction";
ROUTE1745.toNode = "Armature_OI_r_metacarpal_1";
browser.currentScene.children[404] = ROUTE1745;

let ROUTE1746 = browser.currentScene.createNode("ROUTE");
ROUTE1746.fromField = "value_changed";
ROUTE1746.fromNode = "Armature_OI_r_metacarpal_1";
ROUTE1746.toField = "rotation";
ROUTE1746.toNode = "hanim_r_metacarpal_1";
browser.currentScene.children[405] = ROUTE1746;

let ROUTE1747 = browser.currentScene.createNode("ROUTE");
ROUTE1747.fromField = "fraction_changed";
ROUTE1747.fromNode = "Armature_Clock";
ROUTE1747.toField = "set_fraction";
ROUTE1747.toNode = "Armature_OI_r_carpal_proximal_phalanx_1";
browser.currentScene.children[406] = ROUTE1747;

let ROUTE1748 = browser.currentScene.createNode("ROUTE");
ROUTE1748.fromField = "value_changed";
ROUTE1748.fromNode = "Armature_OI_r_carpal_proximal_phalanx_1";
ROUTE1748.toField = "rotation";
ROUTE1748.toNode = "hanim_r_carpal_proximal_phalanx_1";
browser.currentScene.children[407] = ROUTE1748;

let ROUTE1749 = browser.currentScene.createNode("ROUTE");
ROUTE1749.fromField = "fraction_changed";
ROUTE1749.fromNode = "Armature_Clock";
ROUTE1749.toField = "set_fraction";
ROUTE1749.toNode = "Armature_OI_r_carpal_distal_phalanx_1";
browser.currentScene.children[408] = ROUTE1749;

let ROUTE1750 = browser.currentScene.createNode("ROUTE");
ROUTE1750.fromField = "value_changed";
ROUTE1750.fromNode = "Armature_OI_r_carpal_distal_phalanx_1";
ROUTE1750.toField = "rotation";
ROUTE1750.toNode = "hanim_r_carpal_distal_phalanx_1";
browser.currentScene.children[409] = ROUTE1750;

let ROUTE1751 = browser.currentScene.createNode("ROUTE");
ROUTE1751.fromField = "fraction_changed";
ROUTE1751.fromNode = "Armature_Clock";
ROUTE1751.toField = "set_fraction";
ROUTE1751.toNode = "Armature_OI_r_trapezoid";
browser.currentScene.children[410] = ROUTE1751;

let ROUTE1752 = browser.currentScene.createNode("ROUTE");
ROUTE1752.fromField = "value_changed";
ROUTE1752.fromNode = "Armature_OI_r_trapezoid";
ROUTE1752.toField = "rotation";
ROUTE1752.toNode = "hanim_r_trapezoid";
browser.currentScene.children[411] = ROUTE1752;

let ROUTE1753 = browser.currentScene.createNode("ROUTE");
ROUTE1753.fromField = "fraction_changed";
ROUTE1753.fromNode = "Armature_Clock";
ROUTE1753.toField = "set_fraction";
ROUTE1753.toNode = "Armature_OI_r_metacarpal_2";
browser.currentScene.children[412] = ROUTE1753;

let ROUTE1754 = browser.currentScene.createNode("ROUTE");
ROUTE1754.fromField = "value_changed";
ROUTE1754.fromNode = "Armature_OI_r_metacarpal_2";
ROUTE1754.toField = "rotation";
ROUTE1754.toNode = "hanim_r_metacarpal_2";
browser.currentScene.children[413] = ROUTE1754;

let ROUTE1755 = browser.currentScene.createNode("ROUTE");
ROUTE1755.fromField = "fraction_changed";
ROUTE1755.fromNode = "Armature_Clock";
ROUTE1755.toField = "set_fraction";
ROUTE1755.toNode = "Armature_OI_r_carpal_proximal_phalanx_2";
browser.currentScene.children[414] = ROUTE1755;

let ROUTE1756 = browser.currentScene.createNode("ROUTE");
ROUTE1756.fromField = "value_changed";
ROUTE1756.fromNode = "Armature_OI_r_carpal_proximal_phalanx_2";
ROUTE1756.toField = "rotation";
ROUTE1756.toNode = "hanim_r_carpal_proximal_phalanx_2";
browser.currentScene.children[415] = ROUTE1756;

let ROUTE1757 = browser.currentScene.createNode("ROUTE");
ROUTE1757.fromField = "fraction_changed";
ROUTE1757.fromNode = "Armature_Clock";
ROUTE1757.toField = "set_fraction";
ROUTE1757.toNode = "Armature_OI_r_carpal_middle_phalanx_2";
browser.currentScene.children[416] = ROUTE1757;

let ROUTE1758 = browser.currentScene.createNode("ROUTE");
ROUTE1758.fromField = "value_changed";
ROUTE1758.fromNode = "Armature_OI_r_carpal_middle_phalanx_2";
ROUTE1758.toField = "rotation";
ROUTE1758.toNode = "hanim_r_carpal_middle_phalanx_2";
browser.currentScene.children[417] = ROUTE1758;

let ROUTE1759 = browser.currentScene.createNode("ROUTE");
ROUTE1759.fromField = "fraction_changed";
ROUTE1759.fromNode = "Armature_Clock";
ROUTE1759.toField = "set_fraction";
ROUTE1759.toNode = "Armature_OI_r_carpal_distal_phalanx_2";
browser.currentScene.children[418] = ROUTE1759;

let ROUTE1760 = browser.currentScene.createNode("ROUTE");
ROUTE1760.fromField = "value_changed";
ROUTE1760.fromNode = "Armature_OI_r_carpal_distal_phalanx_2";
ROUTE1760.toField = "rotation";
ROUTE1760.toNode = "hanim_r_carpal_distal_phalanx_2";
browser.currentScene.children[419] = ROUTE1760;

let ROUTE1761 = browser.currentScene.createNode("ROUTE");
ROUTE1761.fromField = "fraction_changed";
ROUTE1761.fromNode = "Armature_Clock";
ROUTE1761.toField = "set_fraction";
ROUTE1761.toNode = "Armature_OI_r_capitate";
browser.currentScene.children[420] = ROUTE1761;

let ROUTE1762 = browser.currentScene.createNode("ROUTE");
ROUTE1762.fromField = "value_changed";
ROUTE1762.fromNode = "Armature_OI_r_capitate";
ROUTE1762.toField = "rotation";
ROUTE1762.toNode = "hanim_r_capitate";
browser.currentScene.children[421] = ROUTE1762;

let ROUTE1763 = browser.currentScene.createNode("ROUTE");
ROUTE1763.fromField = "fraction_changed";
ROUTE1763.fromNode = "Armature_Clock";
ROUTE1763.toField = "set_fraction";
ROUTE1763.toNode = "Armature_OI_r_metacarpal_3";
browser.currentScene.children[422] = ROUTE1763;

let ROUTE1764 = browser.currentScene.createNode("ROUTE");
ROUTE1764.fromField = "value_changed";
ROUTE1764.fromNode = "Armature_OI_r_metacarpal_3";
ROUTE1764.toField = "rotation";
ROUTE1764.toNode = "hanim_r_metacarpal_3";
browser.currentScene.children[423] = ROUTE1764;

let ROUTE1765 = browser.currentScene.createNode("ROUTE");
ROUTE1765.fromField = "fraction_changed";
ROUTE1765.fromNode = "Armature_Clock";
ROUTE1765.toField = "set_fraction";
ROUTE1765.toNode = "Armature_OI_r_carpal_proximal_phalanx_3";
browser.currentScene.children[424] = ROUTE1765;

let ROUTE1766 = browser.currentScene.createNode("ROUTE");
ROUTE1766.fromField = "value_changed";
ROUTE1766.fromNode = "Armature_OI_r_carpal_proximal_phalanx_3";
ROUTE1766.toField = "rotation";
ROUTE1766.toNode = "hanim_r_carpal_proximal_phalanx_3";
browser.currentScene.children[425] = ROUTE1766;

let ROUTE1767 = browser.currentScene.createNode("ROUTE");
ROUTE1767.fromField = "fraction_changed";
ROUTE1767.fromNode = "Armature_Clock";
ROUTE1767.toField = "set_fraction";
ROUTE1767.toNode = "Armature_OI_r_carpal_middle_phalanx_3";
browser.currentScene.children[426] = ROUTE1767;

let ROUTE1768 = browser.currentScene.createNode("ROUTE");
ROUTE1768.fromField = "value_changed";
ROUTE1768.fromNode = "Armature_OI_r_carpal_middle_phalanx_3";
ROUTE1768.toField = "rotation";
ROUTE1768.toNode = "hanim_r_carpal_middle_phalanx_3";
browser.currentScene.children[427] = ROUTE1768;

let ROUTE1769 = browser.currentScene.createNode("ROUTE");
ROUTE1769.fromField = "fraction_changed";
ROUTE1769.fromNode = "Armature_Clock";
ROUTE1769.toField = "set_fraction";
ROUTE1769.toNode = "Armature_OI_r_carpal_distal_phalanx_3";
browser.currentScene.children[428] = ROUTE1769;

let ROUTE1770 = browser.currentScene.createNode("ROUTE");
ROUTE1770.fromField = "value_changed";
ROUTE1770.fromNode = "Armature_OI_r_carpal_distal_phalanx_3";
ROUTE1770.toField = "rotation";
ROUTE1770.toNode = "hanim_r_carpal_distal_phalanx_3";
browser.currentScene.children[429] = ROUTE1770;

let ROUTE1771 = browser.currentScene.createNode("ROUTE");
ROUTE1771.fromField = "fraction_changed";
ROUTE1771.fromNode = "Armature_Clock";
ROUTE1771.toField = "set_fraction";
ROUTE1771.toNode = "Armature_OI_r_hamate";
browser.currentScene.children[430] = ROUTE1771;

let ROUTE1772 = browser.currentScene.createNode("ROUTE");
ROUTE1772.fromField = "value_changed";
ROUTE1772.fromNode = "Armature_OI_r_hamate";
ROUTE1772.toField = "rotation";
ROUTE1772.toNode = "hanim_r_hamate";
browser.currentScene.children[431] = ROUTE1772;

let ROUTE1773 = browser.currentScene.createNode("ROUTE");
ROUTE1773.fromField = "fraction_changed";
ROUTE1773.fromNode = "Armature_Clock";
ROUTE1773.toField = "set_fraction";
ROUTE1773.toNode = "Armature_OI_r_metacarpal_4";
browser.currentScene.children[432] = ROUTE1773;

let ROUTE1774 = browser.currentScene.createNode("ROUTE");
ROUTE1774.fromField = "value_changed";
ROUTE1774.fromNode = "Armature_OI_r_metacarpal_4";
ROUTE1774.toField = "rotation";
ROUTE1774.toNode = "hanim_r_metacarpal_4";
browser.currentScene.children[433] = ROUTE1774;

let ROUTE1775 = browser.currentScene.createNode("ROUTE");
ROUTE1775.fromField = "fraction_changed";
ROUTE1775.fromNode = "Armature_Clock";
ROUTE1775.toField = "set_fraction";
ROUTE1775.toNode = "Armature_OI_r_carpal_proximal_phalanx_4";
browser.currentScene.children[434] = ROUTE1775;

let ROUTE1776 = browser.currentScene.createNode("ROUTE");
ROUTE1776.fromField = "value_changed";
ROUTE1776.fromNode = "Armature_OI_r_carpal_proximal_phalanx_4";
ROUTE1776.toField = "rotation";
ROUTE1776.toNode = "hanim_r_carpal_proximal_phalanx_4";
browser.currentScene.children[435] = ROUTE1776;

let ROUTE1777 = browser.currentScene.createNode("ROUTE");
ROUTE1777.fromField = "fraction_changed";
ROUTE1777.fromNode = "Armature_Clock";
ROUTE1777.toField = "set_fraction";
ROUTE1777.toNode = "Armature_OI_r_carpal_middle_phalanx_4";
browser.currentScene.children[436] = ROUTE1777;

let ROUTE1778 = browser.currentScene.createNode("ROUTE");
ROUTE1778.fromField = "value_changed";
ROUTE1778.fromNode = "Armature_OI_r_carpal_middle_phalanx_4";
ROUTE1778.toField = "rotation";
ROUTE1778.toNode = "hanim_r_carpal_middle_phalanx_4";
browser.currentScene.children[437] = ROUTE1778;

let ROUTE1779 = browser.currentScene.createNode("ROUTE");
ROUTE1779.fromField = "fraction_changed";
ROUTE1779.fromNode = "Armature_Clock";
ROUTE1779.toField = "set_fraction";
ROUTE1779.toNode = "Armature_OI_r_carpal_distal_phalanx_4";
browser.currentScene.children[438] = ROUTE1779;

let ROUTE1780 = browser.currentScene.createNode("ROUTE");
ROUTE1780.fromField = "value_changed";
ROUTE1780.fromNode = "Armature_OI_r_carpal_distal_phalanx_4";
ROUTE1780.toField = "rotation";
ROUTE1780.toNode = "hanim_r_carpal_distal_phalanx_4";
browser.currentScene.children[439] = ROUTE1780;

let ROUTE1781 = browser.currentScene.createNode("ROUTE");
ROUTE1781.fromField = "fraction_changed";
ROUTE1781.fromNode = "Armature_Clock";
ROUTE1781.toField = "set_fraction";
ROUTE1781.toNode = "Armature_OI_r_metacarpal_5";
browser.currentScene.children[440] = ROUTE1781;

let ROUTE1782 = browser.currentScene.createNode("ROUTE");
ROUTE1782.fromField = "value_changed";
ROUTE1782.fromNode = "Armature_OI_r_metacarpal_5";
ROUTE1782.toField = "rotation";
ROUTE1782.toNode = "hanim_r_metacarpal_5";
browser.currentScene.children[441] = ROUTE1782;

let ROUTE1783 = browser.currentScene.createNode("ROUTE");
ROUTE1783.fromField = "fraction_changed";
ROUTE1783.fromNode = "Armature_Clock";
ROUTE1783.toField = "set_fraction";
ROUTE1783.toNode = "Armature_OI_r_carpal_proximal_phalanx_5";
browser.currentScene.children[442] = ROUTE1783;

let ROUTE1784 = browser.currentScene.createNode("ROUTE");
ROUTE1784.fromField = "value_changed";
ROUTE1784.fromNode = "Armature_OI_r_carpal_proximal_phalanx_5";
ROUTE1784.toField = "rotation";
ROUTE1784.toNode = "hanim_r_carpal_proximal_phalanx_5";
browser.currentScene.children[443] = ROUTE1784;

let ROUTE1785 = browser.currentScene.createNode("ROUTE");
ROUTE1785.fromField = "fraction_changed";
ROUTE1785.fromNode = "Armature_Clock";
ROUTE1785.toField = "set_fraction";
ROUTE1785.toNode = "Armature_OI_r_carpal_middle_phalanx_5";
browser.currentScene.children[444] = ROUTE1785;

let ROUTE1786 = browser.currentScene.createNode("ROUTE");
ROUTE1786.fromField = "value_changed";
ROUTE1786.fromNode = "Armature_OI_r_carpal_middle_phalanx_5";
ROUTE1786.toField = "rotation";
ROUTE1786.toNode = "hanim_r_carpal_middle_phalanx_5";
browser.currentScene.children[445] = ROUTE1786;

let ROUTE1787 = browser.currentScene.createNode("ROUTE");
ROUTE1787.fromField = "fraction_changed";
ROUTE1787.fromNode = "Armature_Clock";
ROUTE1787.toField = "set_fraction";
ROUTE1787.toNode = "Armature_OI_r_carpal_distal_phalanx_5";
browser.currentScene.children[446] = ROUTE1787;

let ROUTE1788 = browser.currentScene.createNode("ROUTE");
ROUTE1788.fromField = "value_changed";
ROUTE1788.fromNode = "Armature_OI_r_carpal_distal_phalanx_5";
ROUTE1788.toField = "rotation";
ROUTE1788.toNode = "hanim_r_carpal_distal_phalanx_5";
browser.currentScene.children[447] = ROUTE1788;

