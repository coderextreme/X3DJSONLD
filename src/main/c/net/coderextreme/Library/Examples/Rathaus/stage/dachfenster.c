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
meta3.content = "Sun, 15 Mar 2015 09:33:32 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V0.7.6, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Sun, 15 Mar 2015 09:33:32 GMT";
head1.meta[4] = meta6;

head = head1;

WorldInfo WorldInfo8 = createNode("WorldInfo");
WorldInfo8.info = new MFString(new java.lang.String[", ","Created in TitaniaPackaged by CosmoPackage"]);
children = new MFNode();

children[0] = WorldInfo8;

Transform Transform9 = createNode("Transform");
Transform Transform10 = createNode("Transform");
Transform10.DEF = "nurbsToPoly141";
Shape Shape11 = createNode("Shape");
Appearance Appearance12 = createNode("Appearance");
Material Material13 = createNode("Material");
Material13.ambientIntensity = 0.341818;
Material13.diffuseColor = new SFColor(new float[0.585106,0.0214792,0]);
Appearance12.material = Material13;

ImageTexture ImageTexture14 = createNode("ImageTexture");
ImageTexture14.DEF = "_1";
ImageTexture14.url = new MFString(new java.lang.String["dachziegel.jpg"]);
Appearance12.texture = ImageTexture14;

Shape11.appearance = Appearance12;

IndexedFaceSet IndexedFaceSet15 = createNode("IndexedFaceSet");
IndexedFaceSet15.DEF = "nurbsToPoly141_0Geo";
IndexedFaceSet15.convex = False;
IndexedFaceSet15.texCoordIndex = new MFInt32(new int[8,1,2,9,-1,0,10,11,3,-1,4,6,7,5,-1]);
IndexedFaceSet15.coordIndex = new MFInt32(new int[6,1,2,7,-1,0,4,5,3,-1,4,6,7,5,-1]);
TextureCoordinate TextureCoordinate16 = createNode("TextureCoordinate");
TextureCoordinate16.point = new MFVec2f(new float[0,0,0,0,1,0.410596,1,0.410596,0,1.03747,0.99853,1.03894,0.00146949,0,1,0.0014694,0,0.455482,1,0.866814,0,0.455482,1,0.866814]);
IndexedFaceSet15.texCoord = TextureCoordinate16;

Coordinate Coordinate17 = createNode("Coordinate");
Coordinate17.DEF = "nurbsToPoly141GeoPoints";
Coordinate17.point = new MFVec3f(new float[-0.69,4.401,-8.965,-0.688,4.401,-7.553,0.671,4.959,-7.555,0.669,4.959,-8.967,-0.69,5.02,-8.965,0.669,5.579,-8.967,-0.688,5.02,-7.553,0.671,5.579,-7.555]);
IndexedFaceSet15.coord = Coordinate17;

Shape11.geometry = IndexedFaceSet15;

Transform10.child = new undefined();

Transform10.child[0] = Shape11;

Shape Shape18 = createNode("Shape");
Appearance Appearance19 = createNode("Appearance");
Material Material20 = createNode("Material");
Material20.DEF = "_2";
Material20.diffuseColor = new SFColor(new float[1,0.794631,0.389824]);
Appearance19.material = Material20;

ImageTexture ImageTexture21 = createNode("ImageTexture");
ImageTexture21.url = new MFString(new java.lang.String["r_win_lower3.jpg"]);
Appearance19.texture = ImageTexture21;

Shape18.appearance = Appearance19;

IndexedFaceSet IndexedFaceSet22 = createNode("IndexedFaceSet");
IndexedFaceSet22.DEF = "nurbsToPoly141_1Geo";
IndexedFaceSet22.convex = False;
IndexedFaceSet22.coordIndex = new MFInt32(new int[4,0,1,6,-1]);
TextureCoordinate TextureCoordinate23 = createNode("TextureCoordinate");
TextureCoordinate23.point = new MFVec2f(new float[0.995874,0.0544366,0.00573361,0.0338087,0.00141633,0.395184,1.00142,0.395184,0.987623,0.974442,1.00142,0.834278,0.00573361,0.95794,0.00141633,0.834278]);
IndexedFaceSet22.texCoord = TextureCoordinate23;

