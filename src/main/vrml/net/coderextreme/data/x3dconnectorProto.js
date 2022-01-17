let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "x3dconnectorProto";
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

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "license";
meta7.content = "https://www.web3d.org/x3d/content/examples/license.html";
head1.meta[5] = meta7;

head = head1;

let WorldInfo9 = browser.currentScene.createNode("WorldInfo");
WorldInfo9.title = "Connector Proto";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo9;

let Viewpoint10 = browser.currentScene.createNode("Viewpoint");
Viewpoint10.position = new SFVec3f(new float[0,0,5]);
Viewpoint10.description = "Only Viewpoint";
browser.currentScene.children[1] = Viewpoint10;

let Background11 = browser.currentScene.createNode("Background");
Background11.skyColor = new MFColor(new float[0.4,0.4,0.4]);
browser.currentScene.children[2] = Background11;

let Transform12 = browser.currentScene.createNode("Transform");
Transform12.DEF = "G1";
let Shape13 = browser.currentScene.createNode("Shape");
let Appearance14 = browser.currentScene.createNode("Appearance");
let Material15 = browser.currentScene.createNode("Material");
Material15.diffuseColor = new SFColor(new float[0.7,0.2,0.2]);
Appearance14.material = Material15;

Shape13.appearance = Appearance14;

let Sphere16 = browser.currentScene.createNode("Sphere");
Sphere16.radius = 0.1;
Shape13.geometry = Sphere16;

Transform12.children = new MFNode();

Transform12.children[0] = Shape13;

let PlaneSensor17 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor17.description = "Grab to move";
PlaneSensor17.DEF = "PS1";
Transform12.children[1] = PlaneSensor17;

let ROUTE18 = browser.currentScene.createNode("ROUTE");
ROUTE18.fromNode = "PS1";
ROUTE18.fromField = "translation_changed";
ROUTE18.toNode = "G1";
ROUTE18.toField = "set_translation";
Transform12.children[2] = ROUTE18;

browser.currentScene.children[3] = Transform12;

let Transform19 = browser.currentScene.createNode("Transform");
Transform19.DEF = "G2";
Transform19.translation = new SFVec3f(new float[1,-1,0.01]);
let Shape20 = browser.currentScene.createNode("Shape");
let Appearance21 = browser.currentScene.createNode("Appearance");
let Material22 = browser.currentScene.createNode("Material");
Material22.diffuseColor = new SFColor(new float[0.2,0.7,0.2]);
Appearance21.material = Material22;

Shape20.appearance = Appearance21;

let Sphere23 = browser.currentScene.createNode("Sphere");
Sphere23.radius = 0.1;
Shape20.geometry = Sphere23;

Transform19.children = new MFNode();

Transform19.children[0] = Shape20;

let PlaneSensor24 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor24.description = "Grab to move";
PlaneSensor24.offset = new SFVec3f(new float[1,-1,0.01]);
PlaneSensor24.DEF = "PS2";
Transform19.children[1] = PlaneSensor24;

let ROUTE25 = browser.currentScene.createNode("ROUTE");
ROUTE25.fromNode = "PS2";
ROUTE25.fromField = "translation_changed";
ROUTE25.toNode = "G2";
ROUTE25.toField = "set_translation";
Transform19.children[2] = ROUTE25;

browser.currentScene.children[4] = Transform19;

let Transform26 = browser.currentScene.createNode("Transform");
Transform26.DEF = "G3";
Transform26.translation = new SFVec3f(new float[1,1,0.01]);
let Shape27 = browser.currentScene.createNode("Shape");
let Appearance28 = browser.currentScene.createNode("Appearance");
let Material29 = browser.currentScene.createNode("Material");
Material29.diffuseColor = new SFColor(new float[0.2,0.7,0.2]);
Appearance28.material = Material29;

Shape27.appearance = Appearance28;

let Sphere30 = browser.currentScene.createNode("Sphere");
Sphere30.radius = 0.1;
Shape27.geometry = Sphere30;

Transform26.children = new MFNode();

Transform26.children[0] = Shape27;

let PlaneSensor31 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor31.description = "Grab to move";
PlaneSensor31.offset = new SFVec3f(new float[1,1,0.01]);
PlaneSensor31.DEF = "PS3";
Transform26.children[1] = PlaneSensor31;

