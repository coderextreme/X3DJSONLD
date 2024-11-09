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
meta3.content = "Thu, 23 Apr 2015 06:07:04 GMT";
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
meta6.content = "Thu, 23 Apr 2015 06:07:04 GMT";
head1.meta[4] = meta6;

head = head1;

ProtoDeclare ProtoDeclare8 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Gate" ><ProtoInterface><field name="offset" accessType="inputOutput" type="SFBool"></field>
<field name="startTime" accessType="inputOutput" type="SFTime"></field>
<field name="isActive" accessType="outputOnly" type="SFBool"></field>
<field name="enterTime" accessType="outputOnly" type="SFTime"></field>
<field name="exitTime" accessType="outputOnly" type="SFTime"></field>
</ProtoInterface>
<ProtoBody><ProtoDeclare name="Data"><ProtoInterface><field name="offset" accessType="inputOutput" type="SFBool"></field>
<field name="startTime" accessType="inputOutput" type="SFTime"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>
<Script DEF="_1" directOutput="true" mustEvaluate="true"><field name="isActive" accessType="outputOnly" type="SFBool"></field>
<field name="enterTime" accessType="outputOnly" type="SFTime"></field>
<field name="exitTime" accessType="outputOnly" type="SFTime"></field>
<field name="set_startTime" accessType="inputOnly" type="SFTime"></field>
<field name="data" accessType="initializeOnly" type="SFNode"><ProtoInstance name="Data" DEF="_2"><IS><connect nodeField="offset" protoField="offset"></connect>
<connect nodeField="startTime" protoField="startTime"></connect>
</IS>
</ProtoInstance>
</field>
<IS><connect nodeField="isActive" protoField="isActive"></connect>
<connect nodeField="enterTime" protoField="enterTime"></connect>
<connect nodeField="exitTime" protoField="exitTime"></connect>
</IS>
<![CDATA[vrmlscript:
function set_startTime(value, time)
{
	if (data.offset) {
		isActive = FALSE;
		exitTime = time;
	} else {
		isActive = TRUE;
		enterTime = time;
	}
}]]></Script>
<ROUTE fromNode="_2" fromField="startTime_changed" toNode="_1" toField="set_startTime"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "Gate";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "offset";
field10.accessType = "inputOutput";
field10.type = "SFBool";
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
field13.name = "enterTime";
field13.accessType = "outputOnly";
field13.type = "SFTime";
ProtoInterface9.field[3] = field13;

field field14 = createNode("field");
field14.name = "exitTime";
field14.accessType = "outputOnly";
field14.type = "SFTime";
ProtoInterface9.field[4] = field14;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody15 = createNode("ProtoBody");
ProtoDeclare ProtoDeclare16 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Data" ><ProtoInterface><field name="offset" accessType="inputOutput" type="SFBool"></field>
<field name="startTime" accessType="inputOutput" type="SFTime"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare16.name = "Data";
ProtoInterface ProtoInterface17 = createNode("ProtoInterface");
field field18 = createNode("field");
field18.name = "offset";
field18.accessType = "inputOutput";
field18.type = "SFBool";
ProtoInterface17.field = new MFNode();

ProtoInterface17.field[0] = field18;

field field19 = createNode("field");
field19.name = "startTime";
field19.accessType = "inputOutput";
field19.type = "SFTime";
ProtoInterface17.field[1] = field19;

ProtoDeclare16.protoInterface = ProtoInterface17;

ProtoBody ProtoBody20 = createNode("ProtoBody");
Group Group21 = createNode("Group");
ProtoBody20.children = new MFNode();

ProtoBody20.children[0] = Group21;

ProtoDeclare16.protoBody = ProtoBody20;

ProtoBody15.children = new MFNode();

ProtoBody15.children[0] = ProtoDeclare16;

Script Script22 = createNode("Script");
Script22.DEF = "_1";
Script22.directOutput = True;
Script22.mustEvaluate = True;
field field23 = createNode("field");
field23.name = "isActive";
field23.accessType = "outputOnly";
field23.type = "SFBool";
Script22.field = new MFNode();

Script22.field[0] = field23;

field field24 = createNode("field");
field24.name = "enterTime";
field24.accessType = "outputOnly";
field24.type = "SFTime";
Script22.field[1] = field24;

field field25 = createNode("field");
field25.name = "exitTime";
field25.accessType = "outputOnly";
field25.type = "SFTime";
Script22.field[2] = field25;

field field26 = createNode("field");
field26.name = "set_startTime";
field26.accessType = "inputOnly";
field26.type = "SFTime";
Script22.field[3] = field26;

field field27 = createNode("field");
field27.name = "data";
field27.accessType = "initializeOnly";
field27.type = "SFNode";
ProtoInstance ProtoInstance28 = createNode("ProtoInstance");
ProtoInstance28.name = "Data";
ProtoInstance28.DEF = "_2";
IS IS29 = createNode("IS");
connect connect30 = createNode("connect");
connect30.nodeField = "offset";
connect30.protoField = "offset";
IS29.connect = new MFNode();

IS29.connect[0] = connect30;

connect connect31 = createNode("connect");
connect31.nodeField = "startTime";
connect31.protoField = "startTime";
IS29.connect[1] = connect31;

ProtoInstance28.iS = IS29;

field27.children = new MFNode();

field27.children[0] = ProtoInstance28;

Script22.field[4] = field27;

IS IS32 = createNode("IS");
connect connect33 = createNode("connect");
connect33.nodeField = "isActive";
connect33.protoField = "isActive";
IS32.connect = new MFNode();

IS32.connect[0] = connect33;

connect connect34 = createNode("connect");
connect34.nodeField = "enterTime";
connect34.protoField = "enterTime";
IS32.connect[1] = connect34;

connect connect35 = createNode("connect");
connect35.nodeField = "exitTime";
connect35.protoField = "exitTime";
IS32.connect[2] = connect35;

Script22.iS = IS32;


Script22.setSourceCode(`vrmlscript:\n"+
"function set_startTime(value, time)\n"+
"{\n"+
"	if (data.offset) {\n"+
"		isActive = FALSE;\n"+
"		exitTime = time;\n"+
"	} else {\n"+
"		isActive = TRUE;\n"+
"		enterTime = time;\n"+
"	}\n"+
"}`)
ProtoBody15.children[1] = Script22;

ROUTE ROUTE36 = createNode("ROUTE");
ROUTE36.fromNode = "_2";
ROUTE36.fromField = "startTime_changed";
ROUTE36.toNode = "_1";
ROUTE36.toField = "set_startTime";
ProtoBody15.children[2] = ROUTE36;

ProtoDeclare8.protoBody = ProtoBody15;

children = new MFNode();

children[0] = ProtoDeclare8;

}
