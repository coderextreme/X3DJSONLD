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
meta3.content = "Thu, 23 Apr 2015 06:06:56 GMT";
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
meta6.content = "Thu, 23 Apr 2015 06:06:56 GMT";
head1.meta[4] = meta6;

head = head1;

ProtoDeclare ProtoDeclare8 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="AnimGate" ><ProtoInterface><field name="offset" accessType="inputOutput" type="SFBool"></field>
<field name="startTime" accessType="inputOutput" type="SFTime"></field>
<field name="isActive" accessType="outputOnly" type="SFBool"></field>
<field name="state" accessType="outputOnly" type="SFBool"></field>
<field name="enterTime" accessType="outputOnly" type="SFTime"></field>
<field name="exitTime" accessType="outputOnly" type="SFTime"></field>
<field name="anim" accessType="inputOnly" type="SFBool"></field>
</ProtoInterface>
<ProtoBody><ProtoDeclare name="Data"><ProtoInterface><field name="offset" accessType="inputOutput" type="SFBool"></field>
<field name="startTime" accessType="inputOutput" type="SFTime"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>
<Script DEF="_1" directOutput="true" mustEvaluate="true"><field name="isActive" accessType="outputOnly" type="SFBool"></field>
<field name="state" accessType="outputOnly" type="SFBool"></field>
<field name="enterTime" accessType="outputOnly" type="SFTime"></field>
<field name="exitTime" accessType="outputOnly" type="SFTime"></field>
<field name="set_startTime" accessType="inputOnly" type="SFTime"></field>
<field name="anim" accessType="inputOnly" type="SFBool"></field>
<field name="data" accessType="initializeOnly" type="SFNode"><ProtoInstance name="Data" DEF="_2"><IS><connect nodeField="offset" protoField="offset"></connect>
<connect nodeField="startTime" protoField="startTime"></connect>
</IS>
</ProtoInstance>
</field>
<IS><connect nodeField="isActive" protoField="isActive"></connect>
<connect nodeField="state" protoField="state"></connect>
<connect nodeField="enterTime" protoField="enterTime"></connect>
<connect nodeField="exitTime" protoField="exitTime"></connect>
<connect nodeField="anim" protoField="anim"></connect>
</IS>
<![CDATA[vrmlscript:
function set_startTime(value, time)
{
	if (data.offset) {
		exitTime = time;
		isActive = FALSE;
	} else {
		isActive = TRUE;
		enterTime = time;
	}
}
function anim(value, time)
{
	if (!value) { state = data.offset; }
}]]></Script>
<ROUTE fromNode="_2" fromField="startTime_changed" toNode="_1" toField="set_startTime"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "AnimGate";
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
field13.name = "state";
field13.accessType = "outputOnly";
field13.type = "SFBool";
ProtoInterface9.field[3] = field13;

field field14 = createNode("field");
field14.name = "enterTime";
field14.accessType = "outputOnly";
field14.type = "SFTime";
ProtoInterface9.field[4] = field14;

field field15 = createNode("field");
field15.name = "exitTime";
field15.accessType = "outputOnly";
field15.type = "SFTime";
ProtoInterface9.field[5] = field15;

field field16 = createNode("field");
field16.name = "anim";
field16.accessType = "inputOnly";
field16.type = "SFBool";
ProtoInterface9.field[6] = field16;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody17 = createNode("ProtoBody");
ProtoDeclare ProtoDeclare18 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Data" ><ProtoInterface><field name="offset" accessType="inputOutput" type="SFBool"></field>
<field name="startTime" accessType="inputOutput" type="SFTime"></field>
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
field21.name = "startTime";
field21.accessType = "inputOutput";
field21.type = "SFTime";
ProtoInterface19.field[1] = field21;

ProtoDeclare18.protoInterface = ProtoInterface19;

ProtoBody ProtoBody22 = createNode("ProtoBody");
Group Group23 = createNode("Group");
ProtoBody22.children = new MFNode();

