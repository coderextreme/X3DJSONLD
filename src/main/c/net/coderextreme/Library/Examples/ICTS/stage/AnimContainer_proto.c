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
meta3.content = "Thu, 23 Apr 2015 06:06:56 GMT";
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
meta6.content = "Thu, 23 Apr 2015 06:06:56 GMT";
head1.meta[4] = meta6;

head = head1;

ProtoDeclare ProtoDeclare8 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="AnimContainer" ><ProtoInterface><field name="whichChoice" accessType="inputOutput" type="SFInt32"></field>
<field name="stopTime" accessType="inputOutput" type="SFTime"></field>
<field name="children" accessType="initializeOnly" type="MFNode"><TimeSensor DEF="_1"></TimeSensor>
</field>
</ProtoInterface>
<ProtoBody><ProtoDeclare name="Data"><ProtoInterface><field name="whichChoice" accessType="inputOutput" type="SFInt32"></field>
<field name="stopTime" accessType="inputOutput" type="SFTime"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>
<Script DEF="_animContainer" directOutput="true" mustEvaluate="true"><field name="set_whichChoice" accessType="inputOnly" type="SFInt32"></field>
<field name="set_stopTime" accessType="inputOnly" type="SFTime"></field>
<field name="children" accessType="initializeOnly" type="MFNode"></field>
<field name="data" accessType="initializeOnly" type="SFNode"><ProtoInstance name="Data" DEF="Data"><IS><connect nodeField="whichChoice" protoField="whichChoice"></connect>
<connect nodeField="stopTime" protoField="stopTime"></connect>
</IS>
</ProtoInstance>
</field>
<IS><connect nodeField="children" protoField="children"></connect>
</IS>
<![CDATA[vrmlscript:
function set_whichChoice(value, time)
{
	children[value].startTime = time;
}
function set_stopTime(value, time)
{
	children[data.whichChoice].stopTime = time;
}]]></Script>
<ROUTE fromNode="Data" fromField="whichChoice_changed" toNode="_animContainer" toField="set_whichChoice"></ROUTE>
<ROUTE fromNode="Data" fromField="stopTime_changed" toNode="_animContainer" toField="set_stopTime"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "AnimContainer";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "whichChoice";
field10.accessType = "inputOutput";
field10.type = "SFInt32";
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

field field11 = createNode("field");
field11.name = "stopTime";
field11.accessType = "inputOutput";
field11.type = "SFTime";
ProtoInterface9.field[1] = field11;

field field12 = createNode("field");
field12.name = "children";
field12.accessType = "initializeOnly";
field12.type = "MFNode";
TimeSensor TimeSensor13 = createNode("TimeSensor");
TimeSensor13.DEF = "_1";
field12.children = new MFNode();

field12.children[0] = TimeSensor13;

ProtoInterface9.field[2] = field12;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody14 = createNode("ProtoBody");
ProtoDeclare ProtoDeclare15 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Data" ><ProtoInterface><field name="whichChoice" accessType="inputOutput" type="SFInt32"></field>
<field name="stopTime" accessType="inputOutput" type="SFTime"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare15.name = "Data";
ProtoInterface ProtoInterface16 = createNode("ProtoInterface");
field field17 = createNode("field");
field17.name = "whichChoice";
field17.accessType = "inputOutput";
field17.type = "SFInt32";
ProtoInterface16.field = new MFNode();

ProtoInterface16.field[0] = field17;

field field18 = createNode("field");
field18.name = "stopTime";
field18.accessType = "inputOutput";
field18.type = "SFTime";
ProtoInterface16.field[1] = field18;

ProtoDeclare15.protoInterface = ProtoInterface16;

ProtoBody ProtoBody19 = createNode("ProtoBody");
Group Group20 = createNode("Group");
ProtoBody19.children = new MFNode();

ProtoBody19.children[0] = Group20;

ProtoDeclare15.protoBody = ProtoBody19;

ProtoBody14.children = new MFNode();

ProtoBody14.children[0] = ProtoDeclare15;

Script Script21 = createNode("Script");
Script21.DEF = "_animContainer";
Script21.directOutput = True;
Script21.mustEvaluate = True;
field field22 = createNode("field");
field22.name = "set_whichChoice";
field22.accessType = "inputOnly";
field22.type = "SFInt32";
Script21.field = new MFNode();

Script21.field[0] = field22;

field field23 = createNode("field");
field23.name = "set_stopTime";
field23.accessType = "inputOnly";
field23.type = "SFTime";
Script21.field[1] = field23;

field field24 = createNode("field");
field24.name = "children";
field24.accessType = "initializeOnly";
field24.type = "MFNode";
Script21.field[2] = field24;

field field25 = createNode("field");
field25.name = "data";
field25.accessType = "initializeOnly";
field25.type = "SFNode";
ProtoInstance ProtoInstance26 = createNode("ProtoInstance");
ProtoInstance26.name = "Data";
ProtoInstance26.DEF = "Data";
IS IS27 = createNode("IS");
connect connect28 = createNode("connect");
connect28.nodeField = "whichChoice";
connect28.protoField = "whichChoice";
IS27.connect = new MFNode();

IS27.connect[0] = connect28;

connect connect29 = createNode("connect");
connect29.nodeField = "stopTime";
connect29.protoField = "stopTime";
IS27.connect[1] = connect29;

ProtoInstance26.iS = IS27;

field25.children = new MFNode();

field25.children[0] = ProtoInstance26;

Script21.field[3] = field25;

IS IS30 = createNode("IS");
connect connect31 = createNode("connect");
connect31.nodeField = "children";
connect31.protoField = "children";
IS30.connect = new MFNode();

IS30.connect[0] = connect31;

Script21.iS = IS30;


Script21.setSourceCode(`vrmlscript:\n"+
"function set_whichChoice(value, time)\n"+
"{\n"+
"	children[value].startTime = time;\n"+
"}\n"+
"function set_stopTime(value, time)\n"+
"{\n"+
"	children[data.whichChoice].stopTime = time;\n"+
"}`)
ProtoBody14.children[1] = Script21;

ROUTE ROUTE32 = createNode("ROUTE");
ROUTE32.fromNode = "Data";
ROUTE32.fromField = "whichChoice_changed";
ROUTE32.toNode = "_animContainer";
ROUTE32.toField = "set_whichChoice";
ProtoBody14.children[2] = ROUTE32;

ROUTE ROUTE33 = createNode("ROUTE");
ROUTE33.fromNode = "Data";
ROUTE33.fromField = "stopTime_changed";
ROUTE33.toNode = "_animContainer";
ROUTE33.toField = "set_stopTime";
ProtoBody14.children[3] = ROUTE33;

ProtoDeclare8.protoBody = ProtoBody14;

children = new MFNode();

children[0] = ProtoDeclare8;

}
