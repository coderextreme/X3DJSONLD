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
meta3.content = "Thu, 23 Apr 2015 06:07:00 GMT";
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
meta6.content = "Thu, 23 Apr 2015 06:07:00 GMT";
head1.meta[4] = meta6;

head = head1;

ProtoDeclare ProtoDeclare8 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="CountDown" ><ProtoInterface><field name="startTime" accessType="inputOutput" type="SFTime" value="300"></field>
<field name="stopTime" accessType="inputOutput" type="SFTime"></field>
<field name="set_time" accessType="inputOnly" type="SFTime"></field>
<field name="offset" accessType="inputOutput" type="SFTime"></field>
<field name="time" accessType="outputOnly" type="SFTime"></field>
<field name="exitTime" accessType="outputOnly" type="SFTime"></field>
</ProtoInterface>
<ProtoBody><ProtoDeclare name="Data"><ProtoInterface><field name="startTime" accessType="inputOutput" type="SFTime"></field>
<field name="stopTime" accessType="inputOutput" type="SFTime"></field>
<field name="offset" accessType="inputOutput" type="SFTime"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>
<Group><Script DEF="_countDown" directOutput="true"><field name="time_changed" accessType="outputOnly" type="SFTime"></field>
<field name="exitTime" accessType="outputOnly" type="SFTime"></field>
<field name="set_time" accessType="inputOnly" type="SFTime"></field>
<field name="set_offset" accessType="inputOnly" type="SFTime"></field>
<field name="offset" accessType="initializeOnly" type="SFTime"></field>
<field name="last" accessType="initializeOnly" type="SFTime" value="-1"></field>
<field name="data" accessType="initializeOnly" type="SFNode"><ProtoInstance name="Data" DEF="_1"><IS><connect nodeField="startTime" protoField="startTime"></connect>
<connect nodeField="stopTime" protoField="stopTime"></connect>
<connect nodeField="offset" protoField="offset"></connect>
</IS>
</ProtoInstance>
</field>
<IS><connect nodeField="time_changed" protoField="time"></connect>
<connect nodeField="exitTime" protoField="exitTime"></connect>
<connect nodeField="set_time" protoField="set_time"></connect>
</IS>
<![CDATA[vrmlscript:
function  initialize()
{
	offset = data.startTime;
	time_changed = offset;
}

function  set_offset(value, time)
{
	offset = value;
	last = -1;
}

function  set_time(value, time)
{
	if (last < 0) last = time;
	offset -= (time - last);
	if (offset <= data.stopTime) {
		last = -1;
		offset = data.startTime;
		time_changed = data.stopTime;
		exitTime = time;
	} else {		
		time_changed = offset;
		last = time;
	}
}]]></Script>
</Group>
<ROUTE fromNode="_1" fromField="offset_changed" toNode="_countDown" toField="set_offset"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "CountDown";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "startTime";
field10.accessType = "inputOutput";
field10.type = "SFTime";
field10.value = "300";
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

field field11 = createNode("field");
field11.name = "stopTime";
field11.accessType = "inputOutput";
field11.type = "SFTime";
ProtoInterface9.field[1] = field11;

field field12 = createNode("field");
field12.name = "set_time";
field12.accessType = "inputOnly";
field12.type = "SFTime";
ProtoInterface9.field[2] = field12;

field field13 = createNode("field");
field13.name = "offset";
field13.accessType = "inputOutput";
field13.type = "SFTime";
ProtoInterface9.field[3] = field13;

field field14 = createNode("field");
field14.name = "time";
field14.accessType = "outputOnly";
field14.type = "SFTime";
ProtoInterface9.field[4] = field14;

field field15 = createNode("field");
field15.name = "exitTime";
field15.accessType = "outputOnly";
field15.type = "SFTime";
ProtoInterface9.field[5] = field15;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody16 = createNode("ProtoBody");
ProtoDeclare ProtoDeclare17 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Data" ><ProtoInterface><field name="startTime" accessType="inputOutput" type="SFTime"></field>
<field name="stopTime" accessType="inputOutput" type="SFTime"></field>
<field name="offset" accessType="inputOutput" type="SFTime"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare17.name = "Data";
ProtoInterface ProtoInterface18 = createNode("ProtoInterface");
field field19 = createNode("field");
field19.name = "startTime";
field19.accessType = "inputOutput";
field19.type = "SFTime";
ProtoInterface18.field = new MFNode();

ProtoInterface18.field[0] = field19;

field field20 = createNode("field");
field20.name = "stopTime";
field20.accessType = "inputOutput";
field20.type = "SFTime";
ProtoInterface18.field[1] = field20;

