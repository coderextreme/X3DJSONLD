let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let component2 = browser.currentScene.createNode("component");
component2.name = "Scripting";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "creator";
meta3.content = "John W Carlson";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "created";
meta4.content = "December 13 2015";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "title";
meta5.content = "force.x3d";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "identifier";
meta6.content = "https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "description";
meta7.content = "beginnings of a force directed graph in 3D";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "generator";
meta8.content = "Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit";
head1.meta[6] = meta8;

head = head1;

let ProtoDeclare10 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
                                                var tmpkeyValue = new MFVec3f();
			    			tmpkeyValue[0] = old;
			    			tmpkeyValue[1] = translation;
                                                keyValue = tmpkeyValue;
			    		
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
let ProtoInterface11 = browser.currentScene.createNode("ProtoInterface");
let field12 = browser.currentScene.createNode("field");
field12.name = "position";
field12.accessType = "inputOutput";
field12.type = "SFVec3f";
field12.value = "0 0 0";
ProtoInterface11.field = new MFNode();

ProtoInterface11.field[0] = field12;

ProtoDeclare10.protoInterface = ProtoInterface11;

let ProtoBody13 = browser.currentScene.createNode("ProtoBody");
let Group14 = browser.currentScene.createNode("Group");
let Transform15 = browser.currentScene.createNode("Transform");
Transform15.DEF = "transform";
let IS16 = browser.currentScene.createNode("IS");
let connect17 = browser.currentScene.createNode("connect");
connect17.nodeField = "translation";
connect17.protoField = "position";
IS16.connect = new MFNode();

IS16.connect[0] = connect17;

Transform15.iS = IS16;

let Shape18 = browser.currentScene.createNode("Shape");
let Sphere19 = browser.currentScene.createNode("Sphere");
Shape18.geometry = Sphere19;

let Appearance20 = browser.currentScene.createNode("Appearance");
let Material21 = browser.currentScene.createNode("Material");
Material21.diffuseColor = new SFColor(new float[1,0,0]);
Appearance20.material = Material21;

Shape18.appearance = Appearance20;

Transform15.child = new undefined();

Transform15.child[0] = Shape18;

let Transform22 = browser.currentScene.createNode("Transform");
Transform22.translation = new SFVec3f(new float[1,0,0]);
let Shape23 = browser.currentScene.createNode("Shape");
let Text24 = browser.currentScene.createNode("Text");
Text24.string = new MFString(new java.lang.String["Node"]);
let FontStyle25 = browser.currentScene.createNode("FontStyle");
FontStyle25.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle25.size = 5;
Text24.fontStyle = FontStyle25;

Shape23.geometry = Text24;

let Appearance26 = browser.currentScene.createNode("Appearance");
let Material27 = browser.currentScene.createNode("Material");
Material27.diffuseColor = new SFColor(new float[0,0,1]);
Appearance26.material = Material27;

Shape23.appearance = Appearance26;

Transform22.child = new undefined();

Transform22.child[0] = Shape23;

Transform15.children[1] = Transform22;

Group14.children = new MFNode();

Group14.children[0] = Transform15;

let PositionInterpolator28 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator28.DEF = "NodePosition";
PositionInterpolator28.key = new MFFloat(new float[0,1]);
PositionInterpolator28.keyValue = new MFVec3f(new float[0,0,0,0,5,0]);
Group14.children[1] = PositionInterpolator28;

let Script29 = browser.currentScene.createNode("Script");
Script29.DEF = "MoveBall";
let field30 = browser.currentScene.createNode("field");
field30.name = "translation";
field30.accessType = "inputOutput";
field30.type = "SFVec3f";
field30.value = "50 50 0";
Script29.field = new MFNode();

Script29.field[0] = field30;

let field31 = browser.currentScene.createNode("field");
field31.name = "old";
field31.accessType = "inputOutput";
field31.type = "SFVec3f";
field31.value = "0 0 0";
Script29.field[1] = field31;

let field32 = browser.currentScene.createNode("field");
field32.name = "set_cycle";
field32.accessType = "inputOnly";
field32.type = "SFTime";
Script29.field[2] = field32;

let field33 = browser.currentScene.createNode("field");
field33.name = "keyValue";
field33.accessType = "outputOnly";
field33.type = "MFVec3f";
Script29.field[3] = field33;


Script29.setSourceCode(`ecmascript:\n"+
"					function set_cycle(value) {\n"+
"                                                old = translation;\n"+
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"                                                var tmpkeyValue = new MFVec3f();\n"+
"			    			tmpkeyValue[0] = old;\n"+
"			    			tmpkeyValue[1] = translation;\n"+
"                                                keyValue = tmpkeyValue;\n"+
"			    		\n"+
"						// Browser.println(translation);\n"+
"					}`)
Group14.children[2] = Script29;

