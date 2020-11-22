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
ProtoInstance114.name = "Joint";
ProtoInstance114.DEF = "hanim_sacroiliac_2";
let fieldValue115 = browser.currentScene.createNode("fieldValue");
fieldValue115.name = "stiffness";
fieldValue115.value = "1 1 1";
ProtoInstance114.fieldValue = new MFNode();

ProtoInstance114.fieldValue[0] = fieldValue115;

let fieldValue116 = browser.currentScene.createNode("fieldValue");
fieldValue116.name = "name";
fieldValue116.value = "sacroiliac";
ProtoInstance114.fieldValue[1] = fieldValue116;

let fieldValue117 = browser.currentScene.createNode("fieldValue");
fieldValue117.name = "center";
fieldValue117.value = "0 0.914900004863739 0.0015999999595806";
ProtoInstance114.fieldValue[2] = fieldValue117;

let fieldValue118 = browser.currentScene.createNode("fieldValue");
fieldValue118.name = "children";
let ProtoInstance119 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance119.name = "Joint";
ProtoInstance119.DEF = "hanim_l_hip_2";
let fieldValue120 = browser.currentScene.createNode("fieldValue");
fieldValue120.name = "stiffness";
fieldValue120.value = "1 1 1";
ProtoInstance119.fieldValue = new MFNode();

ProtoInstance119.fieldValue[0] = fieldValue120;

let fieldValue121 = browser.currentScene.createNode("fieldValue");
fieldValue121.name = "name";
fieldValue121.value = "l_hip";
ProtoInstance119.fieldValue[1] = fieldValue121;

let fieldValue122 = browser.currentScene.createNode("fieldValue");
fieldValue122.name = "center";
fieldValue122.value = "0.0961000025272369 0.912400007247925 -0.0000999999974737875";
ProtoInstance119.fieldValue[2] = fieldValue122;

let fieldValue123 = browser.currentScene.createNode("fieldValue");
fieldValue123.name = "children";
let ProtoInstance124 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance124.name = "Joint";
ProtoInstance124.DEF = "hanim_l_knee_2";
let fieldValue125 = browser.currentScene.createNode("fieldValue");
fieldValue125.name = "stiffness";
fieldValue125.value = "1 1 1";
ProtoInstance124.fieldValue = new MFNode();

ProtoInstance124.fieldValue[0] = fieldValue125;

let fieldValue126 = browser.currentScene.createNode("fieldValue");
fieldValue126.name = "name";
fieldValue126.value = "l_knee";
ProtoInstance124.fieldValue[1] = fieldValue126;

let fieldValue127 = browser.currentScene.createNode("fieldValue");
fieldValue127.name = "center";
fieldValue127.value = "0.104000002145767 0.486699998378754 0.030799999833107";
ProtoInstance124.fieldValue[2] = fieldValue127;

let fieldValue128 = browser.currentScene.createNode("fieldValue");
fieldValue128.name = "children";
let ProtoInstance129 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance129.name = "Joint";
ProtoInstance129.DEF = "hanim_l_talocrural_2";
let fieldValue130 = browser.currentScene.createNode("fieldValue");
fieldValue130.name = "stiffness";
fieldValue130.value = "1 1 1";
ProtoInstance129.fieldValue = new MFNode();

ProtoInstance129.fieldValue[0] = fieldValue130;

let fieldValue131 = browser.currentScene.createNode("fieldValue");
fieldValue131.name = "name";
fieldValue131.value = "l_talocrural";
ProtoInstance129.fieldValue[1] = fieldValue131;

let fieldValue132 = browser.currentScene.createNode("fieldValue");
fieldValue132.name = "center";
fieldValue132.value = "0.110100001096725 0.0656000003218651 -0.0736000016331673";
ProtoInstance129.fieldValue[2] = fieldValue132;

let fieldValue133 = browser.currentScene.createNode("fieldValue");
fieldValue133.name = "children";
let ProtoInstance134 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance134.name = "Joint";
ProtoInstance134.DEF = "hanim_l_metatarsophalangeal__2";
let fieldValue135 = browser.currentScene.createNode("fieldValue");
fieldValue135.name = "stiffness";
fieldValue135.value = "1 1 1";
ProtoInstance134.fieldValue = new MFNode();

ProtoInstance134.fieldValue[0] = fieldValue135;

let fieldValue136 = browser.currentScene.createNode("fieldValue");
fieldValue136.name = "name";
fieldValue136.value = "l_metatarsophalangeal_";
ProtoInstance134.fieldValue[1] = fieldValue136;

let fieldValue137 = browser.currentScene.createNode("fieldValue");
fieldValue137.name = "center";
fieldValue137.value = "0.108599998056889 0.0000999999974737875 0.0368000008165836";
ProtoInstance134.fieldValue[2] = fieldValue137;

let fieldValue138 = browser.currentScene.createNode("fieldValue");
fieldValue138.name = "children";
let ProtoInstance139 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance139.name = "Segment";
ProtoInstance139.DEF = "hanim_l_middistal_2";
let fieldValue140 = browser.currentScene.createNode("fieldValue");
fieldValue140.name = "name";
fieldValue140.value = "l_middistal";
ProtoInstance139.fieldValue = new MFNode();

ProtoInstance139.fieldValue[0] = fieldValue140;

let fieldValue141 = browser.currentScene.createNode("fieldValue");
fieldValue141.name = "children";
let ProtoInstance142 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance142.name = "Site";
ProtoInstance142.DEF = "hanim_l_middistal_tip_2";
let fieldValue143 = browser.currentScene.createNode("fieldValue");
fieldValue143.name = "name";
fieldValue143.value = "l_middistal_tip";
ProtoInstance142.fieldValue = new MFNode();

ProtoInstance142.fieldValue[0] = fieldValue143;

let fieldValue144 = browser.currentScene.createNode("fieldValue");
fieldValue144.name = "translation";
fieldValue144.value = "0.135399997234344 0.0015999999595806 0.147599995136261";
ProtoInstance142.fieldValue[1] = fieldValue144;

fieldValue141.children = new MFNode();

fieldValue141.children[0] = ProtoInstance142;

let ProtoInstance145 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance145.name = "Site";
ProtoInstance145.DEF = "hanim_l_tarsal_interphalangeal_phalanx6";
let fieldValue146 = browser.currentScene.createNode("fieldValue");
fieldValue146.name = "name";
fieldValue146.value = "l_tarsal_interphalangeal_phalanx_5";
ProtoInstance145.fieldValue = new MFNode();

ProtoInstance145.fieldValue[0] = fieldValue146;

let fieldValue147 = browser.currentScene.createNode("fieldValue");
fieldValue147.name = "translation";
fieldValue147.value = "0.182500004768372 0.00700000021606684 0.092799998819828";
ProtoInstance145.fieldValue[1] = fieldValue147;

fieldValue141.children[1] = ProtoInstance145;

let ProtoInstance148 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance148.name = "Site";
ProtoInstance148.DEF = "hanim_l_tarsal_interphalangeal_phalanx2";
let fieldValue149 = browser.currentScene.createNode("fieldValue");
fieldValue149.name = "name";
fieldValue149.value = "l_tarsal_interphalangeal_phalanx_1";
ProtoInstance148.fieldValue = new MFNode();

ProtoInstance148.fieldValue[0] = fieldValue149;

let fieldValue150 = browser.currentScene.createNode("fieldValue");
fieldValue150.name = "translation";
fieldValue150.value = "0.0816000029444695 0.023199999704957 0.0105999996885657";
ProtoInstance148.fieldValue[1] = fieldValue150;

fieldValue141.children[2] = ProtoInstance148;

let ProtoInstance151 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance151.name = "Site";
ProtoInstance151.DEF = "hanim_l_tarsal_distal_phalanx3";
let fieldValue152 = browser.currentScene.createNode("fieldValue");
fieldValue152.name = "name";
fieldValue152.value = "l_tarsal_distal_phalanx_2";
ProtoInstance151.fieldValue = new MFNode();

ProtoInstance151.fieldValue[0] = fieldValue152;

let fieldValue153 = browser.currentScene.createNode("fieldValue");
fieldValue153.name = "translation";
fieldValue153.value = "0.119499996304512 0.00789999961853027 0.143299996852875";
ProtoInstance151.fieldValue[1] = fieldValue153;

fieldValue141.children[3] = ProtoInstance151;

ProtoInstance139.fieldValue[1] = fieldValue141;

fieldValue138.children = new MFNode();

fieldValue138.children[0] = ProtoInstance139;

ProtoInstance134.fieldValue[3] = fieldValue138;

fieldValue133.children = new MFNode();

fieldValue133.children[0] = ProtoInstance134;

let ProtoInstance154 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance154.name = "Segment";
ProtoInstance154.DEF = "hanim_l_hindfoot_2";
let fieldValue155 = browser.currentScene.createNode("fieldValue");
fieldValue155.name = "name";
fieldValue155.value = "l_hindfoot";
ProtoInstance154.fieldValue = new MFNode();

ProtoInstance154.fieldValue[0] = fieldValue155;

let fieldValue156 = browser.currentScene.createNode("fieldValue");
fieldValue156.name = "children";
let ProtoInstance157 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance157.name = "Site";
ProtoInstance157.DEF = "hanim_l_lateral_malleolus_2";
let fieldValue158 = browser.currentScene.createNode("fieldValue");
fieldValue158.name = "name";
fieldValue158.value = "l_lateral_malleolus";
ProtoInstance157.fieldValue = new MFNode();

ProtoInstance157.fieldValue[0] = fieldValue158;

let fieldValue159 = browser.currentScene.createNode("fieldValue");
fieldValue159.name = "translation";
fieldValue159.value = "0.130799993872643 0.0597000010311604 -0.103200003504753";
ProtoInstance157.fieldValue[1] = fieldValue159;

fieldValue156.children = new MFNode();

fieldValue156.children[0] = ProtoInstance157;

let ProtoInstance160 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance160.name = "Site";
ProtoInstance160.DEF = "hanim_l_medial_malleolus_2";
let fieldValue161 = browser.currentScene.createNode("fieldValue");
fieldValue161.name = "name";
fieldValue161.value = "l_medial_malleolus";
ProtoInstance160.fieldValue = new MFNode();

ProtoInstance160.fieldValue[0] = fieldValue161;

let fieldValue162 = browser.currentScene.createNode("fieldValue");
fieldValue162.name = "translation";
fieldValue162.value = "0.0890000015497208 0.0715999975800514 -0.0881000012159348";
ProtoInstance160.fieldValue[1] = fieldValue162;

fieldValue156.children[1] = ProtoInstance160;

let ProtoInstance163 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance163.name = "Site";
ProtoInstance163.DEF = "hanim_l_sphyrion_2";
let fieldValue164 = browser.currentScene.createNode("fieldValue");
fieldValue164.name = "name";
fieldValue164.value = "l_sphyrion";
ProtoInstance163.fieldValue = new MFNode();

ProtoInstance163.fieldValue[0] = fieldValue164;

let fieldValue165 = browser.currentScene.createNode("fieldValue");
fieldValue165.name = "translation";
fieldValue165.value = "0.0890000015497208 0.0575000010430813 -0.0943000018596649";
ProtoInstance163.fieldValue[1] = fieldValue165;

fieldValue156.children[2] = ProtoInstance163;

let ProtoInstance166 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance166.name = "Site";
ProtoInstance166.DEF = "hanim_l_calcaneus_posterior_2";
let fieldValue167 = browser.currentScene.createNode("fieldValue");
fieldValue167.name = "name";
fieldValue167.value = "l_calcaneus_posterior";
ProtoInstance166.fieldValue = new MFNode();

ProtoInstance166.fieldValue[0] = fieldValue167;

let fieldValue168 = browser.currentScene.createNode("fieldValue");
fieldValue168.name = "translation";
fieldValue168.value = "0.09740000218153 0.025900000706315 -0.11710000038147";
ProtoInstance166.fieldValue[1] = fieldValue168;

fieldValue156.children[3] = ProtoInstance166;

ProtoInstance154.fieldValue[1] = fieldValue156;

fieldValue133.children[1] = ProtoInstance154;

ProtoInstance129.fieldValue[3] = fieldValue133;

fieldValue128.children = new MFNode();

fieldValue128.children[0] = ProtoInstance129;

let ProtoInstance169 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance169.name = "Segment";
ProtoInstance169.DEF = "hanim_l_calf_2";
let fieldValue170 = browser.currentScene.createNode("fieldValue");
fieldValue170.name = "name";
fieldValue170.value = "l_calf";
ProtoInstance169.fieldValue = new MFNode();

ProtoInstance169.fieldValue[0] = fieldValue170;

fieldValue128.children[1] = ProtoInstance169;

ProtoInstance124.fieldValue[3] = fieldValue128;

fieldValue123.children = new MFNode();

fieldValue123.children[0] = ProtoInstance124;

let ProtoInstance171 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance171.name = "Segment";
ProtoInstance171.DEF = "hanim_l_thigh_2";
let fieldValue172 = browser.currentScene.createNode("fieldValue");
fieldValue172.name = "name";
fieldValue172.value = "l_thigh";
ProtoInstance171.fieldValue = new MFNode();

ProtoInstance171.fieldValue[0] = fieldValue172;

