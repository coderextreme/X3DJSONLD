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
<ProtoDeclare name="Door" ><ProtoInterface><field name="offset" accessType="inputOutput" type="SFBool"></field>
<field name="enabled" accessType="inputOutput" type="SFBool"></field>
<field name="startTime" accessType="inputOutput" type="SFTime"></field>
<field name="stopTime" accessType="inputOutput" type="SFTime"></field>
<field name="isActive" accessType="outputOnly" type="SFBool"></field>
<field name="enterTime" accessType="outputOnly" type="SFTime"></field>
<field name="exitTime" accessType="outputOnly" type="SFTime"></field>
</ProtoInterface>
<ProtoBody><ProtoDeclare name="Data"><ProtoInterface><field name="offset" accessType="inputOutput" type="SFBool"></field>
<field name="enabled" accessType="inputOutput" type="SFBool"></field>
<field name="startTime" accessType="inputOutput" type="SFTime"></field>
<field name="stopTime" accessType="inputOutput" type="SFTime"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>
<Script DEF="_door" directOutput="true" mustEvaluate="true"><field name="isActive" accessType="outputOnly" type="SFBool"></field>
<field name="enterTime" accessType="outputOnly" type="SFTime"></field>
<field name="exitTime" accessType="outputOnly" type="SFTime"></field>
<field name="set_offset" accessType="inputOnly" type="SFBool"></field>
<field name="set_enabled" accessType="inputOnly" type="SFBool"></field>
<field name="set_startTime" accessType="inputOnly" type="SFTime"></field>
<field name="set_stopTime" accessType="inputOnly" type="SFTime"></field>
<field name="offset" accessType="initializeOnly" type="SFBool"></field>
<field name="next" accessType="initializeOnly" type="SFBool"></field>
<field name="data" accessType="initializeOnly" type="SFNode"><ProtoInstance name="Data" DEF="Data"><IS><connect nodeField="offset" protoField="offset"></connect>
<connect nodeField="enabled" protoField="enabled"></connect>
<connect nodeField="startTime" protoField="startTime"></connect>
<connect nodeField="stopTime" protoField="stopTime"></connect>
</IS>
</ProtoInstance>
</field>
<IS><connect nodeField="isActive" protoField="isActive"></connect>
<connect nodeField="enterTime" protoField="enterTime"></connect>
<connect nodeField="exitTime" protoField="exitTime"></connect>
</IS>
<![CDATA[vrmlscript:
function set_offset(value, time)
{
	if (offset == value) { return; }

	if (data.enabled) {
		next = TRUE;
	} else {
		next = FALSE;
		offset = value;
		if (value) {
			if (!isActive) isActive = value;
			enterTime = time;			
		} else {
			if (isActive) {
				exitTime = time;
			}
		}
	}
}
function set_enabled(value, time)
{
	if (!value && next) {
		if (offset != data.offset) data.offset = !offset;
	} else if (!value && !offset && !next) {
		isActive = FALSE;
	}
}
function set_startTime(value, time) { data.offset = TRUE; }
function set_stopTime(value, time) { data.offset = FALSE; }]]></Script>
<ROUTE fromNode="Data" fromField="offset_changed" toNode="_door" toField="set_offset"></ROUTE>
<ROUTE fromNode="Data" fromField="enabled_changed" toNode="_door" toField="set_enabled"></ROUTE>
<ROUTE fromNode="Data" fromField="startTime_changed" toNode="_door" toField="set_startTime"></ROUTE>
<ROUTE fromNode="Data" fromField="stopTime_changed" toNode="_door" toField="set_stopTime"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "Door";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "offset";
field10.accessType = "inputOutput";
field10.type = "SFBool";
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

field field11 = createNode("field");
field11.name = "enabled";
field11.accessType = "inputOutput";
field11.type = "SFBool";
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

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody17 = createNode("ProtoBody");
ProtoDeclare ProtoDeclare18 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Data" ><ProtoInterface><field name="offset" accessType="inputOutput" type="SFBool"></field>
<field name="enabled" accessType="inputOutput" type="SFBool"></field>
<field name="startTime" accessType="inputOutput" type="SFTime"></field>
<field name="stopTime" accessType="inputOutput" type="SFTime"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare18.name = "Data";
ProtoInterface ProtoInterface19 = createNode("ProtoInterface");
field field20 = createNode("field");
field20.name = "offset";
field20.accessType = "inputOutput";
field20.type = "SFBool";
ProtoInterface19.field = new MFNode();

ProtoInterface19.field[0] = field20;

field field21 = createNode("field");
field21.name = "enabled";
field21.accessType = "inputOutput";
field21.type = "SFBool";
ProtoInterface19.field[1] = field21;

field field22 = createNode("field");
field22.name = "startTime";
field22.accessType = "inputOutput";
field22.type = "SFTime";
ProtoInterface19.field[2] = field22;

field field23 = createNode("field");
field23.name = "stopTime";
field23.accessType = "inputOutput";
field23.type = "SFTime";
ProtoInterface19.field[3] = field23;

ProtoDeclare18.protoInterface = ProtoInterface19;

ProtoBody ProtoBody24 = createNode("ProtoBody");
Group Group25 = createNode("Group");
ProtoBody24.children = new MFNode();

ProtoBody24.children[0] = Group25;

ProtoDeclare18.protoBody = ProtoBody24;

ProtoBody17.children = new MFNode();

ProtoBody17.children[0] = ProtoDeclare18;

