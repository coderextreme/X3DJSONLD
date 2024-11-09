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
meta3.content = "Thu, 23 Apr 2015 06:06:56 GMT";
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
meta6.content = "Thu, 23 Apr 2015 06:06:56 GMT";
head1.meta[4] = meta6;

head = head1;

ProtoDeclare ProtoDeclare8 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="AnimCtrl" ><ProtoInterface><field name="start" accessType="inputOnly" type="SFBool"></field>
<field name="stop" accessType="inputOnly" type="SFBool"></field>
<field name="stoped" accessType="outputOnly" type="SFBool"></field>
<field name="isActive" accessType="outputOnly" type="SFBool"></field>
</ProtoInterface>
<ProtoBody><Script DEF="_animCtrl"><field name="start" accessType="inputOnly" type="SFBool"></field>
<field name="stop" accessType="inputOnly" type="SFBool"></field>
<field name="stoped" accessType="outputOnly" type="SFBool"></field>
<field name="isActive" accessType="outputOnly" type="SFBool"></field>
<IS><connect nodeField="start" protoField="start"></connect>
<connect nodeField="stop" protoField="stop"></connect>
<connect nodeField="stoped" protoField="stoped"></connect>
<connect nodeField="isActive" protoField="isActive"></connect>
</IS>
<![CDATA[vrmlscript:
function start(value, time)
{
	if (value) {
		isActive = TRUE;
	}
}

function stop(value, time)
{
	if (!value) {
		stoped = TRUE;
		isActive = FALSE;
	}
}]]></Script>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "AnimCtrl";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "start";
field10.accessType = "inputOnly";
field10.type = "SFBool";
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

field field11 = createNode("field");
field11.name = "stop";
field11.accessType = "inputOnly";
field11.type = "SFBool";
ProtoInterface9.field[1] = field11;

field field12 = createNode("field");
field12.name = "stoped";
field12.accessType = "outputOnly";
field12.type = "SFBool";
ProtoInterface9.field[2] = field12;

field field13 = createNode("field");
field13.name = "isActive";
field13.accessType = "outputOnly";
field13.type = "SFBool";
ProtoInterface9.field[3] = field13;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody14 = createNode("ProtoBody");
Script Script15 = createNode("Script");
Script15.DEF = "_animCtrl";
field field16 = createNode("field");
field16.name = "start";
field16.accessType = "inputOnly";
field16.type = "SFBool";
Script15.field = new MFNode();

Script15.field[0] = field16;

field field17 = createNode("field");
field17.name = "stop";
field17.accessType = "inputOnly";
field17.type = "SFBool";
Script15.field[1] = field17;

field field18 = createNode("field");
field18.name = "stoped";
field18.accessType = "outputOnly";
field18.type = "SFBool";
Script15.field[2] = field18;

field field19 = createNode("field");
field19.name = "isActive";
field19.accessType = "outputOnly";
field19.type = "SFBool";
Script15.field[3] = field19;

IS IS20 = createNode("IS");
connect connect21 = createNode("connect");
connect21.nodeField = "start";
connect21.protoField = "start";
IS20.connect = new MFNode();

IS20.connect[0] = connect21;

connect connect22 = createNode("connect");
connect22.nodeField = "stop";
connect22.protoField = "stop";
IS20.connect[1] = connect22;

connect connect23 = createNode("connect");
connect23.nodeField = "stoped";
connect23.protoField = "stoped";
IS20.connect[2] = connect23;

connect connect24 = createNode("connect");
connect24.nodeField = "isActive";
connect24.protoField = "isActive";
IS20.connect[3] = connect24;

Script15.iS = IS20;


Script15.setSourceCode(`vrmlscript:\n"+
"function start(value, time)\n"+
"{\n"+
"	if (value) {\n"+
"		isActive = TRUE;\n"+
"	}\n"+
"}\n"+
"\n"+
"function stop(value, time)\n"+
"{\n"+
"	if (!value) {\n"+
"		stoped = TRUE;\n"+
"		isActive = FALSE;\n"+
"	}\n"+
"}`)
ProtoBody14.children = new MFNode();

ProtoBody14.children[0] = Script15;

ProtoDeclare8.protoBody = ProtoBody14;

children = new MFNode();

children[0] = ProtoDeclare8;

}
