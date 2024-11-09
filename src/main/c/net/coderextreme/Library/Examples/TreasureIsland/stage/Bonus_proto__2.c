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
meta3.content = "Thu, 05 Nov 2015 03:28:55 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V1.2.0, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Thu, 05 Nov 2015 03:28:55 GMT";
head1.meta[4] = meta6;

head = head1;

ProtoDeclare ProtoDeclare8 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Bonus" ><ProtoInterface><field name="startTime" accessType="inputOnly" type="SFTime"></field>
<field name="enterTime" accessType="outputOnly" type="SFTime"></field>
<field name="range" accessType="initializeOnly" type="MFFloat" value="0.5 40 120"></field>
<field name="size" accessType="inputOutput" type="SFVec3f" value="0.6 0.6 0.6"></field>
<field name="level2" accessType="inputOutput" type="MFNode"><Transform DEF="_1"></Transform>
</field>
<field name="level1" accessType="inputOutput" type="MFNode"><Transform DEF="_2"></Transform>
</field>
<field name="level0" accessType="inputOutput" type="MFNode"><Transform DEF="_3"></Transform>
</field>
</ProtoInterface>
<ProtoBody><Transform><Script DEF="_bonus"><field name="whichChoice_changed" accessType="outputOnly" type="SFInt32"></field>
<field name="startTime" accessType="inputOnly" type="SFTime"></field>
<field name="stopTime" accessType="inputOnly" type="SFTime"></field>
<IS><connect nodeField="startTime" protoField="startTime"></connect>
</IS>
<![CDATA[vrmlscript:
function startTime(value, time)
{
	whichChoice_changed = 1;
}

function stopTime(value, time)
{
	whichChoice_changed = 0;
}]]></Script>
<Switch DEF="_4" whichChoice="1"><Transform></Transform>
<Collision enabled="false"><LOD><IS><connect nodeField="range" protoField="range"></connect>
</IS>
<Transform DEF="level3"><VisibilitySensor DEF="_5"><IS><connect nodeField="size" protoField="size"></connect>
<connect nodeField="enterTime" protoField="enterTime"></connect>
</IS>
</VisibilitySensor>
</Transform>
<Transform DEF="level2"><IS><connect nodeField="children" protoField="level2"></connect>
</IS>
</Transform>
<Transform DEF="level1"><IS><connect nodeField="children" protoField="level1"></connect>
</IS>
</Transform>
<Transform DEF="level0"><IS><connect nodeField="children" protoField="level0"></connect>
</IS>
</Transform>
</LOD>
</Collision>
</Switch>
</Transform>
<ROUTE fromNode="_5" fromField="enterTime" toNode="_bonus" toField="stopTime"></ROUTE>
<ROUTE fromNode="_bonus" fromField="whichChoice_changed" toNode="_4" toField="set_whichChoice"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "Bonus";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "startTime";
field10.accessType = "inputOnly";
field10.type = "SFTime";
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

field field11 = createNode("field");
field11.name = "enterTime";
field11.accessType = "outputOnly";
field11.type = "SFTime";
ProtoInterface9.field[1] = field11;

field field12 = createNode("field");
field12.name = "range";
field12.accessType = "initializeOnly";
field12.type = "MFFloat";
field12.value = "0.5 40 120";
ProtoInterface9.field[2] = field12;

field field13 = createNode("field");
field13.name = "size";
field13.accessType = "inputOutput";
field13.type = "SFVec3f";
field13.value = "0.6 0.6 0.6";
ProtoInterface9.field[3] = field13;

field field14 = createNode("field");
field14.name = "level2";
field14.accessType = "inputOutput";
field14.type = "MFNode";
Transform Transform15 = createNode("Transform");
Transform15.DEF = "_1";
field14.children = new MFNode();

field14.children[0] = Transform15;

ProtoInterface9.field[4] = field14;

field field16 = createNode("field");
field16.name = "level1";
field16.accessType = "inputOutput";
field16.type = "MFNode";
Transform Transform17 = createNode("Transform");
Transform17.DEF = "_2";
field16.children = new MFNode();

field16.children[0] = Transform17;

ProtoInterface9.field[5] = field16;

field field18 = createNode("field");
field18.name = "level0";
field18.accessType = "inputOutput";
field18.type = "MFNode";
Transform Transform19 = createNode("Transform");
Transform19.DEF = "_3";
field18.children = new MFNode();

field18.children[0] = Transform19;

ProtoInterface9.field[6] = field18;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody20 = createNode("ProtoBody");
Transform Transform21 = createNode("Transform");
Script Script22 = createNode("Script");
Script22.DEF = "_bonus";
field field23 = createNode("field");
field23.name = "whichChoice_changed";
field23.accessType = "outputOnly";
field23.type = "SFInt32";
Script22.field = new MFNode();

