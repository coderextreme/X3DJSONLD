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
<ProtoDeclare name="Switcher" ><ProtoInterface><field name="minValue" accessType="inputOutput" type="SFInt32"></field>
<field name="maxValue" accessType="inputOutput" type="SFInt32" value="1"></field>
<field name="prev" accessType="inputOutput" type="SFTime"></field>
<field name="next" accessType="inputOutput" type="SFTime"></field>
<field name="offset" accessType="inputOutput" type="SFInt32"></field>
<field name="whichChoice_changed" accessType="outputOnly" type="SFInt32"></field>
</ProtoInterface>
<ProtoBody><ProtoDeclare name="Data"><ProtoInterface><field name="minValue" accessType="inputOutput" type="SFInt32"></field>
<field name="maxValue" accessType="inputOutput" type="SFInt32" value="1"></field>
<field name="prev" accessType="inputOutput" type="SFTime"></field>
<field name="next" accessType="inputOutput" type="SFTime"></field>
<field name="offset" accessType="inputOutput" type="SFInt32"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>
<Group><Script DEF="_switcher" directOutput="true"><field name="set_minValue" accessType="inputOnly" type="SFInt32"></field>
<field name="set_maxValue" accessType="inputOnly" type="SFInt32"></field>
<field name="set_prev" accessType="inputOnly" type="SFTime"></field>
<field name="set_next" accessType="inputOnly" type="SFTime"></field>
<field name="whichChoice_changed" accessType="outputOnly" type="SFInt32"></field>
<field name="data" accessType="initializeOnly" type="SFNode"><ProtoInstance name="Data" DEF="_1"><IS><connect nodeField="minValue" protoField="minValue"></connect>
<connect nodeField="maxValue" protoField="maxValue"></connect>
<connect nodeField="prev" protoField="prev"></connect>
<connect nodeField="next" protoField="next"></connect>
<connect nodeField="offset" protoField="offset"></connect>
</IS>
</ProtoInstance>
</field>
<IS><connect nodeField="whichChoice_changed" protoField="whichChoice_changed"></connect>
</IS>
<![CDATA[vrmlscript:
function  initialize()
{
	if (data.next == 1 || data.prev == 1) whichChoice_changed = data.offset;
}

function  set_prev(value, time)
{
	if (--data.offset < data.minValue) data.offset = data.maxValue;
	whichChoice_changed = data.offset;
}

function  set_next(value, time)
{
	if (++data.offset > data.maxValue) data.offset = data.minValue;
	whichChoice_changed = data.offset;
}

function set_minValue(value, time)
{
	if (data.offset < value) data.offset = value;
}

function set_maxValue(value, time)
{
	if (data.offset > value) data.offset = value;
}]]></Script>
</Group>
<ROUTE fromNode="_1" fromField="prev_changed" toNode="_switcher" toField="set_prev"></ROUTE>
<ROUTE fromNode="_1" fromField="next_changed" toNode="_switcher" toField="set_next"></ROUTE>
<ROUTE fromNode="_1" fromField="minValue_changed" toNode="_switcher" toField="set_minValue"></ROUTE>
<ROUTE fromNode="_1" fromField="maxValue_changed" toNode="_switcher" toField="set_maxValue"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "Switcher";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "minValue";
field10.accessType = "inputOutput";
field10.type = "SFInt32";
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

field field11 = createNode("field");
field11.name = "maxValue";
field11.accessType = "inputOutput";
field11.type = "SFInt32";
field11.value = "1";
ProtoInterface9.field[1] = field11;

field field12 = createNode("field");
field12.name = "prev";
field12.accessType = "inputOutput";
field12.type = "SFTime";
ProtoInterface9.field[2] = field12;

field field13 = createNode("field");
field13.name = "next";
field13.accessType = "inputOutput";
field13.type = "SFTime";
ProtoInterface9.field[3] = field13;

field field14 = createNode("field");
field14.name = "offset";
field14.accessType = "inputOutput";
field14.type = "SFInt32";
ProtoInterface9.field[4] = field14;

field field15 = createNode("field");
field15.name = "whichChoice_changed";
field15.accessType = "outputOnly";
field15.type = "SFInt32";
ProtoInterface9.field[5] = field15;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody16 = createNode("ProtoBody");
ProtoDeclare ProtoDeclare17 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Data" ><ProtoInterface><field name="minValue" accessType="inputOutput" type="SFInt32"></field>
<field name="maxValue" accessType="inputOutput" type="SFInt32" value="1"></field>
<field name="prev" accessType="inputOutput" type="SFTime"></field>
<field name="next" accessType="inputOutput" type="SFTime"></field>
<field name="offset" accessType="inputOutput" type="SFInt32"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare17.name = "Data";
ProtoInterface ProtoInterface18 = createNode("ProtoInterface");
field field19 = createNode("field");
field19.name = "minValue";
field19.accessType = "inputOutput";
field19.type = "SFInt32";
ProtoInterface18.field = new MFNode();

ProtoInterface18.field[0] = field19;

field field20 = createNode("field");
field20.name = "maxValue";
field20.accessType = "inputOutput";
field20.type = "SFInt32";
field20.value = "1";
ProtoInterface18.field[1] = field20;

field field21 = createNode("field");
field21.name = "prev";
field21.accessType = "inputOutput";
field21.type = "SFTime";
ProtoInterface18.field[2] = field21;

field field22 = createNode("field");
field22.name = "next";
field22.accessType = "inputOutput";
field22.type = "SFTime";
ProtoInterface18.field[3] = field22;

