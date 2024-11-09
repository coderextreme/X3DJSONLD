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
meta3.content = "Thu, 23 Apr 2015 06:07:08 GMT";
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
meta6.content = "Thu, 23 Apr 2015 06:07:08 GMT";
head1.meta[4] = meta6;

head = head1;

ExternProtoDeclare ExternProtoDeclare8 = createNode("ExternProtoDeclare");
ExternProtoDeclare8.name = "Int";
ExternProtoDeclare8.url = new MFString(new java.lang.String["Int_proto.x3d"]);
field field9 = createNode("field");
field9.name = "startTime";
field9.accessType = "inputOnly";
field9.type = "SFTime";
ExternProtoDeclare8.field = new MFNode();

ExternProtoDeclare8.field[0] = field9;

field field10 = createNode("field");
field10.name = "value_changed";
field10.accessType = "outputOnly";
field10.type = "SFInt32";
ExternProtoDeclare8.field[1] = field10;

field field11 = createNode("field");
field11.name = "keyValue";
field11.accessType = "inputOutput";
field11.type = "SFInt32";
ExternProtoDeclare8.field[2] = field11;

children = new MFNode();

children[0] = ExternProtoDeclare8;

WorldInfo WorldInfo12 = createNode("WorldInfo");
WorldInfo12.info = new MFString(new java.lang.String[", ","Created in TitaniaPackaged by CosmoPackage"]);
children[1] = WorldInfo12;

Transform Transform13 = createNode("Transform");
Transform Transform14 = createNode("Transform");
NavigationInfo NavigationInfo15 = createNode("NavigationInfo");
NavigationInfo15.DEF = "_NoNameNavInfo1";
NavigationInfo15.type = new MFString(new java.lang.String["WALK"]);
NavigationInfo15.avatarSize = new MFFloat(new float[0.2,1.2,0.6]);
NavigationInfo15.headlight = False;
Transform14.children = new MFNode();

Transform14.children[0] = NavigationInfo15;

Viewpoint Viewpoint16 = createNode("Viewpoint");
Viewpoint16.DEF = "VP1";
Viewpoint16.position = new SFVec3f(new float[-25.4603,1.34,70.5784]);
Viewpoint16.orientation = new SFRotation(new float[-4.24098e-7,-1,-9.28172e-7,1.05594]);
Viewpoint16.fieldOfView = 1.2;
Transform14.children[1] = Viewpoint16;

Transform13.children = new MFNode();

Transform13.children[0] = Transform14;

Transform Transform17 = createNode("Transform");
Transform17.translation = new SFVec3f(new float[18.7824,0.205183,23.024]);
Inline Inline18 = createNode("Inline");
Inline18.url = new MFString(new java.lang.String["txt.x3d"]);
Inline18.bboxSize = new SFVec3f(new float[17.3429,3.18392,0.140415]);
Inline18.bboxCenter = new SFVec3f(new float[-0.0362263,1.98502,0.203821]);
Transform17.children = new MFNode();

Transform17.children[0] = Inline18;

Transform13.children[1] = Transform17;

Transform Transform19 = createNode("Transform");
Transform Transform20 = createNode("Transform");
Transform Transform21 = createNode("Transform");
Transform21.translation = new SFVec3f(new float[-28.7286,5.1988,65.0762]);
Transform21.rotation = new SFRotation(new float[0,1,0,1.5708]);
Transform21.scale = new SFVec3f(new float[5.91849,5.91849,5.91853]);
Shape Shape22 = createNode("Shape");
Appearance Appearance23 = createNode("Appearance");
ImageTexture ImageTexture24 = createNode("ImageTexture");
ImageTexture24.url = new MFString(new java.lang.String["cinemaxx.png"]);
Appearance23.texture = ImageTexture24;

Shape22.appearance = Appearance23;

IndexedFaceSet IndexedFaceSet25 = createNode("IndexedFaceSet");
IndexedFaceSet25.coordIndex = new MFInt32(new int[0,1,2,3,-1,7,6,5,4,-1]);
TextureCoordinate TextureCoordinate26 = createNode("TextureCoordinate");
TextureCoordinate26.point = new MFVec2f(new float[0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1]);
IndexedFaceSet25.texCoord = TextureCoordinate26;

Coordinate Coordinate27 = createNode("Coordinate");
Coordinate27.point = new MFVec3f(new float[-3.6548,-0.5,0,3.6548,-0.5,0,3.6548,0.5,0,-3.6548,0.5,0,-3.6548,-1.29807,0,3.6548,-1.29807,0,3.6548,-2.2314,0,-3.6548,-2.2314,0]);
IndexedFaceSet25.coord = Coordinate27;

Shape22.geometry = IndexedFaceSet25;

Transform21.child = new undefined();

Transform21.child[0] = Shape22;

Transform20.children = new MFNode();

Transform20.children[0] = Transform21;

