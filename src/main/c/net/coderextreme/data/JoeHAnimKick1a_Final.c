#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
X3D0.xsi:noNamespaceSchemaLocation = "https://www.web3d.org/specifications/x3d-4.0.xsd";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "HAnim";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

meta meta3 = createNode("meta");
meta3.name = "Joe";
meta3.content = "No Reservations 20121221 20040109 x3d/hanim";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "generator";
meta4.content = "x3d-tidy V2.2.3, https://www.npmjs.com/package/x3d-tidy";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "modified";
meta5.content = "Wed, 17 Sep 2025 06:43:47 GMT";
head1.meta[3] = meta5;

head = head1;

WorldInfo WorldInfo7 = createNode("WorldInfo");
WorldInfo7.title = "HANIM 2 LOA3 Skeleton and Skin sites and feature points for Joe_ by Joe";
children = new MFNode();

children[0] = WorldInfo7;

NavigationInfo NavigationInfo8 = createNode("NavigationInfo");
NavigationInfo8.type = new MFString(new java.lang.String[", ","FLYANY"]);
NavigationInfo8.speed = 2.5;
NavigationInfo8.headlight = False;
children[1] = NavigationInfo8;

Viewpoint Viewpoint9 = createNode("Viewpoint");
Viewpoint9.DEF = "Joe_InclinedView";
Viewpoint9.description = "Joe_Inclined View";
Viewpoint9.position = new SFVec3f(new float[1.62,1.05,3.06]);
Viewpoint9.orientation = new SFRotation(new float[-0.113,0.993,0.0347,0.671]);
children[2] = Viewpoint9;

Viewpoint Viewpoint10 = createNode("Viewpoint");
Viewpoint10.DEF = "Joe_IFrontView";
Viewpoint10.description = "Scene_Front View";
Viewpoint10.position = new SFVec3f(new float[0,0.8,2.58]);
Viewpoint10.centerOfRotation = new SFVec3f(new float[0,0.8,0]);
children[3] = Viewpoint10;

Viewpoint Viewpoint11 = createNode("Viewpoint");
Viewpoint11.DEF = "Joe_ISideView";
Viewpoint11.description = "Scene_Side View";
Viewpoint11.position = new SFVec3f(new float[2.6,0.5,0]);
Viewpoint11.orientation = new SFRotation(new float[0,1,0,1.5708]);
Viewpoint11.centerOfRotation = new SFVec3f(new float[0,0.8,0]);
children[4] = Viewpoint11;

Viewpoint Viewpoint12 = createNode("Viewpoint");
Viewpoint12.DEF = "Joe_BackView";
Viewpoint12.description = "Scene_Back View";
Viewpoint12.position = new SFVec3f(new float[0,2.5,-3]);
Viewpoint12.orientation = new SFRotation(new float[0,1,0,3.14]);
Viewpoint12.centerOfRotation = new SFVec3f(new float[0,1.5,0]);
children[5] = Viewpoint12;

Viewpoint Viewpoint13 = createNode("Viewpoint");
Viewpoint13.DEF = "Joe_TopView";
Viewpoint13.description = "Scene_Top View";
Viewpoint13.position = new SFVec3f(new float[0,3.5,0]);
Viewpoint13.orientation = new SFRotation(new float[1,0,0,-1.5708]);
Viewpoint13.centerOfRotation = new SFVec3f(new float[0,1.5,0]);
children[6] = Viewpoint13;

Group Group14 = createNode("Group");
Group14.DEF = "Joe_Humanoid";
HAnimHumanoid HAnimHumanoid15 = createNode("HAnimHumanoid");
HAnimHumanoid15.DEF = "JoeHuman";
HAnimJoint HAnimJoint16 = createNode("HAnimJoint");
HAnimJoint16.name = "humanoid_root";
HAnimJoint16.DEF = "hanim_humanoid_root";
HAnimJoint16.translation = new SFVec3f(new float[0.15315,0.019584,-0.22976]);
HAnimJoint16.rotation = new SFRotation(new float[-1,0,0,0.040483]);
HAnimJoint16.center = new SFVec3f(new float[0,0.875,0]);
HAnimJoint16.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint16.llimit = new MFFloat(new float[0,0,0]);
HAnimSite HAnimSite17 = createNode("HAnimSite");
HAnimSite17.name = "RootFront";
HAnimSite17.DEF = "Joe_RootView1";
Transform Transform18 = createNode("Transform");
Transform18.DEF = "hanimcordsys";
Transform18.scale = new SFVec3f(new float[0.175,0.175,0.175]);
Inline Inline19 = createNode("Inline");
Inline19.global = True;
Inline19.url = new MFString(new java.lang.String["JointCoordinateAxes.x3dv"]);
Transform18.children = new MFNode();

Transform18.children[0] = Inline19;

Viewpoint Viewpoint20 = createNode("Viewpoint");
Viewpoint20.DEF = "ballView_1";
Viewpoint20.description = "hanimcoord View";
Transform18.children[1] = Viewpoint20;

HAnimSite17.children = new MFNode();

HAnimSite17.children[0] = Transform18;

HAnimJoint16.child = new undefined();

HAnimJoint16.child[0] = HAnimSite17;

HAnimJoint HAnimJoint21 = createNode("HAnimJoint");
HAnimJoint21.name = "sacroiliac";
HAnimJoint21.DEF = "Joe_sacroiliac";
HAnimJoint21.center = new SFVec3f(new float[0,0.92,0]);
HAnimJoint21.skinCoordIndex = new MFInt32(new int[17,19,20,21,22,23,26,27,73,82,89,91,93]);
HAnimJoint21.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,0.35,0.35,1]);
HAnimJoint21.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint21.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint22 = createNode("HAnimJoint");
HAnimJoint22.name = "l_hip";
HAnimJoint22.DEF = "hanim_l_hip";
HAnimJoint22.rotation = new SFRotation(new float[1,0,0,0.23414]);
HAnimJoint22.center = new SFVec3f(new float[0.1,0.92,0]);
HAnimJoint22.skinCoordIndex = new MFInt32(new int[89,90,94,95,96,97]);
HAnimJoint22.skinCoordWeight = new MFFloat(new float[0.65,1,1,1,1,1]);
HAnimJoint22.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint22.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint23 = createNode("HAnimJoint");
HAnimJoint23.name = "l_knee";
HAnimJoint23.DEF = "hanim_l_knee";
HAnimJoint23.rotation = new SFRotation(new float[0.2106,0,0.97757,0.22603]);
HAnimJoint23.center = new SFVec3f(new float[0.115,0.466,0]);
HAnimJoint23.skinCoordIndex = new MFInt32(new int[334,335,336,337,338,339,340,341]);
HAnimJoint23.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint23.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint23.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint24 = createNode("HAnimJoint");
HAnimJoint24.name = "l_talocrural";
HAnimJoint24.DEF = "hanim_l_talocrural";
HAnimJoint24.rotation = new SFRotation(new float[1,0,0,0.16032]);
HAnimJoint24.center = new SFVec3f(new float[0.115,0.069,0]);
HAnimJoint24.skinCoordIndex = new MFInt32(new int[342,343,344,345]);
HAnimJoint24.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint24.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint24.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint25 = createNode("HAnimJoint");
HAnimJoint25.name = "l_tarsometatarsal_2";
HAnimJoint25.DEF = "hanim_l_tarsometatarsal_2";
HAnimJoint25.center = new SFVec3f(new float[0.115,0.031,0.03]);
HAnimJoint25.skinCoordIndex = new MFInt32(new int[346,347,348,71]);
HAnimJoint25.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint25.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint25.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint26 = createNode("HAnimJoint");
HAnimJoint26.name = "l_metatarsophalangeal_2";
HAnimJoint26.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint26.center = new SFVec3f(new float[0.115,0.037,0.09]);
HAnimJoint26.skinCoordIndex = new MFInt32(new int[349,350,351,352]);
HAnimJoint26.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint26.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint26.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint27 = createNode("HAnimJoint");
HAnimJoint27.name = "l_metatarsal_2";
HAnimJoint27.DEF = "hanim_l_metatarsal_2";
HAnimJoint27.center = new SFVec3f(new float[0.115,0.02,0.122]);
HAnimJoint27.skinCoordIndex = new MFInt32(new int[353,354,355,356,357,358,359,360,361]);
HAnimJoint27.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint27.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint27.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint26.children = new MFNode();

HAnimJoint26.children[0] = HAnimJoint27;

HAnimJoint25.children = new MFNode();

HAnimJoint25.children[0] = HAnimJoint26;

HAnimJoint24.children = new MFNode();

HAnimJoint24.children[0] = HAnimJoint25;

HAnimJoint23.children = new MFNode();

HAnimJoint23.children[0] = HAnimJoint24;

HAnimJoint22.children = new MFNode();

HAnimJoint22.children[0] = HAnimJoint23;

HAnimJoint21.children = new MFNode();

HAnimJoint21.children[0] = HAnimJoint22;

