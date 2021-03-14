let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.info = new MFString(new java.lang.String["X3D Humanoid LOA3 skeleton","skin from hanim sites, surface features, and some added points","390 points"]);
WorldInfo2.title = "X3D HANIM LOA3 Skeleton, 390 point Skin, texcoords, Displacer, teTrans for Joe_ by Joe";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let NavigationInfo3 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo3.DEF = "Start_NavigationInfo";
NavigationInfo3.headlight = False;
NavigationInfo3.speed = 2.5;
browser.currentScene.children[1] = NavigationInfo3;

let Background4 = browser.currentScene.createNode("Background");
Background4.DEF = "blue_Background";
browser.currentScene.children[2] = Background4;

let SpotLight5 = browser.currentScene.createNode("SpotLight");
SpotLight5.DEF = "light1";
SpotLight5.ambientIntensity = 0.7;
SpotLight5.beamWidth = 1.5;
SpotLight5.color = new SFColor(new float[0.8,0.8,1]);
SpotLight5.cutOffAngle = 0.6;
SpotLight5.direction = new SFVec3f(new float[0,0,0]);
SpotLight5.location = new SFVec3f(new float[0,3,3]);
SpotLight5.radius = 10;
browser.currentScene.children[3] = SpotLight5;

let PointLight6 = browser.currentScene.createNode("PointLight");
PointLight6.DEF = "light2";
PointLight6.ambientIntensity = 0.7;
PointLight6.color = new SFColor(new float[0.8,0.8,1]);
PointLight6.location = new SFVec3f(new float[0,10,-7]);
browser.currentScene.children[4] = PointLight6;

//External from the Humanoid viewpoints
let Viewpoint7 = browser.currentScene.createNode("Viewpoint");
Viewpoint7.DEF = "Scene_InclinedView";
Viewpoint7.centerOfRotation = new SFVec3f(new float[0,0.85,0]);
Viewpoint7.description = "Scene_Inclined View";
Viewpoint7.orientation = new SFRotation(new float[-0.113,0.993,0.0347,0.671]);
Viewpoint7.position = new SFVec3f(new float[1.62,1.05,3.06]);
browser.currentScene.children[5] = Viewpoint7;

let Viewpoint8 = browser.currentScene.createNode("Viewpoint");
Viewpoint8.DEF = "Scene_IFrontView";
Viewpoint8.centerOfRotation = new SFVec3f(new float[0,0.8,0]);
Viewpoint8.description = "Scene_Front View";
Viewpoint8.position = new SFVec3f(new float[0,0.8,2.58]);
browser.currentScene.children[6] = Viewpoint8;

let Viewpoint9 = browser.currentScene.createNode("Viewpoint");
Viewpoint9.DEF = "Scene_ISideView";
Viewpoint9.centerOfRotation = new SFVec3f(new float[0,0.8,0]);
Viewpoint9.description = "Scene_Side View";
Viewpoint9.orientation = new SFRotation(new float[0,1,0,1.5708]);
Viewpoint9.position = new SFVec3f(new float[2.6,0.8,0]);
browser.currentScene.children[7] = Viewpoint9;

let Viewpoint10 = browser.currentScene.createNode("Viewpoint");
Viewpoint10.DEF = "Scene_BackView";
Viewpoint10.centerOfRotation = new SFVec3f(new float[0,1.5,0]);
Viewpoint10.description = "Scene_Back View";
Viewpoint10.orientation = new SFRotation(new float[0,1,0,3.14]);
Viewpoint10.position = new SFVec3f(new float[0,1.5,-3]);
browser.currentScene.children[8] = Viewpoint10;

let Viewpoint11 = browser.currentScene.createNode("Viewpoint");
Viewpoint11.DEF = "Scene_TopView";
Viewpoint11.centerOfRotation = new SFVec3f(new float[0,1.5,0]);
Viewpoint11.description = "Scene_Top View";
Viewpoint11.orientation = new SFRotation(new float[1,0,0,-1.5708]);
Viewpoint11.position = new SFVec3f(new float[0,3.5,0]);
browser.currentScene.children[9] = Viewpoint11;

let Group12 = browser.currentScene.createNode("Group");
Group12.DEF = "Joe_Humanoid";
let HAnimHumanoid13 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid13.name = "Human";
HAnimHumanoid13.DEF = "Joe_Human";
HAnimHumanoid13.loa = 3;
HAnimHumanoid13.version = "2.0";
let MetadataSet14 = browser.currentScene.createNode("MetadataSet");
MetadataSet14.name = "warnings";
MetadataSet14.reference = "HAnim";
let MetadataString15 = browser.currentScene.createNode("MetadataString");
MetadataString15.name = "SymmetricalLeftRight";
MetadataString15.reference = "correction options: ignore, warn, average, left, right, largest, smallest";
MetadataString15.value = new MFString(new java.lang.String["ignore"]);
MetadataSet14.value = new MFNode();

MetadataSet14.value[0] = MetadataString15;

HAnimHumanoid13.metadata = MetadataSet14;

let HAnimJoint16 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint16.name = "humanoid_root";
HAnimJoint16.DEF = "Joe_humanoid_root";
HAnimJoint16.center = new SFVec3f(new float[0,0.875,0]);
let HAnimSegment17 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment17.name = "sacrum";
HAnimSegment17.DEF = "Joe_sacrum";
let HAnimSite18 = browser.currentScene.createNode("HAnimSite");
HAnimSite18.name = "RootFront_view";
HAnimSite18.DEF = "Joe_RootFront_view";
let Transform19 = browser.currentScene.createNode("Transform");
Transform19.DEF = "hanimcordsys";
Transform19.scale = new SFVec3f(new float[0.175,0.175,0.175]);
let Viewpoint20 = browser.currentScene.createNode("Viewpoint");
Viewpoint20.DEF = "ViewBodyRootAxes";
Viewpoint20.description = "Joe_HAnim Root HAnimSite Coordinate Axes View";
Transform19.children = new MFNode();

Transform19.children[0] = Viewpoint20;

let Shape21 = browser.currentScene.createNode("Shape");
Shape21.DEF = "AxisLinesShape";
//RGB lines showing XYZ axes
let IndexedLineSet22 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet22.colorIndex = new MFInt32(new int[0,1,2]);
IndexedLineSet22.colorPerVertex = False;
IndexedLineSet22.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1]);
let Coordinate23 = browser.currentScene.createNode("Coordinate");
Coordinate23.point = new MFVec3f(new float[0,0,0,1,0,0,0,1,0,0,0,1]);
IndexedLineSet22.coord = Coordinate23;

let Color24 = browser.currentScene.createNode("Color");
Color24.color = new MFColor(new float[1,0,0,0,0.6,0,0,0,1]);
IndexedLineSet22.color = Color24;

Shape21.geometry = IndexedLineSet22;

Transform19.children[1] = Shape21;

HAnimSite18.children = new MFNode();

HAnimSite18.children[0] = Transform19;

HAnimSegment17.children = new MFNode();

HAnimSegment17.children[0] = HAnimSite18;

HAnimJoint16.children = new MFNode();

HAnimJoint16.children[0] = HAnimSegment17;

let HAnimJoint25 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint25.name = "sacroiliac";
HAnimJoint25.DEF = "Joe_sacroiliac";
HAnimJoint25.center = new SFVec3f(new float[0,0.92,0]);
HAnimJoint25.skinCoordIndex = new MFInt32(new int[17,19,20,21,22,23,26,27,73,82,89,91,93]);
HAnimJoint25.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,0.35,0.35,1]);
let HAnimJoint26 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint26.name = "l_hip";
HAnimJoint26.DEF = "Joe_l_hip";
HAnimJoint26.center = new SFVec3f(new float[0.1,0.92,0]);
HAnimJoint26.skinCoordIndex = new MFInt32(new int[89,90,94,95,96,97]);
HAnimJoint26.skinCoordWeight = new MFFloat(new float[0.65,1,1,1,1,1]);
let HAnimJoint27 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint27.name = "l_knee";
HAnimJoint27.DEF = "Joe_l_knee";
HAnimJoint27.center = new SFVec3f(new float[0.115,0.466,0]);
HAnimJoint27.skinCoordIndex = new MFInt32(new int[334,335,336,337,338,339,340,341]);
HAnimJoint27.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
let HAnimJoint28 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint28.name = "l_talocrural";
HAnimJoint28.DEF = "Joe_l_talocrural";
HAnimJoint28.center = new SFVec3f(new float[0.115,0.069,0]);
HAnimJoint28.skinCoordIndex = new MFInt32(new int[342,343,344,345]);
HAnimJoint28.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
let HAnimJoint29 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint29.name = "l_tarsometatarsal_2";
HAnimJoint29.DEF = "Joe_l_tarsometatarsal_2";
HAnimJoint29.center = new SFVec3f(new float[0.115,0.031,0.03]);
HAnimJoint29.skinCoordIndex = new MFInt32(new int[346,347,348,71]);
HAnimJoint29.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
let HAnimJoint30 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint30.name = "l_metatarsophalangeal_2";
HAnimJoint30.DEF = "Joe_l_metatarsophalangeal_2";
HAnimJoint30.center = new SFVec3f(new float[0.115,0.037,0.09]);
HAnimJoint30.skinCoordIndex = new MFInt32(new int[349,350,351,352]);
HAnimJoint30.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
let HAnimJoint31 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint31.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint31.DEF = "Joe_l_tarsal_distal_interphalangeal_2";
HAnimJoint31.center = new SFVec3f(new float[0.115,0.02,0.122]);
HAnimJoint31.skinCoordIndex = new MFInt32(new int[353,354,355,356,357,358,359,360,361]);
HAnimJoint31.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint30.children = new MFNode();

HAnimJoint30.children[0] = HAnimJoint31;

HAnimJoint29.children = new MFNode();

HAnimJoint29.children[0] = HAnimJoint30;

HAnimJoint28.children = new MFNode();

HAnimJoint28.children[0] = HAnimJoint29;

HAnimJoint27.children = new MFNode();

HAnimJoint27.children[0] = HAnimJoint28;

HAnimJoint26.children = new MFNode();

HAnimJoint26.children[0] = HAnimJoint27;

HAnimJoint25.children = new MFNode();

HAnimJoint25.children[0] = HAnimJoint26;

let HAnimJoint32 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint32.name = "r_hip";
HAnimJoint32.DEF = "Joe_r_hip";
HAnimJoint32.center = new SFVec3f(new float[-0.1,0.92,0]);
HAnimJoint32.skinCoordIndex = new MFInt32(new int[91,92,98,99,100,101,362,363]);
HAnimJoint32.skinCoordWeight = new MFFloat(new float[0.65,1,0.8,1,1,1,0.4,0.8]);
let HAnimJoint33 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint33.name = "r_knee";
HAnimJoint33.DEF = "Joe_r_knee";
HAnimJoint33.center = new SFVec3f(new float[-0.05,0.466,0]);
HAnimJoint33.skinCoordIndex = new MFInt32(new int[362,363,364,365,366,367,368,369,98]);
HAnimJoint33.skinCoordWeight = new MFFloat(new float[0.6,0.2,1,1,1,1,1,1,0.2]);
let HAnimJoint34 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint34.name = "r_talocrural";
HAnimJoint34.DEF = "Joe_r_talocrural";
HAnimJoint34.center = new SFVec3f(new float[-0.115,0.069,0]);
HAnimJoint34.skinCoordIndex = new MFInt32(new int[370,371,372,373]);
HAnimJoint34.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
let HAnimJoint35 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint35.name = "r_tarsometatarsal_2";
HAnimJoint35.DEF = "Joe_r_tarsometatarsal_2";
HAnimJoint35.center = new SFVec3f(new float[-0.1,0.015,-0.01]);
HAnimJoint35.skinCoordIndex = new MFInt32(new int[374,375,376]);
HAnimJoint35.skinCoordWeight = new MFFloat(new float[1,1,1]);
let HAnimJoint36 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint36.name = "r_metatarsophalangeal_2";
HAnimJoint36.DEF = "Joe_r_metatarsophalangeal_2";
HAnimJoint36.center = new SFVec3f(new float[-0.115,0.037,0.09]);
HAnimJoint36.skinCoordIndex = new MFInt32(new int[377,378,379,380]);
HAnimJoint36.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
let HAnimJoint37 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint37.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint37.DEF = "Joe_r_tarsal_distal_interphalangeal_2";
HAnimJoint37.center = new SFVec3f(new float[-0.1,0.01,0.14]);
HAnimJoint37.skinCoordIndex = new MFInt32(new int[381,382,383,384,385,386,387,388,389]);
HAnimJoint37.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint36.children = new MFNode();

HAnimJoint36.children[0] = HAnimJoint37;

HAnimJoint35.children = new MFNode();

HAnimJoint35.children[0] = HAnimJoint36;

HAnimJoint34.children = new MFNode();

HAnimJoint34.children[0] = HAnimJoint35;

HAnimJoint33.children = new MFNode();

HAnimJoint33.children[0] = HAnimJoint34;

HAnimJoint32.children = new MFNode();

HAnimJoint32.children[0] = HAnimJoint33;

HAnimJoint25.children[1] = HAnimJoint32;

HAnimJoint16.children[1] = HAnimJoint25;

let HAnimJoint38 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint38.name = "vl5";
HAnimJoint38.DEF = "Joe_vl5";
HAnimJoint38.center = new SFVec3f(new float[0,1.045,-0.095]);
HAnimJoint38.skinCoordIndex = new MFInt32(new int[28,76]);
HAnimJoint38.skinCoordWeight = new MFFloat(new float[1,1]);
let HAnimJoint39 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint39.name = "vl4";
HAnimJoint39.DEF = "Joe_vl4";
HAnimJoint39.center = new SFVec3f(new float[0,1.068,-0.085]);
let HAnimJoint40 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint40.name = "vl3";
HAnimJoint40.DEF = "Joe_vl3";
HAnimJoint40.center = new SFVec3f(new float[0,1.092,-0.0725]);
let HAnimJoint41 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint41.name = "vl2";
HAnimJoint41.DEF = "Joe_vl2";
HAnimJoint41.center = new SFVec3f(new float[0,1.12,-0.065]);
HAnimJoint41.skinCoordIndex = new MFInt32(new int[16,18,25,83,84,85,86,87,88]);
HAnimJoint41.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,0.7,1,0.8]);
let HAnimJoint42 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint42.name = "vl1";
HAnimJoint42.DEF = "Joe_vl1";
HAnimJoint42.center = new SFVec3f(new float[0,1.1459,-0.0625]);
let HAnimJoint43 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint43.name = "vt12";
HAnimJoint43.DEF = "Joe_vt12";
HAnimJoint43.center = new SFVec3f(new float[0,1.179,-0.068]);
let HAnimJoint44 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint44.name = "vt11";
HAnimJoint44.DEF = "Joe_vt11";
HAnimJoint44.center = new SFVec3f(new float[0,1.2679,-0.081]);
let HAnimJoint45 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint45.name = "vt10";
HAnimJoint45.DEF = "Joe_vt10";
HAnimJoint45.center = new SFVec3f(new float[0,1.242,-0.09]);
HAnimJoint45.skinCoordIndex = new MFInt32(new int[15]);
HAnimJoint45.skinCoordWeight = new MFFloat(new float[1]);
let HAnimJoint46 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint46.name = "vt9";
HAnimJoint46.DEF = "Joe_vt9";
HAnimJoint46.center = new SFVec3f(new float[0,1.268,-0.1]);
HAnimJoint46.skinCoordIndex = new MFInt32(new int[13,14]);
HAnimJoint46.skinCoordWeight = new MFFloat(new float[1,1]);
let HAnimJoint47 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint47.name = "vt8";
HAnimJoint47.DEF = "Joe_vt8";
HAnimJoint47.center = new SFVec3f(new float[0,1.294,-0.11]);
let HAnimJoint48 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint48.name = "vt7";
HAnimJoint48.DEF = "Joe_vt7";
HAnimJoint48.center = new SFVec3f(new float[0,1.323,-0.1155]);
let HAnimJoint49 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint49.name = "vt6";
HAnimJoint49.DEF = "Joe_vt6";
HAnimJoint49.center = new SFVec3f(new float[0,1.352,-0.12]);
let HAnimJoint50 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint50.name = "vt5";
HAnimJoint50.DEF = "Joe_vt5";
HAnimJoint50.center = new SFVec3f(new float[0,1.381,-0.1235]);
let HAnimJoint51 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint51.name = "vt4";
HAnimJoint51.DEF = "Joe_vt4";
HAnimJoint51.center = new SFVec3f(new float[0,1.41,-0.1235]);
HAnimJoint51.skinCoordIndex = new MFInt32(new int[81]);
HAnimJoint51.skinCoordWeight = new MFFloat(new float[1]);
let HAnimJoint52 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint52.name = "vt3";
HAnimJoint52.DEF = "Joe_vt3";
HAnimJoint52.center = new SFVec3f(new float[0,1.438,-0.12]);
let HAnimJoint53 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint53.name = "vt2";
HAnimJoint53.DEF = "Joe_vt2";
HAnimJoint53.center = new SFVec3f(new float[0,1.468,-0.105]);
let HAnimJoint54 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint54.name = "vt1";
HAnimJoint54.DEF = "Joe_vt1";
HAnimJoint54.center = new SFVec3f(new float[0,1.497,-0.09]);
HAnimJoint54.skinCoordIndex = new MFInt32(new int[11,24]);
HAnimJoint54.skinCoordWeight = new MFFloat(new float[1,1]);
let HAnimJoint55 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint55.name = "vc7";
HAnimJoint55.DEF = "Joe_vc7";
HAnimJoint55.center = new SFVec3f(new float[0,1.525,-0.072]);
HAnimJoint55.skinCoordIndex = new MFInt32(new int[74,75]);
HAnimJoint55.skinCoordWeight = new MFFloat(new float[1,1]);
let HAnimJoint56 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint56.name = "vc6";
HAnimJoint56.DEF = "Joe_vc6";
HAnimJoint56.center = new SFVec3f(new float[0,1.54,-0.05]);
let HAnimJoint57 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint57.name = "vc5";
HAnimJoint57.DEF = "Joe_vc5";
HAnimJoint57.center = new SFVec3f(new float[0,1.552,-0.035]);
let HAnimJoint58 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint58.name = "vc4";
HAnimJoint58.DEF = "Joe_vc4";
HAnimJoint58.center = new SFVec3f(new float[0,1.5675,-0.0256]);
let HAnimJoint59 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint59.name = "vc3";
HAnimJoint59.DEF = "Joe_vc3";
HAnimJoint59.center = new SFVec3f(new float[0,1.58225,-0.0185]);
let HAnimJoint60 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint60.name = "vc2";
HAnimJoint60.DEF = "Joe_vc2";
HAnimJoint60.center = new SFVec3f(new float[0,1.595,-0.0175]);
let HAnimJoint61 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint61.name = "vc1";
HAnimJoint61.DEF = "Joe_vc1";
HAnimJoint61.center = new SFVec3f(new float[0,1.61,-0.015]);
let HAnimJoint62 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint62.name = "skullbase";
HAnimJoint62.DEF = "Joe_skullbase";
HAnimJoint62.center = new SFVec3f(new float[0,1.63,-0.01]);
HAnimJoint62.skinCoordIndex = new MFInt32(new int[0,1,2,3,4,5,6,7,8,9]);
HAnimJoint62.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1]);
let HAnimDisplacer63 = browser.currentScene.createNode("HAnimDisplacer");
HAnimDisplacer63.name = "skull_tip_raiser_action";
HAnimDisplacer63.DEF = "Joe_skull_tip_raiser_action";
HAnimDisplacer63.coordIndex = new MFInt32(new int[0,1,2,3,4,5,6,7,8,9]);
HAnimDisplacer63.displacements = new MFVec3f(new float[0,0.15,0,0,0,0.15,-0.1,0,0.15,0.1,0,0.05,0,-0.02,0.05,-0.15,0,0,-0.05,0,0,0.15,0,0,0.05,0,0,0,0,-0.15]);
HAnimJoint62.displacers = new MFNode();

HAnimJoint62.displacers[0] = HAnimDisplacer63;

