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
meta3.content = "Sat, 25 Apr 2015 12:38:22 GMT";
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
meta6.content = "Sat, 25 Apr 2015 12:38:22 GMT";
head1.meta[4] = meta6;

head = head1;

ProtoDeclare ProtoDeclare8 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Import" ><ProtoInterface><field name="url" accessType="inputOutput" type="MFString" value="&quot;&quot;"></field>
<field name="startTime" accessType="inputOutput" type="SFTime"></field>
<field name="isActive" accessType="outputOnly" type="SFBool"></field>
<field name="exitTime" accessType="outputOnly" type="SFTime"></field>
<field name="parameter" accessType="inputOutput" type="MFNode"></field>
<field name="children" accessType="inputOutput" type="MFNode"></field>
</ProtoInterface>
<ProtoBody><ProtoDeclare name="Data"><ProtoInterface><field name="url" accessType="inputOutput" type="MFString" value="&quot;&quot;"></field>
<field name="startTime" accessType="inputOutput" type="SFTime"></field>
<field name="parameter" accessType="inputOutput" type="MFNode"></field>
<field name="children" accessType="inputOutput" type="MFNode"></field>
</ProtoInterface>
<ProtoBody><Group><IS><connect nodeField="children" protoField="children"></connect>
</IS>
</Group>
</ProtoBody>
</ProtoDeclare>
<ProtoInstance name="Data" DEF="Data"><IS><connect nodeField="url" protoField="url"></connect>
<connect nodeField="startTime" protoField="startTime"></connect>
<connect nodeField="parameter" protoField="parameter"></connect>
<connect nodeField="children" protoField="children"></connect>
</IS>
</ProtoInstance>
<Script DEF="_import" directOutput="true" mustEvaluate="true"><field name="isActive" accessType="outputOnly" type="SFBool"></field>
<field name="exitTime" accessType="outputOnly" type="SFTime"></field>
<field name="set_startTime" accessType="inputOnly" type="SFTime"></field>
<field name="set_children" accessType="inputOnly" type="MFNode"></field>
<field name="set_url" accessType="inputOnly" type="MFString"></field>
<field name="self" accessType="initializeOnly" type="SFNode"><Script USE="_import"></Script>
</field>
<field name="data" accessType="initializeOnly" type="SFNode"><ProtoInstance USE="Data"></ProtoInstance>
</field>
<IS><connect nodeField="isActive" protoField="isActive"></connect>
<connect nodeField="exitTime" protoField="exitTime"></connect>
</IS>
<![CDATA[vrmlscript:
function query() {
	q = '';
	for (i = 0; i < data.parameter.length; i++) {
		q += ';' + data.parameter[i].name;
		if (data.parameter[i].value.length) {
			q += '=' + data.parameter[i].value[0];
		}
	}
	if (q.length > 1) return q.substring(1, q.length);
	return '';
}
function url() {
	q = query();
	u = new MFString();
	u.length = data.url.length;

	if (q == '') return data.url;
	for (i = 0; i < u.length; i++) {
		u[i] = data.url[i] + (data.url[i].indexOf('?') > -1 ? (data.url[i].indexOf('?') == data.url[i].length-1  ? '' : (q.length ? (data.url[i].indexOf(';') == data.url[i].length-1  ? '' : ';') : '') ) : '?') + q;
	}
	return u;
}
function loadUrl() {
	if(data.url.length && !isActive) {
		isActive = TRUE;
		Browser.createVrmlFromURL(url(), self, "set_children");
	}
}
function set_url(value, time) { loadUrl(); }
function set_startTime(value, time) { loadUrl(); }
function set_children(value, time) {
	if(isActive){
		if (value.toString() == "Group { }") {
			data.children = value[0].children;
		} else {
			data.children = value;
		}
		isActive = FALSE;
		exitTime = time;
	}
}
function initialize() { if (data.startTime) loadUrl(); }]]></Script>
<ROUTE fromNode="Data" fromField="url_changed" toNode="_import" toField="set_url"></ROUTE>
<ROUTE fromNode="Data" fromField="startTime_changed" toNode="_import" toField="set_startTime"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "Import";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "url";
field10.accessType = "inputOutput";
field10.type = "MFString";
field10.value = "\"\"";
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

