const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("HAnim", 1));
scene.addMetaData("title", "JoeKick.x3d");
scene.addMetaData("description", "This Joe model is a HAnim version 2 LOA-3 Humanoid with textured skin based on the original HAnim Specification and data from CAESAR models.");
scene.addMetaData("creator", "Joe D. Williams");
scene.addMetaData("created", "9 January 2004");
scene.addMetaData("translated", "12 January 2017");
scene.addMetaData("modified", "Mon, 15 Sep 2025 05:20:39 GMT");
scene.addMetaData("TODO", "Record information about skin coordinates (found in comment at end of scene) as a structured MetadataSet containing MetadataString nodes");
scene.addMetaData("translator", "Roy Walmsley");
scene.addMetaData("translator", "Don Brutzman");
scene.addMetaData("translator", "John Carlson");
scene.addMetaData("reference", "../Characters/JoeSkinTexcoordDisplacerKick.x3d");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/JoeKick.x3d");
scene.addMetaData("generator", "X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit");
await browser .loadComponents (scene);
let WorldInfo17 = browser.currentScene.createNode("WorldInfo");
WorldInfo17.title = "X3D HANIM LOA3 Skeleton, 390 point Skin, texcoords, Displacer, teTrans for Joe_ by Joe";
WorldInfo17.info = new X3D.MFString([new X3D.SFString("X3D Humanoid LOA3 skeleton"), new X3D.SFString("skin from hanim sites, surface features, and some added points"), new X3D.SFString("390 points")]);
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo17;

let NavigationInfo18 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo18.DEF = "Start_NavigationInfo";
NavigationInfo18.speed = 2.5;
browser.currentScene.children[1] = NavigationInfo18;

let Background19 = browser.currentScene.createNode("Background");
Background19.DEF = "blue_Background";
browser.currentScene.children[2] = Background19;

let SpotLight20 = browser.currentScene.createNode("SpotLight");
SpotLight20.DEF = "light1";
SpotLight20.color = new X3D.SFColor([0.8,0.8,1]);
SpotLight20.ambientIntensity = 0.7;
SpotLight20.location = new X3D.SFVec3f([0,3,3]);
SpotLight20.direction = new X3D.SFVec3f([0,0,0]);
SpotLight20.radius = 10;
SpotLight20.beamWidth = 1.5;
SpotLight20.cutOffAngle = 0.6;
browser.currentScene.children[3] = SpotLight20;

let PointLight21 = browser.currentScene.createNode("PointLight");
PointLight21.DEF = "light2";
PointLight21.color = new X3D.SFColor([0.8,0.8,1]);
PointLight21.ambientIntensity = 0.7;
PointLight21.location = new X3D.SFVec3f([0,10,-7]);
browser.currentScene.children[4] = PointLight21;

let Viewpoint22 = browser.currentScene.createNode("Viewpoint");
Viewpoint22.DEF = "Scene_InclinedView";
Viewpoint22.description = "Scene_Inclined View";
Viewpoint22.position = new X3D.SFVec3f([1.62,1.05,3.06]);
Viewpoint22.orientation = new X3D.SFRotation([-0.113,0.993,0.0347,0.671]);
Viewpoint22.centerOfRotation = new X3D.SFVec3f([0,0.85,0]);
browser.currentScene.children[5] = Viewpoint22;

let Viewpoint23 = browser.currentScene.createNode("Viewpoint");
Viewpoint23.DEF = "Scene_IFrontView";
Viewpoint23.description = "Scene_Front View";
Viewpoint23.position = new X3D.SFVec3f([0,0.8,2.58]);
Viewpoint23.centerOfRotation = new X3D.SFVec3f([0,0.8,0]);
browser.currentScene.children[6] = Viewpoint23;

let Viewpoint24 = browser.currentScene.createNode("Viewpoint");
Viewpoint24.DEF = "Scene_ISideView";
Viewpoint24.description = "Scene_Side View";
Viewpoint24.position = new X3D.SFVec3f([2.6,0.8,0]);
Viewpoint24.orientation = new X3D.SFRotation([0,1,0,1.5708]);
Viewpoint24.centerOfRotation = new X3D.SFVec3f([0,0.8,0]);
browser.currentScene.children[7] = Viewpoint24;

let Viewpoint25 = browser.currentScene.createNode("Viewpoint");
Viewpoint25.DEF = "Scene_BackView";
Viewpoint25.description = "Scene_Back View";
Viewpoint25.position = new X3D.SFVec3f([0,1.5,-3]);
Viewpoint25.orientation = new X3D.SFRotation([0,1,0,3.14]);
Viewpoint25.centerOfRotation = new X3D.SFVec3f([0,1.5,0]);
browser.currentScene.children[8] = Viewpoint25;

let Viewpoint26 = browser.currentScene.createNode("Viewpoint");
Viewpoint26.DEF = "Scene_TopView";
Viewpoint26.description = "Scene_Top View";
Viewpoint26.position = new X3D.SFVec3f([0,3.5,0]);
Viewpoint26.orientation = new X3D.SFRotation([1,0,0,-1.5708]);
Viewpoint26.centerOfRotation = new X3D.SFVec3f([0,1.5,0]);
browser.currentScene.children[9] = Viewpoint26;

let Group27 = browser.currentScene.createNode("Group");
Group27.DEF = "Joe_Humanoid";
let HAnimHumanoid28 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid28.DEF = "Joe_Kick";
HAnimHumanoid28.name = "Kick";
HAnimHumanoid28.loa = 4;
let MetadataSet29 = browser.currentScene.createNode("MetadataSet");
MetadataSet29.name = "warnings";
MetadataSet29.reference = "HAnim";
let MetadataString30 = browser.currentScene.createNode("MetadataString");
MetadataString30.name = "SymmetricalLeftRight";
MetadataString30.reference = "correction options: ignore, warn, average, left, right, largest, smallest";
MetadataString30.value = new X3D.MFString([new X3D.SFString("ignore")]);
MetadataSet29.value = new X3D.MFNode();

MetadataSet29XXX.value[0] = MetadataString30;

HAnimHumanoid28.metadata = new X3D.SFNode();

HAnimHumanoid28XXX.metadata[0] = MetadataSet29;

let HAnimJoint31 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint31.DEF = "Joe_humanoid_root";
HAnimJoint31.name = "humanoid_root";
HAnimJoint31.translation = new X3D.SFVec3f([-0.1962198,0.1405496,0.1216488]);
HAnimJoint31.rotation = new X3D.SFRotation([-0.999999999999999,0,0,0.5]);
HAnimJoint31.center = new X3D.SFVec3f([0,0.875,0]);
let HAnimSegment32 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment32.DEF = "Joe_sacrum";
HAnimSegment32.name = "sacrum";
let HAnimSite33 = browser.currentScene.createNode("HAnimSite");
HAnimSite33.DEF = "Joe_RootFront_view";
HAnimSite33.name = "RootFront_view";
let Transform34 = browser.currentScene.createNode("Transform");
Transform34.DEF = "hanimcordsys";
Transform34.scale = new X3D.SFVec3f([0.175,0.175,0.175]);
let Viewpoint35 = browser.currentScene.createNode("Viewpoint");
Viewpoint35.DEF = "ViewBodyRootAxes";
Viewpoint35.description = "Joe_HAnim Root HAnimSite Coordinate Axes View";
Transform34YYY.children = new X3D.MFNode();

Transform34ZZZ.children[0] = Viewpoint35;

let Shape36 = browser.currentScene.createNode("Shape");
Shape36.DEF = "AxisLinesShape";
let IndexedLineSet37 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet37.colorPerVertex = False;
IndexedLineSet37.colorIndex = new X3D.MFInt32([0,1,2]);
IndexedLineSet37.coordIndex = new X3D.MFInt32([0,1,-1,0,2,-1,0,3,-1]);
let Color38 = browser.currentScene.createNode("Color");
Color38.color = new X3D.MFColor([1,0,0,0,0.6,0,0,0,1]);
color = Color38;

let Coordinate39 = browser.currentScene.createNode("Coordinate");
Coordinate39.point = new X3D.MFVec3f([0,0,0,1,0,0,0,1,0,0,0,1]);
coord = Coordinate39;

geometry = IndexedLineSet37;

Transform34ZZZ.child[1] = Shape36;

HAnimSite33YYY.children = new X3D.MFNode();

HAnimSite33ZZZ.children[0] = Transform34;

HAnimSegment32YYY.children = new X3D.MFNode();

HAnimSegment32ZZZ.children[0] = HAnimSite33;

HAnimJoint31YYY.children = new X3D.MFNode();

HAnimJoint31ZZZ.children[0] = HAnimSegment32;

let HAnimJoint40 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint40.DEF = "Joe_sacroiliac";
HAnimJoint40.name = "sacroiliac";
HAnimJoint40.center = new X3D.SFVec3f([0,0.92,0]);
HAnimJoint40.skinCoordIndex = new X3D.MFInt32([17,19,20,21,22,23,26,27,73,82,89,91,93]);
HAnimJoint40.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1,1,0.35,0.35,1]);
let HAnimJoint41 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint41.DEF = "Joe_l_hip";
HAnimJoint41.name = "l_hip";
HAnimJoint41.rotation = new X3D.SFRotation([1,0,0,0.931269831413142]);
HAnimJoint41.center = new X3D.SFVec3f([0.1,0.92,0]);
HAnimJoint41.skinCoordIndex = new X3D.MFInt32([89,90,94,95,96,97]);
HAnimJoint41.skinCoordWeight = new X3D.MFFloat([0.65,1,1,1,1,1]);
let HAnimJoint42 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint42.DEF = "Joe_l_knee";
HAnimJoint42.name = "l_knee";
HAnimJoint42.rotation = new X3D.SFRotation([0.998863602232125,0,0.0476602993681761,1.24505714055853]);
HAnimJoint42.center = new X3D.SFVec3f([0.115,0.466,0]);
HAnimJoint42.skinCoordIndex = new X3D.MFInt32([334,335,336,337,338,339,340,341]);
HAnimJoint42.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimJoint43 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint43.DEF = "Joe_l_talocrural";
HAnimJoint43.name = "l_talocrural";
HAnimJoint43.rotation = new X3D.SFRotation([1,0,0,0.899195750554403]);
HAnimJoint43.center = new X3D.SFVec3f([0.115,0.069,0]);
HAnimJoint43.skinCoordIndex = new X3D.MFInt32([342,343,344,345]);
HAnimJoint43.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimJoint44 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint44.DEF = "Joe_l_tarsometatarsal_2";
HAnimJoint44.name = "l_tarsometatarsal_2";
HAnimJoint44.center = new X3D.SFVec3f([0.115,0.031,0.03]);
HAnimJoint44.skinCoordIndex = new X3D.MFInt32([346,347,348,71]);
HAnimJoint44.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimJoint45 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint45.DEF = "Joe_l_metatarsophalangeal_2";
HAnimJoint45.name = "l_metatarsophalangeal_2";
HAnimJoint45.center = new X3D.SFVec3f([0.115,0.037,0.09]);
HAnimJoint45.skinCoordIndex = new X3D.MFInt32([349,350,351,352]);
HAnimJoint45.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimJoint46 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint46.DEF = "Joe_l_tarsal_distal_interphalangeal_2";
HAnimJoint46.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint46.center = new X3D.SFVec3f([0.115,0.02,0.122]);
HAnimJoint46.skinCoordIndex = new X3D.MFInt32([353,354,355,356,357,358,359,360,361]);
HAnimJoint46.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
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

let HAnimJoint47 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint47.DEF = "Joe_r_hip";
HAnimJoint47.name = "r_hip";
HAnimJoint47.rotation = new X3D.SFRotation([-1,0,0,1]);
HAnimJoint47.center = new X3D.SFVec3f([-0.1,0.92,0]);
HAnimJoint47.skinCoordIndex = new X3D.MFInt32([91,92,98,99,100,101,362,363]);
HAnimJoint47.skinCoordWeight = new X3D.MFFloat([0.65,1,0.8,1,1,1,0.4,0.8]);
let HAnimJoint48 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint48.DEF = "Joe_r_knee";
HAnimJoint48.name = "r_knee";
HAnimJoint48.rotation = new X3D.SFRotation([1,0,0,1.3487936258316]);
HAnimJoint48.center = new X3D.SFVec3f([-0.05,0.466,0]);
HAnimJoint48.skinCoordIndex = new X3D.MFInt32([362,363,364,365,366,367,368,369,98]);
HAnimJoint48.skinCoordWeight = new X3D.MFFloat([0.6,0.2,1,1,1,1,1,1,0.2]);
let HAnimJoint49 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint49.DEF = "Joe_r_talocrural";
HAnimJoint49.name = "r_talocrural";
HAnimJoint49.rotation = new X3D.SFRotation([1,0,0,0.651206374168395]);
HAnimJoint49.center = new X3D.SFVec3f([-0.115,0.069,0]);
HAnimJoint49.skinCoordIndex = new X3D.MFInt32([370,371,372,373]);
HAnimJoint49.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimJoint50 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint50.DEF = "Joe_r_tarsometatarsal_2";
HAnimJoint50.name = "r_tarsometatarsal_2";
HAnimJoint50.center = new X3D.SFVec3f([-0.1,0.015,-0.01]);
HAnimJoint50.skinCoordIndex = new X3D.MFInt32([374,375,376]);
HAnimJoint50.skinCoordWeight = new X3D.MFFloat([1,1,1]);
let HAnimJoint51 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint51.DEF = "Joe_r_metatarsophalangeal_2";
HAnimJoint51.name = "r_metatarsophalangeal_2";
HAnimJoint51.center = new X3D.SFVec3f([-0.115,0.037,0.09]);
HAnimJoint51.skinCoordIndex = new X3D.MFInt32([377,378,379,380]);
HAnimJoint51.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimJoint52 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint52.DEF = "Joe_r_tarsal_distal_interphalangeal_2";
HAnimJoint52.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint52.center = new X3D.SFVec3f([-0.1,0.01,0.14]);
HAnimJoint52.skinCoordIndex = new X3D.MFInt32([381,382,383,384,385,386,387,388,389]);
HAnimJoint52.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
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

HAnimJoint40ZZZ.children[1] = HAnimJoint47;

HAnimJoint31ZZZ.children[1] = HAnimJoint40;

let HAnimJoint53 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint53.DEF = "Joe_vl5";
HAnimJoint53.name = "vl5";
HAnimJoint53.center = new X3D.SFVec3f([0,1.045,-0.095]);
HAnimJoint53.skinCoordIndex = new X3D.MFInt32([28,76]);
HAnimJoint53.skinCoordWeight = new X3D.MFFloat([1,1]);
let HAnimJoint54 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint54.DEF = "Joe_vl4";
HAnimJoint54.name = "vl4";
HAnimJoint54.center = new X3D.SFVec3f([0,1.068,-0.085]);
let HAnimJoint55 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint55.DEF = "Joe_vl3";
HAnimJoint55.name = "vl3";
HAnimJoint55.center = new X3D.SFVec3f([0,1.092,-0.0725]);
let HAnimJoint56 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint56.DEF = "Joe_vl2";
HAnimJoint56.name = "vl2";
HAnimJoint56.center = new X3D.SFVec3f([0,1.12,-0.065]);
HAnimJoint56.skinCoordIndex = new X3D.MFInt32([16,18,25,83,84,85,86,87,88]);
HAnimJoint56.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,0.7,1,0.8]);
let HAnimJoint57 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint57.DEF = "Joe_vl1";
HAnimJoint57.name = "vl1";
HAnimJoint57.center = new X3D.SFVec3f([0,1.1459,-0.0625]);
let HAnimJoint58 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint58.DEF = "Joe_vt12";
HAnimJoint58.name = "vt12";
HAnimJoint58.center = new X3D.SFVec3f([0,1.179,-0.068]);
let HAnimJoint59 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint59.DEF = "Joe_vt11";
HAnimJoint59.name = "vt11";
HAnimJoint59.center = new X3D.SFVec3f([0,1.2679,-0.081]);
let HAnimJoint60 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint60.DEF = "Joe_vt10";
HAnimJoint60.name = "vt10";
HAnimJoint60.center = new X3D.SFVec3f([0,1.242,-0.09]);
HAnimJoint60.skinCoordIndex = new X3D.MFInt32([15]);
HAnimJoint60.skinCoordWeight = new X3D.MFFloat([1]);
let HAnimJoint61 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint61.DEF = "Joe_vt9";
HAnimJoint61.name = "vt9";
HAnimJoint61.center = new X3D.SFVec3f([0,1.268,-0.1]);
HAnimJoint61.skinCoordIndex = new X3D.MFInt32([13,14]);
HAnimJoint61.skinCoordWeight = new X3D.MFFloat([1,1]);
let HAnimJoint62 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint62.DEF = "Joe_vt8";
HAnimJoint62.name = "vt8";
HAnimJoint62.center = new X3D.SFVec3f([0,1.294,-0.11]);
let HAnimJoint63 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint63.DEF = "Joe_vt7";
HAnimJoint63.name = "vt7";
HAnimJoint63.center = new X3D.SFVec3f([0,1.323,-0.1155]);
let HAnimJoint64 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint64.DEF = "Joe_vt6";
HAnimJoint64.name = "vt6";
HAnimJoint64.center = new X3D.SFVec3f([0,1.352,-0.12]);
let HAnimJoint65 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint65.DEF = "Joe_vt5";
HAnimJoint65.name = "vt5";
HAnimJoint65.center = new X3D.SFVec3f([0,1.381,-0.1235]);
let HAnimJoint66 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint66.DEF = "Joe_vt4";
HAnimJoint66.name = "vt4";
HAnimJoint66.center = new X3D.SFVec3f([0,1.41,-0.1235]);
HAnimJoint66.skinCoordIndex = new X3D.MFInt32([81]);
HAnimJoint66.skinCoordWeight = new X3D.MFFloat([1]);
let HAnimJoint67 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint67.DEF = "Joe_vt3";
HAnimJoint67.name = "vt3";
HAnimJoint67.center = new X3D.SFVec3f([0,1.438,-0.12]);
let HAnimJoint68 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint68.DEF = "Joe_vt2";
HAnimJoint68.name = "vt2";
HAnimJoint68.center = new X3D.SFVec3f([0,1.468,-0.105]);
let HAnimJoint69 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint69.DEF = "Joe_vt1";
HAnimJoint69.name = "vt1";
HAnimJoint69.center = new X3D.SFVec3f([0,1.497,-0.09]);
HAnimJoint69.skinCoordIndex = new X3D.MFInt32([11,24]);
HAnimJoint69.skinCoordWeight = new X3D.MFFloat([1,1]);
let HAnimJoint70 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint70.DEF = "Joe_vc7";
HAnimJoint70.name = "vc7";
HAnimJoint70.center = new X3D.SFVec3f([0,1.525,-0.072]);
HAnimJoint70.skinCoordIndex = new X3D.MFInt32([74,75]);
HAnimJoint70.skinCoordWeight = new X3D.MFFloat([1,1]);
let HAnimJoint71 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint71.DEF = "Joe_vc6";
HAnimJoint71.name = "vc6";
HAnimJoint71.center = new X3D.SFVec3f([0,1.54,-0.05]);
let HAnimJoint72 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint72.DEF = "Joe_vc5";
HAnimJoint72.name = "vc5";
HAnimJoint72.center = new X3D.SFVec3f([0,1.552,-0.035]);
let HAnimJoint73 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint73.DEF = "Joe_vc4";
HAnimJoint73.name = "vc4";
HAnimJoint73.rotation = new X3D.SFRotation([0.79363313197937,0,0.608396623778117,0.509491241300095]);
HAnimJoint73.center = new X3D.SFVec3f([0,1.5675,-0.0256]);
let HAnimJoint74 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint74.DEF = "Joe_vc3";
HAnimJoint74.name = "vc3";
HAnimJoint74.center = new X3D.SFVec3f([0,1.58225,-0.0185]);
let HAnimJoint75 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint75.DEF = "Joe_vc2";
HAnimJoint75.name = "vc2";
HAnimJoint75.center = new X3D.SFVec3f([0,1.595,-0.0175]);
let HAnimJoint76 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint76.DEF = "Joe_vc1";
HAnimJoint76.name = "vc1";
HAnimJoint76.center = new X3D.SFVec3f([0,1.61,-0.015]);
let HAnimJoint77 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint77.DEF = "Joe_skullbase";
HAnimJoint77.name = "skullbase";
HAnimJoint77.rotation = new X3D.SFRotation([0,0.999999999999988,0,0.244155538082126]);
HAnimJoint77.center = new X3D.SFVec3f([0,1.63,-0.01]);
HAnimJoint77.skinCoordIndex = new X3D.MFInt32([0,1,2,3,4,5,6,7,8,9]);
HAnimJoint77.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1,1]);
let HAnimDisplacer78 = browser.currentScene.createNode("HAnimDisplacer");
HAnimDisplacer78.DEF = "Joe_skull_tip_raiser_action";
HAnimDisplacer78.name = "skull_tip_raiser_action";
HAnimDisplacer78.weight = 0.7399469;
HAnimDisplacer78.coordIndex = new X3D.MFInt32([0,1,2,3,4,5,6,7,8,9]);
HAnimDisplacer78.displacements = new X3D.MFVec3f([0,0.15,0,0,0,0.15,-0.1,0,0.15,0.1,0,0.05,0,-0.02,0.05,-0.15,0,0,-0.05,0,0,0.15,0,0,0.05,0,0,0,0,-0.15]);
HAnimJoint77YYY.displacers = new X3D.MFNode();

