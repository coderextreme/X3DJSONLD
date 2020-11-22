let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interchange";
X3D0.version = "4.0";
let ProtoDeclare2 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Humanoid" ><ProtoInterface><field name="center" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="humanoidBody" accessType="inputOutput" type="MFNode"></field>
<field name="info" accessType="inputOutput" type="MFString"></field>
<field name="joints" accessType="inputOutput" type="MFNode"></field>
<field name="name" accessType="inputOutput" type="SFString"></field>
<field name="rotation" accessType="inputOutput" type="SFRotation" value="0 0 1 0"></field>
<field name="scale" accessType="inputOutput" type="SFVec3f" value="1 1 1"></field>
<field name="scaleOrientation" accessType="inputOutput" type="SFRotation" value="0 0 1 0"></field>
<field name="segments" accessType="inputOutput" type="MFNode"></field>
<field name="sites" accessType="inputOutput" type="MFNode"></field>
<field name="translation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="version" accessType="inputOutput" type="SFString" value="200x"></field>
<field name="viewpoints" accessType="inputOutput" type="MFNode"></field>
<field name="bboxCenter" accessType="initializeOnly" type="SFVec3f" value="0 0 0"></field>
<field name="bboxSize" accessType="initializeOnly" type="SFVec3f" value="-1 -1 -1"></field>
</ProtoInterface>
<ProtoBody><Transform><Group><IS><connect nodeField="children" protoField="humanoidBody"></connect>
</IS>
</Group>
<Group><IS><connect nodeField="children" protoField="viewpoints"></connect>
</IS>
</Group>
<IS><connect nodeField="center" protoField="center"></connect>
<connect nodeField="rotation" protoField="rotation"></connect>
<connect nodeField="scale" protoField="scale"></connect>
<connect nodeField="scaleOrientation" protoField="scaleOrientation"></connect>
<connect nodeField="translation" protoField="translation"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare2.name = "Humanoid";
let ProtoInterface3 = browser.currentScene.createNode("ProtoInterface");
let field4 = browser.currentScene.createNode("field");
field4.name = "center";
field4.accessType = "inputOutput";
field4.type = "SFVec3f";
field4.value = "0 0 0";
ProtoInterface3.field = new MFNode();

ProtoInterface3.field[0] = field4;

let field5 = browser.currentScene.createNode("field");
field5.name = "humanoidBody";
field5.accessType = "inputOutput";
field5.type = "MFNode";
ProtoInterface3.field[1] = field5;

let field6 = browser.currentScene.createNode("field");
field6.name = "info";
field6.accessType = "inputOutput";
field6.type = "MFString";
ProtoInterface3.field[2] = field6;

let field7 = browser.currentScene.createNode("field");
field7.name = "joints";
field7.accessType = "inputOutput";
field7.type = "MFNode";
ProtoInterface3.field[3] = field7;

let field8 = browser.currentScene.createNode("field");
field8.name = "name";
field8.accessType = "inputOutput";
field8.type = "SFString";
ProtoInterface3.field[4] = field8;

let field9 = browser.currentScene.createNode("field");
field9.name = "rotation";
field9.accessType = "inputOutput";
field9.type = "SFRotation";
field9.value = "0 0 1 0";
ProtoInterface3.field[5] = field9;

let field10 = browser.currentScene.createNode("field");
field10.name = "scale";
field10.accessType = "inputOutput";
field10.type = "SFVec3f";
field10.value = "1 1 1";
ProtoInterface3.field[6] = field10;

let field11 = browser.currentScene.createNode("field");
field11.name = "scaleOrientation";
field11.accessType = "inputOutput";
field11.type = "SFRotation";
field11.value = "0 0 1 0";
ProtoInterface3.field[7] = field11;

let field12 = browser.currentScene.createNode("field");
field12.name = "segments";
field12.accessType = "inputOutput";
field12.type = "MFNode";
ProtoInterface3.field[8] = field12;

let field13 = browser.currentScene.createNode("field");
field13.name = "sites";
field13.accessType = "inputOutput";
field13.type = "MFNode";
ProtoInterface3.field[9] = field13;

let field14 = browser.currentScene.createNode("field");
field14.name = "translation";
field14.accessType = "inputOutput";
field14.type = "SFVec3f";
field14.value = "0 0 0";
ProtoInterface3.field[10] = field14;

let field15 = browser.currentScene.createNode("field");
field15.name = "version";
field15.accessType = "inputOutput";
field15.type = "SFString";
field15.value = "200x";
ProtoInterface3.field[11] = field15;

let field16 = browser.currentScene.createNode("field");
field16.name = "viewpoints";
field16.accessType = "inputOutput";
field16.type = "MFNode";
ProtoInterface3.field[12] = field16;

let field17 = browser.currentScene.createNode("field");
field17.name = "bboxCenter";
field17.accessType = "initializeOnly";
field17.type = "SFVec3f";
field17.value = "0 0 0";
ProtoInterface3.field[13] = field17;

let field18 = browser.currentScene.createNode("field");
field18.name = "bboxSize";
field18.accessType = "initializeOnly";
field18.type = "SFVec3f";
field18.value = "-1 -1 -1";
ProtoInterface3.field[14] = field18;

ProtoDeclare2.protoInterface = ProtoInterface3;

let ProtoBody19 = browser.currentScene.createNode("ProtoBody");
let Transform20 = browser.currentScene.createNode("Transform");
let Group21 = browser.currentScene.createNode("Group");
let IS22 = browser.currentScene.createNode("IS");
let connect23 = browser.currentScene.createNode("connect");
connect23.nodeField = "children";
connect23.protoField = "humanoidBody";
IS22.connect = new MFNode();

IS22.connect[0] = connect23;

Group21.iS = IS22;

Transform20.children = new MFNode();

Transform20.children[0] = Group21;

let Group24 = browser.currentScene.createNode("Group");
let IS25 = browser.currentScene.createNode("IS");
let connect26 = browser.currentScene.createNode("connect");
connect26.nodeField = "children";
connect26.protoField = "viewpoints";
IS25.connect = new MFNode();

IS25.connect[0] = connect26;

Group24.iS = IS25;

Transform20.children[1] = Group24;

let IS27 = browser.currentScene.createNode("IS");
let connect28 = browser.currentScene.createNode("connect");
connect28.nodeField = "center";
connect28.protoField = "center";
IS27.connect = new MFNode();

IS27.connect[0] = connect28;

let connect29 = browser.currentScene.createNode("connect");
connect29.nodeField = "rotation";
connect29.protoField = "rotation";
IS27.connect[1] = connect29;

let connect30 = browser.currentScene.createNode("connect");
connect30.nodeField = "scale";
connect30.protoField = "scale";
IS27.connect[2] = connect30;

let connect31 = browser.currentScene.createNode("connect");
connect31.nodeField = "scaleOrientation";
connect31.protoField = "scaleOrientation";
IS27.connect[3] = connect31;

let connect32 = browser.currentScene.createNode("connect");
connect32.nodeField = "translation";
connect32.protoField = "translation";
IS27.connect[4] = connect32;

Transform20.iS = IS27;

ProtoBody19.children = new MFNode();

ProtoBody19.children[0] = Transform20;

ProtoDeclare2.protoBody = ProtoBody19;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ProtoDeclare2;

let ProtoDeclare33 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Joint" ><ProtoInterface><field name="center" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="children" accessType="inputOutput" type="MFNode"></field>
<field name="limitOrientation" accessType="inputOutput" type="SFRotation" value="0 0 1 0"></field>
<field name="llimit" accessType="inputOutput" type="MFFloat"></field>
<field name="name" accessType="inputOutput" type="SFString"></field>
<field name="rotation" accessType="inputOutput" type="SFRotation" value="0 0 1 0"></field>
<field name="scale" accessType="inputOutput" type="SFVec3f" value="1 1 1"></field>
<field name="scaleOrientation" accessType="inputOutput" type="SFRotation" value="0 0 1 0"></field>
<field name="stiffness" accessType="inputOutput" type="MFFloat" value="1 1 1"></field>
<field name="translation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="ulimit" accessType="inputOutput" type="MFFloat"></field>
</ProtoInterface>
<ProtoBody><Group><Transform><IS><connect nodeField="children" protoField="children"></connect>
<connect nodeField="center" protoField="center"></connect>
<connect nodeField="rotation" protoField="rotation"></connect>
<connect nodeField="scale" protoField="scale"></connect>
<connect nodeField="scaleOrientation" protoField="scaleOrientation"></connect>
<connect nodeField="translation" protoField="translation"></connect>
</IS>
</Transform>
<Transform><Shape><IndexedFaceSet containerField="geometry" coordIndex="0 1 2 -1 0 2 3 -1 0 3 4 -1 0 4 1 -1 5 2 1 -1 5 3 2 -1 5 4 3 -1 5 1 4 -1" creaseAngle="0.5"><Coordinate containerField="coord" point="0 0.00999999977648258 0 -0.00999999977648258 0 0 0 0 0.00999999977648258 0.00999999977648258 0 0 0 0 -0.00999999977648258 0 -0.00999999977648258 0"></Coordinate>
</IndexedFaceSet>
<Appearance><Material diffuseColor="1 1 0"></Material>
</Appearance>
</Shape>
<IS><connect nodeField="translation" protoField="center"></connect>
</IS>
</Transform>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare33.name = "Joint";
let ProtoInterface34 = browser.currentScene.createNode("ProtoInterface");
let field35 = browser.currentScene.createNode("field");
field35.name = "center";
field35.accessType = "inputOutput";
field35.type = "SFVec3f";
field35.value = "0 0 0";
ProtoInterface34.field = new MFNode();

ProtoInterface34.field[0] = field35;

let field36 = browser.currentScene.createNode("field");
field36.name = "children";
field36.accessType = "inputOutput";
field36.type = "MFNode";
ProtoInterface34.field[1] = field36;

let field37 = browser.currentScene.createNode("field");
field37.name = "limitOrientation";
field37.accessType = "inputOutput";
field37.type = "SFRotation";
field37.value = "0 0 1 0";
ProtoInterface34.field[2] = field37;

let field38 = browser.currentScene.createNode("field");
field38.name = "llimit";
field38.accessType = "inputOutput";
field38.type = "MFFloat";
ProtoInterface34.field[3] = field38;

let field39 = browser.currentScene.createNode("field");
field39.name = "name";
field39.accessType = "inputOutput";
field39.type = "SFString";
ProtoInterface34.field[4] = field39;

let field40 = browser.currentScene.createNode("field");
field40.name = "rotation";
field40.accessType = "inputOutput";
field40.type = "SFRotation";
field40.value = "0 0 1 0";
ProtoInterface34.field[5] = field40;

let field41 = browser.currentScene.createNode("field");
field41.name = "scale";
field41.accessType = "inputOutput";
field41.type = "SFVec3f";
field41.value = "1 1 1";
ProtoInterface34.field[6] = field41;

let field42 = browser.currentScene.createNode("field");
field42.name = "scaleOrientation";
field42.accessType = "inputOutput";
field42.type = "SFRotation";
field42.value = "0 0 1 0";
ProtoInterface34.field[7] = field42;

let field43 = browser.currentScene.createNode("field");
field43.name = "stiffness";
field43.accessType = "inputOutput";
field43.type = "MFFloat";
field43.value = "1 1 1";
ProtoInterface34.field[8] = field43;

let field44 = browser.currentScene.createNode("field");
field44.name = "translation";
field44.accessType = "inputOutput";
field44.type = "SFVec3f";
field44.value = "0 0 0";
ProtoInterface34.field[9] = field44;

let field45 = browser.currentScene.createNode("field");
field45.name = "ulimit";
field45.accessType = "inputOutput";
field45.type = "MFFloat";
ProtoInterface34.field[10] = field45;

ProtoDeclare33.protoInterface = ProtoInterface34;

