let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interchange";
X3D0.version = "3.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "rgb_alpha.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "Image";
meta3.content = "rgb_alpha-front.jpg";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "Image";
meta4.content = "rgb_alpha-rear.jpg";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "Image";
meta5.content = "rgb_alpha-top.jpg";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "Image";
meta6.content = "rgb_alpha-bottom.jpg";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "reference";
meta7.content = "http://www.nist.gov/vrml.html";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "reference";
meta8.content = "http://www.itl.nist.gov/div897/ctg/vrml/vrml.html";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "creator";
meta9.content = "http://www.itl.nist.gov/div897/ctg/vrml/members.html";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "disclaimer";
meta10.content = "This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "info";
meta11.content = "Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "translator";
meta12.content = "Michael Kass NIST, Don Brutzman NPS";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "translated";
meta13.content = "21 January 2001";
head1.meta[11] = meta13;

let meta14 = browser.currentScene.createNode("meta");
meta14.name = "modified";
meta14.content = "16 January 2011";
head1.meta[12] = meta14;

let meta15 = browser.currentScene.createNode("meta");
meta15.name = "description";
meta15.content = "Test browser ability to map a RGB plus alpha opacity to geometry. A checkerboard of four colored squares: lower left (red), lower right (transparent), uppser left (transparent) and upper right (red) map onto the faces of all geometry. For the sphere, the texture should cover the entire surface, and wrap counterclockwise from the back of the sphere. For the cone, the texture should wrap counterclockwise (from above) starting at the back of the cone. A circle cutout of the texture is applied right side up to the base of the cone when the cone is tilted toward the -z axis. For the cylinder, the texture should wrap counterclockwise (from above) starting at the back of the cylinder. A circle cutout of the texture is applied right side up to the top and bottom caps of the cylinder. For the box, the texture should be applied right side up in its entirety to each face of the box.";
head1.meta[13] = meta15;

let meta16 = browser.currentScene.createNode("meta");
meta16.name = "identifier";
meta16.content = "https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/PixelTexture/rgb_alpha.x3d";
head1.meta[14] = meta16;

let meta17 = browser.currentScene.createNode("meta");
meta17.name = "generator";
meta17.content = "Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html";
head1.meta[15] = meta17;

let meta18 = browser.currentScene.createNode("meta");
meta18.name = "generator";
meta18.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[16] = meta18;

let meta19 = browser.currentScene.createNode("meta");
meta19.name = "license";
meta19.content = "../../license.html";
head1.meta[17] = meta19;

head = head1;

let NavigationInfo21 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo21.type = new MFString(new java.lang.String["EXAMINE","WALK","FLY","ANY"]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo21;

let Group22 = browser.currentScene.createNode("Group");
let Transform23 = browser.currentScene.createNode("Transform");
Transform23.translation = new SFVec3f(new float[6.14221,0.0694613,-0.000999451]);
let Shape24 = browser.currentScene.createNode("Shape");
let Appearance25 = browser.currentScene.createNode("Appearance");
let Material26 = browser.currentScene.createNode("Material");
Appearance25.material = Material26;

let PixelTexture27 = browser.currentScene.createNode("PixelTexture");
PixelTexture27.DEF = "RgbOpacityCheckerboard";
PixelTexture27.image = new SFImage(new int[2,2,4,-16776961,-65536,-65536,-16776961]);
Appearance25.texture = PixelTexture27;

Shape24.appearance = Appearance25;

let Box28 = browser.currentScene.createNode("Box");
Shape24.geometry = Box28;

Transform23.children = new MFNode();

Transform23.children[0] = Shape24;

Group22.children = new MFNode();

Group22.children[0] = Transform23;

let Transform29 = browser.currentScene.createNode("Transform");
Transform29.translation = new SFVec3f(new float[-4.85443,0.0694381,-0.00149918]);
let Shape30 = browser.currentScene.createNode("Shape");
let Appearance31 = browser.currentScene.createNode("Appearance");
let Material32 = browser.currentScene.createNode("Material");
Appearance31.material = Material32;

let PixelTexture33 = browser.currentScene.createNode("PixelTexture");
PixelTexture33.USE = "RgbOpacityCheckerboard";
Appearance31.texture = PixelTexture33;

Shape30.appearance = Appearance31;

let Sphere34 = browser.currentScene.createNode("Sphere");
Shape30.geometry = Sphere34;

Transform29.children = new MFNode();

Transform29.children[0] = Shape30;

Group22.children[1] = Transform29;

let Transform35 = browser.currentScene.createNode("Transform");
Transform35.translation = new SFVec3f(new float[-1.47341,0.036672,-0.00175095]);
let Shape36 = browser.currentScene.createNode("Shape");
let Appearance37 = browser.currentScene.createNode("Appearance");
let Material38 = browser.currentScene.createNode("Material");
Appearance37.material = Material38;

let PixelTexture39 = browser.currentScene.createNode("PixelTexture");
PixelTexture39.USE = "RgbOpacityCheckerboard";
Appearance37.texture = PixelTexture39;

Shape36.appearance = Appearance37;

let Cone40 = browser.currentScene.createNode("Cone");
Shape36.geometry = Cone40;

Transform35.children = new MFNode();

Transform35.children[0] = Shape36;

Group22.children[2] = Transform35;

let Transform41 = browser.currentScene.createNode("Transform");
Transform41.translation = new SFVec3f(new float[2.31094,0.0694206,-0.00187683]);
let Shape42 = browser.currentScene.createNode("Shape");
let Appearance43 = browser.currentScene.createNode("Appearance");
let Material44 = browser.currentScene.createNode("Material");
Appearance43.material = Material44;

let PixelTexture45 = browser.currentScene.createNode("PixelTexture");
PixelTexture45.USE = "RgbOpacityCheckerboard";
Appearance43.texture = PixelTexture45;

Shape42.appearance = Appearance43;

let Cylinder46 = browser.currentScene.createNode("Cylinder");
Shape42.geometry = Cylinder46;

Transform41.children = new MFNode();

Transform41.children[0] = Shape42;

Group22.children[3] = Transform41;

browser.currentScene.children[1] = Group22;

