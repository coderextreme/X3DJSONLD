const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("HAnim", 1));
scene.addMetaData("Joe", "No Reservations 20121221 20040109 x3d/hanim");
scene.addMetaData("generator", "x3d-tidy V2.2.3, https://www.npmjs.com/package/x3d-tidy");
scene.addMetaData("modified", "Wed, 17 Sep 2025 06:43:47 GMT");
await browser .loadComponents (scene);
let WorldInfo7 = browser.currentScene.createNode("WorldInfo");
WorldInfo7.title = "HANIM 2 LOA3 Skeleton and Skin sites and feature points for Joe_ by Joe";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo7;

let NavigationInfo8 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo8.type = new X3D.MFString([new X3D.SFString(", "), new X3D.SFString("FLYANY")]);
NavigationInfo8.speed = 2.5;
NavigationInfo8.headlight = False;
browser.currentScene.children[1] = NavigationInfo8;

let Viewpoint9 = browser.currentScene.createNode("Viewpoint");
Viewpoint9.DEF = "Joe_InclinedView";
Viewpoint9.description = "Joe_Inclined View";
Viewpoint9.position = new X3D.SFVec3f([1.62,1.05,3.06]);
Viewpoint9.orientation = new X3D.SFRotation([-0.113,0.993,0.0347,0.671]);
browser.currentScene.children[2] = Viewpoint9;

let Viewpoint10 = browser.currentScene.createNode("Viewpoint");
Viewpoint10.DEF = "Joe_IFrontView";
Viewpoint10.description = "Scene_Front View";
Viewpoint10.position = new X3D.SFVec3f([0,0.8,2.58]);
Viewpoint10.centerOfRotation = new X3D.SFVec3f([0,0.8,0]);
browser.currentScene.children[3] = Viewpoint10;

let Viewpoint11 = browser.currentScene.createNode("Viewpoint");
Viewpoint11.DEF = "Joe_ISideView";
Viewpoint11.description = "Scene_Side View";
Viewpoint11.position = new X3D.SFVec3f([2.6,0.5,0]);
Viewpoint11.orientation = new X3D.SFRotation([0,1,0,1.5708]);
Viewpoint11.centerOfRotation = new X3D.SFVec3f([0,0.8,0]);
browser.currentScene.children[4] = Viewpoint11;

let Viewpoint12 = browser.currentScene.createNode("Viewpoint");
Viewpoint12.DEF = "Joe_BackView";
Viewpoint12.description = "Scene_Back View";
Viewpoint12.position = new X3D.SFVec3f([0,2.5,-3]);
Viewpoint12.orientation = new X3D.SFRotation([0,1,0,3.14]);
Viewpoint12.centerOfRotation = new X3D.SFVec3f([0,1.5,0]);
browser.currentScene.children[5] = Viewpoint12;

let Viewpoint13 = browser.currentScene.createNode("Viewpoint");
Viewpoint13.DEF = "Joe_TopView";
Viewpoint13.description = "Scene_Top View";
Viewpoint13.position = new X3D.SFVec3f([0,3.5,0]);
Viewpoint13.orientation = new X3D.SFRotation([1,0,0,-1.5708]);
Viewpoint13.centerOfRotation = new X3D.SFVec3f([0,1.5,0]);
browser.currentScene.children[6] = Viewpoint13;

let Group14 = browser.currentScene.createNode("Group");
Group14.DEF = "Joe_Humanoid";
let HAnimHumanoid15 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid15.DEF = "JoeHuman";
let HAnimJoint16 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint16.name = "humanoid_root";
HAnimJoint16.DEF = "hanim_humanoid_root";
HAnimJoint16.translation = new X3D.SFVec3f([0.15315,0.019584,-0.22976]);
HAnimJoint16.rotation = new X3D.SFRotation([-1,0,0,0.040483]);
HAnimJoint16.center = new X3D.SFVec3f([0,0.875,0]);
HAnimJoint16.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint16.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSite17 = browser.currentScene.createNode("HAnimSite");
HAnimSite17.name = "RootFront";
HAnimSite17.DEF = "Joe_RootView1";
let Transform18 = browser.currentScene.createNode("Transform");
Transform18.DEF = "hanimcordsys";
Transform18.scale = new X3D.SFVec3f([0.175,0.175,0.175]);
let Inline19 = browser.currentScene.createNode("Inline");
Inline19.global = True;
Inline19.url = new X3D.MFString([new X3D.SFString("JointCoordinateAxes.x3dv")]);
Transform18YYY.children = new X3D.MFNode();

Transform18ZZZ.children[0] = Inline19;

let Viewpoint20 = browser.currentScene.createNode("Viewpoint");
Viewpoint20.DEF = "ballView_1";
Viewpoint20.description = "hanimcoord View";
Transform18ZZZ.children[1] = Viewpoint20;

HAnimSite17YYY.children = new X3D.MFNode();

HAnimSite17ZZZ.children[0] = Transform18;

HAnimJoint16YYY.child = new X3D.undefined();

HAnimJoint16ZZZ.child[0] = HAnimSite17;

let HAnimJoint21 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint21.name = "sacroiliac";
HAnimJoint21.DEF = "Joe_sacroiliac";
HAnimJoint21.center = new X3D.SFVec3f([0,0.92,0]);
HAnimJoint21.skinCoordIndex = new X3D.MFInt32([17,19,20,21,22,23,26,27,73,82,89,91,93]);
HAnimJoint21.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1,1,0.35,0.35,1]);
HAnimJoint21.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint21.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint22 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint22.name = "l_hip";
HAnimJoint22.DEF = "hanim_l_hip";
HAnimJoint22.rotation = new X3D.SFRotation([1,0,0,0.23414]);
HAnimJoint22.center = new X3D.SFVec3f([0.1,0.92,0]);
HAnimJoint22.skinCoordIndex = new X3D.MFInt32([89,90,94,95,96,97]);
HAnimJoint22.skinCoordWeight = new X3D.MFFloat([0.65,1,1,1,1,1]);
HAnimJoint22.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint22.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint23 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint23.name = "l_knee";
HAnimJoint23.DEF = "hanim_l_knee";
HAnimJoint23.rotation = new X3D.SFRotation([0.2106,0,0.97757,0.22603]);
HAnimJoint23.center = new X3D.SFVec3f([0.115,0.466,0]);
HAnimJoint23.skinCoordIndex = new X3D.MFInt32([334,335,336,337,338,339,340,341]);
HAnimJoint23.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
HAnimJoint23.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint23.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint24 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint24.name = "l_talocrural";
HAnimJoint24.DEF = "hanim_l_talocrural";
HAnimJoint24.rotation = new X3D.SFRotation([1,0,0,0.16032]);
HAnimJoint24.center = new X3D.SFVec3f([0.115,0.069,0]);
HAnimJoint24.skinCoordIndex = new X3D.MFInt32([342,343,344,345]);
HAnimJoint24.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
HAnimJoint24.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint24.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint25 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint25.name = "l_tarsometatarsal_2";
HAnimJoint25.DEF = "hanim_l_tarsometatarsal_2";
HAnimJoint25.center = new X3D.SFVec3f([0.115,0.031,0.03]);
HAnimJoint25.skinCoordIndex = new X3D.MFInt32([346,347,348,71]);
HAnimJoint25.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
HAnimJoint25.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint25.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint26 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint26.name = "l_metatarsophalangeal_2";
HAnimJoint26.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint26.center = new X3D.SFVec3f([0.115,0.037,0.09]);
HAnimJoint26.skinCoordIndex = new X3D.MFInt32([349,350,351,352]);
HAnimJoint26.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
HAnimJoint26.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint26.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint27 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint27.name = "l_metatarsal_2";
HAnimJoint27.DEF = "hanim_l_metatarsal_2";
HAnimJoint27.center = new X3D.SFVec3f([0.115,0.02,0.122]);
HAnimJoint27.skinCoordIndex = new X3D.MFInt32([353,354,355,356,357,358,359,360,361]);
HAnimJoint27.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
HAnimJoint27.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint27.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint26YYY.children = new X3D.MFNode();

HAnimJoint26ZZZ.children[0] = HAnimJoint27;

HAnimJoint25YYY.children = new X3D.MFNode();

HAnimJoint25ZZZ.children[0] = HAnimJoint26;

HAnimJoint24YYY.children = new X3D.MFNode();

HAnimJoint24ZZZ.children[0] = HAnimJoint25;

HAnimJoint23YYY.children = new X3D.MFNode();

HAnimJoint23ZZZ.children[0] = HAnimJoint24;

HAnimJoint22YYY.children = new X3D.MFNode();

HAnimJoint22ZZZ.children[0] = HAnimJoint23;

HAnimJoint21YYY.children = new X3D.MFNode();

HAnimJoint21ZZZ.children[0] = HAnimJoint22;