Transform Transform28 = createNode("Transform");
Transform Transform29 = createNode("Transform");
Transform29.translation = new SFVec3f(new float[-26.2603,-0.0298815,16.3863]);
Transform29.rotation = new SFRotation(new float[0,1,0,1.218]);
Transform29.scale = new SFVec3f(new float[0.999999,0.999999,0.999999]);
Inline Inline30 = createNode("Inline");
Inline30.url = new MFString(new java.lang.String["invaders.x3d"]);
Inline30.bboxSize = new SFVec3f(new float[13.1266,18.69,0.199351]);
Inline30.bboxCenter = new SFVec3f(new float[-0.0362258,0.00826502,0.0996754]);
Transform29.children = new MFNode();

Transform29.children[0] = Inline30;

Transform28.children = new MFNode();

Transform28.children[0] = Transform29;

Transform Transform31 = createNode("Transform");
Transform31.translation = new SFVec3f(new float[2.86797,-0.0298796,-3.20924]);
Transform31.rotation = new SFRotation(new float[0,-1,0,0.918547]);
Transform31.scale = new SFVec3f(new float[0.999999,1,0.999999]);
Inline Inline32 = createNode("Inline");
Inline32.url = new MFString(new java.lang.String["benhur.x3d"]);
Inline32.bboxSize = new SFVec3f(new float[13.1266,18.69,0.199351]);
Inline32.bboxCenter = new SFVec3f(new float[-0.0362258,0.00826502,0.0996755]);
Transform31.children = new MFNode();

Transform31.children[0] = Inline32;

Transform28.children[1] = Transform31;

Transform Transform33 = createNode("Transform");
Transform33.translation = new SFVec3f(new float[-9.44331,-0.0298834,-5.10966]);
Transform33.rotation = new SFRotation(new float[0,1,0,0.34648]);
Transform33.scale = new SFVec3f(new float[0.999999,0.999999,0.999999]);
Inline Inline34 = createNode("Inline");
Inline34.url = new MFString(new java.lang.String["flashgordon.x3d"]);
Inline34.bboxSize = new SFVec3f(new float[13.1266,18.69,0.199351]);
Inline34.bboxCenter = new SFVec3f(new float[-0.0362258,0.00826502,0.0996755]);
Transform33.children = new MFNode();

Transform33.children[0] = Inline34;

Transform28.children[2] = Transform33;

Transform Transform35 = createNode("Transform");
Transform35.translation = new SFVec3f(new float[-20.567,-0.0298815,4.33705]);
Transform35.rotation = new SFRotation(new float[0,1,0,1.04051]);
Transform35.scale = new SFVec3f(new float[0.999999,1,0.999999]);
Inline Inline36 = createNode("Inline");
Inline36.url = new MFString(new java.lang.String["mothra.x3d"]);
Inline36.bboxSize = new SFVec3f(new float[13.1266,18.69,0.199351]);
Inline36.bboxCenter = new SFVec3f(new float[-0.0362258,0.00826502,0.0996754]);
Transform35.children = new MFNode();

Transform35.children[0] = Inline36;

Transform28.children[3] = Transform35;

Transform Transform37 = createNode("Transform");
Transform37.translation = new SFVec3f(new float[-28.5982,-0.0298815,30.0151]);
Transform37.rotation = new SFRotation(new float[0,1,0,1.5708]);
Transform37.scale = new SFVec3f(new float[0.999999,1,0.999999]);
Inline Inline38 = createNode("Inline");
Inline38.url = new MFString(new java.lang.String["tiffany.x3d"]);
Inline38.bboxSize = new SFVec3f(new float[13.1266,18.69,0.199351]);
Inline38.bboxCenter = new SFVec3f(new float[-0.0362258,0.00826502,0.0996754]);
Transform37.children = new MFNode();

Transform37.children[0] = Inline38;

Transform28.children[4] = Transform37;

Transform20.children[1] = Transform28;

Transform19.children = new MFNode();

Transform19.children[0] = Transform20;

Transform Transform39 = createNode("Transform");
Transform Transform40 = createNode("Transform");
Transform Transform41 = createNode("Transform");
Transform41.DEF = "iwall";
Transform41.translation = new SFVec3f(new float[-11.1644,10.4411,28.1237]);
Transform41.rotation = new SFRotation(new float[0,1,0,1.33498]);
Transform41.scale = new SFVec3f(new float[3.84088,1.02745,1.83488]);
Shape Shape42 = createNode("Shape");
Appearance Appearance43 = createNode("Appearance");
Shape42.appearance = Appearance43;

