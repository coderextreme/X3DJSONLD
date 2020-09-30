let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let ProtoDeclare2 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="node" ><ProtoInterface><field name="position" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><Group bboxCenter="0 0 0" bboxSize="-1 -1 -1"><Transform DEF="transform" bboxCenter="0 0 0" bboxSize="-1 -1 -1"><IS><connect nodeField="translation" protoField="position"></connect>
</IS>
<Shape bboxCenter="0 0 0" bboxSize="-1 -1 -1"><Sphere containerField="geometry"></Sphere>
<Appearance><Material diffuseColor="1 0 0"></Material>
</Appearance>
</Shape>
<Transform translation="1 0 1" bboxCenter="0 0 0" bboxSize="-1 -1 -1"><Shape bboxCenter="0 0 0" bboxSize="-1 -1 -1"><Text containerField="geometry" string="&quot;Node&quot;"><FontStyle justify="&quot;MIDDLE&quot; &quot;MIDDLE&quot;" size="5"></FontStyle>
</Text>
<Appearance><Material diffuseColor="0 0 1"></Material>
</Appearance>
</Shape>
</Transform>
</Transform>
<PositionInterpolator DEF="NodePosition" key="0 1" keyValue="0 0 0 0 5 0"></PositionInterpolator>
<TimeSensor DEF="nodeClock" cycleInterval="3" loop="true"></TimeSensor>
<ROUTE fromNode="nodeClock" fromField="cycleTime" toNode="MoveBall" toField="set_cycle"></ROUTE>
<ROUTE fromNode="nodeClock" fromField="fraction_changed" toNode="NodePosition" toField="set_fraction"></ROUTE>
<ROUTE fromNode="MoveBall" fromField="keyValue" toNode="NodePosition" toField="keyValue"></ROUTE>
<ROUTE fromNode="NodePosition" fromField="value_changed" toNode="transform" toField="set_translation"></ROUTE>
<X3DScript DEF="MoveBall"><field name="translation" accessType="inputOutput" type="SFVec3f" value="50 50 0"></field>
<field name="old" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="set_cycle" accessType="inputOnly" type="SFTime"></field>
<field name="keyValue" accessType="outputOnly" type="MFVec3f"></field>
</X3DScript>
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
Group6.bboxCenter = new SFVec3f(new float[0,0,0]);
Group6.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Transform7 = browser.currentScene.createNode("Transform");
Transform7.DEF = "transform";
Transform7.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform7.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let IS8 = browser.currentScene.createNode("IS");
let connect9 = browser.currentScene.createNode("connect");
connect9.nodeField = "translation";
connect9.protoField = "position";
IS8.connect = new MFNode();

IS8.connect[0] = connect9;

Transform7.iS = IS8;

let Shape10 = browser.currentScene.createNode("Shape");
Shape10.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape10.bboxSize = new SFVec3f(new float[-1,-1,-1]);
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
Transform14.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform14.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape15 = browser.currentScene.createNode("Shape");
Shape15.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape15.bboxSize = new SFVec3f(new float[-1,-1,-1]);
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

let TimeSensor21 = browser.currentScene.createNode("TimeSensor");
TimeSensor21.DEF = "nodeClock";
TimeSensor21.cycleInterval = 3;
TimeSensor21.loop = True;
Group6.children[2] = TimeSensor21;

let ROUTE22 = browser.currentScene.createNode("ROUTE");
ROUTE22.fromNode = "nodeClock";
ROUTE22.fromField = "cycleTime";
ROUTE22.toNode = "MoveBall";
ROUTE22.toField = "set_cycle";
Group6.children[3] = ROUTE22;

let ROUTE23 = browser.currentScene.createNode("ROUTE");
ROUTE23.fromNode = "nodeClock";
ROUTE23.fromField = "fraction_changed";
ROUTE23.toNode = "NodePosition";
ROUTE23.toField = "set_fraction";
Group6.children[4] = ROUTE23;

