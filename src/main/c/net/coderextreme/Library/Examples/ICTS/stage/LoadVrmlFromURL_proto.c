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
meta3.content = "Thu, 23 Apr 2015 06:07:11 GMT";
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
meta6.content = "Thu, 23 Apr 2015 06:07:11 GMT";
head1.meta[4] = meta6;

head = head1;

ProtoDeclare ProtoDeclare8 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="LoadVrmlFromURL" ><ProtoInterface><field name="url" accessType="inputOutput" type="MFString" value="&quot;&quot;"></field>
<field name="parameter" accessType="inputOutput" type="MFString" value="&quot;&quot;"></field>
<field name="startTime" accessType="inputOnly" type="SFTime"></field>
<field name="isActive" accessType="outputOnly" type="SFBool"></field>
<field name="exitTime" accessType="outputOnly" type="SFTime"></field>
<field name="children_changed" accessType="outputOnly" type="MFNode"></field>
</ProtoInterface>
<ProtoBody><ProtoDeclare name="Data"><ProtoInterface><field name="url" accessType="inputOutput" type="MFString" value="&quot;&quot;"></field>
<field name="parameter" accessType="inputOutput" type="MFString" value="&quot;&quot;"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>
<Script DEF="_loadUrl_1" directOutput="true" mustEvaluate="true"><field name="children_changed" accessType="outputOnly" type="MFNode"></field>
<field name="isActive" accessType="outputOnly" type="SFBool"></field>
<field name="exitTime" accessType="outputOnly" type="SFTime"></field>
<field name="startTime" accessType="inputOnly" type="SFTime"></field>
<field name="addChildren" accessType="inputOnly" type="MFNode"></field>
<field name="set_url" accessType="inputOnly" type="MFString"></field>
<field name="parameter" accessType="initializeOnly" type="SFString"></field>
<field name="thisNode" accessType="initializeOnly" type="SFNode"><Script USE="_loadUrl_1"></Script>
</field>
<field name="data" accessType="initializeOnly" type="SFNode"><ProtoInstance name="Data" DEF="Data"><IS><connect nodeField="url" protoField="url"></connect>
<connect nodeField="parameter" protoField="parameter"></connect>
</IS>
</ProtoInstance>
</field>
<IS><connect nodeField="children_changed" protoField="children_changed"></connect>
<connect nodeField="isActive" protoField="isActive"></connect>
<connect nodeField="exitTime" protoField="exitTime"></connect>
<connect nodeField="startTime" protoField="startTime"></connect>
</IS>
<![CDATA[vrmlscript:
function initialize()
{
	for (i = 0; i < data.parameter.length; i++) {
		if (data.parameter[i]) parameter += "&" + data.parameter[i];
	}
}

function loadUrl()
{
	if(data.url.length > 0 && !isActive) {
		isActive = TRUE;
		Browser.createVrmlFromURL(data.url, thisNode, "addChildren");
	}
}

function startTime(value, time)
{
	loadUrl();
}

function set_url(value, time)
{
	loadUrl();
}

function addChildren(value, time)
{
	if(isActive){
		children_changed = value;
		isActive = FALSE;
		exitTime = time;
	}
}]]></Script>
<ROUTE fromNode="Data" fromField="url_changed" toNode="_loadUrl_1" toField="set_url"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "LoadVrmlFromURL";
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

field field13 = createNode("field");
field13.name = "isActive";
field13.accessType = "outputOnly";
field13.type = "SFBool";
ProtoInterface9.field[3] = field13;

field field14 = createNode("field");
field14.name = "exitTime";
field14.accessType = "outputOnly";
field14.type = "SFTime";
ProtoInterface9.field[4] = field14;

field field15 = createNode("field");
field15.name = "children_changed";
field15.accessType = "outputOnly";
field15.type = "MFNode";
ProtoInterface9.field[5] = field15;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody16 = createNode("ProtoBody");
ProtoDeclare ProtoDeclare17 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Data" ><ProtoInterface><field name="url" accessType="inputOutput" type="MFString" value="&quot;&quot;"></field>
<field name="parameter" accessType="inputOutput" type="MFString" value="&quot;&quot;"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare17.name = "Data";
ProtoInterface ProtoInterface18 = createNode("ProtoInterface");
field field19 = createNode("field");
field19.name = "url";
field19.accessType = "inputOutput";
field19.type = "MFString";
field19.value = "\"\"";
ProtoInterface18.field = new MFNode();

ProtoInterface18.field[0] = field19;

field field20 = createNode("field");
field20.name = "parameter";
field20.accessType = "inputOutput";
field20.type = "MFString";
field20.value = "\"\"";
ProtoInterface18.field[1] = field20;

ProtoDeclare17.protoInterface = ProtoInterface18;

ProtoBody ProtoBody21 = createNode("ProtoBody");
Group Group22 = createNode("Group");
ProtoBody21.children = new MFNode();

