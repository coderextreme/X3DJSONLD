let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "arcold.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "creator";
meta3.content = "John Carlson";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "generator";
meta4.content = "manual";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "identifier";
meta5.content = "https://coderextreme.net/X3DJSONLD/arc.x3d";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "description";
meta6.content = "an attempt to implement an arc in a graph";
head1.meta[4] = meta6;

head = head1;

let Viewpoint8 = browser.currentScene.createNode("Viewpoint");
Viewpoint8.position = new SFVec3f(new float[0,0,5]);
Viewpoint8.description = "a moving graph";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Viewpoint8;

let Background9 = browser.currentScene.createNode("Background");
Background9.skyColor = new MFColor(new float[0.4,0.4,0.4]);
browser.currentScene.children[1] = Background9;

let Transform10 = browser.currentScene.createNode("Transform");
Transform10.DEF = "trans1";
let Transform11 = browser.currentScene.createNode("Transform");
Transform11.DEF = "rotscale1";
let Shape12 = browser.currentScene.createNode("Shape");
let Appearance13 = browser.currentScene.createNode("Appearance");
let Material14 = browser.currentScene.createNode("Material");
Material14.diffuseColor = new SFColor(new float[0.2,0.7,0.7]);
Appearance13.material = Material14;

Shape12.appearance = Appearance13;

let Cylinder15 = browser.currentScene.createNode("Cylinder");
Cylinder15.radius = 0.1;
Shape12.geometry = Cylinder15;

Transform11.children = new MFNode();

Transform11.children[0] = Shape12;

Transform10.children = new MFNode();

Transform10.children[0] = Transform11;

browser.currentScene.children[2] = Transform10;

let Transform16 = browser.currentScene.createNode("Transform");
Transform16.DEF = "trans2";
let Transform17 = browser.currentScene.createNode("Transform");
Transform17.DEF = "rotscale2";
let Shape18 = browser.currentScene.createNode("Shape");
let Appearance19 = browser.currentScene.createNode("Appearance");
let Material20 = browser.currentScene.createNode("Material");
Material20.diffuseColor = new SFColor(new float[0.2,0.7,0.7]);
Appearance19.material = Material20;

Shape18.appearance = Appearance19;

let Cylinder21 = browser.currentScene.createNode("Cylinder");
Cylinder21.radius = 0.1;
Shape18.geometry = Cylinder21;

Transform17.children = new MFNode();

Transform17.children[0] = Shape18;

Transform16.children = new MFNode();

Transform16.children[0] = Transform17;

browser.currentScene.children[3] = Transform16;

let Transform22 = browser.currentScene.createNode("Transform");
Transform22.DEF = "trans3";
let Transform23 = browser.currentScene.createNode("Transform");
Transform23.DEF = "rotscale3";
let Shape24 = browser.currentScene.createNode("Shape");
let Appearance25 = browser.currentScene.createNode("Appearance");
let Material26 = browser.currentScene.createNode("Material");
Material26.diffuseColor = new SFColor(new float[0.2,0.7,0.7]);
Appearance25.material = Material26;

Shape24.appearance = Appearance25;

let Cylinder27 = browser.currentScene.createNode("Cylinder");
Cylinder27.radius = 0.1;
Shape24.geometry = Cylinder27;

Transform23.children = new MFNode();

Transform23.children[0] = Shape24;

Transform22.children = new MFNode();

Transform22.children[0] = Transform23;

browser.currentScene.children[4] = Transform22;

let ProtoDeclare28 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
<field name="keyValue" accessType="outputOnly" type="MFVec3f"></field>
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
ProtoDeclare28.name = "point";
let ProtoInterface29 = browser.currentScene.createNode("ProtoInterface");
let field30 = browser.currentScene.createNode("field");
field30.name = "translation";
field30.accessType = "inputOutput";
field30.type = "SFVec3f";
field30.value = "0 0 0";
ProtoInterface29.field = new MFNode();

ProtoInterface29.field[0] = field30;

ProtoDeclare28.protoInterface = ProtoInterface29;

