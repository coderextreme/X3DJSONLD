const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "app.x3d");
scene.addMetaData("creator", "Carlson, I");
scene.addMetaData("creator", "Carlson, II");
scene.addMetaData("creator", "Carlson, III");
await browser .loadComponents (scene);
let Group7 = browser.currentScene.createNode("Group");
let Shape8 = browser.currentScene.createNode("Shape");
let Appearance9 = browser.currentScene.createNode("Appearance");
let Material10 = browser.currentScene.createNode("Material");
Material10.diffuseColor = new X3D.SFColor([1,0,0]);
material = Material10;

appearance = Appearance9;

let Box11 = browser.currentScene.createNode("Box");
geometry = Box11;

Group7YYY.children = new X3D.MFNode();

Group7ZZZ.children[0] = Shape8;

browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = Group7;

let Transform12 = browser.currentScene.createNode("Transform");
Transform12.rotation = new X3D.SFRotation([7,8,9,3.14]);
Transform12.scale = new X3D.SFVec3f([4,5,6]);
Transform12.translation = new X3D.SFVec3f([1,2,3]);
browser.currentScene.children[1] = Transform12;

}
main ();
