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
meta3.content = "Fri, 28 Aug 2015 13:01:10 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V1.0.0, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Fri, 28 Aug 2015 13:01:10 GMT";
head1.meta[4] = meta6;

head = head1;

ProtoDeclare ProtoDeclare8 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Random" ><ProtoInterface><field name="value" accessType="inputOutput" type="SFInt32"></field>
<field name="numValues" accessType="inputOutput" type="SFInt32"></field>
<field name="startTime" accessType="inputOutput" type="SFTime"></field>
<field name="stopTime" accessType="inputOutput" type="SFTime"></field>
<field name="whichChoice_changed" accessType="outputOnly" type="SFInt32"></field>
<field name="fraction_changed" accessType="outputOnly" type="SFFloat"></field>
</ProtoInterface>
<ProtoBody><ProtoDeclare name="Data"><ProtoInterface><field name="value" accessType="inputOutput" type="SFInt32"></field>
<field name="numValues" accessType="inputOutput" type="SFInt32"></field>
<field name="startTime" accessType="inputOutput" type="SFTime"></field>
<field name="stopTime" accessType="inputOutput" type="SFTime"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>
<Script DEF="_random" directOutput="true"><field name="set_value" accessType="inputOnly" type="SFInt32"></field>
<field name="set_numValues" accessType="inputOnly" type="SFInt32"></field>
<field name="set_startTime" accessType="inputOnly" type="SFTime"></field>
<field name="set_stopTime" accessType="inputOnly" type="SFTime"></field>
<field name="whichChoice_changed" accessType="outputOnly" type="SFInt32"></field>
<field name="fraction_changed" accessType="outputOnly" type="SFFloat"></field>
<field name="values" accessType="initializeOnly" type="MFInt32"></field>
<field name="vi" accessType="initializeOnly" type="SFInt32"></field>
<field name="data" accessType="initializeOnly" type="SFNode"><ProtoInstance name="Data" DEF="Data"><IS><connect nodeField="value" protoField="value"></connect>
<connect nodeField="numValues" protoField="numValues"></connect>
<connect nodeField="startTime" protoField="startTime"></connect>
<connect nodeField="stopTime" protoField="stopTime"></connect>
</IS>
</ProtoInstance>
</field>
<IS><connect nodeField="whichChoice_changed" protoField="whichChoice_changed"></connect>
<connect nodeField="fraction_changed" protoField="fraction_changed"></connect>
</IS>
<![CDATA[vrmlscript:
function rand(value) { return Math.round(Math.random() * value); }
function isIn(value) {
	for (i = 0; i < values.length; ++i) {
		if (value == values[i]) return TRUE;
	}
	return FALSE;
}
function set_value(value, time) {
	if (value < 0) data.value = 0;
	else if (value < data.numValues) data.numValues = value;
}
function set_numValues(value, time) {
	if (value < 0) data.numValues = 0;
	else if (value > data.value) data.numValues = data.value;
}
function set_startTime(value, time)
{
	whichChoice = rand(data.value);
	while (isIn(whichChoice)) {
		whichChoice = rand(data.value);
	}
	whichChoice_changed = whichChoice;
	fraction_changed = whichChoice / data.value;

	if (values.length < data.numValues) ++values.length;
	values[vi++] = whichChoice;
	if (vi >= data.numValues) vi = 0;
}
function set_stopTime(value, time) { values = new MFInt32(); vi = 0; }
function initialize() {
	set_numValues(data.numValues, 0);
	set_value(data.numValues, 0);
	if (data.startTime) set_startTime(1, 0);
}]]></Script>
<ROUTE fromNode="Data" fromField="value_changed" toNode="_random" toField="set_value"></ROUTE>
<ROUTE fromNode="Data" fromField="numValues_changed" toNode="_random" toField="set_numValues"></ROUTE>
<ROUTE fromNode="Data" fromField="startTime_changed" toNode="_random" toField="set_startTime"></ROUTE>
<ROUTE fromNode="Data" fromField="stopTime_changed" toNode="_random" toField="set_stopTime"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "Random";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "value";
field10.accessType = "inputOutput";
field10.type = "SFInt32";
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