field field11 = createNode("field");
field11.name = "startTime";
field11.accessType = "inputOutput";
field11.type = "SFTime";
ProtoInterface9.field[1] = field11;

field field12 = createNode("field");
field12.name = "isActive";
field12.accessType = "outputOnly";
field12.type = "SFBool";
ProtoInterface9.field[2] = field12;

field field13 = createNode("field");
field13.name = "exitTime";
field13.accessType = "outputOnly";
field13.type = "SFTime";
ProtoInterface9.field[3] = field13;

field field14 = createNode("field");
field14.name = "parameter";
field14.accessType = "inputOutput";
field14.type = "MFNode";
ProtoInterface9.field[4] = field14;

field field15 = createNode("field");
field15.name = "children";
field15.accessType = "inputOutput";
field15.type = "MFNode";
ProtoInterface9.field[5] = field15;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody16 = createNode("ProtoBody");
ProtoDeclare ProtoDeclare17 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Data" ><ProtoInterface><field name="url" accessType="inputOutput" type="MFString" value="&quot;&quot;"></field>
<field name="startTime" accessType="inputOutput" type="SFTime"></field>
<field name="parameter" accessType="inputOutput" type="MFNode"></field>
<field name="children" accessType="inputOutput" type="MFNode"></field>
</ProtoInterface>
<ProtoBody><Group><IS><connect nodeField="children" protoField="children"></connect>
</IS>
</Group>
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
field20.name = "startTime";
field20.accessType = "inputOutput";
field20.type = "SFTime";
ProtoInterface18.field[1] = field20;

field field21 = createNode("field");
field21.name = "parameter";
field21.accessType = "inputOutput";
field21.type = "MFNode";
ProtoInterface18.field[2] = field21;

field field22 = createNode("field");
field22.name = "children";
field22.accessType = "inputOutput";
field22.type = "MFNode";
ProtoInterface18.field[3] = field22;

ProtoDeclare17.protoInterface = ProtoInterface18;

ProtoBody ProtoBody23 = createNode("ProtoBody");
Group Group24 = createNode("Group");
IS IS25 = createNode("IS");
connect connect26 = createNode("connect");
connect26.nodeField = "children";
connect26.protoField = "children";
IS25.connect = new MFNode();

IS25.connect[0] = connect26;

Group24.iS = IS25;

ProtoBody23.children = new MFNode();

ProtoBody23.children[0] = Group24;

ProtoDeclare17.protoBody = ProtoBody23;

ProtoBody16.children = new MFNode();

ProtoBody16.children[0] = ProtoDeclare17;

ProtoInstance ProtoInstance27 = createNode("ProtoInstance");
ProtoInstance27.name = "Data";
ProtoInstance27.DEF = "Data";
IS IS28 = createNode("IS");
connect connect29 = createNode("connect");
connect29.nodeField = "url";
connect29.protoField = "url";
IS28.connect = new MFNode();

IS28.connect[0] = connect29;

connect connect30 = createNode("connect");
connect30.nodeField = "startTime";
connect30.protoField = "startTime";
IS28.connect[1] = connect30;

connect connect31 = createNode("connect");
connect31.nodeField = "parameter";
connect31.protoField = "parameter";
IS28.connect[2] = connect31;

connect connect32 = createNode("connect");
connect32.nodeField = "children";
connect32.protoField = "children";
IS28.connect[3] = connect32;

ProtoInstance27.iS = IS28;

ProtoBody16.children[1] = ProtoInstance27;

Script Script33 = createNode("Script");
Script33.DEF = "_import";
Script33.directOutput = True;
Script33.mustEvaluate = True;
field field34 = createNode("field");
field34.name = "isActive";
field34.accessType = "outputOnly";
field34.type = "SFBool";
Script33.field = new MFNode();

Script33.field[0] = field34;

field field35 = createNode("field");
field35.name = "exitTime";
field35.accessType = "outputOnly";
field35.type = "SFTime";
Script33.field[1] = field35;

