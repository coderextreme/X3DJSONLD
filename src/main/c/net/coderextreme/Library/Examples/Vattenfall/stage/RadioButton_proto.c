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
<ProtoDeclare name="RadioButton" ><ProtoInterface><field name="enabled" accessType="inputOutput" type="SFBool" value="true"></field>
<field name="touchTime" accessType="outputOnly" type="SFTime"></field>
<field name="whichChoice" accessType="inputOutput" type="SFInt32"></field>
<field name="choice" accessType="inputOutput" type="MFNode"></field>
</ProtoInterface>
<ProtoBody><ProtoDeclare name="Data"><ProtoInterface><field name="enabled" accessType="inputOutput" type="SFBool" value="true"></field>
<field name="whichChoice" accessType="inputOutput" type="SFInt32"></field>
<field name="children" accessType="inputOutput" type="MFNode"></field>
</ProtoInterface>
<ProtoBody><Group><IS><connect nodeField="children" protoField="children"></connect>
</IS>
</Group>
</ProtoBody>
</ProtoDeclare>
<ProtoInstance name="Data" DEF="Data"><IS><connect nodeField="enabled" protoField="enabled"></connect>
<connect nodeField="whichChoice" protoField="whichChoice"></connect>
<connect nodeField="children" protoField="choice"></connect>
</IS>
</ProtoInstance>
<Script DEF="_radioButton" directOutput="true"><field name="touchTime" accessType="outputOnly" type="SFTime"></field>
<field name="set_touchTime" accessType="inputOnly" type="SFTime"></field>
<field name="set_whichChoice" accessType="inputOnly" type="SFInt32"></field>
<field name="set_children" accessType="inputOnly" type="MFNode"></field>
<field name="whichChoice" accessType="initializeOnly" type="SFInt32" value="-1"></field>
<field name="children" accessType="initializeOnly" type="MFNode"></field>
<field name="self" accessType="initializeOnly" type="SFNode"><Script USE="_radioButton"></Script>
</field>
<field name="data" accessType="initializeOnly" type="SFNode"><ProtoInstance USE="Data"></ProtoInstance>
</field>
<IS><connect nodeField="touchTime" protoField="touchTime"></connect>
</IS>
<![CDATA[vrmlscript:
function set_touchTime (value, time) {
	if (!data.enabled) return;
	for (i=0; i<children.length; ++i) {
		if (children[i].touchTime == value) {
			touchTime = time;
			data.whichChoice = i;
			break;
		}
	}
}
function set_whichChoice (value, time) {
	if (whichChoice >= 0 && whichChoice < children.length)
		children[whichChoice].on = FALSE;
	whichChoice = value;
	if (touchTime != time)
		if (whichChoice >= 0 && whichChoice < children.length && !children[whichChoice].whichChoice)
			children[whichChoice].on = TRUE;
}
function set_children (value, time) {
	for (i=0; i<children.length; ++i)
		Browser.deleteRoute(children[i], 'touchTime', self, 'set_touchTime');
	children = value;
	for (i=0; i<children.length; ++i) {
		children[i].on = FALSE;
		Browser.addRoute(children[i], 'touchTime', self, 'set_touchTime');
	}
	if (whichChoice >= 0 && whichChoice < children.length)
		children[whichChoice].on = TRUE;
}
function initialize() {
	whichChoice = data.whichChoice;
	set_children(data.children, 0);
}]]></Script>
<ROUTE fromNode="Data" fromField="children_changed" toNode="_radioButton" toField="set_children"></ROUTE>
<ROUTE fromNode="Data" fromField="whichChoice_changed" toNode="_radioButton" toField="set_whichChoice"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "RadioButton";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "enabled";
field10.accessType = "inputOutput";
field10.type = "SFBool";
field10.value = "true";
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

field field11 = createNode("field");
field11.name = "touchTime";
field11.accessType = "outputOnly";
field11.type = "SFTime";
ProtoInterface9.field[1] = field11;

field field12 = createNode("field");
field12.name = "whichChoice";
field12.accessType = "inputOutput";
field12.type = "SFInt32";
ProtoInterface9.field[2] = field12;

field field13 = createNode("field");
field13.name = "choice";
field13.accessType = "inputOutput";
field13.type = "MFNode";
ProtoInterface9.field[3] = field13;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody14 = createNode("ProtoBody");
ProtoDeclare ProtoDeclare15 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Data" ><ProtoInterface><field name="enabled" accessType="inputOutput" type="SFBool" value="true"></field>
<field name="whichChoice" accessType="inputOutput" type="SFInt32"></field>
<field name="children" accessType="inputOutput" type="MFNode"></field>
</ProtoInterface>
<ProtoBody><Group><IS><connect nodeField="children" protoField="children"></connect>
</IS>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare15.name = "Data";
ProtoInterface ProtoInterface16 = createNode("ProtoInterface");
field field17 = createNode("field");
field17.name = "enabled";
field17.accessType = "inputOutput";
field17.type = "SFBool";
field17.value = "true";
ProtoInterface16.field = new MFNode();

ProtoInterface16.field[0] = field17;

field field18 = createNode("field");
field18.name = "whichChoice";
field18.accessType = "inputOutput";
field18.type = "SFInt32";
ProtoInterface16.field[1] = field18;

field field19 = createNode("field");
field19.name = "children";
field19.accessType = "inputOutput";
field19.type = "MFNode";
ProtoInterface16.field[2] = field19;

ProtoDeclare15.protoInterface = ProtoInterface16;

ProtoBody ProtoBody20 = createNode("ProtoBody");
Group Group21 = createNode("Group");
IS IS22 = createNode("IS");
connect connect23 = createNode("connect");
connect23.nodeField = "children";
connect23.protoField = "children";
IS22.connect = new MFNode();

