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
<ProtoDeclare name="RandomDelay" ><ProtoInterface><field name="minInterval" accessType="inputOutput" type="SFTime"></field>
<field name="maxInterval" accessType="inputOutput" type="SFTime" value="1"></field>
<field name="enabled" accessType="inputOutput" type="SFBool" value="true"></field>
<field name="startTime" accessType="inputOutput" type="SFTime"></field>
<field name="stopTime" accessType="inputOutput" type="SFTime"></field>
<field name="isActive" accessType="outputOnly" type="SFBool"></field>
<field name="exitTime" accessType="outputOnly" type="SFTime"></field>
</ProtoInterface>
<ProtoBody><ProtoDeclare name="Data"><ProtoInterface><field name="minInterval" accessType="inputOutput" type="SFTime"></field>
<field name="maxInterval" accessType="inputOutput" type="SFTime" value="1"></field>
<field name="startTime" accessType="inputOutput" type="SFTime"></field>
<field name="stopTime" accessType="inputOutput" type="SFTime"></field>
<field name="exitTime" accessType="inputOutput" type="SFTime"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>
<Script DEF="_randomDelay" directOutput="true" mustEvaluate="true"><field name="isActive" accessType="outputOnly" type="SFBool"></field>
<field name="exitTime" accessType="outputOnly" type="SFTime"></field>
<field name="set_startTime" accessType="inputOnly" type="SFTime"></field>
<field name="set_stopTime" accessType="inputOnly" type="SFTime"></field>
<field name="set_isActive" accessType="inputOnly" type="SFBool"></field>
<field name="timeSensor" accessType="initializeOnly" type="SFNode"><TimeSensor DEF="TimeSensor" loop="true" stopTime="1"><IS><connect nodeField="enabled" protoField="enabled"></connect>
</IS>
</TimeSensor>
</field>
<field name="data" accessType="initializeOnly" type="SFNode"><ProtoInstance name="Data" DEF="Data"><IS><connect nodeField="minInterval" protoField="minInterval"></connect>
<connect nodeField="maxInterval" protoField="maxInterval"></connect>
<connect nodeField="startTime" protoField="startTime"></connect>
<connect nodeField="stopTime" protoField="stopTime"></connect>
</IS>
</ProtoInstance>
</field>
<IS><connect nodeField="isActive" protoField="isActive"></connect>
<connect nodeField="exitTime" protoField="exitTime"></connect>
</IS>
<![CDATA[vrmlscript:
function rand(minValue, maxValue) { return minValue + Math.floor(Math.random() * (maxValue - minValue + 1)); }
function set_startTime(value, time) {
	if (!isActive) isActive = TRUE;

	timeSensor.startTime = time;
	timeSensor.stopTime = time + rand(data.minInterval, data.maxInterval);
}
function set_stopTime(value, time) {
	if (isActive) isActive = FALSE;
	timeSensor.startTime = 0;
	timeSensor.stopTime  = time;
}
function set_isActive(value, time) {
	if (!value) {
		if (isActive) {
			isActive = FALSE;
			exitTime = time;
		}
	}
}
function initialize() {
	if (data.startTime) data.startTime = 1;
}]]></Script>
<ROUTE fromNode="TimeSensor" fromField="isActive" toNode="_randomDelay" toField="set_isActive"></ROUTE>
<ROUTE fromNode="Data" fromField="startTime_changed" toNode="_randomDelay" toField="set_startTime"></ROUTE>
<ROUTE fromNode="Data" fromField="stopTime_changed" toNode="_randomDelay" toField="set_stopTime"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "RandomDelay";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "minInterval";
field10.accessType = "inputOutput";
field10.type = "SFTime";
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

field field11 = createNode("field");
field11.name = "maxInterval";
field11.accessType = "inputOutput";
field11.type = "SFTime";
field11.value = "1";
ProtoInterface9.field[1] = field11;

field field12 = createNode("field");
field12.name = "enabled";
field12.accessType = "inputOutput";
field12.type = "SFBool";
field12.value = "true";
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
field15.name = "isActive";
field15.accessType = "outputOnly";
field15.type = "SFBool";
ProtoInterface9.field[5] = field15;

field field16 = createNode("field");
field16.name = "exitTime";
field16.accessType = "outputOnly";
field16.type = "SFTime";
ProtoInterface9.field[6] = field16;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody17 = createNode("ProtoBody");
ProtoDeclare ProtoDeclare18 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Data" ><ProtoInterface><field name="minInterval" accessType="inputOutput" type="SFTime"></field>
<field name="maxInterval" accessType="inputOutput" type="SFTime" value="1"></field>
<field name="startTime" accessType="inputOutput" type="SFTime"></field>
<field name="stopTime" accessType="inputOutput" type="SFTime"></field>
<field name="exitTime" accessType="inputOutput" type="SFTime"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare18.name = "Data";
ProtoInterface ProtoInterface19 = createNode("ProtoInterface");
field field20 = createNode("field");
field20.name = "minInterval";
field20.accessType = "inputOutput";
field20.type = "SFTime";
ProtoInterface19.field = new MFNode();

ProtoInterface19.field[0] = field20;

field field21 = createNode("field");
field21.name = "maxInterval";
field21.accessType = "inputOutput";
field21.type = "SFTime";
field21.value = "1";
ProtoInterface19.field[1] = field21;

