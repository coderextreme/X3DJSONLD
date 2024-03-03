#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "HAnim";
component2.level = 3;
head1.component = new MFNode();

head1.component[0] = component2;

meta meta3 = createNode("meta");
meta3.name = "title";
meta3.content = "blenderSkeleton.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "copyright";
meta4.content = "2023";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "reference";
meta5.content = "http://www.web3D.org";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "generator";
meta6.content = "Blender 4.0.1";
head1.meta[4] = meta6;

head = head1;

NavigationInfo NavigationInfo8 = createNode("NavigationInfo");
children = new MFNode();

children[0] = NavigationInfo8;

Background Background9 = createNode("Background");
Background9.DEF = "WO_World";
Background9.groundColor = new MFColor(new float[0.05087608844041824,0.05087608844041824,0.05087608844041824]);
Background9.skyColor = new MFColor(new float[0.05087608844041824,0.05087608844041824,0.05087608844041824]);
children[1] = Background9;

Transform Transform10 = createNode("Transform");
Shape Shape11 = createNode("Shape");
Shape11.DEF = "SiteShape";
Box Box12 = createNode("Box");
Box12.size = new SFVec3f(new float[0.05,0.05,0.05]);
Shape11.geometry = Box12;

Appearance Appearance13 = createNode("Appearance");
Material Material14 = createNode("Material");
Material14.diffuseColor = new SFColor(new float[0,0,1]);
Appearance13.material = Material14;

Shape11.appearance = Appearance13;

Transform10.child = new undefined();

Transform10.child[0] = Shape11;

children[2] = Transform10;

Transform Transform15 = createNode("Transform");
Shape Shape16 = createNode("Shape");
Shape16.DEF = "JointShape";
Sphere Sphere17 = createNode("Sphere");
Sphere17.radius = 0.06;
Shape16.geometry = Sphere17;

Appearance Appearance18 = createNode("Appearance");
Appearance18.DEF = "JointAppearance";
Material Material19 = createNode("Material");
Material19.diffuseColor = new SFColor(new float[1,0.5,0]);
Material19.transparency = 0.5;
Appearance18.material = Material19;

Shape16.appearance = Appearance18;

Transform15.child = new undefined();

Transform15.child[0] = Shape16;

children[3] = Transform15;

Transform Transform20 = createNode("Transform");
Transform20.DEF = "Light_TRANSFORM";
Transform20.rotation = new SFRotation(new float[0.20594,0.33152,0.9207,1.92627]);
Transform20.translation = new SFVec3f(new float[4.07625,1.00545,5.90386]);
PointLight PointLight21 = createNode("PointLight");
PointLight21.DEF = "LA_Light";
PointLight21.location = new SFVec3f(new float[-8.940696716308594e-8,-3.5762786865234375e-7,4.6193599700927734e-7]);
PointLight21.radius = 40;
Transform20.children = new MFNode();

Transform20.children[0] = PointLight21;

children[4] = Transform20;

Transform Transform22 = createNode("Transform");
Transform22.DEF = "Camera_TRANSFORM";
Transform22.rotation = new SFRotation(new float[0.77344,0.33383,0.53884,1.35072]);
Transform22.translation = new SFVec3f(new float[7.35889,-6.92579,4.95831]);
Viewpoint Viewpoint23 = createNode("Viewpoint");
Viewpoint23.DEF = "CA_Camera";
Viewpoint23.fieldOfView = 0.6911112070083618;
Viewpoint23.orientation = new SFRotation(new float[-3.627339850709177e-8,-0.4730778932571411,-0.8810206651687622,0]);
Viewpoint23.position = new SFVec3f(new float[-3.927080456378462e-7,-2.123415470123291e-7,2.384185791015625e-7]);
Transform22.children = new MFNode();

Transform22.children[0] = Viewpoint23;

children[5] = Transform22;

Transform Transform24 = createNode("Transform");
Transform24.DEF = "Armature_TRANSFORM";
HAnimHumanoid HAnimHumanoid25 = createNode("HAnimHumanoid");
HAnimHumanoid25.name = "humanoid";
HAnimHumanoid25.DEF = "hanim_humanoid";
HAnimHumanoid25.version = "2.0";
HAnimJoint HAnimJoint26 = createNode("HAnimJoint");
HAnimJoint26.name = "Armature";
HAnimJoint26.DEF = "hanim_Armature";
HAnimSegment HAnimSegment27 = createNode("HAnimSegment");
HAnimSegment27.name = "SEGMENT_FOR_Armature";
HAnimSegment27.DEF = "hanim_SEGMENT_FOR_Armature";
TouchSensor TouchSensor28 = createNode("TouchSensor");
TouchSensor28.description = "joint Armature segment SEGMENT_FOR_Armature";
HAnimSegment27.children = new MFNode();

HAnimSegment27.children[0] = TouchSensor28;

Transform Transform29 = createNode("Transform");
Shape Shape30 = createNode("Shape");
Shape30.USE = "JointShape";
Transform29.child = new undefined();

Transform29.child[0] = Shape30;

HAnimSegment27.children[1] = Transform29;

HAnimSite HAnimSite31 = createNode("HAnimSite");
HAnimSite31.name = "SEGMENT_FOR_Armature_tip";
HAnimSite31.DEF = "hanim_SEGMENT_FOR_Armature_tip";
Transform Transform32 = createNode("Transform");
Shape Shape33 = createNode("Shape");
Shape33.USE = "SiteShape";
Transform32.child = new undefined();

Transform32.child[0] = Shape33;

HAnimSite31.children = new MFNode();

HAnimSite31.children[0] = Transform32;

HAnimSegment27.children[2] = HAnimSite31;

HAnimJoint26.children = new MFNode();

HAnimJoint26.children[0] = HAnimSegment27;

HAnimJoint HAnimJoint34 = createNode("HAnimJoint");
HAnimJoint34.name = "sacrum";
HAnimJoint34.DEF = "hanim_sacrum";
HAnimJoint34.center = new SFVec3f(new float[-0.0002,-0.1178,0.8174]);
HAnimSegment HAnimSegment35 = createNode("HAnimSegment");
HAnimSegment35.name = "SEGMENT_FOR_sacrum";
HAnimSegment35.DEF = "hanim_SEGMENT_FOR_sacrum";
TouchSensor TouchSensor36 = createNode("TouchSensor");
TouchSensor36.description = "joint sacrum segment SEGMENT_FOR_sacrum";
HAnimSegment35.children = new MFNode();

HAnimSegment35.children[0] = TouchSensor36;

Transform Transform37 = createNode("Transform");
Transform37.translation = new SFVec3f(new float[-0.0002,-0.1178,0.8174]);
Shape Shape38 = createNode("Shape");
Shape38.USE = "JointShape";
Transform37.child = new undefined();

Transform37.child[0] = Shape38;

HAnimSegment35.children[1] = Transform37;

HAnimSite HAnimSite39 = createNode("HAnimSite");
HAnimSite39.name = "SEGMENT_FOR_sacrum_tip";
HAnimSite39.DEF = "hanim_SEGMENT_FOR_sacrum_tip";
Transform Transform40 = createNode("Transform");
Transform40.translation = new SFVec3f(new float[-0.0002,-0.1178,0.8174]);
Shape Shape41 = createNode("Shape");
Shape41.USE = "SiteShape";
Transform40.child = new undefined();

Transform40.child[0] = Shape41;

HAnimSite39.children = new MFNode();

HAnimSite39.children[0] = Transform40;

HAnimSegment35.children[2] = HAnimSite39;

HAnimJoint34.children = new MFNode();

HAnimJoint34.children[0] = HAnimSegment35;

HAnimJoint HAnimJoint42 = createNode("HAnimJoint");
HAnimJoint42.name = "pelvis";
HAnimJoint42.DEF = "hanim_pelvis";
HAnimJoint42.center = new SFVec3f(new float[-0.0002,-0.1178,0.6986]);
HAnimSegment HAnimSegment43 = createNode("HAnimSegment");
HAnimSegment43.name = "SEGMENT_FOR_pelvis";
HAnimSegment43.DEF = "hanim_SEGMENT_FOR_pelvis";
TouchSensor TouchSensor44 = createNode("TouchSensor");
TouchSensor44.description = "joint pelvis segment SEGMENT_FOR_pelvis";
HAnimSegment43.children = new MFNode();

HAnimSegment43.children[0] = TouchSensor44;

Transform Transform45 = createNode("Transform");
Transform45.translation = new SFVec3f(new float[-0.0002,-0.1178,0.6986]);
Shape Shape46 = createNode("Shape");
Shape46.USE = "JointShape";
Transform45.child = new undefined();

Transform45.child[0] = Shape46;

HAnimSegment43.children[1] = Transform45;

HAnimSite HAnimSite47 = createNode("HAnimSite");
HAnimSite47.name = "SEGMENT_FOR_pelvis_tip";
HAnimSite47.DEF = "hanim_SEGMENT_FOR_pelvis_tip";
Transform Transform48 = createNode("Transform");
Transform48.translation = new SFVec3f(new float[-0.0002,-0.1178,0.6986]);
Shape Shape49 = createNode("Shape");
Shape49.USE = "SiteShape";
Transform48.child = new undefined();

Transform48.child[0] = Shape49;

HAnimSite47.children = new MFNode();

HAnimSite47.children[0] = Transform48;

HAnimSegment43.children[2] = HAnimSite47;

HAnimJoint42.children = new MFNode();

HAnimJoint42.children[0] = HAnimSegment43;

HAnimJoint HAnimJoint50 = createNode("HAnimJoint");
HAnimJoint50.name = "l_thigh";
HAnimJoint50.DEF = "hanim_l_thigh";
HAnimJoint50.center = new SFVec3f(new float[0.0945,-0.1202,0.8181]);
HAnimSegment HAnimSegment51 = createNode("HAnimSegment");
HAnimSegment51.name = "SEGMENT_FOR_l_thigh";
HAnimSegment51.DEF = "hanim_SEGMENT_FOR_l_thigh";
TouchSensor TouchSensor52 = createNode("TouchSensor");
TouchSensor52.description = "joint l_thigh segment SEGMENT_FOR_l_thigh";
HAnimSegment51.children = new MFNode();

HAnimSegment51.children[0] = TouchSensor52;

Transform Transform53 = createNode("Transform");
Transform53.translation = new SFVec3f(new float[0.0945,-0.1202,0.8181]);
Shape Shape54 = createNode("Shape");
Shape54.USE = "JointShape";
Transform53.child = new undefined();

Transform53.child[0] = Shape54;

HAnimSegment51.children[1] = Transform53;

HAnimSite HAnimSite55 = createNode("HAnimSite");
HAnimSite55.name = "SEGMENT_FOR_l_thigh_tip";
HAnimSite55.DEF = "hanim_SEGMENT_FOR_l_thigh_tip";
Transform Transform56 = createNode("Transform");
Transform56.translation = new SFVec3f(new float[0.0945,-0.1202,0.8181]);
Shape Shape57 = createNode("Shape");
Shape57.USE = "SiteShape";
Transform56.child = new undefined();

Transform56.child[0] = Shape57;

HAnimSite55.children = new MFNode();

HAnimSite55.children[0] = Transform56;

HAnimSegment51.children[2] = HAnimSite55;

HAnimJoint50.children = new MFNode();

HAnimJoint50.children[0] = HAnimSegment51;

HAnimJoint HAnimJoint58 = createNode("HAnimJoint");
HAnimJoint58.name = "l_calf";
HAnimJoint58.DEF = "hanim_l_calf";
HAnimJoint58.center = new SFVec3f(new float[0.0924,-0.1213,0.4003]);
HAnimSegment HAnimSegment59 = createNode("HAnimSegment");
HAnimSegment59.name = "SEGMENT_FOR_l_calf";
HAnimSegment59.DEF = "hanim_SEGMENT_FOR_l_calf";
TouchSensor TouchSensor60 = createNode("TouchSensor");
TouchSensor60.description = "joint l_calf segment SEGMENT_FOR_l_calf";
HAnimSegment59.children = new MFNode();

HAnimSegment59.children[0] = TouchSensor60;

Transform Transform61 = createNode("Transform");
Transform61.translation = new SFVec3f(new float[0.0924,-0.1213,0.4003]);
Shape Shape62 = createNode("Shape");
Shape62.USE = "JointShape";
Transform61.child = new undefined();

Transform61.child[0] = Shape62;

HAnimSegment59.children[1] = Transform61;

HAnimSite HAnimSite63 = createNode("HAnimSite");
HAnimSite63.name = "SEGMENT_FOR_l_calf_tip";
HAnimSite63.DEF = "hanim_SEGMENT_FOR_l_calf_tip";
Transform Transform64 = createNode("Transform");
Transform64.translation = new SFVec3f(new float[0.0924,-0.1213,0.4003]);
Shape Shape65 = createNode("Shape");
Shape65.USE = "SiteShape";
Transform64.child = new undefined();

Transform64.child[0] = Shape65;

HAnimSite63.children = new MFNode();

HAnimSite63.children[0] = Transform64;

HAnimSegment59.children[2] = HAnimSite63;

HAnimJoint58.children = new MFNode();

HAnimJoint58.children[0] = HAnimSegment59;

HAnimJoint HAnimJoint66 = createNode("HAnimJoint");
HAnimJoint66.name = "l_talus";
HAnimJoint66.DEF = "hanim_l_talus";
HAnimJoint66.center = new SFVec3f(new float[0.0886,-0.1123,0.0869]);
HAnimSegment HAnimSegment67 = createNode("HAnimSegment");
HAnimSegment67.name = "SEGMENT_FOR_l_talus";
HAnimSegment67.DEF = "hanim_SEGMENT_FOR_l_talus";
TouchSensor TouchSensor68 = createNode("TouchSensor");
TouchSensor68.description = "joint l_talus segment SEGMENT_FOR_l_talus";
HAnimSegment67.children = new MFNode();

HAnimSegment67.children[0] = TouchSensor68;

Transform Transform69 = createNode("Transform");
Transform69.translation = new SFVec3f(new float[0.0886,-0.1123,0.0869]);
Shape Shape70 = createNode("Shape");
Shape70.USE = "JointShape";
Transform69.child = new undefined();

Transform69.child[0] = Shape70;

HAnimSegment67.children[1] = Transform69;

HAnimSite HAnimSite71 = createNode("HAnimSite");
HAnimSite71.name = "SEGMENT_FOR_l_talus_tip";
HAnimSite71.DEF = "hanim_SEGMENT_FOR_l_talus_tip";
Transform Transform72 = createNode("Transform");
Transform72.translation = new SFVec3f(new float[0.0886,-0.1123,0.0869]);
Shape Shape73 = createNode("Shape");
Shape73.USE = "SiteShape";
Transform72.child = new undefined();

Transform72.child[0] = Shape73;

HAnimSite71.children = new MFNode();

HAnimSite71.children[0] = Transform72;

HAnimSegment67.children[2] = HAnimSite71;

HAnimJoint66.children = new MFNode();

HAnimJoint66.children[0] = HAnimSegment67;

HAnimJoint HAnimJoint74 = createNode("HAnimJoint");
HAnimJoint74.name = "l_navicular";
HAnimJoint74.DEF = "hanim_l_navicular";
HAnimJoint74.center = new SFVec3f(new float[0.0781,-0.097,0.0283]);
HAnimSegment HAnimSegment75 = createNode("HAnimSegment");
HAnimSegment75.name = "SEGMENT_FOR_l_navicular";
HAnimSegment75.DEF = "hanim_SEGMENT_FOR_l_navicular";
TouchSensor TouchSensor76 = createNode("TouchSensor");
TouchSensor76.description = "joint l_navicular segment SEGMENT_FOR_l_navicular";
HAnimSegment75.children = new MFNode();

HAnimSegment75.children[0] = TouchSensor76;

Transform Transform77 = createNode("Transform");
Transform77.translation = new SFVec3f(new float[0.0781,-0.097,0.0283]);
Shape Shape78 = createNode("Shape");
Shape78.USE = "JointShape";
Transform77.child = new undefined();

Transform77.child[0] = Shape78;

HAnimSegment75.children[1] = Transform77;

HAnimSite HAnimSite79 = createNode("HAnimSite");
HAnimSite79.name = "SEGMENT_FOR_l_navicular_tip";
HAnimSite79.DEF = "hanim_SEGMENT_FOR_l_navicular_tip";
Transform Transform80 = createNode("Transform");
Transform80.translation = new SFVec3f(new float[0.0781,-0.097,0.0283]);
Shape Shape81 = createNode("Shape");
Shape81.USE = "SiteShape";
Transform80.child = new undefined();

Transform80.child[0] = Shape81;

HAnimSite79.children = new MFNode();

HAnimSite79.children[0] = Transform80;

HAnimSegment75.children[2] = HAnimSite79;

HAnimJoint74.children = new MFNode();

HAnimJoint74.children[0] = HAnimSegment75;

HAnimJoint HAnimJoint82 = createNode("HAnimJoint");
HAnimJoint82.name = "l_cuneiform_1";
HAnimJoint82.DEF = "hanim_l_cuneiform_1";
HAnimJoint82.center = new SFVec3f(new float[0.0672,-0.0835,0.0235]);
HAnimSegment HAnimSegment83 = createNode("HAnimSegment");
HAnimSegment83.name = "SEGMENT_FOR_l_cuneiform_1";
HAnimSegment83.DEF = "hanim_SEGMENT_FOR_l_cuneiform_1";
TouchSensor TouchSensor84 = createNode("TouchSensor");
TouchSensor84.description = "joint l_cuneiform_1 segment SEGMENT_FOR_l_cuneiform_1";
HAnimSegment83.children = new MFNode();

HAnimSegment83.children[0] = TouchSensor84;

Transform Transform85 = createNode("Transform");
Transform85.translation = new SFVec3f(new float[0.0672,-0.0835,0.0235]);
Shape Shape86 = createNode("Shape");
Shape86.USE = "JointShape";
Transform85.child = new undefined();

Transform85.child[0] = Shape86;

HAnimSegment83.children[1] = Transform85;

HAnimSite HAnimSite87 = createNode("HAnimSite");
HAnimSite87.name = "SEGMENT_FOR_l_cuneiform_1_tip";
HAnimSite87.DEF = "hanim_SEGMENT_FOR_l_cuneiform_1_tip";
Transform Transform88 = createNode("Transform");
Transform88.translation = new SFVec3f(new float[0.0672,-0.0835,0.0235]);
Shape Shape89 = createNode("Shape");
Shape89.USE = "SiteShape";
Transform88.child = new undefined();

Transform88.child[0] = Shape89;

HAnimSite87.children = new MFNode();

HAnimSite87.children[0] = Transform88;

HAnimSegment83.children[2] = HAnimSite87;

HAnimJoint82.children = new MFNode();

HAnimJoint82.children[0] = HAnimSegment83;

HAnimJoint HAnimJoint90 = createNode("HAnimJoint");
HAnimJoint90.name = "l_metatarsal_1";
HAnimJoint90.DEF = "hanim_l_metatarsal_1";
HAnimJoint90.center = new SFVec3f(new float[0.0644,-0.0577,0.0147]);
HAnimSegment HAnimSegment91 = createNode("HAnimSegment");
HAnimSegment91.name = "SEGMENT_FOR_l_metatarsal_1";
HAnimSegment91.DEF = "hanim_SEGMENT_FOR_l_metatarsal_1";
TouchSensor TouchSensor92 = createNode("TouchSensor");
TouchSensor92.description = "joint l_metatarsal_1 segment SEGMENT_FOR_l_metatarsal_1";
HAnimSegment91.children = new MFNode();

HAnimSegment91.children[0] = TouchSensor92;

Transform Transform93 = createNode("Transform");
Transform93.translation = new SFVec3f(new float[0.0644,-0.0577,0.0147]);
Shape Shape94 = createNode("Shape");
Shape94.USE = "JointShape";
Transform93.child = new undefined();

Transform93.child[0] = Shape94;

HAnimSegment91.children[1] = Transform93;

HAnimSite HAnimSite95 = createNode("HAnimSite");
HAnimSite95.name = "SEGMENT_FOR_l_metatarsal_1_tip";
HAnimSite95.DEF = "hanim_SEGMENT_FOR_l_metatarsal_1_tip";
Transform Transform96 = createNode("Transform");
Transform96.translation = new SFVec3f(new float[0.0644,-0.0577,0.0147]);
Shape Shape97 = createNode("Shape");
Shape97.USE = "SiteShape";
Transform96.child = new undefined();

Transform96.child[0] = Shape97;

HAnimSite95.children = new MFNode();

HAnimSite95.children[0] = Transform96;

HAnimSegment91.children[2] = HAnimSite95;

HAnimJoint90.children = new MFNode();

HAnimJoint90.children[0] = HAnimSegment91;

HAnimJoint HAnimJoint98 = createNode("HAnimJoint");
HAnimJoint98.name = "l_tarsal_proximal_phalanx_1";
HAnimJoint98.DEF = "hanim_l_tarsal_proximal_phalanx_1";
HAnimJoint98.center = new SFVec3f(new float[0.0619,-0.0083,0.0059]);
HAnimSegment HAnimSegment99 = createNode("HAnimSegment");
HAnimSegment99.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_1";
HAnimSegment99.DEF = "hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_1";
TouchSensor TouchSensor100 = createNode("TouchSensor");
TouchSensor100.description = "joint l_tarsal_proximal_phalanx_1 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_1";
HAnimSegment99.children = new MFNode();

HAnimSegment99.children[0] = TouchSensor100;

Transform Transform101 = createNode("Transform");
Transform101.translation = new SFVec3f(new float[0.0619,-0.0083,0.0059]);
Shape Shape102 = createNode("Shape");
Shape102.USE = "JointShape";
Transform101.child = new undefined();

Transform101.child[0] = Shape102;

HAnimSegment99.children[1] = Transform101;

HAnimSite HAnimSite103 = createNode("HAnimSite");
HAnimSite103.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_1_tip";
HAnimSite103.DEF = "hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_1_tip";
Transform Transform104 = createNode("Transform");
Transform104.translation = new SFVec3f(new float[0.0619,-0.0083,0.0059]);
Shape Shape105 = createNode("Shape");
Shape105.USE = "SiteShape";
Transform104.child = new undefined();

Transform104.child[0] = Shape105;

HAnimSite103.children = new MFNode();

HAnimSite103.children[0] = Transform104;

HAnimSegment99.children[2] = HAnimSite103;

HAnimJoint98.children = new MFNode();

HAnimJoint98.children[0] = HAnimSegment99;

HAnimJoint HAnimJoint106 = createNode("HAnimJoint");
HAnimJoint106.name = "l_tarsal_distal_phalanx_1";
HAnimJoint106.DEF = "hanim_l_tarsal_distal_phalanx_1";
HAnimSegment HAnimSegment107 = createNode("HAnimSegment");
HAnimSegment107.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_1";
HAnimSegment107.DEF = "hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_1";
TouchSensor TouchSensor108 = createNode("TouchSensor");
TouchSensor108.description = "joint l_tarsal_distal_phalanx_1 segment SEGMENT_FOR_l_tarsal_distal_phalanx_1";
HAnimSegment107.children = new MFNode();

HAnimSegment107.children[0] = TouchSensor108;

Transform Transform109 = createNode("Transform");
Shape Shape110 = createNode("Shape");
Shape110.USE = "JointShape";
Transform109.child = new undefined();

Transform109.child[0] = Shape110;

HAnimSegment107.children[1] = Transform109;

HAnimSite HAnimSite111 = createNode("HAnimSite");
HAnimSite111.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_1_tip";
HAnimSite111.DEF = "hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_1_tip";
Transform Transform112 = createNode("Transform");
Shape Shape113 = createNode("Shape");
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

HAnimJoint HAnimJoint114 = createNode("HAnimJoint");
HAnimJoint114.name = "l_cuneiform_2";
HAnimJoint114.DEF = "hanim_l_cuneiform_2";
HAnimJoint114.center = new SFVec3f(new float[0.0812,-0.0805,0.025]);
HAnimSegment HAnimSegment115 = createNode("HAnimSegment");
HAnimSegment115.name = "SEGMENT_FOR_l_cuneiform_2";
HAnimSegment115.DEF = "hanim_SEGMENT_FOR_l_cuneiform_2";
TouchSensor TouchSensor116 = createNode("TouchSensor");
TouchSensor116.description = "joint l_cuneiform_2 segment SEGMENT_FOR_l_cuneiform_2";
HAnimSegment115.children = new MFNode();

HAnimSegment115.children[0] = TouchSensor116;

Transform Transform117 = createNode("Transform");
Transform117.translation = new SFVec3f(new float[0.0812,-0.0805,0.025]);
Shape Shape118 = createNode("Shape");
Shape118.USE = "JointShape";
Transform117.child = new undefined();

Transform117.child[0] = Shape118;

HAnimSegment115.children[1] = Transform117;

HAnimSite HAnimSite119 = createNode("HAnimSite");
HAnimSite119.name = "SEGMENT_FOR_l_cuneiform_2_tip";
HAnimSite119.DEF = "hanim_SEGMENT_FOR_l_cuneiform_2_tip";
Transform Transform120 = createNode("Transform");
Transform120.translation = new SFVec3f(new float[0.0812,-0.0805,0.025]);
Shape Shape121 = createNode("Shape");
Shape121.USE = "SiteShape";
Transform120.child = new undefined();

Transform120.child[0] = Shape121;

HAnimSite119.children = new MFNode();

HAnimSite119.children[0] = Transform120;

HAnimSegment115.children[2] = HAnimSite119;

HAnimJoint114.children = new MFNode();

HAnimJoint114.children[0] = HAnimSegment115;

HAnimJoint HAnimJoint122 = createNode("HAnimJoint");
HAnimJoint122.name = "l_metatarsal_2";
HAnimJoint122.DEF = "hanim_l_metatarsal_2";
HAnimJoint122.center = new SFVec3f(new float[0.08,-0.0608,0.0175]);
HAnimSegment HAnimSegment123 = createNode("HAnimSegment");
HAnimSegment123.name = "SEGMENT_FOR_l_metatarsal_2";
HAnimSegment123.DEF = "hanim_SEGMENT_FOR_l_metatarsal_2";
TouchSensor TouchSensor124 = createNode("TouchSensor");
TouchSensor124.description = "joint l_metatarsal_2 segment SEGMENT_FOR_l_metatarsal_2";
HAnimSegment123.children = new MFNode();

HAnimSegment123.children[0] = TouchSensor124;

Transform Transform125 = createNode("Transform");
Transform125.translation = new SFVec3f(new float[0.08,-0.0608,0.0175]);
Shape Shape126 = createNode("Shape");
Shape126.USE = "JointShape";
Transform125.child = new undefined();

Transform125.child[0] = Shape126;

HAnimSegment123.children[1] = Transform125;

HAnimSite HAnimSite127 = createNode("HAnimSite");
HAnimSite127.name = "SEGMENT_FOR_l_metatarsal_2_tip";
HAnimSite127.DEF = "hanim_SEGMENT_FOR_l_metatarsal_2_tip";
Transform Transform128 = createNode("Transform");
Transform128.translation = new SFVec3f(new float[0.08,-0.0608,0.0175]);
Shape Shape129 = createNode("Shape");
Shape129.USE = "SiteShape";
Transform128.child = new undefined();

Transform128.child[0] = Shape129;

HAnimSite127.children = new MFNode();

HAnimSite127.children[0] = Transform128;

HAnimSegment123.children[2] = HAnimSite127;

HAnimJoint122.children = new MFNode();

HAnimJoint122.children[0] = HAnimSegment123;

HAnimJoint HAnimJoint130 = createNode("HAnimJoint");
HAnimJoint130.name = "l_tarsal_proximal_phalanx_2";
HAnimJoint130.DEF = "hanim_l_tarsal_proximal_phalanx_2";
HAnimJoint130.center = new SFVec3f(new float[0.0824,-0.004,0.0064]);
HAnimSegment HAnimSegment131 = createNode("HAnimSegment");
HAnimSegment131.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_2";
HAnimSegment131.DEF = "hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_2";
TouchSensor TouchSensor132 = createNode("TouchSensor");
TouchSensor132.description = "joint l_tarsal_proximal_phalanx_2 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_2";
HAnimSegment131.children = new MFNode();

HAnimSegment131.children[0] = TouchSensor132;

Transform Transform133 = createNode("Transform");
Transform133.translation = new SFVec3f(new float[0.0824,-0.004,0.0064]);
Shape Shape134 = createNode("Shape");
Shape134.USE = "JointShape";
Transform133.child = new undefined();

Transform133.child[0] = Shape134;

HAnimSegment131.children[1] = Transform133;

HAnimSite HAnimSite135 = createNode("HAnimSite");
HAnimSite135.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_2_tip";
HAnimSite135.DEF = "hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_2_tip";
Transform Transform136 = createNode("Transform");
Transform136.translation = new SFVec3f(new float[0.0824,-0.004,0.0064]);
Shape Shape137 = createNode("Shape");
Shape137.USE = "SiteShape";
Transform136.child = new undefined();

Transform136.child[0] = Shape137;

HAnimSite135.children = new MFNode();

HAnimSite135.children[0] = Transform136;

HAnimSegment131.children[2] = HAnimSite135;

HAnimJoint130.children = new MFNode();

HAnimJoint130.children[0] = HAnimSegment131;

HAnimJoint HAnimJoint138 = createNode("HAnimJoint");
HAnimJoint138.name = "l_tarsal_middle_phalanx_2";
HAnimJoint138.DEF = "hanim_l_tarsal_middle_phalanx_2";
HAnimJoint138.center = new SFVec3f(new float[0.0841,0.0121,0.0041]);
HAnimSegment HAnimSegment139 = createNode("HAnimSegment");
HAnimSegment139.name = "SEGMENT_FOR_l_tarsal_middle_phalanx_2";
HAnimSegment139.DEF = "hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_2";
TouchSensor TouchSensor140 = createNode("TouchSensor");
TouchSensor140.description = "joint l_tarsal_middle_phalanx_2 segment SEGMENT_FOR_l_tarsal_middle_phalanx_2";
HAnimSegment139.children = new MFNode();

HAnimSegment139.children[0] = TouchSensor140;

Transform Transform141 = createNode("Transform");
Transform141.translation = new SFVec3f(new float[0.0841,0.0121,0.0041]);
Shape Shape142 = createNode("Shape");
Shape142.USE = "JointShape";
Transform141.child = new undefined();

Transform141.child[0] = Shape142;

HAnimSegment139.children[1] = Transform141;

HAnimSite HAnimSite143 = createNode("HAnimSite");
HAnimSite143.name = "SEGMENT_FOR_l_tarsal_middle_phalanx_2_tip";
HAnimSite143.DEF = "hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_2_tip";
Transform Transform144 = createNode("Transform");
Transform144.translation = new SFVec3f(new float[0.0841,0.0121,0.0041]);
Shape Shape145 = createNode("Shape");
Shape145.USE = "SiteShape";
Transform144.child = new undefined();

Transform144.child[0] = Shape145;

HAnimSite143.children = new MFNode();

HAnimSite143.children[0] = Transform144;

HAnimSegment139.children[2] = HAnimSite143;

HAnimJoint138.children = new MFNode();

HAnimJoint138.children[0] = HAnimSegment139;

HAnimJoint HAnimJoint146 = createNode("HAnimJoint");
HAnimJoint146.name = "l_tarsal_distal_phalanx_2";
HAnimJoint146.DEF = "hanim_l_tarsal_distal_phalanx_2";
HAnimJoint146.center = new SFVec3f(new float[0.0841,0.0216,0.0013]);
HAnimSegment HAnimSegment147 = createNode("HAnimSegment");
HAnimSegment147.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_2";
HAnimSegment147.DEF = "hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_2";
TouchSensor TouchSensor148 = createNode("TouchSensor");
TouchSensor148.description = "joint l_tarsal_distal_phalanx_2 segment SEGMENT_FOR_l_tarsal_distal_phalanx_2";
HAnimSegment147.children = new MFNode();

HAnimSegment147.children[0] = TouchSensor148;

Transform Transform149 = createNode("Transform");
Transform149.translation = new SFVec3f(new float[0.0841,0.0216,0.0013]);
Shape Shape150 = createNode("Shape");
Shape150.USE = "JointShape";
Transform149.child = new undefined();

Transform149.child[0] = Shape150;

HAnimSegment147.children[1] = Transform149;

HAnimSite HAnimSite151 = createNode("HAnimSite");
HAnimSite151.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_2_tip";
HAnimSite151.DEF = "hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_2_tip";
Transform Transform152 = createNode("Transform");
Transform152.translation = new SFVec3f(new float[0.0841,0.0216,0.0013]);
Shape Shape153 = createNode("Shape");
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

HAnimJoint HAnimJoint154 = createNode("HAnimJoint");
HAnimJoint154.name = "l_cuneiform_3";
HAnimJoint154.DEF = "hanim_l_cuneiform_3";
HAnimJoint154.center = new SFVec3f(new float[0.0928,-0.0821,0.0248]);
HAnimSegment HAnimSegment155 = createNode("HAnimSegment");
HAnimSegment155.name = "SEGMENT_FOR_l_cuneiform_3";
HAnimSegment155.DEF = "hanim_SEGMENT_FOR_l_cuneiform_3";
TouchSensor TouchSensor156 = createNode("TouchSensor");
TouchSensor156.description = "joint l_cuneiform_3 segment SEGMENT_FOR_l_cuneiform_3";
HAnimSegment155.children = new MFNode();

HAnimSegment155.children[0] = TouchSensor156;

Transform Transform157 = createNode("Transform");
Transform157.translation = new SFVec3f(new float[0.0928,-0.0821,0.0248]);
Shape Shape158 = createNode("Shape");
Shape158.USE = "JointShape";
Transform157.child = new undefined();

Transform157.child[0] = Shape158;

HAnimSegment155.children[1] = Transform157;

HAnimSite HAnimSite159 = createNode("HAnimSite");
HAnimSite159.name = "SEGMENT_FOR_l_cuneiform_3_tip";
HAnimSite159.DEF = "hanim_SEGMENT_FOR_l_cuneiform_3_tip";
Transform Transform160 = createNode("Transform");
Transform160.translation = new SFVec3f(new float[0.0928,-0.0821,0.0248]);
Shape Shape161 = createNode("Shape");
Shape161.USE = "SiteShape";
Transform160.child = new undefined();

Transform160.child[0] = Shape161;

HAnimSite159.children = new MFNode();

HAnimSite159.children[0] = Transform160;

HAnimSegment155.children[2] = HAnimSite159;

HAnimJoint154.children = new MFNode();

HAnimJoint154.children[0] = HAnimSegment155;

HAnimJoint HAnimJoint162 = createNode("HAnimJoint");
HAnimJoint162.name = "l_metatarsal_3";
HAnimJoint162.DEF = "hanim_l_metatarsal_3";
HAnimJoint162.center = new SFVec3f(new float[0.0944,-0.0625,0.0175]);
HAnimSegment HAnimSegment163 = createNode("HAnimSegment");
HAnimSegment163.name = "SEGMENT_FOR_l_metatarsal_3";
HAnimSegment163.DEF = "hanim_SEGMENT_FOR_l_metatarsal_3";
TouchSensor TouchSensor164 = createNode("TouchSensor");
TouchSensor164.description = "joint l_metatarsal_3 segment SEGMENT_FOR_l_metatarsal_3";
HAnimSegment163.children = new MFNode();

HAnimSegment163.children[0] = TouchSensor164;

Transform Transform165 = createNode("Transform");
Transform165.translation = new SFVec3f(new float[0.0944,-0.0625,0.0175]);
Shape Shape166 = createNode("Shape");
Shape166.USE = "JointShape";
Transform165.child = new undefined();

Transform165.child[0] = Shape166;

HAnimSegment163.children[1] = Transform165;

HAnimSite HAnimSite167 = createNode("HAnimSite");
HAnimSite167.name = "SEGMENT_FOR_l_metatarsal_3_tip";
HAnimSite167.DEF = "hanim_SEGMENT_FOR_l_metatarsal_3_tip";
Transform Transform168 = createNode("Transform");
Transform168.translation = new SFVec3f(new float[0.0944,-0.0625,0.0175]);
Shape Shape169 = createNode("Shape");
Shape169.USE = "SiteShape";
Transform168.child = new undefined();

Transform168.child[0] = Shape169;

HAnimSite167.children = new MFNode();

HAnimSite167.children[0] = Transform168;

HAnimSegment163.children[2] = HAnimSite167;

HAnimJoint162.children = new MFNode();

HAnimJoint162.children[0] = HAnimSegment163;

HAnimJoint HAnimJoint170 = createNode("HAnimJoint");
HAnimJoint170.name = "l_tarsal_proximal_phalanx_3";
HAnimJoint170.DEF = "hanim_l_tarsal_proximal_phalanx_3";
HAnimJoint170.center = new SFVec3f(new float[0.0963,-0.0065,0.0065]);
HAnimSegment HAnimSegment171 = createNode("HAnimSegment");
HAnimSegment171.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_3";
HAnimSegment171.DEF = "hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_3";
TouchSensor TouchSensor172 = createNode("TouchSensor");
TouchSensor172.description = "joint l_tarsal_proximal_phalanx_3 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_3";
HAnimSegment171.children = new MFNode();

HAnimSegment171.children[0] = TouchSensor172;

Transform Transform173 = createNode("Transform");
Transform173.translation = new SFVec3f(new float[0.0963,-0.0065,0.0065]);
Shape Shape174 = createNode("Shape");
Shape174.USE = "JointShape";
Transform173.child = new undefined();

Transform173.child[0] = Shape174;

HAnimSegment171.children[1] = Transform173;

HAnimSite HAnimSite175 = createNode("HAnimSite");
HAnimSite175.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_3_tip";
HAnimSite175.DEF = "hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_3_tip";
Transform Transform176 = createNode("Transform");
Transform176.translation = new SFVec3f(new float[0.0963,-0.0065,0.0065]);
Shape Shape177 = createNode("Shape");
Shape177.USE = "SiteShape";
Transform176.child = new undefined();

Transform176.child[0] = Shape177;

HAnimSite175.children = new MFNode();

HAnimSite175.children[0] = Transform176;

HAnimSegment171.children[2] = HAnimSite175;

HAnimJoint170.children = new MFNode();

HAnimJoint170.children[0] = HAnimSegment171;

HAnimJoint HAnimJoint178 = createNode("HAnimJoint");
HAnimJoint178.name = "l_tarsal_middle_phalanx_3";
HAnimJoint178.DEF = "hanim_l_tarsal_middle_phalanx_3";
HAnimJoint178.center = new SFVec3f(new float[0.0987,0.0086,0.0034]);
HAnimSegment HAnimSegment179 = createNode("HAnimSegment");
HAnimSegment179.name = "SEGMENT_FOR_l_tarsal_middle_phalanx_3";
HAnimSegment179.DEF = "hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_3";
TouchSensor TouchSensor180 = createNode("TouchSensor");
TouchSensor180.description = "joint l_tarsal_middle_phalanx_3 segment SEGMENT_FOR_l_tarsal_middle_phalanx_3";
HAnimSegment179.children = new MFNode();

HAnimSegment179.children[0] = TouchSensor180;

Transform Transform181 = createNode("Transform");
Transform181.translation = new SFVec3f(new float[0.0987,0.0086,0.0034]);
Shape Shape182 = createNode("Shape");
Shape182.USE = "JointShape";
Transform181.child = new undefined();

Transform181.child[0] = Shape182;

HAnimSegment179.children[1] = Transform181;

HAnimSite HAnimSite183 = createNode("HAnimSite");
HAnimSite183.name = "SEGMENT_FOR_l_tarsal_middle_phalanx_3_tip";
HAnimSite183.DEF = "hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_3_tip";
Transform Transform184 = createNode("Transform");
Transform184.translation = new SFVec3f(new float[0.0987,0.0086,0.0034]);
Shape Shape185 = createNode("Shape");
Shape185.USE = "SiteShape";
Transform184.child = new undefined();

Transform184.child[0] = Shape185;

HAnimSite183.children = new MFNode();

HAnimSite183.children[0] = Transform184;

HAnimSegment179.children[2] = HAnimSite183;

HAnimJoint178.children = new MFNode();

HAnimJoint178.children[0] = HAnimSegment179;

HAnimJoint HAnimJoint186 = createNode("HAnimJoint");
HAnimJoint186.name = "l_tarsal_distal_phalanx_3";
HAnimJoint186.DEF = "hanim_l_tarsal_distal_phalanx_3";
HAnimJoint186.center = new SFVec3f(new float[0.1002,0.0178,0.0013]);
HAnimSegment HAnimSegment187 = createNode("HAnimSegment");
HAnimSegment187.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_3";
HAnimSegment187.DEF = "hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_3";
TouchSensor TouchSensor188 = createNode("TouchSensor");
TouchSensor188.description = "joint l_tarsal_distal_phalanx_3 segment SEGMENT_FOR_l_tarsal_distal_phalanx_3";
HAnimSegment187.children = new MFNode();

HAnimSegment187.children[0] = TouchSensor188;

Transform Transform189 = createNode("Transform");
Transform189.translation = new SFVec3f(new float[0.1002,0.0178,0.0013]);
Shape Shape190 = createNode("Shape");
Shape190.USE = "JointShape";
Transform189.child = new undefined();

Transform189.child[0] = Shape190;

HAnimSegment187.children[1] = Transform189;

HAnimSite HAnimSite191 = createNode("HAnimSite");
HAnimSite191.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_3_tip";
HAnimSite191.DEF = "hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_3_tip";
Transform Transform192 = createNode("Transform");
Transform192.translation = new SFVec3f(new float[0.1002,0.0178,0.0013]);
Shape Shape193 = createNode("Shape");
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

HAnimJoint HAnimJoint194 = createNode("HAnimJoint");
HAnimJoint194.name = "l_calcaneus";
HAnimJoint194.DEF = "hanim_l_calcaneus";
HAnimJoint194.center = new SFVec3f(new float[0.0889,-0.1278,0.0494]);
HAnimSegment HAnimSegment195 = createNode("HAnimSegment");
HAnimSegment195.name = "SEGMENT_FOR_l_calcaneus";
HAnimSegment195.DEF = "hanim_SEGMENT_FOR_l_calcaneus";
TouchSensor TouchSensor196 = createNode("TouchSensor");
TouchSensor196.description = "joint l_calcaneus segment SEGMENT_FOR_l_calcaneus";
HAnimSegment195.children = new MFNode();

HAnimSegment195.children[0] = TouchSensor196;

Transform Transform197 = createNode("Transform");
Transform197.translation = new SFVec3f(new float[0.0889,-0.1278,0.0494]);
Shape Shape198 = createNode("Shape");
Shape198.USE = "JointShape";
Transform197.child = new undefined();

Transform197.child[0] = Shape198;

HAnimSegment195.children[1] = Transform197;

HAnimSite HAnimSite199 = createNode("HAnimSite");
HAnimSite199.name = "SEGMENT_FOR_l_calcaneus_tip";
HAnimSite199.DEF = "hanim_SEGMENT_FOR_l_calcaneus_tip";
Transform Transform200 = createNode("Transform");
Transform200.translation = new SFVec3f(new float[0.0889,-0.1278,0.0494]);
Shape Shape201 = createNode("Shape");
Shape201.USE = "SiteShape";
Transform200.child = new undefined();

Transform200.child[0] = Shape201;

HAnimSite199.children = new MFNode();

HAnimSite199.children[0] = Transform200;

HAnimSegment195.children[2] = HAnimSite199;

HAnimJoint194.children = new MFNode();

HAnimJoint194.children[0] = HAnimSegment195;

HAnimJoint HAnimJoint202 = createNode("HAnimJoint");
HAnimJoint202.name = "l_cuboid";
HAnimJoint202.DEF = "hanim_l_cuboid";
HAnimJoint202.center = new SFVec3f(new float[0.1105,-0.0998,0.0267]);
HAnimSegment HAnimSegment203 = createNode("HAnimSegment");
HAnimSegment203.name = "SEGMENT_FOR_l_cuboid";
HAnimSegment203.DEF = "hanim_SEGMENT_FOR_l_cuboid";
TouchSensor TouchSensor204 = createNode("TouchSensor");
TouchSensor204.description = "joint l_cuboid segment SEGMENT_FOR_l_cuboid";
HAnimSegment203.children = new MFNode();

HAnimSegment203.children[0] = TouchSensor204;

Transform Transform205 = createNode("Transform");
Transform205.translation = new SFVec3f(new float[0.1105,-0.0998,0.0267]);
Shape Shape206 = createNode("Shape");
Shape206.USE = "JointShape";
Transform205.child = new undefined();

Transform205.child[0] = Shape206;

HAnimSegment203.children[1] = Transform205;

HAnimSite HAnimSite207 = createNode("HAnimSite");
HAnimSite207.name = "SEGMENT_FOR_l_cuboid_tip";
HAnimSite207.DEF = "hanim_SEGMENT_FOR_l_cuboid_tip";
Transform Transform208 = createNode("Transform");
Transform208.translation = new SFVec3f(new float[0.1105,-0.0998,0.0267]);
Shape Shape209 = createNode("Shape");
Shape209.USE = "SiteShape";
Transform208.child = new undefined();

Transform208.child[0] = Shape209;

HAnimSite207.children = new MFNode();

HAnimSite207.children[0] = Transform208;

HAnimSegment203.children[2] = HAnimSite207;

HAnimJoint202.children = new MFNode();

HAnimJoint202.children[0] = HAnimSegment203;

HAnimJoint HAnimJoint210 = createNode("HAnimJoint");
HAnimJoint210.name = "l_metatarsal_4";
HAnimJoint210.DEF = "hanim_l_metatarsal_4";
HAnimJoint210.center = new SFVec3f(new float[0.1063,-0.0634,0.016]);
HAnimSegment HAnimSegment211 = createNode("HAnimSegment");
HAnimSegment211.name = "SEGMENT_FOR_l_metatarsal_4";
HAnimSegment211.DEF = "hanim_SEGMENT_FOR_l_metatarsal_4";
TouchSensor TouchSensor212 = createNode("TouchSensor");
TouchSensor212.description = "joint l_metatarsal_4 segment SEGMENT_FOR_l_metatarsal_4";
HAnimSegment211.children = new MFNode();

HAnimSegment211.children[0] = TouchSensor212;

Transform Transform213 = createNode("Transform");
Transform213.translation = new SFVec3f(new float[0.1063,-0.0634,0.016]);
Shape Shape214 = createNode("Shape");
Shape214.USE = "JointShape";
Transform213.child = new undefined();

Transform213.child[0] = Shape214;

HAnimSegment211.children[1] = Transform213;

HAnimSite HAnimSite215 = createNode("HAnimSite");
HAnimSite215.name = "SEGMENT_FOR_l_metatarsal_4_tip";
HAnimSite215.DEF = "hanim_SEGMENT_FOR_l_metatarsal_4_tip";
Transform Transform216 = createNode("Transform");
Transform216.translation = new SFVec3f(new float[0.1063,-0.0634,0.016]);
Shape Shape217 = createNode("Shape");
Shape217.USE = "SiteShape";
Transform216.child = new undefined();

Transform216.child[0] = Shape217;

HAnimSite215.children = new MFNode();

HAnimSite215.children[0] = Transform216;

HAnimSegment211.children[2] = HAnimSite215;

HAnimJoint210.children = new MFNode();

HAnimJoint210.children[0] = HAnimSegment211;

HAnimJoint HAnimJoint218 = createNode("HAnimJoint");
HAnimJoint218.name = "l_tarsal_proximal_phalanx_4";
HAnimJoint218.DEF = "hanim_l_tarsal_proximal_phalanx_4";
HAnimJoint218.center = new SFVec3f(new float[0.1097,-0.0107,0.0058]);
HAnimSegment HAnimSegment219 = createNode("HAnimSegment");
HAnimSegment219.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_4";
HAnimSegment219.DEF = "hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_4";
TouchSensor TouchSensor220 = createNode("TouchSensor");
TouchSensor220.description = "joint l_tarsal_proximal_phalanx_4 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_4";
HAnimSegment219.children = new MFNode();

HAnimSegment219.children[0] = TouchSensor220;

Transform Transform221 = createNode("Transform");
Transform221.translation = new SFVec3f(new float[0.1097,-0.0107,0.0058]);
Shape Shape222 = createNode("Shape");
Shape222.USE = "JointShape";
Transform221.child = new undefined();

Transform221.child[0] = Shape222;

HAnimSegment219.children[1] = Transform221;

HAnimSite HAnimSite223 = createNode("HAnimSite");
HAnimSite223.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_4_tip";
HAnimSite223.DEF = "hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_4_tip";
Transform Transform224 = createNode("Transform");
Transform224.translation = new SFVec3f(new float[0.1097,-0.0107,0.0058]);
Shape Shape225 = createNode("Shape");
Shape225.USE = "SiteShape";
Transform224.child = new undefined();

Transform224.child[0] = Shape225;

HAnimSite223.children = new MFNode();

HAnimSite223.children[0] = Transform224;

HAnimSegment219.children[2] = HAnimSite223;

HAnimJoint218.children = new MFNode();

HAnimJoint218.children[0] = HAnimSegment219;

HAnimJoint HAnimJoint226 = createNode("HAnimJoint");
HAnimJoint226.name = "l_tarsal_middle_phalanx_4";
HAnimJoint226.DEF = "hanim_l_tarsal_middle_phalanx_4";
HAnimJoint226.center = new SFVec3f(new float[0.114,0.0044,0.0037]);
HAnimSegment HAnimSegment227 = createNode("HAnimSegment");
HAnimSegment227.name = "SEGMENT_FOR_l_tarsal_middle_phalanx_4";
HAnimSegment227.DEF = "hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_4";
TouchSensor TouchSensor228 = createNode("TouchSensor");
TouchSensor228.description = "joint l_tarsal_middle_phalanx_4 segment SEGMENT_FOR_l_tarsal_middle_phalanx_4";
HAnimSegment227.children = new MFNode();

HAnimSegment227.children[0] = TouchSensor228;

Transform Transform229 = createNode("Transform");
Transform229.translation = new SFVec3f(new float[0.114,0.0044,0.0037]);
Shape Shape230 = createNode("Shape");
Shape230.USE = "JointShape";
Transform229.child = new undefined();

Transform229.child[0] = Shape230;

HAnimSegment227.children[1] = Transform229;

HAnimSite HAnimSite231 = createNode("HAnimSite");
HAnimSite231.name = "SEGMENT_FOR_l_tarsal_middle_phalanx_4_tip";
HAnimSite231.DEF = "hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_4_tip";
Transform Transform232 = createNode("Transform");
Transform232.translation = new SFVec3f(new float[0.114,0.0044,0.0037]);
Shape Shape233 = createNode("Shape");
Shape233.USE = "SiteShape";
Transform232.child = new undefined();

Transform232.child[0] = Shape233;

HAnimSite231.children = new MFNode();

HAnimSite231.children[0] = Transform232;

HAnimSegment227.children[2] = HAnimSite231;

HAnimJoint226.children = new MFNode();

HAnimJoint226.children[0] = HAnimSegment227;

HAnimJoint HAnimJoint234 = createNode("HAnimJoint");
HAnimJoint234.name = "l_tarsal_distal_phalanx_4";
HAnimJoint234.DEF = "hanim_l_tarsal_distal_phalanx_4";
HAnimJoint234.center = new SFVec3f(new float[0.1155,0.0118,0.0008]);
HAnimSegment HAnimSegment235 = createNode("HAnimSegment");
HAnimSegment235.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_4";
HAnimSegment235.DEF = "hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_4";
TouchSensor TouchSensor236 = createNode("TouchSensor");
TouchSensor236.description = "joint l_tarsal_distal_phalanx_4 segment SEGMENT_FOR_l_tarsal_distal_phalanx_4";
HAnimSegment235.children = new MFNode();

HAnimSegment235.children[0] = TouchSensor236;

Transform Transform237 = createNode("Transform");
Transform237.translation = new SFVec3f(new float[0.1155,0.0118,0.0008]);
Shape Shape238 = createNode("Shape");
Shape238.USE = "JointShape";
Transform237.child = new undefined();

Transform237.child[0] = Shape238;

HAnimSegment235.children[1] = Transform237;

HAnimSite HAnimSite239 = createNode("HAnimSite");
HAnimSite239.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_4_tip";
HAnimSite239.DEF = "hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_4_tip";
Transform Transform240 = createNode("Transform");
Transform240.translation = new SFVec3f(new float[0.1155,0.0118,0.0008]);
Shape Shape241 = createNode("Shape");
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

HAnimJoint HAnimJoint242 = createNode("HAnimJoint");
HAnimJoint242.name = "l_metatarsal_5";
HAnimJoint242.DEF = "hanim_l_metatarsal_5";
HAnimJoint242.center = new SFVec3f(new float[0.1206,-0.0671,0.0124]);
HAnimSegment HAnimSegment243 = createNode("HAnimSegment");
HAnimSegment243.name = "SEGMENT_FOR_l_metatarsal_5";
HAnimSegment243.DEF = "hanim_SEGMENT_FOR_l_metatarsal_5";
TouchSensor TouchSensor244 = createNode("TouchSensor");
TouchSensor244.description = "joint l_metatarsal_5 segment SEGMENT_FOR_l_metatarsal_5";
HAnimSegment243.children = new MFNode();

HAnimSegment243.children[0] = TouchSensor244;

Transform Transform245 = createNode("Transform");
Transform245.translation = new SFVec3f(new float[0.1206,-0.0671,0.0124]);
Shape Shape246 = createNode("Shape");
Shape246.USE = "JointShape";
Transform245.child = new undefined();

Transform245.child[0] = Shape246;

HAnimSegment243.children[1] = Transform245;

HAnimSite HAnimSite247 = createNode("HAnimSite");
HAnimSite247.name = "SEGMENT_FOR_l_metatarsal_5_tip";
HAnimSite247.DEF = "hanim_SEGMENT_FOR_l_metatarsal_5_tip";
Transform Transform248 = createNode("Transform");
Transform248.translation = new SFVec3f(new float[0.1206,-0.0671,0.0124]);
Shape Shape249 = createNode("Shape");
Shape249.USE = "SiteShape";
Transform248.child = new undefined();

Transform248.child[0] = Shape249;

HAnimSite247.children = new MFNode();

HAnimSite247.children[0] = Transform248;

HAnimSegment243.children[2] = HAnimSite247;

HAnimJoint242.children = new MFNode();

HAnimJoint242.children[0] = HAnimSegment243;

HAnimJoint HAnimJoint250 = createNode("HAnimJoint");
HAnimJoint250.name = "l_tarsal_proximal_phalanx_5";
HAnimJoint250.DEF = "hanim_l_tarsal_proximal_phalanx_5";
HAnimJoint250.center = new SFVec3f(new float[0.1239,-0.0153,0.0051]);
HAnimSegment HAnimSegment251 = createNode("HAnimSegment");
HAnimSegment251.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_5";
HAnimSegment251.DEF = "hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_5";
TouchSensor TouchSensor252 = createNode("TouchSensor");
TouchSensor252.description = "joint l_tarsal_proximal_phalanx_5 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_5";
HAnimSegment251.children = new MFNode();

HAnimSegment251.children[0] = TouchSensor252;

Transform Transform253 = createNode("Transform");
Transform253.translation = new SFVec3f(new float[0.1239,-0.0153,0.0051]);
Shape Shape254 = createNode("Shape");
Shape254.USE = "JointShape";
Transform253.child = new undefined();

Transform253.child[0] = Shape254;

HAnimSegment251.children[1] = Transform253;

HAnimSite HAnimSite255 = createNode("HAnimSite");
HAnimSite255.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_5_tip";
HAnimSite255.DEF = "hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_5_tip";
Transform Transform256 = createNode("Transform");
Transform256.translation = new SFVec3f(new float[0.1239,-0.0153,0.0051]);
Shape Shape257 = createNode("Shape");
Shape257.USE = "SiteShape";
Transform256.child = new undefined();

Transform256.child[0] = Shape257;

HAnimSite255.children = new MFNode();

HAnimSite255.children[0] = Transform256;

HAnimSegment251.children[2] = HAnimSite255;

HAnimJoint250.children = new MFNode();

HAnimJoint250.children[0] = HAnimSegment251;

HAnimJoint HAnimJoint258 = createNode("HAnimJoint");
HAnimJoint258.name = "l_tarsal_middle_phalanx_5";
HAnimJoint258.DEF = "hanim_l_tarsal_middle_phalanx_5";
HAnimJoint258.center = new SFVec3f(new float[0.1262,-0.0077,0.0023]);
HAnimSegment HAnimSegment259 = createNode("HAnimSegment");
HAnimSegment259.name = "SEGMENT_FOR_l_tarsal_middle_phalanx_5";
HAnimSegment259.DEF = "hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_5";
TouchSensor TouchSensor260 = createNode("TouchSensor");
TouchSensor260.description = "joint l_tarsal_middle_phalanx_5 segment SEGMENT_FOR_l_tarsal_middle_phalanx_5";
HAnimSegment259.children = new MFNode();

HAnimSegment259.children[0] = TouchSensor260;

Transform Transform261 = createNode("Transform");
Transform261.translation = new SFVec3f(new float[0.1262,-0.0077,0.0023]);
Shape Shape262 = createNode("Shape");
Shape262.USE = "JointShape";
Transform261.child = new undefined();

Transform261.child[0] = Shape262;

HAnimSegment259.children[1] = Transform261;

HAnimSite HAnimSite263 = createNode("HAnimSite");
HAnimSite263.name = "SEGMENT_FOR_l_tarsal_middle_phalanx_5_tip";
HAnimSite263.DEF = "hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_5_tip";
Transform Transform264 = createNode("Transform");
Transform264.translation = new SFVec3f(new float[0.1262,-0.0077,0.0023]);
Shape Shape265 = createNode("Shape");
Shape265.USE = "SiteShape";
Transform264.child = new undefined();

Transform264.child[0] = Shape265;

HAnimSite263.children = new MFNode();

HAnimSite263.children[0] = Transform264;

HAnimSegment259.children[2] = HAnimSite263;

HAnimJoint258.children = new MFNode();

HAnimJoint258.children[0] = HAnimSegment259;

HAnimJoint HAnimJoint266 = createNode("HAnimJoint");
HAnimJoint266.name = "l_tarsal_distal_phalanx_5";
HAnimJoint266.DEF = "hanim_l_tarsal_distal_phalanx_5";
HAnimJoint266.center = new SFVec3f(new float[0.1271,0,0]);
HAnimSegment HAnimSegment267 = createNode("HAnimSegment");
HAnimSegment267.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_5";
HAnimSegment267.DEF = "hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_5";
TouchSensor TouchSensor268 = createNode("TouchSensor");
TouchSensor268.description = "joint l_tarsal_distal_phalanx_5 segment SEGMENT_FOR_l_tarsal_distal_phalanx_5";
HAnimSegment267.children = new MFNode();

HAnimSegment267.children[0] = TouchSensor268;

Transform Transform269 = createNode("Transform");
Transform269.translation = new SFVec3f(new float[0.1271,0,0]);
Shape Shape270 = createNode("Shape");
Shape270.USE = "JointShape";
Transform269.child = new undefined();

Transform269.child[0] = Shape270;

HAnimSegment267.children[1] = Transform269;

HAnimSite HAnimSite271 = createNode("HAnimSite");
HAnimSite271.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_5_tip";
HAnimSite271.DEF = "hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_5_tip";
Transform Transform272 = createNode("Transform");
Transform272.translation = new SFVec3f(new float[0.1271,0,0]);
Shape Shape273 = createNode("Shape");
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

HAnimJoint HAnimJoint274 = createNode("HAnimJoint");
HAnimJoint274.name = "r_thigh";
HAnimJoint274.DEF = "hanim_r_thigh";
HAnimJoint274.center = new SFVec3f(new float[-0.0948,-0.1202,0.8181]);
HAnimSegment HAnimSegment275 = createNode("HAnimSegment");
HAnimSegment275.name = "SEGMENT_FOR_r_thigh";
HAnimSegment275.DEF = "hanim_SEGMENT_FOR_r_thigh";
TouchSensor TouchSensor276 = createNode("TouchSensor");
TouchSensor276.description = "joint r_thigh segment SEGMENT_FOR_r_thigh";
HAnimSegment275.children = new MFNode();

HAnimSegment275.children[0] = TouchSensor276;

Transform Transform277 = createNode("Transform");
Transform277.translation = new SFVec3f(new float[-0.0948,-0.1202,0.8181]);
Shape Shape278 = createNode("Shape");
Shape278.USE = "JointShape";
Transform277.child = new undefined();

Transform277.child[0] = Shape278;

HAnimSegment275.children[1] = Transform277;

HAnimSite HAnimSite279 = createNode("HAnimSite");
HAnimSite279.name = "SEGMENT_FOR_r_thigh_tip";
HAnimSite279.DEF = "hanim_SEGMENT_FOR_r_thigh_tip";
Transform Transform280 = createNode("Transform");
Transform280.translation = new SFVec3f(new float[-0.0948,-0.1202,0.8181]);
Shape Shape281 = createNode("Shape");
Shape281.USE = "SiteShape";
Transform280.child = new undefined();

Transform280.child[0] = Shape281;

HAnimSite279.children = new MFNode();

HAnimSite279.children[0] = Transform280;

HAnimSegment275.children[2] = HAnimSite279;

HAnimJoint274.children = new MFNode();

HAnimJoint274.children[0] = HAnimSegment275;

HAnimJoint HAnimJoint282 = createNode("HAnimJoint");
HAnimJoint282.name = "r_calf";
HAnimJoint282.DEF = "hanim_r_calf";
HAnimJoint282.center = new SFVec3f(new float[-0.0928,-0.1213,0.4003]);
HAnimSegment HAnimSegment283 = createNode("HAnimSegment");
HAnimSegment283.name = "SEGMENT_FOR_r_calf";
HAnimSegment283.DEF = "hanim_SEGMENT_FOR_r_calf";
TouchSensor TouchSensor284 = createNode("TouchSensor");
TouchSensor284.description = "joint r_calf segment SEGMENT_FOR_r_calf";
HAnimSegment283.children = new MFNode();

HAnimSegment283.children[0] = TouchSensor284;

Transform Transform285 = createNode("Transform");
Transform285.translation = new SFVec3f(new float[-0.0928,-0.1213,0.4003]);
Shape Shape286 = createNode("Shape");
Shape286.USE = "JointShape";
Transform285.child = new undefined();

Transform285.child[0] = Shape286;

HAnimSegment283.children[1] = Transform285;

HAnimSite HAnimSite287 = createNode("HAnimSite");
HAnimSite287.name = "SEGMENT_FOR_r_calf_tip";
HAnimSite287.DEF = "hanim_SEGMENT_FOR_r_calf_tip";
Transform Transform288 = createNode("Transform");
Transform288.translation = new SFVec3f(new float[-0.0928,-0.1213,0.4003]);
Shape Shape289 = createNode("Shape");
Shape289.USE = "SiteShape";
Transform288.child = new undefined();

Transform288.child[0] = Shape289;

HAnimSite287.children = new MFNode();

HAnimSite287.children[0] = Transform288;

HAnimSegment283.children[2] = HAnimSite287;

HAnimJoint282.children = new MFNode();

HAnimJoint282.children[0] = HAnimSegment283;

HAnimJoint HAnimJoint290 = createNode("HAnimJoint");
HAnimJoint290.name = "r_talus";
HAnimJoint290.DEF = "hanim_r_talus";
HAnimJoint290.center = new SFVec3f(new float[-0.0886,-0.1123,0.0869]);
HAnimSegment HAnimSegment291 = createNode("HAnimSegment");
HAnimSegment291.name = "SEGMENT_FOR_r_talus";
HAnimSegment291.DEF = "hanim_SEGMENT_FOR_r_talus";
TouchSensor TouchSensor292 = createNode("TouchSensor");
TouchSensor292.description = "joint r_talus segment SEGMENT_FOR_r_talus";
HAnimSegment291.children = new MFNode();

HAnimSegment291.children[0] = TouchSensor292;

Transform Transform293 = createNode("Transform");
Transform293.translation = new SFVec3f(new float[-0.0886,-0.1123,0.0869]);
Shape Shape294 = createNode("Shape");
Shape294.USE = "JointShape";
Transform293.child = new undefined();

Transform293.child[0] = Shape294;

HAnimSegment291.children[1] = Transform293;

HAnimSite HAnimSite295 = createNode("HAnimSite");
HAnimSite295.name = "SEGMENT_FOR_r_talus_tip";
HAnimSite295.DEF = "hanim_SEGMENT_FOR_r_talus_tip";
Transform Transform296 = createNode("Transform");
Transform296.translation = new SFVec3f(new float[-0.0886,-0.1123,0.0869]);
Shape Shape297 = createNode("Shape");
Shape297.USE = "SiteShape";
Transform296.child = new undefined();

Transform296.child[0] = Shape297;

HAnimSite295.children = new MFNode();

HAnimSite295.children[0] = Transform296;

HAnimSegment291.children[2] = HAnimSite295;

HAnimJoint290.children = new MFNode();

HAnimJoint290.children[0] = HAnimSegment291;

HAnimJoint HAnimJoint298 = createNode("HAnimJoint");
HAnimJoint298.name = "r_navicular";
HAnimJoint298.DEF = "hanim_r_navicular";
HAnimJoint298.center = new SFVec3f(new float[-0.0781,-0.097,0.0283]);
HAnimSegment HAnimSegment299 = createNode("HAnimSegment");
HAnimSegment299.name = "SEGMENT_FOR_r_navicular";
HAnimSegment299.DEF = "hanim_SEGMENT_FOR_r_navicular";
TouchSensor TouchSensor300 = createNode("TouchSensor");
TouchSensor300.description = "joint r_navicular segment SEGMENT_FOR_r_navicular";
HAnimSegment299.children = new MFNode();

HAnimSegment299.children[0] = TouchSensor300;

Transform Transform301 = createNode("Transform");
Transform301.translation = new SFVec3f(new float[-0.0781,-0.097,0.0283]);
Shape Shape302 = createNode("Shape");
Shape302.USE = "JointShape";
Transform301.child = new undefined();

Transform301.child[0] = Shape302;

HAnimSegment299.children[1] = Transform301;

HAnimSite HAnimSite303 = createNode("HAnimSite");
HAnimSite303.name = "SEGMENT_FOR_r_navicular_tip";
HAnimSite303.DEF = "hanim_SEGMENT_FOR_r_navicular_tip";
Transform Transform304 = createNode("Transform");
Transform304.translation = new SFVec3f(new float[-0.0781,-0.097,0.0283]);
Shape Shape305 = createNode("Shape");
Shape305.USE = "SiteShape";
Transform304.child = new undefined();

Transform304.child[0] = Shape305;

HAnimSite303.children = new MFNode();

HAnimSite303.children[0] = Transform304;

HAnimSegment299.children[2] = HAnimSite303;

HAnimJoint298.children = new MFNode();

HAnimJoint298.children[0] = HAnimSegment299;

HAnimJoint HAnimJoint306 = createNode("HAnimJoint");
HAnimJoint306.name = "r_cuneiform_1";
HAnimJoint306.DEF = "hanim_r_cuneiform_1";
HAnimJoint306.center = new SFVec3f(new float[-0.0672,-0.0835,0.0235]);
HAnimSegment HAnimSegment307 = createNode("HAnimSegment");
HAnimSegment307.name = "SEGMENT_FOR_r_cuneiform_1";
HAnimSegment307.DEF = "hanim_SEGMENT_FOR_r_cuneiform_1";
TouchSensor TouchSensor308 = createNode("TouchSensor");
TouchSensor308.description = "joint r_cuneiform_1 segment SEGMENT_FOR_r_cuneiform_1";
HAnimSegment307.children = new MFNode();

HAnimSegment307.children[0] = TouchSensor308;

Transform Transform309 = createNode("Transform");
Transform309.translation = new SFVec3f(new float[-0.0672,-0.0835,0.0235]);
Shape Shape310 = createNode("Shape");
Shape310.USE = "JointShape";
Transform309.child = new undefined();

Transform309.child[0] = Shape310;

HAnimSegment307.children[1] = Transform309;

HAnimSite HAnimSite311 = createNode("HAnimSite");
HAnimSite311.name = "SEGMENT_FOR_r_cuneiform_1_tip";
HAnimSite311.DEF = "hanim_SEGMENT_FOR_r_cuneiform_1_tip";
Transform Transform312 = createNode("Transform");
Transform312.translation = new SFVec3f(new float[-0.0672,-0.0835,0.0235]);
Shape Shape313 = createNode("Shape");
Shape313.USE = "SiteShape";
Transform312.child = new undefined();

Transform312.child[0] = Shape313;

HAnimSite311.children = new MFNode();

HAnimSite311.children[0] = Transform312;

HAnimSegment307.children[2] = HAnimSite311;

HAnimJoint306.children = new MFNode();

HAnimJoint306.children[0] = HAnimSegment307;

HAnimJoint HAnimJoint314 = createNode("HAnimJoint");
HAnimJoint314.name = "r_metatarsal_1";
HAnimJoint314.DEF = "hanim_r_metatarsal_1";
HAnimJoint314.center = new SFVec3f(new float[-0.0644,-0.0577,0.0147]);
HAnimSegment HAnimSegment315 = createNode("HAnimSegment");
HAnimSegment315.name = "SEGMENT_FOR_r_metatarsal_1";
HAnimSegment315.DEF = "hanim_SEGMENT_FOR_r_metatarsal_1";
TouchSensor TouchSensor316 = createNode("TouchSensor");
TouchSensor316.description = "joint r_metatarsal_1 segment SEGMENT_FOR_r_metatarsal_1";
HAnimSegment315.children = new MFNode();

HAnimSegment315.children[0] = TouchSensor316;

Transform Transform317 = createNode("Transform");
Transform317.translation = new SFVec3f(new float[-0.0644,-0.0577,0.0147]);
Shape Shape318 = createNode("Shape");
Shape318.USE = "JointShape";
Transform317.child = new undefined();

Transform317.child[0] = Shape318;

HAnimSegment315.children[1] = Transform317;

HAnimSite HAnimSite319 = createNode("HAnimSite");
HAnimSite319.name = "SEGMENT_FOR_r_metatarsal_1_tip";
HAnimSite319.DEF = "hanim_SEGMENT_FOR_r_metatarsal_1_tip";
Transform Transform320 = createNode("Transform");
Transform320.translation = new SFVec3f(new float[-0.0644,-0.0577,0.0147]);
Shape Shape321 = createNode("Shape");
Shape321.USE = "SiteShape";
Transform320.child = new undefined();

Transform320.child[0] = Shape321;

HAnimSite319.children = new MFNode();

HAnimSite319.children[0] = Transform320;

HAnimSegment315.children[2] = HAnimSite319;

HAnimJoint314.children = new MFNode();

HAnimJoint314.children[0] = HAnimSegment315;

HAnimJoint HAnimJoint322 = createNode("HAnimJoint");
HAnimJoint322.name = "r_tarsal_proximal_phalanx_1";
HAnimJoint322.DEF = "hanim_r_tarsal_proximal_phalanx_1";
HAnimJoint322.center = new SFVec3f(new float[-0.0619,-0.0083,0.0059]);
HAnimSegment HAnimSegment323 = createNode("HAnimSegment");
HAnimSegment323.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_1";
HAnimSegment323.DEF = "hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_1";
TouchSensor TouchSensor324 = createNode("TouchSensor");
TouchSensor324.description = "joint r_tarsal_proximal_phalanx_1 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_1";
HAnimSegment323.children = new MFNode();

HAnimSegment323.children[0] = TouchSensor324;

Transform Transform325 = createNode("Transform");
Transform325.translation = new SFVec3f(new float[-0.0619,-0.0083,0.0059]);
Shape Shape326 = createNode("Shape");
Shape326.USE = "JointShape";
Transform325.child = new undefined();

Transform325.child[0] = Shape326;

HAnimSegment323.children[1] = Transform325;

HAnimSite HAnimSite327 = createNode("HAnimSite");
HAnimSite327.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_1_tip";
HAnimSite327.DEF = "hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_1_tip";
Transform Transform328 = createNode("Transform");
Transform328.translation = new SFVec3f(new float[-0.0619,-0.0083,0.0059]);
Shape Shape329 = createNode("Shape");
Shape329.USE = "SiteShape";
Transform328.child = new undefined();

Transform328.child[0] = Shape329;

HAnimSite327.children = new MFNode();

HAnimSite327.children[0] = Transform328;

HAnimSegment323.children[2] = HAnimSite327;

HAnimJoint322.children = new MFNode();

HAnimJoint322.children[0] = HAnimSegment323;

HAnimJoint HAnimJoint330 = createNode("HAnimJoint");
HAnimJoint330.name = "r_tarsal_distal_phalanx_1";
HAnimJoint330.DEF = "hanim_r_tarsal_distal_phalanx_1";
HAnimSegment HAnimSegment331 = createNode("HAnimSegment");
HAnimSegment331.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_1";
HAnimSegment331.DEF = "hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_1";
TouchSensor TouchSensor332 = createNode("TouchSensor");
TouchSensor332.description = "joint r_tarsal_distal_phalanx_1 segment SEGMENT_FOR_r_tarsal_distal_phalanx_1";
HAnimSegment331.children = new MFNode();

HAnimSegment331.children[0] = TouchSensor332;

Transform Transform333 = createNode("Transform");
Shape Shape334 = createNode("Shape");
Shape334.USE = "JointShape";
Transform333.child = new undefined();

Transform333.child[0] = Shape334;

HAnimSegment331.children[1] = Transform333;

HAnimSite HAnimSite335 = createNode("HAnimSite");
HAnimSite335.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_1_tip";
HAnimSite335.DEF = "hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_1_tip";
Transform Transform336 = createNode("Transform");
Shape Shape337 = createNode("Shape");
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

HAnimJoint HAnimJoint338 = createNode("HAnimJoint");
HAnimJoint338.name = "r_cuneiform_2";
HAnimJoint338.DEF = "hanim_r_cuneiform_2";
HAnimJoint338.center = new SFVec3f(new float[-0.0812,-0.0805,0.025]);
HAnimSegment HAnimSegment339 = createNode("HAnimSegment");
HAnimSegment339.name = "SEGMENT_FOR_r_cuneiform_2";
HAnimSegment339.DEF = "hanim_SEGMENT_FOR_r_cuneiform_2";
TouchSensor TouchSensor340 = createNode("TouchSensor");
TouchSensor340.description = "joint r_cuneiform_2 segment SEGMENT_FOR_r_cuneiform_2";
HAnimSegment339.children = new MFNode();

HAnimSegment339.children[0] = TouchSensor340;

Transform Transform341 = createNode("Transform");
Transform341.translation = new SFVec3f(new float[-0.0812,-0.0805,0.025]);
Shape Shape342 = createNode("Shape");
Shape342.USE = "JointShape";
Transform341.child = new undefined();

Transform341.child[0] = Shape342;

HAnimSegment339.children[1] = Transform341;

HAnimSite HAnimSite343 = createNode("HAnimSite");
HAnimSite343.name = "SEGMENT_FOR_r_cuneiform_2_tip";
HAnimSite343.DEF = "hanim_SEGMENT_FOR_r_cuneiform_2_tip";
Transform Transform344 = createNode("Transform");
Transform344.translation = new SFVec3f(new float[-0.0812,-0.0805,0.025]);
Shape Shape345 = createNode("Shape");
Shape345.USE = "SiteShape";
Transform344.child = new undefined();

Transform344.child[0] = Shape345;

HAnimSite343.children = new MFNode();

HAnimSite343.children[0] = Transform344;

HAnimSegment339.children[2] = HAnimSite343;

HAnimJoint338.children = new MFNode();

HAnimJoint338.children[0] = HAnimSegment339;

HAnimJoint HAnimJoint346 = createNode("HAnimJoint");
HAnimJoint346.name = "r_metatarsal_2";
HAnimJoint346.DEF = "hanim_r_metatarsal_2";
HAnimJoint346.center = new SFVec3f(new float[-0.08,-0.0608,0.0175]);
HAnimSegment HAnimSegment347 = createNode("HAnimSegment");
HAnimSegment347.name = "SEGMENT_FOR_r_metatarsal_2";
HAnimSegment347.DEF = "hanim_SEGMENT_FOR_r_metatarsal_2";
TouchSensor TouchSensor348 = createNode("TouchSensor");
TouchSensor348.description = "joint r_metatarsal_2 segment SEGMENT_FOR_r_metatarsal_2";
HAnimSegment347.children = new MFNode();

HAnimSegment347.children[0] = TouchSensor348;

Transform Transform349 = createNode("Transform");
Transform349.translation = new SFVec3f(new float[-0.08,-0.0608,0.0175]);
Shape Shape350 = createNode("Shape");
Shape350.USE = "JointShape";
Transform349.child = new undefined();

Transform349.child[0] = Shape350;

HAnimSegment347.children[1] = Transform349;

HAnimSite HAnimSite351 = createNode("HAnimSite");
HAnimSite351.name = "SEGMENT_FOR_r_metatarsal_2_tip";
HAnimSite351.DEF = "hanim_SEGMENT_FOR_r_metatarsal_2_tip";
Transform Transform352 = createNode("Transform");
Transform352.translation = new SFVec3f(new float[-0.08,-0.0608,0.0175]);
Shape Shape353 = createNode("Shape");
Shape353.USE = "SiteShape";
Transform352.child = new undefined();

Transform352.child[0] = Shape353;

HAnimSite351.children = new MFNode();

HAnimSite351.children[0] = Transform352;

HAnimSegment347.children[2] = HAnimSite351;

HAnimJoint346.children = new MFNode();

HAnimJoint346.children[0] = HAnimSegment347;

HAnimJoint HAnimJoint354 = createNode("HAnimJoint");
HAnimJoint354.name = "r_tarsal_proximal_phalanx_2";
HAnimJoint354.DEF = "hanim_r_tarsal_proximal_phalanx_2";
HAnimJoint354.center = new SFVec3f(new float[-0.0823,-0.004,0.0064]);
HAnimSegment HAnimSegment355 = createNode("HAnimSegment");
HAnimSegment355.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_2";
HAnimSegment355.DEF = "hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_2";
TouchSensor TouchSensor356 = createNode("TouchSensor");
TouchSensor356.description = "joint r_tarsal_proximal_phalanx_2 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_2";
HAnimSegment355.children = new MFNode();

HAnimSegment355.children[0] = TouchSensor356;

Transform Transform357 = createNode("Transform");
Transform357.translation = new SFVec3f(new float[-0.0823,-0.004,0.0064]);
Shape Shape358 = createNode("Shape");
Shape358.USE = "JointShape";
Transform357.child = new undefined();

Transform357.child[0] = Shape358;

HAnimSegment355.children[1] = Transform357;

HAnimSite HAnimSite359 = createNode("HAnimSite");
HAnimSite359.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_2_tip";
HAnimSite359.DEF = "hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_2_tip";
Transform Transform360 = createNode("Transform");
Transform360.translation = new SFVec3f(new float[-0.0823,-0.004,0.0064]);
Shape Shape361 = createNode("Shape");
Shape361.USE = "SiteShape";
Transform360.child = new undefined();

Transform360.child[0] = Shape361;

HAnimSite359.children = new MFNode();

HAnimSite359.children[0] = Transform360;

HAnimSegment355.children[2] = HAnimSite359;

HAnimJoint354.children = new MFNode();

HAnimJoint354.children[0] = HAnimSegment355;

HAnimJoint HAnimJoint362 = createNode("HAnimJoint");
HAnimJoint362.name = "r_tarsal_middle_phalanx_2";
HAnimJoint362.DEF = "hanim_r_tarsal_middle_phalanx_2";
HAnimJoint362.center = new SFVec3f(new float[-0.0841,0.0121,0.0041]);
HAnimSegment HAnimSegment363 = createNode("HAnimSegment");
HAnimSegment363.name = "SEGMENT_FOR_r_tarsal_middle_phalanx_2";
HAnimSegment363.DEF = "hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_2";
TouchSensor TouchSensor364 = createNode("TouchSensor");
TouchSensor364.description = "joint r_tarsal_middle_phalanx_2 segment SEGMENT_FOR_r_tarsal_middle_phalanx_2";
HAnimSegment363.children = new MFNode();

HAnimSegment363.children[0] = TouchSensor364;

Transform Transform365 = createNode("Transform");
Transform365.translation = new SFVec3f(new float[-0.0841,0.0121,0.0041]);
Shape Shape366 = createNode("Shape");
Shape366.USE = "JointShape";
Transform365.child = new undefined();

Transform365.child[0] = Shape366;

HAnimSegment363.children[1] = Transform365;

HAnimSite HAnimSite367 = createNode("HAnimSite");
HAnimSite367.name = "SEGMENT_FOR_r_tarsal_middle_phalanx_2_tip";
HAnimSite367.DEF = "hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_2_tip";
Transform Transform368 = createNode("Transform");
Transform368.translation = new SFVec3f(new float[-0.0841,0.0121,0.0041]);
Shape Shape369 = createNode("Shape");
Shape369.USE = "SiteShape";
Transform368.child = new undefined();

Transform368.child[0] = Shape369;

HAnimSite367.children = new MFNode();

HAnimSite367.children[0] = Transform368;

HAnimSegment363.children[2] = HAnimSite367;

HAnimJoint362.children = new MFNode();

HAnimJoint362.children[0] = HAnimSegment363;

HAnimJoint HAnimJoint370 = createNode("HAnimJoint");
HAnimJoint370.name = "r_tarsal_distal_phalanx_2";
HAnimJoint370.DEF = "hanim_r_tarsal_distal_phalanx_2";
HAnimJoint370.center = new SFVec3f(new float[-0.0841,0.0216,0.0013]);
HAnimSegment HAnimSegment371 = createNode("HAnimSegment");
HAnimSegment371.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_2";
HAnimSegment371.DEF = "hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_2";
TouchSensor TouchSensor372 = createNode("TouchSensor");
TouchSensor372.description = "joint r_tarsal_distal_phalanx_2 segment SEGMENT_FOR_r_tarsal_distal_phalanx_2";
HAnimSegment371.children = new MFNode();

HAnimSegment371.children[0] = TouchSensor372;

Transform Transform373 = createNode("Transform");
Transform373.translation = new SFVec3f(new float[-0.0841,0.0216,0.0013]);
Shape Shape374 = createNode("Shape");
Shape374.USE = "JointShape";
Transform373.child = new undefined();

Transform373.child[0] = Shape374;

HAnimSegment371.children[1] = Transform373;

HAnimSite HAnimSite375 = createNode("HAnimSite");
HAnimSite375.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_2_tip";
HAnimSite375.DEF = "hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_2_tip";
Transform Transform376 = createNode("Transform");
Transform376.translation = new SFVec3f(new float[-0.0841,0.0216,0.0013]);
Shape Shape377 = createNode("Shape");
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

HAnimJoint HAnimJoint378 = createNode("HAnimJoint");
HAnimJoint378.name = "r_cuneiform_3";
HAnimJoint378.DEF = "hanim_r_cuneiform_3";
HAnimJoint378.center = new SFVec3f(new float[-0.0928,-0.0821,0.0248]);
HAnimSegment HAnimSegment379 = createNode("HAnimSegment");
HAnimSegment379.name = "SEGMENT_FOR_r_cuneiform_3";
HAnimSegment379.DEF = "hanim_SEGMENT_FOR_r_cuneiform_3";
TouchSensor TouchSensor380 = createNode("TouchSensor");
TouchSensor380.description = "joint r_cuneiform_3 segment SEGMENT_FOR_r_cuneiform_3";
HAnimSegment379.children = new MFNode();

HAnimSegment379.children[0] = TouchSensor380;

Transform Transform381 = createNode("Transform");
Transform381.translation = new SFVec3f(new float[-0.0928,-0.0821,0.0248]);
Shape Shape382 = createNode("Shape");
Shape382.USE = "JointShape";
Transform381.child = new undefined();

Transform381.child[0] = Shape382;

HAnimSegment379.children[1] = Transform381;

HAnimSite HAnimSite383 = createNode("HAnimSite");
HAnimSite383.name = "SEGMENT_FOR_r_cuneiform_3_tip";
HAnimSite383.DEF = "hanim_SEGMENT_FOR_r_cuneiform_3_tip";
Transform Transform384 = createNode("Transform");
Transform384.translation = new SFVec3f(new float[-0.0928,-0.0821,0.0248]);
Shape Shape385 = createNode("Shape");
Shape385.USE = "SiteShape";
Transform384.child = new undefined();

Transform384.child[0] = Shape385;

HAnimSite383.children = new MFNode();

HAnimSite383.children[0] = Transform384;

HAnimSegment379.children[2] = HAnimSite383;

HAnimJoint378.children = new MFNode();

HAnimJoint378.children[0] = HAnimSegment379;

HAnimJoint HAnimJoint386 = createNode("HAnimJoint");
HAnimJoint386.name = "r_metatarsal_3";
HAnimJoint386.DEF = "hanim_r_metatarsal_3";
HAnimJoint386.center = new SFVec3f(new float[-0.0944,-0.0625,0.0175]);
HAnimSegment HAnimSegment387 = createNode("HAnimSegment");
HAnimSegment387.name = "SEGMENT_FOR_r_metatarsal_3";
HAnimSegment387.DEF = "hanim_SEGMENT_FOR_r_metatarsal_3";
TouchSensor TouchSensor388 = createNode("TouchSensor");
TouchSensor388.description = "joint r_metatarsal_3 segment SEGMENT_FOR_r_metatarsal_3";
HAnimSegment387.children = new MFNode();

HAnimSegment387.children[0] = TouchSensor388;

Transform Transform389 = createNode("Transform");
Transform389.translation = new SFVec3f(new float[-0.0944,-0.0625,0.0175]);
Shape Shape390 = createNode("Shape");
Shape390.USE = "JointShape";
Transform389.child = new undefined();

Transform389.child[0] = Shape390;

HAnimSegment387.children[1] = Transform389;

HAnimSite HAnimSite391 = createNode("HAnimSite");
HAnimSite391.name = "SEGMENT_FOR_r_metatarsal_3_tip";
HAnimSite391.DEF = "hanim_SEGMENT_FOR_r_metatarsal_3_tip";
Transform Transform392 = createNode("Transform");
Transform392.translation = new SFVec3f(new float[-0.0944,-0.0625,0.0175]);
Shape Shape393 = createNode("Shape");
Shape393.USE = "SiteShape";
Transform392.child = new undefined();

Transform392.child[0] = Shape393;

HAnimSite391.children = new MFNode();

HAnimSite391.children[0] = Transform392;

HAnimSegment387.children[2] = HAnimSite391;

HAnimJoint386.children = new MFNode();

HAnimJoint386.children[0] = HAnimSegment387;

HAnimJoint HAnimJoint394 = createNode("HAnimJoint");
HAnimJoint394.name = "r_tarsal_proximal_phalanx_3";
HAnimJoint394.DEF = "hanim_r_tarsal_proximal_phalanx_3";
HAnimJoint394.center = new SFVec3f(new float[-0.0963,-0.0065,0.0065]);
HAnimSegment HAnimSegment395 = createNode("HAnimSegment");
HAnimSegment395.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_3";
HAnimSegment395.DEF = "hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_3";
TouchSensor TouchSensor396 = createNode("TouchSensor");
TouchSensor396.description = "joint r_tarsal_proximal_phalanx_3 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_3";
HAnimSegment395.children = new MFNode();

HAnimSegment395.children[0] = TouchSensor396;

Transform Transform397 = createNode("Transform");
Transform397.translation = new SFVec3f(new float[-0.0963,-0.0065,0.0065]);
Shape Shape398 = createNode("Shape");
Shape398.USE = "JointShape";
Transform397.child = new undefined();

Transform397.child[0] = Shape398;

HAnimSegment395.children[1] = Transform397;

HAnimSite HAnimSite399 = createNode("HAnimSite");
HAnimSite399.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_3_tip";
HAnimSite399.DEF = "hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_3_tip";
Transform Transform400 = createNode("Transform");
Transform400.translation = new SFVec3f(new float[-0.0963,-0.0065,0.0065]);
Shape Shape401 = createNode("Shape");
Shape401.USE = "SiteShape";
Transform400.child = new undefined();

Transform400.child[0] = Shape401;

HAnimSite399.children = new MFNode();

HAnimSite399.children[0] = Transform400;

HAnimSegment395.children[2] = HAnimSite399;

HAnimJoint394.children = new MFNode();

HAnimJoint394.children[0] = HAnimSegment395;

HAnimJoint HAnimJoint402 = createNode("HAnimJoint");
HAnimJoint402.name = "r_tarsal_middle_phalanx_3";
HAnimJoint402.DEF = "hanim_r_tarsal_middle_phalanx_3";
HAnimJoint402.center = new SFVec3f(new float[-0.0987,0.0086,0.0034]);
HAnimSegment HAnimSegment403 = createNode("HAnimSegment");
HAnimSegment403.name = "SEGMENT_FOR_r_tarsal_middle_phalanx_3";
HAnimSegment403.DEF = "hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_3";
TouchSensor TouchSensor404 = createNode("TouchSensor");
TouchSensor404.description = "joint r_tarsal_middle_phalanx_3 segment SEGMENT_FOR_r_tarsal_middle_phalanx_3";
HAnimSegment403.children = new MFNode();

HAnimSegment403.children[0] = TouchSensor404;

Transform Transform405 = createNode("Transform");
Transform405.translation = new SFVec3f(new float[-0.0987,0.0086,0.0034]);
Shape Shape406 = createNode("Shape");
Shape406.USE = "JointShape";
Transform405.child = new undefined();

Transform405.child[0] = Shape406;

HAnimSegment403.children[1] = Transform405;

HAnimSite HAnimSite407 = createNode("HAnimSite");
HAnimSite407.name = "SEGMENT_FOR_r_tarsal_middle_phalanx_3_tip";
HAnimSite407.DEF = "hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_3_tip";
Transform Transform408 = createNode("Transform");
Transform408.translation = new SFVec3f(new float[-0.0987,0.0086,0.0034]);
Shape Shape409 = createNode("Shape");
Shape409.USE = "SiteShape";
Transform408.child = new undefined();

Transform408.child[0] = Shape409;

HAnimSite407.children = new MFNode();

HAnimSite407.children[0] = Transform408;

HAnimSegment403.children[2] = HAnimSite407;

HAnimJoint402.children = new MFNode();

HAnimJoint402.children[0] = HAnimSegment403;

HAnimJoint HAnimJoint410 = createNode("HAnimJoint");
HAnimJoint410.name = "r_tarsal_distal_phalanx_3";
HAnimJoint410.DEF = "hanim_r_tarsal_distal_phalanx_3";
HAnimJoint410.center = new SFVec3f(new float[-0.1002,0.0178,0.0013]);
HAnimSegment HAnimSegment411 = createNode("HAnimSegment");
HAnimSegment411.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_3";
HAnimSegment411.DEF = "hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_3";
TouchSensor TouchSensor412 = createNode("TouchSensor");
TouchSensor412.description = "joint r_tarsal_distal_phalanx_3 segment SEGMENT_FOR_r_tarsal_distal_phalanx_3";
HAnimSegment411.children = new MFNode();

HAnimSegment411.children[0] = TouchSensor412;

Transform Transform413 = createNode("Transform");
Transform413.translation = new SFVec3f(new float[-0.1002,0.0178,0.0013]);
Shape Shape414 = createNode("Shape");
Shape414.USE = "JointShape";
Transform413.child = new undefined();

Transform413.child[0] = Shape414;

HAnimSegment411.children[1] = Transform413;

HAnimSite HAnimSite415 = createNode("HAnimSite");
HAnimSite415.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_3_tip";
HAnimSite415.DEF = "hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_3_tip";
Transform Transform416 = createNode("Transform");
Transform416.translation = new SFVec3f(new float[-0.1002,0.0178,0.0013]);
Shape Shape417 = createNode("Shape");
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

HAnimJoint HAnimJoint418 = createNode("HAnimJoint");
HAnimJoint418.name = "r_calcaneus";
HAnimJoint418.DEF = "hanim_r_calcaneus";
HAnimJoint418.center = new SFVec3f(new float[-0.0889,-0.1278,0.0494]);
HAnimSegment HAnimSegment419 = createNode("HAnimSegment");
HAnimSegment419.name = "SEGMENT_FOR_r_calcaneus";
HAnimSegment419.DEF = "hanim_SEGMENT_FOR_r_calcaneus";
TouchSensor TouchSensor420 = createNode("TouchSensor");
TouchSensor420.description = "joint r_calcaneus segment SEGMENT_FOR_r_calcaneus";
HAnimSegment419.children = new MFNode();

HAnimSegment419.children[0] = TouchSensor420;

Transform Transform421 = createNode("Transform");
Transform421.translation = new SFVec3f(new float[-0.0889,-0.1278,0.0494]);
Shape Shape422 = createNode("Shape");
Shape422.USE = "JointShape";
Transform421.child = new undefined();

Transform421.child[0] = Shape422;

HAnimSegment419.children[1] = Transform421;

HAnimSite HAnimSite423 = createNode("HAnimSite");
HAnimSite423.name = "SEGMENT_FOR_r_calcaneus_tip";
HAnimSite423.DEF = "hanim_SEGMENT_FOR_r_calcaneus_tip";
Transform Transform424 = createNode("Transform");
Transform424.translation = new SFVec3f(new float[-0.0889,-0.1278,0.0494]);
Shape Shape425 = createNode("Shape");
Shape425.USE = "SiteShape";
Transform424.child = new undefined();

Transform424.child[0] = Shape425;

HAnimSite423.children = new MFNode();

HAnimSite423.children[0] = Transform424;

HAnimSegment419.children[2] = HAnimSite423;

HAnimJoint418.children = new MFNode();

HAnimJoint418.children[0] = HAnimSegment419;

HAnimJoint HAnimJoint426 = createNode("HAnimJoint");
HAnimJoint426.name = "r_cuboid";
HAnimJoint426.DEF = "hanim_r_cuboid";
HAnimJoint426.center = new SFVec3f(new float[-0.1105,-0.0998,0.0267]);
HAnimSegment HAnimSegment427 = createNode("HAnimSegment");
HAnimSegment427.name = "SEGMENT_FOR_r_cuboid";
HAnimSegment427.DEF = "hanim_SEGMENT_FOR_r_cuboid";
TouchSensor TouchSensor428 = createNode("TouchSensor");
TouchSensor428.description = "joint r_cuboid segment SEGMENT_FOR_r_cuboid";
HAnimSegment427.children = new MFNode();

HAnimSegment427.children[0] = TouchSensor428;

Transform Transform429 = createNode("Transform");
Transform429.translation = new SFVec3f(new float[-0.1105,-0.0998,0.0267]);
Shape Shape430 = createNode("Shape");
Shape430.USE = "JointShape";
Transform429.child = new undefined();

Transform429.child[0] = Shape430;

HAnimSegment427.children[1] = Transform429;

HAnimSite HAnimSite431 = createNode("HAnimSite");
HAnimSite431.name = "SEGMENT_FOR_r_cuboid_tip";
HAnimSite431.DEF = "hanim_SEGMENT_FOR_r_cuboid_tip";
Transform Transform432 = createNode("Transform");
Transform432.translation = new SFVec3f(new float[-0.1105,-0.0998,0.0267]);
Shape Shape433 = createNode("Shape");
Shape433.USE = "SiteShape";
Transform432.child = new undefined();

Transform432.child[0] = Shape433;

HAnimSite431.children = new MFNode();

HAnimSite431.children[0] = Transform432;

HAnimSegment427.children[2] = HAnimSite431;

HAnimJoint426.children = new MFNode();

HAnimJoint426.children[0] = HAnimSegment427;

HAnimJoint HAnimJoint434 = createNode("HAnimJoint");
HAnimJoint434.name = "r_metatarsal_4";
HAnimJoint434.DEF = "hanim_r_metatarsal_4";
HAnimJoint434.center = new SFVec3f(new float[-0.1063,-0.0634,0.016]);
HAnimSegment HAnimSegment435 = createNode("HAnimSegment");
HAnimSegment435.name = "SEGMENT_FOR_r_metatarsal_4";
HAnimSegment435.DEF = "hanim_SEGMENT_FOR_r_metatarsal_4";
TouchSensor TouchSensor436 = createNode("TouchSensor");
TouchSensor436.description = "joint r_metatarsal_4 segment SEGMENT_FOR_r_metatarsal_4";
HAnimSegment435.children = new MFNode();

HAnimSegment435.children[0] = TouchSensor436;

Transform Transform437 = createNode("Transform");
Transform437.translation = new SFVec3f(new float[-0.1063,-0.0634,0.016]);
Shape Shape438 = createNode("Shape");
Shape438.USE = "JointShape";
Transform437.child = new undefined();

Transform437.child[0] = Shape438;

HAnimSegment435.children[1] = Transform437;

HAnimSite HAnimSite439 = createNode("HAnimSite");
HAnimSite439.name = "SEGMENT_FOR_r_metatarsal_4_tip";
HAnimSite439.DEF = "hanim_SEGMENT_FOR_r_metatarsal_4_tip";
Transform Transform440 = createNode("Transform");
Transform440.translation = new SFVec3f(new float[-0.1063,-0.0634,0.016]);
Shape Shape441 = createNode("Shape");
Shape441.USE = "SiteShape";
Transform440.child = new undefined();

Transform440.child[0] = Shape441;

HAnimSite439.children = new MFNode();

HAnimSite439.children[0] = Transform440;

HAnimSegment435.children[2] = HAnimSite439;

HAnimJoint434.children = new MFNode();

HAnimJoint434.children[0] = HAnimSegment435;

HAnimJoint HAnimJoint442 = createNode("HAnimJoint");
HAnimJoint442.name = "r_tarsal_proximal_phalanx_4";
HAnimJoint442.DEF = "hanim_r_tarsal_proximal_phalanx_4";
HAnimJoint442.center = new SFVec3f(new float[-0.1097,-0.0107,0.0058]);
HAnimSegment HAnimSegment443 = createNode("HAnimSegment");
HAnimSegment443.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_4";
HAnimSegment443.DEF = "hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_4";
TouchSensor TouchSensor444 = createNode("TouchSensor");
TouchSensor444.description = "joint r_tarsal_proximal_phalanx_4 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_4";
HAnimSegment443.children = new MFNode();

HAnimSegment443.children[0] = TouchSensor444;

Transform Transform445 = createNode("Transform");
Transform445.translation = new SFVec3f(new float[-0.1097,-0.0107,0.0058]);
Shape Shape446 = createNode("Shape");
Shape446.USE = "JointShape";
Transform445.child = new undefined();

Transform445.child[0] = Shape446;

HAnimSegment443.children[1] = Transform445;

HAnimSite HAnimSite447 = createNode("HAnimSite");
HAnimSite447.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_4_tip";
HAnimSite447.DEF = "hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_4_tip";
Transform Transform448 = createNode("Transform");
Transform448.translation = new SFVec3f(new float[-0.1097,-0.0107,0.0058]);
Shape Shape449 = createNode("Shape");
Shape449.USE = "SiteShape";
Transform448.child = new undefined();

Transform448.child[0] = Shape449;

HAnimSite447.children = new MFNode();

HAnimSite447.children[0] = Transform448;

HAnimSegment443.children[2] = HAnimSite447;

HAnimJoint442.children = new MFNode();

HAnimJoint442.children[0] = HAnimSegment443;

HAnimJoint HAnimJoint450 = createNode("HAnimJoint");
HAnimJoint450.name = "r_tarsal_middle_phalanx_4";
HAnimJoint450.DEF = "hanim_r_tarsal_middle_phalanx_4";
HAnimJoint450.center = new SFVec3f(new float[-0.114,0.0044,0.0037]);
HAnimSegment HAnimSegment451 = createNode("HAnimSegment");
HAnimSegment451.name = "SEGMENT_FOR_r_tarsal_middle_phalanx_4";
HAnimSegment451.DEF = "hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_4";
TouchSensor TouchSensor452 = createNode("TouchSensor");
TouchSensor452.description = "joint r_tarsal_middle_phalanx_4 segment SEGMENT_FOR_r_tarsal_middle_phalanx_4";
HAnimSegment451.children = new MFNode();

HAnimSegment451.children[0] = TouchSensor452;

Transform Transform453 = createNode("Transform");
Transform453.translation = new SFVec3f(new float[-0.114,0.0044,0.0037]);
Shape Shape454 = createNode("Shape");
Shape454.USE = "JointShape";
Transform453.child = new undefined();

Transform453.child[0] = Shape454;

HAnimSegment451.children[1] = Transform453;

HAnimSite HAnimSite455 = createNode("HAnimSite");
HAnimSite455.name = "SEGMENT_FOR_r_tarsal_middle_phalanx_4_tip";
HAnimSite455.DEF = "hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_4_tip";
Transform Transform456 = createNode("Transform");
Transform456.translation = new SFVec3f(new float[-0.114,0.0044,0.0037]);
Shape Shape457 = createNode("Shape");
Shape457.USE = "SiteShape";
Transform456.child = new undefined();

Transform456.child[0] = Shape457;

HAnimSite455.children = new MFNode();

HAnimSite455.children[0] = Transform456;

HAnimSegment451.children[2] = HAnimSite455;

HAnimJoint450.children = new MFNode();

HAnimJoint450.children[0] = HAnimSegment451;

HAnimJoint HAnimJoint458 = createNode("HAnimJoint");
HAnimJoint458.name = "r_tarsal_distal_phalanx_4";
HAnimJoint458.DEF = "hanim_r_tarsal_distal_phalanx_4";
HAnimJoint458.center = new SFVec3f(new float[-0.1155,0.0118,0.0008]);
HAnimSegment HAnimSegment459 = createNode("HAnimSegment");
HAnimSegment459.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_4";
HAnimSegment459.DEF = "hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_4";
TouchSensor TouchSensor460 = createNode("TouchSensor");
TouchSensor460.description = "joint r_tarsal_distal_phalanx_4 segment SEGMENT_FOR_r_tarsal_distal_phalanx_4";
HAnimSegment459.children = new MFNode();

HAnimSegment459.children[0] = TouchSensor460;

Transform Transform461 = createNode("Transform");
Transform461.translation = new SFVec3f(new float[-0.1155,0.0118,0.0008]);
Shape Shape462 = createNode("Shape");
Shape462.USE = "JointShape";
Transform461.child = new undefined();

Transform461.child[0] = Shape462;

HAnimSegment459.children[1] = Transform461;

HAnimSite HAnimSite463 = createNode("HAnimSite");
HAnimSite463.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_4_tip";
HAnimSite463.DEF = "hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_4_tip";
Transform Transform464 = createNode("Transform");
Transform464.translation = new SFVec3f(new float[-0.1155,0.0118,0.0008]);
Shape Shape465 = createNode("Shape");
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

HAnimJoint HAnimJoint466 = createNode("HAnimJoint");
HAnimJoint466.name = "r_metatarsal_5";
HAnimJoint466.DEF = "hanim_r_metatarsal_5";
HAnimJoint466.center = new SFVec3f(new float[-0.1206,-0.0671,0.0124]);
HAnimSegment HAnimSegment467 = createNode("HAnimSegment");
HAnimSegment467.name = "SEGMENT_FOR_r_metatarsal_5";
HAnimSegment467.DEF = "hanim_SEGMENT_FOR_r_metatarsal_5";
TouchSensor TouchSensor468 = createNode("TouchSensor");
TouchSensor468.description = "joint r_metatarsal_5 segment SEGMENT_FOR_r_metatarsal_5";
HAnimSegment467.children = new MFNode();

HAnimSegment467.children[0] = TouchSensor468;

Transform Transform469 = createNode("Transform");
Transform469.translation = new SFVec3f(new float[-0.1206,-0.0671,0.0124]);
Shape Shape470 = createNode("Shape");
Shape470.USE = "JointShape";
Transform469.child = new undefined();

Transform469.child[0] = Shape470;

HAnimSegment467.children[1] = Transform469;

HAnimSite HAnimSite471 = createNode("HAnimSite");
HAnimSite471.name = "SEGMENT_FOR_r_metatarsal_5_tip";
HAnimSite471.DEF = "hanim_SEGMENT_FOR_r_metatarsal_5_tip";
Transform Transform472 = createNode("Transform");
Transform472.translation = new SFVec3f(new float[-0.1206,-0.0671,0.0124]);
Shape Shape473 = createNode("Shape");
Shape473.USE = "SiteShape";
Transform472.child = new undefined();

Transform472.child[0] = Shape473;

HAnimSite471.children = new MFNode();

HAnimSite471.children[0] = Transform472;

HAnimSegment467.children[2] = HAnimSite471;

HAnimJoint466.children = new MFNode();

HAnimJoint466.children[0] = HAnimSegment467;

HAnimJoint HAnimJoint474 = createNode("HAnimJoint");
HAnimJoint474.name = "r_tarsal_proximal_phalanx_5";
HAnimJoint474.DEF = "hanim_r_tarsal_proximal_phalanx_5";
HAnimJoint474.center = new SFVec3f(new float[-0.1239,-0.0153,0.0051]);
HAnimSegment HAnimSegment475 = createNode("HAnimSegment");
HAnimSegment475.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_5";
HAnimSegment475.DEF = "hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_5";
TouchSensor TouchSensor476 = createNode("TouchSensor");
TouchSensor476.description = "joint r_tarsal_proximal_phalanx_5 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_5";
HAnimSegment475.children = new MFNode();

HAnimSegment475.children[0] = TouchSensor476;

Transform Transform477 = createNode("Transform");
Transform477.translation = new SFVec3f(new float[-0.1239,-0.0153,0.0051]);
Shape Shape478 = createNode("Shape");
Shape478.USE = "JointShape";
Transform477.child = new undefined();

Transform477.child[0] = Shape478;

HAnimSegment475.children[1] = Transform477;

HAnimSite HAnimSite479 = createNode("HAnimSite");
HAnimSite479.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_5_tip";
HAnimSite479.DEF = "hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_5_tip";
Transform Transform480 = createNode("Transform");
Transform480.translation = new SFVec3f(new float[-0.1239,-0.0153,0.0051]);
Shape Shape481 = createNode("Shape");
Shape481.USE = "SiteShape";
Transform480.child = new undefined();

Transform480.child[0] = Shape481;

HAnimSite479.children = new MFNode();

HAnimSite479.children[0] = Transform480;

HAnimSegment475.children[2] = HAnimSite479;

HAnimJoint474.children = new MFNode();

HAnimJoint474.children[0] = HAnimSegment475;

HAnimJoint HAnimJoint482 = createNode("HAnimJoint");
HAnimJoint482.name = "r_tarsal_middle_phalanx_5";
HAnimJoint482.DEF = "hanim_r_tarsal_middle_phalanx_5";
HAnimJoint482.center = new SFVec3f(new float[-0.1262,-0.0077,0.0023]);
HAnimSegment HAnimSegment483 = createNode("HAnimSegment");
HAnimSegment483.name = "SEGMENT_FOR_r_tarsal_middle_phalanx_5";
HAnimSegment483.DEF = "hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_5";
TouchSensor TouchSensor484 = createNode("TouchSensor");
TouchSensor484.description = "joint r_tarsal_middle_phalanx_5 segment SEGMENT_FOR_r_tarsal_middle_phalanx_5";
HAnimSegment483.children = new MFNode();

HAnimSegment483.children[0] = TouchSensor484;

Transform Transform485 = createNode("Transform");
Transform485.translation = new SFVec3f(new float[-0.1262,-0.0077,0.0023]);
Shape Shape486 = createNode("Shape");
Shape486.USE = "JointShape";
Transform485.child = new undefined();

Transform485.child[0] = Shape486;

HAnimSegment483.children[1] = Transform485;

HAnimSite HAnimSite487 = createNode("HAnimSite");
HAnimSite487.name = "SEGMENT_FOR_r_tarsal_middle_phalanx_5_tip";
HAnimSite487.DEF = "hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_5_tip";
Transform Transform488 = createNode("Transform");
Transform488.translation = new SFVec3f(new float[-0.1262,-0.0077,0.0023]);
Shape Shape489 = createNode("Shape");
Shape489.USE = "SiteShape";
Transform488.child = new undefined();

Transform488.child[0] = Shape489;

HAnimSite487.children = new MFNode();

HAnimSite487.children[0] = Transform488;

HAnimSegment483.children[2] = HAnimSite487;

HAnimJoint482.children = new MFNode();

HAnimJoint482.children[0] = HAnimSegment483;

HAnimJoint HAnimJoint490 = createNode("HAnimJoint");
HAnimJoint490.name = "r_tarsal_distal_phalanx_5";
HAnimJoint490.DEF = "hanim_r_tarsal_distal_phalanx_5";
HAnimJoint490.center = new SFVec3f(new float[-0.1271,0,0]);
HAnimSegment HAnimSegment491 = createNode("HAnimSegment");
HAnimSegment491.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_5";
HAnimSegment491.DEF = "hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_5";
TouchSensor TouchSensor492 = createNode("TouchSensor");
TouchSensor492.description = "joint r_tarsal_distal_phalanx_5 segment SEGMENT_FOR_r_tarsal_distal_phalanx_5";
HAnimSegment491.children = new MFNode();

HAnimSegment491.children[0] = TouchSensor492;

Transform Transform493 = createNode("Transform");
Transform493.translation = new SFVec3f(new float[-0.1271,0,0]);
Shape Shape494 = createNode("Shape");
Shape494.USE = "JointShape";
Transform493.child = new undefined();

Transform493.child[0] = Shape494;

HAnimSegment491.children[1] = Transform493;

HAnimSite HAnimSite495 = createNode("HAnimSite");
HAnimSite495.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_5_tip";
HAnimSite495.DEF = "hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_5_tip";
Transform Transform496 = createNode("Transform");
Transform496.translation = new SFVec3f(new float[-0.1271,0,0]);
Shape Shape497 = createNode("Shape");
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

HAnimJoint HAnimJoint498 = createNode("HAnimJoint");
HAnimJoint498.name = "l5";
HAnimJoint498.DEF = "hanim_l5";
HAnimJoint498.center = new SFVec3f(new float[-0.0002,-0.1156,0.9169]);
HAnimSegment HAnimSegment499 = createNode("HAnimSegment");
HAnimSegment499.name = "SEGMENT_FOR_l5";
HAnimSegment499.DEF = "hanim_SEGMENT_FOR_l5";
TouchSensor TouchSensor500 = createNode("TouchSensor");
TouchSensor500.description = "joint l5 segment SEGMENT_FOR_l5";
HAnimSegment499.children = new MFNode();

HAnimSegment499.children[0] = TouchSensor500;

Transform Transform501 = createNode("Transform");
Transform501.translation = new SFVec3f(new float[-0.0002,-0.1156,0.9169]);
Shape Shape502 = createNode("Shape");
Shape502.USE = "JointShape";
Transform501.child = new undefined();

Transform501.child[0] = Shape502;

HAnimSegment499.children[1] = Transform501;

HAnimSite HAnimSite503 = createNode("HAnimSite");
HAnimSite503.name = "SEGMENT_FOR_l5_tip";
HAnimSite503.DEF = "hanim_SEGMENT_FOR_l5_tip";
Transform Transform504 = createNode("Transform");
Transform504.translation = new SFVec3f(new float[-0.0002,-0.1156,0.9169]);
Shape Shape505 = createNode("Shape");
Shape505.USE = "SiteShape";
Transform504.child = new undefined();

Transform504.child[0] = Shape505;

HAnimSite503.children = new MFNode();

HAnimSite503.children[0] = Transform504;

HAnimSegment499.children[2] = HAnimSite503;

HAnimJoint498.children = new MFNode();

HAnimJoint498.children[0] = HAnimSegment499;

HAnimJoint HAnimJoint506 = createNode("HAnimJoint");
HAnimJoint506.name = "l4";
HAnimJoint506.DEF = "hanim_l4";
HAnimJoint506.center = new SFVec3f(new float[-0.0002,-0.1156,0.9412]);
HAnimSegment HAnimSegment507 = createNode("HAnimSegment");
HAnimSegment507.name = "SEGMENT_FOR_l4";
HAnimSegment507.DEF = "hanim_SEGMENT_FOR_l4";
TouchSensor TouchSensor508 = createNode("TouchSensor");
TouchSensor508.description = "joint l4 segment SEGMENT_FOR_l4";
HAnimSegment507.children = new MFNode();

HAnimSegment507.children[0] = TouchSensor508;

Transform Transform509 = createNode("Transform");
Transform509.translation = new SFVec3f(new float[-0.0002,-0.1156,0.9412]);
Shape Shape510 = createNode("Shape");
Shape510.USE = "JointShape";
Transform509.child = new undefined();

Transform509.child[0] = Shape510;

HAnimSegment507.children[1] = Transform509;

HAnimSite HAnimSite511 = createNode("HAnimSite");
HAnimSite511.name = "SEGMENT_FOR_l4_tip";
HAnimSite511.DEF = "hanim_SEGMENT_FOR_l4_tip";
Transform Transform512 = createNode("Transform");
Transform512.translation = new SFVec3f(new float[-0.0002,-0.1156,0.9412]);
Shape Shape513 = createNode("Shape");
Shape513.USE = "SiteShape";
Transform512.child = new undefined();

Transform512.child[0] = Shape513;

HAnimSite511.children = new MFNode();

HAnimSite511.children[0] = Transform512;

HAnimSegment507.children[2] = HAnimSite511;

HAnimJoint506.children = new MFNode();

HAnimJoint506.children[0] = HAnimSegment507;

HAnimJoint HAnimJoint514 = createNode("HAnimJoint");
HAnimJoint514.name = "l3";
HAnimJoint514.DEF = "hanim_l3";
HAnimJoint514.center = new SFVec3f(new float[-0.0002,-0.1156,0.9574]);
HAnimSegment HAnimSegment515 = createNode("HAnimSegment");
HAnimSegment515.name = "SEGMENT_FOR_l3";
HAnimSegment515.DEF = "hanim_SEGMENT_FOR_l3";
TouchSensor TouchSensor516 = createNode("TouchSensor");
TouchSensor516.description = "joint l3 segment SEGMENT_FOR_l3";
HAnimSegment515.children = new MFNode();

HAnimSegment515.children[0] = TouchSensor516;

Transform Transform517 = createNode("Transform");
Transform517.translation = new SFVec3f(new float[-0.0002,-0.1156,0.9574]);
Shape Shape518 = createNode("Shape");
Shape518.USE = "JointShape";
Transform517.child = new undefined();

Transform517.child[0] = Shape518;

HAnimSegment515.children[1] = Transform517;

HAnimSite HAnimSite519 = createNode("HAnimSite");
HAnimSite519.name = "SEGMENT_FOR_l3_tip";
HAnimSite519.DEF = "hanim_SEGMENT_FOR_l3_tip";
Transform Transform520 = createNode("Transform");
Transform520.translation = new SFVec3f(new float[-0.0002,-0.1156,0.9574]);
Shape Shape521 = createNode("Shape");
Shape521.USE = "SiteShape";
Transform520.child = new undefined();

Transform520.child[0] = Shape521;

HAnimSite519.children = new MFNode();

HAnimSite519.children[0] = Transform520;

HAnimSegment515.children[2] = HAnimSite519;

HAnimJoint514.children = new MFNode();

HAnimJoint514.children[0] = HAnimSegment515;

HAnimJoint HAnimJoint522 = createNode("HAnimJoint");
HAnimJoint522.name = "l2";
HAnimJoint522.DEF = "hanim_l2";
HAnimJoint522.center = new SFVec3f(new float[-0.0002,-0.1156,0.9738]);
HAnimSegment HAnimSegment523 = createNode("HAnimSegment");
HAnimSegment523.name = "SEGMENT_FOR_l2";
HAnimSegment523.DEF = "hanim_SEGMENT_FOR_l2";
TouchSensor TouchSensor524 = createNode("TouchSensor");
TouchSensor524.description = "joint l2 segment SEGMENT_FOR_l2";
HAnimSegment523.children = new MFNode();

HAnimSegment523.children[0] = TouchSensor524;

Transform Transform525 = createNode("Transform");
Transform525.translation = new SFVec3f(new float[-0.0002,-0.1156,0.9738]);
Shape Shape526 = createNode("Shape");
Shape526.USE = "JointShape";
Transform525.child = new undefined();

Transform525.child[0] = Shape526;

HAnimSegment523.children[1] = Transform525;

HAnimSite HAnimSite527 = createNode("HAnimSite");
HAnimSite527.name = "SEGMENT_FOR_l2_tip";
HAnimSite527.DEF = "hanim_SEGMENT_FOR_l2_tip";
Transform Transform528 = createNode("Transform");
Transform528.translation = new SFVec3f(new float[-0.0002,-0.1156,0.9738]);
Shape Shape529 = createNode("Shape");
Shape529.USE = "SiteShape";
Transform528.child = new undefined();

Transform528.child[0] = Shape529;

HAnimSite527.children = new MFNode();

HAnimSite527.children[0] = Transform528;

HAnimSegment523.children[2] = HAnimSite527;

HAnimJoint522.children = new MFNode();

HAnimJoint522.children[0] = HAnimSegment523;

HAnimJoint HAnimJoint530 = createNode("HAnimJoint");
HAnimJoint530.name = "l1";
HAnimJoint530.DEF = "hanim_l1";
HAnimJoint530.center = new SFVec3f(new float[-0.0002,-0.1156,0.9911]);
HAnimSegment HAnimSegment531 = createNode("HAnimSegment");
HAnimSegment531.name = "SEGMENT_FOR_l1";
HAnimSegment531.DEF = "hanim_SEGMENT_FOR_l1";
TouchSensor TouchSensor532 = createNode("TouchSensor");
TouchSensor532.description = "joint l1 segment SEGMENT_FOR_l1";
HAnimSegment531.children = new MFNode();

HAnimSegment531.children[0] = TouchSensor532;

Transform Transform533 = createNode("Transform");
Transform533.translation = new SFVec3f(new float[-0.0002,-0.1156,0.9911]);
Shape Shape534 = createNode("Shape");
Shape534.USE = "JointShape";
Transform533.child = new undefined();

Transform533.child[0] = Shape534;

HAnimSegment531.children[1] = Transform533;

HAnimSite HAnimSite535 = createNode("HAnimSite");
HAnimSite535.name = "SEGMENT_FOR_l1_tip";
HAnimSite535.DEF = "hanim_SEGMENT_FOR_l1_tip";
Transform Transform536 = createNode("Transform");
Transform536.translation = new SFVec3f(new float[-0.0002,-0.1156,0.9911]);
Shape Shape537 = createNode("Shape");
Shape537.USE = "SiteShape";
Transform536.child = new undefined();

Transform536.child[0] = Shape537;

HAnimSite535.children = new MFNode();

HAnimSite535.children[0] = Transform536;

HAnimSegment531.children[2] = HAnimSite535;

HAnimJoint530.children = new MFNode();

HAnimJoint530.children[0] = HAnimSegment531;

HAnimJoint HAnimJoint538 = createNode("HAnimJoint");
HAnimJoint538.name = "t12";
HAnimJoint538.DEF = "hanim_t12";
HAnimJoint538.center = new SFVec3f(new float[-0.0002,-0.1156,1.0145]);
HAnimSegment HAnimSegment539 = createNode("HAnimSegment");
HAnimSegment539.name = "SEGMENT_FOR_t12";
HAnimSegment539.DEF = "hanim_SEGMENT_FOR_t12";
TouchSensor TouchSensor540 = createNode("TouchSensor");
TouchSensor540.description = "joint t12 segment SEGMENT_FOR_t12";
HAnimSegment539.children = new MFNode();

HAnimSegment539.children[0] = TouchSensor540;

Transform Transform541 = createNode("Transform");
Transform541.translation = new SFVec3f(new float[-0.0002,-0.1156,1.0145]);
Shape Shape542 = createNode("Shape");
Shape542.USE = "JointShape";
Transform541.child = new undefined();

Transform541.child[0] = Shape542;

HAnimSegment539.children[1] = Transform541;

HAnimSite HAnimSite543 = createNode("HAnimSite");
HAnimSite543.name = "SEGMENT_FOR_t12_tip";
HAnimSite543.DEF = "hanim_SEGMENT_FOR_t12_tip";
Transform Transform544 = createNode("Transform");
Transform544.translation = new SFVec3f(new float[-0.0002,-0.1156,1.0145]);
Shape Shape545 = createNode("Shape");
Shape545.USE = "SiteShape";
Transform544.child = new undefined();

Transform544.child[0] = Shape545;

HAnimSite543.children = new MFNode();

HAnimSite543.children[0] = Transform544;

HAnimSegment539.children[2] = HAnimSite543;

HAnimJoint538.children = new MFNode();

HAnimJoint538.children[0] = HAnimSegment539;

HAnimJoint HAnimJoint546 = createNode("HAnimJoint");
HAnimJoint546.name = "t11";
HAnimJoint546.DEF = "hanim_t11";
HAnimJoint546.center = new SFVec3f(new float[-0.0002,-0.1156,1.0381]);
HAnimSegment HAnimSegment547 = createNode("HAnimSegment");
HAnimSegment547.name = "SEGMENT_FOR_t11";
HAnimSegment547.DEF = "hanim_SEGMENT_FOR_t11";
TouchSensor TouchSensor548 = createNode("TouchSensor");
TouchSensor548.description = "joint t11 segment SEGMENT_FOR_t11";
HAnimSegment547.children = new MFNode();

HAnimSegment547.children[0] = TouchSensor548;

Transform Transform549 = createNode("Transform");
Transform549.translation = new SFVec3f(new float[-0.0002,-0.1156,1.0381]);
Shape Shape550 = createNode("Shape");
Shape550.USE = "JointShape";
Transform549.child = new undefined();

Transform549.child[0] = Shape550;

HAnimSegment547.children[1] = Transform549;

HAnimSite HAnimSite551 = createNode("HAnimSite");
HAnimSite551.name = "SEGMENT_FOR_t11_tip";
HAnimSite551.DEF = "hanim_SEGMENT_FOR_t11_tip";
Transform Transform552 = createNode("Transform");
Transform552.translation = new SFVec3f(new float[-0.0002,-0.1156,1.0381]);
Shape Shape553 = createNode("Shape");
Shape553.USE = "SiteShape";
Transform552.child = new undefined();

Transform552.child[0] = Shape553;

HAnimSite551.children = new MFNode();

HAnimSite551.children[0] = Transform552;

HAnimSegment547.children[2] = HAnimSite551;

HAnimJoint546.children = new MFNode();

HAnimJoint546.children[0] = HAnimSegment547;

HAnimJoint HAnimJoint554 = createNode("HAnimJoint");
HAnimJoint554.name = "t10";
HAnimJoint554.DEF = "hanim_t10";
HAnimJoint554.center = new SFVec3f(new float[-0.0002,-0.1157,1.0552]);
HAnimSegment HAnimSegment555 = createNode("HAnimSegment");
HAnimSegment555.name = "SEGMENT_FOR_t10";
HAnimSegment555.DEF = "hanim_SEGMENT_FOR_t10";
TouchSensor TouchSensor556 = createNode("TouchSensor");
TouchSensor556.description = "joint t10 segment SEGMENT_FOR_t10";
HAnimSegment555.children = new MFNode();

HAnimSegment555.children[0] = TouchSensor556;

Transform Transform557 = createNode("Transform");
Transform557.translation = new SFVec3f(new float[-0.0002,-0.1157,1.0552]);
Shape Shape558 = createNode("Shape");
Shape558.USE = "JointShape";
Transform557.child = new undefined();

Transform557.child[0] = Shape558;

HAnimSegment555.children[1] = Transform557;

HAnimSite HAnimSite559 = createNode("HAnimSite");
HAnimSite559.name = "SEGMENT_FOR_t10_tip";
HAnimSite559.DEF = "hanim_SEGMENT_FOR_t10_tip";
Transform Transform560 = createNode("Transform");
Transform560.translation = new SFVec3f(new float[-0.0002,-0.1157,1.0552]);
Shape Shape561 = createNode("Shape");
Shape561.USE = "SiteShape";
Transform560.child = new undefined();

Transform560.child[0] = Shape561;

HAnimSite559.children = new MFNode();

HAnimSite559.children[0] = Transform560;

HAnimSegment555.children[2] = HAnimSite559;

HAnimJoint554.children = new MFNode();

HAnimJoint554.children[0] = HAnimSegment555;

HAnimJoint HAnimJoint562 = createNode("HAnimJoint");
HAnimJoint562.name = "t9";
HAnimJoint562.DEF = "hanim_t9";
HAnimJoint562.center = new SFVec3f(new float[-0.0002,-0.1156,1.0699]);
HAnimSegment HAnimSegment563 = createNode("HAnimSegment");
HAnimSegment563.name = "SEGMENT_FOR_t9";
HAnimSegment563.DEF = "hanim_SEGMENT_FOR_t9";
TouchSensor TouchSensor564 = createNode("TouchSensor");
TouchSensor564.description = "joint t9 segment SEGMENT_FOR_t9";
HAnimSegment563.children = new MFNode();

HAnimSegment563.children[0] = TouchSensor564;

Transform Transform565 = createNode("Transform");
Transform565.translation = new SFVec3f(new float[-0.0002,-0.1156,1.0699]);
Shape Shape566 = createNode("Shape");
Shape566.USE = "JointShape";
Transform565.child = new undefined();

Transform565.child[0] = Shape566;

HAnimSegment563.children[1] = Transform565;

HAnimSite HAnimSite567 = createNode("HAnimSite");
HAnimSite567.name = "SEGMENT_FOR_t9_tip";
HAnimSite567.DEF = "hanim_SEGMENT_FOR_t9_tip";
Transform Transform568 = createNode("Transform");
Transform568.translation = new SFVec3f(new float[-0.0002,-0.1156,1.0699]);
Shape Shape569 = createNode("Shape");
Shape569.USE = "SiteShape";
Transform568.child = new undefined();

Transform568.child[0] = Shape569;

HAnimSite567.children = new MFNode();

HAnimSite567.children[0] = Transform568;

HAnimSegment563.children[2] = HAnimSite567;

HAnimJoint562.children = new MFNode();

HAnimJoint562.children[0] = HAnimSegment563;

HAnimJoint HAnimJoint570 = createNode("HAnimJoint");
HAnimJoint570.name = "t8";
HAnimJoint570.DEF = "hanim_t8";
HAnimJoint570.center = new SFVec3f(new float[-0.0002,-0.1156,1.0845]);
HAnimSegment HAnimSegment571 = createNode("HAnimSegment");
HAnimSegment571.name = "SEGMENT_FOR_t8";
HAnimSegment571.DEF = "hanim_SEGMENT_FOR_t8";
TouchSensor TouchSensor572 = createNode("TouchSensor");
TouchSensor572.description = "joint t8 segment SEGMENT_FOR_t8";
HAnimSegment571.children = new MFNode();

HAnimSegment571.children[0] = TouchSensor572;

Transform Transform573 = createNode("Transform");
Transform573.translation = new SFVec3f(new float[-0.0002,-0.1156,1.0845]);
Shape Shape574 = createNode("Shape");
Shape574.USE = "JointShape";
Transform573.child = new undefined();

Transform573.child[0] = Shape574;

HAnimSegment571.children[1] = Transform573;

HAnimSite HAnimSite575 = createNode("HAnimSite");
HAnimSite575.name = "SEGMENT_FOR_t8_tip";
HAnimSite575.DEF = "hanim_SEGMENT_FOR_t8_tip";
Transform Transform576 = createNode("Transform");
Transform576.translation = new SFVec3f(new float[-0.0002,-0.1156,1.0845]);
Shape Shape577 = createNode("Shape");
Shape577.USE = "SiteShape";
Transform576.child = new undefined();

Transform576.child[0] = Shape577;

HAnimSite575.children = new MFNode();

HAnimSite575.children[0] = Transform576;

HAnimSegment571.children[2] = HAnimSite575;

HAnimJoint570.children = new MFNode();

HAnimJoint570.children[0] = HAnimSegment571;

HAnimJoint HAnimJoint578 = createNode("HAnimJoint");
HAnimJoint578.name = "t7";
HAnimJoint578.DEF = "hanim_t7";
HAnimJoint578.center = new SFVec3f(new float[-0.0002,-0.1156,1.1002]);
HAnimSegment HAnimSegment579 = createNode("HAnimSegment");
HAnimSegment579.name = "SEGMENT_FOR_t7";
HAnimSegment579.DEF = "hanim_SEGMENT_FOR_t7";
TouchSensor TouchSensor580 = createNode("TouchSensor");
TouchSensor580.description = "joint t7 segment SEGMENT_FOR_t7";
HAnimSegment579.children = new MFNode();

HAnimSegment579.children[0] = TouchSensor580;

Transform Transform581 = createNode("Transform");
Transform581.translation = new SFVec3f(new float[-0.0002,-0.1156,1.1002]);
Shape Shape582 = createNode("Shape");
Shape582.USE = "JointShape";
Transform581.child = new undefined();

Transform581.child[0] = Shape582;

HAnimSegment579.children[1] = Transform581;

HAnimSite HAnimSite583 = createNode("HAnimSite");
HAnimSite583.name = "SEGMENT_FOR_t7_tip";
HAnimSite583.DEF = "hanim_SEGMENT_FOR_t7_tip";
Transform Transform584 = createNode("Transform");
Transform584.translation = new SFVec3f(new float[-0.0002,-0.1156,1.1002]);
Shape Shape585 = createNode("Shape");
Shape585.USE = "SiteShape";
Transform584.child = new undefined();

Transform584.child[0] = Shape585;

HAnimSite583.children = new MFNode();

HAnimSite583.children[0] = Transform584;

HAnimSegment579.children[2] = HAnimSite583;

HAnimJoint578.children = new MFNode();

HAnimJoint578.children[0] = HAnimSegment579;

HAnimJoint HAnimJoint586 = createNode("HAnimJoint");
HAnimJoint586.name = "t6";
HAnimJoint586.DEF = "hanim_t6";
HAnimJoint586.center = new SFVec3f(new float[-0.0002,-0.1156,1.1131]);
HAnimSegment HAnimSegment587 = createNode("HAnimSegment");
HAnimSegment587.name = "SEGMENT_FOR_t6";
HAnimSegment587.DEF = "hanim_SEGMENT_FOR_t6";
TouchSensor TouchSensor588 = createNode("TouchSensor");
TouchSensor588.description = "joint t6 segment SEGMENT_FOR_t6";
HAnimSegment587.children = new MFNode();

HAnimSegment587.children[0] = TouchSensor588;

Transform Transform589 = createNode("Transform");
Transform589.translation = new SFVec3f(new float[-0.0002,-0.1156,1.1131]);
Shape Shape590 = createNode("Shape");
Shape590.USE = "JointShape";
Transform589.child = new undefined();

Transform589.child[0] = Shape590;

HAnimSegment587.children[1] = Transform589;

HAnimSite HAnimSite591 = createNode("HAnimSite");
HAnimSite591.name = "SEGMENT_FOR_t6_tip";
HAnimSite591.DEF = "hanim_SEGMENT_FOR_t6_tip";
Transform Transform592 = createNode("Transform");
Transform592.translation = new SFVec3f(new float[-0.0002,-0.1156,1.1131]);
Shape Shape593 = createNode("Shape");
Shape593.USE = "SiteShape";
Transform592.child = new undefined();

Transform592.child[0] = Shape593;

HAnimSite591.children = new MFNode();

HAnimSite591.children[0] = Transform592;

HAnimSegment587.children[2] = HAnimSite591;

HAnimJoint586.children = new MFNode();

HAnimJoint586.children[0] = HAnimSegment587;

HAnimJoint HAnimJoint594 = createNode("HAnimJoint");
HAnimJoint594.name = "t5";
HAnimJoint594.DEF = "hanim_t5";
HAnimJoint594.center = new SFVec3f(new float[-0.0002,-0.1156,1.1286]);
HAnimSegment HAnimSegment595 = createNode("HAnimSegment");
HAnimSegment595.name = "SEGMENT_FOR_t5";
HAnimSegment595.DEF = "hanim_SEGMENT_FOR_t5";
TouchSensor TouchSensor596 = createNode("TouchSensor");
TouchSensor596.description = "joint t5 segment SEGMENT_FOR_t5";
HAnimSegment595.children = new MFNode();

HAnimSegment595.children[0] = TouchSensor596;

Transform Transform597 = createNode("Transform");
Transform597.translation = new SFVec3f(new float[-0.0002,-0.1156,1.1286]);
Shape Shape598 = createNode("Shape");
Shape598.USE = "JointShape";
Transform597.child = new undefined();

Transform597.child[0] = Shape598;

HAnimSegment595.children[1] = Transform597;

HAnimSite HAnimSite599 = createNode("HAnimSite");
HAnimSite599.name = "SEGMENT_FOR_t5_tip";
HAnimSite599.DEF = "hanim_SEGMENT_FOR_t5_tip";
Transform Transform600 = createNode("Transform");
Transform600.translation = new SFVec3f(new float[-0.0002,-0.1156,1.1286]);
Shape Shape601 = createNode("Shape");
Shape601.USE = "SiteShape";
Transform600.child = new undefined();

Transform600.child[0] = Shape601;

HAnimSite599.children = new MFNode();

HAnimSite599.children[0] = Transform600;

HAnimSegment595.children[2] = HAnimSite599;

HAnimJoint594.children = new MFNode();

HAnimJoint594.children[0] = HAnimSegment595;

HAnimJoint HAnimJoint602 = createNode("HAnimJoint");
HAnimJoint602.name = "t4";
HAnimJoint602.DEF = "hanim_t4";
HAnimJoint602.center = new SFVec3f(new float[-0.0002,-0.1156,1.1439]);
HAnimSegment HAnimSegment603 = createNode("HAnimSegment");
HAnimSegment603.name = "SEGMENT_FOR_t4";
HAnimSegment603.DEF = "hanim_SEGMENT_FOR_t4";
TouchSensor TouchSensor604 = createNode("TouchSensor");
TouchSensor604.description = "joint t4 segment SEGMENT_FOR_t4";
HAnimSegment603.children = new MFNode();

HAnimSegment603.children[0] = TouchSensor604;

Transform Transform605 = createNode("Transform");
Transform605.translation = new SFVec3f(new float[-0.0002,-0.1156,1.1439]);
Shape Shape606 = createNode("Shape");
Shape606.USE = "JointShape";
Transform605.child = new undefined();

Transform605.child[0] = Shape606;

HAnimSegment603.children[1] = Transform605;

HAnimSite HAnimSite607 = createNode("HAnimSite");
HAnimSite607.name = "SEGMENT_FOR_t4_tip";
HAnimSite607.DEF = "hanim_SEGMENT_FOR_t4_tip";
Transform Transform608 = createNode("Transform");
Transform608.translation = new SFVec3f(new float[-0.0002,-0.1156,1.1439]);
Shape Shape609 = createNode("Shape");
Shape609.USE = "SiteShape";
Transform608.child = new undefined();

Transform608.child[0] = Shape609;

HAnimSite607.children = new MFNode();

HAnimSite607.children[0] = Transform608;

HAnimSegment603.children[2] = HAnimSite607;

HAnimJoint602.children = new MFNode();

HAnimJoint602.children[0] = HAnimSegment603;

HAnimJoint HAnimJoint610 = createNode("HAnimJoint");
HAnimJoint610.name = "t3";
HAnimJoint610.DEF = "hanim_t3";
HAnimJoint610.center = new SFVec3f(new float[-0.0002,-0.1156,1.1623]);
HAnimSegment HAnimSegment611 = createNode("HAnimSegment");
HAnimSegment611.name = "SEGMENT_FOR_t3";
HAnimSegment611.DEF = "hanim_SEGMENT_FOR_t3";
TouchSensor TouchSensor612 = createNode("TouchSensor");
TouchSensor612.description = "joint t3 segment SEGMENT_FOR_t3";
HAnimSegment611.children = new MFNode();

HAnimSegment611.children[0] = TouchSensor612;

Transform Transform613 = createNode("Transform");
Transform613.translation = new SFVec3f(new float[-0.0002,-0.1156,1.1623]);
Shape Shape614 = createNode("Shape");
Shape614.USE = "JointShape";
Transform613.child = new undefined();

Transform613.child[0] = Shape614;

HAnimSegment611.children[1] = Transform613;

HAnimSite HAnimSite615 = createNode("HAnimSite");
HAnimSite615.name = "SEGMENT_FOR_t3_tip";
HAnimSite615.DEF = "hanim_SEGMENT_FOR_t3_tip";
Transform Transform616 = createNode("Transform");
Transform616.translation = new SFVec3f(new float[-0.0002,-0.1156,1.1623]);
Shape Shape617 = createNode("Shape");
Shape617.USE = "SiteShape";
Transform616.child = new undefined();

Transform616.child[0] = Shape617;

HAnimSite615.children = new MFNode();

HAnimSite615.children[0] = Transform616;

HAnimSegment611.children[2] = HAnimSite615;

HAnimJoint610.children = new MFNode();

HAnimJoint610.children[0] = HAnimSegment611;

HAnimJoint HAnimJoint618 = createNode("HAnimJoint");
HAnimJoint618.name = "t2";
HAnimJoint618.DEF = "hanim_t2";
HAnimJoint618.center = new SFVec3f(new float[-0.0002,-0.1157,1.1871]);
HAnimSegment HAnimSegment619 = createNode("HAnimSegment");
HAnimSegment619.name = "SEGMENT_FOR_t2";
HAnimSegment619.DEF = "hanim_SEGMENT_FOR_t2";
TouchSensor TouchSensor620 = createNode("TouchSensor");
TouchSensor620.description = "joint t2 segment SEGMENT_FOR_t2";
HAnimSegment619.children = new MFNode();

HAnimSegment619.children[0] = TouchSensor620;

Transform Transform621 = createNode("Transform");
Transform621.translation = new SFVec3f(new float[-0.0002,-0.1157,1.1871]);
Shape Shape622 = createNode("Shape");
Shape622.USE = "JointShape";
Transform621.child = new undefined();

Transform621.child[0] = Shape622;

HAnimSegment619.children[1] = Transform621;

HAnimSite HAnimSite623 = createNode("HAnimSite");
HAnimSite623.name = "SEGMENT_FOR_t2_tip";
HAnimSite623.DEF = "hanim_SEGMENT_FOR_t2_tip";
Transform Transform624 = createNode("Transform");
Transform624.translation = new SFVec3f(new float[-0.0002,-0.1157,1.1871]);
Shape Shape625 = createNode("Shape");
Shape625.USE = "SiteShape";
Transform624.child = new undefined();

Transform624.child[0] = Shape625;

HAnimSite623.children = new MFNode();

HAnimSite623.children[0] = Transform624;

HAnimSegment619.children[2] = HAnimSite623;

HAnimJoint618.children = new MFNode();

HAnimJoint618.children[0] = HAnimSegment619;

HAnimJoint HAnimJoint626 = createNode("HAnimJoint");
HAnimJoint626.name = "t1";
HAnimJoint626.DEF = "hanim_t1";
HAnimJoint626.center = new SFVec3f(new float[-0.0002,-0.1156,1.2109]);
HAnimSegment HAnimSegment627 = createNode("HAnimSegment");
HAnimSegment627.name = "SEGMENT_FOR_t1";
HAnimSegment627.DEF = "hanim_SEGMENT_FOR_t1";
TouchSensor TouchSensor628 = createNode("TouchSensor");
TouchSensor628.description = "joint t1 segment SEGMENT_FOR_t1";
HAnimSegment627.children = new MFNode();

HAnimSegment627.children[0] = TouchSensor628;

Transform Transform629 = createNode("Transform");
Transform629.translation = new SFVec3f(new float[-0.0002,-0.1156,1.2109]);
Shape Shape630 = createNode("Shape");
Shape630.USE = "JointShape";
Transform629.child = new undefined();

Transform629.child[0] = Shape630;

HAnimSegment627.children[1] = Transform629;

HAnimSite HAnimSite631 = createNode("HAnimSite");
HAnimSite631.name = "SEGMENT_FOR_t1_tip";
HAnimSite631.DEF = "hanim_SEGMENT_FOR_t1_tip";
Transform Transform632 = createNode("Transform");
Transform632.translation = new SFVec3f(new float[-0.0002,-0.1156,1.2109]);
Shape Shape633 = createNode("Shape");
Shape633.USE = "SiteShape";
Transform632.child = new undefined();

Transform632.child[0] = Shape633;

HAnimSite631.children = new MFNode();

HAnimSite631.children[0] = Transform632;

HAnimSegment627.children[2] = HAnimSite631;

HAnimJoint626.children = new MFNode();

HAnimJoint626.children[0] = HAnimSegment627;

HAnimJoint HAnimJoint634 = createNode("HAnimJoint");
HAnimJoint634.name = "c7";
HAnimJoint634.DEF = "hanim_c7";
HAnimJoint634.center = new SFVec3f(new float[-0.0002,-0.1169,1.2368]);
HAnimSegment HAnimSegment635 = createNode("HAnimSegment");
HAnimSegment635.name = "SEGMENT_FOR_c7";
HAnimSegment635.DEF = "hanim_SEGMENT_FOR_c7";
TouchSensor TouchSensor636 = createNode("TouchSensor");
TouchSensor636.description = "joint c7 segment SEGMENT_FOR_c7";
HAnimSegment635.children = new MFNode();

HAnimSegment635.children[0] = TouchSensor636;

Transform Transform637 = createNode("Transform");
Transform637.translation = new SFVec3f(new float[-0.0002,-0.1169,1.2368]);
Shape Shape638 = createNode("Shape");
Shape638.USE = "JointShape";
Transform637.child = new undefined();

Transform637.child[0] = Shape638;

HAnimSegment635.children[1] = Transform637;

HAnimSite HAnimSite639 = createNode("HAnimSite");
HAnimSite639.name = "SEGMENT_FOR_c7_tip";
HAnimSite639.DEF = "hanim_SEGMENT_FOR_c7_tip";
Transform Transform640 = createNode("Transform");
Transform640.translation = new SFVec3f(new float[-0.0002,-0.1169,1.2368]);
Shape Shape641 = createNode("Shape");
Shape641.USE = "SiteShape";
Transform640.child = new undefined();

Transform640.child[0] = Shape641;

HAnimSite639.children = new MFNode();

HAnimSite639.children[0] = Transform640;

HAnimSegment635.children[2] = HAnimSite639;

HAnimJoint634.children = new MFNode();

HAnimJoint634.children[0] = HAnimSegment635;

HAnimJoint HAnimJoint642 = createNode("HAnimJoint");
HAnimJoint642.name = "c6";
HAnimJoint642.DEF = "hanim_c6";
HAnimJoint642.center = new SFVec3f(new float[-0.0002,-0.1169,1.249]);
HAnimSegment HAnimSegment643 = createNode("HAnimSegment");
HAnimSegment643.name = "SEGMENT_FOR_c6";
HAnimSegment643.DEF = "hanim_SEGMENT_FOR_c6";
TouchSensor TouchSensor644 = createNode("TouchSensor");
TouchSensor644.description = "joint c6 segment SEGMENT_FOR_c6";
HAnimSegment643.children = new MFNode();

HAnimSegment643.children[0] = TouchSensor644;

Transform Transform645 = createNode("Transform");
Transform645.translation = new SFVec3f(new float[-0.0002,-0.1169,1.249]);
Shape Shape646 = createNode("Shape");
Shape646.USE = "JointShape";
Transform645.child = new undefined();

Transform645.child[0] = Shape646;

HAnimSegment643.children[1] = Transform645;

HAnimSite HAnimSite647 = createNode("HAnimSite");
HAnimSite647.name = "SEGMENT_FOR_c6_tip";
HAnimSite647.DEF = "hanim_SEGMENT_FOR_c6_tip";
Transform Transform648 = createNode("Transform");
Transform648.translation = new SFVec3f(new float[-0.0002,-0.1169,1.249]);
Shape Shape649 = createNode("Shape");
Shape649.USE = "SiteShape";
Transform648.child = new undefined();

Transform648.child[0] = Shape649;

HAnimSite647.children = new MFNode();

HAnimSite647.children[0] = Transform648;

HAnimSegment643.children[2] = HAnimSite647;

HAnimJoint642.children = new MFNode();

HAnimJoint642.children[0] = HAnimSegment643;

HAnimJoint HAnimJoint650 = createNode("HAnimJoint");
HAnimJoint650.name = "c5";
HAnimJoint650.DEF = "hanim_c5";
HAnimJoint650.center = new SFVec3f(new float[-0.0002,-0.1169,1.2613]);
HAnimSegment HAnimSegment651 = createNode("HAnimSegment");
HAnimSegment651.name = "SEGMENT_FOR_c5";
HAnimSegment651.DEF = "hanim_SEGMENT_FOR_c5";
TouchSensor TouchSensor652 = createNode("TouchSensor");
TouchSensor652.description = "joint c5 segment SEGMENT_FOR_c5";
HAnimSegment651.children = new MFNode();

HAnimSegment651.children[0] = TouchSensor652;

Transform Transform653 = createNode("Transform");
Transform653.translation = new SFVec3f(new float[-0.0002,-0.1169,1.2613]);
Shape Shape654 = createNode("Shape");
Shape654.USE = "JointShape";
Transform653.child = new undefined();

Transform653.child[0] = Shape654;

HAnimSegment651.children[1] = Transform653;

HAnimSite HAnimSite655 = createNode("HAnimSite");
HAnimSite655.name = "SEGMENT_FOR_c5_tip";
HAnimSite655.DEF = "hanim_SEGMENT_FOR_c5_tip";
Transform Transform656 = createNode("Transform");
Transform656.translation = new SFVec3f(new float[-0.0002,-0.1169,1.2613]);
Shape Shape657 = createNode("Shape");
Shape657.USE = "SiteShape";
Transform656.child = new undefined();

Transform656.child[0] = Shape657;

HAnimSite655.children = new MFNode();

HAnimSite655.children[0] = Transform656;

HAnimSegment651.children[2] = HAnimSite655;

HAnimJoint650.children = new MFNode();

HAnimJoint650.children[0] = HAnimSegment651;

HAnimJoint HAnimJoint658 = createNode("HAnimJoint");
HAnimJoint658.name = "c4";
HAnimJoint658.DEF = "hanim_c4";
HAnimJoint658.center = new SFVec3f(new float[-0.0002,-0.1169,1.2737]);
HAnimSegment HAnimSegment659 = createNode("HAnimSegment");
HAnimSegment659.name = "SEGMENT_FOR_c4";
HAnimSegment659.DEF = "hanim_SEGMENT_FOR_c4";
TouchSensor TouchSensor660 = createNode("TouchSensor");
TouchSensor660.description = "joint c4 segment SEGMENT_FOR_c4";
HAnimSegment659.children = new MFNode();

HAnimSegment659.children[0] = TouchSensor660;

Transform Transform661 = createNode("Transform");
Transform661.translation = new SFVec3f(new float[-0.0002,-0.1169,1.2737]);
Shape Shape662 = createNode("Shape");
Shape662.USE = "JointShape";
Transform661.child = new undefined();

Transform661.child[0] = Shape662;

HAnimSegment659.children[1] = Transform661;

HAnimSite HAnimSite663 = createNode("HAnimSite");
HAnimSite663.name = "SEGMENT_FOR_c4_tip";
HAnimSite663.DEF = "hanim_SEGMENT_FOR_c4_tip";
Transform Transform664 = createNode("Transform");
Transform664.translation = new SFVec3f(new float[-0.0002,-0.1169,1.2737]);
Shape Shape665 = createNode("Shape");
Shape665.USE = "SiteShape";
Transform664.child = new undefined();

Transform664.child[0] = Shape665;

HAnimSite663.children = new MFNode();

HAnimSite663.children[0] = Transform664;

HAnimSegment659.children[2] = HAnimSite663;

HAnimJoint658.children = new MFNode();

HAnimJoint658.children[0] = HAnimSegment659;

HAnimJoint HAnimJoint666 = createNode("HAnimJoint");
HAnimJoint666.name = "c3";
HAnimJoint666.DEF = "hanim_c3";
HAnimJoint666.center = new SFVec3f(new float[-0.0002,-0.1169,1.2865]);
HAnimSegment HAnimSegment667 = createNode("HAnimSegment");
HAnimSegment667.name = "SEGMENT_FOR_c3";
HAnimSegment667.DEF = "hanim_SEGMENT_FOR_c3";
TouchSensor TouchSensor668 = createNode("TouchSensor");
TouchSensor668.description = "joint c3 segment SEGMENT_FOR_c3";
HAnimSegment667.children = new MFNode();

HAnimSegment667.children[0] = TouchSensor668;

Transform Transform669 = createNode("Transform");
Transform669.translation = new SFVec3f(new float[-0.0002,-0.1169,1.2865]);
Shape Shape670 = createNode("Shape");
Shape670.USE = "JointShape";
Transform669.child = new undefined();

Transform669.child[0] = Shape670;

HAnimSegment667.children[1] = Transform669;

HAnimSite HAnimSite671 = createNode("HAnimSite");
HAnimSite671.name = "SEGMENT_FOR_c3_tip";
HAnimSite671.DEF = "hanim_SEGMENT_FOR_c3_tip";
Transform Transform672 = createNode("Transform");
Transform672.translation = new SFVec3f(new float[-0.0002,-0.1169,1.2865]);
Shape Shape673 = createNode("Shape");
Shape673.USE = "SiteShape";
Transform672.child = new undefined();

Transform672.child[0] = Shape673;

HAnimSite671.children = new MFNode();

HAnimSite671.children[0] = Transform672;

HAnimSegment667.children[2] = HAnimSite671;

HAnimJoint666.children = new MFNode();

HAnimJoint666.children[0] = HAnimSegment667;

HAnimJoint HAnimJoint674 = createNode("HAnimJoint");
HAnimJoint674.name = "c2";
HAnimJoint674.DEF = "hanim_c2";
HAnimJoint674.center = new SFVec3f(new float[-0.0002,-0.1169,1.2982]);
HAnimSegment HAnimSegment675 = createNode("HAnimSegment");
HAnimSegment675.name = "SEGMENT_FOR_c2";
HAnimSegment675.DEF = "hanim_SEGMENT_FOR_c2";
TouchSensor TouchSensor676 = createNode("TouchSensor");
TouchSensor676.description = "joint c2 segment SEGMENT_FOR_c2";
HAnimSegment675.children = new MFNode();

HAnimSegment675.children[0] = TouchSensor676;

Transform Transform677 = createNode("Transform");
Transform677.translation = new SFVec3f(new float[-0.0002,-0.1169,1.2982]);
Shape Shape678 = createNode("Shape");
Shape678.USE = "JointShape";
Transform677.child = new undefined();

Transform677.child[0] = Shape678;

HAnimSegment675.children[1] = Transform677;

HAnimSite HAnimSite679 = createNode("HAnimSite");
HAnimSite679.name = "SEGMENT_FOR_c2_tip";
HAnimSite679.DEF = "hanim_SEGMENT_FOR_c2_tip";
Transform Transform680 = createNode("Transform");
Transform680.translation = new SFVec3f(new float[-0.0002,-0.1169,1.2982]);
Shape Shape681 = createNode("Shape");
Shape681.USE = "SiteShape";
Transform680.child = new undefined();

Transform680.child[0] = Shape681;

HAnimSite679.children = new MFNode();

HAnimSite679.children[0] = Transform680;

HAnimSegment675.children[2] = HAnimSite679;

HAnimJoint674.children = new MFNode();

HAnimJoint674.children[0] = HAnimSegment675;

HAnimJoint HAnimJoint682 = createNode("HAnimJoint");
HAnimJoint682.name = "c1";
HAnimJoint682.DEF = "hanim_c1";
HAnimJoint682.center = new SFVec3f(new float[-0.0002,-0.1169,1.3099]);
HAnimSegment HAnimSegment683 = createNode("HAnimSegment");
HAnimSegment683.name = "SEGMENT_FOR_c1";
HAnimSegment683.DEF = "hanim_SEGMENT_FOR_c1";
TouchSensor TouchSensor684 = createNode("TouchSensor");
TouchSensor684.description = "joint c1 segment SEGMENT_FOR_c1";
HAnimSegment683.children = new MFNode();

HAnimSegment683.children[0] = TouchSensor684;

Transform Transform685 = createNode("Transform");
Transform685.translation = new SFVec3f(new float[-0.0002,-0.1169,1.3099]);
Shape Shape686 = createNode("Shape");
Shape686.USE = "JointShape";
Transform685.child = new undefined();

Transform685.child[0] = Shape686;

HAnimSegment683.children[1] = Transform685;

HAnimSite HAnimSite687 = createNode("HAnimSite");
HAnimSite687.name = "SEGMENT_FOR_c1_tip";
HAnimSite687.DEF = "hanim_SEGMENT_FOR_c1_tip";
Transform Transform688 = createNode("Transform");
Transform688.translation = new SFVec3f(new float[-0.0002,-0.1169,1.3099]);
Shape Shape689 = createNode("Shape");
Shape689.USE = "SiteShape";
Transform688.child = new undefined();

Transform688.child[0] = Shape689;

HAnimSite687.children = new MFNode();

HAnimSite687.children[0] = Transform688;

HAnimSegment683.children[2] = HAnimSite687;

HAnimJoint682.children = new MFNode();

HAnimJoint682.children[0] = HAnimSegment683;

HAnimJoint HAnimJoint690 = createNode("HAnimJoint");
HAnimJoint690.name = "skull";
HAnimJoint690.DEF = "hanim_skull";
HAnimJoint690.center = new SFVec3f(new float[-0.0002,-0.1173,1.3041]);
HAnimSegment HAnimSegment691 = createNode("HAnimSegment");
HAnimSegment691.name = "SEGMENT_FOR_skull";
HAnimSegment691.DEF = "hanim_SEGMENT_FOR_skull";
TouchSensor TouchSensor692 = createNode("TouchSensor");
TouchSensor692.description = "joint skull segment SEGMENT_FOR_skull";
HAnimSegment691.children = new MFNode();

HAnimSegment691.children[0] = TouchSensor692;

Transform Transform693 = createNode("Transform");
Transform693.translation = new SFVec3f(new float[-0.0002,-0.1173,1.3041]);
Shape Shape694 = createNode("Shape");
Shape694.USE = "JointShape";
Transform693.child = new undefined();

Transform693.child[0] = Shape694;

HAnimSegment691.children[1] = Transform693;

HAnimSite HAnimSite695 = createNode("HAnimSite");
HAnimSite695.name = "SEGMENT_FOR_skull_tip";
HAnimSite695.DEF = "hanim_SEGMENT_FOR_skull_tip";
Transform Transform696 = createNode("Transform");
Transform696.translation = new SFVec3f(new float[-0.0002,-0.1173,1.3041]);
Shape Shape697 = createNode("Shape");
Shape697.USE = "SiteShape";
Transform696.child = new undefined();

Transform696.child[0] = Shape697;

HAnimSite695.children = new MFNode();

HAnimSite695.children[0] = Transform696;

HAnimSegment691.children[2] = HAnimSite695;

HAnimJoint690.children = new MFNode();

HAnimJoint690.children[0] = HAnimSegment691;

HAnimJoint HAnimJoint698 = createNode("HAnimJoint");
HAnimJoint698.name = "l_eyelid";
HAnimJoint698.DEF = "hanim_l_eyelid";
HAnimJoint698.center = new SFVec3f(new float[0.0503,-0.0689,1.4157]);
HAnimSegment HAnimSegment699 = createNode("HAnimSegment");
HAnimSegment699.name = "SEGMENT_FOR_l_eyelid";
HAnimSegment699.DEF = "hanim_SEGMENT_FOR_l_eyelid";
TouchSensor TouchSensor700 = createNode("TouchSensor");
TouchSensor700.description = "joint l_eyelid segment SEGMENT_FOR_l_eyelid";
HAnimSegment699.children = new MFNode();

HAnimSegment699.children[0] = TouchSensor700;

Transform Transform701 = createNode("Transform");
Transform701.translation = new SFVec3f(new float[0.0503,-0.0689,1.4157]);
Shape Shape702 = createNode("Shape");
Shape702.USE = "JointShape";
Transform701.child = new undefined();

Transform701.child[0] = Shape702;

HAnimSegment699.children[1] = Transform701;

HAnimSite HAnimSite703 = createNode("HAnimSite");
HAnimSite703.name = "SEGMENT_FOR_l_eyelid_tip";
HAnimSite703.DEF = "hanim_SEGMENT_FOR_l_eyelid_tip";
Transform Transform704 = createNode("Transform");
Transform704.translation = new SFVec3f(new float[0.0503,-0.0689,1.4157]);
Shape Shape705 = createNode("Shape");
Shape705.USE = "SiteShape";
Transform704.child = new undefined();

Transform704.child[0] = Shape705;

HAnimSite703.children = new MFNode();

HAnimSite703.children[0] = Transform704;

HAnimSegment699.children[2] = HAnimSite703;

HAnimJoint698.children = new MFNode();

HAnimJoint698.children[0] = HAnimSegment699;

HAnimJoint690.children[1] = HAnimJoint698;

HAnimJoint HAnimJoint706 = createNode("HAnimJoint");
HAnimJoint706.name = "r_eyelid";
HAnimJoint706.DEF = "hanim_r_eyelid";
HAnimJoint706.center = new SFVec3f(new float[-0.0507,-0.0689,1.4157]);
HAnimSegment HAnimSegment707 = createNode("HAnimSegment");
HAnimSegment707.name = "SEGMENT_FOR_r_eyelid";
HAnimSegment707.DEF = "hanim_SEGMENT_FOR_r_eyelid";
TouchSensor TouchSensor708 = createNode("TouchSensor");
TouchSensor708.description = "joint r_eyelid segment SEGMENT_FOR_r_eyelid";
HAnimSegment707.children = new MFNode();

HAnimSegment707.children[0] = TouchSensor708;

Transform Transform709 = createNode("Transform");
Transform709.translation = new SFVec3f(new float[-0.0507,-0.0689,1.4157]);
Shape Shape710 = createNode("Shape");
Shape710.USE = "JointShape";
Transform709.child = new undefined();

Transform709.child[0] = Shape710;

HAnimSegment707.children[1] = Transform709;

HAnimSite HAnimSite711 = createNode("HAnimSite");
HAnimSite711.name = "SEGMENT_FOR_r_eyelid_tip";
HAnimSite711.DEF = "hanim_SEGMENT_FOR_r_eyelid_tip";
Transform Transform712 = createNode("Transform");
Transform712.translation = new SFVec3f(new float[-0.0507,-0.0689,1.4157]);
Shape Shape713 = createNode("Shape");
Shape713.USE = "SiteShape";
Transform712.child = new undefined();

Transform712.child[0] = Shape713;

HAnimSite711.children = new MFNode();

HAnimSite711.children[0] = Transform712;

HAnimSegment707.children[2] = HAnimSite711;

HAnimJoint706.children = new MFNode();

HAnimJoint706.children[0] = HAnimSegment707;

HAnimJoint690.children[2] = HAnimJoint706;

HAnimJoint HAnimJoint714 = createNode("HAnimJoint");
HAnimJoint714.name = "l_eyeball";
HAnimJoint714.DEF = "hanim_l_eyeball";
HAnimJoint714.center = new SFVec3f(new float[0.0479,-0.0188,1.3963]);
HAnimSegment HAnimSegment715 = createNode("HAnimSegment");
HAnimSegment715.name = "SEGMENT_FOR_l_eyeball";
HAnimSegment715.DEF = "hanim_SEGMENT_FOR_l_eyeball";
TouchSensor TouchSensor716 = createNode("TouchSensor");
TouchSensor716.description = "joint l_eyeball segment SEGMENT_FOR_l_eyeball";
HAnimSegment715.children = new MFNode();

HAnimSegment715.children[0] = TouchSensor716;

Transform Transform717 = createNode("Transform");
Transform717.translation = new SFVec3f(new float[0.0479,-0.0188,1.3963]);
Shape Shape718 = createNode("Shape");
Shape718.USE = "JointShape";
Transform717.child = new undefined();

Transform717.child[0] = Shape718;

HAnimSegment715.children[1] = Transform717;

HAnimSite HAnimSite719 = createNode("HAnimSite");
HAnimSite719.name = "SEGMENT_FOR_l_eyeball_tip";
HAnimSite719.DEF = "hanim_SEGMENT_FOR_l_eyeball_tip";
Transform Transform720 = createNode("Transform");
Transform720.translation = new SFVec3f(new float[0.0479,-0.0188,1.3963]);
Shape Shape721 = createNode("Shape");
Shape721.USE = "SiteShape";
Transform720.child = new undefined();

Transform720.child[0] = Shape721;

HAnimSite719.children = new MFNode();

HAnimSite719.children[0] = Transform720;

HAnimSegment715.children[2] = HAnimSite719;

HAnimJoint714.children = new MFNode();

HAnimJoint714.children[0] = HAnimSegment715;

HAnimJoint690.children[3] = HAnimJoint714;

HAnimJoint HAnimJoint722 = createNode("HAnimJoint");
HAnimJoint722.name = "r_eyeball";
HAnimJoint722.DEF = "hanim_r_eyeball";
HAnimJoint722.center = new SFVec3f(new float[-0.0483,-0.0188,1.3963]);
HAnimSegment HAnimSegment723 = createNode("HAnimSegment");
HAnimSegment723.name = "SEGMENT_FOR_r_eyeball";
HAnimSegment723.DEF = "hanim_SEGMENT_FOR_r_eyeball";
TouchSensor TouchSensor724 = createNode("TouchSensor");
TouchSensor724.description = "joint r_eyeball segment SEGMENT_FOR_r_eyeball";
HAnimSegment723.children = new MFNode();

HAnimSegment723.children[0] = TouchSensor724;

Transform Transform725 = createNode("Transform");
Transform725.translation = new SFVec3f(new float[-0.0483,-0.0188,1.3963]);
Shape Shape726 = createNode("Shape");
Shape726.USE = "JointShape";
Transform725.child = new undefined();

Transform725.child[0] = Shape726;

HAnimSegment723.children[1] = Transform725;

HAnimSite HAnimSite727 = createNode("HAnimSite");
HAnimSite727.name = "SEGMENT_FOR_r_eyeball_tip";
HAnimSite727.DEF = "hanim_SEGMENT_FOR_r_eyeball_tip";
Transform Transform728 = createNode("Transform");
Transform728.translation = new SFVec3f(new float[-0.0483,-0.0188,1.3963]);
Shape Shape729 = createNode("Shape");
Shape729.USE = "SiteShape";
Transform728.child = new undefined();

Transform728.child[0] = Shape729;

HAnimSite727.children = new MFNode();

HAnimSite727.children[0] = Transform728;

HAnimSegment723.children[2] = HAnimSite727;

HAnimJoint722.children = new MFNode();

HAnimJoint722.children[0] = HAnimSegment723;

HAnimJoint690.children[4] = HAnimJoint722;

HAnimJoint HAnimJoint730 = createNode("HAnimJoint");
HAnimJoint730.name = "l_eyebrow";
HAnimJoint730.DEF = "hanim_l_eyebrow";
HAnimJoint730.center = new SFVec3f(new float[0.0216,0.0051,1.4053]);
HAnimSegment HAnimSegment731 = createNode("HAnimSegment");
HAnimSegment731.name = "SEGMENT_FOR_l_eyebrow";
HAnimSegment731.DEF = "hanim_SEGMENT_FOR_l_eyebrow";
TouchSensor TouchSensor732 = createNode("TouchSensor");
TouchSensor732.description = "joint l_eyebrow segment SEGMENT_FOR_l_eyebrow";
HAnimSegment731.children = new MFNode();

HAnimSegment731.children[0] = TouchSensor732;

Transform Transform733 = createNode("Transform");
Transform733.translation = new SFVec3f(new float[0.0216,0.0051,1.4053]);
Shape Shape734 = createNode("Shape");
Shape734.USE = "JointShape";
Transform733.child = new undefined();

Transform733.child[0] = Shape734;

HAnimSegment731.children[1] = Transform733;

HAnimSite HAnimSite735 = createNode("HAnimSite");
HAnimSite735.name = "SEGMENT_FOR_l_eyebrow_tip";
HAnimSite735.DEF = "hanim_SEGMENT_FOR_l_eyebrow_tip";
Transform Transform736 = createNode("Transform");
Transform736.translation = new SFVec3f(new float[0.0216,0.0051,1.4053]);
Shape Shape737 = createNode("Shape");
Shape737.USE = "SiteShape";
Transform736.child = new undefined();

Transform736.child[0] = Shape737;

HAnimSite735.children = new MFNode();

HAnimSite735.children[0] = Transform736;

HAnimSegment731.children[2] = HAnimSite735;

HAnimJoint730.children = new MFNode();

HAnimJoint730.children[0] = HAnimSegment731;

HAnimJoint690.children[5] = HAnimJoint730;

HAnimJoint HAnimJoint738 = createNode("HAnimJoint");
HAnimJoint738.name = "r_eyebrow";
HAnimJoint738.DEF = "hanim_r_eyebrow";
HAnimJoint738.center = new SFVec3f(new float[-0.0219,0.0051,1.4053]);
HAnimSegment HAnimSegment739 = createNode("HAnimSegment");
HAnimSegment739.name = "SEGMENT_FOR_r_eyebrow";
HAnimSegment739.DEF = "hanim_SEGMENT_FOR_r_eyebrow";
TouchSensor TouchSensor740 = createNode("TouchSensor");
TouchSensor740.description = "joint r_eyebrow segment SEGMENT_FOR_r_eyebrow";
HAnimSegment739.children = new MFNode();

HAnimSegment739.children[0] = TouchSensor740;

Transform Transform741 = createNode("Transform");
Transform741.translation = new SFVec3f(new float[-0.0219,0.0051,1.4053]);
Shape Shape742 = createNode("Shape");
Shape742.USE = "JointShape";
Transform741.child = new undefined();

Transform741.child[0] = Shape742;

HAnimSegment739.children[1] = Transform741;

HAnimSite HAnimSite743 = createNode("HAnimSite");
HAnimSite743.name = "SEGMENT_FOR_r_eyebrow_tip";
HAnimSite743.DEF = "hanim_SEGMENT_FOR_r_eyebrow_tip";
Transform Transform744 = createNode("Transform");
Transform744.translation = new SFVec3f(new float[-0.0219,0.0051,1.4053]);
Shape Shape745 = createNode("Shape");
Shape745.USE = "SiteShape";
Transform744.child = new undefined();

Transform744.child[0] = Shape745;

HAnimSite743.children = new MFNode();

HAnimSite743.children[0] = Transform744;

HAnimSegment739.children[2] = HAnimSite743;

HAnimJoint738.children = new MFNode();

HAnimJoint738.children[0] = HAnimSegment739;

HAnimJoint690.children[6] = HAnimJoint738;

HAnimJoint HAnimJoint746 = createNode("HAnimJoint");
HAnimJoint746.name = "jaw";
HAnimJoint746.DEF = "hanim_jaw";
HAnimJoint746.center = new SFVec3f(new float[-0.0002,-0.0865,1.3043]);
HAnimSegment HAnimSegment747 = createNode("HAnimSegment");
HAnimSegment747.name = "SEGMENT_FOR_jaw";
HAnimSegment747.DEF = "hanim_SEGMENT_FOR_jaw";
TouchSensor TouchSensor748 = createNode("TouchSensor");
TouchSensor748.description = "joint jaw segment SEGMENT_FOR_jaw";
HAnimSegment747.children = new MFNode();

HAnimSegment747.children[0] = TouchSensor748;

Transform Transform749 = createNode("Transform");
Transform749.translation = new SFVec3f(new float[-0.0002,-0.0865,1.3043]);
Shape Shape750 = createNode("Shape");
Shape750.USE = "JointShape";
Transform749.child = new undefined();

Transform749.child[0] = Shape750;

HAnimSegment747.children[1] = Transform749;

HAnimSite HAnimSite751 = createNode("HAnimSite");
HAnimSite751.name = "SEGMENT_FOR_jaw_tip";
HAnimSite751.DEF = "hanim_SEGMENT_FOR_jaw_tip";
Transform Transform752 = createNode("Transform");
Transform752.translation = new SFVec3f(new float[-0.0002,-0.0865,1.3043]);
Shape Shape753 = createNode("Shape");
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

HAnimJoint HAnimJoint754 = createNode("HAnimJoint");
HAnimJoint754.name = "l_clavicle";
HAnimJoint754.DEF = "hanim_l_clavicle";
HAnimJoint754.center = new SFVec3f(new float[0.1228,-0.1148,1.1833]);
HAnimSegment HAnimSegment755 = createNode("HAnimSegment");
HAnimSegment755.name = "SEGMENT_FOR_l_clavicle";
HAnimSegment755.DEF = "hanim_SEGMENT_FOR_l_clavicle";
TouchSensor TouchSensor756 = createNode("TouchSensor");
TouchSensor756.description = "joint l_clavicle segment SEGMENT_FOR_l_clavicle";
HAnimSegment755.children = new MFNode();

HAnimSegment755.children[0] = TouchSensor756;

Transform Transform757 = createNode("Transform");
Transform757.translation = new SFVec3f(new float[0.1228,-0.1148,1.1833]);
Shape Shape758 = createNode("Shape");
Shape758.USE = "JointShape";
Transform757.child = new undefined();

Transform757.child[0] = Shape758;

HAnimSegment755.children[1] = Transform757;

HAnimSite HAnimSite759 = createNode("HAnimSite");
HAnimSite759.name = "SEGMENT_FOR_l_clavicle_tip";
HAnimSite759.DEF = "hanim_SEGMENT_FOR_l_clavicle_tip";
Transform Transform760 = createNode("Transform");
Transform760.translation = new SFVec3f(new float[0.1228,-0.1148,1.1833]);
Shape Shape761 = createNode("Shape");
Shape761.USE = "SiteShape";
Transform760.child = new undefined();

Transform760.child[0] = Shape761;

HAnimSite759.children = new MFNode();

HAnimSite759.children[0] = Transform760;

HAnimSegment755.children[2] = HAnimSite759;

HAnimJoint754.children = new MFNode();

HAnimJoint754.children[0] = HAnimSegment755;

HAnimJoint HAnimJoint762 = createNode("HAnimJoint");
HAnimJoint762.name = "l_scapula";
HAnimJoint762.DEF = "hanim_l_scapula";
HAnimJoint762.center = new SFVec3f(new float[0.0383,-0.1157,1.2001]);
HAnimSegment HAnimSegment763 = createNode("HAnimSegment");
HAnimSegment763.name = "SEGMENT_FOR_l_scapula";
HAnimSegment763.DEF = "hanim_SEGMENT_FOR_l_scapula";
TouchSensor TouchSensor764 = createNode("TouchSensor");
TouchSensor764.description = "joint l_scapula segment SEGMENT_FOR_l_scapula";
HAnimSegment763.children = new MFNode();

HAnimSegment763.children[0] = TouchSensor764;

Transform Transform765 = createNode("Transform");
Transform765.translation = new SFVec3f(new float[0.0383,-0.1157,1.2001]);
Shape Shape766 = createNode("Shape");
Shape766.USE = "JointShape";
Transform765.child = new undefined();

Transform765.child[0] = Shape766;

HAnimSegment763.children[1] = Transform765;

HAnimSite HAnimSite767 = createNode("HAnimSite");
HAnimSite767.name = "SEGMENT_FOR_l_scapula_tip";
HAnimSite767.DEF = "hanim_SEGMENT_FOR_l_scapula_tip";
Transform Transform768 = createNode("Transform");
Transform768.translation = new SFVec3f(new float[0.0383,-0.1157,1.2001]);
Shape Shape769 = createNode("Shape");
Shape769.USE = "SiteShape";
Transform768.child = new undefined();

Transform768.child[0] = Shape769;

HAnimSite767.children = new MFNode();

HAnimSite767.children[0] = Transform768;

HAnimSegment763.children[2] = HAnimSite767;

HAnimJoint762.children = new MFNode();

HAnimJoint762.children[0] = HAnimSegment763;

HAnimJoint HAnimJoint770 = createNode("HAnimJoint");
HAnimJoint770.name = "l_upperarm";
HAnimJoint770.DEF = "hanim_l_upperarm";
HAnimJoint770.center = new SFVec3f(new float[0.1649,-0.1051,1.17]);
HAnimSegment HAnimSegment771 = createNode("HAnimSegment");
HAnimSegment771.name = "SEGMENT_FOR_l_upperarm";
HAnimSegment771.DEF = "hanim_SEGMENT_FOR_l_upperarm";
TouchSensor TouchSensor772 = createNode("TouchSensor");
TouchSensor772.description = "joint l_upperarm segment SEGMENT_FOR_l_upperarm";
HAnimSegment771.children = new MFNode();

HAnimSegment771.children[0] = TouchSensor772;

Transform Transform773 = createNode("Transform");
Transform773.translation = new SFVec3f(new float[0.1649,-0.1051,1.17]);
Shape Shape774 = createNode("Shape");
Shape774.USE = "JointShape";
Transform773.child = new undefined();

Transform773.child[0] = Shape774;

HAnimSegment771.children[1] = Transform773;

HAnimSite HAnimSite775 = createNode("HAnimSite");
HAnimSite775.name = "SEGMENT_FOR_l_upperarm_tip";
HAnimSite775.DEF = "hanim_SEGMENT_FOR_l_upperarm_tip";
Transform Transform776 = createNode("Transform");
Transform776.translation = new SFVec3f(new float[0.1649,-0.1051,1.17]);
Shape Shape777 = createNode("Shape");
Shape777.USE = "SiteShape";
Transform776.child = new undefined();

Transform776.child[0] = Shape777;

HAnimSite775.children = new MFNode();

HAnimSite775.children[0] = Transform776;

HAnimSegment771.children[2] = HAnimSite775;

HAnimJoint770.children = new MFNode();

HAnimJoint770.children[0] = HAnimSegment771;

HAnimJoint HAnimJoint778 = createNode("HAnimJoint");
HAnimJoint778.name = "l_forearm";
HAnimJoint778.DEF = "hanim_l_forearm";
HAnimJoint778.center = new SFVec3f(new float[0.1819,-0.1075,0.9202]);
HAnimSegment HAnimSegment779 = createNode("HAnimSegment");
HAnimSegment779.name = "SEGMENT_FOR_l_forearm";
HAnimSegment779.DEF = "hanim_SEGMENT_FOR_l_forearm";
TouchSensor TouchSensor780 = createNode("TouchSensor");
TouchSensor780.description = "joint l_forearm segment SEGMENT_FOR_l_forearm";
HAnimSegment779.children = new MFNode();

HAnimSegment779.children[0] = TouchSensor780;

Transform Transform781 = createNode("Transform");
Transform781.translation = new SFVec3f(new float[0.1819,-0.1075,0.9202]);
Shape Shape782 = createNode("Shape");
Shape782.USE = "JointShape";
Transform781.child = new undefined();

Transform781.child[0] = Shape782;

HAnimSegment779.children[1] = Transform781;

HAnimSite HAnimSite783 = createNode("HAnimSite");
HAnimSite783.name = "SEGMENT_FOR_l_forearm_tip";
HAnimSite783.DEF = "hanim_SEGMENT_FOR_l_forearm_tip";
Transform Transform784 = createNode("Transform");
Transform784.translation = new SFVec3f(new float[0.1819,-0.1075,0.9202]);
Shape Shape785 = createNode("Shape");
Shape785.USE = "SiteShape";
Transform784.child = new undefined();

Transform784.child[0] = Shape785;

HAnimSite783.children = new MFNode();

HAnimSite783.children[0] = Transform784;

HAnimSegment779.children[2] = HAnimSite783;

HAnimJoint778.children = new MFNode();

HAnimJoint778.children[0] = HAnimSegment779;

HAnimJoint HAnimJoint786 = createNode("HAnimJoint");
HAnimJoint786.name = "l_carpal";
HAnimJoint786.DEF = "hanim_l_carpal";
HAnimJoint786.center = new SFVec3f(new float[0.1818,-0.1069,0.7157]);
HAnimSegment HAnimSegment787 = createNode("HAnimSegment");
HAnimSegment787.name = "SEGMENT_FOR_l_carpal";
HAnimSegment787.DEF = "hanim_SEGMENT_FOR_l_carpal";
TouchSensor TouchSensor788 = createNode("TouchSensor");
TouchSensor788.description = "joint l_carpal segment SEGMENT_FOR_l_carpal";
HAnimSegment787.children = new MFNode();

HAnimSegment787.children[0] = TouchSensor788;

Transform Transform789 = createNode("Transform");
Transform789.translation = new SFVec3f(new float[0.1818,-0.1069,0.7157]);
Shape Shape790 = createNode("Shape");
Shape790.USE = "JointShape";
Transform789.child = new undefined();

Transform789.child[0] = Shape790;

HAnimSegment787.children[1] = Transform789;

HAnimSite HAnimSite791 = createNode("HAnimSite");
HAnimSite791.name = "SEGMENT_FOR_l_carpal_tip";
HAnimSite791.DEF = "hanim_SEGMENT_FOR_l_carpal_tip";
Transform Transform792 = createNode("Transform");
Transform792.translation = new SFVec3f(new float[0.1818,-0.1069,0.7157]);
Shape Shape793 = createNode("Shape");
Shape793.USE = "SiteShape";
Transform792.child = new undefined();

Transform792.child[0] = Shape793;

HAnimSite791.children = new MFNode();

HAnimSite791.children[0] = Transform792;

HAnimSegment787.children[2] = HAnimSite791;

HAnimJoint786.children = new MFNode();

HAnimJoint786.children[0] = HAnimSegment787;

HAnimJoint HAnimJoint794 = createNode("HAnimJoint");
HAnimJoint794.name = "l_trapezium";
HAnimJoint794.DEF = "hanim_l_trapezium";
HAnimJoint794.center = new SFVec3f(new float[0.1811,-0.0826,0.6975]);
HAnimSegment HAnimSegment795 = createNode("HAnimSegment");
HAnimSegment795.name = "SEGMENT_FOR_l_trapezium";
HAnimSegment795.DEF = "hanim_SEGMENT_FOR_l_trapezium";
TouchSensor TouchSensor796 = createNode("TouchSensor");
TouchSensor796.description = "joint l_trapezium segment SEGMENT_FOR_l_trapezium";
HAnimSegment795.children = new MFNode();

HAnimSegment795.children[0] = TouchSensor796;

Transform Transform797 = createNode("Transform");
Transform797.translation = new SFVec3f(new float[0.1811,-0.0826,0.6975]);
Shape Shape798 = createNode("Shape");
Shape798.USE = "JointShape";
Transform797.child = new undefined();

Transform797.child[0] = Shape798;

HAnimSegment795.children[1] = Transform797;

HAnimSite HAnimSite799 = createNode("HAnimSite");
HAnimSite799.name = "SEGMENT_FOR_l_trapezium_tip";
HAnimSite799.DEF = "hanim_SEGMENT_FOR_l_trapezium_tip";
Transform Transform800 = createNode("Transform");
Transform800.translation = new SFVec3f(new float[0.1811,-0.0826,0.6975]);
Shape Shape801 = createNode("Shape");
Shape801.USE = "SiteShape";
Transform800.child = new undefined();

Transform800.child[0] = Shape801;

HAnimSite799.children = new MFNode();

HAnimSite799.children[0] = Transform800;

HAnimSegment795.children[2] = HAnimSite799;

HAnimJoint794.children = new MFNode();

HAnimJoint794.children[0] = HAnimSegment795;

HAnimJoint HAnimJoint802 = createNode("HAnimJoint");
HAnimJoint802.name = "l_metacarpal_1";
HAnimJoint802.DEF = "hanim_l_metacarpal_1";
HAnimJoint802.center = new SFVec3f(new float[0.1803,-0.0759,0.684]);
HAnimSegment HAnimSegment803 = createNode("HAnimSegment");
HAnimSegment803.name = "SEGMENT_FOR_l_metacarpal_1";
HAnimSegment803.DEF = "hanim_SEGMENT_FOR_l_metacarpal_1";
TouchSensor TouchSensor804 = createNode("TouchSensor");
TouchSensor804.description = "joint l_metacarpal_1 segment SEGMENT_FOR_l_metacarpal_1";
HAnimSegment803.children = new MFNode();

HAnimSegment803.children[0] = TouchSensor804;

Transform Transform805 = createNode("Transform");
Transform805.translation = new SFVec3f(new float[0.1803,-0.0759,0.684]);
Shape Shape806 = createNode("Shape");
Shape806.USE = "JointShape";
Transform805.child = new undefined();

Transform805.child[0] = Shape806;

HAnimSegment803.children[1] = Transform805;

HAnimSite HAnimSite807 = createNode("HAnimSite");
HAnimSite807.name = "SEGMENT_FOR_l_metacarpal_1_tip";
HAnimSite807.DEF = "hanim_SEGMENT_FOR_l_metacarpal_1_tip";
Transform Transform808 = createNode("Transform");
Transform808.translation = new SFVec3f(new float[0.1803,-0.0759,0.684]);
Shape Shape809 = createNode("Shape");
Shape809.USE = "SiteShape";
Transform808.child = new undefined();

Transform808.child[0] = Shape809;

HAnimSite807.children = new MFNode();

HAnimSite807.children[0] = Transform808;

HAnimSegment803.children[2] = HAnimSite807;

HAnimJoint802.children = new MFNode();

HAnimJoint802.children[0] = HAnimSegment803;

HAnimJoint HAnimJoint810 = createNode("HAnimJoint");
HAnimJoint810.name = "l_carpal_proximal_phalanx_1";
HAnimJoint810.DEF = "hanim_l_carpal_proximal_phalanx_1";
HAnimJoint810.center = new SFVec3f(new float[0.1809,-0.0661,0.6642]);
HAnimSegment HAnimSegment811 = createNode("HAnimSegment");
HAnimSegment811.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_1";
HAnimSegment811.DEF = "hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_1";
TouchSensor TouchSensor812 = createNode("TouchSensor");
TouchSensor812.description = "joint l_carpal_proximal_phalanx_1 segment SEGMENT_FOR_l_carpal_proximal_phalanx_1";
HAnimSegment811.children = new MFNode();

HAnimSegment811.children[0] = TouchSensor812;

Transform Transform813 = createNode("Transform");
Transform813.translation = new SFVec3f(new float[0.1809,-0.0661,0.6642]);
Shape Shape814 = createNode("Shape");
Shape814.USE = "JointShape";
Transform813.child = new undefined();

Transform813.child[0] = Shape814;

HAnimSegment811.children[1] = Transform813;

HAnimSite HAnimSite815 = createNode("HAnimSite");
HAnimSite815.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_1_tip";
HAnimSite815.DEF = "hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_1_tip";
Transform Transform816 = createNode("Transform");
Transform816.translation = new SFVec3f(new float[0.1809,-0.0661,0.6642]);
Shape Shape817 = createNode("Shape");
Shape817.USE = "SiteShape";
Transform816.child = new undefined();

Transform816.child[0] = Shape817;

HAnimSite815.children = new MFNode();

HAnimSite815.children[0] = Transform816;

HAnimSegment811.children[2] = HAnimSite815;

HAnimJoint810.children = new MFNode();

HAnimJoint810.children[0] = HAnimSegment811;

HAnimJoint HAnimJoint818 = createNode("HAnimJoint");
HAnimJoint818.name = "l_carpal_distal_phalanx_1";
HAnimJoint818.DEF = "hanim_l_carpal_distal_phalanx_1";
HAnimJoint818.center = new SFVec3f(new float[0.1825,-0.0522,0.6455]);
HAnimSegment HAnimSegment819 = createNode("HAnimSegment");
HAnimSegment819.name = "SEGMENT_FOR_l_carpal_distal_phalanx_1";
HAnimSegment819.DEF = "hanim_SEGMENT_FOR_l_carpal_distal_phalanx_1";
TouchSensor TouchSensor820 = createNode("TouchSensor");
TouchSensor820.description = "joint l_carpal_distal_phalanx_1 segment SEGMENT_FOR_l_carpal_distal_phalanx_1";
HAnimSegment819.children = new MFNode();

HAnimSegment819.children[0] = TouchSensor820;

Transform Transform821 = createNode("Transform");
Transform821.translation = new SFVec3f(new float[0.1825,-0.0522,0.6455]);
Shape Shape822 = createNode("Shape");
Shape822.USE = "JointShape";
Transform821.child = new undefined();

Transform821.child[0] = Shape822;

HAnimSegment819.children[1] = Transform821;

HAnimSite HAnimSite823 = createNode("HAnimSite");
HAnimSite823.name = "SEGMENT_FOR_l_carpal_distal_phalanx_1_tip";
HAnimSite823.DEF = "hanim_SEGMENT_FOR_l_carpal_distal_phalanx_1_tip";
Transform Transform824 = createNode("Transform");
Transform824.translation = new SFVec3f(new float[0.1825,-0.0522,0.6455]);
Shape Shape825 = createNode("Shape");
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

HAnimJoint HAnimJoint826 = createNode("HAnimJoint");
HAnimJoint826.name = "l_trapezoid";
HAnimJoint826.DEF = "hanim_l_trapezoid";
HAnimJoint826.center = new SFVec3f(new float[0.1811,-0.0935,0.6984]);
HAnimSegment HAnimSegment827 = createNode("HAnimSegment");
HAnimSegment827.name = "SEGMENT_FOR_l_trapezoid";
HAnimSegment827.DEF = "hanim_SEGMENT_FOR_l_trapezoid";
TouchSensor TouchSensor828 = createNode("TouchSensor");
TouchSensor828.description = "joint l_trapezoid segment SEGMENT_FOR_l_trapezoid";
HAnimSegment827.children = new MFNode();

HAnimSegment827.children[0] = TouchSensor828;

Transform Transform829 = createNode("Transform");
Transform829.translation = new SFVec3f(new float[0.1811,-0.0935,0.6984]);
Shape Shape830 = createNode("Shape");
Shape830.USE = "JointShape";
Transform829.child = new undefined();

Transform829.child[0] = Shape830;

HAnimSegment827.children[1] = Transform829;

HAnimSite HAnimSite831 = createNode("HAnimSite");
HAnimSite831.name = "SEGMENT_FOR_l_trapezoid_tip";
HAnimSite831.DEF = "hanim_SEGMENT_FOR_l_trapezoid_tip";
Transform Transform832 = createNode("Transform");
Transform832.translation = new SFVec3f(new float[0.1811,-0.0935,0.6984]);
Shape Shape833 = createNode("Shape");
Shape833.USE = "SiteShape";
Transform832.child = new undefined();

Transform832.child[0] = Shape833;

HAnimSite831.children = new MFNode();

HAnimSite831.children[0] = Transform832;

HAnimSegment827.children[2] = HAnimSite831;

HAnimJoint826.children = new MFNode();

HAnimJoint826.children[0] = HAnimSegment827;

HAnimJoint HAnimJoint834 = createNode("HAnimJoint");
HAnimJoint834.name = "l_metacarpal_2";
HAnimJoint834.DEF = "hanim_l_metacarpal_2";
HAnimJoint834.center = new SFVec3f(new float[0.1811,-0.0922,0.679]);
HAnimSegment HAnimSegment835 = createNode("HAnimSegment");
HAnimSegment835.name = "SEGMENT_FOR_l_metacarpal_2";
HAnimSegment835.DEF = "hanim_SEGMENT_FOR_l_metacarpal_2";
TouchSensor TouchSensor836 = createNode("TouchSensor");
TouchSensor836.description = "joint l_metacarpal_2 segment SEGMENT_FOR_l_metacarpal_2";
HAnimSegment835.children = new MFNode();

HAnimSegment835.children[0] = TouchSensor836;

Transform Transform837 = createNode("Transform");
Transform837.translation = new SFVec3f(new float[0.1811,-0.0922,0.679]);
Shape Shape838 = createNode("Shape");
Shape838.USE = "JointShape";
Transform837.child = new undefined();

Transform837.child[0] = Shape838;

HAnimSegment835.children[1] = Transform837;

HAnimSite HAnimSite839 = createNode("HAnimSite");
HAnimSite839.name = "SEGMENT_FOR_l_metacarpal_2_tip";
HAnimSite839.DEF = "hanim_SEGMENT_FOR_l_metacarpal_2_tip";
Transform Transform840 = createNode("Transform");
Transform840.translation = new SFVec3f(new float[0.1811,-0.0922,0.679]);
Shape Shape841 = createNode("Shape");
Shape841.USE = "SiteShape";
Transform840.child = new undefined();

Transform840.child[0] = Shape841;

HAnimSite839.children = new MFNode();

HAnimSite839.children[0] = Transform840;

HAnimSegment835.children[2] = HAnimSite839;

HAnimJoint834.children = new MFNode();

HAnimJoint834.children[0] = HAnimSegment835;

HAnimJoint HAnimJoint842 = createNode("HAnimJoint");
HAnimJoint842.name = "l_carpal_proximal_phalanx_2";
HAnimJoint842.DEF = "hanim_l_carpal_proximal_phalanx_2";
HAnimJoint842.center = new SFVec3f(new float[0.1836,-0.0868,0.6286]);
HAnimSegment HAnimSegment843 = createNode("HAnimSegment");
HAnimSegment843.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_2";
HAnimSegment843.DEF = "hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_2";
TouchSensor TouchSensor844 = createNode("TouchSensor");
TouchSensor844.description = "joint l_carpal_proximal_phalanx_2 segment SEGMENT_FOR_l_carpal_proximal_phalanx_2";
HAnimSegment843.children = new MFNode();

HAnimSegment843.children[0] = TouchSensor844;

Transform Transform845 = createNode("Transform");
Transform845.translation = new SFVec3f(new float[0.1836,-0.0868,0.6286]);
Shape Shape846 = createNode("Shape");
Shape846.USE = "JointShape";
Transform845.child = new undefined();

Transform845.child[0] = Shape846;

HAnimSegment843.children[1] = Transform845;

HAnimSite HAnimSite847 = createNode("HAnimSite");
HAnimSite847.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_2_tip";
HAnimSite847.DEF = "hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_2_tip";
Transform Transform848 = createNode("Transform");
Transform848.translation = new SFVec3f(new float[0.1836,-0.0868,0.6286]);
Shape Shape849 = createNode("Shape");
Shape849.USE = "SiteShape";
Transform848.child = new undefined();

Transform848.child[0] = Shape849;

HAnimSite847.children = new MFNode();

HAnimSite847.children[0] = Transform848;

HAnimSegment843.children[2] = HAnimSite847;

HAnimJoint842.children = new MFNode();

HAnimJoint842.children[0] = HAnimSegment843;

HAnimJoint HAnimJoint850 = createNode("HAnimJoint");
HAnimJoint850.name = "l_carpal_middle_phalanx_2";
HAnimJoint850.DEF = "hanim_l_carpal_middle_phalanx_2";
HAnimJoint850.center = new SFVec3f(new float[0.1815,-0.0877,0.5983]);
HAnimSegment HAnimSegment851 = createNode("HAnimSegment");
HAnimSegment851.name = "SEGMENT_FOR_l_carpal_middle_phalanx_2";
HAnimSegment851.DEF = "hanim_SEGMENT_FOR_l_carpal_middle_phalanx_2";
TouchSensor TouchSensor852 = createNode("TouchSensor");
TouchSensor852.description = "joint l_carpal_middle_phalanx_2 segment SEGMENT_FOR_l_carpal_middle_phalanx_2";
HAnimSegment851.children = new MFNode();

HAnimSegment851.children[0] = TouchSensor852;

Transform Transform853 = createNode("Transform");
Transform853.translation = new SFVec3f(new float[0.1815,-0.0877,0.5983]);
Shape Shape854 = createNode("Shape");
Shape854.USE = "JointShape";
Transform853.child = new undefined();

Transform853.child[0] = Shape854;

HAnimSegment851.children[1] = Transform853;

HAnimSite HAnimSite855 = createNode("HAnimSite");
HAnimSite855.name = "SEGMENT_FOR_l_carpal_middle_phalanx_2_tip";
HAnimSite855.DEF = "hanim_SEGMENT_FOR_l_carpal_middle_phalanx_2_tip";
Transform Transform856 = createNode("Transform");
Transform856.translation = new SFVec3f(new float[0.1815,-0.0877,0.5983]);
Shape Shape857 = createNode("Shape");
Shape857.USE = "SiteShape";
Transform856.child = new undefined();

Transform856.child[0] = Shape857;

HAnimSite855.children = new MFNode();

HAnimSite855.children[0] = Transform856;

HAnimSegment851.children[2] = HAnimSite855;

HAnimJoint850.children = new MFNode();

HAnimJoint850.children[0] = HAnimSegment851;

HAnimJoint HAnimJoint858 = createNode("HAnimJoint");
HAnimJoint858.name = "l_carpal_distal_phalanx_2";
HAnimJoint858.DEF = "hanim_l_carpal_distal_phalanx_2";
HAnimJoint858.center = new SFVec3f(new float[0.1805,-0.0885,0.5731]);
HAnimSegment HAnimSegment859 = createNode("HAnimSegment");
HAnimSegment859.name = "SEGMENT_FOR_l_carpal_distal_phalanx_2";
HAnimSegment859.DEF = "hanim_SEGMENT_FOR_l_carpal_distal_phalanx_2";
TouchSensor TouchSensor860 = createNode("TouchSensor");
TouchSensor860.description = "joint l_carpal_distal_phalanx_2 segment SEGMENT_FOR_l_carpal_distal_phalanx_2";
HAnimSegment859.children = new MFNode();

HAnimSegment859.children[0] = TouchSensor860;

Transform Transform861 = createNode("Transform");
Transform861.translation = new SFVec3f(new float[0.1805,-0.0885,0.5731]);
Shape Shape862 = createNode("Shape");
Shape862.USE = "JointShape";
Transform861.child = new undefined();

Transform861.child[0] = Shape862;

HAnimSegment859.children[1] = Transform861;

HAnimSite HAnimSite863 = createNode("HAnimSite");
HAnimSite863.name = "SEGMENT_FOR_l_carpal_distal_phalanx_2_tip";
HAnimSite863.DEF = "hanim_SEGMENT_FOR_l_carpal_distal_phalanx_2_tip";
Transform Transform864 = createNode("Transform");
Transform864.translation = new SFVec3f(new float[0.1805,-0.0885,0.5731]);
Shape Shape865 = createNode("Shape");
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

HAnimJoint HAnimJoint866 = createNode("HAnimJoint");
HAnimJoint866.name = "l_capitate";
HAnimJoint866.DEF = "hanim_l_capitate";
HAnimJoint866.center = new SFVec3f(new float[0.1809,-0.1067,0.7]);
HAnimSegment HAnimSegment867 = createNode("HAnimSegment");
HAnimSegment867.name = "SEGMENT_FOR_l_capitate";
HAnimSegment867.DEF = "hanim_SEGMENT_FOR_l_capitate";
TouchSensor TouchSensor868 = createNode("TouchSensor");
TouchSensor868.description = "joint l_capitate segment SEGMENT_FOR_l_capitate";
HAnimSegment867.children = new MFNode();

HAnimSegment867.children[0] = TouchSensor868;

Transform Transform869 = createNode("Transform");
Transform869.translation = new SFVec3f(new float[0.1809,-0.1067,0.7]);
Shape Shape870 = createNode("Shape");
Shape870.USE = "JointShape";
Transform869.child = new undefined();

Transform869.child[0] = Shape870;

HAnimSegment867.children[1] = Transform869;

HAnimSite HAnimSite871 = createNode("HAnimSite");
HAnimSite871.name = "SEGMENT_FOR_l_capitate_tip";
HAnimSite871.DEF = "hanim_SEGMENT_FOR_l_capitate_tip";
Transform Transform872 = createNode("Transform");
Transform872.translation = new SFVec3f(new float[0.1809,-0.1067,0.7]);
Shape Shape873 = createNode("Shape");
Shape873.USE = "SiteShape";
Transform872.child = new undefined();

Transform872.child[0] = Shape873;

HAnimSite871.children = new MFNode();

HAnimSite871.children[0] = Transform872;

HAnimSegment867.children[2] = HAnimSite871;

HAnimJoint866.children = new MFNode();

HAnimJoint866.children[0] = HAnimSegment867;

HAnimJoint HAnimJoint874 = createNode("HAnimJoint");
HAnimJoint874.name = "l_metacarpal_3";
HAnimJoint874.DEF = "hanim_l_metacarpal_3";
HAnimJoint874.center = new SFVec3f(new float[0.1809,-0.1081,0.6772]);
HAnimSegment HAnimSegment875 = createNode("HAnimSegment");
HAnimSegment875.name = "SEGMENT_FOR_l_metacarpal_3";
HAnimSegment875.DEF = "hanim_SEGMENT_FOR_l_metacarpal_3";
TouchSensor TouchSensor876 = createNode("TouchSensor");
TouchSensor876.description = "joint l_metacarpal_3 segment SEGMENT_FOR_l_metacarpal_3";
HAnimSegment875.children = new MFNode();

HAnimSegment875.children[0] = TouchSensor876;

Transform Transform877 = createNode("Transform");
Transform877.translation = new SFVec3f(new float[0.1809,-0.1081,0.6772]);
Shape Shape878 = createNode("Shape");
Shape878.USE = "JointShape";
Transform877.child = new undefined();

Transform877.child[0] = Shape878;

HAnimSegment875.children[1] = Transform877;

HAnimSite HAnimSite879 = createNode("HAnimSite");
HAnimSite879.name = "SEGMENT_FOR_l_metacarpal_3_tip";
HAnimSite879.DEF = "hanim_SEGMENT_FOR_l_metacarpal_3_tip";
Transform Transform880 = createNode("Transform");
Transform880.translation = new SFVec3f(new float[0.1809,-0.1081,0.6772]);
Shape Shape881 = createNode("Shape");
Shape881.USE = "SiteShape";
Transform880.child = new undefined();

Transform880.child[0] = Shape881;

HAnimSite879.children = new MFNode();

HAnimSite879.children[0] = Transform880;

HAnimSegment875.children[2] = HAnimSite879;

HAnimJoint874.children = new MFNode();

HAnimJoint874.children[0] = HAnimSegment875;

HAnimJoint HAnimJoint882 = createNode("HAnimJoint");
HAnimJoint882.name = "l_carpal_proximal_phalanx_3";
HAnimJoint882.DEF = "hanim_l_carpal_proximal_phalanx_3";
HAnimJoint882.center = new SFVec3f(new float[0.1835,-0.1058,0.6264]);
HAnimSegment HAnimSegment883 = createNode("HAnimSegment");
HAnimSegment883.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_3";
HAnimSegment883.DEF = "hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_3";
TouchSensor TouchSensor884 = createNode("TouchSensor");
TouchSensor884.description = "joint l_carpal_proximal_phalanx_3 segment SEGMENT_FOR_l_carpal_proximal_phalanx_3";
HAnimSegment883.children = new MFNode();

HAnimSegment883.children[0] = TouchSensor884;

Transform Transform885 = createNode("Transform");
Transform885.translation = new SFVec3f(new float[0.1835,-0.1058,0.6264]);
Shape Shape886 = createNode("Shape");
Shape886.USE = "JointShape";
Transform885.child = new undefined();

Transform885.child[0] = Shape886;

HAnimSegment883.children[1] = Transform885;

HAnimSite HAnimSite887 = createNode("HAnimSite");
HAnimSite887.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_3_tip";
HAnimSite887.DEF = "hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_3_tip";
Transform Transform888 = createNode("Transform");
Transform888.translation = new SFVec3f(new float[0.1835,-0.1058,0.6264]);
Shape Shape889 = createNode("Shape");
Shape889.USE = "SiteShape";
Transform888.child = new undefined();

Transform888.child[0] = Shape889;

HAnimSite887.children = new MFNode();

HAnimSite887.children[0] = Transform888;

HAnimSegment883.children[2] = HAnimSite887;

HAnimJoint882.children = new MFNode();

HAnimJoint882.children[0] = HAnimSegment883;

HAnimJoint HAnimJoint890 = createNode("HAnimJoint");
HAnimJoint890.name = "l_carpal_middle_phalanx_3";
HAnimJoint890.DEF = "hanim_l_carpal_middle_phalanx_3";
HAnimJoint890.center = new SFVec3f(new float[0.1815,-0.1054,0.5947]);
HAnimSegment HAnimSegment891 = createNode("HAnimSegment");
HAnimSegment891.name = "SEGMENT_FOR_l_carpal_middle_phalanx_3";
HAnimSegment891.DEF = "hanim_SEGMENT_FOR_l_carpal_middle_phalanx_3";
TouchSensor TouchSensor892 = createNode("TouchSensor");
TouchSensor892.description = "joint l_carpal_middle_phalanx_3 segment SEGMENT_FOR_l_carpal_middle_phalanx_3";
HAnimSegment891.children = new MFNode();

HAnimSegment891.children[0] = TouchSensor892;

Transform Transform893 = createNode("Transform");
Transform893.translation = new SFVec3f(new float[0.1815,-0.1054,0.5947]);
Shape Shape894 = createNode("Shape");
Shape894.USE = "JointShape";
Transform893.child = new undefined();

Transform893.child[0] = Shape894;

HAnimSegment891.children[1] = Transform893;

HAnimSite HAnimSite895 = createNode("HAnimSite");
HAnimSite895.name = "SEGMENT_FOR_l_carpal_middle_phalanx_3_tip";
HAnimSite895.DEF = "hanim_SEGMENT_FOR_l_carpal_middle_phalanx_3_tip";
Transform Transform896 = createNode("Transform");
Transform896.translation = new SFVec3f(new float[0.1815,-0.1054,0.5947]);
Shape Shape897 = createNode("Shape");
Shape897.USE = "SiteShape";
Transform896.child = new undefined();

Transform896.child[0] = Shape897;

HAnimSite895.children = new MFNode();

HAnimSite895.children[0] = Transform896;

HAnimSegment891.children[2] = HAnimSite895;

HAnimJoint890.children = new MFNode();

HAnimJoint890.children[0] = HAnimSegment891;

HAnimJoint HAnimJoint898 = createNode("HAnimJoint");
HAnimJoint898.name = "l_carpal_distal_phalanx_3";
HAnimJoint898.DEF = "hanim_l_carpal_distal_phalanx_3";
HAnimJoint898.center = new SFVec3f(new float[0.1805,-0.1056,0.5668]);
HAnimSegment HAnimSegment899 = createNode("HAnimSegment");
HAnimSegment899.name = "SEGMENT_FOR_l_carpal_distal_phalanx_3";
HAnimSegment899.DEF = "hanim_SEGMENT_FOR_l_carpal_distal_phalanx_3";
TouchSensor TouchSensor900 = createNode("TouchSensor");
TouchSensor900.description = "joint l_carpal_distal_phalanx_3 segment SEGMENT_FOR_l_carpal_distal_phalanx_3";
HAnimSegment899.children = new MFNode();

HAnimSegment899.children[0] = TouchSensor900;

Transform Transform901 = createNode("Transform");
Transform901.translation = new SFVec3f(new float[0.1805,-0.1056,0.5668]);
Shape Shape902 = createNode("Shape");
Shape902.USE = "JointShape";
Transform901.child = new undefined();

Transform901.child[0] = Shape902;

HAnimSegment899.children[1] = Transform901;

HAnimSite HAnimSite903 = createNode("HAnimSite");
HAnimSite903.name = "SEGMENT_FOR_l_carpal_distal_phalanx_3_tip";
HAnimSite903.DEF = "hanim_SEGMENT_FOR_l_carpal_distal_phalanx_3_tip";
Transform Transform904 = createNode("Transform");
Transform904.translation = new SFVec3f(new float[0.1805,-0.1056,0.5668]);
Shape Shape905 = createNode("Shape");
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

HAnimJoint HAnimJoint906 = createNode("HAnimJoint");
HAnimJoint906.name = "l_hamate";
HAnimJoint906.DEF = "hanim_l_hamate";
HAnimJoint906.center = new SFVec3f(new float[0.1809,-0.1276,0.6973]);
HAnimSegment HAnimSegment907 = createNode("HAnimSegment");
HAnimSegment907.name = "SEGMENT_FOR_l_hamate";
HAnimSegment907.DEF = "hanim_SEGMENT_FOR_l_hamate";
TouchSensor TouchSensor908 = createNode("TouchSensor");
TouchSensor908.description = "joint l_hamate segment SEGMENT_FOR_l_hamate";
HAnimSegment907.children = new MFNode();

HAnimSegment907.children[0] = TouchSensor908;

Transform Transform909 = createNode("Transform");
Transform909.translation = new SFVec3f(new float[0.1809,-0.1276,0.6973]);
Shape Shape910 = createNode("Shape");
Shape910.USE = "JointShape";
Transform909.child = new undefined();

Transform909.child[0] = Shape910;

HAnimSegment907.children[1] = Transform909;

HAnimSite HAnimSite911 = createNode("HAnimSite");
HAnimSite911.name = "SEGMENT_FOR_l_hamate_tip";
HAnimSite911.DEF = "hanim_SEGMENT_FOR_l_hamate_tip";
Transform Transform912 = createNode("Transform");
Transform912.translation = new SFVec3f(new float[0.1809,-0.1276,0.6973]);
Shape Shape913 = createNode("Shape");
Shape913.USE = "SiteShape";
Transform912.child = new undefined();

Transform912.child[0] = Shape913;

HAnimSite911.children = new MFNode();

HAnimSite911.children[0] = Transform912;

HAnimSegment907.children[2] = HAnimSite911;

HAnimJoint906.children = new MFNode();

HAnimJoint906.children[0] = HAnimSegment907;

HAnimJoint HAnimJoint914 = createNode("HAnimJoint");
HAnimJoint914.name = "l_metacarpal_4";
HAnimJoint914.DEF = "hanim_l_metacarpal_4";
HAnimJoint914.center = new SFVec3f(new float[0.1809,-0.1218,0.6777]);
HAnimSegment HAnimSegment915 = createNode("HAnimSegment");
HAnimSegment915.name = "SEGMENT_FOR_l_metacarpal_4";
HAnimSegment915.DEF = "hanim_SEGMENT_FOR_l_metacarpal_4";
TouchSensor TouchSensor916 = createNode("TouchSensor");
TouchSensor916.description = "joint l_metacarpal_4 segment SEGMENT_FOR_l_metacarpal_4";
HAnimSegment915.children = new MFNode();

HAnimSegment915.children[0] = TouchSensor916;

Transform Transform917 = createNode("Transform");
Transform917.translation = new SFVec3f(new float[0.1809,-0.1218,0.6777]);
Shape Shape918 = createNode("Shape");
Shape918.USE = "JointShape";
Transform917.child = new undefined();

Transform917.child[0] = Shape918;

HAnimSegment915.children[1] = Transform917;

HAnimSite HAnimSite919 = createNode("HAnimSite");
HAnimSite919.name = "SEGMENT_FOR_l_metacarpal_4_tip";
HAnimSite919.DEF = "hanim_SEGMENT_FOR_l_metacarpal_4_tip";
Transform Transform920 = createNode("Transform");
Transform920.translation = new SFVec3f(new float[0.1809,-0.1218,0.6777]);
Shape Shape921 = createNode("Shape");
Shape921.USE = "SiteShape";
Transform920.child = new undefined();

Transform920.child[0] = Shape921;

HAnimSite919.children = new MFNode();

HAnimSite919.children[0] = Transform920;

HAnimSegment915.children[2] = HAnimSite919;

HAnimJoint914.children = new MFNode();

HAnimJoint914.children[0] = HAnimSegment915;

HAnimJoint HAnimJoint922 = createNode("HAnimJoint");
HAnimJoint922.name = "l_carpal_proximal_phalanx_4";
HAnimJoint922.DEF = "hanim_l_carpal_proximal_phalanx_4";
HAnimJoint922.center = new SFVec3f(new float[0.1835,-0.1233,0.6255]);
HAnimSegment HAnimSegment923 = createNode("HAnimSegment");
HAnimSegment923.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_4";
HAnimSegment923.DEF = "hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_4";
TouchSensor TouchSensor924 = createNode("TouchSensor");
TouchSensor924.description = "joint l_carpal_proximal_phalanx_4 segment SEGMENT_FOR_l_carpal_proximal_phalanx_4";
HAnimSegment923.children = new MFNode();

HAnimSegment923.children[0] = TouchSensor924;

Transform Transform925 = createNode("Transform");
Transform925.translation = new SFVec3f(new float[0.1835,-0.1233,0.6255]);
Shape Shape926 = createNode("Shape");
Shape926.USE = "JointShape";
Transform925.child = new undefined();

Transform925.child[0] = Shape926;

HAnimSegment923.children[1] = Transform925;

HAnimSite HAnimSite927 = createNode("HAnimSite");
HAnimSite927.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_4_tip";
HAnimSite927.DEF = "hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_4_tip";
Transform Transform928 = createNode("Transform");
Transform928.translation = new SFVec3f(new float[0.1835,-0.1233,0.6255]);
Shape Shape929 = createNode("Shape");
Shape929.USE = "SiteShape";
Transform928.child = new undefined();

Transform928.child[0] = Shape929;

HAnimSite927.children = new MFNode();

HAnimSite927.children[0] = Transform928;

HAnimSegment923.children[2] = HAnimSite927;

HAnimJoint922.children = new MFNode();

HAnimJoint922.children[0] = HAnimSegment923;

HAnimJoint HAnimJoint930 = createNode("HAnimJoint");
HAnimJoint930.name = "l_carpal_middle_phalanx_4";
HAnimJoint930.DEF = "hanim_l_carpal_middle_phalanx_4";
HAnimJoint930.center = new SFVec3f(new float[0.1815,-0.1225,0.598]);
HAnimSegment HAnimSegment931 = createNode("HAnimSegment");
HAnimSegment931.name = "SEGMENT_FOR_l_carpal_middle_phalanx_4";
HAnimSegment931.DEF = "hanim_SEGMENT_FOR_l_carpal_middle_phalanx_4";
TouchSensor TouchSensor932 = createNode("TouchSensor");
TouchSensor932.description = "joint l_carpal_middle_phalanx_4 segment SEGMENT_FOR_l_carpal_middle_phalanx_4";
HAnimSegment931.children = new MFNode();

HAnimSegment931.children[0] = TouchSensor932;

Transform Transform933 = createNode("Transform");
Transform933.translation = new SFVec3f(new float[0.1815,-0.1225,0.598]);
Shape Shape934 = createNode("Shape");
Shape934.USE = "JointShape";
Transform933.child = new undefined();

Transform933.child[0] = Shape934;

HAnimSegment931.children[1] = Transform933;

HAnimSite HAnimSite935 = createNode("HAnimSite");
HAnimSite935.name = "SEGMENT_FOR_l_carpal_middle_phalanx_4_tip";
HAnimSite935.DEF = "hanim_SEGMENT_FOR_l_carpal_middle_phalanx_4_tip";
Transform Transform936 = createNode("Transform");
Transform936.translation = new SFVec3f(new float[0.1815,-0.1225,0.598]);
Shape Shape937 = createNode("Shape");
Shape937.USE = "SiteShape";
Transform936.child = new undefined();

Transform936.child[0] = Shape937;

HAnimSite935.children = new MFNode();

HAnimSite935.children[0] = Transform936;

HAnimSegment931.children[2] = HAnimSite935;

HAnimJoint930.children = new MFNode();

HAnimJoint930.children[0] = HAnimSegment931;

HAnimJoint HAnimJoint938 = createNode("HAnimJoint");
HAnimJoint938.name = "l_carpal_distal_phalanx_4";
HAnimJoint938.DEF = "hanim_l_carpal_distal_phalanx_4";
HAnimJoint938.center = new SFVec3f(new float[0.1805,-0.1217,0.5722]);
HAnimSegment HAnimSegment939 = createNode("HAnimSegment");
HAnimSegment939.name = "SEGMENT_FOR_l_carpal_distal_phalanx_4";
HAnimSegment939.DEF = "hanim_SEGMENT_FOR_l_carpal_distal_phalanx_4";
TouchSensor TouchSensor940 = createNode("TouchSensor");
TouchSensor940.description = "joint l_carpal_distal_phalanx_4 segment SEGMENT_FOR_l_carpal_distal_phalanx_4";
HAnimSegment939.children = new MFNode();

HAnimSegment939.children[0] = TouchSensor940;

Transform Transform941 = createNode("Transform");
Transform941.translation = new SFVec3f(new float[0.1805,-0.1217,0.5722]);
Shape Shape942 = createNode("Shape");
Shape942.USE = "JointShape";
Transform941.child = new undefined();

Transform941.child[0] = Shape942;

HAnimSegment939.children[1] = Transform941;

HAnimSite HAnimSite943 = createNode("HAnimSite");
HAnimSite943.name = "SEGMENT_FOR_l_carpal_distal_phalanx_4_tip";
HAnimSite943.DEF = "hanim_SEGMENT_FOR_l_carpal_distal_phalanx_4_tip";
Transform Transform944 = createNode("Transform");
Transform944.translation = new SFVec3f(new float[0.1805,-0.1217,0.5722]);
Shape Shape945 = createNode("Shape");
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

HAnimJoint HAnimJoint946 = createNode("HAnimJoint");
HAnimJoint946.name = "l_metacarpal_5";
HAnimJoint946.DEF = "hanim_l_metacarpal_5";
HAnimJoint946.center = new SFVec3f(new float[0.1815,-0.1347,0.6797]);
HAnimSegment HAnimSegment947 = createNode("HAnimSegment");
HAnimSegment947.name = "SEGMENT_FOR_l_metacarpal_5";
HAnimSegment947.DEF = "hanim_SEGMENT_FOR_l_metacarpal_5";
TouchSensor TouchSensor948 = createNode("TouchSensor");
TouchSensor948.description = "joint l_metacarpal_5 segment SEGMENT_FOR_l_metacarpal_5";
HAnimSegment947.children = new MFNode();

HAnimSegment947.children[0] = TouchSensor948;

Transform Transform949 = createNode("Transform");
Transform949.translation = new SFVec3f(new float[0.1815,-0.1347,0.6797]);
Shape Shape950 = createNode("Shape");
Shape950.USE = "JointShape";
Transform949.child = new undefined();

Transform949.child[0] = Shape950;

HAnimSegment947.children[1] = Transform949;

HAnimSite HAnimSite951 = createNode("HAnimSite");
HAnimSite951.name = "SEGMENT_FOR_l_metacarpal_5_tip";
HAnimSite951.DEF = "hanim_SEGMENT_FOR_l_metacarpal_5_tip";
Transform Transform952 = createNode("Transform");
Transform952.translation = new SFVec3f(new float[0.1815,-0.1347,0.6797]);
Shape Shape953 = createNode("Shape");
Shape953.USE = "SiteShape";
Transform952.child = new undefined();

Transform952.child[0] = Shape953;

HAnimSite951.children = new MFNode();

HAnimSite951.children[0] = Transform952;

HAnimSegment947.children[2] = HAnimSite951;

HAnimJoint946.children = new MFNode();

HAnimJoint946.children[0] = HAnimSegment947;

HAnimJoint HAnimJoint954 = createNode("HAnimJoint");
HAnimJoint954.name = "l_carpal_proximal_phalanx_5";
HAnimJoint954.DEF = "hanim_l_carpal_proximal_phalanx_5";
HAnimJoint954.center = new SFVec3f(new float[0.1832,-0.1389,0.6295]);
HAnimSegment HAnimSegment955 = createNode("HAnimSegment");
HAnimSegment955.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_5";
HAnimSegment955.DEF = "hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_5";
TouchSensor TouchSensor956 = createNode("TouchSensor");
TouchSensor956.description = "joint l_carpal_proximal_phalanx_5 segment SEGMENT_FOR_l_carpal_proximal_phalanx_5";
HAnimSegment955.children = new MFNode();

HAnimSegment955.children[0] = TouchSensor956;

Transform Transform957 = createNode("Transform");
Transform957.translation = new SFVec3f(new float[0.1832,-0.1389,0.6295]);
Shape Shape958 = createNode("Shape");
Shape958.USE = "JointShape";
Transform957.child = new undefined();

Transform957.child[0] = Shape958;

HAnimSegment955.children[1] = Transform957;

HAnimSite HAnimSite959 = createNode("HAnimSite");
HAnimSite959.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_5_tip";
HAnimSite959.DEF = "hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_5_tip";
Transform Transform960 = createNode("Transform");
Transform960.translation = new SFVec3f(new float[0.1832,-0.1389,0.6295]);
Shape Shape961 = createNode("Shape");
Shape961.USE = "SiteShape";
Transform960.child = new undefined();

Transform960.child[0] = Shape961;

HAnimSite959.children = new MFNode();

HAnimSite959.children[0] = Transform960;

HAnimSegment955.children[2] = HAnimSite959;

HAnimJoint954.children = new MFNode();

HAnimJoint954.children[0] = HAnimSegment955;

HAnimJoint HAnimJoint962 = createNode("HAnimJoint");
HAnimJoint962.name = "l_carpal_middle_phalanx_5";
HAnimJoint962.DEF = "hanim_l_carpal_middle_phalanx_5";
HAnimJoint962.center = new SFVec3f(new float[0.1815,-0.139,0.6124]);
HAnimSegment HAnimSegment963 = createNode("HAnimSegment");
HAnimSegment963.name = "SEGMENT_FOR_l_carpal_middle_phalanx_5";
HAnimSegment963.DEF = "hanim_SEGMENT_FOR_l_carpal_middle_phalanx_5";
TouchSensor TouchSensor964 = createNode("TouchSensor");
TouchSensor964.description = "joint l_carpal_middle_phalanx_5 segment SEGMENT_FOR_l_carpal_middle_phalanx_5";
HAnimSegment963.children = new MFNode();

HAnimSegment963.children[0] = TouchSensor964;

Transform Transform965 = createNode("Transform");
Transform965.translation = new SFVec3f(new float[0.1815,-0.139,0.6124]);
Shape Shape966 = createNode("Shape");
Shape966.USE = "JointShape";
Transform965.child = new undefined();

Transform965.child[0] = Shape966;

HAnimSegment963.children[1] = Transform965;

HAnimSite HAnimSite967 = createNode("HAnimSite");
HAnimSite967.name = "SEGMENT_FOR_l_carpal_middle_phalanx_5_tip";
HAnimSite967.DEF = "hanim_SEGMENT_FOR_l_carpal_middle_phalanx_5_tip";
Transform Transform968 = createNode("Transform");
Transform968.translation = new SFVec3f(new float[0.1815,-0.139,0.6124]);
Shape Shape969 = createNode("Shape");
Shape969.USE = "SiteShape";
Transform968.child = new undefined();

Transform968.child[0] = Shape969;

HAnimSite967.children = new MFNode();

HAnimSite967.children[0] = Transform968;

HAnimSegment963.children[2] = HAnimSite967;

HAnimJoint962.children = new MFNode();

HAnimJoint962.children[0] = HAnimSegment963;

HAnimJoint HAnimJoint970 = createNode("HAnimJoint");
HAnimJoint970.name = "l_carpal_distal_phalanx_5";
HAnimJoint970.DEF = "hanim_l_carpal_distal_phalanx_5";
HAnimJoint970.center = new SFVec3f(new float[0.1806,-0.1388,0.5938]);
HAnimSegment HAnimSegment971 = createNode("HAnimSegment");
HAnimSegment971.name = "SEGMENT_FOR_l_carpal_distal_phalanx_5";
HAnimSegment971.DEF = "hanim_SEGMENT_FOR_l_carpal_distal_phalanx_5";
TouchSensor TouchSensor972 = createNode("TouchSensor");
TouchSensor972.description = "joint l_carpal_distal_phalanx_5 segment SEGMENT_FOR_l_carpal_distal_phalanx_5";
HAnimSegment971.children = new MFNode();

HAnimSegment971.children[0] = TouchSensor972;

Transform Transform973 = createNode("Transform");
Transform973.translation = new SFVec3f(new float[0.1806,-0.1388,0.5938]);
Shape Shape974 = createNode("Shape");
Shape974.USE = "JointShape";
Transform973.child = new undefined();

Transform973.child[0] = Shape974;

HAnimSegment971.children[1] = Transform973;

HAnimSite HAnimSite975 = createNode("HAnimSite");
HAnimSite975.name = "SEGMENT_FOR_l_carpal_distal_phalanx_5_tip";
HAnimSite975.DEF = "hanim_SEGMENT_FOR_l_carpal_distal_phalanx_5_tip";
Transform Transform976 = createNode("Transform");
Transform976.translation = new SFVec3f(new float[0.1806,-0.1388,0.5938]);
Shape Shape977 = createNode("Shape");
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

HAnimJoint HAnimJoint978 = createNode("HAnimJoint");
HAnimJoint978.name = "r_clavicle";
HAnimJoint978.DEF = "hanim_r_clavicle";
HAnimJoint978.center = new SFVec3f(new float[-0.1231,-0.1148,1.1833]);
HAnimSegment HAnimSegment979 = createNode("HAnimSegment");
HAnimSegment979.name = "SEGMENT_FOR_r_clavicle";
HAnimSegment979.DEF = "hanim_SEGMENT_FOR_r_clavicle";
TouchSensor TouchSensor980 = createNode("TouchSensor");
TouchSensor980.description = "joint r_clavicle segment SEGMENT_FOR_r_clavicle";
HAnimSegment979.children = new MFNode();

HAnimSegment979.children[0] = TouchSensor980;

Transform Transform981 = createNode("Transform");
Transform981.translation = new SFVec3f(new float[-0.1231,-0.1148,1.1833]);
Shape Shape982 = createNode("Shape");
Shape982.USE = "JointShape";
Transform981.child = new undefined();

Transform981.child[0] = Shape982;

HAnimSegment979.children[1] = Transform981;

HAnimSite HAnimSite983 = createNode("HAnimSite");
HAnimSite983.name = "SEGMENT_FOR_r_clavicle_tip";
HAnimSite983.DEF = "hanim_SEGMENT_FOR_r_clavicle_tip";
Transform Transform984 = createNode("Transform");
Transform984.translation = new SFVec3f(new float[-0.1231,-0.1148,1.1833]);
Shape Shape985 = createNode("Shape");
Shape985.USE = "SiteShape";
Transform984.child = new undefined();

Transform984.child[0] = Shape985;

HAnimSite983.children = new MFNode();

HAnimSite983.children[0] = Transform984;

HAnimSegment979.children[2] = HAnimSite983;

HAnimJoint978.children = new MFNode();

HAnimJoint978.children[0] = HAnimSegment979;

HAnimJoint HAnimJoint986 = createNode("HAnimJoint");
HAnimJoint986.name = "r_scapula";
HAnimJoint986.DEF = "hanim_r_scapula";
HAnimJoint986.center = new SFVec3f(new float[-0.0387,-0.1157,1.2001]);
HAnimSegment HAnimSegment987 = createNode("HAnimSegment");
HAnimSegment987.name = "SEGMENT_FOR_r_scapula";
HAnimSegment987.DEF = "hanim_SEGMENT_FOR_r_scapula";
TouchSensor TouchSensor988 = createNode("TouchSensor");
TouchSensor988.description = "joint r_scapula segment SEGMENT_FOR_r_scapula";
HAnimSegment987.children = new MFNode();

HAnimSegment987.children[0] = TouchSensor988;

Transform Transform989 = createNode("Transform");
Transform989.translation = new SFVec3f(new float[-0.0387,-0.1157,1.2001]);
Shape Shape990 = createNode("Shape");
Shape990.USE = "JointShape";
Transform989.child = new undefined();

Transform989.child[0] = Shape990;

HAnimSegment987.children[1] = Transform989;

HAnimSite HAnimSite991 = createNode("HAnimSite");
HAnimSite991.name = "SEGMENT_FOR_r_scapula_tip";
HAnimSite991.DEF = "hanim_SEGMENT_FOR_r_scapula_tip";
Transform Transform992 = createNode("Transform");
Transform992.translation = new SFVec3f(new float[-0.0387,-0.1157,1.2001]);
Shape Shape993 = createNode("Shape");
Shape993.USE = "SiteShape";
Transform992.child = new undefined();

Transform992.child[0] = Shape993;

HAnimSite991.children = new MFNode();

HAnimSite991.children[0] = Transform992;

HAnimSegment987.children[2] = HAnimSite991;

HAnimJoint986.children = new MFNode();

HAnimJoint986.children[0] = HAnimSegment987;

HAnimJoint HAnimJoint994 = createNode("HAnimJoint");
HAnimJoint994.name = "r_upperarm";
HAnimJoint994.DEF = "hanim_r_upperarm";
HAnimJoint994.center = new SFVec3f(new float[-0.1649,-0.1051,1.17]);
HAnimSegment HAnimSegment995 = createNode("HAnimSegment");
HAnimSegment995.name = "SEGMENT_FOR_r_upperarm";
HAnimSegment995.DEF = "hanim_SEGMENT_FOR_r_upperarm";
TouchSensor TouchSensor996 = createNode("TouchSensor");
TouchSensor996.description = "joint r_upperarm segment SEGMENT_FOR_r_upperarm";
HAnimSegment995.children = new MFNode();

HAnimSegment995.children[0] = TouchSensor996;

Transform Transform997 = createNode("Transform");
Transform997.translation = new SFVec3f(new float[-0.1649,-0.1051,1.17]);
Shape Shape998 = createNode("Shape");
Shape998.USE = "JointShape";
Transform997.child = new undefined();

Transform997.child[0] = Shape998;

HAnimSegment995.children[1] = Transform997;

HAnimSite HAnimSite999 = createNode("HAnimSite");
HAnimSite999.name = "SEGMENT_FOR_r_upperarm_tip";
HAnimSite999.DEF = "hanim_SEGMENT_FOR_r_upperarm_tip";
Transform Transform1000 = createNode("Transform");
Transform1000.translation = new SFVec3f(new float[-0.1649,-0.1051,1.17]);
Shape Shape1001 = createNode("Shape");
Shape1001.USE = "SiteShape";
Transform1000.child = new undefined();

Transform1000.child[0] = Shape1001;

HAnimSite999.children = new MFNode();

HAnimSite999.children[0] = Transform1000;

HAnimSegment995.children[2] = HAnimSite999;

HAnimJoint994.children = new MFNode();

HAnimJoint994.children[0] = HAnimSegment995;

HAnimJoint HAnimJoint1002 = createNode("HAnimJoint");
HAnimJoint1002.name = "r_forearm";
HAnimJoint1002.DEF = "hanim_r_forearm";
HAnimJoint1002.center = new SFVec3f(new float[-0.1819,-0.1075,0.9202]);
HAnimSegment HAnimSegment1003 = createNode("HAnimSegment");
HAnimSegment1003.name = "SEGMENT_FOR_r_forearm";
HAnimSegment1003.DEF = "hanim_SEGMENT_FOR_r_forearm";
TouchSensor TouchSensor1004 = createNode("TouchSensor");
TouchSensor1004.description = "joint r_forearm segment SEGMENT_FOR_r_forearm";
HAnimSegment1003.children = new MFNode();

HAnimSegment1003.children[0] = TouchSensor1004;

Transform Transform1005 = createNode("Transform");
Transform1005.translation = new SFVec3f(new float[-0.1819,-0.1075,0.9202]);
Shape Shape1006 = createNode("Shape");
Shape1006.USE = "JointShape";
Transform1005.child = new undefined();

Transform1005.child[0] = Shape1006;

HAnimSegment1003.children[1] = Transform1005;

HAnimSite HAnimSite1007 = createNode("HAnimSite");
HAnimSite1007.name = "SEGMENT_FOR_r_forearm_tip";
HAnimSite1007.DEF = "hanim_SEGMENT_FOR_r_forearm_tip";
Transform Transform1008 = createNode("Transform");
Transform1008.translation = new SFVec3f(new float[-0.1819,-0.1075,0.9202]);
Shape Shape1009 = createNode("Shape");
Shape1009.USE = "SiteShape";
Transform1008.child = new undefined();

Transform1008.child[0] = Shape1009;

HAnimSite1007.children = new MFNode();

HAnimSite1007.children[0] = Transform1008;

HAnimSegment1003.children[2] = HAnimSite1007;

HAnimJoint1002.children = new MFNode();

HAnimJoint1002.children[0] = HAnimSegment1003;

HAnimJoint HAnimJoint1010 = createNode("HAnimJoint");
HAnimJoint1010.name = "r_carpal";
HAnimJoint1010.DEF = "hanim_r_carpal";
HAnimJoint1010.center = new SFVec3f(new float[-0.1818,-0.1069,0.7157]);
HAnimSegment HAnimSegment1011 = createNode("HAnimSegment");
HAnimSegment1011.name = "SEGMENT_FOR_r_carpal";
HAnimSegment1011.DEF = "hanim_SEGMENT_FOR_r_carpal";
TouchSensor TouchSensor1012 = createNode("TouchSensor");
TouchSensor1012.description = "joint r_carpal segment SEGMENT_FOR_r_carpal";
HAnimSegment1011.children = new MFNode();

HAnimSegment1011.children[0] = TouchSensor1012;

Transform Transform1013 = createNode("Transform");
Transform1013.translation = new SFVec3f(new float[-0.1818,-0.1069,0.7157]);
Shape Shape1014 = createNode("Shape");
Shape1014.USE = "JointShape";
Transform1013.child = new undefined();

Transform1013.child[0] = Shape1014;

HAnimSegment1011.children[1] = Transform1013;

HAnimSite HAnimSite1015 = createNode("HAnimSite");
HAnimSite1015.name = "SEGMENT_FOR_r_carpal_tip";
HAnimSite1015.DEF = "hanim_SEGMENT_FOR_r_carpal_tip";
Transform Transform1016 = createNode("Transform");
Transform1016.translation = new SFVec3f(new float[-0.1818,-0.1069,0.7157]);
Shape Shape1017 = createNode("Shape");
Shape1017.USE = "SiteShape";
Transform1016.child = new undefined();

Transform1016.child[0] = Shape1017;

HAnimSite1015.children = new MFNode();

HAnimSite1015.children[0] = Transform1016;

HAnimSegment1011.children[2] = HAnimSite1015;

HAnimJoint1010.children = new MFNode();

HAnimJoint1010.children[0] = HAnimSegment1011;

HAnimJoint HAnimJoint1018 = createNode("HAnimJoint");
HAnimJoint1018.name = "r_trapezium";
HAnimJoint1018.DEF = "hanim_r_trapezium";
HAnimJoint1018.center = new SFVec3f(new float[-0.1811,-0.0826,0.6975]);
HAnimSegment HAnimSegment1019 = createNode("HAnimSegment");
HAnimSegment1019.name = "SEGMENT_FOR_r_trapezium";
HAnimSegment1019.DEF = "hanim_SEGMENT_FOR_r_trapezium";
TouchSensor TouchSensor1020 = createNode("TouchSensor");
TouchSensor1020.description = "joint r_trapezium segment SEGMENT_FOR_r_trapezium";
HAnimSegment1019.children = new MFNode();

HAnimSegment1019.children[0] = TouchSensor1020;

Transform Transform1021 = createNode("Transform");
Transform1021.translation = new SFVec3f(new float[-0.1811,-0.0826,0.6975]);
Shape Shape1022 = createNode("Shape");
Shape1022.USE = "JointShape";
Transform1021.child = new undefined();

Transform1021.child[0] = Shape1022;

HAnimSegment1019.children[1] = Transform1021;

HAnimSite HAnimSite1023 = createNode("HAnimSite");
HAnimSite1023.name = "SEGMENT_FOR_r_trapezium_tip";
HAnimSite1023.DEF = "hanim_SEGMENT_FOR_r_trapezium_tip";
Transform Transform1024 = createNode("Transform");
Transform1024.translation = new SFVec3f(new float[-0.1811,-0.0826,0.6975]);
Shape Shape1025 = createNode("Shape");
Shape1025.USE = "SiteShape";
Transform1024.child = new undefined();

Transform1024.child[0] = Shape1025;

HAnimSite1023.children = new MFNode();

HAnimSite1023.children[0] = Transform1024;

HAnimSegment1019.children[2] = HAnimSite1023;

HAnimJoint1018.children = new MFNode();

HAnimJoint1018.children[0] = HAnimSegment1019;

HAnimJoint HAnimJoint1026 = createNode("HAnimJoint");
HAnimJoint1026.name = "r_metacarpal_1";
HAnimJoint1026.DEF = "hanim_r_metacarpal_1";
HAnimJoint1026.center = new SFVec3f(new float[-0.1803,-0.0759,0.684]);
HAnimSegment HAnimSegment1027 = createNode("HAnimSegment");
HAnimSegment1027.name = "SEGMENT_FOR_r_metacarpal_1";
HAnimSegment1027.DEF = "hanim_SEGMENT_FOR_r_metacarpal_1";
TouchSensor TouchSensor1028 = createNode("TouchSensor");
TouchSensor1028.description = "joint r_metacarpal_1 segment SEGMENT_FOR_r_metacarpal_1";
HAnimSegment1027.children = new MFNode();

HAnimSegment1027.children[0] = TouchSensor1028;

Transform Transform1029 = createNode("Transform");
Transform1029.translation = new SFVec3f(new float[-0.1803,-0.0759,0.684]);
Shape Shape1030 = createNode("Shape");
Shape1030.USE = "JointShape";
Transform1029.child = new undefined();

Transform1029.child[0] = Shape1030;

HAnimSegment1027.children[1] = Transform1029;

HAnimSite HAnimSite1031 = createNode("HAnimSite");
HAnimSite1031.name = "SEGMENT_FOR_r_metacarpal_1_tip";
HAnimSite1031.DEF = "hanim_SEGMENT_FOR_r_metacarpal_1_tip";
Transform Transform1032 = createNode("Transform");
Transform1032.translation = new SFVec3f(new float[-0.1803,-0.0759,0.684]);
Shape Shape1033 = createNode("Shape");
Shape1033.USE = "SiteShape";
Transform1032.child = new undefined();

Transform1032.child[0] = Shape1033;

HAnimSite1031.children = new MFNode();

HAnimSite1031.children[0] = Transform1032;

HAnimSegment1027.children[2] = HAnimSite1031;

HAnimJoint1026.children = new MFNode();

HAnimJoint1026.children[0] = HAnimSegment1027;

HAnimJoint HAnimJoint1034 = createNode("HAnimJoint");
HAnimJoint1034.name = "r_carpal_proximal_phalanx_1";
HAnimJoint1034.DEF = "hanim_r_carpal_proximal_phalanx_1";
HAnimJoint1034.center = new SFVec3f(new float[-0.1808,-0.0661,0.6642]);
HAnimSegment HAnimSegment1035 = createNode("HAnimSegment");
HAnimSegment1035.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_1";
HAnimSegment1035.DEF = "hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_1";
TouchSensor TouchSensor1036 = createNode("TouchSensor");
TouchSensor1036.description = "joint r_carpal_proximal_phalanx_1 segment SEGMENT_FOR_r_carpal_proximal_phalanx_1";
HAnimSegment1035.children = new MFNode();

HAnimSegment1035.children[0] = TouchSensor1036;

Transform Transform1037 = createNode("Transform");
Transform1037.translation = new SFVec3f(new float[-0.1808,-0.0661,0.6642]);
Shape Shape1038 = createNode("Shape");
Shape1038.USE = "JointShape";
Transform1037.child = new undefined();

Transform1037.child[0] = Shape1038;

HAnimSegment1035.children[1] = Transform1037;

HAnimSite HAnimSite1039 = createNode("HAnimSite");
HAnimSite1039.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_1_tip";
HAnimSite1039.DEF = "hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_1_tip";
Transform Transform1040 = createNode("Transform");
Transform1040.translation = new SFVec3f(new float[-0.1808,-0.0661,0.6642]);
Shape Shape1041 = createNode("Shape");
Shape1041.USE = "SiteShape";
Transform1040.child = new undefined();

Transform1040.child[0] = Shape1041;

HAnimSite1039.children = new MFNode();

HAnimSite1039.children[0] = Transform1040;

HAnimSegment1035.children[2] = HAnimSite1039;

HAnimJoint1034.children = new MFNode();

HAnimJoint1034.children[0] = HAnimSegment1035;

HAnimJoint HAnimJoint1042 = createNode("HAnimJoint");
HAnimJoint1042.name = "r_carpal_distal_phalanx_1";
HAnimJoint1042.DEF = "hanim_r_carpal_distal_phalanx_1";
HAnimJoint1042.center = new SFVec3f(new float[-0.1825,-0.0522,0.6455]);
HAnimSegment HAnimSegment1043 = createNode("HAnimSegment");
HAnimSegment1043.name = "SEGMENT_FOR_r_carpal_distal_phalanx_1";
HAnimSegment1043.DEF = "hanim_SEGMENT_FOR_r_carpal_distal_phalanx_1";
TouchSensor TouchSensor1044 = createNode("TouchSensor");
TouchSensor1044.description = "joint r_carpal_distal_phalanx_1 segment SEGMENT_FOR_r_carpal_distal_phalanx_1";
HAnimSegment1043.children = new MFNode();

HAnimSegment1043.children[0] = TouchSensor1044;

Transform Transform1045 = createNode("Transform");
Transform1045.translation = new SFVec3f(new float[-0.1825,-0.0522,0.6455]);
Shape Shape1046 = createNode("Shape");
Shape1046.USE = "JointShape";
Transform1045.child = new undefined();

Transform1045.child[0] = Shape1046;

HAnimSegment1043.children[1] = Transform1045;

HAnimSite HAnimSite1047 = createNode("HAnimSite");
HAnimSite1047.name = "SEGMENT_FOR_r_carpal_distal_phalanx_1_tip";
HAnimSite1047.DEF = "hanim_SEGMENT_FOR_r_carpal_distal_phalanx_1_tip";
Transform Transform1048 = createNode("Transform");
Transform1048.translation = new SFVec3f(new float[-0.1825,-0.0522,0.6455]);
Shape Shape1049 = createNode("Shape");
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

HAnimJoint HAnimJoint1050 = createNode("HAnimJoint");
HAnimJoint1050.name = "r_trapezoid";
HAnimJoint1050.DEF = "hanim_r_trapezoid";
HAnimJoint1050.center = new SFVec3f(new float[-0.1811,-0.0935,0.6984]);
HAnimSegment HAnimSegment1051 = createNode("HAnimSegment");
HAnimSegment1051.name = "SEGMENT_FOR_r_trapezoid";
HAnimSegment1051.DEF = "hanim_SEGMENT_FOR_r_trapezoid";
TouchSensor TouchSensor1052 = createNode("TouchSensor");
TouchSensor1052.description = "joint r_trapezoid segment SEGMENT_FOR_r_trapezoid";
HAnimSegment1051.children = new MFNode();

HAnimSegment1051.children[0] = TouchSensor1052;

Transform Transform1053 = createNode("Transform");
Transform1053.translation = new SFVec3f(new float[-0.1811,-0.0935,0.6984]);
Shape Shape1054 = createNode("Shape");
Shape1054.USE = "JointShape";
Transform1053.child = new undefined();

Transform1053.child[0] = Shape1054;

HAnimSegment1051.children[1] = Transform1053;

HAnimSite HAnimSite1055 = createNode("HAnimSite");
HAnimSite1055.name = "SEGMENT_FOR_r_trapezoid_tip";
HAnimSite1055.DEF = "hanim_SEGMENT_FOR_r_trapezoid_tip";
Transform Transform1056 = createNode("Transform");
Transform1056.translation = new SFVec3f(new float[-0.1811,-0.0935,0.6984]);
Shape Shape1057 = createNode("Shape");
Shape1057.USE = "SiteShape";
Transform1056.child = new undefined();

Transform1056.child[0] = Shape1057;

HAnimSite1055.children = new MFNode();

HAnimSite1055.children[0] = Transform1056;

HAnimSegment1051.children[2] = HAnimSite1055;

HAnimJoint1050.children = new MFNode();

HAnimJoint1050.children[0] = HAnimSegment1051;

HAnimJoint HAnimJoint1058 = createNode("HAnimJoint");
HAnimJoint1058.name = "r_metacarpal_2";
HAnimJoint1058.DEF = "hanim_r_metacarpal_2";
HAnimJoint1058.center = new SFVec3f(new float[-0.1811,-0.0922,0.679]);
HAnimSegment HAnimSegment1059 = createNode("HAnimSegment");
HAnimSegment1059.name = "SEGMENT_FOR_r_metacarpal_2";
HAnimSegment1059.DEF = "hanim_SEGMENT_FOR_r_metacarpal_2";
TouchSensor TouchSensor1060 = createNode("TouchSensor");
TouchSensor1060.description = "joint r_metacarpal_2 segment SEGMENT_FOR_r_metacarpal_2";
HAnimSegment1059.children = new MFNode();

HAnimSegment1059.children[0] = TouchSensor1060;

Transform Transform1061 = createNode("Transform");
Transform1061.translation = new SFVec3f(new float[-0.1811,-0.0922,0.679]);
Shape Shape1062 = createNode("Shape");
Shape1062.USE = "JointShape";
Transform1061.child = new undefined();

Transform1061.child[0] = Shape1062;

HAnimSegment1059.children[1] = Transform1061;

HAnimSite HAnimSite1063 = createNode("HAnimSite");
HAnimSite1063.name = "SEGMENT_FOR_r_metacarpal_2_tip";
HAnimSite1063.DEF = "hanim_SEGMENT_FOR_r_metacarpal_2_tip";
Transform Transform1064 = createNode("Transform");
Transform1064.translation = new SFVec3f(new float[-0.1811,-0.0922,0.679]);
Shape Shape1065 = createNode("Shape");
Shape1065.USE = "SiteShape";
Transform1064.child = new undefined();

Transform1064.child[0] = Shape1065;

HAnimSite1063.children = new MFNode();

HAnimSite1063.children[0] = Transform1064;

HAnimSegment1059.children[2] = HAnimSite1063;

HAnimJoint1058.children = new MFNode();

HAnimJoint1058.children[0] = HAnimSegment1059;

HAnimJoint HAnimJoint1066 = createNode("HAnimJoint");
HAnimJoint1066.name = "r_carpal_proximal_phalanx_2";
HAnimJoint1066.DEF = "hanim_r_carpal_proximal_phalanx_2";
HAnimJoint1066.center = new SFVec3f(new float[-0.1835,-0.0868,0.6286]);
HAnimSegment HAnimSegment1067 = createNode("HAnimSegment");
HAnimSegment1067.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_2";
HAnimSegment1067.DEF = "hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_2";
TouchSensor TouchSensor1068 = createNode("TouchSensor");
TouchSensor1068.description = "joint r_carpal_proximal_phalanx_2 segment SEGMENT_FOR_r_carpal_proximal_phalanx_2";
HAnimSegment1067.children = new MFNode();

HAnimSegment1067.children[0] = TouchSensor1068;

Transform Transform1069 = createNode("Transform");
Transform1069.translation = new SFVec3f(new float[-0.1835,-0.0868,0.6286]);
Shape Shape1070 = createNode("Shape");
Shape1070.USE = "JointShape";
Transform1069.child = new undefined();

Transform1069.child[0] = Shape1070;

HAnimSegment1067.children[1] = Transform1069;

HAnimSite HAnimSite1071 = createNode("HAnimSite");
HAnimSite1071.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_2_tip";
HAnimSite1071.DEF = "hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_2_tip";
Transform Transform1072 = createNode("Transform");
Transform1072.translation = new SFVec3f(new float[-0.1835,-0.0868,0.6286]);
Shape Shape1073 = createNode("Shape");
Shape1073.USE = "SiteShape";
Transform1072.child = new undefined();

Transform1072.child[0] = Shape1073;

HAnimSite1071.children = new MFNode();

HAnimSite1071.children[0] = Transform1072;

HAnimSegment1067.children[2] = HAnimSite1071;

HAnimJoint1066.children = new MFNode();

HAnimJoint1066.children[0] = HAnimSegment1067;

HAnimJoint HAnimJoint1074 = createNode("HAnimJoint");
HAnimJoint1074.name = "r_carpal_middle_phalanx_2";
HAnimJoint1074.DEF = "hanim_r_carpal_middle_phalanx_2";
HAnimJoint1074.center = new SFVec3f(new float[-0.1815,-0.0877,0.5983]);
HAnimSegment HAnimSegment1075 = createNode("HAnimSegment");
HAnimSegment1075.name = "SEGMENT_FOR_r_carpal_middle_phalanx_2";
HAnimSegment1075.DEF = "hanim_SEGMENT_FOR_r_carpal_middle_phalanx_2";
TouchSensor TouchSensor1076 = createNode("TouchSensor");
TouchSensor1076.description = "joint r_carpal_middle_phalanx_2 segment SEGMENT_FOR_r_carpal_middle_phalanx_2";
HAnimSegment1075.children = new MFNode();

HAnimSegment1075.children[0] = TouchSensor1076;

Transform Transform1077 = createNode("Transform");
Transform1077.translation = new SFVec3f(new float[-0.1815,-0.0877,0.5983]);
Shape Shape1078 = createNode("Shape");
Shape1078.USE = "JointShape";
Transform1077.child = new undefined();

Transform1077.child[0] = Shape1078;

HAnimSegment1075.children[1] = Transform1077;

HAnimSite HAnimSite1079 = createNode("HAnimSite");
HAnimSite1079.name = "SEGMENT_FOR_r_carpal_middle_phalanx_2_tip";
HAnimSite1079.DEF = "hanim_SEGMENT_FOR_r_carpal_middle_phalanx_2_tip";
Transform Transform1080 = createNode("Transform");
Transform1080.translation = new SFVec3f(new float[-0.1815,-0.0877,0.5983]);
Shape Shape1081 = createNode("Shape");
Shape1081.USE = "SiteShape";
Transform1080.child = new undefined();

Transform1080.child[0] = Shape1081;

HAnimSite1079.children = new MFNode();

HAnimSite1079.children[0] = Transform1080;

HAnimSegment1075.children[2] = HAnimSite1079;

HAnimJoint1074.children = new MFNode();

HAnimJoint1074.children[0] = HAnimSegment1075;

HAnimJoint HAnimJoint1082 = createNode("HAnimJoint");
HAnimJoint1082.name = "r_carpal_distal_phalanx_2";
HAnimJoint1082.DEF = "hanim_r_carpal_distal_phalanx_2";
HAnimJoint1082.center = new SFVec3f(new float[-0.1805,-0.0885,0.5731]);
HAnimSegment HAnimSegment1083 = createNode("HAnimSegment");
HAnimSegment1083.name = "SEGMENT_FOR_r_carpal_distal_phalanx_2";
HAnimSegment1083.DEF = "hanim_SEGMENT_FOR_r_carpal_distal_phalanx_2";
TouchSensor TouchSensor1084 = createNode("TouchSensor");
TouchSensor1084.description = "joint r_carpal_distal_phalanx_2 segment SEGMENT_FOR_r_carpal_distal_phalanx_2";
HAnimSegment1083.children = new MFNode();

HAnimSegment1083.children[0] = TouchSensor1084;

Transform Transform1085 = createNode("Transform");
Transform1085.translation = new SFVec3f(new float[-0.1805,-0.0885,0.5731]);
Shape Shape1086 = createNode("Shape");
Shape1086.USE = "JointShape";
Transform1085.child = new undefined();

Transform1085.child[0] = Shape1086;

HAnimSegment1083.children[1] = Transform1085;

HAnimSite HAnimSite1087 = createNode("HAnimSite");
HAnimSite1087.name = "SEGMENT_FOR_r_carpal_distal_phalanx_2_tip";
HAnimSite1087.DEF = "hanim_SEGMENT_FOR_r_carpal_distal_phalanx_2_tip";
Transform Transform1088 = createNode("Transform");
Transform1088.translation = new SFVec3f(new float[-0.1805,-0.0885,0.5731]);
Shape Shape1089 = createNode("Shape");
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

HAnimJoint HAnimJoint1090 = createNode("HAnimJoint");
HAnimJoint1090.name = "r_capitate";
HAnimJoint1090.DEF = "hanim_r_capitate";
HAnimJoint1090.center = new SFVec3f(new float[-0.1809,-0.1067,0.7]);
HAnimSegment HAnimSegment1091 = createNode("HAnimSegment");
HAnimSegment1091.name = "SEGMENT_FOR_r_capitate";
HAnimSegment1091.DEF = "hanim_SEGMENT_FOR_r_capitate";
TouchSensor TouchSensor1092 = createNode("TouchSensor");
TouchSensor1092.description = "joint r_capitate segment SEGMENT_FOR_r_capitate";
HAnimSegment1091.children = new MFNode();

HAnimSegment1091.children[0] = TouchSensor1092;

Transform Transform1093 = createNode("Transform");
Transform1093.translation = new SFVec3f(new float[-0.1809,-0.1067,0.7]);
Shape Shape1094 = createNode("Shape");
Shape1094.USE = "JointShape";
Transform1093.child = new undefined();

Transform1093.child[0] = Shape1094;

HAnimSegment1091.children[1] = Transform1093;

HAnimSite HAnimSite1095 = createNode("HAnimSite");
HAnimSite1095.name = "SEGMENT_FOR_r_capitate_tip";
HAnimSite1095.DEF = "hanim_SEGMENT_FOR_r_capitate_tip";
Transform Transform1096 = createNode("Transform");
Transform1096.translation = new SFVec3f(new float[-0.1809,-0.1067,0.7]);
Shape Shape1097 = createNode("Shape");
Shape1097.USE = "SiteShape";
Transform1096.child = new undefined();

Transform1096.child[0] = Shape1097;

HAnimSite1095.children = new MFNode();

HAnimSite1095.children[0] = Transform1096;

HAnimSegment1091.children[2] = HAnimSite1095;

HAnimJoint1090.children = new MFNode();

HAnimJoint1090.children[0] = HAnimSegment1091;

HAnimJoint HAnimJoint1098 = createNode("HAnimJoint");
HAnimJoint1098.name = "r_metacarpal_3";
HAnimJoint1098.DEF = "hanim_r_metacarpal_3";
HAnimJoint1098.center = new SFVec3f(new float[-0.1809,-0.1081,0.6772]);
HAnimSegment HAnimSegment1099 = createNode("HAnimSegment");
HAnimSegment1099.name = "SEGMENT_FOR_r_metacarpal_3";
HAnimSegment1099.DEF = "hanim_SEGMENT_FOR_r_metacarpal_3";
TouchSensor TouchSensor1100 = createNode("TouchSensor");
TouchSensor1100.description = "joint r_metacarpal_3 segment SEGMENT_FOR_r_metacarpal_3";
HAnimSegment1099.children = new MFNode();

HAnimSegment1099.children[0] = TouchSensor1100;

Transform Transform1101 = createNode("Transform");
Transform1101.translation = new SFVec3f(new float[-0.1809,-0.1081,0.6772]);
Shape Shape1102 = createNode("Shape");
Shape1102.USE = "JointShape";
Transform1101.child = new undefined();

Transform1101.child[0] = Shape1102;

HAnimSegment1099.children[1] = Transform1101;

HAnimSite HAnimSite1103 = createNode("HAnimSite");
HAnimSite1103.name = "SEGMENT_FOR_r_metacarpal_3_tip";
HAnimSite1103.DEF = "hanim_SEGMENT_FOR_r_metacarpal_3_tip";
Transform Transform1104 = createNode("Transform");
Transform1104.translation = new SFVec3f(new float[-0.1809,-0.1081,0.6772]);
Shape Shape1105 = createNode("Shape");
Shape1105.USE = "SiteShape";
Transform1104.child = new undefined();

Transform1104.child[0] = Shape1105;

HAnimSite1103.children = new MFNode();

HAnimSite1103.children[0] = Transform1104;

HAnimSegment1099.children[2] = HAnimSite1103;

HAnimJoint1098.children = new MFNode();

HAnimJoint1098.children[0] = HAnimSegment1099;

HAnimJoint HAnimJoint1106 = createNode("HAnimJoint");
HAnimJoint1106.name = "r_carpal_proximal_phalanx_3";
HAnimJoint1106.DEF = "hanim_r_carpal_proximal_phalanx_3";
HAnimJoint1106.center = new SFVec3f(new float[-0.1835,-0.1058,0.6264]);
HAnimSegment HAnimSegment1107 = createNode("HAnimSegment");
HAnimSegment1107.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_3";
HAnimSegment1107.DEF = "hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_3";
TouchSensor TouchSensor1108 = createNode("TouchSensor");
TouchSensor1108.description = "joint r_carpal_proximal_phalanx_3 segment SEGMENT_FOR_r_carpal_proximal_phalanx_3";
HAnimSegment1107.children = new MFNode();

HAnimSegment1107.children[0] = TouchSensor1108;

Transform Transform1109 = createNode("Transform");
Transform1109.translation = new SFVec3f(new float[-0.1835,-0.1058,0.6264]);
Shape Shape1110 = createNode("Shape");
Shape1110.USE = "JointShape";
Transform1109.child = new undefined();

Transform1109.child[0] = Shape1110;

HAnimSegment1107.children[1] = Transform1109;

HAnimSite HAnimSite1111 = createNode("HAnimSite");
HAnimSite1111.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_3_tip";
HAnimSite1111.DEF = "hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_3_tip";
Transform Transform1112 = createNode("Transform");
Transform1112.translation = new SFVec3f(new float[-0.1835,-0.1058,0.6264]);
Shape Shape1113 = createNode("Shape");
Shape1113.USE = "SiteShape";
Transform1112.child = new undefined();

Transform1112.child[0] = Shape1113;

HAnimSite1111.children = new MFNode();

HAnimSite1111.children[0] = Transform1112;

HAnimSegment1107.children[2] = HAnimSite1111;

HAnimJoint1106.children = new MFNode();

HAnimJoint1106.children[0] = HAnimSegment1107;

HAnimJoint HAnimJoint1114 = createNode("HAnimJoint");
HAnimJoint1114.name = "r_carpal_middle_phalanx_3";
HAnimJoint1114.DEF = "hanim_r_carpal_middle_phalanx_3";
HAnimJoint1114.center = new SFVec3f(new float[-0.1815,-0.1054,0.5947]);
HAnimSegment HAnimSegment1115 = createNode("HAnimSegment");
HAnimSegment1115.name = "SEGMENT_FOR_r_carpal_middle_phalanx_3";
HAnimSegment1115.DEF = "hanim_SEGMENT_FOR_r_carpal_middle_phalanx_3";
TouchSensor TouchSensor1116 = createNode("TouchSensor");
TouchSensor1116.description = "joint r_carpal_middle_phalanx_3 segment SEGMENT_FOR_r_carpal_middle_phalanx_3";
HAnimSegment1115.children = new MFNode();

HAnimSegment1115.children[0] = TouchSensor1116;

Transform Transform1117 = createNode("Transform");
Transform1117.translation = new SFVec3f(new float[-0.1815,-0.1054,0.5947]);
Shape Shape1118 = createNode("Shape");
Shape1118.USE = "JointShape";
Transform1117.child = new undefined();

Transform1117.child[0] = Shape1118;

HAnimSegment1115.children[1] = Transform1117;

HAnimSite HAnimSite1119 = createNode("HAnimSite");
HAnimSite1119.name = "SEGMENT_FOR_r_carpal_middle_phalanx_3_tip";
HAnimSite1119.DEF = "hanim_SEGMENT_FOR_r_carpal_middle_phalanx_3_tip";
Transform Transform1120 = createNode("Transform");
Transform1120.translation = new SFVec3f(new float[-0.1815,-0.1054,0.5947]);
Shape Shape1121 = createNode("Shape");
Shape1121.USE = "SiteShape";
Transform1120.child = new undefined();

Transform1120.child[0] = Shape1121;

HAnimSite1119.children = new MFNode();

HAnimSite1119.children[0] = Transform1120;

HAnimSegment1115.children[2] = HAnimSite1119;

HAnimJoint1114.children = new MFNode();

HAnimJoint1114.children[0] = HAnimSegment1115;

HAnimJoint HAnimJoint1122 = createNode("HAnimJoint");
HAnimJoint1122.name = "r_carpal_distal_phalanx_3";
HAnimJoint1122.DEF = "hanim_r_carpal_distal_phalanx_3";
HAnimJoint1122.center = new SFVec3f(new float[-0.1805,-0.1056,0.5668]);
HAnimSegment HAnimSegment1123 = createNode("HAnimSegment");
HAnimSegment1123.name = "SEGMENT_FOR_r_carpal_distal_phalanx_3";
HAnimSegment1123.DEF = "hanim_SEGMENT_FOR_r_carpal_distal_phalanx_3";
TouchSensor TouchSensor1124 = createNode("TouchSensor");
TouchSensor1124.description = "joint r_carpal_distal_phalanx_3 segment SEGMENT_FOR_r_carpal_distal_phalanx_3";
HAnimSegment1123.children = new MFNode();

HAnimSegment1123.children[0] = TouchSensor1124;

Transform Transform1125 = createNode("Transform");
Transform1125.translation = new SFVec3f(new float[-0.1805,-0.1056,0.5668]);
Shape Shape1126 = createNode("Shape");
Shape1126.USE = "JointShape";
Transform1125.child = new undefined();

Transform1125.child[0] = Shape1126;

HAnimSegment1123.children[1] = Transform1125;

HAnimSite HAnimSite1127 = createNode("HAnimSite");
HAnimSite1127.name = "SEGMENT_FOR_r_carpal_distal_phalanx_3_tip";
HAnimSite1127.DEF = "hanim_SEGMENT_FOR_r_carpal_distal_phalanx_3_tip";
Transform Transform1128 = createNode("Transform");
Transform1128.translation = new SFVec3f(new float[-0.1805,-0.1056,0.5668]);
Shape Shape1129 = createNode("Shape");
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

HAnimJoint HAnimJoint1130 = createNode("HAnimJoint");
HAnimJoint1130.name = "r_hamate";
HAnimJoint1130.DEF = "hanim_r_hamate";
HAnimJoint1130.center = new SFVec3f(new float[-0.1809,-0.1276,0.6973]);
HAnimSegment HAnimSegment1131 = createNode("HAnimSegment");
HAnimSegment1131.name = "SEGMENT_FOR_r_hamate";
HAnimSegment1131.DEF = "hanim_SEGMENT_FOR_r_hamate";
TouchSensor TouchSensor1132 = createNode("TouchSensor");
TouchSensor1132.description = "joint r_hamate segment SEGMENT_FOR_r_hamate";
HAnimSegment1131.children = new MFNode();

HAnimSegment1131.children[0] = TouchSensor1132;

Transform Transform1133 = createNode("Transform");
Transform1133.translation = new SFVec3f(new float[-0.1809,-0.1276,0.6973]);
Shape Shape1134 = createNode("Shape");
Shape1134.USE = "JointShape";
Transform1133.child = new undefined();

Transform1133.child[0] = Shape1134;

HAnimSegment1131.children[1] = Transform1133;

HAnimSite HAnimSite1135 = createNode("HAnimSite");
HAnimSite1135.name = "SEGMENT_FOR_r_hamate_tip";
HAnimSite1135.DEF = "hanim_SEGMENT_FOR_r_hamate_tip";
Transform Transform1136 = createNode("Transform");
Transform1136.translation = new SFVec3f(new float[-0.1809,-0.1276,0.6973]);
Shape Shape1137 = createNode("Shape");
Shape1137.USE = "SiteShape";
Transform1136.child = new undefined();

Transform1136.child[0] = Shape1137;

HAnimSite1135.children = new MFNode();

HAnimSite1135.children[0] = Transform1136;

HAnimSegment1131.children[2] = HAnimSite1135;

HAnimJoint1130.children = new MFNode();

HAnimJoint1130.children[0] = HAnimSegment1131;

HAnimJoint HAnimJoint1138 = createNode("HAnimJoint");
HAnimJoint1138.name = "r_metacarpal_4";
HAnimJoint1138.DEF = "hanim_r_metacarpal_4";
HAnimJoint1138.center = new SFVec3f(new float[-0.1809,-0.1218,0.6777]);
HAnimSegment HAnimSegment1139 = createNode("HAnimSegment");
HAnimSegment1139.name = "SEGMENT_FOR_r_metacarpal_4";
HAnimSegment1139.DEF = "hanim_SEGMENT_FOR_r_metacarpal_4";
TouchSensor TouchSensor1140 = createNode("TouchSensor");
TouchSensor1140.description = "joint r_metacarpal_4 segment SEGMENT_FOR_r_metacarpal_4";
HAnimSegment1139.children = new MFNode();

HAnimSegment1139.children[0] = TouchSensor1140;

Transform Transform1141 = createNode("Transform");
Transform1141.translation = new SFVec3f(new float[-0.1809,-0.1218,0.6777]);
Shape Shape1142 = createNode("Shape");
Shape1142.USE = "JointShape";
Transform1141.child = new undefined();

Transform1141.child[0] = Shape1142;

HAnimSegment1139.children[1] = Transform1141;

HAnimSite HAnimSite1143 = createNode("HAnimSite");
HAnimSite1143.name = "SEGMENT_FOR_r_metacarpal_4_tip";
HAnimSite1143.DEF = "hanim_SEGMENT_FOR_r_metacarpal_4_tip";
Transform Transform1144 = createNode("Transform");
Transform1144.translation = new SFVec3f(new float[-0.1809,-0.1218,0.6777]);
Shape Shape1145 = createNode("Shape");
Shape1145.USE = "SiteShape";
Transform1144.child = new undefined();

Transform1144.child[0] = Shape1145;

HAnimSite1143.children = new MFNode();

HAnimSite1143.children[0] = Transform1144;

HAnimSegment1139.children[2] = HAnimSite1143;

HAnimJoint1138.children = new MFNode();

HAnimJoint1138.children[0] = HAnimSegment1139;

HAnimJoint HAnimJoint1146 = createNode("HAnimJoint");
HAnimJoint1146.name = "r_carpal_proximal_phalanx_4";
HAnimJoint1146.DEF = "hanim_r_carpal_proximal_phalanx_4";
HAnimJoint1146.center = new SFVec3f(new float[-0.1835,-0.1233,0.6255]);
HAnimSegment HAnimSegment1147 = createNode("HAnimSegment");
HAnimSegment1147.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_4";
HAnimSegment1147.DEF = "hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_4";
TouchSensor TouchSensor1148 = createNode("TouchSensor");
TouchSensor1148.description = "joint r_carpal_proximal_phalanx_4 segment SEGMENT_FOR_r_carpal_proximal_phalanx_4";
HAnimSegment1147.children = new MFNode();

HAnimSegment1147.children[0] = TouchSensor1148;

Transform Transform1149 = createNode("Transform");
Transform1149.translation = new SFVec3f(new float[-0.1835,-0.1233,0.6255]);
Shape Shape1150 = createNode("Shape");
Shape1150.USE = "JointShape";
Transform1149.child = new undefined();

Transform1149.child[0] = Shape1150;

HAnimSegment1147.children[1] = Transform1149;

HAnimSite HAnimSite1151 = createNode("HAnimSite");
HAnimSite1151.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_4_tip";
HAnimSite1151.DEF = "hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_4_tip";
Transform Transform1152 = createNode("Transform");
Transform1152.translation = new SFVec3f(new float[-0.1835,-0.1233,0.6255]);
Shape Shape1153 = createNode("Shape");
Shape1153.USE = "SiteShape";
Transform1152.child = new undefined();

Transform1152.child[0] = Shape1153;

HAnimSite1151.children = new MFNode();

HAnimSite1151.children[0] = Transform1152;

HAnimSegment1147.children[2] = HAnimSite1151;

HAnimJoint1146.children = new MFNode();

HAnimJoint1146.children[0] = HAnimSegment1147;

HAnimJoint HAnimJoint1154 = createNode("HAnimJoint");
HAnimJoint1154.name = "r_carpal_middle_phalanx_4";
HAnimJoint1154.DEF = "hanim_r_carpal_middle_phalanx_4";
HAnimJoint1154.center = new SFVec3f(new float[-0.1815,-0.1225,0.598]);
HAnimSegment HAnimSegment1155 = createNode("HAnimSegment");
HAnimSegment1155.name = "SEGMENT_FOR_r_carpal_middle_phalanx_4";
HAnimSegment1155.DEF = "hanim_SEGMENT_FOR_r_carpal_middle_phalanx_4";
TouchSensor TouchSensor1156 = createNode("TouchSensor");
TouchSensor1156.description = "joint r_carpal_middle_phalanx_4 segment SEGMENT_FOR_r_carpal_middle_phalanx_4";
HAnimSegment1155.children = new MFNode();

HAnimSegment1155.children[0] = TouchSensor1156;

Transform Transform1157 = createNode("Transform");
Transform1157.translation = new SFVec3f(new float[-0.1815,-0.1225,0.598]);
Shape Shape1158 = createNode("Shape");
Shape1158.USE = "JointShape";
Transform1157.child = new undefined();

Transform1157.child[0] = Shape1158;

HAnimSegment1155.children[1] = Transform1157;

HAnimSite HAnimSite1159 = createNode("HAnimSite");
HAnimSite1159.name = "SEGMENT_FOR_r_carpal_middle_phalanx_4_tip";
HAnimSite1159.DEF = "hanim_SEGMENT_FOR_r_carpal_middle_phalanx_4_tip";
Transform Transform1160 = createNode("Transform");
Transform1160.translation = new SFVec3f(new float[-0.1815,-0.1225,0.598]);
Shape Shape1161 = createNode("Shape");
Shape1161.USE = "SiteShape";
Transform1160.child = new undefined();

Transform1160.child[0] = Shape1161;

HAnimSite1159.children = new MFNode();

HAnimSite1159.children[0] = Transform1160;

HAnimSegment1155.children[2] = HAnimSite1159;

HAnimJoint1154.children = new MFNode();

HAnimJoint1154.children[0] = HAnimSegment1155;

HAnimJoint HAnimJoint1162 = createNode("HAnimJoint");
HAnimJoint1162.name = "r_carpal_distal_phalanx_4";
HAnimJoint1162.DEF = "hanim_r_carpal_distal_phalanx_4";
HAnimJoint1162.center = new SFVec3f(new float[-0.1805,-0.1217,0.5722]);
HAnimSegment HAnimSegment1163 = createNode("HAnimSegment");
HAnimSegment1163.name = "SEGMENT_FOR_r_carpal_distal_phalanx_4";
HAnimSegment1163.DEF = "hanim_SEGMENT_FOR_r_carpal_distal_phalanx_4";
TouchSensor TouchSensor1164 = createNode("TouchSensor");
TouchSensor1164.description = "joint r_carpal_distal_phalanx_4 segment SEGMENT_FOR_r_carpal_distal_phalanx_4";
HAnimSegment1163.children = new MFNode();

HAnimSegment1163.children[0] = TouchSensor1164;

Transform Transform1165 = createNode("Transform");
Transform1165.translation = new SFVec3f(new float[-0.1805,-0.1217,0.5722]);
Shape Shape1166 = createNode("Shape");
Shape1166.USE = "JointShape";
Transform1165.child = new undefined();

Transform1165.child[0] = Shape1166;

HAnimSegment1163.children[1] = Transform1165;

HAnimSite HAnimSite1167 = createNode("HAnimSite");
HAnimSite1167.name = "SEGMENT_FOR_r_carpal_distal_phalanx_4_tip";
HAnimSite1167.DEF = "hanim_SEGMENT_FOR_r_carpal_distal_phalanx_4_tip";
Transform Transform1168 = createNode("Transform");
Transform1168.translation = new SFVec3f(new float[-0.1805,-0.1217,0.5722]);
Shape Shape1169 = createNode("Shape");
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

HAnimJoint HAnimJoint1170 = createNode("HAnimJoint");
HAnimJoint1170.name = "r_metacarpal_5";
HAnimJoint1170.DEF = "hanim_r_metacarpal_5";
HAnimJoint1170.center = new SFVec3f(new float[-0.1814,-0.1347,0.6797]);
HAnimSegment HAnimSegment1171 = createNode("HAnimSegment");
HAnimSegment1171.name = "SEGMENT_FOR_r_metacarpal_5";
HAnimSegment1171.DEF = "hanim_SEGMENT_FOR_r_metacarpal_5";
TouchSensor TouchSensor1172 = createNode("TouchSensor");
TouchSensor1172.description = "joint r_metacarpal_5 segment SEGMENT_FOR_r_metacarpal_5";
HAnimSegment1171.children = new MFNode();

HAnimSegment1171.children[0] = TouchSensor1172;

Transform Transform1173 = createNode("Transform");
Transform1173.translation = new SFVec3f(new float[-0.1814,-0.1347,0.6797]);
Shape Shape1174 = createNode("Shape");
Shape1174.USE = "JointShape";
Transform1173.child = new undefined();

Transform1173.child[0] = Shape1174;

HAnimSegment1171.children[1] = Transform1173;

HAnimSite HAnimSite1175 = createNode("HAnimSite");
HAnimSite1175.name = "SEGMENT_FOR_r_metacarpal_5_tip";
HAnimSite1175.DEF = "hanim_SEGMENT_FOR_r_metacarpal_5_tip";
Transform Transform1176 = createNode("Transform");
Transform1176.translation = new SFVec3f(new float[-0.1814,-0.1347,0.6797]);
Shape Shape1177 = createNode("Shape");
Shape1177.USE = "SiteShape";
Transform1176.child = new undefined();

Transform1176.child[0] = Shape1177;

HAnimSite1175.children = new MFNode();

HAnimSite1175.children[0] = Transform1176;

HAnimSegment1171.children[2] = HAnimSite1175;

HAnimJoint1170.children = new MFNode();

HAnimJoint1170.children[0] = HAnimSegment1171;

HAnimJoint HAnimJoint1178 = createNode("HAnimJoint");
HAnimJoint1178.name = "r_carpal_proximal_phalanx_5";
HAnimJoint1178.DEF = "hanim_r_carpal_proximal_phalanx_5";
HAnimJoint1178.center = new SFVec3f(new float[-0.1832,-0.1389,0.6295]);
HAnimSegment HAnimSegment1179 = createNode("HAnimSegment");
HAnimSegment1179.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_5";
HAnimSegment1179.DEF = "hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_5";
TouchSensor TouchSensor1180 = createNode("TouchSensor");
TouchSensor1180.description = "joint r_carpal_proximal_phalanx_5 segment SEGMENT_FOR_r_carpal_proximal_phalanx_5";
HAnimSegment1179.children = new MFNode();

HAnimSegment1179.children[0] = TouchSensor1180;

Transform Transform1181 = createNode("Transform");
Transform1181.translation = new SFVec3f(new float[-0.1832,-0.1389,0.6295]);
Shape Shape1182 = createNode("Shape");
Shape1182.USE = "JointShape";
Transform1181.child = new undefined();

Transform1181.child[0] = Shape1182;

HAnimSegment1179.children[1] = Transform1181;

HAnimSite HAnimSite1183 = createNode("HAnimSite");
HAnimSite1183.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_5_tip";
HAnimSite1183.DEF = "hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_5_tip";
Transform Transform1184 = createNode("Transform");
Transform1184.translation = new SFVec3f(new float[-0.1832,-0.1389,0.6295]);
Shape Shape1185 = createNode("Shape");
Shape1185.USE = "SiteShape";
Transform1184.child = new undefined();

Transform1184.child[0] = Shape1185;

HAnimSite1183.children = new MFNode();

HAnimSite1183.children[0] = Transform1184;

HAnimSegment1179.children[2] = HAnimSite1183;

HAnimJoint1178.children = new MFNode();

HAnimJoint1178.children[0] = HAnimSegment1179;

HAnimJoint HAnimJoint1186 = createNode("HAnimJoint");
HAnimJoint1186.name = "r_carpal_middle_phalanx_5";
HAnimJoint1186.DEF = "hanim_r_carpal_middle_phalanx_5";
HAnimJoint1186.center = new SFVec3f(new float[-0.1815,-0.139,0.6124]);
HAnimSegment HAnimSegment1187 = createNode("HAnimSegment");
HAnimSegment1187.name = "SEGMENT_FOR_r_carpal_middle_phalanx_5";
HAnimSegment1187.DEF = "hanim_SEGMENT_FOR_r_carpal_middle_phalanx_5";
TouchSensor TouchSensor1188 = createNode("TouchSensor");
TouchSensor1188.description = "joint r_carpal_middle_phalanx_5 segment SEGMENT_FOR_r_carpal_middle_phalanx_5";
HAnimSegment1187.children = new MFNode();

HAnimSegment1187.children[0] = TouchSensor1188;

Transform Transform1189 = createNode("Transform");
Transform1189.translation = new SFVec3f(new float[-0.1815,-0.139,0.6124]);
Shape Shape1190 = createNode("Shape");
Shape1190.USE = "JointShape";
Transform1189.child = new undefined();

Transform1189.child[0] = Shape1190;

HAnimSegment1187.children[1] = Transform1189;

HAnimSite HAnimSite1191 = createNode("HAnimSite");
HAnimSite1191.name = "SEGMENT_FOR_r_carpal_middle_phalanx_5_tip";
HAnimSite1191.DEF = "hanim_SEGMENT_FOR_r_carpal_middle_phalanx_5_tip";
Transform Transform1192 = createNode("Transform");
Transform1192.translation = new SFVec3f(new float[-0.1815,-0.139,0.6124]);
Shape Shape1193 = createNode("Shape");
Shape1193.USE = "SiteShape";
Transform1192.child = new undefined();

Transform1192.child[0] = Shape1193;

HAnimSite1191.children = new MFNode();

HAnimSite1191.children[0] = Transform1192;

HAnimSegment1187.children[2] = HAnimSite1191;

HAnimJoint1186.children = new MFNode();

HAnimJoint1186.children[0] = HAnimSegment1187;

HAnimJoint HAnimJoint1194 = createNode("HAnimJoint");
HAnimJoint1194.name = "r_carpal_distal_phalanx_5";
HAnimJoint1194.DEF = "hanim_r_carpal_distal_phalanx_5";
HAnimJoint1194.center = new SFVec3f(new float[-0.1806,-0.1388,0.5938]);
HAnimSegment HAnimSegment1195 = createNode("HAnimSegment");
HAnimSegment1195.name = "SEGMENT_FOR_r_carpal_distal_phalanx_5";
HAnimSegment1195.DEF = "hanim_SEGMENT_FOR_r_carpal_distal_phalanx_5";
TouchSensor TouchSensor1196 = createNode("TouchSensor");
TouchSensor1196.description = "joint r_carpal_distal_phalanx_5 segment SEGMENT_FOR_r_carpal_distal_phalanx_5";
HAnimSegment1195.children = new MFNode();

HAnimSegment1195.children[0] = TouchSensor1196;

Transform Transform1197 = createNode("Transform");
Transform1197.translation = new SFVec3f(new float[-0.1806,-0.1388,0.5938]);
Shape Shape1198 = createNode("Shape");
Shape1198.USE = "JointShape";
Transform1197.child = new undefined();

Transform1197.child[0] = Shape1198;

HAnimSegment1195.children[1] = Transform1197;

HAnimSite HAnimSite1199 = createNode("HAnimSite");
HAnimSite1199.name = "SEGMENT_FOR_r_carpal_distal_phalanx_5_tip";
HAnimSite1199.DEF = "hanim_SEGMENT_FOR_r_carpal_distal_phalanx_5_tip";
Transform Transform1200 = createNode("Transform");
Transform1200.translation = new SFVec3f(new float[-0.1806,-0.1388,0.5938]);
Shape Shape1201 = createNode("Shape");
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

HAnimJoint HAnimJoint1202 = createNode("HAnimJoint");
HAnimJoint1202.USE = "hanim_sacrum";
HAnimHumanoid25.joints[1] = HAnimJoint1202;

HAnimJoint HAnimJoint1203 = createNode("HAnimJoint");
HAnimJoint1203.USE = "hanim_pelvis";
HAnimHumanoid25.joints[2] = HAnimJoint1203;

HAnimJoint HAnimJoint1204 = createNode("HAnimJoint");
HAnimJoint1204.USE = "hanim_l_thigh";
HAnimHumanoid25.joints[3] = HAnimJoint1204;

HAnimJoint HAnimJoint1205 = createNode("HAnimJoint");
HAnimJoint1205.USE = "hanim_l_calf";
HAnimHumanoid25.joints[4] = HAnimJoint1205;

HAnimJoint HAnimJoint1206 = createNode("HAnimJoint");
HAnimJoint1206.USE = "hanim_l_talus";
HAnimHumanoid25.joints[5] = HAnimJoint1206;

HAnimJoint HAnimJoint1207 = createNode("HAnimJoint");
HAnimJoint1207.USE = "hanim_l_navicular";
HAnimHumanoid25.joints[6] = HAnimJoint1207;

HAnimJoint HAnimJoint1208 = createNode("HAnimJoint");
HAnimJoint1208.USE = "hanim_l_cuneiform_1";
HAnimHumanoid25.joints[7] = HAnimJoint1208;

HAnimJoint HAnimJoint1209 = createNode("HAnimJoint");
HAnimJoint1209.USE = "hanim_l_metatarsal_1";
HAnimHumanoid25.joints[8] = HAnimJoint1209;

HAnimJoint HAnimJoint1210 = createNode("HAnimJoint");
HAnimJoint1210.USE = "hanim_l_tarsal_proximal_phalanx_1";
HAnimHumanoid25.joints[9] = HAnimJoint1210;

HAnimJoint HAnimJoint1211 = createNode("HAnimJoint");
HAnimJoint1211.USE = "hanim_l_tarsal_distal_phalanx_1";
HAnimHumanoid25.joints[10] = HAnimJoint1211;

HAnimJoint HAnimJoint1212 = createNode("HAnimJoint");
HAnimJoint1212.USE = "hanim_l_cuneiform_2";
HAnimHumanoid25.joints[11] = HAnimJoint1212;

HAnimJoint HAnimJoint1213 = createNode("HAnimJoint");
HAnimJoint1213.USE = "hanim_l_metatarsal_2";
HAnimHumanoid25.joints[12] = HAnimJoint1213;

HAnimJoint HAnimJoint1214 = createNode("HAnimJoint");
HAnimJoint1214.USE = "hanim_l_tarsal_proximal_phalanx_2";
HAnimHumanoid25.joints[13] = HAnimJoint1214;

HAnimJoint HAnimJoint1215 = createNode("HAnimJoint");
HAnimJoint1215.USE = "hanim_l_tarsal_middle_phalanx_2";
HAnimHumanoid25.joints[14] = HAnimJoint1215;

HAnimJoint HAnimJoint1216 = createNode("HAnimJoint");
HAnimJoint1216.USE = "hanim_l_tarsal_distal_phalanx_2";
HAnimHumanoid25.joints[15] = HAnimJoint1216;

HAnimJoint HAnimJoint1217 = createNode("HAnimJoint");
HAnimJoint1217.USE = "hanim_l_cuneiform_3";
HAnimHumanoid25.joints[16] = HAnimJoint1217;

HAnimJoint HAnimJoint1218 = createNode("HAnimJoint");
HAnimJoint1218.USE = "hanim_l_metatarsal_3";
HAnimHumanoid25.joints[17] = HAnimJoint1218;

HAnimJoint HAnimJoint1219 = createNode("HAnimJoint");
HAnimJoint1219.USE = "hanim_l_tarsal_proximal_phalanx_3";
HAnimHumanoid25.joints[18] = HAnimJoint1219;

HAnimJoint HAnimJoint1220 = createNode("HAnimJoint");
HAnimJoint1220.USE = "hanim_l_tarsal_middle_phalanx_3";
HAnimHumanoid25.joints[19] = HAnimJoint1220;

HAnimJoint HAnimJoint1221 = createNode("HAnimJoint");
HAnimJoint1221.USE = "hanim_l_tarsal_distal_phalanx_3";
HAnimHumanoid25.joints[20] = HAnimJoint1221;

HAnimJoint HAnimJoint1222 = createNode("HAnimJoint");
HAnimJoint1222.USE = "hanim_l_calcaneus";
HAnimHumanoid25.joints[21] = HAnimJoint1222;

HAnimJoint HAnimJoint1223 = createNode("HAnimJoint");
HAnimJoint1223.USE = "hanim_l_cuboid";
HAnimHumanoid25.joints[22] = HAnimJoint1223;

HAnimJoint HAnimJoint1224 = createNode("HAnimJoint");
HAnimJoint1224.USE = "hanim_l_metatarsal_4";
HAnimHumanoid25.joints[23] = HAnimJoint1224;

HAnimJoint HAnimJoint1225 = createNode("HAnimJoint");
HAnimJoint1225.USE = "hanim_l_tarsal_proximal_phalanx_4";
HAnimHumanoid25.joints[24] = HAnimJoint1225;

HAnimJoint HAnimJoint1226 = createNode("HAnimJoint");
HAnimJoint1226.USE = "hanim_l_tarsal_middle_phalanx_4";
HAnimHumanoid25.joints[25] = HAnimJoint1226;

HAnimJoint HAnimJoint1227 = createNode("HAnimJoint");
HAnimJoint1227.USE = "hanim_l_tarsal_distal_phalanx_4";
HAnimHumanoid25.joints[26] = HAnimJoint1227;

HAnimJoint HAnimJoint1228 = createNode("HAnimJoint");
HAnimJoint1228.USE = "hanim_l_metatarsal_5";
HAnimHumanoid25.joints[27] = HAnimJoint1228;

HAnimJoint HAnimJoint1229 = createNode("HAnimJoint");
HAnimJoint1229.USE = "hanim_l_tarsal_proximal_phalanx_5";
HAnimHumanoid25.joints[28] = HAnimJoint1229;

HAnimJoint HAnimJoint1230 = createNode("HAnimJoint");
HAnimJoint1230.USE = "hanim_l_tarsal_middle_phalanx_5";
HAnimHumanoid25.joints[29] = HAnimJoint1230;

HAnimJoint HAnimJoint1231 = createNode("HAnimJoint");
HAnimJoint1231.USE = "hanim_l_tarsal_distal_phalanx_5";
HAnimHumanoid25.joints[30] = HAnimJoint1231;

HAnimJoint HAnimJoint1232 = createNode("HAnimJoint");
HAnimJoint1232.USE = "hanim_r_thigh";
HAnimHumanoid25.joints[31] = HAnimJoint1232;

HAnimJoint HAnimJoint1233 = createNode("HAnimJoint");
HAnimJoint1233.USE = "hanim_r_calf";
HAnimHumanoid25.joints[32] = HAnimJoint1233;

HAnimJoint HAnimJoint1234 = createNode("HAnimJoint");
HAnimJoint1234.USE = "hanim_r_talus";
HAnimHumanoid25.joints[33] = HAnimJoint1234;

HAnimJoint HAnimJoint1235 = createNode("HAnimJoint");
HAnimJoint1235.USE = "hanim_r_navicular";
HAnimHumanoid25.joints[34] = HAnimJoint1235;

HAnimJoint HAnimJoint1236 = createNode("HAnimJoint");
HAnimJoint1236.USE = "hanim_r_cuneiform_1";
HAnimHumanoid25.joints[35] = HAnimJoint1236;

HAnimJoint HAnimJoint1237 = createNode("HAnimJoint");
HAnimJoint1237.USE = "hanim_r_metatarsal_1";
HAnimHumanoid25.joints[36] = HAnimJoint1237;

HAnimJoint HAnimJoint1238 = createNode("HAnimJoint");
HAnimJoint1238.USE = "hanim_r_tarsal_proximal_phalanx_1";
HAnimHumanoid25.joints[37] = HAnimJoint1238;

HAnimJoint HAnimJoint1239 = createNode("HAnimJoint");
HAnimJoint1239.USE = "hanim_r_tarsal_distal_phalanx_1";
HAnimHumanoid25.joints[38] = HAnimJoint1239;

HAnimJoint HAnimJoint1240 = createNode("HAnimJoint");
HAnimJoint1240.USE = "hanim_r_cuneiform_2";
HAnimHumanoid25.joints[39] = HAnimJoint1240;

HAnimJoint HAnimJoint1241 = createNode("HAnimJoint");
HAnimJoint1241.USE = "hanim_r_metatarsal_2";
HAnimHumanoid25.joints[40] = HAnimJoint1241;

HAnimJoint HAnimJoint1242 = createNode("HAnimJoint");
HAnimJoint1242.USE = "hanim_r_tarsal_proximal_phalanx_2";
HAnimHumanoid25.joints[41] = HAnimJoint1242;

HAnimJoint HAnimJoint1243 = createNode("HAnimJoint");
HAnimJoint1243.USE = "hanim_r_tarsal_middle_phalanx_2";
HAnimHumanoid25.joints[42] = HAnimJoint1243;

HAnimJoint HAnimJoint1244 = createNode("HAnimJoint");
HAnimJoint1244.USE = "hanim_r_tarsal_distal_phalanx_2";
HAnimHumanoid25.joints[43] = HAnimJoint1244;

HAnimJoint HAnimJoint1245 = createNode("HAnimJoint");
HAnimJoint1245.USE = "hanim_r_cuneiform_3";
HAnimHumanoid25.joints[44] = HAnimJoint1245;

HAnimJoint HAnimJoint1246 = createNode("HAnimJoint");
HAnimJoint1246.USE = "hanim_r_metatarsal_3";
HAnimHumanoid25.joints[45] = HAnimJoint1246;

HAnimJoint HAnimJoint1247 = createNode("HAnimJoint");
HAnimJoint1247.USE = "hanim_r_tarsal_proximal_phalanx_3";
HAnimHumanoid25.joints[46] = HAnimJoint1247;

HAnimJoint HAnimJoint1248 = createNode("HAnimJoint");
HAnimJoint1248.USE = "hanim_r_tarsal_middle_phalanx_3";
HAnimHumanoid25.joints[47] = HAnimJoint1248;

HAnimJoint HAnimJoint1249 = createNode("HAnimJoint");
HAnimJoint1249.USE = "hanim_r_tarsal_distal_phalanx_3";
HAnimHumanoid25.joints[48] = HAnimJoint1249;

HAnimJoint HAnimJoint1250 = createNode("HAnimJoint");
HAnimJoint1250.USE = "hanim_r_calcaneus";
HAnimHumanoid25.joints[49] = HAnimJoint1250;

HAnimJoint HAnimJoint1251 = createNode("HAnimJoint");
HAnimJoint1251.USE = "hanim_r_cuboid";
HAnimHumanoid25.joints[50] = HAnimJoint1251;

HAnimJoint HAnimJoint1252 = createNode("HAnimJoint");
HAnimJoint1252.USE = "hanim_r_metatarsal_4";
HAnimHumanoid25.joints[51] = HAnimJoint1252;

HAnimJoint HAnimJoint1253 = createNode("HAnimJoint");
HAnimJoint1253.USE = "hanim_r_tarsal_proximal_phalanx_4";
HAnimHumanoid25.joints[52] = HAnimJoint1253;

HAnimJoint HAnimJoint1254 = createNode("HAnimJoint");
HAnimJoint1254.USE = "hanim_r_tarsal_middle_phalanx_4";
HAnimHumanoid25.joints[53] = HAnimJoint1254;

HAnimJoint HAnimJoint1255 = createNode("HAnimJoint");
HAnimJoint1255.USE = "hanim_r_tarsal_distal_phalanx_4";
HAnimHumanoid25.joints[54] = HAnimJoint1255;

HAnimJoint HAnimJoint1256 = createNode("HAnimJoint");
HAnimJoint1256.USE = "hanim_r_metatarsal_5";
HAnimHumanoid25.joints[55] = HAnimJoint1256;

HAnimJoint HAnimJoint1257 = createNode("HAnimJoint");
HAnimJoint1257.USE = "hanim_r_tarsal_proximal_phalanx_5";
HAnimHumanoid25.joints[56] = HAnimJoint1257;

HAnimJoint HAnimJoint1258 = createNode("HAnimJoint");
HAnimJoint1258.USE = "hanim_r_tarsal_middle_phalanx_5";
HAnimHumanoid25.joints[57] = HAnimJoint1258;

HAnimJoint HAnimJoint1259 = createNode("HAnimJoint");
HAnimJoint1259.USE = "hanim_r_tarsal_distal_phalanx_5";
HAnimHumanoid25.joints[58] = HAnimJoint1259;

HAnimJoint HAnimJoint1260 = createNode("HAnimJoint");
HAnimJoint1260.USE = "hanim_l5";
HAnimHumanoid25.joints[59] = HAnimJoint1260;

HAnimJoint HAnimJoint1261 = createNode("HAnimJoint");
HAnimJoint1261.USE = "hanim_l4";
HAnimHumanoid25.joints[60] = HAnimJoint1261;

HAnimJoint HAnimJoint1262 = createNode("HAnimJoint");
HAnimJoint1262.USE = "hanim_l3";
HAnimHumanoid25.joints[61] = HAnimJoint1262;

HAnimJoint HAnimJoint1263 = createNode("HAnimJoint");
HAnimJoint1263.USE = "hanim_l2";
HAnimHumanoid25.joints[62] = HAnimJoint1263;

HAnimJoint HAnimJoint1264 = createNode("HAnimJoint");
HAnimJoint1264.USE = "hanim_l1";
HAnimHumanoid25.joints[63] = HAnimJoint1264;

HAnimJoint HAnimJoint1265 = createNode("HAnimJoint");
HAnimJoint1265.USE = "hanim_t12";
HAnimHumanoid25.joints[64] = HAnimJoint1265;

HAnimJoint HAnimJoint1266 = createNode("HAnimJoint");
HAnimJoint1266.USE = "hanim_t11";
HAnimHumanoid25.joints[65] = HAnimJoint1266;

HAnimJoint HAnimJoint1267 = createNode("HAnimJoint");
HAnimJoint1267.USE = "hanim_t10";
HAnimHumanoid25.joints[66] = HAnimJoint1267;

HAnimJoint HAnimJoint1268 = createNode("HAnimJoint");
HAnimJoint1268.USE = "hanim_t9";
HAnimHumanoid25.joints[67] = HAnimJoint1268;

HAnimJoint HAnimJoint1269 = createNode("HAnimJoint");
HAnimJoint1269.USE = "hanim_t8";
HAnimHumanoid25.joints[68] = HAnimJoint1269;

HAnimJoint HAnimJoint1270 = createNode("HAnimJoint");
HAnimJoint1270.USE = "hanim_t7";
HAnimHumanoid25.joints[69] = HAnimJoint1270;

HAnimJoint HAnimJoint1271 = createNode("HAnimJoint");
HAnimJoint1271.USE = "hanim_t6";
HAnimHumanoid25.joints[70] = HAnimJoint1271;

HAnimJoint HAnimJoint1272 = createNode("HAnimJoint");
HAnimJoint1272.USE = "hanim_t5";
HAnimHumanoid25.joints[71] = HAnimJoint1272;

HAnimJoint HAnimJoint1273 = createNode("HAnimJoint");
HAnimJoint1273.USE = "hanim_t4";
HAnimHumanoid25.joints[72] = HAnimJoint1273;

HAnimJoint HAnimJoint1274 = createNode("HAnimJoint");
HAnimJoint1274.USE = "hanim_t3";
HAnimHumanoid25.joints[73] = HAnimJoint1274;

HAnimJoint HAnimJoint1275 = createNode("HAnimJoint");
HAnimJoint1275.USE = "hanim_t2";
HAnimHumanoid25.joints[74] = HAnimJoint1275;

HAnimJoint HAnimJoint1276 = createNode("HAnimJoint");
HAnimJoint1276.USE = "hanim_t1";
HAnimHumanoid25.joints[75] = HAnimJoint1276;

HAnimJoint HAnimJoint1277 = createNode("HAnimJoint");
HAnimJoint1277.USE = "hanim_c7";
HAnimHumanoid25.joints[76] = HAnimJoint1277;

HAnimJoint HAnimJoint1278 = createNode("HAnimJoint");
HAnimJoint1278.USE = "hanim_c6";
HAnimHumanoid25.joints[77] = HAnimJoint1278;

HAnimJoint HAnimJoint1279 = createNode("HAnimJoint");
HAnimJoint1279.USE = "hanim_c5";
HAnimHumanoid25.joints[78] = HAnimJoint1279;

HAnimJoint HAnimJoint1280 = createNode("HAnimJoint");
HAnimJoint1280.USE = "hanim_c4";
HAnimHumanoid25.joints[79] = HAnimJoint1280;

HAnimJoint HAnimJoint1281 = createNode("HAnimJoint");
HAnimJoint1281.USE = "hanim_c3";
HAnimHumanoid25.joints[80] = HAnimJoint1281;

HAnimJoint HAnimJoint1282 = createNode("HAnimJoint");
HAnimJoint1282.USE = "hanim_c2";
HAnimHumanoid25.joints[81] = HAnimJoint1282;

HAnimJoint HAnimJoint1283 = createNode("HAnimJoint");
HAnimJoint1283.USE = "hanim_c1";
HAnimHumanoid25.joints[82] = HAnimJoint1283;

HAnimJoint HAnimJoint1284 = createNode("HAnimJoint");
HAnimJoint1284.USE = "hanim_skull";
HAnimHumanoid25.joints[83] = HAnimJoint1284;

HAnimJoint HAnimJoint1285 = createNode("HAnimJoint");
HAnimJoint1285.USE = "hanim_l_eyelid";
HAnimHumanoid25.joints[84] = HAnimJoint1285;

HAnimJoint HAnimJoint1286 = createNode("HAnimJoint");
HAnimJoint1286.USE = "hanim_r_eyelid";
HAnimHumanoid25.joints[85] = HAnimJoint1286;

HAnimJoint HAnimJoint1287 = createNode("HAnimJoint");
HAnimJoint1287.USE = "hanim_l_eyeball";
HAnimHumanoid25.joints[86] = HAnimJoint1287;

HAnimJoint HAnimJoint1288 = createNode("HAnimJoint");
HAnimJoint1288.USE = "hanim_r_eyeball";
HAnimHumanoid25.joints[87] = HAnimJoint1288;

HAnimJoint HAnimJoint1289 = createNode("HAnimJoint");
HAnimJoint1289.USE = "hanim_l_eyebrow";
HAnimHumanoid25.joints[88] = HAnimJoint1289;

HAnimJoint HAnimJoint1290 = createNode("HAnimJoint");
HAnimJoint1290.USE = "hanim_r_eyebrow";
HAnimHumanoid25.joints[89] = HAnimJoint1290;

HAnimJoint HAnimJoint1291 = createNode("HAnimJoint");
HAnimJoint1291.USE = "hanim_jaw";
HAnimHumanoid25.joints[90] = HAnimJoint1291;

HAnimJoint HAnimJoint1292 = createNode("HAnimJoint");
HAnimJoint1292.USE = "hanim_l_clavicle";
HAnimHumanoid25.joints[91] = HAnimJoint1292;

HAnimJoint HAnimJoint1293 = createNode("HAnimJoint");
HAnimJoint1293.USE = "hanim_l_scapula";
HAnimHumanoid25.joints[92] = HAnimJoint1293;

HAnimJoint HAnimJoint1294 = createNode("HAnimJoint");
HAnimJoint1294.USE = "hanim_l_upperarm";
HAnimHumanoid25.joints[93] = HAnimJoint1294;

HAnimJoint HAnimJoint1295 = createNode("HAnimJoint");
HAnimJoint1295.USE = "hanim_l_forearm";
HAnimHumanoid25.joints[94] = HAnimJoint1295;

HAnimJoint HAnimJoint1296 = createNode("HAnimJoint");
HAnimJoint1296.USE = "hanim_l_carpal";
HAnimHumanoid25.joints[95] = HAnimJoint1296;

HAnimJoint HAnimJoint1297 = createNode("HAnimJoint");
HAnimJoint1297.USE = "hanim_l_trapezium";
HAnimHumanoid25.joints[96] = HAnimJoint1297;

HAnimJoint HAnimJoint1298 = createNode("HAnimJoint");
HAnimJoint1298.USE = "hanim_l_metacarpal_1";
HAnimHumanoid25.joints[97] = HAnimJoint1298;

HAnimJoint HAnimJoint1299 = createNode("HAnimJoint");
HAnimJoint1299.USE = "hanim_l_carpal_proximal_phalanx_1";
HAnimHumanoid25.joints[98] = HAnimJoint1299;

HAnimJoint HAnimJoint1300 = createNode("HAnimJoint");
HAnimJoint1300.USE = "hanim_l_carpal_distal_phalanx_1";
HAnimHumanoid25.joints[99] = HAnimJoint1300;

HAnimJoint HAnimJoint1301 = createNode("HAnimJoint");
HAnimJoint1301.USE = "hanim_l_trapezoid";
HAnimHumanoid25.joints[100] = HAnimJoint1301;

HAnimJoint HAnimJoint1302 = createNode("HAnimJoint");
HAnimJoint1302.USE = "hanim_l_metacarpal_2";
HAnimHumanoid25.joints[101] = HAnimJoint1302;

HAnimJoint HAnimJoint1303 = createNode("HAnimJoint");
HAnimJoint1303.USE = "hanim_l_carpal_proximal_phalanx_2";
HAnimHumanoid25.joints[102] = HAnimJoint1303;

HAnimJoint HAnimJoint1304 = createNode("HAnimJoint");
HAnimJoint1304.USE = "hanim_l_carpal_middle_phalanx_2";
HAnimHumanoid25.joints[103] = HAnimJoint1304;

HAnimJoint HAnimJoint1305 = createNode("HAnimJoint");
HAnimJoint1305.USE = "hanim_l_carpal_distal_phalanx_2";
HAnimHumanoid25.joints[104] = HAnimJoint1305;

HAnimJoint HAnimJoint1306 = createNode("HAnimJoint");
HAnimJoint1306.USE = "hanim_l_capitate";
HAnimHumanoid25.joints[105] = HAnimJoint1306;

HAnimJoint HAnimJoint1307 = createNode("HAnimJoint");
HAnimJoint1307.USE = "hanim_l_metacarpal_3";
HAnimHumanoid25.joints[106] = HAnimJoint1307;

HAnimJoint HAnimJoint1308 = createNode("HAnimJoint");
HAnimJoint1308.USE = "hanim_l_carpal_proximal_phalanx_3";
HAnimHumanoid25.joints[107] = HAnimJoint1308;

HAnimJoint HAnimJoint1309 = createNode("HAnimJoint");
HAnimJoint1309.USE = "hanim_l_carpal_middle_phalanx_3";
HAnimHumanoid25.joints[108] = HAnimJoint1309;

HAnimJoint HAnimJoint1310 = createNode("HAnimJoint");
HAnimJoint1310.USE = "hanim_l_carpal_distal_phalanx_3";
HAnimHumanoid25.joints[109] = HAnimJoint1310;

HAnimJoint HAnimJoint1311 = createNode("HAnimJoint");
HAnimJoint1311.USE = "hanim_l_hamate";
HAnimHumanoid25.joints[110] = HAnimJoint1311;

HAnimJoint HAnimJoint1312 = createNode("HAnimJoint");
HAnimJoint1312.USE = "hanim_l_metacarpal_4";
HAnimHumanoid25.joints[111] = HAnimJoint1312;

HAnimJoint HAnimJoint1313 = createNode("HAnimJoint");
HAnimJoint1313.USE = "hanim_l_carpal_proximal_phalanx_4";
HAnimHumanoid25.joints[112] = HAnimJoint1313;

HAnimJoint HAnimJoint1314 = createNode("HAnimJoint");
HAnimJoint1314.USE = "hanim_l_carpal_middle_phalanx_4";
HAnimHumanoid25.joints[113] = HAnimJoint1314;

HAnimJoint HAnimJoint1315 = createNode("HAnimJoint");
HAnimJoint1315.USE = "hanim_l_carpal_distal_phalanx_4";
HAnimHumanoid25.joints[114] = HAnimJoint1315;

HAnimJoint HAnimJoint1316 = createNode("HAnimJoint");
HAnimJoint1316.USE = "hanim_l_metacarpal_5";
HAnimHumanoid25.joints[115] = HAnimJoint1316;

HAnimJoint HAnimJoint1317 = createNode("HAnimJoint");
HAnimJoint1317.USE = "hanim_l_carpal_proximal_phalanx_5";
HAnimHumanoid25.joints[116] = HAnimJoint1317;

HAnimJoint HAnimJoint1318 = createNode("HAnimJoint");
HAnimJoint1318.USE = "hanim_l_carpal_middle_phalanx_5";
HAnimHumanoid25.joints[117] = HAnimJoint1318;

HAnimJoint HAnimJoint1319 = createNode("HAnimJoint");
HAnimJoint1319.USE = "hanim_l_carpal_distal_phalanx_5";
HAnimHumanoid25.joints[118] = HAnimJoint1319;

HAnimJoint HAnimJoint1320 = createNode("HAnimJoint");
HAnimJoint1320.USE = "hanim_r_clavicle";
HAnimHumanoid25.joints[119] = HAnimJoint1320;

HAnimJoint HAnimJoint1321 = createNode("HAnimJoint");
HAnimJoint1321.USE = "hanim_r_scapula";
HAnimHumanoid25.joints[120] = HAnimJoint1321;

HAnimJoint HAnimJoint1322 = createNode("HAnimJoint");
HAnimJoint1322.USE = "hanim_r_upperarm";
HAnimHumanoid25.joints[121] = HAnimJoint1322;

HAnimJoint HAnimJoint1323 = createNode("HAnimJoint");
HAnimJoint1323.USE = "hanim_r_forearm";
HAnimHumanoid25.joints[122] = HAnimJoint1323;

HAnimJoint HAnimJoint1324 = createNode("HAnimJoint");
HAnimJoint1324.USE = "hanim_r_carpal";
HAnimHumanoid25.joints[123] = HAnimJoint1324;

HAnimJoint HAnimJoint1325 = createNode("HAnimJoint");
HAnimJoint1325.USE = "hanim_r_trapezium";
HAnimHumanoid25.joints[124] = HAnimJoint1325;

HAnimJoint HAnimJoint1326 = createNode("HAnimJoint");
HAnimJoint1326.USE = "hanim_r_metacarpal_1";
HAnimHumanoid25.joints[125] = HAnimJoint1326;

HAnimJoint HAnimJoint1327 = createNode("HAnimJoint");
HAnimJoint1327.USE = "hanim_r_carpal_proximal_phalanx_1";
HAnimHumanoid25.joints[126] = HAnimJoint1327;

HAnimJoint HAnimJoint1328 = createNode("HAnimJoint");
HAnimJoint1328.USE = "hanim_r_carpal_distal_phalanx_1";
HAnimHumanoid25.joints[127] = HAnimJoint1328;

HAnimJoint HAnimJoint1329 = createNode("HAnimJoint");
HAnimJoint1329.USE = "hanim_r_trapezoid";
HAnimHumanoid25.joints[128] = HAnimJoint1329;

HAnimJoint HAnimJoint1330 = createNode("HAnimJoint");
HAnimJoint1330.USE = "hanim_r_metacarpal_2";
HAnimHumanoid25.joints[129] = HAnimJoint1330;

HAnimJoint HAnimJoint1331 = createNode("HAnimJoint");
HAnimJoint1331.USE = "hanim_r_carpal_proximal_phalanx_2";
HAnimHumanoid25.joints[130] = HAnimJoint1331;

HAnimJoint HAnimJoint1332 = createNode("HAnimJoint");
HAnimJoint1332.USE = "hanim_r_carpal_middle_phalanx_2";
HAnimHumanoid25.joints[131] = HAnimJoint1332;

HAnimJoint HAnimJoint1333 = createNode("HAnimJoint");
HAnimJoint1333.USE = "hanim_r_carpal_distal_phalanx_2";
HAnimHumanoid25.joints[132] = HAnimJoint1333;

HAnimJoint HAnimJoint1334 = createNode("HAnimJoint");
HAnimJoint1334.USE = "hanim_r_capitate";
HAnimHumanoid25.joints[133] = HAnimJoint1334;

HAnimJoint HAnimJoint1335 = createNode("HAnimJoint");
HAnimJoint1335.USE = "hanim_r_metacarpal_3";
HAnimHumanoid25.joints[134] = HAnimJoint1335;

HAnimJoint HAnimJoint1336 = createNode("HAnimJoint");
HAnimJoint1336.USE = "hanim_r_carpal_proximal_phalanx_3";
HAnimHumanoid25.joints[135] = HAnimJoint1336;

HAnimJoint HAnimJoint1337 = createNode("HAnimJoint");
HAnimJoint1337.USE = "hanim_r_carpal_middle_phalanx_3";
HAnimHumanoid25.joints[136] = HAnimJoint1337;

HAnimJoint HAnimJoint1338 = createNode("HAnimJoint");
HAnimJoint1338.USE = "hanim_r_carpal_distal_phalanx_3";
HAnimHumanoid25.joints[137] = HAnimJoint1338;

HAnimJoint HAnimJoint1339 = createNode("HAnimJoint");
HAnimJoint1339.USE = "hanim_r_hamate";
HAnimHumanoid25.joints[138] = HAnimJoint1339;

HAnimJoint HAnimJoint1340 = createNode("HAnimJoint");
HAnimJoint1340.USE = "hanim_r_metacarpal_4";
HAnimHumanoid25.joints[139] = HAnimJoint1340;

HAnimJoint HAnimJoint1341 = createNode("HAnimJoint");
HAnimJoint1341.USE = "hanim_r_carpal_proximal_phalanx_4";
HAnimHumanoid25.joints[140] = HAnimJoint1341;

HAnimJoint HAnimJoint1342 = createNode("HAnimJoint");
HAnimJoint1342.USE = "hanim_r_carpal_middle_phalanx_4";
HAnimHumanoid25.joints[141] = HAnimJoint1342;

HAnimJoint HAnimJoint1343 = createNode("HAnimJoint");
HAnimJoint1343.USE = "hanim_r_carpal_distal_phalanx_4";
HAnimHumanoid25.joints[142] = HAnimJoint1343;

HAnimJoint HAnimJoint1344 = createNode("HAnimJoint");
HAnimJoint1344.USE = "hanim_r_metacarpal_5";
HAnimHumanoid25.joints[143] = HAnimJoint1344;

HAnimJoint HAnimJoint1345 = createNode("HAnimJoint");
HAnimJoint1345.USE = "hanim_r_carpal_proximal_phalanx_5";
HAnimHumanoid25.joints[144] = HAnimJoint1345;

HAnimJoint HAnimJoint1346 = createNode("HAnimJoint");
HAnimJoint1346.USE = "hanim_r_carpal_middle_phalanx_5";
HAnimHumanoid25.joints[145] = HAnimJoint1346;

HAnimJoint HAnimJoint1347 = createNode("HAnimJoint");
HAnimJoint1347.USE = "hanim_r_carpal_distal_phalanx_5";
HAnimHumanoid25.joints[146] = HAnimJoint1347;

Transform24.children = new MFNode();

Transform24.children[0] = HAnimHumanoid25;

children[6] = Transform24;

TimeSensor TimeSensor1348 = createNode("TimeSensor");
TimeSensor1348.DEF = "Armature_Clock";
TimeSensor1348.cycleInterval = 10.416666666666666;
TimeSensor1348.loop = True;
children[7] = TimeSensor1348;

ProximitySensor ProximitySensor1349 = createNode("ProximitySensor");
ProximitySensor1349.DEF = "Armature_Close";
ProximitySensor1349.size = new SFVec3f(new float[1000000,1000000,1000000]);
children[8] = ProximitySensor1349;

ROUTE ROUTE1350 = createNode("ROUTE");
ROUTE1350.fromField = "enterTime";
ROUTE1350.fromNode = "Armature_Close";
ROUTE1350.toField = "startTime";
ROUTE1350.toNode = "Armature_Clock";
children[9] = ROUTE1350;

OrientationInterpolator OrientationInterpolator1351 = createNode("OrientationInterpolator");
OrientationInterpolator1351.DEF = "Armature_OI_sacrum";
OrientationInterpolator1351.key = new MFFloat(new float[0,1]);
OrientationInterpolator1351.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[10] = OrientationInterpolator1351;

OrientationInterpolator OrientationInterpolator1352 = createNode("OrientationInterpolator");
OrientationInterpolator1352.DEF = "Armature_OI_pelvis";
OrientationInterpolator1352.key = new MFFloat(new float[0,1]);
OrientationInterpolator1352.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[11] = OrientationInterpolator1352;

OrientationInterpolator OrientationInterpolator1353 = createNode("OrientationInterpolator");
OrientationInterpolator1353.DEF = "Armature_OI_l_thigh";
OrientationInterpolator1353.key = new MFFloat(new float[0,1]);
OrientationInterpolator1353.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[12] = OrientationInterpolator1353;

OrientationInterpolator OrientationInterpolator1354 = createNode("OrientationInterpolator");
OrientationInterpolator1354.DEF = "Armature_OI_l_calf";
OrientationInterpolator1354.key = new MFFloat(new float[0,1]);
OrientationInterpolator1354.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[13] = OrientationInterpolator1354;

OrientationInterpolator OrientationInterpolator1355 = createNode("OrientationInterpolator");
OrientationInterpolator1355.DEF = "Armature_OI_l_talus";
OrientationInterpolator1355.key = new MFFloat(new float[0,1]);
OrientationInterpolator1355.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[14] = OrientationInterpolator1355;

OrientationInterpolator OrientationInterpolator1356 = createNode("OrientationInterpolator");
OrientationInterpolator1356.DEF = "Armature_OI_l_navicular";
OrientationInterpolator1356.key = new MFFloat(new float[0,1]);
OrientationInterpolator1356.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[15] = OrientationInterpolator1356;

OrientationInterpolator OrientationInterpolator1357 = createNode("OrientationInterpolator");
OrientationInterpolator1357.DEF = "Armature_OI_l_cuneiform_1";
OrientationInterpolator1357.key = new MFFloat(new float[0,1]);
OrientationInterpolator1357.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[16] = OrientationInterpolator1357;

OrientationInterpolator OrientationInterpolator1358 = createNode("OrientationInterpolator");
OrientationInterpolator1358.DEF = "Armature_OI_l_metatarsal_1";
OrientationInterpolator1358.key = new MFFloat(new float[0,1]);
OrientationInterpolator1358.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[17] = OrientationInterpolator1358;

OrientationInterpolator OrientationInterpolator1359 = createNode("OrientationInterpolator");
OrientationInterpolator1359.DEF = "Armature_OI_l_tarsal_proximal_phalanx_1";
OrientationInterpolator1359.key = new MFFloat(new float[0,1]);
OrientationInterpolator1359.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[18] = OrientationInterpolator1359;

OrientationInterpolator OrientationInterpolator1360 = createNode("OrientationInterpolator");
OrientationInterpolator1360.DEF = "Armature_OI_l_tarsal_distal_phalanx_1";
OrientationInterpolator1360.key = new MFFloat(new float[0,1]);
OrientationInterpolator1360.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[19] = OrientationInterpolator1360;

OrientationInterpolator OrientationInterpolator1361 = createNode("OrientationInterpolator");
OrientationInterpolator1361.DEF = "Armature_OI_l_cuneiform_2";
OrientationInterpolator1361.key = new MFFloat(new float[0,1]);
OrientationInterpolator1361.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[20] = OrientationInterpolator1361;

OrientationInterpolator OrientationInterpolator1362 = createNode("OrientationInterpolator");
OrientationInterpolator1362.DEF = "Armature_OI_l_metatarsal_2";
OrientationInterpolator1362.key = new MFFloat(new float[0,1]);
OrientationInterpolator1362.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[21] = OrientationInterpolator1362;

OrientationInterpolator OrientationInterpolator1363 = createNode("OrientationInterpolator");
OrientationInterpolator1363.DEF = "Armature_OI_l_tarsal_proximal_phalanx_2";
OrientationInterpolator1363.key = new MFFloat(new float[0,1]);
OrientationInterpolator1363.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[22] = OrientationInterpolator1363;

OrientationInterpolator OrientationInterpolator1364 = createNode("OrientationInterpolator");
OrientationInterpolator1364.DEF = "Armature_OI_l_tarsal_middle_phalanx_2";
OrientationInterpolator1364.key = new MFFloat(new float[0,1]);
OrientationInterpolator1364.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[23] = OrientationInterpolator1364;

OrientationInterpolator OrientationInterpolator1365 = createNode("OrientationInterpolator");
OrientationInterpolator1365.DEF = "Armature_OI_l_tarsal_distal_phalanx_2";
OrientationInterpolator1365.key = new MFFloat(new float[0,1]);
OrientationInterpolator1365.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[24] = OrientationInterpolator1365;

OrientationInterpolator OrientationInterpolator1366 = createNode("OrientationInterpolator");
OrientationInterpolator1366.DEF = "Armature_OI_l_cuneiform_3";
OrientationInterpolator1366.key = new MFFloat(new float[0,1]);
OrientationInterpolator1366.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[25] = OrientationInterpolator1366;

OrientationInterpolator OrientationInterpolator1367 = createNode("OrientationInterpolator");
OrientationInterpolator1367.DEF = "Armature_OI_l_metatarsal_3";
OrientationInterpolator1367.key = new MFFloat(new float[0,1]);
OrientationInterpolator1367.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[26] = OrientationInterpolator1367;

OrientationInterpolator OrientationInterpolator1368 = createNode("OrientationInterpolator");
OrientationInterpolator1368.DEF = "Armature_OI_l_tarsal_proximal_phalanx_3";
OrientationInterpolator1368.key = new MFFloat(new float[0,1]);
OrientationInterpolator1368.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[27] = OrientationInterpolator1368;

OrientationInterpolator OrientationInterpolator1369 = createNode("OrientationInterpolator");
OrientationInterpolator1369.DEF = "Armature_OI_l_tarsal_middle_phalanx_3";
OrientationInterpolator1369.key = new MFFloat(new float[0,1]);
OrientationInterpolator1369.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[28] = OrientationInterpolator1369;

OrientationInterpolator OrientationInterpolator1370 = createNode("OrientationInterpolator");
OrientationInterpolator1370.DEF = "Armature_OI_l_tarsal_distal_phalanx_3";
OrientationInterpolator1370.key = new MFFloat(new float[0,1]);
OrientationInterpolator1370.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[29] = OrientationInterpolator1370;

OrientationInterpolator OrientationInterpolator1371 = createNode("OrientationInterpolator");
OrientationInterpolator1371.DEF = "Armature_OI_l_calcaneus";
OrientationInterpolator1371.key = new MFFloat(new float[0,1]);
OrientationInterpolator1371.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[30] = OrientationInterpolator1371;

OrientationInterpolator OrientationInterpolator1372 = createNode("OrientationInterpolator");
OrientationInterpolator1372.DEF = "Armature_OI_l_cuboid";
OrientationInterpolator1372.key = new MFFloat(new float[0,1]);
OrientationInterpolator1372.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[31] = OrientationInterpolator1372;

OrientationInterpolator OrientationInterpolator1373 = createNode("OrientationInterpolator");
OrientationInterpolator1373.DEF = "Armature_OI_l_metatarsal_4";
OrientationInterpolator1373.key = new MFFloat(new float[0,1]);
OrientationInterpolator1373.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[32] = OrientationInterpolator1373;

OrientationInterpolator OrientationInterpolator1374 = createNode("OrientationInterpolator");
OrientationInterpolator1374.DEF = "Armature_OI_l_tarsal_proximal_phalanx_4";
OrientationInterpolator1374.key = new MFFloat(new float[0,1]);
OrientationInterpolator1374.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[33] = OrientationInterpolator1374;

OrientationInterpolator OrientationInterpolator1375 = createNode("OrientationInterpolator");
OrientationInterpolator1375.DEF = "Armature_OI_l_tarsal_middle_phalanx_4";
OrientationInterpolator1375.key = new MFFloat(new float[0,1]);
OrientationInterpolator1375.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[34] = OrientationInterpolator1375;

OrientationInterpolator OrientationInterpolator1376 = createNode("OrientationInterpolator");
OrientationInterpolator1376.DEF = "Armature_OI_l_tarsal_distal_phalanx_4";
OrientationInterpolator1376.key = new MFFloat(new float[0,1]);
OrientationInterpolator1376.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[35] = OrientationInterpolator1376;

OrientationInterpolator OrientationInterpolator1377 = createNode("OrientationInterpolator");
OrientationInterpolator1377.DEF = "Armature_OI_l_metatarsal_5";
OrientationInterpolator1377.key = new MFFloat(new float[0,1]);
OrientationInterpolator1377.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[36] = OrientationInterpolator1377;

OrientationInterpolator OrientationInterpolator1378 = createNode("OrientationInterpolator");
OrientationInterpolator1378.DEF = "Armature_OI_l_tarsal_proximal_phalanx_5";
OrientationInterpolator1378.key = new MFFloat(new float[0,1]);
OrientationInterpolator1378.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[37] = OrientationInterpolator1378;

OrientationInterpolator OrientationInterpolator1379 = createNode("OrientationInterpolator");
OrientationInterpolator1379.DEF = "Armature_OI_l_tarsal_middle_phalanx_5";
OrientationInterpolator1379.key = new MFFloat(new float[0,1]);
OrientationInterpolator1379.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[38] = OrientationInterpolator1379;

OrientationInterpolator OrientationInterpolator1380 = createNode("OrientationInterpolator");
OrientationInterpolator1380.DEF = "Armature_OI_l_tarsal_distal_phalanx_5";
OrientationInterpolator1380.key = new MFFloat(new float[0,1]);
OrientationInterpolator1380.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[39] = OrientationInterpolator1380;

OrientationInterpolator OrientationInterpolator1381 = createNode("OrientationInterpolator");
OrientationInterpolator1381.DEF = "Armature_OI_r_thigh";
OrientationInterpolator1381.key = new MFFloat(new float[0,1]);
OrientationInterpolator1381.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[40] = OrientationInterpolator1381;

OrientationInterpolator OrientationInterpolator1382 = createNode("OrientationInterpolator");
OrientationInterpolator1382.DEF = "Armature_OI_r_calf";
OrientationInterpolator1382.key = new MFFloat(new float[0,1]);
OrientationInterpolator1382.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[41] = OrientationInterpolator1382;

OrientationInterpolator OrientationInterpolator1383 = createNode("OrientationInterpolator");
OrientationInterpolator1383.DEF = "Armature_OI_r_talus";
OrientationInterpolator1383.key = new MFFloat(new float[0,1]);
OrientationInterpolator1383.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[42] = OrientationInterpolator1383;

OrientationInterpolator OrientationInterpolator1384 = createNode("OrientationInterpolator");
OrientationInterpolator1384.DEF = "Armature_OI_r_navicular";
OrientationInterpolator1384.key = new MFFloat(new float[0,1]);
OrientationInterpolator1384.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[43] = OrientationInterpolator1384;

OrientationInterpolator OrientationInterpolator1385 = createNode("OrientationInterpolator");
OrientationInterpolator1385.DEF = "Armature_OI_r_cuneiform_1";
OrientationInterpolator1385.key = new MFFloat(new float[0,1]);
OrientationInterpolator1385.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[44] = OrientationInterpolator1385;

OrientationInterpolator OrientationInterpolator1386 = createNode("OrientationInterpolator");
OrientationInterpolator1386.DEF = "Armature_OI_r_metatarsal_1";
OrientationInterpolator1386.key = new MFFloat(new float[0,1]);
OrientationInterpolator1386.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[45] = OrientationInterpolator1386;

OrientationInterpolator OrientationInterpolator1387 = createNode("OrientationInterpolator");
OrientationInterpolator1387.DEF = "Armature_OI_r_tarsal_proximal_phalanx_1";
OrientationInterpolator1387.key = new MFFloat(new float[0,1]);
OrientationInterpolator1387.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[46] = OrientationInterpolator1387;

OrientationInterpolator OrientationInterpolator1388 = createNode("OrientationInterpolator");
OrientationInterpolator1388.DEF = "Armature_OI_r_tarsal_distal_phalanx_1";
OrientationInterpolator1388.key = new MFFloat(new float[0,1]);
OrientationInterpolator1388.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[47] = OrientationInterpolator1388;

OrientationInterpolator OrientationInterpolator1389 = createNode("OrientationInterpolator");
OrientationInterpolator1389.DEF = "Armature_OI_r_cuneiform_2";
OrientationInterpolator1389.key = new MFFloat(new float[0,1]);
OrientationInterpolator1389.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[48] = OrientationInterpolator1389;

OrientationInterpolator OrientationInterpolator1390 = createNode("OrientationInterpolator");
OrientationInterpolator1390.DEF = "Armature_OI_r_metatarsal_2";
OrientationInterpolator1390.key = new MFFloat(new float[0,1]);
OrientationInterpolator1390.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[49] = OrientationInterpolator1390;

OrientationInterpolator OrientationInterpolator1391 = createNode("OrientationInterpolator");
OrientationInterpolator1391.DEF = "Armature_OI_r_tarsal_proximal_phalanx_2";
OrientationInterpolator1391.key = new MFFloat(new float[0,1]);
OrientationInterpolator1391.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[50] = OrientationInterpolator1391;

OrientationInterpolator OrientationInterpolator1392 = createNode("OrientationInterpolator");
OrientationInterpolator1392.DEF = "Armature_OI_r_tarsal_middle_phalanx_2";
OrientationInterpolator1392.key = new MFFloat(new float[0,1]);
OrientationInterpolator1392.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[51] = OrientationInterpolator1392;

OrientationInterpolator OrientationInterpolator1393 = createNode("OrientationInterpolator");
OrientationInterpolator1393.DEF = "Armature_OI_r_tarsal_distal_phalanx_2";
OrientationInterpolator1393.key = new MFFloat(new float[0,1]);
OrientationInterpolator1393.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[52] = OrientationInterpolator1393;

OrientationInterpolator OrientationInterpolator1394 = createNode("OrientationInterpolator");
OrientationInterpolator1394.DEF = "Armature_OI_r_cuneiform_3";
OrientationInterpolator1394.key = new MFFloat(new float[0,1]);
OrientationInterpolator1394.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[53] = OrientationInterpolator1394;

OrientationInterpolator OrientationInterpolator1395 = createNode("OrientationInterpolator");
OrientationInterpolator1395.DEF = "Armature_OI_r_metatarsal_3";
OrientationInterpolator1395.key = new MFFloat(new float[0,1]);
OrientationInterpolator1395.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[54] = OrientationInterpolator1395;

OrientationInterpolator OrientationInterpolator1396 = createNode("OrientationInterpolator");
OrientationInterpolator1396.DEF = "Armature_OI_r_tarsal_proximal_phalanx_3";
OrientationInterpolator1396.key = new MFFloat(new float[0,1]);
OrientationInterpolator1396.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[55] = OrientationInterpolator1396;

OrientationInterpolator OrientationInterpolator1397 = createNode("OrientationInterpolator");
OrientationInterpolator1397.DEF = "Armature_OI_r_tarsal_middle_phalanx_3";
OrientationInterpolator1397.key = new MFFloat(new float[0,1]);
OrientationInterpolator1397.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[56] = OrientationInterpolator1397;

OrientationInterpolator OrientationInterpolator1398 = createNode("OrientationInterpolator");
OrientationInterpolator1398.DEF = "Armature_OI_r_tarsal_distal_phalanx_3";
OrientationInterpolator1398.key = new MFFloat(new float[0,1]);
OrientationInterpolator1398.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[57] = OrientationInterpolator1398;

OrientationInterpolator OrientationInterpolator1399 = createNode("OrientationInterpolator");
OrientationInterpolator1399.DEF = "Armature_OI_r_calcaneus";
OrientationInterpolator1399.key = new MFFloat(new float[0,1]);
OrientationInterpolator1399.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[58] = OrientationInterpolator1399;

OrientationInterpolator OrientationInterpolator1400 = createNode("OrientationInterpolator");
OrientationInterpolator1400.DEF = "Armature_OI_r_cuboid";
OrientationInterpolator1400.key = new MFFloat(new float[0,1]);
OrientationInterpolator1400.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[59] = OrientationInterpolator1400;

OrientationInterpolator OrientationInterpolator1401 = createNode("OrientationInterpolator");
OrientationInterpolator1401.DEF = "Armature_OI_r_metatarsal_4";
OrientationInterpolator1401.key = new MFFloat(new float[0,1]);
OrientationInterpolator1401.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[60] = OrientationInterpolator1401;

OrientationInterpolator OrientationInterpolator1402 = createNode("OrientationInterpolator");
OrientationInterpolator1402.DEF = "Armature_OI_r_tarsal_proximal_phalanx_4";
OrientationInterpolator1402.key = new MFFloat(new float[0,1]);
OrientationInterpolator1402.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[61] = OrientationInterpolator1402;

OrientationInterpolator OrientationInterpolator1403 = createNode("OrientationInterpolator");
OrientationInterpolator1403.DEF = "Armature_OI_r_tarsal_middle_phalanx_4";
OrientationInterpolator1403.key = new MFFloat(new float[0,1]);
OrientationInterpolator1403.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[62] = OrientationInterpolator1403;

OrientationInterpolator OrientationInterpolator1404 = createNode("OrientationInterpolator");
OrientationInterpolator1404.DEF = "Armature_OI_r_tarsal_distal_phalanx_4";
OrientationInterpolator1404.key = new MFFloat(new float[0,1]);
OrientationInterpolator1404.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[63] = OrientationInterpolator1404;

OrientationInterpolator OrientationInterpolator1405 = createNode("OrientationInterpolator");
OrientationInterpolator1405.DEF = "Armature_OI_r_metatarsal_5";
OrientationInterpolator1405.key = new MFFloat(new float[0,1]);
OrientationInterpolator1405.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[64] = OrientationInterpolator1405;

OrientationInterpolator OrientationInterpolator1406 = createNode("OrientationInterpolator");
OrientationInterpolator1406.DEF = "Armature_OI_r_tarsal_proximal_phalanx_5";
OrientationInterpolator1406.key = new MFFloat(new float[0,1]);
OrientationInterpolator1406.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[65] = OrientationInterpolator1406;

OrientationInterpolator OrientationInterpolator1407 = createNode("OrientationInterpolator");
OrientationInterpolator1407.DEF = "Armature_OI_r_tarsal_middle_phalanx_5";
OrientationInterpolator1407.key = new MFFloat(new float[0,1]);
OrientationInterpolator1407.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[66] = OrientationInterpolator1407;

OrientationInterpolator OrientationInterpolator1408 = createNode("OrientationInterpolator");
OrientationInterpolator1408.DEF = "Armature_OI_r_tarsal_distal_phalanx_5";
OrientationInterpolator1408.key = new MFFloat(new float[0,1]);
OrientationInterpolator1408.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[67] = OrientationInterpolator1408;

OrientationInterpolator OrientationInterpolator1409 = createNode("OrientationInterpolator");
OrientationInterpolator1409.DEF = "Armature_OI_l5";
OrientationInterpolator1409.key = new MFFloat(new float[0,1]);
OrientationInterpolator1409.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[68] = OrientationInterpolator1409;

OrientationInterpolator OrientationInterpolator1410 = createNode("OrientationInterpolator");
OrientationInterpolator1410.DEF = "Armature_OI_l4";
OrientationInterpolator1410.key = new MFFloat(new float[0,1]);
OrientationInterpolator1410.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[69] = OrientationInterpolator1410;

OrientationInterpolator OrientationInterpolator1411 = createNode("OrientationInterpolator");
OrientationInterpolator1411.DEF = "Armature_OI_l3";
OrientationInterpolator1411.key = new MFFloat(new float[0,1]);
OrientationInterpolator1411.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[70] = OrientationInterpolator1411;

OrientationInterpolator OrientationInterpolator1412 = createNode("OrientationInterpolator");
OrientationInterpolator1412.DEF = "Armature_OI_l2";
OrientationInterpolator1412.key = new MFFloat(new float[0,1]);
OrientationInterpolator1412.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[71] = OrientationInterpolator1412;

OrientationInterpolator OrientationInterpolator1413 = createNode("OrientationInterpolator");
OrientationInterpolator1413.DEF = "Armature_OI_l1";
OrientationInterpolator1413.key = new MFFloat(new float[0,1]);
OrientationInterpolator1413.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[72] = OrientationInterpolator1413;

OrientationInterpolator OrientationInterpolator1414 = createNode("OrientationInterpolator");
OrientationInterpolator1414.DEF = "Armature_OI_t12";
OrientationInterpolator1414.key = new MFFloat(new float[0,1]);
OrientationInterpolator1414.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[73] = OrientationInterpolator1414;

OrientationInterpolator OrientationInterpolator1415 = createNode("OrientationInterpolator");
OrientationInterpolator1415.DEF = "Armature_OI_t11";
OrientationInterpolator1415.key = new MFFloat(new float[0,1]);
OrientationInterpolator1415.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[74] = OrientationInterpolator1415;

OrientationInterpolator OrientationInterpolator1416 = createNode("OrientationInterpolator");
OrientationInterpolator1416.DEF = "Armature_OI_t10";
OrientationInterpolator1416.key = new MFFloat(new float[0,1]);
OrientationInterpolator1416.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[75] = OrientationInterpolator1416;

OrientationInterpolator OrientationInterpolator1417 = createNode("OrientationInterpolator");
OrientationInterpolator1417.DEF = "Armature_OI_t9";
OrientationInterpolator1417.key = new MFFloat(new float[0,1]);
OrientationInterpolator1417.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[76] = OrientationInterpolator1417;

OrientationInterpolator OrientationInterpolator1418 = createNode("OrientationInterpolator");
OrientationInterpolator1418.DEF = "Armature_OI_t8";
OrientationInterpolator1418.key = new MFFloat(new float[0,1]);
OrientationInterpolator1418.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[77] = OrientationInterpolator1418;

OrientationInterpolator OrientationInterpolator1419 = createNode("OrientationInterpolator");
OrientationInterpolator1419.DEF = "Armature_OI_t7";
OrientationInterpolator1419.key = new MFFloat(new float[0,1]);
OrientationInterpolator1419.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[78] = OrientationInterpolator1419;

OrientationInterpolator OrientationInterpolator1420 = createNode("OrientationInterpolator");
OrientationInterpolator1420.DEF = "Armature_OI_t6";
OrientationInterpolator1420.key = new MFFloat(new float[0,1]);
OrientationInterpolator1420.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[79] = OrientationInterpolator1420;

OrientationInterpolator OrientationInterpolator1421 = createNode("OrientationInterpolator");
OrientationInterpolator1421.DEF = "Armature_OI_t5";
OrientationInterpolator1421.key = new MFFloat(new float[0,1]);
OrientationInterpolator1421.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[80] = OrientationInterpolator1421;

OrientationInterpolator OrientationInterpolator1422 = createNode("OrientationInterpolator");
OrientationInterpolator1422.DEF = "Armature_OI_t4";
OrientationInterpolator1422.key = new MFFloat(new float[0,1]);
OrientationInterpolator1422.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[81] = OrientationInterpolator1422;

OrientationInterpolator OrientationInterpolator1423 = createNode("OrientationInterpolator");
OrientationInterpolator1423.DEF = "Armature_OI_t3";
OrientationInterpolator1423.key = new MFFloat(new float[0,1]);
OrientationInterpolator1423.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[82] = OrientationInterpolator1423;

OrientationInterpolator OrientationInterpolator1424 = createNode("OrientationInterpolator");
OrientationInterpolator1424.DEF = "Armature_OI_t2";
OrientationInterpolator1424.key = new MFFloat(new float[0,1]);
OrientationInterpolator1424.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[83] = OrientationInterpolator1424;

OrientationInterpolator OrientationInterpolator1425 = createNode("OrientationInterpolator");
OrientationInterpolator1425.DEF = "Armature_OI_t1";
OrientationInterpolator1425.key = new MFFloat(new float[0,1]);
OrientationInterpolator1425.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[84] = OrientationInterpolator1425;

OrientationInterpolator OrientationInterpolator1426 = createNode("OrientationInterpolator");
OrientationInterpolator1426.DEF = "Armature_OI_c7";
OrientationInterpolator1426.key = new MFFloat(new float[0,1]);
OrientationInterpolator1426.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[85] = OrientationInterpolator1426;

OrientationInterpolator OrientationInterpolator1427 = createNode("OrientationInterpolator");
OrientationInterpolator1427.DEF = "Armature_OI_c6";
OrientationInterpolator1427.key = new MFFloat(new float[0,1]);
OrientationInterpolator1427.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[86] = OrientationInterpolator1427;

OrientationInterpolator OrientationInterpolator1428 = createNode("OrientationInterpolator");
OrientationInterpolator1428.DEF = "Armature_OI_c5";
OrientationInterpolator1428.key = new MFFloat(new float[0,1]);
OrientationInterpolator1428.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[87] = OrientationInterpolator1428;

OrientationInterpolator OrientationInterpolator1429 = createNode("OrientationInterpolator");
OrientationInterpolator1429.DEF = "Armature_OI_c4";
OrientationInterpolator1429.key = new MFFloat(new float[0,1]);
OrientationInterpolator1429.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[88] = OrientationInterpolator1429;

OrientationInterpolator OrientationInterpolator1430 = createNode("OrientationInterpolator");
OrientationInterpolator1430.DEF = "Armature_OI_c3";
OrientationInterpolator1430.key = new MFFloat(new float[0,1]);
OrientationInterpolator1430.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[89] = OrientationInterpolator1430;

OrientationInterpolator OrientationInterpolator1431 = createNode("OrientationInterpolator");
OrientationInterpolator1431.DEF = "Armature_OI_c2";
OrientationInterpolator1431.key = new MFFloat(new float[0,1]);
OrientationInterpolator1431.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[90] = OrientationInterpolator1431;

OrientationInterpolator OrientationInterpolator1432 = createNode("OrientationInterpolator");
OrientationInterpolator1432.DEF = "Armature_OI_c1";
OrientationInterpolator1432.key = new MFFloat(new float[0,1]);
OrientationInterpolator1432.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[91] = OrientationInterpolator1432;

OrientationInterpolator OrientationInterpolator1433 = createNode("OrientationInterpolator");
OrientationInterpolator1433.DEF = "Armature_OI_skull";
OrientationInterpolator1433.key = new MFFloat(new float[0,1]);
OrientationInterpolator1433.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[92] = OrientationInterpolator1433;

OrientationInterpolator OrientationInterpolator1434 = createNode("OrientationInterpolator");
OrientationInterpolator1434.DEF = "Armature_OI_l_eyelid";
OrientationInterpolator1434.key = new MFFloat(new float[0,1]);
OrientationInterpolator1434.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[93] = OrientationInterpolator1434;

OrientationInterpolator OrientationInterpolator1435 = createNode("OrientationInterpolator");
OrientationInterpolator1435.DEF = "Armature_OI_r_eyelid";
OrientationInterpolator1435.key = new MFFloat(new float[0,1]);
OrientationInterpolator1435.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[94] = OrientationInterpolator1435;

OrientationInterpolator OrientationInterpolator1436 = createNode("OrientationInterpolator");
OrientationInterpolator1436.DEF = "Armature_OI_l_eyeball";
OrientationInterpolator1436.key = new MFFloat(new float[0,1]);
OrientationInterpolator1436.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[95] = OrientationInterpolator1436;

OrientationInterpolator OrientationInterpolator1437 = createNode("OrientationInterpolator");
OrientationInterpolator1437.DEF = "Armature_OI_r_eyeball";
OrientationInterpolator1437.key = new MFFloat(new float[0,1]);
OrientationInterpolator1437.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[96] = OrientationInterpolator1437;

OrientationInterpolator OrientationInterpolator1438 = createNode("OrientationInterpolator");
OrientationInterpolator1438.DEF = "Armature_OI_l_eyebrow";
OrientationInterpolator1438.key = new MFFloat(new float[0,1]);
OrientationInterpolator1438.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[97] = OrientationInterpolator1438;

OrientationInterpolator OrientationInterpolator1439 = createNode("OrientationInterpolator");
OrientationInterpolator1439.DEF = "Armature_OI_r_eyebrow";
OrientationInterpolator1439.key = new MFFloat(new float[0,1]);
OrientationInterpolator1439.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[98] = OrientationInterpolator1439;

OrientationInterpolator OrientationInterpolator1440 = createNode("OrientationInterpolator");
OrientationInterpolator1440.DEF = "Armature_OI_jaw";
OrientationInterpolator1440.key = new MFFloat(new float[0,1]);
OrientationInterpolator1440.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[99] = OrientationInterpolator1440;

OrientationInterpolator OrientationInterpolator1441 = createNode("OrientationInterpolator");
OrientationInterpolator1441.DEF = "Armature_OI_l_clavicle";
OrientationInterpolator1441.key = new MFFloat(new float[0,1]);
OrientationInterpolator1441.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[100] = OrientationInterpolator1441;

OrientationInterpolator OrientationInterpolator1442 = createNode("OrientationInterpolator");
OrientationInterpolator1442.DEF = "Armature_OI_l_scapula";
OrientationInterpolator1442.key = new MFFloat(new float[0,1]);
OrientationInterpolator1442.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[101] = OrientationInterpolator1442;

OrientationInterpolator OrientationInterpolator1443 = createNode("OrientationInterpolator");
OrientationInterpolator1443.DEF = "Armature_OI_l_upperarm";
OrientationInterpolator1443.key = new MFFloat(new float[0,1]);
OrientationInterpolator1443.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[102] = OrientationInterpolator1443;

OrientationInterpolator OrientationInterpolator1444 = createNode("OrientationInterpolator");
OrientationInterpolator1444.DEF = "Armature_OI_l_forearm";
OrientationInterpolator1444.key = new MFFloat(new float[0,1]);
OrientationInterpolator1444.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[103] = OrientationInterpolator1444;

OrientationInterpolator OrientationInterpolator1445 = createNode("OrientationInterpolator");
OrientationInterpolator1445.DEF = "Armature_OI_l_carpal";
OrientationInterpolator1445.key = new MFFloat(new float[0,1]);
OrientationInterpolator1445.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[104] = OrientationInterpolator1445;

OrientationInterpolator OrientationInterpolator1446 = createNode("OrientationInterpolator");
OrientationInterpolator1446.DEF = "Armature_OI_l_trapezium";
OrientationInterpolator1446.key = new MFFloat(new float[0,1]);
OrientationInterpolator1446.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[105] = OrientationInterpolator1446;

OrientationInterpolator OrientationInterpolator1447 = createNode("OrientationInterpolator");
OrientationInterpolator1447.DEF = "Armature_OI_l_metacarpal_1";
OrientationInterpolator1447.key = new MFFloat(new float[0,1]);
OrientationInterpolator1447.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[106] = OrientationInterpolator1447;

OrientationInterpolator OrientationInterpolator1448 = createNode("OrientationInterpolator");
OrientationInterpolator1448.DEF = "Armature_OI_l_carpal_proximal_phalanx_1";
OrientationInterpolator1448.key = new MFFloat(new float[0,1]);
OrientationInterpolator1448.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[107] = OrientationInterpolator1448;

OrientationInterpolator OrientationInterpolator1449 = createNode("OrientationInterpolator");
OrientationInterpolator1449.DEF = "Armature_OI_l_carpal_distal_phalanx_1";
OrientationInterpolator1449.key = new MFFloat(new float[0,1]);
OrientationInterpolator1449.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[108] = OrientationInterpolator1449;

OrientationInterpolator OrientationInterpolator1450 = createNode("OrientationInterpolator");
OrientationInterpolator1450.DEF = "Armature_OI_l_trapezoid";
OrientationInterpolator1450.key = new MFFloat(new float[0,1]);
OrientationInterpolator1450.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[109] = OrientationInterpolator1450;

OrientationInterpolator OrientationInterpolator1451 = createNode("OrientationInterpolator");
OrientationInterpolator1451.DEF = "Armature_OI_l_metacarpal_2";
OrientationInterpolator1451.key = new MFFloat(new float[0,1]);
OrientationInterpolator1451.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[110] = OrientationInterpolator1451;

OrientationInterpolator OrientationInterpolator1452 = createNode("OrientationInterpolator");
OrientationInterpolator1452.DEF = "Armature_OI_l_carpal_proximal_phalanx_2";
OrientationInterpolator1452.key = new MFFloat(new float[0,1]);
OrientationInterpolator1452.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[111] = OrientationInterpolator1452;

OrientationInterpolator OrientationInterpolator1453 = createNode("OrientationInterpolator");
OrientationInterpolator1453.DEF = "Armature_OI_l_carpal_middle_phalanx_2";
OrientationInterpolator1453.key = new MFFloat(new float[0,1]);
OrientationInterpolator1453.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[112] = OrientationInterpolator1453;

OrientationInterpolator OrientationInterpolator1454 = createNode("OrientationInterpolator");
OrientationInterpolator1454.DEF = "Armature_OI_l_carpal_distal_phalanx_2";
OrientationInterpolator1454.key = new MFFloat(new float[0,1]);
OrientationInterpolator1454.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[113] = OrientationInterpolator1454;

OrientationInterpolator OrientationInterpolator1455 = createNode("OrientationInterpolator");
OrientationInterpolator1455.DEF = "Armature_OI_l_capitate";
OrientationInterpolator1455.key = new MFFloat(new float[0,1]);
OrientationInterpolator1455.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[114] = OrientationInterpolator1455;

OrientationInterpolator OrientationInterpolator1456 = createNode("OrientationInterpolator");
OrientationInterpolator1456.DEF = "Armature_OI_l_metacarpal_3";
OrientationInterpolator1456.key = new MFFloat(new float[0,1]);
OrientationInterpolator1456.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[115] = OrientationInterpolator1456;

OrientationInterpolator OrientationInterpolator1457 = createNode("OrientationInterpolator");
OrientationInterpolator1457.DEF = "Armature_OI_l_carpal_proximal_phalanx_3";
OrientationInterpolator1457.key = new MFFloat(new float[0,1]);
OrientationInterpolator1457.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[116] = OrientationInterpolator1457;

OrientationInterpolator OrientationInterpolator1458 = createNode("OrientationInterpolator");
OrientationInterpolator1458.DEF = "Armature_OI_l_carpal_middle_phalanx_3";
OrientationInterpolator1458.key = new MFFloat(new float[0,1]);
OrientationInterpolator1458.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[117] = OrientationInterpolator1458;

OrientationInterpolator OrientationInterpolator1459 = createNode("OrientationInterpolator");
OrientationInterpolator1459.DEF = "Armature_OI_l_carpal_distal_phalanx_3";
OrientationInterpolator1459.key = new MFFloat(new float[0,1]);
OrientationInterpolator1459.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[118] = OrientationInterpolator1459;

OrientationInterpolator OrientationInterpolator1460 = createNode("OrientationInterpolator");
OrientationInterpolator1460.DEF = "Armature_OI_l_hamate";
OrientationInterpolator1460.key = new MFFloat(new float[0,1]);
OrientationInterpolator1460.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[119] = OrientationInterpolator1460;

OrientationInterpolator OrientationInterpolator1461 = createNode("OrientationInterpolator");
OrientationInterpolator1461.DEF = "Armature_OI_l_metacarpal_4";
OrientationInterpolator1461.key = new MFFloat(new float[0,1]);
OrientationInterpolator1461.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[120] = OrientationInterpolator1461;

OrientationInterpolator OrientationInterpolator1462 = createNode("OrientationInterpolator");
OrientationInterpolator1462.DEF = "Armature_OI_l_carpal_proximal_phalanx_4";
OrientationInterpolator1462.key = new MFFloat(new float[0,1]);
OrientationInterpolator1462.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[121] = OrientationInterpolator1462;

OrientationInterpolator OrientationInterpolator1463 = createNode("OrientationInterpolator");
OrientationInterpolator1463.DEF = "Armature_OI_l_carpal_middle_phalanx_4";
OrientationInterpolator1463.key = new MFFloat(new float[0,1]);
OrientationInterpolator1463.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[122] = OrientationInterpolator1463;

OrientationInterpolator OrientationInterpolator1464 = createNode("OrientationInterpolator");
OrientationInterpolator1464.DEF = "Armature_OI_l_carpal_distal_phalanx_4";
OrientationInterpolator1464.key = new MFFloat(new float[0,1]);
OrientationInterpolator1464.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[123] = OrientationInterpolator1464;

OrientationInterpolator OrientationInterpolator1465 = createNode("OrientationInterpolator");
OrientationInterpolator1465.DEF = "Armature_OI_l_metacarpal_5";
OrientationInterpolator1465.key = new MFFloat(new float[0,1]);
OrientationInterpolator1465.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[124] = OrientationInterpolator1465;

OrientationInterpolator OrientationInterpolator1466 = createNode("OrientationInterpolator");
OrientationInterpolator1466.DEF = "Armature_OI_l_carpal_proximal_phalanx_5";
OrientationInterpolator1466.key = new MFFloat(new float[0,1]);
OrientationInterpolator1466.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[125] = OrientationInterpolator1466;

OrientationInterpolator OrientationInterpolator1467 = createNode("OrientationInterpolator");
OrientationInterpolator1467.DEF = "Armature_OI_l_carpal_middle_phalanx_5";
OrientationInterpolator1467.key = new MFFloat(new float[0,1]);
OrientationInterpolator1467.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[126] = OrientationInterpolator1467;

OrientationInterpolator OrientationInterpolator1468 = createNode("OrientationInterpolator");
OrientationInterpolator1468.DEF = "Armature_OI_l_carpal_distal_phalanx_5";
OrientationInterpolator1468.key = new MFFloat(new float[0,1]);
OrientationInterpolator1468.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[127] = OrientationInterpolator1468;

OrientationInterpolator OrientationInterpolator1469 = createNode("OrientationInterpolator");
OrientationInterpolator1469.DEF = "Armature_OI_r_clavicle";
OrientationInterpolator1469.key = new MFFloat(new float[0,1]);
OrientationInterpolator1469.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[128] = OrientationInterpolator1469;

OrientationInterpolator OrientationInterpolator1470 = createNode("OrientationInterpolator");
OrientationInterpolator1470.DEF = "Armature_OI_r_scapula";
OrientationInterpolator1470.key = new MFFloat(new float[0,1]);
OrientationInterpolator1470.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[129] = OrientationInterpolator1470;

OrientationInterpolator OrientationInterpolator1471 = createNode("OrientationInterpolator");
OrientationInterpolator1471.DEF = "Armature_OI_r_upperarm";
OrientationInterpolator1471.key = new MFFloat(new float[0,1]);
OrientationInterpolator1471.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[130] = OrientationInterpolator1471;

OrientationInterpolator OrientationInterpolator1472 = createNode("OrientationInterpolator");
OrientationInterpolator1472.DEF = "Armature_OI_r_forearm";
OrientationInterpolator1472.key = new MFFloat(new float[0,1]);
OrientationInterpolator1472.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[131] = OrientationInterpolator1472;

OrientationInterpolator OrientationInterpolator1473 = createNode("OrientationInterpolator");
OrientationInterpolator1473.DEF = "Armature_OI_r_carpal";
OrientationInterpolator1473.key = new MFFloat(new float[0,1]);
OrientationInterpolator1473.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[132] = OrientationInterpolator1473;

OrientationInterpolator OrientationInterpolator1474 = createNode("OrientationInterpolator");
OrientationInterpolator1474.DEF = "Armature_OI_r_trapezium";
OrientationInterpolator1474.key = new MFFloat(new float[0,1]);
OrientationInterpolator1474.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[133] = OrientationInterpolator1474;

OrientationInterpolator OrientationInterpolator1475 = createNode("OrientationInterpolator");
OrientationInterpolator1475.DEF = "Armature_OI_r_metacarpal_1";
OrientationInterpolator1475.key = new MFFloat(new float[0,1]);
OrientationInterpolator1475.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[134] = OrientationInterpolator1475;

OrientationInterpolator OrientationInterpolator1476 = createNode("OrientationInterpolator");
OrientationInterpolator1476.DEF = "Armature_OI_r_carpal_proximal_phalanx_1";
OrientationInterpolator1476.key = new MFFloat(new float[0,1]);
OrientationInterpolator1476.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[135] = OrientationInterpolator1476;

OrientationInterpolator OrientationInterpolator1477 = createNode("OrientationInterpolator");
OrientationInterpolator1477.DEF = "Armature_OI_r_carpal_distal_phalanx_1";
OrientationInterpolator1477.key = new MFFloat(new float[0,1]);
OrientationInterpolator1477.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[136] = OrientationInterpolator1477;

OrientationInterpolator OrientationInterpolator1478 = createNode("OrientationInterpolator");
OrientationInterpolator1478.DEF = "Armature_OI_r_trapezoid";
OrientationInterpolator1478.key = new MFFloat(new float[0,1]);
OrientationInterpolator1478.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[137] = OrientationInterpolator1478;

OrientationInterpolator OrientationInterpolator1479 = createNode("OrientationInterpolator");
OrientationInterpolator1479.DEF = "Armature_OI_r_metacarpal_2";
OrientationInterpolator1479.key = new MFFloat(new float[0,1]);
OrientationInterpolator1479.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[138] = OrientationInterpolator1479;

OrientationInterpolator OrientationInterpolator1480 = createNode("OrientationInterpolator");
OrientationInterpolator1480.DEF = "Armature_OI_r_carpal_proximal_phalanx_2";
OrientationInterpolator1480.key = new MFFloat(new float[0,1]);
OrientationInterpolator1480.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[139] = OrientationInterpolator1480;

OrientationInterpolator OrientationInterpolator1481 = createNode("OrientationInterpolator");
OrientationInterpolator1481.DEF = "Armature_OI_r_carpal_middle_phalanx_2";
OrientationInterpolator1481.key = new MFFloat(new float[0,1]);
OrientationInterpolator1481.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[140] = OrientationInterpolator1481;

OrientationInterpolator OrientationInterpolator1482 = createNode("OrientationInterpolator");
OrientationInterpolator1482.DEF = "Armature_OI_r_carpal_distal_phalanx_2";
OrientationInterpolator1482.key = new MFFloat(new float[0,1]);
OrientationInterpolator1482.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[141] = OrientationInterpolator1482;

OrientationInterpolator OrientationInterpolator1483 = createNode("OrientationInterpolator");
OrientationInterpolator1483.DEF = "Armature_OI_r_capitate";
OrientationInterpolator1483.key = new MFFloat(new float[0,1]);
OrientationInterpolator1483.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[142] = OrientationInterpolator1483;

OrientationInterpolator OrientationInterpolator1484 = createNode("OrientationInterpolator");
OrientationInterpolator1484.DEF = "Armature_OI_r_metacarpal_3";
OrientationInterpolator1484.key = new MFFloat(new float[0,1]);
OrientationInterpolator1484.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[143] = OrientationInterpolator1484;

OrientationInterpolator OrientationInterpolator1485 = createNode("OrientationInterpolator");
OrientationInterpolator1485.DEF = "Armature_OI_r_carpal_proximal_phalanx_3";
OrientationInterpolator1485.key = new MFFloat(new float[0,1]);
OrientationInterpolator1485.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[144] = OrientationInterpolator1485;

OrientationInterpolator OrientationInterpolator1486 = createNode("OrientationInterpolator");
OrientationInterpolator1486.DEF = "Armature_OI_r_carpal_middle_phalanx_3";
OrientationInterpolator1486.key = new MFFloat(new float[0,1]);
OrientationInterpolator1486.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[145] = OrientationInterpolator1486;

OrientationInterpolator OrientationInterpolator1487 = createNode("OrientationInterpolator");
OrientationInterpolator1487.DEF = "Armature_OI_r_carpal_distal_phalanx_3";
OrientationInterpolator1487.key = new MFFloat(new float[0,1]);
OrientationInterpolator1487.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[146] = OrientationInterpolator1487;

OrientationInterpolator OrientationInterpolator1488 = createNode("OrientationInterpolator");
OrientationInterpolator1488.DEF = "Armature_OI_r_hamate";
OrientationInterpolator1488.key = new MFFloat(new float[0,1]);
OrientationInterpolator1488.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[147] = OrientationInterpolator1488;

OrientationInterpolator OrientationInterpolator1489 = createNode("OrientationInterpolator");
OrientationInterpolator1489.DEF = "Armature_OI_r_metacarpal_4";
OrientationInterpolator1489.key = new MFFloat(new float[0,1]);
OrientationInterpolator1489.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[148] = OrientationInterpolator1489;

OrientationInterpolator OrientationInterpolator1490 = createNode("OrientationInterpolator");
OrientationInterpolator1490.DEF = "Armature_OI_r_carpal_proximal_phalanx_4";
OrientationInterpolator1490.key = new MFFloat(new float[0,1]);
OrientationInterpolator1490.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[149] = OrientationInterpolator1490;

OrientationInterpolator OrientationInterpolator1491 = createNode("OrientationInterpolator");
OrientationInterpolator1491.DEF = "Armature_OI_r_carpal_middle_phalanx_4";
OrientationInterpolator1491.key = new MFFloat(new float[0,1]);
OrientationInterpolator1491.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[150] = OrientationInterpolator1491;

OrientationInterpolator OrientationInterpolator1492 = createNode("OrientationInterpolator");
OrientationInterpolator1492.DEF = "Armature_OI_r_carpal_distal_phalanx_4";
OrientationInterpolator1492.key = new MFFloat(new float[0,1]);
OrientationInterpolator1492.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[151] = OrientationInterpolator1492;

OrientationInterpolator OrientationInterpolator1493 = createNode("OrientationInterpolator");
OrientationInterpolator1493.DEF = "Armature_OI_r_metacarpal_5";
OrientationInterpolator1493.key = new MFFloat(new float[0,1]);
OrientationInterpolator1493.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[152] = OrientationInterpolator1493;

OrientationInterpolator OrientationInterpolator1494 = createNode("OrientationInterpolator");
OrientationInterpolator1494.DEF = "Armature_OI_r_carpal_proximal_phalanx_5";
OrientationInterpolator1494.key = new MFFloat(new float[0,1]);
OrientationInterpolator1494.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[153] = OrientationInterpolator1494;

OrientationInterpolator OrientationInterpolator1495 = createNode("OrientationInterpolator");
OrientationInterpolator1495.DEF = "Armature_OI_r_carpal_middle_phalanx_5";
OrientationInterpolator1495.key = new MFFloat(new float[0,1]);
OrientationInterpolator1495.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[154] = OrientationInterpolator1495;

OrientationInterpolator OrientationInterpolator1496 = createNode("OrientationInterpolator");
OrientationInterpolator1496.DEF = "Armature_OI_r_carpal_distal_phalanx_5";
OrientationInterpolator1496.key = new MFFloat(new float[0,1]);
OrientationInterpolator1496.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[155] = OrientationInterpolator1496;

ROUTE ROUTE1497 = createNode("ROUTE");
ROUTE1497.fromField = "fraction_changed";
ROUTE1497.fromNode = "Armature_Clock";
ROUTE1497.toField = "set_fraction";
ROUTE1497.toNode = "Armature_OI_sacrum";
children[156] = ROUTE1497;

ROUTE ROUTE1498 = createNode("ROUTE");
ROUTE1498.fromField = "value_changed";
ROUTE1498.fromNode = "Armature_OI_sacrum";
ROUTE1498.toField = "rotation";
ROUTE1498.toNode = "hanim_sacrum";
children[157] = ROUTE1498;

ROUTE ROUTE1499 = createNode("ROUTE");
ROUTE1499.fromField = "fraction_changed";
ROUTE1499.fromNode = "Armature_Clock";
ROUTE1499.toField = "set_fraction";
ROUTE1499.toNode = "Armature_OI_pelvis";
children[158] = ROUTE1499;

ROUTE ROUTE1500 = createNode("ROUTE");
ROUTE1500.fromField = "value_changed";
ROUTE1500.fromNode = "Armature_OI_pelvis";
ROUTE1500.toField = "rotation";
ROUTE1500.toNode = "hanim_pelvis";
children[159] = ROUTE1500;

ROUTE ROUTE1501 = createNode("ROUTE");
ROUTE1501.fromField = "fraction_changed";
ROUTE1501.fromNode = "Armature_Clock";
ROUTE1501.toField = "set_fraction";
ROUTE1501.toNode = "Armature_OI_l_thigh";
children[160] = ROUTE1501;

ROUTE ROUTE1502 = createNode("ROUTE");
ROUTE1502.fromField = "value_changed";
ROUTE1502.fromNode = "Armature_OI_l_thigh";
ROUTE1502.toField = "rotation";
ROUTE1502.toNode = "hanim_l_thigh";
children[161] = ROUTE1502;

ROUTE ROUTE1503 = createNode("ROUTE");
ROUTE1503.fromField = "fraction_changed";
ROUTE1503.fromNode = "Armature_Clock";
ROUTE1503.toField = "set_fraction";
ROUTE1503.toNode = "Armature_OI_l_calf";
children[162] = ROUTE1503;

ROUTE ROUTE1504 = createNode("ROUTE");
ROUTE1504.fromField = "value_changed";
ROUTE1504.fromNode = "Armature_OI_l_calf";
ROUTE1504.toField = "rotation";
ROUTE1504.toNode = "hanim_l_calf";
children[163] = ROUTE1504;

ROUTE ROUTE1505 = createNode("ROUTE");
ROUTE1505.fromField = "fraction_changed";
ROUTE1505.fromNode = "Armature_Clock";
ROUTE1505.toField = "set_fraction";
ROUTE1505.toNode = "Armature_OI_l_talus";
children[164] = ROUTE1505;

ROUTE ROUTE1506 = createNode("ROUTE");
ROUTE1506.fromField = "value_changed";
ROUTE1506.fromNode = "Armature_OI_l_talus";
ROUTE1506.toField = "rotation";
ROUTE1506.toNode = "hanim_l_talus";
children[165] = ROUTE1506;

ROUTE ROUTE1507 = createNode("ROUTE");
ROUTE1507.fromField = "fraction_changed";
ROUTE1507.fromNode = "Armature_Clock";
ROUTE1507.toField = "set_fraction";
ROUTE1507.toNode = "Armature_OI_l_navicular";
children[166] = ROUTE1507;

ROUTE ROUTE1508 = createNode("ROUTE");
ROUTE1508.fromField = "value_changed";
ROUTE1508.fromNode = "Armature_OI_l_navicular";
ROUTE1508.toField = "rotation";
ROUTE1508.toNode = "hanim_l_navicular";
children[167] = ROUTE1508;

ROUTE ROUTE1509 = createNode("ROUTE");
ROUTE1509.fromField = "fraction_changed";
ROUTE1509.fromNode = "Armature_Clock";
ROUTE1509.toField = "set_fraction";
ROUTE1509.toNode = "Armature_OI_l_cuneiform_1";
children[168] = ROUTE1509;

ROUTE ROUTE1510 = createNode("ROUTE");
ROUTE1510.fromField = "value_changed";
ROUTE1510.fromNode = "Armature_OI_l_cuneiform_1";
ROUTE1510.toField = "rotation";
ROUTE1510.toNode = "hanim_l_cuneiform_1";
children[169] = ROUTE1510;

ROUTE ROUTE1511 = createNode("ROUTE");
ROUTE1511.fromField = "fraction_changed";
ROUTE1511.fromNode = "Armature_Clock";
ROUTE1511.toField = "set_fraction";
ROUTE1511.toNode = "Armature_OI_l_metatarsal_1";
children[170] = ROUTE1511;

ROUTE ROUTE1512 = createNode("ROUTE");
ROUTE1512.fromField = "value_changed";
ROUTE1512.fromNode = "Armature_OI_l_metatarsal_1";
ROUTE1512.toField = "rotation";
ROUTE1512.toNode = "hanim_l_metatarsal_1";
children[171] = ROUTE1512;

ROUTE ROUTE1513 = createNode("ROUTE");
ROUTE1513.fromField = "fraction_changed";
ROUTE1513.fromNode = "Armature_Clock";
ROUTE1513.toField = "set_fraction";
ROUTE1513.toNode = "Armature_OI_l_tarsal_proximal_phalanx_1";
children[172] = ROUTE1513;

ROUTE ROUTE1514 = createNode("ROUTE");
ROUTE1514.fromField = "value_changed";
ROUTE1514.fromNode = "Armature_OI_l_tarsal_proximal_phalanx_1";
ROUTE1514.toField = "rotation";
ROUTE1514.toNode = "hanim_l_tarsal_proximal_phalanx_1";
children[173] = ROUTE1514;

ROUTE ROUTE1515 = createNode("ROUTE");
ROUTE1515.fromField = "fraction_changed";
ROUTE1515.fromNode = "Armature_Clock";
ROUTE1515.toField = "set_fraction";
ROUTE1515.toNode = "Armature_OI_l_tarsal_distal_phalanx_1";
children[174] = ROUTE1515;

ROUTE ROUTE1516 = createNode("ROUTE");
ROUTE1516.fromField = "value_changed";
ROUTE1516.fromNode = "Armature_OI_l_tarsal_distal_phalanx_1";
ROUTE1516.toField = "rotation";
ROUTE1516.toNode = "hanim_l_tarsal_distal_phalanx_1";
children[175] = ROUTE1516;

ROUTE ROUTE1517 = createNode("ROUTE");
ROUTE1517.fromField = "fraction_changed";
ROUTE1517.fromNode = "Armature_Clock";
ROUTE1517.toField = "set_fraction";
ROUTE1517.toNode = "Armature_OI_l_cuneiform_2";
children[176] = ROUTE1517;

ROUTE ROUTE1518 = createNode("ROUTE");
ROUTE1518.fromField = "value_changed";
ROUTE1518.fromNode = "Armature_OI_l_cuneiform_2";
ROUTE1518.toField = "rotation";
ROUTE1518.toNode = "hanim_l_cuneiform_2";
children[177] = ROUTE1518;

ROUTE ROUTE1519 = createNode("ROUTE");
ROUTE1519.fromField = "fraction_changed";
ROUTE1519.fromNode = "Armature_Clock";
ROUTE1519.toField = "set_fraction";
ROUTE1519.toNode = "Armature_OI_l_metatarsal_2";
children[178] = ROUTE1519;

ROUTE ROUTE1520 = createNode("ROUTE");
ROUTE1520.fromField = "value_changed";
ROUTE1520.fromNode = "Armature_OI_l_metatarsal_2";
ROUTE1520.toField = "rotation";
ROUTE1520.toNode = "hanim_l_metatarsal_2";
children[179] = ROUTE1520;

ROUTE ROUTE1521 = createNode("ROUTE");
ROUTE1521.fromField = "fraction_changed";
ROUTE1521.fromNode = "Armature_Clock";
ROUTE1521.toField = "set_fraction";
ROUTE1521.toNode = "Armature_OI_l_tarsal_proximal_phalanx_2";
children[180] = ROUTE1521;

ROUTE ROUTE1522 = createNode("ROUTE");
ROUTE1522.fromField = "value_changed";
ROUTE1522.fromNode = "Armature_OI_l_tarsal_proximal_phalanx_2";
ROUTE1522.toField = "rotation";
ROUTE1522.toNode = "hanim_l_tarsal_proximal_phalanx_2";
children[181] = ROUTE1522;

ROUTE ROUTE1523 = createNode("ROUTE");
ROUTE1523.fromField = "fraction_changed";
ROUTE1523.fromNode = "Armature_Clock";
ROUTE1523.toField = "set_fraction";
ROUTE1523.toNode = "Armature_OI_l_tarsal_middle_phalanx_2";
children[182] = ROUTE1523;

ROUTE ROUTE1524 = createNode("ROUTE");
ROUTE1524.fromField = "value_changed";
ROUTE1524.fromNode = "Armature_OI_l_tarsal_middle_phalanx_2";
ROUTE1524.toField = "rotation";
ROUTE1524.toNode = "hanim_l_tarsal_middle_phalanx_2";
children[183] = ROUTE1524;

ROUTE ROUTE1525 = createNode("ROUTE");
ROUTE1525.fromField = "fraction_changed";
ROUTE1525.fromNode = "Armature_Clock";
ROUTE1525.toField = "set_fraction";
ROUTE1525.toNode = "Armature_OI_l_tarsal_distal_phalanx_2";
children[184] = ROUTE1525;

ROUTE ROUTE1526 = createNode("ROUTE");
ROUTE1526.fromField = "value_changed";
ROUTE1526.fromNode = "Armature_OI_l_tarsal_distal_phalanx_2";
ROUTE1526.toField = "rotation";
ROUTE1526.toNode = "hanim_l_tarsal_distal_phalanx_2";
children[185] = ROUTE1526;

ROUTE ROUTE1527 = createNode("ROUTE");
ROUTE1527.fromField = "fraction_changed";
ROUTE1527.fromNode = "Armature_Clock";
ROUTE1527.toField = "set_fraction";
ROUTE1527.toNode = "Armature_OI_l_cuneiform_3";
children[186] = ROUTE1527;

ROUTE ROUTE1528 = createNode("ROUTE");
ROUTE1528.fromField = "value_changed";
ROUTE1528.fromNode = "Armature_OI_l_cuneiform_3";
ROUTE1528.toField = "rotation";
ROUTE1528.toNode = "hanim_l_cuneiform_3";
children[187] = ROUTE1528;

ROUTE ROUTE1529 = createNode("ROUTE");
ROUTE1529.fromField = "fraction_changed";
ROUTE1529.fromNode = "Armature_Clock";
ROUTE1529.toField = "set_fraction";
ROUTE1529.toNode = "Armature_OI_l_metatarsal_3";
children[188] = ROUTE1529;

ROUTE ROUTE1530 = createNode("ROUTE");
ROUTE1530.fromField = "value_changed";
ROUTE1530.fromNode = "Armature_OI_l_metatarsal_3";
ROUTE1530.toField = "rotation";
ROUTE1530.toNode = "hanim_l_metatarsal_3";
children[189] = ROUTE1530;

ROUTE ROUTE1531 = createNode("ROUTE");
ROUTE1531.fromField = "fraction_changed";
ROUTE1531.fromNode = "Armature_Clock";
ROUTE1531.toField = "set_fraction";
ROUTE1531.toNode = "Armature_OI_l_tarsal_proximal_phalanx_3";
children[190] = ROUTE1531;

ROUTE ROUTE1532 = createNode("ROUTE");
ROUTE1532.fromField = "value_changed";
ROUTE1532.fromNode = "Armature_OI_l_tarsal_proximal_phalanx_3";
ROUTE1532.toField = "rotation";
ROUTE1532.toNode = "hanim_l_tarsal_proximal_phalanx_3";
children[191] = ROUTE1532;

ROUTE ROUTE1533 = createNode("ROUTE");
ROUTE1533.fromField = "fraction_changed";
ROUTE1533.fromNode = "Armature_Clock";
ROUTE1533.toField = "set_fraction";
ROUTE1533.toNode = "Armature_OI_l_tarsal_middle_phalanx_3";
children[192] = ROUTE1533;

ROUTE ROUTE1534 = createNode("ROUTE");
ROUTE1534.fromField = "value_changed";
ROUTE1534.fromNode = "Armature_OI_l_tarsal_middle_phalanx_3";
ROUTE1534.toField = "rotation";
ROUTE1534.toNode = "hanim_l_tarsal_middle_phalanx_3";
children[193] = ROUTE1534;

ROUTE ROUTE1535 = createNode("ROUTE");
ROUTE1535.fromField = "fraction_changed";
ROUTE1535.fromNode = "Armature_Clock";
ROUTE1535.toField = "set_fraction";
ROUTE1535.toNode = "Armature_OI_l_tarsal_distal_phalanx_3";
children[194] = ROUTE1535;

ROUTE ROUTE1536 = createNode("ROUTE");
ROUTE1536.fromField = "value_changed";
ROUTE1536.fromNode = "Armature_OI_l_tarsal_distal_phalanx_3";
ROUTE1536.toField = "rotation";
ROUTE1536.toNode = "hanim_l_tarsal_distal_phalanx_3";
children[195] = ROUTE1536;

ROUTE ROUTE1537 = createNode("ROUTE");
ROUTE1537.fromField = "fraction_changed";
ROUTE1537.fromNode = "Armature_Clock";
ROUTE1537.toField = "set_fraction";
ROUTE1537.toNode = "Armature_OI_l_calcaneus";
children[196] = ROUTE1537;

ROUTE ROUTE1538 = createNode("ROUTE");
ROUTE1538.fromField = "value_changed";
ROUTE1538.fromNode = "Armature_OI_l_calcaneus";
ROUTE1538.toField = "rotation";
ROUTE1538.toNode = "hanim_l_calcaneus";
children[197] = ROUTE1538;

ROUTE ROUTE1539 = createNode("ROUTE");
ROUTE1539.fromField = "fraction_changed";
ROUTE1539.fromNode = "Armature_Clock";
ROUTE1539.toField = "set_fraction";
ROUTE1539.toNode = "Armature_OI_l_cuboid";
children[198] = ROUTE1539;

ROUTE ROUTE1540 = createNode("ROUTE");
ROUTE1540.fromField = "value_changed";
ROUTE1540.fromNode = "Armature_OI_l_cuboid";
ROUTE1540.toField = "rotation";
ROUTE1540.toNode = "hanim_l_cuboid";
children[199] = ROUTE1540;

ROUTE ROUTE1541 = createNode("ROUTE");
ROUTE1541.fromField = "fraction_changed";
ROUTE1541.fromNode = "Armature_Clock";
ROUTE1541.toField = "set_fraction";
ROUTE1541.toNode = "Armature_OI_l_metatarsal_4";
children[200] = ROUTE1541;

ROUTE ROUTE1542 = createNode("ROUTE");
ROUTE1542.fromField = "value_changed";
ROUTE1542.fromNode = "Armature_OI_l_metatarsal_4";
ROUTE1542.toField = "rotation";
ROUTE1542.toNode = "hanim_l_metatarsal_4";
children[201] = ROUTE1542;

ROUTE ROUTE1543 = createNode("ROUTE");
ROUTE1543.fromField = "fraction_changed";
ROUTE1543.fromNode = "Armature_Clock";
ROUTE1543.toField = "set_fraction";
ROUTE1543.toNode = "Armature_OI_l_tarsal_proximal_phalanx_4";
children[202] = ROUTE1543;

ROUTE ROUTE1544 = createNode("ROUTE");
ROUTE1544.fromField = "value_changed";
ROUTE1544.fromNode = "Armature_OI_l_tarsal_proximal_phalanx_4";
ROUTE1544.toField = "rotation";
ROUTE1544.toNode = "hanim_l_tarsal_proximal_phalanx_4";
children[203] = ROUTE1544;

ROUTE ROUTE1545 = createNode("ROUTE");
ROUTE1545.fromField = "fraction_changed";
ROUTE1545.fromNode = "Armature_Clock";
ROUTE1545.toField = "set_fraction";
ROUTE1545.toNode = "Armature_OI_l_tarsal_middle_phalanx_4";
children[204] = ROUTE1545;

ROUTE ROUTE1546 = createNode("ROUTE");
ROUTE1546.fromField = "value_changed";
ROUTE1546.fromNode = "Armature_OI_l_tarsal_middle_phalanx_4";
ROUTE1546.toField = "rotation";
ROUTE1546.toNode = "hanim_l_tarsal_middle_phalanx_4";
children[205] = ROUTE1546;

ROUTE ROUTE1547 = createNode("ROUTE");
ROUTE1547.fromField = "fraction_changed";
ROUTE1547.fromNode = "Armature_Clock";
ROUTE1547.toField = "set_fraction";
ROUTE1547.toNode = "Armature_OI_l_tarsal_distal_phalanx_4";
children[206] = ROUTE1547;

ROUTE ROUTE1548 = createNode("ROUTE");
ROUTE1548.fromField = "value_changed";
ROUTE1548.fromNode = "Armature_OI_l_tarsal_distal_phalanx_4";
ROUTE1548.toField = "rotation";
ROUTE1548.toNode = "hanim_l_tarsal_distal_phalanx_4";
children[207] = ROUTE1548;

ROUTE ROUTE1549 = createNode("ROUTE");
ROUTE1549.fromField = "fraction_changed";
ROUTE1549.fromNode = "Armature_Clock";
ROUTE1549.toField = "set_fraction";
ROUTE1549.toNode = "Armature_OI_l_metatarsal_5";
children[208] = ROUTE1549;

ROUTE ROUTE1550 = createNode("ROUTE");
ROUTE1550.fromField = "value_changed";
ROUTE1550.fromNode = "Armature_OI_l_metatarsal_5";
ROUTE1550.toField = "rotation";
ROUTE1550.toNode = "hanim_l_metatarsal_5";
children[209] = ROUTE1550;

ROUTE ROUTE1551 = createNode("ROUTE");
ROUTE1551.fromField = "fraction_changed";
ROUTE1551.fromNode = "Armature_Clock";
ROUTE1551.toField = "set_fraction";
ROUTE1551.toNode = "Armature_OI_l_tarsal_proximal_phalanx_5";
children[210] = ROUTE1551;

ROUTE ROUTE1552 = createNode("ROUTE");
ROUTE1552.fromField = "value_changed";
ROUTE1552.fromNode = "Armature_OI_l_tarsal_proximal_phalanx_5";
ROUTE1552.toField = "rotation";
ROUTE1552.toNode = "hanim_l_tarsal_proximal_phalanx_5";
children[211] = ROUTE1552;

ROUTE ROUTE1553 = createNode("ROUTE");
ROUTE1553.fromField = "fraction_changed";
ROUTE1553.fromNode = "Armature_Clock";
ROUTE1553.toField = "set_fraction";
ROUTE1553.toNode = "Armature_OI_l_tarsal_middle_phalanx_5";
children[212] = ROUTE1553;

ROUTE ROUTE1554 = createNode("ROUTE");
ROUTE1554.fromField = "value_changed";
ROUTE1554.fromNode = "Armature_OI_l_tarsal_middle_phalanx_5";
ROUTE1554.toField = "rotation";
ROUTE1554.toNode = "hanim_l_tarsal_middle_phalanx_5";
children[213] = ROUTE1554;

ROUTE ROUTE1555 = createNode("ROUTE");
ROUTE1555.fromField = "fraction_changed";
ROUTE1555.fromNode = "Armature_Clock";
ROUTE1555.toField = "set_fraction";
ROUTE1555.toNode = "Armature_OI_l_tarsal_distal_phalanx_5";
children[214] = ROUTE1555;

ROUTE ROUTE1556 = createNode("ROUTE");
ROUTE1556.fromField = "value_changed";
ROUTE1556.fromNode = "Armature_OI_l_tarsal_distal_phalanx_5";
ROUTE1556.toField = "rotation";
ROUTE1556.toNode = "hanim_l_tarsal_distal_phalanx_5";
children[215] = ROUTE1556;

ROUTE ROUTE1557 = createNode("ROUTE");
ROUTE1557.fromField = "fraction_changed";
ROUTE1557.fromNode = "Armature_Clock";
ROUTE1557.toField = "set_fraction";
ROUTE1557.toNode = "Armature_OI_r_thigh";
children[216] = ROUTE1557;

ROUTE ROUTE1558 = createNode("ROUTE");
ROUTE1558.fromField = "value_changed";
ROUTE1558.fromNode = "Armature_OI_r_thigh";
ROUTE1558.toField = "rotation";
ROUTE1558.toNode = "hanim_r_thigh";
children[217] = ROUTE1558;

ROUTE ROUTE1559 = createNode("ROUTE");
ROUTE1559.fromField = "fraction_changed";
ROUTE1559.fromNode = "Armature_Clock";
ROUTE1559.toField = "set_fraction";
ROUTE1559.toNode = "Armature_OI_r_calf";
children[218] = ROUTE1559;

ROUTE ROUTE1560 = createNode("ROUTE");
ROUTE1560.fromField = "value_changed";
ROUTE1560.fromNode = "Armature_OI_r_calf";
ROUTE1560.toField = "rotation";
ROUTE1560.toNode = "hanim_r_calf";
children[219] = ROUTE1560;

ROUTE ROUTE1561 = createNode("ROUTE");
ROUTE1561.fromField = "fraction_changed";
ROUTE1561.fromNode = "Armature_Clock";
ROUTE1561.toField = "set_fraction";
ROUTE1561.toNode = "Armature_OI_r_talus";
children[220] = ROUTE1561;

ROUTE ROUTE1562 = createNode("ROUTE");
ROUTE1562.fromField = "value_changed";
ROUTE1562.fromNode = "Armature_OI_r_talus";
ROUTE1562.toField = "rotation";
ROUTE1562.toNode = "hanim_r_talus";
children[221] = ROUTE1562;

ROUTE ROUTE1563 = createNode("ROUTE");
ROUTE1563.fromField = "fraction_changed";
ROUTE1563.fromNode = "Armature_Clock";
ROUTE1563.toField = "set_fraction";
ROUTE1563.toNode = "Armature_OI_r_navicular";
children[222] = ROUTE1563;

ROUTE ROUTE1564 = createNode("ROUTE");
ROUTE1564.fromField = "value_changed";
ROUTE1564.fromNode = "Armature_OI_r_navicular";
ROUTE1564.toField = "rotation";
ROUTE1564.toNode = "hanim_r_navicular";
children[223] = ROUTE1564;

ROUTE ROUTE1565 = createNode("ROUTE");
ROUTE1565.fromField = "fraction_changed";
ROUTE1565.fromNode = "Armature_Clock";
ROUTE1565.toField = "set_fraction";
ROUTE1565.toNode = "Armature_OI_r_cuneiform_1";
children[224] = ROUTE1565;

ROUTE ROUTE1566 = createNode("ROUTE");
ROUTE1566.fromField = "value_changed";
ROUTE1566.fromNode = "Armature_OI_r_cuneiform_1";
ROUTE1566.toField = "rotation";
ROUTE1566.toNode = "hanim_r_cuneiform_1";
children[225] = ROUTE1566;

ROUTE ROUTE1567 = createNode("ROUTE");
ROUTE1567.fromField = "fraction_changed";
ROUTE1567.fromNode = "Armature_Clock";
ROUTE1567.toField = "set_fraction";
ROUTE1567.toNode = "Armature_OI_r_metatarsal_1";
children[226] = ROUTE1567;

ROUTE ROUTE1568 = createNode("ROUTE");
ROUTE1568.fromField = "value_changed";
ROUTE1568.fromNode = "Armature_OI_r_metatarsal_1";
ROUTE1568.toField = "rotation";
ROUTE1568.toNode = "hanim_r_metatarsal_1";
children[227] = ROUTE1568;

ROUTE ROUTE1569 = createNode("ROUTE");
ROUTE1569.fromField = "fraction_changed";
ROUTE1569.fromNode = "Armature_Clock";
ROUTE1569.toField = "set_fraction";
ROUTE1569.toNode = "Armature_OI_r_tarsal_proximal_phalanx_1";
children[228] = ROUTE1569;

ROUTE ROUTE1570 = createNode("ROUTE");
ROUTE1570.fromField = "value_changed";
ROUTE1570.fromNode = "Armature_OI_r_tarsal_proximal_phalanx_1";
ROUTE1570.toField = "rotation";
ROUTE1570.toNode = "hanim_r_tarsal_proximal_phalanx_1";
children[229] = ROUTE1570;

ROUTE ROUTE1571 = createNode("ROUTE");
ROUTE1571.fromField = "fraction_changed";
ROUTE1571.fromNode = "Armature_Clock";
ROUTE1571.toField = "set_fraction";
ROUTE1571.toNode = "Armature_OI_r_tarsal_distal_phalanx_1";
children[230] = ROUTE1571;

ROUTE ROUTE1572 = createNode("ROUTE");
ROUTE1572.fromField = "value_changed";
ROUTE1572.fromNode = "Armature_OI_r_tarsal_distal_phalanx_1";
ROUTE1572.toField = "rotation";
ROUTE1572.toNode = "hanim_r_tarsal_distal_phalanx_1";
children[231] = ROUTE1572;

ROUTE ROUTE1573 = createNode("ROUTE");
ROUTE1573.fromField = "fraction_changed";
ROUTE1573.fromNode = "Armature_Clock";
ROUTE1573.toField = "set_fraction";
ROUTE1573.toNode = "Armature_OI_r_cuneiform_2";
children[232] = ROUTE1573;

ROUTE ROUTE1574 = createNode("ROUTE");
ROUTE1574.fromField = "value_changed";
ROUTE1574.fromNode = "Armature_OI_r_cuneiform_2";
ROUTE1574.toField = "rotation";
ROUTE1574.toNode = "hanim_r_cuneiform_2";
children[233] = ROUTE1574;

ROUTE ROUTE1575 = createNode("ROUTE");
ROUTE1575.fromField = "fraction_changed";
ROUTE1575.fromNode = "Armature_Clock";
ROUTE1575.toField = "set_fraction";
ROUTE1575.toNode = "Armature_OI_r_metatarsal_2";
children[234] = ROUTE1575;

ROUTE ROUTE1576 = createNode("ROUTE");
ROUTE1576.fromField = "value_changed";
ROUTE1576.fromNode = "Armature_OI_r_metatarsal_2";
ROUTE1576.toField = "rotation";
ROUTE1576.toNode = "hanim_r_metatarsal_2";
children[235] = ROUTE1576;

ROUTE ROUTE1577 = createNode("ROUTE");
ROUTE1577.fromField = "fraction_changed";
ROUTE1577.fromNode = "Armature_Clock";
ROUTE1577.toField = "set_fraction";
ROUTE1577.toNode = "Armature_OI_r_tarsal_proximal_phalanx_2";
children[236] = ROUTE1577;

ROUTE ROUTE1578 = createNode("ROUTE");
ROUTE1578.fromField = "value_changed";
ROUTE1578.fromNode = "Armature_OI_r_tarsal_proximal_phalanx_2";
ROUTE1578.toField = "rotation";
ROUTE1578.toNode = "hanim_r_tarsal_proximal_phalanx_2";
children[237] = ROUTE1578;

ROUTE ROUTE1579 = createNode("ROUTE");
ROUTE1579.fromField = "fraction_changed";
ROUTE1579.fromNode = "Armature_Clock";
ROUTE1579.toField = "set_fraction";
ROUTE1579.toNode = "Armature_OI_r_tarsal_middle_phalanx_2";
children[238] = ROUTE1579;

ROUTE ROUTE1580 = createNode("ROUTE");
ROUTE1580.fromField = "value_changed";
ROUTE1580.fromNode = "Armature_OI_r_tarsal_middle_phalanx_2";
ROUTE1580.toField = "rotation";
ROUTE1580.toNode = "hanim_r_tarsal_middle_phalanx_2";
children[239] = ROUTE1580;

ROUTE ROUTE1581 = createNode("ROUTE");
ROUTE1581.fromField = "fraction_changed";
ROUTE1581.fromNode = "Armature_Clock";
ROUTE1581.toField = "set_fraction";
ROUTE1581.toNode = "Armature_OI_r_tarsal_distal_phalanx_2";
children[240] = ROUTE1581;

ROUTE ROUTE1582 = createNode("ROUTE");
ROUTE1582.fromField = "value_changed";
ROUTE1582.fromNode = "Armature_OI_r_tarsal_distal_phalanx_2";
ROUTE1582.toField = "rotation";
ROUTE1582.toNode = "hanim_r_tarsal_distal_phalanx_2";
children[241] = ROUTE1582;

ROUTE ROUTE1583 = createNode("ROUTE");
ROUTE1583.fromField = "fraction_changed";
ROUTE1583.fromNode = "Armature_Clock";
ROUTE1583.toField = "set_fraction";
ROUTE1583.toNode = "Armature_OI_r_cuneiform_3";
children[242] = ROUTE1583;

ROUTE ROUTE1584 = createNode("ROUTE");
ROUTE1584.fromField = "value_changed";
ROUTE1584.fromNode = "Armature_OI_r_cuneiform_3";
ROUTE1584.toField = "rotation";
ROUTE1584.toNode = "hanim_r_cuneiform_3";
children[243] = ROUTE1584;

ROUTE ROUTE1585 = createNode("ROUTE");
ROUTE1585.fromField = "fraction_changed";
ROUTE1585.fromNode = "Armature_Clock";
ROUTE1585.toField = "set_fraction";
ROUTE1585.toNode = "Armature_OI_r_metatarsal_3";
children[244] = ROUTE1585;

ROUTE ROUTE1586 = createNode("ROUTE");
ROUTE1586.fromField = "value_changed";
ROUTE1586.fromNode = "Armature_OI_r_metatarsal_3";
ROUTE1586.toField = "rotation";
ROUTE1586.toNode = "hanim_r_metatarsal_3";
children[245] = ROUTE1586;

ROUTE ROUTE1587 = createNode("ROUTE");
ROUTE1587.fromField = "fraction_changed";
ROUTE1587.fromNode = "Armature_Clock";
ROUTE1587.toField = "set_fraction";
ROUTE1587.toNode = "Armature_OI_r_tarsal_proximal_phalanx_3";
children[246] = ROUTE1587;

ROUTE ROUTE1588 = createNode("ROUTE");
ROUTE1588.fromField = "value_changed";
ROUTE1588.fromNode = "Armature_OI_r_tarsal_proximal_phalanx_3";
ROUTE1588.toField = "rotation";
ROUTE1588.toNode = "hanim_r_tarsal_proximal_phalanx_3";
children[247] = ROUTE1588;

ROUTE ROUTE1589 = createNode("ROUTE");
ROUTE1589.fromField = "fraction_changed";
ROUTE1589.fromNode = "Armature_Clock";
ROUTE1589.toField = "set_fraction";
ROUTE1589.toNode = "Armature_OI_r_tarsal_middle_phalanx_3";
children[248] = ROUTE1589;

ROUTE ROUTE1590 = createNode("ROUTE");
ROUTE1590.fromField = "value_changed";
ROUTE1590.fromNode = "Armature_OI_r_tarsal_middle_phalanx_3";
ROUTE1590.toField = "rotation";
ROUTE1590.toNode = "hanim_r_tarsal_middle_phalanx_3";
children[249] = ROUTE1590;

ROUTE ROUTE1591 = createNode("ROUTE");
ROUTE1591.fromField = "fraction_changed";
ROUTE1591.fromNode = "Armature_Clock";
ROUTE1591.toField = "set_fraction";
ROUTE1591.toNode = "Armature_OI_r_tarsal_distal_phalanx_3";
children[250] = ROUTE1591;

ROUTE ROUTE1592 = createNode("ROUTE");
ROUTE1592.fromField = "value_changed";
ROUTE1592.fromNode = "Armature_OI_r_tarsal_distal_phalanx_3";
ROUTE1592.toField = "rotation";
ROUTE1592.toNode = "hanim_r_tarsal_distal_phalanx_3";
children[251] = ROUTE1592;

ROUTE ROUTE1593 = createNode("ROUTE");
ROUTE1593.fromField = "fraction_changed";
ROUTE1593.fromNode = "Armature_Clock";
ROUTE1593.toField = "set_fraction";
ROUTE1593.toNode = "Armature_OI_r_calcaneus";
children[252] = ROUTE1593;

ROUTE ROUTE1594 = createNode("ROUTE");
ROUTE1594.fromField = "value_changed";
ROUTE1594.fromNode = "Armature_OI_r_calcaneus";
ROUTE1594.toField = "rotation";
ROUTE1594.toNode = "hanim_r_calcaneus";
children[253] = ROUTE1594;

ROUTE ROUTE1595 = createNode("ROUTE");
ROUTE1595.fromField = "fraction_changed";
ROUTE1595.fromNode = "Armature_Clock";
ROUTE1595.toField = "set_fraction";
ROUTE1595.toNode = "Armature_OI_r_cuboid";
children[254] = ROUTE1595;

ROUTE ROUTE1596 = createNode("ROUTE");
ROUTE1596.fromField = "value_changed";
ROUTE1596.fromNode = "Armature_OI_r_cuboid";
ROUTE1596.toField = "rotation";
ROUTE1596.toNode = "hanim_r_cuboid";
children[255] = ROUTE1596;

ROUTE ROUTE1597 = createNode("ROUTE");
ROUTE1597.fromField = "fraction_changed";
ROUTE1597.fromNode = "Armature_Clock";
ROUTE1597.toField = "set_fraction";
ROUTE1597.toNode = "Armature_OI_r_metatarsal_4";
children[256] = ROUTE1597;

ROUTE ROUTE1598 = createNode("ROUTE");
ROUTE1598.fromField = "value_changed";
ROUTE1598.fromNode = "Armature_OI_r_metatarsal_4";
ROUTE1598.toField = "rotation";
ROUTE1598.toNode = "hanim_r_metatarsal_4";
children[257] = ROUTE1598;

ROUTE ROUTE1599 = createNode("ROUTE");
ROUTE1599.fromField = "fraction_changed";
ROUTE1599.fromNode = "Armature_Clock";
ROUTE1599.toField = "set_fraction";
ROUTE1599.toNode = "Armature_OI_r_tarsal_proximal_phalanx_4";
children[258] = ROUTE1599;

ROUTE ROUTE1600 = createNode("ROUTE");
ROUTE1600.fromField = "value_changed";
ROUTE1600.fromNode = "Armature_OI_r_tarsal_proximal_phalanx_4";
ROUTE1600.toField = "rotation";
ROUTE1600.toNode = "hanim_r_tarsal_proximal_phalanx_4";
children[259] = ROUTE1600;

ROUTE ROUTE1601 = createNode("ROUTE");
ROUTE1601.fromField = "fraction_changed";
ROUTE1601.fromNode = "Armature_Clock";
ROUTE1601.toField = "set_fraction";
ROUTE1601.toNode = "Armature_OI_r_tarsal_middle_phalanx_4";
children[260] = ROUTE1601;

ROUTE ROUTE1602 = createNode("ROUTE");
ROUTE1602.fromField = "value_changed";
ROUTE1602.fromNode = "Armature_OI_r_tarsal_middle_phalanx_4";
ROUTE1602.toField = "rotation";
ROUTE1602.toNode = "hanim_r_tarsal_middle_phalanx_4";
children[261] = ROUTE1602;

ROUTE ROUTE1603 = createNode("ROUTE");
ROUTE1603.fromField = "fraction_changed";
ROUTE1603.fromNode = "Armature_Clock";
ROUTE1603.toField = "set_fraction";
ROUTE1603.toNode = "Armature_OI_r_tarsal_distal_phalanx_4";
children[262] = ROUTE1603;

ROUTE ROUTE1604 = createNode("ROUTE");
ROUTE1604.fromField = "value_changed";
ROUTE1604.fromNode = "Armature_OI_r_tarsal_distal_phalanx_4";
ROUTE1604.toField = "rotation";
ROUTE1604.toNode = "hanim_r_tarsal_distal_phalanx_4";
children[263] = ROUTE1604;

ROUTE ROUTE1605 = createNode("ROUTE");
ROUTE1605.fromField = "fraction_changed";
ROUTE1605.fromNode = "Armature_Clock";
ROUTE1605.toField = "set_fraction";
ROUTE1605.toNode = "Armature_OI_r_metatarsal_5";
children[264] = ROUTE1605;

ROUTE ROUTE1606 = createNode("ROUTE");
ROUTE1606.fromField = "value_changed";
ROUTE1606.fromNode = "Armature_OI_r_metatarsal_5";
ROUTE1606.toField = "rotation";
ROUTE1606.toNode = "hanim_r_metatarsal_5";
children[265] = ROUTE1606;

ROUTE ROUTE1607 = createNode("ROUTE");
ROUTE1607.fromField = "fraction_changed";
ROUTE1607.fromNode = "Armature_Clock";
ROUTE1607.toField = "set_fraction";
ROUTE1607.toNode = "Armature_OI_r_tarsal_proximal_phalanx_5";
children[266] = ROUTE1607;

ROUTE ROUTE1608 = createNode("ROUTE");
ROUTE1608.fromField = "value_changed";
ROUTE1608.fromNode = "Armature_OI_r_tarsal_proximal_phalanx_5";
ROUTE1608.toField = "rotation";
ROUTE1608.toNode = "hanim_r_tarsal_proximal_phalanx_5";
children[267] = ROUTE1608;

ROUTE ROUTE1609 = createNode("ROUTE");
ROUTE1609.fromField = "fraction_changed";
ROUTE1609.fromNode = "Armature_Clock";
ROUTE1609.toField = "set_fraction";
ROUTE1609.toNode = "Armature_OI_r_tarsal_middle_phalanx_5";
children[268] = ROUTE1609;

ROUTE ROUTE1610 = createNode("ROUTE");
ROUTE1610.fromField = "value_changed";
ROUTE1610.fromNode = "Armature_OI_r_tarsal_middle_phalanx_5";
ROUTE1610.toField = "rotation";
ROUTE1610.toNode = "hanim_r_tarsal_middle_phalanx_5";
children[269] = ROUTE1610;

ROUTE ROUTE1611 = createNode("ROUTE");
ROUTE1611.fromField = "fraction_changed";
ROUTE1611.fromNode = "Armature_Clock";
ROUTE1611.toField = "set_fraction";
ROUTE1611.toNode = "Armature_OI_r_tarsal_distal_phalanx_5";
children[270] = ROUTE1611;

ROUTE ROUTE1612 = createNode("ROUTE");
ROUTE1612.fromField = "value_changed";
ROUTE1612.fromNode = "Armature_OI_r_tarsal_distal_phalanx_5";
ROUTE1612.toField = "rotation";
ROUTE1612.toNode = "hanim_r_tarsal_distal_phalanx_5";
children[271] = ROUTE1612;

ROUTE ROUTE1613 = createNode("ROUTE");
ROUTE1613.fromField = "fraction_changed";
ROUTE1613.fromNode = "Armature_Clock";
ROUTE1613.toField = "set_fraction";
ROUTE1613.toNode = "Armature_OI_l5";
children[272] = ROUTE1613;

ROUTE ROUTE1614 = createNode("ROUTE");
ROUTE1614.fromField = "value_changed";
ROUTE1614.fromNode = "Armature_OI_l5";
ROUTE1614.toField = "rotation";
ROUTE1614.toNode = "hanim_l5";
children[273] = ROUTE1614;

ROUTE ROUTE1615 = createNode("ROUTE");
ROUTE1615.fromField = "fraction_changed";
ROUTE1615.fromNode = "Armature_Clock";
ROUTE1615.toField = "set_fraction";
ROUTE1615.toNode = "Armature_OI_l4";
children[274] = ROUTE1615;

ROUTE ROUTE1616 = createNode("ROUTE");
ROUTE1616.fromField = "value_changed";
ROUTE1616.fromNode = "Armature_OI_l4";
ROUTE1616.toField = "rotation";
ROUTE1616.toNode = "hanim_l4";
children[275] = ROUTE1616;

ROUTE ROUTE1617 = createNode("ROUTE");
ROUTE1617.fromField = "fraction_changed";
ROUTE1617.fromNode = "Armature_Clock";
ROUTE1617.toField = "set_fraction";
ROUTE1617.toNode = "Armature_OI_l3";
children[276] = ROUTE1617;

ROUTE ROUTE1618 = createNode("ROUTE");
ROUTE1618.fromField = "value_changed";
ROUTE1618.fromNode = "Armature_OI_l3";
ROUTE1618.toField = "rotation";
ROUTE1618.toNode = "hanim_l3";
children[277] = ROUTE1618;

ROUTE ROUTE1619 = createNode("ROUTE");
ROUTE1619.fromField = "fraction_changed";
ROUTE1619.fromNode = "Armature_Clock";
ROUTE1619.toField = "set_fraction";
ROUTE1619.toNode = "Armature_OI_l2";
children[278] = ROUTE1619;

ROUTE ROUTE1620 = createNode("ROUTE");
ROUTE1620.fromField = "value_changed";
ROUTE1620.fromNode = "Armature_OI_l2";
ROUTE1620.toField = "rotation";
ROUTE1620.toNode = "hanim_l2";
children[279] = ROUTE1620;

ROUTE ROUTE1621 = createNode("ROUTE");
ROUTE1621.fromField = "fraction_changed";
ROUTE1621.fromNode = "Armature_Clock";
ROUTE1621.toField = "set_fraction";
ROUTE1621.toNode = "Armature_OI_l1";
children[280] = ROUTE1621;

ROUTE ROUTE1622 = createNode("ROUTE");
ROUTE1622.fromField = "value_changed";
ROUTE1622.fromNode = "Armature_OI_l1";
ROUTE1622.toField = "rotation";
ROUTE1622.toNode = "hanim_l1";
children[281] = ROUTE1622;

ROUTE ROUTE1623 = createNode("ROUTE");
ROUTE1623.fromField = "fraction_changed";
ROUTE1623.fromNode = "Armature_Clock";
ROUTE1623.toField = "set_fraction";
ROUTE1623.toNode = "Armature_OI_t12";
children[282] = ROUTE1623;

ROUTE ROUTE1624 = createNode("ROUTE");
ROUTE1624.fromField = "value_changed";
ROUTE1624.fromNode = "Armature_OI_t12";
ROUTE1624.toField = "rotation";
ROUTE1624.toNode = "hanim_t12";
children[283] = ROUTE1624;

ROUTE ROUTE1625 = createNode("ROUTE");
ROUTE1625.fromField = "fraction_changed";
ROUTE1625.fromNode = "Armature_Clock";
ROUTE1625.toField = "set_fraction";
ROUTE1625.toNode = "Armature_OI_t11";
children[284] = ROUTE1625;

ROUTE ROUTE1626 = createNode("ROUTE");
ROUTE1626.fromField = "value_changed";
ROUTE1626.fromNode = "Armature_OI_t11";
ROUTE1626.toField = "rotation";
ROUTE1626.toNode = "hanim_t11";
children[285] = ROUTE1626;

ROUTE ROUTE1627 = createNode("ROUTE");
ROUTE1627.fromField = "fraction_changed";
ROUTE1627.fromNode = "Armature_Clock";
ROUTE1627.toField = "set_fraction";
ROUTE1627.toNode = "Armature_OI_t10";
children[286] = ROUTE1627;

ROUTE ROUTE1628 = createNode("ROUTE");
ROUTE1628.fromField = "value_changed";
ROUTE1628.fromNode = "Armature_OI_t10";
ROUTE1628.toField = "rotation";
ROUTE1628.toNode = "hanim_t10";
children[287] = ROUTE1628;

ROUTE ROUTE1629 = createNode("ROUTE");
ROUTE1629.fromField = "fraction_changed";
ROUTE1629.fromNode = "Armature_Clock";
ROUTE1629.toField = "set_fraction";
ROUTE1629.toNode = "Armature_OI_t9";
children[288] = ROUTE1629;

ROUTE ROUTE1630 = createNode("ROUTE");
ROUTE1630.fromField = "value_changed";
ROUTE1630.fromNode = "Armature_OI_t9";
ROUTE1630.toField = "rotation";
ROUTE1630.toNode = "hanim_t9";
children[289] = ROUTE1630;

ROUTE ROUTE1631 = createNode("ROUTE");
ROUTE1631.fromField = "fraction_changed";
ROUTE1631.fromNode = "Armature_Clock";
ROUTE1631.toField = "set_fraction";
ROUTE1631.toNode = "Armature_OI_t8";
children[290] = ROUTE1631;

ROUTE ROUTE1632 = createNode("ROUTE");
ROUTE1632.fromField = "value_changed";
ROUTE1632.fromNode = "Armature_OI_t8";
ROUTE1632.toField = "rotation";
ROUTE1632.toNode = "hanim_t8";
children[291] = ROUTE1632;

ROUTE ROUTE1633 = createNode("ROUTE");
ROUTE1633.fromField = "fraction_changed";
ROUTE1633.fromNode = "Armature_Clock";
ROUTE1633.toField = "set_fraction";
ROUTE1633.toNode = "Armature_OI_t7";
children[292] = ROUTE1633;

ROUTE ROUTE1634 = createNode("ROUTE");
ROUTE1634.fromField = "value_changed";
ROUTE1634.fromNode = "Armature_OI_t7";
ROUTE1634.toField = "rotation";
ROUTE1634.toNode = "hanim_t7";
children[293] = ROUTE1634;

ROUTE ROUTE1635 = createNode("ROUTE");
ROUTE1635.fromField = "fraction_changed";
ROUTE1635.fromNode = "Armature_Clock";
ROUTE1635.toField = "set_fraction";
ROUTE1635.toNode = "Armature_OI_t6";
children[294] = ROUTE1635;

ROUTE ROUTE1636 = createNode("ROUTE");
ROUTE1636.fromField = "value_changed";
ROUTE1636.fromNode = "Armature_OI_t6";
ROUTE1636.toField = "rotation";
ROUTE1636.toNode = "hanim_t6";
children[295] = ROUTE1636;

ROUTE ROUTE1637 = createNode("ROUTE");
ROUTE1637.fromField = "fraction_changed";
ROUTE1637.fromNode = "Armature_Clock";
ROUTE1637.toField = "set_fraction";
ROUTE1637.toNode = "Armature_OI_t5";
children[296] = ROUTE1637;

ROUTE ROUTE1638 = createNode("ROUTE");
ROUTE1638.fromField = "value_changed";
ROUTE1638.fromNode = "Armature_OI_t5";
ROUTE1638.toField = "rotation";
ROUTE1638.toNode = "hanim_t5";
children[297] = ROUTE1638;

ROUTE ROUTE1639 = createNode("ROUTE");
ROUTE1639.fromField = "fraction_changed";
ROUTE1639.fromNode = "Armature_Clock";
ROUTE1639.toField = "set_fraction";
ROUTE1639.toNode = "Armature_OI_t4";
children[298] = ROUTE1639;

ROUTE ROUTE1640 = createNode("ROUTE");
ROUTE1640.fromField = "value_changed";
ROUTE1640.fromNode = "Armature_OI_t4";
ROUTE1640.toField = "rotation";
ROUTE1640.toNode = "hanim_t4";
children[299] = ROUTE1640;

ROUTE ROUTE1641 = createNode("ROUTE");
ROUTE1641.fromField = "fraction_changed";
ROUTE1641.fromNode = "Armature_Clock";
ROUTE1641.toField = "set_fraction";
ROUTE1641.toNode = "Armature_OI_t3";
children[300] = ROUTE1641;

ROUTE ROUTE1642 = createNode("ROUTE");
ROUTE1642.fromField = "value_changed";
ROUTE1642.fromNode = "Armature_OI_t3";
ROUTE1642.toField = "rotation";
ROUTE1642.toNode = "hanim_t3";
children[301] = ROUTE1642;

ROUTE ROUTE1643 = createNode("ROUTE");
ROUTE1643.fromField = "fraction_changed";
ROUTE1643.fromNode = "Armature_Clock";
ROUTE1643.toField = "set_fraction";
ROUTE1643.toNode = "Armature_OI_t2";
children[302] = ROUTE1643;

ROUTE ROUTE1644 = createNode("ROUTE");
ROUTE1644.fromField = "value_changed";
ROUTE1644.fromNode = "Armature_OI_t2";
ROUTE1644.toField = "rotation";
ROUTE1644.toNode = "hanim_t2";
children[303] = ROUTE1644;

ROUTE ROUTE1645 = createNode("ROUTE");
ROUTE1645.fromField = "fraction_changed";
ROUTE1645.fromNode = "Armature_Clock";
ROUTE1645.toField = "set_fraction";
ROUTE1645.toNode = "Armature_OI_t1";
children[304] = ROUTE1645;

ROUTE ROUTE1646 = createNode("ROUTE");
ROUTE1646.fromField = "value_changed";
ROUTE1646.fromNode = "Armature_OI_t1";
ROUTE1646.toField = "rotation";
ROUTE1646.toNode = "hanim_t1";
children[305] = ROUTE1646;

ROUTE ROUTE1647 = createNode("ROUTE");
ROUTE1647.fromField = "fraction_changed";
ROUTE1647.fromNode = "Armature_Clock";
ROUTE1647.toField = "set_fraction";
ROUTE1647.toNode = "Armature_OI_c7";
children[306] = ROUTE1647;

ROUTE ROUTE1648 = createNode("ROUTE");
ROUTE1648.fromField = "value_changed";
ROUTE1648.fromNode = "Armature_OI_c7";
ROUTE1648.toField = "rotation";
ROUTE1648.toNode = "hanim_c7";
children[307] = ROUTE1648;

ROUTE ROUTE1649 = createNode("ROUTE");
ROUTE1649.fromField = "fraction_changed";
ROUTE1649.fromNode = "Armature_Clock";
ROUTE1649.toField = "set_fraction";
ROUTE1649.toNode = "Armature_OI_c6";
children[308] = ROUTE1649;

ROUTE ROUTE1650 = createNode("ROUTE");
ROUTE1650.fromField = "value_changed";
ROUTE1650.fromNode = "Armature_OI_c6";
ROUTE1650.toField = "rotation";
ROUTE1650.toNode = "hanim_c6";
children[309] = ROUTE1650;

ROUTE ROUTE1651 = createNode("ROUTE");
ROUTE1651.fromField = "fraction_changed";
ROUTE1651.fromNode = "Armature_Clock";
ROUTE1651.toField = "set_fraction";
ROUTE1651.toNode = "Armature_OI_c5";
children[310] = ROUTE1651;

ROUTE ROUTE1652 = createNode("ROUTE");
ROUTE1652.fromField = "value_changed";
ROUTE1652.fromNode = "Armature_OI_c5";
ROUTE1652.toField = "rotation";
ROUTE1652.toNode = "hanim_c5";
children[311] = ROUTE1652;

ROUTE ROUTE1653 = createNode("ROUTE");
ROUTE1653.fromField = "fraction_changed";
ROUTE1653.fromNode = "Armature_Clock";
ROUTE1653.toField = "set_fraction";
ROUTE1653.toNode = "Armature_OI_c4";
children[312] = ROUTE1653;

ROUTE ROUTE1654 = createNode("ROUTE");
ROUTE1654.fromField = "value_changed";
ROUTE1654.fromNode = "Armature_OI_c4";
ROUTE1654.toField = "rotation";
ROUTE1654.toNode = "hanim_c4";
children[313] = ROUTE1654;

ROUTE ROUTE1655 = createNode("ROUTE");
ROUTE1655.fromField = "fraction_changed";
ROUTE1655.fromNode = "Armature_Clock";
ROUTE1655.toField = "set_fraction";
ROUTE1655.toNode = "Armature_OI_c3";
children[314] = ROUTE1655;

ROUTE ROUTE1656 = createNode("ROUTE");
ROUTE1656.fromField = "value_changed";
ROUTE1656.fromNode = "Armature_OI_c3";
ROUTE1656.toField = "rotation";
ROUTE1656.toNode = "hanim_c3";
children[315] = ROUTE1656;

ROUTE ROUTE1657 = createNode("ROUTE");
ROUTE1657.fromField = "fraction_changed";
ROUTE1657.fromNode = "Armature_Clock";
ROUTE1657.toField = "set_fraction";
ROUTE1657.toNode = "Armature_OI_c2";
children[316] = ROUTE1657;

ROUTE ROUTE1658 = createNode("ROUTE");
ROUTE1658.fromField = "value_changed";
ROUTE1658.fromNode = "Armature_OI_c2";
ROUTE1658.toField = "rotation";
ROUTE1658.toNode = "hanim_c2";
children[317] = ROUTE1658;

ROUTE ROUTE1659 = createNode("ROUTE");
ROUTE1659.fromField = "fraction_changed";
ROUTE1659.fromNode = "Armature_Clock";
ROUTE1659.toField = "set_fraction";
ROUTE1659.toNode = "Armature_OI_c1";
children[318] = ROUTE1659;

ROUTE ROUTE1660 = createNode("ROUTE");
ROUTE1660.fromField = "value_changed";
ROUTE1660.fromNode = "Armature_OI_c1";
ROUTE1660.toField = "rotation";
ROUTE1660.toNode = "hanim_c1";
children[319] = ROUTE1660;

ROUTE ROUTE1661 = createNode("ROUTE");
ROUTE1661.fromField = "fraction_changed";
ROUTE1661.fromNode = "Armature_Clock";
ROUTE1661.toField = "set_fraction";
ROUTE1661.toNode = "Armature_OI_skull";
children[320] = ROUTE1661;

ROUTE ROUTE1662 = createNode("ROUTE");
ROUTE1662.fromField = "value_changed";
ROUTE1662.fromNode = "Armature_OI_skull";
ROUTE1662.toField = "rotation";
ROUTE1662.toNode = "hanim_skull";
children[321] = ROUTE1662;

ROUTE ROUTE1663 = createNode("ROUTE");
ROUTE1663.fromField = "fraction_changed";
ROUTE1663.fromNode = "Armature_Clock";
ROUTE1663.toField = "set_fraction";
ROUTE1663.toNode = "Armature_OI_l_eyelid";
children[322] = ROUTE1663;

ROUTE ROUTE1664 = createNode("ROUTE");
ROUTE1664.fromField = "value_changed";
ROUTE1664.fromNode = "Armature_OI_l_eyelid";
ROUTE1664.toField = "rotation";
ROUTE1664.toNode = "hanim_l_eyelid";
children[323] = ROUTE1664;

ROUTE ROUTE1665 = createNode("ROUTE");
ROUTE1665.fromField = "fraction_changed";
ROUTE1665.fromNode = "Armature_Clock";
ROUTE1665.toField = "set_fraction";
ROUTE1665.toNode = "Armature_OI_r_eyelid";
children[324] = ROUTE1665;

ROUTE ROUTE1666 = createNode("ROUTE");
ROUTE1666.fromField = "value_changed";
ROUTE1666.fromNode = "Armature_OI_r_eyelid";
ROUTE1666.toField = "rotation";
ROUTE1666.toNode = "hanim_r_eyelid";
children[325] = ROUTE1666;

ROUTE ROUTE1667 = createNode("ROUTE");
ROUTE1667.fromField = "fraction_changed";
ROUTE1667.fromNode = "Armature_Clock";
ROUTE1667.toField = "set_fraction";
ROUTE1667.toNode = "Armature_OI_l_eyeball";
children[326] = ROUTE1667;

ROUTE ROUTE1668 = createNode("ROUTE");
ROUTE1668.fromField = "value_changed";
ROUTE1668.fromNode = "Armature_OI_l_eyeball";
ROUTE1668.toField = "rotation";
ROUTE1668.toNode = "hanim_l_eyeball";
children[327] = ROUTE1668;

ROUTE ROUTE1669 = createNode("ROUTE");
ROUTE1669.fromField = "fraction_changed";
ROUTE1669.fromNode = "Armature_Clock";
ROUTE1669.toField = "set_fraction";
ROUTE1669.toNode = "Armature_OI_r_eyeball";
children[328] = ROUTE1669;

ROUTE ROUTE1670 = createNode("ROUTE");
ROUTE1670.fromField = "value_changed";
ROUTE1670.fromNode = "Armature_OI_r_eyeball";
ROUTE1670.toField = "rotation";
ROUTE1670.toNode = "hanim_r_eyeball";
children[329] = ROUTE1670;

ROUTE ROUTE1671 = createNode("ROUTE");
ROUTE1671.fromField = "fraction_changed";
ROUTE1671.fromNode = "Armature_Clock";
ROUTE1671.toField = "set_fraction";
ROUTE1671.toNode = "Armature_OI_l_eyebrow";
children[330] = ROUTE1671;

ROUTE ROUTE1672 = createNode("ROUTE");
ROUTE1672.fromField = "value_changed";
ROUTE1672.fromNode = "Armature_OI_l_eyebrow";
ROUTE1672.toField = "rotation";
ROUTE1672.toNode = "hanim_l_eyebrow";
children[331] = ROUTE1672;

ROUTE ROUTE1673 = createNode("ROUTE");
ROUTE1673.fromField = "fraction_changed";
ROUTE1673.fromNode = "Armature_Clock";
ROUTE1673.toField = "set_fraction";
ROUTE1673.toNode = "Armature_OI_r_eyebrow";
children[332] = ROUTE1673;

ROUTE ROUTE1674 = createNode("ROUTE");
ROUTE1674.fromField = "value_changed";
ROUTE1674.fromNode = "Armature_OI_r_eyebrow";
ROUTE1674.toField = "rotation";
ROUTE1674.toNode = "hanim_r_eyebrow";
children[333] = ROUTE1674;

ROUTE ROUTE1675 = createNode("ROUTE");
ROUTE1675.fromField = "fraction_changed";
ROUTE1675.fromNode = "Armature_Clock";
ROUTE1675.toField = "set_fraction";
ROUTE1675.toNode = "Armature_OI_jaw";
children[334] = ROUTE1675;

ROUTE ROUTE1676 = createNode("ROUTE");
ROUTE1676.fromField = "value_changed";
ROUTE1676.fromNode = "Armature_OI_jaw";
ROUTE1676.toField = "rotation";
ROUTE1676.toNode = "hanim_jaw";
children[335] = ROUTE1676;

ROUTE ROUTE1677 = createNode("ROUTE");
ROUTE1677.fromField = "fraction_changed";
ROUTE1677.fromNode = "Armature_Clock";
ROUTE1677.toField = "set_fraction";
ROUTE1677.toNode = "Armature_OI_l_clavicle";
children[336] = ROUTE1677;

ROUTE ROUTE1678 = createNode("ROUTE");
ROUTE1678.fromField = "value_changed";
ROUTE1678.fromNode = "Armature_OI_l_clavicle";
ROUTE1678.toField = "rotation";
ROUTE1678.toNode = "hanim_l_clavicle";
children[337] = ROUTE1678;

ROUTE ROUTE1679 = createNode("ROUTE");
ROUTE1679.fromField = "fraction_changed";
ROUTE1679.fromNode = "Armature_Clock";
ROUTE1679.toField = "set_fraction";
ROUTE1679.toNode = "Armature_OI_l_scapula";
children[338] = ROUTE1679;

ROUTE ROUTE1680 = createNode("ROUTE");
ROUTE1680.fromField = "value_changed";
ROUTE1680.fromNode = "Armature_OI_l_scapula";
ROUTE1680.toField = "rotation";
ROUTE1680.toNode = "hanim_l_scapula";
children[339] = ROUTE1680;

ROUTE ROUTE1681 = createNode("ROUTE");
ROUTE1681.fromField = "fraction_changed";
ROUTE1681.fromNode = "Armature_Clock";
ROUTE1681.toField = "set_fraction";
ROUTE1681.toNode = "Armature_OI_l_upperarm";
children[340] = ROUTE1681;

ROUTE ROUTE1682 = createNode("ROUTE");
ROUTE1682.fromField = "value_changed";
ROUTE1682.fromNode = "Armature_OI_l_upperarm";
ROUTE1682.toField = "rotation";
ROUTE1682.toNode = "hanim_l_upperarm";
children[341] = ROUTE1682;

ROUTE ROUTE1683 = createNode("ROUTE");
ROUTE1683.fromField = "fraction_changed";
ROUTE1683.fromNode = "Armature_Clock";
ROUTE1683.toField = "set_fraction";
ROUTE1683.toNode = "Armature_OI_l_forearm";
children[342] = ROUTE1683;

ROUTE ROUTE1684 = createNode("ROUTE");
ROUTE1684.fromField = "value_changed";
ROUTE1684.fromNode = "Armature_OI_l_forearm";
ROUTE1684.toField = "rotation";
ROUTE1684.toNode = "hanim_l_forearm";
children[343] = ROUTE1684;

ROUTE ROUTE1685 = createNode("ROUTE");
ROUTE1685.fromField = "fraction_changed";
ROUTE1685.fromNode = "Armature_Clock";
ROUTE1685.toField = "set_fraction";
ROUTE1685.toNode = "Armature_OI_l_carpal";
children[344] = ROUTE1685;

ROUTE ROUTE1686 = createNode("ROUTE");
ROUTE1686.fromField = "value_changed";
ROUTE1686.fromNode = "Armature_OI_l_carpal";
ROUTE1686.toField = "rotation";
ROUTE1686.toNode = "hanim_l_carpal";
children[345] = ROUTE1686;

ROUTE ROUTE1687 = createNode("ROUTE");
ROUTE1687.fromField = "fraction_changed";
ROUTE1687.fromNode = "Armature_Clock";
ROUTE1687.toField = "set_fraction";
ROUTE1687.toNode = "Armature_OI_l_trapezium";
children[346] = ROUTE1687;

ROUTE ROUTE1688 = createNode("ROUTE");
ROUTE1688.fromField = "value_changed";
ROUTE1688.fromNode = "Armature_OI_l_trapezium";
ROUTE1688.toField = "rotation";
ROUTE1688.toNode = "hanim_l_trapezium";
children[347] = ROUTE1688;

ROUTE ROUTE1689 = createNode("ROUTE");
ROUTE1689.fromField = "fraction_changed";
ROUTE1689.fromNode = "Armature_Clock";
ROUTE1689.toField = "set_fraction";
ROUTE1689.toNode = "Armature_OI_l_metacarpal_1";
children[348] = ROUTE1689;

ROUTE ROUTE1690 = createNode("ROUTE");
ROUTE1690.fromField = "value_changed";
ROUTE1690.fromNode = "Armature_OI_l_metacarpal_1";
ROUTE1690.toField = "rotation";
ROUTE1690.toNode = "hanim_l_metacarpal_1";
children[349] = ROUTE1690;

ROUTE ROUTE1691 = createNode("ROUTE");
ROUTE1691.fromField = "fraction_changed";
ROUTE1691.fromNode = "Armature_Clock";
ROUTE1691.toField = "set_fraction";
ROUTE1691.toNode = "Armature_OI_l_carpal_proximal_phalanx_1";
children[350] = ROUTE1691;

ROUTE ROUTE1692 = createNode("ROUTE");
ROUTE1692.fromField = "value_changed";
ROUTE1692.fromNode = "Armature_OI_l_carpal_proximal_phalanx_1";
ROUTE1692.toField = "rotation";
ROUTE1692.toNode = "hanim_l_carpal_proximal_phalanx_1";
children[351] = ROUTE1692;

ROUTE ROUTE1693 = createNode("ROUTE");
ROUTE1693.fromField = "fraction_changed";
ROUTE1693.fromNode = "Armature_Clock";
ROUTE1693.toField = "set_fraction";
ROUTE1693.toNode = "Armature_OI_l_carpal_distal_phalanx_1";
children[352] = ROUTE1693;

ROUTE ROUTE1694 = createNode("ROUTE");
ROUTE1694.fromField = "value_changed";
ROUTE1694.fromNode = "Armature_OI_l_carpal_distal_phalanx_1";
ROUTE1694.toField = "rotation";
ROUTE1694.toNode = "hanim_l_carpal_distal_phalanx_1";
children[353] = ROUTE1694;

ROUTE ROUTE1695 = createNode("ROUTE");
ROUTE1695.fromField = "fraction_changed";
ROUTE1695.fromNode = "Armature_Clock";
ROUTE1695.toField = "set_fraction";
ROUTE1695.toNode = "Armature_OI_l_trapezoid";
children[354] = ROUTE1695;

ROUTE ROUTE1696 = createNode("ROUTE");
ROUTE1696.fromField = "value_changed";
ROUTE1696.fromNode = "Armature_OI_l_trapezoid";
ROUTE1696.toField = "rotation";
ROUTE1696.toNode = "hanim_l_trapezoid";
children[355] = ROUTE1696;

ROUTE ROUTE1697 = createNode("ROUTE");
ROUTE1697.fromField = "fraction_changed";
ROUTE1697.fromNode = "Armature_Clock";
ROUTE1697.toField = "set_fraction";
ROUTE1697.toNode = "Armature_OI_l_metacarpal_2";
children[356] = ROUTE1697;

ROUTE ROUTE1698 = createNode("ROUTE");
ROUTE1698.fromField = "value_changed";
ROUTE1698.fromNode = "Armature_OI_l_metacarpal_2";
ROUTE1698.toField = "rotation";
ROUTE1698.toNode = "hanim_l_metacarpal_2";
children[357] = ROUTE1698;

ROUTE ROUTE1699 = createNode("ROUTE");
ROUTE1699.fromField = "fraction_changed";
ROUTE1699.fromNode = "Armature_Clock";
ROUTE1699.toField = "set_fraction";
ROUTE1699.toNode = "Armature_OI_l_carpal_proximal_phalanx_2";
children[358] = ROUTE1699;

ROUTE ROUTE1700 = createNode("ROUTE");
ROUTE1700.fromField = "value_changed";
ROUTE1700.fromNode = "Armature_OI_l_carpal_proximal_phalanx_2";
ROUTE1700.toField = "rotation";
ROUTE1700.toNode = "hanim_l_carpal_proximal_phalanx_2";
children[359] = ROUTE1700;

ROUTE ROUTE1701 = createNode("ROUTE");
ROUTE1701.fromField = "fraction_changed";
ROUTE1701.fromNode = "Armature_Clock";
ROUTE1701.toField = "set_fraction";
ROUTE1701.toNode = "Armature_OI_l_carpal_middle_phalanx_2";
children[360] = ROUTE1701;

ROUTE ROUTE1702 = createNode("ROUTE");
ROUTE1702.fromField = "value_changed";
ROUTE1702.fromNode = "Armature_OI_l_carpal_middle_phalanx_2";
ROUTE1702.toField = "rotation";
ROUTE1702.toNode = "hanim_l_carpal_middle_phalanx_2";
children[361] = ROUTE1702;

ROUTE ROUTE1703 = createNode("ROUTE");
ROUTE1703.fromField = "fraction_changed";
ROUTE1703.fromNode = "Armature_Clock";
ROUTE1703.toField = "set_fraction";
ROUTE1703.toNode = "Armature_OI_l_carpal_distal_phalanx_2";
children[362] = ROUTE1703;

ROUTE ROUTE1704 = createNode("ROUTE");
ROUTE1704.fromField = "value_changed";
ROUTE1704.fromNode = "Armature_OI_l_carpal_distal_phalanx_2";
ROUTE1704.toField = "rotation";
ROUTE1704.toNode = "hanim_l_carpal_distal_phalanx_2";
children[363] = ROUTE1704;

ROUTE ROUTE1705 = createNode("ROUTE");
ROUTE1705.fromField = "fraction_changed";
ROUTE1705.fromNode = "Armature_Clock";
ROUTE1705.toField = "set_fraction";
ROUTE1705.toNode = "Armature_OI_l_capitate";
children[364] = ROUTE1705;

ROUTE ROUTE1706 = createNode("ROUTE");
ROUTE1706.fromField = "value_changed";
ROUTE1706.fromNode = "Armature_OI_l_capitate";
ROUTE1706.toField = "rotation";
ROUTE1706.toNode = "hanim_l_capitate";
children[365] = ROUTE1706;

ROUTE ROUTE1707 = createNode("ROUTE");
ROUTE1707.fromField = "fraction_changed";
ROUTE1707.fromNode = "Armature_Clock";
ROUTE1707.toField = "set_fraction";
ROUTE1707.toNode = "Armature_OI_l_metacarpal_3";
children[366] = ROUTE1707;

ROUTE ROUTE1708 = createNode("ROUTE");
ROUTE1708.fromField = "value_changed";
ROUTE1708.fromNode = "Armature_OI_l_metacarpal_3";
ROUTE1708.toField = "rotation";
ROUTE1708.toNode = "hanim_l_metacarpal_3";
children[367] = ROUTE1708;

ROUTE ROUTE1709 = createNode("ROUTE");
ROUTE1709.fromField = "fraction_changed";
ROUTE1709.fromNode = "Armature_Clock";
ROUTE1709.toField = "set_fraction";
ROUTE1709.toNode = "Armature_OI_l_carpal_proximal_phalanx_3";
children[368] = ROUTE1709;

ROUTE ROUTE1710 = createNode("ROUTE");
ROUTE1710.fromField = "value_changed";
ROUTE1710.fromNode = "Armature_OI_l_carpal_proximal_phalanx_3";
ROUTE1710.toField = "rotation";
ROUTE1710.toNode = "hanim_l_carpal_proximal_phalanx_3";
children[369] = ROUTE1710;

ROUTE ROUTE1711 = createNode("ROUTE");
ROUTE1711.fromField = "fraction_changed";
ROUTE1711.fromNode = "Armature_Clock";
ROUTE1711.toField = "set_fraction";
ROUTE1711.toNode = "Armature_OI_l_carpal_middle_phalanx_3";
children[370] = ROUTE1711;

ROUTE ROUTE1712 = createNode("ROUTE");
ROUTE1712.fromField = "value_changed";
ROUTE1712.fromNode = "Armature_OI_l_carpal_middle_phalanx_3";
ROUTE1712.toField = "rotation";
ROUTE1712.toNode = "hanim_l_carpal_middle_phalanx_3";
children[371] = ROUTE1712;

ROUTE ROUTE1713 = createNode("ROUTE");
ROUTE1713.fromField = "fraction_changed";
ROUTE1713.fromNode = "Armature_Clock";
ROUTE1713.toField = "set_fraction";
ROUTE1713.toNode = "Armature_OI_l_carpal_distal_phalanx_3";
children[372] = ROUTE1713;

ROUTE ROUTE1714 = createNode("ROUTE");
ROUTE1714.fromField = "value_changed";
ROUTE1714.fromNode = "Armature_OI_l_carpal_distal_phalanx_3";
ROUTE1714.toField = "rotation";
ROUTE1714.toNode = "hanim_l_carpal_distal_phalanx_3";
children[373] = ROUTE1714;

ROUTE ROUTE1715 = createNode("ROUTE");
ROUTE1715.fromField = "fraction_changed";
ROUTE1715.fromNode = "Armature_Clock";
ROUTE1715.toField = "set_fraction";
ROUTE1715.toNode = "Armature_OI_l_hamate";
children[374] = ROUTE1715;

ROUTE ROUTE1716 = createNode("ROUTE");
ROUTE1716.fromField = "value_changed";
ROUTE1716.fromNode = "Armature_OI_l_hamate";
ROUTE1716.toField = "rotation";
ROUTE1716.toNode = "hanim_l_hamate";
children[375] = ROUTE1716;

ROUTE ROUTE1717 = createNode("ROUTE");
ROUTE1717.fromField = "fraction_changed";
ROUTE1717.fromNode = "Armature_Clock";
ROUTE1717.toField = "set_fraction";
ROUTE1717.toNode = "Armature_OI_l_metacarpal_4";
children[376] = ROUTE1717;

ROUTE ROUTE1718 = createNode("ROUTE");
ROUTE1718.fromField = "value_changed";
ROUTE1718.fromNode = "Armature_OI_l_metacarpal_4";
ROUTE1718.toField = "rotation";
ROUTE1718.toNode = "hanim_l_metacarpal_4";
children[377] = ROUTE1718;

ROUTE ROUTE1719 = createNode("ROUTE");
ROUTE1719.fromField = "fraction_changed";
ROUTE1719.fromNode = "Armature_Clock";
ROUTE1719.toField = "set_fraction";
ROUTE1719.toNode = "Armature_OI_l_carpal_proximal_phalanx_4";
children[378] = ROUTE1719;

ROUTE ROUTE1720 = createNode("ROUTE");
ROUTE1720.fromField = "value_changed";
ROUTE1720.fromNode = "Armature_OI_l_carpal_proximal_phalanx_4";
ROUTE1720.toField = "rotation";
ROUTE1720.toNode = "hanim_l_carpal_proximal_phalanx_4";
children[379] = ROUTE1720;

ROUTE ROUTE1721 = createNode("ROUTE");
ROUTE1721.fromField = "fraction_changed";
ROUTE1721.fromNode = "Armature_Clock";
ROUTE1721.toField = "set_fraction";
ROUTE1721.toNode = "Armature_OI_l_carpal_middle_phalanx_4";
children[380] = ROUTE1721;

ROUTE ROUTE1722 = createNode("ROUTE");
ROUTE1722.fromField = "value_changed";
ROUTE1722.fromNode = "Armature_OI_l_carpal_middle_phalanx_4";
ROUTE1722.toField = "rotation";
ROUTE1722.toNode = "hanim_l_carpal_middle_phalanx_4";
children[381] = ROUTE1722;

ROUTE ROUTE1723 = createNode("ROUTE");
ROUTE1723.fromField = "fraction_changed";
ROUTE1723.fromNode = "Armature_Clock";
ROUTE1723.toField = "set_fraction";
ROUTE1723.toNode = "Armature_OI_l_carpal_distal_phalanx_4";
children[382] = ROUTE1723;

ROUTE ROUTE1724 = createNode("ROUTE");
ROUTE1724.fromField = "value_changed";
ROUTE1724.fromNode = "Armature_OI_l_carpal_distal_phalanx_4";
ROUTE1724.toField = "rotation";
ROUTE1724.toNode = "hanim_l_carpal_distal_phalanx_4";
children[383] = ROUTE1724;

ROUTE ROUTE1725 = createNode("ROUTE");
ROUTE1725.fromField = "fraction_changed";
ROUTE1725.fromNode = "Armature_Clock";
ROUTE1725.toField = "set_fraction";
ROUTE1725.toNode = "Armature_OI_l_metacarpal_5";
children[384] = ROUTE1725;

ROUTE ROUTE1726 = createNode("ROUTE");
ROUTE1726.fromField = "value_changed";
ROUTE1726.fromNode = "Armature_OI_l_metacarpal_5";
ROUTE1726.toField = "rotation";
ROUTE1726.toNode = "hanim_l_metacarpal_5";
children[385] = ROUTE1726;

ROUTE ROUTE1727 = createNode("ROUTE");
ROUTE1727.fromField = "fraction_changed";
ROUTE1727.fromNode = "Armature_Clock";
ROUTE1727.toField = "set_fraction";
ROUTE1727.toNode = "Armature_OI_l_carpal_proximal_phalanx_5";
children[386] = ROUTE1727;

ROUTE ROUTE1728 = createNode("ROUTE");
ROUTE1728.fromField = "value_changed";
ROUTE1728.fromNode = "Armature_OI_l_carpal_proximal_phalanx_5";
ROUTE1728.toField = "rotation";
ROUTE1728.toNode = "hanim_l_carpal_proximal_phalanx_5";
children[387] = ROUTE1728;

ROUTE ROUTE1729 = createNode("ROUTE");
ROUTE1729.fromField = "fraction_changed";
ROUTE1729.fromNode = "Armature_Clock";
ROUTE1729.toField = "set_fraction";
ROUTE1729.toNode = "Armature_OI_l_carpal_middle_phalanx_5";
children[388] = ROUTE1729;

ROUTE ROUTE1730 = createNode("ROUTE");
ROUTE1730.fromField = "value_changed";
ROUTE1730.fromNode = "Armature_OI_l_carpal_middle_phalanx_5";
ROUTE1730.toField = "rotation";
ROUTE1730.toNode = "hanim_l_carpal_middle_phalanx_5";
children[389] = ROUTE1730;

ROUTE ROUTE1731 = createNode("ROUTE");
ROUTE1731.fromField = "fraction_changed";
ROUTE1731.fromNode = "Armature_Clock";
ROUTE1731.toField = "set_fraction";
ROUTE1731.toNode = "Armature_OI_l_carpal_distal_phalanx_5";
children[390] = ROUTE1731;

ROUTE ROUTE1732 = createNode("ROUTE");
ROUTE1732.fromField = "value_changed";
ROUTE1732.fromNode = "Armature_OI_l_carpal_distal_phalanx_5";
ROUTE1732.toField = "rotation";
ROUTE1732.toNode = "hanim_l_carpal_distal_phalanx_5";
children[391] = ROUTE1732;

ROUTE ROUTE1733 = createNode("ROUTE");
ROUTE1733.fromField = "fraction_changed";
ROUTE1733.fromNode = "Armature_Clock";
ROUTE1733.toField = "set_fraction";
ROUTE1733.toNode = "Armature_OI_r_clavicle";
children[392] = ROUTE1733;

ROUTE ROUTE1734 = createNode("ROUTE");
ROUTE1734.fromField = "value_changed";
ROUTE1734.fromNode = "Armature_OI_r_clavicle";
ROUTE1734.toField = "rotation";
ROUTE1734.toNode = "hanim_r_clavicle";
children[393] = ROUTE1734;

ROUTE ROUTE1735 = createNode("ROUTE");
ROUTE1735.fromField = "fraction_changed";
ROUTE1735.fromNode = "Armature_Clock";
ROUTE1735.toField = "set_fraction";
ROUTE1735.toNode = "Armature_OI_r_scapula";
children[394] = ROUTE1735;

ROUTE ROUTE1736 = createNode("ROUTE");
ROUTE1736.fromField = "value_changed";
ROUTE1736.fromNode = "Armature_OI_r_scapula";
ROUTE1736.toField = "rotation";
ROUTE1736.toNode = "hanim_r_scapula";
children[395] = ROUTE1736;

ROUTE ROUTE1737 = createNode("ROUTE");
ROUTE1737.fromField = "fraction_changed";
ROUTE1737.fromNode = "Armature_Clock";
ROUTE1737.toField = "set_fraction";
ROUTE1737.toNode = "Armature_OI_r_upperarm";
children[396] = ROUTE1737;

ROUTE ROUTE1738 = createNode("ROUTE");
ROUTE1738.fromField = "value_changed";
ROUTE1738.fromNode = "Armature_OI_r_upperarm";
ROUTE1738.toField = "rotation";
ROUTE1738.toNode = "hanim_r_upperarm";
children[397] = ROUTE1738;

ROUTE ROUTE1739 = createNode("ROUTE");
ROUTE1739.fromField = "fraction_changed";
ROUTE1739.fromNode = "Armature_Clock";
ROUTE1739.toField = "set_fraction";
ROUTE1739.toNode = "Armature_OI_r_forearm";
children[398] = ROUTE1739;

ROUTE ROUTE1740 = createNode("ROUTE");
ROUTE1740.fromField = "value_changed";
ROUTE1740.fromNode = "Armature_OI_r_forearm";
ROUTE1740.toField = "rotation";
ROUTE1740.toNode = "hanim_r_forearm";
children[399] = ROUTE1740;

ROUTE ROUTE1741 = createNode("ROUTE");
ROUTE1741.fromField = "fraction_changed";
ROUTE1741.fromNode = "Armature_Clock";
ROUTE1741.toField = "set_fraction";
ROUTE1741.toNode = "Armature_OI_r_carpal";
children[400] = ROUTE1741;

ROUTE ROUTE1742 = createNode("ROUTE");
ROUTE1742.fromField = "value_changed";
ROUTE1742.fromNode = "Armature_OI_r_carpal";
ROUTE1742.toField = "rotation";
ROUTE1742.toNode = "hanim_r_carpal";
children[401] = ROUTE1742;

ROUTE ROUTE1743 = createNode("ROUTE");
ROUTE1743.fromField = "fraction_changed";
ROUTE1743.fromNode = "Armature_Clock";
ROUTE1743.toField = "set_fraction";
ROUTE1743.toNode = "Armature_OI_r_trapezium";
children[402] = ROUTE1743;

ROUTE ROUTE1744 = createNode("ROUTE");
ROUTE1744.fromField = "value_changed";
ROUTE1744.fromNode = "Armature_OI_r_trapezium";
ROUTE1744.toField = "rotation";
ROUTE1744.toNode = "hanim_r_trapezium";
children[403] = ROUTE1744;

ROUTE ROUTE1745 = createNode("ROUTE");
ROUTE1745.fromField = "fraction_changed";
ROUTE1745.fromNode = "Armature_Clock";
ROUTE1745.toField = "set_fraction";
ROUTE1745.toNode = "Armature_OI_r_metacarpal_1";
children[404] = ROUTE1745;

ROUTE ROUTE1746 = createNode("ROUTE");
ROUTE1746.fromField = "value_changed";
ROUTE1746.fromNode = "Armature_OI_r_metacarpal_1";
ROUTE1746.toField = "rotation";
ROUTE1746.toNode = "hanim_r_metacarpal_1";
children[405] = ROUTE1746;

ROUTE ROUTE1747 = createNode("ROUTE");
ROUTE1747.fromField = "fraction_changed";
ROUTE1747.fromNode = "Armature_Clock";
ROUTE1747.toField = "set_fraction";
ROUTE1747.toNode = "Armature_OI_r_carpal_proximal_phalanx_1";
children[406] = ROUTE1747;

ROUTE ROUTE1748 = createNode("ROUTE");
ROUTE1748.fromField = "value_changed";
ROUTE1748.fromNode = "Armature_OI_r_carpal_proximal_phalanx_1";
ROUTE1748.toField = "rotation";
ROUTE1748.toNode = "hanim_r_carpal_proximal_phalanx_1";
children[407] = ROUTE1748;

ROUTE ROUTE1749 = createNode("ROUTE");
ROUTE1749.fromField = "fraction_changed";
ROUTE1749.fromNode = "Armature_Clock";
ROUTE1749.toField = "set_fraction";
ROUTE1749.toNode = "Armature_OI_r_carpal_distal_phalanx_1";
children[408] = ROUTE1749;

ROUTE ROUTE1750 = createNode("ROUTE");
ROUTE1750.fromField = "value_changed";
ROUTE1750.fromNode = "Armature_OI_r_carpal_distal_phalanx_1";
ROUTE1750.toField = "rotation";
ROUTE1750.toNode = "hanim_r_carpal_distal_phalanx_1";
children[409] = ROUTE1750;

ROUTE ROUTE1751 = createNode("ROUTE");
ROUTE1751.fromField = "fraction_changed";
ROUTE1751.fromNode = "Armature_Clock";
ROUTE1751.toField = "set_fraction";
ROUTE1751.toNode = "Armature_OI_r_trapezoid";
children[410] = ROUTE1751;

ROUTE ROUTE1752 = createNode("ROUTE");
ROUTE1752.fromField = "value_changed";
ROUTE1752.fromNode = "Armature_OI_r_trapezoid";
ROUTE1752.toField = "rotation";
ROUTE1752.toNode = "hanim_r_trapezoid";
children[411] = ROUTE1752;

ROUTE ROUTE1753 = createNode("ROUTE");
ROUTE1753.fromField = "fraction_changed";
ROUTE1753.fromNode = "Armature_Clock";
ROUTE1753.toField = "set_fraction";
ROUTE1753.toNode = "Armature_OI_r_metacarpal_2";
children[412] = ROUTE1753;

ROUTE ROUTE1754 = createNode("ROUTE");
ROUTE1754.fromField = "value_changed";
ROUTE1754.fromNode = "Armature_OI_r_metacarpal_2";
ROUTE1754.toField = "rotation";
ROUTE1754.toNode = "hanim_r_metacarpal_2";
children[413] = ROUTE1754;

ROUTE ROUTE1755 = createNode("ROUTE");
ROUTE1755.fromField = "fraction_changed";
ROUTE1755.fromNode = "Armature_Clock";
ROUTE1755.toField = "set_fraction";
ROUTE1755.toNode = "Armature_OI_r_carpal_proximal_phalanx_2";
children[414] = ROUTE1755;

ROUTE ROUTE1756 = createNode("ROUTE");
ROUTE1756.fromField = "value_changed";
ROUTE1756.fromNode = "Armature_OI_r_carpal_proximal_phalanx_2";
ROUTE1756.toField = "rotation";
ROUTE1756.toNode = "hanim_r_carpal_proximal_phalanx_2";
children[415] = ROUTE1756;

ROUTE ROUTE1757 = createNode("ROUTE");
ROUTE1757.fromField = "fraction_changed";
ROUTE1757.fromNode = "Armature_Clock";
ROUTE1757.toField = "set_fraction";
ROUTE1757.toNode = "Armature_OI_r_carpal_middle_phalanx_2";
children[416] = ROUTE1757;

ROUTE ROUTE1758 = createNode("ROUTE");
ROUTE1758.fromField = "value_changed";
ROUTE1758.fromNode = "Armature_OI_r_carpal_middle_phalanx_2";
ROUTE1758.toField = "rotation";
ROUTE1758.toNode = "hanim_r_carpal_middle_phalanx_2";
children[417] = ROUTE1758;

ROUTE ROUTE1759 = createNode("ROUTE");
ROUTE1759.fromField = "fraction_changed";
ROUTE1759.fromNode = "Armature_Clock";
ROUTE1759.toField = "set_fraction";
ROUTE1759.toNode = "Armature_OI_r_carpal_distal_phalanx_2";
children[418] = ROUTE1759;

ROUTE ROUTE1760 = createNode("ROUTE");
ROUTE1760.fromField = "value_changed";
ROUTE1760.fromNode = "Armature_OI_r_carpal_distal_phalanx_2";
ROUTE1760.toField = "rotation";
ROUTE1760.toNode = "hanim_r_carpal_distal_phalanx_2";
children[419] = ROUTE1760;

ROUTE ROUTE1761 = createNode("ROUTE");
ROUTE1761.fromField = "fraction_changed";
ROUTE1761.fromNode = "Armature_Clock";
ROUTE1761.toField = "set_fraction";
ROUTE1761.toNode = "Armature_OI_r_capitate";
children[420] = ROUTE1761;

ROUTE ROUTE1762 = createNode("ROUTE");
ROUTE1762.fromField = "value_changed";
ROUTE1762.fromNode = "Armature_OI_r_capitate";
ROUTE1762.toField = "rotation";
ROUTE1762.toNode = "hanim_r_capitate";
children[421] = ROUTE1762;

ROUTE ROUTE1763 = createNode("ROUTE");
ROUTE1763.fromField = "fraction_changed";
ROUTE1763.fromNode = "Armature_Clock";
ROUTE1763.toField = "set_fraction";
ROUTE1763.toNode = "Armature_OI_r_metacarpal_3";
children[422] = ROUTE1763;

ROUTE ROUTE1764 = createNode("ROUTE");
ROUTE1764.fromField = "value_changed";
ROUTE1764.fromNode = "Armature_OI_r_metacarpal_3";
ROUTE1764.toField = "rotation";
ROUTE1764.toNode = "hanim_r_metacarpal_3";
children[423] = ROUTE1764;

ROUTE ROUTE1765 = createNode("ROUTE");
ROUTE1765.fromField = "fraction_changed";
ROUTE1765.fromNode = "Armature_Clock";
ROUTE1765.toField = "set_fraction";
ROUTE1765.toNode = "Armature_OI_r_carpal_proximal_phalanx_3";
children[424] = ROUTE1765;

ROUTE ROUTE1766 = createNode("ROUTE");
ROUTE1766.fromField = "value_changed";
ROUTE1766.fromNode = "Armature_OI_r_carpal_proximal_phalanx_3";
ROUTE1766.toField = "rotation";
ROUTE1766.toNode = "hanim_r_carpal_proximal_phalanx_3";
children[425] = ROUTE1766;

ROUTE ROUTE1767 = createNode("ROUTE");
ROUTE1767.fromField = "fraction_changed";
ROUTE1767.fromNode = "Armature_Clock";
ROUTE1767.toField = "set_fraction";
ROUTE1767.toNode = "Armature_OI_r_carpal_middle_phalanx_3";
children[426] = ROUTE1767;

ROUTE ROUTE1768 = createNode("ROUTE");
ROUTE1768.fromField = "value_changed";
ROUTE1768.fromNode = "Armature_OI_r_carpal_middle_phalanx_3";
ROUTE1768.toField = "rotation";
ROUTE1768.toNode = "hanim_r_carpal_middle_phalanx_3";
children[427] = ROUTE1768;

ROUTE ROUTE1769 = createNode("ROUTE");
ROUTE1769.fromField = "fraction_changed";
ROUTE1769.fromNode = "Armature_Clock";
ROUTE1769.toField = "set_fraction";
ROUTE1769.toNode = "Armature_OI_r_carpal_distal_phalanx_3";
children[428] = ROUTE1769;

ROUTE ROUTE1770 = createNode("ROUTE");
ROUTE1770.fromField = "value_changed";
ROUTE1770.fromNode = "Armature_OI_r_carpal_distal_phalanx_3";
ROUTE1770.toField = "rotation";
ROUTE1770.toNode = "hanim_r_carpal_distal_phalanx_3";
children[429] = ROUTE1770;

ROUTE ROUTE1771 = createNode("ROUTE");
ROUTE1771.fromField = "fraction_changed";
ROUTE1771.fromNode = "Armature_Clock";
ROUTE1771.toField = "set_fraction";
ROUTE1771.toNode = "Armature_OI_r_hamate";
children[430] = ROUTE1771;

ROUTE ROUTE1772 = createNode("ROUTE");
ROUTE1772.fromField = "value_changed";
ROUTE1772.fromNode = "Armature_OI_r_hamate";
ROUTE1772.toField = "rotation";
ROUTE1772.toNode = "hanim_r_hamate";
children[431] = ROUTE1772;

ROUTE ROUTE1773 = createNode("ROUTE");
ROUTE1773.fromField = "fraction_changed";
ROUTE1773.fromNode = "Armature_Clock";
ROUTE1773.toField = "set_fraction";
ROUTE1773.toNode = "Armature_OI_r_metacarpal_4";
children[432] = ROUTE1773;

ROUTE ROUTE1774 = createNode("ROUTE");
ROUTE1774.fromField = "value_changed";
ROUTE1774.fromNode = "Armature_OI_r_metacarpal_4";
ROUTE1774.toField = "rotation";
ROUTE1774.toNode = "hanim_r_metacarpal_4";
children[433] = ROUTE1774;

ROUTE ROUTE1775 = createNode("ROUTE");
ROUTE1775.fromField = "fraction_changed";
ROUTE1775.fromNode = "Armature_Clock";
ROUTE1775.toField = "set_fraction";
ROUTE1775.toNode = "Armature_OI_r_carpal_proximal_phalanx_4";
children[434] = ROUTE1775;

ROUTE ROUTE1776 = createNode("ROUTE");
ROUTE1776.fromField = "value_changed";
ROUTE1776.fromNode = "Armature_OI_r_carpal_proximal_phalanx_4";
ROUTE1776.toField = "rotation";
ROUTE1776.toNode = "hanim_r_carpal_proximal_phalanx_4";
children[435] = ROUTE1776;

ROUTE ROUTE1777 = createNode("ROUTE");
ROUTE1777.fromField = "fraction_changed";
ROUTE1777.fromNode = "Armature_Clock";
ROUTE1777.toField = "set_fraction";
ROUTE1777.toNode = "Armature_OI_r_carpal_middle_phalanx_4";
children[436] = ROUTE1777;

ROUTE ROUTE1778 = createNode("ROUTE");
ROUTE1778.fromField = "value_changed";
ROUTE1778.fromNode = "Armature_OI_r_carpal_middle_phalanx_4";
ROUTE1778.toField = "rotation";
ROUTE1778.toNode = "hanim_r_carpal_middle_phalanx_4";
children[437] = ROUTE1778;

ROUTE ROUTE1779 = createNode("ROUTE");
ROUTE1779.fromField = "fraction_changed";
ROUTE1779.fromNode = "Armature_Clock";
ROUTE1779.toField = "set_fraction";
ROUTE1779.toNode = "Armature_OI_r_carpal_distal_phalanx_4";
children[438] = ROUTE1779;

ROUTE ROUTE1780 = createNode("ROUTE");
ROUTE1780.fromField = "value_changed";
ROUTE1780.fromNode = "Armature_OI_r_carpal_distal_phalanx_4";
ROUTE1780.toField = "rotation";
ROUTE1780.toNode = "hanim_r_carpal_distal_phalanx_4";
children[439] = ROUTE1780;

ROUTE ROUTE1781 = createNode("ROUTE");
ROUTE1781.fromField = "fraction_changed";
ROUTE1781.fromNode = "Armature_Clock";
ROUTE1781.toField = "set_fraction";
ROUTE1781.toNode = "Armature_OI_r_metacarpal_5";
children[440] = ROUTE1781;

ROUTE ROUTE1782 = createNode("ROUTE");
ROUTE1782.fromField = "value_changed";
ROUTE1782.fromNode = "Armature_OI_r_metacarpal_5";
ROUTE1782.toField = "rotation";
ROUTE1782.toNode = "hanim_r_metacarpal_5";
children[441] = ROUTE1782;

ROUTE ROUTE1783 = createNode("ROUTE");
ROUTE1783.fromField = "fraction_changed";
ROUTE1783.fromNode = "Armature_Clock";
ROUTE1783.toField = "set_fraction";
ROUTE1783.toNode = "Armature_OI_r_carpal_proximal_phalanx_5";
children[442] = ROUTE1783;

ROUTE ROUTE1784 = createNode("ROUTE");
ROUTE1784.fromField = "value_changed";
ROUTE1784.fromNode = "Armature_OI_r_carpal_proximal_phalanx_5";
ROUTE1784.toField = "rotation";
ROUTE1784.toNode = "hanim_r_carpal_proximal_phalanx_5";
children[443] = ROUTE1784;

ROUTE ROUTE1785 = createNode("ROUTE");
ROUTE1785.fromField = "fraction_changed";
ROUTE1785.fromNode = "Armature_Clock";
ROUTE1785.toField = "set_fraction";
ROUTE1785.toNode = "Armature_OI_r_carpal_middle_phalanx_5";
children[444] = ROUTE1785;

ROUTE ROUTE1786 = createNode("ROUTE");
ROUTE1786.fromField = "value_changed";
ROUTE1786.fromNode = "Armature_OI_r_carpal_middle_phalanx_5";
ROUTE1786.toField = "rotation";
ROUTE1786.toNode = "hanim_r_carpal_middle_phalanx_5";
children[445] = ROUTE1786;

ROUTE ROUTE1787 = createNode("ROUTE");
ROUTE1787.fromField = "fraction_changed";
ROUTE1787.fromNode = "Armature_Clock";
ROUTE1787.toField = "set_fraction";
ROUTE1787.toNode = "Armature_OI_r_carpal_distal_phalanx_5";
children[446] = ROUTE1787;

ROUTE ROUTE1788 = createNode("ROUTE");
ROUTE1788.fromField = "value_changed";
ROUTE1788.fromNode = "Armature_OI_r_carpal_distal_phalanx_5";
ROUTE1788.toField = "rotation";
ROUTE1788.toNode = "hanim_r_carpal_distal_phalanx_5";
children[447] = ROUTE1788;

}
