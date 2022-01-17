let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "arc";
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
meta5.content = "https://coderextreme.net/X3DJSONLD/x3dconnectorProto.x3d";
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

ProtoBody13.children = new MFNode();

ProtoBody13.children[0] = Transform14;

ProtoDeclare10.protoBody = ProtoBody13;

browser.currentScene.children[2] = ProtoDeclare10;

let ProtoDeclare33 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="x3dconnector" ><ProtoInterface><field name="startnode" accessType="initializeOnly" type="SFNode"></field>
<field name="endnode" accessType="initializeOnly" type="SFNode"></field>
<field name="set_startpoint" accessType="inputOnly" type="SFVec3f"></field>
<field name="set_endpoint" accessType="inputOnly" type="SFVec3f"></field>
</ProtoInterface>
<ProtoBody><Group><Transform DEF="trans"><Transform DEF="rotscale"><Shape><Appearance><Material diffuseColor="0.2 0.7 0.7" transparency="0.5"></Material>
</Appearance>
<Cylinder containerField="geometry" radius="0.05"></Cylinder>
</Shape>
</Transform>
</Transform>
<Script DEF="S1"><field name="startnode" accessType="initializeOnly" type="SFNode"></field>
<field name="endnode" accessType="initializeOnly" type="SFNode"></field>
<field name="position" accessType="inputOutput" type="SFNode"><Transform USE="trans"></Transform>
</field>
<field name="rotscale" accessType="inputOutput" type="SFNode"><Transform USE="rotscale"></Transform>
</field>
<field name="set_startpoint" accessType="inputOnly" type="SFVec3f"></field>
<field name="set_endpoint" accessType="inputOnly" type="SFVec3f"></field>
<IS><connect nodeField="startnode" protoField="startnode"></connect>
<connect nodeField="endnode" protoField="endnode"></connect>
<connect nodeField="set_startpoint" protoField="set_startpoint"></connect>
<connect nodeField="set_endpoint" protoField="set_endpoint"></connect>
</IS>
<#sourceCode/>
</Script>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare33.name = "x3dconnector";
let ProtoInterface34 = browser.currentScene.createNode("ProtoInterface");
let field35 = browser.currentScene.createNode("field");
field35.name = "startnode";
field35.accessType = "initializeOnly";
field35.type = "SFNode";
ProtoInterface34.field = new MFNode();

ProtoInterface34.field[0] = field35;

let field36 = browser.currentScene.createNode("field");
field36.name = "endnode";
field36.accessType = "initializeOnly";
field36.type = "SFNode";
ProtoInterface34.field[1] = field36;

let field37 = browser.currentScene.createNode("field");
field37.name = "set_startpoint";
field37.accessType = "inputOnly";
field37.type = "SFVec3f";
ProtoInterface34.field[2] = field37;

let field38 = browser.currentScene.createNode("field");
field38.name = "set_endpoint";
field38.accessType = "inputOnly";
field38.type = "SFVec3f";
ProtoInterface34.field[3] = field38;

ProtoDeclare33.protoInterface = ProtoInterface34;

let ProtoBody39 = browser.currentScene.createNode("ProtoBody");
let Group40 = browser.currentScene.createNode("Group");
let Transform41 = browser.currentScene.createNode("Transform");
Transform41.DEF = "trans";
let Transform42 = browser.currentScene.createNode("Transform");
Transform42.DEF = "rotscale";
let Shape43 = browser.currentScene.createNode("Shape");
let Appearance44 = browser.currentScene.createNode("Appearance");
let Material45 = browser.currentScene.createNode("Material");
Material45.diffuseColor = new SFColor(new float[0.2,0.7,0.7]);
Material45.transparency = 0.5;
Appearance44.material = Material45;

Shape43.appearance = Appearance44;

let Cylinder46 = browser.currentScene.createNode("Cylinder");
Cylinder46.radius = 0.05;
Shape43.geometry = Cylinder46;

Transform42.children = new MFNode();

Transform42.children[0] = Shape43;

Transform41.children = new MFNode();

Transform41.children[0] = Transform42;

Group40.children = new MFNode();

Group40.children[0] = Transform41;

let Script47 = browser.currentScene.createNode("Script");
Script47.DEF = "S1";
let field48 = browser.currentScene.createNode("field");
field48.name = "startnode";
field48.accessType = "initializeOnly";
field48.type = "SFNode";
Script47.field = new MFNode();

