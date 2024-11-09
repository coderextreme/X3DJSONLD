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
meta3.content = "Sat, 25 Apr 2015 12:38:17 GMT";
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
meta6.content = "Sat, 25 Apr 2015 12:38:17 GMT";
head1.meta[4] = meta6;

head = head1;

ProtoDeclare ProtoDeclare8 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Button" ><ProtoInterface><field name="enabled" accessType="inputOutput" type="SFBool" value="true"></field>
<field name="isActive" accessType="outputOnly" type="SFBool"></field>
<field name="isOver" accessType="outputOnly" type="SFBool"></field>
<field name="isOut" accessType="outputOnly" type="SFBool"></field>
<field name="hitNormal_changed" accessType="outputOnly" type="SFVec3f"></field>
<field name="hitPoint_changed" accessType="outputOnly" type="SFVec3f"></field>
<field name="hitTexCoord_changed" accessType="outputOnly" type="SFVec2f"></field>
<field name="touchTime" accessType="outputOnly" type="SFTime"></field>
<field name="downTime" accessType="outputOnly" type="SFTime"></field>
<field name="overTime" accessType="outputOnly" type="SFTime"></field>
<field name="outTime" accessType="outputOnly" type="SFTime"></field>
<field name="whichChoice" accessType="inputOutput" type="SFInt32"></field>
<field name="choice" accessType="inputOutput" type="MFNode"><Transform DEF="_1"></Transform>
<Transform DEF="_2"></Transform>
<Transform DEF="_3"></Transform>
<Transform DEF="_4"></Transform>
</field>
</ProtoInterface>
<ProtoBody><Group><TouchSensor DEF="touch_1"><IS><connect nodeField="enabled" protoField="enabled"></connect>
<connect nodeField="hitTexCoord_changed" protoField="hitTexCoord_changed"></connect>
<connect nodeField="hitNormal_changed" protoField="hitNormal_changed"></connect>
<connect nodeField="hitPoint_changed" protoField="hitPoint_changed"></connect>
<connect nodeField="isOver" protoField="isOver"></connect>
<connect nodeField="isActive" protoField="isActive"></connect>
<connect nodeField="touchTime" protoField="touchTime"></connect>
</IS>
</TouchSensor>
<Switch DEF="Button_1" whichChoice="-1"><IS><connect nodeField="whichChoice" protoField="whichChoice"></connect>
<connect nodeField="children" protoField="choice"></connect>
</IS>
</Switch>
<Script DEF="_button_1" directOutput="true"><field name="isOut" accessType="outputOnly" type="SFBool"></field>
<field name="overTime" accessType="outputOnly" type="SFTime"></field>
<field name="outTime" accessType="outputOnly" type="SFTime"></field>
<field name="downTime" accessType="outputOnly" type="SFTime"></field>
<field name="set_enabled" accessType="inputOnly" type="SFBool"></field>
<field name="set_isOver" accessType="inputOnly" type="SFBool"></field>
<field name="set_isActive" accessType="inputOnly" type="SFBool"></field>
<field name="set_choice" accessType="inputOnly" type="MFNode"></field>
<field name="isOver" accessType="initializeOnly" type="SFBool"></field>
<field name="isActive" accessType="initializeOnly" type="SFBool"></field>
<field name="button" accessType="initializeOnly" type="SFNode"><Switch USE="Button_1"></Switch>
</field>
<field name="outChildren" accessType="initializeOnly" type="SFInt32"></field>
<field name="isActiveChildren" accessType="initializeOnly" type="SFInt32" value="1"></field>
<field name="isOverChildren" accessType="initializeOnly" type="SFInt32" value="2"></field>
<IS><connect nodeField="isOut" protoField="isOut"></connect>
<connect nodeField="overTime" protoField="overTime"></connect>
<connect nodeField="outTime" protoField="outTime"></connect>
<connect nodeField="downTime" protoField="downTime"></connect>
</IS>
<![CDATA[vrmlscript:
function choose() {
	if (isActive) { button.whichChoice = isOver ? isActiveChildren : outChildren; }
	else if (isOver) { button.whichChoice = isOverChildren; }
	else { button.whichChoice = outChildren; }
}
function set_enabled(value, time) { if (value) button.whichChoice = outChildren; } 
function set_isOver(value, time) {
	isOver = value;
	if(isOver) overTime = time;
	else  outTime = time;
	choose();
}
function set_isActive(value, time) {
	isActive = value;
	if (isActive) { downTime = time; choose(); }
	else choose();
}
function set_choice(value, time) {
	outChildren = value.length > 0 ? 0 : -1;
	isOverChildren = value.length > 1 ? 1 : (value.length > 0 ? 0 : -1);
	isActiveChildren = value.length > 2 ? 2 : (value.length > 1 ? 1 : (value.length > 0 ? 0 : -1));
	choose();
}
function initialize() {
	if (Browser.getName() == "Cosmo Player" && Browser.getVersion() == 1.1)
	   return;
	set_choice(button.choice, 0);
}
function eventsProcessed() {
	out = !(isOver || isActive);
	if (isOut != out) isOut = out;
}]]></Script>
</Group>
<ROUTE fromNode="touch_1" fromField="enabled_changed" toNode="_button_1" toField="set_enabled"></ROUTE>
<ROUTE fromNode="touch_1" fromField="isOver" toNode="_button_1" toField="set_isOver"></ROUTE>
<ROUTE fromNode="touch_1" fromField="isActive" toNode="_button_1" toField="set_isActive"></ROUTE>
<ROUTE fromNode="Button_1" fromField="children_changed" toNode="_button_1" toField="set_choice"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "Button";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "enabled";
field10.accessType = "inputOutput";
field10.type = "SFBool";
field10.value = "true";
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

