let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interchange";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "MainStage.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "description";
meta3.content = "Main stage for HAnim scene Winter and Spring.";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "creator";
meta4.content = "Joe Williams";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "translator";
meta5.content = "Joe Williams and Don Brutzman";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "created";
meta6.content = "25 May 2023";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "modified";
meta7.content = "27 May 2023";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "reference";
meta8.content = "originals/0MainStageScene0525.x3dv";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "identifier";
meta9.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/MainStage.x3d";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "generator";
meta10.content = "X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit";
head1.meta[8] = meta10;

let component11 = browser.currentScene.createNode("component");
component11.name = "HAnim";
component11.level = 1;
head1.component[9] = component11;

head = head1;

let WorldInfo13 = browser.currentScene.createNode("WorldInfo");
WorldInfo13.title = "MainStage.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo13;

let NavigationInfo14 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo14.headlight = False;
browser.currentScene.children[1] = NavigationInfo14;

let DirectionalLight15 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight15.global = True;
DirectionalLight15.ambientIntensity = 1;
DirectionalLight15.direction = new SFVec3f(new float[-0.5,-0.5,-0.5]);
browser.currentScene.children[2] = DirectionalLight15;

let DirectionalLight16 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight16.global = True;
DirectionalLight16.ambientIntensity = 1;
DirectionalLight16.direction = new SFVec3f(new float[-1,-1,-1]);
browser.currentScene.children[3] = DirectionalLight16;

let DirectionalLight17 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight17.global = True;
DirectionalLight17.intensity = 0.5;
DirectionalLight17.ambientIntensity = 1;
DirectionalLight17.direction = new SFVec3f(new float[1,1,-1]);
browser.currentScene.children[4] = DirectionalLight17;

let Viewpoint18 = browser.currentScene.createNode("Viewpoint");
Viewpoint18.DEF = "Scene_StageFrontViewFar";
Viewpoint18.description = "hanim_Stage Front View";
Viewpoint18.position = new SFVec3f(new float[0,4,10]);
Viewpoint18.orientation = new SFRotation(new float[1,0,0,-0.449999988]);
browser.currentScene.children[5] = Viewpoint18;

let Viewpoint19 = browser.currentScene.createNode("Viewpoint");
Viewpoint19.DEF = "Scene_InclinedView";
Viewpoint19.description = "hanim_Inclined View";
Viewpoint19.position = new SFVec3f(new float[2.62,1.05,4.06]);
Viewpoint19.orientation = new SFRotation(new float[-0.112999998,0.992999971,0.034699999,0.671000004]);
browser.currentScene.children[6] = Viewpoint19;

let Viewpoint20 = browser.currentScene.createNode("Viewpoint");
Viewpoint20.DEF = "Scene_StageFrontView";
Viewpoint20.description = "hanim_Stage Front View";
Viewpoint20.position = new SFVec3f(new float[0,1,5]);
browser.currentScene.children[7] = Viewpoint20;

let Viewpoint21 = browser.currentScene.createNode("Viewpoint");
Viewpoint21.DEF = "Scene_FeetStageBottomView";
Viewpoint21.description = "hanim_feet View";
Viewpoint21.position = new SFVec3f(new float[0,-10,0]);
Viewpoint21.orientation = new SFRotation(new float[1,0,0,1.570000052]);
browser.currentScene.children[8] = Viewpoint21;

let Viewpoint22 = browser.currentScene.createNode("Viewpoint");
Viewpoint22.DEF = "Scene_HeadTopView";
Viewpoint22.description = "hanim_Head Top View";
Viewpoint22.position = new SFVec3f(new float[0,15,0]);
Viewpoint22.orientation = new SFRotation(new float[1,0,0,-1.570000052]);
browser.currentScene.children[9] = Viewpoint22;

let Viewpoint23 = browser.currentScene.createNode("Viewpoint");
Viewpoint23.DEF = "Scene_TopFrontCloseView";
Viewpoint23.description = "hanim_Head Top View";
Viewpoint23.position = new SFVec3f(new float[0,8,3]);
Viewpoint23.orientation = new SFRotation(new float[1,0,0,-1.100000024]);
browser.currentScene.children[10] = Viewpoint23;

let Group24 = browser.currentScene.createNode("Group");
Group24.DEF = "HAnimStage";
let Transform25 = browser.currentScene.createNode("Transform");
Transform25.DEF = "cordsysfloor";
Transform25.scale = new SFVec3f(new float[0.175,0.175,0.175]);
let Inline26 = browser.currentScene.createNode("Inline");
Inline26.url = new MFString(new java.lang.String["JointCoordinateAxes.x3dv"]);
Transform25.children = new MFNode();

Transform25.children[0] = Inline26;

Group24.children = new MFNode();

Group24.children[0] = Transform25;

let Transform27 = browser.currentScene.createNode("Transform");
Transform27.DEF = "StageGeometry";
Transform27.translation = new SFVec3f(new float[0,-0.01,0]);
Transform27.scale = new SFVec3f(new float[1,0.01,1]);
let Shape28 = browser.currentScene.createNode("Shape");
let Appearance29 = browser.currentScene.createNode("Appearance");
let Material30 = browser.currentScene.createNode("Material");
Material30.transparency = 0.6;
Appearance29.material = Material30;

Shape28.appearance = Appearance29;

let Box31 = browser.currentScene.createNode("Box");
Box31.size = new SFVec3f(new float[9,1,9]);
Shape28.geometry = Box31;

