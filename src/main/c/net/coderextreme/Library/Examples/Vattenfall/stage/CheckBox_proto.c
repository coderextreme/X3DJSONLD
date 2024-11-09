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
<ProtoDeclare name="CheckBox" ><ProtoInterface><field name="enabled" accessType="inputOutput" type="SFBool" value="true"></field>
<field name="on" accessType="inputOutput" type="SFBool"></field>
<field name="touchTime" accessType="inputOutput" type="SFTime"></field>
<field name="isActive" accessType="outputOnly" type="SFBool"></field>
<field name="whichChoice" accessType="inputOutput" type="SFInt32"></field>
<field name="choice" accessType="inputOutput" type="MFNode"></field>
</ProtoInterface>
<ProtoBody><ProtoDeclare name="Data"><ProtoInterface><field name="enabled" accessType="inputOutput" type="SFBool" value="true"></field>
<field name="on" accessType="inputOutput" type="SFBool"></field>
<field name="touchTime" accessType="inputOutput" type="SFTime"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>
<Switch DEF="Switch" whichChoice="-1"><IS><connect nodeField="whichChoice" protoField="whichChoice"></connect>
<connect nodeField="children" protoField="choice"></connect>
</IS>
</Switch>
<Script DEF="_checkBox" directOutput="true"><field name="isActive" accessType="outputOnly" type="SFBool"></field>
<field name="set_on" accessType="inputOnly" type="SFBool"></field>
<field name="set_touchTime" accessType="inputOnly" type="SFTime"></field>
<field name="set_whichChoice" accessType="inputOnly" type="SFInt32"></field>
<field name="self" accessType="initializeOnly" type="SFNode"><Script USE="_checkBox"></Script>
</field>
<field name="button" accessType="initializeOnly" type="SFNode"><Switch USE="Switch"></Switch>
</field>
<field name="data" accessType="initializeOnly" type="SFNode"><ProtoInstance name="Data" DEF="Data"><IS><connect nodeField="enabled" protoField="enabled"></connect>
<connect nodeField="on" protoField="on"></connect>
<connect nodeField="touchTime" protoField="touchTime"></connect>
</IS>
</ProtoInstance>
</field>
<IS><connect nodeField="isActive" protoField="isActive"></connect>
</IS>
<![CDATA[vrmlscript:
function set_touchTime (value, time) {
	if (data.enabled) button.whichChoice = !isActive;
}
function set_on (value, time) {
	if (data.enabled && value != button.whichChoice) button.whichChoice = value;
}
function set_whichChoice (value, time) {
	if (data.enabled) isActive = value;
}
function initialize() {	
	if (data.enabled) set_on(data.on, 0);
}]]></Script>
<ROUTE fromNode="Switch" fromField="whichChoice_changed" toNode="_checkBox" toField="set_whichChoice"></ROUTE>
<ROUTE fromNode="Data" fromField="on_changed" toNode="_checkBox" toField="set_on"></ROUTE>
<ROUTE fromNode="Data" fromField="touchTime_changed" toNode="_checkBox" toField="set_touchTime"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "CheckBox";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "enabled";
field10.accessType = "inputOutput";
field10.type = "SFBool";
field10.value = "true";
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

field field11 = createNode("field");
field11.name = "on";
field11.accessType = "inputOutput";
field11.type = "SFBool";
ProtoInterface9.field[1] = field11;

field field12 = createNode("field");
field12.name = "touchTime";
field12.accessType = "inputOutput";
field12.type = "SFTime";
ProtoInterface9.field[2] = field12;

field field13 = createNode("field");
field13.name = "isActive";
field13.accessType = "outputOnly";
field13.type = "SFBool";
ProtoInterface9.field[3] = field13;

field field14 = createNode("field");
field14.name = "whichChoice";
field14.accessType = "inputOutput";
field14.type = "SFInt32";
ProtoInterface9.field[4] = field14;

field field15 = createNode("field");
field15.name = "choice";
field15.accessType = "inputOutput";
field15.type = "MFNode";
ProtoInterface9.field[5] = field15;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody16 = createNode("ProtoBody");
ProtoDeclare ProtoDeclare17 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Data" ><ProtoInterface><field name="enabled" accessType="inputOutput" type="SFBool" value="true"></field>
<field name="on" accessType="inputOutput" type="SFBool"></field>
<field name="touchTime" accessType="inputOutput" type="SFTime"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare17.name = "Data";
ProtoInterface ProtoInterface18 = createNode("ProtoInterface");
field field19 = createNode("field");
field19.name = "enabled";
field19.accessType = "inputOutput";
field19.type = "SFBool";
field19.value = "true";
ProtoInterface18.field = new MFNode();

ProtoInterface18.field[0] = field19;

field field20 = createNode("field");
field20.name = "on";
field20.accessType = "inputOutput";
field20.type = "SFBool";
ProtoInterface18.field[1] = field20;

