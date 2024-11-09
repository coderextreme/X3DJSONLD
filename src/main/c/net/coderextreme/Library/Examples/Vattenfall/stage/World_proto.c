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
<ProtoDeclare name="World" ><ProtoInterface><field name="enabled" accessType="inputOutput" type="SFBool" value="true"></field>
<field name="startTime" accessType="inputOutput" type="SFTime"></field>
<field name="stopTime" accessType="inputOutput" type="SFTime"></field>
<field name="isActive" accessType="outputOnly" type="SFBool"></field>
<field name="enterTime" accessType="outputOnly" type="SFTime"></field>
<field name="exitTime" accessType="outputOnly" type="SFTime"></field>
<field name="interface" accessType="inputOutput" type="MFNode"></field>
<field name="children" accessType="inputOutput" type="MFNode"></field>
</ProtoInterface>
<ProtoBody><ProtoDeclare name="Data"><ProtoInterface><field name="enabled" accessType="inputOutput" type="SFBool" value="true"></field>
<field name="startTime" accessType="inputOutput" type="SFTime"></field>
<field name="stopTime" accessType="inputOutput" type="SFTime"></field>
<field name="iface" accessType="inputOutput" type="MFNode"></field>
<field name="children" accessType="inputOutput" type="MFNode"></field>
</ProtoInterface>
<ProtoBody><Group><Switch whichChoice="-1"><IS><connect nodeField="children" protoField="iface"></connect>
</IS>
</Switch>
<Group><IS><connect nodeField="children" protoField="children"></connect>
</IS>
</Group>
</Group>
</ProtoBody>
</ProtoDeclare>
<ProtoInstance name="Data" DEF="Data"><IS><connect nodeField="enabled" protoField="enabled"></connect>
<connect nodeField="startTime" protoField="startTime"></connect>
<connect nodeField="stopTime" protoField="stopTime"></connect>
<connect nodeField="iface" protoField="interface"></connect>
<connect nodeField="children" protoField="children"></connect>
</IS>
</ProtoInstance>
<Script DEF="_world" directOutput="true" mustEvaluate="true"><field name="isActive" accessType="outputOnly" type="SFBool"></field>
<field name="enterTime" accessType="outputOnly" type="SFTime"></field>
<field name="exitTime" accessType="outputOnly" type="SFTime"></field>
<field name="set_url" accessType="inputOnly" type="MFString"></field>
<field name="set_startTime" accessType="inputOnly" type="SFTime"></field>
<field name="set_stopTime" accessType="inputOnly" type="SFTime"></field>
<field name="set_startTimeC" accessType="inputOnly" type="SFTime"></field>
<field name="set_stopTimeC" accessType="inputOnly" type="SFTime"></field>
<field name="set_children" accessType="inputOnly" type="MFNode"></field>
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

function set_children(value, time)
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
	iface = scene.interface_changed;
	l = Math.min(data.iface.length, iface.length);
	for (i = 0; i < l; i++) {
		Browser.addRoute(data.iface[i],  'value_changed', iface[i], 'set_value');
		Browser.addRoute(iface[i], 'value_changed', data.iface[i], 'set_value');
	}
}

function initialize()
{
	for (i = 0; i < data.children.length; i++) {
		Browser.addRoute(data.children[i],  'children_changed', self, 'set_children');
	}
	if (data.startTime) data.startTime = 1;
}]]></Script>
<ROUTE fromNode="Data" fromField="startTime_changed" toNode="_world" toField="set_startTime"></ROUTE>
<ROUTE fromNode="Data" fromField="stopTime_changed" toNode="_world" toField="set_stopTime"></ROUTE>
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
field16.name = "interface";
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
<field name="iface" accessType="inputOutput" type="MFNode"></field>
<field name="children" accessType="inputOutput" type="MFNode"></field>
</ProtoInterface>
<ProtoBody><Group><Switch whichChoice="-1"><IS><connect nodeField="children" protoField="iface"></connect>
</IS>
</Switch>
<Group><IS><connect nodeField="children" protoField="children"></connect>
</IS>
</Group>
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
field24.name = "iface";
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
Switch Switch28 = createNode("Switch");
Switch28.whichChoice = -1;
IS IS29 = createNode("IS");
connect connect30 = createNode("connect");
connect30.nodeField = "children";
connect30.protoField = "iface";
IS29.connect = new MFNode();

IS29.connect[0] = connect30;

Switch28.iS = IS29;

Group27.children = new MFNode();

Group27.children[0] = Switch28;

Group Group31 = createNode("Group");
IS IS32 = createNode("IS");
connect connect33 = createNode("connect");
connect33.nodeField = "children";
connect33.protoField = "children";
IS32.connect = new MFNode();

IS32.connect[0] = connect33;

Group31.iS = IS32;

Group27.children[1] = Group31;

ProtoBody26.children = new MFNode();

ProtoBody26.children[0] = Group27;

ProtoDeclare19.protoBody = ProtoBody26;

ProtoBody18.children = new MFNode();

ProtoBody18.children[0] = ProtoDeclare19;

ProtoInstance ProtoInstance34 = createNode("ProtoInstance");
ProtoInstance34.name = "Data";
ProtoInstance34.DEF = "Data";
IS IS35 = createNode("IS");
connect connect36 = createNode("connect");
connect36.nodeField = "enabled";
connect36.protoField = "enabled";
IS35.connect = new MFNode();

