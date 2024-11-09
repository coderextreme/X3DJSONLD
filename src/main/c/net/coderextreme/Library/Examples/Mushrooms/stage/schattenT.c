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
meta3.content = "Fri, 25 Sep 2015 17:43:15 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V1.1.1, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Fri, 25 Sep 2015 17:43:15 GMT";
head1.meta[4] = meta6;

head = head1;

Transform Transform8 = createNode("Transform");
Transform8.DEF = "Background";
Background Background9 = createNode("Background");
Background9.skyAngle = new MFFloat(new float[0.8,1.3,1.4,1.5708]);
Background9.skyColor = new MFColor(new float[0.21,0.31,0.59,0.33,0.45,0.7,0.57,0.66,0.85,0.6,0.73,0.89,0.7,0.83,0.98]);
Background9.groundAngle = new MFFloat(new float[0.6,1.2,1.3,1.5708]);
Background9.groundColor = new MFColor(new float[0.21,0.31,0.59,0.33,0.45,0.7,0.57,0.66,0.85,0.6,0.73,0.89,0.7,0.83,0.98]);
Transform8.children = new MFNode();

Transform8.children[0] = Background9;

children = new MFNode();

children[0] = Transform8;

Transform Transform10 = createNode("Transform");
Transform10.DEF = "schatten_1";
Shape Shape11 = createNode("Shape");
Appearance Appearance12 = createNode("Appearance");
Material Material13 = createNode("Material");
Appearance12.material = Material13;

ImageTexture ImageTexture14 = createNode("ImageTexture");
ImageTexture14.url = new MFString(new java.lang.String["pilzshadow.png"]);
Appearance12.texture = ImageTexture14;

Shape11.appearance = Appearance12;

IndexedFaceSet IndexedFaceSet15 = createNode("IndexedFaceSet");
IndexedFaceSet15.creaseAngle = 0.5;
IndexedFaceSet15.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate16 = createNode("TextureCoordinate");
TextureCoordinate16.point = new MFVec2f(new float[0,1,0,0,1,0,1,1]);
IndexedFaceSet15.texCoord = TextureCoordinate16;

Coordinate Coordinate17 = createNode("Coordinate");
Coordinate17.point = new MFVec3f(new float[-3.22547,0.0167124,-3.22547,-3.22547,0.0167124,3.22547,3.22547,0.0167124,3.22547,3.22547,0.0167124,-3.22547]);
IndexedFaceSet15.coord = Coordinate17;

Shape11.geometry = IndexedFaceSet15;

Transform10.child = new undefined();

Transform10.child[0] = Shape11;

children[1] = Transform10;

Transform Transform18 = createNode("Transform");
Transform18.DEF = "schatten";
Transform18.translation = new SFVec3f(new float[6,0,0]);
Shape Shape19 = createNode("Shape");
Appearance Appearance20 = createNode("Appearance");
Material Material21 = createNode("Material");
Appearance20.material = Material21;

ImageTexture ImageTexture22 = createNode("ImageTexture");
ImageTexture22.url = new MFString(new java.lang.String["pilzshadow.png"]);
Appearance20.texture = ImageTexture22;

Shape19.appearance = Appearance20;

IndexedFaceSet IndexedFaceSet23 = createNode("IndexedFaceSet");
IndexedFaceSet23.creaseAngle = 0.5;
IndexedFaceSet23.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate24 = createNode("TextureCoordinate");
TextureCoordinate24.point = new MFVec2f(new float[0,1,0,0,1,0,1,1]);
IndexedFaceSet23.texCoord = TextureCoordinate24;

Coordinate Coordinate25 = createNode("Coordinate");
Coordinate25.point = new MFVec3f(new float[-3.22547,0.0167124,-3.22547,-3.22547,0.0167124,3.22547,3.22547,0.0167124,3.22547,3.22547,0.0167124,-3.22547]);
IndexedFaceSet23.coord = Coordinate25;

Shape19.geometry = IndexedFaceSet23;

Transform18.child = new undefined();

Transform18.child[0] = Shape19;

children[2] = Transform18;

}
