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
meta5.name = "title";
meta5.content = "force.x3d";
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

meta meta9 = createNode("meta");
meta9.name = "generator";
meta9.content = "x3d-tidy V1.0.175, https://www.npmjs.com/package/x3d-tidy";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "modified";
meta10.content = "Sat, 9 Nov 2024 19:29:39 GMT";
head1.meta[8] = meta10;

head = head1;

ProtoDeclare ProtoDeclare12 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="node" ><ProtoInterface><field name="position" accessType="inputOutput" type="SFVec3f"></field>
</ProtoInterface>
<ProtoBody><Group><Transform DEF="transform"><IS><connect nodeField="translation" protoField="position"></connect>
</IS>
<Shape><Appearance containerField="appearance"><Material containerField="material" diffuseColor="1 0 0"></Material>
</Appearance>
<Sphere></Sphere>
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
		    				/*
                                                var tmpkeyValue = new MFVec3f();
			    			tmpkeyValue[0] = old;
			    			tmpkeyValue[1] = translation;
                                                keyValue = tmpkeyValue;
		    				*/
                                                keyValue = new MFVec3f([old, translation]);
			    		
						// Browser.println(translation);
					}]]></Script>
<TimeSensor DEF="nodeClock" cycleInterval="3" loop="true"></TimeSensor>
</Group>
<ROUTE fromNode="nodeClock" fromField="cycleTime" toNode="MoveBall" toField="set_cycle"></ROUTE>
<ROUTE fromNode="nodeClock" fromField="fraction_changed" toNode="NodePosition" toField="set_fraction"></ROUTE>
<ROUTE fromNode="MoveBall" fromField="keyValue" toNode="NodePosition" toField="set_keyValue"></ROUTE>
<ROUTE fromNode="NodePosition" fromField="value_changed" toNode="transform" toField="set_translation"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare12.name = "node";
ProtoInterface ProtoInterface13 = createNode("ProtoInterface");
field field14 = createNode("field");
field14.name = "position";
field14.accessType = "inputOutput";
field14.type = "SFVec3f";
ProtoInterface13.field = new MFNode();

ProtoInterface13.field[0] = field14;

ProtoDeclare12.protoInterface = ProtoInterface13;

ProtoBody ProtoBody15 = createNode("ProtoBody");
Group Group16 = createNode("Group");
Transform Transform17 = createNode("Transform");
Transform17.DEF = "transform";
IS IS18 = createNode("IS");
connect connect19 = createNode("connect");
connect19.nodeField = "translation";
connect19.protoField = "position";
IS18.connect = new MFNode();

IS18.connect[0] = connect19;

Transform17.iS = IS18;

Shape Shape20 = createNode("Shape");
Appearance Appearance21 = createNode("Appearance");
Material Material22 = createNode("Material");
Material22.diffuseColor = new SFColor(new float[1,0,0]);
Appearance21.material = Material22;

Shape20.appearance = Appearance21;

Sphere Sphere23 = createNode("Sphere");
Shape20.geometry = Sphere23;

Transform17.child = new undefined();

Transform17.child[0] = Shape20;

Transform Transform24 = createNode("Transform");
Transform24.translation = new SFVec3f(new float[1,0,0]);
Shape Shape25 = createNode("Shape");
Appearance Appearance26 = createNode("Appearance");
Material Material27 = createNode("Material");
Material27.diffuseColor = new SFColor(new float[0,0,1]);
Appearance26.material = Material27;

Shape25.appearance = Appearance26;

Text Text28 = createNode("Text");
Text28.string = new MFString(new java.lang.String["Node"]);
FontStyle FontStyle29 = createNode("FontStyle");
FontStyle29.size = 5;
FontStyle29.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text28.fontStyle = FontStyle29;

Shape25.geometry = Text28;

Transform24.child = new undefined();

Transform24.child[0] = Shape25;

Transform17.children[1] = Transform24;

Group16.children = new MFNode();

Group16.children[0] = Transform17;

