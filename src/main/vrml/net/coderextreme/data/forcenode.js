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
meta4.content = "forcenode.x3d";
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
let Group13 = browser.currentScene.createNode("Group");
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
let Sphere18 = browser.currentScene.createNode("Sphere");
Shape17.geometry = Sphere18;

let Appearance19 = browser.currentScene.createNode("Appearance");
let Material20 = browser.currentScene.createNode("Material");
Material20.diffuseColor = new SFColor(new float[1,0,0]);
Appearance19.material = Material20;

Shape17.appearance = Appearance19;

Transform14.children = new MFNode();

Transform14.children[0] = Shape17;

let Transform21 = browser.currentScene.createNode("Transform");
Transform21.translation = new SFVec3f(new float[1,0,1]);
let Shape22 = browser.currentScene.createNode("Shape");
let Text23 = browser.currentScene.createNode("Text");
Text23.string = new MFString(new java.lang.String["Node"]);
let FontStyle24 = browser.currentScene.createNode("FontStyle");
FontStyle24.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle24.size = 5;
Text23.fontStyle = FontStyle24;

Shape22.geometry = Text23;

let Appearance25 = browser.currentScene.createNode("Appearance");
let Material26 = browser.currentScene.createNode("Material");
Material26.diffuseColor = new SFColor(new float[0,0,1]);
Appearance25.material = Material26;

Shape22.appearance = Appearance25;

Transform21.children = new MFNode();

Transform21.children[0] = Shape22;

Transform14.children[1] = Transform21;

Group13.children = new MFNode();

Group13.children[0] = Transform14;

let PositionInterpolator27 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator27.DEF = "NodePosition";
PositionInterpolator27.key = new MFFloat(new float[0,1]);
PositionInterpolator27.keyValue = new MFVec3f(new float[0,0,0,0,5,0]);
Group13.children[1] = PositionInterpolator27;

let Script28 = browser.currentScene.createNode("Script");
Script28.DEF = "MoveBall";
let field29 = browser.currentScene.createNode("field");
field29.name = "translation";
field29.accessType = "inputOutput";
field29.type = "SFVec3f";
field29.value = "50 50 0";
Script28.field = new MFNode();

Script28.field[0] = field29;

let field30 = browser.currentScene.createNode("field");
field30.name = "old";
field30.accessType = "inputOutput";
field30.type = "SFVec3f";
field30.value = "0 0 0";
Script28.field[1] = field30;

let field31 = browser.currentScene.createNode("field");
field31.name = "set_cycle";
field31.accessType = "inputOnly";
field31.type = "SFTime";
Script28.field[2] = field31;

let field32 = browser.currentScene.createNode("field");
field32.name = "keyValue";
field32.accessType = "outputOnly";
field32.type = "MFVec3f";
Script28.field[3] = field32;

let #sourceCode33 = browser.currentScene.createNode("#sourceCode");
Script28.#sourceCode[4] = #sourceCode33;

Group13.children[2] = Script28;

let TimeSensor34 = browser.currentScene.createNode("TimeSensor");
TimeSensor34.DEF = "nodeClock";
TimeSensor34.cycleInterval = 3;
TimeSensor34.loop = True;
Group13.children[3] = TimeSensor34;

let ROUTE35 = browser.currentScene.createNode("ROUTE");
ROUTE35.fromNode = "nodeClock";
ROUTE35.fromField = "cycleTime";
ROUTE35.toNode = "MoveBall";
ROUTE35.toField = "set_cycle";
Group13.children[4] = ROUTE35;

let ROUTE36 = browser.currentScene.createNode("ROUTE");
ROUTE36.fromNode = "nodeClock";
ROUTE36.fromField = "fraction_changed";
ROUTE36.toNode = "NodePosition";
ROUTE36.toField = "set_fraction";
Group13.children[5] = ROUTE36;

let ROUTE37 = browser.currentScene.createNode("ROUTE");
ROUTE37.fromNode = "MoveBall";
ROUTE37.fromField = "keyValue";
ROUTE37.toNode = "NodePosition";
ROUTE37.toField = "keyValue";
Group13.children[6] = ROUTE37;

