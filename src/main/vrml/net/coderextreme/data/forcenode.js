let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let ProtoDeclare2 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="node" ><ProtoInterface><field name="position" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><Group><Transform DEF="transform"><IS><connect nodeField="translation" protoField="position"></connect>
</IS>
<Shape><Sphere containerField="geometry"></Sphere>
<Appearance><Material diffuseColor="1 0 0"></Material>
</Appearance>
</Shape>
<Transform translation="1 0 1"><Shape><Text containerField="geometry" string="&quot;Node&quot;"><FontStyle justify="&quot;MIDDLE&quot; &quot;MIDDLE&quot;" size="5"></FontStyle>
</Text>
<Appearance><Material diffuseColor="0 0 1"></Material>
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
ProtoDeclare2.name = "node";
let ProtoInterface3 = browser.currentScene.createNode("ProtoInterface");
let field4 = browser.currentScene.createNode("field");
field4.name = "position";
field4.accessType = "inputOutput";
field4.type = "SFVec3f";
field4.value = "0 0 0";
ProtoInterface3.field = new MFNode();

ProtoInterface3.field[0] = field4;

ProtoDeclare2.protoInterface = ProtoInterface3;

let ProtoBody5 = browser.currentScene.createNode("ProtoBody");
let Group6 = browser.currentScene.createNode("Group");
let Transform7 = browser.currentScene.createNode("Transform");
Transform7.DEF = "transform";
let IS8 = browser.currentScene.createNode("IS");
let connect9 = browser.currentScene.createNode("connect");
connect9.nodeField = "translation";
connect9.protoField = "position";
IS8.connect = new MFNode();

IS8.connect[0] = connect9;

Transform7.iS = IS8;

let Shape10 = browser.currentScene.createNode("Shape");
let Sphere11 = browser.currentScene.createNode("Sphere");
Shape10.geometry = Sphere11;

let Appearance12 = browser.currentScene.createNode("Appearance");
let Material13 = browser.currentScene.createNode("Material");
Material13.diffuseColor = new SFColor(new float[1,0,0]);
Appearance12.material = Material13;

Shape10.appearance = Appearance12;

Transform7.children = new MFNode();

Transform7.children[0] = Shape10;

let Transform14 = browser.currentScene.createNode("Transform");
Transform14.translation = new SFVec3f(new float[1,0,1]);
let Shape15 = browser.currentScene.createNode("Shape");
let Text16 = browser.currentScene.createNode("Text");
Text16.string = new MFString(new java.lang.String["Node"]);
let FontStyle17 = browser.currentScene.createNode("FontStyle");
FontStyle17.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle17.size = 5;
Text16.fontStyle = FontStyle17;

Shape15.geometry = Text16;

let Appearance18 = browser.currentScene.createNode("Appearance");
let Material19 = browser.currentScene.createNode("Material");
Material19.diffuseColor = new SFColor(new float[0,0,1]);
Appearance18.material = Material19;

Shape15.appearance = Appearance18;

Transform14.children = new MFNode();

Transform14.children[0] = Shape15;

Transform7.children[1] = Transform14;

Group6.children = new MFNode();

Group6.children[0] = Transform7;

let PositionInterpolator20 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator20.DEF = "NodePosition";
PositionInterpolator20.key = new MFFloat(new float[0,1]);
PositionInterpolator20.keyValue = new MFVec3f(new float[0,0,0,0,5,0]);
Group6.children[1] = PositionInterpolator20;

let Script21 = browser.currentScene.createNode("Script");
Script21.DEF = "MoveBall";
let field22 = browser.currentScene.createNode("field");
field22.name = "translation";
field22.accessType = "inputOutput";
field22.type = "SFVec3f";
field22.value = "50 50 0";
Script21.field = new MFNode();

Script21.field[0] = field22;

let field23 = browser.currentScene.createNode("field");
field23.name = "old";
field23.accessType = "inputOutput";
field23.type = "SFVec3f";
field23.value = "0 0 0";
Script21.field[1] = field23;

let field24 = browser.currentScene.createNode("field");
field24.name = "set_cycle";
field24.accessType = "inputOnly";
field24.type = "SFTime";
Script21.field[2] = field24;

let field25 = browser.currentScene.createNode("field");
field25.name = "keyValue";
field25.accessType = "outputOnly";
field25.type = "MFVec3f";
Script21.field[3] = field25;


