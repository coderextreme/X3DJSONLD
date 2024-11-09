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
meta3.content = "Thu, 23 Apr 2015 06:07:00 GMT";
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
meta6.content = "Thu, 23 Apr 2015 06:07:00 GMT";
head1.meta[4] = meta6;

head = head1;

ExternProtoDeclare ExternProtoDeclare8 = createNode("ExternProtoDeclare");
ExternProtoDeclare8.name = "Switcher";
ExternProtoDeclare8.url = new MFString(new java.lang.String["Switcher_proto.x3d"]);
field field9 = createNode("field");
field9.name = "minValue";
field9.accessType = "inputOutput";
field9.type = "SFInt32";
ExternProtoDeclare8.field = new MFNode();

ExternProtoDeclare8.field[0] = field9;

field field10 = createNode("field");
field10.name = "maxValue";
field10.accessType = "inputOutput";
field10.type = "SFInt32";
ExternProtoDeclare8.field[1] = field10;

field field11 = createNode("field");
field11.name = "prev";
field11.accessType = "inputOutput";
field11.type = "SFTime";
ExternProtoDeclare8.field[2] = field11;

field field12 = createNode("field");
field12.name = "next";
field12.accessType = "inputOutput";
field12.type = "SFTime";
ExternProtoDeclare8.field[3] = field12;

field field13 = createNode("field");
field13.name = "offset";
field13.accessType = "inputOutput";
field13.type = "SFInt32";
ExternProtoDeclare8.field[4] = field13;

field field14 = createNode("field");
field14.name = "whichChoice_changed";
field14.accessType = "outputOnly";
field14.type = "SFInt32";
ExternProtoDeclare8.field[5] = field14;

children = new MFNode();

children[0] = ExternProtoDeclare8;

WorldInfo WorldInfo15 = createNode("WorldInfo");
WorldInfo15.info = new MFString(new java.lang.String[", ","Created in TitaniaPackaged by CosmoPackage"]);
children[1] = WorldInfo15;

Transform Transform16 = createNode("Transform");
Transform16.bboxSize = new SFVec3f(new float[79.18,8.643,80.31]);
Transform16.bboxCenter = new SFVec3f(new float[40.37,4.268,-39.8]);
Transform Transform17 = createNode("Transform");
Transform Transform18 = createNode("Transform");
Transform18.DEF = "s1";
Transform Transform19 = createNode("Transform");
Transform19.translation = new SFVec3f(new float[125.37,0,-14.9781]);
Transform19.rotation = new SFRotation(new float[0,1,0,3.1416]);
Transform Transform20 = createNode("Transform");
Transform20.DEF = "_1";
Transform20.translation = new SFVec3f(new float[62.6844,2.97856,-0.126466]);
Transform20.rotation = new SFRotation(new float[2.14324e-7,1,-7.05434e-7,3.14159]);
Transform20.scale = new SFVec3f(new float[0.999997,0.999999,0.999997]);
Transform20.scaleOrientation = new SFRotation(new float[-4.92972e-8,1,-1.5979e-7,2.35619]);
Inline Inline21 = createNode("Inline");
Inline21.url = new MFString(new java.lang.String["statue.x3d"]);
Inline21.bboxSize = new SFVec3f(new float[2.53738,8.17662,1.36748]);
Inline21.bboxCenter = new SFVec3f(new float[-0.000528336,1.06796,0.197238]);
Transform20.children = new MFNode();

Transform20.children[0] = Inline21;

Transform19.children = new MFNode();

Transform19.children[0] = Transform20;

Transform18.children = new MFNode();

Transform18.children[0] = Transform19;

Transform Transform22 = createNode("Transform");
Transform22.USE = "_1";
Transform18.children[1] = Transform22;

Transform17.children = new MFNode();

Transform17.children[0] = Transform18;

Transform Transform23 = createNode("Transform");
Transform23.DEF = "s2";
Transform Transform24 = createNode("Transform");
Transform24.translation = new SFVec3f(new float[64.9331,0.0381114,19.3544]);
Transform24.rotation = new SFRotation(new float[0,1,0,1.57079]);
Transform Transform25 = createNode("Transform");
Transform25.USE = "_1";
Transform24.children = new MFNode();

Transform24.children[0] = Transform25;

Transform23.children = new MFNode();

Transform23.children[0] = Transform24;

Transform Transform26 = createNode("Transform");
Transform26.translation = new SFVec3f(new float[54.9862,0.0380814,-109.304]);
Transform26.rotation = new SFRotation(new float[-6.43132e-7,-1,6.57961e-7,1.5708]);
Transform26.scaleOrientation = new SFRotation(new float[5.0504e-7,1,-1.29424e-7,2.35619]);
Transform Transform27 = createNode("Transform");
Transform27.USE = "_1";
Transform26.children = new MFNode();

