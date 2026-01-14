const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
//BS studio translation from .x3dv by Joe using BS Contact
scene .addComponent (browser .getComponent ("H-Anim", 1));
scene.addMetaData("title", "JoeSkinTexcoordDisplacerKick.x3d");
scene.addMetaData("info", "Joe No Reservations 20200709 fix hier20161206 20161111 20160720 20121221 20040109 x3d/hanim");
scene.addMetaData("description", "The Joe model is a Humanoid with textured skin.");
scene.addMetaData("creator", "Joe Williams");
scene.addMetaData("created", "9 January 2014");
scene.addMetaData("translated", "12 January 2017");
scene.addMetaData("modified", "09 July 2020");
scene.addMetaData("TODO", "Record information about skin coordinates (found in comment at end of scene) as a structured MetadataSet containing MetadataString nodes");
scene.addMetaData("translators", "Roy Walmsley and Don Brutzman");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/JoeSkinTexcoordDisplacerKick.x3d");
scene.addMetaData("generator", "X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit");
scene.addMetaData("license", "../license.html");
await browser .loadComponents (scene);
let WorldInfo16 = browser.currentScene.createNode("WorldInfo");
WorldInfo16.info = new X3D.MFString([new X3D.SFString("X3D Humanoid V1 LOA3 skeleton"), new X3D.SFString("skin from hanim sites, surface features, and some added points"), new X3D.SFString("390 points")]);
WorldInfo16.title = "X3D HANIM LOA3 Skeleton, 390 point Skin, texcoords, Displacer, teTrans for Joe_ by Joe";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo16;

let NavigationInfo17 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo17.DEF = "Start_NavigationInfo";
NavigationInfo17.headlight = False;
NavigationInfo17.speed = 2.5;
browser.currentScene.children[1] = NavigationInfo17;

let Background18 = browser.currentScene.createNode("Background");
Background18.DEF = "blue_Background";
browser.currentScene.children[2] = Background18;

let SpotLight19 = browser.currentScene.createNode("SpotLight");
SpotLight19.DEF = "light1";
SpotLight19.ambientIntensity = 0.7;
SpotLight19.beamWidth = 1.5;
SpotLight19.color = new X3D.SFColor([0.8,0.8,1]);
SpotLight19.cutOffAngle = 0.6;
SpotLight19.direction = new X3D.SFVec3f([0,0,0]);
SpotLight19.location = new X3D.SFVec3f([0,3,3]);
SpotLight19.radius = 10;
browser.currentScene.children[3] = SpotLight19;

let PointLight20 = browser.currentScene.createNode("PointLight");
PointLight20.DEF = "light2";
PointLight20.ambientIntensity = 0.7;
PointLight20.color = new X3D.SFColor([0.8,0.8,1]);
PointLight20.location = new X3D.SFVec3f([0,10,-7]);
browser.currentScene.children[4] = PointLight20;

//External from the Humanoid viewpoints
let Viewpoint21 = browser.currentScene.createNode("Viewpoint");
Viewpoint21.DEF = "Scene_InclinedView";
Viewpoint21.centerOfRotation = new X3D.SFVec3f([0,0.85,0]);
Viewpoint21.description = "Scene_Inclined View";
Viewpoint21.orientation = new X3D.SFRotation([-0.113,0.993,0.0347,0.671]);
Viewpoint21.position = new X3D.SFVec3f([1.62,1.05,3.06]);
browser.currentScene.children[5] = Viewpoint21;

let Viewpoint22 = browser.currentScene.createNode("Viewpoint");
Viewpoint22.DEF = "Scene_IFrontView";
Viewpoint22.centerOfRotation = new X3D.SFVec3f([0,0.8,0]);
Viewpoint22.description = "Scene_Front View";
Viewpoint22.position = new X3D.SFVec3f([0,0.8,2.58]);
browser.currentScene.children[6] = Viewpoint22;

let Viewpoint23 = browser.currentScene.createNode("Viewpoint");
Viewpoint23.DEF = "Scene_ISideView";
Viewpoint23.centerOfRotation = new X3D.SFVec3f([0,0.8,0]);
Viewpoint23.description = "Scene_Side View";
Viewpoint23.orientation = new X3D.SFRotation([0,1,0,1.5708]);
Viewpoint23.position = new X3D.SFVec3f([2.6,0.5,0]);
browser.currentScene.children[7] = Viewpoint23;

let Viewpoint24 = browser.currentScene.createNode("Viewpoint");
Viewpoint24.DEF = "Scene_BackView";
Viewpoint24.centerOfRotation = new X3D.SFVec3f([0,1.5,0]);
Viewpoint24.description = "Scene_Back View";
Viewpoint24.orientation = new X3D.SFRotation([0,1,0,3.14]);
Viewpoint24.position = new X3D.SFVec3f([0,2.5,-3]);
browser.currentScene.children[8] = Viewpoint24;

let Viewpoint25 = browser.currentScene.createNode("Viewpoint");
Viewpoint25.DEF = "Scene_TopView";
Viewpoint25.centerOfRotation = new X3D.SFVec3f([0,1.5,0]);
Viewpoint25.description = "Scene_Top View";
Viewpoint25.orientation = new X3D.SFRotation([1,0,0,-1.5708]);
Viewpoint25.position = new X3D.SFVec3f([0,3.5,0]);
browser.currentScene.children[9] = Viewpoint25;

let Group26 = browser.currentScene.createNode("Group");
Group26.DEF = "Joe_Humanoid";
let HAnimHumanoid27 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid27.name = "Human";
HAnimHumanoid27.DEF = "Joe_Human";
HAnimHumanoid27.version = "2.0";
let HAnimJoint28 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint28.name = "HumanoidRoot";
HAnimJoint28.DEF = "Joe_HumanoidRoot";
HAnimJoint28.center = new X3D.SFVec3f([0,0.875,0]);
HAnimJoint28.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint28.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment29 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment29.name = "sacrum";
HAnimSegment29.DEF = "Joe_sacrum";
let HAnimSite30 = browser.currentScene.createNode("HAnimSite");
HAnimSite30.name = "RootFront";
HAnimSite30.DEF = "Joe_RootFront";
let Transform31 = browser.currentScene.createNode("Transform");
Transform31.DEF = "hanimcordsys";
Transform31.scale = new X3D.SFVec3f([0.175,0.175,0.175]);
let Viewpoint32 = browser.currentScene.createNode("Viewpoint");
Viewpoint32.DEF = "ViewBodyRootAxes";
Viewpoint32.description = "Joe_HAnim Root Coordinate Axes View";
Transform31YYY.children = new X3D.MFNode();

Transform31ZZZ.children[0] = Viewpoint32;

let Shape33 = browser.currentScene.createNode("Shape");
Shape33.DEF = "AxisLinesShape";
let IndexedLineSet34 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet34.colorIndex = new X3D.MFInt32([0,1,2]);
IndexedLineSet34.colorPerVertex = False;
IndexedLineSet34.coordIndex = new X3D.MFInt32([0,1,-1,0,2,-1,0,3,-1]);
let Coordinate35 = browser.currentScene.createNode("Coordinate");
Coordinate35.point = new X3D.MFVec3f([0,0,0,1,0,0,0,1,0,0,0,1]);
coord = Coordinate35;

let Color36 = browser.currentScene.createNode("Color");
Color36.color = new X3D.MFColor([1,0,0,0,0.6,0,0,0,1]);
color = Color36;

geometry = IndexedLineSet34;

Transform31ZZZ.child[1] = Shape33;

HAnimSite30YYY.children = new X3D.MFNode();

HAnimSite30ZZZ.children[0] = Transform31;

HAnimSegment29YYY.children = new X3D.MFNode();

HAnimSegment29ZZZ.children[0] = HAnimSite30;

HAnimJoint28YYY.children = new X3D.MFNode();

HAnimJoint28ZZZ.children[0] = HAnimSegment29;

let HAnimJoint37 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint37.name = "sacroiliac";
HAnimJoint37.DEF = "Joe_sacroiliac";
HAnimJoint37.center = new X3D.SFVec3f([0,0.92,0]);
HAnimJoint37.skinCoordIndex = new X3D.MFInt32([17,19,20,21,22,23,26,27,73,82,89,91,93]);
HAnimJoint37.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1,1,0.35,0.35,1]);
HAnimJoint37.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint37.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint38 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint38.name = "l_hip";
HAnimJoint38.DEF = "Joe_l_hip";
HAnimJoint38.center = new X3D.SFVec3f([0.1,0.92,0]);
HAnimJoint38.skinCoordIndex = new X3D.MFInt32([89,90,94,95,96,97]);
HAnimJoint38.skinCoordWeight = new X3D.MFFloat([0.65,1,1,1,1,1]);
HAnimJoint38.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint38.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint39 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint39.name = "l_knee";
HAnimJoint39.DEF = "Joe_l_knee";
HAnimJoint39.center = new X3D.SFVec3f([0.115,0.466,0]);
HAnimJoint39.skinCoordIndex = new X3D.MFInt32([334,335,336,337,338,339,340,341]);
HAnimJoint39.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
HAnimJoint39.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint39.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint40 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint40.name = "l_ankle";
HAnimJoint40.DEF = "Joe_l_ankle";
HAnimJoint40.center = new X3D.SFVec3f([0.115,0.069,0]);
HAnimJoint40.skinCoordIndex = new X3D.MFInt32([342,343,344,345]);
HAnimJoint40.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
HAnimJoint40.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint40.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint41 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint41.name = "l_subtalar";
HAnimJoint41.DEF = "Joe_l_subtalar";
HAnimJoint41.center = new X3D.SFVec3f([0.115,0.031,0.03]);
HAnimJoint41.skinCoordIndex = new X3D.MFInt32([346,347,348,71]);
HAnimJoint41.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
HAnimJoint41.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint41.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint42 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint42.name = "l_midtarsal";
HAnimJoint42.DEF = "Joe_l_midtarsal";
HAnimJoint42.center = new X3D.SFVec3f([0.115,0.037,0.09]);
HAnimJoint42.skinCoordIndex = new X3D.MFInt32([349,350,351,352]);
HAnimJoint42.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
HAnimJoint42.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint42.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint43 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint43.name = "l_metatarsal";
HAnimJoint43.DEF = "Joe_l_metatarsal";
HAnimJoint43.center = new X3D.SFVec3f([0.115,0.02,0.122]);
HAnimJoint43.skinCoordIndex = new X3D.MFInt32([353,354,355,356,357,358,359,360,361]);
HAnimJoint43.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
HAnimJoint43.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint43.llimit = new X3D.MFFloat([0,0,0]);
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

let HAnimJoint44 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint44.name = "r_hip";
HAnimJoint44.DEF = "Joe_r_hip";
HAnimJoint44.center = new X3D.SFVec3f([-0.1,0.92,0]);
HAnimJoint44.skinCoordIndex = new X3D.MFInt32([91,92,98,99,100,101,362,363]);
HAnimJoint44.skinCoordWeight = new X3D.MFFloat([0.65,1,0.8,1,1,1,0.4,0.8]);
HAnimJoint44.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint44.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint45 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint45.name = "r_knee";
HAnimJoint45.DEF = "Joe_r_knee";
HAnimJoint45.center = new X3D.SFVec3f([-0.05,0.466,0]);
HAnimJoint45.skinCoordIndex = new X3D.MFInt32([362,363,364,365,366,367,368,369,98]);
HAnimJoint45.skinCoordWeight = new X3D.MFFloat([0.6,0.2,1,1,1,1,1,1,0.2]);
HAnimJoint45.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint45.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint46 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint46.name = "r_ankle";
HAnimJoint46.DEF = "Joe_r_ankle";
HAnimJoint46.center = new X3D.SFVec3f([-0.115,0.069,0]);
HAnimJoint46.skinCoordIndex = new X3D.MFInt32([370,371,372,373]);
HAnimJoint46.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
HAnimJoint46.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint46.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint47 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint47.name = "r_subtalar";
HAnimJoint47.DEF = "Joe_r_subtalar";
HAnimJoint47.center = new X3D.SFVec3f([-0.1,0.015,-0.01]);
HAnimJoint47.skinCoordIndex = new X3D.MFInt32([374,375,376]);
HAnimJoint47.skinCoordWeight = new X3D.MFFloat([1,1,1]);
HAnimJoint47.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint47.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint48 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint48.name = "r_midtarsal";
HAnimJoint48.DEF = "Joe_r_midtarsal";
HAnimJoint48.center = new X3D.SFVec3f([-0.115,0.037,0.09]);
HAnimJoint48.skinCoordIndex = new X3D.MFInt32([377,378,379,380]);
HAnimJoint48.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
HAnimJoint48.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint48.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint49 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint49.name = "r_metatarsal";
HAnimJoint49.DEF = "Joe_r_metatarsal";
HAnimJoint49.center = new X3D.SFVec3f([-0.1,0.01,0.14]);
HAnimJoint49.skinCoordIndex = new X3D.MFInt32([381,382,383,384,385,386,387,388,389]);
HAnimJoint49.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
HAnimJoint49.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint49.llimit = new X3D.MFFloat([0,0,0]);
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

HAnimJoint37ZZZ.children[1] = HAnimJoint44;

HAnimJoint28ZZZ.children[1] = HAnimJoint37;

let HAnimJoint50 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint50.name = "vl5";
HAnimJoint50.DEF = "Joe_vl5";
HAnimJoint50.center = new X3D.SFVec3f([0,1.045,-0.095]);
HAnimJoint50.skinCoordIndex = new X3D.MFInt32([28,76]);
HAnimJoint50.skinCoordWeight = new X3D.MFFloat([1,1]);
HAnimJoint50.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint50.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint51 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint51.name = "vl4";
HAnimJoint51.DEF = "Joe_vl4";
HAnimJoint51.center = new X3D.SFVec3f([0,1.068,-0.085]);
HAnimJoint51.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint51.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint52 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint52.name = "vl3";
HAnimJoint52.DEF = "Joe_vl3";
HAnimJoint52.center = new X3D.SFVec3f([0,1.092,-0.0725]);
HAnimJoint52.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint52.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint53 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint53.name = "vl2";
HAnimJoint53.DEF = "Joe_vl2";
HAnimJoint53.center = new X3D.SFVec3f([0,1.12,-0.065]);
HAnimJoint53.skinCoordIndex = new X3D.MFInt32([16,18,25,83,84,85,86,87,88]);
HAnimJoint53.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,0.7,1,0.8]);
HAnimJoint53.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint53.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint54 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint54.name = "vl1";
HAnimJoint54.DEF = "Joe_vl1";
HAnimJoint54.center = new X3D.SFVec3f([0,1.1459,-0.0625]);
HAnimJoint54.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint54.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint55 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint55.name = "vt12";
HAnimJoint55.DEF = "Joe_vt12";
HAnimJoint55.center = new X3D.SFVec3f([0,1.179,-0.068]);
HAnimJoint55.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint55.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint56 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint56.name = "vt11";
HAnimJoint56.DEF = "Joe_vt11";
HAnimJoint56.center = new X3D.SFVec3f([0,1.2679,-0.081]);
HAnimJoint56.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint56.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint57 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint57.name = "vt10";
HAnimJoint57.DEF = "Joe_vt10";
HAnimJoint57.center = new X3D.SFVec3f([0,1.242,-0.09]);
HAnimJoint57.skinCoordIndex = new X3D.MFInt32([15]);
HAnimJoint57.skinCoordWeight = new X3D.MFFloat([1]);
HAnimJoint57.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint57.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint58 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint58.name = "vt9";
HAnimJoint58.DEF = "Joe_vt9";
HAnimJoint58.center = new X3D.SFVec3f([0,1.268,-0.1]);
HAnimJoint58.skinCoordIndex = new X3D.MFInt32([13,14]);
HAnimJoint58.skinCoordWeight = new X3D.MFFloat([1,1]);
HAnimJoint58.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint58.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint59 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint59.name = "vt8";
HAnimJoint59.DEF = "Joe_vt8";
HAnimJoint59.center = new X3D.SFVec3f([0,1.294,-0.11]);
HAnimJoint59.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint59.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint60 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint60.name = "vt7";
HAnimJoint60.DEF = "Joe_vt7";
HAnimJoint60.center = new X3D.SFVec3f([0,1.323,-0.1155]);
HAnimJoint60.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint60.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint61 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint61.name = "vt6";
HAnimJoint61.DEF = "Joe_vt6";
HAnimJoint61.center = new X3D.SFVec3f([0,1.352,-0.12]);
HAnimJoint61.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint61.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint62 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint62.name = "vt5";
HAnimJoint62.DEF = "Joe_vt5";
HAnimJoint62.center = new X3D.SFVec3f([0,1.381,-0.1235]);
HAnimJoint62.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint62.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint63 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint63.name = "vt4";
HAnimJoint63.DEF = "Joe_vt4";
HAnimJoint63.center = new X3D.SFVec3f([0,1.41,-0.1235]);
HAnimJoint63.skinCoordIndex = new X3D.MFInt32([81]);
HAnimJoint63.skinCoordWeight = new X3D.MFFloat([1]);
HAnimJoint63.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint63.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint64 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint64.name = "vt3";
HAnimJoint64.DEF = "Joe_vt3";
HAnimJoint64.center = new X3D.SFVec3f([0,1.438,-0.12]);
HAnimJoint64.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint64.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint65 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint65.name = "vt2";
HAnimJoint65.DEF = "Joe_vt2";
HAnimJoint65.center = new X3D.SFVec3f([0,1.468,-0.105]);
HAnimJoint65.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint65.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint66 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint66.name = "vt1";
HAnimJoint66.DEF = "Joe_vt1";
HAnimJoint66.center = new X3D.SFVec3f([0,1.497,-0.09]);
HAnimJoint66.skinCoordIndex = new X3D.MFInt32([11,24]);
HAnimJoint66.skinCoordWeight = new X3D.MFFloat([1,1]);
HAnimJoint66.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint66.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint67 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint67.name = "vc7";
HAnimJoint67.DEF = "Joe_vc7";
HAnimJoint67.center = new X3D.SFVec3f([0,1.525,-0.072]);
HAnimJoint67.skinCoordIndex = new X3D.MFInt32([74,75]);
HAnimJoint67.skinCoordWeight = new X3D.MFFloat([1,1]);
HAnimJoint67.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint67.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint68 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint68.name = "vc6";
HAnimJoint68.DEF = "Joe_vc6";
HAnimJoint68.center = new X3D.SFVec3f([0,1.54,-0.05]);
HAnimJoint68.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint68.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint69 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint69.name = "vc5";
HAnimJoint69.DEF = "Joe_vc5";
HAnimJoint69.center = new X3D.SFVec3f([0,1.552,-0.035]);
HAnimJoint69.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint69.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint70 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint70.name = "vc4";
HAnimJoint70.DEF = "Joe_vc4";
HAnimJoint70.center = new X3D.SFVec3f([0,1.5675,-0.0256]);
HAnimJoint70.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint70.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint71 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint71.name = "vc3";
HAnimJoint71.DEF = "Joe_vc3";
HAnimJoint71.center = new X3D.SFVec3f([0,1.58225,-0.0185]);
HAnimJoint71.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint71.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint72 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint72.name = "vc2";
HAnimJoint72.DEF = "Joe_vc2";
HAnimJoint72.center = new X3D.SFVec3f([0,1.595,-0.0175]);
HAnimJoint72.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint72.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint73 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint73.name = "vc1";
HAnimJoint73.DEF = "Joe_vc1";
HAnimJoint73.center = new X3D.SFVec3f([0,1.61,-0.015]);
HAnimJoint73.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint73.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint74 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint74.name = "skullbase";
HAnimJoint74.DEF = "Joe_skullbase";
HAnimJoint74.center = new X3D.SFVec3f([0,1.63,-0.01]);
HAnimJoint74.skinCoordIndex = new X3D.MFInt32([0,1,2,3,4,5,6,7,8,9]);
HAnimJoint74.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1,1]);
HAnimJoint74.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint74.llimit = new X3D.MFFloat([0,0,0]);
let HAnimDisplacer75 = browser.currentScene.createNode("HAnimDisplacer");
HAnimDisplacer75.name = "skull_tip_raiser_action";
HAnimDisplacer75.DEF = "Joe_skull_tipTest";
HAnimDisplacer75.coordIndex = new X3D.MFInt32([0,1,2,3,4,5,6,7,8,9]);
HAnimDisplacer75.displacements = new X3D.MFVec3f([0,0.15,0,0,0,0.15,-0.1,0,0.15,0.1,0,0.05,0,-0.02,0.05,-0.15,0,0,-0.05,0,0,0.15,0,0,0.05,0,0,0,0,-0.15]);
HAnimJoint74YYY.displacers = new X3D.MFNode();

