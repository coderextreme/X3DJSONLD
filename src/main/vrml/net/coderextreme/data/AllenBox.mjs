const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "AllenBox.x3d");
scene.addMetaData("creator", "Allen Box");
scene.addMetaData("created", "8 July 2025");
scene.addMetaData("license", "../license.html");
await browser .loadComponents (scene);
let WorldInfo7 = browser.currentScene.createNode("WorldInfo");
WorldInfo7.title = "AllenBox.x3d";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo7;

let NavigationInfo8 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo8.avatarSize = new X3D.MFFloat([0.15,1.53,0.75]);
NavigationInfo8.speed = 0.5;
NavigationInfo8.type = new X3D.MFString([new X3D.SFString("EXAMINE")]);
browser.currentScene.children[1] = NavigationInfo8;

let Transform9 = browser.currentScene.createNode("Transform");
Transform9.DEF = "Floor";
Transform9.scale = new X3D.SFVec3f([1,0.0125,1]);
Transform9.translation = new X3D.SFVec3f([0,-0.0125,0]);
let Shape10 = browser.currentScene.createNode("Shape");
let Box11 = browser.currentScene.createNode("Box");
geometry = Box11;

let Appearance12 = browser.currentScene.createNode("Appearance");
let Material13 = browser.currentScene.createNode("Material");
material = Material13;

appearance = Appearance12;

Transform9YYY.child = new X3D.undefined();

Transform9ZZZ.child[0] = Shape10;

browser.currentScene.children[2] = Transform9;

}
main ();
