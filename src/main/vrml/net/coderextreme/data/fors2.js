let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let ProtoDeclare2 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="node" ><ProtoInterface><field name="position" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><Transform DEF="transform"><IS><connect nodeField="translation" protoField="position"></connect>
</IS>
<Shape><!--comment before Sphere--><!--comment after Sphere--><!--comment after Appearance--><Sphere containerField="geometry"></Sphere>
<Appearance><!--comment before Material--><!--comment after Material--><Material diffuseColor="1 0 0"></Material>
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
                                                keyValue = new MFVec3f([old, translation]);
						// Browser.println(translation);
					}]]></Script>
<TimeSensor DEF="nodeClock" cycleInterval="3" loop="true"></TimeSensor>
<ROUTE fromNode="nodeClock" fromField="cycleTime" toNode="MoveBall" toField="set_cycle"></ROUTE>
<ROUTE fromNode="nodeClock" fromField="fraction_changed" toNode="NodePosition" toField="set_fraction"></ROUTE>
<ROUTE fromNode="MoveBall" fromField="keyValue" toNode="NodePosition" toField="keyValue"></ROUTE>
<ROUTE fromNode="NodePosition" fromField="value_changed" toNode="transform" toField="set_translation"></ROUTE>
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
let Transform6 = browser.currentScene.createNode("Transform");
Transform6.DEF = "transform";
let IS7 = browser.currentScene.createNode("IS");
let connect8 = browser.currentScene.createNode("connect");
connect8.nodeField = "translation";
connect8.protoField = "position";
IS7.connect = new MFNode();

IS7.connect[0] = connect8;

Transform6.iS = IS7;

let Shape9 = browser.currentScene.createNode("Shape");
//comment before Sphere
//comment after Sphere
//comment after Appearance
let Sphere10 = browser.currentScene.createNode("Sphere");
Shape9.geometry = Sphere10;

let Appearance11 = browser.currentScene.createNode("Appearance");
//comment before Material
//comment after Material
let Material12 = browser.currentScene.createNode("Material");
Material12.diffuseColor = new SFColor(new float[1,0,0]);
Appearance11.material = Material12;

Shape9.appearance = Appearance11;

Transform6.children = new MFNode();

Transform6.children[0] = Shape9;

ProtoBody5.children = new MFNode();

ProtoBody5.children[0] = Transform6;

let PositionInterpolator13 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator13.DEF = "NodePosition";
PositionInterpolator13.key = new MFFloat(new float[0,1]);
PositionInterpolator13.keyValue = new MFVec3f(new float[0,0,0,0,5,0]);
ProtoBody5.children[1] = PositionInterpolator13;

let Script14 = browser.currentScene.createNode("Script");
Script14.DEF = "MoveBall";
let field15 = browser.currentScene.createNode("field");
field15.name = "translation";
field15.accessType = "inputOutput";
field15.type = "SFVec3f";
field15.value = "50 50 0";
Script14.field = new MFNode();

Script14.field[0] = field15;

let field16 = browser.currentScene.createNode("field");
field16.name = "old";
field16.accessType = "inputOutput";
field16.type = "SFVec3f";
field16.value = "0 0 0";
Script14.field[1] = field16;

let field17 = browser.currentScene.createNode("field");
field17.name = "set_cycle";
field17.accessType = "inputOnly";
field17.type = "SFTime";
Script14.field[2] = field17;

let field18 = browser.currentScene.createNode("field");
field18.name = "keyValue";
field18.accessType = "outputOnly";
field18.type = "MFVec3f";
Script14.field[3] = field18;


Script14.setSourceCode(`ecmascript:\n"+
"					function set_cycle(value) {\n"+
"                                                old = translation;\n"+
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"                                                keyValue = new MFVec3f([old, translation]);\n"+
"						// Browser.println(translation);\n"+
"					}`)
ProtoBody5.children[2] = Script14;

let TimeSensor19 = browser.currentScene.createNode("TimeSensor");
TimeSensor19.DEF = "nodeClock";
TimeSensor19.cycleInterval = 3;
TimeSensor19.loop = True;
ProtoBody5.children[3] = TimeSensor19;

let ROUTE20 = browser.currentScene.createNode("ROUTE");
ROUTE20.fromNode = "nodeClock";
ROUTE20.fromField = "cycleTime";
ROUTE20.toNode = "MoveBall";
ROUTE20.toField = "set_cycle";
ProtoBody5.children[4] = ROUTE20;

