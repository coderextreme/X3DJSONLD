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
meta3.content = "Fri, 28 Aug 2015 13:01:09 GMT";
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
meta6.content = "Fri, 28 Aug 2015 13:01:09 GMT";
head1.meta[4] = meta6;

head = head1;

ProtoDeclare ProtoDeclare8 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Bool" ><ProtoInterface><field name="value" accessType="inputOutput" type="SFBool"></field>
<field name="startTime" accessType="inputOutput" type="SFTime"></field>
<field name="bool" accessType="outputOnly" type="SFBool"></field>
</ProtoInterface>
<ProtoBody><ProtoDeclare name="Data"><ProtoInterface><field name="value" accessType="inputOutput" type="SFBool"></field>
<field name="startTime" accessType="inputOutput" type="SFTime"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>
<Script DEF="_bool" directOutput="true"><field name="set_startTime" accessType="inputOnly" type="SFTime"></field>
<field name="b" accessType="outputOnly" type="SFBool"></field>
<field name="data" accessType="initializeOnly" type="SFNode"><ProtoInstance name="Data" DEF="_1"><IS><connect nodeField="value" protoField="value"></connect>
<connect nodeField="startTime" protoField="startTime"></connect>
</IS>
</ProtoInstance>
</field>
<IS><connect nodeField="b" protoField="bool"></connect>
</IS>
<![CDATA[vrmlscript:
function set_startTime(value, time) { b = data.value; }
function initialize() { if (data.startTime == 1) set_startTime(data.value, 1); }]]></Script>
<ROUTE fromNode="_1" fromField="startTime_changed" toNode="_bool" toField="set_startTime"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "Bool";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "value";
field10.accessType = "inputOutput";
field10.type = "SFBool";
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

field field11 = createNode("field");
field11.name = "startTime";
field11.accessType = "inputOutput";
field11.type = "SFTime";
ProtoInterface9.field[1] = field11;

field field12 = createNode("field");
field12.name = "bool";
field12.accessType = "outputOnly";
field12.type = "SFBool";
ProtoInterface9.field[2] = field12;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody13 = createNode("ProtoBody");
ProtoDeclare ProtoDeclare14 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Data" ><ProtoInterface><field name="value" accessType="inputOutput" type="SFBool"></field>
<field name="startTime" accessType="inputOutput" type="SFTime"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare14.name = "Data";
ProtoInterface ProtoInterface15 = createNode("ProtoInterface");
field field16 = createNode("field");
field16.name = "value";
field16.accessType = "inputOutput";
field16.type = "SFBool";
ProtoInterface15.field = new MFNode();

ProtoInterface15.field[0] = field16;

field field17 = createNode("field");
field17.name = "startTime";
field17.accessType = "inputOutput";
field17.type = "SFTime";
ProtoInterface15.field[1] = field17;

ProtoDeclare14.protoInterface = ProtoInterface15;

ProtoBody ProtoBody18 = createNode("ProtoBody");
Group Group19 = createNode("Group");
ProtoBody18.children = new MFNode();

ProtoBody18.children[0] = Group19;

ProtoDeclare14.protoBody = ProtoBody18;

ProtoBody13.children = new MFNode();

ProtoBody13.children[0] = ProtoDeclare14;

Script Script20 = createNode("Script");
Script20.DEF = "_bool";
Script20.directOutput = True;
field field21 = createNode("field");
field21.name = "set_startTime";
field21.accessType = "inputOnly";
field21.type = "SFTime";
Script20.field = new MFNode();

Script20.field[0] = field21;

field field22 = createNode("field");
field22.name = "b";
field22.accessType = "outputOnly";
field22.type = "SFBool";
Script20.field[1] = field22;

field field23 = createNode("field");
field23.name = "data";
field23.accessType = "initializeOnly";
field23.type = "SFNode";
ProtoInstance ProtoInstance24 = createNode("ProtoInstance");
ProtoInstance24.name = "Data";
ProtoInstance24.DEF = "_1";
IS IS25 = createNode("IS");
connect connect26 = createNode("connect");
connect26.nodeField = "value";
connect26.protoField = "value";
IS25.connect = new MFNode();

IS25.connect[0] = connect26;

connect connect27 = createNode("connect");
connect27.nodeField = "startTime";
connect27.protoField = "startTime";
IS25.connect[1] = connect27;

ProtoInstance24.iS = IS25;

field23.children = new MFNode();

field23.children[0] = ProtoInstance24;

Script20.field[2] = field23;

IS IS28 = createNode("IS");
connect connect29 = createNode("connect");
connect29.nodeField = "b";
connect29.protoField = "bool";
IS28.connect = new MFNode();

IS28.connect[0] = connect29;

Script20.iS = IS28;


Script20.setSourceCode(`vrmlscript:\n"+
"function set_startTime(value, time) { b = data.value; }\n"+
"function initialize() { if (data.startTime == 1) set_startTime(data.value, 1); }`)
ProtoBody13.children[1] = Script20;

ROUTE ROUTE30 = createNode("ROUTE");
ROUTE30.fromNode = "_1";
ROUTE30.fromField = "startTime_changed";
ROUTE30.toNode = "_bool";
ROUTE30.toField = "set_startTime";
ProtoBody13.children[2] = ROUTE30;

ProtoDeclare8.protoBody = ProtoBody13;

children = new MFNode();

children[0] = ProtoDeclare8;

}