IndexedFaceSet IndexedFaceSet44 = createNode("IndexedFaceSet");
IndexedFaceSet44.solid = False;
IndexedFaceSet44.creaseAngle = 0.5;
IndexedFaceSet44.colorIndex = new MFInt32(new int[0,1,1,0,-1,1,0,0,1,-1,0,1,1,0,-1,1,0,0,1,-1,0,1,1,0,-1,1,0,0,1,-1,0,1,1,0,-1,1,0,0,1,-1,0,1,1,0,-1,1,0,0,1,-1,0,1,1,0,-1,1,0,0,1,-1,0,1,1,0,-1,1,0,0,1,-1,0,1,1,0,-1,1,0,0,1,-1,0,1,1,0,-1,1,0,0,1,-1,0,1,1,0,-1,1,0,0,1,-1,0,1,8,18,10,-1,21,12,3,2,11,-1,4,14,26,13,5,-1,23,15,0,1,9,-1,16,6,10,19,-1,20,11,6,17,-1,7,15,22,25,-1,14,7,24,27,-1]);
IndexedFaceSet44.coordIndex = new MFInt32(new int[2,23,22,0,-1,23,3,1,22,-1,4,24,23,2,-1,24,5,3,23,-1,6,25,24,4,-1,25,7,5,24,-1,8,26,25,6,-1,26,9,7,25,-1,10,27,26,8,-1,27,11,9,26,-1,12,28,27,10,-1,28,13,11,27,-1,14,29,28,12,-1,29,15,13,28,-1,16,30,29,14,-1,30,17,15,29,-1,18,31,30,16,-1,31,19,17,30,-1,20,32,31,18,-1,32,21,19,31,-1,21,32,38,45,39,-1,46,41,34,33,40,-1,35,42,49,41,34,-1,47,43,20,32,38,-1,44,36,39,45,-1,46,40,36,44,-1,37,43,47,48,-1,42,37,48,49,-1]);
Color Color45 = createNode("Color");
Color45.color = new MFColor(new float[0.513369,0.273405,0.0764001,0.985547,1,0.747541,0.513369,0.273405,0.0764001,0.985547,1,0.747541,0.513369,0.273405,0.0764001,0.985547,1,0.747541,0.513369,0.273405,0.0764001,0.513369,0.273405,0.0764001,0.985547,1,0.747541,0.985547,1,0.747541,0.513369,0.273405,0.0764001,0.513369,0.273405,0.0764001,0.985547,1,0.747541,0.985547,1,0.747541,0.513369,0.273405,0.0764001,0.513369,0.273405,0.0764001,0.749458,0.636702,0.411971,0.749458,0.636703,0.411971,0.749458,0.636702,0.411971,0.749458,0.636703,0.411971,0.749458,0.636702,0.411971,0.749458,0.636703,0.411971,0.749458,0.636703,0.411971,0.749458,0.636702,0.411971,0.749458,0.636703,0.411971,0.749458,0.636702,0.411971,0.749458,0.636703,0.411971,0.749458,0.636702,0.411971]);
IndexedFaceSet44.color = Color45;

Coordinate Coordinate46 = createNode("Coordinate");
Coordinate46.point = new MFVec3f(new float[0.00000190735,-20,-10,0.00000190735,0.0000171661,-10,3.82683,-20,-9.2388,3.82683,0.0000171661,-9.2388,7.07107,-20,-7.07107,7.07107,0.0000171661,-7.07107,9.2388,-20,-3.82683,9.2388,0.0000171661,-3.82683,10,-20,-0.00000147023,10,0.0000171661,-0.00000147023,9.2388,-20,3.82684,9.2388,0.0000171661,3.82684,7.07107,-20,7.07107,7.07107,0.0000171661,7.07107,3.82683,-20,9.2388,3.82683,0.0000171661,9.2388,0.00000341731,-20,10,0.00000341731,0.0000171661,10,-3.82683,-20,9.2388,-3.82683,0.0000171661,9.2388,-7.26183,-20,14.9653,-7.26183,0.0000171661,14.9653,0.00000190735,-9.99998,-10,3.82683,-9.99998,-9.2388,7.07107,-9.99998,-7.07107,9.2388,-9.99998,-3.82683,10,-9.99998,-0.00000147023,9.2388,-9.99998,3.82684,7.07107,-9.99998,7.07107,3.82683,-9.99998,9.2388,0.00000341731,-9.99998,10,-3.82683,-9.99998,9.2388,-7.26183,-9.99998,14.9653,-7.78759,0.0000171661,26.6054,-7.78759,-9.99998,26.6054,-7.78363,-20,26.5177,-7.52471,0.0000171661,20.7853,-7.52273,-20,20.7415,-7.39327,-9.99998,17.8753,-7.39327,0.0000171661,17.8753,-7.65615,0.0000171661,23.6954,-7.65615,-9.99998,23.6954,-7.65318,-20,23.6296,-7.39228,-20,17.8534,-7.52471,-4.99998,20.7853,-7.39327,-4.99998,17.8753,-7.65615,-4.99998,23.6954,-7.39278,-15,17.8643,-7.52372,-15,20.7634,-7.65467,-15,23.6625]);
IndexedFaceSet44.coord = Coordinate46;

Shape42.geometry = IndexedFaceSet44;

Transform41.child = new undefined();

Transform41.child[0] = Shape42;

