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

let ProtoDeclare4 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="point" ><ProtoInterface><field name="translation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><Transform DEF="node" bboxCenter="0 0 0" bboxSize="-1 -1 -1"><IS><connect nodeField="translation" protoField="translation"></connect>
</IS>
<Shape bboxCenter="0 0 0" bboxSize="-1 -1 -1"><Sphere containerField="geometry" radius="0.1"></Sphere>
<Appearance><Material diffuseColor="1 0 0"></Material>
</Appearance>
</Shape>
<PositionInterpolator DEF="PI1" key="0 1" keyValue="0 0 0 0 5 0"></PositionInterpolator>
<TimeSensor DEF="CL1" cycleInterval="3" loop="true"></TimeSensor>
<ROUTE fromNode="CL1" fromField="cycleTime" toNode="MB1" toField="set_location"></ROUTE>
<ROUTE fromNode="CL1" fromField="fraction_changed" toNode="PI1" toField="set_fraction"></ROUTE>
<ROUTE fromNode="MB1" fromField="keyValue" toNode="PI1" toField="keyValue"></ROUTE>
<ROUTE fromNode="PI1" fromField="value_changed" toNode="node" toField="set_translation"></ROUTE>
<X3DScript DEF="MB1"><field name="translation" accessType="inputOutput" type="SFVec3f" value="50 50 0"></field>
<field name="old" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="set_location" accessType="inputOnly" type="SFTime"></field>
<field name="keyValue" accessType="inputOutput" type="MFVec3f" value="0 0 0 0 5 0"></field>
</X3DScript>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare4.name = "point";
let ProtoInterface5 = browser.currentScene.createNode("ProtoInterface");
let field6 = browser.currentScene.createNode("field");
field6.name = "translation";
field6.accessType = "inputOutput";
field6.type = "SFVec3f";
field6.value = "0 0 0";
ProtoInterface5.field = new MFNode();

ProtoInterface5.field[0] = field6;

ProtoDeclare4.protoInterface = ProtoInterface5;

let ProtoBody7 = browser.currentScene.createNode("ProtoBody");
let Transform8 = browser.currentScene.createNode("Transform");
Transform8.DEF = "node";
Transform8.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform8.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let IS9 = browser.currentScene.createNode("IS");
let connect10 = browser.currentScene.createNode("connect");
connect10.nodeField = "translation";
connect10.protoField = "translation";
IS9.connect = new MFNode();

IS9.connect[0] = connect10;

Transform8.iS = IS9;

let Shape11 = browser.currentScene.createNode("Shape");
Shape11.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape11.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Sphere12 = browser.currentScene.createNode("Sphere");
Sphere12.radius = 0.1;
Shape11.geometry = Sphere12;

let Appearance13 = browser.currentScene.createNode("Appearance");
let Material14 = browser.currentScene.createNode("Material");
Material14.diffuseColor = new SFColor(new float[1,0,0]);
Appearance13.material = Material14;

Shape11.appearance = Appearance13;

Transform8.children = new MFNode();

Transform8.children[0] = Shape11;

let PositionInterpolator15 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator15.DEF = "PI1";
PositionInterpolator15.key = new MFFloat(new float[0,1]);
PositionInterpolator15.keyValue = new MFVec3f(new float[0,0,0,0,5,0]);
Transform8.children[1] = PositionInterpolator15;

let TimeSensor16 = browser.currentScene.createNode("TimeSensor");
TimeSensor16.DEF = "CL1";
TimeSensor16.cycleInterval = 3;
TimeSensor16.loop = True;
Transform8.children[2] = TimeSensor16;

let ROUTE17 = browser.currentScene.createNode("ROUTE");
ROUTE17.fromNode = "CL1";
ROUTE17.fromField = "cycleTime";
ROUTE17.toNode = "MB1";
ROUTE17.toField = "set_location";
Transform8.children[3] = ROUTE17;

let ROUTE18 = browser.currentScene.createNode("ROUTE");
ROUTE18.fromNode = "CL1";
ROUTE18.fromField = "fraction_changed";
ROUTE18.toNode = "PI1";
ROUTE18.toField = "set_fraction";
Transform8.children[4] = ROUTE18;

let ROUTE19 = browser.currentScene.createNode("ROUTE");
ROUTE19.fromNode = "MB1";
ROUTE19.fromField = "keyValue";
ROUTE19.toNode = "PI1";
ROUTE19.toField = "keyValue";
Transform8.children[5] = ROUTE19;

