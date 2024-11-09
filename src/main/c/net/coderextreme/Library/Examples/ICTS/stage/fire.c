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
meta3.content = "Thu, 23 Apr 2015 06:07:04 GMT";
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
meta6.content = "Thu, 23 Apr 2015 06:07:04 GMT";
head1.meta[4] = meta6;

head = head1;

ExternProtoDeclare ExternProtoDeclare8 = createNode("ExternProtoDeclare");
ExternProtoDeclare8.name = "RandomSwitcher";
ExternProtoDeclare8.url = new MFString(new java.lang.String["RandomSwitcher_proto.x3d"]);
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
field11.name = "startTime";
field11.accessType = "inputOutput";
field11.type = "SFTime";
ExternProtoDeclare8.field[2] = field11;

field field12 = createNode("field");
field12.name = "whichChoice_changed";
field12.accessType = "outputOnly";
field12.type = "SFInt32";
ExternProtoDeclare8.field[3] = field12;

children = new MFNode();

children[0] = ExternProtoDeclare8;

WorldInfo WorldInfo13 = createNode("WorldInfo");
WorldInfo13.info = new MFString(new java.lang.String[", ","Created in TitaniaPackaged by CosmoPackage"]);
children[1] = WorldInfo13;

Transform Transform14 = createNode("Transform");
Transform14.bboxSize = new SFVec3f(new float[6.67,6.67,6.67]);
Billboard Billboard15 = createNode("Billboard");
Transform Transform16 = createNode("Transform");
TimeSensor TimeSensor17 = createNode("TimeSensor");
TimeSensor17.DEF = "_1";
TimeSensor17.cycleInterval = 0.1;
TimeSensor17.loop = True;
TimeSensor17.startTime = 968922869.685071;
Transform16.children = new MFNode();

Transform16.children[0] = TimeSensor17;

Transform Transform18 = createNode("Transform");
Transform18.DEF = "fireSwitch";
Switch Switch19 = createNode("Switch");
Switch19.DEF = "_2";
Switch19.whichChoice = 0;
Transform Transform20 = createNode("Transform");
Transform20.translation = new SFVec3f(new float[-0.136771,-0.0738408,-0.443054]);
Transform20.rotation = new SFRotation(new float[1,0,0,0.207709]);
Transform20.scale = new SFVec3f(new float[1.98355,1,1]);
Transform Transform21 = createNode("Transform");
Transform21.translation = new SFVec3f(new float[0.0362256,0.901673,1.68843]);
Transform21.rotation = new SFRotation(new float[1,0,0,1.65743]);
Transform21.scale = new SFVec3f(new float[0.722581,2.25045,0.999999]);
Shape Shape22 = createNode("Shape");
Appearance Appearance23 = createNode("Appearance");
ImageTexture ImageTexture24 = createNode("ImageTexture");
ImageTexture24.url = new MFString(new java.lang.String["blitz.png"]);
Appearance23.texture = ImageTexture24;

Shape22.appearance = Appearance23;

IndexedFaceSet IndexedFaceSet25 = createNode("IndexedFaceSet");
IndexedFaceSet25.solid = False;
IndexedFaceSet25.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate26 = createNode("TextureCoordinate");
TextureCoordinate26.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet25.texCoord = TextureCoordinate26;

Coordinate Coordinate27 = createNode("Coordinate");
Coordinate27.point = new MFVec3f(new float[-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0]);
IndexedFaceSet25.coord = Coordinate27;

Shape22.geometry = IndexedFaceSet25;

Transform21.child = new undefined();

Transform21.child[0] = Shape22;

Transform20.children = new MFNode();

Transform20.children[0] = Transform21;

Transform Transform28 = createNode("Transform");
Transform28.translation = new SFVec3f(new float[-0.108338,1.01425,0.758368]);
Transform28.scale = new SFVec3f(new float[0.504147,1,1]);
Shape Shape29 = createNode("Shape");
Appearance Appearance30 = createNode("Appearance");
ImageTexture ImageTexture31 = createNode("ImageTexture");
ImageTexture31.DEF = "_3";
ImageTexture31.url = new MFString(new java.lang.String["light7.png"]);
Appearance30.texture = ImageTexture31;

Shape29.appearance = Appearance30;

IndexedFaceSet IndexedFaceSet32 = createNode("IndexedFaceSet");
IndexedFaceSet32.solid = False;
IndexedFaceSet32.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate33 = createNode("TextureCoordinate");
TextureCoordinate33.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet32.texCoord = TextureCoordinate33;