field field11 = createNode("field");
field11.name = "numValues";
field11.accessType = "inputOutput";
field11.type = "SFInt32";
ProtoInterface9.field[1] = field11;

field field12 = createNode("field");
field12.name = "startTime";
field12.accessType = "inputOutput";
field12.type = "SFTime";
ProtoInterface9.field[2] = field12;

field field13 = createNode("field");
field13.name = "stopTime";
field13.accessType = "inputOutput";
field13.type = "SFTime";
ProtoInterface9.field[3] = field13;

field field14 = createNode("field");
field14.name = "whichChoice_changed";
field14.accessType = "outputOnly";
field14.type = "SFInt32";
ProtoInterface9.field[4] = field14;

field field15 = createNode("field");
field15.name = "fraction_changed";
field15.accessType = "outputOnly";
field15.type = "SFFloat";
ProtoInterface9.field[5] = field15;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody16 = createNode("ProtoBody");
ProtoDeclare ProtoDeclare17 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Data" ><ProtoInterface><field name="value" accessType="inputOutput" type="SFInt32"></field>
<field name="numValues" accessType="inputOutput" type="SFInt32"></field>
<field name="startTime" accessType="inputOutput" type="SFTime"></field>
<field name="stopTime" accessType="inputOutput" type="SFTime"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare17.name = "Data";
ProtoInterface ProtoInterface18 = createNode("ProtoInterface");
field field19 = createNode("field");
field19.name = "value";
field19.accessType = "inputOutput";
field19.type = "SFInt32";
ProtoInterface18.field = new MFNode();

ProtoInterface18.field[0] = field19;

field field20 = createNode("field");
field20.name = "numValues";
field20.accessType = "inputOutput";
field20.type = "SFInt32";
ProtoInterface18.field[1] = field20;

field field21 = createNode("field");
field21.name = "startTime";
field21.accessType = "inputOutput";
field21.type = "SFTime";
ProtoInterface18.field[2] = field21;

field field22 = createNode("field");
field22.name = "stopTime";
field22.accessType = "inputOutput";
field22.type = "SFTime";
ProtoInterface18.field[3] = field22;

ProtoDeclare17.protoInterface = ProtoInterface18;

ProtoBody ProtoBody23 = createNode("ProtoBody");
Group Group24 = createNode("Group");
ProtoBody23.children = new MFNode();

ProtoBody23.children[0] = Group24;

ProtoDeclare17.protoBody = ProtoBody23;

ProtoBody16.children = new MFNode();

ProtoBody16.children[0] = ProtoDeclare17;

Script Script25 = createNode("Script");
Script25.DEF = "_random";
Script25.directOutput = True;
field field26 = createNode("field");
field26.name = "set_value";
field26.accessType = "inputOnly";
field26.type = "SFInt32";
Script25.field = new MFNode();

Script25.field[0] = field26;

field field27 = createNode("field");
field27.name = "set_numValues";
field27.accessType = "inputOnly";
field27.type = "SFInt32";
Script25.field[1] = field27;

field field28 = createNode("field");
field28.name = "set_startTime";
field28.accessType = "inputOnly";
field28.type = "SFTime";
Script25.field[2] = field28;

field field29 = createNode("field");
field29.name = "set_stopTime";
field29.accessType = "inputOnly";
field29.type = "SFTime";
Script25.field[3] = field29;

field field30 = createNode("field");
field30.name = "whichChoice_changed";
field30.accessType = "outputOnly";
field30.type = "SFInt32";
Script25.field[4] = field30;

field field31 = createNode("field");
field31.name = "fraction_changed";
field31.accessType = "outputOnly";
field31.type = "SFFloat";
Script25.field[5] = field31;

field field32 = createNode("field");
field32.name = "values";
field32.accessType = "initializeOnly";
field32.type = "MFInt32";
Script25.field[6] = field32;

field field33 = createNode("field");
field33.name = "vi";
field33.accessType = "initializeOnly";
field33.type = "SFInt32";
Script25.field[7] = field33;

field field34 = createNode("field");
field34.name = "data";
field34.accessType = "initializeOnly";
field34.type = "SFNode";
ProtoInstance ProtoInstance35 = createNode("ProtoInstance");
ProtoInstance35.name = "Data";
ProtoInstance35.DEF = "Data";
IS IS36 = createNode("IS");
connect connect37 = createNode("connect");
connect37.nodeField = "value";
connect37.protoField = "value";
IS36.connect = new MFNode();