let ROUTE24 = browser.currentScene.createNode("ROUTE");
ROUTE24.fromNode = "MoveBall";
ROUTE24.fromField = "keyValue";
ROUTE24.toNode = "NodePosition";
ROUTE24.toField = "keyValue";
Group6.children[5] = ROUTE24;

let ROUTE25 = browser.currentScene.createNode("ROUTE");
ROUTE25.fromNode = "NodePosition";
ROUTE25.fromField = "value_changed";
ROUTE25.toNode = "transform";
ROUTE25.toField = "set_translation";
Group6.children[6] = ROUTE25;

let X3DScript26 = browser.currentScene.createNode("X3DScript");
X3DScript26.DEF = "MoveBall";
let field27 = browser.currentScene.createNode("field");
field27.name = "translation";
field27.accessType = "inputOutput";
field27.type = "SFVec3f";
field27.value = "50 50 0";
X3DScript26.field = new MFNode();

X3DScript26.field[0] = field27;

let field28 = browser.currentScene.createNode("field");
field28.name = "old";
field28.accessType = "inputOutput";
field28.type = "SFVec3f";
field28.value = "0 0 0";
X3DScript26.field[1] = field28;

let field29 = browser.currentScene.createNode("field");
field29.name = "set_cycle";
field29.accessType = "inputOnly";
field29.type = "SFTime";
X3DScript26.field[2] = field29;

let field30 = browser.currentScene.createNode("field");
field30.name = "keyValue";
field30.accessType = "outputOnly";
field30.type = "MFVec3f";
X3DScript26.field[3] = field30;

Group6.x3DScript[7] = X3DScript26;

ProtoBody5.children = new MFNode();

ProtoBody5.children[0] = Group6;

ProtoDeclare2.protoBody = ProtoBody5;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ProtoDeclare2;

let ProtoDeclare31 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="cylinder" ><ProtoInterface><field name="set_positionA" accessType="inputOnly" type="SFVec3f"></field>
<field name="set_positionB" accessType="inputOnly" type="SFVec3f"></field>
</ProtoInterface>
<ProtoBody><Group bboxCenter="0 0 0" bboxSize="-1 -1 -1"><Shape bboxCenter="0 0 0" bboxSize="-1 -1 -1"><Extrusion containerField="geometry" DEF="extrusion" creaseAngle="0.785" crossSection="1 0 0.92 -0.38 0.71 -0.71 0.38 -0.92 0 -1 -0.38 -0.92 -0.71 -0.71 -0.92 -0.38 -1 0 -0.92 0.38 -0.71 0.71 -0.38 0.92 0 1 0.38 0.92 0.71 0.71 0.92 0.38 1 0" spine="0 -50 0 0 50 0"></Extrusion>
<Appearance><Material diffuseColor="0 1 0"></Material>
</Appearance>
</Shape>
<ROUTE fromNode="MoveCylinder" fromField="spine" toNode="extrusion" toField="set_spine"></ROUTE>
<X3DScript DEF="MoveCylinder"><field name="spine" accessType="inputOutput" type="MFVec3f" value="0 -50 0 0 50 0"></field>
<field name="set_endA" accessType="inputOnly" type="SFVec3f"></field>
<field name="set_endB" accessType="inputOnly" type="SFVec3f"></field>
<IS><connect nodeField="set_endA" protoField="set_positionA"></connect>
<connect nodeField="set_endB" protoField="set_positionB"></connect>
</IS>
</X3DScript>
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
Group36.bboxCenter = new SFVec3f(new float[0,0,0]);
Group36.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape37 = browser.currentScene.createNode("Shape");
Shape37.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape37.bboxSize = new SFVec3f(new float[-1,-1,-1]);
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

let ROUTE41 = browser.currentScene.createNode("ROUTE");
ROUTE41.fromNode = "MoveCylinder";
ROUTE41.fromField = "spine";
ROUTE41.toNode = "extrusion";
ROUTE41.toField = "set_spine";
Group36.children[1] = ROUTE41;

