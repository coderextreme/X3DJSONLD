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
meta3.content = "Fri, 28 Aug 2015 13:01:10 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V1.0.0, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Fri, 28 Aug 2015 13:01:10 GMT";
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
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>
<Script DEF="_import" directOutput="true" mustEvaluate="true"><field name="isActive" accessType="outputOnly" type="SFBool"></field>
<field name="exitTime" accessType="outputOnly" type="SFTime"></field>
<field name="set_startTime" accessType="inputOnly" type="SFTime"></field>
<field name="set_stopTime" accessType="inputOnly" type="SFTime"></field>
<field name="set_children" accessType="inputOnly" type="MFNode"></field>
<field name="set_url" accessType="inputOnly" type="MFString"></field>
<field name="self" accessType="initializeOnly" type="SFNode"><Script USE="_import"></Script>
</field>
<field name="data" accessType="initializeOnly" type="SFNode"><ProtoInstance name="Data" DEF="Data"><IS><connect nodeField="url" protoField="url"></connect>
<connect nodeField="startTime" protoField="startTime"></connect>
<connect nodeField="parameter" protoField="parameter"></connect>
<connect nodeField="children" protoField="children"></connect>
</IS>
</ProtoInstance>
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
function set_stopTime(value, time) { isActive = FALSE; exitTime = time; }
function set_children(value, time) {
	if(isActive){
		if (value.length == 1 && value.toString() == "Group { }") {
			data.children = value[0].children;
		} else {
			data.children = value;
		}
		self.set_stopTime = time;
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
ProtoBody23.children = new MFNode();

ProtoBody23.children[0] = Group24;

ProtoDeclare17.protoBody = ProtoBody23;

ProtoBody16.children = new MFNode();

ProtoBody16.children[0] = ProtoDeclare17;

Script Script25 = createNode("Script");
Script25.DEF = "_import";
Script25.directOutput = True;
Script25.mustEvaluate = True;
field field26 = createNode("field");
field26.name = "isActive";
field26.accessType = "outputOnly";
field26.type = "SFBool";
Script25.field = new MFNode();

Script25.field[0] = field26;

field field27 = createNode("field");
field27.name = "exitTime";
field27.accessType = "outputOnly";
field27.type = "SFTime";
Script25.field[1] = field27;

field field28 = createNode("field");
field28.name = "set_startTime";
field28.accessType = "inputOnly";
field28.type = "SFTime";
Script25.field[2] = field28;

field field29 = createNode("field");
field29.name = "set_stopTime";
field29.accessType = "inputOnly";
field29.type = "SFTime";
Script25.field[3] = field29;

field field30 = createNode("field");
field30.name = "set_children";
field30.accessType = "inputOnly";
field30.type = "MFNode";
Script25.field[4] = field30;

field field31 = createNode("field");
field31.name = "set_url";
field31.accessType = "inputOnly";
field31.type = "MFString";
Script25.field[5] = field31;

field field32 = createNode("field");
field32.name = "self";
field32.accessType = "initializeOnly";
field32.type = "SFNode";
Script Script33 = createNode("Script");
Script33.USE = "_import";
field32.children = new MFNode();

field32.children[0] = Script33;

Script25.field[6] = field32;

field field34 = createNode("field");
field34.name = "data";
field34.accessType = "initializeOnly";
field34.type = "SFNode";
ProtoInstance ProtoInstance35 = createNode("ProtoInstance");
ProtoInstance35.name = "Data";
ProtoInstance35.DEF = "Data";
IS IS36 = createNode("IS");
connect connect37 = createNode("connect");
connect37.nodeField = "url";
connect37.protoField = "url";
IS36.connect = new MFNode();

IS36.connect[0] = connect37;

connect connect38 = createNode("connect");
connect38.nodeField = "startTime";
connect38.protoField = "startTime";
IS36.connect[1] = connect38;

connect connect39 = createNode("connect");
connect39.nodeField = "parameter";
connect39.protoField = "parameter";
IS36.connect[2] = connect39;

connect connect40 = createNode("connect");
connect40.nodeField = "children";
connect40.protoField = "children";
IS36.connect[3] = connect40;

ProtoInstance35.iS = IS36;

field34.children = new MFNode();

field34.children[0] = ProtoInstance35;

Script25.field[7] = field34;

IS IS41 = createNode("IS");
connect connect42 = createNode("connect");
connect42.nodeField = "isActive";
connect42.protoField = "isActive";
IS41.connect = new MFNode();

IS41.connect[0] = connect42;

connect connect43 = createNode("connect");
connect43.nodeField = "exitTime";
connect43.protoField = "exitTime";
IS41.connect[1] = connect43;

Script25.iS = IS41;


Script25.setSourceCode(`vrmlscript:\n"+
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
"function set_stopTime(value, time) { isActive = FALSE; exitTime = time; }\n"+
"function set_children(value, time) {\n"+
"	if(isActive){\n"+
"		if (value.length == 1 && value.toString() == \"Group { }\") {\n"+
"			data.children = value[0].children;\n"+
"		} else {\n"+
"			data.children = value;\n"+
"		}\n"+
"		self.set_stopTime = time;\n"+
"	}\n"+
"}\n"+
"function initialize() { if (data.startTime) loadUrl(); }`)
ProtoBody16.children[1] = Script25;

ROUTE ROUTE44 = createNode("ROUTE");
ROUTE44.fromNode = "Data";
ROUTE44.fromField = "url_changed";
ROUTE44.toNode = "_import";
ROUTE44.toField = "set_url";
ProtoBody16.children[2] = ROUTE44;

ROUTE ROUTE45 = createNode("ROUTE");
ROUTE45.fromNode = "Data";
ROUTE45.fromField = "startTime_changed";
ROUTE45.toNode = "_import";
ROUTE45.toField = "set_startTime";
ProtoBody16.children[3] = ROUTE45;

ProtoDeclare8.protoBody = ProtoBody16;

children = new MFNode();

children[0] = ProtoDeclare8;

}
