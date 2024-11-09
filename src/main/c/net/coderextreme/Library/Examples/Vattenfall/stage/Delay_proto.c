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
meta3.content = "Sat, 25 Apr 2015 12:38:20 GMT";
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
meta6.content = "Sat, 25 Apr 2015 12:38:20 GMT";
head1.meta[4] = meta6;

head = head1;

ProtoDeclare ProtoDeclare8 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Delay" ><ProtoInterface><field name="cycleInterval" accessType="inputOutput" type="SFTime" value="1"></field>
<field name="enabled" accessType="inputOutput" type="SFBool" value="true"></field>
<field name="startTime" accessType="inputOutput" type="SFTime"></field>
<field name="stopTime" accessType="inputOutput" type="SFTime"></field>
<field name="isActive" accessType="outputOnly" type="SFBool"></field>
<field name="exitTime" accessType="outputOnly" type="SFTime"></field>
</ProtoInterface>
<ProtoBody><ProtoDeclare name="Data"><ProtoInterface><field name="cycleInterval" accessType="inputOutput" type="SFTime" value="1"></field>
<field name="startTime" accessType="inputOutput" type="SFTime"></field>
<field name="stopTime" accessType="inputOutput" type="SFTime"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>
<Script DEF="_delay" directOutput="true" mustEvaluate="true"><field name="isActive" accessType="outputOnly" type="SFBool"></field>
<field name="exitTime" accessType="outputOnly" type="SFTime"></field>
<field name="set_startTime" accessType="inputOnly" type="SFTime"></field>
<field name="set_stopTime" accessType="inputOnly" type="SFTime"></field>
<field name="set_isActive" accessType="inputOnly" type="SFBool"></field>
<field name="timeSensor" accessType="initializeOnly" type="SFNode"><TimeSensor DEF="TimeSensor" loop="true" stopTime="1"><IS><connect nodeField="enabled" protoField="enabled"></connect>
</IS>
</TimeSensor>
</field>
<field name="data" accessType="initializeOnly" type="SFNode"><ProtoInstance name="Data" DEF="Data"><IS><connect nodeField="cycleInterval" protoField="cycleInterval"></connect>
<connect nodeField="startTime" protoField="startTime"></connect>
<connect nodeField="stopTime" protoField="stopTime"></connect>
</IS>
</ProtoInstance>
</field>
<IS><connect nodeField="isActive" protoField="isActive"></connect>
<connect nodeField="exitTime" protoField="exitTime"></connect>
</IS>
<![CDATA[vrmlscript:
function set_startTime(value, time) {
	if (!isActive) isActive = TRUE;

	timeSensor.startTime = time;
	timeSensor.stopTime = time + data.cycleInterval;
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
<ROUTE fromNode="TimeSensor" fromField="isActive" toNode="_delay" toField="set_isActive"></ROUTE>
<ROUTE fromNode="Data" fromField="startTime_changed" toNode="_delay" toField="set_startTime"></ROUTE>
<ROUTE fromNode="Data" fromField="stopTime_changed" toNode="_delay" toField="set_stopTime"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "Delay";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "cycleInterval";
field10.accessType = "inputOutput";
field10.type = "SFTime";
field10.value = "1";
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

field field11 = createNode("field");
field11.name = "enabled";
field11.accessType = "inputOutput";
field11.type = "SFBool";
field11.value = "true";
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
field14.name = "isActive";
field14.accessType = "outputOnly";
field14.type = "SFBool";
ProtoInterface9.field[4] = field14;

field field15 = createNode("field");
field15.name = "exitTime";
field15.accessType = "outputOnly";
field15.type = "SFTime";
ProtoInterface9.field[5] = field15;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody16 = createNode("ProtoBody");
ProtoDeclare ProtoDeclare17 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Data" ><ProtoInterface><field name="cycleInterval" accessType="inputOutput" type="SFTime" value="1"></field>
<field name="startTime" accessType="inputOutput" type="SFTime"></field>
<field name="stopTime" accessType="inputOutput" type="SFTime"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare17.name = "Data";
ProtoInterface ProtoInterface18 = createNode("ProtoInterface");
field field19 = createNode("field");
field19.name = "cycleInterval";
field19.accessType = "inputOutput";
field19.type = "SFTime";
field19.value = "1";
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
Script24.DEF = "_delay";
Script24.directOutput = True;
Script24.mustEvaluate = True;
field field25 = createNode("field");
field25.name = "isActive";
field25.accessType = "outputOnly";
field25.type = "SFBool";
Script24.field = new MFNode();

Script24.field[0] = field25;

field field26 = createNode("field");
field26.name = "exitTime";
field26.accessType = "outputOnly";
field26.type = "SFTime";
Script24.field[1] = field26;

field field27 = createNode("field");
field27.name = "set_startTime";
field27.accessType = "inputOnly";
field27.type = "SFTime";
Script24.field[2] = field27;

field field28 = createNode("field");
field28.name = "set_stopTime";
field28.accessType = "inputOnly";
field28.type = "SFTime";
Script24.field[3] = field28;

field field29 = createNode("field");
field29.name = "set_isActive";
field29.accessType = "inputOnly";
field29.type = "SFBool";
Script24.field[4] = field29;

field field30 = createNode("field");
field30.name = "timeSensor";
field30.accessType = "initializeOnly";
field30.type = "SFNode";
TimeSensor TimeSensor31 = createNode("TimeSensor");
TimeSensor31.DEF = "TimeSensor";
TimeSensor31.loop = True;
TimeSensor31.stopTime = 1;
IS IS32 = createNode("IS");
connect connect33 = createNode("connect");
connect33.nodeField = "enabled";
connect33.protoField = "enabled";
IS32.connect = new MFNode();

IS32.connect[0] = connect33;

TimeSensor31.iS = IS32;

field30.children = new MFNode();

field30.children[0] = TimeSensor31;

Script24.field[5] = field30;

field field34 = createNode("field");
field34.name = "data";
field34.accessType = "initializeOnly";
field34.type = "SFNode";
ProtoInstance ProtoInstance35 = createNode("ProtoInstance");
ProtoInstance35.name = "Data";
ProtoInstance35.DEF = "Data";
IS IS36 = createNode("IS");
connect connect37 = createNode("connect");
connect37.nodeField = "cycleInterval";
connect37.protoField = "cycleInterval";
IS36.connect = new MFNode();

IS36.connect[0] = connect37;

connect connect38 = createNode("connect");
connect38.nodeField = "startTime";
connect38.protoField = "startTime";
IS36.connect[1] = connect38;

connect connect39 = createNode("connect");
connect39.nodeField = "stopTime";
connect39.protoField = "stopTime";
IS36.connect[2] = connect39;

ProtoInstance35.iS = IS36;

field34.children = new MFNode();

field34.children[0] = ProtoInstance35;

Script24.field[6] = field34;

IS IS40 = createNode("IS");
connect connect41 = createNode("connect");
connect41.nodeField = "isActive";
connect41.protoField = "isActive";
IS40.connect = new MFNode();

IS40.connect[0] = connect41;

connect connect42 = createNode("connect");
connect42.nodeField = "exitTime";
connect42.protoField = "exitTime";
IS40.connect[1] = connect42;

Script24.iS = IS40;


Script24.setSourceCode(`vrmlscript:\n"+
"function set_startTime(value, time) {\n"+
"	if (!isActive) isActive = TRUE;\n"+
"\n"+
"	timeSensor.startTime = time;\n"+
"	timeSensor.stopTime = time + data.cycleInterval;\n"+
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
ProtoBody16.children[1] = Script24;

ROUTE ROUTE43 = createNode("ROUTE");
ROUTE43.fromNode = "TimeSensor";
ROUTE43.fromField = "isActive";
ROUTE43.toNode = "_delay";
ROUTE43.toField = "set_isActive";
ProtoBody16.children[2] = ROUTE43;

ROUTE ROUTE44 = createNode("ROUTE");
ROUTE44.fromNode = "Data";
ROUTE44.fromField = "startTime_changed";
ROUTE44.toNode = "_delay";
ROUTE44.toField = "set_startTime";
ProtoBody16.children[3] = ROUTE44;

ROUTE ROUTE45 = createNode("ROUTE");
ROUTE45.fromNode = "Data";
ROUTE45.fromField = "stopTime_changed";
ROUTE45.toNode = "_delay";
ROUTE45.toField = "set_stopTime";
ProtoBody16.children[4] = ROUTE45;

ProtoDeclare8.protoBody = ProtoBody16;

children = new MFNode();

children[0] = ProtoDeclare8;

}