let HAnimJoint64 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint64.name = "l_eyelid_joint";
HAnimJoint64.DEF = "Joe_l_eyelid_joint";
HAnimJoint64.center = new SFVec3f(new float[0.034,1.659,0.06]);
HAnimJoint62.children[1] = HAnimJoint64;

let HAnimJoint65 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint65.name = "l_eyeball_joint";
HAnimJoint65.DEF = "Joe_l_eyeball_joint";
HAnimJoint65.center = new SFVec3f(new float[0.034,1.659,0.06]);
HAnimJoint62.children[2] = HAnimJoint65;

let HAnimJoint66 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint66.name = "l_eyebrow_joint";
HAnimJoint66.DEF = "Joe_l_eyebrow_joint";
HAnimJoint66.center = new SFVec3f(new float[0.034,1.659,0.06]);
HAnimJoint62.children[3] = HAnimJoint66;

let HAnimJoint67 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint67.name = "r_eyelid_joint";
HAnimJoint67.DEF = "Joe_r_eyelid_joint";
HAnimJoint67.center = new SFVec3f(new float[-0.034,1.659,0.06]);
HAnimJoint62.children[4] = HAnimJoint67;

let HAnimJoint68 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint68.name = "r_eyeball_joint";
HAnimJoint68.DEF = "Joe_r_eyeball_joint";
HAnimJoint68.center = new SFVec3f(new float[-0.034,1.659,0.06]);
HAnimJoint62.children[5] = HAnimJoint68;

let HAnimJoint69 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint69.name = "r_eyebrow_joint";
HAnimJoint69.DEF = "Joe_r_eyebrow_joint";
HAnimJoint69.center = new SFVec3f(new float[-0.034,1.659,0.06]);
HAnimJoint62.children[6] = HAnimJoint69;

let HAnimJoint70 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint70.name = "temporomandibular";
HAnimJoint70.DEF = "Joe_temporomandibular";
HAnimJoint70.center = new SFVec3f(new float[0.034,1.659,0.06]);
HAnimJoint62.children[7] = HAnimJoint70;

HAnimJoint61.children = new MFNode();

HAnimJoint61.children[0] = HAnimJoint62;

HAnimJoint60.children = new MFNode();

HAnimJoint60.children[0] = HAnimJoint61;

HAnimJoint59.children = new MFNode();

HAnimJoint59.children[0] = HAnimJoint60;

HAnimJoint58.children = new MFNode();

HAnimJoint58.children[0] = HAnimJoint59;

HAnimJoint57.children = new MFNode();

HAnimJoint57.children[0] = HAnimJoint58;

HAnimJoint56.children = new MFNode();

HAnimJoint56.children[0] = HAnimJoint57;

HAnimJoint55.children = new MFNode();

HAnimJoint55.children[0] = HAnimJoint56;

let HAnimJoint71 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint71.name = "l_sternoclavicular";
HAnimJoint71.DEF = "Joe_l_sternoclavicular";
HAnimJoint71.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimJoint71.skinCoordIndex = new MFInt32(new int[12]);
HAnimJoint71.skinCoordWeight = new MFFloat(new float[1]);
let HAnimJoint72 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint72.name = "l_acromioclavicular";
HAnimJoint72.DEF = "Joe_l_acromioclavicular";
HAnimJoint72.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimJoint72.skinCoordIndex = new MFInt32(new int[79]);
HAnimJoint72.skinCoordWeight = new MFFloat(new float[1]);
let HAnimJoint73 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint73.name = "l_shoulder";
HAnimJoint73.DEF = "Joe_l_shoulder";
HAnimJoint73.center = new SFVec3f(new float[0.2,1.44,-0.04]);
HAnimJoint73.skinCoordIndex = new MFInt32(new int[41,42,44,80,102,103,104,105]);
HAnimJoint73.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
let HAnimJoint74 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint74.name = "l_elbow";
HAnimJoint74.DEF = "Joe_l_elbow";
HAnimJoint74.center = new SFVec3f(new float[0.2,1.1388,-0.04]);
HAnimJoint74.skinCoordIndex = new MFInt32(new int[45,46,47,109,110,111,112,113,115,116,117,118]);
HAnimJoint74.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
let HAnimJoint75 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint75.name = "l_radiocarpal";
HAnimJoint75.DEF = "Joe_l_radiocarpal";
HAnimJoint75.center = new SFVec3f(new float[0.2,0.87,-0.04]);
HAnimJoint75.skinCoordIndex = new MFInt32(new int[119,120,121,122,123,124,125,126]);
HAnimJoint75.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
let HAnimJoint76 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint76.name = "l_carpometacarpal_1";
HAnimJoint76.DEF = "Joe_l_carpometacarpal_1";
HAnimJoint76.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimJoint76.skinCoordIndex = new MFInt32(new int[127,128]);
HAnimJoint76.skinCoordWeight = new MFFloat(new float[1,1]);
let HAnimJoint77 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint77.name = "l_metacarpophalangeal_1";
HAnimJoint77.DEF = "Joe_l_metacarpophalangeal_1";
HAnimJoint77.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimJoint77.skinCoordIndex = new MFInt32(new int[138,139,140,141,142,143]);
HAnimJoint77.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,1,1,1]);
let HAnimJoint78 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint78.name = "l_carpal_interphalangeal_1";
HAnimJoint78.DEF = "Joe_l_carpal_interphalangeal_1";
HAnimJoint78.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint78.skinCoordIndex = new MFInt32(new int[144,145,146,147,148,149,150,151,152]);
HAnimJoint78.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint77.children = new MFNode();

HAnimJoint77.children[0] = HAnimJoint78;

HAnimJoint76.children = new MFNode();

HAnimJoint76.children[0] = HAnimJoint77;

HAnimJoint75.children = new MFNode();

HAnimJoint75.children[0] = HAnimJoint76;

let HAnimJoint79 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint79.name = "l_carpometacarpal_2";
HAnimJoint79.DEF = "Joe_l_carpometacarpal_2";
HAnimJoint79.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimJoint79.skinCoordIndex = new MFInt32(new int[129,130]);
HAnimJoint79.skinCoordWeight = new MFFloat(new float[1,1]);
let HAnimJoint80 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint80.name = "l_metacarpophalangeal_2";
HAnimJoint80.DEF = "Joe_l_metacarpophalangeal_2";
HAnimJoint80.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint80.skinCoordIndex = new MFInt32(new int[138,139,140,153,154,155,163]);
HAnimJoint80.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,1,1,1,0.5]);
let HAnimJoint81 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint81.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint81.DEF = "Joe_l_carpal_proximal_interphalangeal_2";
HAnimJoint81.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint81.skinCoordIndex = new MFInt32(new int[166,167,168,169]);
HAnimJoint81.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
let HAnimJoint82 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint82.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint82.DEF = "Joe_l_carpal_distal_interphalangeal_2";
HAnimJoint82.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint82.skinCoordIndex = new MFInt32(new int[170,171,172,173,174,175,176,177,178]);
HAnimJoint82.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint81.children = new MFNode();

HAnimJoint81.children[0] = HAnimJoint82;

HAnimJoint80.children = new MFNode();

HAnimJoint80.children[0] = HAnimJoint81;

HAnimJoint79.children = new MFNode();

HAnimJoint79.children[0] = HAnimJoint80;

HAnimJoint75.children[1] = HAnimJoint79;

let HAnimJoint83 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint83.name = "l_carpometacarpal_3";
HAnimJoint83.DEF = "Joe_l_carpometacarpal_3";
HAnimJoint83.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimJoint83.skinCoordIndex = new MFInt32(new int[131,132]);
HAnimJoint83.skinCoordWeight = new MFFloat(new float[1,1]);
let HAnimJoint84 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint84.name = "l_metacarpophalangeal_3";
HAnimJoint84.DEF = "Joe_l_metacarpophalangeal_3";
HAnimJoint84.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimJoint84.skinCoordIndex = new MFInt32(new int[156,157,163,164]);
HAnimJoint84.skinCoordWeight = new MFFloat(new float[1,1,0.5,0.5]);
let HAnimJoint85 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint85.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint85.DEF = "Joe_l_carpal_proximal_interphalangeal_3";
HAnimJoint85.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimJoint85.skinCoordIndex = new MFInt32(new int[179,180,181,182]);
HAnimJoint85.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
let HAnimJoint86 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint86.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint86.DEF = "Joe_l_carpal_distal_interphalangeal_3";
HAnimJoint86.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint86.skinCoordIndex = new MFInt32(new int[183,184,185,186,187,188,189,190,191]);
HAnimJoint86.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint85.children = new MFNode();

HAnimJoint85.children[0] = HAnimJoint86;

HAnimJoint84.children = new MFNode();

HAnimJoint84.children[0] = HAnimJoint85;

HAnimJoint83.children = new MFNode();

HAnimJoint83.children[0] = HAnimJoint84;

HAnimJoint75.children[2] = HAnimJoint83;

let HAnimJoint87 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint87.name = "l_carpometacarpal_4";
HAnimJoint87.DEF = "Joe_l_carpometacarpal_4";
HAnimJoint87.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimJoint87.skinCoordIndex = new MFInt32(new int[133,134]);
HAnimJoint87.skinCoordWeight = new MFFloat(new float[1,1]);
let HAnimJoint88 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint88.name = "l_metacarpophalangeal_4";
HAnimJoint88.DEF = "Joe_l_metacarpophalangeal_4";
HAnimJoint88.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimJoint88.skinCoordIndex = new MFInt32(new int[158,159,164,165]);
HAnimJoint88.skinCoordWeight = new MFFloat(new float[1,1,0.5,0.5]);
let HAnimJoint89 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint89.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint89.DEF = "Joe_l_carpal_proximal_interphalangeal_4";
HAnimJoint89.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimJoint89.skinCoordIndex = new MFInt32(new int[192,193,194,195]);
HAnimJoint89.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
let HAnimJoint90 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint90.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint90.DEF = "Joe_l_carpal_distal_interphalangeal_4";
HAnimJoint90.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint90.skinCoordIndex = new MFInt32(new int[196,197,198,199,200,201,202,203,204]);
HAnimJoint90.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint89.children = new MFNode();

HAnimJoint89.children[0] = HAnimJoint90;

HAnimJoint88.children = new MFNode();

HAnimJoint88.children[0] = HAnimJoint89;

HAnimJoint87.children = new MFNode();

HAnimJoint87.children[0] = HAnimJoint88;

HAnimJoint75.children[3] = HAnimJoint87;

let HAnimJoint91 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint91.name = "l_carpometacarpal_5";
HAnimJoint91.DEF = "Joe_l_carpometacarpal_5";
HAnimJoint91.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimJoint91.skinCoordIndex = new MFInt32(new int[135,136,137,165]);
HAnimJoint91.skinCoordWeight = new MFFloat(new float[1,1,1,0.5]);
let HAnimJoint92 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint92.name = "l_metacarpophalangeal_5";
HAnimJoint92.DEF = "Joe_l_metacarpophalangeal_5";
HAnimJoint92.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimJoint92.skinCoordIndex = new MFInt32(new int[160,161,162]);
HAnimJoint92.skinCoordWeight = new MFFloat(new float[1,1,1]);
let HAnimJoint93 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint93.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint93.DEF = "Joe_l_carpal_proximal_interphalangeal_5";
HAnimJoint93.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimJoint93.skinCoordIndex = new MFInt32(new int[205,206,207,208]);
HAnimJoint93.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
let HAnimJoint94 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint94.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint94.DEF = "Joe_l_carpal_distal_interphalangeal_5";
HAnimJoint94.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint94.skinCoordIndex = new MFInt32(new int[209,210,211,212,213,214,215,216,217]);
HAnimJoint94.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint93.children = new MFNode();

HAnimJoint93.children[0] = HAnimJoint94;

HAnimJoint92.children = new MFNode();

HAnimJoint92.children[0] = HAnimJoint93;

HAnimJoint91.children = new MFNode();

HAnimJoint91.children[0] = HAnimJoint92;

HAnimJoint75.children[4] = HAnimJoint91;

HAnimJoint74.children = new MFNode();

HAnimJoint74.children[0] = HAnimJoint75;

HAnimJoint73.children = new MFNode();

HAnimJoint73.children[0] = HAnimJoint74;

HAnimJoint72.children = new MFNode();

HAnimJoint72.children[0] = HAnimJoint73;

HAnimJoint71.children = new MFNode();

HAnimJoint71.children[0] = HAnimJoint72;

HAnimJoint55.children[1] = HAnimJoint71;

let HAnimJoint95 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint95.name = "r_sternoclavicular";
HAnimJoint95.DEF = "Joe_r_sternoclavicular";
HAnimJoint95.center = new SFVec3f(new float[-0.03,1.46,0]);
HAnimJoint95.skinCoordIndex = new MFInt32(new int[10]);
HAnimJoint95.skinCoordWeight = new MFFloat(new float[1]);
let HAnimJoint96 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint96.name = "r_acromioclavicular";
HAnimJoint96.DEF = "Joe_r_acromioclavicular";
HAnimJoint96.center = new SFVec3f(new float[-0.09,1.41,-0.11]);
HAnimJoint96.skinCoordIndex = new MFInt32(new int[77,29]);
HAnimJoint96.skinCoordWeight = new MFFloat(new float[1,0.9]);
let HAnimJoint97 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint97.name = "r_shoulder";
HAnimJoint97.DEF = "Joe_r_shoulder";
HAnimJoint97.center = new SFVec3f(new float[-0.2,1.44,-0.04]);
HAnimJoint97.skinCoordIndex = new MFInt32(new int[29,30,32,78,218,219,220,221,86,88]);
HAnimJoint97.skinCoordWeight = new MFFloat(new float[0.1,1,1,1,1,1,1,1,0.3,0.2]);
let HAnimJoint98 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint98.name = "r_elbow";
HAnimJoint98.DEF = "Joe_r_elbow";
HAnimJoint98.center = new SFVec3f(new float[-0.2,1.1388,-0.04]);
HAnimJoint98.skinCoordIndex = new MFInt32(new int[33,34,35,225,226,227,228,229,231,232,233,234]);
HAnimJoint98.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1]);
let HAnimJoint99 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint99.name = "r_radiocarpal";
HAnimJoint99.DEF = "Joe_r_radiocarpal";
HAnimJoint99.center = new SFVec3f(new float[-0.2,0.89,-0.04]);
HAnimJoint99.skinCoordIndex = new MFInt32(new int[235,236,237,238,239,240,241,242]);
HAnimJoint99.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
let HAnimJoint100 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint100.name = "r_carpometacarpal_1";
HAnimJoint100.DEF = "Joe_r_carpometacarpal_1";
HAnimJoint100.center = new SFVec3f(new float[-0.2,0.85,0]);
HAnimJoint100.skinCoordIndex = new MFInt32(new int[243,244]);
HAnimJoint100.skinCoordWeight = new MFFloat(new float[1,1]);
let HAnimJoint101 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint101.name = "r_metacarpophalangeal_1";
HAnimJoint101.DEF = "Joe_r_metacarpophalangeal_1";
HAnimJoint101.center = new SFVec3f(new float[-0.2,0.82,0.03]);
HAnimJoint101.skinCoordIndex = new MFInt32(new int[254,255,256,257,258,259]);
HAnimJoint101.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,1,1,1]);
let HAnimJoint102 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint102.name = "r_carpal_interphalangeal_1";
HAnimJoint102.DEF = "Joe_r_carpal_interphalangeal_1";
HAnimJoint102.center = new SFVec3f(new float[-0.2,0.8,0.05]);
HAnimJoint102.skinCoordIndex = new MFInt32(new int[260,261,262,263,264,265,266,267,268]);
HAnimJoint102.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint101.children = new MFNode();

HAnimJoint101.children[0] = HAnimJoint102;

HAnimJoint100.children = new MFNode();

HAnimJoint100.children[0] = HAnimJoint101;

HAnimJoint99.children = new MFNode();

HAnimJoint99.children[0] = HAnimJoint100;

let HAnimJoint103 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint103.name = "r_carpometacarpal_2";
HAnimJoint103.DEF = "Joe_r_carpometacarpal_2";
HAnimJoint103.center = new SFVec3f(new float[-0.2,0.84,-0.015]);
HAnimJoint103.skinCoordIndex = new MFInt32(new int[245,246]);
HAnimJoint103.skinCoordWeight = new MFFloat(new float[1,1]);
let HAnimJoint104 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint104.name = "r_metacarpophalangeal_2";
HAnimJoint104.DEF = "Joe_r_metacarpophalangeal_2";
HAnimJoint104.center = new SFVec3f(new float[-0.2,0.793,-0.015]);
HAnimJoint104.skinCoordIndex = new MFInt32(new int[254,255,256,269,270,271,279]);
HAnimJoint104.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,1,1,1,0.5]);
let HAnimJoint105 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint105.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint105.DEF = "Joe_r_carpal_proximal_interphalangeal_2";
HAnimJoint105.center = new SFVec3f(new float[-0.2,0.745,-0.015]);
HAnimJoint105.skinCoordIndex = new MFInt32(new int[282,283,284,285]);
HAnimJoint105.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
let HAnimJoint106 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint106.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint106.DEF = "Joe_r_carpal_distal_interphalangeal_2";
HAnimJoint106.center = new SFVec3f(new float[-0.2,0.72,-0.015]);
HAnimJoint106.skinCoordIndex = new MFInt32(new int[286,287,288,289,290,291,292,293,294]);
HAnimJoint106.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint105.children = new MFNode();

HAnimJoint105.children[0] = HAnimJoint106;

HAnimJoint104.children = new MFNode();

HAnimJoint104.children[0] = HAnimJoint105;

HAnimJoint103.children = new MFNode();

HAnimJoint103.children[0] = HAnimJoint104;

HAnimJoint99.children[1] = HAnimJoint103;

let HAnimJoint107 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint107.name = "r_carpometacarpal_3";
HAnimJoint107.DEF = "Joe_r_carpometacarpal_3";
HAnimJoint107.center = new SFVec3f(new float[-0.2,0.835,-0.04]);
HAnimJoint107.skinCoordIndex = new MFInt32(new int[247,248]);
HAnimJoint107.skinCoordWeight = new MFFloat(new float[1,1]);
let HAnimJoint108 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint108.name = "r_metacarpophalangeal_3";
HAnimJoint108.DEF = "Joe_r_metacarpophalangeal_3";
HAnimJoint108.center = new SFVec3f(new float[-0.2,0.788,-0.04]);
HAnimJoint108.skinCoordIndex = new MFInt32(new int[272,273,279,280]);
HAnimJoint108.skinCoordWeight = new MFFloat(new float[1,1,0.5,0.5]);
let HAnimJoint109 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint109.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint109.DEF = "Joe_r_carpal_proximal_interphalangeal_3";
HAnimJoint109.center = new SFVec3f(new float[-0.2,0.74,-0.04]);
HAnimJoint109.skinCoordIndex = new MFInt32(new int[295,296,297,298]);
HAnimJoint109.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
let HAnimJoint110 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint110.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint110.DEF = "Joe_r_carpal_distal_interphalangeal_3";
HAnimJoint110.center = new SFVec3f(new float[-0.2,0.7142,-0.04]);
HAnimJoint110.skinCoordIndex = new MFInt32(new int[299,300,301,302,303,304,305,306,307]);
HAnimJoint110.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint109.children = new MFNode();

HAnimJoint109.children[0] = HAnimJoint110;

HAnimJoint108.children = new MFNode();

HAnimJoint108.children[0] = HAnimJoint109;

HAnimJoint107.children = new MFNode();

HAnimJoint107.children[0] = HAnimJoint108;

HAnimJoint99.children[2] = HAnimJoint107;

