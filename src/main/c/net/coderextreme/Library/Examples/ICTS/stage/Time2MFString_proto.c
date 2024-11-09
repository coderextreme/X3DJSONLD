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
meta3.content = "Thu, 23 Apr 2015 06:07:16 GMT";
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
meta6.content = "Thu, 23 Apr 2015 06:07:16 GMT";
head1.meta[4] = meta6;

head = head1;

ProtoDeclare ProtoDeclare8 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Time2MFString" ><ProtoInterface><field name="set_time" accessType="inputOnly" type="SFTime"></field>
<field name="string_changed" accessType="outputOnly" type="MFString"></field>
</ProtoInterface>
<ProtoBody><Script><field name="string_changed" accessType="outputOnly" type="MFString"></field>
<field name="set_time" accessType="inputOnly" type="SFTime"></field>
<IS><connect nodeField="string_changed" protoField="string_changed"></connect>
<connect nodeField="set_time" protoField="set_time"></connect>
</IS>
<![CDATA[vrmlscript:

function set_time(value, time)
{
	t2 = value;
	mil = Math.floor(t2 * 1000) % 1000;
	t2 = Math.floor(t2);
	sec = t2%60;
	min = Math.floor((t2 - sec)/60)%60;
	s = (min > 9 ? min : "0" + min) + "." + (sec > 9 ? sec : "0" + sec )+ "." + mil;
	string_changed = new MFString(s);
}]]></Script>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "Time2MFString";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "set_time";
field10.accessType = "inputOnly";
field10.type = "SFTime";
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

field field11 = createNode("field");
field11.name = "string_changed";
field11.accessType = "outputOnly";
field11.type = "MFString";
ProtoInterface9.field[1] = field11;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody12 = createNode("ProtoBody");
Script Script13 = createNode("Script");
field field14 = createNode("field");
field14.name = "string_changed";
field14.accessType = "outputOnly";
field14.type = "MFString";
Script13.field = new MFNode();

Script13.field[0] = field14;

field field15 = createNode("field");
field15.name = "set_time";
field15.accessType = "inputOnly";
field15.type = "SFTime";
Script13.field[1] = field15;

IS IS16 = createNode("IS");
connect connect17 = createNode("connect");
connect17.nodeField = "string_changed";
connect17.protoField = "string_changed";
IS16.connect = new MFNode();

IS16.connect[0] = connect17;

connect connect18 = createNode("connect");
connect18.nodeField = "set_time";
connect18.protoField = "set_time";
IS16.connect[1] = connect18;

Script13.iS = IS16;


Script13.setSourceCode(`vrmlscript:\n"+
"\n"+
"function set_time(value, time)\n"+
"{\n"+
"	t2 = value;\n"+
"	mil = Math.floor(t2 * 1000) % 1000;\n"+
"	t2 = Math.floor(t2);\n"+
"	sec = t2%60;\n"+
"	min = Math.floor((t2 - sec)/60)%60;\n"+
"	s = (min > 9 ? min : \"0\" + min) + \".\" + (sec > 9 ? sec : \"0\" + sec )+ \".\" + mil;\n"+
"	string_changed = new MFString(s);\n"+
"}`)
ProtoBody12.children = new MFNode();

ProtoBody12.children[0] = Script13;

ProtoDeclare8.protoBody = ProtoBody12;

children = new MFNode();

children[0] = ProtoDeclare8;

WorldInfo WorldInfo19 = createNode("WorldInfo");
WorldInfo19.info = new MFString(new java.lang.String[", ","Created in TitaniaPackaged by CosmoPackage"]);
children[1] = WorldInfo19;

}
