const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "ThreeInARow.x3d");
scene.addMetaData("creator", "John Carlson");
scene.addMetaData("generator", "manual");
scene.addMetaData("identifier", "https://coderextreme.net/X3DJSONLD/src/main/data/ThreeInARow.x3d");
scene.addMetaData("description", "3 boxes");
await browser .loadComponents (scene);
let NavigationInfo8 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo8.type = new X3D.MFString([new X3D.SFString("EXAMINE")]);
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = NavigationInfo8;

let Viewpoint9 = browser.currentScene.createNode("Viewpoint");
Viewpoint9.description = "Cubes";
Viewpoint9.position = new X3D.SFVec3f([0,0,12]);
browser.currentScene.children[1] = Viewpoint9;

let Transform10 = browser.currentScene.createNode("Transform");
Transform10.DEF = "first";
Transform10.translation = new X3D.SFVec3f([0,2,0]);
let Shape11 = browser.currentScene.createNode("Shape");
Shape11.DEF = "ball";
let Sphere12 = browser.currentScene.createNode("Sphere");
geometry = Sphere12;

let Appearance13 = browser.currentScene.createNode("Appearance");
let Material14 = browser.currentScene.createNode("Material");
Material14.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material14;

appearance = Appearance13;

Transform10YYY.child = new X3D.undefined();

Transform10ZZZ.child[0] = Shape11;

browser.currentScene.children[2] = Transform10;

let Transform15 = browser.currentScene.createNode("Transform");
let Shape16 = browser.currentScene.createNode("Shape");
Shape16.USE = "ball";
Transform15YYY.child = new X3D.undefined();

Transform15ZZZ.child[0] = Shape16;

browser.currentScene.children[3] = Transform15;

let Transform17 = browser.currentScene.createNode("Transform");
Transform17.translation = new X3D.SFVec3f([0,-2,0]);
let Shape18 = browser.currentScene.createNode("Shape");
Shape18.USE = "ball";
Transform17YYY.child = new X3D.undefined();

Transform17ZZZ.child[0] = Shape18;

browser.currentScene.children[4] = Transform17;

}
main ();