let HAnimJoint28 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint28.name = "r_hip";
HAnimJoint28.DEF = "hanim_r_hip";
HAnimJoint28.rotation = new X3D.SFRotation([1,0,0,0.03807]);
HAnimJoint28.center = new X3D.SFVec3f([-0.1,0.92,0]);
HAnimJoint28.skinCoordIndex = new X3D.MFInt32([91,92,98,99,100,101,362,363]);
HAnimJoint28.skinCoordWeight = new X3D.MFFloat([0.65,1,0.8,1,1,1,0.4,0.8]);
HAnimJoint28.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint28.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint29 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint29.name = "r_knee";
HAnimJoint29.DEF = "hanim_r_knee";
HAnimJoint29.rotation = new X3D.SFRotation([1,0,0,0.48097]);
HAnimJoint29.center = new X3D.SFVec3f([-0.05,0.466,0]);
HAnimJoint29.skinCoordIndex = new X3D.MFInt32([362,363,364,365,366,367,368,369,98]);
HAnimJoint29.skinCoordWeight = new X3D.MFFloat([0.6,0.2,1,1,1,1,1,1,0.2]);
HAnimJoint29.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint29.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint30 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint30.name = "r_talocrural";
HAnimJoint30.DEF = "hanim_r_talocrural";
HAnimJoint30.rotation = new X3D.SFRotation([1,0,0,0.48097]);
HAnimJoint30.center = new X3D.SFVec3f([-0.115,0.069,0]);
HAnimJoint30.skinCoordIndex = new X3D.MFInt32([370,371,372,373]);
HAnimJoint30.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
HAnimJoint30.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint30.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint31 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint31.name = "r_tarsometatarsal_2";
HAnimJoint31.DEF = "hanim_r_tarsometatarsal_2";
HAnimJoint31.center = new X3D.SFVec3f([-0.1,0.015,-0.01]);
HAnimJoint31.skinCoordIndex = new X3D.MFInt32([374,375,376]);
HAnimJoint31.skinCoordWeight = new X3D.MFFloat([1,1,1]);
HAnimJoint31.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint31.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint32 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint32.name = "r_metatarsophalangeal_2";
HAnimJoint32.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint32.center = new X3D.SFVec3f([-0.115,0.037,0.09]);
HAnimJoint32.skinCoordIndex = new X3D.MFInt32([377,378,379,380]);
HAnimJoint32.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
HAnimJoint32.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint32.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint33 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint33.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint33.DEF = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimJoint33.center = new X3D.SFVec3f([-0.1,0.01,0.14]);
HAnimJoint33.skinCoordIndex = new X3D.MFInt32([381,382,383,384,385,386,387,388,389]);
HAnimJoint33.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
HAnimJoint33.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint33.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint32YYY.children = new X3D.MFNode();

HAnimJoint32ZZZ.children[0] = HAnimJoint33;

HAnimJoint31YYY.children = new X3D.MFNode();

HAnimJoint31ZZZ.children[0] = HAnimJoint32;

HAnimJoint30YYY.children = new X3D.MFNode();

HAnimJoint30ZZZ.children[0] = HAnimJoint31;

HAnimJoint29YYY.children = new X3D.MFNode();

HAnimJoint29ZZZ.children[0] = HAnimJoint30;

HAnimJoint28YYY.children = new X3D.MFNode();

HAnimJoint28ZZZ.children[0] = HAnimJoint29;

HAnimJoint21ZZZ.children[1] = HAnimJoint28;

HAnimJoint16ZZZ.children[1] = HAnimJoint21;

let HAnimJoint34 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint34.name = "vl5";
HAnimJoint34.DEF = "hanim_vl5";
HAnimJoint34.center = new X3D.SFVec3f([0,1.045,-0.095]);
HAnimJoint34.skinCoordIndex = new X3D.MFInt32([28,76]);
HAnimJoint34.skinCoordWeight = new X3D.MFFloat([1,1]);
HAnimJoint34.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint34.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint35 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint35.name = "vl4";
HAnimJoint35.DEF = "hanim_vl4";
HAnimJoint35.center = new X3D.SFVec3f([0,1.068,-0.085]);
HAnimJoint35.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint35.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint36 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint36.name = "vl3";
HAnimJoint36.DEF = "hanim_vl3";
HAnimJoint36.center = new X3D.SFVec3f([0,1.092,-0.0725]);
HAnimJoint36.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint36.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint37 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint37.name = "vl2";
HAnimJoint37.DEF = "hanim_vl2";
HAnimJoint37.center = new X3D.SFVec3f([0,1.12,-0.065]);
HAnimJoint37.skinCoordIndex = new X3D.MFInt32([16,18,25,83,84,85,86,87,88]);
HAnimJoint37.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,0.7,1,0.8]);
HAnimJoint37.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint37.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint38 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint38.name = "vl1";
HAnimJoint38.DEF = "hanim_vl1";
HAnimJoint38.center = new X3D.SFVec3f([0,1.1459,-0.0625]);
HAnimJoint38.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint38.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint39 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint39.name = "vt12";
HAnimJoint39.DEF = "hanim_vt12";
HAnimJoint39.center = new X3D.SFVec3f([0,1.179,-0.068]);
HAnimJoint39.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint39.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint40 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint40.name = "vt11";
HAnimJoint40.DEF = "hanim_vt11";
HAnimJoint40.center = new X3D.SFVec3f([0,1.2679,-0.081]);
HAnimJoint40.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint40.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint41 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint41.name = "vt10";
HAnimJoint41.DEF = "hanim_vt10";
HAnimJoint41.center = new X3D.SFVec3f([0,1.242,-0.09]);
HAnimJoint41.skinCoordIndex = new X3D.MFInt32([15]);
HAnimJoint41.skinCoordWeight = new X3D.MFFloat([1]);
HAnimJoint41.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint41.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint42 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint42.name = "vt9";
HAnimJoint42.DEF = "hanim_vt9";
HAnimJoint42.center = new X3D.SFVec3f([0,1.268,-0.1]);
HAnimJoint42.skinCoordIndex = new X3D.MFInt32([13,14]);
HAnimJoint42.skinCoordWeight = new X3D.MFFloat([1,1]);
HAnimJoint42.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint42.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint43 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint43.name = "vt8";
HAnimJoint43.DEF = "hanim_vt8";
HAnimJoint43.center = new X3D.SFVec3f([0,1.294,-0.11]);
HAnimJoint43.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint43.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint44 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint44.name = "vt7";
HAnimJoint44.DEF = "hanim_vt7";
HAnimJoint44.center = new X3D.SFVec3f([0,1.323,-0.1155]);
HAnimJoint44.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint44.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint45 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint45.name = "vt6";
HAnimJoint45.DEF = "hanim_vt6";
HAnimJoint45.center = new X3D.SFVec3f([0,1.352,-0.12]);
HAnimJoint45.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint45.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint46 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint46.name = "vt5";
HAnimJoint46.DEF = "hanim_vt5";
HAnimJoint46.center = new X3D.SFVec3f([0,1.381,-0.1235]);
HAnimJoint46.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint46.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint47 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint47.name = "vt4";
HAnimJoint47.DEF = "hanim_vt4";
HAnimJoint47.center = new X3D.SFVec3f([0,1.41,-0.1235]);
HAnimJoint47.skinCoordIndex = new X3D.MFInt32([81]);
HAnimJoint47.skinCoordWeight = new X3D.MFFloat([1]);
HAnimJoint47.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint47.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint48 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint48.name = "vt3";
HAnimJoint48.DEF = "hanim_vt3";
HAnimJoint48.center = new X3D.SFVec3f([0,1.438,-0.12]);
HAnimJoint48.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint48.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint49 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint49.name = "vt2";
HAnimJoint49.DEF = "hanim_vt2";
HAnimJoint49.center = new X3D.SFVec3f([0,1.468,-0.105]);
HAnimJoint49.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint49.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint50 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint50.name = "vt1";
HAnimJoint50.DEF = "hanim_vt1";
HAnimJoint50.center = new X3D.SFVec3f([0,1.497,-0.09]);
HAnimJoint50.skinCoordIndex = new X3D.MFInt32([11,24]);
HAnimJoint50.skinCoordWeight = new X3D.MFFloat([1,1]);
HAnimJoint50.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint50.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint51 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint51.name = "vc7";
HAnimJoint51.DEF = "hanim_vc7";
HAnimJoint51.center = new X3D.SFVec3f([0,1.525,-0.072]);
HAnimJoint51.skinCoordIndex = new X3D.MFInt32([74,75]);
HAnimJoint51.skinCoordWeight = new X3D.MFFloat([1,1]);
HAnimJoint51.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint51.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint52 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint52.name = "vc6";
HAnimJoint52.DEF = "hanim_vc6";
HAnimJoint52.center = new X3D.SFVec3f([0,1.54,-0.05]);
HAnimJoint52.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint52.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint53 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint53.name = "vc5";
HAnimJoint53.DEF = "hanim_vc5";
HAnimJoint53.center = new X3D.SFVec3f([0,1.552,-0.035]);
HAnimJoint53.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint53.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint54 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint54.name = "vc4";
HAnimJoint54.DEF = "hanim_vc4";
HAnimJoint54.rotation = new X3D.SFRotation([0.98593,0,-0.16716,0.46046]);
HAnimJoint54.center = new X3D.SFVec3f([0,1.5675,-0.0256]);
HAnimJoint54.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint54.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint55 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint55.name = "vc3";
HAnimJoint55.DEF = "hanim_vc3";
HAnimJoint55.center = new X3D.SFVec3f([0,1.5823,-0.0185]);
HAnimJoint55.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint55.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint56 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint56.name = "vc2";
HAnimJoint56.DEF = "hanim_vc2";
HAnimJoint56.center = new X3D.SFVec3f([0,1.595,-0.0175]);
HAnimJoint56.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint56.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint57 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint57.name = "vc1";
HAnimJoint57.DEF = "hanim_vc1";
HAnimJoint57.center = new X3D.SFVec3f([0,1.61,-0.015]);
HAnimJoint57.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint57.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint58 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint58.name = "skullbase";
HAnimJoint58.DEF = "hanim_skullbase";
HAnimJoint58.center = new X3D.SFVec3f([0,1.63,-0.01]);
HAnimJoint58.skinCoordIndex = new X3D.MFInt32([0,1,2,3,4,5,6,7,8,9]);
HAnimJoint58.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1,1]);
HAnimJoint58.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint58.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint59 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint59.name = "l_eyeball_joint";
HAnimJoint59.DEF = "hanim_l_eyeball_joint";
HAnimJoint59.center = new X3D.SFVec3f([0.034,1.659,0.06]);
HAnimJoint59.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint59.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint58YYY.children = new X3D.MFNode();

