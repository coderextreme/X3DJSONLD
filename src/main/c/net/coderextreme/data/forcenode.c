#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "creator";
meta2.content = "John W Carlson";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "created";
meta3.content = "December 13 2015";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "modified";
meta4.content = "July 14 2025";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "title";
meta5.content = "forcenode.x3d";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "identifier";
meta6.content = "https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "description";
meta7.content = "beginnings of a force directed graph in 3D";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "generator";
meta8.content = "Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit";
head1.meta[6] = meta8;

head = head1;

ProtoDeclare ProtoDeclare10 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="node" ><ProtoInterface><field name="position" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><Group><Transform DEF="transform"><IS><connect nodeField="translation" protoField="position"></connect>
</IS>
<Shape><Sphere></Sphere>
<Appearance containerField="appearance"><Material containerField="material" diffuseColor="1 0 0"></Material>
</Appearance>
</Shape>
<Transform translation="1 0 1"><Shape><Text string="&quot;Node&quot;"><FontStyle containerField="fontStyle" justify="&quot;MIDDLE&quot; &quot;MIDDLE&quot;" size="5"></FontStyle>
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
						// Browser.println(translation);
					}]]></Script>
<TimeSensor DEF="nodeClock" cycleInterval="3" loop="true"></TimeSensor>
<ROUTE fromNode="nodeClock" fromField="cycleTime" toNode="MoveBall" toField="set_cycle"></ROUTE>
<ROUTE fromNode="nodeClock" fromField="fraction_changed" toNode="NodePosition" toField="set_fraction"></ROUTE>
<ROUTE fromNode="MoveBall" fromField="keyValue" toNode="NodePosition" toField="keyValue"></ROUTE>
<ROUTE fromNode="NodePosition" fromField="value_changed" toNode="transform" toField="set_translation"></ROUTE>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare10.name = "node";
ProtoInterface ProtoInterface11 = createNode("ProtoInterface");
field field12 = createNode("field");
field12.name = "position";
field12.accessType = "inputOutput";
field12.type = "SFVec3f";
field12.value = "0 0 0";
ProtoInterface11.field = new MFNode();

ProtoInterface11.field[0] = field12;

ProtoDeclare10.protoInterface = ProtoInterface11;

ProtoBody ProtoBody13 = createNode("ProtoBody");
Group Group14 = createNode("Group");
Transform Transform15 = createNode("Transform");
Transform15.DEF = "transform";
IS IS16 = createNode("IS");
connect connect17 = createNode("connect");
connect17.nodeField = "translation";
connect17.protoField = "position";
IS16.connect = new MFNode();

IS16.connect[0] = connect17;

Transform15.iS = IS16;

Shape Shape18 = createNode("Shape");
Sphere Sphere19 = createNode("Sphere");
Shape18.geometry = Sphere19;

Appearance Appearance20 = createNode("Appearance");
Material Material21 = createNode("Material");
Material21.diffuseColor = new SFColor(new float[1,0,0]);
Appearance20.material = Material21;

Shape18.appearance = Appearance20;

Transform15.child = new undefined();

Transform15.child[0] = Shape18;

Transform Transform22 = createNode("Transform");
Transform22.translation = new SFVec3f(new float[1,0,1]);
Shape Shape23 = createNode("Shape");
Text Text24 = createNode("Text");
Text24.string = new MFString(new java.lang.String["Node"]);
FontStyle FontStyle25 = createNode("FontStyle");
FontStyle25.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle25.size = 5;
Text24.fontStyle = FontStyle25;

Shape23.geometry = Text24;

Appearance Appearance26 = createNode("Appearance");
Material Material27 = createNode("Material");
Material27.diffuseColor = new SFColor(new float[0,0,1]);
Appearance26.material = Material27;

Shape23.appearance = Appearance26;

Transform22.child = new undefined();

Transform22.child[0] = Shape23;

Transform15.children[1] = Transform22;

Group14.children = new MFNode();

Group14.children[0] = Transform15;

PositionInterpolator PositionInterpolator28 = createNode("PositionInterpolator");
PositionInterpolator28.DEF = "NodePosition";
PositionInterpolator28.key = new MFFloat(new float[0,1]);
PositionInterpolator28.keyValue = new MFVec3f(new float[0,0,0,0,5,0]);
Group14.children[1] = PositionInterpolator28;