let ProtoBody46 = browser.currentScene.createNode("ProtoBody");
let Group47 = browser.currentScene.createNode("Group");
let Transform48 = browser.currentScene.createNode("Transform");
let IS49 = browser.currentScene.createNode("IS");
let connect50 = browser.currentScene.createNode("connect");
connect50.nodeField = "children";
connect50.protoField = "children";
IS49.connect = new MFNode();

IS49.connect[0] = connect50;

let connect51 = browser.currentScene.createNode("connect");
connect51.nodeField = "center";
connect51.protoField = "center";
IS49.connect[1] = connect51;

let connect52 = browser.currentScene.createNode("connect");
connect52.nodeField = "rotation";
connect52.protoField = "rotation";
IS49.connect[2] = connect52;

let connect53 = browser.currentScene.createNode("connect");
connect53.nodeField = "scale";
connect53.protoField = "scale";
IS49.connect[3] = connect53;

let connect54 = browser.currentScene.createNode("connect");
connect54.nodeField = "scaleOrientation";
connect54.protoField = "scaleOrientation";
IS49.connect[4] = connect54;

let connect55 = browser.currentScene.createNode("connect");
connect55.nodeField = "translation";
connect55.protoField = "translation";
IS49.connect[5] = connect55;

Transform48.iS = IS49;

Group47.children = new MFNode();

Group47.children[0] = Transform48;

let Transform56 = browser.currentScene.createNode("Transform");
let Shape57 = browser.currentScene.createNode("Shape");
let IndexedFaceSet58 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet58.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet58.creaseAngle = 0.5;
let Coordinate59 = browser.currentScene.createNode("Coordinate");
Coordinate59.point = new MFVec3f(new float[0,0.00999999977648258,0,-0.00999999977648258,0,0,0,0,0.00999999977648258,0.00999999977648258,0,0,0,0,-0.00999999977648258,0,-0.00999999977648258,0]);
IndexedFaceSet58.coord = Coordinate59;

Shape57.geometry = IndexedFaceSet58;

let Appearance60 = browser.currentScene.createNode("Appearance");
let Material61 = browser.currentScene.createNode("Material");
Material61.diffuseColor = new SFColor(new float[1,1,0]);
Appearance60.material = Material61;

Shape57.appearance = Appearance60;

Transform56.children = new MFNode();

Transform56.children[0] = Shape57;

let IS62 = browser.currentScene.createNode("IS");
let connect63 = browser.currentScene.createNode("connect");
connect63.nodeField = "translation";
connect63.protoField = "center";
IS62.connect = new MFNode();

IS62.connect[0] = connect63;

Transform56.iS = IS62;

Group47.children[1] = Transform56;

ProtoBody46.children = new MFNode();

ProtoBody46.children[0] = Group47;

ProtoDeclare33.protoBody = ProtoBody46;

browser.currentScene.children[1] = ProtoDeclare33;

let ProtoDeclare64 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Segment" ><ProtoInterface><field name="addChildren" accessType="inputOnly" type="MFNode"></field>
<field name="removeChildren" accessType="inputOnly" type="MFNode"></field>
<field name="centerOfMass" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="children" accessType="inputOutput" type="MFNode"></field>
<field name="coord" accessType="inputOutput" type="SFNode" value="NULL"></field>
<field name="displacers" accessType="inputOutput" type="MFNode"></field>
<field name="name" accessType="inputOutput" type="SFString"></field>
<field name="mass" accessType="inputOutput" type="SFFloat" value="0"></field>
<field name="momentsOfInertia" accessType="inputOutput" type="SFVec3f" value="1 1 1"></field>
<field name="bboxCenter" accessType="initializeOnly" type="SFVec3f" value="0 0 0"></field>
<field name="bboxSize" accessType="initializeOnly" type="SFVec3f" value="-1 -1 -1"></field>
</ProtoInterface>
<ProtoBody><Group><IS><connect nodeField="children" protoField="children"></connect>
<connect nodeField="bboxCenter" protoField="bboxCenter"></connect>
<connect nodeField="bboxSize" protoField="bboxSize"></connect>
<connect nodeField="addChildren" protoField="addChildren"></connect>
<connect nodeField="removeChildren" protoField="removeChildren"></connect>
</IS>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare64.name = "Segment";
let ProtoInterface65 = browser.currentScene.createNode("ProtoInterface");
let field66 = browser.currentScene.createNode("field");
field66.name = "addChildren";
field66.accessType = "inputOnly";
field66.type = "MFNode";
ProtoInterface65.field = new MFNode();

ProtoInterface65.field[0] = field66;

let field67 = browser.currentScene.createNode("field");
field67.name = "removeChildren";
field67.accessType = "inputOnly";
field67.type = "MFNode";
ProtoInterface65.field[1] = field67;

let field68 = browser.currentScene.createNode("field");
field68.name = "centerOfMass";
field68.accessType = "inputOutput";
field68.type = "SFVec3f";
field68.value = "0 0 0";
ProtoInterface65.field[2] = field68;

let field69 = browser.currentScene.createNode("field");
field69.name = "children";
field69.accessType = "inputOutput";
field69.type = "MFNode";
ProtoInterface65.field[3] = field69;

let field70 = browser.currentScene.createNode("field");
field70.name = "coord";
field70.accessType = "inputOutput";
field70.type = "SFNode";
field70.value = ;
ProtoInterface65.field[4] = field70;

let field71 = browser.currentScene.createNode("field");
field71.name = "displacers";
field71.accessType = "inputOutput";
field71.type = "MFNode";
ProtoInterface65.field[5] = field71;

let field72 = browser.currentScene.createNode("field");
field72.name = "name";
field72.accessType = "inputOutput";
field72.type = "SFString";
ProtoInterface65.field[6] = field72;

let field73 = browser.currentScene.createNode("field");
field73.name = "mass";
field73.accessType = "inputOutput";
field73.type = "SFFloat";
field73.value = "0";
ProtoInterface65.field[7] = field73;

let field74 = browser.currentScene.createNode("field");
field74.name = "momentsOfInertia";
field74.accessType = "inputOutput";
field74.type = "SFVec3f";
field74.value = "1 1 1";
ProtoInterface65.field[8] = field74;

let field75 = browser.currentScene.createNode("field");
field75.name = "bboxCenter";
field75.accessType = "initializeOnly";
field75.type = "SFVec3f";
field75.value = "0 0 0";
ProtoInterface65.field[9] = field75;

let field76 = browser.currentScene.createNode("field");
field76.name = "bboxSize";
field76.accessType = "initializeOnly";
field76.type = "SFVec3f";
field76.value = "-1 -1 -1";
ProtoInterface65.field[10] = field76;

ProtoDeclare64.protoInterface = ProtoInterface65;

let ProtoBody77 = browser.currentScene.createNode("ProtoBody");
let Group78 = browser.currentScene.createNode("Group");
let IS79 = browser.currentScene.createNode("IS");
let connect80 = browser.currentScene.createNode("connect");
connect80.nodeField = "children";
connect80.protoField = "children";
IS79.connect = new MFNode();

IS79.connect[0] = connect80;

let connect81 = browser.currentScene.createNode("connect");
connect81.nodeField = "bboxCenter";
connect81.protoField = "bboxCenter";
IS79.connect[1] = connect81;

let connect82 = browser.currentScene.createNode("connect");
connect82.nodeField = "bboxSize";
connect82.protoField = "bboxSize";
IS79.connect[2] = connect82;

let connect83 = browser.currentScene.createNode("connect");
connect83.nodeField = "addChildren";
connect83.protoField = "addChildren";
IS79.connect[3] = connect83;

let connect84 = browser.currentScene.createNode("connect");
connect84.nodeField = "removeChildren";
connect84.protoField = "removeChildren";
IS79.connect[4] = connect84;

Group78.iS = IS79;

ProtoBody77.children = new MFNode();

ProtoBody77.children[0] = Group78;

ProtoDeclare64.protoBody = ProtoBody77;

browser.currentScene.children[2] = ProtoDeclare64;

let ProtoDeclare85 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Site" ><ProtoInterface><field name="addChildren" accessType="inputOnly" type="MFNode"></field>
<field name="removeChildren" accessType="inputOnly" type="MFNode"></field>
<field name="center" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="children" accessType="inputOutput" type="MFNode"></field>
<field name="name" accessType="inputOutput" type="SFString"></field>
<field name="rotation" accessType="inputOutput" type="SFRotation" value="0 0 1 0"></field>
<field name="scale" accessType="inputOutput" type="SFVec3f" value="1 1 1"></field>
<field name="scaleOrientation" accessType="inputOutput" type="SFRotation" value="0 0 1 0"></field>
<field name="translation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="children" protoField="children"></connect>
<connect nodeField="center" protoField="center"></connect>
<connect nodeField="rotation" protoField="rotation"></connect>
<connect nodeField="scale" protoField="scale"></connect>
<connect nodeField="scaleOrientation" protoField="scaleOrientation"></connect>
<connect nodeField="translation" protoField="translation"></connect>
<connect nodeField="addChildren" protoField="addChildren"></connect>
<connect nodeField="removeChildren" protoField="removeChildren"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare85.name = "Site";
let ProtoInterface86 = browser.currentScene.createNode("ProtoInterface");
let field87 = browser.currentScene.createNode("field");
field87.name = "addChildren";
field87.accessType = "inputOnly";
field87.type = "MFNode";
ProtoInterface86.field = new MFNode();

ProtoInterface86.field[0] = field87;

let field88 = browser.currentScene.createNode("field");
field88.name = "removeChildren";
field88.accessType = "inputOnly";
field88.type = "MFNode";
ProtoInterface86.field[1] = field88;

let field89 = browser.currentScene.createNode("field");
field89.name = "center";
field89.accessType = "inputOutput";
field89.type = "SFVec3f";
field89.value = "0 0 0";
ProtoInterface86.field[2] = field89;

let field90 = browser.currentScene.createNode("field");
field90.name = "children";
field90.accessType = "inputOutput";
field90.type = "MFNode";
ProtoInterface86.field[3] = field90;

let field91 = browser.currentScene.createNode("field");
field91.name = "name";
field91.accessType = "inputOutput";
field91.type = "SFString";
ProtoInterface86.field[4] = field91;

let field92 = browser.currentScene.createNode("field");
field92.name = "rotation";
field92.accessType = "inputOutput";
field92.type = "SFRotation";
field92.value = "0 0 1 0";
ProtoInterface86.field[5] = field92;

let field93 = browser.currentScene.createNode("field");
field93.name = "scale";
field93.accessType = "inputOutput";
field93.type = "SFVec3f";
field93.value = "1 1 1";
ProtoInterface86.field[6] = field93;

let field94 = browser.currentScene.createNode("field");
field94.name = "scaleOrientation";
field94.accessType = "inputOutput";
field94.type = "SFRotation";
field94.value = "0 0 1 0";
ProtoInterface86.field[7] = field94;

let field95 = browser.currentScene.createNode("field");
field95.name = "translation";
field95.accessType = "inputOutput";
field95.type = "SFVec3f";
field95.value = "0 0 0";
ProtoInterface86.field[8] = field95;

ProtoDeclare85.protoInterface = ProtoInterface86;

let ProtoBody96 = browser.currentScene.createNode("ProtoBody");
let Transform97 = browser.currentScene.createNode("Transform");
let IS98 = browser.currentScene.createNode("IS");
let connect99 = browser.currentScene.createNode("connect");
connect99.nodeField = "children";
connect99.protoField = "children";
IS98.connect = new MFNode();

IS98.connect[0] = connect99;

let connect100 = browser.currentScene.createNode("connect");
connect100.nodeField = "center";
connect100.protoField = "center";
IS98.connect[1] = connect100;

let connect101 = browser.currentScene.createNode("connect");
connect101.nodeField = "rotation";
connect101.protoField = "rotation";
IS98.connect[2] = connect101;

let connect102 = browser.currentScene.createNode("connect");
connect102.nodeField = "scale";
connect102.protoField = "scale";
IS98.connect[3] = connect102;