Script22.field[0] = field23;

field field24 = createNode("field");
field24.name = "startTime";
field24.accessType = "inputOnly";
field24.type = "SFTime";
Script22.field[1] = field24;

field field25 = createNode("field");
field25.name = "stopTime";
field25.accessType = "inputOnly";
field25.type = "SFTime";
Script22.field[2] = field25;

IS IS26 = createNode("IS");
connect connect27 = createNode("connect");
connect27.nodeField = "startTime";
connect27.protoField = "startTime";
IS26.connect = new MFNode();

IS26.connect[0] = connect27;

Script22.iS = IS26;


Script22.setSourceCode(`vrmlscript:\n"+
"function startTime(value, time)\n"+
"{\n"+
"	whichChoice_changed = 1;\n"+
"}\n"+
"\n"+
"function stopTime(value, time)\n"+
"{\n"+
"	whichChoice_changed = 0;\n"+
"}`)
Transform21.children = new MFNode();

Transform21.children[0] = Script22;

Switch Switch28 = createNode("Switch");
Switch28.DEF = "_4";
Switch28.whichChoice = 1;
Transform Transform29 = createNode("Transform");
Switch28.children = new MFNode();

Switch28.children[0] = Transform29;

Collision Collision30 = createNode("Collision");
Collision30.enabled = False;
LOD LOD31 = createNode("LOD");
IS IS32 = createNode("IS");
connect connect33 = createNode("connect");
connect33.nodeField = "range";
connect33.protoField = "range";
IS32.connect = new MFNode();

IS32.connect[0] = connect33;

LOD31.iS = IS32;

Transform Transform34 = createNode("Transform");
Transform34.DEF = "level3";
VisibilitySensor VisibilitySensor35 = createNode("VisibilitySensor");
VisibilitySensor35.DEF = "_5";
IS IS36 = createNode("IS");
connect connect37 = createNode("connect");
connect37.nodeField = "size";
connect37.protoField = "size";
IS36.connect = new MFNode();

IS36.connect[0] = connect37;

connect connect38 = createNode("connect");
connect38.nodeField = "enterTime";
connect38.protoField = "enterTime";
IS36.connect[1] = connect38;

VisibilitySensor35.iS = IS36;

Transform34.children = new MFNode();

Transform34.children[0] = VisibilitySensor35;

LOD31.children = new MFNode();

LOD31.children[0] = Transform34;

Transform Transform39 = createNode("Transform");
Transform39.DEF = "level2";
IS IS40 = createNode("IS");
connect connect41 = createNode("connect");
connect41.nodeField = "children";
connect41.protoField = "level2";
IS40.connect = new MFNode();

IS40.connect[0] = connect41;

Transform39.iS = IS40;

LOD31.children[1] = Transform39;

Transform Transform42 = createNode("Transform");
Transform42.DEF = "level1";
IS IS43 = createNode("IS");
connect connect44 = createNode("connect");
connect44.nodeField = "children";
connect44.protoField = "level1";
IS43.connect = new MFNode();

IS43.connect[0] = connect44;

Transform42.iS = IS43;

LOD31.children[2] = Transform42;

Transform Transform45 = createNode("Transform");
Transform45.DEF = "level0";
IS IS46 = createNode("IS");
connect connect47 = createNode("connect");
connect47.nodeField = "children";
connect47.protoField = "level0";
IS46.connect = new MFNode();

IS46.connect[0] = connect47;

Transform45.iS = IS46;

LOD31.children[3] = Transform45;

Collision30.proxy = LOD31;

Switch28.children[1] = Collision30;

Transform21.children[1] = Switch28;

ProtoBody20.children = new MFNode();

ProtoBody20.children[0] = Transform21;

ROUTE ROUTE48 = createNode("ROUTE");
ROUTE48.fromNode = "_5";
ROUTE48.fromField = "enterTime";
ROUTE48.toNode = "_bonus";
ROUTE48.toField = "stopTime";
ProtoBody20.children[1] = ROUTE48;

ROUTE ROUTE49 = createNode("ROUTE");
ROUTE49.fromNode = "_bonus";
ROUTE49.fromField = "whichChoice_changed";
ROUTE49.toNode = "_4";
ROUTE49.toField = "set_whichChoice";
ProtoBody20.children[2] = ROUTE49;

ProtoDeclare8.protoBody = ProtoBody20;

children = new MFNode();

children[0] = ProtoDeclare8;

WorldInfo WorldInfo50 = createNode("WorldInfo");
WorldInfo50.info = new MFString(new java.lang.String[", ","Created in Titania, ","Packaged by CosmoPackagePackaged by CosmoPackage"]);
children[1] = WorldInfo50;

}
