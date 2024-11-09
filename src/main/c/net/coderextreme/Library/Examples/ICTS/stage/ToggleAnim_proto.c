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
meta3.content = "Thu, 23 Apr 2015 06:07:16 GMT";
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
meta6.content = "Thu, 23 Apr 2015 06:07:16 GMT";
head1.meta[4] = meta6;

head = head1;

ProtoDeclare ProtoDeclare8 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ToggleAnim" ><ProtoInterface><field name="direction" accessType="inputOutput" type="SFBool"></field>
<field name="startTime" accessType="inputOnly" type="SFTime"></field>
<field name="forward" accessType="inputOnly" type="SFTime"></field>
<field name="back" accessType="inputOnly" type="SFTime"></field>
<field name="state_changed" accessType="outputOnly" type="SFBool"></field>
<field name="set_isActive" accessType="inputOnly" type="SFBool"></field>
<field name="forwardTimer" accessType="initializeOnly" type="SFNode"><TimeSensor DEF="_1"></TimeSensor>
</field>
<field name="backTimer" accessType="initializeOnly" type="SFNode"><TimeSensor DEF="_2"></TimeSensor>
</field>
</ProtoInterface>
<ProtoBody><ProtoDeclare name="Data"><ProtoInterface><field name="direction" accessType="inputOutput" type="SFBool"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>
<Group><Script DEF="_toggleAnimScript" directOutput="true" mustEvaluate="true"><field name="state_changed" accessType="outputOnly" type="SFBool"></field>
<field name="startTime" accessType="inputOnly" type="SFTime"></field>
<field name="forward" accessType="inputOnly" type="SFTime"></field>
<field name="back" accessType="inputOnly" type="SFTime"></field>
<field name="set_direction" accessType="inputOnly" type="SFBool"></field>
<field name="set_isActive" accessType="inputOnly" type="SFBool"></field>
<field name="direction" accessType="initializeOnly" type="SFBool"></field>
<field name="forwardTimer" accessType="initializeOnly" type="SFNode"></field>
<field name="backTimer" accessType="initializeOnly" type="SFNode"></field>
<field name="isActive" accessType="initializeOnly" type="SFBool"></field>
<field name="next" accessType="initializeOnly" type="SFBool"></field>
<field name="data" accessType="initializeOnly" type="SFNode"><ProtoInstance name="Data" DEF="Data_1"><IS><connect nodeField="direction" protoField="direction"></connect>
</IS>
</ProtoInstance>
</field>
<IS><connect nodeField="state_changed" protoField="state_changed"></connect>
<connect nodeField="startTime" protoField="startTime"></connect>
<connect nodeField="forward" protoField="forward"></connect>
<connect nodeField="back" protoField="back"></connect>
<connect nodeField="set_isActive" protoField="set_isActive"></connect>
<connect nodeField="forwardTimer" protoField="forwardTimer"></connect>
<connect nodeField="backTimer" protoField="backTimer"></connect>
</IS>
<![CDATA[vrmlscript:
function initialize()
{
	forwardTimer.stopTime = 0;
	backTimer.stopTime    = 0;
	direction = data.direction;
	state_changed = direction;
}

function set_direction(value, time)
{
	if (value == direction) return;
	direction = value;
	if (direction == state_changed) {
		next = TRUE;
	} else {
		next = FALSE;
		if (direction) {
			forwardTimer.enabled   = TRUE;
			forwardTimer.startTime = time;			
		} else {
			backTimer.enabled	= TRUE;
			backTimer.startTime = time;
		}
	}
}

function startTime(value, time)
{
	if (!next) set_direction(!direction, time);
}

function forward(value, time)
{
	set_direction(TRUE, time);
}

function back(value, time)
{
	 set_direction(FALSE, time);
}

function set_isActive(value, time)
{
	isActive = value;
	if (!isActive) {
		if (next) {
			direction = !direction;
			state_changed = direction;
			set_direction(!direction, time);
		} else {
			state_changed = direction;
			forwardTimer.enabled = FALSE;
			backTimer.enabled	 = FALSE;			
		}
	}
}]]></Script>
</Group>
<ROUTE fromNode="Data_1" fromField="direction_changed" toNode="_toggleAnimScript" toField="set_direction"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "ToggleAnim";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "direction";
field10.accessType = "inputOutput";
field10.type = "SFBool";
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

