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
ProtoInstance134.DEF = "hanim_l_tarsotarsal_interphalangeal__2";
let fieldValue135 = browser.currentScene.createNode("fieldValue");
fieldValue135.name = "stiffness";
fieldValue135.value = "1 1 1";
ProtoInstance134.fieldValue = new MFNode();

ProtoInstance134.fieldValue[0] = fieldValue135;

let fieldValue136 = browser.currentScene.createNode("fieldValue");
fieldValue136.name = "name";
fieldValue136.value = "l_tarsotarsal_interphalangeal_";
ProtoInstance134.fieldValue[1] = fieldValue136;

let fieldValue137 = browser.currentScene.createNode("fieldValue");
fieldValue137.name = "center";
fieldValue137.value = "0.108599998056889 0.0000999999974737875 -0.0368000008165836";
ProtoInstance134.fieldValue[2] = fieldValue137;

let fieldValue138 = browser.currentScene.createNode("fieldValue");
fieldValue138.name = "children";
let ProtoInstance139 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance139.name = "Joint";
ProtoInstance139.DEF = "hanim_l_metatarsophalangeal__2";
let fieldValue140 = browser.currentScene.createNode("fieldValue");
fieldValue140.name = "stiffness";
fieldValue140.value = "1 1 1";
ProtoInstance139.fieldValue = new MFNode();

ProtoInstance139.fieldValue[0] = fieldValue140;

let fieldValue141 = browser.currentScene.createNode("fieldValue");
fieldValue141.name = "name";
fieldValue141.value = "l_metatarsophalangeal_";
ProtoInstance139.fieldValue[1] = fieldValue141;

let fieldValue142 = browser.currentScene.createNode("fieldValue");
fieldValue142.name = "center";
fieldValue142.value = "0.108599998056889 0.0000999999974737875 0.0368000008165836";
ProtoInstance139.fieldValue[2] = fieldValue142;

let fieldValue143 = browser.currentScene.createNode("fieldValue");
fieldValue143.name = "children";
let ProtoInstance144 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance144.name = "Joint";
ProtoInstance144.DEF = "hanim_l_tarsal_interphalangeal__2";
let fieldValue145 = browser.currentScene.createNode("fieldValue");
fieldValue145.name = "stiffness";
fieldValue145.value = "1 1 1";
ProtoInstance144.fieldValue = new MFNode();

ProtoInstance144.fieldValue[0] = fieldValue145;

let fieldValue146 = browser.currentScene.createNode("fieldValue");
fieldValue146.name = "name";
fieldValue146.value = "l_tarsal_interphalangeal_";
ProtoInstance144.fieldValue[1] = fieldValue146;

let fieldValue147 = browser.currentScene.createNode("fieldValue");
fieldValue147.name = "center";
fieldValue147.value = "0.108599998056889 0 0.0762000009417534";
ProtoInstance144.fieldValue[2] = fieldValue147;

let fieldValue148 = browser.currentScene.createNode("fieldValue");
fieldValue148.name = "children";
let ProtoInstance149 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance149.name = "Segment";
ProtoInstance149.DEF = "hanim_l_tarsal_distal_phalanx2";
let fieldValue150 = browser.currentScene.createNode("fieldValue");
fieldValue150.name = "name";
fieldValue150.value = "l_tarsal_distal_phalanx_1";
ProtoInstance149.fieldValue = new MFNode();

ProtoInstance149.fieldValue[0] = fieldValue150;

let fieldValue151 = browser.currentScene.createNode("fieldValue");
fieldValue151.name = "children";
let ProtoInstance152 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance152.name = "Site";
ProtoInstance152.DEF = "hanim_l_tarsal_distal_phalanx_1_tip_2";
let fieldValue153 = browser.currentScene.createNode("fieldValue");
fieldValue153.name = "name";
fieldValue153.value = "l_tarsal_distal_phalanx_1_tip";
ProtoInstance152.fieldValue = new MFNode();

ProtoInstance152.fieldValue[0] = fieldValue153;

let fieldValue154 = browser.currentScene.createNode("fieldValue");
fieldValue154.name = "translation";
fieldValue154.value = "0.135399997234344 0.0015999999595806 0.147599995136261";
ProtoInstance152.fieldValue[1] = fieldValue154;

fieldValue151.children = new MFNode();

fieldValue151.children[0] = ProtoInstance152;

let ProtoInstance155 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance155.name = "Site";
ProtoInstance155.DEF = "hanim_l_tarsal_interphalangeal_phalanx6";
let fieldValue156 = browser.currentScene.createNode("fieldValue");
fieldValue156.name = "name";
fieldValue156.value = "l_tarsal_interphalangeal_phalanx_5";
ProtoInstance155.fieldValue = new MFNode();

ProtoInstance155.fieldValue[0] = fieldValue156;

let fieldValue157 = browser.currentScene.createNode("fieldValue");
fieldValue157.name = "translation";
fieldValue157.value = "0.182500004768372 0.00700000021606684 0.092799998819828";
ProtoInstance155.fieldValue[1] = fieldValue157;

fieldValue151.children[1] = ProtoInstance155;

let ProtoInstance158 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance158.name = "Site";
ProtoInstance158.DEF = "hanim_l_tarsal_distal_phalanx3";
let fieldValue159 = browser.currentScene.createNode("fieldValue");
fieldValue159.name = "name";
fieldValue159.value = "l_tarsal_distal_phalanx_2";
ProtoInstance158.fieldValue = new MFNode();

ProtoInstance158.fieldValue[0] = fieldValue159;

let fieldValue160 = browser.currentScene.createNode("fieldValue");
fieldValue160.name = "translation";
fieldValue160.value = "0.119499996304512 0.00789999961853027 0.143299996852875";
ProtoInstance158.fieldValue[1] = fieldValue160;

fieldValue151.children[2] = ProtoInstance158;

ProtoInstance149.fieldValue[1] = fieldValue151;

fieldValue148.children = new MFNode();

fieldValue148.children[0] = ProtoInstance149;

ProtoInstance144.fieldValue[3] = fieldValue148;

fieldValue143.children = new MFNode();

fieldValue143.children[0] = ProtoInstance144;

let ProtoInstance161 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance161.name = "Segment";
ProtoInstance161.DEF = "hanim_l_middistal_2";
let fieldValue162 = browser.currentScene.createNode("fieldValue");
fieldValue162.name = "name";
fieldValue162.value = "l_middistal";
ProtoInstance161.fieldValue = new MFNode();

ProtoInstance161.fieldValue[0] = fieldValue162;

let fieldValue163 = browser.currentScene.createNode("fieldValue");
fieldValue163.name = "children";
let ProtoInstance164 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance164.name = "Site";
ProtoInstance164.DEF = "hanim_l_tarsal_interphalangeal_phalanx2";
let fieldValue165 = browser.currentScene.createNode("fieldValue");
fieldValue165.name = "name";
fieldValue165.value = "l_tarsal_interphalangeal_phalanx_1";
ProtoInstance164.fieldValue = new MFNode();

ProtoInstance164.fieldValue[0] = fieldValue165;

let fieldValue166 = browser.currentScene.createNode("fieldValue");
fieldValue166.name = "translation";
fieldValue166.value = "0.0816000029444695 0.023199999704957 0.0105999996885657";
ProtoInstance164.fieldValue[1] = fieldValue166;

fieldValue163.children = new MFNode();

fieldValue163.children[0] = ProtoInstance164;

ProtoInstance161.fieldValue[1] = fieldValue163;

fieldValue143.children[1] = ProtoInstance161;

ProtoInstance139.fieldValue[3] = fieldValue143;

fieldValue138.children = new MFNode();

fieldValue138.children[0] = ProtoInstance139;

let ProtoInstance167 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance167.name = "Segment";
ProtoInstance167.DEF = "hanim_l_midproximal_2";
let fieldValue168 = browser.currentScene.createNode("fieldValue");
fieldValue168.name = "name";
fieldValue168.value = "l_midproximal";
ProtoInstance167.fieldValue = new MFNode();

ProtoInstance167.fieldValue[0] = fieldValue168;

fieldValue138.children[1] = ProtoInstance167;

ProtoInstance134.fieldValue[3] = fieldValue138;

fieldValue133.children = new MFNode();

fieldValue133.children[0] = ProtoInstance134;

let ProtoInstance169 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance169.name = "Segment";
ProtoInstance169.DEF = "hanim_l_hindfoot_2";
let fieldValue170 = browser.currentScene.createNode("fieldValue");
fieldValue170.name = "name";
fieldValue170.value = "l_hindfoot";
ProtoInstance169.fieldValue = new MFNode();

ProtoInstance169.fieldValue[0] = fieldValue170;

let fieldValue171 = browser.currentScene.createNode("fieldValue");
fieldValue171.name = "children";
let ProtoInstance172 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance172.name = "Site";
ProtoInstance172.DEF = "hanim_l_lateral_malleolus_2";
let fieldValue173 = browser.currentScene.createNode("fieldValue");
fieldValue173.name = "name";
fieldValue173.value = "l_lateral_malleolus";
ProtoInstance172.fieldValue = new MFNode();

ProtoInstance172.fieldValue[0] = fieldValue173;

let fieldValue174 = browser.currentScene.createNode("fieldValue");
fieldValue174.name = "translation";
fieldValue174.value = "0.130799993872643 0.0597000010311604 -0.103200003504753";
ProtoInstance172.fieldValue[1] = fieldValue174;

fieldValue171.children = new MFNode();

fieldValue171.children[0] = ProtoInstance172;

let ProtoInstance175 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance175.name = "Site";
ProtoInstance175.DEF = "hanim_l_medial_malleolus_2";
let fieldValue176 = browser.currentScene.createNode("fieldValue");
fieldValue176.name = "name";
fieldValue176.value = "l_medial_malleolus";
ProtoInstance175.fieldValue = new MFNode();

ProtoInstance175.fieldValue[0] = fieldValue176;

let fieldValue177 = browser.currentScene.createNode("fieldValue");
fieldValue177.name = "translation";
fieldValue177.value = "0.0890000015497208 0.0715999975800514 -0.0881000012159348";
ProtoInstance175.fieldValue[1] = fieldValue177;

fieldValue171.children[1] = ProtoInstance175;

let ProtoInstance178 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance178.name = "Site";
ProtoInstance178.DEF = "hanim_l_sphyrion_2";
let fieldValue179 = browser.currentScene.createNode("fieldValue");
fieldValue179.name = "name";
fieldValue179.value = "l_sphyrion";
ProtoInstance178.fieldValue = new MFNode();

ProtoInstance178.fieldValue[0] = fieldValue179;

let fieldValue180 = browser.currentScene.createNode("fieldValue");
fieldValue180.name = "translation";
fieldValue180.value = "0.0890000015497208 0.0575000010430813 -0.0943000018596649";
ProtoInstance178.fieldValue[1] = fieldValue180;

fieldValue171.children[2] = ProtoInstance178;

let ProtoInstance181 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance181.name = "Site";
ProtoInstance181.DEF = "hanim_l_calcaneus_posterior_2";
let fieldValue182 = browser.currentScene.createNode("fieldValue");
fieldValue182.name = "name";
fieldValue182.value = "l_calcaneus_posterior";
ProtoInstance181.fieldValue = new MFNode();

ProtoInstance181.fieldValue[0] = fieldValue182;

let fieldValue183 = browser.currentScene.createNode("fieldValue");
fieldValue183.name = "translation";
fieldValue183.value = "0.09740000218153 0.025900000706315 -0.11710000038147";
ProtoInstance181.fieldValue[1] = fieldValue183;

fieldValue171.children[3] = ProtoInstance181;

ProtoInstance169.fieldValue[1] = fieldValue171;

fieldValue133.children[1] = ProtoInstance169;

ProtoInstance129.fieldValue[3] = fieldValue133;

fieldValue128.children = new MFNode();

fieldValue128.children[0] = ProtoInstance129;

let ProtoInstance184 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance184.name = "Segment";
ProtoInstance184.DEF = "hanim_l_calf_2";
let fieldValue185 = browser.currentScene.createNode("fieldValue");
fieldValue185.name = "name";
fieldValue185.value = "l_calf";
ProtoInstance184.fieldValue = new MFNode();

ProtoInstance184.fieldValue[0] = fieldValue185;

fieldValue128.children[1] = ProtoInstance184;

ProtoInstance124.fieldValue[3] = fieldValue128;

fieldValue123.children = new MFNode();

fieldValue123.children[0] = ProtoInstance124;

let ProtoInstance186 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance186.name = "Segment";
ProtoInstance186.DEF = "hanim_l_thigh_2";
let fieldValue187 = browser.currentScene.createNode("fieldValue");
fieldValue187.name = "name";
fieldValue187.value = "l_thigh";
ProtoInstance186.fieldValue = new MFNode();

ProtoInstance186.fieldValue[0] = fieldValue187;

let fieldValue188 = browser.currentScene.createNode("fieldValue");
fieldValue188.name = "children";
let ProtoInstance189 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance189.name = "Site";
ProtoInstance189.DEF = "hanim_l_knee_crease_2";
let fieldValue190 = browser.currentScene.createNode("fieldValue");
fieldValue190.name = "name";
fieldValue190.value = "l_knee_crease";
ProtoInstance189.fieldValue = new MFNode();

ProtoInstance189.fieldValue[0] = fieldValue190;

let fieldValue191 = browser.currentScene.createNode("fieldValue");
fieldValue191.name = "translation";
fieldValue191.value = "0.0992999970912933 0.488099992275238 -0.0308999996632338";
ProtoInstance189.fieldValue[1] = fieldValue191;

fieldValue188.children = new MFNode();

fieldValue188.children[0] = ProtoInstance189;

let ProtoInstance192 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance192.name = "Site";
ProtoInstance192.DEF = "hanim_l_femoral_lateral_epicondyles_2";
let fieldValue193 = browser.currentScene.createNode("fieldValue");
fieldValue193.name = "name";
fieldValue193.value = "l_femoral_lateral_epicondyles";
ProtoInstance192.fieldValue = new MFNode();

ProtoInstance192.fieldValue[0] = fieldValue193;

let fieldValue194 = browser.currentScene.createNode("fieldValue");
fieldValue194.name = "translation";
fieldValue194.value = "0.159799993038177 0.496699988842011 0.0296999998390675";
ProtoInstance192.fieldValue[1] = fieldValue194;

fieldValue188.children[1] = ProtoInstance192;

let ProtoInstance195 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance195.name = "Site";
ProtoInstance195.DEF = "hanim_l_femoral_medial_epicondyles_2";
let fieldValue196 = browser.currentScene.createNode("fieldValue");
fieldValue196.name = "name";
fieldValue196.value = "l_femoral_lateral_epicondyles";
ProtoInstance195.fieldValue = new MFNode();

ProtoInstance195.fieldValue[0] = fieldValue196;

let fieldValue197 = browser.currentScene.createNode("fieldValue");
fieldValue197.name = "translation";
fieldValue197.value = "0.0397999994456768 0.494599997997284 0.0303000006824732";
ProtoInstance195.fieldValue[1] = fieldValue197;

fieldValue188.children[2] = ProtoInstance195;

ProtoInstance186.fieldValue[1] = fieldValue188;

fieldValue123.children[1] = ProtoInstance186;

ProtoInstance119.fieldValue[3] = fieldValue123;

fieldValue118.children = new MFNode();

fieldValue118.children[0] = ProtoInstance119;

let ProtoInstance198 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance198.name = "Joint";
ProtoInstance198.DEF = "hanim_r_hip_2";
let fieldValue199 = browser.currentScene.createNode("fieldValue");
fieldValue199.name = "stiffness";
fieldValue199.value = "1 1 1";
ProtoInstance198.fieldValue = new MFNode();

ProtoInstance198.fieldValue[0] = fieldValue199;

let fieldValue200 = browser.currentScene.createNode("fieldValue");
fieldValue200.name = "name";
fieldValue200.value = "r_hip";
ProtoInstance198.fieldValue[1] = fieldValue200;

let fieldValue201 = browser.currentScene.createNode("fieldValue");
fieldValue201.name = "center";
fieldValue201.value = "-0.0949999988079071 0.917100012302399 0.00289999996311963";
ProtoInstance198.fieldValue[2] = fieldValue201;

let fieldValue202 = browser.currentScene.createNode("fieldValue");
fieldValue202.name = "children";
let ProtoInstance203 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance203.name = "Joint";
ProtoInstance203.DEF = "hanim_r_knee_2";
let fieldValue204 = browser.currentScene.createNode("fieldValue");
fieldValue204.name = "stiffness";
fieldValue204.value = "1 1 1";
ProtoInstance203.fieldValue = new MFNode();

ProtoInstance203.fieldValue[0] = fieldValue204;

let fieldValue205 = browser.currentScene.createNode("fieldValue");
fieldValue205.name = "name";
fieldValue205.value = "r_knee";
ProtoInstance203.fieldValue[1] = fieldValue205;

let fieldValue206 = browser.currentScene.createNode("fieldValue");
fieldValue206.name = "center";
fieldValue206.value = "-0.0866999998688698 0.491299986839294 0.0318000018596649";
ProtoInstance203.fieldValue[2] = fieldValue206;

let fieldValue207 = browser.currentScene.createNode("fieldValue");
fieldValue207.name = "children";
let ProtoInstance208 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance208.name = "Joint";
ProtoInstance208.DEF = "hanim_r_talocrural_2";
let fieldValue209 = browser.currentScene.createNode("fieldValue");
fieldValue209.name = "stiffness";
fieldValue209.value = "1 1 1";
ProtoInstance208.fieldValue = new MFNode();

ProtoInstance208.fieldValue[0] = fieldValue209;

let fieldValue210 = browser.currentScene.createNode("fieldValue");
fieldValue210.name = "name";
fieldValue210.value = "r_talocrural";
ProtoInstance208.fieldValue[1] = fieldValue210;

let fieldValue211 = browser.currentScene.createNode("fieldValue");
fieldValue211.name = "center";
fieldValue211.value = "-0.0800999999046326 0.0711999982595444 -0.0766000002622604";
ProtoInstance208.fieldValue[2] = fieldValue211;

let fieldValue212 = browser.currentScene.createNode("fieldValue");
fieldValue212.name = "children";
let ProtoInstance213 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance213.name = "Joint";
ProtoInstance213.DEF = "hanim_r_tarsotarsal_interphalangeal__2";
let fieldValue214 = browser.currentScene.createNode("fieldValue");
fieldValue214.name = "stiffness";
fieldValue214.value = "1 1 1";
ProtoInstance213.fieldValue = new MFNode();

ProtoInstance213.fieldValue[0] = fieldValue214;

let fieldValue215 = browser.currentScene.createNode("fieldValue");
fieldValue215.name = "name";
fieldValue215.value = "r_tarsotarsal_interphalangeal_";
ProtoInstance213.fieldValue[1] = fieldValue215;

let fieldValue216 = browser.currentScene.createNode("fieldValue");
fieldValue216.name = "center";
fieldValue216.value = "-0.0800999999046326 0 -0.0368000008165836";
ProtoInstance213.fieldValue[2] = fieldValue216;

let fieldValue217 = browser.currentScene.createNode("fieldValue");
fieldValue217.name = "children";
let ProtoInstance218 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance218.name = "Joint";
ProtoInstance218.DEF = "hanim_r_metatarsophalangeal__2";
let fieldValue219 = browser.currentScene.createNode("fieldValue");
fieldValue219.name = "stiffness";
fieldValue219.value = "1 1 1";
ProtoInstance218.fieldValue = new MFNode();

ProtoInstance218.fieldValue[0] = fieldValue219;

let fieldValue220 = browser.currentScene.createNode("fieldValue");
fieldValue220.name = "name";
fieldValue220.value = "r_metatarsophalangeal_";
ProtoInstance218.fieldValue[1] = fieldValue220;

let fieldValue221 = browser.currentScene.createNode("fieldValue");
fieldValue221.name = "center";
fieldValue221.value = "-0.0800999999046326 0 0.0368000008165836";
ProtoInstance218.fieldValue[2] = fieldValue221;

let fieldValue222 = browser.currentScene.createNode("fieldValue");
fieldValue222.name = "children";
let ProtoInstance223 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance223.name = "Joint";
ProtoInstance223.DEF = "hanim_r_tarsal_interphalangeal__2";
let fieldValue224 = browser.currentScene.createNode("fieldValue");
fieldValue224.name = "stiffness";
fieldValue224.value = "1 1 1";
ProtoInstance223.fieldValue = new MFNode();

ProtoInstance223.fieldValue[0] = fieldValue224;

let fieldValue225 = browser.currentScene.createNode("fieldValue");
fieldValue225.name = "name";
fieldValue225.value = "r_tarsal_interphalangeal_";
ProtoInstance223.fieldValue[1] = fieldValue225;

let fieldValue226 = browser.currentScene.createNode("fieldValue");
fieldValue226.name = "center";
fieldValue226.value = "-0.0800999999046326 0.00389999989420176 0.0732000023126602";
ProtoInstance223.fieldValue[2] = fieldValue226;

let fieldValue227 = browser.currentScene.createNode("fieldValue");
fieldValue227.name = "children";
let ProtoInstance228 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance228.name = "Segment";
ProtoInstance228.DEF = "hanim_r_tarsal_distal_phalanx2";
let fieldValue229 = browser.currentScene.createNode("fieldValue");
fieldValue229.name = "name";
fieldValue229.value = "r_tarsal_distal_phalanx_1";
ProtoInstance228.fieldValue = new MFNode();

ProtoInstance228.fieldValue[0] = fieldValue229;

let fieldValue230 = browser.currentScene.createNode("fieldValue");
fieldValue230.name = "children";
let ProtoInstance231 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance231.name = "Site";
ProtoInstance231.DEF = "hanim_r_tarsal_distal_phalanx_1_tip_2";
let fieldValue232 = browser.currentScene.createNode("fieldValue");
fieldValue232.name = "name";
fieldValue232.value = "r_tarsal_distal_phalanx_1_tip";
ProtoInstance231.fieldValue = new MFNode();

ProtoInstance231.fieldValue[0] = fieldValue232;

let fieldValue233 = browser.currentScene.createNode("fieldValue");
fieldValue233.name = "translation";
fieldValue233.value = "-0.104299999773502 -0.0227000005543232 0.144999995827675";
ProtoInstance231.fieldValue[1] = fieldValue233;

fieldValue230.children = new MFNode();

fieldValue230.children[0] = ProtoInstance231;

let ProtoInstance234 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance234.name = "Site";
ProtoInstance234.DEF = "hanim_r_tarsal_interphalangeal_phalanx6";
let fieldValue235 = browser.currentScene.createNode("fieldValue");
fieldValue235.name = "name";
fieldValue235.value = "r_tarsal_interphalangeal_phalanx_5";
ProtoInstance234.fieldValue = new MFNode();

ProtoInstance234.fieldValue[0] = fieldValue235;

let fieldValue236 = browser.currentScene.createNode("fieldValue");
fieldValue236.name = "translation";
fieldValue236.value = "-0.152300000190735 0.0165999997407198 0.0895000025629997";
ProtoInstance234.fieldValue[1] = fieldValue236;

fieldValue230.children[1] = ProtoInstance234;

let ProtoInstance237 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance237.name = "Site";
ProtoInstance237.DEF = "hanim_r_tarsal_distal_phalanx3";
let fieldValue238 = browser.currentScene.createNode("fieldValue");
fieldValue238.name = "name";
fieldValue238.value = "r_tarsal_distal_phalanx_2";
ProtoInstance237.fieldValue = new MFNode();

ProtoInstance237.fieldValue[0] = fieldValue238;

let fieldValue239 = browser.currentScene.createNode("fieldValue");
fieldValue239.name = "translation";
fieldValue239.value = "-0.088299997150898 0.013399999588728 0.138300001621246";
ProtoInstance237.fieldValue[1] = fieldValue239;

fieldValue230.children[2] = ProtoInstance237;

ProtoInstance228.fieldValue[1] = fieldValue230;

fieldValue227.children = new MFNode();

fieldValue227.children[0] = ProtoInstance228;

ProtoInstance223.fieldValue[3] = fieldValue227;

fieldValue222.children = new MFNode();

fieldValue222.children[0] = ProtoInstance223;

let ProtoInstance240 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance240.name = "Segment";
ProtoInstance240.DEF = "hanim_r_middistal_2";
let fieldValue241 = browser.currentScene.createNode("fieldValue");
fieldValue241.name = "name";
fieldValue241.value = "r_middistal";
ProtoInstance240.fieldValue = new MFNode();

ProtoInstance240.fieldValue[0] = fieldValue241;

let fieldValue242 = browser.currentScene.createNode("fieldValue");
fieldValue242.name = "children";
let ProtoInstance243 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance243.name = "Site";
ProtoInstance243.DEF = "hanim_r_tarsal_interphalangeal_phalanx2";
let fieldValue244 = browser.currentScene.createNode("fieldValue");
fieldValue244.name = "name";
fieldValue244.value = "r_tarsal_interphalangeal_phalanx_1";
ProtoInstance243.fieldValue = new MFNode();

ProtoInstance243.fieldValue[0] = fieldValue244;

let fieldValue245 = browser.currentScene.createNode("fieldValue");
fieldValue245.name = "translation";
fieldValue245.value = "-0.0520999990403652 0.0260000005364418 0.012699999846518";
ProtoInstance243.fieldValue[1] = fieldValue245;

fieldValue242.children = new MFNode();

fieldValue242.children[0] = ProtoInstance243;

ProtoInstance240.fieldValue[1] = fieldValue242;

fieldValue222.children[1] = ProtoInstance240;

ProtoInstance218.fieldValue[3] = fieldValue222;

fieldValue217.children = new MFNode();

fieldValue217.children[0] = ProtoInstance218;

let ProtoInstance246 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance246.name = "Segment";
ProtoInstance246.DEF = "hanim_r_midproximal_2";
let fieldValue247 = browser.currentScene.createNode("fieldValue");
fieldValue247.name = "name";
fieldValue247.value = "r_midproximal";
ProtoInstance246.fieldValue = new MFNode();

ProtoInstance246.fieldValue[0] = fieldValue247;

fieldValue217.children[1] = ProtoInstance246;

ProtoInstance213.fieldValue[3] = fieldValue217;

fieldValue212.children = new MFNode();

fieldValue212.children[0] = ProtoInstance213;

let ProtoInstance248 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance248.name = "Segment";
ProtoInstance248.DEF = "hanim_r_hindfoot_2";
let fieldValue249 = browser.currentScene.createNode("fieldValue");
fieldValue249.name = "name";
fieldValue249.value = "r_hindfoot";
ProtoInstance248.fieldValue = new MFNode();

ProtoInstance248.fieldValue[0] = fieldValue249;

let fieldValue250 = browser.currentScene.createNode("fieldValue");
fieldValue250.name = "children";
let ProtoInstance251 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance251.name = "Site";
ProtoInstance251.DEF = "hanim_r_lateral_malleolus_2";
let fieldValue252 = browser.currentScene.createNode("fieldValue");
fieldValue252.name = "name";
fieldValue252.value = "r_lateral_malleolus";
ProtoInstance251.fieldValue = new MFNode();

ProtoInstance251.fieldValue[0] = fieldValue252;

let fieldValue253 = browser.currentScene.createNode("fieldValue");
fieldValue253.name = "translation";
fieldValue253.value = "-0.100599996745586 0.0658000037074089 -0.107500001788139";
ProtoInstance251.fieldValue[1] = fieldValue253;

fieldValue250.children = new MFNode();

fieldValue250.children[0] = ProtoInstance251;

let ProtoInstance254 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance254.name = "Site";
ProtoInstance254.DEF = "hanim_r_medial_malleolus_2";
let fieldValue255 = browser.currentScene.createNode("fieldValue");
fieldValue255.name = "name";
fieldValue255.value = "r_medial_malleolus";
ProtoInstance254.fieldValue = new MFNode();

ProtoInstance254.fieldValue[0] = fieldValue255;

let fieldValue256 = browser.currentScene.createNode("fieldValue");
fieldValue256.name = "translation";
fieldValue256.value = "-0.0590999983251095 0.0759999975562096 -0.092799998819828";
ProtoInstance254.fieldValue[1] = fieldValue256;

fieldValue250.children[1] = ProtoInstance254;

let ProtoInstance257 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance257.name = "Site";
ProtoInstance257.DEF = "hanim_r_sphyrion_2";
let fieldValue258 = browser.currentScene.createNode("fieldValue");
fieldValue258.name = "name";
fieldValue258.value = "r_sphyrion";
ProtoInstance257.fieldValue = new MFNode();

ProtoInstance257.fieldValue[0] = fieldValue258;

let fieldValue259 = browser.currentScene.createNode("fieldValue");
fieldValue259.name = "translation";
fieldValue259.value = "-0.0603000000119209 0.0610000006854534 -0.100199997425079";
ProtoInstance257.fieldValue[1] = fieldValue259;

fieldValue250.children[2] = ProtoInstance257;

let ProtoInstance260 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance260.name = "Site";
ProtoInstance260.DEF = "hanim_r_calcaneus_posterior_2";
let fieldValue261 = browser.currentScene.createNode("fieldValue");
fieldValue261.name = "name";
fieldValue261.value = "r_calcaneus_posterior";
ProtoInstance260.fieldValue = new MFNode();

ProtoInstance260.fieldValue[0] = fieldValue261;

let fieldValue262 = browser.currentScene.createNode("fieldValue");
fieldValue262.name = "translation";
fieldValue262.value = "-0.0692000016570091 0.0296999998390675 -0.122100003063679";
ProtoInstance260.fieldValue[1] = fieldValue262;

fieldValue250.children[3] = ProtoInstance260;

ProtoInstance248.fieldValue[1] = fieldValue250;

fieldValue212.children[1] = ProtoInstance248;

ProtoInstance208.fieldValue[3] = fieldValue212;

fieldValue207.children = new MFNode();

fieldValue207.children[0] = ProtoInstance208;

let ProtoInstance263 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance263.name = "Segment";
ProtoInstance263.DEF = "hanim_r_calf_2";
let fieldValue264 = browser.currentScene.createNode("fieldValue");
fieldValue264.name = "name";
fieldValue264.value = "r_calf";
ProtoInstance263.fieldValue = new MFNode();

ProtoInstance263.fieldValue[0] = fieldValue264;

fieldValue207.children[1] = ProtoInstance263;

ProtoInstance203.fieldValue[3] = fieldValue207;

fieldValue202.children = new MFNode();

fieldValue202.children[0] = ProtoInstance203;