let fieldValue173 = browser.currentScene.createNode("fieldValue");
fieldValue173.name = "children";
let ProtoInstance174 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance174.name = "Site";
ProtoInstance174.DEF = "hanim_l_knee_crease_2";
let fieldValue175 = browser.currentScene.createNode("fieldValue");
fieldValue175.name = "name";
fieldValue175.value = "l_knee_crease";
ProtoInstance174.fieldValue = new MFNode();

ProtoInstance174.fieldValue[0] = fieldValue175;

let fieldValue176 = browser.currentScene.createNode("fieldValue");
fieldValue176.name = "translation";
fieldValue176.value = "0.0992999970912933 0.488099992275238 -0.0308999996632338";
ProtoInstance174.fieldValue[1] = fieldValue176;

fieldValue173.children = new MFNode();

fieldValue173.children[0] = ProtoInstance174;

let ProtoInstance177 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance177.name = "Site";
ProtoInstance177.DEF = "hanim_l_femoral_lateral_epicondyles_2";
let fieldValue178 = browser.currentScene.createNode("fieldValue");
fieldValue178.name = "name";
fieldValue178.value = "l_femoral_lateral_epicondyles";
ProtoInstance177.fieldValue = new MFNode();

ProtoInstance177.fieldValue[0] = fieldValue178;

let fieldValue179 = browser.currentScene.createNode("fieldValue");
fieldValue179.name = "translation";
fieldValue179.value = "0.159799993038177 0.496699988842011 0.0296999998390675";
ProtoInstance177.fieldValue[1] = fieldValue179;

fieldValue173.children[1] = ProtoInstance177;

let ProtoInstance180 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance180.name = "Site";
ProtoInstance180.DEF = "hanim_l_femoral_medial_epicondyles_2";
let fieldValue181 = browser.currentScene.createNode("fieldValue");
fieldValue181.name = "name";
fieldValue181.value = "l_femoral_lateral_epicondyles";
ProtoInstance180.fieldValue = new MFNode();

ProtoInstance180.fieldValue[0] = fieldValue181;

let fieldValue182 = browser.currentScene.createNode("fieldValue");
fieldValue182.name = "translation";
fieldValue182.value = "0.0397999994456768 0.494599997997284 0.0303000006824732";
ProtoInstance180.fieldValue[1] = fieldValue182;

fieldValue173.children[2] = ProtoInstance180;

ProtoInstance171.fieldValue[1] = fieldValue173;

fieldValue123.children[1] = ProtoInstance171;

ProtoInstance119.fieldValue[3] = fieldValue123;

fieldValue118.children = new MFNode();

fieldValue118.children[0] = ProtoInstance119;

let ProtoInstance183 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance183.name = "Joint";
ProtoInstance183.DEF = "hanim_r_hip_2";
let fieldValue184 = browser.currentScene.createNode("fieldValue");
fieldValue184.name = "stiffness";
fieldValue184.value = "1 1 1";
ProtoInstance183.fieldValue = new MFNode();

ProtoInstance183.fieldValue[0] = fieldValue184;

let fieldValue185 = browser.currentScene.createNode("fieldValue");
fieldValue185.name = "name";
fieldValue185.value = "r_hip";
ProtoInstance183.fieldValue[1] = fieldValue185;

let fieldValue186 = browser.currentScene.createNode("fieldValue");
fieldValue186.name = "center";
fieldValue186.value = "-0.0949999988079071 0.917100012302399 0.00289999996311963";
ProtoInstance183.fieldValue[2] = fieldValue186;

let fieldValue187 = browser.currentScene.createNode("fieldValue");
fieldValue187.name = "children";
let ProtoInstance188 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance188.name = "Joint";
ProtoInstance188.DEF = "hanim_r_knee_2";
let fieldValue189 = browser.currentScene.createNode("fieldValue");
fieldValue189.name = "stiffness";
fieldValue189.value = "1 1 1";
ProtoInstance188.fieldValue = new MFNode();

ProtoInstance188.fieldValue[0] = fieldValue189;

let fieldValue190 = browser.currentScene.createNode("fieldValue");
fieldValue190.name = "name";
fieldValue190.value = "r_knee";
ProtoInstance188.fieldValue[1] = fieldValue190;

let fieldValue191 = browser.currentScene.createNode("fieldValue");
fieldValue191.name = "center";
fieldValue191.value = "-0.0866999998688698 0.491299986839294 0.0318000018596649";
ProtoInstance188.fieldValue[2] = fieldValue191;

let fieldValue192 = browser.currentScene.createNode("fieldValue");
fieldValue192.name = "children";
let ProtoInstance193 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance193.name = "Joint";
ProtoInstance193.DEF = "hanim_r_talocrural_2";
let fieldValue194 = browser.currentScene.createNode("fieldValue");
fieldValue194.name = "stiffness";
fieldValue194.value = "1 1 1";
ProtoInstance193.fieldValue = new MFNode();

ProtoInstance193.fieldValue[0] = fieldValue194;

let fieldValue195 = browser.currentScene.createNode("fieldValue");
fieldValue195.name = "name";
fieldValue195.value = "r_talocrural";
ProtoInstance193.fieldValue[1] = fieldValue195;

let fieldValue196 = browser.currentScene.createNode("fieldValue");
fieldValue196.name = "center";
fieldValue196.value = "-0.0800999999046326 0.0711999982595444 -0.0766000002622604";
ProtoInstance193.fieldValue[2] = fieldValue196;

let fieldValue197 = browser.currentScene.createNode("fieldValue");
fieldValue197.name = "children";
let ProtoInstance198 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance198.name = "Joint";
ProtoInstance198.DEF = "hanim_r_metatarsophalangeal__2";
let fieldValue199 = browser.currentScene.createNode("fieldValue");
fieldValue199.name = "stiffness";
fieldValue199.value = "1 1 1";
ProtoInstance198.fieldValue = new MFNode();

ProtoInstance198.fieldValue[0] = fieldValue199;

let fieldValue200 = browser.currentScene.createNode("fieldValue");
fieldValue200.name = "name";
fieldValue200.value = "r_metatarsophalangeal_";
ProtoInstance198.fieldValue[1] = fieldValue200;

let fieldValue201 = browser.currentScene.createNode("fieldValue");
fieldValue201.name = "center";
fieldValue201.value = "-0.0800999999046326 0 0.0368000008165836";
ProtoInstance198.fieldValue[2] = fieldValue201;

let fieldValue202 = browser.currentScene.createNode("fieldValue");
fieldValue202.name = "children";
let ProtoInstance203 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance203.name = "Segment";
ProtoInstance203.DEF = "hanim_r_middistal_2";
let fieldValue204 = browser.currentScene.createNode("fieldValue");
fieldValue204.name = "name";
fieldValue204.value = "r_middistal";
ProtoInstance203.fieldValue = new MFNode();

ProtoInstance203.fieldValue[0] = fieldValue204;

let fieldValue205 = browser.currentScene.createNode("fieldValue");
fieldValue205.name = "children";
let ProtoInstance206 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance206.name = "Site";
ProtoInstance206.DEF = "hanim_r_middistal_tip_2";
let fieldValue207 = browser.currentScene.createNode("fieldValue");
fieldValue207.name = "name";
fieldValue207.value = "r_middistal_tip";
ProtoInstance206.fieldValue = new MFNode();

ProtoInstance206.fieldValue[0] = fieldValue207;

let fieldValue208 = browser.currentScene.createNode("fieldValue");
fieldValue208.name = "translation";
fieldValue208.value = "-0.104299999773502 -0.0227000005543232 0.144999995827675";
ProtoInstance206.fieldValue[1] = fieldValue208;

fieldValue205.children = new MFNode();

fieldValue205.children[0] = ProtoInstance206;

let ProtoInstance209 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance209.name = "Site";
ProtoInstance209.DEF = "hanim_r_tarsal_interphalangeal_phalanx6";
let fieldValue210 = browser.currentScene.createNode("fieldValue");
fieldValue210.name = "name";
fieldValue210.value = "r_tarsal_interphalangeal_phalanx_5";
ProtoInstance209.fieldValue = new MFNode();

ProtoInstance209.fieldValue[0] = fieldValue210;

let fieldValue211 = browser.currentScene.createNode("fieldValue");
fieldValue211.name = "translation";
fieldValue211.value = "-0.152300000190735 0.0165999997407198 0.0895000025629997";
ProtoInstance209.fieldValue[1] = fieldValue211;

fieldValue205.children[1] = ProtoInstance209;

let ProtoInstance212 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance212.name = "Site";
ProtoInstance212.DEF = "hanim_r_tarsal_interphalangeal_phalanx2";
let fieldValue213 = browser.currentScene.createNode("fieldValue");
fieldValue213.name = "name";
fieldValue213.value = "r_tarsal_interphalangeal_phalanx_1";
ProtoInstance212.fieldValue = new MFNode();

ProtoInstance212.fieldValue[0] = fieldValue213;

let fieldValue214 = browser.currentScene.createNode("fieldValue");
fieldValue214.name = "translation";
fieldValue214.value = "-0.0520999990403652 0.0260000005364418 0.012699999846518";
ProtoInstance212.fieldValue[1] = fieldValue214;

fieldValue205.children[2] = ProtoInstance212;

let ProtoInstance215 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance215.name = "Site";
ProtoInstance215.DEF = "hanim_r_tarsal_distal_phalanx3";
let fieldValue216 = browser.currentScene.createNode("fieldValue");
fieldValue216.name = "name";
fieldValue216.value = "r_tarsal_distal_phalanx_2";
ProtoInstance215.fieldValue = new MFNode();

ProtoInstance215.fieldValue[0] = fieldValue216;

let fieldValue217 = browser.currentScene.createNode("fieldValue");
fieldValue217.name = "translation";
fieldValue217.value = "-0.088299997150898 0.013399999588728 0.138300001621246";
ProtoInstance215.fieldValue[1] = fieldValue217;

fieldValue205.children[3] = ProtoInstance215;

ProtoInstance203.fieldValue[1] = fieldValue205;

fieldValue202.children = new MFNode();

fieldValue202.children[0] = ProtoInstance203;

ProtoInstance198.fieldValue[3] = fieldValue202;

fieldValue197.children = new MFNode();

fieldValue197.children[0] = ProtoInstance198;

let ProtoInstance218 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance218.name = "Segment";
ProtoInstance218.DEF = "hanim_r_hindfoot_2";
let fieldValue219 = browser.currentScene.createNode("fieldValue");
fieldValue219.name = "name";
fieldValue219.value = "r_hindfoot";
ProtoInstance218.fieldValue = new MFNode();

ProtoInstance218.fieldValue[0] = fieldValue219;

let fieldValue220 = browser.currentScene.createNode("fieldValue");
fieldValue220.name = "children";
let ProtoInstance221 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance221.name = "Site";
ProtoInstance221.DEF = "hanim_r_lateral_malleolus_2";
let fieldValue222 = browser.currentScene.createNode("fieldValue");
fieldValue222.name = "name";
fieldValue222.value = "r_lateral_malleolus";
ProtoInstance221.fieldValue = new MFNode();

ProtoInstance221.fieldValue[0] = fieldValue222;

let fieldValue223 = browser.currentScene.createNode("fieldValue");
fieldValue223.name = "translation";
fieldValue223.value = "-0.100599996745586 0.0658000037074089 -0.107500001788139";
ProtoInstance221.fieldValue[1] = fieldValue223;

fieldValue220.children = new MFNode();

fieldValue220.children[0] = ProtoInstance221;

let ProtoInstance224 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance224.name = "Site";
ProtoInstance224.DEF = "hanim_r_medial_malleolus_2";
let fieldValue225 = browser.currentScene.createNode("fieldValue");
fieldValue225.name = "name";
fieldValue225.value = "r_medial_malleolus";
ProtoInstance224.fieldValue = new MFNode();

ProtoInstance224.fieldValue[0] = fieldValue225;

let fieldValue226 = browser.currentScene.createNode("fieldValue");
fieldValue226.name = "translation";
fieldValue226.value = "-0.0590999983251095 0.0759999975562096 -0.092799998819828";
ProtoInstance224.fieldValue[1] = fieldValue226;

fieldValue220.children[1] = ProtoInstance224;

let ProtoInstance227 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance227.name = "Site";
ProtoInstance227.DEF = "hanim_r_sphyrion_2";
let fieldValue228 = browser.currentScene.createNode("fieldValue");
fieldValue228.name = "name";
fieldValue228.value = "r_sphyrion";
ProtoInstance227.fieldValue = new MFNode();

ProtoInstance227.fieldValue[0] = fieldValue228;

let fieldValue229 = browser.currentScene.createNode("fieldValue");
fieldValue229.name = "translation";
fieldValue229.value = "-0.0603000000119209 0.0610000006854534 -0.100199997425079";
ProtoInstance227.fieldValue[1] = fieldValue229;

fieldValue220.children[2] = ProtoInstance227;

let ProtoInstance230 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance230.name = "Site";
ProtoInstance230.DEF = "hanim_r_calcaneus_posterior_2";
let fieldValue231 = browser.currentScene.createNode("fieldValue");
fieldValue231.name = "name";
fieldValue231.value = "r_calcaneus_posterior";
ProtoInstance230.fieldValue = new MFNode();

ProtoInstance230.fieldValue[0] = fieldValue231;