field field11 = createNode("field");
field11.name = "startTime";
field11.accessType = "inputOnly";
field11.type = "SFTime";
ProtoInterface9.field[1] = field11;

field field12 = createNode("field");
field12.name = "forward";
field12.accessType = "inputOnly";
field12.type = "SFTime";
ProtoInterface9.field[2] = field12;

field field13 = createNode("field");
field13.name = "back";
field13.accessType = "inputOnly";
field13.type = "SFTime";
ProtoInterface9.field[3] = field13;

field field14 = createNode("field");
field14.name = "state_changed";
field14.accessType = "outputOnly";
field14.type = "SFBool";
ProtoInterface9.field[4] = field14;

field field15 = createNode("field");
field15.name = "set_isActive";
field15.accessType = "inputOnly";
field15.type = "SFBool";
ProtoInterface9.field[5] = field15;

field field16 = createNode("field");
field16.name = "forwardTimer";
field16.accessType = "initializeOnly";
field16.type = "SFNode";
TimeSensor TimeSensor17 = createNode("TimeSensor");
TimeSensor17.DEF = "_1";
field16.children = new MFNode();

field16.children[0] = TimeSensor17;

ProtoInterface9.field[6] = field16;

field field18 = createNode("field");
field18.name = "backTimer";
field18.accessType = "initializeOnly";
field18.type = "SFNode";
TimeSensor TimeSensor19 = createNode("TimeSensor");
TimeSensor19.DEF = "_2";
field18.children = new MFNode();

field18.children[0] = TimeSensor19;

ProtoInterface9.field[7] = field18;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody20 = createNode("ProtoBody");
ProtoDeclare ProtoDeclare21 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Data" ><ProtoInterface><field name="direction" accessType="inputOutput" type="SFBool"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare21.name = "Data";
ProtoInterface ProtoInterface22 = createNode("ProtoInterface");
field field23 = createNode("field");
field23.name = "direction";
field23.accessType = "inputOutput";
field23.type = "SFBool";
ProtoInterface22.field = new MFNode();

ProtoInterface22.field[0] = field23;

ProtoDeclare21.protoInterface = ProtoInterface22;

ProtoBody ProtoBody24 = createNode("ProtoBody");
Group Group25 = createNode("Group");
ProtoBody24.children = new MFNode();

ProtoBody24.children[0] = Group25;

ProtoDeclare21.protoBody = ProtoBody24;

ProtoBody20.children = new MFNode();

ProtoBody20.children[0] = ProtoDeclare21;

Group Group26 = createNode("Group");
Script Script27 = createNode("Script");
Script27.DEF = "_toggleAnimScript";
Script27.directOutput = True;
Script27.mustEvaluate = True;
field field28 = createNode("field");
field28.name = "state_changed";
field28.accessType = "outputOnly";
field28.type = "SFBool";
Script27.field = new MFNode();

Script27.field[0] = field28;

field field29 = createNode("field");
field29.name = "startTime";
field29.accessType = "inputOnly";
field29.type = "SFTime";
Script27.field[1] = field29;

field field30 = createNode("field");
field30.name = "forward";
field30.accessType = "inputOnly";
field30.type = "SFTime";
Script27.field[2] = field30;

field field31 = createNode("field");
field31.name = "back";
field31.accessType = "inputOnly";
field31.type = "SFTime";
Script27.field[3] = field31;

field field32 = createNode("field");
field32.name = "set_direction";
field32.accessType = "inputOnly";
field32.type = "SFBool";
Script27.field[4] = field32;

field field33 = createNode("field");
field33.name = "set_isActive";
field33.accessType = "inputOnly";
field33.type = "SFBool";
Script27.field[5] = field33;

field field34 = createNode("field");
field34.name = "direction";
field34.accessType = "initializeOnly";
field34.type = "SFBool";
Script27.field[6] = field34;

field field35 = createNode("field");
field35.name = "forwardTimer";
field35.accessType = "initializeOnly";
field35.type = "SFNode";
Script27.field[7] = field35;

field field36 = createNode("field");
field36.name = "backTimer";
field36.accessType = "initializeOnly";
field36.type = "SFNode";
Script27.field[8] = field36;

field field37 = createNode("field");
field37.name = "isActive";
field37.accessType = "initializeOnly";
field37.type = "SFBool";
Script27.field[9] = field37;

