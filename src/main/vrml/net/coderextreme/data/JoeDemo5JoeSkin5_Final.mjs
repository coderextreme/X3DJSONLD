const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("HAnim", 1));
scene.addMetaData("title", "JoeDemo5JoeSkin5.x3d");
scene.addMetaData("description", "joe kick into std anims");
await browser .loadComponents (scene);
let WorldInfo6 = browser.currentScene.createNode("WorldInfo");
WorldInfo6.title = "JoeDemo5JoeSkin.x3d, Only Skin";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo6;

let NavigationInfo7 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo7.headlight = False;
browser.currentScene.children[1] = NavigationInfo7;

let Background8 = browser.currentScene.createNode("Background");
Background8.DEF = "Background1";
Background8.skyColor = new X3D.MFColor([0.4,0.4,0.4]);
Background8.groundColor = new X3D.MFColor([0.5,0.5,0.5]);
browser.currentScene.children[2] = Background8;

let DirectionalLight9 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight9.global = True;
browser.currentScene.children[3] = DirectionalLight9;

let DirectionalLight10 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight10.direction = new X3D.SFVec3f([0,0.5,0]);
DirectionalLight10.global = True;
DirectionalLight10.intensity = 0.75;
browser.currentScene.children[4] = DirectionalLight10;

let DirectionalLight11 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight11.direction = new X3D.SFVec3f([0,0,1]);
DirectionalLight11.global = True;
browser.currentScene.children[5] = DirectionalLight11;

let Group12 = browser.currentScene.createNode("Group");
Group12.DEF = "SceneViewpoints";
let Viewpoint13 = browser.currentScene.createNode("Viewpoint");
Viewpoint13.centerOfRotation = new X3D.SFVec3f([0,1,0]);
Viewpoint13.description = "JinLOA4";
Viewpoint13.position = new X3D.SFVec3f([0,1,3]);
Group12YYY.children = new X3D.MFNode();

Group12ZZZ.children[0] = Viewpoint13;

let Viewpoint14 = browser.currentScene.createNode("Viewpoint");
Viewpoint14.centerOfRotation = new X3D.SFVec3f([0,0.9,0.0016]);
Viewpoint14.description = "JinLOA4 Front";
Viewpoint14.position = new X3D.SFVec3f([0,0.4,4]);
Group12ZZZ.children[1] = Viewpoint14;

let Viewpoint15 = browser.currentScene.createNode("Viewpoint");
Viewpoint15.centerOfRotation = new X3D.SFVec3f([0,0.9,0.0016]);
Viewpoint15.description = "JinLOA4 Front Close";
Viewpoint15.position = new X3D.SFVec3f([0,0.8,2]);
Group12ZZZ.children[2] = Viewpoint15;

let Viewpoint16 = browser.currentScene.createNode("Viewpoint");
Viewpoint16.centerOfRotation = new X3D.SFVec3f([0,0.9,0.0016]);
Viewpoint16.description = "JinLOA4 Front Closer";
Viewpoint16.position = new X3D.SFVec3f([0,1.2,1]);
Group12ZZZ.children[3] = Viewpoint16;

let Viewpoint17 = browser.currentScene.createNode("Viewpoint");
Viewpoint17.centerOfRotation = new X3D.SFVec3f([0,1.5,0.0016]);
Viewpoint17.description = "JinLOA4 Front Face";
Viewpoint17.position = new X3D.SFVec3f([0,1.63,1]);
Group12ZZZ.children[4] = Viewpoint17;

let Viewpoint18 = browser.currentScene.createNode("Viewpoint");
Viewpoint18.centerOfRotation = new X3D.SFVec3f([0,0.9,0.0016]);
Viewpoint18.description = "JinLOA4 Right Side";
Viewpoint18.orientation = new X3D.SFRotation([0,1,0,1.57]);
Viewpoint18.position = new X3D.SFVec3f([2.6,0.8,0]);
Group12ZZZ.children[5] = Viewpoint18;

let Viewpoint19 = browser.currentScene.createNode("Viewpoint");
Viewpoint19.centerOfRotation = new X3D.SFVec3f([0,0.9,0.0016]);
Viewpoint19.description = "JinLOA4 Right Side Close";
Viewpoint19.orientation = new X3D.SFRotation([0,1,0,1.2]);
Viewpoint19.position = new X3D.SFVec3f([1,0.8,0.5]);
Group12ZZZ.children[6] = Viewpoint19;

let Viewpoint20 = browser.currentScene.createNode("Viewpoint");
Viewpoint20.centerOfRotation = new X3D.SFVec3f([0,0.9,0.0016]);
Viewpoint20.description = "JinLOA4 Left Side Close";
Viewpoint20.orientation = new X3D.SFRotation([0,1,0,-1.2]);
Viewpoint20.position = new X3D.SFVec3f([-1,0.8,0.5]);
Group12ZZZ.children[7] = Viewpoint20;

let Viewpoint21 = browser.currentScene.createNode("Viewpoint");
Viewpoint21.centerOfRotation = new X3D.SFVec3f([0,0.9,0.0016]);
Viewpoint21.description = "JinLOA4 Left Side";
Viewpoint21.orientation = new X3D.SFRotation([0,1,0,-1.57]);
Viewpoint21.position = new X3D.SFVec3f([-2.6,0.8,0]);
Group12ZZZ.children[8] = Viewpoint21;

let Viewpoint22 = browser.currentScene.createNode("Viewpoint");
Viewpoint22.centerOfRotation = new X3D.SFVec3f([0,0.9,0.0016]);
Viewpoint22.description = "JinLOA4 Top";
Viewpoint22.orientation = new X3D.SFRotation([1,0,0,-1.5708]);
Viewpoint22.position = new X3D.SFVec3f([0,3.5,0]);
Group12ZZZ.children[9] = Viewpoint22;

browser.currentScene.children[6] = Group12;

let Transform23 = browser.currentScene.createNode("Transform");
Transform23.DEF = "HostCoordSys";
Transform23.scale = new X3D.SFVec3f([0.17,0.17,0.17]);
let Inline24 = browser.currentScene.createNode("Inline");
Inline24.url = new X3D.MFString([new X3D.SFString("JointCoordinateAxes.x3dv")]);
Transform23YYY.children = new X3D.MFNode();

Transform23ZZZ.children[0] = Inline24;

let Viewpoint25 = browser.currentScene.createNode("Viewpoint");
Viewpoint25.DEF = "HostCoordSysView";
Viewpoint25.description = "Host 0 0 0 View";
Transform23ZZZ.children[1] = Viewpoint25;

browser.currentScene.children[7] = Transform23;

let Group26 = browser.currentScene.createNode("Group");
Group26.DEF = "Joe_Humanoid";
let HAnimHumanoid27 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid27.DEF = "JoeHuman";
HAnimHumanoid27.version = "2.0";
let HAnimJoint28 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint28.name = "humanoid_root";
HAnimJoint28.DEF = "hanim_humanoid_root";
HAnimJoint28.center = new X3D.SFVec3f([0,0.875,0]);
HAnimJoint28.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint28.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSite29 = browser.currentScene.createNode("HAnimSite");
HAnimSite29.name = "RootFront";
HAnimSite29.DEF = "Joe_RootView1";
let Transform30 = browser.currentScene.createNode("Transform");
Transform30.DEF = "HAnimCoordSys";
Transform30.scale = new X3D.SFVec3f([0.17,0.17,0.17]);
let Inline31 = browser.currentScene.createNode("Inline");
Inline31.url = new X3D.MFString([new X3D.SFString("JointCoordinateAxes.x3dv")]);
Transform30YYY.children = new X3D.MFNode();

Transform30ZZZ.children[0] = Inline31;

let Viewpoint32 = browser.currentScene.createNode("Viewpoint");
Viewpoint32.DEF = "HAnimCoordSysView";
Viewpoint32.description = "HAnim 0 0 0 View";
Transform30ZZZ.children[1] = Viewpoint32;

HAnimSite29YYY.children = new X3D.MFNode();

HAnimSite29ZZZ.children[0] = Transform30;

HAnimJoint28YYY.child = new X3D.undefined();

HAnimJoint28ZZZ.child[0] = HAnimSite29;

let HAnimJoint33 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint33.name = "sacroiliac";
HAnimJoint33.DEF = "Joe_sacroiliac";
HAnimJoint33.center = new X3D.SFVec3f([0,0.920000016689301,0]);
HAnimJoint33.skinCoordIndex = new X3D.MFInt32([17,19,20,21,22,23,26,27,73,82,89,91,93]);
HAnimJoint33.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1,1,0.349999994039536,0.349999994039536,1]);
HAnimJoint33.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint33.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint34 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint34.name = "l_hip";
HAnimJoint34.DEF = "hanim_l_hip";
HAnimJoint34.center = new X3D.SFVec3f([0.100000001490116,0.920000016689301,0]);
HAnimJoint34.skinCoordIndex = new X3D.MFInt32([89,90,94,95,96,97]);
HAnimJoint34.skinCoordWeight = new X3D.MFFloat([0.649999976158142,1,1,1,1,1]);
HAnimJoint34.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint34.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint35 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint35.name = "l_knee";
HAnimJoint35.DEF = "hanim_l_knee";
HAnimJoint35.center = new X3D.SFVec3f([0.115000002086163,0.465999990701675,0]);
HAnimJoint35.skinCoordIndex = new X3D.MFInt32([334,335,336,337,338,339,340,341]);
HAnimJoint35.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
HAnimJoint35.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint35.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint36 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint36.name = "l_talocrural";
HAnimJoint36.DEF = "hanim_l_talocrural";
HAnimJoint36.center = new X3D.SFVec3f([0.115000002086163,0.0689999982714653,0]);
HAnimJoint36.skinCoordIndex = new X3D.MFInt32([342,343,344,345]);
HAnimJoint36.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
HAnimJoint36.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint36.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint37 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint37.name = "l_tarsometatarsal_2";
HAnimJoint37.DEF = "Joe_l_tarsometatarsal_2";
HAnimJoint37.center = new X3D.SFVec3f([0.115000002086163,0.0309999994933605,0.0299999993294477]);
HAnimJoint37.skinCoordIndex = new X3D.MFInt32([346,347,348,71]);
HAnimJoint37.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
HAnimJoint37.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint37.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint38 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint38.name = "l_metatarsophalangeal_2";
HAnimJoint38.DEF = "Joe_l_metatarsophalangeal_2";
HAnimJoint38.center = new X3D.SFVec3f([0.115000002086163,0.0370000004768372,0.0900000035762787]);
HAnimJoint38.skinCoordIndex = new X3D.MFInt32([349,350,351,352]);
HAnimJoint38.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
HAnimJoint38.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint38.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint39 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint39.name = "l_metatarsal_2";
HAnimJoint39.DEF = "Joe_l_metatarsal_2";
HAnimJoint39.center = new X3D.SFVec3f([0.115000002086163,0.0199999995529652,0.122000001370907]);
HAnimJoint39.skinCoordIndex = new X3D.MFInt32([353,354,355,356,357,358,359,360,361]);
HAnimJoint39.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
HAnimJoint39.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint39.llimit = new X3D.MFFloat([0,0,0]);
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

HAnimJoint33YYY.children = new X3D.MFNode();

HAnimJoint33ZZZ.children[0] = HAnimJoint34;