let fieldValue232 = browser.currentScene.createNode("fieldValue");
fieldValue232.name = "translation";
fieldValue232.value = "-0.0692000016570091 0.0296999998390675 -0.122100003063679";
ProtoInstance230.fieldValue[1] = fieldValue232;

fieldValue220.children[3] = ProtoInstance230;

ProtoInstance218.fieldValue[1] = fieldValue220;

fieldValue197.children[1] = ProtoInstance218;

ProtoInstance193.fieldValue[3] = fieldValue197;

fieldValue192.children = new MFNode();

fieldValue192.children[0] = ProtoInstance193;

let ProtoInstance233 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance233.name = "Segment";
ProtoInstance233.DEF = "hanim_r_calf_2";
let fieldValue234 = browser.currentScene.createNode("fieldValue");
fieldValue234.name = "name";
fieldValue234.value = "r_calf";
ProtoInstance233.fieldValue = new MFNode();

ProtoInstance233.fieldValue[0] = fieldValue234;

fieldValue192.children[1] = ProtoInstance233;

ProtoInstance188.fieldValue[3] = fieldValue192;

fieldValue187.children = new MFNode();

fieldValue187.children[0] = ProtoInstance188;

let ProtoInstance235 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance235.name = "Segment";
ProtoInstance235.DEF = "hanim_r_thigh_2";
let fieldValue236 = browser.currentScene.createNode("fieldValue");
fieldValue236.name = "name";
fieldValue236.value = "r_thigh";
ProtoInstance235.fieldValue = new MFNode();

ProtoInstance235.fieldValue[0] = fieldValue236;

let fieldValue237 = browser.currentScene.createNode("fieldValue");
fieldValue237.name = "children";
let ProtoInstance238 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance238.name = "Site";
ProtoInstance238.DEF = "hanim_r_knee_crease_2";
let fieldValue239 = browser.currentScene.createNode("fieldValue");
fieldValue239.name = "name";
fieldValue239.value = "r_knee_crease";
ProtoInstance238.fieldValue = new MFNode();

ProtoInstance238.fieldValue[0] = fieldValue239;

let fieldValue240 = browser.currentScene.createNode("fieldValue");
fieldValue240.name = "translation";
fieldValue240.value = "-0.0825000032782555 0.4932000041008 -0.032600000500679";
ProtoInstance238.fieldValue[1] = fieldValue240;

fieldValue237.children = new MFNode();

fieldValue237.children[0] = ProtoInstance238;

let ProtoInstance241 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance241.name = "Site";
ProtoInstance241.DEF = "hanim_r_femoral_lateral_epicondyles_2";
let fieldValue242 = browser.currentScene.createNode("fieldValue");
fieldValue242.name = "name";
fieldValue242.value = "r_femoral_lateral_epicondyles";
ProtoInstance241.fieldValue = new MFNode();

ProtoInstance241.fieldValue[0] = fieldValue242;

let fieldValue243 = browser.currentScene.createNode("fieldValue");
fieldValue243.name = "translation";
fieldValue243.value = "-0.142100006341934 0.499199986457825 0.0309999994933605";
ProtoInstance241.fieldValue[1] = fieldValue243;

fieldValue237.children[1] = ProtoInstance241;

let ProtoInstance244 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance244.name = "Site";
ProtoInstance244.DEF = "hanim_r_femoral_medial_epicondyles_2";
let fieldValue245 = browser.currentScene.createNode("fieldValue");
fieldValue245.name = "name";
fieldValue245.value = "r_femoral_lateral_epicondyles";
ProtoInstance244.fieldValue = new MFNode();

ProtoInstance244.fieldValue[0] = fieldValue245;

let fieldValue246 = browser.currentScene.createNode("fieldValue");
fieldValue246.name = "translation";
fieldValue246.value = "-0.0220999997109175 0.501399993896484 0.0288999993354082";
ProtoInstance244.fieldValue[1] = fieldValue246;

fieldValue237.children[2] = ProtoInstance244;

ProtoInstance235.fieldValue[1] = fieldValue237;

fieldValue187.children[1] = ProtoInstance235;

ProtoInstance183.fieldValue[3] = fieldValue187;

fieldValue118.children[1] = ProtoInstance183;

let ProtoInstance247 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance247.name = "Segment";
ProtoInstance247.DEF = "hanim_pelvis_2";
let fieldValue248 = browser.currentScene.createNode("fieldValue");
fieldValue248.name = "name";
fieldValue248.value = "pelvis";
ProtoInstance247.fieldValue = new MFNode();

ProtoInstance247.fieldValue[0] = fieldValue248;

fieldValue118.children[2] = ProtoInstance247;

ProtoInstance114.fieldValue[3] = fieldValue118;

fieldValue113.children = new MFNode();

fieldValue113.children[0] = ProtoInstance114;

let ProtoInstance249 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance249.name = "Joint";
ProtoInstance249.DEF = "hanim_vl5_2";
let fieldValue250 = browser.currentScene.createNode("fieldValue");
fieldValue250.name = "stiffness";
fieldValue250.value = "1 1 1";
ProtoInstance249.fieldValue = new MFNode();

ProtoInstance249.fieldValue[0] = fieldValue250;

let fieldValue251 = browser.currentScene.createNode("fieldValue");
fieldValue251.name = "name";
fieldValue251.value = "vl5";
ProtoInstance249.fieldValue[1] = fieldValue251;

let fieldValue252 = browser.currentScene.createNode("fieldValue");
fieldValue252.name = "center";
fieldValue252.value = "0.00279999990016222 1.05680000782013 -0.0776000022888184";
ProtoInstance249.fieldValue[2] = fieldValue252;

let fieldValue253 = browser.currentScene.createNode("fieldValue");
fieldValue253.name = "children";
let ProtoInstance254 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance254.name = "Joint";
ProtoInstance254.DEF = "hanim_skullbase_2";
let fieldValue255 = browser.currentScene.createNode("fieldValue");
fieldValue255.name = "stiffness";
fieldValue255.value = "1 1 1";
ProtoInstance254.fieldValue = new MFNode();

ProtoInstance254.fieldValue[0] = fieldValue255;

let fieldValue256 = browser.currentScene.createNode("fieldValue");
fieldValue256.name = "name";
fieldValue256.value = "skullbase";
ProtoInstance254.fieldValue[1] = fieldValue256;

let fieldValue257 = browser.currentScene.createNode("fieldValue");
fieldValue257.name = "center";
fieldValue257.value = "0.00439999997615814 1.62090003490448 0.0236000008881092";
ProtoInstance254.fieldValue[2] = fieldValue257;

let fieldValue258 = browser.currentScene.createNode("fieldValue");
fieldValue258.name = "children";
let ProtoInstance259 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance259.name = "Segment";
ProtoInstance259.DEF = "hanim_skull_2";
let fieldValue260 = browser.currentScene.createNode("fieldValue");
fieldValue260.name = "name";
fieldValue260.value = "skull";
ProtoInstance259.fieldValue = new MFNode();

ProtoInstance259.fieldValue[0] = fieldValue260;

let fieldValue261 = browser.currentScene.createNode("fieldValue");
fieldValue261.name = "children";
let ProtoInstance262 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance262.name = "Site";
ProtoInstance262.DEF = "hanim_skull_tip_2";
let fieldValue263 = browser.currentScene.createNode("fieldValue");
fieldValue263.name = "name";
fieldValue263.value = "skull_tip";
ProtoInstance262.fieldValue = new MFNode();

ProtoInstance262.fieldValue[0] = fieldValue263;

let fieldValue264 = browser.currentScene.createNode("fieldValue");
fieldValue264.name = "translation";
fieldValue264.value = "0.00499999988824129 1.75039994716644 0.00549999997019768";
ProtoInstance262.fieldValue[1] = fieldValue264;

fieldValue261.children = new MFNode();

fieldValue261.children[0] = ProtoInstance262;

let ProtoInstance265 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance265.name = "Site";
ProtoInstance265.DEF = "hanim_sellion_2";
let fieldValue266 = browser.currentScene.createNode("fieldValue");
fieldValue266.name = "name";
fieldValue266.value = "sellion";
ProtoInstance265.fieldValue = new MFNode();

ProtoInstance265.fieldValue[0] = fieldValue266;

let fieldValue267 = browser.currentScene.createNode("fieldValue");
fieldValue267.name = "translation";
fieldValue267.value = "0.00579999992623925 1.63160002231598 0.0851999968290329";
ProtoInstance265.fieldValue[1] = fieldValue267;

fieldValue261.children[1] = ProtoInstance265;

let ProtoInstance268 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance268.name = "Site";
ProtoInstance268.DEF = "hanim_r_infraorbitale_2";
let fieldValue269 = browser.currentScene.createNode("fieldValue");
fieldValue269.name = "name";
fieldValue269.value = "r_infraorbitale";
ProtoInstance268.fieldValue = new MFNode();

ProtoInstance268.fieldValue[0] = fieldValue269;

let fieldValue270 = browser.currentScene.createNode("fieldValue");
fieldValue270.name = "translation";
fieldValue270.value = "-0.023700000718236 1.61710000038147 0.0751999989151955";
ProtoInstance268.fieldValue[1] = fieldValue270;

fieldValue261.children[2] = ProtoInstance268;

let ProtoInstance271 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance271.name = "Site";
ProtoInstance271.DEF = "hanim_l_infraorbitale_2";
let fieldValue272 = browser.currentScene.createNode("fieldValue");
fieldValue272.name = "name";
fieldValue272.value = "l_infraorbitale";
ProtoInstance271.fieldValue = new MFNode();

ProtoInstance271.fieldValue[0] = fieldValue272;

let fieldValue273 = browser.currentScene.createNode("fieldValue");
fieldValue273.name = "translation";
fieldValue273.value = "0.0340999998152256 1.61710000038147 0.0751999989151955";
ProtoInstance271.fieldValue[1] = fieldValue273;

fieldValue261.children[3] = ProtoInstance271;

let ProtoInstance274 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance274.name = "Site";
ProtoInstance274.DEF = "hanim_supramenton_2";
let fieldValue275 = browser.currentScene.createNode("fieldValue");
fieldValue275.name = "name";
fieldValue275.value = "supramenton";
ProtoInstance274.fieldValue = new MFNode();

ProtoInstance274.fieldValue[0] = fieldValue275;

let fieldValue276 = browser.currentScene.createNode("fieldValue");
fieldValue276.name = "translation";
fieldValue276.value = "0.00609999988228083 1.54100000858307 0.0804999992251396";
ProtoInstance274.fieldValue[1] = fieldValue276;

fieldValue261.children[4] = ProtoInstance274;

let ProtoInstance277 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance277.name = "Site";
ProtoInstance277.DEF = "hanim_r_tragion_2";
let fieldValue278 = browser.currentScene.createNode("fieldValue");
fieldValue278.name = "name";
fieldValue278.value = "r_tragion";
ProtoInstance277.fieldValue = new MFNode();

ProtoInstance277.fieldValue[0] = fieldValue278;

let fieldValue279 = browser.currentScene.createNode("fieldValue");
fieldValue279.name = "translation";
fieldValue279.value = "-0.0645999982953072 1.63469994068146 0.0302000008523464";
ProtoInstance277.fieldValue[1] = fieldValue279;

fieldValue261.children[5] = ProtoInstance277;

let ProtoInstance280 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance280.name = "Site";
ProtoInstance280.DEF = "hanim_r_gonion_2";
let fieldValue281 = browser.currentScene.createNode("fieldValue");
fieldValue281.name = "name";
fieldValue281.value = "r_gonion";
ProtoInstance280.fieldValue = new MFNode();

ProtoInstance280.fieldValue[0] = fieldValue281;

let fieldValue282 = browser.currentScene.createNode("fieldValue");
fieldValue282.name = "translation";
fieldValue282.value = "-0.0520000010728836 1.55289995670319 0.0346999987959862";
ProtoInstance280.fieldValue[1] = fieldValue282;

fieldValue261.children[6] = ProtoInstance280;

let ProtoInstance283 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance283.name = "Site";
ProtoInstance283.DEF = "hanim_l_tragion_2";
let fieldValue284 = browser.currentScene.createNode("fieldValue");
fieldValue284.name = "name";
fieldValue284.value = "l_tragion";
ProtoInstance283.fieldValue = new MFNode();

ProtoInstance283.fieldValue[0] = fieldValue284;

let fieldValue285 = browser.currentScene.createNode("fieldValue");
fieldValue285.name = "translation";
fieldValue285.value = "0.0738999992609024 1.63479995727539 0.0282000005245209";
ProtoInstance283.fieldValue[1] = fieldValue285;

fieldValue261.children[7] = ProtoInstance283;

let ProtoInstance286 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance286.name = "Site";
ProtoInstance286.DEF = "hanim_l_gonion_2";
let fieldValue287 = browser.currentScene.createNode("fieldValue");
fieldValue287.name = "name";
fieldValue287.value = "l_gonion";
ProtoInstance286.fieldValue = new MFNode();

ProtoInstance286.fieldValue[0] = fieldValue287;

let fieldValue288 = browser.currentScene.createNode("fieldValue");
fieldValue288.name = "translation";
fieldValue288.value = "0.0631000027060509 1.55299997329712 0.0329999998211861";
ProtoInstance286.fieldValue[1] = fieldValue288;