let ProtoInstance265 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance265.name = "Segment";
ProtoInstance265.DEF = "hanim_r_thigh_2";
let fieldValue266 = browser.currentScene.createNode("fieldValue");
fieldValue266.name = "name";
fieldValue266.value = "r_thigh";
ProtoInstance265.fieldValue = new MFNode();

ProtoInstance265.fieldValue[0] = fieldValue266;

let fieldValue267 = browser.currentScene.createNode("fieldValue");
fieldValue267.name = "children";
let ProtoInstance268 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance268.name = "Site";
ProtoInstance268.DEF = "hanim_r_knee_crease_2";
let fieldValue269 = browser.currentScene.createNode("fieldValue");
fieldValue269.name = "name";
fieldValue269.value = "r_knee_crease";
ProtoInstance268.fieldValue = new MFNode();

ProtoInstance268.fieldValue[0] = fieldValue269;

let fieldValue270 = browser.currentScene.createNode("fieldValue");
fieldValue270.name = "translation";
fieldValue270.value = "-0.0825000032782555 0.4932000041008 -0.032600000500679";
ProtoInstance268.fieldValue[1] = fieldValue270;

fieldValue267.children = new MFNode();

fieldValue267.children[0] = ProtoInstance268;

let ProtoInstance271 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance271.name = "Site";
ProtoInstance271.DEF = "hanim_r_femoral_lateral_epicondyles_2";
let fieldValue272 = browser.currentScene.createNode("fieldValue");
fieldValue272.name = "name";
fieldValue272.value = "r_femoral_lateral_epicondyles";
ProtoInstance271.fieldValue = new MFNode();

ProtoInstance271.fieldValue[0] = fieldValue272;

let fieldValue273 = browser.currentScene.createNode("fieldValue");
fieldValue273.name = "translation";
fieldValue273.value = "-0.142100006341934 0.499199986457825 0.0309999994933605";
ProtoInstance271.fieldValue[1] = fieldValue273;

fieldValue267.children[1] = ProtoInstance271;

let ProtoInstance274 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance274.name = "Site";
ProtoInstance274.DEF = "hanim_r_femoral_medial_epicondyles_2";
let fieldValue275 = browser.currentScene.createNode("fieldValue");
fieldValue275.name = "name";
fieldValue275.value = "r_femoral_lateral_epicondyles";
ProtoInstance274.fieldValue = new MFNode();

ProtoInstance274.fieldValue[0] = fieldValue275;

let fieldValue276 = browser.currentScene.createNode("fieldValue");
fieldValue276.name = "translation";
fieldValue276.value = "-0.0220999997109175 0.501399993896484 0.0288999993354082";
ProtoInstance274.fieldValue[1] = fieldValue276;

fieldValue267.children[2] = ProtoInstance274;

ProtoInstance265.fieldValue[1] = fieldValue267;

fieldValue202.children[1] = ProtoInstance265;

ProtoInstance198.fieldValue[3] = fieldValue202;

fieldValue118.children[1] = ProtoInstance198;

let ProtoInstance277 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance277.name = "Segment";
ProtoInstance277.DEF = "hanim_pelvis_2";
let fieldValue278 = browser.currentScene.createNode("fieldValue");
fieldValue278.name = "name";
fieldValue278.value = "pelvis";
ProtoInstance277.fieldValue = new MFNode();

ProtoInstance277.fieldValue[0] = fieldValue278;

let fieldValue279 = browser.currentScene.createNode("fieldValue");
fieldValue279.name = "children";
let ProtoInstance280 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance280.name = "Site";
ProtoInstance280.DEF = "hanim_r_iliocristale_2";
let fieldValue281 = browser.currentScene.createNode("fieldValue");
fieldValue281.name = "name";
fieldValue281.value = "r_iliocristale";
ProtoInstance280.fieldValue = new MFNode();

ProtoInstance280.fieldValue[0] = fieldValue281;

let fieldValue282 = browser.currentScene.createNode("fieldValue");
fieldValue282.name = "translation";
fieldValue282.value = "-0.152500003576279 1.0628000497818 0.00350000010803342";
ProtoInstance280.fieldValue[1] = fieldValue282;

fieldValue279.children = new MFNode();

fieldValue279.children[0] = ProtoInstance280;

let ProtoInstance283 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance283.name = "Site";
ProtoInstance283.DEF = "hanim_r_trochanterion_2";
let fieldValue284 = browser.currentScene.createNode("fieldValue");
fieldValue284.name = "name";
fieldValue284.value = "r_trochanterion";
ProtoInstance283.fieldValue = new MFNode();

ProtoInstance283.fieldValue[0] = fieldValue284;

let fieldValue285 = browser.currentScene.createNode("fieldValue");
fieldValue285.name = "translation";
fieldValue285.value = "-0.16889999806881 0.841899991035461 0.0351999998092651";
ProtoInstance283.fieldValue[1] = fieldValue285;

fieldValue279.children[1] = ProtoInstance283;

let ProtoInstance286 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance286.name = "Site";
ProtoInstance286.DEF = "hanim_l_iliocristale_2";
let fieldValue287 = browser.currentScene.createNode("fieldValue");
fieldValue287.name = "name";
fieldValue287.value = "l_iliocristale";
ProtoInstance286.fieldValue = new MFNode();

ProtoInstance286.fieldValue[0] = fieldValue287;

let fieldValue288 = browser.currentScene.createNode("fieldValue");
fieldValue288.name = "translation";
fieldValue288.value = "0.161200001835823 1.05369997024536 0.0007999999797903";
ProtoInstance286.fieldValue[1] = fieldValue288;

fieldValue279.children[2] = ProtoInstance286;

let ProtoInstance289 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance289.name = "Site";
ProtoInstance289.DEF = "hanim_l_trochanterion_2";
let fieldValue290 = browser.currentScene.createNode("fieldValue");
fieldValue290.name = "name";
fieldValue290.value = "l_trochanterion";
ProtoInstance289.fieldValue = new MFNode();

ProtoInstance289.fieldValue[0] = fieldValue290;

let fieldValue291 = browser.currentScene.createNode("fieldValue");
fieldValue291.name = "translation";
fieldValue291.value = "0.167699992656708 0.833599984645844 0.0303000006824732";
ProtoInstance289.fieldValue[1] = fieldValue291;

fieldValue279.children[3] = ProtoInstance289;

let ProtoInstance292 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance292.name = "Site";
ProtoInstance292.DEF = "hanim_r_asis_2";
let fieldValue293 = browser.currentScene.createNode("fieldValue");
fieldValue293.name = "name";
fieldValue293.value = "r_asis";
ProtoInstance292.fieldValue = new MFNode();

ProtoInstance292.fieldValue[0] = fieldValue293;

let fieldValue294 = browser.currentScene.createNode("fieldValue");
fieldValue294.name = "translation";
fieldValue294.value = "-0.088699996471405 1.00209999084473 0.111199997365475";
ProtoInstance292.fieldValue[1] = fieldValue294;

fieldValue279.children[4] = ProtoInstance292;

let ProtoInstance295 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance295.name = "Site";
ProtoInstance295.DEF = "hanim_l_asis_2";
let fieldValue296 = browser.currentScene.createNode("fieldValue");
fieldValue296.name = "name";
fieldValue296.value = "l_asis";
ProtoInstance295.fieldValue = new MFNode();

ProtoInstance295.fieldValue[0] = fieldValue296;

let fieldValue297 = browser.currentScene.createNode("fieldValue");
fieldValue297.name = "translation";
fieldValue297.value = "0.0925000011920929 0.998300015926361 0.105200000107288";
ProtoInstance295.fieldValue[1] = fieldValue297;

fieldValue279.children[5] = ProtoInstance295;

let ProtoInstance298 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance298.name = "Site";
ProtoInstance298.DEF = "hanim_r_psis_2";
let fieldValue299 = browser.currentScene.createNode("fieldValue");
fieldValue299.name = "name";
fieldValue299.value = "r_psis";
ProtoInstance298.fieldValue = new MFNode();

ProtoInstance298.fieldValue[0] = fieldValue299;

let fieldValue300 = browser.currentScene.createNode("fieldValue");
fieldValue300.name = "translation";
fieldValue300.value = "-0.0715999975800514 1.01900005340576 -0.113799996674061";
ProtoInstance298.fieldValue[1] = fieldValue300;

fieldValue279.children[6] = ProtoInstance298;

let ProtoInstance301 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance301.name = "Site";
ProtoInstance301.DEF = "hanim_l_psis_2";
let fieldValue302 = browser.currentScene.createNode("fieldValue");
fieldValue302.name = "name";
fieldValue302.value = "l_psis";
ProtoInstance301.fieldValue = new MFNode();

ProtoInstance301.fieldValue[0] = fieldValue302;

let fieldValue303 = browser.currentScene.createNode("fieldValue");
fieldValue303.name = "translation";
fieldValue303.value = "0.0773999989032745 1.01900005340576 -0.115099996328354";
ProtoInstance301.fieldValue[1] = fieldValue303;

fieldValue279.children[7] = ProtoInstance301;

let ProtoInstance304 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance304.name = "Site";
ProtoInstance304.DEF = "hanim_crotch_2";
let fieldValue305 = browser.currentScene.createNode("fieldValue");
fieldValue305.name = "name";
fieldValue305.value = "crotch";
ProtoInstance304.fieldValue = new MFNode();

ProtoInstance304.fieldValue[0] = fieldValue305;

let fieldValue306 = browser.currentScene.createNode("fieldValue");
fieldValue306.name = "translation";
fieldValue306.value = "0.00340000004507601 0.826600015163422 0.0256999991834164";
ProtoInstance304.fieldValue[1] = fieldValue306;

fieldValue279.children[8] = ProtoInstance304;

ProtoInstance277.fieldValue[1] = fieldValue279;

fieldValue118.children[2] = ProtoInstance277;

ProtoInstance114.fieldValue[3] = fieldValue118;

fieldValue113.children = new MFNode();

fieldValue113.children[0] = ProtoInstance114;

let ProtoInstance307 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance307.name = "Joint";
ProtoInstance307.DEF = "hanim_vl5_2";
let fieldValue308 = browser.currentScene.createNode("fieldValue");
fieldValue308.name = "stiffness";
fieldValue308.value = "1 1 1";
ProtoInstance307.fieldValue = new MFNode();

ProtoInstance307.fieldValue[0] = fieldValue308;

let fieldValue309 = browser.currentScene.createNode("fieldValue");
fieldValue309.name = "name";
fieldValue309.value = "vl5";
ProtoInstance307.fieldValue[1] = fieldValue309;

let fieldValue310 = browser.currentScene.createNode("fieldValue");
fieldValue310.name = "center";
fieldValue310.value = "0.00279999990016222 1.05680000782013 -0.0776000022888184";
ProtoInstance307.fieldValue[2] = fieldValue310;

let fieldValue311 = browser.currentScene.createNode("fieldValue");
fieldValue311.name = "children";
let ProtoInstance312 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance312.name = "Joint";
ProtoInstance312.DEF = "hanim_vl4_2";
let fieldValue313 = browser.currentScene.createNode("fieldValue");
fieldValue313.name = "stiffness";
fieldValue313.value = "1 1 1";
ProtoInstance312.fieldValue = new MFNode();

ProtoInstance312.fieldValue[0] = fieldValue313;

let fieldValue314 = browser.currentScene.createNode("fieldValue");
fieldValue314.name = "name";
fieldValue314.value = "vl4";
ProtoInstance312.fieldValue[1] = fieldValue314;

let fieldValue315 = browser.currentScene.createNode("fieldValue");
fieldValue315.name = "center";
fieldValue315.value = "0.00350000010803342 1.09249997138977 -0.0786999985575676";
ProtoInstance312.fieldValue[2] = fieldValue315;

let fieldValue316 = browser.currentScene.createNode("fieldValue");
fieldValue316.name = "children";
let ProtoInstance317 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance317.name = "Joint";
ProtoInstance317.DEF = "hanim_vl3_2";
let fieldValue318 = browser.currentScene.createNode("fieldValue");
fieldValue318.name = "stiffness";
fieldValue318.value = "1 1 1";
ProtoInstance317.fieldValue = new MFNode();

ProtoInstance317.fieldValue[0] = fieldValue318;

let fieldValue319 = browser.currentScene.createNode("fieldValue");
fieldValue319.name = "name";
fieldValue319.value = "vl3";
ProtoInstance317.fieldValue[1] = fieldValue319;

let fieldValue320 = browser.currentScene.createNode("fieldValue");
fieldValue320.name = "center";
fieldValue320.value = "0.00410000002011657 1.1275999546051 -0.0795999988913536";
ProtoInstance317.fieldValue[2] = fieldValue320;

let fieldValue321 = browser.currentScene.createNode("fieldValue");
fieldValue321.name = "children";
let ProtoInstance322 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance322.name = "Joint";
ProtoInstance322.DEF = "hanim_vl2_2";
let fieldValue323 = browser.currentScene.createNode("fieldValue");
fieldValue323.name = "stiffness";
fieldValue323.value = "1 1 1";
ProtoInstance322.fieldValue = new MFNode();

ProtoInstance322.fieldValue[0] = fieldValue323;

let fieldValue324 = browser.currentScene.createNode("fieldValue");
fieldValue324.name = "name";
fieldValue324.value = "vl2";
ProtoInstance322.fieldValue[1] = fieldValue324;

let fieldValue325 = browser.currentScene.createNode("fieldValue");
fieldValue325.name = "center";
fieldValue325.value = "0.0044999998062849 1.15460002422333 -0.0799999982118607";
ProtoInstance322.fieldValue[2] = fieldValue325;

let fieldValue326 = browser.currentScene.createNode("fieldValue");
fieldValue326.name = "children";
let ProtoInstance327 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance327.name = "Joint";
ProtoInstance327.DEF = "hanim_vl1_2";
let fieldValue328 = browser.currentScene.createNode("fieldValue");
fieldValue328.name = "stiffness";
fieldValue328.value = "1 1 1";
ProtoInstance327.fieldValue = new MFNode();

ProtoInstance327.fieldValue[0] = fieldValue328;

let fieldValue329 = browser.currentScene.createNode("fieldValue");
fieldValue329.name = "name";
fieldValue329.value = "vl1";
ProtoInstance327.fieldValue[1] = fieldValue329;

let fieldValue330 = browser.currentScene.createNode("fieldValue");
fieldValue330.name = "center";
fieldValue330.value = "0.00480000022798777 1.19120001792908 -0.0804999992251396";
ProtoInstance327.fieldValue[2] = fieldValue330;

let fieldValue331 = browser.currentScene.createNode("fieldValue");
fieldValue331.name = "children";
let ProtoInstance332 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance332.name = "Joint";
ProtoInstance332.DEF = "hanim_vt12_2";
let fieldValue333 = browser.currentScene.createNode("fieldValue");
fieldValue333.name = "stiffness";
fieldValue333.value = "1 1 1";
ProtoInstance332.fieldValue = new MFNode();

ProtoInstance332.fieldValue[0] = fieldValue333;

let fieldValue334 = browser.currentScene.createNode("fieldValue");
fieldValue334.name = "name";
fieldValue334.value = "vt12";
ProtoInstance332.fieldValue[1] = fieldValue334;

let fieldValue335 = browser.currentScene.createNode("fieldValue");
fieldValue335.name = "center";
fieldValue335.value = "0.00510000018402934 1.22780001163483 -0.0807999968528748";
ProtoInstance332.fieldValue[2] = fieldValue335;

let fieldValue336 = browser.currentScene.createNode("fieldValue");
fieldValue336.name = "children";
let ProtoInstance337 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance337.name = "Joint";
ProtoInstance337.DEF = "hanim_vt11_2";
let fieldValue338 = browser.currentScene.createNode("fieldValue");
fieldValue338.name = "stiffness";
fieldValue338.value = "1 1 1";
ProtoInstance337.fieldValue = new MFNode();

ProtoInstance337.fieldValue[0] = fieldValue338;

let fieldValue339 = browser.currentScene.createNode("fieldValue");
fieldValue339.name = "name";
fieldValue339.value = "vt11";
ProtoInstance337.fieldValue[1] = fieldValue339;

let fieldValue340 = browser.currentScene.createNode("fieldValue");
fieldValue340.name = "center";
fieldValue340.value = "0.00529999984428287 1.26789999008179 -0.0810000002384186";
ProtoInstance337.fieldValue[2] = fieldValue340;

let fieldValue341 = browser.currentScene.createNode("fieldValue");
fieldValue341.name = "children";
let ProtoInstance342 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance342.name = "Joint";
ProtoInstance342.DEF = "hanim_vt10_2";
let fieldValue343 = browser.currentScene.createNode("fieldValue");
fieldValue343.name = "stiffness";
fieldValue343.value = "1 1 1";
ProtoInstance342.fieldValue = new MFNode();

ProtoInstance342.fieldValue[0] = fieldValue343;

let fieldValue344 = browser.currentScene.createNode("fieldValue");
fieldValue344.name = "name";
fieldValue344.value = "vt10";
ProtoInstance342.fieldValue[1] = fieldValue344;

let fieldValue345 = browser.currentScene.createNode("fieldValue");
fieldValue345.name = "center";
fieldValue345.value = "0.00559999980032444 1.28480005264282 -0.0821999981999397";
ProtoInstance342.fieldValue[2] = fieldValue345;

let fieldValue346 = browser.currentScene.createNode("fieldValue");
fieldValue346.name = "children";
let ProtoInstance347 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance347.name = "Joint";
ProtoInstance347.DEF = "hanim_vt9_2";
let fieldValue348 = browser.currentScene.createNode("fieldValue");
fieldValue348.name = "stiffness";
fieldValue348.value = "1 1 1";
ProtoInstance347.fieldValue = new MFNode();

ProtoInstance347.fieldValue[0] = fieldValue348;

let fieldValue349 = browser.currentScene.createNode("fieldValue");
fieldValue349.name = "name";
fieldValue349.value = "vt9";
ProtoInstance347.fieldValue[1] = fieldValue349;

let fieldValue350 = browser.currentScene.createNode("fieldValue");
fieldValue350.name = "center";
fieldValue350.value = "0.00570000009611249 1.31260001659393 -0.0838000029325485";
ProtoInstance347.fieldValue[2] = fieldValue350;

let fieldValue351 = browser.currentScene.createNode("fieldValue");
fieldValue351.name = "children";
let ProtoInstance352 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance352.name = "Joint";
ProtoInstance352.DEF = "hanim_vt8_2";
let fieldValue353 = browser.currentScene.createNode("fieldValue");
fieldValue353.name = "stiffness";
fieldValue353.value = "1 1 1";
ProtoInstance352.fieldValue = new MFNode();

ProtoInstance352.fieldValue[0] = fieldValue353;

let fieldValue354 = browser.currentScene.createNode("fieldValue");
fieldValue354.name = "name";
fieldValue354.value = "vt8";
ProtoInstance352.fieldValue[1] = fieldValue354;

let fieldValue355 = browser.currentScene.createNode("fieldValue");
fieldValue355.name = "center";
fieldValue355.value = "0.00570000009611249 1.33819997310638 -0.0844999998807907";
ProtoInstance352.fieldValue[2] = fieldValue355;

let fieldValue356 = browser.currentScene.createNode("fieldValue");
fieldValue356.name = "children";
let ProtoInstance357 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance357.name = "Joint";
ProtoInstance357.DEF = "hanim_vt7_2";
let fieldValue358 = browser.currentScene.createNode("fieldValue");
fieldValue358.name = "stiffness";
fieldValue358.value = "1 1 1";
ProtoInstance357.fieldValue = new MFNode();

ProtoInstance357.fieldValue[0] = fieldValue358;

let fieldValue359 = browser.currentScene.createNode("fieldValue");
fieldValue359.name = "name";
fieldValue359.value = "vt7";
ProtoInstance357.fieldValue[1] = fieldValue359;

let fieldValue360 = browser.currentScene.createNode("fieldValue");
fieldValue360.name = "center";
fieldValue360.value = "0.00579999992623925 1.36249995231628 -0.0833000019192696";
ProtoInstance357.fieldValue[2] = fieldValue360;

let fieldValue361 = browser.currentScene.createNode("fieldValue");
fieldValue361.name = "children";
let ProtoInstance362 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance362.name = "Joint";
ProtoInstance362.DEF = "hanim_vt6_2";
let fieldValue363 = browser.currentScene.createNode("fieldValue");
fieldValue363.name = "stiffness";
fieldValue363.value = "1 1 1";
ProtoInstance362.fieldValue = new MFNode();

ProtoInstance362.fieldValue[0] = fieldValue363;

let fieldValue364 = browser.currentScene.createNode("fieldValue");
fieldValue364.name = "name";
fieldValue364.value = "vt6";
ProtoInstance362.fieldValue[1] = fieldValue364;

let fieldValue365 = browser.currentScene.createNode("fieldValue");
fieldValue365.name = "center";
fieldValue365.value = "0.0059000002220273 1.38660001754761 -0.0799999982118607";
ProtoInstance362.fieldValue[2] = fieldValue365;

let fieldValue366 = browser.currentScene.createNode("fieldValue");
fieldValue366.name = "children";
let ProtoInstance367 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance367.name = "Joint";
ProtoInstance367.DEF = "hanim_vt5_2";
let fieldValue368 = browser.currentScene.createNode("fieldValue");
fieldValue368.name = "stiffness";
fieldValue368.value = "1 1 1";
ProtoInstance367.fieldValue = new MFNode();

ProtoInstance367.fieldValue[0] = fieldValue368;

let fieldValue369 = browser.currentScene.createNode("fieldValue");
fieldValue369.name = "name";
fieldValue369.value = "vt5";
ProtoInstance367.fieldValue[1] = fieldValue369;

let fieldValue370 = browser.currentScene.createNode("fieldValue");
fieldValue370.name = "center";
fieldValue370.value = "0.00600000005215406 1.41019999980927 -0.0745000019669533";
ProtoInstance367.fieldValue[2] = fieldValue370;

let fieldValue371 = browser.currentScene.createNode("fieldValue");
fieldValue371.name = "children";
let ProtoInstance372 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance372.name = "Joint";
ProtoInstance372.DEF = "hanim_vt4_2";
let fieldValue373 = browser.currentScene.createNode("fieldValue");
fieldValue373.name = "stiffness";
fieldValue373.value = "1 1 1";
ProtoInstance372.fieldValue = new MFNode();

ProtoInstance372.fieldValue[0] = fieldValue373;

let fieldValue374 = browser.currentScene.createNode("fieldValue");
fieldValue374.name = "name";
fieldValue374.value = "vt4";
ProtoInstance372.fieldValue[1] = fieldValue374;

let fieldValue375 = browser.currentScene.createNode("fieldValue");
fieldValue375.name = "center";
fieldValue375.value = "0.00609999988228083 1.432000041008 -0.067500002682209";
ProtoInstance372.fieldValue[2] = fieldValue375;

let fieldValue376 = browser.currentScene.createNode("fieldValue");
fieldValue376.name = "children";
let ProtoInstance377 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance377.name = "Joint";
ProtoInstance377.DEF = "hanim_vt3_2";
let fieldValue378 = browser.currentScene.createNode("fieldValue");
fieldValue378.name = "stiffness";
fieldValue378.value = "1 1 1";
ProtoInstance377.fieldValue = new MFNode();

ProtoInstance377.fieldValue[0] = fieldValue378;

let fieldValue379 = browser.currentScene.createNode("fieldValue");
fieldValue379.name = "name";
fieldValue379.value = "vt3";
ProtoInstance377.fieldValue[1] = fieldValue379;

let fieldValue380 = browser.currentScene.createNode("fieldValue");
fieldValue380.name = "center";
fieldValue380.value = "0.00620000017806888 1.45829999446869 -0.0570000000298023";
ProtoInstance377.fieldValue[2] = fieldValue380;

let fieldValue381 = browser.currentScene.createNode("fieldValue");
fieldValue381.name = "children";
let ProtoInstance382 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance382.name = "Joint";
ProtoInstance382.DEF = "hanim_vt2_2";
let fieldValue383 = browser.currentScene.createNode("fieldValue");
fieldValue383.name = "stiffness";
fieldValue383.value = "1 1 1";
ProtoInstance382.fieldValue = new MFNode();

ProtoInstance382.fieldValue[0] = fieldValue383;

let fieldValue384 = browser.currentScene.createNode("fieldValue");
fieldValue384.name = "name";
fieldValue384.value = "vt2";
ProtoInstance382.fieldValue[1] = fieldValue384;

let fieldValue385 = browser.currentScene.createNode("fieldValue");
fieldValue385.name = "center";
fieldValue385.value = "0.00630000000819564 1.47609996795654 -0.0483999997377396";
ProtoInstance382.fieldValue[2] = fieldValue385;

let fieldValue386 = browser.currentScene.createNode("fieldValue");
fieldValue386.name = "children";
let ProtoInstance387 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance387.name = "Joint";
ProtoInstance387.DEF = "hanim_vt1_2";
let fieldValue388 = browser.currentScene.createNode("fieldValue");
fieldValue388.name = "stiffness";
fieldValue388.value = "1 1 1";
ProtoInstance387.fieldValue = new MFNode();

ProtoInstance387.fieldValue[0] = fieldValue388;

let fieldValue389 = browser.currentScene.createNode("fieldValue");
fieldValue389.name = "name";
fieldValue389.value = "vt1";
ProtoInstance387.fieldValue[1] = fieldValue389;

let fieldValue390 = browser.currentScene.createNode("fieldValue");
fieldValue390.name = "center";
fieldValue390.value = "0.00650000013411045 1.4951000213623 -0.0386999994516373";
ProtoInstance387.fieldValue[2] = fieldValue390;

let fieldValue391 = browser.currentScene.createNode("fieldValue");
fieldValue391.name = "children";
let ProtoInstance392 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance392.name = "Joint";
ProtoInstance392.DEF = "hanim_vc7_2";
let fieldValue393 = browser.currentScene.createNode("fieldValue");
fieldValue393.name = "stiffness";
fieldValue393.value = "1 1 1";
ProtoInstance392.fieldValue = new MFNode();

ProtoInstance392.fieldValue[0] = fieldValue393;

let fieldValue394 = browser.currentScene.createNode("fieldValue");
fieldValue394.name = "name";
fieldValue394.value = "vc7";
ProtoInstance392.fieldValue[1] = fieldValue394;

let fieldValue395 = browser.currentScene.createNode("fieldValue");
fieldValue395.name = "center";
fieldValue395.value = "0.00659999996423721 1.51320004463196 -0.0300999991595745";
ProtoInstance392.fieldValue[2] = fieldValue395;

let fieldValue396 = browser.currentScene.createNode("fieldValue");
fieldValue396.name = "children";
let ProtoInstance397 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance397.name = "Joint";
ProtoInstance397.DEF = "hanim_vc6_2";
let fieldValue398 = browser.currentScene.createNode("fieldValue");
fieldValue398.name = "stiffness";
fieldValue398.value = "1 1 1";
ProtoInstance397.fieldValue = new MFNode();

ProtoInstance397.fieldValue[0] = fieldValue398;

let fieldValue399 = browser.currentScene.createNode("fieldValue");
fieldValue399.name = "name";
fieldValue399.value = "vc6";
ProtoInstance397.fieldValue[1] = fieldValue399;

let fieldValue400 = browser.currentScene.createNode("fieldValue");
fieldValue400.name = "center";
fieldValue400.value = "0.00659999996423721 1.53569996356964 -0.014299999922514";
ProtoInstance397.fieldValue[2] = fieldValue400;

let fieldValue401 = browser.currentScene.createNode("fieldValue");
fieldValue401.name = "children";
let ProtoInstance402 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance402.name = "Joint";
ProtoInstance402.DEF = "hanim_vc5_2";
let fieldValue403 = browser.currentScene.createNode("fieldValue");
fieldValue403.name = "stiffness";
fieldValue403.value = "1 1 1";
ProtoInstance402.fieldValue = new MFNode();

ProtoInstance402.fieldValue[0] = fieldValue403;

let fieldValue404 = browser.currentScene.createNode("fieldValue");
fieldValue404.name = "name";
fieldValue404.value = "vc5";
ProtoInstance402.fieldValue[1] = fieldValue404;

let fieldValue405 = browser.currentScene.createNode("fieldValue");
fieldValue405.name = "center";
fieldValue405.value = "0.00659999996423721 1.55200004577637 -0.00820000004023314";
ProtoInstance402.fieldValue[2] = fieldValue405;

let fieldValue406 = browser.currentScene.createNode("fieldValue");
fieldValue406.name = "children";
let ProtoInstance407 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance407.name = "Joint";
ProtoInstance407.DEF = "hanim_vc4_2";
let fieldValue408 = browser.currentScene.createNode("fieldValue");
fieldValue408.name = "stiffness";
fieldValue408.value = "1 1 1";
ProtoInstance407.fieldValue = new MFNode();

ProtoInstance407.fieldValue[0] = fieldValue408;

let fieldValue409 = browser.currentScene.createNode("fieldValue");
fieldValue409.name = "name";
fieldValue409.value = "vc4";
ProtoInstance407.fieldValue[1] = fieldValue409;

let fieldValue410 = browser.currentScene.createNode("fieldValue");
fieldValue410.name = "center";
fieldValue410.value = "0.00659999996423721 1.56620001792908 -0.00839999970048666";
ProtoInstance407.fieldValue[2] = fieldValue410;

let fieldValue411 = browser.currentScene.createNode("fieldValue");
fieldValue411.name = "children";
let ProtoInstance412 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance412.name = "Joint";
ProtoInstance412.DEF = "hanim_vc3_2";
let fieldValue413 = browser.currentScene.createNode("fieldValue");
fieldValue413.name = "stiffness";
fieldValue413.value = "1 1 1";
ProtoInstance412.fieldValue = new MFNode();

ProtoInstance412.fieldValue[0] = fieldValue413;

let fieldValue414 = browser.currentScene.createNode("fieldValue");
fieldValue414.name = "name";
fieldValue414.value = "vc3";
ProtoInstance412.fieldValue[1] = fieldValue414;

let fieldValue415 = browser.currentScene.createNode("fieldValue");
fieldValue415.name = "center";
fieldValue415.value = "0.00659999996423721 1.58000004291534 -0.0103000001981854";
ProtoInstance412.fieldValue[2] = fieldValue415;

let fieldValue416 = browser.currentScene.createNode("fieldValue");
fieldValue416.name = "children";
let ProtoInstance417 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance417.name = "Joint";
ProtoInstance417.DEF = "hanim_vc2_2";
let fieldValue418 = browser.currentScene.createNode("fieldValue");
fieldValue418.name = "stiffness";
fieldValue418.value = "1 1 1";
ProtoInstance417.fieldValue = new MFNode();

