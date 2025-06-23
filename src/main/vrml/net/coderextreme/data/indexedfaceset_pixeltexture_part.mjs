const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Interchange"));
scene.addMetaData("title", "indexedfaceset_pixeltexture_part.x3d");
scene.addMetaData("Image", "indexedfaceset_pixeltexture_part-front.jpg");
scene.addMetaData("Image", "indexedfaceset_pixeltexture_part-rear.jpg");
scene.addMetaData("Image", "indexedfaceset_pixeltexture_part-top.jpg");
scene.addMetaData("Image", "indexedfaceset_pixeltexture_part-bottom.jpg");
scene.addMetaData("Image", "indexedfaceset_pixeltexture_part-left.jpg");
scene.addMetaData("Image", "indexedfaceset_pixeltexture_part-right.jpg");
scene.addMetaData("reference", "http://www.nist.gov/vrml.html");
scene.addMetaData("reference", "http://www.itl.nist.gov/div897/ctg/vrml/vrml.html");
scene.addMetaData("creator", "http://www.itl.nist.gov/div897/ctg/vrml/members.html");
scene.addMetaData("disclaimer", "This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.");
scene.addMetaData("info", "Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d");
scene.addMetaData("translator", "Michael Kass NIST, Don Brutzman NPS");
scene.addMetaData("translated", "21 January 2001");
scene.addMetaData("modified", "13 January 2014");
scene.addMetaData("description", "Test of browser ability to map a partial portion of an PixelTexture onto an IndexedFaceSet geometry. Only the yellow portion of four equal sized red, green, yellow and white squares in the pixel texture map all the faces of the cube.");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_part.x3d");
scene.addMetaData("generator", "Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html");
scene.addMetaData("generator", "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
scene.addMetaData("license", "../../license.html");
await browser .loadComponents (scene);
let Viewpoint23 = browser.currentScene.createNode("Viewpoint");
Viewpoint23.description = "Front View";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = Viewpoint23;

let Viewpoint24 = browser.currentScene.createNode("Viewpoint");
Viewpoint24.description = "Rear View";
Viewpoint24.orientation = new X3D.SFRotation([0,1,0,3.14]);
Viewpoint24.position = new X3D.SFVec3f([0,0,-10]);
browser.currentScene.children[1] = Viewpoint24;

let Viewpoint25 = browser.currentScene.createNode("Viewpoint");
Viewpoint25.description = "Top View";
Viewpoint25.orientation = new X3D.SFRotation([1,0,0,-1.57]);
Viewpoint25.position = new X3D.SFVec3f([0,10,0]);
browser.currentScene.children[2] = Viewpoint25;

let Viewpoint26 = browser.currentScene.createNode("Viewpoint");
Viewpoint26.description = "Bottom View";
Viewpoint26.orientation = new X3D.SFRotation([1,0,0,1.57]);
Viewpoint26.position = new X3D.SFVec3f([0,-10,0]);
browser.currentScene.children[3] = Viewpoint26;

let Viewpoint27 = browser.currentScene.createNode("Viewpoint");
Viewpoint27.description = "Right View";
Viewpoint27.orientation = new X3D.SFRotation([0,1,0,1.57]);
Viewpoint27.position = new X3D.SFVec3f([10,0,0]);
browser.currentScene.children[4] = Viewpoint27;

let Viewpoint28 = browser.currentScene.createNode("Viewpoint");
Viewpoint28.description = "Left View";
Viewpoint28.orientation = new X3D.SFRotation([0,1,0,-1.57]);
Viewpoint28.position = new X3D.SFVec3f([-10,0,0]);
browser.currentScene.children[5] = Viewpoint28;

let NavigationInfo29 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo29.type = new X3D.MFString([new X3D.SFString("EXAMINE"), new X3D.SFString("WALK"), new X3D.SFString("FLY"), new X3D.SFString("ANY")]);
browser.currentScene.children[6] = NavigationInfo29;

let Shape30 = browser.currentScene.createNode("Shape");
let Appearance31 = browser.currentScene.createNode("Appearance");
let Material32 = browser.currentScene.createNode("Material");
material = Material32;

let PixelTexture33 = browser.currentScene.createNode("PixelTexture");
PixelTexture33.image = new X3D.SFImage([2,2,4,-16776961,16711935,-1,-65281]);
texture = PixelTexture33;

appearance = Appearance31;

let IndexedFaceSet34 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet34.colorPerVertex = False;
IndexedFaceSet34.coordIndex = new X3D.MFInt32([0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1]);
IndexedFaceSet34.creaseAngle = 0.5;
IndexedFaceSet34.texCoordIndex = new X3D.MFInt32([0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1]);
let Color35 = browser.currentScene.createNode("Color");
Color35.color = new X3D.MFColor([0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0]);
color = Color35;

let Coordinate36 = browser.currentScene.createNode("Coordinate");
Coordinate36.point = new X3D.MFVec3f([-2,1,1,-2,-1,1,2,1,1,2,-1,1,2,1,-1,2,-1,-1,-2,1,-1,-2,-1,-1]);
coord = Coordinate36;

let TextureCoordinate37 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate37.point = new X3D.MFVec2f([0.5,1,0.5,0.5,1,1,1,0.5]);
texCoord = TextureCoordinate37;

geometry = IndexedFaceSet34;

browser.currentScene.children[7] = Shape30;

}
main ();