Transform26.children[0] = Transform27;

Transform23.children[1] = Transform26;

Transform Transform28 = createNode("Transform");
Transform28.translation = new SFVec3f(new float[-4.33523,0.0380588,-34.9976]);
Transform Transform29 = createNode("Transform");
Transform29.USE = "_1";
Transform28.children = new MFNode();

Transform28.children[0] = Transform29;

Transform23.children[2] = Transform28;

Transform17.children[1] = Transform23;

Transform Transform30 = createNode("Transform");
Transform30.DEF = "c1";
Transform Transform31 = createNode("Transform");
Transform31.DEF = "cat1";
Transform Transform32 = createNode("Transform");
Transform32.DEF = "_2";
Transform32.translation = new SFVec3f(new float[18.2842,0.0195997,-64.4897]);
Inline Inline33 = createNode("Inline");
Inline33.url = new MFString(new java.lang.String["katze.x3d"]);
Inline33.bboxSize = new SFVec3f(new float[8.13439,3.42439,1.81039]);
Inline33.bboxCenter = new SFVec3f(new float[0.239496,1.51194,5.96046e-8]);
Transform32.children = new MFNode();

Transform32.children[0] = Inline33;

Transform31.children = new MFNode();

Transform31.children[0] = Transform32;

Transform30.children = new MFNode();

Transform30.children[0] = Transform31;

Transform Transform34 = createNode("Transform");
Transform34.DEF = "cat2";
Transform34.translation = new SFVec3f(new float[0,0,4.04162]);
Transform Transform35 = createNode("Transform");
Transform35.USE = "_2";
Transform34.children = new MFNode();

Transform34.children[0] = Transform35;

Transform30.children[1] = Transform34;

Transform17.children[2] = Transform30;

Transform Transform36 = createNode("Transform");
Transform36.DEF = "c2";
Transform Transform37 = createNode("Transform");
Transform37.DEF = "cat3";
Transform37.translation = new SFVec3f(new float[9.95345,0,0]);
Transform Transform38 = createNode("Transform");
Transform38.DEF = "_3";
Transform38.translation = new SFVec3f(new float[55.4477,0.0226387,-76.2775]);
Transform38.rotation = new SFRotation(new float[0,1,0,4.71239]);
Transform38.scale = new SFVec3f(new float[0.999998,0.999999,0.999998]);
Inline Inline39 = createNode("Inline");
Inline39.url = new MFString(new java.lang.String["katze.x3d"]);
Inline39.bboxSize = new SFVec3f(new float[8.13439,3.42439,1.81039]);
Inline39.bboxCenter = new SFVec3f(new float[0.239496,1.51194,5.96046e-8]);
Transform38.children = new MFNode();

Transform38.children[0] = Inline39;

Transform37.children = new MFNode();

Transform37.children[0] = Transform38;

Transform36.children = new MFNode();

Transform36.children[0] = Transform37;

Transform Transform40 = createNode("Transform");
Transform40.DEF = "cat4";
Transform40.translation = new SFVec3f(new float[14.1683,0,0]);
Transform Transform41 = createNode("Transform");
Transform41.USE = "_3";
Transform40.children = new MFNode();

Transform40.children[0] = Transform41;

Transform36.children[1] = Transform40;

Transform17.children[3] = Transform36;

Transform16.children = new MFNode();

Transform16.children[0] = Transform17;

Collision Collision42 = createNode("Collision");
Collision42.enabled = False;
Transform Transform43 = createNode("Transform");
Transform Transform44 = createNode("Transform");
Transform44.DEF = "o2";
Transform Transform45 = createNode("Transform");
Transform45.DEF = "osiris3";
Transform45.translation = new SFVec3f(new float[44.8772,-0.191987,-5.01077]);
Transform45.rotation = new SFRotation(new float[0,-1,0,1.57079]);
Transform45.scale = new SFVec3f(new float[0.999999,0.999999,0.999999]);
Transform Transform46 = createNode("Transform");
Transform46.DEF = "_4";
Transform46.translation = new SFVec3f(new float[2.63757,4.50009,-34.9554]);
Transform46.scale = new SFVec3f(new float[3.29392,3.29392,3.29393]);
Shape Shape47 = createNode("Shape");
Appearance Appearance48 = createNode("Appearance");
Material Material49 = createNode("Material");
Material49.ambientIntensity = 0.16;
Material49.diffuseColor = new SFColor(new float[1,1,1]);
Appearance48.material = Material49;