let ROUTE32 = browser.currentScene.createNode("ROUTE");
ROUTE32.fromNode = "PS3";
ROUTE32.fromField = "translation_changed";
ROUTE32.toNode = "G3";
ROUTE32.toField = "set_translation";
Transform26.children[2] = ROUTE32;

browser.currentScene.children[5] = Transform26;

let Transform33 = browser.currentScene.createNode("Transform");
Transform33.DEF = "G4";
Transform33.translation = new SFVec3f(new float[-1,1,0.01]);
let Shape34 = browser.currentScene.createNode("Shape");
let Appearance35 = browser.currentScene.createNode("Appearance");
let Material36 = browser.currentScene.createNode("Material");
Material36.diffuseColor = new SFColor(new float[0.2,0.7,0.2]);
Appearance35.material = Material36;

Shape34.appearance = Appearance35;

let Sphere37 = browser.currentScene.createNode("Sphere");
Sphere37.radius = 0.1;
Shape34.geometry = Sphere37;

Transform33.children = new MFNode();

Transform33.children[0] = Shape34;

let PlaneSensor38 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor38.description = "Grab to move";
PlaneSensor38.offset = new SFVec3f(new float[-1,1,0.01]);
PlaneSensor38.DEF = "PS4";
Transform33.children[1] = PlaneSensor38;

let ROUTE39 = browser.currentScene.createNode("ROUTE");
ROUTE39.fromNode = "PS4";
ROUTE39.fromField = "translation_changed";
ROUTE39.toNode = "G4";
ROUTE39.toField = "set_translation";
Transform33.children[2] = ROUTE39;

browser.currentScene.children[6] = Transform33;

let Transform40 = browser.currentScene.createNode("Transform");
Transform40.DEF = "transC1";
let Transform41 = browser.currentScene.createNode("Transform");
Transform41.DEF = "rotscaleC1";
let Shape42 = browser.currentScene.createNode("Shape");
let Appearance43 = browser.currentScene.createNode("Appearance");
let Material44 = browser.currentScene.createNode("Material");
Material44.diffuseColor = new SFColor(new float[0.2,0.7,0.7]);
Material44.transparency = 0.5;
Appearance43.material = Material44;

Shape42.appearance = Appearance43;

let Cylinder45 = browser.currentScene.createNode("Cylinder");
Cylinder45.radius = 0.05;
Shape42.geometry = Cylinder45;

Transform41.children = new MFNode();

Transform41.children[0] = Shape42;

Transform40.children = new MFNode();

Transform40.children[0] = Transform41;

browser.currentScene.children[7] = Transform40;

let Transform46 = browser.currentScene.createNode("Transform");
Transform46.DEF = "transC2";
let Transform47 = browser.currentScene.createNode("Transform");
Transform47.DEF = "rotscaleC2";
let Shape48 = browser.currentScene.createNode("Shape");
let Appearance49 = browser.currentScene.createNode("Appearance");
let Material50 = browser.currentScene.createNode("Material");
Material50.diffuseColor = new SFColor(new float[0.2,0.7,0.7]);
Material50.transparency = 0.5;
Appearance49.material = Material50;

Shape48.appearance = Appearance49;

let Cylinder51 = browser.currentScene.createNode("Cylinder");
Cylinder51.radius = 0.05;
Shape48.geometry = Cylinder51;

Transform47.children = new MFNode();

Transform47.children[0] = Shape48;

Transform46.children = new MFNode();

Transform46.children[0] = Transform47;

browser.currentScene.children[8] = Transform46;

let Transform52 = browser.currentScene.createNode("Transform");
Transform52.DEF = "transC3";
let Transform53 = browser.currentScene.createNode("Transform");
Transform53.DEF = "rotscaleC3";
let Shape54 = browser.currentScene.createNode("Shape");
let Appearance55 = browser.currentScene.createNode("Appearance");
let Material56 = browser.currentScene.createNode("Material");
Material56.diffuseColor = new SFColor(new float[0.2,0.7,0.7]);
Material56.transparency = 0.5;
Appearance55.material = Material56;

Shape54.appearance = Appearance55;

let Cylinder57 = browser.currentScene.createNode("Cylinder");
Cylinder57.radius = 0.05;
Shape54.geometry = Cylinder57;

Transform53.children = new MFNode();

Transform53.children[0] = Shape54;