Transform40.children = new MFNode();

Transform40.children[0] = Transform41;

Transform Transform47 = createNode("Transform");
Transform47.DEF = "down";
Transform47.translation = new SFVec3f(new float[0.123907,5.24891,-9.45699]);
Transform47.rotation = new SFRotation(new float[0,1,0,1.5708]);
Transform47.scale = new SFVec3f(new float[9.99994,0.7,3.85446]);
Shape Shape48 = createNode("Shape");
Appearance Appearance49 = createNode("Appearance");
Shape48.appearance = Appearance49;

IndexedFaceSet IndexedFaceSet50 = createNode("IndexedFaceSet");
IndexedFaceSet50.creaseAngle = 0.5;
IndexedFaceSet50.colorIndex = new MFInt32(new int[0,0,1,1,-1,0,1,2,3,-1,1,0,5,4,-1,5,0,1,4,-1,2,7,6,3,-1,7,1,0,6,-1,0,1,9,8,-1]);
IndexedFaceSet50.coordIndex = new MFInt32(new int[4,5,6,7,-1,4,7,8,9,-1,6,5,11,10,-1,11,1,3,10,-1,8,13,12,9,-1,13,2,0,12,-1,0,2,3,1,-1]);
Color Color51 = createNode("Color");
Color51.color = new MFColor(new float[0.985547,1,0.747541,0.513369,0.273405,0.0764001,0.513369,0.273405,0.0764001,0.985547,1,0.747541,0.513369,0.273405,0.0764001,0.985547,1,0.747541,0.985547,1,0.747541,0.513369,0.273405,0.0764001,0.985547,1,0.747541,0.513369,0.273405,0.0764001]);
IndexedFaceSet50.color = Color51;

Coordinate Coordinate52 = createNode("Coordinate");
Coordinate52.point = new MFVec3f(new float[-10.4009,-7.5,-7.5,-10.4009,-7.5,7.5,-10.0573,7.5,-7.5,-10.0573,7.5,7.5,0,-7.5,-7.5,0,-7.5,7.5,0.343662,7.5,7.5,0.343662,7.5,-7.5,-3.32725,7.5,-7.5,-3.32725,-7.5,-7.5,-7.80524,7.5,7.5,-7.80524,-7.5,7.5,-7.81605,-7.5,-7.5,-7.81605,7.5,-7.5]);
IndexedFaceSet50.coord = Coordinate52;

Shape48.geometry = IndexedFaceSet50;

Transform47.child = new undefined();

Transform47.child[0] = Shape48;

Transform40.children[1] = Transform47;

Transform39.children = new MFNode();

Transform39.children[0] = Transform40;

Transform Transform53 = createNode("Transform");
Transform53.translation = new SFVec3f(new float[0.123907,5.24891,-9.45699]);
Transform53.rotation = new SFRotation(new float[0,1,0,1.5708]);
Transform53.scale = new SFVec3f(new float[9.99996,0.7,3.85446]);
Shape Shape54 = createNode("Shape");
Appearance Appearance55 = createNode("Appearance");
Material Material56 = createNode("Material");
Material56.ambientIntensity = 0;
Material56.diffuseColor = new SFColor(new float[0,0,0]);
Material56.emissiveColor = new SFColor(new float[0.680851,0.154898,0]);
Material56.shininess = 0;
Material56.transparency = 0.159574;
Appearance55.material = Material56;

Shape54.appearance = Appearance55;

IndexedFaceSet IndexedFaceSet57 = createNode("IndexedFaceSet");
IndexedFaceSet57.creaseAngle = 0.5;
IndexedFaceSet57.colorPerVertex = False;
IndexedFaceSet57.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate58 = createNode("Coordinate");
Coordinate58.point = new MFVec3f(new float[0,-7.5,7.5,0,-7.5,-7.5,-10.4009,-7.5,-7.5,-10.4009,-7.5,7.5]);
IndexedFaceSet57.coord = Coordinate58;

Shape54.geometry = IndexedFaceSet57;

Transform53.child = new undefined();

Transform53.child[0] = Shape54;

Transform39.children[1] = Transform53;

Transform Transform59 = createNode("Transform");
Transform59.translation = new SFVec3f(new float[0.248186,-0.00743449,0]);
Transform59.rotation = new SFRotation(new float[0,0,1,3.14159]);
Transform59.scale = new SFVec3f(new float[1,1,0.999998]);
Transform Transform60 = createNode("Transform");
Transform60.USE = "down";
Transform59.children = new MFNode();

Transform59.children[0] = Transform60;

Transform39.children[2] = Transform59;

Transform Transform61 = createNode("Transform");
Transform Transform62 = createNode("Transform");
Transform62.DEF = "_1";
Transform62.translation = new SFVec3f(new float[0.123907,5.24891,-9.45699]);
Transform62.rotation = new SFRotation(new float[0,1,0,1.5708]);
Transform62.scale = new SFVec3f(new float[9.99996,0.7,3.85446]);
Shape Shape63 = createNode("Shape");
Appearance Appearance64 = createNode("Appearance");
ImageTexture ImageTexture65 = createNode("ImageTexture");
ImageTexture65.url = new MFString(new java.lang.String["mt3.png"]);
Appearance64.texture = ImageTexture65;

