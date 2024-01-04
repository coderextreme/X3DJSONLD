let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interchange";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "indexedfaceset_pixeltexture_part.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "Image";
meta3.content = "indexedfaceset_pixeltexture_part-front.jpg";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "Image";
meta4.content = "indexedfaceset_pixeltexture_part-rear.jpg";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "Image";
meta5.content = "indexedfaceset_pixeltexture_part-top.jpg";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "Image";
meta6.content = "indexedfaceset_pixeltexture_part-bottom.jpg";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "Image";
meta7.content = "indexedfaceset_pixeltexture_part-left.jpg";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "Image";
meta8.content = "indexedfaceset_pixeltexture_part-right.jpg";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "reference";
meta9.content = "http://www.nist.gov/vrml.html";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "reference";
meta10.content = "http://www.itl.nist.gov/div897/ctg/vrml/vrml.html";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "creator";
meta11.content = "http://www.itl.nist.gov/div897/ctg/vrml/members.html";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "disclaimer";
meta12.content = "This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "info";
meta13.content = "Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d";
head1.meta[11] = meta13;

let meta14 = browser.currentScene.createNode("meta");
meta14.name = "translator";
meta14.content = "Michael Kass NIST, Don Brutzman NPS";
head1.meta[12] = meta14;

let meta15 = browser.currentScene.createNode("meta");
meta15.name = "translated";
meta15.content = "21 January 2001";
head1.meta[13] = meta15;

let meta16 = browser.currentScene.createNode("meta");
meta16.name = "modified";
meta16.content = "Sat, 30 Dec 2023 07:46:26 GMT";
head1.meta[14] = meta16;

let meta17 = browser.currentScene.createNode("meta");
meta17.name = "description";
meta17.content = "Test of browser ability to map a partial portion of an PixelTexture onto an IndexedFaceSet geometry. Only the yellow portion of four equal sized red, green, yellow and white squares in the pixel texture map all the faces of the cube.";
head1.meta[15] = meta17;

let meta18 = browser.currentScene.createNode("meta");
meta18.name = "identifier";
meta18.content = "https://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_part.x3d";
head1.meta[16] = meta18;

let meta19 = browser.currentScene.createNode("meta");
meta19.name = "generator";
meta19.content = "Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html";
head1.meta[17] = meta19;

head = head1;

let Viewpoint21 = browser.currentScene.createNode("Viewpoint");
Viewpoint21.description = "Front View";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Viewpoint21;

let Viewpoint22 = browser.currentScene.createNode("Viewpoint");
Viewpoint22.description = "Rear View";
Viewpoint22.position = new SFVec3f(new float[0,0,-10]);
Viewpoint22.orientation = new SFRotation(new float[0,1,0,3.14]);
browser.currentScene.children[1] = Viewpoint22;

let Viewpoint23 = browser.currentScene.createNode("Viewpoint");
Viewpoint23.description = "Top View";
Viewpoint23.position = new SFVec3f(new float[0,10,0]);
Viewpoint23.orientation = new SFRotation(new float[1,0,0,-1.57]);
browser.currentScene.children[2] = Viewpoint23;

let Viewpoint24 = browser.currentScene.createNode("Viewpoint");
Viewpoint24.description = "Bottom View";
Viewpoint24.position = new SFVec3f(new float[0,-10,0]);
Viewpoint24.orientation = new SFRotation(new float[1,0,0,1.57]);
browser.currentScene.children[3] = Viewpoint24;

let Viewpoint25 = browser.currentScene.createNode("Viewpoint");
Viewpoint25.description = "Right View";
Viewpoint25.position = new SFVec3f(new float[10,0,0]);
Viewpoint25.orientation = new SFRotation(new float[0,1,0,1.57]);
browser.currentScene.children[4] = Viewpoint25;

let Viewpoint26 = browser.currentScene.createNode("Viewpoint");
Viewpoint26.description = "Left View";
Viewpoint26.position = new SFVec3f(new float[-10,0,0]);
Viewpoint26.orientation = new SFRotation(new float[0,1,0,-1.57]);
browser.currentScene.children[5] = Viewpoint26;

let NavigationInfo27 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo27.type = new MFString(new java.lang.String["EXAMINE","WALK","FLY","ANY"]);
browser.currentScene.children[6] = NavigationInfo27;

let Shape28 = browser.currentScene.createNode("Shape");
let Appearance29 = browser.currentScene.createNode("Appearance");
let Material30 = browser.currentScene.createNode("Material");
Appearance29.material = Material30;

let PixelTexture31 = browser.currentScene.createNode("PixelTexture");
PixelTexture31.image = new SFImage(new int[2,2,4,-16776961,16711935,-1,-65281]);
Appearance29.texture = PixelTexture31;

Shape28.appearance = Appearance29;

let IndexedFaceSet32 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet32.creaseAngle = 0.5;
IndexedFaceSet32.colorPerVertex = False;
IndexedFaceSet32.texCoordIndex = new MFInt32(new int[0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1]);
IndexedFaceSet32.coordIndex = new MFInt32(new int[0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1]);
let Color33 = browser.currentScene.createNode("Color");
Color33.color = new MFColor(new float[0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0]);
IndexedFaceSet32.color = Color33;

let TextureCoordinate34 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate34.point = new MFVec2f(new float[0.5,1,0.5,0.5,1,1,1,0.5]);
IndexedFaceSet32.texCoord = TextureCoordinate34;

let Coordinate35 = browser.currentScene.createNode("Coordinate");
Coordinate35.point = new MFVec3f(new float[-2,1,1,-2,-1,1,2,1,1,2,-1,1,2,1,-1,2,-1,-1,-2,1,-1,-2,-1,-1]);
IndexedFaceSet32.coord = Coordinate35;

Shape28.geometry = IndexedFaceSet32;

browser.currentScene.children[7] = Shape28;

