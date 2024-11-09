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
<ProtoDeclare name="World" ><ProtoInterface><field name="enabled" accessType="inputOutput" type="SFBool" value="true"></field>
<field name="startTime" accessType="inputOutput" type="SFTime"></field>
<field name="stopTime" accessType="inputOutput" type="SFTime"></field>
<field name="isActive" accessType="outputOnly" type="SFBool"></field>
<field name="enterTime" accessType="outputOnly" type="SFTime"></field>
<field name="exitTime" accessType="outputOnly" type="SFTime"></field>
<field name="scene" accessType="inputOutput" type="MFNode"></field>
<field name="children" accessType="inputOutput" type="MFNode"></field>
</ProtoInterface>
<ProtoBody><ProtoDeclare name="Data"><ProtoInterface><field name="enabled" accessType="inputOutput" type="SFBool" value="true"></field>
<field name="startTime" accessType="inputOutput" type="SFTime"></field>
<field name="stopTime" accessType="inputOutput" type="SFTime"></field>
<field name="scene" accessType="inputOutput" type="MFNode"></field>
<field name="children" accessType="inputOutput" type="MFNode"></field>
</ProtoInterface>
<ProtoBody><Group><IS><connect nodeField="children" protoField="children"></connect>
</IS>
</Group>
</ProtoBody>
</ProtoDeclare>
<ProtoInstance name="Data" DEF="Data"><IS><connect nodeField="enabled" protoField="enabled"></connect>
<connect nodeField="startTime" protoField="startTime"></connect>
<connect nodeField="stopTime" protoField="stopTime"></connect>
<connect nodeField="scene" protoField="scene"></connect>
<connect nodeField="children" protoField="children"></connect>
</IS>
</ProtoInstance>
<Script DEF="_world" directOutput="true"><field name="isActive" accessType="outputOnly" type="SFBool"></field>
<field name="enterTime" accessType="outputOnly" type="SFTime"></field>
<field name="exitTime" accessType="outputOnly" type="SFTime"></field>
<field name="set_startTime" accessType="inputOnly" type="SFTime"></field>
<field name="set_stopTime" accessType="inputOnly" type="SFTime"></field>
<field name="set_startTimeC" accessType="inputOnly" type="SFTime"></field>
<field name="set_stopTimeC" accessType="inputOnly" type="SFTime"></field>
<field name="set_scene" accessType="inputOnly" type="MFNode"></field>
<field name="self" accessType="initializeOnly" type="SFNode"><Script USE="_world"></Script>
</field>
<field name="scene" accessType="initializeOnly" type="SFNode"></field>
<field name="data" accessType="initializeOnly" type="SFNode"><ProtoInstance USE="Data"></ProtoInstance>
</field>
<IS><connect nodeField="isActive" protoField="isActive"></connect>
<connect nodeField="enterTime" protoField="enterTime"></connect>
<connect nodeField="exitTime" protoField="exitTime"></connect>
</IS>
<![CDATA[vrmlscript:
function set_startTime(value, time)
{
	if (!data.enabled) return;
	if (!scene) return;
	if (!isActive) {
		scene.set_startTime = time;
	}
}

function set_stopTime(value, time)
{
	if (!data.enabled) return;
	if (!scene) return;
	if (isActive) {
		scene.set_stopTime = time;
	}
}

function set_startTimeC(value, time)
{
	if (!data.enabled) return;
	if (!isActive) {
		isActive = TRUE;
		enterTime = time;
	}
}

function set_stopTimeC(value, time)
{
	if (!data.enabled) return;
	if (isActive) {
		exitTime = time;
		isActive = FALSE;
	}
}

function set_scene(value, time)
{
	found = FALSE;
	for (i = 0; i < value.length && !found; i++) {
		if (value[i].toString() == 'Transform { }' && value[i].children.length && value[i].children[0].toString() == 'Scene { }') {
			found = TRUE;
			scene = value[i].children[0];
		} else if (value[i].toString() == 'Scene { }') {
			found = TRUE;
			scene = value[i];
		} 
	}
	if (!found) return;
	Browser.addRoute(scene, 'enterTime', self, 'set_startTimeC');
	Browser.addRoute(scene, 'exitTime', self, 'set_stopTimeC');
	for (i = 0; i < data.children.length; i++) {
		Browser.addRoute(data.children[i],  'value_changed', scene.children[i], 'set_value');
		Browser.addRoute(scene.children[i], 'value_changed', data.children[i], 'set_value');
	}
}

function initialize()
{
	if (data.scene.length) {
		set_scene(data.scene, 0);
		if (data.startTime) data.startTime = 1;
	}
}]]></Script>
<ROUTE fromNode="Data" fromField="startTime_changed" toNode="_world" toField="set_startTime"></ROUTE>
<ROUTE fromNode="Data" fromField="stopTime_changed" toNode="_world" toField="set_stopTime"></ROUTE>
<ROUTE fromNode="Data" fromField="scene_changed" toNode="_world" toField="set_scene"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "World";
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
field16.name = "scene";
field16.accessType = "inputOutput";
field16.type = "MFNode";
ProtoInterface9.field[6] = field16;