Transform52.children = new MFNode();

Transform52.children[0] = Transform53;

browser.currentScene.children[9] = Transform52;

let ProtoDeclare58 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="x3dconnector" ><ProtoInterface><field name="startnode" accessType="initializeOnly" type="SFNode"></field>
<field name="endnode" accessType="initializeOnly" type="SFNode"></field>
<field name="transnode" accessType="initializeOnly" type="SFNode"></field>
<field name="rotscalenode" accessType="initializeOnly" type="SFNode"></field>
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
ProtoDeclare58.name = "x3dconnector";
let ProtoInterface59 = browser.currentScene.createNode("ProtoInterface");
let field60 = browser.currentScene.createNode("field");
field60.name = "startnode";
field60.accessType = "initializeOnly";
field60.type = "SFNode";
ProtoInterface59.field = new MFNode();

ProtoInterface59.field[0] = field60;

let field61 = browser.currentScene.createNode("field");
field61.name = "endnode";
field61.accessType = "initializeOnly";
field61.type = "SFNode";
ProtoInterface59.field[1] = field61;

let field62 = browser.currentScene.createNode("field");
field62.name = "transnode";
field62.accessType = "initializeOnly";
field62.type = "SFNode";
ProtoInterface59.field[2] = field62;

let field63 = browser.currentScene.createNode("field");
field63.name = "rotscalenode";
field63.accessType = "initializeOnly";
field63.type = "SFNode";
ProtoInterface59.field[3] = field63;

let field64 = browser.currentScene.createNode("field");
field64.name = "set_startpoint";
field64.accessType = "inputOnly";
field64.type = "SFVec3f";
ProtoInterface59.field[4] = field64;

let field65 = browser.currentScene.createNode("field");
field65.name = "set_endpoint";
field65.accessType = "inputOnly";
field65.type = "SFVec3f";
ProtoInterface59.field[5] = field65;

ProtoDeclare58.protoInterface = ProtoInterface59;

let ProtoBody66 = browser.currentScene.createNode("ProtoBody");
let Script67 = browser.currentScene.createNode("Script");
Script67.DEF = "S1";
let field68 = browser.currentScene.createNode("field");
field68.name = "startnode";
field68.accessType = "initializeOnly";
field68.type = "SFNode";
Script67.field = new MFNode();

Script67.field[0] = field68;

let field69 = browser.currentScene.createNode("field");
field69.name = "endnode";
field69.accessType = "initializeOnly";
field69.type = "SFNode";
Script67.field[1] = field69;

let field70 = browser.currentScene.createNode("field");
field70.name = "transnode";
field70.accessType = "initializeOnly";
field70.type = "SFNode";
Script67.field[2] = field70;

let field71 = browser.currentScene.createNode("field");
field71.name = "rotscalenode";
field71.accessType = "initializeOnly";
field71.type = "SFNode";
Script67.field[3] = field71;

let field72 = browser.currentScene.createNode("field");
field72.name = "set_startpoint";
field72.accessType = "inputOnly";
field72.type = "SFVec3f";
Script67.field[4] = field72;

let field73 = browser.currentScene.createNode("field");
field73.name = "set_endpoint";
field73.accessType = "inputOnly";
field73.type = "SFVec3f";
Script67.field[5] = field73;

let IS74 = browser.currentScene.createNode("IS");
let connect75 = browser.currentScene.createNode("connect");
connect75.nodeField = "startnode";
connect75.protoField = "startnode";
IS74.connect = new MFNode();

IS74.connect[0] = connect75;

let connect76 = browser.currentScene.createNode("connect");
connect76.nodeField = "endnode";
connect76.protoField = "endnode";
IS74.connect[1] = connect76;

let connect77 = browser.currentScene.createNode("connect");
connect77.nodeField = "transnode";
connect77.protoField = "transnode";
IS74.connect[2] = connect77;

let connect78 = browser.currentScene.createNode("connect");
connect78.nodeField = "rotscalenode";
connect78.protoField = "rotscalenode";
IS74.connect[3] = connect78;

let connect79 = browser.currentScene.createNode("connect");
connect79.nodeField = "set_startpoint";
connect79.protoField = "set_startpoint";
IS74.connect[4] = connect79;

