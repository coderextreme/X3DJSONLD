let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "filename";
meta2.content = "blenderLily.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "copyright";
meta3.content = "2023";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "reference";
meta4.content = "http://www.web3D.org";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "generator";
meta5.content = "Blender 3.6.4";
head1.meta[3] = meta5;

let component6 = browser.currentScene.createNode("component");
component6.name = "HAnim";
component6.level = 3;
head1.component[4] = component6;

head = head1;

let NavigationInfo8 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo8;

let Background9 = browser.currentScene.createNode("Background");
Background9.DEF = "WO_World";
Background9.skyColor = new MFColor(new float[0.05087609,0.05087609,0.05087609]);
Background9.groundColor = new MFColor(new float[0.05087609,0.05087609,0.05087609]);
browser.currentScene.children[1] = Background9;

let Transform10 = browser.currentScene.createNode("Transform");
let Shape11 = browser.currentScene.createNode("Shape");
Shape11.DEF = "SiteShape";
let Appearance12 = browser.currentScene.createNode("Appearance");
let Material13 = browser.currentScene.createNode("Material");
Material13.diffuseColor = new SFColor(new float[0,0,1]);
Appearance12.material = Material13;

Shape11.appearance = Appearance12;

let Box14 = browser.currentScene.createNode("Box");
Box14.size = new SFVec3f(new float[0.05,0.05,0.05]);
Shape11.geometry = Box14;

Transform10.child = new undefined();

Transform10.child[0] = Shape11;

browser.currentScene.children[2] = Transform10;

let Transform15 = browser.currentScene.createNode("Transform");
let Shape16 = browser.currentScene.createNode("Shape");
Shape16.DEF = "JointShape";
let Appearance17 = browser.currentScene.createNode("Appearance");
Appearance17.DEF = "JointAppearance";
let Material18 = browser.currentScene.createNode("Material");
Material18.diffuseColor = new SFColor(new float[1,0.5,0]);
Material18.transparency = 0.5;
Appearance17.material = Material18;

Shape16.appearance = Appearance17;

let Sphere19 = browser.currentScene.createNode("Sphere");
Sphere19.radius = 0.06;
Shape16.geometry = Sphere19;

Transform15.child = new undefined();

Transform15.child[0] = Shape16;

browser.currentScene.children[3] = Transform15;

let Transform20 = browser.currentScene.createNode("Transform");
Transform20.DEF = "Light_TRANSFORM";
Transform20.translation = new SFVec3f(new float[4.07625,1.00545,5.90386]);
Transform20.rotation = new SFRotation(new float[0.20594,0.33152,0.9207,1.92627]);
let PointLight21 = browser.currentScene.createNode("PointLight");
PointLight21.DEF = "LA_Light";
PointLight21.location = new SFVec3f(new float[-8.940697e-8,-3.576279e-7,4.61936e-7]);
PointLight21.radius = 29.99998;
Transform20.children = new MFNode();

Transform20.children[0] = PointLight21;

browser.currentScene.children[4] = Transform20;

let Transform22 = browser.currentScene.createNode("Transform");
Transform22.DEF = "Camera_TRANSFORM";
Transform22.translation = new SFVec3f(new float[7.35889,-6.92579,4.95831]);
Transform22.rotation = new SFRotation(new float[0.77344,0.33383,0.53884,1.35072]);
let Viewpoint23 = browser.currentScene.createNode("Viewpoint");
Viewpoint23.DEF = "CA_Camera";
Viewpoint23.position = new SFVec3f(new float[-3.92708e-7,-2.123415e-7,2.384186e-7]);
Viewpoint23.fieldOfView = 0.6911112;
Transform22.children = new MFNode();

Transform22.children[0] = Viewpoint23;

browser.currentScene.children[5] = Transform22;

let Transform24 = browser.currentScene.createNode("Transform");
Transform24.DEF = "Light_001_TRANSFORM";
Transform24.translation = new SFVec3f(new float[4.07625,1.00545,5.90386]);
Transform24.rotation = new SFRotation(new float[0.20594,0.33152,0.9207,1.92627]);
let PointLight25 = browser.currentScene.createNode("PointLight");
PointLight25.DEF = "LA_Light_001";
PointLight25.location = new SFVec3f(new float[2.980232e-8,-4.023314e-7,1.043081e-7]);
PointLight25.radius = 29.99998;
Transform24.children = new MFNode();

Transform24.children[0] = PointLight25;

browser.currentScene.children[6] = Transform24;

let Transform26 = browser.currentScene.createNode("Transform");
Transform26.DEF = "Camera_001_TRANSFORM";
Transform26.translation = new SFVec3f(new float[7.35889,-6.92579,4.95831]);
Transform26.rotation = new SFRotation(new float[0.77344,0.33383,0.53884,1.35072]);
let Viewpoint27 = browser.currentScene.createNode("Viewpoint");
Viewpoint27.DEF = "CA_Camera_001";
Viewpoint27.position = new SFVec3f(new float[-2.421449e-7,4.991889e-7,-7.152557e-7]);
Viewpoint27.fieldOfView = 0.6911112;
Transform26.children = new MFNode();

