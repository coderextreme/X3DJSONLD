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
<ProtoDeclare name="Bool2Int" ><ProtoInterface><field name="value" accessType="inputOutput" type="SFBool"></field>
<field name="int" accessType="outputOnly" type="SFInt32"></field>
</ProtoInterface>
<ProtoBody><ProtoDeclare name="Data"><ProtoInterface><field name="value" accessType="inputOutput" type="SFBool"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>
<Script DEF="_bool2Int" directOutput="true"><field name="set_value" accessType="inputOnly" type="SFBool"></field>
<field name="i" accessType="outputOnly" type="SFInt32"></field>
<field name="data" accessType="initializeOnly" type="SFNode"><ProtoInstance name="Data" DEF="Data"><IS><connect nodeField="value" protoField="value"></connect>
</IS>
</ProtoInstance>
</field>
<IS><connect nodeField="i" protoField="int"></connect>
</IS>
<![CDATA[vrmlscript:
function set_value(value, time) { i = value; }
function initialize() { i = data.value; }]]></Script>
<ROUTE fromNode="Data" fromField="value_changed" toNode="_bool2Int" toField="set_value"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "Bool2Int";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "value";
field10.accessType = "inputOutput";
field10.type = "SFBool";
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

field field11 = createNode("field");
field11.name = "int";
field11.accessType = "outputOnly";
field11.type = "SFInt32";
ProtoInterface9.field[1] = field11;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody12 = createNode("ProtoBody");
ProtoDeclare ProtoDeclare13 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Data" ><ProtoInterface><field name="value" accessType="inputOutput" type="SFBool"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare13.name = "Data";
ProtoInterface ProtoInterface14 = createNode("ProtoInterface");
field field15 = createNode("field");
field15.name = "value";
field15.accessType = "inputOutput";
field15.type = "SFBool";
ProtoInterface14.field = new MFNode();

ProtoInterface14.field[0] = field15;

ProtoDeclare13.protoInterface = ProtoInterface14;

ProtoBody ProtoBody16 = createNode("ProtoBody");
Group Group17 = createNode("Group");
ProtoBody16.children = new MFNode();

ProtoBody16.children[0] = Group17;

ProtoDeclare13.protoBody = ProtoBody16;

ProtoBody12.children = new MFNode();

ProtoBody12.children[0] = ProtoDeclare13;

Script Script18 = createNode("Script");
Script18.DEF = "_bool2Int";
Script18.directOutput = True;
field field19 = createNode("field");
field19.name = "set_value";
field19.accessType = "inputOnly";
field19.type = "SFBool";
Script18.field = new MFNode();

Script18.field[0] = field19;

field field20 = createNode("field");
field20.name = "i";
field20.accessType = "outputOnly";
field20.type = "SFInt32";
Script18.field[1] = field20;

field field21 = createNode("field");
field21.name = "data";
field21.accessType = "initializeOnly";
field21.type = "SFNode";
ProtoInstance ProtoInstance22 = createNode("ProtoInstance");
ProtoInstance22.name = "Data";
ProtoInstance22.DEF = "Data";
IS IS23 = createNode("IS");
connect connect24 = createNode("connect");
connect24.nodeField = "value";
connect24.protoField = "value";
IS23.connect = new MFNode();

IS23.connect[0] = connect24;

ProtoInstance22.iS = IS23;

field21.children = new MFNode();

field21.children[0] = ProtoInstance22;

Script18.field[2] = field21;

IS IS25 = createNode("IS");
connect connect26 = createNode("connect");
connect26.nodeField = "i";
connect26.protoField = "int";
IS25.connect = new MFNode();

IS25.connect[0] = connect26;

Script18.iS = IS25;


Script18.setSourceCode(`vrmlscript:\n"+
"function set_value(value, time) { i = value; }\n"+
"function initialize() { i = data.value; }`)
ProtoBody12.children[1] = Script18;

ROUTE ROUTE27 = createNode("ROUTE");
ROUTE27.fromNode = "Data";
ROUTE27.fromField = "value_changed";
ROUTE27.toNode = "_bool2Int";
ROUTE27.toField = "set_value";
ProtoBody12.children[2] = ROUTE27;

ProtoDeclare8.protoBody = ProtoBody12;

children = new MFNode();

children[0] = ProtoDeclare8;

}
