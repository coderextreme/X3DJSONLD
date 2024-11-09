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

ProtoDeclare ProtoDeclare8 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Console" ><ProtoInterface><field name="string" accessType="inputOutput" type="MFString"></field>
</ProtoInterface>
<ProtoBody><ProtoDeclare name="Data"><ProtoInterface><field name="string" accessType="inputOutput" type="MFString"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>
<Script DEF="_1" directOutput="true"><field name="set_string" accessType="inputOnly" type="MFString"></field>
<field name="data" accessType="initializeOnly" type="SFNode"><ProtoInstance name="Data" DEF="_2"><IS><connect nodeField="string" protoField="string"></connect>
</IS>
</ProtoInstance>
</field>
<![CDATA[javascript:
function initialize()
{
	for (i = 0; i < data.string.length; i++) {
		print(data.string[i]);
	}
}

function set_string(value, time)
{
	for (i = 0; i < data.string.length; i++) {
		print(data.string[i]);
	}
}]]></Script>
<ROUTE fromNode="_2" fromField="string_changed" toNode="_1" toField="set_string"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "Console";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "string";
field10.accessType = "inputOutput";
field10.type = "MFString";
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody11 = createNode("ProtoBody");
ProtoDeclare ProtoDeclare12 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Data" ><ProtoInterface><field name="string" accessType="inputOutput" type="MFString"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare12.name = "Data";
ProtoInterface ProtoInterface13 = createNode("ProtoInterface");
field field14 = createNode("field");
field14.name = "string";
field14.accessType = "inputOutput";
field14.type = "MFString";
ProtoInterface13.field = new MFNode();

ProtoInterface13.field[0] = field14;

ProtoDeclare12.protoInterface = ProtoInterface13;

ProtoBody ProtoBody15 = createNode("ProtoBody");
Group Group16 = createNode("Group");
ProtoBody15.children = new MFNode();

ProtoBody15.children[0] = Group16;

ProtoDeclare12.protoBody = ProtoBody15;

ProtoBody11.children = new MFNode();

ProtoBody11.children[0] = ProtoDeclare12;

Script Script17 = createNode("Script");
Script17.DEF = "_1";
Script17.directOutput = True;
field field18 = createNode("field");
field18.name = "set_string";
field18.accessType = "inputOnly";
field18.type = "MFString";
Script17.field = new MFNode();

Script17.field[0] = field18;

field field19 = createNode("field");
field19.name = "data";
field19.accessType = "initializeOnly";
field19.type = "SFNode";
ProtoInstance ProtoInstance20 = createNode("ProtoInstance");
ProtoInstance20.name = "Data";
ProtoInstance20.DEF = "_2";
IS IS21 = createNode("IS");
connect connect22 = createNode("connect");
connect22.nodeField = "string";
connect22.protoField = "string";
IS21.connect = new MFNode();

IS21.connect[0] = connect22;

ProtoInstance20.iS = IS21;

field19.children = new MFNode();

field19.children[0] = ProtoInstance20;

Script17.field[1] = field19;


Script17.setSourceCode(`javascript:\n"+
"function initialize()\n"+
"{\n"+
"	for (i = 0; i < data.string.length; i++) {\n"+
"		print(data.string[i]);\n"+
"	}\n"+
"}\n"+
"\n"+
"function set_string(value, time)\n"+
"{\n"+
"	for (i = 0; i < data.string.length; i++) {\n"+
"		print(data.string[i]);\n"+
"	}\n"+
"}`)
ProtoBody11.children[1] = Script17;

ROUTE ROUTE23 = createNode("ROUTE");
ROUTE23.fromNode = "_2";
ROUTE23.fromField = "string_changed";
ROUTE23.toNode = "_1";
ROUTE23.toField = "set_string";
ProtoBody11.children[2] = ROUTE23;

ProtoDeclare8.protoBody = ProtoBody11;

children = new MFNode();

children[0] = ProtoDeclare8;

}