let ROUTE38 = browser.currentScene.createNode("ROUTE");
ROUTE38.fromNode = "NodePosition";
ROUTE38.fromField = "value_changed";
ROUTE38.toNode = "transform";
ROUTE38.toField = "set_translation";
Group13.children[7] = ROUTE38;

ProtoBody12.children = new MFNode();

ProtoBody12.children[0] = Group13;

ProtoDeclare9.protoBody = ProtoBody12;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ProtoDeclare9;

let ProtoDeclare39 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoDeclare39.name = "cylinder";
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

let #sourceCode56 = browser.currentScene.createNode("#sourceCode");
Script49.#sourceCode[3] = #sourceCode56;

Group44.children[1] = Script49;

let ROUTE57 = browser.currentScene.createNode("ROUTE");
ROUTE57.fromNode = "MoveCylinder";
ROUTE57.fromField = "spine";
ROUTE57.toNode = "extrusion";
ROUTE57.toField = "set_spine";
Group44.children[2] = ROUTE57;

ProtoBody43.children = new MFNode();

ProtoBody43.children[0] = Group44;

ProtoDeclare39.protoBody = ProtoBody43;

browser.currentScene.children[1] = ProtoDeclare39;

let Transform58 = browser.currentScene.createNode("Transform");
Transform58.DEF = "HoldsContent";
Transform58.scale = new SFVec3f(new float[0.1,0.1,0.1]);
let PlaneSensor59 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor59.DEF = "clickGenerator";
PlaneSensor59.minPosition = new SFVec2f(new float[-50,-50]);
PlaneSensor59.maxPosition = new SFVec2f(new float[50,50]);
PlaneSensor59.description = "click on background to add nodes, click on nodes to add links";
Transform58.children = new MFNode();

Transform58.children[0] = PlaneSensor59;

let ProtoInstance60 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance60.name = "node";
ProtoInstance60.DEF = "nodeA";
let fieldValue61 = browser.currentScene.createNode("fieldValue");
fieldValue61.name = "position";
fieldValue61.value = "0 0 0";
ProtoInstance60.fieldValue = new MFNode();

ProtoInstance60.fieldValue[0] = fieldValue61;

Transform58.children[1] = ProtoInstance60;

let ProtoInstance62 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance62.name = "node";
ProtoInstance62.DEF = "nodeB";
let fieldValue63 = browser.currentScene.createNode("fieldValue");
fieldValue63.name = "position";
fieldValue63.value = "50 50 50";
ProtoInstance62.fieldValue = new MFNode();

ProtoInstance62.fieldValue[0] = fieldValue63;

Transform58.children[2] = ProtoInstance62;

let ProtoInstance64 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance64.name = "node";
ProtoInstance64.DEF = "nodeC";
let fieldValue65 = browser.currentScene.createNode("fieldValue");
fieldValue65.name = "position";
fieldValue65.value = "-50 -50 -50";
ProtoInstance64.fieldValue = new MFNode();

ProtoInstance64.fieldValue[0] = fieldValue65;

Transform58.children[3] = ProtoInstance64;

let ProtoInstance66 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance66.name = "node";
ProtoInstance66.DEF = "nodeD";
let fieldValue67 = browser.currentScene.createNode("fieldValue");
fieldValue67.name = "position";
fieldValue67.value = "50 50 -50";
ProtoInstance66.fieldValue = new MFNode();

ProtoInstance66.fieldValue[0] = fieldValue67;

Transform58.children[4] = ProtoInstance66;

let ProtoInstance68 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance68.name = "cylinder";
ProtoInstance68.DEF = "linkA";
let fieldValue69 = browser.currentScene.createNode("fieldValue");
fieldValue69.name = "set_positionA";
fieldValue69.value = "0 0 0";
ProtoInstance68.fieldValue = new MFNode();

ProtoInstance68.fieldValue[0] = fieldValue69;

let fieldValue70 = browser.currentScene.createNode("fieldValue");
fieldValue70.name = "set_positionB";
fieldValue70.value = "50 50 50";
ProtoInstance68.fieldValue[1] = fieldValue70;

Transform58.children[5] = ProtoInstance68;

let ProtoInstance71 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance71.name = "cylinder";
ProtoInstance71.DEF = "linkB";
let fieldValue72 = browser.currentScene.createNode("fieldValue");
fieldValue72.name = "set_positionA";
fieldValue72.value = "0 0 0";
ProtoInstance71.fieldValue = new MFNode();

