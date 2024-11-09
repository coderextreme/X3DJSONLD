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
meta3.content = "Fri, 28 Aug 2015 13:01:10 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V1.0.0, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Fri, 28 Aug 2015 13:01:10 GMT";
head1.meta[4] = meta6;

head = head1;

ExternProtoDeclare ExternProtoDeclare8 = createNode("ExternProtoDeclare");
ExternProtoDeclare8.name = "Random";
ExternProtoDeclare8.url = new MFString(new java.lang.String[", ","http://vr.create3000.tv/vrml/protos1.1/Random/Random_proto.x3dRandom_proto.x3d"]);
field field9 = createNode("field");
field9.name = "value";
field9.accessType = "inputOutput";
field9.type = "SFInt32";
ExternProtoDeclare8.field = new MFNode();

ExternProtoDeclare8.field[0] = field9;

field field10 = createNode("field");
field10.name = "numValues";
field10.accessType = "inputOutput";
field10.type = "SFInt32";
ExternProtoDeclare8.field[1] = field10;

field field11 = createNode("field");
field11.name = "startTime";
field11.accessType = "inputOutput";
field11.type = "SFTime";
ExternProtoDeclare8.field[2] = field11;

field field12 = createNode("field");
field12.name = "stopTime";
field12.accessType = "inputOutput";
field12.type = "SFTime";
ExternProtoDeclare8.field[3] = field12;

field field13 = createNode("field");
field13.name = "whichChoice_changed";
field13.accessType = "outputOnly";
field13.type = "SFInt32";
ExternProtoDeclare8.field[4] = field13;

field field14 = createNode("field");
field14.name = "fraction_changed";
field14.accessType = "outputOnly";
field14.type = "SFFloat";
ExternProtoDeclare8.field[5] = field14;

children = new MFNode();

children[0] = ExternProtoDeclare8;

ExternProtoDeclare ExternProtoDeclare15 = createNode("ExternProtoDeclare");
ExternProtoDeclare15.name = "Import";
ExternProtoDeclare15.url = new MFString(new java.lang.String[", ","Import_proto.x3dhttp://vr.create3000.tv/vrml/protos1.1/Import/Import_proto.x3d"]);
field field16 = createNode("field");
field16.name = "url";
field16.accessType = "inputOutput";
field16.type = "MFString";
ExternProtoDeclare15.field = new MFNode();

ExternProtoDeclare15.field[0] = field16;

field field17 = createNode("field");
field17.name = "startTime";
field17.accessType = "inputOutput";
field17.type = "SFTime";
ExternProtoDeclare15.field[1] = field17;

field field18 = createNode("field");
field18.name = "isActive";
field18.accessType = "outputOnly";
field18.type = "SFBool";
ExternProtoDeclare15.field[2] = field18;

field field19 = createNode("field");
field19.name = "exitTime";
field19.accessType = "outputOnly";
field19.type = "SFTime";
ExternProtoDeclare15.field[3] = field19;

field field20 = createNode("field");
field20.name = "parameter";
field20.accessType = "inputOutput";
field20.type = "MFNode";
ExternProtoDeclare15.field[4] = field20;

field field21 = createNode("field");
field21.name = "children";
field21.accessType = "inputOutput";
field21.type = "MFNode";
ExternProtoDeclare15.field[5] = field21;

children[1] = ExternProtoDeclare15;

ExternProtoDeclare ExternProtoDeclare22 = createNode("ExternProtoDeclare");
ExternProtoDeclare22.name = "World";
ExternProtoDeclare22.url = new MFString(new java.lang.String[", ","http://vr.create3000.tv/vrml/protos1.1/World/World_proto.x3dWorld_proto.x3d"]);
field field23 = createNode("field");
field23.name = "enabled";
field23.accessType = "inputOutput";
field23.type = "SFBool";
ExternProtoDeclare22.field = new MFNode();

ExternProtoDeclare22.field[0] = field23;

field field24 = createNode("field");
field24.name = "startTime";
field24.accessType = "inputOutput";
field24.type = "SFTime";
ExternProtoDeclare22.field[1] = field24;