Script47.field[0] = field48;

let field49 = browser.currentScene.createNode("field");
field49.name = "endnode";
field49.accessType = "initializeOnly";
field49.type = "SFNode";
Script47.field[1] = field49;

let field50 = browser.currentScene.createNode("field");
field50.name = "position";
field50.accessType = "inputOutput";
field50.type = "SFNode";
let Transform51 = browser.currentScene.createNode("Transform");
Transform51.USE = "trans";
field50.children = new MFNode();

field50.children[0] = Transform51;

Script47.field[2] = field50;

let field52 = browser.currentScene.createNode("field");
field52.name = "rotscale";
field52.accessType = "inputOutput";
field52.type = "SFNode";
let Transform53 = browser.currentScene.createNode("Transform");
Transform53.USE = "rotscale";
field52.children = new MFNode();

field52.children[0] = Transform53;

Script47.field[3] = field52;

let field54 = browser.currentScene.createNode("field");
field54.name = "set_startpoint";
field54.accessType = "inputOnly";
field54.type = "SFVec3f";
Script47.field[4] = field54;

let field55 = browser.currentScene.createNode("field");
field55.name = "set_endpoint";
field55.accessType = "inputOnly";
field55.type = "SFVec3f";
Script47.field[5] = field55;

let IS56 = browser.currentScene.createNode("IS");
let connect57 = browser.currentScene.createNode("connect");
connect57.nodeField = "startnode";
connect57.protoField = "startnode";
IS56.connect = new MFNode();

IS56.connect[0] = connect57;

let connect58 = browser.currentScene.createNode("connect");
connect58.nodeField = "endnode";
connect58.protoField = "endnode";
IS56.connect[1] = connect58;

let connect59 = browser.currentScene.createNode("connect");
connect59.nodeField = "set_startpoint";
connect59.protoField = "set_startpoint";
IS56.connect[2] = connect59;

let connect60 = browser.currentScene.createNode("connect");
connect60.nodeField = "set_endpoint";
connect60.protoField = "set_endpoint";
IS56.connect[3] = connect60;

Script47.iS = IS56;

let #sourceCode61 = browser.currentScene.createNode("#sourceCode");
Script47.#sourceCode[6] = #sourceCode61;

Group40.children[1] = Script47;

ProtoBody39.children = new MFNode();

ProtoBody39.children[0] = Group40;

ProtoDeclare33.protoBody = ProtoBody39;

browser.currentScene.children[3] = ProtoDeclare33;

let ProtoInstance62 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance62.name = "point";
ProtoInstance62.DEF = "G1";
browser.currentScene.children[4] = ProtoInstance62;

let ProtoInstance63 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance63.name = "point";
ProtoInstance63.DEF = "G2";
browser.currentScene.children[5] = ProtoInstance63;

let ProtoInstance64 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance64.name = "point";
ProtoInstance64.DEF = "G3";
browser.currentScene.children[6] = ProtoInstance64;

let ProtoInstance65 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance65.name = "point";
ProtoInstance65.DEF = "G4";
browser.currentScene.children[7] = ProtoInstance65;

let ProtoInstance66 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance66.name = "x3dconnector";
ProtoInstance66.DEF = "connector1";
let fieldValue67 = browser.currentScene.createNode("fieldValue");
fieldValue67.name = "startnode";
let ProtoInstance68 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance68.USE = "G1";
fieldValue67.children = new MFNode();

fieldValue67.children[0] = ProtoInstance68;

ProtoInstance66.fieldValue = new MFNode();

ProtoInstance66.fieldValue[0] = fieldValue67;

let fieldValue69 = browser.currentScene.createNode("fieldValue");
fieldValue69.name = "endnode";
let ProtoInstance70 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance70.USE = "G2";
fieldValue69.children = new MFNode();

fieldValue69.children[0] = ProtoInstance70;

ProtoInstance66.fieldValue[1] = fieldValue69;

let fieldValue71 = browser.currentScene.createNode("fieldValue");
fieldValue71.name = "set_startpoint";
ProtoInstance66.fieldValue[2] = fieldValue71;

let fieldValue72 = browser.currentScene.createNode("fieldValue");
fieldValue72.name = "set_endpoint";
ProtoInstance66.fieldValue[3] = fieldValue72;

