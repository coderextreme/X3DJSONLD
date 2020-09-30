let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
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
Background4.skyColor = new MFColor(new float[0,0,0]);
Background4.transparency = 0;
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
Viewpoint9.position = new SFVec3f(new float[2.6,0.5,0]);
browser.currentScene.children[7] = Viewpoint9;

let Viewpoint10 = browser.currentScene.createNode("Viewpoint");
Viewpoint10.DEF = "Scene_BackView";
Viewpoint10.centerOfRotation = new SFVec3f(new float[0,1.5,0]);
Viewpoint10.description = "Scene_Back View";
Viewpoint10.orientation = new SFRotation(new float[0,1,0,3.14]);
Viewpoint10.position = new SFVec3f(new float[0,2.5,-3]);
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
Group12.bboxCenter = new SFVec3f(new float[0,0,0]);
Group12.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimHumanoid13 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid13.name = "Human";
HAnimHumanoid13.DEF = "Joe_Human";
HAnimHumanoid13.version = "2.0";
let HAnimJoint14 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint14.name = "humanoid_root";
HAnimJoint14.DEF = "Joe_HumanoidRoot";
HAnimJoint14.center = new SFVec3f(new float[0,0.875,0]);
HAnimJoint14.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint14.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimSegment15 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment15.name = "sacrum";
HAnimSegment15.DEF = "Joe_sacrum";
let HAnimSite16 = browser.currentScene.createNode("HAnimSite");
HAnimSite16.name = "RootFront";
HAnimSite16.DEF = "Joe_RootFront";
HAnimSite16.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimSite16.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Transform17 = browser.currentScene.createNode("Transform");
Transform17.DEF = "hanimcordsys";
Transform17.scale = new SFVec3f(new float[0.175,0.175,0.175]);
Transform17.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform17.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Viewpoint18 = browser.currentScene.createNode("Viewpoint");
Viewpoint18.DEF = "ViewBodyRootAxes";
Viewpoint18.description = "Joe_HAnim Root Coordinate Axes View";
Transform17.children = new MFNode();

Transform17.children[0] = Viewpoint18;

let Shape19 = browser.currentScene.createNode("Shape");
Shape19.DEF = "AxisLinesShape";
Shape19.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape19.bboxSize = new SFVec3f(new float[-1,-1,-1]);
//RGB lines showing XYZ axes
let IndexedLineSet20 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet20.colorIndex = new MFInt32(new int[0,1,2]);
IndexedLineSet20.colorPerVertex = False;
IndexedLineSet20.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1]);
let Coordinate21 = browser.currentScene.createNode("Coordinate");
Coordinate21.point = new MFVec3f(new float[0,0,0,1,0,0,0,1,0,0,0,1]);
IndexedLineSet20.coord = Coordinate21;

let Color22 = browser.currentScene.createNode("Color");
Color22.color = new MFColor(new float[1,0,0,0,0.6,0,0,0,1]);
IndexedLineSet20.color = Color22;

Shape19.geometry = IndexedLineSet20;

Transform17.children[1] = Shape19;

HAnimSite16.children = new MFNode();

HAnimSite16.children[0] = Transform17;

HAnimSegment15.children = new MFNode();

HAnimSegment15.children[0] = HAnimSite16;

HAnimJoint14.children = new MFNode();

HAnimJoint14.children[0] = HAnimSegment15;

let HAnimJoint23 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint23.name = "sacroiliac";
HAnimJoint23.DEF = "Joe_sacroiliac";
HAnimJoint23.center = new SFVec3f(new float[0,0.92,0]);
HAnimJoint23.skinCoordIndex = new MFInt32(new int[17,19,20,21,22,23,26,27,73,82,89,91,93]);
HAnimJoint23.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,0.35,0.35,1]);
HAnimJoint23.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint23.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint24 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint24.name = "l_hip";
HAnimJoint24.DEF = "Joe_l_hip";
HAnimJoint24.center = new SFVec3f(new float[0.1,0.92,0]);
HAnimJoint24.skinCoordIndex = new MFInt32(new int[89,90,94,95,96,97]);
HAnimJoint24.skinCoordWeight = new MFFloat(new float[0.65,1,1,1,1,1]);
HAnimJoint24.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint24.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint25 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint25.name = "l_knee";
HAnimJoint25.DEF = "Joe_l_knee";
HAnimJoint25.center = new SFVec3f(new float[0.115,0.466,0]);
HAnimJoint25.skinCoordIndex = new MFInt32(new int[334,335,336,337,338,339,340,341]);
HAnimJoint25.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint25.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint25.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint26 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint26.name = "l_ankle";
HAnimJoint26.DEF = "Joe_l_ankle";
HAnimJoint26.center = new SFVec3f(new float[0.115,0.069,0]);
HAnimJoint26.skinCoordIndex = new MFInt32(new int[342,343,344,345]);
HAnimJoint26.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint26.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint26.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint27 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint27.name = "l_subtalar";
HAnimJoint27.DEF = "Joe_l_subtalar";
HAnimJoint27.center = new SFVec3f(new float[0.115,0.031,0.03]);
HAnimJoint27.skinCoordIndex = new MFInt32(new int[346,347,348,71]);
HAnimJoint27.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint27.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint27.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint28 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint28.name = "l_midtarsal";
HAnimJoint28.DEF = "Joe_l_midtarsal";
HAnimJoint28.center = new SFVec3f(new float[0.115,0.037,0.09]);
HAnimJoint28.skinCoordIndex = new MFInt32(new int[349,350,351,352]);
HAnimJoint28.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint28.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint28.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint29 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint29.name = "l_metatarsal";
HAnimJoint29.DEF = "Joe_l_metatarsal";
HAnimJoint29.center = new SFVec3f(new float[0.115,0.02,0.122]);
HAnimJoint29.skinCoordIndex = new MFInt32(new int[353,354,355,356,357,358,359,360,361]);
HAnimJoint29.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint29.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint29.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint28.children = new MFNode();

HAnimJoint28.children[0] = HAnimJoint29;

HAnimJoint27.children = new MFNode();

HAnimJoint27.children[0] = HAnimJoint28;

HAnimJoint26.children = new MFNode();

HAnimJoint26.children[0] = HAnimJoint27;

HAnimJoint25.children = new MFNode();

HAnimJoint25.children[0] = HAnimJoint26;

HAnimJoint24.children = new MFNode();

HAnimJoint24.children[0] = HAnimJoint25;

HAnimJoint23.children = new MFNode();

HAnimJoint23.children[0] = HAnimJoint24;

let HAnimJoint30 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint30.name = "r_hip";
HAnimJoint30.DEF = "Joe_r_hip";
HAnimJoint30.center = new SFVec3f(new float[-0.1,0.92,0]);
HAnimJoint30.skinCoordIndex = new MFInt32(new int[91,92,98,99,100,101,362,363]);
HAnimJoint30.skinCoordWeight = new MFFloat(new float[0.65,1,0.8,1,1,1,0.4,0.8]);
HAnimJoint30.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint30.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint31 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint31.name = "r_knee";
HAnimJoint31.DEF = "Joe_r_knee";
HAnimJoint31.center = new SFVec3f(new float[-0.05,0.466,0]);
HAnimJoint31.skinCoordIndex = new MFInt32(new int[362,363,364,365,366,367,368,369,98]);
HAnimJoint31.skinCoordWeight = new MFFloat(new float[0.6,0.2,1,1,1,1,1,1,0.2]);
HAnimJoint31.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint31.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint32 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint32.name = "r_ankle";
HAnimJoint32.DEF = "Joe_r_ankle";
HAnimJoint32.center = new SFVec3f(new float[-0.115,0.069,0]);
HAnimJoint32.skinCoordIndex = new MFInt32(new int[370,371,372,373]);
HAnimJoint32.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint32.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint32.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint33 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint33.name = "r_subtalar";
HAnimJoint33.DEF = "Joe_r_subtalar";
HAnimJoint33.center = new SFVec3f(new float[-0.1,0.015,-0.01]);
HAnimJoint33.skinCoordIndex = new MFInt32(new int[374,375,376]);
HAnimJoint33.skinCoordWeight = new MFFloat(new float[1,1,1]);
HAnimJoint33.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint33.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint34 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint34.name = "r_midtarsal";
HAnimJoint34.DEF = "Joe_r_midtarsal";
HAnimJoint34.center = new SFVec3f(new float[-0.115,0.037,0.09]);
HAnimJoint34.skinCoordIndex = new MFInt32(new int[377,378,379,380]);
HAnimJoint34.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint34.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint34.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint35 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint35.name = "r_metatarsal";
HAnimJoint35.DEF = "Joe_r_metatarsal";
HAnimJoint35.center = new SFVec3f(new float[-0.1,0.01,0.14]);
HAnimJoint35.skinCoordIndex = new MFInt32(new int[381,382,383,384,385,386,387,388,389]);
HAnimJoint35.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint35.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint35.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint34.children = new MFNode();

HAnimJoint34.children[0] = HAnimJoint35;

HAnimJoint33.children = new MFNode();

HAnimJoint33.children[0] = HAnimJoint34;

HAnimJoint32.children = new MFNode();

HAnimJoint32.children[0] = HAnimJoint33;

HAnimJoint31.children = new MFNode();

HAnimJoint31.children[0] = HAnimJoint32;

HAnimJoint30.children = new MFNode();

HAnimJoint30.children[0] = HAnimJoint31;

HAnimJoint23.children[1] = HAnimJoint30;

HAnimJoint14.children[1] = HAnimJoint23;

let HAnimJoint36 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint36.name = "vl5";
HAnimJoint36.DEF = "Joe_vl5";
HAnimJoint36.center = new SFVec3f(new float[0,1.045,-0.095]);
HAnimJoint36.skinCoordIndex = new MFInt32(new int[28,76]);
HAnimJoint36.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint36.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint36.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint37 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint37.name = "vl4";
HAnimJoint37.DEF = "Joe_vl4";
HAnimJoint37.center = new SFVec3f(new float[0,1.068,-0.085]);
HAnimJoint37.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint37.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint38 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint38.name = "vl3";
HAnimJoint38.DEF = "Joe_vl3";
HAnimJoint38.center = new SFVec3f(new float[0,1.092,-0.0725]);
HAnimJoint38.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint38.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint39 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint39.name = "vl2";
HAnimJoint39.DEF = "Joe_vl2";
HAnimJoint39.center = new SFVec3f(new float[0,1.12,-0.065]);
HAnimJoint39.skinCoordIndex = new MFInt32(new int[16,18,25,83,84,85,86,87,88]);
HAnimJoint39.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,0.7,1,0.8]);
HAnimJoint39.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint39.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint40 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint40.name = "vl1";
HAnimJoint40.DEF = "Joe_vl1";
HAnimJoint40.center = new SFVec3f(new float[0,1.1459,-0.0625]);
HAnimJoint40.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint40.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint41 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint41.name = "vt12";
HAnimJoint41.DEF = "Joe_vt12";
HAnimJoint41.center = new SFVec3f(new float[0,1.179,-0.068]);
HAnimJoint41.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint41.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint42 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint42.name = "vt11";
HAnimJoint42.DEF = "Joe_vt11";
HAnimJoint42.center = new SFVec3f(new float[0,1.2679,-0.081]);
HAnimJoint42.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint42.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint43 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint43.name = "vt10";
HAnimJoint43.DEF = "Joe_vt10";
HAnimJoint43.center = new SFVec3f(new float[0,1.242,-0.09]);
HAnimJoint43.skinCoordIndex = new MFInt32(new int[15]);
HAnimJoint43.skinCoordWeight = new MFFloat(new float[1]);
HAnimJoint43.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint43.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint44 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint44.name = "vt9";
HAnimJoint44.DEF = "Joe_vt9";
HAnimJoint44.center = new SFVec3f(new float[0,1.268,-0.1]);
HAnimJoint44.skinCoordIndex = new MFInt32(new int[13,14]);
HAnimJoint44.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint44.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint44.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint45 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint45.name = "vt8";
HAnimJoint45.DEF = "Joe_vt8";
HAnimJoint45.center = new SFVec3f(new float[0,1.294,-0.11]);
HAnimJoint45.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint45.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint46 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint46.name = "vt7";
HAnimJoint46.DEF = "Joe_vt7";
HAnimJoint46.center = new SFVec3f(new float[0,1.323,-0.1155]);
HAnimJoint46.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint46.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint47 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint47.name = "vt6";
HAnimJoint47.DEF = "Joe_vt6";
HAnimJoint47.center = new SFVec3f(new float[0,1.352,-0.12]);
HAnimJoint47.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint47.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint48 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint48.name = "vt5";
HAnimJoint48.DEF = "Joe_vt5";
HAnimJoint48.center = new SFVec3f(new float[0,1.381,-0.1235]);
HAnimJoint48.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint48.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint49 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint49.name = "vt4";
HAnimJoint49.DEF = "Joe_vt4";
HAnimJoint49.center = new SFVec3f(new float[0,1.41,-0.1235]);
HAnimJoint49.skinCoordIndex = new MFInt32(new int[81]);
HAnimJoint49.skinCoordWeight = new MFFloat(new float[1]);
HAnimJoint49.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint49.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint50 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint50.name = "vt3";
HAnimJoint50.DEF = "Joe_vt3";
HAnimJoint50.center = new SFVec3f(new float[0,1.438,-0.12]);
HAnimJoint50.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint50.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint51 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint51.name = "vt2";
HAnimJoint51.DEF = "Joe_vt2";
HAnimJoint51.center = new SFVec3f(new float[0,1.468,-0.105]);
HAnimJoint51.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint51.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint52 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint52.name = "vt1";
HAnimJoint52.DEF = "Joe_vt1";
HAnimJoint52.center = new SFVec3f(new float[0,1.497,-0.09]);
HAnimJoint52.skinCoordIndex = new MFInt32(new int[11,24]);
HAnimJoint52.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint52.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint52.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint53 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint53.name = "vc7";
HAnimJoint53.DEF = "Joe_vc7";
HAnimJoint53.center = new SFVec3f(new float[0,1.525,-0.072]);
HAnimJoint53.skinCoordIndex = new MFInt32(new int[74,75]);
HAnimJoint53.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint53.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint53.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint54 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint54.name = "vc6";
HAnimJoint54.DEF = "Joe_vc6";
HAnimJoint54.center = new SFVec3f(new float[0,1.54,-0.05]);
HAnimJoint54.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint54.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint55 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint55.name = "vc5";
HAnimJoint55.DEF = "Joe_vc5";
HAnimJoint55.center = new SFVec3f(new float[0,1.552,-0.035]);
HAnimJoint55.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint55.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint56 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint56.name = "vc4";
HAnimJoint56.DEF = "Joe_vc4";
HAnimJoint56.center = new SFVec3f(new float[0,1.5675,-0.0256]);
HAnimJoint56.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint56.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint57 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint57.name = "vc3";
HAnimJoint57.DEF = "Joe_vc3";
HAnimJoint57.center = new SFVec3f(new float[0,1.58225,-0.0185]);
HAnimJoint57.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint57.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint58 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint58.name = "vc2";
HAnimJoint58.DEF = "Joe_vc2";
HAnimJoint58.center = new SFVec3f(new float[0,1.595,-0.0175]);
HAnimJoint58.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint58.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint59 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint59.name = "vc1";
HAnimJoint59.DEF = "Joe_vc1";
HAnimJoint59.center = new SFVec3f(new float[0,1.61,-0.015]);
HAnimJoint59.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint59.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint60 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint60.name = "skullbase";
HAnimJoint60.DEF = "Joe_skullbase";
HAnimJoint60.center = new SFVec3f(new float[0,1.63,-0.01]);
HAnimJoint60.skinCoordIndex = new MFInt32(new int[0,1,2,3,4,5,6,7,8,9]);
HAnimJoint60.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1]);
HAnimJoint60.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint60.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimDisplacer61 = browser.currentScene.createNode("HAnimDisplacer");
HAnimDisplacer61.name = "skull_tip_raiser_action";
HAnimDisplacer61.DEF = "Joe_skull_tipTest";
HAnimDisplacer61.coordIndex = new MFInt32(new int[0,1,2,3,4,5,6,7,8,9]);
HAnimDisplacer61.displacements = new MFVec3f(new float[0,0.15,0,0,0,0.15,-0.1,0,0.15,0.1,0,0.05,0,-0.02,0.05,-0.15,0,0,-0.05,0,0,0.15,0,0,0.05,0,0,0,0,-0.15]);
HAnimJoint60.displacers = new MFNode();

HAnimJoint60.displacers[0] = HAnimDisplacer61;

let HAnimJoint62 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint62.name = "l_eyelid_joint";
HAnimJoint62.DEF = "Joe_l_eyelid_joint";
HAnimJoint62.center = new SFVec3f(new float[0.034,1.659,0.06]);
HAnimJoint62.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint62.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint60.children[1] = HAnimJoint62;

let HAnimJoint63 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint63.name = "l_eyeball_joint";
HAnimJoint63.DEF = "Joe_l_eyeball_joint";
HAnimJoint63.center = new SFVec3f(new float[0.034,1.659,0.06]);
HAnimJoint63.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint63.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint60.children[2] = HAnimJoint63;

let HAnimJoint64 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint64.name = "l_eyebrow_joint";
HAnimJoint64.DEF = "Joe_l_eyebrow_joint";
HAnimJoint64.center = new SFVec3f(new float[0.034,1.659,0.06]);
HAnimJoint64.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint64.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint60.children[3] = HAnimJoint64;

