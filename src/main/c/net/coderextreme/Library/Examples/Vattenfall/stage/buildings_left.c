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
meta3.content = "Sat, 25 Apr 2015 12:38:18 GMT";
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
meta6.content = "Sat, 25 Apr 2015 12:38:18 GMT";
head1.meta[4] = meta6;

head = head1;

WorldInfo WorldInfo8 = createNode("WorldInfo");
WorldInfo8.info = new MFString(new java.lang.String["Packaged by CosmoPackage"]);
children = new MFNode();

children[0] = WorldInfo8;

Transform Transform9 = createNode("Transform");
Transform9.DEF = "buildings-left";
Transform Transform10 = createNode("Transform");
Transform10.DEF = "buildings";
Transform Transform11 = createNode("Transform");
Transform11.translation = new SFVec3f(new float[-57.1823,9.44531,-1.0095]);
Transform11.scale = new SFVec3f(new float[0.944059,1,1.15832]);
Shape Shape12 = createNode("Shape");
Appearance Appearance13 = createNode("Appearance");
Material Material14 = createNode("Material");
Appearance13.material = Material14;

ImageTexture ImageTexture15 = createNode("ImageTexture");
ImageTexture15.url = new MFString(new java.lang.String["haus1.jpg"]);
Appearance13.texture = ImageTexture15;

Shape12.appearance = Appearance13;

IndexedFaceSet IndexedFaceSet16 = createNode("IndexedFaceSet");
IndexedFaceSet16.creaseAngle = 0.5;
IndexedFaceSet16.texCoordIndex = new MFInt32(new int[0,1,3,2,-1,0,1,5,4,-1,5,3,2,4,-1]);
IndexedFaceSet16.coordIndex = new MFInt32(new int[2,3,5,4,-1,0,1,7,6,-1,7,3,2,6,-1]);
TextureCoordinate TextureCoordinate17 = createNode("TextureCoordinate");
TextureCoordinate17.point = new MFVec2f(new float[0,1,0,0,1,1,1,0,0.790594,1,0.790594,0]);
IndexedFaceSet16.texCoord = TextureCoordinate17;

Coordinate Coordinate18 = createNode("Coordinate");
Coordinate18.point = new MFVec3f(new float[-10,10,10,-10,-10,10,10,10,7.7781,10,-10,7.7781,10,10,-10,10,-10,-10,5.81188,10,10,5.81187,-10,10]);
IndexedFaceSet16.coord = Coordinate18;

Shape12.geometry = IndexedFaceSet16;

Transform11.child = new undefined();

Transform11.child[0] = Shape12;

Transform10.children = new MFNode();

Transform10.children[0] = Transform11;

Transform Transform19 = createNode("Transform");
Transform19.translation = new SFVec3f(new float[-62.2924,9.44532,-24.1592]);
Transform19.scale = new SFVec3f(new float[0.944059,1,1.15832]);
Shape Shape20 = createNode("Shape");
Appearance Appearance21 = createNode("Appearance");
Material Material22 = createNode("Material");
Appearance21.material = Material22;

ImageTexture ImageTexture23 = createNode("ImageTexture");
ImageTexture23.DEF = "_1";
ImageTexture23.url = new MFString(new java.lang.String["haus2.jpg"]);
Appearance21.texture = ImageTexture23;

Shape20.appearance = Appearance21;

IndexedFaceSet IndexedFaceSet24 = createNode("IndexedFaceSet");
IndexedFaceSet24.creaseAngle = 0.5;
IndexedFaceSet24.coordIndex = new MFInt32(new int[0,1,3,2,-1]);
TextureCoordinate TextureCoordinate25 = createNode("TextureCoordinate");
TextureCoordinate25.point = new MFVec2f(new float[0,1,0,0,1,1,1,0]);
IndexedFaceSet24.texCoord = TextureCoordinate25;

Coordinate Coordinate26 = createNode("Coordinate");
Coordinate26.point = new MFVec3f(new float[10,10,10,10,-10,10,10,10,-10,10,-10,-10]);
IndexedFaceSet24.coord = Coordinate26;

Shape20.geometry = IndexedFaceSet24;

Transform19.child = new undefined();

Transform19.child[0] = Shape20;

Transform10.children[1] = Transform19;

Transform Transform27 = createNode("Transform");
Transform27.translation = new SFVec3f(new float[-58.4409,9.44532,-47.1315]);
Transform27.scale = new SFVec3f(new float[0.944059,1,1.15832]);
Shape Shape28 = createNode("Shape");
Appearance Appearance29 = createNode("Appearance");
Material Material30 = createNode("Material");
Appearance29.material = Material30;