let connect80 = browser.currentScene.createNode("connect");
connect80.nodeField = "set_endpoint";
connect80.protoField = "set_endpoint";
IS74.connect[5] = connect80;

Script67.iS = IS74;

let #sourceCode81 = browser.currentScene.createNode("#sourceCode");
Script67.#sourceCode[6] = #sourceCode81;

ProtoBody66.children = new MFNode();

ProtoBody66.children[0] = Script67;

ProtoDeclare58.protoBody = ProtoBody66;

browser.currentScene.children[10] = ProtoDeclare58;

let ProtoInstance82 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance82.name = "x3dconnector";
ProtoInstance82.DEF = "connector1";
let fieldValue83 = browser.currentScene.createNode("fieldValue");
fieldValue83.name = "startnode";
let Transform84 = browser.currentScene.createNode("Transform");
Transform84.USE = "G1";
fieldValue83.children = new MFNode();

fieldValue83.children[0] = Transform84;

ProtoInstance82.fieldValue = new MFNode();

ProtoInstance82.fieldValue[0] = fieldValue83;

let fieldValue85 = browser.currentScene.createNode("fieldValue");
fieldValue85.name = "endnode";
let Transform86 = browser.currentScene.createNode("Transform");
Transform86.USE = "G2";
fieldValue85.children = new MFNode();

fieldValue85.children[0] = Transform86;

ProtoInstance82.fieldValue[1] = fieldValue85;

let fieldValue87 = browser.currentScene.createNode("fieldValue");
fieldValue87.name = "transnode";
let Transform88 = browser.currentScene.createNode("Transform");
Transform88.USE = "transC1";
fieldValue87.children = new MFNode();

fieldValue87.children[0] = Transform88;

ProtoInstance82.fieldValue[2] = fieldValue87;

let fieldValue89 = browser.currentScene.createNode("fieldValue");
fieldValue89.name = "rotscalenode";
let Transform90 = browser.currentScene.createNode("Transform");
Transform90.USE = "rotscaleC1";
fieldValue89.children = new MFNode();

fieldValue89.children[0] = Transform90;

ProtoInstance82.fieldValue[3] = fieldValue89;

let fieldValue91 = browser.currentScene.createNode("fieldValue");
fieldValue91.name = "set_startpoint";
fieldValue91.value = "0 0 0";
ProtoInstance82.fieldValue[4] = fieldValue91;

let fieldValue92 = browser.currentScene.createNode("fieldValue");
fieldValue92.name = "set_endpoint";
fieldValue92.value = "0 0 0";
ProtoInstance82.fieldValue[5] = fieldValue92;

browser.currentScene.children[11] = ProtoInstance82;

let ProtoInstance93 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance93.name = "x3dconnector";
ProtoInstance93.DEF = "connector2";
let fieldValue94 = browser.currentScene.createNode("fieldValue");
fieldValue94.name = "startnode";
let Transform95 = browser.currentScene.createNode("Transform");
Transform95.USE = "G1";
fieldValue94.children = new MFNode();

fieldValue94.children[0] = Transform95;

ProtoInstance93.fieldValue = new MFNode();

ProtoInstance93.fieldValue[0] = fieldValue94;

let fieldValue96 = browser.currentScene.createNode("fieldValue");
fieldValue96.name = "endnode";
let Transform97 = browser.currentScene.createNode("Transform");
Transform97.USE = "G3";
fieldValue96.children = new MFNode();

fieldValue96.children[0] = Transform97;

ProtoInstance93.fieldValue[1] = fieldValue96;

let fieldValue98 = browser.currentScene.createNode("fieldValue");
fieldValue98.name = "transnode";
let Transform99 = browser.currentScene.createNode("Transform");
Transform99.USE = "transC2";
fieldValue98.children = new MFNode();

fieldValue98.children[0] = Transform99;

ProtoInstance93.fieldValue[2] = fieldValue98;

let fieldValue100 = browser.currentScene.createNode("fieldValue");
fieldValue100.name = "rotscalenode";
let Transform101 = browser.currentScene.createNode("Transform");
Transform101.USE = "rotscaleC2";
fieldValue100.children = new MFNode();

fieldValue100.children[0] = Transform101;

ProtoInstance93.fieldValue[3] = fieldValue100;

let fieldValue102 = browser.currentScene.createNode("fieldValue");
fieldValue102.name = "set_startpoint";
fieldValue102.value = "0 0 0";
ProtoInstance93.fieldValue[4] = fieldValue102;

