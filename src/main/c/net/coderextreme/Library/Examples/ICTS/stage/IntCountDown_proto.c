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
meta3.content = "Thu, 23 Apr 2015 06:07:09 GMT";
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
meta6.content = "Thu, 23 Apr 2015 06:07:09 GMT";
head1.meta[4] = meta6;

head = head1;

ProtoDeclare ProtoDeclare8 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="IntCountDown" ><ProtoInterface><field name="startValue" accessType="inputOutput" type="SFInt32" value="99"></field>
<field name="stopValue" accessType="inputOutput" type="SFInt32"></field>
<field name="next" accessType="inputOutput" type="SFTime"></field>
<field name="offset" accessType="inputOutput" type="SFInt32"></field>
<field name="whichChoice_changed" accessType="outputOnly" type="SFInt32"></field>
<field name="stopTime" accessType="outputOnly" type="SFTime"></field>
</ProtoInterface>
<ProtoBody><ProtoDeclare name="Data"><ProtoInterface><field name="startValue" accessType="inputOutput" type="SFInt32"></field>
<field name="stopValue" accessType="inputOutput" type="SFInt32" value="1"></field>
<field name="next" accessType="inputOutput" type="SFTime"></field>
<field name="offset" accessType="inputOutput" type="SFInt32"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>
<Group><Script DEF="_switcher" directOutput="true"><field name="whichChoice_changed" accessType="outputOnly" type="SFInt32"></field>
<field name="stopTime" accessType="outputOnly" type="SFTime"></field>
<field name="set_next" accessType="inputOnly" type="SFTime"></field>
<field name="data" accessType="initializeOnly" type="SFNode"><ProtoInstance name="Data" DEF="_1"><IS><connect nodeField="startValue" protoField="startValue"></connect>
<connect nodeField="stopValue" protoField="stopValue"></connect>
<connect nodeField="next" protoField="next"></connect>
<connect nodeField="offset" protoField="offset"></connect>
</IS>
</ProtoInstance>
</field>
<IS><connect nodeField="whichChoice_changed" protoField="whichChoice_changed"></connect>
<connect nodeField="stopTime" protoField="stopTime"></connect>
</IS>
<![CDATA[vrmlscript:
	function  initialize()
	{
		data.offset = data.startValue;
		whichChoice_changed = data.startValue;
	}

	function  set_next(value, time)
	{
		--data.offset;
		if (data.offset < data.stopValue) {
			initialize();
		} else {		
			whichChoice_changed = data.offset;
			if (data.offset == data.stopValue) stopTime = time;
		}

	}]]></Script>
</Group>
<ROUTE fromNode="_1" fromField="next_changed" toNode="_switcher" toField="set_next"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "IntCountDown";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "startValue";
field10.accessType = "inputOutput";
field10.type = "SFInt32";
field10.value = "99";
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

field field11 = createNode("field");
field11.name = "stopValue";
field11.accessType = "inputOutput";
field11.type = "SFInt32";
ProtoInterface9.field[1] = field11;

field field12 = createNode("field");
field12.name = "next";
field12.accessType = "inputOutput";
field12.type = "SFTime";
ProtoInterface9.field[2] = field12;

field field13 = createNode("field");
field13.name = "offset";
field13.accessType = "inputOutput";
field13.type = "SFInt32";
ProtoInterface9.field[3] = field13;

field field14 = createNode("field");
field14.name = "whichChoice_changed";
field14.accessType = "outputOnly";
field14.type = "SFInt32";
ProtoInterface9.field[4] = field14;

field field15 = createNode("field");
field15.name = "stopTime";
field15.accessType = "outputOnly";
field15.type = "SFTime";
ProtoInterface9.field[5] = field15;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody16 = createNode("ProtoBody");
ProtoDeclare ProtoDeclare17 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Data" ><ProtoInterface><field name="startValue" accessType="inputOutput" type="SFInt32"></field>
<field name="stopValue" accessType="inputOutput" type="SFInt32" value="1"></field>
<field name="next" accessType="inputOutput" type="SFTime"></field>
<field name="offset" accessType="inputOutput" type="SFInt32"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare17.name = "Data";
ProtoInterface ProtoInterface18 = createNode("ProtoInterface");
field field19 = createNode("field");
field19.name = "startValue";
field19.accessType = "inputOutput";
field19.type = "SFInt32";
ProtoInterface18.field = new MFNode();

