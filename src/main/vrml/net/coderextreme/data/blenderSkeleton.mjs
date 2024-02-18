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

let unit3 = browser.currentScene.createNode("unit");
unit3.name = "METERS";
unit3.category = "length";
head1.unit[1] = unit3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "filename";
meta4.content = "blenderSkeleton.x3d";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "copyright";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "reference";
meta6.content = "http://www.web3D.org";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "generator";
meta7.content = "Blender 4.0.1";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "exporter";
meta8.content = "io_scene_x3dv";
head1.meta[6] = meta8;

head = head1;

let NavigationInfo10 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo10;

let Background11 = browser.currentScene.createNode("Background");
Background11.DEF = "WO_World";
Background11.groundColor = new MFColor(new float[0.05087608844041824,0.05087608844041824,0.05087608844041824]);
Background11.skyColor = new MFColor(new float[0.05087608844041824,0.05087608844041824,0.05087608844041824]);
browser.currentScene.children[1] = Background11;

let Transform12 = browser.currentScene.createNode("Transform");
let Shape13 = browser.currentScene.createNode("Shape");
Shape13.DEF = "SiteShape";
let Box14 = browser.currentScene.createNode("Box");
Box14.size = new SFVec3f(new float[0.05,0.05,0.05]);
Shape13.geometry = Box14;

let Appearance15 = browser.currentScene.createNode("Appearance");
let Material16 = browser.currentScene.createNode("Material");
Material16.diffuseColor = new SFColor(new float[0,0,1]);
Appearance15.material = Material16;

Shape13.appearance = Appearance15;

Transform12.child = new undefined();

Transform12.child[0] = Shape13;

browser.currentScene.children[2] = Transform12;

let Transform17 = browser.currentScene.createNode("Transform");
let Shape18 = browser.currentScene.createNode("Shape");
Shape18.DEF = "JointShape";
let Sphere19 = browser.currentScene.createNode("Sphere");
Sphere19.radius = 0.06;
Shape18.geometry = Sphere19;

let Appearance20 = browser.currentScene.createNode("Appearance");
Appearance20.DEF = "JointAppearance";
let Material21 = browser.currentScene.createNode("Material");
Material21.diffuseColor = new SFColor(new float[1,0.5,0]);
Material21.transparency = 0.5;
Appearance20.material = Material21;

Shape18.appearance = Appearance20;

Transform17.child = new undefined();

Transform17.child[0] = Shape18;

browser.currentScene.children[3] = Transform17;

let Transform22 = browser.currentScene.createNode("Transform");
Transform22.DEF = "Light_TRANSFORM";
Transform22.rotation = new SFRotation(new float[0.20594,0.33152,0.9207,1.92627]);
Transform22.translation = new SFVec3f(new float[4.07625,1.00545,5.90386]);
let PointLight23 = browser.currentScene.createNode("PointLight");
PointLight23.DEF = "LA_Light";
PointLight23.location = new SFVec3f(new float[-8.940696716308594e-8,-3.5762786865234375e-7,4.6193599700927734e-7]);
PointLight23.radius = 40;
Transform22.children = new MFNode();

Transform22.children[0] = PointLight23;

browser.currentScene.children[4] = Transform22;

let Transform24 = browser.currentScene.createNode("Transform");
Transform24.DEF = "Camera_TRANSFORM";
Transform24.rotation = new SFRotation(new float[0.77344,0.33383,0.53884,1.35072]);
Transform24.translation = new SFVec3f(new float[7.35889,-6.92579,4.95831]);
let Viewpoint25 = browser.currentScene.createNode("Viewpoint");
Viewpoint25.DEF = "CA_Camera";
Viewpoint25.fieldOfView = 0.6911112070083618;
Viewpoint25.orientation = new SFRotation(new float[-3.627339850709177e-8,-0.4730778932571411,-0.8810206651687622,0]);
Viewpoint25.position = new SFVec3f(new float[-3.927080456378462e-7,-2.123415470123291e-7,2.384185791015625e-7]);
Transform24.children = new MFNode();

Transform24.children[0] = Viewpoint25;

browser.currentScene.children[5] = Transform24;

let Transform26 = browser.currentScene.createNode("Transform");
Transform26.DEF = "Armature_TRANSFORM";
let HAnimHumanoid27 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid27.name = "humanoid";
HAnimHumanoid27.DEF = "hanim_humanoid";
HAnimHumanoid27.version = "2.0";
let HAnimJoint28 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint28.name = "Armature";
HAnimJoint28.DEF = "hanim_Armature";
HAnimJoint28.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint28.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment29 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment29.name = "SEGMENT_FOR_Armature";
HAnimSegment29.DEF = "hanim_SEGMENT_FOR_Armature";
let TouchSensor30 = browser.currentScene.createNode("TouchSensor");
TouchSensor30.description = "joint Armature segment SEGMENT_FOR_Armature";
HAnimSegment29.children = new MFNode();

HAnimSegment29.children[0] = TouchSensor30;

let Transform31 = browser.currentScene.createNode("Transform");
let Shape32 = browser.currentScene.createNode("Shape");
Shape32.USE = "JointShape";
Transform31.child = new undefined();

Transform31.child[0] = Shape32;

HAnimSegment29.children[1] = Transform31;

let HAnimSite33 = browser.currentScene.createNode("HAnimSite");
HAnimSite33.name = "SEGMENT_FOR_Armature_tip";
HAnimSite33.DEF = "hanim_SEGMENT_FOR_Armature_tip";
let Transform34 = browser.currentScene.createNode("Transform");
let Shape35 = browser.currentScene.createNode("Shape");
Shape35.USE = "SiteShape";
Transform34.child = new undefined();

Transform34.child[0] = Shape35;

HAnimSite33.children = new MFNode();

HAnimSite33.children[0] = Transform34;

HAnimSegment29.children[2] = HAnimSite33;

HAnimJoint28.children = new MFNode();

HAnimJoint28.children[0] = HAnimSegment29;

let HAnimJoint36 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint36.name = "sacrum";
HAnimJoint36.DEF = "hanim_sacrum";
HAnimJoint36.center = new SFVec3f(new float[-0.0002,-0.1178,0.8174]);
HAnimJoint36.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint36.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment37 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment37.name = "SEGMENT_FOR_sacrum";
HAnimSegment37.DEF = "hanim_SEGMENT_FOR_sacrum";
let TouchSensor38 = browser.currentScene.createNode("TouchSensor");
TouchSensor38.description = "joint sacrum segment SEGMENT_FOR_sacrum";
HAnimSegment37.children = new MFNode();

HAnimSegment37.children[0] = TouchSensor38;

let Transform39 = browser.currentScene.createNode("Transform");
Transform39.translation = new SFVec3f(new float[-0.0002,-0.1178,0.8174]);
let Shape40 = browser.currentScene.createNode("Shape");
Shape40.USE = "JointShape";
Transform39.child = new undefined();

Transform39.child[0] = Shape40;

HAnimSegment37.children[1] = Transform39;

let HAnimSite41 = browser.currentScene.createNode("HAnimSite");
HAnimSite41.name = "SEGMENT_FOR_sacrum_tip";
HAnimSite41.DEF = "hanim_SEGMENT_FOR_sacrum_tip";
let Transform42 = browser.currentScene.createNode("Transform");
Transform42.translation = new SFVec3f(new float[-0.0002,-0.1178,0.8174]);
let Shape43 = browser.currentScene.createNode("Shape");
Shape43.USE = "SiteShape";
Transform42.child = new undefined();

Transform42.child[0] = Shape43;

HAnimSite41.children = new MFNode();

HAnimSite41.children[0] = Transform42;

HAnimSegment37.children[2] = HAnimSite41;

HAnimJoint36.children = new MFNode();

HAnimJoint36.children[0] = HAnimSegment37;

let HAnimJoint44 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint44.name = "pelvis";
HAnimJoint44.DEF = "hanim_pelvis";
HAnimJoint44.center = new SFVec3f(new float[-0.0002,-0.1178,0.6986]);
HAnimJoint44.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint44.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment45 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment45.name = "SEGMENT_FOR_pelvis";
HAnimSegment45.DEF = "hanim_SEGMENT_FOR_pelvis";
let TouchSensor46 = browser.currentScene.createNode("TouchSensor");
TouchSensor46.description = "joint pelvis segment SEGMENT_FOR_pelvis";
HAnimSegment45.children = new MFNode();

HAnimSegment45.children[0] = TouchSensor46;

let Transform47 = browser.currentScene.createNode("Transform");
Transform47.translation = new SFVec3f(new float[-0.0002,-0.1178,0.6986]);
let Shape48 = browser.currentScene.createNode("Shape");
Shape48.USE = "JointShape";
Transform47.child = new undefined();

Transform47.child[0] = Shape48;

HAnimSegment45.children[1] = Transform47;

let HAnimSite49 = browser.currentScene.createNode("HAnimSite");
HAnimSite49.name = "SEGMENT_FOR_pelvis_tip";
HAnimSite49.DEF = "hanim_SEGMENT_FOR_pelvis_tip";
let Transform50 = browser.currentScene.createNode("Transform");
Transform50.translation = new SFVec3f(new float[-0.0002,-0.1178,0.6986]);
let Shape51 = browser.currentScene.createNode("Shape");
Shape51.USE = "SiteShape";
Transform50.child = new undefined();

Transform50.child[0] = Shape51;

HAnimSite49.children = new MFNode();

HAnimSite49.children[0] = Transform50;

HAnimSegment45.children[2] = HAnimSite49;

HAnimJoint44.children = new MFNode();

HAnimJoint44.children[0] = HAnimSegment45;

let HAnimJoint52 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint52.name = "l_thigh";
HAnimJoint52.DEF = "hanim_l_thigh";
HAnimJoint52.center = new SFVec3f(new float[0.0945,-0.1202,0.8181]);
HAnimJoint52.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint52.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment53 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment53.name = "SEGMENT_FOR_l_thigh";
HAnimSegment53.DEF = "hanim_SEGMENT_FOR_l_thigh";
let TouchSensor54 = browser.currentScene.createNode("TouchSensor");
TouchSensor54.description = "joint l_thigh segment SEGMENT_FOR_l_thigh";
HAnimSegment53.children = new MFNode();

HAnimSegment53.children[0] = TouchSensor54;

let Transform55 = browser.currentScene.createNode("Transform");
Transform55.translation = new SFVec3f(new float[0.0945,-0.1202,0.8181]);
let Shape56 = browser.currentScene.createNode("Shape");
Shape56.USE = "JointShape";
Transform55.child = new undefined();

Transform55.child[0] = Shape56;

HAnimSegment53.children[1] = Transform55;

let HAnimSite57 = browser.currentScene.createNode("HAnimSite");
HAnimSite57.name = "SEGMENT_FOR_l_thigh_tip";
HAnimSite57.DEF = "hanim_SEGMENT_FOR_l_thigh_tip";
let Transform58 = browser.currentScene.createNode("Transform");
Transform58.translation = new SFVec3f(new float[0.0945,-0.1202,0.8181]);
let Shape59 = browser.currentScene.createNode("Shape");
Shape59.USE = "SiteShape";
Transform58.child = new undefined();

Transform58.child[0] = Shape59;

HAnimSite57.children = new MFNode();

HAnimSite57.children[0] = Transform58;

HAnimSegment53.children[2] = HAnimSite57;

HAnimJoint52.children = new MFNode();

HAnimJoint52.children[0] = HAnimSegment53;

let HAnimJoint60 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint60.name = "l_calf";
HAnimJoint60.DEF = "hanim_l_calf";
HAnimJoint60.center = new SFVec3f(new float[0.0924,-0.1213,0.4003]);
HAnimJoint60.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint60.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment61 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment61.name = "SEGMENT_FOR_l_calf";
HAnimSegment61.DEF = "hanim_SEGMENT_FOR_l_calf";
let TouchSensor62 = browser.currentScene.createNode("TouchSensor");
TouchSensor62.description = "joint l_calf segment SEGMENT_FOR_l_calf";
HAnimSegment61.children = new MFNode();

HAnimSegment61.children[0] = TouchSensor62;

let Transform63 = browser.currentScene.createNode("Transform");
Transform63.translation = new SFVec3f(new float[0.0924,-0.1213,0.4003]);
let Shape64 = browser.currentScene.createNode("Shape");
Shape64.USE = "JointShape";
Transform63.child = new undefined();

Transform63.child[0] = Shape64;

HAnimSegment61.children[1] = Transform63;

let HAnimSite65 = browser.currentScene.createNode("HAnimSite");
HAnimSite65.name = "SEGMENT_FOR_l_calf_tip";
HAnimSite65.DEF = "hanim_SEGMENT_FOR_l_calf_tip";
let Transform66 = browser.currentScene.createNode("Transform");
Transform66.translation = new SFVec3f(new float[0.0924,-0.1213,0.4003]);
let Shape67 = browser.currentScene.createNode("Shape");
Shape67.USE = "SiteShape";
Transform66.child = new undefined();

Transform66.child[0] = Shape67;

HAnimSite65.children = new MFNode();

HAnimSite65.children[0] = Transform66;

HAnimSegment61.children[2] = HAnimSite65;

HAnimJoint60.children = new MFNode();

HAnimJoint60.children[0] = HAnimSegment61;

let HAnimJoint68 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint68.name = "l_talus";
HAnimJoint68.DEF = "hanim_l_talus";
HAnimJoint68.center = new SFVec3f(new float[0.0886,-0.1123,0.0869]);
HAnimJoint68.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint68.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment69 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment69.name = "SEGMENT_FOR_l_talus";
HAnimSegment69.DEF = "hanim_SEGMENT_FOR_l_talus";
let TouchSensor70 = browser.currentScene.createNode("TouchSensor");
TouchSensor70.description = "joint l_talus segment SEGMENT_FOR_l_talus";
HAnimSegment69.children = new MFNode();

HAnimSegment69.children[0] = TouchSensor70;

let Transform71 = browser.currentScene.createNode("Transform");
Transform71.translation = new SFVec3f(new float[0.0886,-0.1123,0.0869]);
let Shape72 = browser.currentScene.createNode("Shape");
Shape72.USE = "JointShape";
Transform71.child = new undefined();

Transform71.child[0] = Shape72;

HAnimSegment69.children[1] = Transform71;

let HAnimSite73 = browser.currentScene.createNode("HAnimSite");
HAnimSite73.name = "SEGMENT_FOR_l_talus_tip";
HAnimSite73.DEF = "hanim_SEGMENT_FOR_l_talus_tip";
let Transform74 = browser.currentScene.createNode("Transform");
Transform74.translation = new SFVec3f(new float[0.0886,-0.1123,0.0869]);
let Shape75 = browser.currentScene.createNode("Shape");
Shape75.USE = "SiteShape";
Transform74.child = new undefined();

Transform74.child[0] = Shape75;

HAnimSite73.children = new MFNode();

HAnimSite73.children[0] = Transform74;

HAnimSegment69.children[2] = HAnimSite73;

HAnimJoint68.children = new MFNode();

HAnimJoint68.children[0] = HAnimSegment69;

let HAnimJoint76 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint76.name = "l_navicular";
HAnimJoint76.DEF = "hanim_l_navicular";
HAnimJoint76.center = new SFVec3f(new float[0.0781,-0.097,0.0283]);
HAnimJoint76.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint76.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment77 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment77.name = "SEGMENT_FOR_l_navicular";
HAnimSegment77.DEF = "hanim_SEGMENT_FOR_l_navicular";
let TouchSensor78 = browser.currentScene.createNode("TouchSensor");
TouchSensor78.description = "joint l_navicular segment SEGMENT_FOR_l_navicular";
HAnimSegment77.children = new MFNode();

HAnimSegment77.children[0] = TouchSensor78;

let Transform79 = browser.currentScene.createNode("Transform");
Transform79.translation = new SFVec3f(new float[0.0781,-0.097,0.0283]);
let Shape80 = browser.currentScene.createNode("Shape");
Shape80.USE = "JointShape";
Transform79.child = new undefined();

Transform79.child[0] = Shape80;

HAnimSegment77.children[1] = Transform79;

let HAnimSite81 = browser.currentScene.createNode("HAnimSite");
HAnimSite81.name = "SEGMENT_FOR_l_navicular_tip";
HAnimSite81.DEF = "hanim_SEGMENT_FOR_l_navicular_tip";
let Transform82 = browser.currentScene.createNode("Transform");
Transform82.translation = new SFVec3f(new float[0.0781,-0.097,0.0283]);
let Shape83 = browser.currentScene.createNode("Shape");
Shape83.USE = "SiteShape";
Transform82.child = new undefined();

Transform82.child[0] = Shape83;

HAnimSite81.children = new MFNode();

HAnimSite81.children[0] = Transform82;

HAnimSegment77.children[2] = HAnimSite81;

HAnimJoint76.children = new MFNode();

HAnimJoint76.children[0] = HAnimSegment77;

let HAnimJoint84 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint84.name = "l_cuneiform_1";
HAnimJoint84.DEF = "hanim_l_cuneiform_1";
HAnimJoint84.center = new SFVec3f(new float[0.0672,-0.0835,0.0235]);
HAnimJoint84.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint84.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment85 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment85.name = "SEGMENT_FOR_l_cuneiform_1";
HAnimSegment85.DEF = "hanim_SEGMENT_FOR_l_cuneiform_1";
let TouchSensor86 = browser.currentScene.createNode("TouchSensor");
TouchSensor86.description = "joint l_cuneiform_1 segment SEGMENT_FOR_l_cuneiform_1";
HAnimSegment85.children = new MFNode();

HAnimSegment85.children[0] = TouchSensor86;

let Transform87 = browser.currentScene.createNode("Transform");
Transform87.translation = new SFVec3f(new float[0.0672,-0.0835,0.0235]);
let Shape88 = browser.currentScene.createNode("Shape");
Shape88.USE = "JointShape";
Transform87.child = new undefined();

Transform87.child[0] = Shape88;

HAnimSegment85.children[1] = Transform87;

let HAnimSite89 = browser.currentScene.createNode("HAnimSite");
HAnimSite89.name = "SEGMENT_FOR_l_cuneiform_1_tip";
HAnimSite89.DEF = "hanim_SEGMENT_FOR_l_cuneiform_1_tip";
let Transform90 = browser.currentScene.createNode("Transform");
Transform90.translation = new SFVec3f(new float[0.0672,-0.0835,0.0235]);
let Shape91 = browser.currentScene.createNode("Shape");
Shape91.USE = "SiteShape";
Transform90.child = new undefined();

Transform90.child[0] = Shape91;

HAnimSite89.children = new MFNode();

HAnimSite89.children[0] = Transform90;

HAnimSegment85.children[2] = HAnimSite89;

HAnimJoint84.children = new MFNode();

HAnimJoint84.children[0] = HAnimSegment85;

let HAnimJoint92 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint92.name = "l_metatarsal_1";
HAnimJoint92.DEF = "hanim_l_metatarsal_1";
HAnimJoint92.center = new SFVec3f(new float[0.0644,-0.0577,0.0147]);
HAnimJoint92.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint92.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment93 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment93.name = "SEGMENT_FOR_l_metatarsal_1";
HAnimSegment93.DEF = "hanim_SEGMENT_FOR_l_metatarsal_1";
let TouchSensor94 = browser.currentScene.createNode("TouchSensor");
TouchSensor94.description = "joint l_metatarsal_1 segment SEGMENT_FOR_l_metatarsal_1";
HAnimSegment93.children = new MFNode();

HAnimSegment93.children[0] = TouchSensor94;

let Transform95 = browser.currentScene.createNode("Transform");
Transform95.translation = new SFVec3f(new float[0.0644,-0.0577,0.0147]);
let Shape96 = browser.currentScene.createNode("Shape");
Shape96.USE = "JointShape";
Transform95.child = new undefined();

Transform95.child[0] = Shape96;

HAnimSegment93.children[1] = Transform95;

let HAnimSite97 = browser.currentScene.createNode("HAnimSite");
HAnimSite97.name = "SEGMENT_FOR_l_metatarsal_1_tip";
HAnimSite97.DEF = "hanim_SEGMENT_FOR_l_metatarsal_1_tip";
let Transform98 = browser.currentScene.createNode("Transform");
Transform98.translation = new SFVec3f(new float[0.0644,-0.0577,0.0147]);
let Shape99 = browser.currentScene.createNode("Shape");
Shape99.USE = "SiteShape";
Transform98.child = new undefined();

Transform98.child[0] = Shape99;

HAnimSite97.children = new MFNode();

HAnimSite97.children[0] = Transform98;

HAnimSegment93.children[2] = HAnimSite97;

HAnimJoint92.children = new MFNode();

HAnimJoint92.children[0] = HAnimSegment93;

let HAnimJoint100 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint100.name = "l_tarsal_proximal_phalanx_1";
HAnimJoint100.DEF = "hanim_l_tarsal_proximal_phalanx_1";
HAnimJoint100.center = new SFVec3f(new float[0.0619,-0.0083,0.0059]);
HAnimJoint100.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint100.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment101 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment101.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_1";
HAnimSegment101.DEF = "hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_1";
let TouchSensor102 = browser.currentScene.createNode("TouchSensor");
TouchSensor102.description = "joint l_tarsal_proximal_phalanx_1 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_1";
HAnimSegment101.children = new MFNode();

HAnimSegment101.children[0] = TouchSensor102;

let Transform103 = browser.currentScene.createNode("Transform");
Transform103.translation = new SFVec3f(new float[0.0619,-0.0083,0.0059]);
let Shape104 = browser.currentScene.createNode("Shape");
Shape104.USE = "JointShape";
Transform103.child = new undefined();

Transform103.child[0] = Shape104;

HAnimSegment101.children[1] = Transform103;

let HAnimSite105 = browser.currentScene.createNode("HAnimSite");
HAnimSite105.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_1_tip";
HAnimSite105.DEF = "hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_1_tip";
let Transform106 = browser.currentScene.createNode("Transform");
Transform106.translation = new SFVec3f(new float[0.0619,-0.0083,0.0059]);
let Shape107 = browser.currentScene.createNode("Shape");
Shape107.USE = "SiteShape";
Transform106.child = new undefined();

Transform106.child[0] = Shape107;

HAnimSite105.children = new MFNode();

HAnimSite105.children[0] = Transform106;

HAnimSegment101.children[2] = HAnimSite105;

HAnimJoint100.children = new MFNode();

HAnimJoint100.children[0] = HAnimSegment101;

let HAnimJoint108 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint108.name = "l_tarsal_distal_phalanx_1";
HAnimJoint108.DEF = "hanim_l_tarsal_distal_phalanx_1";
HAnimJoint108.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint108.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment109 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment109.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_1";
HAnimSegment109.DEF = "hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_1";
let TouchSensor110 = browser.currentScene.createNode("TouchSensor");
TouchSensor110.description = "joint l_tarsal_distal_phalanx_1 segment SEGMENT_FOR_l_tarsal_distal_phalanx_1";
HAnimSegment109.children = new MFNode();

HAnimSegment109.children[0] = TouchSensor110;

let Transform111 = browser.currentScene.createNode("Transform");
let Shape112 = browser.currentScene.createNode("Shape");
Shape112.USE = "JointShape";
Transform111.child = new undefined();

Transform111.child[0] = Shape112;

HAnimSegment109.children[1] = Transform111;

let HAnimSite113 = browser.currentScene.createNode("HAnimSite");
HAnimSite113.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_1_tip";
HAnimSite113.DEF = "hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_1_tip";
let Transform114 = browser.currentScene.createNode("Transform");
let Shape115 = browser.currentScene.createNode("Shape");
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

let HAnimJoint116 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint116.name = "l_cuneiform_2";
HAnimJoint116.DEF = "hanim_l_cuneiform_2";
HAnimJoint116.center = new SFVec3f(new float[0.0812,-0.0805,0.025]);
HAnimJoint116.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint116.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment117 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment117.name = "SEGMENT_FOR_l_cuneiform_2";
HAnimSegment117.DEF = "hanim_SEGMENT_FOR_l_cuneiform_2";
let TouchSensor118 = browser.currentScene.createNode("TouchSensor");
TouchSensor118.description = "joint l_cuneiform_2 segment SEGMENT_FOR_l_cuneiform_2";
HAnimSegment117.children = new MFNode();

HAnimSegment117.children[0] = TouchSensor118;

let Transform119 = browser.currentScene.createNode("Transform");
Transform119.translation = new SFVec3f(new float[0.0812,-0.0805,0.025]);
let Shape120 = browser.currentScene.createNode("Shape");
Shape120.USE = "JointShape";
Transform119.child = new undefined();

Transform119.child[0] = Shape120;

HAnimSegment117.children[1] = Transform119;

let HAnimSite121 = browser.currentScene.createNode("HAnimSite");
HAnimSite121.name = "SEGMENT_FOR_l_cuneiform_2_tip";
HAnimSite121.DEF = "hanim_SEGMENT_FOR_l_cuneiform_2_tip";
let Transform122 = browser.currentScene.createNode("Transform");
Transform122.translation = new SFVec3f(new float[0.0812,-0.0805,0.025]);
let Shape123 = browser.currentScene.createNode("Shape");
Shape123.USE = "SiteShape";
Transform122.child = new undefined();

Transform122.child[0] = Shape123;

HAnimSite121.children = new MFNode();

HAnimSite121.children[0] = Transform122;

HAnimSegment117.children[2] = HAnimSite121;

HAnimJoint116.children = new MFNode();

HAnimJoint116.children[0] = HAnimSegment117;

let HAnimJoint124 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint124.name = "l_metatarsal_2";
HAnimJoint124.DEF = "hanim_l_metatarsal_2";
HAnimJoint124.center = new SFVec3f(new float[0.08,-0.0608,0.0175]);
HAnimJoint124.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint124.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment125 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment125.name = "SEGMENT_FOR_l_metatarsal_2";
HAnimSegment125.DEF = "hanim_SEGMENT_FOR_l_metatarsal_2";
let TouchSensor126 = browser.currentScene.createNode("TouchSensor");
TouchSensor126.description = "joint l_metatarsal_2 segment SEGMENT_FOR_l_metatarsal_2";
HAnimSegment125.children = new MFNode();

HAnimSegment125.children[0] = TouchSensor126;

let Transform127 = browser.currentScene.createNode("Transform");
Transform127.translation = new SFVec3f(new float[0.08,-0.0608,0.0175]);
let Shape128 = browser.currentScene.createNode("Shape");
Shape128.USE = "JointShape";
Transform127.child = new undefined();

Transform127.child[0] = Shape128;

HAnimSegment125.children[1] = Transform127;

let HAnimSite129 = browser.currentScene.createNode("HAnimSite");
HAnimSite129.name = "SEGMENT_FOR_l_metatarsal_2_tip";
HAnimSite129.DEF = "hanim_SEGMENT_FOR_l_metatarsal_2_tip";
let Transform130 = browser.currentScene.createNode("Transform");
Transform130.translation = new SFVec3f(new float[0.08,-0.0608,0.0175]);
let Shape131 = browser.currentScene.createNode("Shape");
Shape131.USE = "SiteShape";
Transform130.child = new undefined();

Transform130.child[0] = Shape131;

HAnimSite129.children = new MFNode();

HAnimSite129.children[0] = Transform130;

HAnimSegment125.children[2] = HAnimSite129;

HAnimJoint124.children = new MFNode();

HAnimJoint124.children[0] = HAnimSegment125;

let HAnimJoint132 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint132.name = "l_tarsal_proximal_phalanx_2";
HAnimJoint132.DEF = "hanim_l_tarsal_proximal_phalanx_2";
HAnimJoint132.center = new SFVec3f(new float[0.0824,-0.004,0.0064]);
HAnimJoint132.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint132.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment133 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment133.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_2";
HAnimSegment133.DEF = "hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_2";
let TouchSensor134 = browser.currentScene.createNode("TouchSensor");
TouchSensor134.description = "joint l_tarsal_proximal_phalanx_2 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_2";
HAnimSegment133.children = new MFNode();

HAnimSegment133.children[0] = TouchSensor134;

let Transform135 = browser.currentScene.createNode("Transform");
Transform135.translation = new SFVec3f(new float[0.0824,-0.004,0.0064]);
let Shape136 = browser.currentScene.createNode("Shape");
Shape136.USE = "JointShape";
Transform135.child = new undefined();

Transform135.child[0] = Shape136;

HAnimSegment133.children[1] = Transform135;

let HAnimSite137 = browser.currentScene.createNode("HAnimSite");
HAnimSite137.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_2_tip";
HAnimSite137.DEF = "hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_2_tip";
let Transform138 = browser.currentScene.createNode("Transform");
Transform138.translation = new SFVec3f(new float[0.0824,-0.004,0.0064]);
let Shape139 = browser.currentScene.createNode("Shape");
Shape139.USE = "SiteShape";
Transform138.child = new undefined();

Transform138.child[0] = Shape139;

HAnimSite137.children = new MFNode();

HAnimSite137.children[0] = Transform138;

HAnimSegment133.children[2] = HAnimSite137;

HAnimJoint132.children = new MFNode();

HAnimJoint132.children[0] = HAnimSegment133;

let HAnimJoint140 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint140.name = "l_tarsal_middle_phalanx_2";
HAnimJoint140.DEF = "hanim_l_tarsal_middle_phalanx_2";
HAnimJoint140.center = new SFVec3f(new float[0.0841,0.0121,0.0041]);
HAnimJoint140.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint140.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment141 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment141.name = "SEGMENT_FOR_l_tarsal_middle_phalanx_2";
HAnimSegment141.DEF = "hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_2";
let TouchSensor142 = browser.currentScene.createNode("TouchSensor");
TouchSensor142.description = "joint l_tarsal_middle_phalanx_2 segment SEGMENT_FOR_l_tarsal_middle_phalanx_2";
HAnimSegment141.children = new MFNode();

HAnimSegment141.children[0] = TouchSensor142;

let Transform143 = browser.currentScene.createNode("Transform");
Transform143.translation = new SFVec3f(new float[0.0841,0.0121,0.0041]);
let Shape144 = browser.currentScene.createNode("Shape");
Shape144.USE = "JointShape";
Transform143.child = new undefined();

Transform143.child[0] = Shape144;

HAnimSegment141.children[1] = Transform143;

let HAnimSite145 = browser.currentScene.createNode("HAnimSite");
HAnimSite145.name = "SEGMENT_FOR_l_tarsal_middle_phalanx_2_tip";
HAnimSite145.DEF = "hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_2_tip";
let Transform146 = browser.currentScene.createNode("Transform");
Transform146.translation = new SFVec3f(new float[0.0841,0.0121,0.0041]);
let Shape147 = browser.currentScene.createNode("Shape");
Shape147.USE = "SiteShape";
Transform146.child = new undefined();

Transform146.child[0] = Shape147;

HAnimSite145.children = new MFNode();

HAnimSite145.children[0] = Transform146;

HAnimSegment141.children[2] = HAnimSite145;

HAnimJoint140.children = new MFNode();

HAnimJoint140.children[0] = HAnimSegment141;

let HAnimJoint148 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint148.name = "l_tarsal_distal_phalanx_2";
HAnimJoint148.DEF = "hanim_l_tarsal_distal_phalanx_2";
HAnimJoint148.center = new SFVec3f(new float[0.0841,0.0216,0.0013]);
HAnimJoint148.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint148.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment149 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment149.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_2";
HAnimSegment149.DEF = "hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_2";
let TouchSensor150 = browser.currentScene.createNode("TouchSensor");
TouchSensor150.description = "joint l_tarsal_distal_phalanx_2 segment SEGMENT_FOR_l_tarsal_distal_phalanx_2";
HAnimSegment149.children = new MFNode();

HAnimSegment149.children[0] = TouchSensor150;

let Transform151 = browser.currentScene.createNode("Transform");
Transform151.translation = new SFVec3f(new float[0.0841,0.0216,0.0013]);
let Shape152 = browser.currentScene.createNode("Shape");
Shape152.USE = "JointShape";
Transform151.child = new undefined();

Transform151.child[0] = Shape152;

HAnimSegment149.children[1] = Transform151;

let HAnimSite153 = browser.currentScene.createNode("HAnimSite");
HAnimSite153.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_2_tip";
HAnimSite153.DEF = "hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_2_tip";
let Transform154 = browser.currentScene.createNode("Transform");
Transform154.translation = new SFVec3f(new float[0.0841,0.0216,0.0013]);
let Shape155 = browser.currentScene.createNode("Shape");
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

let HAnimJoint156 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint156.name = "l_cuneiform_3";
HAnimJoint156.DEF = "hanim_l_cuneiform_3";
HAnimJoint156.center = new SFVec3f(new float[0.0928,-0.0821,0.0248]);
HAnimJoint156.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint156.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment157 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment157.name = "SEGMENT_FOR_l_cuneiform_3";
HAnimSegment157.DEF = "hanim_SEGMENT_FOR_l_cuneiform_3";
let TouchSensor158 = browser.currentScene.createNode("TouchSensor");
TouchSensor158.description = "joint l_cuneiform_3 segment SEGMENT_FOR_l_cuneiform_3";
HAnimSegment157.children = new MFNode();

HAnimSegment157.children[0] = TouchSensor158;

let Transform159 = browser.currentScene.createNode("Transform");
Transform159.translation = new SFVec3f(new float[0.0928,-0.0821,0.0248]);
let Shape160 = browser.currentScene.createNode("Shape");
Shape160.USE = "JointShape";
Transform159.child = new undefined();

Transform159.child[0] = Shape160;

HAnimSegment157.children[1] = Transform159;

let HAnimSite161 = browser.currentScene.createNode("HAnimSite");
HAnimSite161.name = "SEGMENT_FOR_l_cuneiform_3_tip";
HAnimSite161.DEF = "hanim_SEGMENT_FOR_l_cuneiform_3_tip";
let Transform162 = browser.currentScene.createNode("Transform");
Transform162.translation = new SFVec3f(new float[0.0928,-0.0821,0.0248]);
let Shape163 = browser.currentScene.createNode("Shape");
Shape163.USE = "SiteShape";
Transform162.child = new undefined();

Transform162.child[0] = Shape163;

HAnimSite161.children = new MFNode();

HAnimSite161.children[0] = Transform162;

HAnimSegment157.children[2] = HAnimSite161;

HAnimJoint156.children = new MFNode();

HAnimJoint156.children[0] = HAnimSegment157;

let HAnimJoint164 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint164.name = "l_metatarsal_3";
HAnimJoint164.DEF = "hanim_l_metatarsal_3";
HAnimJoint164.center = new SFVec3f(new float[0.0944,-0.0625,0.0175]);
HAnimJoint164.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint164.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment165 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment165.name = "SEGMENT_FOR_l_metatarsal_3";
HAnimSegment165.DEF = "hanim_SEGMENT_FOR_l_metatarsal_3";
let TouchSensor166 = browser.currentScene.createNode("TouchSensor");
TouchSensor166.description = "joint l_metatarsal_3 segment SEGMENT_FOR_l_metatarsal_3";
HAnimSegment165.children = new MFNode();

HAnimSegment165.children[0] = TouchSensor166;

let Transform167 = browser.currentScene.createNode("Transform");
Transform167.translation = new SFVec3f(new float[0.0944,-0.0625,0.0175]);
let Shape168 = browser.currentScene.createNode("Shape");
Shape168.USE = "JointShape";
Transform167.child = new undefined();

Transform167.child[0] = Shape168;

HAnimSegment165.children[1] = Transform167;

let HAnimSite169 = browser.currentScene.createNode("HAnimSite");
HAnimSite169.name = "SEGMENT_FOR_l_metatarsal_3_tip";
HAnimSite169.DEF = "hanim_SEGMENT_FOR_l_metatarsal_3_tip";
let Transform170 = browser.currentScene.createNode("Transform");
Transform170.translation = new SFVec3f(new float[0.0944,-0.0625,0.0175]);
let Shape171 = browser.currentScene.createNode("Shape");
Shape171.USE = "SiteShape";
Transform170.child = new undefined();

Transform170.child[0] = Shape171;

HAnimSite169.children = new MFNode();

HAnimSite169.children[0] = Transform170;

HAnimSegment165.children[2] = HAnimSite169;

HAnimJoint164.children = new MFNode();

HAnimJoint164.children[0] = HAnimSegment165;

let HAnimJoint172 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint172.name = "l_tarsal_proximal_phalanx_3";
HAnimJoint172.DEF = "hanim_l_tarsal_proximal_phalanx_3";
HAnimJoint172.center = new SFVec3f(new float[0.0963,-0.0065,0.0065]);
HAnimJoint172.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint172.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment173 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment173.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_3";
HAnimSegment173.DEF = "hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_3";
let TouchSensor174 = browser.currentScene.createNode("TouchSensor");
TouchSensor174.description = "joint l_tarsal_proximal_phalanx_3 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_3";
HAnimSegment173.children = new MFNode();

HAnimSegment173.children[0] = TouchSensor174;

let Transform175 = browser.currentScene.createNode("Transform");
Transform175.translation = new SFVec3f(new float[0.0963,-0.0065,0.0065]);
let Shape176 = browser.currentScene.createNode("Shape");
Shape176.USE = "JointShape";
Transform175.child = new undefined();

Transform175.child[0] = Shape176;

HAnimSegment173.children[1] = Transform175;

let HAnimSite177 = browser.currentScene.createNode("HAnimSite");
HAnimSite177.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_3_tip";
HAnimSite177.DEF = "hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_3_tip";
let Transform178 = browser.currentScene.createNode("Transform");
Transform178.translation = new SFVec3f(new float[0.0963,-0.0065,0.0065]);
let Shape179 = browser.currentScene.createNode("Shape");
Shape179.USE = "SiteShape";
Transform178.child = new undefined();

Transform178.child[0] = Shape179;

HAnimSite177.children = new MFNode();

HAnimSite177.children[0] = Transform178;

HAnimSegment173.children[2] = HAnimSite177;

HAnimJoint172.children = new MFNode();

HAnimJoint172.children[0] = HAnimSegment173;

let HAnimJoint180 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint180.name = "l_tarsal_middle_phalanx_3";
HAnimJoint180.DEF = "hanim_l_tarsal_middle_phalanx_3";
HAnimJoint180.center = new SFVec3f(new float[0.0987,0.0086,0.0034]);
HAnimJoint180.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint180.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment181 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment181.name = "SEGMENT_FOR_l_tarsal_middle_phalanx_3";
HAnimSegment181.DEF = "hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_3";
let TouchSensor182 = browser.currentScene.createNode("TouchSensor");
TouchSensor182.description = "joint l_tarsal_middle_phalanx_3 segment SEGMENT_FOR_l_tarsal_middle_phalanx_3";
HAnimSegment181.children = new MFNode();

HAnimSegment181.children[0] = TouchSensor182;

let Transform183 = browser.currentScene.createNode("Transform");
Transform183.translation = new SFVec3f(new float[0.0987,0.0086,0.0034]);
let Shape184 = browser.currentScene.createNode("Shape");
Shape184.USE = "JointShape";
Transform183.child = new undefined();

Transform183.child[0] = Shape184;

HAnimSegment181.children[1] = Transform183;

let HAnimSite185 = browser.currentScene.createNode("HAnimSite");
HAnimSite185.name = "SEGMENT_FOR_l_tarsal_middle_phalanx_3_tip";
HAnimSite185.DEF = "hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_3_tip";
let Transform186 = browser.currentScene.createNode("Transform");
Transform186.translation = new SFVec3f(new float[0.0987,0.0086,0.0034]);
let Shape187 = browser.currentScene.createNode("Shape");
Shape187.USE = "SiteShape";
Transform186.child = new undefined();

Transform186.child[0] = Shape187;

HAnimSite185.children = new MFNode();

HAnimSite185.children[0] = Transform186;

HAnimSegment181.children[2] = HAnimSite185;

HAnimJoint180.children = new MFNode();

HAnimJoint180.children[0] = HAnimSegment181;

let HAnimJoint188 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint188.name = "l_tarsal_distal_phalanx_3";
HAnimJoint188.DEF = "hanim_l_tarsal_distal_phalanx_3";
HAnimJoint188.center = new SFVec3f(new float[0.1002,0.0178,0.0013]);
HAnimJoint188.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint188.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment189 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment189.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_3";
HAnimSegment189.DEF = "hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_3";
let TouchSensor190 = browser.currentScene.createNode("TouchSensor");
TouchSensor190.description = "joint l_tarsal_distal_phalanx_3 segment SEGMENT_FOR_l_tarsal_distal_phalanx_3";
HAnimSegment189.children = new MFNode();

HAnimSegment189.children[0] = TouchSensor190;

let Transform191 = browser.currentScene.createNode("Transform");
Transform191.translation = new SFVec3f(new float[0.1002,0.0178,0.0013]);
let Shape192 = browser.currentScene.createNode("Shape");
Shape192.USE = "JointShape";
Transform191.child = new undefined();

Transform191.child[0] = Shape192;

HAnimSegment189.children[1] = Transform191;

let HAnimSite193 = browser.currentScene.createNode("HAnimSite");
HAnimSite193.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_3_tip";
HAnimSite193.DEF = "hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_3_tip";
let Transform194 = browser.currentScene.createNode("Transform");
Transform194.translation = new SFVec3f(new float[0.1002,0.0178,0.0013]);
let Shape195 = browser.currentScene.createNode("Shape");
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

let HAnimJoint196 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint196.name = "l_calcaneus";
HAnimJoint196.DEF = "hanim_l_calcaneus";
HAnimJoint196.center = new SFVec3f(new float[0.0889,-0.1278,0.0494]);
HAnimJoint196.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint196.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment197 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment197.name = "SEGMENT_FOR_l_calcaneus";
HAnimSegment197.DEF = "hanim_SEGMENT_FOR_l_calcaneus";
let TouchSensor198 = browser.currentScene.createNode("TouchSensor");
TouchSensor198.description = "joint l_calcaneus segment SEGMENT_FOR_l_calcaneus";
HAnimSegment197.children = new MFNode();

HAnimSegment197.children[0] = TouchSensor198;

let Transform199 = browser.currentScene.createNode("Transform");
Transform199.translation = new SFVec3f(new float[0.0889,-0.1278,0.0494]);
let Shape200 = browser.currentScene.createNode("Shape");
Shape200.USE = "JointShape";
Transform199.child = new undefined();

Transform199.child[0] = Shape200;

HAnimSegment197.children[1] = Transform199;

let HAnimSite201 = browser.currentScene.createNode("HAnimSite");
HAnimSite201.name = "SEGMENT_FOR_l_calcaneus_tip";
HAnimSite201.DEF = "hanim_SEGMENT_FOR_l_calcaneus_tip";
let Transform202 = browser.currentScene.createNode("Transform");
Transform202.translation = new SFVec3f(new float[0.0889,-0.1278,0.0494]);
let Shape203 = browser.currentScene.createNode("Shape");
Shape203.USE = "SiteShape";
Transform202.child = new undefined();

Transform202.child[0] = Shape203;

HAnimSite201.children = new MFNode();

HAnimSite201.children[0] = Transform202;

HAnimSegment197.children[2] = HAnimSite201;

HAnimJoint196.children = new MFNode();

HAnimJoint196.children[0] = HAnimSegment197;

let HAnimJoint204 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint204.name = "l_cuboid";
HAnimJoint204.DEF = "hanim_l_cuboid";
HAnimJoint204.center = new SFVec3f(new float[0.1105,-0.0998,0.0267]);
HAnimJoint204.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint204.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment205 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment205.name = "SEGMENT_FOR_l_cuboid";
HAnimSegment205.DEF = "hanim_SEGMENT_FOR_l_cuboid";
let TouchSensor206 = browser.currentScene.createNode("TouchSensor");
TouchSensor206.description = "joint l_cuboid segment SEGMENT_FOR_l_cuboid";
HAnimSegment205.children = new MFNode();

HAnimSegment205.children[0] = TouchSensor206;

let Transform207 = browser.currentScene.createNode("Transform");
Transform207.translation = new SFVec3f(new float[0.1105,-0.0998,0.0267]);
let Shape208 = browser.currentScene.createNode("Shape");
Shape208.USE = "JointShape";
Transform207.child = new undefined();

Transform207.child[0] = Shape208;

HAnimSegment205.children[1] = Transform207;

let HAnimSite209 = browser.currentScene.createNode("HAnimSite");
HAnimSite209.name = "SEGMENT_FOR_l_cuboid_tip";
HAnimSite209.DEF = "hanim_SEGMENT_FOR_l_cuboid_tip";
let Transform210 = browser.currentScene.createNode("Transform");
Transform210.translation = new SFVec3f(new float[0.1105,-0.0998,0.0267]);
let Shape211 = browser.currentScene.createNode("Shape");
Shape211.USE = "SiteShape";
Transform210.child = new undefined();

Transform210.child[0] = Shape211;

HAnimSite209.children = new MFNode();

HAnimSite209.children[0] = Transform210;

HAnimSegment205.children[2] = HAnimSite209;

HAnimJoint204.children = new MFNode();

HAnimJoint204.children[0] = HAnimSegment205;

let HAnimJoint212 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint212.name = "l_metatarsal_4";
HAnimJoint212.DEF = "hanim_l_metatarsal_4";
HAnimJoint212.center = new SFVec3f(new float[0.1063,-0.0634,0.016]);
HAnimJoint212.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint212.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment213 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment213.name = "SEGMENT_FOR_l_metatarsal_4";
HAnimSegment213.DEF = "hanim_SEGMENT_FOR_l_metatarsal_4";
let TouchSensor214 = browser.currentScene.createNode("TouchSensor");
TouchSensor214.description = "joint l_metatarsal_4 segment SEGMENT_FOR_l_metatarsal_4";
HAnimSegment213.children = new MFNode();

HAnimSegment213.children[0] = TouchSensor214;

let Transform215 = browser.currentScene.createNode("Transform");
Transform215.translation = new SFVec3f(new float[0.1063,-0.0634,0.016]);
let Shape216 = browser.currentScene.createNode("Shape");
Shape216.USE = "JointShape";
Transform215.child = new undefined();

Transform215.child[0] = Shape216;

HAnimSegment213.children[1] = Transform215;

let HAnimSite217 = browser.currentScene.createNode("HAnimSite");
HAnimSite217.name = "SEGMENT_FOR_l_metatarsal_4_tip";
HAnimSite217.DEF = "hanim_SEGMENT_FOR_l_metatarsal_4_tip";
let Transform218 = browser.currentScene.createNode("Transform");
Transform218.translation = new SFVec3f(new float[0.1063,-0.0634,0.016]);
let Shape219 = browser.currentScene.createNode("Shape");
Shape219.USE = "SiteShape";
Transform218.child = new undefined();

Transform218.child[0] = Shape219;

HAnimSite217.children = new MFNode();

HAnimSite217.children[0] = Transform218;

HAnimSegment213.children[2] = HAnimSite217;

HAnimJoint212.children = new MFNode();

HAnimJoint212.children[0] = HAnimSegment213;

let HAnimJoint220 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint220.name = "l_tarsal_proximal_phalanx_4";
HAnimJoint220.DEF = "hanim_l_tarsal_proximal_phalanx_4";
HAnimJoint220.center = new SFVec3f(new float[0.1097,-0.0107,0.0058]);
HAnimJoint220.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint220.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment221 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment221.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_4";
HAnimSegment221.DEF = "hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_4";
let TouchSensor222 = browser.currentScene.createNode("TouchSensor");
TouchSensor222.description = "joint l_tarsal_proximal_phalanx_4 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_4";
HAnimSegment221.children = new MFNode();

HAnimSegment221.children[0] = TouchSensor222;

let Transform223 = browser.currentScene.createNode("Transform");
Transform223.translation = new SFVec3f(new float[0.1097,-0.0107,0.0058]);
let Shape224 = browser.currentScene.createNode("Shape");
Shape224.USE = "JointShape";
Transform223.child = new undefined();

Transform223.child[0] = Shape224;

HAnimSegment221.children[1] = Transform223;

let HAnimSite225 = browser.currentScene.createNode("HAnimSite");
HAnimSite225.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_4_tip";
HAnimSite225.DEF = "hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_4_tip";
let Transform226 = browser.currentScene.createNode("Transform");
Transform226.translation = new SFVec3f(new float[0.1097,-0.0107,0.0058]);
let Shape227 = browser.currentScene.createNode("Shape");
Shape227.USE = "SiteShape";
Transform226.child = new undefined();

Transform226.child[0] = Shape227;

HAnimSite225.children = new MFNode();

HAnimSite225.children[0] = Transform226;

HAnimSegment221.children[2] = HAnimSite225;

HAnimJoint220.children = new MFNode();

HAnimJoint220.children[0] = HAnimSegment221;

let HAnimJoint228 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint228.name = "l_tarsal_middle_phalanx_4";
HAnimJoint228.DEF = "hanim_l_tarsal_middle_phalanx_4";
HAnimJoint228.center = new SFVec3f(new float[0.114,0.0044,0.0037]);
HAnimJoint228.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint228.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment229 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment229.name = "SEGMENT_FOR_l_tarsal_middle_phalanx_4";
HAnimSegment229.DEF = "hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_4";
let TouchSensor230 = browser.currentScene.createNode("TouchSensor");
TouchSensor230.description = "joint l_tarsal_middle_phalanx_4 segment SEGMENT_FOR_l_tarsal_middle_phalanx_4";
HAnimSegment229.children = new MFNode();

HAnimSegment229.children[0] = TouchSensor230;

let Transform231 = browser.currentScene.createNode("Transform");
Transform231.translation = new SFVec3f(new float[0.114,0.0044,0.0037]);
let Shape232 = browser.currentScene.createNode("Shape");
Shape232.USE = "JointShape";
Transform231.child = new undefined();

Transform231.child[0] = Shape232;

HAnimSegment229.children[1] = Transform231;

let HAnimSite233 = browser.currentScene.createNode("HAnimSite");
HAnimSite233.name = "SEGMENT_FOR_l_tarsal_middle_phalanx_4_tip";
HAnimSite233.DEF = "hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_4_tip";
let Transform234 = browser.currentScene.createNode("Transform");
Transform234.translation = new SFVec3f(new float[0.114,0.0044,0.0037]);
let Shape235 = browser.currentScene.createNode("Shape");
Shape235.USE = "SiteShape";
Transform234.child = new undefined();

Transform234.child[0] = Shape235;

HAnimSite233.children = new MFNode();

HAnimSite233.children[0] = Transform234;

HAnimSegment229.children[2] = HAnimSite233;

HAnimJoint228.children = new MFNode();

HAnimJoint228.children[0] = HAnimSegment229;

let HAnimJoint236 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint236.name = "l_tarsal_distal_phalanx_4";
HAnimJoint236.DEF = "hanim_l_tarsal_distal_phalanx_4";
HAnimJoint236.center = new SFVec3f(new float[0.1155,0.0118,0.0008]);
HAnimJoint236.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint236.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment237 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment237.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_4";
HAnimSegment237.DEF = "hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_4";
let TouchSensor238 = browser.currentScene.createNode("TouchSensor");
TouchSensor238.description = "joint l_tarsal_distal_phalanx_4 segment SEGMENT_FOR_l_tarsal_distal_phalanx_4";
HAnimSegment237.children = new MFNode();

HAnimSegment237.children[0] = TouchSensor238;

let Transform239 = browser.currentScene.createNode("Transform");
Transform239.translation = new SFVec3f(new float[0.1155,0.0118,0.0008]);
let Shape240 = browser.currentScene.createNode("Shape");
Shape240.USE = "JointShape";
Transform239.child = new undefined();

Transform239.child[0] = Shape240;

HAnimSegment237.children[1] = Transform239;

let HAnimSite241 = browser.currentScene.createNode("HAnimSite");
HAnimSite241.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_4_tip";
HAnimSite241.DEF = "hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_4_tip";
let Transform242 = browser.currentScene.createNode("Transform");
Transform242.translation = new SFVec3f(new float[0.1155,0.0118,0.0008]);
let Shape243 = browser.currentScene.createNode("Shape");
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

let HAnimJoint244 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint244.name = "l_metatarsal_5";
HAnimJoint244.DEF = "hanim_l_metatarsal_5";
HAnimJoint244.center = new SFVec3f(new float[0.1206,-0.0671,0.0124]);
HAnimJoint244.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint244.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment245 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment245.name = "SEGMENT_FOR_l_metatarsal_5";
HAnimSegment245.DEF = "hanim_SEGMENT_FOR_l_metatarsal_5";
let TouchSensor246 = browser.currentScene.createNode("TouchSensor");
TouchSensor246.description = "joint l_metatarsal_5 segment SEGMENT_FOR_l_metatarsal_5";
HAnimSegment245.children = new MFNode();

HAnimSegment245.children[0] = TouchSensor246;

let Transform247 = browser.currentScene.createNode("Transform");
Transform247.translation = new SFVec3f(new float[0.1206,-0.0671,0.0124]);
let Shape248 = browser.currentScene.createNode("Shape");
Shape248.USE = "JointShape";
Transform247.child = new undefined();

Transform247.child[0] = Shape248;

HAnimSegment245.children[1] = Transform247;

let HAnimSite249 = browser.currentScene.createNode("HAnimSite");
HAnimSite249.name = "SEGMENT_FOR_l_metatarsal_5_tip";
HAnimSite249.DEF = "hanim_SEGMENT_FOR_l_metatarsal_5_tip";
let Transform250 = browser.currentScene.createNode("Transform");
Transform250.translation = new SFVec3f(new float[0.1206,-0.0671,0.0124]);
let Shape251 = browser.currentScene.createNode("Shape");
Shape251.USE = "SiteShape";
Transform250.child = new undefined();

Transform250.child[0] = Shape251;

HAnimSite249.children = new MFNode();

HAnimSite249.children[0] = Transform250;

HAnimSegment245.children[2] = HAnimSite249;

HAnimJoint244.children = new MFNode();

HAnimJoint244.children[0] = HAnimSegment245;

let HAnimJoint252 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint252.name = "l_tarsal_proximal_phalanx_5";
HAnimJoint252.DEF = "hanim_l_tarsal_proximal_phalanx_5";
HAnimJoint252.center = new SFVec3f(new float[0.1239,-0.0153,0.0051]);
HAnimJoint252.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint252.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment253 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment253.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_5";
HAnimSegment253.DEF = "hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_5";
let TouchSensor254 = browser.currentScene.createNode("TouchSensor");
TouchSensor254.description = "joint l_tarsal_proximal_phalanx_5 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_5";
HAnimSegment253.children = new MFNode();

HAnimSegment253.children[0] = TouchSensor254;

let Transform255 = browser.currentScene.createNode("Transform");
Transform255.translation = new SFVec3f(new float[0.1239,-0.0153,0.0051]);
let Shape256 = browser.currentScene.createNode("Shape");
Shape256.USE = "JointShape";
Transform255.child = new undefined();

Transform255.child[0] = Shape256;

HAnimSegment253.children[1] = Transform255;

let HAnimSite257 = browser.currentScene.createNode("HAnimSite");
HAnimSite257.name = "SEGMENT_FOR_l_tarsal_proximal_phalanx_5_tip";
HAnimSite257.DEF = "hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_5_tip";
let Transform258 = browser.currentScene.createNode("Transform");
Transform258.translation = new SFVec3f(new float[0.1239,-0.0153,0.0051]);
let Shape259 = browser.currentScene.createNode("Shape");
Shape259.USE = "SiteShape";
Transform258.child = new undefined();

Transform258.child[0] = Shape259;

HAnimSite257.children = new MFNode();

HAnimSite257.children[0] = Transform258;

HAnimSegment253.children[2] = HAnimSite257;

HAnimJoint252.children = new MFNode();

HAnimJoint252.children[0] = HAnimSegment253;

let HAnimJoint260 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint260.name = "l_tarsal_middle_phalanx_5";
HAnimJoint260.DEF = "hanim_l_tarsal_middle_phalanx_5";
HAnimJoint260.center = new SFVec3f(new float[0.1262,-0.0077,0.0023]);
HAnimJoint260.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint260.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment261 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment261.name = "SEGMENT_FOR_l_tarsal_middle_phalanx_5";
HAnimSegment261.DEF = "hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_5";
let TouchSensor262 = browser.currentScene.createNode("TouchSensor");
TouchSensor262.description = "joint l_tarsal_middle_phalanx_5 segment SEGMENT_FOR_l_tarsal_middle_phalanx_5";
HAnimSegment261.children = new MFNode();

HAnimSegment261.children[0] = TouchSensor262;

let Transform263 = browser.currentScene.createNode("Transform");
Transform263.translation = new SFVec3f(new float[0.1262,-0.0077,0.0023]);
let Shape264 = browser.currentScene.createNode("Shape");
Shape264.USE = "JointShape";
Transform263.child = new undefined();

Transform263.child[0] = Shape264;

HAnimSegment261.children[1] = Transform263;

let HAnimSite265 = browser.currentScene.createNode("HAnimSite");
HAnimSite265.name = "SEGMENT_FOR_l_tarsal_middle_phalanx_5_tip";
HAnimSite265.DEF = "hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_5_tip";
let Transform266 = browser.currentScene.createNode("Transform");
Transform266.translation = new SFVec3f(new float[0.1262,-0.0077,0.0023]);
let Shape267 = browser.currentScene.createNode("Shape");
Shape267.USE = "SiteShape";
Transform266.child = new undefined();

Transform266.child[0] = Shape267;

HAnimSite265.children = new MFNode();

HAnimSite265.children[0] = Transform266;

HAnimSegment261.children[2] = HAnimSite265;

HAnimJoint260.children = new MFNode();

HAnimJoint260.children[0] = HAnimSegment261;

let HAnimJoint268 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint268.name = "l_tarsal_distal_phalanx_5";
HAnimJoint268.DEF = "hanim_l_tarsal_distal_phalanx_5";
HAnimJoint268.center = new SFVec3f(new float[0.1271,0,0]);
HAnimJoint268.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint268.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment269 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment269.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_5";
HAnimSegment269.DEF = "hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_5";
let TouchSensor270 = browser.currentScene.createNode("TouchSensor");
TouchSensor270.description = "joint l_tarsal_distal_phalanx_5 segment SEGMENT_FOR_l_tarsal_distal_phalanx_5";
HAnimSegment269.children = new MFNode();

HAnimSegment269.children[0] = TouchSensor270;

let Transform271 = browser.currentScene.createNode("Transform");
Transform271.translation = new SFVec3f(new float[0.1271,0,0]);
let Shape272 = browser.currentScene.createNode("Shape");
Shape272.USE = "JointShape";
Transform271.child = new undefined();

Transform271.child[0] = Shape272;

HAnimSegment269.children[1] = Transform271;

let HAnimSite273 = browser.currentScene.createNode("HAnimSite");
HAnimSite273.name = "SEGMENT_FOR_l_tarsal_distal_phalanx_5_tip";
HAnimSite273.DEF = "hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_5_tip";
let Transform274 = browser.currentScene.createNode("Transform");
Transform274.translation = new SFVec3f(new float[0.1271,0,0]);
let Shape275 = browser.currentScene.createNode("Shape");
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

let HAnimJoint276 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint276.name = "r_thigh";
HAnimJoint276.DEF = "hanim_r_thigh";
HAnimJoint276.center = new SFVec3f(new float[-0.0948,-0.1202,0.8181]);
HAnimJoint276.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint276.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment277 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment277.name = "SEGMENT_FOR_r_thigh";
HAnimSegment277.DEF = "hanim_SEGMENT_FOR_r_thigh";
let TouchSensor278 = browser.currentScene.createNode("TouchSensor");
TouchSensor278.description = "joint r_thigh segment SEGMENT_FOR_r_thigh";
HAnimSegment277.children = new MFNode();

HAnimSegment277.children[0] = TouchSensor278;

let Transform279 = browser.currentScene.createNode("Transform");
Transform279.translation = new SFVec3f(new float[-0.0948,-0.1202,0.8181]);
let Shape280 = browser.currentScene.createNode("Shape");
Shape280.USE = "JointShape";
Transform279.child = new undefined();

Transform279.child[0] = Shape280;

HAnimSegment277.children[1] = Transform279;

let HAnimSite281 = browser.currentScene.createNode("HAnimSite");
HAnimSite281.name = "SEGMENT_FOR_r_thigh_tip";
HAnimSite281.DEF = "hanim_SEGMENT_FOR_r_thigh_tip";
let Transform282 = browser.currentScene.createNode("Transform");
Transform282.translation = new SFVec3f(new float[-0.0948,-0.1202,0.8181]);
let Shape283 = browser.currentScene.createNode("Shape");
Shape283.USE = "SiteShape";
Transform282.child = new undefined();

Transform282.child[0] = Shape283;

HAnimSite281.children = new MFNode();

HAnimSite281.children[0] = Transform282;

HAnimSegment277.children[2] = HAnimSite281;

HAnimJoint276.children = new MFNode();

HAnimJoint276.children[0] = HAnimSegment277;

let HAnimJoint284 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint284.name = "r_calf";
HAnimJoint284.DEF = "hanim_r_calf";
HAnimJoint284.center = new SFVec3f(new float[-0.0928,-0.1213,0.4003]);
HAnimJoint284.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint284.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment285 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment285.name = "SEGMENT_FOR_r_calf";
HAnimSegment285.DEF = "hanim_SEGMENT_FOR_r_calf";
let TouchSensor286 = browser.currentScene.createNode("TouchSensor");
TouchSensor286.description = "joint r_calf segment SEGMENT_FOR_r_calf";
HAnimSegment285.children = new MFNode();

HAnimSegment285.children[0] = TouchSensor286;

let Transform287 = browser.currentScene.createNode("Transform");
Transform287.translation = new SFVec3f(new float[-0.0928,-0.1213,0.4003]);
let Shape288 = browser.currentScene.createNode("Shape");
Shape288.USE = "JointShape";
Transform287.child = new undefined();

Transform287.child[0] = Shape288;

HAnimSegment285.children[1] = Transform287;

let HAnimSite289 = browser.currentScene.createNode("HAnimSite");
HAnimSite289.name = "SEGMENT_FOR_r_calf_tip";
HAnimSite289.DEF = "hanim_SEGMENT_FOR_r_calf_tip";
let Transform290 = browser.currentScene.createNode("Transform");
Transform290.translation = new SFVec3f(new float[-0.0928,-0.1213,0.4003]);
let Shape291 = browser.currentScene.createNode("Shape");
Shape291.USE = "SiteShape";
Transform290.child = new undefined();

Transform290.child[0] = Shape291;

HAnimSite289.children = new MFNode();

HAnimSite289.children[0] = Transform290;

HAnimSegment285.children[2] = HAnimSite289;

HAnimJoint284.children = new MFNode();

HAnimJoint284.children[0] = HAnimSegment285;

let HAnimJoint292 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint292.name = "r_talus";
HAnimJoint292.DEF = "hanim_r_talus";
HAnimJoint292.center = new SFVec3f(new float[-0.0886,-0.1123,0.0869]);
HAnimJoint292.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint292.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment293 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment293.name = "SEGMENT_FOR_r_talus";
HAnimSegment293.DEF = "hanim_SEGMENT_FOR_r_talus";
let TouchSensor294 = browser.currentScene.createNode("TouchSensor");
TouchSensor294.description = "joint r_talus segment SEGMENT_FOR_r_talus";
HAnimSegment293.children = new MFNode();

HAnimSegment293.children[0] = TouchSensor294;

let Transform295 = browser.currentScene.createNode("Transform");
Transform295.translation = new SFVec3f(new float[-0.0886,-0.1123,0.0869]);
let Shape296 = browser.currentScene.createNode("Shape");
Shape296.USE = "JointShape";
Transform295.child = new undefined();

Transform295.child[0] = Shape296;

HAnimSegment293.children[1] = Transform295;

let HAnimSite297 = browser.currentScene.createNode("HAnimSite");
HAnimSite297.name = "SEGMENT_FOR_r_talus_tip";
HAnimSite297.DEF = "hanim_SEGMENT_FOR_r_talus_tip";
let Transform298 = browser.currentScene.createNode("Transform");
Transform298.translation = new SFVec3f(new float[-0.0886,-0.1123,0.0869]);
let Shape299 = browser.currentScene.createNode("Shape");
Shape299.USE = "SiteShape";
Transform298.child = new undefined();

Transform298.child[0] = Shape299;

HAnimSite297.children = new MFNode();

HAnimSite297.children[0] = Transform298;

HAnimSegment293.children[2] = HAnimSite297;

HAnimJoint292.children = new MFNode();

HAnimJoint292.children[0] = HAnimSegment293;

let HAnimJoint300 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint300.name = "r_navicular";
HAnimJoint300.DEF = "hanim_r_navicular";
HAnimJoint300.center = new SFVec3f(new float[-0.0781,-0.097,0.0283]);
HAnimJoint300.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint300.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment301 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment301.name = "SEGMENT_FOR_r_navicular";
HAnimSegment301.DEF = "hanim_SEGMENT_FOR_r_navicular";
let TouchSensor302 = browser.currentScene.createNode("TouchSensor");
TouchSensor302.description = "joint r_navicular segment SEGMENT_FOR_r_navicular";
HAnimSegment301.children = new MFNode();

HAnimSegment301.children[0] = TouchSensor302;

let Transform303 = browser.currentScene.createNode("Transform");
Transform303.translation = new SFVec3f(new float[-0.0781,-0.097,0.0283]);
let Shape304 = browser.currentScene.createNode("Shape");
Shape304.USE = "JointShape";
Transform303.child = new undefined();

Transform303.child[0] = Shape304;

HAnimSegment301.children[1] = Transform303;

let HAnimSite305 = browser.currentScene.createNode("HAnimSite");
HAnimSite305.name = "SEGMENT_FOR_r_navicular_tip";
HAnimSite305.DEF = "hanim_SEGMENT_FOR_r_navicular_tip";
let Transform306 = browser.currentScene.createNode("Transform");
Transform306.translation = new SFVec3f(new float[-0.0781,-0.097,0.0283]);
let Shape307 = browser.currentScene.createNode("Shape");
Shape307.USE = "SiteShape";
Transform306.child = new undefined();

Transform306.child[0] = Shape307;

HAnimSite305.children = new MFNode();

HAnimSite305.children[0] = Transform306;

HAnimSegment301.children[2] = HAnimSite305;

HAnimJoint300.children = new MFNode();

HAnimJoint300.children[0] = HAnimSegment301;

let HAnimJoint308 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint308.name = "r_cuneiform_1";
HAnimJoint308.DEF = "hanim_r_cuneiform_1";
HAnimJoint308.center = new SFVec3f(new float[-0.0672,-0.0835,0.0235]);
HAnimJoint308.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint308.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment309 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment309.name = "SEGMENT_FOR_r_cuneiform_1";
HAnimSegment309.DEF = "hanim_SEGMENT_FOR_r_cuneiform_1";
let TouchSensor310 = browser.currentScene.createNode("TouchSensor");
TouchSensor310.description = "joint r_cuneiform_1 segment SEGMENT_FOR_r_cuneiform_1";
HAnimSegment309.children = new MFNode();

HAnimSegment309.children[0] = TouchSensor310;

let Transform311 = browser.currentScene.createNode("Transform");
Transform311.translation = new SFVec3f(new float[-0.0672,-0.0835,0.0235]);
let Shape312 = browser.currentScene.createNode("Shape");
Shape312.USE = "JointShape";
Transform311.child = new undefined();

Transform311.child[0] = Shape312;

HAnimSegment309.children[1] = Transform311;

let HAnimSite313 = browser.currentScene.createNode("HAnimSite");
HAnimSite313.name = "SEGMENT_FOR_r_cuneiform_1_tip";
HAnimSite313.DEF = "hanim_SEGMENT_FOR_r_cuneiform_1_tip";
let Transform314 = browser.currentScene.createNode("Transform");
Transform314.translation = new SFVec3f(new float[-0.0672,-0.0835,0.0235]);
let Shape315 = browser.currentScene.createNode("Shape");
Shape315.USE = "SiteShape";
Transform314.child = new undefined();

Transform314.child[0] = Shape315;

HAnimSite313.children = new MFNode();

HAnimSite313.children[0] = Transform314;

HAnimSegment309.children[2] = HAnimSite313;

HAnimJoint308.children = new MFNode();

HAnimJoint308.children[0] = HAnimSegment309;

let HAnimJoint316 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint316.name = "r_metatarsal_1";
HAnimJoint316.DEF = "hanim_r_metatarsal_1";
HAnimJoint316.center = new SFVec3f(new float[-0.0644,-0.0577,0.0147]);
HAnimJoint316.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint316.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment317 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment317.name = "SEGMENT_FOR_r_metatarsal_1";
HAnimSegment317.DEF = "hanim_SEGMENT_FOR_r_metatarsal_1";
let TouchSensor318 = browser.currentScene.createNode("TouchSensor");
TouchSensor318.description = "joint r_metatarsal_1 segment SEGMENT_FOR_r_metatarsal_1";
HAnimSegment317.children = new MFNode();

HAnimSegment317.children[0] = TouchSensor318;

let Transform319 = browser.currentScene.createNode("Transform");
Transform319.translation = new SFVec3f(new float[-0.0644,-0.0577,0.0147]);
let Shape320 = browser.currentScene.createNode("Shape");
Shape320.USE = "JointShape";
Transform319.child = new undefined();

Transform319.child[0] = Shape320;

HAnimSegment317.children[1] = Transform319;

let HAnimSite321 = browser.currentScene.createNode("HAnimSite");
HAnimSite321.name = "SEGMENT_FOR_r_metatarsal_1_tip";
HAnimSite321.DEF = "hanim_SEGMENT_FOR_r_metatarsal_1_tip";
let Transform322 = browser.currentScene.createNode("Transform");
Transform322.translation = new SFVec3f(new float[-0.0644,-0.0577,0.0147]);
let Shape323 = browser.currentScene.createNode("Shape");
Shape323.USE = "SiteShape";
Transform322.child = new undefined();

Transform322.child[0] = Shape323;

HAnimSite321.children = new MFNode();

HAnimSite321.children[0] = Transform322;

HAnimSegment317.children[2] = HAnimSite321;

HAnimJoint316.children = new MFNode();

HAnimJoint316.children[0] = HAnimSegment317;

let HAnimJoint324 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint324.name = "r_tarsal_proximal_phalanx_1";
HAnimJoint324.DEF = "hanim_r_tarsal_proximal_phalanx_1";
HAnimJoint324.center = new SFVec3f(new float[-0.0619,-0.0083,0.0059]);
HAnimJoint324.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint324.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment325 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment325.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_1";
HAnimSegment325.DEF = "hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_1";
let TouchSensor326 = browser.currentScene.createNode("TouchSensor");
TouchSensor326.description = "joint r_tarsal_proximal_phalanx_1 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_1";
HAnimSegment325.children = new MFNode();

HAnimSegment325.children[0] = TouchSensor326;

let Transform327 = browser.currentScene.createNode("Transform");
Transform327.translation = new SFVec3f(new float[-0.0619,-0.0083,0.0059]);
let Shape328 = browser.currentScene.createNode("Shape");
Shape328.USE = "JointShape";
Transform327.child = new undefined();

Transform327.child[0] = Shape328;

HAnimSegment325.children[1] = Transform327;

let HAnimSite329 = browser.currentScene.createNode("HAnimSite");
HAnimSite329.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_1_tip";
HAnimSite329.DEF = "hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_1_tip";
let Transform330 = browser.currentScene.createNode("Transform");
Transform330.translation = new SFVec3f(new float[-0.0619,-0.0083,0.0059]);
let Shape331 = browser.currentScene.createNode("Shape");
Shape331.USE = "SiteShape";
Transform330.child = new undefined();

Transform330.child[0] = Shape331;

HAnimSite329.children = new MFNode();

HAnimSite329.children[0] = Transform330;

HAnimSegment325.children[2] = HAnimSite329;

HAnimJoint324.children = new MFNode();

HAnimJoint324.children[0] = HAnimSegment325;

let HAnimJoint332 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint332.name = "r_tarsal_distal_phalanx_1";
HAnimJoint332.DEF = "hanim_r_tarsal_distal_phalanx_1";
HAnimJoint332.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint332.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment333 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment333.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_1";
HAnimSegment333.DEF = "hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_1";
let TouchSensor334 = browser.currentScene.createNode("TouchSensor");
TouchSensor334.description = "joint r_tarsal_distal_phalanx_1 segment SEGMENT_FOR_r_tarsal_distal_phalanx_1";
HAnimSegment333.children = new MFNode();

HAnimSegment333.children[0] = TouchSensor334;

let Transform335 = browser.currentScene.createNode("Transform");
let Shape336 = browser.currentScene.createNode("Shape");
Shape336.USE = "JointShape";
Transform335.child = new undefined();

Transform335.child[0] = Shape336;

HAnimSegment333.children[1] = Transform335;

let HAnimSite337 = browser.currentScene.createNode("HAnimSite");
HAnimSite337.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_1_tip";
HAnimSite337.DEF = "hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_1_tip";
let Transform338 = browser.currentScene.createNode("Transform");
let Shape339 = browser.currentScene.createNode("Shape");
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

let HAnimJoint340 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint340.name = "r_cuneiform_2";
HAnimJoint340.DEF = "hanim_r_cuneiform_2";
HAnimJoint340.center = new SFVec3f(new float[-0.0812,-0.0805,0.025]);
HAnimJoint340.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint340.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment341 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment341.name = "SEGMENT_FOR_r_cuneiform_2";
HAnimSegment341.DEF = "hanim_SEGMENT_FOR_r_cuneiform_2";
let TouchSensor342 = browser.currentScene.createNode("TouchSensor");
TouchSensor342.description = "joint r_cuneiform_2 segment SEGMENT_FOR_r_cuneiform_2";
HAnimSegment341.children = new MFNode();

HAnimSegment341.children[0] = TouchSensor342;

let Transform343 = browser.currentScene.createNode("Transform");
Transform343.translation = new SFVec3f(new float[-0.0812,-0.0805,0.025]);
let Shape344 = browser.currentScene.createNode("Shape");
Shape344.USE = "JointShape";
Transform343.child = new undefined();

Transform343.child[0] = Shape344;

HAnimSegment341.children[1] = Transform343;

let HAnimSite345 = browser.currentScene.createNode("HAnimSite");
HAnimSite345.name = "SEGMENT_FOR_r_cuneiform_2_tip";
HAnimSite345.DEF = "hanim_SEGMENT_FOR_r_cuneiform_2_tip";
let Transform346 = browser.currentScene.createNode("Transform");
Transform346.translation = new SFVec3f(new float[-0.0812,-0.0805,0.025]);
let Shape347 = browser.currentScene.createNode("Shape");
Shape347.USE = "SiteShape";
Transform346.child = new undefined();

Transform346.child[0] = Shape347;

HAnimSite345.children = new MFNode();

HAnimSite345.children[0] = Transform346;

HAnimSegment341.children[2] = HAnimSite345;

HAnimJoint340.children = new MFNode();

HAnimJoint340.children[0] = HAnimSegment341;

let HAnimJoint348 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint348.name = "r_metatarsal_2";
HAnimJoint348.DEF = "hanim_r_metatarsal_2";
HAnimJoint348.center = new SFVec3f(new float[-0.08,-0.0608,0.0175]);
HAnimJoint348.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint348.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment349 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment349.name = "SEGMENT_FOR_r_metatarsal_2";
HAnimSegment349.DEF = "hanim_SEGMENT_FOR_r_metatarsal_2";
let TouchSensor350 = browser.currentScene.createNode("TouchSensor");
TouchSensor350.description = "joint r_metatarsal_2 segment SEGMENT_FOR_r_metatarsal_2";
HAnimSegment349.children = new MFNode();

HAnimSegment349.children[0] = TouchSensor350;

let Transform351 = browser.currentScene.createNode("Transform");
Transform351.translation = new SFVec3f(new float[-0.08,-0.0608,0.0175]);
let Shape352 = browser.currentScene.createNode("Shape");
Shape352.USE = "JointShape";
Transform351.child = new undefined();

Transform351.child[0] = Shape352;

HAnimSegment349.children[1] = Transform351;

let HAnimSite353 = browser.currentScene.createNode("HAnimSite");
HAnimSite353.name = "SEGMENT_FOR_r_metatarsal_2_tip";
HAnimSite353.DEF = "hanim_SEGMENT_FOR_r_metatarsal_2_tip";
let Transform354 = browser.currentScene.createNode("Transform");
Transform354.translation = new SFVec3f(new float[-0.08,-0.0608,0.0175]);
let Shape355 = browser.currentScene.createNode("Shape");
Shape355.USE = "SiteShape";
Transform354.child = new undefined();

Transform354.child[0] = Shape355;

HAnimSite353.children = new MFNode();

HAnimSite353.children[0] = Transform354;

HAnimSegment349.children[2] = HAnimSite353;

HAnimJoint348.children = new MFNode();

HAnimJoint348.children[0] = HAnimSegment349;

let HAnimJoint356 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint356.name = "r_tarsal_proximal_phalanx_2";
HAnimJoint356.DEF = "hanim_r_tarsal_proximal_phalanx_2";
HAnimJoint356.center = new SFVec3f(new float[-0.0823,-0.004,0.0064]);
HAnimJoint356.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint356.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment357 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment357.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_2";
HAnimSegment357.DEF = "hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_2";
let TouchSensor358 = browser.currentScene.createNode("TouchSensor");
TouchSensor358.description = "joint r_tarsal_proximal_phalanx_2 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_2";
HAnimSegment357.children = new MFNode();

HAnimSegment357.children[0] = TouchSensor358;

let Transform359 = browser.currentScene.createNode("Transform");
Transform359.translation = new SFVec3f(new float[-0.0823,-0.004,0.0064]);
let Shape360 = browser.currentScene.createNode("Shape");
Shape360.USE = "JointShape";
Transform359.child = new undefined();

Transform359.child[0] = Shape360;

HAnimSegment357.children[1] = Transform359;

let HAnimSite361 = browser.currentScene.createNode("HAnimSite");
HAnimSite361.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_2_tip";
HAnimSite361.DEF = "hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_2_tip";
let Transform362 = browser.currentScene.createNode("Transform");
Transform362.translation = new SFVec3f(new float[-0.0823,-0.004,0.0064]);
let Shape363 = browser.currentScene.createNode("Shape");
Shape363.USE = "SiteShape";
Transform362.child = new undefined();

Transform362.child[0] = Shape363;

HAnimSite361.children = new MFNode();

HAnimSite361.children[0] = Transform362;

HAnimSegment357.children[2] = HAnimSite361;

HAnimJoint356.children = new MFNode();

HAnimJoint356.children[0] = HAnimSegment357;

let HAnimJoint364 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint364.name = "r_tarsal_middle_phalanx_2";
HAnimJoint364.DEF = "hanim_r_tarsal_middle_phalanx_2";
HAnimJoint364.center = new SFVec3f(new float[-0.0841,0.0121,0.0041]);
HAnimJoint364.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint364.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment365 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment365.name = "SEGMENT_FOR_r_tarsal_middle_phalanx_2";
HAnimSegment365.DEF = "hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_2";
let TouchSensor366 = browser.currentScene.createNode("TouchSensor");
TouchSensor366.description = "joint r_tarsal_middle_phalanx_2 segment SEGMENT_FOR_r_tarsal_middle_phalanx_2";
HAnimSegment365.children = new MFNode();

HAnimSegment365.children[0] = TouchSensor366;

let Transform367 = browser.currentScene.createNode("Transform");
Transform367.translation = new SFVec3f(new float[-0.0841,0.0121,0.0041]);
let Shape368 = browser.currentScene.createNode("Shape");
Shape368.USE = "JointShape";
Transform367.child = new undefined();

Transform367.child[0] = Shape368;

HAnimSegment365.children[1] = Transform367;

let HAnimSite369 = browser.currentScene.createNode("HAnimSite");
HAnimSite369.name = "SEGMENT_FOR_r_tarsal_middle_phalanx_2_tip";
HAnimSite369.DEF = "hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_2_tip";
let Transform370 = browser.currentScene.createNode("Transform");
Transform370.translation = new SFVec3f(new float[-0.0841,0.0121,0.0041]);
let Shape371 = browser.currentScene.createNode("Shape");
Shape371.USE = "SiteShape";
Transform370.child = new undefined();

Transform370.child[0] = Shape371;

HAnimSite369.children = new MFNode();

HAnimSite369.children[0] = Transform370;

HAnimSegment365.children[2] = HAnimSite369;

HAnimJoint364.children = new MFNode();

HAnimJoint364.children[0] = HAnimSegment365;

let HAnimJoint372 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint372.name = "r_tarsal_distal_phalanx_2";
HAnimJoint372.DEF = "hanim_r_tarsal_distal_phalanx_2";
HAnimJoint372.center = new SFVec3f(new float[-0.0841,0.0216,0.0013]);
HAnimJoint372.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint372.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment373 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment373.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_2";
HAnimSegment373.DEF = "hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_2";
let TouchSensor374 = browser.currentScene.createNode("TouchSensor");
TouchSensor374.description = "joint r_tarsal_distal_phalanx_2 segment SEGMENT_FOR_r_tarsal_distal_phalanx_2";
HAnimSegment373.children = new MFNode();

HAnimSegment373.children[0] = TouchSensor374;

let Transform375 = browser.currentScene.createNode("Transform");
Transform375.translation = new SFVec3f(new float[-0.0841,0.0216,0.0013]);
let Shape376 = browser.currentScene.createNode("Shape");
Shape376.USE = "JointShape";
Transform375.child = new undefined();

Transform375.child[0] = Shape376;

HAnimSegment373.children[1] = Transform375;

let HAnimSite377 = browser.currentScene.createNode("HAnimSite");
HAnimSite377.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_2_tip";
HAnimSite377.DEF = "hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_2_tip";
let Transform378 = browser.currentScene.createNode("Transform");
Transform378.translation = new SFVec3f(new float[-0.0841,0.0216,0.0013]);
let Shape379 = browser.currentScene.createNode("Shape");
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

let HAnimJoint380 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint380.name = "r_cuneiform_3";
HAnimJoint380.DEF = "hanim_r_cuneiform_3";
HAnimJoint380.center = new SFVec3f(new float[-0.0928,-0.0821,0.0248]);
HAnimJoint380.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint380.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment381 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment381.name = "SEGMENT_FOR_r_cuneiform_3";
HAnimSegment381.DEF = "hanim_SEGMENT_FOR_r_cuneiform_3";
let TouchSensor382 = browser.currentScene.createNode("TouchSensor");
TouchSensor382.description = "joint r_cuneiform_3 segment SEGMENT_FOR_r_cuneiform_3";
HAnimSegment381.children = new MFNode();

HAnimSegment381.children[0] = TouchSensor382;

let Transform383 = browser.currentScene.createNode("Transform");
Transform383.translation = new SFVec3f(new float[-0.0928,-0.0821,0.0248]);
let Shape384 = browser.currentScene.createNode("Shape");
Shape384.USE = "JointShape";
Transform383.child = new undefined();

Transform383.child[0] = Shape384;

HAnimSegment381.children[1] = Transform383;

let HAnimSite385 = browser.currentScene.createNode("HAnimSite");
HAnimSite385.name = "SEGMENT_FOR_r_cuneiform_3_tip";
HAnimSite385.DEF = "hanim_SEGMENT_FOR_r_cuneiform_3_tip";
let Transform386 = browser.currentScene.createNode("Transform");
Transform386.translation = new SFVec3f(new float[-0.0928,-0.0821,0.0248]);
let Shape387 = browser.currentScene.createNode("Shape");
Shape387.USE = "SiteShape";
Transform386.child = new undefined();

Transform386.child[0] = Shape387;

HAnimSite385.children = new MFNode();

HAnimSite385.children[0] = Transform386;

HAnimSegment381.children[2] = HAnimSite385;

HAnimJoint380.children = new MFNode();

HAnimJoint380.children[0] = HAnimSegment381;

let HAnimJoint388 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint388.name = "r_metatarsal_3";
HAnimJoint388.DEF = "hanim_r_metatarsal_3";
HAnimJoint388.center = new SFVec3f(new float[-0.0944,-0.0625,0.0175]);
HAnimJoint388.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint388.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment389 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment389.name = "SEGMENT_FOR_r_metatarsal_3";
HAnimSegment389.DEF = "hanim_SEGMENT_FOR_r_metatarsal_3";
let TouchSensor390 = browser.currentScene.createNode("TouchSensor");
TouchSensor390.description = "joint r_metatarsal_3 segment SEGMENT_FOR_r_metatarsal_3";
HAnimSegment389.children = new MFNode();

HAnimSegment389.children[0] = TouchSensor390;

let Transform391 = browser.currentScene.createNode("Transform");
Transform391.translation = new SFVec3f(new float[-0.0944,-0.0625,0.0175]);
let Shape392 = browser.currentScene.createNode("Shape");
Shape392.USE = "JointShape";
Transform391.child = new undefined();

Transform391.child[0] = Shape392;

HAnimSegment389.children[1] = Transform391;

let HAnimSite393 = browser.currentScene.createNode("HAnimSite");
HAnimSite393.name = "SEGMENT_FOR_r_metatarsal_3_tip";
HAnimSite393.DEF = "hanim_SEGMENT_FOR_r_metatarsal_3_tip";
let Transform394 = browser.currentScene.createNode("Transform");
Transform394.translation = new SFVec3f(new float[-0.0944,-0.0625,0.0175]);
let Shape395 = browser.currentScene.createNode("Shape");
Shape395.USE = "SiteShape";
Transform394.child = new undefined();

Transform394.child[0] = Shape395;

HAnimSite393.children = new MFNode();

HAnimSite393.children[0] = Transform394;

HAnimSegment389.children[2] = HAnimSite393;

HAnimJoint388.children = new MFNode();

HAnimJoint388.children[0] = HAnimSegment389;

let HAnimJoint396 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint396.name = "r_tarsal_proximal_phalanx_3";
HAnimJoint396.DEF = "hanim_r_tarsal_proximal_phalanx_3";
HAnimJoint396.center = new SFVec3f(new float[-0.0963,-0.0065,0.0065]);
HAnimJoint396.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint396.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment397 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment397.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_3";
HAnimSegment397.DEF = "hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_3";
let TouchSensor398 = browser.currentScene.createNode("TouchSensor");
TouchSensor398.description = "joint r_tarsal_proximal_phalanx_3 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_3";
HAnimSegment397.children = new MFNode();

HAnimSegment397.children[0] = TouchSensor398;

let Transform399 = browser.currentScene.createNode("Transform");
Transform399.translation = new SFVec3f(new float[-0.0963,-0.0065,0.0065]);
let Shape400 = browser.currentScene.createNode("Shape");
Shape400.USE = "JointShape";
Transform399.child = new undefined();

Transform399.child[0] = Shape400;

HAnimSegment397.children[1] = Transform399;

let HAnimSite401 = browser.currentScene.createNode("HAnimSite");
HAnimSite401.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_3_tip";
HAnimSite401.DEF = "hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_3_tip";
let Transform402 = browser.currentScene.createNode("Transform");
Transform402.translation = new SFVec3f(new float[-0.0963,-0.0065,0.0065]);
let Shape403 = browser.currentScene.createNode("Shape");
Shape403.USE = "SiteShape";
Transform402.child = new undefined();

Transform402.child[0] = Shape403;

HAnimSite401.children = new MFNode();

HAnimSite401.children[0] = Transform402;

HAnimSegment397.children[2] = HAnimSite401;

HAnimJoint396.children = new MFNode();

HAnimJoint396.children[0] = HAnimSegment397;

let HAnimJoint404 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint404.name = "r_tarsal_middle_phalanx_3";
HAnimJoint404.DEF = "hanim_r_tarsal_middle_phalanx_3";
HAnimJoint404.center = new SFVec3f(new float[-0.0987,0.0086,0.0034]);
HAnimJoint404.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint404.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment405 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment405.name = "SEGMENT_FOR_r_tarsal_middle_phalanx_3";
HAnimSegment405.DEF = "hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_3";
let TouchSensor406 = browser.currentScene.createNode("TouchSensor");
TouchSensor406.description = "joint r_tarsal_middle_phalanx_3 segment SEGMENT_FOR_r_tarsal_middle_phalanx_3";
HAnimSegment405.children = new MFNode();

HAnimSegment405.children[0] = TouchSensor406;

let Transform407 = browser.currentScene.createNode("Transform");
Transform407.translation = new SFVec3f(new float[-0.0987,0.0086,0.0034]);
let Shape408 = browser.currentScene.createNode("Shape");
Shape408.USE = "JointShape";
Transform407.child = new undefined();

Transform407.child[0] = Shape408;

HAnimSegment405.children[1] = Transform407;

let HAnimSite409 = browser.currentScene.createNode("HAnimSite");
HAnimSite409.name = "SEGMENT_FOR_r_tarsal_middle_phalanx_3_tip";
HAnimSite409.DEF = "hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_3_tip";
let Transform410 = browser.currentScene.createNode("Transform");
Transform410.translation = new SFVec3f(new float[-0.0987,0.0086,0.0034]);
let Shape411 = browser.currentScene.createNode("Shape");
Shape411.USE = "SiteShape";
Transform410.child = new undefined();

Transform410.child[0] = Shape411;

HAnimSite409.children = new MFNode();

HAnimSite409.children[0] = Transform410;

HAnimSegment405.children[2] = HAnimSite409;

HAnimJoint404.children = new MFNode();

HAnimJoint404.children[0] = HAnimSegment405;

let HAnimJoint412 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint412.name = "r_tarsal_distal_phalanx_3";
HAnimJoint412.DEF = "hanim_r_tarsal_distal_phalanx_3";
HAnimJoint412.center = new SFVec3f(new float[-0.1002,0.0178,0.0013]);
HAnimJoint412.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint412.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment413 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment413.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_3";
HAnimSegment413.DEF = "hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_3";
let TouchSensor414 = browser.currentScene.createNode("TouchSensor");
TouchSensor414.description = "joint r_tarsal_distal_phalanx_3 segment SEGMENT_FOR_r_tarsal_distal_phalanx_3";
HAnimSegment413.children = new MFNode();

HAnimSegment413.children[0] = TouchSensor414;

let Transform415 = browser.currentScene.createNode("Transform");
Transform415.translation = new SFVec3f(new float[-0.1002,0.0178,0.0013]);
let Shape416 = browser.currentScene.createNode("Shape");
Shape416.USE = "JointShape";
Transform415.child = new undefined();

Transform415.child[0] = Shape416;

HAnimSegment413.children[1] = Transform415;

let HAnimSite417 = browser.currentScene.createNode("HAnimSite");
HAnimSite417.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_3_tip";
HAnimSite417.DEF = "hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_3_tip";
let Transform418 = browser.currentScene.createNode("Transform");
Transform418.translation = new SFVec3f(new float[-0.1002,0.0178,0.0013]);
let Shape419 = browser.currentScene.createNode("Shape");
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

let HAnimJoint420 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint420.name = "r_calcaneus";
HAnimJoint420.DEF = "hanim_r_calcaneus";
HAnimJoint420.center = new SFVec3f(new float[-0.0889,-0.1278,0.0494]);
HAnimJoint420.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint420.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment421 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment421.name = "SEGMENT_FOR_r_calcaneus";
HAnimSegment421.DEF = "hanim_SEGMENT_FOR_r_calcaneus";
let TouchSensor422 = browser.currentScene.createNode("TouchSensor");
TouchSensor422.description = "joint r_calcaneus segment SEGMENT_FOR_r_calcaneus";
HAnimSegment421.children = new MFNode();

HAnimSegment421.children[0] = TouchSensor422;

let Transform423 = browser.currentScene.createNode("Transform");
Transform423.translation = new SFVec3f(new float[-0.0889,-0.1278,0.0494]);
let Shape424 = browser.currentScene.createNode("Shape");
Shape424.USE = "JointShape";
Transform423.child = new undefined();

Transform423.child[0] = Shape424;

HAnimSegment421.children[1] = Transform423;

let HAnimSite425 = browser.currentScene.createNode("HAnimSite");
HAnimSite425.name = "SEGMENT_FOR_r_calcaneus_tip";
HAnimSite425.DEF = "hanim_SEGMENT_FOR_r_calcaneus_tip";
let Transform426 = browser.currentScene.createNode("Transform");
Transform426.translation = new SFVec3f(new float[-0.0889,-0.1278,0.0494]);
let Shape427 = browser.currentScene.createNode("Shape");
Shape427.USE = "SiteShape";
Transform426.child = new undefined();

Transform426.child[0] = Shape427;

HAnimSite425.children = new MFNode();

HAnimSite425.children[0] = Transform426;

HAnimSegment421.children[2] = HAnimSite425;

HAnimJoint420.children = new MFNode();

HAnimJoint420.children[0] = HAnimSegment421;

let HAnimJoint428 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint428.name = "r_cuboid";
HAnimJoint428.DEF = "hanim_r_cuboid";
HAnimJoint428.center = new SFVec3f(new float[-0.1105,-0.0998,0.0267]);
HAnimJoint428.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint428.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment429 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment429.name = "SEGMENT_FOR_r_cuboid";
HAnimSegment429.DEF = "hanim_SEGMENT_FOR_r_cuboid";
let TouchSensor430 = browser.currentScene.createNode("TouchSensor");
TouchSensor430.description = "joint r_cuboid segment SEGMENT_FOR_r_cuboid";
HAnimSegment429.children = new MFNode();

HAnimSegment429.children[0] = TouchSensor430;

let Transform431 = browser.currentScene.createNode("Transform");
Transform431.translation = new SFVec3f(new float[-0.1105,-0.0998,0.0267]);
let Shape432 = browser.currentScene.createNode("Shape");
Shape432.USE = "JointShape";
Transform431.child = new undefined();

Transform431.child[0] = Shape432;

HAnimSegment429.children[1] = Transform431;

let HAnimSite433 = browser.currentScene.createNode("HAnimSite");
HAnimSite433.name = "SEGMENT_FOR_r_cuboid_tip";
HAnimSite433.DEF = "hanim_SEGMENT_FOR_r_cuboid_tip";
let Transform434 = browser.currentScene.createNode("Transform");
Transform434.translation = new SFVec3f(new float[-0.1105,-0.0998,0.0267]);
let Shape435 = browser.currentScene.createNode("Shape");
Shape435.USE = "SiteShape";
Transform434.child = new undefined();

Transform434.child[0] = Shape435;

HAnimSite433.children = new MFNode();

HAnimSite433.children[0] = Transform434;

HAnimSegment429.children[2] = HAnimSite433;

HAnimJoint428.children = new MFNode();

HAnimJoint428.children[0] = HAnimSegment429;

let HAnimJoint436 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint436.name = "r_metatarsal_4";
HAnimJoint436.DEF = "hanim_r_metatarsal_4";
HAnimJoint436.center = new SFVec3f(new float[-0.1063,-0.0634,0.016]);
HAnimJoint436.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint436.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment437 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment437.name = "SEGMENT_FOR_r_metatarsal_4";
HAnimSegment437.DEF = "hanim_SEGMENT_FOR_r_metatarsal_4";
let TouchSensor438 = browser.currentScene.createNode("TouchSensor");
TouchSensor438.description = "joint r_metatarsal_4 segment SEGMENT_FOR_r_metatarsal_4";
HAnimSegment437.children = new MFNode();

HAnimSegment437.children[0] = TouchSensor438;

let Transform439 = browser.currentScene.createNode("Transform");
Transform439.translation = new SFVec3f(new float[-0.1063,-0.0634,0.016]);
let Shape440 = browser.currentScene.createNode("Shape");
Shape440.USE = "JointShape";
Transform439.child = new undefined();

Transform439.child[0] = Shape440;

HAnimSegment437.children[1] = Transform439;

let HAnimSite441 = browser.currentScene.createNode("HAnimSite");
HAnimSite441.name = "SEGMENT_FOR_r_metatarsal_4_tip";
HAnimSite441.DEF = "hanim_SEGMENT_FOR_r_metatarsal_4_tip";
let Transform442 = browser.currentScene.createNode("Transform");
Transform442.translation = new SFVec3f(new float[-0.1063,-0.0634,0.016]);
let Shape443 = browser.currentScene.createNode("Shape");
Shape443.USE = "SiteShape";
Transform442.child = new undefined();

Transform442.child[0] = Shape443;

HAnimSite441.children = new MFNode();

HAnimSite441.children[0] = Transform442;

HAnimSegment437.children[2] = HAnimSite441;

HAnimJoint436.children = new MFNode();

HAnimJoint436.children[0] = HAnimSegment437;

let HAnimJoint444 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint444.name = "r_tarsal_proximal_phalanx_4";
HAnimJoint444.DEF = "hanim_r_tarsal_proximal_phalanx_4";
HAnimJoint444.center = new SFVec3f(new float[-0.1097,-0.0107,0.0058]);
HAnimJoint444.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint444.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment445 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment445.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_4";
HAnimSegment445.DEF = "hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_4";
let TouchSensor446 = browser.currentScene.createNode("TouchSensor");
TouchSensor446.description = "joint r_tarsal_proximal_phalanx_4 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_4";
HAnimSegment445.children = new MFNode();

HAnimSegment445.children[0] = TouchSensor446;

let Transform447 = browser.currentScene.createNode("Transform");
Transform447.translation = new SFVec3f(new float[-0.1097,-0.0107,0.0058]);
let Shape448 = browser.currentScene.createNode("Shape");
Shape448.USE = "JointShape";
Transform447.child = new undefined();

Transform447.child[0] = Shape448;

HAnimSegment445.children[1] = Transform447;

let HAnimSite449 = browser.currentScene.createNode("HAnimSite");
HAnimSite449.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_4_tip";
HAnimSite449.DEF = "hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_4_tip";
let Transform450 = browser.currentScene.createNode("Transform");
Transform450.translation = new SFVec3f(new float[-0.1097,-0.0107,0.0058]);
let Shape451 = browser.currentScene.createNode("Shape");
Shape451.USE = "SiteShape";
Transform450.child = new undefined();

Transform450.child[0] = Shape451;

HAnimSite449.children = new MFNode();

HAnimSite449.children[0] = Transform450;

HAnimSegment445.children[2] = HAnimSite449;

HAnimJoint444.children = new MFNode();

HAnimJoint444.children[0] = HAnimSegment445;

let HAnimJoint452 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint452.name = "r_tarsal_middle_phalanx_4";
HAnimJoint452.DEF = "hanim_r_tarsal_middle_phalanx_4";
HAnimJoint452.center = new SFVec3f(new float[-0.114,0.0044,0.0037]);
HAnimJoint452.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint452.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment453 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment453.name = "SEGMENT_FOR_r_tarsal_middle_phalanx_4";
HAnimSegment453.DEF = "hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_4";
let TouchSensor454 = browser.currentScene.createNode("TouchSensor");
TouchSensor454.description = "joint r_tarsal_middle_phalanx_4 segment SEGMENT_FOR_r_tarsal_middle_phalanx_4";
HAnimSegment453.children = new MFNode();

HAnimSegment453.children[0] = TouchSensor454;

let Transform455 = browser.currentScene.createNode("Transform");
Transform455.translation = new SFVec3f(new float[-0.114,0.0044,0.0037]);
let Shape456 = browser.currentScene.createNode("Shape");
Shape456.USE = "JointShape";
Transform455.child = new undefined();

Transform455.child[0] = Shape456;

HAnimSegment453.children[1] = Transform455;

let HAnimSite457 = browser.currentScene.createNode("HAnimSite");
HAnimSite457.name = "SEGMENT_FOR_r_tarsal_middle_phalanx_4_tip";
HAnimSite457.DEF = "hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_4_tip";
let Transform458 = browser.currentScene.createNode("Transform");
Transform458.translation = new SFVec3f(new float[-0.114,0.0044,0.0037]);
let Shape459 = browser.currentScene.createNode("Shape");
Shape459.USE = "SiteShape";
Transform458.child = new undefined();

Transform458.child[0] = Shape459;

HAnimSite457.children = new MFNode();

HAnimSite457.children[0] = Transform458;

HAnimSegment453.children[2] = HAnimSite457;

HAnimJoint452.children = new MFNode();

HAnimJoint452.children[0] = HAnimSegment453;

let HAnimJoint460 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint460.name = "r_tarsal_distal_phalanx_4";
HAnimJoint460.DEF = "hanim_r_tarsal_distal_phalanx_4";
HAnimJoint460.center = new SFVec3f(new float[-0.1155,0.0118,0.0008]);
HAnimJoint460.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint460.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment461 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment461.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_4";
HAnimSegment461.DEF = "hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_4";
let TouchSensor462 = browser.currentScene.createNode("TouchSensor");
TouchSensor462.description = "joint r_tarsal_distal_phalanx_4 segment SEGMENT_FOR_r_tarsal_distal_phalanx_4";
HAnimSegment461.children = new MFNode();

HAnimSegment461.children[0] = TouchSensor462;

let Transform463 = browser.currentScene.createNode("Transform");
Transform463.translation = new SFVec3f(new float[-0.1155,0.0118,0.0008]);
let Shape464 = browser.currentScene.createNode("Shape");
Shape464.USE = "JointShape";
Transform463.child = new undefined();

Transform463.child[0] = Shape464;

HAnimSegment461.children[1] = Transform463;

let HAnimSite465 = browser.currentScene.createNode("HAnimSite");
HAnimSite465.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_4_tip";
HAnimSite465.DEF = "hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_4_tip";
let Transform466 = browser.currentScene.createNode("Transform");
Transform466.translation = new SFVec3f(new float[-0.1155,0.0118,0.0008]);
let Shape467 = browser.currentScene.createNode("Shape");
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

let HAnimJoint468 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint468.name = "r_metatarsal_5";
HAnimJoint468.DEF = "hanim_r_metatarsal_5";
HAnimJoint468.center = new SFVec3f(new float[-0.1206,-0.0671,0.0124]);
HAnimJoint468.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint468.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment469 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment469.name = "SEGMENT_FOR_r_metatarsal_5";
HAnimSegment469.DEF = "hanim_SEGMENT_FOR_r_metatarsal_5";
let TouchSensor470 = browser.currentScene.createNode("TouchSensor");
TouchSensor470.description = "joint r_metatarsal_5 segment SEGMENT_FOR_r_metatarsal_5";
HAnimSegment469.children = new MFNode();

HAnimSegment469.children[0] = TouchSensor470;

let Transform471 = browser.currentScene.createNode("Transform");
Transform471.translation = new SFVec3f(new float[-0.1206,-0.0671,0.0124]);
let Shape472 = browser.currentScene.createNode("Shape");
Shape472.USE = "JointShape";
Transform471.child = new undefined();

Transform471.child[0] = Shape472;

HAnimSegment469.children[1] = Transform471;

let HAnimSite473 = browser.currentScene.createNode("HAnimSite");
HAnimSite473.name = "SEGMENT_FOR_r_metatarsal_5_tip";
HAnimSite473.DEF = "hanim_SEGMENT_FOR_r_metatarsal_5_tip";
let Transform474 = browser.currentScene.createNode("Transform");
Transform474.translation = new SFVec3f(new float[-0.1206,-0.0671,0.0124]);
let Shape475 = browser.currentScene.createNode("Shape");
Shape475.USE = "SiteShape";
Transform474.child = new undefined();

Transform474.child[0] = Shape475;

HAnimSite473.children = new MFNode();

HAnimSite473.children[0] = Transform474;

HAnimSegment469.children[2] = HAnimSite473;

HAnimJoint468.children = new MFNode();

HAnimJoint468.children[0] = HAnimSegment469;

let HAnimJoint476 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint476.name = "r_tarsal_proximal_phalanx_5";
HAnimJoint476.DEF = "hanim_r_tarsal_proximal_phalanx_5";
HAnimJoint476.center = new SFVec3f(new float[-0.1239,-0.0153,0.0051]);
HAnimJoint476.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint476.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment477 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment477.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_5";
HAnimSegment477.DEF = "hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_5";
let TouchSensor478 = browser.currentScene.createNode("TouchSensor");
TouchSensor478.description = "joint r_tarsal_proximal_phalanx_5 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_5";
HAnimSegment477.children = new MFNode();

HAnimSegment477.children[0] = TouchSensor478;

let Transform479 = browser.currentScene.createNode("Transform");
Transform479.translation = new SFVec3f(new float[-0.1239,-0.0153,0.0051]);
let Shape480 = browser.currentScene.createNode("Shape");
Shape480.USE = "JointShape";
Transform479.child = new undefined();

Transform479.child[0] = Shape480;

HAnimSegment477.children[1] = Transform479;

let HAnimSite481 = browser.currentScene.createNode("HAnimSite");
HAnimSite481.name = "SEGMENT_FOR_r_tarsal_proximal_phalanx_5_tip";
HAnimSite481.DEF = "hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_5_tip";
let Transform482 = browser.currentScene.createNode("Transform");
Transform482.translation = new SFVec3f(new float[-0.1239,-0.0153,0.0051]);
let Shape483 = browser.currentScene.createNode("Shape");
Shape483.USE = "SiteShape";
Transform482.child = new undefined();

Transform482.child[0] = Shape483;

HAnimSite481.children = new MFNode();

HAnimSite481.children[0] = Transform482;

HAnimSegment477.children[2] = HAnimSite481;

HAnimJoint476.children = new MFNode();

HAnimJoint476.children[0] = HAnimSegment477;

let HAnimJoint484 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint484.name = "r_tarsal_middle_phalanx_5";
HAnimJoint484.DEF = "hanim_r_tarsal_middle_phalanx_5";
HAnimJoint484.center = new SFVec3f(new float[-0.1262,-0.0077,0.0023]);
HAnimJoint484.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint484.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment485 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment485.name = "SEGMENT_FOR_r_tarsal_middle_phalanx_5";
HAnimSegment485.DEF = "hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_5";
let TouchSensor486 = browser.currentScene.createNode("TouchSensor");
TouchSensor486.description = "joint r_tarsal_middle_phalanx_5 segment SEGMENT_FOR_r_tarsal_middle_phalanx_5";
HAnimSegment485.children = new MFNode();

HAnimSegment485.children[0] = TouchSensor486;

let Transform487 = browser.currentScene.createNode("Transform");
Transform487.translation = new SFVec3f(new float[-0.1262,-0.0077,0.0023]);
let Shape488 = browser.currentScene.createNode("Shape");
Shape488.USE = "JointShape";
Transform487.child = new undefined();

Transform487.child[0] = Shape488;

HAnimSegment485.children[1] = Transform487;

let HAnimSite489 = browser.currentScene.createNode("HAnimSite");
HAnimSite489.name = "SEGMENT_FOR_r_tarsal_middle_phalanx_5_tip";
HAnimSite489.DEF = "hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_5_tip";
let Transform490 = browser.currentScene.createNode("Transform");
Transform490.translation = new SFVec3f(new float[-0.1262,-0.0077,0.0023]);
let Shape491 = browser.currentScene.createNode("Shape");
Shape491.USE = "SiteShape";
Transform490.child = new undefined();

Transform490.child[0] = Shape491;

HAnimSite489.children = new MFNode();

HAnimSite489.children[0] = Transform490;

HAnimSegment485.children[2] = HAnimSite489;

HAnimJoint484.children = new MFNode();

HAnimJoint484.children[0] = HAnimSegment485;

let HAnimJoint492 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint492.name = "r_tarsal_distal_phalanx_5";
HAnimJoint492.DEF = "hanim_r_tarsal_distal_phalanx_5";
HAnimJoint492.center = new SFVec3f(new float[-0.1271,0,0]);
HAnimJoint492.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint492.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment493 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment493.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_5";
HAnimSegment493.DEF = "hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_5";
let TouchSensor494 = browser.currentScene.createNode("TouchSensor");
TouchSensor494.description = "joint r_tarsal_distal_phalanx_5 segment SEGMENT_FOR_r_tarsal_distal_phalanx_5";
HAnimSegment493.children = new MFNode();

HAnimSegment493.children[0] = TouchSensor494;

let Transform495 = browser.currentScene.createNode("Transform");
Transform495.translation = new SFVec3f(new float[-0.1271,0,0]);
let Shape496 = browser.currentScene.createNode("Shape");
Shape496.USE = "JointShape";
Transform495.child = new undefined();

Transform495.child[0] = Shape496;

HAnimSegment493.children[1] = Transform495;

let HAnimSite497 = browser.currentScene.createNode("HAnimSite");
HAnimSite497.name = "SEGMENT_FOR_r_tarsal_distal_phalanx_5_tip";
HAnimSite497.DEF = "hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_5_tip";
let Transform498 = browser.currentScene.createNode("Transform");
Transform498.translation = new SFVec3f(new float[-0.1271,0,0]);
let Shape499 = browser.currentScene.createNode("Shape");
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

let HAnimJoint500 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint500.name = "l5";
HAnimJoint500.DEF = "hanim_l5";
HAnimJoint500.center = new SFVec3f(new float[-0.0002,-0.1156,0.9169]);
HAnimJoint500.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint500.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment501 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment501.name = "SEGMENT_FOR_l5";
HAnimSegment501.DEF = "hanim_SEGMENT_FOR_l5";
let TouchSensor502 = browser.currentScene.createNode("TouchSensor");
TouchSensor502.description = "joint l5 segment SEGMENT_FOR_l5";
HAnimSegment501.children = new MFNode();

HAnimSegment501.children[0] = TouchSensor502;

let Transform503 = browser.currentScene.createNode("Transform");
Transform503.translation = new SFVec3f(new float[-0.0002,-0.1156,0.9169]);
let Shape504 = browser.currentScene.createNode("Shape");
Shape504.USE = "JointShape";
Transform503.child = new undefined();

Transform503.child[0] = Shape504;

HAnimSegment501.children[1] = Transform503;

let HAnimSite505 = browser.currentScene.createNode("HAnimSite");
HAnimSite505.name = "SEGMENT_FOR_l5_tip";
HAnimSite505.DEF = "hanim_SEGMENT_FOR_l5_tip";
let Transform506 = browser.currentScene.createNode("Transform");
Transform506.translation = new SFVec3f(new float[-0.0002,-0.1156,0.9169]);
let Shape507 = browser.currentScene.createNode("Shape");
Shape507.USE = "SiteShape";
Transform506.child = new undefined();

Transform506.child[0] = Shape507;

HAnimSite505.children = new MFNode();

HAnimSite505.children[0] = Transform506;

HAnimSegment501.children[2] = HAnimSite505;

HAnimJoint500.children = new MFNode();

HAnimJoint500.children[0] = HAnimSegment501;

let HAnimJoint508 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint508.name = "l4";
HAnimJoint508.DEF = "hanim_l4";
HAnimJoint508.center = new SFVec3f(new float[-0.0002,-0.1156,0.9412]);
HAnimJoint508.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint508.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment509 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment509.name = "SEGMENT_FOR_l4";
HAnimSegment509.DEF = "hanim_SEGMENT_FOR_l4";
let TouchSensor510 = browser.currentScene.createNode("TouchSensor");
TouchSensor510.description = "joint l4 segment SEGMENT_FOR_l4";
HAnimSegment509.children = new MFNode();

HAnimSegment509.children[0] = TouchSensor510;

let Transform511 = browser.currentScene.createNode("Transform");
Transform511.translation = new SFVec3f(new float[-0.0002,-0.1156,0.9412]);
let Shape512 = browser.currentScene.createNode("Shape");
Shape512.USE = "JointShape";
Transform511.child = new undefined();

Transform511.child[0] = Shape512;

HAnimSegment509.children[1] = Transform511;

let HAnimSite513 = browser.currentScene.createNode("HAnimSite");
HAnimSite513.name = "SEGMENT_FOR_l4_tip";
HAnimSite513.DEF = "hanim_SEGMENT_FOR_l4_tip";
let Transform514 = browser.currentScene.createNode("Transform");
Transform514.translation = new SFVec3f(new float[-0.0002,-0.1156,0.9412]);
let Shape515 = browser.currentScene.createNode("Shape");
Shape515.USE = "SiteShape";
Transform514.child = new undefined();

Transform514.child[0] = Shape515;

HAnimSite513.children = new MFNode();

HAnimSite513.children[0] = Transform514;

HAnimSegment509.children[2] = HAnimSite513;

HAnimJoint508.children = new MFNode();

HAnimJoint508.children[0] = HAnimSegment509;

let HAnimJoint516 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint516.name = "l3";
HAnimJoint516.DEF = "hanim_l3";
HAnimJoint516.center = new SFVec3f(new float[-0.0002,-0.1156,0.9574]);
HAnimJoint516.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint516.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment517 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment517.name = "SEGMENT_FOR_l3";
HAnimSegment517.DEF = "hanim_SEGMENT_FOR_l3";
let TouchSensor518 = browser.currentScene.createNode("TouchSensor");
TouchSensor518.description = "joint l3 segment SEGMENT_FOR_l3";
HAnimSegment517.children = new MFNode();

HAnimSegment517.children[0] = TouchSensor518;

let Transform519 = browser.currentScene.createNode("Transform");
Transform519.translation = new SFVec3f(new float[-0.0002,-0.1156,0.9574]);
let Shape520 = browser.currentScene.createNode("Shape");
Shape520.USE = "JointShape";
Transform519.child = new undefined();

Transform519.child[0] = Shape520;

HAnimSegment517.children[1] = Transform519;

let HAnimSite521 = browser.currentScene.createNode("HAnimSite");
HAnimSite521.name = "SEGMENT_FOR_l3_tip";
HAnimSite521.DEF = "hanim_SEGMENT_FOR_l3_tip";
let Transform522 = browser.currentScene.createNode("Transform");
Transform522.translation = new SFVec3f(new float[-0.0002,-0.1156,0.9574]);
let Shape523 = browser.currentScene.createNode("Shape");
Shape523.USE = "SiteShape";
Transform522.child = new undefined();

Transform522.child[0] = Shape523;

HAnimSite521.children = new MFNode();

HAnimSite521.children[0] = Transform522;

HAnimSegment517.children[2] = HAnimSite521;

HAnimJoint516.children = new MFNode();

HAnimJoint516.children[0] = HAnimSegment517;

let HAnimJoint524 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint524.name = "l2";
HAnimJoint524.DEF = "hanim_l2";
HAnimJoint524.center = new SFVec3f(new float[-0.0002,-0.1156,0.9738]);
HAnimJoint524.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint524.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment525 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment525.name = "SEGMENT_FOR_l2";
HAnimSegment525.DEF = "hanim_SEGMENT_FOR_l2";
let TouchSensor526 = browser.currentScene.createNode("TouchSensor");
TouchSensor526.description = "joint l2 segment SEGMENT_FOR_l2";
HAnimSegment525.children = new MFNode();

HAnimSegment525.children[0] = TouchSensor526;

let Transform527 = browser.currentScene.createNode("Transform");
Transform527.translation = new SFVec3f(new float[-0.0002,-0.1156,0.9738]);
let Shape528 = browser.currentScene.createNode("Shape");
Shape528.USE = "JointShape";
Transform527.child = new undefined();

Transform527.child[0] = Shape528;

HAnimSegment525.children[1] = Transform527;

let HAnimSite529 = browser.currentScene.createNode("HAnimSite");
HAnimSite529.name = "SEGMENT_FOR_l2_tip";
HAnimSite529.DEF = "hanim_SEGMENT_FOR_l2_tip";
let Transform530 = browser.currentScene.createNode("Transform");
Transform530.translation = new SFVec3f(new float[-0.0002,-0.1156,0.9738]);
let Shape531 = browser.currentScene.createNode("Shape");
Shape531.USE = "SiteShape";
Transform530.child = new undefined();

Transform530.child[0] = Shape531;

HAnimSite529.children = new MFNode();

HAnimSite529.children[0] = Transform530;

HAnimSegment525.children[2] = HAnimSite529;

HAnimJoint524.children = new MFNode();

HAnimJoint524.children[0] = HAnimSegment525;

let HAnimJoint532 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint532.name = "l1";
HAnimJoint532.DEF = "hanim_l1";
HAnimJoint532.center = new SFVec3f(new float[-0.0002,-0.1156,0.9911]);
HAnimJoint532.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint532.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment533 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment533.name = "SEGMENT_FOR_l1";
HAnimSegment533.DEF = "hanim_SEGMENT_FOR_l1";
let TouchSensor534 = browser.currentScene.createNode("TouchSensor");
TouchSensor534.description = "joint l1 segment SEGMENT_FOR_l1";
HAnimSegment533.children = new MFNode();

HAnimSegment533.children[0] = TouchSensor534;

let Transform535 = browser.currentScene.createNode("Transform");
Transform535.translation = new SFVec3f(new float[-0.0002,-0.1156,0.9911]);
let Shape536 = browser.currentScene.createNode("Shape");
Shape536.USE = "JointShape";
Transform535.child = new undefined();

Transform535.child[0] = Shape536;

HAnimSegment533.children[1] = Transform535;

let HAnimSite537 = browser.currentScene.createNode("HAnimSite");
HAnimSite537.name = "SEGMENT_FOR_l1_tip";
HAnimSite537.DEF = "hanim_SEGMENT_FOR_l1_tip";
let Transform538 = browser.currentScene.createNode("Transform");
Transform538.translation = new SFVec3f(new float[-0.0002,-0.1156,0.9911]);
let Shape539 = browser.currentScene.createNode("Shape");
Shape539.USE = "SiteShape";
Transform538.child = new undefined();

Transform538.child[0] = Shape539;

HAnimSite537.children = new MFNode();

HAnimSite537.children[0] = Transform538;

HAnimSegment533.children[2] = HAnimSite537;

HAnimJoint532.children = new MFNode();

HAnimJoint532.children[0] = HAnimSegment533;

let HAnimJoint540 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint540.name = "t12";
HAnimJoint540.DEF = "hanim_t12";
HAnimJoint540.center = new SFVec3f(new float[-0.0002,-0.1156,1.0145]);
HAnimJoint540.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint540.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment541 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment541.name = "SEGMENT_FOR_t12";
HAnimSegment541.DEF = "hanim_SEGMENT_FOR_t12";
let TouchSensor542 = browser.currentScene.createNode("TouchSensor");
TouchSensor542.description = "joint t12 segment SEGMENT_FOR_t12";
HAnimSegment541.children = new MFNode();

HAnimSegment541.children[0] = TouchSensor542;

let Transform543 = browser.currentScene.createNode("Transform");
Transform543.translation = new SFVec3f(new float[-0.0002,-0.1156,1.0145]);
let Shape544 = browser.currentScene.createNode("Shape");
Shape544.USE = "JointShape";
Transform543.child = new undefined();

Transform543.child[0] = Shape544;

HAnimSegment541.children[1] = Transform543;

let HAnimSite545 = browser.currentScene.createNode("HAnimSite");
HAnimSite545.name = "SEGMENT_FOR_t12_tip";
HAnimSite545.DEF = "hanim_SEGMENT_FOR_t12_tip";
let Transform546 = browser.currentScene.createNode("Transform");
Transform546.translation = new SFVec3f(new float[-0.0002,-0.1156,1.0145]);
let Shape547 = browser.currentScene.createNode("Shape");
Shape547.USE = "SiteShape";
Transform546.child = new undefined();

Transform546.child[0] = Shape547;

HAnimSite545.children = new MFNode();

HAnimSite545.children[0] = Transform546;

HAnimSegment541.children[2] = HAnimSite545;

HAnimJoint540.children = new MFNode();

HAnimJoint540.children[0] = HAnimSegment541;

let HAnimJoint548 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint548.name = "t11";
HAnimJoint548.DEF = "hanim_t11";
HAnimJoint548.center = new SFVec3f(new float[-0.0002,-0.1156,1.0381]);
HAnimJoint548.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint548.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment549 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment549.name = "SEGMENT_FOR_t11";
HAnimSegment549.DEF = "hanim_SEGMENT_FOR_t11";
let TouchSensor550 = browser.currentScene.createNode("TouchSensor");
TouchSensor550.description = "joint t11 segment SEGMENT_FOR_t11";
HAnimSegment549.children = new MFNode();

HAnimSegment549.children[0] = TouchSensor550;

let Transform551 = browser.currentScene.createNode("Transform");
Transform551.translation = new SFVec3f(new float[-0.0002,-0.1156,1.0381]);
let Shape552 = browser.currentScene.createNode("Shape");
Shape552.USE = "JointShape";
Transform551.child = new undefined();

Transform551.child[0] = Shape552;

HAnimSegment549.children[1] = Transform551;

let HAnimSite553 = browser.currentScene.createNode("HAnimSite");
HAnimSite553.name = "SEGMENT_FOR_t11_tip";
HAnimSite553.DEF = "hanim_SEGMENT_FOR_t11_tip";
let Transform554 = browser.currentScene.createNode("Transform");
Transform554.translation = new SFVec3f(new float[-0.0002,-0.1156,1.0381]);
let Shape555 = browser.currentScene.createNode("Shape");
Shape555.USE = "SiteShape";
Transform554.child = new undefined();

Transform554.child[0] = Shape555;

HAnimSite553.children = new MFNode();

HAnimSite553.children[0] = Transform554;

HAnimSegment549.children[2] = HAnimSite553;

HAnimJoint548.children = new MFNode();

HAnimJoint548.children[0] = HAnimSegment549;

let HAnimJoint556 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint556.name = "t10";
HAnimJoint556.DEF = "hanim_t10";
HAnimJoint556.center = new SFVec3f(new float[-0.0002,-0.1157,1.0552]);
HAnimJoint556.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint556.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment557 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment557.name = "SEGMENT_FOR_t10";
HAnimSegment557.DEF = "hanim_SEGMENT_FOR_t10";
let TouchSensor558 = browser.currentScene.createNode("TouchSensor");
TouchSensor558.description = "joint t10 segment SEGMENT_FOR_t10";
HAnimSegment557.children = new MFNode();

HAnimSegment557.children[0] = TouchSensor558;

let Transform559 = browser.currentScene.createNode("Transform");
Transform559.translation = new SFVec3f(new float[-0.0002,-0.1157,1.0552]);
let Shape560 = browser.currentScene.createNode("Shape");
Shape560.USE = "JointShape";
Transform559.child = new undefined();

Transform559.child[0] = Shape560;

HAnimSegment557.children[1] = Transform559;

let HAnimSite561 = browser.currentScene.createNode("HAnimSite");
HAnimSite561.name = "SEGMENT_FOR_t10_tip";
HAnimSite561.DEF = "hanim_SEGMENT_FOR_t10_tip";
let Transform562 = browser.currentScene.createNode("Transform");
Transform562.translation = new SFVec3f(new float[-0.0002,-0.1157,1.0552]);
let Shape563 = browser.currentScene.createNode("Shape");
Shape563.USE = "SiteShape";
Transform562.child = new undefined();

Transform562.child[0] = Shape563;

HAnimSite561.children = new MFNode();

HAnimSite561.children[0] = Transform562;

HAnimSegment557.children[2] = HAnimSite561;

HAnimJoint556.children = new MFNode();

HAnimJoint556.children[0] = HAnimSegment557;

let HAnimJoint564 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint564.name = "t9";
HAnimJoint564.DEF = "hanim_t9";
HAnimJoint564.center = new SFVec3f(new float[-0.0002,-0.1156,1.0699]);
HAnimJoint564.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint564.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment565 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment565.name = "SEGMENT_FOR_t9";
HAnimSegment565.DEF = "hanim_SEGMENT_FOR_t9";
let TouchSensor566 = browser.currentScene.createNode("TouchSensor");
TouchSensor566.description = "joint t9 segment SEGMENT_FOR_t9";
HAnimSegment565.children = new MFNode();

HAnimSegment565.children[0] = TouchSensor566;

let Transform567 = browser.currentScene.createNode("Transform");
Transform567.translation = new SFVec3f(new float[-0.0002,-0.1156,1.0699]);
let Shape568 = browser.currentScene.createNode("Shape");
Shape568.USE = "JointShape";
Transform567.child = new undefined();

Transform567.child[0] = Shape568;

HAnimSegment565.children[1] = Transform567;

let HAnimSite569 = browser.currentScene.createNode("HAnimSite");
HAnimSite569.name = "SEGMENT_FOR_t9_tip";
HAnimSite569.DEF = "hanim_SEGMENT_FOR_t9_tip";
let Transform570 = browser.currentScene.createNode("Transform");
Transform570.translation = new SFVec3f(new float[-0.0002,-0.1156,1.0699]);
let Shape571 = browser.currentScene.createNode("Shape");
Shape571.USE = "SiteShape";
Transform570.child = new undefined();

Transform570.child[0] = Shape571;

HAnimSite569.children = new MFNode();

HAnimSite569.children[0] = Transform570;

HAnimSegment565.children[2] = HAnimSite569;

HAnimJoint564.children = new MFNode();

HAnimJoint564.children[0] = HAnimSegment565;

let HAnimJoint572 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint572.name = "t8";
HAnimJoint572.DEF = "hanim_t8";
HAnimJoint572.center = new SFVec3f(new float[-0.0002,-0.1156,1.0845]);
HAnimJoint572.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint572.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment573 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment573.name = "SEGMENT_FOR_t8";
HAnimSegment573.DEF = "hanim_SEGMENT_FOR_t8";
let TouchSensor574 = browser.currentScene.createNode("TouchSensor");
TouchSensor574.description = "joint t8 segment SEGMENT_FOR_t8";
HAnimSegment573.children = new MFNode();

HAnimSegment573.children[0] = TouchSensor574;

let Transform575 = browser.currentScene.createNode("Transform");
Transform575.translation = new SFVec3f(new float[-0.0002,-0.1156,1.0845]);
let Shape576 = browser.currentScene.createNode("Shape");
Shape576.USE = "JointShape";
Transform575.child = new undefined();

Transform575.child[0] = Shape576;

HAnimSegment573.children[1] = Transform575;

let HAnimSite577 = browser.currentScene.createNode("HAnimSite");
HAnimSite577.name = "SEGMENT_FOR_t8_tip";
HAnimSite577.DEF = "hanim_SEGMENT_FOR_t8_tip";
let Transform578 = browser.currentScene.createNode("Transform");
Transform578.translation = new SFVec3f(new float[-0.0002,-0.1156,1.0845]);
let Shape579 = browser.currentScene.createNode("Shape");
Shape579.USE = "SiteShape";
Transform578.child = new undefined();

Transform578.child[0] = Shape579;

HAnimSite577.children = new MFNode();

HAnimSite577.children[0] = Transform578;

HAnimSegment573.children[2] = HAnimSite577;

HAnimJoint572.children = new MFNode();

HAnimJoint572.children[0] = HAnimSegment573;

let HAnimJoint580 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint580.name = "t7";
HAnimJoint580.DEF = "hanim_t7";
HAnimJoint580.center = new SFVec3f(new float[-0.0002,-0.1156,1.1002]);
HAnimJoint580.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint580.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment581 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment581.name = "SEGMENT_FOR_t7";
HAnimSegment581.DEF = "hanim_SEGMENT_FOR_t7";
let TouchSensor582 = browser.currentScene.createNode("TouchSensor");
TouchSensor582.description = "joint t7 segment SEGMENT_FOR_t7";
HAnimSegment581.children = new MFNode();

HAnimSegment581.children[0] = TouchSensor582;

let Transform583 = browser.currentScene.createNode("Transform");
Transform583.translation = new SFVec3f(new float[-0.0002,-0.1156,1.1002]);
let Shape584 = browser.currentScene.createNode("Shape");
Shape584.USE = "JointShape";
Transform583.child = new undefined();

Transform583.child[0] = Shape584;

HAnimSegment581.children[1] = Transform583;

let HAnimSite585 = browser.currentScene.createNode("HAnimSite");
HAnimSite585.name = "SEGMENT_FOR_t7_tip";
HAnimSite585.DEF = "hanim_SEGMENT_FOR_t7_tip";
let Transform586 = browser.currentScene.createNode("Transform");
Transform586.translation = new SFVec3f(new float[-0.0002,-0.1156,1.1002]);
let Shape587 = browser.currentScene.createNode("Shape");
Shape587.USE = "SiteShape";
Transform586.child = new undefined();

Transform586.child[0] = Shape587;

HAnimSite585.children = new MFNode();

HAnimSite585.children[0] = Transform586;

HAnimSegment581.children[2] = HAnimSite585;

HAnimJoint580.children = new MFNode();

HAnimJoint580.children[0] = HAnimSegment581;

let HAnimJoint588 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint588.name = "t6";
HAnimJoint588.DEF = "hanim_t6";
HAnimJoint588.center = new SFVec3f(new float[-0.0002,-0.1156,1.1131]);
HAnimJoint588.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint588.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment589 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment589.name = "SEGMENT_FOR_t6";
HAnimSegment589.DEF = "hanim_SEGMENT_FOR_t6";
let TouchSensor590 = browser.currentScene.createNode("TouchSensor");
TouchSensor590.description = "joint t6 segment SEGMENT_FOR_t6";
HAnimSegment589.children = new MFNode();

HAnimSegment589.children[0] = TouchSensor590;

let Transform591 = browser.currentScene.createNode("Transform");
Transform591.translation = new SFVec3f(new float[-0.0002,-0.1156,1.1131]);
let Shape592 = browser.currentScene.createNode("Shape");
Shape592.USE = "JointShape";
Transform591.child = new undefined();

Transform591.child[0] = Shape592;

HAnimSegment589.children[1] = Transform591;

let HAnimSite593 = browser.currentScene.createNode("HAnimSite");
HAnimSite593.name = "SEGMENT_FOR_t6_tip";
HAnimSite593.DEF = "hanim_SEGMENT_FOR_t6_tip";
let Transform594 = browser.currentScene.createNode("Transform");
Transform594.translation = new SFVec3f(new float[-0.0002,-0.1156,1.1131]);
let Shape595 = browser.currentScene.createNode("Shape");
Shape595.USE = "SiteShape";
Transform594.child = new undefined();

Transform594.child[0] = Shape595;

HAnimSite593.children = new MFNode();

HAnimSite593.children[0] = Transform594;

HAnimSegment589.children[2] = HAnimSite593;

HAnimJoint588.children = new MFNode();

HAnimJoint588.children[0] = HAnimSegment589;

let HAnimJoint596 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint596.name = "t5";
HAnimJoint596.DEF = "hanim_t5";
HAnimJoint596.center = new SFVec3f(new float[-0.0002,-0.1156,1.1286]);
HAnimJoint596.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint596.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment597 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment597.name = "SEGMENT_FOR_t5";
HAnimSegment597.DEF = "hanim_SEGMENT_FOR_t5";
let TouchSensor598 = browser.currentScene.createNode("TouchSensor");
TouchSensor598.description = "joint t5 segment SEGMENT_FOR_t5";
HAnimSegment597.children = new MFNode();

HAnimSegment597.children[0] = TouchSensor598;

let Transform599 = browser.currentScene.createNode("Transform");
Transform599.translation = new SFVec3f(new float[-0.0002,-0.1156,1.1286]);
let Shape600 = browser.currentScene.createNode("Shape");
Shape600.USE = "JointShape";
Transform599.child = new undefined();

Transform599.child[0] = Shape600;

HAnimSegment597.children[1] = Transform599;

let HAnimSite601 = browser.currentScene.createNode("HAnimSite");
HAnimSite601.name = "SEGMENT_FOR_t5_tip";
HAnimSite601.DEF = "hanim_SEGMENT_FOR_t5_tip";
let Transform602 = browser.currentScene.createNode("Transform");
Transform602.translation = new SFVec3f(new float[-0.0002,-0.1156,1.1286]);
let Shape603 = browser.currentScene.createNode("Shape");
Shape603.USE = "SiteShape";
Transform602.child = new undefined();

Transform602.child[0] = Shape603;

HAnimSite601.children = new MFNode();

HAnimSite601.children[0] = Transform602;

HAnimSegment597.children[2] = HAnimSite601;

HAnimJoint596.children = new MFNode();

HAnimJoint596.children[0] = HAnimSegment597;

let HAnimJoint604 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint604.name = "t4";
HAnimJoint604.DEF = "hanim_t4";
HAnimJoint604.center = new SFVec3f(new float[-0.0002,-0.1156,1.1439]);
HAnimJoint604.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint604.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment605 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment605.name = "SEGMENT_FOR_t4";
HAnimSegment605.DEF = "hanim_SEGMENT_FOR_t4";
let TouchSensor606 = browser.currentScene.createNode("TouchSensor");
TouchSensor606.description = "joint t4 segment SEGMENT_FOR_t4";
HAnimSegment605.children = new MFNode();

HAnimSegment605.children[0] = TouchSensor606;

let Transform607 = browser.currentScene.createNode("Transform");
Transform607.translation = new SFVec3f(new float[-0.0002,-0.1156,1.1439]);
let Shape608 = browser.currentScene.createNode("Shape");
Shape608.USE = "JointShape";
Transform607.child = new undefined();

Transform607.child[0] = Shape608;

HAnimSegment605.children[1] = Transform607;

let HAnimSite609 = browser.currentScene.createNode("HAnimSite");
HAnimSite609.name = "SEGMENT_FOR_t4_tip";
HAnimSite609.DEF = "hanim_SEGMENT_FOR_t4_tip";
let Transform610 = browser.currentScene.createNode("Transform");
Transform610.translation = new SFVec3f(new float[-0.0002,-0.1156,1.1439]);
let Shape611 = browser.currentScene.createNode("Shape");
Shape611.USE = "SiteShape";
Transform610.child = new undefined();

Transform610.child[0] = Shape611;

HAnimSite609.children = new MFNode();

HAnimSite609.children[0] = Transform610;

HAnimSegment605.children[2] = HAnimSite609;

HAnimJoint604.children = new MFNode();

HAnimJoint604.children[0] = HAnimSegment605;

let HAnimJoint612 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint612.name = "t3";
HAnimJoint612.DEF = "hanim_t3";
HAnimJoint612.center = new SFVec3f(new float[-0.0002,-0.1156,1.1623]);
HAnimJoint612.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint612.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment613 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment613.name = "SEGMENT_FOR_t3";
HAnimSegment613.DEF = "hanim_SEGMENT_FOR_t3";
let TouchSensor614 = browser.currentScene.createNode("TouchSensor");
TouchSensor614.description = "joint t3 segment SEGMENT_FOR_t3";
HAnimSegment613.children = new MFNode();

HAnimSegment613.children[0] = TouchSensor614;

let Transform615 = browser.currentScene.createNode("Transform");
Transform615.translation = new SFVec3f(new float[-0.0002,-0.1156,1.1623]);
let Shape616 = browser.currentScene.createNode("Shape");
Shape616.USE = "JointShape";
Transform615.child = new undefined();

Transform615.child[0] = Shape616;

HAnimSegment613.children[1] = Transform615;

let HAnimSite617 = browser.currentScene.createNode("HAnimSite");
HAnimSite617.name = "SEGMENT_FOR_t3_tip";
HAnimSite617.DEF = "hanim_SEGMENT_FOR_t3_tip";
let Transform618 = browser.currentScene.createNode("Transform");
Transform618.translation = new SFVec3f(new float[-0.0002,-0.1156,1.1623]);
let Shape619 = browser.currentScene.createNode("Shape");
Shape619.USE = "SiteShape";
Transform618.child = new undefined();

Transform618.child[0] = Shape619;

HAnimSite617.children = new MFNode();

HAnimSite617.children[0] = Transform618;

HAnimSegment613.children[2] = HAnimSite617;

HAnimJoint612.children = new MFNode();

HAnimJoint612.children[0] = HAnimSegment613;

let HAnimJoint620 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint620.name = "t2";
HAnimJoint620.DEF = "hanim_t2";
HAnimJoint620.center = new SFVec3f(new float[-0.0002,-0.1157,1.1871]);
HAnimJoint620.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint620.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment621 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment621.name = "SEGMENT_FOR_t2";
HAnimSegment621.DEF = "hanim_SEGMENT_FOR_t2";
let TouchSensor622 = browser.currentScene.createNode("TouchSensor");
TouchSensor622.description = "joint t2 segment SEGMENT_FOR_t2";
HAnimSegment621.children = new MFNode();

HAnimSegment621.children[0] = TouchSensor622;

let Transform623 = browser.currentScene.createNode("Transform");
Transform623.translation = new SFVec3f(new float[-0.0002,-0.1157,1.1871]);
let Shape624 = browser.currentScene.createNode("Shape");
Shape624.USE = "JointShape";
Transform623.child = new undefined();

Transform623.child[0] = Shape624;

HAnimSegment621.children[1] = Transform623;

let HAnimSite625 = browser.currentScene.createNode("HAnimSite");
HAnimSite625.name = "SEGMENT_FOR_t2_tip";
HAnimSite625.DEF = "hanim_SEGMENT_FOR_t2_tip";
let Transform626 = browser.currentScene.createNode("Transform");
Transform626.translation = new SFVec3f(new float[-0.0002,-0.1157,1.1871]);
let Shape627 = browser.currentScene.createNode("Shape");
Shape627.USE = "SiteShape";
Transform626.child = new undefined();

Transform626.child[0] = Shape627;

HAnimSite625.children = new MFNode();

HAnimSite625.children[0] = Transform626;

HAnimSegment621.children[2] = HAnimSite625;

HAnimJoint620.children = new MFNode();

HAnimJoint620.children[0] = HAnimSegment621;

let HAnimJoint628 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint628.name = "t1";
HAnimJoint628.DEF = "hanim_t1";
HAnimJoint628.center = new SFVec3f(new float[-0.0002,-0.1156,1.2109]);
HAnimJoint628.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint628.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment629 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment629.name = "SEGMENT_FOR_t1";
HAnimSegment629.DEF = "hanim_SEGMENT_FOR_t1";
let TouchSensor630 = browser.currentScene.createNode("TouchSensor");
TouchSensor630.description = "joint t1 segment SEGMENT_FOR_t1";
HAnimSegment629.children = new MFNode();

HAnimSegment629.children[0] = TouchSensor630;

let Transform631 = browser.currentScene.createNode("Transform");
Transform631.translation = new SFVec3f(new float[-0.0002,-0.1156,1.2109]);
let Shape632 = browser.currentScene.createNode("Shape");
Shape632.USE = "JointShape";
Transform631.child = new undefined();

Transform631.child[0] = Shape632;

HAnimSegment629.children[1] = Transform631;

let HAnimSite633 = browser.currentScene.createNode("HAnimSite");
HAnimSite633.name = "SEGMENT_FOR_t1_tip";
HAnimSite633.DEF = "hanim_SEGMENT_FOR_t1_tip";
let Transform634 = browser.currentScene.createNode("Transform");
Transform634.translation = new SFVec3f(new float[-0.0002,-0.1156,1.2109]);
let Shape635 = browser.currentScene.createNode("Shape");
Shape635.USE = "SiteShape";
Transform634.child = new undefined();

Transform634.child[0] = Shape635;

HAnimSite633.children = new MFNode();

HAnimSite633.children[0] = Transform634;

HAnimSegment629.children[2] = HAnimSite633;

HAnimJoint628.children = new MFNode();

HAnimJoint628.children[0] = HAnimSegment629;

let HAnimJoint636 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint636.name = "c7";
HAnimJoint636.DEF = "hanim_c7";
HAnimJoint636.center = new SFVec3f(new float[-0.0002,-0.1169,1.2368]);
HAnimJoint636.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint636.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment637 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment637.name = "SEGMENT_FOR_c7";
HAnimSegment637.DEF = "hanim_SEGMENT_FOR_c7";
let TouchSensor638 = browser.currentScene.createNode("TouchSensor");
TouchSensor638.description = "joint c7 segment SEGMENT_FOR_c7";
HAnimSegment637.children = new MFNode();

HAnimSegment637.children[0] = TouchSensor638;

let Transform639 = browser.currentScene.createNode("Transform");
Transform639.translation = new SFVec3f(new float[-0.0002,-0.1169,1.2368]);
let Shape640 = browser.currentScene.createNode("Shape");
Shape640.USE = "JointShape";
Transform639.child = new undefined();

Transform639.child[0] = Shape640;

HAnimSegment637.children[1] = Transform639;

let HAnimSite641 = browser.currentScene.createNode("HAnimSite");
HAnimSite641.name = "SEGMENT_FOR_c7_tip";
HAnimSite641.DEF = "hanim_SEGMENT_FOR_c7_tip";
let Transform642 = browser.currentScene.createNode("Transform");
Transform642.translation = new SFVec3f(new float[-0.0002,-0.1169,1.2368]);
let Shape643 = browser.currentScene.createNode("Shape");
Shape643.USE = "SiteShape";
Transform642.child = new undefined();

Transform642.child[0] = Shape643;

HAnimSite641.children = new MFNode();

HAnimSite641.children[0] = Transform642;

HAnimSegment637.children[2] = HAnimSite641;

HAnimJoint636.children = new MFNode();

HAnimJoint636.children[0] = HAnimSegment637;

let HAnimJoint644 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint644.name = "c6";
HAnimJoint644.DEF = "hanim_c6";
HAnimJoint644.center = new SFVec3f(new float[-0.0002,-0.1169,1.249]);
HAnimJoint644.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint644.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment645 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment645.name = "SEGMENT_FOR_c6";
HAnimSegment645.DEF = "hanim_SEGMENT_FOR_c6";
let TouchSensor646 = browser.currentScene.createNode("TouchSensor");
TouchSensor646.description = "joint c6 segment SEGMENT_FOR_c6";
HAnimSegment645.children = new MFNode();

HAnimSegment645.children[0] = TouchSensor646;

let Transform647 = browser.currentScene.createNode("Transform");
Transform647.translation = new SFVec3f(new float[-0.0002,-0.1169,1.249]);
let Shape648 = browser.currentScene.createNode("Shape");
Shape648.USE = "JointShape";
Transform647.child = new undefined();

Transform647.child[0] = Shape648;

HAnimSegment645.children[1] = Transform647;

let HAnimSite649 = browser.currentScene.createNode("HAnimSite");
HAnimSite649.name = "SEGMENT_FOR_c6_tip";
HAnimSite649.DEF = "hanim_SEGMENT_FOR_c6_tip";
let Transform650 = browser.currentScene.createNode("Transform");
Transform650.translation = new SFVec3f(new float[-0.0002,-0.1169,1.249]);
let Shape651 = browser.currentScene.createNode("Shape");
Shape651.USE = "SiteShape";
Transform650.child = new undefined();

Transform650.child[0] = Shape651;

HAnimSite649.children = new MFNode();

HAnimSite649.children[0] = Transform650;

HAnimSegment645.children[2] = HAnimSite649;

HAnimJoint644.children = new MFNode();

HAnimJoint644.children[0] = HAnimSegment645;

let HAnimJoint652 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint652.name = "c5";
HAnimJoint652.DEF = "hanim_c5";
HAnimJoint652.center = new SFVec3f(new float[-0.0002,-0.1169,1.2613]);
HAnimJoint652.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint652.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment653 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment653.name = "SEGMENT_FOR_c5";
HAnimSegment653.DEF = "hanim_SEGMENT_FOR_c5";
let TouchSensor654 = browser.currentScene.createNode("TouchSensor");
TouchSensor654.description = "joint c5 segment SEGMENT_FOR_c5";
HAnimSegment653.children = new MFNode();

HAnimSegment653.children[0] = TouchSensor654;

let Transform655 = browser.currentScene.createNode("Transform");
Transform655.translation = new SFVec3f(new float[-0.0002,-0.1169,1.2613]);
let Shape656 = browser.currentScene.createNode("Shape");
Shape656.USE = "JointShape";
Transform655.child = new undefined();

Transform655.child[0] = Shape656;

HAnimSegment653.children[1] = Transform655;

let HAnimSite657 = browser.currentScene.createNode("HAnimSite");
HAnimSite657.name = "SEGMENT_FOR_c5_tip";
HAnimSite657.DEF = "hanim_SEGMENT_FOR_c5_tip";
let Transform658 = browser.currentScene.createNode("Transform");
Transform658.translation = new SFVec3f(new float[-0.0002,-0.1169,1.2613]);
let Shape659 = browser.currentScene.createNode("Shape");
Shape659.USE = "SiteShape";
Transform658.child = new undefined();

Transform658.child[0] = Shape659;

HAnimSite657.children = new MFNode();

HAnimSite657.children[0] = Transform658;

HAnimSegment653.children[2] = HAnimSite657;

HAnimJoint652.children = new MFNode();

HAnimJoint652.children[0] = HAnimSegment653;

let HAnimJoint660 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint660.name = "c4";
HAnimJoint660.DEF = "hanim_c4";
HAnimJoint660.center = new SFVec3f(new float[-0.0002,-0.1169,1.2737]);
HAnimJoint660.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint660.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment661 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment661.name = "SEGMENT_FOR_c4";
HAnimSegment661.DEF = "hanim_SEGMENT_FOR_c4";
let TouchSensor662 = browser.currentScene.createNode("TouchSensor");
TouchSensor662.description = "joint c4 segment SEGMENT_FOR_c4";
HAnimSegment661.children = new MFNode();

HAnimSegment661.children[0] = TouchSensor662;

let Transform663 = browser.currentScene.createNode("Transform");
Transform663.translation = new SFVec3f(new float[-0.0002,-0.1169,1.2737]);
let Shape664 = browser.currentScene.createNode("Shape");
Shape664.USE = "JointShape";
Transform663.child = new undefined();

Transform663.child[0] = Shape664;

HAnimSegment661.children[1] = Transform663;

let HAnimSite665 = browser.currentScene.createNode("HAnimSite");
HAnimSite665.name = "SEGMENT_FOR_c4_tip";
HAnimSite665.DEF = "hanim_SEGMENT_FOR_c4_tip";
let Transform666 = browser.currentScene.createNode("Transform");
Transform666.translation = new SFVec3f(new float[-0.0002,-0.1169,1.2737]);
let Shape667 = browser.currentScene.createNode("Shape");
Shape667.USE = "SiteShape";
Transform666.child = new undefined();

Transform666.child[0] = Shape667;

HAnimSite665.children = new MFNode();

HAnimSite665.children[0] = Transform666;

HAnimSegment661.children[2] = HAnimSite665;

HAnimJoint660.children = new MFNode();

HAnimJoint660.children[0] = HAnimSegment661;

let HAnimJoint668 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint668.name = "c3";
HAnimJoint668.DEF = "hanim_c3";
HAnimJoint668.center = new SFVec3f(new float[-0.0002,-0.1169,1.2865]);
HAnimJoint668.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint668.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment669 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment669.name = "SEGMENT_FOR_c3";
HAnimSegment669.DEF = "hanim_SEGMENT_FOR_c3";
let TouchSensor670 = browser.currentScene.createNode("TouchSensor");
TouchSensor670.description = "joint c3 segment SEGMENT_FOR_c3";
HAnimSegment669.children = new MFNode();

HAnimSegment669.children[0] = TouchSensor670;

let Transform671 = browser.currentScene.createNode("Transform");
Transform671.translation = new SFVec3f(new float[-0.0002,-0.1169,1.2865]);
let Shape672 = browser.currentScene.createNode("Shape");
Shape672.USE = "JointShape";
Transform671.child = new undefined();

Transform671.child[0] = Shape672;

HAnimSegment669.children[1] = Transform671;

let HAnimSite673 = browser.currentScene.createNode("HAnimSite");
HAnimSite673.name = "SEGMENT_FOR_c3_tip";
HAnimSite673.DEF = "hanim_SEGMENT_FOR_c3_tip";
let Transform674 = browser.currentScene.createNode("Transform");
Transform674.translation = new SFVec3f(new float[-0.0002,-0.1169,1.2865]);
let Shape675 = browser.currentScene.createNode("Shape");
Shape675.USE = "SiteShape";
Transform674.child = new undefined();

Transform674.child[0] = Shape675;

HAnimSite673.children = new MFNode();

HAnimSite673.children[0] = Transform674;

HAnimSegment669.children[2] = HAnimSite673;

HAnimJoint668.children = new MFNode();

HAnimJoint668.children[0] = HAnimSegment669;

let HAnimJoint676 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint676.name = "c2";
HAnimJoint676.DEF = "hanim_c2";
HAnimJoint676.center = new SFVec3f(new float[-0.0002,-0.1169,1.2982]);
HAnimJoint676.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint676.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment677 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment677.name = "SEGMENT_FOR_c2";
HAnimSegment677.DEF = "hanim_SEGMENT_FOR_c2";
let TouchSensor678 = browser.currentScene.createNode("TouchSensor");
TouchSensor678.description = "joint c2 segment SEGMENT_FOR_c2";
HAnimSegment677.children = new MFNode();

HAnimSegment677.children[0] = TouchSensor678;

let Transform679 = browser.currentScene.createNode("Transform");
Transform679.translation = new SFVec3f(new float[-0.0002,-0.1169,1.2982]);
let Shape680 = browser.currentScene.createNode("Shape");
Shape680.USE = "JointShape";
Transform679.child = new undefined();

Transform679.child[0] = Shape680;

HAnimSegment677.children[1] = Transform679;

let HAnimSite681 = browser.currentScene.createNode("HAnimSite");
HAnimSite681.name = "SEGMENT_FOR_c2_tip";
HAnimSite681.DEF = "hanim_SEGMENT_FOR_c2_tip";
let Transform682 = browser.currentScene.createNode("Transform");
Transform682.translation = new SFVec3f(new float[-0.0002,-0.1169,1.2982]);
let Shape683 = browser.currentScene.createNode("Shape");
Shape683.USE = "SiteShape";
Transform682.child = new undefined();

Transform682.child[0] = Shape683;

HAnimSite681.children = new MFNode();

HAnimSite681.children[0] = Transform682;

HAnimSegment677.children[2] = HAnimSite681;

HAnimJoint676.children = new MFNode();

HAnimJoint676.children[0] = HAnimSegment677;

let HAnimJoint684 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint684.name = "c1";
HAnimJoint684.DEF = "hanim_c1";
HAnimJoint684.center = new SFVec3f(new float[-0.0002,-0.1169,1.3099]);
HAnimJoint684.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint684.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment685 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment685.name = "SEGMENT_FOR_c1";
HAnimSegment685.DEF = "hanim_SEGMENT_FOR_c1";
let TouchSensor686 = browser.currentScene.createNode("TouchSensor");
TouchSensor686.description = "joint c1 segment SEGMENT_FOR_c1";
HAnimSegment685.children = new MFNode();

HAnimSegment685.children[0] = TouchSensor686;

let Transform687 = browser.currentScene.createNode("Transform");
Transform687.translation = new SFVec3f(new float[-0.0002,-0.1169,1.3099]);
let Shape688 = browser.currentScene.createNode("Shape");
Shape688.USE = "JointShape";
Transform687.child = new undefined();

Transform687.child[0] = Shape688;

HAnimSegment685.children[1] = Transform687;

let HAnimSite689 = browser.currentScene.createNode("HAnimSite");
HAnimSite689.name = "SEGMENT_FOR_c1_tip";
HAnimSite689.DEF = "hanim_SEGMENT_FOR_c1_tip";
let Transform690 = browser.currentScene.createNode("Transform");
Transform690.translation = new SFVec3f(new float[-0.0002,-0.1169,1.3099]);
let Shape691 = browser.currentScene.createNode("Shape");
Shape691.USE = "SiteShape";
Transform690.child = new undefined();

Transform690.child[0] = Shape691;

HAnimSite689.children = new MFNode();

HAnimSite689.children[0] = Transform690;

HAnimSegment685.children[2] = HAnimSite689;

HAnimJoint684.children = new MFNode();

HAnimJoint684.children[0] = HAnimSegment685;

let HAnimJoint692 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint692.name = "skull";
HAnimJoint692.DEF = "hanim_skull";
HAnimJoint692.center = new SFVec3f(new float[-0.0002,-0.1173,1.3041]);
HAnimJoint692.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint692.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment693 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment693.name = "SEGMENT_FOR_skull";
HAnimSegment693.DEF = "hanim_SEGMENT_FOR_skull";
let TouchSensor694 = browser.currentScene.createNode("TouchSensor");
TouchSensor694.description = "joint skull segment SEGMENT_FOR_skull";
HAnimSegment693.children = new MFNode();

HAnimSegment693.children[0] = TouchSensor694;

let Transform695 = browser.currentScene.createNode("Transform");
Transform695.translation = new SFVec3f(new float[-0.0002,-0.1173,1.3041]);
let Shape696 = browser.currentScene.createNode("Shape");
Shape696.USE = "JointShape";
Transform695.child = new undefined();

Transform695.child[0] = Shape696;

HAnimSegment693.children[1] = Transform695;

let HAnimSite697 = browser.currentScene.createNode("HAnimSite");
HAnimSite697.name = "SEGMENT_FOR_skull_tip";
HAnimSite697.DEF = "hanim_SEGMENT_FOR_skull_tip";
let Transform698 = browser.currentScene.createNode("Transform");
Transform698.translation = new SFVec3f(new float[-0.0002,-0.1173,1.3041]);
let Shape699 = browser.currentScene.createNode("Shape");
Shape699.USE = "SiteShape";
Transform698.child = new undefined();

Transform698.child[0] = Shape699;

HAnimSite697.children = new MFNode();

HAnimSite697.children[0] = Transform698;

HAnimSegment693.children[2] = HAnimSite697;

HAnimJoint692.children = new MFNode();

HAnimJoint692.children[0] = HAnimSegment693;

let HAnimJoint700 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint700.name = "l_eyelid";
HAnimJoint700.DEF = "hanim_l_eyelid";
HAnimJoint700.center = new SFVec3f(new float[0.0503,-0.0689,1.4157]);
HAnimJoint700.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint700.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment701 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment701.name = "SEGMENT_FOR_l_eyelid";
HAnimSegment701.DEF = "hanim_SEGMENT_FOR_l_eyelid";
let TouchSensor702 = browser.currentScene.createNode("TouchSensor");
TouchSensor702.description = "joint l_eyelid segment SEGMENT_FOR_l_eyelid";
HAnimSegment701.children = new MFNode();

HAnimSegment701.children[0] = TouchSensor702;

let Transform703 = browser.currentScene.createNode("Transform");
Transform703.translation = new SFVec3f(new float[0.0503,-0.0689,1.4157]);
let Shape704 = browser.currentScene.createNode("Shape");
Shape704.USE = "JointShape";
Transform703.child = new undefined();

Transform703.child[0] = Shape704;

HAnimSegment701.children[1] = Transform703;

let HAnimSite705 = browser.currentScene.createNode("HAnimSite");
HAnimSite705.name = "SEGMENT_FOR_l_eyelid_tip";
HAnimSite705.DEF = "hanim_SEGMENT_FOR_l_eyelid_tip";
let Transform706 = browser.currentScene.createNode("Transform");
Transform706.translation = new SFVec3f(new float[0.0503,-0.0689,1.4157]);
let Shape707 = browser.currentScene.createNode("Shape");
Shape707.USE = "SiteShape";
Transform706.child = new undefined();

Transform706.child[0] = Shape707;

HAnimSite705.children = new MFNode();

HAnimSite705.children[0] = Transform706;

HAnimSegment701.children[2] = HAnimSite705;

HAnimJoint700.children = new MFNode();

HAnimJoint700.children[0] = HAnimSegment701;

HAnimJoint692.children[1] = HAnimJoint700;

let HAnimJoint708 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint708.name = "r_eyelid";
HAnimJoint708.DEF = "hanim_r_eyelid";
HAnimJoint708.center = new SFVec3f(new float[-0.0507,-0.0689,1.4157]);
HAnimJoint708.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint708.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment709 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment709.name = "SEGMENT_FOR_r_eyelid";
HAnimSegment709.DEF = "hanim_SEGMENT_FOR_r_eyelid";
let TouchSensor710 = browser.currentScene.createNode("TouchSensor");
TouchSensor710.description = "joint r_eyelid segment SEGMENT_FOR_r_eyelid";
HAnimSegment709.children = new MFNode();

HAnimSegment709.children[0] = TouchSensor710;

let Transform711 = browser.currentScene.createNode("Transform");
Transform711.translation = new SFVec3f(new float[-0.0507,-0.0689,1.4157]);
let Shape712 = browser.currentScene.createNode("Shape");
Shape712.USE = "JointShape";
Transform711.child = new undefined();

Transform711.child[0] = Shape712;

HAnimSegment709.children[1] = Transform711;

let HAnimSite713 = browser.currentScene.createNode("HAnimSite");
HAnimSite713.name = "SEGMENT_FOR_r_eyelid_tip";
HAnimSite713.DEF = "hanim_SEGMENT_FOR_r_eyelid_tip";
let Transform714 = browser.currentScene.createNode("Transform");
Transform714.translation = new SFVec3f(new float[-0.0507,-0.0689,1.4157]);
let Shape715 = browser.currentScene.createNode("Shape");
Shape715.USE = "SiteShape";
Transform714.child = new undefined();

Transform714.child[0] = Shape715;

HAnimSite713.children = new MFNode();

HAnimSite713.children[0] = Transform714;

HAnimSegment709.children[2] = HAnimSite713;

HAnimJoint708.children = new MFNode();

HAnimJoint708.children[0] = HAnimSegment709;

HAnimJoint692.children[2] = HAnimJoint708;

let HAnimJoint716 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint716.name = "l_eyeball";
HAnimJoint716.DEF = "hanim_l_eyeball";
HAnimJoint716.center = new SFVec3f(new float[0.0479,-0.0188,1.3963]);
HAnimJoint716.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint716.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment717 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment717.name = "SEGMENT_FOR_l_eyeball";
HAnimSegment717.DEF = "hanim_SEGMENT_FOR_l_eyeball";
let TouchSensor718 = browser.currentScene.createNode("TouchSensor");
TouchSensor718.description = "joint l_eyeball segment SEGMENT_FOR_l_eyeball";
HAnimSegment717.children = new MFNode();

HAnimSegment717.children[0] = TouchSensor718;

let Transform719 = browser.currentScene.createNode("Transform");
Transform719.translation = new SFVec3f(new float[0.0479,-0.0188,1.3963]);
let Shape720 = browser.currentScene.createNode("Shape");
Shape720.USE = "JointShape";
Transform719.child = new undefined();

Transform719.child[0] = Shape720;

HAnimSegment717.children[1] = Transform719;

let HAnimSite721 = browser.currentScene.createNode("HAnimSite");
HAnimSite721.name = "SEGMENT_FOR_l_eyeball_tip";
HAnimSite721.DEF = "hanim_SEGMENT_FOR_l_eyeball_tip";
let Transform722 = browser.currentScene.createNode("Transform");
Transform722.translation = new SFVec3f(new float[0.0479,-0.0188,1.3963]);
let Shape723 = browser.currentScene.createNode("Shape");
Shape723.USE = "SiteShape";
Transform722.child = new undefined();

Transform722.child[0] = Shape723;

HAnimSite721.children = new MFNode();

HAnimSite721.children[0] = Transform722;

HAnimSegment717.children[2] = HAnimSite721;

HAnimJoint716.children = new MFNode();

HAnimJoint716.children[0] = HAnimSegment717;

HAnimJoint692.children[3] = HAnimJoint716;

let HAnimJoint724 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint724.name = "r_eyeball";
HAnimJoint724.DEF = "hanim_r_eyeball";
HAnimJoint724.center = new SFVec3f(new float[-0.0483,-0.0188,1.3963]);
HAnimJoint724.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint724.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment725 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment725.name = "SEGMENT_FOR_r_eyeball";
HAnimSegment725.DEF = "hanim_SEGMENT_FOR_r_eyeball";
let TouchSensor726 = browser.currentScene.createNode("TouchSensor");
TouchSensor726.description = "joint r_eyeball segment SEGMENT_FOR_r_eyeball";
HAnimSegment725.children = new MFNode();

HAnimSegment725.children[0] = TouchSensor726;

let Transform727 = browser.currentScene.createNode("Transform");
Transform727.translation = new SFVec3f(new float[-0.0483,-0.0188,1.3963]);
let Shape728 = browser.currentScene.createNode("Shape");
Shape728.USE = "JointShape";
Transform727.child = new undefined();

Transform727.child[0] = Shape728;

HAnimSegment725.children[1] = Transform727;

let HAnimSite729 = browser.currentScene.createNode("HAnimSite");
HAnimSite729.name = "SEGMENT_FOR_r_eyeball_tip";
HAnimSite729.DEF = "hanim_SEGMENT_FOR_r_eyeball_tip";
let Transform730 = browser.currentScene.createNode("Transform");
Transform730.translation = new SFVec3f(new float[-0.0483,-0.0188,1.3963]);
let Shape731 = browser.currentScene.createNode("Shape");
Shape731.USE = "SiteShape";
Transform730.child = new undefined();

Transform730.child[0] = Shape731;

HAnimSite729.children = new MFNode();

HAnimSite729.children[0] = Transform730;

HAnimSegment725.children[2] = HAnimSite729;

HAnimJoint724.children = new MFNode();

HAnimJoint724.children[0] = HAnimSegment725;

HAnimJoint692.children[4] = HAnimJoint724;

let HAnimJoint732 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint732.name = "l_eyebrow";
HAnimJoint732.DEF = "hanim_l_eyebrow";
HAnimJoint732.center = new SFVec3f(new float[0.0216,0.0051,1.4053]);
HAnimJoint732.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint732.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment733 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment733.name = "SEGMENT_FOR_l_eyebrow";
HAnimSegment733.DEF = "hanim_SEGMENT_FOR_l_eyebrow";
let TouchSensor734 = browser.currentScene.createNode("TouchSensor");
TouchSensor734.description = "joint l_eyebrow segment SEGMENT_FOR_l_eyebrow";
HAnimSegment733.children = new MFNode();

HAnimSegment733.children[0] = TouchSensor734;

let Transform735 = browser.currentScene.createNode("Transform");
Transform735.translation = new SFVec3f(new float[0.0216,0.0051,1.4053]);
let Shape736 = browser.currentScene.createNode("Shape");
Shape736.USE = "JointShape";
Transform735.child = new undefined();

Transform735.child[0] = Shape736;

HAnimSegment733.children[1] = Transform735;

let HAnimSite737 = browser.currentScene.createNode("HAnimSite");
HAnimSite737.name = "SEGMENT_FOR_l_eyebrow_tip";
HAnimSite737.DEF = "hanim_SEGMENT_FOR_l_eyebrow_tip";
let Transform738 = browser.currentScene.createNode("Transform");
Transform738.translation = new SFVec3f(new float[0.0216,0.0051,1.4053]);
let Shape739 = browser.currentScene.createNode("Shape");
Shape739.USE = "SiteShape";
Transform738.child = new undefined();

Transform738.child[0] = Shape739;

HAnimSite737.children = new MFNode();

HAnimSite737.children[0] = Transform738;

HAnimSegment733.children[2] = HAnimSite737;

HAnimJoint732.children = new MFNode();

HAnimJoint732.children[0] = HAnimSegment733;

HAnimJoint692.children[5] = HAnimJoint732;

let HAnimJoint740 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint740.name = "r_eyebrow";
HAnimJoint740.DEF = "hanim_r_eyebrow";
HAnimJoint740.center = new SFVec3f(new float[-0.0219,0.0051,1.4053]);
HAnimJoint740.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint740.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment741 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment741.name = "SEGMENT_FOR_r_eyebrow";
HAnimSegment741.DEF = "hanim_SEGMENT_FOR_r_eyebrow";
let TouchSensor742 = browser.currentScene.createNode("TouchSensor");
TouchSensor742.description = "joint r_eyebrow segment SEGMENT_FOR_r_eyebrow";
HAnimSegment741.children = new MFNode();

HAnimSegment741.children[0] = TouchSensor742;

let Transform743 = browser.currentScene.createNode("Transform");
Transform743.translation = new SFVec3f(new float[-0.0219,0.0051,1.4053]);
let Shape744 = browser.currentScene.createNode("Shape");
Shape744.USE = "JointShape";
Transform743.child = new undefined();

Transform743.child[0] = Shape744;

HAnimSegment741.children[1] = Transform743;

let HAnimSite745 = browser.currentScene.createNode("HAnimSite");
HAnimSite745.name = "SEGMENT_FOR_r_eyebrow_tip";
HAnimSite745.DEF = "hanim_SEGMENT_FOR_r_eyebrow_tip";
let Transform746 = browser.currentScene.createNode("Transform");
Transform746.translation = new SFVec3f(new float[-0.0219,0.0051,1.4053]);
let Shape747 = browser.currentScene.createNode("Shape");
Shape747.USE = "SiteShape";
Transform746.child = new undefined();

Transform746.child[0] = Shape747;

HAnimSite745.children = new MFNode();

HAnimSite745.children[0] = Transform746;

HAnimSegment741.children[2] = HAnimSite745;

HAnimJoint740.children = new MFNode();

HAnimJoint740.children[0] = HAnimSegment741;

HAnimJoint692.children[6] = HAnimJoint740;

let HAnimJoint748 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint748.name = "jaw";
HAnimJoint748.DEF = "hanim_jaw";
HAnimJoint748.center = new SFVec3f(new float[-0.0002,-0.0865,1.3043]);
HAnimJoint748.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint748.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment749 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment749.name = "SEGMENT_FOR_jaw";
HAnimSegment749.DEF = "hanim_SEGMENT_FOR_jaw";
let TouchSensor750 = browser.currentScene.createNode("TouchSensor");
TouchSensor750.description = "joint jaw segment SEGMENT_FOR_jaw";
HAnimSegment749.children = new MFNode();

HAnimSegment749.children[0] = TouchSensor750;

let Transform751 = browser.currentScene.createNode("Transform");
Transform751.translation = new SFVec3f(new float[-0.0002,-0.0865,1.3043]);
let Shape752 = browser.currentScene.createNode("Shape");
Shape752.USE = "JointShape";
Transform751.child = new undefined();

Transform751.child[0] = Shape752;

HAnimSegment749.children[1] = Transform751;

let HAnimSite753 = browser.currentScene.createNode("HAnimSite");
HAnimSite753.name = "SEGMENT_FOR_jaw_tip";
HAnimSite753.DEF = "hanim_SEGMENT_FOR_jaw_tip";
let Transform754 = browser.currentScene.createNode("Transform");
Transform754.translation = new SFVec3f(new float[-0.0002,-0.0865,1.3043]);
let Shape755 = browser.currentScene.createNode("Shape");
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

let HAnimJoint756 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint756.name = "l_clavicle";
HAnimJoint756.DEF = "hanim_l_clavicle";
HAnimJoint756.center = new SFVec3f(new float[0.1228,-0.1148,1.1833]);
HAnimJoint756.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint756.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment757 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment757.name = "SEGMENT_FOR_l_clavicle";
HAnimSegment757.DEF = "hanim_SEGMENT_FOR_l_clavicle";
let TouchSensor758 = browser.currentScene.createNode("TouchSensor");
TouchSensor758.description = "joint l_clavicle segment SEGMENT_FOR_l_clavicle";
HAnimSegment757.children = new MFNode();

HAnimSegment757.children[0] = TouchSensor758;

let Transform759 = browser.currentScene.createNode("Transform");
Transform759.translation = new SFVec3f(new float[0.1228,-0.1148,1.1833]);
let Shape760 = browser.currentScene.createNode("Shape");
Shape760.USE = "JointShape";
Transform759.child = new undefined();

Transform759.child[0] = Shape760;

HAnimSegment757.children[1] = Transform759;

let HAnimSite761 = browser.currentScene.createNode("HAnimSite");
HAnimSite761.name = "SEGMENT_FOR_l_clavicle_tip";
HAnimSite761.DEF = "hanim_SEGMENT_FOR_l_clavicle_tip";
let Transform762 = browser.currentScene.createNode("Transform");
Transform762.translation = new SFVec3f(new float[0.1228,-0.1148,1.1833]);
let Shape763 = browser.currentScene.createNode("Shape");
Shape763.USE = "SiteShape";
Transform762.child = new undefined();

Transform762.child[0] = Shape763;

HAnimSite761.children = new MFNode();

HAnimSite761.children[0] = Transform762;

HAnimSegment757.children[2] = HAnimSite761;

HAnimJoint756.children = new MFNode();

HAnimJoint756.children[0] = HAnimSegment757;

let HAnimJoint764 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint764.name = "l_scapula";
HAnimJoint764.DEF = "hanim_l_scapula";
HAnimJoint764.center = new SFVec3f(new float[0.0383,-0.1157,1.2001]);
HAnimJoint764.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint764.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment765 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment765.name = "SEGMENT_FOR_l_scapula";
HAnimSegment765.DEF = "hanim_SEGMENT_FOR_l_scapula";
let TouchSensor766 = browser.currentScene.createNode("TouchSensor");
TouchSensor766.description = "joint l_scapula segment SEGMENT_FOR_l_scapula";
HAnimSegment765.children = new MFNode();

HAnimSegment765.children[0] = TouchSensor766;

let Transform767 = browser.currentScene.createNode("Transform");
Transform767.translation = new SFVec3f(new float[0.0383,-0.1157,1.2001]);
let Shape768 = browser.currentScene.createNode("Shape");
Shape768.USE = "JointShape";
Transform767.child = new undefined();

Transform767.child[0] = Shape768;

HAnimSegment765.children[1] = Transform767;

let HAnimSite769 = browser.currentScene.createNode("HAnimSite");
HAnimSite769.name = "SEGMENT_FOR_l_scapula_tip";
HAnimSite769.DEF = "hanim_SEGMENT_FOR_l_scapula_tip";
let Transform770 = browser.currentScene.createNode("Transform");
Transform770.translation = new SFVec3f(new float[0.0383,-0.1157,1.2001]);
let Shape771 = browser.currentScene.createNode("Shape");
Shape771.USE = "SiteShape";
Transform770.child = new undefined();

Transform770.child[0] = Shape771;

HAnimSite769.children = new MFNode();

HAnimSite769.children[0] = Transform770;

HAnimSegment765.children[2] = HAnimSite769;

HAnimJoint764.children = new MFNode();

HAnimJoint764.children[0] = HAnimSegment765;

let HAnimJoint772 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint772.name = "l_upperarm";
HAnimJoint772.DEF = "hanim_l_upperarm";
HAnimJoint772.center = new SFVec3f(new float[0.1649,-0.1051,1.17]);
HAnimJoint772.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint772.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment773 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment773.name = "SEGMENT_FOR_l_upperarm";
HAnimSegment773.DEF = "hanim_SEGMENT_FOR_l_upperarm";
let TouchSensor774 = browser.currentScene.createNode("TouchSensor");
TouchSensor774.description = "joint l_upperarm segment SEGMENT_FOR_l_upperarm";
HAnimSegment773.children = new MFNode();

HAnimSegment773.children[0] = TouchSensor774;

let Transform775 = browser.currentScene.createNode("Transform");
Transform775.translation = new SFVec3f(new float[0.1649,-0.1051,1.17]);
let Shape776 = browser.currentScene.createNode("Shape");
Shape776.USE = "JointShape";
Transform775.child = new undefined();

Transform775.child[0] = Shape776;

HAnimSegment773.children[1] = Transform775;

let HAnimSite777 = browser.currentScene.createNode("HAnimSite");
HAnimSite777.name = "SEGMENT_FOR_l_upperarm_tip";
HAnimSite777.DEF = "hanim_SEGMENT_FOR_l_upperarm_tip";
let Transform778 = browser.currentScene.createNode("Transform");
Transform778.translation = new SFVec3f(new float[0.1649,-0.1051,1.17]);
let Shape779 = browser.currentScene.createNode("Shape");
Shape779.USE = "SiteShape";
Transform778.child = new undefined();

Transform778.child[0] = Shape779;

HAnimSite777.children = new MFNode();

HAnimSite777.children[0] = Transform778;

HAnimSegment773.children[2] = HAnimSite777;

HAnimJoint772.children = new MFNode();

HAnimJoint772.children[0] = HAnimSegment773;

let HAnimJoint780 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint780.name = "l_forearm";
HAnimJoint780.DEF = "hanim_l_forearm";
HAnimJoint780.center = new SFVec3f(new float[0.1819,-0.1075,0.9202]);
HAnimJoint780.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint780.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment781 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment781.name = "SEGMENT_FOR_l_forearm";
HAnimSegment781.DEF = "hanim_SEGMENT_FOR_l_forearm";
let TouchSensor782 = browser.currentScene.createNode("TouchSensor");
TouchSensor782.description = "joint l_forearm segment SEGMENT_FOR_l_forearm";
HAnimSegment781.children = new MFNode();

HAnimSegment781.children[0] = TouchSensor782;

let Transform783 = browser.currentScene.createNode("Transform");
Transform783.translation = new SFVec3f(new float[0.1819,-0.1075,0.9202]);
let Shape784 = browser.currentScene.createNode("Shape");
Shape784.USE = "JointShape";
Transform783.child = new undefined();

Transform783.child[0] = Shape784;

HAnimSegment781.children[1] = Transform783;

let HAnimSite785 = browser.currentScene.createNode("HAnimSite");
HAnimSite785.name = "SEGMENT_FOR_l_forearm_tip";
HAnimSite785.DEF = "hanim_SEGMENT_FOR_l_forearm_tip";
let Transform786 = browser.currentScene.createNode("Transform");
Transform786.translation = new SFVec3f(new float[0.1819,-0.1075,0.9202]);
let Shape787 = browser.currentScene.createNode("Shape");
Shape787.USE = "SiteShape";
Transform786.child = new undefined();

Transform786.child[0] = Shape787;

HAnimSite785.children = new MFNode();

HAnimSite785.children[0] = Transform786;

HAnimSegment781.children[2] = HAnimSite785;

HAnimJoint780.children = new MFNode();

HAnimJoint780.children[0] = HAnimSegment781;

let HAnimJoint788 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint788.name = "l_carpal";
HAnimJoint788.DEF = "hanim_l_carpal";
HAnimJoint788.center = new SFVec3f(new float[0.1818,-0.1069,0.7157]);
HAnimJoint788.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint788.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment789 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment789.name = "SEGMENT_FOR_l_carpal";
HAnimSegment789.DEF = "hanim_SEGMENT_FOR_l_carpal";
let TouchSensor790 = browser.currentScene.createNode("TouchSensor");
TouchSensor790.description = "joint l_carpal segment SEGMENT_FOR_l_carpal";
HAnimSegment789.children = new MFNode();

HAnimSegment789.children[0] = TouchSensor790;

let Transform791 = browser.currentScene.createNode("Transform");
Transform791.translation = new SFVec3f(new float[0.1818,-0.1069,0.7157]);
let Shape792 = browser.currentScene.createNode("Shape");
Shape792.USE = "JointShape";
Transform791.child = new undefined();

Transform791.child[0] = Shape792;

HAnimSegment789.children[1] = Transform791;

let HAnimSite793 = browser.currentScene.createNode("HAnimSite");
HAnimSite793.name = "SEGMENT_FOR_l_carpal_tip";
HAnimSite793.DEF = "hanim_SEGMENT_FOR_l_carpal_tip";
let Transform794 = browser.currentScene.createNode("Transform");
Transform794.translation = new SFVec3f(new float[0.1818,-0.1069,0.7157]);
let Shape795 = browser.currentScene.createNode("Shape");
Shape795.USE = "SiteShape";
Transform794.child = new undefined();

Transform794.child[0] = Shape795;

HAnimSite793.children = new MFNode();

HAnimSite793.children[0] = Transform794;

HAnimSegment789.children[2] = HAnimSite793;

HAnimJoint788.children = new MFNode();

HAnimJoint788.children[0] = HAnimSegment789;

let HAnimJoint796 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint796.name = "l_trapezium";
HAnimJoint796.DEF = "hanim_l_trapezium";
HAnimJoint796.center = new SFVec3f(new float[0.1811,-0.0826,0.6975]);
HAnimJoint796.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint796.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment797 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment797.name = "SEGMENT_FOR_l_trapezium";
HAnimSegment797.DEF = "hanim_SEGMENT_FOR_l_trapezium";
let TouchSensor798 = browser.currentScene.createNode("TouchSensor");
TouchSensor798.description = "joint l_trapezium segment SEGMENT_FOR_l_trapezium";
HAnimSegment797.children = new MFNode();

HAnimSegment797.children[0] = TouchSensor798;

let Transform799 = browser.currentScene.createNode("Transform");
Transform799.translation = new SFVec3f(new float[0.1811,-0.0826,0.6975]);
let Shape800 = browser.currentScene.createNode("Shape");
Shape800.USE = "JointShape";
Transform799.child = new undefined();

Transform799.child[0] = Shape800;

HAnimSegment797.children[1] = Transform799;

let HAnimSite801 = browser.currentScene.createNode("HAnimSite");
HAnimSite801.name = "SEGMENT_FOR_l_trapezium_tip";
HAnimSite801.DEF = "hanim_SEGMENT_FOR_l_trapezium_tip";
let Transform802 = browser.currentScene.createNode("Transform");
Transform802.translation = new SFVec3f(new float[0.1811,-0.0826,0.6975]);
let Shape803 = browser.currentScene.createNode("Shape");
Shape803.USE = "SiteShape";
Transform802.child = new undefined();

Transform802.child[0] = Shape803;

HAnimSite801.children = new MFNode();

HAnimSite801.children[0] = Transform802;

HAnimSegment797.children[2] = HAnimSite801;

HAnimJoint796.children = new MFNode();

HAnimJoint796.children[0] = HAnimSegment797;

let HAnimJoint804 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint804.name = "l_metacarpal_1";
HAnimJoint804.DEF = "hanim_l_metacarpal_1";
HAnimJoint804.center = new SFVec3f(new float[0.1803,-0.0759,0.684]);
HAnimJoint804.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint804.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment805 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment805.name = "SEGMENT_FOR_l_metacarpal_1";
HAnimSegment805.DEF = "hanim_SEGMENT_FOR_l_metacarpal_1";
let TouchSensor806 = browser.currentScene.createNode("TouchSensor");
TouchSensor806.description = "joint l_metacarpal_1 segment SEGMENT_FOR_l_metacarpal_1";
HAnimSegment805.children = new MFNode();

HAnimSegment805.children[0] = TouchSensor806;

let Transform807 = browser.currentScene.createNode("Transform");
Transform807.translation = new SFVec3f(new float[0.1803,-0.0759,0.684]);
let Shape808 = browser.currentScene.createNode("Shape");
Shape808.USE = "JointShape";
Transform807.child = new undefined();

Transform807.child[0] = Shape808;

HAnimSegment805.children[1] = Transform807;

let HAnimSite809 = browser.currentScene.createNode("HAnimSite");
HAnimSite809.name = "SEGMENT_FOR_l_metacarpal_1_tip";
HAnimSite809.DEF = "hanim_SEGMENT_FOR_l_metacarpal_1_tip";
let Transform810 = browser.currentScene.createNode("Transform");
Transform810.translation = new SFVec3f(new float[0.1803,-0.0759,0.684]);
let Shape811 = browser.currentScene.createNode("Shape");
Shape811.USE = "SiteShape";
Transform810.child = new undefined();

Transform810.child[0] = Shape811;

HAnimSite809.children = new MFNode();

HAnimSite809.children[0] = Transform810;

HAnimSegment805.children[2] = HAnimSite809;

HAnimJoint804.children = new MFNode();

HAnimJoint804.children[0] = HAnimSegment805;

let HAnimJoint812 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint812.name = "l_carpal_proximal_phalanx_1";
HAnimJoint812.DEF = "hanim_l_carpal_proximal_phalanx_1";
HAnimJoint812.center = new SFVec3f(new float[0.1809,-0.0661,0.6642]);
HAnimJoint812.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint812.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment813 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment813.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_1";
HAnimSegment813.DEF = "hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_1";
let TouchSensor814 = browser.currentScene.createNode("TouchSensor");
TouchSensor814.description = "joint l_carpal_proximal_phalanx_1 segment SEGMENT_FOR_l_carpal_proximal_phalanx_1";
HAnimSegment813.children = new MFNode();

HAnimSegment813.children[0] = TouchSensor814;

let Transform815 = browser.currentScene.createNode("Transform");
Transform815.translation = new SFVec3f(new float[0.1809,-0.0661,0.6642]);
let Shape816 = browser.currentScene.createNode("Shape");
Shape816.USE = "JointShape";
Transform815.child = new undefined();

Transform815.child[0] = Shape816;

HAnimSegment813.children[1] = Transform815;

let HAnimSite817 = browser.currentScene.createNode("HAnimSite");
HAnimSite817.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_1_tip";
HAnimSite817.DEF = "hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_1_tip";
let Transform818 = browser.currentScene.createNode("Transform");
Transform818.translation = new SFVec3f(new float[0.1809,-0.0661,0.6642]);
let Shape819 = browser.currentScene.createNode("Shape");
Shape819.USE = "SiteShape";
Transform818.child = new undefined();

Transform818.child[0] = Shape819;

HAnimSite817.children = new MFNode();

HAnimSite817.children[0] = Transform818;

HAnimSegment813.children[2] = HAnimSite817;

HAnimJoint812.children = new MFNode();

HAnimJoint812.children[0] = HAnimSegment813;

let HAnimJoint820 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint820.name = "l_carpal_distal_phalanx_1";
HAnimJoint820.DEF = "hanim_l_carpal_distal_phalanx_1";
HAnimJoint820.center = new SFVec3f(new float[0.1825,-0.0522,0.6455]);
HAnimJoint820.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint820.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment821 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment821.name = "SEGMENT_FOR_l_carpal_distal_phalanx_1";
HAnimSegment821.DEF = "hanim_SEGMENT_FOR_l_carpal_distal_phalanx_1";
let TouchSensor822 = browser.currentScene.createNode("TouchSensor");
TouchSensor822.description = "joint l_carpal_distal_phalanx_1 segment SEGMENT_FOR_l_carpal_distal_phalanx_1";
HAnimSegment821.children = new MFNode();

HAnimSegment821.children[0] = TouchSensor822;

let Transform823 = browser.currentScene.createNode("Transform");
Transform823.translation = new SFVec3f(new float[0.1825,-0.0522,0.6455]);
let Shape824 = browser.currentScene.createNode("Shape");
Shape824.USE = "JointShape";
Transform823.child = new undefined();

Transform823.child[0] = Shape824;

HAnimSegment821.children[1] = Transform823;

let HAnimSite825 = browser.currentScene.createNode("HAnimSite");
HAnimSite825.name = "SEGMENT_FOR_l_carpal_distal_phalanx_1_tip";
HAnimSite825.DEF = "hanim_SEGMENT_FOR_l_carpal_distal_phalanx_1_tip";
let Transform826 = browser.currentScene.createNode("Transform");
Transform826.translation = new SFVec3f(new float[0.1825,-0.0522,0.6455]);
let Shape827 = browser.currentScene.createNode("Shape");
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

let HAnimJoint828 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint828.name = "l_trapezoid";
HAnimJoint828.DEF = "hanim_l_trapezoid";
HAnimJoint828.center = new SFVec3f(new float[0.1811,-0.0935,0.6984]);
HAnimJoint828.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint828.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment829 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment829.name = "SEGMENT_FOR_l_trapezoid";
HAnimSegment829.DEF = "hanim_SEGMENT_FOR_l_trapezoid";
let TouchSensor830 = browser.currentScene.createNode("TouchSensor");
TouchSensor830.description = "joint l_trapezoid segment SEGMENT_FOR_l_trapezoid";
HAnimSegment829.children = new MFNode();

HAnimSegment829.children[0] = TouchSensor830;

let Transform831 = browser.currentScene.createNode("Transform");
Transform831.translation = new SFVec3f(new float[0.1811,-0.0935,0.6984]);
let Shape832 = browser.currentScene.createNode("Shape");
Shape832.USE = "JointShape";
Transform831.child = new undefined();

Transform831.child[0] = Shape832;

HAnimSegment829.children[1] = Transform831;

let HAnimSite833 = browser.currentScene.createNode("HAnimSite");
HAnimSite833.name = "SEGMENT_FOR_l_trapezoid_tip";
HAnimSite833.DEF = "hanim_SEGMENT_FOR_l_trapezoid_tip";
let Transform834 = browser.currentScene.createNode("Transform");
Transform834.translation = new SFVec3f(new float[0.1811,-0.0935,0.6984]);
let Shape835 = browser.currentScene.createNode("Shape");
Shape835.USE = "SiteShape";
Transform834.child = new undefined();

Transform834.child[0] = Shape835;

HAnimSite833.children = new MFNode();

HAnimSite833.children[0] = Transform834;

HAnimSegment829.children[2] = HAnimSite833;

HAnimJoint828.children = new MFNode();

HAnimJoint828.children[0] = HAnimSegment829;

let HAnimJoint836 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint836.name = "l_metacarpal_2";
HAnimJoint836.DEF = "hanim_l_metacarpal_2";
HAnimJoint836.center = new SFVec3f(new float[0.1811,-0.0922,0.679]);
HAnimJoint836.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint836.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment837 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment837.name = "SEGMENT_FOR_l_metacarpal_2";
HAnimSegment837.DEF = "hanim_SEGMENT_FOR_l_metacarpal_2";
let TouchSensor838 = browser.currentScene.createNode("TouchSensor");
TouchSensor838.description = "joint l_metacarpal_2 segment SEGMENT_FOR_l_metacarpal_2";
HAnimSegment837.children = new MFNode();

HAnimSegment837.children[0] = TouchSensor838;

let Transform839 = browser.currentScene.createNode("Transform");
Transform839.translation = new SFVec3f(new float[0.1811,-0.0922,0.679]);
let Shape840 = browser.currentScene.createNode("Shape");
Shape840.USE = "JointShape";
Transform839.child = new undefined();

Transform839.child[0] = Shape840;

HAnimSegment837.children[1] = Transform839;

let HAnimSite841 = browser.currentScene.createNode("HAnimSite");
HAnimSite841.name = "SEGMENT_FOR_l_metacarpal_2_tip";
HAnimSite841.DEF = "hanim_SEGMENT_FOR_l_metacarpal_2_tip";
let Transform842 = browser.currentScene.createNode("Transform");
Transform842.translation = new SFVec3f(new float[0.1811,-0.0922,0.679]);
let Shape843 = browser.currentScene.createNode("Shape");
Shape843.USE = "SiteShape";
Transform842.child = new undefined();

Transform842.child[0] = Shape843;

HAnimSite841.children = new MFNode();

HAnimSite841.children[0] = Transform842;

HAnimSegment837.children[2] = HAnimSite841;

HAnimJoint836.children = new MFNode();

HAnimJoint836.children[0] = HAnimSegment837;

let HAnimJoint844 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint844.name = "l_carpal_proximal_phalanx_2";
HAnimJoint844.DEF = "hanim_l_carpal_proximal_phalanx_2";
HAnimJoint844.center = new SFVec3f(new float[0.1836,-0.0868,0.6286]);
HAnimJoint844.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint844.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment845 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment845.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_2";
HAnimSegment845.DEF = "hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_2";
let TouchSensor846 = browser.currentScene.createNode("TouchSensor");
TouchSensor846.description = "joint l_carpal_proximal_phalanx_2 segment SEGMENT_FOR_l_carpal_proximal_phalanx_2";
HAnimSegment845.children = new MFNode();

HAnimSegment845.children[0] = TouchSensor846;

let Transform847 = browser.currentScene.createNode("Transform");
Transform847.translation = new SFVec3f(new float[0.1836,-0.0868,0.6286]);
let Shape848 = browser.currentScene.createNode("Shape");
Shape848.USE = "JointShape";
Transform847.child = new undefined();

Transform847.child[0] = Shape848;

HAnimSegment845.children[1] = Transform847;

let HAnimSite849 = browser.currentScene.createNode("HAnimSite");
HAnimSite849.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_2_tip";
HAnimSite849.DEF = "hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_2_tip";
let Transform850 = browser.currentScene.createNode("Transform");
Transform850.translation = new SFVec3f(new float[0.1836,-0.0868,0.6286]);
let Shape851 = browser.currentScene.createNode("Shape");
Shape851.USE = "SiteShape";
Transform850.child = new undefined();

Transform850.child[0] = Shape851;

HAnimSite849.children = new MFNode();

HAnimSite849.children[0] = Transform850;

HAnimSegment845.children[2] = HAnimSite849;

HAnimJoint844.children = new MFNode();

HAnimJoint844.children[0] = HAnimSegment845;

let HAnimJoint852 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint852.name = "l_carpal_middle_phalanx_2";
HAnimJoint852.DEF = "hanim_l_carpal_middle_phalanx_2";
HAnimJoint852.center = new SFVec3f(new float[0.1815,-0.0877,0.5983]);
HAnimJoint852.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint852.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment853 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment853.name = "SEGMENT_FOR_l_carpal_middle_phalanx_2";
HAnimSegment853.DEF = "hanim_SEGMENT_FOR_l_carpal_middle_phalanx_2";
let TouchSensor854 = browser.currentScene.createNode("TouchSensor");
TouchSensor854.description = "joint l_carpal_middle_phalanx_2 segment SEGMENT_FOR_l_carpal_middle_phalanx_2";
HAnimSegment853.children = new MFNode();

HAnimSegment853.children[0] = TouchSensor854;

let Transform855 = browser.currentScene.createNode("Transform");
Transform855.translation = new SFVec3f(new float[0.1815,-0.0877,0.5983]);
let Shape856 = browser.currentScene.createNode("Shape");
Shape856.USE = "JointShape";
Transform855.child = new undefined();

Transform855.child[0] = Shape856;

HAnimSegment853.children[1] = Transform855;

let HAnimSite857 = browser.currentScene.createNode("HAnimSite");
HAnimSite857.name = "SEGMENT_FOR_l_carpal_middle_phalanx_2_tip";
HAnimSite857.DEF = "hanim_SEGMENT_FOR_l_carpal_middle_phalanx_2_tip";
let Transform858 = browser.currentScene.createNode("Transform");
Transform858.translation = new SFVec3f(new float[0.1815,-0.0877,0.5983]);
let Shape859 = browser.currentScene.createNode("Shape");
Shape859.USE = "SiteShape";
Transform858.child = new undefined();

Transform858.child[0] = Shape859;

HAnimSite857.children = new MFNode();

HAnimSite857.children[0] = Transform858;

HAnimSegment853.children[2] = HAnimSite857;

HAnimJoint852.children = new MFNode();

HAnimJoint852.children[0] = HAnimSegment853;

let HAnimJoint860 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint860.name = "l_carpal_distal_phalanx_2";
HAnimJoint860.DEF = "hanim_l_carpal_distal_phalanx_2";
HAnimJoint860.center = new SFVec3f(new float[0.1805,-0.0885,0.5731]);
HAnimJoint860.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint860.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment861 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment861.name = "SEGMENT_FOR_l_carpal_distal_phalanx_2";
HAnimSegment861.DEF = "hanim_SEGMENT_FOR_l_carpal_distal_phalanx_2";
let TouchSensor862 = browser.currentScene.createNode("TouchSensor");
TouchSensor862.description = "joint l_carpal_distal_phalanx_2 segment SEGMENT_FOR_l_carpal_distal_phalanx_2";
HAnimSegment861.children = new MFNode();

HAnimSegment861.children[0] = TouchSensor862;

let Transform863 = browser.currentScene.createNode("Transform");
Transform863.translation = new SFVec3f(new float[0.1805,-0.0885,0.5731]);
let Shape864 = browser.currentScene.createNode("Shape");
Shape864.USE = "JointShape";
Transform863.child = new undefined();

Transform863.child[0] = Shape864;

HAnimSegment861.children[1] = Transform863;

let HAnimSite865 = browser.currentScene.createNode("HAnimSite");
HAnimSite865.name = "SEGMENT_FOR_l_carpal_distal_phalanx_2_tip";
HAnimSite865.DEF = "hanim_SEGMENT_FOR_l_carpal_distal_phalanx_2_tip";
let Transform866 = browser.currentScene.createNode("Transform");
Transform866.translation = new SFVec3f(new float[0.1805,-0.0885,0.5731]);
let Shape867 = browser.currentScene.createNode("Shape");
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

let HAnimJoint868 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint868.name = "l_capitate";
HAnimJoint868.DEF = "hanim_l_capitate";
HAnimJoint868.center = new SFVec3f(new float[0.1809,-0.1067,0.7]);
HAnimJoint868.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint868.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment869 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment869.name = "SEGMENT_FOR_l_capitate";
HAnimSegment869.DEF = "hanim_SEGMENT_FOR_l_capitate";
let TouchSensor870 = browser.currentScene.createNode("TouchSensor");
TouchSensor870.description = "joint l_capitate segment SEGMENT_FOR_l_capitate";
HAnimSegment869.children = new MFNode();

HAnimSegment869.children[0] = TouchSensor870;

let Transform871 = browser.currentScene.createNode("Transform");
Transform871.translation = new SFVec3f(new float[0.1809,-0.1067,0.7]);
let Shape872 = browser.currentScene.createNode("Shape");
Shape872.USE = "JointShape";
Transform871.child = new undefined();

Transform871.child[0] = Shape872;

HAnimSegment869.children[1] = Transform871;

let HAnimSite873 = browser.currentScene.createNode("HAnimSite");
HAnimSite873.name = "SEGMENT_FOR_l_capitate_tip";
HAnimSite873.DEF = "hanim_SEGMENT_FOR_l_capitate_tip";
let Transform874 = browser.currentScene.createNode("Transform");
Transform874.translation = new SFVec3f(new float[0.1809,-0.1067,0.7]);
let Shape875 = browser.currentScene.createNode("Shape");
Shape875.USE = "SiteShape";
Transform874.child = new undefined();

Transform874.child[0] = Shape875;

HAnimSite873.children = new MFNode();

HAnimSite873.children[0] = Transform874;

HAnimSegment869.children[2] = HAnimSite873;

HAnimJoint868.children = new MFNode();

HAnimJoint868.children[0] = HAnimSegment869;

let HAnimJoint876 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint876.name = "l_metacarpal_3";
HAnimJoint876.DEF = "hanim_l_metacarpal_3";
HAnimJoint876.center = new SFVec3f(new float[0.1809,-0.1081,0.6772]);
HAnimJoint876.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint876.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment877 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment877.name = "SEGMENT_FOR_l_metacarpal_3";
HAnimSegment877.DEF = "hanim_SEGMENT_FOR_l_metacarpal_3";
let TouchSensor878 = browser.currentScene.createNode("TouchSensor");
TouchSensor878.description = "joint l_metacarpal_3 segment SEGMENT_FOR_l_metacarpal_3";
HAnimSegment877.children = new MFNode();

HAnimSegment877.children[0] = TouchSensor878;

let Transform879 = browser.currentScene.createNode("Transform");
Transform879.translation = new SFVec3f(new float[0.1809,-0.1081,0.6772]);
let Shape880 = browser.currentScene.createNode("Shape");
Shape880.USE = "JointShape";
Transform879.child = new undefined();

Transform879.child[0] = Shape880;

HAnimSegment877.children[1] = Transform879;

let HAnimSite881 = browser.currentScene.createNode("HAnimSite");
HAnimSite881.name = "SEGMENT_FOR_l_metacarpal_3_tip";
HAnimSite881.DEF = "hanim_SEGMENT_FOR_l_metacarpal_3_tip";
let Transform882 = browser.currentScene.createNode("Transform");
Transform882.translation = new SFVec3f(new float[0.1809,-0.1081,0.6772]);
let Shape883 = browser.currentScene.createNode("Shape");
Shape883.USE = "SiteShape";
Transform882.child = new undefined();

Transform882.child[0] = Shape883;

HAnimSite881.children = new MFNode();

HAnimSite881.children[0] = Transform882;

HAnimSegment877.children[2] = HAnimSite881;

HAnimJoint876.children = new MFNode();

HAnimJoint876.children[0] = HAnimSegment877;

let HAnimJoint884 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint884.name = "l_carpal_proximal_phalanx_3";
HAnimJoint884.DEF = "hanim_l_carpal_proximal_phalanx_3";
HAnimJoint884.center = new SFVec3f(new float[0.1835,-0.1058,0.6264]);
HAnimJoint884.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint884.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment885 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment885.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_3";
HAnimSegment885.DEF = "hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_3";
let TouchSensor886 = browser.currentScene.createNode("TouchSensor");
TouchSensor886.description = "joint l_carpal_proximal_phalanx_3 segment SEGMENT_FOR_l_carpal_proximal_phalanx_3";
HAnimSegment885.children = new MFNode();

HAnimSegment885.children[0] = TouchSensor886;

let Transform887 = browser.currentScene.createNode("Transform");
Transform887.translation = new SFVec3f(new float[0.1835,-0.1058,0.6264]);
let Shape888 = browser.currentScene.createNode("Shape");
Shape888.USE = "JointShape";
Transform887.child = new undefined();

Transform887.child[0] = Shape888;

HAnimSegment885.children[1] = Transform887;

let HAnimSite889 = browser.currentScene.createNode("HAnimSite");
HAnimSite889.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_3_tip";
HAnimSite889.DEF = "hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_3_tip";
let Transform890 = browser.currentScene.createNode("Transform");
Transform890.translation = new SFVec3f(new float[0.1835,-0.1058,0.6264]);
let Shape891 = browser.currentScene.createNode("Shape");
Shape891.USE = "SiteShape";
Transform890.child = new undefined();

Transform890.child[0] = Shape891;

HAnimSite889.children = new MFNode();

HAnimSite889.children[0] = Transform890;

HAnimSegment885.children[2] = HAnimSite889;

HAnimJoint884.children = new MFNode();

HAnimJoint884.children[0] = HAnimSegment885;

let HAnimJoint892 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint892.name = "l_carpal_middle_phalanx_3";
HAnimJoint892.DEF = "hanim_l_carpal_middle_phalanx_3";
HAnimJoint892.center = new SFVec3f(new float[0.1815,-0.1054,0.5947]);
HAnimJoint892.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint892.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment893 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment893.name = "SEGMENT_FOR_l_carpal_middle_phalanx_3";
HAnimSegment893.DEF = "hanim_SEGMENT_FOR_l_carpal_middle_phalanx_3";
let TouchSensor894 = browser.currentScene.createNode("TouchSensor");
TouchSensor894.description = "joint l_carpal_middle_phalanx_3 segment SEGMENT_FOR_l_carpal_middle_phalanx_3";
HAnimSegment893.children = new MFNode();

HAnimSegment893.children[0] = TouchSensor894;

let Transform895 = browser.currentScene.createNode("Transform");
Transform895.translation = new SFVec3f(new float[0.1815,-0.1054,0.5947]);
let Shape896 = browser.currentScene.createNode("Shape");
Shape896.USE = "JointShape";
Transform895.child = new undefined();

Transform895.child[0] = Shape896;

HAnimSegment893.children[1] = Transform895;

let HAnimSite897 = browser.currentScene.createNode("HAnimSite");
HAnimSite897.name = "SEGMENT_FOR_l_carpal_middle_phalanx_3_tip";
HAnimSite897.DEF = "hanim_SEGMENT_FOR_l_carpal_middle_phalanx_3_tip";
let Transform898 = browser.currentScene.createNode("Transform");
Transform898.translation = new SFVec3f(new float[0.1815,-0.1054,0.5947]);
let Shape899 = browser.currentScene.createNode("Shape");
Shape899.USE = "SiteShape";
Transform898.child = new undefined();

Transform898.child[0] = Shape899;

HAnimSite897.children = new MFNode();

HAnimSite897.children[0] = Transform898;

HAnimSegment893.children[2] = HAnimSite897;

HAnimJoint892.children = new MFNode();

HAnimJoint892.children[0] = HAnimSegment893;

let HAnimJoint900 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint900.name = "l_carpal_distal_phalanx_3";
HAnimJoint900.DEF = "hanim_l_carpal_distal_phalanx_3";
HAnimJoint900.center = new SFVec3f(new float[0.1805,-0.1056,0.5668]);
HAnimJoint900.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint900.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment901 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment901.name = "SEGMENT_FOR_l_carpal_distal_phalanx_3";
HAnimSegment901.DEF = "hanim_SEGMENT_FOR_l_carpal_distal_phalanx_3";
let TouchSensor902 = browser.currentScene.createNode("TouchSensor");
TouchSensor902.description = "joint l_carpal_distal_phalanx_3 segment SEGMENT_FOR_l_carpal_distal_phalanx_3";
HAnimSegment901.children = new MFNode();

HAnimSegment901.children[0] = TouchSensor902;

let Transform903 = browser.currentScene.createNode("Transform");
Transform903.translation = new SFVec3f(new float[0.1805,-0.1056,0.5668]);
let Shape904 = browser.currentScene.createNode("Shape");
Shape904.USE = "JointShape";
Transform903.child = new undefined();

Transform903.child[0] = Shape904;

HAnimSegment901.children[1] = Transform903;

let HAnimSite905 = browser.currentScene.createNode("HAnimSite");
HAnimSite905.name = "SEGMENT_FOR_l_carpal_distal_phalanx_3_tip";
HAnimSite905.DEF = "hanim_SEGMENT_FOR_l_carpal_distal_phalanx_3_tip";
let Transform906 = browser.currentScene.createNode("Transform");
Transform906.translation = new SFVec3f(new float[0.1805,-0.1056,0.5668]);
let Shape907 = browser.currentScene.createNode("Shape");
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

let HAnimJoint908 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint908.name = "l_hamate";
HAnimJoint908.DEF = "hanim_l_hamate";
HAnimJoint908.center = new SFVec3f(new float[0.1809,-0.1276,0.6973]);
HAnimJoint908.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint908.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment909 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment909.name = "SEGMENT_FOR_l_hamate";
HAnimSegment909.DEF = "hanim_SEGMENT_FOR_l_hamate";
let TouchSensor910 = browser.currentScene.createNode("TouchSensor");
TouchSensor910.description = "joint l_hamate segment SEGMENT_FOR_l_hamate";
HAnimSegment909.children = new MFNode();

HAnimSegment909.children[0] = TouchSensor910;

let Transform911 = browser.currentScene.createNode("Transform");
Transform911.translation = new SFVec3f(new float[0.1809,-0.1276,0.6973]);
let Shape912 = browser.currentScene.createNode("Shape");
Shape912.USE = "JointShape";
Transform911.child = new undefined();

Transform911.child[0] = Shape912;

HAnimSegment909.children[1] = Transform911;

let HAnimSite913 = browser.currentScene.createNode("HAnimSite");
HAnimSite913.name = "SEGMENT_FOR_l_hamate_tip";
HAnimSite913.DEF = "hanim_SEGMENT_FOR_l_hamate_tip";
let Transform914 = browser.currentScene.createNode("Transform");
Transform914.translation = new SFVec3f(new float[0.1809,-0.1276,0.6973]);
let Shape915 = browser.currentScene.createNode("Shape");
Shape915.USE = "SiteShape";
Transform914.child = new undefined();

Transform914.child[0] = Shape915;

HAnimSite913.children = new MFNode();

HAnimSite913.children[0] = Transform914;

HAnimSegment909.children[2] = HAnimSite913;

HAnimJoint908.children = new MFNode();

HAnimJoint908.children[0] = HAnimSegment909;

let HAnimJoint916 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint916.name = "l_metacarpal_4";
HAnimJoint916.DEF = "hanim_l_metacarpal_4";
HAnimJoint916.center = new SFVec3f(new float[0.1809,-0.1218,0.6777]);
HAnimJoint916.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint916.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment917 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment917.name = "SEGMENT_FOR_l_metacarpal_4";
HAnimSegment917.DEF = "hanim_SEGMENT_FOR_l_metacarpal_4";
let TouchSensor918 = browser.currentScene.createNode("TouchSensor");
TouchSensor918.description = "joint l_metacarpal_4 segment SEGMENT_FOR_l_metacarpal_4";
HAnimSegment917.children = new MFNode();

HAnimSegment917.children[0] = TouchSensor918;

let Transform919 = browser.currentScene.createNode("Transform");
Transform919.translation = new SFVec3f(new float[0.1809,-0.1218,0.6777]);
let Shape920 = browser.currentScene.createNode("Shape");
Shape920.USE = "JointShape";
Transform919.child = new undefined();

Transform919.child[0] = Shape920;

HAnimSegment917.children[1] = Transform919;

let HAnimSite921 = browser.currentScene.createNode("HAnimSite");
HAnimSite921.name = "SEGMENT_FOR_l_metacarpal_4_tip";
HAnimSite921.DEF = "hanim_SEGMENT_FOR_l_metacarpal_4_tip";
let Transform922 = browser.currentScene.createNode("Transform");
Transform922.translation = new SFVec3f(new float[0.1809,-0.1218,0.6777]);
let Shape923 = browser.currentScene.createNode("Shape");
Shape923.USE = "SiteShape";
Transform922.child = new undefined();

Transform922.child[0] = Shape923;

HAnimSite921.children = new MFNode();

HAnimSite921.children[0] = Transform922;

HAnimSegment917.children[2] = HAnimSite921;

HAnimJoint916.children = new MFNode();

HAnimJoint916.children[0] = HAnimSegment917;

let HAnimJoint924 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint924.name = "l_carpal_proximal_phalanx_4";
HAnimJoint924.DEF = "hanim_l_carpal_proximal_phalanx_4";
HAnimJoint924.center = new SFVec3f(new float[0.1835,-0.1233,0.6255]);
HAnimJoint924.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint924.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment925 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment925.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_4";
HAnimSegment925.DEF = "hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_4";
let TouchSensor926 = browser.currentScene.createNode("TouchSensor");
TouchSensor926.description = "joint l_carpal_proximal_phalanx_4 segment SEGMENT_FOR_l_carpal_proximal_phalanx_4";
HAnimSegment925.children = new MFNode();

HAnimSegment925.children[0] = TouchSensor926;

let Transform927 = browser.currentScene.createNode("Transform");
Transform927.translation = new SFVec3f(new float[0.1835,-0.1233,0.6255]);
let Shape928 = browser.currentScene.createNode("Shape");
Shape928.USE = "JointShape";
Transform927.child = new undefined();

Transform927.child[0] = Shape928;

HAnimSegment925.children[1] = Transform927;

let HAnimSite929 = browser.currentScene.createNode("HAnimSite");
HAnimSite929.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_4_tip";
HAnimSite929.DEF = "hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_4_tip";
let Transform930 = browser.currentScene.createNode("Transform");
Transform930.translation = new SFVec3f(new float[0.1835,-0.1233,0.6255]);
let Shape931 = browser.currentScene.createNode("Shape");
Shape931.USE = "SiteShape";
Transform930.child = new undefined();

Transform930.child[0] = Shape931;

HAnimSite929.children = new MFNode();

HAnimSite929.children[0] = Transform930;

HAnimSegment925.children[2] = HAnimSite929;

HAnimJoint924.children = new MFNode();

HAnimJoint924.children[0] = HAnimSegment925;

let HAnimJoint932 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint932.name = "l_carpal_middle_phalanx_4";
HAnimJoint932.DEF = "hanim_l_carpal_middle_phalanx_4";
HAnimJoint932.center = new SFVec3f(new float[0.1815,-0.1225,0.598]);
HAnimJoint932.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint932.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment933 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment933.name = "SEGMENT_FOR_l_carpal_middle_phalanx_4";
HAnimSegment933.DEF = "hanim_SEGMENT_FOR_l_carpal_middle_phalanx_4";
let TouchSensor934 = browser.currentScene.createNode("TouchSensor");
TouchSensor934.description = "joint l_carpal_middle_phalanx_4 segment SEGMENT_FOR_l_carpal_middle_phalanx_4";
HAnimSegment933.children = new MFNode();

HAnimSegment933.children[0] = TouchSensor934;

let Transform935 = browser.currentScene.createNode("Transform");
Transform935.translation = new SFVec3f(new float[0.1815,-0.1225,0.598]);
let Shape936 = browser.currentScene.createNode("Shape");
Shape936.USE = "JointShape";
Transform935.child = new undefined();

Transform935.child[0] = Shape936;

HAnimSegment933.children[1] = Transform935;

let HAnimSite937 = browser.currentScene.createNode("HAnimSite");
HAnimSite937.name = "SEGMENT_FOR_l_carpal_middle_phalanx_4_tip";
HAnimSite937.DEF = "hanim_SEGMENT_FOR_l_carpal_middle_phalanx_4_tip";
let Transform938 = browser.currentScene.createNode("Transform");
Transform938.translation = new SFVec3f(new float[0.1815,-0.1225,0.598]);
let Shape939 = browser.currentScene.createNode("Shape");
Shape939.USE = "SiteShape";
Transform938.child = new undefined();

Transform938.child[0] = Shape939;

HAnimSite937.children = new MFNode();

HAnimSite937.children[0] = Transform938;

HAnimSegment933.children[2] = HAnimSite937;

HAnimJoint932.children = new MFNode();

HAnimJoint932.children[0] = HAnimSegment933;

let HAnimJoint940 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint940.name = "l_carpal_distal_phalanx_4";
HAnimJoint940.DEF = "hanim_l_carpal_distal_phalanx_4";
HAnimJoint940.center = new SFVec3f(new float[0.1805,-0.1217,0.5722]);
HAnimJoint940.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint940.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment941 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment941.name = "SEGMENT_FOR_l_carpal_distal_phalanx_4";
HAnimSegment941.DEF = "hanim_SEGMENT_FOR_l_carpal_distal_phalanx_4";
let TouchSensor942 = browser.currentScene.createNode("TouchSensor");
TouchSensor942.description = "joint l_carpal_distal_phalanx_4 segment SEGMENT_FOR_l_carpal_distal_phalanx_4";
HAnimSegment941.children = new MFNode();

HAnimSegment941.children[0] = TouchSensor942;

let Transform943 = browser.currentScene.createNode("Transform");
Transform943.translation = new SFVec3f(new float[0.1805,-0.1217,0.5722]);
let Shape944 = browser.currentScene.createNode("Shape");
Shape944.USE = "JointShape";
Transform943.child = new undefined();

Transform943.child[0] = Shape944;

HAnimSegment941.children[1] = Transform943;

let HAnimSite945 = browser.currentScene.createNode("HAnimSite");
HAnimSite945.name = "SEGMENT_FOR_l_carpal_distal_phalanx_4_tip";
HAnimSite945.DEF = "hanim_SEGMENT_FOR_l_carpal_distal_phalanx_4_tip";
let Transform946 = browser.currentScene.createNode("Transform");
Transform946.translation = new SFVec3f(new float[0.1805,-0.1217,0.5722]);
let Shape947 = browser.currentScene.createNode("Shape");
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

let HAnimJoint948 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint948.name = "l_metacarpal_5";
HAnimJoint948.DEF = "hanim_l_metacarpal_5";
HAnimJoint948.center = new SFVec3f(new float[0.1815,-0.1347,0.6797]);
HAnimJoint948.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint948.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment949 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment949.name = "SEGMENT_FOR_l_metacarpal_5";
HAnimSegment949.DEF = "hanim_SEGMENT_FOR_l_metacarpal_5";
let TouchSensor950 = browser.currentScene.createNode("TouchSensor");
TouchSensor950.description = "joint l_metacarpal_5 segment SEGMENT_FOR_l_metacarpal_5";
HAnimSegment949.children = new MFNode();

HAnimSegment949.children[0] = TouchSensor950;

let Transform951 = browser.currentScene.createNode("Transform");
Transform951.translation = new SFVec3f(new float[0.1815,-0.1347,0.6797]);
let Shape952 = browser.currentScene.createNode("Shape");
Shape952.USE = "JointShape";
Transform951.child = new undefined();

Transform951.child[0] = Shape952;

HAnimSegment949.children[1] = Transform951;

let HAnimSite953 = browser.currentScene.createNode("HAnimSite");
HAnimSite953.name = "SEGMENT_FOR_l_metacarpal_5_tip";
HAnimSite953.DEF = "hanim_SEGMENT_FOR_l_metacarpal_5_tip";
let Transform954 = browser.currentScene.createNode("Transform");
Transform954.translation = new SFVec3f(new float[0.1815,-0.1347,0.6797]);
let Shape955 = browser.currentScene.createNode("Shape");
Shape955.USE = "SiteShape";
Transform954.child = new undefined();

Transform954.child[0] = Shape955;

HAnimSite953.children = new MFNode();

HAnimSite953.children[0] = Transform954;

HAnimSegment949.children[2] = HAnimSite953;

HAnimJoint948.children = new MFNode();

HAnimJoint948.children[0] = HAnimSegment949;

let HAnimJoint956 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint956.name = "l_carpal_proximal_phalanx_5";
HAnimJoint956.DEF = "hanim_l_carpal_proximal_phalanx_5";
HAnimJoint956.center = new SFVec3f(new float[0.1832,-0.1389,0.6295]);
HAnimJoint956.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint956.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment957 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment957.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_5";
HAnimSegment957.DEF = "hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_5";
let TouchSensor958 = browser.currentScene.createNode("TouchSensor");
TouchSensor958.description = "joint l_carpal_proximal_phalanx_5 segment SEGMENT_FOR_l_carpal_proximal_phalanx_5";
HAnimSegment957.children = new MFNode();

HAnimSegment957.children[0] = TouchSensor958;

let Transform959 = browser.currentScene.createNode("Transform");
Transform959.translation = new SFVec3f(new float[0.1832,-0.1389,0.6295]);
let Shape960 = browser.currentScene.createNode("Shape");
Shape960.USE = "JointShape";
Transform959.child = new undefined();

Transform959.child[0] = Shape960;

HAnimSegment957.children[1] = Transform959;

let HAnimSite961 = browser.currentScene.createNode("HAnimSite");
HAnimSite961.name = "SEGMENT_FOR_l_carpal_proximal_phalanx_5_tip";
HAnimSite961.DEF = "hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_5_tip";
let Transform962 = browser.currentScene.createNode("Transform");
Transform962.translation = new SFVec3f(new float[0.1832,-0.1389,0.6295]);
let Shape963 = browser.currentScene.createNode("Shape");
Shape963.USE = "SiteShape";
Transform962.child = new undefined();

Transform962.child[0] = Shape963;

HAnimSite961.children = new MFNode();

HAnimSite961.children[0] = Transform962;

HAnimSegment957.children[2] = HAnimSite961;

HAnimJoint956.children = new MFNode();

HAnimJoint956.children[0] = HAnimSegment957;

let HAnimJoint964 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint964.name = "l_carpal_middle_phalanx_5";
HAnimJoint964.DEF = "hanim_l_carpal_middle_phalanx_5";
HAnimJoint964.center = new SFVec3f(new float[0.1815,-0.139,0.6124]);
HAnimJoint964.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint964.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment965 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment965.name = "SEGMENT_FOR_l_carpal_middle_phalanx_5";
HAnimSegment965.DEF = "hanim_SEGMENT_FOR_l_carpal_middle_phalanx_5";
let TouchSensor966 = browser.currentScene.createNode("TouchSensor");
TouchSensor966.description = "joint l_carpal_middle_phalanx_5 segment SEGMENT_FOR_l_carpal_middle_phalanx_5";
HAnimSegment965.children = new MFNode();

HAnimSegment965.children[0] = TouchSensor966;

let Transform967 = browser.currentScene.createNode("Transform");
Transform967.translation = new SFVec3f(new float[0.1815,-0.139,0.6124]);
let Shape968 = browser.currentScene.createNode("Shape");
Shape968.USE = "JointShape";
Transform967.child = new undefined();

Transform967.child[0] = Shape968;

HAnimSegment965.children[1] = Transform967;

let HAnimSite969 = browser.currentScene.createNode("HAnimSite");
HAnimSite969.name = "SEGMENT_FOR_l_carpal_middle_phalanx_5_tip";
HAnimSite969.DEF = "hanim_SEGMENT_FOR_l_carpal_middle_phalanx_5_tip";
let Transform970 = browser.currentScene.createNode("Transform");
Transform970.translation = new SFVec3f(new float[0.1815,-0.139,0.6124]);
let Shape971 = browser.currentScene.createNode("Shape");
Shape971.USE = "SiteShape";
Transform970.child = new undefined();

Transform970.child[0] = Shape971;

HAnimSite969.children = new MFNode();

HAnimSite969.children[0] = Transform970;

HAnimSegment965.children[2] = HAnimSite969;

HAnimJoint964.children = new MFNode();

HAnimJoint964.children[0] = HAnimSegment965;

let HAnimJoint972 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint972.name = "l_carpal_distal_phalanx_5";
HAnimJoint972.DEF = "hanim_l_carpal_distal_phalanx_5";
HAnimJoint972.center = new SFVec3f(new float[0.1806,-0.1388,0.5938]);
HAnimJoint972.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint972.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment973 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment973.name = "SEGMENT_FOR_l_carpal_distal_phalanx_5";
HAnimSegment973.DEF = "hanim_SEGMENT_FOR_l_carpal_distal_phalanx_5";
let TouchSensor974 = browser.currentScene.createNode("TouchSensor");
TouchSensor974.description = "joint l_carpal_distal_phalanx_5 segment SEGMENT_FOR_l_carpal_distal_phalanx_5";
HAnimSegment973.children = new MFNode();

HAnimSegment973.children[0] = TouchSensor974;

let Transform975 = browser.currentScene.createNode("Transform");
Transform975.translation = new SFVec3f(new float[0.1806,-0.1388,0.5938]);
let Shape976 = browser.currentScene.createNode("Shape");
Shape976.USE = "JointShape";
Transform975.child = new undefined();

Transform975.child[0] = Shape976;

HAnimSegment973.children[1] = Transform975;

let HAnimSite977 = browser.currentScene.createNode("HAnimSite");
HAnimSite977.name = "SEGMENT_FOR_l_carpal_distal_phalanx_5_tip";
HAnimSite977.DEF = "hanim_SEGMENT_FOR_l_carpal_distal_phalanx_5_tip";
let Transform978 = browser.currentScene.createNode("Transform");
Transform978.translation = new SFVec3f(new float[0.1806,-0.1388,0.5938]);
let Shape979 = browser.currentScene.createNode("Shape");
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

let HAnimJoint980 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint980.name = "r_clavicle";
HAnimJoint980.DEF = "hanim_r_clavicle";
HAnimJoint980.center = new SFVec3f(new float[-0.1231,-0.1148,1.1833]);
HAnimJoint980.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint980.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment981 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment981.name = "SEGMENT_FOR_r_clavicle";
HAnimSegment981.DEF = "hanim_SEGMENT_FOR_r_clavicle";
let TouchSensor982 = browser.currentScene.createNode("TouchSensor");
TouchSensor982.description = "joint r_clavicle segment SEGMENT_FOR_r_clavicle";
HAnimSegment981.children = new MFNode();

HAnimSegment981.children[0] = TouchSensor982;

let Transform983 = browser.currentScene.createNode("Transform");
Transform983.translation = new SFVec3f(new float[-0.1231,-0.1148,1.1833]);
let Shape984 = browser.currentScene.createNode("Shape");
Shape984.USE = "JointShape";
Transform983.child = new undefined();

Transform983.child[0] = Shape984;

HAnimSegment981.children[1] = Transform983;

let HAnimSite985 = browser.currentScene.createNode("HAnimSite");
HAnimSite985.name = "SEGMENT_FOR_r_clavicle_tip";
HAnimSite985.DEF = "hanim_SEGMENT_FOR_r_clavicle_tip";
let Transform986 = browser.currentScene.createNode("Transform");
Transform986.translation = new SFVec3f(new float[-0.1231,-0.1148,1.1833]);
let Shape987 = browser.currentScene.createNode("Shape");
Shape987.USE = "SiteShape";
Transform986.child = new undefined();

Transform986.child[0] = Shape987;

HAnimSite985.children = new MFNode();

HAnimSite985.children[0] = Transform986;

HAnimSegment981.children[2] = HAnimSite985;

HAnimJoint980.children = new MFNode();

HAnimJoint980.children[0] = HAnimSegment981;

let HAnimJoint988 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint988.name = "r_scapula";
HAnimJoint988.DEF = "hanim_r_scapula";
HAnimJoint988.center = new SFVec3f(new float[-0.0387,-0.1157,1.2001]);
HAnimJoint988.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint988.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment989 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment989.name = "SEGMENT_FOR_r_scapula";
HAnimSegment989.DEF = "hanim_SEGMENT_FOR_r_scapula";
let TouchSensor990 = browser.currentScene.createNode("TouchSensor");
TouchSensor990.description = "joint r_scapula segment SEGMENT_FOR_r_scapula";
HAnimSegment989.children = new MFNode();

HAnimSegment989.children[0] = TouchSensor990;

let Transform991 = browser.currentScene.createNode("Transform");
Transform991.translation = new SFVec3f(new float[-0.0387,-0.1157,1.2001]);
let Shape992 = browser.currentScene.createNode("Shape");
Shape992.USE = "JointShape";
Transform991.child = new undefined();

Transform991.child[0] = Shape992;

HAnimSegment989.children[1] = Transform991;

let HAnimSite993 = browser.currentScene.createNode("HAnimSite");
HAnimSite993.name = "SEGMENT_FOR_r_scapula_tip";
HAnimSite993.DEF = "hanim_SEGMENT_FOR_r_scapula_tip";
let Transform994 = browser.currentScene.createNode("Transform");
Transform994.translation = new SFVec3f(new float[-0.0387,-0.1157,1.2001]);
let Shape995 = browser.currentScene.createNode("Shape");
Shape995.USE = "SiteShape";
Transform994.child = new undefined();

Transform994.child[0] = Shape995;

HAnimSite993.children = new MFNode();

HAnimSite993.children[0] = Transform994;

HAnimSegment989.children[2] = HAnimSite993;

HAnimJoint988.children = new MFNode();

HAnimJoint988.children[0] = HAnimSegment989;

let HAnimJoint996 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint996.name = "r_upperarm";
HAnimJoint996.DEF = "hanim_r_upperarm";
HAnimJoint996.center = new SFVec3f(new float[-0.1649,-0.1051,1.17]);
HAnimJoint996.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint996.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment997 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment997.name = "SEGMENT_FOR_r_upperarm";
HAnimSegment997.DEF = "hanim_SEGMENT_FOR_r_upperarm";
let TouchSensor998 = browser.currentScene.createNode("TouchSensor");
TouchSensor998.description = "joint r_upperarm segment SEGMENT_FOR_r_upperarm";
HAnimSegment997.children = new MFNode();

HAnimSegment997.children[0] = TouchSensor998;

let Transform999 = browser.currentScene.createNode("Transform");
Transform999.translation = new SFVec3f(new float[-0.1649,-0.1051,1.17]);
let Shape1000 = browser.currentScene.createNode("Shape");
Shape1000.USE = "JointShape";
Transform999.child = new undefined();

Transform999.child[0] = Shape1000;

HAnimSegment997.children[1] = Transform999;

let HAnimSite1001 = browser.currentScene.createNode("HAnimSite");
HAnimSite1001.name = "SEGMENT_FOR_r_upperarm_tip";
HAnimSite1001.DEF = "hanim_SEGMENT_FOR_r_upperarm_tip";
let Transform1002 = browser.currentScene.createNode("Transform");
Transform1002.translation = new SFVec3f(new float[-0.1649,-0.1051,1.17]);
let Shape1003 = browser.currentScene.createNode("Shape");
Shape1003.USE = "SiteShape";
Transform1002.child = new undefined();

Transform1002.child[0] = Shape1003;

HAnimSite1001.children = new MFNode();

HAnimSite1001.children[0] = Transform1002;

HAnimSegment997.children[2] = HAnimSite1001;

HAnimJoint996.children = new MFNode();

HAnimJoint996.children[0] = HAnimSegment997;

let HAnimJoint1004 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1004.name = "r_forearm";
HAnimJoint1004.DEF = "hanim_r_forearm";
HAnimJoint1004.center = new SFVec3f(new float[-0.1819,-0.1075,0.9202]);
HAnimJoint1004.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1004.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1005 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1005.name = "SEGMENT_FOR_r_forearm";
HAnimSegment1005.DEF = "hanim_SEGMENT_FOR_r_forearm";
let TouchSensor1006 = browser.currentScene.createNode("TouchSensor");
TouchSensor1006.description = "joint r_forearm segment SEGMENT_FOR_r_forearm";
HAnimSegment1005.children = new MFNode();

HAnimSegment1005.children[0] = TouchSensor1006;

let Transform1007 = browser.currentScene.createNode("Transform");
Transform1007.translation = new SFVec3f(new float[-0.1819,-0.1075,0.9202]);
let Shape1008 = browser.currentScene.createNode("Shape");
Shape1008.USE = "JointShape";
Transform1007.child = new undefined();

Transform1007.child[0] = Shape1008;

HAnimSegment1005.children[1] = Transform1007;

let HAnimSite1009 = browser.currentScene.createNode("HAnimSite");
HAnimSite1009.name = "SEGMENT_FOR_r_forearm_tip";
HAnimSite1009.DEF = "hanim_SEGMENT_FOR_r_forearm_tip";
let Transform1010 = browser.currentScene.createNode("Transform");
Transform1010.translation = new SFVec3f(new float[-0.1819,-0.1075,0.9202]);
let Shape1011 = browser.currentScene.createNode("Shape");
Shape1011.USE = "SiteShape";
Transform1010.child = new undefined();

Transform1010.child[0] = Shape1011;

HAnimSite1009.children = new MFNode();

HAnimSite1009.children[0] = Transform1010;

HAnimSegment1005.children[2] = HAnimSite1009;

HAnimJoint1004.children = new MFNode();

HAnimJoint1004.children[0] = HAnimSegment1005;

let HAnimJoint1012 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1012.name = "r_carpal";
HAnimJoint1012.DEF = "hanim_r_carpal";
HAnimJoint1012.center = new SFVec3f(new float[-0.1818,-0.1069,0.7157]);
HAnimJoint1012.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1012.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1013 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1013.name = "SEGMENT_FOR_r_carpal";
HAnimSegment1013.DEF = "hanim_SEGMENT_FOR_r_carpal";
let TouchSensor1014 = browser.currentScene.createNode("TouchSensor");
TouchSensor1014.description = "joint r_carpal segment SEGMENT_FOR_r_carpal";
HAnimSegment1013.children = new MFNode();

HAnimSegment1013.children[0] = TouchSensor1014;

let Transform1015 = browser.currentScene.createNode("Transform");
Transform1015.translation = new SFVec3f(new float[-0.1818,-0.1069,0.7157]);
let Shape1016 = browser.currentScene.createNode("Shape");
Shape1016.USE = "JointShape";
Transform1015.child = new undefined();

Transform1015.child[0] = Shape1016;

HAnimSegment1013.children[1] = Transform1015;

let HAnimSite1017 = browser.currentScene.createNode("HAnimSite");
HAnimSite1017.name = "SEGMENT_FOR_r_carpal_tip";
HAnimSite1017.DEF = "hanim_SEGMENT_FOR_r_carpal_tip";
let Transform1018 = browser.currentScene.createNode("Transform");
Transform1018.translation = new SFVec3f(new float[-0.1818,-0.1069,0.7157]);
let Shape1019 = browser.currentScene.createNode("Shape");
Shape1019.USE = "SiteShape";
Transform1018.child = new undefined();

Transform1018.child[0] = Shape1019;

HAnimSite1017.children = new MFNode();

HAnimSite1017.children[0] = Transform1018;

HAnimSegment1013.children[2] = HAnimSite1017;

HAnimJoint1012.children = new MFNode();

HAnimJoint1012.children[0] = HAnimSegment1013;

let HAnimJoint1020 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1020.name = "r_trapezium";
HAnimJoint1020.DEF = "hanim_r_trapezium";
HAnimJoint1020.center = new SFVec3f(new float[-0.1811,-0.0826,0.6975]);
HAnimJoint1020.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1020.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1021 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1021.name = "SEGMENT_FOR_r_trapezium";
HAnimSegment1021.DEF = "hanim_SEGMENT_FOR_r_trapezium";
let TouchSensor1022 = browser.currentScene.createNode("TouchSensor");
TouchSensor1022.description = "joint r_trapezium segment SEGMENT_FOR_r_trapezium";
HAnimSegment1021.children = new MFNode();

HAnimSegment1021.children[0] = TouchSensor1022;

let Transform1023 = browser.currentScene.createNode("Transform");
Transform1023.translation = new SFVec3f(new float[-0.1811,-0.0826,0.6975]);
let Shape1024 = browser.currentScene.createNode("Shape");
Shape1024.USE = "JointShape";
Transform1023.child = new undefined();

Transform1023.child[0] = Shape1024;

HAnimSegment1021.children[1] = Transform1023;

let HAnimSite1025 = browser.currentScene.createNode("HAnimSite");
HAnimSite1025.name = "SEGMENT_FOR_r_trapezium_tip";
HAnimSite1025.DEF = "hanim_SEGMENT_FOR_r_trapezium_tip";
let Transform1026 = browser.currentScene.createNode("Transform");
Transform1026.translation = new SFVec3f(new float[-0.1811,-0.0826,0.6975]);
let Shape1027 = browser.currentScene.createNode("Shape");
Shape1027.USE = "SiteShape";
Transform1026.child = new undefined();

Transform1026.child[0] = Shape1027;

HAnimSite1025.children = new MFNode();

HAnimSite1025.children[0] = Transform1026;

HAnimSegment1021.children[2] = HAnimSite1025;

HAnimJoint1020.children = new MFNode();

HAnimJoint1020.children[0] = HAnimSegment1021;

let HAnimJoint1028 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1028.name = "r_metacarpal_1";
HAnimJoint1028.DEF = "hanim_r_metacarpal_1";
HAnimJoint1028.center = new SFVec3f(new float[-0.1803,-0.0759,0.684]);
HAnimJoint1028.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1028.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1029 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1029.name = "SEGMENT_FOR_r_metacarpal_1";
HAnimSegment1029.DEF = "hanim_SEGMENT_FOR_r_metacarpal_1";
let TouchSensor1030 = browser.currentScene.createNode("TouchSensor");
TouchSensor1030.description = "joint r_metacarpal_1 segment SEGMENT_FOR_r_metacarpal_1";
HAnimSegment1029.children = new MFNode();

HAnimSegment1029.children[0] = TouchSensor1030;

let Transform1031 = browser.currentScene.createNode("Transform");
Transform1031.translation = new SFVec3f(new float[-0.1803,-0.0759,0.684]);
let Shape1032 = browser.currentScene.createNode("Shape");
Shape1032.USE = "JointShape";
Transform1031.child = new undefined();

Transform1031.child[0] = Shape1032;

HAnimSegment1029.children[1] = Transform1031;

let HAnimSite1033 = browser.currentScene.createNode("HAnimSite");
HAnimSite1033.name = "SEGMENT_FOR_r_metacarpal_1_tip";
HAnimSite1033.DEF = "hanim_SEGMENT_FOR_r_metacarpal_1_tip";
let Transform1034 = browser.currentScene.createNode("Transform");
Transform1034.translation = new SFVec3f(new float[-0.1803,-0.0759,0.684]);
let Shape1035 = browser.currentScene.createNode("Shape");
Shape1035.USE = "SiteShape";
Transform1034.child = new undefined();

Transform1034.child[0] = Shape1035;

HAnimSite1033.children = new MFNode();

HAnimSite1033.children[0] = Transform1034;

HAnimSegment1029.children[2] = HAnimSite1033;

HAnimJoint1028.children = new MFNode();

HAnimJoint1028.children[0] = HAnimSegment1029;

let HAnimJoint1036 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1036.name = "r_carpal_proximal_phalanx_1";
HAnimJoint1036.DEF = "hanim_r_carpal_proximal_phalanx_1";
HAnimJoint1036.center = new SFVec3f(new float[-0.1808,-0.0661,0.6642]);
HAnimJoint1036.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1036.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1037 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1037.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_1";
HAnimSegment1037.DEF = "hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_1";
let TouchSensor1038 = browser.currentScene.createNode("TouchSensor");
TouchSensor1038.description = "joint r_carpal_proximal_phalanx_1 segment SEGMENT_FOR_r_carpal_proximal_phalanx_1";
HAnimSegment1037.children = new MFNode();

HAnimSegment1037.children[0] = TouchSensor1038;

let Transform1039 = browser.currentScene.createNode("Transform");
Transform1039.translation = new SFVec3f(new float[-0.1808,-0.0661,0.6642]);
let Shape1040 = browser.currentScene.createNode("Shape");
Shape1040.USE = "JointShape";
Transform1039.child = new undefined();

Transform1039.child[0] = Shape1040;

HAnimSegment1037.children[1] = Transform1039;

let HAnimSite1041 = browser.currentScene.createNode("HAnimSite");
HAnimSite1041.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_1_tip";
HAnimSite1041.DEF = "hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_1_tip";
let Transform1042 = browser.currentScene.createNode("Transform");
Transform1042.translation = new SFVec3f(new float[-0.1808,-0.0661,0.6642]);
let Shape1043 = browser.currentScene.createNode("Shape");
Shape1043.USE = "SiteShape";
Transform1042.child = new undefined();

Transform1042.child[0] = Shape1043;

HAnimSite1041.children = new MFNode();

HAnimSite1041.children[0] = Transform1042;

HAnimSegment1037.children[2] = HAnimSite1041;

HAnimJoint1036.children = new MFNode();

HAnimJoint1036.children[0] = HAnimSegment1037;

let HAnimJoint1044 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1044.name = "r_carpal_distal_phalanx_1";
HAnimJoint1044.DEF = "hanim_r_carpal_distal_phalanx_1";
HAnimJoint1044.center = new SFVec3f(new float[-0.1825,-0.0522,0.6455]);
HAnimJoint1044.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1044.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1045 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1045.name = "SEGMENT_FOR_r_carpal_distal_phalanx_1";
HAnimSegment1045.DEF = "hanim_SEGMENT_FOR_r_carpal_distal_phalanx_1";
let TouchSensor1046 = browser.currentScene.createNode("TouchSensor");
TouchSensor1046.description = "joint r_carpal_distal_phalanx_1 segment SEGMENT_FOR_r_carpal_distal_phalanx_1";
HAnimSegment1045.children = new MFNode();

HAnimSegment1045.children[0] = TouchSensor1046;

let Transform1047 = browser.currentScene.createNode("Transform");
Transform1047.translation = new SFVec3f(new float[-0.1825,-0.0522,0.6455]);
let Shape1048 = browser.currentScene.createNode("Shape");
Shape1048.USE = "JointShape";
Transform1047.child = new undefined();

Transform1047.child[0] = Shape1048;

HAnimSegment1045.children[1] = Transform1047;

let HAnimSite1049 = browser.currentScene.createNode("HAnimSite");
HAnimSite1049.name = "SEGMENT_FOR_r_carpal_distal_phalanx_1_tip";
HAnimSite1049.DEF = "hanim_SEGMENT_FOR_r_carpal_distal_phalanx_1_tip";
let Transform1050 = browser.currentScene.createNode("Transform");
Transform1050.translation = new SFVec3f(new float[-0.1825,-0.0522,0.6455]);
let Shape1051 = browser.currentScene.createNode("Shape");
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

let HAnimJoint1052 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1052.name = "r_trapezoid";
HAnimJoint1052.DEF = "hanim_r_trapezoid";
HAnimJoint1052.center = new SFVec3f(new float[-0.1811,-0.0935,0.6984]);
HAnimJoint1052.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1052.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1053 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1053.name = "SEGMENT_FOR_r_trapezoid";
HAnimSegment1053.DEF = "hanim_SEGMENT_FOR_r_trapezoid";
let TouchSensor1054 = browser.currentScene.createNode("TouchSensor");
TouchSensor1054.description = "joint r_trapezoid segment SEGMENT_FOR_r_trapezoid";
HAnimSegment1053.children = new MFNode();

HAnimSegment1053.children[0] = TouchSensor1054;

let Transform1055 = browser.currentScene.createNode("Transform");
Transform1055.translation = new SFVec3f(new float[-0.1811,-0.0935,0.6984]);
let Shape1056 = browser.currentScene.createNode("Shape");
Shape1056.USE = "JointShape";
Transform1055.child = new undefined();

Transform1055.child[0] = Shape1056;

HAnimSegment1053.children[1] = Transform1055;

let HAnimSite1057 = browser.currentScene.createNode("HAnimSite");
HAnimSite1057.name = "SEGMENT_FOR_r_trapezoid_tip";
HAnimSite1057.DEF = "hanim_SEGMENT_FOR_r_trapezoid_tip";
let Transform1058 = browser.currentScene.createNode("Transform");
Transform1058.translation = new SFVec3f(new float[-0.1811,-0.0935,0.6984]);
let Shape1059 = browser.currentScene.createNode("Shape");
Shape1059.USE = "SiteShape";
Transform1058.child = new undefined();

Transform1058.child[0] = Shape1059;

HAnimSite1057.children = new MFNode();

HAnimSite1057.children[0] = Transform1058;

HAnimSegment1053.children[2] = HAnimSite1057;

HAnimJoint1052.children = new MFNode();

HAnimJoint1052.children[0] = HAnimSegment1053;

let HAnimJoint1060 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1060.name = "r_metacarpal_2";
HAnimJoint1060.DEF = "hanim_r_metacarpal_2";
HAnimJoint1060.center = new SFVec3f(new float[-0.1811,-0.0922,0.679]);
HAnimJoint1060.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1060.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1061 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1061.name = "SEGMENT_FOR_r_metacarpal_2";
HAnimSegment1061.DEF = "hanim_SEGMENT_FOR_r_metacarpal_2";
let TouchSensor1062 = browser.currentScene.createNode("TouchSensor");
TouchSensor1062.description = "joint r_metacarpal_2 segment SEGMENT_FOR_r_metacarpal_2";
HAnimSegment1061.children = new MFNode();

HAnimSegment1061.children[0] = TouchSensor1062;

let Transform1063 = browser.currentScene.createNode("Transform");
Transform1063.translation = new SFVec3f(new float[-0.1811,-0.0922,0.679]);
let Shape1064 = browser.currentScene.createNode("Shape");
Shape1064.USE = "JointShape";
Transform1063.child = new undefined();

Transform1063.child[0] = Shape1064;

HAnimSegment1061.children[1] = Transform1063;

let HAnimSite1065 = browser.currentScene.createNode("HAnimSite");
HAnimSite1065.name = "SEGMENT_FOR_r_metacarpal_2_tip";
HAnimSite1065.DEF = "hanim_SEGMENT_FOR_r_metacarpal_2_tip";
let Transform1066 = browser.currentScene.createNode("Transform");
Transform1066.translation = new SFVec3f(new float[-0.1811,-0.0922,0.679]);
let Shape1067 = browser.currentScene.createNode("Shape");
Shape1067.USE = "SiteShape";
Transform1066.child = new undefined();

Transform1066.child[0] = Shape1067;

HAnimSite1065.children = new MFNode();

HAnimSite1065.children[0] = Transform1066;

HAnimSegment1061.children[2] = HAnimSite1065;

HAnimJoint1060.children = new MFNode();

HAnimJoint1060.children[0] = HAnimSegment1061;

let HAnimJoint1068 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1068.name = "r_carpal_proximal_phalanx_2";
HAnimJoint1068.DEF = "hanim_r_carpal_proximal_phalanx_2";
HAnimJoint1068.center = new SFVec3f(new float[-0.1835,-0.0868,0.6286]);
HAnimJoint1068.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1068.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1069 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1069.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_2";
HAnimSegment1069.DEF = "hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_2";
let TouchSensor1070 = browser.currentScene.createNode("TouchSensor");
TouchSensor1070.description = "joint r_carpal_proximal_phalanx_2 segment SEGMENT_FOR_r_carpal_proximal_phalanx_2";
HAnimSegment1069.children = new MFNode();

HAnimSegment1069.children[0] = TouchSensor1070;

let Transform1071 = browser.currentScene.createNode("Transform");
Transform1071.translation = new SFVec3f(new float[-0.1835,-0.0868,0.6286]);
let Shape1072 = browser.currentScene.createNode("Shape");
Shape1072.USE = "JointShape";
Transform1071.child = new undefined();

Transform1071.child[0] = Shape1072;

HAnimSegment1069.children[1] = Transform1071;

let HAnimSite1073 = browser.currentScene.createNode("HAnimSite");
HAnimSite1073.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_2_tip";
HAnimSite1073.DEF = "hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_2_tip";
let Transform1074 = browser.currentScene.createNode("Transform");
Transform1074.translation = new SFVec3f(new float[-0.1835,-0.0868,0.6286]);
let Shape1075 = browser.currentScene.createNode("Shape");
Shape1075.USE = "SiteShape";
Transform1074.child = new undefined();

Transform1074.child[0] = Shape1075;

HAnimSite1073.children = new MFNode();

HAnimSite1073.children[0] = Transform1074;

HAnimSegment1069.children[2] = HAnimSite1073;

HAnimJoint1068.children = new MFNode();

HAnimJoint1068.children[0] = HAnimSegment1069;

let HAnimJoint1076 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1076.name = "r_carpal_middle_phalanx_2";
HAnimJoint1076.DEF = "hanim_r_carpal_middle_phalanx_2";
HAnimJoint1076.center = new SFVec3f(new float[-0.1815,-0.0877,0.5983]);
HAnimJoint1076.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1076.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1077 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1077.name = "SEGMENT_FOR_r_carpal_middle_phalanx_2";
HAnimSegment1077.DEF = "hanim_SEGMENT_FOR_r_carpal_middle_phalanx_2";
let TouchSensor1078 = browser.currentScene.createNode("TouchSensor");
TouchSensor1078.description = "joint r_carpal_middle_phalanx_2 segment SEGMENT_FOR_r_carpal_middle_phalanx_2";
HAnimSegment1077.children = new MFNode();

HAnimSegment1077.children[0] = TouchSensor1078;

let Transform1079 = browser.currentScene.createNode("Transform");
Transform1079.translation = new SFVec3f(new float[-0.1815,-0.0877,0.5983]);
let Shape1080 = browser.currentScene.createNode("Shape");
Shape1080.USE = "JointShape";
Transform1079.child = new undefined();

Transform1079.child[0] = Shape1080;

HAnimSegment1077.children[1] = Transform1079;

let HAnimSite1081 = browser.currentScene.createNode("HAnimSite");
HAnimSite1081.name = "SEGMENT_FOR_r_carpal_middle_phalanx_2_tip";
HAnimSite1081.DEF = "hanim_SEGMENT_FOR_r_carpal_middle_phalanx_2_tip";
let Transform1082 = browser.currentScene.createNode("Transform");
Transform1082.translation = new SFVec3f(new float[-0.1815,-0.0877,0.5983]);
let Shape1083 = browser.currentScene.createNode("Shape");
Shape1083.USE = "SiteShape";
Transform1082.child = new undefined();

Transform1082.child[0] = Shape1083;

HAnimSite1081.children = new MFNode();

HAnimSite1081.children[0] = Transform1082;

HAnimSegment1077.children[2] = HAnimSite1081;

HAnimJoint1076.children = new MFNode();

HAnimJoint1076.children[0] = HAnimSegment1077;

let HAnimJoint1084 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1084.name = "r_carpal_distal_phalanx_2";
HAnimJoint1084.DEF = "hanim_r_carpal_distal_phalanx_2";
HAnimJoint1084.center = new SFVec3f(new float[-0.1805,-0.0885,0.5731]);
HAnimJoint1084.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1084.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1085 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1085.name = "SEGMENT_FOR_r_carpal_distal_phalanx_2";
HAnimSegment1085.DEF = "hanim_SEGMENT_FOR_r_carpal_distal_phalanx_2";
let TouchSensor1086 = browser.currentScene.createNode("TouchSensor");
TouchSensor1086.description = "joint r_carpal_distal_phalanx_2 segment SEGMENT_FOR_r_carpal_distal_phalanx_2";
HAnimSegment1085.children = new MFNode();

HAnimSegment1085.children[0] = TouchSensor1086;

let Transform1087 = browser.currentScene.createNode("Transform");
Transform1087.translation = new SFVec3f(new float[-0.1805,-0.0885,0.5731]);
let Shape1088 = browser.currentScene.createNode("Shape");
Shape1088.USE = "JointShape";
Transform1087.child = new undefined();

Transform1087.child[0] = Shape1088;

HAnimSegment1085.children[1] = Transform1087;

let HAnimSite1089 = browser.currentScene.createNode("HAnimSite");
HAnimSite1089.name = "SEGMENT_FOR_r_carpal_distal_phalanx_2_tip";
HAnimSite1089.DEF = "hanim_SEGMENT_FOR_r_carpal_distal_phalanx_2_tip";
let Transform1090 = browser.currentScene.createNode("Transform");
Transform1090.translation = new SFVec3f(new float[-0.1805,-0.0885,0.5731]);
let Shape1091 = browser.currentScene.createNode("Shape");
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

let HAnimJoint1092 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1092.name = "r_capitate";
HAnimJoint1092.DEF = "hanim_r_capitate";
HAnimJoint1092.center = new SFVec3f(new float[-0.1809,-0.1067,0.7]);
HAnimJoint1092.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1092.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1093 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1093.name = "SEGMENT_FOR_r_capitate";
HAnimSegment1093.DEF = "hanim_SEGMENT_FOR_r_capitate";
let TouchSensor1094 = browser.currentScene.createNode("TouchSensor");
TouchSensor1094.description = "joint r_capitate segment SEGMENT_FOR_r_capitate";
HAnimSegment1093.children = new MFNode();

HAnimSegment1093.children[0] = TouchSensor1094;

let Transform1095 = browser.currentScene.createNode("Transform");
Transform1095.translation = new SFVec3f(new float[-0.1809,-0.1067,0.7]);
let Shape1096 = browser.currentScene.createNode("Shape");
Shape1096.USE = "JointShape";
Transform1095.child = new undefined();

Transform1095.child[0] = Shape1096;

HAnimSegment1093.children[1] = Transform1095;

let HAnimSite1097 = browser.currentScene.createNode("HAnimSite");
HAnimSite1097.name = "SEGMENT_FOR_r_capitate_tip";
HAnimSite1097.DEF = "hanim_SEGMENT_FOR_r_capitate_tip";
let Transform1098 = browser.currentScene.createNode("Transform");
Transform1098.translation = new SFVec3f(new float[-0.1809,-0.1067,0.7]);
let Shape1099 = browser.currentScene.createNode("Shape");
Shape1099.USE = "SiteShape";
Transform1098.child = new undefined();

Transform1098.child[0] = Shape1099;

HAnimSite1097.children = new MFNode();

HAnimSite1097.children[0] = Transform1098;

HAnimSegment1093.children[2] = HAnimSite1097;

HAnimJoint1092.children = new MFNode();

HAnimJoint1092.children[0] = HAnimSegment1093;

let HAnimJoint1100 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1100.name = "r_metacarpal_3";
HAnimJoint1100.DEF = "hanim_r_metacarpal_3";
HAnimJoint1100.center = new SFVec3f(new float[-0.1809,-0.1081,0.6772]);
HAnimJoint1100.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1100.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1101 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1101.name = "SEGMENT_FOR_r_metacarpal_3";
HAnimSegment1101.DEF = "hanim_SEGMENT_FOR_r_metacarpal_3";
let TouchSensor1102 = browser.currentScene.createNode("TouchSensor");
TouchSensor1102.description = "joint r_metacarpal_3 segment SEGMENT_FOR_r_metacarpal_3";
HAnimSegment1101.children = new MFNode();

HAnimSegment1101.children[0] = TouchSensor1102;

let Transform1103 = browser.currentScene.createNode("Transform");
Transform1103.translation = new SFVec3f(new float[-0.1809,-0.1081,0.6772]);
let Shape1104 = browser.currentScene.createNode("Shape");
Shape1104.USE = "JointShape";
Transform1103.child = new undefined();

Transform1103.child[0] = Shape1104;

HAnimSegment1101.children[1] = Transform1103;

let HAnimSite1105 = browser.currentScene.createNode("HAnimSite");
HAnimSite1105.name = "SEGMENT_FOR_r_metacarpal_3_tip";
HAnimSite1105.DEF = "hanim_SEGMENT_FOR_r_metacarpal_3_tip";
let Transform1106 = browser.currentScene.createNode("Transform");
Transform1106.translation = new SFVec3f(new float[-0.1809,-0.1081,0.6772]);
let Shape1107 = browser.currentScene.createNode("Shape");
Shape1107.USE = "SiteShape";
Transform1106.child = new undefined();

Transform1106.child[0] = Shape1107;

HAnimSite1105.children = new MFNode();

HAnimSite1105.children[0] = Transform1106;

HAnimSegment1101.children[2] = HAnimSite1105;

HAnimJoint1100.children = new MFNode();

HAnimJoint1100.children[0] = HAnimSegment1101;

let HAnimJoint1108 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1108.name = "r_carpal_proximal_phalanx_3";
HAnimJoint1108.DEF = "hanim_r_carpal_proximal_phalanx_3";
HAnimJoint1108.center = new SFVec3f(new float[-0.1835,-0.1058,0.6264]);
HAnimJoint1108.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1108.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1109 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1109.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_3";
HAnimSegment1109.DEF = "hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_3";
let TouchSensor1110 = browser.currentScene.createNode("TouchSensor");
TouchSensor1110.description = "joint r_carpal_proximal_phalanx_3 segment SEGMENT_FOR_r_carpal_proximal_phalanx_3";
HAnimSegment1109.children = new MFNode();

HAnimSegment1109.children[0] = TouchSensor1110;

let Transform1111 = browser.currentScene.createNode("Transform");
Transform1111.translation = new SFVec3f(new float[-0.1835,-0.1058,0.6264]);
let Shape1112 = browser.currentScene.createNode("Shape");
Shape1112.USE = "JointShape";
Transform1111.child = new undefined();

Transform1111.child[0] = Shape1112;

HAnimSegment1109.children[1] = Transform1111;

let HAnimSite1113 = browser.currentScene.createNode("HAnimSite");
HAnimSite1113.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_3_tip";
HAnimSite1113.DEF = "hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_3_tip";
let Transform1114 = browser.currentScene.createNode("Transform");
Transform1114.translation = new SFVec3f(new float[-0.1835,-0.1058,0.6264]);
let Shape1115 = browser.currentScene.createNode("Shape");
Shape1115.USE = "SiteShape";
Transform1114.child = new undefined();

Transform1114.child[0] = Shape1115;

HAnimSite1113.children = new MFNode();

HAnimSite1113.children[0] = Transform1114;

HAnimSegment1109.children[2] = HAnimSite1113;

HAnimJoint1108.children = new MFNode();

HAnimJoint1108.children[0] = HAnimSegment1109;

let HAnimJoint1116 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1116.name = "r_carpal_middle_phalanx_3";
HAnimJoint1116.DEF = "hanim_r_carpal_middle_phalanx_3";
HAnimJoint1116.center = new SFVec3f(new float[-0.1815,-0.1054,0.5947]);
HAnimJoint1116.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1116.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1117 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1117.name = "SEGMENT_FOR_r_carpal_middle_phalanx_3";
HAnimSegment1117.DEF = "hanim_SEGMENT_FOR_r_carpal_middle_phalanx_3";
let TouchSensor1118 = browser.currentScene.createNode("TouchSensor");
TouchSensor1118.description = "joint r_carpal_middle_phalanx_3 segment SEGMENT_FOR_r_carpal_middle_phalanx_3";
HAnimSegment1117.children = new MFNode();

HAnimSegment1117.children[0] = TouchSensor1118;

let Transform1119 = browser.currentScene.createNode("Transform");
Transform1119.translation = new SFVec3f(new float[-0.1815,-0.1054,0.5947]);
let Shape1120 = browser.currentScene.createNode("Shape");
Shape1120.USE = "JointShape";
Transform1119.child = new undefined();

Transform1119.child[0] = Shape1120;

HAnimSegment1117.children[1] = Transform1119;

let HAnimSite1121 = browser.currentScene.createNode("HAnimSite");
HAnimSite1121.name = "SEGMENT_FOR_r_carpal_middle_phalanx_3_tip";
HAnimSite1121.DEF = "hanim_SEGMENT_FOR_r_carpal_middle_phalanx_3_tip";
let Transform1122 = browser.currentScene.createNode("Transform");
Transform1122.translation = new SFVec3f(new float[-0.1815,-0.1054,0.5947]);
let Shape1123 = browser.currentScene.createNode("Shape");
Shape1123.USE = "SiteShape";
Transform1122.child = new undefined();

Transform1122.child[0] = Shape1123;

HAnimSite1121.children = new MFNode();

HAnimSite1121.children[0] = Transform1122;

HAnimSegment1117.children[2] = HAnimSite1121;

HAnimJoint1116.children = new MFNode();

HAnimJoint1116.children[0] = HAnimSegment1117;

let HAnimJoint1124 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1124.name = "r_carpal_distal_phalanx_3";
HAnimJoint1124.DEF = "hanim_r_carpal_distal_phalanx_3";
HAnimJoint1124.center = new SFVec3f(new float[-0.1805,-0.1056,0.5668]);
HAnimJoint1124.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1124.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1125 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1125.name = "SEGMENT_FOR_r_carpal_distal_phalanx_3";
HAnimSegment1125.DEF = "hanim_SEGMENT_FOR_r_carpal_distal_phalanx_3";
let TouchSensor1126 = browser.currentScene.createNode("TouchSensor");
TouchSensor1126.description = "joint r_carpal_distal_phalanx_3 segment SEGMENT_FOR_r_carpal_distal_phalanx_3";
HAnimSegment1125.children = new MFNode();

HAnimSegment1125.children[0] = TouchSensor1126;

let Transform1127 = browser.currentScene.createNode("Transform");
Transform1127.translation = new SFVec3f(new float[-0.1805,-0.1056,0.5668]);
let Shape1128 = browser.currentScene.createNode("Shape");
Shape1128.USE = "JointShape";
Transform1127.child = new undefined();

Transform1127.child[0] = Shape1128;

HAnimSegment1125.children[1] = Transform1127;

let HAnimSite1129 = browser.currentScene.createNode("HAnimSite");
HAnimSite1129.name = "SEGMENT_FOR_r_carpal_distal_phalanx_3_tip";
HAnimSite1129.DEF = "hanim_SEGMENT_FOR_r_carpal_distal_phalanx_3_tip";
let Transform1130 = browser.currentScene.createNode("Transform");
Transform1130.translation = new SFVec3f(new float[-0.1805,-0.1056,0.5668]);
let Shape1131 = browser.currentScene.createNode("Shape");
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

let HAnimJoint1132 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1132.name = "r_hamate";
HAnimJoint1132.DEF = "hanim_r_hamate";
HAnimJoint1132.center = new SFVec3f(new float[-0.1809,-0.1276,0.6973]);
HAnimJoint1132.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1132.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1133 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1133.name = "SEGMENT_FOR_r_hamate";
HAnimSegment1133.DEF = "hanim_SEGMENT_FOR_r_hamate";
let TouchSensor1134 = browser.currentScene.createNode("TouchSensor");
TouchSensor1134.description = "joint r_hamate segment SEGMENT_FOR_r_hamate";
HAnimSegment1133.children = new MFNode();

HAnimSegment1133.children[0] = TouchSensor1134;

let Transform1135 = browser.currentScene.createNode("Transform");
Transform1135.translation = new SFVec3f(new float[-0.1809,-0.1276,0.6973]);
let Shape1136 = browser.currentScene.createNode("Shape");
Shape1136.USE = "JointShape";
Transform1135.child = new undefined();

Transform1135.child[0] = Shape1136;

HAnimSegment1133.children[1] = Transform1135;

let HAnimSite1137 = browser.currentScene.createNode("HAnimSite");
HAnimSite1137.name = "SEGMENT_FOR_r_hamate_tip";
HAnimSite1137.DEF = "hanim_SEGMENT_FOR_r_hamate_tip";
let Transform1138 = browser.currentScene.createNode("Transform");
Transform1138.translation = new SFVec3f(new float[-0.1809,-0.1276,0.6973]);
let Shape1139 = browser.currentScene.createNode("Shape");
Shape1139.USE = "SiteShape";
Transform1138.child = new undefined();

Transform1138.child[0] = Shape1139;

HAnimSite1137.children = new MFNode();

HAnimSite1137.children[0] = Transform1138;

HAnimSegment1133.children[2] = HAnimSite1137;

HAnimJoint1132.children = new MFNode();

HAnimJoint1132.children[0] = HAnimSegment1133;

let HAnimJoint1140 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1140.name = "r_metacarpal_4";
HAnimJoint1140.DEF = "hanim_r_metacarpal_4";
HAnimJoint1140.center = new SFVec3f(new float[-0.1809,-0.1218,0.6777]);
HAnimJoint1140.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1140.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1141 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1141.name = "SEGMENT_FOR_r_metacarpal_4";
HAnimSegment1141.DEF = "hanim_SEGMENT_FOR_r_metacarpal_4";
let TouchSensor1142 = browser.currentScene.createNode("TouchSensor");
TouchSensor1142.description = "joint r_metacarpal_4 segment SEGMENT_FOR_r_metacarpal_4";
HAnimSegment1141.children = new MFNode();

HAnimSegment1141.children[0] = TouchSensor1142;

let Transform1143 = browser.currentScene.createNode("Transform");
Transform1143.translation = new SFVec3f(new float[-0.1809,-0.1218,0.6777]);
let Shape1144 = browser.currentScene.createNode("Shape");
Shape1144.USE = "JointShape";
Transform1143.child = new undefined();

Transform1143.child[0] = Shape1144;

HAnimSegment1141.children[1] = Transform1143;

let HAnimSite1145 = browser.currentScene.createNode("HAnimSite");
HAnimSite1145.name = "SEGMENT_FOR_r_metacarpal_4_tip";
HAnimSite1145.DEF = "hanim_SEGMENT_FOR_r_metacarpal_4_tip";
let Transform1146 = browser.currentScene.createNode("Transform");
Transform1146.translation = new SFVec3f(new float[-0.1809,-0.1218,0.6777]);
let Shape1147 = browser.currentScene.createNode("Shape");
Shape1147.USE = "SiteShape";
Transform1146.child = new undefined();

Transform1146.child[0] = Shape1147;

HAnimSite1145.children = new MFNode();

HAnimSite1145.children[0] = Transform1146;

HAnimSegment1141.children[2] = HAnimSite1145;

HAnimJoint1140.children = new MFNode();

HAnimJoint1140.children[0] = HAnimSegment1141;

let HAnimJoint1148 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1148.name = "r_carpal_proximal_phalanx_4";
HAnimJoint1148.DEF = "hanim_r_carpal_proximal_phalanx_4";
HAnimJoint1148.center = new SFVec3f(new float[-0.1835,-0.1233,0.6255]);
HAnimJoint1148.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1148.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1149 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1149.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_4";
HAnimSegment1149.DEF = "hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_4";
let TouchSensor1150 = browser.currentScene.createNode("TouchSensor");
TouchSensor1150.description = "joint r_carpal_proximal_phalanx_4 segment SEGMENT_FOR_r_carpal_proximal_phalanx_4";
HAnimSegment1149.children = new MFNode();

HAnimSegment1149.children[0] = TouchSensor1150;

let Transform1151 = browser.currentScene.createNode("Transform");
Transform1151.translation = new SFVec3f(new float[-0.1835,-0.1233,0.6255]);
let Shape1152 = browser.currentScene.createNode("Shape");
Shape1152.USE = "JointShape";
Transform1151.child = new undefined();

Transform1151.child[0] = Shape1152;

HAnimSegment1149.children[1] = Transform1151;

let HAnimSite1153 = browser.currentScene.createNode("HAnimSite");
HAnimSite1153.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_4_tip";
HAnimSite1153.DEF = "hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_4_tip";
let Transform1154 = browser.currentScene.createNode("Transform");
Transform1154.translation = new SFVec3f(new float[-0.1835,-0.1233,0.6255]);
let Shape1155 = browser.currentScene.createNode("Shape");
Shape1155.USE = "SiteShape";
Transform1154.child = new undefined();

Transform1154.child[0] = Shape1155;

HAnimSite1153.children = new MFNode();

HAnimSite1153.children[0] = Transform1154;

HAnimSegment1149.children[2] = HAnimSite1153;

HAnimJoint1148.children = new MFNode();

HAnimJoint1148.children[0] = HAnimSegment1149;

let HAnimJoint1156 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1156.name = "r_carpal_middle_phalanx_4";
HAnimJoint1156.DEF = "hanim_r_carpal_middle_phalanx_4";
HAnimJoint1156.center = new SFVec3f(new float[-0.1815,-0.1225,0.598]);
HAnimJoint1156.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1156.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1157 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1157.name = "SEGMENT_FOR_r_carpal_middle_phalanx_4";
HAnimSegment1157.DEF = "hanim_SEGMENT_FOR_r_carpal_middle_phalanx_4";
let TouchSensor1158 = browser.currentScene.createNode("TouchSensor");
TouchSensor1158.description = "joint r_carpal_middle_phalanx_4 segment SEGMENT_FOR_r_carpal_middle_phalanx_4";
HAnimSegment1157.children = new MFNode();

HAnimSegment1157.children[0] = TouchSensor1158;

let Transform1159 = browser.currentScene.createNode("Transform");
Transform1159.translation = new SFVec3f(new float[-0.1815,-0.1225,0.598]);
let Shape1160 = browser.currentScene.createNode("Shape");
Shape1160.USE = "JointShape";
Transform1159.child = new undefined();

Transform1159.child[0] = Shape1160;

HAnimSegment1157.children[1] = Transform1159;

let HAnimSite1161 = browser.currentScene.createNode("HAnimSite");
HAnimSite1161.name = "SEGMENT_FOR_r_carpal_middle_phalanx_4_tip";
HAnimSite1161.DEF = "hanim_SEGMENT_FOR_r_carpal_middle_phalanx_4_tip";
let Transform1162 = browser.currentScene.createNode("Transform");
Transform1162.translation = new SFVec3f(new float[-0.1815,-0.1225,0.598]);
let Shape1163 = browser.currentScene.createNode("Shape");
Shape1163.USE = "SiteShape";
Transform1162.child = new undefined();

Transform1162.child[0] = Shape1163;

HAnimSite1161.children = new MFNode();

HAnimSite1161.children[0] = Transform1162;

HAnimSegment1157.children[2] = HAnimSite1161;

HAnimJoint1156.children = new MFNode();

HAnimJoint1156.children[0] = HAnimSegment1157;

let HAnimJoint1164 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1164.name = "r_carpal_distal_phalanx_4";
HAnimJoint1164.DEF = "hanim_r_carpal_distal_phalanx_4";
HAnimJoint1164.center = new SFVec3f(new float[-0.1805,-0.1217,0.5722]);
HAnimJoint1164.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1164.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1165 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1165.name = "SEGMENT_FOR_r_carpal_distal_phalanx_4";
HAnimSegment1165.DEF = "hanim_SEGMENT_FOR_r_carpal_distal_phalanx_4";
let TouchSensor1166 = browser.currentScene.createNode("TouchSensor");
TouchSensor1166.description = "joint r_carpal_distal_phalanx_4 segment SEGMENT_FOR_r_carpal_distal_phalanx_4";
HAnimSegment1165.children = new MFNode();

HAnimSegment1165.children[0] = TouchSensor1166;

let Transform1167 = browser.currentScene.createNode("Transform");
Transform1167.translation = new SFVec3f(new float[-0.1805,-0.1217,0.5722]);
let Shape1168 = browser.currentScene.createNode("Shape");
Shape1168.USE = "JointShape";
Transform1167.child = new undefined();

Transform1167.child[0] = Shape1168;

HAnimSegment1165.children[1] = Transform1167;

let HAnimSite1169 = browser.currentScene.createNode("HAnimSite");
HAnimSite1169.name = "SEGMENT_FOR_r_carpal_distal_phalanx_4_tip";
HAnimSite1169.DEF = "hanim_SEGMENT_FOR_r_carpal_distal_phalanx_4_tip";
let Transform1170 = browser.currentScene.createNode("Transform");
Transform1170.translation = new SFVec3f(new float[-0.1805,-0.1217,0.5722]);
let Shape1171 = browser.currentScene.createNode("Shape");
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

let HAnimJoint1172 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1172.name = "r_metacarpal_5";
HAnimJoint1172.DEF = "hanim_r_metacarpal_5";
HAnimJoint1172.center = new SFVec3f(new float[-0.1814,-0.1347,0.6797]);
HAnimJoint1172.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1172.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1173 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1173.name = "SEGMENT_FOR_r_metacarpal_5";
HAnimSegment1173.DEF = "hanim_SEGMENT_FOR_r_metacarpal_5";
let TouchSensor1174 = browser.currentScene.createNode("TouchSensor");
TouchSensor1174.description = "joint r_metacarpal_5 segment SEGMENT_FOR_r_metacarpal_5";
HAnimSegment1173.children = new MFNode();

HAnimSegment1173.children[0] = TouchSensor1174;

let Transform1175 = browser.currentScene.createNode("Transform");
Transform1175.translation = new SFVec3f(new float[-0.1814,-0.1347,0.6797]);
let Shape1176 = browser.currentScene.createNode("Shape");
Shape1176.USE = "JointShape";
Transform1175.child = new undefined();

Transform1175.child[0] = Shape1176;

HAnimSegment1173.children[1] = Transform1175;

let HAnimSite1177 = browser.currentScene.createNode("HAnimSite");
HAnimSite1177.name = "SEGMENT_FOR_r_metacarpal_5_tip";
HAnimSite1177.DEF = "hanim_SEGMENT_FOR_r_metacarpal_5_tip";
let Transform1178 = browser.currentScene.createNode("Transform");
Transform1178.translation = new SFVec3f(new float[-0.1814,-0.1347,0.6797]);
let Shape1179 = browser.currentScene.createNode("Shape");
Shape1179.USE = "SiteShape";
Transform1178.child = new undefined();

Transform1178.child[0] = Shape1179;

HAnimSite1177.children = new MFNode();

HAnimSite1177.children[0] = Transform1178;

HAnimSegment1173.children[2] = HAnimSite1177;

HAnimJoint1172.children = new MFNode();

HAnimJoint1172.children[0] = HAnimSegment1173;

let HAnimJoint1180 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1180.name = "r_carpal_proximal_phalanx_5";
HAnimJoint1180.DEF = "hanim_r_carpal_proximal_phalanx_5";
HAnimJoint1180.center = new SFVec3f(new float[-0.1832,-0.1389,0.6295]);
HAnimJoint1180.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1180.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1181 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1181.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_5";
HAnimSegment1181.DEF = "hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_5";
let TouchSensor1182 = browser.currentScene.createNode("TouchSensor");
TouchSensor1182.description = "joint r_carpal_proximal_phalanx_5 segment SEGMENT_FOR_r_carpal_proximal_phalanx_5";
HAnimSegment1181.children = new MFNode();

HAnimSegment1181.children[0] = TouchSensor1182;

let Transform1183 = browser.currentScene.createNode("Transform");
Transform1183.translation = new SFVec3f(new float[-0.1832,-0.1389,0.6295]);
let Shape1184 = browser.currentScene.createNode("Shape");
Shape1184.USE = "JointShape";
Transform1183.child = new undefined();

Transform1183.child[0] = Shape1184;

HAnimSegment1181.children[1] = Transform1183;

let HAnimSite1185 = browser.currentScene.createNode("HAnimSite");
HAnimSite1185.name = "SEGMENT_FOR_r_carpal_proximal_phalanx_5_tip";
HAnimSite1185.DEF = "hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_5_tip";
let Transform1186 = browser.currentScene.createNode("Transform");
Transform1186.translation = new SFVec3f(new float[-0.1832,-0.1389,0.6295]);
let Shape1187 = browser.currentScene.createNode("Shape");
Shape1187.USE = "SiteShape";
Transform1186.child = new undefined();

Transform1186.child[0] = Shape1187;

HAnimSite1185.children = new MFNode();

HAnimSite1185.children[0] = Transform1186;

HAnimSegment1181.children[2] = HAnimSite1185;

HAnimJoint1180.children = new MFNode();

HAnimJoint1180.children[0] = HAnimSegment1181;

let HAnimJoint1188 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1188.name = "r_carpal_middle_phalanx_5";
HAnimJoint1188.DEF = "hanim_r_carpal_middle_phalanx_5";
HAnimJoint1188.center = new SFVec3f(new float[-0.1815,-0.139,0.6124]);
HAnimJoint1188.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1188.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1189 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1189.name = "SEGMENT_FOR_r_carpal_middle_phalanx_5";
HAnimSegment1189.DEF = "hanim_SEGMENT_FOR_r_carpal_middle_phalanx_5";
let TouchSensor1190 = browser.currentScene.createNode("TouchSensor");
TouchSensor1190.description = "joint r_carpal_middle_phalanx_5 segment SEGMENT_FOR_r_carpal_middle_phalanx_5";
HAnimSegment1189.children = new MFNode();

HAnimSegment1189.children[0] = TouchSensor1190;

let Transform1191 = browser.currentScene.createNode("Transform");
Transform1191.translation = new SFVec3f(new float[-0.1815,-0.139,0.6124]);
let Shape1192 = browser.currentScene.createNode("Shape");
Shape1192.USE = "JointShape";
Transform1191.child = new undefined();

Transform1191.child[0] = Shape1192;

HAnimSegment1189.children[1] = Transform1191;

let HAnimSite1193 = browser.currentScene.createNode("HAnimSite");
HAnimSite1193.name = "SEGMENT_FOR_r_carpal_middle_phalanx_5_tip";
HAnimSite1193.DEF = "hanim_SEGMENT_FOR_r_carpal_middle_phalanx_5_tip";
let Transform1194 = browser.currentScene.createNode("Transform");
Transform1194.translation = new SFVec3f(new float[-0.1815,-0.139,0.6124]);
let Shape1195 = browser.currentScene.createNode("Shape");
Shape1195.USE = "SiteShape";
Transform1194.child = new undefined();

Transform1194.child[0] = Shape1195;

HAnimSite1193.children = new MFNode();

HAnimSite1193.children[0] = Transform1194;

HAnimSegment1189.children[2] = HAnimSite1193;

HAnimJoint1188.children = new MFNode();

HAnimJoint1188.children[0] = HAnimSegment1189;

let HAnimJoint1196 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1196.name = "r_carpal_distal_phalanx_5";
HAnimJoint1196.DEF = "hanim_r_carpal_distal_phalanx_5";
HAnimJoint1196.center = new SFVec3f(new float[-0.1806,-0.1388,0.5938]);
HAnimJoint1196.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1196.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1197 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1197.name = "SEGMENT_FOR_r_carpal_distal_phalanx_5";
HAnimSegment1197.DEF = "hanim_SEGMENT_FOR_r_carpal_distal_phalanx_5";
let TouchSensor1198 = browser.currentScene.createNode("TouchSensor");
TouchSensor1198.description = "joint r_carpal_distal_phalanx_5 segment SEGMENT_FOR_r_carpal_distal_phalanx_5";
HAnimSegment1197.children = new MFNode();

HAnimSegment1197.children[0] = TouchSensor1198;

let Transform1199 = browser.currentScene.createNode("Transform");
Transform1199.translation = new SFVec3f(new float[-0.1806,-0.1388,0.5938]);
let Shape1200 = browser.currentScene.createNode("Shape");
Shape1200.USE = "JointShape";
Transform1199.child = new undefined();

Transform1199.child[0] = Shape1200;

HAnimSegment1197.children[1] = Transform1199;

let HAnimSite1201 = browser.currentScene.createNode("HAnimSite");
HAnimSite1201.name = "SEGMENT_FOR_r_carpal_distal_phalanx_5_tip";
HAnimSite1201.DEF = "hanim_SEGMENT_FOR_r_carpal_distal_phalanx_5_tip";
let Transform1202 = browser.currentScene.createNode("Transform");
Transform1202.translation = new SFVec3f(new float[-0.1806,-0.1388,0.5938]);
let Shape1203 = browser.currentScene.createNode("Shape");
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

let HAnimJoint1204 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1204.USE = "hanim_sacrum";
HAnimHumanoid27.joints[1] = HAnimJoint1204;

let HAnimJoint1205 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1205.USE = "hanim_pelvis";
HAnimHumanoid27.joints[2] = HAnimJoint1205;

let HAnimJoint1206 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1206.USE = "hanim_l_thigh";
HAnimHumanoid27.joints[3] = HAnimJoint1206;

let HAnimJoint1207 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1207.USE = "hanim_l_calf";
HAnimHumanoid27.joints[4] = HAnimJoint1207;

let HAnimJoint1208 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1208.USE = "hanim_l_talus";
HAnimHumanoid27.joints[5] = HAnimJoint1208;

let HAnimJoint1209 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1209.USE = "hanim_l_navicular";
HAnimHumanoid27.joints[6] = HAnimJoint1209;

let HAnimJoint1210 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1210.USE = "hanim_l_cuneiform_1";
HAnimHumanoid27.joints[7] = HAnimJoint1210;

let HAnimJoint1211 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1211.USE = "hanim_l_metatarsal_1";
HAnimHumanoid27.joints[8] = HAnimJoint1211;

let HAnimJoint1212 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1212.USE = "hanim_l_tarsal_proximal_phalanx_1";
HAnimHumanoid27.joints[9] = HAnimJoint1212;

let HAnimJoint1213 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1213.USE = "hanim_l_tarsal_distal_phalanx_1";
HAnimHumanoid27.joints[10] = HAnimJoint1213;

let HAnimJoint1214 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1214.USE = "hanim_l_cuneiform_2";
HAnimHumanoid27.joints[11] = HAnimJoint1214;

let HAnimJoint1215 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1215.USE = "hanim_l_metatarsal_2";
HAnimHumanoid27.joints[12] = HAnimJoint1215;

let HAnimJoint1216 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1216.USE = "hanim_l_tarsal_proximal_phalanx_2";
HAnimHumanoid27.joints[13] = HAnimJoint1216;

let HAnimJoint1217 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1217.USE = "hanim_l_tarsal_middle_phalanx_2";
HAnimHumanoid27.joints[14] = HAnimJoint1217;

let HAnimJoint1218 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1218.USE = "hanim_l_tarsal_distal_phalanx_2";
HAnimHumanoid27.joints[15] = HAnimJoint1218;

let HAnimJoint1219 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1219.USE = "hanim_l_cuneiform_3";
HAnimHumanoid27.joints[16] = HAnimJoint1219;

let HAnimJoint1220 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1220.USE = "hanim_l_metatarsal_3";
HAnimHumanoid27.joints[17] = HAnimJoint1220;

let HAnimJoint1221 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1221.USE = "hanim_l_tarsal_proximal_phalanx_3";
HAnimHumanoid27.joints[18] = HAnimJoint1221;

let HAnimJoint1222 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1222.USE = "hanim_l_tarsal_middle_phalanx_3";
HAnimHumanoid27.joints[19] = HAnimJoint1222;

let HAnimJoint1223 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1223.USE = "hanim_l_tarsal_distal_phalanx_3";
HAnimHumanoid27.joints[20] = HAnimJoint1223;

let HAnimJoint1224 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1224.USE = "hanim_l_calcaneus";
HAnimHumanoid27.joints[21] = HAnimJoint1224;

let HAnimJoint1225 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1225.USE = "hanim_l_cuboid";
HAnimHumanoid27.joints[22] = HAnimJoint1225;

let HAnimJoint1226 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1226.USE = "hanim_l_metatarsal_4";
HAnimHumanoid27.joints[23] = HAnimJoint1226;

let HAnimJoint1227 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1227.USE = "hanim_l_tarsal_proximal_phalanx_4";
HAnimHumanoid27.joints[24] = HAnimJoint1227;

let HAnimJoint1228 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1228.USE = "hanim_l_tarsal_middle_phalanx_4";
HAnimHumanoid27.joints[25] = HAnimJoint1228;

let HAnimJoint1229 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1229.USE = "hanim_l_tarsal_distal_phalanx_4";
HAnimHumanoid27.joints[26] = HAnimJoint1229;

let HAnimJoint1230 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1230.USE = "hanim_l_metatarsal_5";
HAnimHumanoid27.joints[27] = HAnimJoint1230;

let HAnimJoint1231 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1231.USE = "hanim_l_tarsal_proximal_phalanx_5";
HAnimHumanoid27.joints[28] = HAnimJoint1231;

let HAnimJoint1232 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1232.USE = "hanim_l_tarsal_middle_phalanx_5";
HAnimHumanoid27.joints[29] = HAnimJoint1232;

let HAnimJoint1233 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1233.USE = "hanim_l_tarsal_distal_phalanx_5";
HAnimHumanoid27.joints[30] = HAnimJoint1233;

let HAnimJoint1234 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1234.USE = "hanim_r_thigh";
HAnimHumanoid27.joints[31] = HAnimJoint1234;

let HAnimJoint1235 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1235.USE = "hanim_r_calf";
HAnimHumanoid27.joints[32] = HAnimJoint1235;

let HAnimJoint1236 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1236.USE = "hanim_r_talus";
HAnimHumanoid27.joints[33] = HAnimJoint1236;

let HAnimJoint1237 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1237.USE = "hanim_r_navicular";
HAnimHumanoid27.joints[34] = HAnimJoint1237;

let HAnimJoint1238 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1238.USE = "hanim_r_cuneiform_1";
HAnimHumanoid27.joints[35] = HAnimJoint1238;

let HAnimJoint1239 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1239.USE = "hanim_r_metatarsal_1";
HAnimHumanoid27.joints[36] = HAnimJoint1239;

let HAnimJoint1240 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1240.USE = "hanim_r_tarsal_proximal_phalanx_1";
HAnimHumanoid27.joints[37] = HAnimJoint1240;

let HAnimJoint1241 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1241.USE = "hanim_r_tarsal_distal_phalanx_1";
HAnimHumanoid27.joints[38] = HAnimJoint1241;

let HAnimJoint1242 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1242.USE = "hanim_r_cuneiform_2";
HAnimHumanoid27.joints[39] = HAnimJoint1242;

let HAnimJoint1243 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1243.USE = "hanim_r_metatarsal_2";
HAnimHumanoid27.joints[40] = HAnimJoint1243;

let HAnimJoint1244 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1244.USE = "hanim_r_tarsal_proximal_phalanx_2";
HAnimHumanoid27.joints[41] = HAnimJoint1244;

let HAnimJoint1245 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1245.USE = "hanim_r_tarsal_middle_phalanx_2";
HAnimHumanoid27.joints[42] = HAnimJoint1245;

let HAnimJoint1246 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1246.USE = "hanim_r_tarsal_distal_phalanx_2";
HAnimHumanoid27.joints[43] = HAnimJoint1246;

let HAnimJoint1247 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1247.USE = "hanim_r_cuneiform_3";
HAnimHumanoid27.joints[44] = HAnimJoint1247;

let HAnimJoint1248 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1248.USE = "hanim_r_metatarsal_3";
HAnimHumanoid27.joints[45] = HAnimJoint1248;

let HAnimJoint1249 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1249.USE = "hanim_r_tarsal_proximal_phalanx_3";
HAnimHumanoid27.joints[46] = HAnimJoint1249;

let HAnimJoint1250 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1250.USE = "hanim_r_tarsal_middle_phalanx_3";
HAnimHumanoid27.joints[47] = HAnimJoint1250;

let HAnimJoint1251 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1251.USE = "hanim_r_tarsal_distal_phalanx_3";
HAnimHumanoid27.joints[48] = HAnimJoint1251;

let HAnimJoint1252 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1252.USE = "hanim_r_calcaneus";
HAnimHumanoid27.joints[49] = HAnimJoint1252;

let HAnimJoint1253 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1253.USE = "hanim_r_cuboid";
HAnimHumanoid27.joints[50] = HAnimJoint1253;

let HAnimJoint1254 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1254.USE = "hanim_r_metatarsal_4";
HAnimHumanoid27.joints[51] = HAnimJoint1254;

let HAnimJoint1255 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1255.USE = "hanim_r_tarsal_proximal_phalanx_4";
HAnimHumanoid27.joints[52] = HAnimJoint1255;

let HAnimJoint1256 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1256.USE = "hanim_r_tarsal_middle_phalanx_4";
HAnimHumanoid27.joints[53] = HAnimJoint1256;

let HAnimJoint1257 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1257.USE = "hanim_r_tarsal_distal_phalanx_4";
HAnimHumanoid27.joints[54] = HAnimJoint1257;

let HAnimJoint1258 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1258.USE = "hanim_r_metatarsal_5";
HAnimHumanoid27.joints[55] = HAnimJoint1258;

let HAnimJoint1259 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1259.USE = "hanim_r_tarsal_proximal_phalanx_5";
HAnimHumanoid27.joints[56] = HAnimJoint1259;

let HAnimJoint1260 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1260.USE = "hanim_r_tarsal_middle_phalanx_5";
HAnimHumanoid27.joints[57] = HAnimJoint1260;

let HAnimJoint1261 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1261.USE = "hanim_r_tarsal_distal_phalanx_5";
HAnimHumanoid27.joints[58] = HAnimJoint1261;

let HAnimJoint1262 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1262.USE = "hanim_l5";
HAnimHumanoid27.joints[59] = HAnimJoint1262;

let HAnimJoint1263 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1263.USE = "hanim_l4";
HAnimHumanoid27.joints[60] = HAnimJoint1263;

let HAnimJoint1264 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1264.USE = "hanim_l3";
HAnimHumanoid27.joints[61] = HAnimJoint1264;

let HAnimJoint1265 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1265.USE = "hanim_l2";
HAnimHumanoid27.joints[62] = HAnimJoint1265;

let HAnimJoint1266 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1266.USE = "hanim_l1";
HAnimHumanoid27.joints[63] = HAnimJoint1266;

let HAnimJoint1267 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1267.USE = "hanim_t12";
HAnimHumanoid27.joints[64] = HAnimJoint1267;

let HAnimJoint1268 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1268.USE = "hanim_t11";
HAnimHumanoid27.joints[65] = HAnimJoint1268;

let HAnimJoint1269 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1269.USE = "hanim_t10";
HAnimHumanoid27.joints[66] = HAnimJoint1269;

let HAnimJoint1270 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1270.USE = "hanim_t9";
HAnimHumanoid27.joints[67] = HAnimJoint1270;

let HAnimJoint1271 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1271.USE = "hanim_t8";
HAnimHumanoid27.joints[68] = HAnimJoint1271;

let HAnimJoint1272 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1272.USE = "hanim_t7";
HAnimHumanoid27.joints[69] = HAnimJoint1272;

let HAnimJoint1273 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1273.USE = "hanim_t6";
HAnimHumanoid27.joints[70] = HAnimJoint1273;

let HAnimJoint1274 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1274.USE = "hanim_t5";
HAnimHumanoid27.joints[71] = HAnimJoint1274;

let HAnimJoint1275 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1275.USE = "hanim_t4";
HAnimHumanoid27.joints[72] = HAnimJoint1275;

let HAnimJoint1276 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1276.USE = "hanim_t3";
HAnimHumanoid27.joints[73] = HAnimJoint1276;

let HAnimJoint1277 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1277.USE = "hanim_t2";
HAnimHumanoid27.joints[74] = HAnimJoint1277;

let HAnimJoint1278 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1278.USE = "hanim_t1";
HAnimHumanoid27.joints[75] = HAnimJoint1278;

let HAnimJoint1279 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1279.USE = "hanim_c7";
HAnimHumanoid27.joints[76] = HAnimJoint1279;

let HAnimJoint1280 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1280.USE = "hanim_c6";
HAnimHumanoid27.joints[77] = HAnimJoint1280;

let HAnimJoint1281 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1281.USE = "hanim_c5";
HAnimHumanoid27.joints[78] = HAnimJoint1281;

let HAnimJoint1282 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1282.USE = "hanim_c4";
HAnimHumanoid27.joints[79] = HAnimJoint1282;

let HAnimJoint1283 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1283.USE = "hanim_c3";
HAnimHumanoid27.joints[80] = HAnimJoint1283;

let HAnimJoint1284 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1284.USE = "hanim_c2";
HAnimHumanoid27.joints[81] = HAnimJoint1284;

let HAnimJoint1285 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1285.USE = "hanim_c1";
HAnimHumanoid27.joints[82] = HAnimJoint1285;

let HAnimJoint1286 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1286.USE = "hanim_skull";
HAnimHumanoid27.joints[83] = HAnimJoint1286;

let HAnimJoint1287 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1287.USE = "hanim_l_eyelid";
HAnimHumanoid27.joints[84] = HAnimJoint1287;

let HAnimJoint1288 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1288.USE = "hanim_r_eyelid";
HAnimHumanoid27.joints[85] = HAnimJoint1288;

let HAnimJoint1289 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1289.USE = "hanim_l_eyeball";
HAnimHumanoid27.joints[86] = HAnimJoint1289;

let HAnimJoint1290 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1290.USE = "hanim_r_eyeball";
HAnimHumanoid27.joints[87] = HAnimJoint1290;

let HAnimJoint1291 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1291.USE = "hanim_l_eyebrow";
HAnimHumanoid27.joints[88] = HAnimJoint1291;

let HAnimJoint1292 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1292.USE = "hanim_r_eyebrow";
HAnimHumanoid27.joints[89] = HAnimJoint1292;

let HAnimJoint1293 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1293.USE = "hanim_jaw";
HAnimHumanoid27.joints[90] = HAnimJoint1293;

let HAnimJoint1294 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1294.USE = "hanim_l_clavicle";
HAnimHumanoid27.joints[91] = HAnimJoint1294;

let HAnimJoint1295 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1295.USE = "hanim_l_scapula";
HAnimHumanoid27.joints[92] = HAnimJoint1295;

let HAnimJoint1296 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1296.USE = "hanim_l_upperarm";
HAnimHumanoid27.joints[93] = HAnimJoint1296;

let HAnimJoint1297 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1297.USE = "hanim_l_forearm";
HAnimHumanoid27.joints[94] = HAnimJoint1297;

let HAnimJoint1298 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1298.USE = "hanim_l_carpal";
HAnimHumanoid27.joints[95] = HAnimJoint1298;

let HAnimJoint1299 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1299.USE = "hanim_l_trapezium";
HAnimHumanoid27.joints[96] = HAnimJoint1299;

let HAnimJoint1300 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1300.USE = "hanim_l_metacarpal_1";
HAnimHumanoid27.joints[97] = HAnimJoint1300;

let HAnimJoint1301 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1301.USE = "hanim_l_carpal_proximal_phalanx_1";
HAnimHumanoid27.joints[98] = HAnimJoint1301;

let HAnimJoint1302 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1302.USE = "hanim_l_carpal_distal_phalanx_1";
HAnimHumanoid27.joints[99] = HAnimJoint1302;

let HAnimJoint1303 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1303.USE = "hanim_l_trapezoid";
HAnimHumanoid27.joints[100] = HAnimJoint1303;

let HAnimJoint1304 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1304.USE = "hanim_l_metacarpal_2";
HAnimHumanoid27.joints[101] = HAnimJoint1304;

let HAnimJoint1305 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1305.USE = "hanim_l_carpal_proximal_phalanx_2";
HAnimHumanoid27.joints[102] = HAnimJoint1305;

let HAnimJoint1306 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1306.USE = "hanim_l_carpal_middle_phalanx_2";
HAnimHumanoid27.joints[103] = HAnimJoint1306;

let HAnimJoint1307 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1307.USE = "hanim_l_carpal_distal_phalanx_2";
HAnimHumanoid27.joints[104] = HAnimJoint1307;

let HAnimJoint1308 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1308.USE = "hanim_l_capitate";
HAnimHumanoid27.joints[105] = HAnimJoint1308;

let HAnimJoint1309 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1309.USE = "hanim_l_metacarpal_3";
HAnimHumanoid27.joints[106] = HAnimJoint1309;

let HAnimJoint1310 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1310.USE = "hanim_l_carpal_proximal_phalanx_3";
HAnimHumanoid27.joints[107] = HAnimJoint1310;

let HAnimJoint1311 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1311.USE = "hanim_l_carpal_middle_phalanx_3";
HAnimHumanoid27.joints[108] = HAnimJoint1311;

let HAnimJoint1312 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1312.USE = "hanim_l_carpal_distal_phalanx_3";
HAnimHumanoid27.joints[109] = HAnimJoint1312;

let HAnimJoint1313 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1313.USE = "hanim_l_hamate";
HAnimHumanoid27.joints[110] = HAnimJoint1313;

let HAnimJoint1314 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1314.USE = "hanim_l_metacarpal_4";
HAnimHumanoid27.joints[111] = HAnimJoint1314;

let HAnimJoint1315 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1315.USE = "hanim_l_carpal_proximal_phalanx_4";
HAnimHumanoid27.joints[112] = HAnimJoint1315;

let HAnimJoint1316 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1316.USE = "hanim_l_carpal_middle_phalanx_4";
HAnimHumanoid27.joints[113] = HAnimJoint1316;

let HAnimJoint1317 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1317.USE = "hanim_l_carpal_distal_phalanx_4";
HAnimHumanoid27.joints[114] = HAnimJoint1317;

let HAnimJoint1318 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1318.USE = "hanim_l_metacarpal_5";
HAnimHumanoid27.joints[115] = HAnimJoint1318;

let HAnimJoint1319 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1319.USE = "hanim_l_carpal_proximal_phalanx_5";
HAnimHumanoid27.joints[116] = HAnimJoint1319;

let HAnimJoint1320 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1320.USE = "hanim_l_carpal_middle_phalanx_5";
HAnimHumanoid27.joints[117] = HAnimJoint1320;

let HAnimJoint1321 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1321.USE = "hanim_l_carpal_distal_phalanx_5";
HAnimHumanoid27.joints[118] = HAnimJoint1321;

let HAnimJoint1322 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1322.USE = "hanim_r_clavicle";
HAnimHumanoid27.joints[119] = HAnimJoint1322;

let HAnimJoint1323 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1323.USE = "hanim_r_scapula";
HAnimHumanoid27.joints[120] = HAnimJoint1323;

let HAnimJoint1324 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1324.USE = "hanim_r_upperarm";
HAnimHumanoid27.joints[121] = HAnimJoint1324;

let HAnimJoint1325 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1325.USE = "hanim_r_forearm";
HAnimHumanoid27.joints[122] = HAnimJoint1325;

let HAnimJoint1326 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1326.USE = "hanim_r_carpal";
HAnimHumanoid27.joints[123] = HAnimJoint1326;

let HAnimJoint1327 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1327.USE = "hanim_r_trapezium";
HAnimHumanoid27.joints[124] = HAnimJoint1327;

let HAnimJoint1328 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1328.USE = "hanim_r_metacarpal_1";
HAnimHumanoid27.joints[125] = HAnimJoint1328;

let HAnimJoint1329 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1329.USE = "hanim_r_carpal_proximal_phalanx_1";
HAnimHumanoid27.joints[126] = HAnimJoint1329;

let HAnimJoint1330 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1330.USE = "hanim_r_carpal_distal_phalanx_1";
HAnimHumanoid27.joints[127] = HAnimJoint1330;

let HAnimJoint1331 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1331.USE = "hanim_r_trapezoid";
HAnimHumanoid27.joints[128] = HAnimJoint1331;

let HAnimJoint1332 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1332.USE = "hanim_r_metacarpal_2";
HAnimHumanoid27.joints[129] = HAnimJoint1332;

let HAnimJoint1333 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1333.USE = "hanim_r_carpal_proximal_phalanx_2";
HAnimHumanoid27.joints[130] = HAnimJoint1333;

let HAnimJoint1334 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1334.USE = "hanim_r_carpal_middle_phalanx_2";
HAnimHumanoid27.joints[131] = HAnimJoint1334;

let HAnimJoint1335 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1335.USE = "hanim_r_carpal_distal_phalanx_2";
HAnimHumanoid27.joints[132] = HAnimJoint1335;

let HAnimJoint1336 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1336.USE = "hanim_r_capitate";
HAnimHumanoid27.joints[133] = HAnimJoint1336;

let HAnimJoint1337 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1337.USE = "hanim_r_metacarpal_3";
HAnimHumanoid27.joints[134] = HAnimJoint1337;

let HAnimJoint1338 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1338.USE = "hanim_r_carpal_proximal_phalanx_3";
HAnimHumanoid27.joints[135] = HAnimJoint1338;

let HAnimJoint1339 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1339.USE = "hanim_r_carpal_middle_phalanx_3";
HAnimHumanoid27.joints[136] = HAnimJoint1339;

let HAnimJoint1340 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1340.USE = "hanim_r_carpal_distal_phalanx_3";
HAnimHumanoid27.joints[137] = HAnimJoint1340;

let HAnimJoint1341 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1341.USE = "hanim_r_hamate";
HAnimHumanoid27.joints[138] = HAnimJoint1341;

let HAnimJoint1342 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1342.USE = "hanim_r_metacarpal_4";
HAnimHumanoid27.joints[139] = HAnimJoint1342;

let HAnimJoint1343 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1343.USE = "hanim_r_carpal_proximal_phalanx_4";
HAnimHumanoid27.joints[140] = HAnimJoint1343;

let HAnimJoint1344 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1344.USE = "hanim_r_carpal_middle_phalanx_4";
HAnimHumanoid27.joints[141] = HAnimJoint1344;

let HAnimJoint1345 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1345.USE = "hanim_r_carpal_distal_phalanx_4";
HAnimHumanoid27.joints[142] = HAnimJoint1345;

let HAnimJoint1346 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1346.USE = "hanim_r_metacarpal_5";
HAnimHumanoid27.joints[143] = HAnimJoint1346;

let HAnimJoint1347 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1347.USE = "hanim_r_carpal_proximal_phalanx_5";
HAnimHumanoid27.joints[144] = HAnimJoint1347;

let HAnimJoint1348 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1348.USE = "hanim_r_carpal_middle_phalanx_5";
HAnimHumanoid27.joints[145] = HAnimJoint1348;

let HAnimJoint1349 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1349.USE = "hanim_r_carpal_distal_phalanx_5";
HAnimHumanoid27.joints[146] = HAnimJoint1349;

Transform26.children = new MFNode();

Transform26.children[0] = HAnimHumanoid27;

browser.currentScene.children[6] = Transform26;

let TimeSensor1350 = browser.currentScene.createNode("TimeSensor");
TimeSensor1350.DEF = "Armature_Clock";
TimeSensor1350.cycleInterval = 10.416666666666666;
TimeSensor1350.loop = True;
browser.currentScene.children[7] = TimeSensor1350;

let ProximitySensor1351 = browser.currentScene.createNode("ProximitySensor");
ProximitySensor1351.DEF = "Armature_Close";
ProximitySensor1351.size = new SFVec3f(new float[1000000,1000000,1000000]);
browser.currentScene.children[8] = ProximitySensor1351;

let ROUTE1352 = browser.currentScene.createNode("ROUTE");
ROUTE1352.fromField = "enterTime";
ROUTE1352.fromNode = "Armature_Close";
ROUTE1352.toField = "startTime";
ROUTE1352.toNode = "Armature_Clock";
browser.currentScene.children[9] = ROUTE1352;

let OrientationInterpolator1353 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1353.DEF = "Armature_OI_sacrum";
OrientationInterpolator1353.key = new MFFloat(new float[0,1]);
OrientationInterpolator1353.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[10] = OrientationInterpolator1353;

let OrientationInterpolator1354 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1354.DEF = "Armature_OI_pelvis";
OrientationInterpolator1354.key = new MFFloat(new float[0,1]);
OrientationInterpolator1354.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[11] = OrientationInterpolator1354;

let OrientationInterpolator1355 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1355.DEF = "Armature_OI_l_thigh";
OrientationInterpolator1355.key = new MFFloat(new float[0,1]);
OrientationInterpolator1355.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[12] = OrientationInterpolator1355;

let OrientationInterpolator1356 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1356.DEF = "Armature_OI_l_calf";
OrientationInterpolator1356.key = new MFFloat(new float[0,1]);
OrientationInterpolator1356.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[13] = OrientationInterpolator1356;

let OrientationInterpolator1357 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1357.DEF = "Armature_OI_l_talus";
OrientationInterpolator1357.key = new MFFloat(new float[0,1]);
OrientationInterpolator1357.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[14] = OrientationInterpolator1357;

let OrientationInterpolator1358 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1358.DEF = "Armature_OI_l_navicular";
OrientationInterpolator1358.key = new MFFloat(new float[0,1]);
OrientationInterpolator1358.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[15] = OrientationInterpolator1358;

let OrientationInterpolator1359 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1359.DEF = "Armature_OI_l_cuneiform_1";
OrientationInterpolator1359.key = new MFFloat(new float[0,1]);
OrientationInterpolator1359.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[16] = OrientationInterpolator1359;

let OrientationInterpolator1360 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1360.DEF = "Armature_OI_l_metatarsal_1";
OrientationInterpolator1360.key = new MFFloat(new float[0,1]);
OrientationInterpolator1360.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[17] = OrientationInterpolator1360;

let OrientationInterpolator1361 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1361.DEF = "Armature_OI_l_tarsal_proximal_phalanx_1";
OrientationInterpolator1361.key = new MFFloat(new float[0,1]);
OrientationInterpolator1361.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[18] = OrientationInterpolator1361;

let OrientationInterpolator1362 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1362.DEF = "Armature_OI_l_tarsal_distal_phalanx_1";
OrientationInterpolator1362.key = new MFFloat(new float[0,1]);
OrientationInterpolator1362.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[19] = OrientationInterpolator1362;

let OrientationInterpolator1363 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1363.DEF = "Armature_OI_l_cuneiform_2";
OrientationInterpolator1363.key = new MFFloat(new float[0,1]);
OrientationInterpolator1363.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[20] = OrientationInterpolator1363;

let OrientationInterpolator1364 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1364.DEF = "Armature_OI_l_metatarsal_2";
OrientationInterpolator1364.key = new MFFloat(new float[0,1]);
OrientationInterpolator1364.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[21] = OrientationInterpolator1364;

let OrientationInterpolator1365 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1365.DEF = "Armature_OI_l_tarsal_proximal_phalanx_2";
OrientationInterpolator1365.key = new MFFloat(new float[0,1]);
OrientationInterpolator1365.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[22] = OrientationInterpolator1365;

let OrientationInterpolator1366 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1366.DEF = "Armature_OI_l_tarsal_middle_phalanx_2";
OrientationInterpolator1366.key = new MFFloat(new float[0,1]);
OrientationInterpolator1366.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[23] = OrientationInterpolator1366;

let OrientationInterpolator1367 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1367.DEF = "Armature_OI_l_tarsal_distal_phalanx_2";
OrientationInterpolator1367.key = new MFFloat(new float[0,1]);
OrientationInterpolator1367.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[24] = OrientationInterpolator1367;

let OrientationInterpolator1368 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1368.DEF = "Armature_OI_l_cuneiform_3";
OrientationInterpolator1368.key = new MFFloat(new float[0,1]);
OrientationInterpolator1368.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[25] = OrientationInterpolator1368;

let OrientationInterpolator1369 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1369.DEF = "Armature_OI_l_metatarsal_3";
OrientationInterpolator1369.key = new MFFloat(new float[0,1]);
OrientationInterpolator1369.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[26] = OrientationInterpolator1369;

let OrientationInterpolator1370 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1370.DEF = "Armature_OI_l_tarsal_proximal_phalanx_3";
OrientationInterpolator1370.key = new MFFloat(new float[0,1]);
OrientationInterpolator1370.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[27] = OrientationInterpolator1370;

let OrientationInterpolator1371 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1371.DEF = "Armature_OI_l_tarsal_middle_phalanx_3";
OrientationInterpolator1371.key = new MFFloat(new float[0,1]);
OrientationInterpolator1371.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[28] = OrientationInterpolator1371;

let OrientationInterpolator1372 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1372.DEF = "Armature_OI_l_tarsal_distal_phalanx_3";
OrientationInterpolator1372.key = new MFFloat(new float[0,1]);
OrientationInterpolator1372.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[29] = OrientationInterpolator1372;

let OrientationInterpolator1373 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1373.DEF = "Armature_OI_l_calcaneus";
OrientationInterpolator1373.key = new MFFloat(new float[0,1]);
OrientationInterpolator1373.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[30] = OrientationInterpolator1373;

let OrientationInterpolator1374 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1374.DEF = "Armature_OI_l_cuboid";
OrientationInterpolator1374.key = new MFFloat(new float[0,1]);
OrientationInterpolator1374.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[31] = OrientationInterpolator1374;

let OrientationInterpolator1375 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1375.DEF = "Armature_OI_l_metatarsal_4";
OrientationInterpolator1375.key = new MFFloat(new float[0,1]);
OrientationInterpolator1375.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[32] = OrientationInterpolator1375;

let OrientationInterpolator1376 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1376.DEF = "Armature_OI_l_tarsal_proximal_phalanx_4";
OrientationInterpolator1376.key = new MFFloat(new float[0,1]);
OrientationInterpolator1376.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[33] = OrientationInterpolator1376;

let OrientationInterpolator1377 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1377.DEF = "Armature_OI_l_tarsal_middle_phalanx_4";
OrientationInterpolator1377.key = new MFFloat(new float[0,1]);
OrientationInterpolator1377.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[34] = OrientationInterpolator1377;

let OrientationInterpolator1378 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1378.DEF = "Armature_OI_l_tarsal_distal_phalanx_4";
OrientationInterpolator1378.key = new MFFloat(new float[0,1]);
OrientationInterpolator1378.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[35] = OrientationInterpolator1378;

let OrientationInterpolator1379 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1379.DEF = "Armature_OI_l_metatarsal_5";
OrientationInterpolator1379.key = new MFFloat(new float[0,1]);
OrientationInterpolator1379.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[36] = OrientationInterpolator1379;

let OrientationInterpolator1380 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1380.DEF = "Armature_OI_l_tarsal_proximal_phalanx_5";
OrientationInterpolator1380.key = new MFFloat(new float[0,1]);
OrientationInterpolator1380.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[37] = OrientationInterpolator1380;

let OrientationInterpolator1381 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1381.DEF = "Armature_OI_l_tarsal_middle_phalanx_5";
OrientationInterpolator1381.key = new MFFloat(new float[0,1]);
OrientationInterpolator1381.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[38] = OrientationInterpolator1381;

let OrientationInterpolator1382 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1382.DEF = "Armature_OI_l_tarsal_distal_phalanx_5";
OrientationInterpolator1382.key = new MFFloat(new float[0,1]);
OrientationInterpolator1382.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[39] = OrientationInterpolator1382;

let OrientationInterpolator1383 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1383.DEF = "Armature_OI_r_thigh";
OrientationInterpolator1383.key = new MFFloat(new float[0,1]);
OrientationInterpolator1383.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[40] = OrientationInterpolator1383;

let OrientationInterpolator1384 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1384.DEF = "Armature_OI_r_calf";
OrientationInterpolator1384.key = new MFFloat(new float[0,1]);
OrientationInterpolator1384.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[41] = OrientationInterpolator1384;

let OrientationInterpolator1385 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1385.DEF = "Armature_OI_r_talus";
OrientationInterpolator1385.key = new MFFloat(new float[0,1]);
OrientationInterpolator1385.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[42] = OrientationInterpolator1385;

let OrientationInterpolator1386 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1386.DEF = "Armature_OI_r_navicular";
OrientationInterpolator1386.key = new MFFloat(new float[0,1]);
OrientationInterpolator1386.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[43] = OrientationInterpolator1386;

let OrientationInterpolator1387 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1387.DEF = "Armature_OI_r_cuneiform_1";
OrientationInterpolator1387.key = new MFFloat(new float[0,1]);
OrientationInterpolator1387.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[44] = OrientationInterpolator1387;

let OrientationInterpolator1388 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1388.DEF = "Armature_OI_r_metatarsal_1";
OrientationInterpolator1388.key = new MFFloat(new float[0,1]);
OrientationInterpolator1388.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[45] = OrientationInterpolator1388;

let OrientationInterpolator1389 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1389.DEF = "Armature_OI_r_tarsal_proximal_phalanx_1";
OrientationInterpolator1389.key = new MFFloat(new float[0,1]);
OrientationInterpolator1389.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[46] = OrientationInterpolator1389;

let OrientationInterpolator1390 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1390.DEF = "Armature_OI_r_tarsal_distal_phalanx_1";
OrientationInterpolator1390.key = new MFFloat(new float[0,1]);
OrientationInterpolator1390.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[47] = OrientationInterpolator1390;

let OrientationInterpolator1391 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1391.DEF = "Armature_OI_r_cuneiform_2";
OrientationInterpolator1391.key = new MFFloat(new float[0,1]);
OrientationInterpolator1391.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[48] = OrientationInterpolator1391;

let OrientationInterpolator1392 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1392.DEF = "Armature_OI_r_metatarsal_2";
OrientationInterpolator1392.key = new MFFloat(new float[0,1]);
OrientationInterpolator1392.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[49] = OrientationInterpolator1392;

let OrientationInterpolator1393 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1393.DEF = "Armature_OI_r_tarsal_proximal_phalanx_2";
OrientationInterpolator1393.key = new MFFloat(new float[0,1]);
OrientationInterpolator1393.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[50] = OrientationInterpolator1393;

let OrientationInterpolator1394 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1394.DEF = "Armature_OI_r_tarsal_middle_phalanx_2";
OrientationInterpolator1394.key = new MFFloat(new float[0,1]);
OrientationInterpolator1394.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[51] = OrientationInterpolator1394;

let OrientationInterpolator1395 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1395.DEF = "Armature_OI_r_tarsal_distal_phalanx_2";
OrientationInterpolator1395.key = new MFFloat(new float[0,1]);
OrientationInterpolator1395.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[52] = OrientationInterpolator1395;

let OrientationInterpolator1396 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1396.DEF = "Armature_OI_r_cuneiform_3";
OrientationInterpolator1396.key = new MFFloat(new float[0,1]);
OrientationInterpolator1396.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[53] = OrientationInterpolator1396;

let OrientationInterpolator1397 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1397.DEF = "Armature_OI_r_metatarsal_3";
OrientationInterpolator1397.key = new MFFloat(new float[0,1]);
OrientationInterpolator1397.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[54] = OrientationInterpolator1397;

let OrientationInterpolator1398 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1398.DEF = "Armature_OI_r_tarsal_proximal_phalanx_3";
OrientationInterpolator1398.key = new MFFloat(new float[0,1]);
OrientationInterpolator1398.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[55] = OrientationInterpolator1398;

let OrientationInterpolator1399 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1399.DEF = "Armature_OI_r_tarsal_middle_phalanx_3";
OrientationInterpolator1399.key = new MFFloat(new float[0,1]);
OrientationInterpolator1399.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[56] = OrientationInterpolator1399;

let OrientationInterpolator1400 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1400.DEF = "Armature_OI_r_tarsal_distal_phalanx_3";
OrientationInterpolator1400.key = new MFFloat(new float[0,1]);
OrientationInterpolator1400.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[57] = OrientationInterpolator1400;

let OrientationInterpolator1401 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1401.DEF = "Armature_OI_r_calcaneus";
OrientationInterpolator1401.key = new MFFloat(new float[0,1]);
OrientationInterpolator1401.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[58] = OrientationInterpolator1401;

let OrientationInterpolator1402 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1402.DEF = "Armature_OI_r_cuboid";
OrientationInterpolator1402.key = new MFFloat(new float[0,1]);
OrientationInterpolator1402.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[59] = OrientationInterpolator1402;

let OrientationInterpolator1403 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1403.DEF = "Armature_OI_r_metatarsal_4";
OrientationInterpolator1403.key = new MFFloat(new float[0,1]);
OrientationInterpolator1403.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[60] = OrientationInterpolator1403;

let OrientationInterpolator1404 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1404.DEF = "Armature_OI_r_tarsal_proximal_phalanx_4";
OrientationInterpolator1404.key = new MFFloat(new float[0,1]);
OrientationInterpolator1404.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[61] = OrientationInterpolator1404;

let OrientationInterpolator1405 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1405.DEF = "Armature_OI_r_tarsal_middle_phalanx_4";
OrientationInterpolator1405.key = new MFFloat(new float[0,1]);
OrientationInterpolator1405.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[62] = OrientationInterpolator1405;

let OrientationInterpolator1406 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1406.DEF = "Armature_OI_r_tarsal_distal_phalanx_4";
OrientationInterpolator1406.key = new MFFloat(new float[0,1]);
OrientationInterpolator1406.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[63] = OrientationInterpolator1406;

let OrientationInterpolator1407 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1407.DEF = "Armature_OI_r_metatarsal_5";
OrientationInterpolator1407.key = new MFFloat(new float[0,1]);
OrientationInterpolator1407.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[64] = OrientationInterpolator1407;

let OrientationInterpolator1408 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1408.DEF = "Armature_OI_r_tarsal_proximal_phalanx_5";
OrientationInterpolator1408.key = new MFFloat(new float[0,1]);
OrientationInterpolator1408.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[65] = OrientationInterpolator1408;

let OrientationInterpolator1409 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1409.DEF = "Armature_OI_r_tarsal_middle_phalanx_5";
OrientationInterpolator1409.key = new MFFloat(new float[0,1]);
OrientationInterpolator1409.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[66] = OrientationInterpolator1409;

let OrientationInterpolator1410 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1410.DEF = "Armature_OI_r_tarsal_distal_phalanx_5";
OrientationInterpolator1410.key = new MFFloat(new float[0,1]);
OrientationInterpolator1410.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[67] = OrientationInterpolator1410;

let OrientationInterpolator1411 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1411.DEF = "Armature_OI_l5";
OrientationInterpolator1411.key = new MFFloat(new float[0,1]);
OrientationInterpolator1411.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[68] = OrientationInterpolator1411;

let OrientationInterpolator1412 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1412.DEF = "Armature_OI_l4";
OrientationInterpolator1412.key = new MFFloat(new float[0,1]);
OrientationInterpolator1412.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[69] = OrientationInterpolator1412;

let OrientationInterpolator1413 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1413.DEF = "Armature_OI_l3";
OrientationInterpolator1413.key = new MFFloat(new float[0,1]);
OrientationInterpolator1413.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[70] = OrientationInterpolator1413;

let OrientationInterpolator1414 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1414.DEF = "Armature_OI_l2";
OrientationInterpolator1414.key = new MFFloat(new float[0,1]);
OrientationInterpolator1414.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[71] = OrientationInterpolator1414;

let OrientationInterpolator1415 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1415.DEF = "Armature_OI_l1";
OrientationInterpolator1415.key = new MFFloat(new float[0,1]);
OrientationInterpolator1415.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[72] = OrientationInterpolator1415;

let OrientationInterpolator1416 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1416.DEF = "Armature_OI_t12";
OrientationInterpolator1416.key = new MFFloat(new float[0,1]);
OrientationInterpolator1416.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[73] = OrientationInterpolator1416;

let OrientationInterpolator1417 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1417.DEF = "Armature_OI_t11";
OrientationInterpolator1417.key = new MFFloat(new float[0,1]);
OrientationInterpolator1417.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[74] = OrientationInterpolator1417;

let OrientationInterpolator1418 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1418.DEF = "Armature_OI_t10";
OrientationInterpolator1418.key = new MFFloat(new float[0,1]);
OrientationInterpolator1418.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[75] = OrientationInterpolator1418;

let OrientationInterpolator1419 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1419.DEF = "Armature_OI_t9";
OrientationInterpolator1419.key = new MFFloat(new float[0,1]);
OrientationInterpolator1419.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[76] = OrientationInterpolator1419;

let OrientationInterpolator1420 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1420.DEF = "Armature_OI_t8";
OrientationInterpolator1420.key = new MFFloat(new float[0,1]);
OrientationInterpolator1420.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[77] = OrientationInterpolator1420;

let OrientationInterpolator1421 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1421.DEF = "Armature_OI_t7";
OrientationInterpolator1421.key = new MFFloat(new float[0,1]);
OrientationInterpolator1421.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[78] = OrientationInterpolator1421;

let OrientationInterpolator1422 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1422.DEF = "Armature_OI_t6";
OrientationInterpolator1422.key = new MFFloat(new float[0,1]);
OrientationInterpolator1422.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[79] = OrientationInterpolator1422;

let OrientationInterpolator1423 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1423.DEF = "Armature_OI_t5";
OrientationInterpolator1423.key = new MFFloat(new float[0,1]);
OrientationInterpolator1423.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[80] = OrientationInterpolator1423;

let OrientationInterpolator1424 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1424.DEF = "Armature_OI_t4";
OrientationInterpolator1424.key = new MFFloat(new float[0,1]);
OrientationInterpolator1424.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[81] = OrientationInterpolator1424;

let OrientationInterpolator1425 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1425.DEF = "Armature_OI_t3";
OrientationInterpolator1425.key = new MFFloat(new float[0,1]);
OrientationInterpolator1425.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[82] = OrientationInterpolator1425;

let OrientationInterpolator1426 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1426.DEF = "Armature_OI_t2";
OrientationInterpolator1426.key = new MFFloat(new float[0,1]);
OrientationInterpolator1426.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[83] = OrientationInterpolator1426;

let OrientationInterpolator1427 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1427.DEF = "Armature_OI_t1";
OrientationInterpolator1427.key = new MFFloat(new float[0,1]);
OrientationInterpolator1427.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[84] = OrientationInterpolator1427;

let OrientationInterpolator1428 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1428.DEF = "Armature_OI_c7";
OrientationInterpolator1428.key = new MFFloat(new float[0,1]);
OrientationInterpolator1428.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[85] = OrientationInterpolator1428;

let OrientationInterpolator1429 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1429.DEF = "Armature_OI_c6";
OrientationInterpolator1429.key = new MFFloat(new float[0,1]);
OrientationInterpolator1429.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[86] = OrientationInterpolator1429;

let OrientationInterpolator1430 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1430.DEF = "Armature_OI_c5";
OrientationInterpolator1430.key = new MFFloat(new float[0,1]);
OrientationInterpolator1430.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[87] = OrientationInterpolator1430;

let OrientationInterpolator1431 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1431.DEF = "Armature_OI_c4";
OrientationInterpolator1431.key = new MFFloat(new float[0,1]);
OrientationInterpolator1431.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[88] = OrientationInterpolator1431;

let OrientationInterpolator1432 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1432.DEF = "Armature_OI_c3";
OrientationInterpolator1432.key = new MFFloat(new float[0,1]);
OrientationInterpolator1432.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[89] = OrientationInterpolator1432;

let OrientationInterpolator1433 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1433.DEF = "Armature_OI_c2";
OrientationInterpolator1433.key = new MFFloat(new float[0,1]);
OrientationInterpolator1433.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[90] = OrientationInterpolator1433;

let OrientationInterpolator1434 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1434.DEF = "Armature_OI_c1";
OrientationInterpolator1434.key = new MFFloat(new float[0,1]);
OrientationInterpolator1434.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[91] = OrientationInterpolator1434;

let OrientationInterpolator1435 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1435.DEF = "Armature_OI_skull";
OrientationInterpolator1435.key = new MFFloat(new float[0,1]);
OrientationInterpolator1435.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[92] = OrientationInterpolator1435;

let OrientationInterpolator1436 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1436.DEF = "Armature_OI_l_eyelid";
OrientationInterpolator1436.key = new MFFloat(new float[0,1]);
OrientationInterpolator1436.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[93] = OrientationInterpolator1436;

let OrientationInterpolator1437 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1437.DEF = "Armature_OI_r_eyelid";
OrientationInterpolator1437.key = new MFFloat(new float[0,1]);
OrientationInterpolator1437.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[94] = OrientationInterpolator1437;

let OrientationInterpolator1438 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1438.DEF = "Armature_OI_l_eyeball";
OrientationInterpolator1438.key = new MFFloat(new float[0,1]);
OrientationInterpolator1438.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[95] = OrientationInterpolator1438;

let OrientationInterpolator1439 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1439.DEF = "Armature_OI_r_eyeball";
OrientationInterpolator1439.key = new MFFloat(new float[0,1]);
OrientationInterpolator1439.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[96] = OrientationInterpolator1439;

let OrientationInterpolator1440 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1440.DEF = "Armature_OI_l_eyebrow";
OrientationInterpolator1440.key = new MFFloat(new float[0,1]);
OrientationInterpolator1440.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[97] = OrientationInterpolator1440;

let OrientationInterpolator1441 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1441.DEF = "Armature_OI_r_eyebrow";
OrientationInterpolator1441.key = new MFFloat(new float[0,1]);
OrientationInterpolator1441.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[98] = OrientationInterpolator1441;

let OrientationInterpolator1442 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1442.DEF = "Armature_OI_jaw";
OrientationInterpolator1442.key = new MFFloat(new float[0,1]);
OrientationInterpolator1442.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[99] = OrientationInterpolator1442;

let OrientationInterpolator1443 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1443.DEF = "Armature_OI_l_clavicle";
OrientationInterpolator1443.key = new MFFloat(new float[0,1]);
OrientationInterpolator1443.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[100] = OrientationInterpolator1443;

let OrientationInterpolator1444 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1444.DEF = "Armature_OI_l_scapula";
OrientationInterpolator1444.key = new MFFloat(new float[0,1]);
OrientationInterpolator1444.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[101] = OrientationInterpolator1444;

let OrientationInterpolator1445 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1445.DEF = "Armature_OI_l_upperarm";
OrientationInterpolator1445.key = new MFFloat(new float[0,1]);
OrientationInterpolator1445.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[102] = OrientationInterpolator1445;

let OrientationInterpolator1446 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1446.DEF = "Armature_OI_l_forearm";
OrientationInterpolator1446.key = new MFFloat(new float[0,1]);
OrientationInterpolator1446.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[103] = OrientationInterpolator1446;

let OrientationInterpolator1447 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1447.DEF = "Armature_OI_l_carpal";
OrientationInterpolator1447.key = new MFFloat(new float[0,1]);
OrientationInterpolator1447.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[104] = OrientationInterpolator1447;

let OrientationInterpolator1448 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1448.DEF = "Armature_OI_l_trapezium";
OrientationInterpolator1448.key = new MFFloat(new float[0,1]);
OrientationInterpolator1448.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[105] = OrientationInterpolator1448;

let OrientationInterpolator1449 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1449.DEF = "Armature_OI_l_metacarpal_1";
OrientationInterpolator1449.key = new MFFloat(new float[0,1]);
OrientationInterpolator1449.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[106] = OrientationInterpolator1449;

let OrientationInterpolator1450 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1450.DEF = "Armature_OI_l_carpal_proximal_phalanx_1";
OrientationInterpolator1450.key = new MFFloat(new float[0,1]);
OrientationInterpolator1450.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[107] = OrientationInterpolator1450;

let OrientationInterpolator1451 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1451.DEF = "Armature_OI_l_carpal_distal_phalanx_1";
OrientationInterpolator1451.key = new MFFloat(new float[0,1]);
OrientationInterpolator1451.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[108] = OrientationInterpolator1451;

let OrientationInterpolator1452 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1452.DEF = "Armature_OI_l_trapezoid";
OrientationInterpolator1452.key = new MFFloat(new float[0,1]);
OrientationInterpolator1452.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[109] = OrientationInterpolator1452;

let OrientationInterpolator1453 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1453.DEF = "Armature_OI_l_metacarpal_2";
OrientationInterpolator1453.key = new MFFloat(new float[0,1]);
OrientationInterpolator1453.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[110] = OrientationInterpolator1453;

let OrientationInterpolator1454 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1454.DEF = "Armature_OI_l_carpal_proximal_phalanx_2";
OrientationInterpolator1454.key = new MFFloat(new float[0,1]);
OrientationInterpolator1454.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[111] = OrientationInterpolator1454;

let OrientationInterpolator1455 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1455.DEF = "Armature_OI_l_carpal_middle_phalanx_2";
OrientationInterpolator1455.key = new MFFloat(new float[0,1]);
OrientationInterpolator1455.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[112] = OrientationInterpolator1455;

let OrientationInterpolator1456 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1456.DEF = "Armature_OI_l_carpal_distal_phalanx_2";
OrientationInterpolator1456.key = new MFFloat(new float[0,1]);
OrientationInterpolator1456.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[113] = OrientationInterpolator1456;

let OrientationInterpolator1457 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1457.DEF = "Armature_OI_l_capitate";
OrientationInterpolator1457.key = new MFFloat(new float[0,1]);
OrientationInterpolator1457.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[114] = OrientationInterpolator1457;

let OrientationInterpolator1458 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1458.DEF = "Armature_OI_l_metacarpal_3";
OrientationInterpolator1458.key = new MFFloat(new float[0,1]);
OrientationInterpolator1458.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[115] = OrientationInterpolator1458;

let OrientationInterpolator1459 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1459.DEF = "Armature_OI_l_carpal_proximal_phalanx_3";
OrientationInterpolator1459.key = new MFFloat(new float[0,1]);
OrientationInterpolator1459.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[116] = OrientationInterpolator1459;

let OrientationInterpolator1460 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1460.DEF = "Armature_OI_l_carpal_middle_phalanx_3";
OrientationInterpolator1460.key = new MFFloat(new float[0,1]);
OrientationInterpolator1460.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[117] = OrientationInterpolator1460;

let OrientationInterpolator1461 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1461.DEF = "Armature_OI_l_carpal_distal_phalanx_3";
OrientationInterpolator1461.key = new MFFloat(new float[0,1]);
OrientationInterpolator1461.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[118] = OrientationInterpolator1461;

let OrientationInterpolator1462 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1462.DEF = "Armature_OI_l_hamate";
OrientationInterpolator1462.key = new MFFloat(new float[0,1]);
OrientationInterpolator1462.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[119] = OrientationInterpolator1462;

let OrientationInterpolator1463 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1463.DEF = "Armature_OI_l_metacarpal_4";
OrientationInterpolator1463.key = new MFFloat(new float[0,1]);
OrientationInterpolator1463.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[120] = OrientationInterpolator1463;

let OrientationInterpolator1464 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1464.DEF = "Armature_OI_l_carpal_proximal_phalanx_4";
OrientationInterpolator1464.key = new MFFloat(new float[0,1]);
OrientationInterpolator1464.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[121] = OrientationInterpolator1464;

let OrientationInterpolator1465 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1465.DEF = "Armature_OI_l_carpal_middle_phalanx_4";
OrientationInterpolator1465.key = new MFFloat(new float[0,1]);
OrientationInterpolator1465.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[122] = OrientationInterpolator1465;

let OrientationInterpolator1466 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1466.DEF = "Armature_OI_l_carpal_distal_phalanx_4";
OrientationInterpolator1466.key = new MFFloat(new float[0,1]);
OrientationInterpolator1466.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[123] = OrientationInterpolator1466;

let OrientationInterpolator1467 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1467.DEF = "Armature_OI_l_metacarpal_5";
OrientationInterpolator1467.key = new MFFloat(new float[0,1]);
OrientationInterpolator1467.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[124] = OrientationInterpolator1467;

let OrientationInterpolator1468 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1468.DEF = "Armature_OI_l_carpal_proximal_phalanx_5";
OrientationInterpolator1468.key = new MFFloat(new float[0,1]);
OrientationInterpolator1468.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[125] = OrientationInterpolator1468;

let OrientationInterpolator1469 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1469.DEF = "Armature_OI_l_carpal_middle_phalanx_5";
OrientationInterpolator1469.key = new MFFloat(new float[0,1]);
OrientationInterpolator1469.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[126] = OrientationInterpolator1469;

let OrientationInterpolator1470 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1470.DEF = "Armature_OI_l_carpal_distal_phalanx_5";
OrientationInterpolator1470.key = new MFFloat(new float[0,1]);
OrientationInterpolator1470.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[127] = OrientationInterpolator1470;

let OrientationInterpolator1471 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1471.DEF = "Armature_OI_r_clavicle";
OrientationInterpolator1471.key = new MFFloat(new float[0,1]);
OrientationInterpolator1471.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[128] = OrientationInterpolator1471;

let OrientationInterpolator1472 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1472.DEF = "Armature_OI_r_scapula";
OrientationInterpolator1472.key = new MFFloat(new float[0,1]);
OrientationInterpolator1472.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[129] = OrientationInterpolator1472;

let OrientationInterpolator1473 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1473.DEF = "Armature_OI_r_upperarm";
OrientationInterpolator1473.key = new MFFloat(new float[0,1]);
OrientationInterpolator1473.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[130] = OrientationInterpolator1473;

let OrientationInterpolator1474 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1474.DEF = "Armature_OI_r_forearm";
OrientationInterpolator1474.key = new MFFloat(new float[0,1]);
OrientationInterpolator1474.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[131] = OrientationInterpolator1474;

let OrientationInterpolator1475 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1475.DEF = "Armature_OI_r_carpal";
OrientationInterpolator1475.key = new MFFloat(new float[0,1]);
OrientationInterpolator1475.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[132] = OrientationInterpolator1475;

let OrientationInterpolator1476 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1476.DEF = "Armature_OI_r_trapezium";
OrientationInterpolator1476.key = new MFFloat(new float[0,1]);
OrientationInterpolator1476.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[133] = OrientationInterpolator1476;

let OrientationInterpolator1477 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1477.DEF = "Armature_OI_r_metacarpal_1";
OrientationInterpolator1477.key = new MFFloat(new float[0,1]);
OrientationInterpolator1477.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[134] = OrientationInterpolator1477;

let OrientationInterpolator1478 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1478.DEF = "Armature_OI_r_carpal_proximal_phalanx_1";
OrientationInterpolator1478.key = new MFFloat(new float[0,1]);
OrientationInterpolator1478.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[135] = OrientationInterpolator1478;

let OrientationInterpolator1479 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1479.DEF = "Armature_OI_r_carpal_distal_phalanx_1";
OrientationInterpolator1479.key = new MFFloat(new float[0,1]);
OrientationInterpolator1479.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[136] = OrientationInterpolator1479;

let OrientationInterpolator1480 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1480.DEF = "Armature_OI_r_trapezoid";
OrientationInterpolator1480.key = new MFFloat(new float[0,1]);
OrientationInterpolator1480.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[137] = OrientationInterpolator1480;

let OrientationInterpolator1481 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1481.DEF = "Armature_OI_r_metacarpal_2";
OrientationInterpolator1481.key = new MFFloat(new float[0,1]);
OrientationInterpolator1481.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[138] = OrientationInterpolator1481;

let OrientationInterpolator1482 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1482.DEF = "Armature_OI_r_carpal_proximal_phalanx_2";
OrientationInterpolator1482.key = new MFFloat(new float[0,1]);
OrientationInterpolator1482.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[139] = OrientationInterpolator1482;

let OrientationInterpolator1483 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1483.DEF = "Armature_OI_r_carpal_middle_phalanx_2";
OrientationInterpolator1483.key = new MFFloat(new float[0,1]);
OrientationInterpolator1483.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[140] = OrientationInterpolator1483;

let OrientationInterpolator1484 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1484.DEF = "Armature_OI_r_carpal_distal_phalanx_2";
OrientationInterpolator1484.key = new MFFloat(new float[0,1]);
OrientationInterpolator1484.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[141] = OrientationInterpolator1484;

let OrientationInterpolator1485 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1485.DEF = "Armature_OI_r_capitate";
OrientationInterpolator1485.key = new MFFloat(new float[0,1]);
OrientationInterpolator1485.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[142] = OrientationInterpolator1485;

let OrientationInterpolator1486 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1486.DEF = "Armature_OI_r_metacarpal_3";
OrientationInterpolator1486.key = new MFFloat(new float[0,1]);
OrientationInterpolator1486.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[143] = OrientationInterpolator1486;

let OrientationInterpolator1487 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1487.DEF = "Armature_OI_r_carpal_proximal_phalanx_3";
OrientationInterpolator1487.key = new MFFloat(new float[0,1]);
OrientationInterpolator1487.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[144] = OrientationInterpolator1487;

let OrientationInterpolator1488 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1488.DEF = "Armature_OI_r_carpal_middle_phalanx_3";
OrientationInterpolator1488.key = new MFFloat(new float[0,1]);
OrientationInterpolator1488.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[145] = OrientationInterpolator1488;

let OrientationInterpolator1489 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1489.DEF = "Armature_OI_r_carpal_distal_phalanx_3";
OrientationInterpolator1489.key = new MFFloat(new float[0,1]);
OrientationInterpolator1489.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[146] = OrientationInterpolator1489;

let OrientationInterpolator1490 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1490.DEF = "Armature_OI_r_hamate";
OrientationInterpolator1490.key = new MFFloat(new float[0,1]);
OrientationInterpolator1490.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[147] = OrientationInterpolator1490;

let OrientationInterpolator1491 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1491.DEF = "Armature_OI_r_metacarpal_4";
OrientationInterpolator1491.key = new MFFloat(new float[0,1]);
OrientationInterpolator1491.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[148] = OrientationInterpolator1491;

let OrientationInterpolator1492 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1492.DEF = "Armature_OI_r_carpal_proximal_phalanx_4";
OrientationInterpolator1492.key = new MFFloat(new float[0,1]);
OrientationInterpolator1492.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[149] = OrientationInterpolator1492;

let OrientationInterpolator1493 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1493.DEF = "Armature_OI_r_carpal_middle_phalanx_4";
OrientationInterpolator1493.key = new MFFloat(new float[0,1]);
OrientationInterpolator1493.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[150] = OrientationInterpolator1493;

let OrientationInterpolator1494 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1494.DEF = "Armature_OI_r_carpal_distal_phalanx_4";
OrientationInterpolator1494.key = new MFFloat(new float[0,1]);
OrientationInterpolator1494.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[151] = OrientationInterpolator1494;

let OrientationInterpolator1495 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1495.DEF = "Armature_OI_r_metacarpal_5";
OrientationInterpolator1495.key = new MFFloat(new float[0,1]);
OrientationInterpolator1495.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[152] = OrientationInterpolator1495;

let OrientationInterpolator1496 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1496.DEF = "Armature_OI_r_carpal_proximal_phalanx_5";
OrientationInterpolator1496.key = new MFFloat(new float[0,1]);
OrientationInterpolator1496.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[153] = OrientationInterpolator1496;

let OrientationInterpolator1497 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1497.DEF = "Armature_OI_r_carpal_middle_phalanx_5";
OrientationInterpolator1497.key = new MFFloat(new float[0,1]);
OrientationInterpolator1497.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[154] = OrientationInterpolator1497;

let OrientationInterpolator1498 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1498.DEF = "Armature_OI_r_carpal_distal_phalanx_5";
OrientationInterpolator1498.key = new MFFloat(new float[0,1]);
OrientationInterpolator1498.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
browser.currentScene.children[155] = OrientationInterpolator1498;

let ROUTE1499 = browser.currentScene.createNode("ROUTE");
ROUTE1499.fromField = "fraction_changed";
ROUTE1499.fromNode = "Armature_Clock";
ROUTE1499.toField = "set_fraction";
ROUTE1499.toNode = "Armature_OI_sacrum";
browser.currentScene.children[156] = ROUTE1499;

let ROUTE1500 = browser.currentScene.createNode("ROUTE");
ROUTE1500.fromField = "value_changed";
ROUTE1500.fromNode = "Armature_OI_sacrum";
ROUTE1500.toField = "rotation";
ROUTE1500.toNode = "hanim_sacrum";
browser.currentScene.children[157] = ROUTE1500;

let ROUTE1501 = browser.currentScene.createNode("ROUTE");
ROUTE1501.fromField = "fraction_changed";
ROUTE1501.fromNode = "Armature_Clock";
ROUTE1501.toField = "set_fraction";
ROUTE1501.toNode = "Armature_OI_pelvis";
browser.currentScene.children[158] = ROUTE1501;

let ROUTE1502 = browser.currentScene.createNode("ROUTE");
ROUTE1502.fromField = "value_changed";
ROUTE1502.fromNode = "Armature_OI_pelvis";
ROUTE1502.toField = "rotation";
ROUTE1502.toNode = "hanim_pelvis";
browser.currentScene.children[159] = ROUTE1502;

let ROUTE1503 = browser.currentScene.createNode("ROUTE");
ROUTE1503.fromField = "fraction_changed";
ROUTE1503.fromNode = "Armature_Clock";
ROUTE1503.toField = "set_fraction";
ROUTE1503.toNode = "Armature_OI_l_thigh";
browser.currentScene.children[160] = ROUTE1503;

let ROUTE1504 = browser.currentScene.createNode("ROUTE");
ROUTE1504.fromField = "value_changed";
ROUTE1504.fromNode = "Armature_OI_l_thigh";
ROUTE1504.toField = "rotation";
ROUTE1504.toNode = "hanim_l_thigh";
browser.currentScene.children[161] = ROUTE1504;

let ROUTE1505 = browser.currentScene.createNode("ROUTE");
ROUTE1505.fromField = "fraction_changed";
ROUTE1505.fromNode = "Armature_Clock";
ROUTE1505.toField = "set_fraction";
ROUTE1505.toNode = "Armature_OI_l_calf";
browser.currentScene.children[162] = ROUTE1505;

let ROUTE1506 = browser.currentScene.createNode("ROUTE");
ROUTE1506.fromField = "value_changed";
ROUTE1506.fromNode = "Armature_OI_l_calf";
ROUTE1506.toField = "rotation";
ROUTE1506.toNode = "hanim_l_calf";
browser.currentScene.children[163] = ROUTE1506;

let ROUTE1507 = browser.currentScene.createNode("ROUTE");
ROUTE1507.fromField = "fraction_changed";
ROUTE1507.fromNode = "Armature_Clock";
ROUTE1507.toField = "set_fraction";
ROUTE1507.toNode = "Armature_OI_l_talus";
browser.currentScene.children[164] = ROUTE1507;

let ROUTE1508 = browser.currentScene.createNode("ROUTE");
ROUTE1508.fromField = "value_changed";
ROUTE1508.fromNode = "Armature_OI_l_talus";
ROUTE1508.toField = "rotation";
ROUTE1508.toNode = "hanim_l_talus";
browser.currentScene.children[165] = ROUTE1508;

let ROUTE1509 = browser.currentScene.createNode("ROUTE");
ROUTE1509.fromField = "fraction_changed";
ROUTE1509.fromNode = "Armature_Clock";
ROUTE1509.toField = "set_fraction";
ROUTE1509.toNode = "Armature_OI_l_navicular";
browser.currentScene.children[166] = ROUTE1509;

let ROUTE1510 = browser.currentScene.createNode("ROUTE");
ROUTE1510.fromField = "value_changed";
ROUTE1510.fromNode = "Armature_OI_l_navicular";
ROUTE1510.toField = "rotation";
ROUTE1510.toNode = "hanim_l_navicular";
browser.currentScene.children[167] = ROUTE1510;

let ROUTE1511 = browser.currentScene.createNode("ROUTE");
ROUTE1511.fromField = "fraction_changed";
ROUTE1511.fromNode = "Armature_Clock";
ROUTE1511.toField = "set_fraction";
ROUTE1511.toNode = "Armature_OI_l_cuneiform_1";
browser.currentScene.children[168] = ROUTE1511;

let ROUTE1512 = browser.currentScene.createNode("ROUTE");
ROUTE1512.fromField = "value_changed";
ROUTE1512.fromNode = "Armature_OI_l_cuneiform_1";
ROUTE1512.toField = "rotation";
ROUTE1512.toNode = "hanim_l_cuneiform_1";
browser.currentScene.children[169] = ROUTE1512;

let ROUTE1513 = browser.currentScene.createNode("ROUTE");
ROUTE1513.fromField = "fraction_changed";
ROUTE1513.fromNode = "Armature_Clock";
ROUTE1513.toField = "set_fraction";
ROUTE1513.toNode = "Armature_OI_l_metatarsal_1";
browser.currentScene.children[170] = ROUTE1513;

let ROUTE1514 = browser.currentScene.createNode("ROUTE");
ROUTE1514.fromField = "value_changed";
ROUTE1514.fromNode = "Armature_OI_l_metatarsal_1";
ROUTE1514.toField = "rotation";
ROUTE1514.toNode = "hanim_l_metatarsal_1";
browser.currentScene.children[171] = ROUTE1514;

let ROUTE1515 = browser.currentScene.createNode("ROUTE");
ROUTE1515.fromField = "fraction_changed";
ROUTE1515.fromNode = "Armature_Clock";
ROUTE1515.toField = "set_fraction";
ROUTE1515.toNode = "Armature_OI_l_tarsal_proximal_phalanx_1";
browser.currentScene.children[172] = ROUTE1515;

let ROUTE1516 = browser.currentScene.createNode("ROUTE");
ROUTE1516.fromField = "value_changed";
ROUTE1516.fromNode = "Armature_OI_l_tarsal_proximal_phalanx_1";
ROUTE1516.toField = "rotation";
ROUTE1516.toNode = "hanim_l_tarsal_proximal_phalanx_1";
browser.currentScene.children[173] = ROUTE1516;

let ROUTE1517 = browser.currentScene.createNode("ROUTE");
ROUTE1517.fromField = "fraction_changed";
ROUTE1517.fromNode = "Armature_Clock";
ROUTE1517.toField = "set_fraction";
ROUTE1517.toNode = "Armature_OI_l_tarsal_distal_phalanx_1";
browser.currentScene.children[174] = ROUTE1517;

let ROUTE1518 = browser.currentScene.createNode("ROUTE");
ROUTE1518.fromField = "value_changed";
ROUTE1518.fromNode = "Armature_OI_l_tarsal_distal_phalanx_1";
ROUTE1518.toField = "rotation";
ROUTE1518.toNode = "hanim_l_tarsal_distal_phalanx_1";
browser.currentScene.children[175] = ROUTE1518;

let ROUTE1519 = browser.currentScene.createNode("ROUTE");
ROUTE1519.fromField = "fraction_changed";
ROUTE1519.fromNode = "Armature_Clock";
ROUTE1519.toField = "set_fraction";
ROUTE1519.toNode = "Armature_OI_l_cuneiform_2";
browser.currentScene.children[176] = ROUTE1519;

let ROUTE1520 = browser.currentScene.createNode("ROUTE");
ROUTE1520.fromField = "value_changed";
ROUTE1520.fromNode = "Armature_OI_l_cuneiform_2";
ROUTE1520.toField = "rotation";
ROUTE1520.toNode = "hanim_l_cuneiform_2";
browser.currentScene.children[177] = ROUTE1520;

let ROUTE1521 = browser.currentScene.createNode("ROUTE");
ROUTE1521.fromField = "fraction_changed";
ROUTE1521.fromNode = "Armature_Clock";
ROUTE1521.toField = "set_fraction";
ROUTE1521.toNode = "Armature_OI_l_metatarsal_2";
browser.currentScene.children[178] = ROUTE1521;

let ROUTE1522 = browser.currentScene.createNode("ROUTE");
ROUTE1522.fromField = "value_changed";
ROUTE1522.fromNode = "Armature_OI_l_metatarsal_2";
ROUTE1522.toField = "rotation";
ROUTE1522.toNode = "hanim_l_metatarsal_2";
browser.currentScene.children[179] = ROUTE1522;

let ROUTE1523 = browser.currentScene.createNode("ROUTE");
ROUTE1523.fromField = "fraction_changed";
ROUTE1523.fromNode = "Armature_Clock";
ROUTE1523.toField = "set_fraction";
ROUTE1523.toNode = "Armature_OI_l_tarsal_proximal_phalanx_2";
browser.currentScene.children[180] = ROUTE1523;

let ROUTE1524 = browser.currentScene.createNode("ROUTE");
ROUTE1524.fromField = "value_changed";
ROUTE1524.fromNode = "Armature_OI_l_tarsal_proximal_phalanx_2";
ROUTE1524.toField = "rotation";
ROUTE1524.toNode = "hanim_l_tarsal_proximal_phalanx_2";
browser.currentScene.children[181] = ROUTE1524;

let ROUTE1525 = browser.currentScene.createNode("ROUTE");
ROUTE1525.fromField = "fraction_changed";
ROUTE1525.fromNode = "Armature_Clock";
ROUTE1525.toField = "set_fraction";
ROUTE1525.toNode = "Armature_OI_l_tarsal_middle_phalanx_2";
browser.currentScene.children[182] = ROUTE1525;

let ROUTE1526 = browser.currentScene.createNode("ROUTE");
ROUTE1526.fromField = "value_changed";
ROUTE1526.fromNode = "Armature_OI_l_tarsal_middle_phalanx_2";
ROUTE1526.toField = "rotation";
ROUTE1526.toNode = "hanim_l_tarsal_middle_phalanx_2";
browser.currentScene.children[183] = ROUTE1526;

let ROUTE1527 = browser.currentScene.createNode("ROUTE");
ROUTE1527.fromField = "fraction_changed";
ROUTE1527.fromNode = "Armature_Clock";
ROUTE1527.toField = "set_fraction";
ROUTE1527.toNode = "Armature_OI_l_tarsal_distal_phalanx_2";
browser.currentScene.children[184] = ROUTE1527;

let ROUTE1528 = browser.currentScene.createNode("ROUTE");
ROUTE1528.fromField = "value_changed";
ROUTE1528.fromNode = "Armature_OI_l_tarsal_distal_phalanx_2";
ROUTE1528.toField = "rotation";
ROUTE1528.toNode = "hanim_l_tarsal_distal_phalanx_2";
browser.currentScene.children[185] = ROUTE1528;

let ROUTE1529 = browser.currentScene.createNode("ROUTE");
ROUTE1529.fromField = "fraction_changed";
ROUTE1529.fromNode = "Armature_Clock";
ROUTE1529.toField = "set_fraction";
ROUTE1529.toNode = "Armature_OI_l_cuneiform_3";
browser.currentScene.children[186] = ROUTE1529;

let ROUTE1530 = browser.currentScene.createNode("ROUTE");
ROUTE1530.fromField = "value_changed";
ROUTE1530.fromNode = "Armature_OI_l_cuneiform_3";
ROUTE1530.toField = "rotation";
ROUTE1530.toNode = "hanim_l_cuneiform_3";
browser.currentScene.children[187] = ROUTE1530;

let ROUTE1531 = browser.currentScene.createNode("ROUTE");
ROUTE1531.fromField = "fraction_changed";
ROUTE1531.fromNode = "Armature_Clock";
ROUTE1531.toField = "set_fraction";
ROUTE1531.toNode = "Armature_OI_l_metatarsal_3";
browser.currentScene.children[188] = ROUTE1531;

let ROUTE1532 = browser.currentScene.createNode("ROUTE");
ROUTE1532.fromField = "value_changed";
ROUTE1532.fromNode = "Armature_OI_l_metatarsal_3";
ROUTE1532.toField = "rotation";
ROUTE1532.toNode = "hanim_l_metatarsal_3";
browser.currentScene.children[189] = ROUTE1532;

let ROUTE1533 = browser.currentScene.createNode("ROUTE");
ROUTE1533.fromField = "fraction_changed";
ROUTE1533.fromNode = "Armature_Clock";
ROUTE1533.toField = "set_fraction";
ROUTE1533.toNode = "Armature_OI_l_tarsal_proximal_phalanx_3";
browser.currentScene.children[190] = ROUTE1533;

let ROUTE1534 = browser.currentScene.createNode("ROUTE");
ROUTE1534.fromField = "value_changed";
ROUTE1534.fromNode = "Armature_OI_l_tarsal_proximal_phalanx_3";
ROUTE1534.toField = "rotation";
ROUTE1534.toNode = "hanim_l_tarsal_proximal_phalanx_3";
browser.currentScene.children[191] = ROUTE1534;

let ROUTE1535 = browser.currentScene.createNode("ROUTE");
ROUTE1535.fromField = "fraction_changed";
ROUTE1535.fromNode = "Armature_Clock";
ROUTE1535.toField = "set_fraction";
ROUTE1535.toNode = "Armature_OI_l_tarsal_middle_phalanx_3";
browser.currentScene.children[192] = ROUTE1535;

let ROUTE1536 = browser.currentScene.createNode("ROUTE");
ROUTE1536.fromField = "value_changed";
ROUTE1536.fromNode = "Armature_OI_l_tarsal_middle_phalanx_3";
ROUTE1536.toField = "rotation";
ROUTE1536.toNode = "hanim_l_tarsal_middle_phalanx_3";
browser.currentScene.children[193] = ROUTE1536;

let ROUTE1537 = browser.currentScene.createNode("ROUTE");
ROUTE1537.fromField = "fraction_changed";
ROUTE1537.fromNode = "Armature_Clock";
ROUTE1537.toField = "set_fraction";
ROUTE1537.toNode = "Armature_OI_l_tarsal_distal_phalanx_3";
browser.currentScene.children[194] = ROUTE1537;

let ROUTE1538 = browser.currentScene.createNode("ROUTE");
ROUTE1538.fromField = "value_changed";
ROUTE1538.fromNode = "Armature_OI_l_tarsal_distal_phalanx_3";
ROUTE1538.toField = "rotation";
ROUTE1538.toNode = "hanim_l_tarsal_distal_phalanx_3";
browser.currentScene.children[195] = ROUTE1538;

let ROUTE1539 = browser.currentScene.createNode("ROUTE");
ROUTE1539.fromField = "fraction_changed";
ROUTE1539.fromNode = "Armature_Clock";
ROUTE1539.toField = "set_fraction";
ROUTE1539.toNode = "Armature_OI_l_calcaneus";
browser.currentScene.children[196] = ROUTE1539;

let ROUTE1540 = browser.currentScene.createNode("ROUTE");
ROUTE1540.fromField = "value_changed";
ROUTE1540.fromNode = "Armature_OI_l_calcaneus";
ROUTE1540.toField = "rotation";
ROUTE1540.toNode = "hanim_l_calcaneus";
browser.currentScene.children[197] = ROUTE1540;

let ROUTE1541 = browser.currentScene.createNode("ROUTE");
ROUTE1541.fromField = "fraction_changed";
ROUTE1541.fromNode = "Armature_Clock";
ROUTE1541.toField = "set_fraction";
ROUTE1541.toNode = "Armature_OI_l_cuboid";
browser.currentScene.children[198] = ROUTE1541;

let ROUTE1542 = browser.currentScene.createNode("ROUTE");
ROUTE1542.fromField = "value_changed";
ROUTE1542.fromNode = "Armature_OI_l_cuboid";
ROUTE1542.toField = "rotation";
ROUTE1542.toNode = "hanim_l_cuboid";
browser.currentScene.children[199] = ROUTE1542;

let ROUTE1543 = browser.currentScene.createNode("ROUTE");
ROUTE1543.fromField = "fraction_changed";
ROUTE1543.fromNode = "Armature_Clock";
ROUTE1543.toField = "set_fraction";
ROUTE1543.toNode = "Armature_OI_l_metatarsal_4";
browser.currentScene.children[200] = ROUTE1543;

let ROUTE1544 = browser.currentScene.createNode("ROUTE");
ROUTE1544.fromField = "value_changed";
ROUTE1544.fromNode = "Armature_OI_l_metatarsal_4";
ROUTE1544.toField = "rotation";
ROUTE1544.toNode = "hanim_l_metatarsal_4";
browser.currentScene.children[201] = ROUTE1544;

let ROUTE1545 = browser.currentScene.createNode("ROUTE");
ROUTE1545.fromField = "fraction_changed";
ROUTE1545.fromNode = "Armature_Clock";
ROUTE1545.toField = "set_fraction";
ROUTE1545.toNode = "Armature_OI_l_tarsal_proximal_phalanx_4";
browser.currentScene.children[202] = ROUTE1545;

let ROUTE1546 = browser.currentScene.createNode("ROUTE");
ROUTE1546.fromField = "value_changed";
ROUTE1546.fromNode = "Armature_OI_l_tarsal_proximal_phalanx_4";
ROUTE1546.toField = "rotation";
ROUTE1546.toNode = "hanim_l_tarsal_proximal_phalanx_4";
browser.currentScene.children[203] = ROUTE1546;

let ROUTE1547 = browser.currentScene.createNode("ROUTE");
ROUTE1547.fromField = "fraction_changed";
ROUTE1547.fromNode = "Armature_Clock";
ROUTE1547.toField = "set_fraction";
ROUTE1547.toNode = "Armature_OI_l_tarsal_middle_phalanx_4";
browser.currentScene.children[204] = ROUTE1547;

let ROUTE1548 = browser.currentScene.createNode("ROUTE");
ROUTE1548.fromField = "value_changed";
ROUTE1548.fromNode = "Armature_OI_l_tarsal_middle_phalanx_4";
ROUTE1548.toField = "rotation";
ROUTE1548.toNode = "hanim_l_tarsal_middle_phalanx_4";
browser.currentScene.children[205] = ROUTE1548;

let ROUTE1549 = browser.currentScene.createNode("ROUTE");
ROUTE1549.fromField = "fraction_changed";
ROUTE1549.fromNode = "Armature_Clock";
ROUTE1549.toField = "set_fraction";
ROUTE1549.toNode = "Armature_OI_l_tarsal_distal_phalanx_4";
browser.currentScene.children[206] = ROUTE1549;

let ROUTE1550 = browser.currentScene.createNode("ROUTE");
ROUTE1550.fromField = "value_changed";
ROUTE1550.fromNode = "Armature_OI_l_tarsal_distal_phalanx_4";
ROUTE1550.toField = "rotation";
ROUTE1550.toNode = "hanim_l_tarsal_distal_phalanx_4";
browser.currentScene.children[207] = ROUTE1550;

let ROUTE1551 = browser.currentScene.createNode("ROUTE");
ROUTE1551.fromField = "fraction_changed";
ROUTE1551.fromNode = "Armature_Clock";
ROUTE1551.toField = "set_fraction";
ROUTE1551.toNode = "Armature_OI_l_metatarsal_5";
browser.currentScene.children[208] = ROUTE1551;

let ROUTE1552 = browser.currentScene.createNode("ROUTE");
ROUTE1552.fromField = "value_changed";
ROUTE1552.fromNode = "Armature_OI_l_metatarsal_5";
ROUTE1552.toField = "rotation";
ROUTE1552.toNode = "hanim_l_metatarsal_5";
browser.currentScene.children[209] = ROUTE1552;

let ROUTE1553 = browser.currentScene.createNode("ROUTE");
ROUTE1553.fromField = "fraction_changed";
ROUTE1553.fromNode = "Armature_Clock";
ROUTE1553.toField = "set_fraction";
ROUTE1553.toNode = "Armature_OI_l_tarsal_proximal_phalanx_5";
browser.currentScene.children[210] = ROUTE1553;

let ROUTE1554 = browser.currentScene.createNode("ROUTE");
ROUTE1554.fromField = "value_changed";
ROUTE1554.fromNode = "Armature_OI_l_tarsal_proximal_phalanx_5";
ROUTE1554.toField = "rotation";
ROUTE1554.toNode = "hanim_l_tarsal_proximal_phalanx_5";
browser.currentScene.children[211] = ROUTE1554;

let ROUTE1555 = browser.currentScene.createNode("ROUTE");
ROUTE1555.fromField = "fraction_changed";
ROUTE1555.fromNode = "Armature_Clock";
ROUTE1555.toField = "set_fraction";
ROUTE1555.toNode = "Armature_OI_l_tarsal_middle_phalanx_5";
browser.currentScene.children[212] = ROUTE1555;

let ROUTE1556 = browser.currentScene.createNode("ROUTE");
ROUTE1556.fromField = "value_changed";
ROUTE1556.fromNode = "Armature_OI_l_tarsal_middle_phalanx_5";
ROUTE1556.toField = "rotation";
ROUTE1556.toNode = "hanim_l_tarsal_middle_phalanx_5";
browser.currentScene.children[213] = ROUTE1556;

let ROUTE1557 = browser.currentScene.createNode("ROUTE");
ROUTE1557.fromField = "fraction_changed";
ROUTE1557.fromNode = "Armature_Clock";
ROUTE1557.toField = "set_fraction";
ROUTE1557.toNode = "Armature_OI_l_tarsal_distal_phalanx_5";
browser.currentScene.children[214] = ROUTE1557;

let ROUTE1558 = browser.currentScene.createNode("ROUTE");
ROUTE1558.fromField = "value_changed";
ROUTE1558.fromNode = "Armature_OI_l_tarsal_distal_phalanx_5";
ROUTE1558.toField = "rotation";
ROUTE1558.toNode = "hanim_l_tarsal_distal_phalanx_5";
browser.currentScene.children[215] = ROUTE1558;

let ROUTE1559 = browser.currentScene.createNode("ROUTE");
ROUTE1559.fromField = "fraction_changed";
ROUTE1559.fromNode = "Armature_Clock";
ROUTE1559.toField = "set_fraction";
ROUTE1559.toNode = "Armature_OI_r_thigh";
browser.currentScene.children[216] = ROUTE1559;

let ROUTE1560 = browser.currentScene.createNode("ROUTE");
ROUTE1560.fromField = "value_changed";
ROUTE1560.fromNode = "Armature_OI_r_thigh";
ROUTE1560.toField = "rotation";
ROUTE1560.toNode = "hanim_r_thigh";
browser.currentScene.children[217] = ROUTE1560;

let ROUTE1561 = browser.currentScene.createNode("ROUTE");
ROUTE1561.fromField = "fraction_changed";
ROUTE1561.fromNode = "Armature_Clock";
ROUTE1561.toField = "set_fraction";
ROUTE1561.toNode = "Armature_OI_r_calf";
browser.currentScene.children[218] = ROUTE1561;

let ROUTE1562 = browser.currentScene.createNode("ROUTE");
ROUTE1562.fromField = "value_changed";
ROUTE1562.fromNode = "Armature_OI_r_calf";
ROUTE1562.toField = "rotation";
ROUTE1562.toNode = "hanim_r_calf";
browser.currentScene.children[219] = ROUTE1562;

let ROUTE1563 = browser.currentScene.createNode("ROUTE");
ROUTE1563.fromField = "fraction_changed";
ROUTE1563.fromNode = "Armature_Clock";
ROUTE1563.toField = "set_fraction";
ROUTE1563.toNode = "Armature_OI_r_talus";
browser.currentScene.children[220] = ROUTE1563;

let ROUTE1564 = browser.currentScene.createNode("ROUTE");
ROUTE1564.fromField = "value_changed";
ROUTE1564.fromNode = "Armature_OI_r_talus";
ROUTE1564.toField = "rotation";
ROUTE1564.toNode = "hanim_r_talus";
browser.currentScene.children[221] = ROUTE1564;

let ROUTE1565 = browser.currentScene.createNode("ROUTE");
ROUTE1565.fromField = "fraction_changed";
ROUTE1565.fromNode = "Armature_Clock";
ROUTE1565.toField = "set_fraction";
ROUTE1565.toNode = "Armature_OI_r_navicular";
browser.currentScene.children[222] = ROUTE1565;

let ROUTE1566 = browser.currentScene.createNode("ROUTE");
ROUTE1566.fromField = "value_changed";
ROUTE1566.fromNode = "Armature_OI_r_navicular";
ROUTE1566.toField = "rotation";
ROUTE1566.toNode = "hanim_r_navicular";
browser.currentScene.children[223] = ROUTE1566;

let ROUTE1567 = browser.currentScene.createNode("ROUTE");
ROUTE1567.fromField = "fraction_changed";
ROUTE1567.fromNode = "Armature_Clock";
ROUTE1567.toField = "set_fraction";
ROUTE1567.toNode = "Armature_OI_r_cuneiform_1";
browser.currentScene.children[224] = ROUTE1567;

let ROUTE1568 = browser.currentScene.createNode("ROUTE");
ROUTE1568.fromField = "value_changed";
ROUTE1568.fromNode = "Armature_OI_r_cuneiform_1";
ROUTE1568.toField = "rotation";
ROUTE1568.toNode = "hanim_r_cuneiform_1";
browser.currentScene.children[225] = ROUTE1568;

let ROUTE1569 = browser.currentScene.createNode("ROUTE");
ROUTE1569.fromField = "fraction_changed";
ROUTE1569.fromNode = "Armature_Clock";
ROUTE1569.toField = "set_fraction";
ROUTE1569.toNode = "Armature_OI_r_metatarsal_1";
browser.currentScene.children[226] = ROUTE1569;

let ROUTE1570 = browser.currentScene.createNode("ROUTE");
ROUTE1570.fromField = "value_changed";
ROUTE1570.fromNode = "Armature_OI_r_metatarsal_1";
ROUTE1570.toField = "rotation";
ROUTE1570.toNode = "hanim_r_metatarsal_1";
browser.currentScene.children[227] = ROUTE1570;

let ROUTE1571 = browser.currentScene.createNode("ROUTE");
ROUTE1571.fromField = "fraction_changed";
ROUTE1571.fromNode = "Armature_Clock";
ROUTE1571.toField = "set_fraction";
ROUTE1571.toNode = "Armature_OI_r_tarsal_proximal_phalanx_1";
browser.currentScene.children[228] = ROUTE1571;

let ROUTE1572 = browser.currentScene.createNode("ROUTE");
ROUTE1572.fromField = "value_changed";
ROUTE1572.fromNode = "Armature_OI_r_tarsal_proximal_phalanx_1";
ROUTE1572.toField = "rotation";
ROUTE1572.toNode = "hanim_r_tarsal_proximal_phalanx_1";
browser.currentScene.children[229] = ROUTE1572;

let ROUTE1573 = browser.currentScene.createNode("ROUTE");
ROUTE1573.fromField = "fraction_changed";
ROUTE1573.fromNode = "Armature_Clock";
ROUTE1573.toField = "set_fraction";
ROUTE1573.toNode = "Armature_OI_r_tarsal_distal_phalanx_1";
browser.currentScene.children[230] = ROUTE1573;

let ROUTE1574 = browser.currentScene.createNode("ROUTE");
ROUTE1574.fromField = "value_changed";
ROUTE1574.fromNode = "Armature_OI_r_tarsal_distal_phalanx_1";
ROUTE1574.toField = "rotation";
ROUTE1574.toNode = "hanim_r_tarsal_distal_phalanx_1";
browser.currentScene.children[231] = ROUTE1574;

let ROUTE1575 = browser.currentScene.createNode("ROUTE");
ROUTE1575.fromField = "fraction_changed";
ROUTE1575.fromNode = "Armature_Clock";
ROUTE1575.toField = "set_fraction";
ROUTE1575.toNode = "Armature_OI_r_cuneiform_2";
browser.currentScene.children[232] = ROUTE1575;

let ROUTE1576 = browser.currentScene.createNode("ROUTE");
ROUTE1576.fromField = "value_changed";
ROUTE1576.fromNode = "Armature_OI_r_cuneiform_2";
ROUTE1576.toField = "rotation";
ROUTE1576.toNode = "hanim_r_cuneiform_2";
browser.currentScene.children[233] = ROUTE1576;

let ROUTE1577 = browser.currentScene.createNode("ROUTE");
ROUTE1577.fromField = "fraction_changed";
ROUTE1577.fromNode = "Armature_Clock";
ROUTE1577.toField = "set_fraction";
ROUTE1577.toNode = "Armature_OI_r_metatarsal_2";
browser.currentScene.children[234] = ROUTE1577;

let ROUTE1578 = browser.currentScene.createNode("ROUTE");
ROUTE1578.fromField = "value_changed";
ROUTE1578.fromNode = "Armature_OI_r_metatarsal_2";
ROUTE1578.toField = "rotation";
ROUTE1578.toNode = "hanim_r_metatarsal_2";
browser.currentScene.children[235] = ROUTE1578;

let ROUTE1579 = browser.currentScene.createNode("ROUTE");
ROUTE1579.fromField = "fraction_changed";
ROUTE1579.fromNode = "Armature_Clock";
ROUTE1579.toField = "set_fraction";
ROUTE1579.toNode = "Armature_OI_r_tarsal_proximal_phalanx_2";
browser.currentScene.children[236] = ROUTE1579;

let ROUTE1580 = browser.currentScene.createNode("ROUTE");
ROUTE1580.fromField = "value_changed";
ROUTE1580.fromNode = "Armature_OI_r_tarsal_proximal_phalanx_2";
ROUTE1580.toField = "rotation";
ROUTE1580.toNode = "hanim_r_tarsal_proximal_phalanx_2";
browser.currentScene.children[237] = ROUTE1580;

let ROUTE1581 = browser.currentScene.createNode("ROUTE");
ROUTE1581.fromField = "fraction_changed";
ROUTE1581.fromNode = "Armature_Clock";
ROUTE1581.toField = "set_fraction";
ROUTE1581.toNode = "Armature_OI_r_tarsal_middle_phalanx_2";
browser.currentScene.children[238] = ROUTE1581;

let ROUTE1582 = browser.currentScene.createNode("ROUTE");
ROUTE1582.fromField = "value_changed";
ROUTE1582.fromNode = "Armature_OI_r_tarsal_middle_phalanx_2";
ROUTE1582.toField = "rotation";
ROUTE1582.toNode = "hanim_r_tarsal_middle_phalanx_2";
browser.currentScene.children[239] = ROUTE1582;

let ROUTE1583 = browser.currentScene.createNode("ROUTE");
ROUTE1583.fromField = "fraction_changed";
ROUTE1583.fromNode = "Armature_Clock";
ROUTE1583.toField = "set_fraction";
ROUTE1583.toNode = "Armature_OI_r_tarsal_distal_phalanx_2";
browser.currentScene.children[240] = ROUTE1583;

let ROUTE1584 = browser.currentScene.createNode("ROUTE");
ROUTE1584.fromField = "value_changed";
ROUTE1584.fromNode = "Armature_OI_r_tarsal_distal_phalanx_2";
ROUTE1584.toField = "rotation";
ROUTE1584.toNode = "hanim_r_tarsal_distal_phalanx_2";
browser.currentScene.children[241] = ROUTE1584;

let ROUTE1585 = browser.currentScene.createNode("ROUTE");
ROUTE1585.fromField = "fraction_changed";
ROUTE1585.fromNode = "Armature_Clock";
ROUTE1585.toField = "set_fraction";
ROUTE1585.toNode = "Armature_OI_r_cuneiform_3";
browser.currentScene.children[242] = ROUTE1585;

let ROUTE1586 = browser.currentScene.createNode("ROUTE");
ROUTE1586.fromField = "value_changed";
ROUTE1586.fromNode = "Armature_OI_r_cuneiform_3";
ROUTE1586.toField = "rotation";
ROUTE1586.toNode = "hanim_r_cuneiform_3";
browser.currentScene.children[243] = ROUTE1586;

let ROUTE1587 = browser.currentScene.createNode("ROUTE");
ROUTE1587.fromField = "fraction_changed";
ROUTE1587.fromNode = "Armature_Clock";
ROUTE1587.toField = "set_fraction";
ROUTE1587.toNode = "Armature_OI_r_metatarsal_3";
browser.currentScene.children[244] = ROUTE1587;

let ROUTE1588 = browser.currentScene.createNode("ROUTE");
ROUTE1588.fromField = "value_changed";
ROUTE1588.fromNode = "Armature_OI_r_metatarsal_3";
ROUTE1588.toField = "rotation";
ROUTE1588.toNode = "hanim_r_metatarsal_3";
browser.currentScene.children[245] = ROUTE1588;

let ROUTE1589 = browser.currentScene.createNode("ROUTE");
ROUTE1589.fromField = "fraction_changed";
ROUTE1589.fromNode = "Armature_Clock";
ROUTE1589.toField = "set_fraction";
ROUTE1589.toNode = "Armature_OI_r_tarsal_proximal_phalanx_3";
browser.currentScene.children[246] = ROUTE1589;

let ROUTE1590 = browser.currentScene.createNode("ROUTE");
ROUTE1590.fromField = "value_changed";
ROUTE1590.fromNode = "Armature_OI_r_tarsal_proximal_phalanx_3";
ROUTE1590.toField = "rotation";
ROUTE1590.toNode = "hanim_r_tarsal_proximal_phalanx_3";
browser.currentScene.children[247] = ROUTE1590;

let ROUTE1591 = browser.currentScene.createNode("ROUTE");
ROUTE1591.fromField = "fraction_changed";
ROUTE1591.fromNode = "Armature_Clock";
ROUTE1591.toField = "set_fraction";
ROUTE1591.toNode = "Armature_OI_r_tarsal_middle_phalanx_3";
browser.currentScene.children[248] = ROUTE1591;

let ROUTE1592 = browser.currentScene.createNode("ROUTE");
ROUTE1592.fromField = "value_changed";
ROUTE1592.fromNode = "Armature_OI_r_tarsal_middle_phalanx_3";
ROUTE1592.toField = "rotation";
ROUTE1592.toNode = "hanim_r_tarsal_middle_phalanx_3";
browser.currentScene.children[249] = ROUTE1592;

let ROUTE1593 = browser.currentScene.createNode("ROUTE");
ROUTE1593.fromField = "fraction_changed";
ROUTE1593.fromNode = "Armature_Clock";
ROUTE1593.toField = "set_fraction";
ROUTE1593.toNode = "Armature_OI_r_tarsal_distal_phalanx_3";
browser.currentScene.children[250] = ROUTE1593;

let ROUTE1594 = browser.currentScene.createNode("ROUTE");
ROUTE1594.fromField = "value_changed";
ROUTE1594.fromNode = "Armature_OI_r_tarsal_distal_phalanx_3";
ROUTE1594.toField = "rotation";
ROUTE1594.toNode = "hanim_r_tarsal_distal_phalanx_3";
browser.currentScene.children[251] = ROUTE1594;

let ROUTE1595 = browser.currentScene.createNode("ROUTE");
ROUTE1595.fromField = "fraction_changed";
ROUTE1595.fromNode = "Armature_Clock";
ROUTE1595.toField = "set_fraction";
ROUTE1595.toNode = "Armature_OI_r_calcaneus";
browser.currentScene.children[252] = ROUTE1595;

let ROUTE1596 = browser.currentScene.createNode("ROUTE");
ROUTE1596.fromField = "value_changed";
ROUTE1596.fromNode = "Armature_OI_r_calcaneus";
ROUTE1596.toField = "rotation";
ROUTE1596.toNode = "hanim_r_calcaneus";
browser.currentScene.children[253] = ROUTE1596;

let ROUTE1597 = browser.currentScene.createNode("ROUTE");
ROUTE1597.fromField = "fraction_changed";
ROUTE1597.fromNode = "Armature_Clock";
ROUTE1597.toField = "set_fraction";
ROUTE1597.toNode = "Armature_OI_r_cuboid";
browser.currentScene.children[254] = ROUTE1597;

let ROUTE1598 = browser.currentScene.createNode("ROUTE");
ROUTE1598.fromField = "value_changed";
ROUTE1598.fromNode = "Armature_OI_r_cuboid";
ROUTE1598.toField = "rotation";
ROUTE1598.toNode = "hanim_r_cuboid";
browser.currentScene.children[255] = ROUTE1598;

let ROUTE1599 = browser.currentScene.createNode("ROUTE");
ROUTE1599.fromField = "fraction_changed";
ROUTE1599.fromNode = "Armature_Clock";
ROUTE1599.toField = "set_fraction";
ROUTE1599.toNode = "Armature_OI_r_metatarsal_4";
browser.currentScene.children[256] = ROUTE1599;

let ROUTE1600 = browser.currentScene.createNode("ROUTE");
ROUTE1600.fromField = "value_changed";
ROUTE1600.fromNode = "Armature_OI_r_metatarsal_4";
ROUTE1600.toField = "rotation";
ROUTE1600.toNode = "hanim_r_metatarsal_4";
browser.currentScene.children[257] = ROUTE1600;

let ROUTE1601 = browser.currentScene.createNode("ROUTE");
ROUTE1601.fromField = "fraction_changed";
ROUTE1601.fromNode = "Armature_Clock";
ROUTE1601.toField = "set_fraction";
ROUTE1601.toNode = "Armature_OI_r_tarsal_proximal_phalanx_4";
browser.currentScene.children[258] = ROUTE1601;

let ROUTE1602 = browser.currentScene.createNode("ROUTE");
ROUTE1602.fromField = "value_changed";
ROUTE1602.fromNode = "Armature_OI_r_tarsal_proximal_phalanx_4";
ROUTE1602.toField = "rotation";
ROUTE1602.toNode = "hanim_r_tarsal_proximal_phalanx_4";
browser.currentScene.children[259] = ROUTE1602;

let ROUTE1603 = browser.currentScene.createNode("ROUTE");
ROUTE1603.fromField = "fraction_changed";
ROUTE1603.fromNode = "Armature_Clock";
ROUTE1603.toField = "set_fraction";
ROUTE1603.toNode = "Armature_OI_r_tarsal_middle_phalanx_4";
browser.currentScene.children[260] = ROUTE1603;

let ROUTE1604 = browser.currentScene.createNode("ROUTE");
ROUTE1604.fromField = "value_changed";
ROUTE1604.fromNode = "Armature_OI_r_tarsal_middle_phalanx_4";
ROUTE1604.toField = "rotation";
ROUTE1604.toNode = "hanim_r_tarsal_middle_phalanx_4";
browser.currentScene.children[261] = ROUTE1604;

let ROUTE1605 = browser.currentScene.createNode("ROUTE");
ROUTE1605.fromField = "fraction_changed";
ROUTE1605.fromNode = "Armature_Clock";
ROUTE1605.toField = "set_fraction";
ROUTE1605.toNode = "Armature_OI_r_tarsal_distal_phalanx_4";
browser.currentScene.children[262] = ROUTE1605;

let ROUTE1606 = browser.currentScene.createNode("ROUTE");
ROUTE1606.fromField = "value_changed";
ROUTE1606.fromNode = "Armature_OI_r_tarsal_distal_phalanx_4";
ROUTE1606.toField = "rotation";
ROUTE1606.toNode = "hanim_r_tarsal_distal_phalanx_4";
browser.currentScene.children[263] = ROUTE1606;

let ROUTE1607 = browser.currentScene.createNode("ROUTE");
ROUTE1607.fromField = "fraction_changed";
ROUTE1607.fromNode = "Armature_Clock";
ROUTE1607.toField = "set_fraction";
ROUTE1607.toNode = "Armature_OI_r_metatarsal_5";
browser.currentScene.children[264] = ROUTE1607;

let ROUTE1608 = browser.currentScene.createNode("ROUTE");
ROUTE1608.fromField = "value_changed";
ROUTE1608.fromNode = "Armature_OI_r_metatarsal_5";
ROUTE1608.toField = "rotation";
ROUTE1608.toNode = "hanim_r_metatarsal_5";
browser.currentScene.children[265] = ROUTE1608;

let ROUTE1609 = browser.currentScene.createNode("ROUTE");
ROUTE1609.fromField = "fraction_changed";
ROUTE1609.fromNode = "Armature_Clock";
ROUTE1609.toField = "set_fraction";
ROUTE1609.toNode = "Armature_OI_r_tarsal_proximal_phalanx_5";
browser.currentScene.children[266] = ROUTE1609;

let ROUTE1610 = browser.currentScene.createNode("ROUTE");
ROUTE1610.fromField = "value_changed";
ROUTE1610.fromNode = "Armature_OI_r_tarsal_proximal_phalanx_5";
ROUTE1610.toField = "rotation";
ROUTE1610.toNode = "hanim_r_tarsal_proximal_phalanx_5";
browser.currentScene.children[267] = ROUTE1610;

let ROUTE1611 = browser.currentScene.createNode("ROUTE");
ROUTE1611.fromField = "fraction_changed";
ROUTE1611.fromNode = "Armature_Clock";
ROUTE1611.toField = "set_fraction";
ROUTE1611.toNode = "Armature_OI_r_tarsal_middle_phalanx_5";
browser.currentScene.children[268] = ROUTE1611;

let ROUTE1612 = browser.currentScene.createNode("ROUTE");
ROUTE1612.fromField = "value_changed";
ROUTE1612.fromNode = "Armature_OI_r_tarsal_middle_phalanx_5";
ROUTE1612.toField = "rotation";
ROUTE1612.toNode = "hanim_r_tarsal_middle_phalanx_5";
browser.currentScene.children[269] = ROUTE1612;

let ROUTE1613 = browser.currentScene.createNode("ROUTE");
ROUTE1613.fromField = "fraction_changed";
ROUTE1613.fromNode = "Armature_Clock";
ROUTE1613.toField = "set_fraction";
ROUTE1613.toNode = "Armature_OI_r_tarsal_distal_phalanx_5";
browser.currentScene.children[270] = ROUTE1613;

let ROUTE1614 = browser.currentScene.createNode("ROUTE");
ROUTE1614.fromField = "value_changed";
ROUTE1614.fromNode = "Armature_OI_r_tarsal_distal_phalanx_5";
ROUTE1614.toField = "rotation";
ROUTE1614.toNode = "hanim_r_tarsal_distal_phalanx_5";
browser.currentScene.children[271] = ROUTE1614;

let ROUTE1615 = browser.currentScene.createNode("ROUTE");
ROUTE1615.fromField = "fraction_changed";
ROUTE1615.fromNode = "Armature_Clock";
ROUTE1615.toField = "set_fraction";
ROUTE1615.toNode = "Armature_OI_l5";
browser.currentScene.children[272] = ROUTE1615;

let ROUTE1616 = browser.currentScene.createNode("ROUTE");
ROUTE1616.fromField = "value_changed";
ROUTE1616.fromNode = "Armature_OI_l5";
ROUTE1616.toField = "rotation";
ROUTE1616.toNode = "hanim_l5";
browser.currentScene.children[273] = ROUTE1616;

let ROUTE1617 = browser.currentScene.createNode("ROUTE");
ROUTE1617.fromField = "fraction_changed";
ROUTE1617.fromNode = "Armature_Clock";
ROUTE1617.toField = "set_fraction";
ROUTE1617.toNode = "Armature_OI_l4";
browser.currentScene.children[274] = ROUTE1617;

let ROUTE1618 = browser.currentScene.createNode("ROUTE");
ROUTE1618.fromField = "value_changed";
ROUTE1618.fromNode = "Armature_OI_l4";
ROUTE1618.toField = "rotation";
ROUTE1618.toNode = "hanim_l4";
browser.currentScene.children[275] = ROUTE1618;

let ROUTE1619 = browser.currentScene.createNode("ROUTE");
ROUTE1619.fromField = "fraction_changed";
ROUTE1619.fromNode = "Armature_Clock";
ROUTE1619.toField = "set_fraction";
ROUTE1619.toNode = "Armature_OI_l3";
browser.currentScene.children[276] = ROUTE1619;

let ROUTE1620 = browser.currentScene.createNode("ROUTE");
ROUTE1620.fromField = "value_changed";
ROUTE1620.fromNode = "Armature_OI_l3";
ROUTE1620.toField = "rotation";
ROUTE1620.toNode = "hanim_l3";
browser.currentScene.children[277] = ROUTE1620;

let ROUTE1621 = browser.currentScene.createNode("ROUTE");
ROUTE1621.fromField = "fraction_changed";
ROUTE1621.fromNode = "Armature_Clock";
ROUTE1621.toField = "set_fraction";
ROUTE1621.toNode = "Armature_OI_l2";
browser.currentScene.children[278] = ROUTE1621;

let ROUTE1622 = browser.currentScene.createNode("ROUTE");
ROUTE1622.fromField = "value_changed";
ROUTE1622.fromNode = "Armature_OI_l2";
ROUTE1622.toField = "rotation";
ROUTE1622.toNode = "hanim_l2";
browser.currentScene.children[279] = ROUTE1622;

let ROUTE1623 = browser.currentScene.createNode("ROUTE");
ROUTE1623.fromField = "fraction_changed";
ROUTE1623.fromNode = "Armature_Clock";
ROUTE1623.toField = "set_fraction";
ROUTE1623.toNode = "Armature_OI_l1";
browser.currentScene.children[280] = ROUTE1623;

let ROUTE1624 = browser.currentScene.createNode("ROUTE");
ROUTE1624.fromField = "value_changed";
ROUTE1624.fromNode = "Armature_OI_l1";
ROUTE1624.toField = "rotation";
ROUTE1624.toNode = "hanim_l1";
browser.currentScene.children[281] = ROUTE1624;

let ROUTE1625 = browser.currentScene.createNode("ROUTE");
ROUTE1625.fromField = "fraction_changed";
ROUTE1625.fromNode = "Armature_Clock";
ROUTE1625.toField = "set_fraction";
ROUTE1625.toNode = "Armature_OI_t12";
browser.currentScene.children[282] = ROUTE1625;

let ROUTE1626 = browser.currentScene.createNode("ROUTE");
ROUTE1626.fromField = "value_changed";
ROUTE1626.fromNode = "Armature_OI_t12";
ROUTE1626.toField = "rotation";
ROUTE1626.toNode = "hanim_t12";
browser.currentScene.children[283] = ROUTE1626;

let ROUTE1627 = browser.currentScene.createNode("ROUTE");
ROUTE1627.fromField = "fraction_changed";
ROUTE1627.fromNode = "Armature_Clock";
ROUTE1627.toField = "set_fraction";
ROUTE1627.toNode = "Armature_OI_t11";
browser.currentScene.children[284] = ROUTE1627;

let ROUTE1628 = browser.currentScene.createNode("ROUTE");
ROUTE1628.fromField = "value_changed";
ROUTE1628.fromNode = "Armature_OI_t11";
ROUTE1628.toField = "rotation";
ROUTE1628.toNode = "hanim_t11";
browser.currentScene.children[285] = ROUTE1628;

let ROUTE1629 = browser.currentScene.createNode("ROUTE");
ROUTE1629.fromField = "fraction_changed";
ROUTE1629.fromNode = "Armature_Clock";
ROUTE1629.toField = "set_fraction";
ROUTE1629.toNode = "Armature_OI_t10";
browser.currentScene.children[286] = ROUTE1629;

let ROUTE1630 = browser.currentScene.createNode("ROUTE");
ROUTE1630.fromField = "value_changed";
ROUTE1630.fromNode = "Armature_OI_t10";
ROUTE1630.toField = "rotation";
ROUTE1630.toNode = "hanim_t10";
browser.currentScene.children[287] = ROUTE1630;

let ROUTE1631 = browser.currentScene.createNode("ROUTE");
ROUTE1631.fromField = "fraction_changed";
ROUTE1631.fromNode = "Armature_Clock";
ROUTE1631.toField = "set_fraction";
ROUTE1631.toNode = "Armature_OI_t9";
browser.currentScene.children[288] = ROUTE1631;

let ROUTE1632 = browser.currentScene.createNode("ROUTE");
ROUTE1632.fromField = "value_changed";
ROUTE1632.fromNode = "Armature_OI_t9";
ROUTE1632.toField = "rotation";
ROUTE1632.toNode = "hanim_t9";
browser.currentScene.children[289] = ROUTE1632;

let ROUTE1633 = browser.currentScene.createNode("ROUTE");
ROUTE1633.fromField = "fraction_changed";
ROUTE1633.fromNode = "Armature_Clock";
ROUTE1633.toField = "set_fraction";
ROUTE1633.toNode = "Armature_OI_t8";
browser.currentScene.children[290] = ROUTE1633;

let ROUTE1634 = browser.currentScene.createNode("ROUTE");
ROUTE1634.fromField = "value_changed";
ROUTE1634.fromNode = "Armature_OI_t8";
ROUTE1634.toField = "rotation";
ROUTE1634.toNode = "hanim_t8";
browser.currentScene.children[291] = ROUTE1634;

let ROUTE1635 = browser.currentScene.createNode("ROUTE");
ROUTE1635.fromField = "fraction_changed";
ROUTE1635.fromNode = "Armature_Clock";
ROUTE1635.toField = "set_fraction";
ROUTE1635.toNode = "Armature_OI_t7";
browser.currentScene.children[292] = ROUTE1635;

let ROUTE1636 = browser.currentScene.createNode("ROUTE");
ROUTE1636.fromField = "value_changed";
ROUTE1636.fromNode = "Armature_OI_t7";
ROUTE1636.toField = "rotation";
ROUTE1636.toNode = "hanim_t7";
browser.currentScene.children[293] = ROUTE1636;

let ROUTE1637 = browser.currentScene.createNode("ROUTE");
ROUTE1637.fromField = "fraction_changed";
ROUTE1637.fromNode = "Armature_Clock";
ROUTE1637.toField = "set_fraction";
ROUTE1637.toNode = "Armature_OI_t6";
browser.currentScene.children[294] = ROUTE1637;

let ROUTE1638 = browser.currentScene.createNode("ROUTE");
ROUTE1638.fromField = "value_changed";
ROUTE1638.fromNode = "Armature_OI_t6";
ROUTE1638.toField = "rotation";
ROUTE1638.toNode = "hanim_t6";
browser.currentScene.children[295] = ROUTE1638;

let ROUTE1639 = browser.currentScene.createNode("ROUTE");
ROUTE1639.fromField = "fraction_changed";
ROUTE1639.fromNode = "Armature_Clock";
ROUTE1639.toField = "set_fraction";
ROUTE1639.toNode = "Armature_OI_t5";
browser.currentScene.children[296] = ROUTE1639;

let ROUTE1640 = browser.currentScene.createNode("ROUTE");
ROUTE1640.fromField = "value_changed";
ROUTE1640.fromNode = "Armature_OI_t5";
ROUTE1640.toField = "rotation";
ROUTE1640.toNode = "hanim_t5";
browser.currentScene.children[297] = ROUTE1640;

let ROUTE1641 = browser.currentScene.createNode("ROUTE");
ROUTE1641.fromField = "fraction_changed";
ROUTE1641.fromNode = "Armature_Clock";
ROUTE1641.toField = "set_fraction";
ROUTE1641.toNode = "Armature_OI_t4";
browser.currentScene.children[298] = ROUTE1641;

let ROUTE1642 = browser.currentScene.createNode("ROUTE");
ROUTE1642.fromField = "value_changed";
ROUTE1642.fromNode = "Armature_OI_t4";
ROUTE1642.toField = "rotation";
ROUTE1642.toNode = "hanim_t4";
browser.currentScene.children[299] = ROUTE1642;

let ROUTE1643 = browser.currentScene.createNode("ROUTE");
ROUTE1643.fromField = "fraction_changed";
ROUTE1643.fromNode = "Armature_Clock";
ROUTE1643.toField = "set_fraction";
ROUTE1643.toNode = "Armature_OI_t3";
browser.currentScene.children[300] = ROUTE1643;

let ROUTE1644 = browser.currentScene.createNode("ROUTE");
ROUTE1644.fromField = "value_changed";
ROUTE1644.fromNode = "Armature_OI_t3";
ROUTE1644.toField = "rotation";
ROUTE1644.toNode = "hanim_t3";
browser.currentScene.children[301] = ROUTE1644;

let ROUTE1645 = browser.currentScene.createNode("ROUTE");
ROUTE1645.fromField = "fraction_changed";
ROUTE1645.fromNode = "Armature_Clock";
ROUTE1645.toField = "set_fraction";
ROUTE1645.toNode = "Armature_OI_t2";
browser.currentScene.children[302] = ROUTE1645;

let ROUTE1646 = browser.currentScene.createNode("ROUTE");
ROUTE1646.fromField = "value_changed";
ROUTE1646.fromNode = "Armature_OI_t2";
ROUTE1646.toField = "rotation";
ROUTE1646.toNode = "hanim_t2";
browser.currentScene.children[303] = ROUTE1646;

let ROUTE1647 = browser.currentScene.createNode("ROUTE");
ROUTE1647.fromField = "fraction_changed";
ROUTE1647.fromNode = "Armature_Clock";
ROUTE1647.toField = "set_fraction";
ROUTE1647.toNode = "Armature_OI_t1";
browser.currentScene.children[304] = ROUTE1647;

let ROUTE1648 = browser.currentScene.createNode("ROUTE");
ROUTE1648.fromField = "value_changed";
ROUTE1648.fromNode = "Armature_OI_t1";
ROUTE1648.toField = "rotation";
ROUTE1648.toNode = "hanim_t1";
browser.currentScene.children[305] = ROUTE1648;

let ROUTE1649 = browser.currentScene.createNode("ROUTE");
ROUTE1649.fromField = "fraction_changed";
ROUTE1649.fromNode = "Armature_Clock";
ROUTE1649.toField = "set_fraction";
ROUTE1649.toNode = "Armature_OI_c7";
browser.currentScene.children[306] = ROUTE1649;

let ROUTE1650 = browser.currentScene.createNode("ROUTE");
ROUTE1650.fromField = "value_changed";
ROUTE1650.fromNode = "Armature_OI_c7";
ROUTE1650.toField = "rotation";
ROUTE1650.toNode = "hanim_c7";
browser.currentScene.children[307] = ROUTE1650;

let ROUTE1651 = browser.currentScene.createNode("ROUTE");
ROUTE1651.fromField = "fraction_changed";
ROUTE1651.fromNode = "Armature_Clock";
ROUTE1651.toField = "set_fraction";
ROUTE1651.toNode = "Armature_OI_c6";
browser.currentScene.children[308] = ROUTE1651;

let ROUTE1652 = browser.currentScene.createNode("ROUTE");
ROUTE1652.fromField = "value_changed";
ROUTE1652.fromNode = "Armature_OI_c6";
ROUTE1652.toField = "rotation";
ROUTE1652.toNode = "hanim_c6";
browser.currentScene.children[309] = ROUTE1652;

let ROUTE1653 = browser.currentScene.createNode("ROUTE");
ROUTE1653.fromField = "fraction_changed";
ROUTE1653.fromNode = "Armature_Clock";
ROUTE1653.toField = "set_fraction";
ROUTE1653.toNode = "Armature_OI_c5";
browser.currentScene.children[310] = ROUTE1653;

let ROUTE1654 = browser.currentScene.createNode("ROUTE");
ROUTE1654.fromField = "value_changed";
ROUTE1654.fromNode = "Armature_OI_c5";
ROUTE1654.toField = "rotation";
ROUTE1654.toNode = "hanim_c5";
browser.currentScene.children[311] = ROUTE1654;

let ROUTE1655 = browser.currentScene.createNode("ROUTE");
ROUTE1655.fromField = "fraction_changed";
ROUTE1655.fromNode = "Armature_Clock";
ROUTE1655.toField = "set_fraction";
ROUTE1655.toNode = "Armature_OI_c4";
browser.currentScene.children[312] = ROUTE1655;

let ROUTE1656 = browser.currentScene.createNode("ROUTE");
ROUTE1656.fromField = "value_changed";
ROUTE1656.fromNode = "Armature_OI_c4";
ROUTE1656.toField = "rotation";
ROUTE1656.toNode = "hanim_c4";
browser.currentScene.children[313] = ROUTE1656;

let ROUTE1657 = browser.currentScene.createNode("ROUTE");
ROUTE1657.fromField = "fraction_changed";
ROUTE1657.fromNode = "Armature_Clock";
ROUTE1657.toField = "set_fraction";
ROUTE1657.toNode = "Armature_OI_c3";
browser.currentScene.children[314] = ROUTE1657;

let ROUTE1658 = browser.currentScene.createNode("ROUTE");
ROUTE1658.fromField = "value_changed";
ROUTE1658.fromNode = "Armature_OI_c3";
ROUTE1658.toField = "rotation";
ROUTE1658.toNode = "hanim_c3";
browser.currentScene.children[315] = ROUTE1658;

let ROUTE1659 = browser.currentScene.createNode("ROUTE");
ROUTE1659.fromField = "fraction_changed";
ROUTE1659.fromNode = "Armature_Clock";
ROUTE1659.toField = "set_fraction";
ROUTE1659.toNode = "Armature_OI_c2";
browser.currentScene.children[316] = ROUTE1659;

let ROUTE1660 = browser.currentScene.createNode("ROUTE");
ROUTE1660.fromField = "value_changed";
ROUTE1660.fromNode = "Armature_OI_c2";
ROUTE1660.toField = "rotation";
ROUTE1660.toNode = "hanim_c2";
browser.currentScene.children[317] = ROUTE1660;

let ROUTE1661 = browser.currentScene.createNode("ROUTE");
ROUTE1661.fromField = "fraction_changed";
ROUTE1661.fromNode = "Armature_Clock";
ROUTE1661.toField = "set_fraction";
ROUTE1661.toNode = "Armature_OI_c1";
browser.currentScene.children[318] = ROUTE1661;

let ROUTE1662 = browser.currentScene.createNode("ROUTE");
ROUTE1662.fromField = "value_changed";
ROUTE1662.fromNode = "Armature_OI_c1";
ROUTE1662.toField = "rotation";
ROUTE1662.toNode = "hanim_c1";
browser.currentScene.children[319] = ROUTE1662;

let ROUTE1663 = browser.currentScene.createNode("ROUTE");
ROUTE1663.fromField = "fraction_changed";
ROUTE1663.fromNode = "Armature_Clock";
ROUTE1663.toField = "set_fraction";
ROUTE1663.toNode = "Armature_OI_skull";
browser.currentScene.children[320] = ROUTE1663;

let ROUTE1664 = browser.currentScene.createNode("ROUTE");
ROUTE1664.fromField = "value_changed";
ROUTE1664.fromNode = "Armature_OI_skull";
ROUTE1664.toField = "rotation";
ROUTE1664.toNode = "hanim_skull";
browser.currentScene.children[321] = ROUTE1664;

let ROUTE1665 = browser.currentScene.createNode("ROUTE");
ROUTE1665.fromField = "fraction_changed";
ROUTE1665.fromNode = "Armature_Clock";
ROUTE1665.toField = "set_fraction";
ROUTE1665.toNode = "Armature_OI_l_eyelid";
browser.currentScene.children[322] = ROUTE1665;

let ROUTE1666 = browser.currentScene.createNode("ROUTE");
ROUTE1666.fromField = "value_changed";
ROUTE1666.fromNode = "Armature_OI_l_eyelid";
ROUTE1666.toField = "rotation";
ROUTE1666.toNode = "hanim_l_eyelid";
browser.currentScene.children[323] = ROUTE1666;

let ROUTE1667 = browser.currentScene.createNode("ROUTE");
ROUTE1667.fromField = "fraction_changed";
ROUTE1667.fromNode = "Armature_Clock";
ROUTE1667.toField = "set_fraction";
ROUTE1667.toNode = "Armature_OI_r_eyelid";
browser.currentScene.children[324] = ROUTE1667;

let ROUTE1668 = browser.currentScene.createNode("ROUTE");
ROUTE1668.fromField = "value_changed";
ROUTE1668.fromNode = "Armature_OI_r_eyelid";
ROUTE1668.toField = "rotation";
ROUTE1668.toNode = "hanim_r_eyelid";
browser.currentScene.children[325] = ROUTE1668;

let ROUTE1669 = browser.currentScene.createNode("ROUTE");
ROUTE1669.fromField = "fraction_changed";
ROUTE1669.fromNode = "Armature_Clock";
ROUTE1669.toField = "set_fraction";
ROUTE1669.toNode = "Armature_OI_l_eyeball";
browser.currentScene.children[326] = ROUTE1669;

let ROUTE1670 = browser.currentScene.createNode("ROUTE");
ROUTE1670.fromField = "value_changed";
ROUTE1670.fromNode = "Armature_OI_l_eyeball";
ROUTE1670.toField = "rotation";
ROUTE1670.toNode = "hanim_l_eyeball";
browser.currentScene.children[327] = ROUTE1670;

let ROUTE1671 = browser.currentScene.createNode("ROUTE");
ROUTE1671.fromField = "fraction_changed";
ROUTE1671.fromNode = "Armature_Clock";
ROUTE1671.toField = "set_fraction";
ROUTE1671.toNode = "Armature_OI_r_eyeball";
browser.currentScene.children[328] = ROUTE1671;

let ROUTE1672 = browser.currentScene.createNode("ROUTE");
ROUTE1672.fromField = "value_changed";
ROUTE1672.fromNode = "Armature_OI_r_eyeball";
ROUTE1672.toField = "rotation";
ROUTE1672.toNode = "hanim_r_eyeball";
browser.currentScene.children[329] = ROUTE1672;

let ROUTE1673 = browser.currentScene.createNode("ROUTE");
ROUTE1673.fromField = "fraction_changed";
ROUTE1673.fromNode = "Armature_Clock";
ROUTE1673.toField = "set_fraction";
ROUTE1673.toNode = "Armature_OI_l_eyebrow";
browser.currentScene.children[330] = ROUTE1673;

let ROUTE1674 = browser.currentScene.createNode("ROUTE");
ROUTE1674.fromField = "value_changed";
ROUTE1674.fromNode = "Armature_OI_l_eyebrow";
ROUTE1674.toField = "rotation";
ROUTE1674.toNode = "hanim_l_eyebrow";
browser.currentScene.children[331] = ROUTE1674;

let ROUTE1675 = browser.currentScene.createNode("ROUTE");
ROUTE1675.fromField = "fraction_changed";
ROUTE1675.fromNode = "Armature_Clock";
ROUTE1675.toField = "set_fraction";
ROUTE1675.toNode = "Armature_OI_r_eyebrow";
browser.currentScene.children[332] = ROUTE1675;

let ROUTE1676 = browser.currentScene.createNode("ROUTE");
ROUTE1676.fromField = "value_changed";
ROUTE1676.fromNode = "Armature_OI_r_eyebrow";
ROUTE1676.toField = "rotation";
ROUTE1676.toNode = "hanim_r_eyebrow";
browser.currentScene.children[333] = ROUTE1676;

let ROUTE1677 = browser.currentScene.createNode("ROUTE");
ROUTE1677.fromField = "fraction_changed";
ROUTE1677.fromNode = "Armature_Clock";
ROUTE1677.toField = "set_fraction";
ROUTE1677.toNode = "Armature_OI_jaw";
browser.currentScene.children[334] = ROUTE1677;

let ROUTE1678 = browser.currentScene.createNode("ROUTE");
ROUTE1678.fromField = "value_changed";
ROUTE1678.fromNode = "Armature_OI_jaw";
ROUTE1678.toField = "rotation";
ROUTE1678.toNode = "hanim_jaw";
browser.currentScene.children[335] = ROUTE1678;

let ROUTE1679 = browser.currentScene.createNode("ROUTE");
ROUTE1679.fromField = "fraction_changed";
ROUTE1679.fromNode = "Armature_Clock";
ROUTE1679.toField = "set_fraction";
ROUTE1679.toNode = "Armature_OI_l_clavicle";
browser.currentScene.children[336] = ROUTE1679;

let ROUTE1680 = browser.currentScene.createNode("ROUTE");
ROUTE1680.fromField = "value_changed";
ROUTE1680.fromNode = "Armature_OI_l_clavicle";
ROUTE1680.toField = "rotation";
ROUTE1680.toNode = "hanim_l_clavicle";
browser.currentScene.children[337] = ROUTE1680;

let ROUTE1681 = browser.currentScene.createNode("ROUTE");
ROUTE1681.fromField = "fraction_changed";
ROUTE1681.fromNode = "Armature_Clock";
ROUTE1681.toField = "set_fraction";
ROUTE1681.toNode = "Armature_OI_l_scapula";
browser.currentScene.children[338] = ROUTE1681;

let ROUTE1682 = browser.currentScene.createNode("ROUTE");
ROUTE1682.fromField = "value_changed";
ROUTE1682.fromNode = "Armature_OI_l_scapula";
ROUTE1682.toField = "rotation";
ROUTE1682.toNode = "hanim_l_scapula";
browser.currentScene.children[339] = ROUTE1682;

let ROUTE1683 = browser.currentScene.createNode("ROUTE");
ROUTE1683.fromField = "fraction_changed";
ROUTE1683.fromNode = "Armature_Clock";
ROUTE1683.toField = "set_fraction";
ROUTE1683.toNode = "Armature_OI_l_upperarm";
browser.currentScene.children[340] = ROUTE1683;

let ROUTE1684 = browser.currentScene.createNode("ROUTE");
ROUTE1684.fromField = "value_changed";
ROUTE1684.fromNode = "Armature_OI_l_upperarm";
ROUTE1684.toField = "rotation";
ROUTE1684.toNode = "hanim_l_upperarm";
browser.currentScene.children[341] = ROUTE1684;

let ROUTE1685 = browser.currentScene.createNode("ROUTE");
ROUTE1685.fromField = "fraction_changed";
ROUTE1685.fromNode = "Armature_Clock";
ROUTE1685.toField = "set_fraction";
ROUTE1685.toNode = "Armature_OI_l_forearm";
browser.currentScene.children[342] = ROUTE1685;

let ROUTE1686 = browser.currentScene.createNode("ROUTE");
ROUTE1686.fromField = "value_changed";
ROUTE1686.fromNode = "Armature_OI_l_forearm";
ROUTE1686.toField = "rotation";
ROUTE1686.toNode = "hanim_l_forearm";
browser.currentScene.children[343] = ROUTE1686;

let ROUTE1687 = browser.currentScene.createNode("ROUTE");
ROUTE1687.fromField = "fraction_changed";
ROUTE1687.fromNode = "Armature_Clock";
ROUTE1687.toField = "set_fraction";
ROUTE1687.toNode = "Armature_OI_l_carpal";
browser.currentScene.children[344] = ROUTE1687;

let ROUTE1688 = browser.currentScene.createNode("ROUTE");
ROUTE1688.fromField = "value_changed";
ROUTE1688.fromNode = "Armature_OI_l_carpal";
ROUTE1688.toField = "rotation";
ROUTE1688.toNode = "hanim_l_carpal";
browser.currentScene.children[345] = ROUTE1688;

let ROUTE1689 = browser.currentScene.createNode("ROUTE");
ROUTE1689.fromField = "fraction_changed";
ROUTE1689.fromNode = "Armature_Clock";
ROUTE1689.toField = "set_fraction";
ROUTE1689.toNode = "Armature_OI_l_trapezium";
browser.currentScene.children[346] = ROUTE1689;

let ROUTE1690 = browser.currentScene.createNode("ROUTE");
ROUTE1690.fromField = "value_changed";
ROUTE1690.fromNode = "Armature_OI_l_trapezium";
ROUTE1690.toField = "rotation";
ROUTE1690.toNode = "hanim_l_trapezium";
browser.currentScene.children[347] = ROUTE1690;

let ROUTE1691 = browser.currentScene.createNode("ROUTE");
ROUTE1691.fromField = "fraction_changed";
ROUTE1691.fromNode = "Armature_Clock";
ROUTE1691.toField = "set_fraction";
ROUTE1691.toNode = "Armature_OI_l_metacarpal_1";
browser.currentScene.children[348] = ROUTE1691;

let ROUTE1692 = browser.currentScene.createNode("ROUTE");
ROUTE1692.fromField = "value_changed";
ROUTE1692.fromNode = "Armature_OI_l_metacarpal_1";
ROUTE1692.toField = "rotation";
ROUTE1692.toNode = "hanim_l_metacarpal_1";
browser.currentScene.children[349] = ROUTE1692;

let ROUTE1693 = browser.currentScene.createNode("ROUTE");
ROUTE1693.fromField = "fraction_changed";
ROUTE1693.fromNode = "Armature_Clock";
ROUTE1693.toField = "set_fraction";
ROUTE1693.toNode = "Armature_OI_l_carpal_proximal_phalanx_1";
browser.currentScene.children[350] = ROUTE1693;

let ROUTE1694 = browser.currentScene.createNode("ROUTE");
ROUTE1694.fromField = "value_changed";
ROUTE1694.fromNode = "Armature_OI_l_carpal_proximal_phalanx_1";
ROUTE1694.toField = "rotation";
ROUTE1694.toNode = "hanim_l_carpal_proximal_phalanx_1";
browser.currentScene.children[351] = ROUTE1694;

let ROUTE1695 = browser.currentScene.createNode("ROUTE");
ROUTE1695.fromField = "fraction_changed";
ROUTE1695.fromNode = "Armature_Clock";
ROUTE1695.toField = "set_fraction";
ROUTE1695.toNode = "Armature_OI_l_carpal_distal_phalanx_1";
browser.currentScene.children[352] = ROUTE1695;

let ROUTE1696 = browser.currentScene.createNode("ROUTE");
ROUTE1696.fromField = "value_changed";
ROUTE1696.fromNode = "Armature_OI_l_carpal_distal_phalanx_1";
ROUTE1696.toField = "rotation";
ROUTE1696.toNode = "hanim_l_carpal_distal_phalanx_1";
browser.currentScene.children[353] = ROUTE1696;

let ROUTE1697 = browser.currentScene.createNode("ROUTE");
ROUTE1697.fromField = "fraction_changed";
ROUTE1697.fromNode = "Armature_Clock";
ROUTE1697.toField = "set_fraction";
ROUTE1697.toNode = "Armature_OI_l_trapezoid";
browser.currentScene.children[354] = ROUTE1697;

let ROUTE1698 = browser.currentScene.createNode("ROUTE");
ROUTE1698.fromField = "value_changed";
ROUTE1698.fromNode = "Armature_OI_l_trapezoid";
ROUTE1698.toField = "rotation";
ROUTE1698.toNode = "hanim_l_trapezoid";
browser.currentScene.children[355] = ROUTE1698;

let ROUTE1699 = browser.currentScene.createNode("ROUTE");
ROUTE1699.fromField = "fraction_changed";
ROUTE1699.fromNode = "Armature_Clock";
ROUTE1699.toField = "set_fraction";
ROUTE1699.toNode = "Armature_OI_l_metacarpal_2";
browser.currentScene.children[356] = ROUTE1699;

let ROUTE1700 = browser.currentScene.createNode("ROUTE");
ROUTE1700.fromField = "value_changed";
ROUTE1700.fromNode = "Armature_OI_l_metacarpal_2";
ROUTE1700.toField = "rotation";
ROUTE1700.toNode = "hanim_l_metacarpal_2";
browser.currentScene.children[357] = ROUTE1700;

let ROUTE1701 = browser.currentScene.createNode("ROUTE");
ROUTE1701.fromField = "fraction_changed";
ROUTE1701.fromNode = "Armature_Clock";
ROUTE1701.toField = "set_fraction";
ROUTE1701.toNode = "Armature_OI_l_carpal_proximal_phalanx_2";
browser.currentScene.children[358] = ROUTE1701;

let ROUTE1702 = browser.currentScene.createNode("ROUTE");
ROUTE1702.fromField = "value_changed";
ROUTE1702.fromNode = "Armature_OI_l_carpal_proximal_phalanx_2";
ROUTE1702.toField = "rotation";
ROUTE1702.toNode = "hanim_l_carpal_proximal_phalanx_2";
browser.currentScene.children[359] = ROUTE1702;

let ROUTE1703 = browser.currentScene.createNode("ROUTE");
ROUTE1703.fromField = "fraction_changed";
ROUTE1703.fromNode = "Armature_Clock";
ROUTE1703.toField = "set_fraction";
ROUTE1703.toNode = "Armature_OI_l_carpal_middle_phalanx_2";
browser.currentScene.children[360] = ROUTE1703;

let ROUTE1704 = browser.currentScene.createNode("ROUTE");
ROUTE1704.fromField = "value_changed";
ROUTE1704.fromNode = "Armature_OI_l_carpal_middle_phalanx_2";
ROUTE1704.toField = "rotation";
ROUTE1704.toNode = "hanim_l_carpal_middle_phalanx_2";
browser.currentScene.children[361] = ROUTE1704;

let ROUTE1705 = browser.currentScene.createNode("ROUTE");
ROUTE1705.fromField = "fraction_changed";
ROUTE1705.fromNode = "Armature_Clock";
ROUTE1705.toField = "set_fraction";
ROUTE1705.toNode = "Armature_OI_l_carpal_distal_phalanx_2";
browser.currentScene.children[362] = ROUTE1705;

let ROUTE1706 = browser.currentScene.createNode("ROUTE");
ROUTE1706.fromField = "value_changed";
ROUTE1706.fromNode = "Armature_OI_l_carpal_distal_phalanx_2";
ROUTE1706.toField = "rotation";
ROUTE1706.toNode = "hanim_l_carpal_distal_phalanx_2";
browser.currentScene.children[363] = ROUTE1706;

let ROUTE1707 = browser.currentScene.createNode("ROUTE");
ROUTE1707.fromField = "fraction_changed";
ROUTE1707.fromNode = "Armature_Clock";
ROUTE1707.toField = "set_fraction";
ROUTE1707.toNode = "Armature_OI_l_capitate";
browser.currentScene.children[364] = ROUTE1707;

let ROUTE1708 = browser.currentScene.createNode("ROUTE");
ROUTE1708.fromField = "value_changed";
ROUTE1708.fromNode = "Armature_OI_l_capitate";
ROUTE1708.toField = "rotation";
ROUTE1708.toNode = "hanim_l_capitate";
browser.currentScene.children[365] = ROUTE1708;

let ROUTE1709 = browser.currentScene.createNode("ROUTE");
ROUTE1709.fromField = "fraction_changed";
ROUTE1709.fromNode = "Armature_Clock";
ROUTE1709.toField = "set_fraction";
ROUTE1709.toNode = "Armature_OI_l_metacarpal_3";
browser.currentScene.children[366] = ROUTE1709;

let ROUTE1710 = browser.currentScene.createNode("ROUTE");
ROUTE1710.fromField = "value_changed";
ROUTE1710.fromNode = "Armature_OI_l_metacarpal_3";
ROUTE1710.toField = "rotation";
ROUTE1710.toNode = "hanim_l_metacarpal_3";
browser.currentScene.children[367] = ROUTE1710;

let ROUTE1711 = browser.currentScene.createNode("ROUTE");
ROUTE1711.fromField = "fraction_changed";
ROUTE1711.fromNode = "Armature_Clock";
ROUTE1711.toField = "set_fraction";
ROUTE1711.toNode = "Armature_OI_l_carpal_proximal_phalanx_3";
browser.currentScene.children[368] = ROUTE1711;

let ROUTE1712 = browser.currentScene.createNode("ROUTE");
ROUTE1712.fromField = "value_changed";
ROUTE1712.fromNode = "Armature_OI_l_carpal_proximal_phalanx_3";
ROUTE1712.toField = "rotation";
ROUTE1712.toNode = "hanim_l_carpal_proximal_phalanx_3";
browser.currentScene.children[369] = ROUTE1712;

let ROUTE1713 = browser.currentScene.createNode("ROUTE");
ROUTE1713.fromField = "fraction_changed";
ROUTE1713.fromNode = "Armature_Clock";
ROUTE1713.toField = "set_fraction";
ROUTE1713.toNode = "Armature_OI_l_carpal_middle_phalanx_3";
browser.currentScene.children[370] = ROUTE1713;

let ROUTE1714 = browser.currentScene.createNode("ROUTE");
ROUTE1714.fromField = "value_changed";
ROUTE1714.fromNode = "Armature_OI_l_carpal_middle_phalanx_3";
ROUTE1714.toField = "rotation";
ROUTE1714.toNode = "hanim_l_carpal_middle_phalanx_3";
browser.currentScene.children[371] = ROUTE1714;

let ROUTE1715 = browser.currentScene.createNode("ROUTE");
ROUTE1715.fromField = "fraction_changed";
ROUTE1715.fromNode = "Armature_Clock";
ROUTE1715.toField = "set_fraction";
ROUTE1715.toNode = "Armature_OI_l_carpal_distal_phalanx_3";
browser.currentScene.children[372] = ROUTE1715;

let ROUTE1716 = browser.currentScene.createNode("ROUTE");
ROUTE1716.fromField = "value_changed";
ROUTE1716.fromNode = "Armature_OI_l_carpal_distal_phalanx_3";
ROUTE1716.toField = "rotation";
ROUTE1716.toNode = "hanim_l_carpal_distal_phalanx_3";
browser.currentScene.children[373] = ROUTE1716;

let ROUTE1717 = browser.currentScene.createNode("ROUTE");
ROUTE1717.fromField = "fraction_changed";
ROUTE1717.fromNode = "Armature_Clock";
ROUTE1717.toField = "set_fraction";
ROUTE1717.toNode = "Armature_OI_l_hamate";
browser.currentScene.children[374] = ROUTE1717;

let ROUTE1718 = browser.currentScene.createNode("ROUTE");
ROUTE1718.fromField = "value_changed";
ROUTE1718.fromNode = "Armature_OI_l_hamate";
ROUTE1718.toField = "rotation";
ROUTE1718.toNode = "hanim_l_hamate";
browser.currentScene.children[375] = ROUTE1718;

let ROUTE1719 = browser.currentScene.createNode("ROUTE");
ROUTE1719.fromField = "fraction_changed";
ROUTE1719.fromNode = "Armature_Clock";
ROUTE1719.toField = "set_fraction";
ROUTE1719.toNode = "Armature_OI_l_metacarpal_4";
browser.currentScene.children[376] = ROUTE1719;

let ROUTE1720 = browser.currentScene.createNode("ROUTE");
ROUTE1720.fromField = "value_changed";
ROUTE1720.fromNode = "Armature_OI_l_metacarpal_4";
ROUTE1720.toField = "rotation";
ROUTE1720.toNode = "hanim_l_metacarpal_4";
browser.currentScene.children[377] = ROUTE1720;

let ROUTE1721 = browser.currentScene.createNode("ROUTE");
ROUTE1721.fromField = "fraction_changed";
ROUTE1721.fromNode = "Armature_Clock";
ROUTE1721.toField = "set_fraction";
ROUTE1721.toNode = "Armature_OI_l_carpal_proximal_phalanx_4";
browser.currentScene.children[378] = ROUTE1721;

let ROUTE1722 = browser.currentScene.createNode("ROUTE");
ROUTE1722.fromField = "value_changed";
ROUTE1722.fromNode = "Armature_OI_l_carpal_proximal_phalanx_4";
ROUTE1722.toField = "rotation";
ROUTE1722.toNode = "hanim_l_carpal_proximal_phalanx_4";
browser.currentScene.children[379] = ROUTE1722;

let ROUTE1723 = browser.currentScene.createNode("ROUTE");
ROUTE1723.fromField = "fraction_changed";
ROUTE1723.fromNode = "Armature_Clock";
ROUTE1723.toField = "set_fraction";
ROUTE1723.toNode = "Armature_OI_l_carpal_middle_phalanx_4";
browser.currentScene.children[380] = ROUTE1723;

let ROUTE1724 = browser.currentScene.createNode("ROUTE");
ROUTE1724.fromField = "value_changed";
ROUTE1724.fromNode = "Armature_OI_l_carpal_middle_phalanx_4";
ROUTE1724.toField = "rotation";
ROUTE1724.toNode = "hanim_l_carpal_middle_phalanx_4";
browser.currentScene.children[381] = ROUTE1724;

let ROUTE1725 = browser.currentScene.createNode("ROUTE");
ROUTE1725.fromField = "fraction_changed";
ROUTE1725.fromNode = "Armature_Clock";
ROUTE1725.toField = "set_fraction";
ROUTE1725.toNode = "Armature_OI_l_carpal_distal_phalanx_4";
browser.currentScene.children[382] = ROUTE1725;

let ROUTE1726 = browser.currentScene.createNode("ROUTE");
ROUTE1726.fromField = "value_changed";
ROUTE1726.fromNode = "Armature_OI_l_carpal_distal_phalanx_4";
ROUTE1726.toField = "rotation";
ROUTE1726.toNode = "hanim_l_carpal_distal_phalanx_4";
browser.currentScene.children[383] = ROUTE1726;

let ROUTE1727 = browser.currentScene.createNode("ROUTE");
ROUTE1727.fromField = "fraction_changed";
ROUTE1727.fromNode = "Armature_Clock";
ROUTE1727.toField = "set_fraction";
ROUTE1727.toNode = "Armature_OI_l_metacarpal_5";
browser.currentScene.children[384] = ROUTE1727;

let ROUTE1728 = browser.currentScene.createNode("ROUTE");
ROUTE1728.fromField = "value_changed";
ROUTE1728.fromNode = "Armature_OI_l_metacarpal_5";
ROUTE1728.toField = "rotation";
ROUTE1728.toNode = "hanim_l_metacarpal_5";
browser.currentScene.children[385] = ROUTE1728;

let ROUTE1729 = browser.currentScene.createNode("ROUTE");
ROUTE1729.fromField = "fraction_changed";
ROUTE1729.fromNode = "Armature_Clock";
ROUTE1729.toField = "set_fraction";
ROUTE1729.toNode = "Armature_OI_l_carpal_proximal_phalanx_5";
browser.currentScene.children[386] = ROUTE1729;

let ROUTE1730 = browser.currentScene.createNode("ROUTE");
ROUTE1730.fromField = "value_changed";
ROUTE1730.fromNode = "Armature_OI_l_carpal_proximal_phalanx_5";
ROUTE1730.toField = "rotation";
ROUTE1730.toNode = "hanim_l_carpal_proximal_phalanx_5";
browser.currentScene.children[387] = ROUTE1730;

let ROUTE1731 = browser.currentScene.createNode("ROUTE");
ROUTE1731.fromField = "fraction_changed";
ROUTE1731.fromNode = "Armature_Clock";
ROUTE1731.toField = "set_fraction";
ROUTE1731.toNode = "Armature_OI_l_carpal_middle_phalanx_5";
browser.currentScene.children[388] = ROUTE1731;

let ROUTE1732 = browser.currentScene.createNode("ROUTE");
ROUTE1732.fromField = "value_changed";
ROUTE1732.fromNode = "Armature_OI_l_carpal_middle_phalanx_5";
ROUTE1732.toField = "rotation";
ROUTE1732.toNode = "hanim_l_carpal_middle_phalanx_5";
browser.currentScene.children[389] = ROUTE1732;

let ROUTE1733 = browser.currentScene.createNode("ROUTE");
ROUTE1733.fromField = "fraction_changed";
ROUTE1733.fromNode = "Armature_Clock";
ROUTE1733.toField = "set_fraction";
ROUTE1733.toNode = "Armature_OI_l_carpal_distal_phalanx_5";
browser.currentScene.children[390] = ROUTE1733;

let ROUTE1734 = browser.currentScene.createNode("ROUTE");
ROUTE1734.fromField = "value_changed";
ROUTE1734.fromNode = "Armature_OI_l_carpal_distal_phalanx_5";
ROUTE1734.toField = "rotation";
ROUTE1734.toNode = "hanim_l_carpal_distal_phalanx_5";
browser.currentScene.children[391] = ROUTE1734;

let ROUTE1735 = browser.currentScene.createNode("ROUTE");
ROUTE1735.fromField = "fraction_changed";
ROUTE1735.fromNode = "Armature_Clock";
ROUTE1735.toField = "set_fraction";
ROUTE1735.toNode = "Armature_OI_r_clavicle";
browser.currentScene.children[392] = ROUTE1735;

let ROUTE1736 = browser.currentScene.createNode("ROUTE");
ROUTE1736.fromField = "value_changed";
ROUTE1736.fromNode = "Armature_OI_r_clavicle";
ROUTE1736.toField = "rotation";
ROUTE1736.toNode = "hanim_r_clavicle";
browser.currentScene.children[393] = ROUTE1736;

let ROUTE1737 = browser.currentScene.createNode("ROUTE");
ROUTE1737.fromField = "fraction_changed";
ROUTE1737.fromNode = "Armature_Clock";
ROUTE1737.toField = "set_fraction";
ROUTE1737.toNode = "Armature_OI_r_scapula";
browser.currentScene.children[394] = ROUTE1737;

let ROUTE1738 = browser.currentScene.createNode("ROUTE");
ROUTE1738.fromField = "value_changed";
ROUTE1738.fromNode = "Armature_OI_r_scapula";
ROUTE1738.toField = "rotation";
ROUTE1738.toNode = "hanim_r_scapula";
browser.currentScene.children[395] = ROUTE1738;

let ROUTE1739 = browser.currentScene.createNode("ROUTE");
ROUTE1739.fromField = "fraction_changed";
ROUTE1739.fromNode = "Armature_Clock";
ROUTE1739.toField = "set_fraction";
ROUTE1739.toNode = "Armature_OI_r_upperarm";
browser.currentScene.children[396] = ROUTE1739;

let ROUTE1740 = browser.currentScene.createNode("ROUTE");
ROUTE1740.fromField = "value_changed";
ROUTE1740.fromNode = "Armature_OI_r_upperarm";
ROUTE1740.toField = "rotation";
ROUTE1740.toNode = "hanim_r_upperarm";
browser.currentScene.children[397] = ROUTE1740;

let ROUTE1741 = browser.currentScene.createNode("ROUTE");
ROUTE1741.fromField = "fraction_changed";
ROUTE1741.fromNode = "Armature_Clock";
ROUTE1741.toField = "set_fraction";
ROUTE1741.toNode = "Armature_OI_r_forearm";
browser.currentScene.children[398] = ROUTE1741;

let ROUTE1742 = browser.currentScene.createNode("ROUTE");
ROUTE1742.fromField = "value_changed";
ROUTE1742.fromNode = "Armature_OI_r_forearm";
ROUTE1742.toField = "rotation";
ROUTE1742.toNode = "hanim_r_forearm";
browser.currentScene.children[399] = ROUTE1742;

let ROUTE1743 = browser.currentScene.createNode("ROUTE");
ROUTE1743.fromField = "fraction_changed";
ROUTE1743.fromNode = "Armature_Clock";
ROUTE1743.toField = "set_fraction";
ROUTE1743.toNode = "Armature_OI_r_carpal";
browser.currentScene.children[400] = ROUTE1743;

let ROUTE1744 = browser.currentScene.createNode("ROUTE");
ROUTE1744.fromField = "value_changed";
ROUTE1744.fromNode = "Armature_OI_r_carpal";
ROUTE1744.toField = "rotation";
ROUTE1744.toNode = "hanim_r_carpal";
browser.currentScene.children[401] = ROUTE1744;

let ROUTE1745 = browser.currentScene.createNode("ROUTE");
ROUTE1745.fromField = "fraction_changed";
ROUTE1745.fromNode = "Armature_Clock";
ROUTE1745.toField = "set_fraction";
ROUTE1745.toNode = "Armature_OI_r_trapezium";
browser.currentScene.children[402] = ROUTE1745;

let ROUTE1746 = browser.currentScene.createNode("ROUTE");
ROUTE1746.fromField = "value_changed";
ROUTE1746.fromNode = "Armature_OI_r_trapezium";
ROUTE1746.toField = "rotation";
ROUTE1746.toNode = "hanim_r_trapezium";
browser.currentScene.children[403] = ROUTE1746;

let ROUTE1747 = browser.currentScene.createNode("ROUTE");
ROUTE1747.fromField = "fraction_changed";
ROUTE1747.fromNode = "Armature_Clock";
ROUTE1747.toField = "set_fraction";
ROUTE1747.toNode = "Armature_OI_r_metacarpal_1";
browser.currentScene.children[404] = ROUTE1747;

let ROUTE1748 = browser.currentScene.createNode("ROUTE");
ROUTE1748.fromField = "value_changed";
ROUTE1748.fromNode = "Armature_OI_r_metacarpal_1";
ROUTE1748.toField = "rotation";
ROUTE1748.toNode = "hanim_r_metacarpal_1";
browser.currentScene.children[405] = ROUTE1748;

let ROUTE1749 = browser.currentScene.createNode("ROUTE");
ROUTE1749.fromField = "fraction_changed";
ROUTE1749.fromNode = "Armature_Clock";
ROUTE1749.toField = "set_fraction";
ROUTE1749.toNode = "Armature_OI_r_carpal_proximal_phalanx_1";
browser.currentScene.children[406] = ROUTE1749;

let ROUTE1750 = browser.currentScene.createNode("ROUTE");
ROUTE1750.fromField = "value_changed";
ROUTE1750.fromNode = "Armature_OI_r_carpal_proximal_phalanx_1";
ROUTE1750.toField = "rotation";
ROUTE1750.toNode = "hanim_r_carpal_proximal_phalanx_1";
browser.currentScene.children[407] = ROUTE1750;

let ROUTE1751 = browser.currentScene.createNode("ROUTE");
ROUTE1751.fromField = "fraction_changed";
ROUTE1751.fromNode = "Armature_Clock";
ROUTE1751.toField = "set_fraction";
ROUTE1751.toNode = "Armature_OI_r_carpal_distal_phalanx_1";
browser.currentScene.children[408] = ROUTE1751;

let ROUTE1752 = browser.currentScene.createNode("ROUTE");
ROUTE1752.fromField = "value_changed";
ROUTE1752.fromNode = "Armature_OI_r_carpal_distal_phalanx_1";
ROUTE1752.toField = "rotation";
ROUTE1752.toNode = "hanim_r_carpal_distal_phalanx_1";
browser.currentScene.children[409] = ROUTE1752;

let ROUTE1753 = browser.currentScene.createNode("ROUTE");
ROUTE1753.fromField = "fraction_changed";
ROUTE1753.fromNode = "Armature_Clock";
ROUTE1753.toField = "set_fraction";
ROUTE1753.toNode = "Armature_OI_r_trapezoid";
browser.currentScene.children[410] = ROUTE1753;

let ROUTE1754 = browser.currentScene.createNode("ROUTE");
ROUTE1754.fromField = "value_changed";
ROUTE1754.fromNode = "Armature_OI_r_trapezoid";
ROUTE1754.toField = "rotation";
ROUTE1754.toNode = "hanim_r_trapezoid";
browser.currentScene.children[411] = ROUTE1754;

let ROUTE1755 = browser.currentScene.createNode("ROUTE");
ROUTE1755.fromField = "fraction_changed";
ROUTE1755.fromNode = "Armature_Clock";
ROUTE1755.toField = "set_fraction";
ROUTE1755.toNode = "Armature_OI_r_metacarpal_2";
browser.currentScene.children[412] = ROUTE1755;

let ROUTE1756 = browser.currentScene.createNode("ROUTE");
ROUTE1756.fromField = "value_changed";
ROUTE1756.fromNode = "Armature_OI_r_metacarpal_2";
ROUTE1756.toField = "rotation";
ROUTE1756.toNode = "hanim_r_metacarpal_2";
browser.currentScene.children[413] = ROUTE1756;

let ROUTE1757 = browser.currentScene.createNode("ROUTE");
ROUTE1757.fromField = "fraction_changed";
ROUTE1757.fromNode = "Armature_Clock";
ROUTE1757.toField = "set_fraction";
ROUTE1757.toNode = "Armature_OI_r_carpal_proximal_phalanx_2";
browser.currentScene.children[414] = ROUTE1757;

let ROUTE1758 = browser.currentScene.createNode("ROUTE");
ROUTE1758.fromField = "value_changed";
ROUTE1758.fromNode = "Armature_OI_r_carpal_proximal_phalanx_2";
ROUTE1758.toField = "rotation";
ROUTE1758.toNode = "hanim_r_carpal_proximal_phalanx_2";
browser.currentScene.children[415] = ROUTE1758;

let ROUTE1759 = browser.currentScene.createNode("ROUTE");
ROUTE1759.fromField = "fraction_changed";
ROUTE1759.fromNode = "Armature_Clock";
ROUTE1759.toField = "set_fraction";
ROUTE1759.toNode = "Armature_OI_r_carpal_middle_phalanx_2";
browser.currentScene.children[416] = ROUTE1759;

let ROUTE1760 = browser.currentScene.createNode("ROUTE");
ROUTE1760.fromField = "value_changed";
ROUTE1760.fromNode = "Armature_OI_r_carpal_middle_phalanx_2";
ROUTE1760.toField = "rotation";
ROUTE1760.toNode = "hanim_r_carpal_middle_phalanx_2";
browser.currentScene.children[417] = ROUTE1760;

let ROUTE1761 = browser.currentScene.createNode("ROUTE");
ROUTE1761.fromField = "fraction_changed";
ROUTE1761.fromNode = "Armature_Clock";
ROUTE1761.toField = "set_fraction";
ROUTE1761.toNode = "Armature_OI_r_carpal_distal_phalanx_2";
browser.currentScene.children[418] = ROUTE1761;

let ROUTE1762 = browser.currentScene.createNode("ROUTE");
ROUTE1762.fromField = "value_changed";
ROUTE1762.fromNode = "Armature_OI_r_carpal_distal_phalanx_2";
ROUTE1762.toField = "rotation";
ROUTE1762.toNode = "hanim_r_carpal_distal_phalanx_2";
browser.currentScene.children[419] = ROUTE1762;

let ROUTE1763 = browser.currentScene.createNode("ROUTE");
ROUTE1763.fromField = "fraction_changed";
ROUTE1763.fromNode = "Armature_Clock";
ROUTE1763.toField = "set_fraction";
ROUTE1763.toNode = "Armature_OI_r_capitate";
browser.currentScene.children[420] = ROUTE1763;

let ROUTE1764 = browser.currentScene.createNode("ROUTE");
ROUTE1764.fromField = "value_changed";
ROUTE1764.fromNode = "Armature_OI_r_capitate";
ROUTE1764.toField = "rotation";
ROUTE1764.toNode = "hanim_r_capitate";
browser.currentScene.children[421] = ROUTE1764;

let ROUTE1765 = browser.currentScene.createNode("ROUTE");
ROUTE1765.fromField = "fraction_changed";
ROUTE1765.fromNode = "Armature_Clock";
ROUTE1765.toField = "set_fraction";
ROUTE1765.toNode = "Armature_OI_r_metacarpal_3";
browser.currentScene.children[422] = ROUTE1765;

let ROUTE1766 = browser.currentScene.createNode("ROUTE");
ROUTE1766.fromField = "value_changed";
ROUTE1766.fromNode = "Armature_OI_r_metacarpal_3";
ROUTE1766.toField = "rotation";
ROUTE1766.toNode = "hanim_r_metacarpal_3";
browser.currentScene.children[423] = ROUTE1766;

let ROUTE1767 = browser.currentScene.createNode("ROUTE");
ROUTE1767.fromField = "fraction_changed";
ROUTE1767.fromNode = "Armature_Clock";
ROUTE1767.toField = "set_fraction";
ROUTE1767.toNode = "Armature_OI_r_carpal_proximal_phalanx_3";
browser.currentScene.children[424] = ROUTE1767;

let ROUTE1768 = browser.currentScene.createNode("ROUTE");
ROUTE1768.fromField = "value_changed";
ROUTE1768.fromNode = "Armature_OI_r_carpal_proximal_phalanx_3";
ROUTE1768.toField = "rotation";
ROUTE1768.toNode = "hanim_r_carpal_proximal_phalanx_3";
browser.currentScene.children[425] = ROUTE1768;

let ROUTE1769 = browser.currentScene.createNode("ROUTE");
ROUTE1769.fromField = "fraction_changed";
ROUTE1769.fromNode = "Armature_Clock";
ROUTE1769.toField = "set_fraction";
ROUTE1769.toNode = "Armature_OI_r_carpal_middle_phalanx_3";
browser.currentScene.children[426] = ROUTE1769;

let ROUTE1770 = browser.currentScene.createNode("ROUTE");
ROUTE1770.fromField = "value_changed";
ROUTE1770.fromNode = "Armature_OI_r_carpal_middle_phalanx_3";
ROUTE1770.toField = "rotation";
ROUTE1770.toNode = "hanim_r_carpal_middle_phalanx_3";
browser.currentScene.children[427] = ROUTE1770;

let ROUTE1771 = browser.currentScene.createNode("ROUTE");
ROUTE1771.fromField = "fraction_changed";
ROUTE1771.fromNode = "Armature_Clock";
ROUTE1771.toField = "set_fraction";
ROUTE1771.toNode = "Armature_OI_r_carpal_distal_phalanx_3";
browser.currentScene.children[428] = ROUTE1771;

let ROUTE1772 = browser.currentScene.createNode("ROUTE");
ROUTE1772.fromField = "value_changed";
ROUTE1772.fromNode = "Armature_OI_r_carpal_distal_phalanx_3";
ROUTE1772.toField = "rotation";
ROUTE1772.toNode = "hanim_r_carpal_distal_phalanx_3";
browser.currentScene.children[429] = ROUTE1772;

let ROUTE1773 = browser.currentScene.createNode("ROUTE");
ROUTE1773.fromField = "fraction_changed";
ROUTE1773.fromNode = "Armature_Clock";
ROUTE1773.toField = "set_fraction";
ROUTE1773.toNode = "Armature_OI_r_hamate";
browser.currentScene.children[430] = ROUTE1773;

let ROUTE1774 = browser.currentScene.createNode("ROUTE");
ROUTE1774.fromField = "value_changed";
ROUTE1774.fromNode = "Armature_OI_r_hamate";
ROUTE1774.toField = "rotation";
ROUTE1774.toNode = "hanim_r_hamate";
browser.currentScene.children[431] = ROUTE1774;

let ROUTE1775 = browser.currentScene.createNode("ROUTE");
ROUTE1775.fromField = "fraction_changed";
ROUTE1775.fromNode = "Armature_Clock";
ROUTE1775.toField = "set_fraction";
ROUTE1775.toNode = "Armature_OI_r_metacarpal_4";
browser.currentScene.children[432] = ROUTE1775;

let ROUTE1776 = browser.currentScene.createNode("ROUTE");
ROUTE1776.fromField = "value_changed";
ROUTE1776.fromNode = "Armature_OI_r_metacarpal_4";
ROUTE1776.toField = "rotation";
ROUTE1776.toNode = "hanim_r_metacarpal_4";
browser.currentScene.children[433] = ROUTE1776;

let ROUTE1777 = browser.currentScene.createNode("ROUTE");
ROUTE1777.fromField = "fraction_changed";
ROUTE1777.fromNode = "Armature_Clock";
ROUTE1777.toField = "set_fraction";
ROUTE1777.toNode = "Armature_OI_r_carpal_proximal_phalanx_4";
browser.currentScene.children[434] = ROUTE1777;

let ROUTE1778 = browser.currentScene.createNode("ROUTE");
ROUTE1778.fromField = "value_changed";
ROUTE1778.fromNode = "Armature_OI_r_carpal_proximal_phalanx_4";
ROUTE1778.toField = "rotation";
ROUTE1778.toNode = "hanim_r_carpal_proximal_phalanx_4";
browser.currentScene.children[435] = ROUTE1778;

let ROUTE1779 = browser.currentScene.createNode("ROUTE");
ROUTE1779.fromField = "fraction_changed";
ROUTE1779.fromNode = "Armature_Clock";
ROUTE1779.toField = "set_fraction";
ROUTE1779.toNode = "Armature_OI_r_carpal_middle_phalanx_4";
browser.currentScene.children[436] = ROUTE1779;

let ROUTE1780 = browser.currentScene.createNode("ROUTE");
ROUTE1780.fromField = "value_changed";
ROUTE1780.fromNode = "Armature_OI_r_carpal_middle_phalanx_4";
ROUTE1780.toField = "rotation";
ROUTE1780.toNode = "hanim_r_carpal_middle_phalanx_4";
browser.currentScene.children[437] = ROUTE1780;

let ROUTE1781 = browser.currentScene.createNode("ROUTE");
ROUTE1781.fromField = "fraction_changed";
ROUTE1781.fromNode = "Armature_Clock";
ROUTE1781.toField = "set_fraction";
ROUTE1781.toNode = "Armature_OI_r_carpal_distal_phalanx_4";
browser.currentScene.children[438] = ROUTE1781;

let ROUTE1782 = browser.currentScene.createNode("ROUTE");
ROUTE1782.fromField = "value_changed";
ROUTE1782.fromNode = "Armature_OI_r_carpal_distal_phalanx_4";
ROUTE1782.toField = "rotation";
ROUTE1782.toNode = "hanim_r_carpal_distal_phalanx_4";
browser.currentScene.children[439] = ROUTE1782;

let ROUTE1783 = browser.currentScene.createNode("ROUTE");
ROUTE1783.fromField = "fraction_changed";
ROUTE1783.fromNode = "Armature_Clock";
ROUTE1783.toField = "set_fraction";
ROUTE1783.toNode = "Armature_OI_r_metacarpal_5";
browser.currentScene.children[440] = ROUTE1783;

let ROUTE1784 = browser.currentScene.createNode("ROUTE");
ROUTE1784.fromField = "value_changed";
ROUTE1784.fromNode = "Armature_OI_r_metacarpal_5";
ROUTE1784.toField = "rotation";
ROUTE1784.toNode = "hanim_r_metacarpal_5";
browser.currentScene.children[441] = ROUTE1784;

let ROUTE1785 = browser.currentScene.createNode("ROUTE");
ROUTE1785.fromField = "fraction_changed";
ROUTE1785.fromNode = "Armature_Clock";
ROUTE1785.toField = "set_fraction";
ROUTE1785.toNode = "Armature_OI_r_carpal_proximal_phalanx_5";
browser.currentScene.children[442] = ROUTE1785;

let ROUTE1786 = browser.currentScene.createNode("ROUTE");
ROUTE1786.fromField = "value_changed";
ROUTE1786.fromNode = "Armature_OI_r_carpal_proximal_phalanx_5";
ROUTE1786.toField = "rotation";
ROUTE1786.toNode = "hanim_r_carpal_proximal_phalanx_5";
browser.currentScene.children[443] = ROUTE1786;

let ROUTE1787 = browser.currentScene.createNode("ROUTE");
ROUTE1787.fromField = "fraction_changed";
ROUTE1787.fromNode = "Armature_Clock";
ROUTE1787.toField = "set_fraction";
ROUTE1787.toNode = "Armature_OI_r_carpal_middle_phalanx_5";
browser.currentScene.children[444] = ROUTE1787;

let ROUTE1788 = browser.currentScene.createNode("ROUTE");
ROUTE1788.fromField = "value_changed";
ROUTE1788.fromNode = "Armature_OI_r_carpal_middle_phalanx_5";
ROUTE1788.toField = "rotation";
ROUTE1788.toNode = "hanim_r_carpal_middle_phalanx_5";
browser.currentScene.children[445] = ROUTE1788;

let ROUTE1789 = browser.currentScene.createNode("ROUTE");
ROUTE1789.fromField = "fraction_changed";
ROUTE1789.fromNode = "Armature_Clock";
ROUTE1789.toField = "set_fraction";
ROUTE1789.toNode = "Armature_OI_r_carpal_distal_phalanx_5";
browser.currentScene.children[446] = ROUTE1789;

let ROUTE1790 = browser.currentScene.createNode("ROUTE");
ROUTE1790.fromField = "value_changed";
ROUTE1790.fromNode = "Armature_OI_r_carpal_distal_phalanx_5";
ROUTE1790.toField = "rotation";
ROUTE1790.toNode = "hanim_r_carpal_distal_phalanx_5";
browser.currentScene.children[447] = ROUTE1790;