ImageTexture ImageTexture50 = createNode("ImageTexture");
ImageTexture50.DEF = "_5";
ImageTexture50.url = new MFString(new java.lang.String["osiris-bump1.png"]);
Appearance48.texture = ImageTexture50;

TextureTransform TextureTransform51 = createNode("TextureTransform");
TextureTransform51.scale = new SFVec2f(new float[-1,1]);
Appearance48.textureTransform = TextureTransform51;

Shape47.appearance = Appearance48;

IndexedFaceSet IndexedFaceSet52 = createNode("IndexedFaceSet");
IndexedFaceSet52.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate53 = createNode("TextureCoordinate");
TextureCoordinate53.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet52.texCoord = TextureCoordinate53;

Coordinate Coordinate54 = createNode("Coordinate");
Coordinate54.point = new MFVec3f(new float[-0.5,-1.1636,0,0.5,-1.1636,0,0.5,1.1636,0,-0.5,1.1636,0]);
IndexedFaceSet52.coord = Coordinate54;

Shape47.geometry = IndexedFaceSet52;

Transform46.child = new undefined();

Transform46.child[0] = Shape47;

Transform45.children = new MFNode();

Transform45.children[0] = Transform46;

Transform44.children = new MFNode();

Transform44.children[0] = Transform45;

Transform Transform55 = createNode("Transform");
Transform55.DEF = "osiris4";
Transform55.translation = new SFVec3f(new float[10.4897,3.32269,-62.3195]);
Transform55.rotation = new SFRotation(new float[0,-1,0,1.5708]);
Transform55.scale = new SFVec3f(new float[2.53623,2.53622,2.53619]);
Shape Shape56 = createNode("Shape");
Appearance Appearance57 = createNode("Appearance");
Material Material58 = createNode("Material");
Material58.ambientIntensity = 0.16;
Material58.diffuseColor = new SFColor(new float[1,1,1]);
Appearance57.material = Material58;

ImageTexture ImageTexture59 = createNode("ImageTexture");
ImageTexture59.USE = "_5";
Appearance57.texture = ImageTexture59;

Shape56.appearance = Appearance57;

IndexedFaceSet IndexedFaceSet60 = createNode("IndexedFaceSet");
IndexedFaceSet60.ccw = False;
IndexedFaceSet60.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate61 = createNode("TextureCoordinate");
TextureCoordinate61.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet60.texCoord = TextureCoordinate61;

Coordinate Coordinate62 = createNode("Coordinate");
Coordinate62.point = new MFVec3f(new float[-0.5,-1.1636,0,0.5,-1.1636,0,0.5,1.1636,0,-0.5,1.1636,0]);
IndexedFaceSet60.coord = Coordinate62;

Shape56.geometry = IndexedFaceSet60;

Transform55.child = new undefined();

Transform55.child[0] = Shape56;

Transform44.children[1] = Transform55;

Transform Transform63 = createNode("Transform");
Transform63.DEF = "o1";
Transform Transform64 = createNode("Transform");
Transform64.translation = new SFVec3f(new float[0.662268,0.128732,-6.7524]);
Transform64.scale = new SFVec3f(new float[0.807081,0.807081,0.807058]);
Transform Transform65 = createNode("Transform");
Transform65.USE = "_4";
Transform64.children = new MFNode();

Transform64.children[0] = Transform65;

Transform63.children = new MFNode();

Transform63.children[0] = Transform64;

Transform Transform66 = createNode("Transform");
Transform66.translation = new SFVec3f(new float[29.8905,0.256301,-0.0143967]);
Transform Transform67 = createNode("Transform");
Transform67.USE = "_4";
Transform66.children = new MFNode();

Transform66.children[0] = Transform67;

Transform63.children[1] = Transform66;

Transform44.children[2] = Transform63;

Transform Transform68 = createNode("Transform");
Transform68.DEF = "osiris5";
Transform68.translation = new SFVec3f(new float[62.4756,4.59252,-74.97]);
Transform68.scale = new SFVec3f(new float[3.77149,3.31668,2.87925]);
Shape Shape69 = createNode("Shape");
Appearance Appearance70 = createNode("Appearance");
Material Material71 = createNode("Material");
Material71.ambientIntensity = 0.16;
Material71.diffuseColor = new SFColor(new float[1,1,1]);
Appearance70.material = Material71;

ImageTexture ImageTexture72 = createNode("ImageTexture");
ImageTexture72.USE = "_5";
Appearance70.texture = ImageTexture72;

Shape69.appearance = Appearance70;

IndexedFaceSet IndexedFaceSet73 = createNode("IndexedFaceSet");
IndexedFaceSet73.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate74 = createNode("TextureCoordinate");
TextureCoordinate74.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet73.texCoord = TextureCoordinate74;

