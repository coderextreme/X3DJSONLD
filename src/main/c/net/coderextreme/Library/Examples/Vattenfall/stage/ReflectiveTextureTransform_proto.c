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

ProtoDeclare ProtoDeclare8 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ReflectiveTextureTransform" ><ProtoInterface><field name="translation" accessType="inputOutput" type="SFVec3f"></field>
<field name="position" accessType="inputOutput" type="SFVec3f"></field>
<field name="distance" accessType="inputOutput" type="SFFloat" value="10"></field>
<field name="textureTransform" accessType="inputOutput" type="SFNode"></field>
</ProtoInterface>
<ProtoBody><ProtoDeclare name="Data"><ProtoInterface><field name="translation" accessType="inputOutput" type="SFVec3f"></field>
<field name="position" accessType="inputOutput" type="SFVec3f"></field>
<field name="distance" accessType="inputOutput" type="SFFloat" value="10"></field>
<field name="textureTransform" accessType="inputOutput" type="SFNode"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>
<Script DEF="_ReflectiveTextureTransform_1" directOutput="true"><field name="set_translation" accessType="inputOnly" type="SFVec3f"></field>
<field name="set_position" accessType="inputOnly" type="SFVec3f"></field>
<field name="set_distance" accessType="inputOnly" type="SFFloat"></field>
<field name="data" accessType="initializeOnly" type="SFNode"><ProtoInstance name="Data" DEF="Data_1"><IS><connect nodeField="translation" protoField="translation"></connect>
<connect nodeField="position" protoField="position"></connect>
<connect nodeField="distance" protoField="distance"></connect>
<connect nodeField="textureTransform" protoField="textureTransform"></connect>
</IS>
</ProtoInstance>
</field>
<![CDATA[vrmlscript:
function set_translation (value, time) {
}
function set_position (value, time) {
}
function set_distance (value, time) {
}
function initialize () {
}
function eventsProcessed () {
	distance = data.translation.subtract(data.position);
	v = data.distance / distance.length();
	
	s = data.distance / (distance.length()/2 + 1/2);
	tx = distance.x * s * s;
	ty = distance.y * s * s;

	data.textureTransform.scale = new SFVec2f(s, s);
	data.textureTransform.translation = new SFVec2f(tx, ty);
}]]></Script>
<ROUTE fromNode="Data_1" fromField="translation_changed" toNode="_ReflectiveTextureTransform_1" toField="set_translation"></ROUTE>
<ROUTE fromNode="Data_1" fromField="position_changed" toNode="_ReflectiveTextureTransform_1" toField="set_position"></ROUTE>
<ROUTE fromNode="Data_1" fromField="distance_changed" toNode="_ReflectiveTextureTransform_1" toField="set_distance"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "ReflectiveTextureTransform";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "translation";
field10.accessType = "inputOutput";
field10.type = "SFVec3f";
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

field field11 = createNode("field");
field11.name = "position";
field11.accessType = "inputOutput";
field11.type = "SFVec3f";
ProtoInterface9.field[1] = field11;

field field12 = createNode("field");
field12.name = "distance";
field12.accessType = "inputOutput";
field12.type = "SFFloat";
field12.value = "10";
ProtoInterface9.field[2] = field12;

field field13 = createNode("field");
field13.name = "textureTransform";
field13.accessType = "inputOutput";
field13.type = "SFNode";
ProtoInterface9.field[3] = field13;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody14 = createNode("ProtoBody");
ProtoDeclare ProtoDeclare15 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Data" ><ProtoInterface><field name="translation" accessType="inputOutput" type="SFVec3f"></field>
<field name="position" accessType="inputOutput" type="SFVec3f"></field>
<field name="distance" accessType="inputOutput" type="SFFloat" value="10"></field>
<field name="textureTransform" accessType="inputOutput" type="SFNode"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare15.name = "Data";
ProtoInterface ProtoInterface16 = createNode("ProtoInterface");
field field17 = createNode("field");
field17.name = "translation";
field17.accessType = "inputOutput";
field17.type = "SFVec3f";
ProtoInterface16.field = new MFNode();

ProtoInterface16.field[0] = field17;

field field18 = createNode("field");
field18.name = "position";
field18.accessType = "inputOutput";
field18.type = "SFVec3f";
ProtoInterface16.field[1] = field18;