ProtoInstance417.fieldValue[0] = fieldValue418;

let fieldValue419 = browser.currentScene.createNode("fieldValue");
fieldValue419.name = "name";
fieldValue419.value = "vc2";
ProtoInstance417.fieldValue[1] = fieldValue419;

let fieldValue420 = browser.currentScene.createNode("fieldValue");
fieldValue420.name = "center";
fieldValue420.value = "0.00659999996423721 1.59280002117157 -0.0103000001981854";
ProtoInstance417.fieldValue[2] = fieldValue420;

let fieldValue421 = browser.currentScene.createNode("fieldValue");
fieldValue421.name = "children";
let ProtoInstance422 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance422.name = "Joint";
ProtoInstance422.DEF = "hanim_vc1_2";
let fieldValue423 = browser.currentScene.createNode("fieldValue");
fieldValue423.name = "stiffness";
fieldValue423.value = "1 1 1";
ProtoInstance422.fieldValue = new MFNode();

ProtoInstance422.fieldValue[0] = fieldValue423;

let fieldValue424 = browser.currentScene.createNode("fieldValue");
fieldValue424.name = "name";
fieldValue424.value = "vc1";
ProtoInstance422.fieldValue[1] = fieldValue424;

let fieldValue425 = browser.currentScene.createNode("fieldValue");
fieldValue425.name = "center";
fieldValue425.value = "0.00659999996423721 1.61440002918243 -0.00340000004507601";
ProtoInstance422.fieldValue[2] = fieldValue425;

let fieldValue426 = browser.currentScene.createNode("fieldValue");
fieldValue426.name = "children";
let ProtoInstance427 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance427.name = "Joint";
ProtoInstance427.DEF = "hanim_skullbase_2";
let fieldValue428 = browser.currentScene.createNode("fieldValue");
fieldValue428.name = "stiffness";
fieldValue428.value = "1 1 1";
ProtoInstance427.fieldValue = new MFNode();

ProtoInstance427.fieldValue[0] = fieldValue428;

let fieldValue429 = browser.currentScene.createNode("fieldValue");
fieldValue429.name = "name";
fieldValue429.value = "skullbase";
ProtoInstance427.fieldValue[1] = fieldValue429;

let fieldValue430 = browser.currentScene.createNode("fieldValue");
fieldValue430.name = "center";
fieldValue430.value = "0.00439999997615814 1.62090003490448 0.0236000008881092";
ProtoInstance427.fieldValue[2] = fieldValue430;

let fieldValue431 = browser.currentScene.createNode("fieldValue");
fieldValue431.name = "children";
let ProtoInstance432 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance432.name = "Joint";
ProtoInstance432.DEF = "hanim_l_eyeball_4";
let fieldValue433 = browser.currentScene.createNode("fieldValue");
fieldValue433.name = "stiffness";
fieldValue433.value = "1 1 1";
ProtoInstance432.fieldValue = new MFNode();

ProtoInstance432.fieldValue[0] = fieldValue433;

let fieldValue434 = browser.currentScene.createNode("fieldValue");
fieldValue434.name = "name";
fieldValue434.value = "l_eyeball";
ProtoInstance432.fieldValue[1] = fieldValue434;

let fieldValue435 = browser.currentScene.createNode("fieldValue");
fieldValue435.name = "center";
fieldValue435.value = "0.0335999988019466 1.63320004940033 0.0502000004053116";
ProtoInstance432.fieldValue[2] = fieldValue435;

let fieldValue436 = browser.currentScene.createNode("fieldValue");
fieldValue436.name = "children";
let ProtoInstance437 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance437.name = "Segment";
ProtoInstance437.DEF = "hanim_l_eyeball_3";
let fieldValue438 = browser.currentScene.createNode("fieldValue");
fieldValue438.name = "name";
fieldValue438.value = "l_eyeball";
ProtoInstance437.fieldValue = new MFNode();

ProtoInstance437.fieldValue[0] = fieldValue438;

fieldValue436.children = new MFNode();

fieldValue436.children[0] = ProtoInstance437;

ProtoInstance432.fieldValue[3] = fieldValue436;

fieldValue431.children = new MFNode();

fieldValue431.children[0] = ProtoInstance432;

let ProtoInstance439 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance439.name = "Joint";
ProtoInstance439.DEF = "hanim_r_eyeball_4";
let fieldValue440 = browser.currentScene.createNode("fieldValue");
fieldValue440.name = "stiffness";
fieldValue440.value = "1 1 1";
ProtoInstance439.fieldValue = new MFNode();

ProtoInstance439.fieldValue[0] = fieldValue440;

let fieldValue441 = browser.currentScene.createNode("fieldValue");
fieldValue441.name = "name";
fieldValue441.value = "r_eyeball";
ProtoInstance439.fieldValue[1] = fieldValue441;

let fieldValue442 = browser.currentScene.createNode("fieldValue");
fieldValue442.name = "center";
fieldValue442.value = "-0.0236000008881092 1.6331000328064 0.0509999990463257";
ProtoInstance439.fieldValue[2] = fieldValue442;

let fieldValue443 = browser.currentScene.createNode("fieldValue");
fieldValue443.name = "children";
let ProtoInstance444 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance444.name = "Segment";
ProtoInstance444.DEF = "hanim_r_eyeball_3";
let fieldValue445 = browser.currentScene.createNode("fieldValue");
fieldValue445.name = "name";
fieldValue445.value = "r_eyeball";
ProtoInstance444.fieldValue = new MFNode();

ProtoInstance444.fieldValue[0] = fieldValue445;

fieldValue443.children = new MFNode();

fieldValue443.children[0] = ProtoInstance444;

ProtoInstance439.fieldValue[3] = fieldValue443;

fieldValue431.children[1] = ProtoInstance439;

let ProtoInstance446 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance446.name = "Segment";
ProtoInstance446.DEF = "hanim_skull_2";
let fieldValue447 = browser.currentScene.createNode("fieldValue");
fieldValue447.name = "name";
fieldValue447.value = "skull";
ProtoInstance446.fieldValue = new MFNode();

ProtoInstance446.fieldValue[0] = fieldValue447;

let fieldValue448 = browser.currentScene.createNode("fieldValue");
fieldValue448.name = "children";
let ProtoInstance449 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance449.name = "Site";
ProtoInstance449.DEF = "hanim_skull_tip_2";
let fieldValue450 = browser.currentScene.createNode("fieldValue");
fieldValue450.name = "name";
fieldValue450.value = "skull_tip";
ProtoInstance449.fieldValue = new MFNode();

ProtoInstance449.fieldValue[0] = fieldValue450;

let fieldValue451 = browser.currentScene.createNode("fieldValue");
fieldValue451.name = "translation";
fieldValue451.value = "0.00499999988824129 1.75039994716644 0.00549999997019768";
ProtoInstance449.fieldValue[1] = fieldValue451;

fieldValue448.children = new MFNode();

fieldValue448.children[0] = ProtoInstance449;

let ProtoInstance452 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance452.name = "Site";
ProtoInstance452.DEF = "hanim_sellion_2";
let fieldValue453 = browser.currentScene.createNode("fieldValue");
fieldValue453.name = "name";
fieldValue453.value = "sellion";
ProtoInstance452.fieldValue = new MFNode();

ProtoInstance452.fieldValue[0] = fieldValue453;

let fieldValue454 = browser.currentScene.createNode("fieldValue");
fieldValue454.name = "translation";
fieldValue454.value = "0.00579999992623925 1.63160002231598 0.0851999968290329";
ProtoInstance452.fieldValue[1] = fieldValue454;

fieldValue448.children[1] = ProtoInstance452;

let ProtoInstance455 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance455.name = "Site";
ProtoInstance455.DEF = "hanim_r_infraorbitale_2";
let fieldValue456 = browser.currentScene.createNode("fieldValue");
fieldValue456.name = "name";
fieldValue456.value = "r_infraorbitale";
ProtoInstance455.fieldValue = new MFNode();

ProtoInstance455.fieldValue[0] = fieldValue456;

let fieldValue457 = browser.currentScene.createNode("fieldValue");
fieldValue457.name = "translation";
fieldValue457.value = "-0.023700000718236 1.61710000038147 0.0751999989151955";
ProtoInstance455.fieldValue[1] = fieldValue457;

fieldValue448.children[2] = ProtoInstance455;

let ProtoInstance458 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance458.name = "Site";
ProtoInstance458.DEF = "hanim_l_infraorbitale_2";
let fieldValue459 = browser.currentScene.createNode("fieldValue");
fieldValue459.name = "name";
fieldValue459.value = "l_infraorbitale";
ProtoInstance458.fieldValue = new MFNode();

ProtoInstance458.fieldValue[0] = fieldValue459;

let fieldValue460 = browser.currentScene.createNode("fieldValue");
fieldValue460.name = "translation";
fieldValue460.value = "0.0340999998152256 1.61710000038147 0.0751999989151955";
ProtoInstance458.fieldValue[1] = fieldValue460;

fieldValue448.children[3] = ProtoInstance458;

let ProtoInstance461 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance461.name = "Site";
ProtoInstance461.DEF = "hanim_supramenton_2";
let fieldValue462 = browser.currentScene.createNode("fieldValue");
fieldValue462.name = "name";
fieldValue462.value = "supramenton";
ProtoInstance461.fieldValue = new MFNode();

ProtoInstance461.fieldValue[0] = fieldValue462;

let fieldValue463 = browser.currentScene.createNode("fieldValue");
fieldValue463.name = "translation";
fieldValue463.value = "0.00609999988228083 1.54100000858307 0.0804999992251396";
ProtoInstance461.fieldValue[1] = fieldValue463;

fieldValue448.children[4] = ProtoInstance461;

let ProtoInstance464 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance464.name = "Site";
ProtoInstance464.DEF = "hanim_r_tragion_2";
let fieldValue465 = browser.currentScene.createNode("fieldValue");
fieldValue465.name = "name";
fieldValue465.value = "r_tragion";
ProtoInstance464.fieldValue = new MFNode();

ProtoInstance464.fieldValue[0] = fieldValue465;

let fieldValue466 = browser.currentScene.createNode("fieldValue");
fieldValue466.name = "translation";
fieldValue466.value = "-0.0645999982953072 1.63469994068146 0.0302000008523464";
ProtoInstance464.fieldValue[1] = fieldValue466;

fieldValue448.children[5] = ProtoInstance464;

let ProtoInstance467 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance467.name = "Site";
ProtoInstance467.DEF = "hanim_r_gonion_2";
let fieldValue468 = browser.currentScene.createNode("fieldValue");
fieldValue468.name = "name";
fieldValue468.value = "r_gonion";
ProtoInstance467.fieldValue = new MFNode();

ProtoInstance467.fieldValue[0] = fieldValue468;

let fieldValue469 = browser.currentScene.createNode("fieldValue");
fieldValue469.name = "translation";
fieldValue469.value = "-0.0520000010728836 1.55289995670319 0.0346999987959862";
ProtoInstance467.fieldValue[1] = fieldValue469;

fieldValue448.children[6] = ProtoInstance467;

let ProtoInstance470 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance470.name = "Site";
ProtoInstance470.DEF = "hanim_l_tragion_2";
let fieldValue471 = browser.currentScene.createNode("fieldValue");
fieldValue471.name = "name";
fieldValue471.value = "l_tragion";
ProtoInstance470.fieldValue = new MFNode();

ProtoInstance470.fieldValue[0] = fieldValue471;

let fieldValue472 = browser.currentScene.createNode("fieldValue");
fieldValue472.name = "translation";
fieldValue472.value = "0.0738999992609024 1.63479995727539 0.0282000005245209";
ProtoInstance470.fieldValue[1] = fieldValue472;

fieldValue448.children[7] = ProtoInstance470;

let ProtoInstance473 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance473.name = "Site";
ProtoInstance473.DEF = "hanim_l_gonion_2";
let fieldValue474 = browser.currentScene.createNode("fieldValue");
fieldValue474.name = "name";
fieldValue474.value = "l_gonion";
ProtoInstance473.fieldValue = new MFNode();

ProtoInstance473.fieldValue[0] = fieldValue474;

let fieldValue475 = browser.currentScene.createNode("fieldValue");
fieldValue475.name = "translation";
fieldValue475.value = "0.0631000027060509 1.55299997329712 0.0329999998211861";
ProtoInstance473.fieldValue[1] = fieldValue475;

fieldValue448.children[8] = ProtoInstance473;

let ProtoInstance476 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance476.name = "Site";
ProtoInstance476.DEF = "hanim_nuchale_2";
let fieldValue477 = browser.currentScene.createNode("fieldValue");
fieldValue477.name = "name";
fieldValue477.value = "nuchale";
ProtoInstance476.fieldValue = new MFNode();

ProtoInstance476.fieldValue[0] = fieldValue477;

let fieldValue478 = browser.currentScene.createNode("fieldValue");
fieldValue478.name = "translation";
fieldValue478.value = "0.00389999989420176 1.59720003604889 -0.0795999988913536";
ProtoInstance476.fieldValue[1] = fieldValue478;

fieldValue448.children[9] = ProtoInstance476;

ProtoInstance446.fieldValue[1] = fieldValue448;

fieldValue431.children[2] = ProtoInstance446;

ProtoInstance427.fieldValue[3] = fieldValue431;

fieldValue426.children = new MFNode();

fieldValue426.children[0] = ProtoInstance427;

let ProtoInstance479 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance479.name = "Segment";
ProtoInstance479.DEF = "hanim_c1_2";
let fieldValue480 = browser.currentScene.createNode("fieldValue");
fieldValue480.name = "name";
fieldValue480.value = "c1";
ProtoInstance479.fieldValue = new MFNode();

ProtoInstance479.fieldValue[0] = fieldValue480;

fieldValue426.children[1] = ProtoInstance479;

ProtoInstance422.fieldValue[3] = fieldValue426;

fieldValue421.children = new MFNode();

fieldValue421.children[0] = ProtoInstance422;

let ProtoInstance481 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance481.name = "Segment";
ProtoInstance481.DEF = "hanim_c2_2";
let fieldValue482 = browser.currentScene.createNode("fieldValue");
fieldValue482.name = "name";
fieldValue482.value = "c2";
ProtoInstance481.fieldValue = new MFNode();

ProtoInstance481.fieldValue[0] = fieldValue482;

fieldValue421.children[1] = ProtoInstance481;

ProtoInstance417.fieldValue[3] = fieldValue421;

fieldValue416.children = new MFNode();

fieldValue416.children[0] = ProtoInstance417;

let ProtoInstance483 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance483.name = "Segment";
ProtoInstance483.DEF = "hanim_c3_2";
let fieldValue484 = browser.currentScene.createNode("fieldValue");
fieldValue484.name = "name";
fieldValue484.value = "c3";
ProtoInstance483.fieldValue = new MFNode();

ProtoInstance483.fieldValue[0] = fieldValue484;

fieldValue416.children[1] = ProtoInstance483;

ProtoInstance412.fieldValue[3] = fieldValue416;

fieldValue411.children = new MFNode();

fieldValue411.children[0] = ProtoInstance412;

let ProtoInstance485 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance485.name = "Segment";
ProtoInstance485.DEF = "hanim_c4_2";
let fieldValue486 = browser.currentScene.createNode("fieldValue");
fieldValue486.name = "name";
fieldValue486.value = "c4";
ProtoInstance485.fieldValue = new MFNode();

ProtoInstance485.fieldValue[0] = fieldValue486;

fieldValue411.children[1] = ProtoInstance485;

ProtoInstance407.fieldValue[3] = fieldValue411;

fieldValue406.children = new MFNode();

fieldValue406.children[0] = ProtoInstance407;

let ProtoInstance487 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance487.name = "Segment";
ProtoInstance487.DEF = "hanim_c5_2";
let fieldValue488 = browser.currentScene.createNode("fieldValue");
fieldValue488.name = "name";
fieldValue488.value = "c5";
ProtoInstance487.fieldValue = new MFNode();

ProtoInstance487.fieldValue[0] = fieldValue488;

fieldValue406.children[1] = ProtoInstance487;

ProtoInstance402.fieldValue[3] = fieldValue406;

fieldValue401.children = new MFNode();

fieldValue401.children[0] = ProtoInstance402;

let ProtoInstance489 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance489.name = "Segment";
ProtoInstance489.DEF = "hanim_c6_2";
let fieldValue490 = browser.currentScene.createNode("fieldValue");
fieldValue490.name = "name";
fieldValue490.value = "c6";
ProtoInstance489.fieldValue = new MFNode();

ProtoInstance489.fieldValue[0] = fieldValue490;

fieldValue401.children[1] = ProtoInstance489;

ProtoInstance397.fieldValue[3] = fieldValue401;

fieldValue396.children = new MFNode();

fieldValue396.children[0] = ProtoInstance397;

let ProtoInstance491 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance491.name = "Segment";
ProtoInstance491.DEF = "hanim_c7_2";
let fieldValue492 = browser.currentScene.createNode("fieldValue");
fieldValue492.name = "name";
fieldValue492.value = "c7";
ProtoInstance491.fieldValue = new MFNode();

ProtoInstance491.fieldValue[0] = fieldValue492;

let fieldValue493 = browser.currentScene.createNode("fieldValue");
fieldValue493.name = "children";
let ProtoInstance494 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance494.name = "Site";
ProtoInstance494.DEF = "hanim_r_neck_base_2";
let fieldValue495 = browser.currentScene.createNode("fieldValue");
fieldValue495.name = "name";
fieldValue495.value = "r_neck_base";
ProtoInstance494.fieldValue = new MFNode();

ProtoInstance494.fieldValue[0] = fieldValue495;

let fieldValue496 = browser.currentScene.createNode("fieldValue");
fieldValue496.name = "translation";
fieldValue496.value = "-0.0419000014662743 1.51489996910095 -0.0219999998807907";
ProtoInstance494.fieldValue[1] = fieldValue496;

fieldValue493.children = new MFNode();

fieldValue493.children[0] = ProtoInstance494;

let ProtoInstance497 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance497.name = "Site";
ProtoInstance497.DEF = "hanim_l_neck_base_2";
let fieldValue498 = browser.currentScene.createNode("fieldValue");
fieldValue498.name = "name";
fieldValue498.value = "l_neck_base";
ProtoInstance497.fieldValue = new MFNode();

ProtoInstance497.fieldValue[0] = fieldValue498;

let fieldValue499 = browser.currentScene.createNode("fieldValue");
fieldValue499.name = "translation";
fieldValue499.value = "0.0645999982953072 1.51409995555878 -0.0379999987781048";
ProtoInstance497.fieldValue[1] = fieldValue499;

fieldValue493.children[1] = ProtoInstance497;

ProtoInstance491.fieldValue[1] = fieldValue493;

fieldValue396.children[1] = ProtoInstance491;

ProtoInstance392.fieldValue[3] = fieldValue396;

fieldValue391.children = new MFNode();

fieldValue391.children[0] = ProtoInstance392;

let ProtoInstance500 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance500.name = "Joint";
ProtoInstance500.DEF = "hanim_l_sternoclavicular_2";
let fieldValue501 = browser.currentScene.createNode("fieldValue");
fieldValue501.name = "stiffness";
fieldValue501.value = "1 1 1";
ProtoInstance500.fieldValue = new MFNode();

ProtoInstance500.fieldValue[0] = fieldValue501;

let fieldValue502 = browser.currentScene.createNode("fieldValue");
fieldValue502.name = "name";
fieldValue502.value = "l_sternoclavicular";
ProtoInstance500.fieldValue[1] = fieldValue502;

let fieldValue503 = browser.currentScene.createNode("fieldValue");
fieldValue503.name = "center";
fieldValue503.value = "0.0820000022649765 1.44879996776581 -0.035300001502037";
ProtoInstance500.fieldValue[2] = fieldValue503;

let fieldValue504 = browser.currentScene.createNode("fieldValue");
fieldValue504.name = "children";
let ProtoInstance505 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance505.name = "Joint";
ProtoInstance505.DEF = "hanim_l_acromioclavicular_2";
let fieldValue506 = browser.currentScene.createNode("fieldValue");
fieldValue506.name = "stiffness";
fieldValue506.value = "1 1 1";
ProtoInstance505.fieldValue = new MFNode();

ProtoInstance505.fieldValue[0] = fieldValue506;

let fieldValue507 = browser.currentScene.createNode("fieldValue");
fieldValue507.name = "name";
fieldValue507.value = "l_acromioclavicular";
ProtoInstance505.fieldValue[1] = fieldValue507;

let fieldValue508 = browser.currentScene.createNode("fieldValue");
fieldValue508.name = "center";
fieldValue508.value = "0.0961999967694283 1.42690002918243 -0.0423999987542629";
ProtoInstance505.fieldValue[2] = fieldValue508;

let fieldValue509 = browser.currentScene.createNode("fieldValue");
fieldValue509.name = "children";
let ProtoInstance510 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance510.name = "Joint";
ProtoInstance510.DEF = "hanim_l_shoulder_2";
let fieldValue511 = browser.currentScene.createNode("fieldValue");
fieldValue511.name = "stiffness";
fieldValue511.value = "1 1 1";
ProtoInstance510.fieldValue = new MFNode();

ProtoInstance510.fieldValue[0] = fieldValue511;

let fieldValue512 = browser.currentScene.createNode("fieldValue");
fieldValue512.name = "name";
fieldValue512.value = "l_shoulder";
ProtoInstance510.fieldValue[1] = fieldValue512;

let fieldValue513 = browser.currentScene.createNode("fieldValue");
fieldValue513.name = "center";
fieldValue513.value = "0.202900007367134 1.43760001659393 -0.0386999994516373";
ProtoInstance510.fieldValue[2] = fieldValue513;

let fieldValue514 = browser.currentScene.createNode("fieldValue");
fieldValue514.name = "children";
let ProtoInstance515 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance515.name = "Joint";
ProtoInstance515.DEF = "hanim_l_elbow_2";
let fieldValue516 = browser.currentScene.createNode("fieldValue");
fieldValue516.name = "stiffness";
fieldValue516.value = "1 1 1";
ProtoInstance515.fieldValue = new MFNode();

ProtoInstance515.fieldValue[0] = fieldValue516;

let fieldValue517 = browser.currentScene.createNode("fieldValue");
fieldValue517.name = "name";
fieldValue517.value = "l_elbow";
ProtoInstance515.fieldValue[1] = fieldValue517;

let fieldValue518 = browser.currentScene.createNode("fieldValue");
fieldValue518.name = "center";
fieldValue518.value = "0.201399996876717 1.1356999874115 -0.0681999996304512";
ProtoInstance515.fieldValue[2] = fieldValue518;

let fieldValue519 = browser.currentScene.createNode("fieldValue");
fieldValue519.name = "children";
let ProtoInstance520 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance520.name = "Joint";
ProtoInstance520.DEF = "hanim_l_radiocarpal_2";
let fieldValue521 = browser.currentScene.createNode("fieldValue");
fieldValue521.name = "stiffness";
fieldValue521.value = "1 1 1";
ProtoInstance520.fieldValue = new MFNode();

ProtoInstance520.fieldValue[0] = fieldValue521;

let fieldValue522 = browser.currentScene.createNode("fieldValue");
fieldValue522.name = "name";
fieldValue522.value = "l_radiocarpal";
ProtoInstance520.fieldValue[1] = fieldValue522;

let fieldValue523 = browser.currentScene.createNode("fieldValue");
fieldValue523.name = "center";
fieldValue523.value = "0.198400005698204 0.866299986839294 -0.0582999996840954";
ProtoInstance520.fieldValue[2] = fieldValue523;

let fieldValue524 = browser.currentScene.createNode("fieldValue");
fieldValue524.name = "children";
let ProtoInstance525 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance525.name = "Joint";
ProtoInstance525.DEF = "hanim_l_carpometacarpal2";
let fieldValue526 = browser.currentScene.createNode("fieldValue");
fieldValue526.name = "stiffness";
fieldValue526.value = "1 1 1";
ProtoInstance525.fieldValue = new MFNode();

ProtoInstance525.fieldValue[0] = fieldValue526;

let fieldValue527 = browser.currentScene.createNode("fieldValue");
fieldValue527.name = "name";
fieldValue527.value = "l_carpometacarpal_1";
ProtoInstance525.fieldValue[1] = fieldValue527;

let fieldValue528 = browser.currentScene.createNode("fieldValue");
fieldValue528.name = "center";
fieldValue528.value = "0.192399993538857 0.847199976444244 -0.0533999986946583";
ProtoInstance525.fieldValue[2] = fieldValue528;

let fieldValue529 = browser.currentScene.createNode("fieldValue");
fieldValue529.name = "children";
let ProtoInstance530 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance530.name = "Joint";
ProtoInstance530.DEF = "hanim_l_metacarpophalangeal2";
let fieldValue531 = browser.currentScene.createNode("fieldValue");
fieldValue531.name = "stiffness";
fieldValue531.value = "1 1 1";
ProtoInstance530.fieldValue = new MFNode();

ProtoInstance530.fieldValue[0] = fieldValue531;

let fieldValue532 = browser.currentScene.createNode("fieldValue");
fieldValue532.name = "name";
fieldValue532.value = "l_metacarpophalangeal_1";
ProtoInstance530.fieldValue[1] = fieldValue532;

let fieldValue533 = browser.currentScene.createNode("fieldValue");
fieldValue533.name = "center";
fieldValue533.value = "0.195099994540215 0.82260000705719 0.0245999991893768";
ProtoInstance530.fieldValue[2] = fieldValue533;

let fieldValue534 = browser.currentScene.createNode("fieldValue");
fieldValue534.name = "children";
let ProtoInstance535 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance535.name = "Joint";
ProtoInstance535.DEF = "hanim_l_carpal_interphalangeal2";
let fieldValue536 = browser.currentScene.createNode("fieldValue");
fieldValue536.name = "stiffness";
fieldValue536.value = "1 1 1";
ProtoInstance535.fieldValue = new MFNode();

ProtoInstance535.fieldValue[0] = fieldValue536;

let fieldValue537 = browser.currentScene.createNode("fieldValue");
fieldValue537.name = "name";
fieldValue537.value = "l_carpal_interphalangeal_1";
ProtoInstance535.fieldValue[1] = fieldValue537;

let fieldValue538 = browser.currentScene.createNode("fieldValue");
fieldValue538.name = "center";
fieldValue538.value = "0.195500001311302 0.815900027751923 0.046399999409914";
ProtoInstance535.fieldValue[2] = fieldValue538;

let fieldValue539 = browser.currentScene.createNode("fieldValue");
fieldValue539.name = "children";
let ProtoInstance540 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance540.name = "Segment";
ProtoInstance540.DEF = "hanim_l_carpal_distal_phalanx2";
let fieldValue541 = browser.currentScene.createNode("fieldValue");
fieldValue541.name = "name";
fieldValue541.value = "l_carpal_distal_phalanx_1";
ProtoInstance540.fieldValue = new MFNode();

ProtoInstance540.fieldValue[0] = fieldValue541;

let fieldValue542 = browser.currentScene.createNode("fieldValue");
fieldValue542.name = "children";
let ProtoInstance543 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance543.name = "Site";
ProtoInstance543.DEF = "hanim_l_carpal_distal_phalanx_1_tip_2";
let fieldValue544 = browser.currentScene.createNode("fieldValue");
fieldValue544.name = "name";
fieldValue544.value = "l_carpal_distal_phalanx_1_tip";
ProtoInstance543.fieldValue = new MFNode();

ProtoInstance543.fieldValue[0] = fieldValue544;

let fieldValue545 = browser.currentScene.createNode("fieldValue");
fieldValue545.name = "translation";
fieldValue545.value = "0.19820000231266 0.806100010871887 0.0759000033140183";
ProtoInstance543.fieldValue[1] = fieldValue545;

fieldValue542.children = new MFNode();

fieldValue542.children[0] = ProtoInstance543;

ProtoInstance540.fieldValue[1] = fieldValue542;

fieldValue539.children = new MFNode();

fieldValue539.children[0] = ProtoInstance540;

ProtoInstance535.fieldValue[3] = fieldValue539;

fieldValue534.children = new MFNode();

fieldValue534.children[0] = ProtoInstance535;

let ProtoInstance546 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance546.name = "Segment";
ProtoInstance546.DEF = "hanim_l_index_proximal_2";
let fieldValue547 = browser.currentScene.createNode("fieldValue");
fieldValue547.name = "name";
fieldValue547.value = "l_index_proximal";
ProtoInstance546.fieldValue = new MFNode();

ProtoInstance546.fieldValue[0] = fieldValue547;

fieldValue534.children[1] = ProtoInstance546;

ProtoInstance530.fieldValue[3] = fieldValue534;

fieldValue529.children = new MFNode();

fieldValue529.children[0] = ProtoInstance530;

let ProtoInstance548 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance548.name = "Segment";
ProtoInstance548.DEF = "hanim_l_index_proximal_4";
let fieldValue549 = browser.currentScene.createNode("fieldValue");
fieldValue549.name = "name";
fieldValue549.value = "l_index_proximal";
ProtoInstance548.fieldValue = new MFNode();

ProtoInstance548.fieldValue[0] = fieldValue549;

fieldValue529.children[1] = ProtoInstance548;

ProtoInstance525.fieldValue[3] = fieldValue529;

fieldValue524.children = new MFNode();

fieldValue524.children[0] = ProtoInstance525;

let ProtoInstance550 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance550.name = "Joint";
ProtoInstance550.DEF = "hanim_l_carpometacarpal3";
let fieldValue551 = browser.currentScene.createNode("fieldValue");
fieldValue551.name = "stiffness";
fieldValue551.value = "1 1 1";
ProtoInstance550.fieldValue = new MFNode();

ProtoInstance550.fieldValue[0] = fieldValue551;

let fieldValue552 = browser.currentScene.createNode("fieldValue");
fieldValue552.name = "name";
fieldValue552.value = "l_carpometacarpal_2";
ProtoInstance550.fieldValue[1] = fieldValue552;

let fieldValue553 = browser.currentScene.createNode("fieldValue");
fieldValue553.name = "center";
fieldValue553.value = "0.198300004005432 0.80239999294281 -0.0280000008642673";
ProtoInstance550.fieldValue[2] = fieldValue553;

let fieldValue554 = browser.currentScene.createNode("fieldValue");
fieldValue554.name = "children";
let ProtoInstance555 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance555.name = "Joint";
ProtoInstance555.DEF = "hanim_l_metacarpophalangeal3";
let fieldValue556 = browser.currentScene.createNode("fieldValue");
fieldValue556.name = "stiffness";
fieldValue556.value = "1 1 1";
ProtoInstance555.fieldValue = new MFNode();