HAnimJoint74ZZZ.displacers[0] = HAnimDisplacer75;

let HAnimJoint76 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint76.name = "l_eyelid_joint";
HAnimJoint76.DEF = "Joe_l_eyelid_joint";
HAnimJoint76.center = new X3D.SFVec3f([0.034,1.659,0.06]);
HAnimJoint76.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint76.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint74ZZZ.children[1] = HAnimJoint76;

let HAnimJoint77 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint77.name = "l_eyeball_joint";
HAnimJoint77.DEF = "Joe_l_eyeball_joint";
HAnimJoint77.center = new X3D.SFVec3f([0.034,1.659,0.06]);
HAnimJoint77.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint77.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint74ZZZ.children[2] = HAnimJoint77;

let HAnimJoint78 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint78.name = "l_eyebrow_joint";
HAnimJoint78.DEF = "Joe_l_eyebrow_joint";
HAnimJoint78.center = new X3D.SFVec3f([0.034,1.659,0.06]);
HAnimJoint78.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint78.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint74ZZZ.children[3] = HAnimJoint78;

let HAnimJoint79 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint79.name = "l_eyelid_joint";
HAnimJoint79.DEF = "Joe_r_eyelid_joint";
HAnimJoint79.center = new X3D.SFVec3f([-0.034,1.659,0.06]);
HAnimJoint79.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint79.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint74ZZZ.children[4] = HAnimJoint79;

let HAnimJoint80 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint80.name = "l_eyeball_joint";
HAnimJoint80.DEF = "Joe_r_eyeball_joint";
HAnimJoint80.center = new X3D.SFVec3f([-0.034,1.659,0.06]);
HAnimJoint80.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint80.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint74ZZZ.children[5] = HAnimJoint80;

let HAnimJoint81 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint81.name = "l_eyebrow_joint";
HAnimJoint81.DEF = "Joe_r_eyebrow_joint";
HAnimJoint81.center = new X3D.SFVec3f([-0.034,1.659,0.06]);
HAnimJoint81.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint81.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint74ZZZ.children[6] = HAnimJoint81;

let HAnimJoint82 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint82.name = "temporomandibular";
HAnimJoint82.DEF = "Joe_temporomandibular";
HAnimJoint82.center = new X3D.SFVec3f([0.034,1.659,0.06]);
HAnimJoint82.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint82.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint74ZZZ.children[7] = HAnimJoint82;

HAnimJoint73YYY.children = new X3D.MFNode();

HAnimJoint73ZZZ.children[0] = HAnimJoint74;

HAnimJoint72YYY.children = new X3D.MFNode();

HAnimJoint72ZZZ.children[0] = HAnimJoint73;

HAnimJoint71YYY.children = new X3D.MFNode();

HAnimJoint71ZZZ.children[0] = HAnimJoint72;

HAnimJoint70YYY.children = new X3D.MFNode();

HAnimJoint70ZZZ.children[0] = HAnimJoint71;

HAnimJoint69YYY.children = new X3D.MFNode();

HAnimJoint69ZZZ.children[0] = HAnimJoint70;

HAnimJoint68YYY.children = new X3D.MFNode();

HAnimJoint68ZZZ.children[0] = HAnimJoint69;

HAnimJoint67YYY.children = new X3D.MFNode();

HAnimJoint67ZZZ.children[0] = HAnimJoint68;

let HAnimJoint83 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint83.name = "l_sternoclavicular";
HAnimJoint83.DEF = "Joe_l_sternoclavicular";
HAnimJoint83.center = new X3D.SFVec3f([0.082,1.4488,-0.0353]);
HAnimJoint83.skinCoordIndex = new X3D.MFInt32([12]);
HAnimJoint83.skinCoordWeight = new X3D.MFFloat([1]);
HAnimJoint83.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint83.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint84 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint84.name = "l_acromioclavicular";
HAnimJoint84.DEF = "Joe_l_acromioclavicular";
HAnimJoint84.center = new X3D.SFVec3f([0.0962,1.4269,-0.0424]);
HAnimJoint84.skinCoordIndex = new X3D.MFInt32([79]);
HAnimJoint84.skinCoordWeight = new X3D.MFFloat([1]);
HAnimJoint84.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint84.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint85 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint85.name = "l_shoulder";
HAnimJoint85.DEF = "Joe_l_shoulder";
HAnimJoint85.center = new X3D.SFVec3f([0.2,1.44,-0.04]);
HAnimJoint85.skinCoordIndex = new X3D.MFInt32([41,42,44,80,102,103,104,105]);
HAnimJoint85.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
HAnimJoint85.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint85.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint86 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint86.name = "l_elbow";
HAnimJoint86.DEF = "Joe_l_elbow";
HAnimJoint86.center = new X3D.SFVec3f([0.2,1.1388,-0.04]);
HAnimJoint86.skinCoordIndex = new X3D.MFInt32([45,46,47,109,110,111,112,113,115,116,117,118]);
HAnimJoint86.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimJoint86.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint86.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint87 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint87.name = "l_wrist";
HAnimJoint87.DEF = "Joe_l_wrist";
HAnimJoint87.center = new X3D.SFVec3f([0.2,0.87,-0.04]);
HAnimJoint87.skinCoordIndex = new X3D.MFInt32([119,120,121,122,123,124,125,126]);
HAnimJoint87.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
HAnimJoint87.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint87.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint88 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint88.name = "l_thumb1";
HAnimJoint88.DEF = "Joe_l_thumb1";
HAnimJoint88.center = new X3D.SFVec3f([0.1924,0.8472,-0.0534]);
HAnimJoint88.skinCoordIndex = new X3D.MFInt32([127,128]);
HAnimJoint88.skinCoordWeight = new X3D.MFFloat([1,1]);
HAnimJoint88.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint88.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint89 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint89.name = "l_thumb2";
HAnimJoint89.DEF = "Joe_l_thumb2";
HAnimJoint89.center = new X3D.SFVec3f([0.1951,0.8226,0.0246]);
HAnimJoint89.skinCoordIndex = new X3D.MFInt32([138,139,140,141,142,143]);
HAnimJoint89.skinCoordWeight = new X3D.MFFloat([0.5,0.5,0.5,1,1,1]);
HAnimJoint89.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint89.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint90 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint90.name = "l_thumb3";
HAnimJoint90.DEF = "Joe_l_thumb3";
HAnimJoint90.center = new X3D.SFVec3f([0.1955,0.8159,0.0464]);
HAnimJoint90.skinCoordIndex = new X3D.MFInt32([144,145,146,147,148,149,150,151,152]);
HAnimJoint90.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
HAnimJoint90.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint90.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint89YYY.children = new X3D.MFNode();

HAnimJoint89ZZZ.children[0] = HAnimJoint90;

HAnimJoint88YYY.children = new X3D.MFNode();

HAnimJoint88ZZZ.children[0] = HAnimJoint89;

HAnimJoint87YYY.children = new X3D.MFNode();

HAnimJoint87ZZZ.children[0] = HAnimJoint88;

let HAnimJoint91 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint91.name = "l_index0";
HAnimJoint91.DEF = "Joe_l_index0";
HAnimJoint91.center = new X3D.SFVec3f([0.1983,0.8024,-0.028]);
HAnimJoint91.skinCoordIndex = new X3D.MFInt32([129,130]);
HAnimJoint91.skinCoordWeight = new X3D.MFFloat([1,1]);
HAnimJoint91.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint91.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint92 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint92.name = "l_index1";
HAnimJoint92.DEF = "Joe_l_index1";
HAnimJoint92.center = new X3D.SFVec3f([0.1983,0.7815,-0.028]);
HAnimJoint92.skinCoordIndex = new X3D.MFInt32([138,139,140,153,154,155,163]);
HAnimJoint92.skinCoordWeight = new X3D.MFFloat([0.5,0.5,0.5,1,1,1,0.5]);
HAnimJoint92.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint92.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint93 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint93.name = "l_index2";
HAnimJoint93.DEF = "Joe_l_index2";
HAnimJoint93.center = new X3D.SFVec3f([0.2017,0.7363,-0.0248]);
HAnimJoint93.skinCoordIndex = new X3D.MFInt32([166,167,168,169]);
HAnimJoint93.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
HAnimJoint93.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint93.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint94 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint94.name = "l_index3";
HAnimJoint94.DEF = "Joe_l_index3";
HAnimJoint94.center = new X3D.SFVec3f([0.2028,0.7139,-0.0236]);
HAnimJoint94.skinCoordIndex = new X3D.MFInt32([170,171,172,173,174,175,176,177,178]);
HAnimJoint94.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
HAnimJoint94.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint94.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint93YYY.children = new X3D.MFNode();

HAnimJoint93ZZZ.children[0] = HAnimJoint94;

HAnimJoint92YYY.children = new X3D.MFNode();

HAnimJoint92ZZZ.children[0] = HAnimJoint93;

HAnimJoint91YYY.children = new X3D.MFNode();

HAnimJoint91ZZZ.children[0] = HAnimJoint92;

HAnimJoint87ZZZ.children[1] = HAnimJoint91;

let HAnimJoint95 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint95.name = "l_middle0";
HAnimJoint95.DEF = "Joe_l_middle0";
HAnimJoint95.center = new X3D.SFVec3f([0.1987,0.8029,-0.053]);
HAnimJoint95.skinCoordIndex = new X3D.MFInt32([131,132]);
HAnimJoint95.skinCoordWeight = new X3D.MFFloat([1,1]);
HAnimJoint95.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint95.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint96 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint96.name = "l_middle1";
HAnimJoint96.DEF = "Joe_l_middle1";
HAnimJoint96.center = new X3D.SFVec3f([0.1987,0.7818,-0.053]);
HAnimJoint96.skinCoordIndex = new X3D.MFInt32([156,157,163,164]);
HAnimJoint96.skinCoordWeight = new X3D.MFFloat([1,1,0.5,0.5]);
HAnimJoint96.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint96.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint97 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint97.name = "l_middle2";
HAnimJoint97.DEF = "Joe_l_middle2";
HAnimJoint97.center = new X3D.SFVec3f([0.2013,0.7273,-0.0503]);
HAnimJoint97.skinCoordIndex = new X3D.MFInt32([179,180,181,182]);
HAnimJoint97.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
HAnimJoint97.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint97.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint98 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint98.name = "l_middle3";
HAnimJoint98.DEF = "Joe_l_middle3";
HAnimJoint98.center = new X3D.SFVec3f([0.2026,0.7011,-0.0494]);
HAnimJoint98.skinCoordIndex = new X3D.MFInt32([183,184,185,186,187,188,189,190,191]);
HAnimJoint98.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
HAnimJoint98.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint98.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint97YYY.children = new X3D.MFNode();

HAnimJoint97ZZZ.children[0] = HAnimJoint98;

HAnimJoint96YYY.children = new X3D.MFNode();

HAnimJoint96ZZZ.children[0] = HAnimJoint97;

HAnimJoint95YYY.children = new X3D.MFNode();

HAnimJoint95ZZZ.children[0] = HAnimJoint96;

HAnimJoint87ZZZ.children[2] = HAnimJoint95;

let HAnimJoint99 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint99.name = "l_ring0";
HAnimJoint99.DEF = "Joe_l_ring0";
HAnimJoint99.center = new X3D.SFVec3f([0.1956,0.8019,-0.0794]);
HAnimJoint99.skinCoordIndex = new X3D.MFInt32([133,134]);
HAnimJoint99.skinCoordWeight = new X3D.MFFloat([1,1]);
HAnimJoint99.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint99.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint100 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint100.name = "l_ring1";
HAnimJoint100.DEF = "Joe_l_ring1";
HAnimJoint100.center = new X3D.SFVec3f([0.1956,0.7815,-0.0794]);
HAnimJoint100.skinCoordIndex = new X3D.MFInt32([158,159,164,165]);
HAnimJoint100.skinCoordWeight = new X3D.MFFloat([1,1,0.5,0.5]);
HAnimJoint100.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint100.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint101 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint101.name = "l_ring2";
HAnimJoint101.DEF = "Joe_l_ring2";
HAnimJoint101.center = new X3D.SFVec3f([0.1973,0.7287,-0.0777]);
HAnimJoint101.skinCoordIndex = new X3D.MFInt32([192,193,194,195]);
HAnimJoint101.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
HAnimJoint101.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint101.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint102 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint102.name = "l_ring3";
HAnimJoint102.DEF = "Joe_l_ring3";
HAnimJoint102.center = new X3D.SFVec3f([0.1983,0.7045,-0.0767]);
HAnimJoint102.skinCoordIndex = new X3D.MFInt32([196,197,198,199,200,201,202,203,204]);
HAnimJoint102.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
HAnimJoint102.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint102.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint101YYY.children = new X3D.MFNode();

HAnimJoint101ZZZ.children[0] = HAnimJoint102;

HAnimJoint100YYY.children = new X3D.MFNode();

HAnimJoint100ZZZ.children[0] = HAnimJoint101;

HAnimJoint99YYY.children = new X3D.MFNode();

HAnimJoint99ZZZ.children[0] = HAnimJoint100;

HAnimJoint87ZZZ.children[3] = HAnimJoint99;

let HAnimJoint103 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint103.name = "l_pinky0";
HAnimJoint103.DEF = "Joe_l_pinky0";
HAnimJoint103.center = new X3D.SFVec3f([0.1925,0.8066,-0.1036]);
HAnimJoint103.skinCoordIndex = new X3D.MFInt32([135,136,137,165]);
HAnimJoint103.skinCoordWeight = new X3D.MFFloat([1,1,1,0.5]);
HAnimJoint103.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint103.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint104 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint104.name = "l_pinky1";
HAnimJoint104.DEF = "Joe_l_pinky1";
HAnimJoint104.center = new X3D.SFVec3f([0.1925,0.7866,-0.1036]);
HAnimJoint104.skinCoordIndex = new X3D.MFInt32([160,161,162]);
HAnimJoint104.skinCoordWeight = new X3D.MFFloat([1,1,1]);
HAnimJoint104.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint104.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint105 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint105.name = "l_pinky2";
HAnimJoint105.DEF = "Joe_l_pinky2";
HAnimJoint105.center = new X3D.SFVec3f([0.1938,0.7452,-0.1024]);
HAnimJoint105.skinCoordIndex = new X3D.MFInt32([205,206,207,208]);
HAnimJoint105.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
HAnimJoint105.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint105.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint106 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint106.name = "l_pinky3";
HAnimJoint106.DEF = "Joe_l_pinky3";
HAnimJoint106.center = new X3D.SFVec3f([0.1948,0.7277,-0.1017]);
HAnimJoint106.skinCoordIndex = new X3D.MFInt32([209,210,211,212,213,214,215,216,217]);
HAnimJoint106.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
HAnimJoint106.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint106.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint105YYY.children = new X3D.MFNode();

HAnimJoint105ZZZ.children[0] = HAnimJoint106;

HAnimJoint104YYY.children = new X3D.MFNode();

HAnimJoint104ZZZ.children[0] = HAnimJoint105;

HAnimJoint103YYY.children = new X3D.MFNode();

HAnimJoint103ZZZ.children[0] = HAnimJoint104;

HAnimJoint87ZZZ.children[4] = HAnimJoint103;

HAnimJoint86YYY.children = new X3D.MFNode();

HAnimJoint86ZZZ.children[0] = HAnimJoint87;

HAnimJoint85YYY.children = new X3D.MFNode();

HAnimJoint85ZZZ.children[0] = HAnimJoint86;

HAnimJoint84YYY.children = new X3D.MFNode();

HAnimJoint84ZZZ.children[0] = HAnimJoint85;

HAnimJoint83YYY.children = new X3D.MFNode();

HAnimJoint83ZZZ.children[0] = HAnimJoint84;

HAnimJoint67ZZZ.children[1] = HAnimJoint83;

