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
meta3.content = "Thu, 23 Apr 2015 06:06:55 GMT";
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
meta6.content = "Thu, 23 Apr 2015 06:06:55 GMT";
head1.meta[4] = meta6;

head = head1;

WorldInfo WorldInfo8 = createNode("WorldInfo");
WorldInfo8.info = new MFString(new java.lang.String["Packaged by CosmoPackage"]);
children = new MFNode();

children[0] = WorldInfo8;

Transform Transform9 = createNode("Transform");
Transform9.DEF = "ad";
Transform Transform10 = createNode("Transform");
Transform10.translation = new SFVec3f(new float[-0.00000354004,3.23187,-0.317778]);
Transform10.rotation = new SFRotation(new float[1,0.00000126533,-0.00000117221,1.5708]);
Transform10.scale = new SFVec3f(new float[1.10125,0.662583,0.323521]);
Shape Shape11 = createNode("Shape");
Appearance Appearance12 = createNode("Appearance");
ImageTexture ImageTexture13 = createNode("ImageTexture");
ImageTexture13.DEF = "_1";
ImageTexture13.url = new MFString(new java.lang.String["premiere-world.png"]);
Appearance12.texture = ImageTexture13;

TextureTransform TextureTransform14 = createNode("TextureTransform");
TextureTransform14.scale = new SFVec2f(new float[-2,1]);
Appearance12.textureTransform = TextureTransform14;

Shape11.appearance = Appearance12;

IndexedFaceSet IndexedFaceSet15 = createNode("IndexedFaceSet");
IndexedFaceSet15.creaseAngle = 0.5;
IndexedFaceSet15.texCoordIndex = new MFInt32(new int[1,0,5,4,-1,7,6,2,3,-1]);
IndexedFaceSet15.coordIndex = new MFInt32(new int[3,2,1,0,-1,4,5,6,7,-1]);
TextureCoordinate TextureCoordinate16 = createNode("TextureCoordinate");
TextureCoordinate16.point = new MFVec2f(new float[0.00230294,0.993997,0.00562096,0.00190586,0.994394,0.993997,0.997712,0.00190586,0.994394,0.00522393,0.994394,0.993997,0.00230294,0.993997,0.00230294,0.00522393]);
IndexedFaceSet15.texCoord = TextureCoordinate16;

Coordinate Coordinate17 = createNode("Coordinate");
Coordinate17.point = new MFVec3f(new float[-10,-9.90446,10,-10,-9.90446,6.77007,-10,9.40845,6.77007,-10,9.40845,10,10,-9.90446,10,10,-9.90446,6.77007,10,9.40845,6.77007,10,9.40845,10]);
IndexedFaceSet15.coord = Coordinate17;

Shape11.geometry = IndexedFaceSet15;

Transform10.child = new undefined();

Transform10.child[0] = Shape11;

Transform9.children = new MFNode();

Transform9.children[0] = Transform10;

Transform Transform18 = createNode("Transform");
Transform18.translation = new SFVec3f(new float[-0.00000354099,3.21449,-0.318831]);
Transform18.rotation = new SFRotation(new float[1,0.00000126533,-0.00000117221,1.5708]);
Transform18.scale = new SFVec3f(new float[1.0942,0.658338,0.321449]);
Shape Shape19 = createNode("Shape");
Appearance Appearance20 = createNode("Appearance");
ImageTexture ImageTexture21 = createNode("ImageTexture");
ImageTexture21.USE = "_1";
Appearance20.texture = ImageTexture21;

TextureTransform TextureTransform22 = createNode("TextureTransform");
TextureTransform22.scale = new SFVec2f(new float[2,1]);
Appearance20.textureTransform = TextureTransform22;

Shape19.appearance = Appearance20;

IndexedFaceSet IndexedFaceSet23 = createNode("IndexedFaceSet");
IndexedFaceSet23.creaseAngle = 0.5;
IndexedFaceSet23.texCoordIndex = new MFInt32(new int[12,13,2,3,-1,7,6,14,15,-1,8,9,1,0,-1,4,5,11,10,-1]);
IndexedFaceSet23.coordIndex = new MFInt32(new int[0,1,2,3,-1,7,6,5,4,-1,8,9,1,0,-1,4,5,11,10,-1]);
TextureCoordinate TextureCoordinate24 = createNode("TextureCoordinate");
TextureCoordinate24.point = new MFVec2f(new float[0.00220408,0.000687301,0.00220408,0.996833,0.00230294,0.993997,0.00562096,0.00190586,0.989256,0.00236673,0.989256,0.998512,0.994394,0.993997,0.997712,0.00190586,0.995439,0.000687301,0.995439,0.996833,0.00624149,0.00236673,0.00624149,0.998513,0.994394,0.00522393,0.994394,0.993997,0.00230294,0.993997,0.00230294,0.00522393]);
IndexedFaceSet23.texCoord = TextureCoordinate24;

Coordinate Coordinate25 = createNode("Coordinate");
Coordinate25.point = new MFVec3f(new float[-10,-9.90446,10,-10,-9.90446,6.77007,-10,9.40845,6.77007,-10,9.40845,10,10,-9.90446,10,10,-9.90446,6.77007,10,9.40845,6.77007,10,9.40845,10,-4.997,-9.90446,10,-4.997,-9.90446,6.77007,5.04934,-9.90446,10,5.04934,-9.90446,6.77007]);
IndexedFaceSet23.coord = Coordinate25;

Shape19.geometry = IndexedFaceSet23;

Transform18.child = new undefined();

Transform18.child[0] = Shape19;

Transform9.children[1] = Transform18;

children[1] = Transform9;

}
