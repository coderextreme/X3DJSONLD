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
meta3.content = "Wed, 18 Mar 2015 02:56:32 GMT";
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
meta6.content = "Wed, 18 Mar 2015 02:56:32 GMT";
head1.meta[4] = meta6;

head = head1;

Transform Transform8 = createNode("Transform");
Transform Transform9 = createNode("Transform");
Transform9.DEF = "baum";
Transform Transform10 = createNode("Transform");
Transform10.DEF = "tree_1";
Transform10.translation = new SFVec3f(new float[-4.14893,0,-5.37412]);
Transform Transform11 = createNode("Transform");
Transform11.DEF = "ntreesh";
Transform11.translation = new SFVec3f(new float[-0.0000038147,-8.9407e-8,0.0000152588]);
Transform11.rotation = new SFRotation(new float[0,-1,0,1.32624]);
Transform11.scale = new SFVec3f(new float[1,0.999999,1]);
Transform11.center = new SFVec3f(new float[-49.3696,0.0804343,-10.6255]);
Shape Shape12 = createNode("Shape");
Appearance Appearance13 = createNode("Appearance");
Material Material14 = createNode("Material");
Material14.ambientIntensity = 0;
Material14.diffuseColor = new SFColor(new float[0,0,0]);
Material14.transparency = 0.478723;
Appearance13.material = Material14;

ImageTexture ImageTexture15 = createNode("ImageTexture");
ImageTexture15.DEF = "_1";
ImageTexture15.url = new MFString(new java.lang.String["ntreesh.png"]);
Appearance13.texture = ImageTexture15;

Shape12.appearance = Appearance13;

IndexedFaceSet IndexedFaceSet16 = createNode("IndexedFaceSet");
IndexedFaceSet16.solid = False;
IndexedFaceSet16.creaseAngle = 0.5;
IndexedFaceSet16.coordIndex = new MFInt32(new int[0,1,2,-1,3,0,2,-1]);
TextureCoordinate TextureCoordinate17 = createNode("TextureCoordinate");
TextureCoordinate17.point = new MFVec2f(new float[1,1,1,0,0,0,0,1]);
IndexedFaceSet16.texCoord = TextureCoordinate17;

Coordinate Coordinate18 = createNode("Coordinate");
Coordinate18.point = new MFVec3f(new float[-56.6496,0.0804348,-15.3576,-51.7661,0.0804343,-7.57679,-46.6203,0.0804338,-12.0093,-53.2139,0.0804334,-18.3283]);
IndexedFaceSet16.coord = Coordinate18;

Shape12.geometry = IndexedFaceSet16;

Transform11.child = new undefined();

Transform11.child[0] = Shape12;

Transform10.children = new MFNode();

Transform10.children[0] = Transform11;

Transform Transform19 = createNode("Transform");
Transform19.DEF = "ntree";
Shape Shape20 = createNode("Shape");
Appearance Appearance21 = createNode("Appearance");
Material Material22 = createNode("Material");
Material22.ambientIntensity = 0;
Material22.diffuseColor = new SFColor(new float[1,1,1]);
Material22.emissiveColor = new SFColor(new float[0.595745,0.595745,0.595745]);
Appearance21.material = Material22;

ImageTexture ImageTexture23 = createNode("ImageTexture");
ImageTexture23.DEF = "_2";
ImageTexture23.url = new MFString(new java.lang.String["ntree.png"]);
Appearance21.texture = ImageTexture23;

Shape20.appearance = Appearance21;

IndexedFaceSet IndexedFaceSet24 = createNode("IndexedFaceSet");
IndexedFaceSet24.solid = False;
IndexedFaceSet24.creaseAngle = 0.5;
IndexedFaceSet24.coordIndex = new MFInt32(new int[0,1,2,3,-1,4,5,6,7,-1,8,9,10,11,-1]);
TextureCoordinate TextureCoordinate25 = createNode("TextureCoordinate");
TextureCoordinate25.point = new MFVec2f(new float[0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1]);
IndexedFaceSet24.texCoord = TextureCoordinate25;

