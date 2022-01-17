let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
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
meta6.content = "https://coderextreme.net/X3DJSONLD/force.x3d";
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

Transform15.children = new MFNode();

Transform15.children[0] = Shape18;

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

Transform22.children = new MFNode();

Transform22.children[0] = Shape23;

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

let #sourceCode34 = browser.currentScene.createNode("#sourceCode");
Script29.#sourceCode[4] = #sourceCode34;

Group14.children[2] = Script29;

let TimeSensor35 = browser.currentScene.createNode("TimeSensor");
TimeSensor35.DEF = "nodeClock";
TimeSensor35.cycleInterval = 3;
TimeSensor35.loop = True;
Group14.children[3] = TimeSensor35;

let ROUTE36 = browser.currentScene.createNode("ROUTE");
ROUTE36.fromNode = "nodeClock";
ROUTE36.fromField = "cycleTime";
ROUTE36.toNode = "MoveBall";
ROUTE36.toField = "set_cycle";
Group14.children[4] = ROUTE36;

let ROUTE37 = browser.currentScene.createNode("ROUTE");
ROUTE37.fromNode = "nodeClock";
ROUTE37.fromField = "fraction_changed";
ROUTE37.toNode = "NodePosition";
ROUTE37.toField = "set_fraction";
Group14.children[5] = ROUTE37;

let ROUTE38 = browser.currentScene.createNode("ROUTE");
ROUTE38.fromNode = "MoveBall";
ROUTE38.fromField = "keyValue";
ROUTE38.toNode = "NodePosition";
ROUTE38.toField = "keyValue";
Group14.children[6] = ROUTE38;

let ROUTE39 = browser.currentScene.createNode("ROUTE");
ROUTE39.fromNode = "NodePosition";
ROUTE39.fromField = "value_changed";
ROUTE39.toNode = "transform";
ROUTE39.toField = "set_translation";
Group14.children[7] = ROUTE39;

ProtoBody13.children = new MFNode();

ProtoBody13.children[0] = Group14;

ProtoDeclare10.protoBody = ProtoBody13;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ProtoDeclare10;

let ProtoDeclare40 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
<#sourceCode/>
</Script>
<ROUTE fromNode="MoveCylinder" fromField="spine" toNode="extrusion" toField="set_spine"></ROUTE>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare40.name = "cylinder";
let ProtoInterface41 = browser.currentScene.createNode("ProtoInterface");
let field42 = browser.currentScene.createNode("field");
field42.name = "set_positionA";
field42.accessType = "inputOnly";
field42.type = "SFVec3f";
ProtoInterface41.field = new MFNode();

ProtoInterface41.field[0] = field42;

let field43 = browser.currentScene.createNode("field");
field43.name = "set_positionB";
field43.accessType = "inputOnly";
field43.type = "SFVec3f";
ProtoInterface41.field[1] = field43;

ProtoDeclare40.protoInterface = ProtoInterface41;

let ProtoBody44 = browser.currentScene.createNode("ProtoBody");
let Group45 = browser.currentScene.createNode("Group");
let Shape46 = browser.currentScene.createNode("Shape");
let Extrusion47 = browser.currentScene.createNode("Extrusion");
Extrusion47.DEF = "extrusion";
Extrusion47.creaseAngle = 0.785;
Extrusion47.crossSection = new MFVec2f(new float[1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]);
Extrusion47.spine = new MFVec3f(new float[0,-50,0,0,50,0]);
Shape46.geometry = Extrusion47;

let Appearance48 = browser.currentScene.createNode("Appearance");
let Material49 = browser.currentScene.createNode("Material");
Material49.diffuseColor = new SFColor(new float[0,1,0]);
Appearance48.material = Material49;

Shape46.appearance = Appearance48;

Group45.children = new MFNode();

Group45.children[0] = Shape46;

let Script50 = browser.currentScene.createNode("Script");
Script50.DEF = "MoveCylinder";
let field51 = browser.currentScene.createNode("field");
field51.name = "spine";
field51.accessType = "inputOutput";
field51.type = "MFVec3f";
field51.value = "0 -50 0 0 50 0";
Script50.field = new MFNode();

Script50.field[0] = field51;

let field52 = browser.currentScene.createNode("field");
field52.name = "set_endA";
field52.accessType = "inputOnly";
field52.type = "SFVec3f";
Script50.field[1] = field52;