fieldValue261.children[8] = ProtoInstance286;

let ProtoInstance289 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance289.name = "Site";
ProtoInstance289.DEF = "hanim_nuchale_2";
let fieldValue290 = browser.currentScene.createNode("fieldValue");
fieldValue290.name = "name";
fieldValue290.value = "nuchale";
ProtoInstance289.fieldValue = new MFNode();

ProtoInstance289.fieldValue[0] = fieldValue290;

let fieldValue291 = browser.currentScene.createNode("fieldValue");
fieldValue291.name = "translation";
fieldValue291.value = "0.00389999989420176 1.59720003604889 -0.0795999988913536";
ProtoInstance289.fieldValue[1] = fieldValue291;

fieldValue261.children[9] = ProtoInstance289;

ProtoInstance259.fieldValue[1] = fieldValue261;

fieldValue258.children = new MFNode();

fieldValue258.children[0] = ProtoInstance259;

ProtoInstance254.fieldValue[3] = fieldValue258;

fieldValue253.children = new MFNode();

fieldValue253.children[0] = ProtoInstance254;

let ProtoInstance292 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance292.name = "Joint";
ProtoInstance292.DEF = "hanim_l_shoulder_2";
let fieldValue293 = browser.currentScene.createNode("fieldValue");
fieldValue293.name = "stiffness";
fieldValue293.value = "1 1 1";
ProtoInstance292.fieldValue = new MFNode();

ProtoInstance292.fieldValue[0] = fieldValue293;

let fieldValue294 = browser.currentScene.createNode("fieldValue");
fieldValue294.name = "name";
fieldValue294.value = "l_shoulder";
ProtoInstance292.fieldValue[1] = fieldValue294;

let fieldValue295 = browser.currentScene.createNode("fieldValue");
fieldValue295.name = "center";
fieldValue295.value = "0.202900007367134 1.43760001659393 -0.0386999994516373";
ProtoInstance292.fieldValue[2] = fieldValue295;

let fieldValue296 = browser.currentScene.createNode("fieldValue");
fieldValue296.name = "children";
let ProtoInstance297 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance297.name = "Joint";
ProtoInstance297.DEF = "hanim_l_elbow_2";
let fieldValue298 = browser.currentScene.createNode("fieldValue");
fieldValue298.name = "stiffness";
fieldValue298.value = "1 1 1";
ProtoInstance297.fieldValue = new MFNode();

ProtoInstance297.fieldValue[0] = fieldValue298;

let fieldValue299 = browser.currentScene.createNode("fieldValue");
fieldValue299.name = "name";
fieldValue299.value = "l_elbow";
ProtoInstance297.fieldValue[1] = fieldValue299;

let fieldValue300 = browser.currentScene.createNode("fieldValue");
fieldValue300.name = "center";
fieldValue300.value = "0.201399996876717 1.1356999874115 -0.0681999996304512";
ProtoInstance297.fieldValue[2] = fieldValue300;

let fieldValue301 = browser.currentScene.createNode("fieldValue");
fieldValue301.name = "children";
let ProtoInstance302 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance302.name = "Joint";
ProtoInstance302.DEF = "hanim_l_radiocarpal_2";
let fieldValue303 = browser.currentScene.createNode("fieldValue");
fieldValue303.name = "stiffness";
fieldValue303.value = "1 1 1";
ProtoInstance302.fieldValue = new MFNode();

ProtoInstance302.fieldValue[0] = fieldValue303;

let fieldValue304 = browser.currentScene.createNode("fieldValue");
fieldValue304.name = "name";
fieldValue304.value = "l_radiocarpal";
ProtoInstance302.fieldValue[1] = fieldValue304;

let fieldValue305 = browser.currentScene.createNode("fieldValue");
fieldValue305.name = "center";
fieldValue305.value = "0.198400005698204 0.866299986839294 -0.0582999996840954";
ProtoInstance302.fieldValue[2] = fieldValue305;

let fieldValue306 = browser.currentScene.createNode("fieldValue");
fieldValue306.name = "children";
let ProtoInstance307 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance307.name = "Segment";
ProtoInstance307.DEF = "hanim_l_hand_2";
let fieldValue308 = browser.currentScene.createNode("fieldValue");
fieldValue308.name = "name";
fieldValue308.value = "l_hand";
ProtoInstance307.fieldValue = new MFNode();

ProtoInstance307.fieldValue[0] = fieldValue308;

let fieldValue309 = browser.currentScene.createNode("fieldValue");
fieldValue309.name = "children";
let ProtoInstance310 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance310.name = "Site";
ProtoInstance310.DEF = "hanim_l_hand_tip_2";
let fieldValue311 = browser.currentScene.createNode("fieldValue");
fieldValue311.name = "name";
fieldValue311.value = "l_hand_tip";
ProtoInstance310.fieldValue = new MFNode();

ProtoInstance310.fieldValue[0] = fieldValue311;

let fieldValue312 = browser.currentScene.createNode("fieldValue");
fieldValue312.name = "translation";
fieldValue312.value = "0.208000004291534 0.673099994659424 -0.049100000411272";
ProtoInstance310.fieldValue[1] = fieldValue312;

fieldValue309.children = new MFNode();

fieldValue309.children[0] = ProtoInstance310;

let ProtoInstance313 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance313.name = "Site";
ProtoInstance313.DEF = "hanim_l_metacarpal_phalanx3";
let fieldValue314 = browser.currentScene.createNode("fieldValue");
fieldValue314.name = "name";
fieldValue314.value = "l_metacarpal_phalanx_2";
ProtoInstance313.fieldValue = new MFNode();

ProtoInstance313.fieldValue[0] = fieldValue314;

let fieldValue315 = browser.currentScene.createNode("fieldValue");
fieldValue315.name = "translation";
fieldValue315.value = "0.200900003314018 0.813899993896484 -0.023700000718236";
ProtoInstance313.fieldValue[1] = fieldValue315;

fieldValue309.children[1] = ProtoInstance313;

let ProtoInstance316 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance316.name = "Site";
ProtoInstance316.DEF = "hanim_l_dactylion_2";
let fieldValue317 = browser.currentScene.createNode("fieldValue");
fieldValue317.name = "name";
fieldValue317.value = "l_dactylion";
ProtoInstance316.fieldValue = new MFNode();

ProtoInstance316.fieldValue[0] = fieldValue317;

let fieldValue318 = browser.currentScene.createNode("fieldValue");
fieldValue318.name = "translation";
fieldValue318.value = "0.205599993467331 0.674300014972687 -0.048200000077486";
ProtoInstance316.fieldValue[1] = fieldValue318;

fieldValue309.children[2] = ProtoInstance316;

let ProtoInstance319 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance319.name = "Site";
ProtoInstance319.DEF = "hanim_l_ulnar_styloid_2";
let fieldValue320 = browser.currentScene.createNode("fieldValue");
fieldValue320.name = "name";
fieldValue320.value = "l_ulnar_styloid";
ProtoInstance319.fieldValue = new MFNode();

ProtoInstance319.fieldValue[0] = fieldValue320;

let fieldValue321 = browser.currentScene.createNode("fieldValue");
fieldValue321.name = "translation";
fieldValue321.value = "-0.214200004935265 0.85290002822876 -0.064800001680851";
ProtoInstance319.fieldValue[1] = fieldValue321;

fieldValue309.children[3] = ProtoInstance319;

let ProtoInstance322 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance322.name = "Site";
ProtoInstance322.DEF = "hanim_l_metacarpal_phalanx6";
let fieldValue323 = browser.currentScene.createNode("fieldValue");
fieldValue323.name = "name";
fieldValue323.value = "l_metacarpal_phalanx_5";
ProtoInstance322.fieldValue = new MFNode();

ProtoInstance322.fieldValue[0] = fieldValue323;

let fieldValue324 = browser.currentScene.createNode("fieldValue");
fieldValue324.name = "translation";
fieldValue324.value = "0.192900002002716 0.78600001335144 -0.112199999392033";
ProtoInstance322.fieldValue[1] = fieldValue324;

fieldValue309.children[4] = ProtoInstance322;

ProtoInstance307.fieldValue[1] = fieldValue309;

fieldValue306.children = new MFNode();

fieldValue306.children[0] = ProtoInstance307;

ProtoInstance302.fieldValue[3] = fieldValue306;

fieldValue301.children = new MFNode();

fieldValue301.children[0] = ProtoInstance302;

let ProtoInstance325 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance325.name = "Segment";
ProtoInstance325.DEF = "hanim_l_forearm_2";
let fieldValue326 = browser.currentScene.createNode("fieldValue");
fieldValue326.name = "name";
fieldValue326.value = "l_forearm";
ProtoInstance325.fieldValue = new MFNode();

ProtoInstance325.fieldValue[0] = fieldValue326;

let fieldValue327 = browser.currentScene.createNode("fieldValue");
fieldValue327.name = "children";
let ProtoInstance328 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance328.name = "Site";
ProtoInstance328.DEF = "hanim_l_radial_styloid_2";
let fieldValue329 = browser.currentScene.createNode("fieldValue");
fieldValue329.name = "name";
fieldValue329.value = "l_radial_styloid";
ProtoInstance328.fieldValue = new MFNode();

ProtoInstance328.fieldValue[0] = fieldValue329;

let fieldValue330 = browser.currentScene.createNode("fieldValue");
fieldValue330.name = "translation";
fieldValue330.value = "0.190099999308586 0.864499986171722 -0.0414999984204769";
ProtoInstance328.fieldValue[1] = fieldValue330;

fieldValue327.children = new MFNode();

fieldValue327.children[0] = ProtoInstance328;

let ProtoInstance331 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance331.name = "Site";
ProtoInstance331.DEF = "hanim_l_olecranon_2";
let fieldValue332 = browser.currentScene.createNode("fieldValue");
fieldValue332.name = "name";
fieldValue332.value = "l_olecranon";
ProtoInstance331.fieldValue = new MFNode();

ProtoInstance331.fieldValue[0] = fieldValue332;

let fieldValue333 = browser.currentScene.createNode("fieldValue");
fieldValue333.name = "translation";
fieldValue333.value = "-0.196199998259544 1.13750004768372 -0.112300001084805";
ProtoInstance331.fieldValue[1] = fieldValue333;

fieldValue327.children[1] = ProtoInstance331;

let ProtoInstance334 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance334.name = "Site";
ProtoInstance334.DEF = "hanim_l_humeral_medial_epicondyles_2";
let fieldValue335 = browser.currentScene.createNode("fieldValue");
fieldValue335.name = "name";
fieldValue335.value = "l_humeral_medial_epicondyles";
ProtoInstance334.fieldValue = new MFNode();

ProtoInstance334.fieldValue[0] = fieldValue335;

let fieldValue336 = browser.currentScene.createNode("fieldValue");
fieldValue336.name = "translation";
fieldValue336.value = "0.173500001430511 1.12720000743866 -0.111299999058247";
ProtoInstance334.fieldValue[1] = fieldValue336;

fieldValue327.children[2] = ProtoInstance334;

let ProtoInstance337 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance337.name = "Site";
ProtoInstance337.DEF = "hanim_l_radiale_2";
let fieldValue338 = browser.currentScene.createNode("fieldValue");
fieldValue338.name = "name";
fieldValue338.value = "l_radiale";
ProtoInstance337.fieldValue = new MFNode();

ProtoInstance337.fieldValue[0] = fieldValue338;

let fieldValue339 = browser.currentScene.createNode("fieldValue");
fieldValue339.name = "translation";
fieldValue339.value = "0.218199998140335 1.12119996547699 -0.116700001060963";
ProtoInstance337.fieldValue[1] = fieldValue339;

fieldValue327.children[3] = ProtoInstance337;

ProtoInstance325.fieldValue[1] = fieldValue327;

fieldValue301.children[1] = ProtoInstance325;

ProtoInstance297.fieldValue[3] = fieldValue301;

fieldValue296.children = new MFNode();

fieldValue296.children[0] = ProtoInstance297;

let ProtoInstance340 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance340.name = "Segment";
ProtoInstance340.DEF = "hanim_l_upperarm_2";
let fieldValue341 = browser.currentScene.createNode("fieldValue");
fieldValue341.name = "name";
fieldValue341.value = "l_upperarm";
ProtoInstance340.fieldValue = new MFNode();

ProtoInstance340.fieldValue[0] = fieldValue341;

let fieldValue342 = browser.currentScene.createNode("fieldValue");
fieldValue342.name = "children";
let ProtoInstance343 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance343.name = "Site";
ProtoInstance343.DEF = "hanim_l_humeral_lateral_epicondyles_2";
let fieldValue344 = browser.currentScene.createNode("fieldValue");
fieldValue344.name = "name";
fieldValue344.value = "l_humeral_lateral_epicondyles";
ProtoInstance343.fieldValue = new MFNode();

ProtoInstance343.fieldValue[0] = fieldValue344;

let fieldValue345 = browser.currentScene.createNode("fieldValue");
fieldValue345.name = "translation";
fieldValue345.value = "0.228000000119209 1.14820003509521 -0.109999999403954";
ProtoInstance343.fieldValue[1] = fieldValue345;

fieldValue342.children = new MFNode();

fieldValue342.children[0] = ProtoInstance343;