Coordinate Coordinate26 = createNode("Coordinate");
Coordinate26.point = new MFVec3f(new float[-52.6347,0.00499916,-10.6106,-45.6466,0.00499916,-10.6106,-45.6466,6.60754,-10.6106,-52.6347,6.60754,-10.6106,-47.6449,0.00499058,-7.86263,-51.3424,0.00498962,-13.7923,-51.3424,6.60752,-13.7923,-47.6449,6.60752,-7.86263,-50.9676,0.00498962,-7.82067,-47.5528,0.00498962,-13.9176,-47.5528,6.60752,-13.9176,-50.9676,6.60752,-7.82067]);
IndexedFaceSet24.coord = Coordinate26;

Shape20.geometry = IndexedFaceSet24;

Transform19.child = new undefined();

Transform19.child[0] = Shape20;

Transform10.children[1] = Transform19;

Transform9.children = new MFNode();

Transform9.children[0] = Transform10;

Transform Transform27 = createNode("Transform");
Transform27.DEF = "tree_2";
Transform27.translation = new SFVec3f(new float[21.4525,0,-5.37412]);
Transform Transform28 = createNode("Transform");
Transform28.translation = new SFVec3f(new float[0.189871,0.00608941,-0.282085]);
Transform28.rotation = new SFRotation(new float[0,-1,0,1.32624]);
Transform28.scale = new SFVec3f(new float[1.08283,1.08283,1.08283]);
Transform28.center = new SFVec3f(new float[-49.3696,0.0804343,-10.6255]);
Shape Shape29 = createNode("Shape");
Appearance Appearance30 = createNode("Appearance");
Material Material31 = createNode("Material");
Material31.ambientIntensity = 0;
Material31.diffuseColor = new SFColor(new float[0,0,0]);
Material31.transparency = 0.478723;
Appearance30.material = Material31;

ImageTexture ImageTexture32 = createNode("ImageTexture");
ImageTexture32.USE = "_1";
Appearance30.texture = ImageTexture32;

Shape29.appearance = Appearance30;

IndexedFaceSet IndexedFaceSet33 = createNode("IndexedFaceSet");
IndexedFaceSet33.solid = False;
IndexedFaceSet33.creaseAngle = 0.5;
IndexedFaceSet33.coordIndex = new MFInt32(new int[0,1,2,-1,3,0,2,-1]);
TextureCoordinate TextureCoordinate34 = createNode("TextureCoordinate");
TextureCoordinate34.point = new MFVec2f(new float[1,1,1,0,0,0,0,1]);
IndexedFaceSet33.texCoord = TextureCoordinate34;

Coordinate Coordinate35 = createNode("Coordinate");
Coordinate35.point = new MFVec3f(new float[-56.6496,0.0804348,-15.3576,-51.7661,0.0804343,-7.57679,-46.6203,0.0804338,-12.0093,-53.2139,0.0804334,-18.3283]);
IndexedFaceSet33.coord = Coordinate35;

Shape29.geometry = IndexedFaceSet33;

Transform28.child = new undefined();

Transform28.child[0] = Shape29;

Transform27.children = new MFNode();

Transform27.children[0] = Transform28;

Transform Transform36 = createNode("Transform");
Transform36.translation = new SFVec3f(new float[-31.9501,-0.000947475,36.4323]);
Transform36.rotation = new SFRotation(new float[0,-1,0,1.00453]);
Transform36.scale = new SFVec3f(new float[1,1.18986,1]);
Shape Shape37 = createNode("Shape");
Appearance Appearance38 = createNode("Appearance");
Material Material39 = createNode("Material");
Material39.ambientIntensity = 0;
Material39.diffuseColor = new SFColor(new float[1,1,1]);
Material39.emissiveColor = new SFColor(new float[0.595745,0.595745,0.595745]);
Appearance38.material = Material39;

ImageTexture ImageTexture40 = createNode("ImageTexture");
ImageTexture40.USE = "_2";
Appearance38.texture = ImageTexture40;