field field21 = createNode("field");
field21.name = "offset";
field21.accessType = "inputOutput";
field21.type = "SFTime";
ProtoInterface18.field[2] = field21;

ProtoDeclare17.protoInterface = ProtoInterface18;

ProtoBody ProtoBody22 = createNode("ProtoBody");
Group Group23 = createNode("Group");
ProtoBody22.children = new MFNode();

ProtoBody22.children[0] = Group23;

ProtoDeclare17.protoBody = ProtoBody22;

ProtoBody16.children = new MFNode();

ProtoBody16.children[0] = ProtoDeclare17;

Group Group24 = createNode("Group");
Script Script25 = createNode("Script");
Script25.DEF = "_countDown";
Script25.directOutput = True;
field field26 = createNode("field");
field26.name = "time_changed";
field26.accessType = "outputOnly";
field26.type = "SFTime";
Script25.field = new MFNode();

Script25.field[0] = field26;

field field27 = createNode("field");
field27.name = "exitTime";
field27.accessType = "outputOnly";
field27.type = "SFTime";
Script25.field[1] = field27;

field field28 = createNode("field");
field28.name = "set_time";
field28.accessType = "inputOnly";
field28.type = "SFTime";
Script25.field[2] = field28;

field field29 = createNode("field");
field29.name = "set_offset";
field29.accessType = "inputOnly";
field29.type = "SFTime";
Script25.field[3] = field29;

field field30 = createNode("field");
field30.name = "offset";
field30.accessType = "initializeOnly";
field30.type = "SFTime";
Script25.field[4] = field30;

field field31 = createNode("field");
field31.name = "last";
field31.accessType = "initializeOnly";
field31.type = "SFTime";
field31.value = "-1";
Script25.field[5] = field31;

field field32 = createNode("field");
field32.name = "data";
field32.accessType = "initializeOnly";
field32.type = "SFNode";
ProtoInstance ProtoInstance33 = createNode("ProtoInstance");
ProtoInstance33.name = "Data";
ProtoInstance33.DEF = "_1";
IS IS34 = createNode("IS");
connect connect35 = createNode("connect");
connect35.nodeField = "startTime";
connect35.protoField = "startTime";
IS34.connect = new MFNode();

IS34.connect[0] = connect35;

connect connect36 = createNode("connect");
connect36.nodeField = "stopTime";
connect36.protoField = "stopTime";
IS34.connect[1] = connect36;

connect connect37 = createNode("connect");
connect37.nodeField = "offset";
connect37.protoField = "offset";
IS34.connect[2] = connect37;

ProtoInstance33.iS = IS34;

field32.children = new MFNode();

field32.children[0] = ProtoInstance33;

Script25.field[6] = field32;

IS IS38 = createNode("IS");
connect connect39 = createNode("connect");
connect39.nodeField = "time_changed";
connect39.protoField = "time";
IS38.connect = new MFNode();

IS38.connect[0] = connect39;

connect connect40 = createNode("connect");
connect40.nodeField = "exitTime";
connect40.protoField = "exitTime";
IS38.connect[1] = connect40;

connect connect41 = createNode("connect");
connect41.nodeField = "set_time";
connect41.protoField = "set_time";
IS38.connect[2] = connect41;

Script25.iS = IS38;


Script25.setSourceCode(`vrmlscript:\n"+
"function  initialize()\n"+
"{\n"+
"	offset = data.startTime;\n"+
"	time_changed = offset;\n"+
"}\n"+
"\n"+
"function  set_offset(value, time)\n"+
"{\n"+
"	offset = value;\n"+
"	last = -1;\n"+
"}\n"+
"\n"+
"function  set_time(value, time)\n"+
"{\n"+
"	if (last < 0) last = time;\n"+
"	offset -= (time - last);\n"+
"	if (offset <= data.stopTime) {\n"+
"		last = -1;\n"+
"		offset = data.startTime;\n"+
"		time_changed = data.stopTime;\n"+
"		exitTime = time;\n"+
"	} else {		\n"+
"		time_changed = offset;\n"+
"		last = time;\n"+
"	}\n"+
"}`)
Group24.children = new MFNode();

Group24.children[0] = Script25;

ProtoBody16.children[1] = Group24;

ROUTE ROUTE42 = createNode("ROUTE");
ROUTE42.fromNode = "_1";
ROUTE42.fromField = "offset_changed";
ROUTE42.toNode = "_countDown";
ROUTE42.toField = "set_offset";
ProtoBody16.children[2] = ROUTE42;

ProtoDeclare8.protoBody = ProtoBody16;

children = new MFNode();

children[0] = ProtoDeclare8;

}