PositionInterpolator PositionInterpolator30 = createNode("PositionInterpolator");
PositionInterpolator30.DEF = "NodePosition";
PositionInterpolator30.key = new MFFloat(new float[0,1]);
PositionInterpolator30.keyValue = new MFVec3f(new float[0,0,0,0,5,0]);
Group16.children[1] = PositionInterpolator30;

Script Script31 = createNode("Script");
Script31.DEF = "MoveBall";
field field32 = createNode("field");
field32.name = "translation";
field32.accessType = "inputOutput";
field32.type = "SFVec3f";
field32.value = "50 50 0";
Script31.field = new MFNode();

Script31.field[0] = field32;

field field33 = createNode("field");
field33.name = "old";
field33.accessType = "inputOutput";
field33.type = "SFVec3f";
Script31.field[1] = field33;

field field34 = createNode("field");
field34.name = "set_cycle";
field34.accessType = "inputOnly";
field34.type = "SFTime";
Script31.field[2] = field34;

field field35 = createNode("field");
field35.name = "keyValue";
field35.accessType = "outputOnly";
field35.type = "MFVec3f";
Script31.field[3] = field35;


Script31.setSourceCode(`ecmascript:\n"+
"					function set_cycle(value) {\n"+
"                                                old = translation;\n"+
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"		    				/*\n"+
"                                                var tmpkeyValue = new MFVec3f();\n"+
"			    			tmpkeyValue[0] = old;\n"+
"			    			tmpkeyValue[1] = translation;\n"+
"                                                keyValue = tmpkeyValue;\n"+
"		    				*/\n"+
"                                                keyValue = new MFVec3f([old, translation]);\n"+
"			    		\n"+
"						// Browser.println(translation);\n"+
"					}`)
Group16.children[2] = Script31;

TimeSensor TimeSensor36 = createNode("TimeSensor");
TimeSensor36.DEF = "nodeClock";
TimeSensor36.cycleInterval = 3;
TimeSensor36.loop = True;
Group16.children[3] = TimeSensor36;

ProtoBody15.children = new MFNode();

ProtoBody15.children[0] = Group16;

ROUTE ROUTE37 = createNode("ROUTE");
ROUTE37.fromNode = "nodeClock";
ROUTE37.fromField = "cycleTime";
ROUTE37.toNode = "MoveBall";
ROUTE37.toField = "set_cycle";
ProtoBody15.children[1] = ROUTE37;

ROUTE ROUTE38 = createNode("ROUTE");
ROUTE38.fromNode = "nodeClock";
ROUTE38.fromField = "fraction_changed";
ROUTE38.toNode = "NodePosition";
ROUTE38.toField = "set_fraction";
ProtoBody15.children[2] = ROUTE38;

ROUTE ROUTE39 = createNode("ROUTE");
ROUTE39.fromNode = "MoveBall";
ROUTE39.fromField = "keyValue";
ROUTE39.toNode = "NodePosition";
ROUTE39.toField = "set_keyValue";
ProtoBody15.children[3] = ROUTE39;

ROUTE ROUTE40 = createNode("ROUTE");
ROUTE40.fromNode = "NodePosition";
ROUTE40.fromField = "value_changed";
ROUTE40.toNode = "transform";
ROUTE40.toField = "set_translation";
ProtoBody15.children[4] = ROUTE40;

ProtoDeclare12.protoBody = ProtoBody15;

children = new MFNode();

children[0] = ProtoDeclare12;

