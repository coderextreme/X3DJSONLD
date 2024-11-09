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
meta3.content = "Sat, 25 Apr 2015 12:38:24 GMT";
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
meta6.content = "Sat, 25 Apr 2015 12:38:24 GMT";
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

ExternProtoDeclare ExternProtoDeclare32 = createNode("ExternProtoDeclare");
ExternProtoDeclare32.name = "Scene";
ExternProtoDeclare32.url = new MFString(new java.lang.String["Scene_proto.x3d"]);
field field33 = createNode("field");
field33.name = "enabled";
field33.accessType = "inputOutput";
field33.type = "SFBool";
ExternProtoDeclare32.field = new MFNode();

ExternProtoDeclare32.field[0] = field33;

field field34 = createNode("field");
field34.name = "startTime";
field34.accessType = "inputOutput";
field34.type = "SFTime";
ExternProtoDeclare32.field[1] = field34;

field field35 = createNode("field");
field35.name = "stopTime";
field35.accessType = "inputOutput";
field35.type = "SFTime";
ExternProtoDeclare32.field[2] = field35;

field field36 = createNode("field");
field36.name = "isActive";
field36.accessType = "outputOnly";
field36.type = "SFBool";
ExternProtoDeclare32.field[3] = field36;

field field37 = createNode("field");
field37.name = "enterTime";
field37.accessType = "outputOnly";
field37.type = "SFTime";
ExternProtoDeclare32.field[4] = field37;

field field38 = createNode("field");
field38.name = "exitTime";
field38.accessType = "outputOnly";
field38.type = "SFTime";
ExternProtoDeclare32.field[5] = field38;

field field39 = createNode("field");
field39.name = "interface";
field39.accessType = "inputOutput";
field39.type = "MFNode";
ExternProtoDeclare32.field[6] = field39;

children[4] = ExternProtoDeclare32;

WorldInfo WorldInfo40 = createNode("WorldInfo");
WorldInfo40.info = new MFString(new java.lang.String[", ","Created in CosmoWorldsPackaged by CosmoPackage"]);
children[5] = WorldInfo40;

Transform Transform41 = createNode("Transform");
Transform41.DEF = "HUD_1";
Transform Transform42 = createNode("Transform");
Transform42.DEF = "ps_handle";
Transform42.scale = new SFVec3f(new float[1000.87,1000.87,1000.87]);
Switch Switch43 = createNode("Switch");
Switch43.whichChoice = 1;
Transform Transform44 = createNode("Transform");
Switch43.children = new MFNode();

Switch43.children[0] = Transform44;

Inline Inline45 = createNode("Inline");
Inline45.url = new MFString(new java.lang.String["cube.x3d"]);
Inline45.bboxSize = new SFVec3f(new float[1,1,1]);
Switch43.children[1] = Inline45;

Transform42.children = new MFNode();

Transform42.children[0] = Switch43;

Transform41.children = new MFNode();

Transform41.children[0] = Transform42;

Transform Transform46 = createNode("Transform");
Transform46.DEF = "ProximitySensor";
ProximitySensor ProximitySensor47 = createNode("ProximitySensor");
ProximitySensor47.DEF = "_1";
ProximitySensor47.size = new SFVec3f(new float[1000.87,1000.87,1000.87]);
Transform46.children = new MFNode();

Transform46.children[0] = ProximitySensor47;

Transform41.children[1] = Transform46;

Transform Transform48 = createNode("Transform");
Transform48.DEF = "HUD";
Collision Collision49 = createNode("Collision");
Collision49.enabled = False;
Transform Transform50 = createNode("Transform");
Transform50.DEF = "HUDObj";
Viewpoint Viewpoint51 = createNode("Viewpoint");
Viewpoint51.DEF = "HUDVP1";
Viewpoint51.position = new SFVec3f(new float[0,0,0]);
Transform50.children = new MFNode();

Transform50.children[0] = Viewpoint51;

Transform Transform52 = createNode("Transform");
Transform52.DEF = "World";
ProtoInstance ProtoInstance53 = createNode("ProtoInstance");
ProtoInstance53.name = "World";
fieldValue fieldValue54 = createNode("fieldValue");
fieldValue54.name = "interface";
ProtoInstance ProtoInstance55 = createNode("ProtoInstance");
ProtoInstance55.name = "Bool";
ProtoInstance55.DEF = "_2";
fieldValue54.children = new MFNode();