let TimeSensor34 = browser.currentScene.createNode("TimeSensor");
TimeSensor34.DEF = "nodeClock";
TimeSensor34.cycleInterval = 3;
TimeSensor34.loop = True;
Group14.children[3] = TimeSensor34;

let ROUTE35 = browser.currentScene.createNode("ROUTE");
ROUTE35.fromNode = "nodeClock";
ROUTE35.fromField = "cycleTime";
ROUTE35.toNode = "MoveBall";
ROUTE35.toField = "set_cycle";
Group14.children[4] = ROUTE35;

let ROUTE36 = browser.currentScene.createNode("ROUTE");
ROUTE36.fromNode = "nodeClock";
ROUTE36.fromField = "fraction_changed";
ROUTE36.toNode = "NodePosition";
ROUTE36.toField = "set_fraction";
Group14.children[5] = ROUTE36;

let ROUTE37 = browser.currentScene.createNode("ROUTE");
ROUTE37.fromNode = "MoveBall";
ROUTE37.fromField = "keyValue";
ROUTE37.toNode = "NodePosition";
ROUTE37.toField = "keyValue";
Group14.children[6] = ROUTE37;

let ROUTE38 = browser.currentScene.createNode("ROUTE");
ROUTE38.fromNode = "NodePosition";
ROUTE38.fromField = "value_changed";
ROUTE38.toNode = "transform";
ROUTE38.toField = "set_translation";
Group14.children[7] = ROUTE38;

ProtoBody13.children = new MFNode();

ProtoBody13.children[0] = Group14;

ProtoDeclare10.protoBody = ProtoBody13;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ProtoDeclare10;

let ProtoDeclare39 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
		        var tmpspine = new MFVec3f();
			tmpspine[0] = value;
			tmpspine[1] = value;
			spine = tmpspine;
		    } else {
		        var tmpspine = new MFVec3f();
			tmpspine[0] = value;
			tmpspine[1] = spine[1];
			spine = tmpspine;
		    }
                }

                function set_endB(value) {
		    if (typeof spine === 'undefined') {
		        var tmpspine = new MFVec3f();
			tmpspine[0] = value;
			tmpspine[1] = value;
			spine = tmpspine;
		    } else {
		        var tmpspine = new MFVec3f();
			tmpspine[0] = spine[0];
			tmpspine[1] = value;
			spine = tmpspine;
		    }
                }

                function set_spine(value) {
                    spine = value;
                }]]></Script>
<ROUTE fromNode="MoveCylinder" fromField="spine" toNode="extrusion" toField="set_spine"></ROUTE>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare39.name = "cyl";
let ProtoInterface40 = browser.currentScene.createNode("ProtoInterface");
let field41 = browser.currentScene.createNode("field");
field41.name = "set_positionA";
field41.accessType = "inputOnly";
field41.type = "SFVec3f";
ProtoInterface40.field = new MFNode();

ProtoInterface40.field[0] = field41;

let field42 = browser.currentScene.createNode("field");
field42.name = "set_positionB";
field42.accessType = "inputOnly";
field42.type = "SFVec3f";
ProtoInterface40.field[1] = field42;

ProtoDeclare39.protoInterface = ProtoInterface40;

let ProtoBody43 = browser.currentScene.createNode("ProtoBody");
let Group44 = browser.currentScene.createNode("Group");
let Shape45 = browser.currentScene.createNode("Shape");
let Extrusion46 = browser.currentScene.createNode("Extrusion");
Extrusion46.DEF = "extrusion";
Extrusion46.creaseAngle = 0.785;
Extrusion46.crossSection = new MFVec2f(new float[1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]);
Extrusion46.spine = new MFVec3f(new float[0,-50,0,0,50,0]);
Shape45.geometry = Extrusion46;

let Appearance47 = browser.currentScene.createNode("Appearance");
let Material48 = browser.currentScene.createNode("Material");
Material48.diffuseColor = new SFColor(new float[0,1,0]);
Appearance47.material = Material48;

Shape45.appearance = Appearance47;

Group44.children = new MFNode();

Group44.children[0] = Shape45;

let Script49 = browser.currentScene.createNode("Script");
Script49.DEF = "MoveCylinder";
let field50 = browser.currentScene.createNode("field");
field50.name = "spine";
field50.accessType = "inputOutput";
field50.type = "MFVec3f";
field50.value = "0 -50 0 0 50 0";
Script49.field = new MFNode();

Script49.field[0] = field50;

let field51 = browser.currentScene.createNode("field");
field51.name = "set_endA";
field51.accessType = "inputOnly";
field51.type = "SFVec3f";
Script49.field[1] = field51;

let field52 = browser.currentScene.createNode("field");
field52.name = "set_endB";
field52.accessType = "inputOnly";
field52.type = "SFVec3f";
Script49.field[2] = field52;