ImageTexture ImageTexture31 = createNode("ImageTexture");
ImageTexture31.USE = "_1";
Appearance29.texture = ImageTexture31;

Shape28.appearance = Appearance29;

IndexedFaceSet IndexedFaceSet32 = createNode("IndexedFaceSet");
IndexedFaceSet32.creaseAngle = 0.5;
IndexedFaceSet32.texCoordIndex = new MFInt32(new int[0,1,3,2,-1,0,1,3,2,-1]);
IndexedFaceSet32.coordIndex = new MFInt32(new int[0,1,3,2,-1,2,3,5,4,-1]);
TextureCoordinate TextureCoordinate33 = createNode("TextureCoordinate");
TextureCoordinate33.point = new MFVec2f(new float[0,1,0,0,1,1,1,0]);
IndexedFaceSet32.texCoord = TextureCoordinate33;

Coordinate Coordinate34 = createNode("Coordinate");
Coordinate34.point = new MFVec3f(new float[-10,10,10,-10,-10,10,10,10,10,10,-10,10,10,10,-10,10,-10,-10]);
IndexedFaceSet32.coord = Coordinate34;

Shape28.geometry = IndexedFaceSet32;

Transform27.child = new undefined();

Transform27.child[0] = Shape28;

Transform10.children[2] = Transform27;

Transform9.children = new MFNode();

Transform9.children[0] = Transform10;

Transform Transform35 = createNode("Transform");
Transform35.DEF = "floor";
Transform Transform36 = createNode("Transform");
Transform36.translation = new SFVec3f(new float[-43.4171,0.188247,-25.5435]);
Transform36.rotation = new SFRotation(new float[-0.000949805,0.707105,0.707108,3.14349]);
Transform36.scale = new SFVec3f(new float[18.9453,71.9534,11.9447]);
Shape Shape37 = createNode("Shape");
Appearance Appearance38 = createNode("Appearance");
Material Material39 = createNode("Material");
Material39.ambientIntensity = 0.16;
Material39.diffuseColor = new SFColor(new float[1,1,1]);
Appearance38.material = Material39;

ImageTexture ImageTexture40 = createNode("ImageTexture");
ImageTexture40.url = new MFString(new java.lang.String["str_norm.png"]);
Appearance38.texture = ImageTexture40;

TextureTransform TextureTransform41 = createNode("TextureTransform");
TextureTransform41.scale = new SFVec2f(new float[2,5]);
Appearance38.textureTransform = TextureTransform41;

Shape37.appearance = Appearance38;

IndexedFaceSet IndexedFaceSet42 = createNode("IndexedFaceSet");
IndexedFaceSet42.coordIndex = new MFInt32(new int[0,3,10,11,-1,10,6,7,11,-1,6,13,12,7,-1,13,4,5,12,-1,4,15,14,5,-1,15,9,8,14,-1,9,17,16,8,-1,17,2,1,16,-1]);
TextureCoordinate TextureCoordinate43 = createNode("TextureCoordinate");
TextureCoordinate43.point = new MFVec2f(new float[0,0,0,1,0.5,1,0.5,0,0.5,0.5,0,0.5,0.5,0.25,0,0.25,0,0.75,0.5,0.75,0.5,0.125,0,0.125,0,0.375,0.5,0.375,0,0.625,0.5,0.625,0,0.875,0.5,0.875]);
IndexedFaceSet42.texCoord = TextureCoordinate43;

Coordinate Coordinate44 = createNode("Coordinate");
Coordinate44.point = new MFVec3f(new float[-0.5,-0.5,0,-0.5,0.5,0,0,0.5,0,0,-0.5,0,0,0,0,-0.5,0,0,0,-0.25,0,-0.5,-0.25,0,-0.5,0.25,0,0,0.25,0,0,-0.375,0,-0.5,-0.375,0,-0.5,-0.125,0,0,-0.125,0,-0.5,0.125,0,0,0.125,0,-0.5,0.375,0,0,0.375,0]);
IndexedFaceSet42.coord = Coordinate44;

Shape37.geometry = IndexedFaceSet42;

Transform36.child = new undefined();

Transform36.child[0] = Shape37;

Transform35.children = new MFNode();

Transform35.children[0] = Transform36;

