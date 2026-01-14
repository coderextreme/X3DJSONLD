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
meta6.content = "fors.x3d";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "identifier";
meta7.content = "https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d";
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
<Shape><Sphere></Sphere>
<Appearance containerField="appearance"><Material containerField="material" diffuseColor="1 0 0"></Material>
</Appearance>
</Shape>
<Transform translation="1 0 0"><Shape><Text string="&quot;Node&quot;"><FontStyle containerField="fontStyle" justify="&quot;MIDDLE&quot; &quot;MIDDLE&quot;" size="5"></FontStyle>
</Text>
<Appearance containerField="appearance"><Material containerField="material" diffuseColor="0 0 1"></Material>
</Appearance>
</Shape>
</Transform>
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
Sphere Sphere20 = createNode("Sphere");
Shape19.geometry = Sphere20;

Appearance Appearance21 = createNode("Appearance");
Material Material22 = createNode("Material");
Material22.diffuseColor = new SFColor(new float[1,0,0]);
Appearance21.material = Material22;

Shape19.appearance = Appearance21;

Transform16.child = new undefined();

Transform16.child[0] = Shape19;

Transform Transform23 = createNode("Transform");
Transform23.translation = new SFVec3f(new float[1,0,0]);
Shape Shape24 = createNode("Shape");
Text Text25 = createNode("Text");
Text25.string = new MFString(new java.lang.String["Node"]);
FontStyle FontStyle26 = createNode("FontStyle");
FontStyle26.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle26.size = 5;
Text25.fontStyle = FontStyle26;

Shape24.geometry = Text25;

Appearance Appearance27 = createNode("Appearance");
Material Material28 = createNode("Material");
Material28.diffuseColor = new SFColor(new float[0,0,1]);
Appearance27.material = Material28;

Shape24.appearance = Appearance27;

Transform23.child = new undefined();

Transform23.child[0] = Shape24;

Transform16.children[1] = Transform23;

Group15.children = new MFNode();

Group15.children[0] = Transform16;

PositionInterpolator PositionInterpolator29 = createNode("PositionInterpolator");
PositionInterpolator29.DEF = "NodePosition";
PositionInterpolator29.key = new MFFloat(new float[0,1]);
PositionInterpolator29.keyValue = new MFVec3f(new float[0,0,0,0,5,0]);
Group15.children[1] = PositionInterpolator29;

Script Script30 = createNode("Script");
Script30.DEF = "MoveBall";
field field31 = createNode("field");
field31.name = "translation";
field31.accessType = "inputOutput";
field31.type = "SFVec3f";
field31.value = "50 50 0";
Script30.field = new MFNode();

Script30.field[0] = field31;

field field32 = createNode("field");
field32.name = "old";
field32.accessType = "inputOutput";
field32.type = "SFVec3f";
field32.value = "0 0 0";
Script30.field[1] = field32;

field field33 = createNode("field");
field33.name = "set_cycle";
field33.accessType = "inputOnly";
field33.type = "SFTime";
Script30.field[2] = field33;

field field34 = createNode("field");
field34.name = "keyValue";
field34.accessType = "outputOnly";
field34.type = "MFVec3f";
Script30.field[3] = field34;


Script30.setSourceCode(`ecmascript:\n"+
"			function set_cycle(value) {\n"+
"				old = translation;\n"+
"				translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"				keyValue = new MFVec3f(old, translation);\n"+
"			}`)
Group15.children[2] = Script30;

TimeSensor TimeSensor35 = createNode("TimeSensor");
TimeSensor35.DEF = "nodeClock";
TimeSensor35.cycleInterval = 3;
TimeSensor35.loop = True;
Group15.children[3] = TimeSensor35;

ROUTE ROUTE36 = createNode("ROUTE");
ROUTE36.fromNode = "nodeClock";
ROUTE36.fromField = "cycleTime";
ROUTE36.toNode = "MoveBall";
ROUTE36.toField = "set_cycle";
Group15.children[4] = ROUTE36;

ROUTE ROUTE37 = createNode("ROUTE");
ROUTE37.fromNode = "nodeClock";
ROUTE37.fromField = "fraction_changed";
ROUTE37.toNode = "NodePosition";
ROUTE37.toField = "set_fraction";
Group15.children[5] = ROUTE37;

ROUTE ROUTE38 = createNode("ROUTE");
ROUTE38.fromNode = "MoveBall";
ROUTE38.fromField = "keyValue";
ROUTE38.toNode = "NodePosition";
ROUTE38.toField = "keyValue";
Group15.children[6] = ROUTE38;