ProtoBody21.children[0] = Group22;

ProtoDeclare17.protoBody = ProtoBody21;

ProtoBody16.children = new MFNode();

ProtoBody16.children[0] = ProtoDeclare17;

Script Script23 = createNode("Script");
Script23.DEF = "_loadUrl_1";
Script23.directOutput = True;
Script23.mustEvaluate = True;
field field24 = createNode("field");
field24.name = "children_changed";
field24.accessType = "outputOnly";
field24.type = "MFNode";
Script23.field = new MFNode();

Script23.field[0] = field24;

field field25 = createNode("field");
field25.name = "isActive";
field25.accessType = "outputOnly";
field25.type = "SFBool";
Script23.field[1] = field25;

field field26 = createNode("field");
field26.name = "exitTime";
field26.accessType = "outputOnly";
field26.type = "SFTime";
Script23.field[2] = field26;

field field27 = createNode("field");
field27.name = "startTime";
field27.accessType = "inputOnly";
field27.type = "SFTime";
Script23.field[3] = field27;

field field28 = createNode("field");
field28.name = "addChildren";
field28.accessType = "inputOnly";
field28.type = "MFNode";
Script23.field[4] = field28;

field field29 = createNode("field");
field29.name = "set_url";
field29.accessType = "inputOnly";
field29.type = "MFString";
Script23.field[5] = field29;

field field30 = createNode("field");
field30.name = "parameter";
field30.accessType = "initializeOnly";
field30.type = "SFString";
Script23.field[6] = field30;

field field31 = createNode("field");
field31.name = "thisNode";
field31.accessType = "initializeOnly";
field31.type = "SFNode";
Script Script32 = createNode("Script");
Script32.USE = "_loadUrl_1";
field31.children = new MFNode();

field31.children[0] = Script32;

Script23.field[7] = field31;

field field33 = createNode("field");
field33.name = "data";
field33.accessType = "initializeOnly";
field33.type = "SFNode";
ProtoInstance ProtoInstance34 = createNode("ProtoInstance");
ProtoInstance34.name = "Data";
ProtoInstance34.DEF = "Data";
IS IS35 = createNode("IS");
connect connect36 = createNode("connect");
connect36.nodeField = "url";
connect36.protoField = "url";
IS35.connect = new MFNode();

IS35.connect[0] = connect36;

connect connect37 = createNode("connect");
connect37.nodeField = "parameter";
connect37.protoField = "parameter";
IS35.connect[1] = connect37;

ProtoInstance34.iS = IS35;

field33.children = new MFNode();

field33.children[0] = ProtoInstance34;

Script23.field[8] = field33;

IS IS38 = createNode("IS");
connect connect39 = createNode("connect");
connect39.nodeField = "children_changed";
connect39.protoField = "children_changed";
IS38.connect = new MFNode();

IS38.connect[0] = connect39;

connect connect40 = createNode("connect");
connect40.nodeField = "isActive";
connect40.protoField = "isActive";
IS38.connect[1] = connect40;

connect connect41 = createNode("connect");
connect41.nodeField = "exitTime";
connect41.protoField = "exitTime";
IS38.connect[2] = connect41;

connect connect42 = createNode("connect");
connect42.nodeField = "startTime";
connect42.protoField = "startTime";
IS38.connect[3] = connect42;

Script23.iS = IS38;


Script23.setSourceCode(`vrmlscript:\n"+
"function initialize()\n"+
"{\n"+
"	for (i = 0; i < data.parameter.length; i++) {\n"+
"		if (data.parameter[i]) parameter += \"&\" + data.parameter[i];\n"+
"	}\n"+
"}\n"+
"\n"+
"function loadUrl()\n"+
"{\n"+
"	if(data.url.length > 0 && !isActive) {\n"+
"		isActive = TRUE;\n"+
"		Browser.createVrmlFromURL(data.url, thisNode, \"addChildren\");\n"+
"	}\n"+
"}\n"+
"\n"+
"function startTime(value, time)\n"+
"{\n"+
"	loadUrl();\n"+
"}\n"+
"\n"+
"function set_url(value, time)\n"+
"{\n"+
"	loadUrl();\n"+
"}\n"+
"\n"+
"function addChildren(value, time)\n"+
"{\n"+
"	if(isActive){\n"+
"		children_changed = value;\n"+
"		isActive = FALSE;\n"+
"		exitTime = time;\n"+
"	}\n"+
"}`)
ProtoBody16.children[1] = Script23;

ROUTE ROUTE43 = createNode("ROUTE");
ROUTE43.fromNode = "Data";
ROUTE43.fromField = "url_changed";
ROUTE43.toNode = "_loadUrl_1";
ROUTE43.toField = "set_url";
ProtoBody16.children[2] = ROUTE43;

ProtoDeclare8.protoBody = ProtoBody16;

children = new MFNode();

children[0] = ProtoDeclare8;

}
