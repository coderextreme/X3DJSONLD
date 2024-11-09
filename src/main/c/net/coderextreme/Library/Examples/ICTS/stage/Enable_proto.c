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
meta3.content = "Thu, 23 Apr 2015 06:07:02 GMT";
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
meta6.content = "Thu, 23 Apr 2015 06:07:02 GMT";
head1.meta[4] = meta6;

head = head1;

ProtoDeclare ProtoDeclare8 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Enable" ><ProtoInterface><field name="enable" accessType="inputOnly" type="SFTime"></field>
<field name="disable" accessType="inputOnly" type="SFTime"></field>
<field name="enabled_changed" accessType="outputOnly" type="SFBool"></field>
</ProtoInterface>
<ProtoBody><Script DEF="_not"><field name="enable" accessType="inputOnly" type="SFTime"></field>
<field name="disable" accessType="inputOnly" type="SFTime"></field>
<field name="enabled_changed" accessType="outputOnly" type="SFBool"></field>
<IS><connect nodeField="enable" protoField="enable"></connect>
<connect nodeField="disable" protoField="disable"></connect>
<connect nodeField="enabled_changed" protoField="enabled_changed"></connect>
</IS>
<![CDATA[vrmlscript:
function enable(value, time)
{
	enabled_changed = TRUE;
}

function disable(value, time)
{
	enabled_changed = FALSE;
}]]></Script>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "Enable";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "enable";
field10.accessType = "inputOnly";
field10.type = "SFTime";
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

field field11 = createNode("field");
field11.name = "disable";
field11.accessType = "inputOnly";
field11.type = "SFTime";
ProtoInterface9.field[1] = field11;

field field12 = createNode("field");
field12.name = "enabled_changed";
field12.accessType = "outputOnly";
field12.type = "SFBool";
ProtoInterface9.field[2] = field12;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody13 = createNode("ProtoBody");
Script Script14 = createNode("Script");
Script14.DEF = "_not";
field field15 = createNode("field");
field15.name = "enable";
field15.accessType = "inputOnly";
field15.type = "SFTime";
Script14.field = new MFNode();

Script14.field[0] = field15;

field field16 = createNode("field");
field16.name = "disable";
field16.accessType = "inputOnly";
field16.type = "SFTime";
Script14.field[1] = field16;

field field17 = createNode("field");
field17.name = "enabled_changed";
field17.accessType = "outputOnly";
field17.type = "SFBool";
Script14.field[2] = field17;

IS IS18 = createNode("IS");
connect connect19 = createNode("connect");
connect19.nodeField = "enable";
connect19.protoField = "enable";
IS18.connect = new MFNode();

IS18.connect[0] = connect19;

connect connect20 = createNode("connect");
connect20.nodeField = "disable";
connect20.protoField = "disable";
IS18.connect[1] = connect20;

connect connect21 = createNode("connect");
connect21.nodeField = "enabled_changed";
connect21.protoField = "enabled_changed";
IS18.connect[2] = connect21;

Script14.iS = IS18;


Script14.setSourceCode(`vrmlscript:\n"+
"function enable(value, time)\n"+
"{\n"+
"	enabled_changed = TRUE;\n"+
"}\n"+
"\n"+
"function disable(value, time)\n"+
"{\n"+
"	enabled_changed = FALSE;\n"+
"}`)
ProtoBody13.children = new MFNode();

ProtoBody13.children[0] = Script14;

ProtoDeclare8.protoBody = ProtoBody13;

children = new MFNode();

children[0] = ProtoDeclare8;

}
