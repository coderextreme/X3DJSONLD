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
<ProtoDeclare name="Counter" ><ProtoInterface><field name="value" accessType="inputOutput" type="SFInt32"></field>
<field name="offset" accessType="inputOutput" type="SFInt32"></field>
<field name="startTime" accessType="inputOutput" type="SFTime"></field>
<field name="stopTime" accessType="inputOutput" type="SFTime"></field>
<field name="isActive" accessType="outputOnly" type="SFBool"></field>
<field name="enterTime" accessType="outputOnly" type="SFTime"></field>
<field name="exitTime" accessType="outputOnly" type="SFTime"></field>
<field name="whichChoice_changed" accessType="outputOnly" type="SFInt32"></field>
<field name="fraction_changed" accessType="outputOnly" type="SFFloat"></field>
</ProtoInterface>
<ProtoBody><ProtoDeclare name="Data"><ProtoInterface><field name="value" accessType="inputOutput" type="SFInt32"></field>
<field name="offset" accessType="inputOutput" type="SFInt32"></field>
<field name="startTime" accessType="inputOutput" type="SFTime"></field>
<field name="stopTime" accessType="inputOutput" type="SFTime"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>
<Script DEF="_counter" directOutput="true"><field name="isActive" accessType="outputOnly" type="SFBool"></field>
<field name="enterTime" accessType="outputOnly" type="SFTime"></field>
<field name="exitTime" accessType="outputOnly" type="SFTime"></field>
<field name="whichChoice_changed" accessType="outputOnly" type="SFInt32"></field>
<field name="fraction_changed" accessType="outputOnly" type="SFFloat"></field>
<field name="set_offset" accessType="inputOnly" type="SFInt32"></field>
<field name="set_startTime" accessType="inputOnly" type="SFTime"></field>
<field name="set_stopTime" accessType="inputOnly" type="SFTime"></field>
<field name="offset" accessType="initializeOnly" type="SFInt32"></field>
<field name="data" accessType="initializeOnly" type="SFNode"><ProtoInstance name="Data" DEF="Data"><IS><connect nodeField="value" protoField="value"></connect>
<connect nodeField="offset" protoField="offset"></connect>
<connect nodeField="startTime" protoField="startTime"></connect>
<connect nodeField="stopTime" protoField="stopTime"></connect>
</IS>
</ProtoInstance>
</field>
<IS><connect nodeField="isActive" protoField="isActive"></connect>
<connect nodeField="enterTime" protoField="enterTime"></connect>
<connect nodeField="exitTime" protoField="exitTime"></connect>
<connect nodeField="whichChoice_changed" protoField="whichChoice_changed"></connect>
<connect nodeField="fraction_changed" protoField="fraction_changed"></connect>
</IS>
<![CDATA[vrmlscript:
function set_offset(value, time)
{
	if (value < 0) {
		offset = 0;
	} else if (value > data.value) {
		offset = data.value;
	} else {
		offset = value;
	}
}
function set_startTime(value, time)
{
	if (!isActive) {
		isActive = TRUE;
		enterTime = time;
		offset = 0;
	} else {
		++offset;
		if (offset >= data.value) {
			isActive = FALSE;
			exitTime = time;
		}
	}
	whichChoice_changed = offset;
	fraction_changed = offset / data.value;
}
function set_stopTime(value, time) {
	if (isActive) {
		isActive = FALSE;
		exitTime = time;
	}
}
function initialize() { if (data.startTime) data.startTime = 1; }]]></Script>
<ROUTE fromNode="Data" fromField="offset_changed" toNode="_counter" toField="set_offset"></ROUTE>
<ROUTE fromNode="Data" fromField="startTime_changed" toNode="_counter" toField="set_startTime"></ROUTE>
<ROUTE fromNode="Data" fromField="stopTime_changed" toNode="_counter" toField="set_stopTime"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "Counter";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "value";
field10.accessType = "inputOutput";
field10.type = "SFInt32";
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

field field11 = createNode("field");
field11.name = "offset";
field11.accessType = "inputOutput";
field11.type = "SFInt32";
ProtoInterface9.field[1] = field11;

field field12 = createNode("field");
field12.name = "startTime";
field12.accessType = "inputOutput";
field12.type = "SFTime";
ProtoInterface9.field[2] = field12;

