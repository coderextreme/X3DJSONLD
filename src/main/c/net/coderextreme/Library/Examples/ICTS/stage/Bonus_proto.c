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
meta3.content = "Thu, 23 Apr 2015 06:06:57 GMT";
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
meta6.content = "Thu, 23 Apr 2015 06:06:57 GMT";
head1.meta[4] = meta6;

head = head1;

ProtoDeclare ProtoDeclare8 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Bonus" ><ProtoInterface><field name="startTime" accessType="inputOutput" type="SFTime"></field>
<field name="stopTime" accessType="inputOutput" type="SFTime"></field>
<field name="axisOfRotation" accessType="inputOutput" type="SFVec3f" value="0 1 0"></field>
<field name="range" accessType="initializeOnly" type="MFFloat" value="0 1"></field>
<field name="level" accessType="inputOutput" type="MFNode"><Transform DEF="_1"></Transform>
<Transform DEF="_2"></Transform>
</field>
</ProtoInterface>
<ProtoBody><ProtoDeclare name="Data"><ProtoInterface><field name="startTime" accessType="inputOutput" type="SFTime"></field>
<field name="stopTime" accessType="inputOutput" type="SFTime"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>
<Transform><Switch DEF="_3" whichChoice="0"><Transform></Transform>
<Billboard><IS><connect nodeField="axisOfRotation" protoField="axisOfRotation"></connect>
</IS>
<Collision enabled="false"><LOD><IS><connect nodeField="range" protoField="range"></connect>
<connect nodeField="children" protoField="level"></connect>
</IS>
</LOD>
</Collision>
</Billboard>
</Switch>
</Transform>
<Script DEF="_bonus_1" directOutput="true"><field name="whichChoice_changed" accessType="outputOnly" type="SFInt32"></field>
<field name="set_startTime" accessType="inputOnly" type="SFTime"></field>
<field name="set_stopTime" accessType="inputOnly" type="SFTime"></field>
<field name="data" accessType="initializeOnly" type="SFNode"><ProtoInstance name="Data" DEF="_4"><IS><connect nodeField="startTime" protoField="startTime"></connect>
<connect nodeField="stopTime" protoField="stopTime"></connect>
</IS>
</ProtoInstance>
</field>
<![CDATA[vrmlscript:
function initialize()
{
	whichChoice_changed = data.startTime ? 1 : 0;
}

function set_startTime(value, time)
{
	whichChoice_changed = 1;
}

function set_stopTime(value, time)
{
	whichChoice_changed = 0;
}]]></Script>
<ROUTE fromNode="_bonus_1" fromField="whichChoice_changed" toNode="_3" toField="set_whichChoice"></ROUTE>
<ROUTE fromNode="_4" fromField="startTime_changed" toNode="_bonus_1" toField="set_startTime"></ROUTE>
<ROUTE fromNode="_4" fromField="stopTime_changed" toNode="_bonus_1" toField="set_stopTime"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "Bonus";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "startTime";
field10.accessType = "inputOutput";
field10.type = "SFTime";
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

field field11 = createNode("field");
field11.name = "stopTime";
field11.accessType = "inputOutput";
field11.type = "SFTime";
ProtoInterface9.field[1] = field11;

field field12 = createNode("field");
field12.name = "axisOfRotation";
field12.accessType = "inputOutput";
field12.type = "SFVec3f";
field12.value = "0 1 0";
ProtoInterface9.field[2] = field12;

field field13 = createNode("field");
field13.name = "range";
field13.accessType = "initializeOnly";
field13.type = "MFFloat";
field13.value = "0 1";
ProtoInterface9.field[3] = field13;

field field14 = createNode("field");
field14.name = "level";
field14.accessType = "inputOutput";
field14.type = "MFNode";
Transform Transform15 = createNode("Transform");
Transform15.DEF = "_1";
field14.children = new MFNode();

field14.children[0] = Transform15;

Transform Transform16 = createNode("Transform");
Transform16.DEF = "_2";
field14.children[1] = Transform16;

ProtoInterface9.field[4] = field14;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody17 = createNode("ProtoBody");
ProtoDeclare ProtoDeclare18 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Data" ><ProtoInterface><field name="startTime" accessType="inputOutput" type="SFTime"></field>
<field name="stopTime" accessType="inputOutput" type="SFTime"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare18.name = "Data";
ProtoInterface ProtoInterface19 = createNode("ProtoInterface");
field field20 = createNode("field");
field20.name = "startTime";
field20.accessType = "inputOutput";
field20.type = "SFTime";
ProtoInterface19.field = new MFNode();