let HAnimJoint65 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint65.name = "l_eyelid_joint";
HAnimJoint65.DEF = "Joe_r_eyelid_joint";
HAnimJoint65.center = new SFVec3f(new float[-0.034,1.659,0.06]);
HAnimJoint65.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint65.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint60.children[4] = HAnimJoint65;

let HAnimJoint66 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint66.name = "l_eyeball_joint";
HAnimJoint66.DEF = "Joe_r_eyeball_joint";
HAnimJoint66.center = new SFVec3f(new float[-0.034,1.659,0.06]);
HAnimJoint66.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint66.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint60.children[5] = HAnimJoint66;

let HAnimJoint67 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint67.name = "l_eyebrow_joint";
HAnimJoint67.DEF = "Joe_r_eyebrow_joint";
HAnimJoint67.center = new SFVec3f(new float[-0.034,1.659,0.06]);
HAnimJoint67.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint67.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint60.children[6] = HAnimJoint67;

let HAnimJoint68 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint68.name = "temporomandibular";
HAnimJoint68.DEF = "Joe_temporomandibular";
HAnimJoint68.center = new SFVec3f(new float[0.034,1.659,0.06]);
HAnimJoint68.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint68.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint60.children[7] = HAnimJoint68;

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

HAnimJoint54.children = new MFNode();

HAnimJoint54.children[0] = HAnimJoint55;

HAnimJoint53.children = new MFNode();

HAnimJoint53.children[0] = HAnimJoint54;

let HAnimJoint69 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint69.name = "l_sternoclavicular";
HAnimJoint69.DEF = "Joe_l_sternoclavicular";
HAnimJoint69.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimJoint69.skinCoordIndex = new MFInt32(new int[12]);
HAnimJoint69.skinCoordWeight = new MFFloat(new float[1]);
HAnimJoint69.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint69.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint70 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint70.name = "l_acromioclavicular";
HAnimJoint70.DEF = "Joe_l_acromioclavicular";
HAnimJoint70.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimJoint70.skinCoordIndex = new MFInt32(new int[79]);
HAnimJoint70.skinCoordWeight = new MFFloat(new float[1]);
HAnimJoint70.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint70.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint71 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint71.name = "l_shoulder";
HAnimJoint71.DEF = "Joe_l_shoulder";
HAnimJoint71.center = new SFVec3f(new float[0.2,1.44,-0.04]);
HAnimJoint71.skinCoordIndex = new MFInt32(new int[41,42,44,80,102,103,104,105]);
HAnimJoint71.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint71.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint71.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint72 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint72.name = "l_elbow";
HAnimJoint72.DEF = "Joe_l_elbow";
HAnimJoint72.center = new SFVec3f(new float[0.2,1.1388,-0.04]);
HAnimJoint72.skinCoordIndex = new MFInt32(new int[45,46,47,109,110,111,112,113,115,116,117,118]);
HAnimJoint72.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimJoint72.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint72.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint73 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint73.name = "l_wrist";
HAnimJoint73.DEF = "Joe_l_wrist";
HAnimJoint73.center = new SFVec3f(new float[0.2,0.87,-0.04]);
HAnimJoint73.skinCoordIndex = new MFInt32(new int[119,120,121,122,123,124,125,126]);
HAnimJoint73.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint73.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint73.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint74 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint74.name = "l_thumb1";
HAnimJoint74.DEF = "Joe_l_thumb1";
HAnimJoint74.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimJoint74.skinCoordIndex = new MFInt32(new int[127,128]);
HAnimJoint74.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint74.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint74.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint75 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint75.name = "l_thumb2";
HAnimJoint75.DEF = "Joe_l_thumb2";
HAnimJoint75.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimJoint75.skinCoordIndex = new MFInt32(new int[138,139,140,141,142,143]);
HAnimJoint75.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,1,1,1]);
HAnimJoint75.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint75.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint76 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint76.name = "l_thumb3";
HAnimJoint76.DEF = "Joe_l_thumb3";
HAnimJoint76.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint76.skinCoordIndex = new MFInt32(new int[144,145,146,147,148,149,150,151,152]);
HAnimJoint76.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint76.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint76.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint75.children = new MFNode();

HAnimJoint75.children[0] = HAnimJoint76;

HAnimJoint74.children = new MFNode();

HAnimJoint74.children[0] = HAnimJoint75;

HAnimJoint73.children = new MFNode();

HAnimJoint73.children[0] = HAnimJoint74;

let HAnimJoint77 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint77.name = "l_index0";
HAnimJoint77.DEF = "Joe_l_index0";
HAnimJoint77.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimJoint77.skinCoordIndex = new MFInt32(new int[129,130]);
HAnimJoint77.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint77.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint77.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint78 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint78.name = "l_index1";
HAnimJoint78.DEF = "Joe_l_index1";
HAnimJoint78.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint78.skinCoordIndex = new MFInt32(new int[138,139,140,153,154,155,163]);
HAnimJoint78.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,1,1,1,0.5]);
HAnimJoint78.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint78.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint79 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint79.name = "l_index2";
HAnimJoint79.DEF = "Joe_l_index2";
HAnimJoint79.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint79.skinCoordIndex = new MFInt32(new int[166,167,168,169]);
HAnimJoint79.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint79.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint79.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint80 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint80.name = "l_index3";
HAnimJoint80.DEF = "Joe_l_index3";
HAnimJoint80.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint80.skinCoordIndex = new MFInt32(new int[170,171,172,173,174,175,176,177,178]);
HAnimJoint80.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint80.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint80.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint79.children = new MFNode();

HAnimJoint79.children[0] = HAnimJoint80;

HAnimJoint78.children = new MFNode();

HAnimJoint78.children[0] = HAnimJoint79;

HAnimJoint77.children = new MFNode();

HAnimJoint77.children[0] = HAnimJoint78;

HAnimJoint73.children[1] = HAnimJoint77;

let HAnimJoint81 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint81.name = "l_middle0";
HAnimJoint81.DEF = "Joe_l_middle0";
HAnimJoint81.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimJoint81.skinCoordIndex = new MFInt32(new int[131,132]);
HAnimJoint81.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint81.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint81.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint82 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint82.name = "l_middle1";
HAnimJoint82.DEF = "Joe_l_middle1";
HAnimJoint82.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimJoint82.skinCoordIndex = new MFInt32(new int[156,157,163,164]);
HAnimJoint82.skinCoordWeight = new MFFloat(new float[1,1,0.5,0.5]);
HAnimJoint82.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint82.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint83 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint83.name = "l_middle2";
HAnimJoint83.DEF = "Joe_l_middle2";
HAnimJoint83.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimJoint83.skinCoordIndex = new MFInt32(new int[179,180,181,182]);
HAnimJoint83.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint83.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint83.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint84 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint84.name = "l_middle3";
HAnimJoint84.DEF = "Joe_l_middle3";
HAnimJoint84.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint84.skinCoordIndex = new MFInt32(new int[183,184,185,186,187,188,189,190,191]);
HAnimJoint84.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint84.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint84.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint83.children = new MFNode();

HAnimJoint83.children[0] = HAnimJoint84;

HAnimJoint82.children = new MFNode();

HAnimJoint82.children[0] = HAnimJoint83;

HAnimJoint81.children = new MFNode();

HAnimJoint81.children[0] = HAnimJoint82;

HAnimJoint73.children[2] = HAnimJoint81;

let HAnimJoint85 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint85.name = "l_ring0";
HAnimJoint85.DEF = "Joe_l_ring0";
HAnimJoint85.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimJoint85.skinCoordIndex = new MFInt32(new int[133,134]);
HAnimJoint85.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint85.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint85.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint86 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint86.name = "l_ring1";
HAnimJoint86.DEF = "Joe_l_ring1";
HAnimJoint86.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimJoint86.skinCoordIndex = new MFInt32(new int[158,159,164,165]);
HAnimJoint86.skinCoordWeight = new MFFloat(new float[1,1,0.5,0.5]);
HAnimJoint86.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint86.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint87 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint87.name = "l_ring2";
HAnimJoint87.DEF = "Joe_l_ring2";
HAnimJoint87.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimJoint87.skinCoordIndex = new MFInt32(new int[192,193,194,195]);
HAnimJoint87.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint87.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint87.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint88 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint88.name = "l_ring3";
HAnimJoint88.DEF = "Joe_l_ring3";
HAnimJoint88.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint88.skinCoordIndex = new MFInt32(new int[196,197,198,199,200,201,202,203,204]);
HAnimJoint88.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint88.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint88.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint87.children = new MFNode();

HAnimJoint87.children[0] = HAnimJoint88;

HAnimJoint86.children = new MFNode();

HAnimJoint86.children[0] = HAnimJoint87;

HAnimJoint85.children = new MFNode();

HAnimJoint85.children[0] = HAnimJoint86;

HAnimJoint73.children[3] = HAnimJoint85;

let HAnimJoint89 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint89.name = "l_pinky0";
HAnimJoint89.DEF = "Joe_l_pinky0";
HAnimJoint89.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimJoint89.skinCoordIndex = new MFInt32(new int[135,136,137,165]);
HAnimJoint89.skinCoordWeight = new MFFloat(new float[1,1,1,0.5]);
HAnimJoint89.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint89.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint90 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint90.name = "l_pinky1";
HAnimJoint90.DEF = "Joe_l_pinky1";
HAnimJoint90.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimJoint90.skinCoordIndex = new MFInt32(new int[160,161,162]);
HAnimJoint90.skinCoordWeight = new MFFloat(new float[1,1,1]);
HAnimJoint90.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint90.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint91 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint91.name = "l_pinky2";
HAnimJoint91.DEF = "Joe_l_pinky2";
HAnimJoint91.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimJoint91.skinCoordIndex = new MFInt32(new int[205,206,207,208]);
HAnimJoint91.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint91.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint91.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint92 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint92.name = "l_pinky3";
HAnimJoint92.DEF = "Joe_l_pinky3";
HAnimJoint92.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint92.skinCoordIndex = new MFInt32(new int[209,210,211,212,213,214,215,216,217]);
HAnimJoint92.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint92.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint92.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint91.children = new MFNode();

HAnimJoint91.children[0] = HAnimJoint92;

HAnimJoint90.children = new MFNode();

HAnimJoint90.children[0] = HAnimJoint91;

HAnimJoint89.children = new MFNode();

HAnimJoint89.children[0] = HAnimJoint90;

HAnimJoint73.children[4] = HAnimJoint89;

HAnimJoint72.children = new MFNode();

HAnimJoint72.children[0] = HAnimJoint73;

HAnimJoint71.children = new MFNode();

HAnimJoint71.children[0] = HAnimJoint72;

HAnimJoint70.children = new MFNode();

HAnimJoint70.children[0] = HAnimJoint71;

HAnimJoint69.children = new MFNode();

HAnimJoint69.children[0] = HAnimJoint70;

HAnimJoint53.children[1] = HAnimJoint69;

let HAnimJoint93 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint93.name = "r_sternoclavicular";
HAnimJoint93.DEF = "Joe_r_sternoclavicular";
HAnimJoint93.center = new SFVec3f(new float[-0.03,1.46,0]);
HAnimJoint93.skinCoordIndex = new MFInt32(new int[10]);
HAnimJoint93.skinCoordWeight = new MFFloat(new float[1]);
HAnimJoint93.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint93.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint94 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint94.name = "r_acromioclavicular";
HAnimJoint94.DEF = "Joe_r_acromioclavicular";
HAnimJoint94.center = new SFVec3f(new float[-0.09,1.41,-0.11]);
HAnimJoint94.skinCoordIndex = new MFInt32(new int[77,29]);
HAnimJoint94.skinCoordWeight = new MFFloat(new float[1,0.9]);
HAnimJoint94.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint94.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint95 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint95.name = "r_shoulder";
HAnimJoint95.DEF = "Joe_r_shoulder";
HAnimJoint95.center = new SFVec3f(new float[-0.2,1.44,-0.04]);
HAnimJoint95.skinCoordIndex = new MFInt32(new int[29,30,32,78,218,219,220,221,86,88]);
HAnimJoint95.skinCoordWeight = new MFFloat(new float[0.1,1,1,1,1,1,1,1,0.3,0.2]);
HAnimJoint95.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint95.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint96 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint96.name = "r_elbow";
HAnimJoint96.DEF = "Joe_r_elbow";
HAnimJoint96.center = new SFVec3f(new float[-0.2,1.1388,-0.04]);
HAnimJoint96.skinCoordIndex = new MFInt32(new int[33,34,35,225,226,227,228,229,231,232,233,234]);
HAnimJoint96.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimJoint96.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint96.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint97 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint97.name = "r_wrist";
HAnimJoint97.DEF = "Joe_r_wrist";
HAnimJoint97.center = new SFVec3f(new float[-0.2,0.89,-0.04]);
HAnimJoint97.skinCoordIndex = new MFInt32(new int[235,236,237,238,239,240,241,242]);
HAnimJoint97.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint97.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint97.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint98 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint98.name = "r_thumb1";
HAnimJoint98.DEF = "Joe_r_thumb1";
HAnimJoint98.center = new SFVec3f(new float[-0.2,0.85,0]);
HAnimJoint98.skinCoordIndex = new MFInt32(new int[243,244]);
HAnimJoint98.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint98.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint98.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint99 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint99.name = "r_thumb2";
HAnimJoint99.DEF = "Joe_r_thumb2";
HAnimJoint99.center = new SFVec3f(new float[-0.2,0.82,0.03]);
HAnimJoint99.skinCoordIndex = new MFInt32(new int[254,255,256,257,258,259]);
HAnimJoint99.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,1,1,1]);
HAnimJoint99.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint99.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint100 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint100.name = "r_thumb3";
HAnimJoint100.DEF = "Joe_r_thumb3";
HAnimJoint100.center = new SFVec3f(new float[-0.2,0.8,0.05]);
HAnimJoint100.skinCoordIndex = new MFInt32(new int[260,261,262,263,264,265,266,267,268]);
HAnimJoint100.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint100.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint100.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint99.children = new MFNode();

HAnimJoint99.children[0] = HAnimJoint100;

HAnimJoint98.children = new MFNode();

HAnimJoint98.children[0] = HAnimJoint99;

HAnimJoint97.children = new MFNode();

HAnimJoint97.children[0] = HAnimJoint98;

let HAnimJoint101 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint101.name = "r_index0";
HAnimJoint101.DEF = "Joe_r_index0";
HAnimJoint101.center = new SFVec3f(new float[-0.2,0.84,-0.015]);
HAnimJoint101.skinCoordIndex = new MFInt32(new int[245,246]);
HAnimJoint101.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint101.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint101.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint102 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint102.name = "r_index1";
HAnimJoint102.DEF = "Joe_r_index1";
HAnimJoint102.center = new SFVec3f(new float[-0.2,0.793,-0.015]);
HAnimJoint102.skinCoordIndex = new MFInt32(new int[254,255,256,269,270,271,279]);
HAnimJoint102.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,1,1,1,0.5]);
HAnimJoint102.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint102.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint103 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint103.name = "r_index2";
HAnimJoint103.DEF = "Joe_r_index2";
HAnimJoint103.center = new SFVec3f(new float[-0.2,0.745,-0.015]);
HAnimJoint103.skinCoordIndex = new MFInt32(new int[282,283,284,285]);
HAnimJoint103.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint103.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint103.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint104 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint104.name = "r_index3";
HAnimJoint104.DEF = "Joe_r_index3";
HAnimJoint104.center = new SFVec3f(new float[-0.2,0.72,-0.015]);
HAnimJoint104.skinCoordIndex = new MFInt32(new int[286,287,288,289,290,291,292,293,294]);
HAnimJoint104.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint104.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint104.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint103.children = new MFNode();

HAnimJoint103.children[0] = HAnimJoint104;

HAnimJoint102.children = new MFNode();

HAnimJoint102.children[0] = HAnimJoint103;

HAnimJoint101.children = new MFNode();

HAnimJoint101.children[0] = HAnimJoint102;

HAnimJoint97.children[1] = HAnimJoint101;

let HAnimJoint105 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint105.name = "r_middle0";
HAnimJoint105.DEF = "Joe_r_middle0";
HAnimJoint105.center = new SFVec3f(new float[-0.2,0.835,-0.04]);
HAnimJoint105.skinCoordIndex = new MFInt32(new int[247,248]);
HAnimJoint105.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint105.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint105.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint106 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint106.name = "r_middle1";
HAnimJoint106.DEF = "Joe_r_middle1";
HAnimJoint106.center = new SFVec3f(new float[-0.2,0.788,-0.04]);
HAnimJoint106.skinCoordIndex = new MFInt32(new int[272,273,279,280]);
HAnimJoint106.skinCoordWeight = new MFFloat(new float[1,1,0.5,0.5]);
HAnimJoint106.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint106.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint107 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint107.name = "r_middle2";
HAnimJoint107.DEF = "Joe_r_middle2";
HAnimJoint107.center = new SFVec3f(new float[-0.2,0.74,-0.04]);
HAnimJoint107.skinCoordIndex = new MFInt32(new int[295,296,297,298]);
HAnimJoint107.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint107.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint107.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint108 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint108.name = "r_middle3";
HAnimJoint108.DEF = "Joe_r_middle3";
HAnimJoint108.center = new SFVec3f(new float[-0.2,0.7142,-0.04]);
HAnimJoint108.skinCoordIndex = new MFInt32(new int[299,300,301,302,303,304,305,306,307]);
HAnimJoint108.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint108.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint108.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint107.children = new MFNode();