Script Script26 = createNode("Script");
Script26.DEF = "_door";
Script26.directOutput = True;
Script26.mustEvaluate = True;
field field27 = createNode("field");
field27.name = "isActive";
field27.accessType = "outputOnly";
field27.type = "SFBool";
Script26.field = new MFNode();

Script26.field[0] = field27;

field field28 = createNode("field");
field28.name = "enterTime";
field28.accessType = "outputOnly";
field28.type = "SFTime";
Script26.field[1] = field28;

field field29 = createNode("field");
field29.name = "exitTime";
field29.accessType = "outputOnly";
field29.type = "SFTime";
Script26.field[2] = field29;

field field30 = createNode("field");
field30.name = "set_offset";
field30.accessType = "inputOnly";
field30.type = "SFBool";
Script26.field[3] = field30;

field field31 = createNode("field");
field31.name = "set_enabled";
field31.accessType = "inputOnly";
field31.type = "SFBool";
Script26.field[4] = field31;

field field32 = createNode("field");
field32.name = "set_startTime";
field32.accessType = "inputOnly";
field32.type = "SFTime";
Script26.field[5] = field32;

field field33 = createNode("field");
field33.name = "set_stopTime";
field33.accessType = "inputOnly";
field33.type = "SFTime";
Script26.field[6] = field33;

field field34 = createNode("field");
field34.name = "offset";
field34.accessType = "initializeOnly";
field34.type = "SFBool";
Script26.field[7] = field34;

field field35 = createNode("field");
field35.name = "next";
field35.accessType = "initializeOnly";
field35.type = "SFBool";
Script26.field[8] = field35;

field field36 = createNode("field");
field36.name = "data";
field36.accessType = "initializeOnly";
field36.type = "SFNode";
ProtoInstance ProtoInstance37 = createNode("ProtoInstance");
ProtoInstance37.name = "Data";
ProtoInstance37.DEF = "Data";
IS IS38 = createNode("IS");
connect connect39 = createNode("connect");
connect39.nodeField = "offset";
connect39.protoField = "offset";
IS38.connect = new MFNode();

IS38.connect[0] = connect39;

connect connect40 = createNode("connect");
connect40.nodeField = "enabled";
connect40.protoField = "enabled";
IS38.connect[1] = connect40;

connect connect41 = createNode("connect");
connect41.nodeField = "startTime";
connect41.protoField = "startTime";
IS38.connect[2] = connect41;

connect connect42 = createNode("connect");
connect42.nodeField = "stopTime";
connect42.protoField = "stopTime";
IS38.connect[3] = connect42;

ProtoInstance37.iS = IS38;

field36.children = new MFNode();

field36.children[0] = ProtoInstance37;

Script26.field[9] = field36;

IS IS43 = createNode("IS");
connect connect44 = createNode("connect");
connect44.nodeField = "isActive";
connect44.protoField = "isActive";
IS43.connect = new MFNode();

IS43.connect[0] = connect44;

connect connect45 = createNode("connect");
connect45.nodeField = "enterTime";
connect45.protoField = "enterTime";
IS43.connect[1] = connect45;

connect connect46 = createNode("connect");
connect46.nodeField = "exitTime";
connect46.protoField = "exitTime";
IS43.connect[2] = connect46;

Script26.iS = IS43;


Script26.setSourceCode(`vrmlscript:\n"+
"function set_offset(value, time)\n"+
"{\n"+
"	if (offset == value) { return; }\n"+
"\n"+
"	if (data.enabled) {\n"+
"		next = TRUE;\n"+
"	} else {\n"+
"		next = FALSE;\n"+
"		offset = value;\n"+
"		if (value) {\n"+
"			if (!isActive) isActive = value;\n"+
"			enterTime = time;			\n"+
"		} else {\n"+
"			if (isActive) {\n"+
"				exitTime = time;\n"+
"			}\n"+
"		}\n"+
"	}\n"+
"}\n"+
"function set_enabled(value, time)\n"+
"{\n"+
"	if (!value && next) {\n"+
"		if (offset != data.offset) data.offset = !offset;\n"+
"	} else if (!value && !offset && !next) {\n"+
"		isActive = FALSE;\n"+
"	}\n"+
"}\n"+
"function set_startTime(value, time) { data.offset = TRUE; }\n"+
"function set_stopTime(value, time) { data.offset = FALSE; }`)
ProtoBody17.children[1] = Script26;

ROUTE ROUTE47 = createNode("ROUTE");
ROUTE47.fromNode = "Data";
ROUTE47.fromField = "offset_changed";
ROUTE47.toNode = "_door";
ROUTE47.toField = "set_offset";
ProtoBody17.children[2] = ROUTE47;

ROUTE ROUTE48 = createNode("ROUTE");
ROUTE48.fromNode = "Data";
ROUTE48.fromField = "enabled_changed";
ROUTE48.toNode = "_door";
ROUTE48.toField = "set_enabled";
ProtoBody17.children[3] = ROUTE48;

ROUTE ROUTE49 = createNode("ROUTE");
ROUTE49.fromNode = "Data";
ROUTE49.fromField = "startTime_changed";
ROUTE49.toNode = "_door";
ROUTE49.toField = "set_startTime";
ProtoBody17.children[4] = ROUTE49;

ROUTE ROUTE50 = createNode("ROUTE");
ROUTE50.fromNode = "Data";
ROUTE50.fromField = "stopTime_changed";
ROUTE50.toNode = "_door";
ROUTE50.toField = "set_stopTime";
ProtoBody17.children[5] = ROUTE50;

ProtoDeclare8.protoBody = ProtoBody17;

children = new MFNode();

children[0] = ProtoDeclare8;

}