TextureTransform TextureTransform66 = createNode("TextureTransform");
TextureTransform66.scale = new SFVec2f(new float[4,1]);
Appearance64.textureTransform = TextureTransform66;

Shape63.appearance = Appearance64;

IndexedFaceSet IndexedFaceSet67 = createNode("IndexedFaceSet");
IndexedFaceSet67.solid = False;
IndexedFaceSet67.creaseAngle = 0.5;
IndexedFaceSet67.colorIndex = new MFInt32(new int[1,1,0,0,-1]);
IndexedFaceSet67.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Color Color68 = createNode("Color");
Color68.color = new MFColor(new float[1,0.881262,0.699983,0.513369,0.273405,0.0764001]);
IndexedFaceSet67.color = Color68;

TextureCoordinate TextureCoordinate69 = createNode("TextureCoordinate");
TextureCoordinate69.point = new MFVec2f(new float[1,1.44217,1,0,0,0,0,1.44217]);
IndexedFaceSet67.texCoord = TextureCoordinate69;

Coordinate Coordinate70 = createNode("Coordinate");
Coordinate70.point = new MFVec3f(new float[0.343662,7.5,-7.5,0.343662,7.5,7.5,-10.0573,7.5,7.5,-10.0573,7.5,-7.5]);
IndexedFaceSet67.coord = Coordinate70;

Shape63.geometry = IndexedFaceSet67;

Transform62.child = new undefined();

Transform62.child[0] = Shape63;

Transform61.children = new MFNode();

Transform61.children[0] = Transform62;

Transform Transform71 = createNode("Transform");
Transform71.DEF = "fxfloor";
Transform71.translation = new SFVec3f(new float[0.123907,5.41662,-9.45699]);
Transform71.rotation = new SFRotation(new float[0,1,0,1.5708]);
Transform71.scale = new SFVec3f(new float[9.99995,0.7,3.85446]);
Shape Shape72 = createNode("Shape");
Appearance Appearance73 = createNode("Appearance");
ImageTexture ImageTexture74 = createNode("ImageTexture");
ImageTexture74.url = new MFString(new java.lang.String["light10.png"]);
Appearance73.texture = ImageTexture74;

TextureTransform TextureTransform75 = createNode("TextureTransform");
TextureTransform75.scale = new SFVec2f(new float[15,10]);
Appearance73.textureTransform = TextureTransform75;

Shape72.appearance = Appearance73;

IndexedFaceSet IndexedFaceSet76 = createNode("IndexedFaceSet");
IndexedFaceSet76.creaseAngle = 0.5;
IndexedFaceSet76.colorPerVertex = False;
IndexedFaceSet76.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate77 = createNode("TextureCoordinate");
TextureCoordinate77.point = new MFVec2f(new float[1,0,0.994887,0.991237,0.00882173,0.991237,0,0]);
IndexedFaceSet76.texCoord = TextureCoordinate77;

Coordinate Coordinate78 = createNode("Coordinate");
Coordinate78.point = new MFVec3f(new float[0,-7.5,7.5,0,-7.5,-7.5,-10.4009,-7.5,-7.5,-10.4009,-7.5,7.5]);
IndexedFaceSet76.coord = Coordinate78;

Shape72.geometry = IndexedFaceSet76;

Transform71.child = new undefined();

Transform71.child[0] = Shape72;

Transform61.children[1] = Transform71;

Transform Transform79 = createNode("Transform");
Transform79.translation = new SFVec3f(new float[0,-21.0105,0]);
Transform Transform80 = createNode("Transform");
Transform80.USE = "_1";
Transform79.children = new MFNode();

Transform79.children[0] = Transform80;

Transform61.children[2] = Transform79;

Transform39.children[3] = Transform61;

Transform19.children[1] = Transform39;

Transform Transform81 = createNode("Transform");
Transform Transform82 = createNode("Transform");
Transform Transform83 = createNode("Transform");
Transform83.translation = new SFVec3f(new float[7.49703,-0.0298834,25.036]);
Transform83.rotation = new SFRotation(new float[0,1,0,4.57398]);
Transform83.scale = new SFVec3f(new float[0.999999,0.999999,0.999999]);
Inline Inline84 = createNode("Inline");
Inline84.url = new MFString(new java.lang.String["dollars.x3d"]);
Inline84.bboxSize = new SFVec3f(new float[13.1266,18.69,0.199351]);
Inline84.bboxCenter = new SFVec3f(new float[-0.0362258,0.00826502,0.0996754]);
Transform83.children = new MFNode();

Transform83.children[0] = Inline84;

Transform82.children = new MFNode();