let connect103 = browser.currentScene.createNode("connect");
connect103.nodeField = "scaleOrientation";
connect103.protoField = "scaleOrientation";
IS98.connect[4] = connect103;

let connect104 = browser.currentScene.createNode("connect");
connect104.nodeField = "translation";
connect104.protoField = "translation";
IS98.connect[5] = connect104;

let connect105 = browser.currentScene.createNode("connect");
connect105.nodeField = "addChildren";
connect105.protoField = "addChildren";
IS98.connect[6] = connect105;

let connect106 = browser.currentScene.createNode("connect");
connect106.nodeField = "removeChildren";
connect106.protoField = "removeChildren";
IS98.connect[7] = connect106;

Transform97.iS = IS98;

ProtoBody96.children = new MFNode();

ProtoBody96.children[0] = Transform97;

ProtoDeclare85.protoBody = ProtoBody96;

browser.currentScene.children[3] = ProtoDeclare85;

let ProtoInstance107 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance107.name = "Humanoid";
ProtoInstance107.DEF = "humanoid_2";
let fieldValue108 = browser.currentScene.createNode("fieldValue");
fieldValue108.name = "humanoidBody";
let ProtoInstance109 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance109.name = "Joint";
ProtoInstance109.DEF = "hanim_humanoid_root_2";
let fieldValue110 = browser.currentScene.createNode("fieldValue");
fieldValue110.name = "stiffness";
fieldValue110.value = "1 1 1";
ProtoInstance109.fieldValue = new MFNode();

ProtoInstance109.fieldValue[0] = fieldValue110;

let fieldValue111 = browser.currentScene.createNode("fieldValue");
fieldValue111.name = "name";
fieldValue111.value = "humanoid_root";
ProtoInstance109.fieldValue[1] = fieldValue111;

let fieldValue112 = browser.currentScene.createNode("fieldValue");
fieldValue112.name = "center";
fieldValue112.value = "0 0.824000000953674 0.0276999995112419";
ProtoInstance109.fieldValue[2] = fieldValue112;

let fieldValue113 = browser.currentScene.createNode("fieldValue");
fieldValue113.name = "children";
let ProtoInstance114 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance114.name = "Segment";
ProtoInstance114.DEF = "hanim_sacrum_2";
let fieldValue115 = browser.currentScene.createNode("fieldValue");
fieldValue115.name = "name";
fieldValue115.value = "sacrum";
ProtoInstance114.fieldValue = new MFNode();

ProtoInstance114.fieldValue[0] = fieldValue115;

let fieldValue116 = browser.currentScene.createNode("fieldValue");
fieldValue116.name = "children";
let ProtoInstance117 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance117.name = "Site";
ProtoInstance117.DEF = "hanim_skull_tip_2";
let fieldValue118 = browser.currentScene.createNode("fieldValue");
fieldValue118.name = "name";
fieldValue118.value = "skull_tip";
ProtoInstance117.fieldValue = new MFNode();

ProtoInstance117.fieldValue[0] = fieldValue118;

let fieldValue119 = browser.currentScene.createNode("fieldValue");
fieldValue119.name = "translation";
fieldValue119.value = "0.00499999988824129 1.75039994716644 0.00549999997019768";
ProtoInstance117.fieldValue[1] = fieldValue119;

fieldValue116.children = new MFNode();

fieldValue116.children[0] = ProtoInstance117;

let ProtoInstance120 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance120.name = "Site";
ProtoInstance120.DEF = "hanim_sellion_2";
let fieldValue121 = browser.currentScene.createNode("fieldValue");
fieldValue121.name = "name";
fieldValue121.value = "sellion";
ProtoInstance120.fieldValue = new MFNode();

ProtoInstance120.fieldValue[0] = fieldValue121;

let fieldValue122 = browser.currentScene.createNode("fieldValue");
fieldValue122.name = "translation";
fieldValue122.value = "0.00579999992623925 1.63160002231598 0.0851999968290329";
ProtoInstance120.fieldValue[1] = fieldValue122;

fieldValue116.children[1] = ProtoInstance120;

let ProtoInstance123 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance123.name = "Site";
ProtoInstance123.DEF = "hanim_r_infraorbitale_2";
let fieldValue124 = browser.currentScene.createNode("fieldValue");
fieldValue124.name = "name";
fieldValue124.value = "r_infraorbitale";
ProtoInstance123.fieldValue = new MFNode();

ProtoInstance123.fieldValue[0] = fieldValue124;

let fieldValue125 = browser.currentScene.createNode("fieldValue");
fieldValue125.name = "translation";
fieldValue125.value = "-0.023700000718236 1.61710000038147 0.0751999989151955";
ProtoInstance123.fieldValue[1] = fieldValue125;

fieldValue116.children[2] = ProtoInstance123;

let ProtoInstance126 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance126.name = "Site";
ProtoInstance126.DEF = "hanim_l_infraorbitale_2";
let fieldValue127 = browser.currentScene.createNode("fieldValue");
fieldValue127.name = "name";
fieldValue127.value = "l_infraorbitale";
ProtoInstance126.fieldValue = new MFNode();

ProtoInstance126.fieldValue[0] = fieldValue127;

let fieldValue128 = browser.currentScene.createNode("fieldValue");
fieldValue128.name = "translation";
fieldValue128.value = "0.0340999998152256 1.61710000038147 0.0751999989151955";
ProtoInstance126.fieldValue[1] = fieldValue128;

fieldValue116.children[3] = ProtoInstance126;

let ProtoInstance129 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance129.name = "Site";
ProtoInstance129.DEF = "hanim_supramenton_2";
let fieldValue130 = browser.currentScene.createNode("fieldValue");
fieldValue130.name = "name";
fieldValue130.value = "supramenton";
ProtoInstance129.fieldValue = new MFNode();

ProtoInstance129.fieldValue[0] = fieldValue130;

let fieldValue131 = browser.currentScene.createNode("fieldValue");
fieldValue131.name = "translation";
fieldValue131.value = "0.00609999988228083 1.54100000858307 0.0804999992251396";
ProtoInstance129.fieldValue[1] = fieldValue131;

fieldValue116.children[4] = ProtoInstance129;

let ProtoInstance132 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance132.name = "Site";
ProtoInstance132.DEF = "hanim_r_tragion_2";
let fieldValue133 = browser.currentScene.createNode("fieldValue");
fieldValue133.name = "name";
fieldValue133.value = "r_tragion";
ProtoInstance132.fieldValue = new MFNode();

ProtoInstance132.fieldValue[0] = fieldValue133;

let fieldValue134 = browser.currentScene.createNode("fieldValue");
fieldValue134.name = "translation";
fieldValue134.value = "-0.0645999982953072 1.63469994068146 0.0302000008523464";
ProtoInstance132.fieldValue[1] = fieldValue134;

fieldValue116.children[5] = ProtoInstance132;

let ProtoInstance135 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance135.name = "Site";
ProtoInstance135.DEF = "hanim_r_gonion_2";
let fieldValue136 = browser.currentScene.createNode("fieldValue");
fieldValue136.name = "name";
fieldValue136.value = "r_gonion";
ProtoInstance135.fieldValue = new MFNode();

ProtoInstance135.fieldValue[0] = fieldValue136;

let fieldValue137 = browser.currentScene.createNode("fieldValue");
fieldValue137.name = "translation";
fieldValue137.value = "-0.0520000010728836 1.55289995670319 0.0346999987959862";
ProtoInstance135.fieldValue[1] = fieldValue137;

fieldValue116.children[6] = ProtoInstance135;

let ProtoInstance138 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance138.name = "Site";
ProtoInstance138.DEF = "hanim_l_tragion_2";
let fieldValue139 = browser.currentScene.createNode("fieldValue");
fieldValue139.name = "name";
fieldValue139.value = "l_tragion";
ProtoInstance138.fieldValue = new MFNode();

ProtoInstance138.fieldValue[0] = fieldValue139;

let fieldValue140 = browser.currentScene.createNode("fieldValue");
fieldValue140.name = "translation";
fieldValue140.value = "0.0738999992609024 1.63479995727539 0.0282000005245209";
ProtoInstance138.fieldValue[1] = fieldValue140;

fieldValue116.children[7] = ProtoInstance138;

let ProtoInstance141 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance141.name = "Site";
ProtoInstance141.DEF = "hanim_l_gonion_2";
let fieldValue142 = browser.currentScene.createNode("fieldValue");
fieldValue142.name = "name";
fieldValue142.value = "l_gonion";
ProtoInstance141.fieldValue = new MFNode();

ProtoInstance141.fieldValue[0] = fieldValue142;

let fieldValue143 = browser.currentScene.createNode("fieldValue");
fieldValue143.name = "translation";
fieldValue143.value = "0.0631000027060509 1.55299997329712 0.0329999998211861";
ProtoInstance141.fieldValue[1] = fieldValue143;

fieldValue116.children[8] = ProtoInstance141;

let ProtoInstance144 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance144.name = "Site";
ProtoInstance144.DEF = "hanim_nuchale_2";
let fieldValue145 = browser.currentScene.createNode("fieldValue");
fieldValue145.name = "name";
fieldValue145.value = "nuchale";
ProtoInstance144.fieldValue = new MFNode();

ProtoInstance144.fieldValue[0] = fieldValue145;

let fieldValue146 = browser.currentScene.createNode("fieldValue");
fieldValue146.name = "translation";
fieldValue146.value = "0.00389999989420176 1.59720003604889 -0.0795999988913536";
ProtoInstance144.fieldValue[1] = fieldValue146;

fieldValue116.children[9] = ProtoInstance144;

let ProtoInstance147 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance147.name = "Site";
ProtoInstance147.DEF = "hanim_r_clavicale_2";
let fieldValue148 = browser.currentScene.createNode("fieldValue");
fieldValue148.name = "name";
fieldValue148.value = "r_clavicale";
ProtoInstance147.fieldValue = new MFNode();

ProtoInstance147.fieldValue[0] = fieldValue148;

let fieldValue149 = browser.currentScene.createNode("fieldValue");
fieldValue149.name = "translation";
fieldValue149.value = "-0.0115000000223517 1.49430000782013 0.0399999991059303";
ProtoInstance147.fieldValue[1] = fieldValue149;

fieldValue116.children[10] = ProtoInstance147;

let ProtoInstance150 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance150.name = "Site";
ProtoInstance150.DEF = "hanim_suprasternale_2";
let fieldValue151 = browser.currentScene.createNode("fieldValue");
fieldValue151.name = "name";
fieldValue151.value = "suprasternale";
ProtoInstance150.fieldValue = new MFNode();

ProtoInstance150.fieldValue[0] = fieldValue151;

let fieldValue152 = browser.currentScene.createNode("fieldValue");
fieldValue152.name = "translation";
fieldValue152.value = "0.00839999970048666 1.47140002250671 0.0551000013947487";
ProtoInstance150.fieldValue[1] = fieldValue152;

fieldValue116.children[11] = ProtoInstance150;

let ProtoInstance153 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance153.name = "Site";
ProtoInstance153.DEF = "hanim_l_clavicale_2";
let fieldValue154 = browser.currentScene.createNode("fieldValue");
fieldValue154.name = "name";
fieldValue154.value = "l_clavicale";
ProtoInstance153.fieldValue = new MFNode();

ProtoInstance153.fieldValue[0] = fieldValue154;

let fieldValue155 = browser.currentScene.createNode("fieldValue");
fieldValue155.name = "translation";
fieldValue155.value = "0.0271000005304813 1.49430000782013 0.0394000001251698";
ProtoInstance153.fieldValue[1] = fieldValue155;

fieldValue116.children[12] = ProtoInstance153;

let ProtoInstance156 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance156.name = "Site";
ProtoInstance156.DEF = "hanim_r_thelion_2";
let fieldValue157 = browser.currentScene.createNode("fieldValue");
fieldValue157.name = "name";
fieldValue157.value = "r_thelion";
ProtoInstance156.fieldValue = new MFNode();