let HAnimJoint111 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint111.name = "r_carpometacarpal_4";
HAnimJoint111.DEF = "Joe_r_carpometacarpal_4";
HAnimJoint111.center = new SFVec3f(new float[-0.2,0.835,-0.065]);
HAnimJoint111.skinCoordIndex = new MFInt32(new int[249,250]);
HAnimJoint111.skinCoordWeight = new MFFloat(new float[1,1]);
let HAnimJoint112 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint112.name = "r_metacarpophalangeal_4";
HAnimJoint112.DEF = "Joe_r_metacarpophalangeal_4";
HAnimJoint112.center = new SFVec3f(new float[-0.2,0.793,-0.065]);
HAnimJoint112.skinCoordIndex = new MFInt32(new int[274,275,280,281]);
HAnimJoint112.skinCoordWeight = new MFFloat(new float[1,1,0.5,0.5]);
let HAnimJoint113 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint113.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint113.DEF = "Joe_r_carpal_proximal_interphalangeal_4";
HAnimJoint113.center = new SFVec3f(new float[-0.2,0.74,-0.065]);
HAnimJoint113.skinCoordIndex = new MFInt32(new int[308,309,310,311]);
HAnimJoint113.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
let HAnimJoint114 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint114.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint114.DEF = "Joe_r_carpal_distal_interphalangeal_4";
HAnimJoint114.center = new SFVec3f(new float[-0.2,0.7177,-0.065]);
HAnimJoint114.skinCoordIndex = new MFInt32(new int[312,313,314,315,316,317,318,319,320]);
HAnimJoint114.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint113.children = new MFNode();

HAnimJoint113.children[0] = HAnimJoint114;

HAnimJoint112.children = new MFNode();

HAnimJoint112.children[0] = HAnimJoint113;

HAnimJoint111.children = new MFNode();

HAnimJoint111.children[0] = HAnimJoint112;

HAnimJoint99.children[3] = HAnimJoint111;

let HAnimJoint115 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint115.name = "r_carpometacarpal_5";
HAnimJoint115.DEF = "Joe_r_carpometacarpal_5";
HAnimJoint115.center = new SFVec3f(new float[-0.2,0.84,-0.085]);
HAnimJoint115.skinCoordIndex = new MFInt32(new int[251,252,253,281]);
HAnimJoint115.skinCoordWeight = new MFFloat(new float[1,1,1,0.5]);
let HAnimJoint116 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint116.name = "r_metacarpophalangeal_5";
HAnimJoint116.DEF = "Joe_r_metacarpophalangeal_5";
HAnimJoint116.center = new SFVec3f(new float[-0.2,0.79,-0.085]);
HAnimJoint116.skinCoordIndex = new MFInt32(new int[276,277,278]);
HAnimJoint116.skinCoordWeight = new MFFloat(new float[1,1,1]);
let HAnimJoint117 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint117.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint117.DEF = "Joe_r_carpal_proximal_interphalangeal_5";
HAnimJoint117.center = new SFVec3f(new float[-0.2,0.755,-0.085]);
HAnimJoint117.skinCoordIndex = new MFInt32(new int[321,322,323,324]);
HAnimJoint117.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
let HAnimJoint118 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint118.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint118.DEF = "Joe_r_carpal_distal_interphalangeal_5";
HAnimJoint118.center = new SFVec3f(new float[-0.2,0.735,-0.09]);
HAnimJoint118.skinCoordIndex = new MFInt32(new int[325,326,327,328,329,330,331,332,333]);
HAnimJoint118.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint117.children = new MFNode();

HAnimJoint117.children[0] = HAnimJoint118;

HAnimJoint116.children = new MFNode();

HAnimJoint116.children[0] = HAnimJoint117;

HAnimJoint115.children = new MFNode();

HAnimJoint115.children[0] = HAnimJoint116;

HAnimJoint99.children[4] = HAnimJoint115;

HAnimJoint98.children = new MFNode();

HAnimJoint98.children[0] = HAnimJoint99;

HAnimJoint97.children = new MFNode();

HAnimJoint97.children[0] = HAnimJoint98;

HAnimJoint96.children = new MFNode();

HAnimJoint96.children[0] = HAnimJoint97;

HAnimJoint95.children = new MFNode();

HAnimJoint95.children[0] = HAnimJoint96;

HAnimJoint55.children[2] = HAnimJoint95;

HAnimJoint54.children = new MFNode();

HAnimJoint54.children[0] = HAnimJoint55;

HAnimJoint53.children = new MFNode();

HAnimJoint53.children[0] = HAnimJoint54;

HAnimJoint52.children = new MFNode();

HAnimJoint52.children[0] = HAnimJoint53;

HAnimJoint51.children = new MFNode();

HAnimJoint51.children[0] = HAnimJoint52;

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

HAnimJoint16.children[2] = HAnimJoint38;

HAnimHumanoid13.joints = new MFNode();

HAnimHumanoid13.joints[0] = HAnimJoint16;

let Shape119 = browser.currentScene.createNode("Shape");
Shape119.DEF = "Joe_Shape";
let Appearance120 = browser.currentScene.createNode("Appearance");
Appearance120.DEF = "Joe_skin_Appearance";
let Material121 = browser.currentScene.createNode("Material");
Material121.DEF = "Joe_skin_Material";
Material121.diffuseColor = new SFColor(new float[0.3,0.3,0.6]);
Material121.emissiveColor = new SFColor(new float[0.3,0.3,0.6]);
Appearance120.material = Material121;

let ImageTexture122 = browser.currentScene.createNode("ImageTexture");
ImageTexture122.DEF = "JoeSkinImageTexture";
ImageTexture122.url = new MFString(new java.lang.String["JoeBodyTexture29.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JoeBodyTexture29.png"]);
Appearance120.texture = ImageTexture122;

let TextureTransform123 = browser.currentScene.createNode("TextureTransform");
TextureTransform123.DEF = "KickTextureTransform";
Appearance120.textureTransform = TextureTransform123;

Shape119.appearance = Appearance120;

let IndexedFaceSet124 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet124.DEF = "Joe_skin_IndexedFaceSet";
IndexedFaceSet124.coordIndex = new MFInt32(new int[0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]);
IndexedFaceSet124.creaseAngle = 3.14;
let Coordinate125 = browser.currentScene.createNode("Coordinate");
Coordinate125.DEF = "Joe_SkinCoord";
Coordinate125.point = new MFVec3f(new float[0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.255,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168]);
IndexedFaceSet124.coord = Coordinate125;

let TextureCoordinate126 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate126.point = new MFVec2f(new float[0,0,0.5,0.5,0.5,0,0,0.5]);
IndexedFaceSet124.texCoord = TextureCoordinate126;

Shape119.geometry = IndexedFaceSet124;

HAnimHumanoid13.skin[1] = Shape119;

let Coordinate127 = browser.currentScene.createNode("Coordinate");
Coordinate127.USE = "Joe_SkinCoord";
HAnimHumanoid13.skinCoord = Coordinate127;

let HAnimJoint128 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint128.USE = "Joe_humanoid_root";
HAnimHumanoid13.joints[2] = HAnimJoint128;

let HAnimJoint129 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint129.USE = "Joe_sacroiliac";
HAnimHumanoid13.joints[3] = HAnimJoint129;

let HAnimJoint130 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint130.USE = "Joe_skullbase";
HAnimHumanoid13.joints[4] = HAnimJoint130;

let HAnimJoint131 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint131.USE = "Joe_temporomandibular";
HAnimHumanoid13.joints[5] = HAnimJoint131;

let HAnimJoint132 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint132.USE = "Joe_vc1";
HAnimHumanoid13.joints[6] = HAnimJoint132;

let HAnimJoint133 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint133.USE = "Joe_vc2";
HAnimHumanoid13.joints[7] = HAnimJoint133;

let HAnimJoint134 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint134.USE = "Joe_vc3";
HAnimHumanoid13.joints[8] = HAnimJoint134;

let HAnimJoint135 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint135.USE = "Joe_vc4";
HAnimHumanoid13.joints[9] = HAnimJoint135;

let HAnimJoint136 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint136.USE = "Joe_vc5";
HAnimHumanoid13.joints[10] = HAnimJoint136;

let HAnimJoint137 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint137.USE = "Joe_vc6";
HAnimHumanoid13.joints[11] = HAnimJoint137;

let HAnimJoint138 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint138.USE = "Joe_vc7";
HAnimHumanoid13.joints[12] = HAnimJoint138;

let HAnimJoint139 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint139.USE = "Joe_vl1";
HAnimHumanoid13.joints[13] = HAnimJoint139;

let HAnimJoint140 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint140.USE = "Joe_vl2";
HAnimHumanoid13.joints[14] = HAnimJoint140;

let HAnimJoint141 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint141.USE = "Joe_vl3";
HAnimHumanoid13.joints[15] = HAnimJoint141;

let HAnimJoint142 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint142.USE = "Joe_vl4";
HAnimHumanoid13.joints[16] = HAnimJoint142;

let HAnimJoint143 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint143.USE = "Joe_vl5";
HAnimHumanoid13.joints[17] = HAnimJoint143;

let HAnimJoint144 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint144.USE = "Joe_vt1";
HAnimHumanoid13.joints[18] = HAnimJoint144;

let HAnimJoint145 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint145.USE = "Joe_vt10";
HAnimHumanoid13.joints[19] = HAnimJoint145;

let HAnimJoint146 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint146.USE = "Joe_vt11";
HAnimHumanoid13.joints[20] = HAnimJoint146;

let HAnimJoint147 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint147.USE = "Joe_vt12";
HAnimHumanoid13.joints[21] = HAnimJoint147;

let HAnimJoint148 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint148.USE = "Joe_vt2";
HAnimHumanoid13.joints[22] = HAnimJoint148;

let HAnimJoint149 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint149.USE = "Joe_vt3";
HAnimHumanoid13.joints[23] = HAnimJoint149;

let HAnimJoint150 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint150.USE = "Joe_vt4";
HAnimHumanoid13.joints[24] = HAnimJoint150;

let HAnimJoint151 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint151.USE = "Joe_vt5";
HAnimHumanoid13.joints[25] = HAnimJoint151;

let HAnimJoint152 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint152.USE = "Joe_vt6";
HAnimHumanoid13.joints[26] = HAnimJoint152;

let HAnimJoint153 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint153.USE = "Joe_vt7";
HAnimHumanoid13.joints[27] = HAnimJoint153;

let HAnimJoint154 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint154.USE = "Joe_vt8";
HAnimHumanoid13.joints[28] = HAnimJoint154;

let HAnimJoint155 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint155.USE = "Joe_vt9";
HAnimHumanoid13.joints[29] = HAnimJoint155;

let HAnimJoint156 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint156.USE = "Joe_l_acromioclavicular";
HAnimHumanoid13.joints[30] = HAnimJoint156;

let HAnimJoint157 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint157.USE = "Joe_r_acromioclavicular";
HAnimHumanoid13.joints[31] = HAnimJoint157;

let HAnimJoint158 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint158.USE = "Joe_l_carpal_distal_interphalangeal_2";
HAnimHumanoid13.joints[32] = HAnimJoint158;

let HAnimJoint159 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint159.USE = "Joe_r_carpal_distal_interphalangeal_2";
HAnimHumanoid13.joints[33] = HAnimJoint159;

let HAnimJoint160 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint160.USE = "Joe_l_carpal_distal_interphalangeal_3";
HAnimHumanoid13.joints[34] = HAnimJoint160;

let HAnimJoint161 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint161.USE = "Joe_r_carpal_distal_interphalangeal_3";
HAnimHumanoid13.joints[35] = HAnimJoint161;

let HAnimJoint162 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint162.USE = "Joe_l_carpal_distal_interphalangeal_4";
HAnimHumanoid13.joints[36] = HAnimJoint162;

let HAnimJoint163 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint163.USE = "Joe_r_carpal_distal_interphalangeal_4";
HAnimHumanoid13.joints[37] = HAnimJoint163;

let HAnimJoint164 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint164.USE = "Joe_l_carpal_distal_interphalangeal_5";
HAnimHumanoid13.joints[38] = HAnimJoint164;

let HAnimJoint165 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint165.USE = "Joe_r_carpal_distal_interphalangeal_5";
HAnimHumanoid13.joints[39] = HAnimJoint165;

let HAnimJoint166 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint166.USE = "Joe_l_carpal_interphalangeal_1";
HAnimHumanoid13.joints[40] = HAnimJoint166;

let HAnimJoint167 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint167.USE = "Joe_r_carpal_interphalangeal_1";
HAnimHumanoid13.joints[41] = HAnimJoint167;

let HAnimJoint168 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint168.USE = "Joe_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid13.joints[42] = HAnimJoint168;

let HAnimJoint169 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint169.USE = "Joe_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid13.joints[43] = HAnimJoint169;

let HAnimJoint170 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint170.USE = "Joe_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid13.joints[44] = HAnimJoint170;

let HAnimJoint171 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint171.USE = "Joe_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid13.joints[45] = HAnimJoint171;

let HAnimJoint172 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint172.USE = "Joe_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid13.joints[46] = HAnimJoint172;

let HAnimJoint173 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint173.USE = "Joe_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid13.joints[47] = HAnimJoint173;

let HAnimJoint174 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint174.USE = "Joe_l_carpal_proximal_interphalangeal_5";
HAnimHumanoid13.joints[48] = HAnimJoint174;

let HAnimJoint175 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint175.USE = "Joe_r_carpal_proximal_interphalangeal_5";
HAnimHumanoid13.joints[49] = HAnimJoint175;

let HAnimJoint176 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint176.USE = "Joe_l_carpometacarpal_1";
HAnimHumanoid13.joints[50] = HAnimJoint176;

let HAnimJoint177 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint177.USE = "Joe_r_carpometacarpal_1";
HAnimHumanoid13.joints[51] = HAnimJoint177;

let HAnimJoint178 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint178.USE = "Joe_l_carpometacarpal_2";
HAnimHumanoid13.joints[52] = HAnimJoint178;

let HAnimJoint179 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint179.USE = "Joe_r_carpometacarpal_2";
HAnimHumanoid13.joints[53] = HAnimJoint179;

let HAnimJoint180 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint180.USE = "Joe_l_carpometacarpal_3";
HAnimHumanoid13.joints[54] = HAnimJoint180;

let HAnimJoint181 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint181.USE = "Joe_r_carpometacarpal_3";
HAnimHumanoid13.joints[55] = HAnimJoint181;

let HAnimJoint182 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint182.USE = "Joe_l_carpometacarpal_4";
HAnimHumanoid13.joints[56] = HAnimJoint182;

let HAnimJoint183 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint183.USE = "Joe_r_carpometacarpal_4";
HAnimHumanoid13.joints[57] = HAnimJoint183;

let HAnimJoint184 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint184.USE = "Joe_l_carpometacarpal_5";
HAnimHumanoid13.joints[58] = HAnimJoint184;

let HAnimJoint185 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint185.USE = "Joe_r_carpometacarpal_5";
HAnimHumanoid13.joints[59] = HAnimJoint185;

let HAnimJoint186 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint186.USE = "Joe_l_elbow";
HAnimHumanoid13.joints[60] = HAnimJoint186;

let HAnimJoint187 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint187.USE = "Joe_r_elbow";
HAnimHumanoid13.joints[61] = HAnimJoint187;

let HAnimJoint188 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint188.USE = "Joe_l_eyeball_joint";
HAnimHumanoid13.joints[62] = HAnimJoint188;

let HAnimJoint189 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint189.USE = "Joe_r_eyeball_joint";
HAnimHumanoid13.joints[63] = HAnimJoint189;

let HAnimJoint190 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint190.USE = "Joe_l_eyebrow_joint";
HAnimHumanoid13.joints[64] = HAnimJoint190;

let HAnimJoint191 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint191.USE = "Joe_r_eyebrow_joint";
HAnimHumanoid13.joints[65] = HAnimJoint191;

let HAnimJoint192 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint192.USE = "Joe_l_eyelid_joint";
HAnimHumanoid13.joints[66] = HAnimJoint192;

let HAnimJoint193 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint193.USE = "Joe_r_eyelid_joint";
HAnimHumanoid13.joints[67] = HAnimJoint193;

let HAnimJoint194 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint194.USE = "Joe_l_hip";
HAnimHumanoid13.joints[68] = HAnimJoint194;

let HAnimJoint195 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint195.USE = "Joe_r_hip";
HAnimHumanoid13.joints[69] = HAnimJoint195;

let HAnimJoint196 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint196.USE = "Joe_l_knee";
HAnimHumanoid13.joints[70] = HAnimJoint196;

let HAnimJoint197 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint197.USE = "Joe_r_knee";
HAnimHumanoid13.joints[71] = HAnimJoint197;

let HAnimJoint198 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint198.USE = "Joe_l_metacarpophalangeal_1";
HAnimHumanoid13.joints[72] = HAnimJoint198;

let HAnimJoint199 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint199.USE = "Joe_r_metacarpophalangeal_1";
HAnimHumanoid13.joints[73] = HAnimJoint199;

let HAnimJoint200 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint200.USE = "Joe_l_metacarpophalangeal_2";
HAnimHumanoid13.joints[74] = HAnimJoint200;

let HAnimJoint201 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint201.USE = "Joe_r_metacarpophalangeal_2";
HAnimHumanoid13.joints[75] = HAnimJoint201;

let HAnimJoint202 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint202.USE = "Joe_l_metacarpophalangeal_3";
HAnimHumanoid13.joints[76] = HAnimJoint202;

let HAnimJoint203 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint203.USE = "Joe_r_metacarpophalangeal_3";
HAnimHumanoid13.joints[77] = HAnimJoint203;

let HAnimJoint204 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint204.USE = "Joe_l_metacarpophalangeal_4";
HAnimHumanoid13.joints[78] = HAnimJoint204;

let HAnimJoint205 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint205.USE = "Joe_r_metacarpophalangeal_4";
HAnimHumanoid13.joints[79] = HAnimJoint205;

let HAnimJoint206 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint206.USE = "Joe_l_metacarpophalangeal_5";
HAnimHumanoid13.joints[80] = HAnimJoint206;

let HAnimJoint207 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint207.USE = "Joe_r_metacarpophalangeal_5";
HAnimHumanoid13.joints[81] = HAnimJoint207;

let HAnimJoint208 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint208.USE = "Joe_l_metatarsophalangeal_2";
HAnimHumanoid13.joints[82] = HAnimJoint208;

let HAnimJoint209 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint209.USE = "Joe_r_metatarsophalangeal_2";
HAnimHumanoid13.joints[83] = HAnimJoint209;

let HAnimJoint210 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint210.USE = "Joe_l_radiocarpal";
HAnimHumanoid13.joints[84] = HAnimJoint210;

let HAnimJoint211 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint211.USE = "Joe_r_radiocarpal";
HAnimHumanoid13.joints[85] = HAnimJoint211;

let HAnimJoint212 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint212.USE = "Joe_l_shoulder";
HAnimHumanoid13.joints[86] = HAnimJoint212;

let HAnimJoint213 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint213.USE = "Joe_r_shoulder";
HAnimHumanoid13.joints[87] = HAnimJoint213;

let HAnimJoint214 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint214.USE = "Joe_l_sternoclavicular";
HAnimHumanoid13.joints[88] = HAnimJoint214;

let HAnimJoint215 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint215.USE = "Joe_r_sternoclavicular";
HAnimHumanoid13.joints[89] = HAnimJoint215;

let HAnimJoint216 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint216.USE = "Joe_l_talocrural";
HAnimHumanoid13.joints[90] = HAnimJoint216;

let HAnimJoint217 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint217.USE = "Joe_r_talocrural";
HAnimHumanoid13.joints[91] = HAnimJoint217;

let HAnimJoint218 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint218.USE = "Joe_l_tarsal_distal_interphalangeal_2";
HAnimHumanoid13.joints[92] = HAnimJoint218;

let HAnimJoint219 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint219.USE = "Joe_r_tarsal_distal_interphalangeal_2";
HAnimHumanoid13.joints[93] = HAnimJoint219;

let HAnimJoint220 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint220.USE = "Joe_l_tarsometatarsal_2";
HAnimHumanoid13.joints[94] = HAnimJoint220;

let HAnimJoint221 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint221.USE = "Joe_r_tarsometatarsal_2";
HAnimHumanoid13.joints[95] = HAnimJoint221;

let HAnimSegment222 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment222.USE = "Joe_sacrum";
HAnimHumanoid13.segments[96] = HAnimSegment222;

let HAnimSite223 = browser.currentScene.createNode("HAnimSite");
HAnimSite223.USE = "Joe_RootFront_view";
HAnimHumanoid13.viewpoints[97] = HAnimSite223;