ROUTE ROUTE39 = createNode("ROUTE");
ROUTE39.fromNode = "NodePosition";
ROUTE39.fromField = "value_changed";
ROUTE39.toNode = "transform";
ROUTE39.toField = "set_translation";
Group15.children[7] = ROUTE39;

ProtoBody14.children = new MFNode();

ProtoBody14.children[0] = Group15;

ProtoDeclare11.protoBody = ProtoBody14;

children = new MFNode();

children[0] = ProtoDeclare11;

ProtoDeclare ProtoDeclare40 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="cyl" ><ProtoInterface><field name="set_positionA" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="set_positionB" accessType="inputOutput" type="SFVec3f" value="50 50 50"></field>
</ProtoInterface>
<ProtoBody><Group><Shape><Extrusion DEF="extrusion" creaseAngle="0.785" crossSection="1 0 0.92 -0.38 0.71 -0.71 0.38 -0.92 0 -1 -0.38 -0.92 -0.71 -0.71 -0.92 -0.38 -1 0 -0.92 0.38 -0.71 0.71 -0.38 0.92 0 1 0.38 0.92 0.71 0.71 0.92 0.38 1 0" spine="0 -50 0 0 0 0 0 50 0"></Extrusion>
<Appearance containerField="appearance"><Material containerField="material" diffuseColor="0 1 0"></Material>
</Appearance>
</Shape>
<Script DEF="MoveCylinder"><field name="spine" accessType="inputOutput" type="MFVec3f" value="0 -50 0 0 0 0 0 50 0"></field>
<field name="endA" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="endB" accessType="inputOutput" type="SFVec3f" value="50 50 50"></field>
<IS><connect nodeField="endA" protoField="set_positionA"></connect>
<connect nodeField="endB" protoField="set_positionB"></connect>
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
ProtoDeclare40.name = "cyl";
ProtoInterface ProtoInterface41 = createNode("ProtoInterface");
field field42 = createNode("field");
field42.name = "set_positionA";
field42.accessType = "inputOutput";
field42.type = "SFVec3f";
field42.value = "0 0 0";
ProtoInterface41.field = new MFNode();

ProtoInterface41.field[0] = field42;

field field43 = createNode("field");
field43.name = "set_positionB";
field43.accessType = "inputOutput";
field43.type = "SFVec3f";
field43.value = "50 50 50";
ProtoInterface41.field[1] = field43;

ProtoDeclare40.protoInterface = ProtoInterface41;

ProtoBody ProtoBody44 = createNode("ProtoBody");
Group Group45 = createNode("Group");
Shape Shape46 = createNode("Shape");
Extrusion Extrusion47 = createNode("Extrusion");
Extrusion47.DEF = "extrusion";
Extrusion47.creaseAngle = 0.785;
Extrusion47.crossSection = new MFVec2f(new float[1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]);
Extrusion47.spine = new MFVec3f(new float[0,-50,0,0,0,0,0,50,0]);
Shape46.geometry = Extrusion47;

Appearance Appearance48 = createNode("Appearance");
Material Material49 = createNode("Material");
Material49.diffuseColor = new SFColor(new float[0,1,0]);
Appearance48.material = Material49;

Shape46.appearance = Appearance48;

Group45.children = new MFNode();

Group45.children[0] = Shape46;

Script Script50 = createNode("Script");
Script50.DEF = "MoveCylinder";
field field51 = createNode("field");
field51.name = "spine";
field51.accessType = "inputOutput";
field51.type = "MFVec3f";
field51.value = "0 -50 0 0 0 0 0 50 0";
Script50.field = new MFNode();

Script50.field[0] = field51;

field field52 = createNode("field");
field52.name = "endA";
field52.accessType = "inputOutput";
field52.type = "SFVec3f";
field52.value = "0 0 0";
Script50.field[1] = field52;

field field53 = createNode("field");
field53.name = "endB";
field53.accessType = "inputOutput";
field53.type = "SFVec3f";
field53.value = "50 50 50";
Script50.field[2] = field53;

IS IS54 = createNode("IS");
connect connect55 = createNode("connect");
connect55.nodeField = "endA";
connect55.protoField = "set_positionA";
IS54.connect = new MFNode();

IS54.connect[0] = connect55;

connect connect56 = createNode("connect");
connect56.nodeField = "endB";
connect56.protoField = "set_positionB";
IS54.connect[1] = connect56;

Script50.iS = IS54;


Script50.setSourceCode(`ecmascript:\n"+
"			function set_endA(value) {\n"+
"				spine = new MFVec3f(value, spine[1]);\n"+
"			}\n"+
"\n"+
"			function set_endB(value) {\n"+
"				spine = new MFVec3f(spine[0], value);\n"+
"			}`)
Group45.children[1] = Script50;

