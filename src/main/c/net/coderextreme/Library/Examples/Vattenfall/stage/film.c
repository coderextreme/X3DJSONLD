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
meta3.content = "Sat, 25 Apr 2015 12:38:21 GMT";
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
meta6.content = "Mon, 27 Apr 2015 08:52:11 GMT";
head1.meta[4] = meta6;

head = head1;

ExternProtoDeclare ExternProtoDeclare8 = createNode("ExternProtoDeclare");
ExternProtoDeclare8.name = "Scene";
ExternProtoDeclare8.url = new MFString(new java.lang.String["Scene_proto.x3d"]);
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

children = new MFNode();

children[0] = ExternProtoDeclare8;

ExternProtoDeclare ExternProtoDeclare16 = createNode("ExternProtoDeclare");
ExternProtoDeclare16.name = "Int";
ExternProtoDeclare16.url = new MFString(new java.lang.String["Int_proto.x3d"]);
field field17 = createNode("field");
field17.name = "value";
field17.accessType = "inputOutput";
field17.type = "SFInt32";
ExternProtoDeclare16.field = new MFNode();

ExternProtoDeclare16.field[0] = field17;

field field18 = createNode("field");
field18.name = "startTime";
field18.accessType = "inputOutput";
field18.type = "SFTime";
ExternProtoDeclare16.field[1] = field18;

field field19 = createNode("field");
field19.name = "int";
field19.accessType = "outputOnly";
field19.type = "SFInt32";
ExternProtoDeclare16.field[2] = field19;

children[1] = ExternProtoDeclare16;

WorldInfo WorldInfo20 = createNode("WorldInfo");
WorldInfo20.info = new MFString(new java.lang.String[", ","Created in TitaniaPackaged by CosmoPackage"]);
children[2] = WorldInfo20;

Switch Switch21 = createNode("Switch");
Switch21.DEF = "_1";
Switch21.whichChoice = 0;
Inline Inline22 = createNode("Inline");
Inline22.url = new MFString(new java.lang.String["film1.x3d"]);
Inline22.bboxSize = new SFVec3f(new float[35.944,19.1172,0.299421]);
Inline22.bboxCenter = new SFVec3f(new float[7.5798,9.99219,0.153977]);
Switch21.children = new MFNode();

Switch21.children[0] = Inline22;

Inline Inline23 = createNode("Inline");
Inline23.url = new MFString(new java.lang.String["film2.x3d"]);
Inline23.bboxSize = new SFVec3f(new float[35.944,19.1172,0.299421]);
Inline23.bboxCenter = new SFVec3f(new float[7.5798,9.99219,0.153977]);
Switch21.children[1] = Inline23;

Inline Inline24 = createNode("Inline");
Inline24.url = new MFString(new java.lang.String["film3.x3d"]);
Inline24.bboxSize = new SFVec3f(new float[35.944,19.1172,0.299421]);
Inline24.bboxCenter = new SFVec3f(new float[7.5798,9.99219,0.153977]);
Switch21.children[2] = Inline24;

Inline Inline25 = createNode("Inline");
Inline25.url = new MFString(new java.lang.String["film4.x3d"]);
Inline25.bboxSize = new SFVec3f(new float[35.944,19.1172,0.299421]);
Inline25.bboxCenter = new SFVec3f(new float[7.5798,9.99219,0.153977]);
Switch21.children[3] = Inline25;

Inline Inline26 = createNode("Inline");
Inline26.url = new MFString(new java.lang.String["film5.x3d"]);
Inline26.bboxSize = new SFVec3f(new float[35.944,19.1172,0.299421]);
Inline26.bboxCenter = new SFVec3f(new float[7.5798,9.99219,0.153977]);
Switch21.children[4] = Inline26;

Inline Inline27 = createNode("Inline");
Inline27.url = new MFString(new java.lang.String["film6.x3d"]);
Inline27.bboxSize = new SFVec3f(new float[35.944,19.1172,0.299421]);
Inline27.bboxCenter = new SFVec3f(new float[7.5798,9.99219,0.153977]);
Switch21.children[5] = Inline27;

children[3] = Switch21;

Transform Transform28 = createNode("Transform");
Transform28.DEF = "Scene";
ProtoInstance ProtoInstance29 = createNode("ProtoInstance");
ProtoInstance29.name = "Scene";
fieldValue fieldValue30 = createNode("fieldValue");
fieldValue30.name = "interface";
ProtoInstance ProtoInstance31 = createNode("ProtoInstance");
ProtoInstance31.name = "Int";
ProtoInstance31.DEF = "_2";
fieldValue30.children = new MFNode();

fieldValue30.children[0] = ProtoInstance31;

ProtoInstance29.fieldValue = new MFNode();

ProtoInstance29.fieldValue[0] = fieldValue30;

Transform28.children = new MFNode();

Transform28.children[0] = ProtoInstance29;

children[4] = Transform28;

ROUTE ROUTE32 = createNode("ROUTE");
ROUTE32.fromNode = "_2";
ROUTE32.fromField = "value_changed";
ROUTE32.toNode = "_1";
ROUTE32.toField = "set_whichChoice";
children[5] = ROUTE32;

}