HAnimJoint HAnimJoint28 = createNode("HAnimJoint");
HAnimJoint28.name = "r_hip";
HAnimJoint28.DEF = "hanim_r_hip";
HAnimJoint28.rotation = new SFRotation(new float[1,0,0,0.03807]);
HAnimJoint28.center = new SFVec3f(new float[-0.1,0.92,0]);
HAnimJoint28.skinCoordIndex = new MFInt32(new int[91,92,98,99,100,101,362,363]);
HAnimJoint28.skinCoordWeight = new MFFloat(new float[0.65,1,0.8,1,1,1,0.4,0.8]);
HAnimJoint28.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint28.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint29 = createNode("HAnimJoint");
HAnimJoint29.name = "r_knee";
HAnimJoint29.DEF = "hanim_r_knee";
HAnimJoint29.rotation = new SFRotation(new float[1,0,0,0.48097]);
HAnimJoint29.center = new SFVec3f(new float[-0.05,0.466,0]);
HAnimJoint29.skinCoordIndex = new MFInt32(new int[362,363,364,365,366,367,368,369,98]);
HAnimJoint29.skinCoordWeight = new MFFloat(new float[0.6,0.2,1,1,1,1,1,1,0.2]);
HAnimJoint29.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint29.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint30 = createNode("HAnimJoint");
HAnimJoint30.name = "r_talocrural";
HAnimJoint30.DEF = "hanim_r_talocrural";
HAnimJoint30.rotation = new SFRotation(new float[1,0,0,0.48097]);
HAnimJoint30.center = new SFVec3f(new float[-0.115,0.069,0]);
HAnimJoint30.skinCoordIndex = new MFInt32(new int[370,371,372,373]);
HAnimJoint30.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint30.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint30.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint31 = createNode("HAnimJoint");
HAnimJoint31.name = "r_tarsometatarsal_2";
HAnimJoint31.DEF = "hanim_r_tarsometatarsal_2";
HAnimJoint31.center = new SFVec3f(new float[-0.1,0.015,-0.01]);
HAnimJoint31.skinCoordIndex = new MFInt32(new int[374,375,376]);
HAnimJoint31.skinCoordWeight = new MFFloat(new float[1,1,1]);
HAnimJoint31.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint31.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint32 = createNode("HAnimJoint");
HAnimJoint32.name = "r_metatarsophalangeal_2";
HAnimJoint32.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint32.center = new SFVec3f(new float[-0.115,0.037,0.09]);
HAnimJoint32.skinCoordIndex = new MFInt32(new int[377,378,379,380]);
HAnimJoint32.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint32.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint32.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint33 = createNode("HAnimJoint");
HAnimJoint33.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint33.DEF = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimJoint33.center = new SFVec3f(new float[-0.1,0.01,0.14]);
HAnimJoint33.skinCoordIndex = new MFInt32(new int[381,382,383,384,385,386,387,388,389]);
HAnimJoint33.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint33.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint33.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint32.children = new MFNode();

HAnimJoint32.children[0] = HAnimJoint33;

HAnimJoint31.children = new MFNode();

HAnimJoint31.children[0] = HAnimJoint32;

HAnimJoint30.children = new MFNode();

HAnimJoint30.children[0] = HAnimJoint31;

HAnimJoint29.children = new MFNode();

HAnimJoint29.children[0] = HAnimJoint30;

HAnimJoint28.children = new MFNode();

HAnimJoint28.children[0] = HAnimJoint29;

HAnimJoint21.children[1] = HAnimJoint28;

HAnimJoint16.children[1] = HAnimJoint21;

HAnimJoint HAnimJoint34 = createNode("HAnimJoint");
HAnimJoint34.name = "vl5";
HAnimJoint34.DEF = "hanim_vl5";
HAnimJoint34.center = new SFVec3f(new float[0,1.045,-0.095]);
HAnimJoint34.skinCoordIndex = new MFInt32(new int[28,76]);
HAnimJoint34.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint34.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint34.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint35 = createNode("HAnimJoint");
HAnimJoint35.name = "vl4";
HAnimJoint35.DEF = "hanim_vl4";
HAnimJoint35.center = new SFVec3f(new float[0,1.068,-0.085]);
HAnimJoint35.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint35.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint36 = createNode("HAnimJoint");
HAnimJoint36.name = "vl3";
HAnimJoint36.DEF = "hanim_vl3";
HAnimJoint36.center = new SFVec3f(new float[0,1.092,-0.0725]);
HAnimJoint36.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint36.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint37 = createNode("HAnimJoint");
HAnimJoint37.name = "vl2";
HAnimJoint37.DEF = "hanim_vl2";
HAnimJoint37.center = new SFVec3f(new float[0,1.12,-0.065]);
HAnimJoint37.skinCoordIndex = new MFInt32(new int[16,18,25,83,84,85,86,87,88]);
HAnimJoint37.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,0.7,1,0.8]);
HAnimJoint37.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint37.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint38 = createNode("HAnimJoint");
HAnimJoint38.name = "vl1";
HAnimJoint38.DEF = "hanim_vl1";
HAnimJoint38.center = new SFVec3f(new float[0,1.1459,-0.0625]);
HAnimJoint38.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint38.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint39 = createNode("HAnimJoint");
HAnimJoint39.name = "vt12";
HAnimJoint39.DEF = "hanim_vt12";
HAnimJoint39.center = new SFVec3f(new float[0,1.179,-0.068]);
HAnimJoint39.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint39.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint40 = createNode("HAnimJoint");
HAnimJoint40.name = "vt11";
HAnimJoint40.DEF = "hanim_vt11";
HAnimJoint40.center = new SFVec3f(new float[0,1.2679,-0.081]);
HAnimJoint40.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint40.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint41 = createNode("HAnimJoint");
HAnimJoint41.name = "vt10";
HAnimJoint41.DEF = "hanim_vt10";
HAnimJoint41.center = new SFVec3f(new float[0,1.242,-0.09]);
HAnimJoint41.skinCoordIndex = new MFInt32(new int[15]);
HAnimJoint41.skinCoordWeight = new MFFloat(new float[1]);
HAnimJoint41.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint41.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint42 = createNode("HAnimJoint");
HAnimJoint42.name = "vt9";
HAnimJoint42.DEF = "hanim_vt9";
HAnimJoint42.center = new SFVec3f(new float[0,1.268,-0.1]);
HAnimJoint42.skinCoordIndex = new MFInt32(new int[13,14]);
HAnimJoint42.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint42.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint42.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint43 = createNode("HAnimJoint");
HAnimJoint43.name = "vt8";
HAnimJoint43.DEF = "hanim_vt8";
HAnimJoint43.center = new SFVec3f(new float[0,1.294,-0.11]);
HAnimJoint43.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint43.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint44 = createNode("HAnimJoint");
HAnimJoint44.name = "vt7";
HAnimJoint44.DEF = "hanim_vt7";
HAnimJoint44.center = new SFVec3f(new float[0,1.323,-0.1155]);
HAnimJoint44.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint44.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint45 = createNode("HAnimJoint");
HAnimJoint45.name = "vt6";
HAnimJoint45.DEF = "hanim_vt6";
HAnimJoint45.center = new SFVec3f(new float[0,1.352,-0.12]);
HAnimJoint45.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint45.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint46 = createNode("HAnimJoint");
HAnimJoint46.name = "vt5";
HAnimJoint46.DEF = "hanim_vt5";
HAnimJoint46.center = new SFVec3f(new float[0,1.381,-0.1235]);
HAnimJoint46.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint46.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint47 = createNode("HAnimJoint");
HAnimJoint47.name = "vt4";
HAnimJoint47.DEF = "hanim_vt4";
HAnimJoint47.center = new SFVec3f(new float[0,1.41,-0.1235]);
HAnimJoint47.skinCoordIndex = new MFInt32(new int[81]);
HAnimJoint47.skinCoordWeight = new MFFloat(new float[1]);
HAnimJoint47.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint47.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint48 = createNode("HAnimJoint");
HAnimJoint48.name = "vt3";
HAnimJoint48.DEF = "hanim_vt3";
HAnimJoint48.center = new SFVec3f(new float[0,1.438,-0.12]);
HAnimJoint48.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint48.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint49 = createNode("HAnimJoint");
HAnimJoint49.name = "vt2";
HAnimJoint49.DEF = "hanim_vt2";
HAnimJoint49.center = new SFVec3f(new float[0,1.468,-0.105]);
HAnimJoint49.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint49.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint50 = createNode("HAnimJoint");
HAnimJoint50.name = "vt1";
HAnimJoint50.DEF = "hanim_vt1";
HAnimJoint50.center = new SFVec3f(new float[0,1.497,-0.09]);
HAnimJoint50.skinCoordIndex = new MFInt32(new int[11,24]);
HAnimJoint50.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint50.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint50.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint51 = createNode("HAnimJoint");
HAnimJoint51.name = "vc7";
HAnimJoint51.DEF = "hanim_vc7";
HAnimJoint51.center = new SFVec3f(new float[0,1.525,-0.072]);
HAnimJoint51.skinCoordIndex = new MFInt32(new int[74,75]);
HAnimJoint51.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint51.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint51.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint52 = createNode("HAnimJoint");
HAnimJoint52.name = "vc6";
HAnimJoint52.DEF = "hanim_vc6";
HAnimJoint52.center = new SFVec3f(new float[0,1.54,-0.05]);
HAnimJoint52.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint52.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint53 = createNode("HAnimJoint");
HAnimJoint53.name = "vc5";
HAnimJoint53.DEF = "hanim_vc5";
HAnimJoint53.center = new SFVec3f(new float[0,1.552,-0.035]);
HAnimJoint53.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint53.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint54 = createNode("HAnimJoint");
HAnimJoint54.name = "vc4";
HAnimJoint54.DEF = "hanim_vc4";
HAnimJoint54.rotation = new SFRotation(new float[0.98593,0,-0.16716,0.46046]);
HAnimJoint54.center = new SFVec3f(new float[0,1.5675,-0.0256]);
HAnimJoint54.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint54.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint55 = createNode("HAnimJoint");
HAnimJoint55.name = "vc3";
HAnimJoint55.DEF = "hanim_vc3";
HAnimJoint55.center = new SFVec3f(new float[0,1.5823,-0.0185]);
HAnimJoint55.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint55.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint56 = createNode("HAnimJoint");
HAnimJoint56.name = "vc2";
HAnimJoint56.DEF = "hanim_vc2";
HAnimJoint56.center = new SFVec3f(new float[0,1.595,-0.0175]);
HAnimJoint56.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint56.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint57 = createNode("HAnimJoint");
HAnimJoint57.name = "vc1";
HAnimJoint57.DEF = "hanim_vc1";
HAnimJoint57.center = new SFVec3f(new float[0,1.61,-0.015]);
HAnimJoint57.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint57.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint58 = createNode("HAnimJoint");
HAnimJoint58.name = "skullbase";
HAnimJoint58.DEF = "hanim_skullbase";
HAnimJoint58.center = new SFVec3f(new float[0,1.63,-0.01]);
HAnimJoint58.skinCoordIndex = new MFInt32(new int[0,1,2,3,4,5,6,7,8,9]);
HAnimJoint58.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1]);
HAnimJoint58.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint58.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint59 = createNode("HAnimJoint");
HAnimJoint59.name = "l_eyeball_joint";
HAnimJoint59.DEF = "hanim_l_eyeball_joint";
HAnimJoint59.center = new SFVec3f(new float[0.034,1.659,0.06]);
HAnimJoint59.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint59.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint58.children = new MFNode();