let ProtoBody31 = browser.currentScene.createNode("ProtoBody");
let Transform32 = browser.currentScene.createNode("Transform");
Transform32.DEF = "node";
let IS33 = browser.currentScene.createNode("IS");
let connect34 = browser.currentScene.createNode("connect");
connect34.nodeField = "translation";
connect34.protoField = "translation";
IS33.connect = new MFNode();

IS33.connect[0] = connect34;

Transform32.iS = IS33;

let Shape35 = browser.currentScene.createNode("Shape");
let Sphere36 = browser.currentScene.createNode("Sphere");
Sphere36.radius = 0.1;
Shape35.geometry = Sphere36;

let Appearance37 = browser.currentScene.createNode("Appearance");
let Material38 = browser.currentScene.createNode("Material");
Material38.diffuseColor = new SFColor(new float[1,0,0]);
Appearance37.material = Material38;

Shape35.appearance = Appearance37;

Transform32.children = new MFNode();

Transform32.children[0] = Shape35;

let PositionInterpolator39 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator39.DEF = "PI1";
PositionInterpolator39.key = new MFFloat(new float[0,1]);
PositionInterpolator39.keyValue = new MFVec3f(new float[0,0,0,0,5,0]);
Transform32.children[1] = PositionInterpolator39;

let Script40 = browser.currentScene.createNode("Script");
Script40.DEF = "MB1";
let field41 = browser.currentScene.createNode("field");
field41.name = "translation";
field41.accessType = "inputOutput";
field41.type = "SFVec3f";
field41.value = "50 50 0";
Script40.field = new MFNode();

Script40.field[0] = field41;

let field42 = browser.currentScene.createNode("field");
field42.name = "old";
field42.accessType = "inputOutput";
field42.type = "SFVec3f";
field42.value = "0 0 0";
Script40.field[1] = field42;

let field43 = browser.currentScene.createNode("field");
field43.name = "set_location";
field43.accessType = "inputOnly";
field43.type = "SFTime";
Script40.field[2] = field43;

let field44 = browser.currentScene.createNode("field");
field44.name = "keyValue";
field44.accessType = "outputOnly";
field44.type = "MFVec3f";
Script40.field[3] = field44;

let #sourceCode45 = browser.currentScene.createNode("#sourceCode");
Script40.#sourceCode[4] = #sourceCode45;

Transform32.children[2] = Script40;

let TimeSensor46 = browser.currentScene.createNode("TimeSensor");
TimeSensor46.DEF = "CL1";
TimeSensor46.cycleInterval = 3;
TimeSensor46.loop = True;
Transform32.children[3] = TimeSensor46;

let ROUTE47 = browser.currentScene.createNode("ROUTE");
ROUTE47.fromNode = "CL1";
ROUTE47.fromField = "cycleTime";
ROUTE47.toNode = "MB1";
ROUTE47.toField = "set_location";
Transform32.children[4] = ROUTE47;

let ROUTE48 = browser.currentScene.createNode("ROUTE");
ROUTE48.fromNode = "CL1";
ROUTE48.fromField = "fraction_changed";
ROUTE48.toNode = "PI1";
ROUTE48.toField = "set_fraction";
Transform32.children[5] = ROUTE48;

let ROUTE49 = browser.currentScene.createNode("ROUTE");
ROUTE49.fromNode = "MB1";
ROUTE49.fromField = "keyValue";
ROUTE49.toNode = "PI1";
ROUTE49.toField = "keyValue";
Transform32.children[6] = ROUTE49;

let ROUTE50 = browser.currentScene.createNode("ROUTE");
ROUTE50.fromNode = "PI1";
ROUTE50.fromField = "value_changed";
ROUTE50.toNode = "node";
ROUTE50.toField = "set_translation";
Transform32.children[7] = ROUTE50;

ProtoBody31.children = new MFNode();

ProtoBody31.children[0] = Transform32;

ProtoDeclare28.protoBody = ProtoBody31;

browser.currentScene.children[5] = ProtoDeclare28;

