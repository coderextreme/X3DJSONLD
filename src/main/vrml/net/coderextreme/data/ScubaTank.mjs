let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interchange";
X3D0.version = "4.0";
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

head = head1;

let WorldInfo10 = browser.currentScene.createNode("WorldInfo");
WorldInfo10.title = "ScubaTank.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo10;

let Transform11 = browser.currentScene.createNode("Transform");
Transform11.DEF = "ScubaTank";
let Transform12 = browser.currentScene.createNode("Transform");
let Shape13 = browser.currentScene.createNode("Shape");
let Appearance14 = browser.currentScene.createNode("Appearance");
let Material15 = browser.currentScene.createNode("Material");
Material15.DEF = "tank";
Material15.ambientIntensity = 0.3;
Material15.diffuseColor = new SFColor(new float[0.3,0.3,0.5]);
Material15.specularColor = new SFColor(new float[0.7,0.7,0.8]);
Material15.shininess = 0.1;
Appearance14.material = Material15;

Shape13.appearance = Appearance14;

let Cylinder16 = browser.currentScene.createNode("Cylinder");
Cylinder16.height = 0.7;
Cylinder16.radius = 0.1;
Shape13.geometry = Cylinder16;

Transform12.child = new undefined();

Transform12.child[0] = Shape13;

Transform11.children = new MFNode();

Transform11.children[0] = Transform12;

let Transform17 = browser.currentScene.createNode("Transform");
Transform17.translation = new SFVec3f(new float[0,0.35,0]);
let Shape18 = browser.currentScene.createNode("Shape");
let Appearance19 = browser.currentScene.createNode("Appearance");
let Material20 = browser.currentScene.createNode("Material");
Material20.USE = "tank";
Appearance19.material = Material20;

Shape18.appearance = Appearance19;

let Sphere21 = browser.currentScene.createNode("Sphere");
Sphere21.radius = 0.098;
Shape18.geometry = Sphere21;

Transform17.child = new undefined();

Transform17.child[0] = Shape18;

Transform11.children[1] = Transform17;

let Transform22 = browser.currentScene.createNode("Transform");
Transform22.translation = new SFVec3f(new float[0,-0.35,0]);
let Shape23 = browser.currentScene.createNode("Shape");
Shape23.DEF = "tankBottom";
let Appearance24 = browser.currentScene.createNode("Appearance");
let Material25 = browser.currentScene.createNode("Material");
Material25.DEF = "black";
Material25.ambientIntensity = 0.3;
Material25.diffuseColor = new SFColor(new float[0,0,0]);
Appearance24.material = Material25;

Shape23.appearance = Appearance24;

let Cylinder26 = browser.currentScene.createNode("Cylinder");
Cylinder26.height = 0.06;
Cylinder26.radius = 0.115;
Shape23.geometry = Cylinder26;

Transform22.child = new undefined();

Transform22.child[0] = Shape23;

Transform11.children[2] = Transform22;

let Group27 = browser.currentScene.createNode("Group");
Group27.DEF = "tankNozzle";
let Transform28 = browser.currentScene.createNode("Transform");
let Transform29 = browser.currentScene.createNode("Transform");
Transform29.translation = new SFVec3f(new float[0,0.45,0]);
let Shape30 = browser.currentScene.createNode("Shape");
Shape30.DEF = "pressure";
let Appearance31 = browser.currentScene.createNode("Appearance");
let Material32 = browser.currentScene.createNode("Material");
Material32.DEF = "pressureColor";
Material32.ambientIntensity = 0.4;
Material32.diffuseColor = new SFColor(new float[0.91,0.91,0.91]);
Material32.specularColor = new SFColor(new float[0.91,0.9,0.91]);
Material32.shininess = 0.16;
Appearance31.material = Material32;

Shape30.appearance = Appearance31;

let Cylinder33 = browser.currentScene.createNode("Cylinder");
Cylinder33.height = 0.1;
Cylinder33.radius = 0.015;
Shape30.geometry = Cylinder33;