ProtoInstance156.fieldValue[0] = fieldValue157;

let fieldValue158 = browser.currentScene.createNode("fieldValue");
fieldValue158.name = "translation";
fieldValue158.value = "-0.0736000016331673 1.33850002288818 0.121699996292591";
ProtoInstance156.fieldValue[1] = fieldValue158;

fieldValue116.children[13] = ProtoInstance156;

let ProtoInstance159 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance159.name = "Site";
ProtoInstance159.DEF = "hanim_l_thelion_2";
let fieldValue160 = browser.currentScene.createNode("fieldValue");
fieldValue160.name = "name";
fieldValue160.value = "l_thelion";
ProtoInstance159.fieldValue = new MFNode();

ProtoInstance159.fieldValue[0] = fieldValue160;

let fieldValue161 = browser.currentScene.createNode("fieldValue");
fieldValue161.name = "translation";
fieldValue161.value = "0.0917999967932701 1.33819997310638 0.119199998676777";
ProtoInstance159.fieldValue[1] = fieldValue161;

fieldValue116.children[14] = ProtoInstance159;

let ProtoInstance162 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance162.name = "Site";
ProtoInstance162.DEF = "hanim_substernale_2";
let fieldValue163 = browser.currentScene.createNode("fieldValue");
fieldValue163.name = "name";
fieldValue163.value = "substernale";
ProtoInstance162.fieldValue = new MFNode();

ProtoInstance162.fieldValue[0] = fieldValue163;

let fieldValue164 = browser.currentScene.createNode("fieldValue");
fieldValue164.name = "translation";
fieldValue164.value = "0.008500000461936 1.29949998855591 0.114699997007847";
ProtoInstance162.fieldValue[1] = fieldValue164;

fieldValue116.children[15] = ProtoInstance162;

let ProtoInstance165 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance165.name = "Site";
ProtoInstance165.DEF = "hanim_r_rib10_2";
let fieldValue166 = browser.currentScene.createNode("fieldValue");
fieldValue166.name = "name";
fieldValue166.value = "r_rib10";
ProtoInstance165.fieldValue = new MFNode();

ProtoInstance165.fieldValue[0] = fieldValue166;

let fieldValue167 = browser.currentScene.createNode("fieldValue");
fieldValue167.name = "translation";
fieldValue167.value = "-0.0710999965667725 1.19410002231598 0.101599998772144";
ProtoInstance165.fieldValue[1] = fieldValue167;

fieldValue116.children[16] = ProtoInstance165;

let ProtoInstance168 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance168.name = "Site";
ProtoInstance168.DEF = "hanim_r_asis_2";
let fieldValue169 = browser.currentScene.createNode("fieldValue");
fieldValue169.name = "name";
fieldValue169.value = "r_asis";
ProtoInstance168.fieldValue = new MFNode();

ProtoInstance168.fieldValue[0] = fieldValue169;

let fieldValue170 = browser.currentScene.createNode("fieldValue");
fieldValue170.name = "translation";
fieldValue170.value = "-0.088699996471405 1.00209999084473 0.111199997365475";
ProtoInstance168.fieldValue[1] = fieldValue170;

fieldValue116.children[17] = ProtoInstance168;

let ProtoInstance171 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance171.name = "Site";
ProtoInstance171.DEF = "hanim_l_rib10_2";
let fieldValue172 = browser.currentScene.createNode("fieldValue");
fieldValue172.name = "name";
fieldValue172.value = "l_rib10";
ProtoInstance171.fieldValue = new MFNode();

ProtoInstance171.fieldValue[0] = fieldValue172;

let fieldValue173 = browser.currentScene.createNode("fieldValue");
fieldValue173.name = "translation";
fieldValue173.value = "0.0870999991893768 1.19249999523163 0.099200002849102";
ProtoInstance171.fieldValue[1] = fieldValue173;

fieldValue116.children[18] = ProtoInstance171;

let ProtoInstance174 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance174.name = "Site";
ProtoInstance174.DEF = "hanim_l_asis_2";
let fieldValue175 = browser.currentScene.createNode("fieldValue");
fieldValue175.name = "name";
fieldValue175.value = "l_asis";
ProtoInstance174.fieldValue = new MFNode();

ProtoInstance174.fieldValue[0] = fieldValue175;

let fieldValue176 = browser.currentScene.createNode("fieldValue");
fieldValue176.name = "translation";
fieldValue176.value = "0.0925000011920929 0.998300015926361 0.105200000107288";
ProtoInstance174.fieldValue[1] = fieldValue176;

fieldValue116.children[19] = ProtoInstance174;

let ProtoInstance177 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance177.name = "Site";
ProtoInstance177.DEF = "hanim_r_iliocristale_2";
let fieldValue178 = browser.currentScene.createNode("fieldValue");
fieldValue178.name = "name";
fieldValue178.value = "r_iliocristale";
ProtoInstance177.fieldValue = new MFNode();

ProtoInstance177.fieldValue[0] = fieldValue178;

let fieldValue179 = browser.currentScene.createNode("fieldValue");
fieldValue179.name = "translation";
fieldValue179.value = "-0.152500003576279 1.0628000497818 0.00350000010803342";
ProtoInstance177.fieldValue[1] = fieldValue179;

fieldValue116.children[20] = ProtoInstance177;

let ProtoInstance180 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance180.name = "Site";
ProtoInstance180.DEF = "hanim_r_trochanterion_2";
let fieldValue181 = browser.currentScene.createNode("fieldValue");
fieldValue181.name = "name";
fieldValue181.value = "r_trochanterion";
ProtoInstance180.fieldValue = new MFNode();

ProtoInstance180.fieldValue[0] = fieldValue181;

let fieldValue182 = browser.currentScene.createNode("fieldValue");
fieldValue182.name = "translation";
fieldValue182.value = "-0.16889999806881 0.841899991035461 0.0351999998092651";
ProtoInstance180.fieldValue[1] = fieldValue182;

fieldValue116.children[21] = ProtoInstance180;

let ProtoInstance183 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance183.name = "Site";
ProtoInstance183.DEF = "hanim_l_iliocristale_2";
let fieldValue184 = browser.currentScene.createNode("fieldValue");
fieldValue184.name = "name";
fieldValue184.value = "l_iliocristale";
ProtoInstance183.fieldValue = new MFNode();

ProtoInstance183.fieldValue[0] = fieldValue184;

let fieldValue185 = browser.currentScene.createNode("fieldValue");
fieldValue185.name = "translation";
fieldValue185.value = "0.161200001835823 1.05369997024536 0.0007999999797903";
ProtoInstance183.fieldValue[1] = fieldValue185;

fieldValue116.children[22] = ProtoInstance183;

let ProtoInstance186 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance186.name = "Site";
ProtoInstance186.DEF = "hanim_l_trochanterion_2";
let fieldValue187 = browser.currentScene.createNode("fieldValue");
fieldValue187.name = "name";
fieldValue187.value = "l_trochanterion";
ProtoInstance186.fieldValue = new MFNode();

ProtoInstance186.fieldValue[0] = fieldValue187;

let fieldValue188 = browser.currentScene.createNode("fieldValue");
fieldValue188.name = "translation";
fieldValue188.value = "0.167699992656708 0.833599984645844 0.0303000006824732";
ProtoInstance186.fieldValue[1] = fieldValue188;

fieldValue116.children[23] = ProtoInstance186;

let ProtoInstance189 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance189.name = "Site";
ProtoInstance189.DEF = "hanim_cervicale_2";
let fieldValue190 = browser.currentScene.createNode("fieldValue");
fieldValue190.name = "name";
fieldValue190.value = "cervicale";
ProtoInstance189.fieldValue = new MFNode();

ProtoInstance189.fieldValue[0] = fieldValue190;

let fieldValue191 = browser.currentScene.createNode("fieldValue");
fieldValue191.name = "translation";
fieldValue191.value = "0.0063999998383224 1.51999998092651 -0.0815000012516975";
ProtoInstance189.fieldValue[1] = fieldValue191;

fieldValue116.children[24] = ProtoInstance189;

let ProtoInstance192 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance192.name = "Site";
ProtoInstance192.DEF = "hanim_spine_2_lower_back_2";
let fieldValue193 = browser.currentScene.createNode("fieldValue");
fieldValue193.name = "name";
fieldValue193.value = "spine_2_lower_back";
ProtoInstance192.fieldValue = new MFNode();

ProtoInstance192.fieldValue[0] = fieldValue193;

let fieldValue194 = browser.currentScene.createNode("fieldValue");
fieldValue194.name = "translation";
fieldValue194.value = "0.00490000005811453 1.19079995155334 -0.111299999058247";
ProtoInstance192.fieldValue[1] = fieldValue194;

fieldValue116.children[25] = ProtoInstance192;

let ProtoInstance195 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance195.name = "Site";
ProtoInstance195.DEF = "hanim_r_psis_2";
let fieldValue196 = browser.currentScene.createNode("fieldValue");
fieldValue196.name = "name";
fieldValue196.value = "r_psis";
ProtoInstance195.fieldValue = new MFNode();

ProtoInstance195.fieldValue[0] = fieldValue196;

let fieldValue197 = browser.currentScene.createNode("fieldValue");
fieldValue197.name = "translation";
fieldValue197.value = "-0.0715999975800514 1.01900005340576 -0.113799996674061";
ProtoInstance195.fieldValue[1] = fieldValue197;

fieldValue116.children[26] = ProtoInstance195;

let ProtoInstance198 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance198.name = "Site";
ProtoInstance198.DEF = "hanim_l_psis_2";
let fieldValue199 = browser.currentScene.createNode("fieldValue");
fieldValue199.name = "name";
fieldValue199.value = "l_psis";
ProtoInstance198.fieldValue = new MFNode();

ProtoInstance198.fieldValue[0] = fieldValue199;

let fieldValue200 = browser.currentScene.createNode("fieldValue");
fieldValue200.name = "translation";
fieldValue200.value = "0.0773999989032745 1.01900005340576 -0.115099996328354";
ProtoInstance198.fieldValue[1] = fieldValue200;

fieldValue116.children[27] = ProtoInstance198;

let ProtoInstance201 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance201.name = "Site";
ProtoInstance201.DEF = "hanim_waist_preferred_posterior_2";
let fieldValue202 = browser.currentScene.createNode("fieldValue");
fieldValue202.name = "name";
fieldValue202.value = "waist_preferred_posterior";
ProtoInstance201.fieldValue = new MFNode();

ProtoInstance201.fieldValue[0] = fieldValue202;

let fieldValue203 = browser.currentScene.createNode("fieldValue");
fieldValue203.name = "translation";
fieldValue203.value = "0.28999999165535 1.09150004386902 -0.109099999070168";
ProtoInstance201.fieldValue[1] = fieldValue203;

fieldValue116.children[28] = ProtoInstance201;

let ProtoInstance204 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance204.name = "Site";
ProtoInstance204.DEF = "hanim_r_acromion_2";
let fieldValue205 = browser.currentScene.createNode("fieldValue");
fieldValue205.name = "name";
fieldValue205.value = "r_acromion";
ProtoInstance204.fieldValue = new MFNode();

ProtoInstance204.fieldValue[0] = fieldValue205;

let fieldValue206 = browser.currentScene.createNode("fieldValue");
fieldValue206.name = "translation";
fieldValue206.value = "-0.190500006079674 1.47909998893738 -0.0430999994277954";
ProtoInstance204.fieldValue[1] = fieldValue206;

fieldValue116.children[29] = ProtoInstance204;

let ProtoInstance207 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance207.name = "Site";
ProtoInstance207.DEF = "hanim_r_axilla_proximal_2";
let fieldValue208 = browser.currentScene.createNode("fieldValue");
fieldValue208.name = "name";
fieldValue208.value = "r_axilla_proximal";
ProtoInstance207.fieldValue = new MFNode();

