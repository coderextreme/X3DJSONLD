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
meta3.content = "Thu, 23 Apr 2015 06:07:15 GMT";
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
meta6.content = "Thu, 23 Apr 2015 06:07:15 GMT";
head1.meta[4] = meta6;

head = head1;

ProtoDeclare ProtoDeclare8 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="SubTime" ><ProtoInterface><field name="time" accessType="inputOutput" type="SFTime"></field>
<field name="value_changed" accessType="outputOnly" type="SFTime"></field>
<field name="offset" accessType="initializeOnly" type="SFNode"><Transform DEF="_1"></Transform>
</field>
</ProtoInterface>
<ProtoBody><ProtoDeclare name="Data"><ProtoInterface><field name="time" accessType="inputOutput" type="SFTime"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>
<Script DEF="_time" directOutput="true"><field name="set_time" accessType="inputOnly" type="SFTime"></field>
<field name="value_changed" accessType="outputOnly" type="SFTime"></field>
<field name="offset" accessType="initializeOnly" type="SFNode"></field>
<field name="data" accessType="initializeOnly" type="SFNode"><ProtoInstance name="Data" DEF="_2"><IS><connect nodeField="time" protoField="time"></connect>
</IS>
</ProtoInstance>
</field>
<IS><connect nodeField="value_changed" protoField="value_changed"></connect>
<connect nodeField="offset" protoField="offset"></connect>
</IS>
<![CDATA[vrmlscript:
function set_time(value)
{
	value_changed = value - offset.time;
}]]></Script>
<ROUTE fromNode="_2" fromField="time_changed" toNode="_time" toField="set_time"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "SubTime";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "time";
field10.accessType = "inputOutput";
field10.type = "SFTime";
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

field field11 = createNode("field");
field11.name = "value_changed";
field11.accessType = "outputOnly";
field11.type = "SFTime";
ProtoInterface9.field[1] = field11;

field field12 = createNode("field");
field12.name = "offset";
field12.accessType = "initializeOnly";
field12.type = "SFNode";
Transform Transform13 = createNode("Transform");
Transform13.DEF = "_1";
field12.children = new MFNode();

field12.children[0] = Transform13;

ProtoInterface9.field[2] = field12;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody14 = createNode("ProtoBody");
ProtoDeclare ProtoDeclare15 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Data" ><ProtoInterface><field name="time" accessType="inputOutput" type="SFTime"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare15.name = "Data";
ProtoInterface ProtoInterface16 = createNode("ProtoInterface");
field field17 = createNode("field");
field17.name = "time";
field17.accessType = "inputOutput";
field17.type = "SFTime";
ProtoInterface16.field = new MFNode();

ProtoInterface16.field[0] = field17;

ProtoDeclare15.protoInterface = ProtoInterface16;

ProtoBody ProtoBody18 = createNode("ProtoBody");
Group Group19 = createNode("Group");
ProtoBody18.children = new MFNode();

ProtoBody18.children[0] = Group19;

ProtoDeclare15.protoBody = ProtoBody18;

ProtoBody14.children = new MFNode();

ProtoBody14.children[0] = ProtoDeclare15;

Script Script20 = createNode("Script");
Script20.DEF = "_time";
Script20.directOutput = True;
field field21 = createNode("field");
field21.name = "set_time";
field21.accessType = "inputOnly";
field21.type = "SFTime";
Script20.field = new MFNode();

Script20.field[0] = field21;

field field22 = createNode("field");
field22.name = "value_changed";
field22.accessType = "outputOnly";
field22.type = "SFTime";
Script20.field[1] = field22;

field field23 = createNode("field");
field23.name = "offset";
field23.accessType = "initializeOnly";
field23.type = "SFNode";
Script20.field[2] = field23;

field field24 = createNode("field");
field24.name = "data";
field24.accessType = "initializeOnly";
field24.type = "SFNode";
ProtoInstance ProtoInstance25 = createNode("ProtoInstance");
ProtoInstance25.name = "Data";
ProtoInstance25.DEF = "_2";
IS IS26 = createNode("IS");
connect connect27 = createNode("connect");
connect27.nodeField = "time";
connect27.protoField = "time";
IS26.connect = new MFNode();

IS26.connect[0] = connect27;

ProtoInstance25.iS = IS26;

field24.children = new MFNode();

field24.children[0] = ProtoInstance25;

Script20.field[3] = field24;

IS IS28 = createNode("IS");
connect connect29 = createNode("connect");
connect29.nodeField = "value_changed";
connect29.protoField = "value_changed";
IS28.connect = new MFNode();

IS28.connect[0] = connect29;

connect connect30 = createNode("connect");
connect30.nodeField = "offset";
connect30.protoField = "offset";
IS28.connect[1] = connect30;

Script20.iS = IS28;


Script20.setSourceCode(`vrmlscript:\n"+
"function set_time(value)\n"+
"{\n"+
"	value_changed = value - offset.time;\n"+
"}`)
ProtoBody14.children[1] = Script20;

ROUTE ROUTE31 = createNode("ROUTE");
ROUTE31.fromNode = "_2";
ROUTE31.fromField = "time_changed";
ROUTE31.toNode = "_time";
ROUTE31.toField = "set_time";
ProtoBody14.children[2] = ROUTE31;

ProtoDeclare8.protoBody = ProtoBody14;

children = new MFNode();

children[0] = ProtoDeclare8;

}