Transform29.child = new undefined();

Transform29.child[0] = Shape30;

Transform28.children = new MFNode();

Transform28.children[0] = Transform29;

let Transform34 = browser.currentScene.createNode("Transform");
Transform34.translation = new SFVec3f(new float[0,0.5,0]);
let Shape35 = browser.currentScene.createNode("Shape");
Shape35.DEF = "pressureTop";
let Appearance36 = browser.currentScene.createNode("Appearance");
let Material37 = browser.currentScene.createNode("Material");
Material37.USE = "black";
Appearance36.material = Material37;

Shape35.appearance = Appearance36;

let Cylinder38 = browser.currentScene.createNode("Cylinder");
Cylinder38.height = 0.02;
Cylinder38.radius = 0.025;
Shape35.geometry = Cylinder38;

Transform34.child = new undefined();

Transform34.child[0] = Shape35;

Transform28.children[1] = Transform34;

let Transform39 = browser.currentScene.createNode("Transform");
Transform39.translation = new SFVec3f(new float[-0.028,0.462,0]);
Transform39.rotation = new SFRotation(new float[0,0,1,1.57]);
let Transform40 = browser.currentScene.createNode("Transform");
let Shape41 = browser.currentScene.createNode("Shape");
Shape41.DEF = "connectorToRegulator";
let Appearance42 = browser.currentScene.createNode("Appearance");
let Material43 = browser.currentScene.createNode("Material");
Material43.USE = "pressureColor";
Appearance42.material = Material43;

Shape41.appearance = Appearance42;

let Cylinder44 = browser.currentScene.createNode("Cylinder");
Cylinder44.height = 0.03;
Cylinder44.radius = 0.01;
Shape41.geometry = Cylinder44;

Transform40.child = new undefined();

Transform40.child[0] = Shape41;

Transform39.children = new MFNode();

Transform39.children[0] = Transform40;

let Transform45 = browser.currentScene.createNode("Transform");
Transform45.translation = new SFVec3f(new float[0,0.02,0]);
let Shape46 = browser.currentScene.createNode("Shape");
Shape46.DEF = "connectorToRegulatorTop";
let Appearance47 = browser.currentScene.createNode("Appearance");
let Material48 = browser.currentScene.createNode("Material");
Material48.USE = "black";
Appearance47.material = Material48;

Shape46.appearance = Appearance47;

let Cylinder49 = browser.currentScene.createNode("Cylinder");
Cylinder49.height = 0.02;
Cylinder49.radius = 0.02;
Shape46.geometry = Cylinder49;

Transform45.child = new undefined();

Transform45.child[0] = Shape46;

Transform39.children[1] = Transform45;

Transform28.children[2] = Transform39;

Group27.children = new MFNode();

Group27.children[0] = Transform28;

Transform11.children[3] = Group27;

let Transform50 = browser.currentScene.createNode("Transform");
Transform50.translation = new SFVec3f(new float[0,0.2,0]);
let Shape51 = browser.currentScene.createNode("Shape");
Shape51.DEF = "tankHoldBelt";
let Appearance52 = browser.currentScene.createNode("Appearance");
let Material53 = browser.currentScene.createNode("Material");
Material53.USE = "black";
Appearance52.material = Material53;

Shape51.appearance = Appearance52;

let Cylinder54 = browser.currentScene.createNode("Cylinder");
Cylinder54.height = 0.1;
Cylinder54.radius = 0.115;
Shape51.geometry = Cylinder54;

Transform50.child = new undefined();

Transform50.child[0] = Shape51;

Transform11.children[4] = Transform50;

browser.currentScene.children[1] = Transform11;

let Background55 = browser.currentScene.createNode("Background");
Background55.skyColor = new MFColor(new float[0.6,0.6,0.6]);
browser.currentScene.children[2] = Background55;