field field22 = createNode("field");
field22.name = "startTime";
field22.accessType = "inputOutput";
field22.type = "SFTime";
ProtoInterface19.field[2] = field22;

field field23 = createNode("field");
field23.name = "stopTime";
field23.accessType = "inputOutput";
field23.type = "SFTime";
ProtoInterface19.field[3] = field23;

field field24 = createNode("field");
field24.name = "exitTime";
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
Script27.DEF = "_randomDelay";
Script27.directOutput = True;
Script27.mustEvaluate = True;
field field28 = createNode("field");
field28.name = "isActive";
field28.accessType = "outputOnly";
field28.type = "SFBool";
Script27.field = new MFNode();

Script27.field[0] = field28;

field field29 = createNode("field");
field29.name = "exitTime";
field29.accessType = "outputOnly";
field29.type = "SFTime";
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
field32.name = "set_isActive";
field32.accessType = "inputOnly";
field32.type = "SFBool";
Script27.field[4] = field32;

field field33 = createNode("field");
field33.name = "timeSensor";
field33.accessType = "initializeOnly";
field33.type = "SFNode";
TimeSensor TimeSensor34 = createNode("TimeSensor");
TimeSensor34.DEF = "TimeSensor";
TimeSensor34.loop = True;
TimeSensor34.stopTime = 1;
IS IS35 = createNode("IS");
connect connect36 = createNode("connect");
connect36.nodeField = "enabled";
connect36.protoField = "enabled";
IS35.connect = new MFNode();

IS35.connect[0] = connect36;

TimeSensor34.iS = IS35;

field33.children = new MFNode();

field33.children[0] = TimeSensor34;

Script27.field[5] = field33;

field field37 = createNode("field");
field37.name = "data";
field37.accessType = "initializeOnly";
field37.type = "SFNode";
ProtoInstance ProtoInstance38 = createNode("ProtoInstance");
ProtoInstance38.name = "Data";
ProtoInstance38.DEF = "Data";
IS IS39 = createNode("IS");
connect connect40 = createNode("connect");
connect40.nodeField = "minInterval";
connect40.protoField = "minInterval";
IS39.connect = new MFNode();

IS39.connect[0] = connect40;

connect connect41 = createNode("connect");
connect41.nodeField = "maxInterval";
connect41.protoField = "maxInterval";
IS39.connect[1] = connect41;

connect connect42 = createNode("connect");
connect42.nodeField = "startTime";
connect42.protoField = "startTime";
IS39.connect[2] = connect42;

connect connect43 = createNode("connect");
connect43.nodeField = "stopTime";
connect43.protoField = "stopTime";
IS39.connect[3] = connect43;

ProtoInstance38.iS = IS39;

field37.children = new MFNode();

field37.children[0] = ProtoInstance38;

Script27.field[6] = field37;

IS IS44 = createNode("IS");
connect connect45 = createNode("connect");
connect45.nodeField = "isActive";
connect45.protoField = "isActive";
IS44.connect = new MFNode();

IS44.connect[0] = connect45;

connect connect46 = createNode("connect");
connect46.nodeField = "exitTime";
connect46.protoField = "exitTime";
IS44.connect[1] = connect46;

Script27.iS = IS44;


Script27.setSourceCode(`vrmlscript:\n"+
"function rand(minValue, maxValue) { return minValue + Math.floor(Math.random() * (maxValue - minValue + 1)); }\n"+
"function set_startTime(value, time) {\n"+
"	if (!isActive) isActive = TRUE;\n"+
"\n"+
"	timeSensor.startTime = time;\n"+
"	timeSensor.stopTime = time + rand(data.minInterval, data.maxInterval);\n"+
"}\n"+
"function set_stopTime(value, time) {\n"+
"	if (isActive) isActive = FALSE;\n"+
"	timeSensor.startTime = 0;\n"+
"	timeSensor.stopTime  = time;\n"+
"}\n"+
"function set_isActive(value, time) {\n"+
"	if (!value) {\n"+
"		if (isActive) {\n"+
"			isActive = FALSE;\n"+
"			exitTime = time;\n"+
"		}\n"+
"	}\n"+
"}\n"+
"function initialize() {\n"+
"	if (data.startTime) data.startTime = 1;\n"+
"}`)
ProtoBody17.children[1] = Script27;

ROUTE ROUTE47 = createNode("ROUTE");
ROUTE47.fromNode = "TimeSensor";
ROUTE47.fromField = "isActive";
ROUTE47.toNode = "_randomDelay";
ROUTE47.toField = "set_isActive";
ProtoBody17.children[2] = ROUTE47;

ROUTE ROUTE48 = createNode("ROUTE");
ROUTE48.fromNode = "Data";
ROUTE48.fromField = "startTime_changed";
ROUTE48.toNode = "_randomDelay";
ROUTE48.toField = "set_startTime";
ProtoBody17.children[3] = ROUTE48;

ROUTE ROUTE49 = createNode("ROUTE");
ROUTE49.fromNode = "Data";
ROUTE49.fromField = "stopTime_changed";
ROUTE49.toNode = "_randomDelay";
ROUTE49.toField = "set_stopTime";
ProtoBody17.children[4] = ROUTE49;

ProtoDeclare8.protoBody = ProtoBody17;

children = new MFNode();

children[0] = ProtoDeclare8;

}
