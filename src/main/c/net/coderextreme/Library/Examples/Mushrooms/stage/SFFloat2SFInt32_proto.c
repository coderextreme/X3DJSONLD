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
meta3.content = "Fri, 25 Sep 2015 17:43:15 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V1.1.1, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Fri, 25 Sep 2015 17:43:15 GMT";
head1.meta[4] = meta6;

head = head1;

ProtoDeclare ProtoDeclare8 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="SFFloat2SFInt32" ><ProtoInterface><field name="set_SFFloat" accessType="inputOnly" type="SFFloat"></field>
<field name="value_changed" accessType="outputOnly" type="SFInt32"></field>
</ProtoInterface>
<ProtoBody><Script><field name="value_changed" accessType="outputOnly" type="SFInt32"></field>
<field name="set_SFFloat" accessType="inputOnly" type="SFFloat"></field>
<IS><connect nodeField="value_changed" protoField="value_changed"></connect>
<connect nodeField="set_SFFloat" protoField="set_SFFloat"></connect>
</IS>
<![CDATA[vrmlscript:
function set_SFFloat(value, time)
{
	value_changed = value;
}]]></Script>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "SFFloat2SFInt32";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "set_SFFloat";
field10.accessType = "inputOnly";
field10.type = "SFFloat";
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

field field11 = createNode("field");
field11.name = "value_changed";
field11.accessType = "outputOnly";
field11.type = "SFInt32";
ProtoInterface9.field[1] = field11;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody12 = createNode("ProtoBody");
Script Script13 = createNode("Script");
field field14 = createNode("field");
field14.name = "value_changed";
field14.accessType = "outputOnly";
field14.type = "SFInt32";
Script13.field = new MFNode();

Script13.field[0] = field14;

field field15 = createNode("field");
field15.name = "set_SFFloat";
field15.accessType = "inputOnly";
field15.type = "SFFloat";
Script13.field[1] = field15;

IS IS16 = createNode("IS");
connect connect17 = createNode("connect");
connect17.nodeField = "value_changed";
connect17.protoField = "value_changed";
IS16.connect = new MFNode();

IS16.connect[0] = connect17;

connect connect18 = createNode("connect");
connect18.nodeField = "set_SFFloat";
connect18.protoField = "set_SFFloat";
IS16.connect[1] = connect18;

Script13.iS = IS16;


Script13.setSourceCode(`vrmlscript:\n"+
"function set_SFFloat(value, time)\n"+
"{\n"+
"	value_changed = value;\n"+
"}`)
ProtoBody12.children = new MFNode();

ProtoBody12.children[0] = Script13;

ProtoDeclare8.protoBody = ProtoBody12;

children = new MFNode();

children[0] = ProtoDeclare8;

WorldInfo WorldInfo19 = createNode("WorldInfo");
WorldInfo19.info = new MFString(new java.lang.String[", ","Created in Titania, ","Packaged by CosmoPackagePackaged by CosmoPackage"]);
children[1] = WorldInfo19;

}