HAnimJoint107.children[0] = HAnimJoint108;

HAnimJoint106.children = new MFNode();

HAnimJoint106.children[0] = HAnimJoint107;

HAnimJoint105.children = new MFNode();

HAnimJoint105.children[0] = HAnimJoint106;

HAnimJoint97.children[2] = HAnimJoint105;

let HAnimJoint109 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint109.name = "r_ring0";
HAnimJoint109.DEF = "Joe_r_ring0";
HAnimJoint109.center = new SFVec3f(new float[-0.2,0.835,-0.065]);
HAnimJoint109.skinCoordIndex = new MFInt32(new int[249,250]);
HAnimJoint109.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint109.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint109.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint110 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint110.name = "r_ring1";
HAnimJoint110.DEF = "Joe_r_ring1";
HAnimJoint110.center = new SFVec3f(new float[-0.2,0.793,-0.065]);
HAnimJoint110.skinCoordIndex = new MFInt32(new int[274,275,280,281]);
HAnimJoint110.skinCoordWeight = new MFFloat(new float[1,1,0.5,0.5]);
HAnimJoint110.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint110.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint111 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint111.name = "r_ring2";
HAnimJoint111.DEF = "Joe_r_ring2";
HAnimJoint111.center = new SFVec3f(new float[-0.2,0.74,-0.065]);
HAnimJoint111.skinCoordIndex = new MFInt32(new int[308,309,310,311]);
HAnimJoint111.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint111.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint111.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint112 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint112.name = "r_ring3";
HAnimJoint112.DEF = "Joe_r_ring3";
HAnimJoint112.center = new SFVec3f(new float[-0.2,0.7177,-0.065]);
HAnimJoint112.skinCoordIndex = new MFInt32(new int[312,313,314,315,316,317,318,319,320]);
HAnimJoint112.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint112.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint112.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint111.children = new MFNode();

HAnimJoint111.children[0] = HAnimJoint112;

HAnimJoint110.children = new MFNode();

HAnimJoint110.children[0] = HAnimJoint111;

HAnimJoint109.children = new MFNode();

HAnimJoint109.children[0] = HAnimJoint110;

HAnimJoint97.children[3] = HAnimJoint109;

let HAnimJoint113 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint113.name = "r_pinky0";
HAnimJoint113.DEF = "Joe_r_pinky0";
HAnimJoint113.center = new SFVec3f(new float[-0.2,0.84,-0.085]);
HAnimJoint113.skinCoordIndex = new MFInt32(new int[251,252,253,281]);
HAnimJoint113.skinCoordWeight = new MFFloat(new float[1,1,1,0.5]);
HAnimJoint113.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint113.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint114 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint114.name = "r_pinky1";
HAnimJoint114.DEF = "Joe_r_pinky1";
HAnimJoint114.center = new SFVec3f(new float[-0.2,0.79,-0.085]);
HAnimJoint114.skinCoordIndex = new MFInt32(new int[276,277,278]);
HAnimJoint114.skinCoordWeight = new MFFloat(new float[1,1,1]);
HAnimJoint114.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint114.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint115 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint115.name = "r_pinky2";
HAnimJoint115.DEF = "Joe_r_pinky2";
HAnimJoint115.center = new SFVec3f(new float[-0.2,0.755,-0.085]);
HAnimJoint115.skinCoordIndex = new MFInt32(new int[321,322,323,324]);
HAnimJoint115.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint115.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint115.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let HAnimJoint116 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint116.name = "r_pinky3";
HAnimJoint116.DEF = "Joe_r_pinky3";
HAnimJoint116.center = new SFVec3f(new float[-0.2,0.735,-0.09]);
HAnimJoint116.skinCoordIndex = new MFInt32(new int[325,326,327,328,329,330,331,332,333]);
HAnimJoint116.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint116.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint116.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint115.children = new MFNode();

HAnimJoint115.children[0] = HAnimJoint116;

HAnimJoint114.children = new MFNode();

HAnimJoint114.children[0] = HAnimJoint115;

HAnimJoint113.children = new MFNode();

HAnimJoint113.children[0] = HAnimJoint114;

HAnimJoint97.children[4] = HAnimJoint113;

HAnimJoint96.children = new MFNode();

HAnimJoint96.children[0] = HAnimJoint97;

HAnimJoint95.children = new MFNode();

HAnimJoint95.children[0] = HAnimJoint96;

HAnimJoint94.children = new MFNode();

HAnimJoint94.children[0] = HAnimJoint95;

HAnimJoint93.children = new MFNode();

HAnimJoint93.children[0] = HAnimJoint94;

HAnimJoint53.children[2] = HAnimJoint93;

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

HAnimJoint37.children = new MFNode();

HAnimJoint37.children[0] = HAnimJoint38;

HAnimJoint36.children = new MFNode();

HAnimJoint36.children[0] = HAnimJoint37;

HAnimJoint14.children[2] = HAnimJoint36;

HAnimHumanoid13.joints = new MFNode();

HAnimHumanoid13.joints[0] = HAnimJoint14;

let Shape117 = browser.currentScene.createNode("Shape");
Shape117.DEF = "Joe_Shape";
Shape117.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape117.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Appearance118 = browser.currentScene.createNode("Appearance");
Appearance118.DEF = "Joe_skin_Appearance";
let Material119 = browser.currentScene.createNode("Material");
Material119.DEF = "Joe_skin_Material";
Material119.diffuseColor = new SFColor(new float[0.3,0.3,0.6]);
Material119.emissiveColor = new SFColor(new float[0.3,0.3,0.6]);
Appearance118.material = Material119;

let ImageTexture120 = browser.currentScene.createNode("ImageTexture");
ImageTexture120.DEF = "JoeSkinImageTexture";
ImageTexture120.url = new MFString(new java.lang.String["JoeBodyTexture29.png","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/JoeBodyTexture29.png"]);
Appearance118.texture = ImageTexture120;

let TextureTransform121 = browser.currentScene.createNode("TextureTransform");
TextureTransform121.DEF = "kicktextrans";
Appearance118.textureTransform = TextureTransform121;

Shape117.appearance = Appearance118;

let IndexedFaceSet122 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet122.DEF = "Joe_skin_IndexedFaceSet";
IndexedFaceSet122.coordIndex = new MFInt32(new int[0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]);
IndexedFaceSet122.creaseAngle = 3.14;
let Coordinate123 = browser.currentScene.createNode("Coordinate");
Coordinate123.DEF = "Joe_SkinCoord";
Coordinate123.point = new MFVec3f(new float[0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.255,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168]);
IndexedFaceSet122.coord = Coordinate123;

let TextureCoordinate124 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate124.point = new MFVec2f(new float[0,0,0.5,0.5,0.5,0,0,0.5]);
IndexedFaceSet122.texCoord = TextureCoordinate124;

Shape117.geometry = IndexedFaceSet122;

HAnimHumanoid13.skin[1] = Shape117;

let Coordinate125 = browser.currentScene.createNode("Coordinate");
Coordinate125.USE = "Joe_SkinCoord";
HAnimHumanoid13.skinCoord = Coordinate125;

Group12.children = new MFNode();

Group12.children[0] = HAnimHumanoid13;

browser.currentScene.children[10] = Group12;

let Group126 = browser.currentScene.createNode("Group");
Group126.bboxCenter = new SFVec3f(new float[0,0,0]);
Group126.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let TimeSensor127 = browser.currentScene.createNode("TimeSensor");
TimeSensor127.DEF = "KickTimer";
TimeSensor127.cycleInterval = 3.73;
TimeSensor127.loop = True;
Group126.children = new MFNode();

Group126.children[0] = TimeSensor127;

//Interpolators
let OrientationInterpolator128 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator128.DEF = "HumanoidRootRotInterp";
OrientationInterpolator128.key = new MFFloat(new float[0,0.1,0.4,0.6,1]);
OrientationInterpolator128.keyValue = new MFRotation(new float[1,0,0,0.5,1,0,0,0.5,-1,0,0,0.1,-1,0,0,0.5,-1,0,0,0.5]);
Group126.children[1] = OrientationInterpolator128;

let PositionInterpolator129 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator129.DEF = "HumanoidRootTransInterp";
PositionInterpolator129.key = new MFFloat(new float[0,0.2,0.6,1]);
PositionInterpolator129.keyValue = new MFVec3f(new float[1,0.3,-1,0.4,-0.04,-0.4,-0.18,0.1,0,-0.2,0.15,0.15]);
Group126.children[2] = PositionInterpolator129;

let OrientationInterpolator130 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator130.DEF = "sacroiliacRotInterp";
OrientationInterpolator130.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator130.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[3] = OrientationInterpolator130;

let OrientationInterpolator131 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator131.DEF = "l_hipRotInterp";
OrientationInterpolator131.key = new MFFloat(new float[0,0.1,0.3,0.45,1]);
OrientationInterpolator131.keyValue = new MFRotation(new float[-1,0,0,1.5,-1,0,0,1,0,0,1,0,1,0,0,0.5,1,0,0,1]);
Group126.children[4] = OrientationInterpolator131;

let OrientationInterpolator132 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator132.DEF = "l_kneeRotInterp";
OrientationInterpolator132.key = new MFFloat(new float[0,0.2,0.35,0.5,1]);
OrientationInterpolator132.keyValue = new MFRotation(new float[1,0,0,1,0,0,1,0,0,0,1,0.2,1,0,1,0.5,1,0,0,1.4]);
Group126.children[5] = OrientationInterpolator132;

let OrientationInterpolator133 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator133.DEF = "l_ankleRotInterp";
OrientationInterpolator133.key = new MFFloat(new float[0,0.25,1]);
OrientationInterpolator133.keyValue = new MFRotation(new float[-1,0,0,1,0,0,1,0,1,0,0,1]);
Group126.children[6] = OrientationInterpolator133;

let OrientationInterpolator134 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator134.DEF = "l_subtalarRotInterp";
OrientationInterpolator134.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator134.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[7] = OrientationInterpolator134;

let OrientationInterpolator135 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator135.DEF = "l_midtarsalRotInterp";
OrientationInterpolator135.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator135.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[8] = OrientationInterpolator135;

let OrientationInterpolator136 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator136.DEF = "l_metatarsalRotInterp";
OrientationInterpolator136.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator136.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[9] = OrientationInterpolator136;

let OrientationInterpolator137 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator137.DEF = "r_hipRotInterp";
OrientationInterpolator137.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator137.keyValue = new MFRotation(new float[1,0,0,1,1,0,0,1,-1,0,0,1,-1,0,0,1,-1,0,0,1]);
Group126.children[10] = OrientationInterpolator137;

let OrientationInterpolator138 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator138.DEF = "r_kneeRotInterp";
OrientationInterpolator138.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator138.keyValue = new MFRotation(new float[1,0,0,0.1,0,0,1,0,1,0,0,1,1,0,0,1,1,0,0,1.5]);
Group126.children[11] = OrientationInterpolator138;

let OrientationInterpolator139 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator139.DEF = "r_ankleRotInterp";
OrientationInterpolator139.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator139.keyValue = new MFRotation(new float[-1,0,0,1,0,0,1,0,1,0,0,1,1,0,0,1,1,0,0,0.5]);
Group126.children[12] = OrientationInterpolator139;

let OrientationInterpolator140 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator140.DEF = "r_subtalarRotInterp";
OrientationInterpolator140.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator140.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[13] = OrientationInterpolator140;

let OrientationInterpolator141 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator141.DEF = "r_midtarsalRotInterp";
OrientationInterpolator141.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator141.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[14] = OrientationInterpolator141;

let OrientationInterpolator142 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator142.DEF = "r_metatarsalRotInterp";
OrientationInterpolator142.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator142.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[15] = OrientationInterpolator142;

let OrientationInterpolator143 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator143.DEF = "vl5RotInterp";
OrientationInterpolator143.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator143.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[16] = OrientationInterpolator143;

let OrientationInterpolator144 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator144.DEF = "vl4RotInterp";
OrientationInterpolator144.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator144.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[17] = OrientationInterpolator144;

let OrientationInterpolator145 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator145.DEF = "vl3RotInterp";
OrientationInterpolator145.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator145.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[18] = OrientationInterpolator145;

let OrientationInterpolator146 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator146.DEF = "vl2RotInterp";
OrientationInterpolator146.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator146.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[19] = OrientationInterpolator146;

let OrientationInterpolator147 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator147.DEF = "vl1RotInterp";
OrientationInterpolator147.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator147.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[20] = OrientationInterpolator147;

let OrientationInterpolator148 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator148.DEF = "vt12RotInterp";
OrientationInterpolator148.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator148.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[21] = OrientationInterpolator148;

let OrientationInterpolator149 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator149.DEF = "vt11RotInterp";
OrientationInterpolator149.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator149.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[22] = OrientationInterpolator149;

let OrientationInterpolator150 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator150.DEF = "vt10RotInterp";
OrientationInterpolator150.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator150.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[23] = OrientationInterpolator150;

let OrientationInterpolator151 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator151.DEF = "vt9RotInterp";
OrientationInterpolator151.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator151.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[24] = OrientationInterpolator151;

let OrientationInterpolator152 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator152.DEF = "vt8RotInterp";
OrientationInterpolator152.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator152.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[25] = OrientationInterpolator152;

let OrientationInterpolator153 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator153.DEF = "vt7RotInterp";
OrientationInterpolator153.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator153.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[26] = OrientationInterpolator153;

let OrientationInterpolator154 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator154.DEF = "vt6RotInterp";
OrientationInterpolator154.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator154.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[27] = OrientationInterpolator154;

let OrientationInterpolator155 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator155.DEF = "vt5RotInterp";
OrientationInterpolator155.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator155.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[28] = OrientationInterpolator155;

let OrientationInterpolator156 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator156.DEF = "vt4RotInterp";
OrientationInterpolator156.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator156.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[29] = OrientationInterpolator156;

let OrientationInterpolator157 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator157.DEF = "vt3RotInterp";
OrientationInterpolator157.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator157.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[30] = OrientationInterpolator157;

let OrientationInterpolator158 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator158.DEF = "vt2RotInterp";
OrientationInterpolator158.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator158.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[31] = OrientationInterpolator158;

let OrientationInterpolator159 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator159.DEF = "vt1RotInterp";
OrientationInterpolator159.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator159.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[32] = OrientationInterpolator159;

let OrientationInterpolator160 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator160.DEF = "vc7RotInterp";
OrientationInterpolator160.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator160.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[33] = OrientationInterpolator160;

let OrientationInterpolator161 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator161.DEF = "vc6RotInterp";
OrientationInterpolator161.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator161.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[34] = OrientationInterpolator161;

let OrientationInterpolator162 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator162.DEF = "vc5RotInterp";
OrientationInterpolator162.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator162.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[35] = OrientationInterpolator162;

let OrientationInterpolator163 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator163.DEF = "vc4RotInterp";
OrientationInterpolator163.key = new MFFloat(new float[0,0.3,0.4,1]);
OrientationInterpolator163.keyValue = new MFRotation(new float[1,0,1,0.25,-1,0,-1,0.35,1,0,0,0.75,1,0,1,0.5]);
Group126.children[36] = OrientationInterpolator163;

let OrientationInterpolator164 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator164.DEF = "vc3RotInterp";
OrientationInterpolator164.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator164.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[37] = OrientationInterpolator164;

let OrientationInterpolator165 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator165.DEF = "vc2RotInterp";
OrientationInterpolator165.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator165.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[38] = OrientationInterpolator165;

let OrientationInterpolator166 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator166.DEF = "vc1RotInterp";
OrientationInterpolator166.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator166.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[39] = OrientationInterpolator166;

let OrientationInterpolator167 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator167.DEF = "skullbaseRotInterp";
OrientationInterpolator167.key = new MFFloat(new float[0,0.2,0.75,1]);
OrientationInterpolator167.keyValue = new MFRotation(new float[0,-1,0,0.5,0,0,1,0,0,0,1,0,0,1,0,0.35]);
Group126.children[40] = OrientationInterpolator167;

let OrientationInterpolator168 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator168.DEF = "l_eyelid_jointRotInterp";
OrientationInterpolator168.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator168.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[41] = OrientationInterpolator168;

let OrientationInterpolator169 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator169.DEF = "l_eyeball_jointRotInterp";
OrientationInterpolator169.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator169.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[42] = OrientationInterpolator169;

let OrientationInterpolator170 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator170.DEF = "l_eyebrow_jointRotInterp";
OrientationInterpolator170.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator170.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[43] = OrientationInterpolator170;

let OrientationInterpolator171 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator171.DEF = "r_eyelid_jointRotInterp";
OrientationInterpolator171.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator171.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[44] = OrientationInterpolator171;

let OrientationInterpolator172 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator172.DEF = "r_eyeball_jointRotInterp";
OrientationInterpolator172.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator172.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[45] = OrientationInterpolator172;

let OrientationInterpolator173 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator173.DEF = "r_eyebrow_jointRotInterp";
OrientationInterpolator173.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator173.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[46] = OrientationInterpolator173;

let OrientationInterpolator174 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator174.DEF = "temporomandibularRotInterp";
OrientationInterpolator174.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator174.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[47] = OrientationInterpolator174;

let OrientationInterpolator175 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator175.DEF = "l_sternoclavicularRotInterp";
OrientationInterpolator175.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator175.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[48] = OrientationInterpolator175;

