const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "ifscubeworks.x3d");
scene.addMetaData("identifier", "http://coderextreme.net/X3DJSONLD/src/main/data/ifscubeworks.x3d");
scene.addMetaData("description", "Template for an Indexed Face Set");
scene.addMetaData("creator", "John Carlson");
scene.addMetaData("created", "4 April 2017");
scene.addMetaData("license", "https://www.web3d.org/x3d/content/examples/license.html");
scene.addMetaData("generator", "X3D-Edit, https://savage.nps.edu/X3D-Edit");
await browser .loadComponents (scene);
let WorldInfo10 = browser.currentScene.createNode("WorldInfo");
WorldInfo10.title = "ifscubeworks.x3d";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo10;

let Group11 = browser.currentScene.createNode("Group");
let Shape12 = browser.currentScene.createNode("Shape");
let IndexedFaceSet13 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet13.DEF = "IndexedFaceSet";
IndexedFaceSet13.coordIndex = new X3D.MFInt32([0,0,1,-1,0,1,1,-1,2,2,3,3,-1,0,3,3,0,-1,0,3,2,1,-1,1,2,2,1,-1,1,2,3,0,-1]);
IndexedFaceSet13.normalIndex = new X3D.MFInt32([0,0,1,2,3,4,5]);
IndexedFaceSet13.normalPerVertex = False;
IndexedFaceSet13.colorIndex = new X3D.MFInt32([0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1]);
let Coordinate14 = browser.currentScene.createNode("Coordinate");
Coordinate14.point = new X3D.MFVec3f([0,0,1,0,1,1,1,1,1,1,0,1]);
coord = Coordinate14;

let Normal15 = browser.currentScene.createNode("Normal");
Normal15.vector = new X3D.MFVec3f([1,0,0,-1,0,0,0,1,0,0,0,-1,0,-1,0,0,0,1]);
normal = Normal15;

let Color16 = browser.currentScene.createNode("Color");
Color16.color = new X3D.MFColor([0,1,0]);
color = Color16;

geometry = IndexedFaceSet13;

Group11YYY.children = new X3D.MFNode();

Group11ZZZ.children[0] = Shape12;

browser.currentScene.children[1] = Group11;

}
main ();