let HAnimJoint107 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint107.name = "r_sternoclavicular";
HAnimJoint107.DEF = "Joe_r_sternoclavicular";
HAnimJoint107.center = new X3D.SFVec3f([-0.03,1.46,0]);
HAnimJoint107.skinCoordIndex = new X3D.MFInt32([10]);
HAnimJoint107.skinCoordWeight = new X3D.MFFloat([1]);
HAnimJoint107.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint107.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint108 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint108.name = "r_acromioclavicular";
HAnimJoint108.DEF = "Joe_r_acromioclavicular";
HAnimJoint108.center = new X3D.SFVec3f([-0.09,1.41,-0.11]);
HAnimJoint108.skinCoordIndex = new X3D.MFInt32([77,29]);
HAnimJoint108.skinCoordWeight = new X3D.MFFloat([1,0.9]);
HAnimJoint108.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint108.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint109 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint109.name = "r_shoulder";
HAnimJoint109.DEF = "Joe_r_shoulder";
HAnimJoint109.center = new X3D.SFVec3f([-0.2,1.44,-0.04]);
HAnimJoint109.skinCoordIndex = new X3D.MFInt32([29,30,32,78,218,219,220,221,86,88]);
HAnimJoint109.skinCoordWeight = new X3D.MFFloat([0.1,1,1,1,1,1,1,1,0.3,0.2]);
HAnimJoint109.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint109.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint110 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint110.name = "r_elbow";
HAnimJoint110.DEF = "Joe_r_elbow";
HAnimJoint110.center = new X3D.SFVec3f([-0.2,1.1388,-0.04]);
HAnimJoint110.skinCoordIndex = new X3D.MFInt32([33,34,35,225,226,227,228,229,231,232,233,234]);
HAnimJoint110.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimJoint110.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint110.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint111 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint111.name = "r_wrist";
HAnimJoint111.DEF = "Joe_r_wrist";
HAnimJoint111.center = new X3D.SFVec3f([-0.2,0.89,-0.04]);
HAnimJoint111.skinCoordIndex = new X3D.MFInt32([235,236,237,238,239,240,241,242]);
HAnimJoint111.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
HAnimJoint111.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint111.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint112 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint112.name = "r_thumb1";
HAnimJoint112.DEF = "Joe_r_thumb1";
HAnimJoint112.center = new X3D.SFVec3f([-0.2,0.85,0]);
HAnimJoint112.skinCoordIndex = new X3D.MFInt32([243,244]);
HAnimJoint112.skinCoordWeight = new X3D.MFFloat([1,1]);
HAnimJoint112.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint112.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint113 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint113.name = "r_thumb2";
HAnimJoint113.DEF = "Joe_r_thumb2";
HAnimJoint113.center = new X3D.SFVec3f([-0.2,0.82,0.03]);
HAnimJoint113.skinCoordIndex = new X3D.MFInt32([254,255,256,257,258,259]);
HAnimJoint113.skinCoordWeight = new X3D.MFFloat([0.5,0.5,0.5,1,1,1]);
HAnimJoint113.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint113.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint114 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint114.name = "r_thumb3";
HAnimJoint114.DEF = "Joe_r_thumb3";
HAnimJoint114.center = new X3D.SFVec3f([-0.2,0.8,0.05]);
HAnimJoint114.skinCoordIndex = new X3D.MFInt32([260,261,262,263,264,265,266,267,268]);
HAnimJoint114.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
HAnimJoint114.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint114.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint113YYY.children = new X3D.MFNode();

HAnimJoint113ZZZ.children[0] = HAnimJoint114;

HAnimJoint112YYY.children = new X3D.MFNode();

HAnimJoint112ZZZ.children[0] = HAnimJoint113;

HAnimJoint111YYY.children = new X3D.MFNode();

HAnimJoint111ZZZ.children[0] = HAnimJoint112;

let HAnimJoint115 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint115.name = "r_index0";
HAnimJoint115.DEF = "Joe_r_index0";
HAnimJoint115.center = new X3D.SFVec3f([-0.2,0.84,-0.015]);
HAnimJoint115.skinCoordIndex = new X3D.MFInt32([245,246]);
HAnimJoint115.skinCoordWeight = new X3D.MFFloat([1,1]);
HAnimJoint115.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint115.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint116 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint116.name = "r_index1";
HAnimJoint116.DEF = "Joe_r_index1";
HAnimJoint116.center = new X3D.SFVec3f([-0.2,0.793,-0.015]);
HAnimJoint116.skinCoordIndex = new X3D.MFInt32([254,255,256,269,270,271,279]);
HAnimJoint116.skinCoordWeight = new X3D.MFFloat([0.5,0.5,0.5,1,1,1,0.5]);
HAnimJoint116.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint116.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint117 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint117.name = "r_index2";
HAnimJoint117.DEF = "Joe_r_index2";
HAnimJoint117.center = new X3D.SFVec3f([-0.2,0.745,-0.015]);
HAnimJoint117.skinCoordIndex = new X3D.MFInt32([282,283,284,285]);
HAnimJoint117.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
HAnimJoint117.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint117.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint118 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint118.name = "r_index3";
HAnimJoint118.DEF = "Joe_r_index3";
HAnimJoint118.center = new X3D.SFVec3f([-0.2,0.72,-0.015]);
HAnimJoint118.skinCoordIndex = new X3D.MFInt32([286,287,288,289,290,291,292,293,294]);
HAnimJoint118.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
HAnimJoint118.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint118.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint117YYY.children = new X3D.MFNode();

HAnimJoint117ZZZ.children[0] = HAnimJoint118;

HAnimJoint116YYY.children = new X3D.MFNode();

HAnimJoint116ZZZ.children[0] = HAnimJoint117;

HAnimJoint115YYY.children = new X3D.MFNode();

HAnimJoint115ZZZ.children[0] = HAnimJoint116;

HAnimJoint111ZZZ.children[1] = HAnimJoint115;

let HAnimJoint119 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint119.name = "r_middle0";
HAnimJoint119.DEF = "Joe_r_middle0";
HAnimJoint119.center = new X3D.SFVec3f([-0.2,0.835,-0.04]);
HAnimJoint119.skinCoordIndex = new X3D.MFInt32([247,248]);
HAnimJoint119.skinCoordWeight = new X3D.MFFloat([1,1]);
HAnimJoint119.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint119.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint120 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint120.name = "r_middle1";
HAnimJoint120.DEF = "Joe_r_middle1";
HAnimJoint120.center = new X3D.SFVec3f([-0.2,0.788,-0.04]);
HAnimJoint120.skinCoordIndex = new X3D.MFInt32([272,273,279,280]);
HAnimJoint120.skinCoordWeight = new X3D.MFFloat([1,1,0.5,0.5]);
HAnimJoint120.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint120.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint121 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint121.name = "r_middle2";
HAnimJoint121.DEF = "Joe_r_middle2";
HAnimJoint121.center = new X3D.SFVec3f([-0.2,0.74,-0.04]);
HAnimJoint121.skinCoordIndex = new X3D.MFInt32([295,296,297,298]);
HAnimJoint121.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
HAnimJoint121.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint121.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint122 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint122.name = "r_middle3";
HAnimJoint122.DEF = "Joe_r_middle3";
HAnimJoint122.center = new X3D.SFVec3f([-0.2,0.7142,-0.04]);
HAnimJoint122.skinCoordIndex = new X3D.MFInt32([299,300,301,302,303,304,305,306,307]);
HAnimJoint122.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
HAnimJoint122.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint122.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint121YYY.children = new X3D.MFNode();

HAnimJoint121ZZZ.children[0] = HAnimJoint122;

HAnimJoint120YYY.children = new X3D.MFNode();

HAnimJoint120ZZZ.children[0] = HAnimJoint121;

HAnimJoint119YYY.children = new X3D.MFNode();

HAnimJoint119ZZZ.children[0] = HAnimJoint120;

HAnimJoint111ZZZ.children[2] = HAnimJoint119;

let HAnimJoint123 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint123.name = "r_ring0";
HAnimJoint123.DEF = "Joe_r_ring0";
HAnimJoint123.center = new X3D.SFVec3f([-0.2,0.835,-0.065]);
HAnimJoint123.skinCoordIndex = new X3D.MFInt32([249,250]);
HAnimJoint123.skinCoordWeight = new X3D.MFFloat([1,1]);
HAnimJoint123.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint123.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint124 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint124.name = "r_ring1";
HAnimJoint124.DEF = "Joe_r_ring1";
HAnimJoint124.center = new X3D.SFVec3f([-0.2,0.793,-0.065]);
HAnimJoint124.skinCoordIndex = new X3D.MFInt32([274,275,280,281]);
HAnimJoint124.skinCoordWeight = new X3D.MFFloat([1,1,0.5,0.5]);
HAnimJoint124.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint124.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint125 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint125.name = "r_ring2";
HAnimJoint125.DEF = "Joe_r_ring2";
HAnimJoint125.center = new X3D.SFVec3f([-0.2,0.74,-0.065]);
HAnimJoint125.skinCoordIndex = new X3D.MFInt32([308,309,310,311]);
HAnimJoint125.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
HAnimJoint125.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint125.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint126 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint126.name = "r_ring3";
HAnimJoint126.DEF = "Joe_r_ring3";
HAnimJoint126.center = new X3D.SFVec3f([-0.2,0.7177,-0.065]);
HAnimJoint126.skinCoordIndex = new X3D.MFInt32([312,313,314,315,316,317,318,319,320]);
HAnimJoint126.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
HAnimJoint126.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint126.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint125YYY.children = new X3D.MFNode();

HAnimJoint125ZZZ.children[0] = HAnimJoint126;

HAnimJoint124YYY.children = new X3D.MFNode();

HAnimJoint124ZZZ.children[0] = HAnimJoint125;

HAnimJoint123YYY.children = new X3D.MFNode();

HAnimJoint123ZZZ.children[0] = HAnimJoint124;

HAnimJoint111ZZZ.children[3] = HAnimJoint123;

let HAnimJoint127 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint127.name = "r_pinky0";
HAnimJoint127.DEF = "Joe_r_pinky0";
HAnimJoint127.center = new X3D.SFVec3f([-0.2,0.84,-0.085]);
HAnimJoint127.skinCoordIndex = new X3D.MFInt32([251,252,253,281]);
HAnimJoint127.skinCoordWeight = new X3D.MFFloat([1,1,1,0.5]);
HAnimJoint127.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint127.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint128 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint128.name = "r_pinky1";
HAnimJoint128.DEF = "Joe_r_pinky1";
HAnimJoint128.center = new X3D.SFVec3f([-0.2,0.79,-0.085]);
HAnimJoint128.skinCoordIndex = new X3D.MFInt32([276,277,278]);
HAnimJoint128.skinCoordWeight = new X3D.MFFloat([1,1,1]);
HAnimJoint128.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint128.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint129 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint129.name = "r_pinky2";
HAnimJoint129.DEF = "Joe_r_pinky2";
HAnimJoint129.center = new X3D.SFVec3f([-0.2,0.755,-0.085]);
HAnimJoint129.skinCoordIndex = new X3D.MFInt32([321,322,323,324]);
HAnimJoint129.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
HAnimJoint129.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint129.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint130 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint130.name = "r_pinky3";
HAnimJoint130.DEF = "Joe_r_pinky3";
HAnimJoint130.center = new X3D.SFVec3f([-0.2,0.735,-0.09]);
HAnimJoint130.skinCoordIndex = new X3D.MFInt32([325,326,327,328,329,330,331,332,333]);
HAnimJoint130.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
HAnimJoint130.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint130.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint129YYY.children = new X3D.MFNode();

HAnimJoint129ZZZ.children[0] = HAnimJoint130;

HAnimJoint128YYY.children = new X3D.MFNode();

HAnimJoint128ZZZ.children[0] = HAnimJoint129;

HAnimJoint127YYY.children = new X3D.MFNode();

HAnimJoint127ZZZ.children[0] = HAnimJoint128;

HAnimJoint111ZZZ.children[4] = HAnimJoint127;

HAnimJoint110YYY.children = new X3D.MFNode();

HAnimJoint110ZZZ.children[0] = HAnimJoint111;

HAnimJoint109YYY.children = new X3D.MFNode();

HAnimJoint109ZZZ.children[0] = HAnimJoint110;

HAnimJoint108YYY.children = new X3D.MFNode();

HAnimJoint108ZZZ.children[0] = HAnimJoint109;

HAnimJoint107YYY.children = new X3D.MFNode();

HAnimJoint107ZZZ.children[0] = HAnimJoint108;

HAnimJoint67ZZZ.children[2] = HAnimJoint107;

HAnimJoint66YYY.children = new X3D.MFNode();

HAnimJoint66ZZZ.children[0] = HAnimJoint67;

HAnimJoint65YYY.children = new X3D.MFNode();

HAnimJoint65ZZZ.children[0] = HAnimJoint66;

HAnimJoint64YYY.children = new X3D.MFNode();

HAnimJoint64ZZZ.children[0] = HAnimJoint65;

HAnimJoint63YYY.children = new X3D.MFNode();

HAnimJoint63ZZZ.children[0] = HAnimJoint64;

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

HAnimJoint28ZZZ.children[2] = HAnimJoint50;

HAnimHumanoid27.joints = new X3D.MFNode();

HAnimHumanoid27XXX.joints[0] = HAnimJoint28;

let Shape131 = browser.currentScene.createNode("Shape");
Shape131.DEF = "Joe_Shape";
let Appearance132 = browser.currentScene.createNode("Appearance");
Appearance132.DEF = "Joe_skin_Appearance";
let Material133 = browser.currentScene.createNode("Material");
Material133.DEF = "Joe_skin_Material";
Material133.diffuseColor = new X3D.SFColor([0.3,0.3,0.6]);
Material133.emissiveColor = new X3D.SFColor([0.3,0.3,0.6]);
material = Material133;

let ImageTexture134 = browser.currentScene.createNode("ImageTexture");
ImageTexture134.DEF = "JoeSkinImageTexture";
ImageTexture134.url = new X3D.MFString([new X3D.SFString("bodytexture28.png")]);
texture = ImageTexture134;

let TextureTransform135 = browser.currentScene.createNode("TextureTransform");
TextureTransform135.DEF = "kicktextrans";
textureTransform = TextureTransform135;

appearance = Appearance132;

let IndexedFaceSet136 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet136.DEF = "Joe_skin_IndexedFaceSet";
IndexedFaceSet136.coordIndex = new X3D.MFInt32([0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]);
IndexedFaceSet136.creaseAngle = 3.14;
let Coordinate137 = browser.currentScene.createNode("Coordinate");
Coordinate137.DEF = "Joe_SkinCoord";
Coordinate137.point = new X3D.MFVec3f([0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.255,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168]);
coord = Coordinate137;

let TextureCoordinate138 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate138.point = new X3D.MFVec2f([0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5]);
texCoord = TextureCoordinate138;

geometry = IndexedFaceSet136;

skin[1] = Shape131;

let Coordinate139 = browser.currentScene.createNode("Coordinate");
Coordinate139.USE = "Joe_SkinCoord";
skinCoord = Coordinate139;

Group26YYY.children = new X3D.MFNode();

Group26ZZZ.children[0] = HAnimHumanoid27;

browser.currentScene.children[10] = Group26;

let Group140 = browser.currentScene.createNode("Group");
let TimeSensor141 = browser.currentScene.createNode("TimeSensor");
TimeSensor141.DEF = "KickTimer";
TimeSensor141.cycleInterval = 3.73;
TimeSensor141.loop = True;
Group140YYY.children = new X3D.MFNode();

Group140ZZZ.children[0] = TimeSensor141;

//Interpolators
let OrientationInterpolator142 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator142.DEF = "HumanoidRootRotInterp";
OrientationInterpolator142.key = new X3D.MFFloat([0,0.1,0.4,0.6,1]);
OrientationInterpolator142.keyValue = new X3D.MFRotation([1,0,0,0.5,1,0,0,0.5,-1,0,0,0.1,-1,0,0,0.5,-1,0,0,0.5]);
Group140ZZZ.children[1] = OrientationInterpolator142;

let PositionInterpolator143 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator143.DEF = "HumanoidRootTransInterp";
PositionInterpolator143.key = new X3D.MFFloat([0,0.2,0.6,1]);
PositionInterpolator143.keyValue = new X3D.MFVec3f([1,0.3,-1,0.4,-0.04,-0.4,-0.18,0.1,0,-0.2,0.15,0.15]);
Group140ZZZ.children[2] = PositionInterpolator143;

let OrientationInterpolator144 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator144.DEF = "sacroiliacRotInterp";
OrientationInterpolator144.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator144.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[3] = OrientationInterpolator144;

let OrientationInterpolator145 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator145.DEF = "l_hipRotInterp";
OrientationInterpolator145.key = new X3D.MFFloat([0,0.1,0.3,0.45,1]);
OrientationInterpolator145.keyValue = new X3D.MFRotation([-1,0,0,1.5,-1,0,0,1,0,0,1,0,1,0,0,0.5,1,0,0,1]);
Group140ZZZ.children[4] = OrientationInterpolator145;

let OrientationInterpolator146 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator146.DEF = "l_kneeRotInterp";
OrientationInterpolator146.key = new X3D.MFFloat([0,0.2,0.35,0.5,1]);
OrientationInterpolator146.keyValue = new X3D.MFRotation([1,0,0,1,0,0,1,0,0,0,1,0.2,1,0,1,0.5,1,0,0,1.4]);
Group140ZZZ.children[5] = OrientationInterpolator146;

let OrientationInterpolator147 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator147.DEF = "l_ankleRotInterp";
OrientationInterpolator147.key = new X3D.MFFloat([0,0.25,1]);
OrientationInterpolator147.keyValue = new X3D.MFRotation([-1,0,0,1,0,0,1,0,1,0,0,1]);
Group140ZZZ.children[6] = OrientationInterpolator147;

let OrientationInterpolator148 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator148.DEF = "l_subtalarRotInterp";
OrientationInterpolator148.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator148.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[7] = OrientationInterpolator148;

let OrientationInterpolator149 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator149.DEF = "l_midtarsalRotInterp";
OrientationInterpolator149.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator149.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[8] = OrientationInterpolator149;

let OrientationInterpolator150 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator150.DEF = "l_metatarsalRotInterp";
OrientationInterpolator150.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator150.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[9] = OrientationInterpolator150;

let OrientationInterpolator151 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator151.DEF = "r_hipRotInterp";
OrientationInterpolator151.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator151.keyValue = new X3D.MFRotation([1,0,0,1,1,0,0,1,-1,0,0,1,-1,0,0,1,-1,0,0,1]);
Group140ZZZ.children[10] = OrientationInterpolator151;

let OrientationInterpolator152 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator152.DEF = "r_kneeRotInterp";
OrientationInterpolator152.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator152.keyValue = new X3D.MFRotation([1,0,0,0.1,0,0,1,0,1,0,0,1,1,0,0,1,1,0,0,1.5]);
Group140ZZZ.children[11] = OrientationInterpolator152;

let OrientationInterpolator153 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator153.DEF = "r_ankleRotInterp";
OrientationInterpolator153.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator153.keyValue = new X3D.MFRotation([-1,0,0,1,0,0,1,0,1,0,0,1,1,0,0,1,1,0,0,0.5]);
Group140ZZZ.children[12] = OrientationInterpolator153;

let OrientationInterpolator154 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator154.DEF = "r_subtalarRotInterp";
OrientationInterpolator154.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator154.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[13] = OrientationInterpolator154;

let OrientationInterpolator155 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator155.DEF = "r_midtarsalRotInterp";
OrientationInterpolator155.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator155.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[14] = OrientationInterpolator155;

let OrientationInterpolator156 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator156.DEF = "r_metatarsalRotInterp";
OrientationInterpolator156.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator156.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[15] = OrientationInterpolator156;

let OrientationInterpolator157 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator157.DEF = "vl5RotInterp";
OrientationInterpolator157.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator157.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[16] = OrientationInterpolator157;

