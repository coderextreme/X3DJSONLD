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
meta3.content = "Sat, 05 Sep 2015 17:32:47 GMT";
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
meta6.content = "Sat, 05 Sep 2015 17:32:47 GMT";
head1.meta[4] = meta6;

head = head1;

ProtoDeclare ProtoDeclare8 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="MFInt32" ><ProtoInterface><field name="set_triggerTime" accessType="inputOnly" type="SFTime"></field>
<field name="keyValue" accessType="inputOutput" type="MFInt32"></field>
<field name="value_changed" accessType="outputOnly" type="MFInt32"></field>
</ProtoInterface>
<ProtoBody><Script DEF="MFInt32"><field name="set_triggerTime" accessType="inputOnly" type="SFTime"></field>
<field name="keyValue" accessType="inputOutput" type="MFInt32"></field>
<field name="value_changed" accessType="outputOnly" type="MFInt32"></field>
<IS><connect nodeField="set_triggerTime" protoField="set_triggerTime"></connect>
<connect nodeField="keyValue" protoField="keyValue"></connect>
<connect nodeField="value_changed" protoField="value_changed"></connect>
</IS>
<![CDATA[javascript:
function set_triggerTime (value, time)
{
	value_changed = keyValue;
}]]></Script>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "MFInt32";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "set_triggerTime";
field10.accessType = "inputOnly";
field10.type = "SFTime";
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

field field11 = createNode("field");
field11.name = "keyValue";
field11.accessType = "inputOutput";
field11.type = "MFInt32";
ProtoInterface9.field[1] = field11;

field field12 = createNode("field");
field12.name = "value_changed";
field12.accessType = "outputOnly";
field12.type = "MFInt32";
ProtoInterface9.field[2] = field12;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody13 = createNode("ProtoBody");
Script Script14 = createNode("Script");
Script14.DEF = "MFInt32";
field field15 = createNode("field");
field15.name = "set_triggerTime";
field15.accessType = "inputOnly";
field15.type = "SFTime";
Script14.field = new MFNode();

Script14.field[0] = field15;

field field16 = createNode("field");
field16.name = "keyValue";
field16.accessType = "inputOutput";
field16.type = "MFInt32";
Script14.field[1] = field16;

field field17 = createNode("field");
field17.name = "value_changed";
field17.accessType = "outputOnly";
field17.type = "MFInt32";
Script14.field[2] = field17;

IS IS18 = createNode("IS");
connect connect19 = createNode("connect");
connect19.nodeField = "set_triggerTime";
connect19.protoField = "set_triggerTime";
IS18.connect = new MFNode();

IS18.connect[0] = connect19;

connect connect20 = createNode("connect");
connect20.nodeField = "keyValue";
connect20.protoField = "keyValue";
IS18.connect[1] = connect20;

connect connect21 = createNode("connect");
connect21.nodeField = "value_changed";
connect21.protoField = "value_changed";
IS18.connect[2] = connect21;

Script14.iS = IS18;


Script14.setSourceCode(`javascript:\n"+
"function set_triggerTime (value, time)\n"+
"{\n"+
"	value_changed = keyValue;\n"+
"}`)
ProtoBody13.children = new MFNode();

ProtoBody13.children[0] = Script14;

ProtoDeclare8.protoBody = ProtoBody13;

children = new MFNode();

children[0] = ProtoDeclare8;

}