HAnimJoint58.children[0] = HAnimJoint59;

HAnimJoint HAnimJoint60 = createNode("HAnimJoint");
HAnimJoint60.name = "r_eyeball_joint";
HAnimJoint60.DEF = "hanim_r_eyeball_joint";
HAnimJoint60.center = new SFVec3f(new float[-0.034,1.659,0.06]);
HAnimJoint60.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint60.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint58.children[1] = HAnimJoint60;

HAnimJoint57.children = new MFNode();

HAnimJoint57.children[0] = HAnimJoint58;

HAnimJoint56.children = new MFNode();

HAnimJoint56.children[0] = HAnimJoint57;

HAnimJoint55.children = new MFNode();

HAnimJoint55.children[0] = HAnimJoint56;

HAnimJoint54.children = new MFNode();

HAnimJoint54.children[0] = HAnimJoint55;

HAnimJoint53.children = new MFNode();

HAnimJoint53.children[0] = HAnimJoint54;

HAnimJoint52.children = new MFNode();

HAnimJoint52.children[0] = HAnimJoint53;

HAnimJoint51.children = new MFNode();

HAnimJoint51.children[0] = HAnimJoint52;

HAnimJoint HAnimJoint61 = createNode("HAnimJoint");
HAnimJoint61.name = "l_sternoclavicular";
HAnimJoint61.DEF = "hanim_l_sternoclavicular";
HAnimJoint61.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimJoint61.skinCoordIndex = new MFInt32(new int[12]);
HAnimJoint61.skinCoordWeight = new MFFloat(new float[1]);
HAnimJoint61.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint61.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint62 = createNode("HAnimJoint");
HAnimJoint62.name = "l_acromioclavicular";
HAnimJoint62.DEF = "hanim_l_acromioclavicular";
HAnimJoint62.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimJoint62.skinCoordIndex = new MFInt32(new int[79]);
HAnimJoint62.skinCoordWeight = new MFFloat(new float[1]);
HAnimJoint62.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint62.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint63 = createNode("HAnimJoint");
HAnimJoint63.name = "l_shoulder";
HAnimJoint63.DEF = "hanim_l_shoulder";
HAnimJoint63.rotation = new SFRotation(new float[0,0,1,1.3884]);
HAnimJoint63.center = new SFVec3f(new float[0.2,1.44,-0.04]);
HAnimJoint63.skinCoordIndex = new MFInt32(new int[41,42,44,80,102,103,104,105]);
HAnimJoint63.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint63.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint63.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint64 = createNode("HAnimJoint");
HAnimJoint64.name = "l_elbow";
HAnimJoint64.DEF = "hanim_l_elbow";
HAnimJoint64.rotation = new SFRotation(new float[-1,0,0,1.3339]);
HAnimJoint64.center = new SFVec3f(new float[0.2,1.1388,-0.04]);
HAnimJoint64.skinCoordIndex = new MFInt32(new int[45,46,47,109,110,111,112,113,115,116,117,118]);
HAnimJoint64.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimJoint64.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint64.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint65 = createNode("HAnimJoint");
HAnimJoint65.name = "l_radiocarpal";
HAnimJoint65.DEF = "hanim_l_radiocarpal";
HAnimJoint65.rotation = new SFRotation(new float[0,1,0,1.2033]);
HAnimJoint65.center = new SFVec3f(new float[0.2,0.87,-0.04]);
HAnimJoint65.skinCoordIndex = new MFInt32(new int[119,120,121,122,123,124,125,126]);
HAnimJoint65.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint65.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint65.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint66 = createNode("HAnimJoint");
HAnimJoint66.name = "l_carpometacarpal_1";
HAnimJoint66.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint66.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimJoint66.skinCoordIndex = new MFInt32(new int[127,128]);
HAnimJoint66.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint66.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint66.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint67 = createNode("HAnimJoint");
HAnimJoint67.name = "l_metacarpophalangeal_1";
HAnimJoint67.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint67.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimJoint67.skinCoordIndex = new MFInt32(new int[138,139,140,141,142,143]);
HAnimJoint67.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,1,1,1]);
HAnimJoint67.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint67.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint68 = createNode("HAnimJoint");
HAnimJoint68.name = "l_carpal_interphalangeal_1";
HAnimJoint68.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint68.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint68.skinCoordIndex = new MFInt32(new int[144,145,146,147,148,149,150,151,152]);
HAnimJoint68.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint68.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint68.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint67.children = new MFNode();

HAnimJoint67.children[0] = HAnimJoint68;

HAnimJoint66.children = new MFNode();

HAnimJoint66.children[0] = HAnimJoint67;

HAnimJoint65.children = new MFNode();

HAnimJoint65.children[0] = HAnimJoint66;

HAnimJoint HAnimJoint69 = createNode("HAnimJoint");
HAnimJoint69.name = "l_carpometacarpal_2";
HAnimJoint69.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint69.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimJoint69.skinCoordIndex = new MFInt32(new int[129,130]);
HAnimJoint69.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint69.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint69.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint70 = createNode("HAnimJoint");
HAnimJoint70.name = "l_metacarpophalangeal_2";
HAnimJoint70.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint70.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint70.skinCoordIndex = new MFInt32(new int[138,139,140,153,154,155,163]);
HAnimJoint70.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,1,1,1,0.5]);
HAnimJoint70.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint70.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint71 = createNode("HAnimJoint");
HAnimJoint71.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint71.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint71.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint71.skinCoordIndex = new MFInt32(new int[166,167,168,169]);
HAnimJoint71.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint71.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint71.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint72 = createNode("HAnimJoint");
HAnimJoint72.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint72.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint72.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint72.skinCoordIndex = new MFInt32(new int[170,171,172,173,174,175,176,177,178]);
HAnimJoint72.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint72.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint72.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint71.children = new MFNode();

HAnimJoint71.children[0] = HAnimJoint72;

HAnimJoint70.children = new MFNode();

HAnimJoint70.children[0] = HAnimJoint71;

HAnimJoint69.children = new MFNode();

HAnimJoint69.children[0] = HAnimJoint70;

HAnimJoint65.children[1] = HAnimJoint69;

HAnimJoint HAnimJoint73 = createNode("HAnimJoint");
HAnimJoint73.name = "l_carpometacarpal_3";
HAnimJoint73.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint73.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimJoint73.skinCoordIndex = new MFInt32(new int[131,132]);
HAnimJoint73.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint73.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint73.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint74 = createNode("HAnimJoint");
HAnimJoint74.name = "l_metacarpophalangeal_3";
HAnimJoint74.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint74.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimJoint74.skinCoordIndex = new MFInt32(new int[156,157,163,164]);
HAnimJoint74.skinCoordWeight = new MFFloat(new float[1,1,0.5,0.5]);
HAnimJoint74.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint74.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint75 = createNode("HAnimJoint");
HAnimJoint75.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint75.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint75.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimJoint75.skinCoordIndex = new MFInt32(new int[179,180,181,182]);
HAnimJoint75.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint75.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint75.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint76 = createNode("HAnimJoint");
HAnimJoint76.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint76.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint76.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint76.skinCoordIndex = new MFInt32(new int[183,184,185,186,187,188,189,190,191]);
HAnimJoint76.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint76.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint76.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint75.children = new MFNode();

HAnimJoint75.children[0] = HAnimJoint76;

HAnimJoint74.children = new MFNode();

HAnimJoint74.children[0] = HAnimJoint75;

HAnimJoint73.children = new MFNode();

HAnimJoint73.children[0] = HAnimJoint74;

HAnimJoint65.children[2] = HAnimJoint73;

