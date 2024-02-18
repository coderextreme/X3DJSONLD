#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "3.3";
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
meta4.name = "title";
meta4.content = "forcenode.x3d";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "identifier";
meta5.content = "https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "description";
meta6.content = "beginnings of a force directed graph in 3D";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "generator";
meta7.content = "Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit";
head1.meta[5] = meta7;

head = head1;

ProtoDeclare ProtoDeclare9 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
                                                keyValue = new MFVec3f([old, translation]);
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
ProtoDeclare9.name = "node";
ProtoInterface ProtoInterface10 = createNode("ProtoInterface");
field field11 = createNode("field");
field11.name = "position";
field11.accessType = "inputOutput";
field11.type = "SFVec3f";
field11.value = "0 0 0";
ProtoInterface10.field = new MFNode();

ProtoInterface10.field[0] = field11;

ProtoDeclare9.protoInterface = ProtoInterface10;

ProtoBody ProtoBody12 = createNode("ProtoBody");
Group Group13 = createNode("Group");
Transform Transform14 = createNode("Transform");
Transform14.DEF = "transform";
IS IS15 = createNode("IS");
connect connect16 = createNode("connect");
connect16.nodeField = "translation";
connect16.protoField = "position";
IS15.connect = new MFNode();

IS15.connect[0] = connect16;

Transform14.iS = IS15;

Shape Shape17 = createNode("Shape");
Sphere Sphere18 = createNode("Sphere");
Shape17.geometry = Sphere18;

Appearance Appearance19 = createNode("Appearance");
Material Material20 = createNode("Material");
Material20.diffuseColor = new SFColor(new float[1,0,0]);
Appearance19.material = Material20;

Shape17.appearance = Appearance19;

Transform14.child = new undefined();

Transform14.child[0] = Shape17;

Transform Transform21 = createNode("Transform");
Transform21.translation = new SFVec3f(new float[1,0,1]);
Shape Shape22 = createNode("Shape");
Text Text23 = createNode("Text");
Text23.string = new MFString(new java.lang.String["Node"]);
FontStyle FontStyle24 = createNode("FontStyle");
FontStyle24.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle24.size = 5;
Text23.fontStyle = FontStyle24;

Shape22.geometry = Text23;

Appearance Appearance25 = createNode("Appearance");
Material Material26 = createNode("Material");
Material26.diffuseColor = new SFColor(new float[0,0,1]);
Appearance25.material = Material26;

Shape22.appearance = Appearance25;

Transform21.child = new undefined();

Transform21.child[0] = Shape22;

Transform14.children[1] = Transform21;

Group13.children = new MFNode();

Group13.children[0] = Transform14;

PositionInterpolator PositionInterpolator27 = createNode("PositionInterpolator");
PositionInterpolator27.DEF = "NodePosition";
PositionInterpolator27.key = new MFFloat(new float[0,1]);
PositionInterpolator27.keyValue = new MFVec3f(new float[0,0,0,0,5,0]);
Group13.children[1] = PositionInterpolator27;

Script Script28 = createNode("Script");
Script28.DEF = "MoveBall";
field field29 = createNode("field");
field29.name = "translation";
field29.accessType = "inputOutput";
field29.type = "SFVec3f";
field29.value = "50 50 0";
Script28.field = new MFNode();

Script28.field[0] = field29;

field field30 = createNode("field");
field30.name = "old";
field30.accessType = "inputOutput";
field30.type = "SFVec3f";
field30.value = "0 0 0";
Script28.field[1] = field30;

field field31 = createNode("field");
field31.name = "set_cycle";
field31.accessType = "inputOnly";
field31.type = "SFTime";
Script28.field[2] = field31;

field field32 = createNode("field");
field32.name = "keyValue";
field32.accessType = "outputOnly";
field32.type = "MFVec3f";
Script28.field[3] = field32;


Script28.setSourceCode(`ecmascript:\n"+
"					function set_cycle(value) {\n"+
"                                                old = translation;\n"+
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"                                                keyValue = new MFVec3f([old, translation]);\n"+
"						// Browser.println(translation);\n"+
"					}`)
Group13.children[2] = Script28;

TimeSensor TimeSensor33 = createNode("TimeSensor");
TimeSensor33.DEF = "nodeClock";
TimeSensor33.cycleInterval = 3;
TimeSensor33.loop = True;
Group13.children[3] = TimeSensor33;

ROUTE ROUTE34 = createNode("ROUTE");
ROUTE34.fromNode = "nodeClock";
ROUTE34.fromField = "cycleTime";
ROUTE34.toNode = "MoveBall";
ROUTE34.toField = "set_cycle";
Group13.children[4] = ROUTE34;

