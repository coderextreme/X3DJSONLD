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
<ProtoDeclare name="BoolSwitch" ><ProtoInterface><field name="isActive" accessType="inputOnly" type="SFBool"></field>
<field name="wichChoice_changed" accessType="outputOnly" type="SFInt32"></field>
</ProtoInterface>
<ProtoBody><Script><field name="isActive" accessType="inputOnly" type="SFBool"></field>
<field name="wichChoice_changed" accessType="outputOnly" type="SFInt32"></field>
<IS><connect nodeField="isActive" protoField="isActive"></connect>
<connect nodeField="wichChoice_changed" protoField="wichChoice_changed"></connect>
</IS>
<![CDATA[vrmlscript:
function isActive(value, time)
{
	wichChoice_changed = value;
}]]></Script>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "BoolSwitch";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "isActive";
field10.accessType = "inputOnly";
field10.type = "SFBool";
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

field field11 = createNode("field");
field11.name = "wichChoice_changed";
field11.accessType = "outputOnly";
field11.type = "SFInt32";
ProtoInterface9.field[1] = field11;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody12 = createNode("ProtoBody");
Script Script13 = createNode("Script");
field field14 = createNode("field");
field14.name = "isActive";
field14.accessType = "inputOnly";
field14.type = "SFBool";
Script13.field = new MFNode();

Script13.field[0] = field14;

field field15 = createNode("field");
field15.name = "wichChoice_changed";
field15.accessType = "outputOnly";
field15.type = "SFInt32";
Script13.field[1] = field15;

IS IS16 = createNode("IS");
connect connect17 = createNode("connect");
connect17.nodeField = "isActive";
connect17.protoField = "isActive";
IS16.connect = new MFNode();

IS16.connect[0] = connect17;

connect connect18 = createNode("connect");
connect18.nodeField = "wichChoice_changed";
connect18.protoField = "wichChoice_changed";
IS16.connect[1] = connect18;

Script13.iS = IS16;


Script13.setSourceCode(`vrmlscript:\n"+
"function isActive(value, time)\n"+
"{\n"+
"	wichChoice_changed = value;\n"+
"}`)
ProtoBody12.children = new MFNode();

ProtoBody12.children[0] = Script13;

ProtoDeclare8.protoBody = ProtoBody12;

children = new MFNode();

children[0] = ProtoDeclare8;

}