let ROUTE20 = browser.currentScene.createNode("ROUTE");
ROUTE20.fromNode = "PI1";
ROUTE20.fromField = "value_changed";
ROUTE20.toNode = "node";
ROUTE20.toField = "set_translation";
Transform8.children[6] = ROUTE20;

let X3DScript21 = browser.currentScene.createNode("X3DScript");
X3DScript21.DEF = "MB1";
let field22 = browser.currentScene.createNode("field");
field22.name = "translation";
field22.accessType = "inputOutput";
field22.type = "SFVec3f";
field22.value = "50 50 0";
X3DScript21.field = new MFNode();

X3DScript21.field[0] = field22;

let field23 = browser.currentScene.createNode("field");
field23.name = "old";
field23.accessType = "inputOutput";
field23.type = "SFVec3f";
field23.value = "0 0 0";
X3DScript21.field[1] = field23;

let field24 = browser.currentScene.createNode("field");
field24.name = "set_location";
field24.accessType = "inputOnly";
field24.type = "SFTime";
X3DScript21.field[2] = field24;

let field25 = browser.currentScene.createNode("field");
field25.name = "keyValue";
field25.accessType = "inputOutput";
field25.type = "MFVec3f";
field25.value = "0 0 0 0 5 0";
X3DScript21.field[3] = field25;

Transform8.x3DScript[7] = X3DScript21;

ProtoBody7.children = new MFNode();

ProtoBody7.children[0] = Transform8;

ProtoDeclare4.protoBody = ProtoBody7;

browser.currentScene.children[2] = ProtoDeclare4;

let ProtoDeclare26 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="x3dconnector" ><ProtoInterface><field name="startnode" accessType="initializeOnly" type="SFNode"></field>
<field name="endnode" accessType="initializeOnly" type="SFNode"></field>
<field name="set_startpoint" accessType="inputOnly" type="SFVec3f"></field>
<field name="set_endpoint" accessType="inputOnly" type="SFVec3f"></field>
</ProtoInterface>
<ProtoBody><Group bboxCenter="0 0 0" bboxSize="-1 -1 -1"><Transform DEF="trans" bboxCenter="0 0 0" bboxSize="-1 -1 -1"><Transform DEF="rotscale" bboxCenter="0 0 0" bboxSize="-1 -1 -1"><Shape bboxCenter="0 0 0" bboxSize="-1 -1 -1"><Appearance><Material diffuseColor="0.2 0.7 0.7" transparency="0.5"></Material>
</Appearance>
<Cylinder containerField="geometry" radius="0.05"></Cylinder>
</Shape>
</Transform>
</Transform>
<X3DScript DEF="S1"><field name="startnode" accessType="initializeOnly" type="SFNode"></field>
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
</X3DScript>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare26.name = "x3dconnector";
let ProtoInterface27 = browser.currentScene.createNode("ProtoInterface");
let field28 = browser.currentScene.createNode("field");
field28.name = "startnode";
field28.accessType = "initializeOnly";
field28.type = "SFNode";
ProtoInterface27.field = new MFNode();

ProtoInterface27.field[0] = field28;

let field29 = browser.currentScene.createNode("field");
field29.name = "endnode";
field29.accessType = "initializeOnly";
field29.type = "SFNode";
ProtoInterface27.field[1] = field29;

let field30 = browser.currentScene.createNode("field");
field30.name = "set_startpoint";
field30.accessType = "inputOnly";
field30.type = "SFVec3f";
ProtoInterface27.field[2] = field30;

let field31 = browser.currentScene.createNode("field");
field31.name = "set_endpoint";
field31.accessType = "inputOnly";
field31.type = "SFVec3f";
ProtoInterface27.field[3] = field31;

ProtoDeclare26.protoInterface = ProtoInterface27;

let ProtoBody32 = browser.currentScene.createNode("ProtoBody");
let Group33 = browser.currentScene.createNode("Group");
Group33.bboxCenter = new SFVec3f(new float[0,0,0]);
Group33.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Transform34 = browser.currentScene.createNode("Transform");
Transform34.DEF = "trans";
Transform34.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform34.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Transform35 = browser.currentScene.createNode("Transform");
Transform35.DEF = "rotscale";
Transform35.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform35.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape36 = browser.currentScene.createNode("Shape");
Shape36.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape36.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Appearance37 = browser.currentScene.createNode("Appearance");
let Material38 = browser.currentScene.createNode("Material");
Material38.diffuseColor = new SFColor(new float[0.2,0.7,0.7]);
Material38.transparency = 0.5;
Appearance37.material = Material38;

Shape36.appearance = Appearance37;

