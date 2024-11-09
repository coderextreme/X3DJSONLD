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
meta3.content = "Thu, 23 Apr 2015 06:07:14 GMT";
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
meta6.content = "Thu, 23 Apr 2015 06:07:14 GMT";
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
Transform13.DEF = "mov";
Transform Transform14 = createNode("Transform");
Transform Transform15 = createNode("Transform");
Transform15.DEF = "movie";
Switch Switch16 = createNode("Switch");
Switch16.DEF = "_1";
Switch16.whichChoice = 0;
Transform Transform17 = createNode("Transform");
Transform17.DEF = "off";
TouchSensor TouchSensor18 = createNode("TouchSensor");
TouchSensor18.DEF = "_2";
Transform17.children = new MFNode();

Transform17.children[0] = TouchSensor18;

Transform Transform19 = createNode("Transform");
Transform19.DEF = "still";
Transform19.translation = new SFVec3f(new float[-0.00202584,5.52632,0.0279587]);
Transform19.scale = new SFVec3f(new float[7.69785,7.69784,7.69785]);
Shape Shape20 = createNode("Shape");
Appearance Appearance21 = createNode("Appearance");
ImageTexture ImageTexture22 = createNode("ImageTexture");
ImageTexture22.url = new MFString(new java.lang.String["mib.jpg"]);
Appearance21.texture = ImageTexture22;

Shape20.appearance = Appearance21;

IndexedFaceSet IndexedFaceSet23 = createNode("IndexedFaceSet");
IndexedFaceSet23.coordIndex = new MFInt32(new int[0,1,2,3,-1,7,6,5,4,-1]);
TextureCoordinate TextureCoordinate24 = createNode("TextureCoordinate");
TextureCoordinate24.point = new MFVec2f(new float[0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1]);
IndexedFaceSet23.texCoord = TextureCoordinate24;

Coordinate Coordinate25 = createNode("Coordinate");
Coordinate25.point = new MFVec3f(new float[-0.6667,-0.5,0,0.6667,-0.5,0,0.6667,0.5,0,-0.6667,0.5,0,-0.6667,-0.944511,0,0.6667,-0.944511,0,0.6667,-1.94583,0,-0.6667,-1.94583,0]);
IndexedFaceSet23.coord = Coordinate25;

Shape20.geometry = IndexedFaceSet23;

Transform19.child = new undefined();

Transform19.child[0] = Shape20;

Transform17.children[1] = Transform19;

Switch16.children = new MFNode();

Switch16.children[0] = Transform17;

Transform Transform26 = createNode("Transform");
Transform26.DEF = "on";
TouchSensor TouchSensor27 = createNode("TouchSensor");
TouchSensor27.DEF = "_3";
Transform26.children = new MFNode();

Transform26.children[0] = TouchSensor27;

Transform Transform28 = createNode("Transform");
Transform28.DEF = "vs";
VisibilitySensor VisibilitySensor29 = createNode("VisibilitySensor");
VisibilitySensor29.DEF = "_4";
VisibilitySensor29.size = new SFVec3f(new float[12.866,21.3536,1.73049]);
VisibilitySensor29.center = new SFVec3f(new float[0.00397962,-0.604586,-2.38419e-7]);
Transform28.children = new MFNode();

Transform28.children[0] = VisibilitySensor29;

Transform26.children[1] = Transform28;

Transform Transform30 = createNode("Transform");
Transform30.translation = new SFVec3f(new float[-0.00202584,5.52632,0.0279587]);
Transform30.scale = new SFVec3f(new float[7.69785,7.69784,7.69785]);
Shape Shape31 = createNode("Shape");
Appearance Appearance32 = createNode("Appearance");
MovieTexture MovieTexture33 = createNode("MovieTexture");
MovieTexture33.DEF = "_5";
MovieTexture33.url = new MFString(new java.lang.String["mib.mov"]);
Appearance32.texture = MovieTexture33;

Shape31.appearance = Appearance32;

IndexedFaceSet IndexedFaceSet34 = createNode("IndexedFaceSet");
IndexedFaceSet34.coordIndex = new MFInt32(new int[0,1,2,3,-1,7,6,5,4,-1]);
TextureCoordinate TextureCoordinate35 = createNode("TextureCoordinate");
TextureCoordinate35.point = new MFVec2f(new float[0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1]);
IndexedFaceSet34.texCoord = TextureCoordinate35;

