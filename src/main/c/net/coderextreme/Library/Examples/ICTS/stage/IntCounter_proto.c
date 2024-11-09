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
meta3.content = "Thu, 23 Apr 2015 06:07:09 GMT";
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
meta6.content = "Thu, 23 Apr 2015 06:07:09 GMT";
head1.meta[4] = meta6;

head = head1;

ProtoDeclare ProtoDeclare8 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="IntCounter" ><ProtoInterface><field name="startValue" accessType="inputOutput" type="SFInt32"></field>
<field name="stopValue" accessType="inputOutput" type="SFInt32"></field>
<field name="add" accessType="inputOnly" type="SFInt32"></field>
<field name="offset" accessType="inputOutput" type="SFInt32"></field>
<field name="whichChoice_changed" accessType="outputOnly" type="SFInt32"></field>
<field name="stopTime" accessType="outputOnly" type="SFTime"></field>
</ProtoInterface>
<ProtoBody><ProtoDeclare name="Data"><ProtoInterface><field name="startValue" accessType="inputOutput" type="SFInt32"></field>
<field name="stopValue" accessType="inputOutput" type="SFInt32" value="1"></field>
<field name="offset" accessType="inputOutput" type="SFInt32"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>
<Group><Script DEF="_switcher" directOutput="true"><field name="whichChoice_changed" accessType="outputOnly" type="SFInt32"></field>
<field name="stopTime" accessType="outputOnly" type="SFTime"></field>
<field name="add" accessType="inputOnly" type="SFInt32"></field>
<field name="data" accessType="initializeOnly" type="SFNode"><ProtoInstance name="Data"><IS><connect nodeField="startValue" protoField="startValue"></connect>
<connect nodeField="stopValue" protoField="stopValue"></connect>
<connect nodeField="offset" protoField="offset"></connect>
</IS>
</ProtoInstance>
</field>
<IS><connect nodeField="whichChoice_changed" protoField="whichChoice_changed"></connect>
<connect nodeField="stopTime" protoField="stopTime"></connect>
<connect nodeField="add" protoField="add"></connect>
</IS>
<![CDATA[vrmlscript:
	function  initialize()
	{
		data.offset = data.startValue;
		whichChoice_changed = data.startValue;
	}

	function  add(value, time)
	{
		data.offset += value;
		if (data.stopValue >= data.startValue) {
			if (data.offset < data.startValue) {
				data.offset = data.startValue;
				whichChoice_changed = data.offset;
			} else if (data.offset > data.stopValue && data.stopValue != data.startValue) {
				data.offset = data.stopValue;
				whichChoice_changed = data.offset;
			 	stopTime = time;
			} else whichChoice_changed = data.offset;
		} else {
			if (data.offset < data.stopValue) {
				data.offset = data.stopValue;
				whichChoice_changed = data.offset;
			} else if (data.offset > data.startValue) {
				data.offset = data.startValue;
				whichChoice_changed = data.offset;
			  	stopTime = time;
			} else whichChoice_changed = data.offset;
		}
	}]]></Script>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "IntCounter";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "startValue";
field10.accessType = "inputOutput";
field10.type = "SFInt32";
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

field field11 = createNode("field");
field11.name = "stopValue";
field11.accessType = "inputOutput";
field11.type = "SFInt32";
ProtoInterface9.field[1] = field11;

field field12 = createNode("field");
field12.name = "add";
field12.accessType = "inputOnly";
field12.type = "SFInt32";
ProtoInterface9.field[2] = field12;

field field13 = createNode("field");
field13.name = "offset";
field13.accessType = "inputOutput";
field13.type = "SFInt32";
ProtoInterface9.field[3] = field13;

field field14 = createNode("field");
field14.name = "whichChoice_changed";
field14.accessType = "outputOnly";
field14.type = "SFInt32";
ProtoInterface9.field[4] = field14;

field field15 = createNode("field");
field15.name = "stopTime";
field15.accessType = "outputOnly";
field15.type = "SFTime";
ProtoInterface9.field[5] = field15;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody16 = createNode("ProtoBody");
ProtoDeclare ProtoDeclare17 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Data" ><ProtoInterface><field name="startValue" accessType="inputOutput" type="SFInt32"></field>
<field name="stopValue" accessType="inputOutput" type="SFInt32" value="1"></field>
<field name="offset" accessType="inputOutput" type="SFInt32"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare17.name = "Data";
ProtoInterface ProtoInterface18 = createNode("ProtoInterface");
field field19 = createNode("field");
field19.name = "startValue";
field19.accessType = "inputOutput";
field19.type = "SFInt32";
ProtoInterface18.field = new MFNode();