browser.currentScene.children[8] = ProtoInstance66;

let ProtoInstance73 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance73.name = "x3dconnector";
ProtoInstance73.DEF = "connector2";
let fieldValue74 = browser.currentScene.createNode("fieldValue");
fieldValue74.name = "startnode";
let ProtoInstance75 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance75.USE = "G1";
fieldValue74.children = new MFNode();

fieldValue74.children[0] = ProtoInstance75;

ProtoInstance73.fieldValue = new MFNode();

ProtoInstance73.fieldValue[0] = fieldValue74;

let fieldValue76 = browser.currentScene.createNode("fieldValue");
fieldValue76.name = "endnode";
let ProtoInstance77 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance77.USE = "G3";
fieldValue76.children = new MFNode();

fieldValue76.children[0] = ProtoInstance77;

ProtoInstance73.fieldValue[1] = fieldValue76;

let fieldValue78 = browser.currentScene.createNode("fieldValue");
fieldValue78.name = "set_startpoint";
ProtoInstance73.fieldValue[2] = fieldValue78;

let fieldValue79 = browser.currentScene.createNode("fieldValue");
fieldValue79.name = "set_endpoint";
ProtoInstance73.fieldValue[3] = fieldValue79;

browser.currentScene.children[9] = ProtoInstance73;

let ProtoInstance80 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance80.name = "x3dconnector";
ProtoInstance80.DEF = "connector3";
let fieldValue81 = browser.currentScene.createNode("fieldValue");
fieldValue81.name = "startnode";
let ProtoInstance82 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance82.USE = "G1";
fieldValue81.children = new MFNode();

fieldValue81.children[0] = ProtoInstance82;

ProtoInstance80.fieldValue = new MFNode();

ProtoInstance80.fieldValue[0] = fieldValue81;

let fieldValue83 = browser.currentScene.createNode("fieldValue");
fieldValue83.name = "endnode";
let ProtoInstance84 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance84.USE = "G4";
fieldValue83.children = new MFNode();

fieldValue83.children[0] = ProtoInstance84;

ProtoInstance80.fieldValue[1] = fieldValue83;

let fieldValue85 = browser.currentScene.createNode("fieldValue");
fieldValue85.name = "set_startpoint";
ProtoInstance80.fieldValue[2] = fieldValue85;

let fieldValue86 = browser.currentScene.createNode("fieldValue");
fieldValue86.name = "set_endpoint";
ProtoInstance80.fieldValue[3] = fieldValue86;

browser.currentScene.children[10] = ProtoInstance80;

let ROUTE87 = browser.currentScene.createNode("ROUTE");
ROUTE87.fromNode = "G1";
ROUTE87.fromField = "translation";
ROUTE87.toNode = "connector1";
ROUTE87.toField = "set_startpoint";
browser.currentScene.children[11] = ROUTE87;

let ROUTE88 = browser.currentScene.createNode("ROUTE");
ROUTE88.fromNode = "G2";
ROUTE88.fromField = "translation";
ROUTE88.toNode = "connector1";
ROUTE88.toField = "set_endpoint";
browser.currentScene.children[12] = ROUTE88;

let ROUTE89 = browser.currentScene.createNode("ROUTE");
ROUTE89.fromNode = "G1";
ROUTE89.fromField = "translation";
ROUTE89.toNode = "connector2";
ROUTE89.toField = "set_startpoint";
browser.currentScene.children[13] = ROUTE89;

let ROUTE90 = browser.currentScene.createNode("ROUTE");
ROUTE90.fromNode = "G3";
ROUTE90.fromField = "translation";
ROUTE90.toNode = "connector2";
ROUTE90.toField = "set_endpoint";
browser.currentScene.children[14] = ROUTE90;

let ROUTE91 = browser.currentScene.createNode("ROUTE");
ROUTE91.fromNode = "G1";
ROUTE91.fromField = "translation";
ROUTE91.toNode = "connector3";
ROUTE91.toField = "set_startpoint";
browser.currentScene.children[15] = ROUTE91;

let ROUTE92 = browser.currentScene.createNode("ROUTE");
ROUTE92.fromNode = "G4";
ROUTE92.fromField = "translation";
ROUTE92.toNode = "connector3";
ROUTE92.toField = "set_endpoint";
browser.currentScene.children[16] = ROUTE92;

