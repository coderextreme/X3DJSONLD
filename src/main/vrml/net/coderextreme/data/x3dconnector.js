let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let Viewpoint2 = browser.currentScene.createNode("Viewpoint");
Viewpoint2.position = new SFVec3f(new float[0,0,5]);
Viewpoint2.description = "Only Viewpoint";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Viewpoint2;

let Background3 = browser.currentScene.createNode("Background");
Background3.skyColor = new MFColor(new float[0.4,0.4,0.4]);
Background3.transparency = 0;
browser.currentScene.children[1] = Background3;

let Transform4 = browser.currentScene.createNode("Transform");
Transform4.DEF = "G1";
Transform4.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform4.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape5 = browser.currentScene.createNode("Shape");
Shape5.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape5.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Appearance6 = browser.currentScene.createNode("Appearance");
let Material7 = browser.currentScene.createNode("Material");
Material7.diffuseColor = new SFColor(new float[0.7,0.2,0.2]);
Appearance6.material = Material7;

Shape5.appearance = Appearance6;

let Sphere8 = browser.currentScene.createNode("Sphere");
Sphere8.radius = 0.1;
Shape5.geometry = Sphere8;

Transform4.children = new MFNode();

Transform4.children[0] = Shape5;

let PlaneSensor9 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor9.description = "Grab to move";
PlaneSensor9.DEF = "PS1";
Transform4.children[1] = PlaneSensor9;

let ROUTE10 = browser.currentScene.createNode("ROUTE");
ROUTE10.fromNode = "PS1";
ROUTE10.fromField = "translation_changed";
ROUTE10.toNode = "G1";
ROUTE10.toField = "set_translation";
Transform4.children[2] = ROUTE10;

browser.currentScene.children[2] = Transform4;

let Transform11 = browser.currentScene.createNode("Transform");
Transform11.DEF = "G2";
Transform11.translation = new SFVec3f(new float[1,-1,0.01]);
Transform11.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform11.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape12 = browser.currentScene.createNode("Shape");
Shape12.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape12.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Appearance13 = browser.currentScene.createNode("Appearance");
let Material14 = browser.currentScene.createNode("Material");
Material14.diffuseColor = new SFColor(new float[0.2,0.7,0.2]);
Appearance13.material = Material14;

Shape12.appearance = Appearance13;

let Sphere15 = browser.currentScene.createNode("Sphere");
Sphere15.radius = 0.1;
Shape12.geometry = Sphere15;

Transform11.children = new MFNode();

Transform11.children[0] = Shape12;

let PlaneSensor16 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor16.description = "Grab to move";
PlaneSensor16.offset = new SFVec3f(new float[1,-1,0.01]);
PlaneSensor16.DEF = "PS2";
Transform11.children[1] = PlaneSensor16;

let ROUTE17 = browser.currentScene.createNode("ROUTE");
ROUTE17.fromNode = "PS2";
ROUTE17.fromField = "translation_changed";
ROUTE17.toNode = "G2";
ROUTE17.toField = "set_translation";
Transform11.children[2] = ROUTE17;

browser.currentScene.children[3] = Transform11;

let Transform18 = browser.currentScene.createNode("Transform");
Transform18.DEF = "transC1";
Transform18.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform18.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Transform19 = browser.currentScene.createNode("Transform");
Transform19.DEF = "rotscaleC1";
Transform19.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform19.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape20 = browser.currentScene.createNode("Shape");
Shape20.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape20.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Appearance21 = browser.currentScene.createNode("Appearance");
let Material22 = browser.currentScene.createNode("Material");
Material22.diffuseColor = new SFColor(new float[0.2,0.7,0.7]);
Material22.transparency = 0.5;
Appearance21.material = Material22;

Shape20.appearance = Appearance21;

let Cylinder23 = browser.currentScene.createNode("Cylinder");
Cylinder23.radius = 0.05;
Shape20.geometry = Cylinder23;