ProtoInterface18.field[0] = field19;

field field20 = createNode("field");
field20.name = "stopValue";
field20.accessType = "inputOutput";
field20.type = "SFInt32";
field20.value = "1";
ProtoInterface18.field[1] = field20;

field field21 = createNode("field");
field21.name = "next";
field21.accessType = "inputOutput";
field21.type = "SFTime";
ProtoInterface18.field[2] = field21;

field field22 = createNode("field");
field22.name = "offset";
field22.accessType = "inputOutput";
field22.type = "SFInt32";
ProtoInterface18.field[3] = field22;

ProtoDeclare17.protoInterface = ProtoInterface18;

ProtoBody ProtoBody23 = createNode("ProtoBody");
Group Group24 = createNode("Group");
ProtoBody23.children = new MFNode();

ProtoBody23.children[0] = Group24;

ProtoDeclare17.protoBody = ProtoBody23;

ProtoBody16.children = new MFNode();

ProtoBody16.children[0] = ProtoDeclare17;

Group Group25 = createNode("Group");
Script Script26 = createNode("Script");
Script26.DEF = "_switcher";
Script26.directOutput = True;
field field27 = createNode("field");
field27.name = "whichChoice_changed";
field27.accessType = "outputOnly";
field27.type = "SFInt32";
Script26.field = new MFNode();

Script26.field[0] = field27;

field field28 = createNode("field");
field28.name = "stopTime";
field28.accessType = "outputOnly";
field28.type = "SFTime";
Script26.field[1] = field28;

field field29 = createNode("field");
field29.name = "set_next";
field29.accessType = "inputOnly";
field29.type = "SFTime";
Script26.field[2] = field29;

field field30 = createNode("field");
field30.name = "data";
field30.accessType = "initializeOnly";
field30.type = "SFNode";
ProtoInstance ProtoInstance31 = createNode("ProtoInstance");
ProtoInstance31.name = "Data";
ProtoInstance31.DEF = "_1";
IS IS32 = createNode("IS");
connect connect33 = createNode("connect");
connect33.nodeField = "startValue";
connect33.protoField = "startValue";
IS32.connect = new MFNode();

IS32.connect[0] = connect33;

connect connect34 = createNode("connect");
connect34.nodeField = "stopValue";
connect34.protoField = "stopValue";
IS32.connect[1] = connect34;

connect connect35 = createNode("connect");
connect35.nodeField = "next";
connect35.protoField = "next";
IS32.connect[2] = connect35;

connect connect36 = createNode("connect");
connect36.nodeField = "offset";
connect36.protoField = "offset";
IS32.connect[3] = connect36;

ProtoInstance31.iS = IS32;

field30.children = new MFNode();

field30.children[0] = ProtoInstance31;

Script26.field[3] = field30;

IS IS37 = createNode("IS");
connect connect38 = createNode("connect");
connect38.nodeField = "whichChoice_changed";
connect38.protoField = "whichChoice_changed";
IS37.connect = new MFNode();

IS37.connect[0] = connect38;

connect connect39 = createNode("connect");
connect39.nodeField = "stopTime";
connect39.protoField = "stopTime";
IS37.connect[1] = connect39;

Script26.iS = IS37;


Script26.setSourceCode(`vrmlscript:\n"+
"	function  initialize()\n"+
"	{\n"+
"		data.offset = data.startValue;\n"+
"		whichChoice_changed = data.startValue;\n"+
"	}\n"+
"\n"+
"	function  set_next(value, time)\n"+
"	{\n"+
"		--data.offset;\n"+
"		if (data.offset < data.stopValue) {\n"+
"			initialize();\n"+
"		} else {		\n"+
"			whichChoice_changed = data.offset;\n"+
"			if (data.offset == data.stopValue) stopTime = time;\n"+
"		}\n"+
"\n"+
"	}`)
Group25.children = new MFNode();

Group25.children[0] = Script26;

ProtoBody16.children[1] = Group25;

ROUTE ROUTE40 = createNode("ROUTE");
ROUTE40.fromNode = "_1";
ROUTE40.fromField = "next_changed";
ROUTE40.toNode = "_switcher";
ROUTE40.toField = "set_next";
ProtoBody16.children[2] = ROUTE40;

ProtoDeclare8.protoBody = ProtoBody16;

children = new MFNode();

children[0] = ProtoDeclare8;

}