HAnimJoint77ZZZ.displacers[0] = HAnimDisplacer78;

let HAnimJoint79 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint79.DEF = "Joe_l_eyelid_joint";
HAnimJoint79.name = "l_eyelid_joint";
HAnimJoint79.center = new X3D.SFVec3f([0.034,1.659,0.06]);
HAnimJoint77ZZZ.children[1] = HAnimJoint79;

let HAnimJoint80 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint80.DEF = "Joe_l_eyeball_joint";
HAnimJoint80.name = "l_eyeball_joint";
HAnimJoint80.center = new X3D.SFVec3f([0.034,1.659,0.06]);
HAnimJoint77ZZZ.children[2] = HAnimJoint80;

let HAnimJoint81 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint81.DEF = "Joe_l_eyebrow_joint";
HAnimJoint81.name = "l_eyebrow_joint";
HAnimJoint81.center = new X3D.SFVec3f([0.034,1.659,0.06]);
HAnimJoint77ZZZ.children[3] = HAnimJoint81;

let HAnimJoint82 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint82.DEF = "Joe_r_eyelid_joint";
HAnimJoint82.name = "r_eyelid_joint";
HAnimJoint82.center = new X3D.SFVec3f([-0.034,1.659,0.06]);
HAnimJoint77ZZZ.children[4] = HAnimJoint82;

let HAnimJoint83 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint83.DEF = "Joe_r_eyeball_joint";
HAnimJoint83.name = "r_eyeball_joint";
HAnimJoint83.center = new X3D.SFVec3f([-0.034,1.659,0.06]);
HAnimJoint77ZZZ.children[5] = HAnimJoint83;

let HAnimJoint84 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint84.DEF = "Joe_r_eyebrow_joint";
HAnimJoint84.name = "r_eyebrow_joint";
HAnimJoint84.center = new X3D.SFVec3f([-0.034,1.659,0.06]);
HAnimJoint77ZZZ.children[6] = HAnimJoint84;

let HAnimJoint85 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint85.DEF = "Joe_temporomandibular";
HAnimJoint85.name = "temporomandibular";
HAnimJoint85.center = new X3D.SFVec3f([0.034,1.659,0.06]);
HAnimJoint77ZZZ.children[7] = HAnimJoint85;

HAnimJoint76YYY.children = new X3D.MFNode();

HAnimJoint76ZZZ.children[0] = HAnimJoint77;

HAnimJoint75YYY.children = new X3D.MFNode();

HAnimJoint75ZZZ.children[0] = HAnimJoint76;

HAnimJoint74YYY.children = new X3D.MFNode();

HAnimJoint74ZZZ.children[0] = HAnimJoint75;

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

let HAnimJoint86 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint86.DEF = "Joe_l_acromioclavicular";
HAnimJoint86.name = "l_acromioclavicular";
HAnimJoint86.center = new X3D.SFVec3f([0.082,1.4488,-0.0353]);
HAnimJoint86.skinCoordIndex = new X3D.MFInt32([12]);
HAnimJoint86.skinCoordWeight = new X3D.MFFloat([1]);
let HAnimJoint87 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint87.DEF = "Joe_l_sternoclavicular";
HAnimJoint87.name = "l_sternoclavicular";
HAnimJoint87.center = new X3D.SFVec3f([0.0962,1.4269,-0.0424]);
HAnimJoint87.skinCoordIndex = new X3D.MFInt32([79]);
HAnimJoint87.skinCoordWeight = new X3D.MFFloat([1]);
let HAnimJoint88 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint88.DEF = "Joe_l_shoulder";
HAnimJoint88.name = "l_shoulder";
HAnimJoint88.rotation = new X3D.SFRotation([-0.643733224193946,0,0.765249982730394,1.6862643538567]);
HAnimJoint88.center = new X3D.SFVec3f([0.2,1.44,-0.04]);
HAnimJoint88.skinCoordIndex = new X3D.MFInt32([41,42,44,80,102,103,104,105]);
HAnimJoint88.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimJoint89 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint89.DEF = "Joe_l_elbow";
HAnimJoint89.name = "l_elbow";
HAnimJoint89.rotation = new X3D.SFRotation([-0.80893714343502,-0.587895141986384,0,0.512375525586369]);
HAnimJoint89.center = new X3D.SFVec3f([0.2,1.1388,-0.04]);
HAnimJoint89.skinCoordIndex = new X3D.MFInt32([45,46,47,109,110,111,112,113,115,116,117,118]);
HAnimJoint89.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
let HAnimJoint90 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint90.DEF = "Joe_l_radiocarpal";
HAnimJoint90.name = "l_radiocarpal";
HAnimJoint90.rotation = new X3D.SFRotation([0,-0.447213595499958,0.894427190999917,0.491420745338246]);
HAnimJoint90.center = new X3D.SFVec3f([0.2,0.87,-0.04]);
HAnimJoint90.skinCoordIndex = new X3D.MFInt32([119,120,121,122,123,124,125,126]);
HAnimJoint90.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimJoint91 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint91.DEF = "Joe_l_carpometacarpal_1";
HAnimJoint91.name = "l_carpometacarpal_1";
HAnimJoint91.center = new X3D.SFVec3f([0.1924,0.8472,-0.0534]);
HAnimJoint91.skinCoordIndex = new X3D.MFInt32([127,128]);
HAnimJoint91.skinCoordWeight = new X3D.MFFloat([1,1]);
let HAnimJoint92 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint92.DEF = "Joe_l_metacarpophalangeal_1";
HAnimJoint92.name = "l_metacarpophalangeal_1";
HAnimJoint92.center = new X3D.SFVec3f([0.1951,0.8226,0.0246]);
HAnimJoint92.skinCoordIndex = new X3D.MFInt32([138,139,140,141,142,143]);
HAnimJoint92.skinCoordWeight = new X3D.MFFloat([0.5,0.5,0.5,1,1,1]);
let HAnimJoint93 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint93.DEF = "Joe_l_carpal_interphalangeal_1";
HAnimJoint93.name = "l_carpal_interphalangeal_1";
HAnimJoint93.center = new X3D.SFVec3f([0.1955,0.8159,0.0464]);
HAnimJoint93.skinCoordIndex = new X3D.MFInt32([144,145,146,147,148,149,150,151,152]);
HAnimJoint93.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
HAnimJoint92YYY.children = new X3D.MFNode();

HAnimJoint92ZZZ.children[0] = HAnimJoint93;

HAnimJoint91YYY.children = new X3D.MFNode();

HAnimJoint91ZZZ.children[0] = HAnimJoint92;

HAnimJoint90YYY.children = new X3D.MFNode();

HAnimJoint90ZZZ.children[0] = HAnimJoint91;

let HAnimJoint94 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint94.DEF = "Joe_l_carpometacarpal_2";
HAnimJoint94.name = "l_carpometacarpal_2";
HAnimJoint94.center = new X3D.SFVec3f([0.1983,0.8024,-0.028]);
HAnimJoint94.skinCoordIndex = new X3D.MFInt32([129,130]);
HAnimJoint94.skinCoordWeight = new X3D.MFFloat([1,1]);
let HAnimJoint95 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint95.DEF = "Joe_l_metacarpophalangeal_2";
HAnimJoint95.name = "l_metacarpophalangeal_2";
HAnimJoint95.center = new X3D.SFVec3f([0.1983,0.7815,-0.028]);
HAnimJoint95.skinCoordIndex = new X3D.MFInt32([138,139,140,153,154,155,163]);
HAnimJoint95.skinCoordWeight = new X3D.MFFloat([0.5,0.5,0.5,1,1,1,0.5]);
let HAnimJoint96 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint96.DEF = "Joe_l_carpal_proximal_interphalangeal_2";
HAnimJoint96.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint96.center = new X3D.SFVec3f([0.2017,0.7363,-0.0248]);
HAnimJoint96.skinCoordIndex = new X3D.MFInt32([166,167,168,169]);
HAnimJoint96.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimJoint97 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint97.DEF = "Joe_l_carpal_distal_interphalangeal_2";
HAnimJoint97.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint97.center = new X3D.SFVec3f([0.2028,0.7139,-0.0236]);
HAnimJoint97.skinCoordIndex = new X3D.MFInt32([170,171,172,173,174,175,176,177,178]);
HAnimJoint97.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
HAnimJoint96YYY.children = new X3D.MFNode();

HAnimJoint96ZZZ.children[0] = HAnimJoint97;

HAnimJoint95YYY.children = new X3D.MFNode();

HAnimJoint95ZZZ.children[0] = HAnimJoint96;

HAnimJoint94YYY.children = new X3D.MFNode();

HAnimJoint94ZZZ.children[0] = HAnimJoint95;

HAnimJoint90ZZZ.children[1] = HAnimJoint94;

let HAnimJoint98 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint98.DEF = "Joe_l_carpometacarpal_3";
HAnimJoint98.name = "l_carpometacarpal_3";
HAnimJoint98.center = new X3D.SFVec3f([0.1987,0.8029,-0.053]);
HAnimJoint98.skinCoordIndex = new X3D.MFInt32([131,132]);
HAnimJoint98.skinCoordWeight = new X3D.MFFloat([1,1]);
let HAnimJoint99 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint99.DEF = "Joe_l_metacarpophalangeal_3";
HAnimJoint99.name = "l_metacarpophalangeal_3";
HAnimJoint99.center = new X3D.SFVec3f([0.1987,0.7818,-0.053]);
HAnimJoint99.skinCoordIndex = new X3D.MFInt32([156,157,163,164]);
HAnimJoint99.skinCoordWeight = new X3D.MFFloat([1,1,0.5,0.5]);
let HAnimJoint100 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint100.DEF = "Joe_l_carpal_proximal_interphalangeal_3";
HAnimJoint100.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint100.center = new X3D.SFVec3f([0.2013,0.7273,-0.0503]);
HAnimJoint100.skinCoordIndex = new X3D.MFInt32([179,180,181,182]);
HAnimJoint100.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimJoint101 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint101.DEF = "Joe_l_carpal_distal_interphalangeal_3";
HAnimJoint101.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint101.center = new X3D.SFVec3f([0.2026,0.7011,-0.0494]);
HAnimJoint101.skinCoordIndex = new X3D.MFInt32([183,184,185,186,187,188,189,190,191]);
HAnimJoint101.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
HAnimJoint100YYY.children = new X3D.MFNode();

HAnimJoint100ZZZ.children[0] = HAnimJoint101;

HAnimJoint99YYY.children = new X3D.MFNode();

HAnimJoint99ZZZ.children[0] = HAnimJoint100;

HAnimJoint98YYY.children = new X3D.MFNode();

HAnimJoint98ZZZ.children[0] = HAnimJoint99;

HAnimJoint90ZZZ.children[2] = HAnimJoint98;

let HAnimJoint102 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint102.DEF = "Joe_l_carpometacarpal_4";
HAnimJoint102.name = "l_carpometacarpal_4";
HAnimJoint102.center = new X3D.SFVec3f([0.1956,0.8019,-0.0794]);
HAnimJoint102.skinCoordIndex = new X3D.MFInt32([133,134]);
HAnimJoint102.skinCoordWeight = new X3D.MFFloat([1,1]);
let HAnimJoint103 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint103.DEF = "Joe_l_metacarpophalangeal_4";
HAnimJoint103.name = "l_metacarpophalangeal_4";
HAnimJoint103.center = new X3D.SFVec3f([0.1956,0.7815,-0.0794]);
HAnimJoint103.skinCoordIndex = new X3D.MFInt32([158,159,164,165]);
HAnimJoint103.skinCoordWeight = new X3D.MFFloat([1,1,0.5,0.5]);
let HAnimJoint104 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint104.DEF = "Joe_l_carpal_proximal_interphalangeal_4";
HAnimJoint104.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint104.center = new X3D.SFVec3f([0.1973,0.7287,-0.0777]);
HAnimJoint104.skinCoordIndex = new X3D.MFInt32([192,193,194,195]);
HAnimJoint104.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimJoint105 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint105.DEF = "Joe_l_carpal_distal_interphalangeal_4";
HAnimJoint105.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint105.center = new X3D.SFVec3f([0.1983,0.7045,-0.0767]);
HAnimJoint105.skinCoordIndex = new X3D.MFInt32([196,197,198,199,200,201,202,203,204]);
HAnimJoint105.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
HAnimJoint104YYY.children = new X3D.MFNode();

HAnimJoint104ZZZ.children[0] = HAnimJoint105;

HAnimJoint103YYY.children = new X3D.MFNode();

HAnimJoint103ZZZ.children[0] = HAnimJoint104;

HAnimJoint102YYY.children = new X3D.MFNode();

HAnimJoint102ZZZ.children[0] = HAnimJoint103;

HAnimJoint90ZZZ.children[3] = HAnimJoint102;

let HAnimJoint106 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint106.DEF = "Joe_l_carpometacarpal_5";
HAnimJoint106.name = "l_carpometacarpal_5";
HAnimJoint106.center = new X3D.SFVec3f([0.1925,0.8066,-0.1036]);
HAnimJoint106.skinCoordIndex = new X3D.MFInt32([135,136,137,165]);
HAnimJoint106.skinCoordWeight = new X3D.MFFloat([1,1,1,0.5]);
let HAnimJoint107 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint107.DEF = "Joe_l_metacarpophalangeal_5";
HAnimJoint107.name = "l_metacarpophalangeal_5";
HAnimJoint107.center = new X3D.SFVec3f([0.1925,0.7866,-0.1036]);
HAnimJoint107.skinCoordIndex = new X3D.MFInt32([160,161,162]);
HAnimJoint107.skinCoordWeight = new X3D.MFFloat([1,1,1]);
let HAnimJoint108 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint108.DEF = "Joe_l_carpal_proximal_interphalangeal_5";
HAnimJoint108.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint108.center = new X3D.SFVec3f([0.1938,0.7452,-0.1024]);
HAnimJoint108.skinCoordIndex = new X3D.MFInt32([205,206,207,208]);
HAnimJoint108.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimJoint109 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint109.DEF = "Joe_l_carpal_distal_interphalangeal_5";
HAnimJoint109.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint109.center = new X3D.SFVec3f([0.1948,0.7277,-0.1017]);
HAnimJoint109.skinCoordIndex = new X3D.MFInt32([209,210,211,212,213,214,215,216,217]);
HAnimJoint109.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
HAnimJoint108YYY.children = new X3D.MFNode();

HAnimJoint108ZZZ.children[0] = HAnimJoint109;

HAnimJoint107YYY.children = new X3D.MFNode();

HAnimJoint107ZZZ.children[0] = HAnimJoint108;

HAnimJoint106YYY.children = new X3D.MFNode();

HAnimJoint106ZZZ.children[0] = HAnimJoint107;

HAnimJoint90ZZZ.children[4] = HAnimJoint106;

HAnimJoint89YYY.children = new X3D.MFNode();

HAnimJoint89ZZZ.children[0] = HAnimJoint90;

HAnimJoint88YYY.children = new X3D.MFNode();

HAnimJoint88ZZZ.children[0] = HAnimJoint89;

HAnimJoint87YYY.children = new X3D.MFNode();

HAnimJoint87ZZZ.children[0] = HAnimJoint88;

HAnimJoint86YYY.children = new X3D.MFNode();

HAnimJoint86ZZZ.children[0] = HAnimJoint87;

HAnimJoint69ZZZ.children[1] = HAnimJoint86;

let HAnimJoint110 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint110.DEF = "Joe_r_sternoclavicular";
HAnimJoint110.name = "r_sternoclavicular";
HAnimJoint110.center = new X3D.SFVec3f([-0.03,1.46,0]);
HAnimJoint110.skinCoordIndex = new X3D.MFInt32([10]);
HAnimJoint110.skinCoordWeight = new X3D.MFFloat([1]);
let HAnimJoint111 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint111.DEF = "Joe_r_acromioclavicular";
HAnimJoint111.name = "r_acromioclavicular";
HAnimJoint111.center = new X3D.SFVec3f([-0.09,1.41,-0.11]);
HAnimJoint111.skinCoordIndex = new X3D.MFInt32([77,29]);
HAnimJoint111.skinCoordWeight = new X3D.MFFloat([1,0.9]);
let HAnimJoint112 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint112.DEF = "Joe_r_shoulder";
HAnimJoint112.name = "r_shoulder";
HAnimJoint112.rotation = new X3D.SFRotation([0,0,-1,1.7121984064579]);
HAnimJoint112.center = new X3D.SFVec3f([-0.2,1.44,-0.04]);
HAnimJoint112.skinCoordIndex = new X3D.MFInt32([29,30,32,78,218,219,220,221,86,88]);
HAnimJoint112.skinCoordWeight = new X3D.MFFloat([0.1,1,1,1,1,1,1,1,0.3,0.2]);
let HAnimJoint113 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint113.DEF = "Joe_r_elbow";
HAnimJoint113.name = "r_elbow";
HAnimJoint113.rotation = new X3D.SFRotation([-0.80893714343502,-0.587895141986384,0,0.512375525586369]);
HAnimJoint113.center = new X3D.SFVec3f([-0.2,1.1388,-0.04]);
HAnimJoint113.skinCoordIndex = new X3D.MFInt32([33,34,35,225,226,227,228,229,231,232,233,234]);
HAnimJoint113.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1,1,1,1]);
let HAnimJoint114 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint114.DEF = "Joe_r_radiocarpal";
HAnimJoint114.name = "r_radiocarpal";
HAnimJoint114.rotation = new X3D.SFRotation([0,-0.670839596599646,-0.741602478174135,0.341691938879626]);
HAnimJoint114.center = new X3D.SFVec3f([-0.2,0.89,-0.04]);
HAnimJoint114.skinCoordIndex = new X3D.MFInt32([235,236,237,238,239,240,241,242]);
HAnimJoint114.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimJoint115 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint115.DEF = "Joe_r_carpometacarpal_1";
HAnimJoint115.name = "r_carpometacarpal_1";
HAnimJoint115.center = new X3D.SFVec3f([-0.2,0.85,0]);
HAnimJoint115.skinCoordIndex = new X3D.MFInt32([243,244]);
HAnimJoint115.skinCoordWeight = new X3D.MFFloat([1,1]);
let HAnimJoint116 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint116.DEF = "Joe_r_metacarpophalangeal_1";
HAnimJoint116.name = "r_metacarpophalangeal_1";
HAnimJoint116.center = new X3D.SFVec3f([-0.2,0.82,0.03]);
HAnimJoint116.skinCoordIndex = new X3D.MFInt32([254,255,256,257,258,259]);
HAnimJoint116.skinCoordWeight = new X3D.MFFloat([0.5,0.5,0.5,1,1,1]);
let HAnimJoint117 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint117.DEF = "Joe_r_carpal_interphalangeal_1";
HAnimJoint117.name = "r_carpal_interphalangeal_1";
HAnimJoint117.center = new X3D.SFVec3f([-0.2,0.8,0.05]);
HAnimJoint117.skinCoordIndex = new X3D.MFInt32([260,261,262,263,264,265,266,267,268]);
HAnimJoint117.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
HAnimJoint116YYY.children = new X3D.MFNode();

HAnimJoint116ZZZ.children[0] = HAnimJoint117;

HAnimJoint115YYY.children = new X3D.MFNode();

HAnimJoint115ZZZ.children[0] = HAnimJoint116;

HAnimJoint114YYY.children = new X3D.MFNode();

HAnimJoint114ZZZ.children[0] = HAnimJoint115;