let field53 = browser.currentScene.createNode("field");
field53.name = "set_endB";
field53.accessType = "inputOnly";
field53.type = "SFVec3f";
Script50.field[2] = field53;

let IS54 = browser.currentScene.createNode("IS");
let connect55 = browser.currentScene.createNode("connect");
connect55.nodeField = "set_endA";
connect55.protoField = "set_positionA";
IS54.connect = new MFNode();

IS54.connect[0] = connect55;

let connect56 = browser.currentScene.createNode("connect");
connect56.nodeField = "set_endB";
connect56.protoField = "set_positionB";
IS54.connect[1] = connect56;

Script50.iS = IS54;

let #sourceCode57 = browser.currentScene.createNode("#sourceCode");
Script50.#sourceCode[3] = #sourceCode57;

Group45.children[1] = Script50;

let ROUTE58 = browser.currentScene.createNode("ROUTE");
ROUTE58.fromNode = "MoveCylinder";
ROUTE58.fromField = "spine";
ROUTE58.toNode = "extrusion";
ROUTE58.toField = "set_spine";
Group45.children[2] = ROUTE58;

ProtoBody44.children = new MFNode();

ProtoBody44.children[0] = Group45;

ProtoDeclare40.protoBody = ProtoBody44;

browser.currentScene.children[1] = ProtoDeclare40;

let Transform59 = browser.currentScene.createNode("Transform");
Transform59.DEF = "HoldsContent";
Transform59.scale = new SFVec3f(new float[0.1,0.1,0.1]);
let PlaneSensor60 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor60.DEF = "clickGenerator";
PlaneSensor60.minPosition = new SFVec2f(new float[-50,-50]);
PlaneSensor60.maxPosition = new SFVec2f(new float[50,50]);
PlaneSensor60.description = "click on background to add nodes, click on nodes to add links";
Transform59.children = new MFNode();

Transform59.children[0] = PlaneSensor60;

let ProtoInstance61 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance61.name = "node";
ProtoInstance61.DEF = "nodeA";
let fieldValue62 = browser.currentScene.createNode("fieldValue");
fieldValue62.name = "position";
fieldValue62.value = "0 0 0";
ProtoInstance61.fieldValue = new MFNode();

ProtoInstance61.fieldValue[0] = fieldValue62;

Transform59.children[1] = ProtoInstance61;

let ProtoInstance63 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance63.name = "node";
ProtoInstance63.DEF = "nodeB";
let fieldValue64 = browser.currentScene.createNode("fieldValue");
fieldValue64.name = "position";
fieldValue64.value = "50 50 50";
ProtoInstance63.fieldValue = new MFNode();

ProtoInstance63.fieldValue[0] = fieldValue64;

Transform59.children[2] = ProtoInstance63;

let ProtoInstance65 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance65.name = "node";
ProtoInstance65.DEF = "nodeC";
let fieldValue66 = browser.currentScene.createNode("fieldValue");
fieldValue66.name = "position";
fieldValue66.value = "-50 -50 -50";
ProtoInstance65.fieldValue = new MFNode();

ProtoInstance65.fieldValue[0] = fieldValue66;

Transform59.children[3] = ProtoInstance65;

let ProtoInstance67 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance67.name = "node";
ProtoInstance67.DEF = "nodeD";
let fieldValue68 = browser.currentScene.createNode("fieldValue");
fieldValue68.name = "position";
fieldValue68.value = "50 50 -50";
ProtoInstance67.fieldValue = new MFNode();

ProtoInstance67.fieldValue[0] = fieldValue68;

Transform59.children[4] = ProtoInstance67;

let ProtoInstance69 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance69.name = "cylinder";
ProtoInstance69.DEF = "linkA";
let fieldValue70 = browser.currentScene.createNode("fieldValue");
fieldValue70.name = "set_positionA";
fieldValue70.value = "0 0 0";
ProtoInstance69.fieldValue = new MFNode();

ProtoInstance69.fieldValue[0] = fieldValue70;

let fieldValue71 = browser.currentScene.createNode("fieldValue");
fieldValue71.name = "set_positionB";
fieldValue71.value = "50 50 50";
ProtoInstance69.fieldValue[1] = fieldValue71;

Transform59.children[5] = ProtoInstance69;