Transform26.children[0] = Viewpoint27;

browser.currentScene.children[7] = Transform26;

let Transform28 = browser.currentScene.createNode("Transform");
Transform28.DEF = "World_TRANSFORM";
Transform28.rotation = new SFRotation(new float[1,0,0,1.5708]);
Transform28.scale = new SFVec3f(new float[0.01,0.01,0.01]);
let Transform29 = browser.currentScene.createNode("Transform");
Transform29.DEF = "World_001_TRANSFORM";
let Transform30 = browser.currentScene.createNode("Transform");
Transform30.DEF = "lily_7_3_animate_TRANSFORM";
let Transform31 = browser.currentScene.createNode("Transform");
Transform31.DEF = "CINEMA_4D_Editor_TRANSFORM";
Transform31.translation = new SFVec3f(new float[-2.3832,26.84083,170.6878]);
Transform31.rotation = new SFRotation(new float[0.03965,0.99809,0.04742,1.39469]);
let Transform32 = browser.currentScene.createNode("Transform");
Transform32.DEF = "CINEMA_4D_Editor_001_TRANSFORM";
Transform32.translation = new SFVec3f(new float[0.00001,0,0]);
Transform32.rotation = new SFRotation(new float[0,-1,0,3.14159]);
let Viewpoint33 = browser.currentScene.createNode("Viewpoint");
Viewpoint33.DEF = "CA_CINEMA_4D_Editor_001";
Viewpoint33.position = new SFVec3f(new float[-0.00002747774,0.000004980713,-0.000003484735]);
Viewpoint33.fieldOfView = 0.9272952;
Transform32.children = new MFNode();

Transform32.children[0] = Viewpoint33;

Transform31.children = new MFNode();

Transform31.children[0] = Transform32;

Transform30.children = new MFNode();

Transform30.children[0] = Transform31;

let Transform34 = browser.currentScene.createNode("Transform");
Transform34.DEF = "node_t_Lily_RV7_Shape_TRANSFORM";
let Transform35 = browser.currentScene.createNode("Transform");
Transform35.DEF = "humanoid_root_TRANSFORM";
Transform35.translation = new SFVec3f(new float[0,-0.91969,0]);
Transform35.rotation = new SFRotation(new float[0,-1,0,1.5708]);
let HAnimHumanoid36 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid36.DEF = "hanim_armature_humanoid_root";
HAnimHumanoid36.name = "armature_humanoid_root";
Transform35.children = new MFNode();

Transform35.children[0] = HAnimHumanoid36;

Transform34.children = new MFNode();

Transform34.children[0] = Transform35;

Transform30.children[1] = Transform34;

Transform29.children = new MFNode();

Transform29.children[0] = Transform30;

Transform28.children = new MFNode();

Transform28.children[0] = Transform29;

let Transform37 = browser.currentScene.createNode("Transform");
Transform37.DEF = "Environment_TRANSFORM";
let Transform38 = browser.currentScene.createNode("Transform");
Transform38.DEF = "Sky_TRANSFORM";
Transform38.translation = new SFVec3f(new float[0,305,0]);
Transform38.rotation = new SFRotation(new float[1,0,0,3.14159]);
let PointLight39 = browser.currentScene.createNode("PointLight");
PointLight39.DEF = "LA_Sky";
PointLight39.intensity = 0.005714286;
PointLight39.location = new SFVec3f(new float[-9.59824e-19,-0.00003051758,-9.094947e-12]);
PointLight39.radius = 0.25;
Transform38.children = new MFNode();

Transform38.children[0] = PointLight39;

Transform37.children = new MFNode();

Transform37.children[0] = Transform38;

let Transform40 = browser.currentScene.createNode("Transform");
Transform40.DEF = "DistantLight_TRANSFORM";
Transform40.translation = new SFVec3f(new float[0,305,0]);
Transform40.rotation = new SFRotation(new float[-0.99144,0.13053,0,3.14159]);
let DirectionalLight41 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight41.DEF = "LA_DistantLight";
DirectionalLight41.global = True;
DirectionalLight41.intensity = 0.005714286;
DirectionalLight41.ambientIntensity = 0.07;
DirectionalLight41.direction = new SFVec3f(new float[5.329071e-15,-3.552714e-15,-1]);
Transform40.children = new MFNode();

Transform40.children[0] = DirectionalLight41;

Transform37.children[1] = Transform40;

Transform28.children[1] = Transform37;

browser.currentScene.children[8] = Transform28;

let Transform42 = browser.currentScene.createNode("Transform");
Transform42.DEF = "SkinnedMeshes_TRANSFORM";
Transform42.rotation = new SFRotation(new float[1,0,0,1.5708]);
Transform42.scale = new SFVec3f(new float[0.01,0.01,0.01]);
browser.currentScene.children[9] = Transform42;