let HAnimJoint118 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint118.DEF = "Joe_r_carpometacarpal_2";
HAnimJoint118.name = "r_carpometacarpal_2";
HAnimJoint118.rotation = new X3D.SFRotation([0,0,1,0.302412748336791]);
HAnimJoint118.center = new X3D.SFVec3f([-0.2,0.84,-0.015]);
HAnimJoint118.skinCoordIndex = new X3D.MFInt32([245,246]);
HAnimJoint118.skinCoordWeight = new X3D.MFFloat([1,1]);
let HAnimJoint119 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint119.DEF = "Joe_r_metacarpophalangeal_2";
HAnimJoint119.name = "r_metacarpophalangeal_2";
HAnimJoint119.rotation = new X3D.SFRotation([0,0,1,0.453619122505188]);
HAnimJoint119.center = new X3D.SFVec3f([-0.2,0.793,-0.015]);
HAnimJoint119.skinCoordIndex = new X3D.MFInt32([254,255,256,269,270,271,279]);
HAnimJoint119.skinCoordWeight = new X3D.MFFloat([0.5,0.5,0.5,1,1,1,0.5]);
let HAnimJoint120 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint120.DEF = "Joe_r_carpal_proximal_interphalangeal_2";
HAnimJoint120.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint120.rotation = new X3D.SFRotation([0,0,1,0.453619122505188]);
HAnimJoint120.center = new X3D.SFVec3f([-0.2,0.745,-0.015]);
HAnimJoint120.skinCoordIndex = new X3D.MFInt32([282,283,284,285]);
HAnimJoint120.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimJoint121 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint121.DEF = "Joe_r_carpal_distal_interphalangeal_2";
HAnimJoint121.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint121.rotation = new X3D.SFRotation([0,0,1,0.453619122505188]);
HAnimJoint121.center = new X3D.SFVec3f([-0.2,0.72,-0.015]);
HAnimJoint121.skinCoordIndex = new X3D.MFInt32([286,287,288,289,290,291,292,293,294]);
HAnimJoint121.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
HAnimJoint120YYY.children = new X3D.MFNode();

HAnimJoint120ZZZ.children[0] = HAnimJoint121;

HAnimJoint119YYY.children = new X3D.MFNode();

HAnimJoint119ZZZ.children[0] = HAnimJoint120;

HAnimJoint118YYY.children = new X3D.MFNode();

HAnimJoint118ZZZ.children[0] = HAnimJoint119;

HAnimJoint114ZZZ.children[1] = HAnimJoint118;

let HAnimJoint122 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint122.DEF = "Joe_r_carpometacarpal_3";
HAnimJoint122.name = "r_carpometacarpal_3";
HAnimJoint122.rotation = new X3D.SFRotation([0,0,1,0.302412748336791]);
HAnimJoint122.center = new X3D.SFVec3f([-0.2,0.835,-0.04]);
HAnimJoint122.skinCoordIndex = new X3D.MFInt32([247,248]);
HAnimJoint122.skinCoordWeight = new X3D.MFFloat([1,1]);
let HAnimJoint123 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint123.DEF = "Joe_r_metacarpophalangeal_3";
HAnimJoint123.name = "r_metacarpophalangeal_3";
HAnimJoint123.rotation = new X3D.SFRotation([0,0,1,0.453619122505188]);
HAnimJoint123.center = new X3D.SFVec3f([-0.2,0.788,-0.04]);
HAnimJoint123.skinCoordIndex = new X3D.MFInt32([272,273,279,280]);
HAnimJoint123.skinCoordWeight = new X3D.MFFloat([1,1,0.5,0.5]);
let HAnimJoint124 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint124.DEF = "Joe_r_carpal_proximal_interphalangeal_3";
HAnimJoint124.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint124.rotation = new X3D.SFRotation([0,0,1,0.453619122505188]);
HAnimJoint124.center = new X3D.SFVec3f([-0.2,0.74,-0.04]);
HAnimJoint124.skinCoordIndex = new X3D.MFInt32([295,296,297,298]);
HAnimJoint124.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimJoint125 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint125.DEF = "Joe_r_carpal_distal_interphalangeal_3";
HAnimJoint125.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint125.rotation = new X3D.SFRotation([0,0,1,0.453619122505188]);
HAnimJoint125.center = new X3D.SFVec3f([-0.2,0.7142,-0.04]);
HAnimJoint125.skinCoordIndex = new X3D.MFInt32([299,300,301,302,303,304,305,306,307]);
HAnimJoint125.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
HAnimJoint124YYY.children = new X3D.MFNode();

HAnimJoint124ZZZ.children[0] = HAnimJoint125;

HAnimJoint123YYY.children = new X3D.MFNode();

HAnimJoint123ZZZ.children[0] = HAnimJoint124;

HAnimJoint122YYY.children = new X3D.MFNode();

HAnimJoint122ZZZ.children[0] = HAnimJoint123;

HAnimJoint114ZZZ.children[2] = HAnimJoint122;

let HAnimJoint126 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint126.DEF = "Joe_r_carpometacarpal_4";
HAnimJoint126.name = "r_carpometacarpal_4";
HAnimJoint126.rotation = new X3D.SFRotation([0,0,1,0.302412748336791]);
HAnimJoint126.center = new X3D.SFVec3f([-0.2,0.835,-0.065]);
HAnimJoint126.skinCoordIndex = new X3D.MFInt32([249,250]);
HAnimJoint126.skinCoordWeight = new X3D.MFFloat([1,1]);
let HAnimJoint127 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint127.DEF = "Joe_r_metacarpophalangeal_4";
HAnimJoint127.name = "r_metacarpophalangeal_4";
HAnimJoint127.rotation = new X3D.SFRotation([0,0,1,0.453619122505188]);
HAnimJoint127.center = new X3D.SFVec3f([-0.2,0.793,-0.065]);
HAnimJoint127.skinCoordIndex = new X3D.MFInt32([274,275,280,281]);
HAnimJoint127.skinCoordWeight = new X3D.MFFloat([1,1,0.5,0.5]);
let HAnimJoint128 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint128.DEF = "Joe_r_carpal_proximal_interphalangeal_4";
HAnimJoint128.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint128.rotation = new X3D.SFRotation([0,0,1,0.453619122505188]);
HAnimJoint128.center = new X3D.SFVec3f([-0.2,0.74,-0.065]);
HAnimJoint128.skinCoordIndex = new X3D.MFInt32([308,309,310,311]);
HAnimJoint128.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimJoint129 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint129.DEF = "Joe_r_carpal_distal_interphalangeal_4";
HAnimJoint129.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint129.rotation = new X3D.SFRotation([0,0,1,0.453619122505188]);
HAnimJoint129.center = new X3D.SFVec3f([-0.2,0.7177,-0.065]);
HAnimJoint129.skinCoordIndex = new X3D.MFInt32([312,313,314,315,316,317,318,319,320]);
HAnimJoint129.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
HAnimJoint128YYY.children = new X3D.MFNode();

HAnimJoint128ZZZ.children[0] = HAnimJoint129;

HAnimJoint127YYY.children = new X3D.MFNode();

HAnimJoint127ZZZ.children[0] = HAnimJoint128;

HAnimJoint126YYY.children = new X3D.MFNode();

HAnimJoint126ZZZ.children[0] = HAnimJoint127;

HAnimJoint114ZZZ.children[3] = HAnimJoint126;

let HAnimJoint130 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint130.DEF = "Joe_r_carpometacarpal_5";
HAnimJoint130.name = "r_carpometacarpal_5";
HAnimJoint130.rotation = new X3D.SFRotation([0,0,1,0.302412748336791]);
HAnimJoint130.center = new X3D.SFVec3f([-0.2,0.84,-0.085]);
HAnimJoint130.skinCoordIndex = new X3D.MFInt32([251,252,253,281]);
HAnimJoint130.skinCoordWeight = new X3D.MFFloat([1,1,1,0.5]);
let HAnimJoint131 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint131.DEF = "Joe_r_metacarpophalangeal_5";
HAnimJoint131.name = "r_metacarpophalangeal_5";
HAnimJoint131.rotation = new X3D.SFRotation([0,0,1,0.453619122505188]);
HAnimJoint131.center = new X3D.SFVec3f([-0.2,0.79,-0.085]);
HAnimJoint131.skinCoordIndex = new X3D.MFInt32([276,277,278]);
HAnimJoint131.skinCoordWeight = new X3D.MFFloat([1,1,1]);
let HAnimJoint132 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint132.DEF = "Joe_r_carpal_proximal_interphalangeal_5";
HAnimJoint132.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint132.rotation = new X3D.SFRotation([0,0,1,0.453619122505188]);
HAnimJoint132.center = new X3D.SFVec3f([-0.2,0.755,-0.085]);
HAnimJoint132.skinCoordIndex = new X3D.MFInt32([321,322,323,324]);
HAnimJoint132.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimJoint133 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint133.DEF = "Joe_r_carpal_distal_interphalangeal_5";
HAnimJoint133.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint133.rotation = new X3D.SFRotation([0,0,1,0.453619122505188]);
HAnimJoint133.center = new X3D.SFVec3f([-0.2,0.735,-0.09]);
HAnimJoint133.skinCoordIndex = new X3D.MFInt32([325,326,327,328,329,330,331,332,333]);
HAnimJoint133.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
HAnimJoint132YYY.children = new X3D.MFNode();

HAnimJoint132ZZZ.children[0] = HAnimJoint133;

HAnimJoint131YYY.children = new X3D.MFNode();

HAnimJoint131ZZZ.children[0] = HAnimJoint132;

HAnimJoint130YYY.children = new X3D.MFNode();

HAnimJoint130ZZZ.children[0] = HAnimJoint131;

HAnimJoint114ZZZ.children[4] = HAnimJoint130;

HAnimJoint113YYY.children = new X3D.MFNode();

HAnimJoint113ZZZ.children[0] = HAnimJoint114;

HAnimJoint112YYY.children = new X3D.MFNode();

HAnimJoint112ZZZ.children[0] = HAnimJoint113;

HAnimJoint111YYY.children = new X3D.MFNode();

HAnimJoint111ZZZ.children[0] = HAnimJoint112;

HAnimJoint110YYY.children = new X3D.MFNode();

HAnimJoint110ZZZ.children[0] = HAnimJoint111;

HAnimJoint69ZZZ.children[2] = HAnimJoint110;

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

HAnimJoint31ZZZ.children[2] = HAnimJoint53;

joints[1] = HAnimJoint31;

let HAnimJoint134 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint134.USE = "Joe_humanoid_root";
joints[2] = HAnimJoint134;

let HAnimJoint135 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint135.USE = "Joe_sacroiliac";
joints[3] = HAnimJoint135;

let HAnimJoint136 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint136.USE = "Joe_skullbase";
joints[4] = HAnimJoint136;

let HAnimJoint137 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint137.USE = "Joe_temporomandibular";
joints[5] = HAnimJoint137;

let HAnimJoint138 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint138.USE = "Joe_vc1";
joints[6] = HAnimJoint138;

let HAnimJoint139 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint139.USE = "Joe_vc2";
joints[7] = HAnimJoint139;

let HAnimJoint140 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint140.USE = "Joe_vc3";
joints[8] = HAnimJoint140;

let HAnimJoint141 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint141.USE = "Joe_vc4";
joints[9] = HAnimJoint141;

let HAnimJoint142 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint142.USE = "Joe_vc5";
joints[10] = HAnimJoint142;

let HAnimJoint143 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint143.USE = "Joe_vc6";
joints[11] = HAnimJoint143;

let HAnimJoint144 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint144.USE = "Joe_vc7";
joints[12] = HAnimJoint144;

let HAnimJoint145 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint145.USE = "Joe_vl1";
joints[13] = HAnimJoint145;

let HAnimJoint146 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint146.USE = "Joe_vl2";
joints[14] = HAnimJoint146;

let HAnimJoint147 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint147.USE = "Joe_vl3";
joints[15] = HAnimJoint147;

let HAnimJoint148 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint148.USE = "Joe_vl4";
joints[16] = HAnimJoint148;

let HAnimJoint149 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint149.USE = "Joe_vl5";
joints[17] = HAnimJoint149;

let HAnimJoint150 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint150.USE = "Joe_vt1";
joints[18] = HAnimJoint150;

let HAnimJoint151 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint151.USE = "Joe_vt10";
joints[19] = HAnimJoint151;

let HAnimJoint152 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint152.USE = "Joe_vt11";
joints[20] = HAnimJoint152;

let HAnimJoint153 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint153.USE = "Joe_vt12";
joints[21] = HAnimJoint153;

let HAnimJoint154 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint154.USE = "Joe_vt2";
joints[22] = HAnimJoint154;

let HAnimJoint155 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint155.USE = "Joe_vt3";
joints[23] = HAnimJoint155;

let HAnimJoint156 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint156.USE = "Joe_vt4";
joints[24] = HAnimJoint156;

let HAnimJoint157 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint157.USE = "Joe_vt5";
joints[25] = HAnimJoint157;

let HAnimJoint158 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint158.USE = "Joe_vt6";
joints[26] = HAnimJoint158;

let HAnimJoint159 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint159.USE = "Joe_vt7";
joints[27] = HAnimJoint159;

let HAnimJoint160 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint160.USE = "Joe_vt8";
joints[28] = HAnimJoint160;

let HAnimJoint161 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint161.USE = "Joe_vt9";
joints[29] = HAnimJoint161;

let HAnimJoint162 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint162.USE = "Joe_l_acromioclavicular";
joints[30] = HAnimJoint162;

let HAnimJoint163 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint163.USE = "Joe_r_acromioclavicular";
joints[31] = HAnimJoint163;

let HAnimJoint164 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint164.USE = "Joe_l_carpal_distal_interphalangeal_2";
joints[32] = HAnimJoint164;

let HAnimJoint165 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint165.USE = "Joe_r_carpal_distal_interphalangeal_2";
joints[33] = HAnimJoint165;

let HAnimJoint166 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint166.USE = "Joe_l_carpal_distal_interphalangeal_3";
joints[34] = HAnimJoint166;

let HAnimJoint167 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint167.USE = "Joe_r_carpal_distal_interphalangeal_3";
joints[35] = HAnimJoint167;

let HAnimJoint168 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint168.USE = "Joe_l_carpal_distal_interphalangeal_4";
joints[36] = HAnimJoint168;

let HAnimJoint169 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint169.USE = "Joe_r_carpal_distal_interphalangeal_4";
joints[37] = HAnimJoint169;

let HAnimJoint170 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint170.USE = "Joe_l_carpal_distal_interphalangeal_5";
joints[38] = HAnimJoint170;

let HAnimJoint171 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint171.USE = "Joe_r_carpal_distal_interphalangeal_5";
joints[39] = HAnimJoint171;

let HAnimJoint172 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint172.USE = "Joe_l_carpal_interphalangeal_1";
joints[40] = HAnimJoint172;

let HAnimJoint173 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint173.USE = "Joe_r_carpal_interphalangeal_1";
joints[41] = HAnimJoint173;

let HAnimJoint174 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint174.USE = "Joe_l_carpal_proximal_interphalangeal_2";
joints[42] = HAnimJoint174;

let HAnimJoint175 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint175.USE = "Joe_r_carpal_proximal_interphalangeal_2";
joints[43] = HAnimJoint175;

let HAnimJoint176 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint176.USE = "Joe_l_carpal_proximal_interphalangeal_3";
joints[44] = HAnimJoint176;

let HAnimJoint177 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint177.USE = "Joe_r_carpal_proximal_interphalangeal_3";
joints[45] = HAnimJoint177;

let HAnimJoint178 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint178.USE = "Joe_l_carpal_proximal_interphalangeal_4";
joints[46] = HAnimJoint178;

let HAnimJoint179 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint179.USE = "Joe_r_carpal_proximal_interphalangeal_4";
joints[47] = HAnimJoint179;

let HAnimJoint180 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint180.USE = "Joe_l_carpal_proximal_interphalangeal_5";
joints[48] = HAnimJoint180;

let HAnimJoint181 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint181.USE = "Joe_r_carpal_proximal_interphalangeal_5";
joints[49] = HAnimJoint181;

let HAnimJoint182 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint182.USE = "Joe_l_carpometacarpal_1";
joints[50] = HAnimJoint182;

let HAnimJoint183 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint183.USE = "Joe_r_carpometacarpal_1";
joints[51] = HAnimJoint183;

let HAnimJoint184 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint184.USE = "Joe_l_carpometacarpal_2";
joints[52] = HAnimJoint184;

let HAnimJoint185 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint185.USE = "Joe_r_carpometacarpal_2";
joints[53] = HAnimJoint185;

let HAnimJoint186 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint186.USE = "Joe_l_carpometacarpal_3";
joints[54] = HAnimJoint186;

let HAnimJoint187 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint187.USE = "Joe_r_carpometacarpal_3";
joints[55] = HAnimJoint187;

let HAnimJoint188 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint188.USE = "Joe_l_carpometacarpal_4";
joints[56] = HAnimJoint188;

let HAnimJoint189 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint189.USE = "Joe_r_carpometacarpal_4";
joints[57] = HAnimJoint189;

let HAnimJoint190 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint190.USE = "Joe_l_carpometacarpal_5";
joints[58] = HAnimJoint190;

let HAnimJoint191 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint191.USE = "Joe_r_carpometacarpal_5";
joints[59] = HAnimJoint191;

let HAnimJoint192 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint192.USE = "Joe_l_elbow";
joints[60] = HAnimJoint192;

let HAnimJoint193 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint193.USE = "Joe_r_elbow";
joints[61] = HAnimJoint193;

let HAnimJoint194 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint194.USE = "Joe_l_eyeball_joint";
joints[62] = HAnimJoint194;

let HAnimJoint195 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint195.USE = "Joe_r_eyeball_joint";
joints[63] = HAnimJoint195;

let HAnimJoint196 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint196.USE = "Joe_l_eyebrow_joint";
joints[64] = HAnimJoint196;

let HAnimJoint197 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint197.USE = "Joe_r_eyebrow_joint";
joints[65] = HAnimJoint197;

let HAnimJoint198 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint198.USE = "Joe_l_eyelid_joint";
joints[66] = HAnimJoint198;

let HAnimJoint199 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint199.USE = "Joe_r_eyelid_joint";
joints[67] = HAnimJoint199;

let HAnimJoint200 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint200.USE = "Joe_l_hip";
joints[68] = HAnimJoint200;

let HAnimJoint201 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint201.USE = "Joe_r_hip";
joints[69] = HAnimJoint201;

let HAnimJoint202 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint202.USE = "Joe_l_knee";
joints[70] = HAnimJoint202;

let HAnimJoint203 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint203.USE = "Joe_r_knee";
joints[71] = HAnimJoint203;

let HAnimJoint204 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint204.USE = "Joe_l_metacarpophalangeal_1";
joints[72] = HAnimJoint204;

let HAnimJoint205 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint205.USE = "Joe_r_metacarpophalangeal_1";
joints[73] = HAnimJoint205;

let HAnimJoint206 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint206.USE = "Joe_l_metacarpophalangeal_2";
joints[74] = HAnimJoint206;

let HAnimJoint207 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint207.USE = "Joe_r_metacarpophalangeal_2";
joints[75] = HAnimJoint207;

let HAnimJoint208 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint208.USE = "Joe_l_metacarpophalangeal_3";
joints[76] = HAnimJoint208;

let HAnimJoint209 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint209.USE = "Joe_r_metacarpophalangeal_3";
joints[77] = HAnimJoint209;

let HAnimJoint210 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint210.USE = "Joe_l_metacarpophalangeal_4";
joints[78] = HAnimJoint210;

let HAnimJoint211 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint211.USE = "Joe_r_metacarpophalangeal_4";
joints[79] = HAnimJoint211;

let HAnimJoint212 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint212.USE = "Joe_l_metacarpophalangeal_5";
joints[80] = HAnimJoint212;

let HAnimJoint213 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint213.USE = "Joe_r_metacarpophalangeal_5";
joints[81] = HAnimJoint213;

let HAnimJoint214 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint214.USE = "Joe_l_metatarsophalangeal_2";
joints[82] = HAnimJoint214;

let HAnimJoint215 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint215.USE = "Joe_r_metatarsophalangeal_2";
joints[83] = HAnimJoint215;

let HAnimJoint216 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint216.USE = "Joe_l_radiocarpal";
joints[84] = HAnimJoint216;

let HAnimJoint217 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint217.USE = "Joe_r_radiocarpal";
joints[85] = HAnimJoint217;

let HAnimJoint218 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint218.USE = "Joe_l_shoulder";
joints[86] = HAnimJoint218;

let HAnimJoint219 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint219.USE = "Joe_r_shoulder";
joints[87] = HAnimJoint219;

let HAnimJoint220 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint220.USE = "Joe_l_sternoclavicular";
joints[88] = HAnimJoint220;

let HAnimJoint221 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint221.USE = "Joe_r_sternoclavicular";
joints[89] = HAnimJoint221;

let HAnimJoint222 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint222.USE = "Joe_l_talocrural";
joints[90] = HAnimJoint222;

let HAnimJoint223 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint223.USE = "Joe_r_talocrural";
joints[91] = HAnimJoint223;

let HAnimJoint224 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint224.USE = "Joe_l_tarsal_distal_interphalangeal_2";
joints[92] = HAnimJoint224;

let HAnimJoint225 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint225.USE = "Joe_r_tarsal_distal_interphalangeal_2";
joints[93] = HAnimJoint225;

let HAnimJoint226 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint226.USE = "Joe_l_tarsometatarsal_2";
joints[94] = HAnimJoint226;

let HAnimJoint227 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint227.USE = "Joe_r_tarsometatarsal_2";
joints[95] = HAnimJoint227;

let HAnimSegment228 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment228.USE = "Joe_sacrum";
segments[96] = HAnimSegment228;