let fieldValue103 = browser.currentScene.createNode("fieldValue");
fieldValue103.name = "set_endpoint";
fieldValue103.value = "0 0 0";
ProtoInstance93.fieldValue[5] = fieldValue103;

browser.currentScene.children[12] = ProtoInstance93;

let ProtoInstance104 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance104.name = "x3dconnector";
ProtoInstance104.DEF = "connector3";
let fieldValue105 = browser.currentScene.createNode("fieldValue");
fieldValue105.name = "startnode";
let Transform106 = browser.currentScene.createNode("Transform");
Transform106.USE = "G1";
fieldValue105.children = new MFNode();

fieldValue105.children[0] = Transform106;

ProtoInstance104.fieldValue = new MFNode();

ProtoInstance104.fieldValue[0] = fieldValue105;

let fieldValue107 = browser.currentScene.createNode("fieldValue");
fieldValue107.name = "endnode";
let Transform108 = browser.currentScene.createNode("Transform");
Transform108.USE = "G4";
fieldValue107.children = new MFNode();

fieldValue107.children[0] = Transform108;

ProtoInstance104.fieldValue[1] = fieldValue107;

let fieldValue109 = browser.currentScene.createNode("fieldValue");
fieldValue109.name = "transnode";
let Transform110 = browser.currentScene.createNode("Transform");
Transform110.USE = "transC3";
fieldValue109.children = new MFNode();

fieldValue109.children[0] = Transform110;

ProtoInstance104.fieldValue[2] = fieldValue109;

let fieldValue111 = browser.currentScene.createNode("fieldValue");
fieldValue111.name = "rotscalenode";
let Transform112 = browser.currentScene.createNode("Transform");
Transform112.USE = "rotscaleC3";
fieldValue111.children = new MFNode();

fieldValue111.children[0] = Transform112;

ProtoInstance104.fieldValue[3] = fieldValue111;

let fieldValue113 = browser.currentScene.createNode("fieldValue");
fieldValue113.name = "set_startpoint";
fieldValue113.value = "0 0 0";
ProtoInstance104.fieldValue[4] = fieldValue113;

let fieldValue114 = browser.currentScene.createNode("fieldValue");
fieldValue114.name = "set_endpoint";
fieldValue114.value = "0 0 0";
ProtoInstance104.fieldValue[5] = fieldValue114;

browser.currentScene.children[13] = ProtoInstance104;

let ROUTE115 = browser.currentScene.createNode("ROUTE");
ROUTE115.fromNode = "G1";
ROUTE115.fromField = "translation_changed";
ROUTE115.toNode = "connector1";
ROUTE115.toField = "set_startpoint";
browser.currentScene.children[14] = ROUTE115;

let ROUTE116 = browser.currentScene.createNode("ROUTE");
ROUTE116.fromNode = "G2";
ROUTE116.fromField = "translation_changed";
ROUTE116.toNode = "connector1";
ROUTE116.toField = "set_endpoint";
browser.currentScene.children[15] = ROUTE116;

let ROUTE117 = browser.currentScene.createNode("ROUTE");
ROUTE117.fromNode = "G1";
ROUTE117.fromField = "translation_changed";
ROUTE117.toNode = "connector2";
ROUTE117.toField = "set_startpoint";
browser.currentScene.children[16] = ROUTE117;

let ROUTE118 = browser.currentScene.createNode("ROUTE");
ROUTE118.fromNode = "G3";
ROUTE118.fromField = "translation_changed";
ROUTE118.toNode = "connector2";
ROUTE118.toField = "set_endpoint";
browser.currentScene.children[17] = ROUTE118;

let ROUTE119 = browser.currentScene.createNode("ROUTE");
ROUTE119.fromNode = "G1";
ROUTE119.fromField = "translation_changed";
ROUTE119.toNode = "connector3";
ROUTE119.toField = "set_startpoint";
browser.currentScene.children[18] = ROUTE119;

let ROUTE120 = browser.currentScene.createNode("ROUTE");
ROUTE120.fromNode = "G4";
ROUTE120.fromField = "translation_changed";
ROUTE120.toNode = "connector3";
ROUTE120.toField = "set_endpoint";
browser.currentScene.children[19] = ROUTE120;

