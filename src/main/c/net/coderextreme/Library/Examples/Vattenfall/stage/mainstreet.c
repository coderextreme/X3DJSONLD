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
meta3.content = "Sat, 25 Apr 2015 12:38:24 GMT";
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
meta6.content = "Sat, 25 Apr 2015 12:38:24 GMT";
head1.meta[4] = meta6;

head = head1;

WorldInfo WorldInfo8 = createNode("WorldInfo");
WorldInfo8.info = new MFString(new java.lang.String["Packaged by CosmoPackage"]);
children = new MFNode();

children[0] = WorldInfo8;

Transform Transform9 = createNode("Transform");
Transform9.DEF = "hauptstrasse";
Transform Transform10 = createNode("Transform");
Transform10.DEF = "fw";
Transform10.translation = new SFVec3f(new float[-158.311,-2.03119,87.2159]);
Transform10.rotation = new SFRotation(new float[0,1,0,4.71164]);
Transform10.scale = new SFVec3f(new float[5.43485,0.202305,3.74729]);
Shape Shape11 = createNode("Shape");
Appearance Appearance12 = createNode("Appearance");
Material Material13 = createNode("Material");
Appearance12.material = Material13;

ImageTexture ImageTexture14 = createNode("ImageTexture");
ImageTexture14.url = new MFString(new java.lang.String["fussweg.png"]);
Appearance12.texture = ImageTexture14;

TextureTransform TextureTransform15 = createNode("TextureTransform");
TextureTransform15.scale = new SFVec2f(new float[60,16]);
Appearance12.textureTransform = TextureTransform15;

Shape11.appearance = Appearance12;

IndexedFaceSet IndexedFaceSet16 = createNode("IndexedFaceSet");
IndexedFaceSet16.creaseAngle = 0.5;
IndexedFaceSet16.texCoordIndex = new MFInt32(new int[2,19,20,30,22,-1,19,8,23,35,21,-1,28,24,38,40,-1,38,22,31,40,-1,32,10,41,43,-1,41,24,29,43,-1,20,44,39,31,-1,44,25,28,39,-1,25,46,42,29,-1,46,18,32,42,-1,23,50,48,36,-1,50,27,33,48,-1,27,53,51,34,-1,53,15,37,51,-1,33,26,45,49,-1,45,21,36,49,-1,37,18,47,52,-1,47,26,34,52,-1]);
IndexedFaceSet16.coordIndex = new MFInt32(new int[0,5,6,13,7,-1,5,1,8,16,6,-1,12,9,18,19,-1,18,7,13,19,-1,14,2,20,21,-1,20,9,12,21,-1,6,22,19,13,-1,22,10,12,19,-1,10,23,21,12,-1,23,4,14,21,-1,8,25,24,16,-1,25,11,15,24,-1,11,27,26,15,-1,27,3,17,26,-1,15,10,22,24,-1,22,6,16,24,-1,17,4,23,26,-1,23,10,15,26,-1]);
TextureCoordinate TextureCoordinate17 = createNode("TextureCoordinate");
TextureCoordinate17.point = new MFVec2f(new float[0.15625,1.80859,0.15625,2.39878,0.15625,2.98896,0.125,2.98896,0.09375,2.98896,0,2.39878,0,1.80859,0.03125,2.98896,0,2.98896,0.0625,2.98896,0.15625,1.2184,0.15625,1.5135,0.125,1.2184,0.03125,1.2184,0,1.5135,0,1.2184,0.0625,1.2184,0.09375,1.2184,0.078125,1.2184,0.078125,2.98896,0.078125,2.10368,0.078125,2.10368,0.15625,2.10368,0,2.10368,0.15625,1.66104,0.078125,1.66104,0.078125,1.66104,0,1.66104,0.117188,1.66104,0.117188,1.66104,0.117188,2.10368,0.117188,2.10368,0.117188,1.2184,0.0390625,1.66104,0.0390625,1.66104,0.0390625,2.10368,0.0390625,2.10368,0.0390625,1.2184,0.15625,1.88236,0.117188,1.88236,0.117188,1.88236,0.15625,1.43972,0.117188,1.43972,0.117188,1.43972,0.078125,1.88236,0.078125,1.88236,0.078125,1.43972,0.078125,1.43972,0.0390625,1.88236,0.0390625,1.88236,0,1.88236,0.0390625,1.43972,0.0390625,1.43972,0,1.43972]);
IndexedFaceSet16.texCoord = TextureCoordinate17;