ProtoInterface18.field[0] = field19;

field field20 = createNode("field");
field20.name = "stopValue";
field20.accessType = "inputOutput";
field20.type = "SFInt32";
field20.value = "1";
ProtoInterface18.field[1] = field20;

field field21 = createNode("field");
field21.name = "offset";
field21.accessType = "inputOutput";
field21.type = "SFInt32";
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
Script25.DEF = "_switcher";
Script25.directOutput = True;
field field26 = createNode("field");
field26.name = "whichChoice_changed";
field26.accessType = "outputOnly";
field26.type = "SFInt32";
Script25.field = new MFNode();

Script25.field[0] = field26;

field field27 = createNode("field");
field27.name = "stopTime";
field27.accessType = "outputOnly";
field27.type = "SFTime";
Script25.field[1] = field27;

field field28 = createNode("field");
field28.name = "add";
field28.accessType = "inputOnly";
field28.type = "SFInt32";
Script25.field[2] = field28;

field field29 = createNode("field");
field29.name = "data";
field29.accessType = "initializeOnly";
field29.type = "SFNode";
ProtoInstance ProtoInstance30 = createNode("ProtoInstance");
ProtoInstance30.name = "Data";
IS IS31 = createNode("IS");
connect connect32 = createNode("connect");
connect32.nodeField = "startValue";
connect32.protoField = "startValue";
IS31.connect = new MFNode();

IS31.connect[0] = connect32;

connect connect33 = createNode("connect");
connect33.nodeField = "stopValue";
connect33.protoField = "stopValue";
IS31.connect[1] = connect33;

connect connect34 = createNode("connect");
connect34.nodeField = "offset";
connect34.protoField = "offset";
IS31.connect[2] = connect34;

ProtoInstance30.iS = IS31;

field29.children = new MFNode();

field29.children[0] = ProtoInstance30;

Script25.field[3] = field29;

IS IS35 = createNode("IS");
connect connect36 = createNode("connect");
connect36.nodeField = "whichChoice_changed";
connect36.protoField = "whichChoice_changed";
IS35.connect = new MFNode();

IS35.connect[0] = connect36;

connect connect37 = createNode("connect");
connect37.nodeField = "stopTime";
connect37.protoField = "stopTime";
IS35.connect[1] = connect37;

connect connect38 = createNode("connect");
connect38.nodeField = "add";
connect38.protoField = "add";
IS35.connect[2] = connect38;

Script25.iS = IS35;


Script25.setSourceCode(`vrmlscript:\n"+
"	function  initialize()\n"+
"	{\n"+
"		data.offset = data.startValue;\n"+
"		whichChoice_changed = data.startValue;\n"+
"	}\n"+
"\n"+
"	function  add(value, time)\n"+
"	{\n"+
"		data.offset += value;\n"+
"		if (data.stopValue >= data.startValue) {\n"+
"			if (data.offset < data.startValue) {\n"+
"				data.offset = data.startValue;\n"+
"				whichChoice_changed = data.offset;\n"+
"			} else if (data.offset > data.stopValue && data.stopValue != data.startValue) {\n"+
"				data.offset = data.stopValue;\n"+
"				whichChoice_changed = data.offset;\n"+
"			 	stopTime = time;\n"+
"			} else whichChoice_changed = data.offset;\n"+
"		} else {\n"+
"			if (data.offset < data.stopValue) {\n"+
"				data.offset = data.stopValue;\n"+
"				whichChoice_changed = data.offset;\n"+
"			} else if (data.offset > data.startValue) {\n"+
"				data.offset = data.startValue;\n"+
"				whichChoice_changed = data.offset;\n"+
"			  	stopTime = time;\n"+
"			} else whichChoice_changed = data.offset;\n"+
"		}\n"+
"	}`)
Group24.children = new MFNode();

Group24.children[0] = Script25;

ProtoBody16.children[1] = Group24;

ProtoDeclare8.protoBody = ProtoBody16;

children = new MFNode();

children[0] = ProtoDeclare8;

}