Coordinate Coordinate75 = createNode("Coordinate");
Coordinate75.point = new MFVec3f(new float[-0.5,-1.1636,0,0.5,-1.1636,0,0.5,1.1636,0,-0.5,1.1636,0]);
IndexedFaceSet73.coord = Coordinate75;

Shape69.geometry = IndexedFaceSet73;

Transform68.child = new undefined();

Transform68.child[0] = Shape69;

Transform44.children[3] = Transform68;

Transform43.children = new MFNode();

Transform43.children[0] = Transform44;

Transform Transform76 = createNode("Transform");
Transform76.DEF = "p2";
Transform Transform77 = createNode("Transform");
Transform77.DEF = "paint3";
Transform77.translation = new SFVec3f(new float[39.9659,4.63138,-17.3407]);
Transform77.rotation = new SFRotation(new float[0,1,0,1.5708]);
Transform77.scale = new SFVec3f(new float[6.1494,7.70085,3.18781]);
Shape Shape78 = createNode("Shape");
Appearance Appearance79 = createNode("Appearance");
Material Material80 = createNode("Material");
Material80.ambientIntensity = 0.16;
Material80.diffuseColor = new SFColor(new float[1,1,1]);
Material80.specularColor = new SFColor(new float[1,1,1]);
Material80.shininess = 0.329787;
Appearance79.material = Material80;

ImageTexture ImageTexture81 = createNode("ImageTexture");
ImageTexture81.DEF = "_6";
ImageTexture81.url = new MFString(new java.lang.String["wallpaint1.jpg"]);
Appearance79.texture = ImageTexture81;

Shape78.appearance = Appearance79;

IndexedFaceSet IndexedFaceSet82 = createNode("IndexedFaceSet");
IndexedFaceSet82.ccw = False;
IndexedFaceSet82.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate83 = createNode("TextureCoordinate");
TextureCoordinate83.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet82.texCoord = TextureCoordinate83;

Coordinate Coordinate84 = createNode("Coordinate");
Coordinate84.point = new MFVec3f(new float[-2.0078,-0.5,0,2.0078,-0.5,0,2.0078,0.5,0,-2.0078,0.5,0]);
IndexedFaceSet82.coord = Coordinate84;

Shape78.geometry = IndexedFaceSet82;

Transform77.child = new undefined();

Transform77.child[0] = Shape78;

Transform76.children = new MFNode();

Transform76.children[0] = Transform77;

Transform Transform85 = createNode("Transform");
Transform85.DEF = "paint2";
Transform85.translation = new SFVec3f(new float[35.0232,4.63138,-17.3407]);
Transform85.rotation = new SFRotation(new float[0,1,0,1.5708]);
Transform85.scale = new SFVec3f(new float[6.1494,7.70085,3.18781]);
Shape Shape86 = createNode("Shape");
Appearance Appearance87 = createNode("Appearance");
Material Material88 = createNode("Material");
Material88.ambientIntensity = 0.16;
Material88.diffuseColor = new SFColor(new float[1,1,1]);
Appearance87.material = Material88;

ImageTexture ImageTexture89 = createNode("ImageTexture");
ImageTexture89.USE = "_6";
Appearance87.texture = ImageTexture89;

Shape86.appearance = Appearance87;

IndexedFaceSet IndexedFaceSet90 = createNode("IndexedFaceSet");
IndexedFaceSet90.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate91 = createNode("TextureCoordinate");
TextureCoordinate91.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet90.texCoord = TextureCoordinate91;

Coordinate Coordinate92 = createNode("Coordinate");
Coordinate92.point = new MFVec3f(new float[-2.0078,-0.5,0,2.0078,-0.5,0,2.0078,0.5,0,-2.0078,0.5,0]);
IndexedFaceSet90.coord = Coordinate92;

Shape86.geometry = IndexedFaceSet90;

Transform85.child = new undefined();

Transform85.child[0] = Shape86;

Transform76.children[1] = Transform85;

Transform43.children[1] = Transform76;

Transform Transform93 = createNode("Transform");
Transform93.DEF = "hy1";
Transform Transform94 = createNode("Transform");
Transform94.DEF = "hyroglyphen3";
Transform94.translation = new SFVec3f(new float[27.6082,4.46924,-79.9542]);
Transform94.scale = new SFVec3f(new float[5.92555,3.78984,3.56043]);
Shape Shape95 = createNode("Shape");
Appearance Appearance96 = createNode("Appearance");
Material Material97 = createNode("Material");
Material97.ambientIntensity = 0.16;
Material97.diffuseColor = new SFColor(new float[1,1,1]);
Appearance96.material = Material97;

