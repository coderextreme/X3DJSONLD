let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interchange";
X3D0.version = "3.3";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "ScubaTank.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let Transform3 = browser.currentScene.createNode("Transform");
Transform3.DEF = "ScubaTank";
let Transform4 = browser.currentScene.createNode("Transform");
let Shape5 = browser.currentScene.createNode("Shape");
let Appearance6 = browser.currentScene.createNode("Appearance");
let Material7 = browser.currentScene.createNode("Material");
Material7.DEF = "tank";
Material7.ambientIntensity = 0.3;
Material7.diffuseColor = new SFColor(new float[0.3,0.3,0.5]);
Material7.shininess = 0.1;
Material7.specularColor = new SFColor(new float[0.7,0.7,0.8]);
Appearance6.material = Material7;

Shape5.appearance = Appearance6;

let Cylinder8 = browser.currentScene.createNode("Cylinder");
Cylinder8.height = 0.7;
Cylinder8.radius = 0.1;
Shape5.geometry = Cylinder8;

Transform4.children = new MFNode();

Transform4.children[0] = Shape5;

Transform3.children = new MFNode();

Transform3.children[0] = Transform4;

let Transform9 = browser.currentScene.createNode("Transform");
Transform9.translation = new SFVec3f(new float[0,0.35,0]);
let Shape10 = browser.currentScene.createNode("Shape");
let Appearance11 = browser.currentScene.createNode("Appearance");
let Material12 = browser.currentScene.createNode("Material");
Material12.USE = "tank";
Appearance11.material = Material12;

Shape10.appearance = Appearance11;

let Sphere13 = browser.currentScene.createNode("Sphere");
Sphere13.radius = 0.098;
Shape10.geometry = Sphere13;

Transform9.children = new MFNode();

Transform9.children[0] = Shape10;

Transform3.children[1] = Transform9;

let Transform14 = browser.currentScene.createNode("Transform");
Transform14.translation = new SFVec3f(new float[0,-0.35,0]);
let Shape15 = browser.currentScene.createNode("Shape");
Shape15.DEF = "tankBottom";
let Appearance16 = browser.currentScene.createNode("Appearance");
let Material17 = browser.currentScene.createNode("Material");
Material17.DEF = "black";
Material17.ambientIntensity = 0.3;
Material17.diffuseColor = new SFColor(new float[0,0,0]);
Appearance16.material = Material17;

Shape15.appearance = Appearance16;

let Cylinder18 = browser.currentScene.createNode("Cylinder");
Cylinder18.height = 0.06;
Cylinder18.radius = 0.115;
Shape15.geometry = Cylinder18;

Transform14.children = new MFNode();

Transform14.children[0] = Shape15;

Transform3.children[2] = Transform14;

let Group19 = browser.currentScene.createNode("Group");
Group19.DEF = "tankNozzle";
let Transform20 = browser.currentScene.createNode("Transform");
let Transform21 = browser.currentScene.createNode("Transform");
Transform21.translation = new SFVec3f(new float[0,0.45,0]);
let Shape22 = browser.currentScene.createNode("Shape");
Shape22.DEF = "pressure";
let Appearance23 = browser.currentScene.createNode("Appearance");
let Material24 = browser.currentScene.createNode("Material");
Material24.DEF = "pressureColor";
Material24.ambientIntensity = 0.4;
Material24.diffuseColor = new SFColor(new float[0.91,0.91,0.91]);
Material24.shininess = 0.16;
Material24.specularColor = new SFColor(new float[0.91,0.9,0.91]);
Appearance23.material = Material24;

Shape22.appearance = Appearance23;

let Cylinder25 = browser.currentScene.createNode("Cylinder");
Cylinder25.height = 0.1;
Cylinder25.radius = 0.015;
Shape22.geometry = Cylinder25;

Transform21.children = new MFNode();

Transform21.children[0] = Shape22;

Transform20.children = new MFNode();

Transform20.children[0] = Transform21;

let Transform26 = browser.currentScene.createNode("Transform");
Transform26.translation = new SFVec3f(new float[0,0.5,0]);
let Shape27 = browser.currentScene.createNode("Shape");
Shape27.DEF = "pressureTop";
let Appearance28 = browser.currentScene.createNode("Appearance");
let Material29 = browser.currentScene.createNode("Material");
Material29.USE = "black";
Appearance28.material = Material29;

Shape27.appearance = Appearance28;

let Cylinder30 = browser.currentScene.createNode("Cylinder");
Cylinder30.height = 0.02;
Cylinder30.radius = 0.025;
Shape27.geometry = Cylinder30;

Transform26.children = new MFNode();

Transform26.children[0] = Shape27;

Transform20.children[1] = Transform26;

let Transform31 = browser.currentScene.createNode("Transform");
Transform31.rotation = new SFRotation(new float[0,0,1,1.57]);
Transform31.translation = new SFVec3f(new float[-0.028,0.462,0]);
let Transform32 = browser.currentScene.createNode("Transform");
let Shape33 = browser.currentScene.createNode("Shape");
Shape33.DEF = "connectorToRegulator";
let Appearance34 = browser.currentScene.createNode("Appearance");
let Material35 = browser.currentScene.createNode("Material");
Material35.USE = "pressureColor";
Appearance34.material = Material35;

Shape33.appearance = Appearance34;

let Cylinder36 = browser.currentScene.createNode("Cylinder");
Cylinder36.height = 0.03;
Cylinder36.radius = 0.01;
Shape33.geometry = Cylinder36;

Transform32.children = new MFNode();

Transform32.children[0] = Shape33;

Transform31.children = new MFNode();

Transform31.children[0] = Transform32;

let Transform37 = browser.currentScene.createNode("Transform");
Transform37.translation = new SFVec3f(new float[0,0.02,0]);
let Shape38 = browser.currentScene.createNode("Shape");
Shape38.DEF = "connectorToRegulatorTop";
let Appearance39 = browser.currentScene.createNode("Appearance");
let Material40 = browser.currentScene.createNode("Material");
Material40.USE = "black";
Appearance39.material = Material40;

Shape38.appearance = Appearance39;

let Cylinder41 = browser.currentScene.createNode("Cylinder");
Cylinder41.height = 0.02;
Cylinder41.radius = 0.02;
Shape38.geometry = Cylinder41;

Transform37.children = new MFNode();

Transform37.children[0] = Shape38;

Transform31.children[1] = Transform37;

Transform20.children[2] = Transform31;

Group19.children = new MFNode();

Group19.children[0] = Transform20;

Transform3.children[3] = Group19;

let Transform42 = browser.currentScene.createNode("Transform");
Transform42.translation = new SFVec3f(new float[0,0.2,0]);
let Shape43 = browser.currentScene.createNode("Shape");
Shape43.DEF = "tankHoldBelt";
let Appearance44 = browser.currentScene.createNode("Appearance");
let Material45 = browser.currentScene.createNode("Material");
Material45.USE = "black";
Appearance44.material = Material45;

Shape43.appearance = Appearance44;

let Cylinder46 = browser.currentScene.createNode("Cylinder");
Cylinder46.height = 0.1;
Cylinder46.radius = 0.115;
Shape43.geometry = Cylinder46;

Transform42.children = new MFNode();

Transform42.children[0] = Shape43;

Transform3.children[4] = Transform42;

browser.currentScene.children[1] = Transform3;

let Background47 = browser.currentScene.createNode("Background");
Background47.skyColor = new MFColor(new float[0.6,0.6,0.6]);
browser.currentScene.children[2] = Background47;