field field17 = createNode("field");
field17.name = "children";
field17.accessType = "inputOutput";
field17.type = "MFNode";
ProtoInterface9.field[7] = field17;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody18 = createNode("ProtoBody");
ProtoDeclare ProtoDeclare19 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Data" ><ProtoInterface><field name="enabled" accessType="inputOutput" type="SFBool" value="true"></field>
<field name="startTime" accessType="inputOutput" type="SFTime"></field>
<field name="stopTime" accessType="inputOutput" type="SFTime"></field>
<field name="scene" accessType="inputOutput" type="MFNode"></field>
<field name="children" accessType="inputOutput" type="MFNode"></field>
</ProtoInterface>
<ProtoBody><Group><IS><connect nodeField="children" protoField="children"></connect>
</IS>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare19.name = "Data";
ProtoInterface ProtoInterface20 = createNode("ProtoInterface");
field field21 = createNode("field");
field21.name = "enabled";
field21.accessType = "inputOutput";
field21.type = "SFBool";
field21.value = "true";
ProtoInterface20.field = new MFNode();

ProtoInterface20.field[0] = field21;

field field22 = createNode("field");
field22.name = "startTime";
field22.accessType = "inputOutput";
field22.type = "SFTime";
ProtoInterface20.field[1] = field22;

field field23 = createNode("field");
field23.name = "stopTime";
field23.accessType = "inputOutput";
field23.type = "SFTime";
ProtoInterface20.field[2] = field23;

field field24 = createNode("field");
field24.name = "scene";
field24.accessType = "inputOutput";
field24.type = "MFNode";
ProtoInterface20.field[3] = field24;

field field25 = createNode("field");
field25.name = "children";
field25.accessType = "inputOutput";
field25.type = "MFNode";
ProtoInterface20.field[4] = field25;

ProtoDeclare19.protoInterface = ProtoInterface20;

ProtoBody ProtoBody26 = createNode("ProtoBody");
Group Group27 = createNode("Group");
IS IS28 = createNode("IS");
connect connect29 = createNode("connect");
connect29.nodeField = "children";
connect29.protoField = "children";
IS28.connect = new MFNode();

IS28.connect[0] = connect29;

Group27.iS = IS28;

ProtoBody26.children = new MFNode();

ProtoBody26.children[0] = Group27;

ProtoDeclare19.protoBody = ProtoBody26;

ProtoBody18.children = new MFNode();

ProtoBody18.children[0] = ProtoDeclare19;

ProtoInstance ProtoInstance30 = createNode("ProtoInstance");
ProtoInstance30.name = "Data";
ProtoInstance30.DEF = "Data";
IS IS31 = createNode("IS");
connect connect32 = createNode("connect");
connect32.nodeField = "enabled";
connect32.protoField = "enabled";
IS31.connect = new MFNode();

IS31.connect[0] = connect32;

connect connect33 = createNode("connect");
connect33.nodeField = "startTime";
connect33.protoField = "startTime";
IS31.connect[1] = connect33;

connect connect34 = createNode("connect");
connect34.nodeField = "stopTime";
connect34.protoField = "stopTime";
IS31.connect[2] = connect34;

connect connect35 = createNode("connect");
connect35.nodeField = "scene";
connect35.protoField = "scene";
IS31.connect[3] = connect35;

connect connect36 = createNode("connect");
connect36.nodeField = "children";
connect36.protoField = "children";
IS31.connect[4] = connect36;

ProtoInstance30.iS = IS31;

ProtoBody18.children[1] = ProtoInstance30;

Script Script37 = createNode("Script");
Script37.DEF = "_world";
Script37.directOutput = True;
field field38 = createNode("field");
field38.name = "isActive";
field38.accessType = "outputOnly";
field38.type = "SFBool";
Script37.field = new MFNode();

Script37.field[0] = field38;

field field39 = createNode("field");
field39.name = "enterTime";
field39.accessType = "outputOnly";
field39.type = "SFTime";
Script37.field[1] = field39;

field field40 = createNode("field");
field40.name = "exitTime";
field40.accessType = "outputOnly";
field40.type = "SFTime";
Script37.field[2] = field40;

field field41 = createNode("field");
field41.name = "set_startTime";
field41.accessType = "inputOnly";
field41.type = "SFTime";
Script37.field[3] = field41;

field field42 = createNode("field");
field42.name = "set_stopTime";
field42.accessType = "inputOnly";
field42.type = "SFTime";
Script37.field[4] = field42;

field field43 = createNode("field");
field43.name = "set_startTimeC";
field43.accessType = "inputOnly";
field43.type = "SFTime";
Script37.field[5] = field43;

field field44 = createNode("field");
field44.name = "set_stopTimeC";
field44.accessType = "inputOnly";
field44.type = "SFTime";
Script37.field[6] = field44;