Transform Transform45 = createNode("Transform");
Transform45.translation = new SFVec3f(new float[-18.3245,-1.73798,36.0234]);
Transform45.scale = new SFVec3f(new float[3.58919,0.202305,1.03599]);
Shape Shape46 = createNode("Shape");
Appearance Appearance47 = createNode("Appearance");
Material Material48 = createNode("Material");
Appearance47.material = Material48;

ImageTexture ImageTexture49 = createNode("ImageTexture");
ImageTexture49.DEF = "_2";
ImageTexture49.url = new MFString(new java.lang.String["fussweg.png"]);
Appearance47.texture = ImageTexture49;

TextureTransform TextureTransform50 = createNode("TextureTransform");
TextureTransform50.scale = new SFVec2f(new float[60,16]);
Appearance47.textureTransform = TextureTransform50;

Shape46.appearance = Appearance47;

IndexedFaceSet IndexedFaceSet51 = createNode("IndexedFaceSet");
IndexedFaceSet51.creaseAngle = 0.5;
IndexedFaceSet51.texCoordIndex = new MFInt32(new int[2,8,15,10,-1]);
IndexedFaceSet51.coordIndex = new MFInt32(new int[0,1,3,2,-1]);
TextureCoordinate TextureCoordinate52 = createNode("TextureCoordinate");
TextureCoordinate52.point = new MFVec2f(new float[0.15625,1.80859,0.15625,2.39878,0.15625,2.98896,0.125,2.98896,0.09375,2.98896,0,2.39878,0,1.80859,0.03125,2.98896,0,2.98896,0.0625,2.98896,0.15625,1.2184,0.15625,1.5135,0.125,1.2184,0.03125,1.2184,0,1.5135,0,1.2184,0.0625,1.2184,0.09375,1.2184]);
IndexedFaceSet51.texCoord = TextureCoordinate52;

Coordinate Coordinate53 = createNode("Coordinate");
Coordinate53.point = new MFVec3f(new float[-6.875,10,-59.7793,-10,10,-59.7793,-6.875,10,-24.3681,-10,10,-24.3681]);
IndexedFaceSet51.coord = Coordinate53;

Shape46.geometry = IndexedFaceSet51;

Transform45.child = new undefined();

Transform45.child[0] = Shape46;

Transform35.children[1] = Transform45;

Transform Transform54 = createNode("Transform");
Transform54.translation = new SFVec3f(new float[-18.3245,-1.73798,-0.625544]);
Transform54.scale = new SFVec3f(new float[3.58919,0.202305,1.03599]);
Shape Shape55 = createNode("Shape");
Appearance Appearance56 = createNode("Appearance");
Material Material57 = createNode("Material");
Appearance56.material = Material57;

ImageTexture ImageTexture58 = createNode("ImageTexture");
ImageTexture58.USE = "_2";
Appearance56.texture = ImageTexture58;

TextureTransform TextureTransform59 = createNode("TextureTransform");
TextureTransform59.scale = new SFVec2f(new float[60,16]);
Appearance56.textureTransform = TextureTransform59;

Shape55.appearance = Appearance56;

IndexedFaceSet IndexedFaceSet60 = createNode("IndexedFaceSet");
IndexedFaceSet60.creaseAngle = 0.5;
IndexedFaceSet60.texCoordIndex = new MFInt32(new int[2,8,15,10,-1]);
IndexedFaceSet60.coordIndex = new MFInt32(new int[0,1,3,2,-1]);
TextureCoordinate TextureCoordinate61 = createNode("TextureCoordinate");
TextureCoordinate61.point = new MFVec2f(new float[0.15625,1.80859,0.15625,2.39878,0.15625,2.98896,0.125,2.98896,0.09375,2.98896,0,2.39878,0,1.80859,0.03125,2.98896,0,2.98896,0.0625,2.98896,0.15625,1.2184,0.15625,1.5135,0.125,1.2184,0.03125,1.2184,0,1.5135,0,1.2184,0.0625,1.2184,0.09375,1.2184]);
IndexedFaceSet60.texCoord = TextureCoordinate61;

Coordinate Coordinate62 = createNode("Coordinate");
Coordinate62.point = new MFVec3f(new float[-6.875,10,-59.7793,-10,10,-59.7793,-6.875,10,-24.3681,-10,10,-24.3681]);
IndexedFaceSet60.coord = Coordinate62;

Shape55.geometry = IndexedFaceSet60;

Transform54.child = new undefined();

Transform54.child[0] = Shape55;

Transform35.children[2] = Transform54;

Transform9.children[1] = Transform35;

children[1] = Transform9;

}