IS36.connect[0] = connect37;

connect connect38 = createNode("connect");
connect38.nodeField = "numValues";
connect38.protoField = "numValues";
IS36.connect[1] = connect38;

connect connect39 = createNode("connect");
connect39.nodeField = "startTime";
connect39.protoField = "startTime";
IS36.connect[2] = connect39;

connect connect40 = createNode("connect");
connect40.nodeField = "stopTime";
connect40.protoField = "stopTime";
IS36.connect[3] = connect40;

ProtoInstance35.iS = IS36;

field34.children = new MFNode();

field34.children[0] = ProtoInstance35;

Script25.field[8] = field34;

IS IS41 = createNode("IS");
connect connect42 = createNode("connect");
connect42.nodeField = "whichChoice_changed";
connect42.protoField = "whichChoice_changed";
IS41.connect = new MFNode();

IS41.connect[0] = connect42;

connect connect43 = createNode("connect");
connect43.nodeField = "fraction_changed";
connect43.protoField = "fraction_changed";
IS41.connect[1] = connect43;

Script25.iS = IS41;


Script25.setSourceCode(`vrmlscript:\n"+
"function rand(value) { return Math.round(Math.random() * value); }\n"+
"function isIn(value) {\n"+
"	for (i = 0; i < values.length; ++i) {\n"+
"		if (value == values[i]) return TRUE;\n"+
"	}\n"+
"	return FALSE;\n"+
"}\n"+
"function set_value(value, time) {\n"+
"	if (value < 0) data.value = 0;\n"+
"	else if (value < data.numValues) data.numValues = value;\n"+
"}\n"+
"function set_numValues(value, time) {\n"+
"	if (value < 0) data.numValues = 0;\n"+
"	else if (value > data.value) data.numValues = data.value;\n"+
"}\n"+
"function set_startTime(value, time)\n"+
"{\n"+
"	whichChoice = rand(data.value);\n"+
"	while (isIn(whichChoice)) {\n"+
"		whichChoice = rand(data.value);\n"+
"	}\n"+
"	whichChoice_changed = whichChoice;\n"+
"	fraction_changed = whichChoice / data.value;\n"+
"\n"+
"	if (values.length < data.numValues) ++values.length;\n"+
"	values[vi++] = whichChoice;\n"+
"	if (vi >= data.numValues) vi = 0;\n"+
"}\n"+
"function set_stopTime(value, time) { values = new MFInt32(); vi = 0; }\n"+
"function initialize() {\n"+
"	set_numValues(data.numValues, 0);\n"+
"	set_value(data.numValues, 0);\n"+
"	if (data.startTime) set_startTime(1, 0);\n"+
"}`)
ProtoBody16.children[1] = Script25;

ROUTE ROUTE44 = createNode("ROUTE");
ROUTE44.fromNode = "Data";
ROUTE44.fromField = "value_changed";
ROUTE44.toNode = "_random";
ROUTE44.toField = "set_value";
ProtoBody16.children[2] = ROUTE44;

ROUTE ROUTE45 = createNode("ROUTE");
ROUTE45.fromNode = "Data";
ROUTE45.fromField = "numValues_changed";
ROUTE45.toNode = "_random";
ROUTE45.toField = "set_numValues";
ProtoBody16.children[3] = ROUTE45;

ROUTE ROUTE46 = createNode("ROUTE");
ROUTE46.fromNode = "Data";
ROUTE46.fromField = "startTime_changed";
ROUTE46.toNode = "_random";
ROUTE46.toField = "set_startTime";
ProtoBody16.children[4] = ROUTE46;

ROUTE ROUTE47 = createNode("ROUTE");
ROUTE47.fromNode = "Data";
ROUTE47.fromField = "stopTime_changed";
ROUTE47.toNode = "_random";
ROUTE47.toField = "set_stopTime";
ProtoBody16.children[5] = ROUTE47;

ProtoDeclare8.protoBody = ProtoBody16;

children = new MFNode();

children[0] = ProtoDeclare8;

}