let HAnimSite229 = browser.currentScene.createNode("HAnimSite");
HAnimSite229.USE = "Joe_RootFront_view";
viewpoints[97] = HAnimSite229;

let Coordinate230 = browser.currentScene.createNode("Coordinate");
Coordinate230.DEF = "Joe_SkinCoord";
Coordinate230.point = new X3D.MFVec3f([0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.255,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168]);
skinCoord = Coordinate230;

let Shape231 = browser.currentScene.createNode("Shape");
Shape231.DEF = "Joe_Shape";
let Appearance232 = browser.currentScene.createNode("Appearance");
Appearance232.DEF = "Joe_skin_Appearance";
let Material233 = browser.currentScene.createNode("Material");
Material233.DEF = "Joe_skin_Material";
Material233.diffuseColor = new X3D.SFColor([0.3,0.3,0.6]);
Material233.emissiveColor = new X3D.SFColor([0.3,0.3,0.6]);
material = Material233;

let ImageTexture234 = browser.currentScene.createNode("ImageTexture");
ImageTexture234.DEF = "JoeSkinImageTexture";
ImageTexture234.url = new X3D.MFString([new X3D.SFString("JoeBodyTexture29.png"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JoeBodyTexture29.png")]);
texture = ImageTexture234;

let TextureTransform235 = browser.currentScene.createNode("TextureTransform");
TextureTransform235.DEF = "KickTextureTransform";
TextureTransform235.rotation = 0.7560319;
textureTransform = TextureTransform235;

appearance = Appearance232;

let IndexedFaceSet236 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet236.DEF = "Joe_skin_IndexedFaceSet";
IndexedFaceSet236.creaseAngle = 3.14;
IndexedFaceSet236.coordIndex = new X3D.MFInt32([0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]);
let TextureCoordinate237 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate237.point = new X3D.MFVec2f([0,0,0.5,0.5,0.5,0,0,0.5]);
texCoord = TextureCoordinate237;

let Coordinate238 = browser.currentScene.createNode("Coordinate");
Coordinate238.USE = "Joe_SkinCoord";
coord = Coordinate238;

geometry = IndexedFaceSet236;

skin[98] = Shape231;

Group27YYY.children = new X3D.MFNode();

Group27ZZZ.children[0] = HAnimHumanoid28;

browser.currentScene.children[10] = Group27;

let Group239 = browser.currentScene.createNode("Group");
let TimeSensor240 = browser.currentScene.createNode("TimeSensor");
TimeSensor240.DEF = "KickTimer";
TimeSensor240.cycleInterval = 3.73;
TimeSensor240.loop = True;
Group239YYY.children = new X3D.MFNode();

Group239ZZZ.children[0] = TimeSensor240;

let OrientationInterpolator241 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator241.DEF = "HumanoidRoot_RotationInterpolator";
OrientationInterpolator241.key = new X3D.MFFloat([0,0.1,0.4,0.6,1]);
OrientationInterpolator241.keyValue = new X3D.MFRotation([1,0,0,0.5,1,0,0,0.5,-1,0,0,0.1,-1,0,0,0.5,-1,0,0,0.5]);
Group239ZZZ.children[1] = OrientationInterpolator241;

let PositionInterpolator242 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator242.DEF = "HumanoidRoot_TranslationInterpolator";
PositionInterpolator242.key = new X3D.MFFloat([0,0.2,0.6,1]);
PositionInterpolator242.keyValue = new X3D.MFVec3f([1,0.3,-1,0.4,-0.04,-0.4,-0.18,0.1,0,-0.2,0.15,0.15]);
Group239ZZZ.children[2] = PositionInterpolator242;

let OrientationInterpolator243 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator243.DEF = "sacroiliac_RotationInterpolator";
OrientationInterpolator243.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator243.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[3] = OrientationInterpolator243;

let OrientationInterpolator244 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator244.DEF = "l_hip_RotationInterpolator";
OrientationInterpolator244.key = new X3D.MFFloat([0,0.1,0.3,0.45,1]);
OrientationInterpolator244.keyValue = new X3D.MFRotation([-1,0,0,1.5,-1,0,0,1,0,0,1,0,1,0,0,0.5,1,0,0,1]);
Group239ZZZ.children[4] = OrientationInterpolator244;

let OrientationInterpolator245 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator245.DEF = "l_knee_RotationInterpolator";
OrientationInterpolator245.key = new X3D.MFFloat([0,0.2,0.35,0.5,1]);
OrientationInterpolator245.keyValue = new X3D.MFRotation([1,0,0,1,0,0,1,0,0,0,1,0.2,1,0,1,0.5,1,0,0,1.4]);
Group239ZZZ.children[5] = OrientationInterpolator245;

let OrientationInterpolator246 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator246.DEF = "l_ankle_RotationInterpolator";
OrientationInterpolator246.key = new X3D.MFFloat([0,0.25,1]);
OrientationInterpolator246.keyValue = new X3D.MFRotation([-1,0,0,1,0,0,1,0,1,0,0,1]);
Group239ZZZ.children[6] = OrientationInterpolator246;

let OrientationInterpolator247 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator247.DEF = "l_subtalar_RotationInterpolator";
OrientationInterpolator247.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator247.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[7] = OrientationInterpolator247;

let OrientationInterpolator248 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator248.DEF = "l_midtarsal_RotationInterpolator";
OrientationInterpolator248.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator248.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[8] = OrientationInterpolator248;

let OrientationInterpolator249 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator249.DEF = "l_metatarsal_RotationInterpolator";
OrientationInterpolator249.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator249.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[9] = OrientationInterpolator249;

let OrientationInterpolator250 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator250.DEF = "r_hip_RotationInterpolator";
OrientationInterpolator250.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator250.keyValue = new X3D.MFRotation([1,0,0,1,1,0,0,1,-1,0,0,1,-1,0,0,1,-1,0,0,1]);
Group239ZZZ.children[10] = OrientationInterpolator250;

let OrientationInterpolator251 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator251.DEF = "r_knee_RotationInterpolator";
OrientationInterpolator251.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator251.keyValue = new X3D.MFRotation([1,0,0,0.1,0,0,1,0,1,0,0,1,1,0,0,1,1,0,0,1.5]);
Group239ZZZ.children[11] = OrientationInterpolator251;

let OrientationInterpolator252 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator252.DEF = "r_ankle_RotationInterpolator";
OrientationInterpolator252.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator252.keyValue = new X3D.MFRotation([-1,0,0,1,0,0,1,0,1,0,0,1,1,0,0,1,1,0,0,0.5]);
Group239ZZZ.children[12] = OrientationInterpolator252;

let OrientationInterpolator253 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator253.DEF = "r_subtalar_RotationInterpolator";
OrientationInterpolator253.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator253.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[13] = OrientationInterpolator253;

let OrientationInterpolator254 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator254.DEF = "r_midtarsal_RotationInterpolator";
OrientationInterpolator254.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator254.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[14] = OrientationInterpolator254;

let OrientationInterpolator255 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator255.DEF = "r_metatarsal_RotationInterpolator";
OrientationInterpolator255.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator255.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[15] = OrientationInterpolator255;

let OrientationInterpolator256 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator256.DEF = "vl5_RotationInterpolator";
OrientationInterpolator256.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator256.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[16] = OrientationInterpolator256;

let OrientationInterpolator257 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator257.DEF = "vl4_RotationInterpolator";
OrientationInterpolator257.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator257.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[17] = OrientationInterpolator257;

let OrientationInterpolator258 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator258.DEF = "vl3_RotationInterpolator";
OrientationInterpolator258.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator258.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[18] = OrientationInterpolator258;

let OrientationInterpolator259 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator259.DEF = "vl2_RotationInterpolator";
OrientationInterpolator259.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator259.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[19] = OrientationInterpolator259;

let OrientationInterpolator260 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator260.DEF = "vl1_RotationInterpolator";
OrientationInterpolator260.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator260.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[20] = OrientationInterpolator260;

let OrientationInterpolator261 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator261.DEF = "vt12_RotationInterpolator";
OrientationInterpolator261.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator261.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[21] = OrientationInterpolator261;

let OrientationInterpolator262 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator262.DEF = "vt11_RotationInterpolator";
OrientationInterpolator262.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator262.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[22] = OrientationInterpolator262;

let OrientationInterpolator263 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator263.DEF = "vt10_RotationInterpolator";
OrientationInterpolator263.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator263.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[23] = OrientationInterpolator263;

let OrientationInterpolator264 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator264.DEF = "vt9_RotationInterpolator";
OrientationInterpolator264.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator264.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[24] = OrientationInterpolator264;

let OrientationInterpolator265 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator265.DEF = "vt8_RotationInterpolator";
OrientationInterpolator265.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator265.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[25] = OrientationInterpolator265;

let OrientationInterpolator266 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator266.DEF = "vt7_RotationInterpolator";
OrientationInterpolator266.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator266.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[26] = OrientationInterpolator266;

let OrientationInterpolator267 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator267.DEF = "vt6_RotationInterpolator";
OrientationInterpolator267.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator267.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[27] = OrientationInterpolator267;

let OrientationInterpolator268 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator268.DEF = "vt5_RotationInterpolator";
OrientationInterpolator268.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator268.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[28] = OrientationInterpolator268;

let OrientationInterpolator269 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator269.DEF = "vt4_RotationInterpolator";
OrientationInterpolator269.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator269.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[29] = OrientationInterpolator269;

let OrientationInterpolator270 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator270.DEF = "vt3_RotationInterpolator";
OrientationInterpolator270.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator270.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[30] = OrientationInterpolator270;

let OrientationInterpolator271 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator271.DEF = "vt2_RotationInterpolator";
OrientationInterpolator271.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator271.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[31] = OrientationInterpolator271;

let OrientationInterpolator272 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator272.DEF = "vt1_RotationInterpolator";
OrientationInterpolator272.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator272.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[32] = OrientationInterpolator272;

let OrientationInterpolator273 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator273.DEF = "vc7_RotationInterpolator";
OrientationInterpolator273.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator273.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[33] = OrientationInterpolator273;

let OrientationInterpolator274 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator274.DEF = "vc6_RotationInterpolator";
OrientationInterpolator274.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator274.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[34] = OrientationInterpolator274;

let OrientationInterpolator275 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator275.DEF = "vc5_RotationInterpolator";
OrientationInterpolator275.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator275.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[35] = OrientationInterpolator275;

let OrientationInterpolator276 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator276.DEF = "vc4_RotationInterpolator";
OrientationInterpolator276.key = new X3D.MFFloat([0,0.3,0.4,1]);
OrientationInterpolator276.keyValue = new X3D.MFRotation([1,0,1,0.25,-1,0,-1,0.35,1,0,0,0.75,1,0,1,0.5]);
Group239ZZZ.children[36] = OrientationInterpolator276;

let OrientationInterpolator277 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator277.DEF = "vc3_RotationInterpolator";
OrientationInterpolator277.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator277.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[37] = OrientationInterpolator277;

let OrientationInterpolator278 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator278.DEF = "vc2_RotationInterpolator";
OrientationInterpolator278.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator278.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[38] = OrientationInterpolator278;

let OrientationInterpolator279 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator279.DEF = "vc1_RotationInterpolator";
OrientationInterpolator279.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator279.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[39] = OrientationInterpolator279;

let OrientationInterpolator280 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator280.DEF = "skullbase_RotationInterpolator";
OrientationInterpolator280.key = new X3D.MFFloat([0,0.2,0.75,1]);
OrientationInterpolator280.keyValue = new X3D.MFRotation([0,-1,0,0.5,0,0,1,0,0,0,1,0,0,1,0,0.35]);
Group239ZZZ.children[40] = OrientationInterpolator280;

let OrientationInterpolator281 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator281.DEF = "l_eyelid_joint_RotationInterpolator";
OrientationInterpolator281.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator281.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[41] = OrientationInterpolator281;

let OrientationInterpolator282 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator282.DEF = "l_eyeball_joint_RotationInterpolator";
OrientationInterpolator282.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator282.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[42] = OrientationInterpolator282;

let OrientationInterpolator283 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator283.DEF = "l_eyebrow_joint_RotationInterpolator";
OrientationInterpolator283.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator283.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[43] = OrientationInterpolator283;

let OrientationInterpolator284 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator284.DEF = "r_eyelid_joint_RotationInterpolator";
OrientationInterpolator284.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator284.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[44] = OrientationInterpolator284;

let OrientationInterpolator285 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator285.DEF = "r_eyeball_joint_RotationInterpolator";
OrientationInterpolator285.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator285.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[45] = OrientationInterpolator285;

let OrientationInterpolator286 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator286.DEF = "r_eyebrow_joint_RotationInterpolator";
OrientationInterpolator286.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator286.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[46] = OrientationInterpolator286;

let OrientationInterpolator287 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator287.DEF = "temporomandibular_RotationInterpolator";
OrientationInterpolator287.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator287.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[47] = OrientationInterpolator287;

let OrientationInterpolator288 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator288.DEF = "l_sternoclavicular_RotationInterpolator";
OrientationInterpolator288.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator288.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[48] = OrientationInterpolator288;

let OrientationInterpolator289 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator289.DEF = "l_acromioclavicular_RotationInterpolator";
OrientationInterpolator289.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator289.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[49] = OrientationInterpolator289;

let OrientationInterpolator290 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator290.DEF = "l_shoulder_RotationInterpolator";
OrientationInterpolator290.key = new X3D.MFFloat([0,0.4,1]);
OrientationInterpolator290.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,1.5,-1,0,1,1.75]);
Group239ZZZ.children[50] = OrientationInterpolator290;

let OrientationInterpolator291 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator291.DEF = "l_elbow_RotationInterpolator";
OrientationInterpolator291.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator291.keyValue = new X3D.MFRotation([-1,0,0,3,-1,0,0,0.75,-1,-1,0,0.5]);
Group239ZZZ.children[51] = OrientationInterpolator291;

let OrientationInterpolator292 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator292.DEF = "l_wrist_RotationInterpolator";
OrientationInterpolator292.key = new X3D.MFFloat([0,0.4,0.8,1]);
OrientationInterpolator292.keyValue = new X3D.MFRotation([0,0,1,0,0,1,0,1.3,0,-0.5,1,1.3,0,0,1,0]);
Group239ZZZ.children[52] = OrientationInterpolator292;

let OrientationInterpolator293 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator293.DEF = "l_thumb1_RotationInterpolator";
OrientationInterpolator293.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator293.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[53] = OrientationInterpolator293;

let OrientationInterpolator294 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator294.DEF = "l_thumb2_RotationInterpolator";
OrientationInterpolator294.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator294.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[54] = OrientationInterpolator294;

let OrientationInterpolator295 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator295.DEF = "l_thumb3_RotationInterpolator";
OrientationInterpolator295.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator295.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[55] = OrientationInterpolator295;

let OrientationInterpolator296 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator296.DEF = "l_index0_RotationInterpolator";
OrientationInterpolator296.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator296.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[56] = OrientationInterpolator296;

let OrientationInterpolator297 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator297.DEF = "l_index1_RotationInterpolator";
OrientationInterpolator297.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator297.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[57] = OrientationInterpolator297;

let OrientationInterpolator298 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator298.DEF = "l_index2_RotationInterpolator";
OrientationInterpolator298.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator298.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[58] = OrientationInterpolator298;

let OrientationInterpolator299 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator299.DEF = "l_index3_RotationInterpolator";
OrientationInterpolator299.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator299.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[59] = OrientationInterpolator299;

let OrientationInterpolator300 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator300.DEF = "l_middle0_RotationInterpolator";
OrientationInterpolator300.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator300.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[60] = OrientationInterpolator300;

let OrientationInterpolator301 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator301.DEF = "l_middle1_RotationInterpolator";
OrientationInterpolator301.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator301.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[61] = OrientationInterpolator301;

let OrientationInterpolator302 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator302.DEF = "l_middle2_RotationInterpolator";
OrientationInterpolator302.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator302.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[62] = OrientationInterpolator302;

let OrientationInterpolator303 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator303.DEF = "l_middle3_RotationInterpolator";
OrientationInterpolator303.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator303.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[63] = OrientationInterpolator303;

let OrientationInterpolator304 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator304.DEF = "l_ring0_RotationInterpolator";
OrientationInterpolator304.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator304.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[64] = OrientationInterpolator304;

let OrientationInterpolator305 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator305.DEF = "l_ring1_RotationInterpolator";
OrientationInterpolator305.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator305.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[65] = OrientationInterpolator305;

let OrientationInterpolator306 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator306.DEF = "l_ring2_RotationInterpolator";
OrientationInterpolator306.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator306.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[66] = OrientationInterpolator306;

let OrientationInterpolator307 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator307.DEF = "l_ring3_RotationInterpolator";
OrientationInterpolator307.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator307.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[67] = OrientationInterpolator307;

let OrientationInterpolator308 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator308.DEF = "l_pinky0_RotationInterpolator";
OrientationInterpolator308.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator308.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[68] = OrientationInterpolator308;

let OrientationInterpolator309 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator309.DEF = "l_pinky1_RotationInterpolator";
OrientationInterpolator309.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator309.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[69] = OrientationInterpolator309;

let OrientationInterpolator310 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator310.DEF = "l_pinky2_RotationInterpolator";
OrientationInterpolator310.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator310.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[70] = OrientationInterpolator310;

let OrientationInterpolator311 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator311.DEF = "l_pinky3_RotationInterpolator";
OrientationInterpolator311.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator311.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[71] = OrientationInterpolator311;

let OrientationInterpolator312 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator312.DEF = "r_sternoclavicular_RotationInterpolator";
OrientationInterpolator312.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator312.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[72] = OrientationInterpolator312;

let OrientationInterpolator313 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator313.DEF = "r_acromioclavicular_RotationInterpolator";
OrientationInterpolator313.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator313.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[73] = OrientationInterpolator313;

let OrientationInterpolator314 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator314.DEF = "r_shoulder_RotationInterpolator";
OrientationInterpolator314.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator314.keyValue = new X3D.MFRotation([0,0,-1,2.5,0,0,-1,1.5,0,0,-1,1.75]);
Group239ZZZ.children[74] = OrientationInterpolator314;

let OrientationInterpolator315 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator315.DEF = "r_elbow_RotationInterpolator";
OrientationInterpolator315.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator315.keyValue = new X3D.MFRotation([-1,0,0,3,-1,0,0,0.75,-1,-1,0,0.5]);
Group239ZZZ.children[75] = OrientationInterpolator315;

let OrientationInterpolator316 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator316.DEF = "r_wrist_RotationInterpolator";
OrientationInterpolator316.key = new X3D.MFFloat([0,0.5,0.7,1]);
OrientationInterpolator316.keyValue = new X3D.MFRotation([0,1,0,0.3,0,0,1,0,0,0,-1,1,0,-1,0,0.3]);
Group239ZZZ.children[76] = OrientationInterpolator316;

let OrientationInterpolator317 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator317.DEF = "r_thumb1_RotationInterpolator";
OrientationInterpolator317.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator317.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[77] = OrientationInterpolator317;

let OrientationInterpolator318 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator318.DEF = "r_thumb2_RotationInterpolator";
OrientationInterpolator318.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator318.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[78] = OrientationInterpolator318;

let OrientationInterpolator319 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator319.DEF = "r_thumb3_RotationInterpolator";
OrientationInterpolator319.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator319.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group239ZZZ.children[79] = OrientationInterpolator319;

let OrientationInterpolator320 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator320.DEF = "r_index0_RotationInterpolator";
OrientationInterpolator320.key = new X3D.MFFloat([0,0.5,0.75,1]);
OrientationInterpolator320.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0]);
Group239ZZZ.children[80] = OrientationInterpolator320;

let OrientationInterpolator321 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator321.DEF = "r_index1_RotationInterpolator";
OrientationInterpolator321.key = new X3D.MFFloat([0,0.5,0.75,1]);
OrientationInterpolator321.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group239ZZZ.children[81] = OrientationInterpolator321;

let OrientationInterpolator322 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator322.DEF = "r_index2_RotationInterpolator";
OrientationInterpolator322.key = new X3D.MFFloat([0,0.5,0.75,1]);
OrientationInterpolator322.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group239ZZZ.children[82] = OrientationInterpolator322;

let OrientationInterpolator323 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator323.DEF = "r_index3_RotationInterpolator";
OrientationInterpolator323.key = new X3D.MFFloat([0,0.5,0.75,1]);
OrientationInterpolator323.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group239ZZZ.children[83] = OrientationInterpolator323;

let OrientationInterpolator324 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator324.DEF = "r_middle0_RotationInterpolator";
OrientationInterpolator324.key = new X3D.MFFloat([0,0.5,0.75,1]);
OrientationInterpolator324.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0]);
Group239ZZZ.children[84] = OrientationInterpolator324;