IS35.connect[0] = connect36;

connect connect37 = createNode("connect");
connect37.nodeField = "startTime";
connect37.protoField = "startTime";
IS35.connect[1] = connect37;

connect connect38 = createNode("connect");
connect38.nodeField = "stopTime";
connect38.protoField = "stopTime";
IS35.connect[2] = connect38;

connect connect39 = createNode("connect");
connect39.nodeField = "iface";
connect39.protoField = "interface";
IS35.connect[3] = connect39;

connect connect40 = createNode("connect");
connect40.nodeField = "children";
connect40.protoField = "children";
IS35.connect[4] = connect40;

ProtoInstance34.iS = IS35;

ProtoBody18.children[1] = ProtoInstance34;

Script Script41 = createNode("Script");
Script41.DEF = "_world";
Script41.directOutput = True;
Script41.mustEvaluate = True;
field field42 = createNode("field");
field42.name = "isActive";
field42.accessType = "outputOnly";
field42.type = "SFBool";
Script41.field = new MFNode();

Script41.field[0] = field42;

field field43 = createNode("field");
field43.name = "enterTime";
field43.accessType = "outputOnly";
field43.type = "SFTime";
Script41.field[1] = field43;

field field44 = createNode("field");
field44.name = "exitTime";
field44.accessType = "outputOnly";
field44.type = "SFTime";
Script41.field[2] = field44;

field field45 = createNode("field");
field45.name = "set_url";
field45.accessType = "inputOnly";
field45.type = "MFString";
Script41.field[3] = field45;

field field46 = createNode("field");
field46.name = "set_startTime";
field46.accessType = "inputOnly";
field46.type = "SFTime";
Script41.field[4] = field46;

field field47 = createNode("field");
field47.name = "set_stopTime";
field47.accessType = "inputOnly";
field47.type = "SFTime";
Script41.field[5] = field47;

field field48 = createNode("field");
field48.name = "set_startTimeC";
field48.accessType = "inputOnly";
field48.type = "SFTime";
Script41.field[6] = field48;

field field49 = createNode("field");
field49.name = "set_stopTimeC";
field49.accessType = "inputOnly";
field49.type = "SFTime";
Script41.field[7] = field49;

field field50 = createNode("field");
field50.name = "set_children";
field50.accessType = "inputOnly";
field50.type = "MFNode";
Script41.field[8] = field50;

field field51 = createNode("field");
field51.name = "self";
field51.accessType = "initializeOnly";
field51.type = "SFNode";
Script Script52 = createNode("Script");
Script52.USE = "_world";
field51.children = new MFNode();

field51.children[0] = Script52;

Script41.field[9] = field51;

field field53 = createNode("field");
field53.name = "scene";
field53.accessType = "initializeOnly";
field53.type = "SFNode";
Script41.field[10] = field53;

field field54 = createNode("field");
field54.name = "data";
field54.accessType = "initializeOnly";
field54.type = "SFNode";
ProtoInstance ProtoInstance55 = createNode("ProtoInstance");
ProtoInstance55.USE = "Data";
field54.children = new MFNode();

field54.children[0] = ProtoInstance55;

Script41.field[11] = field54;

IS IS56 = createNode("IS");
connect connect57 = createNode("connect");
connect57.nodeField = "isActive";
connect57.protoField = "isActive";
IS56.connect = new MFNode();

IS56.connect[0] = connect57;

connect connect58 = createNode("connect");
connect58.nodeField = "enterTime";
connect58.protoField = "enterTime";
IS56.connect[1] = connect58;

connect connect59 = createNode("connect");
connect59.nodeField = "exitTime";
connect59.protoField = "exitTime";
IS56.connect[2] = connect59;

Script41.iS = IS56;


Script41.setSourceCode(`vrmlscript:\n"+
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
"function set_children(value, time)\n"+
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
"	iface = scene.interface_changed;\n"+
"	l = Math.min(data.iface.length, iface.length);\n"+
"	for (i = 0; i < l; i++) {\n"+
"		Browser.addRoute(data.iface[i],  'value_changed', iface[i], 'set_value');\n"+
"		Browser.addRoute(iface[i], 'value_changed', data.iface[i], 'set_value');\n"+
"	}\n"+
"}\n"+
"\n"+
"function initialize()\n"+
"{\n"+
"	for (i = 0; i < data.children.length; i++) {\n"+
"		Browser.addRoute(data.children[i],  'children_changed', self, 'set_children');\n"+
"	}\n"+
"	if (data.startTime) data.startTime = 1;\n"+
"}`)
ProtoBody18.children[2] = Script41;

ROUTE ROUTE60 = createNode("ROUTE");
ROUTE60.fromNode = "Data";
ROUTE60.fromField = "startTime_changed";
ROUTE60.toNode = "_world";
ROUTE60.toField = "set_startTime";
ProtoBody18.children[3] = ROUTE60;

ROUTE ROUTE61 = createNode("ROUTE");
ROUTE61.fromNode = "Data";
ROUTE61.fromField = "stopTime_changed";
ROUTE61.toNode = "_world";
ROUTE61.toField = "set_stopTime";
ProtoBody18.children[4] = ROUTE61;

ProtoDeclare8.protoBody = ProtoBody18;

children = new MFNode();

children[0] = ProtoDeclare8;

}
