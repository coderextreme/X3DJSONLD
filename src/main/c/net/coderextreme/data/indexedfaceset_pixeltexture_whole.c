#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Interchange";
X3D0.version = "3.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "indexedfaceset_pixeltexture_whole.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "warning";
meta3.content = "file did not transform to vrml97";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "Image";
meta4.content = "indexedfaceset_pixeltexture_whole-front.jpg";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "Image";
meta5.content = "indexedfaceset_pixeltexture_whole-rear.jpg";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "Image";
meta6.content = "indexedfaceset_pixeltexture_whole-top.jpg";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "Image";
meta7.content = "indexedfaceset_pixeltexture_whole-bottom.jpg";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "Image";
meta8.content = "indexedfaceset_pixeltexture_whole-left.jpg";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "Image";
meta9.content = "indexedfaceset_pixeltexture_whole-right.jpg";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "reference";
meta10.content = "http://www.nist.gov/vrml.html";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "reference";
meta11.content = "http://www.itl.nist.gov/div897/ctg/vrml/vrml.html";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "creator";
meta12.content = "http://www.itl.nist.gov/div897/ctg/vrml/members.html";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "disclaimer";
meta13.content = "This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "info";
meta14.content = "Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "translator";
meta15.content = "Michael Kass NIST, Don Brutzman NPS";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "translated";
meta16.content = "21 January 2001";
head1.meta[14] = meta16;

meta meta17 = createNode("meta");
meta17.name = "modified";
meta17.content = "13 January 2014";
head1.meta[15] = meta17;

meta meta18 = createNode("meta");
meta18.name = "description";
meta18.content = "Test of browser ability to map the entire portion of an PixelTexture onto an IndexedFaceSet geometry. Four equal sized red (bottom left), green (bottom right) yellow (top left) and white (top right) squares in the pixel texture map all the faces of the cube.";
head1.meta[16] = meta18;

meta meta19 = createNode("meta");
meta19.name = "identifier";
meta19.content = "https://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_whole.x3d";
head1.meta[17] = meta19;

meta meta20 = createNode("meta");
meta20.name = "generator";
meta20.content = "Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html";
head1.meta[18] = meta20;

meta meta21 = createNode("meta");
meta21.name = "generator";
meta21.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[19] = meta21;

meta meta22 = createNode("meta");
meta22.name = "license";
meta22.content = "../../license.html";
head1.meta[20] = meta22;

head = head1;

Viewpoint Viewpoint24 = createNode("Viewpoint");
Viewpoint24.description = "Front View";
children = new MFNode();

children[0] = Viewpoint24;

Viewpoint Viewpoint25 = createNode("Viewpoint");
Viewpoint25.description = "Rear View";
Viewpoint25.orientation = new SFRotation(new float[0,1,0,3.14]);
Viewpoint25.position = new SFVec3f(new float[0,0,-10]);
children[1] = Viewpoint25;

Viewpoint Viewpoint26 = createNode("Viewpoint");
Viewpoint26.description = "Top View";
Viewpoint26.orientation = new SFRotation(new float[1,0,0,-1.57]);
Viewpoint26.position = new SFVec3f(new float[0,10,0]);
children[2] = Viewpoint26;

Viewpoint Viewpoint27 = createNode("Viewpoint");
Viewpoint27.description = "Bottom View";
Viewpoint27.orientation = new SFRotation(new float[1,0,0,1.57]);
Viewpoint27.position = new SFVec3f(new float[0,-10,0]);
children[3] = Viewpoint27;

Viewpoint Viewpoint28 = createNode("Viewpoint");
Viewpoint28.description = "Right View";
Viewpoint28.orientation = new SFRotation(new float[0,1,0,1.57]);
Viewpoint28.position = new SFVec3f(new float[10,0,0]);
children[4] = Viewpoint28;

Viewpoint Viewpoint29 = createNode("Viewpoint");
Viewpoint29.description = "Left View";
Viewpoint29.orientation = new SFRotation(new float[0,1,0,-1.57]);
Viewpoint29.position = new SFVec3f(new float[-10,0,0]);
children[5] = Viewpoint29;

NavigationInfo NavigationInfo30 = createNode("NavigationInfo");
NavigationInfo30.type = new MFString(new java.lang.String["EXAMINE"]);
children[6] = NavigationInfo30;

Shape Shape31 = createNode("Shape");
Appearance Appearance32 = createNode("Appearance");
Material Material33 = createNode("Material");
Appearance32.material = Material33;

PixelTexture PixelTexture34 = createNode("PixelTexture");
PixelTexture34.image = new SFImage(new int[2,2,4,-16776961,16711935,-1,-65281]);
Appearance32.texture = PixelTexture34;

Shape31.appearance = Appearance32;

IndexedFaceSet IndexedFaceSet35 = createNode("IndexedFaceSet");
IndexedFaceSet35.colorPerVertex = False;
IndexedFaceSet35.coordIndex = new MFInt32(new int[0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1]);
IndexedFaceSet35.creaseAngle = 0.5;
IndexedFaceSet35.texCoordIndex = new MFInt32(new int[0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1]);
Color Color36 = createNode("Color");
Color36.color = new MFColor(new float[0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0]);
IndexedFaceSet35.color = Color36;

Coordinate Coordinate37 = createNode("Coordinate");
Coordinate37.point = new MFVec3f(new float[-2,1,1,-2,-1,1,2,1,1,2,-1,1,2,1,-1,2,-1,-1,-2,1,-1,-2,-1,-1]);
IndexedFaceSet35.coord = Coordinate37;

TextureCoordinate TextureCoordinate38 = createNode("TextureCoordinate");
TextureCoordinate38.point = new MFVec2f(new float[0,1,0,0,1,1,1,0]);
IndexedFaceSet35.texCoord = TextureCoordinate38;

Shape31.geometry = IndexedFaceSet35;

children[7] = Shape31;

}
