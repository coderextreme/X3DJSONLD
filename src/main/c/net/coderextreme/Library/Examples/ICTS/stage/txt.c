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
WorldInfo8.info = new MFString(new java.lang.String[", ","Created in TitaniaPackaged by CosmoPackage"]);
children = new MFNode();

children[0] = WorldInfo8;

LOD LOD9 = createNode("LOD");
Transform Transform10 = createNode("Transform");
Transform Transform11 = createNode("Transform");
Transform Transform12 = createNode("Transform");
Transform12.translation = new SFVec3f(new float[-0.036226,1.98503,-1.18758]);
Transform12.rotation = new SFRotation(new float[1,0,0,1.5708]);
Transform12.scale = new SFVec3f(new float[8.67144,1.3212,1.59196]);
Shape Shape13 = createNode("Shape");
Appearance Appearance14 = createNode("Appearance");
Material Material15 = createNode("Material");
Material15.ambientIntensity = 0;
Material15.diffuseColor = new SFColor(new float[0,0,0]);
Material15.emissiveColor = new SFColor(new float[0.43617,0,0.0460901]);
Material15.shininess = 0;
Material15.transparency = 0.265957;
Appearance14.material = Material15;

Shape13.appearance = Appearance14;

IndexedFaceSet IndexedFaceSet16 = createNode("IndexedFaceSet");
IndexedFaceSet16.creaseAngle = 0.5;
IndexedFaceSet16.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate17 = createNode("Coordinate");
Coordinate17.point = new MFVec3f(new float[-1,1,-1,-1,1,1,1,1,1,1,1,-1]);
IndexedFaceSet16.coord = Coordinate17;

Shape13.geometry = IndexedFaceSet16;

Transform12.child = new undefined();

Transform12.child[0] = Shape13;

Transform11.children = new MFNode();

Transform11.children[0] = Transform12;

Transform Transform18 = createNode("Transform");
Transform18.DEF = "t";
Transform18.translation = new SFVec3f(new float[-0.0362264,2.78814,0.274026]);
Transform18.scale = new SFVec3f(new float[0.0339055,0.0339054,0.0339054]);
Shape Shape19 = createNode("Shape");
Appearance Appearance20 = createNode("Appearance");
Material Material21 = createNode("Material");
Material21.ambientIntensity = 0;
Material21.diffuseColor = new SFColor(new float[0,0,0]);
Material21.emissiveColor = new SFColor(new float[1,0.842126,0]);
Material21.shininess = 0;
Appearance20.material = Material21;

ImageTexture ImageTexture22 = createNode("ImageTexture");
ImageTexture22.DEF = "_1";
ImageTexture22.url = new MFString(new java.lang.String["mibtxt1.gif"]);
Appearance20.texture = ImageTexture22;

Shape19.appearance = Appearance20;

Text Text23 = createNode("Text");
Text23.string = new MFString(new java.lang.String["\"MEN IN BLACK\""]);
Text23.length = new MFFloat(new float[0]);
FontStyle FontStyle24 = createNode("FontStyle");
FontStyle24.family = new MFString(new java.lang.String["SANS"]);
FontStyle24.size = 24;
FontStyle24.justify = new MFString(new java.lang.String["MIDDLE"]);
Text23.fontStyle = FontStyle24;

Shape19.geometry = Text23;

Transform18.child = new undefined();

Transform18.child[0] = Shape19;

Transform11.children[1] = Transform18;

Transform Transform25 = createNode("Transform");
Transform25.DEF = "f";
Transform25.translation = new SFVec3f(new float[-8.30206,2.03672,0.269761]);
Transform25.scale = new SFVec3f(new float[0.0377924,0.0377925,0.0377923]);
Shape Shape26 = createNode("Shape");
Appearance Appearance27 = createNode("Appearance");
Material Material28 = createNode("Material");
Material28.ambientIntensity = 0;
Material28.diffuseColor = new SFColor(new float[0,0,0]);
Material28.emissiveColor = new SFColor(new float[1,1,1]);
Material28.shininess = 0;
Appearance27.material = Material28;

ImageTexture ImageTexture29 = createNode("ImageTexture");
ImageTexture29.USE = "_1";
Appearance27.texture = ImageTexture29;

Shape26.appearance = Appearance27;

Text Text30 = createNode("Text");
Text30.string = new MFString(new java.lang.String[", ","Sie schützen die Welt vor dem Abschaum des Universums. Mit dicken, ","Kanonen und Gehirnpiespsdingsdas werden viele Leute geblitzdingst.Komm' näher, wenn Du den Trailer sehen willst."]);
Text30.length = new MFFloat(new float[0]);
FontStyle FontStyle31 = createNode("FontStyle");
FontStyle31.family = new MFString(new java.lang.String["SANS"]);
FontStyle31.size = 14;
Text30.fontStyle = FontStyle31;

Shape26.geometry = Text30;

Transform25.child = new undefined();

Transform25.child[0] = Shape26;

Transform11.children[2] = Transform25;

Transform10.children = new MFNode();

Transform10.children[0] = Transform11;

LOD9.children = new MFNode();

LOD9.children[0] = Transform10;

Transform Transform32 = createNode("Transform");
Transform Transform33 = createNode("Transform");
Transform33.DEF = "b";
Transform33.translation = new SFVec3f(new float[-0.036226,1.98503,-1.18758]);
Transform33.rotation = new SFRotation(new float[1,0,0,1.5708]);
Transform33.scale = new SFVec3f(new float[8.67144,1.3212,1.59196]);
Shape Shape34 = createNode("Shape");
Appearance Appearance35 = createNode("Appearance");
ImageTexture ImageTexture36 = createNode("ImageTexture");
ImageTexture36.USE = "_1";
Appearance35.texture = ImageTexture36;

Shape34.appearance = Appearance35;

IndexedFaceSet IndexedFaceSet37 = createNode("IndexedFaceSet");
IndexedFaceSet37.creaseAngle = 0.5;
IndexedFaceSet37.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate38 = createNode("TextureCoordinate");
TextureCoordinate38.point = new MFVec2f(new float[0,1,0,0,1,0,1,1]);
IndexedFaceSet37.texCoord = TextureCoordinate38;

Coordinate Coordinate39 = createNode("Coordinate");
Coordinate39.point = new MFVec3f(new float[-1,1,-1,-1,1,1,1,1,1,1,1,-1]);
IndexedFaceSet37.coord = Coordinate39;

Shape34.geometry = IndexedFaceSet37;

Transform33.child = new undefined();

Transform33.child[0] = Shape34;

Transform32.children = new MFNode();

Transform32.children[0] = Transform33;

LOD9.children[1] = Transform32;

children[1] = LOD9;

}