field field25 = createNode("field");
field25.name = "stopTime";
field25.accessType = "inputOutput";
field25.type = "SFTime";
ExternProtoDeclare22.field[2] = field25;

field field26 = createNode("field");
field26.name = "isActive";
field26.accessType = "outputOnly";
field26.type = "SFBool";
ExternProtoDeclare22.field[3] = field26;

field field27 = createNode("field");
field27.name = "enterTime";
field27.accessType = "outputOnly";
field27.type = "SFTime";
ExternProtoDeclare22.field[4] = field27;

field field28 = createNode("field");
field28.name = "exitTime";
field28.accessType = "outputOnly";
field28.type = "SFTime";
ExternProtoDeclare22.field[5] = field28;

field field29 = createNode("field");
field29.name = "scene";
field29.accessType = "inputOutput";
field29.type = "MFNode";
ExternProtoDeclare22.field[6] = field29;

field field30 = createNode("field");
field30.name = "children";
field30.accessType = "inputOutput";
field30.type = "MFNode";
ExternProtoDeclare22.field[7] = field30;

children[2] = ExternProtoDeclare22;

WorldInfo WorldInfo31 = createNode("WorldInfo");
WorldInfo31.info = new MFString(new java.lang.String[", ","Created in TitaniaPackaged by CosmoPackage"]);
children[3] = WorldInfo31;

Transform Transform32 = createNode("Transform");
Transform32.DEF = "images";
Transform Transform33 = createNode("Transform");
Transform33.DEF = "imageSwitch";
Switch Switch34 = createNode("Switch");
Switch34.DEF = "_1";
Switch34.whichChoice = 0;
Transform Transform35 = createNode("Transform");
Transform35.DEF = "b1";
Transform Transform36 = createNode("Transform");
Transform36.DEF = "busy-ape";
Transform36.scale = new SFVec3f(new float[12.57,8.426,4.32121]);
Shape Shape37 = createNode("Shape");
Appearance Appearance38 = createNode("Appearance");
ImageTexture ImageTexture39 = createNode("ImageTexture");
ImageTexture39.DEF = "_2";
ImageTexture39.url = new MFString(new java.lang.String["fuck2000-512.jpg"]);
Appearance38.texture = ImageTexture39;

Shape37.appearance = Appearance38;

IndexedFaceSet IndexedFaceSet40 = createNode("IndexedFaceSet");
IndexedFaceSet40.texCoordIndex = new MFInt32(new int[0,1,2,3,-1]);
IndexedFaceSet40.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate41 = createNode("TextureCoordinate");
TextureCoordinate41.point = new MFVec2f(new float[0.127981,0.642594,0.495544,0.642594,0.495544,0.943376,0.127981,0.943376]);
IndexedFaceSet40.texCoord = TextureCoordinate41;

Coordinate Coordinate42 = createNode("Coordinate");
Coordinate42.point = new MFVec3f(new float[-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0]);
IndexedFaceSet40.coord = Coordinate42;

Shape37.geometry = IndexedFaceSet40;

Transform36.child = new undefined();

Transform36.child[0] = Shape37;

Transform35.children = new MFNode();

Transform35.children[0] = Transform36;

Switch34.children = new MFNode();

Switch34.children[0] = Transform35;

Transform Transform43 = createNode("Transform");
Transform43.DEF = "b2";
Transform Transform44 = createNode("Transform");
Transform44.scale = new SFVec3f(new float[12.57,8.426,4.32121]);
Shape Shape45 = createNode("Shape");
Appearance Appearance46 = createNode("Appearance");
ImageTexture ImageTexture47 = createNode("ImageTexture");
ImageTexture47.USE = "_2";
Appearance46.texture = ImageTexture47;

Shape45.appearance = Appearance46;