field field11 = createNode("field");
field11.name = "isActive";
field11.accessType = "outputOnly";
field11.type = "SFBool";
ProtoInterface9.field[1] = field11;

field field12 = createNode("field");
field12.name = "isOver";
field12.accessType = "outputOnly";
field12.type = "SFBool";
ProtoInterface9.field[2] = field12;

field field13 = createNode("field");
field13.name = "isOut";
field13.accessType = "outputOnly";
field13.type = "SFBool";
ProtoInterface9.field[3] = field13;

field field14 = createNode("field");
field14.name = "hitNormal_changed";
field14.accessType = "outputOnly";
field14.type = "SFVec3f";
ProtoInterface9.field[4] = field14;

field field15 = createNode("field");
field15.name = "hitPoint_changed";
field15.accessType = "outputOnly";
field15.type = "SFVec3f";
ProtoInterface9.field[5] = field15;

field field16 = createNode("field");
field16.name = "hitTexCoord_changed";
field16.accessType = "outputOnly";
field16.type = "SFVec2f";
ProtoInterface9.field[6] = field16;

field field17 = createNode("field");
field17.name = "touchTime";
field17.accessType = "outputOnly";
field17.type = "SFTime";
ProtoInterface9.field[7] = field17;

field field18 = createNode("field");
field18.name = "downTime";
field18.accessType = "outputOnly";
field18.type = "SFTime";
ProtoInterface9.field[8] = field18;

field field19 = createNode("field");
field19.name = "overTime";
field19.accessType = "outputOnly";
field19.type = "SFTime";
ProtoInterface9.field[9] = field19;

field field20 = createNode("field");
field20.name = "outTime";
field20.accessType = "outputOnly";
field20.type = "SFTime";
ProtoInterface9.field[10] = field20;

field field21 = createNode("field");
field21.name = "whichChoice";
field21.accessType = "inputOutput";
field21.type = "SFInt32";
ProtoInterface9.field[11] = field21;

field field22 = createNode("field");
field22.name = "choice";
field22.accessType = "inputOutput";
field22.type = "MFNode";
Transform Transform23 = createNode("Transform");
Transform23.DEF = "_1";
field22.children = new MFNode();

field22.children[0] = Transform23;

Transform Transform24 = createNode("Transform");
Transform24.DEF = "_2";
field22.children[1] = Transform24;

Transform Transform25 = createNode("Transform");
Transform25.DEF = "_3";
field22.children[2] = Transform25;

Transform Transform26 = createNode("Transform");
Transform26.DEF = "_4";
field22.children[3] = Transform26;

