let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "arc1.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "creator";
meta3.content = "Lost, Doug Sanden I think";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "generator";
meta4.content = "manual";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "identifier";
meta5.content = "https://coderextreme.net/X3DJSONLD/src/main/data/arc1.x3d";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "description";
meta6.content = "a generic proto to connect two objects";
head1.meta[4] = meta6;

head = head1;

let Viewpoint8 = browser.currentScene.createNode("Viewpoint");
Viewpoint8.position = new SFVec3f(new float[0,0,5]);
Viewpoint8.description = "Only Viewpoint";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Viewpoint8;

let Background9 = browser.currentScene.createNode("Background");
Background9.skyColor = new MFColor(new float[0.4,0.4,0.4]);
browser.currentScene.children[1] = Background9;

let ProtoDeclare10 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="point" ><ProtoInterface><field name="translation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><Transform DEF="node"><IS><connect nodeField="translation" protoField="translation"></connect>
</IS>
<Shape><Sphere containerField="geometry" radius="0.1"></Sphere>
<Appearance><Material diffuseColor="1 0 0"></Material>
</Appearance>
</Shape>
<PositionInterpolator DEF="PI1" key="0 1" keyValue="0 0 0 0 5 0"></PositionInterpolator>
<Script DEF="MB1"><field name="translation" accessType="inputOutput" type="SFVec3f" value="50 50 0"></field>
<field name="old" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="set_location" accessType="inputOnly" type="SFTime"></field>
<field name="keyValue" accessType="inputOutput" type="MFVec3f" value="0 0 0 0 5 0"></field>
<#sourceCode/>
</Script>
<TimeSensor DEF="CL1" cycleInterval="3" loop="true"></TimeSensor>
<ROUTE fromNode="CL1" fromField="cycleTime" toNode="MB1" toField="set_location"></ROUTE>
<ROUTE fromNode="CL1" fromField="fraction_changed" toNode="PI1" toField="set_fraction"></ROUTE>
<ROUTE fromNode="MB1" fromField="keyValue" toNode="PI1" toField="keyValue"></ROUTE>
<ROUTE fromNode="PI1" fromField="value_changed" toNode="node" toField="set_translation"></ROUTE>
<ROUTE fromNode="MB1" fromField="translation_changed" toNode="node" toField="set_translation"></ROUTE>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare10.name = "point";
let ProtoInterface11 = browser.currentScene.createNode("ProtoInterface");
let field12 = browser.currentScene.createNode("field");
field12.name = "translation";
field12.accessType = "inputOutput";
field12.type = "SFVec3f";
field12.value = "0 0 0";
ProtoInterface11.field = new MFNode();

ProtoInterface11.field[0] = field12;

ProtoDeclare10.protoInterface = ProtoInterface11;

let ProtoBody13 = browser.currentScene.createNode("ProtoBody");
let Transform14 = browser.currentScene.createNode("Transform");
Transform14.DEF = "node";
let IS15 = browser.currentScene.createNode("IS");
let connect16 = browser.currentScene.createNode("connect");
connect16.nodeField = "translation";
connect16.protoField = "translation";
IS15.connect = new MFNode();

IS15.connect[0] = connect16;

Transform14.iS = IS15;

let Shape17 = browser.currentScene.createNode("Shape");
let Sphere18 = browser.currentScene.createNode("Sphere");
Sphere18.radius = 0.1;
Shape17.geometry = Sphere18;

let Appearance19 = browser.currentScene.createNode("Appearance");
let Material20 = browser.currentScene.createNode("Material");
Material20.diffuseColor = new SFColor(new float[1,0,0]);
Appearance19.material = Material20;

Shape17.appearance = Appearance19;

Transform14.children = new MFNode();

Transform14.children[0] = Shape17;

let PositionInterpolator21 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator21.DEF = "PI1";
PositionInterpolator21.key = new MFFloat(new float[0,1]);
PositionInterpolator21.keyValue = new MFVec3f(new float[0,0,0,0,5,0]);
Transform14.children[1] = PositionInterpolator21;