HAnimJoint58ZZZ.children[0] = HAnimJoint59;

let HAnimJoint60 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint60.name = "r_eyeball_joint";
HAnimJoint60.DEF = "hanim_r_eyeball_joint";
HAnimJoint60.center = new X3D.SFVec3f([-0.034,1.659,0.06]);
HAnimJoint60.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint60.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint58ZZZ.children[1] = HAnimJoint60;

HAnimJoint57YYY.children = new X3D.MFNode();

HAnimJoint57ZZZ.children[0] = HAnimJoint58;

HAnimJoint56YYY.children = new X3D.MFNode();

HAnimJoint56ZZZ.children[0] = HAnimJoint57;

HAnimJoint55YYY.children = new X3D.MFNode();

HAnimJoint55ZZZ.children[0] = HAnimJoint56;

HAnimJoint54YYY.children = new X3D.MFNode();

HAnimJoint54ZZZ.children[0] = HAnimJoint55;

HAnimJoint53YYY.children = new X3D.MFNode();

HAnimJoint53ZZZ.children[0] = HAnimJoint54;

HAnimJoint52YYY.children = new X3D.MFNode();

HAnimJoint52ZZZ.children[0] = HAnimJoint53;

HAnimJoint51YYY.children = new X3D.MFNode();

HAnimJoint51ZZZ.children[0] = HAnimJoint52;

let HAnimJoint61 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint61.name = "l_sternoclavicular";
HAnimJoint61.DEF = "hanim_l_sternoclavicular";
HAnimJoint61.center = new X3D.SFVec3f([0.082,1.4488,-0.0353]);
HAnimJoint61.skinCoordIndex = new X3D.MFInt32([12]);
HAnimJoint61.skinCoordWeight = new X3D.MFFloat([1]);
HAnimJoint61.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint61.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint62 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint62.name = "l_acromioclavicular";
HAnimJoint62.DEF = "hanim_l_acromioclavicular";
HAnimJoint62.center = new X3D.SFVec3f([0.0962,1.4269,-0.0424]);
HAnimJoint62.skinCoordIndex = new X3D.MFInt32([79]);
HAnimJoint62.skinCoordWeight = new X3D.MFFloat([1]);
HAnimJoint62.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint62.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint63 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint63.name = "l_shoulder";
HAnimJoint63.DEF = "hanim_l_shoulder";
HAnimJoint63.rotation = new X3D.SFRotation([0,0,1,1.3884]);
HAnimJoint63.center = new X3D.SFVec3f([0.2,1.44,-0.04]);
HAnimJoint63.skinCoordIndex = new X3D.MFInt32([41,42,44,80,102,103,104,105]);
HAnimJoint63.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
HAnimJoint63.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint63.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint64 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint64.name = "l_elbow";
HAnimJoint64.DEF = "hanim_l_elbow";
HAnimJoint64.rotation = new X3D.SFRotation([-1,0,0,1.3339]);
HAnimJoint64.center = new X3D.SFVec3f([0.2,1.1388,-0.04]);
HAnimJoint64.skinCoordIndex = new X3D.MFInt32([45,46,47,109,110,111,112,113,115,116,117,118]);
HAnimJoint64.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimJoint64.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint64.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint65 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint65.name = "l_radiocarpal";
HAnimJoint65.DEF = "hanim_l_radiocarpal";
HAnimJoint65.rotation = new X3D.SFRotation([0,1,0,1.2033]);
HAnimJoint65.center = new X3D.SFVec3f([0.2,0.87,-0.04]);
HAnimJoint65.skinCoordIndex = new X3D.MFInt32([119,120,121,122,123,124,125,126]);
HAnimJoint65.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
HAnimJoint65.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint65.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint66 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint66.name = "l_carpometacarpal_1";
HAnimJoint66.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint66.center = new X3D.SFVec3f([0.1924,0.8472,-0.0534]);
HAnimJoint66.skinCoordIndex = new X3D.MFInt32([127,128]);
HAnimJoint66.skinCoordWeight = new X3D.MFFloat([1,1]);
HAnimJoint66.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint66.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint67 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint67.name = "l_metacarpophalangeal_1";
HAnimJoint67.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint67.center = new X3D.SFVec3f([0.1951,0.8226,0.0246]);
HAnimJoint67.skinCoordIndex = new X3D.MFInt32([138,139,140,141,142,143]);
HAnimJoint67.skinCoordWeight = new X3D.MFFloat([0.5,0.5,0.5,1,1,1]);
HAnimJoint67.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint67.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint68 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint68.name = "l_carpal_interphalangeal_1";
HAnimJoint68.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint68.center = new X3D.SFVec3f([0.1955,0.8159,0.0464]);
HAnimJoint68.skinCoordIndex = new X3D.MFInt32([144,145,146,147,148,149,150,151,152]);
HAnimJoint68.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
HAnimJoint68.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint68.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint67YYY.children = new X3D.MFNode();

HAnimJoint67ZZZ.children[0] = HAnimJoint68;

HAnimJoint66YYY.children = new X3D.MFNode();

HAnimJoint66ZZZ.children[0] = HAnimJoint67;

HAnimJoint65YYY.children = new X3D.MFNode();

HAnimJoint65ZZZ.children[0] = HAnimJoint66;

let HAnimJoint69 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint69.name = "l_carpometacarpal_2";
HAnimJoint69.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint69.center = new X3D.SFVec3f([0.1983,0.8024,-0.028]);
HAnimJoint69.skinCoordIndex = new X3D.MFInt32([129,130]);
HAnimJoint69.skinCoordWeight = new X3D.MFFloat([1,1]);
HAnimJoint69.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint69.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint70 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint70.name = "l_metacarpophalangeal_2";
HAnimJoint70.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint70.center = new X3D.SFVec3f([0.1983,0.7815,-0.028]);
HAnimJoint70.skinCoordIndex = new X3D.MFInt32([138,139,140,153,154,155,163]);
HAnimJoint70.skinCoordWeight = new X3D.MFFloat([0.5,0.5,0.5,1,1,1,0.5]);
HAnimJoint70.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint70.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint71 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint71.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint71.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint71.center = new X3D.SFVec3f([0.2017,0.7363,-0.0248]);
HAnimJoint71.skinCoordIndex = new X3D.MFInt32([166,167,168,169]);
HAnimJoint71.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
HAnimJoint71.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint71.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint72 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint72.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint72.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint72.center = new X3D.SFVec3f([0.2028,0.7139,-0.0236]);
HAnimJoint72.skinCoordIndex = new X3D.MFInt32([170,171,172,173,174,175,176,177,178]);
HAnimJoint72.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
HAnimJoint72.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint72.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint71YYY.children = new X3D.MFNode();

HAnimJoint71ZZZ.children[0] = HAnimJoint72;

HAnimJoint70YYY.children = new X3D.MFNode();

HAnimJoint70ZZZ.children[0] = HAnimJoint71;

