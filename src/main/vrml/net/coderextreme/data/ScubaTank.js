let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interchange";
X3D0.version = "3.3";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "ScubaTank.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "description";
meta3.content = "Scuba gear used by Nancy Diving example.";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "creator";
meta4.content = "Etsuko Lippi";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "created";
meta5.content = "24 January 2001";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "modified";
meta6.content = "23 May 2020";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "identifier";
meta7.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/ScubaTank.x3d";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "generator";
meta8.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "license";
meta9.content = "../license.html";
head1.meta[7] = meta9;

head = head1;

let WorldInfo11 = browser.currentScene.createNode("WorldInfo");
WorldInfo11.title = "ScubaTank.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo11;

let Transform12 = browser.currentScene.createNode("Transform");
Transform12.DEF = "ScubaTank";
let Transform13 = browser.currentScene.createNode("Transform");
let Shape14 = browser.currentScene.createNode("Shape");
let Appearance15 = browser.currentScene.createNode("Appearance");
let Material16 = browser.currentScene.createNode("Material");
Material16.DEF = "tank";
Material16.ambientIntensity = 0.3;
Material16.diffuseColor = new SFColor(new float[0.3,0.3,0.5]);
Material16.shininess = 0.1;
Material16.specularColor = new SFColor(new float[0.7,0.7,0.8]);
Appearance15.material = Material16;

Shape14.appearance = Appearance15;

let Cylinder17 = browser.currentScene.createNode("Cylinder");
Cylinder17.height = 0.7;
Cylinder17.radius = 0.1;
Shape14.geometry = Cylinder17;

Transform13.children = new MFNode();

Transform13.children[0] = Shape14;

Transform12.children = new MFNode();

Transform12.children[0] = Transform13;

let Transform18 = browser.currentScene.createNode("Transform");
Transform18.translation = new SFVec3f(new float[0,0.35,0]);
let Shape19 = browser.currentScene.createNode("Shape");
let Appearance20 = browser.currentScene.createNode("Appearance");
let Material21 = browser.currentScene.createNode("Material");
Material21.USE = "tank";
Appearance20.material = Material21;

Shape19.appearance = Appearance20;

let Sphere22 = browser.currentScene.createNode("Sphere");
Sphere22.radius = 0.098;
Shape19.geometry = Sphere22;

Transform18.children = new MFNode();

Transform18.children[0] = Shape19;

Transform12.children[1] = Transform18;

let Transform23 = browser.currentScene.createNode("Transform");
Transform23.translation = new SFVec3f(new float[0,-0.35,0]);
let Shape24 = browser.currentScene.createNode("Shape");
Shape24.DEF = "tankBottom";
let Appearance25 = browser.currentScene.createNode("Appearance");
let Material26 = browser.currentScene.createNode("Material");
Material26.DEF = "black";
Material26.ambientIntensity = 0.3;
Material26.diffuseColor = new SFColor(new float[0,0,0]);
Appearance25.material = Material26;

Shape24.appearance = Appearance25;

let Cylinder27 = browser.currentScene.createNode("Cylinder");
Cylinder27.height = 0.06;
Cylinder27.radius = 0.115;
Shape24.geometry = Cylinder27;

Transform23.children = new MFNode();

Transform23.children[0] = Shape24;

Transform12.children[2] = Transform23;

let Group28 = browser.currentScene.createNode("Group");
Group28.DEF = "tankNozzle";
let Transform29 = browser.currentScene.createNode("Transform");
let Transform30 = browser.currentScene.createNode("Transform");
Transform30.translation = new SFVec3f(new float[0,0.45,0]);
let Shape31 = browser.currentScene.createNode("Shape");
Shape31.DEF = "pressure";
let Appearance32 = browser.currentScene.createNode("Appearance");
let Material33 = browser.currentScene.createNode("Material");
Material33.DEF = "pressureColor";
Material33.ambientIntensity = 0.4;
Material33.diffuseColor = new SFColor(new float[0.91,0.91,0.91]);
Material33.shininess = 0.16;
Material33.specularColor = new SFColor(new float[0.91,0.9,0.91]);
Appearance32.material = Material33;