let OrientationInterpolator176 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator176.DEF = "l_acromioclavicularRotInterp";
OrientationInterpolator176.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator176.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[49] = OrientationInterpolator176;

let OrientationInterpolator177 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator177.DEF = "l_shoulderRotInterp";
OrientationInterpolator177.key = new MFFloat(new float[0,0.4,1]);
OrientationInterpolator177.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.5,-1,0,1,1.75]);
Group126.children[50] = OrientationInterpolator177;

let OrientationInterpolator178 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator178.DEF = "l_elbowRotInterp";
OrientationInterpolator178.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator178.keyValue = new MFRotation(new float[-1,0,0,3,-1,0,0,0.75,-1,-1,0,0.5]);
Group126.children[51] = OrientationInterpolator178;

let OrientationInterpolator179 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator179.DEF = "l_wristRotInterp";
OrientationInterpolator179.key = new MFFloat(new float[0,0.4,0.8,1]);
OrientationInterpolator179.keyValue = new MFRotation(new float[0,0,1,0,0,1,0,1.3,0,-0.5,1,1.3,0,0,1,0]);
Group126.children[52] = OrientationInterpolator179;

let OrientationInterpolator180 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator180.DEF = "l_thumb1RotInterp";
OrientationInterpolator180.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator180.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[53] = OrientationInterpolator180;

let OrientationInterpolator181 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator181.DEF = "l_thumb2RotInterp";
OrientationInterpolator181.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator181.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[54] = OrientationInterpolator181;

let OrientationInterpolator182 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator182.DEF = "l_thumb3RotInterp";
OrientationInterpolator182.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator182.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[55] = OrientationInterpolator182;

let OrientationInterpolator183 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator183.DEF = "l_index0RotInterp";
OrientationInterpolator183.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator183.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[56] = OrientationInterpolator183;

let OrientationInterpolator184 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator184.DEF = "l_index1RotInterp";
OrientationInterpolator184.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator184.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[57] = OrientationInterpolator184;

let OrientationInterpolator185 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator185.DEF = "l_index2RotInterp";
OrientationInterpolator185.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator185.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[58] = OrientationInterpolator185;

let OrientationInterpolator186 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator186.DEF = "l_index3RotInterp";
OrientationInterpolator186.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator186.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[59] = OrientationInterpolator186;

let OrientationInterpolator187 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator187.DEF = "l_middle0RotInterp";
OrientationInterpolator187.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator187.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[60] = OrientationInterpolator187;

let OrientationInterpolator188 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator188.DEF = "l_middle1RotInterp";
OrientationInterpolator188.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator188.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[61] = OrientationInterpolator188;

let OrientationInterpolator189 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator189.DEF = "l_middle2RotInterp";
OrientationInterpolator189.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator189.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[62] = OrientationInterpolator189;

let OrientationInterpolator190 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator190.DEF = "l_middle3RotInterp";
OrientationInterpolator190.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator190.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[63] = OrientationInterpolator190;

let OrientationInterpolator191 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator191.DEF = "l_ring0RotInterp";
OrientationInterpolator191.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator191.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[64] = OrientationInterpolator191;

let OrientationInterpolator192 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator192.DEF = "l_ring1RotInterp";
OrientationInterpolator192.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator192.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[65] = OrientationInterpolator192;

let OrientationInterpolator193 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator193.DEF = "l_ring2RotInterp";
OrientationInterpolator193.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator193.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[66] = OrientationInterpolator193;

let OrientationInterpolator194 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator194.DEF = "l_ring3RotInterp";
OrientationInterpolator194.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator194.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[67] = OrientationInterpolator194;

let OrientationInterpolator195 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator195.DEF = "l_pinky0RotInterp";
OrientationInterpolator195.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator195.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[68] = OrientationInterpolator195;

let OrientationInterpolator196 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator196.DEF = "l_pinky1RotInterp";
OrientationInterpolator196.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator196.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[69] = OrientationInterpolator196;

let OrientationInterpolator197 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator197.DEF = "l_pinky2RotInterp";
OrientationInterpolator197.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator197.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[70] = OrientationInterpolator197;

let OrientationInterpolator198 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator198.DEF = "l_pinky3RotInterp";
OrientationInterpolator198.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator198.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[71] = OrientationInterpolator198;

let OrientationInterpolator199 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator199.DEF = "r_sternoclavicularRotInterp";
OrientationInterpolator199.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator199.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[72] = OrientationInterpolator199;

let OrientationInterpolator200 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator200.DEF = "r_acromioclavicularRotInterp";
OrientationInterpolator200.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator200.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[73] = OrientationInterpolator200;

let OrientationInterpolator201 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator201.DEF = "r_shoulderRotInterp";
OrientationInterpolator201.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator201.keyValue = new MFRotation(new float[0,0,-1,2.5,0,0,-1,1.5,0,0,-1,1.75]);
Group126.children[74] = OrientationInterpolator201;

let OrientationInterpolator202 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator202.DEF = "r_elbowRotInterp";
OrientationInterpolator202.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator202.keyValue = new MFRotation(new float[-1,0,0,3,-1,0,0,0.75,-1,-1,0,0.5]);
Group126.children[75] = OrientationInterpolator202;

let OrientationInterpolator203 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator203.DEF = "r_wristRotInterp";
OrientationInterpolator203.key = new MFFloat(new float[0,0.5,0.7,1]);
OrientationInterpolator203.keyValue = new MFRotation(new float[0,1,0,0.3,0,0,1,0,0,0,-1,1,0,-1,0,0.3]);
Group126.children[76] = OrientationInterpolator203;

let OrientationInterpolator204 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator204.DEF = "r_thumb1RotInterp";
OrientationInterpolator204.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator204.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[77] = OrientationInterpolator204;

let OrientationInterpolator205 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator205.DEF = "r_thumb2RotInterp";
OrientationInterpolator205.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator205.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[78] = OrientationInterpolator205;

let OrientationInterpolator206 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator206.DEF = "r_thumb3RotInterp";
OrientationInterpolator206.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator206.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group126.children[79] = OrientationInterpolator206;

let OrientationInterpolator207 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator207.DEF = "r_index0RotInterp";
OrientationInterpolator207.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator207.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0]);
Group126.children[80] = OrientationInterpolator207;

let OrientationInterpolator208 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator208.DEF = "r_index1RotInterp";
OrientationInterpolator208.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator208.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group126.children[81] = OrientationInterpolator208;

let OrientationInterpolator209 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator209.DEF = "r_index2RotInterp";
OrientationInterpolator209.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator209.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group126.children[82] = OrientationInterpolator209;

let OrientationInterpolator210 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator210.DEF = "r_index3RotInterp";
OrientationInterpolator210.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator210.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group126.children[83] = OrientationInterpolator210;

let OrientationInterpolator211 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator211.DEF = "r_middle0RotInterp";
OrientationInterpolator211.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator211.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0]);
Group126.children[84] = OrientationInterpolator211;

let OrientationInterpolator212 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator212.DEF = "r_middle1RotInterp";
OrientationInterpolator212.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator212.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group126.children[85] = OrientationInterpolator212;

let OrientationInterpolator213 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator213.DEF = "r_middle2RotInterp";
OrientationInterpolator213.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator213.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group126.children[86] = OrientationInterpolator213;

let OrientationInterpolator214 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator214.DEF = "r_middle3RotInterp";
OrientationInterpolator214.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator214.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group126.children[87] = OrientationInterpolator214;

let OrientationInterpolator215 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator215.DEF = "r_ring0RotInterp";
OrientationInterpolator215.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator215.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0]);
Group126.children[88] = OrientationInterpolator215;

let OrientationInterpolator216 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator216.DEF = "r_ring1RotInterp";
OrientationInterpolator216.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator216.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group126.children[89] = OrientationInterpolator216;

let OrientationInterpolator217 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator217.DEF = "r_ring2RotInterp";
OrientationInterpolator217.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator217.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group126.children[90] = OrientationInterpolator217;

let OrientationInterpolator218 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator218.DEF = "r_ring3RotInterp";
OrientationInterpolator218.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator218.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group126.children[91] = OrientationInterpolator218;

let OrientationInterpolator219 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator219.DEF = "r_pinky0RotInterp";
OrientationInterpolator219.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator219.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0]);
Group126.children[92] = OrientationInterpolator219;

let OrientationInterpolator220 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator220.DEF = "r_pinky1RotInterp";
OrientationInterpolator220.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator220.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group126.children[93] = OrientationInterpolator220;

let OrientationInterpolator221 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator221.DEF = "r_pinky2RotInterp";
OrientationInterpolator221.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator221.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group126.children[94] = OrientationInterpolator221;

let OrientationInterpolator222 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator222.DEF = "r_pinky3RotInterp";
OrientationInterpolator222.key = new MFFloat(new float[0,0.5,0.75,1]);
OrientationInterpolator222.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group126.children[95] = OrientationInterpolator222;

browser.currentScene.children[11] = Group126;

//TimeSensor to Interpolators
let ROUTE223 = browser.currentScene.createNode("ROUTE");
ROUTE223.fromField = "fraction_changed";
ROUTE223.fromNode = "KickTimer";
ROUTE223.toField = "set_fraction";
ROUTE223.toNode = "HumanoidRootRotInterp";
browser.currentScene.children[12] = ROUTE223;

let ROUTE224 = browser.currentScene.createNode("ROUTE");
ROUTE224.fromField = "fraction_changed";
ROUTE224.fromNode = "KickTimer";
ROUTE224.toField = "set_fraction";
ROUTE224.toNode = "HumanoidRootTransInterp";
browser.currentScene.children[13] = ROUTE224;

let ROUTE225 = browser.currentScene.createNode("ROUTE");
ROUTE225.fromField = "fraction_changed";
ROUTE225.fromNode = "KickTimer";
ROUTE225.toField = "set_fraction";
ROUTE225.toNode = "sacroiliacRotInterp";
browser.currentScene.children[14] = ROUTE225;

let ROUTE226 = browser.currentScene.createNode("ROUTE");
ROUTE226.fromField = "fraction_changed";
ROUTE226.fromNode = "KickTimer";
ROUTE226.toField = "set_fraction";
ROUTE226.toNode = "l_hipRotInterp";
browser.currentScene.children[15] = ROUTE226;

let ROUTE227 = browser.currentScene.createNode("ROUTE");
ROUTE227.fromField = "fraction_changed";
ROUTE227.fromNode = "KickTimer";
ROUTE227.toField = "set_fraction";
ROUTE227.toNode = "l_kneeRotInterp";
browser.currentScene.children[16] = ROUTE227;

let ROUTE228 = browser.currentScene.createNode("ROUTE");
ROUTE228.fromField = "fraction_changed";
ROUTE228.fromNode = "KickTimer";
ROUTE228.toField = "set_fraction";
ROUTE228.toNode = "l_ankleRotInterp";
browser.currentScene.children[17] = ROUTE228;

let ROUTE229 = browser.currentScene.createNode("ROUTE");
ROUTE229.fromField = "fraction_changed";
ROUTE229.fromNode = "KickTimer";
ROUTE229.toField = "set_fraction";
ROUTE229.toNode = "l_subtalarRotInterp";
browser.currentScene.children[18] = ROUTE229;

let ROUTE230 = browser.currentScene.createNode("ROUTE");
ROUTE230.fromField = "fraction_changed";
ROUTE230.fromNode = "KickTimer";
ROUTE230.toField = "set_fraction";
ROUTE230.toNode = "l_midtarsalRotInterp";
browser.currentScene.children[19] = ROUTE230;

let ROUTE231 = browser.currentScene.createNode("ROUTE");
ROUTE231.fromField = "fraction_changed";
ROUTE231.fromNode = "KickTimer";
ROUTE231.toField = "set_fraction";
ROUTE231.toNode = "l_metatarsalRotInterp";
browser.currentScene.children[20] = ROUTE231;

let ROUTE232 = browser.currentScene.createNode("ROUTE");
ROUTE232.fromField = "fraction_changed";
ROUTE232.fromNode = "KickTimer";
ROUTE232.toField = "set_fraction";
ROUTE232.toNode = "r_hipRotInterp";
browser.currentScene.children[21] = ROUTE232;

let ROUTE233 = browser.currentScene.createNode("ROUTE");
ROUTE233.fromField = "fraction_changed";
ROUTE233.fromNode = "KickTimer";
ROUTE233.toField = "set_fraction";
ROUTE233.toNode = "r_kneeRotInterp";
browser.currentScene.children[22] = ROUTE233;

let ROUTE234 = browser.currentScene.createNode("ROUTE");
ROUTE234.fromField = "fraction_changed";
ROUTE234.fromNode = "KickTimer";
ROUTE234.toField = "set_fraction";
ROUTE234.toNode = "r_ankleRotInterp";
browser.currentScene.children[23] = ROUTE234;

let ROUTE235 = browser.currentScene.createNode("ROUTE");
ROUTE235.fromField = "fraction_changed";
ROUTE235.fromNode = "KickTimer";
ROUTE235.toField = "set_fraction";
ROUTE235.toNode = "r_subtalarRotInterp";
browser.currentScene.children[24] = ROUTE235;

let ROUTE236 = browser.currentScene.createNode("ROUTE");
ROUTE236.fromField = "fraction_changed";
ROUTE236.fromNode = "KickTimer";
ROUTE236.toField = "set_fraction";
ROUTE236.toNode = "r_midtarsalRotInterp";
browser.currentScene.children[25] = ROUTE236;

let ROUTE237 = browser.currentScene.createNode("ROUTE");
ROUTE237.fromField = "fraction_changed";
ROUTE237.fromNode = "KickTimer";
ROUTE237.toField = "set_fraction";
ROUTE237.toNode = "r_metatarsalRotInterp";
browser.currentScene.children[26] = ROUTE237;

let ROUTE238 = browser.currentScene.createNode("ROUTE");
ROUTE238.fromField = "fraction_changed";
ROUTE238.fromNode = "KickTimer";
ROUTE238.toField = "set_fraction";
ROUTE238.toNode = "vl5RotInterp";
browser.currentScene.children[27] = ROUTE238;

let ROUTE239 = browser.currentScene.createNode("ROUTE");
ROUTE239.fromField = "fraction_changed";
ROUTE239.fromNode = "KickTimer";
ROUTE239.toField = "set_fraction";
ROUTE239.toNode = "vl4RotInterp";
browser.currentScene.children[28] = ROUTE239;

let ROUTE240 = browser.currentScene.createNode("ROUTE");
ROUTE240.fromField = "fraction_changed";
ROUTE240.fromNode = "KickTimer";
ROUTE240.toField = "set_fraction";
ROUTE240.toNode = "vl3RotInterp";
browser.currentScene.children[29] = ROUTE240;

let ROUTE241 = browser.currentScene.createNode("ROUTE");
ROUTE241.fromField = "fraction_changed";
ROUTE241.fromNode = "KickTimer";
ROUTE241.toField = "set_fraction";
ROUTE241.toNode = "vl2RotInterp";
browser.currentScene.children[30] = ROUTE241;

let ROUTE242 = browser.currentScene.createNode("ROUTE");
ROUTE242.fromField = "fraction_changed";
ROUTE242.fromNode = "KickTimer";
ROUTE242.toField = "set_fraction";
ROUTE242.toNode = "vl1RotInterp";
browser.currentScene.children[31] = ROUTE242;

let ROUTE243 = browser.currentScene.createNode("ROUTE");
ROUTE243.fromField = "fraction_changed";
ROUTE243.fromNode = "KickTimer";
ROUTE243.toField = "set_fraction";
ROUTE243.toNode = "vt12RotInterp";
browser.currentScene.children[32] = ROUTE243;

let ROUTE244 = browser.currentScene.createNode("ROUTE");
ROUTE244.fromField = "fraction_changed";
ROUTE244.fromNode = "KickTimer";
ROUTE244.toField = "set_fraction";
ROUTE244.toNode = "vt11RotInterp";
browser.currentScene.children[33] = ROUTE244;

let ROUTE245 = browser.currentScene.createNode("ROUTE");
ROUTE245.fromField = "fraction_changed";
ROUTE245.fromNode = "KickTimer";
ROUTE245.toField = "set_fraction";
ROUTE245.toNode = "vt10RotInterp";
browser.currentScene.children[34] = ROUTE245;

let ROUTE246 = browser.currentScene.createNode("ROUTE");
ROUTE246.fromField = "fraction_changed";
ROUTE246.fromNode = "KickTimer";
ROUTE246.toField = "set_fraction";
ROUTE246.toNode = "vt9RotInterp";
browser.currentScene.children[35] = ROUTE246;

let ROUTE247 = browser.currentScene.createNode("ROUTE");
ROUTE247.fromField = "fraction_changed";
ROUTE247.fromNode = "KickTimer";
ROUTE247.toField = "set_fraction";
ROUTE247.toNode = "vt8RotInterp";
browser.currentScene.children[36] = ROUTE247;

let ROUTE248 = browser.currentScene.createNode("ROUTE");
ROUTE248.fromField = "fraction_changed";
ROUTE248.fromNode = "KickTimer";
ROUTE248.toField = "set_fraction";
ROUTE248.toNode = "vt7RotInterp";
browser.currentScene.children[37] = ROUTE248;

