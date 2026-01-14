const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Interchange"));
scene.addMetaData("title", "indexedfaceset_pixeltexture_entire.x3d");
scene.addMetaData("reference", "http://www.nist.gov/vrml.html");
scene.addMetaData("reference", "http://www.itl.nist.gov/div897/ctg/vrml/vrml.html");
scene.addMetaData("creator", "http://www.itl.nist.gov/div897/ctg/vrml/members.html");
scene.addMetaData("disclaimer", "This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.");
scene.addMetaData("info", "Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d");
scene.addMetaData("translator", "Michael Kass NIST, Don Brutzman NPS");
scene.addMetaData("translated", "21 January 2001");
scene.addMetaData("modified", "13 January 2014");
scene.addMetaData("description", "Test browser ability to completely map one PixelTexture onto the surface of an IndexedFaceSet geometry. Four colored squares should map onto each face of the IndexedFaceSet. The PixelTexture consists of red quarter (lower left), green quarter (lower right), white quarter (upper left) and yellow quarter (upper right). PixelTexture should map once onto the surface of the IndexedFaceSet, with the S (horizontal) axis of the texture corresponding to the X axis of the geometry.");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_entire.x3d");
scene.addMetaData("generator", "Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html");
scene.addMetaData("generator", "X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit");
scene.addMetaData("license", "../../license.html");
await browser .loadComponents (scene);
let Viewpoint17 = browser.currentScene.createNode("Viewpoint");
Viewpoint17.description = "Front View";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = Viewpoint17;

let Viewpoint18 = browser.currentScene.createNode("Viewpoint");
Viewpoint18.description = "Rear View";
Viewpoint18.orientation = new X3D.SFRotation([0,1,0,3.14]);
Viewpoint18.position = new X3D.SFVec3f([0,0,-10]);
browser.currentScene.children[1] = Viewpoint18;

let Viewpoint19 = browser.currentScene.createNode("Viewpoint");
Viewpoint19.description = "Top View";
Viewpoint19.orientation = new X3D.SFRotation([1,0,0,-1.57]);
Viewpoint19.position = new X3D.SFVec3f([0,10,0]);
browser.currentScene.children[2] = Viewpoint19;

let Viewpoint20 = browser.currentScene.createNode("Viewpoint");
Viewpoint20.description = "Bottom View";
Viewpoint20.orientation = new X3D.SFRotation([1,0,0,1.57]);
Viewpoint20.position = new X3D.SFVec3f([0,-10,0]);
browser.currentScene.children[3] = Viewpoint20;

let Viewpoint21 = browser.currentScene.createNode("Viewpoint");
Viewpoint21.description = "Right View";
Viewpoint21.orientation = new X3D.SFRotation([0,1,0,1.57]);
Viewpoint21.position = new X3D.SFVec3f([10,0,0]);
browser.currentScene.children[4] = Viewpoint21;

let Viewpoint22 = browser.currentScene.createNode("Viewpoint");
Viewpoint22.description = "Left View";
Viewpoint22.orientation = new X3D.SFRotation([0,1,0,-1.57]);
Viewpoint22.position = new X3D.SFVec3f([-10,0,0]);
browser.currentScene.children[5] = Viewpoint22;

let NavigationInfo23 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo23.type = new X3D.MFString([new X3D.SFString("EXAMINE"), new X3D.SFString("WALK"), new X3D.SFString("FLY"), new X3D.SFString("ANY")]);
browser.currentScene.children[6] = NavigationInfo23;

//<Environment id=\"gamma\" gammaCorrectionDefault=\"none\"></Environment>
let Shape24 = browser.currentScene.createNode("Shape");
let Appearance25 = browser.currentScene.createNode("Appearance");
let Material26 = browser.currentScene.createNode("Material");
material = Material26;

let PixelTexture27 = browser.currentScene.createNode("PixelTexture");
PixelTexture27.image = new X3D.SFImage([2,2,4,-16776961,16711935,-1,-65281]);
PixelTexture27.repeatS = False;
PixelTexture27.repeatT = False;
let TextureProperties28 = browser.currentScene.createNode("TextureProperties");
TextureProperties28.magnificationFilter = "NEAREST_PIXEL";
textureProperties = TextureProperties28;

texture = PixelTexture27;

appearance = Appearance25;

let IndexedFaceSet29 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet29.coordIndex = new X3D.MFInt32([0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1]);
let Coordinate30 = browser.currentScene.createNode("Coordinate");
Coordinate30.point = new X3D.MFVec3f([-2,1.5,1,-2,-1.5,1,2,1.5,1,2,-1.5,1,2,1.5,-1,2,-1.5,-1,-2,1.5,-1,-2,-1.5,-1]);
coord = Coordinate30;

geometry = IndexedFaceSet29;

browser.currentScene.children[7] = Shape24;

}
main ();