ProtoInstance71.fieldValue[0] = fieldValue72;

let fieldValue73 = browser.currentScene.createNode("fieldValue");
fieldValue73.name = "set_positionB";
fieldValue73.value = "-50 -50 -50";
ProtoInstance71.fieldValue[1] = fieldValue73;

Transform58.children[6] = ProtoInstance71;

let ProtoInstance74 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance74.name = "cylinder";
ProtoInstance74.DEF = "linkC";
let fieldValue75 = browser.currentScene.createNode("fieldValue");
fieldValue75.name = "set_positionA";
fieldValue75.value = "50 50 50";
ProtoInstance74.fieldValue = new MFNode();

ProtoInstance74.fieldValue[0] = fieldValue75;

let fieldValue76 = browser.currentScene.createNode("fieldValue");
fieldValue76.name = "set_positionB";
fieldValue76.value = "50 50 -50";
ProtoInstance74.fieldValue[1] = fieldValue76;

Transform58.children[7] = ProtoInstance74;

browser.currentScene.children[2] = Transform58;

let Script77 = browser.currentScene.createNode("Script");
Script77.DEF = "clickHandler";
let field78 = browser.currentScene.createNode("field");
field78.name = "counter";
field78.accessType = "inputOutput";
field78.value = "0";
field78.type = "SFInt32";
Script77.field = new MFNode();

Script77.field[0] = field78;

let field79 = browser.currentScene.createNode("field");
field79.name = "node_changed";
field79.accessType = "outputOnly";
field79.type = "SFNode";
Script77.field[1] = field79;

let field80 = browser.currentScene.createNode("field");
field80.name = "add_node";
field80.accessType = "inputOnly";
field80.value = "false";
field80.type = "SFBool";
Script77.field[2] = field80;

//<field name=\"ModifiableNode\" type=\"SFNode\" accessType=\"inputOutput\"> <Transform USE=\"HoldsContent\"/> </field>
let #sourceCode81 = browser.currentScene.createNode("#sourceCode");
Script77.#sourceCode[3] = #sourceCode81;

browser.currentScene.children[3] = Script77;

let ROUTE82 = browser.currentScene.createNode("ROUTE");
ROUTE82.fromNode = "clickGenerator";
ROUTE82.fromField = "isActive";
ROUTE82.toNode = "clickHandler";
ROUTE82.toField = "add_node";
browser.currentScene.children[4] = ROUTE82;

let ROUTE83 = browser.currentScene.createNode("ROUTE");
ROUTE83.fromNode = "nodeA";
ROUTE83.fromField = "position";
ROUTE83.toNode = "linkA";
ROUTE83.toField = "set_positionA";
browser.currentScene.children[5] = ROUTE83;

let ROUTE84 = browser.currentScene.createNode("ROUTE");
ROUTE84.fromNode = "nodeB";
ROUTE84.fromField = "position";
ROUTE84.toNode = "linkA";
ROUTE84.toField = "set_positionB";
browser.currentScene.children[6] = ROUTE84;

let ROUTE85 = browser.currentScene.createNode("ROUTE");
ROUTE85.fromNode = "nodeA";
ROUTE85.fromField = "position";
ROUTE85.toNode = "linkB";
ROUTE85.toField = "set_positionA";
browser.currentScene.children[7] = ROUTE85;

let ROUTE86 = browser.currentScene.createNode("ROUTE");
ROUTE86.fromNode = "nodeC";
ROUTE86.fromField = "position";
ROUTE86.toNode = "linkB";
ROUTE86.toField = "set_positionB";
browser.currentScene.children[8] = ROUTE86;

let ROUTE87 = browser.currentScene.createNode("ROUTE");
ROUTE87.fromNode = "nodeA";
ROUTE87.fromField = "position";
ROUTE87.toNode = "linkC";
ROUTE87.toField = "set_positionA";
browser.currentScene.children[9] = ROUTE87;

let ROUTE88 = browser.currentScene.createNode("ROUTE");
ROUTE88.fromNode = "nodeD";
ROUTE88.fromField = "position";
ROUTE88.toNode = "linkC";
ROUTE88.toField = "set_positionB";
browser.currentScene.children[10] = ROUTE88;