ROUTE ROUTE35 = createNode("ROUTE");
ROUTE35.fromNode = "nodeClock";
ROUTE35.fromField = "fraction_changed";
ROUTE35.toNode = "NodePosition";
ROUTE35.toField = "set_fraction";
Group13.children[5] = ROUTE35;

ROUTE ROUTE36 = createNode("ROUTE");
ROUTE36.fromNode = "MoveBall";
ROUTE36.fromField = "keyValue";
ROUTE36.toNode = "NodePosition";
ROUTE36.toField = "keyValue";
Group13.children[6] = ROUTE36;

ROUTE ROUTE37 = createNode("ROUTE");
ROUTE37.fromNode = "NodePosition";
ROUTE37.fromField = "value_changed";
ROUTE37.toNode = "transform";
ROUTE37.toField = "set_translation";
Group13.children[7] = ROUTE37;

ProtoBody12.children = new MFNode();

ProtoBody12.children[0] = Group13;

ProtoDeclare9.protoBody = ProtoBody12;

children = new MFNode();

children[0] = ProtoDeclare9;

ProtoDeclare ProtoDeclare38 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="cyl" ><ProtoInterface><field name="set_positionA" accessType="inputOnly" type="SFVec3f"></field>
<field name="set_positionB" accessType="inputOnly" type="SFVec3f"></field>
</ProtoInterface>
<ProtoBody><Group><Shape><Extrusion DEF="extrusion" creaseAngle="0.785" crossSection="1 0 0.92 -0.38 0.71 -0.71 0.38 -0.92 0 -1 -0.38 -0.92 -0.71 -0.71 -0.92 -0.38 -1 0 -0.92 0.38 -0.71 0.71 -0.38 0.92 0 1 0.38 0.92 0.71 0.71 0.92 0.38 1 0" spine="0 -50 0 0 50 0"></Extrusion>
<Appearance containerField="appearance"><Material containerField="material" diffuseColor="0 1 0"></Material>
</Appearance>
</Shape>
<Script DEF="MoveCylinder"><field name="spine" accessType="inputOutput" type="MFVec3f" value="0 -50 0 0 50 0"></field>
<field name="set_endA" accessType="inputOnly" type="SFVec3f"></field>
<field name="set_endB" accessType="inputOnly" type="SFVec3f"></field>
<IS><connect nodeField="set_endA" protoField="set_positionA"></connect>
<connect nodeField="set_endB" protoField="set_positionB"></connect>
</IS>
<![CDATA[ecmascript:

                function set_endA(value) {
		    if (typeof spine === 'undefined') {
		        spine = new MFVec3f([value, value]);
		    } else {
		        spine = new MFVec3f([value, spine[1]]);
		    }
                }

                function set_endB(value) {
		    if (typeof spine === 'undefined') {
		        spine = new MFVec3f([value, value]);
		    } else {
		        spine = new MFVec3f([spine[0], value]);
		    }
                }

                function set_spine(value) {
                    spine = value;
                }]]></Script>
<ROUTE fromNode="MoveCylinder" fromField="spine" toNode="extrusion" toField="set_spine"></ROUTE>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare38.name = "cyl";
ProtoInterface ProtoInterface39 = createNode("ProtoInterface");
field field40 = createNode("field");
field40.name = "set_positionA";
field40.accessType = "inputOnly";
field40.type = "SFVec3f";
ProtoInterface39.field = new MFNode();

ProtoInterface39.field[0] = field40;

field field41 = createNode("field");
field41.name = "set_positionB";
field41.accessType = "inputOnly";
field41.type = "SFVec3f";
ProtoInterface39.field[1] = field41;

ProtoDeclare38.protoInterface = ProtoInterface39;

ProtoBody ProtoBody42 = createNode("ProtoBody");
Group Group43 = createNode("Group");
Shape Shape44 = createNode("Shape");
Extrusion Extrusion45 = createNode("Extrusion");
Extrusion45.DEF = "extrusion";
Extrusion45.creaseAngle = 0.785;
Extrusion45.crossSection = new MFVec2f(new float[1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]);
Extrusion45.spine = new MFVec3f(new float[0,-50,0,0,50,0]);
Shape44.geometry = Extrusion45;

Appearance Appearance46 = createNode("Appearance");
Material Material47 = createNode("Material");
Material47.diffuseColor = new SFColor(new float[0,1,0]);
Appearance46.material = Material47;

Shape44.appearance = Appearance46;

Group43.children = new MFNode();

Group43.children[0] = Shape44;

Script Script48 = createNode("Script");
Script48.DEF = "MoveCylinder";
field field49 = createNode("field");
field49.name = "spine";
field49.accessType = "inputOutput";
field49.type = "MFVec3f";
field49.value = "0 -50 0 0 50 0";
Script48.field = new MFNode();

