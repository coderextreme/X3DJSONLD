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
<ProtoDeclare name="Or" ><ProtoInterface><field name="value_changed" accessType="outputOnly" type="SFBool"></field>
<field name="children" accessType="inputOutput" type="MFNode"></field>
</ProtoInterface>
<ProtoBody><ProtoDeclare name="Data"><ProtoInterface><field name="children" accessType="inputOutput" type="MFNode"></field>
</ProtoInterface>
<ProtoBody><Group><IS><connect nodeField="children" protoField="children"></connect>
</IS>
</Group>
</ProtoBody>
</ProtoDeclare>
<ProtoInstance name="Data" DEF="Data"><IS><connect nodeField="children" protoField="children"></connect>
</IS>
</ProtoInstance>
<Script DEF="_or" directOutput="true"><field name="set_value" accessType="inputOnly" type="SFBool"></field>
<field name="set_children" accessType="inputOnly" type="MFNode"></field>
<field name="value_changed" accessType="outputOnly" type="SFBool"></field>
<field name="self" accessType="initializeOnly" type="SFNode"><Script USE="_or"></Script>
</field>
<field name="data" accessType="initializeOnly" type="SFNode"><ProtoInstance USE="Data"></ProtoInstance>
</field>
<IS><connect nodeField="value_changed" protoField="value_changed"></connect>
</IS>
<![CDATA[vrmlscript:
function set_value (value, time)
{
	//print (time + ': _or ' + value);
	
	//for (var i = 0; i < data .children .length; ++i)
	//	print (data .children [i] .value_changed);
}

function set_children (value, time)
{
	for (var i = 0; i < value .length; ++i)
	{
		Browser .addRoute (value [i], 'value_changed', self, 'set_value');
	}
}

function initialize ()
{
	if (data .children .length)
		set_children (data .children, 0);
}

function eventsProcessed ()
{
	var v = FALSE;
	
	for (var i = 0; i < data .children .length; ++i)
		v = v || data .children [i] .value_changed;
		
	value_changed = v;
}]]></Script>
<ROUTE fromNode="Data" fromField="children_changed" toNode="_or" toField="set_children"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "Or";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "value_changed";
field10.accessType = "outputOnly";
field10.type = "SFBool";
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

field field11 = createNode("field");
field11.name = "children";
field11.accessType = "inputOutput";
field11.type = "MFNode";
ProtoInterface9.field[1] = field11;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody12 = createNode("ProtoBody");
ProtoDeclare ProtoDeclare13 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Data" ><ProtoInterface><field name="children" accessType="inputOutput" type="MFNode"></field>
</ProtoInterface>
<ProtoBody><Group><IS><connect nodeField="children" protoField="children"></connect>
</IS>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare13.name = "Data";
ProtoInterface ProtoInterface14 = createNode("ProtoInterface");
field field15 = createNode("field");
field15.name = "children";
field15.accessType = "inputOutput";
field15.type = "MFNode";
ProtoInterface14.field = new MFNode();

ProtoInterface14.field[0] = field15;

ProtoDeclare13.protoInterface = ProtoInterface14;

ProtoBody ProtoBody16 = createNode("ProtoBody");
Group Group17 = createNode("Group");
IS IS18 = createNode("IS");
connect connect19 = createNode("connect");
connect19.nodeField = "children";
connect19.protoField = "children";
IS18.connect = new MFNode();

IS18.connect[0] = connect19;

Group17.iS = IS18;

ProtoBody16.children = new MFNode();

ProtoBody16.children[0] = Group17;

ProtoDeclare13.protoBody = ProtoBody16;

ProtoBody12.children = new MFNode();

ProtoBody12.children[0] = ProtoDeclare13;

ProtoInstance ProtoInstance20 = createNode("ProtoInstance");
ProtoInstance20.name = "Data";
ProtoInstance20.DEF = "Data";
IS IS21 = createNode("IS");
connect connect22 = createNode("connect");
connect22.nodeField = "children";
connect22.protoField = "children";
IS21.connect = new MFNode();

IS21.connect[0] = connect22;

ProtoInstance20.iS = IS21;

ProtoBody12.children[1] = ProtoInstance20;

Script Script23 = createNode("Script");
Script23.DEF = "_or";
Script23.directOutput = True;
field field24 = createNode("field");
field24.name = "set_value";
field24.accessType = "inputOnly";
field24.type = "SFBool";
Script23.field = new MFNode();

Script23.field[0] = field24;

field field25 = createNode("field");
field25.name = "set_children";
field25.accessType = "inputOnly";
field25.type = "MFNode";
Script23.field[1] = field25;

field field26 = createNode("field");
field26.name = "value_changed";
field26.accessType = "outputOnly";
field26.type = "SFBool";
Script23.field[2] = field26;

field field27 = createNode("field");
field27.name = "self";
field27.accessType = "initializeOnly";
field27.type = "SFNode";
Script Script28 = createNode("Script");
Script28.USE = "_or";
field27.children = new MFNode();

field27.children[0] = Script28;

Script23.field[3] = field27;

field field29 = createNode("field");
field29.name = "data";
field29.accessType = "initializeOnly";
field29.type = "SFNode";
ProtoInstance ProtoInstance30 = createNode("ProtoInstance");
ProtoInstance30.USE = "Data";
field29.children = new MFNode();

field29.children[0] = ProtoInstance30;

Script23.field[4] = field29;

IS IS31 = createNode("IS");
connect connect32 = createNode("connect");
connect32.nodeField = "value_changed";
connect32.protoField = "value_changed";
IS31.connect = new MFNode();

IS31.connect[0] = connect32;

Script23.iS = IS31;


Script23.setSourceCode(`vrmlscript:\n"+
"function set_value (value, time)\n"+
"{\n"+
"	//print (time + ': _or ' + value);\n"+
"	\n"+
"	//for (var i = 0; i < data .children .length; ++i)\n"+
"	//	print (data .children [i] .value_changed);\n"+
"}\n"+
"\n"+
"function set_children (value, time)\n"+
"{\n"+
"	for (var i = 0; i < value .length; ++i)\n"+
"	{\n"+
"		Browser .addRoute (value [i], 'value_changed', self, 'set_value');\n"+
"	}\n"+
"}\n"+
"\n"+
"function initialize ()\n"+
"{\n"+
"	if (data .children .length)\n"+
"		set_children (data .children, 0);\n"+
"}\n"+
"\n"+
"function eventsProcessed ()\n"+
"{\n"+
"	var v = FALSE;\n"+
"	\n"+
"	for (var i = 0; i < data .children .length; ++i)\n"+
"		v = v || data .children [i] .value_changed;\n"+
"		\n"+
"	value_changed = v;\n"+
"}`)
ProtoBody12.children[2] = Script23;

ROUTE ROUTE33 = createNode("ROUTE");
ROUTE33.fromNode = "Data";
ROUTE33.fromField = "children_changed";
ROUTE33.toNode = "_or";
ROUTE33.toField = "set_children";
ProtoBody12.children[3] = ROUTE33;

ProtoDeclare8.protoBody = ProtoBody12;

children = new MFNode();

children[0] = ProtoDeclare8;

}