ProtoInstance340.fieldValue[1] = fieldValue342;

fieldValue296.children[1] = ProtoInstance340;

ProtoInstance292.fieldValue[3] = fieldValue296;

fieldValue253.children[1] = ProtoInstance292;

let ProtoInstance346 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance346.name = "Joint";
ProtoInstance346.DEF = "hanim_r_shoulder_2";
let fieldValue347 = browser.currentScene.createNode("fieldValue");
fieldValue347.name = "stiffness";
fieldValue347.value = "1 1 1";
ProtoInstance346.fieldValue = new MFNode();

ProtoInstance346.fieldValue[0] = fieldValue347;

let fieldValue348 = browser.currentScene.createNode("fieldValue");
fieldValue348.name = "name";
fieldValue348.value = "r_shoulder";
ProtoInstance346.fieldValue[1] = fieldValue348;

let fieldValue349 = browser.currentScene.createNode("fieldValue");
fieldValue349.name = "center";
fieldValue349.value = "-0.190699994564056 1.4407000541687 -0.0324999988079071";
ProtoInstance346.fieldValue[2] = fieldValue349;

let fieldValue350 = browser.currentScene.createNode("fieldValue");
fieldValue350.name = "children";
let ProtoInstance351 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance351.name = "Joint";
ProtoInstance351.DEF = "hanim_r_elbow_2";
let fieldValue352 = browser.currentScene.createNode("fieldValue");
fieldValue352.name = "stiffness";
fieldValue352.value = "1 1 1";
ProtoInstance351.fieldValue = new MFNode();

ProtoInstance351.fieldValue[0] = fieldValue352;

let fieldValue353 = browser.currentScene.createNode("fieldValue");
fieldValue353.name = "name";
fieldValue353.value = "r_elbow";
ProtoInstance351.fieldValue[1] = fieldValue353;

let fieldValue354 = browser.currentScene.createNode("fieldValue");
fieldValue354.name = "center";
fieldValue354.value = "-0.194900006055832 1.13880002498627 -0.061999998986721";
ProtoInstance351.fieldValue[2] = fieldValue354;

let fieldValue355 = browser.currentScene.createNode("fieldValue");
fieldValue355.name = "children";
let ProtoInstance356 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance356.name = "Joint";
ProtoInstance356.DEF = "hanim_r_radiocarpal_2";
let fieldValue357 = browser.currentScene.createNode("fieldValue");
fieldValue357.name = "stiffness";
fieldValue357.value = "1 1 1";
ProtoInstance356.fieldValue = new MFNode();

ProtoInstance356.fieldValue[0] = fieldValue357;

let fieldValue358 = browser.currentScene.createNode("fieldValue");
fieldValue358.name = "name";
fieldValue358.value = "r_radiocarpal";
ProtoInstance356.fieldValue[1] = fieldValue358;

let fieldValue359 = browser.currentScene.createNode("fieldValue");
fieldValue359.name = "center";
fieldValue359.value = "-0.195899993181229 0.869400024414063 -0.0520999990403652";
ProtoInstance356.fieldValue[2] = fieldValue359;

let fieldValue360 = browser.currentScene.createNode("fieldValue");
fieldValue360.name = "children";
let ProtoInstance361 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance361.name = "Segment";
ProtoInstance361.DEF = "hanim_r_hand_2";
let fieldValue362 = browser.currentScene.createNode("fieldValue");
fieldValue362.name = "name";
fieldValue362.value = "r_hand";
ProtoInstance361.fieldValue = new MFNode();

ProtoInstance361.fieldValue[0] = fieldValue362;

let fieldValue363 = browser.currentScene.createNode("fieldValue");
fieldValue363.name = "children";
let ProtoInstance364 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance364.name = "Site";
ProtoInstance364.DEF = "hanim_r_hand_tip_2";
let fieldValue365 = browser.currentScene.createNode("fieldValue");
fieldValue365.name = "name";
fieldValue365.value = "r_hand_tip";
ProtoInstance364.fieldValue = new MFNode();

ProtoInstance364.fieldValue[0] = fieldValue365;

let fieldValue366 = browser.currentScene.createNode("fieldValue");
fieldValue366.name = "translation";
fieldValue366.value = "-0.196899995207787 0.675800025463104 -0.0427000001072884";
ProtoInstance364.fieldValue[1] = fieldValue366;

fieldValue363.children = new MFNode();

fieldValue363.children[0] = ProtoInstance364;

let ProtoInstance367 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance367.name = "Site";
ProtoInstance367.DEF = "hanim_r_metacarpal_phalanx3";
let fieldValue368 = browser.currentScene.createNode("fieldValue");
fieldValue368.name = "name";
fieldValue368.value = "r_metacarpal_phalanx_2";
ProtoInstance367.fieldValue = new MFNode();

ProtoInstance367.fieldValue[0] = fieldValue368;

let fieldValue369 = browser.currentScene.createNode("fieldValue");
fieldValue369.name = "translation";
fieldValue369.value = "-0.197699993848801 0.816900014877319 -0.0176999997347593";
ProtoInstance367.fieldValue[1] = fieldValue369;

fieldValue363.children[1] = ProtoInstance367;

let ProtoInstance370 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance370.name = "Site";
ProtoInstance370.DEF = "hanim_r_dactylion_2";
let fieldValue371 = browser.currentScene.createNode("fieldValue");
fieldValue371.name = "name";
fieldValue371.value = "r_dactylion";
ProtoInstance370.fieldValue = new MFNode();

ProtoInstance370.fieldValue[0] = fieldValue371;

let fieldValue372 = browser.currentScene.createNode("fieldValue");
fieldValue372.name = "translation";
fieldValue372.value = "-0.194100007414818 0.677200019359589 -0.0423000007867813";
ProtoInstance370.fieldValue[1] = fieldValue372;

fieldValue363.children[2] = ProtoInstance370;

let ProtoInstance373 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance373.name = "Site";
ProtoInstance373.DEF = "hanim_r_ulnar_styloid_2";
let fieldValue374 = browser.currentScene.createNode("fieldValue");
fieldValue374.name = "name";
fieldValue374.value = "r_ulnar_styloid";
ProtoInstance373.fieldValue = new MFNode();

ProtoInstance373.fieldValue[0] = fieldValue374;

let fieldValue375 = browser.currentScene.createNode("fieldValue");
fieldValue375.name = "translation";
fieldValue375.value = "-0.21170000731945 0.856199979782104 -0.0584000013768673";
ProtoInstance373.fieldValue[1] = fieldValue375;

fieldValue363.children[3] = ProtoInstance373;

let ProtoInstance376 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance376.name = "Site";
ProtoInstance376.DEF = "hanim_r_metacarpal_phalanx6";
let fieldValue377 = browser.currentScene.createNode("fieldValue");
fieldValue377.name = "name";
fieldValue377.value = "r_metacarpal_phalanx_5";
ProtoInstance376.fieldValue = new MFNode();

ProtoInstance376.fieldValue[0] = fieldValue377;

let fieldValue378 = browser.currentScene.createNode("fieldValue");
fieldValue378.name = "translation";
fieldValue378.value = "-0.192900002002716 0.788999974727631 -0.10639999806881";
ProtoInstance376.fieldValue[1] = fieldValue378;

fieldValue363.children[4] = ProtoInstance376;

ProtoInstance361.fieldValue[1] = fieldValue363;

fieldValue360.children = new MFNode();

fieldValue360.children[0] = ProtoInstance361;

ProtoInstance356.fieldValue[3] = fieldValue360;

fieldValue355.children = new MFNode();

fieldValue355.children[0] = ProtoInstance356;

let ProtoInstance379 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance379.name = "Segment";
ProtoInstance379.DEF = "hanim_r_forearm_2";
let fieldValue380 = browser.currentScene.createNode("fieldValue");
fieldValue380.name = "name";
fieldValue380.value = "r_forearm";
ProtoInstance379.fieldValue = new MFNode();

ProtoInstance379.fieldValue[0] = fieldValue380;

let fieldValue381 = browser.currentScene.createNode("fieldValue");
fieldValue381.name = "children";
let ProtoInstance382 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance382.name = "Site";
ProtoInstance382.DEF = "hanim_r_radial_styloid_2";
let fieldValue383 = browser.currentScene.createNode("fieldValue");
fieldValue383.name = "name";
fieldValue383.value = "r_radial_styloid";
ProtoInstance382.fieldValue = new MFNode();

ProtoInstance382.fieldValue[0] = fieldValue383;

let fieldValue384 = browser.currentScene.createNode("fieldValue");
fieldValue384.name = "translation";
fieldValue384.value = "-0.188400000333786 0.86760002374649 -0.0359999984502792";
ProtoInstance382.fieldValue[1] = fieldValue384;

fieldValue381.children = new MFNode();

fieldValue381.children[0] = ProtoInstance382;

let ProtoInstance385 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance385.name = "Site";
ProtoInstance385.DEF = "hanim_r_olecranon_2";
let fieldValue386 = browser.currentScene.createNode("fieldValue");
fieldValue386.name = "name";
fieldValue386.value = "r_olecranon";
ProtoInstance385.fieldValue = new MFNode();

ProtoInstance385.fieldValue[0] = fieldValue386;

let fieldValue387 = browser.currentScene.createNode("fieldValue");
fieldValue387.name = "translation";
fieldValue387.value = "-0.190699994564056 1.14049994945526 -0.106499999761581";
ProtoInstance385.fieldValue[1] = fieldValue387;

fieldValue381.children[1] = ProtoInstance385;

let ProtoInstance388 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance388.name = "Site";
ProtoInstance388.DEF = "hanim_r_humeral_medial_epicondyles_2";
let fieldValue389 = browser.currentScene.createNode("fieldValue");
fieldValue389.name = "name";
fieldValue389.value = "r_humeral_medial_epicondyles";
ProtoInstance388.fieldValue = new MFNode();

ProtoInstance388.fieldValue[0] = fieldValue389;

let fieldValue390 = browser.currentScene.createNode("fieldValue");
fieldValue390.name = "translation";
fieldValue390.value = "-0.167999997735024 1.12979996204376 -0.106200002133846";
ProtoInstance388.fieldValue[1] = fieldValue390;

fieldValue381.children[2] = ProtoInstance388;

let ProtoInstance391 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance391.name = "Site";
ProtoInstance391.DEF = "hanim_r_radiale_2";
let fieldValue392 = browser.currentScene.createNode("fieldValue");
fieldValue392.name = "name";
fieldValue392.value = "r_radiale";
ProtoInstance391.fieldValue = new MFNode();

ProtoInstance391.fieldValue[0] = fieldValue392;

let fieldValue393 = browser.currentScene.createNode("fieldValue");
fieldValue393.name = "translation";
fieldValue393.value = "-0.212999999523163 1.130499958992 -0.109099999070168";
ProtoInstance391.fieldValue[1] = fieldValue393;

fieldValue381.children[3] = ProtoInstance391;

ProtoInstance379.fieldValue[1] = fieldValue381;

fieldValue355.children[1] = ProtoInstance379;

ProtoInstance351.fieldValue[3] = fieldValue355;

fieldValue350.children = new MFNode();

fieldValue350.children[0] = ProtoInstance351;

let ProtoInstance394 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance394.name = "Segment";
ProtoInstance394.DEF = "hanim_r_upperarm_2";
let fieldValue395 = browser.currentScene.createNode("fieldValue");
fieldValue395.name = "name";
fieldValue395.value = "r_upperarm";
ProtoInstance394.fieldValue = new MFNode();

ProtoInstance394.fieldValue[0] = fieldValue395;

let fieldValue396 = browser.currentScene.createNode("fieldValue");
fieldValue396.name = "children";
let ProtoInstance397 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance397.name = "Site";
ProtoInstance397.DEF = "hanim_r_humeral_lateral_epicondyles_2";
let fieldValue398 = browser.currentScene.createNode("fieldValue");
fieldValue398.name = "name";
fieldValue398.value = "r_humeral_lateral_epicondyles";
ProtoInstance397.fieldValue = new MFNode();

ProtoInstance397.fieldValue[0] = fieldValue398;

let fieldValue399 = browser.currentScene.createNode("fieldValue");
fieldValue399.name = "translation";
fieldValue399.value = "-0.222399994730949 1.15170001983643 -0.103299997746944";
ProtoInstance397.fieldValue[1] = fieldValue399;

fieldValue396.children = new MFNode();

fieldValue396.children[0] = ProtoInstance397;

ProtoInstance394.fieldValue[1] = fieldValue396;

fieldValue350.children[1] = ProtoInstance394;

ProtoInstance346.fieldValue[3] = fieldValue350;

fieldValue253.children[2] = ProtoInstance346;

let ProtoInstance400 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance400.name = "Segment";
ProtoInstance400.DEF = "hanim_l5_2";
let fieldValue401 = browser.currentScene.createNode("fieldValue");
fieldValue401.name = "name";
fieldValue401.value = "l5";
ProtoInstance400.fieldValue = new MFNode();

ProtoInstance400.fieldValue[0] = fieldValue401;

let fieldValue402 = browser.currentScene.createNode("fieldValue");
fieldValue402.name = "children";
let ProtoInstance403 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance403.name = "Site";
ProtoInstance403.DEF = "hanim_r_clavicale_2";
let fieldValue404 = browser.currentScene.createNode("fieldValue");
fieldValue404.name = "name";
fieldValue404.value = "r_clavicale";
ProtoInstance403.fieldValue = new MFNode();