ProtoInstance207.fieldValue[0] = fieldValue208;

let fieldValue209 = browser.currentScene.createNode("fieldValue");
fieldValue209.name = "translation";
fieldValue209.value = "-0.162599995732307 1.40719997882843 -0.00310000008903444";
ProtoInstance207.fieldValue[1] = fieldValue209;

fieldValue116.children[30] = ProtoInstance207;

let ProtoInstance210 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance210.name = "Site";
ProtoInstance210.DEF = "hanim_r_radial_styloid_2";
let fieldValue211 = browser.currentScene.createNode("fieldValue");
fieldValue211.name = "name";
fieldValue211.value = "r_radial_styloid";
ProtoInstance210.fieldValue = new MFNode();

ProtoInstance210.fieldValue[0] = fieldValue211;

let fieldValue212 = browser.currentScene.createNode("fieldValue");
fieldValue212.name = "translation";
fieldValue212.value = "-0.188400000333786 0.86760002374649 -0.0359999984502792";
ProtoInstance210.fieldValue[1] = fieldValue212;

fieldValue116.children[31] = ProtoInstance210;

let ProtoInstance213 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance213.name = "Site";
ProtoInstance213.DEF = "hanim_r_axilla_distal_2";
let fieldValue214 = browser.currentScene.createNode("fieldValue");
fieldValue214.name = "name";
fieldValue214.value = "r_axilla_distal";
ProtoInstance213.fieldValue = new MFNode();

ProtoInstance213.fieldValue[0] = fieldValue214;

let fieldValue215 = browser.currentScene.createNode("fieldValue");
fieldValue215.name = "translation";
fieldValue215.value = "-0.160300001502037 1.40980005264282 -0.0825999975204468";
ProtoInstance213.fieldValue[1] = fieldValue215;

fieldValue116.children[32] = ProtoInstance213;

let ProtoInstance216 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance216.name = "Site";
ProtoInstance216.DEF = "hanim_r_olecranon_2";
let fieldValue217 = browser.currentScene.createNode("fieldValue");
fieldValue217.name = "name";
fieldValue217.value = "r_olecranon";
ProtoInstance216.fieldValue = new MFNode();

ProtoInstance216.fieldValue[0] = fieldValue217;

let fieldValue218 = browser.currentScene.createNode("fieldValue");
fieldValue218.name = "translation";
fieldValue218.value = "-0.190699994564056 1.14049994945526 -0.106499999761581";
ProtoInstance216.fieldValue[1] = fieldValue218;

fieldValue116.children[33] = ProtoInstance216;

let ProtoInstance219 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance219.name = "Site";
ProtoInstance219.DEF = "hanim_r_humeral_lateral_epicondyles_2";
let fieldValue220 = browser.currentScene.createNode("fieldValue");
fieldValue220.name = "name";
fieldValue220.value = "r_humeral_lateral_epicondyles";
ProtoInstance219.fieldValue = new MFNode();

ProtoInstance219.fieldValue[0] = fieldValue220;

let fieldValue221 = browser.currentScene.createNode("fieldValue");
fieldValue221.name = "translation";
fieldValue221.value = "-0.222399994730949 1.15170001983643 -0.103299997746944";
ProtoInstance219.fieldValue[1] = fieldValue221;

fieldValue116.children[34] = ProtoInstance219;

let ProtoInstance222 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance222.name = "Site";
ProtoInstance222.DEF = "hanim_r_humeral_medial_epicondyles_2";
let fieldValue223 = browser.currentScene.createNode("fieldValue");
fieldValue223.name = "name";
fieldValue223.value = "r_humeral_medial_epicondyles";
ProtoInstance222.fieldValue = new MFNode();

ProtoInstance222.fieldValue[0] = fieldValue223;

let fieldValue224 = browser.currentScene.createNode("fieldValue");
fieldValue224.name = "translation";
fieldValue224.value = "-0.167999997735024 1.12979996204376 -0.106200002133846";
ProtoInstance222.fieldValue[1] = fieldValue224;

fieldValue116.children[35] = ProtoInstance222;

let ProtoInstance225 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance225.name = "Site";
ProtoInstance225.DEF = "hanim_r_radiale_2";
let fieldValue226 = browser.currentScene.createNode("fieldValue");
fieldValue226.name = "name";
fieldValue226.value = "r_radiale";
ProtoInstance225.fieldValue = new MFNode();

ProtoInstance225.fieldValue[0] = fieldValue226;

let fieldValue227 = browser.currentScene.createNode("fieldValue");
fieldValue227.name = "translation";
fieldValue227.value = "-0.212999999523163 1.130499958992 -0.109099999070168";
ProtoInstance225.fieldValue[1] = fieldValue227;

fieldValue116.children[36] = ProtoInstance225;

let ProtoInstance228 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance228.name = "Site";
ProtoInstance228.DEF = "hanim_r_metacarpal_phalanx3";
let fieldValue229 = browser.currentScene.createNode("fieldValue");
fieldValue229.name = "name";
fieldValue229.value = "r_metacarpal_phalanx_2";
ProtoInstance228.fieldValue = new MFNode();

ProtoInstance228.fieldValue[0] = fieldValue229;

let fieldValue230 = browser.currentScene.createNode("fieldValue");
fieldValue230.name = "translation";
fieldValue230.value = "-0.197699993848801 0.816900014877319 -0.0176999997347593";
ProtoInstance228.fieldValue[1] = fieldValue230;

fieldValue116.children[37] = ProtoInstance228;

let ProtoInstance231 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance231.name = "Site";
ProtoInstance231.DEF = "hanim_r_dactylion_2";
let fieldValue232 = browser.currentScene.createNode("fieldValue");
fieldValue232.name = "name";
fieldValue232.value = "r_dactylion";
ProtoInstance231.fieldValue = new MFNode();

ProtoInstance231.fieldValue[0] = fieldValue232;

let fieldValue233 = browser.currentScene.createNode("fieldValue");
fieldValue233.name = "translation";
fieldValue233.value = "-0.194100007414818 0.677200019359589 -0.0423000007867813";
ProtoInstance231.fieldValue[1] = fieldValue233;

fieldValue116.children[38] = ProtoInstance231;

let ProtoInstance234 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance234.name = "Site";
ProtoInstance234.DEF = "hanim_r_ulnar_styloid_2";
let fieldValue235 = browser.currentScene.createNode("fieldValue");
fieldValue235.name = "name";
fieldValue235.value = "r_ulnar_styloid";
ProtoInstance234.fieldValue = new MFNode();

ProtoInstance234.fieldValue[0] = fieldValue235;

let fieldValue236 = browser.currentScene.createNode("fieldValue");
fieldValue236.name = "translation";
fieldValue236.value = "-0.21170000731945 0.856199979782104 -0.0584000013768673";
ProtoInstance234.fieldValue[1] = fieldValue236;

fieldValue116.children[39] = ProtoInstance234;

let ProtoInstance237 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance237.name = "Site";
ProtoInstance237.DEF = "hanim_r_metacarpal_phalanx6";
let fieldValue238 = browser.currentScene.createNode("fieldValue");
fieldValue238.name = "name";
fieldValue238.value = "r_metacarpal_phalanx_5";
ProtoInstance237.fieldValue = new MFNode();

ProtoInstance237.fieldValue[0] = fieldValue238;

let fieldValue239 = browser.currentScene.createNode("fieldValue");
fieldValue239.name = "translation";
fieldValue239.value = "-0.192900002002716 0.788999974727631 -0.10639999806881";
ProtoInstance237.fieldValue[1] = fieldValue239;

fieldValue116.children[40] = ProtoInstance237;

let ProtoInstance240 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance240.name = "Site";
ProtoInstance240.DEF = "hanim_l_acromion_2";
let fieldValue241 = browser.currentScene.createNode("fieldValue");
fieldValue241.name = "name";
fieldValue241.value = "l_acromion";
ProtoInstance240.fieldValue = new MFNode();

ProtoInstance240.fieldValue[0] = fieldValue241;

let fieldValue242 = browser.currentScene.createNode("fieldValue");
fieldValue242.name = "translation";
fieldValue242.value = "0.203199997544289 1.47599995136261 -0.0489999987185001";
ProtoInstance240.fieldValue[1] = fieldValue242;

fieldValue116.children[41] = ProtoInstance240;

let ProtoInstance243 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance243.name = "Site";
ProtoInstance243.DEF = "hanim_l_axilla_proximal_2";
let fieldValue244 = browser.currentScene.createNode("fieldValue");
fieldValue244.name = "name";
fieldValue244.value = "l_axilla_proximal";
ProtoInstance243.fieldValue = new MFNode();

ProtoInstance243.fieldValue[0] = fieldValue244;

let fieldValue245 = browser.currentScene.createNode("fieldValue");
fieldValue245.name = "translation";
fieldValue245.value = "0.177699998021126 1.40649998188019 -0.00749999983236194";
ProtoInstance243.fieldValue[1] = fieldValue245;

fieldValue116.children[42] = ProtoInstance243;

let ProtoInstance246 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance246.name = "Site";
ProtoInstance246.DEF = "hanim_l_radial_styloid_2";
let fieldValue247 = browser.currentScene.createNode("fieldValue");
fieldValue247.name = "name";
fieldValue247.value = "l_radial_styloid";
ProtoInstance246.fieldValue = new MFNode();

ProtoInstance246.fieldValue[0] = fieldValue247;

let fieldValue248 = browser.currentScene.createNode("fieldValue");
fieldValue248.name = "translation";
fieldValue248.value = "0.190099999308586 0.864499986171722 -0.0414999984204769";
ProtoInstance246.fieldValue[1] = fieldValue248;

fieldValue116.children[43] = ProtoInstance246;

let ProtoInstance249 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance249.name = "Site";
ProtoInstance249.DEF = "hanim_l_axilla_distal_2";
let fieldValue250 = browser.currentScene.createNode("fieldValue");
fieldValue250.name = "name";
fieldValue250.value = "l_axilla_distal";
ProtoInstance249.fieldValue = new MFNode();

ProtoInstance249.fieldValue[0] = fieldValue250;

let fieldValue251 = browser.currentScene.createNode("fieldValue");
fieldValue251.name = "translation";
fieldValue251.value = "0.17059999704361 1.40719997882843 -0.0874999985098839";
ProtoInstance249.fieldValue[1] = fieldValue251;

fieldValue116.children[44] = ProtoInstance249;

let ProtoInstance252 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance252.name = "Site";
ProtoInstance252.DEF = "hanim_l_olecranon_2";
let fieldValue253 = browser.currentScene.createNode("fieldValue");
fieldValue253.name = "name";
fieldValue253.value = "l_olecranon";
ProtoInstance252.fieldValue = new MFNode();

ProtoInstance252.fieldValue[0] = fieldValue253;

let fieldValue254 = browser.currentScene.createNode("fieldValue");
fieldValue254.name = "translation";
fieldValue254.value = "-0.196199998259544 1.13750004768372 -0.112300001084805";
ProtoInstance252.fieldValue[1] = fieldValue254;

fieldValue116.children[45] = ProtoInstance252;

let ProtoInstance255 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance255.name = "Site";
ProtoInstance255.DEF = "hanim_l_humeral_lateral_epicondyles_2";
let fieldValue256 = browser.currentScene.createNode("fieldValue");
fieldValue256.name = "name";
fieldValue256.value = "l_humeral_lateral_epicondyles";
ProtoInstance255.fieldValue = new MFNode();

ProtoInstance255.fieldValue[0] = fieldValue256;

let fieldValue257 = browser.currentScene.createNode("fieldValue");
fieldValue257.name = "translation";
fieldValue257.value = "0.228000000119209 1.14820003509521 -0.109999999403954";
ProtoInstance255.fieldValue[1] = fieldValue257;

fieldValue116.children[46] = ProtoInstance255;