Script48.field[0] = field49;

field field50 = createNode("field");
field50.name = "set_endA";
field50.accessType = "inputOnly";
field50.type = "SFVec3f";
Script48.field[1] = field50;

field field51 = createNode("field");
field51.name = "set_endB";
field51.accessType = "inputOnly";
field51.type = "SFVec3f";
Script48.field[2] = field51;

IS IS52 = createNode("IS");
connect connect53 = createNode("connect");
connect53.nodeField = "set_endA";
connect53.protoField = "set_positionA";
IS52.connect = new MFNode();

IS52.connect[0] = connect53;

connect connect54 = createNode("connect");
connect54.nodeField = "set_endB";
connect54.protoField = "set_positionB";
IS52.connect[1] = connect54;

Script48.iS = IS52;


Script48.setSourceCode(`ecmascript:\n"+
"\n"+
"                function set_endA(value) {\n"+
"		    if (typeof spine === 'undefined') {\n"+
"		        spine = new MFVec3f([value, value]);\n"+
"		    } else {\n"+
"		        spine = new MFVec3f([value, spine[1]]);\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_endB(value) {\n"+
"		    if (typeof spine === 'undefined') {\n"+
"		        spine = new MFVec3f([value, value]);\n"+
"		    } else {\n"+
"		        spine = new MFVec3f([spine[0], value]);\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_spine(value) {\n"+
"                    spine = value;\n"+
"                }`)
Group43.children[1] = Script48;

ROUTE ROUTE55 = createNode("ROUTE");
ROUTE55.fromNode = "MoveCylinder";
ROUTE55.fromField = "spine";
ROUTE55.toNode = "extrusion";
ROUTE55.toField = "set_spine";
Group43.children[2] = ROUTE55;

ProtoBody42.children = new MFNode();

ProtoBody42.children[0] = Group43;

ProtoDeclare38.protoBody = ProtoBody42;

children[1] = ProtoDeclare38;

Transform Transform56 = createNode("Transform");
Transform56.DEF = "HoldsContent";
Transform56.scale = new SFVec3f(new float[0.1,0.1,0.1]);
PlaneSensor PlaneSensor57 = createNode("PlaneSensor");
PlaneSensor57.DEF = "clickGenerator";
PlaneSensor57.minPosition = new SFVec2f(new float[-50,-50]);
PlaneSensor57.maxPosition = new SFVec2f(new float[50,50]);
PlaneSensor57.description = "click on background to add nodes, click on nodes to add links";
Transform56.children = new MFNode();

Transform56.children[0] = PlaneSensor57;

ProtoInstance ProtoInstance58 = createNode("ProtoInstance");
ProtoInstance58.name = "node";
ProtoInstance58.DEF = "nodeA";
fieldValue fieldValue59 = createNode("fieldValue");
fieldValue59.name = "position";
fieldValue59.value = "0 0 0";
ProtoInstance58.fieldValue = new MFNode();

ProtoInstance58.fieldValue[0] = fieldValue59;

Transform56.children[1] = ProtoInstance58;

ProtoInstance ProtoInstance60 = createNode("ProtoInstance");
ProtoInstance60.name = "node";
ProtoInstance60.DEF = "nodeB";
fieldValue fieldValue61 = createNode("fieldValue");
fieldValue61.name = "position";
fieldValue61.value = "50 50 50";
ProtoInstance60.fieldValue = new MFNode();

ProtoInstance60.fieldValue[0] = fieldValue61;

Transform56.children[2] = ProtoInstance60;

ProtoInstance ProtoInstance62 = createNode("ProtoInstance");
ProtoInstance62.name = "node";
ProtoInstance62.DEF = "nodeC";
fieldValue fieldValue63 = createNode("fieldValue");
fieldValue63.name = "position";
fieldValue63.value = "-50 -50 -50";
ProtoInstance62.fieldValue = new MFNode();

ProtoInstance62.fieldValue[0] = fieldValue63;

Transform56.children[3] = ProtoInstance62;

ProtoInstance ProtoInstance64 = createNode("ProtoInstance");
ProtoInstance64.name = "node";
ProtoInstance64.DEF = "nodeD";
fieldValue fieldValue65 = createNode("fieldValue");
fieldValue65.name = "position";
fieldValue65.value = "50 50 -50";
ProtoInstance64.fieldValue = new MFNode();

ProtoInstance64.fieldValue[0] = fieldValue65;

Transform56.children[4] = ProtoInstance64;