Script Script29 = createNode("Script");
Script29.DEF = "MoveBall";
field field30 = createNode("field");
field30.name = "translation";
field30.accessType = "inputOutput";
field30.type = "SFVec3f";
field30.value = "50 50 0";
Script29.field = new MFNode();

Script29.field[0] = field30;

field field31 = createNode("field");
field31.name = "old";
field31.accessType = "inputOutput";
field31.type = "SFVec3f";
field31.value = "0 0 0";
Script29.field[1] = field31;

field field32 = createNode("field");
field32.name = "set_cycle";
field32.accessType = "inputOnly";
field32.type = "SFTime";
Script29.field[2] = field32;

field field33 = createNode("field");
field33.name = "keyValue";
field33.accessType = "outputOnly";
field33.type = "MFVec3f";
Script29.field[3] = field33;


Script29.setSourceCode(`ecmascript:\n"+
"					function set_cycle(value) {\n"+
"                                                old = translation;\n"+
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"			    			keyValue = new MFVec3f(old, translation);\n"+
"						// Browser.println(translation);\n"+
"					}`)
Group14.children[2] = Script29;

TimeSensor TimeSensor34 = createNode("TimeSensor");
TimeSensor34.DEF = "nodeClock";
TimeSensor34.cycleInterval = 3;
TimeSensor34.loop = True;
Group14.children[3] = TimeSensor34;

ROUTE ROUTE35 = createNode("ROUTE");
ROUTE35.fromNode = "nodeClock";
ROUTE35.fromField = "cycleTime";
ROUTE35.toNode = "MoveBall";
ROUTE35.toField = "set_cycle";
Group14.children[4] = ROUTE35;

ROUTE ROUTE36 = createNode("ROUTE");
ROUTE36.fromNode = "nodeClock";
ROUTE36.fromField = "fraction_changed";
ROUTE36.toNode = "NodePosition";
ROUTE36.toField = "set_fraction";
Group14.children[5] = ROUTE36;

ROUTE ROUTE37 = createNode("ROUTE");
ROUTE37.fromNode = "MoveBall";
ROUTE37.fromField = "keyValue";
ROUTE37.toNode = "NodePosition";
ROUTE37.toField = "keyValue";
Group14.children[6] = ROUTE37;

ROUTE ROUTE38 = createNode("ROUTE");
ROUTE38.fromNode = "NodePosition";
ROUTE38.fromField = "value_changed";
ROUTE38.toNode = "transform";
ROUTE38.toField = "set_translation";
Group14.children[7] = ROUTE38;

ProtoBody13.children = new MFNode();

ProtoBody13.children[0] = Group14;

ProtoDeclare10.protoBody = ProtoBody13;

children = new MFNode();

children[0] = ProtoDeclare10;

ProtoDeclare ProtoDeclare39 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="cyl" ><ProtoInterface><field name="set_positionA" accessType="inputOutput" type="SFVec3f"></field>
<field name="set_positionB" accessType="inputOutput" type="SFVec3f"></field>
</ProtoInterface>
<ProtoBody><Group><Shape><Extrusion DEF="extrusion" creaseAngle="0.785" crossSection="1 0 0.92 -0.38 0.71 -0.71 0.38 -0.92 0 -1 -0.38 -0.92 -0.71 -0.71 -0.92 -0.38 -1 0 -0.92 0.38 -0.71 0.71 -0.38 0.92 0 1 0.38 0.92 0.71 0.71 0.92 0.38 1 0" spine="0 -50 0 0 0 0 0 50 0"></Extrusion>
<Appearance containerField="appearance"><Material containerField="material" diffuseColor="0 1 0"></Material>
</Appearance>
</Shape>
<Script DEF="MoveCylinder"><field name="spine" accessType="inputOutput" type="MFVec3f" value="0 -50 0 0 0 0 0 50 0"></field>
<field name="endA" accessType="inputOutput" type="SFVec3f"></field>
<field name="endB" accessType="inputOutput" type="SFVec3f"></field>
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
ProtoDeclare39.name = "cyl";
ProtoInterface ProtoInterface40 = createNode("ProtoInterface");
field field41 = createNode("field");
field41.name = "set_positionA";
field41.accessType = "inputOutput";
field41.type = "SFVec3f";
ProtoInterface40.field = new MFNode();

ProtoInterface40.field[0] = field41;

field field42 = createNode("field");
field42.name = "set_positionB";
field42.accessType = "inputOutput";
field42.type = "SFVec3f";
ProtoInterface40.field[1] = field42;