let ProtoInstance258 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance258.name = "Site";
ProtoInstance258.DEF = "hanim_l_humeral_medial_epicondyles_2";
let fieldValue259 = browser.currentScene.createNode("fieldValue");
fieldValue259.name = "name";
fieldValue259.value = "l_humeral_medial_epicondyles";
ProtoInstance258.fieldValue = new MFNode();

ProtoInstance258.fieldValue[0] = fieldValue259;

let fieldValue260 = browser.currentScene.createNode("fieldValue");
fieldValue260.name = "translation";
fieldValue260.value = "0.173500001430511 1.12720000743866 -0.111299999058247";
ProtoInstance258.fieldValue[1] = fieldValue260;

fieldValue116.children[47] = ProtoInstance258;

let ProtoInstance261 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance261.name = "Site";
ProtoInstance261.DEF = "hanim_l_radiale_2";
let fieldValue262 = browser.currentScene.createNode("fieldValue");
fieldValue262.name = "name";
fieldValue262.value = "l_radiale";
ProtoInstance261.fieldValue = new MFNode();

ProtoInstance261.fieldValue[0] = fieldValue262;

let fieldValue263 = browser.currentScene.createNode("fieldValue");
fieldValue263.name = "translation";
fieldValue263.value = "0.218199998140335 1.12119996547699 -0.116700001060963";
ProtoInstance261.fieldValue[1] = fieldValue263;

fieldValue116.children[48] = ProtoInstance261;

let ProtoInstance264 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance264.name = "Site";
ProtoInstance264.DEF = "hanim_l_metacarpal_phalanx3";
let fieldValue265 = browser.currentScene.createNode("fieldValue");
fieldValue265.name = "name";
fieldValue265.value = "l_metacarpal_phalanx_2";
ProtoInstance264.fieldValue = new MFNode();

ProtoInstance264.fieldValue[0] = fieldValue265;

let fieldValue266 = browser.currentScene.createNode("fieldValue");
fieldValue266.name = "translation";
fieldValue266.value = "0.200900003314018 0.813899993896484 -0.023700000718236";
ProtoInstance264.fieldValue[1] = fieldValue266;

fieldValue116.children[49] = ProtoInstance264;

let ProtoInstance267 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance267.name = "Site";
ProtoInstance267.DEF = "hanim_l_dactylion_2";
let fieldValue268 = browser.currentScene.createNode("fieldValue");
fieldValue268.name = "name";
fieldValue268.value = "l_dactylion";
ProtoInstance267.fieldValue = new MFNode();

ProtoInstance267.fieldValue[0] = fieldValue268;

let fieldValue269 = browser.currentScene.createNode("fieldValue");
fieldValue269.name = "translation";
fieldValue269.value = "0.205599993467331 0.674300014972687 -0.048200000077486";
ProtoInstance267.fieldValue[1] = fieldValue269;

fieldValue116.children[50] = ProtoInstance267;

let ProtoInstance270 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance270.name = "Site";
ProtoInstance270.DEF = "hanim_l_ulnar_styloid_2";
let fieldValue271 = browser.currentScene.createNode("fieldValue");
fieldValue271.name = "name";
fieldValue271.value = "l_ulnar_styloid";
ProtoInstance270.fieldValue = new MFNode();

ProtoInstance270.fieldValue[0] = fieldValue271;

let fieldValue272 = browser.currentScene.createNode("fieldValue");
fieldValue272.name = "translation";
fieldValue272.value = "-0.214200004935265 0.85290002822876 -0.064800001680851";
ProtoInstance270.fieldValue[1] = fieldValue272;

fieldValue116.children[51] = ProtoInstance270;

let ProtoInstance273 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance273.name = "Site";
ProtoInstance273.DEF = "hanim_l_metacarpal_phalanx6";
let fieldValue274 = browser.currentScene.createNode("fieldValue");
fieldValue274.name = "name";
fieldValue274.value = "l_metacarpal_phalanx_5";
ProtoInstance273.fieldValue = new MFNode();

ProtoInstance273.fieldValue[0] = fieldValue274;

let fieldValue275 = browser.currentScene.createNode("fieldValue");
fieldValue275.name = "translation";
fieldValue275.value = "0.192900002002716 0.78600001335144 -0.112199999392033";
ProtoInstance273.fieldValue[1] = fieldValue275;

fieldValue116.children[52] = ProtoInstance273;

let ProtoInstance276 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance276.name = "Site";
ProtoInstance276.DEF = "hanim_r_knee_crease_2";
let fieldValue277 = browser.currentScene.createNode("fieldValue");
fieldValue277.name = "name";
fieldValue277.value = "r_knee_crease";
ProtoInstance276.fieldValue = new MFNode();

ProtoInstance276.fieldValue[0] = fieldValue277;

let fieldValue278 = browser.currentScene.createNode("fieldValue");
fieldValue278.name = "translation";
fieldValue278.value = "-0.0825000032782555 0.4932000041008 -0.032600000500679";
ProtoInstance276.fieldValue[1] = fieldValue278;

fieldValue116.children[53] = ProtoInstance276;

let ProtoInstance279 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance279.name = "Site";
ProtoInstance279.DEF = "hanim_r_femoral_lateral_epicondyles_2";
let fieldValue280 = browser.currentScene.createNode("fieldValue");
fieldValue280.name = "name";
fieldValue280.value = "r_femoral_lateral_epicondyles";
ProtoInstance279.fieldValue = new MFNode();

ProtoInstance279.fieldValue[0] = fieldValue280;

let fieldValue281 = browser.currentScene.createNode("fieldValue");
fieldValue281.name = "translation";
fieldValue281.value = "-0.142100006341934 0.499199986457825 0.0309999994933605";
ProtoInstance279.fieldValue[1] = fieldValue281;

fieldValue116.children[54] = ProtoInstance279;

let ProtoInstance282 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance282.name = "Site";
ProtoInstance282.DEF = "hanim_r_femoral_medial_epicondyles_2";
let fieldValue283 = browser.currentScene.createNode("fieldValue");
fieldValue283.name = "name";
fieldValue283.value = "r_femoral_lateral_epicondyles";
ProtoInstance282.fieldValue = new MFNode();

ProtoInstance282.fieldValue[0] = fieldValue283;

let fieldValue284 = browser.currentScene.createNode("fieldValue");
fieldValue284.name = "translation";
fieldValue284.value = "-0.0220999997109175 0.501399993896484 0.0288999993354082";
ProtoInstance282.fieldValue[1] = fieldValue284;

fieldValue116.children[55] = ProtoInstance282;

let ProtoInstance285 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance285.name = "Site";
ProtoInstance285.DEF = "hanim_r_tarsal_interphalangeal_phalanx6";
let fieldValue286 = browser.currentScene.createNode("fieldValue");
fieldValue286.name = "name";
fieldValue286.value = "r_tarsal_interphalangeal_phalanx_5";
ProtoInstance285.fieldValue = new MFNode();

ProtoInstance285.fieldValue[0] = fieldValue286;

let fieldValue287 = browser.currentScene.createNode("fieldValue");
fieldValue287.name = "translation";
fieldValue287.value = "-0.152300000190735 0.0165999997407198 0.0895000025629997";
ProtoInstance285.fieldValue[1] = fieldValue287;

fieldValue116.children[56] = ProtoInstance285;

let ProtoInstance288 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance288.name = "Site";
ProtoInstance288.DEF = "hanim_r_lateral_malleolus_2";
let fieldValue289 = browser.currentScene.createNode("fieldValue");
fieldValue289.name = "name";
fieldValue289.value = "r_lateral_malleolus";
ProtoInstance288.fieldValue = new MFNode();

ProtoInstance288.fieldValue[0] = fieldValue289;

let fieldValue290 = browser.currentScene.createNode("fieldValue");
fieldValue290.name = "translation";
fieldValue290.value = "-0.100599996745586 0.0658000037074089 -0.107500001788139";
ProtoInstance288.fieldValue[1] = fieldValue290;

fieldValue116.children[57] = ProtoInstance288;

let ProtoInstance291 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance291.name = "Site";
ProtoInstance291.DEF = "hanim_r_medial_malleolus_2";
let fieldValue292 = browser.currentScene.createNode("fieldValue");
fieldValue292.name = "name";
fieldValue292.value = "r_medial_malleolus";
ProtoInstance291.fieldValue = new MFNode();

ProtoInstance291.fieldValue[0] = fieldValue292;

let fieldValue293 = browser.currentScene.createNode("fieldValue");
fieldValue293.name = "translation";
fieldValue293.value = "-0.0590999983251095 0.0759999975562096 -0.092799998819828";
ProtoInstance291.fieldValue[1] = fieldValue293;

fieldValue116.children[58] = ProtoInstance291;

let ProtoInstance294 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance294.name = "Site";
ProtoInstance294.DEF = "hanim_r_sphyrion_2";
let fieldValue295 = browser.currentScene.createNode("fieldValue");
fieldValue295.name = "name";
fieldValue295.value = "r_sphyrion";
ProtoInstance294.fieldValue = new MFNode();

ProtoInstance294.fieldValue[0] = fieldValue295;

let fieldValue296 = browser.currentScene.createNode("fieldValue");
fieldValue296.name = "translation";
fieldValue296.value = "-0.0603000000119209 0.0610000006854534 -0.100199997425079";
ProtoInstance294.fieldValue[1] = fieldValue296;

fieldValue116.children[59] = ProtoInstance294;

let ProtoInstance297 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance297.name = "Site";
ProtoInstance297.DEF = "hanim_r_tarsal_interphalangeal_phalanx2";
let fieldValue298 = browser.currentScene.createNode("fieldValue");
fieldValue298.name = "name";
fieldValue298.value = "r_tarsal_interphalangeal_phalanx_1";
ProtoInstance297.fieldValue = new MFNode();

ProtoInstance297.fieldValue[0] = fieldValue298;

let fieldValue299 = browser.currentScene.createNode("fieldValue");
fieldValue299.name = "translation";
fieldValue299.value = "-0.0520999990403652 0.0260000005364418 0.012699999846518";
ProtoInstance297.fieldValue[1] = fieldValue299;

fieldValue116.children[60] = ProtoInstance297;

let ProtoInstance300 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance300.name = "Site";
ProtoInstance300.DEF = "hanim_r_calcaneus_posterior_2";
let fieldValue301 = browser.currentScene.createNode("fieldValue");
fieldValue301.name = "name";
fieldValue301.value = "r_calcaneus_posterior";
ProtoInstance300.fieldValue = new MFNode();

ProtoInstance300.fieldValue[0] = fieldValue301;

let fieldValue302 = browser.currentScene.createNode("fieldValue");
fieldValue302.name = "translation";
fieldValue302.value = "-0.0692000016570091 0.0296999998390675 -0.122100003063679";
ProtoInstance300.fieldValue[1] = fieldValue302;

fieldValue116.children[61] = ProtoInstance300;

let ProtoInstance303 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance303.name = "Site";
ProtoInstance303.DEF = "hanim_r_tarsal_distal_phalanx3";
let fieldValue304 = browser.currentScene.createNode("fieldValue");
fieldValue304.name = "name";
fieldValue304.value = "r_tarsal_distal_phalanx_2";
ProtoInstance303.fieldValue = new MFNode();

ProtoInstance303.fieldValue[0] = fieldValue304;

let fieldValue305 = browser.currentScene.createNode("fieldValue");
fieldValue305.name = "translation";
fieldValue305.value = "-0.088299997150898 0.013399999588728 0.138300001621246";
ProtoInstance303.fieldValue[1] = fieldValue305;

fieldValue116.children[62] = ProtoInstance303;

let ProtoInstance306 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance306.name = "Site";
ProtoInstance306.DEF = "hanim_l_knee_crease_2";
let fieldValue307 = browser.currentScene.createNode("fieldValue");
fieldValue307.name = "name";
fieldValue307.value = "l_knee_crease";
ProtoInstance306.fieldValue = new MFNode();

