#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Interchange";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "indexedfaceset_pixeltexture_plus.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "Image";
meta3.content = "indexedfaceset_pixeltexture_plus-front.jpg";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "Image";
meta4.content = "indexedfaceset_pixeltexture_plus-rear.jpg";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "Image";
meta5.content = "indexedfaceset_pixeltexture_plus-top.jpg";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "Image";
meta6.content = "indexedfaceset_pixeltexture_plus-bottom.jpg";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "Image";
meta7.content = "indexedfaceset_pixeltexture_plus-left.jpg";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "Image";
meta8.content = "indexedfaceset_pixeltexture_plus-right.jpg";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "reference";
meta9.content = "http://www.nist.gov/vrml.html";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "reference";
meta10.content = "http://www.itl.nist.gov/div897/ctg/vrml/vrml.html";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "creator";
meta11.content = "http://www.itl.nist.gov/div897/ctg/vrml/members.html";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "disclaimer";
meta12.content = "This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "info";
meta13.content = "Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "translator";
meta14.content = "Michael Kass NIST, Don Brutzman NPS";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "translated";
meta15.content = "21 January 2001";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "modified";
meta16.content = "13 January 2014";
head1.meta[14] = meta16;

meta meta17 = createNode("meta");
meta17.name = "description";
meta17.content = "Test of browser ability to map a 3 times multiple of an PixelTexture onto an IndexedFaceSet geometry. A 3 by 3 matrix of four equal sized red, green, white and yellow squares in the pixel texture map all the faces of the cube.";
head1.meta[15] = meta17;

meta meta18 = createNode("meta");
meta18.name = "identifier";
meta18.content = "https://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_plus.x3d";
head1.meta[16] = meta18;

meta meta19 = createNode("meta");
meta19.name = "generator";
meta19.content = "Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html";
head1.meta[17] = meta19;

meta meta20 = createNode("meta");
meta20.name = "generator";
meta20.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[18] = meta20;

meta meta21 = createNode("meta");
meta21.name = "license";
meta21.content = "../../license.html";
head1.meta[19] = meta21;

head = head1;

Viewpoint Viewpoint23 = createNode("Viewpoint");
Viewpoint23.description = "Front View";
children = new MFNode();

children[0] = Viewpoint23;

Viewpoint Viewpoint24 = createNode("Viewpoint");
Viewpoint24.description = "Rear View";
Viewpoint24.orientation = new SFRotation(new float[0,1,0,3.14]);
Viewpoint24.position = new SFVec3f(new float[0,0,-10]);
children[1] = Viewpoint24;

Viewpoint Viewpoint25 = createNode("Viewpoint");
Viewpoint25.description = "Top View";
Viewpoint25.orientation = new SFRotation(new float[1,0,0,-1.57]);
Viewpoint25.position = new SFVec3f(new float[0,10,0]);
children[2] = Viewpoint25;

Viewpoint Viewpoint26 = createNode("Viewpoint");
Viewpoint26.description = "Bottom View";
Viewpoint26.orientation = new SFRotation(new float[1,0,0,1.57]);
Viewpoint26.position = new SFVec3f(new float[0,-10,0]);
children[3] = Viewpoint26;

Viewpoint Viewpoint27 = createNode("Viewpoint");
Viewpoint27.description = "Right View";
Viewpoint27.orientation = new SFRotation(new float[0,1,0,1.57]);
Viewpoint27.position = new SFVec3f(new float[10,0,0]);
children[4] = Viewpoint27;

Viewpoint Viewpoint28 = createNode("Viewpoint");
Viewpoint28.description = "Left View";
Viewpoint28.orientation = new SFRotation(new float[0,1,0,-1.57]);
Viewpoint28.position = new SFVec3f(new float[-10,0,0]);
children[5] = Viewpoint28;

NavigationInfo NavigationInfo29 = createNode("NavigationInfo");
NavigationInfo29.type = new MFString(new java.lang.String["EXAMINE","WALK","FLY","ANY"]);
children[6] = NavigationInfo29;

Shape Shape30 = createNode("Shape");
Appearance Appearance31 = createNode("Appearance");
Material Material32 = createNode("Material");
Appearance31.material = Material32;

PixelTexture PixelTexture33 = createNode("PixelTexture");
PixelTexture33.image = new SFImage(new int[2,2,4,-16776961,16711935,-1,-65281]);
Appearance31.texture = PixelTexture33;

Shape30.appearance = Appearance31;

IndexedFaceSet IndexedFaceSet34 = createNode("IndexedFaceSet");
IndexedFaceSet34.colorPerVertex = False;
IndexedFaceSet34.coordIndex = new MFInt32(new int[0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1]);
IndexedFaceSet34.creaseAngle = 0.5;
IndexedFaceSet34.texCoordIndex = new MFInt32(new int[0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1]);
Color Color35 = createNode("Color");
Color35.color = new MFColor(new float[0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0]);
IndexedFaceSet34.color = Color35;

Coordinate Coordinate36 = createNode("Coordinate");
Coordinate36.point = new MFVec3f(new float[-2,1,1,-2,-1,1,2,1,1,2,-1,1,2,1,-1,2,-1,-1,-2,1,-1,-2,-1,-1]);
IndexedFaceSet34.coord = Coordinate36;

TextureCoordinate TextureCoordinate37 = createNode("TextureCoordinate");
TextureCoordinate37.point = new MFVec2f(new float[-1,2,-1,-1,2,2,2,-1]);
IndexedFaceSet34.texCoord = TextureCoordinate37;

Shape30.geometry = IndexedFaceSet34;

children[7] = Shape30;

}