let OrientationInterpolator158 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator158.DEF = "vl4RotInterp";
OrientationInterpolator158.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator158.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[17] = OrientationInterpolator158;

let OrientationInterpolator159 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator159.DEF = "vl3RotInterp";
OrientationInterpolator159.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator159.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[18] = OrientationInterpolator159;

let OrientationInterpolator160 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator160.DEF = "vl2RotInterp";
OrientationInterpolator160.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator160.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[19] = OrientationInterpolator160;

let OrientationInterpolator161 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator161.DEF = "vl1RotInterp";
OrientationInterpolator161.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator161.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[20] = OrientationInterpolator161;

let OrientationInterpolator162 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator162.DEF = "vt12RotInterp";
OrientationInterpolator162.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator162.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[21] = OrientationInterpolator162;

let OrientationInterpolator163 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator163.DEF = "vt11RotInterp";
OrientationInterpolator163.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator163.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[22] = OrientationInterpolator163;

let OrientationInterpolator164 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator164.DEF = "vt10RotInterp";
OrientationInterpolator164.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator164.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[23] = OrientationInterpolator164;

let OrientationInterpolator165 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator165.DEF = "vt9RotInterp";
OrientationInterpolator165.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator165.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[24] = OrientationInterpolator165;

let OrientationInterpolator166 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator166.DEF = "vt8RotInterp";
OrientationInterpolator166.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator166.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[25] = OrientationInterpolator166;

let OrientationInterpolator167 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator167.DEF = "vt7RotInterp";
OrientationInterpolator167.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator167.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[26] = OrientationInterpolator167;

let OrientationInterpolator168 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator168.DEF = "vt6RotInterp";
OrientationInterpolator168.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator168.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[27] = OrientationInterpolator168;

let OrientationInterpolator169 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator169.DEF = "vt5RotInterp";
OrientationInterpolator169.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator169.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[28] = OrientationInterpolator169;

let OrientationInterpolator170 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator170.DEF = "vt4RotInterp";
OrientationInterpolator170.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator170.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[29] = OrientationInterpolator170;

let OrientationInterpolator171 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator171.DEF = "vt3RotInterp";
OrientationInterpolator171.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator171.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[30] = OrientationInterpolator171;

let OrientationInterpolator172 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator172.DEF = "vt2RotInterp";
OrientationInterpolator172.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator172.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[31] = OrientationInterpolator172;

let OrientationInterpolator173 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator173.DEF = "vt1RotInterp";
OrientationInterpolator173.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator173.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[32] = OrientationInterpolator173;

let OrientationInterpolator174 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator174.DEF = "vc7RotInterp";
OrientationInterpolator174.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator174.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[33] = OrientationInterpolator174;

let OrientationInterpolator175 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator175.DEF = "vc6RotInterp";
OrientationInterpolator175.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator175.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[34] = OrientationInterpolator175;

let OrientationInterpolator176 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator176.DEF = "vc5RotInterp";
OrientationInterpolator176.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator176.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[35] = OrientationInterpolator176;

let OrientationInterpolator177 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator177.DEF = "vc4RotInterp";
OrientationInterpolator177.key = new X3D.MFFloat([0,0.3,0.4,1]);
OrientationInterpolator177.keyValue = new X3D.MFRotation([1,0,1,0.25,-1,0,-1,0.35,1,0,0,0.75,1,0,1,0.5]);
Group140ZZZ.children[36] = OrientationInterpolator177;

let OrientationInterpolator178 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator178.DEF = "vc3RotInterp";
OrientationInterpolator178.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator178.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[37] = OrientationInterpolator178;

let OrientationInterpolator179 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator179.DEF = "vc2RotInterp";
OrientationInterpolator179.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator179.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[38] = OrientationInterpolator179;

let OrientationInterpolator180 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator180.DEF = "vc1RotInterp";
OrientationInterpolator180.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator180.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[39] = OrientationInterpolator180;

let OrientationInterpolator181 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator181.DEF = "skullbaseRotInterp";
OrientationInterpolator181.key = new X3D.MFFloat([0,0.2,0.75,1]);
OrientationInterpolator181.keyValue = new X3D.MFRotation([0,-1,0,0.5,0,0,1,0,0,0,1,0,0,1,0,0.35]);
Group140ZZZ.children[40] = OrientationInterpolator181;

let OrientationInterpolator182 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator182.DEF = "l_eyelid_jointRotInterp";
OrientationInterpolator182.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator182.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[41] = OrientationInterpolator182;

let OrientationInterpolator183 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator183.DEF = "l_eyeball_jointRotInterp";
OrientationInterpolator183.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator183.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[42] = OrientationInterpolator183;

let OrientationInterpolator184 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator184.DEF = "l_eyebrow_jointRotInterp";
OrientationInterpolator184.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator184.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[43] = OrientationInterpolator184;

let OrientationInterpolator185 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator185.DEF = "r_eyelid_jointRotInterp";
OrientationInterpolator185.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator185.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[44] = OrientationInterpolator185;

let OrientationInterpolator186 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator186.DEF = "r_eyeball_jointRotInterp";
OrientationInterpolator186.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator186.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[45] = OrientationInterpolator186;

let OrientationInterpolator187 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator187.DEF = "r_eyebrow_jointRotInterp";
OrientationInterpolator187.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator187.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[46] = OrientationInterpolator187;

let OrientationInterpolator188 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator188.DEF = "temporomandibularRotInterp";
OrientationInterpolator188.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator188.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[47] = OrientationInterpolator188;

let OrientationInterpolator189 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator189.DEF = "l_sternoclavicularRotInterp";
OrientationInterpolator189.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator189.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[48] = OrientationInterpolator189;

let OrientationInterpolator190 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator190.DEF = "l_acromioclavicularRotInterp";
OrientationInterpolator190.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator190.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[49] = OrientationInterpolator190;

let OrientationInterpolator191 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator191.DEF = "l_shoulderRotInterp";
OrientationInterpolator191.key = new X3D.MFFloat([0,0.4,1]);
OrientationInterpolator191.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,1.5,-1,0,1,1.75]);
Group140ZZZ.children[50] = OrientationInterpolator191;

let OrientationInterpolator192 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator192.DEF = "l_elbowRotInterp";
OrientationInterpolator192.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator192.keyValue = new X3D.MFRotation([-1,0,0,3,-1,0,0,0.75,-1,-1,0,0.5]);
Group140ZZZ.children[51] = OrientationInterpolator192;

let OrientationInterpolator193 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator193.DEF = "l_wristRotInterp";
OrientationInterpolator193.key = new X3D.MFFloat([0,0.4,0.8,1]);
OrientationInterpolator193.keyValue = new X3D.MFRotation([0,0,1,0,0,1,0,1.3,0,-0.5,1,1.3,0,0,1,0]);
Group140ZZZ.children[52] = OrientationInterpolator193;

let OrientationInterpolator194 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator194.DEF = "l_thumb1RotInterp";
OrientationInterpolator194.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator194.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[53] = OrientationInterpolator194;

let OrientationInterpolator195 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator195.DEF = "l_thumb2RotInterp";
OrientationInterpolator195.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator195.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[54] = OrientationInterpolator195;

let OrientationInterpolator196 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator196.DEF = "l_thumb3RotInterp";
OrientationInterpolator196.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator196.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[55] = OrientationInterpolator196;

let OrientationInterpolator197 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator197.DEF = "l_index0RotInterp";
OrientationInterpolator197.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator197.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[56] = OrientationInterpolator197;

let OrientationInterpolator198 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator198.DEF = "l_index1RotInterp";
OrientationInterpolator198.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator198.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[57] = OrientationInterpolator198;

let OrientationInterpolator199 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator199.DEF = "l_index2RotInterp";
OrientationInterpolator199.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator199.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[58] = OrientationInterpolator199;

let OrientationInterpolator200 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator200.DEF = "l_index3RotInterp";
OrientationInterpolator200.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator200.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[59] = OrientationInterpolator200;

let OrientationInterpolator201 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator201.DEF = "l_middle0RotInterp";
OrientationInterpolator201.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator201.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[60] = OrientationInterpolator201;

let OrientationInterpolator202 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator202.DEF = "l_middle1RotInterp";
OrientationInterpolator202.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator202.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[61] = OrientationInterpolator202;

let OrientationInterpolator203 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator203.DEF = "l_middle2RotInterp";
OrientationInterpolator203.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator203.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[62] = OrientationInterpolator203;

let OrientationInterpolator204 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator204.DEF = "l_middle3RotInterp";
OrientationInterpolator204.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator204.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[63] = OrientationInterpolator204;

let OrientationInterpolator205 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator205.DEF = "l_ring0RotInterp";
OrientationInterpolator205.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator205.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[64] = OrientationInterpolator205;

let OrientationInterpolator206 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator206.DEF = "l_ring1RotInterp";
OrientationInterpolator206.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator206.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[65] = OrientationInterpolator206;

let OrientationInterpolator207 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator207.DEF = "l_ring2RotInterp";
OrientationInterpolator207.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator207.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[66] = OrientationInterpolator207;

let OrientationInterpolator208 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator208.DEF = "l_ring3RotInterp";
OrientationInterpolator208.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator208.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[67] = OrientationInterpolator208;

let OrientationInterpolator209 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator209.DEF = "l_pinky0RotInterp";
OrientationInterpolator209.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator209.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[68] = OrientationInterpolator209;

let OrientationInterpolator210 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator210.DEF = "l_pinky1RotInterp";
OrientationInterpolator210.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator210.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[69] = OrientationInterpolator210;

let OrientationInterpolator211 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator211.DEF = "l_pinky2RotInterp";
OrientationInterpolator211.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator211.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[70] = OrientationInterpolator211;

let OrientationInterpolator212 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator212.DEF = "l_pinky3RotInterp";
OrientationInterpolator212.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator212.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[71] = OrientationInterpolator212;

let OrientationInterpolator213 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator213.DEF = "r_sternoclavicularRotInterp";
OrientationInterpolator213.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator213.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[72] = OrientationInterpolator213;

let OrientationInterpolator214 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator214.DEF = "r_acromioclavicularRotInterp";
OrientationInterpolator214.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator214.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[73] = OrientationInterpolator214;

let OrientationInterpolator215 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator215.DEF = "r_shoulderRotInterp";
OrientationInterpolator215.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator215.keyValue = new X3D.MFRotation([0,0,-1,2.5,0,0,-1,1.5,0,0,-1,1.75]);
Group140ZZZ.children[74] = OrientationInterpolator215;

let OrientationInterpolator216 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator216.DEF = "r_elbowRotInterp";
OrientationInterpolator216.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator216.keyValue = new X3D.MFRotation([-1,0,0,3,-1,0,0,0.75,-1,-1,0,0.5]);
Group140ZZZ.children[75] = OrientationInterpolator216;

let OrientationInterpolator217 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator217.DEF = "r_wristRotInterp";
OrientationInterpolator217.key = new X3D.MFFloat([0,0.5,0.7,1]);
OrientationInterpolator217.keyValue = new X3D.MFRotation([0,1,0,0.3,0,0,1,0,0,0,-1,1,0,-1,0,0.3]);
Group140ZZZ.children[76] = OrientationInterpolator217;

let OrientationInterpolator218 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator218.DEF = "r_thumb1RotInterp";
OrientationInterpolator218.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator218.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[77] = OrientationInterpolator218;

let OrientationInterpolator219 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator219.DEF = "r_thumb2RotInterp";
OrientationInterpolator219.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator219.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[78] = OrientationInterpolator219;

let OrientationInterpolator220 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator220.DEF = "r_thumb3RotInterp";
OrientationInterpolator220.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator220.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group140ZZZ.children[79] = OrientationInterpolator220;

let OrientationInterpolator221 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator221.DEF = "r_index0RotInterp";
OrientationInterpolator221.key = new X3D.MFFloat([0,0.5,0.75,1]);
OrientationInterpolator221.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0]);
Group140ZZZ.children[80] = OrientationInterpolator221;

let OrientationInterpolator222 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator222.DEF = "r_index1RotInterp";
OrientationInterpolator222.key = new X3D.MFFloat([0,0.5,0.75,1]);
OrientationInterpolator222.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group140ZZZ.children[81] = OrientationInterpolator222;

let OrientationInterpolator223 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator223.DEF = "r_index2RotInterp";
OrientationInterpolator223.key = new X3D.MFFloat([0,0.5,0.75,1]);
OrientationInterpolator223.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group140ZZZ.children[82] = OrientationInterpolator223;

let OrientationInterpolator224 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator224.DEF = "r_index3RotInterp";
OrientationInterpolator224.key = new X3D.MFFloat([0,0.5,0.75,1]);
OrientationInterpolator224.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group140ZZZ.children[83] = OrientationInterpolator224;

let OrientationInterpolator225 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator225.DEF = "r_middle0RotInterp";
OrientationInterpolator225.key = new X3D.MFFloat([0,0.5,0.75,1]);
OrientationInterpolator225.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0]);
Group140ZZZ.children[84] = OrientationInterpolator225;

let OrientationInterpolator226 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator226.DEF = "r_middle1RotInterp";
OrientationInterpolator226.key = new X3D.MFFloat([0,0.5,0.75,1]);
OrientationInterpolator226.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group140ZZZ.children[85] = OrientationInterpolator226;

let OrientationInterpolator227 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator227.DEF = "r_middle2RotInterp";
OrientationInterpolator227.key = new X3D.MFFloat([0,0.5,0.75,1]);
OrientationInterpolator227.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group140ZZZ.children[86] = OrientationInterpolator227;

let OrientationInterpolator228 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator228.DEF = "r_middle3RotInterp";
OrientationInterpolator228.key = new X3D.MFFloat([0,0.5,0.75,1]);
OrientationInterpolator228.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group140ZZZ.children[87] = OrientationInterpolator228;

let OrientationInterpolator229 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator229.DEF = "r_ring0RotInterp";
OrientationInterpolator229.key = new X3D.MFFloat([0,0.5,0.75,1]);
OrientationInterpolator229.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0]);
Group140ZZZ.children[88] = OrientationInterpolator229;

let OrientationInterpolator230 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator230.DEF = "r_ring1RotInterp";
OrientationInterpolator230.key = new X3D.MFFloat([0,0.5,0.75,1]);
OrientationInterpolator230.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group140ZZZ.children[89] = OrientationInterpolator230;

let OrientationInterpolator231 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator231.DEF = "r_ring2RotInterp";
OrientationInterpolator231.key = new X3D.MFFloat([0,0.5,0.75,1]);
OrientationInterpolator231.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group140ZZZ.children[90] = OrientationInterpolator231;

let OrientationInterpolator232 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator232.DEF = "r_ring3RotInterp";
OrientationInterpolator232.key = new X3D.MFFloat([0,0.5,0.75,1]);
OrientationInterpolator232.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group140ZZZ.children[91] = OrientationInterpolator232;

let OrientationInterpolator233 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator233.DEF = "r_pinky0RotInterp";
OrientationInterpolator233.key = new X3D.MFFloat([0,0.5,0.75,1]);
OrientationInterpolator233.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0]);
Group140ZZZ.children[92] = OrientationInterpolator233;

let OrientationInterpolator234 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator234.DEF = "r_pinky1RotInterp";
OrientationInterpolator234.key = new X3D.MFFloat([0,0.5,0.75,1]);
OrientationInterpolator234.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group140ZZZ.children[93] = OrientationInterpolator234;

let OrientationInterpolator235 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator235.DEF = "r_pinky2RotInterp";
OrientationInterpolator235.key = new X3D.MFFloat([0,0.5,0.75,1]);
OrientationInterpolator235.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group140ZZZ.children[94] = OrientationInterpolator235;

let OrientationInterpolator236 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator236.DEF = "r_pinky3RotInterp";
OrientationInterpolator236.key = new X3D.MFFloat([0,0.5,0.75,1]);
OrientationInterpolator236.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group140ZZZ.children[95] = OrientationInterpolator236;

browser.currentScene.children[11] = Group140;

//TimeSensor to Interpolators
let ROUTE237 = browser.currentScene.createNode("ROUTE");
ROUTE237.fromField = "fraction_changed";
ROUTE237.fromNode = "KickTimer";
ROUTE237.toField = "set_fraction";
ROUTE237.toNode = "HumanoidRootRotInterp";
browser.currentScene.children[12] = ROUTE237;

let ROUTE238 = browser.currentScene.createNode("ROUTE");
ROUTE238.fromField = "fraction_changed";
ROUTE238.fromNode = "KickTimer";
ROUTE238.toField = "set_fraction";
ROUTE238.toNode = "HumanoidRootTransInterp";
browser.currentScene.children[13] = ROUTE238;

let ROUTE239 = browser.currentScene.createNode("ROUTE");
ROUTE239.fromField = "fraction_changed";
ROUTE239.fromNode = "KickTimer";
ROUTE239.toField = "set_fraction";
ROUTE239.toNode = "sacroiliacRotInterp";
browser.currentScene.children[14] = ROUTE239;

let ROUTE240 = browser.currentScene.createNode("ROUTE");
ROUTE240.fromField = "fraction_changed";
ROUTE240.fromNode = "KickTimer";
ROUTE240.toField = "set_fraction";
ROUTE240.toNode = "l_hipRotInterp";
browser.currentScene.children[15] = ROUTE240;

let ROUTE241 = browser.currentScene.createNode("ROUTE");
ROUTE241.fromField = "fraction_changed";
ROUTE241.fromNode = "KickTimer";
ROUTE241.toField = "set_fraction";
ROUTE241.toNode = "l_kneeRotInterp";
browser.currentScene.children[16] = ROUTE241;

let ROUTE242 = browser.currentScene.createNode("ROUTE");
ROUTE242.fromField = "fraction_changed";
ROUTE242.fromNode = "KickTimer";
ROUTE242.toField = "set_fraction";
ROUTE242.toNode = "l_ankleRotInterp";
browser.currentScene.children[17] = ROUTE242;

let ROUTE243 = browser.currentScene.createNode("ROUTE");
ROUTE243.fromField = "fraction_changed";
ROUTE243.fromNode = "KickTimer";
ROUTE243.toField = "set_fraction";
ROUTE243.toNode = "l_subtalarRotInterp";
browser.currentScene.children[18] = ROUTE243;

let ROUTE244 = browser.currentScene.createNode("ROUTE");
ROUTE244.fromField = "fraction_changed";
ROUTE244.fromNode = "KickTimer";
ROUTE244.toField = "set_fraction";
ROUTE244.toNode = "l_midtarsalRotInterp";
browser.currentScene.children[19] = ROUTE244;