ImageTexture ImageTexture98 = createNode("ImageTexture");
ImageTexture98.DEF = "_7";
ImageTexture98.url = new MFString(new java.lang.String["schrift.jpg"]);
Appearance96.texture = ImageTexture98;

TextureTransform TextureTransform99 = createNode("TextureTransform");
TextureTransform99.scale = new SFVec2f(new float[3,2]);
Appearance96.textureTransform = TextureTransform99;

Shape95.appearance = Appearance96;

IndexedFaceSet IndexedFaceSet100 = createNode("IndexedFaceSet");
IndexedFaceSet100.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate101 = createNode("TextureCoordinate");
TextureCoordinate101.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet100.texCoord = TextureCoordinate101;

Coordinate Coordinate102 = createNode("Coordinate");
Coordinate102.point = new MFVec3f(new float[-0.5,-1,0,0.5,-1,0,0.5,1,0,-0.5,1,0]);
IndexedFaceSet100.coord = Coordinate102;

Shape95.geometry = IndexedFaceSet100;

Transform94.child = new undefined();

Transform94.child[0] = Shape95;

Transform93.children = new MFNode();

Transform93.children[0] = Transform94;

Transform Transform103 = createNode("Transform");
Transform103.DEF = "hyroglyphen4";
Transform103.translation = new SFVec3f(new float[37.6913,4.6328,-79.9542]);
Transform103.scale = new SFVec3f(new float[3.68301,3.62628,3.56043]);
Shape Shape104 = createNode("Shape");
Appearance Appearance105 = createNode("Appearance");
Material Material106 = createNode("Material");
Material106.ambientIntensity = 0.16;
Material106.diffuseColor = new SFColor(new float[1,1,1]);
Appearance105.material = Material106;

ImageTexture ImageTexture107 = createNode("ImageTexture");
ImageTexture107.USE = "_7";
Appearance105.texture = ImageTexture107;

TextureTransform TextureTransform108 = createNode("TextureTransform");
TextureTransform108.scale = new SFVec2f(new float[2,2]);
Appearance105.textureTransform = TextureTransform108;

Shape104.appearance = Appearance105;

IndexedFaceSet IndexedFaceSet109 = createNode("IndexedFaceSet");
IndexedFaceSet109.coordIndex = new MFInt32(new int[13,2,11,-1,2,9,11,-1,4,13,10,-1,13,11,10,-1,14,4,16,-1,4,10,16,-1,17,14,16,-1,17,1,14,-1,9,12,11,-1,9,7,12,-1,21,18,19,-1,21,3,18,-1,7,19,12,-1,7,21,19,-1,12,6,11,-1,6,10,11,-1,10,15,16,-1,10,6,15,-1,8,16,15,-1,8,17,16,-1,18,5,19,-1,5,20,19,-1,20,12,19,-1,20,6,12,-1,15,6,23,-1,6,20,23,-1,24,15,23,-1,24,8,15,-1,20,22,23,-1,20,5,22,-1,0,23,22,-1,0,24,23,-1]);
TextureCoordinate TextureCoordinate110 = createNode("TextureCoordinate");
TextureCoordinate110.point = new MFVec2f(new float[0,0,1,0,1,1,0,1,1,0.5,0,0.5,0.5,0.5,0.5,1,0.5,0,0.75,1,0.75,0.5,0.75,0.75,0.5,0.75,1,0.75,1,0.25,0.5,0.25,0.75,0.25,0.75,0,0,0.75,0.25,0.75,0.25,0.5,0.25,1,0,0.25,0.25,0.25,0.25,0]);
IndexedFaceSet109.texCoord = TextureCoordinate110;

Coordinate Coordinate111 = createNode("Coordinate");
Coordinate111.point = new MFVec3f(new float[-0.5,-1,0,0.5,-1,0,0.5,1,0,-0.5,1,0,0.5,0,0,-0.5,0,0,0,0,0,0,1,0,0,-1,0,0.25,1,0,0.25,0,0,0.25,0.5,0,0,0.5,0,0.5,0.5,0,0.5,-0.5,0,0,-0.5,0,0.25,-0.5,0,0.25,-1,0,-0.5,0.5,0,-0.25,0.5,0,-0.25,0,0,-0.25,1,0,-0.5,-0.5,0,-0.25,-0.5,0,-0.25,-1,0]);
IndexedFaceSet109.coord = Coordinate111;

Shape104.geometry = IndexedFaceSet109;

Transform103.child = new undefined();

Transform103.child[0] = Shape104;

Transform93.children[1] = Transform103;

