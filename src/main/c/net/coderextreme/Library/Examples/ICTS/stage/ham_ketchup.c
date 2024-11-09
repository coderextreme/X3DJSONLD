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
meta3.content = "Thu, 23 Apr 2015 06:07:05 GMT";
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
meta6.content = "Thu, 23 Apr 2015 06:07:05 GMT";
head1.meta[4] = meta6;

head = head1;

WorldInfo WorldInfo8 = createNode("WorldInfo");
WorldInfo8.info = new MFString(new java.lang.String[", ","Created in TitaniaPackaged by CosmoPackage"]);
children = new MFNode();

children[0] = WorldInfo8;

Transform Transform9 = createNode("Transform");
Transform9.DEF = "ketchup";
Transform9.translation = new SFVec3f(new float[0,-0.0445648,0]);
Transform9.scale = new SFVec3f(new float[3.78678,3.78678,3.78678]);
Shape Shape10 = createNode("Shape");
Appearance Appearance11 = createNode("Appearance");
ImageTexture ImageTexture12 = createNode("ImageTexture");
ImageTexture12.url = new MFString(new java.lang.String["ketchup.png"]);
Appearance11.texture = ImageTexture12;

Shape10.appearance = Appearance11;

IndexedFaceSet IndexedFaceSet13 = createNode("IndexedFaceSet");
IndexedFaceSet13.creaseAngle = 0.5;
IndexedFaceSet13.texCoordIndex = new MFInt32(new int[10,8,16,14,-1,4,17,13,11,-1,18,4,12,22,-1,9,23,21,20,-1,24,5,28,26,-1,8,29,25,15,-1,27,5,30,32,-1,33,9,19,31,-1,17,3,13,-1,3,10,13,-1,0,31,30,-1,0,33,31,-1,23,1,21,-1,1,18,21,-1,29,2,25,-1,2,24,25,-1,19,6,32,-1,6,27,32,-1,16,7,14,-1,7,11,14,-1,12,6,22,-1,6,20,22,-1,28,7,26,-1,7,15,26,-1]);
IndexedFaceSet13.coordIndex = new MFInt32(new int[9,7,12,11,-1,4,13,11,10,-1,14,4,10,16,-1,8,17,16,15,-1,18,5,20,19,-1,7,21,19,12,-1,20,5,22,23,-1,24,8,15,23,-1,13,1,11,-1,1,9,11,-1,3,23,22,-1,3,24,23,-1,17,0,16,-1,0,14,16,-1,21,2,19,-1,2,18,19,-1,15,6,23,-1,6,20,23,-1,12,6,11,-1,6,10,11,-1,10,6,16,-1,6,15,16,-1,20,6,19,-1,6,12,19,-1]);
TextureCoordinate TextureCoordinate14 = createNode("TextureCoordinate");
TextureCoordinate14.point = new MFVec2f(new float[0,1,0,0,1,1,1,0,0.5,0,0.5,1,0.5,0.5,0.5,0.5,1,0.5,0,0.5,1,0.25,0.5,0.25,0.5,0.25,0.75,0.25,0.75,0.25,0.75,0.5,0.75,0.5,0.75,0,0.25,0,0.25,0.5,0.25,0.5,0.25,0.25,0.25,0.25,0,0.25,0.75,1,0.75,0.75,0.75,0.75,0.5,0.75,0.5,0.75,1,0.75,0.25,1,0.25,0.75,0.25,0.75,0,0.75]);
IndexedFaceSet13.texCoord = TextureCoordinate14;

Coordinate Coordinate15 = createNode("Coordinate");
Coordinate15.point = new MFVec3f(new float[-0.01,0.01,0.01,0.01,0.01,0.01,0.01,0.01,-0.01,-0.01,0.01,-0.01,0,0.01,0.01,0,0.01,-0.01,0,0.013539,0,0.01,0.01,0,-0.01,0.01,0,0.01,0.01,0.005,0,0.0120447,0.005,0.005,0.0120447,0.005,0.005,0.0120447,0,0.005,0.01,0.01,-0.005,0.01,0.01,-0.005,0.0120447,0,-0.005,0.0120447,0.005,-0.01,0.01,0.005,0.005,0.01,-0.01,0.005,0.0120447,-0.005,0,0.0120447,-0.005,0.01,0.01,-0.005,-0.005,0.01,-0.01,-0.005,0.0120447,-0.005,-0.01,0.01,-0.005]);
IndexedFaceSet13.coord = Coordinate15;

Shape10.geometry = IndexedFaceSet13;

Transform9.child = new undefined();

Transform9.child[0] = Shape10;

children[1] = Transform9;

}
