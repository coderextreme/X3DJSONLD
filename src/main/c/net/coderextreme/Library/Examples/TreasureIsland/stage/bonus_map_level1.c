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
meta3.content = "Thu, 05 Nov 2015 03:28:55 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V1.2.0, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Thu, 05 Nov 2015 03:28:55 GMT";
head1.meta[4] = meta6;

head = head1;

Group Group8 = createNode("Group");
WorldInfo WorldInfo9 = createNode("WorldInfo");
WorldInfo9.info = new MFString(new java.lang.String[", ","Created in Titania, ","Packaged by CosmoPackagePackaged by CosmoPackage"]);
Group8.children = new MFNode();

Group8.children[0] = WorldInfo9;

Transform Transform10 = createNode("Transform");
Transform10.DEF = "level1";
Transform Transform11 = createNode("Transform");
Transform11.DEF = "Glow1";
Transform Transform12 = createNode("Transform");
Transform12.DEF = "Glow";
Billboard Billboard13 = createNode("Billboard");
Billboard13.axisOfRotation = new SFVec3f(new float[0,0,0]);
Transform Transform14 = createNode("Transform");
Transform14.DEF = "glow";
Shape Shape15 = createNode("Shape");
Appearance Appearance16 = createNode("Appearance");
ImageTexture ImageTexture17 = createNode("ImageTexture");
ImageTexture17.url = new MFString(new java.lang.String["bm-glow.png"]);
Appearance16.texture = ImageTexture17;

Shape15.appearance = Appearance16;

IndexedFaceSet IndexedFaceSet18 = createNode("IndexedFaceSet");
IndexedFaceSet18.colorIndex = new MFInt32(new int[1,1,1,-1,1,1,1,-1]);
IndexedFaceSet18.coordIndex = new MFInt32(new int[1,2,0,-1,2,3,0,-1]);
Color Color19 = createNode("Color");
Color19.color = new MFColor(new float[0.8,0.198115,0,1,0.0603581,0]);
IndexedFaceSet18.color = Color19;

TextureCoordinate TextureCoordinate20 = createNode("TextureCoordinate");
TextureCoordinate20.point = new MFVec2f(new float[0,0,1,0,1,1,0,1,1,0.5,0,0.5,0.5,1,0.5,0]);
IndexedFaceSet18.texCoord = TextureCoordinate20;

Coordinate Coordinate21 = createNode("Coordinate");
Coordinate21.point = new MFVec3f(new float[-0.5,-0.502186,0,0.5,-0.502186,0,0.5,0.497814,0,-0.5,0.497814,0]);
IndexedFaceSet18.coord = Coordinate21;

Shape15.geometry = IndexedFaceSet18;

Transform14.child = new undefined();

Transform14.child[0] = Shape15;

Billboard13.children = new MFNode();

Billboard13.children[0] = Transform14;

Transform12.children = new MFNode();

Transform12.children[0] = Billboard13;

Transform11.children = new MFNode();

Transform11.children[0] = Transform12;

Transform10.children = new MFNode();

Transform10.children[0] = Transform11;

Group8.children[1] = Transform10;

children = new MFNode();

children[0] = Group8;

}