Script21.setSourceCode(`ecmascript:\n"+
"					function set_cycle(value) {\n"+
"                                                old = translation;\n"+
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"                                                keyValue = new MFVec3f([old, translation]);\n"+
"						// Browser.println(translation);\n"+
"					}`)
Group6.children[2] = Script21;

let TimeSensor26 = browser.currentScene.createNode("TimeSensor");
TimeSensor26.DEF = "nodeClock";
TimeSensor26.cycleInterval = 3;
TimeSensor26.loop = True;
Group6.children[3] = TimeSensor26;

let ROUTE27 = browser.currentScene.createNode("ROUTE");
ROUTE27.fromNode = "nodeClock";
ROUTE27.fromField = "cycleTime";
ROUTE27.toNode = "MoveBall";
ROUTE27.toField = "set_cycle";
Group6.children[4] = ROUTE27;

let ROUTE28 = browser.currentScene.createNode("ROUTE");
ROUTE28.fromNode = "nodeClock";
ROUTE28.fromField = "fraction_changed";
ROUTE28.toNode = "NodePosition";
ROUTE28.toField = "set_fraction";
Group6.children[5] = ROUTE28;

let ROUTE29 = browser.currentScene.createNode("ROUTE");
ROUTE29.fromNode = "MoveBall";
ROUTE29.fromField = "keyValue";
ROUTE29.toNode = "NodePosition";
ROUTE29.toField = "keyValue";
Group6.children[6] = ROUTE29;

let ROUTE30 = browser.currentScene.createNode("ROUTE");
ROUTE30.fromNode = "NodePosition";
ROUTE30.fromField = "value_changed";
ROUTE30.toNode = "transform";
ROUTE30.toField = "set_translation";
Group6.children[7] = ROUTE30;

ProtoBody5.children = new MFNode();

ProtoBody5.children[0] = Group6;

ProtoDeclare2.protoBody = ProtoBody5;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ProtoDeclare2;

let ProtoDeclare31 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="cylinder" ><ProtoInterface><field name="set_positionA" accessType="inputOnly" type="SFVec3f"></field>
<field name="set_positionB" accessType="inputOnly" type="SFVec3f"></field>
</ProtoInterface>
<ProtoBody><Group><Shape><Extrusion containerField="geometry" DEF="extrusion" creaseAngle="0.785" crossSection="1 0 0.92 -0.38 0.71 -0.71 0.38 -0.92 0 -1 -0.38 -0.92 -0.71 -0.71 -0.92 -0.38 -1 0 -0.92 0.38 -0.71 0.71 -0.38 0.92 0 1 0.38 0.92 0.71 0.71 0.92 0.38 1 0" spine="0 -50 0 0 50 0"></Extrusion>
<Appearance><Material diffuseColor="0 1 0"></Material>
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
ProtoDeclare31.name = "cylinder";
let ProtoInterface32 = browser.currentScene.createNode("ProtoInterface");
let field33 = browser.currentScene.createNode("field");
field33.name = "set_positionA";
field33.accessType = "inputOnly";
field33.type = "SFVec3f";
ProtoInterface32.field = new MFNode();

ProtoInterface32.field[0] = field33;

let field34 = browser.currentScene.createNode("field");
field34.name = "set_positionB";
field34.accessType = "inputOnly";
field34.type = "SFVec3f";
ProtoInterface32.field[1] = field34;

ProtoDeclare31.protoInterface = ProtoInterface32;

let ProtoBody35 = browser.currentScene.createNode("ProtoBody");
let Group36 = browser.currentScene.createNode("Group");
let Shape37 = browser.currentScene.createNode("Shape");
let Extrusion38 = browser.currentScene.createNode("Extrusion");
Extrusion38.DEF = "extrusion";
Extrusion38.creaseAngle = 0.785;
Extrusion38.crossSection = new MFVec2f(new float[1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]);
Extrusion38.spine = new MFVec3f(new float[0,-50,0,0,50,0]);
Shape37.geometry = Extrusion38;

let Appearance39 = browser.currentScene.createNode("Appearance");
let Material40 = browser.currentScene.createNode("Material");
Material40.diffuseColor = new SFColor(new float[0,1,0]);
Appearance39.material = Material40;

Shape37.appearance = Appearance39;

Group36.children = new MFNode();

Group36.children[0] = Shape37;

let Script41 = browser.currentScene.createNode("Script");
Script41.DEF = "MoveCylinder";
let field42 = browser.currentScene.createNode("field");
field42.name = "spine";
field42.accessType = "inputOutput";
field42.type = "MFVec3f";
field42.value = "0 -50 0 0 50 0";
Script41.field = new MFNode();

