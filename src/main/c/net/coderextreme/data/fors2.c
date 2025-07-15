#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "Scripting";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

meta meta3 = createNode("meta");
meta3.name = "creator";
meta3.content = "John W Carlson";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "created";
meta4.content = "December 13 2015";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "modified";
meta5.content = "July 14 2025";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "title";
meta6.content = "fors2.x3d";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "identifier";
meta7.content = "https://coderextreme.net/X3DJSONLD/src/main/data/fors2.x3d";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "description";
meta8.content = "beginnings of a force directed graph in 3D";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "generator";
meta9.content = "Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit";
head1.meta[7] = meta9;

head = head1;

ProtoDeclare ProtoDeclare11 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="node" ><ProtoInterface><field name="position" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><Group><Transform DEF="transform"><IS><connect nodeField="translation" protoField="position"></connect>
</IS>
<Shape><!--comment before Sphere--><!--comment after Sphere--><!--comment after Appearance--><Sphere></Sphere>
<Appearance containerField="appearance"><!--comment before Material--><!--comment after Material--><Material containerField="material" diffuseColor="1 0 0"></Material>
</Appearance>
</Shape>
</Transform>
<PositionInterpolator DEF="NodePosition" key="0 1" keyValue="0 0 0 0 5 0"></PositionInterpolator>
<Script DEF="MoveBall"><field name="translation" accessType="inputOutput" type="SFVec3f" value="50 50 0"></field>
<field name="old" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="set_cycle" accessType="inputOnly" type="SFTime"></field>
<field name="keyValue" accessType="outputOnly" type="MFVec3f"></field>
<![CDATA[ecmascript:
			function set_cycle(value) {
				old = translation;
				translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);
				keyValue = new MFVec3f(old, translation);
			}]]></Script>
<TimeSensor DEF="nodeClock" cycleInterval="3" loop="true"></TimeSensor>
<ROUTE fromNode="nodeClock" fromField="cycleTime" toNode="MoveBall" toField="set_cycle"></ROUTE>
<ROUTE fromNode="nodeClock" fromField="fraction_changed" toNode="NodePosition" toField="set_fraction"></ROUTE>
<ROUTE fromNode="MoveBall" fromField="keyValue" toNode="NodePosition" toField="keyValue"></ROUTE>
<ROUTE fromNode="NodePosition" fromField="value_changed" toNode="transform" toField="set_translation"></ROUTE>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare11.name = "node";
ProtoInterface ProtoInterface12 = createNode("ProtoInterface");
field field13 = createNode("field");
field13.name = "position";
field13.accessType = "inputOutput";
field13.type = "SFVec3f";
field13.value = "0 0 0";
ProtoInterface12.field = new MFNode();

ProtoInterface12.field[0] = field13;

ProtoDeclare11.protoInterface = ProtoInterface12;

ProtoBody ProtoBody14 = createNode("ProtoBody");
Group Group15 = createNode("Group");
Transform Transform16 = createNode("Transform");
Transform16.DEF = "transform";
IS IS17 = createNode("IS");
connect connect18 = createNode("connect");
connect18.nodeField = "translation";
connect18.protoField = "position";
IS17.connect = new MFNode();

IS17.connect[0] = connect18;

Transform16.iS = IS17;

Shape Shape19 = createNode("Shape");
//comment before Sphere
//comment after Sphere
//comment after Appearance
Sphere Sphere20 = createNode("Sphere");
Shape19.geometry = Sphere20;

Appearance Appearance21 = createNode("Appearance");
//comment before Material
//comment after Material
Material Material22 = createNode("Material");
Material22.diffuseColor = new SFColor(new float[1,0,0]);
Appearance21.material = Material22;

Shape19.appearance = Appearance21;

Transform16.child = new undefined();

Transform16.child[0] = Shape19;

Group15.children = new MFNode();

Group15.children[0] = Transform16;

PositionInterpolator PositionInterpolator23 = createNode("PositionInterpolator");
PositionInterpolator23.DEF = "NodePosition";
PositionInterpolator23.key = new MFFloat(new float[0,1]);
PositionInterpolator23.keyValue = new MFVec3f(new float[0,0,0,0,5,0]);
Group15.children[1] = PositionInterpolator23;

Script Script24 = createNode("Script");
Script24.DEF = "MoveBall";
field field25 = createNode("field");
field25.name = "translation";
field25.accessType = "inputOutput";
field25.type = "SFVec3f";
field25.value = "50 50 0";
Script24.field = new MFNode();

Script24.field[0] = field25;