ProtoInterface19.field[0] = field20;

field field21 = createNode("field");
field21.name = "stopTime";
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

Transform Transform24 = createNode("Transform");
Switch Switch25 = createNode("Switch");
Switch25.DEF = "_3";
Switch25.whichChoice = 0;
Transform Transform26 = createNode("Transform");
Switch25.children = new MFNode();

Switch25.children[0] = Transform26;

Billboard Billboard27 = createNode("Billboard");
IS IS28 = createNode("IS");
connect connect29 = createNode("connect");
connect29.nodeField = "axisOfRotation";
connect29.protoField = "axisOfRotation";
IS28.connect = new MFNode();

IS28.connect[0] = connect29;

Billboard27.iS = IS28;

Collision Collision30 = createNode("Collision");
Collision30.enabled = False;
LOD LOD31 = createNode("LOD");
IS IS32 = createNode("IS");
connect connect33 = createNode("connect");
connect33.nodeField = "range";
connect33.protoField = "range";
IS32.connect = new MFNode();

IS32.connect[0] = connect33;

connect connect34 = createNode("connect");
connect34.nodeField = "children";
connect34.protoField = "level";
IS32.connect[1] = connect34;

LOD31.iS = IS32;

Collision30.proxy = LOD31;

Billboard27.children = new MFNode();

Billboard27.children[0] = Collision30;

Switch25.children[1] = Billboard27;

Transform24.children = new MFNode();

Transform24.children[0] = Switch25;

ProtoBody17.children[1] = Transform24;

Script Script35 = createNode("Script");
Script35.DEF = "_bonus_1";
Script35.directOutput = True;
field field36 = createNode("field");
field36.name = "whichChoice_changed";
field36.accessType = "outputOnly";
field36.type = "SFInt32";
Script35.field = new MFNode();

Script35.field[0] = field36;

field field37 = createNode("field");
field37.name = "set_startTime";
field37.accessType = "inputOnly";
field37.type = "SFTime";
Script35.field[1] = field37;

field field38 = createNode("field");
field38.name = "set_stopTime";
field38.accessType = "inputOnly";
field38.type = "SFTime";
Script35.field[2] = field38;

field field39 = createNode("field");
field39.name = "data";
field39.accessType = "initializeOnly";
field39.type = "SFNode";
ProtoInstance ProtoInstance40 = createNode("ProtoInstance");
ProtoInstance40.name = "Data";
ProtoInstance40.DEF = "_4";
IS IS41 = createNode("IS");
connect connect42 = createNode("connect");
connect42.nodeField = "startTime";
connect42.protoField = "startTime";
IS41.connect = new MFNode();

IS41.connect[0] = connect42;

connect connect43 = createNode("connect");
connect43.nodeField = "stopTime";
connect43.protoField = "stopTime";
IS41.connect[1] = connect43;

ProtoInstance40.iS = IS41;

field39.children = new MFNode();

field39.children[0] = ProtoInstance40;

Script35.field[3] = field39;


Script35.setSourceCode(`vrmlscript:\n"+
"function initialize()\n"+
"{\n"+
"	whichChoice_changed = data.startTime ? 1 : 0;\n"+
"}\n"+
"\n"+
"function set_startTime(value, time)\n"+
"{\n"+
"	whichChoice_changed = 1;\n"+
"}\n"+
"\n"+
"function set_stopTime(value, time)\n"+
"{\n"+
"	whichChoice_changed = 0;\n"+
"}`)
ProtoBody17.children[2] = Script35;

ROUTE ROUTE44 = createNode("ROUTE");
ROUTE44.fromNode = "_bonus_1";
ROUTE44.fromField = "whichChoice_changed";
ROUTE44.toNode = "_3";
ROUTE44.toField = "set_whichChoice";
ProtoBody17.children[3] = ROUTE44;

ROUTE ROUTE45 = createNode("ROUTE");
ROUTE45.fromNode = "_4";
ROUTE45.fromField = "startTime_changed";
ROUTE45.toNode = "_bonus_1";
ROUTE45.toField = "set_startTime";
ProtoBody17.children[4] = ROUTE45;

ROUTE ROUTE46 = createNode("ROUTE");
ROUTE46.fromNode = "_4";
ROUTE46.fromField = "stopTime_changed";
ROUTE46.toNode = "_bonus_1";
ROUTE46.toField = "set_stopTime";
ProtoBody17.children[5] = ROUTE46;

ProtoDeclare8.protoBody = ProtoBody17;

children = new MFNode();

children[0] = ProtoDeclare8;

}