ProtoInstance555.fieldValue[0] = fieldValue556;

let fieldValue557 = browser.currentScene.createNode("fieldValue");
fieldValue557.name = "name";
fieldValue557.value = "l_metacarpophalangeal_2";
ProtoInstance555.fieldValue[1] = fieldValue557;

let fieldValue558 = browser.currentScene.createNode("fieldValue");
fieldValue558.name = "center";
fieldValue558.value = "0.198300004005432 0.781499981880188 -0.0280000008642673";
ProtoInstance555.fieldValue[2] = fieldValue558;

let fieldValue559 = browser.currentScene.createNode("fieldValue");
fieldValue559.name = "children";
let ProtoInstance560 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance560.name = "Joint";
ProtoInstance560.DEF = "hanim_l_carpal_proximal_interphalangeal3";
let fieldValue561 = browser.currentScene.createNode("fieldValue");
fieldValue561.name = "stiffness";
fieldValue561.value = "1 1 1";
ProtoInstance560.fieldValue = new MFNode();

ProtoInstance560.fieldValue[0] = fieldValue561;

let fieldValue562 = browser.currentScene.createNode("fieldValue");
fieldValue562.name = "name";
fieldValue562.value = "l_carpal_proximal_interphalangeal_2";
ProtoInstance560.fieldValue[1] = fieldValue562;

let fieldValue563 = browser.currentScene.createNode("fieldValue");
fieldValue563.name = "center";
fieldValue563.value = "0.201700001955032 0.736299991607666 -0.0248000007122755";
ProtoInstance560.fieldValue[2] = fieldValue563;

let fieldValue564 = browser.currentScene.createNode("fieldValue");
fieldValue564.name = "children";
let ProtoInstance565 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance565.name = "Joint";
ProtoInstance565.DEF = "hanim_l_carpal_distal_interphalangeal3";
let fieldValue566 = browser.currentScene.createNode("fieldValue");
fieldValue566.name = "stiffness";
fieldValue566.value = "1 1 1";
ProtoInstance565.fieldValue = new MFNode();

ProtoInstance565.fieldValue[0] = fieldValue566;

let fieldValue567 = browser.currentScene.createNode("fieldValue");
fieldValue567.name = "name";
fieldValue567.value = "l_carpal_distal_interphalangeal_2";
ProtoInstance565.fieldValue[1] = fieldValue567;

let fieldValue568 = browser.currentScene.createNode("fieldValue");
fieldValue568.name = "center";
fieldValue568.value = "0.202800005674362 0.713900029659271 -0.0236000008881092";
ProtoInstance565.fieldValue[2] = fieldValue568;

let fieldValue569 = browser.currentScene.createNode("fieldValue");
fieldValue569.name = "children";
let ProtoInstance570 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance570.name = "Segment";
ProtoInstance570.DEF = "hanim_l_carpal_distal_phalanx3";
let fieldValue571 = browser.currentScene.createNode("fieldValue");
fieldValue571.name = "name";
fieldValue571.value = "l_carpal_distal_phalanx_2";
ProtoInstance570.fieldValue = new MFNode();

ProtoInstance570.fieldValue[0] = fieldValue571;

let fieldValue572 = browser.currentScene.createNode("fieldValue");
fieldValue572.name = "children";
let ProtoInstance573 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance573.name = "Site";
ProtoInstance573.DEF = "hanim_l_carpal_distal_phalanx_2_tip_2";
let fieldValue574 = browser.currentScene.createNode("fieldValue");
fieldValue574.name = "name";
fieldValue574.value = "l_carpal_distal_phalanx_2_tip";
ProtoInstance573.fieldValue = new MFNode();

ProtoInstance573.fieldValue[0] = fieldValue574;

let fieldValue575 = browser.currentScene.createNode("fieldValue");
fieldValue575.name = "translation";
fieldValue575.value = "0.20890000462532 0.685800015926361 -0.0244999993592501";
ProtoInstance573.fieldValue[1] = fieldValue575;

fieldValue572.children = new MFNode();

fieldValue572.children[0] = ProtoInstance573;

let ProtoInstance576 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance576.name = "Site";
ProtoInstance576.DEF = "hanim_l_dactylion_2";
let fieldValue577 = browser.currentScene.createNode("fieldValue");
fieldValue577.name = "name";
fieldValue577.value = "l_dactylion";
ProtoInstance576.fieldValue = new MFNode();

ProtoInstance576.fieldValue[0] = fieldValue577;

let fieldValue578 = browser.currentScene.createNode("fieldValue");
fieldValue578.name = "translation";
fieldValue578.value = "0.205599993467331 0.674300014972687 -0.048200000077486";
ProtoInstance576.fieldValue[1] = fieldValue578;

fieldValue572.children[1] = ProtoInstance576;

ProtoInstance570.fieldValue[1] = fieldValue572;

fieldValue569.children = new MFNode();

fieldValue569.children[0] = ProtoInstance570;

ProtoInstance565.fieldValue[3] = fieldValue569;

fieldValue564.children = new MFNode();

fieldValue564.children[0] = ProtoInstance565;

let ProtoInstance579 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance579.name = "Segment";
ProtoInstance579.DEF = "hanim_l_index_middle_2";
let fieldValue580 = browser.currentScene.createNode("fieldValue");
fieldValue580.name = "name";
fieldValue580.value = "l_index_middle";
ProtoInstance579.fieldValue = new MFNode();

ProtoInstance579.fieldValue[0] = fieldValue580;

fieldValue564.children[1] = ProtoInstance579;

ProtoInstance560.fieldValue[3] = fieldValue564;

fieldValue559.children = new MFNode();

fieldValue559.children[0] = ProtoInstance560;

let ProtoInstance581 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance581.name = "Segment";
ProtoInstance581.DEF = "hanim_l_index_proximal_6";
let fieldValue582 = browser.currentScene.createNode("fieldValue");
fieldValue582.name = "name";
fieldValue582.value = "l_index_proximal";
ProtoInstance581.fieldValue = new MFNode();

ProtoInstance581.fieldValue[0] = fieldValue582;

fieldValue559.children[1] = ProtoInstance581;

ProtoInstance555.fieldValue[3] = fieldValue559;

fieldValue554.children = new MFNode();

fieldValue554.children[0] = ProtoInstance555;

let ProtoInstance583 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance583.name = "Segment";
ProtoInstance583.DEF = "hanim_l_index_metacarpal_2";
let fieldValue584 = browser.currentScene.createNode("fieldValue");
fieldValue584.name = "name";
fieldValue584.value = "l_index_metacarpal";
ProtoInstance583.fieldValue = new MFNode();

ProtoInstance583.fieldValue[0] = fieldValue584;

fieldValue554.children[1] = ProtoInstance583;

ProtoInstance550.fieldValue[3] = fieldValue554;

fieldValue524.children[1] = ProtoInstance550;

let ProtoInstance585 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance585.name = "Joint";
ProtoInstance585.DEF = "hanim_l_carpometacarpal4";
let fieldValue586 = browser.currentScene.createNode("fieldValue");
fieldValue586.name = "stiffness";
fieldValue586.value = "1 1 1";
ProtoInstance585.fieldValue = new MFNode();

ProtoInstance585.fieldValue[0] = fieldValue586;

let fieldValue587 = browser.currentScene.createNode("fieldValue");
fieldValue587.name = "name";
fieldValue587.value = "l_carpometacarpal_3";
ProtoInstance585.fieldValue[1] = fieldValue587;

let fieldValue588 = browser.currentScene.createNode("fieldValue");
fieldValue588.name = "center";
fieldValue588.value = "0.198699995875359 0.802900016307831 -0.0529999993741512";
ProtoInstance585.fieldValue[2] = fieldValue588;

let fieldValue589 = browser.currentScene.createNode("fieldValue");
fieldValue589.name = "children";
let ProtoInstance590 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance590.name = "Joint";
ProtoInstance590.DEF = "hanim_l_metacarpophalangeal4";
let fieldValue591 = browser.currentScene.createNode("fieldValue");
fieldValue591.name = "stiffness";
fieldValue591.value = "1 1 1";
ProtoInstance590.fieldValue = new MFNode();

ProtoInstance590.fieldValue[0] = fieldValue591;

let fieldValue592 = browser.currentScene.createNode("fieldValue");
fieldValue592.name = "name";
fieldValue592.value = "l_metacarpophalangeal_3";
ProtoInstance590.fieldValue[1] = fieldValue592;

let fieldValue593 = browser.currentScene.createNode("fieldValue");
fieldValue593.name = "center";
fieldValue593.value = "0.198699995875359 0.781799972057343 -0.0529999993741512";
ProtoInstance590.fieldValue[2] = fieldValue593;

let fieldValue594 = browser.currentScene.createNode("fieldValue");
fieldValue594.name = "children";
let ProtoInstance595 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance595.name = "Joint";
ProtoInstance595.DEF = "hanim_l_carpal_proximal_interphalangeal4";
let fieldValue596 = browser.currentScene.createNode("fieldValue");
fieldValue596.name = "stiffness";
fieldValue596.value = "1 1 1";
ProtoInstance595.fieldValue = new MFNode();

ProtoInstance595.fieldValue[0] = fieldValue596;

let fieldValue597 = browser.currentScene.createNode("fieldValue");
fieldValue597.name = "name";
fieldValue597.value = "l_carpal_proximal_interphalangeal_3";
ProtoInstance595.fieldValue[1] = fieldValue597;

let fieldValue598 = browser.currentScene.createNode("fieldValue");
fieldValue598.name = "center";
fieldValue598.value = "0.201299995183945 0.727299988269806 -0.0502999983727932";
ProtoInstance595.fieldValue[2] = fieldValue598;

let fieldValue599 = browser.currentScene.createNode("fieldValue");
fieldValue599.name = "children";
let ProtoInstance600 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance600.name = "Joint";
ProtoInstance600.DEF = "hanim_l_carpal_distal_interphalangeal4";
let fieldValue601 = browser.currentScene.createNode("fieldValue");
fieldValue601.name = "stiffness";
fieldValue601.value = "1 1 1";
ProtoInstance600.fieldValue = new MFNode();

ProtoInstance600.fieldValue[0] = fieldValue601;

let fieldValue602 = browser.currentScene.createNode("fieldValue");
fieldValue602.name = "name";
fieldValue602.value = "l_carpal_distal_interphalangeal_3";
ProtoInstance600.fieldValue[1] = fieldValue602;

let fieldValue603 = browser.currentScene.createNode("fieldValue");
fieldValue603.name = "center";
fieldValue603.value = "0.202600002288818 0.701099991798401 -0.0494000017642975";
ProtoInstance600.fieldValue[2] = fieldValue603;

let fieldValue604 = browser.currentScene.createNode("fieldValue");
fieldValue604.name = "children";
let ProtoInstance605 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance605.name = "Segment";
ProtoInstance605.DEF = "hanim_l_carpal_distal_phalanx4";
let fieldValue606 = browser.currentScene.createNode("fieldValue");
fieldValue606.name = "name";
fieldValue606.value = "l_carpal_distal_phalanx_3";
ProtoInstance605.fieldValue = new MFNode();

ProtoInstance605.fieldValue[0] = fieldValue606;

let fieldValue607 = browser.currentScene.createNode("fieldValue");
fieldValue607.name = "children";
let ProtoInstance608 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance608.name = "Site";
ProtoInstance608.DEF = "hanim_l_carpal_distal_phalanx_3_tip_2";
let fieldValue609 = browser.currentScene.createNode("fieldValue");
fieldValue609.name = "name";
fieldValue609.value = "l_carpal_distal_phalanx_3_tip";
ProtoInstance608.fieldValue = new MFNode();

ProtoInstance608.fieldValue[0] = fieldValue609;

let fieldValue610 = browser.currentScene.createNode("fieldValue");
fieldValue610.name = "translation";
fieldValue610.value = "0.208000004291534 0.673099994659424 -0.049100000411272";
ProtoInstance608.fieldValue[1] = fieldValue610;

fieldValue607.children = new MFNode();

fieldValue607.children[0] = ProtoInstance608;

ProtoInstance605.fieldValue[1] = fieldValue607;

fieldValue604.children = new MFNode();

fieldValue604.children[0] = ProtoInstance605;

ProtoInstance600.fieldValue[3] = fieldValue604;

fieldValue599.children = new MFNode();

fieldValue599.children[0] = ProtoInstance600;

let ProtoInstance611 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance611.name = "Segment";
ProtoInstance611.DEF = "hanim_l_middle_middle_2";
let fieldValue612 = browser.currentScene.createNode("fieldValue");
fieldValue612.name = "name";
fieldValue612.value = "l_middle_middle";
ProtoInstance611.fieldValue = new MFNode();

ProtoInstance611.fieldValue[0] = fieldValue612;

fieldValue599.children[1] = ProtoInstance611;

ProtoInstance595.fieldValue[3] = fieldValue599;

fieldValue594.children = new MFNode();

fieldValue594.children[0] = ProtoInstance595;

let ProtoInstance613 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance613.name = "Segment";
ProtoInstance613.DEF = "hanim_l_middle_proximal_2";
let fieldValue614 = browser.currentScene.createNode("fieldValue");
fieldValue614.name = "name";
fieldValue614.value = "l_middle_proximal";
ProtoInstance613.fieldValue = new MFNode();

ProtoInstance613.fieldValue[0] = fieldValue614;

fieldValue594.children[1] = ProtoInstance613;

ProtoInstance590.fieldValue[3] = fieldValue594;

fieldValue589.children = new MFNode();

fieldValue589.children[0] = ProtoInstance590;

let ProtoInstance615 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance615.name = "Segment";
ProtoInstance615.DEF = "hanim_l_middle_metacarpal_2";
let fieldValue616 = browser.currentScene.createNode("fieldValue");
fieldValue616.name = "name";
fieldValue616.value = "l_middle_metacarpal";
ProtoInstance615.fieldValue = new MFNode();

ProtoInstance615.fieldValue[0] = fieldValue616;

fieldValue589.children[1] = ProtoInstance615;

ProtoInstance585.fieldValue[3] = fieldValue589;

fieldValue524.children[2] = ProtoInstance585;

let ProtoInstance617 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance617.name = "Joint";
ProtoInstance617.DEF = "hanim_l_carpometacarpal5";
let fieldValue618 = browser.currentScene.createNode("fieldValue");
fieldValue618.name = "stiffness";
fieldValue618.value = "1 1 1";
ProtoInstance617.fieldValue = new MFNode();

ProtoInstance617.fieldValue[0] = fieldValue618;

let fieldValue619 = browser.currentScene.createNode("fieldValue");
fieldValue619.name = "name";
fieldValue619.value = "l_carpometacarpal_4";
ProtoInstance617.fieldValue[1] = fieldValue619;

let fieldValue620 = browser.currentScene.createNode("fieldValue");
fieldValue620.name = "center";
fieldValue620.value = "0.195600003004074 0.801900029182434 -0.0794000029563904";
ProtoInstance617.fieldValue[2] = fieldValue620;

let fieldValue621 = browser.currentScene.createNode("fieldValue");
fieldValue621.name = "children";
let ProtoInstance622 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance622.name = "Joint";
ProtoInstance622.DEF = "hanim_l_metacarpophalangeal5";
let fieldValue623 = browser.currentScene.createNode("fieldValue");
fieldValue623.name = "stiffness";
fieldValue623.value = "1 1 1";
ProtoInstance622.fieldValue = new MFNode();

ProtoInstance622.fieldValue[0] = fieldValue623;

let fieldValue624 = browser.currentScene.createNode("fieldValue");
fieldValue624.name = "name";
fieldValue624.value = "l_metacarpophalangeal_4";
ProtoInstance622.fieldValue[1] = fieldValue624;

let fieldValue625 = browser.currentScene.createNode("fieldValue");
fieldValue625.name = "center";
fieldValue625.value = "0.195600003004074 0.781499981880188 -0.0794000029563904";
ProtoInstance622.fieldValue[2] = fieldValue625;

let fieldValue626 = browser.currentScene.createNode("fieldValue");
fieldValue626.name = "children";
let ProtoInstance627 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance627.name = "Joint";
ProtoInstance627.DEF = "hanim_l_carpal_proximal_interphalangeal5";
let fieldValue628 = browser.currentScene.createNode("fieldValue");
fieldValue628.name = "stiffness";
fieldValue628.value = "1 1 1";
ProtoInstance627.fieldValue = new MFNode();

ProtoInstance627.fieldValue[0] = fieldValue628;

let fieldValue629 = browser.currentScene.createNode("fieldValue");
fieldValue629.name = "name";
fieldValue629.value = "l_carpal_proximal_interphalangeal_4";
ProtoInstance627.fieldValue[1] = fieldValue629;

let fieldValue630 = browser.currentScene.createNode("fieldValue");
fieldValue630.name = "center";
fieldValue630.value = "0.197300001978874 0.72869998216629 -0.0776999965310097";
ProtoInstance627.fieldValue[2] = fieldValue630;

let fieldValue631 = browser.currentScene.createNode("fieldValue");
fieldValue631.name = "children";
let ProtoInstance632 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance632.name = "Joint";
ProtoInstance632.DEF = "hanim_l_carpal_distal_interphalangeal5";
let fieldValue633 = browser.currentScene.createNode("fieldValue");
fieldValue633.name = "stiffness";
fieldValue633.value = "1 1 1";
ProtoInstance632.fieldValue = new MFNode();

ProtoInstance632.fieldValue[0] = fieldValue633;

let fieldValue634 = browser.currentScene.createNode("fieldValue");
fieldValue634.name = "name";
fieldValue634.value = "l_carpal_distal_interphalangeal_4";
ProtoInstance632.fieldValue[1] = fieldValue634;

let fieldValue635 = browser.currentScene.createNode("fieldValue");
fieldValue635.name = "center";
fieldValue635.value = "0.198300004005432 0.704500019550323 -0.0767000019550323";
ProtoInstance632.fieldValue[2] = fieldValue635;

let fieldValue636 = browser.currentScene.createNode("fieldValue");
fieldValue636.name = "children";
let ProtoInstance637 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance637.name = "Segment";
ProtoInstance637.DEF = "hanim_l_carpal_distal_phalanx5";
let fieldValue638 = browser.currentScene.createNode("fieldValue");
fieldValue638.name = "name";
fieldValue638.value = "l_carpal_distal_phalanx_4";
ProtoInstance637.fieldValue = new MFNode();

ProtoInstance637.fieldValue[0] = fieldValue638;

let fieldValue639 = browser.currentScene.createNode("fieldValue");
fieldValue639.name = "children";
let ProtoInstance640 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance640.name = "Site";
ProtoInstance640.DEF = "hanim_l_carpal_distal_phalanx_4_tip_2";
let fieldValue641 = browser.currentScene.createNode("fieldValue");
fieldValue641.name = "name";
fieldValue641.value = "l_carpal_distal_phalanx_4_tip";
ProtoInstance640.fieldValue = new MFNode();

ProtoInstance640.fieldValue[0] = fieldValue641;

let fieldValue642 = browser.currentScene.createNode("fieldValue");
fieldValue642.name = "translation";
fieldValue642.value = "0.203500002622604 0.675000011920929 -0.0755999982357025";
ProtoInstance640.fieldValue[1] = fieldValue642;

fieldValue639.children = new MFNode();

fieldValue639.children[0] = ProtoInstance640;

ProtoInstance637.fieldValue[1] = fieldValue639;

fieldValue636.children = new MFNode();

fieldValue636.children[0] = ProtoInstance637;

ProtoInstance632.fieldValue[3] = fieldValue636;

fieldValue631.children = new MFNode();

fieldValue631.children[0] = ProtoInstance632;

let ProtoInstance643 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance643.name = "Segment";
ProtoInstance643.DEF = "hanim_l_ring_middle_2";
let fieldValue644 = browser.currentScene.createNode("fieldValue");
fieldValue644.name = "name";
fieldValue644.value = "l_ring_middle";
ProtoInstance643.fieldValue = new MFNode();

ProtoInstance643.fieldValue[0] = fieldValue644;

fieldValue631.children[1] = ProtoInstance643;

ProtoInstance627.fieldValue[3] = fieldValue631;

fieldValue626.children = new MFNode();

fieldValue626.children[0] = ProtoInstance627;

let ProtoInstance645 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance645.name = "Segment";
ProtoInstance645.DEF = "hanim_l_ring_proximal_2";
let fieldValue646 = browser.currentScene.createNode("fieldValue");
fieldValue646.name = "name";
fieldValue646.value = "l_ring_proximal";
ProtoInstance645.fieldValue = new MFNode();

ProtoInstance645.fieldValue[0] = fieldValue646;

fieldValue626.children[1] = ProtoInstance645;

ProtoInstance622.fieldValue[3] = fieldValue626;

fieldValue621.children = new MFNode();

fieldValue621.children[0] = ProtoInstance622;

let ProtoInstance647 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance647.name = "Segment";
ProtoInstance647.DEF = "hanim_l_ring_metacarpal_2";
let fieldValue648 = browser.currentScene.createNode("fieldValue");
fieldValue648.name = "name";
fieldValue648.value = "l_ring_metacarpal";
ProtoInstance647.fieldValue = new MFNode();

ProtoInstance647.fieldValue[0] = fieldValue648;

fieldValue621.children[1] = ProtoInstance647;

ProtoInstance617.fieldValue[3] = fieldValue621;

fieldValue524.children[3] = ProtoInstance617;

let ProtoInstance649 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance649.name = "Joint";
ProtoInstance649.DEF = "hanim_l_carpometacarpal6";
let fieldValue650 = browser.currentScene.createNode("fieldValue");
fieldValue650.name = "stiffness";
fieldValue650.value = "1 1 1";
ProtoInstance649.fieldValue = new MFNode();

ProtoInstance649.fieldValue[0] = fieldValue650;

let fieldValue651 = browser.currentScene.createNode("fieldValue");
fieldValue651.name = "name";
fieldValue651.value = "l_carpometacarpal_5";
ProtoInstance649.fieldValue[1] = fieldValue651;

let fieldValue652 = browser.currentScene.createNode("fieldValue");
fieldValue652.name = "center";
fieldValue652.value = "0.192499995231628 0.806599974632263 -0.10360000282526";
ProtoInstance649.fieldValue[2] = fieldValue652;

let fieldValue653 = browser.currentScene.createNode("fieldValue");
fieldValue653.name = "children";
let ProtoInstance654 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance654.name = "Joint";
ProtoInstance654.DEF = "hanim_l_metacarpophalangeal6";
let fieldValue655 = browser.currentScene.createNode("fieldValue");
fieldValue655.name = "stiffness";
fieldValue655.value = "1 1 1";
ProtoInstance654.fieldValue = new MFNode();

ProtoInstance654.fieldValue[0] = fieldValue655;

let fieldValue656 = browser.currentScene.createNode("fieldValue");
fieldValue656.name = "name";
fieldValue656.value = "l_metacarpophalangeal_5";
ProtoInstance654.fieldValue[1] = fieldValue656;

let fieldValue657 = browser.currentScene.createNode("fieldValue");
fieldValue657.name = "center";
fieldValue657.value = "0.192499995231628 0.78659999370575 -0.10360000282526";
ProtoInstance654.fieldValue[2] = fieldValue657;

let fieldValue658 = browser.currentScene.createNode("fieldValue");
fieldValue658.name = "children";
let ProtoInstance659 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance659.name = "Joint";
ProtoInstance659.DEF = "hanim_l_carpal_proximal_interphalangeal6";
let fieldValue660 = browser.currentScene.createNode("fieldValue");
fieldValue660.name = "stiffness";
fieldValue660.value = "1 1 1";
ProtoInstance659.fieldValue = new MFNode();

ProtoInstance659.fieldValue[0] = fieldValue660;

let fieldValue661 = browser.currentScene.createNode("fieldValue");
fieldValue661.name = "name";
fieldValue661.value = "l_carpal_proximal_interphalangeal_5";
ProtoInstance659.fieldValue[1] = fieldValue661;

let fieldValue662 = browser.currentScene.createNode("fieldValue");
fieldValue662.name = "center";
fieldValue662.value = "0.193800002336502 0.745199978351593 -0.102399997413158";
ProtoInstance659.fieldValue[2] = fieldValue662;

let fieldValue663 = browser.currentScene.createNode("fieldValue");
fieldValue663.name = "children";
let ProtoInstance664 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance664.name = "Joint";
ProtoInstance664.DEF = "hanim_l_carpal_distal_interphalangeal6";
let fieldValue665 = browser.currentScene.createNode("fieldValue");
fieldValue665.name = "stiffness";
fieldValue665.value = "1 1 1";
ProtoInstance664.fieldValue = new MFNode();

ProtoInstance664.fieldValue[0] = fieldValue665;

let fieldValue666 = browser.currentScene.createNode("fieldValue");
fieldValue666.name = "name";
fieldValue666.value = "l_carpal_distal_interphalangeal_5";
ProtoInstance664.fieldValue[1] = fieldValue666;

let fieldValue667 = browser.currentScene.createNode("fieldValue");
fieldValue667.name = "center";
fieldValue667.value = "0.19480000436306 0.727699995040894 -0.101700000464916";
ProtoInstance664.fieldValue[2] = fieldValue667;

let fieldValue668 = browser.currentScene.createNode("fieldValue");
fieldValue668.name = "children";
let ProtoInstance669 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance669.name = "Segment";
ProtoInstance669.DEF = "hanim_l_carpal_distal_phalanx6";
let fieldValue670 = browser.currentScene.createNode("fieldValue");
fieldValue670.name = "name";
fieldValue670.value = "l_carpal_distal_phalanx_5";
ProtoInstance669.fieldValue = new MFNode();

ProtoInstance669.fieldValue[0] = fieldValue670;

let fieldValue671 = browser.currentScene.createNode("fieldValue");
fieldValue671.name = "children";
let ProtoInstance672 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance672.name = "Site";
ProtoInstance672.DEF = "hanim_l_carpal_distal_phalanx_5_tip_2";
let fieldValue673 = browser.currentScene.createNode("fieldValue");
fieldValue673.name = "name";
fieldValue673.value = "l_carpal_distal_phalanx_5_tip";
ProtoInstance672.fieldValue = new MFNode();

ProtoInstance672.fieldValue[0] = fieldValue673;

let fieldValue674 = browser.currentScene.createNode("fieldValue");
fieldValue674.name = "translation";
fieldValue674.value = "0.201399996876717 0.700900018215179 -0.101199999451637";
ProtoInstance672.fieldValue[1] = fieldValue674;

fieldValue671.children = new MFNode();

fieldValue671.children[0] = ProtoInstance672;

ProtoInstance669.fieldValue[1] = fieldValue671;

fieldValue668.children = new MFNode();

fieldValue668.children[0] = ProtoInstance669;

ProtoInstance664.fieldValue[3] = fieldValue668;

fieldValue663.children = new MFNode();

fieldValue663.children[0] = ProtoInstance664;

let ProtoInstance675 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance675.name = "Segment";
ProtoInstance675.DEF = "hanim_l_pinky_middle_2";
let fieldValue676 = browser.currentScene.createNode("fieldValue");
fieldValue676.name = "name";
fieldValue676.value = "l_pinky_middle";
ProtoInstance675.fieldValue = new MFNode();

ProtoInstance675.fieldValue[0] = fieldValue676;

fieldValue663.children[1] = ProtoInstance675;

ProtoInstance659.fieldValue[3] = fieldValue663;

fieldValue658.children = new MFNode();

fieldValue658.children[0] = ProtoInstance659;

let ProtoInstance677 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance677.name = "Segment";
ProtoInstance677.DEF = "hanim_l_pinky_proximal_2";
let fieldValue678 = browser.currentScene.createNode("fieldValue");
fieldValue678.name = "name";
fieldValue678.value = "l_pinky_proximal";
ProtoInstance677.fieldValue = new MFNode();

ProtoInstance677.fieldValue[0] = fieldValue678;

fieldValue658.children[1] = ProtoInstance677;

ProtoInstance654.fieldValue[3] = fieldValue658;

fieldValue653.children = new MFNode();

fieldValue653.children[0] = ProtoInstance654;

let ProtoInstance679 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance679.name = "Segment";
ProtoInstance679.DEF = "hanim_l_pinky_metacarpal_2";
let fieldValue680 = browser.currentScene.createNode("fieldValue");
fieldValue680.name = "name";
fieldValue680.value = "l_pinky_metacarpal";
ProtoInstance679.fieldValue = new MFNode();

ProtoInstance679.fieldValue[0] = fieldValue680;

fieldValue653.children[1] = ProtoInstance679;

ProtoInstance649.fieldValue[3] = fieldValue653;

fieldValue524.children[4] = ProtoInstance649;

let ProtoInstance681 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance681.name = "Segment";
ProtoInstance681.DEF = "hanim_l_hand_2";
let fieldValue682 = browser.currentScene.createNode("fieldValue");
fieldValue682.name = "name";
fieldValue682.value = "l_hand";
ProtoInstance681.fieldValue = new MFNode();

ProtoInstance681.fieldValue[0] = fieldValue682;

let fieldValue683 = browser.currentScene.createNode("fieldValue");
fieldValue683.name = "children";
let ProtoInstance684 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance684.name = "Site";
ProtoInstance684.DEF = "hanim_l_metacarpal_phalanx3";
let fieldValue685 = browser.currentScene.createNode("fieldValue");
fieldValue685.name = "name";
fieldValue685.value = "l_metacarpal_phalanx_2";
ProtoInstance684.fieldValue = new MFNode();

ProtoInstance684.fieldValue[0] = fieldValue685;

let fieldValue686 = browser.currentScene.createNode("fieldValue");
fieldValue686.name = "translation";
fieldValue686.value = "0.200900003314018 0.813899993896484 -0.023700000718236";
ProtoInstance684.fieldValue[1] = fieldValue686;

fieldValue683.children = new MFNode();

fieldValue683.children[0] = ProtoInstance684;

let ProtoInstance687 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance687.name = "Site";
ProtoInstance687.DEF = "hanim_l_ulnar_styloid_2";
let fieldValue688 = browser.currentScene.createNode("fieldValue");
fieldValue688.name = "name";
fieldValue688.value = "l_ulnar_styloid";
ProtoInstance687.fieldValue = new MFNode();

ProtoInstance687.fieldValue[0] = fieldValue688;

let fieldValue689 = browser.currentScene.createNode("fieldValue");
fieldValue689.name = "translation";
fieldValue689.value = "-0.214200004935265 0.85290002822876 -0.064800001680851";
ProtoInstance687.fieldValue[1] = fieldValue689;