let HAnimJoint40 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint40.name = "r_hip";
HAnimJoint40.DEF = "hanim_r_hip";
HAnimJoint40.center = new X3D.SFVec3f([-0.100000001490116,0.920000016689301,0]);
HAnimJoint40.skinCoordIndex = new X3D.MFInt32([91,92,98,99,100,101,362,363]);
HAnimJoint40.skinCoordWeight = new X3D.MFFloat([0.649999976158142,1,0.800000011920929,1,1,1,0.400000005960464,0.800000011920929]);
HAnimJoint40.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint40.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint41 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint41.name = "r_knee";
HAnimJoint41.DEF = "hanim_r_knee";
HAnimJoint41.center = new X3D.SFVec3f([-0.0500000007450581,0.465999990701675,0]);
HAnimJoint41.skinCoordIndex = new X3D.MFInt32([362,363,364,365,366,367,368,369,98]);
HAnimJoint41.skinCoordWeight = new X3D.MFFloat([0.600000023841858,0.200000002980232,1,1,1,1,1,1,0.200000002980232]);
HAnimJoint41.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint41.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint42 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint42.name = "r_talocrural";
HAnimJoint42.DEF = "hanim_r_talocrural";
HAnimJoint42.center = new X3D.SFVec3f([-0.115000002086163,0.0689999982714653,0]);
HAnimJoint42.skinCoordIndex = new X3D.MFInt32([370,371,372,373]);
HAnimJoint42.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
HAnimJoint42.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint42.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint43 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint43.name = "r_tarsometatarsal_2";
HAnimJoint43.DEF = "Joe_r_tarsometatarsal_2";
HAnimJoint43.center = new X3D.SFVec3f([-0.100000001490116,0.0149999996647239,-0.00999999977648258]);
HAnimJoint43.skinCoordIndex = new X3D.MFInt32([374,375,376]);
HAnimJoint43.skinCoordWeight = new X3D.MFFloat([1,1,1]);
HAnimJoint43.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint43.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint44 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint44.name = "r_metatarsophalangeal_2";
HAnimJoint44.DEF = "Joe_r_metatarsophalangeal_2";
HAnimJoint44.center = new X3D.SFVec3f([-0.115000002086163,0.0370000004768372,0.0900000035762787]);
HAnimJoint44.skinCoordIndex = new X3D.MFInt32([377,378,379,380]);
HAnimJoint44.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
HAnimJoint44.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint44.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint45 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint45.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint45.DEF = "Joe_r_tarsal_distal_interphalangeal_2";
HAnimJoint45.center = new X3D.SFVec3f([-0.100000001490116,0.00999999977648258,0.140000000596046]);
HAnimJoint45.skinCoordIndex = new X3D.MFInt32([381,382,383,384,385,386,387,388,389]);
HAnimJoint45.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
HAnimJoint45.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint45.llimit = new X3D.MFFloat([0,0,0]);
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

HAnimJoint33ZZZ.children[1] = HAnimJoint40;

HAnimJoint28ZZZ.children[1] = HAnimJoint33;

let HAnimJoint46 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint46.name = "vl5";
HAnimJoint46.DEF = "hanim_vl5";
HAnimJoint46.center = new X3D.SFVec3f([0,1.04499995708466,-0.0949999988079071]);
HAnimJoint46.skinCoordIndex = new X3D.MFInt32([28,76]);
HAnimJoint46.skinCoordWeight = new X3D.MFFloat([1,1]);
HAnimJoint46.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint46.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint47 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint47.name = "vl4";
HAnimJoint47.DEF = "hanim_vl4";
HAnimJoint47.center = new X3D.SFVec3f([0,1.067999958992,-0.0850000008940697]);
HAnimJoint47.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint47.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint48 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint48.name = "vl3";
HAnimJoint48.DEF = "hanim_vl3";
HAnimJoint48.center = new X3D.SFVec3f([0,1.09200000762939,-0.0724999979138374]);
HAnimJoint48.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint48.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint49 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint49.name = "vl2";
HAnimJoint49.DEF = "hanim_vl2";
HAnimJoint49.center = new X3D.SFVec3f([0,1.12000000476837,-0.0649999976158142]);
HAnimJoint49.skinCoordIndex = new X3D.MFInt32([16,18,25,83,84,85,86,87,88]);
HAnimJoint49.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,0.699999988079071,1,0.800000011920929]);
HAnimJoint49.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint49.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint50 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint50.name = "vl1";
HAnimJoint50.DEF = "hanim_vl1";
HAnimJoint50.center = new X3D.SFVec3f([0,1.14590001106262,-0.0625]);
HAnimJoint50.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint50.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint51 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint51.name = "vt12";
HAnimJoint51.DEF = "hanim_vt12";
HAnimJoint51.center = new X3D.SFVec3f([0,1.17900002002716,-0.068000003695488]);
HAnimJoint51.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint51.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint52 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint52.name = "vt11";
HAnimJoint52.DEF = "hanim_vt11";
HAnimJoint52.center = new X3D.SFVec3f([0,1.26789999008179,-0.0810000002384186]);
HAnimJoint52.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint52.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint53 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint53.name = "vt10";
HAnimJoint53.DEF = "hanim_vt10";
HAnimJoint53.center = new X3D.SFVec3f([0,1.24199998378754,-0.0900000035762787]);
HAnimJoint53.skinCoordIndex = new X3D.MFInt32([15]);
HAnimJoint53.skinCoordWeight = new X3D.MFFloat([1]);
HAnimJoint53.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint53.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint54 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint54.name = "vt9";
HAnimJoint54.DEF = "hanim_vt9";
HAnimJoint54.center = new X3D.SFVec3f([0,1.26800000667572,-0.100000001490116]);
HAnimJoint54.skinCoordIndex = new X3D.MFInt32([13,14]);
HAnimJoint54.skinCoordWeight = new X3D.MFFloat([1,1]);
HAnimJoint54.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint54.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint55 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint55.name = "vt8";
HAnimJoint55.DEF = "hanim_vt8";
HAnimJoint55.center = new X3D.SFVec3f([0,1.2940000295639,-0.109999999403954]);
HAnimJoint55.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint55.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint56 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint56.name = "vt7";
HAnimJoint56.DEF = "hanim_vt7";
HAnimJoint56.center = new X3D.SFVec3f([0,1.32299995422363,-0.115500003099442]);
HAnimJoint56.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint56.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint57 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint57.name = "vt6";
HAnimJoint57.DEF = "hanim_vt6";
HAnimJoint57.center = new X3D.SFVec3f([0,1.35199999809265,-0.119999997317791]);
HAnimJoint57.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint57.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint58 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint58.name = "vt5";
HAnimJoint58.DEF = "hanim_vt5";
HAnimJoint58.center = new X3D.SFVec3f([0,1.38100004196167,-0.123499996960163]);
HAnimJoint58.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint58.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint59 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint59.name = "vt4";
HAnimJoint59.DEF = "hanim_vt4";
HAnimJoint59.center = new X3D.SFVec3f([0,1.4099999666214,-0.123499996960163]);
HAnimJoint59.skinCoordIndex = new X3D.MFInt32([81]);
HAnimJoint59.skinCoordWeight = new X3D.MFFloat([1]);
HAnimJoint59.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint59.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint60 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint60.name = "vt3";
HAnimJoint60.DEF = "hanim_vt3";
HAnimJoint60.center = new X3D.SFVec3f([0,1.43799996376038,-0.119999997317791]);
HAnimJoint60.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint60.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint61 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint61.name = "vt2";
HAnimJoint61.DEF = "hanim_vt2";
HAnimJoint61.center = new X3D.SFVec3f([0,1.46800005435944,-0.104999996721745]);
HAnimJoint61.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint61.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint62 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint62.name = "vt1";
HAnimJoint62.DEF = "hanim_vt1";
HAnimJoint62.center = new X3D.SFVec3f([0,1.49699997901917,-0.0900000035762787]);
HAnimJoint62.skinCoordIndex = new X3D.MFInt32([11,24]);
HAnimJoint62.skinCoordWeight = new X3D.MFFloat([1,1]);
HAnimJoint62.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint62.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint63 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint63.name = "vc7";
HAnimJoint63.DEF = "hanim_vc7";
HAnimJoint63.center = new X3D.SFVec3f([0,1.52499997615814,-0.0719999969005585]);
HAnimJoint63.skinCoordIndex = new X3D.MFInt32([74,75]);
HAnimJoint63.skinCoordWeight = new X3D.MFFloat([1,1]);
HAnimJoint63.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint63.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint64 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint64.name = "vc6";
HAnimJoint64.DEF = "hanim_vc6";
HAnimJoint64.center = new X3D.SFVec3f([0,1.53999996185303,-0.0500000007450581]);
HAnimJoint64.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint64.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint65 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint65.name = "vc5";
HAnimJoint65.DEF = "hanim_vc5";
HAnimJoint65.center = new X3D.SFVec3f([0,1.55200004577637,-0.0350000001490116]);
HAnimJoint65.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint65.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint66 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint66.name = "vc4";
HAnimJoint66.DEF = "hanim_vc4";
HAnimJoint66.center = new X3D.SFVec3f([0,1.56749999523163,-0.0255999993532896]);
HAnimJoint66.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint66.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint67 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint67.name = "vc3";
HAnimJoint67.DEF = "hanim_vc3";
HAnimJoint67.center = new X3D.SFVec3f([0,1.58224999904633,-0.0185000002384186]);
HAnimJoint67.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint67.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint68 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint68.name = "vc2";
HAnimJoint68.DEF = "hanim_vc2";
HAnimJoint68.center = new X3D.SFVec3f([0,1.59500002861023,-0.0175000000745058]);
HAnimJoint68.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint68.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint69 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint69.name = "vc1";
HAnimJoint69.DEF = "hanim_vc1";
HAnimJoint69.center = new X3D.SFVec3f([0,1.61000001430511,-0.0149999996647239]);
HAnimJoint69.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint69.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint70 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint70.name = "skullbase";
HAnimJoint70.DEF = "hanim_skullbase";
HAnimJoint70.center = new X3D.SFVec3f([0,1.62999999523163,-0.00999999977648258]);
HAnimJoint70.skinCoordIndex = new X3D.MFInt32([0,1,2,3,4,5,6,7,8,9]);
HAnimJoint70.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1,1]);
HAnimJoint70.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint70.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint71 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint71.name = "l_eyeball_joint";
HAnimJoint71.DEF = "hanim_l_eyeball_joint";
HAnimJoint71.center = new X3D.SFVec3f([0.034000001847744,1.65900003910065,0.0599999986588955]);
HAnimJoint71.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint71.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint70YYY.children = new X3D.MFNode();

HAnimJoint70ZZZ.children[0] = HAnimJoint71;

let HAnimJoint72 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint72.name = "r_eyeball_joint";
HAnimJoint72.DEF = "hanim_r_eyeball_joint";
HAnimJoint72.center = new X3D.SFVec3f([-0.034000001847744,1.65900003910065,0.0599999986588955]);
HAnimJoint72.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint72.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint70ZZZ.children[1] = HAnimJoint72;

HAnimJoint69YYY.children = new X3D.MFNode();

HAnimJoint69ZZZ.children[0] = HAnimJoint70;

HAnimJoint68YYY.children = new X3D.MFNode();

HAnimJoint68ZZZ.children[0] = HAnimJoint69;

HAnimJoint67YYY.children = new X3D.MFNode();

HAnimJoint67ZZZ.children[0] = HAnimJoint68;

HAnimJoint66YYY.children = new X3D.MFNode();

HAnimJoint66ZZZ.children[0] = HAnimJoint67;

HAnimJoint65YYY.children = new X3D.MFNode();

HAnimJoint65ZZZ.children[0] = HAnimJoint66;

HAnimJoint64YYY.children = new X3D.MFNode();

HAnimJoint64ZZZ.children[0] = HAnimJoint65;

HAnimJoint63YYY.children = new X3D.MFNode();

HAnimJoint63ZZZ.children[0] = HAnimJoint64;

