let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interchange";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let component2 = browser.currentScene.createNode("component");
component2.name = "HAnim";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "title";
meta3.content = "MainStage.x3d";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "description";
meta4.content = "Main stage for HAnim scene Winter and Spring.";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "creator";
meta5.content = "Joe Williams";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "translator";
meta6.content = "Joe Williams and Don Brutzman";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "created";
meta7.content = "25 May 2023";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "modified";
meta8.content = "27 May 2023";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "reference";
meta9.content = "originals/0MainStageScene0525.x3dv";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "identifier";
meta10.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/MainStage.x3d";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "generator";
meta11.content = "X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "license";
meta12.content = "../license.html";
head1.meta[10] = meta12;

head = head1;

let WorldInfo14 = browser.currentScene.createNode("WorldInfo");
WorldInfo14.title = "MainStage.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo14;

let NavigationInfo15 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo15.headlight = False;
browser.currentScene.children[1] = NavigationInfo15;

let DirectionalLight16 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight16.ambientIntensity = 1;
DirectionalLight16.direction = new SFVec3f(new float[-0.5,-0.5,-0.5]);
DirectionalLight16.global = True;
browser.currentScene.children[2] = DirectionalLight16;

let DirectionalLight17 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight17.ambientIntensity = 1;
DirectionalLight17.direction = new SFVec3f(new float[-1,-1,-1]);
DirectionalLight17.global = True;
browser.currentScene.children[3] = DirectionalLight17;

let DirectionalLight18 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight18.ambientIntensity = 1;
DirectionalLight18.direction = new SFVec3f(new float[1,1,-1]);
DirectionalLight18.global = True;
DirectionalLight18.intensity = 0.5;
browser.currentScene.children[4] = DirectionalLight18;

let Viewpoint19 = browser.currentScene.createNode("Viewpoint");
Viewpoint19.DEF = "Scene_StageFrontViewFar";
Viewpoint19.description = "hanim_Stage Front View";
Viewpoint19.orientation = new SFRotation(new float[1,0,0,-0.449999988]);
Viewpoint19.position = new SFVec3f(new float[0,4,10]);
browser.currentScene.children[5] = Viewpoint19;

let Viewpoint20 = browser.currentScene.createNode("Viewpoint");
Viewpoint20.DEF = "Scene_InclinedView";
Viewpoint20.description = "hanim_Inclined View";
Viewpoint20.orientation = new SFRotation(new float[-0.112999998,0.992999971,0.034699999,0.671000004]);
Viewpoint20.position = new SFVec3f(new float[2.619999886,1.049999952,4.059999943]);
browser.currentScene.children[6] = Viewpoint20;

let Viewpoint21 = browser.currentScene.createNode("Viewpoint");
Viewpoint21.DEF = "Scene_StageFrontView";
Viewpoint21.description = "hanim_Stage Front View";
Viewpoint21.position = new SFVec3f(new float[0,1,5]);
browser.currentScene.children[7] = Viewpoint21;

let Viewpoint22 = browser.currentScene.createNode("Viewpoint");
Viewpoint22.DEF = "Scene_FeetStageBottomView";
Viewpoint22.description = "hanim_feet View";
Viewpoint22.orientation = new SFRotation(new float[1,0,0,1.570000052]);
Viewpoint22.position = new SFVec3f(new float[0,-10,0]);
browser.currentScene.children[8] = Viewpoint22;

let Viewpoint23 = browser.currentScene.createNode("Viewpoint");
Viewpoint23.DEF = "Scene_HeadTopView";
Viewpoint23.description = "hanim_Head Top View";
Viewpoint23.orientation = new SFRotation(new float[1,0,0,-1.570000052]);
Viewpoint23.position = new SFVec3f(new float[0,15,0]);
browser.currentScene.children[9] = Viewpoint23;

let Viewpoint24 = browser.currentScene.createNode("Viewpoint");
Viewpoint24.DEF = "Scene_TopFrontCloseView";
Viewpoint24.description = "hanim_Head Top View";
Viewpoint24.orientation = new SFRotation(new float[1,0,0,-1.100000024]);
Viewpoint24.position = new SFVec3f(new float[0,8,3]);
browser.currentScene.children[10] = Viewpoint24;

let Group25 = browser.currentScene.createNode("Group");
Group25.DEF = "HAnimStage";
let Transform26 = browser.currentScene.createNode("Transform");
Transform26.DEF = "cordsysfloor";
Transform26.scale = new SFVec3f(new float[0.174999997,0.174999997,0.174999997]);
let Inline27 = browser.currentScene.createNode("Inline");
Inline27.url = new MFString(new java.lang.String["JointCoordinateAxes.x3dv"]);
Transform26.children = new MFNode();

Transform26.children[0] = Inline27;

Group25.children = new MFNode();

Group25.children[0] = Transform26;

let Transform28 = browser.currentScene.createNode("Transform");
Transform28.DEF = "StageGeometry";
Transform28.scale = new SFVec3f(new float[1,0.01,1]);
Transform28.translation = new SFVec3f(new float[0,-0.01,0]);
let Shape29 = browser.currentScene.createNode("Shape");
let Appearance30 = browser.currentScene.createNode("Appearance");
let Material31 = browser.currentScene.createNode("Material");
Material31.transparency = 0.6;
Appearance30.material = Material31;

Shape29.appearance = Appearance30;

let Box32 = browser.currentScene.createNode("Box");
Box32.size = new SFVec3f(new float[9,1,9]);
Shape29.geometry = Box32;

Transform28.children = new MFNode();

Transform28.children[0] = Shape29;

