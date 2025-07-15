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
meta6.content = "force.x3d";
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

meta meta10 = createNode("meta");
meta10.name = "generator";
meta10.content = "x3d-tidy V1.0.175, https://www.npmjs.com/package/x3d-tidy";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "modified";
meta11.content = "Sat, 9 Nov 2024 19:29:39 GMT";
head1.meta[9] = meta11;

head = head1;

ProtoDeclare ProtoDeclare13 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="node" ><ProtoInterface><field name="position" accessType="inputOutput" type="SFVec3f"></field>
</ProtoInterface>
<ProtoBody><Group><Transform DEF="transform"><IS><connect nodeField="translation" protoField="position"></connect>
</IS>
<Shape><Sphere></Sphere>
<Appearance containerField="appearance"><Material containerField="material" diffuseColor="1 0 0"></Material>
</Appearance>
</Shape>
<Transform translation="1 0 0"><Shape><Appearance containerField="appearance"><Material containerField="material" diffuseColor="0 0 1"></Material>
</Appearance>
<Text string="&quot;Node&quot;"><FontStyle containerField="fontStyle" size="5" justify="&quot;MIDDLE&quot; &quot;MIDDLE&quot;"></FontStyle>
</Text>
</Shape>
</Transform>
</Transform>
<PositionInterpolator DEF="NodePosition" key="0 1" keyValue="0 0 0 0 5 0"></PositionInterpolator>
<Script DEF="MoveBall"><field name="translation" accessType="inputOutput" type="SFVec3f" value="50 50 0"></field>
<field name="old" accessType="inputOutput" type="SFVec3f"></field>
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
<ROUTE fromNode="MoveBall" fromField="keyValue" toNode="NodePosition" toField="set_keyValue"></ROUTE>
<ROUTE fromNode="NodePosition" fromField="value_changed" toNode="transform" toField="set_translation"></ROUTE>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare13.name = "node";
ProtoInterface ProtoInterface14 = createNode("ProtoInterface");
field field15 = createNode("field");
field15.name = "position";
field15.accessType = "inputOutput";
field15.type = "SFVec3f";
ProtoInterface14.field = new MFNode();

ProtoInterface14.field[0] = field15;

ProtoDeclare13.protoInterface = ProtoInterface14;

ProtoBody ProtoBody16 = createNode("ProtoBody");
Group Group17 = createNode("Group");
Transform Transform18 = createNode("Transform");
Transform18.DEF = "transform";
IS IS19 = createNode("IS");
connect connect20 = createNode("connect");
connect20.nodeField = "translation";
connect20.protoField = "position";
IS19.connect = new MFNode();

IS19.connect[0] = connect20;

Transform18.iS = IS19;

Shape Shape21 = createNode("Shape");
Sphere Sphere22 = createNode("Sphere");
Shape21.geometry = Sphere22;

Appearance Appearance23 = createNode("Appearance");
Material Material24 = createNode("Material");
Material24.diffuseColor = new SFColor(new float[1,0,0]);
Appearance23.material = Material24;

Shape21.appearance = Appearance23;

Transform18.child = new undefined();

Transform18.child[0] = Shape21;

Transform Transform25 = createNode("Transform");
Transform25.translation = new SFVec3f(new float[1,0,0]);
Shape Shape26 = createNode("Shape");
Appearance Appearance27 = createNode("Appearance");
Material Material28 = createNode("Material");
Material28.diffuseColor = new SFColor(new float[0,0,1]);
Appearance27.material = Material28;

Shape26.appearance = Appearance27;

Text Text29 = createNode("Text");
Text29.string = new MFString(new java.lang.String["Node"]);
FontStyle FontStyle30 = createNode("FontStyle");
FontStyle30.size = 5;
FontStyle30.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text29.fontStyle = FontStyle30;

Shape26.geometry = Text29;

Transform25.child = new undefined();

Transform25.child[0] = Shape26;

Transform18.children[1] = Transform25;

Group17.children = new MFNode();

Group17.children[0] = Transform18;

PositionInterpolator PositionInterpolator31 = createNode("PositionInterpolator");
PositionInterpolator31.DEF = "NodePosition";
PositionInterpolator31.key = new MFFloat(new float[0,1]);
PositionInterpolator31.keyValue = new MFVec3f(new float[0,0,0,0,5,0]);
Group17.children[1] = PositionInterpolator31;