let OrientationInterpolator325 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator325.DEF = "r_middle1_RotationInterpolator";
OrientationInterpolator325.key = new X3D.MFFloat([0,0.5,0.75,1]);
OrientationInterpolator325.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group239ZZZ.children[85] = OrientationInterpolator325;

let OrientationInterpolator326 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator326.DEF = "r_middle2_RotationInterpolator";
OrientationInterpolator326.key = new X3D.MFFloat([0,0.5,0.75,1]);
OrientationInterpolator326.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group239ZZZ.children[86] = OrientationInterpolator326;

let OrientationInterpolator327 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator327.DEF = "r_middle3_RotationInterpolator";
OrientationInterpolator327.key = new X3D.MFFloat([0,0.5,0.75,1]);
OrientationInterpolator327.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group239ZZZ.children[87] = OrientationInterpolator327;

let OrientationInterpolator328 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator328.DEF = "r_ring0_RotationInterpolator";
OrientationInterpolator328.key = new X3D.MFFloat([0,0.5,0.75,1]);
OrientationInterpolator328.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0]);
Group239ZZZ.children[88] = OrientationInterpolator328;

let OrientationInterpolator329 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator329.DEF = "r_ring1_RotationInterpolator";
OrientationInterpolator329.key = new X3D.MFFloat([0,0.5,0.75,1]);
OrientationInterpolator329.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group239ZZZ.children[89] = OrientationInterpolator329;

let OrientationInterpolator330 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator330.DEF = "r_ring2_RotationInterpolator";
OrientationInterpolator330.key = new X3D.MFFloat([0,0.5,0.75,1]);
OrientationInterpolator330.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group239ZZZ.children[90] = OrientationInterpolator330;

let OrientationInterpolator331 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator331.DEF = "r_ring3_RotationInterpolator";
OrientationInterpolator331.key = new X3D.MFFloat([0,0.5,0.75,1]);
OrientationInterpolator331.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group239ZZZ.children[91] = OrientationInterpolator331;

let OrientationInterpolator332 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator332.DEF = "r_pinky0_RotationInterpolator";
OrientationInterpolator332.key = new X3D.MFFloat([0,0.5,0.75,1]);
OrientationInterpolator332.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0]);
Group239ZZZ.children[92] = OrientationInterpolator332;

let OrientationInterpolator333 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator333.DEF = "r_pinky1_RotationInterpolator";
OrientationInterpolator333.key = new X3D.MFFloat([0,0.5,0.75,1]);
OrientationInterpolator333.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group239ZZZ.children[93] = OrientationInterpolator333;

let OrientationInterpolator334 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator334.DEF = "r_pinky2_RotationInterpolator";
OrientationInterpolator334.key = new X3D.MFFloat([0,0.5,0.75,1]);
OrientationInterpolator334.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group239ZZZ.children[94] = OrientationInterpolator334;

let OrientationInterpolator335 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator335.DEF = "r_pinky3_RotationInterpolator";
OrientationInterpolator335.key = new X3D.MFFloat([0,0.5,0.75,1]);
OrientationInterpolator335.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group239ZZZ.children[95] = OrientationInterpolator335;

browser.currentScene.children[11] = Group239;

let Group336 = browser.currentScene.createNode("Group");
Group336.DEF = "DisplacersAnimationGroup";
let ScalarInterpolator337 = browser.currentScene.createNode("ScalarInterpolator");
ScalarInterpolator337.DEF = "skull_tipInterpolator";
ScalarInterpolator337.key = new X3D.MFFloat([0,0.1,0.2,0.35,0.6,0.7,0.85,0.88,0.94,0.97,1]);
ScalarInterpolator337.keyValue = new X3D.MFFloat([0,0,0,0,0.2,0.4,1,0,1,0.4,0]);
Group336YYY.children = new X3D.MFNode();

Group336ZZZ.children[0] = ScalarInterpolator337;

browser.currentScene.children[12] = Group336;

let Group338 = browser.currentScene.createNode("Group");
Group338.DEF = "SkinTextureTransformAnimationGroup";
let ScalarInterpolator339 = browser.currentScene.createNode("ScalarInterpolator");
ScalarInterpolator339.DEF = "SkinInterpolator";
ScalarInterpolator339.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.7,0.8,1]);
ScalarInterpolator339.keyValue = new X3D.MFFloat([0,0,0,0,0,1,2,0]);
Group338YYY.children = new X3D.MFNode();

Group338ZZZ.children[0] = ScalarInterpolator339;

browser.currentScene.children[13] = Group338;

let Group340 = browser.currentScene.createNode("Group");
let Transform341 = browser.currentScene.createNode("Transform");
Transform341.DEF = "SBall";
Transform341.translation = new X3D.SFVec3f([1.750548,3.495979,8.727154]);
Transform341.rotation = new X3D.SFRotation([-0.700140042014005,0.140028008402801,-0.700140042014005,3]);
Transform341.scale = new X3D.SFVec3f([0.23,0.23,0.23]);
let Shape342 = browser.currentScene.createNode("Shape");
Shape342.DEF = "ball_Shape";
let Appearance343 = browser.currentScene.createNode("Appearance");
Appearance343.DEF = "ball_Appearance";
let Material344 = browser.currentScene.createNode("Material");
Material344.DEF = "ball_Material";
Material344.diffuseColor = new X3D.SFColor([0.3,0.3,1]);
Material344.emissiveColor = new X3D.SFColor([0.3,0.3,0.33]);
material = Material344;

let ImageTexture345 = browser.currentScene.createNode("ImageTexture");
ImageTexture345.USE = "JoeSkinImageTexture";
texture = ImageTexture345;

appearance = Appearance343;

let IndexedFaceSet346 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet346.DEF = "ball_IndexedFaceSet";
IndexedFaceSet346.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,1,13,14,-1,1,14,2,-1,2,14,15,-1,2,15,3,-1,3,15,16,-1,3,16,4,-1,4,16,17,-1,4,17,5,-1,5,17,18,-1,5,18,6,-1,6,18,19,-1,6,19,7,-1,7,19,20,-1,7,20,8,-1,8,20,21,-1,8,21,9,-1,9,21,22,-1,9,22,10,-1,10,22,23,-1,10,23,11,-1,11,23,24,-1,11,24,12,-1,12,24,13,-1,12,13,1,-1,13,25,26,-1,13,26,14,-1,14,26,27,-1,14,27,15,-1,15,27,28,-1,15,28,16,-1,16,28,29,-1,16,29,17,-1,17,29,30,-1,17,30,18,-1,18,30,31,-1,18,31,19,-1,19,31,32,-1,19,32,20,-1,20,32,33,-1,20,33,21,-1,21,33,34,-1,21,34,22,-1,22,34,35,-1,22,35,23,-1,23,35,36,-1,23,36,24,-1,24,36,25,-1,24,25,13,-1,25,37,38,-1,25,38,26,-1,26,38,39,-1,26,39,27,-1,27,39,40,-1,27,40,28,-1,28,40,41,-1,28,41,29,-1,29,41,42,-1,29,42,30,-1,30,42,43,-1,30,43,31,-1,31,43,44,-1,31,44,32,-1,32,44,45,-1,32,45,33,-1,33,45,46,-1,33,46,34,-1,34,46,47,-1,34,47,35,-1,35,47,48,-1,35,48,36,-1,36,48,37,-1,36,37,25,-1,37,49,50,-1,37,50,38,-1,38,50,51,-1,38,51,39,-1,39,51,52,-1,39,52,40,-1,40,52,53,-1,40,53,41,-1,41,53,54,-1,41,54,42,-1,42,54,55,-1,42,55,43,-1,43,55,56,-1,43,56,44,-1,44,56,57,-1,44,57,45,-1,45,57,58,-1,45,58,46,-1,46,58,59,-1,46,59,47,-1,47,59,60,-1,47,60,48,-1,48,60,49,-1,48,49,37,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]);
let Coordinate347 = browser.currentScene.createNode("Coordinate");
Coordinate347.DEF = "Ball_Coordinates";
Coordinate347.point = new X3D.MFVec3f([0,0.4675,0,0,0.4049,-0.2338,-0.1169,0.4049,-0.2024,-0.2024,0.4049,-0.1169,-0.2338,0.4049,0,-0.2024,0.4049,0.1169,-0.1169,0.4049,0.2024,0,0.4049,0.2338,0.1169,0.4049,0.2024,0.2024,0.4049,0.1169,0.2338,0.4049,0,0.2024,0.4049,-0.1169,0.1169,0.4049,-0.2024,0,0.2338,-0.4049,-0.2024,0.2338,-0.3506,-0.3506,0.2338,-0.2024,-0.4049,0.2338,0,-0.3506,0.2338,0.2024,-0.2024,0.2338,0.3506,0,0.2338,0.4049,0.2024,0.2338,0.3506,0.3506,0.2338,0.2024,0.4049,0.2338,0,0.3506,0.2338,-0.2024,0.2024,0.2338,-0.3506,0,0,-0.4675,-0.2338,0,-0.4049,-0.4049,0,-0.2338,-0.4675,0,0,-0.4049,0,0.2338,-0.2338,0,0.4049,0,0,0.4675,0.2338,0,0.4049,0.4049,0,0.2338,0.4675,0,0,0.4049,0,-0.2338,0.2338,0,-0.4049,0,-0.2338,-0.4049,-0.2024,-0.2338,-0.3506,-0.3506,-0.2338,-0.2024,-0.4049,-0.2338,0,-0.3506,-0.2338,0.2024,-0.2024,-0.2338,0.3506,0,-0.2338,0.4049,0.2024,-0.2338,0.3506,0.3506,-0.2338,0.2024,0.4049,-0.2338,0,0.3506,-0.2338,-0.2024,0.2024,-0.2338,-0.3506,0,-0.4049,-0.2338,-0.1169,-0.4049,-0.2024,-0.2024,-0.4049,-0.1169,-0.2338,-0.4049,0,-0.2024,-0.4049,0.1169,-0.1169,-0.4049,0.2024,0,-0.4049,0.2338,0.1169,-0.4049,0.2024,0.2024,-0.4049,0.1169,0.2338,-0.4049,0,0.2024,-0.4049,-0.1169,0.1169,-0.4049,-0.2024,0,-0.4675,0]);
coord = Coordinate347;

geometry = IndexedFaceSet346;

Transform341YYY.child = new X3D.undefined();

Transform341ZZZ.child[0] = Shape342;

let Viewpoint348 = browser.currentScene.createNode("Viewpoint");
Viewpoint348.DEF = "ballView_1";
Viewpoint348.description = "Ball View";
Transform341ZZZ.children[1] = Viewpoint348;

Group340YYY.children = new X3D.MFNode();

Group340ZZZ.children[0] = Transform341;

let PositionInterpolator349 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator349.DEF = "ball_TranslationInterpolator";
PositionInterpolator349.key = new X3D.MFFloat([0,0.4,0.409,1]);
PositionInterpolator349.keyValue = new X3D.MFVec3f([-1,0.4,-1,0,0.07,0,0.05,0.06,0.05,2,4,10]);
Group340ZZZ.children[1] = PositionInterpolator349;

let OrientationInterpolator350 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator350.DEF = "ball_RotationInterpolator";
OrientationInterpolator350.key = new X3D.MFFloat([0,0.4,0.41,0.71,1]);
OrientationInterpolator350.keyValue = new X3D.MFRotation([1,0,1,0.25,-1,0,-1,1.35,-1,1,-1,3.35,-1,0.2,-1,3,-1,0.2,-1,3]);
Group340ZZZ.children[2] = OrientationInterpolator350;

browser.currentScene.children[14] = Group340;

let Group351 = browser.currentScene.createNode("Group");
let Transform352 = browser.currentScene.createNode("Transform");
Transform352.scale = new X3D.SFVec3f([0.2,0.2,0.2]);
let Shape353 = browser.currentScene.createNode("Shape");
Shape353.USE = "AxisLinesShape";
Transform352YYY.child = new X3D.undefined();

Transform352ZZZ.child[0] = Shape353;

Group351YYY.children = new X3D.MFNode();

Group351ZZZ.children[0] = Transform352;

let Transform354 = browser.currentScene.createNode("Transform");
Transform354.DEF = "Circle0";
Transform354.scale = new X3D.SFVec3f([1.175,1,1.175]);
let Shape355 = browser.currentScene.createNode("Shape");
Shape355.DEF = "circle_Shape";
let Appearance356 = browser.currentScene.createNode("Appearance");
Appearance356.DEF = "circle0_Appearance";
let Material357 = browser.currentScene.createNode("Material");
Material357.DEF = "circle0_Material";
Material357.ambientIntensity = 0.9;
Material357.diffuseColor = new X3D.SFColor([0.9,0,0.7]);
Material357.emissiveColor = new X3D.SFColor([0.425,0.486,1]);
material = Material357;

appearance = Appearance356;

let IndexedLineSet358 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet358.DEF = "Orbit1";
IndexedLineSet358.coordIndex = new X3D.MFInt32([0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1]);
let Coordinate359 = browser.currentScene.createNode("Coordinate");
Coordinate359.DEF = "circle_Coordinates";
Coordinate359.point = new X3D.MFVec3f([1,0,0,0.995,0,-0.105,0.979,0,-0.208,0.951,0,-0.309,0.914,0,-0.407,0.866,0,-0.5,0.809,0,-0.588,0.743,0,-0.669,0.669,0,-0.743,0.588,0,-0.809,0.5,0,-0.866,0.407,0,-0.914,0.309,0,-0.951,0.208,0,-0.978,0.105,0,-0.995,0,0,-1,-0.105,0,-0.994522,-0.208,0,-0.978,-0.309,0,-0.951,-0.407,0,-0.914,-0.5,0,-0.866,-0.588,0,-0.809,-0.669,0,-0.743,-0.743,0,-0.669,-0.809,0,-0.588,-0.866,0,-0.5,-0.914,0,-0.407,-0.951,0,-0.309,-0.978,0,-0.208,-0.995,0,-0.105,-1,0,0,-0.995,0,0.105,-0.978,0,0.208,-0.951,0,0.309,-0.914,0,0.407,-0.866,0,0.5,-0.809,0,0.588,-0.743,0,0.669,-0.669,0,0.743,-0.588,0,0.809,-0.5,0,0.866,-0.407,0,0.914,-0.309,0,0.951,-0.208,0,0.978,-0.105,0,0.995,0,0,1,0.105,0,0.995,0.208,0,0.978,0.309,0,0.951,0.407,0,0.914,0.5,0,0.866,0.588,0,0.809,0.669,0,0.743,0.743,0,0.669,0.809,0,0.588,0.866,0,0.5,0.914,0,0.407,0.951,0,0.309,0.978,0,0.208,0.995,0,0.104,1,0,0]);
coord = Coordinate359;

geometry = IndexedLineSet358;

Transform354YYY.child = new X3D.undefined();

Transform354ZZZ.child[0] = Shape355;

Group351ZZZ.children[1] = Transform354;

let Transform360 = browser.currentScene.createNode("Transform");
Transform360.DEF = "Circle1";
Transform360.scale = new X3D.SFVec3f([0.5,1,0.5]);
let Shape361 = browser.currentScene.createNode("Shape");
Shape361.DEF = "circle1_Shape";
let Appearance362 = browser.currentScene.createNode("Appearance");
Appearance362.DEF = "circle1_Appearance";
let Material363 = browser.currentScene.createNode("Material");
Material363.DEF = "circle1_Material";
Material363.diffuseColor = new X3D.SFColor([0.9,0,0.7]);
Material363.emissiveColor = new X3D.SFColor([0.424956,0.483976,1]);
material = Material363;

appearance = Appearance362;

let IndexedLineSet364 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet364.USE = "Orbit1";
geometry = IndexedLineSet364;

Transform360YYY.child = new X3D.undefined();

Transform360ZZZ.child[0] = Shape361;

Group351ZZZ.children[2] = Transform360;

let Transform365 = browser.currentScene.createNode("Transform");
Transform365.DEF = "Circle2";
Transform365.scale = new X3D.SFVec3f([0.25,1,0.25]);
let Shape366 = browser.currentScene.createNode("Shape");
Shape366.DEF = "circle2_Shape";
let Appearance367 = browser.currentScene.createNode("Appearance");
Appearance367.DEF = "circle2_Appearance";
let Material368 = browser.currentScene.createNode("Material");
Material368.DEF = "circle2_Material";
Material368.diffuseColor = new X3D.SFColor([0.9,0,0.7]);
Material368.emissiveColor = new X3D.SFColor([0.424956,0.483976,1]);
material = Material368;

appearance = Appearance367;

let IndexedLineSet369 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet369.USE = "Orbit1";
geometry = IndexedLineSet369;

Transform365YYY.child = new X3D.undefined();

Transform365ZZZ.child[0] = Shape366;

Group351ZZZ.children[3] = Transform365;

browser.currentScene.children[15] = Group351;

let ROUTE370 = browser.currentScene.createNode("ROUTE");
ROUTE370.fromNode = "KickTimer";
ROUTE370.fromField = "fraction_changed";
ROUTE370.toNode = "HumanoidRoot_RotationInterpolator";
ROUTE370.toField = "set_fraction";
browser.currentScene.children[16] = ROUTE370;

let ROUTE371 = browser.currentScene.createNode("ROUTE");
ROUTE371.fromNode = "KickTimer";
ROUTE371.fromField = "fraction_changed";
ROUTE371.toNode = "HumanoidRoot_TranslationInterpolator";
ROUTE371.toField = "set_fraction";
browser.currentScene.children[17] = ROUTE371;

let ROUTE372 = browser.currentScene.createNode("ROUTE");
ROUTE372.fromNode = "KickTimer";
ROUTE372.fromField = "fraction_changed";
ROUTE372.toNode = "sacroiliac_RotationInterpolator";
ROUTE372.toField = "set_fraction";
browser.currentScene.children[18] = ROUTE372;

let ROUTE373 = browser.currentScene.createNode("ROUTE");
ROUTE373.fromNode = "KickTimer";
ROUTE373.fromField = "fraction_changed";
ROUTE373.toNode = "l_hip_RotationInterpolator";
ROUTE373.toField = "set_fraction";
browser.currentScene.children[19] = ROUTE373;

let ROUTE374 = browser.currentScene.createNode("ROUTE");
ROUTE374.fromNode = "KickTimer";
ROUTE374.fromField = "fraction_changed";
ROUTE374.toNode = "l_knee_RotationInterpolator";
ROUTE374.toField = "set_fraction";
browser.currentScene.children[20] = ROUTE374;

let ROUTE375 = browser.currentScene.createNode("ROUTE");
ROUTE375.fromNode = "KickTimer";
ROUTE375.fromField = "fraction_changed";
ROUTE375.toNode = "l_ankle_RotationInterpolator";
ROUTE375.toField = "set_fraction";
browser.currentScene.children[21] = ROUTE375;

let ROUTE376 = browser.currentScene.createNode("ROUTE");
ROUTE376.fromNode = "KickTimer";
ROUTE376.fromField = "fraction_changed";
ROUTE376.toNode = "l_subtalar_RotationInterpolator";
ROUTE376.toField = "set_fraction";
browser.currentScene.children[22] = ROUTE376;

let ROUTE377 = browser.currentScene.createNode("ROUTE");
ROUTE377.fromNode = "KickTimer";
ROUTE377.fromField = "fraction_changed";
ROUTE377.toNode = "l_midtarsal_RotationInterpolator";
ROUTE377.toField = "set_fraction";
browser.currentScene.children[23] = ROUTE377;

let ROUTE378 = browser.currentScene.createNode("ROUTE");
ROUTE378.fromNode = "KickTimer";
ROUTE378.fromField = "fraction_changed";
ROUTE378.toNode = "l_metatarsal_RotationInterpolator";
ROUTE378.toField = "set_fraction";
browser.currentScene.children[24] = ROUTE378;

let ROUTE379 = browser.currentScene.createNode("ROUTE");
ROUTE379.fromNode = "KickTimer";
ROUTE379.fromField = "fraction_changed";
ROUTE379.toNode = "r_hip_RotationInterpolator";
ROUTE379.toField = "set_fraction";
browser.currentScene.children[25] = ROUTE379;

let ROUTE380 = browser.currentScene.createNode("ROUTE");
ROUTE380.fromNode = "KickTimer";
ROUTE380.fromField = "fraction_changed";
ROUTE380.toNode = "r_knee_RotationInterpolator";
ROUTE380.toField = "set_fraction";
browser.currentScene.children[26] = ROUTE380;

let ROUTE381 = browser.currentScene.createNode("ROUTE");
ROUTE381.fromNode = "KickTimer";
ROUTE381.fromField = "fraction_changed";
ROUTE381.toNode = "r_ankle_RotationInterpolator";
ROUTE381.toField = "set_fraction";
browser.currentScene.children[27] = ROUTE381;