field field19 = createNode("field");
field19.name = "distance";
field19.accessType = "inputOutput";
field19.type = "SFFloat";
field19.value = "10";
ProtoInterface16.field[2] = field19;

field field20 = createNode("field");
field20.name = "textureTransform";
field20.accessType = "inputOutput";
field20.type = "SFNode";
ProtoInterface16.field[3] = field20;

ProtoDeclare15.protoInterface = ProtoInterface16;

ProtoBody ProtoBody21 = createNode("ProtoBody");
Group Group22 = createNode("Group");
ProtoBody21.children = new MFNode();

ProtoBody21.children[0] = Group22;

ProtoDeclare15.protoBody = ProtoBody21;

ProtoBody14.children = new MFNode();

ProtoBody14.children[0] = ProtoDeclare15;

Script Script23 = createNode("Script");
Script23.DEF = "_ReflectiveTextureTransform_1";
Script23.directOutput = True;
field field24 = createNode("field");
field24.name = "set_translation";
field24.accessType = "inputOnly";
field24.type = "SFVec3f";
Script23.field = new MFNode();

Script23.field[0] = field24;

field field25 = createNode("field");
field25.name = "set_position";
field25.accessType = "inputOnly";
field25.type = "SFVec3f";
Script23.field[1] = field25;

field field26 = createNode("field");
field26.name = "set_distance";
field26.accessType = "inputOnly";
field26.type = "SFFloat";
Script23.field[2] = field26;

field field27 = createNode("field");
field27.name = "data";
field27.accessType = "initializeOnly";
field27.type = "SFNode";
ProtoInstance ProtoInstance28 = createNode("ProtoInstance");
ProtoInstance28.name = "Data";
ProtoInstance28.DEF = "Data_1";
IS IS29 = createNode("IS");
connect connect30 = createNode("connect");
connect30.nodeField = "translation";
connect30.protoField = "translation";
IS29.connect = new MFNode();

IS29.connect[0] = connect30;

connect connect31 = createNode("connect");
connect31.nodeField = "position";
connect31.protoField = "position";
IS29.connect[1] = connect31;

connect connect32 = createNode("connect");
connect32.nodeField = "distance";
connect32.protoField = "distance";
IS29.connect[2] = connect32;

connect connect33 = createNode("connect");
connect33.nodeField = "textureTransform";
connect33.protoField = "textureTransform";
IS29.connect[3] = connect33;

ProtoInstance28.iS = IS29;

field27.children = new MFNode();

field27.children[0] = ProtoInstance28;

Script23.field[3] = field27;


Script23.setSourceCode(`vrmlscript:\n"+
"function set_translation (value, time) {\n"+
"}\n"+
"function set_position (value, time) {\n"+
"}\n"+
"function set_distance (value, time) {\n"+
"}\n"+
"function initialize () {\n"+
"}\n"+
"function eventsProcessed () {\n"+
"	distance = data.translation.subtract(data.position);\n"+
"	v = data.distance / distance.length();\n"+
"	\n"+
"	s = data.distance / (distance.length()/2 + 1/2);\n"+
"	tx = distance.x * s * s;\n"+
"	ty = distance.y * s * s;\n"+
"\n"+
"	data.textureTransform.scale = new SFVec2f(s, s);\n"+
"	data.textureTransform.translation = new SFVec2f(tx, ty);\n"+
"}`)
ProtoBody14.children[1] = Script23;

ROUTE ROUTE34 = createNode("ROUTE");
ROUTE34.fromNode = "Data_1";
ROUTE34.fromField = "translation_changed";
ROUTE34.toNode = "_ReflectiveTextureTransform_1";
ROUTE34.toField = "set_translation";
ProtoBody14.children[2] = ROUTE34;

ROUTE ROUTE35 = createNode("ROUTE");
ROUTE35.fromNode = "Data_1";
ROUTE35.fromField = "position_changed";
ROUTE35.toNode = "_ReflectiveTextureTransform_1";
ROUTE35.toField = "set_position";
ProtoBody14.children[3] = ROUTE35;

ROUTE ROUTE36 = createNode("ROUTE");
ROUTE36.fromNode = "Data_1";
ROUTE36.fromField = "distance_changed";
ROUTE36.toNode = "_ReflectiveTextureTransform_1";
ROUTE36.toField = "set_distance";
ProtoBody14.children[4] = ROUTE36;

ProtoDeclare8.protoBody = ProtoBody14;

children = new MFNode();

children[0] = ProtoDeclare8;

}