fieldValue683.children[1] = ProtoInstance687;

let ProtoInstance690 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance690.name = "Site";
ProtoInstance690.DEF = "hanim_l_metacarpal_phalanx6";
let fieldValue691 = browser.currentScene.createNode("fieldValue");
fieldValue691.name = "name";
fieldValue691.value = "l_metacarpal_phalanx_5";
ProtoInstance690.fieldValue = new MFNode();

ProtoInstance690.fieldValue[0] = fieldValue691;

let fieldValue692 = browser.currentScene.createNode("fieldValue");
fieldValue692.name = "translation";
fieldValue692.value = "0.192900002002716 0.78600001335144 -0.112199999392033";
ProtoInstance690.fieldValue[1] = fieldValue692;

fieldValue683.children[2] = ProtoInstance690;

ProtoInstance681.fieldValue[1] = fieldValue683;

fieldValue524.children[5] = ProtoInstance681;

ProtoInstance520.fieldValue[3] = fieldValue524;

fieldValue519.children = new MFNode();

fieldValue519.children[0] = ProtoInstance520;

let ProtoInstance693 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance693.name = "Segment";
ProtoInstance693.DEF = "hanim_l_forearm_2";
let fieldValue694 = browser.currentScene.createNode("fieldValue");
fieldValue694.name = "name";
fieldValue694.value = "l_forearm";
ProtoInstance693.fieldValue = new MFNode();

ProtoInstance693.fieldValue[0] = fieldValue694;

let fieldValue695 = browser.currentScene.createNode("fieldValue");
fieldValue695.name = "children";
let ProtoInstance696 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance696.name = "Site";
ProtoInstance696.DEF = "hanim_l_radial_styloid_2";
let fieldValue697 = browser.currentScene.createNode("fieldValue");
fieldValue697.name = "name";
fieldValue697.value = "l_radial_styloid";
ProtoInstance696.fieldValue = new MFNode();

ProtoInstance696.fieldValue[0] = fieldValue697;

let fieldValue698 = browser.currentScene.createNode("fieldValue");
fieldValue698.name = "translation";
fieldValue698.value = "0.190099999308586 0.864499986171722 -0.0414999984204769";
ProtoInstance696.fieldValue[1] = fieldValue698;

fieldValue695.children = new MFNode();

fieldValue695.children[0] = ProtoInstance696;

let ProtoInstance699 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance699.name = "Site";
ProtoInstance699.DEF = "hanim_l_olecranon_2";
let fieldValue700 = browser.currentScene.createNode("fieldValue");
fieldValue700.name = "name";
fieldValue700.value = "l_olecranon";
ProtoInstance699.fieldValue = new MFNode();

ProtoInstance699.fieldValue[0] = fieldValue700;

let fieldValue701 = browser.currentScene.createNode("fieldValue");
fieldValue701.name = "translation";
fieldValue701.value = "-0.196199998259544 1.13750004768372 -0.112300001084805";
ProtoInstance699.fieldValue[1] = fieldValue701;

fieldValue695.children[1] = ProtoInstance699;

let ProtoInstance702 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance702.name = "Site";
ProtoInstance702.DEF = "hanim_l_humeral_medial_epicondyles_2";
let fieldValue703 = browser.currentScene.createNode("fieldValue");
fieldValue703.name = "name";
fieldValue703.value = "l_humeral_medial_epicondyles";
ProtoInstance702.fieldValue = new MFNode();

ProtoInstance702.fieldValue[0] = fieldValue703;

let fieldValue704 = browser.currentScene.createNode("fieldValue");
fieldValue704.name = "translation";
fieldValue704.value = "0.173500001430511 1.12720000743866 -0.111299999058247";
ProtoInstance702.fieldValue[1] = fieldValue704;

fieldValue695.children[2] = ProtoInstance702;

let ProtoInstance705 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance705.name = "Site";
ProtoInstance705.DEF = "hanim_l_radiale_2";
let fieldValue706 = browser.currentScene.createNode("fieldValue");
fieldValue706.name = "name";
fieldValue706.value = "l_radiale";
ProtoInstance705.fieldValue = new MFNode();

ProtoInstance705.fieldValue[0] = fieldValue706;

let fieldValue707 = browser.currentScene.createNode("fieldValue");
fieldValue707.name = "translation";
fieldValue707.value = "0.218199998140335 1.12119996547699 -0.116700001060963";
ProtoInstance705.fieldValue[1] = fieldValue707;

fieldValue695.children[3] = ProtoInstance705;

ProtoInstance693.fieldValue[1] = fieldValue695;

fieldValue519.children[1] = ProtoInstance693;

ProtoInstance515.fieldValue[3] = fieldValue519;

fieldValue514.children = new MFNode();

fieldValue514.children[0] = ProtoInstance515;

let ProtoInstance708 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance708.name = "Segment";
ProtoInstance708.DEF = "hanim_l_upperarm_2";
let fieldValue709 = browser.currentScene.createNode("fieldValue");
fieldValue709.name = "name";
fieldValue709.value = "l_upperarm";
ProtoInstance708.fieldValue = new MFNode();

ProtoInstance708.fieldValue[0] = fieldValue709;

let fieldValue710 = browser.currentScene.createNode("fieldValue");
fieldValue710.name = "children";
let ProtoInstance711 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance711.name = "Site";
ProtoInstance711.DEF = "hanim_l_humeral_lateral_epicondyles_2";
let fieldValue712 = browser.currentScene.createNode("fieldValue");
fieldValue712.name = "name";
fieldValue712.value = "l_humeral_lateral_epicondyles";
ProtoInstance711.fieldValue = new MFNode();

ProtoInstance711.fieldValue[0] = fieldValue712;

let fieldValue713 = browser.currentScene.createNode("fieldValue");
fieldValue713.name = "translation";
fieldValue713.value = "0.228000000119209 1.14820003509521 -0.109999999403954";
ProtoInstance711.fieldValue[1] = fieldValue713;

fieldValue710.children = new MFNode();

fieldValue710.children[0] = ProtoInstance711;

ProtoInstance708.fieldValue[1] = fieldValue710;

fieldValue514.children[1] = ProtoInstance708;

ProtoInstance510.fieldValue[3] = fieldValue514;

fieldValue509.children = new MFNode();

fieldValue509.children[0] = ProtoInstance510;

let ProtoInstance714 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance714.name = "Segment";
ProtoInstance714.DEF = "hanim_l_scapula_2";
let fieldValue715 = browser.currentScene.createNode("fieldValue");
fieldValue715.name = "name";
fieldValue715.value = "l_scapula";
ProtoInstance714.fieldValue = new MFNode();

ProtoInstance714.fieldValue[0] = fieldValue715;

fieldValue509.children[1] = ProtoInstance714;

ProtoInstance505.fieldValue[3] = fieldValue509;

fieldValue504.children = new MFNode();

fieldValue504.children[0] = ProtoInstance505;

let ProtoInstance716 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance716.name = "Segment";
ProtoInstance716.DEF = "hanim_l_clavicle_2";
let fieldValue717 = browser.currentScene.createNode("fieldValue");
fieldValue717.name = "name";
fieldValue717.value = "l_clavicle";
ProtoInstance716.fieldValue = new MFNode();

ProtoInstance716.fieldValue[0] = fieldValue717;

let fieldValue718 = browser.currentScene.createNode("fieldValue");
fieldValue718.name = "children";
let ProtoInstance719 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance719.name = "Site";
ProtoInstance719.DEF = "hanim_l_clavicale_2";
let fieldValue720 = browser.currentScene.createNode("fieldValue");
fieldValue720.name = "name";
fieldValue720.value = "l_clavicale";
ProtoInstance719.fieldValue = new MFNode();

ProtoInstance719.fieldValue[0] = fieldValue720;

let fieldValue721 = browser.currentScene.createNode("fieldValue");
fieldValue721.name = "translation";
fieldValue721.value = "0.0271000005304813 1.49430000782013 0.0394000001251698";
ProtoInstance719.fieldValue[1] = fieldValue721;

fieldValue718.children = new MFNode();

fieldValue718.children[0] = ProtoInstance719;

let ProtoInstance722 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance722.name = "Site";
ProtoInstance722.DEF = "hanim_l_acromion_2";
let fieldValue723 = browser.currentScene.createNode("fieldValue");
fieldValue723.name = "name";
fieldValue723.value = "l_acromion";
ProtoInstance722.fieldValue = new MFNode();

ProtoInstance722.fieldValue[0] = fieldValue723;

let fieldValue724 = browser.currentScene.createNode("fieldValue");
fieldValue724.name = "translation";
fieldValue724.value = "0.203199997544289 1.47599995136261 -0.0489999987185001";
ProtoInstance722.fieldValue[1] = fieldValue724;

fieldValue718.children[1] = ProtoInstance722;

let ProtoInstance725 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance725.name = "Site";
ProtoInstance725.DEF = "hanim_l_axilla_proximal_2";
let fieldValue726 = browser.currentScene.createNode("fieldValue");
fieldValue726.name = "name";
fieldValue726.value = "l_axilla_proximal";
ProtoInstance725.fieldValue = new MFNode();

ProtoInstance725.fieldValue[0] = fieldValue726;

let fieldValue727 = browser.currentScene.createNode("fieldValue");
fieldValue727.name = "translation";
fieldValue727.value = "0.177699998021126 1.40649998188019 -0.00749999983236194";
ProtoInstance725.fieldValue[1] = fieldValue727;

fieldValue718.children[2] = ProtoInstance725;

let ProtoInstance728 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance728.name = "Site";
ProtoInstance728.DEF = "hanim_l_axilla_distal_2";
let fieldValue729 = browser.currentScene.createNode("fieldValue");
fieldValue729.name = "name";
fieldValue729.value = "l_axilla_distal";
ProtoInstance728.fieldValue = new MFNode();

ProtoInstance728.fieldValue[0] = fieldValue729;

let fieldValue730 = browser.currentScene.createNode("fieldValue");
fieldValue730.name = "translation";
fieldValue730.value = "0.17059999704361 1.40719997882843 -0.0874999985098839";
ProtoInstance728.fieldValue[1] = fieldValue730;

fieldValue718.children[3] = ProtoInstance728;

ProtoInstance716.fieldValue[1] = fieldValue718;

fieldValue504.children[1] = ProtoInstance716;

ProtoInstance500.fieldValue[3] = fieldValue504;

fieldValue391.children[1] = ProtoInstance500;

let ProtoInstance731 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance731.name = "Joint";
ProtoInstance731.DEF = "hanim_r_sternoclavicular_2";
let fieldValue732 = browser.currentScene.createNode("fieldValue");
fieldValue732.name = "stiffness";
fieldValue732.value = "1 1 1";
ProtoInstance731.fieldValue = new MFNode();

ProtoInstance731.fieldValue[0] = fieldValue732;

let fieldValue733 = browser.currentScene.createNode("fieldValue");
fieldValue733.name = "name";
fieldValue733.value = "r_sternoclavicular";
ProtoInstance731.fieldValue[1] = fieldValue733;

let fieldValue734 = browser.currentScene.createNode("fieldValue");
fieldValue734.name = "center";
fieldValue734.value = "-0.0693999975919724 1.46000003814697 -0.0329999998211861";
ProtoInstance731.fieldValue[2] = fieldValue734;

let fieldValue735 = browser.currentScene.createNode("fieldValue");
fieldValue735.name = "children";
let ProtoInstance736 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance736.name = "Joint";
ProtoInstance736.DEF = "hanim_r_acromioclavicular_2";
let fieldValue737 = browser.currentScene.createNode("fieldValue");
fieldValue737.name = "stiffness";
fieldValue737.value = "1 1 1";
ProtoInstance736.fieldValue = new MFNode();

ProtoInstance736.fieldValue[0] = fieldValue737;

let fieldValue738 = browser.currentScene.createNode("fieldValue");
fieldValue738.name = "name";
fieldValue738.value = "r_acromioclavicular";
ProtoInstance736.fieldValue[1] = fieldValue738;

let fieldValue739 = browser.currentScene.createNode("fieldValue");
fieldValue739.name = "center";
fieldValue739.value = "-0.0835999995470047 1.42809998989105 -0.0401000007987022";
ProtoInstance736.fieldValue[2] = fieldValue739;

let fieldValue740 = browser.currentScene.createNode("fieldValue");
fieldValue740.name = "children";
let ProtoInstance741 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance741.name = "Joint";
ProtoInstance741.DEF = "hanim_r_shoulder_2";
let fieldValue742 = browser.currentScene.createNode("fieldValue");
fieldValue742.name = "stiffness";
fieldValue742.value = "1 1 1";
ProtoInstance741.fieldValue = new MFNode();

ProtoInstance741.fieldValue[0] = fieldValue742;

let fieldValue743 = browser.currentScene.createNode("fieldValue");
fieldValue743.name = "name";
fieldValue743.value = "r_shoulder";
ProtoInstance741.fieldValue[1] = fieldValue743;

let fieldValue744 = browser.currentScene.createNode("fieldValue");
fieldValue744.name = "center";
fieldValue744.value = "-0.190699994564056 1.4407000541687 -0.0324999988079071";
ProtoInstance741.fieldValue[2] = fieldValue744;

let fieldValue745 = browser.currentScene.createNode("fieldValue");
fieldValue745.name = "children";
let ProtoInstance746 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance746.name = "Joint";
ProtoInstance746.DEF = "hanim_r_elbow_2";
let fieldValue747 = browser.currentScene.createNode("fieldValue");
fieldValue747.name = "stiffness";
fieldValue747.value = "1 1 1";
ProtoInstance746.fieldValue = new MFNode();

ProtoInstance746.fieldValue[0] = fieldValue747;

let fieldValue748 = browser.currentScene.createNode("fieldValue");
fieldValue748.name = "name";
fieldValue748.value = "r_elbow";
ProtoInstance746.fieldValue[1] = fieldValue748;

let fieldValue749 = browser.currentScene.createNode("fieldValue");
fieldValue749.name = "center";
fieldValue749.value = "-0.194900006055832 1.13880002498627 -0.061999998986721";
ProtoInstance746.fieldValue[2] = fieldValue749;

let fieldValue750 = browser.currentScene.createNode("fieldValue");
fieldValue750.name = "children";
let ProtoInstance751 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance751.name = "Joint";
ProtoInstance751.DEF = "hanim_r_radiocarpal_2";
let fieldValue752 = browser.currentScene.createNode("fieldValue");
fieldValue752.name = "stiffness";
fieldValue752.value = "1 1 1";
ProtoInstance751.fieldValue = new MFNode();

ProtoInstance751.fieldValue[0] = fieldValue752;

let fieldValue753 = browser.currentScene.createNode("fieldValue");
fieldValue753.name = "name";
fieldValue753.value = "r_radiocarpal";
ProtoInstance751.fieldValue[1] = fieldValue753;

let fieldValue754 = browser.currentScene.createNode("fieldValue");
fieldValue754.name = "center";
fieldValue754.value = "-0.195899993181229 0.869400024414063 -0.0520999990403652";
ProtoInstance751.fieldValue[2] = fieldValue754;

let fieldValue755 = browser.currentScene.createNode("fieldValue");
fieldValue755.name = "children";
let ProtoInstance756 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance756.name = "Joint";
ProtoInstance756.DEF = "hanim_r_carpometacarpal2";
let fieldValue757 = browser.currentScene.createNode("fieldValue");
fieldValue757.name = "stiffness";
fieldValue757.value = "1 1 1";
ProtoInstance756.fieldValue = new MFNode();

ProtoInstance756.fieldValue[0] = fieldValue757;

let fieldValue758 = browser.currentScene.createNode("fieldValue");
fieldValue758.name = "name";
fieldValue758.value = "r_carpometacarpal_1";
ProtoInstance756.fieldValue[1] = fieldValue758;

let fieldValue759 = browser.currentScene.createNode("fieldValue");
fieldValue759.name = "center";
fieldValue759.value = "-0.189899995923042 0.850199997425079 -0.0472999997437";
ProtoInstance756.fieldValue[2] = fieldValue759;

let fieldValue760 = browser.currentScene.createNode("fieldValue");
fieldValue760.name = "children";
let ProtoInstance761 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance761.name = "Joint";
ProtoInstance761.DEF = "hanim_r_metacarpophalangeal2";
let fieldValue762 = browser.currentScene.createNode("fieldValue");
fieldValue762.name = "stiffness";
fieldValue762.value = "1 1 1";
ProtoInstance761.fieldValue = new MFNode();

ProtoInstance761.fieldValue[0] = fieldValue762;

let fieldValue763 = browser.currentScene.createNode("fieldValue");
fieldValue763.name = "name";
fieldValue763.value = "r_metacarpophalangeal_1";
ProtoInstance761.fieldValue[1] = fieldValue763;

let fieldValue764 = browser.currentScene.createNode("fieldValue");
fieldValue764.name = "center";
fieldValue764.value = "-0.187399998307228 0.825600028038025 0.0306000001728535";
ProtoInstance761.fieldValue[2] = fieldValue764;

let fieldValue765 = browser.currentScene.createNode("fieldValue");
fieldValue765.name = "children";
let ProtoInstance766 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance766.name = "Joint";
ProtoInstance766.DEF = "hanim_r_carpal_interphalangeal2";
let fieldValue767 = browser.currentScene.createNode("fieldValue");
fieldValue767.name = "stiffness";
fieldValue767.value = "1 1 1";
ProtoInstance766.fieldValue = new MFNode();

ProtoInstance766.fieldValue[0] = fieldValue767;

let fieldValue768 = browser.currentScene.createNode("fieldValue");
fieldValue768.name = "name";
fieldValue768.value = "r_carpal_interphalangeal_1";
ProtoInstance766.fieldValue[1] = fieldValue768;

let fieldValue769 = browser.currentScene.createNode("fieldValue");
fieldValue769.name = "center";
fieldValue769.value = "-0.18639999628067 0.819000005722046 0.0505999997258186";
ProtoInstance766.fieldValue[2] = fieldValue769;

let fieldValue770 = browser.currentScene.createNode("fieldValue");
fieldValue770.name = "children";
let ProtoInstance771 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance771.name = "Segment";
ProtoInstance771.DEF = "hanim_r_carpal_distal_phalanx2";
let fieldValue772 = browser.currentScene.createNode("fieldValue");
fieldValue772.name = "name";
fieldValue772.value = "r_carpal_distal_phalanx_1";
ProtoInstance771.fieldValue = new MFNode();

ProtoInstance771.fieldValue[0] = fieldValue772;

let fieldValue773 = browser.currentScene.createNode("fieldValue");
fieldValue773.name = "children";
let ProtoInstance774 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance774.name = "Site";
ProtoInstance774.DEF = "hanim_r_carpal_distal_phalanx_1_tip_2";
let fieldValue775 = browser.currentScene.createNode("fieldValue");
fieldValue775.name = "name";
fieldValue775.value = "r_carpal_distal_phalanx_1_tip";
ProtoInstance774.fieldValue = new MFNode();

ProtoInstance774.fieldValue[0] = fieldValue775;

let fieldValue776 = browser.currentScene.createNode("fieldValue");
fieldValue776.name = "translation";
fieldValue776.value = "-0.18690000474453 0.809000015258789 0.0820000022649765";
ProtoInstance774.fieldValue[1] = fieldValue776;

fieldValue773.children = new MFNode();

fieldValue773.children[0] = ProtoInstance774;

ProtoInstance771.fieldValue[1] = fieldValue773;

fieldValue770.children = new MFNode();

fieldValue770.children[0] = ProtoInstance771;

ProtoInstance766.fieldValue[3] = fieldValue770;

fieldValue765.children = new MFNode();

fieldValue765.children[0] = ProtoInstance766;

let ProtoInstance777 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance777.name = "Segment";
ProtoInstance777.DEF = "hanim_r_index_proximal_2";
let fieldValue778 = browser.currentScene.createNode("fieldValue");
fieldValue778.name = "name";
fieldValue778.value = "r_index_proximal";
ProtoInstance777.fieldValue = new MFNode();

ProtoInstance777.fieldValue[0] = fieldValue778;

fieldValue765.children[1] = ProtoInstance777;

ProtoInstance761.fieldValue[3] = fieldValue765;

fieldValue760.children = new MFNode();

fieldValue760.children[0] = ProtoInstance761;

let ProtoInstance779 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance779.name = "Segment";
ProtoInstance779.DEF = "hanim_r_index_proximal_4";
let fieldValue780 = browser.currentScene.createNode("fieldValue");
fieldValue780.name = "name";
fieldValue780.value = "r_index_proximal";
ProtoInstance779.fieldValue = new MFNode();

ProtoInstance779.fieldValue[0] = fieldValue780;

fieldValue760.children[1] = ProtoInstance779;

ProtoInstance756.fieldValue[3] = fieldValue760;

fieldValue755.children = new MFNode();

fieldValue755.children[0] = ProtoInstance756;

let ProtoInstance781 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance781.name = "Joint";
ProtoInstance781.DEF = "hanim_r_carpometacarpal3";
let fieldValue782 = browser.currentScene.createNode("fieldValue");
fieldValue782.name = "stiffness";
fieldValue782.value = "1 1 1";
ProtoInstance781.fieldValue = new MFNode();

ProtoInstance781.fieldValue[0] = fieldValue782;

let fieldValue783 = browser.currentScene.createNode("fieldValue");
fieldValue783.name = "name";
fieldValue783.value = "r_carpometacarpal_2";
ProtoInstance781.fieldValue[1] = fieldValue783;

let fieldValue784 = browser.currentScene.createNode("fieldValue");
fieldValue784.name = "center";
fieldValue784.value = "-0.196099996566772 0.805499970912933 -0.0218000002205372";
ProtoInstance781.fieldValue[2] = fieldValue784;

let fieldValue785 = browser.currentScene.createNode("fieldValue");
fieldValue785.name = "children";
let ProtoInstance786 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance786.name = "Joint";
ProtoInstance786.DEF = "hanim_r_metacarpophalangeal3";
let fieldValue787 = browser.currentScene.createNode("fieldValue");
fieldValue787.name = "stiffness";
fieldValue787.value = "1 1 1";
ProtoInstance786.fieldValue = new MFNode();

ProtoInstance786.fieldValue[0] = fieldValue787;

let fieldValue788 = browser.currentScene.createNode("fieldValue");
fieldValue788.name = "name";
fieldValue788.value = "r_metacarpophalangeal_2";
ProtoInstance786.fieldValue[1] = fieldValue788;

let fieldValue789 = browser.currentScene.createNode("fieldValue");
fieldValue789.name = "center";
fieldValue789.value = "-0.196099996566772 0.784600019454956 -0.0218000002205372";
ProtoInstance786.fieldValue[2] = fieldValue789;

let fieldValue790 = browser.currentScene.createNode("fieldValue");
fieldValue790.name = "children";
let ProtoInstance791 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance791.name = "Joint";
ProtoInstance791.DEF = "hanim_r_carpal_proximal_interphalangeal3";
let fieldValue792 = browser.currentScene.createNode("fieldValue");
fieldValue792.name = "stiffness";
fieldValue792.value = "1 1 1";
ProtoInstance791.fieldValue = new MFNode();

ProtoInstance791.fieldValue[0] = fieldValue792;

let fieldValue793 = browser.currentScene.createNode("fieldValue");
fieldValue793.name = "name";
fieldValue793.value = "r_carpal_proximal_interphalangeal_2";
ProtoInstance791.fieldValue[1] = fieldValue793;

let fieldValue794 = browser.currentScene.createNode("fieldValue");
fieldValue794.name = "center";
fieldValue794.value = "-0.19539999961853 0.739300012588501 -0.0185000002384186";
ProtoInstance791.fieldValue[2] = fieldValue794;

let fieldValue795 = browser.currentScene.createNode("fieldValue");
fieldValue795.name = "children";
let ProtoInstance796 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance796.name = "Joint";
ProtoInstance796.DEF = "hanim_r_carpal_distal_interphalangeal3";
let fieldValue797 = browser.currentScene.createNode("fieldValue");
fieldValue797.name = "stiffness";
fieldValue797.value = "1 1 1";
ProtoInstance796.fieldValue = new MFNode();

ProtoInstance796.fieldValue[0] = fieldValue797;

let fieldValue798 = browser.currentScene.createNode("fieldValue");
fieldValue798.name = "name";
fieldValue798.value = "r_carpal_distal_interphalangeal_2";
ProtoInstance796.fieldValue[1] = fieldValue798;

let fieldValue799 = browser.currentScene.createNode("fieldValue");
fieldValue799.name = "center";
fieldValue799.value = "-0.194499999284744 0.716899991035461 -0.0173000004142523";
ProtoInstance796.fieldValue[2] = fieldValue799;

let fieldValue800 = browser.currentScene.createNode("fieldValue");
fieldValue800.name = "children";
let ProtoInstance801 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance801.name = "Segment";
ProtoInstance801.DEF = "hanim_r_carpal_distal_phalanx3";
let fieldValue802 = browser.currentScene.createNode("fieldValue");
fieldValue802.name = "name";
fieldValue802.value = "r_carpal_distal_phalanx_2";
ProtoInstance801.fieldValue = new MFNode();

ProtoInstance801.fieldValue[0] = fieldValue802;

let fieldValue803 = browser.currentScene.createNode("fieldValue");
fieldValue803.name = "children";
let ProtoInstance804 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance804.name = "Site";
ProtoInstance804.DEF = "hanim_r_carpal_distal_phalanx_2_tip_2";
let fieldValue805 = browser.currentScene.createNode("fieldValue");
fieldValue805.name = "name";
fieldValue805.value = "r_carpal_distal_phalanx_2_tip";
ProtoInstance804.fieldValue = new MFNode();

ProtoInstance804.fieldValue[0] = fieldValue805;

let fieldValue806 = browser.currentScene.createNode("fieldValue");
fieldValue806.name = "translation";
fieldValue806.value = "-0.197999998927116 0.688300013542175 -0.0179999992251396";
ProtoInstance804.fieldValue[1] = fieldValue806;

fieldValue803.children = new MFNode();

fieldValue803.children[0] = ProtoInstance804;

let ProtoInstance807 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance807.name = "Site";
ProtoInstance807.DEF = "hanim_r_dactylion_2";
let fieldValue808 = browser.currentScene.createNode("fieldValue");
fieldValue808.name = "name";
fieldValue808.value = "r_dactylion";
ProtoInstance807.fieldValue = new MFNode();

ProtoInstance807.fieldValue[0] = fieldValue808;

let fieldValue809 = browser.currentScene.createNode("fieldValue");
fieldValue809.name = "translation";
fieldValue809.value = "-0.194100007414818 0.677200019359589 -0.0423000007867813";
ProtoInstance807.fieldValue[1] = fieldValue809;

fieldValue803.children[1] = ProtoInstance807;

ProtoInstance801.fieldValue[1] = fieldValue803;

fieldValue800.children = new MFNode();

fieldValue800.children[0] = ProtoInstance801;

ProtoInstance796.fieldValue[3] = fieldValue800;

fieldValue795.children = new MFNode();

fieldValue795.children[0] = ProtoInstance796;

let ProtoInstance810 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance810.name = "Segment";
ProtoInstance810.DEF = "hanim_r_index_middle_2";
let fieldValue811 = browser.currentScene.createNode("fieldValue");
fieldValue811.name = "name";
fieldValue811.value = "r_index_middle";
ProtoInstance810.fieldValue = new MFNode();

ProtoInstance810.fieldValue[0] = fieldValue811;

fieldValue795.children[1] = ProtoInstance810;

ProtoInstance791.fieldValue[3] = fieldValue795;

fieldValue790.children = new MFNode();

fieldValue790.children[0] = ProtoInstance791;

let ProtoInstance812 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance812.name = "Segment";
ProtoInstance812.DEF = "hanim_r_index_proximal_6";
let fieldValue813 = browser.currentScene.createNode("fieldValue");
fieldValue813.name = "name";
fieldValue813.value = "r_index_proximal";
ProtoInstance812.fieldValue = new MFNode();

ProtoInstance812.fieldValue[0] = fieldValue813;

fieldValue790.children[1] = ProtoInstance812;

ProtoInstance786.fieldValue[3] = fieldValue790;

fieldValue785.children = new MFNode();

fieldValue785.children[0] = ProtoInstance786;

let ProtoInstance814 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance814.name = "Segment";
ProtoInstance814.DEF = "hanim_r_index_metacarpal_2";
let fieldValue815 = browser.currentScene.createNode("fieldValue");
fieldValue815.name = "name";
fieldValue815.value = "r_index_metacarpal";
ProtoInstance814.fieldValue = new MFNode();

ProtoInstance814.fieldValue[0] = fieldValue815;

fieldValue785.children[1] = ProtoInstance814;

ProtoInstance781.fieldValue[3] = fieldValue785;

fieldValue755.children[1] = ProtoInstance781;

let ProtoInstance816 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance816.name = "Joint";
ProtoInstance816.DEF = "hanim_r_carpometacarpal4";
let fieldValue817 = browser.currentScene.createNode("fieldValue");
fieldValue817.name = "stiffness";
fieldValue817.value = "1 1 1";
ProtoInstance816.fieldValue = new MFNode();

ProtoInstance816.fieldValue[0] = fieldValue817;

let fieldValue818 = browser.currentScene.createNode("fieldValue");
fieldValue818.name = "name";
fieldValue818.value = "r_carpometacarpal_3";
ProtoInstance816.fieldValue[1] = fieldValue818;

let fieldValue819 = browser.currentScene.createNode("fieldValue");
fieldValue819.name = "center";
fieldValue819.value = "-0.197200000286102 0.805999994277954 -0.0467999987304211";
ProtoInstance816.fieldValue[2] = fieldValue819;

let fieldValue820 = browser.currentScene.createNode("fieldValue");
fieldValue820.name = "children";
let ProtoInstance821 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance821.name = "Joint";
ProtoInstance821.DEF = "hanim_r_metacarpophalangeal4";
let fieldValue822 = browser.currentScene.createNode("fieldValue");
fieldValue822.name = "stiffness";
fieldValue822.value = "1 1 1";
ProtoInstance821.fieldValue = new MFNode();

ProtoInstance821.fieldValue[0] = fieldValue822;

let fieldValue823 = browser.currentScene.createNode("fieldValue");
fieldValue823.name = "name";
fieldValue823.value = "r_metacarpophalangeal_3";
ProtoInstance821.fieldValue[1] = fieldValue823;

let fieldValue824 = browser.currentScene.createNode("fieldValue");
fieldValue824.name = "center";
fieldValue824.value = "-0.197200000286102 0.784900009632111 -0.0467999987304211";
ProtoInstance821.fieldValue[2] = fieldValue824;

