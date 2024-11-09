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
meta3.content = "Thu, 23 Apr 2015 06:07:12 GMT";
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
meta6.content = "Thu, 23 Apr 2015 06:07:12 GMT";
head1.meta[4] = meta6;

head = head1;

ProtoDeclare ProtoDeclare8 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="MediaCtrl" ><ProtoInterface><field name="reset" accessType="inputOutput" type="SFBool"></field>
<field name="startTime" accessType="inputOutput" type="SFTime"></field>
<field name="stopTime" accessType="inputOutput" type="SFTime"></field>
<field name="set_isActive" accessType="inputOnly" type="SFBool"></field>
<field name="source" accessType="initializeOnly" type="SFNode"><Transform DEF="_1"></Transform>
</field>
</ProtoInterface>
<ProtoBody><ProtoDeclare name="Data"><ProtoInterface><field name="reset" accessType="inputOutput" type="SFBool"></field>
<field name="startTime" accessType="inputOutput" type="SFTime"></field>
<field name="stopTime" accessType="inputOutput" type="SFTime"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>
<Script DEF="_mediaCtrl" directOutput="true"><field name="set_startTime" accessType="inputOnly" type="SFTime"></field>
<field name="set_stopTime" accessType="inputOnly" type="SFTime"></field>
<field name="set_isActive" accessType="inputOnly" type="SFBool"></field>
<field name="source" accessType="initializeOnly" type="SFNode"></field>
<field name="isActive" accessType="initializeOnly" type="SFBool"></field>
<field name="data" accessType="initializeOnly" type="SFNode"><ProtoInstance name="Data" DEF="Data"><IS><connect nodeField="reset" protoField="reset"></connect>
<connect nodeField="startTime" protoField="startTime"></connect>
<connect nodeField="stopTime" protoField="stopTime"></connect>
</IS>
</ProtoInstance>
</field>
<IS><connect nodeField="set_isActive" protoField="set_isActive"></connect>
<connect nodeField="source" protoField="source"></connect>
</IS>
<![CDATA[vrmlscript:
function set_startTime(value, time)
{
	if (isActive) {
		if (data.reset) {
			source.stopTime = time;
		}
	} else {
		source.startTime = time;
	}
}
function set_stopTime(value, time)
{
	if (isActive) {
		source.stopTime = time;
	}
}
function set_isActive(value, time)
{
	isActive = value;
	if (!isActive && data.reset) {
		source.startTime = time;
	}
}]]></Script>
<ROUTE fromNode="Data" fromField="startTime_changed" toNode="_mediaCtrl" toField="set_startTime"></ROUTE>
<ROUTE fromNode="Data" fromField="stopTime_changed" toNode="_mediaCtrl" toField="set_stopTime"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "MediaCtrl";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "reset";
field10.accessType = "inputOutput";
field10.type = "SFBool";
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

field field11 = createNode("field");
field11.name = "startTime";
field11.accessType = "inputOutput";
field11.type = "SFTime";
ProtoInterface9.field[1] = field11;

field field12 = createNode("field");
field12.name = "stopTime";
field12.accessType = "inputOutput";
field12.type = "SFTime";
ProtoInterface9.field[2] = field12;

field field13 = createNode("field");
field13.name = "set_isActive";
field13.accessType = "inputOnly";
field13.type = "SFBool";
ProtoInterface9.field[3] = field13;

field field14 = createNode("field");
field14.name = "source";
field14.accessType = "initializeOnly";
field14.type = "SFNode";
Transform Transform15 = createNode("Transform");
Transform15.DEF = "_1";
field14.children = new MFNode();

field14.children[0] = Transform15;

ProtoInterface9.field[4] = field14;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody16 = createNode("ProtoBody");
ProtoDeclare ProtoDeclare17 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Data" ><ProtoInterface><field name="reset" accessType="inputOutput" type="SFBool"></field>
<field name="startTime" accessType="inputOutput" type="SFTime"></field>
<field name="stopTime" accessType="inputOutput" type="SFTime"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare17.name = "Data";
ProtoInterface ProtoInterface18 = createNode("ProtoInterface");
field field19 = createNode("field");
field19.name = "reset";
field19.accessType = "inputOutput";
field19.type = "SFBool";
ProtoInterface18.field = new MFNode();

ProtoInterface18.field[0] = field19;

field field20 = createNode("field");
field20.name = "startTime";
field20.accessType = "inputOutput";
field20.type = "SFTime";
ProtoInterface18.field[1] = field20;