//from doug sanden
let ProtoDeclare51 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="x3dconnector" ><ProtoInterface><field name="startnode" accessType="inputOutput" type="SFNode"></field>
<field name="endnode" accessType="inputOutput" type="SFNode"></field>
<field name="transnode" accessType="inputOutput" type="SFNode"></field>
<field name="rotscalenode" accessType="inputOutput" type="SFNode"></field>
<field name="set_startpoint" accessType="inputOnly" type="SFVec3f"></field>
<field name="set_endpoint" accessType="inputOnly" type="SFVec3f"></field>
</ProtoInterface>
<ProtoBody><Script DEF="S1"><field name="startnode" accessType="inputOutput" type="SFNode"></field>
<field name="endnode" accessType="inputOutput" type="SFNode"></field>
<field name="transnode" accessType="inputOutput" type="SFNode"></field>
<field name="rotscalenode" accessType="inputOutput" type="SFNode"></field>
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
ProtoDeclare51.name = "x3dconnector";
let ProtoInterface52 = browser.currentScene.createNode("ProtoInterface");
let field53 = browser.currentScene.createNode("field");
field53.name = "startnode";
field53.accessType = "inputOutput";
field53.type = "SFNode";
ProtoInterface52.field = new MFNode();

ProtoInterface52.field[0] = field53;

let field54 = browser.currentScene.createNode("field");
field54.name = "endnode";
field54.accessType = "inputOutput";
field54.type = "SFNode";
ProtoInterface52.field[1] = field54;

let field55 = browser.currentScene.createNode("field");
field55.name = "transnode";
field55.accessType = "inputOutput";
field55.type = "SFNode";
ProtoInterface52.field[2] = field55;

let field56 = browser.currentScene.createNode("field");
field56.name = "rotscalenode";
field56.accessType = "inputOutput";
field56.type = "SFNode";
ProtoInterface52.field[3] = field56;

let field57 = browser.currentScene.createNode("field");
field57.name = "set_startpoint";
field57.accessType = "inputOnly";
field57.type = "SFVec3f";
ProtoInterface52.field[4] = field57;

let field58 = browser.currentScene.createNode("field");
field58.name = "set_endpoint";
field58.accessType = "inputOnly";
field58.type = "SFVec3f";
ProtoInterface52.field[5] = field58;

ProtoDeclare51.protoInterface = ProtoInterface52;

let ProtoBody59 = browser.currentScene.createNode("ProtoBody");
let Script60 = browser.currentScene.createNode("Script");
Script60.DEF = "S1";
let field61 = browser.currentScene.createNode("field");
field61.name = "startnode";
field61.accessType = "inputOutput";
field61.type = "SFNode";
Script60.field = new MFNode();

Script60.field[0] = field61;

let field62 = browser.currentScene.createNode("field");
field62.name = "endnode";
field62.accessType = "inputOutput";
field62.type = "SFNode";
Script60.field[1] = field62;

let field63 = browser.currentScene.createNode("field");
field63.name = "transnode";
field63.accessType = "inputOutput";
field63.type = "SFNode";
Script60.field[2] = field63;

let field64 = browser.currentScene.createNode("field");
field64.name = "rotscalenode";
field64.accessType = "inputOutput";
field64.type = "SFNode";
Script60.field[3] = field64;

let field65 = browser.currentScene.createNode("field");
field65.name = "set_startpoint";
field65.accessType = "inputOnly";
field65.type = "SFVec3f";
Script60.field[4] = field65;

let field66 = browser.currentScene.createNode("field");
field66.name = "set_endpoint";
field66.accessType = "inputOnly";
field66.type = "SFVec3f";
Script60.field[5] = field66;

let IS67 = browser.currentScene.createNode("IS");
let connect68 = browser.currentScene.createNode("connect");
connect68.nodeField = "startnode";
connect68.protoField = "startnode";
IS67.connect = new MFNode();

IS67.connect[0] = connect68;

let connect69 = browser.currentScene.createNode("connect");
connect69.nodeField = "endnode";
connect69.protoField = "endnode";
IS67.connect[1] = connect69;

let connect70 = browser.currentScene.createNode("connect");
connect70.nodeField = "transnode";
connect70.protoField = "transnode";
IS67.connect[2] = connect70;

