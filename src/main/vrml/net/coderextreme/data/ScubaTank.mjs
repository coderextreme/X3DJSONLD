const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Interchange"));
scene.addMetaData("title", "ScubaTank.x3d");
scene.addMetaData("description", "Scuba gear used by Nancy Diving example.");
scene.addMetaData("creator", "Etsuko Lippi");
scene.addMetaData("created", "24 January 2001");
scene.addMetaData("modified", "23 May 2020");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/ScubaTank.x3d");
scene.addMetaData("generator", "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
scene.addMetaData("license", "../license.html");
await browser .loadComponents (scene);
let WorldInfo11 = browser.currentScene.createNode("WorldInfo");
WorldInfo11.title = "ScubaTank.x3d";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo11;

let Transform12 = browser.currentScene.createNode("Transform");
Transform12.DEF = "ScubaTank";
let Transform13 = browser.currentScene.createNode("Transform");
let Shape14 = browser.currentScene.createNode("Shape");
let Appearance15 = browser.currentScene.createNode("Appearance");
let Material16 = browser.currentScene.createNode("Material");
Material16.DEF = "tank";
Material16.ambientIntensity = 0.3;
Material16.diffuseColor = new X3D.SFColor([0.3,0.3,0.5]);
Material16.shininess = 0.1;
Material16.specularColor = new X3D.SFColor([0.7,0.7,0.8]);
material = Material16;

appearance = Appearance15;

let Cylinder17 = browser.currentScene.createNode("Cylinder");
Cylinder17.height = 0.7;
Cylinder17.radius = 0.1;
geometry = Cylinder17;

Transform13YYY.child = new X3D.undefined();

Transform13ZZZ.child[0] = Shape14;

Transform12YYY.children = new X3D.MFNode();

Transform12ZZZ.children[0] = Transform13;

let Transform18 = browser.currentScene.createNode("Transform");
Transform18.translation = new X3D.SFVec3f([0,0.35,0]);
let Shape19 = browser.currentScene.createNode("Shape");
let Appearance20 = browser.currentScene.createNode("Appearance");
let Material21 = browser.currentScene.createNode("Material");
Material21.USE = "tank";
material = Material21;

appearance = Appearance20;

let Sphere22 = browser.currentScene.createNode("Sphere");
Sphere22.radius = 0.098;
geometry = Sphere22;

Transform18YYY.child = new X3D.undefined();

Transform18ZZZ.child[0] = Shape19;

Transform12ZZZ.children[1] = Transform18;

let Transform23 = browser.currentScene.createNode("Transform");
Transform23.translation = new X3D.SFVec3f([0,-0.35,0]);
let Shape24 = browser.currentScene.createNode("Shape");
Shape24.DEF = "tankBottom";
let Appearance25 = browser.currentScene.createNode("Appearance");
let Material26 = browser.currentScene.createNode("Material");
Material26.DEF = "black";
Material26.ambientIntensity = 0.3;
Material26.diffuseColor = new X3D.SFColor([0,0,0]);
material = Material26;

appearance = Appearance25;

let Cylinder27 = browser.currentScene.createNode("Cylinder");
Cylinder27.height = 0.06;
Cylinder27.radius = 0.115;
geometry = Cylinder27;

Transform23YYY.child = new X3D.undefined();

Transform23ZZZ.child[0] = Shape24;

Transform12ZZZ.children[2] = Transform23;

let Group28 = browser.currentScene.createNode("Group");
Group28.DEF = "tankNozzle";
let Transform29 = browser.currentScene.createNode("Transform");
let Transform30 = browser.currentScene.createNode("Transform");
Transform30.translation = new X3D.SFVec3f([0,0.45,0]);
let Shape31 = browser.currentScene.createNode("Shape");
Shape31.DEF = "pressure";
let Appearance32 = browser.currentScene.createNode("Appearance");
let Material33 = browser.currentScene.createNode("Material");
Material33.DEF = "pressureColor";
Material33.ambientIntensity = 0.4;
Material33.diffuseColor = new X3D.SFColor([0.91,0.91,0.91]);
Material33.shininess = 0.16;
Material33.specularColor = new X3D.SFColor([0.91,0.9,0.91]);
material = Material33;

appearance = Appearance32;

let Cylinder34 = browser.currentScene.createNode("Cylinder");
Cylinder34.height = 0.1;
Cylinder34.radius = 0.015;
geometry = Cylinder34;

Transform30YYY.child = new X3D.undefined();

Transform30ZZZ.child[0] = Shape31;

Transform29YYY.children = new X3D.MFNode();

Transform29ZZZ.children[0] = Transform30;

let Transform35 = browser.currentScene.createNode("Transform");
Transform35.translation = new X3D.SFVec3f([0,0.5,0]);
let Shape36 = browser.currentScene.createNode("Shape");
Shape36.DEF = "pressureTop";
let Appearance37 = browser.currentScene.createNode("Appearance");
let Material38 = browser.currentScene.createNode("Material");
Material38.USE = "black";
material = Material38;

appearance = Appearance37;

let Cylinder39 = browser.currentScene.createNode("Cylinder");
Cylinder39.height = 0.02;
Cylinder39.radius = 0.025;
geometry = Cylinder39;

Transform35YYY.child = new X3D.undefined();

Transform35ZZZ.child[0] = Shape36;

Transform29ZZZ.children[1] = Transform35;

let Transform40 = browser.currentScene.createNode("Transform");
Transform40.rotation = new X3D.SFRotation([0,0,1,1.57]);
Transform40.translation = new X3D.SFVec3f([-0.028,0.462,0]);
let Transform41 = browser.currentScene.createNode("Transform");
let Shape42 = browser.currentScene.createNode("Shape");
Shape42.DEF = "connectorToRegulator";
let Appearance43 = browser.currentScene.createNode("Appearance");
let Material44 = browser.currentScene.createNode("Material");
Material44.USE = "pressureColor";
material = Material44;

appearance = Appearance43;

let Cylinder45 = browser.currentScene.createNode("Cylinder");
Cylinder45.height = 0.03;
Cylinder45.radius = 0.01;
geometry = Cylinder45;

Transform41YYY.child = new X3D.undefined();

Transform41ZZZ.child[0] = Shape42;

Transform40YYY.children = new X3D.MFNode();

Transform40ZZZ.children[0] = Transform41;

let Transform46 = browser.currentScene.createNode("Transform");
Transform46.translation = new X3D.SFVec3f([0,0.02,0]);
let Shape47 = browser.currentScene.createNode("Shape");
Shape47.DEF = "connectorToRegulatorTop";
let Appearance48 = browser.currentScene.createNode("Appearance");
let Material49 = browser.currentScene.createNode("Material");
Material49.USE = "black";
material = Material49;

appearance = Appearance48;

let Cylinder50 = browser.currentScene.createNode("Cylinder");
Cylinder50.height = 0.02;
Cylinder50.radius = 0.02;
geometry = Cylinder50;

Transform46YYY.child = new X3D.undefined();

Transform46ZZZ.child[0] = Shape47;

Transform40ZZZ.children[1] = Transform46;

Transform29ZZZ.children[2] = Transform40;

Group28YYY.children = new X3D.MFNode();

Group28ZZZ.children[0] = Transform29;

Transform12ZZZ.children[3] = Group28;

let Transform51 = browser.currentScene.createNode("Transform");
Transform51.translation = new X3D.SFVec3f([0,0.2,0]);
let Shape52 = browser.currentScene.createNode("Shape");
Shape52.DEF = "tankHoldBelt";
let Appearance53 = browser.currentScene.createNode("Appearance");
let Material54 = browser.currentScene.createNode("Material");
Material54.USE = "black";
material = Material54;

appearance = Appearance53;

let Cylinder55 = browser.currentScene.createNode("Cylinder");
Cylinder55.height = 0.1;
Cylinder55.radius = 0.115;
geometry = Cylinder55;

Transform51YYY.child = new X3D.undefined();

Transform51ZZZ.child[0] = Shape52;

Transform12ZZZ.children[4] = Transform51;

browser.currentScene.children[1] = Transform12;

let Background56 = browser.currentScene.createNode("Background");
Background56.skyColor = new X3D.MFColor([0.6,0.6,0.6]);
browser.currentScene.children[2] = Background56;

}
main ();
