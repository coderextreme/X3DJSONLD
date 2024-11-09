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
<ProtoDeclare name="Random" ><ProtoInterface><field name="minValue" accessType="inputOutput" type="SFInt32"></field>
<field name="maxValue" accessType="inputOutput" type="SFInt32"></field>
<field name="numValues" accessType="inputOutput" type="SFInt32"></field>
<field name="startTime" accessType="inputOutput" type="SFTime"></field>
<field name="stopTime" accessType="inputOutput" type="SFTime"></field>
<field name="whichChoice_changed" accessType="outputOnly" type="SFInt32"></field>
<field name="fraction_changed" accessType="outputOnly" type="SFFloat"></field>
</ProtoInterface>
<ProtoBody><ProtoDeclare name="Data"><ProtoInterface><field name="minValue" accessType="inputOutput" type="SFInt32"></field>
<field name="maxValue" accessType="inputOutput" type="SFInt32"></field>
<field name="numValues" accessType="inputOutput" type="SFInt32"></field>
<field name="startTime" accessType="inputOutput" type="SFTime"></field>
<field name="stopTime" accessType="inputOutput" type="SFTime"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>
<Script DEF="_random" directOutput="true"><field name="set_maxValue" accessType="inputOnly" type="SFInt32"></field>
<field name="set_numValues" accessType="inputOnly" type="SFInt32"></field>
<field name="set_startTime" accessType="inputOnly" type="SFTime"></field>
<field name="set_stopTime" accessType="inputOnly" type="SFTime"></field>
<field name="whichChoice_changed" accessType="outputOnly" type="SFInt32"></field>
<field name="fraction_changed" accessType="outputOnly" type="SFFloat"></field>
<field name="values" accessType="initializeOnly" type="MFInt32"></field>
<field name="vi" accessType="initializeOnly" type="SFInt32"></field>
<field name="data" accessType="initializeOnly" type="SFNode"><ProtoInstance name="Data" DEF="Data"><IS><connect nodeField="minValue" protoField="minValue"></connect>
<connect nodeField="maxValue" protoField="maxValue"></connect>
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
function rand(minValue, maxValue) { return minValue + Math.floor(Math.random() * (maxValue - minValue + 1)); }
function isIn(value) {
	for (i = 0; i < values.length; ++i) {
		if (value == values[i]) return TRUE;
	}
	return FALSE;
}
function set_maxValue(value, time) {
	if (value < 0) data.maxValue = 0;
	else if (value < data.numValues) data.numValues = value;
}
function set_numValues(value, time) {
	if (value < 0) data.numValues = 0;
	else if (value > data.maxValue + 1) data.numValues = data.maxValue;
}
function set_stopTime(value, time) { values = new MFInt32(); vi = 0; }
function set_startTime(value, time)
{
	whichChoice = rand(data.minValue, data.maxValue);
	while (isIn(whichChoice)) {
		whichChoice = rand(data.minValue, data.maxValue);
	}
	whichChoice_changed = whichChoice;
	fraction_changed = whichChoice / data.maxValue;

	if (values.length < data.numValues) ++values.length;
	values[vi++] = whichChoice;
	if (vi >= data.numValues) set_stopTime(0, 0);
}
function initialize() {
	set_numValues(data.numValues, 0);
	set_maxValue(data.numValues, 0);
	if (data.startTime) set_startTime(1, 0);
}]]></Script>
<ROUTE fromNode="Data" fromField="maxValue_changed" toNode="_random" toField="set_maxValue"></ROUTE>
<ROUTE fromNode="Data" fromField="numValues_changed" toNode="_random" toField="set_numValues"></ROUTE>
<ROUTE fromNode="Data" fromField="startTime_changed" toNode="_random" toField="set_startTime"></ROUTE>
<ROUTE fromNode="Data" fromField="stopTime_changed" toNode="_random" toField="set_stopTime"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "Random";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "minValue";
field10.accessType = "inputOutput";
field10.type = "SFInt32";
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

field field11 = createNode("field");
field11.name = "maxValue";
field11.accessType = "inputOutput";
field11.type = "SFInt32";
ProtoInterface9.field[1] = field11;

field field12 = createNode("field");
field12.name = "numValues";
field12.accessType = "inputOutput";
field12.type = "SFInt32";
ProtoInterface9.field[2] = field12;

field field13 = createNode("field");
field13.name = "startTime";
field13.accessType = "inputOutput";
field13.type = "SFTime";
ProtoInterface9.field[3] = field13;