field field26 = createNode("field");
field26.name = "old";
field26.accessType = "inputOutput";
field26.type = "SFVec3f";
field26.value = "0 0 0";
Script24.field[1] = field26;

field field27 = createNode("field");
field27.name = "set_cycle";
field27.accessType = "inputOnly";
field27.type = "SFTime";
Script24.field[2] = field27;

field field28 = createNode("field");
field28.name = "keyValue";
field28.accessType = "outputOnly";
field28.type = "MFVec3f";
Script24.field[3] = field28;


Script24.setSourceCode(`ecmascript:\n"+
"			function set_cycle(value) {\n"+
"				old = translation;\n"+
"				translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"				keyValue = new MFVec3f(old, translation);\n"+
"			}`)
Group15.children[2] = Script24;

TimeSensor TimeSensor29 = createNode("TimeSensor");
TimeSensor29.DEF = "nodeClock";
TimeSensor29.cycleInterval = 3;
TimeSensor29.loop = True;
Group15.children[3] = TimeSensor29;

ROUTE ROUTE30 = createNode("ROUTE");
ROUTE30.fromNode = "nodeClock";
ROUTE30.fromField = "cycleTime";
ROUTE30.toNode = "MoveBall";
ROUTE30.toField = "set_cycle";
Group15.children[4] = ROUTE30;

ROUTE ROUTE31 = createNode("ROUTE");
ROUTE31.fromNode = "nodeClock";
ROUTE31.fromField = "fraction_changed";
ROUTE31.toNode = "NodePosition";
ROUTE31.toField = "set_fraction";
Group15.children[5] = ROUTE31;

ROUTE ROUTE32 = createNode("ROUTE");
ROUTE32.fromNode = "MoveBall";
ROUTE32.fromField = "keyValue";
ROUTE32.toNode = "NodePosition";
ROUTE32.toField = "keyValue";
Group15.children[6] = ROUTE32;

ROUTE ROUTE33 = createNode("ROUTE");
ROUTE33.fromNode = "NodePosition";
ROUTE33.fromField = "value_changed";
ROUTE33.toNode = "transform";
ROUTE33.toField = "set_translation";
Group15.children[7] = ROUTE33;

ProtoBody14.children = new MFNode();

ProtoBody14.children[0] = Group15;

ProtoDeclare11.protoBody = ProtoBody14;

children = new MFNode();

children[0] = ProtoDeclare11;

ProtoDeclare ProtoDeclare34 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="cyl" ><ProtoInterface><field name="positionA" accessType="inputOutput" type="SFVec3f"></field>
<field name="positionB" accessType="inputOutput" type="SFVec3f"></field>
</ProtoInterface>
<ProtoBody><Group><Shape><Extrusion DEF="extrusion" creaseAngle="0.785" crossSection="1 0 0.92 -0.38 0.71 -0.71 0.38 -0.92 0 -1 -0.38 -0.92 -0.71 -0.71 -0.92 -0.38 -1 0 -0.92 0.38 -0.71 0.71 -0.38 0.92 0 1 0.38 0.92 0.71 0.71 0.92 0.38 1 0" spine="0 -50 0 0 0 0 0 50 0"></Extrusion>
<Appearance containerField="appearance"><Material containerField="material" diffuseColor="0 1 0"></Material>
</Appearance>
</Shape>
<Script DEF="MoveCylinder"><field name="spine" accessType="inputOutput" type="MFVec3f" value="0 -50 0 0 0 0 0 50 0"></field>
<field name="endA" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="endB" accessType="inputOutput" type="SFVec3f" value="50 50 50"></field>
<IS><connect nodeField="endA" protoField="positionA"></connect>
<connect nodeField="endB" protoField="positionB"></connect>
</IS>
<![CDATA[ecmascript:
			function set_endA(value) {
				spine = new MFVec3f(value, spine[1]);
			}

			function set_endB(value) {
				spine = new MFVec3f(spine[0], value);
			}]]></Script>
<ROUTE fromNode="MoveCylinder" fromField="spine" toNode="extrusion" toField="set_spine"></ROUTE>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare34.name = "cyl";
ProtoInterface ProtoInterface35 = createNode("ProtoInterface");
field field36 = createNode("field");
field36.name = "positionA";
field36.accessType = "inputOutput";
field36.type = "SFVec3f";
ProtoInterface35.field = new MFNode();

ProtoInterface35.field[0] = field36;

field field37 = createNode("field");
field37.name = "positionB";
field37.accessType = "inputOutput";
field37.type = "SFVec3f";
ProtoInterface35.field[1] = field37;

ProtoDeclare34.protoInterface = ProtoInterface35;