let ROUTE382 = browser.currentScene.createNode("ROUTE");
ROUTE382.fromNode = "KickTimer";
ROUTE382.fromField = "fraction_changed";
ROUTE382.toNode = "r_subtalar_RotationInterpolator";
ROUTE382.toField = "set_fraction";
browser.currentScene.children[28] = ROUTE382;

let ROUTE383 = browser.currentScene.createNode("ROUTE");
ROUTE383.fromNode = "KickTimer";
ROUTE383.fromField = "fraction_changed";
ROUTE383.toNode = "r_midtarsal_RotationInterpolator";
ROUTE383.toField = "set_fraction";
browser.currentScene.children[29] = ROUTE383;

let ROUTE384 = browser.currentScene.createNode("ROUTE");
ROUTE384.fromNode = "KickTimer";
ROUTE384.fromField = "fraction_changed";
ROUTE384.toNode = "r_metatarsal_RotationInterpolator";
ROUTE384.toField = "set_fraction";
browser.currentScene.children[30] = ROUTE384;

let ROUTE385 = browser.currentScene.createNode("ROUTE");
ROUTE385.fromNode = "KickTimer";
ROUTE385.fromField = "fraction_changed";
ROUTE385.toNode = "vl5_RotationInterpolator";
ROUTE385.toField = "set_fraction";
browser.currentScene.children[31] = ROUTE385;

let ROUTE386 = browser.currentScene.createNode("ROUTE");
ROUTE386.fromNode = "KickTimer";
ROUTE386.fromField = "fraction_changed";
ROUTE386.toNode = "vl4_RotationInterpolator";
ROUTE386.toField = "set_fraction";
browser.currentScene.children[32] = ROUTE386;

let ROUTE387 = browser.currentScene.createNode("ROUTE");
ROUTE387.fromNode = "KickTimer";
ROUTE387.fromField = "fraction_changed";
ROUTE387.toNode = "vl3_RotationInterpolator";
ROUTE387.toField = "set_fraction";
browser.currentScene.children[33] = ROUTE387;

let ROUTE388 = browser.currentScene.createNode("ROUTE");
ROUTE388.fromNode = "KickTimer";
ROUTE388.fromField = "fraction_changed";
ROUTE388.toNode = "vl2_RotationInterpolator";
ROUTE388.toField = "set_fraction";
browser.currentScene.children[34] = ROUTE388;

let ROUTE389 = browser.currentScene.createNode("ROUTE");
ROUTE389.fromNode = "KickTimer";
ROUTE389.fromField = "fraction_changed";
ROUTE389.toNode = "vl1_RotationInterpolator";
ROUTE389.toField = "set_fraction";
browser.currentScene.children[35] = ROUTE389;

let ROUTE390 = browser.currentScene.createNode("ROUTE");
ROUTE390.fromNode = "KickTimer";
ROUTE390.fromField = "fraction_changed";
ROUTE390.toNode = "vt12_RotationInterpolator";
ROUTE390.toField = "set_fraction";
browser.currentScene.children[36] = ROUTE390;

let ROUTE391 = browser.currentScene.createNode("ROUTE");
ROUTE391.fromNode = "KickTimer";
ROUTE391.fromField = "fraction_changed";
ROUTE391.toNode = "vt11_RotationInterpolator";
ROUTE391.toField = "set_fraction";
browser.currentScene.children[37] = ROUTE391;

let ROUTE392 = browser.currentScene.createNode("ROUTE");
ROUTE392.fromNode = "KickTimer";
ROUTE392.fromField = "fraction_changed";
ROUTE392.toNode = "vt10_RotationInterpolator";
ROUTE392.toField = "set_fraction";
browser.currentScene.children[38] = ROUTE392;

let ROUTE393 = browser.currentScene.createNode("ROUTE");
ROUTE393.fromNode = "KickTimer";
ROUTE393.fromField = "fraction_changed";
ROUTE393.toNode = "vt9_RotationInterpolator";
ROUTE393.toField = "set_fraction";
browser.currentScene.children[39] = ROUTE393;

let ROUTE394 = browser.currentScene.createNode("ROUTE");
ROUTE394.fromNode = "KickTimer";
ROUTE394.fromField = "fraction_changed";
ROUTE394.toNode = "vt8_RotationInterpolator";
ROUTE394.toField = "set_fraction";
browser.currentScene.children[40] = ROUTE394;

let ROUTE395 = browser.currentScene.createNode("ROUTE");
ROUTE395.fromNode = "KickTimer";
ROUTE395.fromField = "fraction_changed";
ROUTE395.toNode = "vt7_RotationInterpolator";
ROUTE395.toField = "set_fraction";
browser.currentScene.children[41] = ROUTE395;

let ROUTE396 = browser.currentScene.createNode("ROUTE");
ROUTE396.fromNode = "KickTimer";
ROUTE396.fromField = "fraction_changed";
ROUTE396.toNode = "vt6_RotationInterpolator";
ROUTE396.toField = "set_fraction";
browser.currentScene.children[42] = ROUTE396;

let ROUTE397 = browser.currentScene.createNode("ROUTE");
ROUTE397.fromNode = "KickTimer";
ROUTE397.fromField = "fraction_changed";
ROUTE397.toNode = "vt5_RotationInterpolator";
ROUTE397.toField = "set_fraction";
browser.currentScene.children[43] = ROUTE397;

let ROUTE398 = browser.currentScene.createNode("ROUTE");
ROUTE398.fromNode = "KickTimer";
ROUTE398.fromField = "fraction_changed";
ROUTE398.toNode = "vt4_RotationInterpolator";
ROUTE398.toField = "set_fraction";
browser.currentScene.children[44] = ROUTE398;

let ROUTE399 = browser.currentScene.createNode("ROUTE");
ROUTE399.fromNode = "KickTimer";
ROUTE399.fromField = "fraction_changed";
ROUTE399.toNode = "vt3_RotationInterpolator";
ROUTE399.toField = "set_fraction";
browser.currentScene.children[45] = ROUTE399;

let ROUTE400 = browser.currentScene.createNode("ROUTE");
ROUTE400.fromNode = "KickTimer";
ROUTE400.fromField = "fraction_changed";
ROUTE400.toNode = "vt2_RotationInterpolator";
ROUTE400.toField = "set_fraction";
browser.currentScene.children[46] = ROUTE400;

let ROUTE401 = browser.currentScene.createNode("ROUTE");
ROUTE401.fromNode = "KickTimer";
ROUTE401.fromField = "fraction_changed";
ROUTE401.toNode = "vt1_RotationInterpolator";
ROUTE401.toField = "set_fraction";
browser.currentScene.children[47] = ROUTE401;

let ROUTE402 = browser.currentScene.createNode("ROUTE");
ROUTE402.fromNode = "KickTimer";
ROUTE402.fromField = "fraction_changed";
ROUTE402.toNode = "vc7_RotationInterpolator";
ROUTE402.toField = "set_fraction";
browser.currentScene.children[48] = ROUTE402;

let ROUTE403 = browser.currentScene.createNode("ROUTE");
ROUTE403.fromNode = "KickTimer";
ROUTE403.fromField = "fraction_changed";
ROUTE403.toNode = "vc6_RotationInterpolator";
ROUTE403.toField = "set_fraction";
browser.currentScene.children[49] = ROUTE403;

let ROUTE404 = browser.currentScene.createNode("ROUTE");
ROUTE404.fromNode = "KickTimer";
ROUTE404.fromField = "fraction_changed";
ROUTE404.toNode = "vc5_RotationInterpolator";
ROUTE404.toField = "set_fraction";
browser.currentScene.children[50] = ROUTE404;

let ROUTE405 = browser.currentScene.createNode("ROUTE");
ROUTE405.fromNode = "KickTimer";
ROUTE405.fromField = "fraction_changed";
ROUTE405.toNode = "vc4_RotationInterpolator";
ROUTE405.toField = "set_fraction";
browser.currentScene.children[51] = ROUTE405;

let ROUTE406 = browser.currentScene.createNode("ROUTE");
ROUTE406.fromNode = "KickTimer";
ROUTE406.fromField = "fraction_changed";
ROUTE406.toNode = "vc3_RotationInterpolator";
ROUTE406.toField = "set_fraction";
browser.currentScene.children[52] = ROUTE406;

let ROUTE407 = browser.currentScene.createNode("ROUTE");
ROUTE407.fromNode = "KickTimer";
ROUTE407.fromField = "fraction_changed";
ROUTE407.toNode = "vc2_RotationInterpolator";
ROUTE407.toField = "set_fraction";
browser.currentScene.children[53] = ROUTE407;

let ROUTE408 = browser.currentScene.createNode("ROUTE");
ROUTE408.fromNode = "KickTimer";
ROUTE408.fromField = "fraction_changed";
ROUTE408.toNode = "vc1_RotationInterpolator";
ROUTE408.toField = "set_fraction";
browser.currentScene.children[54] = ROUTE408;

let ROUTE409 = browser.currentScene.createNode("ROUTE");
ROUTE409.fromNode = "KickTimer";
ROUTE409.fromField = "fraction_changed";
ROUTE409.toNode = "skullbase_RotationInterpolator";
ROUTE409.toField = "set_fraction";
browser.currentScene.children[55] = ROUTE409;

let ROUTE410 = browser.currentScene.createNode("ROUTE");
ROUTE410.fromNode = "KickTimer";
ROUTE410.fromField = "fraction_changed";
ROUTE410.toNode = "l_eyelid_joint_RotationInterpolator";
ROUTE410.toField = "set_fraction";
browser.currentScene.children[56] = ROUTE410;

let ROUTE411 = browser.currentScene.createNode("ROUTE");
ROUTE411.fromNode = "KickTimer";
ROUTE411.fromField = "fraction_changed";
ROUTE411.toNode = "l_eyeball_joint_RotationInterpolator";
ROUTE411.toField = "set_fraction";
browser.currentScene.children[57] = ROUTE411;

let ROUTE412 = browser.currentScene.createNode("ROUTE");
ROUTE412.fromNode = "KickTimer";
ROUTE412.fromField = "fraction_changed";
ROUTE412.toNode = "l_eyebrow_joint_RotationInterpolator";
ROUTE412.toField = "set_fraction";
browser.currentScene.children[58] = ROUTE412;

let ROUTE413 = browser.currentScene.createNode("ROUTE");
ROUTE413.fromNode = "KickTimer";
ROUTE413.fromField = "fraction_changed";
ROUTE413.toNode = "r_eyelid_joint_RotationInterpolator";
ROUTE413.toField = "set_fraction";
browser.currentScene.children[59] = ROUTE413;

let ROUTE414 = browser.currentScene.createNode("ROUTE");
ROUTE414.fromNode = "KickTimer";
ROUTE414.fromField = "fraction_changed";
ROUTE414.toNode = "r_eyeball_joint_RotationInterpolator";
ROUTE414.toField = "set_fraction";
browser.currentScene.children[60] = ROUTE414;

let ROUTE415 = browser.currentScene.createNode("ROUTE");
ROUTE415.fromNode = "KickTimer";
ROUTE415.fromField = "fraction_changed";
ROUTE415.toNode = "r_eyebrow_joint_RotationInterpolator";
ROUTE415.toField = "set_fraction";
browser.currentScene.children[61] = ROUTE415;

let ROUTE416 = browser.currentScene.createNode("ROUTE");
ROUTE416.fromNode = "KickTimer";
ROUTE416.fromField = "fraction_changed";
ROUTE416.toNode = "temporomandibular_RotationInterpolator";
ROUTE416.toField = "set_fraction";
browser.currentScene.children[62] = ROUTE416;

let ROUTE417 = browser.currentScene.createNode("ROUTE");
ROUTE417.fromNode = "KickTimer";
ROUTE417.fromField = "fraction_changed";
ROUTE417.toNode = "l_sternoclavicular_RotationInterpolator";
ROUTE417.toField = "set_fraction";
browser.currentScene.children[63] = ROUTE417;

let ROUTE418 = browser.currentScene.createNode("ROUTE");
ROUTE418.fromNode = "KickTimer";
ROUTE418.fromField = "fraction_changed";
ROUTE418.toNode = "l_acromioclavicular_RotationInterpolator";
ROUTE418.toField = "set_fraction";
browser.currentScene.children[64] = ROUTE418;

let ROUTE419 = browser.currentScene.createNode("ROUTE");
ROUTE419.fromNode = "KickTimer";
ROUTE419.fromField = "fraction_changed";
ROUTE419.toNode = "l_shoulder_RotationInterpolator";
ROUTE419.toField = "set_fraction";
browser.currentScene.children[65] = ROUTE419;

let ROUTE420 = browser.currentScene.createNode("ROUTE");
ROUTE420.fromNode = "KickTimer";
ROUTE420.fromField = "fraction_changed";
ROUTE420.toNode = "l_elbow_RotationInterpolator";
ROUTE420.toField = "set_fraction";
browser.currentScene.children[66] = ROUTE420;

let ROUTE421 = browser.currentScene.createNode("ROUTE");
ROUTE421.fromNode = "KickTimer";
ROUTE421.fromField = "fraction_changed";
ROUTE421.toNode = "l_wrist_RotationInterpolator";
ROUTE421.toField = "set_fraction";
browser.currentScene.children[67] = ROUTE421;

let ROUTE422 = browser.currentScene.createNode("ROUTE");
ROUTE422.fromNode = "KickTimer";
ROUTE422.fromField = "fraction_changed";
ROUTE422.toNode = "l_thumb1_RotationInterpolator";
ROUTE422.toField = "set_fraction";
browser.currentScene.children[68] = ROUTE422;

let ROUTE423 = browser.currentScene.createNode("ROUTE");
ROUTE423.fromNode = "KickTimer";
ROUTE423.fromField = "fraction_changed";
ROUTE423.toNode = "l_thumb2_RotationInterpolator";
ROUTE423.toField = "set_fraction";
browser.currentScene.children[69] = ROUTE423;

let ROUTE424 = browser.currentScene.createNode("ROUTE");
ROUTE424.fromNode = "KickTimer";
ROUTE424.fromField = "fraction_changed";
ROUTE424.toNode = "l_thumb3_RotationInterpolator";
ROUTE424.toField = "set_fraction";
browser.currentScene.children[70] = ROUTE424;

let ROUTE425 = browser.currentScene.createNode("ROUTE");
ROUTE425.fromNode = "KickTimer";
ROUTE425.fromField = "fraction_changed";
ROUTE425.toNode = "l_index0_RotationInterpolator";
ROUTE425.toField = "set_fraction";
browser.currentScene.children[71] = ROUTE425;

let ROUTE426 = browser.currentScene.createNode("ROUTE");
ROUTE426.fromNode = "KickTimer";
ROUTE426.fromField = "fraction_changed";
ROUTE426.toNode = "l_index1_RotationInterpolator";
ROUTE426.toField = "set_fraction";
browser.currentScene.children[72] = ROUTE426;

let ROUTE427 = browser.currentScene.createNode("ROUTE");
ROUTE427.fromNode = "KickTimer";
ROUTE427.fromField = "fraction_changed";
ROUTE427.toNode = "l_index2_RotationInterpolator";
ROUTE427.toField = "set_fraction";
browser.currentScene.children[73] = ROUTE427;

let ROUTE428 = browser.currentScene.createNode("ROUTE");
ROUTE428.fromNode = "KickTimer";
ROUTE428.fromField = "fraction_changed";
ROUTE428.toNode = "l_index3_RotationInterpolator";
ROUTE428.toField = "set_fraction";
browser.currentScene.children[74] = ROUTE428;

let ROUTE429 = browser.currentScene.createNode("ROUTE");
ROUTE429.fromNode = "KickTimer";
ROUTE429.fromField = "fraction_changed";
ROUTE429.toNode = "l_middle0_RotationInterpolator";
ROUTE429.toField = "set_fraction";
browser.currentScene.children[75] = ROUTE429;

let ROUTE430 = browser.currentScene.createNode("ROUTE");
ROUTE430.fromNode = "KickTimer";
ROUTE430.fromField = "fraction_changed";
ROUTE430.toNode = "l_middle1_RotationInterpolator";
ROUTE430.toField = "set_fraction";
browser.currentScene.children[76] = ROUTE430;

let ROUTE431 = browser.currentScene.createNode("ROUTE");
ROUTE431.fromNode = "KickTimer";
ROUTE431.fromField = "fraction_changed";
ROUTE431.toNode = "l_middle2_RotationInterpolator";
ROUTE431.toField = "set_fraction";
browser.currentScene.children[77] = ROUTE431;

let ROUTE432 = browser.currentScene.createNode("ROUTE");
ROUTE432.fromNode = "KickTimer";
ROUTE432.fromField = "fraction_changed";
ROUTE432.toNode = "l_middle3_RotationInterpolator";
ROUTE432.toField = "set_fraction";
browser.currentScene.children[78] = ROUTE432;

let ROUTE433 = browser.currentScene.createNode("ROUTE");
ROUTE433.fromNode = "KickTimer";
ROUTE433.fromField = "fraction_changed";
ROUTE433.toNode = "l_ring0_RotationInterpolator";
ROUTE433.toField = "set_fraction";
browser.currentScene.children[79] = ROUTE433;

let ROUTE434 = browser.currentScene.createNode("ROUTE");
ROUTE434.fromNode = "KickTimer";
ROUTE434.fromField = "fraction_changed";
ROUTE434.toNode = "l_ring1_RotationInterpolator";
ROUTE434.toField = "set_fraction";
browser.currentScene.children[80] = ROUTE434;

let ROUTE435 = browser.currentScene.createNode("ROUTE");
ROUTE435.fromNode = "KickTimer";
ROUTE435.fromField = "fraction_changed";
ROUTE435.toNode = "l_ring2_RotationInterpolator";
ROUTE435.toField = "set_fraction";
browser.currentScene.children[81] = ROUTE435;

let ROUTE436 = browser.currentScene.createNode("ROUTE");
ROUTE436.fromNode = "KickTimer";
ROUTE436.fromField = "fraction_changed";
ROUTE436.toNode = "l_ring3_RotationInterpolator";
ROUTE436.toField = "set_fraction";
browser.currentScene.children[82] = ROUTE436;

let ROUTE437 = browser.currentScene.createNode("ROUTE");
ROUTE437.fromNode = "KickTimer";
ROUTE437.fromField = "fraction_changed";
ROUTE437.toNode = "l_pinky0_RotationInterpolator";
ROUTE437.toField = "set_fraction";
browser.currentScene.children[83] = ROUTE437;

let ROUTE438 = browser.currentScene.createNode("ROUTE");
ROUTE438.fromNode = "KickTimer";
ROUTE438.fromField = "fraction_changed";
ROUTE438.toNode = "l_pinky1_RotationInterpolator";
ROUTE438.toField = "set_fraction";
browser.currentScene.children[84] = ROUTE438;

let ROUTE439 = browser.currentScene.createNode("ROUTE");
ROUTE439.fromNode = "KickTimer";
ROUTE439.fromField = "fraction_changed";
ROUTE439.toNode = "l_pinky2_RotationInterpolator";
ROUTE439.toField = "set_fraction";
browser.currentScene.children[85] = ROUTE439;

let ROUTE440 = browser.currentScene.createNode("ROUTE");
ROUTE440.fromNode = "KickTimer";
ROUTE440.fromField = "fraction_changed";
ROUTE440.toNode = "l_pinky3_RotationInterpolator";
ROUTE440.toField = "set_fraction";
browser.currentScene.children[86] = ROUTE440;

let ROUTE441 = browser.currentScene.createNode("ROUTE");
ROUTE441.fromNode = "KickTimer";
ROUTE441.fromField = "fraction_changed";
ROUTE441.toNode = "r_sternoclavicular_RotationInterpolator";
ROUTE441.toField = "set_fraction";
browser.currentScene.children[87] = ROUTE441;

let ROUTE442 = browser.currentScene.createNode("ROUTE");
ROUTE442.fromNode = "KickTimer";
ROUTE442.fromField = "fraction_changed";
ROUTE442.toNode = "r_acromioclavicular_RotationInterpolator";
ROUTE442.toField = "set_fraction";
browser.currentScene.children[88] = ROUTE442;

let ROUTE443 = browser.currentScene.createNode("ROUTE");
ROUTE443.fromNode = "KickTimer";
ROUTE443.fromField = "fraction_changed";
ROUTE443.toNode = "r_shoulder_RotationInterpolator";
ROUTE443.toField = "set_fraction";
browser.currentScene.children[89] = ROUTE443;

let ROUTE444 = browser.currentScene.createNode("ROUTE");
ROUTE444.fromNode = "KickTimer";
ROUTE444.fromField = "fraction_changed";
ROUTE444.toNode = "r_elbow_RotationInterpolator";
ROUTE444.toField = "set_fraction";
browser.currentScene.children[90] = ROUTE444;