let Cylinder39 = browser.currentScene.createNode("Cylinder");
Cylinder39.radius = 0.05;
Shape36.geometry = Cylinder39;

Transform35.children = new MFNode();

Transform35.children[0] = Shape36;

Transform34.children = new MFNode();

Transform34.children[0] = Transform35;

Group33.children = new MFNode();

Group33.children[0] = Transform34;

let X3DScript40 = browser.currentScene.createNode("X3DScript");
X3DScript40.DEF = "S1";
let field41 = browser.currentScene.createNode("field");
field41.name = "startnode";
field41.accessType = "initializeOnly";
field41.type = "SFNode";
X3DScript40.field = new MFNode();

X3DScript40.field[0] = field41;

let field42 = browser.currentScene.createNode("field");
field42.name = "endnode";
field42.accessType = "initializeOnly";
field42.type = "SFNode";
X3DScript40.field[1] = field42;

let field43 = browser.currentScene.createNode("field");
field43.name = "position";
field43.accessType = "inputOutput";
field43.type = "SFNode";
let Transform44 = browser.currentScene.createNode("Transform");
Transform44.USE = "trans";
field43.children = new MFNode();

field43.children[0] = Transform44;

X3DScript40.field[2] = field43;

let field45 = browser.currentScene.createNode("field");
field45.name = "rotscale";
field45.accessType = "inputOutput";
field45.type = "SFNode";
let Transform46 = browser.currentScene.createNode("Transform");
Transform46.USE = "rotscale";
field45.children = new MFNode();

field45.children[0] = Transform46;

X3DScript40.field[3] = field45;

let field47 = browser.currentScene.createNode("field");
field47.name = "set_startpoint";
field47.accessType = "inputOnly";
field47.type = "SFVec3f";
X3DScript40.field[4] = field47;

let field48 = browser.currentScene.createNode("field");
field48.name = "set_endpoint";
field48.accessType = "inputOnly";
field48.type = "SFVec3f";
X3DScript40.field[5] = field48;

let IS49 = browser.currentScene.createNode("IS");
let connect50 = browser.currentScene.createNode("connect");
connect50.nodeField = "startnode";
connect50.protoField = "startnode";
IS49.connect = new MFNode();

IS49.connect[0] = connect50;

let connect51 = browser.currentScene.createNode("connect");
connect51.nodeField = "endnode";
connect51.protoField = "endnode";
IS49.connect[1] = connect51;

let connect52 = browser.currentScene.createNode("connect");
connect52.nodeField = "set_startpoint";
connect52.protoField = "set_startpoint";
IS49.connect[2] = connect52;

let connect53 = browser.currentScene.createNode("connect");
connect53.nodeField = "set_endpoint";
connect53.protoField = "set_endpoint";
IS49.connect[3] = connect53;

X3DScript40.iS = IS49;

Group33.x3DScript[1] = X3DScript40;

ProtoBody32.children = new MFNode();

ProtoBody32.children[0] = Group33;

ProtoDeclare26.protoBody = ProtoBody32;

browser.currentScene.children[3] = ProtoDeclare26;

let ProtoInstance54 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance54.name = "point";
ProtoInstance54.DEF = "G1";
browser.currentScene.children[4] = ProtoInstance54;

let ProtoInstance55 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance55.name = "point";
ProtoInstance55.DEF = "G2";
browser.currentScene.children[5] = ProtoInstance55;

let ProtoInstance56 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance56.name = "point";
ProtoInstance56.DEF = "G3";
browser.currentScene.children[6] = ProtoInstance56;

let ProtoInstance57 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance57.name = "point";
ProtoInstance57.DEF = "G4";
browser.currentScene.children[7] = ProtoInstance57;

let ProtoInstance58 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance58.name = "x3dconnector";
ProtoInstance58.DEF = "connector1";
let fieldValue59 = browser.currentScene.createNode("fieldValue");
fieldValue59.name = "startnode";
let ProtoInstance60 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance60.USE = "G1";
fieldValue59.children = new MFNode();

fieldValue59.children[0] = ProtoInstance60;

ProtoInstance58.fieldValue = new MFNode();

ProtoInstance58.fieldValue[0] = fieldValue59;

let fieldValue61 = browser.currentScene.createNode("fieldValue");
fieldValue61.name = "endnode";
let ProtoInstance62 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance62.USE = "G2";
fieldValue61.children = new MFNode();

fieldValue61.children[0] = ProtoInstance62;

ProtoInstance58.fieldValue[1] = fieldValue61;

let fieldValue63 = browser.currentScene.createNode("fieldValue");
fieldValue63.name = "set_startpoint";
ProtoInstance58.fieldValue[2] = fieldValue63;