let X3DScript42 = browser.currentScene.createNode("X3DScript");
X3DScript42.DEF = "MoveCylinder";
let field43 = browser.currentScene.createNode("field");
field43.name = "spine";
field43.accessType = "inputOutput";
field43.type = "MFVec3f";
field43.value = "0 -50 0 0 50 0";
X3DScript42.field = new MFNode();

X3DScript42.field[0] = field43;

let field44 = browser.currentScene.createNode("field");
field44.name = "set_endA";
field44.accessType = "inputOnly";
field44.type = "SFVec3f";
X3DScript42.field[1] = field44;

let field45 = browser.currentScene.createNode("field");
field45.name = "set_endB";
field45.accessType = "inputOnly";
field45.type = "SFVec3f";
X3DScript42.field[2] = field45;

let IS46 = browser.currentScene.createNode("IS");
let connect47 = browser.currentScene.createNode("connect");
connect47.nodeField = "set_endA";
connect47.protoField = "set_positionA";
IS46.connect = new MFNode();

IS46.connect[0] = connect47;

let connect48 = browser.currentScene.createNode("connect");
connect48.nodeField = "set_endB";
connect48.protoField = "set_positionB";
IS46.connect[1] = connect48;

X3DScript42.iS = IS46;

Group36.x3DScript[2] = X3DScript42;

ProtoBody35.children = new MFNode();

ProtoBody35.children[0] = Group36;

ProtoDeclare31.protoBody = ProtoBody35;

browser.currentScene.children[1] = ProtoDeclare31;

let Transform49 = browser.currentScene.createNode("Transform");
Transform49.DEF = "HoldsContent";
Transform49.scale = new SFVec3f(new float[0.1,0.1,0.1]);
Transform49.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform49.bboxSize = new SFVec3f(new float[-1,-1,-1]);
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

let ROUTE68 = browser.currentScene.createNode("ROUTE");
ROUTE68.fromNode = "clickGenerator";
ROUTE68.fromField = "isActive";
ROUTE68.toNode = "clickHandler";
ROUTE68.toField = "add_node";
browser.currentScene.children[3] = ROUTE68;

let ROUTE69 = browser.currentScene.createNode("ROUTE");
ROUTE69.fromNode = "nodeA";
ROUTE69.fromField = "position";
ROUTE69.toNode = "linkA";
ROUTE69.toField = "set_positionA";
browser.currentScene.children[4] = ROUTE69;

let ROUTE70 = browser.currentScene.createNode("ROUTE");
ROUTE70.fromNode = "nodeB";
ROUTE70.fromField = "position";
ROUTE70.toNode = "linkA";
ROUTE70.toField = "set_positionB";
browser.currentScene.children[5] = ROUTE70;

let ROUTE71 = browser.currentScene.createNode("ROUTE");
ROUTE71.fromNode = "nodeA";
ROUTE71.fromField = "position";
ROUTE71.toNode = "linkB";
ROUTE71.toField = "set_positionA";
browser.currentScene.children[6] = ROUTE71;

let ROUTE72 = browser.currentScene.createNode("ROUTE");
ROUTE72.fromNode = "nodeC";
ROUTE72.fromField = "position";
ROUTE72.toNode = "linkB";
ROUTE72.toField = "set_positionB";
browser.currentScene.children[7] = ROUTE72;

let ROUTE73 = browser.currentScene.createNode("ROUTE");
ROUTE73.fromNode = "nodeA";
ROUTE73.fromField = "position";
ROUTE73.toNode = "linkC";
ROUTE73.toField = "set_positionA";
browser.currentScene.children[8] = ROUTE73;

let ROUTE74 = browser.currentScene.createNode("ROUTE");
ROUTE74.fromNode = "nodeD";
ROUTE74.fromField = "position";
ROUTE74.toNode = "linkC";
ROUTE74.toField = "set_positionB";
browser.currentScene.children[9] = ROUTE74;