HAnimJoint HAnimJoint77 = createNode("HAnimJoint");
HAnimJoint77.name = "l_carpometacarpal_4";
HAnimJoint77.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint77.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimJoint77.skinCoordIndex = new MFInt32(new int[133,134]);
HAnimJoint77.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint77.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint77.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint78 = createNode("HAnimJoint");
HAnimJoint78.name = "l_metacarpophalangeal_4";
HAnimJoint78.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint78.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimJoint78.skinCoordIndex = new MFInt32(new int[158,159,164,165]);
HAnimJoint78.skinCoordWeight = new MFFloat(new float[1,1,0.5,0.5]);
HAnimJoint78.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint78.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint79 = createNode("HAnimJoint");
HAnimJoint79.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint79.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint79.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimJoint79.skinCoordIndex = new MFInt32(new int[192,193,194,195]);
HAnimJoint79.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint79.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint79.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint80 = createNode("HAnimJoint");
HAnimJoint80.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint80.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint80.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint80.skinCoordIndex = new MFInt32(new int[196,197,198,199,200,201,202,203,204]);
HAnimJoint80.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint80.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint80.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint79.children = new MFNode();

HAnimJoint79.children[0] = HAnimJoint80;

HAnimJoint78.children = new MFNode();

HAnimJoint78.children[0] = HAnimJoint79;

HAnimJoint77.children = new MFNode();

HAnimJoint77.children[0] = HAnimJoint78;

HAnimJoint65.children[3] = HAnimJoint77;

HAnimJoint HAnimJoint81 = createNode("HAnimJoint");
HAnimJoint81.name = "l_carpometacarpal_5";
HAnimJoint81.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint81.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimJoint81.skinCoordIndex = new MFInt32(new int[135,136,137,165]);
HAnimJoint81.skinCoordWeight = new MFFloat(new float[1,1,1,0.5]);
HAnimJoint81.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint81.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint82 = createNode("HAnimJoint");
HAnimJoint82.name = "l_metacarpophalangeal_5";
HAnimJoint82.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint82.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimJoint82.skinCoordIndex = new MFInt32(new int[160,161,162]);
HAnimJoint82.skinCoordWeight = new MFFloat(new float[1,1,1]);
HAnimJoint82.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint82.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint83 = createNode("HAnimJoint");
HAnimJoint83.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint83.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint83.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimJoint83.skinCoordIndex = new MFInt32(new int[205,206,207,208]);
HAnimJoint83.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint83.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint83.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint84 = createNode("HAnimJoint");
HAnimJoint84.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint84.DEF = "hanim_l_carpal_distal_interphalangeal_5";
HAnimJoint84.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint84.skinCoordIndex = new MFInt32(new int[209,210,211,212,213,214,215,216,217]);
HAnimJoint84.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint84.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint84.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint83.children = new MFNode();

HAnimJoint83.children[0] = HAnimJoint84;

HAnimJoint82.children = new MFNode();

HAnimJoint82.children[0] = HAnimJoint83;

HAnimJoint81.children = new MFNode();

HAnimJoint81.children[0] = HAnimJoint82;

HAnimJoint65.children[4] = HAnimJoint81;

HAnimJoint64.children = new MFNode();

HAnimJoint64.children[0] = HAnimJoint65;

HAnimJoint63.children = new MFNode();

HAnimJoint63.children[0] = HAnimJoint64;

HAnimJoint62.children = new MFNode();

HAnimJoint62.children[0] = HAnimJoint63;

HAnimJoint61.children = new MFNode();

HAnimJoint61.children[0] = HAnimJoint62;

HAnimJoint51.children[1] = HAnimJoint61;

HAnimJoint HAnimJoint85 = createNode("HAnimJoint");
HAnimJoint85.name = "r_sternoclavicular";
HAnimJoint85.DEF = "hanim_r_sternoclavicular";
HAnimJoint85.center = new SFVec3f(new float[-0.03,1.46,0]);
HAnimJoint85.skinCoordIndex = new MFInt32(new int[10]);
HAnimJoint85.skinCoordWeight = new MFFloat(new float[1]);
HAnimJoint85.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint85.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint86 = createNode("HAnimJoint");
HAnimJoint86.name = "r_acromioclavicular";
HAnimJoint86.DEF = "hanim_r_acromioclavicular";
HAnimJoint86.center = new SFVec3f(new float[-0.09,1.41,-0.11]);
HAnimJoint86.skinCoordIndex = new MFInt32(new int[77,29]);
HAnimJoint86.skinCoordWeight = new MFFloat(new float[1,0.9]);
HAnimJoint86.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint86.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint87 = createNode("HAnimJoint");
HAnimJoint87.name = "r_shoulder";
HAnimJoint87.DEF = "hanim_r_shoulder";
HAnimJoint87.rotation = new SFRotation(new float[0,0,-1,1.7595]);
HAnimJoint87.center = new SFVec3f(new float[-0.2,1.44,-0.04]);
HAnimJoint87.skinCoordIndex = new MFInt32(new int[29,30,32,78,218,219,220,221,86,88]);
HAnimJoint87.skinCoordWeight = new MFFloat(new float[0.1,1,1,1,1,1,1,1,0.3,0.2]);
HAnimJoint87.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint87.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint88 = createNode("HAnimJoint");
HAnimJoint88.name = "r_elbow";
HAnimJoint88.DEF = "hanim_r_elbow";
HAnimJoint88.rotation = new SFRotation(new float[-1,0,0,1.3339]);
HAnimJoint88.center = new SFVec3f(new float[-0.2,1.1388,-0.04]);
HAnimJoint88.skinCoordIndex = new MFInt32(new int[33,34,35,225,226,227,228,229,231,232,233,234]);
HAnimJoint88.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimJoint88.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint88.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint89 = createNode("HAnimJoint");
HAnimJoint89.name = "r_radiocarpal";
HAnimJoint89.DEF = "hanim_r_radiocarpal";
HAnimJoint89.rotation = new SFRotation(new float[0,1,0,0.077855]);
HAnimJoint89.center = new SFVec3f(new float[-0.2,0.89,-0.04]);
HAnimJoint89.skinCoordIndex = new MFInt32(new int[235,236,237,238,239,240,241,242]);
HAnimJoint89.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint89.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint89.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint90 = createNode("HAnimJoint");
HAnimJoint90.name = "r_carpometacarpal_1";
HAnimJoint90.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint90.center = new SFVec3f(new float[-0.2,0.85,0]);
HAnimJoint90.skinCoordIndex = new MFInt32(new int[243,244]);
HAnimJoint90.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint90.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint90.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint91 = createNode("HAnimJoint");
HAnimJoint91.name = "r_metacarpophalangeal_1";
HAnimJoint91.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint91.center = new SFVec3f(new float[-0.2,0.82,0.03]);
HAnimJoint91.skinCoordIndex = new MFInt32(new int[254,255,256,257,258,259]);
HAnimJoint91.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,1,1,1]);
HAnimJoint91.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint91.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint92 = createNode("HAnimJoint");
HAnimJoint92.name = "r_carpal_interphalangeal_1";
HAnimJoint92.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint92.center = new SFVec3f(new float[-0.2,0.8,0.05]);
HAnimJoint92.skinCoordIndex = new MFInt32(new int[260,261,262,263,264,265,266,267,268]);
HAnimJoint92.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint92.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint92.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint91.children = new MFNode();

HAnimJoint91.children[0] = HAnimJoint92;

HAnimJoint90.children = new MFNode();

HAnimJoint90.children[0] = HAnimJoint91;

HAnimJoint89.children = new MFNode();

HAnimJoint89.children[0] = HAnimJoint90;

HAnimJoint HAnimJoint93 = createNode("HAnimJoint");
HAnimJoint93.name = "r_carpometacarpal_2";
HAnimJoint93.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint93.center = new SFVec3f(new float[-0.2,0.84,-0.015]);
HAnimJoint93.skinCoordIndex = new MFInt32(new int[245,246]);
HAnimJoint93.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint93.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint93.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint94 = createNode("HAnimJoint");
HAnimJoint94.name = "r_metacarpophalangeal_2";
HAnimJoint94.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint94.center = new SFVec3f(new float[-0.2,0.793,-0.015]);
HAnimJoint94.skinCoordIndex = new MFInt32(new int[254,255,256,269,270,271,279]);
HAnimJoint94.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,1,1,1,0.5]);
HAnimJoint94.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint94.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint95 = createNode("HAnimJoint");
HAnimJoint95.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint95.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint95.center = new SFVec3f(new float[-0.2,0.745,-0.015]);
HAnimJoint95.skinCoordIndex = new MFInt32(new int[282,283,284,285]);
HAnimJoint95.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint95.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint95.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint96 = createNode("HAnimJoint");
HAnimJoint96.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint96.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint96.center = new SFVec3f(new float[-0.2,0.72,-0.015]);
HAnimJoint96.skinCoordIndex = new MFInt32(new int[286,287,288,289,290,291,292,293,294]);
HAnimJoint96.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint96.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint96.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint95.children = new MFNode();

HAnimJoint95.children[0] = HAnimJoint96;

HAnimJoint94.children = new MFNode();

HAnimJoint94.children[0] = HAnimJoint95;

HAnimJoint93.children = new MFNode();

HAnimJoint93.children[0] = HAnimJoint94;

HAnimJoint89.children[1] = HAnimJoint93;

