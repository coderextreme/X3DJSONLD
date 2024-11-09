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

meta meta7 = createNode("meta");
meta7.name = "title";
meta7.content = "Vattenfall";
head1.meta[5] = meta7;

head = head1;

ExternProtoDeclare ExternProtoDeclare9 = createNode("ExternProtoDeclare");
ExternProtoDeclare9.name = "World";
ExternProtoDeclare9.url = new MFString(new java.lang.String["World_proto.x3d"]);
field field10 = createNode("field");
field10.name = "enabled";
field10.accessType = "inputOutput";
field10.type = "SFBool";
ExternProtoDeclare9.field = new MFNode();

ExternProtoDeclare9.field[0] = field10;

field field11 = createNode("field");
field11.name = "startTime";
field11.accessType = "inputOutput";
field11.type = "SFTime";
ExternProtoDeclare9.field[1] = field11;

field field12 = createNode("field");
field12.name = "stopTime";
field12.accessType = "inputOutput";
field12.type = "SFTime";
ExternProtoDeclare9.field[2] = field12;

field field13 = createNode("field");
field13.name = "isActive";
field13.accessType = "outputOnly";
field13.type = "SFBool";
ExternProtoDeclare9.field[3] = field13;

field field14 = createNode("field");
field14.name = "enterTime";
field14.accessType = "outputOnly";
field14.type = "SFTime";
ExternProtoDeclare9.field[4] = field14;

field field15 = createNode("field");
field15.name = "exitTime";
field15.accessType = "outputOnly";
field15.type = "SFTime";
ExternProtoDeclare9.field[5] = field15;

field field16 = createNode("field");
field16.name = "interface";
field16.accessType = "inputOutput";
field16.type = "MFNode";
ExternProtoDeclare9.field[6] = field16;

field field17 = createNode("field");
field17.name = "children";
field17.accessType = "inputOutput";
field17.type = "MFNode";
ExternProtoDeclare9.field[7] = field17;

children = new MFNode();

children[0] = ExternProtoDeclare9;

ExternProtoDeclare ExternProtoDeclare18 = createNode("ExternProtoDeclare");
ExternProtoDeclare18.name = "Bool";
ExternProtoDeclare18.url = new MFString(new java.lang.String["Bool_proto.x3d"]);
field field19 = createNode("field");
field19.name = "value";
field19.accessType = "inputOutput";
field19.type = "SFBool";
ExternProtoDeclare18.field = new MFNode();

ExternProtoDeclare18.field[0] = field19;

field field20 = createNode("field");
field20.name = "startTime";
field20.accessType = "inputOutput";
field20.type = "SFTime";
ExternProtoDeclare18.field[1] = field20;

field field21 = createNode("field");
field21.name = "bool";
field21.accessType = "outputOnly";
field21.type = "SFBool";
ExternProtoDeclare18.field[2] = field21;

children[1] = ExternProtoDeclare18;

ExternProtoDeclare ExternProtoDeclare22 = createNode("ExternProtoDeclare");
ExternProtoDeclare22.name = "Int";
ExternProtoDeclare22.url = new MFString(new java.lang.String["Int_proto.x3d"]);
field field23 = createNode("field");
field23.name = "value";
field23.accessType = "inputOutput";
field23.type = "SFInt32";
ExternProtoDeclare22.field = new MFNode();

ExternProtoDeclare22.field[0] = field23;

field field24 = createNode("field");
field24.name = "startTime";
field24.accessType = "inputOutput";
field24.type = "SFTime";
ExternProtoDeclare22.field[1] = field24;

field field25 = createNode("field");
field25.name = "int";
field25.accessType = "outputOnly";
field25.type = "SFInt32";
ExternProtoDeclare22.field[2] = field25;

children[2] = ExternProtoDeclare22;

ExternProtoDeclare ExternProtoDeclare26 = createNode("ExternProtoDeclare");
ExternProtoDeclare26.name = "Import";
ExternProtoDeclare26.url = new MFString(new java.lang.String["Import_proto.x3d"]);
field field27 = createNode("field");
field27.name = "url";
field27.accessType = "inputOutput";
field27.type = "MFString";
ExternProtoDeclare26.field = new MFNode();

ExternProtoDeclare26.field[0] = field27;

field field28 = createNode("field");
field28.name = "startTime";
field28.accessType = "inputOutput";
field28.type = "SFTime";
ExternProtoDeclare26.field[1] = field28;

field field29 = createNode("field");
field29.name = "isActive";
field29.accessType = "outputOnly";
field29.type = "SFBool";
ExternProtoDeclare26.field[2] = field29;

field field30 = createNode("field");
field30.name = "exitTime";
field30.accessType = "outputOnly";
field30.type = "SFTime";
ExternProtoDeclare26.field[3] = field30;

field field31 = createNode("field");
field31.name = "parameter";
field31.accessType = "inputOutput";
field31.type = "MFNode";
ExternProtoDeclare26.field[4] = field31;