Transform27.child = new undefined();

Transform27.child[0] = Shape28;

let Transform32 = browser.currentScene.createNode("Transform");
Transform32.DEF = "Circle0";
let Shape33 = browser.currentScene.createNode("Shape");
let Appearance34 = browser.currentScene.createNode("Appearance");
Appearance34.DEF = "LineColor";
let Material35 = browser.currentScene.createNode("Material");
Material35.ambientIntensity = 1;
Material35.diffuseColor = new SFColor(new float[0.7,0,0.9]);
Material35.specularColor = new SFColor(new float[0,0,1]);
Material35.emissiveColor = new SFColor(new float[0.45,0.45,1]);
Material35.shininess = 1;
Appearance34.material = Material35;

Shape33.appearance = Appearance34;

let IndexedLineSet36 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet36.DEF = "Orbit1";
IndexedLineSet36.coordIndex = new MFInt32(new int[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1]);
let Coordinate37 = browser.currentScene.createNode("Coordinate");
Coordinate37.point = new MFVec3f(new float[1,0,0,0.995,0,-0.105,0.979,0,-0.208,0.951,0,-0.309,0.914,0,-0.407,0.866,0,-0.5,0.809,0,-0.588,0.743,0,-0.669,0.669,0,-0.743,0.588,0,-0.809,0.5,0,-0.866,0.407,0,-0.914,0.309,0,-0.951,0.208,0,-0.978,0.105,0,-0.995,0,0,-1,-0.105,0,-0.994522,-0.208,0,-0.978,-0.309,0,-0.951,-0.407,0,-0.914,-0.5,0,-0.866,-0.588,0,-0.809,-0.669,0,-0.743,-0.743,0,-0.669,-0.809,0,-0.588,-0.866,0,-0.5,-0.914,0,-0.407,-0.951,0,-0.309,-0.978,0,-0.208,-0.995,0,-0.105,-1,0,0,-0.995,0,0.105,-0.978,0,0.208,-0.951,0,0.309,-0.914,0,0.407,-0.866,0,0.5,-0.809,0,0.588,-0.743,0,0.669,-0.669,0,0.743,-0.588,0,0.809,-0.5,0,0.866,-0.407,0,0.914,-0.309,0,0.951,-0.208,0,0.978,-0.105,0,0.995,0,0,1,0.105,0,0.995,0.208,0,0.978,0.309,0,0.951,0.407,0,0.914,0.5,0,0.866,0.588,0,0.809,0.669,0,0.743,0.743,0,0.669,0.809,0,0.588,0.866,0,0.5,0.914,0,0.407,0.951,0,0.309,0.978,0,0.208,0.995,0,0.104,1,0,0]);
IndexedLineSet36.coord = Coordinate37;

Shape33.geometry = IndexedLineSet36;

Transform32.child = new undefined();

Transform32.child[0] = Shape33;

Transform27.children[1] = Transform32;

let Transform38 = browser.currentScene.createNode("Transform");
Transform38.DEF = "Circle1";
Transform38.scale = new SFVec3f(new float[0.5,1,0.5]);
let Shape39 = browser.currentScene.createNode("Shape");
let Appearance40 = browser.currentScene.createNode("Appearance");
Appearance40.USE = "LineColor";
Shape39.appearance = Appearance40;

let IndexedLineSet41 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet41.USE = "Orbit1";
Shape39.geometry = IndexedLineSet41;

Transform38.child = new undefined();

Transform38.child[0] = Shape39;

Transform27.children[2] = Transform38;

let Transform42 = browser.currentScene.createNode("Transform");
Transform42.DEF = "Circle2";
Transform42.scale = new SFVec3f(new float[0.25,1,0.25]);
let Shape43 = browser.currentScene.createNode("Shape");
let Appearance44 = browser.currentScene.createNode("Appearance");
Appearance44.USE = "LineColor";
Shape43.appearance = Appearance44;

let IndexedLineSet45 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet45.USE = "Orbit1";
Shape43.geometry = IndexedLineSet45;

Transform42.child = new undefined();

Transform42.child[0] = Shape43;

Transform27.children[3] = Transform42;

let Transform46 = browser.currentScene.createNode("Transform");
Transform46.DEF = "Circle3";
Transform46.scale = new SFVec3f(new float[2,1,2]);
let Shape47 = browser.currentScene.createNode("Shape");
let Appearance48 = browser.currentScene.createNode("Appearance");
Appearance48.USE = "LineColor";
Shape47.appearance = Appearance48;

let IndexedLineSet49 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet49.USE = "Orbit1";
Shape47.geometry = IndexedLineSet49;

Transform46.child = new undefined();

Transform46.child[0] = Shape47;

Transform27.children[4] = Transform46;

let Transform50 = browser.currentScene.createNode("Transform");
Transform50.DEF = "Circle4";
Transform50.scale = new SFVec3f(new float[3,1,3]);
let Shape51 = browser.currentScene.createNode("Shape");
let Appearance52 = browser.currentScene.createNode("Appearance");
Appearance52.USE = "LineColor";
Shape51.appearance = Appearance52;

let IndexedLineSet53 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet53.USE = "Orbit1";
Shape51.geometry = IndexedLineSet53;

Transform50.child = new undefined();

Transform50.child[0] = Shape51;

Transform27.children[5] = Transform50;

Group24.children[1] = Transform27;

browser.currentScene.children[11] = Group24;

