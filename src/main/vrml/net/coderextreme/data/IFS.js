const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("HAnim", 1));
scene.addMetaData("title", "IFS.x3d");
scene.addMetaData("identifier", "http://www.web3d.org/x3d/content/examples/HumanoidAnimation/IFS.x3d");
scene.addMetaData("description", "An attempt at a standard LOA-4 skeleton");
scene.addMetaData("generator", "h2.pl");
scene.addMetaData("modified", "18 Jan 2023");
scene.addMetaData("creator", "John Carlson");
scene.addMetaData("created", "9 November 2020");
scene.addMetaData("license", "../license.html");
await browser .loadComponents (scene);
let Group12 = browser.currentScene.createNode("Group");
//DEFS for markers of skeleton joints, segments, and sites
let Transform13 = browser.currentScene.createNode("Transform");
Transform13.translation = new X3D.SFVec3f([0,2.1,0]);
let Shape14 = browser.currentScene.createNode("Shape");
Shape14.DEF = "HAnimSiteShape";
let IndexedFaceSet15 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet15.DEF = "DiamondIFS";
IndexedFaceSet15.creaseAngle = 0.5;
IndexedFaceSet15.solid = False;
IndexedFaceSet15.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let ColorRGBA16 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA16.DEF = "HAnimSiteColorRGBA";
ColorRGBA16.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1]);
color = ColorRGBA16;

let Coordinate17 = browser.currentScene.createNode("Coordinate");
Coordinate17.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate17;

geometry = IndexedFaceSet15;

let Appearance18 = browser.currentScene.createNode("Appearance");
let Material19 = browser.currentScene.createNode("Material");
Material19.diffuseColor = new X3D.SFColor([1,1,0]);
Material19.transparency = 0.3;
material = Material19;

appearance = Appearance18;

Transform13YYY.child = new X3D.undefined();

Transform13ZZZ.child[0] = Shape14;

Group12YYY.children = new X3D.MFNode();

Group12ZZZ.children[0] = Transform13;

browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = Group12;

let NavigationInfo20 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo20.speed = 1.5;
browser.currentScene.children[1] = NavigationInfo20;

let Viewpoint21 = browser.currentScene.createNode("Viewpoint");
Viewpoint21.description = "default";
browser.currentScene.children[2] = Viewpoint21;

}
main ();
