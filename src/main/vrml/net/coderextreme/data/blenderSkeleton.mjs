let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "filename";
meta2.content = "blenderSkeleton.x3d";
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
Transform24.DEF = "Humanoid_collection_TRANSFORM";
let HAnimHumanoid25 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid25.DEF = "hanim_armature_Humanoid_collection";
HAnimHumanoid25.name = "armature_Humanoid_collection";
Transform24.children = new MFNode();

Transform24.children[0] = HAnimHumanoid25;

browser.currentScene.children[6] = Transform24;