field field14 = createNode("field");
field14.name = "stopTime";
field14.accessType = "inputOutput";
field14.type = "SFTime";
ProtoInterface9.field[4] = field14;

field field15 = createNode("field");
field15.name = "whichChoice_changed";
field15.accessType = "outputOnly";
field15.type = "SFInt32";
ProtoInterface9.field[5] = field15;

field field16 = createNode("field");
field16.name = "fraction_changed";
field16.accessType = "outputOnly";
field16.type = "SFFloat";
ProtoInterface9.field[6] = field16;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody17 = createNode("ProtoBody");
ProtoDeclare ProtoDeclare18 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Data" ><ProtoInterface><field name="minValue" accessType="inputOutput" type="SFInt32"></field>
<field name="maxValue" accessType="inputOutput" type="SFInt32"></field>
<field name="numValues" accessType="inputOutput" type="SFInt32"></field>
<field name="startTime" accessType="inputOutput" type="SFTime"></field>
<field name="stopTime" accessType="inputOutput" type="SFTime"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare18.name = "Data";
ProtoInterface ProtoInterface19 = createNode("ProtoInterface");
field field20 = createNode("field");
field20.name = "minValue";
field20.accessType = "inputOutput";
field20.type = "SFInt32";
ProtoInterface19.field = new MFNode();

ProtoInterface19.field[0] = field20;

field field21 = createNode("field");
field21.name = "maxValue";
field21.accessType = "inputOutput";
field21.type = "SFInt32";
ProtoInterface19.field[1] = field21;

field field22 = createNode("field");
field22.name = "numValues";
field22.accessType = "inputOutput";
field22.type = "SFInt32";
ProtoInterface19.field[2] = field22;

field field23 = createNode("field");
field23.name = "startTime";
field23.accessType = "inputOutput";
field23.type = "SFTime";
ProtoInterface19.field[3] = field23;

field field24 = createNode("field");
field24.name = "stopTime";
field24.accessType = "inputOutput";
field24.type = "SFTime";
ProtoInterface19.field[4] = field24;

ProtoDeclare18.protoInterface = ProtoInterface19;

ProtoBody ProtoBody25 = createNode("ProtoBody");
Group Group26 = createNode("Group");
ProtoBody25.children = new MFNode();

ProtoBody25.children[0] = Group26;

ProtoDeclare18.protoBody = ProtoBody25;

ProtoBody17.children = new MFNode();

ProtoBody17.children[0] = ProtoDeclare18;

Script Script27 = createNode("Script");
Script27.DEF = "_random";
Script27.directOutput = True;
field field28 = createNode("field");
field28.name = "set_maxValue";
field28.accessType = "inputOnly";
field28.type = "SFInt32";
Script27.field = new MFNode();

Script27.field[0] = field28;

field field29 = createNode("field");
field29.name = "set_numValues";
field29.accessType = "inputOnly";
field29.type = "SFInt32";
Script27.field[1] = field29;

field field30 = createNode("field");
field30.name = "set_startTime";
field30.accessType = "inputOnly";
field30.type = "SFTime";
Script27.field[2] = field30;

field field31 = createNode("field");
field31.name = "set_stopTime";
field31.accessType = "inputOnly";
field31.type = "SFTime";
Script27.field[3] = field31;

field field32 = createNode("field");
field32.name = "whichChoice_changed";
field32.accessType = "outputOnly";
field32.type = "SFInt32";
Script27.field[4] = field32;

field field33 = createNode("field");
field33.name = "fraction_changed";
field33.accessType = "outputOnly";
field33.type = "SFFloat";
Script27.field[5] = field33;

field field34 = createNode("field");
field34.name = "values";
field34.accessType = "initializeOnly";
field34.type = "MFInt32";
Script27.field[6] = field34;

field field35 = createNode("field");
field35.name = "vi";
field35.accessType = "initializeOnly";
field35.type = "SFInt32";
Script27.field[7] = field35;

field field36 = createNode("field");
field36.name = "data";
field36.accessType = "initializeOnly";
field36.type = "SFNode";
ProtoInstance ProtoInstance37 = createNode("ProtoInstance");
ProtoInstance37.name = "Data";
ProtoInstance37.DEF = "Data";
IS IS38 = createNode("IS");
connect connect39 = createNode("connect");
connect39.nodeField = "minValue";
connect39.protoField = "minValue";
IS38.connect = new MFNode();