let HAnimJoint73 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint73.name = "l_sternoclavicular";
HAnimJoint73.DEF = "hanim_l_sternoclavicular";
HAnimJoint73.center = new X3D.SFVec3f([0.0820000022649765,1.44879996776581,-0.035300001502037]);
HAnimJoint73.skinCoordIndex = new X3D.MFInt32([12]);
HAnimJoint73.skinCoordWeight = new X3D.MFFloat([1]);
HAnimJoint73.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint73.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint74 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint74.name = "l_acromioclavicular";
HAnimJoint74.DEF = "hanim_l_acromioclavicular";
HAnimJoint74.center = new X3D.SFVec3f([0.0961999967694283,1.42690002918243,-0.0423999987542629]);
HAnimJoint74.skinCoordIndex = new X3D.MFInt32([79]);
HAnimJoint74.skinCoordWeight = new X3D.MFFloat([1]);
HAnimJoint74.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint74.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint75 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint75.name = "l_shoulder";
HAnimJoint75.DEF = "hanim_l_shoulder";
HAnimJoint75.center = new X3D.SFVec3f([0.200000002980232,1.44000005722046,-0.0399999991059303]);
HAnimJoint75.skinCoordIndex = new X3D.MFInt32([41,42,44,80,102,103,104,105]);
HAnimJoint75.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
HAnimJoint75.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint75.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint76 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint76.name = "l_elbow";
HAnimJoint76.DEF = "hanim_l_elbow";
HAnimJoint76.center = new X3D.SFVec3f([0.200000002980232,1.13880002498627,-0.0399999991059303]);
HAnimJoint76.skinCoordIndex = new X3D.MFInt32([45,46,47,109,110,111,112,113,115,116,117,118]);
HAnimJoint76.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimJoint76.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint76.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint77 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint77.name = "l_radiocarpal";
HAnimJoint77.DEF = "Joe_l_radiocarpal";
HAnimJoint77.center = new X3D.SFVec3f([0.200000002980232,0.870000004768372,-0.0399999991059303]);
HAnimJoint77.skinCoordIndex = new X3D.MFInt32([119,120,121,122,123,124,125,126]);
HAnimJoint77.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
HAnimJoint77.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint77.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint78 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint78.name = "l_carpometacarpal_1";
HAnimJoint78.DEF = "Joe_l_carpometacarpal_1";
HAnimJoint78.center = new X3D.SFVec3f([0.192399993538857,0.847199976444244,-0.0533999986946583]);
HAnimJoint78.skinCoordIndex = new X3D.MFInt32([127,128]);
HAnimJoint78.skinCoordWeight = new X3D.MFFloat([1,1]);
HAnimJoint78.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint78.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint79 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint79.name = "l_metacarpophalangeal_1";
HAnimJoint79.DEF = "Joe_l_metacarpophalangeal_1";
HAnimJoint79.center = new X3D.SFVec3f([0.195099994540215,0.82260000705719,0.0245999991893768]);
HAnimJoint79.skinCoordIndex = new X3D.MFInt32([138,139,140,141,142,143]);
HAnimJoint79.skinCoordWeight = new X3D.MFFloat([0.5,0.5,0.5,1,1,1]);
HAnimJoint79.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint79.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint80 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint80.name = "l_carpal_interphalangeal_1";
HAnimJoint80.DEF = "Joe_l_carpal_interphalangeal_1";
HAnimJoint80.center = new X3D.SFVec3f([0.195500001311302,0.815900027751923,0.046399999409914]);
HAnimJoint80.skinCoordIndex = new X3D.MFInt32([144,145,146,147,148,149,150,151,152]);
HAnimJoint80.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
HAnimJoint80.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint80.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint79YYY.children = new X3D.MFNode();

HAnimJoint79ZZZ.children[0] = HAnimJoint80;

HAnimJoint78YYY.children = new X3D.MFNode();

HAnimJoint78ZZZ.children[0] = HAnimJoint79;

HAnimJoint77YYY.children = new X3D.MFNode();

HAnimJoint77ZZZ.children[0] = HAnimJoint78;

let HAnimJoint81 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint81.name = "l_carpometacarpal_2";
HAnimJoint81.DEF = "Joe_l_carpometacarpal_2";
HAnimJoint81.center = new X3D.SFVec3f([0.198300004005432,0.80239999294281,-0.0280000008642673]);
HAnimJoint81.skinCoordIndex = new X3D.MFInt32([129,130]);
HAnimJoint81.skinCoordWeight = new X3D.MFFloat([1,1]);
HAnimJoint81.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint81.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint82 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint82.name = "l_metacarpophalangeal_2";
HAnimJoint82.DEF = "Joe_l_metacarpophalangeal_2";
HAnimJoint82.center = new X3D.SFVec3f([0.198300004005432,0.781499981880188,-0.0280000008642673]);
HAnimJoint82.skinCoordIndex = new X3D.MFInt32([138,139,140,153,154,155,163]);
HAnimJoint82.skinCoordWeight = new X3D.MFFloat([0.5,0.5,0.5,1,1,1,0.5]);
HAnimJoint82.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint82.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint83 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint83.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint83.DEF = "Joe_l_carpal_proximal_interphalangeal_2";
HAnimJoint83.center = new X3D.SFVec3f([0.201700001955032,0.736299991607666,-0.0248000007122755]);
HAnimJoint83.skinCoordIndex = new X3D.MFInt32([166,167,168,169]);
HAnimJoint83.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
HAnimJoint83.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint83.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint84 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint84.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint84.DEF = "Joe_l_carpal_distal_interphalangeal_2";
HAnimJoint84.center = new X3D.SFVec3f([0.202800005674362,0.713900029659271,-0.0236000008881092]);
HAnimJoint84.skinCoordIndex = new X3D.MFInt32([170,171,172,173,174,175,176,177,178]);
HAnimJoint84.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
HAnimJoint84.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint84.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint83YYY.children = new X3D.MFNode();

HAnimJoint83ZZZ.children[0] = HAnimJoint84;

HAnimJoint82YYY.children = new X3D.MFNode();

HAnimJoint82ZZZ.children[0] = HAnimJoint83;

HAnimJoint81YYY.children = new X3D.MFNode();

HAnimJoint81ZZZ.children[0] = HAnimJoint82;

HAnimJoint77ZZZ.children[1] = HAnimJoint81;

let HAnimJoint85 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint85.name = "l_carpometacarpal_3";
HAnimJoint85.DEF = "Joe_l_carpometacarpal_3";
HAnimJoint85.center = new X3D.SFVec3f([0.198699995875359,0.802900016307831,-0.0529999993741512]);
HAnimJoint85.skinCoordIndex = new X3D.MFInt32([131,132]);
HAnimJoint85.skinCoordWeight = new X3D.MFFloat([1,1]);
HAnimJoint85.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint85.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint86 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint86.name = "l_metacarpophalangeal_3";
HAnimJoint86.DEF = "Joe_l_metacarpophalangeal_3";
HAnimJoint86.center = new X3D.SFVec3f([0.198699995875359,0.781799972057343,-0.0529999993741512]);
HAnimJoint86.skinCoordIndex = new X3D.MFInt32([156,157,163,164]);
HAnimJoint86.skinCoordWeight = new X3D.MFFloat([1,1,0.5,0.5]);
HAnimJoint86.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint86.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint87 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint87.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint87.DEF = "Joe_l_carpal_proximal_interphalangeal_3";
HAnimJoint87.center = new X3D.SFVec3f([0.201299995183945,0.727299988269806,-0.0502999983727932]);
HAnimJoint87.skinCoordIndex = new X3D.MFInt32([179,180,181,182]);
HAnimJoint87.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
HAnimJoint87.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint87.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint88 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint88.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint88.DEF = "Joe_l_carpal_distal_interphalangeal_3";
HAnimJoint88.center = new X3D.SFVec3f([0.202600002288818,0.701099991798401,-0.0494000017642975]);
HAnimJoint88.skinCoordIndex = new X3D.MFInt32([183,184,185,186,187,188,189,190,191]);
HAnimJoint88.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
HAnimJoint88.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint88.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint87YYY.children = new X3D.MFNode();

HAnimJoint87ZZZ.children[0] = HAnimJoint88;

HAnimJoint86YYY.children = new X3D.MFNode();

HAnimJoint86ZZZ.children[0] = HAnimJoint87;

HAnimJoint85YYY.children = new X3D.MFNode();

HAnimJoint85ZZZ.children[0] = HAnimJoint86;

HAnimJoint77ZZZ.children[2] = HAnimJoint85;

let HAnimJoint89 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint89.name = "l_carpometacarpal_4";
HAnimJoint89.DEF = "Joe_l_carpometacarpal_4";
HAnimJoint89.center = new X3D.SFVec3f([0.195600003004074,0.801900029182434,-0.0794000029563904]);
HAnimJoint89.skinCoordIndex = new X3D.MFInt32([133,134]);
HAnimJoint89.skinCoordWeight = new X3D.MFFloat([1,1]);
HAnimJoint89.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint89.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint90 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint90.name = "l_metacarpophalangeal_4";
HAnimJoint90.DEF = "Joe_l_metacarpophalangeal_4";
HAnimJoint90.center = new X3D.SFVec3f([0.195600003004074,0.781499981880188,-0.0794000029563904]);
HAnimJoint90.skinCoordIndex = new X3D.MFInt32([158,159,164,165]);
HAnimJoint90.skinCoordWeight = new X3D.MFFloat([1,1,0.5,0.5]);
HAnimJoint90.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint90.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint91 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint91.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint91.DEF = "Joe_l_carpal_proximal_interphalangeal_4";
HAnimJoint91.center = new X3D.SFVec3f([0.197300001978874,0.72869998216629,-0.0776999965310097]);
HAnimJoint91.skinCoordIndex = new X3D.MFInt32([192,193,194,195]);
HAnimJoint91.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
HAnimJoint91.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint91.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint92 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint92.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint92.DEF = "Joe_l_carpal_distal_interphalangeal_4";
HAnimJoint92.center = new X3D.SFVec3f([0.198300004005432,0.704500019550323,-0.0767000019550323]);
HAnimJoint92.skinCoordIndex = new X3D.MFInt32([196,197,198,199,200,201,202,203,204]);
HAnimJoint92.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
HAnimJoint92.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint92.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint91YYY.children = new X3D.MFNode();

HAnimJoint91ZZZ.children[0] = HAnimJoint92;

HAnimJoint90YYY.children = new X3D.MFNode();

HAnimJoint90ZZZ.children[0] = HAnimJoint91;

HAnimJoint89YYY.children = new X3D.MFNode();

HAnimJoint89ZZZ.children[0] = HAnimJoint90;

HAnimJoint77ZZZ.children[3] = HAnimJoint89;

let HAnimJoint93 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint93.name = "l_carpometacarpal_5";
HAnimJoint93.DEF = "Joe_l_carpometacarpal_5";
HAnimJoint93.center = new X3D.SFVec3f([0.192499995231628,0.806599974632263,-0.10360000282526]);
HAnimJoint93.skinCoordIndex = new X3D.MFInt32([135,136,137,165]);
HAnimJoint93.skinCoordWeight = new X3D.MFFloat([1,1,1,0.5]);
HAnimJoint93.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint93.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint94 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint94.name = "l_metacarpophalangeal_5";
HAnimJoint94.DEF = "Joe_l_metacarpophalangeal_5";
HAnimJoint94.center = new X3D.SFVec3f([0.192499995231628,0.78659999370575,-0.10360000282526]);
HAnimJoint94.skinCoordIndex = new X3D.MFInt32([160,161,162]);
HAnimJoint94.skinCoordWeight = new X3D.MFFloat([1,1,1]);
HAnimJoint94.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint94.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint95 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint95.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint95.DEF = "Joe_l_carpal_proximal_interphalangeal_5";
HAnimJoint95.center = new X3D.SFVec3f([0.193800002336502,0.745199978351593,-0.102399997413158]);
HAnimJoint95.skinCoordIndex = new X3D.MFInt32([205,206,207,208]);
HAnimJoint95.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
HAnimJoint95.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint95.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint96 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint96.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint96.DEF = "Joe_l_carpal_distal_interphalangeal_5";
HAnimJoint96.center = new X3D.SFVec3f([0.19480000436306,0.727699995040894,-0.101700000464916]);
HAnimJoint96.skinCoordIndex = new X3D.MFInt32([209,210,211,212,213,214,215,216,217]);
HAnimJoint96.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
HAnimJoint96.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint96.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint95YYY.children = new X3D.MFNode();

HAnimJoint95ZZZ.children[0] = HAnimJoint96;

HAnimJoint94YYY.children = new X3D.MFNode();

HAnimJoint94ZZZ.children[0] = HAnimJoint95;

HAnimJoint93YYY.children = new X3D.MFNode();

HAnimJoint93ZZZ.children[0] = HAnimJoint94;

HAnimJoint77ZZZ.children[4] = HAnimJoint93;

HAnimJoint76YYY.children = new X3D.MFNode();

HAnimJoint76ZZZ.children[0] = HAnimJoint77;

HAnimJoint75YYY.children = new X3D.MFNode();

HAnimJoint75ZZZ.children[0] = HAnimJoint76;

HAnimJoint74YYY.children = new X3D.MFNode();

HAnimJoint74ZZZ.children[0] = HAnimJoint75;

HAnimJoint73YYY.children = new X3D.MFNode();

HAnimJoint73ZZZ.children[0] = HAnimJoint74;

HAnimJoint63ZZZ.children[1] = HAnimJoint73;

