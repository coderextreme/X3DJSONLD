const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Interchange"));
scene.addMetaData("title", "ifscube.x3d");
scene.addMetaData("identifier", "http://coderextreme.net/X3DJSONLD/src/main/personal/ifscube.x3d");
scene.addMetaData("description", "Template for an Indexed Face Set");
scene.addMetaData("creator", "John Carlson");
scene.addMetaData("created", "4 April 2017");
await browser .loadComponents (scene);
let Group8 = browser.currentScene.createNode("Group");
let Shape9 = browser.currentScene.createNode("Shape");
let IndexedFaceSet10 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet10.creaseAngle = 1.57;
IndexedFaceSet10.DEF = "IndexedFaceSet";
IndexedFaceSet10.coordIndex = new X3D.MFInt32([0,0,1,-1,0,1,1,-1,2,2,3,3,-1,0,3,3,0,-1,0,3,2,1,-1,1,2,2,1,-1,1,2,3,0,-1]);
IndexedFaceSet10.normalIndex = new X3D.MFInt32([0,-1,0,-1,1,-1,2,-1,3,-1,4,-1,5,-1]);
IndexedFaceSet10.normalPerVertex = False;
IndexedFaceSet10.colorIndex = new X3D.MFInt32([0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1]);
let Coordinate11 = browser.currentScene.createNode("Coordinate");
Coordinate11.point = new X3D.MFVec3f([0,0,1,0,1,1,1,1,1,1,0,1]);
coord = Coordinate11;

let Normal12 = browser.currentScene.createNode("Normal");
Normal12.vector = new X3D.MFVec3f([1,0,0,-1,0,0,0,1,0,0,0,-1,0,-1,0,0,0,1]);
normal = Normal12;

let Color13 = browser.currentScene.createNode("Color");
Color13.color = new X3D.MFColor([0,1,0]);
color = Color13;

geometry = IndexedFaceSet10;

Group8YYY.children = new X3D.MFNode();

Group8ZZZ.children[0] = Shape9;

browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = Group8;

}
main ();