let ROUTE245 = browser.currentScene.createNode("ROUTE");
ROUTE245.fromField = "fraction_changed";
ROUTE245.fromNode = "KickTimer";
ROUTE245.toField = "set_fraction";
ROUTE245.toNode = "l_metatarsalRotInterp";
browser.currentScene.children[20] = ROUTE245;

let ROUTE246 = browser.currentScene.createNode("ROUTE");
ROUTE246.fromField = "fraction_changed";
ROUTE246.fromNode = "KickTimer";
ROUTE246.toField = "set_fraction";
ROUTE246.toNode = "r_hipRotInterp";
browser.currentScene.children[21] = ROUTE246;

let ROUTE247 = browser.currentScene.createNode("ROUTE");
ROUTE247.fromField = "fraction_changed";
ROUTE247.fromNode = "KickTimer";
ROUTE247.toField = "set_fraction";
ROUTE247.toNode = "r_kneeRotInterp";
browser.currentScene.children[22] = ROUTE247;

let ROUTE248 = browser.currentScene.createNode("ROUTE");
ROUTE248.fromField = "fraction_changed";
ROUTE248.fromNode = "KickTimer";
ROUTE248.toField = "set_fraction";
ROUTE248.toNode = "r_ankleRotInterp";
browser.currentScene.children[23] = ROUTE248;

let ROUTE249 = browser.currentScene.createNode("ROUTE");
ROUTE249.fromField = "fraction_changed";
ROUTE249.fromNode = "KickTimer";
ROUTE249.toField = "set_fraction";
ROUTE249.toNode = "r_subtalarRotInterp";
browser.currentScene.children[24] = ROUTE249;

let ROUTE250 = browser.currentScene.createNode("ROUTE");
ROUTE250.fromField = "fraction_changed";
ROUTE250.fromNode = "KickTimer";
ROUTE250.toField = "set_fraction";
ROUTE250.toNode = "r_midtarsalRotInterp";
browser.currentScene.children[25] = ROUTE250;

let ROUTE251 = browser.currentScene.createNode("ROUTE");
ROUTE251.fromField = "fraction_changed";
ROUTE251.fromNode = "KickTimer";
ROUTE251.toField = "set_fraction";
ROUTE251.toNode = "r_metatarsalRotInterp";
browser.currentScene.children[26] = ROUTE251;

let ROUTE252 = browser.currentScene.createNode("ROUTE");
ROUTE252.fromField = "fraction_changed";
ROUTE252.fromNode = "KickTimer";
ROUTE252.toField = "set_fraction";
ROUTE252.toNode = "vl5RotInterp";
browser.currentScene.children[27] = ROUTE252;

let ROUTE253 = browser.currentScene.createNode("ROUTE");
ROUTE253.fromField = "fraction_changed";
ROUTE253.fromNode = "KickTimer";
ROUTE253.toField = "set_fraction";
ROUTE253.toNode = "vl4RotInterp";
browser.currentScene.children[28] = ROUTE253;

let ROUTE254 = browser.currentScene.createNode("ROUTE");
ROUTE254.fromField = "fraction_changed";
ROUTE254.fromNode = "KickTimer";
ROUTE254.toField = "set_fraction";
ROUTE254.toNode = "vl3RotInterp";
browser.currentScene.children[29] = ROUTE254;

let ROUTE255 = browser.currentScene.createNode("ROUTE");
ROUTE255.fromField = "fraction_changed";
ROUTE255.fromNode = "KickTimer";
ROUTE255.toField = "set_fraction";
ROUTE255.toNode = "vl2RotInterp";
browser.currentScene.children[30] = ROUTE255;

let ROUTE256 = browser.currentScene.createNode("ROUTE");
ROUTE256.fromField = "fraction_changed";
ROUTE256.fromNode = "KickTimer";
ROUTE256.toField = "set_fraction";
ROUTE256.toNode = "vl1RotInterp";
browser.currentScene.children[31] = ROUTE256;

let ROUTE257 = browser.currentScene.createNode("ROUTE");
ROUTE257.fromField = "fraction_changed";
ROUTE257.fromNode = "KickTimer";
ROUTE257.toField = "set_fraction";
ROUTE257.toNode = "vt12RotInterp";
browser.currentScene.children[32] = ROUTE257;

let ROUTE258 = browser.currentScene.createNode("ROUTE");
ROUTE258.fromField = "fraction_changed";
ROUTE258.fromNode = "KickTimer";
ROUTE258.toField = "set_fraction";
ROUTE258.toNode = "vt11RotInterp";
browser.currentScene.children[33] = ROUTE258;

let ROUTE259 = browser.currentScene.createNode("ROUTE");
ROUTE259.fromField = "fraction_changed";
ROUTE259.fromNode = "KickTimer";
ROUTE259.toField = "set_fraction";
ROUTE259.toNode = "vt10RotInterp";
browser.currentScene.children[34] = ROUTE259;

let ROUTE260 = browser.currentScene.createNode("ROUTE");
ROUTE260.fromField = "fraction_changed";
ROUTE260.fromNode = "KickTimer";
ROUTE260.toField = "set_fraction";
ROUTE260.toNode = "vt9RotInterp";
browser.currentScene.children[35] = ROUTE260;

let ROUTE261 = browser.currentScene.createNode("ROUTE");
ROUTE261.fromField = "fraction_changed";
ROUTE261.fromNode = "KickTimer";
ROUTE261.toField = "set_fraction";
ROUTE261.toNode = "vt8RotInterp";
browser.currentScene.children[36] = ROUTE261;

let ROUTE262 = browser.currentScene.createNode("ROUTE");
ROUTE262.fromField = "fraction_changed";
ROUTE262.fromNode = "KickTimer";
ROUTE262.toField = "set_fraction";
ROUTE262.toNode = "vt7RotInterp";
browser.currentScene.children[37] = ROUTE262;

let ROUTE263 = browser.currentScene.createNode("ROUTE");
ROUTE263.fromField = "fraction_changed";
ROUTE263.fromNode = "KickTimer";
ROUTE263.toField = "set_fraction";
ROUTE263.toNode = "vt6RotInterp";
browser.currentScene.children[38] = ROUTE263;

let ROUTE264 = browser.currentScene.createNode("ROUTE");
ROUTE264.fromField = "fraction_changed";
ROUTE264.fromNode = "KickTimer";
ROUTE264.toField = "set_fraction";
ROUTE264.toNode = "vt5RotInterp";
browser.currentScene.children[39] = ROUTE264;

let ROUTE265 = browser.currentScene.createNode("ROUTE");
ROUTE265.fromField = "fraction_changed";
ROUTE265.fromNode = "KickTimer";
ROUTE265.toField = "set_fraction";
ROUTE265.toNode = "vt4RotInterp";
browser.currentScene.children[40] = ROUTE265;

let ROUTE266 = browser.currentScene.createNode("ROUTE");
ROUTE266.fromField = "fraction_changed";
ROUTE266.fromNode = "KickTimer";
ROUTE266.toField = "set_fraction";
ROUTE266.toNode = "vt3RotInterp";
browser.currentScene.children[41] = ROUTE266;

let ROUTE267 = browser.currentScene.createNode("ROUTE");
ROUTE267.fromField = "fraction_changed";
ROUTE267.fromNode = "KickTimer";
ROUTE267.toField = "set_fraction";
ROUTE267.toNode = "vt2RotInterp";
browser.currentScene.children[42] = ROUTE267;

let ROUTE268 = browser.currentScene.createNode("ROUTE");
ROUTE268.fromField = "fraction_changed";
ROUTE268.fromNode = "KickTimer";
ROUTE268.toField = "set_fraction";
ROUTE268.toNode = "vt1RotInterp";
browser.currentScene.children[43] = ROUTE268;

let ROUTE269 = browser.currentScene.createNode("ROUTE");
ROUTE269.fromField = "fraction_changed";
ROUTE269.fromNode = "KickTimer";
ROUTE269.toField = "set_fraction";
ROUTE269.toNode = "vc7RotInterp";
browser.currentScene.children[44] = ROUTE269;

let ROUTE270 = browser.currentScene.createNode("ROUTE");
ROUTE270.fromField = "fraction_changed";
ROUTE270.fromNode = "KickTimer";
ROUTE270.toField = "set_fraction";
ROUTE270.toNode = "vc6RotInterp";
browser.currentScene.children[45] = ROUTE270;

let ROUTE271 = browser.currentScene.createNode("ROUTE");
ROUTE271.fromField = "fraction_changed";
ROUTE271.fromNode = "KickTimer";
ROUTE271.toField = "set_fraction";
ROUTE271.toNode = "vc5RotInterp";
browser.currentScene.children[46] = ROUTE271;

let ROUTE272 = browser.currentScene.createNode("ROUTE");
ROUTE272.fromField = "fraction_changed";
ROUTE272.fromNode = "KickTimer";
ROUTE272.toField = "set_fraction";
ROUTE272.toNode = "vc4RotInterp";
browser.currentScene.children[47] = ROUTE272;

let ROUTE273 = browser.currentScene.createNode("ROUTE");
ROUTE273.fromField = "fraction_changed";
ROUTE273.fromNode = "KickTimer";
ROUTE273.toField = "set_fraction";
ROUTE273.toNode = "vc3RotInterp";
browser.currentScene.children[48] = ROUTE273;

let ROUTE274 = browser.currentScene.createNode("ROUTE");
ROUTE274.fromField = "fraction_changed";
ROUTE274.fromNode = "KickTimer";
ROUTE274.toField = "set_fraction";
ROUTE274.toNode = "vc2RotInterp";
browser.currentScene.children[49] = ROUTE274;

let ROUTE275 = browser.currentScene.createNode("ROUTE");
ROUTE275.fromField = "fraction_changed";
ROUTE275.fromNode = "KickTimer";
ROUTE275.toField = "set_fraction";
ROUTE275.toNode = "vc1RotInterp";
browser.currentScene.children[50] = ROUTE275;

let ROUTE276 = browser.currentScene.createNode("ROUTE");
ROUTE276.fromField = "fraction_changed";
ROUTE276.fromNode = "KickTimer";
ROUTE276.toField = "set_fraction";
ROUTE276.toNode = "skullbaseRotInterp";
browser.currentScene.children[51] = ROUTE276;

let ROUTE277 = browser.currentScene.createNode("ROUTE");
ROUTE277.fromField = "fraction_changed";
ROUTE277.fromNode = "KickTimer";
ROUTE277.toField = "set_fraction";
ROUTE277.toNode = "l_eyelid_jointRotInterp";
browser.currentScene.children[52] = ROUTE277;

let ROUTE278 = browser.currentScene.createNode("ROUTE");
ROUTE278.fromField = "fraction_changed";
ROUTE278.fromNode = "KickTimer";
ROUTE278.toField = "set_fraction";
ROUTE278.toNode = "l_eyeball_jointRotInterp";
browser.currentScene.children[53] = ROUTE278;

let ROUTE279 = browser.currentScene.createNode("ROUTE");
ROUTE279.fromField = "fraction_changed";
ROUTE279.fromNode = "KickTimer";
ROUTE279.toField = "set_fraction";
ROUTE279.toNode = "l_eyebrow_jointRotInterp";
browser.currentScene.children[54] = ROUTE279;

let ROUTE280 = browser.currentScene.createNode("ROUTE");
ROUTE280.fromField = "fraction_changed";
ROUTE280.fromNode = "KickTimer";
ROUTE280.toField = "set_fraction";
ROUTE280.toNode = "r_eyelid_jointRotInterp";
browser.currentScene.children[55] = ROUTE280;

let ROUTE281 = browser.currentScene.createNode("ROUTE");
ROUTE281.fromField = "fraction_changed";
ROUTE281.fromNode = "KickTimer";
ROUTE281.toField = "set_fraction";
ROUTE281.toNode = "r_eyeball_jointRotInterp";
browser.currentScene.children[56] = ROUTE281;

let ROUTE282 = browser.currentScene.createNode("ROUTE");
ROUTE282.fromField = "fraction_changed";
ROUTE282.fromNode = "KickTimer";
ROUTE282.toField = "set_fraction";
ROUTE282.toNode = "r_eyebrow_jointRotInterp";
browser.currentScene.children[57] = ROUTE282;

let ROUTE283 = browser.currentScene.createNode("ROUTE");
ROUTE283.fromField = "fraction_changed";
ROUTE283.fromNode = "KickTimer";
ROUTE283.toField = "set_fraction";
ROUTE283.toNode = "temporomandibularRotInterp";
browser.currentScene.children[58] = ROUTE283;

let ROUTE284 = browser.currentScene.createNode("ROUTE");
ROUTE284.fromField = "fraction_changed";
ROUTE284.fromNode = "KickTimer";
ROUTE284.toField = "set_fraction";
ROUTE284.toNode = "l_sternoclavicularRotInterp";
browser.currentScene.children[59] = ROUTE284;

let ROUTE285 = browser.currentScene.createNode("ROUTE");
ROUTE285.fromField = "fraction_changed";
ROUTE285.fromNode = "KickTimer";
ROUTE285.toField = "set_fraction";
ROUTE285.toNode = "l_acromioclavicularRotInterp";
browser.currentScene.children[60] = ROUTE285;

let ROUTE286 = browser.currentScene.createNode("ROUTE");
ROUTE286.fromField = "fraction_changed";
ROUTE286.fromNode = "KickTimer";
ROUTE286.toField = "set_fraction";
ROUTE286.toNode = "l_shoulderRotInterp";
browser.currentScene.children[61] = ROUTE286;

let ROUTE287 = browser.currentScene.createNode("ROUTE");
ROUTE287.fromField = "fraction_changed";
ROUTE287.fromNode = "KickTimer";
ROUTE287.toField = "set_fraction";
ROUTE287.toNode = "l_elbowRotInterp";
browser.currentScene.children[62] = ROUTE287;

let ROUTE288 = browser.currentScene.createNode("ROUTE");
ROUTE288.fromField = "fraction_changed";
ROUTE288.fromNode = "KickTimer";
ROUTE288.toField = "set_fraction";
ROUTE288.toNode = "l_wristRotInterp";
browser.currentScene.children[63] = ROUTE288;

let ROUTE289 = browser.currentScene.createNode("ROUTE");
ROUTE289.fromField = "fraction_changed";
ROUTE289.fromNode = "KickTimer";
ROUTE289.toField = "set_fraction";
ROUTE289.toNode = "l_thumb1RotInterp";
browser.currentScene.children[64] = ROUTE289;

let ROUTE290 = browser.currentScene.createNode("ROUTE");
ROUTE290.fromField = "fraction_changed";
ROUTE290.fromNode = "KickTimer";
ROUTE290.toField = "set_fraction";
ROUTE290.toNode = "l_thumb2RotInterp";
browser.currentScene.children[65] = ROUTE290;

let ROUTE291 = browser.currentScene.createNode("ROUTE");
ROUTE291.fromField = "fraction_changed";
ROUTE291.fromNode = "KickTimer";
ROUTE291.toField = "set_fraction";
ROUTE291.toNode = "l_thumb3RotInterp";
browser.currentScene.children[66] = ROUTE291;

let ROUTE292 = browser.currentScene.createNode("ROUTE");
ROUTE292.fromField = "fraction_changed";
ROUTE292.fromNode = "KickTimer";
ROUTE292.toField = "set_fraction";
ROUTE292.toNode = "l_index0RotInterp";
browser.currentScene.children[67] = ROUTE292;

let ROUTE293 = browser.currentScene.createNode("ROUTE");
ROUTE293.fromField = "fraction_changed";
ROUTE293.fromNode = "KickTimer";
ROUTE293.toField = "set_fraction";
ROUTE293.toNode = "l_index1RotInterp";
browser.currentScene.children[68] = ROUTE293;

let ROUTE294 = browser.currentScene.createNode("ROUTE");
ROUTE294.fromField = "fraction_changed";
ROUTE294.fromNode = "KickTimer";
ROUTE294.toField = "set_fraction";
ROUTE294.toNode = "l_index2RotInterp";
browser.currentScene.children[69] = ROUTE294;

let ROUTE295 = browser.currentScene.createNode("ROUTE");
ROUTE295.fromField = "fraction_changed";
ROUTE295.fromNode = "KickTimer";
ROUTE295.toField = "set_fraction";
ROUTE295.toNode = "l_index3RotInterp";
browser.currentScene.children[70] = ROUTE295;

let ROUTE296 = browser.currentScene.createNode("ROUTE");
ROUTE296.fromField = "fraction_changed";
ROUTE296.fromNode = "KickTimer";
ROUTE296.toField = "set_fraction";
ROUTE296.toNode = "l_middle0RotInterp";
browser.currentScene.children[71] = ROUTE296;

let ROUTE297 = browser.currentScene.createNode("ROUTE");
ROUTE297.fromField = "fraction_changed";
ROUTE297.fromNode = "KickTimer";
ROUTE297.toField = "set_fraction";
ROUTE297.toNode = "l_middle1RotInterp";
browser.currentScene.children[72] = ROUTE297;

let ROUTE298 = browser.currentScene.createNode("ROUTE");
ROUTE298.fromField = "fraction_changed";
ROUTE298.fromNode = "KickTimer";
ROUTE298.toField = "set_fraction";
ROUTE298.toNode = "l_middle2RotInterp";
browser.currentScene.children[73] = ROUTE298;

let ROUTE299 = browser.currentScene.createNode("ROUTE");
ROUTE299.fromField = "fraction_changed";
ROUTE299.fromNode = "KickTimer";
ROUTE299.toField = "set_fraction";
ROUTE299.toNode = "l_middle3RotInterp";
browser.currentScene.children[74] = ROUTE299;

let ROUTE300 = browser.currentScene.createNode("ROUTE");
ROUTE300.fromField = "fraction_changed";
ROUTE300.fromNode = "KickTimer";
ROUTE300.toField = "set_fraction";
ROUTE300.toNode = "l_ring0RotInterp";
browser.currentScene.children[75] = ROUTE300;

let ROUTE301 = browser.currentScene.createNode("ROUTE");
ROUTE301.fromField = "fraction_changed";
ROUTE301.fromNode = "KickTimer";
ROUTE301.toField = "set_fraction";
ROUTE301.toNode = "l_ring1RotInterp";
browser.currentScene.children[76] = ROUTE301;

let ROUTE302 = browser.currentScene.createNode("ROUTE");
ROUTE302.fromField = "fraction_changed";
ROUTE302.fromNode = "KickTimer";
ROUTE302.toField = "set_fraction";
ROUTE302.toNode = "l_ring2RotInterp";
browser.currentScene.children[77] = ROUTE302;

let ROUTE303 = browser.currentScene.createNode("ROUTE");
ROUTE303.fromField = "fraction_changed";
ROUTE303.fromNode = "KickTimer";
ROUTE303.toField = "set_fraction";
ROUTE303.toNode = "l_ring3RotInterp";
browser.currentScene.children[78] = ROUTE303;