let IS53 = browser.currentScene.createNode("IS");
let connect54 = browser.currentScene.createNode("connect");
connect54.nodeField = "set_endA";
connect54.protoField = "set_positionA";
IS53.connect = new MFNode();

IS53.connect[0] = connect54;

let connect55 = browser.currentScene.createNode("connect");
connect55.nodeField = "set_endB";
connect55.protoField = "set_positionB";
IS53.connect[1] = connect55;

Script49.iS = IS53;


Script49.setSourceCode(`ecmascript:\n"+
"\n"+
"                function set_endA(value) {\n"+
"		    if (typeof spine === 'undefined') {\n"+
"		        var tmpspine = new MFVec3f();\n"+
"			tmpspine[0] = value;\n"+
"			tmpspine[1] = value;\n"+
"			spine = tmpspine;\n"+
"		    } else {\n"+
"		        var tmpspine = new MFVec3f();\n"+
"			tmpspine[0] = value;\n"+
"			tmpspine[1] = spine[1];\n"+
"			spine = tmpspine;\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_endB(value) {\n"+
"		    if (typeof spine === 'undefined') {\n"+
"		        var tmpspine = new MFVec3f();\n"+
"			tmpspine[0] = value;\n"+
"			tmpspine[1] = value;\n"+
"			spine = tmpspine;\n"+
"		    } else {\n"+
"		        var tmpspine = new MFVec3f();\n"+
"			tmpspine[0] = spine[0];\n"+
"			tmpspine[1] = value;\n"+
"			spine = tmpspine;\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_spine(value) {\n"+
"                    spine = value;\n"+
"                }`)
Group44.children[1] = Script49;

let ROUTE56 = browser.currentScene.createNode("ROUTE");
ROUTE56.fromNode = "MoveCylinder";
ROUTE56.fromField = "spine";
ROUTE56.toNode = "extrusion";
ROUTE56.toField = "set_spine";
Group44.children[2] = ROUTE56;

ProtoBody43.children = new MFNode();

ProtoBody43.children[0] = Group44;

ProtoDeclare39.protoBody = ProtoBody43;

browser.currentScene.children[1] = ProtoDeclare39;

let Transform57 = browser.currentScene.createNode("Transform");
Transform57.DEF = "HoldsContent";
Transform57.scale = new SFVec3f(new float[0.1,0.1,0.1]);
let PlaneSensor58 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor58.DEF = "clickGenerator";
PlaneSensor58.minPosition = new SFVec2f(new float[-50,-50]);
PlaneSensor58.maxPosition = new SFVec2f(new float[50,50]);
PlaneSensor58.description = "click on background to add nodes, click on nodes to add links";
Transform57.children = new MFNode();

Transform57.children[0] = PlaneSensor58;

let ProtoInstance59 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance59.name = "node";
ProtoInstance59.DEF = "nodeA";
let fieldValue60 = browser.currentScene.createNode("fieldValue");
fieldValue60.name = "position";
fieldValue60.value = "0 0 0";
ProtoInstance59.fieldValue = new MFNode();

ProtoInstance59.fieldValue[0] = fieldValue60;

Transform57.children[1] = ProtoInstance59;

let ProtoInstance61 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance61.name = "node";
ProtoInstance61.DEF = "nodeB";
let fieldValue62 = browser.currentScene.createNode("fieldValue");
fieldValue62.name = "position";
fieldValue62.value = "50 50 50";
ProtoInstance61.fieldValue = new MFNode();

ProtoInstance61.fieldValue[0] = fieldValue62;

Transform57.children[2] = ProtoInstance61;

let ProtoInstance63 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance63.name = "node";
ProtoInstance63.DEF = "nodeC";
let fieldValue64 = browser.currentScene.createNode("fieldValue");
fieldValue64.name = "position";
fieldValue64.value = "-50 -50 -50";
ProtoInstance63.fieldValue = new MFNode();

ProtoInstance63.fieldValue[0] = fieldValue64;

Transform57.children[3] = ProtoInstance63;

let ProtoInstance65 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance65.name = "node";
ProtoInstance65.DEF = "nodeD";
let fieldValue66 = browser.currentScene.createNode("fieldValue");
fieldValue66.name = "position";
fieldValue66.value = "50 50 -50";
ProtoInstance65.fieldValue = new MFNode();

ProtoInstance65.fieldValue[0] = fieldValue66;

Transform57.children[4] = ProtoInstance65;

let ProtoInstance67 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance67.name = "cyl";
ProtoInstance67.DEF = "linkA";
let fieldValue68 = browser.currentScene.createNode("fieldValue");
fieldValue68.name = "set_positionA";
fieldValue68.value = "0 0 0";
ProtoInstance67.fieldValue = new MFNode();