Coordinate Coordinate24 = createNode("Coordinate");
Coordinate24.USE = "nurbsToPoly141GeoPoints";
IndexedFaceSet22.coord = Coordinate24;

Shape18.geometry = IndexedFaceSet22;

Transform10.child[1] = Shape18;

Transform9.children = new MFNode();

Transform9.children[0] = Transform10;

Transform Transform25 = createNode("Transform");
Transform25.DEF = "nurbsToPoly140";
Shape Shape26 = createNode("Shape");
Appearance Appearance27 = createNode("Appearance");
Material Material28 = createNode("Material");
Material28.ambientIntensity = 0.341818;
Material28.diffuseColor = new SFColor(new float[0.585106,0.0214792,0]);
Appearance27.material = Material28;

ImageTexture ImageTexture29 = createNode("ImageTexture");
ImageTexture29.USE = "_1";
Appearance27.texture = ImageTexture29;

Shape26.appearance = Appearance27;

IndexedFaceSet IndexedFaceSet30 = createNode("IndexedFaceSet");
IndexedFaceSet30.DEF = "nurbsToPoly140_0Geo";
IndexedFaceSet30.convex = False;
IndexedFaceSet30.texCoordIndex = new MFInt32(new int[6,1,2,7,-1,0,4,5,3,-1,8,9,10,11,-1]);
IndexedFaceSet30.coordIndex = new MFInt32(new int[6,1,2,7,-1,0,4,5,3,-1,4,6,7,5,-1]);
TextureCoordinate TextureCoordinate31 = createNode("TextureCoordinate");
TextureCoordinate31.point = new MFVec2f(new float[0,0,0,0,1,0.410596,1,0.410596,0,0.456008,1,0.86755,0,0.456008,1,0.86755,0,0.347209,0,0,1,0.00189201,1,0.349101]);
IndexedFaceSet30.texCoord = TextureCoordinate31;

Coordinate Coordinate32 = createNode("Coordinate");
Coordinate32.DEF = "nurbsToPoly140GeoPoints";
Coordinate32.point = new MFVec3f(new float[1.165,6.286,-8.464,1.165,6.286,-8.097,2.222,6.72,-8.099,2.222,6.72,-8.466,1.165,6.768,-8.464,2.222,7.203,-8.466,1.165,6.768,-8.097,2.222,7.203,-8.099]);
IndexedFaceSet30.coord = Coordinate32;

Shape26.geometry = IndexedFaceSet30;

Transform25.child = new undefined();

Transform25.child[0] = Shape26;

Transform9.children[1] = Transform25;

Transform Transform33 = createNode("Transform");
Transform33.DEF = "nurbsToPoly144";
Shape Shape34 = createNode("Shape");
Appearance Appearance35 = createNode("Appearance");
Material Material36 = createNode("Material");
Material36.ambientIntensity = 0.341818;
Material36.diffuseColor = new SFColor(new float[0.585106,0.0214792,0]);
Appearance35.material = Material36;

ImageTexture ImageTexture37 = createNode("ImageTexture");
ImageTexture37.USE = "_1";
Appearance35.texture = ImageTexture37;

Shape34.appearance = Appearance35;

IndexedFaceSet IndexedFaceSet38 = createNode("IndexedFaceSet");
IndexedFaceSet38.DEF = "nurbsToPoly144_0Geo";
IndexedFaceSet38.convex = False;
IndexedFaceSet38.texCoordIndex = new MFInt32(new int[6,1,2,7,-1,0,4,5,3,-1,8,9,10,11,-1]);
IndexedFaceSet38.coordIndex = new MFInt32(new int[6,1,2,7,-1,0,4,5,3,-1,4,6,7,5,-1]);
TextureCoordinate TextureCoordinate39 = createNode("TextureCoordinate");
TextureCoordinate39.point = new MFVec2f(new float[0,0,0,0,1,0.411543,1,0.411543,0,0.456008,1,0.86755,0,0.456008,1,0.86755,0,0.347209,0,0,1,0.00189201,1,0.349101]);
IndexedFaceSet38.texCoord = TextureCoordinate39;