let ROUTE249 = browser.currentScene.createNode("ROUTE");
ROUTE249.fromField = "fraction_changed";
ROUTE249.fromNode = "KickTimer";
ROUTE249.toField = "set_fraction";
ROUTE249.toNode = "vt6RotInterp";
browser.currentScene.children[38] = ROUTE249;

let ROUTE250 = browser.currentScene.createNode("ROUTE");
ROUTE250.fromField = "fraction_changed";
ROUTE250.fromNode = "KickTimer";
ROUTE250.toField = "set_fraction";
ROUTE250.toNode = "vt5RotInterp";
browser.currentScene.children[39] = ROUTE250;

let ROUTE251 = browser.currentScene.createNode("ROUTE");
ROUTE251.fromField = "fraction_changed";
ROUTE251.fromNode = "KickTimer";
ROUTE251.toField = "set_fraction";
ROUTE251.toNode = "vt4RotInterp";
browser.currentScene.children[40] = ROUTE251;

let ROUTE252 = browser.currentScene.createNode("ROUTE");
ROUTE252.fromField = "fraction_changed";
ROUTE252.fromNode = "KickTimer";
ROUTE252.toField = "set_fraction";
ROUTE252.toNode = "vt3RotInterp";
browser.currentScene.children[41] = ROUTE252;

let ROUTE253 = browser.currentScene.createNode("ROUTE");
ROUTE253.fromField = "fraction_changed";
ROUTE253.fromNode = "KickTimer";
ROUTE253.toField = "set_fraction";
ROUTE253.toNode = "vt2RotInterp";
browser.currentScene.children[42] = ROUTE253;

let ROUTE254 = browser.currentScene.createNode("ROUTE");
ROUTE254.fromField = "fraction_changed";
ROUTE254.fromNode = "KickTimer";
ROUTE254.toField = "set_fraction";
ROUTE254.toNode = "vt1RotInterp";
browser.currentScene.children[43] = ROUTE254;

let ROUTE255 = browser.currentScene.createNode("ROUTE");
ROUTE255.fromField = "fraction_changed";
ROUTE255.fromNode = "KickTimer";
ROUTE255.toField = "set_fraction";
ROUTE255.toNode = "vc7RotInterp";
browser.currentScene.children[44] = ROUTE255;

let ROUTE256 = browser.currentScene.createNode("ROUTE");
ROUTE256.fromField = "fraction_changed";
ROUTE256.fromNode = "KickTimer";
ROUTE256.toField = "set_fraction";
ROUTE256.toNode = "vc6RotInterp";
browser.currentScene.children[45] = ROUTE256;

let ROUTE257 = browser.currentScene.createNode("ROUTE");
ROUTE257.fromField = "fraction_changed";
ROUTE257.fromNode = "KickTimer";
ROUTE257.toField = "set_fraction";
ROUTE257.toNode = "vc5RotInterp";
browser.currentScene.children[46] = ROUTE257;

let ROUTE258 = browser.currentScene.createNode("ROUTE");
ROUTE258.fromField = "fraction_changed";
ROUTE258.fromNode = "KickTimer";
ROUTE258.toField = "set_fraction";
ROUTE258.toNode = "vc4RotInterp";
browser.currentScene.children[47] = ROUTE258;

let ROUTE259 = browser.currentScene.createNode("ROUTE");
ROUTE259.fromField = "fraction_changed";
ROUTE259.fromNode = "KickTimer";
ROUTE259.toField = "set_fraction";
ROUTE259.toNode = "vc3RotInterp";
browser.currentScene.children[48] = ROUTE259;

let ROUTE260 = browser.currentScene.createNode("ROUTE");
ROUTE260.fromField = "fraction_changed";
ROUTE260.fromNode = "KickTimer";
ROUTE260.toField = "set_fraction";
ROUTE260.toNode = "vc2RotInterp";
browser.currentScene.children[49] = ROUTE260;

let ROUTE261 = browser.currentScene.createNode("ROUTE");
ROUTE261.fromField = "fraction_changed";
ROUTE261.fromNode = "KickTimer";
ROUTE261.toField = "set_fraction";
ROUTE261.toNode = "vc1RotInterp";
browser.currentScene.children[50] = ROUTE261;

let ROUTE262 = browser.currentScene.createNode("ROUTE");
ROUTE262.fromField = "fraction_changed";
ROUTE262.fromNode = "KickTimer";
ROUTE262.toField = "set_fraction";
ROUTE262.toNode = "skullbaseRotInterp";
browser.currentScene.children[51] = ROUTE262;

let ROUTE263 = browser.currentScene.createNode("ROUTE");
ROUTE263.fromField = "fraction_changed";
ROUTE263.fromNode = "KickTimer";
ROUTE263.toField = "set_fraction";
ROUTE263.toNode = "l_eyelid_jointRotInterp";
browser.currentScene.children[52] = ROUTE263;

let ROUTE264 = browser.currentScene.createNode("ROUTE");
ROUTE264.fromField = "fraction_changed";
ROUTE264.fromNode = "KickTimer";
ROUTE264.toField = "set_fraction";
ROUTE264.toNode = "l_eyeball_jointRotInterp";
browser.currentScene.children[53] = ROUTE264;

let ROUTE265 = browser.currentScene.createNode("ROUTE");
ROUTE265.fromField = "fraction_changed";
ROUTE265.fromNode = "KickTimer";
ROUTE265.toField = "set_fraction";
ROUTE265.toNode = "l_eyebrow_jointRotInterp";
browser.currentScene.children[54] = ROUTE265;

let ROUTE266 = browser.currentScene.createNode("ROUTE");
ROUTE266.fromField = "fraction_changed";
ROUTE266.fromNode = "KickTimer";
ROUTE266.toField = "set_fraction";
ROUTE266.toNode = "r_eyelid_jointRotInterp";
browser.currentScene.children[55] = ROUTE266;

let ROUTE267 = browser.currentScene.createNode("ROUTE");
ROUTE267.fromField = "fraction_changed";
ROUTE267.fromNode = "KickTimer";
ROUTE267.toField = "set_fraction";
ROUTE267.toNode = "r_eyeball_jointRotInterp";
browser.currentScene.children[56] = ROUTE267;

let ROUTE268 = browser.currentScene.createNode("ROUTE");
ROUTE268.fromField = "fraction_changed";
ROUTE268.fromNode = "KickTimer";
ROUTE268.toField = "set_fraction";
ROUTE268.toNode = "r_eyebrow_jointRotInterp";
browser.currentScene.children[57] = ROUTE268;

let ROUTE269 = browser.currentScene.createNode("ROUTE");
ROUTE269.fromField = "fraction_changed";
ROUTE269.fromNode = "KickTimer";
ROUTE269.toField = "set_fraction";
ROUTE269.toNode = "temporomandibularRotInterp";
browser.currentScene.children[58] = ROUTE269;

let ROUTE270 = browser.currentScene.createNode("ROUTE");
ROUTE270.fromField = "fraction_changed";
ROUTE270.fromNode = "KickTimer";
ROUTE270.toField = "set_fraction";
ROUTE270.toNode = "l_sternoclavicularRotInterp";
browser.currentScene.children[59] = ROUTE270;

let ROUTE271 = browser.currentScene.createNode("ROUTE");
ROUTE271.fromField = "fraction_changed";
ROUTE271.fromNode = "KickTimer";
ROUTE271.toField = "set_fraction";
ROUTE271.toNode = "l_acromioclavicularRotInterp";
browser.currentScene.children[60] = ROUTE271;

let ROUTE272 = browser.currentScene.createNode("ROUTE");
ROUTE272.fromField = "fraction_changed";
ROUTE272.fromNode = "KickTimer";
ROUTE272.toField = "set_fraction";
ROUTE272.toNode = "l_shoulderRotInterp";
browser.currentScene.children[61] = ROUTE272;

let ROUTE273 = browser.currentScene.createNode("ROUTE");
ROUTE273.fromField = "fraction_changed";
ROUTE273.fromNode = "KickTimer";
ROUTE273.toField = "set_fraction";
ROUTE273.toNode = "l_elbowRotInterp";
browser.currentScene.children[62] = ROUTE273;

let ROUTE274 = browser.currentScene.createNode("ROUTE");
ROUTE274.fromField = "fraction_changed";
ROUTE274.fromNode = "KickTimer";
ROUTE274.toField = "set_fraction";
ROUTE274.toNode = "l_wristRotInterp";
browser.currentScene.children[63] = ROUTE274;

let ROUTE275 = browser.currentScene.createNode("ROUTE");
ROUTE275.fromField = "fraction_changed";
ROUTE275.fromNode = "KickTimer";
ROUTE275.toField = "set_fraction";
ROUTE275.toNode = "l_thumb1RotInterp";
browser.currentScene.children[64] = ROUTE275;

let ROUTE276 = browser.currentScene.createNode("ROUTE");
ROUTE276.fromField = "fraction_changed";
ROUTE276.fromNode = "KickTimer";
ROUTE276.toField = "set_fraction";
ROUTE276.toNode = "l_thumb2RotInterp";
browser.currentScene.children[65] = ROUTE276;

let ROUTE277 = browser.currentScene.createNode("ROUTE");
ROUTE277.fromField = "fraction_changed";
ROUTE277.fromNode = "KickTimer";
ROUTE277.toField = "set_fraction";
ROUTE277.toNode = "l_thumb3RotInterp";
browser.currentScene.children[66] = ROUTE277;

let ROUTE278 = browser.currentScene.createNode("ROUTE");
ROUTE278.fromField = "fraction_changed";
ROUTE278.fromNode = "KickTimer";
ROUTE278.toField = "set_fraction";
ROUTE278.toNode = "l_index0RotInterp";
browser.currentScene.children[67] = ROUTE278;

let ROUTE279 = browser.currentScene.createNode("ROUTE");
ROUTE279.fromField = "fraction_changed";
ROUTE279.fromNode = "KickTimer";
ROUTE279.toField = "set_fraction";
ROUTE279.toNode = "l_index1RotInterp";
browser.currentScene.children[68] = ROUTE279;

let ROUTE280 = browser.currentScene.createNode("ROUTE");
ROUTE280.fromField = "fraction_changed";
ROUTE280.fromNode = "KickTimer";
ROUTE280.toField = "set_fraction";
ROUTE280.toNode = "l_index2RotInterp";
browser.currentScene.children[69] = ROUTE280;

let ROUTE281 = browser.currentScene.createNode("ROUTE");
ROUTE281.fromField = "fraction_changed";
ROUTE281.fromNode = "KickTimer";
ROUTE281.toField = "set_fraction";
ROUTE281.toNode = "l_index3RotInterp";
browser.currentScene.children[70] = ROUTE281;

let ROUTE282 = browser.currentScene.createNode("ROUTE");
ROUTE282.fromField = "fraction_changed";
ROUTE282.fromNode = "KickTimer";
ROUTE282.toField = "set_fraction";
ROUTE282.toNode = "l_middle0RotInterp";
browser.currentScene.children[71] = ROUTE282;

let ROUTE283 = browser.currentScene.createNode("ROUTE");
ROUTE283.fromField = "fraction_changed";
ROUTE283.fromNode = "KickTimer";
ROUTE283.toField = "set_fraction";
ROUTE283.toNode = "l_middle1RotInterp";
browser.currentScene.children[72] = ROUTE283;

let ROUTE284 = browser.currentScene.createNode("ROUTE");
ROUTE284.fromField = "fraction_changed";
ROUTE284.fromNode = "KickTimer";
ROUTE284.toField = "set_fraction";
ROUTE284.toNode = "l_middle2RotInterp";
browser.currentScene.children[73] = ROUTE284;

let ROUTE285 = browser.currentScene.createNode("ROUTE");
ROUTE285.fromField = "fraction_changed";
ROUTE285.fromNode = "KickTimer";
ROUTE285.toField = "set_fraction";
ROUTE285.toNode = "l_middle3RotInterp";
browser.currentScene.children[74] = ROUTE285;

let ROUTE286 = browser.currentScene.createNode("ROUTE");
ROUTE286.fromField = "fraction_changed";
ROUTE286.fromNode = "KickTimer";
ROUTE286.toField = "set_fraction";
ROUTE286.toNode = "l_ring0RotInterp";
browser.currentScene.children[75] = ROUTE286;

let ROUTE287 = browser.currentScene.createNode("ROUTE");
ROUTE287.fromField = "fraction_changed";
ROUTE287.fromNode = "KickTimer";
ROUTE287.toField = "set_fraction";
ROUTE287.toNode = "l_ring1RotInterp";
browser.currentScene.children[76] = ROUTE287;

let ROUTE288 = browser.currentScene.createNode("ROUTE");
ROUTE288.fromField = "fraction_changed";
ROUTE288.fromNode = "KickTimer";
ROUTE288.toField = "set_fraction";
ROUTE288.toNode = "l_ring2RotInterp";
browser.currentScene.children[77] = ROUTE288;

let ROUTE289 = browser.currentScene.createNode("ROUTE");
ROUTE289.fromField = "fraction_changed";
ROUTE289.fromNode = "KickTimer";
ROUTE289.toField = "set_fraction";
ROUTE289.toNode = "l_ring3RotInterp";
browser.currentScene.children[78] = ROUTE289;

let ROUTE290 = browser.currentScene.createNode("ROUTE");
ROUTE290.fromField = "fraction_changed";
ROUTE290.fromNode = "KickTimer";
ROUTE290.toField = "set_fraction";
ROUTE290.toNode = "l_pinky0RotInterp";
browser.currentScene.children[79] = ROUTE290;

let ROUTE291 = browser.currentScene.createNode("ROUTE");
ROUTE291.fromField = "fraction_changed";
ROUTE291.fromNode = "KickTimer";
ROUTE291.toField = "set_fraction";
ROUTE291.toNode = "l_pinky1RotInterp";
browser.currentScene.children[80] = ROUTE291;

let ROUTE292 = browser.currentScene.createNode("ROUTE");
ROUTE292.fromField = "fraction_changed";
ROUTE292.fromNode = "KickTimer";
ROUTE292.toField = "set_fraction";
ROUTE292.toNode = "l_pinky2RotInterp";
browser.currentScene.children[81] = ROUTE292;

let ROUTE293 = browser.currentScene.createNode("ROUTE");
ROUTE293.fromField = "fraction_changed";
ROUTE293.fromNode = "KickTimer";
ROUTE293.toField = "set_fraction";
ROUTE293.toNode = "l_pinky3RotInterp";
browser.currentScene.children[82] = ROUTE293;

let ROUTE294 = browser.currentScene.createNode("ROUTE");
ROUTE294.fromField = "fraction_changed";
ROUTE294.fromNode = "KickTimer";
ROUTE294.toField = "set_fraction";
ROUTE294.toNode = "r_sternoclavicularRotInterp";
browser.currentScene.children[83] = ROUTE294;

let ROUTE295 = browser.currentScene.createNode("ROUTE");
ROUTE295.fromField = "fraction_changed";
ROUTE295.fromNode = "KickTimer";
ROUTE295.toField = "set_fraction";
ROUTE295.toNode = "r_acromioclavicularRotInterp";
browser.currentScene.children[84] = ROUTE295;

let ROUTE296 = browser.currentScene.createNode("ROUTE");
ROUTE296.fromField = "fraction_changed";
ROUTE296.fromNode = "KickTimer";
ROUTE296.toField = "set_fraction";
ROUTE296.toNode = "r_shoulderRotInterp";
browser.currentScene.children[85] = ROUTE296;

let ROUTE297 = browser.currentScene.createNode("ROUTE");
ROUTE297.fromField = "fraction_changed";
ROUTE297.fromNode = "KickTimer";
ROUTE297.toField = "set_fraction";
ROUTE297.toNode = "r_elbowRotInterp";
browser.currentScene.children[86] = ROUTE297;

let ROUTE298 = browser.currentScene.createNode("ROUTE");
ROUTE298.fromField = "fraction_changed";
ROUTE298.fromNode = "KickTimer";
ROUTE298.toField = "set_fraction";
ROUTE298.toNode = "r_wristRotInterp";
browser.currentScene.children[87] = ROUTE298;

let ROUTE299 = browser.currentScene.createNode("ROUTE");
ROUTE299.fromField = "fraction_changed";
ROUTE299.fromNode = "KickTimer";
ROUTE299.toField = "set_fraction";
ROUTE299.toNode = "r_thumb1RotInterp";
browser.currentScene.children[88] = ROUTE299;

let ROUTE300 = browser.currentScene.createNode("ROUTE");
ROUTE300.fromField = "fraction_changed";
ROUTE300.fromNode = "KickTimer";
ROUTE300.toField = "set_fraction";
ROUTE300.toNode = "r_thumb2RotInterp";
browser.currentScene.children[89] = ROUTE300;

let ROUTE301 = browser.currentScene.createNode("ROUTE");
ROUTE301.fromField = "fraction_changed";
ROUTE301.fromNode = "KickTimer";
ROUTE301.toField = "set_fraction";
ROUTE301.toNode = "r_thumb3RotInterp";
browser.currentScene.children[90] = ROUTE301;

let ROUTE302 = browser.currentScene.createNode("ROUTE");
ROUTE302.fromField = "fraction_changed";
ROUTE302.fromNode = "KickTimer";
ROUTE302.toField = "set_fraction";
ROUTE302.toNode = "r_index0RotInterp";
browser.currentScene.children[91] = ROUTE302;

