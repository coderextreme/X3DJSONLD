const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Interactive"));
scene .addComponent (browser .getComponent ("HAnim", 1));
scene.addMetaData("title", "OrientationInterpolator.x3d");
scene.addMetaData("creator", "John Carlson");
scene.addMetaData("created", "29 December 2025");
scene.addMetaData("license", "license.html");
await browser .loadComponents (scene);
let WorldInfo8 = browser.currentScene.createNode("WorldInfo");
WorldInfo8.title = "OrientationInterpolator.x3d";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo8;

//<OrientationInterpolator DEF='Stop_l_midtarsal_RotationInterpolator' key='0 0.5 1' keyValue='0 0 1 0 0 0 1 0 0 0 1 0'/>
}
main ();