Group12.children = new MFNode();

Group12.children[0] = HAnimHumanoid13;

browser.currentScene.children[10] = Group12;

let Group224 = browser.currentScene.createNode("Group");
let TimeSensor225 = browser.currentScene.createNode("TimeSensor");
TimeSensor225.DEF = "KickTimer";
TimeSensor225.cycleInterval = 3.73;
TimeSensor225.loop = True;
Group224.children = new MFNode();

Group224.children[0] = TimeSensor225;

//Interpolators
let OrientationInterpolator226 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator226.DEF = "HumanoidRoot_RotationInterpolator";
OrientationInterpolator226.key = new MFFloat(new float[0,0.1,0.4,0.6,1]);
OrientationInterpolator226.keyValue = new MFRotation(new float[1,0,0,0.5,1,0,0,0.5,-1,0,0,0.1,-1,0,0,0.5,-1,0,0,0.5]);
Group224.children[1] = OrientationInterpolator226;

let PositionInterpolator227 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator227.DEF = "HumanoidRoot_TranslationInterpolator";
PositionInterpolator227.key = new MFFloat(new float[0,0.2,0.6,1]);
PositionInterpolator227.keyValue = new MFVec3f(new float[1,0.3,-1,0.4,-0.04,-0.4,-0.18,0.1,0,-0.2,0.15,0.15]);
Group224.children[2] = PositionInterpolator227;

let OrientationInterpolator228 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator228.DEF = "sacroiliac_RotationInterpolator";
OrientationInterpolator228.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator228.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[3] = OrientationInterpolator228;

let OrientationInterpolator229 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator229.DEF = "l_hip_RotationInterpolator";
OrientationInterpolator229.key = new MFFloat(new float[0,0.1,0.3,0.45,1]);
OrientationInterpolator229.keyValue = new MFRotation(new float[-1,0,0,1.5,-1,0,0,1,0,0,1,0,1,0,0,0.5,1,0,0,1]);
Group224.children[4] = OrientationInterpolator229;

let OrientationInterpolator230 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator230.DEF = "l_knee_RotationInterpolator";
OrientationInterpolator230.key = new MFFloat(new float[0,0.2,0.35,0.5,1]);
OrientationInterpolator230.keyValue = new MFRotation(new float[1,0,0,1,0,0,1,0,0,0,1,0.2,1,0,1,0.5,1,0,0,1.4]);
Group224.children[5] = OrientationInterpolator230;

let OrientationInterpolator231 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator231.DEF = "l_ankle_RotationInterpolator";
OrientationInterpolator231.key = new MFFloat(new float[0,0.25,1]);
OrientationInterpolator231.keyValue = new MFRotation(new float[-1,0,0,1,0,0,1,0,1,0,0,1]);
Group224.children[6] = OrientationInterpolator231;

let OrientationInterpolator232 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator232.DEF = "l_subtalar_RotationInterpolator";
OrientationInterpolator232.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator232.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[7] = OrientationInterpolator232;

let OrientationInterpolator233 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator233.DEF = "l_midtarsal_RotationInterpolator";
OrientationInterpolator233.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator233.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[8] = OrientationInterpolator233;

let OrientationInterpolator234 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator234.DEF = "l_metatarsal_RotationInterpolator";
OrientationInterpolator234.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator234.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[9] = OrientationInterpolator234;

let OrientationInterpolator235 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator235.DEF = "r_hip_RotationInterpolator";
OrientationInterpolator235.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator235.keyValue = new MFRotation(new float[1,0,0,1,1,0,0,1,-1,0,0,1,-1,0,0,1,-1,0,0,1]);
Group224.children[10] = OrientationInterpolator235;

let OrientationInterpolator236 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator236.DEF = "r_knee_RotationInterpolator";
OrientationInterpolator236.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator236.keyValue = new MFRotation(new float[1,0,0,0.1,0,0,1,0,1,0,0,1,1,0,0,1,1,0,0,1.5]);
Group224.children[11] = OrientationInterpolator236;

let OrientationInterpolator237 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator237.DEF = "r_ankle_RotationInterpolator";
OrientationInterpolator237.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator237.keyValue = new MFRotation(new float[-1,0,0,1,0,0,1,0,1,0,0,1,1,0,0,1,1,0,0,0.5]);
Group224.children[12] = OrientationInterpolator237;

let OrientationInterpolator238 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator238.DEF = "r_subtalar_RotationInterpolator";
OrientationInterpolator238.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator238.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[13] = OrientationInterpolator238;

let OrientationInterpolator239 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator239.DEF = "r_midtarsal_RotationInterpolator";
OrientationInterpolator239.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator239.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[14] = OrientationInterpolator239;

let OrientationInterpolator240 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator240.DEF = "r_metatarsal_RotationInterpolator";
OrientationInterpolator240.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator240.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[15] = OrientationInterpolator240;

let OrientationInterpolator241 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator241.DEF = "vl5_RotationInterpolator";
OrientationInterpolator241.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator241.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[16] = OrientationInterpolator241;

let OrientationInterpolator242 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator242.DEF = "vl4_RotationInterpolator";
OrientationInterpolator242.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator242.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[17] = OrientationInterpolator242;

let OrientationInterpolator243 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator243.DEF = "vl3_RotationInterpolator";
OrientationInterpolator243.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator243.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[18] = OrientationInterpolator243;

let OrientationInterpolator244 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator244.DEF = "vl2_RotationInterpolator";
OrientationInterpolator244.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator244.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[19] = OrientationInterpolator244;

let OrientationInterpolator245 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator245.DEF = "vl1_RotationInterpolator";
OrientationInterpolator245.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator245.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[20] = OrientationInterpolator245;

let OrientationInterpolator246 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator246.DEF = "vt12_RotationInterpolator";
OrientationInterpolator246.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator246.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[21] = OrientationInterpolator246;

let OrientationInterpolator247 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator247.DEF = "vt11_RotationInterpolator";
OrientationInterpolator247.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator247.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[22] = OrientationInterpolator247;

let OrientationInterpolator248 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator248.DEF = "vt10_RotationInterpolator";
OrientationInterpolator248.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator248.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[23] = OrientationInterpolator248;

let OrientationInterpolator249 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator249.DEF = "vt9_RotationInterpolator";
OrientationInterpolator249.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator249.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[24] = OrientationInterpolator249;

let OrientationInterpolator250 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator250.DEF = "vt8_RotationInterpolator";
OrientationInterpolator250.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator250.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[25] = OrientationInterpolator250;

let OrientationInterpolator251 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator251.DEF = "vt7_RotationInterpolator";
OrientationInterpolator251.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator251.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[26] = OrientationInterpolator251;

let OrientationInterpolator252 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator252.DEF = "vt6_RotationInterpolator";
OrientationInterpolator252.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator252.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[27] = OrientationInterpolator252;

let OrientationInterpolator253 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator253.DEF = "vt5_RotationInterpolator";
OrientationInterpolator253.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator253.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[28] = OrientationInterpolator253;

let OrientationInterpolator254 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator254.DEF = "vt4_RotationInterpolator";
OrientationInterpolator254.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator254.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[29] = OrientationInterpolator254;

let OrientationInterpolator255 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator255.DEF = "vt3_RotationInterpolator";
OrientationInterpolator255.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator255.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[30] = OrientationInterpolator255;

let OrientationInterpolator256 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator256.DEF = "vt2_RotationInterpolator";
OrientationInterpolator256.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator256.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[31] = OrientationInterpolator256;

let OrientationInterpolator257 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator257.DEF = "vt1_RotationInterpolator";
OrientationInterpolator257.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator257.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[32] = OrientationInterpolator257;

let OrientationInterpolator258 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator258.DEF = "vc7_RotationInterpolator";
OrientationInterpolator258.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator258.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[33] = OrientationInterpolator258;

let OrientationInterpolator259 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator259.DEF = "vc6_RotationInterpolator";
OrientationInterpolator259.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator259.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[34] = OrientationInterpolator259;

let OrientationInterpolator260 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator260.DEF = "vc5_RotationInterpolator";
OrientationInterpolator260.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator260.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[35] = OrientationInterpolator260;

let OrientationInterpolator261 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator261.DEF = "vc4_RotationInterpolator";
OrientationInterpolator261.key = new MFFloat(new float[0,0.3,0.4,1]);
OrientationInterpolator261.keyValue = new MFRotation(new float[1,0,1,0.25,-1,0,-1,0.35,1,0,0,0.75,1,0,1,0.5]);
Group224.children[36] = OrientationInterpolator261;

let OrientationInterpolator262 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator262.DEF = "vc3_RotationInterpolator";
OrientationInterpolator262.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator262.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[37] = OrientationInterpolator262;

let OrientationInterpolator263 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator263.DEF = "vc2_RotationInterpolator";
OrientationInterpolator263.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator263.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[38] = OrientationInterpolator263;

let OrientationInterpolator264 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator264.DEF = "vc1_RotationInterpolator";
OrientationInterpolator264.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator264.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[39] = OrientationInterpolator264;

let OrientationInterpolator265 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator265.DEF = "skullbase_RotationInterpolator";
OrientationInterpolator265.key = new MFFloat(new float[0,0.2,0.75,1]);
OrientationInterpolator265.keyValue = new MFRotation(new float[0,-1,0,0.5,0,0,1,0,0,0,1,0,0,1,0,0.35]);
Group224.children[40] = OrientationInterpolator265;

let OrientationInterpolator266 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator266.DEF = "l_eyelid_joint_RotationInterpolator";
OrientationInterpolator266.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator266.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[41] = OrientationInterpolator266;

let OrientationInterpolator267 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator267.DEF = "l_eyeball_joint_RotationInterpolator";
OrientationInterpolator267.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator267.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[42] = OrientationInterpolator267;

let OrientationInterpolator268 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator268.DEF = "l_eyebrow_joint_RotationInterpolator";
OrientationInterpolator268.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator268.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[43] = OrientationInterpolator268;

let OrientationInterpolator269 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator269.DEF = "r_eyelid_joint_RotationInterpolator";
OrientationInterpolator269.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator269.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[44] = OrientationInterpolator269;

let OrientationInterpolator270 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator270.DEF = "r_eyeball_joint_RotationInterpolator";
OrientationInterpolator270.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator270.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[45] = OrientationInterpolator270;

let OrientationInterpolator271 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator271.DEF = "r_eyebrow_joint_RotationInterpolator";
OrientationInterpolator271.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator271.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[46] = OrientationInterpolator271;

let OrientationInterpolator272 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator272.DEF = "temporomandibular_RotationInterpolator";
OrientationInterpolator272.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator272.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[47] = OrientationInterpolator272;

let OrientationInterpolator273 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator273.DEF = "l_sternoclavicular_RotationInterpolator";
OrientationInterpolator273.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator273.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[48] = OrientationInterpolator273;

let OrientationInterpolator274 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator274.DEF = "l_acromioclavicular_RotationInterpolator";
OrientationInterpolator274.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator274.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[49] = OrientationInterpolator274;

let OrientationInterpolator275 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator275.DEF = "l_shoulder_RotationInterpolator";
OrientationInterpolator275.key = new MFFloat(new float[0,0.4,1]);
OrientationInterpolator275.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.5,-1,0,1,1.75]);
Group224.children[50] = OrientationInterpolator275;

let OrientationInterpolator276 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator276.DEF = "l_elbow_RotationInterpolator";
OrientationInterpolator276.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator276.keyValue = new MFRotation(new float[-1,0,0,3,-1,0,0,0.75,-1,-1,0,0.5]);
Group224.children[51] = OrientationInterpolator276;

let OrientationInterpolator277 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator277.DEF = "l_wrist_RotationInterpolator";
OrientationInterpolator277.key = new MFFloat(new float[0,0.4,0.8,1]);
OrientationInterpolator277.keyValue = new MFRotation(new float[0,0,1,0,0,1,0,1.3,0,-0.5,1,1.3,0,0,1,0]);
Group224.children[52] = OrientationInterpolator277;

let OrientationInterpolator278 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator278.DEF = "l_thumb1_RotationInterpolator";
OrientationInterpolator278.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator278.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[53] = OrientationInterpolator278;

let OrientationInterpolator279 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator279.DEF = "l_thumb2_RotationInterpolator";
OrientationInterpolator279.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator279.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[54] = OrientationInterpolator279;

let OrientationInterpolator280 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator280.DEF = "l_thumb3_RotationInterpolator";
OrientationInterpolator280.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator280.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[55] = OrientationInterpolator280;

let OrientationInterpolator281 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator281.DEF = "l_index0_RotationInterpolator";
OrientationInterpolator281.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator281.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[56] = OrientationInterpolator281;

let OrientationInterpolator282 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator282.DEF = "l_index1_RotationInterpolator";
OrientationInterpolator282.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator282.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[57] = OrientationInterpolator282;

let OrientationInterpolator283 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator283.DEF = "l_index2_RotationInterpolator";
OrientationInterpolator283.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator283.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[58] = OrientationInterpolator283;

let OrientationInterpolator284 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator284.DEF = "l_index3_RotationInterpolator";
OrientationInterpolator284.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator284.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[59] = OrientationInterpolator284;

let OrientationInterpolator285 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator285.DEF = "l_middle0_RotationInterpolator";
OrientationInterpolator285.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator285.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[60] = OrientationInterpolator285;

let OrientationInterpolator286 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator286.DEF = "l_middle1_RotationInterpolator";
OrientationInterpolator286.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator286.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[61] = OrientationInterpolator286;

let OrientationInterpolator287 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator287.DEF = "l_middle2_RotationInterpolator";
OrientationInterpolator287.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator287.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[62] = OrientationInterpolator287;

let OrientationInterpolator288 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator288.DEF = "l_middle3_RotationInterpolator";
OrientationInterpolator288.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator288.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[63] = OrientationInterpolator288;

let OrientationInterpolator289 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator289.DEF = "l_ring0_RotationInterpolator";
OrientationInterpolator289.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator289.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[64] = OrientationInterpolator289;

let OrientationInterpolator290 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator290.DEF = "l_ring1_RotationInterpolator";
OrientationInterpolator290.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator290.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[65] = OrientationInterpolator290;

let OrientationInterpolator291 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator291.DEF = "l_ring2_RotationInterpolator";
OrientationInterpolator291.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator291.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[66] = OrientationInterpolator291;

let OrientationInterpolator292 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator292.DEF = "l_ring3_RotationInterpolator";
OrientationInterpolator292.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator292.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[67] = OrientationInterpolator292;

let OrientationInterpolator293 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator293.DEF = "l_pinky0_RotationInterpolator";
OrientationInterpolator293.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator293.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[68] = OrientationInterpolator293;

let OrientationInterpolator294 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator294.DEF = "l_pinky1_RotationInterpolator";
OrientationInterpolator294.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator294.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[69] = OrientationInterpolator294;

let OrientationInterpolator295 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator295.DEF = "l_pinky2_RotationInterpolator";
OrientationInterpolator295.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator295.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[70] = OrientationInterpolator295;

let OrientationInterpolator296 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator296.DEF = "l_pinky3_RotationInterpolator";
OrientationInterpolator296.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator296.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[71] = OrientationInterpolator296;

let OrientationInterpolator297 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator297.DEF = "r_sternoclavicular_RotationInterpolator";
OrientationInterpolator297.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator297.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[72] = OrientationInterpolator297;

let OrientationInterpolator298 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator298.DEF = "r_acromioclavicular_RotationInterpolator";
OrientationInterpolator298.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator298.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[73] = OrientationInterpolator298;

let OrientationInterpolator299 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator299.DEF = "r_shoulder_RotationInterpolator";
OrientationInterpolator299.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator299.keyValue = new MFRotation(new float[0,0,-1,2.5,0,0,-1,1.5,0,0,-1,1.75]);
Group224.children[74] = OrientationInterpolator299;

let OrientationInterpolator300 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator300.DEF = "r_elbow_RotationInterpolator";
OrientationInterpolator300.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator300.keyValue = new MFRotation(new float[-1,0,0,3,-1,0,0,0.75,-1,-1,0,0.5]);
Group224.children[75] = OrientationInterpolator300;

let OrientationInterpolator301 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator301.DEF = "r_wrist_RotationInterpolator";
OrientationInterpolator301.key = new MFFloat(new float[0,0.5,0.7,1]);
OrientationInterpolator301.keyValue = new MFRotation(new float[0,1,0,0.3,0,0,1,0,0,0,-1,1,0,-1,0,0.3]);
Group224.children[76] = OrientationInterpolator301;

let OrientationInterpolator302 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator302.DEF = "r_thumb1_RotationInterpolator";
OrientationInterpolator302.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator302.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[77] = OrientationInterpolator302;

let OrientationInterpolator303 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator303.DEF = "r_thumb2_RotationInterpolator";
OrientationInterpolator303.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator303.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[78] = OrientationInterpolator303;

let OrientationInterpolator304 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator304.DEF = "r_thumb3_RotationInterpolator";
OrientationInterpolator304.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator304.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group224.children[79] = OrientationInterpolator304;

let OrientationInterpolator305 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator305.DEF = "r_index0_RotationInterpolator";
OrientationInterpolator305.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator305.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0]);
Group224.children[80] = OrientationInterpolator305;

let OrientationInterpolator306 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator306.DEF = "r_index1_RotationInterpolator";
OrientationInterpolator306.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator306.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group224.children[81] = OrientationInterpolator306;

let OrientationInterpolator307 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator307.DEF = "r_index2_RotationInterpolator";
OrientationInterpolator307.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator307.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group224.children[82] = OrientationInterpolator307;

let OrientationInterpolator308 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator308.DEF = "r_index3_RotationInterpolator";
OrientationInterpolator308.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator308.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group224.children[83] = OrientationInterpolator308;

let OrientationInterpolator309 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator309.DEF = "r_middle0_RotationInterpolator";
OrientationInterpolator309.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator309.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0]);
Group224.children[84] = OrientationInterpolator309;

let OrientationInterpolator310 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator310.DEF = "r_middle1_RotationInterpolator";
OrientationInterpolator310.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator310.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group224.children[85] = OrientationInterpolator310;

let OrientationInterpolator311 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator311.DEF = "r_middle2_RotationInterpolator";
OrientationInterpolator311.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator311.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group224.children[86] = OrientationInterpolator311;

let OrientationInterpolator312 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator312.DEF = "r_middle3_RotationInterpolator";
OrientationInterpolator312.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator312.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group224.children[87] = OrientationInterpolator312;

let OrientationInterpolator313 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator313.DEF = "r_ring0_RotationInterpolator";
OrientationInterpolator313.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator313.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0]);
Group224.children[88] = OrientationInterpolator313;

let OrientationInterpolator314 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator314.DEF = "r_ring1_RotationInterpolator";
OrientationInterpolator314.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator314.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group224.children[89] = OrientationInterpolator314;

let OrientationInterpolator315 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator315.DEF = "r_ring2_RotationInterpolator";
OrientationInterpolator315.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator315.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group224.children[90] = OrientationInterpolator315;

let OrientationInterpolator316 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator316.DEF = "r_ring3_RotationInterpolator";
OrientationInterpolator316.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator316.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group224.children[91] = OrientationInterpolator316;

let OrientationInterpolator317 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator317.DEF = "r_pinky0_RotationInterpolator";
OrientationInterpolator317.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator317.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0]);
Group224.children[92] = OrientationInterpolator317;

let OrientationInterpolator318 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator318.DEF = "r_pinky1_RotationInterpolator";
OrientationInterpolator318.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator318.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group224.children[93] = OrientationInterpolator318;

let OrientationInterpolator319 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator319.DEF = "r_pinky2_RotationInterpolator";
OrientationInterpolator319.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator319.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group224.children[94] = OrientationInterpolator319;