ProtoInstance306.fieldValue[0] = fieldValue307;

let fieldValue308 = browser.currentScene.createNode("fieldValue");
fieldValue308.name = "translation";
fieldValue308.value = "0.0992999970912933 0.488099992275238 -0.0308999996632338";
ProtoInstance306.fieldValue[1] = fieldValue308;

fieldValue116.children[63] = ProtoInstance306;

let ProtoInstance309 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance309.name = "Site";
ProtoInstance309.DEF = "hanim_l_femoral_lateral_epicondyles_2";
let fieldValue310 = browser.currentScene.createNode("fieldValue");
fieldValue310.name = "name";
fieldValue310.value = "l_femoral_lateral_epicondyles";
ProtoInstance309.fieldValue = new MFNode();

ProtoInstance309.fieldValue[0] = fieldValue310;

let fieldValue311 = browser.currentScene.createNode("fieldValue");
fieldValue311.name = "translation";
fieldValue311.value = "0.159799993038177 0.496699988842011 0.0296999998390675";
ProtoInstance309.fieldValue[1] = fieldValue311;

fieldValue116.children[64] = ProtoInstance309;

let ProtoInstance312 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance312.name = "Site";
ProtoInstance312.DEF = "hanim_l_femoral_medial_epicondyles_2";
let fieldValue313 = browser.currentScene.createNode("fieldValue");
fieldValue313.name = "name";
fieldValue313.value = "l_femoral_lateral_epicondyles";
ProtoInstance312.fieldValue = new MFNode();

ProtoInstance312.fieldValue[0] = fieldValue313;

let fieldValue314 = browser.currentScene.createNode("fieldValue");
fieldValue314.name = "translation";
fieldValue314.value = "0.0397999994456768 0.494599997997284 0.0303000006824732";
ProtoInstance312.fieldValue[1] = fieldValue314;

fieldValue116.children[65] = ProtoInstance312;

let ProtoInstance315 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance315.name = "Site";
ProtoInstance315.DEF = "hanim_l_tarsal_interphalangeal_phalanx6";
let fieldValue316 = browser.currentScene.createNode("fieldValue");
fieldValue316.name = "name";
fieldValue316.value = "l_tarsal_interphalangeal_phalanx_5";
ProtoInstance315.fieldValue = new MFNode();

ProtoInstance315.fieldValue[0] = fieldValue316;

let fieldValue317 = browser.currentScene.createNode("fieldValue");
fieldValue317.name = "translation";
fieldValue317.value = "0.182500004768372 0.00700000021606684 0.092799998819828";
ProtoInstance315.fieldValue[1] = fieldValue317;

fieldValue116.children[66] = ProtoInstance315;

let ProtoInstance318 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance318.name = "Site";
ProtoInstance318.DEF = "hanim_l_lateral_malleolus_2";
let fieldValue319 = browser.currentScene.createNode("fieldValue");
fieldValue319.name = "name";
fieldValue319.value = "l_lateral_malleolus";
ProtoInstance318.fieldValue = new MFNode();

ProtoInstance318.fieldValue[0] = fieldValue319;

let fieldValue320 = browser.currentScene.createNode("fieldValue");
fieldValue320.name = "translation";
fieldValue320.value = "0.130799993872643 0.0597000010311604 -0.103200003504753";
ProtoInstance318.fieldValue[1] = fieldValue320;

fieldValue116.children[67] = ProtoInstance318;

let ProtoInstance321 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance321.name = "Site";
ProtoInstance321.DEF = "hanim_l_medial_malleolus_2";
let fieldValue322 = browser.currentScene.createNode("fieldValue");
fieldValue322.name = "name";
fieldValue322.value = "l_medial_malleolus";
ProtoInstance321.fieldValue = new MFNode();

ProtoInstance321.fieldValue[0] = fieldValue322;

let fieldValue323 = browser.currentScene.createNode("fieldValue");
fieldValue323.name = "translation";
fieldValue323.value = "0.0890000015497208 0.0715999975800514 -0.0881000012159348";
ProtoInstance321.fieldValue[1] = fieldValue323;

fieldValue116.children[68] = ProtoInstance321;

let ProtoInstance324 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance324.name = "Site";
ProtoInstance324.DEF = "hanim_l_sphyrion_2";
let fieldValue325 = browser.currentScene.createNode("fieldValue");
fieldValue325.name = "name";
fieldValue325.value = "l_sphyrion";
ProtoInstance324.fieldValue = new MFNode();

ProtoInstance324.fieldValue[0] = fieldValue325;

let fieldValue326 = browser.currentScene.createNode("fieldValue");
fieldValue326.name = "translation";
fieldValue326.value = "0.0890000015497208 0.0575000010430813 -0.0943000018596649";
ProtoInstance324.fieldValue[1] = fieldValue326;

fieldValue116.children[69] = ProtoInstance324;

let ProtoInstance327 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance327.name = "Site";
ProtoInstance327.DEF = "hanim_l_tarsal_interphalangeal_phalanx2";
let fieldValue328 = browser.currentScene.createNode("fieldValue");
fieldValue328.name = "name";
fieldValue328.value = "l_tarsal_interphalangeal_phalanx_1";
ProtoInstance327.fieldValue = new MFNode();

ProtoInstance327.fieldValue[0] = fieldValue328;

let fieldValue329 = browser.currentScene.createNode("fieldValue");
fieldValue329.name = "translation";
fieldValue329.value = "0.0816000029444695 0.023199999704957 0.0105999996885657";
ProtoInstance327.fieldValue[1] = fieldValue329;

fieldValue116.children[70] = ProtoInstance327;

let ProtoInstance330 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance330.name = "Site";
ProtoInstance330.DEF = "hanim_l_calcaneus_posterior_2";
let fieldValue331 = browser.currentScene.createNode("fieldValue");
fieldValue331.name = "name";
fieldValue331.value = "l_calcaneus_posterior";
ProtoInstance330.fieldValue = new MFNode();

ProtoInstance330.fieldValue[0] = fieldValue331;

let fieldValue332 = browser.currentScene.createNode("fieldValue");
fieldValue332.name = "translation";
fieldValue332.value = "0.09740000218153 0.025900000706315 -0.11710000038147";
ProtoInstance330.fieldValue[1] = fieldValue332;

fieldValue116.children[71] = ProtoInstance330;

let ProtoInstance333 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance333.name = "Site";
ProtoInstance333.DEF = "hanim_l_tarsal_distal_phalanx3";
let fieldValue334 = browser.currentScene.createNode("fieldValue");
fieldValue334.name = "name";
fieldValue334.value = "l_tarsal_distal_phalanx_2";
ProtoInstance333.fieldValue = new MFNode();

ProtoInstance333.fieldValue[0] = fieldValue334;

let fieldValue335 = browser.currentScene.createNode("fieldValue");
fieldValue335.name = "translation";
fieldValue335.value = "0.119499996304512 0.00789999961853027 0.143299996852875";
ProtoInstance333.fieldValue[1] = fieldValue335;

fieldValue116.children[72] = ProtoInstance333;

let ProtoInstance336 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance336.name = "Site";
ProtoInstance336.DEF = "hanim_crotch_2";
let fieldValue337 = browser.currentScene.createNode("fieldValue");
fieldValue337.name = "name";
fieldValue337.value = "crotch";
ProtoInstance336.fieldValue = new MFNode();

ProtoInstance336.fieldValue[0] = fieldValue337;

let fieldValue338 = browser.currentScene.createNode("fieldValue");
fieldValue338.name = "translation";
fieldValue338.value = "0.00340000004507601 0.826600015163422 0.0256999991834164";
ProtoInstance336.fieldValue[1] = fieldValue338;

fieldValue116.children[73] = ProtoInstance336;

let ProtoInstance339 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance339.name = "Site";
ProtoInstance339.DEF = "hanim_r_neck_base_2";
let fieldValue340 = browser.currentScene.createNode("fieldValue");
fieldValue340.name = "name";
fieldValue340.value = "r_neck_base";
ProtoInstance339.fieldValue = new MFNode();

ProtoInstance339.fieldValue[0] = fieldValue340;

let fieldValue341 = browser.currentScene.createNode("fieldValue");
fieldValue341.name = "translation";
fieldValue341.value = "-0.0419000014662743 1.51489996910095 -0.0219999998807907";
ProtoInstance339.fieldValue[1] = fieldValue341;

fieldValue116.children[74] = ProtoInstance339;

let ProtoInstance342 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance342.name = "Site";
ProtoInstance342.DEF = "hanim_l_neck_base_2";
let fieldValue343 = browser.currentScene.createNode("fieldValue");
fieldValue343.name = "name";
fieldValue343.value = "l_neck_base";
ProtoInstance342.fieldValue = new MFNode();

ProtoInstance342.fieldValue[0] = fieldValue343;

let fieldValue344 = browser.currentScene.createNode("fieldValue");
fieldValue344.name = "translation";
fieldValue344.value = "0.0645999982953072 1.51409995555878 -0.0379999987781048";
ProtoInstance342.fieldValue[1] = fieldValue344;

fieldValue116.children[75] = ProtoInstance342;

let ProtoInstance345 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance345.name = "Site";
ProtoInstance345.DEF = "hanim_navel_2";
let fieldValue346 = browser.currentScene.createNode("fieldValue");
fieldValue346.name = "name";
fieldValue346.value = "navel";
ProtoInstance345.fieldValue = new MFNode();

ProtoInstance345.fieldValue[0] = fieldValue346;

let fieldValue347 = browser.currentScene.createNode("fieldValue");
fieldValue347.name = "translation";
fieldValue347.value = "0.00689999992027879 1.09660005569458 0.101700000464916";
ProtoInstance345.fieldValue[1] = fieldValue347;

fieldValue116.children[76] = ProtoInstance345;

ProtoInstance114.fieldValue[1] = fieldValue116;

fieldValue113.children = new MFNode();

fieldValue113.children[0] = ProtoInstance114;

ProtoInstance109.fieldValue[3] = fieldValue113;

fieldValue108.children = new MFNode();

fieldValue108.children[0] = ProtoInstance109;

ProtoInstance107.fieldValue = new MFNode();

ProtoInstance107.fieldValue[0] = fieldValue108;

let fieldValue348 = browser.currentScene.createNode("fieldValue");
fieldValue348.name = "joints";
let ProtoInstance349 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance349.USE = "hanim_humanoid_root_2";
fieldValue348.children = new MFNode();

fieldValue348.children[0] = ProtoInstance349;

ProtoInstance107.fieldValue[1] = fieldValue348;

let fieldValue350 = browser.currentScene.createNode("fieldValue");
fieldValue350.name = "segments";
let ProtoInstance351 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance351.USE = "hanim_sacrum_2";
fieldValue350.children = new MFNode();

fieldValue350.children[0] = ProtoInstance351;

ProtoInstance107.fieldValue[2] = fieldValue350;

let fieldValue352 = browser.currentScene.createNode("fieldValue");
fieldValue352.name = "sites";
let ProtoInstance353 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance353.USE = "hanim_skull_tip_2";
fieldValue352.children = new MFNode();

fieldValue352.children[0] = ProtoInstance353;

let ProtoInstance354 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance354.USE = "hanim_sellion_2";
fieldValue352.children[1] = ProtoInstance354;

let ProtoInstance355 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance355.USE = "hanim_r_infraorbitale_2";
fieldValue352.children[2] = ProtoInstance355;

let ProtoInstance356 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance356.USE = "hanim_l_infraorbitale_2";
fieldValue352.children[3] = ProtoInstance356;

let ProtoInstance357 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance357.USE = "hanim_supramenton_2";
fieldValue352.children[4] = ProtoInstance357;

let ProtoInstance358 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance358.USE = "hanim_r_tragion_2";
fieldValue352.children[5] = ProtoInstance358;