HAnimJoint69YYY.children = new X3D.MFNode();

HAnimJoint69ZZZ.children[0] = HAnimJoint70;

HAnimJoint65ZZZ.children[1] = HAnimJoint69;

let HAnimJoint73 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint73.name = "l_carpometacarpal_3";
HAnimJoint73.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint73.center = new X3D.SFVec3f([0.1987,0.8029,-0.053]);
HAnimJoint73.skinCoordIndex = new X3D.MFInt32([131,132]);
HAnimJoint73.skinCoordWeight = new X3D.MFFloat([1,1]);
HAnimJoint73.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint73.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint74 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint74.name = "l_metacarpophalangeal_3";
HAnimJoint74.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint74.center = new X3D.SFVec3f([0.1987,0.7818,-0.053]);
HAnimJoint74.skinCoordIndex = new X3D.MFInt32([156,157,163,164]);
HAnimJoint74.skinCoordWeight = new X3D.MFFloat([1,1,0.5,0.5]);
HAnimJoint74.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint74.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint75 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint75.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint75.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint75.center = new X3D.SFVec3f([0.2013,0.7273,-0.0503]);
HAnimJoint75.skinCoordIndex = new X3D.MFInt32([179,180,181,182]);
HAnimJoint75.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
HAnimJoint75.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint75.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint76 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint76.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint76.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint76.center = new X3D.SFVec3f([0.2026,0.7011,-0.0494]);
HAnimJoint76.skinCoordIndex = new X3D.MFInt32([183,184,185,186,187,188,189,190,191]);
HAnimJoint76.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
HAnimJoint76.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint76.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint75YYY.children = new X3D.MFNode();

HAnimJoint75ZZZ.children[0] = HAnimJoint76;

HAnimJoint74YYY.children = new X3D.MFNode();

HAnimJoint74ZZZ.children[0] = HAnimJoint75;

HAnimJoint73YYY.children = new X3D.MFNode();

HAnimJoint73ZZZ.children[0] = HAnimJoint74;

HAnimJoint65ZZZ.children[2] = HAnimJoint73;

let HAnimJoint77 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint77.name = "l_carpometacarpal_4";
HAnimJoint77.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint77.center = new X3D.SFVec3f([0.1956,0.8019,-0.0794]);
HAnimJoint77.skinCoordIndex = new X3D.MFInt32([133,134]);
HAnimJoint77.skinCoordWeight = new X3D.MFFloat([1,1]);
HAnimJoint77.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint77.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint78 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint78.name = "l_metacarpophalangeal_4";
HAnimJoint78.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint78.center = new X3D.SFVec3f([0.1956,0.7815,-0.0794]);
HAnimJoint78.skinCoordIndex = new X3D.MFInt32([158,159,164,165]);
HAnimJoint78.skinCoordWeight = new X3D.MFFloat([1,1,0.5,0.5]);
HAnimJoint78.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint78.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint79 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint79.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint79.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint79.center = new X3D.SFVec3f([0.1973,0.7287,-0.0777]);
HAnimJoint79.skinCoordIndex = new X3D.MFInt32([192,193,194,195]);
HAnimJoint79.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
HAnimJoint79.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint79.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint80 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint80.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint80.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint80.center = new X3D.SFVec3f([0.1983,0.7045,-0.0767]);
HAnimJoint80.skinCoordIndex = new X3D.MFInt32([196,197,198,199,200,201,202,203,204]);
HAnimJoint80.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
HAnimJoint80.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint80.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint79YYY.children = new X3D.MFNode();

HAnimJoint79ZZZ.children[0] = HAnimJoint80;

HAnimJoint78YYY.children = new X3D.MFNode();

HAnimJoint78ZZZ.children[0] = HAnimJoint79;

HAnimJoint77YYY.children = new X3D.MFNode();

HAnimJoint77ZZZ.children[0] = HAnimJoint78;

HAnimJoint65ZZZ.children[3] = HAnimJoint77;

let HAnimJoint81 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint81.name = "l_carpometacarpal_5";
HAnimJoint81.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint81.center = new X3D.SFVec3f([0.1925,0.8066,-0.1036]);
HAnimJoint81.skinCoordIndex = new X3D.MFInt32([135,136,137,165]);
HAnimJoint81.skinCoordWeight = new X3D.MFFloat([1,1,1,0.5]);
HAnimJoint81.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint81.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint82 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint82.name = "l_metacarpophalangeal_5";
HAnimJoint82.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint82.center = new X3D.SFVec3f([0.1925,0.7866,-0.1036]);
HAnimJoint82.skinCoordIndex = new X3D.MFInt32([160,161,162]);
HAnimJoint82.skinCoordWeight = new X3D.MFFloat([1,1,1]);
HAnimJoint82.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint82.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint83 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint83.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint83.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint83.center = new X3D.SFVec3f([0.1938,0.7452,-0.1024]);
HAnimJoint83.skinCoordIndex = new X3D.MFInt32([205,206,207,208]);
HAnimJoint83.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
HAnimJoint83.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint83.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint84 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint84.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint84.DEF = "hanim_l_carpal_distal_interphalangeal_5";
HAnimJoint84.center = new X3D.SFVec3f([0.1948,0.7277,-0.1017]);
HAnimJoint84.skinCoordIndex = new X3D.MFInt32([209,210,211,212,213,214,215,216,217]);
HAnimJoint84.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
HAnimJoint84.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint84.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint83YYY.children = new X3D.MFNode();

HAnimJoint83ZZZ.children[0] = HAnimJoint84;

HAnimJoint82YYY.children = new X3D.MFNode();

HAnimJoint82ZZZ.children[0] = HAnimJoint83;

HAnimJoint81YYY.children = new X3D.MFNode();

HAnimJoint81ZZZ.children[0] = HAnimJoint82;

HAnimJoint65ZZZ.children[4] = HAnimJoint81;

HAnimJoint64YYY.children = new X3D.MFNode();

HAnimJoint64ZZZ.children[0] = HAnimJoint65;

HAnimJoint63YYY.children = new X3D.MFNode();

HAnimJoint63ZZZ.children[0] = HAnimJoint64;

HAnimJoint62YYY.children = new X3D.MFNode();

HAnimJoint62ZZZ.children[0] = HAnimJoint63;

HAnimJoint61YYY.children = new X3D.MFNode();

HAnimJoint61ZZZ.children[0] = HAnimJoint62;

HAnimJoint51ZZZ.children[1] = HAnimJoint61;

let HAnimJoint85 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint85.name = "r_sternoclavicular";
HAnimJoint85.DEF = "hanim_r_sternoclavicular";
HAnimJoint85.center = new X3D.SFVec3f([-0.03,1.46,0]);
HAnimJoint85.skinCoordIndex = new X3D.MFInt32([10]);
HAnimJoint85.skinCoordWeight = new X3D.MFFloat([1]);
HAnimJoint85.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint85.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint86 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint86.name = "r_acromioclavicular";
HAnimJoint86.DEF = "hanim_r_acromioclavicular";
HAnimJoint86.center = new X3D.SFVec3f([-0.09,1.41,-0.11]);
HAnimJoint86.skinCoordIndex = new X3D.MFInt32([77,29]);
HAnimJoint86.skinCoordWeight = new X3D.MFFloat([1,0.9]);
HAnimJoint86.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint86.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint87 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint87.name = "r_shoulder";
HAnimJoint87.DEF = "hanim_r_shoulder";
HAnimJoint87.rotation = new X3D.SFRotation([0,0,-1,1.7595]);
HAnimJoint87.center = new X3D.SFVec3f([-0.2,1.44,-0.04]);
HAnimJoint87.skinCoordIndex = new X3D.MFInt32([29,30,32,78,218,219,220,221,86,88]);
HAnimJoint87.skinCoordWeight = new X3D.MFFloat([0.1,1,1,1,1,1,1,1,0.3,0.2]);
HAnimJoint87.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint87.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint88 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint88.name = "r_elbow";
HAnimJoint88.DEF = "hanim_r_elbow";
HAnimJoint88.rotation = new X3D.SFRotation([-1,0,0,1.3339]);
HAnimJoint88.center = new X3D.SFVec3f([-0.2,1.1388,-0.04]);
HAnimJoint88.skinCoordIndex = new X3D.MFInt32([33,34,35,225,226,227,228,229,231,232,233,234]);
HAnimJoint88.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimJoint88.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint88.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint89 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint89.name = "r_radiocarpal";
HAnimJoint89.DEF = "hanim_r_radiocarpal";
HAnimJoint89.rotation = new X3D.SFRotation([0,1,0,0.077855]);
HAnimJoint89.center = new X3D.SFVec3f([-0.2,0.89,-0.04]);
HAnimJoint89.skinCoordIndex = new X3D.MFInt32([235,236,237,238,239,240,241,242]);
HAnimJoint89.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
HAnimJoint89.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint89.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint90 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint90.name = "r_carpometacarpal_1";
HAnimJoint90.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint90.center = new X3D.SFVec3f([-0.2,0.85,0]);
HAnimJoint90.skinCoordIndex = new X3D.MFInt32([243,244]);
HAnimJoint90.skinCoordWeight = new X3D.MFFloat([1,1]);
HAnimJoint90.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint90.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint91 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint91.name = "r_metacarpophalangeal_1";
HAnimJoint91.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint91.center = new X3D.SFVec3f([-0.2,0.82,0.03]);
HAnimJoint91.skinCoordIndex = new X3D.MFInt32([254,255,256,257,258,259]);
HAnimJoint91.skinCoordWeight = new X3D.MFFloat([0.5,0.5,0.5,1,1,1]);
HAnimJoint91.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint91.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint92 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint92.name = "r_carpal_interphalangeal_1";
HAnimJoint92.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint92.center = new X3D.SFVec3f([-0.2,0.8,0.05]);
HAnimJoint92.skinCoordIndex = new X3D.MFInt32([260,261,262,263,264,265,266,267,268]);
HAnimJoint92.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
HAnimJoint92.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint92.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint91YYY.children = new X3D.MFNode();

