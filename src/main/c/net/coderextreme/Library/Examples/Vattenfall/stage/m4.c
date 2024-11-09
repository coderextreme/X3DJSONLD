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
meta3.content = "Sat, 25 Apr 2015 12:38:23 GMT";
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
meta6.content = "Sat, 25 Apr 2015 12:38:23 GMT";
head1.meta[4] = meta6;

head = head1;

WorldInfo WorldInfo8 = createNode("WorldInfo");
WorldInfo8.info = new MFString(new java.lang.String[", ","Created in CosmoWorldsPackaged by CosmoPackage"]);
children = new MFNode();

children[0] = WorldInfo8;

Transform Transform9 = createNode("Transform");
Transform9.translation = new SFVec3f(new float[0.192385,0.223635,-0.299671]);
Transform9.scale = new SFVec3f(new float[0.0495934,0.198373,0.0387454]);
Shape Shape10 = createNode("Shape");
Appearance Appearance11 = createNode("Appearance");
ImageTexture ImageTexture12 = createNode("ImageTexture");
ImageTexture12.url = new MFString(new java.lang.String["filme.png"]);
Appearance11.texture = ImageTexture12;

Shape10.appearance = Appearance11;

IndexedFaceSet IndexedFaceSet13 = createNode("IndexedFaceSet");
IndexedFaceSet13.solid = False;
IndexedFaceSet13.colorPerVertex = False;
IndexedFaceSet13.colorIndex = new MFInt32(new int[0]);
IndexedFaceSet13.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Color Color14 = createNode("Color");
Color14.color = new MFColor(new float[0,0.985749,1]);
IndexedFaceSet13.color = Color14;

TextureCoordinate TextureCoordinate15 = createNode("TextureCoordinate");
TextureCoordinate15.point = new MFVec2f(new float[1,0.294205,1,0.4437,0,0.4437,0,0.294205]);
IndexedFaceSet13.texCoord = TextureCoordinate15;

Coordinate Coordinate16 = createNode("Coordinate");
Coordinate16.point = new MFVec3f(new float[0.5,-0.205795,0,0.5,-0.0562996,0,-0.5,-0.0562996,0,-0.5,-0.205795,0]);
IndexedFaceSet13.coord = Coordinate16;

Shape10.geometry = IndexedFaceSet13;

Transform9.child = new undefined();

Transform9.child[0] = Shape10;

children[1] = Transform9;

}
