let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interchange";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "indexedfaceset_pixeltexture_entire.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "reference";
meta3.content = "http://www.nist.gov/vrml.html";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "reference";
meta4.content = "http://www.itl.nist.gov/div897/ctg/vrml/vrml.html";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "creator";
meta5.content = "http://www.itl.nist.gov/div897/ctg/vrml/members.html";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "disclaimer";
meta6.content = "This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "info";
meta7.content = "Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "translator";
meta8.content = "Michael Kass NIST, Don Brutzman NPS";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "translated";
meta9.content = "21 January 2001";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "modified";
meta10.content = "13 January 2014";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "description";
meta11.content = "Test browser ability to completely map one PixelTexture onto the surface of an IndexedFaceSet geometry. Four colored squares should map onto each face of the IndexedFaceSet. The PixelTexture consists of red quarter (lower left), green quarter (lower right), white quarter (upper left) and yellow quarter (upper right). PixelTexture should map once onto the surface of the IndexedFaceSet, with the S (horizontal) axis of the texture corresponding to the X axis of the geometry.";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "identifier";
meta12.content = "https://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_entire.x3d";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "generator";
meta13.content = "Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html";
head1.meta[11] = meta13;

let meta14 = browser.currentScene.createNode("meta");
meta14.name = "generator";
meta14.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[12] = meta14;

head = head1;

let Viewpoint16 = browser.currentScene.createNode("Viewpoint");
Viewpoint16.description = "Front View";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Viewpoint16;

let Viewpoint17 = browser.currentScene.createNode("Viewpoint");
Viewpoint17.description = "Rear View";
Viewpoint17.position = new SFVec3f(new float[0,0,-10]);
Viewpoint17.orientation = new SFRotation(new float[0,1,0,3.14]);
browser.currentScene.children[1] = Viewpoint17;

let Viewpoint18 = browser.currentScene.createNode("Viewpoint");
Viewpoint18.description = "Top View";
Viewpoint18.position = new SFVec3f(new float[0,10,0]);
Viewpoint18.orientation = new SFRotation(new float[1,0,0,-1.57]);
browser.currentScene.children[2] = Viewpoint18;

let Viewpoint19 = browser.currentScene.createNode("Viewpoint");
Viewpoint19.description = "Bottom View";
Viewpoint19.position = new SFVec3f(new float[0,-10,0]);
Viewpoint19.orientation = new SFRotation(new float[1,0,0,1.57]);
browser.currentScene.children[3] = Viewpoint19;

let Viewpoint20 = browser.currentScene.createNode("Viewpoint");
Viewpoint20.description = "Right View";
Viewpoint20.position = new SFVec3f(new float[10,0,0]);
Viewpoint20.orientation = new SFRotation(new float[0,1,0,1.57]);
browser.currentScene.children[4] = Viewpoint20;

let Viewpoint21 = browser.currentScene.createNode("Viewpoint");
Viewpoint21.description = "Left View";
Viewpoint21.position = new SFVec3f(new float[-10,0,0]);
Viewpoint21.orientation = new SFRotation(new float[0,1,0,-1.57]);
browser.currentScene.children[5] = Viewpoint21;

let NavigationInfo22 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo22.type = new MFString(new java.lang.String["EXAMINE","WALK","FLY","ANY"]);
browser.currentScene.children[6] = NavigationInfo22;

let Shape23 = browser.currentScene.createNode("Shape");
let Appearance24 = browser.currentScene.createNode("Appearance");
let Material25 = browser.currentScene.createNode("Material");
Appearance24.material = Material25;

let PixelTexture26 = browser.currentScene.createNode("PixelTexture");
PixelTexture26.image = new SFImage(new int[2,2,4,-16776961,16711935,-1,-65281]);
PixelTexture26.repeatS = False;
PixelTexture26.repeatT = False;
Appearance24.texture = PixelTexture26;

Shape23.appearance = Appearance24;

let IndexedFaceSet27 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet27.coordIndex = new MFInt32(new int[0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1]);
let Coordinate28 = browser.currentScene.createNode("Coordinate");
Coordinate28.point = new MFVec3f(new float[-2,1.5,1,-2,-1.5,1,2,1.5,1,2,-1.5,1,2,1.5,-1,2,-1.5,-1,-2,1.5,-1,-2,-1.5,-1]);
IndexedFaceSet27.coord = Coordinate28;

Shape23.geometry = IndexedFaceSet27;

browser.currentScene.children[7] = Shape23;