IS22.connect[0] = connect23;

Group21.iS = IS22;

ProtoBody20.children = new MFNode();

ProtoBody20.children[0] = Group21;

ProtoDeclare15.protoBody = ProtoBody20;

ProtoBody14.children = new MFNode();

ProtoBody14.children[0] = ProtoDeclare15;

ProtoInstance ProtoInstance24 = createNode("ProtoInstance");
ProtoInstance24.name = "Data";
ProtoInstance24.DEF = "Data";
IS IS25 = createNode("IS");
connect connect26 = createNode("connect");
connect26.nodeField = "enabled";
connect26.protoField = "enabled";
IS25.connect = new MFNode();

IS25.connect[0] = connect26;

connect connect27 = createNode("connect");
connect27.nodeField = "whichChoice";
connect27.protoField = "whichChoice";
IS25.connect[1] = connect27;

connect connect28 = createNode("connect");
connect28.nodeField = "children";
connect28.protoField = "choice";
IS25.connect[2] = connect28;

ProtoInstance24.iS = IS25;

ProtoBody14.children[1] = ProtoInstance24;

Script Script29 = createNode("Script");
Script29.DEF = "_radioButton";
Script29.directOutput = True;
field field30 = createNode("field");
field30.name = "touchTime";
field30.accessType = "outputOnly";
field30.type = "SFTime";
Script29.field = new MFNode();

Script29.field[0] = field30;

field field31 = createNode("field");
field31.name = "set_touchTime";
field31.accessType = "inputOnly";
field31.type = "SFTime";
Script29.field[1] = field31;

field field32 = createNode("field");
field32.name = "set_whichChoice";
field32.accessType = "inputOnly";
field32.type = "SFInt32";
Script29.field[2] = field32;

field field33 = createNode("field");
field33.name = "set_children";
field33.accessType = "inputOnly";
field33.type = "MFNode";
Script29.field[3] = field33;

field field34 = createNode("field");
field34.name = "whichChoice";
field34.accessType = "initializeOnly";
field34.type = "SFInt32";
field34.value = "-1";
Script29.field[4] = field34;

field field35 = createNode("field");
field35.name = "children";
field35.accessType = "initializeOnly";
field35.type = "MFNode";
Script29.field[5] = field35;

field field36 = createNode("field");
field36.name = "self";
field36.accessType = "initializeOnly";
field36.type = "SFNode";
Script Script37 = createNode("Script");
Script37.USE = "_radioButton";
field36.children = new MFNode();

field36.children[0] = Script37;

Script29.field[6] = field36;

field field38 = createNode("field");
field38.name = "data";
field38.accessType = "initializeOnly";
field38.type = "SFNode";
ProtoInstance ProtoInstance39 = createNode("ProtoInstance");
ProtoInstance39.USE = "Data";
field38.children = new MFNode();

field38.children[0] = ProtoInstance39;

Script29.field[7] = field38;

IS IS40 = createNode("IS");
connect connect41 = createNode("connect");
connect41.nodeField = "touchTime";
connect41.protoField = "touchTime";
IS40.connect = new MFNode();

IS40.connect[0] = connect41;

Script29.iS = IS40;


Script29.setSourceCode(`vrmlscript:\n"+
"function set_touchTime (value, time) {\n"+
"	if (!data.enabled) return;\n"+
"	for (i=0; i<children.length; ++i) {\n"+
"		if (children[i].touchTime == value) {\n"+
"			touchTime = time;\n"+
"			data.whichChoice = i;\n"+
"			break;\n"+
"		}\n"+
"	}\n"+
"}\n"+
"function set_whichChoice (value, time) {\n"+
"	if (whichChoice >= 0 && whichChoice < children.length)\n"+
"		children[whichChoice].on = FALSE;\n"+
"	whichChoice = value;\n"+
"	if (touchTime != time)\n"+
"		if (whichChoice >= 0 && whichChoice < children.length && !children[whichChoice].whichChoice)\n"+
"			children[whichChoice].on = TRUE;\n"+
"}\n"+
"function set_children (value, time) {\n"+
"	for (i=0; i<children.length; ++i)\n"+
"		Browser.deleteRoute(children[i], 'touchTime', self, 'set_touchTime');\n"+
"	children = value;\n"+
"	for (i=0; i<children.length; ++i) {\n"+
"		children[i].on = FALSE;\n"+
"		Browser.addRoute(children[i], 'touchTime', self, 'set_touchTime');\n"+
"	}\n"+
"	if (whichChoice >= 0 && whichChoice < children.length)\n"+
"		children[whichChoice].on = TRUE;\n"+
"}\n"+
"function initialize() {\n"+
"	whichChoice = data.whichChoice;\n"+
"	set_children(data.children, 0);\n"+
"}`)
ProtoBody14.children[2] = Script29;

ROUTE ROUTE42 = createNode("ROUTE");
ROUTE42.fromNode = "Data";
ROUTE42.fromField = "children_changed";
ROUTE42.toNode = "_radioButton";
ROUTE42.toField = "set_children";
ProtoBody14.children[3] = ROUTE42;

ROUTE ROUTE43 = createNode("ROUTE");
ROUTE43.fromNode = "Data";
ROUTE43.fromField = "whichChoice_changed";
ROUTE43.toNode = "_radioButton";
ROUTE43.toField = "set_whichChoice";
ProtoBody14.children[4] = ROUTE43;

ProtoDeclare8.protoBody = ProtoBody14;

children = new MFNode();

children[0] = ProtoDeclare8;

}