Transform19.children = new MFNode();

Transform19.children[0] = Shape20;

Transform18.children = new MFNode();

Transform18.children[0] = Transform19;

browser.currentScene.children[4] = Transform18;

let ProtoDeclare24 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="x3dconnector" ><ProtoInterface><field name="startnode" accessType="initializeOnly" type="SFNode"></field>
<field name="endnode" accessType="initializeOnly" type="SFNode"></field>
<field name="transnode" accessType="initializeOnly" type="SFNode"></field>
<field name="rotscalenode" accessType="initializeOnly" type="SFNode"></field>
<field name="set_startpoint" accessType="inputOnly" type="SFVec3f"></field>
<field name="set_endpoint" accessType="inputOnly" type="SFVec3f"></field>
</ProtoInterface>
<ProtoBody><X3DScript DEF="S1"><field name="startnode" accessType="initializeOnly" type="SFNode"></field>
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
</X3DScript>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare24.name = "x3dconnector";
let ProtoInterface25 = browser.currentScene.createNode("ProtoInterface");
let field26 = browser.currentScene.createNode("field");
field26.name = "startnode";
field26.accessType = "initializeOnly";
field26.type = "SFNode";
ProtoInterface25.field = new MFNode();

ProtoInterface25.field[0] = field26;

let field27 = browser.currentScene.createNode("field");
field27.name = "endnode";
field27.accessType = "initializeOnly";
field27.type = "SFNode";
ProtoInterface25.field[1] = field27;

let field28 = browser.currentScene.createNode("field");
field28.name = "transnode";
field28.accessType = "initializeOnly";
field28.type = "SFNode";
ProtoInterface25.field[2] = field28;

let field29 = browser.currentScene.createNode("field");
field29.name = "rotscalenode";
field29.accessType = "initializeOnly";
field29.type = "SFNode";
ProtoInterface25.field[3] = field29;

let field30 = browser.currentScene.createNode("field");
field30.name = "set_startpoint";
field30.accessType = "inputOnly";
field30.type = "SFVec3f";
ProtoInterface25.field[4] = field30;

let field31 = browser.currentScene.createNode("field");
field31.name = "set_endpoint";
field31.accessType = "inputOnly";
field31.type = "SFVec3f";
ProtoInterface25.field[5] = field31;

ProtoDeclare24.protoInterface = ProtoInterface25;

let ProtoBody32 = browser.currentScene.createNode("ProtoBody");
let X3DScript33 = browser.currentScene.createNode("X3DScript");
X3DScript33.DEF = "S1";
let field34 = browser.currentScene.createNode("field");
field34.name = "startnode";
field34.accessType = "initializeOnly";
field34.type = "SFNode";
X3DScript33.field = new MFNode();

X3DScript33.field[0] = field34;

let field35 = browser.currentScene.createNode("field");
field35.name = "endnode";
field35.accessType = "initializeOnly";
field35.type = "SFNode";
X3DScript33.field[1] = field35;

let field36 = browser.currentScene.createNode("field");
field36.name = "transnode";
field36.accessType = "initializeOnly";
field36.type = "SFNode";
X3DScript33.field[2] = field36;

let field37 = browser.currentScene.createNode("field");
field37.name = "rotscalenode";
field37.accessType = "initializeOnly";
field37.type = "SFNode";
X3DScript33.field[3] = field37;

let field38 = browser.currentScene.createNode("field");
field38.name = "set_startpoint";
field38.accessType = "inputOnly";
field38.type = "SFVec3f";
X3DScript33.field[4] = field38;

let field39 = browser.currentScene.createNode("field");
field39.name = "set_endpoint";
field39.accessType = "inputOnly";
field39.type = "SFVec3f";
X3DScript33.field[5] = field39;