ProtoDeclare39.protoInterface = ProtoInterface40;

ProtoBody ProtoBody43 = createNode("ProtoBody");
Group Group44 = createNode("Group");
Shape Shape45 = createNode("Shape");
Extrusion Extrusion46 = createNode("Extrusion");
Extrusion46.DEF = "extrusion";
Extrusion46.creaseAngle = 0.785;
Extrusion46.crossSection = new MFVec2f(new float[1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]);
Extrusion46.spine = new MFVec3f(new float[0,-50,0,0,0,0,0,50,0]);
Shape45.geometry = Extrusion46;

Appearance Appearance47 = createNode("Appearance");
Material Material48 = createNode("Material");
Material48.diffuseColor = new SFColor(new float[0,1,0]);
Appearance47.material = Material48;

Shape45.appearance = Appearance47;

Group44.children = new MFNode();

Group44.children[0] = Shape45;

Script Script49 = createNode("Script");
Script49.DEF = "MoveCylinder";
field field50 = createNode("field");
field50.name = "spine";
field50.accessType = "inputOutput";
field50.type = "MFVec3f";
field50.value = "0 -50 0 0 0 0 0 50 0";
Script49.field = new MFNode();

Script49.field[0] = field50;

field field51 = createNode("field");
field51.name = "endA";
field51.accessType = "inputOutput";
field51.type = "SFVec3f";
Script49.field[1] = field51;

field field52 = createNode("field");
field52.name = "endB";
field52.accessType = "inputOutput";
field52.type = "SFVec3f";
Script49.field[2] = field52;

IS IS53 = createNode("IS");
connect connect54 = createNode("connect");
connect54.nodeField = "endA";
connect54.protoField = "set_positionA";
IS53.connect = new MFNode();

IS53.connect[0] = connect54;

connect connect55 = createNode("connect");
connect55.nodeField = "endB";
connect55.protoField = "set_positionB";
IS53.connect[1] = connect55;

Script49.iS = IS53;


Script49.setSourceCode(`ecmascript:\n"+
"\n"+
"                function set_endA(value) {\n"+
"		    spine = new MFVec3f(value, spine[1]);\n"+
"                }\n"+
"\n"+
"                function set_endB(value) {\n"+
"		    spine = new MFVec3f(spine[0], value);\n"+
"                }`)
Group44.children[1] = Script49;

ROUTE ROUTE56 = createNode("ROUTE");
ROUTE56.fromNode = "MoveCylinder";
ROUTE56.fromField = "spine";
ROUTE56.toNode = "extrusion";
ROUTE56.toField = "set_spine";
Group44.children[2] = ROUTE56;

ProtoBody43.children = new MFNode();

ProtoBody43.children[0] = Group44;

ProtoDeclare39.protoBody = ProtoBody43;

children[1] = ProtoDeclare39;

Transform Transform57 = createNode("Transform");
Transform57.DEF = "HoldsContent";
Transform57.scale = new SFVec3f(new float[0.1,0.1,0.1]);
PlaneSensor PlaneSensor58 = createNode("PlaneSensor");
PlaneSensor58.DEF = "clickGenerator";
PlaneSensor58.minPosition = new SFVec2f(new float[-50,-50]);
PlaneSensor58.maxPosition = new SFVec2f(new float[50,50]);
PlaneSensor58.description = "click on background to add nodes, click on nodes to add links";
Transform57.children = new MFNode();

Transform57.children[0] = PlaneSensor58;

ProtoInstance ProtoInstance59 = createNode("ProtoInstance");
ProtoInstance59.name = "node";
ProtoInstance59.DEF = "nodeA";
fieldValue fieldValue60 = createNode("fieldValue");
fieldValue60.name = "position";
fieldValue60.value = "0 0 0";
ProtoInstance59.fieldValue = new MFNode();

ProtoInstance59.fieldValue[0] = fieldValue60;

Transform57.children[1] = ProtoInstance59;

ProtoInstance ProtoInstance61 = createNode("ProtoInstance");
ProtoInstance61.name = "node";
ProtoInstance61.DEF = "nodeB";
fieldValue fieldValue62 = createNode("fieldValue");
fieldValue62.name = "position";
fieldValue62.value = "50 50 50";
ProtoInstance61.fieldValue = new MFNode();

ProtoInstance61.fieldValue[0] = fieldValue62;

Transform57.children[2] = ProtoInstance61;