Shape37.appearance = Appearance38;

IndexedFaceSet IndexedFaceSet41 = createNode("IndexedFaceSet");
IndexedFaceSet41.solid = False;
IndexedFaceSet41.creaseAngle = 0.5;
IndexedFaceSet41.coordIndex = new MFInt32(new int[0,1,2,3,-1,4,5,6,7,-1,8,9,10,11,-1]);
TextureCoordinate TextureCoordinate42 = createNode("TextureCoordinate");
TextureCoordinate42.point = new MFVec2f(new float[0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1]);
IndexedFaceSet41.texCoord = TextureCoordinate42;

Coordinate Coordinate43 = createNode("Coordinate");
Coordinate43.point = new MFVec3f(new float[-52.6347,0.00499916,-10.6106,-45.6466,0.00499916,-10.6106,-45.6466,7.15655,-10.6106,-52.6347,5.739,-10.6106,-47.6449,0.00499058,-7.86263,-51.3424,0.00498962,-13.7923,-51.3424,6.60752,-13.7923,-47.7846,5.62517,-8.08669,-50.9676,0.00498962,-7.82067,-47.5528,0.00498962,-13.9176,-47.5528,6.60752,-13.9176,-50.9676,5.46237,-7.82067]);
IndexedFaceSet41.coord = Coordinate43;

Shape37.geometry = IndexedFaceSet41;

Transform36.child = new undefined();

Transform36.child[0] = Shape37;

Transform27.children[1] = Transform36;

Transform9.children[1] = Transform27;

Transform Transform44 = createNode("Transform");
Transform44.DEF = "tree";
Transform44.translation = new SFVec3f(new float[8.76691,0,-5.37412]);
Transform Transform45 = createNode("Transform");
Transform45.translation = new SFVec3f(new float[-0.0000038147,-8.9407e-8,0.0000152588]);
Transform45.rotation = new SFRotation(new float[0,-1,0,1.32624]);
Transform45.scale = new SFVec3f(new float[1,0.999999,1]);
Transform45.center = new SFVec3f(new float[-49.3696,0.0804343,-10.6255]);
Shape Shape46 = createNode("Shape");
Appearance Appearance47 = createNode("Appearance");
Material Material48 = createNode("Material");
Material48.ambientIntensity = 0;
Material48.diffuseColor = new SFColor(new float[0,0,0]);
Material48.transparency = 0.478723;
Appearance47.material = Material48;

ImageTexture ImageTexture49 = createNode("ImageTexture");
ImageTexture49.USE = "_1";
Appearance47.texture = ImageTexture49;

Shape46.appearance = Appearance47;

IndexedFaceSet IndexedFaceSet50 = createNode("IndexedFaceSet");
IndexedFaceSet50.solid = False;
IndexedFaceSet50.creaseAngle = 0.5;
IndexedFaceSet50.coordIndex = new MFInt32(new int[0,1,2,-1,3,0,2,-1]);
TextureCoordinate TextureCoordinate51 = createNode("TextureCoordinate");
TextureCoordinate51.point = new MFVec2f(new float[1,1,1,0,0,0,0,1]);
IndexedFaceSet50.texCoord = TextureCoordinate51;

Coordinate Coordinate52 = createNode("Coordinate");
Coordinate52.point = new MFVec3f(new float[-56.6496,0.0804348,-15.3576,-51.7661,0.0804343,-7.57679,-46.6203,0.0804338,-12.0093,-53.2139,0.0804334,-18.3283]);
IndexedFaceSet50.coord = Coordinate52;

Shape46.geometry = IndexedFaceSet50;

Transform45.child = new undefined();

Transform45.child[0] = Shape46;

Transform44.children = new MFNode();

Transform44.children[0] = Transform45;