let ROUTE304 = browser.currentScene.createNode("ROUTE");
ROUTE304.fromField = "fraction_changed";
ROUTE304.fromNode = "KickTimer";
ROUTE304.toField = "set_fraction";
ROUTE304.toNode = "l_pinky0RotInterp";
browser.currentScene.children[79] = ROUTE304;

let ROUTE305 = browser.currentScene.createNode("ROUTE");
ROUTE305.fromField = "fraction_changed";
ROUTE305.fromNode = "KickTimer";
ROUTE305.toField = "set_fraction";
ROUTE305.toNode = "l_pinky1RotInterp";
browser.currentScene.children[80] = ROUTE305;

let ROUTE306 = browser.currentScene.createNode("ROUTE");
ROUTE306.fromField = "fraction_changed";
ROUTE306.fromNode = "KickTimer";
ROUTE306.toField = "set_fraction";
ROUTE306.toNode = "l_pinky2RotInterp";
browser.currentScene.children[81] = ROUTE306;

let ROUTE307 = browser.currentScene.createNode("ROUTE");
ROUTE307.fromField = "fraction_changed";
ROUTE307.fromNode = "KickTimer";
ROUTE307.toField = "set_fraction";
ROUTE307.toNode = "l_pinky3RotInterp";
browser.currentScene.children[82] = ROUTE307;

let ROUTE308 = browser.currentScene.createNode("ROUTE");
ROUTE308.fromField = "fraction_changed";
ROUTE308.fromNode = "KickTimer";
ROUTE308.toField = "set_fraction";
ROUTE308.toNode = "r_sternoclavicularRotInterp";
browser.currentScene.children[83] = ROUTE308;

let ROUTE309 = browser.currentScene.createNode("ROUTE");
ROUTE309.fromField = "fraction_changed";
ROUTE309.fromNode = "KickTimer";
ROUTE309.toField = "set_fraction";
ROUTE309.toNode = "r_acromioclavicularRotInterp";
browser.currentScene.children[84] = ROUTE309;

let ROUTE310 = browser.currentScene.createNode("ROUTE");
ROUTE310.fromField = "fraction_changed";
ROUTE310.fromNode = "KickTimer";
ROUTE310.toField = "set_fraction";
ROUTE310.toNode = "r_shoulderRotInterp";
browser.currentScene.children[85] = ROUTE310;

let ROUTE311 = browser.currentScene.createNode("ROUTE");
ROUTE311.fromField = "fraction_changed";
ROUTE311.fromNode = "KickTimer";
ROUTE311.toField = "set_fraction";
ROUTE311.toNode = "r_elbowRotInterp";
browser.currentScene.children[86] = ROUTE311;

let ROUTE312 = browser.currentScene.createNode("ROUTE");
ROUTE312.fromField = "fraction_changed";
ROUTE312.fromNode = "KickTimer";
ROUTE312.toField = "set_fraction";
ROUTE312.toNode = "r_wristRotInterp";
browser.currentScene.children[87] = ROUTE312;

let ROUTE313 = browser.currentScene.createNode("ROUTE");
ROUTE313.fromField = "fraction_changed";
ROUTE313.fromNode = "KickTimer";
ROUTE313.toField = "set_fraction";
ROUTE313.toNode = "r_thumb1RotInterp";
browser.currentScene.children[88] = ROUTE313;

let ROUTE314 = browser.currentScene.createNode("ROUTE");
ROUTE314.fromField = "fraction_changed";
ROUTE314.fromNode = "KickTimer";
ROUTE314.toField = "set_fraction";
ROUTE314.toNode = "r_thumb2RotInterp";
browser.currentScene.children[89] = ROUTE314;

let ROUTE315 = browser.currentScene.createNode("ROUTE");
ROUTE315.fromField = "fraction_changed";
ROUTE315.fromNode = "KickTimer";
ROUTE315.toField = "set_fraction";
ROUTE315.toNode = "r_thumb3RotInterp";
browser.currentScene.children[90] = ROUTE315;

let ROUTE316 = browser.currentScene.createNode("ROUTE");
ROUTE316.fromField = "fraction_changed";
ROUTE316.fromNode = "KickTimer";
ROUTE316.toField = "set_fraction";
ROUTE316.toNode = "r_index0RotInterp";
browser.currentScene.children[91] = ROUTE316;

let ROUTE317 = browser.currentScene.createNode("ROUTE");
ROUTE317.fromField = "fraction_changed";
ROUTE317.fromNode = "KickTimer";
ROUTE317.toField = "set_fraction";
ROUTE317.toNode = "r_index1RotInterp";
browser.currentScene.children[92] = ROUTE317;

let ROUTE318 = browser.currentScene.createNode("ROUTE");
ROUTE318.fromField = "fraction_changed";
ROUTE318.fromNode = "KickTimer";
ROUTE318.toField = "set_fraction";
ROUTE318.toNode = "r_index2RotInterp";
browser.currentScene.children[93] = ROUTE318;

let ROUTE319 = browser.currentScene.createNode("ROUTE");
ROUTE319.fromField = "fraction_changed";
ROUTE319.fromNode = "KickTimer";
ROUTE319.toField = "set_fraction";
ROUTE319.toNode = "r_index3RotInterp";
browser.currentScene.children[94] = ROUTE319;

let ROUTE320 = browser.currentScene.createNode("ROUTE");
ROUTE320.fromField = "fraction_changed";
ROUTE320.fromNode = "KickTimer";
ROUTE320.toField = "set_fraction";
ROUTE320.toNode = "r_middle0RotInterp";
browser.currentScene.children[95] = ROUTE320;

let ROUTE321 = browser.currentScene.createNode("ROUTE");
ROUTE321.fromField = "fraction_changed";
ROUTE321.fromNode = "KickTimer";
ROUTE321.toField = "set_fraction";
ROUTE321.toNode = "r_middle1RotInterp";
browser.currentScene.children[96] = ROUTE321;

let ROUTE322 = browser.currentScene.createNode("ROUTE");
ROUTE322.fromField = "fraction_changed";
ROUTE322.fromNode = "KickTimer";
ROUTE322.toField = "set_fraction";
ROUTE322.toNode = "r_middle2RotInterp";
browser.currentScene.children[97] = ROUTE322;

let ROUTE323 = browser.currentScene.createNode("ROUTE");
ROUTE323.fromField = "fraction_changed";
ROUTE323.fromNode = "KickTimer";
ROUTE323.toField = "set_fraction";
ROUTE323.toNode = "r_middle3RotInterp";
browser.currentScene.children[98] = ROUTE323;

let ROUTE324 = browser.currentScene.createNode("ROUTE");
ROUTE324.fromField = "fraction_changed";
ROUTE324.fromNode = "KickTimer";
ROUTE324.toField = "set_fraction";
ROUTE324.toNode = "r_ring0RotInterp";
browser.currentScene.children[99] = ROUTE324;

let ROUTE325 = browser.currentScene.createNode("ROUTE");
ROUTE325.fromField = "fraction_changed";
ROUTE325.fromNode = "KickTimer";
ROUTE325.toField = "set_fraction";
ROUTE325.toNode = "r_ring1RotInterp";
browser.currentScene.children[100] = ROUTE325;

let ROUTE326 = browser.currentScene.createNode("ROUTE");
ROUTE326.fromField = "fraction_changed";
ROUTE326.fromNode = "KickTimer";
ROUTE326.toField = "set_fraction";
ROUTE326.toNode = "r_ring2RotInterp";
browser.currentScene.children[101] = ROUTE326;

let ROUTE327 = browser.currentScene.createNode("ROUTE");
ROUTE327.fromField = "fraction_changed";
ROUTE327.fromNode = "KickTimer";
ROUTE327.toField = "set_fraction";
ROUTE327.toNode = "r_ring3RotInterp";
browser.currentScene.children[102] = ROUTE327;

let ROUTE328 = browser.currentScene.createNode("ROUTE");
ROUTE328.fromField = "fraction_changed";
ROUTE328.fromNode = "KickTimer";
ROUTE328.toField = "set_fraction";
ROUTE328.toNode = "r_pinky0RotInterp";
browser.currentScene.children[103] = ROUTE328;

let ROUTE329 = browser.currentScene.createNode("ROUTE");
ROUTE329.fromField = "fraction_changed";
ROUTE329.fromNode = "KickTimer";
ROUTE329.toField = "set_fraction";
ROUTE329.toNode = "r_pinky1RotInterp";
browser.currentScene.children[104] = ROUTE329;

let ROUTE330 = browser.currentScene.createNode("ROUTE");
ROUTE330.fromField = "fraction_changed";
ROUTE330.fromNode = "KickTimer";
ROUTE330.toField = "set_fraction";
ROUTE330.toNode = "r_pinky2RotInterp";
browser.currentScene.children[105] = ROUTE330;

let ROUTE331 = browser.currentScene.createNode("ROUTE");
ROUTE331.fromField = "fraction_changed";
ROUTE331.fromNode = "KickTimer";
ROUTE331.toField = "set_fraction";
ROUTE331.toNode = "r_pinky3RotInterp";
browser.currentScene.children[106] = ROUTE331;

//Routes from Interpolators to Joe_ model Joints
let ROUTE332 = browser.currentScene.createNode("ROUTE");
ROUTE332.fromField = "value_changed";
ROUTE332.fromNode = "HumanoidRootRotInterp";
ROUTE332.toField = "set_rotation";
ROUTE332.toNode = "Joe_HumanoidRoot";
browser.currentScene.children[107] = ROUTE332;

let ROUTE333 = browser.currentScene.createNode("ROUTE");
ROUTE333.fromField = "value_changed";
ROUTE333.fromNode = "HumanoidRootTransInterp";
ROUTE333.toField = "set_translation";
ROUTE333.toNode = "Joe_HumanoidRoot";
browser.currentScene.children[108] = ROUTE333;

let ROUTE334 = browser.currentScene.createNode("ROUTE");
ROUTE334.fromField = "value_changed";
ROUTE334.fromNode = "sacroiliacRotInterp";
ROUTE334.toField = "set_rotation";
ROUTE334.toNode = "Joe_sacroiliac";
browser.currentScene.children[109] = ROUTE334;

let ROUTE335 = browser.currentScene.createNode("ROUTE");
ROUTE335.fromField = "value_changed";
ROUTE335.fromNode = "l_hipRotInterp";
ROUTE335.toField = "set_rotation";
ROUTE335.toNode = "Joe_l_hip";
browser.currentScene.children[110] = ROUTE335;

let ROUTE336 = browser.currentScene.createNode("ROUTE");
ROUTE336.fromField = "value_changed";
ROUTE336.fromNode = "l_kneeRotInterp";
ROUTE336.toField = "set_rotation";
ROUTE336.toNode = "Joe_l_knee";
browser.currentScene.children[111] = ROUTE336;

let ROUTE337 = browser.currentScene.createNode("ROUTE");
ROUTE337.fromField = "value_changed";
ROUTE337.fromNode = "l_ankleRotInterp";
ROUTE337.toField = "set_rotation";
ROUTE337.toNode = "Joe_l_ankle";
browser.currentScene.children[112] = ROUTE337;

let ROUTE338 = browser.currentScene.createNode("ROUTE");
ROUTE338.fromField = "value_changed";
ROUTE338.fromNode = "l_subtalarRotInterp";
ROUTE338.toField = "set_rotation";
ROUTE338.toNode = "Joe_l_subtalar";
browser.currentScene.children[113] = ROUTE338;

let ROUTE339 = browser.currentScene.createNode("ROUTE");
ROUTE339.fromField = "value_changed";
ROUTE339.fromNode = "l_midtarsalRotInterp";
ROUTE339.toField = "set_rotation";
ROUTE339.toNode = "Joe_l_midtarsal";
browser.currentScene.children[114] = ROUTE339;

let ROUTE340 = browser.currentScene.createNode("ROUTE");
ROUTE340.fromField = "value_changed";
ROUTE340.fromNode = "l_metatarsalRotInterp";
ROUTE340.toField = "set_rotation";
ROUTE340.toNode = "Joe_l_metatarsal";
browser.currentScene.children[115] = ROUTE340;

let ROUTE341 = browser.currentScene.createNode("ROUTE");
ROUTE341.fromField = "value_changed";
ROUTE341.fromNode = "r_hipRotInterp";
ROUTE341.toField = "set_rotation";
ROUTE341.toNode = "Joe_r_hip";
browser.currentScene.children[116] = ROUTE341;

let ROUTE342 = browser.currentScene.createNode("ROUTE");
ROUTE342.fromField = "value_changed";
ROUTE342.fromNode = "r_kneeRotInterp";
ROUTE342.toField = "set_rotation";
ROUTE342.toNode = "Joe_r_knee";
browser.currentScene.children[117] = ROUTE342;

let ROUTE343 = browser.currentScene.createNode("ROUTE");
ROUTE343.fromField = "value_changed";
ROUTE343.fromNode = "r_ankleRotInterp";
ROUTE343.toField = "set_rotation";
ROUTE343.toNode = "Joe_r_ankle";
browser.currentScene.children[118] = ROUTE343;

let ROUTE344 = browser.currentScene.createNode("ROUTE");
ROUTE344.fromField = "value_changed";
ROUTE344.fromNode = "r_subtalarRotInterp";
ROUTE344.toField = "set_rotation";
ROUTE344.toNode = "Joe_r_subtalar";
browser.currentScene.children[119] = ROUTE344;

let ROUTE345 = browser.currentScene.createNode("ROUTE");
ROUTE345.fromField = "value_changed";
ROUTE345.fromNode = "r_midtarsalRotInterp";
ROUTE345.toField = "set_rotation";
ROUTE345.toNode = "Joe_r_midtarsal";
browser.currentScene.children[120] = ROUTE345;

let ROUTE346 = browser.currentScene.createNode("ROUTE");
ROUTE346.fromField = "value_changed";
ROUTE346.fromNode = "r_metatarsalRotInterp";
ROUTE346.toField = "set_rotation";
ROUTE346.toNode = "Joe_r_metatarsal";
browser.currentScene.children[121] = ROUTE346;

let ROUTE347 = browser.currentScene.createNode("ROUTE");
ROUTE347.fromField = "value_changed";
ROUTE347.fromNode = "vl5RotInterp";
ROUTE347.toField = "set_rotation";
ROUTE347.toNode = "Joe_vl5";
browser.currentScene.children[122] = ROUTE347;

let ROUTE348 = browser.currentScene.createNode("ROUTE");
ROUTE348.fromField = "value_changed";
ROUTE348.fromNode = "vl4RotInterp";
ROUTE348.toField = "set_rotation";
ROUTE348.toNode = "Joe_vl4";
browser.currentScene.children[123] = ROUTE348;

let ROUTE349 = browser.currentScene.createNode("ROUTE");
ROUTE349.fromField = "value_changed";
ROUTE349.fromNode = "vl3RotInterp";
ROUTE349.toField = "set_rotation";
ROUTE349.toNode = "Joe_vl3";
browser.currentScene.children[124] = ROUTE349;

let ROUTE350 = browser.currentScene.createNode("ROUTE");
ROUTE350.fromField = "value_changed";
ROUTE350.fromNode = "vl2RotInterp";
ROUTE350.toField = "set_rotation";
ROUTE350.toNode = "Joe_vl2";
browser.currentScene.children[125] = ROUTE350;

let ROUTE351 = browser.currentScene.createNode("ROUTE");
ROUTE351.fromField = "value_changed";
ROUTE351.fromNode = "vl1RotInterp";
ROUTE351.toField = "set_rotation";
ROUTE351.toNode = "Joe_vl1";
browser.currentScene.children[126] = ROUTE351;

let ROUTE352 = browser.currentScene.createNode("ROUTE");
ROUTE352.fromField = "value_changed";
ROUTE352.fromNode = "vt12RotInterp";
ROUTE352.toField = "set_rotation";
ROUTE352.toNode = "Joe_vt12";
browser.currentScene.children[127] = ROUTE352;

let ROUTE353 = browser.currentScene.createNode("ROUTE");
ROUTE353.fromField = "value_changed";
ROUTE353.fromNode = "vt11RotInterp";
ROUTE353.toField = "set_rotation";
ROUTE353.toNode = "Joe_vt11";
browser.currentScene.children[128] = ROUTE353;

let ROUTE354 = browser.currentScene.createNode("ROUTE");
ROUTE354.fromField = "value_changed";
ROUTE354.fromNode = "vt10RotInterp";
ROUTE354.toField = "set_rotation";
ROUTE354.toNode = "Joe_vt10";
browser.currentScene.children[129] = ROUTE354;

let ROUTE355 = browser.currentScene.createNode("ROUTE");
ROUTE355.fromField = "value_changed";
ROUTE355.fromNode = "vt9RotInterp";
ROUTE355.toField = "set_rotation";
ROUTE355.toNode = "Joe_vt9";
browser.currentScene.children[130] = ROUTE355;

let ROUTE356 = browser.currentScene.createNode("ROUTE");
ROUTE356.fromField = "value_changed";
ROUTE356.fromNode = "vt8RotInterp";
ROUTE356.toField = "set_rotation";
ROUTE356.toNode = "Joe_vt8";
browser.currentScene.children[131] = ROUTE356;

let ROUTE357 = browser.currentScene.createNode("ROUTE");
ROUTE357.fromField = "value_changed";
ROUTE357.fromNode = "vt7RotInterp";
ROUTE357.toField = "set_rotation";
ROUTE357.toNode = "Joe_vt7";
browser.currentScene.children[132] = ROUTE357;

let ROUTE358 = browser.currentScene.createNode("ROUTE");
ROUTE358.fromField = "value_changed";
ROUTE358.fromNode = "vt6RotInterp";
ROUTE358.toField = "set_rotation";
ROUTE358.toNode = "Joe_vt6";
browser.currentScene.children[133] = ROUTE358;

let ROUTE359 = browser.currentScene.createNode("ROUTE");
ROUTE359.fromField = "value_changed";
ROUTE359.fromNode = "vt5RotInterp";
ROUTE359.toField = "set_rotation";
ROUTE359.toNode = "Joe_vt5";
browser.currentScene.children[134] = ROUTE359;

let ROUTE360 = browser.currentScene.createNode("ROUTE");
ROUTE360.fromField = "value_changed";
ROUTE360.fromNode = "vt4RotInterp";
ROUTE360.toField = "set_rotation";
ROUTE360.toNode = "Joe_vt4";
browser.currentScene.children[135] = ROUTE360;

let ROUTE361 = browser.currentScene.createNode("ROUTE");
ROUTE361.fromField = "value_changed";
ROUTE361.fromNode = "vt3RotInterp";
ROUTE361.toField = "set_rotation";
ROUTE361.toNode = "Joe_vt3";
browser.currentScene.children[136] = ROUTE361;