IS38.connect[0] = connect39;

connect connect40 = createNode("connect");
connect40.nodeField = "maxValue";
connect40.protoField = "maxValue";
IS38.connect[1] = connect40;

connect connect41 = createNode("connect");
connect41.nodeField = "numValues";
connect41.protoField = "numValues";
IS38.connect[2] = connect41;

connect connect42 = createNode("connect");
connect42.nodeField = "startTime";
connect42.protoField = "startTime";
IS38.connect[3] = connect42;

connect connect43 = createNode("connect");
connect43.nodeField = "stopTime";
connect43.protoField = "stopTime";
IS38.connect[4] = connect43;

ProtoInstance37.iS = IS38;

field36.children = new MFNode();

field36.children[0] = ProtoInstance37;

Script27.field[8] = field36;

IS IS44 = createNode("IS");
connect connect45 = createNode("connect");
connect45.nodeField = "whichChoice_changed";
connect45.protoField = "whichChoice_changed";
IS44.connect = new MFNode();

IS44.connect[0] = connect45;

connect connect46 = createNode("connect");
connect46.nodeField = "fraction_changed";
connect46.protoField = "fraction_changed";
IS44.connect[1] = connect46;

Script27.iS = IS44;


Script27.setSourceCode(`vrmlscript:\n"+
"function rand(minValue, maxValue) { return minValue + Math.floor(Math.random() * (maxValue - minValue + 1)); }\n"+
"function isIn(value) {\n"+
"	for (i = 0; i < values.length; ++i) {\n"+
"		if (value == values[i]) return TRUE;\n"+
"	}\n"+
"	return FALSE;\n"+
"}\n"+
"function set_maxValue(value, time) {\n"+
"	if (value < 0) data.maxValue = 0;\n"+
"	else if (value < data.numValues) data.numValues = value;\n"+
"}\n"+
"function set_numValues(value, time) {\n"+
"	if (value < 0) data.numValues = 0;\n"+
"	else if (value > data.maxValue + 1) data.numValues = data.maxValue;\n"+
"}\n"+
"function set_stopTime(value, time) { values = new MFInt32(); vi = 0; }\n"+
"function set_startTime(value, time)\n"+
"{\n"+
"	whichChoice = rand(data.minValue, data.maxValue);\n"+
"	while (isIn(whichChoice)) {\n"+
"		whichChoice = rand(data.minValue, data.maxValue);\n"+
"	}\n"+
"	whichChoice_changed = whichChoice;\n"+
"	fraction_changed = whichChoice / data.maxValue;\n"+
"\n"+
"	if (values.length < data.numValues) ++values.length;\n"+
"	values[vi++] = whichChoice;\n"+
"	if (vi >= data.numValues) set_stopTime(0, 0);\n"+
"}\n"+
"function initialize() {\n"+
"	set_numValues(data.numValues, 0);\n"+
"	set_maxValue(data.numValues, 0);\n"+
"	if (data.startTime) set_startTime(1, 0);\n"+
"}`)
ProtoBody17.children[1] = Script27;

ROUTE ROUTE47 = createNode("ROUTE");
ROUTE47.fromNode = "Data";
ROUTE47.fromField = "maxValue_changed";
ROUTE47.toNode = "_random";
ROUTE47.toField = "set_maxValue";
ProtoBody17.children[2] = ROUTE47;

ROUTE ROUTE48 = createNode("ROUTE");
ROUTE48.fromNode = "Data";
ROUTE48.fromField = "numValues_changed";
ROUTE48.toNode = "_random";
ROUTE48.toField = "set_numValues";
ProtoBody17.children[3] = ROUTE48;

ROUTE ROUTE49 = createNode("ROUTE");
ROUTE49.fromNode = "Data";
ROUTE49.fromField = "startTime_changed";
ROUTE49.toNode = "_random";
ROUTE49.toField = "set_startTime";
ProtoBody17.children[4] = ROUTE49;

ROUTE ROUTE50 = createNode("ROUTE");
ROUTE50.fromNode = "Data";
ROUTE50.fromField = "stopTime_changed";
ROUTE50.toNode = "_random";
ROUTE50.toField = "set_stopTime";
ProtoBody17.children[5] = ROUTE50;

ProtoDeclare8.protoBody = ProtoBody17;

children = new MFNode();

children[0] = ProtoDeclare8;

}