HAnimJoint91ZZZ.children[0] = HAnimJoint92;

HAnimJoint90YYY.children = new X3D.MFNode();

HAnimJoint90ZZZ.children[0] = HAnimJoint91;

HAnimJoint89YYY.children = new X3D.MFNode();

HAnimJoint89ZZZ.children[0] = HAnimJoint90;

let HAnimJoint93 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint93.name = "r_carpometacarpal_2";
HAnimJoint93.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint93.center = new X3D.SFVec3f([-0.2,0.84,-0.015]);
HAnimJoint93.skinCoordIndex = new X3D.MFInt32([245,246]);
HAnimJoint93.skinCoordWeight = new X3D.MFFloat([1,1]);
HAnimJoint93.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint93.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint94 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint94.name = "r_metacarpophalangeal_2";
HAnimJoint94.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint94.center = new X3D.SFVec3f([-0.2,0.793,-0.015]);
HAnimJoint94.skinCoordIndex = new X3D.MFInt32([254,255,256,269,270,271,279]);
HAnimJoint94.skinCoordWeight = new X3D.MFFloat([0.5,0.5,0.5,1,1,1,0.5]);
HAnimJoint94.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint94.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint95 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint95.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint95.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint95.center = new X3D.SFVec3f([-0.2,0.745,-0.015]);
HAnimJoint95.skinCoordIndex = new X3D.MFInt32([282,283,284,285]);
HAnimJoint95.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
HAnimJoint95.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint95.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint96 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint96.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint96.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint96.center = new X3D.SFVec3f([-0.2,0.72,-0.015]);
HAnimJoint96.skinCoordIndex = new X3D.MFInt32([286,287,288,289,290,291,292,293,294]);
HAnimJoint96.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
HAnimJoint96.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint96.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint95YYY.children = new X3D.MFNode();

HAnimJoint95ZZZ.children[0] = HAnimJoint96;

HAnimJoint94YYY.children = new X3D.MFNode();

HAnimJoint94ZZZ.children[0] = HAnimJoint95;

HAnimJoint93YYY.children = new X3D.MFNode();

HAnimJoint93ZZZ.children[0] = HAnimJoint94;

HAnimJoint89ZZZ.children[1] = HAnimJoint93;

let HAnimJoint97 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint97.name = "r_carpometacarpal_3";
HAnimJoint97.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint97.center = new X3D.SFVec3f([-0.2,0.835,-0.04]);
HAnimJoint97.skinCoordIndex = new X3D.MFInt32([247,248]);
HAnimJoint97.skinCoordWeight = new X3D.MFFloat([1,1]);
HAnimJoint97.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint97.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint98 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint98.name = "r_metacarpophalangeal_3";
HAnimJoint98.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint98.center = new X3D.SFVec3f([-0.2,0.788,-0.04]);
HAnimJoint98.skinCoordIndex = new X3D.MFInt32([272,273,279,280]);
HAnimJoint98.skinCoordWeight = new X3D.MFFloat([1,1,0.5,0.5]);
HAnimJoint98.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint98.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint99 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint99.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint99.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint99.center = new X3D.SFVec3f([-0.2,0.74,-0.04]);
HAnimJoint99.skinCoordIndex = new X3D.MFInt32([295,296,297,298]);
HAnimJoint99.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
HAnimJoint99.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint99.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint100 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint100.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint100.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint100.center = new X3D.SFVec3f([-0.2,0.7142,-0.04]);
HAnimJoint100.skinCoordIndex = new X3D.MFInt32([299,300,301,302,303,304,305,306,307]);
HAnimJoint100.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
HAnimJoint100.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint100.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint99YYY.children = new X3D.MFNode();

HAnimJoint99ZZZ.children[0] = HAnimJoint100;

HAnimJoint98YYY.children = new X3D.MFNode();

HAnimJoint98ZZZ.children[0] = HAnimJoint99;

HAnimJoint97YYY.children = new X3D.MFNode();

HAnimJoint97ZZZ.children[0] = HAnimJoint98;

HAnimJoint89ZZZ.children[2] = HAnimJoint97;

let HAnimJoint101 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint101.name = "r_carpometacarpal_4";
HAnimJoint101.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint101.center = new X3D.SFVec3f([-0.2,0.835,-0.065]);
HAnimJoint101.skinCoordIndex = new X3D.MFInt32([249,250]);
HAnimJoint101.skinCoordWeight = new X3D.MFFloat([1,1]);
HAnimJoint101.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint101.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint102 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint102.name = "r_metacarpophalangeal_4";
HAnimJoint102.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint102.center = new X3D.SFVec3f([-0.2,0.793,-0.065]);
HAnimJoint102.skinCoordIndex = new X3D.MFInt32([274,275,280,281]);
HAnimJoint102.skinCoordWeight = new X3D.MFFloat([1,1,0.5,0.5]);
HAnimJoint102.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint102.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint103 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint103.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint103.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint103.center = new X3D.SFVec3f([-0.2,0.74,-0.065]);
HAnimJoint103.skinCoordIndex = new X3D.MFInt32([308,309,310,311]);
HAnimJoint103.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
HAnimJoint103.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint103.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint104 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint104.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint104.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint104.center = new X3D.SFVec3f([-0.2,0.7177,-0.065]);
HAnimJoint104.skinCoordIndex = new X3D.MFInt32([312,313,314,315,316,317,318,319,320]);
HAnimJoint104.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
HAnimJoint104.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint104.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint103YYY.children = new X3D.MFNode();

HAnimJoint103ZZZ.children[0] = HAnimJoint104;

HAnimJoint102YYY.children = new X3D.MFNode();

HAnimJoint102ZZZ.children[0] = HAnimJoint103;

HAnimJoint101YYY.children = new X3D.MFNode();

HAnimJoint101ZZZ.children[0] = HAnimJoint102;

HAnimJoint89ZZZ.children[3] = HAnimJoint101;

let HAnimJoint105 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint105.name = "r_carpometacarpal_5";
HAnimJoint105.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint105.center = new X3D.SFVec3f([-0.2,0.84,-0.085]);
HAnimJoint105.skinCoordIndex = new X3D.MFInt32([251,252,253,281]);
HAnimJoint105.skinCoordWeight = new X3D.MFFloat([1,1,1,0.5]);
HAnimJoint105.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint105.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint106 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint106.name = "r_metacarpophalangeal_5";
HAnimJoint106.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint106.center = new X3D.SFVec3f([-0.2,0.79,-0.085]);
HAnimJoint106.skinCoordIndex = new X3D.MFInt32([276,277,278]);
HAnimJoint106.skinCoordWeight = new X3D.MFFloat([1,1,1]);
HAnimJoint106.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint106.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint107 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint107.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint107.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint107.center = new X3D.SFVec3f([-0.2,0.755,-0.085]);
HAnimJoint107.skinCoordIndex = new X3D.MFInt32([321,322,323,324]);
HAnimJoint107.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
HAnimJoint107.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint107.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint108 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint108.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint108.DEF = "hanim_r_carpal_distal_interphalangeal_5";
HAnimJoint108.center = new X3D.SFVec3f([-0.2,0.735,-0.09]);
HAnimJoint108.skinCoordIndex = new X3D.MFInt32([325,326,327,328,329,330,331,332,333]);
HAnimJoint108.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
HAnimJoint108.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint108.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint107YYY.children = new X3D.MFNode();

HAnimJoint107ZZZ.children[0] = HAnimJoint108;

HAnimJoint106YYY.children = new X3D.MFNode();

HAnimJoint106ZZZ.children[0] = HAnimJoint107;