let ROUTE21 = browser.currentScene.createNode("ROUTE");
ROUTE21.fromNode = "nodeClock";
ROUTE21.fromField = "fraction_changed";
ROUTE21.toNode = "NodePosition";
ROUTE21.toField = "set_fraction";
ProtoBody5.children[5] = ROUTE21;

let ROUTE22 = browser.currentScene.createNode("ROUTE");
ROUTE22.fromNode = "MoveBall";
ROUTE22.fromField = "keyValue";
ROUTE22.toNode = "NodePosition";
ROUTE22.toField = "keyValue";
ProtoBody5.children[6] = ROUTE22;

let ROUTE23 = browser.currentScene.createNode("ROUTE");
ROUTE23.fromNode = "NodePosition";
ROUTE23.fromField = "value_changed";
ROUTE23.toNode = "transform";
ROUTE23.toField = "set_translation";
ProtoBody5.children[7] = ROUTE23;

ProtoDeclare2.protoBody = ProtoBody5;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ProtoDeclare2;

let ProtoDeclare24 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="cylinder" ><ProtoInterface><field name="positionA" accessType="inputOnly" type="SFVec3f"></field>
<field name="positionB" accessType="inputOnly" type="SFVec3f"></field>
</ProtoInterface>
<ProtoBody><Shape><Extrusion containerField="geometry" DEF="extrusion" creaseAngle="0.785" crossSection="1 0 0.92 -0.38 0.71 -0.71 0.38 -0.92 0 -1 -0.38 -0.92 -0.71 -0.71 -0.92 -0.38 -1 0 -0.92 0.38 -0.71 0.71 -0.38 0.92 0 1 0.38 0.92 0.71 0.71 0.92 0.38 1 0" spine="0 -50 0 0 0 0 0 50 0"></Extrusion>
<Appearance><Material diffuseColor="0 1 0"></Material>
</Appearance>
</Shape>
<Script DEF="MoveCylinder"><field name="spine" accessType="inputOutput" type="MFVec3f" value="0 -50 0 0 0 0 0 50 0"></field>
<field name="set_endA" accessType="inputOnly" type="SFVec3f"></field>
<field name="set_endB" accessType="inputOnly" type="SFVec3f"></field>
<IS><connect nodeField="set_endA" protoField="positionA"></connect>
<connect nodeField="set_endB" protoField="positionB"></connect>
</IS>
<![CDATA[ecmascript:

                function set_endA(value) {
		    if (typeof spine === "undefined") {
		        spine = new MFVec3f([value, value]);
		    } else {
		        spine = new MFVec3f([value, spine[1]]);
		    }
                }

                function set_endB(value) {
		    if (typeof spine === "undefined") {
		        spine = new MFVec3f([value, value]);
		    } else {
		        spine = new MFVec3f([spine[0], value]);
		    }
                }

                function set_spine(value) {
		    Browser.print('\n'+'"');
                    spine = value;
                }]]></Script>
<ROUTE fromNode="MoveCylinder" fromField="spine" toNode="extrusion" toField="set_spine"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare24.name = "cylinder";
let ProtoInterface25 = browser.currentScene.createNode("ProtoInterface");
let field26 = browser.currentScene.createNode("field");
field26.name = "positionA";
field26.accessType = "inputOnly";
field26.type = "SFVec3f";
ProtoInterface25.field = new MFNode();

ProtoInterface25.field[0] = field26;

let field27 = browser.currentScene.createNode("field");
field27.name = "positionB";
field27.accessType = "inputOnly";
field27.type = "SFVec3f";
ProtoInterface25.field[1] = field27;

ProtoDeclare24.protoInterface = ProtoInterface25;

let ProtoBody28 = browser.currentScene.createNode("ProtoBody");
let Shape29 = browser.currentScene.createNode("Shape");
let Extrusion30 = browser.currentScene.createNode("Extrusion");
Extrusion30.DEF = "extrusion";
Extrusion30.creaseAngle = 0.785;
Extrusion30.crossSection = new MFVec2f(new float[1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]);
Extrusion30.spine = new MFVec3f(new float[0,-50,0,0,0,0,0,50,0]);
Shape29.geometry = Extrusion30;

let Appearance31 = browser.currentScene.createNode("Appearance");
let Material32 = browser.currentScene.createNode("Material");
Material32.diffuseColor = new SFColor(new float[0,1,0]);
Appearance31.material = Material32;

Shape29.appearance = Appearance31;

ProtoBody28.children = new MFNode();

ProtoBody28.children[0] = Shape29;