HAnimJoint HAnimJoint97 = createNode("HAnimJoint");
HAnimJoint97.name = "r_carpometacarpal_3";
HAnimJoint97.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint97.center = new SFVec3f(new float[-0.2,0.835,-0.04]);
HAnimJoint97.skinCoordIndex = new MFInt32(new int[247,248]);
HAnimJoint97.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint97.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint97.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint98 = createNode("HAnimJoint");
HAnimJoint98.name = "r_metacarpophalangeal_3";
HAnimJoint98.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint98.center = new SFVec3f(new float[-0.2,0.788,-0.04]);
HAnimJoint98.skinCoordIndex = new MFInt32(new int[272,273,279,280]);
HAnimJoint98.skinCoordWeight = new MFFloat(new float[1,1,0.5,0.5]);
HAnimJoint98.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint98.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint99 = createNode("HAnimJoint");
HAnimJoint99.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint99.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint99.center = new SFVec3f(new float[-0.2,0.74,-0.04]);
HAnimJoint99.skinCoordIndex = new MFInt32(new int[295,296,297,298]);
HAnimJoint99.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint99.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint99.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint100 = createNode("HAnimJoint");
HAnimJoint100.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint100.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint100.center = new SFVec3f(new float[-0.2,0.7142,-0.04]);
HAnimJoint100.skinCoordIndex = new MFInt32(new int[299,300,301,302,303,304,305,306,307]);
HAnimJoint100.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint100.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint100.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint99.children = new MFNode();

HAnimJoint99.children[0] = HAnimJoint100;

HAnimJoint98.children = new MFNode();

HAnimJoint98.children[0] = HAnimJoint99;

HAnimJoint97.children = new MFNode();

HAnimJoint97.children[0] = HAnimJoint98;

HAnimJoint89.children[2] = HAnimJoint97;

HAnimJoint HAnimJoint101 = createNode("HAnimJoint");
HAnimJoint101.name = "r_carpometacarpal_4";
HAnimJoint101.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint101.center = new SFVec3f(new float[-0.2,0.835,-0.065]);
HAnimJoint101.skinCoordIndex = new MFInt32(new int[249,250]);
HAnimJoint101.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint101.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint101.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint102 = createNode("HAnimJoint");
HAnimJoint102.name = "r_metacarpophalangeal_4";
HAnimJoint102.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint102.center = new SFVec3f(new float[-0.2,0.793,-0.065]);
HAnimJoint102.skinCoordIndex = new MFInt32(new int[274,275,280,281]);
HAnimJoint102.skinCoordWeight = new MFFloat(new float[1,1,0.5,0.5]);
HAnimJoint102.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint102.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint103 = createNode("HAnimJoint");
HAnimJoint103.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint103.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint103.center = new SFVec3f(new float[-0.2,0.74,-0.065]);
HAnimJoint103.skinCoordIndex = new MFInt32(new int[308,309,310,311]);
HAnimJoint103.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint103.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint103.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint104 = createNode("HAnimJoint");
HAnimJoint104.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint104.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint104.center = new SFVec3f(new float[-0.2,0.7177,-0.065]);
HAnimJoint104.skinCoordIndex = new MFInt32(new int[312,313,314,315,316,317,318,319,320]);
HAnimJoint104.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint104.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint104.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint103.children = new MFNode();

HAnimJoint103.children[0] = HAnimJoint104;

HAnimJoint102.children = new MFNode();

HAnimJoint102.children[0] = HAnimJoint103;

HAnimJoint101.children = new MFNode();

HAnimJoint101.children[0] = HAnimJoint102;

HAnimJoint89.children[3] = HAnimJoint101;

HAnimJoint HAnimJoint105 = createNode("HAnimJoint");
HAnimJoint105.name = "r_carpometacarpal_5";
HAnimJoint105.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint105.center = new SFVec3f(new float[-0.2,0.84,-0.085]);
HAnimJoint105.skinCoordIndex = new MFInt32(new int[251,252,253,281]);
HAnimJoint105.skinCoordWeight = new MFFloat(new float[1,1,1,0.5]);
HAnimJoint105.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint105.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint106 = createNode("HAnimJoint");
HAnimJoint106.name = "r_metacarpophalangeal_5";
HAnimJoint106.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint106.center = new SFVec3f(new float[-0.2,0.79,-0.085]);
HAnimJoint106.skinCoordIndex = new MFInt32(new int[276,277,278]);
HAnimJoint106.skinCoordWeight = new MFFloat(new float[1,1,1]);
HAnimJoint106.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint106.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint107 = createNode("HAnimJoint");
HAnimJoint107.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint107.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint107.center = new SFVec3f(new float[-0.2,0.755,-0.085]);
HAnimJoint107.skinCoordIndex = new MFInt32(new int[321,322,323,324]);
HAnimJoint107.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint107.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint107.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint108 = createNode("HAnimJoint");
HAnimJoint108.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint108.DEF = "hanim_r_carpal_distal_interphalangeal_5";
HAnimJoint108.center = new SFVec3f(new float[-0.2,0.735,-0.09]);
HAnimJoint108.skinCoordIndex = new MFInt32(new int[325,326,327,328,329,330,331,332,333]);
HAnimJoint108.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint108.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint108.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint107.children = new MFNode();

HAnimJoint107.children[0] = HAnimJoint108;

HAnimJoint106.children = new MFNode();

HAnimJoint106.children[0] = HAnimJoint107;

HAnimJoint105.children = new MFNode();

HAnimJoint105.children[0] = HAnimJoint106;

HAnimJoint89.children[4] = HAnimJoint105;

HAnimJoint88.children = new MFNode();

HAnimJoint88.children[0] = HAnimJoint89;

HAnimJoint87.children = new MFNode();

HAnimJoint87.children[0] = HAnimJoint88;

HAnimJoint86.children = new MFNode();

HAnimJoint86.children[0] = HAnimJoint87;

HAnimJoint85.children = new MFNode();

HAnimJoint85.children[0] = HAnimJoint86;

HAnimJoint51.children[2] = HAnimJoint85;

HAnimJoint50.children = new MFNode();

HAnimJoint50.children[0] = HAnimJoint51;

HAnimJoint49.children = new MFNode();

HAnimJoint49.children[0] = HAnimJoint50;

HAnimJoint48.children = new MFNode();

HAnimJoint48.children[0] = HAnimJoint49;

HAnimJoint47.children = new MFNode();

HAnimJoint47.children[0] = HAnimJoint48;

HAnimJoint46.children = new MFNode();

HAnimJoint46.children[0] = HAnimJoint47;

HAnimJoint45.children = new MFNode();

HAnimJoint45.children[0] = HAnimJoint46;

HAnimJoint44.children = new MFNode();

HAnimJoint44.children[0] = HAnimJoint45;

HAnimJoint43.children = new MFNode();

HAnimJoint43.children[0] = HAnimJoint44;

HAnimJoint42.children = new MFNode();

HAnimJoint42.children[0] = HAnimJoint43;

HAnimJoint41.children = new MFNode();

HAnimJoint41.children[0] = HAnimJoint42;

HAnimJoint40.children = new MFNode();

HAnimJoint40.children[0] = HAnimJoint41;

HAnimJoint39.children = new MFNode();

HAnimJoint39.children[0] = HAnimJoint40;

HAnimJoint38.children = new MFNode();

HAnimJoint38.children[0] = HAnimJoint39;

HAnimJoint37.children = new MFNode();

HAnimJoint37.children[0] = HAnimJoint38;

HAnimJoint36.children = new MFNode();

HAnimJoint36.children[0] = HAnimJoint37;

HAnimJoint35.children = new MFNode();

HAnimJoint35.children[0] = HAnimJoint36;

HAnimJoint34.children = new MFNode();

HAnimJoint34.children[0] = HAnimJoint35;

HAnimJoint16.children[2] = HAnimJoint34;

HAnimHumanoid15.joints = new MFNode();

HAnimHumanoid15.joints[0] = HAnimJoint16;

HAnimJoint HAnimJoint109 = createNode("HAnimJoint");
HAnimJoint109.USE = "hanim_humanoid_root";
HAnimHumanoid15.joints[1] = HAnimJoint109;

HAnimJoint HAnimJoint110 = createNode("HAnimJoint");
HAnimJoint110.USE = "Joe_sacroiliac";
HAnimHumanoid15.joints[2] = HAnimJoint110;

HAnimJoint HAnimJoint111 = createNode("HAnimJoint");
HAnimJoint111.USE = "hanim_l_hip";
HAnimHumanoid15.joints[3] = HAnimJoint111;

HAnimJoint HAnimJoint112 = createNode("HAnimJoint");
HAnimJoint112.USE = "hanim_l_knee";
HAnimHumanoid15.joints[4] = HAnimJoint112;

HAnimJoint HAnimJoint113 = createNode("HAnimJoint");
HAnimJoint113.USE = "hanim_l_talocrural";
HAnimHumanoid15.joints[5] = HAnimJoint113;

HAnimJoint HAnimJoint114 = createNode("HAnimJoint");
HAnimJoint114.USE = "hanim_l_tarsometatarsal_2";
HAnimHumanoid15.joints[6] = HAnimJoint114;

HAnimJoint HAnimJoint115 = createNode("HAnimJoint");
HAnimJoint115.USE = "hanim_l_metatarsophalangeal_2";
HAnimHumanoid15.joints[7] = HAnimJoint115;

HAnimJoint HAnimJoint116 = createNode("HAnimJoint");
HAnimJoint116.USE = "hanim_l_metatarsal_2";
HAnimHumanoid15.joints[8] = HAnimJoint116;

HAnimJoint HAnimJoint117 = createNode("HAnimJoint");
HAnimJoint117.USE = "hanim_r_hip";
HAnimHumanoid15.joints[9] = HAnimJoint117;