field field32 = createNode("field");
field32.name = "children";
field32.accessType = "inputOutput";
field32.type = "MFNode";
ExternProtoDeclare26.field[5] = field32;

children[3] = ExternProtoDeclare26;

WorldInfo WorldInfo33 = createNode("WorldInfo");
WorldInfo33.info = new MFString(new java.lang.String[", ","Created in TitaniaPackaged by CosmoPackage"]);
children[4] = WorldInfo33;

Viewpoint Viewpoint34 = createNode("Viewpoint");
Viewpoint34.DEF = "VP2";
Viewpoint34.description = "viewpoint1";
Viewpoint34.position = new SFVec3f(new float[0.0690002,1.5,43.753]);
children[5] = Viewpoint34;

NavigationInfo NavigationInfo35 = createNode("NavigationInfo");
NavigationInfo35.DEF = "_NoNameNavInfo2";
NavigationInfo35.type = new MFString(new java.lang.String["NONE"]);
NavigationInfo35.headlight = False;
NavigationInfo35.transitionType = new MFString(new java.lang.String["TELEPORT"]);
children[6] = NavigationInfo35;

Transform Transform36 = createNode("Transform");
Transform36.DEF = "HUDWorld";
ProtoInstance ProtoInstance37 = createNode("ProtoInstance");
ProtoInstance37.name = "World";
fieldValue fieldValue38 = createNode("fieldValue");
fieldValue38.name = "interface";
ProtoInstance ProtoInstance39 = createNode("ProtoInstance");
ProtoInstance39.name = "Bool";
ProtoInstance39.DEF = "_1";
fieldValue38.children = new MFNode();

fieldValue38.children[0] = ProtoInstance39;

ProtoInstance ProtoInstance40 = createNode("ProtoInstance");
ProtoInstance40.name = "Bool";
ProtoInstance40.DEF = "_2";
fieldValue38.children[1] = ProtoInstance40;

ProtoInstance ProtoInstance41 = createNode("ProtoInstance");
ProtoInstance41.name = "Bool";
ProtoInstance41.DEF = "_3";
fieldValue38.children[2] = ProtoInstance41;

ProtoInstance ProtoInstance42 = createNode("ProtoInstance");
ProtoInstance42.name = "Bool";
ProtoInstance42.DEF = "_4";
fieldValue38.children[3] = ProtoInstance42;

ProtoInstance ProtoInstance43 = createNode("ProtoInstance");
ProtoInstance43.name = "Bool";
ProtoInstance43.DEF = "_5";
fieldValue38.children[4] = ProtoInstance43;

ProtoInstance ProtoInstance44 = createNode("ProtoInstance");
ProtoInstance44.name = "Bool";
ProtoInstance44.DEF = "_6";
fieldValue38.children[5] = ProtoInstance44;

ProtoInstance ProtoInstance45 = createNode("ProtoInstance");
ProtoInstance45.name = "Bool";
ProtoInstance45.DEF = "_7";
fieldValue38.children[6] = ProtoInstance45;

ProtoInstance ProtoInstance46 = createNode("ProtoInstance");
ProtoInstance46.name = "Int";
ProtoInstance46.DEF = "_8";
fieldValue38.children[7] = ProtoInstance46;

ProtoInstance37.fieldValue = new MFNode();

ProtoInstance37.fieldValue[0] = fieldValue38;

fieldValue fieldValue47 = createNode("fieldValue");
fieldValue47.name = "children";
ProtoInstance ProtoInstance48 = createNode("ProtoInstance");
ProtoInstance48.name = "Import";
ProtoInstance48.DEF = "_9";
fieldValue fieldValue49 = createNode("fieldValue");
fieldValue49.name = "url";
fieldValue49.value = "\", \" \"hud.x3dfile:/net/usr/customer/mbm/projects/veag-presentation/vrml/medienfassade/hud/hud.x3d\"";
ProtoInstance48.fieldValue = new MFNode();

ProtoInstance48.fieldValue[0] = fieldValue49;

fieldValue47.children = new MFNode();

fieldValue47.children[0] = ProtoInstance48;

ProtoInstance37.fieldValue[1] = fieldValue47;

Transform36.children = new MFNode();

Transform36.children[0] = ProtoInstance37;

children[7] = Transform36;

Transform Transform50 = createNode("Transform");
Transform50.DEF = "SceneWorld";
ProtoInstance ProtoInstance51 = createNode("ProtoInstance");
ProtoInstance51.name = "World";
fieldValue fieldValue52 = createNode("fieldValue");
fieldValue52.name = "interface";
ProtoInstance ProtoInstance53 = createNode("ProtoInstance");
ProtoInstance53.name = "Bool";
ProtoInstance53.DEF = "_10";
fieldValue52.children = new MFNode();

fieldValue52.children[0] = ProtoInstance53;

ProtoInstance ProtoInstance54 = createNode("ProtoInstance");
ProtoInstance54.name = "Bool";
ProtoInstance54.DEF = "_11";
fieldValue52.children[1] = ProtoInstance54;