let connect71 = browser.currentScene.createNode("connect");
connect71.nodeField = "rotscalenode";
connect71.protoField = "rotscalenode";
IS67.connect[3] = connect71;

let connect72 = browser.currentScene.createNode("connect");
connect72.nodeField = "set_startpoint";
connect72.protoField = "set_startpoint";
IS67.connect[4] = connect72;

let connect73 = browser.currentScene.createNode("connect");
connect73.nodeField = "set_endpoint";
connect73.protoField = "set_endpoint";
IS67.connect[5] = connect73;

Script60.iS = IS67;

let #sourceCode74 = browser.currentScene.createNode("#sourceCode");
Script60.#sourceCode[6] = #sourceCode74;

ProtoBody59.children = new MFNode();

ProtoBody59.children[0] = Script60;

ProtoDeclare51.protoBody = ProtoBody59;

browser.currentScene.children[6] = ProtoDeclare51;

let ProtoInstance75 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance75.name = "point";
ProtoInstance75.DEF = "G1";
browser.currentScene.children[7] = ProtoInstance75;

let ProtoInstance76 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance76.name = "point";
ProtoInstance76.DEF = "G2";
browser.currentScene.children[8] = ProtoInstance76;

let ProtoInstance77 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance77.name = "point";
ProtoInstance77.DEF = "G3";
browser.currentScene.children[9] = ProtoInstance77;

let ProtoInstance78 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance78.name = "point";
ProtoInstance78.DEF = "G4";
browser.currentScene.children[10] = ProtoInstance78;

let ProtoInstance79 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance79.name = "x3dconnector";
ProtoInstance79.DEF = "connector1";
let fieldValue80 = browser.currentScene.createNode("fieldValue");
fieldValue80.name = "startnode";
let ProtoInstance81 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance81.USE = "G1";
fieldValue80.children = new MFNode();

fieldValue80.children[0] = ProtoInstance81;

ProtoInstance79.fieldValue = new MFNode();

ProtoInstance79.fieldValue[0] = fieldValue80;

let fieldValue82 = browser.currentScene.createNode("fieldValue");
fieldValue82.name = "endnode";
let ProtoInstance83 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance83.USE = "G2";
fieldValue82.children = new MFNode();

fieldValue82.children[0] = ProtoInstance83;

ProtoInstance79.fieldValue[1] = fieldValue82;

let fieldValue84 = browser.currentScene.createNode("fieldValue");
fieldValue84.name = "transnode";
let Transform85 = browser.currentScene.createNode("Transform");
Transform85.USE = "trans1";
fieldValue84.children = new MFNode();

fieldValue84.children[0] = Transform85;

ProtoInstance79.fieldValue[2] = fieldValue84;

let fieldValue86 = browser.currentScene.createNode("fieldValue");
fieldValue86.name = "rotscalenode";
let Transform87 = browser.currentScene.createNode("Transform");
Transform87.USE = "rotscale1";
fieldValue86.children = new MFNode();

fieldValue86.children[0] = Transform87;

ProtoInstance79.fieldValue[3] = fieldValue86;

browser.currentScene.children[11] = ProtoInstance79;

let ProtoInstance88 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance88.name = "x3dconnector";
ProtoInstance88.DEF = "connector2";
let fieldValue89 = browser.currentScene.createNode("fieldValue");
fieldValue89.name = "startnode";
let ProtoInstance90 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance90.USE = "G1";
fieldValue89.children = new MFNode();

fieldValue89.children[0] = ProtoInstance90;

ProtoInstance88.fieldValue = new MFNode();

ProtoInstance88.fieldValue[0] = fieldValue89;

let fieldValue91 = browser.currentScene.createNode("fieldValue");
fieldValue91.name = "endnode";
let ProtoInstance92 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance92.USE = "G3";
fieldValue91.children = new MFNode();

fieldValue91.children[0] = ProtoInstance92;

ProtoInstance88.fieldValue[1] = fieldValue91;