ProtoBody22.children[0] = Group23;

ProtoDeclare18.protoBody = ProtoBody22;

ProtoBody17.children = new MFNode();

ProtoBody17.children[0] = ProtoDeclare18;

Script Script24 = createNode("Script");
Script24.DEF = "_1";
Script24.directOutput = True;
Script24.mustEvaluate = True;
field field25 = createNode("field");
field25.name = "isActive";
field25.accessType = "outputOnly";
field25.type = "SFBool";
Script24.field = new MFNode();

Script24.field[0] = field25;

field field26 = createNode("field");
field26.name = "state";
field26.accessType = "outputOnly";
field26.type = "SFBool";
Script24.field[1] = field26;

field field27 = createNode("field");
field27.name = "enterTime";
field27.accessType = "outputOnly";
field27.type = "SFTime";
Script24.field[2] = field27;

field field28 = createNode("field");
field28.name = "exitTime";
field28.accessType = "outputOnly";
field28.type = "SFTime";
Script24.field[3] = field28;

field field29 = createNode("field");
field29.name = "set_startTime";
field29.accessType = "inputOnly";
field29.type = "SFTime";
Script24.field[4] = field29;

field field30 = createNode("field");
field30.name = "anim";
field30.accessType = "inputOnly";
field30.type = "SFBool";
Script24.field[5] = field30;

field field31 = createNode("field");
field31.name = "data";
field31.accessType = "initializeOnly";
field31.type = "SFNode";
ProtoInstance ProtoInstance32 = createNode("ProtoInstance");
ProtoInstance32.name = "Data";
ProtoInstance32.DEF = "_2";
IS IS33 = createNode("IS");
connect connect34 = createNode("connect");
connect34.nodeField = "offset";
connect34.protoField = "offset";
IS33.connect = new MFNode();

IS33.connect[0] = connect34;

connect connect35 = createNode("connect");
connect35.nodeField = "startTime";
connect35.protoField = "startTime";
IS33.connect[1] = connect35;

ProtoInstance32.iS = IS33;

field31.children = new MFNode();

field31.children[0] = ProtoInstance32;

Script24.field[6] = field31;

IS IS36 = createNode("IS");
connect connect37 = createNode("connect");
connect37.nodeField = "isActive";
connect37.protoField = "isActive";
IS36.connect = new MFNode();

IS36.connect[0] = connect37;

connect connect38 = createNode("connect");
connect38.nodeField = "state";
connect38.protoField = "state";
IS36.connect[1] = connect38;

connect connect39 = createNode("connect");
connect39.nodeField = "enterTime";
connect39.protoField = "enterTime";
IS36.connect[2] = connect39;

connect connect40 = createNode("connect");
connect40.nodeField = "exitTime";
connect40.protoField = "exitTime";
IS36.connect[3] = connect40;

connect connect41 = createNode("connect");
connect41.nodeField = "anim";
connect41.protoField = "anim";
IS36.connect[4] = connect41;

Script24.iS = IS36;


Script24.setSourceCode(`vrmlscript:\n"+
"function set_startTime(value, time)\n"+
"{\n"+
"	if (data.offset) {\n"+
"		exitTime = time;\n"+
"		isActive = FALSE;\n"+
"	} else {\n"+
"		isActive = TRUE;\n"+
"		enterTime = time;\n"+
"	}\n"+
"}\n"+
"function anim(value, time)\n"+
"{\n"+
"	if (!value) { state = data.offset; }\n"+
"}`)
ProtoBody17.children[1] = Script24;

ROUTE ROUTE42 = createNode("ROUTE");
ROUTE42.fromNode = "_2";
ROUTE42.fromField = "startTime_changed";
ROUTE42.toNode = "_1";
ROUTE42.toField = "set_startTime";
ProtoBody17.children[2] = ROUTE42;

ProtoDeclare8.protoBody = ProtoBody17;

children = new MFNode();

children[0] = ProtoDeclare8;

}