field field38 = createNode("field");
field38.name = "next";
field38.accessType = "initializeOnly";
field38.type = "SFBool";
Script27.field[10] = field38;

field field39 = createNode("field");
field39.name = "data";
field39.accessType = "initializeOnly";
field39.type = "SFNode";
ProtoInstance ProtoInstance40 = createNode("ProtoInstance");
ProtoInstance40.name = "Data";
ProtoInstance40.DEF = "Data_1";
IS IS41 = createNode("IS");
connect connect42 = createNode("connect");
connect42.nodeField = "direction";
connect42.protoField = "direction";
IS41.connect = new MFNode();

IS41.connect[0] = connect42;

ProtoInstance40.iS = IS41;

field39.children = new MFNode();

field39.children[0] = ProtoInstance40;

Script27.field[11] = field39;

IS IS43 = createNode("IS");
connect connect44 = createNode("connect");
connect44.nodeField = "state_changed";
connect44.protoField = "state_changed";
IS43.connect = new MFNode();

IS43.connect[0] = connect44;

connect connect45 = createNode("connect");
connect45.nodeField = "startTime";
connect45.protoField = "startTime";
IS43.connect[1] = connect45;

connect connect46 = createNode("connect");
connect46.nodeField = "forward";
connect46.protoField = "forward";
IS43.connect[2] = connect46;

connect connect47 = createNode("connect");
connect47.nodeField = "back";
connect47.protoField = "back";
IS43.connect[3] = connect47;

connect connect48 = createNode("connect");
connect48.nodeField = "set_isActive";
connect48.protoField = "set_isActive";
IS43.connect[4] = connect48;

connect connect49 = createNode("connect");
connect49.nodeField = "forwardTimer";
connect49.protoField = "forwardTimer";
IS43.connect[5] = connect49;

connect connect50 = createNode("connect");
connect50.nodeField = "backTimer";
connect50.protoField = "backTimer";
IS43.connect[6] = connect50;

Script27.iS = IS43;


Script27.setSourceCode(`vrmlscript:\n"+
"function initialize()\n"+
"{\n"+
"	forwardTimer.stopTime = 0;\n"+
"	backTimer.stopTime    = 0;\n"+
"	direction = data.direction;\n"+
"	state_changed = direction;\n"+
"}\n"+
"\n"+
"function set_direction(value, time)\n"+
"{\n"+
"	if (value == direction) return;\n"+
"	direction = value;\n"+
"	if (direction == state_changed) {\n"+
"		next = TRUE;\n"+
"	} else {\n"+
"		next = FALSE;\n"+
"		if (direction) {\n"+
"			forwardTimer.enabled   = TRUE;\n"+
"			forwardTimer.startTime = time;			\n"+
"		} else {\n"+
"			backTimer.enabled	= TRUE;\n"+
"			backTimer.startTime = time;\n"+
"		}\n"+
"	}\n"+
"}\n"+
"\n"+
"function startTime(value, time)\n"+
"{\n"+
"	if (!next) set_direction(!direction, time);\n"+
"}\n"+
"\n"+
"function forward(value, time)\n"+
"{\n"+
"	set_direction(TRUE, time);\n"+
"}\n"+
"\n"+
"function back(value, time)\n"+
"{\n"+
"	 set_direction(FALSE, time);\n"+
"}\n"+
"\n"+
"function set_isActive(value, time)\n"+
"{\n"+
"	isActive = value;\n"+
"	if (!isActive) {\n"+
"		if (next) {\n"+
"			direction = !direction;\n"+
"			state_changed = direction;\n"+
"			set_direction(!direction, time);\n"+
"		} else {\n"+
"			state_changed = direction;\n"+
"			forwardTimer.enabled = FALSE;\n"+
"			backTimer.enabled	 = FALSE;			\n"+
"		}\n"+
"	}\n"+
"}`)
Group26.children = new MFNode();

Group26.children[0] = Script27;

ProtoBody20.children[1] = Group26;

ROUTE ROUTE51 = createNode("ROUTE");
ROUTE51.fromNode = "Data_1";
ROUTE51.fromField = "direction_changed";
ROUTE51.toNode = "_toggleAnimScript";
ROUTE51.toField = "set_direction";
ProtoBody20.children[2] = ROUTE51;

ProtoDeclare8.protoBody = ProtoBody20;

children = new MFNode();

children[0] = ProtoDeclare8;

}
