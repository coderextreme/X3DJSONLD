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

unit unit3 = createNode("unit");
unit3.name = "METERS";
unit3.category = "length";
head1.unit[1] = unit3;

meta meta4 = createNode("meta");
meta4.name = "filename";
meta4.content = "blenderSkeleton.x3d";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "copyright";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "reference";
meta6.content = "http://www.web3D.org";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "generator";
meta7.content = "Blender 4.0.1";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "exporter";
meta8.content = "io_scene_x3dv";
head1.meta[6] = meta8;

head = head1;

NavigationInfo NavigationInfo10 = createNode("NavigationInfo");
children = new MFNode();

children[0] = NavigationInfo10;

Background Background11 = createNode("Background");
Background11.DEF = "WO_World";
Background11.groundColor = new MFColor(new float[0.05087608844041824,0.05087608844041824,0.05087608844041824]);
Background11.skyColor = new MFColor(new float[0.05087608844041824,0.05087608844041824,0.05087608844041824]);
children[1] = Background11;

Transform Transform12 = createNode("Transform");
Shape Shape13 = createNode("Shape");
Shape13.DEF = "SiteShape";
Box Box14 = createNode("Box");
Box14.size = new SFVec3f(new float[0.05,0.05,0.05]);
Shape13.geometry = Box14;

Appearance Appearance15 = createNode("Appearance");
Material Material16 = createNode("Material");
Material16.diffuseColor = new SFColor(new float[0,0,1]);
Appearance15.material = Material16;

Shape13.appearance = Appearance15;

Transform12.child = new undefined();

Transform12.child[0] = Shape13;

children[2] = Transform12;

Transform Transform17 = createNode("Transform");
Shape Shape18 = createNode("Shape");
Shape18.DEF = "JointShape";
Sphere Sphere19 = createNode("Sphere");
Sphere19.radius = 0.06;
Shape18.geometry = Sphere19;

Appearance Appearance20 = createNode("Appearance");
Appearance20.DEF = "JointAppearance";
Material Material21 = createNode("Material");
Material21.diffuseColor = new SFColor(new float[1,0.5,0]);
Material21.transparency = 0.5;
Appearance20.material = Material21;

Shape18.appearance = Appearance20;

Transform17.child = new undefined();

Transform17.child[0] = Shape18;

children[3] = Transform17;

Transform Transform22 = createNode("Transform");
Transform22.DEF = "Light_TRANSFORM";
Transform22.rotation = new SFRotation(new float[0.20594,0.33152,0.9207,1.92627]);
Transform22.translation = new SFVec3f(new float[4.07625,1.00545,5.90386]);
PointLight PointLight23 = createNode("PointLight");
PointLight23.DEF = "LA_Light";
PointLight23.location = new SFVec3f(new float[-8.940696716308594e-8,-3.5762786865234375e-7,4.6193599700927734e-7]);
PointLight23.radius = 40;
Transform22.children = new MFNode();

Transform22.children[0] = PointLight23;

children[4] = Transform22;

Transform Transform24 = createNode("Transform");
Transform24.DEF = "Camera_TRANSFORM";
Transform24.rotation = new SFRotation(new float[0.77344,0.33383,0.53884,1.35072]);
Transform24.translation = new SFVec3f(new float[7.35889,-6.92579,4.95831]);
Viewpoint Viewpoint25 = createNode("Viewpoint");
Viewpoint25.DEF = "CA_Camera";
Viewpoint25.fieldOfView = 0.6911112070083618;
Viewpoint25.orientation = new SFRotation(new float[-3.627339850709177e-8,-0.4730778932571411,-0.8810206651687622,0]);
Viewpoint25.position = new SFVec3f(new float[-3.927080456378462e-7,-2.123415470123291e-7,2.384185791015625e-7]);
Transform24.children = new MFNode();

Transform24.children[0] = Viewpoint25;

children[5] = Transform24;

Transform Transform26 = createNode("Transform");
Transform26.DEF = "Armature_TRANSFORM";
HAnimHumanoid HAnimHumanoid27 = createNode("HAnimHumanoid");
HAnimHumanoid27.name = "humanoid";
HAnimHumanoid27.DEF = "hanim_humanoid";
HAnimHumanoid27.version = "2.0";
HAnimJoint HAnimJoint28 = createNode("HAnimJoint");
HAnimJoint28.name = "Armature";
HAnimJoint28.DEF = "hanim_Armature";
HAnimJoint28.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint28.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment29 = createNode("HAnimSegment");
HAnimSegment29.name = "SEGMENT_FOR_Armature";
HAnimSegment29.DEF = "hanim_SEGMENT_FOR_Armature";
TouchSensor TouchSensor30 = createNode("TouchSensor");
TouchSensor30.description = "joint Armature segment SEGMENT_FOR_Armature";
HAnimSegment29.children = new MFNode();

HAnimSegment29.children[0] = TouchSensor30;

Transform Transform31 = createNode("Transform");
Shape Shape32 = createNode("Shape");
Shape32.USE = "JointShape";
Transform31.child = new undefined();

Transform31.child[0] = Shape32;

HAnimSegment29.children[1] = Transform31;

HAnimSite HAnimSite33 = createNode("HAnimSite");
HAnimSite33.name = "SEGMENT_FOR_Armature_tip";
HAnimSite33.DEF = "hanim_SEGMENT_FOR_Armature_tip";
Transform Transform34 = createNode("Transform");
Shape Shape35 = createNode("Shape");
Shape35.USE = "SiteShape";
Transform34.child = new undefined();

Transform34.child[0] = Shape35;

HAnimSite33.children = new MFNode();

HAnimSite33.children[0] = Transform34;

HAnimSegment29.children[2] = HAnimSite33;

HAnimJoint28.children = new MFNode();

HAnimJoint28.children[0] = HAnimSegment29;

HAnimJoint HAnimJoint36 = createNode("HAnimJoint");
HAnimJoint36.name = "sacrum";
HAnimJoint36.DEF = "hanim_sacrum";
HAnimJoint36.center = new SFVec3f(new float[-0.0002,-0.1178,0.8174]);
HAnimJoint36.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint36.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment37 = createNode("HAnimSegment");
HAnimSegment37.name = "SEGMENT_FOR_sacrum";
HAnimSegment37.DEF = "hanim_SEGMENT_FOR_sacrum";
TouchSensor TouchSensor38 = createNode("TouchSensor");
TouchSensor38.description = "joint sacrum segment SEGMENT_FOR_sacrum";
HAnimSegment37.children = new MFNode();

HAnimSegment37.children[0] = TouchSensor38;

Transform Transform39 = createNode("Transform");
Transform39.translation = new SFVec3f(new float[-0.0002,-0.1178,0.8174]);
Shape Shape40 = createNode("Shape");
Shape40.USE = "JointShape";
Transform39.child = new undefined();

Transform39.child[0] = Shape40;

HAnimSegment37.children[1] = Transform39;

HAnimSite HAnimSite41 = createNode("HAnimSite");
HAnimSite41.name = "SEGMENT_FOR_sacrum_tip";
HAnimSite41.DEF = "hanim_SEGMENT_FOR_sacrum_tip";
Transform Transform42 = createNode("Transform");
Transform42.translation = new SFVec3f(new float[-0.0002,-0.1178,0.8174]);
Shape Shape43 = createNode("Shape");
Shape43.USE = "SiteShape";
Transform42.child = new undefined();

Transform42.child[0] = Shape43;

HAnimSite41.children = new MFNode();

HAnimSite41.children[0] = Transform42;

HAnimSegment37.children[2] = HAnimSite41;

HAnimJoint36.children = new MFNode();

HAnimJoint36.children[0] = HAnimSegment37;

HAnimJoint HAnimJoint44 = createNode("HAnimJoint");
HAnimJoint44.name = "pelvis";
HAnimJoint44.DEF = "hanim_pelvis";
HAnimJoint44.center = new SFVec3f(new float[-0.0002,-0.1178,0.6986]);
HAnimJoint44.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint44.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment45 = createNode("HAnimSegment");
HAnimSegment45.name = "SEGMENT_FOR_pelvis";
HAnimSegment45.DEF = "hanim_SEGMENT_FOR_pelvis";
TouchSensor TouchSensor46 = createNode("TouchSensor");
TouchSensor46.description = "joint pelvis segment SEGMENT_FOR_pelvis";
HAnimSegment45.children = new MFNode();

HAnimSegment45.children[0] = TouchSensor46;

Transform Transform47 = createNode("Transform");
Transform47.translation = new SFVec3f(new float[-0.0002,-0.1178,0.6986]);
Shape Shape48 = createNode("Shape");
Shape48.USE = "JointShape";
Transform47.child = new undefined();

Transform47.child[0] = Shape48;

HAnimSegment45.children[1] = Transform47;

HAnimSite HAnimSite49 = createNode("HAnimSite");
HAnimSite49.name = "SEGMENT_FOR_pelvis_tip";
HAnimSite49.DEF = "hanim_SEGMENT_FOR_pelvis_tip";
Transform Transform50 = createNode("Transform");
Transform50.translation = new SFVec3f(new float[-0.0002,-0.1178,0.6986]);
Shape Shape51 = createNode("Shape");
Shape51.USE = "SiteShape";
Transform50.child = new undefined();

Transform50.child[0] = Shape51;

HAnimSite49.children = new MFNode();

HAnimSite49.children[0] = Transform50;

HAnimSegment45.children[2] = HAnimSite49;

HAnimJoint44.children = new MFNode();

HAnimJoint44.children[0] = HAnimSegment45;

HAnimJoint HAnimJoint52 = createNode("HAnimJoint");
HAnimJoint52.name = "l_thigh";
HAnimJoint52.DEF = "hanim_l_thigh";
HAnimJoint52.center = new SFVec3f(new float[0.0945,-0.1202,0.8181]);
HAnimJoint52.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint52.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment53 = createNode("HAnimSegment");
HAnimSegment53.name = "SEGMENT_FOR_l_thigh";
HAnimSegment53.DEF = "hanim_SEGMENT_FOR_l_thigh";
TouchSensor TouchSensor54 = createNode("TouchSensor");
TouchSensor54.description = "joint l_thigh segment SEGMENT_FOR_l_thigh";
HAnimSegment53.children = new MFNode();

HAnimSegment53.children[0] = TouchSensor54;

Transform Transform55 = createNode("Transform");
Transform55.translation = new SFVec3f(new float[0.0945,-0.1202,0.8181]);
Shape Shape56 = createNode("Shape");
Shape56.USE = "JointShape";
Transform55.child = new undefined();

Transform55.child[0] = Shape56;

HAnimSegment53.children[1] = Transform55;

HAnimSite HAnimSite57 = createNode("HAnimSite");
HAnimSite57.name = "SEGMENT_FOR_l_thigh_tip";
HAnimSite57.DEF = "hanim_SEGMENT_FOR_l_thigh_tip";
Transform Transform58 = createNode("Transform");
Transform58.translation = new SFVec3f(new float[0.0945,-0.1202,0.8181]);
Shape Shape59 = createNode("Shape");
Shape59.USE = "SiteShape";
Transform58.child = new undefined();

Transform58.child[0] = Shape59;

HAnimSite57.children = new MFNode();

HAnimSite57.children[0] = Transform58;

HAnimSegment53.children[2] = HAnimSite57;

HAnimJoint52.children = new MFNode();

HAnimJoint52.children[0] = HAnimSegment53;

HAnimJoint HAnimJoint60 = createNode("HAnimJoint");
HAnimJoint60.name = "l_calf";
HAnimJoint60.DEF = "hanim_l_calf";
HAnimJoint60.center = new SFVec3f(new float[0.0924,-0.1213,0.4003]);
HAnimJoint60.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint60.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment61 = createNode("HAnimSegment");
HAnimSegment61.name = "SEGMENT_FOR_l_calf";
HAnimSegment61.DEF = "hanim_SEGMENT_FOR_l_calf";
TouchSensor TouchSensor62 = createNode("TouchSensor");
TouchSensor62.description = "joint l_calf segment SEGMENT_FOR_l_calf";
HAnimSegment61.children = new MFNode();

HAnimSegment61.children[0] = TouchSensor62;

Transform Transform63 = createNode("Transform");
Transform63.translation = new SFVec3f(new float[0.0924,-0.1213,0.4003]);
Shape Shape64 = createNode("Shape");
Shape64.USE = "JointShape";
Transform63.child = new undefined();

Transform63.child[0] = Shape64;

HAnimSegment61.children[1] = Transform63;

HAnimSite HAnimSite65 = createNode("HAnimSite");
HAnimSite65.name = "SEGMENT_FOR_l_calf_tip";
HAnimSite65.DEF = "hanim_SEGMENT_FOR_l_calf_tip";
Transform Transform66 = createNode("Transform");
Transform66.translation = new SFVec3f(new float[0.0924,-0.1213,0.4003]);
Shape Shape67 = createNode("Shape");
Shape67.USE = "SiteShape";
Transform66.child = new undefined();

Transform66.child[0] = Shape67;

HAnimSite65.children = new MFNode();

HAnimSite65.children[0] = Transform66;

HAnimSegment61.children[2] = HAnimSite65;

HAnimJoint60.children = new MFNode();

HAnimJoint60.children[0] = HAnimSegment61;

HAnimJoint HAnimJoint68 = createNode("HAnimJoint");
HAnimJoint68.name = "l_talus";
HAnimJoint68.DEF = "hanim_l_talus";
HAnimJoint68.center = new SFVec3f(new float[0.0886,-0.1123,0.0869]);
HAnimJoint68.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint68.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment69 = createNode("HAnimSegment");
HAnimSegment69.name = "SEGMENT_FOR_l_talus";
HAnimSegment69.DEF = "hanim_SEGMENT_FOR_l_talus";
TouchSensor TouchSensor70 = createNode("TouchSensor");
TouchSensor70.description = "joint l_talus segment SEGMENT_FOR_l_talus";
HAnimSegment69.children = new MFNode();

HAnimSegment69.children[0] = TouchSensor70;

Transform Transform71 = createNode("Transform");
Transform71.translation = new SFVec3f(new float[0.0886,-0.1123,0.0869]);
Shape Shape72 = createNode("Shape");
Shape72.USE = "JointShape";
Transform71.child = new undefined();

Transform71.child[0] = Shape72;

HAnimSegment69.children[1] = Transform71;

HAnimSite HAnimSite73 = createNode("HAnimSite");
HAnimSite73.name = "SEGMENT_FOR_l_talus_tip";
HAnimSite73.DEF = "hanim_SEGMENT_FOR_l_talus_tip";
Transform Transform74 = createNode("Transform");
Transform74.translation = new SFVec3f(new float[0.0886,-0.1123,0.0869]);
Shape Shape75 = createNode("Shape");
Shape75.USE = "SiteShape";
Transform74.child = new undefined();

Transform74.child[0] = Shape75;

HAnimSite73.children = new MFNode();

HAnimSite73.children[0] = Transform74;

HAnimSegment69.children[2] = HAnimSite73;

HAnimJoint68.children = new MFNode();

HAnimJoint68.children[0] = HAnimSegment69;

HAnimJoint HAnimJoint76 = createNode("HAnimJoint");
HAnimJoint76.name = "l_navicular";
HAnimJoint76.DEF = "hanim_l_navicular";
HAnimJoint76.center = new SFVec3f(new float[0.0781,-0.097,0.0283]);
HAnimJoint76.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint76.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment77 = createNode("HAnimSegment");
HAnimSegment77.name = "SEGMENT_FOR_l_navicular";
HAnimSegment77.DEF = "hanim_SEGMENT_FOR_l_navicular";
TouchSensor TouchSensor78 = createNode("TouchSensor");
TouchSensor78.description = "joint l_navicular segment SEGMENT_FOR_l_navicular";
HAnimSegment77.children = new MFNode();

HAnimSegment77.children[0] = TouchSensor78;

Transform Transform79 = createNode("Transform");
Transform79.translation = new SFVec3f(new float[0.0781,-0.097,0.0283]);
Shape Shape80 = createNode("Shape");
Shape80.USE = "JointShape";
Transform79.child = new undefined();

Transform79.child[0] = Shape80;

HAnimSegment77.children[1] = Transform79;

HAnimSite HAnimSite81 = createNode("HAnimSite");
HAnimSite81.name = "SEGMENT_FOR_l_navicular_tip";
HAnimSite81.DEF = "hanim_SEGMENT_FOR_l_navicular_tip";
Transform Transform82 = createNode("Transform");
Transform82.translation = new SFVec3f(new float[0.0781,-0.097,0.0283]);
Shape Shape83 = createNode("Shape");
Shape83.USE = "SiteShape";
Transform82.child = new undefined();

Transform82.child[0] = Shape83;

HAnimSite81.children = new MFNode();

HAnimSite81.children[0] = Transform82;

HAnimSegment77.children[2] = HAnimSite81;

HAnimJoint76.children = new MFNode();

HAnimJoint76.children[0] = HAnimSegment77;

HAnimJoint HAnimJoint84 = createNode("HAnimJoint");
HAnimJoint84.name = "l_cuneiform_1";
HAnimJoint84.DEF = "hanim_l_cuneiform_1";
HAnimJoint84.center = new SFVec3f(new float[0.0672,-0.0835,0.0235]);
HAnimJoint84.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint84.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment85 = createNode("HAnimSegment");
HAnimSegment85.name = "SEGMENT_FOR_l_cuneiform_1";
HAnimSegment85.DEF = "hanim_SEGMENT_FOR_l_cuneiform_1";
TouchSensor TouchSensor86 = createNode("TouchSensor");
TouchSensor86.description = "joint l_cuneiform_1 segment SEGMENT_FOR_l_cuneiform_1";
HAnimSegment85.children = new MFNode();

HAnimSegment85.children[0] = TouchSensor86;

Transform Transform87 = createNode("Transform");
Transform87.translation = new SFVec3f(new float[0.0672,-0.0835,0.0235]);
Shape Shape88 = createNode("Shape");
Shape88.USE = "JointShape";
Transform87.child = new undefined();

Transform87.child[0] = Shape88;

HAnimSegment85.children[1] = Transform87;

HAnimSite HAnimSite89 = createNode("HAnimSite");
HAnimSite89.name = "SEGMENT_FOR_l_cuneiform_1_tip";
HAnimSite89.DEF = "hanim_SEGMENT_FOR_l_cuneiform_1_tip";
Transform Transform90 = createNode("Transform");
Transform90.translation = new SFVec3f(new float[0.0672,-0.0835,0.0235]);
Shape Shape91 = createNode("Shape");
Shape91.USE = "SiteShape";
Transform90.child = new undefined();

Transform90.child[0] = Shape91;

HAnimSite89.children = new MFNode();

HAnimSite89.children[0] = Transform90;

HAnimSegment85.children[2] = HAnimSite89;

HAnimJoint84.children = new MFNode();

HAnimJoint84.children[0] = HAnimSegment85;

HAnimJoint HAnimJoint92 = createNode("HAnimJoint");
HAnimJoint92.name = "l_metatarsal_1";
HAnimJoint92.DEF = "hanim_l_metatarsal_1";
HAnimJoint92.center = new SFVec3f(new float[0.0644,-0.0577,0.0147]);
HAnimJoint92.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint92.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment93 = createNode("HAnimSegment");
HAnimSegment93.name = "SEGMENT_FOR_l_metatarsal_1";
HAnimSegment93.DEF = "hanim_SEGMENT_FOR_l_metatarsal_1";
TouchSensor TouchSensor94 = createNode("TouchSensor");
TouchSensor94.description = "joint l_metatarsal_1 segment SEGMENT_FOR_l_metatarsal_1";
HAnimSegment93.children = new MFNode();

HAnimSegment93.children[0] = TouchSensor94;

Transform Transform95 = createNode("Transform");
Transform95.translation = new SFVec3f(new float[0.0644,-0.0577,0.0147]);
Shape Shape96 = createNode("Shape");
Shape96.USE = "JointShape";
Transform95.child = new undefined();

Transform95.child[0] = Shape96;

HAnimSegment93.children[1] = Transform95;

HAnimSite HAnimSite97 = createNode("HAnimSite");
HAnimSite97.name = "SEGMENT_FOR_l_metatarsal_1_tip";
HAnimSite97.DEF = "hanim_SEGMENT_FOR_l_metatarsal_1_tip";
Transform Transform98 = createNode("Transform");
Transform98.translation = new SFVec3f(new float[0.0644,-0.0577,0.0147]);
Shape Shape99 = createNode("Shape");
Shape99.USE = "SiteShape";
Transform98.child = new undefined();

Transform98.child[0] = Shape99;

HAnimSite97.children = new MFNode();

HAnimSite97.children[0] = Transform98;

HAnimSegment93.children[2] = HAnimSite97;

HAnimJoint92.children = new MFNode();

HAnimJoint92.children[0] = HAnimSegment93;

HAnimJoint HAnimJoint100 = createNode("HAnimJoint");
HAnimJoint100.name = "l_tarsal_proximal_phalanx_1";
HAnimJoint100.DEF = "hanim_l_tarsal_proximal_phalanx_1";
HAnimJoint100.center = new SFVec3f(new float[0.0619,-0.0083,0.0059]);
HAnimJoint100.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint100.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment101 = createNode("HAnimSegment");
HAnimSegment101.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_1";
HAnimSegment101.DEF = "hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_1";
TouchSensor TouchSensor102 = createNode("TouchSensor");
TouchSensor102.description = "joint l_tarsal_proximal_phalanx_1 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_1";
HAnimSegment101.children = new MFNode();

HAnimSegment101.children[0] = TouchSensor102;

Transform Transform103 = createNode("Transform");
Transform103.translation = new SFVec3f(new float[0.0619,-0.0083,0.0059]);
Shape Shape104 = createNode("Shape");
Shape104.USE = "JointShape";
Transform103.child = new undefined();

Transform103.child[0] = Shape104;

HAnimSegment101.children[1] = Transform103;

HAnimSite HAnimSite105 = createNode("HAnimSite");
HAnimSite105.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_1_tip";
HAnimSite105.DEF = "hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_1_tip";
Transform Transform106 = createNode("Transform");
Transform106.translation = new SFVec3f(new float[0.0619,-0.0083,0.0059]);
Shape Shape107 = createNode("Shape");
Shape107.USE = "SiteShape";
Transform106.child = new undefined();

Transform106.child[0] = Shape107;

HAnimSite105.children = new MFNode();

HAnimSite105.children[0] = Transform106;

HAnimSegment101.children[2] = HAnimSite105;

HAnimJoint100.children = new MFNode();

HAnimJoint100.children[0] = HAnimSegment101;

HAnimJoint HAnimJoint108 = createNode("HAnimJoint");
HAnimJoint108.name = "l_tarsal_distal_phalanx_1";
HAnimJoint108.DEF = "hanim_l_tarsal_distal_phalanx_1";
HAnimJoint108.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint108.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment109 = createNode("HAnimSegment");
HAnimSegment109.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_1";
HAnimSegment109.DEF = "hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_1";
TouchSensor TouchSensor110 = createNode("TouchSensor");
TouchSensor110.description = "joint l_tarsal_distal_phalanx_1 segment SEGMENT_FOR_l_tarsal_distal_phalanx_1";
HAnimSegment109.children = new MFNode();

HAnimSegment109.children[0] = TouchSensor110;

Transform Transform111 = createNode("Transform");
Shape Shape112 = createNode("Shape");
Shape112.USE = "JointShape";
Transform111.child = new undefined();

Transform111.child[0] = Shape112;

HAnimSegment109.children[1] = Transform111;

HAnimSite HAnimSite113 = createNode("HAnimSite");
HAnimSite113.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_1_tip";
HAnimSite113.DEF = "hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_1_tip";
Transform Transform114 = createNode("Transform");
Shape Shape115 = createNode("Shape");
Shape115.USE = "SiteShape";
Transform114.child = new undefined();

Transform114.child[0] = Shape115;

HAnimSite113.children = new MFNode();

HAnimSite113.children[0] = Transform114;

HAnimSegment109.children[2] = HAnimSite113;

HAnimJoint108.children = new MFNode();

HAnimJoint108.children[0] = HAnimSegment109;

HAnimJoint100.children[1] = HAnimJoint108;

HAnimJoint92.children[1] = HAnimJoint100;

HAnimJoint84.children[1] = HAnimJoint92;

HAnimJoint76.children[1] = HAnimJoint84;

HAnimJoint HAnimJoint116 = createNode("HAnimJoint");
HAnimJoint116.name = "l_cuneiform_2";
HAnimJoint116.DEF = "hanim_l_cuneiform_2";
HAnimJoint116.center = new SFVec3f(new float[0.0812,-0.0805,0.025]);
HAnimJoint116.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint116.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment117 = createNode("HAnimSegment");
HAnimSegment117.name = "SEGMENT_FOR_l_cuneiform_2";
HAnimSegment117.DEF = "hanim_SEGMENT_FOR_l_cuneiform_2";
TouchSensor TouchSensor118 = createNode("TouchSensor");
TouchSensor118.description = "joint l_cuneiform_2 segment SEGMENT_FOR_l_cuneiform_2";
HAnimSegment117.children = new MFNode();

HAnimSegment117.children[0] = TouchSensor118;

Transform Transform119 = createNode("Transform");
Transform119.translation = new SFVec3f(new float[0.0812,-0.0805,0.025]);
Shape Shape120 = createNode("Shape");
Shape120.USE = "JointShape";
Transform119.child = new undefined();

Transform119.child[0] = Shape120;

HAnimSegment117.children[1] = Transform119;

HAnimSite HAnimSite121 = createNode("HAnimSite");
HAnimSite121.name = "SEGMENT_FOR_l_cuneiform_2_tip";
HAnimSite121.DEF = "hanim_SEGMENT_FOR_l_cuneiform_2_tip";
Transform Transform122 = createNode("Transform");
Transform122.translation = new SFVec3f(new float[0.0812,-0.0805,0.025]);
Shape Shape123 = createNode("Shape");
Shape123.USE = "SiteShape";
Transform122.child = new undefined();

Transform122.child[0] = Shape123;

HAnimSite121.children = new MFNode();

HAnimSite121.children[0] = Transform122;

HAnimSegment117.children[2] = HAnimSite121;

HAnimJoint116.children = new MFNode();

HAnimJoint116.children[0] = HAnimSegment117;

HAnimJoint HAnimJoint124 = createNode("HAnimJoint");
HAnimJoint124.name = "l_metatarsal_2";
HAnimJoint124.DEF = "hanim_l_metatarsal_2";
HAnimJoint124.center = new SFVec3f(new float[0.08,-0.0608,0.0175]);
HAnimJoint124.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint124.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment125 = createNode("HAnimSegment");
HAnimSegment125.name = "SEGMENT_FOR_l_metatarsal_2";
HAnimSegment125.DEF = "hanim_SEGMENT_FOR_l_metatarsal_2";
TouchSensor TouchSensor126 = createNode("TouchSensor");
TouchSensor126.description = "joint l_metatarsal_2 segment SEGMENT_FOR_l_metatarsal_2";
HAnimSegment125.children = new MFNode();

HAnimSegment125.children[0] = TouchSensor126;

Transform Transform127 = createNode("Transform");
Transform127.translation = new SFVec3f(new float[0.08,-0.0608,0.0175]);
Shape Shape128 = createNode("Shape");
Shape128.USE = "JointShape";
Transform127.child = new undefined();

Transform127.child[0] = Shape128;

HAnimSegment125.children[1] = Transform127;

HAnimSite HAnimSite129 = createNode("HAnimSite");
HAnimSite129.name = "SEGMENT_FOR_l_metatarsal_2_tip";
HAnimSite129.DEF = "hanim_SEGMENT_FOR_l_metatarsal_2_tip";
Transform Transform130 = createNode("Transform");
Transform130.translation = new SFVec3f(new float[0.08,-0.0608,0.0175]);
Shape Shape131 = createNode("Shape");
Shape131.USE = "SiteShape";
Transform130.child = new undefined();

Transform130.child[0] = Shape131;

HAnimSite129.children = new MFNode();

HAnimSite129.children[0] = Transform130;

HAnimSegment125.children[2] = HAnimSite129;

HAnimJoint124.children = new MFNode();

HAnimJoint124.children[0] = HAnimSegment125;

HAnimJoint HAnimJoint132 = createNode("HAnimJoint");
HAnimJoint132.name = "l_tarsal_proximal_phalanx_2";
HAnimJoint132.DEF = "hanim_l_tarsal_proximal_phalanx_2";
HAnimJoint132.center = new SFVec3f(new float[0.0824,-0.004,0.0064]);
HAnimJoint132.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint132.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment133 = createNode("HAnimSegment");
HAnimSegment133.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_2";
HAnimSegment133.DEF = "hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_2";
TouchSensor TouchSensor134 = createNode("TouchSensor");
TouchSensor134.description = "joint l_tarsal_proximal_phalanx_2 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_2";
HAnimSegment133.children = new MFNode();

HAnimSegment133.children[0] = TouchSensor134;

Transform Transform135 = createNode("Transform");
Transform135.translation = new SFVec3f(new float[0.0824,-0.004,0.0064]);
Shape Shape136 = createNode("Shape");
Shape136.USE = "JointShape";
Transform135.child = new undefined();

Transform135.child[0] = Shape136;

HAnimSegment133.children[1] = Transform135;

HAnimSite HAnimSite137 = createNode("HAnimSite");
HAnimSite137.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_2_tip";
HAnimSite137.DEF = "hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_2_tip";
Transform Transform138 = createNode("Transform");
Transform138.translation = new SFVec3f(new float[0.0824,-0.004,0.0064]);
Shape Shape139 = createNode("Shape");
Shape139.USE = "SiteShape";
Transform138.child = new undefined();

Transform138.child[0] = Shape139;

HAnimSite137.children = new MFNode();

HAnimSite137.children[0] = Transform138;

HAnimSegment133.children[2] = HAnimSite137;

HAnimJoint132.children = new MFNode();

HAnimJoint132.children[0] = HAnimSegment133;

HAnimJoint HAnimJoint140 = createNode("HAnimJoint");
HAnimJoint140.name = "l_tarsal_middle_phalanx_2";
HAnimJoint140.DEF = "hanim_l_tarsal_middle_phalanx_2";
HAnimJoint140.center = new SFVec3f(new float[0.0841,0.0121,0.0041]);
HAnimJoint140.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint140.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment141 = createNode("HAnimSegment");
HAnimSegment141.name = "SEGMENT_FOR_l_tarsal_middle_phalanx_2";
HAnimSegment141.DEF = "hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_2";
TouchSensor TouchSensor142 = createNode("TouchSensor");
TouchSensor142.description = "joint l_tarsal_middle_phalanx_2 segment SEGMENT_FOR_l_tarsal_middle_phalanx_2";
HAnimSegment141.children = new MFNode();

HAnimSegment141.children[0] = TouchSensor142;

Transform Transform143 = createNode("Transform");
Transform143.translation = new SFVec3f(new float[0.0841,0.0121,0.0041]);
Shape Shape144 = createNode("Shape");
Shape144.USE = "JointShape";
Transform143.child = new undefined();

Transform143.child[0] = Shape144;

HAnimSegment141.children[1] = Transform143;

HAnimSite HAnimSite145 = createNode("HAnimSite");
HAnimSite145.name = "SEGMENT_FOR_l_tarsal_middle_phalanx_2_tip";
HAnimSite145.DEF = "hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_2_tip";
Transform Transform146 = createNode("Transform");
Transform146.translation = new SFVec3f(new float[0.0841,0.0121,0.0041]);
Shape Shape147 = createNode("Shape");
Shape147.USE = "SiteShape";
Transform146.child = new undefined();

Transform146.child[0] = Shape147;

HAnimSite145.children = new MFNode();

HAnimSite145.children[0] = Transform146;

HAnimSegment141.children[2] = HAnimSite145;

HAnimJoint140.children = new MFNode();

HAnimJoint140.children[0] = HAnimSegment141;

HAnimJoint HAnimJoint148 = createNode("HAnimJoint");
HAnimJoint148.name = "l_tarsal_distal_phalanx_2";
HAnimJoint148.DEF = "hanim_l_tarsal_distal_phalanx_2";
HAnimJoint148.center = new SFVec3f(new float[0.0841,0.0216,0.0013]);
HAnimJoint148.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint148.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment149 = createNode("HAnimSegment");
HAnimSegment149.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_2";
HAnimSegment149.DEF = "hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_2";
TouchSensor TouchSensor150 = createNode("TouchSensor");
TouchSensor150.description = "joint l_tarsal_distal_phalanx_2 segment SEGMENT_FOR_l_tarsal_distal_phalanx_2";
HAnimSegment149.children = new MFNode();

HAnimSegment149.children[0] = TouchSensor150;

Transform Transform151 = createNode("Transform");
Transform151.translation = new SFVec3f(new float[0.0841,0.0216,0.0013]);
Shape Shape152 = createNode("Shape");
Shape152.USE = "JointShape";
Transform151.child = new undefined();

Transform151.child[0] = Shape152;

HAnimSegment149.children[1] = Transform151;

HAnimSite HAnimSite153 = createNode("HAnimSite");
HAnimSite153.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_2_tip";
HAnimSite153.DEF = "hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_2_tip";
Transform Transform154 = createNode("Transform");
Transform154.translation = new SFVec3f(new float[0.0841,0.0216,0.0013]);
Shape Shape155 = createNode("Shape");
Shape155.USE = "SiteShape";
Transform154.child = new undefined();

Transform154.child[0] = Shape155;

HAnimSite153.children = new MFNode();

HAnimSite153.children[0] = Transform154;

HAnimSegment149.children[2] = HAnimSite153;

HAnimJoint148.children = new MFNode();

HAnimJoint148.children[0] = HAnimSegment149;

HAnimJoint140.children[1] = HAnimJoint148;

HAnimJoint132.children[1] = HAnimJoint140;

HAnimJoint124.children[1] = HAnimJoint132;

HAnimJoint116.children[1] = HAnimJoint124;

HAnimJoint76.children[2] = HAnimJoint116;

HAnimJoint HAnimJoint156 = createNode("HAnimJoint");
HAnimJoint156.name = "l_cuneiform_3";
HAnimJoint156.DEF = "hanim_l_cuneiform_3";
HAnimJoint156.center = new SFVec3f(new float[0.0928,-0.0821,0.0248]);
HAnimJoint156.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint156.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment157 = createNode("HAnimSegment");
HAnimSegment157.name = "SEGMENT_FOR_l_cuneiform_3";
HAnimSegment157.DEF = "hanim_SEGMENT_FOR_l_cuneiform_3";
TouchSensor TouchSensor158 = createNode("TouchSensor");
TouchSensor158.description = "joint l_cuneiform_3 segment SEGMENT_FOR_l_cuneiform_3";
HAnimSegment157.children = new MFNode();

HAnimSegment157.children[0] = TouchSensor158;

Transform Transform159 = createNode("Transform");
Transform159.translation = new SFVec3f(new float[0.0928,-0.0821,0.0248]);
Shape Shape160 = createNode("Shape");
Shape160.USE = "JointShape";
Transform159.child = new undefined();

Transform159.child[0] = Shape160;

HAnimSegment157.children[1] = Transform159;

HAnimSite HAnimSite161 = createNode("HAnimSite");
HAnimSite161.name = "SEGMENT_FOR_l_cuneiform_3_tip";
HAnimSite161.DEF = "hanim_SEGMENT_FOR_l_cuneiform_3_tip";
Transform Transform162 = createNode("Transform");
Transform162.translation = new SFVec3f(new float[0.0928,-0.0821,0.0248]);
Shape Shape163 = createNode("Shape");
Shape163.USE = "SiteShape";
Transform162.child = new undefined();

Transform162.child[0] = Shape163;

HAnimSite161.children = new MFNode();

HAnimSite161.children[0] = Transform162;

HAnimSegment157.children[2] = HAnimSite161;

HAnimJoint156.children = new MFNode();

HAnimJoint156.children[0] = HAnimSegment157;

HAnimJoint HAnimJoint164 = createNode("HAnimJoint");
HAnimJoint164.name = "l_metatarsal_3";
HAnimJoint164.DEF = "hanim_l_metatarsal_3";
HAnimJoint164.center = new SFVec3f(new float[0.0944,-0.0625,0.0175]);
HAnimJoint164.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint164.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment165 = createNode("HAnimSegment");
HAnimSegment165.name = "SEGMENT_FOR_l_metatarsal_3";
HAnimSegment165.DEF = "hanim_SEGMENT_FOR_l_metatarsal_3";
TouchSensor TouchSensor166 = createNode("TouchSensor");
TouchSensor166.description = "joint l_metatarsal_3 segment SEGMENT_FOR_l_metatarsal_3";
HAnimSegment165.children = new MFNode();

HAnimSegment165.children[0] = TouchSensor166;

Transform Transform167 = createNode("Transform");
Transform167.translation = new SFVec3f(new float[0.0944,-0.0625,0.0175]);
Shape Shape168 = createNode("Shape");
Shape168.USE = "JointShape";
Transform167.child = new undefined();

Transform167.child[0] = Shape168;

HAnimSegment165.children[1] = Transform167;

HAnimSite HAnimSite169 = createNode("HAnimSite");
HAnimSite169.name = "SEGMENT_FOR_l_metatarsal_3_tip";
HAnimSite169.DEF = "hanim_SEGMENT_FOR_l_metatarsal_3_tip";
Transform Transform170 = createNode("Transform");
Transform170.translation = new SFVec3f(new float[0.0944,-0.0625,0.0175]);
Shape Shape171 = createNode("Shape");
Shape171.USE = "SiteShape";
Transform170.child = new undefined();

Transform170.child[0] = Shape171;

HAnimSite169.children = new MFNode();

HAnimSite169.children[0] = Transform170;

HAnimSegment165.children[2] = HAnimSite169;

HAnimJoint164.children = new MFNode();

HAnimJoint164.children[0] = HAnimSegment165;

HAnimJoint HAnimJoint172 = createNode("HAnimJoint");
HAnimJoint172.name = "l_tarsal_proximal_phalanx_3";
HAnimJoint172.DEF = "hanim_l_tarsal_proximal_phalanx_3";
HAnimJoint172.center = new SFVec3f(new float[0.0963,-0.0065,0.0065]);
HAnimJoint172.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint172.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment173 = createNode("HAnimSegment");
HAnimSegment173.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_3";
HAnimSegment173.DEF = "hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_3";
TouchSensor TouchSensor174 = createNode("TouchSensor");
TouchSensor174.description = "joint l_tarsal_proximal_phalanx_3 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_3";
HAnimSegment173.children = new MFNode();

HAnimSegment173.children[0] = TouchSensor174;

Transform Transform175 = createNode("Transform");
Transform175.translation = new SFVec3f(new float[0.0963,-0.0065,0.0065]);
Shape Shape176 = createNode("Shape");
Shape176.USE = "JointShape";
Transform175.child = new undefined();

Transform175.child[0] = Shape176;

HAnimSegment173.children[1] = Transform175;

HAnimSite HAnimSite177 = createNode("HAnimSite");
HAnimSite177.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_3_tip";
HAnimSite177.DEF = "hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_3_tip";
Transform Transform178 = createNode("Transform");
Transform178.translation = new SFVec3f(new float[0.0963,-0.0065,0.0065]);
Shape Shape179 = createNode("Shape");
Shape179.USE = "SiteShape";
Transform178.child = new undefined();

Transform178.child[0] = Shape179;

HAnimSite177.children = new MFNode();

HAnimSite177.children[0] = Transform178;

HAnimSegment173.children[2] = HAnimSite177;

HAnimJoint172.children = new MFNode();

HAnimJoint172.children[0] = HAnimSegment173;

HAnimJoint HAnimJoint180 = createNode("HAnimJoint");
HAnimJoint180.name = "l_tarsal_middle_phalanx_3";
HAnimJoint180.DEF = "hanim_l_tarsal_middle_phalanx_3";
HAnimJoint180.center = new SFVec3f(new float[0.0987,0.0086,0.0034]);
HAnimJoint180.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint180.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment181 = createNode("HAnimSegment");
HAnimSegment181.name = "SEGMENT_FOR_l_tarsal_middle_phalanx_3";
HAnimSegment181.DEF = "hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_3";
TouchSensor TouchSensor182 = createNode("TouchSensor");
TouchSensor182.description = "joint l_tarsal_middle_phalanx_3 segment SEGMENT_FOR_l_tarsal_middle_phalanx_3";
HAnimSegment181.children = new MFNode();

HAnimSegment181.children[0] = TouchSensor182;

Transform Transform183 = createNode("Transform");
Transform183.translation = new SFVec3f(new float[0.0987,0.0086,0.0034]);
Shape Shape184 = createNode("Shape");
Shape184.USE = "JointShape";
Transform183.child = new undefined();

Transform183.child[0] = Shape184;

HAnimSegment181.children[1] = Transform183;

HAnimSite HAnimSite185 = createNode("HAnimSite");
HAnimSite185.name = "SEGMENT_FOR_l_tarsal_middle_phalanx_3_tip";
HAnimSite185.DEF = "hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_3_tip";
Transform Transform186 = createNode("Transform");
Transform186.translation = new SFVec3f(new float[0.0987,0.0086,0.0034]);
Shape Shape187 = createNode("Shape");
Shape187.USE = "SiteShape";
Transform186.child = new undefined();

Transform186.child[0] = Shape187;

HAnimSite185.children = new MFNode();

HAnimSite185.children[0] = Transform186;

HAnimSegment181.children[2] = HAnimSite185;

HAnimJoint180.children = new MFNode();

HAnimJoint180.children[0] = HAnimSegment181;

HAnimJoint HAnimJoint188 = createNode("HAnimJoint");
HAnimJoint188.name = "l_tarsal_distal_phalanx_3";
HAnimJoint188.DEF = "hanim_l_tarsal_distal_phalanx_3";
HAnimJoint188.center = new SFVec3f(new float[0.1002,0.0178,0.0013]);
HAnimJoint188.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint188.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment189 = createNode("HAnimSegment");
HAnimSegment189.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_3";
HAnimSegment189.DEF = "hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_3";
TouchSensor TouchSensor190 = createNode("TouchSensor");
TouchSensor190.description = "joint l_tarsal_distal_phalanx_3 segment SEGMENT_FOR_l_tarsal_distal_phalanx_3";
HAnimSegment189.children = new MFNode();

HAnimSegment189.children[0] = TouchSensor190;

Transform Transform191 = createNode("Transform");
Transform191.translation = new SFVec3f(new float[0.1002,0.0178,0.0013]);
Shape Shape192 = createNode("Shape");
Shape192.USE = "JointShape";
Transform191.child = new undefined();

Transform191.child[0] = Shape192;

HAnimSegment189.children[1] = Transform191;

HAnimSite HAnimSite193 = createNode("HAnimSite");
HAnimSite193.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_3_tip";
HAnimSite193.DEF = "hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_3_tip";
Transform Transform194 = createNode("Transform");
Transform194.translation = new SFVec3f(new float[0.1002,0.0178,0.0013]);
Shape Shape195 = createNode("Shape");
Shape195.USE = "SiteShape";
Transform194.child = new undefined();

Transform194.child[0] = Shape195;

HAnimSite193.children = new MFNode();

HAnimSite193.children[0] = Transform194;

HAnimSegment189.children[2] = HAnimSite193;

HAnimJoint188.children = new MFNode();

HAnimJoint188.children[0] = HAnimSegment189;

HAnimJoint180.children[1] = HAnimJoint188;

HAnimJoint172.children[1] = HAnimJoint180;

HAnimJoint164.children[1] = HAnimJoint172;

HAnimJoint156.children[1] = HAnimJoint164;

HAnimJoint76.children[3] = HAnimJoint156;

HAnimJoint68.children[1] = HAnimJoint76;

HAnimJoint HAnimJoint196 = createNode("HAnimJoint");
HAnimJoint196.name = "l_calcaneus";
HAnimJoint196.DEF = "hanim_l_calcaneus";
HAnimJoint196.center = new SFVec3f(new float[0.0889,-0.1278,0.0494]);
HAnimJoint196.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint196.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment197 = createNode("HAnimSegment");
HAnimSegment197.name = "SEGMENT_FOR_l_calcaneus";
HAnimSegment197.DEF = "hanim_SEGMENT_FOR_l_calcaneus";
TouchSensor TouchSensor198 = createNode("TouchSensor");
TouchSensor198.description = "joint l_calcaneus segment SEGMENT_FOR_l_calcaneus";
HAnimSegment197.children = new MFNode();

HAnimSegment197.children[0] = TouchSensor198;

Transform Transform199 = createNode("Transform");
Transform199.translation = new SFVec3f(new float[0.0889,-0.1278,0.0494]);
Shape Shape200 = createNode("Shape");
Shape200.USE = "JointShape";
Transform199.child = new undefined();

Transform199.child[0] = Shape200;

HAnimSegment197.children[1] = Transform199;

HAnimSite HAnimSite201 = createNode("HAnimSite");
HAnimSite201.name = "SEGMENT_FOR_l_calcaneus_tip";
HAnimSite201.DEF = "hanim_SEGMENT_FOR_l_calcaneus_tip";
Transform Transform202 = createNode("Transform");
Transform202.translation = new SFVec3f(new float[0.0889,-0.1278,0.0494]);
Shape Shape203 = createNode("Shape");
Shape203.USE = "SiteShape";
Transform202.child = new undefined();

Transform202.child[0] = Shape203;

HAnimSite201.children = new MFNode();

HAnimSite201.children[0] = Transform202;

HAnimSegment197.children[2] = HAnimSite201;

HAnimJoint196.children = new MFNode();

HAnimJoint196.children[0] = HAnimSegment197;

HAnimJoint HAnimJoint204 = createNode("HAnimJoint");
HAnimJoint204.name = "l_cuboid";
HAnimJoint204.DEF = "hanim_l_cuboid";
HAnimJoint204.center = new SFVec3f(new float[0.1105,-0.0998,0.0267]);
HAnimJoint204.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint204.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment205 = createNode("HAnimSegment");
HAnimSegment205.name = "SEGMENT_FOR_l_cuboid";
HAnimSegment205.DEF = "hanim_SEGMENT_FOR_l_cuboid";
TouchSensor TouchSensor206 = createNode("TouchSensor");
TouchSensor206.description = "joint l_cuboid segment SEGMENT_FOR_l_cuboid";
HAnimSegment205.children = new MFNode();

HAnimSegment205.children[0] = TouchSensor206;

Transform Transform207 = createNode("Transform");
Transform207.translation = new SFVec3f(new float[0.1105,-0.0998,0.0267]);
Shape Shape208 = createNode("Shape");
Shape208.USE = "JointShape";
Transform207.child = new undefined();

Transform207.child[0] = Shape208;

HAnimSegment205.children[1] = Transform207;

HAnimSite HAnimSite209 = createNode("HAnimSite");
HAnimSite209.name = "SEGMENT_FOR_l_cuboid_tip";
HAnimSite209.DEF = "hanim_SEGMENT_FOR_l_cuboid_tip";
Transform Transform210 = createNode("Transform");
Transform210.translation = new SFVec3f(new float[0.1105,-0.0998,0.0267]);
Shape Shape211 = createNode("Shape");
Shape211.USE = "SiteShape";
Transform210.child = new undefined();

Transform210.child[0] = Shape211;

HAnimSite209.children = new MFNode();

HAnimSite209.children[0] = Transform210;

HAnimSegment205.children[2] = HAnimSite209;

HAnimJoint204.children = new MFNode();

HAnimJoint204.children[0] = HAnimSegment205;

HAnimJoint HAnimJoint212 = createNode("HAnimJoint");
HAnimJoint212.name = "l_metatarsal_4";
HAnimJoint212.DEF = "hanim_l_metatarsal_4";
HAnimJoint212.center = new SFVec3f(new float[0.1063,-0.0634,0.016]);
HAnimJoint212.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint212.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment213 = createNode("HAnimSegment");
HAnimSegment213.name = "SEGMENT_FOR_l_metatarsal_4";
HAnimSegment213.DEF = "hanim_SEGMENT_FOR_l_metatarsal_4";
TouchSensor TouchSensor214 = createNode("TouchSensor");
TouchSensor214.description = "joint l_metatarsal_4 segment SEGMENT_FOR_l_metatarsal_4";
HAnimSegment213.children = new MFNode();

HAnimSegment213.children[0] = TouchSensor214;

Transform Transform215 = createNode("Transform");
Transform215.translation = new SFVec3f(new float[0.1063,-0.0634,0.016]);
Shape Shape216 = createNode("Shape");
Shape216.USE = "JointShape";
Transform215.child = new undefined();

Transform215.child[0] = Shape216;

HAnimSegment213.children[1] = Transform215;

HAnimSite HAnimSite217 = createNode("HAnimSite");
HAnimSite217.name = "SEGMENT_FOR_l_metatarsal_4_tip";
HAnimSite217.DEF = "hanim_SEGMENT_FOR_l_metatarsal_4_tip";
Transform Transform218 = createNode("Transform");
Transform218.translation = new SFVec3f(new float[0.1063,-0.0634,0.016]);
Shape Shape219 = createNode("Shape");
Shape219.USE = "SiteShape";
Transform218.child = new undefined();

Transform218.child[0] = Shape219;

HAnimSite217.children = new MFNode();

HAnimSite217.children[0] = Transform218;

HAnimSegment213.children[2] = HAnimSite217;

HAnimJoint212.children = new MFNode();

HAnimJoint212.children[0] = HAnimSegment213;

HAnimJoint HAnimJoint220 = createNode("HAnimJoint");
HAnimJoint220.name = "l_tarsal_proximal_phalanx_4";
HAnimJoint220.DEF = "hanim_l_tarsal_proximal_phalanx_4";
HAnimJoint220.center = new SFVec3f(new float[0.1097,-0.0107,0.0058]);
HAnimJoint220.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint220.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment221 = createNode("HAnimSegment");
HAnimSegment221.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_4";
HAnimSegment221.DEF = "hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_4";
TouchSensor TouchSensor222 = createNode("TouchSensor");
TouchSensor222.description = "joint l_tarsal_proximal_phalanx_4 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_4";
HAnimSegment221.children = new MFNode();

HAnimSegment221.children[0] = TouchSensor222;

Transform Transform223 = createNode("Transform");
Transform223.translation = new SFVec3f(new float[0.1097,-0.0107,0.0058]);
Shape Shape224 = createNode("Shape");
Shape224.USE = "JointShape";
Transform223.child = new undefined();

Transform223.child[0] = Shape224;

HAnimSegment221.children[1] = Transform223;

HAnimSite HAnimSite225 = createNode("HAnimSite");
HAnimSite225.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_4_tip";
HAnimSite225.DEF = "hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_4_tip";
Transform Transform226 = createNode("Transform");
Transform226.translation = new SFVec3f(new float[0.1097,-0.0107,0.0058]);
Shape Shape227 = createNode("Shape");
Shape227.USE = "SiteShape";
Transform226.child = new undefined();

Transform226.child[0] = Shape227;

HAnimSite225.children = new MFNode();

HAnimSite225.children[0] = Transform226;

HAnimSegment221.children[2] = HAnimSite225;

HAnimJoint220.children = new MFNode();

HAnimJoint220.children[0] = HAnimSegment221;

HAnimJoint HAnimJoint228 = createNode("HAnimJoint");
HAnimJoint228.name = "l_tarsal_middle_phalanx_4";
HAnimJoint228.DEF = "hanim_l_tarsal_middle_phalanx_4";
HAnimJoint228.center = new SFVec3f(new float[0.114,0.0044,0.0037]);
HAnimJoint228.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint228.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment229 = createNode("HAnimSegment");
HAnimSegment229.name = "SEGMENT_FOR_l_tarsal_middle_phalanx_4";
HAnimSegment229.DEF = "hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_4";
TouchSensor TouchSensor230 = createNode("TouchSensor");
TouchSensor230.description = "joint l_tarsal_middle_phalanx_4 segment SEGMENT_FOR_l_tarsal_middle_phalanx_4";
HAnimSegment229.children = new MFNode();

HAnimSegment229.children[0] = TouchSensor230;

Transform Transform231 = createNode("Transform");
Transform231.translation = new SFVec3f(new float[0.114,0.0044,0.0037]);
Shape Shape232 = createNode("Shape");
Shape232.USE = "JointShape";
Transform231.child = new undefined();

Transform231.child[0] = Shape232;

HAnimSegment229.children[1] = Transform231;

HAnimSite HAnimSite233 = createNode("HAnimSite");
HAnimSite233.name = "SEGMENT_FOR_l_tarsal_middle_phalanx_4_tip";
HAnimSite233.DEF = "hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_4_tip";
Transform Transform234 = createNode("Transform");
Transform234.translation = new SFVec3f(new float[0.114,0.0044,0.0037]);
Shape Shape235 = createNode("Shape");
Shape235.USE = "SiteShape";
Transform234.child = new undefined();

Transform234.child[0] = Shape235;

HAnimSite233.children = new MFNode();

HAnimSite233.children[0] = Transform234;

HAnimSegment229.children[2] = HAnimSite233;

HAnimJoint228.children = new MFNode();

HAnimJoint228.children[0] = HAnimSegment229;

HAnimJoint HAnimJoint236 = createNode("HAnimJoint");
HAnimJoint236.name = "l_tarsal_distal_phalanx_4";
HAnimJoint236.DEF = "hanim_l_tarsal_distal_phalanx_4";
HAnimJoint236.center = new SFVec3f(new float[0.1155,0.0118,0.0008]);
HAnimJoint236.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint236.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment237 = createNode("HAnimSegment");
HAnimSegment237.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_4";
HAnimSegment237.DEF = "hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_4";
TouchSensor TouchSensor238 = createNode("TouchSensor");
TouchSensor238.description = "joint l_tarsal_distal_phalanx_4 segment SEGMENT_FOR_l_tarsal_distal_phalanx_4";
HAnimSegment237.children = new MFNode();

HAnimSegment237.children[0] = TouchSensor238;

Transform Transform239 = createNode("Transform");
Transform239.translation = new SFVec3f(new float[0.1155,0.0118,0.0008]);
Shape Shape240 = createNode("Shape");
Shape240.USE = "JointShape";
Transform239.child = new undefined();

Transform239.child[0] = Shape240;

HAnimSegment237.children[1] = Transform239;

HAnimSite HAnimSite241 = createNode("HAnimSite");
HAnimSite241.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_4_tip";
HAnimSite241.DEF = "hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_4_tip";
Transform Transform242 = createNode("Transform");
Transform242.translation = new SFVec3f(new float[0.1155,0.0118,0.0008]);
Shape Shape243 = createNode("Shape");
Shape243.USE = "SiteShape";
Transform242.child = new undefined();

Transform242.child[0] = Shape243;

HAnimSite241.children = new MFNode();

HAnimSite241.children[0] = Transform242;

HAnimSegment237.children[2] = HAnimSite241;

HAnimJoint236.children = new MFNode();

HAnimJoint236.children[0] = HAnimSegment237;

HAnimJoint228.children[1] = HAnimJoint236;

HAnimJoint220.children[1] = HAnimJoint228;

HAnimJoint212.children[1] = HAnimJoint220;

HAnimJoint204.children[1] = HAnimJoint212;

HAnimJoint HAnimJoint244 = createNode("HAnimJoint");
HAnimJoint244.name = "l_metatarsal_5";
HAnimJoint244.DEF = "hanim_l_metatarsal_5";
HAnimJoint244.center = new SFVec3f(new float[0.1206,-0.0671,0.0124]);
HAnimJoint244.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint244.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment245 = createNode("HAnimSegment");
HAnimSegment245.name = "SEGMENT_FOR_l_metatarsal_5";
HAnimSegment245.DEF = "hanim_SEGMENT_FOR_l_metatarsal_5";
TouchSensor TouchSensor246 = createNode("TouchSensor");
TouchSensor246.description = "joint l_metatarsal_5 segment SEGMENT_FOR_l_metatarsal_5";
HAnimSegment245.children = new MFNode();

HAnimSegment245.children[0] = TouchSensor246;

Transform Transform247 = createNode("Transform");
Transform247.translation = new SFVec3f(new float[0.1206,-0.0671,0.0124]);
Shape Shape248 = createNode("Shape");
Shape248.USE = "JointShape";
Transform247.child = new undefined();

Transform247.child[0] = Shape248;

HAnimSegment245.children[1] = Transform247;

HAnimSite HAnimSite249 = createNode("HAnimSite");
HAnimSite249.name = "SEGMENT_FOR_l_metatarsal_5_tip";
HAnimSite249.DEF = "hanim_SEGMENT_FOR_l_metatarsal_5_tip";
Transform Transform250 = createNode("Transform");
Transform250.translation = new SFVec3f(new float[0.1206,-0.0671,0.0124]);
Shape Shape251 = createNode("Shape");
Shape251.USE = "SiteShape";
Transform250.child = new undefined();

Transform250.child[0] = Shape251;

HAnimSite249.children = new MFNode();

HAnimSite249.children[0] = Transform250;

HAnimSegment245.children[2] = HAnimSite249;

HAnimJoint244.children = new MFNode();

HAnimJoint244.children[0] = HAnimSegment245;

HAnimJoint HAnimJoint252 = createNode("HAnimJoint");
HAnimJoint252.name = "l_tarsal_proximal_phalanx_5";
HAnimJoint252.DEF = "hanim_l_tarsal_proximal_phalanx_5";
HAnimJoint252.center = new SFVec3f(new float[0.1239,-0.0153,0.0051]);
HAnimJoint252.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint252.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment253 = createNode("HAnimSegment");
HAnimSegment253.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_5";
HAnimSegment253.DEF = "hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_5";
TouchSensor TouchSensor254 = createNode("TouchSensor");
TouchSensor254.description = "joint l_tarsal_proximal_phalanx_5 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_5";
HAnimSegment253.children = new MFNode();

HAnimSegment253.children[0] = TouchSensor254;

Transform Transform255 = createNode("Transform");
Transform255.translation = new SFVec3f(new float[0.1239,-0.0153,0.0051]);
Shape Shape256 = createNode("Shape");
Shape256.USE = "JointShape";
Transform255.child = new undefined();

Transform255.child[0] = Shape256;

HAnimSegment253.children[1] = Transform255;

HAnimSite HAnimSite257 = createNode("HAnimSite");
HAnimSite257.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_5_tip";
HAnimSite257.DEF = "hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_5_tip";
Transform Transform258 = createNode("Transform");
Transform258.translation = new SFVec3f(new float[0.1239,-0.0153,0.0051]);
Shape Shape259 = createNode("Shape");
Shape259.USE = "SiteShape";
Transform258.child = new undefined();

Transform258.child[0] = Shape259;

HAnimSite257.children = new MFNode();

HAnimSite257.children[0] = Transform258;

HAnimSegment253.children[2] = HAnimSite257;

HAnimJoint252.children = new MFNode();

HAnimJoint252.children[0] = HAnimSegment253;

HAnimJoint HAnimJoint260 = createNode("HAnimJoint");
HAnimJoint260.name = "l_tarsal_middle_phalanx_5";
HAnimJoint260.DEF = "hanim_l_tarsal_middle_phalanx_5";
HAnimJoint260.center = new SFVec3f(new float[0.1262,-0.0077,0.0023]);
HAnimJoint260.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint260.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment261 = createNode("HAnimSegment");
HAnimSegment261.name = "SEGMENT_FOR_l_tarsal_middle_phalanx_5";
HAnimSegment261.DEF = "hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_5";
TouchSensor TouchSensor262 = createNode("TouchSensor");
TouchSensor262.description = "joint l_tarsal_middle_phalanx_5 segment SEGMENT_FOR_l_tarsal_middle_phalanx_5";
HAnimSegment261.children = new MFNode();

HAnimSegment261.children[0] = TouchSensor262;

Transform Transform263 = createNode("Transform");
Transform263.translation = new SFVec3f(new float[0.1262,-0.0077,0.0023]);
Shape Shape264 = createNode("Shape");
Shape264.USE = "JointShape";
Transform263.child = new undefined();

Transform263.child[0] = Shape264;

HAnimSegment261.children[1] = Transform263;

HAnimSite HAnimSite265 = createNode("HAnimSite");
HAnimSite265.name = "SEGMENT_FOR_l_tarsal_middle_phalanx_5_tip";
HAnimSite265.DEF = "hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_5_tip";
Transform Transform266 = createNode("Transform");
Transform266.translation = new SFVec3f(new float[0.1262,-0.0077,0.0023]);
Shape Shape267 = createNode("Shape");
Shape267.USE = "SiteShape";
Transform266.child = new undefined();

Transform266.child[0] = Shape267;

HAnimSite265.children = new MFNode();

HAnimSite265.children[0] = Transform266;

HAnimSegment261.children[2] = HAnimSite265;

HAnimJoint260.children = new MFNode();

HAnimJoint260.children[0] = HAnimSegment261;

HAnimJoint HAnimJoint268 = createNode("HAnimJoint");
HAnimJoint268.name = "l_tarsal_distal_phalanx_5";
HAnimJoint268.DEF = "hanim_l_tarsal_distal_phalanx_5";
HAnimJoint268.center = new SFVec3f(new float[0.1271,0,0]);
HAnimJoint268.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint268.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment269 = createNode("HAnimSegment");
HAnimSegment269.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_5";
HAnimSegment269.DEF = "hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_5";
TouchSensor TouchSensor270 = createNode("TouchSensor");
TouchSensor270.description = "joint l_tarsal_distal_phalanx_5 segment SEGMENT_FOR_l_tarsal_distal_phalanx_5";
HAnimSegment269.children = new MFNode();

HAnimSegment269.children[0] = TouchSensor270;

Transform Transform271 = createNode("Transform");
Transform271.translation = new SFVec3f(new float[0.1271,0,0]);
Shape Shape272 = createNode("Shape");
Shape272.USE = "JointShape";
Transform271.child = new undefined();

Transform271.child[0] = Shape272;

HAnimSegment269.children[1] = Transform271;

HAnimSite HAnimSite273 = createNode("HAnimSite");
HAnimSite273.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_5_tip";
HAnimSite273.DEF = "hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_5_tip";
Transform Transform274 = createNode("Transform");
Transform274.translation = new SFVec3f(new float[0.1271,0,0]);
Shape Shape275 = createNode("Shape");
Shape275.USE = "SiteShape";
Transform274.child = new undefined();

Transform274.child[0] = Shape275;

HAnimSite273.children = new MFNode();

HAnimSite273.children[0] = Transform274;

HAnimSegment269.children[2] = HAnimSite273;

HAnimJoint268.children = new MFNode();

HAnimJoint268.children[0] = HAnimSegment269;

HAnimJoint260.children[1] = HAnimJoint268;

HAnimJoint252.children[1] = HAnimJoint260;

HAnimJoint244.children[1] = HAnimJoint252;

HAnimJoint204.children[2] = HAnimJoint244;

HAnimJoint196.children[1] = HAnimJoint204;

HAnimJoint68.children[2] = HAnimJoint196;

HAnimJoint60.children[1] = HAnimJoint68;

HAnimJoint52.children[1] = HAnimJoint60;

HAnimJoint44.children[1] = HAnimJoint52;

HAnimJoint HAnimJoint276 = createNode("HAnimJoint");
HAnimJoint276.name = "r_thigh";
HAnimJoint276.DEF = "hanim_r_thigh";
HAnimJoint276.center = new SFVec3f(new float[-0.0948,-0.1202,0.8181]);
HAnimJoint276.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint276.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment277 = createNode("HAnimSegment");
HAnimSegment277.name = "SEGMENT_FOR_r_thigh";
HAnimSegment277.DEF = "hanim_SEGMENT_FOR_r_thigh";
TouchSensor TouchSensor278 = createNode("TouchSensor");
TouchSensor278.description = "joint r_thigh segment SEGMENT_FOR_r_thigh";
HAnimSegment277.children = new MFNode();

HAnimSegment277.children[0] = TouchSensor278;

Transform Transform279 = createNode("Transform");
Transform279.translation = new SFVec3f(new float[-0.0948,-0.1202,0.8181]);
Shape Shape280 = createNode("Shape");
Shape280.USE = "JointShape";
Transform279.child = new undefined();

Transform279.child[0] = Shape280;

HAnimSegment277.children[1] = Transform279;

HAnimSite HAnimSite281 = createNode("HAnimSite");
HAnimSite281.name = "SEGMENT_FOR_r_thigh_tip";
HAnimSite281.DEF = "hanim_SEGMENT_FOR_r_thigh_tip";
Transform Transform282 = createNode("Transform");
Transform282.translation = new SFVec3f(new float[-0.0948,-0.1202,0.8181]);
Shape Shape283 = createNode("Shape");
Shape283.USE = "SiteShape";
Transform282.child = new undefined();

Transform282.child[0] = Shape283;

HAnimSite281.children = new MFNode();

HAnimSite281.children[0] = Transform282;

HAnimSegment277.children[2] = HAnimSite281;

HAnimJoint276.children = new MFNode();

HAnimJoint276.children[0] = HAnimSegment277;

HAnimJoint HAnimJoint284 = createNode("HAnimJoint");
HAnimJoint284.name = "r_calf";
HAnimJoint284.DEF = "hanim_r_calf";
HAnimJoint284.center = new SFVec3f(new float[-0.0928,-0.1213,0.4003]);
HAnimJoint284.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint284.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment285 = createNode("HAnimSegment");
HAnimSegment285.name = "SEGMENT_FOR_r_calf";
HAnimSegment285.DEF = "hanim_SEGMENT_FOR_r_calf";
TouchSensor TouchSensor286 = createNode("TouchSensor");
TouchSensor286.description = "joint r_calf segment SEGMENT_FOR_r_calf";
HAnimSegment285.children = new MFNode();

HAnimSegment285.children[0] = TouchSensor286;

Transform Transform287 = createNode("Transform");
Transform287.translation = new SFVec3f(new float[-0.0928,-0.1213,0.4003]);
Shape Shape288 = createNode("Shape");
Shape288.USE = "JointShape";
Transform287.child = new undefined();

Transform287.child[0] = Shape288;

HAnimSegment285.children[1] = Transform287;

HAnimSite HAnimSite289 = createNode("HAnimSite");
HAnimSite289.name = "SEGMENT_FOR_r_calf_tip";
HAnimSite289.DEF = "hanim_SEGMENT_FOR_r_calf_tip";
Transform Transform290 = createNode("Transform");
Transform290.translation = new SFVec3f(new float[-0.0928,-0.1213,0.4003]);
Shape Shape291 = createNode("Shape");
Shape291.USE = "SiteShape";
Transform290.child = new undefined();

Transform290.child[0] = Shape291;

HAnimSite289.children = new MFNode();

HAnimSite289.children[0] = Transform290;

HAnimSegment285.children[2] = HAnimSite289;

HAnimJoint284.children = new MFNode();

HAnimJoint284.children[0] = HAnimSegment285;

HAnimJoint HAnimJoint292 = createNode("HAnimJoint");
HAnimJoint292.name = "r_talus";
HAnimJoint292.DEF = "hanim_r_talus";
HAnimJoint292.center = new SFVec3f(new float[-0.0886,-0.1123,0.0869]);
HAnimJoint292.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint292.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment293 = createNode("HAnimSegment");
HAnimSegment293.name = "SEGMENT_FOR_r_talus";
HAnimSegment293.DEF = "hanim_SEGMENT_FOR_r_talus";
TouchSensor TouchSensor294 = createNode("TouchSensor");
TouchSensor294.description = "joint r_talus segment SEGMENT_FOR_r_talus";
HAnimSegment293.children = new MFNode();

HAnimSegment293.children[0] = TouchSensor294;

Transform Transform295 = createNode("Transform");
Transform295.translation = new SFVec3f(new float[-0.0886,-0.1123,0.0869]);
Shape Shape296 = createNode("Shape");
Shape296.USE = "JointShape";
Transform295.child = new undefined();

Transform295.child[0] = Shape296;

HAnimSegment293.children[1] = Transform295;

HAnimSite HAnimSite297 = createNode("HAnimSite");
HAnimSite297.name = "SEGMENT_FOR_r_talus_tip";
HAnimSite297.DEF = "hanim_SEGMENT_FOR_r_talus_tip";
Transform Transform298 = createNode("Transform");
Transform298.translation = new SFVec3f(new float[-0.0886,-0.1123,0.0869]);
Shape Shape299 = createNode("Shape");
Shape299.USE = "SiteShape";
Transform298.child = new undefined();

Transform298.child[0] = Shape299;

HAnimSite297.children = new MFNode();

HAnimSite297.children[0] = Transform298;

HAnimSegment293.children[2] = HAnimSite297;

HAnimJoint292.children = new MFNode();

HAnimJoint292.children[0] = HAnimSegment293;

HAnimJoint HAnimJoint300 = createNode("HAnimJoint");
HAnimJoint300.name = "r_navicular";
HAnimJoint300.DEF = "hanim_r_navicular";
HAnimJoint300.center = new SFVec3f(new float[-0.0781,-0.097,0.0283]);
HAnimJoint300.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint300.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment301 = createNode("HAnimSegment");
HAnimSegment301.name = "SEGMENT_FOR_r_navicular";
HAnimSegment301.DEF = "hanim_SEGMENT_FOR_r_navicular";
TouchSensor TouchSensor302 = createNode("TouchSensor");
TouchSensor302.description = "joint r_navicular segment SEGMENT_FOR_r_navicular";
HAnimSegment301.children = new MFNode();

HAnimSegment301.children[0] = TouchSensor302;

Transform Transform303 = createNode("Transform");
Transform303.translation = new SFVec3f(new float[-0.0781,-0.097,0.0283]);
Shape Shape304 = createNode("Shape");
Shape304.USE = "JointShape";
Transform303.child = new undefined();

Transform303.child[0] = Shape304;

HAnimSegment301.children[1] = Transform303;

HAnimSite HAnimSite305 = createNode("HAnimSite");
HAnimSite305.name = "SEGMENT_FOR_r_navicular_tip";
HAnimSite305.DEF = "hanim_SEGMENT_FOR_r_navicular_tip";
Transform Transform306 = createNode("Transform");
Transform306.translation = new SFVec3f(new float[-0.0781,-0.097,0.0283]);
Shape Shape307 = createNode("Shape");
Shape307.USE = "SiteShape";
Transform306.child = new undefined();

Transform306.child[0] = Shape307;

HAnimSite305.children = new MFNode();

HAnimSite305.children[0] = Transform306;

HAnimSegment301.children[2] = HAnimSite305;

HAnimJoint300.children = new MFNode();

HAnimJoint300.children[0] = HAnimSegment301;

HAnimJoint HAnimJoint308 = createNode("HAnimJoint");
HAnimJoint308.name = "r_cuneiform_1";
HAnimJoint308.DEF = "hanim_r_cuneiform_1";
HAnimJoint308.center = new SFVec3f(new float[-0.0672,-0.0835,0.0235]);
HAnimJoint308.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint308.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment309 = createNode("HAnimSegment");
HAnimSegment309.name = "SEGMENT_FOR_r_cuneiform_1";
HAnimSegment309.DEF = "hanim_SEGMENT_FOR_r_cuneiform_1";
TouchSensor TouchSensor310 = createNode("TouchSensor");
TouchSensor310.description = "joint r_cuneiform_1 segment SEGMENT_FOR_r_cuneiform_1";
HAnimSegment309.children = new MFNode();

HAnimSegment309.children[0] = TouchSensor310;

Transform Transform311 = createNode("Transform");
Transform311.translation = new SFVec3f(new float[-0.0672,-0.0835,0.0235]);
Shape Shape312 = createNode("Shape");
Shape312.USE = "JointShape";
Transform311.child = new undefined();

Transform311.child[0] = Shape312;

HAnimSegment309.children[1] = Transform311;

HAnimSite HAnimSite313 = createNode("HAnimSite");
HAnimSite313.name = "SEGMENT_FOR_r_cuneiform_1_tip";
HAnimSite313.DEF = "hanim_SEGMENT_FOR_r_cuneiform_1_tip";
Transform Transform314 = createNode("Transform");
Transform314.translation = new SFVec3f(new float[-0.0672,-0.0835,0.0235]);
Shape Shape315 = createNode("Shape");
Shape315.USE = "SiteShape";
Transform314.child = new undefined();

Transform314.child[0] = Shape315;

HAnimSite313.children = new MFNode();

HAnimSite313.children[0] = Transform314;

HAnimSegment309.children[2] = HAnimSite313;

HAnimJoint308.children = new MFNode();

HAnimJoint308.children[0] = HAnimSegment309;

HAnimJoint HAnimJoint316 = createNode("HAnimJoint");
HAnimJoint316.name = "r_metatarsal_1";
HAnimJoint316.DEF = "hanim_r_metatarsal_1";
HAnimJoint316.center = new SFVec3f(new float[-0.0644,-0.0577,0.0147]);
HAnimJoint316.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint316.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment317 = createNode("HAnimSegment");
HAnimSegment317.name = "SEGMENT_FOR_r_metatarsal_1";
HAnimSegment317.DEF = "hanim_SEGMENT_FOR_r_metatarsal_1";
TouchSensor TouchSensor318 = createNode("TouchSensor");
TouchSensor318.description = "joint r_metatarsal_1 segment SEGMENT_FOR_r_metatarsal_1";
HAnimSegment317.children = new MFNode();

HAnimSegment317.children[0] = TouchSensor318;

Transform Transform319 = createNode("Transform");
Transform319.translation = new SFVec3f(new float[-0.0644,-0.0577,0.0147]);
Shape Shape320 = createNode("Shape");
Shape320.USE = "JointShape";
Transform319.child = new undefined();

Transform319.child[0] = Shape320;

HAnimSegment317.children[1] = Transform319;

HAnimSite HAnimSite321 = createNode("HAnimSite");
HAnimSite321.name = "SEGMENT_FOR_r_metatarsal_1_tip";
HAnimSite321.DEF = "hanim_SEGMENT_FOR_r_metatarsal_1_tip";
Transform Transform322 = createNode("Transform");
Transform322.translation = new SFVec3f(new float[-0.0644,-0.0577,0.0147]);
Shape Shape323 = createNode("Shape");
Shape323.USE = "SiteShape";
Transform322.child = new undefined();

Transform322.child[0] = Shape323;

HAnimSite321.children = new MFNode();

HAnimSite321.children[0] = Transform322;

HAnimSegment317.children[2] = HAnimSite321;

HAnimJoint316.children = new MFNode();

HAnimJoint316.children[0] = HAnimSegment317;

HAnimJoint HAnimJoint324 = createNode("HAnimJoint");
HAnimJoint324.name = "r_tarsal_proximal_phalanx_1";
HAnimJoint324.DEF = "hanim_r_tarsal_proximal_phalanx_1";
HAnimJoint324.center = new SFVec3f(new float[-0.0619,-0.0083,0.0059]);
HAnimJoint324.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint324.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment325 = createNode("HAnimSegment");
HAnimSegment325.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_1";
HAnimSegment325.DEF = "hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_1";
TouchSensor TouchSensor326 = createNode("TouchSensor");
TouchSensor326.description = "joint r_tarsal_proximal_phalanx_1 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_1";
HAnimSegment325.children = new MFNode();

HAnimSegment325.children[0] = TouchSensor326;

Transform Transform327 = createNode("Transform");
Transform327.translation = new SFVec3f(new float[-0.0619,-0.0083,0.0059]);
Shape Shape328 = createNode("Shape");
Shape328.USE = "JointShape";
Transform327.child = new undefined();

Transform327.child[0] = Shape328;

HAnimSegment325.children[1] = Transform327;

HAnimSite HAnimSite329 = createNode("HAnimSite");
HAnimSite329.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_1_tip";
HAnimSite329.DEF = "hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_1_tip";
Transform Transform330 = createNode("Transform");
Transform330.translation = new SFVec3f(new float[-0.0619,-0.0083,0.0059]);
Shape Shape331 = createNode("Shape");
Shape331.USE = "SiteShape";
Transform330.child = new undefined();

Transform330.child[0] = Shape331;

HAnimSite329.children = new MFNode();

HAnimSite329.children[0] = Transform330;

HAnimSegment325.children[2] = HAnimSite329;

HAnimJoint324.children = new MFNode();

HAnimJoint324.children[0] = HAnimSegment325;

HAnimJoint HAnimJoint332 = createNode("HAnimJoint");
HAnimJoint332.name = "r_tarsal_distal_phalanx_1";
HAnimJoint332.DEF = "hanim_r_tarsal_distal_phalanx_1";
HAnimJoint332.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint332.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment333 = createNode("HAnimSegment");
HAnimSegment333.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_1";
HAnimSegment333.DEF = "hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_1";
TouchSensor TouchSensor334 = createNode("TouchSensor");
TouchSensor334.description = "joint r_tarsal_distal_phalanx_1 segment SEGMENT_FOR_r_tarsal_distal_phalanx_1";
HAnimSegment333.children = new MFNode();

HAnimSegment333.children[0] = TouchSensor334;

Transform Transform335 = createNode("Transform");
Shape Shape336 = createNode("Shape");
Shape336.USE = "JointShape";
Transform335.child = new undefined();

Transform335.child[0] = Shape336;

HAnimSegment333.children[1] = Transform335;

HAnimSite HAnimSite337 = createNode("HAnimSite");
HAnimSite337.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_1_tip";
HAnimSite337.DEF = "hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_1_tip";
Transform Transform338 = createNode("Transform");
Shape Shape339 = createNode("Shape");
Shape339.USE = "SiteShape";
Transform338.child = new undefined();

Transform338.child[0] = Shape339;

HAnimSite337.children = new MFNode();

HAnimSite337.children[0] = Transform338;

HAnimSegment333.children[2] = HAnimSite337;

HAnimJoint332.children = new MFNode();

HAnimJoint332.children[0] = HAnimSegment333;

HAnimJoint324.children[1] = HAnimJoint332;

HAnimJoint316.children[1] = HAnimJoint324;

HAnimJoint308.children[1] = HAnimJoint316;

HAnimJoint300.children[1] = HAnimJoint308;

HAnimJoint HAnimJoint340 = createNode("HAnimJoint");
HAnimJoint340.name = "r_cuneiform_2";
HAnimJoint340.DEF = "hanim_r_cuneiform_2";
HAnimJoint340.center = new SFVec3f(new float[-0.0812,-0.0805,0.025]);
HAnimJoint340.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint340.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment341 = createNode("HAnimSegment");
HAnimSegment341.name = "SEGMENT_FOR_r_cuneiform_2";
HAnimSegment341.DEF = "hanim_SEGMENT_FOR_r_cuneiform_2";
TouchSensor TouchSensor342 = createNode("TouchSensor");
TouchSensor342.description = "joint r_cuneiform_2 segment SEGMENT_FOR_r_cuneiform_2";
HAnimSegment341.children = new MFNode();

HAnimSegment341.children[0] = TouchSensor342;

Transform Transform343 = createNode("Transform");
Transform343.translation = new SFVec3f(new float[-0.0812,-0.0805,0.025]);
Shape Shape344 = createNode("Shape");
Shape344.USE = "JointShape";
Transform343.child = new undefined();

Transform343.child[0] = Shape344;

HAnimSegment341.children[1] = Transform343;

HAnimSite HAnimSite345 = createNode("HAnimSite");
HAnimSite345.name = "SEGMENT_FOR_r_cuneiform_2_tip";
HAnimSite345.DEF = "hanim_SEGMENT_FOR_r_cuneiform_2_tip";
Transform Transform346 = createNode("Transform");
Transform346.translation = new SFVec3f(new float[-0.0812,-0.0805,0.025]);
Shape Shape347 = createNode("Shape");
Shape347.USE = "SiteShape";
Transform346.child = new undefined();

Transform346.child[0] = Shape347;

HAnimSite345.children = new MFNode();

HAnimSite345.children[0] = Transform346;

HAnimSegment341.children[2] = HAnimSite345;

HAnimJoint340.children = new MFNode();

HAnimJoint340.children[0] = HAnimSegment341;

HAnimJoint HAnimJoint348 = createNode("HAnimJoint");
HAnimJoint348.name = "r_metatarsal_2";
HAnimJoint348.DEF = "hanim_r_metatarsal_2";
HAnimJoint348.center = new SFVec3f(new float[-0.08,-0.0608,0.0175]);
HAnimJoint348.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint348.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment349 = createNode("HAnimSegment");
HAnimSegment349.name = "SEGMENT_FOR_r_metatarsal_2";
HAnimSegment349.DEF = "hanim_SEGMENT_FOR_r_metatarsal_2";
TouchSensor TouchSensor350 = createNode("TouchSensor");
TouchSensor350.description = "joint r_metatarsal_2 segment SEGMENT_FOR_r_metatarsal_2";
HAnimSegment349.children = new MFNode();

HAnimSegment349.children[0] = TouchSensor350;

Transform Transform351 = createNode("Transform");
Transform351.translation = new SFVec3f(new float[-0.08,-0.0608,0.0175]);
Shape Shape352 = createNode("Shape");
Shape352.USE = "JointShape";
Transform351.child = new undefined();

Transform351.child[0] = Shape352;

HAnimSegment349.children[1] = Transform351;

HAnimSite HAnimSite353 = createNode("HAnimSite");
HAnimSite353.name = "SEGMENT_FOR_r_metatarsal_2_tip";
HAnimSite353.DEF = "hanim_SEGMENT_FOR_r_metatarsal_2_tip";
Transform Transform354 = createNode("Transform");
Transform354.translation = new SFVec3f(new float[-0.08,-0.0608,0.0175]);
Shape Shape355 = createNode("Shape");
Shape355.USE = "SiteShape";
Transform354.child = new undefined();

Transform354.child[0] = Shape355;

HAnimSite353.children = new MFNode();

HAnimSite353.children[0] = Transform354;

HAnimSegment349.children[2] = HAnimSite353;

HAnimJoint348.children = new MFNode();

HAnimJoint348.children[0] = HAnimSegment349;

HAnimJoint HAnimJoint356 = createNode("HAnimJoint");
HAnimJoint356.name = "r_tarsal_proximal_phalanx_2";
HAnimJoint356.DEF = "hanim_r_tarsal_proximal_phalanx_2";
HAnimJoint356.center = new SFVec3f(new float[-0.0823,-0.004,0.0064]);
HAnimJoint356.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint356.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment357 = createNode("HAnimSegment");
HAnimSegment357.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_2";
HAnimSegment357.DEF = "hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_2";
TouchSensor TouchSensor358 = createNode("TouchSensor");
TouchSensor358.description = "joint r_tarsal_proximal_phalanx_2 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_2";
HAnimSegment357.children = new MFNode();

HAnimSegment357.children[0] = TouchSensor358;

Transform Transform359 = createNode("Transform");
Transform359.translation = new SFVec3f(new float[-0.0823,-0.004,0.0064]);
Shape Shape360 = createNode("Shape");
Shape360.USE = "JointShape";
Transform359.child = new undefined();

Transform359.child[0] = Shape360;

HAnimSegment357.children[1] = Transform359;

HAnimSite HAnimSite361 = createNode("HAnimSite");
HAnimSite361.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_2_tip";
HAnimSite361.DEF = "hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_2_tip";
Transform Transform362 = createNode("Transform");
Transform362.translation = new SFVec3f(new float[-0.0823,-0.004,0.0064]);
Shape Shape363 = createNode("Shape");
Shape363.USE = "SiteShape";
Transform362.child = new undefined();

Transform362.child[0] = Shape363;

HAnimSite361.children = new MFNode();

HAnimSite361.children[0] = Transform362;

HAnimSegment357.children[2] = HAnimSite361;

HAnimJoint356.children = new MFNode();

HAnimJoint356.children[0] = HAnimSegment357;

HAnimJoint HAnimJoint364 = createNode("HAnimJoint");
HAnimJoint364.name = "r_tarsal_middle_phalanx_2";
HAnimJoint364.DEF = "hanim_r_tarsal_middle_phalanx_2";
HAnimJoint364.center = new SFVec3f(new float[-0.0841,0.0121,0.0041]);
HAnimJoint364.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint364.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment365 = createNode("HAnimSegment");
HAnimSegment365.name = "SEGMENT_FOR_r_tarsal_middle_phalanx_2";
HAnimSegment365.DEF = "hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_2";
TouchSensor TouchSensor366 = createNode("TouchSensor");
TouchSensor366.description = "joint r_tarsal_middle_phalanx_2 segment SEGMENT_FOR_r_tarsal_middle_phalanx_2";
HAnimSegment365.children = new MFNode();

HAnimSegment365.children[0] = TouchSensor366;

Transform Transform367 = createNode("Transform");
Transform367.translation = new SFVec3f(new float[-0.0841,0.0121,0.0041]);
Shape Shape368 = createNode("Shape");
Shape368.USE = "JointShape";
Transform367.child = new undefined();

Transform367.child[0] = Shape368;

HAnimSegment365.children[1] = Transform367;

HAnimSite HAnimSite369 = createNode("HAnimSite");
HAnimSite369.name = "SEGMENT_FOR_r_tarsal_middle_phalanx_2_tip";
HAnimSite369.DEF = "hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_2_tip";
Transform Transform370 = createNode("Transform");
Transform370.translation = new SFVec3f(new float[-0.0841,0.0121,0.0041]);
Shape Shape371 = createNode("Shape");
Shape371.USE = "SiteShape";
Transform370.child = new undefined();

Transform370.child[0] = Shape371;

HAnimSite369.children = new MFNode();

HAnimSite369.children[0] = Transform370;

HAnimSegment365.children[2] = HAnimSite369;

HAnimJoint364.children = new MFNode();

HAnimJoint364.children[0] = HAnimSegment365;

HAnimJoint HAnimJoint372 = createNode("HAnimJoint");
HAnimJoint372.name = "r_tarsal_distal_phalanx_2";
HAnimJoint372.DEF = "hanim_r_tarsal_distal_phalanx_2";
HAnimJoint372.center = new SFVec3f(new float[-0.0841,0.0216,0.0013]);
HAnimJoint372.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint372.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment373 = createNode("HAnimSegment");
HAnimSegment373.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_2";
HAnimSegment373.DEF = "hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_2";
TouchSensor TouchSensor374 = createNode("TouchSensor");
TouchSensor374.description = "joint r_tarsal_distal_phalanx_2 segment SEGMENT_FOR_r_tarsal_distal_phalanx_2";
HAnimSegment373.children = new MFNode();

HAnimSegment373.children[0] = TouchSensor374;

Transform Transform375 = createNode("Transform");
Transform375.translation = new SFVec3f(new float[-0.0841,0.0216,0.0013]);
Shape Shape376 = createNode("Shape");
Shape376.USE = "JointShape";
Transform375.child = new undefined();

Transform375.child[0] = Shape376;

HAnimSegment373.children[1] = Transform375;

HAnimSite HAnimSite377 = createNode("HAnimSite");
HAnimSite377.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_2_tip";
HAnimSite377.DEF = "hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_2_tip";
Transform Transform378 = createNode("Transform");
Transform378.translation = new SFVec3f(new float[-0.0841,0.0216,0.0013]);
Shape Shape379 = createNode("Shape");
Shape379.USE = "SiteShape";
Transform378.child = new undefined();

Transform378.child[0] = Shape379;

HAnimSite377.children = new MFNode();

HAnimSite377.children[0] = Transform378;

HAnimSegment373.children[2] = HAnimSite377;

HAnimJoint372.children = new MFNode();

HAnimJoint372.children[0] = HAnimSegment373;

HAnimJoint364.children[1] = HAnimJoint372;

HAnimJoint356.children[1] = HAnimJoint364;

HAnimJoint348.children[1] = HAnimJoint356;

HAnimJoint340.children[1] = HAnimJoint348;

HAnimJoint300.children[2] = HAnimJoint340;

HAnimJoint HAnimJoint380 = createNode("HAnimJoint");
HAnimJoint380.name = "r_cuneiform_3";
HAnimJoint380.DEF = "hanim_r_cuneiform_3";
HAnimJoint380.center = new SFVec3f(new float[-0.0928,-0.0821,0.0248]);
HAnimJoint380.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint380.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment381 = createNode("HAnimSegment");
HAnimSegment381.name = "SEGMENT_FOR_r_cuneiform_3";
HAnimSegment381.DEF = "hanim_SEGMENT_FOR_r_cuneiform_3";
TouchSensor TouchSensor382 = createNode("TouchSensor");
TouchSensor382.description = "joint r_cuneiform_3 segment SEGMENT_FOR_r_cuneiform_3";
HAnimSegment381.children = new MFNode();

HAnimSegment381.children[0] = TouchSensor382;

Transform Transform383 = createNode("Transform");
Transform383.translation = new SFVec3f(new float[-0.0928,-0.0821,0.0248]);
Shape Shape384 = createNode("Shape");
Shape384.USE = "JointShape";
Transform383.child = new undefined();

Transform383.child[0] = Shape384;

HAnimSegment381.children[1] = Transform383;

HAnimSite HAnimSite385 = createNode("HAnimSite");
HAnimSite385.name = "SEGMENT_FOR_r_cuneiform_3_tip";
HAnimSite385.DEF = "hanim_SEGMENT_FOR_r_cuneiform_3_tip";
Transform Transform386 = createNode("Transform");
Transform386.translation = new SFVec3f(new float[-0.0928,-0.0821,0.0248]);
Shape Shape387 = createNode("Shape");
Shape387.USE = "SiteShape";
Transform386.child = new undefined();

Transform386.child[0] = Shape387;

HAnimSite385.children = new MFNode();

HAnimSite385.children[0] = Transform386;

HAnimSegment381.children[2] = HAnimSite385;

HAnimJoint380.children = new MFNode();

HAnimJoint380.children[0] = HAnimSegment381;

HAnimJoint HAnimJoint388 = createNode("HAnimJoint");
HAnimJoint388.name = "r_metatarsal_3";
HAnimJoint388.DEF = "hanim_r_metatarsal_3";
HAnimJoint388.center = new SFVec3f(new float[-0.0944,-0.0625,0.0175]);
HAnimJoint388.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint388.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment389 = createNode("HAnimSegment");
HAnimSegment389.name = "SEGMENT_FOR_r_metatarsal_3";
HAnimSegment389.DEF = "hanim_SEGMENT_FOR_r_metatarsal_3";
TouchSensor TouchSensor390 = createNode("TouchSensor");
TouchSensor390.description = "joint r_metatarsal_3 segment SEGMENT_FOR_r_metatarsal_3";
HAnimSegment389.children = new MFNode();

HAnimSegment389.children[0] = TouchSensor390;

Transform Transform391 = createNode("Transform");
Transform391.translation = new SFVec3f(new float[-0.0944,-0.0625,0.0175]);
Shape Shape392 = createNode("Shape");
Shape392.USE = "JointShape";
Transform391.child = new undefined();

Transform391.child[0] = Shape392;

HAnimSegment389.children[1] = Transform391;

HAnimSite HAnimSite393 = createNode("HAnimSite");
HAnimSite393.name = "SEGMENT_FOR_r_metatarsal_3_tip";
HAnimSite393.DEF = "hanim_SEGMENT_FOR_r_metatarsal_3_tip";
Transform Transform394 = createNode("Transform");
Transform394.translation = new SFVec3f(new float[-0.0944,-0.0625,0.0175]);
Shape Shape395 = createNode("Shape");
Shape395.USE = "SiteShape";
Transform394.child = new undefined();

Transform394.child[0] = Shape395;

HAnimSite393.children = new MFNode();

HAnimSite393.children[0] = Transform394;

HAnimSegment389.children[2] = HAnimSite393;

HAnimJoint388.children = new MFNode();

HAnimJoint388.children[0] = HAnimSegment389;

HAnimJoint HAnimJoint396 = createNode("HAnimJoint");
HAnimJoint396.name = "r_tarsal_proximal_phalanx_3";
HAnimJoint396.DEF = "hanim_r_tarsal_proximal_phalanx_3";
HAnimJoint396.center = new SFVec3f(new float[-0.0963,-0.0065,0.0065]);
HAnimJoint396.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint396.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment397 = createNode("HAnimSegment");
HAnimSegment397.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_3";
HAnimSegment397.DEF = "hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_3";
TouchSensor TouchSensor398 = createNode("TouchSensor");
TouchSensor398.description = "joint r_tarsal_proximal_phalanx_3 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_3";
HAnimSegment397.children = new MFNode();

HAnimSegment397.children[0] = TouchSensor398;

Transform Transform399 = createNode("Transform");
Transform399.translation = new SFVec3f(new float[-0.0963,-0.0065,0.0065]);
Shape Shape400 = createNode("Shape");
Shape400.USE = "JointShape";
Transform399.child = new undefined();

Transform399.child[0] = Shape400;

HAnimSegment397.children[1] = Transform399;

HAnimSite HAnimSite401 = createNode("HAnimSite");
HAnimSite401.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_3_tip";
HAnimSite401.DEF = "hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_3_tip";
Transform Transform402 = createNode("Transform");
Transform402.translation = new SFVec3f(new float[-0.0963,-0.0065,0.0065]);
Shape Shape403 = createNode("Shape");
Shape403.USE = "SiteShape";
Transform402.child = new undefined();

Transform402.child[0] = Shape403;

HAnimSite401.children = new MFNode();

HAnimSite401.children[0] = Transform402;

HAnimSegment397.children[2] = HAnimSite401;

HAnimJoint396.children = new MFNode();

HAnimJoint396.children[0] = HAnimSegment397;

HAnimJoint HAnimJoint404 = createNode("HAnimJoint");
HAnimJoint404.name = "r_tarsal_middle_phalanx_3";
HAnimJoint404.DEF = "hanim_r_tarsal_middle_phalanx_3";
HAnimJoint404.center = new SFVec3f(new float[-0.0987,0.0086,0.0034]);
HAnimJoint404.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint404.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment405 = createNode("HAnimSegment");
HAnimSegment405.name = "SEGMENT_FOR_r_tarsal_middle_phalanx_3";
HAnimSegment405.DEF = "hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_3";
TouchSensor TouchSensor406 = createNode("TouchSensor");
TouchSensor406.description = "joint r_tarsal_middle_phalanx_3 segment SEGMENT_FOR_r_tarsal_middle_phalanx_3";
HAnimSegment405.children = new MFNode();

HAnimSegment405.children[0] = TouchSensor406;

Transform Transform407 = createNode("Transform");
Transform407.translation = new SFVec3f(new float[-0.0987,0.0086,0.0034]);
Shape Shape408 = createNode("Shape");
Shape408.USE = "JointShape";
Transform407.child = new undefined();

Transform407.child[0] = Shape408;

HAnimSegment405.children[1] = Transform407;

HAnimSite HAnimSite409 = createNode("HAnimSite");
HAnimSite409.name = "SEGMENT_FOR_r_tarsal_middle_phalanx_3_tip";
HAnimSite409.DEF = "hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_3_tip";
Transform Transform410 = createNode("Transform");
Transform410.translation = new SFVec3f(new float[-0.0987,0.0086,0.0034]);
Shape Shape411 = createNode("Shape");
Shape411.USE = "SiteShape";
Transform410.child = new undefined();

Transform410.child[0] = Shape411;

HAnimSite409.children = new MFNode();

HAnimSite409.children[0] = Transform410;

HAnimSegment405.children[2] = HAnimSite409;

HAnimJoint404.children = new MFNode();

HAnimJoint404.children[0] = HAnimSegment405;

HAnimJoint HAnimJoint412 = createNode("HAnimJoint");
HAnimJoint412.name = "r_tarsal_distal_phalanx_3";
HAnimJoint412.DEF = "hanim_r_tarsal_distal_phalanx_3";
HAnimJoint412.center = new SFVec3f(new float[-0.1002,0.0178,0.0013]);
HAnimJoint412.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint412.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment413 = createNode("HAnimSegment");
HAnimSegment413.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_3";
HAnimSegment413.DEF = "hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_3";
TouchSensor TouchSensor414 = createNode("TouchSensor");
TouchSensor414.description = "joint r_tarsal_distal_phalanx_3 segment SEGMENT_FOR_r_tarsal_distal_phalanx_3";
HAnimSegment413.children = new MFNode();

HAnimSegment413.children[0] = TouchSensor414;

Transform Transform415 = createNode("Transform");
Transform415.translation = new SFVec3f(new float[-0.1002,0.0178,0.0013]);
Shape Shape416 = createNode("Shape");
Shape416.USE = "JointShape";
Transform415.child = new undefined();

Transform415.child[0] = Shape416;

HAnimSegment413.children[1] = Transform415;

HAnimSite HAnimSite417 = createNode("HAnimSite");
HAnimSite417.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_3_tip";
HAnimSite417.DEF = "hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_3_tip";
Transform Transform418 = createNode("Transform");
Transform418.translation = new SFVec3f(new float[-0.1002,0.0178,0.0013]);
Shape Shape419 = createNode("Shape");
Shape419.USE = "SiteShape";
Transform418.child = new undefined();

Transform418.child[0] = Shape419;

HAnimSite417.children = new MFNode();

HAnimSite417.children[0] = Transform418;

HAnimSegment413.children[2] = HAnimSite417;

HAnimJoint412.children = new MFNode();

HAnimJoint412.children[0] = HAnimSegment413;

HAnimJoint404.children[1] = HAnimJoint412;

HAnimJoint396.children[1] = HAnimJoint404;

HAnimJoint388.children[1] = HAnimJoint396;

HAnimJoint380.children[1] = HAnimJoint388;

HAnimJoint300.children[3] = HAnimJoint380;

HAnimJoint292.children[1] = HAnimJoint300;

HAnimJoint HAnimJoint420 = createNode("HAnimJoint");
HAnimJoint420.name = "r_calcaneus";
HAnimJoint420.DEF = "hanim_r_calcaneus";
HAnimJoint420.center = new SFVec3f(new float[-0.0889,-0.1278,0.0494]);
HAnimJoint420.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint420.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment421 = createNode("HAnimSegment");
HAnimSegment421.name = "SEGMENT_FOR_r_calcaneus";
HAnimSegment421.DEF = "hanim_SEGMENT_FOR_r_calcaneus";
TouchSensor TouchSensor422 = createNode("TouchSensor");
TouchSensor422.description = "joint r_calcaneus segment SEGMENT_FOR_r_calcaneus";
HAnimSegment421.children = new MFNode();

HAnimSegment421.children[0] = TouchSensor422;

Transform Transform423 = createNode("Transform");
Transform423.translation = new SFVec3f(new float[-0.0889,-0.1278,0.0494]);
Shape Shape424 = createNode("Shape");
Shape424.USE = "JointShape";
Transform423.child = new undefined();

Transform423.child[0] = Shape424;

HAnimSegment421.children[1] = Transform423;

HAnimSite HAnimSite425 = createNode("HAnimSite");
HAnimSite425.name = "SEGMENT_FOR_r_calcaneus_tip";
HAnimSite425.DEF = "hanim_SEGMENT_FOR_r_calcaneus_tip";
Transform Transform426 = createNode("Transform");
Transform426.translation = new SFVec3f(new float[-0.0889,-0.1278,0.0494]);
Shape Shape427 = createNode("Shape");
Shape427.USE = "SiteShape";
Transform426.child = new undefined();

Transform426.child[0] = Shape427;

HAnimSite425.children = new MFNode();

HAnimSite425.children[0] = Transform426;

HAnimSegment421.children[2] = HAnimSite425;

HAnimJoint420.children = new MFNode();

HAnimJoint420.children[0] = HAnimSegment421;

HAnimJoint HAnimJoint428 = createNode("HAnimJoint");
HAnimJoint428.name = "r_cuboid";
HAnimJoint428.DEF = "hanim_r_cuboid";
HAnimJoint428.center = new SFVec3f(new float[-0.1105,-0.0998,0.0267]);
HAnimJoint428.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint428.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment429 = createNode("HAnimSegment");
HAnimSegment429.name = "SEGMENT_FOR_r_cuboid";
HAnimSegment429.DEF = "hanim_SEGMENT_FOR_r_cuboid";
TouchSensor TouchSensor430 = createNode("TouchSensor");
TouchSensor430.description = "joint r_cuboid segment SEGMENT_FOR_r_cuboid";
HAnimSegment429.children = new MFNode();

HAnimSegment429.children[0] = TouchSensor430;

Transform Transform431 = createNode("Transform");
Transform431.translation = new SFVec3f(new float[-0.1105,-0.0998,0.0267]);
Shape Shape432 = createNode("Shape");
Shape432.USE = "JointShape";
Transform431.child = new undefined();

Transform431.child[0] = Shape432;

HAnimSegment429.children[1] = Transform431;

HAnimSite HAnimSite433 = createNode("HAnimSite");
HAnimSite433.name = "SEGMENT_FOR_r_cuboid_tip";
HAnimSite433.DEF = "hanim_SEGMENT_FOR_r_cuboid_tip";
Transform Transform434 = createNode("Transform");
Transform434.translation = new SFVec3f(new float[-0.1105,-0.0998,0.0267]);
Shape Shape435 = createNode("Shape");
Shape435.USE = "SiteShape";
Transform434.child = new undefined();

Transform434.child[0] = Shape435;

HAnimSite433.children = new MFNode();

HAnimSite433.children[0] = Transform434;

HAnimSegment429.children[2] = HAnimSite433;

HAnimJoint428.children = new MFNode();

HAnimJoint428.children[0] = HAnimSegment429;

HAnimJoint HAnimJoint436 = createNode("HAnimJoint");
HAnimJoint436.name = "r_metatarsal_4";
HAnimJoint436.DEF = "hanim_r_metatarsal_4";
HAnimJoint436.center = new SFVec3f(new float[-0.1063,-0.0634,0.016]);
HAnimJoint436.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint436.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment437 = createNode("HAnimSegment");
HAnimSegment437.name = "SEGMENT_FOR_r_metatarsal_4";
HAnimSegment437.DEF = "hanim_SEGMENT_FOR_r_metatarsal_4";
TouchSensor TouchSensor438 = createNode("TouchSensor");
TouchSensor438.description = "joint r_metatarsal_4 segment SEGMENT_FOR_r_metatarsal_4";
HAnimSegment437.children = new MFNode();

HAnimSegment437.children[0] = TouchSensor438;

Transform Transform439 = createNode("Transform");
Transform439.translation = new SFVec3f(new float[-0.1063,-0.0634,0.016]);
Shape Shape440 = createNode("Shape");
Shape440.USE = "JointShape";
Transform439.child = new undefined();

Transform439.child[0] = Shape440;

HAnimSegment437.children[1] = Transform439;

HAnimSite HAnimSite441 = createNode("HAnimSite");
HAnimSite441.name = "SEGMENT_FOR_r_metatarsal_4_tip";
HAnimSite441.DEF = "hanim_SEGMENT_FOR_r_metatarsal_4_tip";
Transform Transform442 = createNode("Transform");
Transform442.translation = new SFVec3f(new float[-0.1063,-0.0634,0.016]);
Shape Shape443 = createNode("Shape");
Shape443.USE = "SiteShape";
Transform442.child = new undefined();

Transform442.child[0] = Shape443;

HAnimSite441.children = new MFNode();

HAnimSite441.children[0] = Transform442;

HAnimSegment437.children[2] = HAnimSite441;

HAnimJoint436.children = new MFNode();

HAnimJoint436.children[0] = HAnimSegment437;

HAnimJoint HAnimJoint444 = createNode("HAnimJoint");
HAnimJoint444.name = "r_tarsal_proximal_phalanx_4";
HAnimJoint444.DEF = "hanim_r_tarsal_proximal_phalanx_4";
HAnimJoint444.center = new SFVec3f(new float[-0.1097,-0.0107,0.0058]);
HAnimJoint444.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint444.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment445 = createNode("HAnimSegment");
HAnimSegment445.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_4";
HAnimSegment445.DEF = "hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_4";
TouchSensor TouchSensor446 = createNode("TouchSensor");
TouchSensor446.description = "joint r_tarsal_proximal_phalanx_4 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_4";
HAnimSegment445.children = new MFNode();

HAnimSegment445.children[0] = TouchSensor446;

Transform Transform447 = createNode("Transform");
Transform447.translation = new SFVec3f(new float[-0.1097,-0.0107,0.0058]);
Shape Shape448 = createNode("Shape");
Shape448.USE = "JointShape";
Transform447.child = new undefined();

Transform447.child[0] = Shape448;

HAnimSegment445.children[1] = Transform447;

HAnimSite HAnimSite449 = createNode("HAnimSite");
HAnimSite449.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_4_tip";
HAnimSite449.DEF = "hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_4_tip";
Transform Transform450 = createNode("Transform");
Transform450.translation = new SFVec3f(new float[-0.1097,-0.0107,0.0058]);
Shape Shape451 = createNode("Shape");
Shape451.USE = "SiteShape";
Transform450.child = new undefined();

Transform450.child[0] = Shape451;

HAnimSite449.children = new MFNode();

HAnimSite449.children[0] = Transform450;

HAnimSegment445.children[2] = HAnimSite449;

HAnimJoint444.children = new MFNode();

HAnimJoint444.children[0] = HAnimSegment445;

HAnimJoint HAnimJoint452 = createNode("HAnimJoint");
HAnimJoint452.name = "r_tarsal_middle_phalanx_4";
HAnimJoint452.DEF = "hanim_r_tarsal_middle_phalanx_4";
HAnimJoint452.center = new SFVec3f(new float[-0.114,0.0044,0.0037]);
HAnimJoint452.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint452.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment453 = createNode("HAnimSegment");
HAnimSegment453.name = "SEGMENT_FOR_r_tarsal_middle_phalanx_4";
HAnimSegment453.DEF = "hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_4";
TouchSensor TouchSensor454 = createNode("TouchSensor");
TouchSensor454.description = "joint r_tarsal_middle_phalanx_4 segment SEGMENT_FOR_r_tarsal_middle_phalanx_4";
HAnimSegment453.children = new MFNode();

HAnimSegment453.children[0] = TouchSensor454;

Transform Transform455 = createNode("Transform");
Transform455.translation = new SFVec3f(new float[-0.114,0.0044,0.0037]);
Shape Shape456 = createNode("Shape");
Shape456.USE = "JointShape";
Transform455.child = new undefined();

Transform455.child[0] = Shape456;

HAnimSegment453.children[1] = Transform455;

HAnimSite HAnimSite457 = createNode("HAnimSite");
HAnimSite457.name = "SEGMENT_FOR_r_tarsal_middle_phalanx_4_tip";
HAnimSite457.DEF = "hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_4_tip";
Transform Transform458 = createNode("Transform");
Transform458.translation = new SFVec3f(new float[-0.114,0.0044,0.0037]);
Shape Shape459 = createNode("Shape");
Shape459.USE = "SiteShape";
Transform458.child = new undefined();

Transform458.child[0] = Shape459;

HAnimSite457.children = new MFNode();

HAnimSite457.children[0] = Transform458;

HAnimSegment453.children[2] = HAnimSite457;

HAnimJoint452.children = new MFNode();

HAnimJoint452.children[0] = HAnimSegment453;

HAnimJoint HAnimJoint460 = createNode("HAnimJoint");
HAnimJoint460.name = "r_tarsal_distal_phalanx_4";
HAnimJoint460.DEF = "hanim_r_tarsal_distal_phalanx_4";
HAnimJoint460.center = new SFVec3f(new float[-0.1155,0.0118,0.0008]);
HAnimJoint460.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint460.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment461 = createNode("HAnimSegment");
HAnimSegment461.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_4";
HAnimSegment461.DEF = "hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_4";
TouchSensor TouchSensor462 = createNode("TouchSensor");
TouchSensor462.description = "joint r_tarsal_distal_phalanx_4 segment SEGMENT_FOR_r_tarsal_distal_phalanx_4";
HAnimSegment461.children = new MFNode();

HAnimSegment461.children[0] = TouchSensor462;

Transform Transform463 = createNode("Transform");
Transform463.translation = new SFVec3f(new float[-0.1155,0.0118,0.0008]);
Shape Shape464 = createNode("Shape");
Shape464.USE = "JointShape";
Transform463.child = new undefined();

Transform463.child[0] = Shape464;

HAnimSegment461.children[1] = Transform463;

HAnimSite HAnimSite465 = createNode("HAnimSite");
HAnimSite465.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_4_tip";
HAnimSite465.DEF = "hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_4_tip";
Transform Transform466 = createNode("Transform");
Transform466.translation = new SFVec3f(new float[-0.1155,0.0118,0.0008]);
Shape Shape467 = createNode("Shape");
Shape467.USE = "SiteShape";
Transform466.child = new undefined();

Transform466.child[0] = Shape467;

HAnimSite465.children = new MFNode();

HAnimSite465.children[0] = Transform466;

HAnimSegment461.children[2] = HAnimSite465;

HAnimJoint460.children = new MFNode();

HAnimJoint460.children[0] = HAnimSegment461;

HAnimJoint452.children[1] = HAnimJoint460;

HAnimJoint444.children[1] = HAnimJoint452;

HAnimJoint436.children[1] = HAnimJoint444;

HAnimJoint428.children[1] = HAnimJoint436;

HAnimJoint HAnimJoint468 = createNode("HAnimJoint");
HAnimJoint468.name = "r_metatarsal_5";
HAnimJoint468.DEF = "hanim_r_metatarsal_5";
HAnimJoint468.center = new SFVec3f(new float[-0.1206,-0.0671,0.0124]);
HAnimJoint468.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint468.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment469 = createNode("HAnimSegment");
HAnimSegment469.name = "SEGMENT_FOR_r_metatarsal_5";
HAnimSegment469.DEF = "hanim_SEGMENT_FOR_r_metatarsal_5";
TouchSensor TouchSensor470 = createNode("TouchSensor");
TouchSensor470.description = "joint r_metatarsal_5 segment SEGMENT_FOR_r_metatarsal_5";
HAnimSegment469.children = new MFNode();

HAnimSegment469.children[0] = TouchSensor470;

Transform Transform471 = createNode("Transform");
Transform471.translation = new SFVec3f(new float[-0.1206,-0.0671,0.0124]);
Shape Shape472 = createNode("Shape");
Shape472.USE = "JointShape";
Transform471.child = new undefined();

Transform471.child[0] = Shape472;

HAnimSegment469.children[1] = Transform471;

HAnimSite HAnimSite473 = createNode("HAnimSite");
HAnimSite473.name = "SEGMENT_FOR_r_metatarsal_5_tip";
HAnimSite473.DEF = "hanim_SEGMENT_FOR_r_metatarsal_5_tip";
Transform Transform474 = createNode("Transform");
Transform474.translation = new SFVec3f(new float[-0.1206,-0.0671,0.0124]);
Shape Shape475 = createNode("Shape");
Shape475.USE = "SiteShape";
Transform474.child = new undefined();

Transform474.child[0] = Shape475;

HAnimSite473.children = new MFNode();

HAnimSite473.children[0] = Transform474;

HAnimSegment469.children[2] = HAnimSite473;

HAnimJoint468.children = new MFNode();

HAnimJoint468.children[0] = HAnimSegment469;

HAnimJoint HAnimJoint476 = createNode("HAnimJoint");
HAnimJoint476.name = "r_tarsal_proximal_phalanx_5";
HAnimJoint476.DEF = "hanim_r_tarsal_proximal_phalanx_5";
HAnimJoint476.center = new SFVec3f(new float[-0.1239,-0.0153,0.0051]);
HAnimJoint476.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint476.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment477 = createNode("HAnimSegment");
HAnimSegment477.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_5";
HAnimSegment477.DEF = "hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_5";
TouchSensor TouchSensor478 = createNode("TouchSensor");
TouchSensor478.description = "joint r_tarsal_proximal_phalanx_5 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_5";
HAnimSegment477.children = new MFNode();

HAnimSegment477.children[0] = TouchSensor478;

Transform Transform479 = createNode("Transform");
Transform479.translation = new SFVec3f(new float[-0.1239,-0.0153,0.0051]);
Shape Shape480 = createNode("Shape");
Shape480.USE = "JointShape";
Transform479.child = new undefined();

Transform479.child[0] = Shape480;

HAnimSegment477.children[1] = Transform479;

HAnimSite HAnimSite481 = createNode("HAnimSite");
HAnimSite481.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_5_tip";
HAnimSite481.DEF = "hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_5_tip";
Transform Transform482 = createNode("Transform");
Transform482.translation = new SFVec3f(new float[-0.1239,-0.0153,0.0051]);
Shape Shape483 = createNode("Shape");
Shape483.USE = "SiteShape";
Transform482.child = new undefined();

Transform482.child[0] = Shape483;

HAnimSite481.children = new MFNode();

HAnimSite481.children[0] = Transform482;

HAnimSegment477.children[2] = HAnimSite481;

HAnimJoint476.children = new MFNode();

HAnimJoint476.children[0] = HAnimSegment477;

HAnimJoint HAnimJoint484 = createNode("HAnimJoint");
HAnimJoint484.name = "r_tarsal_middle_phalanx_5";
HAnimJoint484.DEF = "hanim_r_tarsal_middle_phalanx_5";
HAnimJoint484.center = new SFVec3f(new float[-0.1262,-0.0077,0.0023]);
HAnimJoint484.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint484.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment485 = createNode("HAnimSegment");
HAnimSegment485.name = "SEGMENT_FOR_r_tarsal_middle_phalanx_5";
HAnimSegment485.DEF = "hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_5";
TouchSensor TouchSensor486 = createNode("TouchSensor");
TouchSensor486.description = "joint r_tarsal_middle_phalanx_5 segment SEGMENT_FOR_r_tarsal_middle_phalanx_5";
HAnimSegment485.children = new MFNode();

HAnimSegment485.children[0] = TouchSensor486;

Transform Transform487 = createNode("Transform");
Transform487.translation = new SFVec3f(new float[-0.1262,-0.0077,0.0023]);
Shape Shape488 = createNode("Shape");
Shape488.USE = "JointShape";
Transform487.child = new undefined();

Transform487.child[0] = Shape488;

HAnimSegment485.children[1] = Transform487;

HAnimSite HAnimSite489 = createNode("HAnimSite");
HAnimSite489.name = "SEGMENT_FOR_r_tarsal_middle_phalanx_5_tip";
HAnimSite489.DEF = "hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_5_tip";
Transform Transform490 = createNode("Transform");
Transform490.translation = new SFVec3f(new float[-0.1262,-0.0077,0.0023]);
Shape Shape491 = createNode("Shape");
Shape491.USE = "SiteShape";
Transform490.child = new undefined();

Transform490.child[0] = Shape491;

HAnimSite489.children = new MFNode();

HAnimSite489.children[0] = Transform490;

HAnimSegment485.children[2] = HAnimSite489;

HAnimJoint484.children = new MFNode();

HAnimJoint484.children[0] = HAnimSegment485;

HAnimJoint HAnimJoint492 = createNode("HAnimJoint");
HAnimJoint492.name = "r_tarsal_distal_phalanx_5";
HAnimJoint492.DEF = "hanim_r_tarsal_distal_phalanx_5";
HAnimJoint492.center = new SFVec3f(new float[-0.1271,0,0]);
HAnimJoint492.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint492.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment493 = createNode("HAnimSegment");
HAnimSegment493.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_5";
HAnimSegment493.DEF = "hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_5";
TouchSensor TouchSensor494 = createNode("TouchSensor");
TouchSensor494.description = "joint r_tarsal_distal_phalanx_5 segment SEGMENT_FOR_r_tarsal_distal_phalanx_5";
HAnimSegment493.children = new MFNode();

HAnimSegment493.children[0] = TouchSensor494;

Transform Transform495 = createNode("Transform");
Transform495.translation = new SFVec3f(new float[-0.1271,0,0]);
Shape Shape496 = createNode("Shape");
Shape496.USE = "JointShape";
Transform495.child = new undefined();

Transform495.child[0] = Shape496;

HAnimSegment493.children[1] = Transform495;

HAnimSite HAnimSite497 = createNode("HAnimSite");
HAnimSite497.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_5_tip";
HAnimSite497.DEF = "hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_5_tip";
Transform Transform498 = createNode("Transform");
Transform498.translation = new SFVec3f(new float[-0.1271,0,0]);
Shape Shape499 = createNode("Shape");
Shape499.USE = "SiteShape";
Transform498.child = new undefined();

Transform498.child[0] = Shape499;

HAnimSite497.children = new MFNode();

HAnimSite497.children[0] = Transform498;

HAnimSegment493.children[2] = HAnimSite497;

HAnimJoint492.children = new MFNode();

HAnimJoint492.children[0] = HAnimSegment493;

HAnimJoint484.children[1] = HAnimJoint492;

HAnimJoint476.children[1] = HAnimJoint484;

HAnimJoint468.children[1] = HAnimJoint476;

HAnimJoint428.children[2] = HAnimJoint468;

HAnimJoint420.children[1] = HAnimJoint428;

HAnimJoint292.children[2] = HAnimJoint420;

HAnimJoint284.children[1] = HAnimJoint292;

HAnimJoint276.children[1] = HAnimJoint284;

HAnimJoint44.children[2] = HAnimJoint276;

HAnimJoint36.children[1] = HAnimJoint44;

HAnimJoint HAnimJoint500 = createNode("HAnimJoint");
HAnimJoint500.name = "l5";
HAnimJoint500.DEF = "hanim_l5";
HAnimJoint500.center = new SFVec3f(new float[-0.0002,-0.1156,0.9169]);
HAnimJoint500.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint500.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment501 = createNode("HAnimSegment");
HAnimSegment501.name = "SEGMENT_FOR_l5";
HAnimSegment501.DEF = "hanim_SEGMENT_FOR_l5";
TouchSensor TouchSensor502 = createNode("TouchSensor");
TouchSensor502.description = "joint l5 segment SEGMENT_FOR_l5";
HAnimSegment501.children = new MFNode();

HAnimSegment501.children[0] = TouchSensor502;

Transform Transform503 = createNode("Transform");
Transform503.translation = new SFVec3f(new float[-0.0002,-0.1156,0.9169]);
Shape Shape504 = createNode("Shape");
Shape504.USE = "JointShape";
Transform503.child = new undefined();

Transform503.child[0] = Shape504;

HAnimSegment501.children[1] = Transform503;

HAnimSite HAnimSite505 = createNode("HAnimSite");
HAnimSite505.name = "SEGMENT_FOR_l5_tip";
HAnimSite505.DEF = "hanim_SEGMENT_FOR_l5_tip";
Transform Transform506 = createNode("Transform");
Transform506.translation = new SFVec3f(new float[-0.0002,-0.1156,0.9169]);
Shape Shape507 = createNode("Shape");
Shape507.USE = "SiteShape";
Transform506.child = new undefined();

Transform506.child[0] = Shape507;

HAnimSite505.children = new MFNode();

HAnimSite505.children[0] = Transform506;

HAnimSegment501.children[2] = HAnimSite505;

HAnimJoint500.children = new MFNode();

HAnimJoint500.children[0] = HAnimSegment501;

HAnimJoint HAnimJoint508 = createNode("HAnimJoint");
HAnimJoint508.name = "l4";
HAnimJoint508.DEF = "hanim_l4";
HAnimJoint508.center = new SFVec3f(new float[-0.0002,-0.1156,0.9412]);
HAnimJoint508.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint508.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment509 = createNode("HAnimSegment");
HAnimSegment509.name = "SEGMENT_FOR_l4";
HAnimSegment509.DEF = "hanim_SEGMENT_FOR_l4";
TouchSensor TouchSensor510 = createNode("TouchSensor");
TouchSensor510.description = "joint l4 segment SEGMENT_FOR_l4";
HAnimSegment509.children = new MFNode();

HAnimSegment509.children[0] = TouchSensor510;

Transform Transform511 = createNode("Transform");
Transform511.translation = new SFVec3f(new float[-0.0002,-0.1156,0.9412]);
Shape Shape512 = createNode("Shape");
Shape512.USE = "JointShape";
Transform511.child = new undefined();

Transform511.child[0] = Shape512;

HAnimSegment509.children[1] = Transform511;

HAnimSite HAnimSite513 = createNode("HAnimSite");
HAnimSite513.name = "SEGMENT_FOR_l4_tip";
HAnimSite513.DEF = "hanim_SEGMENT_FOR_l4_tip";
Transform Transform514 = createNode("Transform");
Transform514.translation = new SFVec3f(new float[-0.0002,-0.1156,0.9412]);
Shape Shape515 = createNode("Shape");
Shape515.USE = "SiteShape";
Transform514.child = new undefined();

Transform514.child[0] = Shape515;

HAnimSite513.children = new MFNode();

HAnimSite513.children[0] = Transform514;

HAnimSegment509.children[2] = HAnimSite513;

HAnimJoint508.children = new MFNode();

HAnimJoint508.children[0] = HAnimSegment509;

HAnimJoint HAnimJoint516 = createNode("HAnimJoint");
HAnimJoint516.name = "l3";
HAnimJoint516.DEF = "hanim_l3";
HAnimJoint516.center = new SFVec3f(new float[-0.0002,-0.1156,0.9574]);
HAnimJoint516.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint516.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment517 = createNode("HAnimSegment");
HAnimSegment517.name = "SEGMENT_FOR_l3";
HAnimSegment517.DEF = "hanim_SEGMENT_FOR_l3";
TouchSensor TouchSensor518 = createNode("TouchSensor");
TouchSensor518.description = "joint l3 segment SEGMENT_FOR_l3";
HAnimSegment517.children = new MFNode();

HAnimSegment517.children[0] = TouchSensor518;

Transform Transform519 = createNode("Transform");
Transform519.translation = new SFVec3f(new float[-0.0002,-0.1156,0.9574]);
Shape Shape520 = createNode("Shape");
Shape520.USE = "JointShape";
Transform519.child = new undefined();

Transform519.child[0] = Shape520;

HAnimSegment517.children[1] = Transform519;

HAnimSite HAnimSite521 = createNode("HAnimSite");
HAnimSite521.name = "SEGMENT_FOR_l3_tip";
HAnimSite521.DEF = "hanim_SEGMENT_FOR_l3_tip";
Transform Transform522 = createNode("Transform");
Transform522.translation = new SFVec3f(new float[-0.0002,-0.1156,0.9574]);
Shape Shape523 = createNode("Shape");
Shape523.USE = "SiteShape";
Transform522.child = new undefined();

Transform522.child[0] = Shape523;

HAnimSite521.children = new MFNode();

HAnimSite521.children[0] = Transform522;

HAnimSegment517.children[2] = HAnimSite521;

HAnimJoint516.children = new MFNode();

HAnimJoint516.children[0] = HAnimSegment517;

HAnimJoint HAnimJoint524 = createNode("HAnimJoint");
HAnimJoint524.name = "l2";
HAnimJoint524.DEF = "hanim_l2";
HAnimJoint524.center = new SFVec3f(new float[-0.0002,-0.1156,0.9738]);
HAnimJoint524.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint524.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment525 = createNode("HAnimSegment");
HAnimSegment525.name = "SEGMENT_FOR_l2";
HAnimSegment525.DEF = "hanim_SEGMENT_FOR_l2";
TouchSensor TouchSensor526 = createNode("TouchSensor");
TouchSensor526.description = "joint l2 segment SEGMENT_FOR_l2";
HAnimSegment525.children = new MFNode();

HAnimSegment525.children[0] = TouchSensor526;

Transform Transform527 = createNode("Transform");
Transform527.translation = new SFVec3f(new float[-0.0002,-0.1156,0.9738]);
Shape Shape528 = createNode("Shape");
Shape528.USE = "JointShape";
Transform527.child = new undefined();

Transform527.child[0] = Shape528;

HAnimSegment525.children[1] = Transform527;

HAnimSite HAnimSite529 = createNode("HAnimSite");
HAnimSite529.name = "SEGMENT_FOR_l2_tip";
HAnimSite529.DEF = "hanim_SEGMENT_FOR_l2_tip";
Transform Transform530 = createNode("Transform");
Transform530.translation = new SFVec3f(new float[-0.0002,-0.1156,0.9738]);
Shape Shape531 = createNode("Shape");
Shape531.USE = "SiteShape";
Transform530.child = new undefined();

Transform530.child[0] = Shape531;

HAnimSite529.children = new MFNode();

HAnimSite529.children[0] = Transform530;

HAnimSegment525.children[2] = HAnimSite529;

HAnimJoint524.children = new MFNode();

HAnimJoint524.children[0] = HAnimSegment525;

HAnimJoint HAnimJoint532 = createNode("HAnimJoint");
HAnimJoint532.name = "l1";
HAnimJoint532.DEF = "hanim_l1";
HAnimJoint532.center = new SFVec3f(new float[-0.0002,-0.1156,0.9911]);
HAnimJoint532.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint532.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment533 = createNode("HAnimSegment");
HAnimSegment533.name = "SEGMENT_FOR_l1";
HAnimSegment533.DEF = "hanim_SEGMENT_FOR_l1";
TouchSensor TouchSensor534 = createNode("TouchSensor");
TouchSensor534.description = "joint l1 segment SEGMENT_FOR_l1";
HAnimSegment533.children = new MFNode();

HAnimSegment533.children[0] = TouchSensor534;

Transform Transform535 = createNode("Transform");
Transform535.translation = new SFVec3f(new float[-0.0002,-0.1156,0.9911]);
Shape Shape536 = createNode("Shape");
Shape536.USE = "JointShape";
Transform535.child = new undefined();

Transform535.child[0] = Shape536;

HAnimSegment533.children[1] = Transform535;

HAnimSite HAnimSite537 = createNode("HAnimSite");
HAnimSite537.name = "SEGMENT_FOR_l1_tip";
HAnimSite537.DEF = "hanim_SEGMENT_FOR_l1_tip";
Transform Transform538 = createNode("Transform");
Transform538.translation = new SFVec3f(new float[-0.0002,-0.1156,0.9911]);
Shape Shape539 = createNode("Shape");
Shape539.USE = "SiteShape";
Transform538.child = new undefined();

Transform538.child[0] = Shape539;

HAnimSite537.children = new MFNode();

HAnimSite537.children[0] = Transform538;

HAnimSegment533.children[2] = HAnimSite537;

HAnimJoint532.children = new MFNode();

HAnimJoint532.children[0] = HAnimSegment533;

HAnimJoint HAnimJoint540 = createNode("HAnimJoint");
HAnimJoint540.name = "t12";
HAnimJoint540.DEF = "hanim_t12";
HAnimJoint540.center = new SFVec3f(new float[-0.0002,-0.1156,1.0145]);
HAnimJoint540.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint540.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment541 = createNode("HAnimSegment");
HAnimSegment541.name = "SEGMENT_FOR_t12";
HAnimSegment541.DEF = "hanim_SEGMENT_FOR_t12";
TouchSensor TouchSensor542 = createNode("TouchSensor");
TouchSensor542.description = "joint t12 segment SEGMENT_FOR_t12";
HAnimSegment541.children = new MFNode();

HAnimSegment541.children[0] = TouchSensor542;

Transform Transform543 = createNode("Transform");
Transform543.translation = new SFVec3f(new float[-0.0002,-0.1156,1.0145]);
Shape Shape544 = createNode("Shape");
Shape544.USE = "JointShape";
Transform543.child = new undefined();

Transform543.child[0] = Shape544;

HAnimSegment541.children[1] = Transform543;

HAnimSite HAnimSite545 = createNode("HAnimSite");
HAnimSite545.name = "SEGMENT_FOR_t12_tip";
HAnimSite545.DEF = "hanim_SEGMENT_FOR_t12_tip";
Transform Transform546 = createNode("Transform");
Transform546.translation = new SFVec3f(new float[-0.0002,-0.1156,1.0145]);
Shape Shape547 = createNode("Shape");
Shape547.USE = "SiteShape";
Transform546.child = new undefined();

Transform546.child[0] = Shape547;

HAnimSite545.children = new MFNode();

HAnimSite545.children[0] = Transform546;

HAnimSegment541.children[2] = HAnimSite545;

HAnimJoint540.children = new MFNode();

HAnimJoint540.children[0] = HAnimSegment541;

HAnimJoint HAnimJoint548 = createNode("HAnimJoint");
HAnimJoint548.name = "t11";
HAnimJoint548.DEF = "hanim_t11";
HAnimJoint548.center = new SFVec3f(new float[-0.0002,-0.1156,1.0381]);
HAnimJoint548.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint548.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment549 = createNode("HAnimSegment");
HAnimSegment549.name = "SEGMENT_FOR_t11";
HAnimSegment549.DEF = "hanim_SEGMENT_FOR_t11";
TouchSensor TouchSensor550 = createNode("TouchSensor");
TouchSensor550.description = "joint t11 segment SEGMENT_FOR_t11";
HAnimSegment549.children = new MFNode();

HAnimSegment549.children[0] = TouchSensor550;

Transform Transform551 = createNode("Transform");
Transform551.translation = new SFVec3f(new float[-0.0002,-0.1156,1.0381]);
Shape Shape552 = createNode("Shape");
Shape552.USE = "JointShape";
Transform551.child = new undefined();

Transform551.child[0] = Shape552;

HAnimSegment549.children[1] = Transform551;

HAnimSite HAnimSite553 = createNode("HAnimSite");
HAnimSite553.name = "SEGMENT_FOR_t11_tip";
HAnimSite553.DEF = "hanim_SEGMENT_FOR_t11_tip";
Transform Transform554 = createNode("Transform");
Transform554.translation = new SFVec3f(new float[-0.0002,-0.1156,1.0381]);
Shape Shape555 = createNode("Shape");
Shape555.USE = "SiteShape";
Transform554.child = new undefined();

Transform554.child[0] = Shape555;

HAnimSite553.children = new MFNode();

HAnimSite553.children[0] = Transform554;

HAnimSegment549.children[2] = HAnimSite553;

HAnimJoint548.children = new MFNode();

HAnimJoint548.children[0] = HAnimSegment549;

HAnimJoint HAnimJoint556 = createNode("HAnimJoint");
HAnimJoint556.name = "t10";
HAnimJoint556.DEF = "hanim_t10";
HAnimJoint556.center = new SFVec3f(new float[-0.0002,-0.1157,1.0552]);
HAnimJoint556.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint556.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment557 = createNode("HAnimSegment");
HAnimSegment557.name = "SEGMENT_FOR_t10";
HAnimSegment557.DEF = "hanim_SEGMENT_FOR_t10";
TouchSensor TouchSensor558 = createNode("TouchSensor");
TouchSensor558.description = "joint t10 segment SEGMENT_FOR_t10";
HAnimSegment557.children = new MFNode();

HAnimSegment557.children[0] = TouchSensor558;

Transform Transform559 = createNode("Transform");
Transform559.translation = new SFVec3f(new float[-0.0002,-0.1157,1.0552]);
Shape Shape560 = createNode("Shape");
Shape560.USE = "JointShape";
Transform559.child = new undefined();

Transform559.child[0] = Shape560;

HAnimSegment557.children[1] = Transform559;

HAnimSite HAnimSite561 = createNode("HAnimSite");
HAnimSite561.name = "SEGMENT_FOR_t10_tip";
HAnimSite561.DEF = "hanim_SEGMENT_FOR_t10_tip";
Transform Transform562 = createNode("Transform");
Transform562.translation = new SFVec3f(new float[-0.0002,-0.1157,1.0552]);
Shape Shape563 = createNode("Shape");
Shape563.USE = "SiteShape";
Transform562.child = new undefined();

Transform562.child[0] = Shape563;

HAnimSite561.children = new MFNode();

HAnimSite561.children[0] = Transform562;

HAnimSegment557.children[2] = HAnimSite561;

HAnimJoint556.children = new MFNode();

HAnimJoint556.children[0] = HAnimSegment557;

HAnimJoint HAnimJoint564 = createNode("HAnimJoint");
HAnimJoint564.name = "t9";
HAnimJoint564.DEF = "hanim_t9";
HAnimJoint564.center = new SFVec3f(new float[-0.0002,-0.1156,1.0699]);
HAnimJoint564.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint564.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment565 = createNode("HAnimSegment");
HAnimSegment565.name = "SEGMENT_FOR_t9";
HAnimSegment565.DEF = "hanim_SEGMENT_FOR_t9";
TouchSensor TouchSensor566 = createNode("TouchSensor");
TouchSensor566.description = "joint t9 segment SEGMENT_FOR_t9";
HAnimSegment565.children = new MFNode();

HAnimSegment565.children[0] = TouchSensor566;

Transform Transform567 = createNode("Transform");
Transform567.translation = new SFVec3f(new float[-0.0002,-0.1156,1.0699]);
Shape Shape568 = createNode("Shape");
Shape568.USE = "JointShape";
Transform567.child = new undefined();

Transform567.child[0] = Shape568;

HAnimSegment565.children[1] = Transform567;

HAnimSite HAnimSite569 = createNode("HAnimSite");
HAnimSite569.name = "SEGMENT_FOR_t9_tip";
HAnimSite569.DEF = "hanim_SEGMENT_FOR_t9_tip";
Transform Transform570 = createNode("Transform");
Transform570.translation = new SFVec3f(new float[-0.0002,-0.1156,1.0699]);
Shape Shape571 = createNode("Shape");
Shape571.USE = "SiteShape";
Transform570.child = new undefined();

Transform570.child[0] = Shape571;

HAnimSite569.children = new MFNode();

HAnimSite569.children[0] = Transform570;

HAnimSegment565.children[2] = HAnimSite569;

HAnimJoint564.children = new MFNode();

HAnimJoint564.children[0] = HAnimSegment565;

HAnimJoint HAnimJoint572 = createNode("HAnimJoint");
HAnimJoint572.name = "t8";
HAnimJoint572.DEF = "hanim_t8";
HAnimJoint572.center = new SFVec3f(new float[-0.0002,-0.1156,1.0845]);
HAnimJoint572.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint572.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment573 = createNode("HAnimSegment");
HAnimSegment573.name = "SEGMENT_FOR_t8";
HAnimSegment573.DEF = "hanim_SEGMENT_FOR_t8";
TouchSensor TouchSensor574 = createNode("TouchSensor");
TouchSensor574.description = "joint t8 segment SEGMENT_FOR_t8";
HAnimSegment573.children = new MFNode();

HAnimSegment573.children[0] = TouchSensor574;

Transform Transform575 = createNode("Transform");
Transform575.translation = new SFVec3f(new float[-0.0002,-0.1156,1.0845]);
Shape Shape576 = createNode("Shape");
Shape576.USE = "JointShape";
Transform575.child = new undefined();

Transform575.child[0] = Shape576;

HAnimSegment573.children[1] = Transform575;

HAnimSite HAnimSite577 = createNode("HAnimSite");
HAnimSite577.name = "SEGMENT_FOR_t8_tip";
HAnimSite577.DEF = "hanim_SEGMENT_FOR_t8_tip";
Transform Transform578 = createNode("Transform");
Transform578.translation = new SFVec3f(new float[-0.0002,-0.1156,1.0845]);
Shape Shape579 = createNode("Shape");
Shape579.USE = "SiteShape";
Transform578.child = new undefined();

Transform578.child[0] = Shape579;

HAnimSite577.children = new MFNode();

HAnimSite577.children[0] = Transform578;

HAnimSegment573.children[2] = HAnimSite577;

HAnimJoint572.children = new MFNode();

HAnimJoint572.children[0] = HAnimSegment573;

HAnimJoint HAnimJoint580 = createNode("HAnimJoint");
HAnimJoint580.name = "t7";
HAnimJoint580.DEF = "hanim_t7";
HAnimJoint580.center = new SFVec3f(new float[-0.0002,-0.1156,1.1002]);
HAnimJoint580.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint580.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment581 = createNode("HAnimSegment");
HAnimSegment581.name = "SEGMENT_FOR_t7";
HAnimSegment581.DEF = "hanim_SEGMENT_FOR_t7";
TouchSensor TouchSensor582 = createNode("TouchSensor");
TouchSensor582.description = "joint t7 segment SEGMENT_FOR_t7";
HAnimSegment581.children = new MFNode();

HAnimSegment581.children[0] = TouchSensor582;

Transform Transform583 = createNode("Transform");
Transform583.translation = new SFVec3f(new float[-0.0002,-0.1156,1.1002]);
Shape Shape584 = createNode("Shape");
Shape584.USE = "JointShape";
Transform583.child = new undefined();

Transform583.child[0] = Shape584;

HAnimSegment581.children[1] = Transform583;

HAnimSite HAnimSite585 = createNode("HAnimSite");
HAnimSite585.name = "SEGMENT_FOR_t7_tip";
HAnimSite585.DEF = "hanim_SEGMENT_FOR_t7_tip";
Transform Transform586 = createNode("Transform");
Transform586.translation = new SFVec3f(new float[-0.0002,-0.1156,1.1002]);
Shape Shape587 = createNode("Shape");
Shape587.USE = "SiteShape";
Transform586.child = new undefined();

Transform586.child[0] = Shape587;

HAnimSite585.children = new MFNode();

HAnimSite585.children[0] = Transform586;

HAnimSegment581.children[2] = HAnimSite585;

HAnimJoint580.children = new MFNode();

HAnimJoint580.children[0] = HAnimSegment581;

HAnimJoint HAnimJoint588 = createNode("HAnimJoint");
HAnimJoint588.name = "t6";
HAnimJoint588.DEF = "hanim_t6";
HAnimJoint588.center = new SFVec3f(new float[-0.0002,-0.1156,1.1131]);
HAnimJoint588.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint588.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment589 = createNode("HAnimSegment");
HAnimSegment589.name = "SEGMENT_FOR_t6";
HAnimSegment589.DEF = "hanim_SEGMENT_FOR_t6";
TouchSensor TouchSensor590 = createNode("TouchSensor");
TouchSensor590.description = "joint t6 segment SEGMENT_FOR_t6";
HAnimSegment589.children = new MFNode();

HAnimSegment589.children[0] = TouchSensor590;

Transform Transform591 = createNode("Transform");
Transform591.translation = new SFVec3f(new float[-0.0002,-0.1156,1.1131]);
Shape Shape592 = createNode("Shape");
Shape592.USE = "JointShape";
Transform591.child = new undefined();

Transform591.child[0] = Shape592;

HAnimSegment589.children[1] = Transform591;

HAnimSite HAnimSite593 = createNode("HAnimSite");
HAnimSite593.name = "SEGMENT_FOR_t6_tip";
HAnimSite593.DEF = "hanim_SEGMENT_FOR_t6_tip";
Transform Transform594 = createNode("Transform");
Transform594.translation = new SFVec3f(new float[-0.0002,-0.1156,1.1131]);
Shape Shape595 = createNode("Shape");
Shape595.USE = "SiteShape";
Transform594.child = new undefined();

Transform594.child[0] = Shape595;

HAnimSite593.children = new MFNode();

HAnimSite593.children[0] = Transform594;

HAnimSegment589.children[2] = HAnimSite593;

HAnimJoint588.children = new MFNode();

HAnimJoint588.children[0] = HAnimSegment589;

HAnimJoint HAnimJoint596 = createNode("HAnimJoint");
HAnimJoint596.name = "t5";
HAnimJoint596.DEF = "hanim_t5";
HAnimJoint596.center = new SFVec3f(new float[-0.0002,-0.1156,1.1286]);
HAnimJoint596.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint596.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment597 = createNode("HAnimSegment");
HAnimSegment597.name = "SEGMENT_FOR_t5";
HAnimSegment597.DEF = "hanim_SEGMENT_FOR_t5";
TouchSensor TouchSensor598 = createNode("TouchSensor");
TouchSensor598.description = "joint t5 segment SEGMENT_FOR_t5";
HAnimSegment597.children = new MFNode();

HAnimSegment597.children[0] = TouchSensor598;

Transform Transform599 = createNode("Transform");
Transform599.translation = new SFVec3f(new float[-0.0002,-0.1156,1.1286]);
Shape Shape600 = createNode("Shape");
Shape600.USE = "JointShape";
Transform599.child = new undefined();

Transform599.child[0] = Shape600;

HAnimSegment597.children[1] = Transform599;

HAnimSite HAnimSite601 = createNode("HAnimSite");
HAnimSite601.name = "SEGMENT_FOR_t5_tip";
HAnimSite601.DEF = "hanim_SEGMENT_FOR_t5_tip";
Transform Transform602 = createNode("Transform");
Transform602.translation = new SFVec3f(new float[-0.0002,-0.1156,1.1286]);
Shape Shape603 = createNode("Shape");
Shape603.USE = "SiteShape";
Transform602.child = new undefined();

Transform602.child[0] = Shape603;

HAnimSite601.children = new MFNode();

HAnimSite601.children[0] = Transform602;

HAnimSegment597.children[2] = HAnimSite601;

HAnimJoint596.children = new MFNode();

HAnimJoint596.children[0] = HAnimSegment597;

HAnimJoint HAnimJoint604 = createNode("HAnimJoint");
HAnimJoint604.name = "t4";
HAnimJoint604.DEF = "hanim_t4";
HAnimJoint604.center = new SFVec3f(new float[-0.0002,-0.1156,1.1439]);
HAnimJoint604.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint604.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment605 = createNode("HAnimSegment");
HAnimSegment605.name = "SEGMENT_FOR_t4";
HAnimSegment605.DEF = "hanim_SEGMENT_FOR_t4";
TouchSensor TouchSensor606 = createNode("TouchSensor");
TouchSensor606.description = "joint t4 segment SEGMENT_FOR_t4";
HAnimSegment605.children = new MFNode();

HAnimSegment605.children[0] = TouchSensor606;

Transform Transform607 = createNode("Transform");
Transform607.translation = new SFVec3f(new float[-0.0002,-0.1156,1.1439]);
Shape Shape608 = createNode("Shape");
Shape608.USE = "JointShape";
Transform607.child = new undefined();

Transform607.child[0] = Shape608;

HAnimSegment605.children[1] = Transform607;

HAnimSite HAnimSite609 = createNode("HAnimSite");
HAnimSite609.name = "SEGMENT_FOR_t4_tip";
HAnimSite609.DEF = "hanim_SEGMENT_FOR_t4_tip";
Transform Transform610 = createNode("Transform");
Transform610.translation = new SFVec3f(new float[-0.0002,-0.1156,1.1439]);
Shape Shape611 = createNode("Shape");
Shape611.USE = "SiteShape";
Transform610.child = new undefined();

Transform610.child[0] = Shape611;

HAnimSite609.children = new MFNode();

HAnimSite609.children[0] = Transform610;

HAnimSegment605.children[2] = HAnimSite609;

HAnimJoint604.children = new MFNode();

HAnimJoint604.children[0] = HAnimSegment605;

HAnimJoint HAnimJoint612 = createNode("HAnimJoint");
HAnimJoint612.name = "t3";
HAnimJoint612.DEF = "hanim_t3";
HAnimJoint612.center = new SFVec3f(new float[-0.0002,-0.1156,1.1623]);
HAnimJoint612.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint612.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment613 = createNode("HAnimSegment");
HAnimSegment613.name = "SEGMENT_FOR_t3";
HAnimSegment613.DEF = "hanim_SEGMENT_FOR_t3";
TouchSensor TouchSensor614 = createNode("TouchSensor");
TouchSensor614.description = "joint t3 segment SEGMENT_FOR_t3";
HAnimSegment613.children = new MFNode();

HAnimSegment613.children[0] = TouchSensor614;

Transform Transform615 = createNode("Transform");
Transform615.translation = new SFVec3f(new float[-0.0002,-0.1156,1.1623]);
Shape Shape616 = createNode("Shape");
Shape616.USE = "JointShape";
Transform615.child = new undefined();

Transform615.child[0] = Shape616;

HAnimSegment613.children[1] = Transform615;

HAnimSite HAnimSite617 = createNode("HAnimSite");
HAnimSite617.name = "SEGMENT_FOR_t3_tip";
HAnimSite617.DEF = "hanim_SEGMENT_FOR_t3_tip";
Transform Transform618 = createNode("Transform");
Transform618.translation = new SFVec3f(new float[-0.0002,-0.1156,1.1623]);
Shape Shape619 = createNode("Shape");
Shape619.USE = "SiteShape";
Transform618.child = new undefined();

Transform618.child[0] = Shape619;

HAnimSite617.children = new MFNode();

HAnimSite617.children[0] = Transform618;

HAnimSegment613.children[2] = HAnimSite617;

HAnimJoint612.children = new MFNode();

HAnimJoint612.children[0] = HAnimSegment613;

HAnimJoint HAnimJoint620 = createNode("HAnimJoint");
HAnimJoint620.name = "t2";
HAnimJoint620.DEF = "hanim_t2";
HAnimJoint620.center = new SFVec3f(new float[-0.0002,-0.1157,1.1871]);
HAnimJoint620.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint620.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment621 = createNode("HAnimSegment");
HAnimSegment621.name = "SEGMENT_FOR_t2";
HAnimSegment621.DEF = "hanim_SEGMENT_FOR_t2";
TouchSensor TouchSensor622 = createNode("TouchSensor");
TouchSensor622.description = "joint t2 segment SEGMENT_FOR_t2";
HAnimSegment621.children = new MFNode();

HAnimSegment621.children[0] = TouchSensor622;

Transform Transform623 = createNode("Transform");
Transform623.translation = new SFVec3f(new float[-0.0002,-0.1157,1.1871]);
Shape Shape624 = createNode("Shape");
Shape624.USE = "JointShape";
Transform623.child = new undefined();

Transform623.child[0] = Shape624;

HAnimSegment621.children[1] = Transform623;

HAnimSite HAnimSite625 = createNode("HAnimSite");
HAnimSite625.name = "SEGMENT_FOR_t2_tip";
HAnimSite625.DEF = "hanim_SEGMENT_FOR_t2_tip";
Transform Transform626 = createNode("Transform");
Transform626.translation = new SFVec3f(new float[-0.0002,-0.1157,1.1871]);
Shape Shape627 = createNode("Shape");
Shape627.USE = "SiteShape";
Transform626.child = new undefined();

Transform626.child[0] = Shape627;

HAnimSite625.children = new MFNode();

HAnimSite625.children[0] = Transform626;

HAnimSegment621.children[2] = HAnimSite625;

HAnimJoint620.children = new MFNode();

HAnimJoint620.children[0] = HAnimSegment621;

HAnimJoint HAnimJoint628 = createNode("HAnimJoint");
HAnimJoint628.name = "t1";
HAnimJoint628.DEF = "hanim_t1";
HAnimJoint628.center = new SFVec3f(new float[-0.0002,-0.1156,1.2109]);
HAnimJoint628.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint628.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment629 = createNode("HAnimSegment");
HAnimSegment629.name = "SEGMENT_FOR_t1";
HAnimSegment629.DEF = "hanim_SEGMENT_FOR_t1";
TouchSensor TouchSensor630 = createNode("TouchSensor");
TouchSensor630.description = "joint t1 segment SEGMENT_FOR_t1";
HAnimSegment629.children = new MFNode();

HAnimSegment629.children[0] = TouchSensor630;

Transform Transform631 = createNode("Transform");
Transform631.translation = new SFVec3f(new float[-0.0002,-0.1156,1.2109]);
Shape Shape632 = createNode("Shape");
Shape632.USE = "JointShape";
Transform631.child = new undefined();

Transform631.child[0] = Shape632;

HAnimSegment629.children[1] = Transform631;

HAnimSite HAnimSite633 = createNode("HAnimSite");
HAnimSite633.name = "SEGMENT_FOR_t1_tip";
HAnimSite633.DEF = "hanim_SEGMENT_FOR_t1_tip";
Transform Transform634 = createNode("Transform");
Transform634.translation = new SFVec3f(new float[-0.0002,-0.1156,1.2109]);
Shape Shape635 = createNode("Shape");
Shape635.USE = "SiteShape";
Transform634.child = new undefined();

Transform634.child[0] = Shape635;

HAnimSite633.children = new MFNode();

HAnimSite633.children[0] = Transform634;

HAnimSegment629.children[2] = HAnimSite633;

HAnimJoint628.children = new MFNode();

HAnimJoint628.children[0] = HAnimSegment629;

HAnimJoint HAnimJoint636 = createNode("HAnimJoint");
HAnimJoint636.name = "c7";
HAnimJoint636.DEF = "hanim_c7";
HAnimJoint636.center = new SFVec3f(new float[-0.0002,-0.1169,1.2368]);
HAnimJoint636.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint636.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment637 = createNode("HAnimSegment");
HAnimSegment637.name = "SEGMENT_FOR_c7";
HAnimSegment637.DEF = "hanim_SEGMENT_FOR_c7";
TouchSensor TouchSensor638 = createNode("TouchSensor");
TouchSensor638.description = "joint c7 segment SEGMENT_FOR_c7";
HAnimSegment637.children = new MFNode();

HAnimSegment637.children[0] = TouchSensor638;

Transform Transform639 = createNode("Transform");
Transform639.translation = new SFVec3f(new float[-0.0002,-0.1169,1.2368]);
Shape Shape640 = createNode("Shape");
Shape640.USE = "JointShape";
Transform639.child = new undefined();

Transform639.child[0] = Shape640;

HAnimSegment637.children[1] = Transform639;

HAnimSite HAnimSite641 = createNode("HAnimSite");
HAnimSite641.name = "SEGMENT_FOR_c7_tip";
HAnimSite641.DEF = "hanim_SEGMENT_FOR_c7_tip";
Transform Transform642 = createNode("Transform");
Transform642.translation = new SFVec3f(new float[-0.0002,-0.1169,1.2368]);
Shape Shape643 = createNode("Shape");
Shape643.USE = "SiteShape";
Transform642.child = new undefined();

Transform642.child[0] = Shape643;

HAnimSite641.children = new MFNode();

HAnimSite641.children[0] = Transform642;

HAnimSegment637.children[2] = HAnimSite641;

HAnimJoint636.children = new MFNode();

HAnimJoint636.children[0] = HAnimSegment637;

HAnimJoint HAnimJoint644 = createNode("HAnimJoint");
HAnimJoint644.name = "c6";
HAnimJoint644.DEF = "hanim_c6";
HAnimJoint644.center = new SFVec3f(new float[-0.0002,-0.1169,1.249]);
HAnimJoint644.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint644.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment645 = createNode("HAnimSegment");
HAnimSegment645.name = "SEGMENT_FOR_c6";
HAnimSegment645.DEF = "hanim_SEGMENT_FOR_c6";
TouchSensor TouchSensor646 = createNode("TouchSensor");
TouchSensor646.description = "joint c6 segment SEGMENT_FOR_c6";
HAnimSegment645.children = new MFNode();

HAnimSegment645.children[0] = TouchSensor646;

Transform Transform647 = createNode("Transform");
Transform647.translation = new SFVec3f(new float[-0.0002,-0.1169,1.249]);
Shape Shape648 = createNode("Shape");
Shape648.USE = "JointShape";
Transform647.child = new undefined();

Transform647.child[0] = Shape648;

HAnimSegment645.children[1] = Transform647;

HAnimSite HAnimSite649 = createNode("HAnimSite");
HAnimSite649.name = "SEGMENT_FOR_c6_tip";
HAnimSite649.DEF = "hanim_SEGMENT_FOR_c6_tip";
Transform Transform650 = createNode("Transform");
Transform650.translation = new SFVec3f(new float[-0.0002,-0.1169,1.249]);
Shape Shape651 = createNode("Shape");
Shape651.USE = "SiteShape";
Transform650.child = new undefined();

Transform650.child[0] = Shape651;

HAnimSite649.children = new MFNode();

HAnimSite649.children[0] = Transform650;

HAnimSegment645.children[2] = HAnimSite649;

HAnimJoint644.children = new MFNode();

HAnimJoint644.children[0] = HAnimSegment645;

HAnimJoint HAnimJoint652 = createNode("HAnimJoint");
HAnimJoint652.name = "c5";
HAnimJoint652.DEF = "hanim_c5";
HAnimJoint652.center = new SFVec3f(new float[-0.0002,-0.1169,1.2613]);
HAnimJoint652.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint652.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment653 = createNode("HAnimSegment");
HAnimSegment653.name = "SEGMENT_FOR_c5";
HAnimSegment653.DEF = "hanim_SEGMENT_FOR_c5";
TouchSensor TouchSensor654 = createNode("TouchSensor");
TouchSensor654.description = "joint c5 segment SEGMENT_FOR_c5";
HAnimSegment653.children = new MFNode();

HAnimSegment653.children[0] = TouchSensor654;

Transform Transform655 = createNode("Transform");
Transform655.translation = new SFVec3f(new float[-0.0002,-0.1169,1.2613]);
Shape Shape656 = createNode("Shape");
Shape656.USE = "JointShape";
Transform655.child = new undefined();

Transform655.child[0] = Shape656;

HAnimSegment653.children[1] = Transform655;

HAnimSite HAnimSite657 = createNode("HAnimSite");
HAnimSite657.name = "SEGMENT_FOR_c5_tip";
HAnimSite657.DEF = "hanim_SEGMENT_FOR_c5_tip";
Transform Transform658 = createNode("Transform");
Transform658.translation = new SFVec3f(new float[-0.0002,-0.1169,1.2613]);
Shape Shape659 = createNode("Shape");
Shape659.USE = "SiteShape";
Transform658.child = new undefined();

Transform658.child[0] = Shape659;

HAnimSite657.children = new MFNode();

HAnimSite657.children[0] = Transform658;

HAnimSegment653.children[2] = HAnimSite657;

HAnimJoint652.children = new MFNode();

HAnimJoint652.children[0] = HAnimSegment653;

HAnimJoint HAnimJoint660 = createNode("HAnimJoint");
HAnimJoint660.name = "c4";
HAnimJoint660.DEF = "hanim_c4";
HAnimJoint660.center = new SFVec3f(new float[-0.0002,-0.1169,1.2737]);
HAnimJoint660.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint660.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment661 = createNode("HAnimSegment");
HAnimSegment661.name = "SEGMENT_FOR_c4";
HAnimSegment661.DEF = "hanim_SEGMENT_FOR_c4";
TouchSensor TouchSensor662 = createNode("TouchSensor");
TouchSensor662.description = "joint c4 segment SEGMENT_FOR_c4";
HAnimSegment661.children = new MFNode();

HAnimSegment661.children[0] = TouchSensor662;

Transform Transform663 = createNode("Transform");
Transform663.translation = new SFVec3f(new float[-0.0002,-0.1169,1.2737]);
Shape Shape664 = createNode("Shape");
Shape664.USE = "JointShape";
Transform663.child = new undefined();

Transform663.child[0] = Shape664;

HAnimSegment661.children[1] = Transform663;

HAnimSite HAnimSite665 = createNode("HAnimSite");
HAnimSite665.name = "SEGMENT_FOR_c4_tip";
HAnimSite665.DEF = "hanim_SEGMENT_FOR_c4_tip";
Transform Transform666 = createNode("Transform");
Transform666.translation = new SFVec3f(new float[-0.0002,-0.1169,1.2737]);
Shape Shape667 = createNode("Shape");
Shape667.USE = "SiteShape";
Transform666.child = new undefined();

Transform666.child[0] = Shape667;

HAnimSite665.children = new MFNode();

HAnimSite665.children[0] = Transform666;

HAnimSegment661.children[2] = HAnimSite665;

HAnimJoint660.children = new MFNode();

HAnimJoint660.children[0] = HAnimSegment661;

HAnimJoint HAnimJoint668 = createNode("HAnimJoint");
HAnimJoint668.name = "c3";
HAnimJoint668.DEF = "hanim_c3";
HAnimJoint668.center = new SFVec3f(new float[-0.0002,-0.1169,1.2865]);
HAnimJoint668.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint668.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment669 = createNode("HAnimSegment");
HAnimSegment669.name = "SEGMENT_FOR_c3";
HAnimSegment669.DEF = "hanim_SEGMENT_FOR_c3";
TouchSensor TouchSensor670 = createNode("TouchSensor");
TouchSensor670.description = "joint c3 segment SEGMENT_FOR_c3";
HAnimSegment669.children = new MFNode();

HAnimSegment669.children[0] = TouchSensor670;

Transform Transform671 = createNode("Transform");
Transform671.translation = new SFVec3f(new float[-0.0002,-0.1169,1.2865]);
Shape Shape672 = createNode("Shape");
Shape672.USE = "JointShape";
Transform671.child = new undefined();

Transform671.child[0] = Shape672;

HAnimSegment669.children[1] = Transform671;

HAnimSite HAnimSite673 = createNode("HAnimSite");
HAnimSite673.name = "SEGMENT_FOR_c3_tip";
HAnimSite673.DEF = "hanim_SEGMENT_FOR_c3_tip";
Transform Transform674 = createNode("Transform");
Transform674.translation = new SFVec3f(new float[-0.0002,-0.1169,1.2865]);
Shape Shape675 = createNode("Shape");
Shape675.USE = "SiteShape";
Transform674.child = new undefined();

Transform674.child[0] = Shape675;

HAnimSite673.children = new MFNode();

HAnimSite673.children[0] = Transform674;

HAnimSegment669.children[2] = HAnimSite673;

HAnimJoint668.children = new MFNode();

HAnimJoint668.children[0] = HAnimSegment669;

HAnimJoint HAnimJoint676 = createNode("HAnimJoint");
HAnimJoint676.name = "c2";
HAnimJoint676.DEF = "hanim_c2";
HAnimJoint676.center = new SFVec3f(new float[-0.0002,-0.1169,1.2982]);
HAnimJoint676.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint676.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment677 = createNode("HAnimSegment");
HAnimSegment677.name = "SEGMENT_FOR_c2";
HAnimSegment677.DEF = "hanim_SEGMENT_FOR_c2";
TouchSensor TouchSensor678 = createNode("TouchSensor");
TouchSensor678.description = "joint c2 segment SEGMENT_FOR_c2";
HAnimSegment677.children = new MFNode();

HAnimSegment677.children[0] = TouchSensor678;

Transform Transform679 = createNode("Transform");
Transform679.translation = new SFVec3f(new float[-0.0002,-0.1169,1.2982]);
Shape Shape680 = createNode("Shape");
Shape680.USE = "JointShape";
Transform679.child = new undefined();

Transform679.child[0] = Shape680;

HAnimSegment677.children[1] = Transform679;

HAnimSite HAnimSite681 = createNode("HAnimSite");
HAnimSite681.name = "SEGMENT_FOR_c2_tip";
HAnimSite681.DEF = "hanim_SEGMENT_FOR_c2_tip";
Transform Transform682 = createNode("Transform");
Transform682.translation = new SFVec3f(new float[-0.0002,-0.1169,1.2982]);
Shape Shape683 = createNode("Shape");
Shape683.USE = "SiteShape";
Transform682.child = new undefined();

Transform682.child[0] = Shape683;

HAnimSite681.children = new MFNode();

HAnimSite681.children[0] = Transform682;

HAnimSegment677.children[2] = HAnimSite681;

HAnimJoint676.children = new MFNode();

HAnimJoint676.children[0] = HAnimSegment677;

HAnimJoint HAnimJoint684 = createNode("HAnimJoint");
HAnimJoint684.name = "c1";
HAnimJoint684.DEF = "hanim_c1";
HAnimJoint684.center = new SFVec3f(new float[-0.0002,-0.1169,1.3099]);
HAnimJoint684.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint684.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment685 = createNode("HAnimSegment");
HAnimSegment685.name = "SEGMENT_FOR_c1";
HAnimSegment685.DEF = "hanim_SEGMENT_FOR_c1";
TouchSensor TouchSensor686 = createNode("TouchSensor");
TouchSensor686.description = "joint c1 segment SEGMENT_FOR_c1";
HAnimSegment685.children = new MFNode();

HAnimSegment685.children[0] = TouchSensor686;

Transform Transform687 = createNode("Transform");
Transform687.translation = new SFVec3f(new float[-0.0002,-0.1169,1.3099]);
Shape Shape688 = createNode("Shape");
Shape688.USE = "JointShape";
Transform687.child = new undefined();

Transform687.child[0] = Shape688;

HAnimSegment685.children[1] = Transform687;

HAnimSite HAnimSite689 = createNode("HAnimSite");
HAnimSite689.name = "SEGMENT_FOR_c1_tip";
HAnimSite689.DEF = "hanim_SEGMENT_FOR_c1_tip";
Transform Transform690 = createNode("Transform");
Transform690.translation = new SFVec3f(new float[-0.0002,-0.1169,1.3099]);
Shape Shape691 = createNode("Shape");
Shape691.USE = "SiteShape";
Transform690.child = new undefined();

Transform690.child[0] = Shape691;

HAnimSite689.children = new MFNode();

HAnimSite689.children[0] = Transform690;

HAnimSegment685.children[2] = HAnimSite689;

HAnimJoint684.children = new MFNode();

HAnimJoint684.children[0] = HAnimSegment685;

HAnimJoint HAnimJoint692 = createNode("HAnimJoint");
HAnimJoint692.name = "skull";
HAnimJoint692.DEF = "hanim_skull";
HAnimJoint692.center = new SFVec3f(new float[-0.0002,-0.1173,1.3041]);
HAnimJoint692.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint692.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment693 = createNode("HAnimSegment");
HAnimSegment693.name = "SEGMENT_FOR_skull";
HAnimSegment693.DEF = "hanim_SEGMENT_FOR_skull";
TouchSensor TouchSensor694 = createNode("TouchSensor");
TouchSensor694.description = "joint skull segment SEGMENT_FOR_skull";
HAnimSegment693.children = new MFNode();

HAnimSegment693.children[0] = TouchSensor694;

Transform Transform695 = createNode("Transform");
Transform695.translation = new SFVec3f(new float[-0.0002,-0.1173,1.3041]);
Shape Shape696 = createNode("Shape");
Shape696.USE = "JointShape";
Transform695.child = new undefined();

Transform695.child[0] = Shape696;

HAnimSegment693.children[1] = Transform695;

HAnimSite HAnimSite697 = createNode("HAnimSite");
HAnimSite697.name = "SEGMENT_FOR_skull_tip";
HAnimSite697.DEF = "hanim_SEGMENT_FOR_skull_tip";
Transform Transform698 = createNode("Transform");
Transform698.translation = new SFVec3f(new float[-0.0002,-0.1173,1.3041]);
Shape Shape699 = createNode("Shape");
Shape699.USE = "SiteShape";
Transform698.child = new undefined();

Transform698.child[0] = Shape699;

HAnimSite697.children = new MFNode();

HAnimSite697.children[0] = Transform698;

HAnimSegment693.children[2] = HAnimSite697;

HAnimJoint692.children = new MFNode();

HAnimJoint692.children[0] = HAnimSegment693;

HAnimJoint HAnimJoint700 = createNode("HAnimJoint");
HAnimJoint700.name = "l_eyelid";
HAnimJoint700.DEF = "hanim_l_eyelid";
HAnimJoint700.center = new SFVec3f(new float[0.0503,-0.0689,1.4157]);
HAnimJoint700.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint700.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment701 = createNode("HAnimSegment");
HAnimSegment701.name = "SEGMENT_FOR_l_eyelid";
HAnimSegment701.DEF = "hanim_SEGMENT_FOR_l_eyelid";
TouchSensor TouchSensor702 = createNode("TouchSensor");
TouchSensor702.description = "joint l_eyelid segment SEGMENT_FOR_l_eyelid";
HAnimSegment701.children = new MFNode();

HAnimSegment701.children[0] = TouchSensor702;

Transform Transform703 = createNode("Transform");
Transform703.translation = new SFVec3f(new float[0.0503,-0.0689,1.4157]);
Shape Shape704 = createNode("Shape");
Shape704.USE = "JointShape";
Transform703.child = new undefined();

Transform703.child[0] = Shape704;

HAnimSegment701.children[1] = Transform703;

HAnimSite HAnimSite705 = createNode("HAnimSite");
HAnimSite705.name = "SEGMENT_FOR_l_eyelid_tip";
HAnimSite705.DEF = "hanim_SEGMENT_FOR_l_eyelid_tip";
Transform Transform706 = createNode("Transform");
Transform706.translation = new SFVec3f(new float[0.0503,-0.0689,1.4157]);
Shape Shape707 = createNode("Shape");
Shape707.USE = "SiteShape";
Transform706.child = new undefined();

Transform706.child[0] = Shape707;

HAnimSite705.children = new MFNode();

HAnimSite705.children[0] = Transform706;

HAnimSegment701.children[2] = HAnimSite705;

HAnimJoint700.children = new MFNode();

HAnimJoint700.children[0] = HAnimSegment701;

HAnimJoint692.children[1] = HAnimJoint700;

HAnimJoint HAnimJoint708 = createNode("HAnimJoint");
HAnimJoint708.name = "r_eyelid";
HAnimJoint708.DEF = "hanim_r_eyelid";
HAnimJoint708.center = new SFVec3f(new float[-0.0507,-0.0689,1.4157]);
HAnimJoint708.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint708.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment709 = createNode("HAnimSegment");
HAnimSegment709.name = "SEGMENT_FOR_r_eyelid";
HAnimSegment709.DEF = "hanim_SEGMENT_FOR_r_eyelid";
TouchSensor TouchSensor710 = createNode("TouchSensor");
TouchSensor710.description = "joint r_eyelid segment SEGMENT_FOR_r_eyelid";
HAnimSegment709.children = new MFNode();

HAnimSegment709.children[0] = TouchSensor710;

Transform Transform711 = createNode("Transform");
Transform711.translation = new SFVec3f(new float[-0.0507,-0.0689,1.4157]);
Shape Shape712 = createNode("Shape");
Shape712.USE = "JointShape";
Transform711.child = new undefined();

Transform711.child[0] = Shape712;

HAnimSegment709.children[1] = Transform711;

HAnimSite HAnimSite713 = createNode("HAnimSite");
HAnimSite713.name = "SEGMENT_FOR_r_eyelid_tip";
HAnimSite713.DEF = "hanim_SEGMENT_FOR_r_eyelid_tip";
Transform Transform714 = createNode("Transform");
Transform714.translation = new SFVec3f(new float[-0.0507,-0.0689,1.4157]);
Shape Shape715 = createNode("Shape");
Shape715.USE = "SiteShape";
Transform714.child = new undefined();

Transform714.child[0] = Shape715;

HAnimSite713.children = new MFNode();

HAnimSite713.children[0] = Transform714;

HAnimSegment709.children[2] = HAnimSite713;

HAnimJoint708.children = new MFNode();

HAnimJoint708.children[0] = HAnimSegment709;

HAnimJoint692.children[2] = HAnimJoint708;

HAnimJoint HAnimJoint716 = createNode("HAnimJoint");
HAnimJoint716.name = "l_eyeball";
HAnimJoint716.DEF = "hanim_l_eyeball";
HAnimJoint716.center = new SFVec3f(new float[0.0479,-0.0188,1.3963]);
HAnimJoint716.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint716.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment717 = createNode("HAnimSegment");
HAnimSegment717.name = "SEGMENT_FOR_l_eyeball";
HAnimSegment717.DEF = "hanim_SEGMENT_FOR_l_eyeball";
TouchSensor TouchSensor718 = createNode("TouchSensor");
TouchSensor718.description = "joint l_eyeball segment SEGMENT_FOR_l_eyeball";
HAnimSegment717.children = new MFNode();

HAnimSegment717.children[0] = TouchSensor718;

Transform Transform719 = createNode("Transform");
Transform719.translation = new SFVec3f(new float[0.0479,-0.0188,1.3963]);
Shape Shape720 = createNode("Shape");
Shape720.USE = "JointShape";
Transform719.child = new undefined();

Transform719.child[0] = Shape720;

HAnimSegment717.children[1] = Transform719;

HAnimSite HAnimSite721 = createNode("HAnimSite");
HAnimSite721.name = "SEGMENT_FOR_l_eyeball_tip";
HAnimSite721.DEF = "hanim_SEGMENT_FOR_l_eyeball_tip";
Transform Transform722 = createNode("Transform");
Transform722.translation = new SFVec3f(new float[0.0479,-0.0188,1.3963]);
Shape Shape723 = createNode("Shape");
Shape723.USE = "SiteShape";
Transform722.child = new undefined();

Transform722.child[0] = Shape723;

HAnimSite721.children = new MFNode();

HAnimSite721.children[0] = Transform722;

HAnimSegment717.children[2] = HAnimSite721;

HAnimJoint716.children = new MFNode();

HAnimJoint716.children[0] = HAnimSegment717;

HAnimJoint692.children[3] = HAnimJoint716;

HAnimJoint HAnimJoint724 = createNode("HAnimJoint");
HAnimJoint724.name = "r_eyeball";
HAnimJoint724.DEF = "hanim_r_eyeball";
HAnimJoint724.center = new SFVec3f(new float[-0.0483,-0.0188,1.3963]);
HAnimJoint724.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint724.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment725 = createNode("HAnimSegment");
HAnimSegment725.name = "SEGMENT_FOR_r_eyeball";
HAnimSegment725.DEF = "hanim_SEGMENT_FOR_r_eyeball";
TouchSensor TouchSensor726 = createNode("TouchSensor");
TouchSensor726.description = "joint r_eyeball segment SEGMENT_FOR_r_eyeball";
HAnimSegment725.children = new MFNode();

HAnimSegment725.children[0] = TouchSensor726;

Transform Transform727 = createNode("Transform");
Transform727.translation = new SFVec3f(new float[-0.0483,-0.0188,1.3963]);
Shape Shape728 = createNode("Shape");
Shape728.USE = "JointShape";
Transform727.child = new undefined();

Transform727.child[0] = Shape728;

HAnimSegment725.children[1] = Transform727;

HAnimSite HAnimSite729 = createNode("HAnimSite");
HAnimSite729.name = "SEGMENT_FOR_r_eyeball_tip";
HAnimSite729.DEF = "hanim_SEGMENT_FOR_r_eyeball_tip";
Transform Transform730 = createNode("Transform");
Transform730.translation = new SFVec3f(new float[-0.0483,-0.0188,1.3963]);
Shape Shape731 = createNode("Shape");
Shape731.USE = "SiteShape";
Transform730.child = new undefined();

Transform730.child[0] = Shape731;

HAnimSite729.children = new MFNode();

HAnimSite729.children[0] = Transform730;

HAnimSegment725.children[2] = HAnimSite729;

HAnimJoint724.children = new MFNode();

HAnimJoint724.children[0] = HAnimSegment725;

HAnimJoint692.children[4] = HAnimJoint724;

HAnimJoint HAnimJoint732 = createNode("HAnimJoint");
HAnimJoint732.name = "l_eyebrow";
HAnimJoint732.DEF = "hanim_l_eyebrow";
HAnimJoint732.center = new SFVec3f(new float[0.0216,0.0051,1.4053]);
HAnimJoint732.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint732.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment733 = createNode("HAnimSegment");
HAnimSegment733.name = "SEGMENT_FOR_l_eyebrow";
HAnimSegment733.DEF = "hanim_SEGMENT_FOR_l_eyebrow";
TouchSensor TouchSensor734 = createNode("TouchSensor");
TouchSensor734.description = "joint l_eyebrow segment SEGMENT_FOR_l_eyebrow";
HAnimSegment733.children = new MFNode();

HAnimSegment733.children[0] = TouchSensor734;

Transform Transform735 = createNode("Transform");
Transform735.translation = new SFVec3f(new float[0.0216,0.0051,1.4053]);
Shape Shape736 = createNode("Shape");
Shape736.USE = "JointShape";
Transform735.child = new undefined();

Transform735.child[0] = Shape736;

HAnimSegment733.children[1] = Transform735;

HAnimSite HAnimSite737 = createNode("HAnimSite");
HAnimSite737.name = "SEGMENT_FOR_l_eyebrow_tip";
HAnimSite737.DEF = "hanim_SEGMENT_FOR_l_eyebrow_tip";
Transform Transform738 = createNode("Transform");
Transform738.translation = new SFVec3f(new float[0.0216,0.0051,1.4053]);
Shape Shape739 = createNode("Shape");
Shape739.USE = "SiteShape";
Transform738.child = new undefined();

Transform738.child[0] = Shape739;

HAnimSite737.children = new MFNode();

HAnimSite737.children[0] = Transform738;

HAnimSegment733.children[2] = HAnimSite737;

HAnimJoint732.children = new MFNode();

HAnimJoint732.children[0] = HAnimSegment733;

HAnimJoint692.children[5] = HAnimJoint732;

HAnimJoint HAnimJoint740 = createNode("HAnimJoint");
HAnimJoint740.name = "r_eyebrow";
HAnimJoint740.DEF = "hanim_r_eyebrow";
HAnimJoint740.center = new SFVec3f(new float[-0.0219,0.0051,1.4053]);
HAnimJoint740.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint740.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment741 = createNode("HAnimSegment");
HAnimSegment741.name = "SEGMENT_FOR_r_eyebrow";
HAnimSegment741.DEF = "hanim_SEGMENT_FOR_r_eyebrow";
TouchSensor TouchSensor742 = createNode("TouchSensor");
TouchSensor742.description = "joint r_eyebrow segment SEGMENT_FOR_r_eyebrow";
HAnimSegment741.children = new MFNode();

HAnimSegment741.children[0] = TouchSensor742;

Transform Transform743 = createNode("Transform");
Transform743.translation = new SFVec3f(new float[-0.0219,0.0051,1.4053]);
Shape Shape744 = createNode("Shape");
Shape744.USE = "JointShape";
Transform743.child = new undefined();

Transform743.child[0] = Shape744;

HAnimSegment741.children[1] = Transform743;

HAnimSite HAnimSite745 = createNode("HAnimSite");
HAnimSite745.name = "SEGMENT_FOR_r_eyebrow_tip";
HAnimSite745.DEF = "hanim_SEGMENT_FOR_r_eyebrow_tip";
Transform Transform746 = createNode("Transform");
Transform746.translation = new SFVec3f(new float[-0.0219,0.0051,1.4053]);
Shape Shape747 = createNode("Shape");
Shape747.USE = "SiteShape";
Transform746.child = new undefined();

Transform746.child[0] = Shape747;

HAnimSite745.children = new MFNode();

HAnimSite745.children[0] = Transform746;

HAnimSegment741.children[2] = HAnimSite745;

HAnimJoint740.children = new MFNode();

HAnimJoint740.children[0] = HAnimSegment741;

HAnimJoint692.children[6] = HAnimJoint740;

HAnimJoint HAnimJoint748 = createNode("HAnimJoint");
HAnimJoint748.name = "jaw";
HAnimJoint748.DEF = "hanim_jaw";
HAnimJoint748.center = new SFVec3f(new float[-0.0002,-0.0865,1.3043]);
HAnimJoint748.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint748.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment749 = createNode("HAnimSegment");
HAnimSegment749.name = "SEGMENT_FOR_jaw";
HAnimSegment749.DEF = "hanim_SEGMENT_FOR_jaw";
TouchSensor TouchSensor750 = createNode("TouchSensor");
TouchSensor750.description = "joint jaw segment SEGMENT_FOR_jaw";
HAnimSegment749.children = new MFNode();

HAnimSegment749.children[0] = TouchSensor750;

Transform Transform751 = createNode("Transform");
Transform751.translation = new SFVec3f(new float[-0.0002,-0.0865,1.3043]);
Shape Shape752 = createNode("Shape");
Shape752.USE = "JointShape";
Transform751.child = new undefined();

Transform751.child[0] = Shape752;

HAnimSegment749.children[1] = Transform751;

HAnimSite HAnimSite753 = createNode("HAnimSite");
HAnimSite753.name = "SEGMENT_FOR_jaw_tip";
HAnimSite753.DEF = "hanim_SEGMENT_FOR_jaw_tip";
Transform Transform754 = createNode("Transform");
Transform754.translation = new SFVec3f(new float[-0.0002,-0.0865,1.3043]);
Shape Shape755 = createNode("Shape");
Shape755.USE = "SiteShape";
Transform754.child = new undefined();

Transform754.child[0] = Shape755;

HAnimSite753.children = new MFNode();

HAnimSite753.children[0] = Transform754;

HAnimSegment749.children[2] = HAnimSite753;

HAnimJoint748.children = new MFNode();

HAnimJoint748.children[0] = HAnimSegment749;

HAnimJoint692.children[7] = HAnimJoint748;

HAnimJoint684.children[1] = HAnimJoint692;

HAnimJoint676.children[1] = HAnimJoint684;

HAnimJoint668.children[1] = HAnimJoint676;

HAnimJoint660.children[1] = HAnimJoint668;

HAnimJoint652.children[1] = HAnimJoint660;

HAnimJoint644.children[1] = HAnimJoint652;

HAnimJoint636.children[1] = HAnimJoint644;

HAnimJoint628.children[1] = HAnimJoint636;

HAnimJoint HAnimJoint756 = createNode("HAnimJoint");
HAnimJoint756.name = "l_clavicle";
HAnimJoint756.DEF = "hanim_l_clavicle";
HAnimJoint756.center = new SFVec3f(new float[0.1228,-0.1148,1.1833]);
HAnimJoint756.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint756.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment757 = createNode("HAnimSegment");
HAnimSegment757.name = "SEGMENT_FOR_l_clavicle";
HAnimSegment757.DEF = "hanim_SEGMENT_FOR_l_clavicle";
TouchSensor TouchSensor758 = createNode("TouchSensor");
TouchSensor758.description = "joint l_clavicle segment SEGMENT_FOR_l_clavicle";
HAnimSegment757.children = new MFNode();

HAnimSegment757.children[0] = TouchSensor758;

Transform Transform759 = createNode("Transform");
Transform759.translation = new SFVec3f(new float[0.1228,-0.1148,1.1833]);
Shape Shape760 = createNode("Shape");
Shape760.USE = "JointShape";
Transform759.child = new undefined();

Transform759.child[0] = Shape760;

HAnimSegment757.children[1] = Transform759;

HAnimSite HAnimSite761 = createNode("HAnimSite");
HAnimSite761.name = "SEGMENT_FOR_l_clavicle_tip";
HAnimSite761.DEF = "hanim_SEGMENT_FOR_l_clavicle_tip";
Transform Transform762 = createNode("Transform");
Transform762.translation = new SFVec3f(new float[0.1228,-0.1148,1.1833]);
Shape Shape763 = createNode("Shape");
Shape763.USE = "SiteShape";
Transform762.child = new undefined();

Transform762.child[0] = Shape763;

HAnimSite761.children = new MFNode();

HAnimSite761.children[0] = Transform762;

HAnimSegment757.children[2] = HAnimSite761;

HAnimJoint756.children = new MFNode();

HAnimJoint756.children[0] = HAnimSegment757;

HAnimJoint HAnimJoint764 = createNode("HAnimJoint");
HAnimJoint764.name = "l_scapula";
HAnimJoint764.DEF = "hanim_l_scapula";
HAnimJoint764.center = new SFVec3f(new float[0.0383,-0.1157,1.2001]);
HAnimJoint764.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint764.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment765 = createNode("HAnimSegment");
HAnimSegment765.name = "SEGMENT_FOR_l_scapula";
HAnimSegment765.DEF = "hanim_SEGMENT_FOR_l_scapula";
TouchSensor TouchSensor766 = createNode("TouchSensor");
TouchSensor766.description = "joint l_scapula segment SEGMENT_FOR_l_scapula";
HAnimSegment765.children = new MFNode();

HAnimSegment765.children[0] = TouchSensor766;

Transform Transform767 = createNode("Transform");
Transform767.translation = new SFVec3f(new float[0.0383,-0.1157,1.2001]);
Shape Shape768 = createNode("Shape");
Shape768.USE = "JointShape";
Transform767.child = new undefined();

Transform767.child[0] = Shape768;

HAnimSegment765.children[1] = Transform767;

HAnimSite HAnimSite769 = createNode("HAnimSite");
HAnimSite769.name = "SEGMENT_FOR_l_scapula_tip";
HAnimSite769.DEF = "hanim_SEGMENT_FOR_l_scapula_tip";
Transform Transform770 = createNode("Transform");
Transform770.translation = new SFVec3f(new float[0.0383,-0.1157,1.2001]);
Shape Shape771 = createNode("Shape");
Shape771.USE = "SiteShape";
Transform770.child = new undefined();

Transform770.child[0] = Shape771;

HAnimSite769.children = new MFNode();

HAnimSite769.children[0] = Transform770;

HAnimSegment765.children[2] = HAnimSite769;

HAnimJoint764.children = new MFNode();

HAnimJoint764.children[0] = HAnimSegment765;

HAnimJoint HAnimJoint772 = createNode("HAnimJoint");
HAnimJoint772.name = "l_upperarm";
HAnimJoint772.DEF = "hanim_l_upperarm";
HAnimJoint772.center = new SFVec3f(new float[0.1649,-0.1051,1.17]);
HAnimJoint772.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint772.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment773 = createNode("HAnimSegment");
HAnimSegment773.name = "SEGMENT_FOR_l_upperarm";
HAnimSegment773.DEF = "hanim_SEGMENT_FOR_l_upperarm";
TouchSensor TouchSensor774 = createNode("TouchSensor");
TouchSensor774.description = "joint l_upperarm segment SEGMENT_FOR_l_upperarm";
HAnimSegment773.children = new MFNode();

HAnimSegment773.children[0] = TouchSensor774;

Transform Transform775 = createNode("Transform");
Transform775.translation = new SFVec3f(new float[0.1649,-0.1051,1.17]);
Shape Shape776 = createNode("Shape");
Shape776.USE = "JointShape";
Transform775.child = new undefined();

Transform775.child[0] = Shape776;

HAnimSegment773.children[1] = Transform775;

HAnimSite HAnimSite777 = createNode("HAnimSite");
HAnimSite777.name = "SEGMENT_FOR_l_upperarm_tip";
HAnimSite777.DEF = "hanim_SEGMENT_FOR_l_upperarm_tip";
Transform Transform778 = createNode("Transform");
Transform778.translation = new SFVec3f(new float[0.1649,-0.1051,1.17]);
Shape Shape779 = createNode("Shape");
Shape779.USE = "SiteShape";
Transform778.child = new undefined();

Transform778.child[0] = Shape779;

HAnimSite777.children = new MFNode();

HAnimSite777.children[0] = Transform778;

HAnimSegment773.children[2] = HAnimSite777;

HAnimJoint772.children = new MFNode();

HAnimJoint772.children[0] = HAnimSegment773;

HAnimJoint HAnimJoint780 = createNode("HAnimJoint");
HAnimJoint780.name = "l_forearm";
HAnimJoint780.DEF = "hanim_l_forearm";
HAnimJoint780.center = new SFVec3f(new float[0.1819,-0.1075,0.9202]);
HAnimJoint780.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint780.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment781 = createNode("HAnimSegment");
HAnimSegment781.name = "SEGMENT_FOR_l_forearm";
HAnimSegment781.DEF = "hanim_SEGMENT_FOR_l_forearm";
TouchSensor TouchSensor782 = createNode("TouchSensor");
TouchSensor782.description = "joint l_forearm segment SEGMENT_FOR_l_forearm";
HAnimSegment781.children = new MFNode();

HAnimSegment781.children[0] = TouchSensor782;

Transform Transform783 = createNode("Transform");
Transform783.translation = new SFVec3f(new float[0.1819,-0.1075,0.9202]);
Shape Shape784 = createNode("Shape");
Shape784.USE = "JointShape";
Transform783.child = new undefined();

Transform783.child[0] = Shape784;

HAnimSegment781.children[1] = Transform783;

HAnimSite HAnimSite785 = createNode("HAnimSite");
HAnimSite785.name = "SEGMENT_FOR_l_forearm_tip";
HAnimSite785.DEF = "hanim_SEGMENT_FOR_l_forearm_tip";
Transform Transform786 = createNode("Transform");
Transform786.translation = new SFVec3f(new float[0.1819,-0.1075,0.9202]);
Shape Shape787 = createNode("Shape");
Shape787.USE = "SiteShape";
Transform786.child = new undefined();

Transform786.child[0] = Shape787;

HAnimSite785.children = new MFNode();

HAnimSite785.children[0] = Transform786;

HAnimSegment781.children[2] = HAnimSite785;

HAnimJoint780.children = new MFNode();

HAnimJoint780.children[0] = HAnimSegment781;

HAnimJoint HAnimJoint788 = createNode("HAnimJoint");
HAnimJoint788.name = "l_carpal";
HAnimJoint788.DEF = "hanim_l_carpal";
HAnimJoint788.center = new SFVec3f(new float[0.1818,-0.1069,0.7157]);
HAnimJoint788.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint788.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment789 = createNode("HAnimSegment");
HAnimSegment789.name = "SEGMENT_FOR_l_carpal";
HAnimSegment789.DEF = "hanim_SEGMENT_FOR_l_carpal";
TouchSensor TouchSensor790 = createNode("TouchSensor");
TouchSensor790.description = "joint l_carpal segment SEGMENT_FOR_l_carpal";
HAnimSegment789.children = new MFNode();

HAnimSegment789.children[0] = TouchSensor790;

Transform Transform791 = createNode("Transform");
Transform791.translation = new SFVec3f(new float[0.1818,-0.1069,0.7157]);
Shape Shape792 = createNode("Shape");
Shape792.USE = "JointShape";
Transform791.child = new undefined();

Transform791.child[0] = Shape792;

HAnimSegment789.children[1] = Transform791;

HAnimSite HAnimSite793 = createNode("HAnimSite");
HAnimSite793.name = "SEGMENT_FOR_l_carpal_tip";
HAnimSite793.DEF = "hanim_SEGMENT_FOR_l_carpal_tip";
Transform Transform794 = createNode("Transform");
Transform794.translation = new SFVec3f(new float[0.1818,-0.1069,0.7157]);
Shape Shape795 = createNode("Shape");
Shape795.USE = "SiteShape";
Transform794.child = new undefined();

Transform794.child[0] = Shape795;

HAnimSite793.children = new MFNode();

HAnimSite793.children[0] = Transform794;

HAnimSegment789.children[2] = HAnimSite793;

HAnimJoint788.children = new MFNode();

HAnimJoint788.children[0] = HAnimSegment789;

HAnimJoint HAnimJoint796 = createNode("HAnimJoint");
HAnimJoint796.name = "l_trapezium";
HAnimJoint796.DEF = "hanim_l_trapezium";
HAnimJoint796.center = new SFVec3f(new float[0.1811,-0.0826,0.6975]);
HAnimJoint796.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint796.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment797 = createNode("HAnimSegment");
HAnimSegment797.name = "SEGMENT_FOR_l_trapezium";
HAnimSegment797.DEF = "hanim_SEGMENT_FOR_l_trapezium";
TouchSensor TouchSensor798 = createNode("TouchSensor");
TouchSensor798.description = "joint l_trapezium segment SEGMENT_FOR_l_trapezium";
HAnimSegment797.children = new MFNode();

HAnimSegment797.children[0] = TouchSensor798;

Transform Transform799 = createNode("Transform");
Transform799.translation = new SFVec3f(new float[0.1811,-0.0826,0.6975]);
Shape Shape800 = createNode("Shape");
Shape800.USE = "JointShape";
Transform799.child = new undefined();

Transform799.child[0] = Shape800;

HAnimSegment797.children[1] = Transform799;

HAnimSite HAnimSite801 = createNode("HAnimSite");
HAnimSite801.name = "SEGMENT_FOR_l_trapezium_tip";
HAnimSite801.DEF = "hanim_SEGMENT_FOR_l_trapezium_tip";
Transform Transform802 = createNode("Transform");
Transform802.translation = new SFVec3f(new float[0.1811,-0.0826,0.6975]);
Shape Shape803 = createNode("Shape");
Shape803.USE = "SiteShape";
Transform802.child = new undefined();

Transform802.child[0] = Shape803;

HAnimSite801.children = new MFNode();

HAnimSite801.children[0] = Transform802;

HAnimSegment797.children[2] = HAnimSite801;

HAnimJoint796.children = new MFNode();

HAnimJoint796.children[0] = HAnimSegment797;

HAnimJoint HAnimJoint804 = createNode("HAnimJoint");
HAnimJoint804.name = "l_metacarpal_1";
HAnimJoint804.DEF = "hanim_l_metacarpal_1";
HAnimJoint804.center = new SFVec3f(new float[0.1803,-0.0759,0.684]);
HAnimJoint804.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint804.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment805 = createNode("HAnimSegment");
HAnimSegment805.name = "SEGMENT_FOR_l_metacarpal_1";
HAnimSegment805.DEF = "hanim_SEGMENT_FOR_l_metacarpal_1";
TouchSensor TouchSensor806 = createNode("TouchSensor");
TouchSensor806.description = "joint l_metacarpal_1 segment SEGMENT_FOR_l_metacarpal_1";
HAnimSegment805.children = new MFNode();

HAnimSegment805.children[0] = TouchSensor806;

Transform Transform807 = createNode("Transform");
Transform807.translation = new SFVec3f(new float[0.1803,-0.0759,0.684]);
Shape Shape808 = createNode("Shape");
Shape808.USE = "JointShape";
Transform807.child = new undefined();

Transform807.child[0] = Shape808;

HAnimSegment805.children[1] = Transform807;

HAnimSite HAnimSite809 = createNode("HAnimSite");
HAnimSite809.name = "SEGMENT_FOR_l_metacarpal_1_tip";
HAnimSite809.DEF = "hanim_SEGMENT_FOR_l_metacarpal_1_tip";
Transform Transform810 = createNode("Transform");
Transform810.translation = new SFVec3f(new float[0.1803,-0.0759,0.684]);
Shape Shape811 = createNode("Shape");
Shape811.USE = "SiteShape";
Transform810.child = new undefined();

Transform810.child[0] = Shape811;

HAnimSite809.children = new MFNode();

HAnimSite809.children[0] = Transform810;

HAnimSegment805.children[2] = HAnimSite809;

HAnimJoint804.children = new MFNode();

HAnimJoint804.children[0] = HAnimSegment805;

HAnimJoint HAnimJoint812 = createNode("HAnimJoint");
HAnimJoint812.name = "l_carpal_proximal_phalanx_1";
HAnimJoint812.DEF = "hanim_l_carpal_proximal_phalanx_1";
HAnimJoint812.center = new SFVec3f(new float[0.1809,-0.0661,0.6642]);
HAnimJoint812.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint812.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment813 = createNode("HAnimSegment");
HAnimSegment813.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_1";
HAnimSegment813.DEF = "hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_1";
TouchSensor TouchSensor814 = createNode("TouchSensor");
TouchSensor814.description = "joint l_carpal_proximal_phalanx_1 segment SEGMENT_FOR_l_carpal_proximal_phalanx_1";
HAnimSegment813.children = new MFNode();

HAnimSegment813.children[0] = TouchSensor814;

Transform Transform815 = createNode("Transform");
Transform815.translation = new SFVec3f(new float[0.1809,-0.0661,0.6642]);
Shape Shape816 = createNode("Shape");
Shape816.USE = "JointShape";
Transform815.child = new undefined();

Transform815.child[0] = Shape816;

HAnimSegment813.children[1] = Transform815;

HAnimSite HAnimSite817 = createNode("HAnimSite");
HAnimSite817.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_1_tip";
HAnimSite817.DEF = "hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_1_tip";
Transform Transform818 = createNode("Transform");
Transform818.translation = new SFVec3f(new float[0.1809,-0.0661,0.6642]);
Shape Shape819 = createNode("Shape");
Shape819.USE = "SiteShape";
Transform818.child = new undefined();

Transform818.child[0] = Shape819;

HAnimSite817.children = new MFNode();

HAnimSite817.children[0] = Transform818;

HAnimSegment813.children[2] = HAnimSite817;

HAnimJoint812.children = new MFNode();

HAnimJoint812.children[0] = HAnimSegment813;

HAnimJoint HAnimJoint820 = createNode("HAnimJoint");
HAnimJoint820.name = "l_carpal_distal_phalanx_1";
HAnimJoint820.DEF = "hanim_l_carpal_distal_phalanx_1";
HAnimJoint820.center = new SFVec3f(new float[0.1825,-0.0522,0.6455]);
HAnimJoint820.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint820.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment821 = createNode("HAnimSegment");
HAnimSegment821.name = "SEGMENT_FOR_l_carpal_distal_phalanx_1";
HAnimSegment821.DEF = "hanim_SEGMENT_FOR_l_carpal_distal_phalanx_1";
TouchSensor TouchSensor822 = createNode("TouchSensor");
TouchSensor822.description = "joint l_carpal_distal_phalanx_1 segment SEGMENT_FOR_l_carpal_distal_phalanx_1";
HAnimSegment821.children = new MFNode();

HAnimSegment821.children[0] = TouchSensor822;

Transform Transform823 = createNode("Transform");
Transform823.translation = new SFVec3f(new float[0.1825,-0.0522,0.6455]);
Shape Shape824 = createNode("Shape");
Shape824.USE = "JointShape";
Transform823.child = new undefined();

Transform823.child[0] = Shape824;

HAnimSegment821.children[1] = Transform823;

HAnimSite HAnimSite825 = createNode("HAnimSite");
HAnimSite825.name = "SEGMENT_FOR_l_carpal_distal_phalanx_1_tip";
HAnimSite825.DEF = "hanim_SEGMENT_FOR_l_carpal_distal_phalanx_1_tip";
Transform Transform826 = createNode("Transform");
Transform826.translation = new SFVec3f(new float[0.1825,-0.0522,0.6455]);
Shape Shape827 = createNode("Shape");
Shape827.USE = "SiteShape";
Transform826.child = new undefined();

Transform826.child[0] = Shape827;

HAnimSite825.children = new MFNode();

HAnimSite825.children[0] = Transform826;

HAnimSegment821.children[2] = HAnimSite825;

HAnimJoint820.children = new MFNode();

HAnimJoint820.children[0] = HAnimSegment821;

HAnimJoint812.children[1] = HAnimJoint820;

HAnimJoint804.children[1] = HAnimJoint812;

HAnimJoint796.children[1] = HAnimJoint804;

HAnimJoint788.children[1] = HAnimJoint796;

HAnimJoint HAnimJoint828 = createNode("HAnimJoint");
HAnimJoint828.name = "l_trapezoid";
HAnimJoint828.DEF = "hanim_l_trapezoid";
HAnimJoint828.center = new SFVec3f(new float[0.1811,-0.0935,0.6984]);
HAnimJoint828.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint828.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment829 = createNode("HAnimSegment");
HAnimSegment829.name = "SEGMENT_FOR_l_trapezoid";
HAnimSegment829.DEF = "hanim_SEGMENT_FOR_l_trapezoid";
TouchSensor TouchSensor830 = createNode("TouchSensor");
TouchSensor830.description = "joint l_trapezoid segment SEGMENT_FOR_l_trapezoid";
HAnimSegment829.children = new MFNode();

HAnimSegment829.children[0] = TouchSensor830;

Transform Transform831 = createNode("Transform");
Transform831.translation = new SFVec3f(new float[0.1811,-0.0935,0.6984]);
Shape Shape832 = createNode("Shape");
Shape832.USE = "JointShape";
Transform831.child = new undefined();

Transform831.child[0] = Shape832;

HAnimSegment829.children[1] = Transform831;

HAnimSite HAnimSite833 = createNode("HAnimSite");
HAnimSite833.name = "SEGMENT_FOR_l_trapezoid_tip";
HAnimSite833.DEF = "hanim_SEGMENT_FOR_l_trapezoid_tip";
Transform Transform834 = createNode("Transform");
Transform834.translation = new SFVec3f(new float[0.1811,-0.0935,0.6984]);
Shape Shape835 = createNode("Shape");
Shape835.USE = "SiteShape";
Transform834.child = new undefined();

Transform834.child[0] = Shape835;

HAnimSite833.children = new MFNode();

HAnimSite833.children[0] = Transform834;

HAnimSegment829.children[2] = HAnimSite833;

HAnimJoint828.children = new MFNode();

HAnimJoint828.children[0] = HAnimSegment829;

HAnimJoint HAnimJoint836 = createNode("HAnimJoint");
HAnimJoint836.name = "l_metacarpal_2";
HAnimJoint836.DEF = "hanim_l_metacarpal_2";
HAnimJoint836.center = new SFVec3f(new float[0.1811,-0.0922,0.679]);
HAnimJoint836.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint836.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment837 = createNode("HAnimSegment");
HAnimSegment837.name = "SEGMENT_FOR_l_metacarpal_2";
HAnimSegment837.DEF = "hanim_SEGMENT_FOR_l_metacarpal_2";
TouchSensor TouchSensor838 = createNode("TouchSensor");
TouchSensor838.description = "joint l_metacarpal_2 segment SEGMENT_FOR_l_metacarpal_2";
HAnimSegment837.children = new MFNode();

HAnimSegment837.children[0] = TouchSensor838;

Transform Transform839 = createNode("Transform");
Transform839.translation = new SFVec3f(new float[0.1811,-0.0922,0.679]);
Shape Shape840 = createNode("Shape");
Shape840.USE = "JointShape";
Transform839.child = new undefined();

Transform839.child[0] = Shape840;

HAnimSegment837.children[1] = Transform839;

HAnimSite HAnimSite841 = createNode("HAnimSite");
HAnimSite841.name = "SEGMENT_FOR_l_metacarpal_2_tip";
HAnimSite841.DEF = "hanim_SEGMENT_FOR_l_metacarpal_2_tip";
Transform Transform842 = createNode("Transform");
Transform842.translation = new SFVec3f(new float[0.1811,-0.0922,0.679]);
Shape Shape843 = createNode("Shape");
Shape843.USE = "SiteShape";
Transform842.child = new undefined();

Transform842.child[0] = Shape843;

HAnimSite841.children = new MFNode();

HAnimSite841.children[0] = Transform842;

HAnimSegment837.children[2] = HAnimSite841;

HAnimJoint836.children = new MFNode();

HAnimJoint836.children[0] = HAnimSegment837;

HAnimJoint HAnimJoint844 = createNode("HAnimJoint");
HAnimJoint844.name = "l_carpal_proximal_phalanx_2";
HAnimJoint844.DEF = "hanim_l_carpal_proximal_phalanx_2";
HAnimJoint844.center = new SFVec3f(new float[0.1836,-0.0868,0.6286]);
HAnimJoint844.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint844.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment845 = createNode("HAnimSegment");
HAnimSegment845.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_2";
HAnimSegment845.DEF = "hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_2";
TouchSensor TouchSensor846 = createNode("TouchSensor");
TouchSensor846.description = "joint l_carpal_proximal_phalanx_2 segment SEGMENT_FOR_l_carpal_proximal_phalanx_2";
HAnimSegment845.children = new MFNode();

HAnimSegment845.children[0] = TouchSensor846;

Transform Transform847 = createNode("Transform");
Transform847.translation = new SFVec3f(new float[0.1836,-0.0868,0.6286]);
Shape Shape848 = createNode("Shape");
Shape848.USE = "JointShape";
Transform847.child = new undefined();

Transform847.child[0] = Shape848;

HAnimSegment845.children[1] = Transform847;

HAnimSite HAnimSite849 = createNode("HAnimSite");
HAnimSite849.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_2_tip";
HAnimSite849.DEF = "hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_2_tip";
Transform Transform850 = createNode("Transform");
Transform850.translation = new SFVec3f(new float[0.1836,-0.0868,0.6286]);
Shape Shape851 = createNode("Shape");
Shape851.USE = "SiteShape";
Transform850.child = new undefined();

Transform850.child[0] = Shape851;

HAnimSite849.children = new MFNode();

HAnimSite849.children[0] = Transform850;

HAnimSegment845.children[2] = HAnimSite849;

HAnimJoint844.children = new MFNode();

HAnimJoint844.children[0] = HAnimSegment845;

HAnimJoint HAnimJoint852 = createNode("HAnimJoint");
HAnimJoint852.name = "l_carpal_middle_phalanx_2";
HAnimJoint852.DEF = "hanim_l_carpal_middle_phalanx_2";
HAnimJoint852.center = new SFVec3f(new float[0.1815,-0.0877,0.5983]);
HAnimJoint852.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint852.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment853 = createNode("HAnimSegment");
HAnimSegment853.name = "SEGMENT_FOR_l_carpal_middle_phalanx_2";
HAnimSegment853.DEF = "hanim_SEGMENT_FOR_l_carpal_middle_phalanx_2";
TouchSensor TouchSensor854 = createNode("TouchSensor");
TouchSensor854.description = "joint l_carpal_middle_phalanx_2 segment SEGMENT_FOR_l_carpal_middle_phalanx_2";
HAnimSegment853.children = new MFNode();

HAnimSegment853.children[0] = TouchSensor854;

Transform Transform855 = createNode("Transform");
Transform855.translation = new SFVec3f(new float[0.1815,-0.0877,0.5983]);
Shape Shape856 = createNode("Shape");
Shape856.USE = "JointShape";
Transform855.child = new undefined();

Transform855.child[0] = Shape856;

HAnimSegment853.children[1] = Transform855;

HAnimSite HAnimSite857 = createNode("HAnimSite");
HAnimSite857.name = "SEGMENT_FOR_l_carpal_middle_phalanx_2_tip";
HAnimSite857.DEF = "hanim_SEGMENT_FOR_l_carpal_middle_phalanx_2_tip";
Transform Transform858 = createNode("Transform");
Transform858.translation = new SFVec3f(new float[0.1815,-0.0877,0.5983]);
Shape Shape859 = createNode("Shape");
Shape859.USE = "SiteShape";
Transform858.child = new undefined();

Transform858.child[0] = Shape859;

HAnimSite857.children = new MFNode();

HAnimSite857.children[0] = Transform858;

HAnimSegment853.children[2] = HAnimSite857;

HAnimJoint852.children = new MFNode();

HAnimJoint852.children[0] = HAnimSegment853;

HAnimJoint HAnimJoint860 = createNode("HAnimJoint");
HAnimJoint860.name = "l_carpal_distal_phalanx_2";
HAnimJoint860.DEF = "hanim_l_carpal_distal_phalanx_2";
HAnimJoint860.center = new SFVec3f(new float[0.1805,-0.0885,0.5731]);
HAnimJoint860.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint860.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment861 = createNode("HAnimSegment");
HAnimSegment861.name = "SEGMENT_FOR_l_carpal_distal_phalanx_2";
HAnimSegment861.DEF = "hanim_SEGMENT_FOR_l_carpal_distal_phalanx_2";
TouchSensor TouchSensor862 = createNode("TouchSensor");
TouchSensor862.description = "joint l_carpal_distal_phalanx_2 segment SEGMENT_FOR_l_carpal_distal_phalanx_2";
HAnimSegment861.children = new MFNode();

HAnimSegment861.children[0] = TouchSensor862;

Transform Transform863 = createNode("Transform");
Transform863.translation = new SFVec3f(new float[0.1805,-0.0885,0.5731]);
Shape Shape864 = createNode("Shape");
Shape864.USE = "JointShape";
Transform863.child = new undefined();

Transform863.child[0] = Shape864;

HAnimSegment861.children[1] = Transform863;

HAnimSite HAnimSite865 = createNode("HAnimSite");
HAnimSite865.name = "SEGMENT_FOR_l_carpal_distal_phalanx_2_tip";
HAnimSite865.DEF = "hanim_SEGMENT_FOR_l_carpal_distal_phalanx_2_tip";
Transform Transform866 = createNode("Transform");
Transform866.translation = new SFVec3f(new float[0.1805,-0.0885,0.5731]);
Shape Shape867 = createNode("Shape");
Shape867.USE = "SiteShape";
Transform866.child = new undefined();

Transform866.child[0] = Shape867;

HAnimSite865.children = new MFNode();

HAnimSite865.children[0] = Transform866;

HAnimSegment861.children[2] = HAnimSite865;

HAnimJoint860.children = new MFNode();

HAnimJoint860.children[0] = HAnimSegment861;

HAnimJoint852.children[1] = HAnimJoint860;

HAnimJoint844.children[1] = HAnimJoint852;

HAnimJoint836.children[1] = HAnimJoint844;

HAnimJoint828.children[1] = HAnimJoint836;

HAnimJoint788.children[2] = HAnimJoint828;

HAnimJoint HAnimJoint868 = createNode("HAnimJoint");
HAnimJoint868.name = "l_capitate";
HAnimJoint868.DEF = "hanim_l_capitate";
HAnimJoint868.center = new SFVec3f(new float[0.1809,-0.1067,0.7]);
HAnimJoint868.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint868.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment869 = createNode("HAnimSegment");
HAnimSegment869.name = "SEGMENT_FOR_l_capitate";
HAnimSegment869.DEF = "hanim_SEGMENT_FOR_l_capitate";
TouchSensor TouchSensor870 = createNode("TouchSensor");
TouchSensor870.description = "joint l_capitate segment SEGMENT_FOR_l_capitate";
HAnimSegment869.children = new MFNode();

HAnimSegment869.children[0] = TouchSensor870;

Transform Transform871 = createNode("Transform");
Transform871.translation = new SFVec3f(new float[0.1809,-0.1067,0.7]);
Shape Shape872 = createNode("Shape");
Shape872.USE = "JointShape";
Transform871.child = new undefined();

Transform871.child[0] = Shape872;

HAnimSegment869.children[1] = Transform871;

HAnimSite HAnimSite873 = createNode("HAnimSite");
HAnimSite873.name = "SEGMENT_FOR_l_capitate_tip";
HAnimSite873.DEF = "hanim_SEGMENT_FOR_l_capitate_tip";
Transform Transform874 = createNode("Transform");
Transform874.translation = new SFVec3f(new float[0.1809,-0.1067,0.7]);
Shape Shape875 = createNode("Shape");
Shape875.USE = "SiteShape";
Transform874.child = new undefined();

Transform874.child[0] = Shape875;

HAnimSite873.children = new MFNode();

HAnimSite873.children[0] = Transform874;

HAnimSegment869.children[2] = HAnimSite873;

HAnimJoint868.children = new MFNode();

HAnimJoint868.children[0] = HAnimSegment869;

HAnimJoint HAnimJoint876 = createNode("HAnimJoint");
HAnimJoint876.name = "l_metacarpal_3";
HAnimJoint876.DEF = "hanim_l_metacarpal_3";
HAnimJoint876.center = new SFVec3f(new float[0.1809,-0.1081,0.6772]);
HAnimJoint876.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint876.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment877 = createNode("HAnimSegment");
HAnimSegment877.name = "SEGMENT_FOR_l_metacarpal_3";
HAnimSegment877.DEF = "hanim_SEGMENT_FOR_l_metacarpal_3";
TouchSensor TouchSensor878 = createNode("TouchSensor");
TouchSensor878.description = "joint l_metacarpal_3 segment SEGMENT_FOR_l_metacarpal_3";
HAnimSegment877.children = new MFNode();

HAnimSegment877.children[0] = TouchSensor878;

Transform Transform879 = createNode("Transform");
Transform879.translation = new SFVec3f(new float[0.1809,-0.1081,0.6772]);
Shape Shape880 = createNode("Shape");
Shape880.USE = "JointShape";
Transform879.child = new undefined();

Transform879.child[0] = Shape880;

HAnimSegment877.children[1] = Transform879;

HAnimSite HAnimSite881 = createNode("HAnimSite");
HAnimSite881.name = "SEGMENT_FOR_l_metacarpal_3_tip";
HAnimSite881.DEF = "hanim_SEGMENT_FOR_l_metacarpal_3_tip";
Transform Transform882 = createNode("Transform");
Transform882.translation = new SFVec3f(new float[0.1809,-0.1081,0.6772]);
Shape Shape883 = createNode("Shape");
Shape883.USE = "SiteShape";
Transform882.child = new undefined();

Transform882.child[0] = Shape883;

HAnimSite881.children = new MFNode();

HAnimSite881.children[0] = Transform882;

HAnimSegment877.children[2] = HAnimSite881;

HAnimJoint876.children = new MFNode();

HAnimJoint876.children[0] = HAnimSegment877;

HAnimJoint HAnimJoint884 = createNode("HAnimJoint");
HAnimJoint884.name = "l_carpal_proximal_phalanx_3";
HAnimJoint884.DEF = "hanim_l_carpal_proximal_phalanx_3";
HAnimJoint884.center = new SFVec3f(new float[0.1835,-0.1058,0.6264]);
HAnimJoint884.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint884.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment885 = createNode("HAnimSegment");
HAnimSegment885.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_3";
HAnimSegment885.DEF = "hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_3";
TouchSensor TouchSensor886 = createNode("TouchSensor");
TouchSensor886.description = "joint l_carpal_proximal_phalanx_3 segment SEGMENT_FOR_l_carpal_proximal_phalanx_3";
HAnimSegment885.children = new MFNode();

HAnimSegment885.children[0] = TouchSensor886;

Transform Transform887 = createNode("Transform");
Transform887.translation = new SFVec3f(new float[0.1835,-0.1058,0.6264]);
Shape Shape888 = createNode("Shape");
Shape888.USE = "JointShape";
Transform887.child = new undefined();

Transform887.child[0] = Shape888;

HAnimSegment885.children[1] = Transform887;

HAnimSite HAnimSite889 = createNode("HAnimSite");
HAnimSite889.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_3_tip";
HAnimSite889.DEF = "hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_3_tip";
Transform Transform890 = createNode("Transform");
Transform890.translation = new SFVec3f(new float[0.1835,-0.1058,0.6264]);
Shape Shape891 = createNode("Shape");
Shape891.USE = "SiteShape";
Transform890.child = new undefined();

Transform890.child[0] = Shape891;

HAnimSite889.children = new MFNode();

HAnimSite889.children[0] = Transform890;

HAnimSegment885.children[2] = HAnimSite889;

HAnimJoint884.children = new MFNode();

HAnimJoint884.children[0] = HAnimSegment885;

HAnimJoint HAnimJoint892 = createNode("HAnimJoint");
HAnimJoint892.name = "l_carpal_middle_phalanx_3";
HAnimJoint892.DEF = "hanim_l_carpal_middle_phalanx_3";
HAnimJoint892.center = new SFVec3f(new float[0.1815,-0.1054,0.5947]);
HAnimJoint892.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint892.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment893 = createNode("HAnimSegment");
HAnimSegment893.name = "SEGMENT_FOR_l_carpal_middle_phalanx_3";
HAnimSegment893.DEF = "hanim_SEGMENT_FOR_l_carpal_middle_phalanx_3";
TouchSensor TouchSensor894 = createNode("TouchSensor");
TouchSensor894.description = "joint l_carpal_middle_phalanx_3 segment SEGMENT_FOR_l_carpal_middle_phalanx_3";
HAnimSegment893.children = new MFNode();

HAnimSegment893.children[0] = TouchSensor894;

Transform Transform895 = createNode("Transform");
Transform895.translation = new SFVec3f(new float[0.1815,-0.1054,0.5947]);
Shape Shape896 = createNode("Shape");
Shape896.USE = "JointShape";
Transform895.child = new undefined();

Transform895.child[0] = Shape896;

HAnimSegment893.children[1] = Transform895;

HAnimSite HAnimSite897 = createNode("HAnimSite");
HAnimSite897.name = "SEGMENT_FOR_l_carpal_middle_phalanx_3_tip";
HAnimSite897.DEF = "hanim_SEGMENT_FOR_l_carpal_middle_phalanx_3_tip";
Transform Transform898 = createNode("Transform");
Transform898.translation = new SFVec3f(new float[0.1815,-0.1054,0.5947]);
Shape Shape899 = createNode("Shape");
Shape899.USE = "SiteShape";
Transform898.child = new undefined();

Transform898.child[0] = Shape899;

HAnimSite897.children = new MFNode();

HAnimSite897.children[0] = Transform898;

HAnimSegment893.children[2] = HAnimSite897;

HAnimJoint892.children = new MFNode();

HAnimJoint892.children[0] = HAnimSegment893;

HAnimJoint HAnimJoint900 = createNode("HAnimJoint");
HAnimJoint900.name = "l_carpal_distal_phalanx_3";
HAnimJoint900.DEF = "hanim_l_carpal_distal_phalanx_3";
HAnimJoint900.center = new SFVec3f(new float[0.1805,-0.1056,0.5668]);
HAnimJoint900.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint900.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment901 = createNode("HAnimSegment");
HAnimSegment901.name = "SEGMENT_FOR_l_carpal_distal_phalanx_3";
HAnimSegment901.DEF = "hanim_SEGMENT_FOR_l_carpal_distal_phalanx_3";
TouchSensor TouchSensor902 = createNode("TouchSensor");
TouchSensor902.description = "joint l_carpal_distal_phalanx_3 segment SEGMENT_FOR_l_carpal_distal_phalanx_3";
HAnimSegment901.children = new MFNode();

HAnimSegment901.children[0] = TouchSensor902;

Transform Transform903 = createNode("Transform");
Transform903.translation = new SFVec3f(new float[0.1805,-0.1056,0.5668]);
Shape Shape904 = createNode("Shape");
Shape904.USE = "JointShape";
Transform903.child = new undefined();

Transform903.child[0] = Shape904;

HAnimSegment901.children[1] = Transform903;

HAnimSite HAnimSite905 = createNode("HAnimSite");
HAnimSite905.name = "SEGMENT_FOR_l_carpal_distal_phalanx_3_tip";
HAnimSite905.DEF = "hanim_SEGMENT_FOR_l_carpal_distal_phalanx_3_tip";
Transform Transform906 = createNode("Transform");
Transform906.translation = new SFVec3f(new float[0.1805,-0.1056,0.5668]);
Shape Shape907 = createNode("Shape");
Shape907.USE = "SiteShape";
Transform906.child = new undefined();

Transform906.child[0] = Shape907;

HAnimSite905.children = new MFNode();

HAnimSite905.children[0] = Transform906;

HAnimSegment901.children[2] = HAnimSite905;

HAnimJoint900.children = new MFNode();

HAnimJoint900.children[0] = HAnimSegment901;

HAnimJoint892.children[1] = HAnimJoint900;

HAnimJoint884.children[1] = HAnimJoint892;

HAnimJoint876.children[1] = HAnimJoint884;

HAnimJoint868.children[1] = HAnimJoint876;

HAnimJoint788.children[3] = HAnimJoint868;

HAnimJoint HAnimJoint908 = createNode("HAnimJoint");
HAnimJoint908.name = "l_hamate";
HAnimJoint908.DEF = "hanim_l_hamate";
HAnimJoint908.center = new SFVec3f(new float[0.1809,-0.1276,0.6973]);
HAnimJoint908.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint908.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment909 = createNode("HAnimSegment");
HAnimSegment909.name = "SEGMENT_FOR_l_hamate";
HAnimSegment909.DEF = "hanim_SEGMENT_FOR_l_hamate";
TouchSensor TouchSensor910 = createNode("TouchSensor");
TouchSensor910.description = "joint l_hamate segment SEGMENT_FOR_l_hamate";
HAnimSegment909.children = new MFNode();

HAnimSegment909.children[0] = TouchSensor910;

Transform Transform911 = createNode("Transform");
Transform911.translation = new SFVec3f(new float[0.1809,-0.1276,0.6973]);
Shape Shape912 = createNode("Shape");
Shape912.USE = "JointShape";
Transform911.child = new undefined();

Transform911.child[0] = Shape912;

HAnimSegment909.children[1] = Transform911;

HAnimSite HAnimSite913 = createNode("HAnimSite");
HAnimSite913.name = "SEGMENT_FOR_l_hamate_tip";
HAnimSite913.DEF = "hanim_SEGMENT_FOR_l_hamate_tip";
Transform Transform914 = createNode("Transform");
Transform914.translation = new SFVec3f(new float[0.1809,-0.1276,0.6973]);
Shape Shape915 = createNode("Shape");
Shape915.USE = "SiteShape";
Transform914.child = new undefined();

Transform914.child[0] = Shape915;

HAnimSite913.children = new MFNode();

HAnimSite913.children[0] = Transform914;

HAnimSegment909.children[2] = HAnimSite913;

HAnimJoint908.children = new MFNode();

HAnimJoint908.children[0] = HAnimSegment909;

HAnimJoint HAnimJoint916 = createNode("HAnimJoint");
HAnimJoint916.name = "l_metacarpal_4";
HAnimJoint916.DEF = "hanim_l_metacarpal_4";
HAnimJoint916.center = new SFVec3f(new float[0.1809,-0.1218,0.6777]);
HAnimJoint916.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint916.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment917 = createNode("HAnimSegment");
HAnimSegment917.name = "SEGMENT_FOR_l_metacarpal_4";
HAnimSegment917.DEF = "hanim_SEGMENT_FOR_l_metacarpal_4";
TouchSensor TouchSensor918 = createNode("TouchSensor");
TouchSensor918.description = "joint l_metacarpal_4 segment SEGMENT_FOR_l_metacarpal_4";
HAnimSegment917.children = new MFNode();

HAnimSegment917.children[0] = TouchSensor918;

Transform Transform919 = createNode("Transform");
Transform919.translation = new SFVec3f(new float[0.1809,-0.1218,0.6777]);
Shape Shape920 = createNode("Shape");
Shape920.USE = "JointShape";
Transform919.child = new undefined();

Transform919.child[0] = Shape920;

HAnimSegment917.children[1] = Transform919;

HAnimSite HAnimSite921 = createNode("HAnimSite");
HAnimSite921.name = "SEGMENT_FOR_l_metacarpal_4_tip";
HAnimSite921.DEF = "hanim_SEGMENT_FOR_l_metacarpal_4_tip";
Transform Transform922 = createNode("Transform");
Transform922.translation = new SFVec3f(new float[0.1809,-0.1218,0.6777]);
Shape Shape923 = createNode("Shape");
Shape923.USE = "SiteShape";
Transform922.child = new undefined();

Transform922.child[0] = Shape923;

HAnimSite921.children = new MFNode();

HAnimSite921.children[0] = Transform922;

HAnimSegment917.children[2] = HAnimSite921;

HAnimJoint916.children = new MFNode();

HAnimJoint916.children[0] = HAnimSegment917;

HAnimJoint HAnimJoint924 = createNode("HAnimJoint");
HAnimJoint924.name = "l_carpal_proximal_phalanx_4";
HAnimJoint924.DEF = "hanim_l_carpal_proximal_phalanx_4";
HAnimJoint924.center = new SFVec3f(new float[0.1835,-0.1233,0.6255]);
HAnimJoint924.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint924.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment925 = createNode("HAnimSegment");
HAnimSegment925.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_4";
HAnimSegment925.DEF = "hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_4";
TouchSensor TouchSensor926 = createNode("TouchSensor");
TouchSensor926.description = "joint l_carpal_proximal_phalanx_4 segment SEGMENT_FOR_l_carpal_proximal_phalanx_4";
HAnimSegment925.children = new MFNode();

HAnimSegment925.children[0] = TouchSensor926;

Transform Transform927 = createNode("Transform");
Transform927.translation = new SFVec3f(new float[0.1835,-0.1233,0.6255]);
Shape Shape928 = createNode("Shape");
Shape928.USE = "JointShape";
Transform927.child = new undefined();

Transform927.child[0] = Shape928;

HAnimSegment925.children[1] = Transform927;

HAnimSite HAnimSite929 = createNode("HAnimSite");
HAnimSite929.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_4_tip";
HAnimSite929.DEF = "hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_4_tip";
Transform Transform930 = createNode("Transform");
Transform930.translation = new SFVec3f(new float[0.1835,-0.1233,0.6255]);
Shape Shape931 = createNode("Shape");
Shape931.USE = "SiteShape";
Transform930.child = new undefined();

Transform930.child[0] = Shape931;

HAnimSite929.children = new MFNode();

HAnimSite929.children[0] = Transform930;

HAnimSegment925.children[2] = HAnimSite929;

HAnimJoint924.children = new MFNode();

HAnimJoint924.children[0] = HAnimSegment925;

HAnimJoint HAnimJoint932 = createNode("HAnimJoint");
HAnimJoint932.name = "l_carpal_middle_phalanx_4";
HAnimJoint932.DEF = "hanim_l_carpal_middle_phalanx_4";
HAnimJoint932.center = new SFVec3f(new float[0.1815,-0.1225,0.598]);
HAnimJoint932.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint932.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment933 = createNode("HAnimSegment");
HAnimSegment933.name = "SEGMENT_FOR_l_carpal_middle_phalanx_4";
HAnimSegment933.DEF = "hanim_SEGMENT_FOR_l_carpal_middle_phalanx_4";
TouchSensor TouchSensor934 = createNode("TouchSensor");
TouchSensor934.description = "joint l_carpal_middle_phalanx_4 segment SEGMENT_FOR_l_carpal_middle_phalanx_4";
HAnimSegment933.children = new MFNode();

HAnimSegment933.children[0] = TouchSensor934;

Transform Transform935 = createNode("Transform");
Transform935.translation = new SFVec3f(new float[0.1815,-0.1225,0.598]);
Shape Shape936 = createNode("Shape");
Shape936.USE = "JointShape";
Transform935.child = new undefined();

Transform935.child[0] = Shape936;

HAnimSegment933.children[1] = Transform935;

HAnimSite HAnimSite937 = createNode("HAnimSite");
HAnimSite937.name = "SEGMENT_FOR_l_carpal_middle_phalanx_4_tip";
HAnimSite937.DEF = "hanim_SEGMENT_FOR_l_carpal_middle_phalanx_4_tip";
Transform Transform938 = createNode("Transform");
Transform938.translation = new SFVec3f(new float[0.1815,-0.1225,0.598]);
Shape Shape939 = createNode("Shape");
Shape939.USE = "SiteShape";
Transform938.child = new undefined();

Transform938.child[0] = Shape939;

HAnimSite937.children = new MFNode();

HAnimSite937.children[0] = Transform938;

HAnimSegment933.children[2] = HAnimSite937;

HAnimJoint932.children = new MFNode();

HAnimJoint932.children[0] = HAnimSegment933;

HAnimJoint HAnimJoint940 = createNode("HAnimJoint");
HAnimJoint940.name = "l_carpal_distal_phalanx_4";
HAnimJoint940.DEF = "hanim_l_carpal_distal_phalanx_4";
HAnimJoint940.center = new SFVec3f(new float[0.1805,-0.1217,0.5722]);
HAnimJoint940.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint940.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment941 = createNode("HAnimSegment");
HAnimSegment941.name = "SEGMENT_FOR_l_carpal_distal_phalanx_4";
HAnimSegment941.DEF = "hanim_SEGMENT_FOR_l_carpal_distal_phalanx_4";
TouchSensor TouchSensor942 = createNode("TouchSensor");
TouchSensor942.description = "joint l_carpal_distal_phalanx_4 segment SEGMENT_FOR_l_carpal_distal_phalanx_4";
HAnimSegment941.children = new MFNode();

HAnimSegment941.children[0] = TouchSensor942;

Transform Transform943 = createNode("Transform");
Transform943.translation = new SFVec3f(new float[0.1805,-0.1217,0.5722]);
Shape Shape944 = createNode("Shape");
Shape944.USE = "JointShape";
Transform943.child = new undefined();

Transform943.child[0] = Shape944;

HAnimSegment941.children[1] = Transform943;

HAnimSite HAnimSite945 = createNode("HAnimSite");
HAnimSite945.name = "SEGMENT_FOR_l_carpal_distal_phalanx_4_tip";
HAnimSite945.DEF = "hanim_SEGMENT_FOR_l_carpal_distal_phalanx_4_tip";
Transform Transform946 = createNode("Transform");
Transform946.translation = new SFVec3f(new float[0.1805,-0.1217,0.5722]);
Shape Shape947 = createNode("Shape");
Shape947.USE = "SiteShape";
Transform946.child = new undefined();

Transform946.child[0] = Shape947;

HAnimSite945.children = new MFNode();

HAnimSite945.children[0] = Transform946;

HAnimSegment941.children[2] = HAnimSite945;

HAnimJoint940.children = new MFNode();

HAnimJoint940.children[0] = HAnimSegment941;

HAnimJoint932.children[1] = HAnimJoint940;

HAnimJoint924.children[1] = HAnimJoint932;

HAnimJoint916.children[1] = HAnimJoint924;

HAnimJoint908.children[1] = HAnimJoint916;

HAnimJoint HAnimJoint948 = createNode("HAnimJoint");
HAnimJoint948.name = "l_metacarpal_5";
HAnimJoint948.DEF = "hanim_l_metacarpal_5";
HAnimJoint948.center = new SFVec3f(new float[0.1815,-0.1347,0.6797]);
HAnimJoint948.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint948.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment949 = createNode("HAnimSegment");
HAnimSegment949.name = "SEGMENT_FOR_l_metacarpal_5";
HAnimSegment949.DEF = "hanim_SEGMENT_FOR_l_metacarpal_5";
TouchSensor TouchSensor950 = createNode("TouchSensor");
TouchSensor950.description = "joint l_metacarpal_5 segment SEGMENT_FOR_l_metacarpal_5";
HAnimSegment949.children = new MFNode();

HAnimSegment949.children[0] = TouchSensor950;

Transform Transform951 = createNode("Transform");
Transform951.translation = new SFVec3f(new float[0.1815,-0.1347,0.6797]);
Shape Shape952 = createNode("Shape");
Shape952.USE = "JointShape";
Transform951.child = new undefined();

Transform951.child[0] = Shape952;

HAnimSegment949.children[1] = Transform951;

HAnimSite HAnimSite953 = createNode("HAnimSite");
HAnimSite953.name = "SEGMENT_FOR_l_metacarpal_5_tip";
HAnimSite953.DEF = "hanim_SEGMENT_FOR_l_metacarpal_5_tip";
Transform Transform954 = createNode("Transform");
Transform954.translation = new SFVec3f(new float[0.1815,-0.1347,0.6797]);
Shape Shape955 = createNode("Shape");
Shape955.USE = "SiteShape";
Transform954.child = new undefined();

Transform954.child[0] = Shape955;

HAnimSite953.children = new MFNode();

HAnimSite953.children[0] = Transform954;

HAnimSegment949.children[2] = HAnimSite953;

HAnimJoint948.children = new MFNode();

HAnimJoint948.children[0] = HAnimSegment949;

HAnimJoint HAnimJoint956 = createNode("HAnimJoint");
HAnimJoint956.name = "l_carpal_proximal_phalanx_5";
HAnimJoint956.DEF = "hanim_l_carpal_proximal_phalanx_5";
HAnimJoint956.center = new SFVec3f(new float[0.1832,-0.1389,0.6295]);
HAnimJoint956.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint956.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment957 = createNode("HAnimSegment");
HAnimSegment957.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_5";
HAnimSegment957.DEF = "hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_5";
TouchSensor TouchSensor958 = createNode("TouchSensor");
TouchSensor958.description = "joint l_carpal_proximal_phalanx_5 segment SEGMENT_FOR_l_carpal_proximal_phalanx_5";
HAnimSegment957.children = new MFNode();

HAnimSegment957.children[0] = TouchSensor958;

Transform Transform959 = createNode("Transform");
Transform959.translation = new SFVec3f(new float[0.1832,-0.1389,0.6295]);
Shape Shape960 = createNode("Shape");
Shape960.USE = "JointShape";
Transform959.child = new undefined();

Transform959.child[0] = Shape960;

HAnimSegment957.children[1] = Transform959;

HAnimSite HAnimSite961 = createNode("HAnimSite");
HAnimSite961.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_5_tip";
HAnimSite961.DEF = "hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_5_tip";
Transform Transform962 = createNode("Transform");
Transform962.translation = new SFVec3f(new float[0.1832,-0.1389,0.6295]);
Shape Shape963 = createNode("Shape");
Shape963.USE = "SiteShape";
Transform962.child = new undefined();

Transform962.child[0] = Shape963;

HAnimSite961.children = new MFNode();

HAnimSite961.children[0] = Transform962;

HAnimSegment957.children[2] = HAnimSite961;

HAnimJoint956.children = new MFNode();

HAnimJoint956.children[0] = HAnimSegment957;

HAnimJoint HAnimJoint964 = createNode("HAnimJoint");
HAnimJoint964.name = "l_carpal_middle_phalanx_5";
HAnimJoint964.DEF = "hanim_l_carpal_middle_phalanx_5";
HAnimJoint964.center = new SFVec3f(new float[0.1815,-0.139,0.6124]);
HAnimJoint964.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint964.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment965 = createNode("HAnimSegment");
HAnimSegment965.name = "SEGMENT_FOR_l_carpal_middle_phalanx_5";
HAnimSegment965.DEF = "hanim_SEGMENT_FOR_l_carpal_middle_phalanx_5";
TouchSensor TouchSensor966 = createNode("TouchSensor");
TouchSensor966.description = "joint l_carpal_middle_phalanx_5 segment SEGMENT_FOR_l_carpal_middle_phalanx_5";
HAnimSegment965.children = new MFNode();

HAnimSegment965.children[0] = TouchSensor966;

Transform Transform967 = createNode("Transform");
Transform967.translation = new SFVec3f(new float[0.1815,-0.139,0.6124]);
Shape Shape968 = createNode("Shape");
Shape968.USE = "JointShape";
Transform967.child = new undefined();

Transform967.child[0] = Shape968;

HAnimSegment965.children[1] = Transform967;

HAnimSite HAnimSite969 = createNode("HAnimSite");
HAnimSite969.name = "SEGMENT_FOR_l_carpal_middle_phalanx_5_tip";
HAnimSite969.DEF = "hanim_SEGMENT_FOR_l_carpal_middle_phalanx_5_tip";
Transform Transform970 = createNode("Transform");
Transform970.translation = new SFVec3f(new float[0.1815,-0.139,0.6124]);
Shape Shape971 = createNode("Shape");
Shape971.USE = "SiteShape";
Transform970.child = new undefined();

Transform970.child[0] = Shape971;

HAnimSite969.children = new MFNode();

HAnimSite969.children[0] = Transform970;

HAnimSegment965.children[2] = HAnimSite969;

HAnimJoint964.children = new MFNode();

HAnimJoint964.children[0] = HAnimSegment965;

HAnimJoint HAnimJoint972 = createNode("HAnimJoint");
HAnimJoint972.name = "l_carpal_distal_phalanx_5";
HAnimJoint972.DEF = "hanim_l_carpal_distal_phalanx_5";
HAnimJoint972.center = new SFVec3f(new float[0.1806,-0.1388,0.5938]);
HAnimJoint972.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint972.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment973 = createNode("HAnimSegment");
HAnimSegment973.name = "SEGMENT_FOR_l_carpal_distal_phalanx_5";
HAnimSegment973.DEF = "hanim_SEGMENT_FOR_l_carpal_distal_phalanx_5";
TouchSensor TouchSensor974 = createNode("TouchSensor");
TouchSensor974.description = "joint l_carpal_distal_phalanx_5 segment SEGMENT_FOR_l_carpal_distal_phalanx_5";
HAnimSegment973.children = new MFNode();

HAnimSegment973.children[0] = TouchSensor974;

Transform Transform975 = createNode("Transform");
Transform975.translation = new SFVec3f(new float[0.1806,-0.1388,0.5938]);
Shape Shape976 = createNode("Shape");
Shape976.USE = "JointShape";
Transform975.child = new undefined();

Transform975.child[0] = Shape976;

HAnimSegment973.children[1] = Transform975;

HAnimSite HAnimSite977 = createNode("HAnimSite");
HAnimSite977.name = "SEGMENT_FOR_l_carpal_distal_phalanx_5_tip";
HAnimSite977.DEF = "hanim_SEGMENT_FOR_l_carpal_distal_phalanx_5_tip";
Transform Transform978 = createNode("Transform");
Transform978.translation = new SFVec3f(new float[0.1806,-0.1388,0.5938]);
Shape Shape979 = createNode("Shape");
Shape979.USE = "SiteShape";
Transform978.child = new undefined();

Transform978.child[0] = Shape979;

HAnimSite977.children = new MFNode();

HAnimSite977.children[0] = Transform978;

HAnimSegment973.children[2] = HAnimSite977;

HAnimJoint972.children = new MFNode();

HAnimJoint972.children[0] = HAnimSegment973;

HAnimJoint964.children[1] = HAnimJoint972;

HAnimJoint956.children[1] = HAnimJoint964;

HAnimJoint948.children[1] = HAnimJoint956;

HAnimJoint908.children[2] = HAnimJoint948;

HAnimJoint788.children[4] = HAnimJoint908;

HAnimJoint780.children[1] = HAnimJoint788;

HAnimJoint772.children[1] = HAnimJoint780;

HAnimJoint764.children[1] = HAnimJoint772;

HAnimJoint756.children[1] = HAnimJoint764;

HAnimJoint628.children[2] = HAnimJoint756;

HAnimJoint HAnimJoint980 = createNode("HAnimJoint");
HAnimJoint980.name = "r_clavicle";
HAnimJoint980.DEF = "hanim_r_clavicle";
HAnimJoint980.center = new SFVec3f(new float[-0.1231,-0.1148,1.1833]);
HAnimJoint980.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint980.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment981 = createNode("HAnimSegment");
HAnimSegment981.name = "SEGMENT_FOR_r_clavicle";
HAnimSegment981.DEF = "hanim_SEGMENT_FOR_r_clavicle";
TouchSensor TouchSensor982 = createNode("TouchSensor");
TouchSensor982.description = "joint r_clavicle segment SEGMENT_FOR_r_clavicle";
HAnimSegment981.children = new MFNode();

HAnimSegment981.children[0] = TouchSensor982;

Transform Transform983 = createNode("Transform");
Transform983.translation = new SFVec3f(new float[-0.1231,-0.1148,1.1833]);
Shape Shape984 = createNode("Shape");
Shape984.USE = "JointShape";
Transform983.child = new undefined();

Transform983.child[0] = Shape984;

HAnimSegment981.children[1] = Transform983;

HAnimSite HAnimSite985 = createNode("HAnimSite");
HAnimSite985.name = "SEGMENT_FOR_r_clavicle_tip";
HAnimSite985.DEF = "hanim_SEGMENT_FOR_r_clavicle_tip";
Transform Transform986 = createNode("Transform");
Transform986.translation = new SFVec3f(new float[-0.1231,-0.1148,1.1833]);
Shape Shape987 = createNode("Shape");
Shape987.USE = "SiteShape";
Transform986.child = new undefined();

Transform986.child[0] = Shape987;

HAnimSite985.children = new MFNode();

HAnimSite985.children[0] = Transform986;

HAnimSegment981.children[2] = HAnimSite985;

HAnimJoint980.children = new MFNode();

HAnimJoint980.children[0] = HAnimSegment981;

HAnimJoint HAnimJoint988 = createNode("HAnimJoint");
HAnimJoint988.name = "r_scapula";
HAnimJoint988.DEF = "hanim_r_scapula";
HAnimJoint988.center = new SFVec3f(new float[-0.0387,-0.1157,1.2001]);
HAnimJoint988.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint988.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment989 = createNode("HAnimSegment");
HAnimSegment989.name = "SEGMENT_FOR_r_scapula";
HAnimSegment989.DEF = "hanim_SEGMENT_FOR_r_scapula";
TouchSensor TouchSensor990 = createNode("TouchSensor");
TouchSensor990.description = "joint r_scapula segment SEGMENT_FOR_r_scapula";
HAnimSegment989.children = new MFNode();

HAnimSegment989.children[0] = TouchSensor990;

Transform Transform991 = createNode("Transform");
Transform991.translation = new SFVec3f(new float[-0.0387,-0.1157,1.2001]);
Shape Shape992 = createNode("Shape");
Shape992.USE = "JointShape";
Transform991.child = new undefined();

Transform991.child[0] = Shape992;

HAnimSegment989.children[1] = Transform991;

HAnimSite HAnimSite993 = createNode("HAnimSite");
HAnimSite993.name = "SEGMENT_FOR_r_scapula_tip";
HAnimSite993.DEF = "hanim_SEGMENT_FOR_r_scapula_tip";
Transform Transform994 = createNode("Transform");
Transform994.translation = new SFVec3f(new float[-0.0387,-0.1157,1.2001]);
Shape Shape995 = createNode("Shape");
Shape995.USE = "SiteShape";
Transform994.child = new undefined();

Transform994.child[0] = Shape995;

HAnimSite993.children = new MFNode();

HAnimSite993.children[0] = Transform994;

HAnimSegment989.children[2] = HAnimSite993;

HAnimJoint988.children = new MFNode();

HAnimJoint988.children[0] = HAnimSegment989;

HAnimJoint HAnimJoint996 = createNode("HAnimJoint");
HAnimJoint996.name = "r_upperarm";
HAnimJoint996.DEF = "hanim_r_upperarm";
HAnimJoint996.center = new SFVec3f(new float[-0.1649,-0.1051,1.17]);
HAnimJoint996.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint996.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment997 = createNode("HAnimSegment");
HAnimSegment997.name = "SEGMENT_FOR_r_upperarm";
HAnimSegment997.DEF = "hanim_SEGMENT_FOR_r_upperarm";
TouchSensor TouchSensor998 = createNode("TouchSensor");
TouchSensor998.description = "joint r_upperarm segment SEGMENT_FOR_r_upperarm";
HAnimSegment997.children = new MFNode();

HAnimSegment997.children[0] = TouchSensor998;

Transform Transform999 = createNode("Transform");
Transform999.translation = new SFVec3f(new float[-0.1649,-0.1051,1.17]);
Shape Shape1000 = createNode("Shape");
Shape1000.USE = "JointShape";
Transform999.child = new undefined();

Transform999.child[0] = Shape1000;

HAnimSegment997.children[1] = Transform999;

HAnimSite HAnimSite1001 = createNode("HAnimSite");
HAnimSite1001.name = "SEGMENT_FOR_r_upperarm_tip";
HAnimSite1001.DEF = "hanim_SEGMENT_FOR_r_upperarm_tip";
Transform Transform1002 = createNode("Transform");
Transform1002.translation = new SFVec3f(new float[-0.1649,-0.1051,1.17]);
Shape Shape1003 = createNode("Shape");
Shape1003.USE = "SiteShape";
Transform1002.child = new undefined();

Transform1002.child[0] = Shape1003;

HAnimSite1001.children = new MFNode();

HAnimSite1001.children[0] = Transform1002;

HAnimSegment997.children[2] = HAnimSite1001;

HAnimJoint996.children = new MFNode();

HAnimJoint996.children[0] = HAnimSegment997;

HAnimJoint HAnimJoint1004 = createNode("HAnimJoint");
HAnimJoint1004.name = "r_forearm";
HAnimJoint1004.DEF = "hanim_r_forearm";
HAnimJoint1004.center = new SFVec3f(new float[-0.1819,-0.1075,0.9202]);
HAnimJoint1004.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1004.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1005 = createNode("HAnimSegment");
HAnimSegment1005.name = "SEGMENT_FOR_r_forearm";
HAnimSegment1005.DEF = "hanim_SEGMENT_FOR_r_forearm";
TouchSensor TouchSensor1006 = createNode("TouchSensor");
TouchSensor1006.description = "joint r_forearm segment SEGMENT_FOR_r_forearm";
HAnimSegment1005.children = new MFNode();

HAnimSegment1005.children[0] = TouchSensor1006;

Transform Transform1007 = createNode("Transform");
Transform1007.translation = new SFVec3f(new float[-0.1819,-0.1075,0.9202]);
Shape Shape1008 = createNode("Shape");
Shape1008.USE = "JointShape";
Transform1007.child = new undefined();

Transform1007.child[0] = Shape1008;

HAnimSegment1005.children[1] = Transform1007;

HAnimSite HAnimSite1009 = createNode("HAnimSite");
HAnimSite1009.name = "SEGMENT_FOR_r_forearm_tip";
HAnimSite1009.DEF = "hanim_SEGMENT_FOR_r_forearm_tip";
Transform Transform1010 = createNode("Transform");
Transform1010.translation = new SFVec3f(new float[-0.1819,-0.1075,0.9202]);
Shape Shape1011 = createNode("Shape");
Shape1011.USE = "SiteShape";
Transform1010.child = new undefined();

Transform1010.child[0] = Shape1011;

HAnimSite1009.children = new MFNode();

HAnimSite1009.children[0] = Transform1010;

HAnimSegment1005.children[2] = HAnimSite1009;

HAnimJoint1004.children = new MFNode();

HAnimJoint1004.children[0] = HAnimSegment1005;

HAnimJoint HAnimJoint1012 = createNode("HAnimJoint");
HAnimJoint1012.name = "r_carpal";
HAnimJoint1012.DEF = "hanim_r_carpal";
HAnimJoint1012.center = new SFVec3f(new float[-0.1818,-0.1069,0.7157]);
HAnimJoint1012.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1012.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1013 = createNode("HAnimSegment");
HAnimSegment1013.name = "SEGMENT_FOR_r_carpal";
HAnimSegment1013.DEF = "hanim_SEGMENT_FOR_r_carpal";
TouchSensor TouchSensor1014 = createNode("TouchSensor");
TouchSensor1014.description = "joint r_carpal segment SEGMENT_FOR_r_carpal";
HAnimSegment1013.children = new MFNode();

HAnimSegment1013.children[0] = TouchSensor1014;

Transform Transform1015 = createNode("Transform");
Transform1015.translation = new SFVec3f(new float[-0.1818,-0.1069,0.7157]);
Shape Shape1016 = createNode("Shape");
Shape1016.USE = "JointShape";
Transform1015.child = new undefined();

Transform1015.child[0] = Shape1016;

HAnimSegment1013.children[1] = Transform1015;

HAnimSite HAnimSite1017 = createNode("HAnimSite");
HAnimSite1017.name = "SEGMENT_FOR_r_carpal_tip";
HAnimSite1017.DEF = "hanim_SEGMENT_FOR_r_carpal_tip";
Transform Transform1018 = createNode("Transform");
Transform1018.translation = new SFVec3f(new float[-0.1818,-0.1069,0.7157]);
Shape Shape1019 = createNode("Shape");
Shape1019.USE = "SiteShape";
Transform1018.child = new undefined();

Transform1018.child[0] = Shape1019;

HAnimSite1017.children = new MFNode();

HAnimSite1017.children[0] = Transform1018;

HAnimSegment1013.children[2] = HAnimSite1017;

HAnimJoint1012.children = new MFNode();

HAnimJoint1012.children[0] = HAnimSegment1013;

HAnimJoint HAnimJoint1020 = createNode("HAnimJoint");
HAnimJoint1020.name = "r_trapezium";
HAnimJoint1020.DEF = "hanim_r_trapezium";
HAnimJoint1020.center = new SFVec3f(new float[-0.1811,-0.0826,0.6975]);
HAnimJoint1020.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1020.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1021 = createNode("HAnimSegment");
HAnimSegment1021.name = "SEGMENT_FOR_r_trapezium";
HAnimSegment1021.DEF = "hanim_SEGMENT_FOR_r_trapezium";
TouchSensor TouchSensor1022 = createNode("TouchSensor");
TouchSensor1022.description = "joint r_trapezium segment SEGMENT_FOR_r_trapezium";
HAnimSegment1021.children = new MFNode();

HAnimSegment1021.children[0] = TouchSensor1022;

Transform Transform1023 = createNode("Transform");
Transform1023.translation = new SFVec3f(new float[-0.1811,-0.0826,0.6975]);
Shape Shape1024 = createNode("Shape");
Shape1024.USE = "JointShape";
Transform1023.child = new undefined();

Transform1023.child[0] = Shape1024;

HAnimSegment1021.children[1] = Transform1023;

HAnimSite HAnimSite1025 = createNode("HAnimSite");
HAnimSite1025.name = "SEGMENT_FOR_r_trapezium_tip";
HAnimSite1025.DEF = "hanim_SEGMENT_FOR_r_trapezium_tip";
Transform Transform1026 = createNode("Transform");
Transform1026.translation = new SFVec3f(new float[-0.1811,-0.0826,0.6975]);
Shape Shape1027 = createNode("Shape");
Shape1027.USE = "SiteShape";
Transform1026.child = new undefined();

Transform1026.child[0] = Shape1027;

HAnimSite1025.children = new MFNode();

HAnimSite1025.children[0] = Transform1026;

HAnimSegment1021.children[2] = HAnimSite1025;

HAnimJoint1020.children = new MFNode();

HAnimJoint1020.children[0] = HAnimSegment1021;

HAnimJoint HAnimJoint1028 = createNode("HAnimJoint");
HAnimJoint1028.name = "r_metacarpal_1";
HAnimJoint1028.DEF = "hanim_r_metacarpal_1";
HAnimJoint1028.center = new SFVec3f(new float[-0.1803,-0.0759,0.684]);
HAnimJoint1028.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1028.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1029 = createNode("HAnimSegment");
HAnimSegment1029.name = "SEGMENT_FOR_r_metacarpal_1";
HAnimSegment1029.DEF = "hanim_SEGMENT_FOR_r_metacarpal_1";
TouchSensor TouchSensor1030 = createNode("TouchSensor");
TouchSensor1030.description = "joint r_metacarpal_1 segment SEGMENT_FOR_r_metacarpal_1";
HAnimSegment1029.children = new MFNode();

HAnimSegment1029.children[0] = TouchSensor1030;

Transform Transform1031 = createNode("Transform");
Transform1031.translation = new SFVec3f(new float[-0.1803,-0.0759,0.684]);
Shape Shape1032 = createNode("Shape");
Shape1032.USE = "JointShape";
Transform1031.child = new undefined();

Transform1031.child[0] = Shape1032;

HAnimSegment1029.children[1] = Transform1031;

HAnimSite HAnimSite1033 = createNode("HAnimSite");
HAnimSite1033.name = "SEGMENT_FOR_r_metacarpal_1_tip";
HAnimSite1033.DEF = "hanim_SEGMENT_FOR_r_metacarpal_1_tip";
Transform Transform1034 = createNode("Transform");
Transform1034.translation = new SFVec3f(new float[-0.1803,-0.0759,0.684]);
Shape Shape1035 = createNode("Shape");
Shape1035.USE = "SiteShape";
Transform1034.child = new undefined();

Transform1034.child[0] = Shape1035;

HAnimSite1033.children = new MFNode();

HAnimSite1033.children[0] = Transform1034;

HAnimSegment1029.children[2] = HAnimSite1033;

HAnimJoint1028.children = new MFNode();

HAnimJoint1028.children[0] = HAnimSegment1029;

HAnimJoint HAnimJoint1036 = createNode("HAnimJoint");
HAnimJoint1036.name = "r_carpal_proximal_phalanx_1";
HAnimJoint1036.DEF = "hanim_r_carpal_proximal_phalanx_1";
HAnimJoint1036.center = new SFVec3f(new float[-0.1808,-0.0661,0.6642]);
HAnimJoint1036.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1036.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1037 = createNode("HAnimSegment");
HAnimSegment1037.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_1";
HAnimSegment1037.DEF = "hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_1";
TouchSensor TouchSensor1038 = createNode("TouchSensor");
TouchSensor1038.description = "joint r_carpal_proximal_phalanx_1 segment SEGMENT_FOR_r_carpal_proximal_phalanx_1";
HAnimSegment1037.children = new MFNode();

HAnimSegment1037.children[0] = TouchSensor1038;

Transform Transform1039 = createNode("Transform");
Transform1039.translation = new SFVec3f(new float[-0.1808,-0.0661,0.6642]);
Shape Shape1040 = createNode("Shape");
Shape1040.USE = "JointShape";
Transform1039.child = new undefined();

Transform1039.child[0] = Shape1040;

HAnimSegment1037.children[1] = Transform1039;

HAnimSite HAnimSite1041 = createNode("HAnimSite");
HAnimSite1041.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_1_tip";
HAnimSite1041.DEF = "hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_1_tip";
Transform Transform1042 = createNode("Transform");
Transform1042.translation = new SFVec3f(new float[-0.1808,-0.0661,0.6642]);
Shape Shape1043 = createNode("Shape");
Shape1043.USE = "SiteShape";
Transform1042.child = new undefined();

Transform1042.child[0] = Shape1043;

HAnimSite1041.children = new MFNode();

HAnimSite1041.children[0] = Transform1042;

HAnimSegment1037.children[2] = HAnimSite1041;

HAnimJoint1036.children = new MFNode();

HAnimJoint1036.children[0] = HAnimSegment1037;

HAnimJoint HAnimJoint1044 = createNode("HAnimJoint");
HAnimJoint1044.name = "r_carpal_distal_phalanx_1";
HAnimJoint1044.DEF = "hanim_r_carpal_distal_phalanx_1";
HAnimJoint1044.center = new SFVec3f(new float[-0.1825,-0.0522,0.6455]);
HAnimJoint1044.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1044.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1045 = createNode("HAnimSegment");
HAnimSegment1045.name = "SEGMENT_FOR_r_carpal_distal_phalanx_1";
HAnimSegment1045.DEF = "hanim_SEGMENT_FOR_r_carpal_distal_phalanx_1";
TouchSensor TouchSensor1046 = createNode("TouchSensor");
TouchSensor1046.description = "joint r_carpal_distal_phalanx_1 segment SEGMENT_FOR_r_carpal_distal_phalanx_1";
HAnimSegment1045.children = new MFNode();

HAnimSegment1045.children[0] = TouchSensor1046;

Transform Transform1047 = createNode("Transform");
Transform1047.translation = new SFVec3f(new float[-0.1825,-0.0522,0.6455]);
Shape Shape1048 = createNode("Shape");
Shape1048.USE = "JointShape";
Transform1047.child = new undefined();

Transform1047.child[0] = Shape1048;

HAnimSegment1045.children[1] = Transform1047;

HAnimSite HAnimSite1049 = createNode("HAnimSite");
HAnimSite1049.name = "SEGMENT_FOR_r_carpal_distal_phalanx_1_tip";
HAnimSite1049.DEF = "hanim_SEGMENT_FOR_r_carpal_distal_phalanx_1_tip";
Transform Transform1050 = createNode("Transform");
Transform1050.translation = new SFVec3f(new float[-0.1825,-0.0522,0.6455]);
Shape Shape1051 = createNode("Shape");
Shape1051.USE = "SiteShape";
Transform1050.child = new undefined();

Transform1050.child[0] = Shape1051;

HAnimSite1049.children = new MFNode();

HAnimSite1049.children[0] = Transform1050;

HAnimSegment1045.children[2] = HAnimSite1049;

HAnimJoint1044.children = new MFNode();

HAnimJoint1044.children[0] = HAnimSegment1045;

HAnimJoint1036.children[1] = HAnimJoint1044;

HAnimJoint1028.children[1] = HAnimJoint1036;

HAnimJoint1020.children[1] = HAnimJoint1028;

HAnimJoint1012.children[1] = HAnimJoint1020;

HAnimJoint HAnimJoint1052 = createNode("HAnimJoint");
HAnimJoint1052.name = "r_trapezoid";
HAnimJoint1052.DEF = "hanim_r_trapezoid";
HAnimJoint1052.center = new SFVec3f(new float[-0.1811,-0.0935,0.6984]);
HAnimJoint1052.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1052.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1053 = createNode("HAnimSegment");
HAnimSegment1053.name = "SEGMENT_FOR_r_trapezoid";
HAnimSegment1053.DEF = "hanim_SEGMENT_FOR_r_trapezoid";
TouchSensor TouchSensor1054 = createNode("TouchSensor");
TouchSensor1054.description = "joint r_trapezoid segment SEGMENT_FOR_r_trapezoid";
HAnimSegment1053.children = new MFNode();

HAnimSegment1053.children[0] = TouchSensor1054;

Transform Transform1055 = createNode("Transform");
Transform1055.translation = new SFVec3f(new float[-0.1811,-0.0935,0.6984]);
Shape Shape1056 = createNode("Shape");
Shape1056.USE = "JointShape";
Transform1055.child = new undefined();

Transform1055.child[0] = Shape1056;

HAnimSegment1053.children[1] = Transform1055;

HAnimSite HAnimSite1057 = createNode("HAnimSite");
HAnimSite1057.name = "SEGMENT_FOR_r_trapezoid_tip";
HAnimSite1057.DEF = "hanim_SEGMENT_FOR_r_trapezoid_tip";
Transform Transform1058 = createNode("Transform");
Transform1058.translation = new SFVec3f(new float[-0.1811,-0.0935,0.6984]);
Shape Shape1059 = createNode("Shape");
Shape1059.USE = "SiteShape";
Transform1058.child = new undefined();

Transform1058.child[0] = Shape1059;

HAnimSite1057.children = new MFNode();

HAnimSite1057.children[0] = Transform1058;

HAnimSegment1053.children[2] = HAnimSite1057;

HAnimJoint1052.children = new MFNode();

HAnimJoint1052.children[0] = HAnimSegment1053;

HAnimJoint HAnimJoint1060 = createNode("HAnimJoint");
HAnimJoint1060.name = "r_metacarpal_2";
HAnimJoint1060.DEF = "hanim_r_metacarpal_2";
HAnimJoint1060.center = new SFVec3f(new float[-0.1811,-0.0922,0.679]);
HAnimJoint1060.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1060.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1061 = createNode("HAnimSegment");
HAnimSegment1061.name = "SEGMENT_FOR_r_metacarpal_2";
HAnimSegment1061.DEF = "hanim_SEGMENT_FOR_r_metacarpal_2";
TouchSensor TouchSensor1062 = createNode("TouchSensor");
TouchSensor1062.description = "joint r_metacarpal_2 segment SEGMENT_FOR_r_metacarpal_2";
HAnimSegment1061.children = new MFNode();

HAnimSegment1061.children[0] = TouchSensor1062;

Transform Transform1063 = createNode("Transform");
Transform1063.translation = new SFVec3f(new float[-0.1811,-0.0922,0.679]);
Shape Shape1064 = createNode("Shape");
Shape1064.USE = "JointShape";
Transform1063.child = new undefined();

Transform1063.child[0] = Shape1064;

HAnimSegment1061.children[1] = Transform1063;

HAnimSite HAnimSite1065 = createNode("HAnimSite");
HAnimSite1065.name = "SEGMENT_FOR_r_metacarpal_2_tip";
HAnimSite1065.DEF = "hanim_SEGMENT_FOR_r_metacarpal_2_tip";
Transform Transform1066 = createNode("Transform");
Transform1066.translation = new SFVec3f(new float[-0.1811,-0.0922,0.679]);
Shape Shape1067 = createNode("Shape");
Shape1067.USE = "SiteShape";
Transform1066.child = new undefined();

Transform1066.child[0] = Shape1067;

HAnimSite1065.children = new MFNode();

HAnimSite1065.children[0] = Transform1066;

HAnimSegment1061.children[2] = HAnimSite1065;

HAnimJoint1060.children = new MFNode();

HAnimJoint1060.children[0] = HAnimSegment1061;

HAnimJoint HAnimJoint1068 = createNode("HAnimJoint");
HAnimJoint1068.name = "r_carpal_proximal_phalanx_2";
HAnimJoint1068.DEF = "hanim_r_carpal_proximal_phalanx_2";
HAnimJoint1068.center = new SFVec3f(new float[-0.1835,-0.0868,0.6286]);
HAnimJoint1068.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1068.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1069 = createNode("HAnimSegment");
HAnimSegment1069.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_2";
HAnimSegment1069.DEF = "hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_2";
TouchSensor TouchSensor1070 = createNode("TouchSensor");
TouchSensor1070.description = "joint r_carpal_proximal_phalanx_2 segment SEGMENT_FOR_r_carpal_proximal_phalanx_2";
HAnimSegment1069.children = new MFNode();

HAnimSegment1069.children[0] = TouchSensor1070;

Transform Transform1071 = createNode("Transform");
Transform1071.translation = new SFVec3f(new float[-0.1835,-0.0868,0.6286]);
Shape Shape1072 = createNode("Shape");
Shape1072.USE = "JointShape";
Transform1071.child = new undefined();

Transform1071.child[0] = Shape1072;

HAnimSegment1069.children[1] = Transform1071;

HAnimSite HAnimSite1073 = createNode("HAnimSite");
HAnimSite1073.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_2_tip";
HAnimSite1073.DEF = "hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_2_tip";
Transform Transform1074 = createNode("Transform");
Transform1074.translation = new SFVec3f(new float[-0.1835,-0.0868,0.6286]);
Shape Shape1075 = createNode("Shape");
Shape1075.USE = "SiteShape";
Transform1074.child = new undefined();

Transform1074.child[0] = Shape1075;

HAnimSite1073.children = new MFNode();

HAnimSite1073.children[0] = Transform1074;

HAnimSegment1069.children[2] = HAnimSite1073;

HAnimJoint1068.children = new MFNode();

HAnimJoint1068.children[0] = HAnimSegment1069;

HAnimJoint HAnimJoint1076 = createNode("HAnimJoint");
HAnimJoint1076.name = "r_carpal_middle_phalanx_2";
HAnimJoint1076.DEF = "hanim_r_carpal_middle_phalanx_2";
HAnimJoint1076.center = new SFVec3f(new float[-0.1815,-0.0877,0.5983]);
HAnimJoint1076.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1076.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1077 = createNode("HAnimSegment");
HAnimSegment1077.name = "SEGMENT_FOR_r_carpal_middle_phalanx_2";
HAnimSegment1077.DEF = "hanim_SEGMENT_FOR_r_carpal_middle_phalanx_2";
TouchSensor TouchSensor1078 = createNode("TouchSensor");
TouchSensor1078.description = "joint r_carpal_middle_phalanx_2 segment SEGMENT_FOR_r_carpal_middle_phalanx_2";
HAnimSegment1077.children = new MFNode();

HAnimSegment1077.children[0] = TouchSensor1078;

Transform Transform1079 = createNode("Transform");
Transform1079.translation = new SFVec3f(new float[-0.1815,-0.0877,0.5983]);
Shape Shape1080 = createNode("Shape");
Shape1080.USE = "JointShape";
Transform1079.child = new undefined();

Transform1079.child[0] = Shape1080;

HAnimSegment1077.children[1] = Transform1079;

HAnimSite HAnimSite1081 = createNode("HAnimSite");
HAnimSite1081.name = "SEGMENT_FOR_r_carpal_middle_phalanx_2_tip";
HAnimSite1081.DEF = "hanim_SEGMENT_FOR_r_carpal_middle_phalanx_2_tip";
Transform Transform1082 = createNode("Transform");
Transform1082.translation = new SFVec3f(new float[-0.1815,-0.0877,0.5983]);
Shape Shape1083 = createNode("Shape");
Shape1083.USE = "SiteShape";
Transform1082.child = new undefined();

Transform1082.child[0] = Shape1083;

HAnimSite1081.children = new MFNode();

HAnimSite1081.children[0] = Transform1082;

HAnimSegment1077.children[2] = HAnimSite1081;

HAnimJoint1076.children = new MFNode();

HAnimJoint1076.children[0] = HAnimSegment1077;

HAnimJoint HAnimJoint1084 = createNode("HAnimJoint");
HAnimJoint1084.name = "r_carpal_distal_phalanx_2";
HAnimJoint1084.DEF = "hanim_r_carpal_distal_phalanx_2";
HAnimJoint1084.center = new SFVec3f(new float[-0.1805,-0.0885,0.5731]);
HAnimJoint1084.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1084.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1085 = createNode("HAnimSegment");
HAnimSegment1085.name = "SEGMENT_FOR_r_carpal_distal_phalanx_2";
HAnimSegment1085.DEF = "hanim_SEGMENT_FOR_r_carpal_distal_phalanx_2";
TouchSensor TouchSensor1086 = createNode("TouchSensor");
TouchSensor1086.description = "joint r_carpal_distal_phalanx_2 segment SEGMENT_FOR_r_carpal_distal_phalanx_2";
HAnimSegment1085.children = new MFNode();

HAnimSegment1085.children[0] = TouchSensor1086;

Transform Transform1087 = createNode("Transform");
Transform1087.translation = new SFVec3f(new float[-0.1805,-0.0885,0.5731]);
Shape Shape1088 = createNode("Shape");
Shape1088.USE = "JointShape";
Transform1087.child = new undefined();

Transform1087.child[0] = Shape1088;

HAnimSegment1085.children[1] = Transform1087;

HAnimSite HAnimSite1089 = createNode("HAnimSite");
HAnimSite1089.name = "SEGMENT_FOR_r_carpal_distal_phalanx_2_tip";
HAnimSite1089.DEF = "hanim_SEGMENT_FOR_r_carpal_distal_phalanx_2_tip";
Transform Transform1090 = createNode("Transform");
Transform1090.translation = new SFVec3f(new float[-0.1805,-0.0885,0.5731]);
Shape Shape1091 = createNode("Shape");
Shape1091.USE = "SiteShape";
Transform1090.child = new undefined();

Transform1090.child[0] = Shape1091;

HAnimSite1089.children = new MFNode();

HAnimSite1089.children[0] = Transform1090;

HAnimSegment1085.children[2] = HAnimSite1089;

HAnimJoint1084.children = new MFNode();

HAnimJoint1084.children[0] = HAnimSegment1085;

HAnimJoint1076.children[1] = HAnimJoint1084;

HAnimJoint1068.children[1] = HAnimJoint1076;

HAnimJoint1060.children[1] = HAnimJoint1068;

HAnimJoint1052.children[1] = HAnimJoint1060;

HAnimJoint1012.children[2] = HAnimJoint1052;

HAnimJoint HAnimJoint1092 = createNode("HAnimJoint");
HAnimJoint1092.name = "r_capitate";
HAnimJoint1092.DEF = "hanim_r_capitate";
HAnimJoint1092.center = new SFVec3f(new float[-0.1809,-0.1067,0.7]);
HAnimJoint1092.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1092.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1093 = createNode("HAnimSegment");
HAnimSegment1093.name = "SEGMENT_FOR_r_capitate";
HAnimSegment1093.DEF = "hanim_SEGMENT_FOR_r_capitate";
TouchSensor TouchSensor1094 = createNode("TouchSensor");
TouchSensor1094.description = "joint r_capitate segment SEGMENT_FOR_r_capitate";
HAnimSegment1093.children = new MFNode();

HAnimSegment1093.children[0] = TouchSensor1094;

Transform Transform1095 = createNode("Transform");
Transform1095.translation = new SFVec3f(new float[-0.1809,-0.1067,0.7]);
Shape Shape1096 = createNode("Shape");
Shape1096.USE = "JointShape";
Transform1095.child = new undefined();

Transform1095.child[0] = Shape1096;

HAnimSegment1093.children[1] = Transform1095;

HAnimSite HAnimSite1097 = createNode("HAnimSite");
HAnimSite1097.name = "SEGMENT_FOR_r_capitate_tip";
HAnimSite1097.DEF = "hanim_SEGMENT_FOR_r_capitate_tip";
Transform Transform1098 = createNode("Transform");
Transform1098.translation = new SFVec3f(new float[-0.1809,-0.1067,0.7]);
Shape Shape1099 = createNode("Shape");
Shape1099.USE = "SiteShape";
Transform1098.child = new undefined();

Transform1098.child[0] = Shape1099;

HAnimSite1097.children = new MFNode();

HAnimSite1097.children[0] = Transform1098;

HAnimSegment1093.children[2] = HAnimSite1097;

HAnimJoint1092.children = new MFNode();

HAnimJoint1092.children[0] = HAnimSegment1093;

HAnimJoint HAnimJoint1100 = createNode("HAnimJoint");
HAnimJoint1100.name = "r_metacarpal_3";
HAnimJoint1100.DEF = "hanim_r_metacarpal_3";
HAnimJoint1100.center = new SFVec3f(new float[-0.1809,-0.1081,0.6772]);
HAnimJoint1100.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1100.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1101 = createNode("HAnimSegment");
HAnimSegment1101.name = "SEGMENT_FOR_r_metacarpal_3";
HAnimSegment1101.DEF = "hanim_SEGMENT_FOR_r_metacarpal_3";
TouchSensor TouchSensor1102 = createNode("TouchSensor");
TouchSensor1102.description = "joint r_metacarpal_3 segment SEGMENT_FOR_r_metacarpal_3";
HAnimSegment1101.children = new MFNode();

HAnimSegment1101.children[0] = TouchSensor1102;

Transform Transform1103 = createNode("Transform");
Transform1103.translation = new SFVec3f(new float[-0.1809,-0.1081,0.6772]);
Shape Shape1104 = createNode("Shape");
Shape1104.USE = "JointShape";
Transform1103.child = new undefined();

Transform1103.child[0] = Shape1104;

HAnimSegment1101.children[1] = Transform1103;

HAnimSite HAnimSite1105 = createNode("HAnimSite");
HAnimSite1105.name = "SEGMENT_FOR_r_metacarpal_3_tip";
HAnimSite1105.DEF = "hanim_SEGMENT_FOR_r_metacarpal_3_tip";
Transform Transform1106 = createNode("Transform");
Transform1106.translation = new SFVec3f(new float[-0.1809,-0.1081,0.6772]);
Shape Shape1107 = createNode("Shape");
Shape1107.USE = "SiteShape";
Transform1106.child = new undefined();

Transform1106.child[0] = Shape1107;

HAnimSite1105.children = new MFNode();

HAnimSite1105.children[0] = Transform1106;

HAnimSegment1101.children[2] = HAnimSite1105;

HAnimJoint1100.children = new MFNode();

HAnimJoint1100.children[0] = HAnimSegment1101;

HAnimJoint HAnimJoint1108 = createNode("HAnimJoint");
HAnimJoint1108.name = "r_carpal_proximal_phalanx_3";
HAnimJoint1108.DEF = "hanim_r_carpal_proximal_phalanx_3";
HAnimJoint1108.center = new SFVec3f(new float[-0.1835,-0.1058,0.6264]);
HAnimJoint1108.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1108.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1109 = createNode("HAnimSegment");
HAnimSegment1109.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_3";
HAnimSegment1109.DEF = "hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_3";
TouchSensor TouchSensor1110 = createNode("TouchSensor");
TouchSensor1110.description = "joint r_carpal_proximal_phalanx_3 segment SEGMENT_FOR_r_carpal_proximal_phalanx_3";
HAnimSegment1109.children = new MFNode();

HAnimSegment1109.children[0] = TouchSensor1110;

Transform Transform1111 = createNode("Transform");
Transform1111.translation = new SFVec3f(new float[-0.1835,-0.1058,0.6264]);
Shape Shape1112 = createNode("Shape");
Shape1112.USE = "JointShape";
Transform1111.child = new undefined();

Transform1111.child[0] = Shape1112;

HAnimSegment1109.children[1] = Transform1111;

HAnimSite HAnimSite1113 = createNode("HAnimSite");
HAnimSite1113.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_3_tip";
HAnimSite1113.DEF = "hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_3_tip";
Transform Transform1114 = createNode("Transform");
Transform1114.translation = new SFVec3f(new float[-0.1835,-0.1058,0.6264]);
Shape Shape1115 = createNode("Shape");
Shape1115.USE = "SiteShape";
Transform1114.child = new undefined();

Transform1114.child[0] = Shape1115;

HAnimSite1113.children = new MFNode();

HAnimSite1113.children[0] = Transform1114;

HAnimSegment1109.children[2] = HAnimSite1113;

HAnimJoint1108.children = new MFNode();

HAnimJoint1108.children[0] = HAnimSegment1109;

HAnimJoint HAnimJoint1116 = createNode("HAnimJoint");
HAnimJoint1116.name = "r_carpal_middle_phalanx_3";
HAnimJoint1116.DEF = "hanim_r_carpal_middle_phalanx_3";
HAnimJoint1116.center = new SFVec3f(new float[-0.1815,-0.1054,0.5947]);
HAnimJoint1116.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1116.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1117 = createNode("HAnimSegment");
HAnimSegment1117.name = "SEGMENT_FOR_r_carpal_middle_phalanx_3";
HAnimSegment1117.DEF = "hanim_SEGMENT_FOR_r_carpal_middle_phalanx_3";
TouchSensor TouchSensor1118 = createNode("TouchSensor");
TouchSensor1118.description = "joint r_carpal_middle_phalanx_3 segment SEGMENT_FOR_r_carpal_middle_phalanx_3";
HAnimSegment1117.children = new MFNode();

HAnimSegment1117.children[0] = TouchSensor1118;

Transform Transform1119 = createNode("Transform");
Transform1119.translation = new SFVec3f(new float[-0.1815,-0.1054,0.5947]);
Shape Shape1120 = createNode("Shape");
Shape1120.USE = "JointShape";
Transform1119.child = new undefined();

Transform1119.child[0] = Shape1120;

HAnimSegment1117.children[1] = Transform1119;

HAnimSite HAnimSite1121 = createNode("HAnimSite");
HAnimSite1121.name = "SEGMENT_FOR_r_carpal_middle_phalanx_3_tip";
HAnimSite1121.DEF = "hanim_SEGMENT_FOR_r_carpal_middle_phalanx_3_tip";
Transform Transform1122 = createNode("Transform");
Transform1122.translation = new SFVec3f(new float[-0.1815,-0.1054,0.5947]);
Shape Shape1123 = createNode("Shape");
Shape1123.USE = "SiteShape";
Transform1122.child = new undefined();

Transform1122.child[0] = Shape1123;

HAnimSite1121.children = new MFNode();

HAnimSite1121.children[0] = Transform1122;

HAnimSegment1117.children[2] = HAnimSite1121;

HAnimJoint1116.children = new MFNode();

HAnimJoint1116.children[0] = HAnimSegment1117;

HAnimJoint HAnimJoint1124 = createNode("HAnimJoint");
HAnimJoint1124.name = "r_carpal_distal_phalanx_3";
HAnimJoint1124.DEF = "hanim_r_carpal_distal_phalanx_3";
HAnimJoint1124.center = new SFVec3f(new float[-0.1805,-0.1056,0.5668]);
HAnimJoint1124.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1124.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1125 = createNode("HAnimSegment");
HAnimSegment1125.name = "SEGMENT_FOR_r_carpal_distal_phalanx_3";
HAnimSegment1125.DEF = "hanim_SEGMENT_FOR_r_carpal_distal_phalanx_3";
TouchSensor TouchSensor1126 = createNode("TouchSensor");
TouchSensor1126.description = "joint r_carpal_distal_phalanx_3 segment SEGMENT_FOR_r_carpal_distal_phalanx_3";
HAnimSegment1125.children = new MFNode();

HAnimSegment1125.children[0] = TouchSensor1126;

Transform Transform1127 = createNode("Transform");
Transform1127.translation = new SFVec3f(new float[-0.1805,-0.1056,0.5668]);
Shape Shape1128 = createNode("Shape");
Shape1128.USE = "JointShape";
Transform1127.child = new undefined();

Transform1127.child[0] = Shape1128;

HAnimSegment1125.children[1] = Transform1127;

HAnimSite HAnimSite1129 = createNode("HAnimSite");
HAnimSite1129.name = "SEGMENT_FOR_r_carpal_distal_phalanx_3_tip";
HAnimSite1129.DEF = "hanim_SEGMENT_FOR_r_carpal_distal_phalanx_3_tip";
Transform Transform1130 = createNode("Transform");
Transform1130.translation = new SFVec3f(new float[-0.1805,-0.1056,0.5668]);
Shape Shape1131 = createNode("Shape");
Shape1131.USE = "SiteShape";
Transform1130.child = new undefined();

Transform1130.child[0] = Shape1131;

HAnimSite1129.children = new MFNode();

HAnimSite1129.children[0] = Transform1130;

HAnimSegment1125.children[2] = HAnimSite1129;

HAnimJoint1124.children = new MFNode();

HAnimJoint1124.children[0] = HAnimSegment1125;

HAnimJoint1116.children[1] = HAnimJoint1124;

HAnimJoint1108.children[1] = HAnimJoint1116;

HAnimJoint1100.children[1] = HAnimJoint1108;

HAnimJoint1092.children[1] = HAnimJoint1100;

HAnimJoint1012.children[3] = HAnimJoint1092;

HAnimJoint HAnimJoint1132 = createNode("HAnimJoint");
HAnimJoint1132.name = "r_hamate";
HAnimJoint1132.DEF = "hanim_r_hamate";
HAnimJoint1132.center = new SFVec3f(new float[-0.1809,-0.1276,0.6973]);
HAnimJoint1132.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1132.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1133 = createNode("HAnimSegment");
HAnimSegment1133.name = "SEGMENT_FOR_r_hamate";
HAnimSegment1133.DEF = "hanim_SEGMENT_FOR_r_hamate";
TouchSensor TouchSensor1134 = createNode("TouchSensor");
TouchSensor1134.description = "joint r_hamate segment SEGMENT_FOR_r_hamate";
HAnimSegment1133.children = new MFNode();

HAnimSegment1133.children[0] = TouchSensor1134;

Transform Transform1135 = createNode("Transform");
Transform1135.translation = new SFVec3f(new float[-0.1809,-0.1276,0.6973]);
Shape Shape1136 = createNode("Shape");
Shape1136.USE = "JointShape";
Transform1135.child = new undefined();

Transform1135.child[0] = Shape1136;

HAnimSegment1133.children[1] = Transform1135;

HAnimSite HAnimSite1137 = createNode("HAnimSite");
HAnimSite1137.name = "SEGMENT_FOR_r_hamate_tip";
HAnimSite1137.DEF = "hanim_SEGMENT_FOR_r_hamate_tip";
Transform Transform1138 = createNode("Transform");
Transform1138.translation = new SFVec3f(new float[-0.1809,-0.1276,0.6973]);
Shape Shape1139 = createNode("Shape");
Shape1139.USE = "SiteShape";
Transform1138.child = new undefined();

Transform1138.child[0] = Shape1139;

HAnimSite1137.children = new MFNode();

HAnimSite1137.children[0] = Transform1138;

HAnimSegment1133.children[2] = HAnimSite1137;

HAnimJoint1132.children = new MFNode();

HAnimJoint1132.children[0] = HAnimSegment1133;

HAnimJoint HAnimJoint1140 = createNode("HAnimJoint");
HAnimJoint1140.name = "r_metacarpal_4";
HAnimJoint1140.DEF = "hanim_r_metacarpal_4";
HAnimJoint1140.center = new SFVec3f(new float[-0.1809,-0.1218,0.6777]);
HAnimJoint1140.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1140.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1141 = createNode("HAnimSegment");
HAnimSegment1141.name = "SEGMENT_FOR_r_metacarpal_4";
HAnimSegment1141.DEF = "hanim_SEGMENT_FOR_r_metacarpal_4";
TouchSensor TouchSensor1142 = createNode("TouchSensor");
TouchSensor1142.description = "joint r_metacarpal_4 segment SEGMENT_FOR_r_metacarpal_4";
HAnimSegment1141.children = new MFNode();

HAnimSegment1141.children[0] = TouchSensor1142;

Transform Transform1143 = createNode("Transform");
Transform1143.translation = new SFVec3f(new float[-0.1809,-0.1218,0.6777]);
Shape Shape1144 = createNode("Shape");
Shape1144.USE = "JointShape";
Transform1143.child = new undefined();

Transform1143.child[0] = Shape1144;

HAnimSegment1141.children[1] = Transform1143;

HAnimSite HAnimSite1145 = createNode("HAnimSite");
HAnimSite1145.name = "SEGMENT_FOR_r_metacarpal_4_tip";
HAnimSite1145.DEF = "hanim_SEGMENT_FOR_r_metacarpal_4_tip";
Transform Transform1146 = createNode("Transform");
Transform1146.translation = new SFVec3f(new float[-0.1809,-0.1218,0.6777]);
Shape Shape1147 = createNode("Shape");
Shape1147.USE = "SiteShape";
Transform1146.child = new undefined();

Transform1146.child[0] = Shape1147;

HAnimSite1145.children = new MFNode();

HAnimSite1145.children[0] = Transform1146;

HAnimSegment1141.children[2] = HAnimSite1145;

HAnimJoint1140.children = new MFNode();

HAnimJoint1140.children[0] = HAnimSegment1141;

HAnimJoint HAnimJoint1148 = createNode("HAnimJoint");
HAnimJoint1148.name = "r_carpal_proximal_phalanx_4";
HAnimJoint1148.DEF = "hanim_r_carpal_proximal_phalanx_4";
HAnimJoint1148.center = new SFVec3f(new float[-0.1835,-0.1233,0.6255]);
HAnimJoint1148.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1148.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1149 = createNode("HAnimSegment");
HAnimSegment1149.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_4";
HAnimSegment1149.DEF = "hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_4";
TouchSensor TouchSensor1150 = createNode("TouchSensor");
TouchSensor1150.description = "joint r_carpal_proximal_phalanx_4 segment SEGMENT_FOR_r_carpal_proximal_phalanx_4";
HAnimSegment1149.children = new MFNode();

HAnimSegment1149.children[0] = TouchSensor1150;

Transform Transform1151 = createNode("Transform");
Transform1151.translation = new SFVec3f(new float[-0.1835,-0.1233,0.6255]);
Shape Shape1152 = createNode("Shape");
Shape1152.USE = "JointShape";
Transform1151.child = new undefined();

Transform1151.child[0] = Shape1152;

HAnimSegment1149.children[1] = Transform1151;

HAnimSite HAnimSite1153 = createNode("HAnimSite");
HAnimSite1153.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_4_tip";
HAnimSite1153.DEF = "hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_4_tip";
Transform Transform1154 = createNode("Transform");
Transform1154.translation = new SFVec3f(new float[-0.1835,-0.1233,0.6255]);
Shape Shape1155 = createNode("Shape");
Shape1155.USE = "SiteShape";
Transform1154.child = new undefined();

Transform1154.child[0] = Shape1155;

HAnimSite1153.children = new MFNode();

HAnimSite1153.children[0] = Transform1154;

HAnimSegment1149.children[2] = HAnimSite1153;

HAnimJoint1148.children = new MFNode();

HAnimJoint1148.children[0] = HAnimSegment1149;

HAnimJoint HAnimJoint1156 = createNode("HAnimJoint");
HAnimJoint1156.name = "r_carpal_middle_phalanx_4";
HAnimJoint1156.DEF = "hanim_r_carpal_middle_phalanx_4";
HAnimJoint1156.center = new SFVec3f(new float[-0.1815,-0.1225,0.598]);
HAnimJoint1156.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1156.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1157 = createNode("HAnimSegment");
HAnimSegment1157.name = "SEGMENT_FOR_r_carpal_middle_phalanx_4";
HAnimSegment1157.DEF = "hanim_SEGMENT_FOR_r_carpal_middle_phalanx_4";
TouchSensor TouchSensor1158 = createNode("TouchSensor");
TouchSensor1158.description = "joint r_carpal_middle_phalanx_4 segment SEGMENT_FOR_r_carpal_middle_phalanx_4";
HAnimSegment1157.children = new MFNode();

HAnimSegment1157.children[0] = TouchSensor1158;

Transform Transform1159 = createNode("Transform");
Transform1159.translation = new SFVec3f(new float[-0.1815,-0.1225,0.598]);
Shape Shape1160 = createNode("Shape");
Shape1160.USE = "JointShape";
Transform1159.child = new undefined();

Transform1159.child[0] = Shape1160;

HAnimSegment1157.children[1] = Transform1159;

HAnimSite HAnimSite1161 = createNode("HAnimSite");
HAnimSite1161.name = "SEGMENT_FOR_r_carpal_middle_phalanx_4_tip";
HAnimSite1161.DEF = "hanim_SEGMENT_FOR_r_carpal_middle_phalanx_4_tip";
Transform Transform1162 = createNode("Transform");
Transform1162.translation = new SFVec3f(new float[-0.1815,-0.1225,0.598]);
Shape Shape1163 = createNode("Shape");
Shape1163.USE = "SiteShape";
Transform1162.child = new undefined();

Transform1162.child[0] = Shape1163;

HAnimSite1161.children = new MFNode();

HAnimSite1161.children[0] = Transform1162;

HAnimSegment1157.children[2] = HAnimSite1161;

HAnimJoint1156.children = new MFNode();

HAnimJoint1156.children[0] = HAnimSegment1157;

HAnimJoint HAnimJoint1164 = createNode("HAnimJoint");
HAnimJoint1164.name = "r_carpal_distal_phalanx_4";
HAnimJoint1164.DEF = "hanim_r_carpal_distal_phalanx_4";
HAnimJoint1164.center = new SFVec3f(new float[-0.1805,-0.1217,0.5722]);
HAnimJoint1164.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1164.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1165 = createNode("HAnimSegment");
HAnimSegment1165.name = "SEGMENT_FOR_r_carpal_distal_phalanx_4";
HAnimSegment1165.DEF = "hanim_SEGMENT_FOR_r_carpal_distal_phalanx_4";
TouchSensor TouchSensor1166 = createNode("TouchSensor");
TouchSensor1166.description = "joint r_carpal_distal_phalanx_4 segment SEGMENT_FOR_r_carpal_distal_phalanx_4";
HAnimSegment1165.children = new MFNode();

HAnimSegment1165.children[0] = TouchSensor1166;

Transform Transform1167 = createNode("Transform");
Transform1167.translation = new SFVec3f(new float[-0.1805,-0.1217,0.5722]);
Shape Shape1168 = createNode("Shape");
Shape1168.USE = "JointShape";
Transform1167.child = new undefined();

Transform1167.child[0] = Shape1168;

HAnimSegment1165.children[1] = Transform1167;

HAnimSite HAnimSite1169 = createNode("HAnimSite");
HAnimSite1169.name = "SEGMENT_FOR_r_carpal_distal_phalanx_4_tip";
HAnimSite1169.DEF = "hanim_SEGMENT_FOR_r_carpal_distal_phalanx_4_tip";
Transform Transform1170 = createNode("Transform");
Transform1170.translation = new SFVec3f(new float[-0.1805,-0.1217,0.5722]);
Shape Shape1171 = createNode("Shape");
Shape1171.USE = "SiteShape";
Transform1170.child = new undefined();

Transform1170.child[0] = Shape1171;

HAnimSite1169.children = new MFNode();

HAnimSite1169.children[0] = Transform1170;

HAnimSegment1165.children[2] = HAnimSite1169;

HAnimJoint1164.children = new MFNode();

HAnimJoint1164.children[0] = HAnimSegment1165;

HAnimJoint1156.children[1] = HAnimJoint1164;

HAnimJoint1148.children[1] = HAnimJoint1156;

HAnimJoint1140.children[1] = HAnimJoint1148;

HAnimJoint1132.children[1] = HAnimJoint1140;

HAnimJoint HAnimJoint1172 = createNode("HAnimJoint");
HAnimJoint1172.name = "r_metacarpal_5";
HAnimJoint1172.DEF = "hanim_r_metacarpal_5";
HAnimJoint1172.center = new SFVec3f(new float[-0.1814,-0.1347,0.6797]);
HAnimJoint1172.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1172.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1173 = createNode("HAnimSegment");
HAnimSegment1173.name = "SEGMENT_FOR_r_metacarpal_5";
HAnimSegment1173.DEF = "hanim_SEGMENT_FOR_r_metacarpal_5";
TouchSensor TouchSensor1174 = createNode("TouchSensor");
TouchSensor1174.description = "joint r_metacarpal_5 segment SEGMENT_FOR_r_metacarpal_5";
HAnimSegment1173.children = new MFNode();

HAnimSegment1173.children[0] = TouchSensor1174;

Transform Transform1175 = createNode("Transform");
Transform1175.translation = new SFVec3f(new float[-0.1814,-0.1347,0.6797]);
Shape Shape1176 = createNode("Shape");
Shape1176.USE = "JointShape";
Transform1175.child = new undefined();

Transform1175.child[0] = Shape1176;

HAnimSegment1173.children[1] = Transform1175;

HAnimSite HAnimSite1177 = createNode("HAnimSite");
HAnimSite1177.name = "SEGMENT_FOR_r_metacarpal_5_tip";
HAnimSite1177.DEF = "hanim_SEGMENT_FOR_r_metacarpal_5_tip";
Transform Transform1178 = createNode("Transform");
Transform1178.translation = new SFVec3f(new float[-0.1814,-0.1347,0.6797]);
Shape Shape1179 = createNode("Shape");
Shape1179.USE = "SiteShape";
Transform1178.child = new undefined();

Transform1178.child[0] = Shape1179;

HAnimSite1177.children = new MFNode();

HAnimSite1177.children[0] = Transform1178;

HAnimSegment1173.children[2] = HAnimSite1177;

HAnimJoint1172.children = new MFNode();

HAnimJoint1172.children[0] = HAnimSegment1173;

HAnimJoint HAnimJoint1180 = createNode("HAnimJoint");
HAnimJoint1180.name = "r_carpal_proximal_phalanx_5";
HAnimJoint1180.DEF = "hanim_r_carpal_proximal_phalanx_5";
HAnimJoint1180.center = new SFVec3f(new float[-0.1832,-0.1389,0.6295]);
HAnimJoint1180.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1180.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1181 = createNode("HAnimSegment");
HAnimSegment1181.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_5";
HAnimSegment1181.DEF = "hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_5";
TouchSensor TouchSensor1182 = createNode("TouchSensor");
TouchSensor1182.description = "joint r_carpal_proximal_phalanx_5 segment SEGMENT_FOR_r_carpal_proximal_phalanx_5";
HAnimSegment1181.children = new MFNode();

HAnimSegment1181.children[0] = TouchSensor1182;

Transform Transform1183 = createNode("Transform");
Transform1183.translation = new SFVec3f(new float[-0.1832,-0.1389,0.6295]);
Shape Shape1184 = createNode("Shape");
Shape1184.USE = "JointShape";
Transform1183.child = new undefined();

Transform1183.child[0] = Shape1184;

HAnimSegment1181.children[1] = Transform1183;

HAnimSite HAnimSite1185 = createNode("HAnimSite");
HAnimSite1185.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_5_tip";
HAnimSite1185.DEF = "hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_5_tip";
Transform Transform1186 = createNode("Transform");
Transform1186.translation = new SFVec3f(new float[-0.1832,-0.1389,0.6295]);
Shape Shape1187 = createNode("Shape");
Shape1187.USE = "SiteShape";
Transform1186.child = new undefined();

Transform1186.child[0] = Shape1187;

HAnimSite1185.children = new MFNode();

HAnimSite1185.children[0] = Transform1186;

HAnimSegment1181.children[2] = HAnimSite1185;

HAnimJoint1180.children = new MFNode();

HAnimJoint1180.children[0] = HAnimSegment1181;

HAnimJoint HAnimJoint1188 = createNode("HAnimJoint");
HAnimJoint1188.name = "r_carpal_middle_phalanx_5";
HAnimJoint1188.DEF = "hanim_r_carpal_middle_phalanx_5";
HAnimJoint1188.center = new SFVec3f(new float[-0.1815,-0.139,0.6124]);
HAnimJoint1188.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1188.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1189 = createNode("HAnimSegment");
HAnimSegment1189.name = "SEGMENT_FOR_r_carpal_middle_phalanx_5";
HAnimSegment1189.DEF = "hanim_SEGMENT_FOR_r_carpal_middle_phalanx_5";
TouchSensor TouchSensor1190 = createNode("TouchSensor");
TouchSensor1190.description = "joint r_carpal_middle_phalanx_5 segment SEGMENT_FOR_r_carpal_middle_phalanx_5";
HAnimSegment1189.children = new MFNode();

HAnimSegment1189.children[0] = TouchSensor1190;

Transform Transform1191 = createNode("Transform");
Transform1191.translation = new SFVec3f(new float[-0.1815,-0.139,0.6124]);
Shape Shape1192 = createNode("Shape");
Shape1192.USE = "JointShape";
Transform1191.child = new undefined();

Transform1191.child[0] = Shape1192;

HAnimSegment1189.children[1] = Transform1191;

HAnimSite HAnimSite1193 = createNode("HAnimSite");
HAnimSite1193.name = "SEGMENT_FOR_r_carpal_middle_phalanx_5_tip";
HAnimSite1193.DEF = "hanim_SEGMENT_FOR_r_carpal_middle_phalanx_5_tip";
Transform Transform1194 = createNode("Transform");
Transform1194.translation = new SFVec3f(new float[-0.1815,-0.139,0.6124]);
Shape Shape1195 = createNode("Shape");
Shape1195.USE = "SiteShape";
Transform1194.child = new undefined();

Transform1194.child[0] = Shape1195;

HAnimSite1193.children = new MFNode();

HAnimSite1193.children[0] = Transform1194;

HAnimSegment1189.children[2] = HAnimSite1193;

HAnimJoint1188.children = new MFNode();

HAnimJoint1188.children[0] = HAnimSegment1189;

HAnimJoint HAnimJoint1196 = createNode("HAnimJoint");
HAnimJoint1196.name = "r_carpal_distal_phalanx_5";
HAnimJoint1196.DEF = "hanim_r_carpal_distal_phalanx_5";
HAnimJoint1196.center = new SFVec3f(new float[-0.1806,-0.1388,0.5938]);
HAnimJoint1196.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1196.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1197 = createNode("HAnimSegment");
HAnimSegment1197.name = "SEGMENT_FOR_r_carpal_distal_phalanx_5";
HAnimSegment1197.DEF = "hanim_SEGMENT_FOR_r_carpal_distal_phalanx_5";
TouchSensor TouchSensor1198 = createNode("TouchSensor");
TouchSensor1198.description = "joint r_carpal_distal_phalanx_5 segment SEGMENT_FOR_r_carpal_distal_phalanx_5";
HAnimSegment1197.children = new MFNode();

HAnimSegment1197.children[0] = TouchSensor1198;

Transform Transform1199 = createNode("Transform");
Transform1199.translation = new SFVec3f(new float[-0.1806,-0.1388,0.5938]);
Shape Shape1200 = createNode("Shape");
Shape1200.USE = "JointShape";
Transform1199.child = new undefined();

Transform1199.child[0] = Shape1200;

HAnimSegment1197.children[1] = Transform1199;

HAnimSite HAnimSite1201 = createNode("HAnimSite");
HAnimSite1201.name = "SEGMENT_FOR_r_carpal_distal_phalanx_5_tip";
HAnimSite1201.DEF = "hanim_SEGMENT_FOR_r_carpal_distal_phalanx_5_tip";
Transform Transform1202 = createNode("Transform");
Transform1202.translation = new SFVec3f(new float[-0.1806,-0.1388,0.5938]);
Shape Shape1203 = createNode("Shape");
Shape1203.USE = "SiteShape";
Transform1202.child = new undefined();

Transform1202.child[0] = Shape1203;

HAnimSite1201.children = new MFNode();

HAnimSite1201.children[0] = Transform1202;

HAnimSegment1197.children[2] = HAnimSite1201;

HAnimJoint1196.children = new MFNode();

HAnimJoint1196.children[0] = HAnimSegment1197;

HAnimJoint1188.children[1] = HAnimJoint1196;

HAnimJoint1180.children[1] = HAnimJoint1188;

HAnimJoint1172.children[1] = HAnimJoint1180;

HAnimJoint1132.children[2] = HAnimJoint1172;

HAnimJoint1012.children[4] = HAnimJoint1132;

HAnimJoint1004.children[1] = HAnimJoint1012;

HAnimJoint996.children[1] = HAnimJoint1004;

HAnimJoint988.children[1] = HAnimJoint996;

HAnimJoint980.children[1] = HAnimJoint988;

HAnimJoint628.children[3] = HAnimJoint980;

HAnimJoint620.children[1] = HAnimJoint628;

HAnimJoint612.children[1] = HAnimJoint620;

HAnimJoint604.children[1] = HAnimJoint612;

HAnimJoint596.children[1] = HAnimJoint604;

HAnimJoint588.children[1] = HAnimJoint596;

HAnimJoint580.children[1] = HAnimJoint588;

HAnimJoint572.children[1] = HAnimJoint580;

HAnimJoint564.children[1] = HAnimJoint572;

HAnimJoint556.children[1] = HAnimJoint564;

HAnimJoint548.children[1] = HAnimJoint556;

HAnimJoint540.children[1] = HAnimJoint548;

HAnimJoint532.children[1] = HAnimJoint540;

HAnimJoint524.children[1] = HAnimJoint532;

HAnimJoint516.children[1] = HAnimJoint524;

HAnimJoint508.children[1] = HAnimJoint516;

HAnimJoint500.children[1] = HAnimJoint508;

HAnimJoint36.children[2] = HAnimJoint500;

HAnimJoint28.children[1] = HAnimJoint36;

HAnimHumanoid27.joints = new MFNode();

HAnimHumanoid27.joints[0] = HAnimJoint28;

HAnimJoint HAnimJoint1204 = createNode("HAnimJoint");
HAnimJoint1204.USE = "hanim_sacrum";
HAnimHumanoid27.joints[1] = HAnimJoint1204;

HAnimJoint HAnimJoint1205 = createNode("HAnimJoint");
HAnimJoint1205.USE = "hanim_pelvis";
HAnimHumanoid27.joints[2] = HAnimJoint1205;

HAnimJoint HAnimJoint1206 = createNode("HAnimJoint");
HAnimJoint1206.USE = "hanim_l_thigh";
HAnimHumanoid27.joints[3] = HAnimJoint1206;

HAnimJoint HAnimJoint1207 = createNode("HAnimJoint");
HAnimJoint1207.USE = "hanim_l_calf";
HAnimHumanoid27.joints[4] = HAnimJoint1207;

HAnimJoint HAnimJoint1208 = createNode("HAnimJoint");
HAnimJoint1208.USE = "hanim_l_talus";
HAnimHumanoid27.joints[5] = HAnimJoint1208;

HAnimJoint HAnimJoint1209 = createNode("HAnimJoint");
HAnimJoint1209.USE = "hanim_l_navicular";
HAnimHumanoid27.joints[6] = HAnimJoint1209;

HAnimJoint HAnimJoint1210 = createNode("HAnimJoint");
HAnimJoint1210.USE = "hanim_l_cuneiform_1";
HAnimHumanoid27.joints[7] = HAnimJoint1210;

HAnimJoint HAnimJoint1211 = createNode("HAnimJoint");
HAnimJoint1211.USE = "hanim_l_metatarsal_1";
HAnimHumanoid27.joints[8] = HAnimJoint1211;

HAnimJoint HAnimJoint1212 = createNode("HAnimJoint");
HAnimJoint1212.USE = "hanim_l_tarsal_proximal_phalanx_1";
HAnimHumanoid27.joints[9] = HAnimJoint1212;

HAnimJoint HAnimJoint1213 = createNode("HAnimJoint");
HAnimJoint1213.USE = "hanim_l_tarsal_distal_phalanx_1";
HAnimHumanoid27.joints[10] = HAnimJoint1213;

HAnimJoint HAnimJoint1214 = createNode("HAnimJoint");
HAnimJoint1214.USE = "hanim_l_cuneiform_2";
HAnimHumanoid27.joints[11] = HAnimJoint1214;

HAnimJoint HAnimJoint1215 = createNode("HAnimJoint");
HAnimJoint1215.USE = "hanim_l_metatarsal_2";
HAnimHumanoid27.joints[12] = HAnimJoint1215;

HAnimJoint HAnimJoint1216 = createNode("HAnimJoint");
HAnimJoint1216.USE = "hanim_l_tarsal_proximal_phalanx_2";
HAnimHumanoid27.joints[13] = HAnimJoint1216;

HAnimJoint HAnimJoint1217 = createNode("HAnimJoint");
HAnimJoint1217.USE = "hanim_l_tarsal_middle_phalanx_2";
HAnimHumanoid27.joints[14] = HAnimJoint1217;

HAnimJoint HAnimJoint1218 = createNode("HAnimJoint");
HAnimJoint1218.USE = "hanim_l_tarsal_distal_phalanx_2";
HAnimHumanoid27.joints[15] = HAnimJoint1218;

HAnimJoint HAnimJoint1219 = createNode("HAnimJoint");
HAnimJoint1219.USE = "hanim_l_cuneiform_3";
HAnimHumanoid27.joints[16] = HAnimJoint1219;

HAnimJoint HAnimJoint1220 = createNode("HAnimJoint");
HAnimJoint1220.USE = "hanim_l_metatarsal_3";
HAnimHumanoid27.joints[17] = HAnimJoint1220;

HAnimJoint HAnimJoint1221 = createNode("HAnimJoint");
HAnimJoint1221.USE = "hanim_l_tarsal_proximal_phalanx_3";
HAnimHumanoid27.joints[18] = HAnimJoint1221;

HAnimJoint HAnimJoint1222 = createNode("HAnimJoint");
HAnimJoint1222.USE = "hanim_l_tarsal_middle_phalanx_3";
HAnimHumanoid27.joints[19] = HAnimJoint1222;

HAnimJoint HAnimJoint1223 = createNode("HAnimJoint");
HAnimJoint1223.USE = "hanim_l_tarsal_distal_phalanx_3";
HAnimHumanoid27.joints[20] = HAnimJoint1223;

HAnimJoint HAnimJoint1224 = createNode("HAnimJoint");
HAnimJoint1224.USE = "hanim_l_calcaneus";
HAnimHumanoid27.joints[21] = HAnimJoint1224;

HAnimJoint HAnimJoint1225 = createNode("HAnimJoint");
HAnimJoint1225.USE = "hanim_l_cuboid";
HAnimHumanoid27.joints[22] = HAnimJoint1225;

HAnimJoint HAnimJoint1226 = createNode("HAnimJoint");
HAnimJoint1226.USE = "hanim_l_metatarsal_4";
HAnimHumanoid27.joints[23] = HAnimJoint1226;

HAnimJoint HAnimJoint1227 = createNode("HAnimJoint");
HAnimJoint1227.USE = "hanim_l_tarsal_proximal_phalanx_4";
HAnimHumanoid27.joints[24] = HAnimJoint1227;

HAnimJoint HAnimJoint1228 = createNode("HAnimJoint");
HAnimJoint1228.USE = "hanim_l_tarsal_middle_phalanx_4";
HAnimHumanoid27.joints[25] = HAnimJoint1228;

HAnimJoint HAnimJoint1229 = createNode("HAnimJoint");
HAnimJoint1229.USE = "hanim_l_tarsal_distal_phalanx_4";
HAnimHumanoid27.joints[26] = HAnimJoint1229;

HAnimJoint HAnimJoint1230 = createNode("HAnimJoint");
HAnimJoint1230.USE = "hanim_l_metatarsal_5";
HAnimHumanoid27.joints[27] = HAnimJoint1230;

HAnimJoint HAnimJoint1231 = createNode("HAnimJoint");
HAnimJoint1231.USE = "hanim_l_tarsal_proximal_phalanx_5";
HAnimHumanoid27.joints[28] = HAnimJoint1231;

HAnimJoint HAnimJoint1232 = createNode("HAnimJoint");
HAnimJoint1232.USE = "hanim_l_tarsal_middle_phalanx_5";
HAnimHumanoid27.joints[29] = HAnimJoint1232;

HAnimJoint HAnimJoint1233 = createNode("HAnimJoint");
HAnimJoint1233.USE = "hanim_l_tarsal_distal_phalanx_5";
HAnimHumanoid27.joints[30] = HAnimJoint1233;

HAnimJoint HAnimJoint1234 = createNode("HAnimJoint");
HAnimJoint1234.USE = "hanim_r_thigh";
HAnimHumanoid27.joints[31] = HAnimJoint1234;

HAnimJoint HAnimJoint1235 = createNode("HAnimJoint");
HAnimJoint1235.USE = "hanim_r_calf";
HAnimHumanoid27.joints[32] = HAnimJoint1235;

HAnimJoint HAnimJoint1236 = createNode("HAnimJoint");
HAnimJoint1236.USE = "hanim_r_talus";
HAnimHumanoid27.joints[33] = HAnimJoint1236;

HAnimJoint HAnimJoint1237 = createNode("HAnimJoint");
HAnimJoint1237.USE = "hanim_r_navicular";
HAnimHumanoid27.joints[34] = HAnimJoint1237;

HAnimJoint HAnimJoint1238 = createNode("HAnimJoint");
HAnimJoint1238.USE = "hanim_r_cuneiform_1";
HAnimHumanoid27.joints[35] = HAnimJoint1238;

HAnimJoint HAnimJoint1239 = createNode("HAnimJoint");
HAnimJoint1239.USE = "hanim_r_metatarsal_1";
HAnimHumanoid27.joints[36] = HAnimJoint1239;

HAnimJoint HAnimJoint1240 = createNode("HAnimJoint");
HAnimJoint1240.USE = "hanim_r_tarsal_proximal_phalanx_1";
HAnimHumanoid27.joints[37] = HAnimJoint1240;

HAnimJoint HAnimJoint1241 = createNode("HAnimJoint");
HAnimJoint1241.USE = "hanim_r_tarsal_distal_phalanx_1";
HAnimHumanoid27.joints[38] = HAnimJoint1241;

HAnimJoint HAnimJoint1242 = createNode("HAnimJoint");
HAnimJoint1242.USE = "hanim_r_cuneiform_2";
HAnimHumanoid27.joints[39] = HAnimJoint1242;

HAnimJoint HAnimJoint1243 = createNode("HAnimJoint");
HAnimJoint1243.USE = "hanim_r_metatarsal_2";
HAnimHumanoid27.joints[40] = HAnimJoint1243;

HAnimJoint HAnimJoint1244 = createNode("HAnimJoint");
HAnimJoint1244.USE = "hanim_r_tarsal_proximal_phalanx_2";
HAnimHumanoid27.joints[41] = HAnimJoint1244;

HAnimJoint HAnimJoint1245 = createNode("HAnimJoint");
HAnimJoint1245.USE = "hanim_r_tarsal_middle_phalanx_2";
HAnimHumanoid27.joints[42] = HAnimJoint1245;

HAnimJoint HAnimJoint1246 = createNode("HAnimJoint");
HAnimJoint1246.USE = "hanim_r_tarsal_distal_phalanx_2";
HAnimHumanoid27.joints[43] = HAnimJoint1246;

HAnimJoint HAnimJoint1247 = createNode("HAnimJoint");
HAnimJoint1247.USE = "hanim_r_cuneiform_3";
HAnimHumanoid27.joints[44] = HAnimJoint1247;

HAnimJoint HAnimJoint1248 = createNode("HAnimJoint");
HAnimJoint1248.USE = "hanim_r_metatarsal_3";
HAnimHumanoid27.joints[45] = HAnimJoint1248;

HAnimJoint HAnimJoint1249 = createNode("HAnimJoint");
HAnimJoint1249.USE = "hanim_r_tarsal_proximal_phalanx_3";
HAnimHumanoid27.joints[46] = HAnimJoint1249;

HAnimJoint HAnimJoint1250 = createNode("HAnimJoint");
HAnimJoint1250.USE = "hanim_r_tarsal_middle_phalanx_3";
HAnimHumanoid27.joints[47] = HAnimJoint1250;

HAnimJoint HAnimJoint1251 = createNode("HAnimJoint");
HAnimJoint1251.USE = "hanim_r_tarsal_distal_phalanx_3";
HAnimHumanoid27.joints[48] = HAnimJoint1251;

HAnimJoint HAnimJoint1252 = createNode("HAnimJoint");
HAnimJoint1252.USE = "hanim_r_calcaneus";
HAnimHumanoid27.joints[49] = HAnimJoint1252;

HAnimJoint HAnimJoint1253 = createNode("HAnimJoint");
HAnimJoint1253.USE = "hanim_r_cuboid";
HAnimHumanoid27.joints[50] = HAnimJoint1253;

HAnimJoint HAnimJoint1254 = createNode("HAnimJoint");
HAnimJoint1254.USE = "hanim_r_metatarsal_4";
HAnimHumanoid27.joints[51] = HAnimJoint1254;

HAnimJoint HAnimJoint1255 = createNode("HAnimJoint");
HAnimJoint1255.USE = "hanim_r_tarsal_proximal_phalanx_4";
HAnimHumanoid27.joints[52] = HAnimJoint1255;

HAnimJoint HAnimJoint1256 = createNode("HAnimJoint");
HAnimJoint1256.USE = "hanim_r_tarsal_middle_phalanx_4";
HAnimHumanoid27.joints[53] = HAnimJoint1256;

HAnimJoint HAnimJoint1257 = createNode("HAnimJoint");
HAnimJoint1257.USE = "hanim_r_tarsal_distal_phalanx_4";
HAnimHumanoid27.joints[54] = HAnimJoint1257;

HAnimJoint HAnimJoint1258 = createNode("HAnimJoint");
HAnimJoint1258.USE = "hanim_r_metatarsal_5";
HAnimHumanoid27.joints[55] = HAnimJoint1258;

HAnimJoint HAnimJoint1259 = createNode("HAnimJoint");
HAnimJoint1259.USE = "hanim_r_tarsal_proximal_phalanx_5";
HAnimHumanoid27.joints[56] = HAnimJoint1259;

HAnimJoint HAnimJoint1260 = createNode("HAnimJoint");
HAnimJoint1260.USE = "hanim_r_tarsal_middle_phalanx_5";
HAnimHumanoid27.joints[57] = HAnimJoint1260;

HAnimJoint HAnimJoint1261 = createNode("HAnimJoint");
HAnimJoint1261.USE = "hanim_r_tarsal_distal_phalanx_5";
HAnimHumanoid27.joints[58] = HAnimJoint1261;

HAnimJoint HAnimJoint1262 = createNode("HAnimJoint");
HAnimJoint1262.USE = "hanim_l5";
HAnimHumanoid27.joints[59] = HAnimJoint1262;

HAnimJoint HAnimJoint1263 = createNode("HAnimJoint");
HAnimJoint1263.USE = "hanim_l4";
HAnimHumanoid27.joints[60] = HAnimJoint1263;

HAnimJoint HAnimJoint1264 = createNode("HAnimJoint");
HAnimJoint1264.USE = "hanim_l3";
HAnimHumanoid27.joints[61] = HAnimJoint1264;

HAnimJoint HAnimJoint1265 = createNode("HAnimJoint");
HAnimJoint1265.USE = "hanim_l2";
HAnimHumanoid27.joints[62] = HAnimJoint1265;

HAnimJoint HAnimJoint1266 = createNode("HAnimJoint");
HAnimJoint1266.USE = "hanim_l1";
HAnimHumanoid27.joints[63] = HAnimJoint1266;

HAnimJoint HAnimJoint1267 = createNode("HAnimJoint");
HAnimJoint1267.USE = "hanim_t12";
HAnimHumanoid27.joints[64] = HAnimJoint1267;

HAnimJoint HAnimJoint1268 = createNode("HAnimJoint");
HAnimJoint1268.USE = "hanim_t11";
HAnimHumanoid27.joints[65] = HAnimJoint1268;

HAnimJoint HAnimJoint1269 = createNode("HAnimJoint");
HAnimJoint1269.USE = "hanim_t10";
HAnimHumanoid27.joints[66] = HAnimJoint1269;

HAnimJoint HAnimJoint1270 = createNode("HAnimJoint");
HAnimJoint1270.USE = "hanim_t9";
HAnimHumanoid27.joints[67] = HAnimJoint1270;

HAnimJoint HAnimJoint1271 = createNode("HAnimJoint");
HAnimJoint1271.USE = "hanim_t8";
HAnimHumanoid27.joints[68] = HAnimJoint1271;

HAnimJoint HAnimJoint1272 = createNode("HAnimJoint");
HAnimJoint1272.USE = "hanim_t7";
HAnimHumanoid27.joints[69] = HAnimJoint1272;

HAnimJoint HAnimJoint1273 = createNode("HAnimJoint");
HAnimJoint1273.USE = "hanim_t6";
HAnimHumanoid27.joints[70] = HAnimJoint1273;

HAnimJoint HAnimJoint1274 = createNode("HAnimJoint");
HAnimJoint1274.USE = "hanim_t5";
HAnimHumanoid27.joints[71] = HAnimJoint1274;

HAnimJoint HAnimJoint1275 = createNode("HAnimJoint");
HAnimJoint1275.USE = "hanim_t4";
HAnimHumanoid27.joints[72] = HAnimJoint1275;

HAnimJoint HAnimJoint1276 = createNode("HAnimJoint");
HAnimJoint1276.USE = "hanim_t3";
HAnimHumanoid27.joints[73] = HAnimJoint1276;

HAnimJoint HAnimJoint1277 = createNode("HAnimJoint");
HAnimJoint1277.USE = "hanim_t2";
HAnimHumanoid27.joints[74] = HAnimJoint1277;

HAnimJoint HAnimJoint1278 = createNode("HAnimJoint");
HAnimJoint1278.USE = "hanim_t1";
HAnimHumanoid27.joints[75] = HAnimJoint1278;

HAnimJoint HAnimJoint1279 = createNode("HAnimJoint");
HAnimJoint1279.USE = "hanim_c7";
HAnimHumanoid27.joints[76] = HAnimJoint1279;

HAnimJoint HAnimJoint1280 = createNode("HAnimJoint");
HAnimJoint1280.USE = "hanim_c6";
HAnimHumanoid27.joints[77] = HAnimJoint1280;

HAnimJoint HAnimJoint1281 = createNode("HAnimJoint");
HAnimJoint1281.USE = "hanim_c5";
HAnimHumanoid27.joints[78] = HAnimJoint1281;

HAnimJoint HAnimJoint1282 = createNode("HAnimJoint");
HAnimJoint1282.USE = "hanim_c4";
HAnimHumanoid27.joints[79] = HAnimJoint1282;

HAnimJoint HAnimJoint1283 = createNode("HAnimJoint");
HAnimJoint1283.USE = "hanim_c3";
HAnimHumanoid27.joints[80] = HAnimJoint1283;

HAnimJoint HAnimJoint1284 = createNode("HAnimJoint");
HAnimJoint1284.USE = "hanim_c2";
HAnimHumanoid27.joints[81] = HAnimJoint1284;

HAnimJoint HAnimJoint1285 = createNode("HAnimJoint");
HAnimJoint1285.USE = "hanim_c1";
HAnimHumanoid27.joints[82] = HAnimJoint1285;

HAnimJoint HAnimJoint1286 = createNode("HAnimJoint");
HAnimJoint1286.USE = "hanim_skull";
HAnimHumanoid27.joints[83] = HAnimJoint1286;

HAnimJoint HAnimJoint1287 = createNode("HAnimJoint");
HAnimJoint1287.USE = "hanim_l_eyelid";
HAnimHumanoid27.joints[84] = HAnimJoint1287;

HAnimJoint HAnimJoint1288 = createNode("HAnimJoint");
HAnimJoint1288.USE = "hanim_r_eyelid";
HAnimHumanoid27.joints[85] = HAnimJoint1288;

HAnimJoint HAnimJoint1289 = createNode("HAnimJoint");
HAnimJoint1289.USE = "hanim_l_eyeball";
HAnimHumanoid27.joints[86] = HAnimJoint1289;

HAnimJoint HAnimJoint1290 = createNode("HAnimJoint");
HAnimJoint1290.USE = "hanim_r_eyeball";
HAnimHumanoid27.joints[87] = HAnimJoint1290;

HAnimJoint HAnimJoint1291 = createNode("HAnimJoint");
HAnimJoint1291.USE = "hanim_l_eyebrow";
HAnimHumanoid27.joints[88] = HAnimJoint1291;

HAnimJoint HAnimJoint1292 = createNode("HAnimJoint");
HAnimJoint1292.USE = "hanim_r_eyebrow";
HAnimHumanoid27.joints[89] = HAnimJoint1292;

HAnimJoint HAnimJoint1293 = createNode("HAnimJoint");
HAnimJoint1293.USE = "hanim_jaw";
HAnimHumanoid27.joints[90] = HAnimJoint1293;

HAnimJoint HAnimJoint1294 = createNode("HAnimJoint");
HAnimJoint1294.USE = "hanim_l_clavicle";
HAnimHumanoid27.joints[91] = HAnimJoint1294;

HAnimJoint HAnimJoint1295 = createNode("HAnimJoint");
HAnimJoint1295.USE = "hanim_l_scapula";
HAnimHumanoid27.joints[92] = HAnimJoint1295;

HAnimJoint HAnimJoint1296 = createNode("HAnimJoint");
HAnimJoint1296.USE = "hanim_l_upperarm";
HAnimHumanoid27.joints[93] = HAnimJoint1296;

HAnimJoint HAnimJoint1297 = createNode("HAnimJoint");
HAnimJoint1297.USE = "hanim_l_forearm";
HAnimHumanoid27.joints[94] = HAnimJoint1297;

HAnimJoint HAnimJoint1298 = createNode("HAnimJoint");
HAnimJoint1298.USE = "hanim_l_carpal";
HAnimHumanoid27.joints[95] = HAnimJoint1298;

HAnimJoint HAnimJoint1299 = createNode("HAnimJoint");
HAnimJoint1299.USE = "hanim_l_trapezium";
HAnimHumanoid27.joints[96] = HAnimJoint1299;

HAnimJoint HAnimJoint1300 = createNode("HAnimJoint");
HAnimJoint1300.USE = "hanim_l_metacarpal_1";
HAnimHumanoid27.joints[97] = HAnimJoint1300;

HAnimJoint HAnimJoint1301 = createNode("HAnimJoint");
HAnimJoint1301.USE = "hanim_l_carpal_proximal_phalanx_1";
HAnimHumanoid27.joints[98] = HAnimJoint1301;

HAnimJoint HAnimJoint1302 = createNode("HAnimJoint");
HAnimJoint1302.USE = "hanim_l_carpal_distal_phalanx_1";
HAnimHumanoid27.joints[99] = HAnimJoint1302;

HAnimJoint HAnimJoint1303 = createNode("HAnimJoint");
HAnimJoint1303.USE = "hanim_l_trapezoid";
HAnimHumanoid27.joints[100] = HAnimJoint1303;

HAnimJoint HAnimJoint1304 = createNode("HAnimJoint");
HAnimJoint1304.USE = "hanim_l_metacarpal_2";
HAnimHumanoid27.joints[101] = HAnimJoint1304;

HAnimJoint HAnimJoint1305 = createNode("HAnimJoint");
HAnimJoint1305.USE = "hanim_l_carpal_proximal_phalanx_2";
HAnimHumanoid27.joints[102] = HAnimJoint1305;

HAnimJoint HAnimJoint1306 = createNode("HAnimJoint");
HAnimJoint1306.USE = "hanim_l_carpal_middle_phalanx_2";
HAnimHumanoid27.joints[103] = HAnimJoint1306;

HAnimJoint HAnimJoint1307 = createNode("HAnimJoint");
HAnimJoint1307.USE = "hanim_l_carpal_distal_phalanx_2";
HAnimHumanoid27.joints[104] = HAnimJoint1307;

HAnimJoint HAnimJoint1308 = createNode("HAnimJoint");
HAnimJoint1308.USE = "hanim_l_capitate";
HAnimHumanoid27.joints[105] = HAnimJoint1308;

HAnimJoint HAnimJoint1309 = createNode("HAnimJoint");
HAnimJoint1309.USE = "hanim_l_metacarpal_3";
HAnimHumanoid27.joints[106] = HAnimJoint1309;

HAnimJoint HAnimJoint1310 = createNode("HAnimJoint");
HAnimJoint1310.USE = "hanim_l_carpal_proximal_phalanx_3";
HAnimHumanoid27.joints[107] = HAnimJoint1310;

HAnimJoint HAnimJoint1311 = createNode("HAnimJoint");
HAnimJoint1311.USE = "hanim_l_carpal_middle_phalanx_3";
HAnimHumanoid27.joints[108] = HAnimJoint1311;

HAnimJoint HAnimJoint1312 = createNode("HAnimJoint");
HAnimJoint1312.USE = "hanim_l_carpal_distal_phalanx_3";
HAnimHumanoid27.joints[109] = HAnimJoint1312;

HAnimJoint HAnimJoint1313 = createNode("HAnimJoint");
HAnimJoint1313.USE = "hanim_l_hamate";
HAnimHumanoid27.joints[110] = HAnimJoint1313;

HAnimJoint HAnimJoint1314 = createNode("HAnimJoint");
HAnimJoint1314.USE = "hanim_l_metacarpal_4";
HAnimHumanoid27.joints[111] = HAnimJoint1314;

HAnimJoint HAnimJoint1315 = createNode("HAnimJoint");
HAnimJoint1315.USE = "hanim_l_carpal_proximal_phalanx_4";
HAnimHumanoid27.joints[112] = HAnimJoint1315;

HAnimJoint HAnimJoint1316 = createNode("HAnimJoint");
HAnimJoint1316.USE = "hanim_l_carpal_middle_phalanx_4";
HAnimHumanoid27.joints[113] = HAnimJoint1316;

HAnimJoint HAnimJoint1317 = createNode("HAnimJoint");
HAnimJoint1317.USE = "hanim_l_carpal_distal_phalanx_4";
HAnimHumanoid27.joints[114] = HAnimJoint1317;

HAnimJoint HAnimJoint1318 = createNode("HAnimJoint");
HAnimJoint1318.USE = "hanim_l_metacarpal_5";
HAnimHumanoid27.joints[115] = HAnimJoint1318;

HAnimJoint HAnimJoint1319 = createNode("HAnimJoint");
HAnimJoint1319.USE = "hanim_l_carpal_proximal_phalanx_5";
HAnimHumanoid27.joints[116] = HAnimJoint1319;

HAnimJoint HAnimJoint1320 = createNode("HAnimJoint");
HAnimJoint1320.USE = "hanim_l_carpal_middle_phalanx_5";
HAnimHumanoid27.joints[117] = HAnimJoint1320;

HAnimJoint HAnimJoint1321 = createNode("HAnimJoint");
HAnimJoint1321.USE = "hanim_l_carpal_distal_phalanx_5";
HAnimHumanoid27.joints[118] = HAnimJoint1321;

HAnimJoint HAnimJoint1322 = createNode("HAnimJoint");
HAnimJoint1322.USE = "hanim_r_clavicle";
HAnimHumanoid27.joints[119] = HAnimJoint1322;

HAnimJoint HAnimJoint1323 = createNode("HAnimJoint");
HAnimJoint1323.USE = "hanim_r_scapula";
HAnimHumanoid27.joints[120] = HAnimJoint1323;

HAnimJoint HAnimJoint1324 = createNode("HAnimJoint");
HAnimJoint1324.USE = "hanim_r_upperarm";
HAnimHumanoid27.joints[121] = HAnimJoint1324;

HAnimJoint HAnimJoint1325 = createNode("HAnimJoint");
HAnimJoint1325.USE = "hanim_r_forearm";
HAnimHumanoid27.joints[122] = HAnimJoint1325;

HAnimJoint HAnimJoint1326 = createNode("HAnimJoint");
HAnimJoint1326.USE = "hanim_r_carpal";
HAnimHumanoid27.joints[123] = HAnimJoint1326;

HAnimJoint HAnimJoint1327 = createNode("HAnimJoint");
HAnimJoint1327.USE = "hanim_r_trapezium";
HAnimHumanoid27.joints[124] = HAnimJoint1327;

HAnimJoint HAnimJoint1328 = createNode("HAnimJoint");
HAnimJoint1328.USE = "hanim_r_metacarpal_1";
HAnimHumanoid27.joints[125] = HAnimJoint1328;

HAnimJoint HAnimJoint1329 = createNode("HAnimJoint");
HAnimJoint1329.USE = "hanim_r_carpal_proximal_phalanx_1";
HAnimHumanoid27.joints[126] = HAnimJoint1329;

HAnimJoint HAnimJoint1330 = createNode("HAnimJoint");
HAnimJoint1330.USE = "hanim_r_carpal_distal_phalanx_1";
HAnimHumanoid27.joints[127] = HAnimJoint1330;

HAnimJoint HAnimJoint1331 = createNode("HAnimJoint");
HAnimJoint1331.USE = "hanim_r_trapezoid";
HAnimHumanoid27.joints[128] = HAnimJoint1331;

HAnimJoint HAnimJoint1332 = createNode("HAnimJoint");
HAnimJoint1332.USE = "hanim_r_metacarpal_2";
HAnimHumanoid27.joints[129] = HAnimJoint1332;

HAnimJoint HAnimJoint1333 = createNode("HAnimJoint");
HAnimJoint1333.USE = "hanim_r_carpal_proximal_phalanx_2";
HAnimHumanoid27.joints[130] = HAnimJoint1333;

HAnimJoint HAnimJoint1334 = createNode("HAnimJoint");
HAnimJoint1334.USE = "hanim_r_carpal_middle_phalanx_2";
HAnimHumanoid27.joints[131] = HAnimJoint1334;

HAnimJoint HAnimJoint1335 = createNode("HAnimJoint");
HAnimJoint1335.USE = "hanim_r_carpal_distal_phalanx_2";
HAnimHumanoid27.joints[132] = HAnimJoint1335;

HAnimJoint HAnimJoint1336 = createNode("HAnimJoint");
HAnimJoint1336.USE = "hanim_r_capitate";
HAnimHumanoid27.joints[133] = HAnimJoint1336;

HAnimJoint HAnimJoint1337 = createNode("HAnimJoint");
HAnimJoint1337.USE = "hanim_r_metacarpal_3";
HAnimHumanoid27.joints[134] = HAnimJoint1337;

HAnimJoint HAnimJoint1338 = createNode("HAnimJoint");
HAnimJoint1338.USE = "hanim_r_carpal_proximal_phalanx_3";
HAnimHumanoid27.joints[135] = HAnimJoint1338;

HAnimJoint HAnimJoint1339 = createNode("HAnimJoint");
HAnimJoint1339.USE = "hanim_r_carpal_middle_phalanx_3";
HAnimHumanoid27.joints[136] = HAnimJoint1339;

HAnimJoint HAnimJoint1340 = createNode("HAnimJoint");
HAnimJoint1340.USE = "hanim_r_carpal_distal_phalanx_3";
HAnimHumanoid27.joints[137] = HAnimJoint1340;

HAnimJoint HAnimJoint1341 = createNode("HAnimJoint");
HAnimJoint1341.USE = "hanim_r_hamate";
HAnimHumanoid27.joints[138] = HAnimJoint1341;

HAnimJoint HAnimJoint1342 = createNode("HAnimJoint");
HAnimJoint1342.USE = "hanim_r_metacarpal_4";
HAnimHumanoid27.joints[139] = HAnimJoint1342;

HAnimJoint HAnimJoint1343 = createNode("HAnimJoint");
HAnimJoint1343.USE = "hanim_r_carpal_proximal_phalanx_4";
HAnimHumanoid27.joints[140] = HAnimJoint1343;

HAnimJoint HAnimJoint1344 = createNode("HAnimJoint");
HAnimJoint1344.USE = "hanim_r_carpal_middle_phalanx_4";
HAnimHumanoid27.joints[141] = HAnimJoint1344;

HAnimJoint HAnimJoint1345 = createNode("HAnimJoint");
HAnimJoint1345.USE = "hanim_r_carpal_distal_phalanx_4";
HAnimHumanoid27.joints[142] = HAnimJoint1345;

HAnimJoint HAnimJoint1346 = createNode("HAnimJoint");
HAnimJoint1346.USE = "hanim_r_metacarpal_5";
HAnimHumanoid27.joints[143] = HAnimJoint1346;

HAnimJoint HAnimJoint1347 = createNode("HAnimJoint");
HAnimJoint1347.USE = "hanim_r_carpal_proximal_phalanx_5";
HAnimHumanoid27.joints[144] = HAnimJoint1347;

HAnimJoint HAnimJoint1348 = createNode("HAnimJoint");
HAnimJoint1348.USE = "hanim_r_carpal_middle_phalanx_5";
HAnimHumanoid27.joints[145] = HAnimJoint1348;

HAnimJoint HAnimJoint1349 = createNode("HAnimJoint");
HAnimJoint1349.USE = "hanim_r_carpal_distal_phalanx_5";
HAnimHumanoid27.joints[146] = HAnimJoint1349;

Transform26.children = new MFNode();

Transform26.children[0] = HAnimHumanoid27;

children[6] = Transform26;

TimeSensor TimeSensor1350 = createNode("TimeSensor");
TimeSensor1350.DEF = "Armature_Clock";
TimeSensor1350.cycleInterval = 10.416666666666666;
TimeSensor1350.loop = True;
children[7] = TimeSensor1350;

ProximitySensor ProximitySensor1351 = createNode("ProximitySensor");
ProximitySensor1351.DEF = "Armature_Close";
ProximitySensor1351.size = new SFVec3f(new float[1000000,1000000,1000000]);
children[8] = ProximitySensor1351;

ROUTE ROUTE1352 = createNode("ROUTE");
ROUTE1352.fromField = "enterTime";
ROUTE1352.fromNode = "Armature_Close";
ROUTE1352.toField = "startTime";
ROUTE1352.toNode = "Armature_Clock";
children[9] = ROUTE1352;

OrientationInterpolator OrientationInterpolator1353 = createNode("OrientationInterpolator");
OrientationInterpolator1353.DEF = "Armature_OI_sacrum";
OrientationInterpolator1353.key = new MFFloat(new float[0,1]);
OrientationInterpolator1353.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[10] = OrientationInterpolator1353;

OrientationInterpolator OrientationInterpolator1354 = createNode("OrientationInterpolator");
OrientationInterpolator1354.DEF = "Armature_OI_pelvis";
OrientationInterpolator1354.key = new MFFloat(new float[0,1]);
OrientationInterpolator1354.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[11] = OrientationInterpolator1354;

OrientationInterpolator OrientationInterpolator1355 = createNode("OrientationInterpolator");
OrientationInterpolator1355.DEF = "Armature_OI_l_thigh";
OrientationInterpolator1355.key = new MFFloat(new float[0,1]);
OrientationInterpolator1355.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[12] = OrientationInterpolator1355;

OrientationInterpolator OrientationInterpolator1356 = createNode("OrientationInterpolator");
OrientationInterpolator1356.DEF = "Armature_OI_l_calf";
OrientationInterpolator1356.key = new MFFloat(new float[0,1]);
OrientationInterpolator1356.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[13] = OrientationInterpolator1356;

OrientationInterpolator OrientationInterpolator1357 = createNode("OrientationInterpolator");
OrientationInterpolator1357.DEF = "Armature_OI_l_talus";
OrientationInterpolator1357.key = new MFFloat(new float[0,1]);
OrientationInterpolator1357.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[14] = OrientationInterpolator1357;

OrientationInterpolator OrientationInterpolator1358 = createNode("OrientationInterpolator");
OrientationInterpolator1358.DEF = "Armature_OI_l_navicular";
OrientationInterpolator1358.key = new MFFloat(new float[0,1]);
OrientationInterpolator1358.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[15] = OrientationInterpolator1358;

OrientationInterpolator OrientationInterpolator1359 = createNode("OrientationInterpolator");
OrientationInterpolator1359.DEF = "Armature_OI_l_cuneiform_1";
OrientationInterpolator1359.key = new MFFloat(new float[0,1]);
OrientationInterpolator1359.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[16] = OrientationInterpolator1359;

OrientationInterpolator OrientationInterpolator1360 = createNode("OrientationInterpolator");
OrientationInterpolator1360.DEF = "Armature_OI_l_metatarsal_1";
OrientationInterpolator1360.key = new MFFloat(new float[0,1]);
OrientationInterpolator1360.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[17] = OrientationInterpolator1360;

OrientationInterpolator OrientationInterpolator1361 = createNode("OrientationInterpolator");
OrientationInterpolator1361.DEF = "Armature_OI_l_tarsal_proximal_phalanx_1";
OrientationInterpolator1361.key = new MFFloat(new float[0,1]);
OrientationInterpolator1361.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[18] = OrientationInterpolator1361;

OrientationInterpolator OrientationInterpolator1362 = createNode("OrientationInterpolator");
OrientationInterpolator1362.DEF = "Armature_OI_l_tarsal_distal_phalanx_1";
OrientationInterpolator1362.key = new MFFloat(new float[0,1]);
OrientationInterpolator1362.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[19] = OrientationInterpolator1362;

OrientationInterpolator OrientationInterpolator1363 = createNode("OrientationInterpolator");
OrientationInterpolator1363.DEF = "Armature_OI_l_cuneiform_2";
OrientationInterpolator1363.key = new MFFloat(new float[0,1]);
OrientationInterpolator1363.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[20] = OrientationInterpolator1363;

OrientationInterpolator OrientationInterpolator1364 = createNode("OrientationInterpolator");
OrientationInterpolator1364.DEF = "Armature_OI_l_metatarsal_2";
OrientationInterpolator1364.key = new MFFloat(new float[0,1]);
OrientationInterpolator1364.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[21] = OrientationInterpolator1364;

OrientationInterpolator OrientationInterpolator1365 = createNode("OrientationInterpolator");
OrientationInterpolator1365.DEF = "Armature_OI_l_tarsal_proximal_phalanx_2";
OrientationInterpolator1365.key = new MFFloat(new float[0,1]);
OrientationInterpolator1365.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[22] = OrientationInterpolator1365;

OrientationInterpolator OrientationInterpolator1366 = createNode("OrientationInterpolator");
OrientationInterpolator1366.DEF = "Armature_OI_l_tarsal_middle_phalanx_2";
OrientationInterpolator1366.key = new MFFloat(new float[0,1]);
OrientationInterpolator1366.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[23] = OrientationInterpolator1366;

OrientationInterpolator OrientationInterpolator1367 = createNode("OrientationInterpolator");
OrientationInterpolator1367.DEF = "Armature_OI_l_tarsal_distal_phalanx_2";
OrientationInterpolator1367.key = new MFFloat(new float[0,1]);
OrientationInterpolator1367.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[24] = OrientationInterpolator1367;

OrientationInterpolator OrientationInterpolator1368 = createNode("OrientationInterpolator");
OrientationInterpolator1368.DEF = "Armature_OI_l_cuneiform_3";
OrientationInterpolator1368.key = new MFFloat(new float[0,1]);
OrientationInterpolator1368.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[25] = OrientationInterpolator1368;

OrientationInterpolator OrientationInterpolator1369 = createNode("OrientationInterpolator");
OrientationInterpolator1369.DEF = "Armature_OI_l_metatarsal_3";
OrientationInterpolator1369.key = new MFFloat(new float[0,1]);
OrientationInterpolator1369.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[26] = OrientationInterpolator1369;

OrientationInterpolator OrientationInterpolator1370 = createNode("OrientationInterpolator");
OrientationInterpolator1370.DEF = "Armature_OI_l_tarsal_proximal_phalanx_3";
OrientationInterpolator1370.key = new MFFloat(new float[0,1]);
OrientationInterpolator1370.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[27] = OrientationInterpolator1370;

OrientationInterpolator OrientationInterpolator1371 = createNode("OrientationInterpolator");
OrientationInterpolator1371.DEF = "Armature_OI_l_tarsal_middle_phalanx_3";
OrientationInterpolator1371.key = new MFFloat(new float[0,1]);
OrientationInterpolator1371.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[28] = OrientationInterpolator1371;

OrientationInterpolator OrientationInterpolator1372 = createNode("OrientationInterpolator");
OrientationInterpolator1372.DEF = "Armature_OI_l_tarsal_distal_phalanx_3";
OrientationInterpolator1372.key = new MFFloat(new float[0,1]);
OrientationInterpolator1372.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[29] = OrientationInterpolator1372;

OrientationInterpolator OrientationInterpolator1373 = createNode("OrientationInterpolator");
OrientationInterpolator1373.DEF = "Armature_OI_l_calcaneus";
OrientationInterpolator1373.key = new MFFloat(new float[0,1]);
OrientationInterpolator1373.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[30] = OrientationInterpolator1373;

OrientationInterpolator OrientationInterpolator1374 = createNode("OrientationInterpolator");
OrientationInterpolator1374.DEF = "Armature_OI_l_cuboid";
OrientationInterpolator1374.key = new MFFloat(new float[0,1]);
OrientationInterpolator1374.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[31] = OrientationInterpolator1374;

OrientationInterpolator OrientationInterpolator1375 = createNode("OrientationInterpolator");
OrientationInterpolator1375.DEF = "Armature_OI_l_metatarsal_4";
OrientationInterpolator1375.key = new MFFloat(new float[0,1]);
OrientationInterpolator1375.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[32] = OrientationInterpolator1375;

OrientationInterpolator OrientationInterpolator1376 = createNode("OrientationInterpolator");
OrientationInterpolator1376.DEF = "Armature_OI_l_tarsal_proximal_phalanx_4";
OrientationInterpolator1376.key = new MFFloat(new float[0,1]);
OrientationInterpolator1376.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[33] = OrientationInterpolator1376;

OrientationInterpolator OrientationInterpolator1377 = createNode("OrientationInterpolator");
OrientationInterpolator1377.DEF = "Armature_OI_l_tarsal_middle_phalanx_4";
OrientationInterpolator1377.key = new MFFloat(new float[0,1]);
OrientationInterpolator1377.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[34] = OrientationInterpolator1377;

OrientationInterpolator OrientationInterpolator1378 = createNode("OrientationInterpolator");
OrientationInterpolator1378.DEF = "Armature_OI_l_tarsal_distal_phalanx_4";
OrientationInterpolator1378.key = new MFFloat(new float[0,1]);
OrientationInterpolator1378.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[35] = OrientationInterpolator1378;

OrientationInterpolator OrientationInterpolator1379 = createNode("OrientationInterpolator");
OrientationInterpolator1379.DEF = "Armature_OI_l_metatarsal_5";
OrientationInterpolator1379.key = new MFFloat(new float[0,1]);
OrientationInterpolator1379.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[36] = OrientationInterpolator1379;

OrientationInterpolator OrientationInterpolator1380 = createNode("OrientationInterpolator");
OrientationInterpolator1380.DEF = "Armature_OI_l_tarsal_proximal_phalanx_5";
OrientationInterpolator1380.key = new MFFloat(new float[0,1]);
OrientationInterpolator1380.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[37] = OrientationInterpolator1380;

OrientationInterpolator OrientationInterpolator1381 = createNode("OrientationInterpolator");
OrientationInterpolator1381.DEF = "Armature_OI_l_tarsal_middle_phalanx_5";
OrientationInterpolator1381.key = new MFFloat(new float[0,1]);
OrientationInterpolator1381.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[38] = OrientationInterpolator1381;

OrientationInterpolator OrientationInterpolator1382 = createNode("OrientationInterpolator");
OrientationInterpolator1382.DEF = "Armature_OI_l_tarsal_distal_phalanx_5";
OrientationInterpolator1382.key = new MFFloat(new float[0,1]);
OrientationInterpolator1382.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[39] = OrientationInterpolator1382;

OrientationInterpolator OrientationInterpolator1383 = createNode("OrientationInterpolator");
OrientationInterpolator1383.DEF = "Armature_OI_r_thigh";
OrientationInterpolator1383.key = new MFFloat(new float[0,1]);
OrientationInterpolator1383.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[40] = OrientationInterpolator1383;

OrientationInterpolator OrientationInterpolator1384 = createNode("OrientationInterpolator");
OrientationInterpolator1384.DEF = "Armature_OI_r_calf";
OrientationInterpolator1384.key = new MFFloat(new float[0,1]);
OrientationInterpolator1384.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[41] = OrientationInterpolator1384;

OrientationInterpolator OrientationInterpolator1385 = createNode("OrientationInterpolator");
OrientationInterpolator1385.DEF = "Armature_OI_r_talus";
OrientationInterpolator1385.key = new MFFloat(new float[0,1]);
OrientationInterpolator1385.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[42] = OrientationInterpolator1385;

OrientationInterpolator OrientationInterpolator1386 = createNode("OrientationInterpolator");
OrientationInterpolator1386.DEF = "Armature_OI_r_navicular";
OrientationInterpolator1386.key = new MFFloat(new float[0,1]);
OrientationInterpolator1386.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[43] = OrientationInterpolator1386;

OrientationInterpolator OrientationInterpolator1387 = createNode("OrientationInterpolator");
OrientationInterpolator1387.DEF = "Armature_OI_r_cuneiform_1";
OrientationInterpolator1387.key = new MFFloat(new float[0,1]);
OrientationInterpolator1387.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[44] = OrientationInterpolator1387;

OrientationInterpolator OrientationInterpolator1388 = createNode("OrientationInterpolator");
OrientationInterpolator1388.DEF = "Armature_OI_r_metatarsal_1";
OrientationInterpolator1388.key = new MFFloat(new float[0,1]);
OrientationInterpolator1388.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[45] = OrientationInterpolator1388;

OrientationInterpolator OrientationInterpolator1389 = createNode("OrientationInterpolator");
OrientationInterpolator1389.DEF = "Armature_OI_r_tarsal_proximal_phalanx_1";
OrientationInterpolator1389.key = new MFFloat(new float[0,1]);
OrientationInterpolator1389.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[46] = OrientationInterpolator1389;

OrientationInterpolator OrientationInterpolator1390 = createNode("OrientationInterpolator");
OrientationInterpolator1390.DEF = "Armature_OI_r_tarsal_distal_phalanx_1";
OrientationInterpolator1390.key = new MFFloat(new float[0,1]);
OrientationInterpolator1390.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[47] = OrientationInterpolator1390;

OrientationInterpolator OrientationInterpolator1391 = createNode("OrientationInterpolator");
OrientationInterpolator1391.DEF = "Armature_OI_r_cuneiform_2";
OrientationInterpolator1391.key = new MFFloat(new float[0,1]);
OrientationInterpolator1391.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[48] = OrientationInterpolator1391;

OrientationInterpolator OrientationInterpolator1392 = createNode("OrientationInterpolator");
OrientationInterpolator1392.DEF = "Armature_OI_r_metatarsal_2";
OrientationInterpolator1392.key = new MFFloat(new float[0,1]);
OrientationInterpolator1392.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[49] = OrientationInterpolator1392;

OrientationInterpolator OrientationInterpolator1393 = createNode("OrientationInterpolator");
OrientationInterpolator1393.DEF = "Armature_OI_r_tarsal_proximal_phalanx_2";
OrientationInterpolator1393.key = new MFFloat(new float[0,1]);
OrientationInterpolator1393.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[50] = OrientationInterpolator1393;

OrientationInterpolator OrientationInterpolator1394 = createNode("OrientationInterpolator");
OrientationInterpolator1394.DEF = "Armature_OI_r_tarsal_middle_phalanx_2";
OrientationInterpolator1394.key = new MFFloat(new float[0,1]);
OrientationInterpolator1394.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[51] = OrientationInterpolator1394;

OrientationInterpolator OrientationInterpolator1395 = createNode("OrientationInterpolator");
OrientationInterpolator1395.DEF = "Armature_OI_r_tarsal_distal_phalanx_2";
OrientationInterpolator1395.key = new MFFloat(new float[0,1]);
OrientationInterpolator1395.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[52] = OrientationInterpolator1395;

OrientationInterpolator OrientationInterpolator1396 = createNode("OrientationInterpolator");
OrientationInterpolator1396.DEF = "Armature_OI_r_cuneiform_3";
OrientationInterpolator1396.key = new MFFloat(new float[0,1]);
OrientationInterpolator1396.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[53] = OrientationInterpolator1396;

OrientationInterpolator OrientationInterpolator1397 = createNode("OrientationInterpolator");
OrientationInterpolator1397.DEF = "Armature_OI_r_metatarsal_3";
OrientationInterpolator1397.key = new MFFloat(new float[0,1]);
OrientationInterpolator1397.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[54] = OrientationInterpolator1397;

OrientationInterpolator OrientationInterpolator1398 = createNode("OrientationInterpolator");
OrientationInterpolator1398.DEF = "Armature_OI_r_tarsal_proximal_phalanx_3";
OrientationInterpolator1398.key = new MFFloat(new float[0,1]);
OrientationInterpolator1398.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[55] = OrientationInterpolator1398;

OrientationInterpolator OrientationInterpolator1399 = createNode("OrientationInterpolator");
OrientationInterpolator1399.DEF = "Armature_OI_r_tarsal_middle_phalanx_3";
OrientationInterpolator1399.key = new MFFloat(new float[0,1]);
OrientationInterpolator1399.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[56] = OrientationInterpolator1399;

OrientationInterpolator OrientationInterpolator1400 = createNode("OrientationInterpolator");
OrientationInterpolator1400.DEF = "Armature_OI_r_tarsal_distal_phalanx_3";
OrientationInterpolator1400.key = new MFFloat(new float[0,1]);
OrientationInterpolator1400.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[57] = OrientationInterpolator1400;

OrientationInterpolator OrientationInterpolator1401 = createNode("OrientationInterpolator");
OrientationInterpolator1401.DEF = "Armature_OI_r_calcaneus";
OrientationInterpolator1401.key = new MFFloat(new float[0,1]);
OrientationInterpolator1401.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[58] = OrientationInterpolator1401;

OrientationInterpolator OrientationInterpolator1402 = createNode("OrientationInterpolator");
OrientationInterpolator1402.DEF = "Armature_OI_r_cuboid";
OrientationInterpolator1402.key = new MFFloat(new float[0,1]);
OrientationInterpolator1402.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[59] = OrientationInterpolator1402;

OrientationInterpolator OrientationInterpolator1403 = createNode("OrientationInterpolator");
OrientationInterpolator1403.DEF = "Armature_OI_r_metatarsal_4";
OrientationInterpolator1403.key = new MFFloat(new float[0,1]);
OrientationInterpolator1403.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[60] = OrientationInterpolator1403;

OrientationInterpolator OrientationInterpolator1404 = createNode("OrientationInterpolator");
OrientationInterpolator1404.DEF = "Armature_OI_r_tarsal_proximal_phalanx_4";
OrientationInterpolator1404.key = new MFFloat(new float[0,1]);
OrientationInterpolator1404.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[61] = OrientationInterpolator1404;

OrientationInterpolator OrientationInterpolator1405 = createNode("OrientationInterpolator");
OrientationInterpolator1405.DEF = "Armature_OI_r_tarsal_middle_phalanx_4";
OrientationInterpolator1405.key = new MFFloat(new float[0,1]);
OrientationInterpolator1405.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[62] = OrientationInterpolator1405;

OrientationInterpolator OrientationInterpolator1406 = createNode("OrientationInterpolator");
OrientationInterpolator1406.DEF = "Armature_OI_r_tarsal_distal_phalanx_4";
OrientationInterpolator1406.key = new MFFloat(new float[0,1]);
OrientationInterpolator1406.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[63] = OrientationInterpolator1406;

OrientationInterpolator OrientationInterpolator1407 = createNode("OrientationInterpolator");
OrientationInterpolator1407.DEF = "Armature_OI_r_metatarsal_5";
OrientationInterpolator1407.key = new MFFloat(new float[0,1]);
OrientationInterpolator1407.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[64] = OrientationInterpolator1407;

OrientationInterpolator OrientationInterpolator1408 = createNode("OrientationInterpolator");
OrientationInterpolator1408.DEF = "Armature_OI_r_tarsal_proximal_phalanx_5";
OrientationInterpolator1408.key = new MFFloat(new float[0,1]);
OrientationInterpolator1408.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[65] = OrientationInterpolator1408;

OrientationInterpolator OrientationInterpolator1409 = createNode("OrientationInterpolator");
OrientationInterpolator1409.DEF = "Armature_OI_r_tarsal_middle_phalanx_5";
OrientationInterpolator1409.key = new MFFloat(new float[0,1]);
OrientationInterpolator1409.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[66] = OrientationInterpolator1409;

OrientationInterpolator OrientationInterpolator1410 = createNode("OrientationInterpolator");
OrientationInterpolator1410.DEF = "Armature_OI_r_tarsal_distal_phalanx_5";
OrientationInterpolator1410.key = new MFFloat(new float[0,1]);
OrientationInterpolator1410.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[67] = OrientationInterpolator1410;

OrientationInterpolator OrientationInterpolator1411 = createNode("OrientationInterpolator");
OrientationInterpolator1411.DEF = "Armature_OI_l5";
OrientationInterpolator1411.key = new MFFloat(new float[0,1]);
OrientationInterpolator1411.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[68] = OrientationInterpolator1411;

OrientationInterpolator OrientationInterpolator1412 = createNode("OrientationInterpolator");
OrientationInterpolator1412.DEF = "Armature_OI_l4";
OrientationInterpolator1412.key = new MFFloat(new float[0,1]);
OrientationInterpolator1412.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[69] = OrientationInterpolator1412;

OrientationInterpolator OrientationInterpolator1413 = createNode("OrientationInterpolator");
OrientationInterpolator1413.DEF = "Armature_OI_l3";
OrientationInterpolator1413.key = new MFFloat(new float[0,1]);
OrientationInterpolator1413.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[70] = OrientationInterpolator1413;

OrientationInterpolator OrientationInterpolator1414 = createNode("OrientationInterpolator");
OrientationInterpolator1414.DEF = "Armature_OI_l2";
OrientationInterpolator1414.key = new MFFloat(new float[0,1]);
OrientationInterpolator1414.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[71] = OrientationInterpolator1414;

OrientationInterpolator OrientationInterpolator1415 = createNode("OrientationInterpolator");
OrientationInterpolator1415.DEF = "Armature_OI_l1";
OrientationInterpolator1415.key = new MFFloat(new float[0,1]);
OrientationInterpolator1415.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[72] = OrientationInterpolator1415;

OrientationInterpolator OrientationInterpolator1416 = createNode("OrientationInterpolator");
OrientationInterpolator1416.DEF = "Armature_OI_t12";
OrientationInterpolator1416.key = new MFFloat(new float[0,1]);
OrientationInterpolator1416.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[73] = OrientationInterpolator1416;

OrientationInterpolator OrientationInterpolator1417 = createNode("OrientationInterpolator");
OrientationInterpolator1417.DEF = "Armature_OI_t11";
OrientationInterpolator1417.key = new MFFloat(new float[0,1]);
OrientationInterpolator1417.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[74] = OrientationInterpolator1417;

OrientationInterpolator OrientationInterpolator1418 = createNode("OrientationInterpolator");
OrientationInterpolator1418.DEF = "Armature_OI_t10";
OrientationInterpolator1418.key = new MFFloat(new float[0,1]);
OrientationInterpolator1418.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[75] = OrientationInterpolator1418;

OrientationInterpolator OrientationInterpolator1419 = createNode("OrientationInterpolator");
OrientationInterpolator1419.DEF = "Armature_OI_t9";
OrientationInterpolator1419.key = new MFFloat(new float[0,1]);
OrientationInterpolator1419.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[76] = OrientationInterpolator1419;

OrientationInterpolator OrientationInterpolator1420 = createNode("OrientationInterpolator");
OrientationInterpolator1420.DEF = "Armature_OI_t8";
OrientationInterpolator1420.key = new MFFloat(new float[0,1]);
OrientationInterpolator1420.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[77] = OrientationInterpolator1420;

OrientationInterpolator OrientationInterpolator1421 = createNode("OrientationInterpolator");
OrientationInterpolator1421.DEF = "Armature_OI_t7";
OrientationInterpolator1421.key = new MFFloat(new float[0,1]);
OrientationInterpolator1421.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[78] = OrientationInterpolator1421;

OrientationInterpolator OrientationInterpolator1422 = createNode("OrientationInterpolator");
OrientationInterpolator1422.DEF = "Armature_OI_t6";
OrientationInterpolator1422.key = new MFFloat(new float[0,1]);
OrientationInterpolator1422.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[79] = OrientationInterpolator1422;

OrientationInterpolator OrientationInterpolator1423 = createNode("OrientationInterpolator");
OrientationInterpolator1423.DEF = "Armature_OI_t5";
OrientationInterpolator1423.key = new MFFloat(new float[0,1]);
OrientationInterpolator1423.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[80] = OrientationInterpolator1423;

OrientationInterpolator OrientationInterpolator1424 = createNode("OrientationInterpolator");
OrientationInterpolator1424.DEF = "Armature_OI_t4";
OrientationInterpolator1424.key = new MFFloat(new float[0,1]);
OrientationInterpolator1424.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[81] = OrientationInterpolator1424;

OrientationInterpolator OrientationInterpolator1425 = createNode("OrientationInterpolator");
OrientationInterpolator1425.DEF = "Armature_OI_t3";
OrientationInterpolator1425.key = new MFFloat(new float[0,1]);
OrientationInterpolator1425.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[82] = OrientationInterpolator1425;

OrientationInterpolator OrientationInterpolator1426 = createNode("OrientationInterpolator");
OrientationInterpolator1426.DEF = "Armature_OI_t2";
OrientationInterpolator1426.key = new MFFloat(new float[0,1]);
OrientationInterpolator1426.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[83] = OrientationInterpolator1426;

OrientationInterpolator OrientationInterpolator1427 = createNode("OrientationInterpolator");
OrientationInterpolator1427.DEF = "Armature_OI_t1";
OrientationInterpolator1427.key = new MFFloat(new float[0,1]);
OrientationInterpolator1427.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[84] = OrientationInterpolator1427;

OrientationInterpolator OrientationInterpolator1428 = createNode("OrientationInterpolator");
OrientationInterpolator1428.DEF = "Armature_OI_c7";
OrientationInterpolator1428.key = new MFFloat(new float[0,1]);
OrientationInterpolator1428.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[85] = OrientationInterpolator1428;

OrientationInterpolator OrientationInterpolator1429 = createNode("OrientationInterpolator");
OrientationInterpolator1429.DEF = "Armature_OI_c6";
OrientationInterpolator1429.key = new MFFloat(new float[0,1]);
OrientationInterpolator1429.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[86] = OrientationInterpolator1429;

OrientationInterpolator OrientationInterpolator1430 = createNode("OrientationInterpolator");
OrientationInterpolator1430.DEF = "Armature_OI_c5";
OrientationInterpolator1430.key = new MFFloat(new float[0,1]);
OrientationInterpolator1430.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[87] = OrientationInterpolator1430;

OrientationInterpolator OrientationInterpolator1431 = createNode("OrientationInterpolator");
OrientationInterpolator1431.DEF = "Armature_OI_c4";
OrientationInterpolator1431.key = new MFFloat(new float[0,1]);
OrientationInterpolator1431.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[88] = OrientationInterpolator1431;

OrientationInterpolator OrientationInterpolator1432 = createNode("OrientationInterpolator");
OrientationInterpolator1432.DEF = "Armature_OI_c3";
OrientationInterpolator1432.key = new MFFloat(new float[0,1]);
OrientationInterpolator1432.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[89] = OrientationInterpolator1432;

OrientationInterpolator OrientationInterpolator1433 = createNode("OrientationInterpolator");
OrientationInterpolator1433.DEF = "Armature_OI_c2";
OrientationInterpolator1433.key = new MFFloat(new float[0,1]);
OrientationInterpolator1433.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[90] = OrientationInterpolator1433;

OrientationInterpolator OrientationInterpolator1434 = createNode("OrientationInterpolator");
OrientationInterpolator1434.DEF = "Armature_OI_c1";
OrientationInterpolator1434.key = new MFFloat(new float[0,1]);
OrientationInterpolator1434.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[91] = OrientationInterpolator1434;

OrientationInterpolator OrientationInterpolator1435 = createNode("OrientationInterpolator");
OrientationInterpolator1435.DEF = "Armature_OI_skull";
OrientationInterpolator1435.key = new MFFloat(new float[0,1]);
OrientationInterpolator1435.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[92] = OrientationInterpolator1435;

OrientationInterpolator OrientationInterpolator1436 = createNode("OrientationInterpolator");
OrientationInterpolator1436.DEF = "Armature_OI_l_eyelid";
OrientationInterpolator1436.key = new MFFloat(new float[0,1]);
OrientationInterpolator1436.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[93] = OrientationInterpolator1436;

OrientationInterpolator OrientationInterpolator1437 = createNode("OrientationInterpolator");
OrientationInterpolator1437.DEF = "Armature_OI_r_eyelid";
OrientationInterpolator1437.key = new MFFloat(new float[0,1]);
OrientationInterpolator1437.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[94] = OrientationInterpolator1437;

OrientationInterpolator OrientationInterpolator1438 = createNode("OrientationInterpolator");
OrientationInterpolator1438.DEF = "Armature_OI_l_eyeball";
OrientationInterpolator1438.key = new MFFloat(new float[0,1]);
OrientationInterpolator1438.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[95] = OrientationInterpolator1438;

OrientationInterpolator OrientationInterpolator1439 = createNode("OrientationInterpolator");
OrientationInterpolator1439.DEF = "Armature_OI_r_eyeball";
OrientationInterpolator1439.key = new MFFloat(new float[0,1]);
OrientationInterpolator1439.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[96] = OrientationInterpolator1439;

OrientationInterpolator OrientationInterpolator1440 = createNode("OrientationInterpolator");
OrientationInterpolator1440.DEF = "Armature_OI_l_eyebrow";
OrientationInterpolator1440.key = new MFFloat(new float[0,1]);
OrientationInterpolator1440.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[97] = OrientationInterpolator1440;

OrientationInterpolator OrientationInterpolator1441 = createNode("OrientationInterpolator");
OrientationInterpolator1441.DEF = "Armature_OI_r_eyebrow";
OrientationInterpolator1441.key = new MFFloat(new float[0,1]);
OrientationInterpolator1441.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[98] = OrientationInterpolator1441;

OrientationInterpolator OrientationInterpolator1442 = createNode("OrientationInterpolator");
OrientationInterpolator1442.DEF = "Armature_OI_jaw";
OrientationInterpolator1442.key = new MFFloat(new float[0,1]);
OrientationInterpolator1442.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[99] = OrientationInterpolator1442;

OrientationInterpolator OrientationInterpolator1443 = createNode("OrientationInterpolator");
OrientationInterpolator1443.DEF = "Armature_OI_l_clavicle";
OrientationInterpolator1443.key = new MFFloat(new float[0,1]);
OrientationInterpolator1443.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[100] = OrientationInterpolator1443;

OrientationInterpolator OrientationInterpolator1444 = createNode("OrientationInterpolator");
OrientationInterpolator1444.DEF = "Armature_OI_l_scapula";
OrientationInterpolator1444.key = new MFFloat(new float[0,1]);
OrientationInterpolator1444.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[101] = OrientationInterpolator1444;

OrientationInterpolator OrientationInterpolator1445 = createNode("OrientationInterpolator");
OrientationInterpolator1445.DEF = "Armature_OI_l_upperarm";
OrientationInterpolator1445.key = new MFFloat(new float[0,1]);
OrientationInterpolator1445.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[102] = OrientationInterpolator1445;

OrientationInterpolator OrientationInterpolator1446 = createNode("OrientationInterpolator");
OrientationInterpolator1446.DEF = "Armature_OI_l_forearm";
OrientationInterpolator1446.key = new MFFloat(new float[0,1]);
OrientationInterpolator1446.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[103] = OrientationInterpolator1446;

OrientationInterpolator OrientationInterpolator1447 = createNode("OrientationInterpolator");
OrientationInterpolator1447.DEF = "Armature_OI_l_carpal";
OrientationInterpolator1447.key = new MFFloat(new float[0,1]);
OrientationInterpolator1447.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[104] = OrientationInterpolator1447;

OrientationInterpolator OrientationInterpolator1448 = createNode("OrientationInterpolator");
OrientationInterpolator1448.DEF = "Armature_OI_l_trapezium";
OrientationInterpolator1448.key = new MFFloat(new float[0,1]);
OrientationInterpolator1448.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[105] = OrientationInterpolator1448;

OrientationInterpolator OrientationInterpolator1449 = createNode("OrientationInterpolator");
OrientationInterpolator1449.DEF = "Armature_OI_l_metacarpal_1";
OrientationInterpolator1449.key = new MFFloat(new float[0,1]);
OrientationInterpolator1449.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[106] = OrientationInterpolator1449;

OrientationInterpolator OrientationInterpolator1450 = createNode("OrientationInterpolator");
OrientationInterpolator1450.DEF = "Armature_OI_l_carpal_proximal_phalanx_1";
OrientationInterpolator1450.key = new MFFloat(new float[0,1]);
OrientationInterpolator1450.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[107] = OrientationInterpolator1450;

OrientationInterpolator OrientationInterpolator1451 = createNode("OrientationInterpolator");
OrientationInterpolator1451.DEF = "Armature_OI_l_carpal_distal_phalanx_1";
OrientationInterpolator1451.key = new MFFloat(new float[0,1]);
OrientationInterpolator1451.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[108] = OrientationInterpolator1451;

OrientationInterpolator OrientationInterpolator1452 = createNode("OrientationInterpolator");
OrientationInterpolator1452.DEF = "Armature_OI_l_trapezoid";
OrientationInterpolator1452.key = new MFFloat(new float[0,1]);
OrientationInterpolator1452.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[109] = OrientationInterpolator1452;

OrientationInterpolator OrientationInterpolator1453 = createNode("OrientationInterpolator");
OrientationInterpolator1453.DEF = "Armature_OI_l_metacarpal_2";
OrientationInterpolator1453.key = new MFFloat(new float[0,1]);
OrientationInterpolator1453.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[110] = OrientationInterpolator1453;

OrientationInterpolator OrientationInterpolator1454 = createNode("OrientationInterpolator");
OrientationInterpolator1454.DEF = "Armature_OI_l_carpal_proximal_phalanx_2";
OrientationInterpolator1454.key = new MFFloat(new float[0,1]);
OrientationInterpolator1454.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[111] = OrientationInterpolator1454;

OrientationInterpolator OrientationInterpolator1455 = createNode("OrientationInterpolator");
OrientationInterpolator1455.DEF = "Armature_OI_l_carpal_middle_phalanx_2";
OrientationInterpolator1455.key = new MFFloat(new float[0,1]);
OrientationInterpolator1455.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[112] = OrientationInterpolator1455;

OrientationInterpolator OrientationInterpolator1456 = createNode("OrientationInterpolator");
OrientationInterpolator1456.DEF = "Armature_OI_l_carpal_distal_phalanx_2";
OrientationInterpolator1456.key = new MFFloat(new float[0,1]);
OrientationInterpolator1456.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[113] = OrientationInterpolator1456;

OrientationInterpolator OrientationInterpolator1457 = createNode("OrientationInterpolator");
OrientationInterpolator1457.DEF = "Armature_OI_l_capitate";
OrientationInterpolator1457.key = new MFFloat(new float[0,1]);
OrientationInterpolator1457.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[114] = OrientationInterpolator1457;

OrientationInterpolator OrientationInterpolator1458 = createNode("OrientationInterpolator");
OrientationInterpolator1458.DEF = "Armature_OI_l_metacarpal_3";
OrientationInterpolator1458.key = new MFFloat(new float[0,1]);
OrientationInterpolator1458.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[115] = OrientationInterpolator1458;

OrientationInterpolator OrientationInterpolator1459 = createNode("OrientationInterpolator");
OrientationInterpolator1459.DEF = "Armature_OI_l_carpal_proximal_phalanx_3";
OrientationInterpolator1459.key = new MFFloat(new float[0,1]);
OrientationInterpolator1459.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[116] = OrientationInterpolator1459;

OrientationInterpolator OrientationInterpolator1460 = createNode("OrientationInterpolator");
OrientationInterpolator1460.DEF = "Armature_OI_l_carpal_middle_phalanx_3";
OrientationInterpolator1460.key = new MFFloat(new float[0,1]);
OrientationInterpolator1460.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[117] = OrientationInterpolator1460;

OrientationInterpolator OrientationInterpolator1461 = createNode("OrientationInterpolator");
OrientationInterpolator1461.DEF = "Armature_OI_l_carpal_distal_phalanx_3";
OrientationInterpolator1461.key = new MFFloat(new float[0,1]);
OrientationInterpolator1461.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[118] = OrientationInterpolator1461;

OrientationInterpolator OrientationInterpolator1462 = createNode("OrientationInterpolator");
OrientationInterpolator1462.DEF = "Armature_OI_l_hamate";
OrientationInterpolator1462.key = new MFFloat(new float[0,1]);
OrientationInterpolator1462.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[119] = OrientationInterpolator1462;

OrientationInterpolator OrientationInterpolator1463 = createNode("OrientationInterpolator");
OrientationInterpolator1463.DEF = "Armature_OI_l_metacarpal_4";
OrientationInterpolator1463.key = new MFFloat(new float[0,1]);
OrientationInterpolator1463.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[120] = OrientationInterpolator1463;

OrientationInterpolator OrientationInterpolator1464 = createNode("OrientationInterpolator");
OrientationInterpolator1464.DEF = "Armature_OI_l_carpal_proximal_phalanx_4";
OrientationInterpolator1464.key = new MFFloat(new float[0,1]);
OrientationInterpolator1464.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[121] = OrientationInterpolator1464;

OrientationInterpolator OrientationInterpolator1465 = createNode("OrientationInterpolator");
OrientationInterpolator1465.DEF = "Armature_OI_l_carpal_middle_phalanx_4";
OrientationInterpolator1465.key = new MFFloat(new float[0,1]);
OrientationInterpolator1465.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[122] = OrientationInterpolator1465;

OrientationInterpolator OrientationInterpolator1466 = createNode("OrientationInterpolator");
OrientationInterpolator1466.DEF = "Armature_OI_l_carpal_distal_phalanx_4";
OrientationInterpolator1466.key = new MFFloat(new float[0,1]);
OrientationInterpolator1466.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[123] = OrientationInterpolator1466;

OrientationInterpolator OrientationInterpolator1467 = createNode("OrientationInterpolator");
OrientationInterpolator1467.DEF = "Armature_OI_l_metacarpal_5";
OrientationInterpolator1467.key = new MFFloat(new float[0,1]);
OrientationInterpolator1467.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[124] = OrientationInterpolator1467;

OrientationInterpolator OrientationInterpolator1468 = createNode("OrientationInterpolator");
OrientationInterpolator1468.DEF = "Armature_OI_l_carpal_proximal_phalanx_5";
OrientationInterpolator1468.key = new MFFloat(new float[0,1]);
OrientationInterpolator1468.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[125] = OrientationInterpolator1468;

OrientationInterpolator OrientationInterpolator1469 = createNode("OrientationInterpolator");
OrientationInterpolator1469.DEF = "Armature_OI_l_carpal_middle_phalanx_5";
OrientationInterpolator1469.key = new MFFloat(new float[0,1]);
OrientationInterpolator1469.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[126] = OrientationInterpolator1469;

OrientationInterpolator OrientationInterpolator1470 = createNode("OrientationInterpolator");
OrientationInterpolator1470.DEF = "Armature_OI_l_carpal_distal_phalanx_5";
OrientationInterpolator1470.key = new MFFloat(new float[0,1]);
OrientationInterpolator1470.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[127] = OrientationInterpolator1470;

OrientationInterpolator OrientationInterpolator1471 = createNode("OrientationInterpolator");
OrientationInterpolator1471.DEF = "Armature_OI_r_clavicle";
OrientationInterpolator1471.key = new MFFloat(new float[0,1]);
OrientationInterpolator1471.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[128] = OrientationInterpolator1471;

OrientationInterpolator OrientationInterpolator1472 = createNode("OrientationInterpolator");
OrientationInterpolator1472.DEF = "Armature_OI_r_scapula";
OrientationInterpolator1472.key = new MFFloat(new float[0,1]);
OrientationInterpolator1472.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[129] = OrientationInterpolator1472;

OrientationInterpolator OrientationInterpolator1473 = createNode("OrientationInterpolator");
OrientationInterpolator1473.DEF = "Armature_OI_r_upperarm";
OrientationInterpolator1473.key = new MFFloat(new float[0,1]);
OrientationInterpolator1473.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[130] = OrientationInterpolator1473;

OrientationInterpolator OrientationInterpolator1474 = createNode("OrientationInterpolator");
OrientationInterpolator1474.DEF = "Armature_OI_r_forearm";
OrientationInterpolator1474.key = new MFFloat(new float[0,1]);
OrientationInterpolator1474.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[131] = OrientationInterpolator1474;

OrientationInterpolator OrientationInterpolator1475 = createNode("OrientationInterpolator");
OrientationInterpolator1475.DEF = "Armature_OI_r_carpal";
OrientationInterpolator1475.key = new MFFloat(new float[0,1]);
OrientationInterpolator1475.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[132] = OrientationInterpolator1475;

OrientationInterpolator OrientationInterpolator1476 = createNode("OrientationInterpolator");
OrientationInterpolator1476.DEF = "Armature_OI_r_trapezium";
OrientationInterpolator1476.key = new MFFloat(new float[0,1]);
OrientationInterpolator1476.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[133] = OrientationInterpolator1476;

OrientationInterpolator OrientationInterpolator1477 = createNode("OrientationInterpolator");
OrientationInterpolator1477.DEF = "Armature_OI_r_metacarpal_1";
OrientationInterpolator1477.key = new MFFloat(new float[0,1]);
OrientationInterpolator1477.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[134] = OrientationInterpolator1477;

OrientationInterpolator OrientationInterpolator1478 = createNode("OrientationInterpolator");
OrientationInterpolator1478.DEF = "Armature_OI_r_carpal_proximal_phalanx_1";
OrientationInterpolator1478.key = new MFFloat(new float[0,1]);
OrientationInterpolator1478.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[135] = OrientationInterpolator1478;

OrientationInterpolator OrientationInterpolator1479 = createNode("OrientationInterpolator");
OrientationInterpolator1479.DEF = "Armature_OI_r_carpal_distal_phalanx_1";
OrientationInterpolator1479.key = new MFFloat(new float[0,1]);
OrientationInterpolator1479.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[136] = OrientationInterpolator1479;

OrientationInterpolator OrientationInterpolator1480 = createNode("OrientationInterpolator");
OrientationInterpolator1480.DEF = "Armature_OI_r_trapezoid";
OrientationInterpolator1480.key = new MFFloat(new float[0,1]);
OrientationInterpolator1480.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[137] = OrientationInterpolator1480;

OrientationInterpolator OrientationInterpolator1481 = createNode("OrientationInterpolator");
OrientationInterpolator1481.DEF = "Armature_OI_r_metacarpal_2";
OrientationInterpolator1481.key = new MFFloat(new float[0,1]);
OrientationInterpolator1481.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[138] = OrientationInterpolator1481;

OrientationInterpolator OrientationInterpolator1482 = createNode("OrientationInterpolator");
OrientationInterpolator1482.DEF = "Armature_OI_r_carpal_proximal_phalanx_2";
OrientationInterpolator1482.key = new MFFloat(new float[0,1]);
OrientationInterpolator1482.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[139] = OrientationInterpolator1482;

OrientationInterpolator OrientationInterpolator1483 = createNode("OrientationInterpolator");
OrientationInterpolator1483.DEF = "Armature_OI_r_carpal_middle_phalanx_2";
OrientationInterpolator1483.key = new MFFloat(new float[0,1]);
OrientationInterpolator1483.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[140] = OrientationInterpolator1483;

OrientationInterpolator OrientationInterpolator1484 = createNode("OrientationInterpolator");
OrientationInterpolator1484.DEF = "Armature_OI_r_carpal_distal_phalanx_2";
OrientationInterpolator1484.key = new MFFloat(new float[0,1]);
OrientationInterpolator1484.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[141] = OrientationInterpolator1484;

OrientationInterpolator OrientationInterpolator1485 = createNode("OrientationInterpolator");
OrientationInterpolator1485.DEF = "Armature_OI_r_capitate";
OrientationInterpolator1485.key = new MFFloat(new float[0,1]);
OrientationInterpolator1485.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[142] = OrientationInterpolator1485;

OrientationInterpolator OrientationInterpolator1486 = createNode("OrientationInterpolator");
OrientationInterpolator1486.DEF = "Armature_OI_r_metacarpal_3";
OrientationInterpolator1486.key = new MFFloat(new float[0,1]);
OrientationInterpolator1486.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[143] = OrientationInterpolator1486;

OrientationInterpolator OrientationInterpolator1487 = createNode("OrientationInterpolator");
OrientationInterpolator1487.DEF = "Armature_OI_r_carpal_proximal_phalanx_3";
OrientationInterpolator1487.key = new MFFloat(new float[0,1]);
OrientationInterpolator1487.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[144] = OrientationInterpolator1487;

OrientationInterpolator OrientationInterpolator1488 = createNode("OrientationInterpolator");
OrientationInterpolator1488.DEF = "Armature_OI_r_carpal_middle_phalanx_3";
OrientationInterpolator1488.key = new MFFloat(new float[0,1]);
OrientationInterpolator1488.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[145] = OrientationInterpolator1488;

OrientationInterpolator OrientationInterpolator1489 = createNode("OrientationInterpolator");
OrientationInterpolator1489.DEF = "Armature_OI_r_carpal_distal_phalanx_3";
OrientationInterpolator1489.key = new MFFloat(new float[0,1]);
OrientationInterpolator1489.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[146] = OrientationInterpolator1489;

OrientationInterpolator OrientationInterpolator1490 = createNode("OrientationInterpolator");
OrientationInterpolator1490.DEF = "Armature_OI_r_hamate";
OrientationInterpolator1490.key = new MFFloat(new float[0,1]);
OrientationInterpolator1490.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[147] = OrientationInterpolator1490;

OrientationInterpolator OrientationInterpolator1491 = createNode("OrientationInterpolator");
OrientationInterpolator1491.DEF = "Armature_OI_r_metacarpal_4";
OrientationInterpolator1491.key = new MFFloat(new float[0,1]);
OrientationInterpolator1491.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[148] = OrientationInterpolator1491;

OrientationInterpolator OrientationInterpolator1492 = createNode("OrientationInterpolator");
OrientationInterpolator1492.DEF = "Armature_OI_r_carpal_proximal_phalanx_4";
OrientationInterpolator1492.key = new MFFloat(new float[0,1]);
OrientationInterpolator1492.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[149] = OrientationInterpolator1492;

OrientationInterpolator OrientationInterpolator1493 = createNode("OrientationInterpolator");
OrientationInterpolator1493.DEF = "Armature_OI_r_carpal_middle_phalanx_4";
OrientationInterpolator1493.key = new MFFloat(new float[0,1]);
OrientationInterpolator1493.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[150] = OrientationInterpolator1493;

OrientationInterpolator OrientationInterpolator1494 = createNode("OrientationInterpolator");
OrientationInterpolator1494.DEF = "Armature_OI_r_carpal_distal_phalanx_4";
OrientationInterpolator1494.key = new MFFloat(new float[0,1]);
OrientationInterpolator1494.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[151] = OrientationInterpolator1494;

OrientationInterpolator OrientationInterpolator1495 = createNode("OrientationInterpolator");
OrientationInterpolator1495.DEF = "Armature_OI_r_metacarpal_5";
OrientationInterpolator1495.key = new MFFloat(new float[0,1]);
OrientationInterpolator1495.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[152] = OrientationInterpolator1495;

OrientationInterpolator OrientationInterpolator1496 = createNode("OrientationInterpolator");
OrientationInterpolator1496.DEF = "Armature_OI_r_carpal_proximal_phalanx_5";
OrientationInterpolator1496.key = new MFFloat(new float[0,1]);
OrientationInterpolator1496.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[153] = OrientationInterpolator1496;

OrientationInterpolator OrientationInterpolator1497 = createNode("OrientationInterpolator");
OrientationInterpolator1497.DEF = "Armature_OI_r_carpal_middle_phalanx_5";
OrientationInterpolator1497.key = new MFFloat(new float[0,1]);
OrientationInterpolator1497.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[154] = OrientationInterpolator1497;

OrientationInterpolator OrientationInterpolator1498 = createNode("OrientationInterpolator");
OrientationInterpolator1498.DEF = "Armature_OI_r_carpal_distal_phalanx_5";
OrientationInterpolator1498.key = new MFFloat(new float[0,1]);
OrientationInterpolator1498.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
children[155] = OrientationInterpolator1498;

ROUTE ROUTE1499 = createNode("ROUTE");
ROUTE1499.fromField = "fraction_changed";
ROUTE1499.fromNode = "Armature_Clock";
ROUTE1499.toField = "set_fraction";
ROUTE1499.toNode = "Armature_OI_sacrum";
children[156] = ROUTE1499;

ROUTE ROUTE1500 = createNode("ROUTE");
ROUTE1500.fromField = "value_changed";
ROUTE1500.fromNode = "Armature_OI_sacrum";
ROUTE1500.toField = "rotation";
ROUTE1500.toNode = "hanim_sacrum";
children[157] = ROUTE1500;

ROUTE ROUTE1501 = createNode("ROUTE");
ROUTE1501.fromField = "fraction_changed";
ROUTE1501.fromNode = "Armature_Clock";
ROUTE1501.toField = "set_fraction";
ROUTE1501.toNode = "Armature_OI_pelvis";
children[158] = ROUTE1501;

ROUTE ROUTE1502 = createNode("ROUTE");
ROUTE1502.fromField = "value_changed";
ROUTE1502.fromNode = "Armature_OI_pelvis";
ROUTE1502.toField = "rotation";
ROUTE1502.toNode = "hanim_pelvis";
children[159] = ROUTE1502;

ROUTE ROUTE1503 = createNode("ROUTE");
ROUTE1503.fromField = "fraction_changed";
ROUTE1503.fromNode = "Armature_Clock";
ROUTE1503.toField = "set_fraction";
ROUTE1503.toNode = "Armature_OI_l_thigh";
children[160] = ROUTE1503;

ROUTE ROUTE1504 = createNode("ROUTE");
ROUTE1504.fromField = "value_changed";
ROUTE1504.fromNode = "Armature_OI_l_thigh";
ROUTE1504.toField = "rotation";
ROUTE1504.toNode = "hanim_l_thigh";
children[161] = ROUTE1504;

ROUTE ROUTE1505 = createNode("ROUTE");
ROUTE1505.fromField = "fraction_changed";
ROUTE1505.fromNode = "Armature_Clock";
ROUTE1505.toField = "set_fraction";
ROUTE1505.toNode = "Armature_OI_l_calf";
children[162] = ROUTE1505;

ROUTE ROUTE1506 = createNode("ROUTE");
ROUTE1506.fromField = "value_changed";
ROUTE1506.fromNode = "Armature_OI_l_calf";
ROUTE1506.toField = "rotation";
ROUTE1506.toNode = "hanim_l_calf";
children[163] = ROUTE1506;

ROUTE ROUTE1507 = createNode("ROUTE");
ROUTE1507.fromField = "fraction_changed";
ROUTE1507.fromNode = "Armature_Clock";
ROUTE1507.toField = "set_fraction";
ROUTE1507.toNode = "Armature_OI_l_talus";
children[164] = ROUTE1507;

ROUTE ROUTE1508 = createNode("ROUTE");
ROUTE1508.fromField = "value_changed";
ROUTE1508.fromNode = "Armature_OI_l_talus";
ROUTE1508.toField = "rotation";
ROUTE1508.toNode = "hanim_l_talus";
children[165] = ROUTE1508;

ROUTE ROUTE1509 = createNode("ROUTE");
ROUTE1509.fromField = "fraction_changed";
ROUTE1509.fromNode = "Armature_Clock";
ROUTE1509.toField = "set_fraction";
ROUTE1509.toNode = "Armature_OI_l_navicular";
children[166] = ROUTE1509;

ROUTE ROUTE1510 = createNode("ROUTE");
ROUTE1510.fromField = "value_changed";
ROUTE1510.fromNode = "Armature_OI_l_navicular";
ROUTE1510.toField = "rotation";
ROUTE1510.toNode = "hanim_l_navicular";
children[167] = ROUTE1510;

ROUTE ROUTE1511 = createNode("ROUTE");
ROUTE1511.fromField = "fraction_changed";
ROUTE1511.fromNode = "Armature_Clock";
ROUTE1511.toField = "set_fraction";
ROUTE1511.toNode = "Armature_OI_l_cuneiform_1";
children[168] = ROUTE1511;

ROUTE ROUTE1512 = createNode("ROUTE");
ROUTE1512.fromField = "value_changed";
ROUTE1512.fromNode = "Armature_OI_l_cuneiform_1";
ROUTE1512.toField = "rotation";
ROUTE1512.toNode = "hanim_l_cuneiform_1";
children[169] = ROUTE1512;

ROUTE ROUTE1513 = createNode("ROUTE");
ROUTE1513.fromField = "fraction_changed";
ROUTE1513.fromNode = "Armature_Clock";
ROUTE1513.toField = "set_fraction";
ROUTE1513.toNode = "Armature_OI_l_metatarsal_1";
children[170] = ROUTE1513;

ROUTE ROUTE1514 = createNode("ROUTE");
ROUTE1514.fromField = "value_changed";
ROUTE1514.fromNode = "Armature_OI_l_metatarsal_1";
ROUTE1514.toField = "rotation";
ROUTE1514.toNode = "hanim_l_metatarsal_1";
children[171] = ROUTE1514;

ROUTE ROUTE1515 = createNode("ROUTE");
ROUTE1515.fromField = "fraction_changed";
ROUTE1515.fromNode = "Armature_Clock";
ROUTE1515.toField = "set_fraction";
ROUTE1515.toNode = "Armature_OI_l_tarsal_proximal_phalanx_1";
children[172] = ROUTE1515;

ROUTE ROUTE1516 = createNode("ROUTE");
ROUTE1516.fromField = "value_changed";
ROUTE1516.fromNode = "Armature_OI_l_tarsal_proximal_phalanx_1";
ROUTE1516.toField = "rotation";
ROUTE1516.toNode = "hanim_l_tarsal_proximal_phalanx_1";
children[173] = ROUTE1516;

ROUTE ROUTE1517 = createNode("ROUTE");
ROUTE1517.fromField = "fraction_changed";
ROUTE1517.fromNode = "Armature_Clock";
ROUTE1517.toField = "set_fraction";
ROUTE1517.toNode = "Armature_OI_l_tarsal_distal_phalanx_1";
children[174] = ROUTE1517;

ROUTE ROUTE1518 = createNode("ROUTE");
ROUTE1518.fromField = "value_changed";
ROUTE1518.fromNode = "Armature_OI_l_tarsal_distal_phalanx_1";
ROUTE1518.toField = "rotation";
ROUTE1518.toNode = "hanim_l_tarsal_distal_phalanx_1";
children[175] = ROUTE1518;

ROUTE ROUTE1519 = createNode("ROUTE");
ROUTE1519.fromField = "fraction_changed";
ROUTE1519.fromNode = "Armature_Clock";
ROUTE1519.toField = "set_fraction";
ROUTE1519.toNode = "Armature_OI_l_cuneiform_2";
children[176] = ROUTE1519;

ROUTE ROUTE1520 = createNode("ROUTE");
ROUTE1520.fromField = "value_changed";
ROUTE1520.fromNode = "Armature_OI_l_cuneiform_2";
ROUTE1520.toField = "rotation";
ROUTE1520.toNode = "hanim_l_cuneiform_2";
children[177] = ROUTE1520;

ROUTE ROUTE1521 = createNode("ROUTE");
ROUTE1521.fromField = "fraction_changed";
ROUTE1521.fromNode = "Armature_Clock";
ROUTE1521.toField = "set_fraction";
ROUTE1521.toNode = "Armature_OI_l_metatarsal_2";
children[178] = ROUTE1521;

ROUTE ROUTE1522 = createNode("ROUTE");
ROUTE1522.fromField = "value_changed";
ROUTE1522.fromNode = "Armature_OI_l_metatarsal_2";
ROUTE1522.toField = "rotation";
ROUTE1522.toNode = "hanim_l_metatarsal_2";
children[179] = ROUTE1522;

ROUTE ROUTE1523 = createNode("ROUTE");
ROUTE1523.fromField = "fraction_changed";
ROUTE1523.fromNode = "Armature_Clock";
ROUTE1523.toField = "set_fraction";
ROUTE1523.toNode = "Armature_OI_l_tarsal_proximal_phalanx_2";
children[180] = ROUTE1523;

ROUTE ROUTE1524 = createNode("ROUTE");
ROUTE1524.fromField = "value_changed";
ROUTE1524.fromNode = "Armature_OI_l_tarsal_proximal_phalanx_2";
ROUTE1524.toField = "rotation";
ROUTE1524.toNode = "hanim_l_tarsal_proximal_phalanx_2";
children[181] = ROUTE1524;

ROUTE ROUTE1525 = createNode("ROUTE");
ROUTE1525.fromField = "fraction_changed";
ROUTE1525.fromNode = "Armature_Clock";
ROUTE1525.toField = "set_fraction";
ROUTE1525.toNode = "Armature_OI_l_tarsal_middle_phalanx_2";
children[182] = ROUTE1525;

ROUTE ROUTE1526 = createNode("ROUTE");
ROUTE1526.fromField = "value_changed";
ROUTE1526.fromNode = "Armature_OI_l_tarsal_middle_phalanx_2";
ROUTE1526.toField = "rotation";
ROUTE1526.toNode = "hanim_l_tarsal_middle_phalanx_2";
children[183] = ROUTE1526;

ROUTE ROUTE1527 = createNode("ROUTE");
ROUTE1527.fromField = "fraction_changed";
ROUTE1527.fromNode = "Armature_Clock";
ROUTE1527.toField = "set_fraction";
ROUTE1527.toNode = "Armature_OI_l_tarsal_distal_phalanx_2";
children[184] = ROUTE1527;

ROUTE ROUTE1528 = createNode("ROUTE");
ROUTE1528.fromField = "value_changed";
ROUTE1528.fromNode = "Armature_OI_l_tarsal_distal_phalanx_2";
ROUTE1528.toField = "rotation";
ROUTE1528.toNode = "hanim_l_tarsal_distal_phalanx_2";
children[185] = ROUTE1528;

ROUTE ROUTE1529 = createNode("ROUTE");
ROUTE1529.fromField = "fraction_changed";
ROUTE1529.fromNode = "Armature_Clock";
ROUTE1529.toField = "set_fraction";
ROUTE1529.toNode = "Armature_OI_l_cuneiform_3";
children[186] = ROUTE1529;

ROUTE ROUTE1530 = createNode("ROUTE");
ROUTE1530.fromField = "value_changed";
ROUTE1530.fromNode = "Armature_OI_l_cuneiform_3";
ROUTE1530.toField = "rotation";
ROUTE1530.toNode = "hanim_l_cuneiform_3";
children[187] = ROUTE1530;

ROUTE ROUTE1531 = createNode("ROUTE");
ROUTE1531.fromField = "fraction_changed";
ROUTE1531.fromNode = "Armature_Clock";
ROUTE1531.toField = "set_fraction";
ROUTE1531.toNode = "Armature_OI_l_metatarsal_3";
children[188] = ROUTE1531;

ROUTE ROUTE1532 = createNode("ROUTE");
ROUTE1532.fromField = "value_changed";
ROUTE1532.fromNode = "Armature_OI_l_metatarsal_3";
ROUTE1532.toField = "rotation";
ROUTE1532.toNode = "hanim_l_metatarsal_3";
children[189] = ROUTE1532;

ROUTE ROUTE1533 = createNode("ROUTE");
ROUTE1533.fromField = "fraction_changed";
ROUTE1533.fromNode = "Armature_Clock";
ROUTE1533.toField = "set_fraction";
ROUTE1533.toNode = "Armature_OI_l_tarsal_proximal_phalanx_3";
children[190] = ROUTE1533;

ROUTE ROUTE1534 = createNode("ROUTE");
ROUTE1534.fromField = "value_changed";
ROUTE1534.fromNode = "Armature_OI_l_tarsal_proximal_phalanx_3";
ROUTE1534.toField = "rotation";
ROUTE1534.toNode = "hanim_l_tarsal_proximal_phalanx_3";
children[191] = ROUTE1534;

ROUTE ROUTE1535 = createNode("ROUTE");
ROUTE1535.fromField = "fraction_changed";
ROUTE1535.fromNode = "Armature_Clock";
ROUTE1535.toField = "set_fraction";
ROUTE1535.toNode = "Armature_OI_l_tarsal_middle_phalanx_3";
children[192] = ROUTE1535;

ROUTE ROUTE1536 = createNode("ROUTE");
ROUTE1536.fromField = "value_changed";
ROUTE1536.fromNode = "Armature_OI_l_tarsal_middle_phalanx_3";
ROUTE1536.toField = "rotation";
ROUTE1536.toNode = "hanim_l_tarsal_middle_phalanx_3";
children[193] = ROUTE1536;

ROUTE ROUTE1537 = createNode("ROUTE");
ROUTE1537.fromField = "fraction_changed";
ROUTE1537.fromNode = "Armature_Clock";
ROUTE1537.toField = "set_fraction";
ROUTE1537.toNode = "Armature_OI_l_tarsal_distal_phalanx_3";
children[194] = ROUTE1537;

ROUTE ROUTE1538 = createNode("ROUTE");
ROUTE1538.fromField = "value_changed";
ROUTE1538.fromNode = "Armature_OI_l_tarsal_distal_phalanx_3";
ROUTE1538.toField = "rotation";
ROUTE1538.toNode = "hanim_l_tarsal_distal_phalanx_3";
children[195] = ROUTE1538;

ROUTE ROUTE1539 = createNode("ROUTE");
ROUTE1539.fromField = "fraction_changed";
ROUTE1539.fromNode = "Armature_Clock";
ROUTE1539.toField = "set_fraction";
ROUTE1539.toNode = "Armature_OI_l_calcaneus";
children[196] = ROUTE1539;

ROUTE ROUTE1540 = createNode("ROUTE");
ROUTE1540.fromField = "value_changed";
ROUTE1540.fromNode = "Armature_OI_l_calcaneus";
ROUTE1540.toField = "rotation";
ROUTE1540.toNode = "hanim_l_calcaneus";
children[197] = ROUTE1540;

ROUTE ROUTE1541 = createNode("ROUTE");
ROUTE1541.fromField = "fraction_changed";
ROUTE1541.fromNode = "Armature_Clock";
ROUTE1541.toField = "set_fraction";
ROUTE1541.toNode = "Armature_OI_l_cuboid";
children[198] = ROUTE1541;

ROUTE ROUTE1542 = createNode("ROUTE");
ROUTE1542.fromField = "value_changed";
ROUTE1542.fromNode = "Armature_OI_l_cuboid";
ROUTE1542.toField = "rotation";
ROUTE1542.toNode = "hanim_l_cuboid";
children[199] = ROUTE1542;

ROUTE ROUTE1543 = createNode("ROUTE");
ROUTE1543.fromField = "fraction_changed";
ROUTE1543.fromNode = "Armature_Clock";
ROUTE1543.toField = "set_fraction";
ROUTE1543.toNode = "Armature_OI_l_metatarsal_4";
children[200] = ROUTE1543;

ROUTE ROUTE1544 = createNode("ROUTE");
ROUTE1544.fromField = "value_changed";
ROUTE1544.fromNode = "Armature_OI_l_metatarsal_4";
ROUTE1544.toField = "rotation";
ROUTE1544.toNode = "hanim_l_metatarsal_4";
children[201] = ROUTE1544;

ROUTE ROUTE1545 = createNode("ROUTE");
ROUTE1545.fromField = "fraction_changed";
ROUTE1545.fromNode = "Armature_Clock";
ROUTE1545.toField = "set_fraction";
ROUTE1545.toNode = "Armature_OI_l_tarsal_proximal_phalanx_4";
children[202] = ROUTE1545;

ROUTE ROUTE1546 = createNode("ROUTE");
ROUTE1546.fromField = "value_changed";
ROUTE1546.fromNode = "Armature_OI_l_tarsal_proximal_phalanx_4";
ROUTE1546.toField = "rotation";
ROUTE1546.toNode = "hanim_l_tarsal_proximal_phalanx_4";
children[203] = ROUTE1546;

ROUTE ROUTE1547 = createNode("ROUTE");
ROUTE1547.fromField = "fraction_changed";
ROUTE1547.fromNode = "Armature_Clock";
ROUTE1547.toField = "set_fraction";
ROUTE1547.toNode = "Armature_OI_l_tarsal_middle_phalanx_4";
children[204] = ROUTE1547;

ROUTE ROUTE1548 = createNode("ROUTE");
ROUTE1548.fromField = "value_changed";
ROUTE1548.fromNode = "Armature_OI_l_tarsal_middle_phalanx_4";
ROUTE1548.toField = "rotation";
ROUTE1548.toNode = "hanim_l_tarsal_middle_phalanx_4";
children[205] = ROUTE1548;

ROUTE ROUTE1549 = createNode("ROUTE");
ROUTE1549.fromField = "fraction_changed";
ROUTE1549.fromNode = "Armature_Clock";
ROUTE1549.toField = "set_fraction";
ROUTE1549.toNode = "Armature_OI_l_tarsal_distal_phalanx_4";
children[206] = ROUTE1549;

ROUTE ROUTE1550 = createNode("ROUTE");
ROUTE1550.fromField = "value_changed";
ROUTE1550.fromNode = "Armature_OI_l_tarsal_distal_phalanx_4";
ROUTE1550.toField = "rotation";
ROUTE1550.toNode = "hanim_l_tarsal_distal_phalanx_4";
children[207] = ROUTE1550;

ROUTE ROUTE1551 = createNode("ROUTE");
ROUTE1551.fromField = "fraction_changed";
ROUTE1551.fromNode = "Armature_Clock";
ROUTE1551.toField = "set_fraction";
ROUTE1551.toNode = "Armature_OI_l_metatarsal_5";
children[208] = ROUTE1551;

ROUTE ROUTE1552 = createNode("ROUTE");
ROUTE1552.fromField = "value_changed";
ROUTE1552.fromNode = "Armature_OI_l_metatarsal_5";
ROUTE1552.toField = "rotation";
ROUTE1552.toNode = "hanim_l_metatarsal_5";
children[209] = ROUTE1552;

ROUTE ROUTE1553 = createNode("ROUTE");
ROUTE1553.fromField = "fraction_changed";
ROUTE1553.fromNode = "Armature_Clock";
ROUTE1553.toField = "set_fraction";
ROUTE1553.toNode = "Armature_OI_l_tarsal_proximal_phalanx_5";
children[210] = ROUTE1553;

ROUTE ROUTE1554 = createNode("ROUTE");
ROUTE1554.fromField = "value_changed";
ROUTE1554.fromNode = "Armature_OI_l_tarsal_proximal_phalanx_5";
ROUTE1554.toField = "rotation";
ROUTE1554.toNode = "hanim_l_tarsal_proximal_phalanx_5";
children[211] = ROUTE1554;

ROUTE ROUTE1555 = createNode("ROUTE");
ROUTE1555.fromField = "fraction_changed";
ROUTE1555.fromNode = "Armature_Clock";
ROUTE1555.toField = "set_fraction";
ROUTE1555.toNode = "Armature_OI_l_tarsal_middle_phalanx_5";
children[212] = ROUTE1555;

ROUTE ROUTE1556 = createNode("ROUTE");
ROUTE1556.fromField = "value_changed";
ROUTE1556.fromNode = "Armature_OI_l_tarsal_middle_phalanx_5";
ROUTE1556.toField = "rotation";
ROUTE1556.toNode = "hanim_l_tarsal_middle_phalanx_5";
children[213] = ROUTE1556;

ROUTE ROUTE1557 = createNode("ROUTE");
ROUTE1557.fromField = "fraction_changed";
ROUTE1557.fromNode = "Armature_Clock";
ROUTE1557.toField = "set_fraction";
ROUTE1557.toNode = "Armature_OI_l_tarsal_distal_phalanx_5";
children[214] = ROUTE1557;

ROUTE ROUTE1558 = createNode("ROUTE");
ROUTE1558.fromField = "value_changed";
ROUTE1558.fromNode = "Armature_OI_l_tarsal_distal_phalanx_5";
ROUTE1558.toField = "rotation";
ROUTE1558.toNode = "hanim_l_tarsal_distal_phalanx_5";
children[215] = ROUTE1558;

ROUTE ROUTE1559 = createNode("ROUTE");
ROUTE1559.fromField = "fraction_changed";
ROUTE1559.fromNode = "Armature_Clock";
ROUTE1559.toField = "set_fraction";
ROUTE1559.toNode = "Armature_OI_r_thigh";
children[216] = ROUTE1559;

ROUTE ROUTE1560 = createNode("ROUTE");
ROUTE1560.fromField = "value_changed";
ROUTE1560.fromNode = "Armature_OI_r_thigh";
ROUTE1560.toField = "rotation";
ROUTE1560.toNode = "hanim_r_thigh";
children[217] = ROUTE1560;

ROUTE ROUTE1561 = createNode("ROUTE");
ROUTE1561.fromField = "fraction_changed";
ROUTE1561.fromNode = "Armature_Clock";
ROUTE1561.toField = "set_fraction";
ROUTE1561.toNode = "Armature_OI_r_calf";
children[218] = ROUTE1561;

ROUTE ROUTE1562 = createNode("ROUTE");
ROUTE1562.fromField = "value_changed";
ROUTE1562.fromNode = "Armature_OI_r_calf";
ROUTE1562.toField = "rotation";
ROUTE1562.toNode = "hanim_r_calf";
children[219] = ROUTE1562;

ROUTE ROUTE1563 = createNode("ROUTE");
ROUTE1563.fromField = "fraction_changed";
ROUTE1563.fromNode = "Armature_Clock";
ROUTE1563.toField = "set_fraction";
ROUTE1563.toNode = "Armature_OI_r_talus";
children[220] = ROUTE1563;

ROUTE ROUTE1564 = createNode("ROUTE");
ROUTE1564.fromField = "value_changed";
ROUTE1564.fromNode = "Armature_OI_r_talus";
ROUTE1564.toField = "rotation";
ROUTE1564.toNode = "hanim_r_talus";
children[221] = ROUTE1564;

ROUTE ROUTE1565 = createNode("ROUTE");
ROUTE1565.fromField = "fraction_changed";
ROUTE1565.fromNode = "Armature_Clock";
ROUTE1565.toField = "set_fraction";
ROUTE1565.toNode = "Armature_OI_r_navicular";
children[222] = ROUTE1565;

ROUTE ROUTE1566 = createNode("ROUTE");
ROUTE1566.fromField = "value_changed";
ROUTE1566.fromNode = "Armature_OI_r_navicular";
ROUTE1566.toField = "rotation";
ROUTE1566.toNode = "hanim_r_navicular";
children[223] = ROUTE1566;

ROUTE ROUTE1567 = createNode("ROUTE");
ROUTE1567.fromField = "fraction_changed";
ROUTE1567.fromNode = "Armature_Clock";
ROUTE1567.toField = "set_fraction";
ROUTE1567.toNode = "Armature_OI_r_cuneiform_1";
children[224] = ROUTE1567;

ROUTE ROUTE1568 = createNode("ROUTE");
ROUTE1568.fromField = "value_changed";
ROUTE1568.fromNode = "Armature_OI_r_cuneiform_1";
ROUTE1568.toField = "rotation";
ROUTE1568.toNode = "hanim_r_cuneiform_1";
children[225] = ROUTE1568;

ROUTE ROUTE1569 = createNode("ROUTE");
ROUTE1569.fromField = "fraction_changed";
ROUTE1569.fromNode = "Armature_Clock";
ROUTE1569.toField = "set_fraction";
ROUTE1569.toNode = "Armature_OI_r_metatarsal_1";
children[226] = ROUTE1569;

ROUTE ROUTE1570 = createNode("ROUTE");
ROUTE1570.fromField = "value_changed";
ROUTE1570.fromNode = "Armature_OI_r_metatarsal_1";
ROUTE1570.toField = "rotation";
ROUTE1570.toNode = "hanim_r_metatarsal_1";
children[227] = ROUTE1570;

ROUTE ROUTE1571 = createNode("ROUTE");
ROUTE1571.fromField = "fraction_changed";
ROUTE1571.fromNode = "Armature_Clock";
ROUTE1571.toField = "set_fraction";
ROUTE1571.toNode = "Armature_OI_r_tarsal_proximal_phalanx_1";
children[228] = ROUTE1571;

ROUTE ROUTE1572 = createNode("ROUTE");
ROUTE1572.fromField = "value_changed";
ROUTE1572.fromNode = "Armature_OI_r_tarsal_proximal_phalanx_1";
ROUTE1572.toField = "rotation";
ROUTE1572.toNode = "hanim_r_tarsal_proximal_phalanx_1";
children[229] = ROUTE1572;

ROUTE ROUTE1573 = createNode("ROUTE");
ROUTE1573.fromField = "fraction_changed";
ROUTE1573.fromNode = "Armature_Clock";
ROUTE1573.toField = "set_fraction";
ROUTE1573.toNode = "Armature_OI_r_tarsal_distal_phalanx_1";
children[230] = ROUTE1573;

ROUTE ROUTE1574 = createNode("ROUTE");
ROUTE1574.fromField = "value_changed";
ROUTE1574.fromNode = "Armature_OI_r_tarsal_distal_phalanx_1";
ROUTE1574.toField = "rotation";
ROUTE1574.toNode = "hanim_r_tarsal_distal_phalanx_1";
children[231] = ROUTE1574;

ROUTE ROUTE1575 = createNode("ROUTE");
ROUTE1575.fromField = "fraction_changed";
ROUTE1575.fromNode = "Armature_Clock";
ROUTE1575.toField = "set_fraction";
ROUTE1575.toNode = "Armature_OI_r_cuneiform_2";
children[232] = ROUTE1575;

ROUTE ROUTE1576 = createNode("ROUTE");
ROUTE1576.fromField = "value_changed";
ROUTE1576.fromNode = "Armature_OI_r_cuneiform_2";
ROUTE1576.toField = "rotation";
ROUTE1576.toNode = "hanim_r_cuneiform_2";
children[233] = ROUTE1576;

ROUTE ROUTE1577 = createNode("ROUTE");
ROUTE1577.fromField = "fraction_changed";
ROUTE1577.fromNode = "Armature_Clock";
ROUTE1577.toField = "set_fraction";
ROUTE1577.toNode = "Armature_OI_r_metatarsal_2";
children[234] = ROUTE1577;

ROUTE ROUTE1578 = createNode("ROUTE");
ROUTE1578.fromField = "value_changed";
ROUTE1578.fromNode = "Armature_OI_r_metatarsal_2";
ROUTE1578.toField = "rotation";
ROUTE1578.toNode = "hanim_r_metatarsal_2";
children[235] = ROUTE1578;

ROUTE ROUTE1579 = createNode("ROUTE");
ROUTE1579.fromField = "fraction_changed";
ROUTE1579.fromNode = "Armature_Clock";
ROUTE1579.toField = "set_fraction";
ROUTE1579.toNode = "Armature_OI_r_tarsal_proximal_phalanx_2";
children[236] = ROUTE1579;

ROUTE ROUTE1580 = createNode("ROUTE");
ROUTE1580.fromField = "value_changed";
ROUTE1580.fromNode = "Armature_OI_r_tarsal_proximal_phalanx_2";
ROUTE1580.toField = "rotation";
ROUTE1580.toNode = "hanim_r_tarsal_proximal_phalanx_2";
children[237] = ROUTE1580;

ROUTE ROUTE1581 = createNode("ROUTE");
ROUTE1581.fromField = "fraction_changed";
ROUTE1581.fromNode = "Armature_Clock";
ROUTE1581.toField = "set_fraction";
ROUTE1581.toNode = "Armature_OI_r_tarsal_middle_phalanx_2";
children[238] = ROUTE1581;

ROUTE ROUTE1582 = createNode("ROUTE");
ROUTE1582.fromField = "value_changed";
ROUTE1582.fromNode = "Armature_OI_r_tarsal_middle_phalanx_2";
ROUTE1582.toField = "rotation";
ROUTE1582.toNode = "hanim_r_tarsal_middle_phalanx_2";
children[239] = ROUTE1582;

ROUTE ROUTE1583 = createNode("ROUTE");
ROUTE1583.fromField = "fraction_changed";
ROUTE1583.fromNode = "Armature_Clock";
ROUTE1583.toField = "set_fraction";
ROUTE1583.toNode = "Armature_OI_r_tarsal_distal_phalanx_2";
children[240] = ROUTE1583;

ROUTE ROUTE1584 = createNode("ROUTE");
ROUTE1584.fromField = "value_changed";
ROUTE1584.fromNode = "Armature_OI_r_tarsal_distal_phalanx_2";
ROUTE1584.toField = "rotation";
ROUTE1584.toNode = "hanim_r_tarsal_distal_phalanx_2";
children[241] = ROUTE1584;

ROUTE ROUTE1585 = createNode("ROUTE");
ROUTE1585.fromField = "fraction_changed";
ROUTE1585.fromNode = "Armature_Clock";
ROUTE1585.toField = "set_fraction";
ROUTE1585.toNode = "Armature_OI_r_cuneiform_3";
children[242] = ROUTE1585;

ROUTE ROUTE1586 = createNode("ROUTE");
ROUTE1586.fromField = "value_changed";
ROUTE1586.fromNode = "Armature_OI_r_cuneiform_3";
ROUTE1586.toField = "rotation";
ROUTE1586.toNode = "hanim_r_cuneiform_3";
children[243] = ROUTE1586;

ROUTE ROUTE1587 = createNode("ROUTE");
ROUTE1587.fromField = "fraction_changed";
ROUTE1587.fromNode = "Armature_Clock";
ROUTE1587.toField = "set_fraction";
ROUTE1587.toNode = "Armature_OI_r_metatarsal_3";
children[244] = ROUTE1587;

ROUTE ROUTE1588 = createNode("ROUTE");
ROUTE1588.fromField = "value_changed";
ROUTE1588.fromNode = "Armature_OI_r_metatarsal_3";
ROUTE1588.toField = "rotation";
ROUTE1588.toNode = "hanim_r_metatarsal_3";
children[245] = ROUTE1588;

ROUTE ROUTE1589 = createNode("ROUTE");
ROUTE1589.fromField = "fraction_changed";
ROUTE1589.fromNode = "Armature_Clock";
ROUTE1589.toField = "set_fraction";
ROUTE1589.toNode = "Armature_OI_r_tarsal_proximal_phalanx_3";
children[246] = ROUTE1589;

ROUTE ROUTE1590 = createNode("ROUTE");
ROUTE1590.fromField = "value_changed";
ROUTE1590.fromNode = "Armature_OI_r_tarsal_proximal_phalanx_3";
ROUTE1590.toField = "rotation";
ROUTE1590.toNode = "hanim_r_tarsal_proximal_phalanx_3";
children[247] = ROUTE1590;

ROUTE ROUTE1591 = createNode("ROUTE");
ROUTE1591.fromField = "fraction_changed";
ROUTE1591.fromNode = "Armature_Clock";
ROUTE1591.toField = "set_fraction";
ROUTE1591.toNode = "Armature_OI_r_tarsal_middle_phalanx_3";
children[248] = ROUTE1591;

ROUTE ROUTE1592 = createNode("ROUTE");
ROUTE1592.fromField = "value_changed";
ROUTE1592.fromNode = "Armature_OI_r_tarsal_middle_phalanx_3";
ROUTE1592.toField = "rotation";
ROUTE1592.toNode = "hanim_r_tarsal_middle_phalanx_3";
children[249] = ROUTE1592;

ROUTE ROUTE1593 = createNode("ROUTE");
ROUTE1593.fromField = "fraction_changed";
ROUTE1593.fromNode = "Armature_Clock";
ROUTE1593.toField = "set_fraction";
ROUTE1593.toNode = "Armature_OI_r_tarsal_distal_phalanx_3";
children[250] = ROUTE1593;

ROUTE ROUTE1594 = createNode("ROUTE");
ROUTE1594.fromField = "value_changed";
ROUTE1594.fromNode = "Armature_OI_r_tarsal_distal_phalanx_3";
ROUTE1594.toField = "rotation";
ROUTE1594.toNode = "hanim_r_tarsal_distal_phalanx_3";
children[251] = ROUTE1594;

ROUTE ROUTE1595 = createNode("ROUTE");
ROUTE1595.fromField = "fraction_changed";
ROUTE1595.fromNode = "Armature_Clock";
ROUTE1595.toField = "set_fraction";
ROUTE1595.toNode = "Armature_OI_r_calcaneus";
children[252] = ROUTE1595;

ROUTE ROUTE1596 = createNode("ROUTE");
ROUTE1596.fromField = "value_changed";
ROUTE1596.fromNode = "Armature_OI_r_calcaneus";
ROUTE1596.toField = "rotation";
ROUTE1596.toNode = "hanim_r_calcaneus";
children[253] = ROUTE1596;

ROUTE ROUTE1597 = createNode("ROUTE");
ROUTE1597.fromField = "fraction_changed";
ROUTE1597.fromNode = "Armature_Clock";
ROUTE1597.toField = "set_fraction";
ROUTE1597.toNode = "Armature_OI_r_cuboid";
children[254] = ROUTE1597;

ROUTE ROUTE1598 = createNode("ROUTE");
ROUTE1598.fromField = "value_changed";
ROUTE1598.fromNode = "Armature_OI_r_cuboid";
ROUTE1598.toField = "rotation";
ROUTE1598.toNode = "hanim_r_cuboid";
children[255] = ROUTE1598;

ROUTE ROUTE1599 = createNode("ROUTE");
ROUTE1599.fromField = "fraction_changed";
ROUTE1599.fromNode = "Armature_Clock";
ROUTE1599.toField = "set_fraction";
ROUTE1599.toNode = "Armature_OI_r_metatarsal_4";
children[256] = ROUTE1599;

ROUTE ROUTE1600 = createNode("ROUTE");
ROUTE1600.fromField = "value_changed";
ROUTE1600.fromNode = "Armature_OI_r_metatarsal_4";
ROUTE1600.toField = "rotation";
ROUTE1600.toNode = "hanim_r_metatarsal_4";
children[257] = ROUTE1600;

ROUTE ROUTE1601 = createNode("ROUTE");
ROUTE1601.fromField = "fraction_changed";
ROUTE1601.fromNode = "Armature_Clock";
ROUTE1601.toField = "set_fraction";
ROUTE1601.toNode = "Armature_OI_r_tarsal_proximal_phalanx_4";
children[258] = ROUTE1601;

ROUTE ROUTE1602 = createNode("ROUTE");
ROUTE1602.fromField = "value_changed";
ROUTE1602.fromNode = "Armature_OI_r_tarsal_proximal_phalanx_4";
ROUTE1602.toField = "rotation";
ROUTE1602.toNode = "hanim_r_tarsal_proximal_phalanx_4";
children[259] = ROUTE1602;

ROUTE ROUTE1603 = createNode("ROUTE");
ROUTE1603.fromField = "fraction_changed";
ROUTE1603.fromNode = "Armature_Clock";
ROUTE1603.toField = "set_fraction";
ROUTE1603.toNode = "Armature_OI_r_tarsal_middle_phalanx_4";
children[260] = ROUTE1603;

ROUTE ROUTE1604 = createNode("ROUTE");
ROUTE1604.fromField = "value_changed";
ROUTE1604.fromNode = "Armature_OI_r_tarsal_middle_phalanx_4";
ROUTE1604.toField = "rotation";
ROUTE1604.toNode = "hanim_r_tarsal_middle_phalanx_4";
children[261] = ROUTE1604;

ROUTE ROUTE1605 = createNode("ROUTE");
ROUTE1605.fromField = "fraction_changed";
ROUTE1605.fromNode = "Armature_Clock";
ROUTE1605.toField = "set_fraction";
ROUTE1605.toNode = "Armature_OI_r_tarsal_distal_phalanx_4";
children[262] = ROUTE1605;

ROUTE ROUTE1606 = createNode("ROUTE");
ROUTE1606.fromField = "value_changed";
ROUTE1606.fromNode = "Armature_OI_r_tarsal_distal_phalanx_4";
ROUTE1606.toField = "rotation";
ROUTE1606.toNode = "hanim_r_tarsal_distal_phalanx_4";
children[263] = ROUTE1606;

ROUTE ROUTE1607 = createNode("ROUTE");
ROUTE1607.fromField = "fraction_changed";
ROUTE1607.fromNode = "Armature_Clock";
ROUTE1607.toField = "set_fraction";
ROUTE1607.toNode = "Armature_OI_r_metatarsal_5";
children[264] = ROUTE1607;

ROUTE ROUTE1608 = createNode("ROUTE");
ROUTE1608.fromField = "value_changed";
ROUTE1608.fromNode = "Armature_OI_r_metatarsal_5";
ROUTE1608.toField = "rotation";
ROUTE1608.toNode = "hanim_r_metatarsal_5";
children[265] = ROUTE1608;

ROUTE ROUTE1609 = createNode("ROUTE");
ROUTE1609.fromField = "fraction_changed";
ROUTE1609.fromNode = "Armature_Clock";
ROUTE1609.toField = "set_fraction";
ROUTE1609.toNode = "Armature_OI_r_tarsal_proximal_phalanx_5";
children[266] = ROUTE1609;

ROUTE ROUTE1610 = createNode("ROUTE");
ROUTE1610.fromField = "value_changed";
ROUTE1610.fromNode = "Armature_OI_r_tarsal_proximal_phalanx_5";
ROUTE1610.toField = "rotation";
ROUTE1610.toNode = "hanim_r_tarsal_proximal_phalanx_5";
children[267] = ROUTE1610;

ROUTE ROUTE1611 = createNode("ROUTE");
ROUTE1611.fromField = "fraction_changed";
ROUTE1611.fromNode = "Armature_Clock";
ROUTE1611.toField = "set_fraction";
ROUTE1611.toNode = "Armature_OI_r_tarsal_middle_phalanx_5";
children[268] = ROUTE1611;

ROUTE ROUTE1612 = createNode("ROUTE");
ROUTE1612.fromField = "value_changed";
ROUTE1612.fromNode = "Armature_OI_r_tarsal_middle_phalanx_5";
ROUTE1612.toField = "rotation";
ROUTE1612.toNode = "hanim_r_tarsal_middle_phalanx_5";
children[269] = ROUTE1612;

ROUTE ROUTE1613 = createNode("ROUTE");
ROUTE1613.fromField = "fraction_changed";
ROUTE1613.fromNode = "Armature_Clock";
ROUTE1613.toField = "set_fraction";
ROUTE1613.toNode = "Armature_OI_r_tarsal_distal_phalanx_5";
children[270] = ROUTE1613;

ROUTE ROUTE1614 = createNode("ROUTE");
ROUTE1614.fromField = "value_changed";
ROUTE1614.fromNode = "Armature_OI_r_tarsal_distal_phalanx_5";
ROUTE1614.toField = "rotation";
ROUTE1614.toNode = "hanim_r_tarsal_distal_phalanx_5";
children[271] = ROUTE1614;

ROUTE ROUTE1615 = createNode("ROUTE");
ROUTE1615.fromField = "fraction_changed";
ROUTE1615.fromNode = "Armature_Clock";
ROUTE1615.toField = "set_fraction";
ROUTE1615.toNode = "Armature_OI_l5";
children[272] = ROUTE1615;

ROUTE ROUTE1616 = createNode("ROUTE");
ROUTE1616.fromField = "value_changed";
ROUTE1616.fromNode = "Armature_OI_l5";
ROUTE1616.toField = "rotation";
ROUTE1616.toNode = "hanim_l5";
children[273] = ROUTE1616;

ROUTE ROUTE1617 = createNode("ROUTE");
ROUTE1617.fromField = "fraction_changed";
ROUTE1617.fromNode = "Armature_Clock";
ROUTE1617.toField = "set_fraction";
ROUTE1617.toNode = "Armature_OI_l4";
children[274] = ROUTE1617;

ROUTE ROUTE1618 = createNode("ROUTE");
ROUTE1618.fromField = "value_changed";
ROUTE1618.fromNode = "Armature_OI_l4";
ROUTE1618.toField = "rotation";
ROUTE1618.toNode = "hanim_l4";
children[275] = ROUTE1618;

ROUTE ROUTE1619 = createNode("ROUTE");
ROUTE1619.fromField = "fraction_changed";
ROUTE1619.fromNode = "Armature_Clock";
ROUTE1619.toField = "set_fraction";
ROUTE1619.toNode = "Armature_OI_l3";
children[276] = ROUTE1619;

ROUTE ROUTE1620 = createNode("ROUTE");
ROUTE1620.fromField = "value_changed";
ROUTE1620.fromNode = "Armature_OI_l3";
ROUTE1620.toField = "rotation";
ROUTE1620.toNode = "hanim_l3";
children[277] = ROUTE1620;

ROUTE ROUTE1621 = createNode("ROUTE");
ROUTE1621.fromField = "fraction_changed";
ROUTE1621.fromNode = "Armature_Clock";
ROUTE1621.toField = "set_fraction";
ROUTE1621.toNode = "Armature_OI_l2";
children[278] = ROUTE1621;

ROUTE ROUTE1622 = createNode("ROUTE");
ROUTE1622.fromField = "value_changed";
ROUTE1622.fromNode = "Armature_OI_l2";
ROUTE1622.toField = "rotation";
ROUTE1622.toNode = "hanim_l2";
children[279] = ROUTE1622;

ROUTE ROUTE1623 = createNode("ROUTE");
ROUTE1623.fromField = "fraction_changed";
ROUTE1623.fromNode = "Armature_Clock";
ROUTE1623.toField = "set_fraction";
ROUTE1623.toNode = "Armature_OI_l1";
children[280] = ROUTE1623;

ROUTE ROUTE1624 = createNode("ROUTE");
ROUTE1624.fromField = "value_changed";
ROUTE1624.fromNode = "Armature_OI_l1";
ROUTE1624.toField = "rotation";
ROUTE1624.toNode = "hanim_l1";
children[281] = ROUTE1624;

ROUTE ROUTE1625 = createNode("ROUTE");
ROUTE1625.fromField = "fraction_changed";
ROUTE1625.fromNode = "Armature_Clock";
ROUTE1625.toField = "set_fraction";
ROUTE1625.toNode = "Armature_OI_t12";
children[282] = ROUTE1625;

ROUTE ROUTE1626 = createNode("ROUTE");
ROUTE1626.fromField = "value_changed";
ROUTE1626.fromNode = "Armature_OI_t12";
ROUTE1626.toField = "rotation";
ROUTE1626.toNode = "hanim_t12";
children[283] = ROUTE1626;

ROUTE ROUTE1627 = createNode("ROUTE");
ROUTE1627.fromField = "fraction_changed";
ROUTE1627.fromNode = "Armature_Clock";
ROUTE1627.toField = "set_fraction";
ROUTE1627.toNode = "Armature_OI_t11";
children[284] = ROUTE1627;

ROUTE ROUTE1628 = createNode("ROUTE");
ROUTE1628.fromField = "value_changed";
ROUTE1628.fromNode = "Armature_OI_t11";
ROUTE1628.toField = "rotation";
ROUTE1628.toNode = "hanim_t11";
children[285] = ROUTE1628;

ROUTE ROUTE1629 = createNode("ROUTE");
ROUTE1629.fromField = "fraction_changed";
ROUTE1629.fromNode = "Armature_Clock";
ROUTE1629.toField = "set_fraction";
ROUTE1629.toNode = "Armature_OI_t10";
children[286] = ROUTE1629;

ROUTE ROUTE1630 = createNode("ROUTE");
ROUTE1630.fromField = "value_changed";
ROUTE1630.fromNode = "Armature_OI_t10";
ROUTE1630.toField = "rotation";
ROUTE1630.toNode = "hanim_t10";
children[287] = ROUTE1630;

ROUTE ROUTE1631 = createNode("ROUTE");
ROUTE1631.fromField = "fraction_changed";
ROUTE1631.fromNode = "Armature_Clock";
ROUTE1631.toField = "set_fraction";
ROUTE1631.toNode = "Armature_OI_t9";
children[288] = ROUTE1631;

ROUTE ROUTE1632 = createNode("ROUTE");
ROUTE1632.fromField = "value_changed";
ROUTE1632.fromNode = "Armature_OI_t9";
ROUTE1632.toField = "rotation";
ROUTE1632.toNode = "hanim_t9";
children[289] = ROUTE1632;

ROUTE ROUTE1633 = createNode("ROUTE");
ROUTE1633.fromField = "fraction_changed";
ROUTE1633.fromNode = "Armature_Clock";
ROUTE1633.toField = "set_fraction";
ROUTE1633.toNode = "Armature_OI_t8";
children[290] = ROUTE1633;

ROUTE ROUTE1634 = createNode("ROUTE");
ROUTE1634.fromField = "value_changed";
ROUTE1634.fromNode = "Armature_OI_t8";
ROUTE1634.toField = "rotation";
ROUTE1634.toNode = "hanim_t8";
children[291] = ROUTE1634;

ROUTE ROUTE1635 = createNode("ROUTE");
ROUTE1635.fromField = "fraction_changed";
ROUTE1635.fromNode = "Armature_Clock";
ROUTE1635.toField = "set_fraction";
ROUTE1635.toNode = "Armature_OI_t7";
children[292] = ROUTE1635;

ROUTE ROUTE1636 = createNode("ROUTE");
ROUTE1636.fromField = "value_changed";
ROUTE1636.fromNode = "Armature_OI_t7";
ROUTE1636.toField = "rotation";
ROUTE1636.toNode = "hanim_t7";
children[293] = ROUTE1636;

ROUTE ROUTE1637 = createNode("ROUTE");
ROUTE1637.fromField = "fraction_changed";
ROUTE1637.fromNode = "Armature_Clock";
ROUTE1637.toField = "set_fraction";
ROUTE1637.toNode = "Armature_OI_t6";
children[294] = ROUTE1637;

ROUTE ROUTE1638 = createNode("ROUTE");
ROUTE1638.fromField = "value_changed";
ROUTE1638.fromNode = "Armature_OI_t6";
ROUTE1638.toField = "rotation";
ROUTE1638.toNode = "hanim_t6";
children[295] = ROUTE1638;

ROUTE ROUTE1639 = createNode("ROUTE");
ROUTE1639.fromField = "fraction_changed";
ROUTE1639.fromNode = "Armature_Clock";
ROUTE1639.toField = "set_fraction";
ROUTE1639.toNode = "Armature_OI_t5";
children[296] = ROUTE1639;

ROUTE ROUTE1640 = createNode("ROUTE");
ROUTE1640.fromField = "value_changed";
ROUTE1640.fromNode = "Armature_OI_t5";
ROUTE1640.toField = "rotation";
ROUTE1640.toNode = "hanim_t5";
children[297] = ROUTE1640;

ROUTE ROUTE1641 = createNode("ROUTE");
ROUTE1641.fromField = "fraction_changed";
ROUTE1641.fromNode = "Armature_Clock";
ROUTE1641.toField = "set_fraction";
ROUTE1641.toNode = "Armature_OI_t4";
children[298] = ROUTE1641;

ROUTE ROUTE1642 = createNode("ROUTE");
ROUTE1642.fromField = "value_changed";
ROUTE1642.fromNode = "Armature_OI_t4";
ROUTE1642.toField = "rotation";
ROUTE1642.toNode = "hanim_t4";
children[299] = ROUTE1642;

ROUTE ROUTE1643 = createNode("ROUTE");
ROUTE1643.fromField = "fraction_changed";
ROUTE1643.fromNode = "Armature_Clock";
ROUTE1643.toField = "set_fraction";
ROUTE1643.toNode = "Armature_OI_t3";
children[300] = ROUTE1643;

ROUTE ROUTE1644 = createNode("ROUTE");
ROUTE1644.fromField = "value_changed";
ROUTE1644.fromNode = "Armature_OI_t3";
ROUTE1644.toField = "rotation";
ROUTE1644.toNode = "hanim_t3";
children[301] = ROUTE1644;

ROUTE ROUTE1645 = createNode("ROUTE");
ROUTE1645.fromField = "fraction_changed";
ROUTE1645.fromNode = "Armature_Clock";
ROUTE1645.toField = "set_fraction";
ROUTE1645.toNode = "Armature_OI_t2";
children[302] = ROUTE1645;

ROUTE ROUTE1646 = createNode("ROUTE");
ROUTE1646.fromField = "value_changed";
ROUTE1646.fromNode = "Armature_OI_t2";
ROUTE1646.toField = "rotation";
ROUTE1646.toNode = "hanim_t2";
children[303] = ROUTE1646;

ROUTE ROUTE1647 = createNode("ROUTE");
ROUTE1647.fromField = "fraction_changed";
ROUTE1647.fromNode = "Armature_Clock";
ROUTE1647.toField = "set_fraction";
ROUTE1647.toNode = "Armature_OI_t1";
children[304] = ROUTE1647;

ROUTE ROUTE1648 = createNode("ROUTE");
ROUTE1648.fromField = "value_changed";
ROUTE1648.fromNode = "Armature_OI_t1";
ROUTE1648.toField = "rotation";
ROUTE1648.toNode = "hanim_t1";
children[305] = ROUTE1648;

ROUTE ROUTE1649 = createNode("ROUTE");
ROUTE1649.fromField = "fraction_changed";
ROUTE1649.fromNode = "Armature_Clock";
ROUTE1649.toField = "set_fraction";
ROUTE1649.toNode = "Armature_OI_c7";
children[306] = ROUTE1649;

ROUTE ROUTE1650 = createNode("ROUTE");
ROUTE1650.fromField = "value_changed";
ROUTE1650.fromNode = "Armature_OI_c7";
ROUTE1650.toField = "rotation";
ROUTE1650.toNode = "hanim_c7";
children[307] = ROUTE1650;

ROUTE ROUTE1651 = createNode("ROUTE");
ROUTE1651.fromField = "fraction_changed";
ROUTE1651.fromNode = "Armature_Clock";
ROUTE1651.toField = "set_fraction";
ROUTE1651.toNode = "Armature_OI_c6";
children[308] = ROUTE1651;

ROUTE ROUTE1652 = createNode("ROUTE");
ROUTE1652.fromField = "value_changed";
ROUTE1652.fromNode = "Armature_OI_c6";
ROUTE1652.toField = "rotation";
ROUTE1652.toNode = "hanim_c6";
children[309] = ROUTE1652;

ROUTE ROUTE1653 = createNode("ROUTE");
ROUTE1653.fromField = "fraction_changed";
ROUTE1653.fromNode = "Armature_Clock";
ROUTE1653.toField = "set_fraction";
ROUTE1653.toNode = "Armature_OI_c5";
children[310] = ROUTE1653;

ROUTE ROUTE1654 = createNode("ROUTE");
ROUTE1654.fromField = "value_changed";
ROUTE1654.fromNode = "Armature_OI_c5";
ROUTE1654.toField = "rotation";
ROUTE1654.toNode = "hanim_c5";
children[311] = ROUTE1654;

ROUTE ROUTE1655 = createNode("ROUTE");
ROUTE1655.fromField = "fraction_changed";
ROUTE1655.fromNode = "Armature_Clock";
ROUTE1655.toField = "set_fraction";
ROUTE1655.toNode = "Armature_OI_c4";
children[312] = ROUTE1655;

ROUTE ROUTE1656 = createNode("ROUTE");
ROUTE1656.fromField = "value_changed";
ROUTE1656.fromNode = "Armature_OI_c4";
ROUTE1656.toField = "rotation";
ROUTE1656.toNode = "hanim_c4";
children[313] = ROUTE1656;

ROUTE ROUTE1657 = createNode("ROUTE");
ROUTE1657.fromField = "fraction_changed";
ROUTE1657.fromNode = "Armature_Clock";
ROUTE1657.toField = "set_fraction";
ROUTE1657.toNode = "Armature_OI_c3";
children[314] = ROUTE1657;

ROUTE ROUTE1658 = createNode("ROUTE");
ROUTE1658.fromField = "value_changed";
ROUTE1658.fromNode = "Armature_OI_c3";
ROUTE1658.toField = "rotation";
ROUTE1658.toNode = "hanim_c3";
children[315] = ROUTE1658;

ROUTE ROUTE1659 = createNode("ROUTE");
ROUTE1659.fromField = "fraction_changed";
ROUTE1659.fromNode = "Armature_Clock";
ROUTE1659.toField = "set_fraction";
ROUTE1659.toNode = "Armature_OI_c2";
children[316] = ROUTE1659;

ROUTE ROUTE1660 = createNode("ROUTE");
ROUTE1660.fromField = "value_changed";
ROUTE1660.fromNode = "Armature_OI_c2";
ROUTE1660.toField = "rotation";
ROUTE1660.toNode = "hanim_c2";
children[317] = ROUTE1660;

ROUTE ROUTE1661 = createNode("ROUTE");
ROUTE1661.fromField = "fraction_changed";
ROUTE1661.fromNode = "Armature_Clock";
ROUTE1661.toField = "set_fraction";
ROUTE1661.toNode = "Armature_OI_c1";
children[318] = ROUTE1661;

ROUTE ROUTE1662 = createNode("ROUTE");
ROUTE1662.fromField = "value_changed";
ROUTE1662.fromNode = "Armature_OI_c1";
ROUTE1662.toField = "rotation";
ROUTE1662.toNode = "hanim_c1";
children[319] = ROUTE1662;

ROUTE ROUTE1663 = createNode("ROUTE");
ROUTE1663.fromField = "fraction_changed";
ROUTE1663.fromNode = "Armature_Clock";
ROUTE1663.toField = "set_fraction";
ROUTE1663.toNode = "Armature_OI_skull";
children[320] = ROUTE1663;

ROUTE ROUTE1664 = createNode("ROUTE");
ROUTE1664.fromField = "value_changed";
ROUTE1664.fromNode = "Armature_OI_skull";
ROUTE1664.toField = "rotation";
ROUTE1664.toNode = "hanim_skull";
children[321] = ROUTE1664;

ROUTE ROUTE1665 = createNode("ROUTE");
ROUTE1665.fromField = "fraction_changed";
ROUTE1665.fromNode = "Armature_Clock";
ROUTE1665.toField = "set_fraction";
ROUTE1665.toNode = "Armature_OI_l_eyelid";
children[322] = ROUTE1665;

ROUTE ROUTE1666 = createNode("ROUTE");
ROUTE1666.fromField = "value_changed";
ROUTE1666.fromNode = "Armature_OI_l_eyelid";
ROUTE1666.toField = "rotation";
ROUTE1666.toNode = "hanim_l_eyelid";
children[323] = ROUTE1666;

ROUTE ROUTE1667 = createNode("ROUTE");
ROUTE1667.fromField = "fraction_changed";
ROUTE1667.fromNode = "Armature_Clock";
ROUTE1667.toField = "set_fraction";
ROUTE1667.toNode = "Armature_OI_r_eyelid";
children[324] = ROUTE1667;

ROUTE ROUTE1668 = createNode("ROUTE");
ROUTE1668.fromField = "value_changed";
ROUTE1668.fromNode = "Armature_OI_r_eyelid";
ROUTE1668.toField = "rotation";
ROUTE1668.toNode = "hanim_r_eyelid";
children[325] = ROUTE1668;

ROUTE ROUTE1669 = createNode("ROUTE");
ROUTE1669.fromField = "fraction_changed";
ROUTE1669.fromNode = "Armature_Clock";
ROUTE1669.toField = "set_fraction";
ROUTE1669.toNode = "Armature_OI_l_eyeball";
children[326] = ROUTE1669;

ROUTE ROUTE1670 = createNode("ROUTE");
ROUTE1670.fromField = "value_changed";
ROUTE1670.fromNode = "Armature_OI_l_eyeball";
ROUTE1670.toField = "rotation";
ROUTE1670.toNode = "hanim_l_eyeball";
children[327] = ROUTE1670;

ROUTE ROUTE1671 = createNode("ROUTE");
ROUTE1671.fromField = "fraction_changed";
ROUTE1671.fromNode = "Armature_Clock";
ROUTE1671.toField = "set_fraction";
ROUTE1671.toNode = "Armature_OI_r_eyeball";
children[328] = ROUTE1671;

ROUTE ROUTE1672 = createNode("ROUTE");
ROUTE1672.fromField = "value_changed";
ROUTE1672.fromNode = "Armature_OI_r_eyeball";
ROUTE1672.toField = "rotation";
ROUTE1672.toNode = "hanim_r_eyeball";
children[329] = ROUTE1672;

ROUTE ROUTE1673 = createNode("ROUTE");
ROUTE1673.fromField = "fraction_changed";
ROUTE1673.fromNode = "Armature_Clock";
ROUTE1673.toField = "set_fraction";
ROUTE1673.toNode = "Armature_OI_l_eyebrow";
children[330] = ROUTE1673;

ROUTE ROUTE1674 = createNode("ROUTE");
ROUTE1674.fromField = "value_changed";
ROUTE1674.fromNode = "Armature_OI_l_eyebrow";
ROUTE1674.toField = "rotation";
ROUTE1674.toNode = "hanim_l_eyebrow";
children[331] = ROUTE1674;

ROUTE ROUTE1675 = createNode("ROUTE");
ROUTE1675.fromField = "fraction_changed";
ROUTE1675.fromNode = "Armature_Clock";
ROUTE1675.toField = "set_fraction";
ROUTE1675.toNode = "Armature_OI_r_eyebrow";
children[332] = ROUTE1675;

ROUTE ROUTE1676 = createNode("ROUTE");
ROUTE1676.fromField = "value_changed";
ROUTE1676.fromNode = "Armature_OI_r_eyebrow";
ROUTE1676.toField = "rotation";
ROUTE1676.toNode = "hanim_r_eyebrow";
children[333] = ROUTE1676;

ROUTE ROUTE1677 = createNode("ROUTE");
ROUTE1677.fromField = "fraction_changed";
ROUTE1677.fromNode = "Armature_Clock";
ROUTE1677.toField = "set_fraction";
ROUTE1677.toNode = "Armature_OI_jaw";
children[334] = ROUTE1677;

ROUTE ROUTE1678 = createNode("ROUTE");
ROUTE1678.fromField = "value_changed";
ROUTE1678.fromNode = "Armature_OI_jaw";
ROUTE1678.toField = "rotation";
ROUTE1678.toNode = "hanim_jaw";
children[335] = ROUTE1678;

ROUTE ROUTE1679 = createNode("ROUTE");
ROUTE1679.fromField = "fraction_changed";
ROUTE1679.fromNode = "Armature_Clock";
ROUTE1679.toField = "set_fraction";
ROUTE1679.toNode = "Armature_OI_l_clavicle";
children[336] = ROUTE1679;

ROUTE ROUTE1680 = createNode("ROUTE");
ROUTE1680.fromField = "value_changed";
ROUTE1680.fromNode = "Armature_OI_l_clavicle";
ROUTE1680.toField = "rotation";
ROUTE1680.toNode = "hanim_l_clavicle";
children[337] = ROUTE1680;

ROUTE ROUTE1681 = createNode("ROUTE");
ROUTE1681.fromField = "fraction_changed";
ROUTE1681.fromNode = "Armature_Clock";
ROUTE1681.toField = "set_fraction";
ROUTE1681.toNode = "Armature_OI_l_scapula";
children[338] = ROUTE1681;

ROUTE ROUTE1682 = createNode("ROUTE");
ROUTE1682.fromField = "value_changed";
ROUTE1682.fromNode = "Armature_OI_l_scapula";
ROUTE1682.toField = "rotation";
ROUTE1682.toNode = "hanim_l_scapula";
children[339] = ROUTE1682;

ROUTE ROUTE1683 = createNode("ROUTE");
ROUTE1683.fromField = "fraction_changed";
ROUTE1683.fromNode = "Armature_Clock";
ROUTE1683.toField = "set_fraction";
ROUTE1683.toNode = "Armature_OI_l_upperarm";
children[340] = ROUTE1683;

ROUTE ROUTE1684 = createNode("ROUTE");
ROUTE1684.fromField = "value_changed";
ROUTE1684.fromNode = "Armature_OI_l_upperarm";
ROUTE1684.toField = "rotation";
ROUTE1684.toNode = "hanim_l_upperarm";
children[341] = ROUTE1684;

ROUTE ROUTE1685 = createNode("ROUTE");
ROUTE1685.fromField = "fraction_changed";
ROUTE1685.fromNode = "Armature_Clock";
ROUTE1685.toField = "set_fraction";
ROUTE1685.toNode = "Armature_OI_l_forearm";
children[342] = ROUTE1685;

ROUTE ROUTE1686 = createNode("ROUTE");
ROUTE1686.fromField = "value_changed";
ROUTE1686.fromNode = "Armature_OI_l_forearm";
ROUTE1686.toField = "rotation";
ROUTE1686.toNode = "hanim_l_forearm";
children[343] = ROUTE1686;

ROUTE ROUTE1687 = createNode("ROUTE");
ROUTE1687.fromField = "fraction_changed";
ROUTE1687.fromNode = "Armature_Clock";
ROUTE1687.toField = "set_fraction";
ROUTE1687.toNode = "Armature_OI_l_carpal";
children[344] = ROUTE1687;

ROUTE ROUTE1688 = createNode("ROUTE");
ROUTE1688.fromField = "value_changed";
ROUTE1688.fromNode = "Armature_OI_l_carpal";
ROUTE1688.toField = "rotation";
ROUTE1688.toNode = "hanim_l_carpal";
children[345] = ROUTE1688;

ROUTE ROUTE1689 = createNode("ROUTE");
ROUTE1689.fromField = "fraction_changed";
ROUTE1689.fromNode = "Armature_Clock";
ROUTE1689.toField = "set_fraction";
ROUTE1689.toNode = "Armature_OI_l_trapezium";
children[346] = ROUTE1689;

ROUTE ROUTE1690 = createNode("ROUTE");
ROUTE1690.fromField = "value_changed";
ROUTE1690.fromNode = "Armature_OI_l_trapezium";
ROUTE1690.toField = "rotation";
ROUTE1690.toNode = "hanim_l_trapezium";
children[347] = ROUTE1690;

ROUTE ROUTE1691 = createNode("ROUTE");
ROUTE1691.fromField = "fraction_changed";
ROUTE1691.fromNode = "Armature_Clock";
ROUTE1691.toField = "set_fraction";
ROUTE1691.toNode = "Armature_OI_l_metacarpal_1";
children[348] = ROUTE1691;

ROUTE ROUTE1692 = createNode("ROUTE");
ROUTE1692.fromField = "value_changed";
ROUTE1692.fromNode = "Armature_OI_l_metacarpal_1";
ROUTE1692.toField = "rotation";
ROUTE1692.toNode = "hanim_l_metacarpal_1";
children[349] = ROUTE1692;

ROUTE ROUTE1693 = createNode("ROUTE");
ROUTE1693.fromField = "fraction_changed";
ROUTE1693.fromNode = "Armature_Clock";
ROUTE1693.toField = "set_fraction";
ROUTE1693.toNode = "Armature_OI_l_carpal_proximal_phalanx_1";
children[350] = ROUTE1693;

ROUTE ROUTE1694 = createNode("ROUTE");
ROUTE1694.fromField = "value_changed";
ROUTE1694.fromNode = "Armature_OI_l_carpal_proximal_phalanx_1";
ROUTE1694.toField = "rotation";
ROUTE1694.toNode = "hanim_l_carpal_proximal_phalanx_1";
children[351] = ROUTE1694;

ROUTE ROUTE1695 = createNode("ROUTE");
ROUTE1695.fromField = "fraction_changed";
ROUTE1695.fromNode = "Armature_Clock";
ROUTE1695.toField = "set_fraction";
ROUTE1695.toNode = "Armature_OI_l_carpal_distal_phalanx_1";
children[352] = ROUTE1695;

ROUTE ROUTE1696 = createNode("ROUTE");
ROUTE1696.fromField = "value_changed";
ROUTE1696.fromNode = "Armature_OI_l_carpal_distal_phalanx_1";
ROUTE1696.toField = "rotation";
ROUTE1696.toNode = "hanim_l_carpal_distal_phalanx_1";
children[353] = ROUTE1696;

ROUTE ROUTE1697 = createNode("ROUTE");
ROUTE1697.fromField = "fraction_changed";
ROUTE1697.fromNode = "Armature_Clock";
ROUTE1697.toField = "set_fraction";
ROUTE1697.toNode = "Armature_OI_l_trapezoid";
children[354] = ROUTE1697;

ROUTE ROUTE1698 = createNode("ROUTE");
ROUTE1698.fromField = "value_changed";
ROUTE1698.fromNode = "Armature_OI_l_trapezoid";
ROUTE1698.toField = "rotation";
ROUTE1698.toNode = "hanim_l_trapezoid";
children[355] = ROUTE1698;

ROUTE ROUTE1699 = createNode("ROUTE");
ROUTE1699.fromField = "fraction_changed";
ROUTE1699.fromNode = "Armature_Clock";
ROUTE1699.toField = "set_fraction";
ROUTE1699.toNode = "Armature_OI_l_metacarpal_2";
children[356] = ROUTE1699;

ROUTE ROUTE1700 = createNode("ROUTE");
ROUTE1700.fromField = "value_changed";
ROUTE1700.fromNode = "Armature_OI_l_metacarpal_2";
ROUTE1700.toField = "rotation";
ROUTE1700.toNode = "hanim_l_metacarpal_2";
children[357] = ROUTE1700;

ROUTE ROUTE1701 = createNode("ROUTE");
ROUTE1701.fromField = "fraction_changed";
ROUTE1701.fromNode = "Armature_Clock";
ROUTE1701.toField = "set_fraction";
ROUTE1701.toNode = "Armature_OI_l_carpal_proximal_phalanx_2";
children[358] = ROUTE1701;

ROUTE ROUTE1702 = createNode("ROUTE");
ROUTE1702.fromField = "value_changed";
ROUTE1702.fromNode = "Armature_OI_l_carpal_proximal_phalanx_2";
ROUTE1702.toField = "rotation";
ROUTE1702.toNode = "hanim_l_carpal_proximal_phalanx_2";
children[359] = ROUTE1702;

ROUTE ROUTE1703 = createNode("ROUTE");
ROUTE1703.fromField = "fraction_changed";
ROUTE1703.fromNode = "Armature_Clock";
ROUTE1703.toField = "set_fraction";
ROUTE1703.toNode = "Armature_OI_l_carpal_middle_phalanx_2";
children[360] = ROUTE1703;

ROUTE ROUTE1704 = createNode("ROUTE");
ROUTE1704.fromField = "value_changed";
ROUTE1704.fromNode = "Armature_OI_l_carpal_middle_phalanx_2";
ROUTE1704.toField = "rotation";
ROUTE1704.toNode = "hanim_l_carpal_middle_phalanx_2";
children[361] = ROUTE1704;

ROUTE ROUTE1705 = createNode("ROUTE");
ROUTE1705.fromField = "fraction_changed";
ROUTE1705.fromNode = "Armature_Clock";
ROUTE1705.toField = "set_fraction";
ROUTE1705.toNode = "Armature_OI_l_carpal_distal_phalanx_2";
children[362] = ROUTE1705;

ROUTE ROUTE1706 = createNode("ROUTE");
ROUTE1706.fromField = "value_changed";
ROUTE1706.fromNode = "Armature_OI_l_carpal_distal_phalanx_2";
ROUTE1706.toField = "rotation";
ROUTE1706.toNode = "hanim_l_carpal_distal_phalanx_2";
children[363] = ROUTE1706;

ROUTE ROUTE1707 = createNode("ROUTE");
ROUTE1707.fromField = "fraction_changed";
ROUTE1707.fromNode = "Armature_Clock";
ROUTE1707.toField = "set_fraction";
ROUTE1707.toNode = "Armature_OI_l_capitate";
children[364] = ROUTE1707;

ROUTE ROUTE1708 = createNode("ROUTE");
ROUTE1708.fromField = "value_changed";
ROUTE1708.fromNode = "Armature_OI_l_capitate";
ROUTE1708.toField = "rotation";
ROUTE1708.toNode = "hanim_l_capitate";
children[365] = ROUTE1708;

ROUTE ROUTE1709 = createNode("ROUTE");
ROUTE1709.fromField = "fraction_changed";
ROUTE1709.fromNode = "Armature_Clock";
ROUTE1709.toField = "set_fraction";
ROUTE1709.toNode = "Armature_OI_l_metacarpal_3";
children[366] = ROUTE1709;

ROUTE ROUTE1710 = createNode("ROUTE");
ROUTE1710.fromField = "value_changed";
ROUTE1710.fromNode = "Armature_OI_l_metacarpal_3";
ROUTE1710.toField = "rotation";
ROUTE1710.toNode = "hanim_l_metacarpal_3";
children[367] = ROUTE1710;

ROUTE ROUTE1711 = createNode("ROUTE");
ROUTE1711.fromField = "fraction_changed";
ROUTE1711.fromNode = "Armature_Clock";
ROUTE1711.toField = "set_fraction";
ROUTE1711.toNode = "Armature_OI_l_carpal_proximal_phalanx_3";
children[368] = ROUTE1711;

ROUTE ROUTE1712 = createNode("ROUTE");
ROUTE1712.fromField = "value_changed";
ROUTE1712.fromNode = "Armature_OI_l_carpal_proximal_phalanx_3";
ROUTE1712.toField = "rotation";
ROUTE1712.toNode = "hanim_l_carpal_proximal_phalanx_3";
children[369] = ROUTE1712;

ROUTE ROUTE1713 = createNode("ROUTE");
ROUTE1713.fromField = "fraction_changed";
ROUTE1713.fromNode = "Armature_Clock";
ROUTE1713.toField = "set_fraction";
ROUTE1713.toNode = "Armature_OI_l_carpal_middle_phalanx_3";
children[370] = ROUTE1713;

ROUTE ROUTE1714 = createNode("ROUTE");
ROUTE1714.fromField = "value_changed";
ROUTE1714.fromNode = "Armature_OI_l_carpal_middle_phalanx_3";
ROUTE1714.toField = "rotation";
ROUTE1714.toNode = "hanim_l_carpal_middle_phalanx_3";
children[371] = ROUTE1714;

ROUTE ROUTE1715 = createNode("ROUTE");
ROUTE1715.fromField = "fraction_changed";
ROUTE1715.fromNode = "Armature_Clock";
ROUTE1715.toField = "set_fraction";
ROUTE1715.toNode = "Armature_OI_l_carpal_distal_phalanx_3";
children[372] = ROUTE1715;

ROUTE ROUTE1716 = createNode("ROUTE");
ROUTE1716.fromField = "value_changed";
ROUTE1716.fromNode = "Armature_OI_l_carpal_distal_phalanx_3";
ROUTE1716.toField = "rotation";
ROUTE1716.toNode = "hanim_l_carpal_distal_phalanx_3";
children[373] = ROUTE1716;

ROUTE ROUTE1717 = createNode("ROUTE");
ROUTE1717.fromField = "fraction_changed";
ROUTE1717.fromNode = "Armature_Clock";
ROUTE1717.toField = "set_fraction";
ROUTE1717.toNode = "Armature_OI_l_hamate";
children[374] = ROUTE1717;

ROUTE ROUTE1718 = createNode("ROUTE");
ROUTE1718.fromField = "value_changed";
ROUTE1718.fromNode = "Armature_OI_l_hamate";
ROUTE1718.toField = "rotation";
ROUTE1718.toNode = "hanim_l_hamate";
children[375] = ROUTE1718;

ROUTE ROUTE1719 = createNode("ROUTE");
ROUTE1719.fromField = "fraction_changed";
ROUTE1719.fromNode = "Armature_Clock";
ROUTE1719.toField = "set_fraction";
ROUTE1719.toNode = "Armature_OI_l_metacarpal_4";
children[376] = ROUTE1719;

ROUTE ROUTE1720 = createNode("ROUTE");
ROUTE1720.fromField = "value_changed";
ROUTE1720.fromNode = "Armature_OI_l_metacarpal_4";
ROUTE1720.toField = "rotation";
ROUTE1720.toNode = "hanim_l_metacarpal_4";
children[377] = ROUTE1720;

ROUTE ROUTE1721 = createNode("ROUTE");
ROUTE1721.fromField = "fraction_changed";
ROUTE1721.fromNode = "Armature_Clock";
ROUTE1721.toField = "set_fraction";
ROUTE1721.toNode = "Armature_OI_l_carpal_proximal_phalanx_4";
children[378] = ROUTE1721;

ROUTE ROUTE1722 = createNode("ROUTE");
ROUTE1722.fromField = "value_changed";
ROUTE1722.fromNode = "Armature_OI_l_carpal_proximal_phalanx_4";
ROUTE1722.toField = "rotation";
ROUTE1722.toNode = "hanim_l_carpal_proximal_phalanx_4";
children[379] = ROUTE1722;

ROUTE ROUTE1723 = createNode("ROUTE");
ROUTE1723.fromField = "fraction_changed";
ROUTE1723.fromNode = "Armature_Clock";
ROUTE1723.toField = "set_fraction";
ROUTE1723.toNode = "Armature_OI_l_carpal_middle_phalanx_4";
children[380] = ROUTE1723;

ROUTE ROUTE1724 = createNode("ROUTE");
ROUTE1724.fromField = "value_changed";
ROUTE1724.fromNode = "Armature_OI_l_carpal_middle_phalanx_4";
ROUTE1724.toField = "rotation";
ROUTE1724.toNode = "hanim_l_carpal_middle_phalanx_4";
children[381] = ROUTE1724;

ROUTE ROUTE1725 = createNode("ROUTE");
ROUTE1725.fromField = "fraction_changed";
ROUTE1725.fromNode = "Armature_Clock";
ROUTE1725.toField = "set_fraction";
ROUTE1725.toNode = "Armature_OI_l_carpal_distal_phalanx_4";
children[382] = ROUTE1725;

ROUTE ROUTE1726 = createNode("ROUTE");
ROUTE1726.fromField = "value_changed";
ROUTE1726.fromNode = "Armature_OI_l_carpal_distal_phalanx_4";
ROUTE1726.toField = "rotation";
ROUTE1726.toNode = "hanim_l_carpal_distal_phalanx_4";
children[383] = ROUTE1726;

ROUTE ROUTE1727 = createNode("ROUTE");
ROUTE1727.fromField = "fraction_changed";
ROUTE1727.fromNode = "Armature_Clock";
ROUTE1727.toField = "set_fraction";
ROUTE1727.toNode = "Armature_OI_l_metacarpal_5";
children[384] = ROUTE1727;

ROUTE ROUTE1728 = createNode("ROUTE");
ROUTE1728.fromField = "value_changed";
ROUTE1728.fromNode = "Armature_OI_l_metacarpal_5";
ROUTE1728.toField = "rotation";
ROUTE1728.toNode = "hanim_l_metacarpal_5";
children[385] = ROUTE1728;

ROUTE ROUTE1729 = createNode("ROUTE");
ROUTE1729.fromField = "fraction_changed";
ROUTE1729.fromNode = "Armature_Clock";
ROUTE1729.toField = "set_fraction";
ROUTE1729.toNode = "Armature_OI_l_carpal_proximal_phalanx_5";
children[386] = ROUTE1729;

ROUTE ROUTE1730 = createNode("ROUTE");
ROUTE1730.fromField = "value_changed";
ROUTE1730.fromNode = "Armature_OI_l_carpal_proximal_phalanx_5";
ROUTE1730.toField = "rotation";
ROUTE1730.toNode = "hanim_l_carpal_proximal_phalanx_5";
children[387] = ROUTE1730;

ROUTE ROUTE1731 = createNode("ROUTE");
ROUTE1731.fromField = "fraction_changed";
ROUTE1731.fromNode = "Armature_Clock";
ROUTE1731.toField = "set_fraction";
ROUTE1731.toNode = "Armature_OI_l_carpal_middle_phalanx_5";
children[388] = ROUTE1731;

ROUTE ROUTE1732 = createNode("ROUTE");
ROUTE1732.fromField = "value_changed";
ROUTE1732.fromNode = "Armature_OI_l_carpal_middle_phalanx_5";
ROUTE1732.toField = "rotation";
ROUTE1732.toNode = "hanim_l_carpal_middle_phalanx_5";
children[389] = ROUTE1732;

ROUTE ROUTE1733 = createNode("ROUTE");
ROUTE1733.fromField = "fraction_changed";
ROUTE1733.fromNode = "Armature_Clock";
ROUTE1733.toField = "set_fraction";
ROUTE1733.toNode = "Armature_OI_l_carpal_distal_phalanx_5";
children[390] = ROUTE1733;

ROUTE ROUTE1734 = createNode("ROUTE");
ROUTE1734.fromField = "value_changed";
ROUTE1734.fromNode = "Armature_OI_l_carpal_distal_phalanx_5";
ROUTE1734.toField = "rotation";
ROUTE1734.toNode = "hanim_l_carpal_distal_phalanx_5";
children[391] = ROUTE1734;

ROUTE ROUTE1735 = createNode("ROUTE");
ROUTE1735.fromField = "fraction_changed";
ROUTE1735.fromNode = "Armature_Clock";
ROUTE1735.toField = "set_fraction";
ROUTE1735.toNode = "Armature_OI_r_clavicle";
children[392] = ROUTE1735;

ROUTE ROUTE1736 = createNode("ROUTE");
ROUTE1736.fromField = "value_changed";
ROUTE1736.fromNode = "Armature_OI_r_clavicle";
ROUTE1736.toField = "rotation";
ROUTE1736.toNode = "hanim_r_clavicle";
children[393] = ROUTE1736;

ROUTE ROUTE1737 = createNode("ROUTE");
ROUTE1737.fromField = "fraction_changed";
ROUTE1737.fromNode = "Armature_Clock";
ROUTE1737.toField = "set_fraction";
ROUTE1737.toNode = "Armature_OI_r_scapula";
children[394] = ROUTE1737;

ROUTE ROUTE1738 = createNode("ROUTE");
ROUTE1738.fromField = "value_changed";
ROUTE1738.fromNode = "Armature_OI_r_scapula";
ROUTE1738.toField = "rotation";
ROUTE1738.toNode = "hanim_r_scapula";
children[395] = ROUTE1738;

ROUTE ROUTE1739 = createNode("ROUTE");
ROUTE1739.fromField = "fraction_changed";
ROUTE1739.fromNode = "Armature_Clock";
ROUTE1739.toField = "set_fraction";
ROUTE1739.toNode = "Armature_OI_r_upperarm";
children[396] = ROUTE1739;

ROUTE ROUTE1740 = createNode("ROUTE");
ROUTE1740.fromField = "value_changed";
ROUTE1740.fromNode = "Armature_OI_r_upperarm";
ROUTE1740.toField = "rotation";
ROUTE1740.toNode = "hanim_r_upperarm";
children[397] = ROUTE1740;

ROUTE ROUTE1741 = createNode("ROUTE");
ROUTE1741.fromField = "fraction_changed";
ROUTE1741.fromNode = "Armature_Clock";
ROUTE1741.toField = "set_fraction";
ROUTE1741.toNode = "Armature_OI_r_forearm";
children[398] = ROUTE1741;

ROUTE ROUTE1742 = createNode("ROUTE");
ROUTE1742.fromField = "value_changed";
ROUTE1742.fromNode = "Armature_OI_r_forearm";
ROUTE1742.toField = "rotation";
ROUTE1742.toNode = "hanim_r_forearm";
children[399] = ROUTE1742;

ROUTE ROUTE1743 = createNode("ROUTE");
ROUTE1743.fromField = "fraction_changed";
ROUTE1743.fromNode = "Armature_Clock";
ROUTE1743.toField = "set_fraction";
ROUTE1743.toNode = "Armature_OI_r_carpal";
children[400] = ROUTE1743;

ROUTE ROUTE1744 = createNode("ROUTE");
ROUTE1744.fromField = "value_changed";
ROUTE1744.fromNode = "Armature_OI_r_carpal";
ROUTE1744.toField = "rotation";
ROUTE1744.toNode = "hanim_r_carpal";
children[401] = ROUTE1744;

ROUTE ROUTE1745 = createNode("ROUTE");
ROUTE1745.fromField = "fraction_changed";
ROUTE1745.fromNode = "Armature_Clock";
ROUTE1745.toField = "set_fraction";
ROUTE1745.toNode = "Armature_OI_r_trapezium";
children[402] = ROUTE1745;

ROUTE ROUTE1746 = createNode("ROUTE");
ROUTE1746.fromField = "value_changed";
ROUTE1746.fromNode = "Armature_OI_r_trapezium";
ROUTE1746.toField = "rotation";
ROUTE1746.toNode = "hanim_r_trapezium";
children[403] = ROUTE1746;

ROUTE ROUTE1747 = createNode("ROUTE");
ROUTE1747.fromField = "fraction_changed";
ROUTE1747.fromNode = "Armature_Clock";
ROUTE1747.toField = "set_fraction";
ROUTE1747.toNode = "Armature_OI_r_metacarpal_1";
children[404] = ROUTE1747;

ROUTE ROUTE1748 = createNode("ROUTE");
ROUTE1748.fromField = "value_changed";
ROUTE1748.fromNode = "Armature_OI_r_metacarpal_1";
ROUTE1748.toField = "rotation";
ROUTE1748.toNode = "hanim_r_metacarpal_1";
children[405] = ROUTE1748;

ROUTE ROUTE1749 = createNode("ROUTE");
ROUTE1749.fromField = "fraction_changed";
ROUTE1749.fromNode = "Armature_Clock";
ROUTE1749.toField = "set_fraction";
ROUTE1749.toNode = "Armature_OI_r_carpal_proximal_phalanx_1";
children[406] = ROUTE1749;

ROUTE ROUTE1750 = createNode("ROUTE");
ROUTE1750.fromField = "value_changed";
ROUTE1750.fromNode = "Armature_OI_r_carpal_proximal_phalanx_1";
ROUTE1750.toField = "rotation";
ROUTE1750.toNode = "hanim_r_carpal_proximal_phalanx_1";
children[407] = ROUTE1750;

ROUTE ROUTE1751 = createNode("ROUTE");
ROUTE1751.fromField = "fraction_changed";
ROUTE1751.fromNode = "Armature_Clock";
ROUTE1751.toField = "set_fraction";
ROUTE1751.toNode = "Armature_OI_r_carpal_distal_phalanx_1";
children[408] = ROUTE1751;

ROUTE ROUTE1752 = createNode("ROUTE");
ROUTE1752.fromField = "value_changed";
ROUTE1752.fromNode = "Armature_OI_r_carpal_distal_phalanx_1";
ROUTE1752.toField = "rotation";
ROUTE1752.toNode = "hanim_r_carpal_distal_phalanx_1";
children[409] = ROUTE1752;

ROUTE ROUTE1753 = createNode("ROUTE");
ROUTE1753.fromField = "fraction_changed";
ROUTE1753.fromNode = "Armature_Clock";
ROUTE1753.toField = "set_fraction";
ROUTE1753.toNode = "Armature_OI_r_trapezoid";
children[410] = ROUTE1753;

ROUTE ROUTE1754 = createNode("ROUTE");
ROUTE1754.fromField = "value_changed";
ROUTE1754.fromNode = "Armature_OI_r_trapezoid";
ROUTE1754.toField = "rotation";
ROUTE1754.toNode = "hanim_r_trapezoid";
children[411] = ROUTE1754;

ROUTE ROUTE1755 = createNode("ROUTE");
ROUTE1755.fromField = "fraction_changed";
ROUTE1755.fromNode = "Armature_Clock";
ROUTE1755.toField = "set_fraction";
ROUTE1755.toNode = "Armature_OI_r_metacarpal_2";
children[412] = ROUTE1755;

ROUTE ROUTE1756 = createNode("ROUTE");
ROUTE1756.fromField = "value_changed";
ROUTE1756.fromNode = "Armature_OI_r_metacarpal_2";
ROUTE1756.toField = "rotation";
ROUTE1756.toNode = "hanim_r_metacarpal_2";
children[413] = ROUTE1756;

ROUTE ROUTE1757 = createNode("ROUTE");
ROUTE1757.fromField = "fraction_changed";
ROUTE1757.fromNode = "Armature_Clock";
ROUTE1757.toField = "set_fraction";
ROUTE1757.toNode = "Armature_OI_r_carpal_proximal_phalanx_2";
children[414] = ROUTE1757;

ROUTE ROUTE1758 = createNode("ROUTE");
ROUTE1758.fromField = "value_changed";
ROUTE1758.fromNode = "Armature_OI_r_carpal_proximal_phalanx_2";
ROUTE1758.toField = "rotation";
ROUTE1758.toNode = "hanim_r_carpal_proximal_phalanx_2";
children[415] = ROUTE1758;

ROUTE ROUTE1759 = createNode("ROUTE");
ROUTE1759.fromField = "fraction_changed";
ROUTE1759.fromNode = "Armature_Clock";
ROUTE1759.toField = "set_fraction";
ROUTE1759.toNode = "Armature_OI_r_carpal_middle_phalanx_2";
children[416] = ROUTE1759;

ROUTE ROUTE1760 = createNode("ROUTE");
ROUTE1760.fromField = "value_changed";
ROUTE1760.fromNode = "Armature_OI_r_carpal_middle_phalanx_2";
ROUTE1760.toField = "rotation";
ROUTE1760.toNode = "hanim_r_carpal_middle_phalanx_2";
children[417] = ROUTE1760;

ROUTE ROUTE1761 = createNode("ROUTE");
ROUTE1761.fromField = "fraction_changed";
ROUTE1761.fromNode = "Armature_Clock";
ROUTE1761.toField = "set_fraction";
ROUTE1761.toNode = "Armature_OI_r_carpal_distal_phalanx_2";
children[418] = ROUTE1761;

ROUTE ROUTE1762 = createNode("ROUTE");
ROUTE1762.fromField = "value_changed";
ROUTE1762.fromNode = "Armature_OI_r_carpal_distal_phalanx_2";
ROUTE1762.toField = "rotation";
ROUTE1762.toNode = "hanim_r_carpal_distal_phalanx_2";
children[419] = ROUTE1762;

ROUTE ROUTE1763 = createNode("ROUTE");
ROUTE1763.fromField = "fraction_changed";
ROUTE1763.fromNode = "Armature_Clock";
ROUTE1763.toField = "set_fraction";
ROUTE1763.toNode = "Armature_OI_r_capitate";
children[420] = ROUTE1763;

ROUTE ROUTE1764 = createNode("ROUTE");
ROUTE1764.fromField = "value_changed";
ROUTE1764.fromNode = "Armature_OI_r_capitate";
ROUTE1764.toField = "rotation";
ROUTE1764.toNode = "hanim_r_capitate";
children[421] = ROUTE1764;

ROUTE ROUTE1765 = createNode("ROUTE");
ROUTE1765.fromField = "fraction_changed";
ROUTE1765.fromNode = "Armature_Clock";
ROUTE1765.toField = "set_fraction";
ROUTE1765.toNode = "Armature_OI_r_metacarpal_3";
children[422] = ROUTE1765;

ROUTE ROUTE1766 = createNode("ROUTE");
ROUTE1766.fromField = "value_changed";
ROUTE1766.fromNode = "Armature_OI_r_metacarpal_3";
ROUTE1766.toField = "rotation";
ROUTE1766.toNode = "hanim_r_metacarpal_3";
children[423] = ROUTE1766;

ROUTE ROUTE1767 = createNode("ROUTE");
ROUTE1767.fromField = "fraction_changed";
ROUTE1767.fromNode = "Armature_Clock";
ROUTE1767.toField = "set_fraction";
ROUTE1767.toNode = "Armature_OI_r_carpal_proximal_phalanx_3";
children[424] = ROUTE1767;

ROUTE ROUTE1768 = createNode("ROUTE");
ROUTE1768.fromField = "value_changed";
ROUTE1768.fromNode = "Armature_OI_r_carpal_proximal_phalanx_3";
ROUTE1768.toField = "rotation";
ROUTE1768.toNode = "hanim_r_carpal_proximal_phalanx_3";
children[425] = ROUTE1768;

ROUTE ROUTE1769 = createNode("ROUTE");
ROUTE1769.fromField = "fraction_changed";
ROUTE1769.fromNode = "Armature_Clock";
ROUTE1769.toField = "set_fraction";
ROUTE1769.toNode = "Armature_OI_r_carpal_middle_phalanx_3";
children[426] = ROUTE1769;

ROUTE ROUTE1770 = createNode("ROUTE");
ROUTE1770.fromField = "value_changed";
ROUTE1770.fromNode = "Armature_OI_r_carpal_middle_phalanx_3";
ROUTE1770.toField = "rotation";
ROUTE1770.toNode = "hanim_r_carpal_middle_phalanx_3";
children[427] = ROUTE1770;

ROUTE ROUTE1771 = createNode("ROUTE");
ROUTE1771.fromField = "fraction_changed";
ROUTE1771.fromNode = "Armature_Clock";
ROUTE1771.toField = "set_fraction";
ROUTE1771.toNode = "Armature_OI_r_carpal_distal_phalanx_3";
children[428] = ROUTE1771;

ROUTE ROUTE1772 = createNode("ROUTE");
ROUTE1772.fromField = "value_changed";
ROUTE1772.fromNode = "Armature_OI_r_carpal_distal_phalanx_3";
ROUTE1772.toField = "rotation";
ROUTE1772.toNode = "hanim_r_carpal_distal_phalanx_3";
children[429] = ROUTE1772;

ROUTE ROUTE1773 = createNode("ROUTE");
ROUTE1773.fromField = "fraction_changed";
ROUTE1773.fromNode = "Armature_Clock";
ROUTE1773.toField = "set_fraction";
ROUTE1773.toNode = "Armature_OI_r_hamate";
children[430] = ROUTE1773;

ROUTE ROUTE1774 = createNode("ROUTE");
ROUTE1774.fromField = "value_changed";
ROUTE1774.fromNode = "Armature_OI_r_hamate";
ROUTE1774.toField = "rotation";
ROUTE1774.toNode = "hanim_r_hamate";
children[431] = ROUTE1774;

ROUTE ROUTE1775 = createNode("ROUTE");
ROUTE1775.fromField = "fraction_changed";
ROUTE1775.fromNode = "Armature_Clock";
ROUTE1775.toField = "set_fraction";
ROUTE1775.toNode = "Armature_OI_r_metacarpal_4";
children[432] = ROUTE1775;

ROUTE ROUTE1776 = createNode("ROUTE");
ROUTE1776.fromField = "value_changed";
ROUTE1776.fromNode = "Armature_OI_r_metacarpal_4";
ROUTE1776.toField = "rotation";
ROUTE1776.toNode = "hanim_r_metacarpal_4";
children[433] = ROUTE1776;

ROUTE ROUTE1777 = createNode("ROUTE");
ROUTE1777.fromField = "fraction_changed";
ROUTE1777.fromNode = "Armature_Clock";
ROUTE1777.toField = "set_fraction";
ROUTE1777.toNode = "Armature_OI_r_carpal_proximal_phalanx_4";
children[434] = ROUTE1777;

ROUTE ROUTE1778 = createNode("ROUTE");
ROUTE1778.fromField = "value_changed";
ROUTE1778.fromNode = "Armature_OI_r_carpal_proximal_phalanx_4";
ROUTE1778.toField = "rotation";
ROUTE1778.toNode = "hanim_r_carpal_proximal_phalanx_4";
children[435] = ROUTE1778;

ROUTE ROUTE1779 = createNode("ROUTE");
ROUTE1779.fromField = "fraction_changed";
ROUTE1779.fromNode = "Armature_Clock";
ROUTE1779.toField = "set_fraction";
ROUTE1779.toNode = "Armature_OI_r_carpal_middle_phalanx_4";
children[436] = ROUTE1779;

ROUTE ROUTE1780 = createNode("ROUTE");
ROUTE1780.fromField = "value_changed";
ROUTE1780.fromNode = "Armature_OI_r_carpal_middle_phalanx_4";
ROUTE1780.toField = "rotation";
ROUTE1780.toNode = "hanim_r_carpal_middle_phalanx_4";
children[437] = ROUTE1780;

ROUTE ROUTE1781 = createNode("ROUTE");
ROUTE1781.fromField = "fraction_changed";
ROUTE1781.fromNode = "Armature_Clock";
ROUTE1781.toField = "set_fraction";
ROUTE1781.toNode = "Armature_OI_r_carpal_distal_phalanx_4";
children[438] = ROUTE1781;

ROUTE ROUTE1782 = createNode("ROUTE");
ROUTE1782.fromField = "value_changed";
ROUTE1782.fromNode = "Armature_OI_r_carpal_distal_phalanx_4";
ROUTE1782.toField = "rotation";
ROUTE1782.toNode = "hanim_r_carpal_distal_phalanx_4";
children[439] = ROUTE1782;

ROUTE ROUTE1783 = createNode("ROUTE");
ROUTE1783.fromField = "fraction_changed";
ROUTE1783.fromNode = "Armature_Clock";
ROUTE1783.toField = "set_fraction";
ROUTE1783.toNode = "Armature_OI_r_metacarpal_5";
children[440] = ROUTE1783;

ROUTE ROUTE1784 = createNode("ROUTE");
ROUTE1784.fromField = "value_changed";
ROUTE1784.fromNode = "Armature_OI_r_metacarpal_5";
ROUTE1784.toField = "rotation";
ROUTE1784.toNode = "hanim_r_metacarpal_5";
children[441] = ROUTE1784;

ROUTE ROUTE1785 = createNode("ROUTE");
ROUTE1785.fromField = "fraction_changed";
ROUTE1785.fromNode = "Armature_Clock";
ROUTE1785.toField = "set_fraction";
ROUTE1785.toNode = "Armature_OI_r_carpal_proximal_phalanx_5";
children[442] = ROUTE1785;

ROUTE ROUTE1786 = createNode("ROUTE");
ROUTE1786.fromField = "value_changed";
ROUTE1786.fromNode = "Armature_OI_r_carpal_proximal_phalanx_5";
ROUTE1786.toField = "rotation";
ROUTE1786.toNode = "hanim_r_carpal_proximal_phalanx_5";
children[443] = ROUTE1786;

ROUTE ROUTE1787 = createNode("ROUTE");
ROUTE1787.fromField = "fraction_changed";
ROUTE1787.fromNode = "Armature_Clock";
ROUTE1787.toField = "set_fraction";
ROUTE1787.toNode = "Armature_OI_r_carpal_middle_phalanx_5";
children[444] = ROUTE1787;

ROUTE ROUTE1788 = createNode("ROUTE");
ROUTE1788.fromField = "value_changed";
ROUTE1788.fromNode = "Armature_OI_r_carpal_middle_phalanx_5";
ROUTE1788.toField = "rotation";
ROUTE1788.toNode = "hanim_r_carpal_middle_phalanx_5";
children[445] = ROUTE1788;

ROUTE ROUTE1789 = createNode("ROUTE");
ROUTE1789.fromField = "fraction_changed";
ROUTE1789.fromNode = "Armature_Clock";
ROUTE1789.toField = "set_fraction";
ROUTE1789.toNode = "Armature_OI_r_carpal_distal_phalanx_5";
children[446] = ROUTE1789;

ROUTE ROUTE1790 = createNode("ROUTE");
ROUTE1790.fromField = "value_changed";
ROUTE1790.fromNode = "Armature_OI_r_carpal_distal_phalanx_5";
ROUTE1790.toField = "rotation";
ROUTE1790.toNode = "hanim_r_carpal_distal_phalanx_5";
children[447] = ROUTE1790;

}