ProtoDeclare ProtoDeclare41 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="cyl" ><ProtoInterface><field name="set_positionA" accessType="inputOnly" type="SFVec3f"></field>
<field name="set_positionB" accessType="inputOnly" type="SFVec3f"></field>
</ProtoInterface>
<ProtoBody><Group><Shape><Appearance containerField="appearance"><Material containerField="material" diffuseColor="0 1 0"></Material>
</Appearance>
<Extrusion DEF="extrusion" creaseAngle="0.785" crossSection="1 0 0.92 -0.38 0.71 -0.71 0.38 -0.92 0 -1 -0.38 -0.92 -0.71 -0.71 -0.92 -0.38 -1 0 -0.92 0.38 -0.71 0.71 -0.38 0.92 0 1 0.38 0.92 0.71 0.71 0.92 0.38 1 0" spine="0 -50 0 0 50 0"></Extrusion>
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
		    	/*
		        var tmpspine = new MFVec3f();
			tmpspine[0] = value;
			tmpspine[1] = value;
			spine = tmpspine;
		    	*/
		        spine = new MFVec3f([value, value]);
		    } else {
		    	/*
		        var tmpspine = new MFVec3f();
			tmpspine[0] = value;
			tmpspine[1] = spine[1];
			spine = tmpspine;
		        */
		        spine = new MFVec3f([value, spine[1]]);
		    }
                }

                function set_endB(value) {
		    if (typeof spine === 'undefined') {
		    	/*
		        var tmpspine = new MFVec3f();
			tmpspine[0] = value;
			tmpspine[1] = value;
			spine = tmpspine;
		        */
		        spine = new MFVec3f([value, value]);
		    } else {
		    	/*
		        var tmpspine = new MFVec3f();
			tmpspine[0] = spine[0];
			tmpspine[1] = value;
			spine = tmpspine;
		    	*/
		        spine = new MFVec3f([spine[0], value]);
		    }
                }

                function set_spine(value) {
                    spine = value;
                }]]></Script>
</Group>
<ROUTE fromNode="MoveCylinder" fromField="spine_changed" toNode="extrusion" toField="set_spine"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare41.name = "cyl";
ProtoInterface ProtoInterface42 = createNode("ProtoInterface");
field field43 = createNode("field");
field43.name = "set_positionA";
field43.accessType = "inputOnly";
field43.type = "SFVec3f";
ProtoInterface42.field = new MFNode();

ProtoInterface42.field[0] = field43;

field field44 = createNode("field");
field44.name = "set_positionB";
field44.accessType = "inputOnly";
field44.type = "SFVec3f";
ProtoInterface42.field[1] = field44;

ProtoDeclare41.protoInterface = ProtoInterface42;

ProtoBody ProtoBody45 = createNode("ProtoBody");
Group Group46 = createNode("Group");
Shape Shape47 = createNode("Shape");
Appearance Appearance48 = createNode("Appearance");
Material Material49 = createNode("Material");
Material49.diffuseColor = new SFColor(new float[0,1,0]);
Appearance48.material = Material49;

Shape47.appearance = Appearance48;

Extrusion Extrusion50 = createNode("Extrusion");
Extrusion50.DEF = "extrusion";
Extrusion50.creaseAngle = 0.785;
Extrusion50.crossSection = new MFVec2f(new float[1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]);
Extrusion50.spine = new MFVec3f(new float[0,-50,0,0,50,0]);
Shape47.geometry = Extrusion50;

Group46.children = new MFNode();

Group46.children[0] = Shape47;

Script Script51 = createNode("Script");
Script51.DEF = "MoveCylinder";
field field52 = createNode("field");
field52.name = "spine";
field52.accessType = "inputOutput";
field52.type = "MFVec3f";
field52.value = "0 -50 0 0 50 0";
Script51.field = new MFNode();

Script51.field[0] = field52;

field field53 = createNode("field");
field53.name = "set_endA";
field53.accessType = "inputOnly";
field53.type = "SFVec3f";
Script51.field[1] = field53;

field field54 = createNode("field");
field54.name = "set_endB";
field54.accessType = "inputOnly";
field54.type = "SFVec3f";
Script51.field[2] = field54;

IS IS55 = createNode("IS");
connect connect56 = createNode("connect");
connect56.nodeField = "set_endA";
connect56.protoField = "set_positionA";
IS55.connect = new MFNode();

IS55.connect[0] = connect56;

connect connect57 = createNode("connect");
connect57.nodeField = "set_endB";
connect57.protoField = "set_positionB";
IS55.connect[1] = connect57;

Script51.iS = IS55;