field field21 = createNode("field");
field21.name = "stopTime";
field21.accessType = "inputOutput";
field21.type = "SFTime";
ProtoInterface18.field[2] = field21;

ProtoDeclare17.protoInterface = ProtoInterface18;

ProtoBody ProtoBody22 = createNode("ProtoBody");
Group Group23 = createNode("Group");
ProtoBody22.children = new MFNode();

ProtoBody22.children[0] = Group23;

ProtoDeclare17.protoBody = ProtoBody22;

ProtoBody16.children = new MFNode();

ProtoBody16.children[0] = ProtoDeclare17;

Script Script24 = createNode("Script");
Script24.DEF = "_mediaCtrl";
Script24.directOutput = True;
field field25 = createNode("field");
field25.name = "set_startTime";
field25.accessType = "inputOnly";
field25.type = "SFTime";
Script24.field = new MFNode();

Script24.field[0] = field25;

field field26 = createNode("field");
field26.name = "set_stopTime";
field26.accessType = "inputOnly";
field26.type = "SFTime";
Script24.field[1] = field26;

field field27 = createNode("field");
field27.name = "set_isActive";
field27.accessType = "inputOnly";
field27.type = "SFBool";
Script24.field[2] = field27;

field field28 = createNode("field");
field28.name = "source";
field28.accessType = "initializeOnly";
field28.type = "SFNode";
Script24.field[3] = field28;

field field29 = createNode("field");
field29.name = "isActive";
field29.accessType = "initializeOnly";
field29.type = "SFBool";
Script24.field[4] = field29;

field field30 = createNode("field");
field30.name = "data";
field30.accessType = "initializeOnly";
field30.type = "SFNode";
ProtoInstance ProtoInstance31 = createNode("ProtoInstance");
ProtoInstance31.name = "Data";
ProtoInstance31.DEF = "Data";
IS IS32 = createNode("IS");
connect connect33 = createNode("connect");
connect33.nodeField = "reset";
connect33.protoField = "reset";
IS32.connect = new MFNode();

IS32.connect[0] = connect33;

connect connect34 = createNode("connect");
connect34.nodeField = "startTime";
connect34.protoField = "startTime";
IS32.connect[1] = connect34;

connect connect35 = createNode("connect");
connect35.nodeField = "stopTime";
connect35.protoField = "stopTime";
IS32.connect[2] = connect35;

ProtoInstance31.iS = IS32;

field30.children = new MFNode();

field30.children[0] = ProtoInstance31;

Script24.field[5] = field30;

IS IS36 = createNode("IS");
connect connect37 = createNode("connect");
connect37.nodeField = "set_isActive";
connect37.protoField = "set_isActive";
IS36.connect = new MFNode();

IS36.connect[0] = connect37;

connect connect38 = createNode("connect");
connect38.nodeField = "source";
connect38.protoField = "source";
IS36.connect[1] = connect38;

Script24.iS = IS36;


Script24.setSourceCode(`vrmlscript:\n"+
"function set_startTime(value, time)\n"+
"{\n"+
"	if (isActive) {\n"+
"		if (data.reset) {\n"+
"			source.stopTime = time;\n"+
"		}\n"+
"	} else {\n"+
"		source.startTime = time;\n"+
"	}\n"+
"}\n"+
"function set_stopTime(value, time)\n"+
"{\n"+
"	if (isActive) {\n"+
"		source.stopTime = time;\n"+
"	}\n"+
"}\n"+
"function set_isActive(value, time)\n"+
"{\n"+
"	isActive = value;\n"+
"	if (!isActive && data.reset) {\n"+
"		source.startTime = time;\n"+
"	}\n"+
"}`)
ProtoBody16.children[1] = Script24;

ROUTE ROUTE39 = createNode("ROUTE");
ROUTE39.fromNode = "Data";
ROUTE39.fromField = "startTime_changed";
ROUTE39.toNode = "_mediaCtrl";
ROUTE39.toField = "set_startTime";
ProtoBody16.children[2] = ROUTE39;

ROUTE ROUTE40 = createNode("ROUTE");
ROUTE40.fromNode = "Data";
ROUTE40.fromField = "stopTime_changed";
ROUTE40.toNode = "_mediaCtrl";
ROUTE40.toField = "set_stopTime";
ProtoBody16.children[3] = ROUTE40;

ProtoDeclare8.protoBody = ProtoBody16;

children = new MFNode();

children[0] = ProtoDeclare8;

}
