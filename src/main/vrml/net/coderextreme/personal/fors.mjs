let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "creator";
meta2.content = "John W Carlson";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "created";
meta3.content = "December 13 2015";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "title";
meta4.content = "fors.x3d";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "identifier";
meta5.content = "https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "description";
meta6.content = "beginnings of a force directed graph in 3D";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "generator";
meta7.content = "Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit";
head1.meta[5] = meta7;

head = head1;

let ProtoDeclare9 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="node" ><ProtoInterface><field name="position" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><Transform DEF="transform"><IS><connect nodeField="translation" protoField="position"></connect>
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
ProtoDeclare9.name = "node";
let ProtoInterface10 = browser.currentScene.createNode("ProtoInterface");
let field11 = browser.currentScene.createNode("field");
field11.name = "position";
field11.accessType = "inputOutput";
field11.type = "SFVec3f";
field11.value = "0 0 0";
ProtoInterface10.field = new MFNode();

ProtoInterface10.field[0] = field11;

ProtoDeclare9.protoInterface = ProtoInterface10;

let ProtoBody12 = browser.currentScene.createNode("ProtoBody");
let Transform13 = browser.currentScene.createNode("Transform");
Transform13.DEF = "transform";
let IS14 = browser.currentScene.createNode("IS");
let connect15 = browser.currentScene.createNode("connect");
connect15.nodeField = "translation";
connect15.protoField = "position";
IS14.connect = new MFNode();

IS14.connect[0] = connect15;

Transform13.iS = IS14;

let Shape16 = browser.currentScene.createNode("Shape");
let Sphere17 = browser.currentScene.createNode("Sphere");
Shape16.geometry = Sphere17;

let Appearance18 = browser.currentScene.createNode("Appearance");
let Material19 = browser.currentScene.createNode("Material");
Material19.diffuseColor = new SFColor(new float[1,0,0]);
Appearance18.material = Material19;

Shape16.appearance = Appearance18;

Transform13.child = new undefined();

Transform13.child[0] = Shape16;

let Transform20 = browser.currentScene.createNode("Transform");
Transform20.translation = new SFVec3f(new float[1,0,0]);
let Shape21 = browser.currentScene.createNode("Shape");
let Text22 = browser.currentScene.createNode("Text");
Text22.string = new MFString(new java.lang.String["Node"]);
let FontStyle23 = browser.currentScene.createNode("FontStyle");
FontStyle23.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle23.size = 5;
Text22.fontStyle = FontStyle23;

Shape21.geometry = Text22;

let Appearance24 = browser.currentScene.createNode("Appearance");
let Material25 = browser.currentScene.createNode("Material");
Material25.diffuseColor = new SFColor(new float[0,0,1]);
Appearance24.material = Material25;

Shape21.appearance = Appearance24;

Transform20.child = new undefined();

Transform20.child[0] = Shape21;

Transform13.children[1] = Transform20;

ProtoBody12.children = new MFNode();

ProtoBody12.children[0] = Transform13;

let PositionInterpolator26 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator26.DEF = "NodePosition";
PositionInterpolator26.key = new MFFloat(new float[0,1]);
PositionInterpolator26.keyValue = new MFVec3f(new float[0,0,0,0,5,0]);
ProtoBody12.children[1] = PositionInterpolator26;

let Script27 = browser.currentScene.createNode("Script");
Script27.DEF = "MoveBall";
let field28 = browser.currentScene.createNode("field");
field28.name = "translation";
field28.accessType = "inputOutput";
field28.type = "SFVec3f";
field28.value = "50 50 0";
Script27.field = new MFNode();

Script27.field[0] = field28;

let field29 = browser.currentScene.createNode("field");
field29.name = "old";
field29.accessType = "inputOutput";
field29.type = "SFVec3f";
field29.value = "0 0 0";
Script27.field[1] = field29;

let field30 = browser.currentScene.createNode("field");
field30.name = "set_cycle";
field30.accessType = "inputOnly";
field30.type = "SFTime";
Script27.field[2] = field30;

let field31 = browser.currentScene.createNode("field");
field31.name = "keyValue";
field31.accessType = "outputOnly";
field31.type = "MFVec3f";
Script27.field[3] = field31;