ProtoBody ProtoBody38 = createNode("ProtoBody");
Group Group39 = createNode("Group");
Shape Shape40 = createNode("Shape");
Extrusion Extrusion41 = createNode("Extrusion");
Extrusion41.DEF = "extrusion";
Extrusion41.creaseAngle = 0.785;
Extrusion41.crossSection = new MFVec2f(new float[1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]);
Extrusion41.spine = new MFVec3f(new float[0,-50,0,0,0,0,0,50,0]);
Shape40.geometry = Extrusion41;

Appearance Appearance42 = createNode("Appearance");
Material Material43 = createNode("Material");
Material43.diffuseColor = new SFColor(new float[0,1,0]);
Appearance42.material = Material43;

Shape40.appearance = Appearance42;

Group39.children = new MFNode();

Group39.children[0] = Shape40;

Script Script44 = createNode("Script");
Script44.DEF = "MoveCylinder";
field field45 = createNode("field");
field45.name = "spine";
field45.accessType = "inputOutput";
field45.type = "MFVec3f";
field45.value = "0 -50 0 0 0 0 0 50 0";
Script44.field = new MFNode();

Script44.field[0] = field45;

field field46 = createNode("field");
field46.name = "endA";
field46.accessType = "inputOutput";
field46.type = "SFVec3f";
field46.value = "0 0 0";
Script44.field[1] = field46;

field field47 = createNode("field");
field47.name = "endB";
field47.accessType = "inputOutput";
field47.type = "SFVec3f";
field47.value = "50 50 50";
Script44.field[2] = field47;

IS IS48 = createNode("IS");
connect connect49 = createNode("connect");
connect49.nodeField = "endA";
connect49.protoField = "positionA";
IS48.connect = new MFNode();

IS48.connect[0] = connect49;

connect connect50 = createNode("connect");
connect50.nodeField = "endB";
connect50.protoField = "positionB";
IS48.connect[1] = connect50;

Script44.iS = IS48;


Script44.setSourceCode(`ecmascript:\n"+
"			function set_endA(value) {\n"+
"				spine = new MFVec3f(value, spine[1]);\n"+
"			}\n"+
"\n"+
"			function set_endB(value) {\n"+
"				spine = new MFVec3f(spine[0], value);\n"+
"			}`)
Group39.children[1] = Script44;

ROUTE ROUTE51 = createNode("ROUTE");
ROUTE51.fromNode = "MoveCylinder";
ROUTE51.fromField = "spine";
ROUTE51.toNode = "extrusion";
ROUTE51.toField = "set_spine";
Group39.children[2] = ROUTE51;

ProtoBody38.children = new MFNode();

ProtoBody38.children[0] = Group39;

ProtoDeclare34.protoBody = ProtoBody38;

children[1] = ProtoDeclare34;

Transform Transform52 = createNode("Transform");
Transform52.scale = new SFVec3f(new float[0.1,0.1,0.1]);
ProtoInstance ProtoInstance53 = createNode("ProtoInstance");
ProtoInstance53.name = "node";
ProtoInstance53.DEF = "nodeA";
fieldValue fieldValue54 = createNode("fieldValue");
fieldValue54.name = "position";
fieldValue54.value = "-50 -50 -50";
ProtoInstance53.fieldValue = new MFNode();

ProtoInstance53.fieldValue[0] = fieldValue54;

Transform52.children = new MFNode();

Transform52.children[0] = ProtoInstance53;

ProtoInstance ProtoInstance55 = createNode("ProtoInstance");
ProtoInstance55.name = "node";
ProtoInstance55.DEF = "nodeB";
fieldValue fieldValue56 = createNode("fieldValue");
fieldValue56.name = "position";
fieldValue56.value = "50 50 50";
ProtoInstance55.fieldValue = new MFNode();

ProtoInstance55.fieldValue[0] = fieldValue56;

Transform52.children[1] = ProtoInstance55;

ProtoInstance ProtoInstance57 = createNode("ProtoInstance");
ProtoInstance57.name = "cyl";
ProtoInstance57.DEF = "linkA";
Transform52.children[2] = ProtoInstance57;

children[2] = Transform52;

ROUTE ROUTE58 = createNode("ROUTE");
ROUTE58.fromNode = "nodeA";
ROUTE58.fromField = "position";
ROUTE58.toNode = "linkA";
ROUTE58.toField = "positionA";
children[3] = ROUTE58;

ROUTE ROUTE59 = createNode("ROUTE");
ROUTE59.fromNode = "nodeB";
ROUTE59.fromField = "position";
ROUTE59.toNode = "linkA";
ROUTE59.toField = "positionB";
children[4] = ROUTE59;

}
