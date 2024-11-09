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
meta3.content = "Thu, 23 Apr 2015 06:07:17 GMT";
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
meta6.content = "Thu, 23 Apr 2015 06:07:17 GMT";
head1.meta[4] = meta6;

head = head1;

WorldInfo WorldInfo8 = createNode("WorldInfo");
WorldInfo8.info = new MFString(new java.lang.String["Packaged by CosmoPackage"]);
children = new MFNode();

children[0] = WorldInfo8;

Transform Transform9 = createNode("Transform");
Transform9.DEF = "zoom";
Transform9.translation = new SFVec3f(new float[0.18781,-0.0542612,-0.29764]);
Transform9.scale = new SFVec3f(new float[0.0336106,0.0850584,1.06768]);
Shape Shape10 = createNode("Shape");
Appearance Appearance11 = createNode("Appearance");
Material Material12 = createNode("Material");
Material12.ambientIntensity = 0;
Material12.diffuseColor = new SFColor(new float[0,0,0]);
Material12.emissiveColor = new SFColor(new float[1,0.0552964,0]);
Material12.shininess = 0;
Material12.transparency = 0.734043;
Appearance11.material = Material12;

ImageTexture ImageTexture13 = createNode("ImageTexture");
ImageTexture13.url = new MFString(new java.lang.String["reflect2.png"]);
Appearance11.texture = ImageTexture13;

Shape10.appearance = Appearance11;

IndexedFaceSet IndexedFaceSet14 = createNode("IndexedFaceSet");
IndexedFaceSet14.creaseAngle = 0.5;
IndexedFaceSet14.coordIndex = new MFInt32(new int[1,0,3,2,-1]);
TextureCoordinate TextureCoordinate15 = createNode("TextureCoordinate");
TextureCoordinate15.point = new MFVec2f(new float[0.00516611,202.718,0.00516611,158.648,0.247524,-35.8107,0.491422,-21.6497,0.457532,202.718,0.457532,158.648,0.00516611,198.23,0.909898,163.137,0.879118,202.718,0.247524,-35.8107,0.0157531,-35.81]);
IndexedFaceSet14.texCoord = TextureCoordinate15;

Coordinate Coordinate16 = createNode("Coordinate");
Coordinate16.point = new MFVec3f(new float[-0.230846,-0.066663,0,-0.230846,-0.193214,0,0.101703,-0.193214,0,0.101703,-0.066663,0]);
IndexedFaceSet14.coord = Coordinate16;

Shape10.geometry = IndexedFaceSet14;

Transform9.child = new undefined();

Transform9.child[0] = Shape10;

children[1] = Transform9;

}