let ROUTE362 = browser.currentScene.createNode("ROUTE");
ROUTE362.fromField = "value_changed";
ROUTE362.fromNode = "vt2RotInterp";
ROUTE362.toField = "set_rotation";
ROUTE362.toNode = "Joe_vt2";
browser.currentScene.children[137] = ROUTE362;

let ROUTE363 = browser.currentScene.createNode("ROUTE");
ROUTE363.fromField = "value_changed";
ROUTE363.fromNode = "vt1RotInterp";
ROUTE363.toField = "set_rotation";
ROUTE363.toNode = "Joe_vt1";
browser.currentScene.children[138] = ROUTE363;

let ROUTE364 = browser.currentScene.createNode("ROUTE");
ROUTE364.fromField = "value_changed";
ROUTE364.fromNode = "vc7RotInterp";
ROUTE364.toField = "set_rotation";
ROUTE364.toNode = "Joe_vc7";
browser.currentScene.children[139] = ROUTE364;

let ROUTE365 = browser.currentScene.createNode("ROUTE");
ROUTE365.fromField = "value_changed";
ROUTE365.fromNode = "vc6RotInterp";
ROUTE365.toField = "set_rotation";
ROUTE365.toNode = "Joe_vc6";
browser.currentScene.children[140] = ROUTE365;

let ROUTE366 = browser.currentScene.createNode("ROUTE");
ROUTE366.fromField = "value_changed";
ROUTE366.fromNode = "vc5RotInterp";
ROUTE366.toField = "set_rotation";
ROUTE366.toNode = "Joe_vc5";
browser.currentScene.children[141] = ROUTE366;

let ROUTE367 = browser.currentScene.createNode("ROUTE");
ROUTE367.fromField = "value_changed";
ROUTE367.fromNode = "vc4RotInterp";
ROUTE367.toField = "set_rotation";
ROUTE367.toNode = "Joe_vc4";
browser.currentScene.children[142] = ROUTE367;

let ROUTE368 = browser.currentScene.createNode("ROUTE");
ROUTE368.fromField = "value_changed";
ROUTE368.fromNode = "vc3RotInterp";
ROUTE368.toField = "set_rotation";
ROUTE368.toNode = "Joe_vc3";
browser.currentScene.children[143] = ROUTE368;

let ROUTE369 = browser.currentScene.createNode("ROUTE");
ROUTE369.fromField = "value_changed";
ROUTE369.fromNode = "vc2RotInterp";
ROUTE369.toField = "set_rotation";
ROUTE369.toNode = "Joe_vc2";
browser.currentScene.children[144] = ROUTE369;

let ROUTE370 = browser.currentScene.createNode("ROUTE");
ROUTE370.fromField = "value_changed";
ROUTE370.fromNode = "vc1RotInterp";
ROUTE370.toField = "set_rotation";
ROUTE370.toNode = "Joe_vc1";
browser.currentScene.children[145] = ROUTE370;

let ROUTE371 = browser.currentScene.createNode("ROUTE");
ROUTE371.fromField = "value_changed";
ROUTE371.fromNode = "skullbaseRotInterp";
ROUTE371.toField = "set_rotation";
ROUTE371.toNode = "Joe_skullbase";
browser.currentScene.children[146] = ROUTE371;

let ROUTE372 = browser.currentScene.createNode("ROUTE");
ROUTE372.fromField = "value_changed";
ROUTE372.fromNode = "l_eyelid_jointRotInterp";
ROUTE372.toField = "set_rotation";
ROUTE372.toNode = "Joe_l_eyelid_joint";
browser.currentScene.children[147] = ROUTE372;

let ROUTE373 = browser.currentScene.createNode("ROUTE");
ROUTE373.fromField = "value_changed";
ROUTE373.fromNode = "l_eyeball_jointRotInterp";
ROUTE373.toField = "set_rotation";
ROUTE373.toNode = "Joe_l_eyeball_joint";
browser.currentScene.children[148] = ROUTE373;

let ROUTE374 = browser.currentScene.createNode("ROUTE");
ROUTE374.fromField = "value_changed";
ROUTE374.fromNode = "l_eyebrow_jointRotInterp";
ROUTE374.toField = "set_rotation";
ROUTE374.toNode = "Joe_l_eyebrow_joint";
browser.currentScene.children[149] = ROUTE374;

let ROUTE375 = browser.currentScene.createNode("ROUTE");
ROUTE375.fromField = "value_changed";
ROUTE375.fromNode = "r_eyelid_jointRotInterp";
ROUTE375.toField = "set_rotation";
ROUTE375.toNode = "Joe_r_eyelid_joint";
browser.currentScene.children[150] = ROUTE375;

let ROUTE376 = browser.currentScene.createNode("ROUTE");
ROUTE376.fromField = "value_changed";
ROUTE376.fromNode = "r_eyeball_jointRotInterp";
ROUTE376.toField = "set_rotation";
ROUTE376.toNode = "Joe_r_eyeball_joint";
browser.currentScene.children[151] = ROUTE376;

let ROUTE377 = browser.currentScene.createNode("ROUTE");
ROUTE377.fromField = "value_changed";
ROUTE377.fromNode = "r_eyebrow_jointRotInterp";
ROUTE377.toField = "set_rotation";
ROUTE377.toNode = "Joe_r_eyebrow_joint";
browser.currentScene.children[152] = ROUTE377;

let ROUTE378 = browser.currentScene.createNode("ROUTE");
ROUTE378.fromField = "value_changed";
ROUTE378.fromNode = "temporomandibularRotInterp";
ROUTE378.toField = "set_rotation";
ROUTE378.toNode = "Joe_temporomandibular";
browser.currentScene.children[153] = ROUTE378;

let ROUTE379 = browser.currentScene.createNode("ROUTE");
ROUTE379.fromField = "value_changed";
ROUTE379.fromNode = "l_sternoclavicularRotInterp";
ROUTE379.toField = "set_rotation";
ROUTE379.toNode = "Joe_l_sternoclavicular";
browser.currentScene.children[154] = ROUTE379;

let ROUTE380 = browser.currentScene.createNode("ROUTE");
ROUTE380.fromField = "value_changed";
ROUTE380.fromNode = "l_acromioclavicularRotInterp";
ROUTE380.toField = "set_rotation";
ROUTE380.toNode = "Joe_l_acromioclavicular";
browser.currentScene.children[155] = ROUTE380;

let ROUTE381 = browser.currentScene.createNode("ROUTE");
ROUTE381.fromField = "value_changed";
ROUTE381.fromNode = "l_shoulderRotInterp";
ROUTE381.toField = "set_rotation";
ROUTE381.toNode = "Joe_l_shoulder";
browser.currentScene.children[156] = ROUTE381;

let ROUTE382 = browser.currentScene.createNode("ROUTE");
ROUTE382.fromField = "value_changed";
ROUTE382.fromNode = "l_elbowRotInterp";
ROUTE382.toField = "set_rotation";
ROUTE382.toNode = "Joe_l_elbow";
browser.currentScene.children[157] = ROUTE382;

let ROUTE383 = browser.currentScene.createNode("ROUTE");
ROUTE383.fromField = "value_changed";
ROUTE383.fromNode = "l_wristRotInterp";
ROUTE383.toField = "set_rotation";
ROUTE383.toNode = "Joe_l_wrist";
browser.currentScene.children[158] = ROUTE383;

let ROUTE384 = browser.currentScene.createNode("ROUTE");
ROUTE384.fromField = "value_changed";
ROUTE384.fromNode = "l_thumb1RotInterp";
ROUTE384.toField = "set_rotation";
ROUTE384.toNode = "Joe_l_thumb1";
browser.currentScene.children[159] = ROUTE384;

let ROUTE385 = browser.currentScene.createNode("ROUTE");
ROUTE385.fromField = "value_changed";
ROUTE385.fromNode = "l_thumb2RotInterp";
ROUTE385.toField = "set_rotation";
ROUTE385.toNode = "Joe_l_thumb2";
browser.currentScene.children[160] = ROUTE385;

let ROUTE386 = browser.currentScene.createNode("ROUTE");
ROUTE386.fromField = "value_changed";
ROUTE386.fromNode = "l_thumb3RotInterp";
ROUTE386.toField = "set_rotation";
ROUTE386.toNode = "Joe_l_thumb3";
browser.currentScene.children[161] = ROUTE386;

let ROUTE387 = browser.currentScene.createNode("ROUTE");
ROUTE387.fromField = "value_changed";
ROUTE387.fromNode = "l_index0RotInterp";
ROUTE387.toField = "set_rotation";
ROUTE387.toNode = "Joe_l_index0";
browser.currentScene.children[162] = ROUTE387;

let ROUTE388 = browser.currentScene.createNode("ROUTE");
ROUTE388.fromField = "value_changed";
ROUTE388.fromNode = "l_index1RotInterp";
ROUTE388.toField = "set_rotation";
ROUTE388.toNode = "Joe_l_index1";
browser.currentScene.children[163] = ROUTE388;

let ROUTE389 = browser.currentScene.createNode("ROUTE");
ROUTE389.fromField = "value_changed";
ROUTE389.fromNode = "l_index2RotInterp";
ROUTE389.toField = "set_rotation";
ROUTE389.toNode = "Joe_l_index2";
browser.currentScene.children[164] = ROUTE389;

let ROUTE390 = browser.currentScene.createNode("ROUTE");
ROUTE390.fromField = "value_changed";
ROUTE390.fromNode = "l_index3RotInterp";
ROUTE390.toField = "set_rotation";
ROUTE390.toNode = "Joe_l_index3";
browser.currentScene.children[165] = ROUTE390;

let ROUTE391 = browser.currentScene.createNode("ROUTE");
ROUTE391.fromField = "value_changed";
ROUTE391.fromNode = "l_middle0RotInterp";
ROUTE391.toField = "set_rotation";
ROUTE391.toNode = "Joe_l_middle0";
browser.currentScene.children[166] = ROUTE391;

let ROUTE392 = browser.currentScene.createNode("ROUTE");
ROUTE392.fromField = "value_changed";
ROUTE392.fromNode = "l_middle1RotInterp";
ROUTE392.toField = "set_rotation";
ROUTE392.toNode = "Joe_l_middle1";
browser.currentScene.children[167] = ROUTE392;

let ROUTE393 = browser.currentScene.createNode("ROUTE");
ROUTE393.fromField = "value_changed";
ROUTE393.fromNode = "l_middle2RotInterp";
ROUTE393.toField = "set_rotation";
ROUTE393.toNode = "Joe_l_middle2";
browser.currentScene.children[168] = ROUTE393;

let ROUTE394 = browser.currentScene.createNode("ROUTE");
ROUTE394.fromField = "value_changed";
ROUTE394.fromNode = "l_middle3RotInterp";
ROUTE394.toField = "set_rotation";
ROUTE394.toNode = "Joe_l_middle3";
browser.currentScene.children[169] = ROUTE394;

let ROUTE395 = browser.currentScene.createNode("ROUTE");
ROUTE395.fromField = "value_changed";
ROUTE395.fromNode = "l_ring0RotInterp";
ROUTE395.toField = "set_rotation";
ROUTE395.toNode = "Joe_l_ring0";
browser.currentScene.children[170] = ROUTE395;

let ROUTE396 = browser.currentScene.createNode("ROUTE");
ROUTE396.fromField = "value_changed";
ROUTE396.fromNode = "l_ring1RotInterp";
ROUTE396.toField = "set_rotation";
ROUTE396.toNode = "Joe_l_ring1";
browser.currentScene.children[171] = ROUTE396;

let ROUTE397 = browser.currentScene.createNode("ROUTE");
ROUTE397.fromField = "value_changed";
ROUTE397.fromNode = "l_ring2RotInterp";
ROUTE397.toField = "set_rotation";
ROUTE397.toNode = "Joe_l_ring2";
browser.currentScene.children[172] = ROUTE397;

let ROUTE398 = browser.currentScene.createNode("ROUTE");
ROUTE398.fromField = "value_changed";
ROUTE398.fromNode = "l_ring3RotInterp";
ROUTE398.toField = "set_rotation";
ROUTE398.toNode = "Joe_l_ring3";
browser.currentScene.children[173] = ROUTE398;

let ROUTE399 = browser.currentScene.createNode("ROUTE");
ROUTE399.fromField = "value_changed";
ROUTE399.fromNode = "l_pinky0RotInterp";
ROUTE399.toField = "set_rotation";
ROUTE399.toNode = "Joe_l_pinky0";
browser.currentScene.children[174] = ROUTE399;

let ROUTE400 = browser.currentScene.createNode("ROUTE");
ROUTE400.fromField = "value_changed";
ROUTE400.fromNode = "l_pinky1RotInterp";
ROUTE400.toField = "set_rotation";
ROUTE400.toNode = "Joe_l_pinky1";
browser.currentScene.children[175] = ROUTE400;

let ROUTE401 = browser.currentScene.createNode("ROUTE");
ROUTE401.fromField = "value_changed";
ROUTE401.fromNode = "l_pinky2RotInterp";
ROUTE401.toField = "set_rotation";
ROUTE401.toNode = "Joe_l_pinky2";
browser.currentScene.children[176] = ROUTE401;

let ROUTE402 = browser.currentScene.createNode("ROUTE");
ROUTE402.fromField = "value_changed";
ROUTE402.fromNode = "l_pinky3RotInterp";
ROUTE402.toField = "set_rotation";
ROUTE402.toNode = "Joe_l_pinky3";
browser.currentScene.children[177] = ROUTE402;

let ROUTE403 = browser.currentScene.createNode("ROUTE");
ROUTE403.fromField = "value_changed";
ROUTE403.fromNode = "r_sternoclavicularRotInterp";
ROUTE403.toField = "set_rotation";
ROUTE403.toNode = "Joe_r_sternoclavicular";
browser.currentScene.children[178] = ROUTE403;

let ROUTE404 = browser.currentScene.createNode("ROUTE");
ROUTE404.fromField = "value_changed";
ROUTE404.fromNode = "r_acromioclavicularRotInterp";
ROUTE404.toField = "set_rotation";
ROUTE404.toNode = "Joe_r_acromioclavicular";
browser.currentScene.children[179] = ROUTE404;

let ROUTE405 = browser.currentScene.createNode("ROUTE");
ROUTE405.fromField = "value_changed";
ROUTE405.fromNode = "r_shoulderRotInterp";
ROUTE405.toField = "set_rotation";
ROUTE405.toNode = "Joe_r_shoulder";
browser.currentScene.children[180] = ROUTE405;

let ROUTE406 = browser.currentScene.createNode("ROUTE");
ROUTE406.fromField = "value_changed";
ROUTE406.fromNode = "r_elbowRotInterp";
ROUTE406.toField = "set_rotation";
ROUTE406.toNode = "Joe_r_elbow";
browser.currentScene.children[181] = ROUTE406;

let ROUTE407 = browser.currentScene.createNode("ROUTE");
ROUTE407.fromField = "value_changed";
ROUTE407.fromNode = "r_wristRotInterp";
ROUTE407.toField = "set_rotation";
ROUTE407.toNode = "Joe_r_wrist";
browser.currentScene.children[182] = ROUTE407;

let ROUTE408 = browser.currentScene.createNode("ROUTE");
ROUTE408.fromField = "value_changed";
ROUTE408.fromNode = "r_thumb1RotInterp";
ROUTE408.toField = "set_rotation";
ROUTE408.toNode = "Joe_r_thumb1";
browser.currentScene.children[183] = ROUTE408;

let ROUTE409 = browser.currentScene.createNode("ROUTE");
ROUTE409.fromField = "value_changed";
ROUTE409.fromNode = "r_thumb2RotInterp";
ROUTE409.toField = "set_rotation";
ROUTE409.toNode = "Joe_r_thumb2";
browser.currentScene.children[184] = ROUTE409;

let ROUTE410 = browser.currentScene.createNode("ROUTE");
ROUTE410.fromField = "value_changed";
ROUTE410.fromNode = "r_thumb3RotInterp";
ROUTE410.toField = "set_rotation";
ROUTE410.toNode = "Joe_r_thumb3";
browser.currentScene.children[185] = ROUTE410;

let ROUTE411 = browser.currentScene.createNode("ROUTE");
ROUTE411.fromField = "value_changed";
ROUTE411.fromNode = "r_index0RotInterp";
ROUTE411.toField = "set_rotation";
ROUTE411.toNode = "Joe_r_index0";
browser.currentScene.children[186] = ROUTE411;

let ROUTE412 = browser.currentScene.createNode("ROUTE");
ROUTE412.fromField = "value_changed";
ROUTE412.fromNode = "r_index1RotInterp";
ROUTE412.toField = "set_rotation";
ROUTE412.toNode = "Joe_r_index1";
browser.currentScene.children[187] = ROUTE412;

let ROUTE413 = browser.currentScene.createNode("ROUTE");
ROUTE413.fromField = "value_changed";
ROUTE413.fromNode = "r_index2RotInterp";
ROUTE413.toField = "set_rotation";
ROUTE413.toNode = "Joe_r_index2";
browser.currentScene.children[188] = ROUTE413;

let ROUTE414 = browser.currentScene.createNode("ROUTE");
ROUTE414.fromField = "value_changed";
ROUTE414.fromNode = "r_index3RotInterp";
ROUTE414.toField = "set_rotation";
ROUTE414.toNode = "Joe_r_index3";
browser.currentScene.children[189] = ROUTE414;

let ROUTE415 = browser.currentScene.createNode("ROUTE");
ROUTE415.fromField = "value_changed";
ROUTE415.fromNode = "r_middle0RotInterp";
ROUTE415.toField = "set_rotation";
ROUTE415.toNode = "Joe_r_middle0";
browser.currentScene.children[190] = ROUTE415;

let ROUTE416 = browser.currentScene.createNode("ROUTE");
ROUTE416.fromField = "value_changed";
ROUTE416.fromNode = "r_middle1RotInterp";
ROUTE416.toField = "set_rotation";
ROUTE416.toNode = "Joe_r_middle1";
browser.currentScene.children[191] = ROUTE416;

let ROUTE417 = browser.currentScene.createNode("ROUTE");
ROUTE417.fromField = "value_changed";
ROUTE417.fromNode = "r_middle2RotInterp";
ROUTE417.toField = "set_rotation";
ROUTE417.toNode = "Joe_r_middle2";
browser.currentScene.children[192] = ROUTE417;

let ROUTE418 = browser.currentScene.createNode("ROUTE");
ROUTE418.fromField = "value_changed";
ROUTE418.fromNode = "r_middle3RotInterp";
ROUTE418.toField = "set_rotation";
ROUTE418.toNode = "Joe_r_middle3";
browser.currentScene.children[193] = ROUTE418;