Transform82.children[0] = Transform83;

Transform Transform85 = createNode("Transform");
Transform85.translation = new SFVec3f(new float[3.79072,-0.0298815,39.4937]);
Transform85.rotation = new SFRotation(new float[0,1,0,4.36514]);
Transform85.scale = new SFVec3f(new float[1,0.999998,1]);
Inline Inline86 = createNode("Inline");
Inline86.url = new MFString(new java.lang.String["dracula.x3d"]);
Inline86.bboxSize = new SFVec3f(new float[13.1266,18.69,0.199351]);
Inline86.bboxCenter = new SFVec3f(new float[-0.0362258,0.00826502,0.0996754]);
Transform85.children = new MFNode();

Transform85.children[0] = Inline86;

Transform82.children[1] = Transform85;

Transform Transform87 = createNode("Transform");
Transform87.translation = new SFVec3f(new float[5.37705,-0.0298815,54.3633]);
Transform87.rotation = new SFRotation(new float[0,-1,0,1.13406]);
Transform87.scale = new SFVec3f(new float[0.999999,0.999999,0.999999]);
Inline Inline88 = createNode("Inline");
Inline88.url = new MFString(new java.lang.String["metropolis.x3d"]);
Inline88.bboxSize = new SFVec3f(new float[13.1266,18.69,0.199351]);
Inline88.bboxCenter = new SFVec3f(new float[-0.0362258,0.00826502,0.0996754]);
Transform87.children = new MFNode();

Transform87.children[0] = Inline88;

Transform82.children[2] = Transform87;

Transform Transform89 = createNode("Transform");
Transform89.translation = new SFVec3f(new float[8.08561,-0.0298834,11.3828]);
Transform89.rotation = new SFRotation(new float[0,-1,0,1.48945]);
Transform89.scale = new SFVec3f(new float[0.999999,0.999998,0.999999]);
Inline Inline90 = createNode("Inline");
Inline90.url = new MFString(new java.lang.String["clockwork.x3d"]);
Inline90.bboxSize = new SFVec3f(new float[13.1266,18.69,0.199351]);
Inline90.bboxCenter = new SFVec3f(new float[-0.0362258,0.00826502,0.0996755]);
Transform89.children = new MFNode();

Transform89.children[0] = Inline90;

Transform82.children[3] = Transform89;

Transform81.children = new MFNode();

Transform81.children[0] = Transform82;

Transform Transform91 = createNode("Transform");
Transform Transform92 = createNode("Transform");
Transform Transform93 = createNode("Transform");
Transform93.translation = new SFVec3f(new float[13.6627,7.31246,63.378]);
Transform93.rotation = new SFRotation(new float[0,-1,0,0.331114]);
Transform93.scale = new SFVec3f(new float[0.0655398,0.0655399,0.0655398]);
Shape Shape94 = createNode("Shape");
Appearance Appearance95 = createNode("Appearance");
Material Material96 = createNode("Material");
Material96.ambientIntensity = 0;
Material96.diffuseColor = new SFColor(new float[0,0,0]);
Material96.emissiveColor = new SFColor(new float[1,0.678868,0]);
Material96.shininess = 0;
Appearance95.material = Material96;

Shape94.appearance = Appearance95;

Text Text97 = createNode("Text");
Text97.string = new MFString(new java.lang.String["NEUE TRAILER"]);
Text97.length = new MFFloat(new float[0]);
FontStyle FontStyle98 = createNode("FontStyle");
FontStyle98.family = new MFString(new java.lang.String["SANS"]);
FontStyle98.size = 24;
Text97.fontStyle = FontStyle98;

Shape94.geometry = Text97;

Transform93.child = new undefined();

Transform93.child[0] = Shape94;

Transform92.children = new MFNode();

Transform92.children[0] = Transform93;

Transform Transform99 = createNode("Transform");
Transform99.translation = new SFVec3f(new float[18.9913,7.83023,65.0794]);
Transform99.rotation = new SFRotation(new float[0,-1,0,0.330083]);
Transform99.scale = new SFVec3f(new float[21.8741,4.4412,21.8739]);
Transform99.scaleOrientation = new SFRotation(new float[0,-1,0,0.00530409]);
Shape Shape100 = createNode("Shape");
Appearance Appearance101 = createNode("Appearance");
ImageTexture ImageTexture102 = createNode("ImageTexture");
ImageTexture102.url = new MFString(new java.lang.String["bt-glow.png"]);
Appearance101.texture = ImageTexture102;

Shape100.appearance = Appearance101;

IndexedFaceSet IndexedFaceSet103 = createNode("IndexedFaceSet");
IndexedFaceSet103.solid = False;
IndexedFaceSet103.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate104 = createNode("TextureCoordinate");
TextureCoordinate104.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet103.texCoord = TextureCoordinate104;

Coordinate Coordinate105 = createNode("Coordinate");
Coordinate105.point = new MFVec3f(new float[-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0]);
IndexedFaceSet103.coord = Coordinate105;