let HAnimJoint97 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint97.name = "r_sternoclavicular";
HAnimJoint97.DEF = "hanim_r_sternoclavicular";
HAnimJoint97.center = new X3D.SFVec3f([-0.0299999993294477,1.46000003814697,0]);
HAnimJoint97.skinCoordIndex = new X3D.MFInt32([10]);
HAnimJoint97.skinCoordWeight = new X3D.MFFloat([1]);
HAnimJoint97.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint97.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint98 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint98.name = "r_acromioclavicular";
HAnimJoint98.DEF = "hanim_r_acromioclavicular";
HAnimJoint98.center = new X3D.SFVec3f([-0.0900000035762787,1.4099999666214,-0.109999999403954]);
HAnimJoint98.skinCoordIndex = new X3D.MFInt32([77,29]);
HAnimJoint98.skinCoordWeight = new X3D.MFFloat([1,0.899999976158142]);
HAnimJoint98.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint98.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint99 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint99.name = "r_shoulder";
HAnimJoint99.DEF = "hanim_r_shoulder";
HAnimJoint99.center = new X3D.SFVec3f([-0.200000002980232,1.44000005722046,-0.0399999991059303]);
HAnimJoint99.skinCoordIndex = new X3D.MFInt32([29,30,32,78,218,219,220,221,86,88]);
HAnimJoint99.skinCoordWeight = new X3D.MFFloat([0.100000001490116,1,1,1,1,1,1,1,0.300000011920929,0.200000002980232]);
HAnimJoint99.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint99.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint100 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint100.name = "r_elbow";
HAnimJoint100.DEF = "hanim_r_elbow";
HAnimJoint100.center = new X3D.SFVec3f([-0.200000002980232,1.13880002498627,-0.0399999991059303]);
HAnimJoint100.skinCoordIndex = new X3D.MFInt32([33,34,35,225,226,227,228,229,231,232,233,234]);
HAnimJoint100.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimJoint100.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint100.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint101 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint101.name = "r_radiocarpal";
HAnimJoint101.DEF = "Joe_r_radiocarpal";
HAnimJoint101.center = new X3D.SFVec3f([-0.200000002980232,0.889999985694885,-0.0399999991059303]);
HAnimJoint101.skinCoordIndex = new X3D.MFInt32([235,236,237,238,239,240,241,242]);
HAnimJoint101.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
HAnimJoint101.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint101.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint102 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint102.name = "r_carpometacarpal_1";
HAnimJoint102.DEF = "Joe_r_carpometacarpal_1";
HAnimJoint102.center = new X3D.SFVec3f([-0.200000002980232,0.850000023841858,0]);
HAnimJoint102.skinCoordIndex = new X3D.MFInt32([243,244]);
HAnimJoint102.skinCoordWeight = new X3D.MFFloat([1,1]);
HAnimJoint102.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint102.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint103 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint103.name = "r_metacarpophalangeal_1";
HAnimJoint103.DEF = "Joe_r_metacarpophalangeal_1";
HAnimJoint103.center = new X3D.SFVec3f([-0.200000002980232,0.819999992847443,0.0299999993294477]);
HAnimJoint103.skinCoordIndex = new X3D.MFInt32([254,255,256,257,258,259]);
HAnimJoint103.skinCoordWeight = new X3D.MFFloat([0.5,0.5,0.5,1,1,1]);
HAnimJoint103.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint103.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint104 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint104.name = "r_carpal_interphalangeal_1";
HAnimJoint104.DEF = "Joe_r_carpal_interphalangeal_1";
HAnimJoint104.center = new X3D.SFVec3f([-0.200000002980232,0.800000011920929,0.0500000007450581]);
HAnimJoint104.skinCoordIndex = new X3D.MFInt32([260,261,262,263,264,265,266,267,268]);
HAnimJoint104.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
HAnimJoint104.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint104.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint103YYY.children = new X3D.MFNode();

HAnimJoint103ZZZ.children[0] = HAnimJoint104;

HAnimJoint102YYY.children = new X3D.MFNode();

HAnimJoint102ZZZ.children[0] = HAnimJoint103;

HAnimJoint101YYY.children = new X3D.MFNode();

HAnimJoint101ZZZ.children[0] = HAnimJoint102;

let HAnimJoint105 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint105.name = "r_carpometacarpal_2";
HAnimJoint105.DEF = "Joe_r_carpometacarpal_2";
HAnimJoint105.center = new X3D.SFVec3f([-0.200000002980232,0.839999973773956,-0.0149999996647239]);
HAnimJoint105.skinCoordIndex = new X3D.MFInt32([245,246]);
HAnimJoint105.skinCoordWeight = new X3D.MFFloat([1,1]);
HAnimJoint105.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint105.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint106 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint106.name = "r_metacarpophalangeal_2";
HAnimJoint106.DEF = "Joe_r_metacarpophalangeal_2";
HAnimJoint106.center = new X3D.SFVec3f([-0.200000002980232,0.792999982833862,-0.0149999996647239]);
HAnimJoint106.skinCoordIndex = new X3D.MFInt32([254,255,256,269,270,271,279]);
HAnimJoint106.skinCoordWeight = new X3D.MFFloat([0.5,0.5,0.5,1,1,1,0.5]);
HAnimJoint106.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint106.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint107 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint107.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint107.DEF = "Joe_r_carpal_proximal_interphalangeal_2";
HAnimJoint107.center = new X3D.SFVec3f([-0.200000002980232,0.745000004768372,-0.0149999996647239]);
HAnimJoint107.skinCoordIndex = new X3D.MFInt32([282,283,284,285]);
HAnimJoint107.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
HAnimJoint107.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint107.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint108 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint108.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint108.DEF = "Joe_r_carpal_distal_interphalangeal_2";
HAnimJoint108.center = new X3D.SFVec3f([-0.200000002980232,0.720000028610229,-0.0149999996647239]);
HAnimJoint108.skinCoordIndex = new X3D.MFInt32([286,287,288,289,290,291,292,293,294]);
HAnimJoint108.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
HAnimJoint108.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint108.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint107YYY.children = new X3D.MFNode();

HAnimJoint107ZZZ.children[0] = HAnimJoint108;

HAnimJoint106YYY.children = new X3D.MFNode();

HAnimJoint106ZZZ.children[0] = HAnimJoint107;

HAnimJoint105YYY.children = new X3D.MFNode();

HAnimJoint105ZZZ.children[0] = HAnimJoint106;

HAnimJoint101ZZZ.children[1] = HAnimJoint105;

let HAnimJoint109 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint109.name = "r_carpometacarpal_3";
HAnimJoint109.DEF = "Joe_r_carpometacarpal_3";
HAnimJoint109.center = new X3D.SFVec3f([-0.200000002980232,0.834999978542328,-0.0399999991059303]);
HAnimJoint109.skinCoordIndex = new X3D.MFInt32([247,248]);
HAnimJoint109.skinCoordWeight = new X3D.MFFloat([1,1]);
HAnimJoint109.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint109.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint110 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint110.name = "r_metacarpophalangeal_3";
HAnimJoint110.DEF = "Joe_r_metacarpophalangeal_3";
HAnimJoint110.center = new X3D.SFVec3f([-0.200000002980232,0.787999987602234,-0.0399999991059303]);
HAnimJoint110.skinCoordIndex = new X3D.MFInt32([272,273,279,280]);
HAnimJoint110.skinCoordWeight = new X3D.MFFloat([1,1,0.5,0.5]);
HAnimJoint110.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint110.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint111 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint111.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint111.DEF = "Joe_r_carpal_proximal_interphalangeal_3";
HAnimJoint111.center = new X3D.SFVec3f([-0.200000002980232,0.740000009536743,-0.0399999991059303]);
HAnimJoint111.skinCoordIndex = new X3D.MFInt32([295,296,297,298]);
HAnimJoint111.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
HAnimJoint111.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint111.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint112 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint112.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint112.DEF = "Joe_r_carpal_distal_interphalangeal_3";
HAnimJoint112.center = new X3D.SFVec3f([-0.200000002980232,0.714200019836426,-0.0399999991059303]);
HAnimJoint112.skinCoordIndex = new X3D.MFInt32([299,300,301,302,303,304,305,306,307]);
HAnimJoint112.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
HAnimJoint112.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint112.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint111YYY.children = new X3D.MFNode();

HAnimJoint111ZZZ.children[0] = HAnimJoint112;

HAnimJoint110YYY.children = new X3D.MFNode();

HAnimJoint110ZZZ.children[0] = HAnimJoint111;

HAnimJoint109YYY.children = new X3D.MFNode();

HAnimJoint109ZZZ.children[0] = HAnimJoint110;

HAnimJoint101ZZZ.children[2] = HAnimJoint109;

let HAnimJoint113 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint113.name = "r_carpometacarpal_4";
HAnimJoint113.DEF = "Joe_r_carpometacarpal_4";
HAnimJoint113.center = new X3D.SFVec3f([-0.200000002980232,0.834999978542328,-0.0649999976158142]);
HAnimJoint113.skinCoordIndex = new X3D.MFInt32([249,250]);
HAnimJoint113.skinCoordWeight = new X3D.MFFloat([1,1]);
HAnimJoint113.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint113.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint114 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint114.name = "r_metacarpophalangeal_4";
HAnimJoint114.DEF = "Joe_r_metacarpophalangeal_4";
HAnimJoint114.center = new X3D.SFVec3f([-0.200000002980232,0.792999982833862,-0.0649999976158142]);
HAnimJoint114.skinCoordIndex = new X3D.MFInt32([274,275,280,281]);
HAnimJoint114.skinCoordWeight = new X3D.MFFloat([1,1,0.5,0.5]);
HAnimJoint114.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint114.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint115 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint115.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint115.DEF = "Joe_r_carpal_proximal_interphalangeal_4";
HAnimJoint115.center = new X3D.SFVec3f([-0.200000002980232,0.740000009536743,-0.0649999976158142]);
HAnimJoint115.skinCoordIndex = new X3D.MFInt32([308,309,310,311]);
HAnimJoint115.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
HAnimJoint115.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint115.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint116 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint116.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint116.DEF = "Joe_r_carpal_distal_interphalangeal_4";
HAnimJoint116.center = new X3D.SFVec3f([-0.200000002980232,0.717700004577637,-0.0649999976158142]);
HAnimJoint116.skinCoordIndex = new X3D.MFInt32([312,313,314,315,316,317,318,319,320]);
HAnimJoint116.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
HAnimJoint116.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint116.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint115YYY.children = new X3D.MFNode();

HAnimJoint115ZZZ.children[0] = HAnimJoint116;

HAnimJoint114YYY.children = new X3D.MFNode();

HAnimJoint114ZZZ.children[0] = HAnimJoint115;

HAnimJoint113YYY.children = new X3D.MFNode();

HAnimJoint113ZZZ.children[0] = HAnimJoint114;

HAnimJoint101ZZZ.children[3] = HAnimJoint113;

let HAnimJoint117 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint117.name = "r_carpometacarpal_5";
HAnimJoint117.DEF = "Joe_r_carpometacarpal_5";
HAnimJoint117.center = new X3D.SFVec3f([-0.200000002980232,0.839999973773956,-0.0850000008940697]);
HAnimJoint117.skinCoordIndex = new X3D.MFInt32([251,252,253,281]);
HAnimJoint117.skinCoordWeight = new X3D.MFFloat([1,1,1,0.5]);
HAnimJoint117.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint117.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint118 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint118.name = "r_metacarpophalangeal_5";
HAnimJoint118.DEF = "Joe_r_metacarpophalangeal_5";
HAnimJoint118.center = new X3D.SFVec3f([-0.200000002980232,0.790000021457672,-0.0850000008940697]);
HAnimJoint118.skinCoordIndex = new X3D.MFInt32([276,277,278]);
HAnimJoint118.skinCoordWeight = new X3D.MFFloat([1,1,1]);
HAnimJoint118.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint118.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint119 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint119.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint119.DEF = "Joe_r_carpal_proximal_interphalangeal_5";
HAnimJoint119.center = new X3D.SFVec3f([-0.200000002980232,0.754999995231628,-0.0850000008940697]);
HAnimJoint119.skinCoordIndex = new X3D.MFInt32([321,322,323,324]);
HAnimJoint119.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
HAnimJoint119.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint119.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint120 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint120.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint120.DEF = "Joe_r_carpal_distal_interphalangeal_5";
HAnimJoint120.center = new X3D.SFVec3f([-0.200000002980232,0.735000014305115,-0.0900000035762787]);
HAnimJoint120.skinCoordIndex = new X3D.MFInt32([325,326,327,328,329,330,331,332,333]);
HAnimJoint120.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
HAnimJoint120.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint120.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint119YYY.children = new X3D.MFNode();