Coordinate Coordinate18 = createNode("Coordinate");
Coordinate18.point = new MFVec3f(new float[-6.875,10,-59.7793,-10,10,-59.7793,-6.875,10,-24.3681,-10,10,-24.3681,-8.4375,10,-24.3681,-8.4375,10,-59.7793,-8.4375,10,-42.0737,-6.875,10,-42.0737,-10,10,-42.0737,-6.875,10,-33.2209,-8.4375,10,-33.2209,-10,10,-33.2209,-7.65625,10,-33.2209,-7.65625,10,-42.0737,-7.65625,10,-24.3681,-9.21875,10,-33.2209,-9.21875,10,-42.0737,-9.21875,10,-24.3681,-6.875,10,-37.6473,-7.65625,10,-37.6473,-6.875,10,-28.7945,-7.65625,10,-28.7945,-8.4375,10,-37.6473,-8.4375,10,-28.7945,-9.21875,10,-37.6473,-10,10,-37.6473,-9.21875,10,-28.7945,-10,10,-28.7945]);
IndexedFaceSet16.coord = Coordinate18;

Shape11.geometry = IndexedFaceSet16;

Transform10.child = new undefined();

Transform10.child[0] = Shape11;

Transform9.children = new MFNode();

Transform9.children[0] = Transform10;

Transform Transform19 = createNode("Transform");
Transform19.DEF = "str_norm";
Transform19.translation = new SFVec3f(new float[-0.596493,0.392951,22.1721]);
Transform19.rotation = new SFRotation(new float[-0.577915,-0.577843,-0.576292,2.09122]);
Transform19.scale = new SFVec3f(new float[24.5488,132.656,11.9505]);
Shape Shape20 = createNode("Shape");
Appearance Appearance21 = createNode("Appearance");
Material Material22 = createNode("Material");
Material22.ambientIntensity = 0.16;
Material22.diffuseColor = new SFColor(new float[1,1,1]);
Appearance21.material = Material22;

ImageTexture ImageTexture23 = createNode("ImageTexture");
ImageTexture23.url = new MFString(new java.lang.String["str_norm.png"]);
Appearance21.texture = ImageTexture23;

TextureTransform TextureTransform24 = createNode("TextureTransform");
TextureTransform24.scale = new SFVec2f(new float[2,7]);
Appearance21.textureTransform = TextureTransform24;

Shape20.appearance = Appearance21;

IndexedFaceSet IndexedFaceSet25 = createNode("IndexedFaceSet");
IndexedFaceSet25.coordIndex = new MFInt32(new int[0,5,15,16,-1,15,9,10,16,-1,5,1,17,15,-1,17,11,9,15,-1,9,19,18,10,-1,19,6,7,18,-1,11,20,19,9,-1,20,8,6,19,-1,6,22,21,7,-1,22,13,12,21,-1,13,24,23,12,-1,24,4,3,23,-1,8,25,22,6,-1,25,14,13,22,-1,14,26,24,13,-1,26,2,4,24,-1]);
TextureCoordinate TextureCoordinate26 = createNode("TextureCoordinate");
TextureCoordinate26.point = new MFVec2f(new float[0,0,1,0,1,1,0,1,0.5,1,0.5,0,0.5,0.5,0,0.5,1,0.5,0.5,0.25,0,0.25,1,0.25,0,0.75,0.5,0.75,1,0.75,0.5,0.125,0,0.125,1,0.125,0,0.375,0.5,0.375,1,0.375,0,0.625,0.5,0.625,0,0.875,0.5,0.875,1,0.625,1,0.875]);
IndexedFaceSet25.texCoord = TextureCoordinate26;

Coordinate Coordinate27 = createNode("Coordinate");
Coordinate27.point = new MFVec3f(new float[-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0,0,0.5,0,0,-0.5,0,0,0,0,-0.5,0,0,0.5,0,0,0,-0.25,0,-0.5,-0.25,0,0.5,-0.25,0,-0.5,0.25,0,0,0.25,0,0.5,0.25,0,0,-0.375,0,-0.5,-0.375,0,0.5,-0.375,0,-0.5,-0.125,0,0,-0.125,0,0.5,-0.125,0,-0.5,0.125,0,0,0.125,0,-0.5,0.375,0,0,0.375,0,0.5,0.125,0,0.5,0.375,0]);
IndexedFaceSet25.coord = Coordinate27;

Shape20.geometry = IndexedFaceSet25;

Transform19.child = new undefined();

Transform19.child[0] = Shape20;

Transform9.children[1] = Transform19;

children[1] = Transform9;

}