ProtoInstance ProtoInstance66 = createNode("ProtoInstance");
ProtoInstance66.name = "cyl";
ProtoInstance66.DEF = "linkA";
fieldValue fieldValue67 = createNode("fieldValue");
fieldValue67.name = "set_positionA";
fieldValue67.value = "0 0 0";
ProtoInstance66.fieldValue = new MFNode();

ProtoInstance66.fieldValue[0] = fieldValue67;

fieldValue fieldValue68 = createNode("fieldValue");
fieldValue68.name = "set_positionB";
fieldValue68.value = "50 50 50";
ProtoInstance66.fieldValue[1] = fieldValue68;

Transform56.children[5] = ProtoInstance66;

ProtoInstance ProtoInstance69 = createNode("ProtoInstance");
ProtoInstance69.name = "cyl";
ProtoInstance69.DEF = "linkB";
fieldValue fieldValue70 = createNode("fieldValue");
fieldValue70.name = "set_positionA";
fieldValue70.value = "0 0 0";
ProtoInstance69.fieldValue = new MFNode();

ProtoInstance69.fieldValue[0] = fieldValue70;

fieldValue fieldValue71 = createNode("fieldValue");
fieldValue71.name = "set_positionB";
fieldValue71.value = "-50 -50 -50";
ProtoInstance69.fieldValue[1] = fieldValue71;

Transform56.children[6] = ProtoInstance69;

ProtoInstance ProtoInstance72 = createNode("ProtoInstance");
ProtoInstance72.name = "cyl";
ProtoInstance72.DEF = "linkC";
fieldValue fieldValue73 = createNode("fieldValue");
fieldValue73.name = "set_positionA";
fieldValue73.value = "50 50 50";
ProtoInstance72.fieldValue = new MFNode();

ProtoInstance72.fieldValue[0] = fieldValue73;

fieldValue fieldValue74 = createNode("fieldValue");
fieldValue74.name = "set_positionB";
fieldValue74.value = "50 50 -50";
ProtoInstance72.fieldValue[1] = fieldValue74;

Transform56.children[7] = ProtoInstance72;

children[2] = Transform56;

Script Script75 = createNode("Script");
Script75.DEF = "clickHandler";
field field76 = createNode("field");
field76.name = "counter";
field76.accessType = "inputOutput";
field76.value = "0";
field76.type = "SFInt32";
Script75.field = new MFNode();

Script75.field[0] = field76;

field field77 = createNode("field");
field77.name = "node_changed";
field77.accessType = "outputOnly";
field77.type = "SFNode";
Script75.field[1] = field77;

field field78 = createNode("field");
field78.name = "add_node";
field78.accessType = "inputOnly";
field78.value = "false";
field78.type = "SFBool";
Script75.field[2] = field78;

//<field name=\"ModifiableNode\" type=\"SFNode\" accessType=\"inputOutput\"> <Transform USE=\"HoldsContent\"/> </field>

Script75.setSourceCode(`ecmascript:\n"+
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
children[3] = Script75;

ROUTE ROUTE79 = createNode("ROUTE");
ROUTE79.fromNode = "clickGenerator";
ROUTE79.fromField = "isActive";
ROUTE79.toNode = "clickHandler";
ROUTE79.toField = "add_node";
children[4] = ROUTE79;

ROUTE ROUTE80 = createNode("ROUTE");
ROUTE80.fromNode = "nodeA";
ROUTE80.fromField = "position";
ROUTE80.toNode = "linkA";
ROUTE80.toField = "set_positionA";
children[5] = ROUTE80;

ROUTE ROUTE81 = createNode("ROUTE");
ROUTE81.fromNode = "nodeB";
ROUTE81.fromField = "position";
ROUTE81.toNode = "linkA";
ROUTE81.toField = "set_positionB";
children[6] = ROUTE81;

ROUTE ROUTE82 = createNode("ROUTE");
ROUTE82.fromNode = "nodeA";
ROUTE82.fromField = "position";
ROUTE82.toNode = "linkB";
ROUTE82.toField = "set_positionA";
children[7] = ROUTE82;

ROUTE ROUTE83 = createNode("ROUTE");
ROUTE83.fromNode = "nodeC";
ROUTE83.fromField = "position";
ROUTE83.toNode = "linkB";
ROUTE83.toField = "set_positionB";
children[8] = ROUTE83;

ROUTE ROUTE84 = createNode("ROUTE");
ROUTE84.fromNode = "nodeA";
ROUTE84.fromField = "position";
ROUTE84.toNode = "linkC";
ROUTE84.toField = "set_positionA";
children[9] = ROUTE84;

ROUTE ROUTE85 = createNode("ROUTE");
ROUTE85.fromNode = "nodeD";
ROUTE85.fromField = "position";
ROUTE85.toNode = "linkC";
ROUTE85.toField = "set_positionB";
children[10] = ROUTE85;

}