Shape31.appearance = Appearance32;

let Cylinder34 = browser.currentScene.createNode("Cylinder");
Cylinder34.height = 0.1;
Cylinder34.radius = 0.015;
Shape31.geometry = Cylinder34;

Transform30.children = new MFNode();

Transform30.children[0] = Shape31;

Transform29.children = new MFNode();

Transform29.children[0] = Transform30;

let Transform35 = browser.currentScene.createNode("Transform");
Transform35.translation = new SFVec3f(new float[0,0.5,0]);
let Shape36 = browser.currentScene.createNode("Shape");
Shape36.DEF = "pressureTop";
let Appearance37 = browser.currentScene.createNode("Appearance");
let Material38 = browser.currentScene.createNode("Material");
Material38.USE = "black";
Appearance37.material = Material38;

Shape36.appearance = Appearance37;

let Cylinder39 = browser.currentScene.createNode("Cylinder");
Cylinder39.height = 0.02;
Cylinder39.radius = 0.025;
Shape36.geometry = Cylinder39;

Transform35.children = new MFNode();

Transform35.children[0] = Shape36;

Transform29.children[1] = Transform35;

let Transform40 = browser.currentScene.createNode("Transform");
Transform40.rotation = new SFRotation(new float[0,0,1,1.57]);
Transform40.translation = new SFVec3f(new float[-0.028,0.462,0]);
let Transform41 = browser.currentScene.createNode("Transform");
let Shape42 = browser.currentScene.createNode("Shape");
Shape42.DEF = "connectorToRegulator";
let Appearance43 = browser.currentScene.createNode("Appearance");
let Material44 = browser.currentScene.createNode("Material");
Material44.USE = "pressureColor";
Appearance43.material = Material44;

Shape42.appearance = Appearance43;

let Cylinder45 = browser.currentScene.createNode("Cylinder");
Cylinder45.height = 0.03;
Cylinder45.radius = 0.01;
Shape42.geometry = Cylinder45;

Transform41.children = new MFNode();

Transform41.children[0] = Shape42;

Transform40.children = new MFNode();

Transform40.children[0] = Transform41;

let Transform46 = browser.currentScene.createNode("Transform");
Transform46.translation = new SFVec3f(new float[0,0.02,0]);
let Shape47 = browser.currentScene.createNode("Shape");
Shape47.DEF = "connectorToRegulatorTop";
let Appearance48 = browser.currentScene.createNode("Appearance");
let Material49 = browser.currentScene.createNode("Material");
Material49.USE = "black";
Appearance48.material = Material49;

Shape47.appearance = Appearance48;

let Cylinder50 = browser.currentScene.createNode("Cylinder");
Cylinder50.height = 0.02;
Cylinder50.radius = 0.02;
Shape47.geometry = Cylinder50;

Transform46.children = new MFNode();

Transform46.children[0] = Shape47;

Transform40.children[1] = Transform46;

Transform29.children[2] = Transform40;

Group28.children = new MFNode();

Group28.children[0] = Transform29;

Transform12.children[3] = Group28;

let Transform51 = browser.currentScene.createNode("Transform");
Transform51.translation = new SFVec3f(new float[0,0.2,0]);
let Shape52 = browser.currentScene.createNode("Shape");
Shape52.DEF = "tankHoldBelt";
let Appearance53 = browser.currentScene.createNode("Appearance");
let Material54 = browser.currentScene.createNode("Material");
Material54.USE = "black";
Appearance53.material = Material54;

Shape52.appearance = Appearance53;

let Cylinder55 = browser.currentScene.createNode("Cylinder");
Cylinder55.height = 0.1;
Cylinder55.radius = 0.115;
Shape52.geometry = Cylinder55;

Transform51.children = new MFNode();

Transform51.children[0] = Shape52;

Transform12.children[4] = Transform51;

browser.currentScene.children[1] = Transform12;

let Background56 = browser.currentScene.createNode("Background");
Background56.skyColor = new MFColor(new float[0.6,0.6,0.6]);
browser.currentScene.children[2] = Background56;