let Script22 = browser.currentScene.createNode("Script");
Script22.DEF = "MB1";
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
field25.name = "set_location";
field25.accessType = "inputOnly";
field25.type = "SFTime";
Script22.field[2] = field25;

let field26 = browser.currentScene.createNode("field");
field26.name = "keyValue";
field26.accessType = "inputOutput";
field26.type = "MFVec3f";
field26.value = "0 0 0 0 5 0";
Script22.field[3] = field26;

let #sourceCode27 = browser.currentScene.createNode("#sourceCode");
Script22.#sourceCode[4] = #sourceCode27;

Transform14.children[2] = Script22;

let TimeSensor28 = browser.currentScene.createNode("TimeSensor");
TimeSensor28.DEF = "CL1";
TimeSensor28.cycleInterval = 3;
TimeSensor28.loop = True;
Transform14.children[3] = TimeSensor28;

let ROUTE29 = browser.currentScene.createNode("ROUTE");
ROUTE29.fromNode = "CL1";
ROUTE29.fromField = "cycleTime";
ROUTE29.toNode = "MB1";
ROUTE29.toField = "set_location";
Transform14.children[4] = ROUTE29;

let ROUTE30 = browser.currentScene.createNode("ROUTE");
ROUTE30.fromNode = "CL1";
ROUTE30.fromField = "fraction_changed";
ROUTE30.toNode = "PI1";
ROUTE30.toField = "set_fraction";
Transform14.children[5] = ROUTE30;

let ROUTE31 = browser.currentScene.createNode("ROUTE");
ROUTE31.fromNode = "MB1";
ROUTE31.fromField = "keyValue";
ROUTE31.toNode = "PI1";
ROUTE31.toField = "keyValue";
Transform14.children[6] = ROUTE31;

let ROUTE32 = browser.currentScene.createNode("ROUTE");
ROUTE32.fromNode = "PI1";
ROUTE32.fromField = "value_changed";
ROUTE32.toNode = "node";
ROUTE32.toField = "set_translation";
Transform14.children[7] = ROUTE32;

let ROUTE33 = browser.currentScene.createNode("ROUTE");
ROUTE33.fromNode = "MB1";
ROUTE33.fromField = "translation_changed";
ROUTE33.toNode = "node";
ROUTE33.toField = "set_translation";
Transform14.children[8] = ROUTE33;

ProtoBody13.children = new MFNode();

ProtoBody13.children[0] = Transform14;

ProtoDeclare10.protoBody = ProtoBody13;

browser.currentScene.children[2] = ProtoDeclare10;

let Transform34 = browser.currentScene.createNode("Transform");
Transform34.DEF = "G1";
let ProtoInstance35 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance35.name = "point";
Transform34.children = new MFNode();

Transform34.children[0] = ProtoInstance35;

browser.currentScene.children[3] = Transform34;

let Transform36 = browser.currentScene.createNode("Transform");
Transform36.DEF = "G2";
let ProtoInstance37 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance37.name = "point";
Transform36.children = new MFNode();

Transform36.children[0] = ProtoInstance37;

browser.currentScene.children[4] = Transform36;

let Transform38 = browser.currentScene.createNode("Transform");
Transform38.DEF = "transC1";
let Transform39 = browser.currentScene.createNode("Transform");
Transform39.DEF = "rotscaleC1";
let Shape40 = browser.currentScene.createNode("Shape");
let Appearance41 = browser.currentScene.createNode("Appearance");
let Material42 = browser.currentScene.createNode("Material");
Material42.diffuseColor = new SFColor(new float[0.2,0.7,0.7]);
Material42.transparency = 0.5;
Appearance41.material = Material42;

Shape40.appearance = Appearance41;

let Cylinder43 = browser.currentScene.createNode("Cylinder");
Cylinder43.radius = 0.05;
Shape40.geometry = Cylinder43;

Transform39.children = new MFNode();

Transform39.children[0] = Shape40;

Transform38.children = new MFNode();

Transform38.children[0] = Transform39;

browser.currentScene.children[5] = Transform38;

