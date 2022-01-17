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
meta4.name = "modified";
meta4.content = "April 18 2017";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "title";
meta5.content = "fors2.x3d";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "identifier";
meta6.content = "https://coderextreme.net/X3DJSONLD/fors2.x3d";
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
<#sourceCode/>
</Script>
<TimeSensor DEF="nodeClock" cycleInterval="3" loop="true"></TimeSensor>
<ROUTE fromNode="nodeClock" fromField="cycleTime" toNode="MoveBall" toField="set_cycle"></ROUTE>
<ROUTE fromNode="nodeClock" fromField="fraction_changed" toNode="NodePosition" toField="set_fraction"></ROUTE>
<ROUTE fromNode="MoveBall" fromField="keyValue" toNode="NodePosition" toField="keyValue"></ROUTE>
<ROUTE fromNode="NodePosition" fromField="value_changed" toNode="transform" toField="set_translation"></ROUTE>
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
let Transform14 = browser.currentScene.createNode("Transform");
Transform14.DEF = "transform";
let IS15 = browser.currentScene.createNode("IS");
let connect16 = browser.currentScene.createNode("connect");
connect16.nodeField = "translation";
connect16.protoField = "position";
IS15.connect = new MFNode();

IS15.connect[0] = connect16;

Transform14.iS = IS15;

let Shape17 = browser.currentScene.createNode("Shape");
//comment before Sphere
//comment after Sphere
//comment after Appearance
let Sphere18 = browser.currentScene.createNode("Sphere");
Shape17.geometry = Sphere18;

let Appearance19 = browser.currentScene.createNode("Appearance");
//comment before Material
//comment after Material
let Material20 = browser.currentScene.createNode("Material");
Material20.diffuseColor = new SFColor(new float[1,0,0]);
Appearance19.material = Material20;

Shape17.appearance = Appearance19;

Transform14.children = new MFNode();

Transform14.children[0] = Shape17;

ProtoBody13.children = new MFNode();

ProtoBody13.children[0] = Transform14;

let PositionInterpolator21 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator21.DEF = "NodePosition";
PositionInterpolator21.key = new MFFloat(new float[0,1]);
PositionInterpolator21.keyValue = new MFVec3f(new float[0,0,0,0,5,0]);
ProtoBody13.children[1] = PositionInterpolator21;

let Script22 = browser.currentScene.createNode("Script");
Script22.DEF = "MoveBall";
let field23 = browser.currentScene.createNode("field");
field23.name = "translation";
field23.accessType = "inputOutput";
field23.type = "SFVec3f";
field23.value = "50 50 0";
Script22.field = new MFNode();

Script22.field[0] = field23;

let field24 = browser.currentScene.createNode("field");
field24.name = "old";
field24.accessType = "inputOutput";
field24.type = "SFVec3f";
field24.value = "0 0 0";
Script22.field[1] = field24;

let field25 = browser.currentScene.createNode("field");
field25.name = "set_cycle";
field25.accessType = "inputOnly";
field25.type = "SFTime";
Script22.field[2] = field25;

let field26 = browser.currentScene.createNode("field");
field26.name = "keyValue";
field26.accessType = "outputOnly";
field26.type = "MFVec3f";
Script22.field[3] = field26;

let #sourceCode27 = browser.currentScene.createNode("#sourceCode");
Script22.#sourceCode[4] = #sourceCode27;

ProtoBody13.children[2] = Script22;

let TimeSensor28 = browser.currentScene.createNode("TimeSensor");
TimeSensor28.DEF = "nodeClock";
TimeSensor28.cycleInterval = 3;
TimeSensor28.loop = True;
ProtoBody13.children[3] = TimeSensor28;

let ROUTE29 = browser.currentScene.createNode("ROUTE");
ROUTE29.fromNode = "nodeClock";
ROUTE29.fromField = "cycleTime";
ROUTE29.toNode = "MoveBall";
ROUTE29.toField = "set_cycle";
ProtoBody13.children[4] = ROUTE29;

let ROUTE30 = browser.currentScene.createNode("ROUTE");
ROUTE30.fromNode = "nodeClock";
ROUTE30.fromField = "fraction_changed";
ROUTE30.toNode = "NodePosition";
ROUTE30.toField = "set_fraction";
ProtoBody13.children[5] = ROUTE30;

let ROUTE31 = browser.currentScene.createNode("ROUTE");
ROUTE31.fromNode = "MoveBall";
ROUTE31.fromField = "keyValue";
ROUTE31.toNode = "NodePosition";
ROUTE31.toField = "keyValue";
ProtoBody13.children[6] = ROUTE31;

let ROUTE32 = browser.currentScene.createNode("ROUTE");
ROUTE32.fromNode = "NodePosition";
ROUTE32.fromField = "value_changed";
ROUTE32.toNode = "transform";
ROUTE32.toField = "set_translation";
ProtoBody13.children[7] = ROUTE32;

ProtoDeclare10.protoBody = ProtoBody13;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ProtoDeclare10;

let ProtoDeclare33 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
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
<#sourceCode/>
</Script>
<ROUTE fromNode="MoveCylinder" fromField="spine" toNode="extrusion" toField="set_spine"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare33.name = "cylinder";
let ProtoInterface34 = browser.currentScene.createNode("ProtoInterface");
let field35 = browser.currentScene.createNode("field");
field35.name = "positionA";
field35.accessType = "inputOnly";
field35.type = "SFVec3f";
ProtoInterface34.field = new MFNode();