let ROUTE303 = browser.currentScene.createNode("ROUTE");
ROUTE303.fromField = "fraction_changed";
ROUTE303.fromNode = "KickTimer";
ROUTE303.toField = "set_fraction";
ROUTE303.toNode = "r_index1RotInterp";
browser.currentScene.children[92] = ROUTE303;

let ROUTE304 = browser.currentScene.createNode("ROUTE");
ROUTE304.fromField = "fraction_changed";
ROUTE304.fromNode = "KickTimer";
ROUTE304.toField = "set_fraction";
ROUTE304.toNode = "r_index2RotInterp";
browser.currentScene.children[93] = ROUTE304;

let ROUTE305 = browser.currentScene.createNode("ROUTE");
ROUTE305.fromField = "fraction_changed";
ROUTE305.fromNode = "KickTimer";
ROUTE305.toField = "set_fraction";
ROUTE305.toNode = "r_index3RotInterp";
browser.currentScene.children[94] = ROUTE305;

let ROUTE306 = browser.currentScene.createNode("ROUTE");
ROUTE306.fromField = "fraction_changed";
ROUTE306.fromNode = "KickTimer";
ROUTE306.toField = "set_fraction";
ROUTE306.toNode = "r_middle0RotInterp";
browser.currentScene.children[95] = ROUTE306;

let ROUTE307 = browser.currentScene.createNode("ROUTE");
ROUTE307.fromField = "fraction_changed";
ROUTE307.fromNode = "KickTimer";
ROUTE307.toField = "set_fraction";
ROUTE307.toNode = "r_middle1RotInterp";
browser.currentScene.children[96] = ROUTE307;

let ROUTE308 = browser.currentScene.createNode("ROUTE");
ROUTE308.fromField = "fraction_changed";
ROUTE308.fromNode = "KickTimer";
ROUTE308.toField = "set_fraction";
ROUTE308.toNode = "r_middle2RotInterp";
browser.currentScene.children[97] = ROUTE308;

let ROUTE309 = browser.currentScene.createNode("ROUTE");
ROUTE309.fromField = "fraction_changed";
ROUTE309.fromNode = "KickTimer";
ROUTE309.toField = "set_fraction";
ROUTE309.toNode = "r_middle3RotInterp";
browser.currentScene.children[98] = ROUTE309;

let ROUTE310 = browser.currentScene.createNode("ROUTE");
ROUTE310.fromField = "fraction_changed";
ROUTE310.fromNode = "KickTimer";
ROUTE310.toField = "set_fraction";
ROUTE310.toNode = "r_ring0RotInterp";
browser.currentScene.children[99] = ROUTE310;

let ROUTE311 = browser.currentScene.createNode("ROUTE");
ROUTE311.fromField = "fraction_changed";
ROUTE311.fromNode = "KickTimer";
ROUTE311.toField = "set_fraction";
ROUTE311.toNode = "r_ring1RotInterp";
browser.currentScene.children[100] = ROUTE311;

let ROUTE312 = browser.currentScene.createNode("ROUTE");
ROUTE312.fromField = "fraction_changed";
ROUTE312.fromNode = "KickTimer";
ROUTE312.toField = "set_fraction";
ROUTE312.toNode = "r_ring2RotInterp";
browser.currentScene.children[101] = ROUTE312;

let ROUTE313 = browser.currentScene.createNode("ROUTE");
ROUTE313.fromField = "fraction_changed";
ROUTE313.fromNode = "KickTimer";
ROUTE313.toField = "set_fraction";
ROUTE313.toNode = "r_ring3RotInterp";
browser.currentScene.children[102] = ROUTE313;

let ROUTE314 = browser.currentScene.createNode("ROUTE");
ROUTE314.fromField = "fraction_changed";
ROUTE314.fromNode = "KickTimer";
ROUTE314.toField = "set_fraction";
ROUTE314.toNode = "r_pinky0RotInterp";
browser.currentScene.children[103] = ROUTE314;

let ROUTE315 = browser.currentScene.createNode("ROUTE");
ROUTE315.fromField = "fraction_changed";
ROUTE315.fromNode = "KickTimer";
ROUTE315.toField = "set_fraction";
ROUTE315.toNode = "r_pinky1RotInterp";
browser.currentScene.children[104] = ROUTE315;

let ROUTE316 = browser.currentScene.createNode("ROUTE");
ROUTE316.fromField = "fraction_changed";
ROUTE316.fromNode = "KickTimer";
ROUTE316.toField = "set_fraction";
ROUTE316.toNode = "r_pinky2RotInterp";
browser.currentScene.children[105] = ROUTE316;

let ROUTE317 = browser.currentScene.createNode("ROUTE");
ROUTE317.fromField = "fraction_changed";
ROUTE317.fromNode = "KickTimer";
ROUTE317.toField = "set_fraction";
ROUTE317.toNode = "r_pinky3RotInterp";
browser.currentScene.children[106] = ROUTE317;

//Routes from Interpolators to Joe_ model Joints
let ROUTE318 = browser.currentScene.createNode("ROUTE");
ROUTE318.fromField = "value_changed";
ROUTE318.fromNode = "HumanoidRootRotInterp";
ROUTE318.toField = "set_rotation";
ROUTE318.toNode = "Joe_HumanoidRoot";
browser.currentScene.children[107] = ROUTE318;

let ROUTE319 = browser.currentScene.createNode("ROUTE");
ROUTE319.fromField = "value_changed";
ROUTE319.fromNode = "HumanoidRootTransInterp";
ROUTE319.toField = "set_translation";
ROUTE319.toNode = "Joe_HumanoidRoot";
browser.currentScene.children[108] = ROUTE319;

let ROUTE320 = browser.currentScene.createNode("ROUTE");
ROUTE320.fromField = "value_changed";
ROUTE320.fromNode = "sacroiliacRotInterp";
ROUTE320.toField = "set_rotation";
ROUTE320.toNode = "Joe_sacroiliac";
browser.currentScene.children[109] = ROUTE320;

let ROUTE321 = browser.currentScene.createNode("ROUTE");
ROUTE321.fromField = "value_changed";
ROUTE321.fromNode = "l_hipRotInterp";
ROUTE321.toField = "set_rotation";
ROUTE321.toNode = "Joe_l_hip";
browser.currentScene.children[110] = ROUTE321;

let ROUTE322 = browser.currentScene.createNode("ROUTE");
ROUTE322.fromField = "value_changed";
ROUTE322.fromNode = "l_kneeRotInterp";
ROUTE322.toField = "set_rotation";
ROUTE322.toNode = "Joe_l_knee";
browser.currentScene.children[111] = ROUTE322;

let ROUTE323 = browser.currentScene.createNode("ROUTE");
ROUTE323.fromField = "value_changed";
ROUTE323.fromNode = "l_ankleRotInterp";
ROUTE323.toField = "set_rotation";
ROUTE323.toNode = "Joe_l_ankle";
browser.currentScene.children[112] = ROUTE323;

let ROUTE324 = browser.currentScene.createNode("ROUTE");
ROUTE324.fromField = "value_changed";
ROUTE324.fromNode = "l_subtalarRotInterp";
ROUTE324.toField = "set_rotation";
ROUTE324.toNode = "Joe_l_subtalar";
browser.currentScene.children[113] = ROUTE324;

let ROUTE325 = browser.currentScene.createNode("ROUTE");
ROUTE325.fromField = "value_changed";
ROUTE325.fromNode = "l_midtarsalRotInterp";
ROUTE325.toField = "set_rotation";
ROUTE325.toNode = "Joe_l_midtarsal";
browser.currentScene.children[114] = ROUTE325;

let ROUTE326 = browser.currentScene.createNode("ROUTE");
ROUTE326.fromField = "value_changed";
ROUTE326.fromNode = "l_metatarsalRotInterp";
ROUTE326.toField = "set_rotation";
ROUTE326.toNode = "Joe_l_metatarsal";
browser.currentScene.children[115] = ROUTE326;

let ROUTE327 = browser.currentScene.createNode("ROUTE");
ROUTE327.fromField = "value_changed";
ROUTE327.fromNode = "r_hipRotInterp";
ROUTE327.toField = "set_rotation";
ROUTE327.toNode = "Joe_r_hip";
browser.currentScene.children[116] = ROUTE327;

let ROUTE328 = browser.currentScene.createNode("ROUTE");
ROUTE328.fromField = "value_changed";
ROUTE328.fromNode = "r_kneeRotInterp";
ROUTE328.toField = "set_rotation";
ROUTE328.toNode = "Joe_r_knee";
browser.currentScene.children[117] = ROUTE328;

let ROUTE329 = browser.currentScene.createNode("ROUTE");
ROUTE329.fromField = "value_changed";
ROUTE329.fromNode = "r_ankleRotInterp";
ROUTE329.toField = "set_rotation";
ROUTE329.toNode = "Joe_r_ankle";
browser.currentScene.children[118] = ROUTE329;

let ROUTE330 = browser.currentScene.createNode("ROUTE");
ROUTE330.fromField = "value_changed";
ROUTE330.fromNode = "r_subtalarRotInterp";
ROUTE330.toField = "set_rotation";
ROUTE330.toNode = "Joe_r_subtalar";
browser.currentScene.children[119] = ROUTE330;

let ROUTE331 = browser.currentScene.createNode("ROUTE");
ROUTE331.fromField = "value_changed";
ROUTE331.fromNode = "r_midtarsalRotInterp";
ROUTE331.toField = "set_rotation";
ROUTE331.toNode = "Joe_r_midtarsal";
browser.currentScene.children[120] = ROUTE331;

let ROUTE332 = browser.currentScene.createNode("ROUTE");
ROUTE332.fromField = "value_changed";
ROUTE332.fromNode = "r_metatarsalRotInterp";
ROUTE332.toField = "set_rotation";
ROUTE332.toNode = "Joe_r_metatarsal";
browser.currentScene.children[121] = ROUTE332;

let ROUTE333 = browser.currentScene.createNode("ROUTE");
ROUTE333.fromField = "value_changed";
ROUTE333.fromNode = "vl5RotInterp";
ROUTE333.toField = "set_rotation";
ROUTE333.toNode = "Joe_vl5";
browser.currentScene.children[122] = ROUTE333;

let ROUTE334 = browser.currentScene.createNode("ROUTE");
ROUTE334.fromField = "value_changed";
ROUTE334.fromNode = "vl4RotInterp";
ROUTE334.toField = "set_rotation";
ROUTE334.toNode = "Joe_vl4";
browser.currentScene.children[123] = ROUTE334;

let ROUTE335 = browser.currentScene.createNode("ROUTE");
ROUTE335.fromField = "value_changed";
ROUTE335.fromNode = "vl3RotInterp";
ROUTE335.toField = "set_rotation";
ROUTE335.toNode = "Joe_vl3";
browser.currentScene.children[124] = ROUTE335;

let ROUTE336 = browser.currentScene.createNode("ROUTE");
ROUTE336.fromField = "value_changed";
ROUTE336.fromNode = "vl2RotInterp";
ROUTE336.toField = "set_rotation";
ROUTE336.toNode = "Joe_vl2";
browser.currentScene.children[125] = ROUTE336;

let ROUTE337 = browser.currentScene.createNode("ROUTE");
ROUTE337.fromField = "value_changed";
ROUTE337.fromNode = "vl1RotInterp";
ROUTE337.toField = "set_rotation";
ROUTE337.toNode = "Joe_vl1";
browser.currentScene.children[126] = ROUTE337;

let ROUTE338 = browser.currentScene.createNode("ROUTE");
ROUTE338.fromField = "value_changed";
ROUTE338.fromNode = "vt12RotInterp";
ROUTE338.toField = "set_rotation";
ROUTE338.toNode = "Joe_vt12";
browser.currentScene.children[127] = ROUTE338;

let ROUTE339 = browser.currentScene.createNode("ROUTE");
ROUTE339.fromField = "value_changed";
ROUTE339.fromNode = "vt11RotInterp";
ROUTE339.toField = "set_rotation";
ROUTE339.toNode = "Joe_vt11";
browser.currentScene.children[128] = ROUTE339;

let ROUTE340 = browser.currentScene.createNode("ROUTE");
ROUTE340.fromField = "value_changed";
ROUTE340.fromNode = "vt10RotInterp";
ROUTE340.toField = "set_rotation";
ROUTE340.toNode = "Joe_vt10";
browser.currentScene.children[129] = ROUTE340;

let ROUTE341 = browser.currentScene.createNode("ROUTE");
ROUTE341.fromField = "value_changed";
ROUTE341.fromNode = "vt9RotInterp";
ROUTE341.toField = "set_rotation";
ROUTE341.toNode = "Joe_vt9";
browser.currentScene.children[130] = ROUTE341;

let ROUTE342 = browser.currentScene.createNode("ROUTE");
ROUTE342.fromField = "value_changed";
ROUTE342.fromNode = "vt8RotInterp";
ROUTE342.toField = "set_rotation";
ROUTE342.toNode = "Joe_vt8";
browser.currentScene.children[131] = ROUTE342;

let ROUTE343 = browser.currentScene.createNode("ROUTE");
ROUTE343.fromField = "value_changed";
ROUTE343.fromNode = "vt7RotInterp";
ROUTE343.toField = "set_rotation";
ROUTE343.toNode = "Joe_vt7";
browser.currentScene.children[132] = ROUTE343;

let ROUTE344 = browser.currentScene.createNode("ROUTE");
ROUTE344.fromField = "value_changed";
ROUTE344.fromNode = "vt6RotInterp";
ROUTE344.toField = "set_rotation";
ROUTE344.toNode = "Joe_vt6";
browser.currentScene.children[133] = ROUTE344;

let ROUTE345 = browser.currentScene.createNode("ROUTE");
ROUTE345.fromField = "value_changed";
ROUTE345.fromNode = "vt5RotInterp";
ROUTE345.toField = "set_rotation";
ROUTE345.toNode = "Joe_vt5";
browser.currentScene.children[134] = ROUTE345;

let ROUTE346 = browser.currentScene.createNode("ROUTE");
ROUTE346.fromField = "value_changed";
ROUTE346.fromNode = "vt4RotInterp";
ROUTE346.toField = "set_rotation";
ROUTE346.toNode = "Joe_vt4";
browser.currentScene.children[135] = ROUTE346;

let ROUTE347 = browser.currentScene.createNode("ROUTE");
ROUTE347.fromField = "value_changed";
ROUTE347.fromNode = "vt3RotInterp";
ROUTE347.toField = "set_rotation";
ROUTE347.toNode = "Joe_vt3";
browser.currentScene.children[136] = ROUTE347;

let ROUTE348 = browser.currentScene.createNode("ROUTE");
ROUTE348.fromField = "value_changed";
ROUTE348.fromNode = "vt2RotInterp";
ROUTE348.toField = "set_rotation";
ROUTE348.toNode = "Joe_vt2";
browser.currentScene.children[137] = ROUTE348;

let ROUTE349 = browser.currentScene.createNode("ROUTE");
ROUTE349.fromField = "value_changed";
ROUTE349.fromNode = "vt1RotInterp";
ROUTE349.toField = "set_rotation";
ROUTE349.toNode = "Joe_vt1";
browser.currentScene.children[138] = ROUTE349;

let ROUTE350 = browser.currentScene.createNode("ROUTE");
ROUTE350.fromField = "value_changed";
ROUTE350.fromNode = "vc7RotInterp";
ROUTE350.toField = "set_rotation";
ROUTE350.toNode = "Joe_vc7";
browser.currentScene.children[139] = ROUTE350;

let ROUTE351 = browser.currentScene.createNode("ROUTE");
ROUTE351.fromField = "value_changed";
ROUTE351.fromNode = "vc6RotInterp";
ROUTE351.toField = "set_rotation";
ROUTE351.toNode = "Joe_vc6";
browser.currentScene.children[140] = ROUTE351;

let ROUTE352 = browser.currentScene.createNode("ROUTE");
ROUTE352.fromField = "value_changed";
ROUTE352.fromNode = "vc5RotInterp";
ROUTE352.toField = "set_rotation";
ROUTE352.toNode = "Joe_vc5";
browser.currentScene.children[141] = ROUTE352;

let ROUTE353 = browser.currentScene.createNode("ROUTE");
ROUTE353.fromField = "value_changed";
ROUTE353.fromNode = "vc4RotInterp";
ROUTE353.toField = "set_rotation";
ROUTE353.toNode = "Joe_vc4";
browser.currentScene.children[142] = ROUTE353;

let ROUTE354 = browser.currentScene.createNode("ROUTE");
ROUTE354.fromField = "value_changed";
ROUTE354.fromNode = "vc3RotInterp";
ROUTE354.toField = "set_rotation";
ROUTE354.toNode = "Joe_vc3";
browser.currentScene.children[143] = ROUTE354;

let ROUTE355 = browser.currentScene.createNode("ROUTE");
ROUTE355.fromField = "value_changed";
ROUTE355.fromNode = "vc2RotInterp";
ROUTE355.toField = "set_rotation";
ROUTE355.toNode = "Joe_vc2";
browser.currentScene.children[144] = ROUTE355;

let ROUTE356 = browser.currentScene.createNode("ROUTE");
ROUTE356.fromField = "value_changed";
ROUTE356.fromNode = "vc1RotInterp";
ROUTE356.toField = "set_rotation";
ROUTE356.toNode = "Joe_vc1";
browser.currentScene.children[145] = ROUTE356;

let ROUTE357 = browser.currentScene.createNode("ROUTE");
ROUTE357.fromField = "value_changed";
ROUTE357.fromNode = "skullbaseRotInterp";
ROUTE357.toField = "set_rotation";
ROUTE357.toNode = "Joe_skullbase";
browser.currentScene.children[146] = ROUTE357;