let ProtoDeclare44 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="x3dconnector" ><ProtoInterface><field name="startnode" accessType="initializeOnly" type="SFNode"></field>
<field name="endnode" accessType="initializeOnly" type="SFNode"></field>
<field name="transnode" accessType="inputOutput" type="SFNode"></field>
<field name="rotscalenode" accessType="inputOutput" type="SFNode"></field>
<field name="set_startpoint" accessType="inputOnly" type="SFVec3f"></field>
<field name="set_endpoint" accessType="inputOnly" type="SFVec3f"></field>
</ProtoInterface>
<ProtoBody><Script DEF="S1"><field name="startnode" accessType="initializeOnly" type="SFNode"></field>
<field name="endnode" accessType="initializeOnly" type="SFNode"></field>
<field name="transnode" accessType="initializeOnly" type="SFNode"></field>
<field name="rotscalenode" accessType="initializeOnly" type="SFNode"></field>
<field name="set_startpoint" accessType="inputOnly" type="SFVec3f"></field>
<field name="set_endpoint" accessType="inputOnly" type="SFVec3f"></field>
<IS><connect nodeField="startnode" protoField="startnode"></connect>
<connect nodeField="endnode" protoField="endnode"></connect>
<connect nodeField="transnode" protoField="transnode"></connect>
<connect nodeField="rotscalenode" protoField="rotscalenode"></connect>
<connect nodeField="set_startpoint" protoField="set_startpoint"></connect>
<connect nodeField="set_endpoint" protoField="set_endpoint"></connect>
</IS>
<#sourceCode/>
</Script>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare44.name = "x3dconnector";
let ProtoInterface45 = browser.currentScene.createNode("ProtoInterface");
let field46 = browser.currentScene.createNode("field");
field46.name = "startnode";
field46.accessType = "initializeOnly";
field46.type = "SFNode";
ProtoInterface45.field = new MFNode();

ProtoInterface45.field[0] = field46;

let field47 = browser.currentScene.createNode("field");
field47.name = "endnode";
field47.accessType = "initializeOnly";
field47.type = "SFNode";
ProtoInterface45.field[1] = field47;

let field48 = browser.currentScene.createNode("field");
field48.name = "transnode";
field48.accessType = "inputOutput";
field48.type = "SFNode";
ProtoInterface45.field[2] = field48;

let field49 = browser.currentScene.createNode("field");
field49.name = "rotscalenode";
field49.accessType = "inputOutput";
field49.type = "SFNode";
ProtoInterface45.field[3] = field49;

let field50 = browser.currentScene.createNode("field");
field50.name = "set_startpoint";
field50.accessType = "inputOnly";
field50.type = "SFVec3f";
ProtoInterface45.field[4] = field50;

let field51 = browser.currentScene.createNode("field");
field51.name = "set_endpoint";
field51.accessType = "inputOnly";
field51.type = "SFVec3f";
ProtoInterface45.field[5] = field51;

ProtoDeclare44.protoInterface = ProtoInterface45;

let ProtoBody52 = browser.currentScene.createNode("ProtoBody");
let Script53 = browser.currentScene.createNode("Script");
Script53.DEF = "S1";
let field54 = browser.currentScene.createNode("field");
field54.name = "startnode";
field54.accessType = "initializeOnly";
field54.type = "SFNode";
Script53.field = new MFNode();

Script53.field[0] = field54;

let field55 = browser.currentScene.createNode("field");
field55.name = "endnode";
field55.accessType = "initializeOnly";
field55.type = "SFNode";
Script53.field[1] = field55;

let field56 = browser.currentScene.createNode("field");
field56.name = "transnode";
field56.accessType = "initializeOnly";
field56.type = "SFNode";
Script53.field[2] = field56;

let field57 = browser.currentScene.createNode("field");
field57.name = "rotscalenode";
field57.accessType = "initializeOnly";
field57.type = "SFNode";
Script53.field[3] = field57;

let field58 = browser.currentScene.createNode("field");
field58.name = "set_startpoint";
field58.accessType = "inputOnly";
field58.type = "SFVec3f";
Script53.field[4] = field58;

let field59 = browser.currentScene.createNode("field");
field59.name = "set_endpoint";
field59.accessType = "inputOnly";
field59.type = "SFVec3f";
Script53.field[5] = field59;

