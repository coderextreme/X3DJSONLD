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
<ProtoDeclare name="NegSFVec3f" ><ProtoInterface><field name="set_SFVec3f" accessType="inputOnly" type="SFVec3f"></field>
<field name="value_changed" accessType="outputOnly" type="SFVec3f"></field>
</ProtoInterface>
<ProtoBody><Script DEF="_neg"><field name="set_SFVec3f" accessType="inputOnly" type="SFVec3f"></field>
<field name="value_changed" accessType="outputOnly" type="SFVec3f"></field>
<IS><connect nodeField="set_SFVec3f" protoField="set_SFVec3f"></connect>
<connect nodeField="value_changed" protoField="value_changed"></connect>
</IS>
<![CDATA[vrmlscript:
function set_SFVec3f(value, time)
{
	value_changed = value.multiply(-1);
}]]></Script>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "NegSFVec3f";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "set_SFVec3f";
field10.accessType = "inputOnly";
field10.type = "SFVec3f";
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

field field11 = createNode("field");
field11.name = "value_changed";
field11.accessType = "outputOnly";
field11.type = "SFVec3f";
ProtoInterface9.field[1] = field11;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody12 = createNode("ProtoBody");
Script Script13 = createNode("Script");
Script13.DEF = "_neg";
field field14 = createNode("field");
field14.name = "set_SFVec3f";
field14.accessType = "inputOnly";
field14.type = "SFVec3f";
Script13.field = new MFNode();

Script13.field[0] = field14;

field field15 = createNode("field");
field15.name = "value_changed";
field15.accessType = "outputOnly";
field15.type = "SFVec3f";
Script13.field[1] = field15;

IS IS16 = createNode("IS");
connect connect17 = createNode("connect");
connect17.nodeField = "set_SFVec3f";
connect17.protoField = "set_SFVec3f";
IS16.connect = new MFNode();

IS16.connect[0] = connect17;

connect connect18 = createNode("connect");
connect18.nodeField = "value_changed";
connect18.protoField = "value_changed";
IS16.connect[1] = connect18;

Script13.iS = IS16;


Script13.setSourceCode(`vrmlscript:\n"+
"function set_SFVec3f(value, time)\n"+
"{\n"+
"	value_changed = value.multiply(-1);\n"+
"}`)
ProtoBody12.children = new MFNode();

ProtoBody12.children[0] = Script13;

ProtoDeclare8.protoBody = ProtoBody12;

children = new MFNode();

children[0] = ProtoDeclare8;

}
