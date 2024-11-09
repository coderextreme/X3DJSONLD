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
meta3.content = "Thu, 23 Apr 2015 06:06:57 GMT";
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
meta6.content = "Thu, 23 Apr 2015 06:06:57 GMT";
head1.meta[4] = meta6;

head = head1;

ProtoDeclare ProtoDeclare8 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="AnimShadow" ><ProtoInterface><field name="set_translation" accessType="inputOnly" type="SFVec3f"></field>
<field name="position_changed" accessType="outputOnly" type="SFVec3f"></field>
</ProtoInterface>
<ProtoBody><Script DEF="_animShadow"><field name="set_translation" accessType="inputOnly" type="SFVec3f"></field>
<field name="position_changed" accessType="outputOnly" type="SFVec3f"></field>
<IS><connect nodeField="set_translation" protoField="set_translation"></connect>
<connect nodeField="position_changed" protoField="position_changed"></connect>
</IS>
<![CDATA[vrmlscript:
function set_translation(value, time)
{
	position_changed = new SFVec3f(value.x, 0, value.z);
}]]></Script>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "AnimShadow";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "set_translation";
field10.accessType = "inputOnly";
field10.type = "SFVec3f";
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

field field11 = createNode("field");
field11.name = "position_changed";
field11.accessType = "outputOnly";
field11.type = "SFVec3f";
ProtoInterface9.field[1] = field11;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody12 = createNode("ProtoBody");
Script Script13 = createNode("Script");
Script13.DEF = "_animShadow";
field field14 = createNode("field");
field14.name = "set_translation";
field14.accessType = "inputOnly";
field14.type = "SFVec3f";
Script13.field = new MFNode();

Script13.field[0] = field14;

field field15 = createNode("field");
field15.name = "position_changed";
field15.accessType = "outputOnly";
field15.type = "SFVec3f";
Script13.field[1] = field15;

IS IS16 = createNode("IS");
connect connect17 = createNode("connect");
connect17.nodeField = "set_translation";
connect17.protoField = "set_translation";
IS16.connect = new MFNode();

IS16.connect[0] = connect17;

connect connect18 = createNode("connect");
connect18.nodeField = "position_changed";
connect18.protoField = "position_changed";
IS16.connect[1] = connect18;

Script13.iS = IS16;


Script13.setSourceCode(`vrmlscript:\n"+
"function set_translation(value, time)\n"+
"{\n"+
"	position_changed = new SFVec3f(value.x, 0, value.z);\n"+
"}`)
ProtoBody12.children = new MFNode();

ProtoBody12.children[0] = Script13;

ProtoDeclare8.protoBody = ProtoBody12;

children = new MFNode();

children[0] = ProtoDeclare8;

}
