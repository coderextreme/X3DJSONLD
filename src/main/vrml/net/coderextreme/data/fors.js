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
meta5.content = "https://coderextreme.net/X3DJSONLD/force.x3d";
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
<Shape><Sphere containerField="geometry"></Sphere>
<Appearance><Material diffuseColor="1 0 0"></Material>
</Appearance>
</Shape>
<Transform translation="1 0 0"><Shape><Text containerField="geometry" string="&quot;Node&quot;"><FontStyle justify="&quot;MIDDLE&quot; &quot;MIDDLE&quot;" size="5"></FontStyle>
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
<#sourceCode/>
</Script>
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

Transform13.children = new MFNode();

Transform13.children[0] = Shape16;

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

Transform20.children = new MFNode();

Transform20.children[0] = Shape21;

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

let #sourceCode32 = browser.currentScene.createNode("#sourceCode");
Script27.#sourceCode[4] = #sourceCode32;

ProtoBody12.children[2] = Script27;

let TimeSensor33 = browser.currentScene.createNode("TimeSensor");
TimeSensor33.DEF = "nodeClock";
TimeSensor33.cycleInterval = 3;
TimeSensor33.loop = True;
ProtoBody12.children[3] = TimeSensor33;

let ROUTE34 = browser.currentScene.createNode("ROUTE");
ROUTE34.fromNode = "nodeClock";
ROUTE34.fromField = "cycleTime";
ROUTE34.toNode = "MoveBall";
ROUTE34.toField = "set_cycle";
ProtoBody12.children[4] = ROUTE34;

let ROUTE35 = browser.currentScene.createNode("ROUTE");
ROUTE35.fromNode = "nodeClock";
ROUTE35.fromField = "fraction_changed";
ROUTE35.toNode = "NodePosition";
ROUTE35.toField = "set_fraction";
ProtoBody12.children[5] = ROUTE35;

let ROUTE36 = browser.currentScene.createNode("ROUTE");
ROUTE36.fromNode = "MoveBall";
ROUTE36.fromField = "keyValue";
ROUTE36.toNode = "NodePosition";
ROUTE36.toField = "keyValue";
ProtoBody12.children[6] = ROUTE36;

let ROUTE37 = browser.currentScene.createNode("ROUTE");
ROUTE37.fromNode = "NodePosition";
ROUTE37.fromField = "value_changed";
ROUTE37.toNode = "transform";
ROUTE37.toField = "set_translation";
ProtoBody12.children[7] = ROUTE37;

ProtoDeclare9.protoBody = ProtoBody12;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ProtoDeclare9;

let ProtoDeclare38 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="cylinder" ><ProtoInterface><field name="set_positionA" accessType="inputOnly" type="SFVec3f"></field>
<field name="set_positionB" accessType="inputOnly" type="SFVec3f"></field>
</ProtoInterface>
<ProtoBody><Shape><Extrusion containerField="geometry" DEF="extrusion" creaseAngle="0.785" crossSection="1 0 0.92 -0.38 0.71 -0.71 0.38 -0.92 0 -1 -0.38 -0.92 -0.71 -0.71 -0.92 -0.38 -1 0 -0.92 0.38 -0.71 0.71 -0.38 0.92 0 1 0.38 0.92 0.71 0.71 0.92 0.38 1 0" spine="0 -50 0 0 50 0"></Extrusion>
<Appearance><Material diffuseColor="0 1 0"></Material>
</Appearance>
</Shape>
<Script DEF="MoveCylinder"><field name="spine" accessType="inputOutput" type="MFVec3f" value="0 -50 0 0 50 0"></field>
<field name="set_endA" accessType="inputOnly" type="SFVec3f"></field>
<field name="set_endB" accessType="inputOnly" type="SFVec3f"></field>
<IS><connect nodeField="set_endA" protoField="set_positionA"></connect>
<connect nodeField="set_endB" protoField="set_positionB"></connect>
</IS>
<#sourceCode/>
</Script>
<ROUTE fromNode="MoveCylinder" fromField="spine" toNode="extrusion" toField="set_spine"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare38.name = "cylinder";
let ProtoInterface39 = browser.currentScene.createNode("ProtoInterface");
let field40 = browser.currentScene.createNode("field");
field40.name = "set_positionA";
field40.accessType = "inputOnly";
field40.type = "SFVec3f";
ProtoInterface39.field = new MFNode();

ProtoInterface39.field[0] = field40;

let field41 = browser.currentScene.createNode("field");
field41.name = "set_positionB";
field41.accessType = "inputOnly";
field41.type = "SFVec3f";
ProtoInterface39.field[1] = field41;

ProtoDeclare38.protoInterface = ProtoInterface39;

let ProtoBody42 = browser.currentScene.createNode("ProtoBody");
let Shape43 = browser.currentScene.createNode("Shape");
let Extrusion44 = browser.currentScene.createNode("Extrusion");
Extrusion44.DEF = "extrusion";
Extrusion44.creaseAngle = 0.785;
Extrusion44.crossSection = new MFVec2f(new float[1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]);
Extrusion44.spine = new MFVec3f(new float[0,-50,0,0,50,0]);
Shape43.geometry = Extrusion44;