Script Script32 = createNode("Script");
Script32.DEF = "MoveBall";
field field33 = createNode("field");
field33.name = "translation";
field33.accessType = "inputOutput";
field33.type = "SFVec3f";
field33.value = "50 50 0";
Script32.field = new MFNode();

Script32.field[0] = field33;

field field34 = createNode("field");
field34.name = "old";
field34.accessType = "inputOutput";
field34.type = "SFVec3f";
Script32.field[1] = field34;

field field35 = createNode("field");
field35.name = "set_cycle";
field35.accessType = "inputOnly";
field35.type = "SFTime";
Script32.field[2] = field35;

field field36 = createNode("field");
field36.name = "keyValue";
field36.accessType = "outputOnly";
field36.type = "MFVec3f";
Script32.field[3] = field36;


Script32.setSourceCode(`ecmascript:\n"+
"		function set_cycle(value) {\n"+
"			old = translation;\n"+
"			translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"			keyValue = new MFVec3f(old, translation);\n"+
"		}`)
Group17.children[2] = Script32;

TimeSensor TimeSensor37 = createNode("TimeSensor");
TimeSensor37.DEF = "nodeClock";
TimeSensor37.cycleInterval = 3;
TimeSensor37.loop = True;
Group17.children[3] = TimeSensor37;

ROUTE ROUTE38 = createNode("ROUTE");
ROUTE38.fromNode = "nodeClock";
ROUTE38.fromField = "cycleTime";
ROUTE38.toNode = "MoveBall";
ROUTE38.toField = "set_cycle";
Group17.children[4] = ROUTE38;

ROUTE ROUTE39 = createNode("ROUTE");
ROUTE39.fromNode = "nodeClock";
ROUTE39.fromField = "fraction_changed";
ROUTE39.toNode = "NodePosition";
ROUTE39.toField = "set_fraction";
Group17.children[5] = ROUTE39;

ROUTE ROUTE40 = createNode("ROUTE");
ROUTE40.fromNode = "MoveBall";
ROUTE40.fromField = "keyValue";
ROUTE40.toNode = "NodePosition";
ROUTE40.toField = "set_keyValue";
Group17.children[6] = ROUTE40;

ROUTE ROUTE41 = createNode("ROUTE");
ROUTE41.fromNode = "NodePosition";
ROUTE41.fromField = "value_changed";
ROUTE41.toNode = "transform";
ROUTE41.toField = "set_translation";
Group17.children[7] = ROUTE41;

ProtoBody16.children = new MFNode();

ProtoBody16.children[0] = Group17;

ProtoDeclare13.protoBody = ProtoBody16;

children = new MFNode();

children[0] = ProtoDeclare13;

ProtoDeclare ProtoDeclare42 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="cyl" ><ProtoInterface><field name="set_positionA" accessType="inputOutput" type="SFVec3f"></field>
<field name="set_positionB" accessType="inputOutput" type="SFVec3f"></field>
</ProtoInterface>
<ProtoBody><Group><Shape><Appearance containerField="appearance"><Material containerField="material" diffuseColor="0 1 0"></Material>
</Appearance>
<Extrusion DEF="extrusion" creaseAngle="0.785" crossSection="1 0 0.92 -0.38 0.71 -0.71 0.38 -0.92 0 -1 -0.38 -0.92 -0.71 -0.71 -0.92 -0.38 -1 0 -0.92 0.38 -0.71 0.71 -0.38 0.92 0 1 0.38 0.92 0.71 0.71 0.92 0.38 1 0" spine="0 -50 0 0 0 0 0 50 0"></Extrusion>
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
<ROUTE fromNode="MoveCylinder" fromField="spine_changed" toNode="extrusion" toField="set_spine"></ROUTE>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare42.name = "cyl";
ProtoInterface ProtoInterface43 = createNode("ProtoInterface");
field field44 = createNode("field");
field44.name = "set_positionA";
field44.accessType = "inputOutput";
field44.type = "SFVec3f";
ProtoInterface43.field = new MFNode();

ProtoInterface43.field[0] = field44;

field field45 = createNode("field");
field45.name = "set_positionB";
field45.accessType = "inputOutput";
field45.type = "SFVec3f";
ProtoInterface43.field[1] = field45;

