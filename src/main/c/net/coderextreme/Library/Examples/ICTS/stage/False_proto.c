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
meta3.content = "Thu, 23 Apr 2015 06:07:03 GMT";
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
meta6.content = "Thu, 23 Apr 2015 06:07:03 GMT";
head1.meta[4] = meta6;

head = head1;

ProtoDeclare ProtoDeclare8 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="False" ><ProtoInterface><field name="set_SFBool" accessType="inputOnly" type="SFBool"></field>
<field name="startTime" accessType="outputOnly" type="SFTime"></field>
</ProtoInterface>
<ProtoBody><Script DEF="_false"><field name="startTime" accessType="outputOnly" type="SFTime"></field>
<field name="set_SFBool" accessType="inputOnly" type="SFBool"></field>
<IS><connect nodeField="startTime" protoField="startTime"></connect>
<connect nodeField="set_SFBool" protoField="set_SFBool"></connect>
</IS>
<![CDATA[vrmlscript:
function set_SFBool(value, time)
{
	if (!value) startTime = time;
}]]></Script>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "False";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "set_SFBool";
field10.accessType = "inputOnly";
field10.type = "SFBool";
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

field field11 = createNode("field");
field11.name = "startTime";
field11.accessType = "outputOnly";
field11.type = "SFTime";
ProtoInterface9.field[1] = field11;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody12 = createNode("ProtoBody");
Script Script13 = createNode("Script");
Script13.DEF = "_false";
field field14 = createNode("field");
field14.name = "startTime";
field14.accessType = "outputOnly";
field14.type = "SFTime";
Script13.field = new MFNode();

Script13.field[0] = field14;

field field15 = createNode("field");
field15.name = "set_SFBool";
field15.accessType = "inputOnly";
field15.type = "SFBool";
Script13.field[1] = field15;

IS IS16 = createNode("IS");
connect connect17 = createNode("connect");
connect17.nodeField = "startTime";
connect17.protoField = "startTime";
IS16.connect = new MFNode();

IS16.connect[0] = connect17;

connect connect18 = createNode("connect");
connect18.nodeField = "set_SFBool";
connect18.protoField = "set_SFBool";
IS16.connect[1] = connect18;

Script13.iS = IS16;


Script13.setSourceCode(`vrmlscript:\n"+
"function set_SFBool(value, time)\n"+
"{\n"+
"	if (!value) startTime = time;\n"+
"}`)
ProtoBody12.children = new MFNode();

ProtoBody12.children[0] = Script13;

ProtoDeclare8.protoBody = ProtoBody12;

children = new MFNode();

children[0] = ProtoDeclare8;

}