let ROUTE358 = browser.currentScene.createNode("ROUTE");
ROUTE358.fromField = "value_changed";
ROUTE358.fromNode = "l_eyelid_jointRotInterp";
ROUTE358.toField = "set_rotation";
ROUTE358.toNode = "Joe_l_eyelid_joint";
browser.currentScene.children[147] = ROUTE358;

let ROUTE359 = browser.currentScene.createNode("ROUTE");
ROUTE359.fromField = "value_changed";
ROUTE359.fromNode = "l_eyeball_jointRotInterp";
ROUTE359.toField = "set_rotation";
ROUTE359.toNode = "Joe_l_eyeball_joint";
browser.currentScene.children[148] = ROUTE359;

let ROUTE360 = browser.currentScene.createNode("ROUTE");
ROUTE360.fromField = "value_changed";
ROUTE360.fromNode = "l_eyebrow_jointRotInterp";
ROUTE360.toField = "set_rotation";
ROUTE360.toNode = "Joe_l_eyebrow_joint";
browser.currentScene.children[149] = ROUTE360;

let ROUTE361 = browser.currentScene.createNode("ROUTE");
ROUTE361.fromField = "value_changed";
ROUTE361.fromNode = "r_eyelid_jointRotInterp";
ROUTE361.toField = "set_rotation";
ROUTE361.toNode = "Joe_r_eyelid_joint";
browser.currentScene.children[150] = ROUTE361;

let ROUTE362 = browser.currentScene.createNode("ROUTE");
ROUTE362.fromField = "value_changed";
ROUTE362.fromNode = "r_eyeball_jointRotInterp";
ROUTE362.toField = "set_rotation";
ROUTE362.toNode = "Joe_r_eyeball_joint";
browser.currentScene.children[151] = ROUTE362;

let ROUTE363 = browser.currentScene.createNode("ROUTE");
ROUTE363.fromField = "value_changed";
ROUTE363.fromNode = "r_eyebrow_jointRotInterp";
ROUTE363.toField = "set_rotation";
ROUTE363.toNode = "Joe_r_eyebrow_joint";
browser.currentScene.children[152] = ROUTE363;

let ROUTE364 = browser.currentScene.createNode("ROUTE");
ROUTE364.fromField = "value_changed";
ROUTE364.fromNode = "temporomandibularRotInterp";
ROUTE364.toField = "set_rotation";
ROUTE364.toNode = "Joe_temporomandibular";
browser.currentScene.children[153] = ROUTE364;

let ROUTE365 = browser.currentScene.createNode("ROUTE");
ROUTE365.fromField = "value_changed";
ROUTE365.fromNode = "l_sternoclavicularRotInterp";
ROUTE365.toField = "set_rotation";
ROUTE365.toNode = "Joe_l_sternoclavicular";
browser.currentScene.children[154] = ROUTE365;

let ROUTE366 = browser.currentScene.createNode("ROUTE");
ROUTE366.fromField = "value_changed";
ROUTE366.fromNode = "l_acromioclavicularRotInterp";
ROUTE366.toField = "set_rotation";
ROUTE366.toNode = "Joe_l_acromioclavicular";
browser.currentScene.children[155] = ROUTE366;

let ROUTE367 = browser.currentScene.createNode("ROUTE");
ROUTE367.fromField = "value_changed";
ROUTE367.fromNode = "l_shoulderRotInterp";
ROUTE367.toField = "set_rotation";
ROUTE367.toNode = "Joe_l_shoulder";
browser.currentScene.children[156] = ROUTE367;

let ROUTE368 = browser.currentScene.createNode("ROUTE");
ROUTE368.fromField = "value_changed";
ROUTE368.fromNode = "l_elbowRotInterp";
ROUTE368.toField = "set_rotation";
ROUTE368.toNode = "Joe_l_elbow";
browser.currentScene.children[157] = ROUTE368;

let ROUTE369 = browser.currentScene.createNode("ROUTE");
ROUTE369.fromField = "value_changed";
ROUTE369.fromNode = "l_wristRotInterp";
ROUTE369.toField = "set_rotation";
ROUTE369.toNode = "Joe_l_wrist";
browser.currentScene.children[158] = ROUTE369;

let ROUTE370 = browser.currentScene.createNode("ROUTE");
ROUTE370.fromField = "value_changed";
ROUTE370.fromNode = "l_thumb1RotInterp";
ROUTE370.toField = "set_rotation";
ROUTE370.toNode = "Joe_l_thumb1";
browser.currentScene.children[159] = ROUTE370;

let ROUTE371 = browser.currentScene.createNode("ROUTE");
ROUTE371.fromField = "value_changed";
ROUTE371.fromNode = "l_thumb2RotInterp";
ROUTE371.toField = "set_rotation";
ROUTE371.toNode = "Joe_l_thumb2";
browser.currentScene.children[160] = ROUTE371;

let ROUTE372 = browser.currentScene.createNode("ROUTE");
ROUTE372.fromField = "value_changed";
ROUTE372.fromNode = "l_thumb3RotInterp";
ROUTE372.toField = "set_rotation";
ROUTE372.toNode = "Joe_l_thumb3";
browser.currentScene.children[161] = ROUTE372;

let ROUTE373 = browser.currentScene.createNode("ROUTE");
ROUTE373.fromField = "value_changed";
ROUTE373.fromNode = "l_index0RotInterp";
ROUTE373.toField = "set_rotation";
ROUTE373.toNode = "Joe_l_index0";
browser.currentScene.children[162] = ROUTE373;

let ROUTE374 = browser.currentScene.createNode("ROUTE");
ROUTE374.fromField = "value_changed";
ROUTE374.fromNode = "l_index1RotInterp";
ROUTE374.toField = "set_rotation";
ROUTE374.toNode = "Joe_l_index1";
browser.currentScene.children[163] = ROUTE374;

let ROUTE375 = browser.currentScene.createNode("ROUTE");
ROUTE375.fromField = "value_changed";
ROUTE375.fromNode = "l_index2RotInterp";
ROUTE375.toField = "set_rotation";
ROUTE375.toNode = "Joe_l_index2";
browser.currentScene.children[164] = ROUTE375;

let ROUTE376 = browser.currentScene.createNode("ROUTE");
ROUTE376.fromField = "value_changed";
ROUTE376.fromNode = "l_index3RotInterp";
ROUTE376.toField = "set_rotation";
ROUTE376.toNode = "Joe_l_index3";
browser.currentScene.children[165] = ROUTE376;

let ROUTE377 = browser.currentScene.createNode("ROUTE");
ROUTE377.fromField = "value_changed";
ROUTE377.fromNode = "l_middle0RotInterp";
ROUTE377.toField = "set_rotation";
ROUTE377.toNode = "Joe_l_middle0";
browser.currentScene.children[166] = ROUTE377;

let ROUTE378 = browser.currentScene.createNode("ROUTE");
ROUTE378.fromField = "value_changed";
ROUTE378.fromNode = "l_middle1RotInterp";
ROUTE378.toField = "set_rotation";
ROUTE378.toNode = "Joe_l_middle1";
browser.currentScene.children[167] = ROUTE378;

let ROUTE379 = browser.currentScene.createNode("ROUTE");
ROUTE379.fromField = "value_changed";
ROUTE379.fromNode = "l_middle2RotInterp";
ROUTE379.toField = "set_rotation";
ROUTE379.toNode = "Joe_l_middle2";
browser.currentScene.children[168] = ROUTE379;

let ROUTE380 = browser.currentScene.createNode("ROUTE");
ROUTE380.fromField = "value_changed";
ROUTE380.fromNode = "l_middle3RotInterp";
ROUTE380.toField = "set_rotation";
ROUTE380.toNode = "Joe_l_middle3";
browser.currentScene.children[169] = ROUTE380;

let ROUTE381 = browser.currentScene.createNode("ROUTE");
ROUTE381.fromField = "value_changed";
ROUTE381.fromNode = "l_ring0RotInterp";
ROUTE381.toField = "set_rotation";
ROUTE381.toNode = "Joe_l_ring0";
browser.currentScene.children[170] = ROUTE381;

let ROUTE382 = browser.currentScene.createNode("ROUTE");
ROUTE382.fromField = "value_changed";
ROUTE382.fromNode = "l_ring1RotInterp";
ROUTE382.toField = "set_rotation";
ROUTE382.toNode = "Joe_l_ring1";
browser.currentScene.children[171] = ROUTE382;

let ROUTE383 = browser.currentScene.createNode("ROUTE");
ROUTE383.fromField = "value_changed";
ROUTE383.fromNode = "l_ring2RotInterp";
ROUTE383.toField = "set_rotation";
ROUTE383.toNode = "Joe_l_ring2";
browser.currentScene.children[172] = ROUTE383;

let ROUTE384 = browser.currentScene.createNode("ROUTE");
ROUTE384.fromField = "value_changed";
ROUTE384.fromNode = "l_ring3RotInterp";
ROUTE384.toField = "set_rotation";
ROUTE384.toNode = "Joe_l_ring3";
browser.currentScene.children[173] = ROUTE384;

let ROUTE385 = browser.currentScene.createNode("ROUTE");
ROUTE385.fromField = "value_changed";
ROUTE385.fromNode = "l_pinky0RotInterp";
ROUTE385.toField = "set_rotation";
ROUTE385.toNode = "Joe_l_pinky0";
browser.currentScene.children[174] = ROUTE385;

let ROUTE386 = browser.currentScene.createNode("ROUTE");
ROUTE386.fromField = "value_changed";
ROUTE386.fromNode = "l_pinky1RotInterp";
ROUTE386.toField = "set_rotation";
ROUTE386.toNode = "Joe_l_pinky1";
browser.currentScene.children[175] = ROUTE386;

let ROUTE387 = browser.currentScene.createNode("ROUTE");
ROUTE387.fromField = "value_changed";
ROUTE387.fromNode = "l_pinky2RotInterp";
ROUTE387.toField = "set_rotation";
ROUTE387.toNode = "Joe_l_pinky2";
browser.currentScene.children[176] = ROUTE387;

let ROUTE388 = browser.currentScene.createNode("ROUTE");
ROUTE388.fromField = "value_changed";
ROUTE388.fromNode = "l_pinky3RotInterp";
ROUTE388.toField = "set_rotation";
ROUTE388.toNode = "Joe_l_pinky3";
browser.currentScene.children[177] = ROUTE388;

let ROUTE389 = browser.currentScene.createNode("ROUTE");
ROUTE389.fromField = "value_changed";
ROUTE389.fromNode = "r_sternoclavicularRotInterp";
ROUTE389.toField = "set_rotation";
ROUTE389.toNode = "Joe_r_sternoclavicular";
browser.currentScene.children[178] = ROUTE389;

let ROUTE390 = browser.currentScene.createNode("ROUTE");
ROUTE390.fromField = "value_changed";
ROUTE390.fromNode = "r_acromioclavicularRotInterp";
ROUTE390.toField = "set_rotation";
ROUTE390.toNode = "Joe_r_acromioclavicular";
browser.currentScene.children[179] = ROUTE390;

let ROUTE391 = browser.currentScene.createNode("ROUTE");
ROUTE391.fromField = "value_changed";
ROUTE391.fromNode = "r_shoulderRotInterp";
ROUTE391.toField = "set_rotation";
ROUTE391.toNode = "Joe_r_shoulder";
browser.currentScene.children[180] = ROUTE391;

let ROUTE392 = browser.currentScene.createNode("ROUTE");
ROUTE392.fromField = "value_changed";
ROUTE392.fromNode = "r_elbowRotInterp";
ROUTE392.toField = "set_rotation";
ROUTE392.toNode = "Joe_r_elbow";
browser.currentScene.children[181] = ROUTE392;

let ROUTE393 = browser.currentScene.createNode("ROUTE");
ROUTE393.fromField = "value_changed";
ROUTE393.fromNode = "r_wristRotInterp";
ROUTE393.toField = "set_rotation";
ROUTE393.toNode = "Joe_r_wrist";
browser.currentScene.children[182] = ROUTE393;

let ROUTE394 = browser.currentScene.createNode("ROUTE");
ROUTE394.fromField = "value_changed";
ROUTE394.fromNode = "r_thumb1RotInterp";
ROUTE394.toField = "set_rotation";
ROUTE394.toNode = "Joe_r_thumb1";
browser.currentScene.children[183] = ROUTE394;

let ROUTE395 = browser.currentScene.createNode("ROUTE");
ROUTE395.fromField = "value_changed";
ROUTE395.fromNode = "r_thumb2RotInterp";
ROUTE395.toField = "set_rotation";
ROUTE395.toNode = "Joe_r_thumb2";
browser.currentScene.children[184] = ROUTE395;

let ROUTE396 = browser.currentScene.createNode("ROUTE");
ROUTE396.fromField = "value_changed";
ROUTE396.fromNode = "r_thumb3RotInterp";
ROUTE396.toField = "set_rotation";
ROUTE396.toNode = "Joe_r_thumb3";
browser.currentScene.children[185] = ROUTE396;

let ROUTE397 = browser.currentScene.createNode("ROUTE");
ROUTE397.fromField = "value_changed";
ROUTE397.fromNode = "r_index0RotInterp";
ROUTE397.toField = "set_rotation";
ROUTE397.toNode = "Joe_r_index0";
browser.currentScene.children[186] = ROUTE397;

let ROUTE398 = browser.currentScene.createNode("ROUTE");
ROUTE398.fromField = "value_changed";
ROUTE398.fromNode = "r_index1RotInterp";
ROUTE398.toField = "set_rotation";
ROUTE398.toNode = "Joe_r_index1";
browser.currentScene.children[187] = ROUTE398;

let ROUTE399 = browser.currentScene.createNode("ROUTE");
ROUTE399.fromField = "value_changed";
ROUTE399.fromNode = "r_index2RotInterp";
ROUTE399.toField = "set_rotation";
ROUTE399.toNode = "Joe_r_index2";
browser.currentScene.children[188] = ROUTE399;

let ROUTE400 = browser.currentScene.createNode("ROUTE");
ROUTE400.fromField = "value_changed";
ROUTE400.fromNode = "r_index3RotInterp";
ROUTE400.toField = "set_rotation";
ROUTE400.toNode = "Joe_r_index3";
browser.currentScene.children[189] = ROUTE400;

let ROUTE401 = browser.currentScene.createNode("ROUTE");
ROUTE401.fromField = "value_changed";
ROUTE401.fromNode = "r_middle0RotInterp";
ROUTE401.toField = "set_rotation";
ROUTE401.toNode = "Joe_r_middle0";
browser.currentScene.children[190] = ROUTE401;

let ROUTE402 = browser.currentScene.createNode("ROUTE");
ROUTE402.fromField = "value_changed";
ROUTE402.fromNode = "r_middle1RotInterp";
ROUTE402.toField = "set_rotation";
ROUTE402.toNode = "Joe_r_middle1";
browser.currentScene.children[191] = ROUTE402;

let ROUTE403 = browser.currentScene.createNode("ROUTE");
ROUTE403.fromField = "value_changed";
ROUTE403.fromNode = "r_middle2RotInterp";
ROUTE403.toField = "set_rotation";
ROUTE403.toNode = "Joe_r_middle2";
browser.currentScene.children[192] = ROUTE403;

let ROUTE404 = browser.currentScene.createNode("ROUTE");
ROUTE404.fromField = "value_changed";
ROUTE404.fromNode = "r_middle3RotInterp";
ROUTE404.toField = "set_rotation";
ROUTE404.toNode = "Joe_r_middle3";
browser.currentScene.children[193] = ROUTE404;

let ROUTE405 = browser.currentScene.createNode("ROUTE");
ROUTE405.fromField = "value_changed";
ROUTE405.fromNode = "r_ring0RotInterp";
ROUTE405.toField = "set_rotation";
ROUTE405.toNode = "Joe_r_ring0";
browser.currentScene.children[194] = ROUTE405;

let ROUTE406 = browser.currentScene.createNode("ROUTE");
ROUTE406.fromField = "value_changed";
ROUTE406.fromNode = "r_ring1RotInterp";
ROUTE406.toField = "set_rotation";
ROUTE406.toNode = "Joe_r_ring1";
browser.currentScene.children[195] = ROUTE406;

let ROUTE407 = browser.currentScene.createNode("ROUTE");
ROUTE407.fromField = "value_changed";
ROUTE407.fromNode = "r_ring2RotInterp";
ROUTE407.toField = "set_rotation";
ROUTE407.toNode = "Joe_r_ring2";
browser.currentScene.children[196] = ROUTE407;

let ROUTE408 = browser.currentScene.createNode("ROUTE");
ROUTE408.fromField = "value_changed";
ROUTE408.fromNode = "r_ring3RotInterp";
ROUTE408.toField = "set_rotation";
ROUTE408.toNode = "Joe_r_ring3";
browser.currentScene.children[197] = ROUTE408;

let ROUTE409 = browser.currentScene.createNode("ROUTE");
ROUTE409.fromField = "value_changed";
ROUTE409.fromNode = "r_pinky0RotInterp";
ROUTE409.toField = "set_rotation";
ROUTE409.toNode = "Joe_r_pinky0";
browser.currentScene.children[198] = ROUTE409;

