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
meta3.content = "Sat, 25 Apr 2015 12:38:25 GMT";
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
meta6.content = "Sat, 25 Apr 2015 12:38:25 GMT";
head1.meta[4] = meta6;

head = head1;

ProtoDeclare ProtoDeclare8 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Scene" ><ProtoInterface><field name="enabled" accessType="inputOutput" type="SFBool" value="true"></field>
<field name="startTime" accessType="inputOutput" type="SFTime"></field>
<field name="stopTime" accessType="inputOutput" type="SFTime"></field>
<field name="isActive" accessType="outputOnly" type="SFBool"></field>
<field name="enterTime" accessType="outputOnly" type="SFTime"></field>
<field name="exitTime" accessType="outputOnly" type="SFTime"></field>
<field name="interface" accessType="inputOutput" type="MFNode"></field>
</ProtoInterface>
<ProtoBody><ProtoDeclare name="Data"><ProtoInterface><field name="enabled" accessType="inputOutput" type="SFBool" value="true"></field>
<field name="startTime" accessType="inputOutput" type="SFTime"></field>
<field name="stopTime" accessType="inputOutput" type="SFTime"></field>
<field name="children" accessType="inputOutput" type="MFNode"></field>
</ProtoInterface>
<ProtoBody><Switch whichChoice="-1"><IS><connect nodeField="children" protoField="children"></connect>
</IS>
</Switch>
</ProtoBody>
</ProtoDeclare>
<ProtoInstance name="Data" DEF="Data"><IS><connect nodeField="enabled" protoField="enabled"></connect>
<connect nodeField="startTime" protoField="startTime"></connect>
<connect nodeField="stopTime" protoField="stopTime"></connect>
<connect nodeField="children" protoField="interface"></connect>
</IS>
</ProtoInstance>
<Script DEF="_scene" directOutput="true"><field name="isActive" accessType="outputOnly" type="SFBool"></field>
<field name="enterTime" accessType="outputOnly" type="SFTime"></field>
<field name="exitTime" accessType="outputOnly" type="SFTime"></field>
<field name="set_startTime" accessType="inputOnly" type="SFTime"></field>
<field name="set_stopTime" accessType="inputOnly" type="SFTime"></field>
<field name="data" accessType="initializeOnly" type="SFNode"><ProtoInstance USE="Data"></ProtoInstance>
</field>
<field name="self" accessType="initializeOnly" type="SFNode"><Script USE="_scene"></Script>
</field>
<IS><connect nodeField="isActive" protoField="isActive"></connect>
<connect nodeField="enterTime" protoField="enterTime"></connect>
<connect nodeField="exitTime" protoField="exitTime"></connect>
</IS>
<![CDATA[vrmlscript:
function  set_startTime(value, time)
{
	if (!data.enabled) return;
	if (!isActive) {
		isActive = TRUE;
		enterTime = time;
	}
}

function  set_stopTime(value, time)
{
	if (!data.enabled) return;
	if (isActive) {
		exitTime = time;
		isActive = FALSE;
	}
}

function  initialize() { if (data.startTime) self.set_startTime = 1; }]]></Script>
<ROUTE fromNode="Data" fromField="startTime_changed" toNode="_scene" toField="set_startTime"></ROUTE>
<ROUTE fromNode="Data" fromField="stopTime_changed" toNode="_scene" toField="set_stopTime"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "Scene";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "enabled";
field10.accessType = "inputOutput";
field10.type = "SFBool";
field10.value = "true";
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
field13.name = "isActive";
field13.accessType = "outputOnly";
field13.type = "SFBool";
ProtoInterface9.field[3] = field13;

field field14 = createNode("field");
field14.name = "enterTime";
field14.accessType = "outputOnly";
field14.type = "SFTime";
ProtoInterface9.field[4] = field14;

field field15 = createNode("field");
field15.name = "exitTime";
field15.accessType = "outputOnly";
field15.type = "SFTime";
ProtoInterface9.field[5] = field15;

field field16 = createNode("field");
field16.name = "interface";
field16.accessType = "inputOutput";
field16.type = "MFNode";
ProtoInterface9.field[6] = field16;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody17 = createNode("ProtoBody");
ProtoDeclare ProtoDeclare18 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Data" ><ProtoInterface><field name="enabled" accessType="inputOutput" type="SFBool" value="true"></field>
<field name="startTime" accessType="inputOutput" type="SFTime"></field>
<field name="stopTime" accessType="inputOutput" type="SFTime"></field>
<field name="children" accessType="inputOutput" type="MFNode"></field>
</ProtoInterface>
<ProtoBody><Switch whichChoice="-1"><IS><connect nodeField="children" protoField="children"></connect>
</IS>
</Switch>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare18.name = "Data";
ProtoInterface ProtoInterface19 = createNode("ProtoInterface");
field field20 = createNode("field");
field20.name = "enabled";
field20.accessType = "inputOutput";
field20.type = "SFBool";
field20.value = "true";
ProtoInterface19.field = new MFNode();

ProtoInterface19.field[0] = field20;

field field21 = createNode("field");
field21.name = "startTime";
field21.accessType = "inputOutput";
field21.type = "SFTime";
ProtoInterface19.field[1] = field21;

field field22 = createNode("field");
field22.name = "stopTime";
field22.accessType = "inputOutput";
field22.type = "SFTime";
ProtoInterface19.field[2] = field22;