let fieldValue825 = browser.currentScene.createNode("fieldValue");
fieldValue825.name = "children";
let ProtoInstance826 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance826.name = "Joint";
ProtoInstance826.DEF = "hanim_r_carpal_proximal_interphalangeal4";
let fieldValue827 = browser.currentScene.createNode("fieldValue");
fieldValue827.name = "stiffness";
fieldValue827.value = "1 1 1";
ProtoInstance826.fieldValue = new MFNode();

ProtoInstance826.fieldValue[0] = fieldValue827;

let fieldValue828 = browser.currentScene.createNode("fieldValue");
fieldValue828.name = "name";
fieldValue828.value = "r_carpal_proximal_interphalangeal_3";
ProtoInstance826.fieldValue[1] = fieldValue828;

let fieldValue829 = browser.currentScene.createNode("fieldValue");
fieldValue829.name = "center";
fieldValue829.value = "-0.194999992847443 0.730400025844574 -0.0441000014543533";
ProtoInstance826.fieldValue[2] = fieldValue829;

let fieldValue830 = browser.currentScene.createNode("fieldValue");
fieldValue830.name = "children";
let ProtoInstance831 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance831.name = "Joint";
ProtoInstance831.DEF = "hanim_r_carpal_distal_interphalangeal4";
let fieldValue832 = browser.currentScene.createNode("fieldValue");
fieldValue832.name = "stiffness";
fieldValue832.value = "1 1 1";
ProtoInstance831.fieldValue = new MFNode();

ProtoInstance831.fieldValue[0] = fieldValue832;

let fieldValue833 = browser.currentScene.createNode("fieldValue");
fieldValue833.name = "name";
fieldValue833.value = "r_carpal_distal_interphalangeal_3";
ProtoInstance831.fieldValue[1] = fieldValue833;

let fieldValue834 = browser.currentScene.createNode("fieldValue");
fieldValue834.name = "center";
fieldValue834.value = "-0.193900004029274 0.704200029373169 -0.0432000011205673";
ProtoInstance831.fieldValue[2] = fieldValue834;

let fieldValue835 = browser.currentScene.createNode("fieldValue");
fieldValue835.name = "children";
let ProtoInstance836 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance836.name = "Segment";
ProtoInstance836.DEF = "hanim_r_carpal_distal_phalanx4";
let fieldValue837 = browser.currentScene.createNode("fieldValue");
fieldValue837.name = "name";
fieldValue837.value = "r_carpal_distal_phalanx_3";
ProtoInstance836.fieldValue = new MFNode();

ProtoInstance836.fieldValue[0] = fieldValue837;

let fieldValue838 = browser.currentScene.createNode("fieldValue");
fieldValue838.name = "children";
let ProtoInstance839 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance839.name = "Site";
ProtoInstance839.DEF = "hanim_r_carpal_distal_phalanx_3_tip_2";
let fieldValue840 = browser.currentScene.createNode("fieldValue");
fieldValue840.name = "name";
fieldValue840.value = "r_carpal_distal_phalanx_3_tip";
ProtoInstance839.fieldValue = new MFNode();

ProtoInstance839.fieldValue[0] = fieldValue840;

let fieldValue841 = browser.currentScene.createNode("fieldValue");
fieldValue841.name = "translation";
fieldValue841.value = "-0.196899995207787 0.675800025463104 -0.0427000001072884";
ProtoInstance839.fieldValue[1] = fieldValue841;

fieldValue838.children = new MFNode();

fieldValue838.children[0] = ProtoInstance839;

ProtoInstance836.fieldValue[1] = fieldValue838;

fieldValue835.children = new MFNode();

fieldValue835.children[0] = ProtoInstance836;

ProtoInstance831.fieldValue[3] = fieldValue835;

fieldValue830.children = new MFNode();

fieldValue830.children[0] = ProtoInstance831;

let ProtoInstance842 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance842.name = "Segment";
ProtoInstance842.DEF = "hanim_r_middle_middle_2";
let fieldValue843 = browser.currentScene.createNode("fieldValue");
fieldValue843.name = "name";
fieldValue843.value = "r_middle_middle";
ProtoInstance842.fieldValue = new MFNode();

ProtoInstance842.fieldValue[0] = fieldValue843;

fieldValue830.children[1] = ProtoInstance842;

ProtoInstance826.fieldValue[3] = fieldValue830;

fieldValue825.children = new MFNode();

fieldValue825.children[0] = ProtoInstance826;

let ProtoInstance844 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance844.name = "Segment";
ProtoInstance844.DEF = "hanim_r_middle_proximal_2";
let fieldValue845 = browser.currentScene.createNode("fieldValue");
fieldValue845.name = "name";
fieldValue845.value = "r_middle_proximal";
ProtoInstance844.fieldValue = new MFNode();

ProtoInstance844.fieldValue[0] = fieldValue845;

fieldValue825.children[1] = ProtoInstance844;

ProtoInstance821.fieldValue[3] = fieldValue825;

fieldValue820.children = new MFNode();

fieldValue820.children[0] = ProtoInstance821;

let ProtoInstance846 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance846.name = "Segment";
ProtoInstance846.DEF = "hanim_r_middle_metacarpal_2";
let fieldValue847 = browser.currentScene.createNode("fieldValue");
fieldValue847.name = "name";
fieldValue847.value = "r_middle_metacarpal";
ProtoInstance846.fieldValue = new MFNode();

ProtoInstance846.fieldValue[0] = fieldValue847;

fieldValue820.children[1] = ProtoInstance846;

ProtoInstance816.fieldValue[3] = fieldValue820;

fieldValue755.children[2] = ProtoInstance816;

let ProtoInstance848 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance848.name = "Joint";
ProtoInstance848.DEF = "hanim_r_carpometacarpal5";
let fieldValue849 = browser.currentScene.createNode("fieldValue");
fieldValue849.name = "stiffness";
fieldValue849.value = "1 1 1";
ProtoInstance848.fieldValue = new MFNode();

ProtoInstance848.fieldValue[0] = fieldValue849;

let fieldValue850 = browser.currentScene.createNode("fieldValue");
fieldValue850.name = "name";
fieldValue850.value = "r_carpometacarpal_4";
ProtoInstance848.fieldValue[1] = fieldValue850;

let fieldValue851 = browser.currentScene.createNode("fieldValue");
fieldValue851.name = "center";
fieldValue851.value = "-0.195099994540215 0.804899990558624 -0.0732000023126602";
ProtoInstance848.fieldValue[2] = fieldValue851;

let fieldValue852 = browser.currentScene.createNode("fieldValue");
fieldValue852.name = "children";
let ProtoInstance853 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance853.name = "Joint";
ProtoInstance853.DEF = "hanim_r_metacarpophalangeal5";
let fieldValue854 = browser.currentScene.createNode("fieldValue");
fieldValue854.name = "stiffness";
fieldValue854.value = "1 1 1";
ProtoInstance853.fieldValue = new MFNode();

ProtoInstance853.fieldValue[0] = fieldValue854;

let fieldValue855 = browser.currentScene.createNode("fieldValue");
fieldValue855.name = "name";
fieldValue855.value = "r_metacarpophalangeal_4";
ProtoInstance853.fieldValue[1] = fieldValue855;

let fieldValue856 = browser.currentScene.createNode("fieldValue");
fieldValue856.name = "center";
fieldValue856.value = "-0.195099994540215 0.784500002861023 -0.0732000023126602";
ProtoInstance853.fieldValue[2] = fieldValue856;

let fieldValue857 = browser.currentScene.createNode("fieldValue");
fieldValue857.name = "children";
let ProtoInstance858 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance858.name = "Joint";
ProtoInstance858.DEF = "hanim_r_carpal_proximal_interphalangeal5";
let fieldValue859 = browser.currentScene.createNode("fieldValue");
fieldValue859.name = "stiffness";
fieldValue859.value = "1 1 1";
ProtoInstance858.fieldValue = new MFNode();

ProtoInstance858.fieldValue[0] = fieldValue859;

let fieldValue860 = browser.currentScene.createNode("fieldValue");
fieldValue860.name = "name";
fieldValue860.value = "r_carpal_proximal_interphalangeal_4";
ProtoInstance858.fieldValue[1] = fieldValue860;

let fieldValue861 = browser.currentScene.createNode("fieldValue");
fieldValue861.name = "center";
fieldValue861.value = "-0.19200000166893 0.731800019741058 -0.0715999975800514";
ProtoInstance858.fieldValue[2] = fieldValue861;

let fieldValue862 = browser.currentScene.createNode("fieldValue");
fieldValue862.name = "children";
let ProtoInstance863 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance863.name = "Joint";
ProtoInstance863.DEF = "hanim_r_carpal_distal_interphalangeal5";
let fieldValue864 = browser.currentScene.createNode("fieldValue");
fieldValue864.name = "stiffness";
fieldValue864.value = "1 1 1";
ProtoInstance863.fieldValue = new MFNode();

ProtoInstance863.fieldValue[0] = fieldValue864;

let fieldValue865 = browser.currentScene.createNode("fieldValue");
fieldValue865.name = "name";
fieldValue865.value = "r_carpal_distal_interphalangeal_4";
ProtoInstance863.fieldValue[1] = fieldValue865;

let fieldValue866 = browser.currentScene.createNode("fieldValue");
fieldValue866.name = "center";
fieldValue866.value = "-0.190799996256828 0.70770001411438 -0.0706000030040741";
ProtoInstance863.fieldValue[2] = fieldValue866;

let fieldValue867 = browser.currentScene.createNode("fieldValue");
fieldValue867.name = "children";
let ProtoInstance868 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance868.name = "Segment";
ProtoInstance868.DEF = "hanim_r_carpal_distal_phalanx5";
let fieldValue869 = browser.currentScene.createNode("fieldValue");
fieldValue869.name = "name";
fieldValue869.value = "r_carpal_distal_phalanx_4";
ProtoInstance868.fieldValue = new MFNode();

ProtoInstance868.fieldValue[0] = fieldValue869;

let fieldValue870 = browser.currentScene.createNode("fieldValue");
fieldValue870.name = "children";
let ProtoInstance871 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance871.name = "Site";
ProtoInstance871.DEF = "hanim_r_carpal_distal_phalanx_4_tip_2";
let fieldValue872 = browser.currentScene.createNode("fieldValue");
fieldValue872.name = "name";
fieldValue872.value = "r_carpal_distal_phalanx_4_tip";
ProtoInstance871.fieldValue = new MFNode();

ProtoInstance871.fieldValue[0] = fieldValue872;

let fieldValue873 = browser.currentScene.createNode("fieldValue");
fieldValue873.name = "translation";
fieldValue873.value = "-0.193399995565414 0.677799999713898 -0.069300003349781";
ProtoInstance871.fieldValue[1] = fieldValue873;

fieldValue870.children = new MFNode();

fieldValue870.children[0] = ProtoInstance871;

ProtoInstance868.fieldValue[1] = fieldValue870;

fieldValue867.children = new MFNode();

fieldValue867.children[0] = ProtoInstance868;

ProtoInstance863.fieldValue[3] = fieldValue867;

fieldValue862.children = new MFNode();

fieldValue862.children[0] = ProtoInstance863;

let ProtoInstance874 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance874.name = "Segment";
ProtoInstance874.DEF = "hanim_r_ring_middle_2";
let fieldValue875 = browser.currentScene.createNode("fieldValue");
fieldValue875.name = "name";
fieldValue875.value = "r_ring_middle";
ProtoInstance874.fieldValue = new MFNode();

ProtoInstance874.fieldValue[0] = fieldValue875;

fieldValue862.children[1] = ProtoInstance874;

ProtoInstance858.fieldValue[3] = fieldValue862;

fieldValue857.children = new MFNode();

fieldValue857.children[0] = ProtoInstance858;

let ProtoInstance876 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance876.name = "Segment";
ProtoInstance876.DEF = "hanim_r_ring_proximal_2";
let fieldValue877 = browser.currentScene.createNode("fieldValue");
fieldValue877.name = "name";
fieldValue877.value = "r_ring_proximal";
ProtoInstance876.fieldValue = new MFNode();

ProtoInstance876.fieldValue[0] = fieldValue877;

fieldValue857.children[1] = ProtoInstance876;

ProtoInstance853.fieldValue[3] = fieldValue857;

fieldValue852.children = new MFNode();

fieldValue852.children[0] = ProtoInstance853;

let ProtoInstance878 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance878.name = "Segment";
ProtoInstance878.DEF = "hanim_r_ring_metacarpal_2";
let fieldValue879 = browser.currentScene.createNode("fieldValue");
fieldValue879.name = "name";
fieldValue879.value = "r_ring_metacarpal";
ProtoInstance878.fieldValue = new MFNode();

ProtoInstance878.fieldValue[0] = fieldValue879;

fieldValue852.children[1] = ProtoInstance878;

ProtoInstance848.fieldValue[3] = fieldValue852;

fieldValue755.children[3] = ProtoInstance848;

let ProtoInstance880 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance880.name = "Joint";
ProtoInstance880.DEF = "hanim_r_carpometacarpal6";
let fieldValue881 = browser.currentScene.createNode("fieldValue");
fieldValue881.name = "stiffness";
fieldValue881.value = "1 1 1";
ProtoInstance880.fieldValue = new MFNode();

ProtoInstance880.fieldValue[0] = fieldValue881;

let fieldValue882 = browser.currentScene.createNode("fieldValue");
fieldValue882.name = "name";
fieldValue882.value = "r_carpometacarpal_5";
ProtoInstance880.fieldValue[1] = fieldValue882;

let fieldValue883 = browser.currentScene.createNode("fieldValue");
fieldValue883.name = "center";
fieldValue883.value = "-0.1925999969244 0.809599995613098 -0.0974999964237213";
ProtoInstance880.fieldValue[2] = fieldValue883;

let fieldValue884 = browser.currentScene.createNode("fieldValue");
fieldValue884.name = "children";
let ProtoInstance885 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance885.name = "Joint";
ProtoInstance885.DEF = "hanim_r_metacarpophalangeal6";
let fieldValue886 = browser.currentScene.createNode("fieldValue");
fieldValue886.name = "stiffness";
fieldValue886.value = "1 1 1";
ProtoInstance885.fieldValue = new MFNode();

ProtoInstance885.fieldValue[0] = fieldValue886;

let fieldValue887 = browser.currentScene.createNode("fieldValue");
fieldValue887.name = "name";
fieldValue887.value = "r_metacarpophalangeal_5";
ProtoInstance885.fieldValue[1] = fieldValue887;

let fieldValue888 = browser.currentScene.createNode("fieldValue");
fieldValue888.name = "center";
fieldValue888.value = "-0.1925999969244 0.789600014686584 -0.0974999964237213";
ProtoInstance885.fieldValue[2] = fieldValue888;

let fieldValue889 = browser.currentScene.createNode("fieldValue");
fieldValue889.name = "children";
let ProtoInstance890 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance890.name = "Joint";
ProtoInstance890.DEF = "hanim_r_carpal_proximal_interphalangeal6";
let fieldValue891 = browser.currentScene.createNode("fieldValue");
fieldValue891.name = "stiffness";
fieldValue891.value = "1 1 1";
ProtoInstance890.fieldValue = new MFNode();

ProtoInstance890.fieldValue[0] = fieldValue891;

let fieldValue892 = browser.currentScene.createNode("fieldValue");
fieldValue892.name = "name";
fieldValue892.value = "r_carpal_proximal_interphalangeal_5";
ProtoInstance890.fieldValue[1] = fieldValue892;

let fieldValue893 = browser.currentScene.createNode("fieldValue");
fieldValue893.name = "center";
fieldValue893.value = "-0.190200001001358 0.748300015926361 -0.0962999984622002";
ProtoInstance890.fieldValue[2] = fieldValue893;

let fieldValue894 = browser.currentScene.createNode("fieldValue");
fieldValue894.name = "children";
let ProtoInstance895 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance895.name = "Joint";
ProtoInstance895.DEF = "hanim_r_carpal_distal_interphalangeal6";
let fieldValue896 = browser.currentScene.createNode("fieldValue");
fieldValue896.name = "stiffness";
fieldValue896.value = "1 1 1";
ProtoInstance895.fieldValue = new MFNode();

ProtoInstance895.fieldValue[0] = fieldValue896;

let fieldValue897 = browser.currentScene.createNode("fieldValue");
fieldValue897.name = "name";
fieldValue897.value = "r_carpal_distal_interphalangeal_5";
ProtoInstance895.fieldValue[1] = fieldValue897;

let fieldValue898 = browser.currentScene.createNode("fieldValue");
fieldValue898.name = "center";
fieldValue898.value = "-0.190799996256828 0.754000008106232 -0.096000000834465";
ProtoInstance895.fieldValue[2] = fieldValue898;

let fieldValue899 = browser.currentScene.createNode("fieldValue");
fieldValue899.name = "children";
let ProtoInstance900 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance900.name = "Segment";
ProtoInstance900.DEF = "hanim_r_carpal_distal_phalanx6";
let fieldValue901 = browser.currentScene.createNode("fieldValue");
fieldValue901.name = "name";
fieldValue901.value = "r_carpal_distal_phalanx_5";
ProtoInstance900.fieldValue = new MFNode();

ProtoInstance900.fieldValue[0] = fieldValue901;

let fieldValue902 = browser.currentScene.createNode("fieldValue");
fieldValue902.name = "children";
let ProtoInstance903 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance903.name = "Site";
ProtoInstance903.DEF = "hanim_r_carpal_distal_phalanx_5_tip_2";
let fieldValue904 = browser.currentScene.createNode("fieldValue");
fieldValue904.name = "name";
fieldValue904.value = "r_carpal_distal_phalanx_5_tip";
ProtoInstance903.fieldValue = new MFNode();

ProtoInstance903.fieldValue[0] = fieldValue904;

let fieldValue905 = browser.currentScene.createNode("fieldValue");
fieldValue905.name = "translation";
fieldValue905.value = "-0.193800002336502 0.703499972820282 -0.0948999971151352";
ProtoInstance903.fieldValue[1] = fieldValue905;

fieldValue902.children = new MFNode();

fieldValue902.children[0] = ProtoInstance903;

ProtoInstance900.fieldValue[1] = fieldValue902;

fieldValue899.children = new MFNode();

fieldValue899.children[0] = ProtoInstance900;

ProtoInstance895.fieldValue[3] = fieldValue899;

fieldValue894.children = new MFNode();

fieldValue894.children[0] = ProtoInstance895;

let ProtoInstance906 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance906.name = "Segment";
ProtoInstance906.DEF = "hanim_r_pinky_middle_2";
let fieldValue907 = browser.currentScene.createNode("fieldValue");
fieldValue907.name = "name";
fieldValue907.value = "r_pinky_middle";
ProtoInstance906.fieldValue = new MFNode();

ProtoInstance906.fieldValue[0] = fieldValue907;

fieldValue894.children[1] = ProtoInstance906;

ProtoInstance890.fieldValue[3] = fieldValue894;

fieldValue889.children = new MFNode();

fieldValue889.children[0] = ProtoInstance890;

let ProtoInstance908 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance908.name = "Segment";
ProtoInstance908.DEF = "hanim_r_pinky_proximal_2";
let fieldValue909 = browser.currentScene.createNode("fieldValue");
fieldValue909.name = "name";
fieldValue909.value = "r_pinky_proximal";
ProtoInstance908.fieldValue = new MFNode();

ProtoInstance908.fieldValue[0] = fieldValue909;

fieldValue889.children[1] = ProtoInstance908;

ProtoInstance885.fieldValue[3] = fieldValue889;

fieldValue884.children = new MFNode();

fieldValue884.children[0] = ProtoInstance885;

let ProtoInstance910 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance910.name = "Segment";
ProtoInstance910.DEF = "hanim_r_pinky_metacarpal_2";
let fieldValue911 = browser.currentScene.createNode("fieldValue");
fieldValue911.name = "name";
fieldValue911.value = "r_pinky_metacarpal";
ProtoInstance910.fieldValue = new MFNode();

ProtoInstance910.fieldValue[0] = fieldValue911;

fieldValue884.children[1] = ProtoInstance910;

ProtoInstance880.fieldValue[3] = fieldValue884;

fieldValue755.children[4] = ProtoInstance880;

let ProtoInstance912 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance912.name = "Segment";
ProtoInstance912.DEF = "hanim_r_hand_2";
let fieldValue913 = browser.currentScene.createNode("fieldValue");
fieldValue913.name = "name";
fieldValue913.value = "r_hand";
ProtoInstance912.fieldValue = new MFNode();

ProtoInstance912.fieldValue[0] = fieldValue913;

let fieldValue914 = browser.currentScene.createNode("fieldValue");
fieldValue914.name = "children";
let ProtoInstance915 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance915.name = "Site";
ProtoInstance915.DEF = "hanim_r_metacarpal_phalanx3";
let fieldValue916 = browser.currentScene.createNode("fieldValue");
fieldValue916.name = "name";
fieldValue916.value = "r_metacarpal_phalanx_2";
ProtoInstance915.fieldValue = new MFNode();

ProtoInstance915.fieldValue[0] = fieldValue916;

let fieldValue917 = browser.currentScene.createNode("fieldValue");
fieldValue917.name = "translation";
fieldValue917.value = "-0.197699993848801 0.816900014877319 -0.0176999997347593";
ProtoInstance915.fieldValue[1] = fieldValue917;

fieldValue914.children = new MFNode();

fieldValue914.children[0] = ProtoInstance915;

let ProtoInstance918 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance918.name = "Site";
ProtoInstance918.DEF = "hanim_r_ulnar_styloid_2";
let fieldValue919 = browser.currentScene.createNode("fieldValue");
fieldValue919.name = "name";
fieldValue919.value = "r_ulnar_styloid";
ProtoInstance918.fieldValue = new MFNode();

ProtoInstance918.fieldValue[0] = fieldValue919;

let fieldValue920 = browser.currentScene.createNode("fieldValue");
fieldValue920.name = "translation";
fieldValue920.value = "-0.21170000731945 0.856199979782104 -0.0584000013768673";
ProtoInstance918.fieldValue[1] = fieldValue920;

fieldValue914.children[1] = ProtoInstance918;

let ProtoInstance921 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance921.name = "Site";
ProtoInstance921.DEF = "hanim_r_metacarpal_phalanx6";
let fieldValue922 = browser.currentScene.createNode("fieldValue");
fieldValue922.name = "name";
fieldValue922.value = "r_metacarpal_phalanx_5";
ProtoInstance921.fieldValue = new MFNode();

ProtoInstance921.fieldValue[0] = fieldValue922;

let fieldValue923 = browser.currentScene.createNode("fieldValue");
fieldValue923.name = "translation";
fieldValue923.value = "-0.192900002002716 0.788999974727631 -0.10639999806881";
ProtoInstance921.fieldValue[1] = fieldValue923;

fieldValue914.children[2] = ProtoInstance921;

ProtoInstance912.fieldValue[1] = fieldValue914;

fieldValue755.children[5] = ProtoInstance912;

ProtoInstance751.fieldValue[3] = fieldValue755;

fieldValue750.children = new MFNode();

fieldValue750.children[0] = ProtoInstance751;

let ProtoInstance924 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance924.name = "Segment";
ProtoInstance924.DEF = "hanim_r_forearm_2";
let fieldValue925 = browser.currentScene.createNode("fieldValue");
fieldValue925.name = "name";
fieldValue925.value = "r_forearm";
ProtoInstance924.fieldValue = new MFNode();

ProtoInstance924.fieldValue[0] = fieldValue925;

let fieldValue926 = browser.currentScene.createNode("fieldValue");
fieldValue926.name = "children";
let ProtoInstance927 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance927.name = "Site";
ProtoInstance927.DEF = "hanim_r_radial_styloid_2";
let fieldValue928 = browser.currentScene.createNode("fieldValue");
fieldValue928.name = "name";
fieldValue928.value = "r_radial_styloid";
ProtoInstance927.fieldValue = new MFNode();

ProtoInstance927.fieldValue[0] = fieldValue928;

let fieldValue929 = browser.currentScene.createNode("fieldValue");
fieldValue929.name = "translation";
fieldValue929.value = "-0.188400000333786 0.86760002374649 -0.0359999984502792";
ProtoInstance927.fieldValue[1] = fieldValue929;

fieldValue926.children = new MFNode();

fieldValue926.children[0] = ProtoInstance927;

let ProtoInstance930 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance930.name = "Site";
ProtoInstance930.DEF = "hanim_r_olecranon_2";
let fieldValue931 = browser.currentScene.createNode("fieldValue");
fieldValue931.name = "name";
fieldValue931.value = "r_olecranon";
ProtoInstance930.fieldValue = new MFNode();

ProtoInstance930.fieldValue[0] = fieldValue931;

let fieldValue932 = browser.currentScene.createNode("fieldValue");
fieldValue932.name = "translation";
fieldValue932.value = "-0.190699994564056 1.14049994945526 -0.106499999761581";
ProtoInstance930.fieldValue[1] = fieldValue932;

fieldValue926.children[1] = ProtoInstance930;

let ProtoInstance933 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance933.name = "Site";
ProtoInstance933.DEF = "hanim_r_humeral_medial_epicondyles_2";
let fieldValue934 = browser.currentScene.createNode("fieldValue");
fieldValue934.name = "name";
fieldValue934.value = "r_humeral_medial_epicondyles";
ProtoInstance933.fieldValue = new MFNode();

ProtoInstance933.fieldValue[0] = fieldValue934;

let fieldValue935 = browser.currentScene.createNode("fieldValue");
fieldValue935.name = "translation";
fieldValue935.value = "-0.167999997735024 1.12979996204376 -0.106200002133846";
ProtoInstance933.fieldValue[1] = fieldValue935;

fieldValue926.children[2] = ProtoInstance933;

let ProtoInstance936 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance936.name = "Site";
ProtoInstance936.DEF = "hanim_r_radiale_2";
let fieldValue937 = browser.currentScene.createNode("fieldValue");
fieldValue937.name = "name";
fieldValue937.value = "r_radiale";
ProtoInstance936.fieldValue = new MFNode();

ProtoInstance936.fieldValue[0] = fieldValue937;

let fieldValue938 = browser.currentScene.createNode("fieldValue");
fieldValue938.name = "translation";
fieldValue938.value = "-0.212999999523163 1.130499958992 -0.109099999070168";
ProtoInstance936.fieldValue[1] = fieldValue938;

fieldValue926.children[3] = ProtoInstance936;

ProtoInstance924.fieldValue[1] = fieldValue926;

fieldValue750.children[1] = ProtoInstance924;

ProtoInstance746.fieldValue[3] = fieldValue750;

fieldValue745.children = new MFNode();

fieldValue745.children[0] = ProtoInstance746;

let ProtoInstance939 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance939.name = "Segment";
ProtoInstance939.DEF = "hanim_r_upperarm_2";
let fieldValue940 = browser.currentScene.createNode("fieldValue");
fieldValue940.name = "name";
fieldValue940.value = "r_upperarm";
ProtoInstance939.fieldValue = new MFNode();

ProtoInstance939.fieldValue[0] = fieldValue940;

let fieldValue941 = browser.currentScene.createNode("fieldValue");
fieldValue941.name = "children";
let ProtoInstance942 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance942.name = "Site";
ProtoInstance942.DEF = "hanim_r_humeral_lateral_epicondyles_2";
let fieldValue943 = browser.currentScene.createNode("fieldValue");
fieldValue943.name = "name";
fieldValue943.value = "r_humeral_lateral_epicondyles";
ProtoInstance942.fieldValue = new MFNode();

ProtoInstance942.fieldValue[0] = fieldValue943;

let fieldValue944 = browser.currentScene.createNode("fieldValue");
fieldValue944.name = "translation";
fieldValue944.value = "-0.222399994730949 1.15170001983643 -0.103299997746944";
ProtoInstance942.fieldValue[1] = fieldValue944;

fieldValue941.children = new MFNode();

fieldValue941.children[0] = ProtoInstance942;

ProtoInstance939.fieldValue[1] = fieldValue941;

fieldValue745.children[1] = ProtoInstance939;

ProtoInstance741.fieldValue[3] = fieldValue745;

fieldValue740.children = new MFNode();

fieldValue740.children[0] = ProtoInstance741;

let ProtoInstance945 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance945.name = "Segment";
ProtoInstance945.DEF = "hanim_r_scapula_2";
let fieldValue946 = browser.currentScene.createNode("fieldValue");
fieldValue946.name = "name";
fieldValue946.value = "r_scapula";
ProtoInstance945.fieldValue = new MFNode();

ProtoInstance945.fieldValue[0] = fieldValue946;

fieldValue740.children[1] = ProtoInstance945;

ProtoInstance736.fieldValue[3] = fieldValue740;

fieldValue735.children = new MFNode();

fieldValue735.children[0] = ProtoInstance736;

let ProtoInstance947 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance947.name = "Segment";
ProtoInstance947.DEF = "hanim_r_clavicle_2";
let fieldValue948 = browser.currentScene.createNode("fieldValue");
fieldValue948.name = "name";
fieldValue948.value = "r_clavicle";
ProtoInstance947.fieldValue = new MFNode();

ProtoInstance947.fieldValue[0] = fieldValue948;

let fieldValue949 = browser.currentScene.createNode("fieldValue");
fieldValue949.name = "children";
let ProtoInstance950 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance950.name = "Site";
ProtoInstance950.DEF = "hanim_r_clavicale_2";
let fieldValue951 = browser.currentScene.createNode("fieldValue");
fieldValue951.name = "name";
fieldValue951.value = "r_clavicale";
ProtoInstance950.fieldValue = new MFNode();

ProtoInstance950.fieldValue[0] = fieldValue951;

let fieldValue952 = browser.currentScene.createNode("fieldValue");
fieldValue952.name = "translation";
fieldValue952.value = "-0.0115000000223517 1.49430000782013 0.0399999991059303";
ProtoInstance950.fieldValue[1] = fieldValue952;

fieldValue949.children = new MFNode();

fieldValue949.children[0] = ProtoInstance950;

let ProtoInstance953 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance953.name = "Site";
ProtoInstance953.DEF = "hanim_r_acromion_2";
let fieldValue954 = browser.currentScene.createNode("fieldValue");
fieldValue954.name = "name";
fieldValue954.value = "r_acromion";
ProtoInstance953.fieldValue = new MFNode();

ProtoInstance953.fieldValue[0] = fieldValue954;