Script27.setSourceCode(`ecmascript:\n"+
"					function set_cycle(value) {\n"+
"                                                old = translation;\n"+
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"                                                keyValue = new MFVec3f([old, translation]);\n"+
"						// Browser.println(translation);\n"+
"					}`)
ProtoBody12.children[2] = Script27;

let TimeSensor32 = browser.currentScene.createNode("TimeSensor");
TimeSensor32.DEF = "nodeClock";
TimeSensor32.cycleInterval = 3;
TimeSensor32.loop = True;
ProtoBody12.children[3] = TimeSensor32;

let ROUTE33 = browser.currentScene.createNode("ROUTE");
ROUTE33.fromNode = "nodeClock";
ROUTE33.fromField = "cycleTime";
ROUTE33.toNode = "MoveBall";
ROUTE33.toField = "set_cycle";
ProtoBody12.children[4] = ROUTE33;

let ROUTE34 = browser.currentScene.createNode("ROUTE");
ROUTE34.fromNode = "nodeClock";
ROUTE34.fromField = "fraction_changed";
ROUTE34.toNode = "NodePosition";
ROUTE34.toField = "set_fraction";
ProtoBody12.children[5] = ROUTE34;

let ROUTE35 = browser.currentScene.createNode("ROUTE");
ROUTE35.fromNode = "MoveBall";
ROUTE35.fromField = "keyValue";
ROUTE35.toNode = "NodePosition";
ROUTE35.toField = "keyValue";
ProtoBody12.children[6] = ROUTE35;

let ROUTE36 = browser.currentScene.createNode("ROUTE");
ROUTE36.fromNode = "NodePosition";
ROUTE36.fromField = "value_changed";
ROUTE36.toNode = "transform";
ROUTE36.toField = "set_translation";
ProtoBody12.children[7] = ROUTE36;

ProtoDeclare9.protoBody = ProtoBody12;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ProtoDeclare9;

let ProtoDeclare37 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="cylinder" ><ProtoInterface><field name="set_positionA" accessType="inputOnly" type="SFVec3f"></field>
<field name="set_positionB" accessType="inputOnly" type="SFVec3f"></field>
</ProtoInterface>
<ProtoBody><Shape><Extrusion DEF="extrusion" creaseAngle="0.785" crossSection="1 0 0.92 -0.38 0.71 -0.71 0.38 -0.92 0 -1 -0.38 -0.92 -0.71 -0.71 -0.92 -0.38 -1 0 -0.92 0.38 -0.71 0.71 -0.38 0.92 0 1 0.38 0.92 0.71 0.71 0.92 0.38 1 0" spine="0 -50 0 0 50 0"></Extrusion>
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
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare37.name = "cylinder";
let ProtoInterface38 = browser.currentScene.createNode("ProtoInterface");
let field39 = browser.currentScene.createNode("field");
field39.name = "set_positionA";
field39.accessType = "inputOnly";
field39.type = "SFVec3f";
ProtoInterface38.field = new MFNode();

ProtoInterface38.field[0] = field39;

let field40 = browser.currentScene.createNode("field");
field40.name = "set_positionB";
field40.accessType = "inputOnly";
field40.type = "SFVec3f";
ProtoInterface38.field[1] = field40;

ProtoDeclare37.protoInterface = ProtoInterface38;

let ProtoBody41 = browser.currentScene.createNode("ProtoBody");
let Shape42 = browser.currentScene.createNode("Shape");
let Extrusion43 = browser.currentScene.createNode("Extrusion");
Extrusion43.DEF = "extrusion";
Extrusion43.creaseAngle = 0.785;
Extrusion43.crossSection = new MFVec2f(new float[1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]);
Extrusion43.spine = new MFVec3f(new float[0,-50,0,0,50,0]);
Shape42.geometry = Extrusion43;

let Appearance44 = browser.currentScene.createNode("Appearance");
let Material45 = browser.currentScene.createNode("Material");
Material45.diffuseColor = new SFColor(new float[0,1,0]);
Appearance44.material = Material45;

Shape42.appearance = Appearance44;

ProtoBody41.children = new MFNode();

ProtoBody41.children[0] = Shape42;

let Script46 = browser.currentScene.createNode("Script");
Script46.DEF = "MoveCylinder";
let field47 = browser.currentScene.createNode("field");
field47.name = "spine";
field47.accessType = "inputOutput";
field47.type = "MFVec3f";
field47.value = "0 -50 0 0 50 0";
Script46.field = new MFNode();