let ProtoInstance359 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance359.USE = "hanim_r_gonion_2";
fieldValue352.children[6] = ProtoInstance359;

let ProtoInstance360 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance360.USE = "hanim_l_tragion_2";
fieldValue352.children[7] = ProtoInstance360;

let ProtoInstance361 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance361.USE = "hanim_l_gonion_2";
fieldValue352.children[8] = ProtoInstance361;

let ProtoInstance362 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance362.USE = "hanim_nuchale_2";
fieldValue352.children[9] = ProtoInstance362;

let ProtoInstance363 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance363.USE = "hanim_r_clavicale_2";
fieldValue352.children[10] = ProtoInstance363;

let ProtoInstance364 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance364.USE = "hanim_suprasternale_2";
fieldValue352.children[11] = ProtoInstance364;

let ProtoInstance365 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance365.USE = "hanim_l_clavicale_2";
fieldValue352.children[12] = ProtoInstance365;

let ProtoInstance366 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance366.USE = "hanim_r_thelion_2";
fieldValue352.children[13] = ProtoInstance366;

let ProtoInstance367 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance367.USE = "hanim_l_thelion_2";
fieldValue352.children[14] = ProtoInstance367;

let ProtoInstance368 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance368.USE = "hanim_substernale_2";
fieldValue352.children[15] = ProtoInstance368;

let ProtoInstance369 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance369.USE = "hanim_r_rib10_2";
fieldValue352.children[16] = ProtoInstance369;

let ProtoInstance370 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance370.USE = "hanim_r_asis_2";
fieldValue352.children[17] = ProtoInstance370;

let ProtoInstance371 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance371.USE = "hanim_l_rib10_2";
fieldValue352.children[18] = ProtoInstance371;

let ProtoInstance372 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance372.USE = "hanim_l_asis_2";
fieldValue352.children[19] = ProtoInstance372;

let ProtoInstance373 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance373.USE = "hanim_r_iliocristale_2";
fieldValue352.children[20] = ProtoInstance373;

let ProtoInstance374 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance374.USE = "hanim_r_trochanterion_2";
fieldValue352.children[21] = ProtoInstance374;

let ProtoInstance375 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance375.USE = "hanim_l_iliocristale_2";
fieldValue352.children[22] = ProtoInstance375;

let ProtoInstance376 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance376.USE = "hanim_l_trochanterion_2";
fieldValue352.children[23] = ProtoInstance376;

let ProtoInstance377 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance377.USE = "hanim_cervicale_2";
fieldValue352.children[24] = ProtoInstance377;

let ProtoInstance378 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance378.USE = "hanim_spine_2_lower_back_2";
fieldValue352.children[25] = ProtoInstance378;

let ProtoInstance379 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance379.USE = "hanim_r_psis_2";
fieldValue352.children[26] = ProtoInstance379;

let ProtoInstance380 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance380.USE = "hanim_l_psis_2";
fieldValue352.children[27] = ProtoInstance380;

let ProtoInstance381 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance381.USE = "hanim_waist_preferred_posterior_2";
fieldValue352.children[28] = ProtoInstance381;

let ProtoInstance382 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance382.USE = "hanim_r_acromion_2";
fieldValue352.children[29] = ProtoInstance382;

let ProtoInstance383 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance383.USE = "hanim_r_axilla_proximal_2";
fieldValue352.children[30] = ProtoInstance383;

let ProtoInstance384 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance384.USE = "hanim_r_radial_styloid_2";
fieldValue352.children[31] = ProtoInstance384;

let ProtoInstance385 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance385.USE = "hanim_r_axilla_distal_2";
fieldValue352.children[32] = ProtoInstance385;

let ProtoInstance386 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance386.USE = "hanim_r_olecranon_2";
fieldValue352.children[33] = ProtoInstance386;

let ProtoInstance387 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance387.USE = "hanim_r_humeral_lateral_epicondyles_2";
fieldValue352.children[34] = ProtoInstance387;

let ProtoInstance388 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance388.USE = "hanim_r_humeral_medial_epicondyles_2";
fieldValue352.children[35] = ProtoInstance388;

let ProtoInstance389 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance389.USE = "hanim_r_radiale_2";
fieldValue352.children[36] = ProtoInstance389;

let ProtoInstance390 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance390.USE = "hanim_r_metacarpal_phalanx3";
fieldValue352.children[37] = ProtoInstance390;

let ProtoInstance391 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance391.USE = "hanim_r_dactylion_2";
fieldValue352.children[38] = ProtoInstance391;

let ProtoInstance392 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance392.USE = "hanim_r_ulnar_styloid_2";
fieldValue352.children[39] = ProtoInstance392;

let ProtoInstance393 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance393.USE = "hanim_r_metacarpal_phalanx6";
fieldValue352.children[40] = ProtoInstance393;

let ProtoInstance394 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance394.USE = "hanim_l_acromion_2";
fieldValue352.children[41] = ProtoInstance394;

let ProtoInstance395 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance395.USE = "hanim_l_axilla_proximal_2";
fieldValue352.children[42] = ProtoInstance395;

let ProtoInstance396 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance396.USE = "hanim_l_radial_styloid_2";
fieldValue352.children[43] = ProtoInstance396;

let ProtoInstance397 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance397.USE = "hanim_l_axilla_distal_2";
fieldValue352.children[44] = ProtoInstance397;

let ProtoInstance398 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance398.USE = "hanim_l_olecranon_2";
fieldValue352.children[45] = ProtoInstance398;

let ProtoInstance399 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance399.USE = "hanim_l_humeral_lateral_epicondyles_2";
fieldValue352.children[46] = ProtoInstance399;

let ProtoInstance400 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance400.USE = "hanim_l_humeral_medial_epicondyles_2";
fieldValue352.children[47] = ProtoInstance400;

let ProtoInstance401 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance401.USE = "hanim_l_radiale_2";
fieldValue352.children[48] = ProtoInstance401;

let ProtoInstance402 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance402.USE = "hanim_l_metacarpal_phalanx3";
fieldValue352.children[49] = ProtoInstance402;

let ProtoInstance403 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance403.USE = "hanim_l_dactylion_2";
fieldValue352.children[50] = ProtoInstance403;

let ProtoInstance404 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance404.USE = "hanim_l_ulnar_styloid_2";
fieldValue352.children[51] = ProtoInstance404;

let ProtoInstance405 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance405.USE = "hanim_l_metacarpal_phalanx6";
fieldValue352.children[52] = ProtoInstance405;

let ProtoInstance406 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance406.USE = "hanim_r_knee_crease_2";
fieldValue352.children[53] = ProtoInstance406;

let ProtoInstance407 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance407.USE = "hanim_r_femoral_lateral_epicondyles_2";
fieldValue352.children[54] = ProtoInstance407;

let ProtoInstance408 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance408.USE = "hanim_r_femoral_medial_epicondyles_2";
fieldValue352.children[55] = ProtoInstance408;

let ProtoInstance409 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance409.USE = "hanim_r_tarsal_interphalangeal_phalanx6";
fieldValue352.children[56] = ProtoInstance409;

let ProtoInstance410 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance410.USE = "hanim_r_lateral_malleolus_2";
fieldValue352.children[57] = ProtoInstance410;

let ProtoInstance411 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance411.USE = "hanim_r_medial_malleolus_2";
fieldValue352.children[58] = ProtoInstance411;

let ProtoInstance412 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance412.USE = "hanim_r_sphyrion_2";
fieldValue352.children[59] = ProtoInstance412;

let ProtoInstance413 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance413.USE = "hanim_r_tarsal_interphalangeal_phalanx2";
fieldValue352.children[60] = ProtoInstance413;

let ProtoInstance414 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance414.USE = "hanim_r_calcaneus_posterior_2";
fieldValue352.children[61] = ProtoInstance414;

let ProtoInstance415 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance415.USE = "hanim_r_tarsal_distal_phalanx3";
fieldValue352.children[62] = ProtoInstance415;

let ProtoInstance416 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance416.USE = "hanim_l_knee_crease_2";
fieldValue352.children[63] = ProtoInstance416;

let ProtoInstance417 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance417.USE = "hanim_l_femoral_lateral_epicondyles_2";
fieldValue352.children[64] = ProtoInstance417;

let ProtoInstance418 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance418.USE = "hanim_l_femoral_medial_epicondyles_2";
fieldValue352.children[65] = ProtoInstance418;

let ProtoInstance419 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance419.USE = "hanim_l_tarsal_interphalangeal_phalanx6";
fieldValue352.children[66] = ProtoInstance419;

let ProtoInstance420 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance420.USE = "hanim_l_lateral_malleolus_2";
fieldValue352.children[67] = ProtoInstance420;

let ProtoInstance421 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance421.USE = "hanim_l_medial_malleolus_2";
fieldValue352.children[68] = ProtoInstance421;

let ProtoInstance422 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance422.USE = "hanim_l_sphyrion_2";
fieldValue352.children[69] = ProtoInstance422;

let ProtoInstance423 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance423.USE = "hanim_l_tarsal_interphalangeal_phalanx2";
fieldValue352.children[70] = ProtoInstance423;

let ProtoInstance424 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance424.USE = "hanim_l_calcaneus_posterior_2";
fieldValue352.children[71] = ProtoInstance424;

let ProtoInstance425 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance425.USE = "hanim_l_tarsal_distal_phalanx3";
fieldValue352.children[72] = ProtoInstance425;

let ProtoInstance426 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance426.USE = "hanim_crotch_2";
fieldValue352.children[73] = ProtoInstance426;

let ProtoInstance427 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance427.USE = "hanim_r_neck_base_2";
fieldValue352.children[74] = ProtoInstance427;

let ProtoInstance428 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance428.USE = "hanim_l_neck_base_2";
fieldValue352.children[75] = ProtoInstance428;

let ProtoInstance429 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance429.USE = "hanim_navel_2";
fieldValue352.children[76] = ProtoInstance429;

ProtoInstance107.fieldValue[3] = fieldValue352;

let fieldValue430 = browser.currentScene.createNode("fieldValue");
fieldValue430.name = "name";
fieldValue430.value = "humanoid";
ProtoInstance107.fieldValue[4] = fieldValue430;

let fieldValue431 = browser.currentScene.createNode("fieldValue");
fieldValue431.name = "info";
fieldValue431.value = "\"authorName=Matthew T. Beitler\" \"authorEmail=beitler@cis.upenn.edu or beitler@acm.org\" \"creationDate=05/12/99\" \"copyright=Copyright 1999-2003, Matthew T. Beitler\" \"humanoidVersion=JointCenters 200x, LOA&#8209;0\" \"usageRestrictions= PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED, PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided 'as-is' and without warranty of any kind, express, implied or otherwise, including without limitation, any warranty of merchantability or fitness for a particular purpose.\" \"modificationDate=08/12/03\"";
ProtoInstance107.fieldValue[5] = fieldValue431;

browser.currentScene.children[4] = ProtoInstance107;

let Group432 = browser.currentScene.createNode("Group");
Group432.DEF = "JointCenters_WorldInfo";
let WorldInfo433 = browser.currentScene.createNode("WorldInfo");
WorldInfo433.title = "HANIM 200x Default Joint Centers, LOA&#8209;0";
WorldInfo433.info = new MFString(new java.lang.String[" HANIM 200x Default Joint Centers, Level-Of-Articulation 0 --------------------------------------------------------- HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://H-Anim.org/Specifications/H-Anim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human modelling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "]);
Group432.children = new MFNode();

Group432.children[0] = WorldInfo433;

browser.currentScene.children[5] = Group432;

let NavigationInfo434 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo434.avatarSize = new MFFloat(new float[0.25,1.60000002384186,0.75]);
NavigationInfo434.speed = 1.5;
browser.currentScene.children[6] = NavigationInfo434;