HAnimJoint119ZZZ.children[0] = HAnimJoint120;

HAnimJoint118YYY.children = new X3D.MFNode();

HAnimJoint118ZZZ.children[0] = HAnimJoint119;

HAnimJoint117YYY.children = new X3D.MFNode();

HAnimJoint117ZZZ.children[0] = HAnimJoint118;

HAnimJoint101ZZZ.children[4] = HAnimJoint117;

HAnimJoint100YYY.children = new X3D.MFNode();

HAnimJoint100ZZZ.children[0] = HAnimJoint101;

HAnimJoint99YYY.children = new X3D.MFNode();

HAnimJoint99ZZZ.children[0] = HAnimJoint100;

HAnimJoint98YYY.children = new X3D.MFNode();

HAnimJoint98ZZZ.children[0] = HAnimJoint99;

HAnimJoint97YYY.children = new X3D.MFNode();

HAnimJoint97ZZZ.children[0] = HAnimJoint98;

HAnimJoint63ZZZ.children[2] = HAnimJoint97;

HAnimJoint62YYY.children = new X3D.MFNode();

HAnimJoint62ZZZ.children[0] = HAnimJoint63;

HAnimJoint61YYY.children = new X3D.MFNode();

HAnimJoint61ZZZ.children[0] = HAnimJoint62;

HAnimJoint60YYY.children = new X3D.MFNode();

HAnimJoint60ZZZ.children[0] = HAnimJoint61;

HAnimJoint59YYY.children = new X3D.MFNode();

HAnimJoint59ZZZ.children[0] = HAnimJoint60;

HAnimJoint58YYY.children = new X3D.MFNode();

HAnimJoint58ZZZ.children[0] = HAnimJoint59;

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

HAnimJoint28ZZZ.children[2] = HAnimJoint46;

HAnimHumanoid27YYY.joints = new X3D.MFNode();

HAnimHumanoid27ZZZ.joints[0] = HAnimJoint28;

let HAnimJoint121 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint121.USE = "Joe_sacroiliac";
joints[1] = HAnimJoint121;

let HAnimJoint122 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint122.USE = "hanim_l_hip";
joints[2] = HAnimJoint122;

let HAnimJoint123 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint123.USE = "hanim_l_knee";
joints[3] = HAnimJoint123;

let HAnimJoint124 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint124.USE = "hanim_l_talocrural";
joints[4] = HAnimJoint124;

let HAnimJoint125 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint125.USE = "Joe_l_tarsometatarsal_2";
joints[5] = HAnimJoint125;

let HAnimJoint126 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint126.USE = "Joe_l_metatarsophalangeal_2";
joints[6] = HAnimJoint126;

let HAnimJoint127 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint127.USE = "Joe_l_metatarsal_2";
joints[7] = HAnimJoint127;

let HAnimJoint128 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint128.USE = "hanim_r_hip";
joints[8] = HAnimJoint128;

let HAnimJoint129 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint129.USE = "hanim_r_knee";
joints[9] = HAnimJoint129;

let HAnimJoint130 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint130.USE = "hanim_r_talocrural";
joints[10] = HAnimJoint130;

let HAnimJoint131 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint131.USE = "Joe_r_tarsometatarsal_2";
joints[11] = HAnimJoint131;

let HAnimJoint132 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint132.USE = "Joe_r_metatarsophalangeal_2";
joints[12] = HAnimJoint132;

let HAnimJoint133 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint133.USE = "Joe_r_tarsal_distal_interphalangeal_2";
joints[13] = HAnimJoint133;

let HAnimJoint134 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint134.USE = "hanim_vl5";
joints[14] = HAnimJoint134;

let HAnimJoint135 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint135.USE = "hanim_vl4";
joints[15] = HAnimJoint135;

let HAnimJoint136 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint136.USE = "hanim_vl3";
joints[16] = HAnimJoint136;

let HAnimJoint137 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint137.USE = "hanim_vl2";
joints[17] = HAnimJoint137;

let HAnimJoint138 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint138.USE = "hanim_vl1";
joints[18] = HAnimJoint138;

let HAnimJoint139 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint139.USE = "hanim_vt12";
joints[19] = HAnimJoint139;

let HAnimJoint140 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint140.USE = "hanim_vt11";
joints[20] = HAnimJoint140;

let HAnimJoint141 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint141.USE = "hanim_vt10";
joints[21] = HAnimJoint141;

let HAnimJoint142 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint142.USE = "hanim_vt9";
joints[22] = HAnimJoint142;

let HAnimJoint143 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint143.USE = "hanim_vt8";
joints[23] = HAnimJoint143;

let HAnimJoint144 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint144.USE = "hanim_vt7";
joints[24] = HAnimJoint144;

let HAnimJoint145 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint145.USE = "hanim_vt6";
joints[25] = HAnimJoint145;

let HAnimJoint146 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint146.USE = "hanim_vt5";
joints[26] = HAnimJoint146;

let HAnimJoint147 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint147.USE = "hanim_vt4";
joints[27] = HAnimJoint147;

let HAnimJoint148 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint148.USE = "hanim_vt3";
joints[28] = HAnimJoint148;

let HAnimJoint149 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint149.USE = "hanim_vt2";
joints[29] = HAnimJoint149;

let HAnimJoint150 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint150.USE = "hanim_vt1";
joints[30] = HAnimJoint150;

let HAnimJoint151 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint151.USE = "hanim_vc7";
joints[31] = HAnimJoint151;

let HAnimJoint152 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint152.USE = "hanim_vc6";
joints[32] = HAnimJoint152;

let HAnimJoint153 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint153.USE = "hanim_vc5";
joints[33] = HAnimJoint153;

let HAnimJoint154 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint154.USE = "hanim_vc4";
joints[34] = HAnimJoint154;

let HAnimJoint155 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint155.USE = "hanim_vc3";
joints[35] = HAnimJoint155;

let HAnimJoint156 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint156.USE = "hanim_vc2";
joints[36] = HAnimJoint156;

let HAnimJoint157 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint157.USE = "hanim_vc1";
joints[37] = HAnimJoint157;

let HAnimJoint158 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint158.USE = "hanim_skullbase";
joints[38] = HAnimJoint158;

let HAnimJoint159 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint159.USE = "hanim_l_eyeball_joint";
joints[39] = HAnimJoint159;

let HAnimJoint160 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint160.USE = "hanim_r_eyeball_joint";
joints[40] = HAnimJoint160;

let HAnimJoint161 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint161.USE = "hanim_l_sternoclavicular";
joints[41] = HAnimJoint161;

let HAnimJoint162 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint162.USE = "hanim_l_acromioclavicular";
joints[42] = HAnimJoint162;

let HAnimJoint163 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint163.USE = "hanim_l_shoulder";
joints[43] = HAnimJoint163;

let HAnimJoint164 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint164.USE = "hanim_l_elbow";
joints[44] = HAnimJoint164;

let HAnimJoint165 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint165.USE = "Joe_l_radiocarpal";
joints[45] = HAnimJoint165;

let HAnimJoint166 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint166.USE = "Joe_l_carpometacarpal_1";
joints[46] = HAnimJoint166;

let HAnimJoint167 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint167.USE = "Joe_l_metacarpophalangeal_1";
joints[47] = HAnimJoint167;

let HAnimJoint168 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint168.USE = "Joe_l_carpal_interphalangeal_1";
joints[48] = HAnimJoint168;

let HAnimJoint169 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint169.USE = "Joe_l_carpometacarpal_2";
joints[49] = HAnimJoint169;

let HAnimJoint170 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint170.USE = "Joe_l_metacarpophalangeal_2";
joints[50] = HAnimJoint170;

let HAnimJoint171 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint171.USE = "Joe_l_carpal_proximal_interphalangeal_2";
joints[51] = HAnimJoint171;

let HAnimJoint172 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint172.USE = "Joe_l_carpal_distal_interphalangeal_2";
joints[52] = HAnimJoint172;

let HAnimJoint173 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint173.USE = "Joe_l_carpometacarpal_3";
joints[53] = HAnimJoint173;

let HAnimJoint174 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint174.USE = "Joe_l_metacarpophalangeal_3";
joints[54] = HAnimJoint174;

let HAnimJoint175 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint175.USE = "Joe_l_carpal_proximal_interphalangeal_3";
joints[55] = HAnimJoint175;

let HAnimJoint176 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint176.USE = "Joe_l_carpal_distal_interphalangeal_3";
joints[56] = HAnimJoint176;

let HAnimJoint177 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint177.USE = "Joe_l_carpometacarpal_4";
joints[57] = HAnimJoint177;

let HAnimJoint178 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint178.USE = "Joe_l_metacarpophalangeal_4";
joints[58] = HAnimJoint178;

let HAnimJoint179 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint179.USE = "Joe_l_carpal_proximal_interphalangeal_4";
joints[59] = HAnimJoint179;

let HAnimJoint180 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint180.USE = "Joe_l_carpal_distal_interphalangeal_4";
joints[60] = HAnimJoint180;

let HAnimJoint181 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint181.USE = "Joe_l_carpometacarpal_5";
joints[61] = HAnimJoint181;

let HAnimJoint182 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint182.USE = "Joe_l_metacarpophalangeal_5";
joints[62] = HAnimJoint182;

let HAnimJoint183 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint183.USE = "Joe_l_carpal_proximal_interphalangeal_5";
joints[63] = HAnimJoint183;

let HAnimJoint184 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint184.USE = "Joe_l_carpal_distal_interphalangeal_5";
joints[64] = HAnimJoint184;

let HAnimJoint185 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint185.USE = "hanim_r_sternoclavicular";
joints[65] = HAnimJoint185;

let HAnimJoint186 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint186.USE = "hanim_r_acromioclavicular";
joints[66] = HAnimJoint186;

let HAnimJoint187 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint187.USE = "hanim_r_shoulder";
joints[67] = HAnimJoint187;

let HAnimJoint188 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint188.USE = "hanim_r_elbow";
joints[68] = HAnimJoint188;

let HAnimJoint189 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint189.USE = "Joe_r_radiocarpal";
joints[69] = HAnimJoint189;

let HAnimJoint190 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint190.USE = "Joe_r_carpometacarpal_1";
joints[70] = HAnimJoint190;

let HAnimJoint191 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint191.USE = "Joe_r_metacarpophalangeal_1";
joints[71] = HAnimJoint191;

let HAnimJoint192 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint192.USE = "Joe_r_carpal_interphalangeal_1";
joints[72] = HAnimJoint192;

let HAnimJoint193 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint193.USE = "Joe_r_carpometacarpal_2";
joints[73] = HAnimJoint193;

let HAnimJoint194 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint194.USE = "Joe_r_metacarpophalangeal_2";
joints[74] = HAnimJoint194;

let HAnimJoint195 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint195.USE = "Joe_r_carpal_proximal_interphalangeal_2";
joints[75] = HAnimJoint195;

let HAnimJoint196 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint196.USE = "Joe_r_carpal_distal_interphalangeal_2";
joints[76] = HAnimJoint196;

let HAnimJoint197 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint197.USE = "Joe_r_carpometacarpal_3";
joints[77] = HAnimJoint197;

let HAnimJoint198 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint198.USE = "Joe_r_metacarpophalangeal_3";
joints[78] = HAnimJoint198;

let HAnimJoint199 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint199.USE = "Joe_r_carpal_proximal_interphalangeal_3";
joints[79] = HAnimJoint199;

let HAnimJoint200 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint200.USE = "Joe_r_carpal_distal_interphalangeal_3";
joints[80] = HAnimJoint200;

let HAnimJoint201 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint201.USE = "Joe_r_carpometacarpal_4";
joints[81] = HAnimJoint201;

let HAnimJoint202 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint202.USE = "Joe_r_metacarpophalangeal_4";
joints[82] = HAnimJoint202;

let HAnimJoint203 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint203.USE = "Joe_r_carpal_proximal_interphalangeal_4";
joints[83] = HAnimJoint203;

let HAnimJoint204 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint204.USE = "Joe_r_carpal_distal_interphalangeal_4";
joints[84] = HAnimJoint204;

let HAnimJoint205 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint205.USE = "Joe_r_carpometacarpal_5";
joints[85] = HAnimJoint205;