HAnimJoint HAnimJoint118 = createNode("HAnimJoint");
HAnimJoint118.USE = "hanim_r_knee";
HAnimHumanoid15.joints[10] = HAnimJoint118;

HAnimJoint HAnimJoint119 = createNode("HAnimJoint");
HAnimJoint119.USE = "hanim_r_talocrural";
HAnimHumanoid15.joints[11] = HAnimJoint119;

HAnimJoint HAnimJoint120 = createNode("HAnimJoint");
HAnimJoint120.USE = "hanim_r_tarsometatarsal_2";
HAnimHumanoid15.joints[12] = HAnimJoint120;

HAnimJoint HAnimJoint121 = createNode("HAnimJoint");
HAnimJoint121.USE = "hanim_r_metatarsophalangeal_2";
HAnimHumanoid15.joints[13] = HAnimJoint121;

HAnimJoint HAnimJoint122 = createNode("HAnimJoint");
HAnimJoint122.USE = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimHumanoid15.joints[14] = HAnimJoint122;

HAnimJoint HAnimJoint123 = createNode("HAnimJoint");
HAnimJoint123.USE = "hanim_vl5";
HAnimHumanoid15.joints[15] = HAnimJoint123;

HAnimJoint HAnimJoint124 = createNode("HAnimJoint");
HAnimJoint124.USE = "hanim_vl4";
HAnimHumanoid15.joints[16] = HAnimJoint124;

HAnimJoint HAnimJoint125 = createNode("HAnimJoint");
HAnimJoint125.USE = "hanim_vl3";
HAnimHumanoid15.joints[17] = HAnimJoint125;

HAnimJoint HAnimJoint126 = createNode("HAnimJoint");
HAnimJoint126.USE = "hanim_vl2";
HAnimHumanoid15.joints[18] = HAnimJoint126;

HAnimJoint HAnimJoint127 = createNode("HAnimJoint");
HAnimJoint127.USE = "hanim_vl1";
HAnimHumanoid15.joints[19] = HAnimJoint127;

HAnimJoint HAnimJoint128 = createNode("HAnimJoint");
HAnimJoint128.USE = "hanim_vt12";
HAnimHumanoid15.joints[20] = HAnimJoint128;

HAnimJoint HAnimJoint129 = createNode("HAnimJoint");
HAnimJoint129.USE = "hanim_vt11";
HAnimHumanoid15.joints[21] = HAnimJoint129;

HAnimJoint HAnimJoint130 = createNode("HAnimJoint");
HAnimJoint130.USE = "hanim_vt10";
HAnimHumanoid15.joints[22] = HAnimJoint130;

HAnimJoint HAnimJoint131 = createNode("HAnimJoint");
HAnimJoint131.USE = "hanim_vt9";
HAnimHumanoid15.joints[23] = HAnimJoint131;

HAnimJoint HAnimJoint132 = createNode("HAnimJoint");
HAnimJoint132.USE = "hanim_vt8";
HAnimHumanoid15.joints[24] = HAnimJoint132;

HAnimJoint HAnimJoint133 = createNode("HAnimJoint");
HAnimJoint133.USE = "hanim_vt7";
HAnimHumanoid15.joints[25] = HAnimJoint133;

HAnimJoint HAnimJoint134 = createNode("HAnimJoint");
HAnimJoint134.USE = "hanim_vt6";
HAnimHumanoid15.joints[26] = HAnimJoint134;

HAnimJoint HAnimJoint135 = createNode("HAnimJoint");
HAnimJoint135.USE = "hanim_vt5";
HAnimHumanoid15.joints[27] = HAnimJoint135;

HAnimJoint HAnimJoint136 = createNode("HAnimJoint");
HAnimJoint136.USE = "hanim_vt4";
HAnimHumanoid15.joints[28] = HAnimJoint136;

HAnimJoint HAnimJoint137 = createNode("HAnimJoint");
HAnimJoint137.USE = "hanim_vt3";
HAnimHumanoid15.joints[29] = HAnimJoint137;

HAnimJoint HAnimJoint138 = createNode("HAnimJoint");
HAnimJoint138.USE = "hanim_vt2";
HAnimHumanoid15.joints[30] = HAnimJoint138;

HAnimJoint HAnimJoint139 = createNode("HAnimJoint");
HAnimJoint139.USE = "hanim_vt1";
HAnimHumanoid15.joints[31] = HAnimJoint139;

HAnimJoint HAnimJoint140 = createNode("HAnimJoint");
HAnimJoint140.USE = "hanim_vc7";
HAnimHumanoid15.joints[32] = HAnimJoint140;

HAnimJoint HAnimJoint141 = createNode("HAnimJoint");
HAnimJoint141.USE = "hanim_vc6";
HAnimHumanoid15.joints[33] = HAnimJoint141;

HAnimJoint HAnimJoint142 = createNode("HAnimJoint");
HAnimJoint142.USE = "hanim_vc5";
HAnimHumanoid15.joints[34] = HAnimJoint142;

HAnimJoint HAnimJoint143 = createNode("HAnimJoint");
HAnimJoint143.USE = "hanim_vc4";
HAnimHumanoid15.joints[35] = HAnimJoint143;

HAnimJoint HAnimJoint144 = createNode("HAnimJoint");
HAnimJoint144.USE = "hanim_vc3";
HAnimHumanoid15.joints[36] = HAnimJoint144;

HAnimJoint HAnimJoint145 = createNode("HAnimJoint");
HAnimJoint145.USE = "hanim_vc2";
HAnimHumanoid15.joints[37] = HAnimJoint145;

HAnimJoint HAnimJoint146 = createNode("HAnimJoint");
HAnimJoint146.USE = "hanim_vc1";
HAnimHumanoid15.joints[38] = HAnimJoint146;

HAnimJoint HAnimJoint147 = createNode("HAnimJoint");
HAnimJoint147.USE = "hanim_skullbase";
HAnimHumanoid15.joints[39] = HAnimJoint147;

HAnimJoint HAnimJoint148 = createNode("HAnimJoint");
HAnimJoint148.USE = "hanim_l_eyeball_joint";
HAnimHumanoid15.joints[40] = HAnimJoint148;

HAnimJoint HAnimJoint149 = createNode("HAnimJoint");
HAnimJoint149.USE = "hanim_r_eyeball_joint";
HAnimHumanoid15.joints[41] = HAnimJoint149;

HAnimJoint HAnimJoint150 = createNode("HAnimJoint");
HAnimJoint150.USE = "hanim_l_sternoclavicular";
HAnimHumanoid15.joints[42] = HAnimJoint150;

HAnimJoint HAnimJoint151 = createNode("HAnimJoint");
HAnimJoint151.USE = "hanim_l_acromioclavicular";
HAnimHumanoid15.joints[43] = HAnimJoint151;

HAnimJoint HAnimJoint152 = createNode("HAnimJoint");
HAnimJoint152.USE = "hanim_l_shoulder";
HAnimHumanoid15.joints[44] = HAnimJoint152;

HAnimJoint HAnimJoint153 = createNode("HAnimJoint");
HAnimJoint153.USE = "hanim_l_elbow";
HAnimHumanoid15.joints[45] = HAnimJoint153;

HAnimJoint HAnimJoint154 = createNode("HAnimJoint");
HAnimJoint154.USE = "hanim_l_radiocarpal";
HAnimHumanoid15.joints[46] = HAnimJoint154;

HAnimJoint HAnimJoint155 = createNode("HAnimJoint");
HAnimJoint155.USE = "hanim_l_carpometacarpal_1";
HAnimHumanoid15.joints[47] = HAnimJoint155;

HAnimJoint HAnimJoint156 = createNode("HAnimJoint");
HAnimJoint156.USE = "hanim_l_metacarpophalangeal_1";
HAnimHumanoid15.joints[48] = HAnimJoint156;

HAnimJoint HAnimJoint157 = createNode("HAnimJoint");
HAnimJoint157.USE = "hanim_l_carpal_interphalangeal_1";
HAnimHumanoid15.joints[49] = HAnimJoint157;

HAnimJoint HAnimJoint158 = createNode("HAnimJoint");
HAnimJoint158.USE = "hanim_l_carpometacarpal_2";
HAnimHumanoid15.joints[50] = HAnimJoint158;

HAnimJoint HAnimJoint159 = createNode("HAnimJoint");
HAnimJoint159.USE = "hanim_l_metacarpophalangeal_2";
HAnimHumanoid15.joints[51] = HAnimJoint159;

HAnimJoint HAnimJoint160 = createNode("HAnimJoint");
HAnimJoint160.USE = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid15.joints[52] = HAnimJoint160;

HAnimJoint HAnimJoint161 = createNode("HAnimJoint");
HAnimJoint161.USE = "hanim_l_carpal_distal_interphalangeal_2";
HAnimHumanoid15.joints[53] = HAnimJoint161;

HAnimJoint HAnimJoint162 = createNode("HAnimJoint");
HAnimJoint162.USE = "hanim_l_carpometacarpal_3";
HAnimHumanoid15.joints[54] = HAnimJoint162;

HAnimJoint HAnimJoint163 = createNode("HAnimJoint");
HAnimJoint163.USE = "hanim_l_metacarpophalangeal_3";
HAnimHumanoid15.joints[55] = HAnimJoint163;

HAnimJoint HAnimJoint164 = createNode("HAnimJoint");
HAnimJoint164.USE = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid15.joints[56] = HAnimJoint164;

HAnimJoint HAnimJoint165 = createNode("HAnimJoint");
HAnimJoint165.USE = "hanim_l_carpal_distal_interphalangeal_3";
HAnimHumanoid15.joints[57] = HAnimJoint165;