IndexedFaceSet IndexedFaceSet48 = createNode("IndexedFaceSet");
IndexedFaceSet48.texCoordIndex = new MFInt32(new int[0,1,2,3,-1]);
IndexedFaceSet48.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate49 = createNode("TextureCoordinate");
TextureCoordinate49.point = new MFVec2f(new float[0.165226,0.179163,0.816381,0.179163,0.816381,0.627073,0.165226,0.627073]);
IndexedFaceSet48.texCoord = TextureCoordinate49;

Coordinate Coordinate50 = createNode("Coordinate");
Coordinate50.point = new MFVec3f(new float[-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0]);
IndexedFaceSet48.coord = Coordinate50;

Shape45.geometry = IndexedFaceSet48;

Transform44.child = new undefined();

Transform44.child[0] = Shape45;

Transform43.children = new MFNode();

Transform43.children[0] = Transform44;

Switch34.children[1] = Transform43;

Transform Transform51 = createNode("Transform");
Transform51.DEF = "b3";
Transform Transform52 = createNode("Transform");
Transform52.scale = new SFVec3f(new float[12.57,8.426,4.32121]);
Shape Shape53 = createNode("Shape");
Appearance Appearance54 = createNode("Appearance");
ImageTexture ImageTexture55 = createNode("ImageTexture");
ImageTexture55.USE = "_2";
Appearance54.texture = ImageTexture55;

Shape53.appearance = Appearance54;

IndexedFaceSet IndexedFaceSet56 = createNode("IndexedFaceSet");
IndexedFaceSet56.texCoordIndex = new MFInt32(new int[0,1,2,3,-1]);
IndexedFaceSet56.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate57 = createNode("TextureCoordinate");
TextureCoordinate57.point = new MFVec2f(new float[0.50878,0.710921,0.697553,0.710921,0.697553,0.955188,0.50878,0.955188]);
IndexedFaceSet56.texCoord = TextureCoordinate57;

Coordinate Coordinate58 = createNode("Coordinate");
Coordinate58.point = new MFVec3f(new float[-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0]);
IndexedFaceSet56.coord = Coordinate58;

Shape53.geometry = IndexedFaceSet56;

Transform52.child = new undefined();

Transform52.child[0] = Shape53;

Transform51.children = new MFNode();

Transform51.children[0] = Transform52;

Switch34.children[2] = Transform51;

Transform Transform59 = createNode("Transform");
Transform59.DEF = "b4";
Transform59.translation = new SFVec3f(new float[0.00122404,0.021184,0]);
Transform Transform60 = createNode("Transform");
Transform60.scale = new SFVec3f(new float[12.57,8.426,4.32121]);
Shape Shape61 = createNode("Shape");
Appearance Appearance62 = createNode("Appearance");
ImageTexture ImageTexture63 = createNode("ImageTexture");
ImageTexture63.USE = "_2";
Appearance62.texture = ImageTexture63;

Shape61.appearance = Appearance62;

IndexedFaceSet IndexedFaceSet64 = createNode("IndexedFaceSet");
IndexedFaceSet64.texCoordIndex = new MFInt32(new int[0,1,2,3,-1]);
IndexedFaceSet64.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate65 = createNode("TextureCoordinate");
TextureCoordinate65.point = new MFVec2f(new float[0.313272,0.859763,0.632335,0.859763,0.632335,0.999829,0.313272,0.999829]);
IndexedFaceSet64.texCoord = TextureCoordinate65;

Coordinate Coordinate66 = createNode("Coordinate");
Coordinate66.point = new MFVec3f(new float[-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0]);
IndexedFaceSet64.coord = Coordinate66;

Shape61.geometry = IndexedFaceSet64;

Transform60.child = new undefined();

Transform60.child[0] = Shape61;

Transform59.children = new MFNode();

Transform59.children[0] = Transform60;

Switch34.children[3] = Transform59;

Transform Transform67 = createNode("Transform");
Transform67.DEF = "b5";
Transform Transform68 = createNode("Transform");
Transform68.scale = new SFVec3f(new float[12.57,8.426,4.32121]);
Shape Shape69 = createNode("Shape");
Appearance Appearance70 = createNode("Appearance");
ImageTexture ImageTexture71 = createNode("ImageTexture");
ImageTexture71.USE = "_2";
Appearance70.texture = ImageTexture71;

