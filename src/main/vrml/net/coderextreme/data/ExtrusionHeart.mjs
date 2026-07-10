const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "ExtrusionHeart.x3d");
scene.addMetaData("description", "Simple extrusion of a Valentine heart.");
scene.addMetaData("creator", "Class participants in course Introduction to VRML/X3D.");
scene.addMetaData("created", "14 February 2001");
scene.addMetaData("modified", "27 November 2015");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionHeart.x3d");
scene.addMetaData("generator", "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
scene.addMetaData("license", "../license.html");
await browser .loadComponents (scene);
let Viewpoint11 = browser.currentScene.createNode("Viewpoint");
Viewpoint11.description = "Extrusion Heart";
Viewpoint11.orientation = new X3D.SFRotation([1,0,0,1.57]);
Viewpoint11.position = new X3D.SFVec3f([0,-4,0]);
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = Viewpoint11;

let Transform12 = browser.currentScene.createNode("Transform");
Transform12.translation = new X3D.SFVec3f([0,-0.5,0]);
let Shape13 = browser.currentScene.createNode("Shape");
let Extrusion14 = browser.currentScene.createNode("Extrusion");
Extrusion14.creaseAngle = 3.14159;
Extrusion14.crossSection = new X3D.MFVec2f([0,0.8,0.2,1,0.7,0.95,1,0.5,0.8,0,0.5,-0.3,0,-0.7,-0.5,-0.3,-0.8,0,-1,0.5,-0.7,0.95,-0.2,1,0,0.8]);
Extrusion14.scale = new X3D.MFVec2f([0.01,0.01,0.8,0.8,1,1,0.8,0.8,0.01,0.01]);
Extrusion14.solid = False;
Extrusion14.spine = new X3D.MFVec3f([0,0,0,0,0.1,0,0,0.5,0,0,0.9,0,0,1,0]);
geometry = Extrusion14;

let Appearance15 = browser.currentScene.createNode("Appearance");
let Material16 = browser.currentScene.createNode("Material");
Material16.diffuseColor = new X3D.SFColor([0.8,0.3,0.3]);
material = Material16;

appearance = Appearance15;

Transform12YYY.child = new X3D.undefined();

Transform12ZZZ.child[0] = Shape13;

browser.currentScene.children[1] = Transform12;

}
main ();
