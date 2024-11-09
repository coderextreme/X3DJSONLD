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
meta3.content = "Thu, 23 Apr 2015 06:07:15 GMT";
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
meta6.content = "Thu, 23 Apr 2015 06:07:15 GMT";
head1.meta[4] = meta6;

head = head1;

ProtoDeclare ProtoDeclare8 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="RandomSwitcher" ><ProtoInterface><field name="minValue" accessType="inputOutput" type="SFInt32"></field>
<field name="maxValue" accessType="inputOutput" type="SFInt32" value="1"></field>
<field name="startTime" accessType="inputOutput" type="SFTime" value="1"></field>
<field name="whichChoice_changed" accessType="outputOnly" type="SFInt32"></field>
</ProtoInterface>
<ProtoBody><ProtoDeclare name="Data"><ProtoInterface><field name="minValue" accessType="inputOutput" type="SFInt32"></field>
<field name="maxValue" accessType="inputOutput" type="SFInt32" value="1"></field>
<field name="startTime" accessType="inputOutput" type="SFTime" value="1"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>
<Group><Script DEF="_switcher" directOutput="true"><field name="set_startTime" accessType="inputOnly" type="SFTime"></field>
<field name="whichChoice_changed" accessType="outputOnly" type="SFInt32"></field>
<field name="data" accessType="initializeOnly" type="SFNode"><ProtoInstance name="Data" DEF="Data"><IS><connect nodeField="minValue" protoField="minValue"></connect>
<connect nodeField="maxValue" protoField="maxValue"></connect>
<connect nodeField="startTime" protoField="startTime"></connect>
</IS>
</ProtoInstance>
</field>
<IS><connect nodeField="whichChoice_changed" protoField="whichChoice_changed"></connect>
</IS>
<![CDATA[vrmlscript:
	function  set_startTime(value, time)
	{
		whichChoice = Math.round(data.minValue + (Math.random() * (data.maxValue - data.minValue)));
		while (whichChoice_changed == whichChoice) {
			whichChoice = Math.round(data.minValue + (Math.random() * (data.maxValue - data.minValue)));
		}
		whichChoice_changed = whichChoice;
	}

	function  initialize()
	{
		if (data.startTime == 1) set_startTime(0, 0);
	}]]></Script>
</Group>
<ROUTE fromNode="Data" fromField="startTime_changed" toNode="_switcher" toField="set_startTime"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "RandomSwitcher";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "minValue";
field10.accessType = "inputOutput";
field10.type = "SFInt32";
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

field field11 = createNode("field");
field11.name = "maxValue";
field11.accessType = "inputOutput";
field11.type = "SFInt32";
field11.value = "1";
ProtoInterface9.field[1] = field11;

field field12 = createNode("field");
field12.name = "startTime";
field12.accessType = "inputOutput";
field12.type = "SFTime";
field12.value = "1";
ProtoInterface9.field[2] = field12;

field field13 = createNode("field");
field13.name = "whichChoice_changed";
field13.accessType = "outputOnly";
field13.type = "SFInt32";
ProtoInterface9.field[3] = field13;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody14 = createNode("ProtoBody");
ProtoDeclare ProtoDeclare15 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Data" ><ProtoInterface><field name="minValue" accessType="inputOutput" type="SFInt32"></field>
<field name="maxValue" accessType="inputOutput" type="SFInt32" value="1"></field>
<field name="startTime" accessType="inputOutput" type="SFTime" value="1"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare15.name = "Data";
ProtoInterface ProtoInterface16 = createNode("ProtoInterface");
field field17 = createNode("field");
field17.name = "minValue";
field17.accessType = "inputOutput";
field17.type = "SFInt32";
ProtoInterface16.field = new MFNode();

ProtoInterface16.field[0] = field17;

field field18 = createNode("field");
field18.name = "maxValue";
field18.accessType = "inputOutput";
field18.type = "SFInt32";
field18.value = "1";
ProtoInterface16.field[1] = field18;

field field19 = createNode("field");
field19.name = "startTime";
field19.accessType = "inputOutput";
field19.type = "SFTime";
field19.value = "1";
ProtoInterface16.field[2] = field19;

ProtoDeclare15.protoInterface = ProtoInterface16;

ProtoBody ProtoBody20 = createNode("ProtoBody");
Group Group21 = createNode("Group");
ProtoBody20.children = new MFNode();

ProtoBody20.children[0] = Group21;

ProtoDeclare15.protoBody = ProtoBody20;

ProtoBody14.children = new MFNode();

ProtoBody14.children[0] = ProtoDeclare15;

Group Group22 = createNode("Group");
Script Script23 = createNode("Script");
Script23.DEF = "_switcher";
Script23.directOutput = True;
field field24 = createNode("field");
field24.name = "set_startTime";
field24.accessType = "inputOnly";
field24.type = "SFTime";
Script23.field = new MFNode();

Script23.field[0] = field24;

field field25 = createNode("field");
field25.name = "whichChoice_changed";
field25.accessType = "outputOnly";
field25.type = "SFInt32";
Script23.field[1] = field25;

field field26 = createNode("field");
field26.name = "data";
field26.accessType = "initializeOnly";
field26.type = "SFNode";
ProtoInstance ProtoInstance27 = createNode("ProtoInstance");
ProtoInstance27.name = "Data";
ProtoInstance27.DEF = "Data";
IS IS28 = createNode("IS");
connect connect29 = createNode("connect");
connect29.nodeField = "minValue";
connect29.protoField = "minValue";
IS28.connect = new MFNode();

IS28.connect[0] = connect29;

connect connect30 = createNode("connect");
connect30.nodeField = "maxValue";
connect30.protoField = "maxValue";
IS28.connect[1] = connect30;

connect connect31 = createNode("connect");
connect31.nodeField = "startTime";
connect31.protoField = "startTime";
IS28.connect[2] = connect31;

ProtoInstance27.iS = IS28;

field26.children = new MFNode();

field26.children[0] = ProtoInstance27;

Script23.field[2] = field26;

IS IS32 = createNode("IS");
connect connect33 = createNode("connect");
connect33.nodeField = "whichChoice_changed";
connect33.protoField = "whichChoice_changed";
IS32.connect = new MFNode();

IS32.connect[0] = connect33;

Script23.iS = IS32;


Script23.setSourceCode(`vrmlscript:\n"+
"	function  set_startTime(value, time)\n"+
"	{\n"+
"		whichChoice = Math.round(data.minValue + (Math.random() * (data.maxValue - data.minValue)));\n"+
"		while (whichChoice_changed == whichChoice) {\n"+
"			whichChoice = Math.round(data.minValue + (Math.random() * (data.maxValue - data.minValue)));\n"+
"		}\n"+
"		whichChoice_changed = whichChoice;\n"+
"	}\n"+
"\n"+
"	function  initialize()\n"+
"	{\n"+
"		if (data.startTime == 1) set_startTime(0, 0);\n"+
"	}`)
Group22.children = new MFNode();

Group22.children[0] = Script23;

ProtoBody14.children[1] = Group22;

ROUTE ROUTE34 = createNode("ROUTE");
ROUTE34.fromNode = "Data";
ROUTE34.fromField = "startTime_changed";
ROUTE34.toNode = "_switcher";
ROUTE34.toField = "set_startTime";
ProtoBody14.children[2] = ROUTE34;

ProtoDeclare8.protoBody = ProtoBody14;

children = new MFNode();

children[0] = ProtoDeclare8;

}
