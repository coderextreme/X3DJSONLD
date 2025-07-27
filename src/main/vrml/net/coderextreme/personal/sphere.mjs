const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Interchange"));
scene .addComponent (browser .getComponent ("Scripting", 1));
scene.addMetaData("title", "sphere.x3d");
scene.addMetaData("creator", "John Carlson");
scene.addMetaData("generator", "manual");
scene.addMetaData("identifier", "https://coderextreme.net/X3DJSONLD/src/main/personal/sphere.x3d");
scene.addMetaData("description", "a sphere");
await browser .loadComponents (scene);
let Group9 = browser.currentScene.createNode("Group");
let Shape10 = browser.currentScene.createNode("Shape");
let Appearance11 = browser.currentScene.createNode("Appearance");
let Material12 = browser.currentScene.createNode("Material");
Material12.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material12;

appearance = Appearance11;

let Sphere13 = browser.currentScene.createNode("Sphere");
geometry = Sphere13;

Group9YYY.children = new X3D.MFNode();

Group9ZZZ.children[0] = Shape10;

browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = Group9;

}
main ();
