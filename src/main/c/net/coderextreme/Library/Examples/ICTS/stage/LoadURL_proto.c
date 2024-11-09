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
<ProtoDeclare name="LoadURL" ><ProtoInterface><field name="url" accessType="inputOutput" type="MFString" value="&quot;&quot;"></field>
<field name="parameter" accessType="inputOutput" type="MFString" value="&quot;&quot;"></field>
<field name="startTime" accessType="inputOnly" type="SFTime"></field>
</ProtoInterface>
<ProtoBody><ProtoDeclare name="Data"><ProtoInterface><field name="url" accessType="inputOutput" type="MFString" value="&quot;&quot;"></field>
<field name="parameter" accessType="inputOutput" type="MFString" value="&quot;&quot;"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>
<Script DEF="_loadUrl_1" directOutput="true" mustEvaluate="true"><field name="startTime" accessType="inputOnly" type="SFTime"></field>
<field name="set_url" accessType="inputOnly" type="MFString"></field>
<field name="data" accessType="initializeOnly" type="SFNode"><ProtoInstance name="Data" DEF="Data"><IS><connect nodeField="url" protoField="url"></connect>
<connect nodeField="parameter" protoField="parameter"></connect>
</IS>
</ProtoInstance>
</field>
<IS><connect nodeField="startTime" protoField="startTime"></connect>
</IS>
<![CDATA[vrmlscript:
function startTime(value, time)
{
	Browser.loadURL(data.url, data.parameter);
}

function set_url(value, time)
{
	startTime( time, time );
}]]></Script>
<ROUTE fromNode="Data" fromField="url_changed" toNode="_loadUrl_1" toField="set_url"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "LoadURL";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "url";
field10.accessType = "inputOutput";
field10.type = "MFString";
field10.value = "\"\"";
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

field field11 = createNode("field");
field11.name = "parameter";
field11.accessType = "inputOutput";
field11.type = "MFString";
field11.value = "\"\"";
ProtoInterface9.field[1] = field11;

field field12 = createNode("field");
field12.name = "startTime";
field12.accessType = "inputOnly";
field12.type = "SFTime";
ProtoInterface9.field[2] = field12;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody13 = createNode("ProtoBody");
ProtoDeclare ProtoDeclare14 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Data" ><ProtoInterface><field name="url" accessType="inputOutput" type="MFString" value="&quot;&quot;"></field>
<field name="parameter" accessType="inputOutput" type="MFString" value="&quot;&quot;"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare14.name = "Data";
ProtoInterface ProtoInterface15 = createNode("ProtoInterface");
field field16 = createNode("field");
field16.name = "url";
field16.accessType = "inputOutput";
field16.type = "MFString";
field16.value = "\"\"";
ProtoInterface15.field = new MFNode();

ProtoInterface15.field[0] = field16;

field field17 = createNode("field");
field17.name = "parameter";
field17.accessType = "inputOutput";
field17.type = "MFString";
field17.value = "\"\"";
ProtoInterface15.field[1] = field17;

ProtoDeclare14.protoInterface = ProtoInterface15;

ProtoBody ProtoBody18 = createNode("ProtoBody");
Group Group19 = createNode("Group");
ProtoBody18.children = new MFNode();

ProtoBody18.children[0] = Group19;

ProtoDeclare14.protoBody = ProtoBody18;

ProtoBody13.children = new MFNode();

ProtoBody13.children[0] = ProtoDeclare14;

Script Script20 = createNode("Script");
Script20.DEF = "_loadUrl_1";
Script20.directOutput = True;
Script20.mustEvaluate = True;
field field21 = createNode("field");
field21.name = "startTime";
field21.accessType = "inputOnly";
field21.type = "SFTime";
Script20.field = new MFNode();

Script20.field[0] = field21;

field field22 = createNode("field");
field22.name = "set_url";
field22.accessType = "inputOnly";
field22.type = "MFString";
Script20.field[1] = field22;

field field23 = createNode("field");
field23.name = "data";
field23.accessType = "initializeOnly";
field23.type = "SFNode";
ProtoInstance ProtoInstance24 = createNode("ProtoInstance");
ProtoInstance24.name = "Data";
ProtoInstance24.DEF = "Data";
IS IS25 = createNode("IS");
connect connect26 = createNode("connect");
connect26.nodeField = "url";
connect26.protoField = "url";
IS25.connect = new MFNode();

IS25.connect[0] = connect26;

connect connect27 = createNode("connect");
connect27.nodeField = "parameter";
connect27.protoField = "parameter";
IS25.connect[1] = connect27;

ProtoInstance24.iS = IS25;

field23.children = new MFNode();

field23.children[0] = ProtoInstance24;

Script20.field[2] = field23;

IS IS28 = createNode("IS");
connect connect29 = createNode("connect");
connect29.nodeField = "startTime";
connect29.protoField = "startTime";
IS28.connect = new MFNode();

IS28.connect[0] = connect29;

Script20.iS = IS28;


Script20.setSourceCode(`vrmlscript:\n"+
"function startTime(value, time)\n"+
"{\n"+
"	Browser.loadURL(data.url, data.parameter);\n"+
"}\n"+
"\n"+
"function set_url(value, time)\n"+
"{\n"+
"	startTime( time, time );\n"+
"}`)
ProtoBody13.children[1] = Script20;

ROUTE ROUTE30 = createNode("ROUTE");
ROUTE30.fromNode = "Data";
ROUTE30.fromField = "url_changed";
ROUTE30.toNode = "_loadUrl_1";
ROUTE30.toField = "set_url";
ProtoBody13.children[2] = ROUTE30;

ProtoDeclare8.protoBody = ProtoBody13;

children = new MFNode();

children[0] = ProtoDeclare8;

}