let ROUTE445 = browser.currentScene.createNode("ROUTE");
ROUTE445.fromNode = "KickTimer";
ROUTE445.fromField = "fraction_changed";
ROUTE445.toNode = "r_wrist_RotationInterpolator";
ROUTE445.toField = "set_fraction";
browser.currentScene.children[91] = ROUTE445;

let ROUTE446 = browser.currentScene.createNode("ROUTE");
ROUTE446.fromNode = "KickTimer";
ROUTE446.fromField = "fraction_changed";
ROUTE446.toNode = "r_thumb1_RotationInterpolator";
ROUTE446.toField = "set_fraction";
browser.currentScene.children[92] = ROUTE446;

let ROUTE447 = browser.currentScene.createNode("ROUTE");
ROUTE447.fromNode = "KickTimer";
ROUTE447.fromField = "fraction_changed";
ROUTE447.toNode = "r_thumb2_RotationInterpolator";
ROUTE447.toField = "set_fraction";
browser.currentScene.children[93] = ROUTE447;

let ROUTE448 = browser.currentScene.createNode("ROUTE");
ROUTE448.fromNode = "KickTimer";
ROUTE448.fromField = "fraction_changed";
ROUTE448.toNode = "r_thumb3_RotationInterpolator";
ROUTE448.toField = "set_fraction";
browser.currentScene.children[94] = ROUTE448;

let ROUTE449 = browser.currentScene.createNode("ROUTE");
ROUTE449.fromNode = "KickTimer";
ROUTE449.fromField = "fraction_changed";
ROUTE449.toNode = "r_index0_RotationInterpolator";
ROUTE449.toField = "set_fraction";
browser.currentScene.children[95] = ROUTE449;

let ROUTE450 = browser.currentScene.createNode("ROUTE");
ROUTE450.fromNode = "KickTimer";
ROUTE450.fromField = "fraction_changed";
ROUTE450.toNode = "r_index1_RotationInterpolator";
ROUTE450.toField = "set_fraction";
browser.currentScene.children[96] = ROUTE450;

let ROUTE451 = browser.currentScene.createNode("ROUTE");
ROUTE451.fromNode = "KickTimer";
ROUTE451.fromField = "fraction_changed";
ROUTE451.toNode = "r_index2_RotationInterpolator";
ROUTE451.toField = "set_fraction";
browser.currentScene.children[97] = ROUTE451;

let ROUTE452 = browser.currentScene.createNode("ROUTE");
ROUTE452.fromNode = "KickTimer";
ROUTE452.fromField = "fraction_changed";
ROUTE452.toNode = "r_index3_RotationInterpolator";
ROUTE452.toField = "set_fraction";
browser.currentScene.children[98] = ROUTE452;

let ROUTE453 = browser.currentScene.createNode("ROUTE");
ROUTE453.fromNode = "KickTimer";
ROUTE453.fromField = "fraction_changed";
ROUTE453.toNode = "r_middle0_RotationInterpolator";
ROUTE453.toField = "set_fraction";
browser.currentScene.children[99] = ROUTE453;

let ROUTE454 = browser.currentScene.createNode("ROUTE");
ROUTE454.fromNode = "KickTimer";
ROUTE454.fromField = "fraction_changed";
ROUTE454.toNode = "r_middle1_RotationInterpolator";
ROUTE454.toField = "set_fraction";
browser.currentScene.children[100] = ROUTE454;

let ROUTE455 = browser.currentScene.createNode("ROUTE");
ROUTE455.fromNode = "KickTimer";
ROUTE455.fromField = "fraction_changed";
ROUTE455.toNode = "r_middle2_RotationInterpolator";
ROUTE455.toField = "set_fraction";
browser.currentScene.children[101] = ROUTE455;

let ROUTE456 = browser.currentScene.createNode("ROUTE");
ROUTE456.fromNode = "KickTimer";
ROUTE456.fromField = "fraction_changed";
ROUTE456.toNode = "r_middle3_RotationInterpolator";
ROUTE456.toField = "set_fraction";
browser.currentScene.children[102] = ROUTE456;

let ROUTE457 = browser.currentScene.createNode("ROUTE");
ROUTE457.fromNode = "KickTimer";
ROUTE457.fromField = "fraction_changed";
ROUTE457.toNode = "r_ring0_RotationInterpolator";
ROUTE457.toField = "set_fraction";
browser.currentScene.children[103] = ROUTE457;

let ROUTE458 = browser.currentScene.createNode("ROUTE");
ROUTE458.fromNode = "KickTimer";
ROUTE458.fromField = "fraction_changed";
ROUTE458.toNode = "r_ring1_RotationInterpolator";
ROUTE458.toField = "set_fraction";
browser.currentScene.children[104] = ROUTE458;

let ROUTE459 = browser.currentScene.createNode("ROUTE");
ROUTE459.fromNode = "KickTimer";
ROUTE459.fromField = "fraction_changed";
ROUTE459.toNode = "r_ring2_RotationInterpolator";
ROUTE459.toField = "set_fraction";
browser.currentScene.children[105] = ROUTE459;

let ROUTE460 = browser.currentScene.createNode("ROUTE");
ROUTE460.fromNode = "KickTimer";
ROUTE460.fromField = "fraction_changed";
ROUTE460.toNode = "r_ring3_RotationInterpolator";
ROUTE460.toField = "set_fraction";
browser.currentScene.children[106] = ROUTE460;

let ROUTE461 = browser.currentScene.createNode("ROUTE");
ROUTE461.fromNode = "KickTimer";
ROUTE461.fromField = "fraction_changed";
ROUTE461.toNode = "r_pinky0_RotationInterpolator";
ROUTE461.toField = "set_fraction";
browser.currentScene.children[107] = ROUTE461;

let ROUTE462 = browser.currentScene.createNode("ROUTE");
ROUTE462.fromNode = "KickTimer";
ROUTE462.fromField = "fraction_changed";
ROUTE462.toNode = "r_pinky1_RotationInterpolator";
ROUTE462.toField = "set_fraction";
browser.currentScene.children[108] = ROUTE462;

let ROUTE463 = browser.currentScene.createNode("ROUTE");
ROUTE463.fromNode = "KickTimer";
ROUTE463.fromField = "fraction_changed";
ROUTE463.toNode = "r_pinky2_RotationInterpolator";
ROUTE463.toField = "set_fraction";
browser.currentScene.children[109] = ROUTE463;

let ROUTE464 = browser.currentScene.createNode("ROUTE");
ROUTE464.fromNode = "KickTimer";
ROUTE464.fromField = "fraction_changed";
ROUTE464.toNode = "r_pinky3_RotationInterpolator";
ROUTE464.toField = "set_fraction";
browser.currentScene.children[110] = ROUTE464;

let ROUTE465 = browser.currentScene.createNode("ROUTE");
ROUTE465.fromNode = "HumanoidRoot_RotationInterpolator";
ROUTE465.fromField = "value_changed";
ROUTE465.toNode = "Joe_humanoid_root";
ROUTE465.toField = "set_rotation";
browser.currentScene.children[111] = ROUTE465;

let ROUTE466 = browser.currentScene.createNode("ROUTE");
ROUTE466.fromNode = "HumanoidRoot_TranslationInterpolator";
ROUTE466.fromField = "value_changed";
ROUTE466.toNode = "Joe_humanoid_root";
ROUTE466.toField = "set_translation";
browser.currentScene.children[112] = ROUTE466;

let ROUTE467 = browser.currentScene.createNode("ROUTE");
ROUTE467.fromNode = "sacroiliac_RotationInterpolator";
ROUTE467.fromField = "value_changed";
ROUTE467.toNode = "Joe_sacroiliac";
ROUTE467.toField = "set_rotation";
browser.currentScene.children[113] = ROUTE467;

let ROUTE468 = browser.currentScene.createNode("ROUTE");
ROUTE468.fromNode = "l_hip_RotationInterpolator";
ROUTE468.fromField = "value_changed";
ROUTE468.toNode = "Joe_l_hip";
ROUTE468.toField = "set_rotation";
browser.currentScene.children[114] = ROUTE468;

let ROUTE469 = browser.currentScene.createNode("ROUTE");
ROUTE469.fromNode = "l_knee_RotationInterpolator";
ROUTE469.fromField = "value_changed";
ROUTE469.toNode = "Joe_l_knee";
ROUTE469.toField = "set_rotation";
browser.currentScene.children[115] = ROUTE469;

let ROUTE470 = browser.currentScene.createNode("ROUTE");
ROUTE470.fromNode = "l_ankle_RotationInterpolator";
ROUTE470.fromField = "value_changed";
ROUTE470.toNode = "Joe_l_talocrural";
ROUTE470.toField = "set_rotation";
browser.currentScene.children[116] = ROUTE470;

let ROUTE471 = browser.currentScene.createNode("ROUTE");
ROUTE471.fromNode = "l_subtalar_RotationInterpolator";
ROUTE471.fromField = "value_changed";
ROUTE471.toNode = "Joe_l_tarsometatarsal_2";
ROUTE471.toField = "set_rotation";
browser.currentScene.children[117] = ROUTE471;

let ROUTE472 = browser.currentScene.createNode("ROUTE");
ROUTE472.fromNode = "l_midtarsal_RotationInterpolator";
ROUTE472.fromField = "value_changed";
ROUTE472.toNode = "Joe_l_metatarsophalangeal_2";
ROUTE472.toField = "set_rotation";
browser.currentScene.children[118] = ROUTE472;

let ROUTE473 = browser.currentScene.createNode("ROUTE");
ROUTE473.fromNode = "l_metatarsal_RotationInterpolator";
ROUTE473.fromField = "value_changed";
ROUTE473.toNode = "Joe_l_tarsal_distal_interphalangeal_2";
ROUTE473.toField = "set_rotation";
browser.currentScene.children[119] = ROUTE473;

let ROUTE474 = browser.currentScene.createNode("ROUTE");
ROUTE474.fromNode = "r_hip_RotationInterpolator";
ROUTE474.fromField = "value_changed";
ROUTE474.toNode = "Joe_r_hip";
ROUTE474.toField = "set_rotation";
browser.currentScene.children[120] = ROUTE474;

let ROUTE475 = browser.currentScene.createNode("ROUTE");
ROUTE475.fromNode = "r_knee_RotationInterpolator";
ROUTE475.fromField = "value_changed";
ROUTE475.toNode = "Joe_r_knee";
ROUTE475.toField = "set_rotation";
browser.currentScene.children[121] = ROUTE475;

let ROUTE476 = browser.currentScene.createNode("ROUTE");
ROUTE476.fromNode = "r_ankle_RotationInterpolator";
ROUTE476.fromField = "value_changed";
ROUTE476.toNode = "Joe_r_talocrural";
ROUTE476.toField = "set_rotation";
browser.currentScene.children[122] = ROUTE476;

let ROUTE477 = browser.currentScene.createNode("ROUTE");
ROUTE477.fromNode = "r_subtalar_RotationInterpolator";
ROUTE477.fromField = "value_changed";
ROUTE477.toNode = "Joe_r_tarsometatarsal_2";
ROUTE477.toField = "set_rotation";
browser.currentScene.children[123] = ROUTE477;

let ROUTE478 = browser.currentScene.createNode("ROUTE");
ROUTE478.fromNode = "r_midtarsal_RotationInterpolator";
ROUTE478.fromField = "value_changed";
ROUTE478.toNode = "Joe_r_metatarsophalangeal_2";
ROUTE478.toField = "set_rotation";
browser.currentScene.children[124] = ROUTE478;

let ROUTE479 = browser.currentScene.createNode("ROUTE");
ROUTE479.fromNode = "r_metatarsal_RotationInterpolator";
ROUTE479.fromField = "value_changed";
ROUTE479.toNode = "Joe_r_tarsal_distal_interphalangeal_2";
ROUTE479.toField = "set_rotation";
browser.currentScene.children[125] = ROUTE479;

let ROUTE480 = browser.currentScene.createNode("ROUTE");
ROUTE480.fromNode = "vl5_RotationInterpolator";
ROUTE480.fromField = "value_changed";
ROUTE480.toNode = "Joe_vl5";
ROUTE480.toField = "set_rotation";
browser.currentScene.children[126] = ROUTE480;

let ROUTE481 = browser.currentScene.createNode("ROUTE");
ROUTE481.fromNode = "vl4_RotationInterpolator";
ROUTE481.fromField = "value_changed";
ROUTE481.toNode = "Joe_vl4";
ROUTE481.toField = "set_rotation";
browser.currentScene.children[127] = ROUTE481;

let ROUTE482 = browser.currentScene.createNode("ROUTE");
ROUTE482.fromNode = "vl3_RotationInterpolator";
ROUTE482.fromField = "value_changed";
ROUTE482.toNode = "Joe_vl3";
ROUTE482.toField = "set_rotation";
browser.currentScene.children[128] = ROUTE482;

let ROUTE483 = browser.currentScene.createNode("ROUTE");
ROUTE483.fromNode = "vl2_RotationInterpolator";
ROUTE483.fromField = "value_changed";
ROUTE483.toNode = "Joe_vl2";
ROUTE483.toField = "set_rotation";
browser.currentScene.children[129] = ROUTE483;

let ROUTE484 = browser.currentScene.createNode("ROUTE");
ROUTE484.fromNode = "vl1_RotationInterpolator";
ROUTE484.fromField = "value_changed";
ROUTE484.toNode = "Joe_vl1";
ROUTE484.toField = "set_rotation";
browser.currentScene.children[130] = ROUTE484;

let ROUTE485 = browser.currentScene.createNode("ROUTE");
ROUTE485.fromNode = "vt12_RotationInterpolator";
ROUTE485.fromField = "value_changed";
ROUTE485.toNode = "Joe_vt12";
ROUTE485.toField = "set_rotation";
browser.currentScene.children[131] = ROUTE485;

let ROUTE486 = browser.currentScene.createNode("ROUTE");
ROUTE486.fromNode = "vt11_RotationInterpolator";
ROUTE486.fromField = "value_changed";
ROUTE486.toNode = "Joe_vt11";
ROUTE486.toField = "set_rotation";
browser.currentScene.children[132] = ROUTE486;

let ROUTE487 = browser.currentScene.createNode("ROUTE");
ROUTE487.fromNode = "vt10_RotationInterpolator";
ROUTE487.fromField = "value_changed";
ROUTE487.toNode = "Joe_vt10";
ROUTE487.toField = "set_rotation";
browser.currentScene.children[133] = ROUTE487;

let ROUTE488 = browser.currentScene.createNode("ROUTE");
ROUTE488.fromNode = "vt9_RotationInterpolator";
ROUTE488.fromField = "value_changed";
ROUTE488.toNode = "Joe_vt9";
ROUTE488.toField = "set_rotation";
browser.currentScene.children[134] = ROUTE488;

let ROUTE489 = browser.currentScene.createNode("ROUTE");
ROUTE489.fromNode = "vt8_RotationInterpolator";
ROUTE489.fromField = "value_changed";
ROUTE489.toNode = "Joe_vt8";
ROUTE489.toField = "set_rotation";
browser.currentScene.children[135] = ROUTE489;

let ROUTE490 = browser.currentScene.createNode("ROUTE");
ROUTE490.fromNode = "vt7_RotationInterpolator";
ROUTE490.fromField = "value_changed";
ROUTE490.toNode = "Joe_vt7";
ROUTE490.toField = "set_rotation";
browser.currentScene.children[136] = ROUTE490;

let ROUTE491 = browser.currentScene.createNode("ROUTE");
ROUTE491.fromNode = "vt6_RotationInterpolator";
ROUTE491.fromField = "value_changed";
ROUTE491.toNode = "Joe_vt6";
ROUTE491.toField = "set_rotation";
browser.currentScene.children[137] = ROUTE491;

let ROUTE492 = browser.currentScene.createNode("ROUTE");
ROUTE492.fromNode = "vt5_RotationInterpolator";
ROUTE492.fromField = "value_changed";
ROUTE492.toNode = "Joe_vt5";
ROUTE492.toField = "set_rotation";
browser.currentScene.children[138] = ROUTE492;

let ROUTE493 = browser.currentScene.createNode("ROUTE");
ROUTE493.fromNode = "vt4_RotationInterpolator";
ROUTE493.fromField = "value_changed";
ROUTE493.toNode = "Joe_vt4";
ROUTE493.toField = "set_rotation";
browser.currentScene.children[139] = ROUTE493;

let ROUTE494 = browser.currentScene.createNode("ROUTE");
ROUTE494.fromNode = "vt3_RotationInterpolator";
ROUTE494.fromField = "value_changed";
ROUTE494.toNode = "Joe_vt3";
ROUTE494.toField = "set_rotation";
browser.currentScene.children[140] = ROUTE494;

let ROUTE495 = browser.currentScene.createNode("ROUTE");
ROUTE495.fromNode = "vt2_RotationInterpolator";
ROUTE495.fromField = "value_changed";
ROUTE495.toNode = "Joe_vt2";
ROUTE495.toField = "set_rotation";
browser.currentScene.children[141] = ROUTE495;

let ROUTE496 = browser.currentScene.createNode("ROUTE");
ROUTE496.fromNode = "vt1_RotationInterpolator";
ROUTE496.fromField = "value_changed";
ROUTE496.toNode = "Joe_vt1";
ROUTE496.toField = "set_rotation";
browser.currentScene.children[142] = ROUTE496;

let ROUTE497 = browser.currentScene.createNode("ROUTE");
ROUTE497.fromNode = "vc7_RotationInterpolator";
ROUTE497.fromField = "value_changed";
ROUTE497.toNode = "Joe_vc7";
ROUTE497.toField = "set_rotation";
browser.currentScene.children[143] = ROUTE497;

let ROUTE498 = browser.currentScene.createNode("ROUTE");
ROUTE498.fromNode = "vc6_RotationInterpolator";
ROUTE498.fromField = "value_changed";
ROUTE498.toNode = "Joe_vc6";
ROUTE498.toField = "set_rotation";
browser.currentScene.children[144] = ROUTE498;

let ROUTE499 = browser.currentScene.createNode("ROUTE");
ROUTE499.fromNode = "vc5_RotationInterpolator";
ROUTE499.fromField = "value_changed";
ROUTE499.toNode = "Joe_vc5";
ROUTE499.toField = "set_rotation";
browser.currentScene.children[145] = ROUTE499;

let ROUTE500 = browser.currentScene.createNode("ROUTE");
ROUTE500.fromNode = "vc4_RotationInterpolator";
ROUTE500.fromField = "value_changed";
ROUTE500.toNode = "Joe_vc4";
ROUTE500.toField = "set_rotation";
browser.currentScene.children[146] = ROUTE500;

let ROUTE501 = browser.currentScene.createNode("ROUTE");
ROUTE501.fromNode = "vc3_RotationInterpolator";
ROUTE501.fromField = "value_changed";
ROUTE501.toNode = "Joe_vc3";
ROUTE501.toField = "set_rotation";
browser.currentScene.children[147] = ROUTE501;

let ROUTE502 = browser.currentScene.createNode("ROUTE");
ROUTE502.fromNode = "vc2_RotationInterpolator";
ROUTE502.fromField = "value_changed";
ROUTE502.toNode = "Joe_vc2";
ROUTE502.toField = "set_rotation";
browser.currentScene.children[148] = ROUTE502;

let ROUTE503 = browser.currentScene.createNode("ROUTE");
ROUTE503.fromNode = "vc1_RotationInterpolator";
ROUTE503.fromField = "value_changed";
ROUTE503.toNode = "Joe_vc1";
ROUTE503.toField = "set_rotation";
browser.currentScene.children[149] = ROUTE503;

let ROUTE504 = browser.currentScene.createNode("ROUTE");
ROUTE504.fromNode = "skullbase_RotationInterpolator";
ROUTE504.fromField = "value_changed";
ROUTE504.toNode = "Joe_skullbase";
ROUTE504.toField = "set_rotation";
browser.currentScene.children[150] = ROUTE504;

let ROUTE505 = browser.currentScene.createNode("ROUTE");
ROUTE505.fromNode = "l_eyelid_joint_RotationInterpolator";
ROUTE505.fromField = "value_changed";
ROUTE505.toNode = "Joe_l_eyelid_joint";
ROUTE505.toField = "set_rotation";
browser.currentScene.children[151] = ROUTE505;

let ROUTE506 = browser.currentScene.createNode("ROUTE");
ROUTE506.fromNode = "l_eyeball_joint_RotationInterpolator";
ROUTE506.fromField = "value_changed";
ROUTE506.toNode = "Joe_l_eyeball_joint";
ROUTE506.toField = "set_rotation";
browser.currentScene.children[152] = ROUTE506;

let ROUTE507 = browser.currentScene.createNode("ROUTE");
ROUTE507.fromNode = "l_eyebrow_joint_RotationInterpolator";
ROUTE507.fromField = "value_changed";
ROUTE507.toNode = "Joe_l_eyebrow_joint";
ROUTE507.toField = "set_rotation";
browser.currentScene.children[153] = ROUTE507;