Coordinate Coordinate40 = createNode("Coordinate");
Coordinate40.DEF = "nurbsToPoly144GeoPoints";
Coordinate40.point = new MFVec3f(new float[2.061,7.648,-8.464,2.061,7.648,-8.097,3.118,8.083,-8.099,3.118,8.083,-8.466,2.061,8.13,-8.464,3.118,8.565,-8.466,2.061,8.13,-8.097,3.118,8.565,-8.099]);
IndexedFaceSet38.coord = Coordinate40;

Shape34.geometry = IndexedFaceSet38;

Transform33.child = new undefined();

Transform33.child[0] = Shape34;

Transform9.children[2] = Transform33;

Transform Transform41 = createNode("Transform");
Shape Shape42 = createNode("Shape");
Appearance Appearance43 = createNode("Appearance");
Material Material44 = createNode("Material");
Material44.USE = "_2";
Appearance43.material = Material44;

ImageTexture ImageTexture45 = createNode("ImageTexture");
ImageTexture45.DEF = "_3";
ImageTexture45.url = new MFString(new java.lang.String["r_win_upper.jpg"]);
Appearance43.texture = ImageTexture45;

Shape42.appearance = Appearance43;

IndexedFaceSet IndexedFaceSet46 = createNode("IndexedFaceSet");
IndexedFaceSet46.convex = False;
IndexedFaceSet46.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate47 = createNode("TextureCoordinate");
TextureCoordinate47.point = new MFVec2f(new float[0.999196,0.995874,1,0,0,0,-0.000804007,0.995874]);
IndexedFaceSet46.texCoord = TextureCoordinate47;

Coordinate Coordinate48 = createNode("Coordinate");
Coordinate48.point = new MFVec3f(new float[2.061,8.13,-8.464,2.061,7.648,-8.464,2.061,7.648,-8.097,2.061,8.13,-8.097]);
IndexedFaceSet46.coord = Coordinate48;

Shape42.geometry = IndexedFaceSet46;

Transform41.child = new undefined();

Transform41.child[0] = Shape42;

Transform9.children[3] = Transform41;

Transform Transform49 = createNode("Transform");
Shape Shape50 = createNode("Shape");
Appearance Appearance51 = createNode("Appearance");
Material Material52 = createNode("Material");
Material52.USE = "_2";
Appearance51.material = Material52;

ImageTexture ImageTexture53 = createNode("ImageTexture");
ImageTexture53.USE = "_3";
Appearance51.texture = ImageTexture53;

Shape50.appearance = Appearance51;

IndexedFaceSet IndexedFaceSet54 = createNode("IndexedFaceSet");
IndexedFaceSet54.convex = False;
IndexedFaceSet54.coordIndex = new MFInt32(new int[3,2,1,0,-1]);
TextureCoordinate TextureCoordinate55 = createNode("TextureCoordinate");
TextureCoordinate55.point = new MFVec2f(new float[-0.0049296,0.995874,0,0,1,0,0.99507,0.995874]);
IndexedFaceSet54.texCoord = TextureCoordinate55;

Coordinate Coordinate56 = createNode("Coordinate");
Coordinate56.point = new MFVec3f(new float[1.165,6.768,-8.097,1.165,6.286,-8.097,1.165,6.286,-8.464,1.165,6.768,-8.464]);
IndexedFaceSet54.coord = Coordinate56;

Shape50.geometry = IndexedFaceSet54;

Transform49.child = new undefined();

Transform49.child[0] = Shape50;

Transform9.children[4] = Transform49;

children[1] = Transform9;

}