let fieldValue955 = browser.currentScene.createNode("fieldValue");
fieldValue955.name = "translation";
fieldValue955.value = "-0.190500006079674 1.47909998893738 -0.0430999994277954";
ProtoInstance953.fieldValue[1] = fieldValue955;

fieldValue949.children[1] = ProtoInstance953;

let ProtoInstance956 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance956.name = "Site";
ProtoInstance956.DEF = "hanim_r_axilla_proximal_2";
let fieldValue957 = browser.currentScene.createNode("fieldValue");
fieldValue957.name = "name";
fieldValue957.value = "r_axilla_proximal";
ProtoInstance956.fieldValue = new MFNode();

ProtoInstance956.fieldValue[0] = fieldValue957;

let fieldValue958 = browser.currentScene.createNode("fieldValue");
fieldValue958.name = "translation";
fieldValue958.value = "-0.162599995732307 1.40719997882843 -0.00310000008903444";
ProtoInstance956.fieldValue[1] = fieldValue958;

fieldValue949.children[2] = ProtoInstance956;

let ProtoInstance959 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance959.name = "Site";
ProtoInstance959.DEF = "hanim_r_axilla_distal_2";
let fieldValue960 = browser.currentScene.createNode("fieldValue");
fieldValue960.name = "name";
fieldValue960.value = "r_axilla_distal";
ProtoInstance959.fieldValue = new MFNode();

ProtoInstance959.fieldValue[0] = fieldValue960;

let fieldValue961 = browser.currentScene.createNode("fieldValue");
fieldValue961.name = "translation";
fieldValue961.value = "-0.160300001502037 1.40980005264282 -0.0825999975204468";
ProtoInstance959.fieldValue[1] = fieldValue961;

fieldValue949.children[3] = ProtoInstance959;

ProtoInstance947.fieldValue[1] = fieldValue949;

fieldValue735.children[1] = ProtoInstance947;

ProtoInstance731.fieldValue[3] = fieldValue735;

fieldValue391.children[2] = ProtoInstance731;

let ProtoInstance962 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance962.name = "Segment";
ProtoInstance962.DEF = "hanim_t1_2";
let fieldValue963 = browser.currentScene.createNode("fieldValue");
fieldValue963.name = "name";
fieldValue963.value = "t1";
ProtoInstance962.fieldValue = new MFNode();

ProtoInstance962.fieldValue[0] = fieldValue963;

let fieldValue964 = browser.currentScene.createNode("fieldValue");
fieldValue964.name = "children";
let ProtoInstance965 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance965.name = "Site";
ProtoInstance965.DEF = "hanim_suprasternale_2";
let fieldValue966 = browser.currentScene.createNode("fieldValue");
fieldValue966.name = "name";
fieldValue966.value = "suprasternale";
ProtoInstance965.fieldValue = new MFNode();

ProtoInstance965.fieldValue[0] = fieldValue966;

let fieldValue967 = browser.currentScene.createNode("fieldValue");
fieldValue967.name = "translation";
fieldValue967.value = "0.00839999970048666 1.47140002250671 0.0551000013947487";
ProtoInstance965.fieldValue[1] = fieldValue967;

fieldValue964.children = new MFNode();

fieldValue964.children[0] = ProtoInstance965;

let ProtoInstance968 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance968.name = "Site";
ProtoInstance968.DEF = "hanim_cervicale_2";
let fieldValue969 = browser.currentScene.createNode("fieldValue");
fieldValue969.name = "name";
fieldValue969.value = "cervicale";
ProtoInstance968.fieldValue = new MFNode();

ProtoInstance968.fieldValue[0] = fieldValue969;

let fieldValue970 = browser.currentScene.createNode("fieldValue");
fieldValue970.name = "translation";
fieldValue970.value = "0.0063999998383224 1.51999998092651 -0.0815000012516975";
ProtoInstance968.fieldValue[1] = fieldValue970;

fieldValue964.children[1] = ProtoInstance968;

ProtoInstance962.fieldValue[1] = fieldValue964;

fieldValue391.children[3] = ProtoInstance962;

ProtoInstance387.fieldValue[3] = fieldValue391;

fieldValue386.children = new MFNode();

fieldValue386.children[0] = ProtoInstance387;

let ProtoInstance971 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance971.name = "Segment";
ProtoInstance971.DEF = "hanim_t2_2";
let fieldValue972 = browser.currentScene.createNode("fieldValue");
fieldValue972.name = "name";
fieldValue972.value = "t2";
ProtoInstance971.fieldValue = new MFNode();

ProtoInstance971.fieldValue[0] = fieldValue972;

fieldValue386.children[1] = ProtoInstance971;

ProtoInstance382.fieldValue[3] = fieldValue386;

fieldValue381.children = new MFNode();

fieldValue381.children[0] = ProtoInstance382;

let ProtoInstance973 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance973.name = "Segment";
ProtoInstance973.DEF = "hanim_t3_2";
let fieldValue974 = browser.currentScene.createNode("fieldValue");
fieldValue974.name = "name";
fieldValue974.value = "t3";
ProtoInstance973.fieldValue = new MFNode();

ProtoInstance973.fieldValue[0] = fieldValue974;

fieldValue381.children[1] = ProtoInstance973;

ProtoInstance377.fieldValue[3] = fieldValue381;

fieldValue376.children = new MFNode();

fieldValue376.children[0] = ProtoInstance377;

let ProtoInstance975 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance975.name = "Segment";
ProtoInstance975.DEF = "hanim_t4_2";
let fieldValue976 = browser.currentScene.createNode("fieldValue");
fieldValue976.name = "name";
fieldValue976.value = "t4";
ProtoInstance975.fieldValue = new MFNode();

ProtoInstance975.fieldValue[0] = fieldValue976;

fieldValue376.children[1] = ProtoInstance975;

ProtoInstance372.fieldValue[3] = fieldValue376;

fieldValue371.children = new MFNode();

fieldValue371.children[0] = ProtoInstance372;

let ProtoInstance977 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance977.name = "Segment";
ProtoInstance977.DEF = "hanim_t5_2";
let fieldValue978 = browser.currentScene.createNode("fieldValue");
fieldValue978.name = "name";
fieldValue978.value = "t5";
ProtoInstance977.fieldValue = new MFNode();

ProtoInstance977.fieldValue[0] = fieldValue978;

fieldValue371.children[1] = ProtoInstance977;

ProtoInstance367.fieldValue[3] = fieldValue371;

fieldValue366.children = new MFNode();

fieldValue366.children[0] = ProtoInstance367;

let ProtoInstance979 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance979.name = "Segment";
ProtoInstance979.DEF = "hanim_t6_2";
let fieldValue980 = browser.currentScene.createNode("fieldValue");
fieldValue980.name = "name";
fieldValue980.value = "t6";
ProtoInstance979.fieldValue = new MFNode();

ProtoInstance979.fieldValue[0] = fieldValue980;

fieldValue366.children[1] = ProtoInstance979;

ProtoInstance362.fieldValue[3] = fieldValue366;

fieldValue361.children = new MFNode();

fieldValue361.children[0] = ProtoInstance362;

let ProtoInstance981 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance981.name = "Segment";
ProtoInstance981.DEF = "hanim_t7_2";
let fieldValue982 = browser.currentScene.createNode("fieldValue");
fieldValue982.name = "name";
fieldValue982.value = "t7";
ProtoInstance981.fieldValue = new MFNode();

ProtoInstance981.fieldValue[0] = fieldValue982;

fieldValue361.children[1] = ProtoInstance981;

ProtoInstance357.fieldValue[3] = fieldValue361;

fieldValue356.children = new MFNode();

fieldValue356.children[0] = ProtoInstance357;

let ProtoInstance983 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance983.name = "Segment";
ProtoInstance983.DEF = "hanim_t8_2";
let fieldValue984 = browser.currentScene.createNode("fieldValue");
fieldValue984.name = "name";
fieldValue984.value = "t8";
ProtoInstance983.fieldValue = new MFNode();

ProtoInstance983.fieldValue[0] = fieldValue984;

fieldValue356.children[1] = ProtoInstance983;

ProtoInstance352.fieldValue[3] = fieldValue356;

fieldValue351.children = new MFNode();

fieldValue351.children[0] = ProtoInstance352;

let ProtoInstance985 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance985.name = "Segment";
ProtoInstance985.DEF = "hanim_t9_2";
let fieldValue986 = browser.currentScene.createNode("fieldValue");
fieldValue986.name = "name";
fieldValue986.value = "t9";
ProtoInstance985.fieldValue = new MFNode();

ProtoInstance985.fieldValue[0] = fieldValue986;

let fieldValue987 = browser.currentScene.createNode("fieldValue");
fieldValue987.name = "children";
let ProtoInstance988 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance988.name = "Site";
ProtoInstance988.DEF = "hanim_r_thelion_2";
let fieldValue989 = browser.currentScene.createNode("fieldValue");
fieldValue989.name = "name";
fieldValue989.value = "r_thelion";
ProtoInstance988.fieldValue = new MFNode();

ProtoInstance988.fieldValue[0] = fieldValue989;

let fieldValue990 = browser.currentScene.createNode("fieldValue");
fieldValue990.name = "translation";
fieldValue990.value = "-0.0736000016331673 1.33850002288818 0.121699996292591";
ProtoInstance988.fieldValue[1] = fieldValue990;

fieldValue987.children = new MFNode();

fieldValue987.children[0] = ProtoInstance988;

let ProtoInstance991 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance991.name = "Site";
ProtoInstance991.DEF = "hanim_l_thelion_2";
let fieldValue992 = browser.currentScene.createNode("fieldValue");
fieldValue992.name = "name";
fieldValue992.value = "l_thelion";
ProtoInstance991.fieldValue = new MFNode();

ProtoInstance991.fieldValue[0] = fieldValue992;

let fieldValue993 = browser.currentScene.createNode("fieldValue");
fieldValue993.name = "translation";
fieldValue993.value = "0.0917999967932701 1.33819997310638 0.119199998676777";
ProtoInstance991.fieldValue[1] = fieldValue993;

fieldValue987.children[1] = ProtoInstance991;

ProtoInstance985.fieldValue[1] = fieldValue987;

fieldValue351.children[1] = ProtoInstance985;

ProtoInstance347.fieldValue[3] = fieldValue351;

fieldValue346.children = new MFNode();

fieldValue346.children[0] = ProtoInstance347;

let ProtoInstance994 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance994.name = "Segment";
ProtoInstance994.DEF = "hanim_t10_2";
let fieldValue995 = browser.currentScene.createNode("fieldValue");
fieldValue995.name = "name";
fieldValue995.value = "t10";
ProtoInstance994.fieldValue = new MFNode();

ProtoInstance994.fieldValue[0] = fieldValue995;

let fieldValue996 = browser.currentScene.createNode("fieldValue");
fieldValue996.name = "children";
let ProtoInstance997 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance997.name = "Site";
ProtoInstance997.DEF = "hanim_substernale_2";
let fieldValue998 = browser.currentScene.createNode("fieldValue");
fieldValue998.name = "name";
fieldValue998.value = "substernale";
ProtoInstance997.fieldValue = new MFNode();

ProtoInstance997.fieldValue[0] = fieldValue998;

let fieldValue999 = browser.currentScene.createNode("fieldValue");
fieldValue999.name = "translation";
fieldValue999.value = "0.008500000461936 1.29949998855591 0.114699997007847";
ProtoInstance997.fieldValue[1] = fieldValue999;

fieldValue996.children = new MFNode();

fieldValue996.children[0] = ProtoInstance997;

ProtoInstance994.fieldValue[1] = fieldValue996;

fieldValue346.children[1] = ProtoInstance994;

ProtoInstance342.fieldValue[3] = fieldValue346;

fieldValue341.children = new MFNode();

fieldValue341.children[0] = ProtoInstance342;

let ProtoInstance1000 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1000.name = "Segment";
ProtoInstance1000.DEF = "hanim_t11_2";
let fieldValue1001 = browser.currentScene.createNode("fieldValue");
fieldValue1001.name = "name";
fieldValue1001.value = "t11";
ProtoInstance1000.fieldValue = new MFNode();

ProtoInstance1000.fieldValue[0] = fieldValue1001;

fieldValue341.children[1] = ProtoInstance1000;

ProtoInstance337.fieldValue[3] = fieldValue341;

fieldValue336.children = new MFNode();

fieldValue336.children[0] = ProtoInstance337;

let ProtoInstance1002 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1002.name = "Segment";
ProtoInstance1002.DEF = "hanim_t12_2";
let fieldValue1003 = browser.currentScene.createNode("fieldValue");
fieldValue1003.name = "name";
fieldValue1003.value = "t12";
ProtoInstance1002.fieldValue = new MFNode();

ProtoInstance1002.fieldValue[0] = fieldValue1003;

fieldValue336.children[1] = ProtoInstance1002;

ProtoInstance332.fieldValue[3] = fieldValue336;

fieldValue331.children = new MFNode();

fieldValue331.children[0] = ProtoInstance332;

let ProtoInstance1004 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1004.name = "Segment";
ProtoInstance1004.DEF = "hanim_l1_2";
let fieldValue1005 = browser.currentScene.createNode("fieldValue");
fieldValue1005.name = "name";
fieldValue1005.value = "l1";
ProtoInstance1004.fieldValue = new MFNode();

ProtoInstance1004.fieldValue[0] = fieldValue1005;

fieldValue331.children[1] = ProtoInstance1004;

ProtoInstance327.fieldValue[3] = fieldValue331;

fieldValue326.children = new MFNode();

fieldValue326.children[0] = ProtoInstance327;

let ProtoInstance1006 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1006.name = "Segment";
ProtoInstance1006.DEF = "hanim_l2_2";
let fieldValue1007 = browser.currentScene.createNode("fieldValue");
fieldValue1007.name = "name";
fieldValue1007.value = "l2";
ProtoInstance1006.fieldValue = new MFNode();

ProtoInstance1006.fieldValue[0] = fieldValue1007;

let fieldValue1008 = browser.currentScene.createNode("fieldValue");
fieldValue1008.name = "children";
let ProtoInstance1009 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1009.name = "Site";
ProtoInstance1009.DEF = "hanim_r_rib10_2";
let fieldValue1010 = browser.currentScene.createNode("fieldValue");
fieldValue1010.name = "name";
fieldValue1010.value = "r_rib10";
ProtoInstance1009.fieldValue = new MFNode();

ProtoInstance1009.fieldValue[0] = fieldValue1010;

let fieldValue1011 = browser.currentScene.createNode("fieldValue");
fieldValue1011.name = "translation";
fieldValue1011.value = "-0.0710999965667725 1.19410002231598 0.101599998772144";
ProtoInstance1009.fieldValue[1] = fieldValue1011;

fieldValue1008.children = new MFNode();

fieldValue1008.children[0] = ProtoInstance1009;

let ProtoInstance1012 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1012.name = "Site";
ProtoInstance1012.DEF = "hanim_l_rib10_2";
let fieldValue1013 = browser.currentScene.createNode("fieldValue");
fieldValue1013.name = "name";
fieldValue1013.value = "l_rib10";
ProtoInstance1012.fieldValue = new MFNode();

ProtoInstance1012.fieldValue[0] = fieldValue1013;

let fieldValue1014 = browser.currentScene.createNode("fieldValue");
fieldValue1014.name = "translation";
fieldValue1014.value = "0.0870999991893768 1.19249999523163 0.099200002849102";
ProtoInstance1012.fieldValue[1] = fieldValue1014;

fieldValue1008.children[1] = ProtoInstance1012;

let ProtoInstance1015 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1015.name = "Site";
ProtoInstance1015.DEF = "hanim_spine_2_lower_back_2";
let fieldValue1016 = browser.currentScene.createNode("fieldValue");
fieldValue1016.name = "name";
fieldValue1016.value = "spine_2_lower_back";
ProtoInstance1015.fieldValue = new MFNode();

ProtoInstance1015.fieldValue[0] = fieldValue1016;

let fieldValue1017 = browser.currentScene.createNode("fieldValue");
fieldValue1017.name = "translation";
fieldValue1017.value = "0.00490000005811453 1.19079995155334 -0.111299999058247";
ProtoInstance1015.fieldValue[1] = fieldValue1017;

fieldValue1008.children[2] = ProtoInstance1015;

ProtoInstance1006.fieldValue[1] = fieldValue1008;

fieldValue326.children[1] = ProtoInstance1006;

ProtoInstance322.fieldValue[3] = fieldValue326;

fieldValue321.children = new MFNode();

fieldValue321.children[0] = ProtoInstance322;

let ProtoInstance1018 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1018.name = "Segment";
ProtoInstance1018.DEF = "hanim_l3_2";
let fieldValue1019 = browser.currentScene.createNode("fieldValue");
fieldValue1019.name = "name";
fieldValue1019.value = "l3";
ProtoInstance1018.fieldValue = new MFNode();

ProtoInstance1018.fieldValue[0] = fieldValue1019;

fieldValue321.children[1] = ProtoInstance1018;

ProtoInstance317.fieldValue[3] = fieldValue321;

fieldValue316.children = new MFNode();

fieldValue316.children[0] = ProtoInstance317;

let ProtoInstance1020 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1020.name = "Segment";
ProtoInstance1020.DEF = "hanim_l4_2";
let fieldValue1021 = browser.currentScene.createNode("fieldValue");
fieldValue1021.name = "name";
fieldValue1021.value = "l4";
ProtoInstance1020.fieldValue = new MFNode();

ProtoInstance1020.fieldValue[0] = fieldValue1021;

fieldValue316.children[1] = ProtoInstance1020;

ProtoInstance312.fieldValue[3] = fieldValue316;

fieldValue311.children = new MFNode();

fieldValue311.children[0] = ProtoInstance312;

let ProtoInstance1022 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1022.name = "Segment";
ProtoInstance1022.DEF = "hanim_l5_2";
let fieldValue1023 = browser.currentScene.createNode("fieldValue");
fieldValue1023.name = "name";
fieldValue1023.value = "l5";
ProtoInstance1022.fieldValue = new MFNode();

ProtoInstance1022.fieldValue[0] = fieldValue1023;

let fieldValue1024 = browser.currentScene.createNode("fieldValue");
fieldValue1024.name = "children";
let ProtoInstance1025 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1025.name = "Site";
ProtoInstance1025.DEF = "hanim_waist_preferred_posterior_2";
let fieldValue1026 = browser.currentScene.createNode("fieldValue");
fieldValue1026.name = "name";
fieldValue1026.value = "waist_preferred_posterior";
ProtoInstance1025.fieldValue = new MFNode();

ProtoInstance1025.fieldValue[0] = fieldValue1026;

let fieldValue1027 = browser.currentScene.createNode("fieldValue");
fieldValue1027.name = "translation";
fieldValue1027.value = "0.28999999165535 1.09150004386902 -0.109099999070168";
ProtoInstance1025.fieldValue[1] = fieldValue1027;

fieldValue1024.children = new MFNode();

fieldValue1024.children[0] = ProtoInstance1025;

let ProtoInstance1028 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1028.name = "Site";
ProtoInstance1028.DEF = "hanim_navel_2";
let fieldValue1029 = browser.currentScene.createNode("fieldValue");
fieldValue1029.name = "name";
fieldValue1029.value = "navel";
ProtoInstance1028.fieldValue = new MFNode();

ProtoInstance1028.fieldValue[0] = fieldValue1029;

let fieldValue1030 = browser.currentScene.createNode("fieldValue");
fieldValue1030.name = "translation";
fieldValue1030.value = "0.00689999992027879 1.09660005569458 0.101700000464916";
ProtoInstance1028.fieldValue[1] = fieldValue1030;

fieldValue1024.children[1] = ProtoInstance1028;

ProtoInstance1022.fieldValue[1] = fieldValue1024;

fieldValue311.children[1] = ProtoInstance1022;

ProtoInstance307.fieldValue[3] = fieldValue311;

fieldValue113.children[1] = ProtoInstance307;

let ProtoInstance1031 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1031.name = "Segment";
ProtoInstance1031.DEF = "hanim_sacrum_2";
let fieldValue1032 = browser.currentScene.createNode("fieldValue");
fieldValue1032.name = "name";
fieldValue1032.value = "sacrum";
ProtoInstance1031.fieldValue = new MFNode();

ProtoInstance1031.fieldValue[0] = fieldValue1032;

fieldValue113.children[2] = ProtoInstance1031;

ProtoInstance109.fieldValue[3] = fieldValue113;

fieldValue108.children = new MFNode();

fieldValue108.children[0] = ProtoInstance109;

ProtoInstance107.fieldValue = new MFNode();

ProtoInstance107.fieldValue[0] = fieldValue108;

let fieldValue1033 = browser.currentScene.createNode("fieldValue");
fieldValue1033.name = "joints";
let ProtoInstance1034 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1034.USE = "hanim_humanoid_root_2";
fieldValue1033.children = new MFNode();

fieldValue1033.children[0] = ProtoInstance1034;

let ProtoInstance1035 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1035.USE = "hanim_sacroiliac_2";
fieldValue1033.children[1] = ProtoInstance1035;

let ProtoInstance1036 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1036.USE = "hanim_l_hip_2";
fieldValue1033.children[2] = ProtoInstance1036;

let ProtoInstance1037 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1037.USE = "hanim_l_knee_2";
fieldValue1033.children[3] = ProtoInstance1037;

let ProtoInstance1038 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1038.USE = "hanim_l_talocrural_2";
fieldValue1033.children[4] = ProtoInstance1038;

let ProtoInstance1039 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1039.USE = "hanim_l_tarsotarsal_interphalangeal__2";
fieldValue1033.children[5] = ProtoInstance1039;

let ProtoInstance1040 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1040.USE = "hanim_l_metatarsophalangeal__2";
fieldValue1033.children[6] = ProtoInstance1040;

let ProtoInstance1041 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1041.USE = "hanim_l_tarsal_interphalangeal__2";
fieldValue1033.children[7] = ProtoInstance1041;

let ProtoInstance1042 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1042.USE = "hanim_r_hip_2";
fieldValue1033.children[8] = ProtoInstance1042;

let ProtoInstance1043 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1043.USE = "hanim_r_knee_2";
fieldValue1033.children[9] = ProtoInstance1043;

let ProtoInstance1044 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1044.USE = "hanim_r_talocrural_2";
fieldValue1033.children[10] = ProtoInstance1044;

let ProtoInstance1045 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1045.USE = "hanim_r_tarsotarsal_interphalangeal__2";
fieldValue1033.children[11] = ProtoInstance1045;

let ProtoInstance1046 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1046.USE = "hanim_r_metatarsophalangeal__2";
fieldValue1033.children[12] = ProtoInstance1046;

let ProtoInstance1047 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1047.USE = "hanim_r_tarsal_interphalangeal__2";
fieldValue1033.children[13] = ProtoInstance1047;

let ProtoInstance1048 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1048.USE = "hanim_vl5_2";
fieldValue1033.children[14] = ProtoInstance1048;

let ProtoInstance1049 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1049.USE = "hanim_vl4_2";
fieldValue1033.children[15] = ProtoInstance1049;

let ProtoInstance1050 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1050.USE = "hanim_vl3_2";
fieldValue1033.children[16] = ProtoInstance1050;

let ProtoInstance1051 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1051.USE = "hanim_vl2_2";
fieldValue1033.children[17] = ProtoInstance1051;

let ProtoInstance1052 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1052.USE = "hanim_vl1_2";
fieldValue1033.children[18] = ProtoInstance1052;

let ProtoInstance1053 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1053.USE = "hanim_vt12_2";
fieldValue1033.children[19] = ProtoInstance1053;

let ProtoInstance1054 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1054.USE = "hanim_vt11_2";
fieldValue1033.children[20] = ProtoInstance1054;

let ProtoInstance1055 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1055.USE = "hanim_vt10_2";
fieldValue1033.children[21] = ProtoInstance1055;

let ProtoInstance1056 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1056.USE = "hanim_vt9_2";
fieldValue1033.children[22] = ProtoInstance1056;

let ProtoInstance1057 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1057.USE = "hanim_vt8_2";
fieldValue1033.children[23] = ProtoInstance1057;

let ProtoInstance1058 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1058.USE = "hanim_vt7_2";
fieldValue1033.children[24] = ProtoInstance1058;

let ProtoInstance1059 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1059.USE = "hanim_vt6_2";
fieldValue1033.children[25] = ProtoInstance1059;

let ProtoInstance1060 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1060.USE = "hanim_vt5_2";
fieldValue1033.children[26] = ProtoInstance1060;

let ProtoInstance1061 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1061.USE = "hanim_vt4_2";
fieldValue1033.children[27] = ProtoInstance1061;

let ProtoInstance1062 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1062.USE = "hanim_vt3_2";
fieldValue1033.children[28] = ProtoInstance1062;

let ProtoInstance1063 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1063.USE = "hanim_vt2_2";
fieldValue1033.children[29] = ProtoInstance1063;

let ProtoInstance1064 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1064.USE = "hanim_vt1_2";
fieldValue1033.children[30] = ProtoInstance1064;

let ProtoInstance1065 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1065.USE = "hanim_vc7_2";
fieldValue1033.children[31] = ProtoInstance1065;

let ProtoInstance1066 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1066.USE = "hanim_vc6_2";
fieldValue1033.children[32] = ProtoInstance1066;

let ProtoInstance1067 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1067.USE = "hanim_vc5_2";
fieldValue1033.children[33] = ProtoInstance1067;

let ProtoInstance1068 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1068.USE = "hanim_vc4_2";
fieldValue1033.children[34] = ProtoInstance1068;

let ProtoInstance1069 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1069.USE = "hanim_vc3_2";
fieldValue1033.children[35] = ProtoInstance1069;

let ProtoInstance1070 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1070.USE = "hanim_vc2_2";
fieldValue1033.children[36] = ProtoInstance1070;

let ProtoInstance1071 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1071.USE = "hanim_vc1_2";
fieldValue1033.children[37] = ProtoInstance1071;

let ProtoInstance1072 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1072.USE = "hanim_skullbase_2";
fieldValue1033.children[38] = ProtoInstance1072;

let ProtoInstance1073 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1073.USE = "hanim_l_eyeball_4";
fieldValue1033.children[39] = ProtoInstance1073;

let ProtoInstance1074 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1074.USE = "hanim_r_eyeball_4";
fieldValue1033.children[40] = ProtoInstance1074;

let ProtoInstance1075 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1075.USE = "hanim_l_sternoclavicular_2";
fieldValue1033.children[41] = ProtoInstance1075;

let ProtoInstance1076 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1076.USE = "hanim_l_acromioclavicular_2";
fieldValue1033.children[42] = ProtoInstance1076;

let ProtoInstance1077 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1077.USE = "hanim_l_shoulder_2";
fieldValue1033.children[43] = ProtoInstance1077;

let ProtoInstance1078 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1078.USE = "hanim_l_elbow_2";
fieldValue1033.children[44] = ProtoInstance1078;

let ProtoInstance1079 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1079.USE = "hanim_l_radiocarpal_2";
fieldValue1033.children[45] = ProtoInstance1079;

let ProtoInstance1080 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1080.USE = "hanim_l_carpometacarpal2";
fieldValue1033.children[46] = ProtoInstance1080;

let ProtoInstance1081 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1081.USE = "hanim_l_metacarpophalangeal2";
fieldValue1033.children[47] = ProtoInstance1081;

let ProtoInstance1082 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1082.USE = "hanim_l_carpal_interphalangeal2";
fieldValue1033.children[48] = ProtoInstance1082;

let ProtoInstance1083 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1083.USE = "hanim_l_carpometacarpal3";
fieldValue1033.children[49] = ProtoInstance1083;

let ProtoInstance1084 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1084.USE = "hanim_l_metacarpophalangeal3";
fieldValue1033.children[50] = ProtoInstance1084;

let ProtoInstance1085 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1085.USE = "hanim_l_carpal_proximal_interphalangeal3";
fieldValue1033.children[51] = ProtoInstance1085;

let ProtoInstance1086 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1086.USE = "hanim_l_carpal_distal_interphalangeal3";
fieldValue1033.children[52] = ProtoInstance1086;

let ProtoInstance1087 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1087.USE = "hanim_l_carpometacarpal4";
fieldValue1033.children[53] = ProtoInstance1087;

let ProtoInstance1088 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1088.USE = "hanim_l_metacarpophalangeal4";
fieldValue1033.children[54] = ProtoInstance1088;

let ProtoInstance1089 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1089.USE = "hanim_l_carpal_proximal_interphalangeal4";
fieldValue1033.children[55] = ProtoInstance1089;

let ProtoInstance1090 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1090.USE = "hanim_l_carpal_distal_interphalangeal4";
fieldValue1033.children[56] = ProtoInstance1090;

let ProtoInstance1091 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1091.USE = "hanim_l_carpometacarpal5";
fieldValue1033.children[57] = ProtoInstance1091;

let ProtoInstance1092 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1092.USE = "hanim_l_metacarpophalangeal5";
fieldValue1033.children[58] = ProtoInstance1092;

let ProtoInstance1093 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1093.USE = "hanim_l_carpal_proximal_interphalangeal5";
fieldValue1033.children[59] = ProtoInstance1093;

let ProtoInstance1094 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1094.USE = "hanim_l_carpal_distal_interphalangeal5";
fieldValue1033.children[60] = ProtoInstance1094;

let ProtoInstance1095 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1095.USE = "hanim_l_carpometacarpal6";
fieldValue1033.children[61] = ProtoInstance1095;

let ProtoInstance1096 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1096.USE = "hanim_l_metacarpophalangeal6";
fieldValue1033.children[62] = ProtoInstance1096;

let ProtoInstance1097 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1097.USE = "hanim_l_carpal_proximal_interphalangeal6";
fieldValue1033.children[63] = ProtoInstance1097;

let ProtoInstance1098 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1098.USE = "hanim_l_carpal_distal_interphalangeal6";
fieldValue1033.children[64] = ProtoInstance1098;

let ProtoInstance1099 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1099.USE = "hanim_r_sternoclavicular_2";
fieldValue1033.children[65] = ProtoInstance1099;

let ProtoInstance1100 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1100.USE = "hanim_r_acromioclavicular_2";
fieldValue1033.children[66] = ProtoInstance1100;

let ProtoInstance1101 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1101.USE = "hanim_r_shoulder_2";
fieldValue1033.children[67] = ProtoInstance1101;

let ProtoInstance1102 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1102.USE = "hanim_r_elbow_2";
fieldValue1033.children[68] = ProtoInstance1102;

let ProtoInstance1103 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1103.USE = "hanim_r_radiocarpal_2";
fieldValue1033.children[69] = ProtoInstance1103;

let ProtoInstance1104 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1104.USE = "hanim_r_carpometacarpal2";
fieldValue1033.children[70] = ProtoInstance1104;