Transform Transform112 = createNode("Transform");
Transform112.DEF = "hyroglyphen2";
Transform112.translation = new SFVec3f(new float[39.872,4.6328,-77.6183]);
Transform112.rotation = new SFRotation(new float[0,1,0,1.5708]);
Transform112.scale = new SFVec3f(new float[3.68301,3.62628,3.56043]);
Shape Shape113 = createNode("Shape");
Appearance Appearance114 = createNode("Appearance");
Material Material115 = createNode("Material");
Material115.ambientIntensity = 0.16;
Material115.diffuseColor = new SFColor(new float[1,1,1]);
Appearance114.material = Material115;

ImageTexture ImageTexture116 = createNode("ImageTexture");
ImageTexture116.USE = "_7";
Appearance114.texture = ImageTexture116;

TextureTransform TextureTransform117 = createNode("TextureTransform");
TextureTransform117.DEF = "_8";
TextureTransform117.scale = new SFVec2f(new float[2,2]);
Appearance114.textureTransform = TextureTransform117;

Shape113.appearance = Appearance114;

IndexedFaceSet IndexedFaceSet118 = createNode("IndexedFaceSet");
IndexedFaceSet118.ccw = False;
IndexedFaceSet118.coordIndex = new MFInt32(new int[13,9,11,-1,13,2,9,-1,4,11,10,-1,4,13,11,-1,14,10,16,-1,14,4,10,-1,17,1,16,-1,1,14,16,-1,9,7,11,-1,7,12,11,-1,21,3,19,-1,3,18,19,-1,7,21,12,-1,21,19,12,-1,12,10,11,-1,12,6,10,-1,10,6,16,-1,6,15,16,-1,8,17,15,-1,17,16,15,-1,18,20,19,-1,18,5,20,-1,20,6,19,-1,6,12,19,-1,15,20,23,-1,15,6,20,-1,24,8,23,-1,8,15,23,-1,20,5,23,-1,5,22,23,-1,0,24,22,-1,24,23,22,-1]);
TextureCoordinate TextureCoordinate119 = createNode("TextureCoordinate");
TextureCoordinate119.point = new MFVec2f(new float[0,0,1,0,1,1,0,1,1,0.5,0,0.5,0.5,0.5,0.5,1,0.5,0,0.75,1,0.75,0.5,0.75,0.75,0.5,0.75,1,0.75,1,0.25,0.5,0.25,0.75,0.25,0.75,0,0,0.75,0.25,0.75,0.25,0.5,0.25,1,0,0.25,0.25,0.25,0.25,0]);
IndexedFaceSet118.texCoord = TextureCoordinate119;

Coordinate Coordinate120 = createNode("Coordinate");
Coordinate120.point = new MFVec3f(new float[-0.5,-1,0,0.5,-1,0,0.5,1,0,-0.5,1,0,0.5,0,0,-0.5,0,0,0,0,0,0,1,0,0,-1,0,0.25,1,0,0.25,0,0,0.25,0.5,0,0,0.5,0,0.5,0.5,0,0.5,-0.5,0,0,-0.5,0,0.25,-0.5,0,0.25,-1,0,-0.5,0.5,0,-0.25,0.5,0,-0.25,0,0,-0.25,1,0,-0.5,-0.5,0,-0.25,-0.5,0,-0.25,-1,0]);
IndexedFaceSet118.coord = Coordinate120;

Shape113.geometry = IndexedFaceSet118;

Transform112.child = new undefined();

Transform112.child[0] = Shape113;

Transform93.children[2] = Transform112;

Transform Transform121 = createNode("Transform");
Transform121.DEF = "hyroglyphen1";
Transform121.translation = new SFVec3f(new float[2.6231,4.6328,-79.9542]);
Transform121.scale = new SFVec3f(new float[3.68301,3.62628,3.56043]);
Shape Shape122 = createNode("Shape");
Appearance Appearance123 = createNode("Appearance");
Material Material124 = createNode("Material");
Material124.ambientIntensity = 0.16;
Material124.diffuseColor = new SFColor(new float[1,1,1]);
Appearance123.material = Material124;

ImageTexture ImageTexture125 = createNode("ImageTexture");
ImageTexture125.USE = "_7";
Appearance123.texture = ImageTexture125;

TextureTransform TextureTransform126 = createNode("TextureTransform");
TextureTransform126.USE = "_8";
Appearance123.textureTransform = TextureTransform126;

Shape122.appearance = Appearance123;

IndexedFaceSet IndexedFaceSet127 = createNode("IndexedFaceSet");
IndexedFaceSet127.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate128 = createNode("TextureCoordinate");
TextureCoordinate128.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet127.texCoord = TextureCoordinate128;