ProtoInstance403.fieldValue[0] = fieldValue404;

let fieldValue405 = browser.currentScene.createNode("fieldValue");
fieldValue405.name = "translation";
fieldValue405.value = "-0.0115000000223517 1.49430000782013 0.0399999991059303";
ProtoInstance403.fieldValue[1] = fieldValue405;

fieldValue402.children = new MFNode();

fieldValue402.children[0] = ProtoInstance403;

let ProtoInstance406 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance406.name = "Site";
ProtoInstance406.DEF = "hanim_suprasternale_2";
let fieldValue407 = browser.currentScene.createNode("fieldValue");
fieldValue407.name = "name";
fieldValue407.value = "suprasternale";
ProtoInstance406.fieldValue = new MFNode();

ProtoInstance406.fieldValue[0] = fieldValue407;

let fieldValue408 = browser.currentScene.createNode("fieldValue");
fieldValue408.name = "translation";
fieldValue408.value = "0.00839999970048666 1.47140002250671 0.0551000013947487";
ProtoInstance406.fieldValue[1] = fieldValue408;

fieldValue402.children[1] = ProtoInstance406;

let ProtoInstance409 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance409.name = "Site";
ProtoInstance409.DEF = "hanim_l_clavicale_2";
let fieldValue410 = browser.currentScene.createNode("fieldValue");
fieldValue410.name = "name";
fieldValue410.value = "l_clavicale";
ProtoInstance409.fieldValue = new MFNode();

ProtoInstance409.fieldValue[0] = fieldValue410;

let fieldValue411 = browser.currentScene.createNode("fieldValue");
fieldValue411.name = "translation";
fieldValue411.value = "0.0271000005304813 1.49430000782013 0.0394000001251698";
ProtoInstance409.fieldValue[1] = fieldValue411;

fieldValue402.children[2] = ProtoInstance409;

let ProtoInstance412 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance412.name = "Site";
ProtoInstance412.DEF = "hanim_r_thelion_2";
let fieldValue413 = browser.currentScene.createNode("fieldValue");
fieldValue413.name = "name";
fieldValue413.value = "r_thelion";
ProtoInstance412.fieldValue = new MFNode();

ProtoInstance412.fieldValue[0] = fieldValue413;

let fieldValue414 = browser.currentScene.createNode("fieldValue");
fieldValue414.name = "translation";
fieldValue414.value = "-0.0736000016331673 1.33850002288818 0.121699996292591";
ProtoInstance412.fieldValue[1] = fieldValue414;

fieldValue402.children[3] = ProtoInstance412;

let ProtoInstance415 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance415.name = "Site";
ProtoInstance415.DEF = "hanim_l_thelion_2";
let fieldValue416 = browser.currentScene.createNode("fieldValue");
fieldValue416.name = "name";
fieldValue416.value = "l_thelion";
ProtoInstance415.fieldValue = new MFNode();

ProtoInstance415.fieldValue[0] = fieldValue416;

let fieldValue417 = browser.currentScene.createNode("fieldValue");
fieldValue417.name = "translation";
fieldValue417.value = "0.0917999967932701 1.33819997310638 0.119199998676777";
ProtoInstance415.fieldValue[1] = fieldValue417;

fieldValue402.children[4] = ProtoInstance415;

let ProtoInstance418 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance418.name = "Site";
ProtoInstance418.DEF = "hanim_substernale_2";
let fieldValue419 = browser.currentScene.createNode("fieldValue");
fieldValue419.name = "name";
fieldValue419.value = "substernale";
ProtoInstance418.fieldValue = new MFNode();

ProtoInstance418.fieldValue[0] = fieldValue419;

let fieldValue420 = browser.currentScene.createNode("fieldValue");
fieldValue420.name = "translation";
fieldValue420.value = "0.008500000461936 1.29949998855591 0.114699997007847";
ProtoInstance418.fieldValue[1] = fieldValue420;

fieldValue402.children[5] = ProtoInstance418;

let ProtoInstance421 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance421.name = "Site";
ProtoInstance421.DEF = "hanim_r_rib10_2";
let fieldValue422 = browser.currentScene.createNode("fieldValue");
fieldValue422.name = "name";
fieldValue422.value = "r_rib10";
ProtoInstance421.fieldValue = new MFNode();

ProtoInstance421.fieldValue[0] = fieldValue422;

let fieldValue423 = browser.currentScene.createNode("fieldValue");
fieldValue423.name = "translation";
fieldValue423.value = "-0.0710999965667725 1.19410002231598 0.101599998772144";
ProtoInstance421.fieldValue[1] = fieldValue423;

fieldValue402.children[6] = ProtoInstance421;

let ProtoInstance424 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance424.name = "Site";
ProtoInstance424.DEF = "hanim_l_rib10_2";
let fieldValue425 = browser.currentScene.createNode("fieldValue");
fieldValue425.name = "name";
fieldValue425.value = "l_rib10";
ProtoInstance424.fieldValue = new MFNode();

ProtoInstance424.fieldValue[0] = fieldValue425;

let fieldValue426 = browser.currentScene.createNode("fieldValue");
fieldValue426.name = "translation";
fieldValue426.value = "0.0870999991893768 1.19249999523163 0.099200002849102";
ProtoInstance424.fieldValue[1] = fieldValue426;

fieldValue402.children[7] = ProtoInstance424;

let ProtoInstance427 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance427.name = "Site";
ProtoInstance427.DEF = "hanim_cervicale_2";
let fieldValue428 = browser.currentScene.createNode("fieldValue");
fieldValue428.name = "name";
fieldValue428.value = "cervicale";
ProtoInstance427.fieldValue = new MFNode();

ProtoInstance427.fieldValue[0] = fieldValue428;

let fieldValue429 = browser.currentScene.createNode("fieldValue");
fieldValue429.name = "translation";
fieldValue429.value = "0.0063999998383224 1.51999998092651 -0.0815000012516975";
ProtoInstance427.fieldValue[1] = fieldValue429;

fieldValue402.children[8] = ProtoInstance427;

let ProtoInstance430 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance430.name = "Site";
ProtoInstance430.DEF = "hanim_spine_2_lower_back_2";
let fieldValue431 = browser.currentScene.createNode("fieldValue");
fieldValue431.name = "name";
fieldValue431.value = "spine_2_lower_back";
ProtoInstance430.fieldValue = new MFNode();

ProtoInstance430.fieldValue[0] = fieldValue431;

let fieldValue432 = browser.currentScene.createNode("fieldValue");
fieldValue432.name = "translation";
fieldValue432.value = "0.00490000005811453 1.19079995155334 -0.111299999058247";
ProtoInstance430.fieldValue[1] = fieldValue432;

fieldValue402.children[9] = ProtoInstance430;

let ProtoInstance433 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance433.name = "Site";
ProtoInstance433.DEF = "hanim_waist_preferred_posterior_2";
let fieldValue434 = browser.currentScene.createNode("fieldValue");
fieldValue434.name = "name";
fieldValue434.value = "waist_preferred_posterior";
ProtoInstance433.fieldValue = new MFNode();

ProtoInstance433.fieldValue[0] = fieldValue434;

let fieldValue435 = browser.currentScene.createNode("fieldValue");
fieldValue435.name = "translation";
fieldValue435.value = "0.28999999165535 1.09150004386902 -0.109099999070168";
ProtoInstance433.fieldValue[1] = fieldValue435;

fieldValue402.children[10] = ProtoInstance433;

let ProtoInstance436 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance436.name = "Site";
ProtoInstance436.DEF = "hanim_r_acromion_2";
let fieldValue437 = browser.currentScene.createNode("fieldValue");
fieldValue437.name = "name";
fieldValue437.value = "r_acromion";
ProtoInstance436.fieldValue = new MFNode();

ProtoInstance436.fieldValue[0] = fieldValue437;

let fieldValue438 = browser.currentScene.createNode("fieldValue");
fieldValue438.name = "translation";
fieldValue438.value = "-0.190500006079674 1.47909998893738 -0.0430999994277954";
ProtoInstance436.fieldValue[1] = fieldValue438;

fieldValue402.children[11] = ProtoInstance436;

let ProtoInstance439 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance439.name = "Site";
ProtoInstance439.DEF = "hanim_r_axilla_proximal_2";
let fieldValue440 = browser.currentScene.createNode("fieldValue");
fieldValue440.name = "name";
fieldValue440.value = "r_axilla_proximal";
ProtoInstance439.fieldValue = new MFNode();

ProtoInstance439.fieldValue[0] = fieldValue440;

let fieldValue441 = browser.currentScene.createNode("fieldValue");
fieldValue441.name = "translation";
fieldValue441.value = "-0.162599995732307 1.40719997882843 -0.00310000008903444";
ProtoInstance439.fieldValue[1] = fieldValue441;

fieldValue402.children[12] = ProtoInstance439;

let ProtoInstance442 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance442.name = "Site";
ProtoInstance442.DEF = "hanim_r_axilla_distal_2";
let fieldValue443 = browser.currentScene.createNode("fieldValue");
fieldValue443.name = "name";
fieldValue443.value = "r_axilla_distal";
ProtoInstance442.fieldValue = new MFNode();

ProtoInstance442.fieldValue[0] = fieldValue443;

let fieldValue444 = browser.currentScene.createNode("fieldValue");
fieldValue444.name = "translation";
fieldValue444.value = "-0.160300001502037 1.40980005264282 -0.0825999975204468";
ProtoInstance442.fieldValue[1] = fieldValue444;

fieldValue402.children[13] = ProtoInstance442;

let ProtoInstance445 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance445.name = "Site";
ProtoInstance445.DEF = "hanim_l_acromion_2";
let fieldValue446 = browser.currentScene.createNode("fieldValue");
fieldValue446.name = "name";
fieldValue446.value = "l_acromion";
ProtoInstance445.fieldValue = new MFNode();

ProtoInstance445.fieldValue[0] = fieldValue446;

let fieldValue447 = browser.currentScene.createNode("fieldValue");
fieldValue447.name = "translation";
fieldValue447.value = "0.203199997544289 1.47599995136261 -0.0489999987185001";
ProtoInstance445.fieldValue[1] = fieldValue447;

fieldValue402.children[14] = ProtoInstance445;

let ProtoInstance448 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance448.name = "Site";
ProtoInstance448.DEF = "hanim_l_axilla_proximal_2";
let fieldValue449 = browser.currentScene.createNode("fieldValue");
fieldValue449.name = "name";
fieldValue449.value = "l_axilla_proximal";
ProtoInstance448.fieldValue = new MFNode();

ProtoInstance448.fieldValue[0] = fieldValue449;

let fieldValue450 = browser.currentScene.createNode("fieldValue");
fieldValue450.name = "translation";
fieldValue450.value = "0.177699998021126 1.40649998188019 -0.00749999983236194";
ProtoInstance448.fieldValue[1] = fieldValue450;

fieldValue402.children[15] = ProtoInstance448;

let ProtoInstance451 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance451.name = "Site";
ProtoInstance451.DEF = "hanim_l_axilla_distal_2";
let fieldValue452 = browser.currentScene.createNode("fieldValue");
fieldValue452.name = "name";
fieldValue452.value = "l_axilla_distal";
ProtoInstance451.fieldValue = new MFNode();

ProtoInstance451.fieldValue[0] = fieldValue452;

let fieldValue453 = browser.currentScene.createNode("fieldValue");
fieldValue453.name = "translation";
fieldValue453.value = "0.17059999704361 1.40719997882843 -0.0874999985098839";
ProtoInstance451.fieldValue[1] = fieldValue453;

fieldValue402.children[16] = ProtoInstance451;

let ProtoInstance454 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance454.name = "Site";
ProtoInstance454.DEF = "hanim_r_neck_base_2";
let fieldValue455 = browser.currentScene.createNode("fieldValue");
fieldValue455.name = "name";
fieldValue455.value = "r_neck_base";
ProtoInstance454.fieldValue = new MFNode();

ProtoInstance454.fieldValue[0] = fieldValue455;

let fieldValue456 = browser.currentScene.createNode("fieldValue");
fieldValue456.name = "translation";
fieldValue456.value = "-0.0419000014662743 1.51489996910095 -0.0219999998807907";
ProtoInstance454.fieldValue[1] = fieldValue456;

fieldValue402.children[17] = ProtoInstance454;

let ProtoInstance457 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance457.name = "Site";
ProtoInstance457.DEF = "hanim_l_neck_base_2";
let fieldValue458 = browser.currentScene.createNode("fieldValue");
fieldValue458.name = "name";
fieldValue458.value = "l_neck_base";
ProtoInstance457.fieldValue = new MFNode();

ProtoInstance457.fieldValue[0] = fieldValue458;

let fieldValue459 = browser.currentScene.createNode("fieldValue");
fieldValue459.name = "translation";
fieldValue459.value = "0.0645999982953072 1.51409995555878 -0.0379999987781048";
ProtoInstance457.fieldValue[1] = fieldValue459;

fieldValue402.children[18] = ProtoInstance457;