fieldValue54.children[0] = ProtoInstance55;

ProtoInstance ProtoInstance56 = createNode("ProtoInstance");
ProtoInstance56.name = "Bool";
ProtoInstance56.DEF = "_3";
fieldValue54.children[1] = ProtoInstance56;

ProtoInstance ProtoInstance57 = createNode("ProtoInstance");
ProtoInstance57.name = "Bool";
ProtoInstance57.DEF = "_4";
fieldValue54.children[2] = ProtoInstance57;

ProtoInstance ProtoInstance58 = createNode("ProtoInstance");
ProtoInstance58.name = "Bool";
ProtoInstance58.DEF = "_5";
fieldValue54.children[3] = ProtoInstance58;

ProtoInstance ProtoInstance59 = createNode("ProtoInstance");
ProtoInstance59.name = "Bool";
ProtoInstance59.DEF = "_6";
fieldValue54.children[4] = ProtoInstance59;

ProtoInstance ProtoInstance60 = createNode("ProtoInstance");
ProtoInstance60.name = "Bool";
ProtoInstance60.DEF = "_7";
fieldValue54.children[5] = ProtoInstance60;

ProtoInstance ProtoInstance61 = createNode("ProtoInstance");
ProtoInstance61.name = "Bool";
ProtoInstance61.DEF = "_8";
fieldValue54.children[6] = ProtoInstance61;

ProtoInstance ProtoInstance62 = createNode("ProtoInstance");
ProtoInstance62.name = "Int";
ProtoInstance62.DEF = "_9";
fieldValue54.children[7] = ProtoInstance62;

ProtoInstance53.fieldValue = new MFNode();

ProtoInstance53.fieldValue[0] = fieldValue54;

fieldValue fieldValue63 = createNode("fieldValue");
fieldValue63.name = "children";
ProtoInstance ProtoInstance64 = createNode("ProtoInstance");
ProtoInstance64.name = "Import";
ProtoInstance64.DEF = "_10";
fieldValue fieldValue65 = createNode("fieldValue");
fieldValue65.name = "url";
fieldValue65.value = "\", \" \"buttons.x3dfile:/net/usr/customer/mbm/projects/veag-presentation/vrml/medienfassade/hud/buttons.x3d\"";
ProtoInstance64.fieldValue = new MFNode();

ProtoInstance64.fieldValue[0] = fieldValue65;

fieldValue fieldValue66 = createNode("fieldValue");
fieldValue66.name = "startTime";
fieldValue66.value = "1";
ProtoInstance64.fieldValue[1] = fieldValue66;

fieldValue63.children = new MFNode();

fieldValue63.children[0] = ProtoInstance64;

ProtoInstance53.fieldValue[1] = fieldValue63;

Transform52.children = new MFNode();

Transform52.children[0] = ProtoInstance53;

Transform50.children[1] = Transform52;

Collision49.proxy = Transform50;

Transform48.children = new MFNode();

Transform48.children[0] = Collision49;

Transform41.children[2] = Transform48;

children[6] = Transform41;

Transform Transform67 = createNode("Transform");
Transform67.DEF = "Scene";
ProtoInstance ProtoInstance68 = createNode("ProtoInstance");
ProtoInstance68.name = "Scene";
fieldValue fieldValue69 = createNode("fieldValue");
fieldValue69.name = "interface";
ProtoInstance ProtoInstance70 = createNode("ProtoInstance");
ProtoInstance70.name = "Bool";
ProtoInstance70.DEF = "_11";
fieldValue69.children = new MFNode();

fieldValue69.children[0] = ProtoInstance70;

ProtoInstance ProtoInstance71 = createNode("ProtoInstance");
ProtoInstance71.name = "Bool";
ProtoInstance71.DEF = "_12";
fieldValue69.children[1] = ProtoInstance71;

ProtoInstance ProtoInstance72 = createNode("ProtoInstance");
ProtoInstance72.name = "Bool";
ProtoInstance72.DEF = "_13";
fieldValue69.children[2] = ProtoInstance72;

ProtoInstance ProtoInstance73 = createNode("ProtoInstance");
ProtoInstance73.name = "Bool";
ProtoInstance73.DEF = "_14";
fieldValue69.children[3] = ProtoInstance73;