Coordinate Coordinate129 = createNode("Coordinate");
Coordinate129.point = new MFVec3f(new float[-0.5,-1,0,0.5,-1,0,0.5,1,0,-0.5,1,0]);
IndexedFaceSet127.coord = Coordinate129;

Shape122.geometry = IndexedFaceSet127;

Transform121.child = new undefined();

Transform121.child[0] = Shape122;

Transform93.children[3] = Transform121;

Transform43.children[2] = Transform93;

Transform Transform130 = createNode("Transform");
Transform130.DEF = "paint1_1";
Transform Transform131 = createNode("Transform");
Transform131.DEF = "paint1";
Transform131.translation = new SFVec3f(new float[79.9639,4.54995,-42.4807]);
Transform131.rotation = new SFRotation(new float[0,1,0,4.71239]);
Transform131.scale = new SFVec3f(new float[16.1839,7.73213,3.74369]);
Shape Shape132 = createNode("Shape");
Appearance Appearance133 = createNode("Appearance");
Material Material134 = createNode("Material");
Material134.DEF = "_9";
Material134.ambientIntensity = 0.16;
Material134.diffuseColor = new SFColor(new float[1,1,1]);
Appearance133.material = Material134;

ImageTexture ImageTexture135 = createNode("ImageTexture");
ImageTexture135.DEF = "_10";
ImageTexture135.url = new MFString(new java.lang.String["wallpaint1.jpg"]);
Appearance133.texture = ImageTexture135;

TextureTransform TextureTransform136 = createNode("TextureTransform");
TextureTransform136.DEF = "_11";
TextureTransform136.scale = new SFVec2f(new float[4,2]);
Appearance133.textureTransform = TextureTransform136;

Shape132.appearance = Appearance133;

IndexedFaceSet IndexedFaceSet137 = createNode("IndexedFaceSet");
IndexedFaceSet137.coordIndex = new MFInt32(new int[0,5,7,-1,5,6,7,-1,6,1,7,-1,6,4,1,-1,5,3,6,-1,3,8,6,-1,8,4,6,-1,8,2,4,-1]);
TextureCoordinate TextureCoordinate138 = createNode("TextureCoordinate");
TextureCoordinate138.point = new MFVec2f(new float[0,0,0,1,0.25,1,0.25,0,0.125,1,0.125,0,0.125,0.5,0,0.5,0.25,0.5]);
IndexedFaceSet137.texCoord = TextureCoordinate138;

Coordinate Coordinate139 = createNode("Coordinate");
Coordinate139.point = new MFVec3f(new float[-2.0078,-0.5,0,-2.0078,0.5,0,-1.0039,0.5,0,-1.0039,-0.5,0,-1.50585,0.5,0,-1.50585,-0.5,0,-1.50585,0,0,-2.0078,0,0,-1.0039,0,0]);
IndexedFaceSet137.coord = Coordinate139;

Shape132.geometry = IndexedFaceSet137;

Transform131.child = new undefined();

Transform131.child[0] = Shape132;

Transform130.children = new MFNode();

Transform130.children[0] = Transform131;

Transform Transform140 = createNode("Transform");
Transform140.translation = new SFVec3f(new float[79.9639,4.54995,-42.4807]);
Transform140.rotation = new SFRotation(new float[0,1,0,4.71239]);
Transform140.scale = new SFVec3f(new float[16.1839,7.73213,3.74369]);
Shape Shape141 = createNode("Shape");
Appearance Appearance142 = createNode("Appearance");
Material Material143 = createNode("Material");
Material143.USE = "_9";
Appearance142.material = Material143;

ImageTexture ImageTexture144 = createNode("ImageTexture");
ImageTexture144.USE = "_10";
Appearance142.texture = ImageTexture144;

TextureTransform TextureTransform145 = createNode("TextureTransform");
TextureTransform145.USE = "_11";
Appearance142.textureTransform = TextureTransform145;

Shape141.appearance = Appearance142;

IndexedFaceSet IndexedFaceSet146 = createNode("IndexedFaceSet");
IndexedFaceSet146.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,1,4,3,-1,3,5,2,-1,3,6,5,-1,4,7,3,-1,7,6,3,-1,7,8,6,-1]);
TextureCoordinate TextureCoordinate147 = createNode("TextureCoordinate");
TextureCoordinate147.point = new MFVec2f(new float[0.25,0,0.375,0,0.25,0.5,0.375,0.5,0.5,0,0.25,1,0.375,1,0.5,0.5,0.5,1]);
IndexedFaceSet146.texCoord = TextureCoordinate147;

