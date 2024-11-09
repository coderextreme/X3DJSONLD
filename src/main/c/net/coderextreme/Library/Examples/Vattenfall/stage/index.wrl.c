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
meta3.content = "Sat, 25 Apr 2015 12:38:25 GMT";
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
meta6.content = "Sat, 25 Apr 2015 12:38:25 GMT";
head1.meta[4] = meta6;

head = head1;

ExternProtoDeclare ExternProtoDeclare8 = createNode("ExternProtoDeclare");
ExternProtoDeclare8.name = "World";
ExternProtoDeclare8.url = new MFString(new java.lang.String["World_proto.x3d"]);
field field9 = createNode("field");
field9.name = "enabled";
field9.accessType = "inputOutput";
field9.type = "SFBool";
ExternProtoDeclare8.field = new MFNode();

ExternProtoDeclare8.field[0] = field9;

field field10 = createNode("field");
field10.name = "startTime";
field10.accessType = "inputOutput";
field10.type = "SFTime";
ExternProtoDeclare8.field[1] = field10;

field field11 = createNode("field");
field11.name = "stopTime";
field11.accessType = "inputOutput";
field11.type = "SFTime";
ExternProtoDeclare8.field[2] = field11;

field field12 = createNode("field");
field12.name = "isActive";
field12.accessType = "outputOnly";
field12.type = "SFBool";
ExternProtoDeclare8.field[3] = field12;

field field13 = createNode("field");
field13.name = "enterTime";
field13.accessType = "outputOnly";
field13.type = "SFTime";
ExternProtoDeclare8.field[4] = field13;

field field14 = createNode("field");
field14.name = "exitTime";
field14.accessType = "outputOnly";
field14.type = "SFTime";
ExternProtoDeclare8.field[5] = field14;

field field15 = createNode("field");
field15.name = "interface";
field15.accessType = "inputOutput";
field15.type = "MFNode";
ExternProtoDeclare8.field[6] = field15;

field field16 = createNode("field");
field16.name = "children";
field16.accessType = "inputOutput";
field16.type = "MFNode";
ExternProtoDeclare8.field[7] = field16;

children = new MFNode();

children[0] = ExternProtoDeclare8;

ExternProtoDeclare ExternProtoDeclare17 = createNode("ExternProtoDeclare");
ExternProtoDeclare17.name = "Bool";
ExternProtoDeclare17.url = new MFString(new java.lang.String["Bool_proto.x3d"]);
field field18 = createNode("field");
field18.name = "value";
field18.accessType = "inputOutput";
field18.type = "SFBool";
ExternProtoDeclare17.field = new MFNode();

ExternProtoDeclare17.field[0] = field18;

field field19 = createNode("field");
field19.name = "startTime";
field19.accessType = "inputOutput";
field19.type = "SFTime";
ExternProtoDeclare17.field[1] = field19;

field field20 = createNode("field");
field20.name = "bool";
field20.accessType = "outputOnly";
field20.type = "SFBool";
ExternProtoDeclare17.field[2] = field20;

children[1] = ExternProtoDeclare17;

ExternProtoDeclare ExternProtoDeclare21 = createNode("ExternProtoDeclare");
ExternProtoDeclare21.name = "Int";
ExternProtoDeclare21.url = new MFString(new java.lang.String["Int_proto.x3d"]);
field field22 = createNode("field");
field22.name = "value";
field22.accessType = "inputOutput";
field22.type = "SFInt32";
ExternProtoDeclare21.field = new MFNode();

ExternProtoDeclare21.field[0] = field22;

field field23 = createNode("field");
field23.name = "startTime";
field23.accessType = "inputOutput";
field23.type = "SFTime";
ExternProtoDeclare21.field[1] = field23;

field field24 = createNode("field");
field24.name = "int";
field24.accessType = "outputOnly";
field24.type = "SFInt32";
ExternProtoDeclare21.field[2] = field24;

children[2] = ExternProtoDeclare21;

ExternProtoDeclare ExternProtoDeclare25 = createNode("ExternProtoDeclare");
ExternProtoDeclare25.name = "Import";
ExternProtoDeclare25.url = new MFString(new java.lang.String["Import_proto.x3d"]);
field field26 = createNode("field");
field26.name = "url";
field26.accessType = "inputOutput";
field26.type = "MFString";
ExternProtoDeclare25.field = new MFNode();

ExternProtoDeclare25.field[0] = field26;

field field27 = createNode("field");
field27.name = "startTime";
field27.accessType = "inputOutput";
field27.type = "SFTime";
ExternProtoDeclare25.field[1] = field27;

field field28 = createNode("field");
field28.name = "isActive";
field28.accessType = "outputOnly";
field28.type = "SFBool";
ExternProtoDeclare25.field[2] = field28;

field field29 = createNode("field");
field29.name = "exitTime";
field29.accessType = "outputOnly";
field29.type = "SFTime";
ExternProtoDeclare25.field[3] = field29;