let OrientationInterpolator320 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator320.DEF = "r_pinky3_RotationInterpolator";
OrientationInterpolator320.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator320.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group224.children[95] = OrientationInterpolator320;

browser.currentScene.children[11] = Group224;

//TimeSensor to Interpolators
let ROUTE321 = browser.currentScene.createNode("ROUTE");
ROUTE321.fromField = "fraction_changed";
ROUTE321.fromNode = "KickTimer";
ROUTE321.toField = "set_fraction";
ROUTE321.toNode = "HumanoidRoot_RotationInterpolator";
browser.currentScene.children[12] = ROUTE321;

let ROUTE322 = browser.currentScene.createNode("ROUTE");
ROUTE322.fromField = "fraction_changed";
ROUTE322.fromNode = "KickTimer";
ROUTE322.toField = "set_fraction";
ROUTE322.toNode = "HumanoidRoot_TranslationInterpolator";
browser.currentScene.children[13] = ROUTE322;

let ROUTE323 = browser.currentScene.createNode("ROUTE");
ROUTE323.fromField = "fraction_changed";
ROUTE323.fromNode = "KickTimer";
ROUTE323.toField = "set_fraction";
ROUTE323.toNode = "sacroiliac_RotationInterpolator";
browser.currentScene.children[14] = ROUTE323;

let ROUTE324 = browser.currentScene.createNode("ROUTE");
ROUTE324.fromField = "fraction_changed";
ROUTE324.fromNode = "KickTimer";
ROUTE324.toField = "set_fraction";
ROUTE324.toNode = "l_hip_RotationInterpolator";
browser.currentScene.children[15] = ROUTE324;

let ROUTE325 = browser.currentScene.createNode("ROUTE");
ROUTE325.fromField = "fraction_changed";
ROUTE325.fromNode = "KickTimer";
ROUTE325.toField = "set_fraction";
ROUTE325.toNode = "l_knee_RotationInterpolator";
browser.currentScene.children[16] = ROUTE325;

let ROUTE326 = browser.currentScene.createNode("ROUTE");
ROUTE326.fromField = "fraction_changed";
ROUTE326.fromNode = "KickTimer";
ROUTE326.toField = "set_fraction";
ROUTE326.toNode = "l_ankle_RotationInterpolator";
browser.currentScene.children[17] = ROUTE326;

let ROUTE327 = browser.currentScene.createNode("ROUTE");
ROUTE327.fromField = "fraction_changed";
ROUTE327.fromNode = "KickTimer";
ROUTE327.toField = "set_fraction";
ROUTE327.toNode = "l_subtalar_RotationInterpolator";
browser.currentScene.children[18] = ROUTE327;

let ROUTE328 = browser.currentScene.createNode("ROUTE");
ROUTE328.fromField = "fraction_changed";
ROUTE328.fromNode = "KickTimer";
ROUTE328.toField = "set_fraction";
ROUTE328.toNode = "l_midtarsal_RotationInterpolator";
browser.currentScene.children[19] = ROUTE328;

let ROUTE329 = browser.currentScene.createNode("ROUTE");
ROUTE329.fromField = "fraction_changed";
ROUTE329.fromNode = "KickTimer";
ROUTE329.toField = "set_fraction";
ROUTE329.toNode = "l_metatarsal_RotationInterpolator";
browser.currentScene.children[20] = ROUTE329;

let ROUTE330 = browser.currentScene.createNode("ROUTE");
ROUTE330.fromField = "fraction_changed";
ROUTE330.fromNode = "KickTimer";
ROUTE330.toField = "set_fraction";
ROUTE330.toNode = "r_hip_RotationInterpolator";
browser.currentScene.children[21] = ROUTE330;

let ROUTE331 = browser.currentScene.createNode("ROUTE");
ROUTE331.fromField = "fraction_changed";
ROUTE331.fromNode = "KickTimer";
ROUTE331.toField = "set_fraction";
ROUTE331.toNode = "r_knee_RotationInterpolator";
browser.currentScene.children[22] = ROUTE331;

let ROUTE332 = browser.currentScene.createNode("ROUTE");
ROUTE332.fromField = "fraction_changed";
ROUTE332.fromNode = "KickTimer";
ROUTE332.toField = "set_fraction";
ROUTE332.toNode = "r_ankle_RotationInterpolator";
browser.currentScene.children[23] = ROUTE332;

let ROUTE333 = browser.currentScene.createNode("ROUTE");
ROUTE333.fromField = "fraction_changed";
ROUTE333.fromNode = "KickTimer";
ROUTE333.toField = "set_fraction";
ROUTE333.toNode = "r_subtalar_RotationInterpolator";
browser.currentScene.children[24] = ROUTE333;

let ROUTE334 = browser.currentScene.createNode("ROUTE");
ROUTE334.fromField = "fraction_changed";
ROUTE334.fromNode = "KickTimer";
ROUTE334.toField = "set_fraction";
ROUTE334.toNode = "r_midtarsal_RotationInterpolator";
browser.currentScene.children[25] = ROUTE334;

let ROUTE335 = browser.currentScene.createNode("ROUTE");
ROUTE335.fromField = "fraction_changed";
ROUTE335.fromNode = "KickTimer";
ROUTE335.toField = "set_fraction";
ROUTE335.toNode = "r_metatarsal_RotationInterpolator";
browser.currentScene.children[26] = ROUTE335;

let ROUTE336 = browser.currentScene.createNode("ROUTE");
ROUTE336.fromField = "fraction_changed";
ROUTE336.fromNode = "KickTimer";
ROUTE336.toField = "set_fraction";
ROUTE336.toNode = "vl5_RotationInterpolator";
browser.currentScene.children[27] = ROUTE336;

let ROUTE337 = browser.currentScene.createNode("ROUTE");
ROUTE337.fromField = "fraction_changed";
ROUTE337.fromNode = "KickTimer";
ROUTE337.toField = "set_fraction";
ROUTE337.toNode = "vl4_RotationInterpolator";
browser.currentScene.children[28] = ROUTE337;

let ROUTE338 = browser.currentScene.createNode("ROUTE");
ROUTE338.fromField = "fraction_changed";
ROUTE338.fromNode = "KickTimer";
ROUTE338.toField = "set_fraction";
ROUTE338.toNode = "vl3_RotationInterpolator";
browser.currentScene.children[29] = ROUTE338;

let ROUTE339 = browser.currentScene.createNode("ROUTE");
ROUTE339.fromField = "fraction_changed";
ROUTE339.fromNode = "KickTimer";
ROUTE339.toField = "set_fraction";
ROUTE339.toNode = "vl2_RotationInterpolator";
browser.currentScene.children[30] = ROUTE339;

let ROUTE340 = browser.currentScene.createNode("ROUTE");
ROUTE340.fromField = "fraction_changed";
ROUTE340.fromNode = "KickTimer";
ROUTE340.toField = "set_fraction";
ROUTE340.toNode = "vl1_RotationInterpolator";
browser.currentScene.children[31] = ROUTE340;

let ROUTE341 = browser.currentScene.createNode("ROUTE");
ROUTE341.fromField = "fraction_changed";
ROUTE341.fromNode = "KickTimer";
ROUTE341.toField = "set_fraction";
ROUTE341.toNode = "vt12_RotationInterpolator";
browser.currentScene.children[32] = ROUTE341;

let ROUTE342 = browser.currentScene.createNode("ROUTE");
ROUTE342.fromField = "fraction_changed";
ROUTE342.fromNode = "KickTimer";
ROUTE342.toField = "set_fraction";
ROUTE342.toNode = "vt11_RotationInterpolator";
browser.currentScene.children[33] = ROUTE342;

let ROUTE343 = browser.currentScene.createNode("ROUTE");
ROUTE343.fromField = "fraction_changed";
ROUTE343.fromNode = "KickTimer";
ROUTE343.toField = "set_fraction";
ROUTE343.toNode = "vt10_RotationInterpolator";
browser.currentScene.children[34] = ROUTE343;

let ROUTE344 = browser.currentScene.createNode("ROUTE");
ROUTE344.fromField = "fraction_changed";
ROUTE344.fromNode = "KickTimer";
ROUTE344.toField = "set_fraction";
ROUTE344.toNode = "vt9_RotationInterpolator";
browser.currentScene.children[35] = ROUTE344;

let ROUTE345 = browser.currentScene.createNode("ROUTE");
ROUTE345.fromField = "fraction_changed";
ROUTE345.fromNode = "KickTimer";
ROUTE345.toField = "set_fraction";
ROUTE345.toNode = "vt8_RotationInterpolator";
browser.currentScene.children[36] = ROUTE345;

let ROUTE346 = browser.currentScene.createNode("ROUTE");
ROUTE346.fromField = "fraction_changed";
ROUTE346.fromNode = "KickTimer";
ROUTE346.toField = "set_fraction";
ROUTE346.toNode = "vt7_RotationInterpolator";
browser.currentScene.children[37] = ROUTE346;

let ROUTE347 = browser.currentScene.createNode("ROUTE");
ROUTE347.fromField = "fraction_changed";
ROUTE347.fromNode = "KickTimer";
ROUTE347.toField = "set_fraction";
ROUTE347.toNode = "vt6_RotationInterpolator";
browser.currentScene.children[38] = ROUTE347;

let ROUTE348 = browser.currentScene.createNode("ROUTE");
ROUTE348.fromField = "fraction_changed";
ROUTE348.fromNode = "KickTimer";
ROUTE348.toField = "set_fraction";
ROUTE348.toNode = "vt5_RotationInterpolator";
browser.currentScene.children[39] = ROUTE348;

let ROUTE349 = browser.currentScene.createNode("ROUTE");
ROUTE349.fromField = "fraction_changed";
ROUTE349.fromNode = "KickTimer";
ROUTE349.toField = "set_fraction";
ROUTE349.toNode = "vt4_RotationInterpolator";
browser.currentScene.children[40] = ROUTE349;

let ROUTE350 = browser.currentScene.createNode("ROUTE");
ROUTE350.fromField = "fraction_changed";
ROUTE350.fromNode = "KickTimer";
ROUTE350.toField = "set_fraction";
ROUTE350.toNode = "vt3_RotationInterpolator";
browser.currentScene.children[41] = ROUTE350;

let ROUTE351 = browser.currentScene.createNode("ROUTE");
ROUTE351.fromField = "fraction_changed";
ROUTE351.fromNode = "KickTimer";
ROUTE351.toField = "set_fraction";
ROUTE351.toNode = "vt2_RotationInterpolator";
browser.currentScene.children[42] = ROUTE351;

let ROUTE352 = browser.currentScene.createNode("ROUTE");
ROUTE352.fromField = "fraction_changed";
ROUTE352.fromNode = "KickTimer";
ROUTE352.toField = "set_fraction";
ROUTE352.toNode = "vt1_RotationInterpolator";
browser.currentScene.children[43] = ROUTE352;

let ROUTE353 = browser.currentScene.createNode("ROUTE");
ROUTE353.fromField = "fraction_changed";
ROUTE353.fromNode = "KickTimer";
ROUTE353.toField = "set_fraction";
ROUTE353.toNode = "vc7_RotationInterpolator";
browser.currentScene.children[44] = ROUTE353;

let ROUTE354 = browser.currentScene.createNode("ROUTE");
ROUTE354.fromField = "fraction_changed";
ROUTE354.fromNode = "KickTimer";
ROUTE354.toField = "set_fraction";
ROUTE354.toNode = "vc6_RotationInterpolator";
browser.currentScene.children[45] = ROUTE354;

let ROUTE355 = browser.currentScene.createNode("ROUTE");
ROUTE355.fromField = "fraction_changed";
ROUTE355.fromNode = "KickTimer";
ROUTE355.toField = "set_fraction";
ROUTE355.toNode = "vc5_RotationInterpolator";
browser.currentScene.children[46] = ROUTE355;

let ROUTE356 = browser.currentScene.createNode("ROUTE");
ROUTE356.fromField = "fraction_changed";
ROUTE356.fromNode = "KickTimer";
ROUTE356.toField = "set_fraction";
ROUTE356.toNode = "vc4_RotationInterpolator";
browser.currentScene.children[47] = ROUTE356;

let ROUTE357 = browser.currentScene.createNode("ROUTE");
ROUTE357.fromField = "fraction_changed";
ROUTE357.fromNode = "KickTimer";
ROUTE357.toField = "set_fraction";
ROUTE357.toNode = "vc3_RotationInterpolator";
browser.currentScene.children[48] = ROUTE357;

let ROUTE358 = browser.currentScene.createNode("ROUTE");
ROUTE358.fromField = "fraction_changed";
ROUTE358.fromNode = "KickTimer";
ROUTE358.toField = "set_fraction";
ROUTE358.toNode = "vc2_RotationInterpolator";
browser.currentScene.children[49] = ROUTE358;

let ROUTE359 = browser.currentScene.createNode("ROUTE");
ROUTE359.fromField = "fraction_changed";
ROUTE359.fromNode = "KickTimer";
ROUTE359.toField = "set_fraction";
ROUTE359.toNode = "vc1_RotationInterpolator";
browser.currentScene.children[50] = ROUTE359;

let ROUTE360 = browser.currentScene.createNode("ROUTE");
ROUTE360.fromField = "fraction_changed";
ROUTE360.fromNode = "KickTimer";
ROUTE360.toField = "set_fraction";
ROUTE360.toNode = "skullbase_RotationInterpolator";
browser.currentScene.children[51] = ROUTE360;

let ROUTE361 = browser.currentScene.createNode("ROUTE");
ROUTE361.fromField = "fraction_changed";
ROUTE361.fromNode = "KickTimer";
ROUTE361.toField = "set_fraction";
ROUTE361.toNode = "l_eyelid_joint_RotationInterpolator";
browser.currentScene.children[52] = ROUTE361;

let ROUTE362 = browser.currentScene.createNode("ROUTE");
ROUTE362.fromField = "fraction_changed";
ROUTE362.fromNode = "KickTimer";
ROUTE362.toField = "set_fraction";
ROUTE362.toNode = "l_eyeball_joint_RotationInterpolator";
browser.currentScene.children[53] = ROUTE362;

let ROUTE363 = browser.currentScene.createNode("ROUTE");
ROUTE363.fromField = "fraction_changed";
ROUTE363.fromNode = "KickTimer";
ROUTE363.toField = "set_fraction";
ROUTE363.toNode = "l_eyebrow_joint_RotationInterpolator";
browser.currentScene.children[54] = ROUTE363;

let ROUTE364 = browser.currentScene.createNode("ROUTE");
ROUTE364.fromField = "fraction_changed";
ROUTE364.fromNode = "KickTimer";
ROUTE364.toField = "set_fraction";
ROUTE364.toNode = "r_eyelid_joint_RotationInterpolator";
browser.currentScene.children[55] = ROUTE364;

let ROUTE365 = browser.currentScene.createNode("ROUTE");
ROUTE365.fromField = "fraction_changed";
ROUTE365.fromNode = "KickTimer";
ROUTE365.toField = "set_fraction";
ROUTE365.toNode = "r_eyeball_joint_RotationInterpolator";
browser.currentScene.children[56] = ROUTE365;

let ROUTE366 = browser.currentScene.createNode("ROUTE");
ROUTE366.fromField = "fraction_changed";
ROUTE366.fromNode = "KickTimer";
ROUTE366.toField = "set_fraction";
ROUTE366.toNode = "r_eyebrow_joint_RotationInterpolator";
browser.currentScene.children[57] = ROUTE366;

let ROUTE367 = browser.currentScene.createNode("ROUTE");
ROUTE367.fromField = "fraction_changed";
ROUTE367.fromNode = "KickTimer";
ROUTE367.toField = "set_fraction";
ROUTE367.toNode = "temporomandibular_RotationInterpolator";
browser.currentScene.children[58] = ROUTE367;

let ROUTE368 = browser.currentScene.createNode("ROUTE");
ROUTE368.fromField = "fraction_changed";
ROUTE368.fromNode = "KickTimer";
ROUTE368.toField = "set_fraction";
ROUTE368.toNode = "l_sternoclavicular_RotationInterpolator";
browser.currentScene.children[59] = ROUTE368;

let ROUTE369 = browser.currentScene.createNode("ROUTE");
ROUTE369.fromField = "fraction_changed";
ROUTE369.fromNode = "KickTimer";
ROUTE369.toField = "set_fraction";
ROUTE369.toNode = "l_acromioclavicular_RotationInterpolator";
browser.currentScene.children[60] = ROUTE369;

let ROUTE370 = browser.currentScene.createNode("ROUTE");
ROUTE370.fromField = "fraction_changed";
ROUTE370.fromNode = "KickTimer";
ROUTE370.toField = "set_fraction";
ROUTE370.toNode = "l_shoulder_RotationInterpolator";
browser.currentScene.children[61] = ROUTE370;

let ROUTE371 = browser.currentScene.createNode("ROUTE");
ROUTE371.fromField = "fraction_changed";
ROUTE371.fromNode = "KickTimer";
ROUTE371.toField = "set_fraction";
ROUTE371.toNode = "l_elbow_RotationInterpolator";
browser.currentScene.children[62] = ROUTE371;

let ROUTE372 = browser.currentScene.createNode("ROUTE");
ROUTE372.fromField = "fraction_changed";
ROUTE372.fromNode = "KickTimer";
ROUTE372.toField = "set_fraction";
ROUTE372.toNode = "l_wrist_RotationInterpolator";
browser.currentScene.children[63] = ROUTE372;

let ROUTE373 = browser.currentScene.createNode("ROUTE");
ROUTE373.fromField = "fraction_changed";
ROUTE373.fromNode = "KickTimer";
ROUTE373.toField = "set_fraction";
ROUTE373.toNode = "l_thumb1_RotationInterpolator";
browser.currentScene.children[64] = ROUTE373;

let ROUTE374 = browser.currentScene.createNode("ROUTE");
ROUTE374.fromField = "fraction_changed";
ROUTE374.fromNode = "KickTimer";
ROUTE374.toField = "set_fraction";
ROUTE374.toNode = "l_thumb2_RotationInterpolator";
browser.currentScene.children[65] = ROUTE374;

let ROUTE375 = browser.currentScene.createNode("ROUTE");
ROUTE375.fromField = "fraction_changed";
ROUTE375.fromNode = "KickTimer";
ROUTE375.toField = "set_fraction";
ROUTE375.toNode = "l_thumb3_RotationInterpolator";
browser.currentScene.children[66] = ROUTE375;

let ROUTE376 = browser.currentScene.createNode("ROUTE");
ROUTE376.fromField = "fraction_changed";
ROUTE376.fromNode = "KickTimer";
ROUTE376.toField = "set_fraction";
ROUTE376.toNode = "l_index0_RotationInterpolator";
browser.currentScene.children[67] = ROUTE376;

let ROUTE377 = browser.currentScene.createNode("ROUTE");
ROUTE377.fromField = "fraction_changed";
ROUTE377.fromNode = "KickTimer";
ROUTE377.toField = "set_fraction";
ROUTE377.toNode = "l_index1_RotationInterpolator";
browser.currentScene.children[68] = ROUTE377;

let ROUTE378 = browser.currentScene.createNode("ROUTE");
ROUTE378.fromField = "fraction_changed";
ROUTE378.fromNode = "KickTimer";
ROUTE378.toField = "set_fraction";
ROUTE378.toNode = "l_index2_RotationInterpolator";
browser.currentScene.children[69] = ROUTE378;

let ROUTE379 = browser.currentScene.createNode("ROUTE");
ROUTE379.fromField = "fraction_changed";
ROUTE379.fromNode = "KickTimer";
ROUTE379.toField = "set_fraction";
ROUTE379.toNode = "l_index3_RotationInterpolator";
browser.currentScene.children[70] = ROUTE379;

let ROUTE380 = browser.currentScene.createNode("ROUTE");
ROUTE380.fromField = "fraction_changed";
ROUTE380.fromNode = "KickTimer";
ROUTE380.toField = "set_fraction";
ROUTE380.toNode = "l_middle0_RotationInterpolator";
browser.currentScene.children[71] = ROUTE380;