Shape100.geometry = IndexedFaceSet103;

Transform99.child = new undefined();

Transform99.child[0] = Shape100;

Transform92.children[1] = Transform99;

Transform91.children = new MFNode();

Transform91.children[0] = Transform92;

Transform Transform106 = createNode("Transform");
Transform Transform107 = createNode("Transform");
Transform107.translation = new SFVec3f(new float[13.6627,-6.774,63.3779]);
Transform107.rotation = new SFRotation(new float[0.986327,1.8999e-7,0.164802,3.1416]);
Transform107.scale = new SFVec3f(new float[0.0655397,0.0655399,0.0655398]);
Transform107.scaleOrientation = new SFRotation(new float[0.000002056,1,5.40257e-7,0.0669066]);
Shape Shape108 = createNode("Shape");
Appearance Appearance109 = createNode("Appearance");
Material Material110 = createNode("Material");
Material110.ambientIntensity = 0;
Material110.diffuseColor = new SFColor(new float[0,0,0]);
Material110.emissiveColor = new SFColor(new float[1,0.678868,0]);
Material110.shininess = 0;
Appearance109.material = Material110;

Shape108.appearance = Appearance109;

Text Text111 = createNode("Text");
Text111.string = new MFString(new java.lang.String["NEUE TRAILER"]);
Text111.length = new MFFloat(new float[0]);
FontStyle FontStyle112 = createNode("FontStyle");
FontStyle112.family = new MFString(new java.lang.String["SANS"]);
FontStyle112.size = 24;
Text111.fontStyle = FontStyle112;

Shape108.geometry = Text111;

Transform107.child = new undefined();

Transform107.child[0] = Shape108;

Transform106.children = new MFNode();

Transform106.children[0] = Transform107;

Transform Transform113 = createNode("Transform");
Transform113.translation = new SFVec3f(new float[11.6341,3.02532,62.7071]);
Transform113.rotation = new SFRotation(new float[0.16212,-0.16212,-0.973362,1.59779]);
Transform113.scale = new SFVec3f(new float[2.19317,2.19318,2.19325]);
Transform113.scaleOrientation = new SFRotation(new float[0.504451,0.028565,0.862968,0.00239208]);
Shape Shape114 = createNode("Shape");
Appearance Appearance115 = createNode("Appearance");
ImageTexture ImageTexture116 = createNode("ImageTexture");
ImageTexture116.url = new MFString(new java.lang.String["arrow1.png"]);
Appearance115.texture = ImageTexture116;

Shape114.appearance = Appearance115;

IndexedFaceSet IndexedFaceSet117 = createNode("IndexedFaceSet");
IndexedFaceSet117.solid = False;
IndexedFaceSet117.colorPerVertex = False;
IndexedFaceSet117.colorIndex = new MFInt32(new int[0,0,0,0]);
IndexedFaceSet117.coordIndex = new MFInt32(new int[0,1,2,3,-1,4,5,6,7,-1,8,9,10,11,-1,12,13,14,15,-1]);
Color Color118 = createNode("Color");
Color118.color = new MFColor(new float[1,0.660178,0]);
IndexedFaceSet117.color = Color118;

TextureCoordinate TextureCoordinate119 = createNode("TextureCoordinate");
TextureCoordinate119.point = new MFVec2f(new float[0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1]);
IndexedFaceSet117.texCoord = TextureCoordinate119;

Coordinate Coordinate120 = createNode("Coordinate");
Coordinate120.point = new MFVec3f(new float[-0.8099,-0.5,0,0.8099,-0.5,0,0.8099,0.5,0,-0.8099,0.5,0,2.02005,-0.5,0,3.63985,-0.5,0,3.63985,0.5,0,2.02005,0.5,0,3.63985,7.69426,0.0000246435,2.02005,7.69426,0.0000248284,2.02005,6.69426,0.0000249476,3.63985,6.69426,0.0000247627,0.809904,7.69426,0.0000249665,-0.809896,7.69427,0.0000251513,-0.809898,6.69427,0.0000252705,0.809902,6.69426,0.0000250857]);
IndexedFaceSet117.coord = Coordinate120;

Shape114.geometry = IndexedFaceSet117;

Transform113.child = new undefined();

Transform113.child[0] = Shape114;

Transform106.children[1] = Transform113;

Transform91.children[1] = Transform106;

Transform81.children[1] = Transform91;

Transform19.children[2] = Transform81;

Transform13.children[2] = Transform19;

Switch Switch121 = createNode("Switch");
Switch121.whichChoice = 0;
Transform Transform122 = createNode("Transform");
Transform122.translation = new SFVec3f(new float[18.7824,0.205183,23.024]);
Inline Inline123 = createNode("Inline");
Inline123.url = new MFString(new java.lang.String["mib.x3d"]);
Inline123.bboxSize = new SFVec3f(new float[10.2643,18.8276,0]);
Inline123.bboxCenter = new SFVec3f(new float[-0.0020256,-0.0385637,0.0279587]);
Transform122.children = new MFNode();