let HAnimJoint206 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint206.USE = "Joe_r_metacarpophalangeal_5";
joints[86] = HAnimJoint206;

let HAnimJoint207 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint207.USE = "Joe_r_carpal_proximal_interphalangeal_5";
joints[87] = HAnimJoint207;

let HAnimJoint208 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint208.USE = "Joe_r_carpal_distal_interphalangeal_5";
joints[88] = HAnimJoint208;

let HAnimJoint209 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint209.USE = "hanim_humanoid_root";
joints[89] = HAnimJoint209;

let Shape210 = browser.currentScene.createNode("Shape");
let IndexedFaceSet211 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet211.coordIndex = new X3D.MFInt32([0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]);
IndexedFaceSet211.creaseAngle = 3.09999990463257;
IndexedFaceSet211.colorPerVertex = False;
let Coordinate212 = browser.currentScene.createNode("Coordinate");
Coordinate212.DEF = "JoeSkinCoord";
Coordinate212.point = new X3D.MFVec3f([0,1.76999998092651,0,0,1.66499996185303,0.0900000035762787,-0.0329999998211861,1.62000000476837,0.0869999974966049,0.0329999998211861,1.62000000476837,0.0869999974966049,0,1.54999995231628,0.0970000028610229,-0.0769999995827675,1.63999998569489,-0.00999999977648258,-0.0527000017464161,1.58000004291534,0.0149999996647239,0.0769999995827675,1.63999998569489,-0.00999999977648258,0.0527000017464161,1.58000004291534,0.0149999996647239,0,1.625,-0.0925000011920929,-0.0299999993294477,1.46000003814697,0.0350000001490116,0,1.44000005722046,0.0299999993294477,0.0299999993294477,1.46000003814697,0.0350000001490116,-0.113499999046326,1.317999958992,0.0949999988079071,0.113499999046326,1.317999958992,0.0949999988079071,0,1.25,0.112999998033047,-0.0869999974966049,1.19000005722046,0.0900000035762787,-0.0935000032186508,1.02999997138977,0.0750000029802322,0.0869999974966049,1.19000005722046,0.0900000035762787,0.0935000032186508,1.02999997138977,0.0750000029802322,-0.142499998211861,1.06500005722046,0.00329999998211861,-0.150000005960464,0.899999976158142,-0.00999999977648258,0.142499998211861,1.06500005722046,0.00329999998211861,0.150000005960464,0.899999976158142,-0.00999999977648258,0,1.52999997138977,-0.0839999988675117,0.00490000005811453,1.19079995155334,-0.111299999058247,-0.0772999972105026,1.01900005340576,-0.119999997317791,0.0772999972105026,1.01900005340576,-0.119999997317791,0.00499999988824129,1.09150004386902,-0.109099999070168,-0.178000003099442,1.48249995708466,-0.0625,-0.170000001788139,1.37999999523163,0.00700000021606684,-0.188400000333786,0.86760002374649,-0.0359999984502792,-0.159999996423721,1.37999999523163,-0.127000004053116,-0.200000002980232,1.13880002498627,-0.0799999982118607,-0.244000002741814,1.13880002498627,-0.0399999991059303,-0.165000006556511,1.13880002498627,-0.0399999991059303,-0.230000004172325,1.13300001621246,-0.0549999997019768,-0.197699993848801,0.816900014877319,-0.0176999997347593,-0.194100007414818,0.677200019359589,-0.0423000007867813,-0.21170000731945,0.856199979782104,-0.0584000013768673,-0.192900002002716,0.788999974727631,-0.10639999806881,0.174999997019768,1.48249995708466,-0.0599999986588955,0.170000001788139,1.37999999523163,0.00700000021606684,0.190099999308586,0.864499986171722,-0.0414999984204769,0.159999996423721,1.37999999523163,-0.125,0.200000002980232,1.13880002498627,-0.0799999982118607,0.165000006556511,1.13880002498627,-0.0399999991059303,0.244000002741814,1.13880002498627,-0.0399999991059303,0.230000004172325,1.13300001621246,-0.0549999997019768,0.200900003314018,0.813899993896484,-0.023700000718236,0.205599993467331,0.674300014972687,-0.048200000077486,0.214200004935265,0.85290002822876,-0.064800001680851,0.192900002002716,0.78600001335144,-0.112199999392033,-0.100000001490116,0.491299986839294,-0.0299999993294477,-0.170000001788139,0.465999990701675,0,-0.0500000007450581,0.465999990701675,0,-0.165000006556511,0.00999999977648258,0.119999997317791,-0.150000005960464,0.0700000002980232,0,-0.0850000008940697,0.0860000029206276,0.0125000001862645,-0.0900000035762787,0.0560000017285347,0.0125000001862645,-0.115000002086163,0.0199999995529652,0.122000001370907,-0.115000002086163,0.0399999991059303,-0.0549999997019768,-0.109999999403954,0.0109999999403954,0.189999997615814,0.0992999970912933,0.488099992275238,-0.0308999996632338,0.170000001788139,0.465999990701675,0,0.0500000007450581,0.486699998378754,0,0.165000006556511,0.00999999977648258,0.119999997317791,0.150000005960464,0.0700000002980232,0,0.0850000008940697,0.0860000029206276,0.0125000001862645,0.0900000035762787,0.0560000017285347,0.0125000001862645,0.115000002086163,0.0199999995529652,0.122000001370907,0.115000002086163,0.0399999991059303,-0.0549999997019768,0.109999999403954,0.0109999999403954,0.189999997615814,0,0.875,0,-0.0645999982953072,1.51489996910095,-0.0379999987781048,0.0645999982953072,1.51489996910095,-0.0379999987781048,0,1.07225000858307,0.0900000035762787,-0.109999999403954,1.42700004577637,-0.137500002980232,-0.234999999403954,1.41999995708466,-0.0625,0.109999999403954,1.42700004577637,-0.137500002980232,0.234999999403954,1.41999995708466,-0.0625,0,1.4099999666214,-0.144999995827675,0,0.925000011920929,0.0799999982118607,-0.0869999974966049,1.19000005722046,-0.0900000035762787,0.0869999974966049,1.19000005722046,-0.0900000035762787,0.172000005841255,1.32000005245209,-0.0299999993294477,-0.172000005841255,1.32000005245209,-0.0300000011920929,0.150000005960464,1.23000001907349,-0.0149999996647239,-0.150000005960464,1.23000001907349,-0.0150000005960464,0.0790000036358833,0.919999957084656,-0.140000000596046,0.100000001490116,0.899999976158142,0.0769999995827675,-0.0790000036358833,0.919999957084656,-0.140000000596046,-0.100000001490116,0.899999976158142,0.0750000029802322,0,0.870000004768372,0,0.171000003814697,0.649999976158142,0,0.0199999995529652,0.649999976158142,0,0.100000001490116,0.649999976158142,-0.0799999982118607,0.100000001490116,0.649999976158142,0.0700000002980232,-0.171000003814697,0.649999976158142,0,-0.0199999995529652,0.649999976158142,0,-0.100000001490116,0.649999976158142,-0.0799999982118607,-0.100000001490116,0.649999976158142,0.0700000002980232,0.25,1.26999998092651,-0.0399999991059303,0.170000001788139,1.26999998092651,-0.0399999991059303,0.200000002980232,1.26999998092651,-0.0900000035762787,0.200000002980232,1.26999998092651,0.0199999995529652,0.244000002741814,1.13880002498627,-0.0399999991059303,0.165000006556511,1.13880002498627,-0.0399999991059303,0.200000002980232,1.13880002498627,-0.0799999982118607,0.200000002980232,1.13880002498627,-0.0130000002682209,0.224999994039536,1,-0.00999999977648258,0.224999994039536,1,-0.0700000002980232,0.185000002384186,1,-0.00999999977648258,0.185000002384186,1,-0.0700000002980232,0.200000002980232,1.13880002498627,-0.0399999991059303,0.224999994039536,0.920000016689301,-0.0399999991059303,0.174999997019768,0.920000016689301,-0.0399999991059303,0.200000002980232,0.920000016689301,-0.0649999976158142,0.200000002980232,0.920000016689301,-0.0149999996647239,0.224999994039536,0.889999985694885,-0.0399999991059303,0.174999997019768,0.889999985694885,-0.0399999991059303,0.200000002980232,0.889999985694885,-0.0649999976158142,0.200000002980232,0.889999985694885,-0.0149999996647239,0.217999994754791,0.860000014305115,-0.0399999991059303,0.184000000357628,0.860000014305115,-0.0399999991059303,0.200000002980232,0.870000004768372,-0.0700000002980232,0.200000002980232,0.870000004768372,0,0.209999993443489,0.850000023841858,0,0.185399994254112,0.850000023841858,0,0.211999997496605,0.839999973773956,-0.0149999996647239,0.18299999833107,0.839999973773956,-0.0149999996647239,0.212999999523163,0.834999978542328,-0.0399999991059303,0.189999997615814,0.834999978542328,-0.0399999991059303,0.210999995470047,0.834999978542328,-0.0649999976158142,0.19200000166893,0.834999978542328,-0.0649999976158142,0.208000004291534,0.839999973773956,-0.0850000008940697,0.189999997615814,0.839999973773956,-0.0850000008940697,0.200000002980232,0.839999973773956,-0.0949999988079071,0.215000003576279,0.819999992847443,0,0.193000003695488,0.814999997615814,0.00499999988824129,0.197999998927116,0.800000011920929,0.0120000001043081,0.209999993443489,0.819999992847443,0.0299999993294477,0.189999997615814,0.819999992847443,0.0299999993294477,0.200000002980232,0.834999978542328,0.0390000008046627,0.211999997496605,0.800000011920929,0.0500000007450581,0.187999993562698,0.800000011920929,0.0500000007450581,0.200000002980232,0.806999981403351,0.0570000000298023,0.200000002980232,0.792999982833862,0.0350000001490116,0.200000002980232,0.773999989032745,0.0759999975562096,0.211999997496605,0.779999971389771,0.0700000002980232,0.187999993562698,0.779999971389771,0.0700000002980232,0.200000002980232,0.785000026226044,0.0750000029802322,0.200000002980232,0.769999980926514,0.061999998986721,0.215000003576279,0.792999982833862,-0.0149999996647239,0.187000006437302,0.792999982833862,-0.0149999996647239,0.200000002980232,0.792999982833862,-0.00499999988824129,0.215000003576279,0.787999987602234,-0.0399999991059303,0.187000006437302,0.787999987602234,-0.0399999991059303,0.215000003576279,0.792999982833862,-0.0649999976158142,0.187000006437302,0.792999982833862,-0.0649999976158142,0.209999993443489,0.790000021457672,-0.0850000008940697,0.189999997615814,0.790000021457672,-0.0850000008940697,0.200000002980232,0.790000021457672,-0.0949999988079071,0.189999997615814,0.769999980926514,-0.0274999998509884,0.189999997615814,0.769999980926514,-0.0524999983608723,0.189999997615814,0.779999971389771,-0.0775000005960464,0.211999997496605,0.745000004768372,-0.0149999996647239,0.187999993562698,0.745000004768372,-0.0199999995529652,0.200000002980232,0.745000004768372,-0.0254999995231628,0.200000002980232,0.745000004768372,-0.0044999998062849,0.210999995470047,0.720000028610229,-0.0149999996647239,0.188999995589256,0.720000028610229,-0.0149999996647239,0.200000002980232,0.720000028610229,-0.0252000000327826,0.200000002980232,0.720000028610229,-0.00480000022798777,0.209999993443489,0.694999992847443,-0.0149999996647239,0.189999997615814,0.694999992847443,-0.0149999996647239,0.200000002980232,0.694999992847443,-0.025000000372529,0.200000002980232,0.694999992847443,-0.00499999988824129,0.200000002980232,0.685000002384186,-0.0149999996647239,0.215000003576279,0.740000009536743,-0.0399999991059303,0.185000002384186,0.740000009536743,-0.0399999991059303,0.200000002980232,0.740000009536743,-0.0549999997019768,0.200000002980232,0.740000009536743,-0.025000000372529,0.209999993443489,0.714200019836426,-0.0399999991059303,0.189999997615814,0.714200019836426,-0.0399999991059303,0.200000002980232,0.714200019836426,-0.0529999993741512,0.200000002980232,0.714200019836426,-0.0270000007003546,0.209999993443489,0.680000007152557,-0.0399999991059303,0.189999997615814,0.680000007152557,-0.0399999991059303,0.200000002980232,0.680000007152557,-0.0500000007450581,0.200000002980232,0.680000007152557,-0.0299999993294477,0.200000002980232,0.670000016689301,-0.0399999991059303,0.211999997496605,0.740000009536743,-0.0649999976158142,0.187999993562698,0.740000009536743,-0.0649999976158142,0.200000002980232,0.740000009536743,-0.0755999982357025,0.200000002980232,0.740000009536743,-0.0542000010609627,0.209999993443489,0.717700004577637,-0.0649999976158142,0.189999997615814,0.717700004577637,-0.0649999976158142,0.200000002980232,0.717700004577637,-0.0750999972224236,0.200000002980232,0.717700004577637,-0.0549000017344952,0.209999993443489,0.694999992847443,-0.0649999976158142,0.189999997615814,0.694999992847443,-0.0649999976158142,0.200000002980232,0.694999992847443,-0.0750000029802322,0.200000002980232,0.694999992847443,-0.0549999997019768,0.200000002980232,0.685000002384186,-0.0649999976158142,0.210999995470047,0.754999995231628,-0.0850000008940697,0.188999995589256,0.754999995231628,-0.0850000008940697,0.200000002980232,0.754999995231628,-0.0952000021934509,0.200000002980232,0.754999995231628,-0.0747999995946884,0.209999993443489,0.735000014305115,-0.0850000008940697,0.189999997615814,0.735000014305115,-0.0850000008940697,0.200000002980232,0.735000014305115,-0.095100000500679,0.200000002980232,0.735000014305115,-0.0749000012874603,0.209999993443489,0.720000028610229,-0.0850000008940697,0.189999997615814,0.720000028610229,-0.0850000008940697,0.200000002980232,0.720000028610229,-0.0949999988079071,0.200000002980232,0.720000028610229,-0.0750000029802322,0.200000002980232,0.709999978542328,-0.0850000008940697,-0.230000004172325,1.23000001907349,-0.0399999991059303,-0.159999996423721,1.23000001907349,-0.0399999991059303,-0.200000002980232,1.23500001430511,-0.104999996721745,-0.200000002980232,1.25499999523163,0.0199999995529652,-0.244000002741814,1.13880002498627,-0.0399999991059303,-0.165000006556511,1.13880002498627,-0.0399999991059303,-0.200000002980232,1.13880002498627,-0.0799999982118607,-0.200000002980232,1.13880002498627,0.0130000002682209,-0.224999994039536,1,-0.00999999977648258,-0.224999994039536,1,-0.0700000002980232,-0.185000002384186,1,-0.00999999977648258,-0.185000002384186,1,-0.0700000002980232,-0.200000002980232,1.13880002498627,-0.0399999991059303,-0.224999994039536,0.920000016689301,-0.0399999991059303,-0.174999997019768,0.920000016689301,-0.0399999991059303,-0.200000002980232,0.920000016689301,-0.0649999976158142,-0.200000002980232,0.920000016689301,-0.0149999996647239,-0.224999994039536,0.889999985694885,-0.0399999991059303,-0.174999997019768,0.889999985694885,-0.0399999991059303,-0.200000002980232,0.889999985694885,-0.0649999976158142,-0.200000002980232,0.889999985694885,-0.0149999996647239,-0.217999994754791,0.860000014305115,-0.0399999991059303,-0.184000000357628,0.860000014305115,-0.0399999991059303,-0.200000002980232,0.870000004768372,-0.0700000002980232,-0.200000002980232,0.870000004768372,0,-0.209999993443489,0.850000023841858,0,-0.185399994254112,0.850000023841858,0,-0.211999997496605,0.839999973773956,-0.0149999996647239,-0.18299999833107,0.839999973773956,-0.0149999996647239,-0.212999999523163,0.834999978542328,-0.0399999991059303,-0.189999997615814,0.834999978542328,-0.0399999991059303,-0.210999995470047,0.834999978542328,-0.0649999976158142,-0.19200000166893,0.834999978542328,-0.0649999976158142,-0.208000004291534,0.839999973773956,-0.0850000008940697,-0.189999997615814,0.839999973773956,-0.0850000008940697,-0.200000002980232,0.839999973773956,-0.0949999988079071,-0.215000003576279,0.819999992847443,0,-0.193000003695488,0.814999997615814,0.00499999988824129,-0.197999998927116,0.800000011920929,0.0120000001043081,-0.209999993443489,0.819999992847443,0.0299999993294477,-0.189999997615814,0.819999992847443,0.0299999993294477,-0.200000002980232,0.834999978542328,0.0390000008046627,-0.211999997496605,0.800000011920929,0.0500000007450581,-0.187999993562698,0.800000011920929,0.0500000007450581,-0.200000002980232,0.806999981403351,0.0570000000298023,-0.200000002980232,0.792999982833862,0.0350000001490116,-0.200000002980232,0.773999989032745,0.0759999975562096,-0.211999997496605,0.779999971389771,0.0700000002980232,-0.187999993562698,0.779999971389771,0.0700000002980232,-0.200000002980232,0.785000026226044,0.0750000029802322,-0.200000002980232,0.769999980926514,0.061999998986721,-0.215000003576279,0.792999982833862,-0.0149999996647239,-0.187000006437302,0.792999982833862,-0.0149999996647239,-0.200000002980232,0.792999982833862,-0.00499999988824129,-0.215000003576279,0.787999987602234,-0.0399999991059303,-0.187000006437302,0.787999987602234,-0.0399999991059303,-0.215000003576279,0.792999982833862,-0.0649999976158142,-0.187000006437302,0.792999982833862,-0.0649999976158142,-0.209999993443489,0.790000021457672,-0.0850000008940697,-0.189999997615814,0.790000021457672,-0.0850000008940697,-0.200000002980232,0.790000021457672,-0.0949999988079071,-0.189999997615814,0.769999980926514,-0.0274999998509884,-0.189999997615814,0.769999980926514,-0.0524999983608723,-0.189999997615814,0.779999971389771,-0.0775000005960464,-0.211999997496605,0.745000004768372,-0.0149999996647239,-0.187999993562698,0.745000004768372,-0.0199999995529652,-0.200000002980232,0.745000004768372,-0.0254999995231628,-0.200000002980232,0.745000004768372,-0.0044999998062849,-0.210999995470047,0.720000028610229,-0.0149999996647239,-0.188999995589256,0.720000028610229,-0.0149999996647239,-0.200000002980232,0.720000028610229,-0.0252000000327826,-0.200000002980232,0.720000028610229,-0.00480000022798777,-0.209999993443489,0.694999992847443,-0.0149999996647239,-0.189999997615814,0.694999992847443,-0.0149999996647239,-0.200000002980232,0.694999992847443,-0.025000000372529,-0.200000002980232,0.694999992847443,-0.00499999988824129,-0.200000002980232,0.685000002384186,-0.0149999996647239,-0.215000003576279,0.740000009536743,-0.0399999991059303,-0.185000002384186,0.740000009536743,-0.0399999991059303,-0.200000002980232,0.740000009536743,-0.0549999997019768,-0.200000002980232,0.740000009536743,-0.025000000372529,-0.209999993443489,0.714200019836426,-0.0399999991059303,-0.189999997615814,0.714200019836426,-0.0399999991059303,-0.200000002980232,0.714200019836426,-0.0529999993741512,-0.200000002980232,0.714200019836426,-0.0270000007003546,-0.209999993443489,0.680000007152557,-0.0399999991059303,-0.189999997615814,0.680000007152557,-0.0399999991059303,-0.200000002980232,0.680000007152557,-0.0500000007450581,-0.200000002980232,0.680000007152557,-0.0299999993294477,-0.200000002980232,0.670000016689301,-0.0399999991059303,-0.211999997496605,0.740000009536743,-0.0649999976158142,-0.187999993562698,0.740000009536743,-0.0649999976158142,-0.200000002980232,0.740000009536743,-0.0755999982357025,-0.200000002980232,0.740000009536743,-0.0542000010609627,-0.209999993443489,0.717700004577637,-0.0649999976158142,-0.189999997615814,0.717700004577637,-0.0649999976158142,-0.200000002980232,0.717700004577637,-0.0750999972224236,-0.200000002980232,0.717700004577637,-0.0549000017344952,-0.209999993443489,0.694999992847443,-0.0649999976158142,-0.189999997615814,0.694999992847443,-0.0649999976158142,-0.200000002980232,0.694999992847443,-0.0750000029802322,-0.200000002980232,0.694999992847443,-0.0549999997019768,-0.200000002980232,0.685000002384186,-0.0649999976158142,-0.210999995470047,0.754999995231628,-0.0850000008940697,-0.188999995589256,0.754999995231628,-0.0850000008940697,-0.200000002980232,0.754999995231628,-0.0952000021934509,-0.200000002980232,0.754999995231628,-0.0747999995946884,-0.209999993443489,0.735000014305115,-0.0850000008940697,-0.189999997615814,0.735000014305115,-0.0850000008940697,-0.200000002980232,0.735000014305115,-0.095100000500679,-0.200000002980232,0.735000014305115,-0.0749000012874603,-0.209999993443489,0.720000028610229,-0.0850000008940697,-0.189999997615814,0.720000028610229,-0.0850000008940697,-0.200000002980232,0.720000028610229,-0.0949999988079071,-0.200000002980232,0.720000028610229,-0.0750000029802322,-0.200000002980232,0.709999978542328,-0.0850000008940697,0.115000002086163,0.465999990701675,0.0599999986588955,0.115000002086163,0.465999990701675,-0.0549999997019768,0.150000005960464,0.465999990701675,0,0.0500000007450581,0.465999990701675,0,0.170000001788139,0.300000011920929,0,0.0599999986588955,0.300000011920929,0,0.100000001490116,0.300000011920929,-0.0500000007450581,0.100000001490116,0.300000011920929,0.0500000007450581,0.150000005960464,0.0700000002980232,0,0.0850000008940697,0.0860000029206276,0.0125000001862645,0.115000002086163,0.0689999982714653,-0.0450000017881393,0.116999998688698,0.0974999964237213,0.0615000016987324,0.137500002980232,0.00600000005215406,-0.0299999993294477,0.0949999988079071,0.00600000005215406,-0.0299999993294477,0.115000002086163,0.0149999996647239,-0.0450000017881393,0.115000002086163,0.0599999986588955,0.100000001490116,0.115000002086163,0,0.0700000002980232,0.165000006556511,0,0.0700000002980232,0.0949999988079071,0,0.0700000002980232,0.115000002086163,0.0399999991059303,0.129999995231628,0.125,0,0.119999997317791,0.165000006556511,0,0.119999997317791,0.0869999974966049,0,0.122000001370907,0.0900000035762787,0.0120000001043081,0.187999993562698,0.109999999403954,0.0109999999403954,0.189999997615814,0.128000006079674,0.0109999999403954,0.185000002384186,0.142000004649162,0.0109999999403954,0.178000003099442,0.153999999165535,0.00999999977648258,0.167999997735024,-0.115000009536743,0.465999990701675,0.0600000023841858,-0.115000002086163,0.465999990701675,-0.0549999997019768,-0.170000001788139,0.465999990701675,0,-0.0500000007450581,0.465999990701675,0,-0.170000001788139,0.300000011920929,0,-0.0599999986588955,0.300000011920929,0,-0.100000001490116,0.300000011920929,-0.0500000007450581,-0.100000001490116,0.300000011920929,0.0500000007450581,-0.150000005960464,0.0700000002980232,0,-0.0850000008940697,0.0860000029206276,0.0125000001862645,-0.115000002086163,0.0689999982714653,-0.0450000017881393,-0.116999998688698,0.0974999964237213,0.0615000016987324,-0.137500002980232,0.00600000005215406,-0.0299999993294477,-0.0949999988079071,0.00600000005215406,-0.0299999993294477,-0.0949999988079071,0.00600000005215406,-0.0299999993294477,-0.115000002086163,0.0599999986588955,0.100000001490116,-0.115000002086163,0,0.0700000002980232,-0.165000006556511,0,0.0700000002980232,-0.0949999988079071,0,0.0700000002980232,-0.115000002086163,0.0399999991059303,0.129999995231628,-0.125,0,0.119999997317791,-0.165000006556511,0,0.119999997317791,-0.0869999974966049,0,0.122000001370907,-0.0900000035762787,0.0120000001043081,0.187999993562698,-0.109999999403954,0.0109999999403954,0.189999997615814,-0.128000006079674,0.0109999999403954,0.185000002384186,-0.142000004649162,0.0109999999403954,0.178000003099442,-0.153999999165535,0.00999999977648258,0.167999997735024]);
coord = Coordinate212;