let ROUTE381 = browser.currentScene.createNode("ROUTE");
ROUTE381.fromField = "fraction_changed";
ROUTE381.fromNode = "KickTimer";
ROUTE381.toField = "set_fraction";
ROUTE381.toNode = "l_middle1_RotationInterpolator";
browser.currentScene.children[72] = ROUTE381;

let ROUTE382 = browser.currentScene.createNode("ROUTE");
ROUTE382.fromField = "fraction_changed";
ROUTE382.fromNode = "KickTimer";
ROUTE382.toField = "set_fraction";
ROUTE382.toNode = "l_middle2_RotationInterpolator";
browser.currentScene.children[73] = ROUTE382;

let ROUTE383 = browser.currentScene.createNode("ROUTE");
ROUTE383.fromField = "fraction_changed";
ROUTE383.fromNode = "KickTimer";
ROUTE383.toField = "set_fraction";
ROUTE383.toNode = "l_middle3_RotationInterpolator";
browser.currentScene.children[74] = ROUTE383;

let ROUTE384 = browser.currentScene.createNode("ROUTE");
ROUTE384.fromField = "fraction_changed";
ROUTE384.fromNode = "KickTimer";
ROUTE384.toField = "set_fraction";
ROUTE384.toNode = "l_ring0_RotationInterpolator";
browser.currentScene.children[75] = ROUTE384;

let ROUTE385 = browser.currentScene.createNode("ROUTE");
ROUTE385.fromField = "fraction_changed";
ROUTE385.fromNode = "KickTimer";
ROUTE385.toField = "set_fraction";
ROUTE385.toNode = "l_ring1_RotationInterpolator";
browser.currentScene.children[76] = ROUTE385;

let ROUTE386 = browser.currentScene.createNode("ROUTE");
ROUTE386.fromField = "fraction_changed";
ROUTE386.fromNode = "KickTimer";
ROUTE386.toField = "set_fraction";
ROUTE386.toNode = "l_ring2_RotationInterpolator";
browser.currentScene.children[77] = ROUTE386;

let ROUTE387 = browser.currentScene.createNode("ROUTE");
ROUTE387.fromField = "fraction_changed";
ROUTE387.fromNode = "KickTimer";
ROUTE387.toField = "set_fraction";
ROUTE387.toNode = "l_ring3_RotationInterpolator";
browser.currentScene.children[78] = ROUTE387;

let ROUTE388 = browser.currentScene.createNode("ROUTE");
ROUTE388.fromField = "fraction_changed";
ROUTE388.fromNode = "KickTimer";
ROUTE388.toField = "set_fraction";
ROUTE388.toNode = "l_pinky0_RotationInterpolator";
browser.currentScene.children[79] = ROUTE388;

let ROUTE389 = browser.currentScene.createNode("ROUTE");
ROUTE389.fromField = "fraction_changed";
ROUTE389.fromNode = "KickTimer";
ROUTE389.toField = "set_fraction";
ROUTE389.toNode = "l_pinky1_RotationInterpolator";
browser.currentScene.children[80] = ROUTE389;

let ROUTE390 = browser.currentScene.createNode("ROUTE");
ROUTE390.fromField = "fraction_changed";
ROUTE390.fromNode = "KickTimer";
ROUTE390.toField = "set_fraction";
ROUTE390.toNode = "l_pinky2_RotationInterpolator";
browser.currentScene.children[81] = ROUTE390;

let ROUTE391 = browser.currentScene.createNode("ROUTE");
ROUTE391.fromField = "fraction_changed";
ROUTE391.fromNode = "KickTimer";
ROUTE391.toField = "set_fraction";
ROUTE391.toNode = "l_pinky3_RotationInterpolator";
browser.currentScene.children[82] = ROUTE391;

let ROUTE392 = browser.currentScene.createNode("ROUTE");
ROUTE392.fromField = "fraction_changed";
ROUTE392.fromNode = "KickTimer";
ROUTE392.toField = "set_fraction";
ROUTE392.toNode = "r_sternoclavicular_RotationInterpolator";
browser.currentScene.children[83] = ROUTE392;

let ROUTE393 = browser.currentScene.createNode("ROUTE");
ROUTE393.fromField = "fraction_changed";
ROUTE393.fromNode = "KickTimer";
ROUTE393.toField = "set_fraction";
ROUTE393.toNode = "r_acromioclavicular_RotationInterpolator";
browser.currentScene.children[84] = ROUTE393;

let ROUTE394 = browser.currentScene.createNode("ROUTE");
ROUTE394.fromField = "fraction_changed";
ROUTE394.fromNode = "KickTimer";
ROUTE394.toField = "set_fraction";
ROUTE394.toNode = "r_shoulder_RotationInterpolator";
browser.currentScene.children[85] = ROUTE394;

let ROUTE395 = browser.currentScene.createNode("ROUTE");
ROUTE395.fromField = "fraction_changed";
ROUTE395.fromNode = "KickTimer";
ROUTE395.toField = "set_fraction";
ROUTE395.toNode = "r_elbow_RotationInterpolator";
browser.currentScene.children[86] = ROUTE395;

let ROUTE396 = browser.currentScene.createNode("ROUTE");
ROUTE396.fromField = "fraction_changed";
ROUTE396.fromNode = "KickTimer";
ROUTE396.toField = "set_fraction";
ROUTE396.toNode = "r_wrist_RotationInterpolator";
browser.currentScene.children[87] = ROUTE396;

let ROUTE397 = browser.currentScene.createNode("ROUTE");
ROUTE397.fromField = "fraction_changed";
ROUTE397.fromNode = "KickTimer";
ROUTE397.toField = "set_fraction";
ROUTE397.toNode = "r_thumb1_RotationInterpolator";
browser.currentScene.children[88] = ROUTE397;

let ROUTE398 = browser.currentScene.createNode("ROUTE");
ROUTE398.fromField = "fraction_changed";
ROUTE398.fromNode = "KickTimer";
ROUTE398.toField = "set_fraction";
ROUTE398.toNode = "r_thumb2_RotationInterpolator";
browser.currentScene.children[89] = ROUTE398;

let ROUTE399 = browser.currentScene.createNode("ROUTE");
ROUTE399.fromField = "fraction_changed";
ROUTE399.fromNode = "KickTimer";
ROUTE399.toField = "set_fraction";
ROUTE399.toNode = "r_thumb3_RotationInterpolator";
browser.currentScene.children[90] = ROUTE399;

let ROUTE400 = browser.currentScene.createNode("ROUTE");
ROUTE400.fromField = "fraction_changed";
ROUTE400.fromNode = "KickTimer";
ROUTE400.toField = "set_fraction";
ROUTE400.toNode = "r_index0_RotationInterpolator";
browser.currentScene.children[91] = ROUTE400;

let ROUTE401 = browser.currentScene.createNode("ROUTE");
ROUTE401.fromField = "fraction_changed";
ROUTE401.fromNode = "KickTimer";
ROUTE401.toField = "set_fraction";
ROUTE401.toNode = "r_index1_RotationInterpolator";
browser.currentScene.children[92] = ROUTE401;

let ROUTE402 = browser.currentScene.createNode("ROUTE");
ROUTE402.fromField = "fraction_changed";
ROUTE402.fromNode = "KickTimer";
ROUTE402.toField = "set_fraction";
ROUTE402.toNode = "r_index2_RotationInterpolator";
browser.currentScene.children[93] = ROUTE402;

let ROUTE403 = browser.currentScene.createNode("ROUTE");
ROUTE403.fromField = "fraction_changed";
ROUTE403.fromNode = "KickTimer";
ROUTE403.toField = "set_fraction";
ROUTE403.toNode = "r_index3_RotationInterpolator";
browser.currentScene.children[94] = ROUTE403;

let ROUTE404 = browser.currentScene.createNode("ROUTE");
ROUTE404.fromField = "fraction_changed";
ROUTE404.fromNode = "KickTimer";
ROUTE404.toField = "set_fraction";
ROUTE404.toNode = "r_middle0_RotationInterpolator";
browser.currentScene.children[95] = ROUTE404;

let ROUTE405 = browser.currentScene.createNode("ROUTE");
ROUTE405.fromField = "fraction_changed";
ROUTE405.fromNode = "KickTimer";
ROUTE405.toField = "set_fraction";
ROUTE405.toNode = "r_middle1_RotationInterpolator";
browser.currentScene.children[96] = ROUTE405;

let ROUTE406 = browser.currentScene.createNode("ROUTE");
ROUTE406.fromField = "fraction_changed";
ROUTE406.fromNode = "KickTimer";
ROUTE406.toField = "set_fraction";
ROUTE406.toNode = "r_middle2_RotationInterpolator";
browser.currentScene.children[97] = ROUTE406;

let ROUTE407 = browser.currentScene.createNode("ROUTE");
ROUTE407.fromField = "fraction_changed";
ROUTE407.fromNode = "KickTimer";
ROUTE407.toField = "set_fraction";
ROUTE407.toNode = "r_middle3_RotationInterpolator";
browser.currentScene.children[98] = ROUTE407;

let ROUTE408 = browser.currentScene.createNode("ROUTE");
ROUTE408.fromField = "fraction_changed";
ROUTE408.fromNode = "KickTimer";
ROUTE408.toField = "set_fraction";
ROUTE408.toNode = "r_ring0_RotationInterpolator";
browser.currentScene.children[99] = ROUTE408;

let ROUTE409 = browser.currentScene.createNode("ROUTE");
ROUTE409.fromField = "fraction_changed";
ROUTE409.fromNode = "KickTimer";
ROUTE409.toField = "set_fraction";
ROUTE409.toNode = "r_ring1_RotationInterpolator";
browser.currentScene.children[100] = ROUTE409;

let ROUTE410 = browser.currentScene.createNode("ROUTE");
ROUTE410.fromField = "fraction_changed";
ROUTE410.fromNode = "KickTimer";
ROUTE410.toField = "set_fraction";
ROUTE410.toNode = "r_ring2_RotationInterpolator";
browser.currentScene.children[101] = ROUTE410;

let ROUTE411 = browser.currentScene.createNode("ROUTE");
ROUTE411.fromField = "fraction_changed";
ROUTE411.fromNode = "KickTimer";
ROUTE411.toField = "set_fraction";
ROUTE411.toNode = "r_ring3_RotationInterpolator";
browser.currentScene.children[102] = ROUTE411;

let ROUTE412 = browser.currentScene.createNode("ROUTE");
ROUTE412.fromField = "fraction_changed";
ROUTE412.fromNode = "KickTimer";
ROUTE412.toField = "set_fraction";
ROUTE412.toNode = "r_pinky0_RotationInterpolator";
browser.currentScene.children[103] = ROUTE412;

let ROUTE413 = browser.currentScene.createNode("ROUTE");
ROUTE413.fromField = "fraction_changed";
ROUTE413.fromNode = "KickTimer";
ROUTE413.toField = "set_fraction";
ROUTE413.toNode = "r_pinky1_RotationInterpolator";
browser.currentScene.children[104] = ROUTE413;

let ROUTE414 = browser.currentScene.createNode("ROUTE");
ROUTE414.fromField = "fraction_changed";
ROUTE414.fromNode = "KickTimer";
ROUTE414.toField = "set_fraction";
ROUTE414.toNode = "r_pinky2_RotationInterpolator";
browser.currentScene.children[105] = ROUTE414;

let ROUTE415 = browser.currentScene.createNode("ROUTE");
ROUTE415.fromField = "fraction_changed";
ROUTE415.fromNode = "KickTimer";
ROUTE415.toField = "set_fraction";
ROUTE415.toNode = "r_pinky3_RotationInterpolator";
browser.currentScene.children[106] = ROUTE415;

//Routes from Interpolators to Joe_ model Joints
let ROUTE416 = browser.currentScene.createNode("ROUTE");
ROUTE416.fromField = "value_changed";
ROUTE416.fromNode = "HumanoidRoot_RotationInterpolator";
ROUTE416.toField = "set_rotation";
ROUTE416.toNode = "Joe_humanoid_root";
browser.currentScene.children[107] = ROUTE416;

let ROUTE417 = browser.currentScene.createNode("ROUTE");
ROUTE417.fromField = "value_changed";
ROUTE417.fromNode = "HumanoidRoot_TranslationInterpolator";
ROUTE417.toField = "set_translation";
ROUTE417.toNode = "Joe_humanoid_root";
browser.currentScene.children[108] = ROUTE417;

let ROUTE418 = browser.currentScene.createNode("ROUTE");
ROUTE418.fromField = "value_changed";
ROUTE418.fromNode = "sacroiliac_RotationInterpolator";
ROUTE418.toField = "set_rotation";
ROUTE418.toNode = "Joe_sacroiliac";
browser.currentScene.children[109] = ROUTE418;

let ROUTE419 = browser.currentScene.createNode("ROUTE");
ROUTE419.fromField = "value_changed";
ROUTE419.fromNode = "l_hip_RotationInterpolator";
ROUTE419.toField = "set_rotation";
ROUTE419.toNode = "Joe_l_hip";
browser.currentScene.children[110] = ROUTE419;

let ROUTE420 = browser.currentScene.createNode("ROUTE");
ROUTE420.fromField = "value_changed";
ROUTE420.fromNode = "l_knee_RotationInterpolator";
ROUTE420.toField = "set_rotation";
ROUTE420.toNode = "Joe_l_knee";
browser.currentScene.children[111] = ROUTE420;

let ROUTE421 = browser.currentScene.createNode("ROUTE");
ROUTE421.fromField = "value_changed";
ROUTE421.fromNode = "l_ankle_RotationInterpolator";
ROUTE421.toField = "set_rotation";
ROUTE421.toNode = "Joe_l_talocrural";
browser.currentScene.children[112] = ROUTE421;

let ROUTE422 = browser.currentScene.createNode("ROUTE");
ROUTE422.fromField = "value_changed";
ROUTE422.fromNode = "l_subtalar_RotationInterpolator";
ROUTE422.toField = "set_rotation";
ROUTE422.toNode = "Joe_l_tarsometatarsal_2";
browser.currentScene.children[113] = ROUTE422;

let ROUTE423 = browser.currentScene.createNode("ROUTE");
ROUTE423.fromField = "value_changed";
ROUTE423.fromNode = "l_midtarsal_RotationInterpolator";
ROUTE423.toField = "set_rotation";
ROUTE423.toNode = "Joe_l_metatarsophalangeal_2";
browser.currentScene.children[114] = ROUTE423;

let ROUTE424 = browser.currentScene.createNode("ROUTE");
ROUTE424.fromField = "value_changed";
ROUTE424.fromNode = "l_metatarsal_RotationInterpolator";
ROUTE424.toField = "set_rotation";
ROUTE424.toNode = "Joe_l_tarsal_distal_interphalangeal_2";
browser.currentScene.children[115] = ROUTE424;

let ROUTE425 = browser.currentScene.createNode("ROUTE");
ROUTE425.fromField = "value_changed";
ROUTE425.fromNode = "r_hip_RotationInterpolator";
ROUTE425.toField = "set_rotation";
ROUTE425.toNode = "Joe_r_hip";
browser.currentScene.children[116] = ROUTE425;

let ROUTE426 = browser.currentScene.createNode("ROUTE");
ROUTE426.fromField = "value_changed";
ROUTE426.fromNode = "r_knee_RotationInterpolator";
ROUTE426.toField = "set_rotation";
ROUTE426.toNode = "Joe_r_knee";
browser.currentScene.children[117] = ROUTE426;

let ROUTE427 = browser.currentScene.createNode("ROUTE");
ROUTE427.fromField = "value_changed";
ROUTE427.fromNode = "r_ankle_RotationInterpolator";
ROUTE427.toField = "set_rotation";
ROUTE427.toNode = "Joe_r_talocrural";
browser.currentScene.children[118] = ROUTE427;

let ROUTE428 = browser.currentScene.createNode("ROUTE");
ROUTE428.fromField = "value_changed";
ROUTE428.fromNode = "r_subtalar_RotationInterpolator";
ROUTE428.toField = "set_rotation";
ROUTE428.toNode = "Joe_r_tarsometatarsal_2";
browser.currentScene.children[119] = ROUTE428;

let ROUTE429 = browser.currentScene.createNode("ROUTE");
ROUTE429.fromField = "value_changed";
ROUTE429.fromNode = "r_midtarsal_RotationInterpolator";
ROUTE429.toField = "set_rotation";
ROUTE429.toNode = "Joe_r_metatarsophalangeal_2";
browser.currentScene.children[120] = ROUTE429;

let ROUTE430 = browser.currentScene.createNode("ROUTE");
ROUTE430.fromField = "value_changed";
ROUTE430.fromNode = "r_metatarsal_RotationInterpolator";
ROUTE430.toField = "set_rotation";
ROUTE430.toNode = "Joe_r_tarsal_distal_interphalangeal_2";
browser.currentScene.children[121] = ROUTE430;

let ROUTE431 = browser.currentScene.createNode("ROUTE");
ROUTE431.fromField = "value_changed";
ROUTE431.fromNode = "vl5_RotationInterpolator";
ROUTE431.toField = "set_rotation";
ROUTE431.toNode = "Joe_vl5";
browser.currentScene.children[122] = ROUTE431;

let ROUTE432 = browser.currentScene.createNode("ROUTE");
ROUTE432.fromField = "value_changed";
ROUTE432.fromNode = "vl4_RotationInterpolator";
ROUTE432.toField = "set_rotation";
ROUTE432.toNode = "Joe_vl4";
browser.currentScene.children[123] = ROUTE432;

let ROUTE433 = browser.currentScene.createNode("ROUTE");
ROUTE433.fromField = "value_changed";
ROUTE433.fromNode = "vl3_RotationInterpolator";
ROUTE433.toField = "set_rotation";
ROUTE433.toNode = "Joe_vl3";
browser.currentScene.children[124] = ROUTE433;

let ROUTE434 = browser.currentScene.createNode("ROUTE");
ROUTE434.fromField = "value_changed";
ROUTE434.fromNode = "vl2_RotationInterpolator";
ROUTE434.toField = "set_rotation";
ROUTE434.toNode = "Joe_vl2";
browser.currentScene.children[125] = ROUTE434;

let ROUTE435 = browser.currentScene.createNode("ROUTE");
ROUTE435.fromField = "value_changed";
ROUTE435.fromNode = "vl1_RotationInterpolator";
ROUTE435.toField = "set_rotation";
ROUTE435.toNode = "Joe_vl1";
browser.currentScene.children[126] = ROUTE435;

let ROUTE436 = browser.currentScene.createNode("ROUTE");
ROUTE436.fromField = "value_changed";
ROUTE436.fromNode = "vt12_RotationInterpolator";
ROUTE436.toField = "set_rotation";
ROUTE436.toNode = "Joe_vt12";
browser.currentScene.children[127] = ROUTE436;

let ROUTE437 = browser.currentScene.createNode("ROUTE");
ROUTE437.fromField = "value_changed";
ROUTE437.fromNode = "vt11_RotationInterpolator";
ROUTE437.toField = "set_rotation";
ROUTE437.toNode = "Joe_vt11";
browser.currentScene.children[128] = ROUTE437;

let ROUTE438 = browser.currentScene.createNode("ROUTE");
ROUTE438.fromField = "value_changed";
ROUTE438.fromNode = "vt10_RotationInterpolator";
ROUTE438.toField = "set_rotation";
ROUTE438.toNode = "Joe_vt10";
browser.currentScene.children[129] = ROUTE438;

let ROUTE439 = browser.currentScene.createNode("ROUTE");
ROUTE439.fromField = "value_changed";
ROUTE439.fromNode = "vt9_RotationInterpolator";
ROUTE439.toField = "set_rotation";
ROUTE439.toNode = "Joe_vt9";
browser.currentScene.children[130] = ROUTE439;

let ROUTE440 = browser.currentScene.createNode("ROUTE");
ROUTE440.fromField = "value_changed";
ROUTE440.fromNode = "vt8_RotationInterpolator";
ROUTE440.toField = "set_rotation";
ROUTE440.toNode = "Joe_vt8";
browser.currentScene.children[131] = ROUTE440;

let ROUTE441 = browser.currentScene.createNode("ROUTE");
ROUTE441.fromField = "value_changed";
ROUTE441.fromNode = "vt7_RotationInterpolator";
ROUTE441.toField = "set_rotation";
ROUTE441.toNode = "Joe_vt7";
browser.currentScene.children[132] = ROUTE441;