ProtoInstance67.fieldValue[0] = fieldValue68;

let fieldValue69 = browser.currentScene.createNode("fieldValue");
fieldValue69.name = "set_positionB";
fieldValue69.value = "50 50 50";
ProtoInstance67.fieldValue[1] = fieldValue69;

Transform57.children[5] = ProtoInstance67;

let ProtoInstance70 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance70.name = "cyl";
ProtoInstance70.DEF = "linkB";
let fieldValue71 = browser.currentScene.createNode("fieldValue");
fieldValue71.name = "set_positionA";
fieldValue71.value = "0 0 0";
ProtoInstance70.fieldValue = new MFNode();

ProtoInstance70.fieldValue[0] = fieldValue71;

let fieldValue72 = browser.currentScene.createNode("fieldValue");
fieldValue72.name = "set_positionB";
fieldValue72.value = "-50 -50 -50";
ProtoInstance70.fieldValue[1] = fieldValue72;

Transform57.children[6] = ProtoInstance70;

let ProtoInstance73 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance73.name = "cyl";
ProtoInstance73.DEF = "linkC";
let fieldValue74 = browser.currentScene.createNode("fieldValue");
fieldValue74.name = "set_positionA";
fieldValue74.value = "50 50 50";
ProtoInstance73.fieldValue = new MFNode();

ProtoInstance73.fieldValue[0] = fieldValue74;

let fieldValue75 = browser.currentScene.createNode("fieldValue");
fieldValue75.name = "set_positionB";
fieldValue75.value = "50 50 -50";
ProtoInstance73.fieldValue[1] = fieldValue75;

Transform57.children[7] = ProtoInstance73;

browser.currentScene.children[2] = Transform57;

let Script76 = browser.currentScene.createNode("Script");
Script76.DEF = "clickHandler";
let field77 = browser.currentScene.createNode("field");
field77.name = "counter";
field77.accessType = "inputOutput";
field77.value = "0";
field77.type = "SFInt32";
Script76.field = new MFNode();

Script76.field[0] = field77;

let field78 = browser.currentScene.createNode("field");
field78.name = "node_changed";
field78.accessType = "outputOnly";
field78.type = "SFNode";
Script76.field[1] = field78;

let field79 = browser.currentScene.createNode("field");
field79.name = "add_node";
field79.accessType = "inputOnly";
field79.value = "false";
field79.type = "SFBool";
Script76.field[2] = field79;

//<field name=\"ModifiableNode\" type=\"SFNode\" accessType=\"inputOutput\"> <Transform USE=\"HoldsContent\"/> </field>

Script76.setSourceCode(`ecmascript:\n"+
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
browser.currentScene.children[3] = Script76;

let ROUTE80 = browser.currentScene.createNode("ROUTE");
ROUTE80.fromNode = "clickGenerator";
ROUTE80.fromField = "isActive";
ROUTE80.toNode = "clickHandler";
ROUTE80.toField = "add_node";
browser.currentScene.children[4] = ROUTE80;

let ROUTE81 = browser.currentScene.createNode("ROUTE");
ROUTE81.fromNode = "nodeA";
ROUTE81.fromField = "position";
ROUTE81.toNode = "linkA";
ROUTE81.toField = "set_positionA";
browser.currentScene.children[5] = ROUTE81;

let ROUTE82 = browser.currentScene.createNode("ROUTE");
ROUTE82.fromNode = "nodeB";
ROUTE82.fromField = "position";
ROUTE82.toNode = "linkA";
ROUTE82.toField = "set_positionB";
browser.currentScene.children[6] = ROUTE82;

let ROUTE83 = browser.currentScene.createNode("ROUTE");
ROUTE83.fromNode = "nodeA";
ROUTE83.fromField = "position";
ROUTE83.toNode = "linkB";
ROUTE83.toField = "set_positionA";
browser.currentScene.children[7] = ROUTE83;

let ROUTE84 = browser.currentScene.createNode("ROUTE");
ROUTE84.fromNode = "nodeC";
ROUTE84.fromField = "position";
ROUTE84.toNode = "linkB";
ROUTE84.toField = "set_positionB";
browser.currentScene.children[8] = ROUTE84;

let ROUTE85 = browser.currentScene.createNode("ROUTE");
ROUTE85.fromNode = "nodeA";
ROUTE85.fromField = "position";
ROUTE85.toNode = "linkC";
ROUTE85.toField = "set_positionA";
browser.currentScene.children[9] = ROUTE85;

let ROUTE86 = browser.currentScene.createNode("ROUTE");
ROUTE86.fromNode = "nodeD";
ROUTE86.fromField = "position";
ROUTE86.toNode = "linkC";
ROUTE86.toField = "set_positionB";
browser.currentScene.children[10] = ROUTE86;