let Appearance45 = browser.currentScene.createNode("Appearance");
let Material46 = browser.currentScene.createNode("Material");
Material46.diffuseColor = new SFColor(new float[0,1,0]);
Appearance45.material = Material46;

Shape43.appearance = Appearance45;

ProtoBody42.children = new MFNode();

ProtoBody42.children[0] = Shape43;

let Script47 = browser.currentScene.createNode("Script");
Script47.DEF = "MoveCylinder";
let field48 = browser.currentScene.createNode("field");
field48.name = "spine";
field48.accessType = "inputOutput";
field48.type = "MFVec3f";
field48.value = "0 -50 0 0 50 0";
Script47.field = new MFNode();

Script47.field[0] = field48;

let field49 = browser.currentScene.createNode("field");
field49.name = "set_endA";
field49.accessType = "inputOnly";
field49.type = "SFVec3f";
Script47.field[1] = field49;

let field50 = browser.currentScene.createNode("field");
field50.name = "set_endB";
field50.accessType = "inputOnly";
field50.type = "SFVec3f";
Script47.field[2] = field50;

let IS51 = browser.currentScene.createNode("IS");
let connect52 = browser.currentScene.createNode("connect");
connect52.nodeField = "set_endA";
connect52.protoField = "set_positionA";
IS51.connect = new MFNode();

IS51.connect[0] = connect52;

let connect53 = browser.currentScene.createNode("connect");
connect53.nodeField = "set_endB";
connect53.protoField = "set_positionB";
IS51.connect[1] = connect53;

Script47.iS = IS51;

let #sourceCode54 = browser.currentScene.createNode("#sourceCode");
Script47.#sourceCode[3] = #sourceCode54;

ProtoBody42.children[1] = Script47;

let ROUTE55 = browser.currentScene.createNode("ROUTE");
ROUTE55.fromNode = "MoveCylinder";
ROUTE55.fromField = "spine";
ROUTE55.toNode = "extrusion";
ROUTE55.toField = "set_spine";
ProtoBody42.children[2] = ROUTE55;

ProtoDeclare38.protoBody = ProtoBody42;

browser.currentScene.children[1] = ProtoDeclare38;

let Transform56 = browser.currentScene.createNode("Transform");
Transform56.DEF = "HoldsContent";
Transform56.scale = new SFVec3f(new float[0.1,0.1,0.1]);
let PlaneSensor57 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor57.DEF = "clickGenerator";
PlaneSensor57.minPosition = new SFVec2f(new float[-50,-50]);
PlaneSensor57.maxPosition = new SFVec2f(new float[50,50]);
PlaneSensor57.description = "click on background to add nodes, click on nodes to add links";
Transform56.children = new MFNode();

Transform56.children[0] = PlaneSensor57;

let ProtoInstance58 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance58.name = "node";
ProtoInstance58.DEF = "nodeA";
let fieldValue59 = browser.currentScene.createNode("fieldValue");
fieldValue59.name = "position";
fieldValue59.value = "0 0 0";
ProtoInstance58.fieldValue = new MFNode();

ProtoInstance58.fieldValue[0] = fieldValue59;

Transform56.children[1] = ProtoInstance58;

let ProtoInstance60 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance60.name = "node";
ProtoInstance60.DEF = "nodeB";
let fieldValue61 = browser.currentScene.createNode("fieldValue");
fieldValue61.name = "position";
fieldValue61.value = "50 50 50";
ProtoInstance60.fieldValue = new MFNode();

ProtoInstance60.fieldValue[0] = fieldValue61;

Transform56.children[2] = ProtoInstance60;

let ProtoInstance62 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance62.name = "cylinder";
ProtoInstance62.DEF = "linkA";
let fieldValue63 = browser.currentScene.createNode("fieldValue");
fieldValue63.name = "set_positionA";
fieldValue63.value = "0 0 0";
ProtoInstance62.fieldValue = new MFNode();

ProtoInstance62.fieldValue[0] = fieldValue63;

let fieldValue64 = browser.currentScene.createNode("fieldValue");
fieldValue64.name = "set_positionB";
fieldValue64.value = "50 50 50";
ProtoInstance62.fieldValue[1] = fieldValue64;

Transform56.children[3] = ProtoInstance62;

browser.currentScene.children[2] = Transform56;

let ROUTE65 = browser.currentScene.createNode("ROUTE");
ROUTE65.fromNode = "nodeA";
ROUTE65.fromField = "position";
ROUTE65.toNode = "linkA";
ROUTE65.toField = "set_positionA";
browser.currentScene.children[3] = ROUTE65;

let ROUTE66 = browser.currentScene.createNode("ROUTE");
ROUTE66.fromNode = "nodeB";
ROUTE66.fromField = "position";
ROUTE66.toNode = "linkA";
ROUTE66.toField = "set_positionB";
browser.currentScene.children[4] = ROUTE66;