field field30 = createNode("field");
field30.name = "parameter";
field30.accessType = "inputOutput";
field30.type = "MFNode";
ExternProtoDeclare25.field[4] = field30;

field field31 = createNode("field");
field31.name = "children";
field31.accessType = "inputOutput";
field31.type = "MFNode";
ExternProtoDeclare25.field[5] = field31;

children[3] = ExternProtoDeclare25;

WorldInfo WorldInfo32 = createNode("WorldInfo");
WorldInfo32.info = new MFString(new java.lang.String[", ","Created in CosmoWorldsPackaged by CosmoPackage"]);
children[4] = WorldInfo32;

Viewpoint Viewpoint33 = createNode("Viewpoint");
Viewpoint33.DEF = "VP2";
Viewpoint33.description = "viewpoint1";
Viewpoint33.position = new SFVec3f(new float[0.0690002,1.5,43.753]);
children[5] = Viewpoint33;

NavigationInfo NavigationInfo34 = createNode("NavigationInfo");
NavigationInfo34.DEF = "_NoNameNavInfo2";
NavigationInfo34.type = new MFString(new java.lang.String["NONE"]);
NavigationInfo34.headlight = False;
children[6] = NavigationInfo34;

Transform Transform35 = createNode("Transform");
Transform35.DEF = "HUDWorld";
ProtoInstance ProtoInstance36 = createNode("ProtoInstance");
ProtoInstance36.name = "World";
fieldValue fieldValue37 = createNode("fieldValue");
fieldValue37.name = "interface";
ProtoInstance ProtoInstance38 = createNode("ProtoInstance");
ProtoInstance38.name = "Bool";
ProtoInstance38.DEF = "_1";
fieldValue37.children = new MFNode();

fieldValue37.children[0] = ProtoInstance38;

ProtoInstance ProtoInstance39 = createNode("ProtoInstance");
ProtoInstance39.name = "Bool";
ProtoInstance39.DEF = "_2";
fieldValue37.children[1] = ProtoInstance39;

ProtoInstance ProtoInstance40 = createNode("ProtoInstance");
ProtoInstance40.name = "Bool";
ProtoInstance40.DEF = "_3";
fieldValue37.children[2] = ProtoInstance40;

ProtoInstance ProtoInstance41 = createNode("ProtoInstance");
ProtoInstance41.name = "Bool";
ProtoInstance41.DEF = "_4";
fieldValue37.children[3] = ProtoInstance41;

ProtoInstance ProtoInstance42 = createNode("ProtoInstance");
ProtoInstance42.name = "Bool";
ProtoInstance42.DEF = "_5";
fieldValue37.children[4] = ProtoInstance42;

ProtoInstance ProtoInstance43 = createNode("ProtoInstance");
ProtoInstance43.name = "Bool";
ProtoInstance43.DEF = "_6";
fieldValue37.children[5] = ProtoInstance43;

ProtoInstance ProtoInstance44 = createNode("ProtoInstance");
ProtoInstance44.name = "Bool";
ProtoInstance44.DEF = "_7";
fieldValue37.children[6] = ProtoInstance44;

ProtoInstance ProtoInstance45 = createNode("ProtoInstance");
ProtoInstance45.name = "Int";
ProtoInstance45.DEF = "_8";
fieldValue37.children[7] = ProtoInstance45;

ProtoInstance36.fieldValue = new MFNode();

ProtoInstance36.fieldValue[0] = fieldValue37;

fieldValue fieldValue46 = createNode("fieldValue");
fieldValue46.name = "children";
ProtoInstance ProtoInstance47 = createNode("ProtoInstance");
ProtoInstance47.name = "Import";
ProtoInstance47.DEF = "_9";
fieldValue fieldValue48 = createNode("fieldValue");
fieldValue48.name = "url";
fieldValue48.value = "\", \" \"hud.x3dfile:/net/usr/customer/mbm/projects/veag-presentation/vrml/medienfassade/hud/hud.x3d\"";
ProtoInstance47.fieldValue = new MFNode();

ProtoInstance47.fieldValue[0] = fieldValue48;

fieldValue46.children = new MFNode();

fieldValue46.children[0] = ProtoInstance47;

ProtoInstance36.fieldValue[1] = fieldValue46;

Transform35.children = new MFNode();

Transform35.children[0] = ProtoInstance36;

children[7] = Transform35;

Transform Transform49 = createNode("Transform");
Transform49.DEF = "SceneWorld";
ProtoInstance ProtoInstance50 = createNode("ProtoInstance");
ProtoInstance50.name = "World";
fieldValue fieldValue51 = createNode("fieldValue");
fieldValue51.name = "interface";
ProtoInstance ProtoInstance52 = createNode("ProtoInstance");
ProtoInstance52.name = "Bool";
ProtoInstance52.DEF = "_10";
fieldValue51.children = new MFNode();

fieldValue51.children[0] = ProtoInstance52;

ProtoInstance ProtoInstance53 = createNode("ProtoInstance");
ProtoInstance53.name = "Bool";
ProtoInstance53.DEF = "_11";
fieldValue51.children[1] = ProtoInstance53;