let fieldValue64 = browser.currentScene.createNode("fieldValue");
fieldValue64.name = "set_endpoint";
ProtoInstance58.fieldValue[3] = fieldValue64;

browser.currentScene.children[8] = ProtoInstance58;

let ProtoInstance65 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance65.name = "x3dconnector";
ProtoInstance65.DEF = "connector2";
let fieldValue66 = browser.currentScene.createNode("fieldValue");
fieldValue66.name = "startnode";
let ProtoInstance67 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance67.USE = "G1";
fieldValue66.children = new MFNode();

fieldValue66.children[0] = ProtoInstance67;

ProtoInstance65.fieldValue = new MFNode();

ProtoInstance65.fieldValue[0] = fieldValue66;

let fieldValue68 = browser.currentScene.createNode("fieldValue");
fieldValue68.name = "endnode";
let ProtoInstance69 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance69.USE = "G3";
fieldValue68.children = new MFNode();

fieldValue68.children[0] = ProtoInstance69;

ProtoInstance65.fieldValue[1] = fieldValue68;

let fieldValue70 = browser.currentScene.createNode("fieldValue");
fieldValue70.name = "set_startpoint";
ProtoInstance65.fieldValue[2] = fieldValue70;

let fieldValue71 = browser.currentScene.createNode("fieldValue");
fieldValue71.name = "set_endpoint";
ProtoInstance65.fieldValue[3] = fieldValue71;

browser.currentScene.children[9] = ProtoInstance65;

let ProtoInstance72 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance72.name = "x3dconnector";
ProtoInstance72.DEF = "connector3";
let fieldValue73 = browser.currentScene.createNode("fieldValue");
fieldValue73.name = "startnode";
let ProtoInstance74 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance74.USE = "G1";
fieldValue73.children = new MFNode();

fieldValue73.children[0] = ProtoInstance74;

ProtoInstance72.fieldValue = new MFNode();

ProtoInstance72.fieldValue[0] = fieldValue73;

let fieldValue75 = browser.currentScene.createNode("fieldValue");
fieldValue75.name = "endnode";
let ProtoInstance76 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance76.USE = "G4";
fieldValue75.children = new MFNode();

fieldValue75.children[0] = ProtoInstance76;

ProtoInstance72.fieldValue[1] = fieldValue75;

let fieldValue77 = browser.currentScene.createNode("fieldValue");
fieldValue77.name = "set_startpoint";
ProtoInstance72.fieldValue[2] = fieldValue77;

let fieldValue78 = browser.currentScene.createNode("fieldValue");
fieldValue78.name = "set_endpoint";
ProtoInstance72.fieldValue[3] = fieldValue78;

browser.currentScene.children[10] = ProtoInstance72;

let ROUTE79 = browser.currentScene.createNode("ROUTE");
ROUTE79.fromNode = "G1";
ROUTE79.fromField = "translation";
ROUTE79.toNode = "connector1";
ROUTE79.toField = "set_startpoint";
browser.currentScene.children[11] = ROUTE79;

let ROUTE80 = browser.currentScene.createNode("ROUTE");
ROUTE80.fromNode = "G2";
ROUTE80.fromField = "translation";
ROUTE80.toNode = "connector1";
ROUTE80.toField = "set_endpoint";
browser.currentScene.children[12] = ROUTE80;

let ROUTE81 = browser.currentScene.createNode("ROUTE");
ROUTE81.fromNode = "G1";
ROUTE81.fromField = "translation";
ROUTE81.toNode = "connector2";
ROUTE81.toField = "set_startpoint";
browser.currentScene.children[13] = ROUTE81;

let ROUTE82 = browser.currentScene.createNode("ROUTE");
ROUTE82.fromNode = "G3";
ROUTE82.fromField = "translation";
ROUTE82.toNode = "connector2";
ROUTE82.toField = "set_endpoint";
browser.currentScene.children[14] = ROUTE82;

let ROUTE83 = browser.currentScene.createNode("ROUTE");
ROUTE83.fromNode = "G1";
ROUTE83.fromField = "translation";
ROUTE83.toNode = "connector3";
ROUTE83.toField = "set_startpoint";
browser.currentScene.children[15] = ROUTE83;

let ROUTE84 = browser.currentScene.createNode("ROUTE");
ROUTE84.fromNode = "G4";
ROUTE84.fromField = "translation";
ROUTE84.toNode = "connector3";
ROUTE84.toField = "set_endpoint";
browser.currentScene.children[16] = ROUTE84;