ROUTE ROUTE57 = createNode("ROUTE");
ROUTE57.fromNode = "MoveCylinder";
ROUTE57.fromField = "spine";
ROUTE57.toNode = "extrusion";
ROUTE57.toField = "set_spine";
Group45.children[2] = ROUTE57;

ProtoBody44.children = new MFNode();

ProtoBody44.children[0] = Group45;

ProtoDeclare40.protoBody = ProtoBody44;

children[1] = ProtoDeclare40;

Transform Transform58 = createNode("Transform");
Transform58.DEF = "HoldsContent";
Transform58.scale = new SFVec3f(new float[0.1,0.1,0.1]);
PlaneSensor PlaneSensor59 = createNode("PlaneSensor");
PlaneSensor59.DEF = "clickGenerator";
PlaneSensor59.minPosition = new SFVec2f(new float[-50,-50]);
PlaneSensor59.maxPosition = new SFVec2f(new float[50,50]);
PlaneSensor59.description = "click on background to add nodes, click on nodes to add links";
Transform58.children = new MFNode();

Transform58.children[0] = PlaneSensor59;

ProtoInstance ProtoInstance60 = createNode("ProtoInstance");
ProtoInstance60.name = "node";
ProtoInstance60.DEF = "nodeA";
fieldValue fieldValue61 = createNode("fieldValue");
fieldValue61.name = "position";
fieldValue61.value = "0 0 0";
ProtoInstance60.fieldValue = new MFNode();

ProtoInstance60.fieldValue[0] = fieldValue61;

Transform58.children[1] = ProtoInstance60;

ProtoInstance ProtoInstance62 = createNode("ProtoInstance");
ProtoInstance62.name = "node";
ProtoInstance62.DEF = "nodeB";
fieldValue fieldValue63 = createNode("fieldValue");
fieldValue63.name = "position";
fieldValue63.value = "50 50 50";
ProtoInstance62.fieldValue = new MFNode();

ProtoInstance62.fieldValue[0] = fieldValue63;

Transform58.children[2] = ProtoInstance62;

ProtoInstance ProtoInstance64 = createNode("ProtoInstance");
ProtoInstance64.name = "cyl";
ProtoInstance64.DEF = "linkA";
Transform58.children[3] = ProtoInstance64;

children[2] = Transform58;

Script Script65 = createNode("Script");
Script65.DEF = "clickHandler";
field field66 = createNode("field");
field66.name = "counter";
field66.accessType = "inputOutput";
field66.value = "0";
field66.type = "SFInt32";
Script65.field = new MFNode();

Script65.field[0] = field66;

field field67 = createNode("field");
field67.name = "add_node";
field67.accessType = "inputOnly";
field67.value = "false";
field67.type = "SFBool";
Script65.field[1] = field67;

//<field accessType=\"outputOnly\" name=\"node_changed\" type=\"SFNode\"/> <field name=\"ModifiableNode\" type=\"SFNode\" accessType=\"inputOutput\"> <Transform USE=\"HoldsContent\"/> </field>

Script65.setSourceCode(`ecmascript:\n"+
"	function add_node(value) {\n"+
"                // Browser.print('hey ', counter);\n"+
"                counter = counter++;\n"+
"		Browser.appendTo(Browser.getDocument().querySelector(\"field [name=ModifiableNode]\"),\n"+
"			{ \"ProtoInstance\":\n"+
"				{ \"@name\":\"node\",\n"+
"				  \"@DEF\":\"node'+counter+'\",\n"+
"				  \"fieldValue\": [\n"+
"					{\n"+
"						 \"@name\":\"position\",\n"+
"						 \"@value\":[0.0,0.0,0.0]\n"+
"					}\n"+
"				  ]\n"+
"				}\n"+
"			});\n"+
"\n"+
"        }`)
children[3] = Script65;

ROUTE ROUTE68 = createNode("ROUTE");
ROUTE68.fromNode = "clickGenerator";
ROUTE68.fromField = "isActive";
ROUTE68.toNode = "clickHandler";
ROUTE68.toField = "add_node";
children[4] = ROUTE68;

ROUTE ROUTE69 = createNode("ROUTE");
ROUTE69.fromNode = "nodeA";
ROUTE69.fromField = "position";
ROUTE69.toNode = "linkA";
ROUTE69.toField = "set_positionA";
children[5] = ROUTE69;

ROUTE ROUTE70 = createNode("ROUTE");
ROUTE70.fromNode = "nodeB";
ROUTE70.fromField = "position";
ROUTE70.toNode = "linkA";
ROUTE70.toField = "set_positionB";
children[6] = ROUTE70;

}