geometry = IndexedFaceSet211;

let Appearance213 = browser.currentScene.createNode("Appearance");
let ImageTexture214 = browser.currentScene.createNode("ImageTexture");
ImageTexture214.url = new X3D.MFString([new X3D.SFString("bodytexture28.png")]);
texture = ImageTexture214;

let Material215 = browser.currentScene.createNode("Material");
Material215.ambientIntensity = 0.699999988079071;
Material215.shininess = 0.600000023841858;
Material215.diffuseColor = new X3D.SFColor([0.5,0,0.5]);
Material215.specularColor = new X3D.SFColor([1,1,1]);
Material215.emissiveColor = new X3D.SFColor([0.129999995231628,0.349999994039536,0.129999995231628]);
material = Material215;

appearance = Appearance213;

skin[90] = Shape210;

let Coordinate216 = browser.currentScene.createNode("Coordinate");
Coordinate216.USE = "JoeSkinCoord";
skinCoord = Coordinate216;

Group26YYY.children = new X3D.MFNode();

Group26ZZZ.children[0] = HAnimHumanoid27;

browser.currentScene.children[8] = Group26;

let Transform217 = browser.currentScene.createNode("Transform");
Transform217.DEF = "SBall";
Transform217.translation = new X3D.SFVec3f([-0.42091,0.2089,-0.42091]);
Transform217.rotation = new X3D.SFRotation([-0.70711,0,-0.70711,0.67654]);
Transform217.scale = new X3D.SFVec3f([0.23,0.23,0.23]);
let Shape218 = browser.currentScene.createNode("Shape");
let Appearance219 = browser.currentScene.createNode("Appearance");
let Material220 = browser.currentScene.createNode("Material");
Material220.diffuseColor = new X3D.SFColor([0,0.8353,0]);
Material220.specularColor = new X3D.SFColor([0,0.6849,0]);
Material220.emissiveColor = new X3D.SFColor([1,1,1]);
material = Material220;