Shape69.appearance = Appearance70;

IndexedFaceSet IndexedFaceSet72 = createNode("IndexedFaceSet");
IndexedFaceSet72.texCoordIndex = new MFInt32(new int[0,1,2,3,-1]);
IndexedFaceSet72.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate73 = createNode("TextureCoordinate");
TextureCoordinate73.point = new MFVec2f(new float[0.0855851,0.20142,0.869854,0.199958,0.863913,0.932262,0.0796437,0.933725]);
IndexedFaceSet72.texCoord = TextureCoordinate73;

Coordinate Coordinate74 = createNode("Coordinate");
Coordinate74.point = new MFVec3f(new float[-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0]);
IndexedFaceSet72.coord = Coordinate74;

Shape69.geometry = IndexedFaceSet72;

Transform68.child = new undefined();

Transform68.child[0] = Shape69;

Transform67.children = new MFNode();

Transform67.children[0] = Transform68;

Switch34.children[4] = Transform67;

Transform Transform75 = createNode("Transform");
Transform75.DEF = "b6";
Transform75.translation = new SFVec3f(new float[-0.0329717,0.00328829,-0.00000150874]);
Transform Transform76 = createNode("Transform");
Transform76.scale = new SFVec3f(new float[12.57,8.426,4.32121]);
Shape Shape77 = createNode("Shape");
Appearance Appearance78 = createNode("Appearance");
ImageTexture ImageTexture79 = createNode("ImageTexture");
ImageTexture79.USE = "_2";
Appearance78.texture = ImageTexture79;

Shape77.appearance = Appearance78;

IndexedFaceSet IndexedFaceSet80 = createNode("IndexedFaceSet");
IndexedFaceSet80.texCoordIndex = new MFInt32(new int[0,1,2,3,-1]);
IndexedFaceSet80.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate81 = createNode("TextureCoordinate");
TextureCoordinate81.point = new MFVec2f(new float[0.0234936,0.00361292,0.386726,0.00361292,0.386726,0.19957,0.0234936,0.19957]);
IndexedFaceSet80.texCoord = TextureCoordinate81;

Coordinate Coordinate82 = createNode("Coordinate");
Coordinate82.point = new MFVec3f(new float[-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0]);
IndexedFaceSet80.coord = Coordinate82;

Shape77.geometry = IndexedFaceSet80;

Transform76.child = new undefined();

Transform76.child[0] = Shape77;

Transform75.children = new MFNode();

Transform75.children[0] = Transform76;

Switch34.children[5] = Transform75;

Transform Transform83 = createNode("Transform");
Transform83.DEF = "b7";
Transform Transform84 = createNode("Transform");
Transform84.scale = new SFVec3f(new float[12.57,8.426,4.32121]);
Shape Shape85 = createNode("Shape");
Appearance Appearance86 = createNode("Appearance");
ImageTexture ImageTexture87 = createNode("ImageTexture");
ImageTexture87.USE = "_2";
Appearance86.texture = ImageTexture87;

Shape85.appearance = Appearance86;

IndexedFaceSet IndexedFaceSet88 = createNode("IndexedFaceSet");
IndexedFaceSet88.texCoordIndex = new MFInt32(new int[0,1,2,3,-1]);
IndexedFaceSet88.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate89 = createNode("TextureCoordinate");
TextureCoordinate89.point = new MFVec2f(new float[0.469851,0,0.949498,0.000914961,0.949498,0.202009,0.469851,0.201094]);
IndexedFaceSet88.texCoord = TextureCoordinate89;

Coordinate Coordinate90 = createNode("Coordinate");
Coordinate90.point = new MFVec3f(new float[-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0]);
IndexedFaceSet88.coord = Coordinate90;

Shape85.geometry = IndexedFaceSet88;

Transform84.child = new undefined();

Transform84.child[0] = Shape85;

Transform83.children = new MFNode();