let ProtoInstance460 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance460.name = "Site";
ProtoInstance460.DEF = "hanim_navel_2";
let fieldValue461 = browser.currentScene.createNode("fieldValue");
fieldValue461.name = "name";
fieldValue461.value = "navel";
ProtoInstance460.fieldValue = new MFNode();

ProtoInstance460.fieldValue[0] = fieldValue461;

let fieldValue462 = browser.currentScene.createNode("fieldValue");
fieldValue462.name = "translation";
fieldValue462.value = "0.00689999992027879 1.09660005569458 0.101700000464916";
ProtoInstance460.fieldValue[1] = fieldValue462;

fieldValue402.children[19] = ProtoInstance460;

ProtoInstance400.fieldValue[1] = fieldValue402;

fieldValue253.children[3] = ProtoInstance400;

ProtoInstance249.fieldValue[3] = fieldValue253;

fieldValue113.children[1] = ProtoInstance249;

let ProtoInstance463 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance463.name = "Segment";
ProtoInstance463.DEF = "hanim_sacrum_2";
let fieldValue464 = browser.currentScene.createNode("fieldValue");
fieldValue464.name = "name";
fieldValue464.value = "sacrum";
ProtoInstance463.fieldValue = new MFNode();

ProtoInstance463.fieldValue[0] = fieldValue464;

let fieldValue465 = browser.currentScene.createNode("fieldValue");
fieldValue465.name = "children";
let ProtoInstance466 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance466.name = "Site";
ProtoInstance466.DEF = "hanim_r_asis_2";
let fieldValue467 = browser.currentScene.createNode("fieldValue");
fieldValue467.name = "name";
fieldValue467.value = "r_asis";
ProtoInstance466.fieldValue = new MFNode();

ProtoInstance466.fieldValue[0] = fieldValue467;

let fieldValue468 = browser.currentScene.createNode("fieldValue");
fieldValue468.name = "translation";
fieldValue468.value = "-0.088699996471405 1.00209999084473 0.111199997365475";
ProtoInstance466.fieldValue[1] = fieldValue468;

fieldValue465.children = new MFNode();

fieldValue465.children[0] = ProtoInstance466;

let ProtoInstance469 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance469.name = "Site";
ProtoInstance469.DEF = "hanim_l_asis_2";
let fieldValue470 = browser.currentScene.createNode("fieldValue");
fieldValue470.name = "name";
fieldValue470.value = "l_asis";
ProtoInstance469.fieldValue = new MFNode();

ProtoInstance469.fieldValue[0] = fieldValue470;

let fieldValue471 = browser.currentScene.createNode("fieldValue");
fieldValue471.name = "translation";
fieldValue471.value = "0.0925000011920929 0.998300015926361 0.105200000107288";
ProtoInstance469.fieldValue[1] = fieldValue471;

fieldValue465.children[1] = ProtoInstance469;

let ProtoInstance472 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance472.name = "Site";
ProtoInstance472.DEF = "hanim_r_iliocristale_2";
let fieldValue473 = browser.currentScene.createNode("fieldValue");
fieldValue473.name = "name";
fieldValue473.value = "r_iliocristale";
ProtoInstance472.fieldValue = new MFNode();

ProtoInstance472.fieldValue[0] = fieldValue473;

let fieldValue474 = browser.currentScene.createNode("fieldValue");
fieldValue474.name = "translation";
fieldValue474.value = "-0.152500003576279 1.0628000497818 0.00350000010803342";
ProtoInstance472.fieldValue[1] = fieldValue474;

fieldValue465.children[2] = ProtoInstance472;

let ProtoInstance475 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance475.name = "Site";
ProtoInstance475.DEF = "hanim_r_trochanterion_2";
let fieldValue476 = browser.currentScene.createNode("fieldValue");
fieldValue476.name = "name";
fieldValue476.value = "r_trochanterion";
ProtoInstance475.fieldValue = new MFNode();

ProtoInstance475.fieldValue[0] = fieldValue476;

let fieldValue477 = browser.currentScene.createNode("fieldValue");
fieldValue477.name = "translation";
fieldValue477.value = "-0.16889999806881 0.841899991035461 0.0351999998092651";
ProtoInstance475.fieldValue[1] = fieldValue477;

fieldValue465.children[3] = ProtoInstance475;

let ProtoInstance478 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance478.name = "Site";
ProtoInstance478.DEF = "hanim_l_iliocristale_2";
let fieldValue479 = browser.currentScene.createNode("fieldValue");
fieldValue479.name = "name";
fieldValue479.value = "l_iliocristale";
ProtoInstance478.fieldValue = new MFNode();

ProtoInstance478.fieldValue[0] = fieldValue479;

let fieldValue480 = browser.currentScene.createNode("fieldValue");
fieldValue480.name = "translation";
fieldValue480.value = "0.161200001835823 1.05369997024536 0.0007999999797903";
ProtoInstance478.fieldValue[1] = fieldValue480;

fieldValue465.children[4] = ProtoInstance478;

let ProtoInstance481 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance481.name = "Site";
ProtoInstance481.DEF = "hanim_l_trochanterion_2";
let fieldValue482 = browser.currentScene.createNode("fieldValue");
fieldValue482.name = "name";
fieldValue482.value = "l_trochanterion";
ProtoInstance481.fieldValue = new MFNode();

ProtoInstance481.fieldValue[0] = fieldValue482;

let fieldValue483 = browser.currentScene.createNode("fieldValue");
fieldValue483.name = "translation";
fieldValue483.value = "0.167699992656708 0.833599984645844 0.0303000006824732";
ProtoInstance481.fieldValue[1] = fieldValue483;

fieldValue465.children[5] = ProtoInstance481;

let ProtoInstance484 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance484.name = "Site";
ProtoInstance484.DEF = "hanim_r_psis_2";
let fieldValue485 = browser.currentScene.createNode("fieldValue");
fieldValue485.name = "name";
fieldValue485.value = "r_psis";
ProtoInstance484.fieldValue = new MFNode();

ProtoInstance484.fieldValue[0] = fieldValue485;

let fieldValue486 = browser.currentScene.createNode("fieldValue");
fieldValue486.name = "translation";
fieldValue486.value = "-0.0715999975800514 1.01900005340576 -0.113799996674061";
ProtoInstance484.fieldValue[1] = fieldValue486;

fieldValue465.children[6] = ProtoInstance484;

let ProtoInstance487 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance487.name = "Site";
ProtoInstance487.DEF = "hanim_l_psis_2";
let fieldValue488 = browser.currentScene.createNode("fieldValue");
fieldValue488.name = "name";
fieldValue488.value = "l_psis";
ProtoInstance487.fieldValue = new MFNode();

ProtoInstance487.fieldValue[0] = fieldValue488;

let fieldValue489 = browser.currentScene.createNode("fieldValue");
fieldValue489.name = "translation";
fieldValue489.value = "0.0773999989032745 1.01900005340576 -0.115099996328354";
ProtoInstance487.fieldValue[1] = fieldValue489;

fieldValue465.children[7] = ProtoInstance487;

let ProtoInstance490 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance490.name = "Site";
ProtoInstance490.DEF = "hanim_crotch_2";
let fieldValue491 = browser.currentScene.createNode("fieldValue");
fieldValue491.name = "name";
fieldValue491.value = "crotch";
ProtoInstance490.fieldValue = new MFNode();

ProtoInstance490.fieldValue[0] = fieldValue491;

let fieldValue492 = browser.currentScene.createNode("fieldValue");
fieldValue492.name = "translation";
fieldValue492.value = "0.00340000004507601 0.826600015163422 0.0256999991834164";
ProtoInstance490.fieldValue[1] = fieldValue492;

fieldValue465.children[8] = ProtoInstance490;

ProtoInstance463.fieldValue[1] = fieldValue465;

fieldValue113.children[2] = ProtoInstance463;

ProtoInstance109.fieldValue[3] = fieldValue113;

fieldValue108.children = new MFNode();

fieldValue108.children[0] = ProtoInstance109;

ProtoInstance107.fieldValue = new MFNode();

ProtoInstance107.fieldValue[0] = fieldValue108;

let fieldValue493 = browser.currentScene.createNode("fieldValue");
fieldValue493.name = "joints";
let ProtoInstance494 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance494.USE = "hanim_humanoid_root_2";
fieldValue493.children = new MFNode();

fieldValue493.children[0] = ProtoInstance494;

let ProtoInstance495 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance495.USE = "hanim_sacroiliac_2";
fieldValue493.children[1] = ProtoInstance495;

let ProtoInstance496 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance496.USE = "hanim_l_hip_2";
fieldValue493.children[2] = ProtoInstance496;

let ProtoInstance497 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance497.USE = "hanim_l_knee_2";
fieldValue493.children[3] = ProtoInstance497;

let ProtoInstance498 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance498.USE = "hanim_l_talocrural_2";
fieldValue493.children[4] = ProtoInstance498;

let ProtoInstance499 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance499.USE = "hanim_l_metatarsophalangeal__2";
fieldValue493.children[5] = ProtoInstance499;

let ProtoInstance500 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance500.USE = "hanim_r_hip_2";
fieldValue493.children[6] = ProtoInstance500;

let ProtoInstance501 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance501.USE = "hanim_r_knee_2";
fieldValue493.children[7] = ProtoInstance501;

let ProtoInstance502 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance502.USE = "hanim_r_talocrural_2";
fieldValue493.children[8] = ProtoInstance502;

let ProtoInstance503 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance503.USE = "hanim_r_metatarsophalangeal__2";
fieldValue493.children[9] = ProtoInstance503;

let ProtoInstance504 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance504.USE = "hanim_vl5_2";
fieldValue493.children[10] = ProtoInstance504;

let ProtoInstance505 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance505.USE = "hanim_skullbase_2";
fieldValue493.children[11] = ProtoInstance505;

let ProtoInstance506 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance506.USE = "hanim_l_shoulder_2";
fieldValue493.children[12] = ProtoInstance506;

let ProtoInstance507 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance507.USE = "hanim_l_elbow_2";
fieldValue493.children[13] = ProtoInstance507;

let ProtoInstance508 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance508.USE = "hanim_l_radiocarpal_2";
fieldValue493.children[14] = ProtoInstance508;

let ProtoInstance509 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance509.USE = "hanim_r_shoulder_2";
fieldValue493.children[15] = ProtoInstance509;

let ProtoInstance510 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance510.USE = "hanim_r_elbow_2";
fieldValue493.children[16] = ProtoInstance510;

let ProtoInstance511 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance511.USE = "hanim_r_radiocarpal_2";
fieldValue493.children[17] = ProtoInstance511;

ProtoInstance107.fieldValue[1] = fieldValue493;

let fieldValue512 = browser.currentScene.createNode("fieldValue");
fieldValue512.name = "segments";
let ProtoInstance513 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance513.USE = "hanim_l_middistal_2";
fieldValue512.children = new MFNode();

fieldValue512.children[0] = ProtoInstance513;

let ProtoInstance514 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance514.USE = "hanim_l_hindfoot_2";
fieldValue512.children[1] = ProtoInstance514;

let ProtoInstance515 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance515.USE = "hanim_l_calf_2";
fieldValue512.children[2] = ProtoInstance515;

let ProtoInstance516 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance516.USE = "hanim_l_thigh_2";
fieldValue512.children[3] = ProtoInstance516;

let ProtoInstance517 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance517.USE = "hanim_r_middistal_2";
fieldValue512.children[4] = ProtoInstance517;

let ProtoInstance518 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance518.USE = "hanim_r_hindfoot_2";
fieldValue512.children[5] = ProtoInstance518;

let ProtoInstance519 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance519.USE = "hanim_r_calf_2";
fieldValue512.children[6] = ProtoInstance519;

let ProtoInstance520 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance520.USE = "hanim_r_thigh_2";
fieldValue512.children[7] = ProtoInstance520;

let ProtoInstance521 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance521.USE = "hanim_pelvis_2";
fieldValue512.children[8] = ProtoInstance521;

let ProtoInstance522 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance522.USE = "hanim_skull_2";
fieldValue512.children[9] = ProtoInstance522;

let ProtoInstance523 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance523.USE = "hanim_l_hand_2";
fieldValue512.children[10] = ProtoInstance523;

let ProtoInstance524 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance524.USE = "hanim_l_forearm_2";
fieldValue512.children[11] = ProtoInstance524;

let ProtoInstance525 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance525.USE = "hanim_l_upperarm_2";
fieldValue512.children[12] = ProtoInstance525;

let ProtoInstance526 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance526.USE = "hanim_r_hand_2";
fieldValue512.children[13] = ProtoInstance526;

let ProtoInstance527 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance527.USE = "hanim_r_forearm_2";
fieldValue512.children[14] = ProtoInstance527;

let ProtoInstance528 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance528.USE = "hanim_r_upperarm_2";
fieldValue512.children[15] = ProtoInstance528;

let ProtoInstance529 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance529.USE = "hanim_l5_2";
fieldValue512.children[16] = ProtoInstance529;

let ProtoInstance530 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance530.USE = "hanim_sacrum_2";
fieldValue512.children[17] = ProtoInstance530;

ProtoInstance107.fieldValue[2] = fieldValue512;

let fieldValue531 = browser.currentScene.createNode("fieldValue");
fieldValue531.name = "sites";
let ProtoInstance532 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance532.USE = "hanim_l_middistal_tip_2";
fieldValue531.children = new MFNode();