let ROUTE419 = browser.currentScene.createNode("ROUTE");
ROUTE419.fromField = "value_changed";
ROUTE419.fromNode = "r_ring0RotInterp";
ROUTE419.toField = "set_rotation";
ROUTE419.toNode = "Joe_r_ring0";
browser.currentScene.children[194] = ROUTE419;

let ROUTE420 = browser.currentScene.createNode("ROUTE");
ROUTE420.fromField = "value_changed";
ROUTE420.fromNode = "r_ring1RotInterp";
ROUTE420.toField = "set_rotation";
ROUTE420.toNode = "Joe_r_ring1";
browser.currentScene.children[195] = ROUTE420;

let ROUTE421 = browser.currentScene.createNode("ROUTE");
ROUTE421.fromField = "value_changed";
ROUTE421.fromNode = "r_ring2RotInterp";
ROUTE421.toField = "set_rotation";
ROUTE421.toNode = "Joe_r_ring2";
browser.currentScene.children[196] = ROUTE421;

let ROUTE422 = browser.currentScene.createNode("ROUTE");
ROUTE422.fromField = "value_changed";
ROUTE422.fromNode = "r_ring3RotInterp";
ROUTE422.toField = "set_rotation";
ROUTE422.toNode = "Joe_r_ring3";
browser.currentScene.children[197] = ROUTE422;

let ROUTE423 = browser.currentScene.createNode("ROUTE");
ROUTE423.fromField = "value_changed";
ROUTE423.fromNode = "r_pinky0RotInterp";
ROUTE423.toField = "set_rotation";
ROUTE423.toNode = "Joe_r_pinky0";
browser.currentScene.children[198] = ROUTE423;

let ROUTE424 = browser.currentScene.createNode("ROUTE");
ROUTE424.fromField = "value_changed";
ROUTE424.fromNode = "r_pinky1RotInterp";
ROUTE424.toField = "set_rotation";
ROUTE424.toNode = "Joe_r_pinky1";
browser.currentScene.children[199] = ROUTE424;

let ROUTE425 = browser.currentScene.createNode("ROUTE");
ROUTE425.fromField = "value_changed";
ROUTE425.fromNode = "r_pinky2RotInterp";
ROUTE425.toField = "set_rotation";
ROUTE425.toNode = "Joe_r_pinky2";
browser.currentScene.children[200] = ROUTE425;

let ROUTE426 = browser.currentScene.createNode("ROUTE");
ROUTE426.fromField = "value_changed";
ROUTE426.fromNode = "r_pinky3RotInterp";
ROUTE426.toField = "set_rotation";
ROUTE426.toNode = "Joe_r_pinky3";
browser.currentScene.children[201] = ROUTE426;

let Group427 = browser.currentScene.createNode("Group");
Group427.DEF = "DisplacersAnimationGroup";
//TimeSensor DEF='skull_tipTestTimer' cycleInterval='5.73' loop='true' enabled='true'></TimeSensor
let ScalarInterpolator428 = browser.currentScene.createNode("ScalarInterpolator");
ScalarInterpolator428.DEF = "skull_tipTest";
ScalarInterpolator428.key = new X3D.MFFloat([0,0.1,0.2,0.35,0.6,0.7,0.85,0.88,0.94,0.97,1]);
ScalarInterpolator428.keyValue = new X3D.MFFloat([0,0,0,0,0.2,0.4,1,0,1,0.4,0]);
Group427YYY.children = new X3D.MFNode();

Group427ZZZ.children[0] = ScalarInterpolator428;

let ROUTE429 = browser.currentScene.createNode("ROUTE");
ROUTE429.fromField = "fraction_changed";
ROUTE429.fromNode = "KickTimer";
ROUTE429.toField = "set_fraction";
ROUTE429.toNode = "skull_tipTest";
Group427ZZZ.children[1] = ROUTE429;

let ROUTE430 = browser.currentScene.createNode("ROUTE");
ROUTE430.fromField = "value_changed";
ROUTE430.fromNode = "skull_tipTest";
ROUTE430.toField = "weight";
ROUTE430.toNode = "Joe_skull_tipTest";
Group427ZZZ.children[2] = ROUTE430;

browser.currentScene.children[202] = Group427;

let Group431 = browser.currentScene.createNode("Group");
Group431.DEF = "skintexturetransform_animation";
let ScalarInterpolator432 = browser.currentScene.createNode("ScalarInterpolator");
ScalarInterpolator432.DEF = "skinTexTransTest";
ScalarInterpolator432.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.7,0.8,1]);
ScalarInterpolator432.keyValue = new X3D.MFFloat([0,0,0,0,0,1,2,0]);
Group431YYY.children = new X3D.MFNode();

Group431ZZZ.children[0] = ScalarInterpolator432;

let ROUTE433 = browser.currentScene.createNode("ROUTE");
ROUTE433.fromField = "fraction_changed";
ROUTE433.fromNode = "KickTimer";
ROUTE433.toField = "set_fraction";
ROUTE433.toNode = "skinTexTransTest";
Group431ZZZ.children[1] = ROUTE433;

let ROUTE434 = browser.currentScene.createNode("ROUTE");
ROUTE434.fromField = "value_changed";
ROUTE434.fromNode = "skinTexTransTest";
ROUTE434.toField = "rotation";
ROUTE434.toNode = "kicktextrans";
Group431ZZZ.children[2] = ROUTE434;

browser.currentScene.children[203] = Group431;

let Group435 = browser.currentScene.createNode("Group");
let Transform436 = browser.currentScene.createNode("Transform");
Transform436.DEF = "SBall";
Transform436.rotation = new X3D.SFRotation([0.7,0,0.7,0.1]);
Transform436.scale = new X3D.SFVec3f([0.23,0.23,0.23]);
Transform436.translation = new X3D.SFVec3f([-0.916,0.37,-0.92]);
let Shape437 = browser.currentScene.createNode("Shape");
Shape437.DEF = "ball_Shape";
let Appearance438 = browser.currentScene.createNode("Appearance");
Appearance438.DEF = "ball_Appearance";
let Material439 = browser.currentScene.createNode("Material");
Material439.DEF = "ball_Material";
Material439.diffuseColor = new X3D.SFColor([0.3,0.3,1]);
Material439.emissiveColor = new X3D.SFColor([0.3,0.3,0.33]);
material = Material439;

let ImageTexture440 = browser.currentScene.createNode("ImageTexture");
ImageTexture440.USE = "JoeSkinImageTexture";
texture = ImageTexture440;

appearance = Appearance438;

let IndexedFaceSet441 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet441.DEF = "ball_IndexedFaceSet";
IndexedFaceSet441.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,1,13,14,-1,1,14,2,-1,2,14,15,-1,2,15,3,-1,3,15,16,-1,3,16,4,-1,4,16,17,-1,4,17,5,-1,5,17,18,-1,5,18,6,-1,6,18,19,-1,6,19,7,-1,7,19,20,-1,7,20,8,-1,8,20,21,-1,8,21,9,-1,9,21,22,-1,9,22,10,-1,10,22,23,-1,10,23,11,-1,11,23,24,-1,11,24,12,-1,12,24,13,-1,12,13,1,-1,13,25,26,-1,13,26,14,-1,14,26,27,-1,14,27,15,-1,15,27,28,-1,15,28,16,-1,16,28,29,-1,16,29,17,-1,17,29,30,-1,17,30,18,-1,18,30,31,-1,18,31,19,-1,19,31,32,-1,19,32,20,-1,20,32,33,-1,20,33,21,-1,21,33,34,-1,21,34,22,-1,22,34,35,-1,22,35,23,-1,23,35,36,-1,23,36,24,-1,24,36,25,-1,24,25,13,-1,25,37,38,-1,25,38,26,-1,26,38,39,-1,26,39,27,-1,27,39,40,-1,27,40,28,-1,28,40,41,-1,28,41,29,-1,29,41,42,-1,29,42,30,-1,30,42,43,-1,30,43,31,-1,31,43,44,-1,31,44,32,-1,32,44,45,-1,32,45,33,-1,33,45,46,-1,33,46,34,-1,34,46,47,-1,34,47,35,-1,35,47,48,-1,35,48,36,-1,36,48,37,-1,36,37,25,-1,37,49,50,-1,37,50,38,-1,38,50,51,-1,38,51,39,-1,39,51,52,-1,39,52,40,-1,40,52,53,-1,40,53,41,-1,41,53,54,-1,41,54,42,-1,42,54,55,-1,42,55,43,-1,43,55,56,-1,43,56,44,-1,44,56,57,-1,44,57,45,-1,45,57,58,-1,45,58,46,-1,46,58,59,-1,46,59,47,-1,47,59,60,-1,47,60,48,-1,48,60,49,-1,48,49,37,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]);
let Coordinate442 = browser.currentScene.createNode("Coordinate");
Coordinate442.DEF = "Ball_Coordinates";
Coordinate442.point = new X3D.MFVec3f([0,0.4675,0,0,0.4049,-0.2338,-0.1169,0.4049,-0.2024,-0.2024,0.4049,-0.1169,-0.2338,0.4049,0,-0.2024,0.4049,0.1169,-0.1169,0.4049,0.2024,0,0.4049,0.2338,0.1169,0.4049,0.2024,0.2024,0.4049,0.1169,0.2338,0.4049,0,0.2024,0.4049,-0.1169,0.1169,0.4049,-0.2024,0,0.2338,-0.4049,-0.2024,0.2338,-0.3506,-0.3506,0.2338,-0.2024,-0.4049,0.2338,0,-0.3506,0.2338,0.2024,-0.2024,0.2338,0.3506,0,0.2338,0.4049,0.2024,0.2338,0.3506,0.3506,0.2338,0.2024,0.4049,0.2338,0,0.3506,0.2338,-0.2024,0.2024,0.2338,-0.3506,0,0,-0.4675,-0.2338,0,-0.4049,-0.4049,0,-0.2338,-0.4675,0,0,-0.4049,0,0.2338,-0.2338,0,0.4049,0,0,0.4675,0.2338,0,0.4049,0.4049,0,0.2338,0.4675,0,0,0.4049,0,-0.2338,0.2338,0,-0.4049,0,-0.2338,-0.4049,-0.2024,-0.2338,-0.3506,-0.3506,-0.2338,-0.2024,-0.4049,-0.2338,0,-0.3506,-0.2338,0.2024,-0.2024,-0.2338,0.3506,0,-0.2338,0.4049,0.2024,-0.2338,0.3506,0.3506,-0.2338,0.2024,0.4049,-0.2338,0,0.3506,-0.2338,-0.2024,0.2024,-0.2338,-0.3506,0,-0.4049,-0.2338,-0.1169,-0.4049,-0.2024,-0.2024,-0.4049,-0.1169,-0.2338,-0.4049,0,-0.2024,-0.4049,0.1169,-0.1169,-0.4049,0.2024,0,-0.4049,0.2338,0.1169,-0.4049,0.2024,0.2024,-0.4049,0.1169,0.2338,-0.4049,0,0.2024,-0.4049,-0.1169,0.1169,-0.4049,-0.2024,0,-0.4675,0]);
coord = Coordinate442;

geometry = IndexedFaceSet441;

Transform436YYY.child = new X3D.undefined();

Transform436ZZZ.child[0] = Shape437;

let Viewpoint443 = browser.currentScene.createNode("Viewpoint");
Viewpoint443.DEF = "ballView_1";
Viewpoint443.description = "Ball View";
Transform436ZZZ.children[1] = Viewpoint443;

Group435YYY.children = new X3D.MFNode();

Group435ZZZ.children[0] = Transform436;

//Ball Animation interpolators
let PositionInterpolator444 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator444.DEF = "ballTransInterp";
PositionInterpolator444.key = new X3D.MFFloat([0,0.4,0.409,1]);
PositionInterpolator444.keyValue = new X3D.MFVec3f([-1,0.4,-1,0,0.07,0,0.05,0.06,0.05,2,4,10]);
Group435ZZZ.children[1] = PositionInterpolator444;

let OrientationInterpolator445 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator445.DEF = "ballRotInterp";
OrientationInterpolator445.key = new X3D.MFFloat([0,0.4,0.41,0.71,1]);
OrientationInterpolator445.keyValue = new X3D.MFRotation([1,0,1,0.25,-1,0,-1,1.35,-1,1,-1,3.35,-1,0.2,-1,3,-1,0.2,-1,3]);
Group435ZZZ.children[2] = OrientationInterpolator445;

//Ball Animation Routes
let ROUTE446 = browser.currentScene.createNode("ROUTE");
ROUTE446.fromField = "fraction_changed";
ROUTE446.fromNode = "KickTimer";
ROUTE446.toField = "set_fraction";
ROUTE446.toNode = "ballTransInterp";
Group435ZZZ.children[3] = ROUTE446;

let ROUTE447 = browser.currentScene.createNode("ROUTE");
ROUTE447.fromField = "value_changed";
ROUTE447.fromNode = "ballTransInterp";
ROUTE447.toField = "set_translation";
ROUTE447.toNode = "SBall";
Group435ZZZ.children[4] = ROUTE447;

let ROUTE448 = browser.currentScene.createNode("ROUTE");
ROUTE448.fromField = "fraction_changed";
ROUTE448.fromNode = "KickTimer";
ROUTE448.toField = "set_fraction";
ROUTE448.toNode = "ballRotInterp";
Group435ZZZ.children[5] = ROUTE448;

let ROUTE449 = browser.currentScene.createNode("ROUTE");
ROUTE449.fromField = "value_changed";
ROUTE449.fromNode = "ballRotInterp";
ROUTE449.toField = "set_rotation";
ROUTE449.toNode = "SBall";
Group435ZZZ.children[6] = ROUTE449;

browser.currentScene.children[204] = Group435;

let Group450 = browser.currentScene.createNode("Group");
let Transform451 = browser.currentScene.createNode("Transform");
Transform451.scale = new X3D.SFVec3f([0.2,0.2,0.2]);
let Shape452 = browser.currentScene.createNode("Shape");
Shape452.USE = "AxisLinesShape";
Transform451YYY.child = new X3D.undefined();

Transform451ZZZ.child[0] = Shape452;

Group450YYY.children = new X3D.MFNode();

Group450ZZZ.children[0] = Transform451;

let Transform453 = browser.currentScene.createNode("Transform");
Transform453.DEF = "Circle0";
Transform453.scale = new X3D.SFVec3f([1.175,1,1.175]);
let Shape454 = browser.currentScene.createNode("Shape");
Shape454.DEF = "circle_Shape";
let Appearance455 = browser.currentScene.createNode("Appearance");
Appearance455.DEF = "circle0_Appearance";
let Material456 = browser.currentScene.createNode("Material");
Material456.DEF = "circle0_Material";
Material456.ambientIntensity = 0.9;
Material456.diffuseColor = new X3D.SFColor([0.9,0,0.7]);
Material456.emissiveColor = new X3D.SFColor([0.425,0.486,1]);
material = Material456;

appearance = Appearance455;

let IndexedLineSet457 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet457.DEF = "Orbit1";
IndexedLineSet457.coordIndex = new X3D.MFInt32([0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1]);
let Coordinate458 = browser.currentScene.createNode("Coordinate");
Coordinate458.DEF = "circle_Coordinates";
Coordinate458.point = new X3D.MFVec3f([1,0,0,0.995,0,-0.105,0.979,0,-0.208,0.951,0,-0.309,0.914,0,-0.407,0.866,0,-0.5,0.809,0,-0.588,0.743,0,-0.669,0.669,0,-0.743,0.588,0,-0.809,0.5,0,-0.866,0.407,0,-0.914,0.309,0,-0.951,0.208,0,-0.978,0.105,0,-0.995,0,0,-1,-0.105,0,-0.994522,-0.208,0,-0.978,-0.309,0,-0.951,-0.407,0,-0.914,-0.5,0,-0.866,-0.588,0,-0.809,-0.669,0,-0.743,-0.743,0,-0.669,-0.809,0,-0.588,-0.866,0,-0.5,-0.914,0,-0.407,-0.951,0,-0.309,-0.978,0,-0.208,-0.995,0,-0.105,-1,0,0,-0.995,0,0.105,-0.978,0,0.208,-0.951,0,0.309,-0.914,0,0.407,-0.866,0,0.5,-0.809,0,0.588,-0.743,0,0.669,-0.669,0,0.743,-0.588,0,0.809,-0.5,0,0.866,-0.407,0,0.914,-0.309,0,0.951,-0.208,0,0.978,-0.105,0,0.995,0,0,1,0.105,0,0.995,0.208,0,0.978,0.309,0,0.951,0.407,0,0.914,0.5,0,0.866,0.588,0,0.809,0.669,0,0.743,0.743,0,0.669,0.809,0,0.588,0.866,0,0.5,0.914,0,0.407,0.951,0,0.309,0.978,0,0.208,0.995,0,0.104,1,0,0]);
coord = Coordinate458;

geometry = IndexedLineSet457;

Transform453YYY.child = new X3D.undefined();

Transform453ZZZ.child[0] = Shape454;

Group450ZZZ.children[1] = Transform453;

let Transform459 = browser.currentScene.createNode("Transform");
Transform459.DEF = "Circle1";
Transform459.scale = new X3D.SFVec3f([0.5,1,0.5]);
let Shape460 = browser.currentScene.createNode("Shape");
Shape460.DEF = "circle1_Shape";
let Appearance461 = browser.currentScene.createNode("Appearance");
Appearance461.DEF = "circle1_Appearance";
let Material462 = browser.currentScene.createNode("Material");
Material462.DEF = "circle1_Material";
Material462.diffuseColor = new X3D.SFColor([0.9,0,0.7]);
Material462.emissiveColor = new X3D.SFColor([0.424956,0.483976,1]);
material = Material462;

appearance = Appearance461;

let IndexedLineSet463 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet463.USE = "Orbit1";
geometry = IndexedLineSet463;

Transform459YYY.child = new X3D.undefined();

Transform459ZZZ.child[0] = Shape460;

Group450ZZZ.children[2] = Transform459;

let Transform464 = browser.currentScene.createNode("Transform");
Transform464.DEF = "Circle2";
Transform464.scale = new X3D.SFVec3f([0.25,1,0.25]);
let Shape465 = browser.currentScene.createNode("Shape");
Shape465.DEF = "circle2_Shape";
let Appearance466 = browser.currentScene.createNode("Appearance");
Appearance466.DEF = "circle2_Appearance";
let Material467 = browser.currentScene.createNode("Material");
Material467.DEF = "circle2_Material";
Material467.diffuseColor = new X3D.SFColor([0.9,0,0.7]);
Material467.emissiveColor = new X3D.SFColor([0.424956,0.483976,1]);
material = Material467;

appearance = Appearance466;

let IndexedLineSet468 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet468.USE = "Orbit1";
geometry = IndexedLineSet468;

Transform464YYY.child = new X3D.undefined();

Transform464ZZZ.child[0] = Shape465;

Group450ZZZ.children[3] = Transform464;

browser.currentScene.children[205] = Group450;

}
main ();