Transform Transform53 = createNode("Transform");
Transform53.translation = new SFVec3f(new float[-0.626562,-0.000947475,-24.2605]);
Transform53.rotation = new SFRotation(new float[0,1,0,0.487003]);
Transform53.scale = new SFVec3f(new float[1,1.18986,1]);
Shape Shape54 = createNode("Shape");
Appearance Appearance55 = createNode("Appearance");
Material Material56 = createNode("Material");
Material56.ambientIntensity = 0;
Material56.diffuseColor = new SFColor(new float[1,1,1]);
Material56.emissiveColor = new SFColor(new float[0.595745,0.595745,0.595745]);
Appearance55.material = Material56;

ImageTexture ImageTexture57 = createNode("ImageTexture");
ImageTexture57.USE = "_2";
Appearance55.texture = ImageTexture57;

Shape54.appearance = Appearance55;

IndexedFaceSet IndexedFaceSet58 = createNode("IndexedFaceSet");
IndexedFaceSet58.solid = False;
IndexedFaceSet58.creaseAngle = 0.5;
IndexedFaceSet58.coordIndex = new MFInt32(new int[0,1,2,3,-1,4,5,6,7,-1,8,9,10,11,-1]);
TextureCoordinate TextureCoordinate59 = createNode("TextureCoordinate");
TextureCoordinate59.point = new MFVec2f(new float[0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1]);
IndexedFaceSet58.texCoord = TextureCoordinate59;

Coordinate Coordinate60 = createNode("Coordinate");
Coordinate60.point = new MFVec3f(new float[-52.6347,0.00499916,-10.6106,-45.6466,0.00499916,-10.6106,-45.6466,6.60754,-10.6106,-52.6347,6.60754,-10.6106,-47.6449,0.00499058,-7.86263,-51.3424,0.00498962,-13.7923,-51.3424,6.60752,-13.7923,-47.6449,6.60752,-7.86263,-50.9676,0.00498962,-7.82067,-47.5528,0.00498962,-13.9176,-47.5528,6.60752,-13.9176,-50.9676,6.60752,-7.82067]);
IndexedFaceSet58.coord = Coordinate60;

Shape54.geometry = IndexedFaceSet58;

Transform53.child = new undefined();

Transform53.child[0] = Shape54;

Transform44.children[1] = Transform53;

Transform9.children[2] = Transform44;

Transform8.children = new MFNode();

Transform8.children[0] = Transform9;

Transform Transform61 = createNode("Transform");
Shape Shape62 = createNode("Shape");
Appearance Appearance63 = createNode("Appearance");
Material Material64 = createNode("Material");
Material64.ambientIntensity = 0.455757;
Material64.diffuseColor = new SFColor(new float[0.351064,0.278629,0.195817]);
Appearance63.material = Material64;

ImageTexture ImageTexture65 = createNode("ImageTexture");
ImageTexture65.url = new MFString(new java.lang.String["granite.png"]);
Appearance63.texture = ImageTexture65;

TextureTransform TextureTransform66 = createNode("TextureTransform");
TextureTransform66.scale = new SFVec2f(new float[5.85353,5.53906]);
Appearance63.textureTransform = TextureTransform66;

Shape62.appearance = Appearance63;

IndexedFaceSet IndexedFaceSet67 = createNode("IndexedFaceSet");
IndexedFaceSet67.creaseAngle = 0.5;
IndexedFaceSet67.colorPerVertex = False;
IndexedFaceSet67.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate68 = createNode("TextureCoordinate");
TextureCoordinate68.point = new MFVec2f(new float[0.568403,0.415141,0.40171,0.415141,0.40171,0.357317,0.568403,0.357317]);
IndexedFaceSet67.texCoord = TextureCoordinate68;

Coordinate Coordinate69 = createNode("Coordinate");
Coordinate69.point = new MFVec3f(new float[-11.5277,0,-21.3227,-57.357,0,-21.3227,-57.357,0,-8.14675,-11.5277,0,-8.14674]);
IndexedFaceSet67.coord = Coordinate69;

Shape62.geometry = IndexedFaceSet67;

Transform61.child = new undefined();

Transform61.child[0] = Shape62;

Transform8.children[1] = Transform61;

children = new MFNode();

children[0] = Transform8;

}