field field36 = createNode("field");
field36.name = "set_startTime";
field36.accessType = "inputOnly";
field36.type = "SFTime";
Script33.field[2] = field36;

field field37 = createNode("field");
field37.name = "set_children";
field37.accessType = "inputOnly";
field37.type = "MFNode";
Script33.field[3] = field37;

field field38 = createNode("field");
field38.name = "set_url";
field38.accessType = "inputOnly";
field38.type = "MFString";
Script33.field[4] = field38;

field field39 = createNode("field");
field39.name = "self";
field39.accessType = "initializeOnly";
field39.type = "SFNode";
Script Script40 = createNode("Script");
Script40.USE = "_import";
field39.children = new MFNode();

field39.children[0] = Script40;

Script33.field[5] = field39;

field field41 = createNode("field");
field41.name = "data";
field41.accessType = "initializeOnly";
field41.type = "SFNode";
ProtoInstance ProtoInstance42 = createNode("ProtoInstance");
ProtoInstance42.USE = "Data";
field41.children = new MFNode();

field41.children[0] = ProtoInstance42;

Script33.field[6] = field41;

IS IS43 = createNode("IS");
connect connect44 = createNode("connect");
connect44.nodeField = "isActive";
connect44.protoField = "isActive";
IS43.connect = new MFNode();

IS43.connect[0] = connect44;

connect connect45 = createNode("connect");
connect45.nodeField = "exitTime";
connect45.protoField = "exitTime";
IS43.connect[1] = connect45;

Script33.iS = IS43;


Script33.setSourceCode(`vrmlscript:\n"+
"function query() {\n"+
"	q = '';\n"+
"	for (i = 0; i < data.parameter.length; i++) {\n"+
"		q += ';' + data.parameter[i].name;\n"+
"		if (data.parameter[i].value.length) {\n"+
"			q += '=' + data.parameter[i].value[0];\n"+
"		}\n"+
"	}\n"+
"	if (q.length > 1) return q.substring(1, q.length);\n"+
"	return '';\n"+
"}\n"+
"function url() {\n"+
"	q = query();\n"+
"	u = new MFString();\n"+
"	u.length = data.url.length;\n"+
"\n"+
"	if (q == '') return data.url;\n"+
"	for (i = 0; i < u.length; i++) {\n"+
"		u[i] = data.url[i] + (data.url[i].indexOf('?') > -1 ? (data.url[i].indexOf('?') == data.url[i].length-1  ? '' : (q.length ? (data.url[i].indexOf(';') == data.url[i].length-1  ? '' : ';') : '') ) : '?') + q;\n"+
"	}\n"+
"	return u;\n"+
"}\n"+
"function loadUrl() {\n"+
"	if(data.url.length && !isActive) {\n"+
"		isActive = TRUE;\n"+
"		Browser.createVrmlFromURL(url(), self, \"set_children\");\n"+
"	}\n"+
"}\n"+
"function set_url(value, time) { loadUrl(); }\n"+
"function set_startTime(value, time) { loadUrl(); }\n"+
"function set_children(value, time) {\n"+
"	if(isActive){\n"+
"		if (value.toString() == \"Group { }\") {\n"+
"			data.children = value[0].children;\n"+
"		} else {\n"+
"			data.children = value;\n"+
"		}\n"+
"		isActive = FALSE;\n"+
"		exitTime = time;\n"+
"	}\n"+
"}\n"+
"function initialize() { if (data.startTime) loadUrl(); }`)
ProtoBody16.children[2] = Script33;

ROUTE ROUTE46 = createNode("ROUTE");
ROUTE46.fromNode = "Data";
ROUTE46.fromField = "url_changed";
ROUTE46.toNode = "_import";
ROUTE46.toField = "set_url";
ProtoBody16.children[3] = ROUTE46;

ROUTE ROUTE47 = createNode("ROUTE");
ROUTE47.fromNode = "Data";
ROUTE47.fromField = "startTime_changed";
ROUTE47.toNode = "_import";
ROUTE47.toField = "set_startTime";
ProtoBody16.children[4] = ROUTE47;

ProtoDeclare8.protoBody = ProtoBody16;

children = new MFNode();

children[0] = ProtoDeclare8;

}