let ROUTE508 = browser.currentScene.createNode("ROUTE");
ROUTE508.fromNode = "r_eyelid_joint_RotationInterpolator";
ROUTE508.fromField = "value_changed";
ROUTE508.toNode = "Joe_r_eyelid_joint";
ROUTE508.toField = "set_rotation";
browser.currentScene.children[154] = ROUTE508;

let ROUTE509 = browser.currentScene.createNode("ROUTE");
ROUTE509.fromNode = "r_eyeball_joint_RotationInterpolator";
ROUTE509.fromField = "value_changed";
ROUTE509.toNode = "Joe_r_eyeball_joint";
ROUTE509.toField = "set_rotation";
browser.currentScene.children[155] = ROUTE509;

let ROUTE510 = browser.currentScene.createNode("ROUTE");
ROUTE510.fromNode = "r_eyebrow_joint_RotationInterpolator";
ROUTE510.fromField = "value_changed";
ROUTE510.toNode = "Joe_r_eyebrow_joint";
ROUTE510.toField = "set_rotation";
browser.currentScene.children[156] = ROUTE510;

let ROUTE511 = browser.currentScene.createNode("ROUTE");
ROUTE511.fromNode = "temporomandibular_RotationInterpolator";
ROUTE511.fromField = "value_changed";
ROUTE511.toNode = "Joe_temporomandibular";
ROUTE511.toField = "set_rotation";
browser.currentScene.children[157] = ROUTE511;

let ROUTE512 = browser.currentScene.createNode("ROUTE");
ROUTE512.fromNode = "l_sternoclavicular_RotationInterpolator";
ROUTE512.fromField = "value_changed";
ROUTE512.toNode = "Joe_l_sternoclavicular";
ROUTE512.toField = "set_rotation";
browser.currentScene.children[158] = ROUTE512;

let ROUTE513 = browser.currentScene.createNode("ROUTE");
ROUTE513.fromNode = "l_acromioclavicular_RotationInterpolator";
ROUTE513.fromField = "value_changed";
ROUTE513.toNode = "Joe_l_acromioclavicular";
ROUTE513.toField = "set_rotation";
browser.currentScene.children[159] = ROUTE513;

let ROUTE514 = browser.currentScene.createNode("ROUTE");
ROUTE514.fromNode = "l_shoulder_RotationInterpolator";
ROUTE514.fromField = "value_changed";
ROUTE514.toNode = "Joe_l_shoulder";
ROUTE514.toField = "set_rotation";
browser.currentScene.children[160] = ROUTE514;

let ROUTE515 = browser.currentScene.createNode("ROUTE");
ROUTE515.fromNode = "l_elbow_RotationInterpolator";
ROUTE515.fromField = "value_changed";
ROUTE515.toNode = "Joe_l_elbow";
ROUTE515.toField = "set_rotation";
browser.currentScene.children[161] = ROUTE515;

let ROUTE516 = browser.currentScene.createNode("ROUTE");
ROUTE516.fromNode = "l_wrist_RotationInterpolator";
ROUTE516.fromField = "value_changed";
ROUTE516.toNode = "Joe_l_radiocarpal";
ROUTE516.toField = "set_rotation";
browser.currentScene.children[162] = ROUTE516;

let ROUTE517 = browser.currentScene.createNode("ROUTE");
ROUTE517.fromNode = "l_thumb1_RotationInterpolator";
ROUTE517.fromField = "value_changed";
ROUTE517.toNode = "Joe_l_carpometacarpal_1";
ROUTE517.toField = "set_rotation";
browser.currentScene.children[163] = ROUTE517;

let ROUTE518 = browser.currentScene.createNode("ROUTE");
ROUTE518.fromNode = "l_thumb2_RotationInterpolator";
ROUTE518.fromField = "value_changed";
ROUTE518.toNode = "Joe_l_metacarpophalangeal_1";
ROUTE518.toField = "set_rotation";
browser.currentScene.children[164] = ROUTE518;

let ROUTE519 = browser.currentScene.createNode("ROUTE");
ROUTE519.fromNode = "l_thumb3_RotationInterpolator";
ROUTE519.fromField = "value_changed";
ROUTE519.toNode = "Joe_l_carpal_interphalangeal_1";
ROUTE519.toField = "set_rotation";
browser.currentScene.children[165] = ROUTE519;

let ROUTE520 = browser.currentScene.createNode("ROUTE");
ROUTE520.fromNode = "l_index0_RotationInterpolator";
ROUTE520.fromField = "value_changed";
ROUTE520.toNode = "Joe_l_carpometacarpal_2";
ROUTE520.toField = "set_rotation";
browser.currentScene.children[166] = ROUTE520;

let ROUTE521 = browser.currentScene.createNode("ROUTE");
ROUTE521.fromNode = "l_index1_RotationInterpolator";
ROUTE521.fromField = "value_changed";
ROUTE521.toNode = "Joe_l_metacarpophalangeal_2";
ROUTE521.toField = "set_rotation";
browser.currentScene.children[167] = ROUTE521;

let ROUTE522 = browser.currentScene.createNode("ROUTE");
ROUTE522.fromNode = "l_index2_RotationInterpolator";
ROUTE522.fromField = "value_changed";
ROUTE522.toNode = "Joe_l_carpal_proximal_interphalangeal_2";
ROUTE522.toField = "set_rotation";
browser.currentScene.children[168] = ROUTE522;

let ROUTE523 = browser.currentScene.createNode("ROUTE");
ROUTE523.fromNode = "l_index3_RotationInterpolator";
ROUTE523.fromField = "value_changed";
ROUTE523.toNode = "Joe_l_carpal_distal_interphalangeal_2";
ROUTE523.toField = "set_rotation";
browser.currentScene.children[169] = ROUTE523;

let ROUTE524 = browser.currentScene.createNode("ROUTE");
ROUTE524.fromNode = "l_middle0_RotationInterpolator";
ROUTE524.fromField = "value_changed";
ROUTE524.toNode = "Joe_l_carpometacarpal_3";
ROUTE524.toField = "set_rotation";
browser.currentScene.children[170] = ROUTE524;

let ROUTE525 = browser.currentScene.createNode("ROUTE");
ROUTE525.fromNode = "l_middle1_RotationInterpolator";
ROUTE525.fromField = "value_changed";
ROUTE525.toNode = "Joe_l_metacarpophalangeal_3";
ROUTE525.toField = "set_rotation";
browser.currentScene.children[171] = ROUTE525;

let ROUTE526 = browser.currentScene.createNode("ROUTE");
ROUTE526.fromNode = "l_middle2_RotationInterpolator";
ROUTE526.fromField = "value_changed";
ROUTE526.toNode = "Joe_l_carpal_proximal_interphalangeal_3";
ROUTE526.toField = "set_rotation";
browser.currentScene.children[172] = ROUTE526;

let ROUTE527 = browser.currentScene.createNode("ROUTE");
ROUTE527.fromNode = "l_middle3_RotationInterpolator";
ROUTE527.fromField = "value_changed";
ROUTE527.toNode = "Joe_l_carpal_distal_interphalangeal_3";
ROUTE527.toField = "set_rotation";
browser.currentScene.children[173] = ROUTE527;

let ROUTE528 = browser.currentScene.createNode("ROUTE");
ROUTE528.fromNode = "l_ring0_RotationInterpolator";
ROUTE528.fromField = "value_changed";
ROUTE528.toNode = "Joe_l_carpometacarpal_4";
ROUTE528.toField = "set_rotation";
browser.currentScene.children[174] = ROUTE528;

let ROUTE529 = browser.currentScene.createNode("ROUTE");
ROUTE529.fromNode = "l_ring1_RotationInterpolator";
ROUTE529.fromField = "value_changed";
ROUTE529.toNode = "Joe_l_metacarpophalangeal_4";
ROUTE529.toField = "set_rotation";
browser.currentScene.children[175] = ROUTE529;

let ROUTE530 = browser.currentScene.createNode("ROUTE");
ROUTE530.fromNode = "l_ring2_RotationInterpolator";
ROUTE530.fromField = "value_changed";
ROUTE530.toNode = "Joe_l_carpal_proximal_interphalangeal_4";
ROUTE530.toField = "set_rotation";
browser.currentScene.children[176] = ROUTE530;

let ROUTE531 = browser.currentScene.createNode("ROUTE");
ROUTE531.fromNode = "l_ring3_RotationInterpolator";
ROUTE531.fromField = "value_changed";
ROUTE531.toNode = "Joe_l_carpal_distal_interphalangeal_4";
ROUTE531.toField = "set_rotation";
browser.currentScene.children[177] = ROUTE531;

let ROUTE532 = browser.currentScene.createNode("ROUTE");
ROUTE532.fromNode = "l_pinky0_RotationInterpolator";
ROUTE532.fromField = "value_changed";
ROUTE532.toNode = "Joe_l_carpometacarpal_5";
ROUTE532.toField = "set_rotation";
browser.currentScene.children[178] = ROUTE532;

let ROUTE533 = browser.currentScene.createNode("ROUTE");
ROUTE533.fromNode = "l_pinky1_RotationInterpolator";
ROUTE533.fromField = "value_changed";
ROUTE533.toNode = "Joe_l_metacarpophalangeal_5";
ROUTE533.toField = "set_rotation";
browser.currentScene.children[179] = ROUTE533;

let ROUTE534 = browser.currentScene.createNode("ROUTE");
ROUTE534.fromNode = "l_pinky2_RotationInterpolator";
ROUTE534.fromField = "value_changed";
ROUTE534.toNode = "Joe_l_carpal_proximal_interphalangeal_5";
ROUTE534.toField = "set_rotation";
browser.currentScene.children[180] = ROUTE534;

let ROUTE535 = browser.currentScene.createNode("ROUTE");
ROUTE535.fromNode = "l_pinky3_RotationInterpolator";
ROUTE535.fromField = "value_changed";
ROUTE535.toNode = "Joe_l_carpal_distal_interphalangeal_5";
ROUTE535.toField = "set_rotation";
browser.currentScene.children[181] = ROUTE535;

let ROUTE536 = browser.currentScene.createNode("ROUTE");
ROUTE536.fromNode = "r_sternoclavicular_RotationInterpolator";
ROUTE536.fromField = "value_changed";
ROUTE536.toNode = "Joe_r_sternoclavicular";
ROUTE536.toField = "set_rotation";
browser.currentScene.children[182] = ROUTE536;

let ROUTE537 = browser.currentScene.createNode("ROUTE");
ROUTE537.fromNode = "r_acromioclavicular_RotationInterpolator";
ROUTE537.fromField = "value_changed";
ROUTE537.toNode = "Joe_r_acromioclavicular";
ROUTE537.toField = "set_rotation";
browser.currentScene.children[183] = ROUTE537;

let ROUTE538 = browser.currentScene.createNode("ROUTE");
ROUTE538.fromNode = "r_shoulder_RotationInterpolator";
ROUTE538.fromField = "value_changed";
ROUTE538.toNode = "Joe_r_shoulder";
ROUTE538.toField = "set_rotation";
browser.currentScene.children[184] = ROUTE538;

let ROUTE539 = browser.currentScene.createNode("ROUTE");
ROUTE539.fromNode = "r_elbow_RotationInterpolator";
ROUTE539.fromField = "value_changed";
ROUTE539.toNode = "Joe_r_elbow";
ROUTE539.toField = "set_rotation";
browser.currentScene.children[185] = ROUTE539;

let ROUTE540 = browser.currentScene.createNode("ROUTE");
ROUTE540.fromNode = "r_wrist_RotationInterpolator";
ROUTE540.fromField = "value_changed";
ROUTE540.toNode = "Joe_r_radiocarpal";
ROUTE540.toField = "set_rotation";
browser.currentScene.children[186] = ROUTE540;

let ROUTE541 = browser.currentScene.createNode("ROUTE");
ROUTE541.fromNode = "r_thumb1_RotationInterpolator";
ROUTE541.fromField = "value_changed";
ROUTE541.toNode = "Joe_r_carpometacarpal_1";
ROUTE541.toField = "set_rotation";
browser.currentScene.children[187] = ROUTE541;

let ROUTE542 = browser.currentScene.createNode("ROUTE");
ROUTE542.fromNode = "r_thumb2_RotationInterpolator";
ROUTE542.fromField = "value_changed";
ROUTE542.toNode = "Joe_r_metacarpophalangeal_1";
ROUTE542.toField = "set_rotation";
browser.currentScene.children[188] = ROUTE542;

let ROUTE543 = browser.currentScene.createNode("ROUTE");
ROUTE543.fromNode = "r_thumb3_RotationInterpolator";
ROUTE543.fromField = "value_changed";
ROUTE543.toNode = "Joe_r_carpal_interphalangeal_1";
ROUTE543.toField = "set_rotation";
browser.currentScene.children[189] = ROUTE543;

let ROUTE544 = browser.currentScene.createNode("ROUTE");
ROUTE544.fromNode = "r_index0_RotationInterpolator";
ROUTE544.fromField = "value_changed";
ROUTE544.toNode = "Joe_r_carpometacarpal_2";
ROUTE544.toField = "set_rotation";
browser.currentScene.children[190] = ROUTE544;

let ROUTE545 = browser.currentScene.createNode("ROUTE");
ROUTE545.fromNode = "r_index1_RotationInterpolator";
ROUTE545.fromField = "value_changed";
ROUTE545.toNode = "Joe_r_metacarpophalangeal_2";
ROUTE545.toField = "set_rotation";
browser.currentScene.children[191] = ROUTE545;

let ROUTE546 = browser.currentScene.createNode("ROUTE");
ROUTE546.fromNode = "r_index2_RotationInterpolator";
ROUTE546.fromField = "value_changed";
ROUTE546.toNode = "Joe_r_carpal_proximal_interphalangeal_2";
ROUTE546.toField = "set_rotation";
browser.currentScene.children[192] = ROUTE546;

let ROUTE547 = browser.currentScene.createNode("ROUTE");
ROUTE547.fromNode = "r_index3_RotationInterpolator";
ROUTE547.fromField = "value_changed";
ROUTE547.toNode = "Joe_r_carpal_distal_interphalangeal_2";
ROUTE547.toField = "set_rotation";
browser.currentScene.children[193] = ROUTE547;

let ROUTE548 = browser.currentScene.createNode("ROUTE");
ROUTE548.fromNode = "r_middle0_RotationInterpolator";
ROUTE548.fromField = "value_changed";
ROUTE548.toNode = "Joe_r_carpometacarpal_3";
ROUTE548.toField = "set_rotation";
browser.currentScene.children[194] = ROUTE548;

let ROUTE549 = browser.currentScene.createNode("ROUTE");
ROUTE549.fromNode = "r_middle1_RotationInterpolator";
ROUTE549.fromField = "value_changed";
ROUTE549.toNode = "Joe_r_metacarpophalangeal_3";
ROUTE549.toField = "set_rotation";
browser.currentScene.children[195] = ROUTE549;

let ROUTE550 = browser.currentScene.createNode("ROUTE");
ROUTE550.fromNode = "r_middle2_RotationInterpolator";
ROUTE550.fromField = "value_changed";
ROUTE550.toNode = "Joe_r_carpal_proximal_interphalangeal_3";
ROUTE550.toField = "set_rotation";
browser.currentScene.children[196] = ROUTE550;

let ROUTE551 = browser.currentScene.createNode("ROUTE");
ROUTE551.fromNode = "r_middle3_RotationInterpolator";
ROUTE551.fromField = "value_changed";
ROUTE551.toNode = "Joe_r_carpal_distal_interphalangeal_3";
ROUTE551.toField = "set_rotation";
browser.currentScene.children[197] = ROUTE551;

let ROUTE552 = browser.currentScene.createNode("ROUTE");
ROUTE552.fromNode = "r_ring0_RotationInterpolator";
ROUTE552.fromField = "value_changed";
ROUTE552.toNode = "Joe_r_carpometacarpal_4";
ROUTE552.toField = "set_rotation";
browser.currentScene.children[198] = ROUTE552;

let ROUTE553 = browser.currentScene.createNode("ROUTE");
ROUTE553.fromNode = "r_ring1_RotationInterpolator";
ROUTE553.fromField = "value_changed";
ROUTE553.toNode = "Joe_r_metacarpophalangeal_4";
ROUTE553.toField = "set_rotation";
browser.currentScene.children[199] = ROUTE553;

let ROUTE554 = browser.currentScene.createNode("ROUTE");
ROUTE554.fromNode = "r_ring2_RotationInterpolator";
ROUTE554.fromField = "value_changed";
ROUTE554.toNode = "Joe_r_carpal_proximal_interphalangeal_4";
ROUTE554.toField = "set_rotation";
browser.currentScene.children[200] = ROUTE554;

let ROUTE555 = browser.currentScene.createNode("ROUTE");
ROUTE555.fromNode = "r_ring3_RotationInterpolator";
ROUTE555.fromField = "value_changed";
ROUTE555.toNode = "Joe_r_carpal_distal_interphalangeal_4";
ROUTE555.toField = "set_rotation";
browser.currentScene.children[201] = ROUTE555;

let ROUTE556 = browser.currentScene.createNode("ROUTE");
ROUTE556.fromNode = "r_pinky0_RotationInterpolator";
ROUTE556.fromField = "value_changed";
ROUTE556.toNode = "Joe_r_carpometacarpal_5";
ROUTE556.toField = "set_rotation";
browser.currentScene.children[202] = ROUTE556;

let ROUTE557 = browser.currentScene.createNode("ROUTE");
ROUTE557.fromNode = "r_pinky1_RotationInterpolator";
ROUTE557.fromField = "value_changed";
ROUTE557.toNode = "Joe_r_metacarpophalangeal_5";
ROUTE557.toField = "set_rotation";
browser.currentScene.children[203] = ROUTE557;

let ROUTE558 = browser.currentScene.createNode("ROUTE");
ROUTE558.fromNode = "r_pinky2_RotationInterpolator";
ROUTE558.fromField = "value_changed";
ROUTE558.toNode = "Joe_r_carpal_proximal_interphalangeal_5";
ROUTE558.toField = "set_rotation";
browser.currentScene.children[204] = ROUTE558;

let ROUTE559 = browser.currentScene.createNode("ROUTE");
ROUTE559.fromNode = "r_pinky3_RotationInterpolator";
ROUTE559.fromField = "value_changed";
ROUTE559.toNode = "Joe_r_carpal_distal_interphalangeal_5";
ROUTE559.toField = "set_rotation";
browser.currentScene.children[205] = ROUTE559;

let ROUTE560 = browser.currentScene.createNode("ROUTE");
ROUTE560.fromNode = "KickTimer";
ROUTE560.fromField = "fraction_changed";
ROUTE560.toNode = "skull_tipInterpolator";
ROUTE560.toField = "set_fraction";
browser.currentScene.children[206] = ROUTE560;

let ROUTE561 = browser.currentScene.createNode("ROUTE");
ROUTE561.fromNode = "skull_tipInterpolator";
ROUTE561.fromField = "value_changed";
ROUTE561.toNode = "Joe_skull_tip_raiser_action";
ROUTE561.toField = "set_weight";
browser.currentScene.children[207] = ROUTE561;

let ROUTE562 = browser.currentScene.createNode("ROUTE");
ROUTE562.fromNode = "KickTimer";
ROUTE562.fromField = "fraction_changed";
ROUTE562.toNode = "SkinInterpolator";
ROUTE562.toField = "set_fraction";
browser.currentScene.children[208] = ROUTE562;

let ROUTE563 = browser.currentScene.createNode("ROUTE");
ROUTE563.fromNode = "SkinInterpolator";
ROUTE563.fromField = "value_changed";
ROUTE563.toNode = "KickTextureTransform";
ROUTE563.toField = "set_rotation";
browser.currentScene.children[209] = ROUTE563;

let ROUTE564 = browser.currentScene.createNode("ROUTE");
ROUTE564.fromNode = "KickTimer";
ROUTE564.fromField = "fraction_changed";
ROUTE564.toNode = "ball_TranslationInterpolator";
ROUTE564.toField = "set_fraction";
browser.currentScene.children[210] = ROUTE564;

let ROUTE565 = browser.currentScene.createNode("ROUTE");
ROUTE565.fromNode = "ball_TranslationInterpolator";
ROUTE565.fromField = "value_changed";
ROUTE565.toNode = "SBall";
ROUTE565.toField = "set_translation";
browser.currentScene.children[211] = ROUTE565;

let ROUTE566 = browser.currentScene.createNode("ROUTE");
ROUTE566.fromNode = "KickTimer";
ROUTE566.fromField = "fraction_changed";
ROUTE566.toNode = "ball_RotationInterpolator";
ROUTE566.toField = "set_fraction";
browser.currentScene.children[212] = ROUTE566;

let ROUTE567 = browser.currentScene.createNode("ROUTE");
ROUTE567.fromNode = "ball_RotationInterpolator";
ROUTE567.fromField = "value_changed";
ROUTE567.toNode = "SBall";
ROUTE567.toField = "set_rotation";
browser.currentScene.children[213] = ROUTE567;

}
main ();