let ProtoInstance72 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance72.name = "cylinder";
ProtoInstance72.DEF = "linkB";
let fieldValue73 = browser.currentScene.createNode("fieldValue");
fieldValue73.name = "set_positionA";
fieldValue73.value = "0 0 0";
ProtoInstance72.fieldValue = new MFNode();

ProtoInstance72.fieldValue[0] = fieldValue73;

let fieldValue74 = browser.currentScene.createNode("fieldValue");
fieldValue74.name = "set_positionB";
fieldValue74.value = "-50 -50 -50";
ProtoInstance72.fieldValue[1] = fieldValue74;

Transform59.children[6] = ProtoInstance72;

let ProtoInstance75 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance75.name = "cylinder";
ProtoInstance75.DEF = "linkC";
let fieldValue76 = browser.currentScene.createNode("fieldValue");
fieldValue76.name = "set_positionA";
fieldValue76.value = "50 50 50";
ProtoInstance75.fieldValue = new MFNode();

ProtoInstance75.fieldValue[0] = fieldValue76;

let fieldValue77 = browser.currentScene.createNode("fieldValue");
fieldValue77.name = "set_positionB";
fieldValue77.value = "50 50 -50";
ProtoInstance75.fieldValue[1] = fieldValue77;

Transform59.children[7] = ProtoInstance75;

browser.currentScene.children[2] = Transform59;

let Script78 = browser.currentScene.createNode("Script");
Script78.DEF = "clickHandler";
let field79 = browser.currentScene.createNode("field");
field79.name = "counter";
field79.accessType = "inputOutput";
field79.value = "0";
field79.type = "SFInt32";
Script78.field = new MFNode();

Script78.field[0] = field79;

let field80 = browser.currentScene.createNode("field");
field80.name = "node_changed";
field80.accessType = "outputOnly";
field80.type = "SFNode";
Script78.field[1] = field80;

let field81 = browser.currentScene.createNode("field");
field81.name = "add_node";
field81.accessType = "inputOnly";
field81.value = "false";
field81.type = "SFBool";
Script78.field[2] = field81;

//<field name=\"ModifiableNode\" type=\"SFNode\" accessType=\"inputOutput\"> <Transform USE=\"HoldsContent\"/> </field>
let #sourceCode82 = browser.currentScene.createNode("#sourceCode");
Script78.#sourceCode[3] = #sourceCode82;

browser.currentScene.children[3] = Script78;

let ROUTE83 = browser.currentScene.createNode("ROUTE");
ROUTE83.fromNode = "clickGenerator";
ROUTE83.fromField = "isActive";
ROUTE83.toNode = "clickHandler";
ROUTE83.toField = "add_node";
browser.currentScene.children[4] = ROUTE83;

let ROUTE84 = browser.currentScene.createNode("ROUTE");
ROUTE84.fromNode = "nodeA";
ROUTE84.fromField = "position";
ROUTE84.toNode = "linkA";
ROUTE84.toField = "set_positionA";
browser.currentScene.children[5] = ROUTE84;

let ROUTE85 = browser.currentScene.createNode("ROUTE");
ROUTE85.fromNode = "nodeB";
ROUTE85.fromField = "position";
ROUTE85.toNode = "linkA";
ROUTE85.toField = "set_positionB";
browser.currentScene.children[6] = ROUTE85;

let ROUTE86 = browser.currentScene.createNode("ROUTE");
ROUTE86.fromNode = "nodeA";
ROUTE86.fromField = "position";
ROUTE86.toNode = "linkB";
ROUTE86.toField = "set_positionA";
browser.currentScene.children[7] = ROUTE86;

let ROUTE87 = browser.currentScene.createNode("ROUTE");
ROUTE87.fromNode = "nodeC";
ROUTE87.fromField = "position";
ROUTE87.toNode = "linkB";
ROUTE87.toField = "set_positionB";
browser.currentScene.children[8] = ROUTE87;

let ROUTE88 = browser.currentScene.createNode("ROUTE");
ROUTE88.fromNode = "nodeA";
ROUTE88.fromField = "position";
ROUTE88.toNode = "linkC";
ROUTE88.toField = "set_positionA";
browser.currentScene.children[9] = ROUTE88;

let ROUTE89 = browser.currentScene.createNode("ROUTE");
ROUTE89.fromNode = "nodeD";
ROUTE89.fromField = "position";
ROUTE89.toNode = "linkC";
ROUTE89.toField = "set_positionB";
browser.currentScene.children[10] = ROUTE89;

