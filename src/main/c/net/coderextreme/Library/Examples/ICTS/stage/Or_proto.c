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
meta3.content = "Thu, 23 Apr 2015 06:07:14 GMT";
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
meta6.content = "Thu, 23 Apr 2015 06:07:14 GMT";
head1.meta[4] = meta6;

head = head1;

ProtoDeclare ProtoDeclare8 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Or" ><ProtoInterface><field name="value1" accessType="inputOutput" type="SFBool"></field>
<field name="value2" accessType="inputOutput" type="SFBool"></field>
<field name="value_changed" accessType="outputOnly" type="SFBool"></field>
</ProtoInterface>
<ProtoBody><ProtoDeclare name="Data"><ProtoInterface><field name="value1" accessType="inputOutput" type="SFBool"></field>
<field name="value2" accessType="inputOutput" type="SFBool"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>
<Script DEF="_boolean" directOutput="true"><field name="set_value1" accessType="inputOnly" type="SFBool"></field>
<field name="set_value2" accessType="inputOnly" type="SFBool"></field>
<field name="value_changed" accessType="outputOnly" type="SFBool"></field>
<field name="v" accessType="initializeOnly" type="SFNode"><ProtoInstance name="Data" DEF="_1"><IS><connect nodeField="value1" protoField="value1"></connect>
<connect nodeField="value2" protoField="value2"></connect>
</IS>
</ProtoInstance>
</field>
<IS><connect nodeField="value_changed" protoField="value_changed"></connect>
</IS>
<![CDATA[vrmlscript:
function set_value1(value) {  }

function set_value2(value) {  }

function eventsProcessed () {
	b = v.value1 || v.value2;
	if (b != value_changed) value_changed = b;
}]]></Script>
<ROUTE fromNode="_1" fromField="value1_changed" toNode="_boolean" toField="set_value1"></ROUTE>
<ROUTE fromNode="_1" fromField="value2_changed" toNode="_boolean" toField="set_value2"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "Or";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "value1";
field10.accessType = "inputOutput";
field10.type = "SFBool";
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

field field11 = createNode("field");
field11.name = "value2";
field11.accessType = "inputOutput";
field11.type = "SFBool";
ProtoInterface9.field[1] = field11;

field field12 = createNode("field");
field12.name = "value_changed";
field12.accessType = "outputOnly";
field12.type = "SFBool";
ProtoInterface9.field[2] = field12;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody13 = createNode("ProtoBody");
ProtoDeclare ProtoDeclare14 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Data" ><ProtoInterface><field name="value1" accessType="inputOutput" type="SFBool"></field>
<field name="value2" accessType="inputOutput" type="SFBool"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare14.name = "Data";
ProtoInterface ProtoInterface15 = createNode("ProtoInterface");
field field16 = createNode("field");
field16.name = "value1";
field16.accessType = "inputOutput";
field16.type = "SFBool";
ProtoInterface15.field = new MFNode();

ProtoInterface15.field[0] = field16;

field field17 = createNode("field");
field17.name = "value2";
field17.accessType = "inputOutput";
field17.type = "SFBool";
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
Script20.DEF = "_boolean";
Script20.directOutput = True;
field field21 = createNode("field");
field21.name = "set_value1";
field21.accessType = "inputOnly";
field21.type = "SFBool";
Script20.field = new MFNode();

Script20.field[0] = field21;

field field22 = createNode("field");
field22.name = "set_value2";
field22.accessType = "inputOnly";
field22.type = "SFBool";
Script20.field[1] = field22;

field field23 = createNode("field");
field23.name = "value_changed";
field23.accessType = "outputOnly";
field23.type = "SFBool";
Script20.field[2] = field23;

field field24 = createNode("field");
field24.name = "v";
field24.accessType = "initializeOnly";
field24.type = "SFNode";
ProtoInstance ProtoInstance25 = createNode("ProtoInstance");
ProtoInstance25.name = "Data";
ProtoInstance25.DEF = "_1";
IS IS26 = createNode("IS");
connect connect27 = createNode("connect");
connect27.nodeField = "value1";
connect27.protoField = "value1";
IS26.connect = new MFNode();

IS26.connect[0] = connect27;

connect connect28 = createNode("connect");
connect28.nodeField = "value2";
connect28.protoField = "value2";
IS26.connect[1] = connect28;

ProtoInstance25.iS = IS26;

field24.children = new MFNode();

field24.children[0] = ProtoInstance25;

Script20.field[3] = field24;

IS IS29 = createNode("IS");
connect connect30 = createNode("connect");
connect30.nodeField = "value_changed";
connect30.protoField = "value_changed";
IS29.connect = new MFNode();

IS29.connect[0] = connect30;

Script20.iS = IS29;


Script20.setSourceCode(`vrmlscript:\n"+
"function set_value1(value) {  }\n"+
"\n"+
"function set_value2(value) {  }\n"+
"\n"+
"function eventsProcessed () {\n"+
"	b = v.value1 || v.value2;\n"+
"	if (b != value_changed) value_changed = b;\n"+
"}`)
ProtoBody13.children[1] = Script20;

ROUTE ROUTE31 = createNode("ROUTE");
ROUTE31.fromNode = "_1";
ROUTE31.fromField = "value1_changed";
ROUTE31.toNode = "_boolean";
ROUTE31.toField = "set_value1";
ProtoBody13.children[2] = ROUTE31;

ROUTE ROUTE32 = createNode("ROUTE");
ROUTE32.fromNode = "_1";
ROUTE32.fromField = "value2_changed";
ROUTE32.toNode = "_boolean";
ROUTE32.toField = "set_value2";
ProtoBody13.children[3] = ROUTE32;

ProtoDeclare8.protoBody = ProtoBody13;

children = new MFNode();

children[0] = ProtoDeclare8;

}