field field45 = createNode("field");
field45.name = "set_scene";
field45.accessType = "inputOnly";
field45.type = "MFNode";
Script37.field[7] = field45;

field field46 = createNode("field");
field46.name = "self";
field46.accessType = "initializeOnly";
field46.type = "SFNode";
Script Script47 = createNode("Script");
Script47.USE = "_world";
field46.children = new MFNode();

field46.children[0] = Script47;

Script37.field[8] = field46;

field field48 = createNode("field");
field48.name = "scene";
field48.accessType = "initializeOnly";
field48.type = "SFNode";
Script37.field[9] = field48;

field field49 = createNode("field");
field49.name = "data";
field49.accessType = "initializeOnly";
field49.type = "SFNode";
ProtoInstance ProtoInstance50 = createNode("ProtoInstance");
ProtoInstance50.USE = "Data";
field49.children = new MFNode();

field49.children[0] = ProtoInstance50;

Script37.field[10] = field49;

IS IS51 = createNode("IS");
connect connect52 = createNode("connect");
connect52.nodeField = "isActive";
connect52.protoField = "isActive";
IS51.connect = new MFNode();

IS51.connect[0] = connect52;

connect connect53 = createNode("connect");
connect53.nodeField = "enterTime";
connect53.protoField = "enterTime";
IS51.connect[1] = connect53;

connect connect54 = createNode("connect");
connect54.nodeField = "exitTime";
connect54.protoField = "exitTime";
IS51.connect[2] = connect54;

Script37.iS = IS51;


Script37.setSourceCode(`vrmlscript:\n"+
"function set_startTime(value, time)\n"+
"{\n"+
"	if (!data.enabled) return;\n"+
"	if (!scene) return;\n"+
"	if (!isActive) {\n"+
"		scene.set_startTime = time;\n"+
"	}\n"+
"}\n"+
"\n"+
"function set_stopTime(value, time)\n"+
"{\n"+
"	if (!data.enabled) return;\n"+
"	if (!scene) return;\n"+
"	if (isActive) {\n"+
"		scene.set_stopTime = time;\n"+
"	}\n"+
"}\n"+
"\n"+
"function set_startTimeC(value, time)\n"+
"{\n"+
"	if (!data.enabled) return;\n"+
"	if (!isActive) {\n"+
"		isActive = TRUE;\n"+
"		enterTime = time;\n"+
"	}\n"+
"}\n"+
"\n"+
"function set_stopTimeC(value, time)\n"+
"{\n"+
"	if (!data.enabled) return;\n"+
"	if (isActive) {\n"+
"		exitTime = time;\n"+
"		isActive = FALSE;\n"+
"	}\n"+
"}\n"+
"\n"+
"function set_scene(value, time)\n"+
"{\n"+
"	found = FALSE;\n"+
"	for (i = 0; i < value.length && !found; i++) {\n"+
"		if (value[i].toString() == 'Transform { }' && value[i].children.length && value[i].children[0].toString() == 'Scene { }') {\n"+
"			found = TRUE;\n"+
"			scene = value[i].children[0];\n"+
"		} else if (value[i].toString() == 'Scene { }') {\n"+
"			found = TRUE;\n"+
"			scene = value[i];\n"+
"		} \n"+
"	}\n"+
"	if (!found) return;\n"+
"	Browser.addRoute(scene, 'enterTime', self, 'set_startTimeC');\n"+
"	Browser.addRoute(scene, 'exitTime', self, 'set_stopTimeC');\n"+
"	for (i = 0; i < data.children.length; i++) {\n"+
"		Browser.addRoute(data.children[i],  'value_changed', scene.children[i], 'set_value');\n"+
"		Browser.addRoute(scene.children[i], 'value_changed', data.children[i], 'set_value');\n"+
"	}\n"+
"}\n"+
"\n"+
"function initialize()\n"+
"{\n"+
"	if (data.scene.length) {\n"+
"		set_scene(data.scene, 0);\n"+
"		if (data.startTime) data.startTime = 1;\n"+
"	}\n"+
"}`)
ProtoBody18.children[2] = Script37;

ROUTE ROUTE55 = createNode("ROUTE");
ROUTE55.fromNode = "Data";
ROUTE55.fromField = "startTime_changed";
ROUTE55.toNode = "_world";
ROUTE55.toField = "set_startTime";
ProtoBody18.children[3] = ROUTE55;

ROUTE ROUTE56 = createNode("ROUTE");
ROUTE56.fromNode = "Data";
ROUTE56.fromField = "stopTime_changed";
ROUTE56.toNode = "_world";
ROUTE56.toField = "set_stopTime";
ProtoBody18.children[4] = ROUTE56;

ROUTE ROUTE57 = createNode("ROUTE");
ROUTE57.fromNode = "Data";
ROUTE57.fromField = "scene_changed";
ROUTE57.toNode = "_world";
ROUTE57.toField = "set_scene";
ProtoBody18.children[5] = ROUTE57;

ProtoDeclare8.protoBody = ProtoBody18;

children = new MFNode();

children[0] = ProtoDeclare8;

}
