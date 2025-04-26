const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Interchange"));
scene.addMetaData("title", "rgb_alpha.x3d");
scene.addMetaData("Image", "rgb_alpha-front.jpg");
scene.addMetaData("Image", "rgb_alpha-rear.jpg");
scene.addMetaData("Image", "rgb_alpha-top.jpg");
scene.addMetaData("Image", "rgb_alpha-bottom.jpg");
scene.addMetaData("reference", "http://www.nist.gov/vrml.html");
scene.addMetaData("reference", "http://www.itl.nist.gov/div897/ctg/vrml/vrml.html");
scene.addMetaData("creator", "http://www.itl.nist.gov/div897/ctg/vrml/members.html");
scene.addMetaData("disclaimer", "This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.");
scene.addMetaData("info", "Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d");
scene.addMetaData("translator", "Michael Kass NIST, Don Brutzman NPS");
scene.addMetaData("translated", "21 January 2001");
scene.addMetaData("modified", "16 January 2011");
scene.addMetaData("description", "Test browser ability to map a RGB plus alpha opacity to geometry. A checkerboard of four colored squares: lower left (red), lower right (transparent), uppser left (transparent) and upper right (red) map onto the faces of all geometry. For the sphere, the texture should cover the entire surface, and wrap counterclockwise from the back of the sphere. For the cone, the texture should wrap counterclockwise (from above) starting at the back of the cone. A circle cutout of the texture is applied right side up to the base of the cone when the cone is tilted toward the -z axis. For the cylinder, the texture should wrap counterclockwise (from above) starting at the back of the cylinder. A circle cutout of the texture is applied right side up to the top and bottom caps of the cylinder. For the box, the texture should be applied right side up in its entirety to each face of the box.");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/PixelTexture/rgb_alpha.x3d");
scene.addMetaData("generator", "Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html");
scene.addMetaData("generator", "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
scene.addMetaData("license", "../../license.html");
await browser .loadComponents (scene);
let NavigationInfo21 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo21.type = new X3D.MFString([new X3D.SFString("EXAMINE"), new X3D.SFString("WALK"), new X3D.SFString("FLY"), new X3D.SFString("ANY")]);
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = NavigationInfo21;

let Group22 = browser.currentScene.createNode("Group");
let Transform23 = browser.currentScene.createNode("Transform");
Transform23.translation = new X3D.SFVec3f([6.14221,0.0694613,-0.000999451]);
let Shape24 = browser.currentScene.createNode("Shape");
let Appearance25 = browser.currentScene.createNode("Appearance");
let Material26 = browser.currentScene.createNode("Material");
material = Material26;

let PixelTexture27 = browser.currentScene.createNode("PixelTexture");
PixelTexture27.DEF = "RgbOpacityCheckerboard";
PixelTexture27.image = new X3D.SFImage([2,2,4,-16776961,-65536,-65536,-16776961]);
texture = PixelTexture27;

appearance = Appearance25;

let Box28 = browser.currentScene.createNode("Box");
geometry = Box28;

Transform23YYY.child = new X3D.undefined();

Transform23ZZZ.child[0] = Shape24;

Group22YYY.children = new X3D.MFNode();

Group22ZZZ.children[0] = Transform23;

let Transform29 = browser.currentScene.createNode("Transform");
Transform29.translation = new X3D.SFVec3f([-4.85443,0.0694381,-0.00149918]);
let Shape30 = browser.currentScene.createNode("Shape");
let Appearance31 = browser.currentScene.createNode("Appearance");
let Material32 = browser.currentScene.createNode("Material");
material = Material32;

let PixelTexture33 = browser.currentScene.createNode("PixelTexture");
PixelTexture33.USE = "RgbOpacityCheckerboard";
texture = PixelTexture33;

appearance = Appearance31;

let Sphere34 = browser.currentScene.createNode("Sphere");
geometry = Sphere34;

Transform29YYY.child = new X3D.undefined();

Transform29ZZZ.child[0] = Shape30;

Group22ZZZ.children[1] = Transform29;

let Transform35 = browser.currentScene.createNode("Transform");
Transform35.translation = new X3D.SFVec3f([-1.47341,0.036672,-0.00175095]);
let Shape36 = browser.currentScene.createNode("Shape");
let Appearance37 = browser.currentScene.createNode("Appearance");
let Material38 = browser.currentScene.createNode("Material");
material = Material38;

let PixelTexture39 = browser.currentScene.createNode("PixelTexture");
PixelTexture39.USE = "RgbOpacityCheckerboard";
texture = PixelTexture39;

appearance = Appearance37;

let Cone40 = browser.currentScene.createNode("Cone");
geometry = Cone40;

Transform35YYY.child = new X3D.undefined();

Transform35ZZZ.child[0] = Shape36;

Group22ZZZ.children[2] = Transform35;

let Transform41 = browser.currentScene.createNode("Transform");
Transform41.translation = new X3D.SFVec3f([2.31094,0.0694206,-0.00187683]);
let Shape42 = browser.currentScene.createNode("Shape");
let Appearance43 = browser.currentScene.createNode("Appearance");
let Material44 = browser.currentScene.createNode("Material");
material = Material44;

let PixelTexture45 = browser.currentScene.createNode("PixelTexture");
PixelTexture45.USE = "RgbOpacityCheckerboard";
texture = PixelTexture45;

appearance = Appearance43;

let Cylinder46 = browser.currentScene.createNode("Cylinder");
geometry = Cylinder46;

Transform41YYY.child = new X3D.undefined();

Transform41ZZZ.child[0] = Shape42;

Group22ZZZ.children[3] = Transform41;

browser.currentScene.children[1] = Group22;

}
main ();