HAnimJoint HAnimJoint166 = createNode("HAnimJoint");
HAnimJoint166.USE = "hanim_l_carpometacarpal_4";
HAnimHumanoid15.joints[58] = HAnimJoint166;

HAnimJoint HAnimJoint167 = createNode("HAnimJoint");
HAnimJoint167.USE = "hanim_l_metacarpophalangeal_4";
HAnimHumanoid15.joints[59] = HAnimJoint167;

HAnimJoint HAnimJoint168 = createNode("HAnimJoint");
HAnimJoint168.USE = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid15.joints[60] = HAnimJoint168;

HAnimJoint HAnimJoint169 = createNode("HAnimJoint");
HAnimJoint169.USE = "hanim_l_carpal_distal_interphalangeal_4";
HAnimHumanoid15.joints[61] = HAnimJoint169;

HAnimJoint HAnimJoint170 = createNode("HAnimJoint");
HAnimJoint170.USE = "hanim_l_carpometacarpal_5";
HAnimHumanoid15.joints[62] = HAnimJoint170;

HAnimJoint HAnimJoint171 = createNode("HAnimJoint");
HAnimJoint171.USE = "hanim_l_metacarpophalangeal_5";
HAnimHumanoid15.joints[63] = HAnimJoint171;

HAnimJoint HAnimJoint172 = createNode("HAnimJoint");
HAnimJoint172.USE = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimHumanoid15.joints[64] = HAnimJoint172;

HAnimJoint HAnimJoint173 = createNode("HAnimJoint");
HAnimJoint173.USE = "hanim_l_carpal_distal_interphalangeal_5";
HAnimHumanoid15.joints[65] = HAnimJoint173;

HAnimJoint HAnimJoint174 = createNode("HAnimJoint");
HAnimJoint174.USE = "hanim_r_sternoclavicular";
HAnimHumanoid15.joints[66] = HAnimJoint174;

HAnimJoint HAnimJoint175 = createNode("HAnimJoint");
HAnimJoint175.USE = "hanim_r_acromioclavicular";
HAnimHumanoid15.joints[67] = HAnimJoint175;

HAnimJoint HAnimJoint176 = createNode("HAnimJoint");
HAnimJoint176.USE = "hanim_r_shoulder";
HAnimHumanoid15.joints[68] = HAnimJoint176;

HAnimJoint HAnimJoint177 = createNode("HAnimJoint");
HAnimJoint177.USE = "hanim_r_elbow";
HAnimHumanoid15.joints[69] = HAnimJoint177;

HAnimJoint HAnimJoint178 = createNode("HAnimJoint");
HAnimJoint178.USE = "hanim_r_radiocarpal";
HAnimHumanoid15.joints[70] = HAnimJoint178;

HAnimJoint HAnimJoint179 = createNode("HAnimJoint");
HAnimJoint179.USE = "hanim_r_carpometacarpal_1";
HAnimHumanoid15.joints[71] = HAnimJoint179;

HAnimJoint HAnimJoint180 = createNode("HAnimJoint");
HAnimJoint180.USE = "hanim_r_metacarpophalangeal_1";
HAnimHumanoid15.joints[72] = HAnimJoint180;

HAnimJoint HAnimJoint181 = createNode("HAnimJoint");
HAnimJoint181.USE = "hanim_r_carpal_interphalangeal_1";
HAnimHumanoid15.joints[73] = HAnimJoint181;

HAnimJoint HAnimJoint182 = createNode("HAnimJoint");
HAnimJoint182.USE = "hanim_r_carpometacarpal_2";
HAnimHumanoid15.joints[74] = HAnimJoint182;

HAnimJoint HAnimJoint183 = createNode("HAnimJoint");
HAnimJoint183.USE = "hanim_r_metacarpophalangeal_2";
HAnimHumanoid15.joints[75] = HAnimJoint183;

HAnimJoint HAnimJoint184 = createNode("HAnimJoint");
HAnimJoint184.USE = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid15.joints[76] = HAnimJoint184;

HAnimJoint HAnimJoint185 = createNode("HAnimJoint");
HAnimJoint185.USE = "hanim_r_carpal_distal_interphalangeal_2";
HAnimHumanoid15.joints[77] = HAnimJoint185;

HAnimJoint HAnimJoint186 = createNode("HAnimJoint");
HAnimJoint186.USE = "hanim_r_carpometacarpal_3";
HAnimHumanoid15.joints[78] = HAnimJoint186;

HAnimJoint HAnimJoint187 = createNode("HAnimJoint");
HAnimJoint187.USE = "hanim_r_metacarpophalangeal_3";
HAnimHumanoid15.joints[79] = HAnimJoint187;

HAnimJoint HAnimJoint188 = createNode("HAnimJoint");
HAnimJoint188.USE = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid15.joints[80] = HAnimJoint188;

HAnimJoint HAnimJoint189 = createNode("HAnimJoint");
HAnimJoint189.USE = "hanim_r_carpal_distal_interphalangeal_3";
HAnimHumanoid15.joints[81] = HAnimJoint189;

HAnimJoint HAnimJoint190 = createNode("HAnimJoint");
HAnimJoint190.USE = "hanim_r_carpometacarpal_4";
HAnimHumanoid15.joints[82] = HAnimJoint190;

HAnimJoint HAnimJoint191 = createNode("HAnimJoint");
HAnimJoint191.USE = "hanim_r_metacarpophalangeal_4";
HAnimHumanoid15.joints[83] = HAnimJoint191;

HAnimJoint HAnimJoint192 = createNode("HAnimJoint");
HAnimJoint192.USE = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid15.joints[84] = HAnimJoint192;

HAnimJoint HAnimJoint193 = createNode("HAnimJoint");
HAnimJoint193.USE = "hanim_r_carpal_distal_interphalangeal_4";
HAnimHumanoid15.joints[85] = HAnimJoint193;

HAnimJoint HAnimJoint194 = createNode("HAnimJoint");
HAnimJoint194.USE = "hanim_r_carpometacarpal_5";
HAnimHumanoid15.joints[86] = HAnimJoint194;

HAnimJoint HAnimJoint195 = createNode("HAnimJoint");
HAnimJoint195.USE = "hanim_r_metacarpophalangeal_5";
HAnimHumanoid15.joints[87] = HAnimJoint195;

HAnimJoint HAnimJoint196 = createNode("HAnimJoint");
HAnimJoint196.USE = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimHumanoid15.joints[88] = HAnimJoint196;

HAnimJoint HAnimJoint197 = createNode("HAnimJoint");
HAnimJoint197.USE = "hanim_r_carpal_distal_interphalangeal_5";
HAnimHumanoid15.joints[89] = HAnimJoint197;

Coordinate Coordinate198 = createNode("Coordinate");
Coordinate198.DEF = "JoeSkinCoord";
Coordinate198.point = new MFVec3f(new float[0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.0723,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.255,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168]);
HAnimHumanoid15.skinCoord = Coordinate198;

Shape Shape199 = createNode("Shape");
Appearance Appearance200 = createNode("Appearance");
Material Material201 = createNode("Material");
Material201.emissiveColor = new SFColor(new float[0.13,0.55,0.13]);
Appearance200.material = Material201;

ImageTexture ImageTexture202 = createNode("ImageTexture");
ImageTexture202.url = new MFString(new java.lang.String["bodytexture28.png"]);
Appearance200.texture = ImageTexture202;

Shape199.appearance = Appearance200;

IndexedFaceSet IndexedFaceSet203 = createNode("IndexedFaceSet");
IndexedFaceSet203.creaseAngle = 3.1;
IndexedFaceSet203.colorPerVertex = False;
IndexedFaceSet203.coordIndex = new MFInt32(new int[0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]);
Coordinate Coordinate204 = createNode("Coordinate");
Coordinate204.USE = "JoeSkinCoord";
IndexedFaceSet203.coord = Coordinate204;

Shape199.geometry = IndexedFaceSet203;

HAnimHumanoid15.skin[90] = Shape199;

Group14.children = new MFNode();

Group14.children[0] = HAnimHumanoid15;

children[7] = Group14;

Transform Transform205 = createNode("Transform");
Transform205.DEF = "SBall";
Transform205.translation = new SFVec3f(new float[-0.074397,0.094551,-0.074397]);
Transform205.rotation = new SFRotation(new float[-0.70711,0,-0.70711,1.231]);
Transform205.scale = new SFVec3f(new float[0.23,0.23,0.23]);
Shape Shape206 = createNode("Shape");
Appearance Appearance207 = createNode("Appearance");
Material Material208 = createNode("Material");
Material208.diffuseColor = new SFColor(new float[0,0.8353,0]);
Material208.specularColor = new SFColor(new float[0,0.6849,0]);
Material208.emissiveColor = new SFColor(new float[1,1,1]);
Appearance207.material = Material208;

ImageTexture ImageTexture209 = createNode("ImageTexture");
ImageTexture209.url = new MFString(new java.lang.String["bodytexture28.png"]);
Appearance207.texture = ImageTexture209;

Shape206.appearance = Appearance207;