Transform83.children[0] = Transform84;

Switch34.children[6] = Transform83;

Transform Transform91 = createNode("Transform");
Transform91.DEF = "b8";
Transform Transform92 = createNode("Transform");
Transform92.scale = new SFVec3f(new float[12.57,8.426,4.32121]);
Shape Shape93 = createNode("Shape");
Appearance Appearance94 = createNode("Appearance");
ImageTexture ImageTexture95 = createNode("ImageTexture");
ImageTexture95.USE = "_2";
Appearance94.texture = ImageTexture95;

Shape93.appearance = Appearance94;

IndexedFaceSet IndexedFaceSet96 = createNode("IndexedFaceSet");
IndexedFaceSet96.texCoordIndex = new MFInt32(new int[0,1,2,3,-1]);
IndexedFaceSet96.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate97 = createNode("TextureCoordinate");
TextureCoordinate97.point = new MFVec2f(new float[0.00164229,0.000905187,0.994963,0.0026198,0.997617,0.998598,0.0042969,0.996884]);
IndexedFaceSet96.texCoord = TextureCoordinate97;

Coordinate Coordinate98 = createNode("Coordinate");
Coordinate98.point = new MFVec3f(new float[-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0]);
IndexedFaceSet96.coord = Coordinate98;

Shape93.geometry = IndexedFaceSet96;

Transform92.child = new undefined();

Transform92.child[0] = Shape93;

Transform91.children = new MFNode();

Transform91.children[0] = Transform92;

Switch34.children[7] = Transform91;

Transform Transform99 = createNode("Transform");
Transform99.DEF = "b9";
Transform Transform100 = createNode("Transform");
Transform100.scale = new SFVec3f(new float[12.57,8.426,4.32121]);
Shape Shape101 = createNode("Shape");
Appearance Appearance102 = createNode("Appearance");
ImageTexture ImageTexture103 = createNode("ImageTexture");
ImageTexture103.USE = "_2";
Appearance102.texture = ImageTexture103;

Shape101.appearance = Appearance102;

IndexedFaceSet IndexedFaceSet104 = createNode("IndexedFaceSet");
IndexedFaceSet104.texCoordIndex = new MFInt32(new int[0,1,2,3,-1]);
IndexedFaceSet104.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate105 = createNode("TextureCoordinate");
TextureCoordinate105.point = new MFVec2f(new float[0.133117,0.661176,0.690556,0.661176,0.690556,0.918871,0.133117,0.918871]);
IndexedFaceSet104.texCoord = TextureCoordinate105;

Coordinate Coordinate106 = createNode("Coordinate");
Coordinate106.point = new MFVec3f(new float[-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0]);
IndexedFaceSet104.coord = Coordinate106;

Shape101.geometry = IndexedFaceSet104;

Transform100.child = new undefined();

Transform100.child[0] = Shape101;

Transform99.children = new MFNode();

Transform99.children[0] = Transform100;

Switch34.children[8] = Transform99;

Transform Transform107 = createNode("Transform");
Transform107.DEF = "b10";
Transform Transform108 = createNode("Transform");
Transform108.scale = new SFVec3f(new float[12.57,8.426,4.32121]);
Shape Shape109 = createNode("Shape");
Appearance Appearance110 = createNode("Appearance");
ImageTexture ImageTexture111 = createNode("ImageTexture");
ImageTexture111.USE = "_2";
Appearance110.texture = ImageTexture111;

Shape109.appearance = Appearance110;

IndexedFaceSet IndexedFaceSet112 = createNode("IndexedFaceSet");
IndexedFaceSet112.texCoordIndex = new MFInt32(new int[0,1,2,3,-1]);
IndexedFaceSet112.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate113 = createNode("TextureCoordinate");
TextureCoordinate113.point = new MFVec2f(new float[0.137234,0.656148,0.291324,0.656148,0.291324,0.878755,0.137234,0.878755]);
IndexedFaceSet112.texCoord = TextureCoordinate113;