field field23 = createNode("field");
field23.name = "offset";
field23.accessType = "inputOutput";
field23.type = "SFInt32";
ProtoInterface18.field[4] = field23;

ProtoDeclare17.protoInterface = ProtoInterface18;

ProtoBody ProtoBody24 = createNode("ProtoBody");
Group Group25 = createNode("Group");
ProtoBody24.children = new MFNode();

ProtoBody24.children[0] = Group25;

ProtoDeclare17.protoBody = ProtoBody24;

ProtoBody16.children = new MFNode();

ProtoBody16.children[0] = ProtoDeclare17;

Group Group26 = createNode("Group");
Script Script27 = createNode("Script");
Script27.DEF = "_switcher";
Script27.directOutput = True;
field field28 = createNode("field");
field28.name = "set_minValue";
field28.accessType = "inputOnly";
field28.type = "SFInt32";
Script27.field = new MFNode();

Script27.field[0] = field28;

field field29 = createNode("field");
field29.name = "set_maxValue";
field29.accessType = "inputOnly";
field29.type = "SFInt32";
Script27.field[1] = field29;

field field30 = createNode("field");
field30.name = "set_prev";
field30.accessType = "inputOnly";
field30.type = "SFTime";
Script27.field[2] = field30;

field field31 = createNode("field");
field31.name = "set_next";
field31.accessType = "inputOnly";
field31.type = "SFTime";
Script27.field[3] = field31;

field field32 = createNode("field");
field32.name = "whichChoice_changed";
field32.accessType = "outputOnly";
field32.type = "SFInt32";
Script27.field[4] = field32;

field field33 = createNode("field");
field33.name = "data";
field33.accessType = "initializeOnly";
field33.type = "SFNode";
ProtoInstance ProtoInstance34 = createNode("ProtoInstance");
ProtoInstance34.name = "Data";
ProtoInstance34.DEF = "_1";
IS IS35 = createNode("IS");
connect connect36 = createNode("connect");
connect36.nodeField = "minValue";
connect36.protoField = "minValue";
IS35.connect = new MFNode();

IS35.connect[0] = connect36;

connect connect37 = createNode("connect");
connect37.nodeField = "maxValue";
connect37.protoField = "maxValue";
IS35.connect[1] = connect37;

connect connect38 = createNode("connect");
connect38.nodeField = "prev";
connect38.protoField = "prev";
IS35.connect[2] = connect38;

connect connect39 = createNode("connect");
connect39.nodeField = "next";
connect39.protoField = "next";
IS35.connect[3] = connect39;

connect connect40 = createNode("connect");
connect40.nodeField = "offset";
connect40.protoField = "offset";
IS35.connect[4] = connect40;

ProtoInstance34.iS = IS35;

field33.children = new MFNode();

field33.children[0] = ProtoInstance34;

Script27.field[5] = field33;

IS IS41 = createNode("IS");
connect connect42 = createNode("connect");
connect42.nodeField = "whichChoice_changed";
connect42.protoField = "whichChoice_changed";
IS41.connect = new MFNode();

IS41.connect[0] = connect42;

Script27.iS = IS41;


Script27.setSourceCode(`vrmlscript:\n"+
"function  initialize()\n"+
"{\n"+
"	if (data.next == 1 || data.prev == 1) whichChoice_changed = data.offset;\n"+
"}\n"+
"\n"+
"function  set_prev(value, time)\n"+
"{\n"+
"	if (--data.offset < data.minValue) data.offset = data.maxValue;\n"+
"	whichChoice_changed = data.offset;\n"+
"}\n"+
"\n"+
"function  set_next(value, time)\n"+
"{\n"+
"	if (++data.offset > data.maxValue) data.offset = data.minValue;\n"+
"	whichChoice_changed = data.offset;\n"+
"}\n"+
"\n"+
"function set_minValue(value, time)\n"+
"{\n"+
"	if (data.offset < value) data.offset = value;\n"+
"}\n"+
"\n"+
"function set_maxValue(value, time)\n"+
"{\n"+
"	if (data.offset > value) data.offset = value;\n"+
"}`)
Group26.children = new MFNode();

Group26.children[0] = Script27;

ProtoBody16.children[1] = Group26;

ROUTE ROUTE43 = createNode("ROUTE");
ROUTE43.fromNode = "_1";
ROUTE43.fromField = "prev_changed";
ROUTE43.toNode = "_switcher";
ROUTE43.toField = "set_prev";
ProtoBody16.children[2] = ROUTE43;

ROUTE ROUTE44 = createNode("ROUTE");
ROUTE44.fromNode = "_1";
ROUTE44.fromField = "next_changed";
ROUTE44.toNode = "_switcher";
ROUTE44.toField = "set_next";
ProtoBody16.children[3] = ROUTE44;

ROUTE ROUTE45 = createNode("ROUTE");
ROUTE45.fromNode = "_1";
ROUTE45.fromField = "minValue_changed";
ROUTE45.toNode = "_switcher";
ROUTE45.toField = "set_minValue";
ProtoBody16.children[4] = ROUTE45;

ROUTE ROUTE46 = createNode("ROUTE");
ROUTE46.fromNode = "_1";
ROUTE46.fromField = "maxValue_changed";
ROUTE46.toNode = "_switcher";
ROUTE46.toField = "set_maxValue";
ProtoBody16.children[5] = ROUTE46;

ProtoDeclare8.protoBody = ProtoBody16;

children = new MFNode();

children[0] = ProtoDeclare8;

}