ProtoInstance ProtoInstance74 = createNode("ProtoInstance");
ProtoInstance74.name = "Bool";
ProtoInstance74.DEF = "_15";
fieldValue69.children[4] = ProtoInstance74;

ProtoInstance ProtoInstance75 = createNode("ProtoInstance");
ProtoInstance75.name = "Bool";
ProtoInstance75.DEF = "_16";
fieldValue69.children[5] = ProtoInstance75;

ProtoInstance ProtoInstance76 = createNode("ProtoInstance");
ProtoInstance76.name = "Bool";
ProtoInstance76.DEF = "_17";
fieldValue69.children[6] = ProtoInstance76;

ProtoInstance ProtoInstance77 = createNode("ProtoInstance");
ProtoInstance77.name = "Int";
ProtoInstance77.DEF = "_18";
fieldValue69.children[7] = ProtoInstance77;

ProtoInstance68.fieldValue = new MFNode();

ProtoInstance68.fieldValue[0] = fieldValue69;

Transform67.children = new MFNode();

Transform67.children[0] = ProtoInstance68;

children[7] = Transform67;

ROUTE ROUTE78 = createNode("ROUTE");
ROUTE78.fromNode = "ps_handle";
ROUTE78.fromField = "translation_changed";
ROUTE78.toNode = "_1";
ROUTE78.toField = "set_center";
children[8] = ROUTE78;

ROUTE ROUTE79 = createNode("ROUTE");
ROUTE79.fromNode = "ps_handle";
ROUTE79.fromField = "scale_changed";
ROUTE79.toNode = "_1";
ROUTE79.toField = "set_size";
children[9] = ROUTE79;

ROUTE ROUTE80 = createNode("ROUTE");
ROUTE80.fromNode = "_1";
ROUTE80.fromField = "position_changed";
ROUTE80.toNode = "HUDObj";
ROUTE80.toField = "set_translation";
children[10] = ROUTE80;

ROUTE ROUTE81 = createNode("ROUTE");
ROUTE81.fromNode = "_1";
ROUTE81.fromField = "orientation_changed";
ROUTE81.toNode = "HUDObj";
ROUTE81.toField = "set_rotation";
children[11] = ROUTE81;

ROUTE ROUTE82 = createNode("ROUTE");
ROUTE82.fromNode = "_2";
ROUTE82.fromField = "value_changed";
ROUTE82.toNode = "_11";
ROUTE82.toField = "set_value";
children[12] = ROUTE82;

ROUTE ROUTE83 = createNode("ROUTE");
ROUTE83.fromNode = "_3";
ROUTE83.fromField = "value_changed";
ROUTE83.toNode = "_12";
ROUTE83.toField = "set_value";
children[13] = ROUTE83;

ROUTE ROUTE84 = createNode("ROUTE");
ROUTE84.fromNode = "_4";
ROUTE84.fromField = "value_changed";
ROUTE84.toNode = "_13";
ROUTE84.toField = "set_value";
children[14] = ROUTE84;

ROUTE ROUTE85 = createNode("ROUTE");
ROUTE85.fromNode = "_5";
ROUTE85.fromField = "value_changed";
ROUTE85.toNode = "_14";
ROUTE85.toField = "set_value";
children[15] = ROUTE85;

ROUTE ROUTE86 = createNode("ROUTE");
ROUTE86.fromNode = "_6";
ROUTE86.fromField = "value_changed";
ROUTE86.toNode = "_15";
ROUTE86.toField = "set_value";
children[16] = ROUTE86;

ROUTE ROUTE87 = createNode("ROUTE");
ROUTE87.fromNode = "_7";
ROUTE87.fromField = "value_changed";
ROUTE87.toNode = "_16";
ROUTE87.toField = "set_value";
children[17] = ROUTE87;

ROUTE ROUTE88 = createNode("ROUTE");
ROUTE88.fromNode = "_8";
ROUTE88.fromField = "value_changed";
ROUTE88.toNode = "_17";
ROUTE88.toField = "set_value";
children[18] = ROUTE88;

ROUTE ROUTE89 = createNode("ROUTE");
ROUTE89.fromNode = "_9";
ROUTE89.fromField = "value_changed";
ROUTE89.toNode = "_18";
ROUTE89.toField = "set_value";
children[19] = ROUTE89;

}