ProtoDeclare42.protoInterface = ProtoInterface43;

ProtoBody ProtoBody46 = createNode("ProtoBody");
Group Group47 = createNode("Group");
Shape Shape48 = createNode("Shape");
Appearance Appearance49 = createNode("Appearance");
Material Material50 = createNode("Material");
Material50.diffuseColor = new SFColor(new float[0,1,0]);
Appearance49.material = Material50;

Shape48.appearance = Appearance49;

Extrusion Extrusion51 = createNode("Extrusion");
Extrusion51.DEF = "extrusion";
Extrusion51.creaseAngle = 0.785;
Extrusion51.crossSection = new MFVec2f(new float[1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]);
Extrusion51.spine = new MFVec3f(new float[0,-50,0,0,0,0,0,50,0]);
Shape48.geometry = Extrusion51;

Group47.children = new MFNode();

Group47.children[0] = Shape48;

Script Script52 = createNode("Script");
Script52.DEF = "MoveCylinder";
field field53 = createNode("field");
field53.name = "spine";
field53.accessType = "inputOutput";
field53.type = "MFVec3f";
field53.value = "0 -50 0 0 0 0 0 50 0";
Script52.field = new MFNode();

Script52.field[0] = field53;

field field54 = createNode("field");
field54.name = "endA";
field54.accessType = "inputOutput";
field54.type = "SFVec3f";
Script52.field[1] = field54;

field field55 = createNode("field");
field55.name = "endB";
field55.accessType = "inputOutput";
field55.type = "SFVec3f";
Script52.field[2] = field55;

IS IS56 = createNode("IS");
connect connect57 = createNode("connect");
connect57.nodeField = "endA";
connect57.protoField = "set_positionA";
IS56.connect = new MFNode();

IS56.connect[0] = connect57;

connect connect58 = createNode("connect");
connect58.nodeField = "endB";
connect58.protoField = "set_positionB";
IS56.connect[1] = connect58;

Script52.iS = IS56;


Script52.setSourceCode(`ecmascript:\n"+
"\n"+
"                function set_endA(value) {\n"+
"		    spine = new MFVec3f(value, spine[1]);\n"+
"                }\n"+
"\n"+
"                function set_endB(value) {\n"+
"		    spine = new MFVec3f(spine[0], value);\n"+
"                }`)
Group47.children[1] = Script52;

ROUTE ROUTE59 = createNode("ROUTE");
ROUTE59.fromNode = "MoveCylinder";
ROUTE59.fromField = "spine_changed";
ROUTE59.toNode = "extrusion";
ROUTE59.toField = "set_spine";
Group47.children[2] = ROUTE59;

ProtoBody46.children = new MFNode();

ProtoBody46.children[0] = Group47;

ProtoDeclare42.protoBody = ProtoBody46;

children[1] = ProtoDeclare42;

Transform Transform60 = createNode("Transform");
Transform60.DEF = "HoldsContent";
Transform60.scale = new SFVec3f(new float[0.1,0.1,0.1]);
PlaneSensor PlaneSensor61 = createNode("PlaneSensor");
PlaneSensor61.DEF = "clickGenerator";
PlaneSensor61.description = "click on background to add nodes, click on nodes to add links";
PlaneSensor61.minPosition = new SFVec2f(new float[-50,-50]);
PlaneSensor61.maxPosition = new SFVec2f(new float[50,50]);
Transform60.children = new MFNode();

Transform60.children[0] = PlaneSensor61;

ProtoInstance ProtoInstance62 = createNode("ProtoInstance");
ProtoInstance62.name = "node";
ProtoInstance62.DEF = "nodeA";
fieldValue fieldValue63 = createNode("fieldValue");
fieldValue63.name = "position";
fieldValue63.value = "0 1.388333 0";
ProtoInstance62.fieldValue = new MFNode();

ProtoInstance62.fieldValue[0] = fieldValue63;

Transform60.children[1] = ProtoInstance62;

ProtoInstance ProtoInstance64 = createNode("ProtoInstance");
ProtoInstance64.name = "node";
ProtoInstance64.DEF = "nodeB";
fieldValue fieldValue65 = createNode("fieldValue");
fieldValue65.name = "position";
fieldValue65.value = "0 1.388333 0";
ProtoInstance64.fieldValue = new MFNode();

ProtoInstance64.fieldValue[0] = fieldValue65;