HAnimJoint105YYY.children = new X3D.MFNode();

HAnimJoint105ZZZ.children[0] = HAnimJoint106;

HAnimJoint89ZZZ.children[4] = HAnimJoint105;

HAnimJoint88YYY.children = new X3D.MFNode();

HAnimJoint88ZZZ.children[0] = HAnimJoint89;

HAnimJoint87YYY.children = new X3D.MFNode();

HAnimJoint87ZZZ.children[0] = HAnimJoint88;

HAnimJoint86YYY.children = new X3D.MFNode();

HAnimJoint86ZZZ.children[0] = HAnimJoint87;

HAnimJoint85YYY.children = new X3D.MFNode();

HAnimJoint85ZZZ.children[0] = HAnimJoint86;

HAnimJoint51ZZZ.children[2] = HAnimJoint85;

HAnimJoint50YYY.children = new X3D.MFNode();

HAnimJoint50ZZZ.children[0] = HAnimJoint51;

HAnimJoint49YYY.children = new X3D.MFNode();

HAnimJoint49ZZZ.children[0] = HAnimJoint50;

HAnimJoint48YYY.children = new X3D.MFNode();

HAnimJoint48ZZZ.children[0] = HAnimJoint49;

HAnimJoint47YYY.children = new X3D.MFNode();

HAnimJoint47ZZZ.children[0] = HAnimJoint48;

HAnimJoint46YYY.children = new X3D.MFNode();

HAnimJoint46ZZZ.children[0] = HAnimJoint47;

HAnimJoint45YYY.children = new X3D.MFNode();

HAnimJoint45ZZZ.children[0] = HAnimJoint46;

HAnimJoint44YYY.children = new X3D.MFNode();

HAnimJoint44ZZZ.children[0] = HAnimJoint45;

HAnimJoint43YYY.children = new X3D.MFNode();

HAnimJoint43ZZZ.children[0] = HAnimJoint44;

HAnimJoint42YYY.children = new X3D.MFNode();

HAnimJoint42ZZZ.children[0] = HAnimJoint43;

HAnimJoint41YYY.children = new X3D.MFNode();

HAnimJoint41ZZZ.children[0] = HAnimJoint42;

HAnimJoint40YYY.children = new X3D.MFNode();

HAnimJoint40ZZZ.children[0] = HAnimJoint41;

HAnimJoint39YYY.children = new X3D.MFNode();

HAnimJoint39ZZZ.children[0] = HAnimJoint40;

HAnimJoint38YYY.children = new X3D.MFNode();

HAnimJoint38ZZZ.children[0] = HAnimJoint39;

HAnimJoint37YYY.children = new X3D.MFNode();

HAnimJoint37ZZZ.children[0] = HAnimJoint38;

HAnimJoint36YYY.children = new X3D.MFNode();

HAnimJoint36ZZZ.children[0] = HAnimJoint37;

HAnimJoint35YYY.children = new X3D.MFNode();

HAnimJoint35ZZZ.children[0] = HAnimJoint36;

HAnimJoint34YYY.children = new X3D.MFNode();

HAnimJoint34ZZZ.children[0] = HAnimJoint35;

HAnimJoint16ZZZ.children[2] = HAnimJoint34;

HAnimHumanoid15.joints = new X3D.MFNode();

HAnimHumanoid15XXX.joints[0] = HAnimJoint16;

let HAnimJoint109 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint109.USE = "hanim_humanoid_root";
joints[1] = HAnimJoint109;

let HAnimJoint110 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint110.USE = "Joe_sacroiliac";
joints[2] = HAnimJoint110;

let HAnimJoint111 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint111.USE = "hanim_l_hip";
joints[3] = HAnimJoint111;

let HAnimJoint112 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint112.USE = "hanim_l_knee";
joints[4] = HAnimJoint112;

let HAnimJoint113 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint113.USE = "hanim_l_talocrural";
joints[5] = HAnimJoint113;

let HAnimJoint114 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint114.USE = "hanim_l_tarsometatarsal_2";
joints[6] = HAnimJoint114;

let HAnimJoint115 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint115.USE = "hanim_l_metatarsophalangeal_2";
joints[7] = HAnimJoint115;

let HAnimJoint116 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint116.USE = "hanim_l_metatarsal_2";
joints[8] = HAnimJoint116;

let HAnimJoint117 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint117.USE = "hanim_r_hip";
joints[9] = HAnimJoint117;

let HAnimJoint118 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint118.USE = "hanim_r_knee";
joints[10] = HAnimJoint118;

let HAnimJoint119 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint119.USE = "hanim_r_talocrural";
joints[11] = HAnimJoint119;

let HAnimJoint120 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint120.USE = "hanim_r_tarsometatarsal_2";
joints[12] = HAnimJoint120;

let HAnimJoint121 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint121.USE = "hanim_r_metatarsophalangeal_2";
joints[13] = HAnimJoint121;

let HAnimJoint122 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint122.USE = "hanim_r_tarsal_distal_interphalangeal_2";
joints[14] = HAnimJoint122;

let HAnimJoint123 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint123.USE = "hanim_vl5";
joints[15] = HAnimJoint123;

let HAnimJoint124 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint124.USE = "hanim_vl4";
joints[16] = HAnimJoint124;

let HAnimJoint125 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint125.USE = "hanim_vl3";
joints[17] = HAnimJoint125;

let HAnimJoint126 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint126.USE = "hanim_vl2";
joints[18] = HAnimJoint126;

let HAnimJoint127 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint127.USE = "hanim_vl1";
joints[19] = HAnimJoint127;

let HAnimJoint128 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint128.USE = "hanim_vt12";
joints[20] = HAnimJoint128;

let HAnimJoint129 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint129.USE = "hanim_vt11";
joints[21] = HAnimJoint129;

let HAnimJoint130 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint130.USE = "hanim_vt10";
joints[22] = HAnimJoint130;

let HAnimJoint131 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint131.USE = "hanim_vt9";
joints[23] = HAnimJoint131;

let HAnimJoint132 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint132.USE = "hanim_vt8";
joints[24] = HAnimJoint132;

let HAnimJoint133 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint133.USE = "hanim_vt7";
joints[25] = HAnimJoint133;

let HAnimJoint134 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint134.USE = "hanim_vt6";
joints[26] = HAnimJoint134;

let HAnimJoint135 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint135.USE = "hanim_vt5";
joints[27] = HAnimJoint135;

let HAnimJoint136 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint136.USE = "hanim_vt4";
joints[28] = HAnimJoint136;

let HAnimJoint137 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint137.USE = "hanim_vt3";
joints[29] = HAnimJoint137;

let HAnimJoint138 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint138.USE = "hanim_vt2";
joints[30] = HAnimJoint138;

let HAnimJoint139 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint139.USE = "hanim_vt1";
joints[31] = HAnimJoint139;

let HAnimJoint140 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint140.USE = "hanim_vc7";
joints[32] = HAnimJoint140;

let HAnimJoint141 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint141.USE = "hanim_vc6";
joints[33] = HAnimJoint141;

let HAnimJoint142 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint142.USE = "hanim_vc5";
joints[34] = HAnimJoint142;

let HAnimJoint143 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint143.USE = "hanim_vc4";
joints[35] = HAnimJoint143;

let HAnimJoint144 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint144.USE = "hanim_vc3";
joints[36] = HAnimJoint144;

let HAnimJoint145 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint145.USE = "hanim_vc2";
joints[37] = HAnimJoint145;

let HAnimJoint146 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint146.USE = "hanim_vc1";
joints[38] = HAnimJoint146;

let HAnimJoint147 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint147.USE = "hanim_skullbase";
joints[39] = HAnimJoint147;

let HAnimJoint148 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint148.USE = "hanim_l_eyeball_joint";
joints[40] = HAnimJoint148;

let HAnimJoint149 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint149.USE = "hanim_r_eyeball_joint";
joints[41] = HAnimJoint149;

let HAnimJoint150 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint150.USE = "hanim_l_sternoclavicular";
joints[42] = HAnimJoint150;

let HAnimJoint151 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint151.USE = "hanim_l_acromioclavicular";
joints[43] = HAnimJoint151;

let HAnimJoint152 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint152.USE = "hanim_l_shoulder";
joints[44] = HAnimJoint152;

let HAnimJoint153 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint153.USE = "hanim_l_elbow";
joints[45] = HAnimJoint153;

let HAnimJoint154 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint154.USE = "hanim_l_radiocarpal";
joints[46] = HAnimJoint154;

let HAnimJoint155 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint155.USE = "hanim_l_carpometacarpal_1";
joints[47] = HAnimJoint155;

let HAnimJoint156 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint156.USE = "hanim_l_metacarpophalangeal_1";
joints[48] = HAnimJoint156;