let ROUTE410 = browser.currentScene.createNode("ROUTE");
ROUTE410.fromField = "value_changed";
ROUTE410.fromNode = "r_pinky1RotInterp";
ROUTE410.toField = "set_rotation";
ROUTE410.toNode = "Joe_r_pinky1";
browser.currentScene.children[199] = ROUTE410;

let ROUTE411 = browser.currentScene.createNode("ROUTE");
ROUTE411.fromField = "value_changed";
ROUTE411.fromNode = "r_pinky2RotInterp";
ROUTE411.toField = "set_rotation";
ROUTE411.toNode = "Joe_r_pinky2";
browser.currentScene.children[200] = ROUTE411;

let ROUTE412 = browser.currentScene.createNode("ROUTE");
ROUTE412.fromField = "value_changed";
ROUTE412.fromNode = "r_pinky3RotInterp";
ROUTE412.toField = "set_rotation";
ROUTE412.toNode = "Joe_r_pinky3";
browser.currentScene.children[201] = ROUTE412;

let Group413 = browser.currentScene.createNode("Group");
Group413.DEF = "DisplacersAnimationGroup";
Group413.bboxCenter = new SFVec3f(new float[0,0,0]);
Group413.bboxSize = new SFVec3f(new float[-1,-1,-1]);
//TimeSensor DEF='skull_tipTestTimer' cycleInterval='5.73' loop='true' enabled='true'></TimeSensor
let ScalarInterpolator414 = browser.currentScene.createNode("ScalarInterpolator");
ScalarInterpolator414.DEF = "skull_tipTest";
ScalarInterpolator414.key = new MFFloat(new float[0,0.1,0.2,0.35,0.6,0.7,0.85,0.88,0.94,0.97,1]);
ScalarInterpolator414.keyValue = new MFFloat(new float[0,0,0,0,0.2,0.4,1,0,1,0.4,0]);
Group413.children = new MFNode();

Group413.children[0] = ScalarInterpolator414;

let ROUTE415 = browser.currentScene.createNode("ROUTE");
ROUTE415.fromField = "fraction_changed";
ROUTE415.fromNode = "KickTimer";
ROUTE415.toField = "set_fraction";
ROUTE415.toNode = "skull_tipTest";
Group413.children[1] = ROUTE415;

let ROUTE416 = browser.currentScene.createNode("ROUTE");
ROUTE416.fromField = "value_changed";
ROUTE416.fromNode = "skull_tipTest";
ROUTE416.toField = "weight";
ROUTE416.toNode = "Joe_skull_tipTest";
Group413.children[2] = ROUTE416;

browser.currentScene.children[202] = Group413;

let Group417 = browser.currentScene.createNode("Group");
Group417.DEF = "skintexturetransform_animation";
Group417.bboxCenter = new SFVec3f(new float[0,0,0]);
Group417.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let ScalarInterpolator418 = browser.currentScene.createNode("ScalarInterpolator");
ScalarInterpolator418.DEF = "skinTexTransTest";
ScalarInterpolator418.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.7,0.8,1]);
ScalarInterpolator418.keyValue = new MFFloat(new float[0,0,0,0,0,1,2,0]);
Group417.children = new MFNode();

Group417.children[0] = ScalarInterpolator418;

let ROUTE419 = browser.currentScene.createNode("ROUTE");
ROUTE419.fromField = "fraction_changed";
ROUTE419.fromNode = "KickTimer";
ROUTE419.toField = "set_fraction";
ROUTE419.toNode = "skinTexTransTest";
Group417.children[1] = ROUTE419;

let ROUTE420 = browser.currentScene.createNode("ROUTE");
ROUTE420.fromField = "value_changed";
ROUTE420.fromNode = "skinTexTransTest";
ROUTE420.toField = "rotation";
ROUTE420.toNode = "kicktextrans";
Group417.children[2] = ROUTE420;

browser.currentScene.children[203] = Group417;

let Group421 = browser.currentScene.createNode("Group");
Group421.bboxCenter = new SFVec3f(new float[0,0,0]);
Group421.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Transform422 = browser.currentScene.createNode("Transform");
Transform422.DEF = "SBall";
Transform422.rotation = new SFRotation(new float[0.7,0,0.7,0.1]);
Transform422.scale = new SFVec3f(new float[0.23,0.23,0.23]);
Transform422.translation = new SFVec3f(new float[-0.916,0.37,-0.92]);
Transform422.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform422.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape423 = browser.currentScene.createNode("Shape");
Shape423.DEF = "ball_Shape";
Shape423.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape423.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Appearance424 = browser.currentScene.createNode("Appearance");
Appearance424.DEF = "ball_Appearance";
let Material425 = browser.currentScene.createNode("Material");
Material425.DEF = "ball_Material";
Material425.diffuseColor = new SFColor(new float[0.3,0.3,1]);
Material425.emissiveColor = new SFColor(new float[0.3,0.3,0.33]);
Appearance424.material = Material425;

let ImageTexture426 = browser.currentScene.createNode("ImageTexture");
ImageTexture426.USE = "JoeSkinImageTexture";
Appearance424.texture = ImageTexture426;

Shape423.appearance = Appearance424;

let IndexedFaceSet427 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet427.DEF = "ball_IndexedFaceSet";
IndexedFaceSet427.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,1,13,14,-1,1,14,2,-1,2,14,15,-1,2,15,3,-1,3,15,16,-1,3,16,4,-1,4,16,17,-1,4,17,5,-1,5,17,18,-1,5,18,6,-1,6,18,19,-1,6,19,7,-1,7,19,20,-1,7,20,8,-1,8,20,21,-1,8,21,9,-1,9,21,22,-1,9,22,10,-1,10,22,23,-1,10,23,11,-1,11,23,24,-1,11,24,12,-1,12,24,13,-1,12,13,1,-1,13,25,26,-1,13,26,14,-1,14,26,27,-1,14,27,15,-1,15,27,28,-1,15,28,16,-1,16,28,29,-1,16,29,17,-1,17,29,30,-1,17,30,18,-1,18,30,31,-1,18,31,19,-1,19,31,32,-1,19,32,20,-1,20,32,33,-1,20,33,21,-1,21,33,34,-1,21,34,22,-1,22,34,35,-1,22,35,23,-1,23,35,36,-1,23,36,24,-1,24,36,25,-1,24,25,13,-1,25,37,38,-1,25,38,26,-1,26,38,39,-1,26,39,27,-1,27,39,40,-1,27,40,28,-1,28,40,41,-1,28,41,29,-1,29,41,42,-1,29,42,30,-1,30,42,43,-1,30,43,31,-1,31,43,44,-1,31,44,32,-1,32,44,45,-1,32,45,33,-1,33,45,46,-1,33,46,34,-1,34,46,47,-1,34,47,35,-1,35,47,48,-1,35,48,36,-1,36,48,37,-1,36,37,25,-1,37,49,50,-1,37,50,38,-1,38,50,51,-1,38,51,39,-1,39,51,52,-1,39,52,40,-1,40,52,53,-1,40,53,41,-1,41,53,54,-1,41,54,42,-1,42,54,55,-1,42,55,43,-1,43,55,56,-1,43,56,44,-1,44,56,57,-1,44,57,45,-1,45,57,58,-1,45,58,46,-1,46,58,59,-1,46,59,47,-1,47,59,60,-1,47,60,48,-1,48,60,49,-1,48,49,37,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]);
let Coordinate428 = browser.currentScene.createNode("Coordinate");
Coordinate428.DEF = "Ball_Coordinates";
Coordinate428.point = new MFVec3f(new float[0,0.4675,0,0,0.4049,-0.2338,-0.1169,0.4049,-0.2024,-0.2024,0.4049,-0.1169,-0.2338,0.4049,0,-0.2024,0.4049,0.1169,-0.1169,0.4049,0.2024,0,0.4049,0.2338,0.1169,0.4049,0.2024,0.2024,0.4049,0.1169,0.2338,0.4049,0,0.2024,0.4049,-0.1169,0.1169,0.4049,-0.2024,0,0.2338,-0.4049,-0.2024,0.2338,-0.3506,-0.3506,0.2338,-0.2024,-0.4049,0.2338,0,-0.3506,0.2338,0.2024,-0.2024,0.2338,0.3506,0,0.2338,0.4049,0.2024,0.2338,0.3506,0.3506,0.2338,0.2024,0.4049,0.2338,0,0.3506,0.2338,-0.2024,0.2024,0.2338,-0.3506,0,0,-0.4675,-0.2338,0,-0.4049,-0.4049,0,-0.2338,-0.4675,0,0,-0.4049,0,0.2338,-0.2338,0,0.4049,0,0,0.4675,0.2338,0,0.4049,0.4049,0,0.2338,0.4675,0,0,0.4049,0,-0.2338,0.2338,0,-0.4049,0,-0.2338,-0.4049,-0.2024,-0.2338,-0.3506,-0.3506,-0.2338,-0.2024,-0.4049,-0.2338,0,-0.3506,-0.2338,0.2024,-0.2024,-0.2338,0.3506,0,-0.2338,0.4049,0.2024,-0.2338,0.3506,0.3506,-0.2338,0.2024,0.4049,-0.2338,0,0.3506,-0.2338,-0.2024,0.2024,-0.2338,-0.3506,0,-0.4049,-0.2338,-0.1169,-0.4049,-0.2024,-0.2024,-0.4049,-0.1169,-0.2338,-0.4049,0,-0.2024,-0.4049,0.1169,-0.1169,-0.4049,0.2024,0,-0.4049,0.2338,0.1169,-0.4049,0.2024,0.2024,-0.4049,0.1169,0.2338,-0.4049,0,0.2024,-0.4049,-0.1169,0.1169,-0.4049,-0.2024,0,-0.4675,0]);
IndexedFaceSet427.coord = Coordinate428;

Shape423.geometry = IndexedFaceSet427;

Transform422.children = new MFNode();

Transform422.children[0] = Shape423;

let Viewpoint429 = browser.currentScene.createNode("Viewpoint");
Viewpoint429.DEF = "ballView_1";
Viewpoint429.description = "Ball View";
Transform422.children[1] = Viewpoint429;

Group421.children = new MFNode();

Group421.children[0] = Transform422;

//Ball Animation interpolators
let PositionInterpolator430 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator430.DEF = "ballTransInterp";
PositionInterpolator430.key = new MFFloat(new float[0,0.4,0.409,1]);
PositionInterpolator430.keyValue = new MFVec3f(new float[-1,0.4,-1,0,0.07,0,0.05,0.06,0.05,2,4,10]);
Group421.children[1] = PositionInterpolator430;

let OrientationInterpolator431 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator431.DEF = "ballRotInterp";
OrientationInterpolator431.key = new MFFloat(new float[0,0.4,0.41,0.71,1]);
OrientationInterpolator431.keyValue = new MFRotation(new float[1,0,1,0.25,-1,0,-1,1.35,-1,1,-1,3.35,-1,0.2,-1,3,-1,0.2,-1,3]);
Group421.children[2] = OrientationInterpolator431;

//Ball Animation Routes
let ROUTE432 = browser.currentScene.createNode("ROUTE");
ROUTE432.fromField = "fraction_changed";
ROUTE432.fromNode = "KickTimer";
ROUTE432.toField = "set_fraction";
ROUTE432.toNode = "ballTransInterp";
Group421.children[3] = ROUTE432;

let ROUTE433 = browser.currentScene.createNode("ROUTE");
ROUTE433.fromField = "value_changed";
ROUTE433.fromNode = "ballTransInterp";
ROUTE433.toField = "set_translation";
ROUTE433.toNode = "SBall";
Group421.children[4] = ROUTE433;

let ROUTE434 = browser.currentScene.createNode("ROUTE");
ROUTE434.fromField = "fraction_changed";
ROUTE434.fromNode = "KickTimer";
ROUTE434.toField = "set_fraction";
ROUTE434.toNode = "ballRotInterp";
Group421.children[5] = ROUTE434;

let ROUTE435 = browser.currentScene.createNode("ROUTE");
ROUTE435.fromField = "value_changed";
ROUTE435.fromNode = "ballRotInterp";
ROUTE435.toField = "set_rotation";
ROUTE435.toNode = "SBall";
Group421.children[6] = ROUTE435;

browser.currentScene.children[204] = Group421;

let Group436 = browser.currentScene.createNode("Group");
Group436.bboxCenter = new SFVec3f(new float[0,0,0]);
Group436.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Transform437 = browser.currentScene.createNode("Transform");
Transform437.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Transform437.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform437.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape438 = browser.currentScene.createNode("Shape");
Shape438.USE = "AxisLinesShape";
Transform437.children = new MFNode();

Transform437.children[0] = Shape438;

Group436.children = new MFNode();

Group436.children[0] = Transform437;

let Transform439 = browser.currentScene.createNode("Transform");
Transform439.DEF = "Circle0";
Transform439.scale = new SFVec3f(new float[1.175,1,1.175]);
Transform439.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform439.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape440 = browser.currentScene.createNode("Shape");
Shape440.DEF = "circle_Shape";
Shape440.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape440.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Appearance441 = browser.currentScene.createNode("Appearance");
Appearance441.DEF = "circle0_Appearance";
let Material442 = browser.currentScene.createNode("Material");
Material442.DEF = "circle0_Material";
Material442.ambientIntensity = 0.9;
Material442.diffuseColor = new SFColor(new float[0.9,0,0.7]);
Material442.emissiveColor = new SFColor(new float[0.425,0.486,1]);
Appearance441.material = Material442;

Shape440.appearance = Appearance441;

let IndexedLineSet443 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet443.DEF = "Orbit1";
IndexedLineSet443.coordIndex = new MFInt32(new int[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1]);
let Coordinate444 = browser.currentScene.createNode("Coordinate");
Coordinate444.DEF = "circle_Coordinates";
Coordinate444.point = new MFVec3f(new float[1,0,0,0.995,0,-0.105,0.979,0,-0.208,0.951,0,-0.309,0.914,0,-0.407,0.866,0,-0.5,0.809,0,-0.588,0.743,0,-0.669,0.669,0,-0.743,0.588,0,-0.809,0.5,0,-0.866,0.407,0,-0.914,0.309,0,-0.951,0.208,0,-0.978,0.105,0,-0.995,0,0,-1,-0.105,0,-0.994522,-0.208,0,-0.978,-0.309,0,-0.951,-0.407,0,-0.914,-0.5,0,-0.866,-0.588,0,-0.809,-0.669,0,-0.743,-0.743,0,-0.669,-0.809,0,-0.588,-0.866,0,-0.5,-0.914,0,-0.407,-0.951,0,-0.309,-0.978,0,-0.208,-0.995,0,-0.105,-1,0,0,-0.995,0,0.105,-0.978,0,0.208,-0.951,0,0.309,-0.914,0,0.407,-0.866,0,0.5,-0.809,0,0.588,-0.743,0,0.669,-0.669,0,0.743,-0.588,0,0.809,-0.5,0,0.866,-0.407,0,0.914,-0.309,0,0.951,-0.208,0,0.978,-0.105,0,0.995,0,0,1,0.105,0,0.995,0.208,0,0.978,0.309,0,0.951,0.407,0,0.914,0.5,0,0.866,0.588,0,0.809,0.669,0,0.743,0.743,0,0.669,0.809,0,0.588,0.866,0,0.5,0.914,0,0.407,0.951,0,0.309,0.978,0,0.208,0.995,0,0.104,1,0,0]);
IndexedLineSet443.coord = Coordinate444;

Shape440.geometry = IndexedLineSet443;

Transform439.children = new MFNode();

Transform439.children[0] = Shape440;

Group436.children[1] = Transform439;

let Transform445 = browser.currentScene.createNode("Transform");
Transform445.DEF = "Circle1";
Transform445.scale = new SFVec3f(new float[0.5,1,0.5]);
Transform445.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform445.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape446 = browser.currentScene.createNode("Shape");
Shape446.DEF = "circle1_Shape";
Shape446.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape446.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Appearance447 = browser.currentScene.createNode("Appearance");
Appearance447.DEF = "circle1_Appearance";
let Material448 = browser.currentScene.createNode("Material");
Material448.DEF = "circle1_Material";
Material448.diffuseColor = new SFColor(new float[0.9,0,0.7]);
Material448.emissiveColor = new SFColor(new float[0.424956,0.483976,1]);
Appearance447.material = Material448;

Shape446.appearance = Appearance447;

let IndexedLineSet449 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet449.USE = "Orbit1";
Shape446.geometry = IndexedLineSet449;

Transform445.children = new MFNode();

Transform445.children[0] = Shape446;

Group436.children[2] = Transform445;

let Transform450 = browser.currentScene.createNode("Transform");
Transform450.DEF = "Circle2";
Transform450.scale = new SFVec3f(new float[0.25,1,0.25]);
Transform450.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform450.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape451 = browser.currentScene.createNode("Shape");
Shape451.DEF = "circle2_Shape";
Shape451.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape451.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Appearance452 = browser.currentScene.createNode("Appearance");
Appearance452.DEF = "circle2_Appearance";
let Material453 = browser.currentScene.createNode("Material");
Material453.DEF = "circle2_Material";
Material453.diffuseColor = new SFColor(new float[0.9,0,0.7]);
Material453.emissiveColor = new SFColor(new float[0.424956,0.483976,1]);
Appearance452.material = Material453;

Shape451.appearance = Appearance452;

let IndexedLineSet454 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet454.USE = "Orbit1";
Shape451.geometry = IndexedLineSet454;

Transform450.children = new MFNode();

Transform450.children[0] = Shape451;

Group436.children[3] = Transform450;

browser.currentScene.children[205] = Group436;