Coordinate Coordinate148 = createNode("Coordinate");
Coordinate148.point = new MFVec3f(new float[-1.0039,-0.5,0,-0.50195,-0.5,0,-1.0039,0,0,-0.50195,0,0,0,-0.5,0,-1.0039,0.5,0,-0.50195,0.5,0,0,0,0,0,0.5,0]);
IndexedFaceSet146.coord = Coordinate148;

Shape141.geometry = IndexedFaceSet146;

Transform140.child = new undefined();

Transform140.child[0] = Shape141;

Transform130.children[1] = Transform140;

Transform Transform149 = createNode("Transform");
Transform149.translation = new SFVec3f(new float[79.9639,4.54995,-42.4807]);
Transform149.rotation = new SFRotation(new float[0,1,0,4.71239]);
Transform149.scale = new SFVec3f(new float[16.1839,7.73213,3.74369]);
Shape Shape150 = createNode("Shape");
Appearance Appearance151 = createNode("Appearance");
Material Material152 = createNode("Material");
Material152.USE = "_9";
Appearance151.material = Material152;

ImageTexture ImageTexture153 = createNode("ImageTexture");
ImageTexture153.USE = "_10";
Appearance151.texture = ImageTexture153;

TextureTransform TextureTransform154 = createNode("TextureTransform");
TextureTransform154.USE = "_11";
Appearance151.textureTransform = TextureTransform154;

Shape150.appearance = Appearance151;

IndexedFaceSet IndexedFaceSet155 = createNode("IndexedFaceSet");
IndexedFaceSet155.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,1,4,3,-1,3,5,2,-1,3,6,5,-1,4,7,3,-1,7,6,3,-1,7,8,6,-1]);
TextureCoordinate TextureCoordinate156 = createNode("TextureCoordinate");
TextureCoordinate156.point = new MFVec2f(new float[0.5,0,0.625,0,0.5,0.5,0.625,0.5,0.75,0,0.5,1,0.625,1,0.75,0.5,0.75,1]);
IndexedFaceSet155.texCoord = TextureCoordinate156;

Coordinate Coordinate157 = createNode("Coordinate");
Coordinate157.point = new MFVec3f(new float[0,-0.5,0,0.50195,-0.5,0,0,0,0,0.50195,0,0,1.0039,-0.5,0,0,0.5,0,0.50195,0.5,0,1.0039,0,0,1.0039,0.5,0]);
IndexedFaceSet155.coord = Coordinate157;

Shape150.geometry = IndexedFaceSet155;

Transform149.child = new undefined();

Transform149.child[0] = Shape150;

Transform130.children[2] = Transform149;

Transform Transform158 = createNode("Transform");
Transform158.translation = new SFVec3f(new float[79.9639,4.54995,-42.4807]);
Transform158.rotation = new SFRotation(new float[0,1,0,4.71239]);
Transform158.scale = new SFVec3f(new float[16.1839,7.73213,3.74369]);
Shape Shape159 = createNode("Shape");
Appearance Appearance160 = createNode("Appearance");
Material Material161 = createNode("Material");
Material161.USE = "_9";
Appearance160.material = Material161;

ImageTexture ImageTexture162 = createNode("ImageTexture");
ImageTexture162.USE = "_10";
Appearance160.texture = ImageTexture162;

TextureTransform TextureTransform163 = createNode("TextureTransform");
TextureTransform163.USE = "_11";
Appearance160.textureTransform = TextureTransform163;

Shape159.appearance = Appearance160;

IndexedFaceSet IndexedFaceSet164 = createNode("IndexedFaceSet");
IndexedFaceSet164.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,1,4,3,-1,3,5,2,-1,3,6,5,-1,4,7,3,-1,7,6,3,-1,7,8,6,-1]);
TextureCoordinate TextureCoordinate165 = createNode("TextureCoordinate");
TextureCoordinate165.point = new MFVec2f(new float[0.75,0,0.875,0,0.75,0.5,0.875,0.5,1,0,0.75,1,0.875,1,1,0.5,1,1]);
IndexedFaceSet164.texCoord = TextureCoordinate165;

Coordinate Coordinate166 = createNode("Coordinate");
Coordinate166.point = new MFVec3f(new float[1.0039,-0.5,0,1.50585,-0.5,0,1.0039,0,0,1.50585,0,0,2.0078,-0.5,0,1.0039,0.5,0,1.50585,0.5,0,2.0078,0,0,2.0078,0.5,0]);
IndexedFaceSet164.coord = Coordinate166;

Shape159.geometry = IndexedFaceSet164;

Transform158.child = new undefined();

Transform158.child[0] = Shape159;

Transform130.children[3] = Transform158;

Transform43.children[3] = Transform130;

Collision42.proxy = Transform43;

Transform16.children[1] = Collision42;

children[2] = Transform16;

}