Transform122.children[0] = Inline123;

Switch121.children = new MFNode();

Switch121.children[0] = Transform122;

Transform Transform124 = createNode("Transform");
Switch121.children[1] = Transform124;

Transform13.children[3] = Switch121;

children[2] = Transform13;

Transform Transform125 = createNode("Transform");
Transform125.DEF = "EnterWorld";
Script Script126 = createNode("Script");
Script126.DEF = "_enterWorldScript";
field field127 = createNode("field");
field127.name = "isActive";
field127.accessType = "outputOnly";
field127.type = "SFBool";
Script126.field = new MFNode();

Script126.field[0] = field127;

field field128 = createNode("field");
field128.name = "isBound";
field128.accessType = "outputOnly";
field128.type = "SFBool";
Script126.field[1] = field128;

field field129 = createNode("field");
field129.name = "set_startTime";
field129.accessType = "inputOnly";
field129.type = "SFTime";
Script126.field[2] = field129;


Script126.setSourceCode(`vrmlscript:\n"+
"function set_startTime(value, time)\n"+
"{\n"+
"	isActive = FALSE;\n"+
"	isBound  = TRUE;\n"+
"}`)
Transform125.children = new MFNode();

Transform125.children[0] = Script126;

VisibilitySensor VisibilitySensor130 = createNode("VisibilitySensor");
VisibilitySensor130.DEF = "_2";
VisibilitySensor130.size = new SFVec3f(new float[80,30,120]);
VisibilitySensor130.center = new SFVec3f(new float[0,0,40]);
Transform125.children[1] = VisibilitySensor130;

children[3] = Transform125;

Transform Transform131 = createNode("Transform");
Transform131.DEF = "demoLogo";
Transform131.translation = new SFVec3f(new float[-22.4202,4.66662,67.4272]);
Inline Inline132 = createNode("Inline");
Inline132.url = new MFString(new java.lang.String["hud_fov1-2_demo.x3d"]);
Inline132.bboxSize = new SFVec3f(new float[100,10,100]);
Inline132.bboxCenter = new SFVec3f(new float[0,0.5,0]);
Transform131.children = new MFNode();

Transform131.children[0] = Inline132;

children[4] = Transform131;

Transform Transform133 = createNode("Transform");
Transform133.DEF = "else";
Collision Collision134 = createNode("Collision");
Collision134.enabled = False;
Transform Transform135 = createNode("Transform");
Transform135.translation = new SFVec3f(new float[-22.6801,0.228053,70.6665]);
Transform135.scale = new SFVec3f(new float[9.33083,0.0109705,5.77207]);
Shape Shape136 = createNode("Shape");
Appearance Appearance137 = createNode("Appearance");
Material Material138 = createNode("Material");
Material138.ambientIntensity = 0;
Material138.diffuseColor = new SFColor(new float[0,0,0]);
Material138.emissiveColor = new SFColor(new float[0.382979,0,0.0110791]);
Appearance137.material = Material138;

Shape136.appearance = Appearance137;

Box Box139 = createNode("Box");
Box139.size = new SFVec3f(new float[1.27911,1.27909,1.27909]);
Shape136.geometry = Box139;

Transform135.child = new undefined();

Transform135.child[0] = Shape136;

Collision134.proxy = Transform135;

Transform133.children = new MFNode();

Transform133.children[0] = Collision134;

Transform Transform140 = createNode("Transform");
Transform140.translation = new SFVec3f(new float[-23.0628,0.226514,70.5852]);
Inline Inline141 = createNode("Inline");
Inline141.url = new MFString(new java.lang.String["cinemaxx-scout1.x3d"]);
Inline141.bboxSize = new SFVec3f(new float[25,25,25]);
Inline141.bboxCenter = new SFVec3f(new float[0,1,0]);
Transform140.children = new MFNode();

Transform140.children[0] = Inline141;

Transform133.children[1] = Transform140;

children[5] = Transform133;

ROUTE ROUTE142 = createNode("ROUTE");
ROUTE142.fromNode = "_enterWorldScript";
ROUTE142.fromField = "isBound";
ROUTE142.toNode = "_NoNameNavInfo1";
ROUTE142.toField = "set_bind";
children[6] = ROUTE142;

ROUTE ROUTE143 = createNode("ROUTE");
ROUTE143.fromNode = "_enterWorldScript";
ROUTE143.fromField = "isBound";
ROUTE143.toNode = "VP1";
ROUTE143.toField = "set_bind";
children[7] = ROUTE143;

ROUTE ROUTE144 = createNode("ROUTE");
ROUTE144.fromNode = "_2";
ROUTE144.fromField = "enterTime";
ROUTE144.toNode = "_enterWorldScript";
ROUTE144.toField = "set_startTime";
children[8] = ROUTE144;

}