Script46.field[0] = field47;

let field48 = browser.currentScene.createNode("field");
field48.name = "set_endA";
field48.accessType = "inputOnly";
field48.type = "SFVec3f";
Script46.field[1] = field48;

let field49 = browser.currentScene.createNode("field");
field49.name = "set_endB";
field49.accessType = "inputOnly";
field49.type = "SFVec3f";
Script46.field[2] = field49;

let IS50 = browser.currentScene.createNode("IS");
let connect51 = browser.currentScene.createNode("connect");
connect51.nodeField = "set_endA";
connect51.protoField = "set_positionA";
IS50.connect = new MFNode();

IS50.connect[0] = connect51;

let connect52 = browser.currentScene.createNode("connect");
connect52.nodeField = "set_endB";
connect52.protoField = "set_positionB";
IS50.connect[1] = connect52;

Script46.iS = IS50;


Script46.setSourceCode(`ecmascript:\n"+
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
ProtoBody41.children[1] = Script46;

let ROUTE53 = browser.currentScene.createNode("ROUTE");
ROUTE53.fromNode = "MoveCylinder";
ROUTE53.fromField = "spine";
ROUTE53.toNode = "extrusion";
ROUTE53.toField = "set_spine";
ProtoBody41.children[2] = ROUTE53;

ProtoDeclare37.protoBody = ProtoBody41;

browser.currentScene.children[1] = ProtoDeclare37;

let Transform54 = browser.currentScene.createNode("Transform");
Transform54.DEF = "HoldsContent";
Transform54.scale = new SFVec3f(new float[0.1,0.1,0.1]);
let PlaneSensor55 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor55.DEF = "clickGenerator";
PlaneSensor55.minPosition = new SFVec2f(new float[-50,-50]);
PlaneSensor55.maxPosition = new SFVec2f(new float[50,50]);
PlaneSensor55.description = "click on background to add nodes, click on nodes to add links";
Transform54.children = new MFNode();

Transform54.children[0] = PlaneSensor55;

let ProtoInstance56 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance56.name = "node";
ProtoInstance56.DEF = "nodeA";
let fieldValue57 = browser.currentScene.createNode("fieldValue");
fieldValue57.name = "position";
fieldValue57.value = "0 0 0";
ProtoInstance56.fieldValue = new MFNode();

ProtoInstance56.fieldValue[0] = fieldValue57;

Transform54.children[1] = ProtoInstance56;

let ProtoInstance58 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance58.name = "node";
ProtoInstance58.DEF = "nodeB";
let fieldValue59 = browser.currentScene.createNode("fieldValue");
fieldValue59.name = "position";
fieldValue59.value = "50 50 50";
ProtoInstance58.fieldValue = new MFNode();

ProtoInstance58.fieldValue[0] = fieldValue59;

Transform54.children[2] = ProtoInstance58;

let ProtoInstance60 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance60.name = "cylinder";
ProtoInstance60.DEF = "linkA";
let fieldValue61 = browser.currentScene.createNode("fieldValue");
fieldValue61.name = "set_positionA";
fieldValue61.value = "0 0 0";
ProtoInstance60.fieldValue = new MFNode();

ProtoInstance60.fieldValue[0] = fieldValue61;

let fieldValue62 = browser.currentScene.createNode("fieldValue");
fieldValue62.name = "set_positionB";
fieldValue62.value = "50 50 50";
ProtoInstance60.fieldValue[1] = fieldValue62;

Transform54.children[3] = ProtoInstance60;

browser.currentScene.children[2] = Transform54;

let ROUTE63 = browser.currentScene.createNode("ROUTE");
ROUTE63.fromNode = "nodeA";
ROUTE63.fromField = "position";
ROUTE63.toNode = "linkA";
ROUTE63.toField = "set_positionA";
browser.currentScene.children[3] = ROUTE63;

let ROUTE64 = browser.currentScene.createNode("ROUTE");
ROUTE64.fromNode = "nodeB";
ROUTE64.fromField = "position";
ROUTE64.toNode = "linkA";
ROUTE64.toField = "set_positionB";
browser.currentScene.children[4] = ROUTE64;