fieldValue531.children[0] = ProtoInstance532;

let ProtoInstance533 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance533.USE = "hanim_l_tarsal_interphalangeal_phalanx6";
fieldValue531.children[1] = ProtoInstance533;

let ProtoInstance534 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance534.USE = "hanim_l_tarsal_interphalangeal_phalanx2";
fieldValue531.children[2] = ProtoInstance534;

let ProtoInstance535 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance535.USE = "hanim_l_tarsal_distal_phalanx3";
fieldValue531.children[3] = ProtoInstance535;

let ProtoInstance536 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance536.USE = "hanim_l_lateral_malleolus_2";
fieldValue531.children[4] = ProtoInstance536;

let ProtoInstance537 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance537.USE = "hanim_l_medial_malleolus_2";
fieldValue531.children[5] = ProtoInstance537;

let ProtoInstance538 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance538.USE = "hanim_l_sphyrion_2";
fieldValue531.children[6] = ProtoInstance538;

let ProtoInstance539 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance539.USE = "hanim_l_calcaneus_posterior_2";
fieldValue531.children[7] = ProtoInstance539;

let ProtoInstance540 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance540.USE = "hanim_l_knee_crease_2";
fieldValue531.children[8] = ProtoInstance540;

let ProtoInstance541 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance541.USE = "hanim_l_femoral_lateral_epicondyles_2";
fieldValue531.children[9] = ProtoInstance541;

let ProtoInstance542 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance542.USE = "hanim_l_femoral_medial_epicondyles_2";
fieldValue531.children[10] = ProtoInstance542;

let ProtoInstance543 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance543.USE = "hanim_r_middistal_tip_2";
fieldValue531.children[11] = ProtoInstance543;

let ProtoInstance544 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance544.USE = "hanim_r_tarsal_interphalangeal_phalanx6";
fieldValue531.children[12] = ProtoInstance544;

let ProtoInstance545 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance545.USE = "hanim_r_tarsal_interphalangeal_phalanx2";
fieldValue531.children[13] = ProtoInstance545;

let ProtoInstance546 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance546.USE = "hanim_r_tarsal_distal_phalanx3";
fieldValue531.children[14] = ProtoInstance546;

let ProtoInstance547 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance547.USE = "hanim_r_lateral_malleolus_2";
fieldValue531.children[15] = ProtoInstance547;

let ProtoInstance548 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance548.USE = "hanim_r_medial_malleolus_2";
fieldValue531.children[16] = ProtoInstance548;

let ProtoInstance549 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance549.USE = "hanim_r_sphyrion_2";
fieldValue531.children[17] = ProtoInstance549;

let ProtoInstance550 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance550.USE = "hanim_r_calcaneus_posterior_2";
fieldValue531.children[18] = ProtoInstance550;

let ProtoInstance551 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance551.USE = "hanim_r_knee_crease_2";
fieldValue531.children[19] = ProtoInstance551;

let ProtoInstance552 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance552.USE = "hanim_r_femoral_lateral_epicondyles_2";
fieldValue531.children[20] = ProtoInstance552;

let ProtoInstance553 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance553.USE = "hanim_r_femoral_medial_epicondyles_2";
fieldValue531.children[21] = ProtoInstance553;

let ProtoInstance554 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance554.USE = "hanim_skull_tip_2";
fieldValue531.children[22] = ProtoInstance554;

let ProtoInstance555 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance555.USE = "hanim_sellion_2";
fieldValue531.children[23] = ProtoInstance555;

let ProtoInstance556 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance556.USE = "hanim_r_infraorbitale_2";
fieldValue531.children[24] = ProtoInstance556;

let ProtoInstance557 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance557.USE = "hanim_l_infraorbitale_2";
fieldValue531.children[25] = ProtoInstance557;

let ProtoInstance558 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance558.USE = "hanim_supramenton_2";
fieldValue531.children[26] = ProtoInstance558;

let ProtoInstance559 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance559.USE = "hanim_r_tragion_2";
fieldValue531.children[27] = ProtoInstance559;

let ProtoInstance560 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance560.USE = "hanim_r_gonion_2";
fieldValue531.children[28] = ProtoInstance560;

let ProtoInstance561 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance561.USE = "hanim_l_tragion_2";
fieldValue531.children[29] = ProtoInstance561;

let ProtoInstance562 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance562.USE = "hanim_l_gonion_2";
fieldValue531.children[30] = ProtoInstance562;

let ProtoInstance563 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance563.USE = "hanim_nuchale_2";
fieldValue531.children[31] = ProtoInstance563;

let ProtoInstance564 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance564.USE = "hanim_l_hand_tip_2";
fieldValue531.children[32] = ProtoInstance564;

let ProtoInstance565 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance565.USE = "hanim_l_metacarpal_phalanx3";
fieldValue531.children[33] = ProtoInstance565;

let ProtoInstance566 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance566.USE = "hanim_l_dactylion_2";
fieldValue531.children[34] = ProtoInstance566;

let ProtoInstance567 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance567.USE = "hanim_l_ulnar_styloid_2";
fieldValue531.children[35] = ProtoInstance567;

let ProtoInstance568 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance568.USE = "hanim_l_metacarpal_phalanx6";
fieldValue531.children[36] = ProtoInstance568;

let ProtoInstance569 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance569.USE = "hanim_l_radial_styloid_2";
fieldValue531.children[37] = ProtoInstance569;

let ProtoInstance570 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance570.USE = "hanim_l_olecranon_2";
fieldValue531.children[38] = ProtoInstance570;

let ProtoInstance571 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance571.USE = "hanim_l_humeral_medial_epicondyles_2";
fieldValue531.children[39] = ProtoInstance571;

let ProtoInstance572 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance572.USE = "hanim_l_radiale_2";
fieldValue531.children[40] = ProtoInstance572;

let ProtoInstance573 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance573.USE = "hanim_l_humeral_lateral_epicondyles_2";
fieldValue531.children[41] = ProtoInstance573;

let ProtoInstance574 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance574.USE = "hanim_r_hand_tip_2";
fieldValue531.children[42] = ProtoInstance574;

let ProtoInstance575 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance575.USE = "hanim_r_metacarpal_phalanx3";
fieldValue531.children[43] = ProtoInstance575;

let ProtoInstance576 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance576.USE = "hanim_r_dactylion_2";
fieldValue531.children[44] = ProtoInstance576;

let ProtoInstance577 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance577.USE = "hanim_r_ulnar_styloid_2";
fieldValue531.children[45] = ProtoInstance577;

let ProtoInstance578 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance578.USE = "hanim_r_metacarpal_phalanx6";
fieldValue531.children[46] = ProtoInstance578;

let ProtoInstance579 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance579.USE = "hanim_r_radial_styloid_2";
fieldValue531.children[47] = ProtoInstance579;

let ProtoInstance580 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance580.USE = "hanim_r_olecranon_2";
fieldValue531.children[48] = ProtoInstance580;

let ProtoInstance581 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance581.USE = "hanim_r_humeral_medial_epicondyles_2";
fieldValue531.children[49] = ProtoInstance581;

let ProtoInstance582 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance582.USE = "hanim_r_radiale_2";
fieldValue531.children[50] = ProtoInstance582;

let ProtoInstance583 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance583.USE = "hanim_r_humeral_lateral_epicondyles_2";
fieldValue531.children[51] = ProtoInstance583;

let ProtoInstance584 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance584.USE = "hanim_r_clavicale_2";
fieldValue531.children[52] = ProtoInstance584;

let ProtoInstance585 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance585.USE = "hanim_suprasternale_2";
fieldValue531.children[53] = ProtoInstance585;

let ProtoInstance586 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance586.USE = "hanim_l_clavicale_2";
fieldValue531.children[54] = ProtoInstance586;

let ProtoInstance587 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance587.USE = "hanim_r_thelion_2";
fieldValue531.children[55] = ProtoInstance587;

let ProtoInstance588 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance588.USE = "hanim_l_thelion_2";
fieldValue531.children[56] = ProtoInstance588;

let ProtoInstance589 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance589.USE = "hanim_substernale_2";
fieldValue531.children[57] = ProtoInstance589;

let ProtoInstance590 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance590.USE = "hanim_r_rib10_2";
fieldValue531.children[58] = ProtoInstance590;

let ProtoInstance591 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance591.USE = "hanim_l_rib10_2";
fieldValue531.children[59] = ProtoInstance591;

let ProtoInstance592 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance592.USE = "hanim_cervicale_2";
fieldValue531.children[60] = ProtoInstance592;

let ProtoInstance593 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance593.USE = "hanim_spine_2_lower_back_2";
fieldValue531.children[61] = ProtoInstance593;

let ProtoInstance594 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance594.USE = "hanim_waist_preferred_posterior_2";
fieldValue531.children[62] = ProtoInstance594;

let ProtoInstance595 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance595.USE = "hanim_r_acromion_2";
fieldValue531.children[63] = ProtoInstance595;

let ProtoInstance596 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance596.USE = "hanim_r_axilla_proximal_2";
fieldValue531.children[64] = ProtoInstance596;

let ProtoInstance597 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance597.USE = "hanim_r_axilla_distal_2";
fieldValue531.children[65] = ProtoInstance597;

let ProtoInstance598 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance598.USE = "hanim_l_acromion_2";
fieldValue531.children[66] = ProtoInstance598;

let ProtoInstance599 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance599.USE = "hanim_l_axilla_proximal_2";
fieldValue531.children[67] = ProtoInstance599;

let ProtoInstance600 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance600.USE = "hanim_l_axilla_distal_2";
fieldValue531.children[68] = ProtoInstance600;

let ProtoInstance601 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance601.USE = "hanim_r_neck_base_2";
fieldValue531.children[69] = ProtoInstance601;

let ProtoInstance602 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance602.USE = "hanim_l_neck_base_2";
fieldValue531.children[70] = ProtoInstance602;

let ProtoInstance603 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance603.USE = "hanim_navel_2";
fieldValue531.children[71] = ProtoInstance603;

let ProtoInstance604 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance604.USE = "hanim_r_asis_2";
fieldValue531.children[72] = ProtoInstance604;

let ProtoInstance605 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance605.USE = "hanim_l_asis_2";
fieldValue531.children[73] = ProtoInstance605;

let ProtoInstance606 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance606.USE = "hanim_r_iliocristale_2";
fieldValue531.children[74] = ProtoInstance606;

let ProtoInstance607 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance607.USE = "hanim_r_trochanterion_2";
fieldValue531.children[75] = ProtoInstance607;

let ProtoInstance608 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance608.USE = "hanim_l_iliocristale_2";
fieldValue531.children[76] = ProtoInstance608;

let ProtoInstance609 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance609.USE = "hanim_l_trochanterion_2";
fieldValue531.children[77] = ProtoInstance609;

let ProtoInstance610 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance610.USE = "hanim_r_psis_2";
fieldValue531.children[78] = ProtoInstance610;

let ProtoInstance611 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance611.USE = "hanim_l_psis_2";
fieldValue531.children[79] = ProtoInstance611;

let ProtoInstance612 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance612.USE = "hanim_crotch_2";
fieldValue531.children[80] = ProtoInstance612;

ProtoInstance107.fieldValue[3] = fieldValue531;

let fieldValue613 = browser.currentScene.createNode("fieldValue");
fieldValue613.name = "name";
fieldValue613.value = "humanoid";
ProtoInstance107.fieldValue[4] = fieldValue613;

let fieldValue614 = browser.currentScene.createNode("fieldValue");
fieldValue614.name = "info";
fieldValue614.value = "\"authorName=Matthew T. Beitler\" \"authorEmail=beitler@cis.upenn.edu or beitler@acm.org\" \"creationDate=05/12/99\" \"copyright=Copyright 1999-2003, Matthew T. Beitler\" \"humanoidVersion=JointCenters 200x, LOA&#8209;1\" \"usageRestrictions= PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED, PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided 'as-is' and without warranty of any kind, express, implied or otherwise, including without limitation, any warranty of merchantability or fitness for a particular purpose.\" \"modificationDate=08/12/03\"";
ProtoInstance107.fieldValue[5] = fieldValue614;

browser.currentScene.children[4] = ProtoInstance107;

let Group615 = browser.currentScene.createNode("Group");
Group615.DEF = "JointCenters_WorldInfo";
let WorldInfo616 = browser.currentScene.createNode("WorldInfo");
WorldInfo616.title = "HANIM 200x Default Joint Centers, LOA&#8209;1";
WorldInfo616.info = new MFString(new java.lang.String[" HANIM 200x Default Joint Centers, Level-Of-Articulation 1 -------------------------------------------------------- HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://H-Anim.org/Specifications/H-Anim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human modelling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "]);
Group615.children = new MFNode();

Group615.children[0] = WorldInfo616;

browser.currentScene.children[5] = Group615;

let NavigationInfo617 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo617.avatarSize = new MFFloat(new float[0.25,1.60000002384186,0.75]);
NavigationInfo617.speed = 1.5;
browser.currentScene.children[6] = NavigationInfo617;

