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
meta3.content = "Thu, 23 Apr 2015 06:07:09 GMT";
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
meta6.content = "Thu, 23 Apr 2015 06:07:09 GMT";
head1.meta[4] = meta6;

head = head1;

ProtoDeclare ProtoDeclare8 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Int" ><ProtoInterface><field name="startTime" accessType="inputOnly" type="SFTime"></field>
<field name="value_changed" accessType="outputOnly" type="SFInt32"></field>
<field name="keyValue" accessType="inputOutput" type="SFInt32"></field>
</ProtoInterface>
<ProtoBody><ProtoDeclare name="Data"><ProtoInterface><field name="keyValue" accessType="inputOutput" type="SFInt32"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>
<Script DEF="_bool" directOutput="true"><field name="startTime" accessType="inputOnly" type="SFTime"></field>
<field name="value_changed" accessType="outputOnly" type="SFInt32"></field>
<field name="data" accessType="initializeOnly" type="SFNode"><ProtoInstance name="Data"><IS><connect nodeField="keyValue" protoField="keyValue"></connect>
</IS>
</ProtoInstance>
</field>
<IS><connect nodeField="startTime" protoField="startTime"></connect>
<connect nodeField="value_changed" protoField="value_changed"></connect>
</IS>
<![CDATA[vrmlscript:
function startTime(value, time)
{
	value_changed = data.keyValue;
}]]></Script>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "Int";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "startTime";
field10.accessType = "inputOnly";
field10.type = "SFTime";
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

field field11 = createNode("field");
field11.name = "value_changed";
field11.accessType = "outputOnly";
field11.type = "SFInt32";
ProtoInterface9.field[1] = field11;

field field12 = createNode("field");
field12.name = "keyValue";
field12.accessType = "inputOutput";
field12.type = "SFInt32";
ProtoInterface9.field[2] = field12;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody13 = createNode("ProtoBody");
ProtoDeclare ProtoDeclare14 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Data" ><ProtoInterface><field name="keyValue" accessType="inputOutput" type="SFInt32"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare14.name = "Data";
ProtoInterface ProtoInterface15 = createNode("ProtoInterface");
field field16 = createNode("field");
field16.name = "keyValue";
field16.accessType = "inputOutput";
field16.type = "SFInt32";
ProtoInterface15.field = new MFNode();

ProtoInterface15.field[0] = field16;

ProtoDeclare14.protoInterface = ProtoInterface15;

ProtoBody ProtoBody17 = createNode("ProtoBody");
Group Group18 = createNode("Group");
ProtoBody17.children = new MFNode();

ProtoBody17.children[0] = Group18;

ProtoDeclare14.protoBody = ProtoBody17;

ProtoBody13.children = new MFNode();

ProtoBody13.children[0] = ProtoDeclare14;

Script Script19 = createNode("Script");
Script19.DEF = "_bool";
Script19.directOutput = True;
field field20 = createNode("field");
field20.name = "startTime";
field20.accessType = "inputOnly";
field20.type = "SFTime";
Script19.field = new MFNode();

Script19.field[0] = field20;

field field21 = createNode("field");
field21.name = "value_changed";
field21.accessType = "outputOnly";
field21.type = "SFInt32";
Script19.field[1] = field21;

field field22 = createNode("field");
field22.name = "data";
field22.accessType = "initializeOnly";
field22.type = "SFNode";
ProtoInstance ProtoInstance23 = createNode("ProtoInstance");
ProtoInstance23.name = "Data";
IS IS24 = createNode("IS");
connect connect25 = createNode("connect");
connect25.nodeField = "keyValue";
connect25.protoField = "keyValue";
IS24.connect = new MFNode();

IS24.connect[0] = connect25;

ProtoInstance23.iS = IS24;

field22.children = new MFNode();

field22.children[0] = ProtoInstance23;

Script19.field[2] = field22;

IS IS26 = createNode("IS");
connect connect27 = createNode("connect");
connect27.nodeField = "startTime";
connect27.protoField = "startTime";
IS26.connect = new MFNode();

IS26.connect[0] = connect27;

connect connect28 = createNode("connect");
connect28.nodeField = "value_changed";
connect28.protoField = "value_changed";
IS26.connect[1] = connect28;

Script19.iS = IS26;


Script19.setSourceCode(`vrmlscript:\n"+
"function startTime(value, time)\n"+
"{\n"+
"	value_changed = data.keyValue;\n"+
"}`)
ProtoBody13.children[1] = Script19;

ProtoDeclare8.protoBody = ProtoBody13;

children = new MFNode();

children[0] = ProtoDeclare8;

}