ProtoInterface9.field[12] = field22;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody27 = createNode("ProtoBody");
Group Group28 = createNode("Group");
TouchSensor TouchSensor29 = createNode("TouchSensor");
TouchSensor29.DEF = "touch_1";
IS IS30 = createNode("IS");
connect connect31 = createNode("connect");
connect31.nodeField = "enabled";
connect31.protoField = "enabled";
IS30.connect = new MFNode();

IS30.connect[0] = connect31;

connect connect32 = createNode("connect");
connect32.nodeField = "hitTexCoord_changed";
connect32.protoField = "hitTexCoord_changed";
IS30.connect[1] = connect32;

connect connect33 = createNode("connect");
connect33.nodeField = "hitNormal_changed";
connect33.protoField = "hitNormal_changed";
IS30.connect[2] = connect33;

connect connect34 = createNode("connect");
connect34.nodeField = "hitPoint_changed";
connect34.protoField = "hitPoint_changed";
IS30.connect[3] = connect34;

connect connect35 = createNode("connect");
connect35.nodeField = "isOver";
connect35.protoField = "isOver";
IS30.connect[4] = connect35;

connect connect36 = createNode("connect");
connect36.nodeField = "isActive";
connect36.protoField = "isActive";
IS30.connect[5] = connect36;

connect connect37 = createNode("connect");
connect37.nodeField = "touchTime";
connect37.protoField = "touchTime";
IS30.connect[6] = connect37;

TouchSensor29.iS = IS30;

Group28.children = new MFNode();

Group28.children[0] = TouchSensor29;

Switch Switch38 = createNode("Switch");
Switch38.DEF = "Button_1";
Switch38.whichChoice = -1;
IS IS39 = createNode("IS");
connect connect40 = createNode("connect");
connect40.nodeField = "whichChoice";
connect40.protoField = "whichChoice";
IS39.connect = new MFNode();

IS39.connect[0] = connect40;

connect connect41 = createNode("connect");
connect41.nodeField = "children";
connect41.protoField = "choice";
IS39.connect[1] = connect41;

Switch38.iS = IS39;

Group28.children[1] = Switch38;

Script Script42 = createNode("Script");
Script42.DEF = "_button_1";
Script42.directOutput = True;
field field43 = createNode("field");
field43.name = "isOut";
field43.accessType = "outputOnly";
field43.type = "SFBool";
Script42.field = new MFNode();

Script42.field[0] = field43;

field field44 = createNode("field");
field44.name = "overTime";
field44.accessType = "outputOnly";
field44.type = "SFTime";
Script42.field[1] = field44;

field field45 = createNode("field");
field45.name = "outTime";
field45.accessType = "outputOnly";
field45.type = "SFTime";
Script42.field[2] = field45;

field field46 = createNode("field");
field46.name = "downTime";
field46.accessType = "outputOnly";
field46.type = "SFTime";
Script42.field[3] = field46;

field field47 = createNode("field");
field47.name = "set_enabled";
field47.accessType = "inputOnly";
field47.type = "SFBool";
Script42.field[4] = field47;

field field48 = createNode("field");
field48.name = "set_isOver";
field48.accessType = "inputOnly";
field48.type = "SFBool";
Script42.field[5] = field48;

field field49 = createNode("field");
field49.name = "set_isActive";
field49.accessType = "inputOnly";
field49.type = "SFBool";
Script42.field[6] = field49;

field field50 = createNode("field");
field50.name = "set_choice";
field50.accessType = "inputOnly";
field50.type = "MFNode";
Script42.field[7] = field50;

field field51 = createNode("field");
field51.name = "isOver";
field51.accessType = "initializeOnly";
field51.type = "SFBool";
Script42.field[8] = field51;

field field52 = createNode("field");
field52.name = "isActive";
field52.accessType = "initializeOnly";
field52.type = "SFBool";
Script42.field[9] = field52;

field field53 = createNode("field");
field53.name = "button";
field53.accessType = "initializeOnly";
field53.type = "SFNode";
Switch Switch54 = createNode("Switch");
Switch54.USE = "Button_1";
field53.children = new MFNode();

field53.children[0] = Switch54;

Script42.field[10] = field53;

field field55 = createNode("field");
field55.name = "outChildren";
field55.accessType = "initializeOnly";
field55.type = "SFInt32";
Script42.field[11] = field55;