let ImageTexture221 = browser.currentScene.createNode("ImageTexture");
ImageTexture221.url = new X3D.MFString([new X3D.SFString("bodytexture28.png")]);
texture = ImageTexture221;

appearance = Appearance219;

let IndexedFaceSet222 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet222.DEF = "ball";
IndexedFaceSet222.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,1,13,14,-1,1,14,2,-1,2,14,15,-1,2,15,3,-1,3,15,16,-1,3,16,4,-1,4,16,17,-1,4,17,5,-1,5,17,18,-1,5,18,6,-1,6,18,19,-1,6,19,7,-1,7,19,20,-1,7,20,8,-1,8,20,21,-1,8,21,9,-1,9,21,22,-1,9,22,10,-1,10,22,23,-1,10,23,11,-1,11,23,24,-1,11,24,12,-1,12,24,13,-1,12,13,1,-1,13,25,26,-1,13,26,14,-1,14,26,27,-1,14,27,15,-1,15,27,28,-1,15,28,16,-1,16,28,29,-1,16,29,17,-1,17,29,30,-1,17,30,18,-1,18,30,31,-1,18,31,19,-1,19,31,32,-1,19,32,20,-1,20,32,33,-1,20,33,21,-1,21,33,34,-1,21,34,22,-1,22,34,35,-1,22,35,23,-1,23,35,36,-1,23,36,24,-1,24,36,25,-1,24,25,13,-1,25,37,38,-1,25,38,26,-1,26,38,39,-1,26,39,27,-1,27,39,40,-1,27,40,28,-1,28,40,41,-1,28,41,29,-1,29,41,42,-1,29,42,30,-1,30,42,43,-1,30,43,31,-1,31,43,44,-1,31,44,32,-1,32,44,45,-1,32,45,33,-1,33,45,46,-1,33,46,34,-1,34,46,47,-1,34,47,35,-1,35,47,48,-1,35,48,36,-1,36,48,37,-1,36,37,25,-1,37,49,50,-1,37,50,38,-1,38,50,51,-1,38,51,39,-1,39,51,52,-1,39,52,40,-1,40,52,53,-1,40,53,41,-1,41,53,54,-1,41,54,42,-1,42,54,55,-1,42,55,43,-1,43,55,56,-1,43,56,44,-1,44,56,57,-1,44,57,45,-1,45,57,58,-1,45,58,46,-1,46,58,59,-1,46,59,47,-1,47,59,60,-1,47,60,48,-1,48,60,49,-1,48,49,37,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]);
let Coordinate223 = browser.currentScene.createNode("Coordinate");
Coordinate223.point = new X3D.MFVec3f([0,0.4675,0,0,0.4049,-0.2338,-0.1169,0.4049,-0.2024,-0.2024,0.4049,-0.1169,-0.2338,0.4049,0,-0.2024,0.4049,0.1169,-0.1169,0.4049,0.2024,0,0.4049,0.2338,0.1169,0.4049,0.2024,0.2024,0.4049,0.1169,0.2338,0.4049,0,0.2024,0.4049,-0.1169,0.1169,0.4049,-0.2024,0,0.2338,-0.4049,-0.2024,0.2338,-0.3506,-0.3506,0.2338,-0.2024,-0.4049,0.2338,0,-0.3506,0.2338,0.2024,-0.2024,0.2338,0.3506,0,0.2338,0.4049,0.2024,0.2338,0.3506,0.3506,0.2338,0.2024,0.4049,0.2338,0,0.3506,0.2338,-0.2024,0.2024,0.2338,-0.3506,0,0,-0.4675,-0.2338,0,-0.4049,-0.4049,0,-0.2338,-0.4675,0,0,-0.4049,0,0.2338,-0.2338,0,0.4049,0,0,0.4675,0.2338,0,0.4049,0.4049,0,0.2338,0.4675,0,0,0.4049,0,-0.2338,0.2338,0,-0.4049,0,-0.2338,-0.4049,-0.2024,-0.2338,-0.3506,-0.3506,-0.2338,-0.2024,-0.4049,-0.2338,0,-0.3506,-0.2338,0.2024,-0.2024,-0.2338,0.3506,0,-0.2338,0.4049,0.2024,-0.2338,0.3506,0.3506,-0.2338,0.2024,0.4049,-0.2338,0,0.3506,-0.2338,-0.2024,0.2024,-0.2338,-0.3506,0,-0.4049,-0.2338,-0.1169,-0.4049,-0.2024,-0.2024,-0.4049,-0.1169,-0.2338,-0.4049,0,-0.2024,-0.4049,0.1169,-0.1169,-0.4049,0.2024,0,-0.4049,0.2338,0.1169,-0.4049,0.2024,0.2024,-0.4049,0.1169,0.2338,-0.4049,0,0.2024,-0.4049,-0.1169,0.1169,-0.4049,-0.2024,0,-0.4675,0]);
coord = Coordinate223;

geometry = IndexedFaceSet222;

Transform217YYY.child = new X3D.undefined();

Transform217ZZZ.child[0] = Shape218;

let Viewpoint224 = browser.currentScene.createNode("Viewpoint");
Viewpoint224.DEF = "ballView";
Viewpoint224.description = "ball View";
Transform217ZZZ.children[1] = Viewpoint224;

browser.currentScene.children[9] = Transform217;

let Transform225 = browser.currentScene.createNode("Transform");
Transform225.DEF = "scenecordsys";
Transform225.scale = new X3D.SFVec3f([0.275,0.275,0.275]);
let Inline226 = browser.currentScene.createNode("Inline");
Inline226.global = True;
Inline226.url = new X3D.MFString([new X3D.SFString("JointCoordinateAxes.x3dv")]);
Transform225YYY.children = new X3D.MFNode();

Transform225ZZZ.children[0] = Inline226;

browser.currentScene.children[10] = Transform225;

let Transform227 = browser.currentScene.createNode("Transform");
Transform227.DEF = "Circle0";
Transform227.scale = new X3D.SFVec3f([1.175,1,1.175]);
let Shape228 = browser.currentScene.createNode("Shape");
let Appearance229 = browser.currentScene.createNode("Appearance");
let Material230 = browser.currentScene.createNode("Material");
Material230.diffuseColor = new X3D.SFColor([0.9,0,0.7]);
Material230.emissiveColor = new X3D.SFColor([0.42496,0.48398,1]);
material = Material230;

appearance = Appearance229;

let IndexedLineSet231 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet231.DEF = "Orbit1";
IndexedLineSet231.coordIndex = new X3D.MFInt32([0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1]);
let Coordinate232 = browser.currentScene.createNode("Coordinate");
Coordinate232.point = new X3D.MFVec3f([1,0,0,0.995,0,-0.105,0.979,0,-0.208,0.951,0,-0.309,0.914,0,-0.407,0.866,0,-0.5,0.809,0,-0.588,0.743,0,-0.669,0.669,0,-0.743,0.588,0,-0.809,0.5,0,-0.866,0.407,0,-0.914,0.309,0,-0.951,0.208,0,-0.978,0.105,0,-0.995,0,0,-1,-0.105,0,-0.99452,-0.208,0,-0.978,-0.309,0,-0.951,-0.407,0,-0.914,-0.5,0,-0.866,-0.588,0,-0.809,-0.669,0,-0.743,-0.743,0,-0.669,-0.809,0,-0.588,-0.866,0,-0.5,-0.914,0,-0.407,-0.951,0,-0.309,-0.978,0,-0.208,-0.995,0,-0.105,-1,0,0,-0.995,0,0.105,-0.978,0,0.208,-0.951,0,0.309,-0.914,0,0.407,-0.866,0,0.5,-0.809,0,0.588,-0.743,0,0.669,-0.669,0,0.743,-0.588,0,0.809,-0.5,0,0.866,-0.407,0,0.914,-0.309,0,0.951,-0.208,0,0.978,-0.105,0,0.995,0,0,1,0.105,0,0.995,0.208,0,0.978,0.309,0,0.951,0.407,0,0.914,0.5,0,0.866,0.588,0,0.809,0.669,0,0.743,0.743,0,0.669,0.809,0,0.588,0.866,0,0.5,0.914,0,0.407,0.951,0,0.309,0.978,0,0.208,0.995,0,0.104,1,0,0]);
coord = Coordinate232;

geometry = IndexedLineSet231;

Transform227YYY.child = new X3D.undefined();

Transform227ZZZ.child[0] = Shape228;

browser.currentScene.children[11] = Transform227;

let Transform233 = browser.currentScene.createNode("Transform");
Transform233.DEF = "Circle1";
Transform233.scale = new X3D.SFVec3f([0.5,1,0.5]);
let Shape234 = browser.currentScene.createNode("Shape");
let Appearance235 = browser.currentScene.createNode("Appearance");
let Material236 = browser.currentScene.createNode("Material");
Material236.diffuseColor = new X3D.SFColor([0.9,0,0.7]);
Material236.emissiveColor = new X3D.SFColor([0.42496,0.48398,1]);
material = Material236;

appearance = Appearance235;

let IndexedLineSet237 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet237.USE = "Orbit1";
geometry = IndexedLineSet237;

Transform233YYY.child = new X3D.undefined();

Transform233ZZZ.child[0] = Shape234;

browser.currentScene.children[12] = Transform233;

let Transform238 = browser.currentScene.createNode("Transform");
Transform238.DEF = "Circle2";
Transform238.scale = new X3D.SFVec3f([0.25,1,0.25]);
let Shape239 = browser.currentScene.createNode("Shape");
let Appearance240 = browser.currentScene.createNode("Appearance");
let Material241 = browser.currentScene.createNode("Material");
Material241.diffuseColor = new X3D.SFColor([0.9,0,0.7]);
Material241.emissiveColor = new X3D.SFColor([0.42496,0.48398,1]);
material = Material241;

appearance = Appearance240;

let IndexedLineSet242 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet242.USE = "Orbit1";
geometry = IndexedLineSet242;

Transform238YYY.child = new X3D.undefined();

Transform238ZZZ.child[0] = Shape239;

browser.currentScene.children[13] = Transform238;

}
main ();