Script51.setSourceCode(`ecmascript:\n"+
"\n"+
"                function set_endA(value) {\n"+
"		    if (typeof spine === 'undefined') {\n"+
"		    	/*\n"+
"		        var tmpspine = new MFVec3f();\n"+
"			tmpspine[0] = value;\n"+
"			tmpspine[1] = value;\n"+
"			spine = tmpspine;\n"+
"		    	*/\n"+
"		        spine = new MFVec3f([value, value]);\n"+
"		    } else {\n"+
"		    	/*\n"+
"		        var tmpspine = new MFVec3f();\n"+
"			tmpspine[0] = value;\n"+
"			tmpspine[1] = spine[1];\n"+
"			spine = tmpspine;\n"+
"		        */\n"+
"		        spine = new MFVec3f([value, spine[1]]);\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_endB(value) {\n"+
"		    if (typeof spine === 'undefined') {\n"+
"		    	/*\n"+
"		        var tmpspine = new MFVec3f();\n"+
"			tmpspine[0] = value;\n"+
"			tmpspine[1] = value;\n"+
"			spine = tmpspine;\n"+
"		        */\n"+
"		        spine = new MFVec3f([value, value]);\n"+
"		    } else {\n"+
"		    	/*\n"+
"		        var tmpspine = new MFVec3f();\n"+
"			tmpspine[0] = spine[0];\n"+
"			tmpspine[1] = value;\n"+
"			spine = tmpspine;\n"+
"		    	*/\n"+
"		        spine = new MFVec3f([spine[0], value]);\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_spine(value) {\n"+
"                    spine = value;\n"+
"                }`)
Group46.children[1] = Script51;

ProtoBody45.children = new MFNode();

ProtoBody45.children[0] = Group46;

ROUTE ROUTE58 = createNode("ROUTE");
ROUTE58.fromNode = "MoveCylinder";
ROUTE58.fromField = "spine_changed";
ROUTE58.toNode = "extrusion";
ROUTE58.toField = "set_spine";
ProtoBody45.children[1] = ROUTE58;

ProtoDeclare41.protoBody = ProtoBody45;

children[1] = ProtoDeclare41;

Transform Transform59 = createNode("Transform");
Transform59.DEF = "HoldsContent";
Transform59.scale = new SFVec3f(new float[0.1,0.1,0.1]);
PlaneSensor PlaneSensor60 = createNode("PlaneSensor");
PlaneSensor60.DEF = "clickGenerator";
PlaneSensor60.description = "click on background to add nodes, click on nodes to add links";
PlaneSensor60.minPosition = new SFVec2f(new float[-50,-50]);
PlaneSensor60.maxPosition = new SFVec2f(new float[50,50]);
Transform59.children = new MFNode();

Transform59.children[0] = PlaneSensor60;

ProtoInstance ProtoInstance61 = createNode("ProtoInstance");
ProtoInstance61.name = "node";
ProtoInstance61.DEF = "nodeA";
fieldValue fieldValue62 = createNode("fieldValue");
fieldValue62.name = "position";
fieldValue62.value = "0 1.388333 0";
ProtoInstance61.fieldValue = new MFNode();

ProtoInstance61.fieldValue[0] = fieldValue62;

Transform59.children[1] = ProtoInstance61;

ProtoInstance ProtoInstance63 = createNode("ProtoInstance");
ProtoInstance63.name = "node";
ProtoInstance63.DEF = "nodeB";
fieldValue fieldValue64 = createNode("fieldValue");
fieldValue64.name = "position";
fieldValue64.value = "0 1.388333 0";
ProtoInstance63.fieldValue = new MFNode();

ProtoInstance63.fieldValue[0] = fieldValue64;

Transform59.children[2] = ProtoInstance63;

ProtoInstance ProtoInstance65 = createNode("ProtoInstance");
ProtoInstance65.name = "node";
ProtoInstance65.DEF = "nodeC";
fieldValue fieldValue66 = createNode("fieldValue");
fieldValue66.name = "position";
fieldValue66.value = "0 1.388333 0";
ProtoInstance65.fieldValue = new MFNode();