let Script33 = browser.currentScene.createNode("Script");
Script33.DEF = "MoveCylinder";
let field34 = browser.currentScene.createNode("field");
field34.name = "spine";
field34.accessType = "inputOutput";
field34.type = "MFVec3f";
field34.value = "0 -50 0 0 0 0 0 50 0";
Script33.field = new MFNode();

Script33.field[0] = field34;

let field35 = browser.currentScene.createNode("field");
field35.name = "set_endA";
field35.accessType = "inputOnly";
field35.type = "SFVec3f";
Script33.field[1] = field35;

let field36 = browser.currentScene.createNode("field");
field36.name = "set_endB";
field36.accessType = "inputOnly";
field36.type = "SFVec3f";
Script33.field[2] = field36;

let IS37 = browser.currentScene.createNode("IS");
let connect38 = browser.currentScene.createNode("connect");
connect38.nodeField = "set_endA";
connect38.protoField = "positionA";
IS37.connect = new MFNode();

IS37.connect[0] = connect38;

let connect39 = browser.currentScene.createNode("connect");
connect39.nodeField = "set_endB";
connect39.protoField = "positionB";
IS37.connect[1] = connect39;

Script33.iS = IS37;


Script33.setSourceCode(`ecmascript:\n"+
"\n"+
"                function set_endA(value) {\n"+
"		    if (typeof spine === \"undefined\") {\n"+
"		        spine = new MFVec3f([value, value]);\n"+
"		    } else {\n"+
"		        spine = new MFVec3f([value, spine[1]]);\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_endB(value) {\n"+
"		    if (typeof spine === \"undefined\") {\n"+
"		        spine = new MFVec3f([value, value]);\n"+
"		    } else {\n"+
"		        spine = new MFVec3f([spine[0], value]);\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_spine(value) {\n"+
"		    Browser.print('\\n'+'\"');\n"+
"                    spine = value;\n"+
"                }`)
ProtoBody28.children[1] = Script33;

let ROUTE40 = browser.currentScene.createNode("ROUTE");
ROUTE40.fromNode = "MoveCylinder";
ROUTE40.fromField = "spine";
ROUTE40.toNode = "extrusion";
ROUTE40.toField = "set_spine";
ProtoBody28.children[2] = ROUTE40;

ProtoDeclare24.protoBody = ProtoBody28;

browser.currentScene.children[1] = ProtoDeclare24;

let Transform41 = browser.currentScene.createNode("Transform");
Transform41.scale = new SFVec3f(new float[0.1,0.1,0.1]);
let ProtoInstance42 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance42.name = "node";
ProtoInstance42.DEF = "nodeA";
let fieldValue43 = browser.currentScene.createNode("fieldValue");
fieldValue43.name = "position";
fieldValue43.value = "-50 -50 -50";
ProtoInstance42.fieldValue = new MFNode();

ProtoInstance42.fieldValue[0] = fieldValue43;

Transform41.children = new MFNode();

Transform41.children[0] = ProtoInstance42;

let ProtoInstance44 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance44.name = "node";
ProtoInstance44.DEF = "nodeB";
let fieldValue45 = browser.currentScene.createNode("fieldValue");
fieldValue45.name = "position";
fieldValue45.value = "50 50 50";
ProtoInstance44.fieldValue = new MFNode();

ProtoInstance44.fieldValue[0] = fieldValue45;

Transform41.children[1] = ProtoInstance44;

let ProtoInstance46 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance46.name = "cylinder";
ProtoInstance46.DEF = "linkA";
let fieldValue47 = browser.currentScene.createNode("fieldValue");
fieldValue47.name = "positionA";
fieldValue47.value = "0 0 0";
ProtoInstance46.fieldValue = new MFNode();

ProtoInstance46.fieldValue[0] = fieldValue47;

let fieldValue48 = browser.currentScene.createNode("fieldValue");
fieldValue48.name = "positionB";
fieldValue48.value = "50 50 50";
ProtoInstance46.fieldValue[1] = fieldValue48;

Transform41.children[2] = ProtoInstance46;

browser.currentScene.children[2] = Transform41;

let ROUTE49 = browser.currentScene.createNode("ROUTE");
ROUTE49.fromNode = "nodeA";
ROUTE49.fromField = "position";
ROUTE49.toNode = "linkA";
ROUTE49.toField = "positionA";
browser.currentScene.children[3] = ROUTE49;

let ROUTE50 = browser.currentScene.createNode("ROUTE");
ROUTE50.fromNode = "nodeB";
ROUTE50.fromField = "position";
ROUTE50.toNode = "linkA";
ROUTE50.toField = "positionB";
browser.currentScene.children[4] = ROUTE50;