field field21 = createNode("field");
field21.name = "touchTime";
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

Switch Switch24 = createNode("Switch");
Switch24.DEF = "Switch";
Switch24.whichChoice = -1;
IS IS25 = createNode("IS");
connect connect26 = createNode("connect");
connect26.nodeField = "whichChoice";
connect26.protoField = "whichChoice";
IS25.connect = new MFNode();

IS25.connect[0] = connect26;

connect connect27 = createNode("connect");
connect27.nodeField = "children";
connect27.protoField = "choice";
IS25.connect[1] = connect27;

Switch24.iS = IS25;

ProtoBody16.children[1] = Switch24;

Script Script28 = createNode("Script");
Script28.DEF = "_checkBox";
Script28.directOutput = True;
field field29 = createNode("field");
field29.name = "isActive";
field29.accessType = "outputOnly";
field29.type = "SFBool";
Script28.field = new MFNode();

Script28.field[0] = field29;

field field30 = createNode("field");
field30.name = "set_on";
field30.accessType = "inputOnly";
field30.type = "SFBool";
Script28.field[1] = field30;

field field31 = createNode("field");
field31.name = "set_touchTime";
field31.accessType = "inputOnly";
field31.type = "SFTime";
Script28.field[2] = field31;

field field32 = createNode("field");
field32.name = "set_whichChoice";
field32.accessType = "inputOnly";
field32.type = "SFInt32";
Script28.field[3] = field32;

field field33 = createNode("field");
field33.name = "self";
field33.accessType = "initializeOnly";
field33.type = "SFNode";
Script Script34 = createNode("Script");
Script34.USE = "_checkBox";
field33.children = new MFNode();

field33.children[0] = Script34;

Script28.field[4] = field33;

field field35 = createNode("field");
field35.name = "button";
field35.accessType = "initializeOnly";
field35.type = "SFNode";
Switch Switch36 = createNode("Switch");
Switch36.USE = "Switch";
field35.children = new MFNode();

field35.children[0] = Switch36;

Script28.field[5] = field35;

field field37 = createNode("field");
field37.name = "data";
field37.accessType = "initializeOnly";
field37.type = "SFNode";
ProtoInstance ProtoInstance38 = createNode("ProtoInstance");
ProtoInstance38.name = "Data";
ProtoInstance38.DEF = "Data";
IS IS39 = createNode("IS");
connect connect40 = createNode("connect");
connect40.nodeField = "enabled";
connect40.protoField = "enabled";
IS39.connect = new MFNode();

IS39.connect[0] = connect40;

connect connect41 = createNode("connect");
connect41.nodeField = "on";
connect41.protoField = "on";
IS39.connect[1] = connect41;

connect connect42 = createNode("connect");
connect42.nodeField = "touchTime";
connect42.protoField = "touchTime";
IS39.connect[2] = connect42;

ProtoInstance38.iS = IS39;

field37.children = new MFNode();

field37.children[0] = ProtoInstance38;

Script28.field[6] = field37;

IS IS43 = createNode("IS");
connect connect44 = createNode("connect");
connect44.nodeField = "isActive";
connect44.protoField = "isActive";
IS43.connect = new MFNode();

IS43.connect[0] = connect44;

Script28.iS = IS43;


Script28.setSourceCode(`vrmlscript:\n"+
"function set_touchTime (value, time) {\n"+
"	if (data.enabled) button.whichChoice = !isActive;\n"+
"}\n"+
"function set_on (value, time) {\n"+
"	if (data.enabled && value != button.whichChoice) button.whichChoice = value;\n"+
"}\n"+
"function set_whichChoice (value, time) {\n"+
"	if (data.enabled) isActive = value;\n"+
"}\n"+
"function initialize() {	\n"+
"	if (data.enabled) set_on(data.on, 0);\n"+
"}`)
ProtoBody16.children[2] = Script28;

ROUTE ROUTE45 = createNode("ROUTE");
ROUTE45.fromNode = "Switch";
ROUTE45.fromField = "whichChoice_changed";
ROUTE45.toNode = "_checkBox";
ROUTE45.toField = "set_whichChoice";
ProtoBody16.children[3] = ROUTE45;

ROUTE ROUTE46 = createNode("ROUTE");
ROUTE46.fromNode = "Data";
ROUTE46.fromField = "on_changed";
ROUTE46.toNode = "_checkBox";
ROUTE46.toField = "set_on";
ProtoBody16.children[4] = ROUTE46;

ROUTE ROUTE47 = createNode("ROUTE");
ROUTE47.fromNode = "Data";
ROUTE47.fromField = "touchTime_changed";
ROUTE47.toNode = "_checkBox";
ROUTE47.toField = "set_touchTime";
ProtoBody16.children[5] = ROUTE47;

ProtoDeclare8.protoBody = ProtoBody16;

children = new MFNode();

children[0] = ProtoDeclare8;

}