let fieldValue93 = browser.currentScene.createNode("fieldValue");
fieldValue93.name = "transnode";
let Transform94 = browser.currentScene.createNode("Transform");
Transform94.USE = "trans2";
fieldValue93.children = new MFNode();

fieldValue93.children[0] = Transform94;

ProtoInstance88.fieldValue[2] = fieldValue93;

let fieldValue95 = browser.currentScene.createNode("fieldValue");
fieldValue95.name = "rotscalenode";
let Transform96 = browser.currentScene.createNode("Transform");
Transform96.USE = "rotscale2";
fieldValue95.children = new MFNode();

fieldValue95.children[0] = Transform96;

ProtoInstance88.fieldValue[3] = fieldValue95;

browser.currentScene.children[12] = ProtoInstance88;

let ProtoInstance97 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance97.name = "x3dconnector";
ProtoInstance97.DEF = "connector3";
let fieldValue98 = browser.currentScene.createNode("fieldValue");
fieldValue98.name = "startnode";
let ProtoInstance99 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance99.USE = "G1";
fieldValue98.children = new MFNode();

fieldValue98.children[0] = ProtoInstance99;

ProtoInstance97.fieldValue = new MFNode();

ProtoInstance97.fieldValue[0] = fieldValue98;

let fieldValue100 = browser.currentScene.createNode("fieldValue");
fieldValue100.name = "endnode";
let ProtoInstance101 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance101.USE = "G4";
fieldValue100.children = new MFNode();

fieldValue100.children[0] = ProtoInstance101;

ProtoInstance97.fieldValue[1] = fieldValue100;

let fieldValue102 = browser.currentScene.createNode("fieldValue");
fieldValue102.name = "transnode";
let Transform103 = browser.currentScene.createNode("Transform");
Transform103.USE = "trans3";
fieldValue102.children = new MFNode();

fieldValue102.children[0] = Transform103;

ProtoInstance97.fieldValue[2] = fieldValue102;

let fieldValue104 = browser.currentScene.createNode("fieldValue");
fieldValue104.name = "rotscalenode";
let Transform105 = browser.currentScene.createNode("Transform");
Transform105.USE = "rotscale3";
fieldValue104.children = new MFNode();

fieldValue104.children[0] = Transform105;

ProtoInstance97.fieldValue[3] = fieldValue104;

browser.currentScene.children[13] = ProtoInstance97;

let ROUTE106 = browser.currentScene.createNode("ROUTE");
ROUTE106.fromNode = "G1";
ROUTE106.fromField = "translation_changed";
ROUTE106.toNode = "connector1";
ROUTE106.toField = "set_startpoint";
browser.currentScene.children[14] = ROUTE106;

let ROUTE107 = browser.currentScene.createNode("ROUTE");
ROUTE107.fromNode = "G2";
ROUTE107.fromField = "translation_changed";
ROUTE107.toNode = "connector1";
ROUTE107.toField = "set_endpoint";
browser.currentScene.children[15] = ROUTE107;

let ROUTE108 = browser.currentScene.createNode("ROUTE");
ROUTE108.fromNode = "G1";
ROUTE108.fromField = "translation_changed";
ROUTE108.toNode = "connector2";
ROUTE108.toField = "set_startpoint";
browser.currentScene.children[16] = ROUTE108;

let ROUTE109 = browser.currentScene.createNode("ROUTE");
ROUTE109.fromNode = "G3";
ROUTE109.fromField = "translation_changed";
ROUTE109.toNode = "connector2";
ROUTE109.toField = "set_endpoint";
browser.currentScene.children[17] = ROUTE109;

let ROUTE110 = browser.currentScene.createNode("ROUTE");
ROUTE110.fromNode = "G1";
ROUTE110.fromField = "translation_changed";
ROUTE110.toNode = "connector3";
ROUTE110.toField = "set_startpoint";
browser.currentScene.children[18] = ROUTE110;

let ROUTE111 = browser.currentScene.createNode("ROUTE");
ROUTE111.fromNode = "G4";
ROUTE111.fromField = "translation_changed";
ROUTE111.toNode = "connector3";
ROUTE111.toField = "set_endpoint";
browser.currentScene.children[19] = ROUTE111;