Coordinate Coordinate36 = createNode("Coordinate");
Coordinate36.point = new MFVec3f(new float[-0.6667,-0.5,0,0.6667,-0.5,0,0.6667,0.5,0,-0.6667,0.5,0,-0.6667,-0.944511,0,0.6667,-0.944511,0,0.6667,-1.94583,0,-0.6667,-1.94583,0]);
IndexedFaceSet34.coord = Coordinate36;

Shape31.geometry = IndexedFaceSet34;

Transform30.child = new undefined();

Transform30.child[0] = Shape31;

Transform26.children[2] = Transform30;

Switch16.children[1] = Transform26;

Transform15.children = new MFNode();

Transform15.children[0] = Switch16;

Transform14.children = new MFNode();

Transform14.children[0] = Transform15;

Transform Transform37 = createNode("Transform");
Transform37.DEF = "offInt";
ProtoInstance ProtoInstance38 = createNode("ProtoInstance");
ProtoInstance38.name = "Int";
ProtoInstance38.DEF = "_6";
Transform37.children = new MFNode();

Transform37.children[0] = ProtoInstance38;

Transform14.children[1] = Transform37;

Transform Transform39 = createNode("Transform");
Transform39.DEF = "onInt";
ProtoInstance ProtoInstance40 = createNode("ProtoInstance");
ProtoInstance40.name = "Int";
ProtoInstance40.DEF = "_7";
fieldValue fieldValue41 = createNode("fieldValue");
fieldValue41.name = "keyValue";
fieldValue41.value = "1";
ProtoInstance40.fieldValue = new MFNode();

ProtoInstance40.fieldValue[0] = fieldValue41;

Transform39.children = new MFNode();

Transform39.children[0] = ProtoInstance40;

Transform14.children[2] = Transform39;

Transform13.children = new MFNode();

Transform13.children[0] = Transform14;

children[2] = Transform13;

ROUTE ROUTE42 = createNode("ROUTE");
ROUTE42.fromNode = "_5";
ROUTE42.fromField = "isActive";
ROUTE42.toNode = "_5";
ROUTE42.toField = "set_loop";
children[3] = ROUTE42;

ROUTE ROUTE43 = createNode("ROUTE");
ROUTE43.fromNode = "_4";
ROUTE43.fromField = "enterTime";
ROUTE43.toNode = "_5";
ROUTE43.toField = "set_startTime";
children[4] = ROUTE43;

ROUTE ROUTE44 = createNode("ROUTE");
ROUTE44.fromNode = "_4";
ROUTE44.fromField = "exitTime";
ROUTE44.toNode = "_5";
ROUTE44.toField = "set_stopTime";
children[5] = ROUTE44;

ROUTE ROUTE45 = createNode("ROUTE");
ROUTE45.fromNode = "_6";
ROUTE45.fromField = "value_changed";
ROUTE45.toNode = "_1";
ROUTE45.toField = "set_whichChoice";
children[6] = ROUTE45;

ROUTE ROUTE46 = createNode("ROUTE");
ROUTE46.fromNode = "_7";
ROUTE46.fromField = "value_changed";
ROUTE46.toNode = "_1";
ROUTE46.toField = "set_whichChoice";
children[7] = ROUTE46;

ROUTE ROUTE47 = createNode("ROUTE");
ROUTE47.fromNode = "_3";
ROUTE47.fromField = "touchTime";
ROUTE47.toNode = "_6";
ROUTE47.toField = "startTime";
children[8] = ROUTE47;

ROUTE ROUTE48 = createNode("ROUTE");
ROUTE48.fromNode = "_4";
ROUTE48.fromField = "exitTime";
ROUTE48.toNode = "_6";
ROUTE48.toField = "startTime";
children[9] = ROUTE48;

ROUTE ROUTE49 = createNode("ROUTE");
ROUTE49.fromNode = "_2";
ROUTE49.fromField = "touchTime";
ROUTE49.toNode = "_7";
ROUTE49.toField = "startTime";
children[10] = ROUTE49;

}
