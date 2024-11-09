#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Full";
X3D0.version = "3.3";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "comment";
meta2.content = "World of Titania";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "created";
meta3.content = "Thu, 23 Apr 2015 06:07:01 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V0.7.8, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Thu, 23 Apr 2015 06:07:01 GMT";
head1.meta[4] = meta6;

head = head1;

WorldInfo WorldInfo8 = createNode("WorldInfo");
WorldInfo8.info = new MFString(new java.lang.String[", ","Created in TitaniaPackaged by CosmoPackage"]);
children = new MFNode();

children[0] = WorldInfo8;

Transform Transform9 = createNode("Transform");
Transform Transform10 = createNode("Transform");
Transform10.DEF = "bg";
Transform10.translation = new SFVec3f(new float[0.0699042,0.123244,-0.29999]);
Transform10.scale = new SFVec3f(new float[1.08258,0.948483,0.999968]);
Shape Shape11 = createNode("Shape");
Appearance Appearance12 = createNode("Appearance");
ImageTexture ImageTexture13 = createNode("ImageTexture");
ImageTexture13.url = new MFString(new java.lang.String["reflect2.png"]);
Appearance12.texture = ImageTexture13;

Shape11.appearance = Appearance12;

IndexedFaceSet IndexedFaceSet14 = createNode("IndexedFaceSet");
IndexedFaceSet14.creaseAngle = 0.5;
IndexedFaceSet14.colorIndex = new MFInt32(new int[1,1,0,0,-1]);
IndexedFaceSet14.coordIndex = new MFInt32(new int[2,3,0,1,-1]);
Color Color15 = createNode("Color");
Color15.color = new MFColor(new float[0.112299,0.473076,1,0.144385,0.354857,1]);
IndexedFaceSet14.color = Color15;

TextureCoordinate TextureCoordinate16 = createNode("TextureCoordinate");
TextureCoordinate16.point = new MFVec2f(new float[0.00516611,202.718,0.00516611,158.648,0.247524,-35.8107,0.491422,-21.6497,0.457532,202.718,0.457532,158.648,0.00516611,198.23,0.909898,163.137,0.879118,202.718,0.247524,-35.8107,0.0157531,-35.81]);
IndexedFaceSet14.texCoord = TextureCoordinate16;

Coordinate Coordinate17 = createNode("Coordinate");
Coordinate17.point = new MFVec3f(new float[-0.230846,-0.066663,0,-0.230846,-0.193214,0,0.101703,-0.193214,0,0.101703,-0.066663,0]);
IndexedFaceSet14.coord = Coordinate17;

Shape11.geometry = IndexedFaceSet14;

Transform10.child = new undefined();

Transform10.child[0] = Shape11;

Transform9.children = new MFNode();

Transform9.children[0] = Transform10;

Transform Transform18 = createNode("Transform");
Transform18.DEF = "Else";
Transform18.translation = new SFVec3f(new float[-0.150525,0.0317122,-0.297743]);
Transform18.scale = new SFVec3f(new float[0.0412843,0.0412938,0.412821]);
Shape Shape19 = createNode("Shape");
Appearance Appearance20 = createNode("Appearance");
ImageTexture ImageTexture21 = createNode("ImageTexture");
ImageTexture21.url = new MFString(new java.lang.String["else.gif"]);
Appearance20.texture = ImageTexture21;

Shape19.appearance = Appearance20;

IndexedFaceSet IndexedFaceSet22 = createNode("IndexedFaceSet");
IndexedFaceSet22.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate23 = createNode("TextureCoordinate");
TextureCoordinate23.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet22.texCoord = TextureCoordinate23;

Coordinate Coordinate24 = createNode("Coordinate");
Coordinate24.point = new MFVec3f(new float[-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0]);
IndexedFaceSet22.coord = Coordinate24;

Shape19.geometry = IndexedFaceSet22;

Transform18.child = new undefined();

Transform18.child[0] = Shape19;

Transform9.children[1] = Transform18;

children[1] = Transform9;

}