let ROUTE442 = browser.currentScene.createNode("ROUTE");
ROUTE442.fromField = "value_changed";
ROUTE442.fromNode = "vt6_RotationInterpolator";
ROUTE442.toField = "set_rotation";
ROUTE442.toNode = "Joe_vt6";
browser.currentScene.children[133] = ROUTE442;

let ROUTE443 = browser.currentScene.createNode("ROUTE");
ROUTE443.fromField = "value_changed";
ROUTE443.fromNode = "vt5_RotationInterpolator";
ROUTE443.toField = "set_rotation";
ROUTE443.toNode = "Joe_vt5";
browser.currentScene.children[134] = ROUTE443;

let ROUTE444 = browser.currentScene.createNode("ROUTE");
ROUTE444.fromField = "value_changed";
ROUTE444.fromNode = "vt4_RotationInterpolator";
ROUTE444.toField = "set_rotation";
ROUTE444.toNode = "Joe_vt4";
browser.currentScene.children[135] = ROUTE444;

let ROUTE445 = browser.currentScene.createNode("ROUTE");
ROUTE445.fromField = "value_changed";
ROUTE445.fromNode = "vt3_RotationInterpolator";
ROUTE445.toField = "set_rotation";
ROUTE445.toNode = "Joe_vt3";
browser.currentScene.children[136] = ROUTE445;

let ROUTE446 = browser.currentScene.createNode("ROUTE");
ROUTE446.fromField = "value_changed";
ROUTE446.fromNode = "vt2_RotationInterpolator";
ROUTE446.toField = "set_rotation";
ROUTE446.toNode = "Joe_vt2";
browser.currentScene.children[137] = ROUTE446;

let ROUTE447 = browser.currentScene.createNode("ROUTE");
ROUTE447.fromField = "value_changed";
ROUTE447.fromNode = "vt1_RotationInterpolator";
ROUTE447.toField = "set_rotation";
ROUTE447.toNode = "Joe_vt1";
browser.currentScene.children[138] = ROUTE447;

let ROUTE448 = browser.currentScene.createNode("ROUTE");
ROUTE448.fromField = "value_changed";
ROUTE448.fromNode = "vc7_RotationInterpolator";
ROUTE448.toField = "set_rotation";
ROUTE448.toNode = "Joe_vc7";
browser.currentScene.children[139] = ROUTE448;

let ROUTE449 = browser.currentScene.createNode("ROUTE");
ROUTE449.fromField = "value_changed";
ROUTE449.fromNode = "vc6_RotationInterpolator";
ROUTE449.toField = "set_rotation";
ROUTE449.toNode = "Joe_vc6";
browser.currentScene.children[140] = ROUTE449;

let ROUTE450 = browser.currentScene.createNode("ROUTE");
ROUTE450.fromField = "value_changed";
ROUTE450.fromNode = "vc5_RotationInterpolator";
ROUTE450.toField = "set_rotation";
ROUTE450.toNode = "Joe_vc5";
browser.currentScene.children[141] = ROUTE450;

let ROUTE451 = browser.currentScene.createNode("ROUTE");
ROUTE451.fromField = "value_changed";
ROUTE451.fromNode = "vc4_RotationInterpolator";
ROUTE451.toField = "set_rotation";
ROUTE451.toNode = "Joe_vc4";
browser.currentScene.children[142] = ROUTE451;

let ROUTE452 = browser.currentScene.createNode("ROUTE");
ROUTE452.fromField = "value_changed";
ROUTE452.fromNode = "vc3_RotationInterpolator";
ROUTE452.toField = "set_rotation";
ROUTE452.toNode = "Joe_vc3";
browser.currentScene.children[143] = ROUTE452;

let ROUTE453 = browser.currentScene.createNode("ROUTE");
ROUTE453.fromField = "value_changed";
ROUTE453.fromNode = "vc2_RotationInterpolator";
ROUTE453.toField = "set_rotation";
ROUTE453.toNode = "Joe_vc2";
browser.currentScene.children[144] = ROUTE453;

let ROUTE454 = browser.currentScene.createNode("ROUTE");
ROUTE454.fromField = "value_changed";
ROUTE454.fromNode = "vc1_RotationInterpolator";
ROUTE454.toField = "set_rotation";
ROUTE454.toNode = "Joe_vc1";
browser.currentScene.children[145] = ROUTE454;

let ROUTE455 = browser.currentScene.createNode("ROUTE");
ROUTE455.fromField = "value_changed";
ROUTE455.fromNode = "skullbase_RotationInterpolator";
ROUTE455.toField = "set_rotation";
ROUTE455.toNode = "Joe_skullbase";
browser.currentScene.children[146] = ROUTE455;

let ROUTE456 = browser.currentScene.createNode("ROUTE");
ROUTE456.fromField = "value_changed";
ROUTE456.fromNode = "l_eyelid_joint_RotationInterpolator";
ROUTE456.toField = "set_rotation";
ROUTE456.toNode = "Joe_l_eyelid_joint";
browser.currentScene.children[147] = ROUTE456;

let ROUTE457 = browser.currentScene.createNode("ROUTE");
ROUTE457.fromField = "value_changed";
ROUTE457.fromNode = "l_eyeball_joint_RotationInterpolator";
ROUTE457.toField = "set_rotation";
ROUTE457.toNode = "Joe_l_eyeball_joint";
browser.currentScene.children[148] = ROUTE457;

let ROUTE458 = browser.currentScene.createNode("ROUTE");
ROUTE458.fromField = "value_changed";
ROUTE458.fromNode = "l_eyebrow_joint_RotationInterpolator";
ROUTE458.toField = "set_rotation";
ROUTE458.toNode = "Joe_l_eyebrow_joint";
browser.currentScene.children[149] = ROUTE458;

let ROUTE459 = browser.currentScene.createNode("ROUTE");
ROUTE459.fromField = "value_changed";
ROUTE459.fromNode = "r_eyelid_joint_RotationInterpolator";
ROUTE459.toField = "set_rotation";
ROUTE459.toNode = "Joe_r_eyelid_joint";
browser.currentScene.children[150] = ROUTE459;

let ROUTE460 = browser.currentScene.createNode("ROUTE");
ROUTE460.fromField = "value_changed";
ROUTE460.fromNode = "r_eyeball_joint_RotationInterpolator";
ROUTE460.toField = "set_rotation";
ROUTE460.toNode = "Joe_r_eyeball_joint";
browser.currentScene.children[151] = ROUTE460;

let ROUTE461 = browser.currentScene.createNode("ROUTE");
ROUTE461.fromField = "value_changed";
ROUTE461.fromNode = "r_eyebrow_joint_RotationInterpolator";
ROUTE461.toField = "set_rotation";
ROUTE461.toNode = "Joe_r_eyebrow_joint";
browser.currentScene.children[152] = ROUTE461;

let ROUTE462 = browser.currentScene.createNode("ROUTE");
ROUTE462.fromField = "value_changed";
ROUTE462.fromNode = "temporomandibular_RotationInterpolator";
ROUTE462.toField = "set_rotation";
ROUTE462.toNode = "Joe_temporomandibular";
browser.currentScene.children[153] = ROUTE462;

let ROUTE463 = browser.currentScene.createNode("ROUTE");
ROUTE463.fromField = "value_changed";
ROUTE463.fromNode = "l_sternoclavicular_RotationInterpolator";
ROUTE463.toField = "set_rotation";
ROUTE463.toNode = "Joe_l_sternoclavicular";
browser.currentScene.children[154] = ROUTE463;

let ROUTE464 = browser.currentScene.createNode("ROUTE");
ROUTE464.fromField = "value_changed";
ROUTE464.fromNode = "l_acromioclavicular_RotationInterpolator";
ROUTE464.toField = "set_rotation";
ROUTE464.toNode = "Joe_l_acromioclavicular";
browser.currentScene.children[155] = ROUTE464;

let ROUTE465 = browser.currentScene.createNode("ROUTE");
ROUTE465.fromField = "value_changed";
ROUTE465.fromNode = "l_shoulder_RotationInterpolator";
ROUTE465.toField = "set_rotation";
ROUTE465.toNode = "Joe_l_shoulder";
browser.currentScene.children[156] = ROUTE465;

let ROUTE466 = browser.currentScene.createNode("ROUTE");
ROUTE466.fromField = "value_changed";
ROUTE466.fromNode = "l_elbow_RotationInterpolator";
ROUTE466.toField = "set_rotation";
ROUTE466.toNode = "Joe_l_elbow";
browser.currentScene.children[157] = ROUTE466;

let ROUTE467 = browser.currentScene.createNode("ROUTE");
ROUTE467.fromField = "value_changed";
ROUTE467.fromNode = "l_wrist_RotationInterpolator";
ROUTE467.toField = "set_rotation";
ROUTE467.toNode = "Joe_l_radiocarpal";
browser.currentScene.children[158] = ROUTE467;

let ROUTE468 = browser.currentScene.createNode("ROUTE");
ROUTE468.fromField = "value_changed";
ROUTE468.fromNode = "l_thumb1_RotationInterpolator";
ROUTE468.toField = "set_rotation";
ROUTE468.toNode = "Joe_l_carpometacarpal_1";
browser.currentScene.children[159] = ROUTE468;

let ROUTE469 = browser.currentScene.createNode("ROUTE");
ROUTE469.fromField = "value_changed";
ROUTE469.fromNode = "l_thumb2_RotationInterpolator";
ROUTE469.toField = "set_rotation";
ROUTE469.toNode = "Joe_l_metacarpophalangeal_1";
browser.currentScene.children[160] = ROUTE469;

let ROUTE470 = browser.currentScene.createNode("ROUTE");
ROUTE470.fromField = "value_changed";
ROUTE470.fromNode = "l_thumb3_RotationInterpolator";
ROUTE470.toField = "set_rotation";
ROUTE470.toNode = "Joe_l_carpal_interphalangeal_1";
browser.currentScene.children[161] = ROUTE470;

let ROUTE471 = browser.currentScene.createNode("ROUTE");
ROUTE471.fromField = "value_changed";
ROUTE471.fromNode = "l_index0_RotationInterpolator";
ROUTE471.toField = "set_rotation";
ROUTE471.toNode = "Joe_l_carpometacarpal_2";
browser.currentScene.children[162] = ROUTE471;

let ROUTE472 = browser.currentScene.createNode("ROUTE");
ROUTE472.fromField = "value_changed";
ROUTE472.fromNode = "l_index1_RotationInterpolator";
ROUTE472.toField = "set_rotation";
ROUTE472.toNode = "Joe_l_metacarpophalangeal_2";
browser.currentScene.children[163] = ROUTE472;

let ROUTE473 = browser.currentScene.createNode("ROUTE");
ROUTE473.fromField = "value_changed";
ROUTE473.fromNode = "l_index2_RotationInterpolator";
ROUTE473.toField = "set_rotation";
ROUTE473.toNode = "Joe_l_carpal_proximal_interphalangeal_2";
browser.currentScene.children[164] = ROUTE473;

let ROUTE474 = browser.currentScene.createNode("ROUTE");
ROUTE474.fromField = "value_changed";
ROUTE474.fromNode = "l_index3_RotationInterpolator";
ROUTE474.toField = "set_rotation";
ROUTE474.toNode = "Joe_l_carpal_distal_interphalangeal_2";
browser.currentScene.children[165] = ROUTE474;

let ROUTE475 = browser.currentScene.createNode("ROUTE");
ROUTE475.fromField = "value_changed";
ROUTE475.fromNode = "l_middle0_RotationInterpolator";
ROUTE475.toField = "set_rotation";
ROUTE475.toNode = "Joe_l_carpometacarpal_3";
browser.currentScene.children[166] = ROUTE475;

let ROUTE476 = browser.currentScene.createNode("ROUTE");
ROUTE476.fromField = "value_changed";
ROUTE476.fromNode = "l_middle1_RotationInterpolator";
ROUTE476.toField = "set_rotation";
ROUTE476.toNode = "Joe_l_metacarpophalangeal_3";
browser.currentScene.children[167] = ROUTE476;

let ROUTE477 = browser.currentScene.createNode("ROUTE");
ROUTE477.fromField = "value_changed";
ROUTE477.fromNode = "l_middle2_RotationInterpolator";
ROUTE477.toField = "set_rotation";
ROUTE477.toNode = "Joe_l_carpal_proximal_interphalangeal_3";
browser.currentScene.children[168] = ROUTE477;

let ROUTE478 = browser.currentScene.createNode("ROUTE");
ROUTE478.fromField = "value_changed";
ROUTE478.fromNode = "l_middle3_RotationInterpolator";
ROUTE478.toField = "set_rotation";
ROUTE478.toNode = "Joe_l_carpal_distal_interphalangeal_3";
browser.currentScene.children[169] = ROUTE478;

let ROUTE479 = browser.currentScene.createNode("ROUTE");
ROUTE479.fromField = "value_changed";
ROUTE479.fromNode = "l_ring0_RotationInterpolator";
ROUTE479.toField = "set_rotation";
ROUTE479.toNode = "Joe_l_carpometacarpal_4";
browser.currentScene.children[170] = ROUTE479;

let ROUTE480 = browser.currentScene.createNode("ROUTE");
ROUTE480.fromField = "value_changed";
ROUTE480.fromNode = "l_ring1_RotationInterpolator";
ROUTE480.toField = "set_rotation";
ROUTE480.toNode = "Joe_l_metacarpophalangeal_4";
browser.currentScene.children[171] = ROUTE480;

let ROUTE481 = browser.currentScene.createNode("ROUTE");
ROUTE481.fromField = "value_changed";
ROUTE481.fromNode = "l_ring2_RotationInterpolator";
ROUTE481.toField = "set_rotation";
ROUTE481.toNode = "Joe_l_carpal_proximal_interphalangeal_4";
browser.currentScene.children[172] = ROUTE481;

let ROUTE482 = browser.currentScene.createNode("ROUTE");
ROUTE482.fromField = "value_changed";
ROUTE482.fromNode = "l_ring3_RotationInterpolator";
ROUTE482.toField = "set_rotation";
ROUTE482.toNode = "Joe_l_carpal_distal_interphalangeal_4";
browser.currentScene.children[173] = ROUTE482;

let ROUTE483 = browser.currentScene.createNode("ROUTE");
ROUTE483.fromField = "value_changed";
ROUTE483.fromNode = "l_pinky0_RotationInterpolator";
ROUTE483.toField = "set_rotation";
ROUTE483.toNode = "Joe_l_carpometacarpal_5";
browser.currentScene.children[174] = ROUTE483;

let ROUTE484 = browser.currentScene.createNode("ROUTE");
ROUTE484.fromField = "value_changed";
ROUTE484.fromNode = "l_pinky1_RotationInterpolator";
ROUTE484.toField = "set_rotation";
ROUTE484.toNode = "Joe_l_metacarpophalangeal_5";
browser.currentScene.children[175] = ROUTE484;

let ROUTE485 = browser.currentScene.createNode("ROUTE");
ROUTE485.fromField = "value_changed";
ROUTE485.fromNode = "l_pinky2_RotationInterpolator";
ROUTE485.toField = "set_rotation";
ROUTE485.toNode = "Joe_l_carpal_proximal_interphalangeal_5";
browser.currentScene.children[176] = ROUTE485;

let ROUTE486 = browser.currentScene.createNode("ROUTE");
ROUTE486.fromField = "value_changed";
ROUTE486.fromNode = "l_pinky3_RotationInterpolator";
ROUTE486.toField = "set_rotation";
ROUTE486.toNode = "Joe_l_carpal_distal_interphalangeal_5";
browser.currentScene.children[177] = ROUTE486;

let ROUTE487 = browser.currentScene.createNode("ROUTE");
ROUTE487.fromField = "value_changed";
ROUTE487.fromNode = "r_sternoclavicular_RotationInterpolator";
ROUTE487.toField = "set_rotation";
ROUTE487.toNode = "Joe_r_sternoclavicular";
browser.currentScene.children[178] = ROUTE487;

let ROUTE488 = browser.currentScene.createNode("ROUTE");
ROUTE488.fromField = "value_changed";
ROUTE488.fromNode = "r_acromioclavicular_RotationInterpolator";
ROUTE488.toField = "set_rotation";
ROUTE488.toNode = "Joe_r_acromioclavicular";
browser.currentScene.children[179] = ROUTE488;

let ROUTE489 = browser.currentScene.createNode("ROUTE");
ROUTE489.fromField = "value_changed";
ROUTE489.fromNode = "r_shoulder_RotationInterpolator";
ROUTE489.toField = "set_rotation";
ROUTE489.toNode = "Joe_r_shoulder";
browser.currentScene.children[180] = ROUTE489;

let ROUTE490 = browser.currentScene.createNode("ROUTE");
ROUTE490.fromField = "value_changed";
ROUTE490.fromNode = "r_elbow_RotationInterpolator";
ROUTE490.toField = "set_rotation";
ROUTE490.toNode = "Joe_r_elbow";
browser.currentScene.children[181] = ROUTE490;

let ROUTE491 = browser.currentScene.createNode("ROUTE");
ROUTE491.fromField = "value_changed";
ROUTE491.fromNode = "r_wrist_RotationInterpolator";
ROUTE491.toField = "set_rotation";
ROUTE491.toNode = "Joe_r_radiocarpal";
browser.currentScene.children[182] = ROUTE491;

let ROUTE492 = browser.currentScene.createNode("ROUTE");
ROUTE492.fromField = "value_changed";
ROUTE492.fromNode = "r_thumb1_RotationInterpolator";
ROUTE492.toField = "set_rotation";
ROUTE492.toNode = "Joe_r_carpometacarpal_1";
browser.currentScene.children[183] = ROUTE492;

let ROUTE493 = browser.currentScene.createNode("ROUTE");
ROUTE493.fromField = "value_changed";
ROUTE493.fromNode = "r_thumb2_RotationInterpolator";
ROUTE493.toField = "set_rotation";
ROUTE493.toNode = "Joe_r_metacarpophalangeal_1";
browser.currentScene.children[184] = ROUTE493;

let ROUTE494 = browser.currentScene.createNode("ROUTE");
ROUTE494.fromField = "value_changed";
ROUTE494.fromNode = "r_thumb3_RotationInterpolator";
ROUTE494.toField = "set_rotation";
ROUTE494.toNode = "Joe_r_carpal_interphalangeal_1";
browser.currentScene.children[185] = ROUTE494;

let ROUTE495 = browser.currentScene.createNode("ROUTE");
ROUTE495.fromField = "value_changed";
ROUTE495.fromNode = "r_index0_RotationInterpolator";
ROUTE495.toField = "set_rotation";
ROUTE495.toNode = "Joe_r_carpometacarpal_2";
browser.currentScene.children[186] = ROUTE495;

let ROUTE496 = browser.currentScene.createNode("ROUTE");
ROUTE496.fromField = "value_changed";
ROUTE496.fromNode = "r_index1_RotationInterpolator";
ROUTE496.toField = "set_rotation";
ROUTE496.toNode = "Joe_r_metacarpophalangeal_2";
browser.currentScene.children[187] = ROUTE496;

let ROUTE497 = browser.currentScene.createNode("ROUTE");
ROUTE497.fromField = "value_changed";
ROUTE497.fromNode = "r_index2_RotationInterpolator";
ROUTE497.toField = "set_rotation";
ROUTE497.toNode = "Joe_r_carpal_proximal_interphalangeal_2";
browser.currentScene.children[188] = ROUTE497;

let ROUTE498 = browser.currentScene.createNode("ROUTE");
ROUTE498.fromField = "value_changed";
ROUTE498.fromNode = "r_index3_RotationInterpolator";
ROUTE498.toField = "set_rotation";
ROUTE498.toNode = "Joe_r_carpal_distal_interphalangeal_2";
browser.currentScene.children[189] = ROUTE498;

let ROUTE499 = browser.currentScene.createNode("ROUTE");
ROUTE499.fromField = "value_changed";
ROUTE499.fromNode = "r_middle0_RotationInterpolator";
ROUTE499.toField = "set_rotation";
ROUTE499.toNode = "Joe_r_carpometacarpal_3";
browser.currentScene.children[190] = ROUTE499;