let IS40 = browser.currentScene.createNode("IS");
let connect41 = browser.currentScene.createNode("connect");
connect41.nodeField = "startnode";
connect41.protoField = "startnode";
IS40.connect = new MFNode();

IS40.connect[0] = connect41;

let connect42 = browser.currentScene.createNode("connect");
connect42.nodeField = "endnode";
connect42.protoField = "endnode";
IS40.connect[1] = connect42;

let connect43 = browser.currentScene.createNode("connect");
connect43.nodeField = "transnode";
connect43.protoField = "transnode";
IS40.connect[2] = connect43;

let connect44 = browser.currentScene.createNode("connect");
connect44.nodeField = "rotscalenode";
connect44.protoField = "rotscalenode";
IS40.connect[3] = connect44;

let connect45 = browser.currentScene.createNode("connect");
connect45.nodeField = "set_startpoint";
connect45.protoField = "set_startpoint";
IS40.connect[4] = connect45;

let connect46 = browser.currentScene.createNode("connect");
connect46.nodeField = "set_endpoint";
connect46.protoField = "set_endpoint";
IS40.connect[5] = connect46;

X3DScript33.iS = IS40;

ProtoBody32.x3DScript = X3DScript33;

ProtoDeclare24.protoBody = ProtoBody32;

browser.currentScene.children[5] = ProtoDeclare24;

let ProtoInstance47 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance47.name = "x3dconnector";
ProtoInstance47.DEF = "connector1";
let fieldValue48 = browser.currentScene.createNode("fieldValue");
fieldValue48.name = "startnode";
let Transform49 = browser.currentScene.createNode("Transform");
Transform49.USE = "G1";
fieldValue48.children = new MFNode();

fieldValue48.children[0] = Transform49;

ProtoInstance47.fieldValue = new MFNode();

ProtoInstance47.fieldValue[0] = fieldValue48;

let fieldValue50 = browser.currentScene.createNode("fieldValue");
fieldValue50.name = "endnode";
let Transform51 = browser.currentScene.createNode("Transform");
Transform51.USE = "G2";
fieldValue50.children = new MFNode();

fieldValue50.children[0] = Transform51;

ProtoInstance47.fieldValue[1] = fieldValue50;

let fieldValue52 = browser.currentScene.createNode("fieldValue");
fieldValue52.name = "transnode";
let Transform53 = browser.currentScene.createNode("Transform");
Transform53.USE = "transC1";
fieldValue52.children = new MFNode();

fieldValue52.children[0] = Transform53;

ProtoInstance47.fieldValue[2] = fieldValue52;

let fieldValue54 = browser.currentScene.createNode("fieldValue");
fieldValue54.name = "rotscalenode";
let Transform55 = browser.currentScene.createNode("Transform");
Transform55.USE = "rotscaleC1";
fieldValue54.children = new MFNode();

fieldValue54.children[0] = Transform55;

ProtoInstance47.fieldValue[3] = fieldValue54;

let fieldValue56 = browser.currentScene.createNode("fieldValue");
fieldValue56.name = "set_startpoint";
ProtoInstance47.fieldValue[4] = fieldValue56;

let fieldValue57 = browser.currentScene.createNode("fieldValue");
fieldValue57.name = "set_endpoint";
ProtoInstance47.fieldValue[5] = fieldValue57;

browser.currentScene.children[6] = ProtoInstance47;

let ROUTE58 = browser.currentScene.createNode("ROUTE");
ROUTE58.fromNode = "G1";
ROUTE58.fromField = "translation_changed";
ROUTE58.toNode = "connector1";
ROUTE58.toField = "set_startpoint";
browser.currentScene.children[7] = ROUTE58;

let ROUTE59 = browser.currentScene.createNode("ROUTE");
ROUTE59.fromNode = "G2";
ROUTE59.fromField = "translation_changed";
ROUTE59.toNode = "connector1";
ROUTE59.toField = "set_endpoint";
browser.currentScene.children[8] = ROUTE59;