Transform60.children[2] = ProtoInstance64;

ProtoInstance ProtoInstance66 = createNode("ProtoInstance");
ProtoInstance66.name = "node";
ProtoInstance66.DEF = "nodeC";
fieldValue fieldValue67 = createNode("fieldValue");
fieldValue67.name = "position";
fieldValue67.value = "0 1.388333 0";
ProtoInstance66.fieldValue = new MFNode();

ProtoInstance66.fieldValue[0] = fieldValue67;

Transform60.children[3] = ProtoInstance66;

ProtoInstance ProtoInstance68 = createNode("ProtoInstance");
ProtoInstance68.name = "node";
ProtoInstance68.DEF = "nodeD";
fieldValue fieldValue69 = createNode("fieldValue");
fieldValue69.name = "position";
fieldValue69.value = "0 1.388333 0";
ProtoInstance68.fieldValue = new MFNode();

ProtoInstance68.fieldValue[0] = fieldValue69;

Transform60.children[4] = ProtoInstance68;

ProtoInstance ProtoInstance70 = createNode("ProtoInstance");
ProtoInstance70.name = "cyl";
ProtoInstance70.DEF = "linkA";
Transform60.children[5] = ProtoInstance70;

ProtoInstance ProtoInstance71 = createNode("ProtoInstance");
ProtoInstance71.name = "cyl";
ProtoInstance71.DEF = "linkB";
Transform60.children[6] = ProtoInstance71;

ProtoInstance ProtoInstance72 = createNode("ProtoInstance");
ProtoInstance72.name = "cyl";
ProtoInstance72.DEF = "linkC";
Transform60.children[7] = ProtoInstance72;

children[2] = Transform60;

Script Script73 = createNode("Script");
Script73.DEF = "clickHandler";
field field74 = createNode("field");
field74.name = "counter";
field74.accessType = "inputOutput";
field74.type = "SFInt32";
Script73.field = new MFNode();

Script73.field[0] = field74;

field field75 = createNode("field");
field75.name = "node_changed";
field75.accessType = "outputOnly";
field75.type = "SFNode";
Script73.field[1] = field75;

field field76 = createNode("field");
field76.name = "add_node";
field76.accessType = "inputOnly";
field76.type = "SFBool";
Script73.field[2] = field76;


Script73.setSourceCode(`ecmascript:\n"+
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
children[3] = Script73;

ROUTE ROUTE77 = createNode("ROUTE");
ROUTE77.fromNode = "clickGenerator";
ROUTE77.fromField = "isActive";
ROUTE77.toNode = "clickHandler";
ROUTE77.toField = "add_node";
children[4] = ROUTE77;

ROUTE ROUTE78 = createNode("ROUTE");
ROUTE78.fromNode = "nodeA";
ROUTE78.fromField = "position_changed";
ROUTE78.toNode = "linkA";
ROUTE78.toField = "set_positionA";
children[5] = ROUTE78;

ROUTE ROUTE79 = createNode("ROUTE");
ROUTE79.fromNode = "nodeB";
ROUTE79.fromField = "position_changed";
ROUTE79.toNode = "linkA";
ROUTE79.toField = "set_positionB";
children[6] = ROUTE79;

ROUTE ROUTE80 = createNode("ROUTE");
ROUTE80.fromNode = "nodeA";
ROUTE80.fromField = "position_changed";
ROUTE80.toNode = "linkB";
ROUTE80.toField = "set_positionA";
children[7] = ROUTE80;

ROUTE ROUTE81 = createNode("ROUTE");
ROUTE81.fromNode = "nodeC";
ROUTE81.fromField = "position_changed";
ROUTE81.toNode = "linkB";
ROUTE81.toField = "set_positionB";
children[8] = ROUTE81;

ROUTE ROUTE82 = createNode("ROUTE");
ROUTE82.fromNode = "nodeA";
ROUTE82.fromField = "position_changed";
ROUTE82.toNode = "linkC";
ROUTE82.toField = "set_positionA";
children[9] = ROUTE82;

ROUTE ROUTE83 = createNode("ROUTE");
ROUTE83.fromNode = "nodeD";
ROUTE83.fromField = "position_changed";
ROUTE83.toNode = "linkC";
ROUTE83.toField = "set_positionB";
children[10] = ROUTE83;

}
