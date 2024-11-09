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
<ProtoDeclare name="JavaScript" ><ProtoInterface><field name="startTime" accessType="inputOutput" type="SFTime"></field>
<field name="javascript" accessType="inputOutput" type="MFString" value="&quot;focus();&quot;"></field>
</ProtoInterface>
<ProtoBody><ProtoDeclare name="Data"><ProtoInterface><field name="startTime" accessType="inputOutput" type="SFTime"></field>
<field name="javascript" accessType="inputOutput" type="MFString" value="&quot;&quot;"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>
<Script DEF="_loadUrl_1" directOutput="true" mustEvaluate="true"><field name="set_startTime" accessType="inputOnly" type="SFTime"></field>
<field name="data" accessType="initializeOnly" type="SFNode"><ProtoInstance name="Data" DEF="Data_1"><IS><connect nodeField="startTime" protoField="startTime"></connect>
<connect nodeField="javascript" protoField="javascript"></connect>
</IS>
</ProtoInstance>
</field>
<field name="Url" accessType="initializeOnly" type="MFString" value="&quot;&quot;"></field>
<field name="Parameter" accessType="initializeOnly" type="MFString" value="&quot;&quot;"></field>
<![CDATA[vrmlscript:
function set_startTime(value, time)
{
	Url[0] = 'javascript: ';
	for (i=0; i<data.javascript.length; i++) Url[0] += data.javascript[i];
	Browser.loadURL(Url, Parameter);
}]]></Script>
<ROUTE fromNode="Data_1" fromField="startTime_changed" toNode="_loadUrl_1" toField="set_startTime"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "JavaScript";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "startTime";
field10.accessType = "inputOutput";
field10.type = "SFTime";
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

field field11 = createNode("field");
field11.name = "javascript";
field11.accessType = "inputOutput";
field11.type = "MFString";
field11.value = "\"focus();\"";
ProtoInterface9.field[1] = field11;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody12 = createNode("ProtoBody");
ProtoDeclare ProtoDeclare13 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Data" ><ProtoInterface><field name="startTime" accessType="inputOutput" type="SFTime"></field>
<field name="javascript" accessType="inputOutput" type="MFString" value="&quot;&quot;"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare13.name = "Data";
ProtoInterface ProtoInterface14 = createNode("ProtoInterface");
field field15 = createNode("field");
field15.name = "startTime";
field15.accessType = "inputOutput";
field15.type = "SFTime";
ProtoInterface14.field = new MFNode();

ProtoInterface14.field[0] = field15;

field field16 = createNode("field");
field16.name = "javascript";
field16.accessType = "inputOutput";
field16.type = "MFString";
field16.value = "\"\"";
ProtoInterface14.field[1] = field16;

ProtoDeclare13.protoInterface = ProtoInterface14;

ProtoBody ProtoBody17 = createNode("ProtoBody");
Group Group18 = createNode("Group");
ProtoBody17.children = new MFNode();

ProtoBody17.children[0] = Group18;

ProtoDeclare13.protoBody = ProtoBody17;

ProtoBody12.children = new MFNode();

ProtoBody12.children[0] = ProtoDeclare13;

Script Script19 = createNode("Script");
Script19.DEF = "_loadUrl_1";
Script19.directOutput = True;
Script19.mustEvaluate = True;
field field20 = createNode("field");
field20.name = "set_startTime";
field20.accessType = "inputOnly";
field20.type = "SFTime";
Script19.field = new MFNode();

Script19.field[0] = field20;

field field21 = createNode("field");
field21.name = "data";
field21.accessType = "initializeOnly";
field21.type = "SFNode";
ProtoInstance ProtoInstance22 = createNode("ProtoInstance");
ProtoInstance22.name = "Data";
ProtoInstance22.DEF = "Data_1";
IS IS23 = createNode("IS");
connect connect24 = createNode("connect");
connect24.nodeField = "startTime";
connect24.protoField = "startTime";
IS23.connect = new MFNode();

IS23.connect[0] = connect24;

connect connect25 = createNode("connect");
connect25.nodeField = "javascript";
connect25.protoField = "javascript";
IS23.connect[1] = connect25;

ProtoInstance22.iS = IS23;

field21.children = new MFNode();

field21.children[0] = ProtoInstance22;

Script19.field[1] = field21;

field field26 = createNode("field");
field26.name = "Url";
field26.accessType = "initializeOnly";
field26.type = "MFString";
field26.value = "\"\"";
Script19.field[2] = field26;

field field27 = createNode("field");
field27.name = "Parameter";
field27.accessType = "initializeOnly";
field27.type = "MFString";
field27.value = "\"\"";
Script19.field[3] = field27;


Script19.setSourceCode(`vrmlscript:\n"+
"function set_startTime(value, time)\n"+
"{\n"+
"	Url[0] = 'javascript: ';\n"+
"	for (i=0; i<data.javascript.length; i++) Url[0] += data.javascript[i];\n"+
"	Browser.loadURL(Url, Parameter);\n"+
"}`)
ProtoBody12.children[1] = Script19;

ROUTE ROUTE28 = createNode("ROUTE");
ROUTE28.fromNode = "Data_1";
ROUTE28.fromField = "startTime_changed";
ROUTE28.toNode = "_loadUrl_1";
ROUTE28.toField = "set_startTime";
ProtoBody12.children[2] = ROUTE28;

ProtoDeclare8.protoBody = ProtoBody12;

children = new MFNode();

children[0] = ProtoDeclare8;

}