ProtoInstance65.fieldValue[0] = fieldValue66;

Transform59.children[3] = ProtoInstance65;

ProtoInstance ProtoInstance67 = createNode("ProtoInstance");
ProtoInstance67.name = "node";
ProtoInstance67.DEF = "nodeD";
fieldValue fieldValue68 = createNode("fieldValue");
fieldValue68.name = "position";
fieldValue68.value = "0 1.388333 0";
ProtoInstance67.fieldValue = new MFNode();

ProtoInstance67.fieldValue[0] = fieldValue68;

Transform59.children[4] = ProtoInstance67;

ProtoInstance ProtoInstance69 = createNode("ProtoInstance");
ProtoInstance69.name = "cyl";
ProtoInstance69.DEF = "linkA";
Transform59.children[5] = ProtoInstance69;

ProtoInstance ProtoInstance70 = createNode("ProtoInstance");
ProtoInstance70.name = "cyl";
ProtoInstance70.DEF = "linkB";
Transform59.children[6] = ProtoInstance70;

ProtoInstance ProtoInstance71 = createNode("ProtoInstance");
ProtoInstance71.name = "cyl";
ProtoInstance71.DEF = "linkC";
Transform59.children[7] = ProtoInstance71;

children[2] = Transform59;

Script Script72 = createNode("Script");
Script72.DEF = "clickHandler";
field field73 = createNode("field");
field73.name = "counter";
field73.accessType = "inputOutput";
field73.type = "SFInt32";
Script72.field = new MFNode();

Script72.field[0] = field73;

field field74 = createNode("field");
field74.name = "node_changed";
field74.accessType = "outputOnly";
field74.type = "SFNode";
Script72.field[1] = field74;

field field75 = createNode("field");
field75.name = "add_node";
field75.accessType = "inputOnly";
field75.type = "SFBool";
Script72.field[2] = field75;


Script72.setSourceCode(`ecmascript:\n"+
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
children[3] = Script72;

ROUTE ROUTE76 = createNode("ROUTE");
ROUTE76.fromNode = "clickGenerator";
ROUTE76.fromField = "isActive";
ROUTE76.toNode = "clickHandler";
ROUTE76.toField = "add_node";
children[4] = ROUTE76;

ROUTE ROUTE77 = createNode("ROUTE");
ROUTE77.fromNode = "nodeA";
ROUTE77.fromField = "position_changed";
ROUTE77.toNode = "linkA";
ROUTE77.toField = "set_positionA";
children[5] = ROUTE77;

ROUTE ROUTE78 = createNode("ROUTE");
ROUTE78.fromNode = "nodeB";
ROUTE78.fromField = "position_changed";
ROUTE78.toNode = "linkA";
ROUTE78.toField = "set_positionB";
children[6] = ROUTE78;

ROUTE ROUTE79 = createNode("ROUTE");
ROUTE79.fromNode = "nodeA";
ROUTE79.fromField = "position_changed";
ROUTE79.toNode = "linkB";
ROUTE79.toField = "set_positionA";
children[7] = ROUTE79;

ROUTE ROUTE80 = createNode("ROUTE");
ROUTE80.fromNode = "nodeC";
ROUTE80.fromField = "position_changed";
ROUTE80.toNode = "linkB";
ROUTE80.toField = "set_positionB";
children[8] = ROUTE80;

ROUTE ROUTE81 = createNode("ROUTE");
ROUTE81.fromNode = "nodeA";
ROUTE81.fromField = "position_changed";
ROUTE81.toNode = "linkC";
ROUTE81.toField = "set_positionA";
children[9] = ROUTE81;

ROUTE ROUTE82 = createNode("ROUTE");
ROUTE82.fromNode = "nodeD";
ROUTE82.fromField = "position_changed";
ROUTE82.toNode = "linkC";
ROUTE82.toField = "set_positionB";
children[10] = ROUTE82;

}