ProtoInstance ProtoInstance63 = createNode("ProtoInstance");
ProtoInstance63.name = "node";
ProtoInstance63.DEF = "nodeC";
fieldValue fieldValue64 = createNode("fieldValue");
fieldValue64.name = "position";
fieldValue64.value = "-50 -50 -50";
ProtoInstance63.fieldValue = new MFNode();

ProtoInstance63.fieldValue[0] = fieldValue64;

Transform57.children[3] = ProtoInstance63;

ProtoInstance ProtoInstance65 = createNode("ProtoInstance");
ProtoInstance65.name = "node";
ProtoInstance65.DEF = "nodeD";
fieldValue fieldValue66 = createNode("fieldValue");
fieldValue66.name = "position";
fieldValue66.value = "50 50 -50";
ProtoInstance65.fieldValue = new MFNode();

ProtoInstance65.fieldValue[0] = fieldValue66;

Transform57.children[4] = ProtoInstance65;

ProtoInstance ProtoInstance67 = createNode("ProtoInstance");
ProtoInstance67.name = "cyl";
ProtoInstance67.DEF = "linkA";
Transform57.children[5] = ProtoInstance67;

ProtoInstance ProtoInstance68 = createNode("ProtoInstance");
ProtoInstance68.name = "cyl";
ProtoInstance68.DEF = "linkB";
Transform57.children[6] = ProtoInstance68;

ProtoInstance ProtoInstance69 = createNode("ProtoInstance");
ProtoInstance69.name = "cyl";
ProtoInstance69.DEF = "linkC";
Transform57.children[7] = ProtoInstance69;

children[2] = Transform57;

Script Script70 = createNode("Script");
Script70.DEF = "clickHandler";
field field71 = createNode("field");
field71.name = "counter";
field71.accessType = "inputOutput";
field71.value = "0";
field71.type = "SFInt32";
Script70.field = new MFNode();

Script70.field[0] = field71;

field field72 = createNode("field");
field72.name = "node_changed";
field72.accessType = "outputOnly";
field72.type = "SFNode";
Script70.field[1] = field72;

field field73 = createNode("field");
field73.name = "add_node";
field73.accessType = "inputOnly";
field73.value = "false";
field73.type = "SFBool";
Script70.field[2] = field73;

//<field name=\"ModifiableNode\" type=\"SFNode\" accessType=\"inputOutput\"> <Transform USE=\"HoldsContent\"/> </field>

Script70.setSourceCode(`ecmascript:\n"+
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
children[3] = Script70;

ROUTE ROUTE74 = createNode("ROUTE");
ROUTE74.fromNode = "clickGenerator";
ROUTE74.fromField = "isActive";
ROUTE74.toNode = "clickHandler";
ROUTE74.toField = "add_node";
children[4] = ROUTE74;

ROUTE ROUTE75 = createNode("ROUTE");
ROUTE75.fromNode = "nodeA";
ROUTE75.fromField = "position";
ROUTE75.toNode = "linkA";
ROUTE75.toField = "set_positionA";
children[5] = ROUTE75;

ROUTE ROUTE76 = createNode("ROUTE");
ROUTE76.fromNode = "nodeB";
ROUTE76.fromField = "position";
ROUTE76.toNode = "linkA";
ROUTE76.toField = "set_positionB";
children[6] = ROUTE76;

ROUTE ROUTE77 = createNode("ROUTE");
ROUTE77.fromNode = "nodeA";
ROUTE77.fromField = "position";
ROUTE77.toNode = "linkB";
ROUTE77.toField = "set_positionA";
children[7] = ROUTE77;

ROUTE ROUTE78 = createNode("ROUTE");
ROUTE78.fromNode = "nodeC";
ROUTE78.fromField = "position";
ROUTE78.toNode = "linkB";
ROUTE78.toField = "set_positionB";
children[8] = ROUTE78;

ROUTE ROUTE79 = createNode("ROUTE");
ROUTE79.fromNode = "nodeA";
ROUTE79.fromField = "position";
ROUTE79.toNode = "linkC";
ROUTE79.toField = "set_positionA";
children[9] = ROUTE79;

ROUTE ROUTE80 = createNode("ROUTE");
ROUTE80.fromNode = "nodeD";
ROUTE80.fromField = "position";
ROUTE80.toNode = "linkC";
ROUTE80.toField = "set_positionB";
children[10] = ROUTE80;

}