ProtoInstance ProtoInstance55 = createNode("ProtoInstance");
ProtoInstance55.name = "Bool";
ProtoInstance55.DEF = "_12";
fieldValue52.children[2] = ProtoInstance55;

ProtoInstance ProtoInstance56 = createNode("ProtoInstance");
ProtoInstance56.name = "Bool";
ProtoInstance56.DEF = "_13";
fieldValue52.children[3] = ProtoInstance56;

ProtoInstance ProtoInstance57 = createNode("ProtoInstance");
ProtoInstance57.name = "Bool";
ProtoInstance57.DEF = "_14";
fieldValue52.children[4] = ProtoInstance57;

ProtoInstance ProtoInstance58 = createNode("ProtoInstance");
ProtoInstance58.name = "Bool";
ProtoInstance58.DEF = "_15";
fieldValue52.children[5] = ProtoInstance58;

ProtoInstance ProtoInstance59 = createNode("ProtoInstance");
ProtoInstance59.name = "Bool";
ProtoInstance59.DEF = "_16";
fieldValue52.children[6] = ProtoInstance59;

ProtoInstance ProtoInstance60 = createNode("ProtoInstance");
ProtoInstance60.name = "Int";
ProtoInstance60.DEF = "_17";
fieldValue52.children[7] = ProtoInstance60;

ProtoInstance51.fieldValue = new MFNode();

ProtoInstance51.fieldValue[0] = fieldValue52;

fieldValue fieldValue61 = createNode("fieldValue");
fieldValue61.name = "children";
ProtoInstance ProtoInstance62 = createNode("ProtoInstance");
ProtoInstance62.name = "Import";
ProtoInstance62.DEF = "_18";
fieldValue fieldValue63 = createNode("fieldValue");
fieldValue63.name = "url";
fieldValue63.value = "\", \" \"scene.x3dfile:/net/usr/customer/mbm/projects/veag-presentation/vrml/medienfassade/scene.x3d\"";
ProtoInstance62.fieldValue = new MFNode();

ProtoInstance62.fieldValue[0] = fieldValue63;

fieldValue fieldValue64 = createNode("fieldValue");
fieldValue64.name = "startTime";
fieldValue64.value = "1";
ProtoInstance62.fieldValue[1] = fieldValue64;

fieldValue61.children = new MFNode();

fieldValue61.children[0] = ProtoInstance62;

ProtoInstance51.fieldValue[1] = fieldValue61;

Transform50.children = new MFNode();

Transform50.children[0] = ProtoInstance51;

children[8] = Transform50;

ROUTE ROUTE65 = createNode("ROUTE");
ROUTE65.fromNode = "_18";
ROUTE65.fromField = "exitTime";
ROUTE65.toNode = "_9";
ROUTE65.toField = "set_startTime";
children[9] = ROUTE65;

ROUTE ROUTE66 = createNode("ROUTE");
ROUTE66.fromNode = "_1";
ROUTE66.fromField = "value_changed";
ROUTE66.toNode = "_10";
ROUTE66.toField = "set_value";
children[10] = ROUTE66;

ROUTE ROUTE67 = createNode("ROUTE");
ROUTE67.fromNode = "_2";
ROUTE67.fromField = "value_changed";
ROUTE67.toNode = "_11";
ROUTE67.toField = "set_value";
children[11] = ROUTE67;

ROUTE ROUTE68 = createNode("ROUTE");
ROUTE68.fromNode = "_3";
ROUTE68.fromField = "value_changed";
ROUTE68.toNode = "_12";
ROUTE68.toField = "set_value";
children[12] = ROUTE68;

ROUTE ROUTE69 = createNode("ROUTE");
ROUTE69.fromNode = "_4";
ROUTE69.fromField = "value_changed";
ROUTE69.toNode = "_13";
ROUTE69.toField = "set_value";
children[13] = ROUTE69;

ROUTE ROUTE70 = createNode("ROUTE");
ROUTE70.fromNode = "_5";
ROUTE70.fromField = "value_changed";
ROUTE70.toNode = "_14";
ROUTE70.toField = "set_value";
children[14] = ROUTE70;

ROUTE ROUTE71 = createNode("ROUTE");
ROUTE71.fromNode = "_6";
ROUTE71.fromField = "value_changed";
ROUTE71.toNode = "_15";
ROUTE71.toField = "set_value";
children[15] = ROUTE71;

ROUTE ROUTE72 = createNode("ROUTE");
ROUTE72.fromNode = "_7";
ROUTE72.fromField = "value_changed";
ROUTE72.toNode = "_16";
ROUTE72.toField = "set_value";
children[16] = ROUTE72;

ROUTE ROUTE73 = createNode("ROUTE");
ROUTE73.fromNode = "_8";
ROUTE73.fromField = "value_changed";
ROUTE73.toNode = "_17";
ROUTE73.toField = "set_value";
children[17] = ROUTE73;

}