let IS60 = browser.currentScene.createNode("IS");
let connect61 = browser.currentScene.createNode("connect");
connect61.nodeField = "startnode";
connect61.protoField = "startnode";
IS60.connect = new MFNode();

IS60.connect[0] = connect61;

let connect62 = browser.currentScene.createNode("connect");
connect62.nodeField = "endnode";
connect62.protoField = "endnode";
IS60.connect[1] = connect62;

let connect63 = browser.currentScene.createNode("connect");
connect63.nodeField = "transnode";
connect63.protoField = "transnode";
IS60.connect[2] = connect63;

let connect64 = browser.currentScene.createNode("connect");
connect64.nodeField = "rotscalenode";
connect64.protoField = "rotscalenode";
IS60.connect[3] = connect64;

let connect65 = browser.currentScene.createNode("connect");
connect65.nodeField = "set_startpoint";
connect65.protoField = "set_startpoint";
IS60.connect[4] = connect65;

let connect66 = browser.currentScene.createNode("connect");
connect66.nodeField = "set_endpoint";
connect66.protoField = "set_endpoint";
IS60.connect[5] = connect66;

Script53.iS = IS60;

let #sourceCode67 = browser.currentScene.createNode("#sourceCode");
Script53.#sourceCode[6] = #sourceCode67;

ProtoBody52.children = new MFNode();

ProtoBody52.children[0] = Script53;

ProtoDeclare44.protoBody = ProtoBody52;

browser.currentScene.children[6] = ProtoDeclare44;

let ProtoInstance68 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance68.name = "x3dconnector";
ProtoInstance68.DEF = "connector1";
let fieldValue69 = browser.currentScene.createNode("fieldValue");
fieldValue69.name = "startnode";
let Transform70 = browser.currentScene.createNode("Transform");
Transform70.USE = "G1";
fieldValue69.children = new MFNode();

fieldValue69.children[0] = Transform70;

ProtoInstance68.fieldValue = new MFNode();

ProtoInstance68.fieldValue[0] = fieldValue69;

let fieldValue71 = browser.currentScene.createNode("fieldValue");
fieldValue71.name = "endnode";
let Transform72 = browser.currentScene.createNode("Transform");
Transform72.USE = "G2";
fieldValue71.children = new MFNode();

fieldValue71.children[0] = Transform72;

ProtoInstance68.fieldValue[1] = fieldValue71;

let fieldValue73 = browser.currentScene.createNode("fieldValue");
fieldValue73.name = "transnode";
let Transform74 = browser.currentScene.createNode("Transform");
Transform74.USE = "transC1";
fieldValue73.children = new MFNode();

fieldValue73.children[0] = Transform74;

ProtoInstance68.fieldValue[2] = fieldValue73;

let fieldValue75 = browser.currentScene.createNode("fieldValue");
fieldValue75.name = "rotscalenode";
let Transform76 = browser.currentScene.createNode("Transform");
Transform76.USE = "rotscaleC1";
fieldValue75.children = new MFNode();

fieldValue75.children[0] = Transform76;

ProtoInstance68.fieldValue[3] = fieldValue75;

let fieldValue77 = browser.currentScene.createNode("fieldValue");
fieldValue77.name = "set_startpoint";
ProtoInstance68.fieldValue[4] = fieldValue77;

let fieldValue78 = browser.currentScene.createNode("fieldValue");
fieldValue78.name = "set_endpoint";
ProtoInstance68.fieldValue[5] = fieldValue78;

browser.currentScene.children[7] = ProtoInstance68;

let ROUTE79 = browser.currentScene.createNode("ROUTE");
ROUTE79.fromNode = "G1";
ROUTE79.fromField = "translation_changed";
ROUTE79.toNode = "connector1";
ROUTE79.toField = "set_startpoint";
browser.currentScene.children[8] = ROUTE79;

let ROUTE80 = browser.currentScene.createNode("ROUTE");
ROUTE80.fromNode = "G2";
ROUTE80.fromField = "translation_changed";
ROUTE80.toNode = "connector1";
ROUTE80.toField = "set_endpoint";
browser.currentScene.children[9] = ROUTE80;