let ROUTE500 = browser.currentScene.createNode("ROUTE");
ROUTE500.fromField = "value_changed";
ROUTE500.fromNode = "r_middle1_RotationInterpolator";
ROUTE500.toField = "set_rotation";
ROUTE500.toNode = "Joe_r_metacarpophalangeal_3";
browser.currentScene.children[191] = ROUTE500;

let ROUTE501 = browser.currentScene.createNode("ROUTE");
ROUTE501.fromField = "value_changed";
ROUTE501.fromNode = "r_middle2_RotationInterpolator";
ROUTE501.toField = "set_rotation";
ROUTE501.toNode = "Joe_r_carpal_proximal_interphalangeal_3";
browser.currentScene.children[192] = ROUTE501;

let ROUTE502 = browser.currentScene.createNode("ROUTE");
ROUTE502.fromField = "value_changed";
ROUTE502.fromNode = "r_middle3_RotationInterpolator";
ROUTE502.toField = "set_rotation";
ROUTE502.toNode = "Joe_r_carpal_distal_interphalangeal_3";
browser.currentScene.children[193] = ROUTE502;

let ROUTE503 = browser.currentScene.createNode("ROUTE");
ROUTE503.fromField = "value_changed";
ROUTE503.fromNode = "r_ring0_RotationInterpolator";
ROUTE503.toField = "set_rotation";
ROUTE503.toNode = "Joe_r_carpometacarpal_4";
browser.currentScene.children[194] = ROUTE503;

let ROUTE504 = browser.currentScene.createNode("ROUTE");
ROUTE504.fromField = "value_changed";
ROUTE504.fromNode = "r_ring1_RotationInterpolator";
ROUTE504.toField = "set_rotation";
ROUTE504.toNode = "Joe_r_metacarpophalangeal_4";
browser.currentScene.children[195] = ROUTE504;

let ROUTE505 = browser.currentScene.createNode("ROUTE");
ROUTE505.fromField = "value_changed";
ROUTE505.fromNode = "r_ring2_RotationInterpolator";
ROUTE505.toField = "set_rotation";
ROUTE505.toNode = "Joe_r_carpal_proximal_interphalangeal_4";
browser.currentScene.children[196] = ROUTE505;

let ROUTE506 = browser.currentScene.createNode("ROUTE");
ROUTE506.fromField = "value_changed";
ROUTE506.fromNode = "r_ring3_RotationInterpolator";
ROUTE506.toField = "set_rotation";
ROUTE506.toNode = "Joe_r_carpal_distal_interphalangeal_4";
browser.currentScene.children[197] = ROUTE506;

let ROUTE507 = browser.currentScene.createNode("ROUTE");
ROUTE507.fromField = "value_changed";
ROUTE507.fromNode = "r_pinky0_RotationInterpolator";
ROUTE507.toField = "set_rotation";
ROUTE507.toNode = "Joe_r_carpometacarpal_5";
browser.currentScene.children[198] = ROUTE507;

let ROUTE508 = browser.currentScene.createNode("ROUTE");
ROUTE508.fromField = "value_changed";
ROUTE508.fromNode = "r_pinky1_RotationInterpolator";
ROUTE508.toField = "set_rotation";
ROUTE508.toNode = "Joe_r_metacarpophalangeal_5";
browser.currentScene.children[199] = ROUTE508;

let ROUTE509 = browser.currentScene.createNode("ROUTE");
ROUTE509.fromField = "value_changed";
ROUTE509.fromNode = "r_pinky2_RotationInterpolator";
ROUTE509.toField = "set_rotation";
ROUTE509.toNode = "Joe_r_carpal_proximal_interphalangeal_5";
browser.currentScene.children[200] = ROUTE509;

let ROUTE510 = browser.currentScene.createNode("ROUTE");
ROUTE510.fromField = "value_changed";
ROUTE510.fromNode = "r_pinky3_RotationInterpolator";
ROUTE510.toField = "set_rotation";
ROUTE510.toNode = "Joe_r_carpal_distal_interphalangeal_5";
browser.currentScene.children[201] = ROUTE510;

let Group511 = browser.currentScene.createNode("Group");
Group511.DEF = "DisplacersAnimationGroup";
let ScalarInterpolator512 = browser.currentScene.createNode("ScalarInterpolator");
ScalarInterpolator512.DEF = "skull_tipInterpolator";
ScalarInterpolator512.key = new MFFloat(new float[0,0.1,0.2,0.35,0.6,0.7,0.85,0.88,0.94,0.97,1]);
ScalarInterpolator512.keyValue = new MFFloat(new float[0,0,0,0,0.2,0.4,1,0,1,0.4,0]);
Group511.children = new MFNode();

Group511.children[0] = ScalarInterpolator512;

let ROUTE513 = browser.currentScene.createNode("ROUTE");
ROUTE513.fromField = "fraction_changed";
ROUTE513.fromNode = "KickTimer";
ROUTE513.toField = "set_fraction";
ROUTE513.toNode = "skull_tipInterpolator";
Group511.children[1] = ROUTE513;

let ROUTE514 = browser.currentScene.createNode("ROUTE");
ROUTE514.fromField = "value_changed";
ROUTE514.fromNode = "skull_tipInterpolator";
ROUTE514.toField = "weight";
ROUTE514.toNode = "Joe_skull_tip_raiser_action";
Group511.children[2] = ROUTE514;

browser.currentScene.children[202] = Group511;

let Group515 = browser.currentScene.createNode("Group");
Group515.DEF = "SkinTextureTransformAnimationGroup";
let ScalarInterpolator516 = browser.currentScene.createNode("ScalarInterpolator");
ScalarInterpolator516.DEF = "SkinInterpolator";
ScalarInterpolator516.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.7,0.8,1]);
ScalarInterpolator516.keyValue = new MFFloat(new float[0,0,0,0,0,1,2,0]);
Group515.children = new MFNode();

Group515.children[0] = ScalarInterpolator516;

let ROUTE517 = browser.currentScene.createNode("ROUTE");
ROUTE517.fromField = "fraction_changed";
ROUTE517.fromNode = "KickTimer";
ROUTE517.toField = "set_fraction";
ROUTE517.toNode = "SkinInterpolator";
Group515.children[1] = ROUTE517;

let ROUTE518 = browser.currentScene.createNode("ROUTE");
ROUTE518.fromField = "value_changed";
ROUTE518.fromNode = "SkinInterpolator";
ROUTE518.toField = "rotation";
ROUTE518.toNode = "KickTextureTransform";
Group515.children[2] = ROUTE518;

browser.currentScene.children[203] = Group515;

let Group519 = browser.currentScene.createNode("Group");
let Transform520 = browser.currentScene.createNode("Transform");
Transform520.DEF = "SBall";
Transform520.rotation = new SFRotation(new float[0.7,0,0.7,0.1]);
Transform520.scale = new SFVec3f(new float[0.23,0.23,0.23]);
Transform520.translation = new SFVec3f(new float[-0.916,0.37,-0.92]);
let Shape521 = browser.currentScene.createNode("Shape");
Shape521.DEF = "ball_Shape";
let Appearance522 = browser.currentScene.createNode("Appearance");
Appearance522.DEF = "ball_Appearance";
let Material523 = browser.currentScene.createNode("Material");
Material523.DEF = "ball_Material";
Material523.diffuseColor = new SFColor(new float[0.3,0.3,1]);
Material523.emissiveColor = new SFColor(new float[0.3,0.3,0.33]);
Appearance522.material = Material523;

let ImageTexture524 = browser.currentScene.createNode("ImageTexture");
ImageTexture524.USE = "JoeSkinImageTexture";
Appearance522.texture = ImageTexture524;

Shape521.appearance = Appearance522;

let IndexedFaceSet525 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet525.DEF = "ball_IndexedFaceSet";
IndexedFaceSet525.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,1,13,14,-1,1,14,2,-1,2,14,15,-1,2,15,3,-1,3,15,16,-1,3,16,4,-1,4,16,17,-1,4,17,5,-1,5,17,18,-1,5,18,6,-1,6,18,19,-1,6,19,7,-1,7,19,20,-1,7,20,8,-1,8,20,21,-1,8,21,9,-1,9,21,22,-1,9,22,10,-1,10,22,23,-1,10,23,11,-1,11,23,24,-1,11,24,12,-1,12,24,13,-1,12,13,1,-1,13,25,26,-1,13,26,14,-1,14,26,27,-1,14,27,15,-1,15,27,28,-1,15,28,16,-1,16,28,29,-1,16,29,17,-1,17,29,30,-1,17,30,18,-1,18,30,31,-1,18,31,19,-1,19,31,32,-1,19,32,20,-1,20,32,33,-1,20,33,21,-1,21,33,34,-1,21,34,22,-1,22,34,35,-1,22,35,23,-1,23,35,36,-1,23,36,24,-1,24,36,25,-1,24,25,13,-1,25,37,38,-1,25,38,26,-1,26,38,39,-1,26,39,27,-1,27,39,40,-1,27,40,28,-1,28,40,41,-1,28,41,29,-1,29,41,42,-1,29,42,30,-1,30,42,43,-1,30,43,31,-1,31,43,44,-1,31,44,32,-1,32,44,45,-1,32,45,33,-1,33,45,46,-1,33,46,34,-1,34,46,47,-1,34,47,35,-1,35,47,48,-1,35,48,36,-1,36,48,37,-1,36,37,25,-1,37,49,50,-1,37,50,38,-1,38,50,51,-1,38,51,39,-1,39,51,52,-1,39,52,40,-1,40,52,53,-1,40,53,41,-1,41,53,54,-1,41,54,42,-1,42,54,55,-1,42,55,43,-1,43,55,56,-1,43,56,44,-1,44,56,57,-1,44,57,45,-1,45,57,58,-1,45,58,46,-1,46,58,59,-1,46,59,47,-1,47,59,60,-1,47,60,48,-1,48,60,49,-1,48,49,37,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]);
let Coordinate526 = browser.currentScene.createNode("Coordinate");
Coordinate526.DEF = "Ball_Coordinates";
Coordinate526.point = new MFVec3f(new float[0,0.4675,0,0,0.4049,-0.2338,-0.1169,0.4049,-0.2024,-0.2024,0.4049,-0.1169,-0.2338,0.4049,0,-0.2024,0.4049,0.1169,-0.1169,0.4049,0.2024,0,0.4049,0.2338,0.1169,0.4049,0.2024,0.2024,0.4049,0.1169,0.2338,0.4049,0,0.2024,0.4049,-0.1169,0.1169,0.4049,-0.2024,0,0.2338,-0.4049,-0.2024,0.2338,-0.3506,-0.3506,0.2338,-0.2024,-0.4049,0.2338,0,-0.3506,0.2338,0.2024,-0.2024,0.2338,0.3506,0,0.2338,0.4049,0.2024,0.2338,0.3506,0.3506,0.2338,0.2024,0.4049,0.2338,0,0.3506,0.2338,-0.2024,0.2024,0.2338,-0.3506,0,0,-0.4675,-0.2338,0,-0.4049,-0.4049,0,-0.2338,-0.4675,0,0,-0.4049,0,0.2338,-0.2338,0,0.4049,0,0,0.4675,0.2338,0,0.4049,0.4049,0,0.2338,0.4675,0,0,0.4049,0,-0.2338,0.2338,0,-0.4049,0,-0.2338,-0.4049,-0.2024,-0.2338,-0.3506,-0.3506,-0.2338,-0.2024,-0.4049,-0.2338,0,-0.3506,-0.2338,0.2024,-0.2024,-0.2338,0.3506,0,-0.2338,0.4049,0.2024,-0.2338,0.3506,0.3506,-0.2338,0.2024,0.4049,-0.2338,0,0.3506,-0.2338,-0.2024,0.2024,-0.2338,-0.3506,0,-0.4049,-0.2338,-0.1169,-0.4049,-0.2024,-0.2024,-0.4049,-0.1169,-0.2338,-0.4049,0,-0.2024,-0.4049,0.1169,-0.1169,-0.4049,0.2024,0,-0.4049,0.2338,0.1169,-0.4049,0.2024,0.2024,-0.4049,0.1169,0.2338,-0.4049,0,0.2024,-0.4049,-0.1169,0.1169,-0.4049,-0.2024,0,-0.4675,0]);
IndexedFaceSet525.coord = Coordinate526;

Shape521.geometry = IndexedFaceSet525;

Transform520.children = new MFNode();

Transform520.children[0] = Shape521;

let Viewpoint527 = browser.currentScene.createNode("Viewpoint");
Viewpoint527.DEF = "ballView_1";
Viewpoint527.description = "Ball View";
Transform520.children[1] = Viewpoint527;

Group519.children = new MFNode();

Group519.children[0] = Transform520;

//Ball Animation interpolators
let PositionInterpolator528 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator528.DEF = "ball_TranslationInterpolator";
PositionInterpolator528.key = new MFFloat(new float[0,0.4,0.409,1]);
PositionInterpolator528.keyValue = new MFVec3f(new float[-1,0.4,-1,0,0.07,0,0.05,0.06,0.05,2,4,10]);
Group519.children[1] = PositionInterpolator528;

let OrientationInterpolator529 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator529.DEF = "ball_RotationInterpolator";
OrientationInterpolator529.key = new MFFloat(new float[0,0.4,0.41,0.71,1]);
OrientationInterpolator529.keyValue = new MFRotation(new float[1,0,1,0.25,-1,0,-1,1.35,-1,1,-1,3.35,-1,0.2,-1,3,-1,0.2,-1,3]);
Group519.children[2] = OrientationInterpolator529;

//Ball Animation Routes
let ROUTE530 = browser.currentScene.createNode("ROUTE");
ROUTE530.fromField = "fraction_changed";
ROUTE530.fromNode = "KickTimer";
ROUTE530.toField = "set_fraction";
ROUTE530.toNode = "ball_TranslationInterpolator";
Group519.children[3] = ROUTE530;

let ROUTE531 = browser.currentScene.createNode("ROUTE");
ROUTE531.fromField = "value_changed";
ROUTE531.fromNode = "ball_TranslationInterpolator";
ROUTE531.toField = "set_translation";
ROUTE531.toNode = "SBall";
Group519.children[4] = ROUTE531;

let ROUTE532 = browser.currentScene.createNode("ROUTE");
ROUTE532.fromField = "fraction_changed";
ROUTE532.fromNode = "KickTimer";
ROUTE532.toField = "set_fraction";
ROUTE532.toNode = "ball_RotationInterpolator";
Group519.children[5] = ROUTE532;

let ROUTE533 = browser.currentScene.createNode("ROUTE");
ROUTE533.fromField = "value_changed";
ROUTE533.fromNode = "ball_RotationInterpolator";
ROUTE533.toField = "set_rotation";
ROUTE533.toNode = "SBall";
Group519.children[6] = ROUTE533;

browser.currentScene.children[204] = Group519;

let Group534 = browser.currentScene.createNode("Group");
let Transform535 = browser.currentScene.createNode("Transform");
Transform535.scale = new SFVec3f(new float[0.2,0.2,0.2]);
let Shape536 = browser.currentScene.createNode("Shape");
Shape536.USE = "AxisLinesShape";
Transform535.children = new MFNode();

Transform535.children[0] = Shape536;

Group534.children = new MFNode();

Group534.children[0] = Transform535;

let Transform537 = browser.currentScene.createNode("Transform");
Transform537.DEF = "Circle0";
Transform537.scale = new SFVec3f(new float[1.175,1,1.175]);
let Shape538 = browser.currentScene.createNode("Shape");
Shape538.DEF = "circle_Shape";
let Appearance539 = browser.currentScene.createNode("Appearance");
Appearance539.DEF = "circle0_Appearance";
let Material540 = browser.currentScene.createNode("Material");
Material540.DEF = "circle0_Material";
Material540.ambientIntensity = 0.9;
Material540.diffuseColor = new SFColor(new float[0.9,0,0.7]);
Material540.emissiveColor = new SFColor(new float[0.425,0.486,1]);
Appearance539.material = Material540;

Shape538.appearance = Appearance539;

let IndexedLineSet541 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet541.DEF = "Orbit1";
IndexedLineSet541.coordIndex = new MFInt32(new int[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1]);
let Coordinate542 = browser.currentScene.createNode("Coordinate");
Coordinate542.DEF = "circle_Coordinates";
Coordinate542.point = new MFVec3f(new float[1,0,0,0.995,0,-0.105,0.979,0,-0.208,0.951,0,-0.309,0.914,0,-0.407,0.866,0,-0.5,0.809,0,-0.588,0.743,0,-0.669,0.669,0,-0.743,0.588,0,-0.809,0.5,0,-0.866,0.407,0,-0.914,0.309,0,-0.951,0.208,0,-0.978,0.105,0,-0.995,0,0,-1,-0.105,0,-0.994522,-0.208,0,-0.978,-0.309,0,-0.951,-0.407,0,-0.914,-0.5,0,-0.866,-0.588,0,-0.809,-0.669,0,-0.743,-0.743,0,-0.669,-0.809,0,-0.588,-0.866,0,-0.5,-0.914,0,-0.407,-0.951,0,-0.309,-0.978,0,-0.208,-0.995,0,-0.105,-1,0,0,-0.995,0,0.105,-0.978,0,0.208,-0.951,0,0.309,-0.914,0,0.407,-0.866,0,0.5,-0.809,0,0.588,-0.743,0,0.669,-0.669,0,0.743,-0.588,0,0.809,-0.5,0,0.866,-0.407,0,0.914,-0.309,0,0.951,-0.208,0,0.978,-0.105,0,0.995,0,0,1,0.105,0,0.995,0.208,0,0.978,0.309,0,0.951,0.407,0,0.914,0.5,0,0.866,0.588,0,0.809,0.669,0,0.743,0.743,0,0.669,0.809,0,0.588,0.866,0,0.5,0.914,0,0.407,0.951,0,0.309,0.978,0,0.208,0.995,0,0.104,1,0,0]);
IndexedLineSet541.coord = Coordinate542;

Shape538.geometry = IndexedLineSet541;

Transform537.children = new MFNode();

Transform537.children[0] = Shape538;

Group534.children[1] = Transform537;

let Transform543 = browser.currentScene.createNode("Transform");
Transform543.DEF = "Circle1";
Transform543.scale = new SFVec3f(new float[0.5,1,0.5]);
let Shape544 = browser.currentScene.createNode("Shape");
Shape544.DEF = "circle1_Shape";
let Appearance545 = browser.currentScene.createNode("Appearance");
Appearance545.DEF = "circle1_Appearance";
let Material546 = browser.currentScene.createNode("Material");
Material546.DEF = "circle1_Material";
Material546.diffuseColor = new SFColor(new float[0.9,0,0.7]);
Material546.emissiveColor = new SFColor(new float[0.424956,0.483976,1]);
Appearance545.material = Material546;

Shape544.appearance = Appearance545;

let IndexedLineSet547 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet547.USE = "Orbit1";
Shape544.geometry = IndexedLineSet547;

Transform543.children = new MFNode();

Transform543.children[0] = Shape544;

Group534.children[2] = Transform543;

let Transform548 = browser.currentScene.createNode("Transform");
Transform548.DEF = "Circle2";
Transform548.scale = new SFVec3f(new float[0.25,1,0.25]);
let Shape549 = browser.currentScene.createNode("Shape");
Shape549.DEF = "circle2_Shape";
let Appearance550 = browser.currentScene.createNode("Appearance");
Appearance550.DEF = "circle2_Appearance";
let Material551 = browser.currentScene.createNode("Material");
Material551.DEF = "circle2_Material";
Material551.diffuseColor = new SFColor(new float[0.9,0,0.7]);
Material551.emissiveColor = new SFColor(new float[0.424956,0.483976,1]);
Appearance550.material = Material551;

Shape549.appearance = Appearance550;

let IndexedLineSet552 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet552.USE = "Orbit1";
Shape549.geometry = IndexedLineSet552;

Transform548.children = new MFNode();

Transform548.children[0] = Shape549;

Group534.children[3] = Transform548;

browser.currentScene.children[205] = Group534;