field field23 = createNode("field");
field23.name = "children";
field23.accessType = "inputOutput";
field23.type = "MFNode";
ProtoInterface19.field[3] = field23;

ProtoDeclare18.protoInterface = ProtoInterface19;

ProtoBody ProtoBody24 = createNode("ProtoBody");
Switch Switch25 = createNode("Switch");
Switch25.whichChoice = -1;
IS IS26 = createNode("IS");
connect connect27 = createNode("connect");
connect27.nodeField = "children";
connect27.protoField = "children";
IS26.connect = new MFNode();

IS26.connect[0] = connect27;

Switch25.iS = IS26;

ProtoBody24.children = new MFNode();

ProtoBody24.children[0] = Switch25;

ProtoDeclare18.protoBody = ProtoBody24;

ProtoBody17.children = new MFNode();

ProtoBody17.children[0] = ProtoDeclare18;

ProtoInstance ProtoInstance28 = createNode("ProtoInstance");
ProtoInstance28.name = "Data";
ProtoInstance28.DEF = "Data";
IS IS29 = createNode("IS");
connect connect30 = createNode("connect");
connect30.nodeField = "enabled";
connect30.protoField = "enabled";
IS29.connect = new MFNode();

IS29.connect[0] = connect30;

connect connect31 = createNode("connect");
connect31.nodeField = "startTime";
connect31.protoField = "startTime";
IS29.connect[1] = connect31;

connect connect32 = createNode("connect");
connect32.nodeField = "stopTime";
connect32.protoField = "stopTime";
IS29.connect[2] = connect32;

connect connect33 = createNode("connect");
connect33.nodeField = "children";
connect33.protoField = "interface";
IS29.connect[3] = connect33;

ProtoInstance28.iS = IS29;

ProtoBody17.children[1] = ProtoInstance28;

Script Script34 = createNode("Script");
Script34.DEF = "_scene";
Script34.directOutput = True;
field field35 = createNode("field");
field35.name = "isActive";
field35.accessType = "outputOnly";
field35.type = "SFBool";
Script34.field = new MFNode();

Script34.field[0] = field35;

field field36 = createNode("field");
field36.name = "enterTime";
field36.accessType = "outputOnly";
field36.type = "SFTime";
Script34.field[1] = field36;

field field37 = createNode("field");
field37.name = "exitTime";
field37.accessType = "outputOnly";
field37.type = "SFTime";
Script34.field[2] = field37;

field field38 = createNode("field");
field38.name = "set_startTime";
field38.accessType = "inputOnly";
field38.type = "SFTime";
Script34.field[3] = field38;

field field39 = createNode("field");
field39.name = "set_stopTime";
field39.accessType = "inputOnly";
field39.type = "SFTime";
Script34.field[4] = field39;

field field40 = createNode("field");
field40.name = "data";
field40.accessType = "initializeOnly";
field40.type = "SFNode";
ProtoInstance ProtoInstance41 = createNode("ProtoInstance");
ProtoInstance41.USE = "Data";
field40.children = new MFNode();

field40.children[0] = ProtoInstance41;

Script34.field[5] = field40;

field field42 = createNode("field");
field42.name = "self";
field42.accessType = "initializeOnly";
field42.type = "SFNode";
Script Script43 = createNode("Script");
Script43.USE = "_scene";
field42.children = new MFNode();

field42.children[0] = Script43;

Script34.field[6] = field42;

IS IS44 = createNode("IS");
connect connect45 = createNode("connect");
connect45.nodeField = "isActive";
connect45.protoField = "isActive";
IS44.connect = new MFNode();

IS44.connect[0] = connect45;

connect connect46 = createNode("connect");
connect46.nodeField = "enterTime";
connect46.protoField = "enterTime";
IS44.connect[1] = connect46;

connect connect47 = createNode("connect");
connect47.nodeField = "exitTime";
connect47.protoField = "exitTime";
IS44.connect[2] = connect47;

Script34.iS = IS44;


Script34.setSourceCode(`vrmlscript:\n"+
"function  set_startTime(value, time)\n"+
"{\n"+
"	if (!data.enabled) return;\n"+
"	if (!isActive) {\n"+
"		isActive = TRUE;\n"+
"		enterTime = time;\n"+
"	}\n"+
"}\n"+
"\n"+
"function  set_stopTime(value, time)\n"+
"{\n"+
"	if (!data.enabled) return;\n"+
"	if (isActive) {\n"+
"		exitTime = time;\n"+
"		isActive = FALSE;\n"+
"	}\n"+
"}\n"+
"\n"+
"function  initialize() { if (data.startTime) self.set_startTime = 1; }`)
ProtoBody17.children[2] = Script34;

ROUTE ROUTE48 = createNode("ROUTE");
ROUTE48.fromNode = "Data";
ROUTE48.fromField = "startTime_changed";
ROUTE48.toNode = "_scene";
ROUTE48.toField = "set_startTime";
ProtoBody17.children[3] = ROUTE48;

ROUTE ROUTE49 = createNode("ROUTE");
ROUTE49.fromNode = "Data";
ROUTE49.fromField = "stopTime_changed";
ROUTE49.toNode = "_scene";
ROUTE49.toField = "set_stopTime";
ProtoBody17.children[4] = ROUTE49;

ProtoDeclare8.protoBody = ProtoBody17;

children = new MFNode();

children[0] = ProtoDeclare8;

}