Coordinate Coordinate114 = createNode("Coordinate");
Coordinate114.point = new MFVec3f(new float[-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0]);
IndexedFaceSet112.coord = Coordinate114;

Shape109.geometry = IndexedFaceSet112;

Transform108.child = new undefined();

Transform108.child[0] = Shape109;

Transform107.children = new MFNode();

Transform107.children[0] = Transform108;

Switch34.children[9] = Transform107;

Transform33.children = new MFNode();

Transform33.children[0] = Switch34;

Transform32.children = new MFNode();

Transform32.children[0] = Transform33;

children[4] = Transform32;

Transform Transform115 = createNode("Transform");
Transform115.DEF = "Random";
ProtoInstance ProtoInstance116 = createNode("ProtoInstance");
ProtoInstance116.name = "Random";
ProtoInstance116.DEF = "_3";
fieldValue fieldValue117 = createNode("fieldValue");
fieldValue117.name = "value";
fieldValue117.value = "9";
ProtoInstance116.fieldValue = new MFNode();

ProtoInstance116.fieldValue[0] = fieldValue117;

fieldValue fieldValue118 = createNode("fieldValue");
fieldValue118.name = "numValues";
fieldValue118.value = "9";
ProtoInstance116.fieldValue[1] = fieldValue118;

Transform115.children = new MFNode();

Transform115.children[0] = ProtoInstance116;

children[5] = Transform115;

Transform Transform119 = createNode("Transform");
Transform119.DEF = "Door";
Transform Transform120 = createNode("Transform");
Transform120.DEF = "Import";
ProtoInstance ProtoInstance121 = createNode("ProtoInstance");
ProtoInstance121.name = "Import";
ProtoInstance121.DEF = "_4";
fieldValue fieldValue122 = createNode("fieldValue");
fieldValue122.name = "url";
fieldValue122.value = "\"schachttor.x3d\"";
ProtoInstance121.fieldValue = new MFNode();

ProtoInstance121.fieldValue[0] = fieldValue122;

fieldValue fieldValue123 = createNode("fieldValue");
fieldValue123.name = "startTime";
fieldValue123.value = "1";
ProtoInstance121.fieldValue[1] = fieldValue123;

Transform120.children = new MFNode();

Transform120.children[0] = ProtoInstance121;

Transform119.children = new MFNode();

Transform119.children[0] = Transform120;

Transform Transform124 = createNode("Transform");
Transform124.DEF = "World";
ProtoInstance ProtoInstance125 = createNode("ProtoInstance");
ProtoInstance125.name = "World";
ProtoInstance125.DEF = "_5";
Transform124.children = new MFNode();

Transform124.children[0] = ProtoInstance125;

Transform119.children[1] = Transform124;

Transform Transform126 = createNode("Transform");
Transform126.DEF = "door";
Transform126.translation = new SFVec3f(new float[-0.376395,-0.0552998,0.113209]);
Transform119.children[2] = Transform126;

children[6] = Transform119;

ROUTE ROUTE127 = createNode("ROUTE");
ROUTE127.fromNode = "_3";
ROUTE127.fromField = "whichChoice_changed";
ROUTE127.toNode = "_1";
ROUTE127.toField = "set_whichChoice";
children[7] = ROUTE127;

ROUTE ROUTE128 = createNode("ROUTE");
ROUTE128.fromNode = "_5";
ROUTE128.fromField = "enterTime";
ROUTE128.toNode = "_3";
ROUTE128.toField = "set_startTime";
children[8] = ROUTE128;

ROUTE ROUTE129 = createNode("ROUTE");
ROUTE129.fromNode = "_4";
ROUTE129.fromField = "children_changed";
ROUTE129.toNode = "_5";
ROUTE129.toField = "set_scene";
children[9] = ROUTE129;

ROUTE ROUTE130 = createNode("ROUTE");
ROUTE130.fromNode = "_4";
ROUTE130.fromField = "children_changed";
ROUTE130.toNode = "door";
ROUTE130.toField = "set_children";
children[10] = ROUTE130;

}