Script41.field[0] = field42;

let field43 = browser.currentScene.createNode("field");
field43.name = "set_endA";
field43.accessType = "inputOnly";
field43.type = "SFVec3f";
Script41.field[1] = field43;

let field44 = browser.currentScene.createNode("field");
field44.name = "set_endB";
field44.accessType = "inputOnly";
field44.type = "SFVec3f";
Script41.field[2] = field44;

let IS45 = browser.currentScene.createNode("IS");
let connect46 = browser.currentScene.createNode("connect");
connect46.nodeField = "set_endA";
connect46.protoField = "set_positionA";
IS45.connect = new MFNode();

IS45.connect[0] = connect46;

let connect47 = browser.currentScene.createNode("connect");
connect47.nodeField = "set_endB";
connect47.protoField = "set_positionB";
IS45.connect[1] = connect47;

Script41.iS = IS45;


Script41.setSourceCode(`ecmascript:\n"+
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
Group36.children[1] = Script41;

let ROUTE48 = browser.currentScene.createNode("ROUTE");
ROUTE48.fromNode = "MoveCylinder";
ROUTE48.fromField = "spine";
ROUTE48.toNode = "extrusion";
ROUTE48.toField = "set_spine";
Group36.children[2] = ROUTE48;

ProtoBody35.children = new MFNode();

ProtoBody35.children[0] = Group36;

ProtoDeclare31.protoBody = ProtoBody35;

browser.currentScene.children[1] = ProtoDeclare31;

let Transform49 = browser.currentScene.createNode("Transform");
Transform49.DEF = "HoldsContent";
Transform49.scale = new SFVec3f(new float[0.1,0.1,0.1]);
let PlaneSensor50 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor50.DEF = "clickGenerator";
PlaneSensor50.minPosition = new SFVec2f(new float[-50,-50]);
PlaneSensor50.maxPosition = new SFVec2f(new float[50,50]);
PlaneSensor50.description = "click on background to add nodes, click on nodes to add links";
Transform49.children = new MFNode();

Transform49.children[0] = PlaneSensor50;

let ProtoInstance51 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance51.name = "node";
ProtoInstance51.DEF = "nodeA";
let fieldValue52 = browser.currentScene.createNode("fieldValue");
fieldValue52.name = "position";
fieldValue52.value = "0 0 0";
ProtoInstance51.fieldValue = new MFNode();

ProtoInstance51.fieldValue[0] = fieldValue52;

Transform49.children[1] = ProtoInstance51;

let ProtoInstance53 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance53.name = "node";
ProtoInstance53.DEF = "nodeB";
let fieldValue54 = browser.currentScene.createNode("fieldValue");
fieldValue54.name = "position";
fieldValue54.value = "50 50 50";
ProtoInstance53.fieldValue = new MFNode();

ProtoInstance53.fieldValue[0] = fieldValue54;

Transform49.children[2] = ProtoInstance53;

let ProtoInstance55 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance55.name = "node";
ProtoInstance55.DEF = "nodeC";
let fieldValue56 = browser.currentScene.createNode("fieldValue");
fieldValue56.name = "position";
fieldValue56.value = "-50 -50 -50";
ProtoInstance55.fieldValue = new MFNode();

ProtoInstance55.fieldValue[0] = fieldValue56;

Transform49.children[3] = ProtoInstance55;

let ProtoInstance57 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance57.name = "node";
ProtoInstance57.DEF = "nodeD";
let fieldValue58 = browser.currentScene.createNode("fieldValue");
fieldValue58.name = "position";
fieldValue58.value = "50 50 -50";
ProtoInstance57.fieldValue = new MFNode();

ProtoInstance57.fieldValue[0] = fieldValue58;

Transform49.children[4] = ProtoInstance57;

let ProtoInstance59 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance59.name = "cylinder";
ProtoInstance59.DEF = "linkA";
let fieldValue60 = browser.currentScene.createNode("fieldValue");
fieldValue60.name = "set_positionA";
fieldValue60.value = "0 0 0";
ProtoInstance59.fieldValue = new MFNode();

ProtoInstance59.fieldValue[0] = fieldValue60;

let fieldValue61 = browser.currentScene.createNode("fieldValue");
fieldValue61.name = "set_positionB";
fieldValue61.value = "50 50 50";
ProtoInstance59.fieldValue[1] = fieldValue61;

Transform49.children[5] = ProtoInstance59;

let ProtoInstance62 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance62.name = "cylinder";
ProtoInstance62.DEF = "linkB";
let fieldValue63 = browser.currentScene.createNode("fieldValue");
fieldValue63.name = "set_positionA";
fieldValue63.value = "0 0 0";
ProtoInstance62.fieldValue = new MFNode();

ProtoInstance62.fieldValue[0] = fieldValue63;

let fieldValue64 = browser.currentScene.createNode("fieldValue");
fieldValue64.name = "set_positionB";
fieldValue64.value = "-50 -50 -50";
ProtoInstance62.fieldValue[1] = fieldValue64;

Transform49.children[6] = ProtoInstance62;

let ProtoInstance65 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance65.name = "cylinder";
ProtoInstance65.DEF = "linkC";
let fieldValue66 = browser.currentScene.createNode("fieldValue");
fieldValue66.name = "set_positionA";
fieldValue66.value = "50 50 50";
ProtoInstance65.fieldValue = new MFNode();

ProtoInstance65.fieldValue[0] = fieldValue66;

let fieldValue67 = browser.currentScene.createNode("fieldValue");
fieldValue67.name = "set_positionB";
fieldValue67.value = "50 50 -50";
ProtoInstance65.fieldValue[1] = fieldValue67;

Transform49.children[7] = ProtoInstance65;

browser.currentScene.children[2] = Transform49;

let Script68 = browser.currentScene.createNode("Script");
Script68.DEF = "clickHandler";
let field69 = browser.currentScene.createNode("field");
field69.name = "counter";
field69.accessType = "inputOutput";
field69.value = "0";
field69.type = "SFInt32";
Script68.field = new MFNode();

Script68.field[0] = field69;

let field70 = browser.currentScene.createNode("field");
field70.name = "node_changed";
field70.accessType = "outputOnly";
field70.type = "SFNode";
Script68.field[1] = field70;

let field71 = browser.currentScene.createNode("field");
field71.name = "add_node";
field71.accessType = "inputOnly";
field71.value = "false";
field71.type = "SFBool";
Script68.field[2] = field71;

//<field name=\"ModifiableNode\" type=\"SFNode\" accessType=\"inputOutput\"> <Transform USE=\"HoldsContent\"/> </field>

Script68.setSourceCode(`ecmascript:\n"+
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
browser.currentScene.children[3] = Script68;

let ROUTE72 = browser.currentScene.createNode("ROUTE");
ROUTE72.fromNode = "clickGenerator";
ROUTE72.fromField = "isActive";
ROUTE72.toNode = "clickHandler";
ROUTE72.toField = "add_node";
browser.currentScene.children[4] = ROUTE72;

let ROUTE73 = browser.currentScene.createNode("ROUTE");
ROUTE73.fromNode = "nodeA";
ROUTE73.fromField = "position";
ROUTE73.toNode = "linkA";
ROUTE73.toField = "set_positionA";
browser.currentScene.children[5] = ROUTE73;

let ROUTE74 = browser.currentScene.createNode("ROUTE");
ROUTE74.fromNode = "nodeB";
ROUTE74.fromField = "position";
ROUTE74.toNode = "linkA";
ROUTE74.toField = "set_positionB";
browser.currentScene.children[6] = ROUTE74;

let ROUTE75 = browser.currentScene.createNode("ROUTE");
ROUTE75.fromNode = "nodeA";
ROUTE75.fromField = "position";
ROUTE75.toNode = "linkB";
ROUTE75.toField = "set_positionA";
browser.currentScene.children[7] = ROUTE75;

let ROUTE76 = browser.currentScene.createNode("ROUTE");
ROUTE76.fromNode = "nodeC";
ROUTE76.fromField = "position";
ROUTE76.toNode = "linkB";
ROUTE76.toField = "set_positionB";
browser.currentScene.children[8] = ROUTE76;

let ROUTE77 = browser.currentScene.createNode("ROUTE");
ROUTE77.fromNode = "nodeA";
ROUTE77.fromField = "position";
ROUTE77.toNode = "linkC";
ROUTE77.toField = "set_positionA";
browser.currentScene.children[9] = ROUTE77;

let ROUTE78 = browser.currentScene.createNode("ROUTE");
ROUTE78.fromNode = "nodeD";
ROUTE78.fromField = "position";
ROUTE78.toNode = "linkC";
ROUTE78.toField = "set_positionB";
browser.currentScene.children[10] = ROUTE78;