field field56 = createNode("field");
field56.name = "isActiveChildren";
field56.accessType = "initializeOnly";
field56.type = "SFInt32";
field56.value = "1";
Script42.field[12] = field56;

field field57 = createNode("field");
field57.name = "isOverChildren";
field57.accessType = "initializeOnly";
field57.type = "SFInt32";
field57.value = "2";
Script42.field[13] = field57;

IS IS58 = createNode("IS");
connect connect59 = createNode("connect");
connect59.nodeField = "isOut";
connect59.protoField = "isOut";
IS58.connect = new MFNode();

IS58.connect[0] = connect59;

connect connect60 = createNode("connect");
connect60.nodeField = "overTime";
connect60.protoField = "overTime";
IS58.connect[1] = connect60;

connect connect61 = createNode("connect");
connect61.nodeField = "outTime";
connect61.protoField = "outTime";
IS58.connect[2] = connect61;

connect connect62 = createNode("connect");
connect62.nodeField = "downTime";
connect62.protoField = "downTime";
IS58.connect[3] = connect62;

Script42.iS = IS58;


Script42.setSourceCode(`vrmlscript:\n"+
"function choose() {\n"+
"	if (isActive) { button.whichChoice = isOver ? isActiveChildren : outChildren; }\n"+
"	else if (isOver) { button.whichChoice = isOverChildren; }\n"+
"	else { button.whichChoice = outChildren; }\n"+
"}\n"+
"function set_enabled(value, time) { if (value) button.whichChoice = outChildren; } \n"+
"function set_isOver(value, time) {\n"+
"	isOver = value;\n"+
"	if(isOver) overTime = time;\n"+
"	else  outTime = time;\n"+
"	choose();\n"+
"}\n"+
"function set_isActive(value, time) {\n"+
"	isActive = value;\n"+
"	if (isActive) { downTime = time; choose(); }\n"+
"	else choose();\n"+
"}\n"+
"function set_choice(value, time) {\n"+
"	outChildren = value.length > 0 ? 0 : -1;\n"+
"	isOverChildren = value.length > 1 ? 1 : (value.length > 0 ? 0 : -1);\n"+
"	isActiveChildren = value.length > 2 ? 2 : (value.length > 1 ? 1 : (value.length > 0 ? 0 : -1));\n"+
"	choose();\n"+
"}\n"+
"function initialize() {\n"+
"	if (Browser.getName() == \"Cosmo Player\" && Browser.getVersion() == 1.1)\n"+
"	   return;\n"+
"	set_choice(button.choice, 0);\n"+
"}\n"+
"function eventsProcessed() {\n"+
"	out = !(isOver || isActive);\n"+
"	if (isOut != out) isOut = out;\n"+
"}`)
Group28.children[2] = Script42;

ProtoBody27.children = new MFNode();

ProtoBody27.children[0] = Group28;

ROUTE ROUTE63 = createNode("ROUTE");
ROUTE63.fromNode = "touch_1";
ROUTE63.fromField = "enabled_changed";
ROUTE63.toNode = "_button_1";
ROUTE63.toField = "set_enabled";
ProtoBody27.children[1] = ROUTE63;

ROUTE ROUTE64 = createNode("ROUTE");
ROUTE64.fromNode = "touch_1";
ROUTE64.fromField = "isOver";
ROUTE64.toNode = "_button_1";
ROUTE64.toField = "set_isOver";
ProtoBody27.children[2] = ROUTE64;

ROUTE ROUTE65 = createNode("ROUTE");
ROUTE65.fromNode = "touch_1";
ROUTE65.fromField = "isActive";
ROUTE65.toNode = "_button_1";
ROUTE65.toField = "set_isActive";
ProtoBody27.children[3] = ROUTE65;

ROUTE ROUTE66 = createNode("ROUTE");
ROUTE66.fromNode = "Button_1";
ROUTE66.fromField = "children_changed";
ROUTE66.toNode = "_button_1";
ROUTE66.toField = "set_choice";
ProtoBody27.children[4] = ROUTE66;

ProtoDeclare8.protoBody = ProtoBody27;

children = new MFNode();

children[0] = ProtoDeclare8;

}