IndexedFaceSet IndexedFaceSet210 = createNode("IndexedFaceSet");
IndexedFaceSet210.DEF = "ball";
IndexedFaceSet210.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,1,13,14,-1,1,14,2,-1,2,14,15,-1,2,15,3,-1,3,15,16,-1,3,16,4,-1,4,16,17,-1,4,17,5,-1,5,17,18,-1,5,18,6,-1,6,18,19,-1,6,19,7,-1,7,19,20,-1,7,20,8,-1,8,20,21,-1,8,21,9,-1,9,21,22,-1,9,22,10,-1,10,22,23,-1,10,23,11,-1,11,23,24,-1,11,24,12,-1,12,24,13,-1,12,13,1,-1,13,25,26,-1,13,26,14,-1,14,26,27,-1,14,27,15,-1,15,27,28,-1,15,28,16,-1,16,28,29,-1,16,29,17,-1,17,29,30,-1,17,30,18,-1,18,30,31,-1,18,31,19,-1,19,31,32,-1,19,32,20,-1,20,32,33,-1,20,33,21,-1,21,33,34,-1,21,34,22,-1,22,34,35,-1,22,35,23,-1,23,35,36,-1,23,36,24,-1,24,36,25,-1,24,25,13,-1,25,37,38,-1,25,38,26,-1,26,38,39,-1,26,39,27,-1,27,39,40,-1,27,40,28,-1,28,40,41,-1,28,41,29,-1,29,41,42,-1,29,42,30,-1,30,42,43,-1,30,43,31,-1,31,43,44,-1,31,44,32,-1,32,44,45,-1,32,45,33,-1,33,45,46,-1,33,46,34,-1,34,46,47,-1,34,47,35,-1,35,47,48,-1,35,48,36,-1,36,48,37,-1,36,37,25,-1,37,49,50,-1,37,50,38,-1,38,50,51,-1,38,51,39,-1,39,51,52,-1,39,52,40,-1,40,52,53,-1,40,53,41,-1,41,53,54,-1,41,54,42,-1,42,54,55,-1,42,55,43,-1,43,55,56,-1,43,56,44,-1,44,56,57,-1,44,57,45,-1,45,57,58,-1,45,58,46,-1,46,58,59,-1,46,59,47,-1,47,59,60,-1,47,60,48,-1,48,60,49,-1,48,49,37,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]);
Coordinate Coordinate211 = createNode("Coordinate");
Coordinate211.point = new MFVec3f(new float[0,0.4675,0,0,0.4049,-0.2338,-0.1169,0.4049,-0.2024,-0.2024,0.4049,-0.1169,-0.2338,0.4049,0,-0.2024,0.4049,0.1169,-0.1169,0.4049,0.2024,0,0.4049,0.2338,0.1169,0.4049,0.2024,0.2024,0.4049,0.1169,0.2338,0.4049,0,0.2024,0.4049,-0.1169,0.1169,0.4049,-0.2024,0,0.2338,-0.4049,-0.2024,0.2338,-0.3506,-0.3506,0.2338,-0.2024,-0.4049,0.2338,0,-0.3506,0.2338,0.2024,-0.2024,0.2338,0.3506,0,0.2338,0.4049,0.2024,0.2338,0.3506,0.3506,0.2338,0.2024,0.4049,0.2338,0,0.3506,0.2338,-0.2024,0.2024,0.2338,-0.3506,0,0,-0.4675,-0.2338,0,-0.4049,-0.4049,0,-0.2338,-0.4675,0,0,-0.4049,0,0.2338,-0.2338,0,0.4049,0,0,0.4675,0.2338,0,0.4049,0.4049,0,0.2338,0.4675,0,0,0.4049,0,-0.2338,0.2338,0,-0.4049,0,-0.2338,-0.4049,-0.2024,-0.2338,-0.3506,-0.3506,-0.2338,-0.2024,-0.4049,-0.2338,0,-0.3506,-0.2338,0.2024,-0.2024,-0.2338,0.3506,0,-0.2338,0.4049,0.2024,-0.2338,0.3506,0.3506,-0.2338,0.2024,0.4049,-0.2338,0,0.3506,-0.2338,-0.2024,0.2024,-0.2338,-0.3506,0,-0.4049,-0.2338,-0.1169,-0.4049,-0.2024,-0.2024,-0.4049,-0.1169,-0.2338,-0.4049,0,-0.2024,-0.4049,0.1169,-0.1169,-0.4049,0.2024,0,-0.4049,0.2338,0.1169,-0.4049,0.2024,0.2024,-0.4049,0.1169,0.2338,-0.4049,0,0.2024,-0.4049,-0.1169,0.1169,-0.4049,-0.2024,0,-0.4675,0]);
IndexedFaceSet210.coord = Coordinate211;

Shape206.geometry = IndexedFaceSet210;

Transform205.child = new undefined();

Transform205.child[0] = Shape206;

Viewpoint Viewpoint212 = createNode("Viewpoint");
Viewpoint212.DEF = "ballView";
Viewpoint212.description = "ball View";
Transform205.children[1] = Viewpoint212;

children[8] = Transform205;

Transform Transform213 = createNode("Transform");
Transform213.DEF = "scenecordsys";
Transform213.scale = new SFVec3f(new float[0.275,0.275,0.275]);
Inline Inline214 = createNode("Inline");
Inline214.global = True;
Inline214.url = new MFString(new java.lang.String["JointCoordinateAxes.x3dv"]);
Transform213.children = new MFNode();

Transform213.children[0] = Inline214;

children[9] = Transform213;

Transform Transform215 = createNode("Transform");
Transform215.DEF = "Circle0";
Transform215.scale = new SFVec3f(new float[1.175,1,1.175]);
Shape Shape216 = createNode("Shape");
Appearance Appearance217 = createNode("Appearance");
Material Material218 = createNode("Material");
Material218.diffuseColor = new SFColor(new float[0.9,0,0.7]);
Material218.emissiveColor = new SFColor(new float[0.42496,0.48398,1]);
Appearance217.material = Material218;

Shape216.appearance = Appearance217;

IndexedLineSet IndexedLineSet219 = createNode("IndexedLineSet");
IndexedLineSet219.DEF = "Orbit1";
IndexedLineSet219.coordIndex = new MFInt32(new int[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1]);
Coordinate Coordinate220 = createNode("Coordinate");
Coordinate220.point = new MFVec3f(new float[1,0,0,0.995,0,-0.105,0.979,0,-0.208,0.951,0,-0.309,0.914,0,-0.407,0.866,0,-0.5,0.809,0,-0.588,0.743,0,-0.669,0.669,0,-0.743,0.588,0,-0.809,0.5,0,-0.866,0.407,0,-0.914,0.309,0,-0.951,0.208,0,-0.978,0.105,0,-0.995,0,0,-1,-0.105,0,-0.99452,-0.208,0,-0.978,-0.309,0,-0.951,-0.407,0,-0.914,-0.5,0,-0.866,-0.588,0,-0.809,-0.669,0,-0.743,-0.743,0,-0.669,-0.809,0,-0.588,-0.866,0,-0.5,-0.914,0,-0.407,-0.951,0,-0.309,-0.978,0,-0.208,-0.995,0,-0.105,-1,0,0,-0.995,0,0.105,-0.978,0,0.208,-0.951,0,0.309,-0.914,0,0.407,-0.866,0,0.5,-0.809,0,0.588,-0.743,0,0.669,-0.669,0,0.743,-0.588,0,0.809,-0.5,0,0.866,-0.407,0,0.914,-0.309,0,0.951,-0.208,0,0.978,-0.105,0,0.995,0,0,1,0.105,0,0.995,0.208,0,0.978,0.309,0,0.951,0.407,0,0.914,0.5,0,0.866,0.588,0,0.809,0.669,0,0.743,0.743,0,0.669,0.809,0,0.588,0.866,0,0.5,0.914,0,0.407,0.951,0,0.309,0.978,0,0.208,0.995,0,0.104,1,0,0]);
IndexedLineSet219.coord = Coordinate220;

Shape216.geometry = IndexedLineSet219;

Transform215.child = new undefined();

Transform215.child[0] = Shape216;

children[10] = Transform215;

Transform Transform221 = createNode("Transform");
Transform221.DEF = "Circle1";
Transform221.scale = new SFVec3f(new float[0.5,1,0.5]);
Shape Shape222 = createNode("Shape");
Appearance Appearance223 = createNode("Appearance");
Material Material224 = createNode("Material");
Material224.diffuseColor = new SFColor(new float[0.9,0,0.7]);
Material224.emissiveColor = new SFColor(new float[0.42496,0.48398,1]);
Appearance223.material = Material224;

Shape222.appearance = Appearance223;

IndexedLineSet IndexedLineSet225 = createNode("IndexedLineSet");
IndexedLineSet225.USE = "Orbit1";
Shape222.geometry = IndexedLineSet225;

Transform221.child = new undefined();

Transform221.child[0] = Shape222;

children[11] = Transform221;

Transform Transform226 = createNode("Transform");
Transform226.DEF = "Circle2";
Transform226.scale = new SFVec3f(new float[0.25,1,0.25]);
Shape Shape227 = createNode("Shape");
Appearance Appearance228 = createNode("Appearance");
Material Material229 = createNode("Material");
Material229.diffuseColor = new SFColor(new float[0.9,0,0.7]);
Material229.emissiveColor = new SFColor(new float[0.42496,0.48398,1]);
Appearance228.material = Material229;

Shape227.appearance = Appearance228;

IndexedLineSet IndexedLineSet230 = createNode("IndexedLineSet");
IndexedLineSet230.USE = "Orbit1";
Shape227.geometry = IndexedLineSet230;

Transform226.child = new undefined();

Transform226.child[0] = Shape227;

children[12] = Transform226;

}