let ProtoInstance1105 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1105.USE = "hanim_r_metacarpophalangeal2";
fieldValue1033.children[71] = ProtoInstance1105;

let ProtoInstance1106 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1106.USE = "hanim_r_carpal_interphalangeal2";
fieldValue1033.children[72] = ProtoInstance1106;

let ProtoInstance1107 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1107.USE = "hanim_r_carpometacarpal3";
fieldValue1033.children[73] = ProtoInstance1107;

let ProtoInstance1108 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1108.USE = "hanim_r_metacarpophalangeal3";
fieldValue1033.children[74] = ProtoInstance1108;

let ProtoInstance1109 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1109.USE = "hanim_r_carpal_proximal_interphalangeal3";
fieldValue1033.children[75] = ProtoInstance1109;

let ProtoInstance1110 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1110.USE = "hanim_r_carpal_distal_interphalangeal3";
fieldValue1033.children[76] = ProtoInstance1110;

let ProtoInstance1111 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1111.USE = "hanim_r_carpometacarpal4";
fieldValue1033.children[77] = ProtoInstance1111;

let ProtoInstance1112 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1112.USE = "hanim_r_metacarpophalangeal4";
fieldValue1033.children[78] = ProtoInstance1112;

let ProtoInstance1113 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1113.USE = "hanim_r_carpal_proximal_interphalangeal4";
fieldValue1033.children[79] = ProtoInstance1113;

let ProtoInstance1114 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1114.USE = "hanim_r_carpal_distal_interphalangeal4";
fieldValue1033.children[80] = ProtoInstance1114;

let ProtoInstance1115 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1115.USE = "hanim_r_carpometacarpal5";
fieldValue1033.children[81] = ProtoInstance1115;

let ProtoInstance1116 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1116.USE = "hanim_r_metacarpophalangeal5";
fieldValue1033.children[82] = ProtoInstance1116;

let ProtoInstance1117 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1117.USE = "hanim_r_carpal_proximal_interphalangeal5";
fieldValue1033.children[83] = ProtoInstance1117;

let ProtoInstance1118 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1118.USE = "hanim_r_carpal_distal_interphalangeal5";
fieldValue1033.children[84] = ProtoInstance1118;

let ProtoInstance1119 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1119.USE = "hanim_r_carpometacarpal6";
fieldValue1033.children[85] = ProtoInstance1119;

let ProtoInstance1120 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1120.USE = "hanim_r_metacarpophalangeal6";
fieldValue1033.children[86] = ProtoInstance1120;

let ProtoInstance1121 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1121.USE = "hanim_r_carpal_proximal_interphalangeal6";
fieldValue1033.children[87] = ProtoInstance1121;

let ProtoInstance1122 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1122.USE = "hanim_r_carpal_distal_interphalangeal6";
fieldValue1033.children[88] = ProtoInstance1122;

ProtoInstance107.fieldValue[1] = fieldValue1033;

let fieldValue1123 = browser.currentScene.createNode("fieldValue");
fieldValue1123.name = "sites";
let ProtoInstance1124 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1124.USE = "hanim_l_tarsal_distal_phalanx_1_tip_2";
fieldValue1123.children = new MFNode();

fieldValue1123.children[0] = ProtoInstance1124;

let ProtoInstance1125 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1125.USE = "hanim_l_tarsal_interphalangeal_phalanx6";
fieldValue1123.children[1] = ProtoInstance1125;

let ProtoInstance1126 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1126.USE = "hanim_l_tarsal_distal_phalanx3";
fieldValue1123.children[2] = ProtoInstance1126;

let ProtoInstance1127 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1127.USE = "hanim_l_tarsal_interphalangeal_phalanx2";
fieldValue1123.children[3] = ProtoInstance1127;

let ProtoInstance1128 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1128.USE = "hanim_l_lateral_malleolus_2";
fieldValue1123.children[4] = ProtoInstance1128;

let ProtoInstance1129 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1129.USE = "hanim_l_medial_malleolus_2";
fieldValue1123.children[5] = ProtoInstance1129;

let ProtoInstance1130 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1130.USE = "hanim_l_sphyrion_2";
fieldValue1123.children[6] = ProtoInstance1130;

let ProtoInstance1131 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1131.USE = "hanim_l_calcaneus_posterior_2";
fieldValue1123.children[7] = ProtoInstance1131;

let ProtoInstance1132 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1132.USE = "hanim_l_knee_crease_2";
fieldValue1123.children[8] = ProtoInstance1132;

let ProtoInstance1133 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1133.USE = "hanim_l_femoral_lateral_epicondyles_2";
fieldValue1123.children[9] = ProtoInstance1133;

let ProtoInstance1134 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1134.USE = "hanim_l_femoral_medial_epicondyles_2";
fieldValue1123.children[10] = ProtoInstance1134;

let ProtoInstance1135 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1135.USE = "hanim_r_tarsal_distal_phalanx_1_tip_2";
fieldValue1123.children[11] = ProtoInstance1135;

let ProtoInstance1136 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1136.USE = "hanim_r_tarsal_interphalangeal_phalanx6";
fieldValue1123.children[12] = ProtoInstance1136;

let ProtoInstance1137 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1137.USE = "hanim_r_tarsal_distal_phalanx3";
fieldValue1123.children[13] = ProtoInstance1137;

let ProtoInstance1138 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1138.USE = "hanim_r_tarsal_interphalangeal_phalanx2";
fieldValue1123.children[14] = ProtoInstance1138;

let ProtoInstance1139 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1139.USE = "hanim_r_lateral_malleolus_2";
fieldValue1123.children[15] = ProtoInstance1139;

let ProtoInstance1140 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1140.USE = "hanim_r_medial_malleolus_2";
fieldValue1123.children[16] = ProtoInstance1140;

let ProtoInstance1141 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1141.USE = "hanim_r_sphyrion_2";
fieldValue1123.children[17] = ProtoInstance1141;

let ProtoInstance1142 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1142.USE = "hanim_r_calcaneus_posterior_2";
fieldValue1123.children[18] = ProtoInstance1142;

let ProtoInstance1143 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1143.USE = "hanim_r_knee_crease_2";
fieldValue1123.children[19] = ProtoInstance1143;

let ProtoInstance1144 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1144.USE = "hanim_r_femoral_lateral_epicondyles_2";
fieldValue1123.children[20] = ProtoInstance1144;

let ProtoInstance1145 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1145.USE = "hanim_r_femoral_medial_epicondyles_2";
fieldValue1123.children[21] = ProtoInstance1145;

let ProtoInstance1146 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1146.USE = "hanim_r_iliocristale_2";
fieldValue1123.children[22] = ProtoInstance1146;

let ProtoInstance1147 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1147.USE = "hanim_r_trochanterion_2";
fieldValue1123.children[23] = ProtoInstance1147;

let ProtoInstance1148 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1148.USE = "hanim_l_iliocristale_2";
fieldValue1123.children[24] = ProtoInstance1148;

let ProtoInstance1149 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1149.USE = "hanim_l_trochanterion_2";
fieldValue1123.children[25] = ProtoInstance1149;

let ProtoInstance1150 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1150.USE = "hanim_r_asis_2";
fieldValue1123.children[26] = ProtoInstance1150;

let ProtoInstance1151 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1151.USE = "hanim_l_asis_2";
fieldValue1123.children[27] = ProtoInstance1151;

let ProtoInstance1152 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1152.USE = "hanim_r_psis_2";
fieldValue1123.children[28] = ProtoInstance1152;

let ProtoInstance1153 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1153.USE = "hanim_l_psis_2";
fieldValue1123.children[29] = ProtoInstance1153;

let ProtoInstance1154 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1154.USE = "hanim_crotch_2";
fieldValue1123.children[30] = ProtoInstance1154;

let ProtoInstance1155 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1155.USE = "hanim_skull_tip_2";
fieldValue1123.children[31] = ProtoInstance1155;

let ProtoInstance1156 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1156.USE = "hanim_sellion_2";
fieldValue1123.children[32] = ProtoInstance1156;

let ProtoInstance1157 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1157.USE = "hanim_r_infraorbitale_2";
fieldValue1123.children[33] = ProtoInstance1157;

let ProtoInstance1158 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1158.USE = "hanim_l_infraorbitale_2";
fieldValue1123.children[34] = ProtoInstance1158;

let ProtoInstance1159 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1159.USE = "hanim_supramenton_2";
fieldValue1123.children[35] = ProtoInstance1159;

let ProtoInstance1160 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1160.USE = "hanim_r_tragion_2";
fieldValue1123.children[36] = ProtoInstance1160;

let ProtoInstance1161 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1161.USE = "hanim_r_gonion_2";
fieldValue1123.children[37] = ProtoInstance1161;

let ProtoInstance1162 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1162.USE = "hanim_l_tragion_2";
fieldValue1123.children[38] = ProtoInstance1162;

let ProtoInstance1163 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1163.USE = "hanim_l_gonion_2";
fieldValue1123.children[39] = ProtoInstance1163;

let ProtoInstance1164 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1164.USE = "hanim_nuchale_2";
fieldValue1123.children[40] = ProtoInstance1164;

let ProtoInstance1165 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1165.USE = "hanim_r_neck_base_2";
fieldValue1123.children[41] = ProtoInstance1165;

let ProtoInstance1166 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1166.USE = "hanim_l_neck_base_2";
fieldValue1123.children[42] = ProtoInstance1166;

let ProtoInstance1167 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1167.USE = "hanim_l_carpal_distal_phalanx_1_tip_2";
fieldValue1123.children[43] = ProtoInstance1167;

let ProtoInstance1168 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1168.USE = "hanim_l_carpal_distal_phalanx_2_tip_2";
fieldValue1123.children[44] = ProtoInstance1168;

let ProtoInstance1169 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1169.USE = "hanim_l_dactylion_2";
fieldValue1123.children[45] = ProtoInstance1169;

let ProtoInstance1170 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1170.USE = "hanim_l_carpal_distal_phalanx_3_tip_2";
fieldValue1123.children[46] = ProtoInstance1170;

let ProtoInstance1171 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1171.USE = "hanim_l_carpal_distal_phalanx_4_tip_2";
fieldValue1123.children[47] = ProtoInstance1171;

let ProtoInstance1172 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1172.USE = "hanim_l_carpal_distal_phalanx_5_tip_2";
fieldValue1123.children[48] = ProtoInstance1172;

let ProtoInstance1173 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1173.USE = "hanim_l_metacarpal_phalanx3";
fieldValue1123.children[49] = ProtoInstance1173;

let ProtoInstance1174 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1174.USE = "hanim_l_ulnar_styloid_2";
fieldValue1123.children[50] = ProtoInstance1174;

let ProtoInstance1175 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1175.USE = "hanim_l_metacarpal_phalanx6";
fieldValue1123.children[51] = ProtoInstance1175;

let ProtoInstance1176 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1176.USE = "hanim_l_radial_styloid_2";
fieldValue1123.children[52] = ProtoInstance1176;

let ProtoInstance1177 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1177.USE = "hanim_l_olecranon_2";
fieldValue1123.children[53] = ProtoInstance1177;

let ProtoInstance1178 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1178.USE = "hanim_l_humeral_medial_epicondyles_2";
fieldValue1123.children[54] = ProtoInstance1178;

let ProtoInstance1179 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1179.USE = "hanim_l_radiale_2";
fieldValue1123.children[55] = ProtoInstance1179;

let ProtoInstance1180 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1180.USE = "hanim_l_humeral_lateral_epicondyles_2";
fieldValue1123.children[56] = ProtoInstance1180;

let ProtoInstance1181 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1181.USE = "hanim_l_clavicale_2";
fieldValue1123.children[57] = ProtoInstance1181;

let ProtoInstance1182 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1182.USE = "hanim_l_acromion_2";
fieldValue1123.children[58] = ProtoInstance1182;

let ProtoInstance1183 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1183.USE = "hanim_l_axilla_proximal_2";
fieldValue1123.children[59] = ProtoInstance1183;

let ProtoInstance1184 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1184.USE = "hanim_l_axilla_distal_2";
fieldValue1123.children[60] = ProtoInstance1184;

let ProtoInstance1185 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1185.USE = "hanim_r_carpal_distal_phalanx_1_tip_2";
fieldValue1123.children[61] = ProtoInstance1185;

let ProtoInstance1186 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1186.USE = "hanim_r_carpal_distal_phalanx_2_tip_2";
fieldValue1123.children[62] = ProtoInstance1186;

let ProtoInstance1187 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1187.USE = "hanim_r_dactylion_2";
fieldValue1123.children[63] = ProtoInstance1187;

let ProtoInstance1188 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1188.USE = "hanim_r_carpal_distal_phalanx_3_tip_2";
fieldValue1123.children[64] = ProtoInstance1188;

let ProtoInstance1189 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1189.USE = "hanim_r_carpal_distal_phalanx_4_tip_2";
fieldValue1123.children[65] = ProtoInstance1189;

let ProtoInstance1190 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1190.USE = "hanim_r_carpal_distal_phalanx_5_tip_2";
fieldValue1123.children[66] = ProtoInstance1190;

let ProtoInstance1191 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1191.USE = "hanim_r_metacarpal_phalanx3";
fieldValue1123.children[67] = ProtoInstance1191;

let ProtoInstance1192 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1192.USE = "hanim_r_ulnar_styloid_2";
fieldValue1123.children[68] = ProtoInstance1192;

let ProtoInstance1193 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1193.USE = "hanim_r_metacarpal_phalanx6";
fieldValue1123.children[69] = ProtoInstance1193;

let ProtoInstance1194 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1194.USE = "hanim_r_radial_styloid_2";
fieldValue1123.children[70] = ProtoInstance1194;

let ProtoInstance1195 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1195.USE = "hanim_r_olecranon_2";
fieldValue1123.children[71] = ProtoInstance1195;

let ProtoInstance1196 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1196.USE = "hanim_r_humeral_medial_epicondyles_2";
fieldValue1123.children[72] = ProtoInstance1196;

let ProtoInstance1197 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1197.USE = "hanim_r_radiale_2";
fieldValue1123.children[73] = ProtoInstance1197;

let ProtoInstance1198 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1198.USE = "hanim_r_humeral_lateral_epicondyles_2";
fieldValue1123.children[74] = ProtoInstance1198;

let ProtoInstance1199 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1199.USE = "hanim_r_clavicale_2";
fieldValue1123.children[75] = ProtoInstance1199;

let ProtoInstance1200 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1200.USE = "hanim_r_acromion_2";
fieldValue1123.children[76] = ProtoInstance1200;

let ProtoInstance1201 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1201.USE = "hanim_r_axilla_proximal_2";
fieldValue1123.children[77] = ProtoInstance1201;

let ProtoInstance1202 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1202.USE = "hanim_r_axilla_distal_2";
fieldValue1123.children[78] = ProtoInstance1202;

let ProtoInstance1203 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1203.USE = "hanim_suprasternale_2";
fieldValue1123.children[79] = ProtoInstance1203;

let ProtoInstance1204 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1204.USE = "hanim_cervicale_2";
fieldValue1123.children[80] = ProtoInstance1204;

let ProtoInstance1205 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1205.USE = "hanim_r_thelion_2";
fieldValue1123.children[81] = ProtoInstance1205;

let ProtoInstance1206 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1206.USE = "hanim_l_thelion_2";
fieldValue1123.children[82] = ProtoInstance1206;

let ProtoInstance1207 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1207.USE = "hanim_substernale_2";
fieldValue1123.children[83] = ProtoInstance1207;

let ProtoInstance1208 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1208.USE = "hanim_r_rib10_2";
fieldValue1123.children[84] = ProtoInstance1208;

let ProtoInstance1209 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1209.USE = "hanim_l_rib10_2";
fieldValue1123.children[85] = ProtoInstance1209;

let ProtoInstance1210 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1210.USE = "hanim_spine_2_lower_back_2";
fieldValue1123.children[86] = ProtoInstance1210;

let ProtoInstance1211 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1211.USE = "hanim_waist_preferred_posterior_2";
fieldValue1123.children[87] = ProtoInstance1211;

let ProtoInstance1212 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1212.USE = "hanim_navel_2";
fieldValue1123.children[88] = ProtoInstance1212;

ProtoInstance107.fieldValue[2] = fieldValue1123;

let fieldValue1213 = browser.currentScene.createNode("fieldValue");
fieldValue1213.name = "segments";
let ProtoInstance1214 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1214.USE = "hanim_l_tarsal_distal_phalanx2";
fieldValue1213.children = new MFNode();

fieldValue1213.children[0] = ProtoInstance1214;

let ProtoInstance1215 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1215.USE = "hanim_l_middistal_2";
fieldValue1213.children[1] = ProtoInstance1215;

let ProtoInstance1216 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1216.USE = "hanim_l_midproximal_2";
fieldValue1213.children[2] = ProtoInstance1216;

let ProtoInstance1217 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1217.USE = "hanim_l_hindfoot_2";
fieldValue1213.children[3] = ProtoInstance1217;

let ProtoInstance1218 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1218.USE = "hanim_l_calf_2";
fieldValue1213.children[4] = ProtoInstance1218;

let ProtoInstance1219 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1219.USE = "hanim_l_thigh_2";
fieldValue1213.children[5] = ProtoInstance1219;

let ProtoInstance1220 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1220.USE = "hanim_r_tarsal_distal_phalanx2";
fieldValue1213.children[6] = ProtoInstance1220;

let ProtoInstance1221 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1221.USE = "hanim_r_middistal_2";
fieldValue1213.children[7] = ProtoInstance1221;

let ProtoInstance1222 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1222.USE = "hanim_r_midproximal_2";
fieldValue1213.children[8] = ProtoInstance1222;

let ProtoInstance1223 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1223.USE = "hanim_r_hindfoot_2";
fieldValue1213.children[9] = ProtoInstance1223;

let ProtoInstance1224 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1224.USE = "hanim_r_calf_2";
fieldValue1213.children[10] = ProtoInstance1224;

let ProtoInstance1225 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1225.USE = "hanim_r_thigh_2";
fieldValue1213.children[11] = ProtoInstance1225;

let ProtoInstance1226 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1226.USE = "hanim_pelvis_2";
fieldValue1213.children[12] = ProtoInstance1226;

let ProtoInstance1227 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1227.USE = "hanim_l_eyeball_4";
fieldValue1213.children[13] = ProtoInstance1227;

let ProtoInstance1228 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1228.USE = "hanim_r_eyeball_4";
fieldValue1213.children[14] = ProtoInstance1228;

let ProtoInstance1229 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1229.USE = "hanim_skull_2";
fieldValue1213.children[15] = ProtoInstance1229;

let ProtoInstance1230 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1230.USE = "hanim_c1_2";
fieldValue1213.children[16] = ProtoInstance1230;

let ProtoInstance1231 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1231.USE = "hanim_c2_2";
fieldValue1213.children[17] = ProtoInstance1231;

let ProtoInstance1232 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1232.USE = "hanim_c3_2";
fieldValue1213.children[18] = ProtoInstance1232;

let ProtoInstance1233 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1233.USE = "hanim_c4_2";
fieldValue1213.children[19] = ProtoInstance1233;

let ProtoInstance1234 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1234.USE = "hanim_c5_2";
fieldValue1213.children[20] = ProtoInstance1234;

let ProtoInstance1235 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1235.USE = "hanim_c6_2";
fieldValue1213.children[21] = ProtoInstance1235;

let ProtoInstance1236 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1236.USE = "hanim_c7_2";
fieldValue1213.children[22] = ProtoInstance1236;

let ProtoInstance1237 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1237.USE = "hanim_l_carpal_distal_phalanx2";
fieldValue1213.children[23] = ProtoInstance1237;

let ProtoInstance1238 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1238.USE = "hanim_l_index_proximal_6";
fieldValue1213.children[24] = ProtoInstance1238;

let ProtoInstance1239 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1239.USE = "hanim_l_index_proximal_6";
fieldValue1213.children[25] = ProtoInstance1239;

let ProtoInstance1240 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1240.USE = "hanim_l_carpal_distal_phalanx3";
fieldValue1213.children[26] = ProtoInstance1240;

let ProtoInstance1241 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1241.USE = "hanim_l_index_middle_2";
fieldValue1213.children[27] = ProtoInstance1241;

let ProtoInstance1242 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1242.USE = "hanim_l_index_proximal_6";
fieldValue1213.children[28] = ProtoInstance1242;

let ProtoInstance1243 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1243.USE = "hanim_l_index_metacarpal_2";
fieldValue1213.children[29] = ProtoInstance1243;

let ProtoInstance1244 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1244.USE = "hanim_l_carpal_distal_phalanx4";
fieldValue1213.children[30] = ProtoInstance1244;

let ProtoInstance1245 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1245.USE = "hanim_l_middle_middle_2";
fieldValue1213.children[31] = ProtoInstance1245;

let ProtoInstance1246 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1246.USE = "hanim_l_middle_proximal_2";
fieldValue1213.children[32] = ProtoInstance1246;

let ProtoInstance1247 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1247.USE = "hanim_l_middle_metacarpal_2";
fieldValue1213.children[33] = ProtoInstance1247;

let ProtoInstance1248 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1248.USE = "hanim_l_carpal_distal_phalanx5";
fieldValue1213.children[34] = ProtoInstance1248;

let ProtoInstance1249 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1249.USE = "hanim_l_ring_middle_2";
fieldValue1213.children[35] = ProtoInstance1249;

let ProtoInstance1250 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1250.USE = "hanim_l_ring_proximal_2";
fieldValue1213.children[36] = ProtoInstance1250;

let ProtoInstance1251 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1251.USE = "hanim_l_ring_metacarpal_2";
fieldValue1213.children[37] = ProtoInstance1251;

let ProtoInstance1252 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1252.USE = "hanim_l_carpal_distal_phalanx6";
fieldValue1213.children[38] = ProtoInstance1252;

let ProtoInstance1253 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1253.USE = "hanim_l_pinky_middle_2";
fieldValue1213.children[39] = ProtoInstance1253;

let ProtoInstance1254 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1254.USE = "hanim_l_pinky_proximal_2";
fieldValue1213.children[40] = ProtoInstance1254;

let ProtoInstance1255 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1255.USE = "hanim_l_pinky_metacarpal_2";
fieldValue1213.children[41] = ProtoInstance1255;

let ProtoInstance1256 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1256.USE = "hanim_l_hand_2";
fieldValue1213.children[42] = ProtoInstance1256;

let ProtoInstance1257 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1257.USE = "hanim_l_forearm_2";
fieldValue1213.children[43] = ProtoInstance1257;

let ProtoInstance1258 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1258.USE = "hanim_l_upperarm_2";
fieldValue1213.children[44] = ProtoInstance1258;

let ProtoInstance1259 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1259.USE = "hanim_l_scapula_2";
fieldValue1213.children[45] = ProtoInstance1259;

let ProtoInstance1260 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1260.USE = "hanim_l_clavicle_2";
fieldValue1213.children[46] = ProtoInstance1260;

let ProtoInstance1261 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1261.USE = "hanim_r_carpal_distal_phalanx2";
fieldValue1213.children[47] = ProtoInstance1261;

let ProtoInstance1262 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1262.USE = "hanim_r_index_proximal_6";
fieldValue1213.children[48] = ProtoInstance1262;

let ProtoInstance1263 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1263.USE = "hanim_r_index_proximal_6";
fieldValue1213.children[49] = ProtoInstance1263;

let ProtoInstance1264 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1264.USE = "hanim_r_carpal_distal_phalanx3";
fieldValue1213.children[50] = ProtoInstance1264;

let ProtoInstance1265 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1265.USE = "hanim_r_index_middle_2";
fieldValue1213.children[51] = ProtoInstance1265;

let ProtoInstance1266 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1266.USE = "hanim_r_index_proximal_6";
fieldValue1213.children[52] = ProtoInstance1266;

let ProtoInstance1267 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1267.USE = "hanim_r_index_metacarpal_2";
fieldValue1213.children[53] = ProtoInstance1267;

let ProtoInstance1268 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1268.USE = "hanim_r_carpal_distal_phalanx4";
fieldValue1213.children[54] = ProtoInstance1268;

let ProtoInstance1269 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1269.USE = "hanim_r_middle_middle_2";
fieldValue1213.children[55] = ProtoInstance1269;

let ProtoInstance1270 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1270.USE = "hanim_r_middle_proximal_2";
fieldValue1213.children[56] = ProtoInstance1270;

let ProtoInstance1271 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1271.USE = "hanim_r_middle_metacarpal_2";
fieldValue1213.children[57] = ProtoInstance1271;

let ProtoInstance1272 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1272.USE = "hanim_r_carpal_distal_phalanx5";
fieldValue1213.children[58] = ProtoInstance1272;

let ProtoInstance1273 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1273.USE = "hanim_r_ring_middle_2";
fieldValue1213.children[59] = ProtoInstance1273;

let ProtoInstance1274 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1274.USE = "hanim_r_ring_proximal_2";
fieldValue1213.children[60] = ProtoInstance1274;

let ProtoInstance1275 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1275.USE = "hanim_r_ring_metacarpal_2";
fieldValue1213.children[61] = ProtoInstance1275;

let ProtoInstance1276 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1276.USE = "hanim_r_carpal_distal_phalanx6";
fieldValue1213.children[62] = ProtoInstance1276;

let ProtoInstance1277 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1277.USE = "hanim_r_pinky_middle_2";
fieldValue1213.children[63] = ProtoInstance1277;

let ProtoInstance1278 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1278.USE = "hanim_r_pinky_proximal_2";
fieldValue1213.children[64] = ProtoInstance1278;

let ProtoInstance1279 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1279.USE = "hanim_r_pinky_metacarpal_2";
fieldValue1213.children[65] = ProtoInstance1279;

let ProtoInstance1280 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1280.USE = "hanim_r_hand_2";
fieldValue1213.children[66] = ProtoInstance1280;

let ProtoInstance1281 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1281.USE = "hanim_r_forearm_2";
fieldValue1213.children[67] = ProtoInstance1281;

let ProtoInstance1282 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1282.USE = "hanim_r_upperarm_2";
fieldValue1213.children[68] = ProtoInstance1282;

let ProtoInstance1283 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1283.USE = "hanim_r_scapula_2";
fieldValue1213.children[69] = ProtoInstance1283;

let ProtoInstance1284 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1284.USE = "hanim_r_clavicle_2";
fieldValue1213.children[70] = ProtoInstance1284;

let ProtoInstance1285 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1285.USE = "hanim_t1_2";
fieldValue1213.children[71] = ProtoInstance1285;

let ProtoInstance1286 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1286.USE = "hanim_t2_2";
fieldValue1213.children[72] = ProtoInstance1286;

let ProtoInstance1287 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1287.USE = "hanim_t3_2";
fieldValue1213.children[73] = ProtoInstance1287;

let ProtoInstance1288 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1288.USE = "hanim_t4_2";
fieldValue1213.children[74] = ProtoInstance1288;

let ProtoInstance1289 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1289.USE = "hanim_t5_2";
fieldValue1213.children[75] = ProtoInstance1289;

let ProtoInstance1290 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1290.USE = "hanim_t6_2";
fieldValue1213.children[76] = ProtoInstance1290;

let ProtoInstance1291 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1291.USE = "hanim_t7_2";
fieldValue1213.children[77] = ProtoInstance1291;

let ProtoInstance1292 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1292.USE = "hanim_t8_2";
fieldValue1213.children[78] = ProtoInstance1292;

let ProtoInstance1293 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1293.USE = "hanim_t9_2";
fieldValue1213.children[79] = ProtoInstance1293;

let ProtoInstance1294 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1294.USE = "hanim_t10_2";
fieldValue1213.children[80] = ProtoInstance1294;

let ProtoInstance1295 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1295.USE = "hanim_t11_2";
fieldValue1213.children[81] = ProtoInstance1295;

let ProtoInstance1296 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1296.USE = "hanim_t12_2";
fieldValue1213.children[82] = ProtoInstance1296;

let ProtoInstance1297 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1297.USE = "hanim_l1_2";
fieldValue1213.children[83] = ProtoInstance1297;

let ProtoInstance1298 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1298.USE = "hanim_l2_2";
fieldValue1213.children[84] = ProtoInstance1298;

let ProtoInstance1299 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1299.USE = "hanim_l3_2";
fieldValue1213.children[85] = ProtoInstance1299;

let ProtoInstance1300 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1300.USE = "hanim_l4_2";
fieldValue1213.children[86] = ProtoInstance1300;

let ProtoInstance1301 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1301.USE = "hanim_l5_2";
fieldValue1213.children[87] = ProtoInstance1301;

let ProtoInstance1302 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1302.USE = "hanim_sacrum_2";
fieldValue1213.children[88] = ProtoInstance1302;

ProtoInstance107.fieldValue[3] = fieldValue1213;

let fieldValue1303 = browser.currentScene.createNode("fieldValue");
fieldValue1303.name = "name";
fieldValue1303.value = "humanoid";
ProtoInstance107.fieldValue[4] = fieldValue1303;

let fieldValue1304 = browser.currentScene.createNode("fieldValue");
fieldValue1304.name = "info";
fieldValue1304.value = "\"authorName=Matthew T. Beitler\" \"authorEmail=beitler@cis.upenn.edu or beitler@acm.org\" \"creationDate=05/12/99\" \"copyright=Copyright 1999-2003, Matthew T. Beitler\" \"humanoidVersion=JointCenters 200x, LOA&#8209;4\" \"usageRestrictions= PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED, PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided 'as-is' and without warranty of any kind, express, implied or otherwise, including without limitation, any warranty of merchantability or fitness for a particular purpose.\" \"modificationDate=08/12/03\"";
ProtoInstance107.fieldValue[5] = fieldValue1304;

browser.currentScene.children[4] = ProtoInstance107;

let Group1305 = browser.currentScene.createNode("Group");
Group1305.DEF = "JointCenters_WorldInfo";
let WorldInfo1306 = browser.currentScene.createNode("WorldInfo");
WorldInfo1306.title = "HANIM 200x Default Joint Centers, LOA&#8209;4";
WorldInfo1306.info = new MFString(new java.lang.String[" HANIM 200x Default Joint Centers, Level-Of-Articulation 4 --------------------------------------------------------- HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://H-Anim.org/Specifications/H-Anim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human modelling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "]);
Group1305.children = new MFNode();

Group1305.children[0] = WorldInfo1306;

browser.currentScene.children[5] = Group1305;

let NavigationInfo1307 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo1307.avatarSize = new MFFloat(new float[0.25,1.60000002384186,0.75]);
NavigationInfo1307.speed = 1.5;
browser.currentScene.children[6] = NavigationInfo1307;

