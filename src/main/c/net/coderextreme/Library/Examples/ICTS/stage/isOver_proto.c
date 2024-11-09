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
meta3.content = "Thu, 23 Apr 2015 06:07:10 GMT";
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
meta6.content = "Thu, 23 Apr 2015 06:07:10 GMT";
head1.meta[4] = meta6;

head = head1;

ProtoDeclare ProtoDeclare8 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="isOver" ><ProtoInterface><field name="set_isOver" accessType="inputOnly" type="SFBool"></field>
<field name="set_hitPoint" accessType="inputOnly" type="SFVec3f"></field>
<field name="isOver_changed" accessType="outputOnly" type="SFBool"></field>
</ProtoInterface>
<ProtoBody><Script DEF="_isOver"><field name="set_isOver" accessType="inputOnly" type="SFBool"></field>
<field name="set_hitPoint" accessType="inputOnly" type="SFVec3f"></field>
<field name="isOver_changed" accessType="outputOnly" type="SFBool"></field>
<IS><connect nodeField="set_isOver" protoField="set_isOver"></connect>
<connect nodeField="set_hitPoint" protoField="set_hitPoint"></connect>
<connect nodeField="isOver_changed" protoField="isOver_changed"></connect>
</IS>
<![CDATA[vrmlscript:
function set_isOver(value, time)
{
	isOver_changed = value;
}

function set_hitPoint(value, time)
{
	if ( isOver_changed) isOver_changed = TRUE;
}]]></Script>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "isOver";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "set_isOver";
field10.accessType = "inputOnly";
field10.type = "SFBool";
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

field field11 = createNode("field");
field11.name = "set_hitPoint";
field11.accessType = "inputOnly";
field11.type = "SFVec3f";
ProtoInterface9.field[1] = field11;

field field12 = createNode("field");
field12.name = "isOver_changed";
field12.accessType = "outputOnly";
field12.type = "SFBool";
ProtoInterface9.field[2] = field12;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody13 = createNode("ProtoBody");
Script Script14 = createNode("Script");
Script14.DEF = "_isOver";
field field15 = createNode("field");
field15.name = "set_isOver";
field15.accessType = "inputOnly";
field15.type = "SFBool";
Script14.field = new MFNode();

Script14.field[0] = field15;

field field16 = createNode("field");
field16.name = "set_hitPoint";
field16.accessType = "inputOnly";
field16.type = "SFVec3f";
Script14.field[1] = field16;

field field17 = createNode("field");
field17.name = "isOver_changed";
field17.accessType = "outputOnly";
field17.type = "SFBool";
Script14.field[2] = field17;

IS IS18 = createNode("IS");
connect connect19 = createNode("connect");
connect19.nodeField = "set_isOver";
connect19.protoField = "set_isOver";
IS18.connect = new MFNode();

IS18.connect[0] = connect19;

connect connect20 = createNode("connect");
connect20.nodeField = "set_hitPoint";
connect20.protoField = "set_hitPoint";
IS18.connect[1] = connect20;

connect connect21 = createNode("connect");
connect21.nodeField = "isOver_changed";
connect21.protoField = "isOver_changed";
IS18.connect[2] = connect21;

Script14.iS = IS18;


Script14.setSourceCode(`vrmlscript:\n"+
"function set_isOver(value, time)\n"+
"{\n"+
"	isOver_changed = value;\n"+
"}\n"+
"\n"+
"function set_hitPoint(value, time)\n"+
"{\n"+
"	if ( isOver_changed) isOver_changed = TRUE;\n"+
"}`)
ProtoBody13.children = new MFNode();

ProtoBody13.children[0] = Script14;

ProtoDeclare8.protoBody = ProtoBody13;

children = new MFNode();

children[0] = ProtoDeclare8;

}