let HAnimJoint157 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint157.USE = "hanim_l_carpal_interphalangeal_1";
joints[49] = HAnimJoint157;

let HAnimJoint158 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint158.USE = "hanim_l_carpometacarpal_2";
joints[50] = HAnimJoint158;

let HAnimJoint159 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint159.USE = "hanim_l_metacarpophalangeal_2";
joints[51] = HAnimJoint159;

let HAnimJoint160 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint160.USE = "hanim_l_carpal_proximal_interphalangeal_2";
joints[52] = HAnimJoint160;

let HAnimJoint161 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint161.USE = "hanim_l_carpal_distal_interphalangeal_2";
joints[53] = HAnimJoint161;

let HAnimJoint162 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint162.USE = "hanim_l_carpometacarpal_3";
joints[54] = HAnimJoint162;

let HAnimJoint163 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint163.USE = "hanim_l_metacarpophalangeal_3";
joints[55] = HAnimJoint163;

let HAnimJoint164 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint164.USE = "hanim_l_carpal_proximal_interphalangeal_3";
joints[56] = HAnimJoint164;

let HAnimJoint165 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint165.USE = "hanim_l_carpal_distal_interphalangeal_3";
joints[57] = HAnimJoint165;

let HAnimJoint166 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint166.USE = "hanim_l_carpometacarpal_4";
joints[58] = HAnimJoint166;

let HAnimJoint167 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint167.USE = "hanim_l_metacarpophalangeal_4";
joints[59] = HAnimJoint167;

let HAnimJoint168 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint168.USE = "hanim_l_carpal_proximal_interphalangeal_4";
joints[60] = HAnimJoint168;

let HAnimJoint169 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint169.USE = "hanim_l_carpal_distal_interphalangeal_4";
joints[61] = HAnimJoint169;

let HAnimJoint170 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint170.USE = "hanim_l_carpometacarpal_5";
joints[62] = HAnimJoint170;

let HAnimJoint171 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint171.USE = "hanim_l_metacarpophalangeal_5";
joints[63] = HAnimJoint171;

let HAnimJoint172 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint172.USE = "hanim_l_carpal_proximal_interphalangeal_5";
joints[64] = HAnimJoint172;

let HAnimJoint173 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint173.USE = "hanim_l_carpal_distal_interphalangeal_5";
joints[65] = HAnimJoint173;

let HAnimJoint174 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint174.USE = "hanim_r_sternoclavicular";
joints[66] = HAnimJoint174;

let HAnimJoint175 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint175.USE = "hanim_r_acromioclavicular";
joints[67] = HAnimJoint175;

let HAnimJoint176 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint176.USE = "hanim_r_shoulder";
joints[68] = HAnimJoint176;

let HAnimJoint177 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint177.USE = "hanim_r_elbow";
joints[69] = HAnimJoint177;

let HAnimJoint178 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint178.USE = "hanim_r_radiocarpal";
joints[70] = HAnimJoint178;

let HAnimJoint179 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint179.USE = "hanim_r_carpometacarpal_1";
joints[71] = HAnimJoint179;

let HAnimJoint180 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint180.USE = "hanim_r_metacarpophalangeal_1";
joints[72] = HAnimJoint180;

let HAnimJoint181 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint181.USE = "hanim_r_carpal_interphalangeal_1";
joints[73] = HAnimJoint181;

let HAnimJoint182 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint182.USE = "hanim_r_carpometacarpal_2";
joints[74] = HAnimJoint182;

let HAnimJoint183 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint183.USE = "hanim_r_metacarpophalangeal_2";
joints[75] = HAnimJoint183;

let HAnimJoint184 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint184.USE = "hanim_r_carpal_proximal_interphalangeal_2";
joints[76] = HAnimJoint184;

let HAnimJoint185 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint185.USE = "hanim_r_carpal_distal_interphalangeal_2";
joints[77] = HAnimJoint185;

let HAnimJoint186 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint186.USE = "hanim_r_carpometacarpal_3";
joints[78] = HAnimJoint186;

let HAnimJoint187 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint187.USE = "hanim_r_metacarpophalangeal_3";
joints[79] = HAnimJoint187;

let HAnimJoint188 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint188.USE = "hanim_r_carpal_proximal_interphalangeal_3";
joints[80] = HAnimJoint188;

let HAnimJoint189 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint189.USE = "hanim_r_carpal_distal_interphalangeal_3";
joints[81] = HAnimJoint189;

let HAnimJoint190 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint190.USE = "hanim_r_carpometacarpal_4";
joints[82] = HAnimJoint190;

let HAnimJoint191 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint191.USE = "hanim_r_metacarpophalangeal_4";
joints[83] = HAnimJoint191;

let HAnimJoint192 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint192.USE = "hanim_r_carpal_proximal_interphalangeal_4";
joints[84] = HAnimJoint192;

let HAnimJoint193 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint193.USE = "hanim_r_carpal_distal_interphalangeal_4";
joints[85] = HAnimJoint193;

let HAnimJoint194 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint194.USE = "hanim_r_carpometacarpal_5";
joints[86] = HAnimJoint194;

let HAnimJoint195 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint195.USE = "hanim_r_metacarpophalangeal_5";
joints[87] = HAnimJoint195;

let HAnimJoint196 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint196.USE = "hanim_r_carpal_proximal_interphalangeal_5";
joints[88] = HAnimJoint196;

let HAnimJoint197 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint197.USE = "hanim_r_carpal_distal_interphalangeal_5";
joints[89] = HAnimJoint197;

let Coordinate198 = browser.currentScene.createNode("Coordinate");
Coordinate198.DEF = "JoeSkinCoord";
Coordinate198.point = new X3D.MFVec3f([0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.0723,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.255,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168]);
skinCoord = Coordinate198;

let Shape199 = browser.currentScene.createNode("Shape");
let Appearance200 = browser.currentScene.createNode("Appearance");
let Material201 = browser.currentScene.createNode("Material");
Material201.emissiveColor = new X3D.SFColor([0.13,0.55,0.13]);
material = Material201;

let ImageTexture202 = browser.currentScene.createNode("ImageTexture");
ImageTexture202.url = new X3D.MFString([new X3D.SFString("bodytexture28.png")]);
texture = ImageTexture202;

appearance = Appearance200;

let IndexedFaceSet203 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet203.creaseAngle = 3.1;
IndexedFaceSet203.colorPerVertex = False;
IndexedFaceSet203.coordIndex = new X3D.MFInt32([0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]);
let Coordinate204 = browser.currentScene.createNode("Coordinate");
Coordinate204.USE = "JoeSkinCoord";
coord = Coordinate204;

geometry = IndexedFaceSet203;

skin[90] = Shape199;

Group14YYY.children = new X3D.MFNode();

Group14ZZZ.children[0] = HAnimHumanoid15;

browser.currentScene.children[7] = Group14;

let Transform205 = browser.currentScene.createNode("Transform");
Transform205.DEF = "SBall";
Transform205.translation = new X3D.SFVec3f([-0.074397,0.094551,-0.074397]);
Transform205.rotation = new X3D.SFRotation([-0.70711,0,-0.70711,1.231]);
Transform205.scale = new X3D.SFVec3f([0.23,0.23,0.23]);
let Shape206 = browser.currentScene.createNode("Shape");
let Appearance207 = browser.currentScene.createNode("Appearance");
let Material208 = browser.currentScene.createNode("Material");
Material208.diffuseColor = new X3D.SFColor([0,0.8353,0]);
Material208.specularColor = new X3D.SFColor([0,0.6849,0]);
Material208.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material208;

let ImageTexture209 = browser.currentScene.createNode("ImageTexture");
ImageTexture209.url = new X3D.MFString([new X3D.SFString("bodytexture28.png")]);
texture = ImageTexture209;

appearance = Appearance207;