ProtoInstance ProtoInstance54 = createNode("ProtoInstance");
ProtoInstance54.name = "Bool";
ProtoInstance54.DEF = "_12";
fieldValue51.children[2] = ProtoInstance54;

ProtoInstance ProtoInstance55 = createNode("ProtoInstance");
ProtoInstance55.name = "Bool";
ProtoInstance55.DEF = "_13";
fieldValue51.children[3] = ProtoInstance55;

ProtoInstance ProtoInstance56 = createNode("ProtoInstance");
ProtoInstance56.name = "Bool";
ProtoInstance56.DEF = "_14";
fieldValue51.children[4] = ProtoInstance56;

ProtoInstance ProtoInstance57 = createNode("ProtoInstance");
ProtoInstance57.name = "Bool";
ProtoInstance57.DEF = "_15";
fieldValue51.children[5] = ProtoInstance57;

ProtoInstance ProtoInstance58 = createNode("ProtoInstance");
ProtoInstance58.name = "Bool";
ProtoInstance58.DEF = "_16";
fieldValue51.children[6] = ProtoInstance58;

ProtoInstance ProtoInstance59 = createNode("ProtoInstance");
ProtoInstance59.name = "Int";
ProtoInstance59.DEF = "_17";
fieldValue51.children[7] = ProtoInstance59;

ProtoInstance50.fieldValue = new MFNode();

ProtoInstance50.fieldValue[0] = fieldValue51;

fieldValue fieldValue60 = createNode("fieldValue");
fieldValue60.name = "children";
ProtoInstance ProtoInstance61 = createNode("ProtoInstance");
ProtoInstance61.name = "Import";
ProtoInstance61.DEF = "_18";
fieldValue fieldValue62 = createNode("fieldValue");
fieldValue62.name = "url";
fieldValue62.value = "\", \" \"scene.x3dfile:/net/usr/customer/mbm/projects/veag-presentation/vrml/medienfassade/scene.x3d\"";
ProtoInstance61.fieldValue = new MFNode();

ProtoInstance61.fieldValue[0] = fieldValue62;

fieldValue fieldValue63 = createNode("fieldValue");
fieldValue63.name = "startTime";
fieldValue63.value = "1";
ProtoInstance61.fieldValue[1] = fieldValue63;

fieldValue60.children = new MFNode();

fieldValue60.children[0] = ProtoInstance61;

ProtoInstance50.fieldValue[1] = fieldValue60;

Transform49.children = new MFNode();

Transform49.children[0] = ProtoInstance50;

children[8] = Transform49;

ROUTE ROUTE64 = createNode("ROUTE");
ROUTE64.fromNode = "_18";
ROUTE64.fromField = "exitTime";
ROUTE64.toNode = "_9";
ROUTE64.toField = "set_startTime";
children[9] = ROUTE64;

ROUTE ROUTE65 = createNode("ROUTE");
ROUTE65.fromNode = "_1";
ROUTE65.fromField = "value_changed";
ROUTE65.toNode = "_10";
ROUTE65.toField = "set_value";
children[10] = ROUTE65;

ROUTE ROUTE66 = createNode("ROUTE");
ROUTE66.fromNode = "_2";
ROUTE66.fromField = "value_changed";
ROUTE66.toNode = "_11";
ROUTE66.toField = "set_value";
children[11] = ROUTE66;

ROUTE ROUTE67 = createNode("ROUTE");
ROUTE67.fromNode = "_3";
ROUTE67.fromField = "value_changed";
ROUTE67.toNode = "_12";
ROUTE67.toField = "set_value";
children[12] = ROUTE67;

ROUTE ROUTE68 = createNode("ROUTE");
ROUTE68.fromNode = "_4";
ROUTE68.fromField = "value_changed";
ROUTE68.toNode = "_13";
ROUTE68.toField = "set_value";
children[13] = ROUTE68;

ROUTE ROUTE69 = createNode("ROUTE");
ROUTE69.fromNode = "_5";
ROUTE69.fromField = "value_changed";
ROUTE69.toNode = "_14";
ROUTE69.toField = "set_value";
children[14] = ROUTE69;

ROUTE ROUTE70 = createNode("ROUTE");
ROUTE70.fromNode = "_6";
ROUTE70.fromField = "value_changed";
ROUTE70.toNode = "_15";
ROUTE70.toField = "set_value";
children[15] = ROUTE70;

ROUTE ROUTE71 = createNode("ROUTE");
ROUTE71.fromNode = "_7";
ROUTE71.fromField = "value_changed";
ROUTE71.toNode = "_16";
ROUTE71.toField = "set_value";
children[16] = ROUTE71;

ROUTE ROUTE72 = createNode("ROUTE");
ROUTE72.fromNode = "_8";
ROUTE72.fromField = "value_changed";
ROUTE72.toNode = "_17";
ROUTE72.toField = "set_value";
children[17] = ROUTE72;

}