let Transform33 = browser.currentScene.createNode("Transform");
Transform33.DEF = "Circle0";
let Shape34 = browser.currentScene.createNode("Shape");
let Appearance35 = browser.currentScene.createNode("Appearance");
Appearance35.DEF = "LineColor";
let Material36 = browser.currentScene.createNode("Material");
Material36.ambientIntensity = 1;
Material36.diffuseColor = new SFColor(new float[0.699999988,0,0.899999976]);
Material36.emissiveColor = new SFColor(new float[0.449999988,0.449999988,1]);
Material36.shininess = 1;
Material36.specularColor = new SFColor(new float[0,0,1]);
Appearance35.material = Material36;

Shape34.appearance = Appearance35;

let IndexedLineSet37 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet37.DEF = "Orbit1";
IndexedLineSet37.coordIndex = new MFInt32(new int[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1]);
let Coordinate38 = browser.currentScene.createNode("Coordinate");
Coordinate38.point = new MFVec3f(new float[1,0,0,0.995000005,0,-0.104999997,0.978999972,0,-0.208000004,0.950999975,0,-0.308999985,0.913999975,0,-0.407000005,0.865999997,0,-0.5,0.809000015,0,-0.588,0.742999971,0,-0.66900003,0.66900003,0,-0.742999971,0.588,0,-0.809000015,0.5,0,-0.865999997,0.407000005,0,-0.913999975,0.308999985,0,-0.950999975,0.208000004,0,-0.977999985,0.104999997,0,-0.995000005,0,0,-1,-0.104999997,0,-0.994521976,-0.208000004,0,-0.977999985,-0.308999985,0,-0.950999975,-0.407000005,0,-0.913999975,-0.5,0,-0.865999997,-0.588,0,-0.809000015,-0.66900003,0,-0.742999971,-0.742999971,0,-0.66900003,-0.809000015,0,-0.588,-0.865999997,0,-0.5,-0.913999975,0,-0.407000005,-0.950999975,0,-0.308999985,-0.977999985,0,-0.208000004,-0.995000005,0,-0.104999997,-1,0,0,-0.995000005,0,0.104999997,-0.977999985,0,0.208000004,-0.950999975,0,0.308999985,-0.913999975,0,0.407000005,-0.865999997,0,0.5,-0.809000015,0,0.588,-0.742999971,0,0.66900003,-0.66900003,0,0.742999971,-0.588,0,0.809000015,-0.5,0,0.865999997,-0.407000005,0,0.913999975,-0.308999985,0,0.950999975,-0.208000004,0,0.977999985,-0.104999997,0,0.995000005,0,0,1,0.104999997,0,0.995000005,0.208000004,0,0.977999985,0.308999985,0,0.950999975,0.407000005,0,0.913999975,0.5,0,0.865999997,0.588,0,0.809000015,0.66900003,0,0.742999971,0.742999971,0,0.66900003,0.809000015,0,0.588,0.865999997,0,0.5,0.913999975,0,0.407000005,0.950999975,0,0.308999985,0.977999985,0,0.208000004,0.995000005,0,0.104000002,1,0,0]);
IndexedLineSet37.coord = Coordinate38;

Shape34.geometry = IndexedLineSet37;

Transform33.children = new MFNode();

Transform33.children[0] = Shape34;

Transform28.children[1] = Transform33;

let Transform39 = browser.currentScene.createNode("Transform");
Transform39.DEF = "Circle1";
Transform39.scale = new SFVec3f(new float[0.5,1,0.5]);
let Shape40 = browser.currentScene.createNode("Shape");
let Appearance41 = browser.currentScene.createNode("Appearance");
Appearance41.USE = "LineColor";
Shape40.appearance = Appearance41;

let IndexedLineSet42 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet42.USE = "Orbit1";
Shape40.geometry = IndexedLineSet42;

Transform39.children = new MFNode();

Transform39.children[0] = Shape40;

Transform28.children[2] = Transform39;

let Transform43 = browser.currentScene.createNode("Transform");
Transform43.DEF = "Circle2";
Transform43.scale = new SFVec3f(new float[0.25,1,0.25]);
let Shape44 = browser.currentScene.createNode("Shape");
let Appearance45 = browser.currentScene.createNode("Appearance");
Appearance45.USE = "LineColor";
Shape44.appearance = Appearance45;

let IndexedLineSet46 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet46.USE = "Orbit1";
Shape44.geometry = IndexedLineSet46;

Transform43.children = new MFNode();

Transform43.children[0] = Shape44;

Transform28.children[3] = Transform43;

let Transform47 = browser.currentScene.createNode("Transform");
Transform47.DEF = "Circle3";
Transform47.scale = new SFVec3f(new float[2,1,2]);
let Shape48 = browser.currentScene.createNode("Shape");
let Appearance49 = browser.currentScene.createNode("Appearance");
Appearance49.USE = "LineColor";
Shape48.appearance = Appearance49;

let IndexedLineSet50 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet50.USE = "Orbit1";
Shape48.geometry = IndexedLineSet50;

Transform47.children = new MFNode();

Transform47.children[0] = Shape48;

Transform28.children[4] = Transform47;

let Transform51 = browser.currentScene.createNode("Transform");
Transform51.DEF = "Circle4";
Transform51.scale = new SFVec3f(new float[3,1,3]);
let Shape52 = browser.currentScene.createNode("Shape");
let Appearance53 = browser.currentScene.createNode("Appearance");
Appearance53.USE = "LineColor";
Shape52.appearance = Appearance53;

let IndexedLineSet54 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet54.USE = "Orbit1";
Shape52.geometry = IndexedLineSet54;

Transform51.children = new MFNode();

Transform51.children[0] = Shape52;

Transform28.children[5] = Transform51;

Group25.children[1] = Transform28;

browser.currentScene.children[11] = Group25;