let IndexedFaceSet210 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet210.DEF = "ball";
IndexedFaceSet210.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,1,13,14,-1,1,14,2,-1,2,14,15,-1,2,15,3,-1,3,15,16,-1,3,16,4,-1,4,16,17,-1,4,17,5,-1,5,17,18,-1,5,18,6,-1,6,18,19,-1,6,19,7,-1,7,19,20,-1,7,20,8,-1,8,20,21,-1,8,21,9,-1,9,21,22,-1,9,22,10,-1,10,22,23,-1,10,23,11,-1,11,23,24,-1,11,24,12,-1,12,24,13,-1,12,13,1,-1,13,25,26,-1,13,26,14,-1,14,26,27,-1,14,27,15,-1,15,27,28,-1,15,28,16,-1,16,28,29,-1,16,29,17,-1,17,29,30,-1,17,30,18,-1,18,30,31,-1,18,31,19,-1,19,31,32,-1,19,32,20,-1,20,32,33,-1,20,33,21,-1,21,33,34,-1,21,34,22,-1,22,34,35,-1,22,35,23,-1,23,35,36,-1,23,36,24,-1,24,36,25,-1,24,25,13,-1,25,37,38,-1,25,38,26,-1,26,38,39,-1,26,39,27,-1,27,39,40,-1,27,40,28,-1,28,40,41,-1,28,41,29,-1,29,41,42,-1,29,42,30,-1,30,42,43,-1,30,43,31,-1,31,43,44,-1,31,44,32,-1,32,44,45,-1,32,45,33,-1,33,45,46,-1,33,46,34,-1,34,46,47,-1,34,47,35,-1,35,47,48,-1,35,48,36,-1,36,48,37,-1,36,37,25,-1,37,49,50,-1,37,50,38,-1,38,50,51,-1,38,51,39,-1,39,51,52,-1,39,52,40,-1,40,52,53,-1,40,53,41,-1,41,53,54,-1,41,54,42,-1,42,54,55,-1,42,55,43,-1,43,55,56,-1,43,56,44,-1,44,56,57,-1,44,57,45,-1,45,57,58,-1,45,58,46,-1,46,58,59,-1,46,59,47,-1,47,59,60,-1,47,60,48,-1,48,60,49,-1,48,49,37,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]);
let Coordinate211 = browser.currentScene.createNode("Coordinate");
Coordinate211.point = new X3D.MFVec3f([0,0.4675,0,0,0.4049,-0.2338,-0.1169,0.4049,-0.2024,-0.2024,0.4049,-0.1169,-0.2338,0.4049,0,-0.2024,0.4049,0.1169,-0.1169,0.4049,0.2024,0,0.4049,0.2338,0.1169,0.4049,0.2024,0.2024,0.4049,0.1169,0.2338,0.4049,0,0.2024,0.4049,-0.1169,0.1169,0.4049,-0.2024,0,0.2338,-0.4049,-0.2024,0.2338,-0.3506,-0.3506,0.2338,-0.2024,-0.4049,0.2338,0,-0.3506,0.2338,0.2024,-0.2024,0.2338,0.3506,0,0.2338,0.4049,0.2024,0.2338,0.3506,0.3506,0.2338,0.2024,0.4049,0.2338,0,0.3506,0.2338,-0.2024,0.2024,0.2338,-0.3506,0,0,-0.4675,-0.2338,0,-0.4049,-0.4049,0,-0.2338,-0.4675,0,0,-0.4049,0,0.2338,-0.2338,0,0.4049,0,0,0.4675,0.2338,0,0.4049,0.4049,0,0.2338,0.4675,0,0,0.4049,0,-0.2338,0.2338,0,-0.4049,0,-0.2338,-0.4049,-0.2024,-0.2338,-0.3506,-0.3506,-0.2338,-0.2024,-0.4049,-0.2338,0,-0.3506,-0.2338,0.2024,-0.2024,-0.2338,0.3506,0,-0.2338,0.4049,0.2024,-0.2338,0.3506,0.3506,-0.2338,0.2024,0.4049,-0.2338,0,0.3506,-0.2338,-0.2024,0.2024,-0.2338,-0.3506,0,-0.4049,-0.2338,-0.1169,-0.4049,-0.2024,-0.2024,-0.4049,-0.1169,-0.2338,-0.4049,0,-0.2024,-0.4049,0.1169,-0.1169,-0.4049,0.2024,0,-0.4049,0.2338,0.1169,-0.4049,0.2024,0.2024,-0.4049,0.1169,0.2338,-0.4049,0,0.2024,-0.4049,-0.1169,0.1169,-0.4049,-0.2024,0,-0.4675,0]);
coord = Coordinate211;

geometry = IndexedFaceSet210;

Transform205YYY.child = new X3D.undefined();

Transform205ZZZ.child[0] = Shape206;

let Viewpoint212 = browser.currentScene.createNode("Viewpoint");
Viewpoint212.DEF = "ballView";
Viewpoint212.description = "ball View";
Transform205ZZZ.children[1] = Viewpoint212;

browser.currentScene.children[8] = Transform205;

let Transform213 = browser.currentScene.createNode("Transform");
Transform213.DEF = "scenecordsys";
Transform213.scale = new X3D.SFVec3f([0.275,0.275,0.275]);
let Inline214 = browser.currentScene.createNode("Inline");
Inline214.global = True;
Inline214.url = new X3D.MFString([new X3D.SFString("JointCoordinateAxes.x3dv")]);
Transform213YYY.children = new X3D.MFNode();

Transform213ZZZ.children[0] = Inline214;

browser.currentScene.children[9] = Transform213;

let Transform215 = browser.currentScene.createNode("Transform");
Transform215.DEF = "Circle0";
Transform215.scale = new X3D.SFVec3f([1.175,1,1.175]);
let Shape216 = browser.currentScene.createNode("Shape");
let Appearance217 = browser.currentScene.createNode("Appearance");
let Material218 = browser.currentScene.createNode("Material");
Material218.diffuseColor = new X3D.SFColor([0.9,0,0.7]);
Material218.emissiveColor = new X3D.SFColor([0.42496,0.48398,1]);
material = Material218;

appearance = Appearance217;

let IndexedLineSet219 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet219.DEF = "Orbit1";
IndexedLineSet219.coordIndex = new X3D.MFInt32([0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1]);
let Coordinate220 = browser.currentScene.createNode("Coordinate");
Coordinate220.point = new X3D.MFVec3f([1,0,0,0.995,0,-0.105,0.979,0,-0.208,0.951,0,-0.309,0.914,0,-0.407,0.866,0,-0.5,0.809,0,-0.588,0.743,0,-0.669,0.669,0,-0.743,0.588,0,-0.809,0.5,0,-0.866,0.407,0,-0.914,0.309,0,-0.951,0.208,0,-0.978,0.105,0,-0.995,0,0,-1,-0.105,0,-0.99452,-0.208,0,-0.978,-0.309,0,-0.951,-0.407,0,-0.914,-0.5,0,-0.866,-0.588,0,-0.809,-0.669,0,-0.743,-0.743,0,-0.669,-0.809,0,-0.588,-0.866,0,-0.5,-0.914,0,-0.407,-0.951,0,-0.309,-0.978,0,-0.208,-0.995,0,-0.105,-1,0,0,-0.995,0,0.105,-0.978,0,0.208,-0.951,0,0.309,-0.914,0,0.407,-0.866,0,0.5,-0.809,0,0.588,-0.743,0,0.669,-0.669,0,0.743,-0.588,0,0.809,-0.5,0,0.866,-0.407,0,0.914,-0.309,0,0.951,-0.208,0,0.978,-0.105,0,0.995,0,0,1,0.105,0,0.995,0.208,0,0.978,0.309,0,0.951,0.407,0,0.914,0.5,0,0.866,0.588,0,0.809,0.669,0,0.743,0.743,0,0.669,0.809,0,0.588,0.866,0,0.5,0.914,0,0.407,0.951,0,0.309,0.978,0,0.208,0.995,0,0.104,1,0,0]);
coord = Coordinate220;

geometry = IndexedLineSet219;

Transform215YYY.child = new X3D.undefined();

Transform215ZZZ.child[0] = Shape216;

browser.currentScene.children[10] = Transform215;

let Transform221 = browser.currentScene.createNode("Transform");
Transform221.DEF = "Circle1";
Transform221.scale = new X3D.SFVec3f([0.5,1,0.5]);
let Shape222 = browser.currentScene.createNode("Shape");
let Appearance223 = browser.currentScene.createNode("Appearance");
let Material224 = browser.currentScene.createNode("Material");
Material224.diffuseColor = new X3D.SFColor([0.9,0,0.7]);
Material224.emissiveColor = new X3D.SFColor([0.42496,0.48398,1]);
material = Material224;

appearance = Appearance223;

let IndexedLineSet225 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet225.USE = "Orbit1";
geometry = IndexedLineSet225;

Transform221YYY.child = new X3D.undefined();

Transform221ZZZ.child[0] = Shape222;

browser.currentScene.children[11] = Transform221;

let Transform226 = browser.currentScene.createNode("Transform");
Transform226.DEF = "Circle2";
Transform226.scale = new X3D.SFVec3f([0.25,1,0.25]);
let Shape227 = browser.currentScene.createNode("Shape");
let Appearance228 = browser.currentScene.createNode("Appearance");
let Material229 = browser.currentScene.createNode("Material");
Material229.diffuseColor = new X3D.SFColor([0.9,0,0.7]);
Material229.emissiveColor = new X3D.SFColor([0.42496,0.48398,1]);
material = Material229;

appearance = Appearance228;

let IndexedLineSet230 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet230.USE = "Orbit1";
geometry = IndexedLineSet230;

Transform226YYY.child = new X3D.undefined();

Transform226ZZZ.child[0] = Shape227;

browser.currentScene.children[12] = Transform226;

}
main ();