field field13 = createNode("field");
field13.name = "stopTime";
field13.accessType = "inputOutput";
field13.type = "SFTime";
ProtoInterface9.field[3] = field13;

field field14 = createNode("field");
field14.name = "isActive";
field14.accessType = "outputOnly";
field14.type = "SFBool";
ProtoInterface9.field[4] = field14;

field field15 = createNode("field");
field15.name = "enterTime";
field15.accessType = "outputOnly";
field15.type = "SFTime";
ProtoInterface9.field[5] = field15;

field field16 = createNode("field");
field16.name = "exitTime";
field16.accessType = "outputOnly";
field16.type = "SFTime";
ProtoInterface9.field[6] = field16;

field field17 = createNode("field");
field17.name = "whichChoice_changed";
field17.accessType = "outputOnly";
field17.type = "SFInt32";
ProtoInterface9.field[7] = field17;

field field18 = createNode("field");
field18.name = "fraction_changed";
field18.accessType = "outputOnly";
field18.type = "SFFloat";
ProtoInterface9.field[8] = field18;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody19 = createNode("ProtoBody");
ProtoDeclare ProtoDeclare20 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Data" ><ProtoInterface><field name="value" accessType="inputOutput" type="SFInt32"></field>
<field name="offset" accessType="inputOutput" type="SFInt32"></field>
<field name="startTime" accessType="inputOutput" type="SFTime"></field>
<field name="stopTime" accessType="inputOutput" type="SFTime"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare20.name = "Data";
ProtoInterface ProtoInterface21 = createNode("ProtoInterface");
field field22 = createNode("field");
field22.name = "value";
field22.accessType = "inputOutput";
field22.type = "SFInt32";
ProtoInterface21.field = new MFNode();

ProtoInterface21.field[0] = field22;

field field23 = createNode("field");
field23.name = "offset";
field23.accessType = "inputOutput";
field23.type = "SFInt32";
ProtoInterface21.field[1] = field23;

field field24 = createNode("field");
field24.name = "startTime";
field24.accessType = "inputOutput";
field24.type = "SFTime";
ProtoInterface21.field[2] = field24;

field field25 = createNode("field");
field25.name = "stopTime";
field25.accessType = "inputOutput";
field25.type = "SFTime";
ProtoInterface21.field[3] = field25;

ProtoDeclare20.protoInterface = ProtoInterface21;

ProtoBody ProtoBody26 = createNode("ProtoBody");
Group Group27 = createNode("Group");
ProtoBody26.children = new MFNode();

ProtoBody26.children[0] = Group27;

ProtoDeclare20.protoBody = ProtoBody26;

ProtoBody19.children = new MFNode();

ProtoBody19.children[0] = ProtoDeclare20;

Script Script28 = createNode("Script");
Script28.DEF = "_counter";
Script28.directOutput = True;
field field29 = createNode("field");
field29.name = "isActive";
field29.accessType = "outputOnly";
field29.type = "SFBool";
Script28.field = new MFNode();

Script28.field[0] = field29;

field field30 = createNode("field");
field30.name = "enterTime";
field30.accessType = "outputOnly";
field30.type = "SFTime";
Script28.field[1] = field30;

field field31 = createNode("field");
field31.name = "exitTime";
field31.accessType = "outputOnly";
field31.type = "SFTime";
Script28.field[2] = field31;

field field32 = createNode("field");
field32.name = "whichChoice_changed";
field32.accessType = "outputOnly";
field32.type = "SFInt32";
Script28.field[3] = field32;

field field33 = createNode("field");
field33.name = "fraction_changed";
field33.accessType = "outputOnly";
field33.type = "SFFloat";
Script28.field[4] = field33;

field field34 = createNode("field");
field34.name = "set_offset";
field34.accessType = "inputOnly";
field34.type = "SFInt32";
Script28.field[5] = field34;

field field35 = createNode("field");
field35.name = "set_startTime";
field35.accessType = "inputOnly";
field35.type = "SFTime";
Script28.field[6] = field35;

field field36 = createNode("field");
field36.name = "set_stopTime";
field36.accessType = "inputOnly";
field36.type = "SFTime";
Script28.field[7] = field36;

field field37 = createNode("field");
field37.name = "offset";
field37.accessType = "initializeOnly";
field37.type = "SFInt32";
Script28.field[8] = field37;