Coordinate Coordinate34 = createNode("Coordinate");
Coordinate34.point = new MFVec3f(new float[-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0]);
IndexedFaceSet32.coord = Coordinate34;

Shape29.geometry = IndexedFaceSet32;

Transform28.child = new undefined();

Transform28.child[0] = Shape29;

Transform20.children[1] = Transform28;

Transform Transform35 = createNode("Transform");
Transform35.translation = new SFVec3f(new float[0.254031,1.01425,0.758368]);
Transform35.scale = new SFVec3f(new float[0.504147,1,1]);
Shape Shape36 = createNode("Shape");
Appearance Appearance37 = createNode("Appearance");
ImageTexture ImageTexture38 = createNode("ImageTexture");
ImageTexture38.USE = "_3";
Appearance37.texture = ImageTexture38;

Shape36.appearance = Appearance37;

IndexedFaceSet IndexedFaceSet39 = createNode("IndexedFaceSet");
IndexedFaceSet39.solid = False;
IndexedFaceSet39.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate40 = createNode("TextureCoordinate");
TextureCoordinate40.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet39.texCoord = TextureCoordinate40;

Coordinate Coordinate41 = createNode("Coordinate");
Coordinate41.point = new MFVec3f(new float[-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0]);
IndexedFaceSet39.coord = Coordinate41;

Shape36.geometry = IndexedFaceSet39;

Transform35.child = new undefined();

Transform35.child[0] = Shape36;

Transform20.children[2] = Transform35;

Switch19.children = new MFNode();

Switch19.children[0] = Transform20;

Transform Transform42 = createNode("Transform");
Switch19.children[1] = Transform42;

Transform Transform43 = createNode("Transform");
Switch19.children[2] = Transform43;

Transform Transform44 = createNode("Transform");
Switch19.children[3] = Transform44;

Transform18.children = new MFNode();

Transform18.children[0] = Switch19;

Transform16.children[1] = Transform18;

Transform Transform45 = createNode("Transform");
Transform45.DEF = "RandomSwitcher";
ProtoInstance ProtoInstance46 = createNode("ProtoInstance");
ProtoInstance46.name = "RandomSwitcher";
ProtoInstance46.DEF = "_4";
fieldValue fieldValue47 = createNode("fieldValue");
fieldValue47.name = "maxValue";
fieldValue47.value = "3";
ProtoInstance46.fieldValue = new MFNode();

ProtoInstance46.fieldValue[0] = fieldValue47;

Transform45.children = new MFNode();

Transform45.children[0] = ProtoInstance46;

Transform16.children[2] = Transform45;

Transform Transform48 = createNode("Transform");
VisibilitySensor VisibilitySensor49 = createNode("VisibilitySensor");
VisibilitySensor49.DEF = "_5";
VisibilitySensor49.size = new SFVec3f(new float[1,1,1]);
VisibilitySensor49.center = new SFVec3f(new float[0,1,0]);
Transform48.children = new MFNode();

Transform48.children[0] = VisibilitySensor49;

Transform16.children[3] = Transform48;

Billboard15.children = new MFNode();

Billboard15.children[0] = Transform16;

Transform14.children = new MFNode();

Transform14.children[0] = Billboard15;

children[2] = Transform14;

ROUTE ROUTE50 = createNode("ROUTE");
ROUTE50.fromNode = "_5";
ROUTE50.fromField = "isActive";
ROUTE50.toNode = "_1";
ROUTE50.toField = "set_enabled";
children[3] = ROUTE50;

ROUTE ROUTE51 = createNode("ROUTE");
ROUTE51.fromNode = "_5";
ROUTE51.fromField = "enterTime";
ROUTE51.toNode = "_1";
ROUTE51.toField = "set_startTime";
children[4] = ROUTE51;

ROUTE ROUTE52 = createNode("ROUTE");
ROUTE52.fromNode = "_4";
ROUTE52.fromField = "whichChoice_changed";
ROUTE52.toNode = "_2";
ROUTE52.toField = "set_whichChoice";
children[5] = ROUTE52;

ROUTE ROUTE53 = createNode("ROUTE");
ROUTE53.fromNode = "_1";
ROUTE53.fromField = "cycleTime";
ROUTE53.toNode = "_4";
ROUTE53.toField = "set_startTime";
children[6] = ROUTE53;

}