ProtoInterface34.field[0] = field35;

let field36 = browser.currentScene.createNode("field");
field36.name = "positionB";
field36.accessType = "inputOnly";
field36.type = "SFVec3f";
ProtoInterface34.field[1] = field36;

ProtoDeclare33.protoInterface = ProtoInterface34;

let ProtoBody37 = browser.currentScene.createNode("ProtoBody");
let Shape38 = browser.currentScene.createNode("Shape");
let Extrusion39 = browser.currentScene.createNode("Extrusion");
Extrusion39.DEF = "extrusion";
Extrusion39.creaseAngle = 0.785;
Extrusion39.crossSection = new MFVec2f(new float[1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]);
Extrusion39.spine = new MFVec3f(new float[0,-50,0,0,0,0,0,50,0]);
Shape38.geometry = Extrusion39;

let Appearance40 = browser.currentScene.createNode("Appearance");
let Material41 = browser.currentScene.createNode("Material");
Material41.diffuseColor = new SFColor(new float[0,1,0]);
Appearance40.material = Material41;

Shape38.appearance = Appearance40;

ProtoBody37.children = new MFNode();

ProtoBody37.children[0] = Shape38;

let Script42 = browser.currentScene.createNode("Script");
Script42.DEF = "MoveCylinder";
let field43 = browser.currentScene.createNode("field");
field43.name = "spine";
field43.accessType = "inputOutput";
field43.type = "MFVec3f";
field43.value = "0 -50 0 0 0 0 0 50 0";
Script42.field = new MFNode();

Script42.field[0] = field43;

let field44 = browser.currentScene.createNode("field");
field44.name = "set_endA";
field44.accessType = "inputOnly";
field44.type = "SFVec3f";
Script42.field[1] = field44;

let field45 = browser.currentScene.createNode("field");
field45.name = "set_endB";
field45.accessType = "inputOnly";
field45.type = "SFVec3f";
Script42.field[2] = field45;

let IS46 = browser.currentScene.createNode("IS");
let connect47 = browser.currentScene.createNode("connect");
connect47.nodeField = "set_endA";
connect47.protoField = "positionA";
IS46.connect = new MFNode();

IS46.connect[0] = connect47;

let connect48 = browser.currentScene.createNode("connect");
connect48.nodeField = "set_endB";
connect48.protoField = "positionB";
IS46.connect[1] = connect48;

Script42.iS = IS46;

let #sourceCode49 = browser.currentScene.createNode("#sourceCode");
Script42.#sourceCode[3] = #sourceCode49;

ProtoBody37.children[1] = Script42;

let ROUTE50 = browser.currentScene.createNode("ROUTE");
ROUTE50.fromNode = "MoveCylinder";
ROUTE50.fromField = "spine";
ROUTE50.toNode = "extrusion";
ROUTE50.toField = "set_spine";
ProtoBody37.children[2] = ROUTE50;

ProtoDeclare33.protoBody = ProtoBody37;

browser.currentScene.children[1] = ProtoDeclare33;

let Transform51 = browser.currentScene.createNode("Transform");
Transform51.scale = new SFVec3f(new float[0.1,0.1,0.1]);
let ProtoInstance52 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance52.name = "node";
ProtoInstance52.DEF = "nodeA";
let fieldValue53 = browser.currentScene.createNode("fieldValue");
fieldValue53.name = "position";
fieldValue53.value = "-50 -50 -50";
ProtoInstance52.fieldValue = new MFNode();

ProtoInstance52.fieldValue[0] = fieldValue53;

Transform51.children = new MFNode();

Transform51.children[0] = ProtoInstance52;

let ProtoInstance54 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance54.name = "node";
ProtoInstance54.DEF = "nodeB";
let fieldValue55 = browser.currentScene.createNode("fieldValue");
fieldValue55.name = "position";
fieldValue55.value = "50 50 50";
ProtoInstance54.fieldValue = new MFNode();

ProtoInstance54.fieldValue[0] = fieldValue55;

Transform51.children[1] = ProtoInstance54;

let ProtoInstance56 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance56.name = "cylinder";
ProtoInstance56.DEF = "linkA";
let fieldValue57 = browser.currentScene.createNode("fieldValue");
fieldValue57.name = "positionA";
fieldValue57.value = "0 0 0";
ProtoInstance56.fieldValue = new MFNode();

ProtoInstance56.fieldValue[0] = fieldValue57;

let fieldValue58 = browser.currentScene.createNode("fieldValue");
fieldValue58.name = "positionB";
fieldValue58.value = "50 50 50";
ProtoInstance56.fieldValue[1] = fieldValue58;

Transform51.children[2] = ProtoInstance56;

browser.currentScene.children[2] = Transform51;

let ROUTE59 = browser.currentScene.createNode("ROUTE");
ROUTE59.fromNode = "nodeA";
ROUTE59.fromField = "position";
ROUTE59.toNode = "linkA";
ROUTE59.toField = "positionA";
browser.currentScene.children[3] = ROUTE59;

let ROUTE60 = browser.currentScene.createNode("ROUTE");
ROUTE60.fromNode = "nodeB";
ROUTE60.fromField = "position";
ROUTE60.toNode = "linkA";
ROUTE60.toField = "positionB";
browser.currentScene.children[4] = ROUTE60;