field field38 = createNode("field");
field38.name = "data";
field38.accessType = "initializeOnly";
field38.type = "SFNode";
ProtoInstance ProtoInstance39 = createNode("ProtoInstance");
ProtoInstance39.name = "Data";
ProtoInstance39.DEF = "Data";
IS IS40 = createNode("IS");
connect connect41 = createNode("connect");
connect41.nodeField = "value";
connect41.protoField = "value";
IS40.connect = new MFNode();

IS40.connect[0] = connect41;

connect connect42 = createNode("connect");
connect42.nodeField = "offset";
connect42.protoField = "offset";
IS40.connect[1] = connect42;

connect connect43 = createNode("connect");
connect43.nodeField = "startTime";
connect43.protoField = "startTime";
IS40.connect[2] = connect43;

connect connect44 = createNode("connect");
connect44.nodeField = "stopTime";
connect44.protoField = "stopTime";
IS40.connect[3] = connect44;

ProtoInstance39.iS = IS40;

field38.children = new MFNode();

field38.children[0] = ProtoInstance39;

Script28.field[9] = field38;

IS IS45 = createNode("IS");
connect connect46 = createNode("connect");
connect46.nodeField = "isActive";
connect46.protoField = "isActive";
IS45.connect = new MFNode();

IS45.connect[0] = connect46;

connect connect47 = createNode("connect");
connect47.nodeField = "enterTime";
connect47.protoField = "enterTime";
IS45.connect[1] = connect47;

connect connect48 = createNode("connect");
connect48.nodeField = "exitTime";
connect48.protoField = "exitTime";
IS45.connect[2] = connect48;

connect connect49 = createNode("connect");
connect49.nodeField = "whichChoice_changed";
connect49.protoField = "whichChoice_changed";
IS45.connect[3] = connect49;

connect connect50 = createNode("connect");
connect50.nodeField = "fraction_changed";
connect50.protoField = "fraction_changed";
IS45.connect[4] = connect50;

Script28.iS = IS45;


Script28.setSourceCode(`vrmlscript:\n"+
"function set_offset(value, time)\n"+
"{\n"+
"	if (value < 0) {\n"+
"		offset = 0;\n"+
"	} else if (value > data.value) {\n"+
"		offset = data.value;\n"+
"	} else {\n"+
"		offset = value;\n"+
"	}\n"+
"}\n"+
"function set_startTime(value, time)\n"+
"{\n"+
"	if (!isActive) {\n"+
"		isActive = TRUE;\n"+
"		enterTime = time;\n"+
"		offset = 0;\n"+
"	} else {\n"+
"		++offset;\n"+
"		if (offset >= data.value) {\n"+
"			isActive = FALSE;\n"+
"			exitTime = time;\n"+
"		}\n"+
"	}\n"+
"	whichChoice_changed = offset;\n"+
"	fraction_changed = offset / data.value;\n"+
"}\n"+
"function set_stopTime(value, time) {\n"+
"	if (isActive) {\n"+
"		isActive = FALSE;\n"+
"		exitTime = time;\n"+
"	}\n"+
"}\n"+
"function initialize() { if (data.startTime) data.startTime = 1; }`)
ProtoBody19.children[1] = Script28;

ROUTE ROUTE51 = createNode("ROUTE");
ROUTE51.fromNode = "Data";
ROUTE51.fromField = "offset_changed";
ROUTE51.toNode = "_counter";
ROUTE51.toField = "set_offset";
ProtoBody19.children[2] = ROUTE51;

ROUTE ROUTE52 = createNode("ROUTE");
ROUTE52.fromNode = "Data";
ROUTE52.fromField = "startTime_changed";
ROUTE52.toNode = "_counter";
ROUTE52.toField = "set_startTime";
ProtoBody19.children[3] = ROUTE52;

ROUTE ROUTE53 = createNode("ROUTE");
ROUTE53.fromNode = "Data";
ROUTE53.fromField = "stopTime_changed";
ROUTE53.toNode = "_counter";
ROUTE53.toField = "set_stopTime";
ProtoBody19.children[4] = ROUTE53;

ProtoDeclare8.protoBody = ProtoBody19;

children = new MFNode();

children[0] = ProtoDeclare8;

}
