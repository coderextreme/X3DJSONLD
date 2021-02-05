let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interchange";
X3D0.version = "3.0";
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
<Transform><Shape><IndexedFaceSet containerField="geometry" coordIndex="0 1 2 -1 0 2 3 -1 0 3 4 -1 0 4 1 -1 5 2 1 -1 5 3 2 -1 5 4 3 -1 5 1 4 -1" creaseAngle="0.5"><Coordinate containerField="coord" point="0 0.009999999776482582 0 -0.009999999776482582 0 0 0 0 0.009999999776482582 0.009999999776482582 0 0 0 0 -0.009999999776482582 0 -0.009999999776482582 0"></Coordinate>
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
Coordinate59.point = new MFVec3f(new float[0,0.009999999776482582,0,-0.009999999776482582,0,0,0,0,0.009999999776482582,0.009999999776482582,0,0,0,0,-0.009999999776482582,0,-0.009999999776482582,0]);
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
ProtoInstance107.DEF = "humanoid";
let fieldValue108 = browser.currentScene.createNode("fieldValue");
fieldValue108.name = "humanoidBody";
let ProtoInstance109 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance109.name = "Joint";
ProtoInstance109.DEF = "hanim_humanoid_root";
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
fieldValue112.value = "0 0.8240000009536743 0.027699999511241913";
ProtoInstance109.fieldValue[2] = fieldValue112;

let fieldValue113 = browser.currentScene.createNode("fieldValue");
fieldValue113.name = "children";
let ProtoInstance114 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance114.name = "Segment";
ProtoInstance114.DEF = "hanim_sacrum";
let fieldValue115 = browser.currentScene.createNode("fieldValue");
fieldValue115.name = "name";
fieldValue115.value = "sacrum";
ProtoInstance114.fieldValue = new MFNode();

ProtoInstance114.fieldValue[0] = fieldValue115;

let fieldValue116 = browser.currentScene.createNode("fieldValue");
fieldValue116.name = "children";
let ProtoInstance117 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance117.name = "Site";
ProtoInstance117.DEF = "hanim_skull_tip";
let fieldValue118 = browser.currentScene.createNode("fieldValue");
fieldValue118.name = "name";
fieldValue118.value = "skull_tip";
ProtoInstance117.fieldValue = new MFNode();

ProtoInstance117.fieldValue[0] = fieldValue118;

let fieldValue119 = browser.currentScene.createNode("fieldValue");
fieldValue119.name = "translation";
fieldValue119.value = "0.004999999888241291 1.7503999471664429 0.005499999970197678";
ProtoInstance117.fieldValue[1] = fieldValue119;

fieldValue116.children = new MFNode();

fieldValue116.children[0] = ProtoInstance117;

let ProtoInstance120 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance120.name = "Site";
ProtoInstance120.DEF = "hanim_sellion";
let fieldValue121 = browser.currentScene.createNode("fieldValue");
fieldValue121.name = "name";
fieldValue121.value = "sellion";
ProtoInstance120.fieldValue = new MFNode();

ProtoInstance120.fieldValue[0] = fieldValue121;

let fieldValue122 = browser.currentScene.createNode("fieldValue");
fieldValue122.name = "translation";
fieldValue122.value = "0.005799999926239252 1.631600022315979 0.0851999968290329";
ProtoInstance120.fieldValue[1] = fieldValue122;

fieldValue116.children[1] = ProtoInstance120;

let ProtoInstance123 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance123.name = "Site";
ProtoInstance123.DEF = "hanim_r_infraorbitale";
let fieldValue124 = browser.currentScene.createNode("fieldValue");
fieldValue124.name = "name";
fieldValue124.value = "r_infraorbitale";
ProtoInstance123.fieldValue = new MFNode();

ProtoInstance123.fieldValue[0] = fieldValue124;

let fieldValue125 = browser.currentScene.createNode("fieldValue");
fieldValue125.name = "translation";
fieldValue125.value = "-0.02370000071823597 1.6171000003814697 0.07519999891519547";
ProtoInstance123.fieldValue[1] = fieldValue125;

fieldValue116.children[2] = ProtoInstance123;

let ProtoInstance126 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance126.name = "Site";
ProtoInstance126.DEF = "hanim_l_infraorbitale";
let fieldValue127 = browser.currentScene.createNode("fieldValue");
fieldValue127.name = "name";
fieldValue127.value = "l_infraorbitale";
ProtoInstance126.fieldValue = new MFNode();

ProtoInstance126.fieldValue[0] = fieldValue127;

let fieldValue128 = browser.currentScene.createNode("fieldValue");
fieldValue128.name = "translation";
fieldValue128.value = "0.0340999998152256 1.6171000003814697 0.07519999891519547";
ProtoInstance126.fieldValue[1] = fieldValue128;

fieldValue116.children[3] = ProtoInstance126;

let ProtoInstance129 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance129.name = "Site";
ProtoInstance129.DEF = "hanim_supramenton";
let fieldValue130 = browser.currentScene.createNode("fieldValue");
fieldValue130.name = "name";
fieldValue130.value = "supramenton";
ProtoInstance129.fieldValue = new MFNode();

ProtoInstance129.fieldValue[0] = fieldValue130;

let fieldValue131 = browser.currentScene.createNode("fieldValue");
fieldValue131.name = "translation";
fieldValue131.value = "0.006099999882280827 1.5410000085830688 0.08049999922513962";
ProtoInstance129.fieldValue[1] = fieldValue131;

fieldValue116.children[4] = ProtoInstance129;

let ProtoInstance132 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance132.name = "Site";
ProtoInstance132.DEF = "hanim_r_tragion";
let fieldValue133 = browser.currentScene.createNode("fieldValue");
fieldValue133.name = "name";
fieldValue133.value = "r_tragion";
ProtoInstance132.fieldValue = new MFNode();

ProtoInstance132.fieldValue[0] = fieldValue133;

let fieldValue134 = browser.currentScene.createNode("fieldValue");
fieldValue134.name = "translation";
fieldValue134.value = "-0.06459999829530716 1.6346999406814575 0.03020000085234642";
ProtoInstance132.fieldValue[1] = fieldValue134;

fieldValue116.children[5] = ProtoInstance132;

let ProtoInstance135 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance135.name = "Site";
ProtoInstance135.DEF = "hanim_r_gonion";
let fieldValue136 = browser.currentScene.createNode("fieldValue");
fieldValue136.name = "name";
fieldValue136.value = "r_gonion";
ProtoInstance135.fieldValue = new MFNode();

ProtoInstance135.fieldValue[0] = fieldValue136;

let fieldValue137 = browser.currentScene.createNode("fieldValue");
fieldValue137.name = "translation";
fieldValue137.value = "-0.052000001072883606 1.552899956703186 0.034699998795986176";
ProtoInstance135.fieldValue[1] = fieldValue137;

fieldValue116.children[6] = ProtoInstance135;

let ProtoInstance138 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance138.name = "Site";
ProtoInstance138.DEF = "hanim_l_tragion";
let fieldValue139 = browser.currentScene.createNode("fieldValue");
fieldValue139.name = "name";
fieldValue139.value = "l_tragion";
ProtoInstance138.fieldValue = new MFNode();

ProtoInstance138.fieldValue[0] = fieldValue139;

let fieldValue140 = browser.currentScene.createNode("fieldValue");
fieldValue140.name = "translation";
fieldValue140.value = "0.0738999992609024 1.6347999572753906 0.028200000524520874";
ProtoInstance138.fieldValue[1] = fieldValue140;

fieldValue116.children[7] = ProtoInstance138;

let ProtoInstance141 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance141.name = "Site";
ProtoInstance141.DEF = "hanim_l_gonion";
let fieldValue142 = browser.currentScene.createNode("fieldValue");
fieldValue142.name = "name";
fieldValue142.value = "l_gonion";
ProtoInstance141.fieldValue = new MFNode();

ProtoInstance141.fieldValue[0] = fieldValue142;

let fieldValue143 = browser.currentScene.createNode("fieldValue");
fieldValue143.name = "translation";
fieldValue143.value = "0.06310000270605087 1.5529999732971191 0.032999999821186066";
ProtoInstance141.fieldValue[1] = fieldValue143;

fieldValue116.children[8] = ProtoInstance141;

let ProtoInstance144 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance144.name = "Site";
ProtoInstance144.DEF = "hanim_nuchale";
let fieldValue145 = browser.currentScene.createNode("fieldValue");
fieldValue145.name = "name";
fieldValue145.value = "nuchale";
ProtoInstance144.fieldValue = new MFNode();

ProtoInstance144.fieldValue[0] = fieldValue145;

let fieldValue146 = browser.currentScene.createNode("fieldValue");
fieldValue146.name = "translation";
fieldValue146.value = "0.0038999998942017555 1.5972000360488892 -0.07959999889135361";
ProtoInstance144.fieldValue[1] = fieldValue146;

fieldValue116.children[9] = ProtoInstance144;

let ProtoInstance147 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance147.name = "Site";
ProtoInstance147.DEF = "hanim_r_clavicale";
let fieldValue148 = browser.currentScene.createNode("fieldValue");
fieldValue148.name = "name";
fieldValue148.value = "r_clavicale";
ProtoInstance147.fieldValue = new MFNode();

ProtoInstance147.fieldValue[0] = fieldValue148;

let fieldValue149 = browser.currentScene.createNode("fieldValue");
fieldValue149.name = "translation";
fieldValue149.value = "-0.011500000022351742 1.4943000078201294 0.03999999910593033";
ProtoInstance147.fieldValue[1] = fieldValue149;

fieldValue116.children[10] = ProtoInstance147;

let ProtoInstance150 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance150.name = "Site";
ProtoInstance150.DEF = "hanim_suprasternale";
let fieldValue151 = browser.currentScene.createNode("fieldValue");
fieldValue151.name = "name";
fieldValue151.value = "suprasternale";
ProtoInstance150.fieldValue = new MFNode();

ProtoInstance150.fieldValue[0] = fieldValue151;

let fieldValue152 = browser.currentScene.createNode("fieldValue");
fieldValue152.name = "translation";
fieldValue152.value = "0.00839999970048666 1.4714000225067139 0.05510000139474869";
ProtoInstance150.fieldValue[1] = fieldValue152;

fieldValue116.children[11] = ProtoInstance150;

let ProtoInstance153 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance153.name = "Site";
ProtoInstance153.DEF = "hanim_l_clavicale";
let fieldValue154 = browser.currentScene.createNode("fieldValue");
fieldValue154.name = "name";
fieldValue154.value = "l_clavicale";
ProtoInstance153.fieldValue = new MFNode();

ProtoInstance153.fieldValue[0] = fieldValue154;

let fieldValue155 = browser.currentScene.createNode("fieldValue");
fieldValue155.name = "translation";
fieldValue155.value = "0.02710000053048134 1.4943000078201294 0.039400000125169754";
ProtoInstance153.fieldValue[1] = fieldValue155;

fieldValue116.children[12] = ProtoInstance153;

let ProtoInstance156 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance156.name = "Site";
ProtoInstance156.DEF = "hanim_r_thelion";
let fieldValue157 = browser.currentScene.createNode("fieldValue");
fieldValue157.name = "name";
fieldValue157.value = "r_thelion";
ProtoInstance156.fieldValue = new MFNode();

ProtoInstance156.fieldValue[0] = fieldValue157;

let fieldValue158 = browser.currentScene.createNode("fieldValue");
fieldValue158.name = "translation";
fieldValue158.value = "-0.07360000163316727 1.3385000228881836 0.1216999962925911";
ProtoInstance156.fieldValue[1] = fieldValue158;

fieldValue116.children[13] = ProtoInstance156;

let ProtoInstance159 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance159.name = "Site";
ProtoInstance159.DEF = "hanim_l_thelion";
let fieldValue160 = browser.currentScene.createNode("fieldValue");
fieldValue160.name = "name";
fieldValue160.value = "l_thelion";
ProtoInstance159.fieldValue = new MFNode();

ProtoInstance159.fieldValue[0] = fieldValue160;

let fieldValue161 = browser.currentScene.createNode("fieldValue");
fieldValue161.name = "translation";
fieldValue161.value = "0.09179999679327011 1.3381999731063843 0.11919999867677689";
ProtoInstance159.fieldValue[1] = fieldValue161;

fieldValue116.children[14] = ProtoInstance159;

let ProtoInstance162 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance162.name = "Site";
ProtoInstance162.DEF = "hanim_substernale";
let fieldValue163 = browser.currentScene.createNode("fieldValue");
fieldValue163.name = "name";
fieldValue163.value = "substernale";
ProtoInstance162.fieldValue = new MFNode();

ProtoInstance162.fieldValue[0] = fieldValue163;

let fieldValue164 = browser.currentScene.createNode("fieldValue");
fieldValue164.name = "translation";
fieldValue164.value = "0.008500000461935997 1.2994999885559082 0.11469999700784683";
ProtoInstance162.fieldValue[1] = fieldValue164;

fieldValue116.children[15] = ProtoInstance162;

let ProtoInstance165 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance165.name = "Site";
ProtoInstance165.DEF = "hanim_r_rib10";
let fieldValue166 = browser.currentScene.createNode("fieldValue");
fieldValue166.name = "name";
fieldValue166.value = "r_rib10";
ProtoInstance165.fieldValue = new MFNode();

ProtoInstance165.fieldValue[0] = fieldValue166;

let fieldValue167 = browser.currentScene.createNode("fieldValue");
fieldValue167.name = "translation";
fieldValue167.value = "-0.07109999656677246 1.194100022315979 0.10159999877214432";
ProtoInstance165.fieldValue[1] = fieldValue167;

fieldValue116.children[16] = ProtoInstance165;

let ProtoInstance168 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance168.name = "Site";
ProtoInstance168.DEF = "hanim_r_asis";
let fieldValue169 = browser.currentScene.createNode("fieldValue");
fieldValue169.name = "name";
fieldValue169.value = "r_asis";
ProtoInstance168.fieldValue = new MFNode();

ProtoInstance168.fieldValue[0] = fieldValue169;

let fieldValue170 = browser.currentScene.createNode("fieldValue");
fieldValue170.name = "translation";
fieldValue170.value = "-0.08869999647140503 1.0020999908447266 0.1111999973654747";
ProtoInstance168.fieldValue[1] = fieldValue170;

fieldValue116.children[17] = ProtoInstance168;

let ProtoInstance171 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance171.name = "Site";
ProtoInstance171.DEF = "hanim_l_rib10";
let fieldValue172 = browser.currentScene.createNode("fieldValue");
fieldValue172.name = "name";
fieldValue172.value = "l_rib10";
ProtoInstance171.fieldValue = new MFNode();

ProtoInstance171.fieldValue[0] = fieldValue172;

let fieldValue173 = browser.currentScene.createNode("fieldValue");
fieldValue173.name = "translation";
fieldValue173.value = "0.08709999918937683 1.1924999952316284 0.09920000284910202";
ProtoInstance171.fieldValue[1] = fieldValue173;

fieldValue116.children[18] = ProtoInstance171;

let ProtoInstance174 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance174.name = "Site";
ProtoInstance174.DEF = "hanim_l_asis";
let fieldValue175 = browser.currentScene.createNode("fieldValue");
fieldValue175.name = "name";
fieldValue175.value = "l_asis";
ProtoInstance174.fieldValue = new MFNode();

ProtoInstance174.fieldValue[0] = fieldValue175;

let fieldValue176 = browser.currentScene.createNode("fieldValue");
fieldValue176.name = "translation";
fieldValue176.value = "0.0925000011920929 0.9983000159263611 0.10520000010728836";
ProtoInstance174.fieldValue[1] = fieldValue176;

fieldValue116.children[19] = ProtoInstance174;

let ProtoInstance177 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance177.name = "Site";
ProtoInstance177.DEF = "hanim_r_iliocristale";
let fieldValue178 = browser.currentScene.createNode("fieldValue");
fieldValue178.name = "name";
fieldValue178.value = "r_iliocristale";
ProtoInstance177.fieldValue = new MFNode();

ProtoInstance177.fieldValue[0] = fieldValue178;

let fieldValue179 = browser.currentScene.createNode("fieldValue");
fieldValue179.name = "translation";
fieldValue179.value = "-0.1525000035762787 1.0628000497817993 0.0035000001080334187";
ProtoInstance177.fieldValue[1] = fieldValue179;

fieldValue116.children[20] = ProtoInstance177;

let ProtoInstance180 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance180.name = "Site";
ProtoInstance180.DEF = "hanim_r_trochanterion";
let fieldValue181 = browser.currentScene.createNode("fieldValue");
fieldValue181.name = "name";
fieldValue181.value = "r_trochanterion";
ProtoInstance180.fieldValue = new MFNode();

ProtoInstance180.fieldValue[0] = fieldValue181;

let fieldValue182 = browser.currentScene.createNode("fieldValue");
fieldValue182.name = "translation";
fieldValue182.value = "-0.1688999980688095 0.8418999910354614 0.03519999980926514";
ProtoInstance180.fieldValue[1] = fieldValue182;

fieldValue116.children[21] = ProtoInstance180;

let ProtoInstance183 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance183.name = "Site";
ProtoInstance183.DEF = "hanim_l_iliocristale";
let fieldValue184 = browser.currentScene.createNode("fieldValue");
fieldValue184.name = "name";
fieldValue184.value = "l_iliocristale";
ProtoInstance183.fieldValue = new MFNode();

ProtoInstance183.fieldValue[0] = fieldValue184;

let fieldValue185 = browser.currentScene.createNode("fieldValue");
fieldValue185.name = "translation";
fieldValue185.value = "0.16120000183582306 1.0536999702453613 0.0007999999797903001";
ProtoInstance183.fieldValue[1] = fieldValue185;

fieldValue116.children[22] = ProtoInstance183;

let ProtoInstance186 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance186.name = "Site";
ProtoInstance186.DEF = "hanim_l_trochanterion";
let fieldValue187 = browser.currentScene.createNode("fieldValue");
fieldValue187.name = "name";
fieldValue187.value = "l_trochanterion";
ProtoInstance186.fieldValue = new MFNode();

ProtoInstance186.fieldValue[0] = fieldValue187;

let fieldValue188 = browser.currentScene.createNode("fieldValue");
fieldValue188.name = "translation";
fieldValue188.value = "0.16769999265670776 0.8335999846458435 0.030300000682473183";
ProtoInstance186.fieldValue[1] = fieldValue188;

fieldValue116.children[23] = ProtoInstance186;

let ProtoInstance189 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance189.name = "Site";
ProtoInstance189.DEF = "hanim_cervicale";
let fieldValue190 = browser.currentScene.createNode("fieldValue");
fieldValue190.name = "name";
fieldValue190.value = "cervicale";
ProtoInstance189.fieldValue = new MFNode();

ProtoInstance189.fieldValue[0] = fieldValue190;

let fieldValue191 = browser.currentScene.createNode("fieldValue");
fieldValue191.name = "translation";
fieldValue191.value = "0.006399999838322401 1.5199999809265137 -0.08150000125169754";
ProtoInstance189.fieldValue[1] = fieldValue191;

fieldValue116.children[24] = ProtoInstance189;

let ProtoInstance192 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance192.name = "Site";
ProtoInstance192.DEF = "hanim_spine_2_lower_back";
let fieldValue193 = browser.currentScene.createNode("fieldValue");
fieldValue193.name = "name";
fieldValue193.value = "spine_2_lower_back";
ProtoInstance192.fieldValue = new MFNode();

ProtoInstance192.fieldValue[0] = fieldValue193;

let fieldValue194 = browser.currentScene.createNode("fieldValue");
fieldValue194.name = "translation";
fieldValue194.value = "0.004900000058114529 1.1907999515533447 -0.11129999905824661";
ProtoInstance192.fieldValue[1] = fieldValue194;

fieldValue116.children[25] = ProtoInstance192;

let ProtoInstance195 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance195.name = "Site";
ProtoInstance195.DEF = "hanim_r_psis";
let fieldValue196 = browser.currentScene.createNode("fieldValue");
fieldValue196.name = "name";
fieldValue196.value = "r_psis";
ProtoInstance195.fieldValue = new MFNode();

ProtoInstance195.fieldValue[0] = fieldValue196;

let fieldValue197 = browser.currentScene.createNode("fieldValue");
fieldValue197.name = "translation";
fieldValue197.value = "-0.07159999758005142 1.0190000534057617 -0.11379999667406082";
ProtoInstance195.fieldValue[1] = fieldValue197;

fieldValue116.children[26] = ProtoInstance195;

let ProtoInstance198 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance198.name = "Site";
ProtoInstance198.DEF = "hanim_l_psis";
let fieldValue199 = browser.currentScene.createNode("fieldValue");
fieldValue199.name = "name";
fieldValue199.value = "l_psis";
ProtoInstance198.fieldValue = new MFNode();

ProtoInstance198.fieldValue[0] = fieldValue199;

let fieldValue200 = browser.currentScene.createNode("fieldValue");
fieldValue200.name = "translation";
fieldValue200.value = "0.07739999890327454 1.0190000534057617 -0.11509999632835388";
ProtoInstance198.fieldValue[1] = fieldValue200;

fieldValue116.children[27] = ProtoInstance198;

let ProtoInstance201 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance201.name = "Site";
ProtoInstance201.DEF = "hanim_waist_preferred_posterior";
let fieldValue202 = browser.currentScene.createNode("fieldValue");
fieldValue202.name = "name";
fieldValue202.value = "waist_preferred_posterior";
ProtoInstance201.fieldValue = new MFNode();

ProtoInstance201.fieldValue[0] = fieldValue202;

let fieldValue203 = browser.currentScene.createNode("fieldValue");
fieldValue203.name = "translation";
fieldValue203.value = "0.28999999165534973 1.0915000438690186 -0.10909999907016754";
ProtoInstance201.fieldValue[1] = fieldValue203;

fieldValue116.children[28] = ProtoInstance201;

let ProtoInstance204 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance204.name = "Site";
ProtoInstance204.DEF = "hanim_r_acromion";
let fieldValue205 = browser.currentScene.createNode("fieldValue");
fieldValue205.name = "name";
fieldValue205.value = "r_acromion";
ProtoInstance204.fieldValue = new MFNode();

ProtoInstance204.fieldValue[0] = fieldValue205;

let fieldValue206 = browser.currentScene.createNode("fieldValue");
fieldValue206.name = "translation";
fieldValue206.value = "-0.19050000607967377 1.479099988937378 -0.04309999942779541";
ProtoInstance204.fieldValue[1] = fieldValue206;

fieldValue116.children[29] = ProtoInstance204;

let ProtoInstance207 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance207.name = "Site";
ProtoInstance207.DEF = "hanim_r_axilla_proximal";
let fieldValue208 = browser.currentScene.createNode("fieldValue");
fieldValue208.name = "name";
fieldValue208.value = "r_axilla_proximal";
ProtoInstance207.fieldValue = new MFNode();

ProtoInstance207.fieldValue[0] = fieldValue208;

let fieldValue209 = browser.currentScene.createNode("fieldValue");
fieldValue209.name = "translation";
fieldValue209.value = "-0.16259999573230743 1.4071999788284302 -0.003100000089034438";
ProtoInstance207.fieldValue[1] = fieldValue209;

fieldValue116.children[30] = ProtoInstance207;

let ProtoInstance210 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance210.name = "Site";
ProtoInstance210.DEF = "hanim_r_radial_styloid";
let fieldValue211 = browser.currentScene.createNode("fieldValue");
fieldValue211.name = "name";
fieldValue211.value = "r_radial_styloid";
ProtoInstance210.fieldValue = new MFNode();

ProtoInstance210.fieldValue[0] = fieldValue211;

let fieldValue212 = browser.currentScene.createNode("fieldValue");
fieldValue212.name = "translation";
fieldValue212.value = "-0.188400000333786 0.8676000237464905 -0.035999998450279236";
ProtoInstance210.fieldValue[1] = fieldValue212;

fieldValue116.children[31] = ProtoInstance210;

let ProtoInstance213 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance213.name = "Site";
ProtoInstance213.DEF = "hanim_r_axilla_distal";
let fieldValue214 = browser.currentScene.createNode("fieldValue");
fieldValue214.name = "name";
fieldValue214.value = "r_axilla_distal";
ProtoInstance213.fieldValue = new MFNode();

ProtoInstance213.fieldValue[0] = fieldValue214;

let fieldValue215 = browser.currentScene.createNode("fieldValue");
fieldValue215.name = "translation";
fieldValue215.value = "-0.16030000150203705 1.4098000526428223 -0.08259999752044678";
ProtoInstance213.fieldValue[1] = fieldValue215;

fieldValue116.children[32] = ProtoInstance213;

let ProtoInstance216 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance216.name = "Site";
ProtoInstance216.DEF = "hanim_r_olecranon";
let fieldValue217 = browser.currentScene.createNode("fieldValue");
fieldValue217.name = "name";
fieldValue217.value = "r_olecranon";
ProtoInstance216.fieldValue = new MFNode();

ProtoInstance216.fieldValue[0] = fieldValue217;

let fieldValue218 = browser.currentScene.createNode("fieldValue");
fieldValue218.name = "translation";
fieldValue218.value = "-0.1906999945640564 1.1404999494552612 -0.10649999976158142";
ProtoInstance216.fieldValue[1] = fieldValue218;

fieldValue116.children[33] = ProtoInstance216;

let ProtoInstance219 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance219.name = "Site";
ProtoInstance219.DEF = "hanim_r_humeral_lateral_epicondyles";
let fieldValue220 = browser.currentScene.createNode("fieldValue");
fieldValue220.name = "name";
fieldValue220.value = "r_humeral_lateral_epicondyles";
ProtoInstance219.fieldValue = new MFNode();

ProtoInstance219.fieldValue[0] = fieldValue220;

let fieldValue221 = browser.currentScene.createNode("fieldValue");
fieldValue221.name = "translation";
fieldValue221.value = "-0.2223999947309494 1.1517000198364258 -0.10329999774694443";
ProtoInstance219.fieldValue[1] = fieldValue221;

fieldValue116.children[34] = ProtoInstance219;

let ProtoInstance222 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance222.name = "Site";
ProtoInstance222.DEF = "hanim_r_humeral_medial_epicondyles";
let fieldValue223 = browser.currentScene.createNode("fieldValue");
fieldValue223.name = "name";
fieldValue223.value = "r_humeral_medial_epicondyles";
ProtoInstance222.fieldValue = new MFNode();

ProtoInstance222.fieldValue[0] = fieldValue223;

let fieldValue224 = browser.currentScene.createNode("fieldValue");
fieldValue224.name = "translation";
fieldValue224.value = "-0.1679999977350235 1.1297999620437622 -0.10620000213384628";
ProtoInstance222.fieldValue[1] = fieldValue224;

fieldValue116.children[35] = ProtoInstance222;

let ProtoInstance225 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance225.name = "Site";
ProtoInstance225.DEF = "hanim_r_radiale";
let fieldValue226 = browser.currentScene.createNode("fieldValue");
fieldValue226.name = "name";
fieldValue226.value = "r_radiale";
ProtoInstance225.fieldValue = new MFNode();

ProtoInstance225.fieldValue[0] = fieldValue226;

let fieldValue227 = browser.currentScene.createNode("fieldValue");
fieldValue227.name = "translation";
fieldValue227.value = "-0.21299999952316284 1.1304999589920044 -0.10909999907016754";
ProtoInstance225.fieldValue[1] = fieldValue227;

fieldValue116.children[36] = ProtoInstance225;

let ProtoInstance228 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance228.name = "Site";
ProtoInstance228.DEF = "hanim_r_metacarpal_phalanx_2";
let fieldValue229 = browser.currentScene.createNode("fieldValue");
fieldValue229.name = "name";
fieldValue229.value = "r_metacarpal_phalanx_2";
ProtoInstance228.fieldValue = new MFNode();

ProtoInstance228.fieldValue[0] = fieldValue229;

let fieldValue230 = browser.currentScene.createNode("fieldValue");
fieldValue230.name = "translation";
fieldValue230.value = "-0.19769999384880066 0.8169000148773193 -0.01769999973475933";
ProtoInstance228.fieldValue[1] = fieldValue230;

fieldValue116.children[37] = ProtoInstance228;

let ProtoInstance231 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance231.name = "Site";
ProtoInstance231.DEF = "hanim_r_dactylion";
let fieldValue232 = browser.currentScene.createNode("fieldValue");
fieldValue232.name = "name";
fieldValue232.value = "r_dactylion";
ProtoInstance231.fieldValue = new MFNode();

ProtoInstance231.fieldValue[0] = fieldValue232;

let fieldValue233 = browser.currentScene.createNode("fieldValue");
fieldValue233.name = "translation";
fieldValue233.value = "-0.1941000074148178 0.6772000193595886 -0.04230000078678131";
ProtoInstance231.fieldValue[1] = fieldValue233;

fieldValue116.children[38] = ProtoInstance231;

let ProtoInstance234 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance234.name = "Site";
ProtoInstance234.DEF = "hanim_r_ulnar_styloid";
let fieldValue235 = browser.currentScene.createNode("fieldValue");
fieldValue235.name = "name";
fieldValue235.value = "r_ulnar_styloid";
ProtoInstance234.fieldValue = new MFNode();

ProtoInstance234.fieldValue[0] = fieldValue235;

let fieldValue236 = browser.currentScene.createNode("fieldValue");
fieldValue236.name = "translation";
fieldValue236.value = "-0.21170000731945038 0.8561999797821045 -0.058400001376867294";
ProtoInstance234.fieldValue[1] = fieldValue236;

fieldValue116.children[39] = ProtoInstance234;

let ProtoInstance237 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance237.name = "Site";
ProtoInstance237.DEF = "hanim_r_metacarpal_phalanx_5";
let fieldValue238 = browser.currentScene.createNode("fieldValue");
fieldValue238.name = "name";
fieldValue238.value = "r_metacarpal_phalanx_5";
ProtoInstance237.fieldValue = new MFNode();

ProtoInstance237.fieldValue[0] = fieldValue238;

let fieldValue239 = browser.currentScene.createNode("fieldValue");
fieldValue239.name = "translation";
fieldValue239.value = "-0.19290000200271606 0.7889999747276306 -0.10639999806880951";
ProtoInstance237.fieldValue[1] = fieldValue239;

fieldValue116.children[40] = ProtoInstance237;

let ProtoInstance240 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance240.name = "Site";
ProtoInstance240.DEF = "hanim_l_acromion";
let fieldValue241 = browser.currentScene.createNode("fieldValue");
fieldValue241.name = "name";
fieldValue241.value = "l_acromion";
ProtoInstance240.fieldValue = new MFNode();

ProtoInstance240.fieldValue[0] = fieldValue241;

let fieldValue242 = browser.currentScene.createNode("fieldValue");
fieldValue242.name = "translation";
fieldValue242.value = "0.20319999754428864 1.4759999513626099 -0.04899999871850014";
ProtoInstance240.fieldValue[1] = fieldValue242;

fieldValue116.children[41] = ProtoInstance240;

let ProtoInstance243 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance243.name = "Site";
ProtoInstance243.DEF = "hanim_l_axilla_proximal";
let fieldValue244 = browser.currentScene.createNode("fieldValue");
fieldValue244.name = "name";
fieldValue244.value = "l_axilla_proximal";
ProtoInstance243.fieldValue = new MFNode();

ProtoInstance243.fieldValue[0] = fieldValue244;

let fieldValue245 = browser.currentScene.createNode("fieldValue");
fieldValue245.name = "translation";
fieldValue245.value = "0.1776999980211258 1.406499981880188 -0.007499999832361937";
ProtoInstance243.fieldValue[1] = fieldValue245;

fieldValue116.children[42] = ProtoInstance243;

let ProtoInstance246 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance246.name = "Site";
ProtoInstance246.DEF = "hanim_l_radial_styloid";
let fieldValue247 = browser.currentScene.createNode("fieldValue");
fieldValue247.name = "name";
fieldValue247.value = "l_radial_styloid";
ProtoInstance246.fieldValue = new MFNode();

ProtoInstance246.fieldValue[0] = fieldValue247;

let fieldValue248 = browser.currentScene.createNode("fieldValue");
fieldValue248.name = "translation";
fieldValue248.value = "0.19009999930858612 0.8644999861717224 -0.04149999842047691";
ProtoInstance246.fieldValue[1] = fieldValue248;

fieldValue116.children[43] = ProtoInstance246;

let ProtoInstance249 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance249.name = "Site";
ProtoInstance249.DEF = "hanim_l_axilla_distal";
let fieldValue250 = browser.currentScene.createNode("fieldValue");
fieldValue250.name = "name";
fieldValue250.value = "l_axilla_distal";
ProtoInstance249.fieldValue = new MFNode();

ProtoInstance249.fieldValue[0] = fieldValue250;

let fieldValue251 = browser.currentScene.createNode("fieldValue");
fieldValue251.name = "translation";
fieldValue251.value = "0.17059999704360962 1.4071999788284302 -0.08749999850988388";
ProtoInstance249.fieldValue[1] = fieldValue251;

fieldValue116.children[44] = ProtoInstance249;

let ProtoInstance252 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance252.name = "Site";
ProtoInstance252.DEF = "hanim_l_olecranon";
let fieldValue253 = browser.currentScene.createNode("fieldValue");
fieldValue253.name = "name";
fieldValue253.value = "l_olecranon";
ProtoInstance252.fieldValue = new MFNode();

ProtoInstance252.fieldValue[0] = fieldValue253;

let fieldValue254 = browser.currentScene.createNode("fieldValue");
fieldValue254.name = "translation";
fieldValue254.value = "-0.19619999825954437 1.1375000476837158 -0.11230000108480453";
ProtoInstance252.fieldValue[1] = fieldValue254;

fieldValue116.children[45] = ProtoInstance252;

let ProtoInstance255 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance255.name = "Site";
ProtoInstance255.DEF = "hanim_l_humeral_lateral_epicondyles";
let fieldValue256 = browser.currentScene.createNode("fieldValue");
fieldValue256.name = "name";
fieldValue256.value = "l_humeral_lateral_epicondyles";
ProtoInstance255.fieldValue = new MFNode();

ProtoInstance255.fieldValue[0] = fieldValue256;

let fieldValue257 = browser.currentScene.createNode("fieldValue");
fieldValue257.name = "translation";
fieldValue257.value = "0.2280000001192093 1.1482000350952148 -0.10999999940395355";
ProtoInstance255.fieldValue[1] = fieldValue257;

fieldValue116.children[46] = ProtoInstance255;

let ProtoInstance258 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance258.name = "Site";
ProtoInstance258.DEF = "hanim_l_humeral_medial_epicondyles";
let fieldValue259 = browser.currentScene.createNode("fieldValue");
fieldValue259.name = "name";
fieldValue259.value = "l_humeral_medial_epicondyles";
ProtoInstance258.fieldValue = new MFNode();

ProtoInstance258.fieldValue[0] = fieldValue259;

let fieldValue260 = browser.currentScene.createNode("fieldValue");
fieldValue260.name = "translation";
fieldValue260.value = "0.17350000143051147 1.1272000074386597 -0.11129999905824661";
ProtoInstance258.fieldValue[1] = fieldValue260;

fieldValue116.children[47] = ProtoInstance258;

let ProtoInstance261 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance261.name = "Site";
ProtoInstance261.DEF = "hanim_l_radiale";
let fieldValue262 = browser.currentScene.createNode("fieldValue");
fieldValue262.name = "name";
fieldValue262.value = "l_radiale";
ProtoInstance261.fieldValue = new MFNode();

ProtoInstance261.fieldValue[0] = fieldValue262;

let fieldValue263 = browser.currentScene.createNode("fieldValue");
fieldValue263.name = "translation";
fieldValue263.value = "0.21819999814033508 1.1211999654769897 -0.11670000106096268";
ProtoInstance261.fieldValue[1] = fieldValue263;

fieldValue116.children[48] = ProtoInstance261;

let ProtoInstance264 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance264.name = "Site";
ProtoInstance264.DEF = "hanim_l_metacarpal_phalanx_2";
let fieldValue265 = browser.currentScene.createNode("fieldValue");
fieldValue265.name = "name";
fieldValue265.value = "l_metacarpal_phalanx_2";
ProtoInstance264.fieldValue = new MFNode();

ProtoInstance264.fieldValue[0] = fieldValue265;

let fieldValue266 = browser.currentScene.createNode("fieldValue");
fieldValue266.name = "translation";
fieldValue266.value = "0.20090000331401825 0.8138999938964844 -0.02370000071823597";
ProtoInstance264.fieldValue[1] = fieldValue266;

fieldValue116.children[49] = ProtoInstance264;

let ProtoInstance267 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance267.name = "Site";
ProtoInstance267.DEF = "hanim_l_dactylion";
let fieldValue268 = browser.currentScene.createNode("fieldValue");
fieldValue268.name = "name";
fieldValue268.value = "l_dactylion";
ProtoInstance267.fieldValue = new MFNode();

ProtoInstance267.fieldValue[0] = fieldValue268;

let fieldValue269 = browser.currentScene.createNode("fieldValue");
fieldValue269.name = "translation";
fieldValue269.value = "0.20559999346733093 0.6743000149726868 -0.04820000007748604";
ProtoInstance267.fieldValue[1] = fieldValue269;

fieldValue116.children[50] = ProtoInstance267;

let ProtoInstance270 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance270.name = "Site";
ProtoInstance270.DEF = "hanim_l_ulnar_styloid";
let fieldValue271 = browser.currentScene.createNode("fieldValue");
fieldValue271.name = "name";
fieldValue271.value = "l_ulnar_styloid";
ProtoInstance270.fieldValue = new MFNode();

ProtoInstance270.fieldValue[0] = fieldValue271;

let fieldValue272 = browser.currentScene.createNode("fieldValue");
fieldValue272.name = "translation";
fieldValue272.value = "-0.2142000049352646 0.8529000282287598 -0.06480000168085098";
ProtoInstance270.fieldValue[1] = fieldValue272;

fieldValue116.children[51] = ProtoInstance270;

let ProtoInstance273 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance273.name = "Site";
ProtoInstance273.DEF = "hanim_l_metacarpal_phalanx_5";
let fieldValue274 = browser.currentScene.createNode("fieldValue");
fieldValue274.name = "name";
fieldValue274.value = "l_metacarpal_phalanx_5";
ProtoInstance273.fieldValue = new MFNode();

ProtoInstance273.fieldValue[0] = fieldValue274;

let fieldValue275 = browser.currentScene.createNode("fieldValue");
fieldValue275.name = "translation";
fieldValue275.value = "0.19290000200271606 0.7860000133514404 -0.11219999939203262";
ProtoInstance273.fieldValue[1] = fieldValue275;

fieldValue116.children[52] = ProtoInstance273;

let ProtoInstance276 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance276.name = "Site";
ProtoInstance276.DEF = "hanim_r_knee_crease";
let fieldValue277 = browser.currentScene.createNode("fieldValue");
fieldValue277.name = "name";
fieldValue277.value = "r_knee_crease";
ProtoInstance276.fieldValue = new MFNode();

ProtoInstance276.fieldValue[0] = fieldValue277;

let fieldValue278 = browser.currentScene.createNode("fieldValue");
fieldValue278.name = "translation";
fieldValue278.value = "-0.08250000327825546 0.49320000410079956 -0.032600000500679016";
ProtoInstance276.fieldValue[1] = fieldValue278;

fieldValue116.children[53] = ProtoInstance276;

let ProtoInstance279 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance279.name = "Site";
ProtoInstance279.DEF = "hanim_r_femoral_lateral_epicondyles";
let fieldValue280 = browser.currentScene.createNode("fieldValue");
fieldValue280.name = "name";
fieldValue280.value = "r_femoral_lateral_epicondyles";
ProtoInstance279.fieldValue = new MFNode();

ProtoInstance279.fieldValue[0] = fieldValue280;

let fieldValue281 = browser.currentScene.createNode("fieldValue");
fieldValue281.name = "translation";
fieldValue281.value = "-0.1421000063419342 0.4991999864578247 0.03099999949336052";
ProtoInstance279.fieldValue[1] = fieldValue281;

fieldValue116.children[54] = ProtoInstance279;

let ProtoInstance282 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance282.name = "Site";
ProtoInstance282.DEF = "hanim_r_femoral_medial_epicondyles";
let fieldValue283 = browser.currentScene.createNode("fieldValue");
fieldValue283.name = "name";
fieldValue283.value = "r_femoral_lateral_epicondyles";
ProtoInstance282.fieldValue = new MFNode();

ProtoInstance282.fieldValue[0] = fieldValue283;

let fieldValue284 = browser.currentScene.createNode("fieldValue");
fieldValue284.name = "translation";
fieldValue284.value = "-0.022099999710917473 0.5013999938964844 0.02889999933540821";
ProtoInstance282.fieldValue[1] = fieldValue284;

fieldValue116.children[55] = ProtoInstance282;

let ProtoInstance285 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance285.name = "Site";
ProtoInstance285.DEF = "hanim_r_tarsal_interphalangeal_phalanx_5";
let fieldValue286 = browser.currentScene.createNode("fieldValue");
fieldValue286.name = "name";
fieldValue286.value = "r_tarsal_interphalangeal_phalanx_5";
ProtoInstance285.fieldValue = new MFNode();

ProtoInstance285.fieldValue[0] = fieldValue286;

let fieldValue287 = browser.currentScene.createNode("fieldValue");
fieldValue287.name = "translation";
fieldValue287.value = "-0.15230000019073486 0.016599999740719795 0.08950000256299973";
ProtoInstance285.fieldValue[1] = fieldValue287;

fieldValue116.children[56] = ProtoInstance285;

let ProtoInstance288 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance288.name = "Site";
ProtoInstance288.DEF = "hanim_r_lateral_malleolus";
let fieldValue289 = browser.currentScene.createNode("fieldValue");
fieldValue289.name = "name";
fieldValue289.value = "r_lateral_malleolus";
ProtoInstance288.fieldValue = new MFNode();

ProtoInstance288.fieldValue[0] = fieldValue289;

let fieldValue290 = browser.currentScene.createNode("fieldValue");
fieldValue290.name = "translation";
fieldValue290.value = "-0.1005999967455864 0.0658000037074089 -0.10750000178813934";
ProtoInstance288.fieldValue[1] = fieldValue290;

fieldValue116.children[57] = ProtoInstance288;

let ProtoInstance291 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance291.name = "Site";
ProtoInstance291.DEF = "hanim_r_medial_malleolus";
let fieldValue292 = browser.currentScene.createNode("fieldValue");
fieldValue292.name = "name";
fieldValue292.value = "r_medial_malleolus";
ProtoInstance291.fieldValue = new MFNode();

ProtoInstance291.fieldValue[0] = fieldValue292;

let fieldValue293 = browser.currentScene.createNode("fieldValue");
fieldValue293.name = "translation";
fieldValue293.value = "-0.05909999832510948 0.07599999755620956 -0.09279999881982803";
ProtoInstance291.fieldValue[1] = fieldValue293;

fieldValue116.children[58] = ProtoInstance291;

let ProtoInstance294 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance294.name = "Site";
ProtoInstance294.DEF = "hanim_r_sphyrion";
let fieldValue295 = browser.currentScene.createNode("fieldValue");
fieldValue295.name = "name";
fieldValue295.value = "r_sphyrion";
ProtoInstance294.fieldValue = new MFNode();

ProtoInstance294.fieldValue[0] = fieldValue295;

let fieldValue296 = browser.currentScene.createNode("fieldValue");
fieldValue296.name = "translation";
fieldValue296.value = "-0.06030000001192093 0.061000000685453415 -0.10019999742507935";
ProtoInstance294.fieldValue[1] = fieldValue296;

fieldValue116.children[59] = ProtoInstance294;

let ProtoInstance297 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance297.name = "Site";
ProtoInstance297.DEF = "hanim_r_tarsal_interphalangeal_phalanx_1";
let fieldValue298 = browser.currentScene.createNode("fieldValue");
fieldValue298.name = "name";
fieldValue298.value = "r_tarsal_interphalangeal_phalanx_1";
ProtoInstance297.fieldValue = new MFNode();

ProtoInstance297.fieldValue[0] = fieldValue298;

let fieldValue299 = browser.currentScene.createNode("fieldValue");
fieldValue299.name = "translation";
fieldValue299.value = "-0.05209999904036522 0.026000000536441803 0.01269999984651804";
ProtoInstance297.fieldValue[1] = fieldValue299;

fieldValue116.children[60] = ProtoInstance297;

let ProtoInstance300 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance300.name = "Site";
ProtoInstance300.DEF = "hanim_r_calcaneus_posterior";
let fieldValue301 = browser.currentScene.createNode("fieldValue");
fieldValue301.name = "name";
fieldValue301.value = "r_calcaneus_posterior";
ProtoInstance300.fieldValue = new MFNode();

ProtoInstance300.fieldValue[0] = fieldValue301;

let fieldValue302 = browser.currentScene.createNode("fieldValue");
fieldValue302.name = "translation";
fieldValue302.value = "-0.06920000165700912 0.02969999983906746 -0.12210000306367874";
ProtoInstance300.fieldValue[1] = fieldValue302;

fieldValue116.children[61] = ProtoInstance300;

let ProtoInstance303 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance303.name = "Site";
ProtoInstance303.DEF = "hanim_r_tarsal_distal_phalanx_2";
let fieldValue304 = browser.currentScene.createNode("fieldValue");
fieldValue304.name = "name";
fieldValue304.value = "r_tarsal_distal_phalanx_2";
ProtoInstance303.fieldValue = new MFNode();

ProtoInstance303.fieldValue[0] = fieldValue304;

let fieldValue305 = browser.currentScene.createNode("fieldValue");
fieldValue305.name = "translation";
fieldValue305.value = "-0.08829999715089798 0.013399999588727951 0.13830000162124634";
ProtoInstance303.fieldValue[1] = fieldValue305;

fieldValue116.children[62] = ProtoInstance303;

let ProtoInstance306 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance306.name = "Site";
ProtoInstance306.DEF = "hanim_l_knee_crease";
let fieldValue307 = browser.currentScene.createNode("fieldValue");
fieldValue307.name = "name";
fieldValue307.value = "l_knee_crease";
ProtoInstance306.fieldValue = new MFNode();

ProtoInstance306.fieldValue[0] = fieldValue307;

let fieldValue308 = browser.currentScene.createNode("fieldValue");
fieldValue308.name = "translation";
fieldValue308.value = "0.09929999709129333 0.48809999227523804 -0.030899999663233757";
ProtoInstance306.fieldValue[1] = fieldValue308;

fieldValue116.children[63] = ProtoInstance306;

let ProtoInstance309 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance309.name = "Site";
ProtoInstance309.DEF = "hanim_l_femoral_lateral_epicondyles";
let fieldValue310 = browser.currentScene.createNode("fieldValue");
fieldValue310.name = "name";
fieldValue310.value = "l_femoral_lateral_epicondyles";
ProtoInstance309.fieldValue = new MFNode();

ProtoInstance309.fieldValue[0] = fieldValue310;

let fieldValue311 = browser.currentScene.createNode("fieldValue");
fieldValue311.name = "translation";
fieldValue311.value = "0.1597999930381775 0.4966999888420105 0.02969999983906746";
ProtoInstance309.fieldValue[1] = fieldValue311;

fieldValue116.children[64] = ProtoInstance309;

let ProtoInstance312 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance312.name = "Site";
ProtoInstance312.DEF = "hanim_l_femoral_medial_epicondyles";
let fieldValue313 = browser.currentScene.createNode("fieldValue");
fieldValue313.name = "name";
fieldValue313.value = "l_femoral_lateral_epicondyles";
ProtoInstance312.fieldValue = new MFNode();

ProtoInstance312.fieldValue[0] = fieldValue313;

let fieldValue314 = browser.currentScene.createNode("fieldValue");
fieldValue314.name = "translation";
fieldValue314.value = "0.039799999445676804 0.49459999799728394 0.030300000682473183";
ProtoInstance312.fieldValue[1] = fieldValue314;

fieldValue116.children[65] = ProtoInstance312;

let ProtoInstance315 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance315.name = "Site";
ProtoInstance315.DEF = "hanim_l_tarsal_interphalangeal_phalanx_5";
let fieldValue316 = browser.currentScene.createNode("fieldValue");
fieldValue316.name = "name";
fieldValue316.value = "l_tarsal_interphalangeal_phalanx_5";
ProtoInstance315.fieldValue = new MFNode();

ProtoInstance315.fieldValue[0] = fieldValue316;

let fieldValue317 = browser.currentScene.createNode("fieldValue");
fieldValue317.name = "translation";
fieldValue317.value = "0.18250000476837158 0.007000000216066837 0.09279999881982803";
ProtoInstance315.fieldValue[1] = fieldValue317;

fieldValue116.children[66] = ProtoInstance315;

let ProtoInstance318 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance318.name = "Site";
ProtoInstance318.DEF = "hanim_l_lateral_malleolus";
let fieldValue319 = browser.currentScene.createNode("fieldValue");
fieldValue319.name = "name";
fieldValue319.value = "l_lateral_malleolus";
ProtoInstance318.fieldValue = new MFNode();

ProtoInstance318.fieldValue[0] = fieldValue319;

let fieldValue320 = browser.currentScene.createNode("fieldValue");
fieldValue320.name = "translation";
fieldValue320.value = "0.13079999387264252 0.059700001031160355 -0.10320000350475311";
ProtoInstance318.fieldValue[1] = fieldValue320;

fieldValue116.children[67] = ProtoInstance318;

let ProtoInstance321 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance321.name = "Site";
ProtoInstance321.DEF = "hanim_l_medial_malleolus";
let fieldValue322 = browser.currentScene.createNode("fieldValue");
fieldValue322.name = "name";
fieldValue322.value = "l_medial_malleolus";
ProtoInstance321.fieldValue = new MFNode();

ProtoInstance321.fieldValue[0] = fieldValue322;

let fieldValue323 = browser.currentScene.createNode("fieldValue");
fieldValue323.name = "translation";
fieldValue323.value = "0.08900000154972076 0.07159999758005142 -0.08810000121593475";
ProtoInstance321.fieldValue[1] = fieldValue323;

fieldValue116.children[68] = ProtoInstance321;

let ProtoInstance324 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance324.name = "Site";
ProtoInstance324.DEF = "hanim_l_sphyrion";
let fieldValue325 = browser.currentScene.createNode("fieldValue");
fieldValue325.name = "name";
fieldValue325.value = "l_sphyrion";
ProtoInstance324.fieldValue = new MFNode();

ProtoInstance324.fieldValue[0] = fieldValue325;

let fieldValue326 = browser.currentScene.createNode("fieldValue");
fieldValue326.name = "translation";
fieldValue326.value = "0.08900000154972076 0.057500001043081284 -0.09430000185966492";
ProtoInstance324.fieldValue[1] = fieldValue326;

fieldValue116.children[69] = ProtoInstance324;

let ProtoInstance327 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance327.name = "Site";
ProtoInstance327.DEF = "hanim_l_tarsal_interphalangeal_phalanx_1";
let fieldValue328 = browser.currentScene.createNode("fieldValue");
fieldValue328.name = "name";
fieldValue328.value = "l_tarsal_interphalangeal_phalanx_1";
ProtoInstance327.fieldValue = new MFNode();

ProtoInstance327.fieldValue[0] = fieldValue328;

let fieldValue329 = browser.currentScene.createNode("fieldValue");
fieldValue329.name = "translation";
fieldValue329.value = "0.08160000294446945 0.02319999970495701 0.010599999688565731";
ProtoInstance327.fieldValue[1] = fieldValue329;

fieldValue116.children[70] = ProtoInstance327;

let ProtoInstance330 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance330.name = "Site";
ProtoInstance330.DEF = "hanim_l_calcaneus_posterior";
let fieldValue331 = browser.currentScene.createNode("fieldValue");
fieldValue331.name = "name";
fieldValue331.value = "l_calcaneus_posterior";
ProtoInstance330.fieldValue = new MFNode();

ProtoInstance330.fieldValue[0] = fieldValue331;

let fieldValue332 = browser.currentScene.createNode("fieldValue");
fieldValue332.name = "translation";
fieldValue332.value = "0.09740000218153 0.02590000070631504 -0.11710000038146973";
ProtoInstance330.fieldValue[1] = fieldValue332;

fieldValue116.children[71] = ProtoInstance330;

let ProtoInstance333 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance333.name = "Site";
ProtoInstance333.DEF = "hanim_l_tarsal_distal_phalanx_2";
let fieldValue334 = browser.currentScene.createNode("fieldValue");
fieldValue334.name = "name";
fieldValue334.value = "l_tarsal_distal_phalanx_2";
ProtoInstance333.fieldValue = new MFNode();

ProtoInstance333.fieldValue[0] = fieldValue334;

let fieldValue335 = browser.currentScene.createNode("fieldValue");
fieldValue335.name = "translation";
fieldValue335.value = "0.11949999630451202 0.007899999618530273 0.14329999685287476";
ProtoInstance333.fieldValue[1] = fieldValue335;

fieldValue116.children[72] = ProtoInstance333;

let ProtoInstance336 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance336.name = "Site";
ProtoInstance336.DEF = "hanim_crotch";
let fieldValue337 = browser.currentScene.createNode("fieldValue");
fieldValue337.name = "name";
fieldValue337.value = "crotch";
ProtoInstance336.fieldValue = new MFNode();

ProtoInstance336.fieldValue[0] = fieldValue337;

let fieldValue338 = browser.currentScene.createNode("fieldValue");
fieldValue338.name = "translation";
fieldValue338.value = "0.0034000000450760126 0.8266000151634216 0.025699999183416367";
ProtoInstance336.fieldValue[1] = fieldValue338;

fieldValue116.children[73] = ProtoInstance336;

let ProtoInstance339 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance339.name = "Site";
ProtoInstance339.DEF = "hanim_r_neck_base";
let fieldValue340 = browser.currentScene.createNode("fieldValue");
fieldValue340.name = "name";
fieldValue340.value = "r_neck_base";
ProtoInstance339.fieldValue = new MFNode();

ProtoInstance339.fieldValue[0] = fieldValue340;

let fieldValue341 = browser.currentScene.createNode("fieldValue");
fieldValue341.name = "translation";
fieldValue341.value = "-0.04190000146627426 1.5148999691009521 -0.02199999988079071";
ProtoInstance339.fieldValue[1] = fieldValue341;

fieldValue116.children[74] = ProtoInstance339;

let ProtoInstance342 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance342.name = "Site";
ProtoInstance342.DEF = "hanim_l_neck_base";
let fieldValue343 = browser.currentScene.createNode("fieldValue");
fieldValue343.name = "name";
fieldValue343.value = "l_neck_base";
ProtoInstance342.fieldValue = new MFNode();

ProtoInstance342.fieldValue[0] = fieldValue343;

let fieldValue344 = browser.currentScene.createNode("fieldValue");
fieldValue344.name = "translation";
fieldValue344.value = "0.06459999829530716 1.5140999555587769 -0.03799999877810478";
ProtoInstance342.fieldValue[1] = fieldValue344;

fieldValue116.children[75] = ProtoInstance342;

let ProtoInstance345 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance345.name = "Site";
ProtoInstance345.DEF = "hanim_navel";
let fieldValue346 = browser.currentScene.createNode("fieldValue");
fieldValue346.name = "name";
fieldValue346.value = "navel";
ProtoInstance345.fieldValue = new MFNode();

ProtoInstance345.fieldValue[0] = fieldValue346;

let fieldValue347 = browser.currentScene.createNode("fieldValue");
fieldValue347.name = "translation";
fieldValue347.value = "0.006899999920278788 1.09660005569458 0.10170000046491623";
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
ProtoInstance349.name = "Joint";
ProtoInstance349.DEF = "hanim_humanoid_root";
let fieldValue350 = browser.currentScene.createNode("fieldValue");
fieldValue350.name = "stiffness";
fieldValue350.value = "1 1 1";
ProtoInstance349.fieldValue = new MFNode();

ProtoInstance349.fieldValue[0] = fieldValue350;

let fieldValue351 = browser.currentScene.createNode("fieldValue");
fieldValue351.name = "name";
fieldValue351.value = "humanoid_root";
ProtoInstance349.fieldValue[1] = fieldValue351;

let fieldValue352 = browser.currentScene.createNode("fieldValue");
fieldValue352.name = "center";
fieldValue352.value = "0 0.8240000009536743 0.027699999511241913";
ProtoInstance349.fieldValue[2] = fieldValue352;

let fieldValue353 = browser.currentScene.createNode("fieldValue");
fieldValue353.name = "children";
let ProtoInstance354 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance354.name = "Segment";
ProtoInstance354.DEF = "hanim_sacrum";
let fieldValue355 = browser.currentScene.createNode("fieldValue");
fieldValue355.name = "name";
fieldValue355.value = "sacrum";
ProtoInstance354.fieldValue = new MFNode();

ProtoInstance354.fieldValue[0] = fieldValue355;

let fieldValue356 = browser.currentScene.createNode("fieldValue");
fieldValue356.name = "children";
let ProtoInstance357 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance357.name = "Site";
ProtoInstance357.DEF = "hanim_skull_tip";
let fieldValue358 = browser.currentScene.createNode("fieldValue");
fieldValue358.name = "name";
fieldValue358.value = "skull_tip";
ProtoInstance357.fieldValue = new MFNode();

ProtoInstance357.fieldValue[0] = fieldValue358;

let fieldValue359 = browser.currentScene.createNode("fieldValue");
fieldValue359.name = "translation";
fieldValue359.value = "0.004999999888241291 1.7503999471664429 0.005499999970197678";
ProtoInstance357.fieldValue[1] = fieldValue359;

fieldValue356.children = new MFNode();

fieldValue356.children[0] = ProtoInstance357;

let ProtoInstance360 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance360.name = "Site";
ProtoInstance360.DEF = "hanim_sellion";
let fieldValue361 = browser.currentScene.createNode("fieldValue");
fieldValue361.name = "name";
fieldValue361.value = "sellion";
ProtoInstance360.fieldValue = new MFNode();

ProtoInstance360.fieldValue[0] = fieldValue361;

let fieldValue362 = browser.currentScene.createNode("fieldValue");
fieldValue362.name = "translation";
fieldValue362.value = "0.005799999926239252 1.631600022315979 0.0851999968290329";
ProtoInstance360.fieldValue[1] = fieldValue362;

fieldValue356.children[1] = ProtoInstance360;

let ProtoInstance363 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance363.name = "Site";
ProtoInstance363.DEF = "hanim_r_infraorbitale";
let fieldValue364 = browser.currentScene.createNode("fieldValue");
fieldValue364.name = "name";
fieldValue364.value = "r_infraorbitale";
ProtoInstance363.fieldValue = new MFNode();

ProtoInstance363.fieldValue[0] = fieldValue364;

let fieldValue365 = browser.currentScene.createNode("fieldValue");
fieldValue365.name = "translation";
fieldValue365.value = "-0.02370000071823597 1.6171000003814697 0.07519999891519547";
ProtoInstance363.fieldValue[1] = fieldValue365;

fieldValue356.children[2] = ProtoInstance363;

let ProtoInstance366 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance366.name = "Site";
ProtoInstance366.DEF = "hanim_l_infraorbitale";
let fieldValue367 = browser.currentScene.createNode("fieldValue");
fieldValue367.name = "name";
fieldValue367.value = "l_infraorbitale";
ProtoInstance366.fieldValue = new MFNode();

ProtoInstance366.fieldValue[0] = fieldValue367;

let fieldValue368 = browser.currentScene.createNode("fieldValue");
fieldValue368.name = "translation";
fieldValue368.value = "0.0340999998152256 1.6171000003814697 0.07519999891519547";
ProtoInstance366.fieldValue[1] = fieldValue368;

fieldValue356.children[3] = ProtoInstance366;

let ProtoInstance369 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance369.name = "Site";
ProtoInstance369.DEF = "hanim_supramenton";
let fieldValue370 = browser.currentScene.createNode("fieldValue");
fieldValue370.name = "name";
fieldValue370.value = "supramenton";
ProtoInstance369.fieldValue = new MFNode();

ProtoInstance369.fieldValue[0] = fieldValue370;

let fieldValue371 = browser.currentScene.createNode("fieldValue");
fieldValue371.name = "translation";
fieldValue371.value = "0.006099999882280827 1.5410000085830688 0.08049999922513962";
ProtoInstance369.fieldValue[1] = fieldValue371;

fieldValue356.children[4] = ProtoInstance369;

let ProtoInstance372 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance372.name = "Site";
ProtoInstance372.DEF = "hanim_r_tragion";
let fieldValue373 = browser.currentScene.createNode("fieldValue");
fieldValue373.name = "name";
fieldValue373.value = "r_tragion";
ProtoInstance372.fieldValue = new MFNode();

ProtoInstance372.fieldValue[0] = fieldValue373;

let fieldValue374 = browser.currentScene.createNode("fieldValue");
fieldValue374.name = "translation";
fieldValue374.value = "-0.06459999829530716 1.6346999406814575 0.03020000085234642";
ProtoInstance372.fieldValue[1] = fieldValue374;

fieldValue356.children[5] = ProtoInstance372;

let ProtoInstance375 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance375.name = "Site";
ProtoInstance375.DEF = "hanim_r_gonion";
let fieldValue376 = browser.currentScene.createNode("fieldValue");
fieldValue376.name = "name";
fieldValue376.value = "r_gonion";
ProtoInstance375.fieldValue = new MFNode();

ProtoInstance375.fieldValue[0] = fieldValue376;

let fieldValue377 = browser.currentScene.createNode("fieldValue");
fieldValue377.name = "translation";
fieldValue377.value = "-0.052000001072883606 1.552899956703186 0.034699998795986176";
ProtoInstance375.fieldValue[1] = fieldValue377;

fieldValue356.children[6] = ProtoInstance375;

let ProtoInstance378 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance378.name = "Site";
ProtoInstance378.DEF = "hanim_l_tragion";
let fieldValue379 = browser.currentScene.createNode("fieldValue");
fieldValue379.name = "name";
fieldValue379.value = "l_tragion";
ProtoInstance378.fieldValue = new MFNode();

ProtoInstance378.fieldValue[0] = fieldValue379;

let fieldValue380 = browser.currentScene.createNode("fieldValue");
fieldValue380.name = "translation";
fieldValue380.value = "0.0738999992609024 1.6347999572753906 0.028200000524520874";
ProtoInstance378.fieldValue[1] = fieldValue380;

fieldValue356.children[7] = ProtoInstance378;

let ProtoInstance381 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance381.name = "Site";
ProtoInstance381.DEF = "hanim_l_gonion";
let fieldValue382 = browser.currentScene.createNode("fieldValue");
fieldValue382.name = "name";
fieldValue382.value = "l_gonion";
ProtoInstance381.fieldValue = new MFNode();

ProtoInstance381.fieldValue[0] = fieldValue382;

let fieldValue383 = browser.currentScene.createNode("fieldValue");
fieldValue383.name = "translation";
fieldValue383.value = "0.06310000270605087 1.5529999732971191 0.032999999821186066";
ProtoInstance381.fieldValue[1] = fieldValue383;

fieldValue356.children[8] = ProtoInstance381;

let ProtoInstance384 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance384.name = "Site";
ProtoInstance384.DEF = "hanim_nuchale";
let fieldValue385 = browser.currentScene.createNode("fieldValue");
fieldValue385.name = "name";
fieldValue385.value = "nuchale";
ProtoInstance384.fieldValue = new MFNode();

ProtoInstance384.fieldValue[0] = fieldValue385;

let fieldValue386 = browser.currentScene.createNode("fieldValue");
fieldValue386.name = "translation";
fieldValue386.value = "0.0038999998942017555 1.5972000360488892 -0.07959999889135361";
ProtoInstance384.fieldValue[1] = fieldValue386;

fieldValue356.children[9] = ProtoInstance384;

let ProtoInstance387 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance387.name = "Site";
ProtoInstance387.DEF = "hanim_r_clavicale";
let fieldValue388 = browser.currentScene.createNode("fieldValue");
fieldValue388.name = "name";
fieldValue388.value = "r_clavicale";
ProtoInstance387.fieldValue = new MFNode();

ProtoInstance387.fieldValue[0] = fieldValue388;

let fieldValue389 = browser.currentScene.createNode("fieldValue");
fieldValue389.name = "translation";
fieldValue389.value = "-0.011500000022351742 1.4943000078201294 0.03999999910593033";
ProtoInstance387.fieldValue[1] = fieldValue389;

fieldValue356.children[10] = ProtoInstance387;

let ProtoInstance390 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance390.name = "Site";
ProtoInstance390.DEF = "hanim_suprasternale";
let fieldValue391 = browser.currentScene.createNode("fieldValue");
fieldValue391.name = "name";
fieldValue391.value = "suprasternale";
ProtoInstance390.fieldValue = new MFNode();

ProtoInstance390.fieldValue[0] = fieldValue391;

let fieldValue392 = browser.currentScene.createNode("fieldValue");
fieldValue392.name = "translation";
fieldValue392.value = "0.00839999970048666 1.4714000225067139 0.05510000139474869";
ProtoInstance390.fieldValue[1] = fieldValue392;

fieldValue356.children[11] = ProtoInstance390;

let ProtoInstance393 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance393.name = "Site";
ProtoInstance393.DEF = "hanim_l_clavicale";
let fieldValue394 = browser.currentScene.createNode("fieldValue");
fieldValue394.name = "name";
fieldValue394.value = "l_clavicale";
ProtoInstance393.fieldValue = new MFNode();

ProtoInstance393.fieldValue[0] = fieldValue394;

let fieldValue395 = browser.currentScene.createNode("fieldValue");
fieldValue395.name = "translation";
fieldValue395.value = "0.02710000053048134 1.4943000078201294 0.039400000125169754";
ProtoInstance393.fieldValue[1] = fieldValue395;

fieldValue356.children[12] = ProtoInstance393;

let ProtoInstance396 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance396.name = "Site";
ProtoInstance396.DEF = "hanim_r_thelion";
let fieldValue397 = browser.currentScene.createNode("fieldValue");
fieldValue397.name = "name";
fieldValue397.value = "r_thelion";
ProtoInstance396.fieldValue = new MFNode();

ProtoInstance396.fieldValue[0] = fieldValue397;

let fieldValue398 = browser.currentScene.createNode("fieldValue");
fieldValue398.name = "translation";
fieldValue398.value = "-0.07360000163316727 1.3385000228881836 0.1216999962925911";
ProtoInstance396.fieldValue[1] = fieldValue398;

fieldValue356.children[13] = ProtoInstance396;

let ProtoInstance399 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance399.name = "Site";
ProtoInstance399.DEF = "hanim_l_thelion";
let fieldValue400 = browser.currentScene.createNode("fieldValue");
fieldValue400.name = "name";
fieldValue400.value = "l_thelion";
ProtoInstance399.fieldValue = new MFNode();

ProtoInstance399.fieldValue[0] = fieldValue400;

let fieldValue401 = browser.currentScene.createNode("fieldValue");
fieldValue401.name = "translation";
fieldValue401.value = "0.09179999679327011 1.3381999731063843 0.11919999867677689";
ProtoInstance399.fieldValue[1] = fieldValue401;

fieldValue356.children[14] = ProtoInstance399;

let ProtoInstance402 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance402.name = "Site";
ProtoInstance402.DEF = "hanim_substernale";
let fieldValue403 = browser.currentScene.createNode("fieldValue");
fieldValue403.name = "name";
fieldValue403.value = "substernale";
ProtoInstance402.fieldValue = new MFNode();

ProtoInstance402.fieldValue[0] = fieldValue403;

let fieldValue404 = browser.currentScene.createNode("fieldValue");
fieldValue404.name = "translation";
fieldValue404.value = "0.008500000461935997 1.2994999885559082 0.11469999700784683";
ProtoInstance402.fieldValue[1] = fieldValue404;

fieldValue356.children[15] = ProtoInstance402;

let ProtoInstance405 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance405.name = "Site";
ProtoInstance405.DEF = "hanim_r_rib10";
let fieldValue406 = browser.currentScene.createNode("fieldValue");
fieldValue406.name = "name";
fieldValue406.value = "r_rib10";
ProtoInstance405.fieldValue = new MFNode();

ProtoInstance405.fieldValue[0] = fieldValue406;

let fieldValue407 = browser.currentScene.createNode("fieldValue");
fieldValue407.name = "translation";
fieldValue407.value = "-0.07109999656677246 1.194100022315979 0.10159999877214432";
ProtoInstance405.fieldValue[1] = fieldValue407;

fieldValue356.children[16] = ProtoInstance405;

let ProtoInstance408 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance408.name = "Site";
ProtoInstance408.DEF = "hanim_r_asis";
let fieldValue409 = browser.currentScene.createNode("fieldValue");
fieldValue409.name = "name";
fieldValue409.value = "r_asis";
ProtoInstance408.fieldValue = new MFNode();

ProtoInstance408.fieldValue[0] = fieldValue409;

let fieldValue410 = browser.currentScene.createNode("fieldValue");
fieldValue410.name = "translation";
fieldValue410.value = "-0.08869999647140503 1.0020999908447266 0.1111999973654747";
ProtoInstance408.fieldValue[1] = fieldValue410;

fieldValue356.children[17] = ProtoInstance408;

let ProtoInstance411 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance411.name = "Site";
ProtoInstance411.DEF = "hanim_l_rib10";
let fieldValue412 = browser.currentScene.createNode("fieldValue");
fieldValue412.name = "name";
fieldValue412.value = "l_rib10";
ProtoInstance411.fieldValue = new MFNode();

ProtoInstance411.fieldValue[0] = fieldValue412;

let fieldValue413 = browser.currentScene.createNode("fieldValue");
fieldValue413.name = "translation";
fieldValue413.value = "0.08709999918937683 1.1924999952316284 0.09920000284910202";
ProtoInstance411.fieldValue[1] = fieldValue413;

fieldValue356.children[18] = ProtoInstance411;

let ProtoInstance414 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance414.name = "Site";
ProtoInstance414.DEF = "hanim_l_asis";
let fieldValue415 = browser.currentScene.createNode("fieldValue");
fieldValue415.name = "name";
fieldValue415.value = "l_asis";
ProtoInstance414.fieldValue = new MFNode();

ProtoInstance414.fieldValue[0] = fieldValue415;

let fieldValue416 = browser.currentScene.createNode("fieldValue");
fieldValue416.name = "translation";
fieldValue416.value = "0.0925000011920929 0.9983000159263611 0.10520000010728836";
ProtoInstance414.fieldValue[1] = fieldValue416;

fieldValue356.children[19] = ProtoInstance414;

let ProtoInstance417 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance417.name = "Site";
ProtoInstance417.DEF = "hanim_r_iliocristale";
let fieldValue418 = browser.currentScene.createNode("fieldValue");
fieldValue418.name = "name";
fieldValue418.value = "r_iliocristale";
ProtoInstance417.fieldValue = new MFNode();

ProtoInstance417.fieldValue[0] = fieldValue418;

let fieldValue419 = browser.currentScene.createNode("fieldValue");
fieldValue419.name = "translation";
fieldValue419.value = "-0.1525000035762787 1.0628000497817993 0.0035000001080334187";
ProtoInstance417.fieldValue[1] = fieldValue419;

fieldValue356.children[20] = ProtoInstance417;

let ProtoInstance420 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance420.name = "Site";
ProtoInstance420.DEF = "hanim_r_trochanterion";
let fieldValue421 = browser.currentScene.createNode("fieldValue");
fieldValue421.name = "name";
fieldValue421.value = "r_trochanterion";
ProtoInstance420.fieldValue = new MFNode();

ProtoInstance420.fieldValue[0] = fieldValue421;

let fieldValue422 = browser.currentScene.createNode("fieldValue");
fieldValue422.name = "translation";
fieldValue422.value = "-0.1688999980688095 0.8418999910354614 0.03519999980926514";
ProtoInstance420.fieldValue[1] = fieldValue422;

fieldValue356.children[21] = ProtoInstance420;

let ProtoInstance423 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance423.name = "Site";
ProtoInstance423.DEF = "hanim_l_iliocristale";
let fieldValue424 = browser.currentScene.createNode("fieldValue");
fieldValue424.name = "name";
fieldValue424.value = "l_iliocristale";
ProtoInstance423.fieldValue = new MFNode();

ProtoInstance423.fieldValue[0] = fieldValue424;

let fieldValue425 = browser.currentScene.createNode("fieldValue");
fieldValue425.name = "translation";
fieldValue425.value = "0.16120000183582306 1.0536999702453613 0.0007999999797903001";
ProtoInstance423.fieldValue[1] = fieldValue425;

fieldValue356.children[22] = ProtoInstance423;

let ProtoInstance426 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance426.name = "Site";
ProtoInstance426.DEF = "hanim_l_trochanterion";
let fieldValue427 = browser.currentScene.createNode("fieldValue");
fieldValue427.name = "name";
fieldValue427.value = "l_trochanterion";
ProtoInstance426.fieldValue = new MFNode();

ProtoInstance426.fieldValue[0] = fieldValue427;

let fieldValue428 = browser.currentScene.createNode("fieldValue");
fieldValue428.name = "translation";
fieldValue428.value = "0.16769999265670776 0.8335999846458435 0.030300000682473183";
ProtoInstance426.fieldValue[1] = fieldValue428;

fieldValue356.children[23] = ProtoInstance426;

let ProtoInstance429 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance429.name = "Site";
ProtoInstance429.DEF = "hanim_cervicale";
let fieldValue430 = browser.currentScene.createNode("fieldValue");
fieldValue430.name = "name";
fieldValue430.value = "cervicale";
ProtoInstance429.fieldValue = new MFNode();

ProtoInstance429.fieldValue[0] = fieldValue430;

let fieldValue431 = browser.currentScene.createNode("fieldValue");
fieldValue431.name = "translation";
fieldValue431.value = "0.006399999838322401 1.5199999809265137 -0.08150000125169754";
ProtoInstance429.fieldValue[1] = fieldValue431;

fieldValue356.children[24] = ProtoInstance429;

let ProtoInstance432 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance432.name = "Site";
ProtoInstance432.DEF = "hanim_spine_2_lower_back";
let fieldValue433 = browser.currentScene.createNode("fieldValue");
fieldValue433.name = "name";
fieldValue433.value = "spine_2_lower_back";
ProtoInstance432.fieldValue = new MFNode();

ProtoInstance432.fieldValue[0] = fieldValue433;

let fieldValue434 = browser.currentScene.createNode("fieldValue");
fieldValue434.name = "translation";
fieldValue434.value = "0.004900000058114529 1.1907999515533447 -0.11129999905824661";
ProtoInstance432.fieldValue[1] = fieldValue434;

fieldValue356.children[25] = ProtoInstance432;

let ProtoInstance435 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance435.name = "Site";
ProtoInstance435.DEF = "hanim_r_psis";
let fieldValue436 = browser.currentScene.createNode("fieldValue");
fieldValue436.name = "name";
fieldValue436.value = "r_psis";
ProtoInstance435.fieldValue = new MFNode();

ProtoInstance435.fieldValue[0] = fieldValue436;

let fieldValue437 = browser.currentScene.createNode("fieldValue");
fieldValue437.name = "translation";
fieldValue437.value = "-0.07159999758005142 1.0190000534057617 -0.11379999667406082";
ProtoInstance435.fieldValue[1] = fieldValue437;

fieldValue356.children[26] = ProtoInstance435;

let ProtoInstance438 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance438.name = "Site";
ProtoInstance438.DEF = "hanim_l_psis";
let fieldValue439 = browser.currentScene.createNode("fieldValue");
fieldValue439.name = "name";
fieldValue439.value = "l_psis";
ProtoInstance438.fieldValue = new MFNode();

ProtoInstance438.fieldValue[0] = fieldValue439;

let fieldValue440 = browser.currentScene.createNode("fieldValue");
fieldValue440.name = "translation";
fieldValue440.value = "0.07739999890327454 1.0190000534057617 -0.11509999632835388";
ProtoInstance438.fieldValue[1] = fieldValue440;

fieldValue356.children[27] = ProtoInstance438;

let ProtoInstance441 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance441.name = "Site";
ProtoInstance441.DEF = "hanim_waist_preferred_posterior";
let fieldValue442 = browser.currentScene.createNode("fieldValue");
fieldValue442.name = "name";
fieldValue442.value = "waist_preferred_posterior";
ProtoInstance441.fieldValue = new MFNode();

ProtoInstance441.fieldValue[0] = fieldValue442;

let fieldValue443 = browser.currentScene.createNode("fieldValue");
fieldValue443.name = "translation";
fieldValue443.value = "0.28999999165534973 1.0915000438690186 -0.10909999907016754";
ProtoInstance441.fieldValue[1] = fieldValue443;

fieldValue356.children[28] = ProtoInstance441;

let ProtoInstance444 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance444.name = "Site";
ProtoInstance444.DEF = "hanim_r_acromion";
let fieldValue445 = browser.currentScene.createNode("fieldValue");
fieldValue445.name = "name";
fieldValue445.value = "r_acromion";
ProtoInstance444.fieldValue = new MFNode();

ProtoInstance444.fieldValue[0] = fieldValue445;

let fieldValue446 = browser.currentScene.createNode("fieldValue");
fieldValue446.name = "translation";
fieldValue446.value = "-0.19050000607967377 1.479099988937378 -0.04309999942779541";
ProtoInstance444.fieldValue[1] = fieldValue446;

fieldValue356.children[29] = ProtoInstance444;

let ProtoInstance447 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance447.name = "Site";
ProtoInstance447.DEF = "hanim_r_axilla_proximal";
let fieldValue448 = browser.currentScene.createNode("fieldValue");
fieldValue448.name = "name";
fieldValue448.value = "r_axilla_proximal";
ProtoInstance447.fieldValue = new MFNode();

ProtoInstance447.fieldValue[0] = fieldValue448;

let fieldValue449 = browser.currentScene.createNode("fieldValue");
fieldValue449.name = "translation";
fieldValue449.value = "-0.16259999573230743 1.4071999788284302 -0.003100000089034438";
ProtoInstance447.fieldValue[1] = fieldValue449;

fieldValue356.children[30] = ProtoInstance447;

let ProtoInstance450 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance450.name = "Site";
ProtoInstance450.DEF = "hanim_r_radial_styloid";
let fieldValue451 = browser.currentScene.createNode("fieldValue");
fieldValue451.name = "name";
fieldValue451.value = "r_radial_styloid";
ProtoInstance450.fieldValue = new MFNode();

ProtoInstance450.fieldValue[0] = fieldValue451;

let fieldValue452 = browser.currentScene.createNode("fieldValue");
fieldValue452.name = "translation";
fieldValue452.value = "-0.188400000333786 0.8676000237464905 -0.035999998450279236";
ProtoInstance450.fieldValue[1] = fieldValue452;

fieldValue356.children[31] = ProtoInstance450;

let ProtoInstance453 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance453.name = "Site";
ProtoInstance453.DEF = "hanim_r_axilla_distal";
let fieldValue454 = browser.currentScene.createNode("fieldValue");
fieldValue454.name = "name";
fieldValue454.value = "r_axilla_distal";
ProtoInstance453.fieldValue = new MFNode();

ProtoInstance453.fieldValue[0] = fieldValue454;

let fieldValue455 = browser.currentScene.createNode("fieldValue");
fieldValue455.name = "translation";
fieldValue455.value = "-0.16030000150203705 1.4098000526428223 -0.08259999752044678";
ProtoInstance453.fieldValue[1] = fieldValue455;

fieldValue356.children[32] = ProtoInstance453;

let ProtoInstance456 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance456.name = "Site";
ProtoInstance456.DEF = "hanim_r_olecranon";
let fieldValue457 = browser.currentScene.createNode("fieldValue");
fieldValue457.name = "name";
fieldValue457.value = "r_olecranon";
ProtoInstance456.fieldValue = new MFNode();

ProtoInstance456.fieldValue[0] = fieldValue457;

let fieldValue458 = browser.currentScene.createNode("fieldValue");
fieldValue458.name = "translation";
fieldValue458.value = "-0.1906999945640564 1.1404999494552612 -0.10649999976158142";
ProtoInstance456.fieldValue[1] = fieldValue458;

fieldValue356.children[33] = ProtoInstance456;

let ProtoInstance459 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance459.name = "Site";
ProtoInstance459.DEF = "hanim_r_humeral_lateral_epicondyles";
let fieldValue460 = browser.currentScene.createNode("fieldValue");
fieldValue460.name = "name";
fieldValue460.value = "r_humeral_lateral_epicondyles";
ProtoInstance459.fieldValue = new MFNode();

ProtoInstance459.fieldValue[0] = fieldValue460;

let fieldValue461 = browser.currentScene.createNode("fieldValue");
fieldValue461.name = "translation";
fieldValue461.value = "-0.2223999947309494 1.1517000198364258 -0.10329999774694443";
ProtoInstance459.fieldValue[1] = fieldValue461;

fieldValue356.children[34] = ProtoInstance459;

let ProtoInstance462 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance462.name = "Site";
ProtoInstance462.DEF = "hanim_r_humeral_medial_epicondyles";
let fieldValue463 = browser.currentScene.createNode("fieldValue");
fieldValue463.name = "name";
fieldValue463.value = "r_humeral_medial_epicondyles";
ProtoInstance462.fieldValue = new MFNode();

ProtoInstance462.fieldValue[0] = fieldValue463;

let fieldValue464 = browser.currentScene.createNode("fieldValue");
fieldValue464.name = "translation";
fieldValue464.value = "-0.1679999977350235 1.1297999620437622 -0.10620000213384628";
ProtoInstance462.fieldValue[1] = fieldValue464;

fieldValue356.children[35] = ProtoInstance462;

let ProtoInstance465 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance465.name = "Site";
ProtoInstance465.DEF = "hanim_r_radiale";
let fieldValue466 = browser.currentScene.createNode("fieldValue");
fieldValue466.name = "name";
fieldValue466.value = "r_radiale";
ProtoInstance465.fieldValue = new MFNode();

ProtoInstance465.fieldValue[0] = fieldValue466;

let fieldValue467 = browser.currentScene.createNode("fieldValue");
fieldValue467.name = "translation";
fieldValue467.value = "-0.21299999952316284 1.1304999589920044 -0.10909999907016754";
ProtoInstance465.fieldValue[1] = fieldValue467;

fieldValue356.children[36] = ProtoInstance465;

let ProtoInstance468 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance468.name = "Site";
ProtoInstance468.DEF = "hanim_r_metacarpal_phalanx_2";
let fieldValue469 = browser.currentScene.createNode("fieldValue");
fieldValue469.name = "name";
fieldValue469.value = "r_metacarpal_phalanx_2";
ProtoInstance468.fieldValue = new MFNode();

ProtoInstance468.fieldValue[0] = fieldValue469;

let fieldValue470 = browser.currentScene.createNode("fieldValue");
fieldValue470.name = "translation";
fieldValue470.value = "-0.19769999384880066 0.8169000148773193 -0.01769999973475933";
ProtoInstance468.fieldValue[1] = fieldValue470;

fieldValue356.children[37] = ProtoInstance468;

let ProtoInstance471 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance471.name = "Site";
ProtoInstance471.DEF = "hanim_r_dactylion";
let fieldValue472 = browser.currentScene.createNode("fieldValue");
fieldValue472.name = "name";
fieldValue472.value = "r_dactylion";
ProtoInstance471.fieldValue = new MFNode();

ProtoInstance471.fieldValue[0] = fieldValue472;

let fieldValue473 = browser.currentScene.createNode("fieldValue");
fieldValue473.name = "translation";
fieldValue473.value = "-0.1941000074148178 0.6772000193595886 -0.04230000078678131";
ProtoInstance471.fieldValue[1] = fieldValue473;

fieldValue356.children[38] = ProtoInstance471;

let ProtoInstance474 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance474.name = "Site";
ProtoInstance474.DEF = "hanim_r_ulnar_styloid";
let fieldValue475 = browser.currentScene.createNode("fieldValue");
fieldValue475.name = "name";
fieldValue475.value = "r_ulnar_styloid";
ProtoInstance474.fieldValue = new MFNode();

ProtoInstance474.fieldValue[0] = fieldValue475;

let fieldValue476 = browser.currentScene.createNode("fieldValue");
fieldValue476.name = "translation";
fieldValue476.value = "-0.21170000731945038 0.8561999797821045 -0.058400001376867294";
ProtoInstance474.fieldValue[1] = fieldValue476;

fieldValue356.children[39] = ProtoInstance474;

let ProtoInstance477 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance477.name = "Site";
ProtoInstance477.DEF = "hanim_r_metacarpal_phalanx_5";
let fieldValue478 = browser.currentScene.createNode("fieldValue");
fieldValue478.name = "name";
fieldValue478.value = "r_metacarpal_phalanx_5";
ProtoInstance477.fieldValue = new MFNode();

ProtoInstance477.fieldValue[0] = fieldValue478;

let fieldValue479 = browser.currentScene.createNode("fieldValue");
fieldValue479.name = "translation";
fieldValue479.value = "-0.19290000200271606 0.7889999747276306 -0.10639999806880951";
ProtoInstance477.fieldValue[1] = fieldValue479;

fieldValue356.children[40] = ProtoInstance477;

let ProtoInstance480 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance480.name = "Site";
ProtoInstance480.DEF = "hanim_l_acromion";
let fieldValue481 = browser.currentScene.createNode("fieldValue");
fieldValue481.name = "name";
fieldValue481.value = "l_acromion";
ProtoInstance480.fieldValue = new MFNode();

ProtoInstance480.fieldValue[0] = fieldValue481;

let fieldValue482 = browser.currentScene.createNode("fieldValue");
fieldValue482.name = "translation";
fieldValue482.value = "0.20319999754428864 1.4759999513626099 -0.04899999871850014";
ProtoInstance480.fieldValue[1] = fieldValue482;

fieldValue356.children[41] = ProtoInstance480;

let ProtoInstance483 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance483.name = "Site";
ProtoInstance483.DEF = "hanim_l_axilla_proximal";
let fieldValue484 = browser.currentScene.createNode("fieldValue");
fieldValue484.name = "name";
fieldValue484.value = "l_axilla_proximal";
ProtoInstance483.fieldValue = new MFNode();

ProtoInstance483.fieldValue[0] = fieldValue484;

let fieldValue485 = browser.currentScene.createNode("fieldValue");
fieldValue485.name = "translation";
fieldValue485.value = "0.1776999980211258 1.406499981880188 -0.007499999832361937";
ProtoInstance483.fieldValue[1] = fieldValue485;

fieldValue356.children[42] = ProtoInstance483;

let ProtoInstance486 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance486.name = "Site";
ProtoInstance486.DEF = "hanim_l_radial_styloid";
let fieldValue487 = browser.currentScene.createNode("fieldValue");
fieldValue487.name = "name";
fieldValue487.value = "l_radial_styloid";
ProtoInstance486.fieldValue = new MFNode();

ProtoInstance486.fieldValue[0] = fieldValue487;

let fieldValue488 = browser.currentScene.createNode("fieldValue");
fieldValue488.name = "translation";
fieldValue488.value = "0.19009999930858612 0.8644999861717224 -0.04149999842047691";
ProtoInstance486.fieldValue[1] = fieldValue488;

fieldValue356.children[43] = ProtoInstance486;

let ProtoInstance489 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance489.name = "Site";
ProtoInstance489.DEF = "hanim_l_axilla_distal";
let fieldValue490 = browser.currentScene.createNode("fieldValue");
fieldValue490.name = "name";
fieldValue490.value = "l_axilla_distal";
ProtoInstance489.fieldValue = new MFNode();

ProtoInstance489.fieldValue[0] = fieldValue490;

let fieldValue491 = browser.currentScene.createNode("fieldValue");
fieldValue491.name = "translation";
fieldValue491.value = "0.17059999704360962 1.4071999788284302 -0.08749999850988388";
ProtoInstance489.fieldValue[1] = fieldValue491;

fieldValue356.children[44] = ProtoInstance489;

let ProtoInstance492 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance492.name = "Site";
ProtoInstance492.DEF = "hanim_l_olecranon";
let fieldValue493 = browser.currentScene.createNode("fieldValue");
fieldValue493.name = "name";
fieldValue493.value = "l_olecranon";
ProtoInstance492.fieldValue = new MFNode();

ProtoInstance492.fieldValue[0] = fieldValue493;

let fieldValue494 = browser.currentScene.createNode("fieldValue");
fieldValue494.name = "translation";
fieldValue494.value = "-0.19619999825954437 1.1375000476837158 -0.11230000108480453";
ProtoInstance492.fieldValue[1] = fieldValue494;

fieldValue356.children[45] = ProtoInstance492;

let ProtoInstance495 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance495.name = "Site";
ProtoInstance495.DEF = "hanim_l_humeral_lateral_epicondyles";
let fieldValue496 = browser.currentScene.createNode("fieldValue");
fieldValue496.name = "name";
fieldValue496.value = "l_humeral_lateral_epicondyles";
ProtoInstance495.fieldValue = new MFNode();

ProtoInstance495.fieldValue[0] = fieldValue496;

let fieldValue497 = browser.currentScene.createNode("fieldValue");
fieldValue497.name = "translation";
fieldValue497.value = "0.2280000001192093 1.1482000350952148 -0.10999999940395355";
ProtoInstance495.fieldValue[1] = fieldValue497;

fieldValue356.children[46] = ProtoInstance495;

let ProtoInstance498 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance498.name = "Site";
ProtoInstance498.DEF = "hanim_l_humeral_medial_epicondyles";
let fieldValue499 = browser.currentScene.createNode("fieldValue");
fieldValue499.name = "name";
fieldValue499.value = "l_humeral_medial_epicondyles";
ProtoInstance498.fieldValue = new MFNode();

ProtoInstance498.fieldValue[0] = fieldValue499;

let fieldValue500 = browser.currentScene.createNode("fieldValue");
fieldValue500.name = "translation";
fieldValue500.value = "0.17350000143051147 1.1272000074386597 -0.11129999905824661";
ProtoInstance498.fieldValue[1] = fieldValue500;

fieldValue356.children[47] = ProtoInstance498;

let ProtoInstance501 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance501.name = "Site";
ProtoInstance501.DEF = "hanim_l_radiale";
let fieldValue502 = browser.currentScene.createNode("fieldValue");
fieldValue502.name = "name";
fieldValue502.value = "l_radiale";
ProtoInstance501.fieldValue = new MFNode();

ProtoInstance501.fieldValue[0] = fieldValue502;

let fieldValue503 = browser.currentScene.createNode("fieldValue");
fieldValue503.name = "translation";
fieldValue503.value = "0.21819999814033508 1.1211999654769897 -0.11670000106096268";
ProtoInstance501.fieldValue[1] = fieldValue503;

fieldValue356.children[48] = ProtoInstance501;

let ProtoInstance504 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance504.name = "Site";
ProtoInstance504.DEF = "hanim_l_metacarpal_phalanx_2";
let fieldValue505 = browser.currentScene.createNode("fieldValue");
fieldValue505.name = "name";
fieldValue505.value = "l_metacarpal_phalanx_2";
ProtoInstance504.fieldValue = new MFNode();

ProtoInstance504.fieldValue[0] = fieldValue505;

let fieldValue506 = browser.currentScene.createNode("fieldValue");
fieldValue506.name = "translation";
fieldValue506.value = "0.20090000331401825 0.8138999938964844 -0.02370000071823597";
ProtoInstance504.fieldValue[1] = fieldValue506;

fieldValue356.children[49] = ProtoInstance504;

let ProtoInstance507 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance507.name = "Site";
ProtoInstance507.DEF = "hanim_l_dactylion";
let fieldValue508 = browser.currentScene.createNode("fieldValue");
fieldValue508.name = "name";
fieldValue508.value = "l_dactylion";
ProtoInstance507.fieldValue = new MFNode();

ProtoInstance507.fieldValue[0] = fieldValue508;

let fieldValue509 = browser.currentScene.createNode("fieldValue");
fieldValue509.name = "translation";
fieldValue509.value = "0.20559999346733093 0.6743000149726868 -0.04820000007748604";
ProtoInstance507.fieldValue[1] = fieldValue509;

fieldValue356.children[50] = ProtoInstance507;

let ProtoInstance510 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance510.name = "Site";
ProtoInstance510.DEF = "hanim_l_ulnar_styloid";
let fieldValue511 = browser.currentScene.createNode("fieldValue");
fieldValue511.name = "name";
fieldValue511.value = "l_ulnar_styloid";
ProtoInstance510.fieldValue = new MFNode();

ProtoInstance510.fieldValue[0] = fieldValue511;

let fieldValue512 = browser.currentScene.createNode("fieldValue");
fieldValue512.name = "translation";
fieldValue512.value = "-0.2142000049352646 0.8529000282287598 -0.06480000168085098";
ProtoInstance510.fieldValue[1] = fieldValue512;

fieldValue356.children[51] = ProtoInstance510;

let ProtoInstance513 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance513.name = "Site";
ProtoInstance513.DEF = "hanim_l_metacarpal_phalanx_5";
let fieldValue514 = browser.currentScene.createNode("fieldValue");
fieldValue514.name = "name";
fieldValue514.value = "l_metacarpal_phalanx_5";
ProtoInstance513.fieldValue = new MFNode();

ProtoInstance513.fieldValue[0] = fieldValue514;

let fieldValue515 = browser.currentScene.createNode("fieldValue");
fieldValue515.name = "translation";
fieldValue515.value = "0.19290000200271606 0.7860000133514404 -0.11219999939203262";
ProtoInstance513.fieldValue[1] = fieldValue515;

fieldValue356.children[52] = ProtoInstance513;

let ProtoInstance516 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance516.name = "Site";
ProtoInstance516.DEF = "hanim_r_knee_crease";
let fieldValue517 = browser.currentScene.createNode("fieldValue");
fieldValue517.name = "name";
fieldValue517.value = "r_knee_crease";
ProtoInstance516.fieldValue = new MFNode();

ProtoInstance516.fieldValue[0] = fieldValue517;

let fieldValue518 = browser.currentScene.createNode("fieldValue");
fieldValue518.name = "translation";
fieldValue518.value = "-0.08250000327825546 0.49320000410079956 -0.032600000500679016";
ProtoInstance516.fieldValue[1] = fieldValue518;

fieldValue356.children[53] = ProtoInstance516;

let ProtoInstance519 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance519.name = "Site";
ProtoInstance519.DEF = "hanim_r_femoral_lateral_epicondyles";
let fieldValue520 = browser.currentScene.createNode("fieldValue");
fieldValue520.name = "name";
fieldValue520.value = "r_femoral_lateral_epicondyles";
ProtoInstance519.fieldValue = new MFNode();

ProtoInstance519.fieldValue[0] = fieldValue520;

let fieldValue521 = browser.currentScene.createNode("fieldValue");
fieldValue521.name = "translation";
fieldValue521.value = "-0.1421000063419342 0.4991999864578247 0.03099999949336052";
ProtoInstance519.fieldValue[1] = fieldValue521;

fieldValue356.children[54] = ProtoInstance519;

let ProtoInstance522 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance522.name = "Site";
ProtoInstance522.DEF = "hanim_r_femoral_medial_epicondyles";
let fieldValue523 = browser.currentScene.createNode("fieldValue");
fieldValue523.name = "name";
fieldValue523.value = "r_femoral_lateral_epicondyles";
ProtoInstance522.fieldValue = new MFNode();

ProtoInstance522.fieldValue[0] = fieldValue523;

let fieldValue524 = browser.currentScene.createNode("fieldValue");
fieldValue524.name = "translation";
fieldValue524.value = "-0.022099999710917473 0.5013999938964844 0.02889999933540821";
ProtoInstance522.fieldValue[1] = fieldValue524;

fieldValue356.children[55] = ProtoInstance522;

let ProtoInstance525 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance525.name = "Site";
ProtoInstance525.DEF = "hanim_r_tarsal_interphalangeal_phalanx_5";
let fieldValue526 = browser.currentScene.createNode("fieldValue");
fieldValue526.name = "name";
fieldValue526.value = "r_tarsal_interphalangeal_phalanx_5";
ProtoInstance525.fieldValue = new MFNode();

ProtoInstance525.fieldValue[0] = fieldValue526;

let fieldValue527 = browser.currentScene.createNode("fieldValue");
fieldValue527.name = "translation";
fieldValue527.value = "-0.15230000019073486 0.016599999740719795 0.08950000256299973";
ProtoInstance525.fieldValue[1] = fieldValue527;

fieldValue356.children[56] = ProtoInstance525;

let ProtoInstance528 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance528.name = "Site";
ProtoInstance528.DEF = "hanim_r_lateral_malleolus";
let fieldValue529 = browser.currentScene.createNode("fieldValue");
fieldValue529.name = "name";
fieldValue529.value = "r_lateral_malleolus";
ProtoInstance528.fieldValue = new MFNode();

ProtoInstance528.fieldValue[0] = fieldValue529;

let fieldValue530 = browser.currentScene.createNode("fieldValue");
fieldValue530.name = "translation";
fieldValue530.value = "-0.1005999967455864 0.0658000037074089 -0.10750000178813934";
ProtoInstance528.fieldValue[1] = fieldValue530;

fieldValue356.children[57] = ProtoInstance528;

let ProtoInstance531 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance531.name = "Site";
ProtoInstance531.DEF = "hanim_r_medial_malleolus";
let fieldValue532 = browser.currentScene.createNode("fieldValue");
fieldValue532.name = "name";
fieldValue532.value = "r_medial_malleolus";
ProtoInstance531.fieldValue = new MFNode();

ProtoInstance531.fieldValue[0] = fieldValue532;

let fieldValue533 = browser.currentScene.createNode("fieldValue");
fieldValue533.name = "translation";
fieldValue533.value = "-0.05909999832510948 0.07599999755620956 -0.09279999881982803";
ProtoInstance531.fieldValue[1] = fieldValue533;

fieldValue356.children[58] = ProtoInstance531;

let ProtoInstance534 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance534.name = "Site";
ProtoInstance534.DEF = "hanim_r_sphyrion";
let fieldValue535 = browser.currentScene.createNode("fieldValue");
fieldValue535.name = "name";
fieldValue535.value = "r_sphyrion";
ProtoInstance534.fieldValue = new MFNode();

ProtoInstance534.fieldValue[0] = fieldValue535;

let fieldValue536 = browser.currentScene.createNode("fieldValue");
fieldValue536.name = "translation";
fieldValue536.value = "-0.06030000001192093 0.061000000685453415 -0.10019999742507935";
ProtoInstance534.fieldValue[1] = fieldValue536;

fieldValue356.children[59] = ProtoInstance534;

let ProtoInstance537 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance537.name = "Site";
ProtoInstance537.DEF = "hanim_r_tarsal_interphalangeal_phalanx_1";
let fieldValue538 = browser.currentScene.createNode("fieldValue");
fieldValue538.name = "name";
fieldValue538.value = "r_tarsal_interphalangeal_phalanx_1";
ProtoInstance537.fieldValue = new MFNode();

ProtoInstance537.fieldValue[0] = fieldValue538;

let fieldValue539 = browser.currentScene.createNode("fieldValue");
fieldValue539.name = "translation";
fieldValue539.value = "-0.05209999904036522 0.026000000536441803 0.01269999984651804";
ProtoInstance537.fieldValue[1] = fieldValue539;

fieldValue356.children[60] = ProtoInstance537;

let ProtoInstance540 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance540.name = "Site";
ProtoInstance540.DEF = "hanim_r_calcaneus_posterior";
let fieldValue541 = browser.currentScene.createNode("fieldValue");
fieldValue541.name = "name";
fieldValue541.value = "r_calcaneus_posterior";
ProtoInstance540.fieldValue = new MFNode();

ProtoInstance540.fieldValue[0] = fieldValue541;

let fieldValue542 = browser.currentScene.createNode("fieldValue");
fieldValue542.name = "translation";
fieldValue542.value = "-0.06920000165700912 0.02969999983906746 -0.12210000306367874";
ProtoInstance540.fieldValue[1] = fieldValue542;

fieldValue356.children[61] = ProtoInstance540;

let ProtoInstance543 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance543.name = "Site";
ProtoInstance543.DEF = "hanim_r_tarsal_distal_phalanx_2";
let fieldValue544 = browser.currentScene.createNode("fieldValue");
fieldValue544.name = "name";
fieldValue544.value = "r_tarsal_distal_phalanx_2";
ProtoInstance543.fieldValue = new MFNode();

ProtoInstance543.fieldValue[0] = fieldValue544;

let fieldValue545 = browser.currentScene.createNode("fieldValue");
fieldValue545.name = "translation";
fieldValue545.value = "-0.08829999715089798 0.013399999588727951 0.13830000162124634";
ProtoInstance543.fieldValue[1] = fieldValue545;

fieldValue356.children[62] = ProtoInstance543;

let ProtoInstance546 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance546.name = "Site";
ProtoInstance546.DEF = "hanim_l_knee_crease";
let fieldValue547 = browser.currentScene.createNode("fieldValue");
fieldValue547.name = "name";
fieldValue547.value = "l_knee_crease";
ProtoInstance546.fieldValue = new MFNode();

ProtoInstance546.fieldValue[0] = fieldValue547;

let fieldValue548 = browser.currentScene.createNode("fieldValue");
fieldValue548.name = "translation";
fieldValue548.value = "0.09929999709129333 0.48809999227523804 -0.030899999663233757";
ProtoInstance546.fieldValue[1] = fieldValue548;

fieldValue356.children[63] = ProtoInstance546;

let ProtoInstance549 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance549.name = "Site";
ProtoInstance549.DEF = "hanim_l_femoral_lateral_epicondyles";
let fieldValue550 = browser.currentScene.createNode("fieldValue");
fieldValue550.name = "name";
fieldValue550.value = "l_femoral_lateral_epicondyles";
ProtoInstance549.fieldValue = new MFNode();

ProtoInstance549.fieldValue[0] = fieldValue550;

let fieldValue551 = browser.currentScene.createNode("fieldValue");
fieldValue551.name = "translation";
fieldValue551.value = "0.1597999930381775 0.4966999888420105 0.02969999983906746";
ProtoInstance549.fieldValue[1] = fieldValue551;

fieldValue356.children[64] = ProtoInstance549;

let ProtoInstance552 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance552.name = "Site";
ProtoInstance552.DEF = "hanim_l_femoral_medial_epicondyles";
let fieldValue553 = browser.currentScene.createNode("fieldValue");
fieldValue553.name = "name";
fieldValue553.value = "l_femoral_lateral_epicondyles";
ProtoInstance552.fieldValue = new MFNode();

ProtoInstance552.fieldValue[0] = fieldValue553;

let fieldValue554 = browser.currentScene.createNode("fieldValue");
fieldValue554.name = "translation";
fieldValue554.value = "0.039799999445676804 0.49459999799728394 0.030300000682473183";
ProtoInstance552.fieldValue[1] = fieldValue554;

fieldValue356.children[65] = ProtoInstance552;

let ProtoInstance555 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance555.name = "Site";
ProtoInstance555.DEF = "hanim_l_tarsal_interphalangeal_phalanx_5";
let fieldValue556 = browser.currentScene.createNode("fieldValue");
fieldValue556.name = "name";
fieldValue556.value = "l_tarsal_interphalangeal_phalanx_5";
ProtoInstance555.fieldValue = new MFNode();

ProtoInstance555.fieldValue[0] = fieldValue556;

let fieldValue557 = browser.currentScene.createNode("fieldValue");
fieldValue557.name = "translation";
fieldValue557.value = "0.18250000476837158 0.007000000216066837 0.09279999881982803";
ProtoInstance555.fieldValue[1] = fieldValue557;

fieldValue356.children[66] = ProtoInstance555;

let ProtoInstance558 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance558.name = "Site";
ProtoInstance558.DEF = "hanim_l_lateral_malleolus";
let fieldValue559 = browser.currentScene.createNode("fieldValue");
fieldValue559.name = "name";
fieldValue559.value = "l_lateral_malleolus";
ProtoInstance558.fieldValue = new MFNode();

ProtoInstance558.fieldValue[0] = fieldValue559;

let fieldValue560 = browser.currentScene.createNode("fieldValue");
fieldValue560.name = "translation";
fieldValue560.value = "0.13079999387264252 0.059700001031160355 -0.10320000350475311";
ProtoInstance558.fieldValue[1] = fieldValue560;

fieldValue356.children[67] = ProtoInstance558;

let ProtoInstance561 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance561.name = "Site";
ProtoInstance561.DEF = "hanim_l_medial_malleolus";
let fieldValue562 = browser.currentScene.createNode("fieldValue");
fieldValue562.name = "name";
fieldValue562.value = "l_medial_malleolus";
ProtoInstance561.fieldValue = new MFNode();

ProtoInstance561.fieldValue[0] = fieldValue562;

let fieldValue563 = browser.currentScene.createNode("fieldValue");
fieldValue563.name = "translation";
fieldValue563.value = "0.08900000154972076 0.07159999758005142 -0.08810000121593475";
ProtoInstance561.fieldValue[1] = fieldValue563;

fieldValue356.children[68] = ProtoInstance561;

let ProtoInstance564 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance564.name = "Site";
ProtoInstance564.DEF = "hanim_l_sphyrion";
let fieldValue565 = browser.currentScene.createNode("fieldValue");
fieldValue565.name = "name";
fieldValue565.value = "l_sphyrion";
ProtoInstance564.fieldValue = new MFNode();

ProtoInstance564.fieldValue[0] = fieldValue565;

let fieldValue566 = browser.currentScene.createNode("fieldValue");
fieldValue566.name = "translation";
fieldValue566.value = "0.08900000154972076 0.057500001043081284 -0.09430000185966492";
ProtoInstance564.fieldValue[1] = fieldValue566;

fieldValue356.children[69] = ProtoInstance564;

let ProtoInstance567 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance567.name = "Site";
ProtoInstance567.DEF = "hanim_l_tarsal_interphalangeal_phalanx_1";
let fieldValue568 = browser.currentScene.createNode("fieldValue");
fieldValue568.name = "name";
fieldValue568.value = "l_tarsal_interphalangeal_phalanx_1";
ProtoInstance567.fieldValue = new MFNode();

ProtoInstance567.fieldValue[0] = fieldValue568;

let fieldValue569 = browser.currentScene.createNode("fieldValue");
fieldValue569.name = "translation";
fieldValue569.value = "0.08160000294446945 0.02319999970495701 0.010599999688565731";
ProtoInstance567.fieldValue[1] = fieldValue569;

fieldValue356.children[70] = ProtoInstance567;

let ProtoInstance570 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance570.name = "Site";
ProtoInstance570.DEF = "hanim_l_calcaneus_posterior";
let fieldValue571 = browser.currentScene.createNode("fieldValue");
fieldValue571.name = "name";
fieldValue571.value = "l_calcaneus_posterior";
ProtoInstance570.fieldValue = new MFNode();

ProtoInstance570.fieldValue[0] = fieldValue571;

let fieldValue572 = browser.currentScene.createNode("fieldValue");
fieldValue572.name = "translation";
fieldValue572.value = "0.09740000218153 0.02590000070631504 -0.11710000038146973";
ProtoInstance570.fieldValue[1] = fieldValue572;

fieldValue356.children[71] = ProtoInstance570;

let ProtoInstance573 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance573.name = "Site";
ProtoInstance573.DEF = "hanim_l_tarsal_distal_phalanx_2";
let fieldValue574 = browser.currentScene.createNode("fieldValue");
fieldValue574.name = "name";
fieldValue574.value = "l_tarsal_distal_phalanx_2";
ProtoInstance573.fieldValue = new MFNode();

ProtoInstance573.fieldValue[0] = fieldValue574;

let fieldValue575 = browser.currentScene.createNode("fieldValue");
fieldValue575.name = "translation";
fieldValue575.value = "0.11949999630451202 0.007899999618530273 0.14329999685287476";
ProtoInstance573.fieldValue[1] = fieldValue575;

fieldValue356.children[72] = ProtoInstance573;

let ProtoInstance576 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance576.name = "Site";
ProtoInstance576.DEF = "hanim_crotch";
let fieldValue577 = browser.currentScene.createNode("fieldValue");
fieldValue577.name = "name";
fieldValue577.value = "crotch";
ProtoInstance576.fieldValue = new MFNode();

ProtoInstance576.fieldValue[0] = fieldValue577;

let fieldValue578 = browser.currentScene.createNode("fieldValue");
fieldValue578.name = "translation";
fieldValue578.value = "0.0034000000450760126 0.8266000151634216 0.025699999183416367";
ProtoInstance576.fieldValue[1] = fieldValue578;

fieldValue356.children[73] = ProtoInstance576;

let ProtoInstance579 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance579.name = "Site";
ProtoInstance579.DEF = "hanim_r_neck_base";
let fieldValue580 = browser.currentScene.createNode("fieldValue");
fieldValue580.name = "name";
fieldValue580.value = "r_neck_base";
ProtoInstance579.fieldValue = new MFNode();

ProtoInstance579.fieldValue[0] = fieldValue580;

let fieldValue581 = browser.currentScene.createNode("fieldValue");
fieldValue581.name = "translation";
fieldValue581.value = "-0.04190000146627426 1.5148999691009521 -0.02199999988079071";
ProtoInstance579.fieldValue[1] = fieldValue581;

fieldValue356.children[74] = ProtoInstance579;

let ProtoInstance582 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance582.name = "Site";
ProtoInstance582.DEF = "hanim_l_neck_base";
let fieldValue583 = browser.currentScene.createNode("fieldValue");
fieldValue583.name = "name";
fieldValue583.value = "l_neck_base";
ProtoInstance582.fieldValue = new MFNode();

ProtoInstance582.fieldValue[0] = fieldValue583;

let fieldValue584 = browser.currentScene.createNode("fieldValue");
fieldValue584.name = "translation";
fieldValue584.value = "0.06459999829530716 1.5140999555587769 -0.03799999877810478";
ProtoInstance582.fieldValue[1] = fieldValue584;

fieldValue356.children[75] = ProtoInstance582;

let ProtoInstance585 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance585.name = "Site";
ProtoInstance585.DEF = "hanim_navel";
let fieldValue586 = browser.currentScene.createNode("fieldValue");
fieldValue586.name = "name";
fieldValue586.value = "navel";
ProtoInstance585.fieldValue = new MFNode();

ProtoInstance585.fieldValue[0] = fieldValue586;

let fieldValue587 = browser.currentScene.createNode("fieldValue");
fieldValue587.name = "translation";
fieldValue587.value = "0.006899999920278788 1.09660005569458 0.10170000046491623";
ProtoInstance585.fieldValue[1] = fieldValue587;

fieldValue356.children[76] = ProtoInstance585;

ProtoInstance354.fieldValue[1] = fieldValue356;

fieldValue353.children = new MFNode();

fieldValue353.children[0] = ProtoInstance354;

ProtoInstance349.fieldValue[3] = fieldValue353;

fieldValue348.children = new MFNode();

fieldValue348.children[0] = ProtoInstance349;

ProtoInstance107.fieldValue[1] = fieldValue348;

let fieldValue588 = browser.currentScene.createNode("fieldValue");
fieldValue588.name = "segments";
let ProtoInstance589 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance589.name = "Segment";
ProtoInstance589.DEF = "hanim_sacrum";
let fieldValue590 = browser.currentScene.createNode("fieldValue");
fieldValue590.name = "name";
fieldValue590.value = "sacrum";
ProtoInstance589.fieldValue = new MFNode();

ProtoInstance589.fieldValue[0] = fieldValue590;

let fieldValue591 = browser.currentScene.createNode("fieldValue");
fieldValue591.name = "children";
let ProtoInstance592 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance592.name = "Site";
ProtoInstance592.DEF = "hanim_skull_tip";
let fieldValue593 = browser.currentScene.createNode("fieldValue");
fieldValue593.name = "name";
fieldValue593.value = "skull_tip";
ProtoInstance592.fieldValue = new MFNode();

ProtoInstance592.fieldValue[0] = fieldValue593;

let fieldValue594 = browser.currentScene.createNode("fieldValue");
fieldValue594.name = "translation";
fieldValue594.value = "0.004999999888241291 1.7503999471664429 0.005499999970197678";
ProtoInstance592.fieldValue[1] = fieldValue594;

fieldValue591.children = new MFNode();

fieldValue591.children[0] = ProtoInstance592;

let ProtoInstance595 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance595.name = "Site";
ProtoInstance595.DEF = "hanim_sellion";
let fieldValue596 = browser.currentScene.createNode("fieldValue");
fieldValue596.name = "name";
fieldValue596.value = "sellion";
ProtoInstance595.fieldValue = new MFNode();

ProtoInstance595.fieldValue[0] = fieldValue596;

let fieldValue597 = browser.currentScene.createNode("fieldValue");
fieldValue597.name = "translation";
fieldValue597.value = "0.005799999926239252 1.631600022315979 0.0851999968290329";
ProtoInstance595.fieldValue[1] = fieldValue597;

fieldValue591.children[1] = ProtoInstance595;

let ProtoInstance598 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance598.name = "Site";
ProtoInstance598.DEF = "hanim_r_infraorbitale";
let fieldValue599 = browser.currentScene.createNode("fieldValue");
fieldValue599.name = "name";
fieldValue599.value = "r_infraorbitale";
ProtoInstance598.fieldValue = new MFNode();

ProtoInstance598.fieldValue[0] = fieldValue599;

let fieldValue600 = browser.currentScene.createNode("fieldValue");
fieldValue600.name = "translation";
fieldValue600.value = "-0.02370000071823597 1.6171000003814697 0.07519999891519547";
ProtoInstance598.fieldValue[1] = fieldValue600;

fieldValue591.children[2] = ProtoInstance598;

let ProtoInstance601 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance601.name = "Site";
ProtoInstance601.DEF = "hanim_l_infraorbitale";
let fieldValue602 = browser.currentScene.createNode("fieldValue");
fieldValue602.name = "name";
fieldValue602.value = "l_infraorbitale";
ProtoInstance601.fieldValue = new MFNode();

ProtoInstance601.fieldValue[0] = fieldValue602;

let fieldValue603 = browser.currentScene.createNode("fieldValue");
fieldValue603.name = "translation";
fieldValue603.value = "0.0340999998152256 1.6171000003814697 0.07519999891519547";
ProtoInstance601.fieldValue[1] = fieldValue603;

fieldValue591.children[3] = ProtoInstance601;

let ProtoInstance604 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance604.name = "Site";
ProtoInstance604.DEF = "hanim_supramenton";
let fieldValue605 = browser.currentScene.createNode("fieldValue");
fieldValue605.name = "name";
fieldValue605.value = "supramenton";
ProtoInstance604.fieldValue = new MFNode();

ProtoInstance604.fieldValue[0] = fieldValue605;

let fieldValue606 = browser.currentScene.createNode("fieldValue");
fieldValue606.name = "translation";
fieldValue606.value = "0.006099999882280827 1.5410000085830688 0.08049999922513962";
ProtoInstance604.fieldValue[1] = fieldValue606;

fieldValue591.children[4] = ProtoInstance604;

let ProtoInstance607 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance607.name = "Site";
ProtoInstance607.DEF = "hanim_r_tragion";
let fieldValue608 = browser.currentScene.createNode("fieldValue");
fieldValue608.name = "name";
fieldValue608.value = "r_tragion";
ProtoInstance607.fieldValue = new MFNode();

ProtoInstance607.fieldValue[0] = fieldValue608;

let fieldValue609 = browser.currentScene.createNode("fieldValue");
fieldValue609.name = "translation";
fieldValue609.value = "-0.06459999829530716 1.6346999406814575 0.03020000085234642";
ProtoInstance607.fieldValue[1] = fieldValue609;

fieldValue591.children[5] = ProtoInstance607;

let ProtoInstance610 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance610.name = "Site";
ProtoInstance610.DEF = "hanim_r_gonion";
let fieldValue611 = browser.currentScene.createNode("fieldValue");
fieldValue611.name = "name";
fieldValue611.value = "r_gonion";
ProtoInstance610.fieldValue = new MFNode();

ProtoInstance610.fieldValue[0] = fieldValue611;

let fieldValue612 = browser.currentScene.createNode("fieldValue");
fieldValue612.name = "translation";
fieldValue612.value = "-0.052000001072883606 1.552899956703186 0.034699998795986176";
ProtoInstance610.fieldValue[1] = fieldValue612;

fieldValue591.children[6] = ProtoInstance610;

let ProtoInstance613 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance613.name = "Site";
ProtoInstance613.DEF = "hanim_l_tragion";
let fieldValue614 = browser.currentScene.createNode("fieldValue");
fieldValue614.name = "name";
fieldValue614.value = "l_tragion";
ProtoInstance613.fieldValue = new MFNode();

ProtoInstance613.fieldValue[0] = fieldValue614;

let fieldValue615 = browser.currentScene.createNode("fieldValue");
fieldValue615.name = "translation";
fieldValue615.value = "0.0738999992609024 1.6347999572753906 0.028200000524520874";
ProtoInstance613.fieldValue[1] = fieldValue615;

fieldValue591.children[7] = ProtoInstance613;

let ProtoInstance616 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance616.name = "Site";
ProtoInstance616.DEF = "hanim_l_gonion";
let fieldValue617 = browser.currentScene.createNode("fieldValue");
fieldValue617.name = "name";
fieldValue617.value = "l_gonion";
ProtoInstance616.fieldValue = new MFNode();

ProtoInstance616.fieldValue[0] = fieldValue617;

let fieldValue618 = browser.currentScene.createNode("fieldValue");
fieldValue618.name = "translation";
fieldValue618.value = "0.06310000270605087 1.5529999732971191 0.032999999821186066";
ProtoInstance616.fieldValue[1] = fieldValue618;

fieldValue591.children[8] = ProtoInstance616;

let ProtoInstance619 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance619.name = "Site";
ProtoInstance619.DEF = "hanim_nuchale";
let fieldValue620 = browser.currentScene.createNode("fieldValue");
fieldValue620.name = "name";
fieldValue620.value = "nuchale";
ProtoInstance619.fieldValue = new MFNode();

ProtoInstance619.fieldValue[0] = fieldValue620;

let fieldValue621 = browser.currentScene.createNode("fieldValue");
fieldValue621.name = "translation";
fieldValue621.value = "0.0038999998942017555 1.5972000360488892 -0.07959999889135361";
ProtoInstance619.fieldValue[1] = fieldValue621;

fieldValue591.children[9] = ProtoInstance619;

let ProtoInstance622 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance622.name = "Site";
ProtoInstance622.DEF = "hanim_r_clavicale";
let fieldValue623 = browser.currentScene.createNode("fieldValue");
fieldValue623.name = "name";
fieldValue623.value = "r_clavicale";
ProtoInstance622.fieldValue = new MFNode();

ProtoInstance622.fieldValue[0] = fieldValue623;

let fieldValue624 = browser.currentScene.createNode("fieldValue");
fieldValue624.name = "translation";
fieldValue624.value = "-0.011500000022351742 1.4943000078201294 0.03999999910593033";
ProtoInstance622.fieldValue[1] = fieldValue624;

fieldValue591.children[10] = ProtoInstance622;

let ProtoInstance625 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance625.name = "Site";
ProtoInstance625.DEF = "hanim_suprasternale";
let fieldValue626 = browser.currentScene.createNode("fieldValue");
fieldValue626.name = "name";
fieldValue626.value = "suprasternale";
ProtoInstance625.fieldValue = new MFNode();

ProtoInstance625.fieldValue[0] = fieldValue626;

let fieldValue627 = browser.currentScene.createNode("fieldValue");
fieldValue627.name = "translation";
fieldValue627.value = "0.00839999970048666 1.4714000225067139 0.05510000139474869";
ProtoInstance625.fieldValue[1] = fieldValue627;

fieldValue591.children[11] = ProtoInstance625;

let ProtoInstance628 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance628.name = "Site";
ProtoInstance628.DEF = "hanim_l_clavicale";
let fieldValue629 = browser.currentScene.createNode("fieldValue");
fieldValue629.name = "name";
fieldValue629.value = "l_clavicale";
ProtoInstance628.fieldValue = new MFNode();

ProtoInstance628.fieldValue[0] = fieldValue629;

let fieldValue630 = browser.currentScene.createNode("fieldValue");
fieldValue630.name = "translation";
fieldValue630.value = "0.02710000053048134 1.4943000078201294 0.039400000125169754";
ProtoInstance628.fieldValue[1] = fieldValue630;

fieldValue591.children[12] = ProtoInstance628;

let ProtoInstance631 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance631.name = "Site";
ProtoInstance631.DEF = "hanim_r_thelion";
let fieldValue632 = browser.currentScene.createNode("fieldValue");
fieldValue632.name = "name";
fieldValue632.value = "r_thelion";
ProtoInstance631.fieldValue = new MFNode();

ProtoInstance631.fieldValue[0] = fieldValue632;

let fieldValue633 = browser.currentScene.createNode("fieldValue");
fieldValue633.name = "translation";
fieldValue633.value = "-0.07360000163316727 1.3385000228881836 0.1216999962925911";
ProtoInstance631.fieldValue[1] = fieldValue633;

fieldValue591.children[13] = ProtoInstance631;

let ProtoInstance634 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance634.name = "Site";
ProtoInstance634.DEF = "hanim_l_thelion";
let fieldValue635 = browser.currentScene.createNode("fieldValue");
fieldValue635.name = "name";
fieldValue635.value = "l_thelion";
ProtoInstance634.fieldValue = new MFNode();

ProtoInstance634.fieldValue[0] = fieldValue635;

let fieldValue636 = browser.currentScene.createNode("fieldValue");
fieldValue636.name = "translation";
fieldValue636.value = "0.09179999679327011 1.3381999731063843 0.11919999867677689";
ProtoInstance634.fieldValue[1] = fieldValue636;

fieldValue591.children[14] = ProtoInstance634;

let ProtoInstance637 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance637.name = "Site";
ProtoInstance637.DEF = "hanim_substernale";
let fieldValue638 = browser.currentScene.createNode("fieldValue");
fieldValue638.name = "name";
fieldValue638.value = "substernale";
ProtoInstance637.fieldValue = new MFNode();

ProtoInstance637.fieldValue[0] = fieldValue638;

let fieldValue639 = browser.currentScene.createNode("fieldValue");
fieldValue639.name = "translation";
fieldValue639.value = "0.008500000461935997 1.2994999885559082 0.11469999700784683";
ProtoInstance637.fieldValue[1] = fieldValue639;

fieldValue591.children[15] = ProtoInstance637;

let ProtoInstance640 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance640.name = "Site";
ProtoInstance640.DEF = "hanim_r_rib10";
let fieldValue641 = browser.currentScene.createNode("fieldValue");
fieldValue641.name = "name";
fieldValue641.value = "r_rib10";
ProtoInstance640.fieldValue = new MFNode();

ProtoInstance640.fieldValue[0] = fieldValue641;

let fieldValue642 = browser.currentScene.createNode("fieldValue");
fieldValue642.name = "translation";
fieldValue642.value = "-0.07109999656677246 1.194100022315979 0.10159999877214432";
ProtoInstance640.fieldValue[1] = fieldValue642;

fieldValue591.children[16] = ProtoInstance640;

let ProtoInstance643 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance643.name = "Site";
ProtoInstance643.DEF = "hanim_r_asis";
let fieldValue644 = browser.currentScene.createNode("fieldValue");
fieldValue644.name = "name";
fieldValue644.value = "r_asis";
ProtoInstance643.fieldValue = new MFNode();

ProtoInstance643.fieldValue[0] = fieldValue644;

let fieldValue645 = browser.currentScene.createNode("fieldValue");
fieldValue645.name = "translation";
fieldValue645.value = "-0.08869999647140503 1.0020999908447266 0.1111999973654747";
ProtoInstance643.fieldValue[1] = fieldValue645;

fieldValue591.children[17] = ProtoInstance643;

let ProtoInstance646 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance646.name = "Site";
ProtoInstance646.DEF = "hanim_l_rib10";
let fieldValue647 = browser.currentScene.createNode("fieldValue");
fieldValue647.name = "name";
fieldValue647.value = "l_rib10";
ProtoInstance646.fieldValue = new MFNode();

ProtoInstance646.fieldValue[0] = fieldValue647;

let fieldValue648 = browser.currentScene.createNode("fieldValue");
fieldValue648.name = "translation";
fieldValue648.value = "0.08709999918937683 1.1924999952316284 0.09920000284910202";
ProtoInstance646.fieldValue[1] = fieldValue648;

fieldValue591.children[18] = ProtoInstance646;

let ProtoInstance649 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance649.name = "Site";
ProtoInstance649.DEF = "hanim_l_asis";
let fieldValue650 = browser.currentScene.createNode("fieldValue");
fieldValue650.name = "name";
fieldValue650.value = "l_asis";
ProtoInstance649.fieldValue = new MFNode();

ProtoInstance649.fieldValue[0] = fieldValue650;

let fieldValue651 = browser.currentScene.createNode("fieldValue");
fieldValue651.name = "translation";
fieldValue651.value = "0.0925000011920929 0.9983000159263611 0.10520000010728836";
ProtoInstance649.fieldValue[1] = fieldValue651;

fieldValue591.children[19] = ProtoInstance649;

let ProtoInstance652 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance652.name = "Site";
ProtoInstance652.DEF = "hanim_r_iliocristale";
let fieldValue653 = browser.currentScene.createNode("fieldValue");
fieldValue653.name = "name";
fieldValue653.value = "r_iliocristale";
ProtoInstance652.fieldValue = new MFNode();

ProtoInstance652.fieldValue[0] = fieldValue653;

let fieldValue654 = browser.currentScene.createNode("fieldValue");
fieldValue654.name = "translation";
fieldValue654.value = "-0.1525000035762787 1.0628000497817993 0.0035000001080334187";
ProtoInstance652.fieldValue[1] = fieldValue654;

fieldValue591.children[20] = ProtoInstance652;

let ProtoInstance655 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance655.name = "Site";
ProtoInstance655.DEF = "hanim_r_trochanterion";
let fieldValue656 = browser.currentScene.createNode("fieldValue");
fieldValue656.name = "name";
fieldValue656.value = "r_trochanterion";
ProtoInstance655.fieldValue = new MFNode();

ProtoInstance655.fieldValue[0] = fieldValue656;

let fieldValue657 = browser.currentScene.createNode("fieldValue");
fieldValue657.name = "translation";
fieldValue657.value = "-0.1688999980688095 0.8418999910354614 0.03519999980926514";
ProtoInstance655.fieldValue[1] = fieldValue657;

fieldValue591.children[21] = ProtoInstance655;

let ProtoInstance658 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance658.name = "Site";
ProtoInstance658.DEF = "hanim_l_iliocristale";
let fieldValue659 = browser.currentScene.createNode("fieldValue");
fieldValue659.name = "name";
fieldValue659.value = "l_iliocristale";
ProtoInstance658.fieldValue = new MFNode();

ProtoInstance658.fieldValue[0] = fieldValue659;

let fieldValue660 = browser.currentScene.createNode("fieldValue");
fieldValue660.name = "translation";
fieldValue660.value = "0.16120000183582306 1.0536999702453613 0.0007999999797903001";
ProtoInstance658.fieldValue[1] = fieldValue660;

fieldValue591.children[22] = ProtoInstance658;

let ProtoInstance661 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance661.name = "Site";
ProtoInstance661.DEF = "hanim_l_trochanterion";
let fieldValue662 = browser.currentScene.createNode("fieldValue");
fieldValue662.name = "name";
fieldValue662.value = "l_trochanterion";
ProtoInstance661.fieldValue = new MFNode();

ProtoInstance661.fieldValue[0] = fieldValue662;

let fieldValue663 = browser.currentScene.createNode("fieldValue");
fieldValue663.name = "translation";
fieldValue663.value = "0.16769999265670776 0.8335999846458435 0.030300000682473183";
ProtoInstance661.fieldValue[1] = fieldValue663;

fieldValue591.children[23] = ProtoInstance661;

let ProtoInstance664 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance664.name = "Site";
ProtoInstance664.DEF = "hanim_cervicale";
let fieldValue665 = browser.currentScene.createNode("fieldValue");
fieldValue665.name = "name";
fieldValue665.value = "cervicale";
ProtoInstance664.fieldValue = new MFNode();

ProtoInstance664.fieldValue[0] = fieldValue665;

let fieldValue666 = browser.currentScene.createNode("fieldValue");
fieldValue666.name = "translation";
fieldValue666.value = "0.006399999838322401 1.5199999809265137 -0.08150000125169754";
ProtoInstance664.fieldValue[1] = fieldValue666;

fieldValue591.children[24] = ProtoInstance664;

let ProtoInstance667 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance667.name = "Site";
ProtoInstance667.DEF = "hanim_spine_2_lower_back";
let fieldValue668 = browser.currentScene.createNode("fieldValue");
fieldValue668.name = "name";
fieldValue668.value = "spine_2_lower_back";
ProtoInstance667.fieldValue = new MFNode();

ProtoInstance667.fieldValue[0] = fieldValue668;

let fieldValue669 = browser.currentScene.createNode("fieldValue");
fieldValue669.name = "translation";
fieldValue669.value = "0.004900000058114529 1.1907999515533447 -0.11129999905824661";
ProtoInstance667.fieldValue[1] = fieldValue669;

fieldValue591.children[25] = ProtoInstance667;

let ProtoInstance670 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance670.name = "Site";
ProtoInstance670.DEF = "hanim_r_psis";
let fieldValue671 = browser.currentScene.createNode("fieldValue");
fieldValue671.name = "name";
fieldValue671.value = "r_psis";
ProtoInstance670.fieldValue = new MFNode();

ProtoInstance670.fieldValue[0] = fieldValue671;

let fieldValue672 = browser.currentScene.createNode("fieldValue");
fieldValue672.name = "translation";
fieldValue672.value = "-0.07159999758005142 1.0190000534057617 -0.11379999667406082";
ProtoInstance670.fieldValue[1] = fieldValue672;

fieldValue591.children[26] = ProtoInstance670;

let ProtoInstance673 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance673.name = "Site";
ProtoInstance673.DEF = "hanim_l_psis";
let fieldValue674 = browser.currentScene.createNode("fieldValue");
fieldValue674.name = "name";
fieldValue674.value = "l_psis";
ProtoInstance673.fieldValue = new MFNode();

ProtoInstance673.fieldValue[0] = fieldValue674;

let fieldValue675 = browser.currentScene.createNode("fieldValue");
fieldValue675.name = "translation";
fieldValue675.value = "0.07739999890327454 1.0190000534057617 -0.11509999632835388";
ProtoInstance673.fieldValue[1] = fieldValue675;

fieldValue591.children[27] = ProtoInstance673;

let ProtoInstance676 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance676.name = "Site";
ProtoInstance676.DEF = "hanim_waist_preferred_posterior";
let fieldValue677 = browser.currentScene.createNode("fieldValue");
fieldValue677.name = "name";
fieldValue677.value = "waist_preferred_posterior";
ProtoInstance676.fieldValue = new MFNode();

ProtoInstance676.fieldValue[0] = fieldValue677;

let fieldValue678 = browser.currentScene.createNode("fieldValue");
fieldValue678.name = "translation";
fieldValue678.value = "0.28999999165534973 1.0915000438690186 -0.10909999907016754";
ProtoInstance676.fieldValue[1] = fieldValue678;

fieldValue591.children[28] = ProtoInstance676;

let ProtoInstance679 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance679.name = "Site";
ProtoInstance679.DEF = "hanim_r_acromion";
let fieldValue680 = browser.currentScene.createNode("fieldValue");
fieldValue680.name = "name";
fieldValue680.value = "r_acromion";
ProtoInstance679.fieldValue = new MFNode();

ProtoInstance679.fieldValue[0] = fieldValue680;

let fieldValue681 = browser.currentScene.createNode("fieldValue");
fieldValue681.name = "translation";
fieldValue681.value = "-0.19050000607967377 1.479099988937378 -0.04309999942779541";
ProtoInstance679.fieldValue[1] = fieldValue681;

fieldValue591.children[29] = ProtoInstance679;

let ProtoInstance682 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance682.name = "Site";
ProtoInstance682.DEF = "hanim_r_axilla_proximal";
let fieldValue683 = browser.currentScene.createNode("fieldValue");
fieldValue683.name = "name";
fieldValue683.value = "r_axilla_proximal";
ProtoInstance682.fieldValue = new MFNode();

ProtoInstance682.fieldValue[0] = fieldValue683;

let fieldValue684 = browser.currentScene.createNode("fieldValue");
fieldValue684.name = "translation";
fieldValue684.value = "-0.16259999573230743 1.4071999788284302 -0.003100000089034438";
ProtoInstance682.fieldValue[1] = fieldValue684;

fieldValue591.children[30] = ProtoInstance682;

let ProtoInstance685 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance685.name = "Site";
ProtoInstance685.DEF = "hanim_r_radial_styloid";
let fieldValue686 = browser.currentScene.createNode("fieldValue");
fieldValue686.name = "name";
fieldValue686.value = "r_radial_styloid";
ProtoInstance685.fieldValue = new MFNode();

ProtoInstance685.fieldValue[0] = fieldValue686;

let fieldValue687 = browser.currentScene.createNode("fieldValue");
fieldValue687.name = "translation";
fieldValue687.value = "-0.188400000333786 0.8676000237464905 -0.035999998450279236";
ProtoInstance685.fieldValue[1] = fieldValue687;

fieldValue591.children[31] = ProtoInstance685;

let ProtoInstance688 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance688.name = "Site";
ProtoInstance688.DEF = "hanim_r_axilla_distal";
let fieldValue689 = browser.currentScene.createNode("fieldValue");
fieldValue689.name = "name";
fieldValue689.value = "r_axilla_distal";
ProtoInstance688.fieldValue = new MFNode();

ProtoInstance688.fieldValue[0] = fieldValue689;

let fieldValue690 = browser.currentScene.createNode("fieldValue");
fieldValue690.name = "translation";
fieldValue690.value = "-0.16030000150203705 1.4098000526428223 -0.08259999752044678";
ProtoInstance688.fieldValue[1] = fieldValue690;

fieldValue591.children[32] = ProtoInstance688;

let ProtoInstance691 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance691.name = "Site";
ProtoInstance691.DEF = "hanim_r_olecranon";
let fieldValue692 = browser.currentScene.createNode("fieldValue");
fieldValue692.name = "name";
fieldValue692.value = "r_olecranon";
ProtoInstance691.fieldValue = new MFNode();

ProtoInstance691.fieldValue[0] = fieldValue692;

let fieldValue693 = browser.currentScene.createNode("fieldValue");
fieldValue693.name = "translation";
fieldValue693.value = "-0.1906999945640564 1.1404999494552612 -0.10649999976158142";
ProtoInstance691.fieldValue[1] = fieldValue693;

fieldValue591.children[33] = ProtoInstance691;

let ProtoInstance694 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance694.name = "Site";
ProtoInstance694.DEF = "hanim_r_humeral_lateral_epicondyles";
let fieldValue695 = browser.currentScene.createNode("fieldValue");
fieldValue695.name = "name";
fieldValue695.value = "r_humeral_lateral_epicondyles";
ProtoInstance694.fieldValue = new MFNode();

ProtoInstance694.fieldValue[0] = fieldValue695;

let fieldValue696 = browser.currentScene.createNode("fieldValue");
fieldValue696.name = "translation";
fieldValue696.value = "-0.2223999947309494 1.1517000198364258 -0.10329999774694443";
ProtoInstance694.fieldValue[1] = fieldValue696;

fieldValue591.children[34] = ProtoInstance694;

let ProtoInstance697 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance697.name = "Site";
ProtoInstance697.DEF = "hanim_r_humeral_medial_epicondyles";
let fieldValue698 = browser.currentScene.createNode("fieldValue");
fieldValue698.name = "name";
fieldValue698.value = "r_humeral_medial_epicondyles";
ProtoInstance697.fieldValue = new MFNode();

ProtoInstance697.fieldValue[0] = fieldValue698;

let fieldValue699 = browser.currentScene.createNode("fieldValue");
fieldValue699.name = "translation";
fieldValue699.value = "-0.1679999977350235 1.1297999620437622 -0.10620000213384628";
ProtoInstance697.fieldValue[1] = fieldValue699;

fieldValue591.children[35] = ProtoInstance697;

let ProtoInstance700 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance700.name = "Site";
ProtoInstance700.DEF = "hanim_r_radiale";
let fieldValue701 = browser.currentScene.createNode("fieldValue");
fieldValue701.name = "name";
fieldValue701.value = "r_radiale";
ProtoInstance700.fieldValue = new MFNode();

ProtoInstance700.fieldValue[0] = fieldValue701;

let fieldValue702 = browser.currentScene.createNode("fieldValue");
fieldValue702.name = "translation";
fieldValue702.value = "-0.21299999952316284 1.1304999589920044 -0.10909999907016754";
ProtoInstance700.fieldValue[1] = fieldValue702;

fieldValue591.children[36] = ProtoInstance700;

let ProtoInstance703 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance703.name = "Site";
ProtoInstance703.DEF = "hanim_r_metacarpal_phalanx_2";
let fieldValue704 = browser.currentScene.createNode("fieldValue");
fieldValue704.name = "name";
fieldValue704.value = "r_metacarpal_phalanx_2";
ProtoInstance703.fieldValue = new MFNode();

ProtoInstance703.fieldValue[0] = fieldValue704;

let fieldValue705 = browser.currentScene.createNode("fieldValue");
fieldValue705.name = "translation";
fieldValue705.value = "-0.19769999384880066 0.8169000148773193 -0.01769999973475933";
ProtoInstance703.fieldValue[1] = fieldValue705;

fieldValue591.children[37] = ProtoInstance703;

let ProtoInstance706 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance706.name = "Site";
ProtoInstance706.DEF = "hanim_r_dactylion";
let fieldValue707 = browser.currentScene.createNode("fieldValue");
fieldValue707.name = "name";
fieldValue707.value = "r_dactylion";
ProtoInstance706.fieldValue = new MFNode();

ProtoInstance706.fieldValue[0] = fieldValue707;

let fieldValue708 = browser.currentScene.createNode("fieldValue");
fieldValue708.name = "translation";
fieldValue708.value = "-0.1941000074148178 0.6772000193595886 -0.04230000078678131";
ProtoInstance706.fieldValue[1] = fieldValue708;

fieldValue591.children[38] = ProtoInstance706;

let ProtoInstance709 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance709.name = "Site";
ProtoInstance709.DEF = "hanim_r_ulnar_styloid";
let fieldValue710 = browser.currentScene.createNode("fieldValue");
fieldValue710.name = "name";
fieldValue710.value = "r_ulnar_styloid";
ProtoInstance709.fieldValue = new MFNode();

ProtoInstance709.fieldValue[0] = fieldValue710;

let fieldValue711 = browser.currentScene.createNode("fieldValue");
fieldValue711.name = "translation";
fieldValue711.value = "-0.21170000731945038 0.8561999797821045 -0.058400001376867294";
ProtoInstance709.fieldValue[1] = fieldValue711;

fieldValue591.children[39] = ProtoInstance709;

let ProtoInstance712 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance712.name = "Site";
ProtoInstance712.DEF = "hanim_r_metacarpal_phalanx_5";
let fieldValue713 = browser.currentScene.createNode("fieldValue");
fieldValue713.name = "name";
fieldValue713.value = "r_metacarpal_phalanx_5";
ProtoInstance712.fieldValue = new MFNode();

ProtoInstance712.fieldValue[0] = fieldValue713;

let fieldValue714 = browser.currentScene.createNode("fieldValue");
fieldValue714.name = "translation";
fieldValue714.value = "-0.19290000200271606 0.7889999747276306 -0.10639999806880951";
ProtoInstance712.fieldValue[1] = fieldValue714;

fieldValue591.children[40] = ProtoInstance712;

let ProtoInstance715 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance715.name = "Site";
ProtoInstance715.DEF = "hanim_l_acromion";
let fieldValue716 = browser.currentScene.createNode("fieldValue");
fieldValue716.name = "name";
fieldValue716.value = "l_acromion";
ProtoInstance715.fieldValue = new MFNode();

ProtoInstance715.fieldValue[0] = fieldValue716;

let fieldValue717 = browser.currentScene.createNode("fieldValue");
fieldValue717.name = "translation";
fieldValue717.value = "0.20319999754428864 1.4759999513626099 -0.04899999871850014";
ProtoInstance715.fieldValue[1] = fieldValue717;

fieldValue591.children[41] = ProtoInstance715;

let ProtoInstance718 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance718.name = "Site";
ProtoInstance718.DEF = "hanim_l_axilla_proximal";
let fieldValue719 = browser.currentScene.createNode("fieldValue");
fieldValue719.name = "name";
fieldValue719.value = "l_axilla_proximal";
ProtoInstance718.fieldValue = new MFNode();

ProtoInstance718.fieldValue[0] = fieldValue719;

let fieldValue720 = browser.currentScene.createNode("fieldValue");
fieldValue720.name = "translation";
fieldValue720.value = "0.1776999980211258 1.406499981880188 -0.007499999832361937";
ProtoInstance718.fieldValue[1] = fieldValue720;

fieldValue591.children[42] = ProtoInstance718;

let ProtoInstance721 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance721.name = "Site";
ProtoInstance721.DEF = "hanim_l_radial_styloid";
let fieldValue722 = browser.currentScene.createNode("fieldValue");
fieldValue722.name = "name";
fieldValue722.value = "l_radial_styloid";
ProtoInstance721.fieldValue = new MFNode();

ProtoInstance721.fieldValue[0] = fieldValue722;

let fieldValue723 = browser.currentScene.createNode("fieldValue");
fieldValue723.name = "translation";
fieldValue723.value = "0.19009999930858612 0.8644999861717224 -0.04149999842047691";
ProtoInstance721.fieldValue[1] = fieldValue723;

fieldValue591.children[43] = ProtoInstance721;

let ProtoInstance724 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance724.name = "Site";
ProtoInstance724.DEF = "hanim_l_axilla_distal";
let fieldValue725 = browser.currentScene.createNode("fieldValue");
fieldValue725.name = "name";
fieldValue725.value = "l_axilla_distal";
ProtoInstance724.fieldValue = new MFNode();

ProtoInstance724.fieldValue[0] = fieldValue725;

let fieldValue726 = browser.currentScene.createNode("fieldValue");
fieldValue726.name = "translation";
fieldValue726.value = "0.17059999704360962 1.4071999788284302 -0.08749999850988388";
ProtoInstance724.fieldValue[1] = fieldValue726;

fieldValue591.children[44] = ProtoInstance724;

let ProtoInstance727 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance727.name = "Site";
ProtoInstance727.DEF = "hanim_l_olecranon";
let fieldValue728 = browser.currentScene.createNode("fieldValue");
fieldValue728.name = "name";
fieldValue728.value = "l_olecranon";
ProtoInstance727.fieldValue = new MFNode();

ProtoInstance727.fieldValue[0] = fieldValue728;

let fieldValue729 = browser.currentScene.createNode("fieldValue");
fieldValue729.name = "translation";
fieldValue729.value = "-0.19619999825954437 1.1375000476837158 -0.11230000108480453";
ProtoInstance727.fieldValue[1] = fieldValue729;

fieldValue591.children[45] = ProtoInstance727;

let ProtoInstance730 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance730.name = "Site";
ProtoInstance730.DEF = "hanim_l_humeral_lateral_epicondyles";
let fieldValue731 = browser.currentScene.createNode("fieldValue");
fieldValue731.name = "name";
fieldValue731.value = "l_humeral_lateral_epicondyles";
ProtoInstance730.fieldValue = new MFNode();

ProtoInstance730.fieldValue[0] = fieldValue731;

let fieldValue732 = browser.currentScene.createNode("fieldValue");
fieldValue732.name = "translation";
fieldValue732.value = "0.2280000001192093 1.1482000350952148 -0.10999999940395355";
ProtoInstance730.fieldValue[1] = fieldValue732;

fieldValue591.children[46] = ProtoInstance730;

let ProtoInstance733 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance733.name = "Site";
ProtoInstance733.DEF = "hanim_l_humeral_medial_epicondyles";
let fieldValue734 = browser.currentScene.createNode("fieldValue");
fieldValue734.name = "name";
fieldValue734.value = "l_humeral_medial_epicondyles";
ProtoInstance733.fieldValue = new MFNode();

ProtoInstance733.fieldValue[0] = fieldValue734;

let fieldValue735 = browser.currentScene.createNode("fieldValue");
fieldValue735.name = "translation";
fieldValue735.value = "0.17350000143051147 1.1272000074386597 -0.11129999905824661";
ProtoInstance733.fieldValue[1] = fieldValue735;

fieldValue591.children[47] = ProtoInstance733;

let ProtoInstance736 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance736.name = "Site";
ProtoInstance736.DEF = "hanim_l_radiale";
let fieldValue737 = browser.currentScene.createNode("fieldValue");
fieldValue737.name = "name";
fieldValue737.value = "l_radiale";
ProtoInstance736.fieldValue = new MFNode();

ProtoInstance736.fieldValue[0] = fieldValue737;

let fieldValue738 = browser.currentScene.createNode("fieldValue");
fieldValue738.name = "translation";
fieldValue738.value = "0.21819999814033508 1.1211999654769897 -0.11670000106096268";
ProtoInstance736.fieldValue[1] = fieldValue738;

fieldValue591.children[48] = ProtoInstance736;

let ProtoInstance739 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance739.name = "Site";
ProtoInstance739.DEF = "hanim_l_metacarpal_phalanx_2";
let fieldValue740 = browser.currentScene.createNode("fieldValue");
fieldValue740.name = "name";
fieldValue740.value = "l_metacarpal_phalanx_2";
ProtoInstance739.fieldValue = new MFNode();

ProtoInstance739.fieldValue[0] = fieldValue740;

let fieldValue741 = browser.currentScene.createNode("fieldValue");
fieldValue741.name = "translation";
fieldValue741.value = "0.20090000331401825 0.8138999938964844 -0.02370000071823597";
ProtoInstance739.fieldValue[1] = fieldValue741;

fieldValue591.children[49] = ProtoInstance739;

let ProtoInstance742 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance742.name = "Site";
ProtoInstance742.DEF = "hanim_l_dactylion";
let fieldValue743 = browser.currentScene.createNode("fieldValue");
fieldValue743.name = "name";
fieldValue743.value = "l_dactylion";
ProtoInstance742.fieldValue = new MFNode();

ProtoInstance742.fieldValue[0] = fieldValue743;

let fieldValue744 = browser.currentScene.createNode("fieldValue");
fieldValue744.name = "translation";
fieldValue744.value = "0.20559999346733093 0.6743000149726868 -0.04820000007748604";
ProtoInstance742.fieldValue[1] = fieldValue744;

fieldValue591.children[50] = ProtoInstance742;

let ProtoInstance745 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance745.name = "Site";
ProtoInstance745.DEF = "hanim_l_ulnar_styloid";
let fieldValue746 = browser.currentScene.createNode("fieldValue");
fieldValue746.name = "name";
fieldValue746.value = "l_ulnar_styloid";
ProtoInstance745.fieldValue = new MFNode();

ProtoInstance745.fieldValue[0] = fieldValue746;

let fieldValue747 = browser.currentScene.createNode("fieldValue");
fieldValue747.name = "translation";
fieldValue747.value = "-0.2142000049352646 0.8529000282287598 -0.06480000168085098";
ProtoInstance745.fieldValue[1] = fieldValue747;

fieldValue591.children[51] = ProtoInstance745;

let ProtoInstance748 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance748.name = "Site";
ProtoInstance748.DEF = "hanim_l_metacarpal_phalanx_5";
let fieldValue749 = browser.currentScene.createNode("fieldValue");
fieldValue749.name = "name";
fieldValue749.value = "l_metacarpal_phalanx_5";
ProtoInstance748.fieldValue = new MFNode();

ProtoInstance748.fieldValue[0] = fieldValue749;

let fieldValue750 = browser.currentScene.createNode("fieldValue");
fieldValue750.name = "translation";
fieldValue750.value = "0.19290000200271606 0.7860000133514404 -0.11219999939203262";
ProtoInstance748.fieldValue[1] = fieldValue750;

fieldValue591.children[52] = ProtoInstance748;

let ProtoInstance751 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance751.name = "Site";
ProtoInstance751.DEF = "hanim_r_knee_crease";
let fieldValue752 = browser.currentScene.createNode("fieldValue");
fieldValue752.name = "name";
fieldValue752.value = "r_knee_crease";
ProtoInstance751.fieldValue = new MFNode();

ProtoInstance751.fieldValue[0] = fieldValue752;

let fieldValue753 = browser.currentScene.createNode("fieldValue");
fieldValue753.name = "translation";
fieldValue753.value = "-0.08250000327825546 0.49320000410079956 -0.032600000500679016";
ProtoInstance751.fieldValue[1] = fieldValue753;

fieldValue591.children[53] = ProtoInstance751;

let ProtoInstance754 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance754.name = "Site";
ProtoInstance754.DEF = "hanim_r_femoral_lateral_epicondyles";
let fieldValue755 = browser.currentScene.createNode("fieldValue");
fieldValue755.name = "name";
fieldValue755.value = "r_femoral_lateral_epicondyles";
ProtoInstance754.fieldValue = new MFNode();

ProtoInstance754.fieldValue[0] = fieldValue755;

let fieldValue756 = browser.currentScene.createNode("fieldValue");
fieldValue756.name = "translation";
fieldValue756.value = "-0.1421000063419342 0.4991999864578247 0.03099999949336052";
ProtoInstance754.fieldValue[1] = fieldValue756;

fieldValue591.children[54] = ProtoInstance754;

let ProtoInstance757 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance757.name = "Site";
ProtoInstance757.DEF = "hanim_r_femoral_medial_epicondyles";
let fieldValue758 = browser.currentScene.createNode("fieldValue");
fieldValue758.name = "name";
fieldValue758.value = "r_femoral_lateral_epicondyles";
ProtoInstance757.fieldValue = new MFNode();

ProtoInstance757.fieldValue[0] = fieldValue758;

let fieldValue759 = browser.currentScene.createNode("fieldValue");
fieldValue759.name = "translation";
fieldValue759.value = "-0.022099999710917473 0.5013999938964844 0.02889999933540821";
ProtoInstance757.fieldValue[1] = fieldValue759;

fieldValue591.children[55] = ProtoInstance757;

let ProtoInstance760 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance760.name = "Site";
ProtoInstance760.DEF = "hanim_r_tarsal_interphalangeal_phalanx_5";
let fieldValue761 = browser.currentScene.createNode("fieldValue");
fieldValue761.name = "name";
fieldValue761.value = "r_tarsal_interphalangeal_phalanx_5";
ProtoInstance760.fieldValue = new MFNode();

ProtoInstance760.fieldValue[0] = fieldValue761;

let fieldValue762 = browser.currentScene.createNode("fieldValue");
fieldValue762.name = "translation";
fieldValue762.value = "-0.15230000019073486 0.016599999740719795 0.08950000256299973";
ProtoInstance760.fieldValue[1] = fieldValue762;

fieldValue591.children[56] = ProtoInstance760;

let ProtoInstance763 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance763.name = "Site";
ProtoInstance763.DEF = "hanim_r_lateral_malleolus";
let fieldValue764 = browser.currentScene.createNode("fieldValue");
fieldValue764.name = "name";
fieldValue764.value = "r_lateral_malleolus";
ProtoInstance763.fieldValue = new MFNode();

ProtoInstance763.fieldValue[0] = fieldValue764;

let fieldValue765 = browser.currentScene.createNode("fieldValue");
fieldValue765.name = "translation";
fieldValue765.value = "-0.1005999967455864 0.0658000037074089 -0.10750000178813934";
ProtoInstance763.fieldValue[1] = fieldValue765;

fieldValue591.children[57] = ProtoInstance763;

let ProtoInstance766 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance766.name = "Site";
ProtoInstance766.DEF = "hanim_r_medial_malleolus";
let fieldValue767 = browser.currentScene.createNode("fieldValue");
fieldValue767.name = "name";
fieldValue767.value = "r_medial_malleolus";
ProtoInstance766.fieldValue = new MFNode();

ProtoInstance766.fieldValue[0] = fieldValue767;

let fieldValue768 = browser.currentScene.createNode("fieldValue");
fieldValue768.name = "translation";
fieldValue768.value = "-0.05909999832510948 0.07599999755620956 -0.09279999881982803";
ProtoInstance766.fieldValue[1] = fieldValue768;

fieldValue591.children[58] = ProtoInstance766;

let ProtoInstance769 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance769.name = "Site";
ProtoInstance769.DEF = "hanim_r_sphyrion";
let fieldValue770 = browser.currentScene.createNode("fieldValue");
fieldValue770.name = "name";
fieldValue770.value = "r_sphyrion";
ProtoInstance769.fieldValue = new MFNode();

ProtoInstance769.fieldValue[0] = fieldValue770;

let fieldValue771 = browser.currentScene.createNode("fieldValue");
fieldValue771.name = "translation";
fieldValue771.value = "-0.06030000001192093 0.061000000685453415 -0.10019999742507935";
ProtoInstance769.fieldValue[1] = fieldValue771;

fieldValue591.children[59] = ProtoInstance769;

let ProtoInstance772 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance772.name = "Site";
ProtoInstance772.DEF = "hanim_r_tarsal_interphalangeal_phalanx_1";
let fieldValue773 = browser.currentScene.createNode("fieldValue");
fieldValue773.name = "name";
fieldValue773.value = "r_tarsal_interphalangeal_phalanx_1";
ProtoInstance772.fieldValue = new MFNode();

ProtoInstance772.fieldValue[0] = fieldValue773;

let fieldValue774 = browser.currentScene.createNode("fieldValue");
fieldValue774.name = "translation";
fieldValue774.value = "-0.05209999904036522 0.026000000536441803 0.01269999984651804";
ProtoInstance772.fieldValue[1] = fieldValue774;

fieldValue591.children[60] = ProtoInstance772;

let ProtoInstance775 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance775.name = "Site";
ProtoInstance775.DEF = "hanim_r_calcaneus_posterior";
let fieldValue776 = browser.currentScene.createNode("fieldValue");
fieldValue776.name = "name";
fieldValue776.value = "r_calcaneus_posterior";
ProtoInstance775.fieldValue = new MFNode();

ProtoInstance775.fieldValue[0] = fieldValue776;

let fieldValue777 = browser.currentScene.createNode("fieldValue");
fieldValue777.name = "translation";
fieldValue777.value = "-0.06920000165700912 0.02969999983906746 -0.12210000306367874";
ProtoInstance775.fieldValue[1] = fieldValue777;

fieldValue591.children[61] = ProtoInstance775;

let ProtoInstance778 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance778.name = "Site";
ProtoInstance778.DEF = "hanim_r_tarsal_distal_phalanx_2";
let fieldValue779 = browser.currentScene.createNode("fieldValue");
fieldValue779.name = "name";
fieldValue779.value = "r_tarsal_distal_phalanx_2";
ProtoInstance778.fieldValue = new MFNode();

ProtoInstance778.fieldValue[0] = fieldValue779;

let fieldValue780 = browser.currentScene.createNode("fieldValue");
fieldValue780.name = "translation";
fieldValue780.value = "-0.08829999715089798 0.013399999588727951 0.13830000162124634";
ProtoInstance778.fieldValue[1] = fieldValue780;

fieldValue591.children[62] = ProtoInstance778;

let ProtoInstance781 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance781.name = "Site";
ProtoInstance781.DEF = "hanim_l_knee_crease";
let fieldValue782 = browser.currentScene.createNode("fieldValue");
fieldValue782.name = "name";
fieldValue782.value = "l_knee_crease";
ProtoInstance781.fieldValue = new MFNode();

ProtoInstance781.fieldValue[0] = fieldValue782;

let fieldValue783 = browser.currentScene.createNode("fieldValue");
fieldValue783.name = "translation";
fieldValue783.value = "0.09929999709129333 0.48809999227523804 -0.030899999663233757";
ProtoInstance781.fieldValue[1] = fieldValue783;

fieldValue591.children[63] = ProtoInstance781;

let ProtoInstance784 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance784.name = "Site";
ProtoInstance784.DEF = "hanim_l_femoral_lateral_epicondyles";
let fieldValue785 = browser.currentScene.createNode("fieldValue");
fieldValue785.name = "name";
fieldValue785.value = "l_femoral_lateral_epicondyles";
ProtoInstance784.fieldValue = new MFNode();

ProtoInstance784.fieldValue[0] = fieldValue785;

let fieldValue786 = browser.currentScene.createNode("fieldValue");
fieldValue786.name = "translation";
fieldValue786.value = "0.1597999930381775 0.4966999888420105 0.02969999983906746";
ProtoInstance784.fieldValue[1] = fieldValue786;

fieldValue591.children[64] = ProtoInstance784;

let ProtoInstance787 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance787.name = "Site";
ProtoInstance787.DEF = "hanim_l_femoral_medial_epicondyles";
let fieldValue788 = browser.currentScene.createNode("fieldValue");
fieldValue788.name = "name";
fieldValue788.value = "l_femoral_lateral_epicondyles";
ProtoInstance787.fieldValue = new MFNode();

ProtoInstance787.fieldValue[0] = fieldValue788;

let fieldValue789 = browser.currentScene.createNode("fieldValue");
fieldValue789.name = "translation";
fieldValue789.value = "0.039799999445676804 0.49459999799728394 0.030300000682473183";
ProtoInstance787.fieldValue[1] = fieldValue789;

fieldValue591.children[65] = ProtoInstance787;

let ProtoInstance790 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance790.name = "Site";
ProtoInstance790.DEF = "hanim_l_tarsal_interphalangeal_phalanx_5";
let fieldValue791 = browser.currentScene.createNode("fieldValue");
fieldValue791.name = "name";
fieldValue791.value = "l_tarsal_interphalangeal_phalanx_5";
ProtoInstance790.fieldValue = new MFNode();

ProtoInstance790.fieldValue[0] = fieldValue791;

let fieldValue792 = browser.currentScene.createNode("fieldValue");
fieldValue792.name = "translation";
fieldValue792.value = "0.18250000476837158 0.007000000216066837 0.09279999881982803";
ProtoInstance790.fieldValue[1] = fieldValue792;

fieldValue591.children[66] = ProtoInstance790;

let ProtoInstance793 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance793.name = "Site";
ProtoInstance793.DEF = "hanim_l_lateral_malleolus";
let fieldValue794 = browser.currentScene.createNode("fieldValue");
fieldValue794.name = "name";
fieldValue794.value = "l_lateral_malleolus";
ProtoInstance793.fieldValue = new MFNode();

ProtoInstance793.fieldValue[0] = fieldValue794;

let fieldValue795 = browser.currentScene.createNode("fieldValue");
fieldValue795.name = "translation";
fieldValue795.value = "0.13079999387264252 0.059700001031160355 -0.10320000350475311";
ProtoInstance793.fieldValue[1] = fieldValue795;

fieldValue591.children[67] = ProtoInstance793;

let ProtoInstance796 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance796.name = "Site";
ProtoInstance796.DEF = "hanim_l_medial_malleolus";
let fieldValue797 = browser.currentScene.createNode("fieldValue");
fieldValue797.name = "name";
fieldValue797.value = "l_medial_malleolus";
ProtoInstance796.fieldValue = new MFNode();

ProtoInstance796.fieldValue[0] = fieldValue797;

let fieldValue798 = browser.currentScene.createNode("fieldValue");
fieldValue798.name = "translation";
fieldValue798.value = "0.08900000154972076 0.07159999758005142 -0.08810000121593475";
ProtoInstance796.fieldValue[1] = fieldValue798;

fieldValue591.children[68] = ProtoInstance796;

let ProtoInstance799 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance799.name = "Site";
ProtoInstance799.DEF = "hanim_l_sphyrion";
let fieldValue800 = browser.currentScene.createNode("fieldValue");
fieldValue800.name = "name";
fieldValue800.value = "l_sphyrion";
ProtoInstance799.fieldValue = new MFNode();

ProtoInstance799.fieldValue[0] = fieldValue800;

let fieldValue801 = browser.currentScene.createNode("fieldValue");
fieldValue801.name = "translation";
fieldValue801.value = "0.08900000154972076 0.057500001043081284 -0.09430000185966492";
ProtoInstance799.fieldValue[1] = fieldValue801;

fieldValue591.children[69] = ProtoInstance799;

let ProtoInstance802 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance802.name = "Site";
ProtoInstance802.DEF = "hanim_l_tarsal_interphalangeal_phalanx_1";
let fieldValue803 = browser.currentScene.createNode("fieldValue");
fieldValue803.name = "name";
fieldValue803.value = "l_tarsal_interphalangeal_phalanx_1";
ProtoInstance802.fieldValue = new MFNode();

ProtoInstance802.fieldValue[0] = fieldValue803;

let fieldValue804 = browser.currentScene.createNode("fieldValue");
fieldValue804.name = "translation";
fieldValue804.value = "0.08160000294446945 0.02319999970495701 0.010599999688565731";
ProtoInstance802.fieldValue[1] = fieldValue804;

fieldValue591.children[70] = ProtoInstance802;

let ProtoInstance805 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance805.name = "Site";
ProtoInstance805.DEF = "hanim_l_calcaneus_posterior";
let fieldValue806 = browser.currentScene.createNode("fieldValue");
fieldValue806.name = "name";
fieldValue806.value = "l_calcaneus_posterior";
ProtoInstance805.fieldValue = new MFNode();

ProtoInstance805.fieldValue[0] = fieldValue806;

let fieldValue807 = browser.currentScene.createNode("fieldValue");
fieldValue807.name = "translation";
fieldValue807.value = "0.09740000218153 0.02590000070631504 -0.11710000038146973";
ProtoInstance805.fieldValue[1] = fieldValue807;

fieldValue591.children[71] = ProtoInstance805;

let ProtoInstance808 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance808.name = "Site";
ProtoInstance808.DEF = "hanim_l_tarsal_distal_phalanx_2";
let fieldValue809 = browser.currentScene.createNode("fieldValue");
fieldValue809.name = "name";
fieldValue809.value = "l_tarsal_distal_phalanx_2";
ProtoInstance808.fieldValue = new MFNode();

ProtoInstance808.fieldValue[0] = fieldValue809;

let fieldValue810 = browser.currentScene.createNode("fieldValue");
fieldValue810.name = "translation";
fieldValue810.value = "0.11949999630451202 0.007899999618530273 0.14329999685287476";
ProtoInstance808.fieldValue[1] = fieldValue810;

fieldValue591.children[72] = ProtoInstance808;

let ProtoInstance811 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance811.name = "Site";
ProtoInstance811.DEF = "hanim_crotch";
let fieldValue812 = browser.currentScene.createNode("fieldValue");
fieldValue812.name = "name";
fieldValue812.value = "crotch";
ProtoInstance811.fieldValue = new MFNode();

ProtoInstance811.fieldValue[0] = fieldValue812;

let fieldValue813 = browser.currentScene.createNode("fieldValue");
fieldValue813.name = "translation";
fieldValue813.value = "0.0034000000450760126 0.8266000151634216 0.025699999183416367";
ProtoInstance811.fieldValue[1] = fieldValue813;

fieldValue591.children[73] = ProtoInstance811;

let ProtoInstance814 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance814.name = "Site";
ProtoInstance814.DEF = "hanim_r_neck_base";
let fieldValue815 = browser.currentScene.createNode("fieldValue");
fieldValue815.name = "name";
fieldValue815.value = "r_neck_base";
ProtoInstance814.fieldValue = new MFNode();

ProtoInstance814.fieldValue[0] = fieldValue815;

let fieldValue816 = browser.currentScene.createNode("fieldValue");
fieldValue816.name = "translation";
fieldValue816.value = "-0.04190000146627426 1.5148999691009521 -0.02199999988079071";
ProtoInstance814.fieldValue[1] = fieldValue816;

fieldValue591.children[74] = ProtoInstance814;

let ProtoInstance817 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance817.name = "Site";
ProtoInstance817.DEF = "hanim_l_neck_base";
let fieldValue818 = browser.currentScene.createNode("fieldValue");
fieldValue818.name = "name";
fieldValue818.value = "l_neck_base";
ProtoInstance817.fieldValue = new MFNode();

ProtoInstance817.fieldValue[0] = fieldValue818;

let fieldValue819 = browser.currentScene.createNode("fieldValue");
fieldValue819.name = "translation";
fieldValue819.value = "0.06459999829530716 1.5140999555587769 -0.03799999877810478";
ProtoInstance817.fieldValue[1] = fieldValue819;

fieldValue591.children[75] = ProtoInstance817;

let ProtoInstance820 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance820.name = "Site";
ProtoInstance820.DEF = "hanim_navel";
let fieldValue821 = browser.currentScene.createNode("fieldValue");
fieldValue821.name = "name";
fieldValue821.value = "navel";
ProtoInstance820.fieldValue = new MFNode();

ProtoInstance820.fieldValue[0] = fieldValue821;

let fieldValue822 = browser.currentScene.createNode("fieldValue");
fieldValue822.name = "translation";
fieldValue822.value = "0.006899999920278788 1.09660005569458 0.10170000046491623";
ProtoInstance820.fieldValue[1] = fieldValue822;

fieldValue591.children[76] = ProtoInstance820;

ProtoInstance589.fieldValue[1] = fieldValue591;

fieldValue588.children = new MFNode();

fieldValue588.children[0] = ProtoInstance589;

ProtoInstance107.fieldValue[2] = fieldValue588;

let fieldValue823 = browser.currentScene.createNode("fieldValue");
fieldValue823.name = "sites";
let ProtoInstance824 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance824.name = "Site";
ProtoInstance824.DEF = "hanim_skull_tip";
let fieldValue825 = browser.currentScene.createNode("fieldValue");
fieldValue825.name = "name";
fieldValue825.value = "skull_tip";
ProtoInstance824.fieldValue = new MFNode();

ProtoInstance824.fieldValue[0] = fieldValue825;

let fieldValue826 = browser.currentScene.createNode("fieldValue");
fieldValue826.name = "translation";
fieldValue826.value = "0.004999999888241291 1.7503999471664429 0.005499999970197678";
ProtoInstance824.fieldValue[1] = fieldValue826;

fieldValue823.children = new MFNode();

fieldValue823.children[0] = ProtoInstance824;

let ProtoInstance827 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance827.name = "Site";
ProtoInstance827.DEF = "hanim_sellion";
let fieldValue828 = browser.currentScene.createNode("fieldValue");
fieldValue828.name = "name";
fieldValue828.value = "sellion";
ProtoInstance827.fieldValue = new MFNode();

ProtoInstance827.fieldValue[0] = fieldValue828;

let fieldValue829 = browser.currentScene.createNode("fieldValue");
fieldValue829.name = "translation";
fieldValue829.value = "0.005799999926239252 1.631600022315979 0.0851999968290329";
ProtoInstance827.fieldValue[1] = fieldValue829;

fieldValue823.children[1] = ProtoInstance827;

let ProtoInstance830 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance830.name = "Site";
ProtoInstance830.DEF = "hanim_r_infraorbitale";
let fieldValue831 = browser.currentScene.createNode("fieldValue");
fieldValue831.name = "name";
fieldValue831.value = "r_infraorbitale";
ProtoInstance830.fieldValue = new MFNode();

ProtoInstance830.fieldValue[0] = fieldValue831;

let fieldValue832 = browser.currentScene.createNode("fieldValue");
fieldValue832.name = "translation";
fieldValue832.value = "-0.02370000071823597 1.6171000003814697 0.07519999891519547";
ProtoInstance830.fieldValue[1] = fieldValue832;

fieldValue823.children[2] = ProtoInstance830;

let ProtoInstance833 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance833.name = "Site";
ProtoInstance833.DEF = "hanim_l_infraorbitale";
let fieldValue834 = browser.currentScene.createNode("fieldValue");
fieldValue834.name = "name";
fieldValue834.value = "l_infraorbitale";
ProtoInstance833.fieldValue = new MFNode();

ProtoInstance833.fieldValue[0] = fieldValue834;

let fieldValue835 = browser.currentScene.createNode("fieldValue");
fieldValue835.name = "translation";
fieldValue835.value = "0.0340999998152256 1.6171000003814697 0.07519999891519547";
ProtoInstance833.fieldValue[1] = fieldValue835;

fieldValue823.children[3] = ProtoInstance833;

let ProtoInstance836 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance836.name = "Site";
ProtoInstance836.DEF = "hanim_supramenton";
let fieldValue837 = browser.currentScene.createNode("fieldValue");
fieldValue837.name = "name";
fieldValue837.value = "supramenton";
ProtoInstance836.fieldValue = new MFNode();

ProtoInstance836.fieldValue[0] = fieldValue837;

let fieldValue838 = browser.currentScene.createNode("fieldValue");
fieldValue838.name = "translation";
fieldValue838.value = "0.006099999882280827 1.5410000085830688 0.08049999922513962";
ProtoInstance836.fieldValue[1] = fieldValue838;

fieldValue823.children[4] = ProtoInstance836;

let ProtoInstance839 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance839.name = "Site";
ProtoInstance839.DEF = "hanim_r_tragion";
let fieldValue840 = browser.currentScene.createNode("fieldValue");
fieldValue840.name = "name";
fieldValue840.value = "r_tragion";
ProtoInstance839.fieldValue = new MFNode();

ProtoInstance839.fieldValue[0] = fieldValue840;

let fieldValue841 = browser.currentScene.createNode("fieldValue");
fieldValue841.name = "translation";
fieldValue841.value = "-0.06459999829530716 1.6346999406814575 0.03020000085234642";
ProtoInstance839.fieldValue[1] = fieldValue841;

fieldValue823.children[5] = ProtoInstance839;

let ProtoInstance842 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance842.name = "Site";
ProtoInstance842.DEF = "hanim_r_gonion";
let fieldValue843 = browser.currentScene.createNode("fieldValue");
fieldValue843.name = "name";
fieldValue843.value = "r_gonion";
ProtoInstance842.fieldValue = new MFNode();

ProtoInstance842.fieldValue[0] = fieldValue843;

let fieldValue844 = browser.currentScene.createNode("fieldValue");
fieldValue844.name = "translation";
fieldValue844.value = "-0.052000001072883606 1.552899956703186 0.034699998795986176";
ProtoInstance842.fieldValue[1] = fieldValue844;

fieldValue823.children[6] = ProtoInstance842;

let ProtoInstance845 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance845.name = "Site";
ProtoInstance845.DEF = "hanim_l_tragion";
let fieldValue846 = browser.currentScene.createNode("fieldValue");
fieldValue846.name = "name";
fieldValue846.value = "l_tragion";
ProtoInstance845.fieldValue = new MFNode();

ProtoInstance845.fieldValue[0] = fieldValue846;

let fieldValue847 = browser.currentScene.createNode("fieldValue");
fieldValue847.name = "translation";
fieldValue847.value = "0.0738999992609024 1.6347999572753906 0.028200000524520874";
ProtoInstance845.fieldValue[1] = fieldValue847;

fieldValue823.children[7] = ProtoInstance845;

let ProtoInstance848 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance848.name = "Site";
ProtoInstance848.DEF = "hanim_l_gonion";
let fieldValue849 = browser.currentScene.createNode("fieldValue");
fieldValue849.name = "name";
fieldValue849.value = "l_gonion";
ProtoInstance848.fieldValue = new MFNode();

ProtoInstance848.fieldValue[0] = fieldValue849;

let fieldValue850 = browser.currentScene.createNode("fieldValue");
fieldValue850.name = "translation";
fieldValue850.value = "0.06310000270605087 1.5529999732971191 0.032999999821186066";
ProtoInstance848.fieldValue[1] = fieldValue850;

fieldValue823.children[8] = ProtoInstance848;

let ProtoInstance851 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance851.name = "Site";
ProtoInstance851.DEF = "hanim_nuchale";
let fieldValue852 = browser.currentScene.createNode("fieldValue");
fieldValue852.name = "name";
fieldValue852.value = "nuchale";
ProtoInstance851.fieldValue = new MFNode();

ProtoInstance851.fieldValue[0] = fieldValue852;

let fieldValue853 = browser.currentScene.createNode("fieldValue");
fieldValue853.name = "translation";
fieldValue853.value = "0.0038999998942017555 1.5972000360488892 -0.07959999889135361";
ProtoInstance851.fieldValue[1] = fieldValue853;

fieldValue823.children[9] = ProtoInstance851;

let ProtoInstance854 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance854.name = "Site";
ProtoInstance854.DEF = "hanim_r_clavicale";
let fieldValue855 = browser.currentScene.createNode("fieldValue");
fieldValue855.name = "name";
fieldValue855.value = "r_clavicale";
ProtoInstance854.fieldValue = new MFNode();

ProtoInstance854.fieldValue[0] = fieldValue855;

let fieldValue856 = browser.currentScene.createNode("fieldValue");
fieldValue856.name = "translation";
fieldValue856.value = "-0.011500000022351742 1.4943000078201294 0.03999999910593033";
ProtoInstance854.fieldValue[1] = fieldValue856;

fieldValue823.children[10] = ProtoInstance854;

let ProtoInstance857 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance857.name = "Site";
ProtoInstance857.DEF = "hanim_suprasternale";
let fieldValue858 = browser.currentScene.createNode("fieldValue");
fieldValue858.name = "name";
fieldValue858.value = "suprasternale";
ProtoInstance857.fieldValue = new MFNode();

ProtoInstance857.fieldValue[0] = fieldValue858;

let fieldValue859 = browser.currentScene.createNode("fieldValue");
fieldValue859.name = "translation";
fieldValue859.value = "0.00839999970048666 1.4714000225067139 0.05510000139474869";
ProtoInstance857.fieldValue[1] = fieldValue859;

fieldValue823.children[11] = ProtoInstance857;

let ProtoInstance860 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance860.name = "Site";
ProtoInstance860.DEF = "hanim_l_clavicale";
let fieldValue861 = browser.currentScene.createNode("fieldValue");
fieldValue861.name = "name";
fieldValue861.value = "l_clavicale";
ProtoInstance860.fieldValue = new MFNode();

ProtoInstance860.fieldValue[0] = fieldValue861;

let fieldValue862 = browser.currentScene.createNode("fieldValue");
fieldValue862.name = "translation";
fieldValue862.value = "0.02710000053048134 1.4943000078201294 0.039400000125169754";
ProtoInstance860.fieldValue[1] = fieldValue862;

fieldValue823.children[12] = ProtoInstance860;

let ProtoInstance863 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance863.name = "Site";
ProtoInstance863.DEF = "hanim_r_thelion";
let fieldValue864 = browser.currentScene.createNode("fieldValue");
fieldValue864.name = "name";
fieldValue864.value = "r_thelion";
ProtoInstance863.fieldValue = new MFNode();

ProtoInstance863.fieldValue[0] = fieldValue864;

let fieldValue865 = browser.currentScene.createNode("fieldValue");
fieldValue865.name = "translation";
fieldValue865.value = "-0.07360000163316727 1.3385000228881836 0.1216999962925911";
ProtoInstance863.fieldValue[1] = fieldValue865;

fieldValue823.children[13] = ProtoInstance863;

let ProtoInstance866 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance866.name = "Site";
ProtoInstance866.DEF = "hanim_l_thelion";
let fieldValue867 = browser.currentScene.createNode("fieldValue");
fieldValue867.name = "name";
fieldValue867.value = "l_thelion";
ProtoInstance866.fieldValue = new MFNode();

ProtoInstance866.fieldValue[0] = fieldValue867;

let fieldValue868 = browser.currentScene.createNode("fieldValue");
fieldValue868.name = "translation";
fieldValue868.value = "0.09179999679327011 1.3381999731063843 0.11919999867677689";
ProtoInstance866.fieldValue[1] = fieldValue868;

fieldValue823.children[14] = ProtoInstance866;

let ProtoInstance869 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance869.name = "Site";
ProtoInstance869.DEF = "hanim_substernale";
let fieldValue870 = browser.currentScene.createNode("fieldValue");
fieldValue870.name = "name";
fieldValue870.value = "substernale";
ProtoInstance869.fieldValue = new MFNode();

ProtoInstance869.fieldValue[0] = fieldValue870;

let fieldValue871 = browser.currentScene.createNode("fieldValue");
fieldValue871.name = "translation";
fieldValue871.value = "0.008500000461935997 1.2994999885559082 0.11469999700784683";
ProtoInstance869.fieldValue[1] = fieldValue871;

fieldValue823.children[15] = ProtoInstance869;

let ProtoInstance872 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance872.name = "Site";
ProtoInstance872.DEF = "hanim_r_rib10";
let fieldValue873 = browser.currentScene.createNode("fieldValue");
fieldValue873.name = "name";
fieldValue873.value = "r_rib10";
ProtoInstance872.fieldValue = new MFNode();

ProtoInstance872.fieldValue[0] = fieldValue873;

let fieldValue874 = browser.currentScene.createNode("fieldValue");
fieldValue874.name = "translation";
fieldValue874.value = "-0.07109999656677246 1.194100022315979 0.10159999877214432";
ProtoInstance872.fieldValue[1] = fieldValue874;

fieldValue823.children[16] = ProtoInstance872;

let ProtoInstance875 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance875.name = "Site";
ProtoInstance875.DEF = "hanim_r_asis";
let fieldValue876 = browser.currentScene.createNode("fieldValue");
fieldValue876.name = "name";
fieldValue876.value = "r_asis";
ProtoInstance875.fieldValue = new MFNode();

ProtoInstance875.fieldValue[0] = fieldValue876;

let fieldValue877 = browser.currentScene.createNode("fieldValue");
fieldValue877.name = "translation";
fieldValue877.value = "-0.08869999647140503 1.0020999908447266 0.1111999973654747";
ProtoInstance875.fieldValue[1] = fieldValue877;

fieldValue823.children[17] = ProtoInstance875;

let ProtoInstance878 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance878.name = "Site";
ProtoInstance878.DEF = "hanim_l_rib10";
let fieldValue879 = browser.currentScene.createNode("fieldValue");
fieldValue879.name = "name";
fieldValue879.value = "l_rib10";
ProtoInstance878.fieldValue = new MFNode();

ProtoInstance878.fieldValue[0] = fieldValue879;

let fieldValue880 = browser.currentScene.createNode("fieldValue");
fieldValue880.name = "translation";
fieldValue880.value = "0.08709999918937683 1.1924999952316284 0.09920000284910202";
ProtoInstance878.fieldValue[1] = fieldValue880;

fieldValue823.children[18] = ProtoInstance878;

let ProtoInstance881 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance881.name = "Site";
ProtoInstance881.DEF = "hanim_l_asis";
let fieldValue882 = browser.currentScene.createNode("fieldValue");
fieldValue882.name = "name";
fieldValue882.value = "l_asis";
ProtoInstance881.fieldValue = new MFNode();

ProtoInstance881.fieldValue[0] = fieldValue882;

let fieldValue883 = browser.currentScene.createNode("fieldValue");
fieldValue883.name = "translation";
fieldValue883.value = "0.0925000011920929 0.9983000159263611 0.10520000010728836";
ProtoInstance881.fieldValue[1] = fieldValue883;

fieldValue823.children[19] = ProtoInstance881;

let ProtoInstance884 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance884.name = "Site";
ProtoInstance884.DEF = "hanim_r_iliocristale";
let fieldValue885 = browser.currentScene.createNode("fieldValue");
fieldValue885.name = "name";
fieldValue885.value = "r_iliocristale";
ProtoInstance884.fieldValue = new MFNode();

ProtoInstance884.fieldValue[0] = fieldValue885;

let fieldValue886 = browser.currentScene.createNode("fieldValue");
fieldValue886.name = "translation";
fieldValue886.value = "-0.1525000035762787 1.0628000497817993 0.0035000001080334187";
ProtoInstance884.fieldValue[1] = fieldValue886;

fieldValue823.children[20] = ProtoInstance884;

let ProtoInstance887 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance887.name = "Site";
ProtoInstance887.DEF = "hanim_r_trochanterion";
let fieldValue888 = browser.currentScene.createNode("fieldValue");
fieldValue888.name = "name";
fieldValue888.value = "r_trochanterion";
ProtoInstance887.fieldValue = new MFNode();

ProtoInstance887.fieldValue[0] = fieldValue888;

let fieldValue889 = browser.currentScene.createNode("fieldValue");
fieldValue889.name = "translation";
fieldValue889.value = "-0.1688999980688095 0.8418999910354614 0.03519999980926514";
ProtoInstance887.fieldValue[1] = fieldValue889;

fieldValue823.children[21] = ProtoInstance887;

let ProtoInstance890 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance890.name = "Site";
ProtoInstance890.DEF = "hanim_l_iliocristale";
let fieldValue891 = browser.currentScene.createNode("fieldValue");
fieldValue891.name = "name";
fieldValue891.value = "l_iliocristale";
ProtoInstance890.fieldValue = new MFNode();

ProtoInstance890.fieldValue[0] = fieldValue891;

let fieldValue892 = browser.currentScene.createNode("fieldValue");
fieldValue892.name = "translation";
fieldValue892.value = "0.16120000183582306 1.0536999702453613 0.0007999999797903001";
ProtoInstance890.fieldValue[1] = fieldValue892;

fieldValue823.children[22] = ProtoInstance890;

let ProtoInstance893 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance893.name = "Site";
ProtoInstance893.DEF = "hanim_l_trochanterion";
let fieldValue894 = browser.currentScene.createNode("fieldValue");
fieldValue894.name = "name";
fieldValue894.value = "l_trochanterion";
ProtoInstance893.fieldValue = new MFNode();

ProtoInstance893.fieldValue[0] = fieldValue894;

let fieldValue895 = browser.currentScene.createNode("fieldValue");
fieldValue895.name = "translation";
fieldValue895.value = "0.16769999265670776 0.8335999846458435 0.030300000682473183";
ProtoInstance893.fieldValue[1] = fieldValue895;

fieldValue823.children[23] = ProtoInstance893;

let ProtoInstance896 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance896.name = "Site";
ProtoInstance896.DEF = "hanim_cervicale";
let fieldValue897 = browser.currentScene.createNode("fieldValue");
fieldValue897.name = "name";
fieldValue897.value = "cervicale";
ProtoInstance896.fieldValue = new MFNode();

ProtoInstance896.fieldValue[0] = fieldValue897;

let fieldValue898 = browser.currentScene.createNode("fieldValue");
fieldValue898.name = "translation";
fieldValue898.value = "0.006399999838322401 1.5199999809265137 -0.08150000125169754";
ProtoInstance896.fieldValue[1] = fieldValue898;

fieldValue823.children[24] = ProtoInstance896;

let ProtoInstance899 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance899.name = "Site";
ProtoInstance899.DEF = "hanim_spine_2_lower_back";
let fieldValue900 = browser.currentScene.createNode("fieldValue");
fieldValue900.name = "name";
fieldValue900.value = "spine_2_lower_back";
ProtoInstance899.fieldValue = new MFNode();

ProtoInstance899.fieldValue[0] = fieldValue900;

let fieldValue901 = browser.currentScene.createNode("fieldValue");
fieldValue901.name = "translation";
fieldValue901.value = "0.004900000058114529 1.1907999515533447 -0.11129999905824661";
ProtoInstance899.fieldValue[1] = fieldValue901;

fieldValue823.children[25] = ProtoInstance899;

let ProtoInstance902 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance902.name = "Site";
ProtoInstance902.DEF = "hanim_r_psis";
let fieldValue903 = browser.currentScene.createNode("fieldValue");
fieldValue903.name = "name";
fieldValue903.value = "r_psis";
ProtoInstance902.fieldValue = new MFNode();

ProtoInstance902.fieldValue[0] = fieldValue903;

let fieldValue904 = browser.currentScene.createNode("fieldValue");
fieldValue904.name = "translation";
fieldValue904.value = "-0.07159999758005142 1.0190000534057617 -0.11379999667406082";
ProtoInstance902.fieldValue[1] = fieldValue904;

fieldValue823.children[26] = ProtoInstance902;

let ProtoInstance905 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance905.name = "Site";
ProtoInstance905.DEF = "hanim_l_psis";
let fieldValue906 = browser.currentScene.createNode("fieldValue");
fieldValue906.name = "name";
fieldValue906.value = "l_psis";
ProtoInstance905.fieldValue = new MFNode();

ProtoInstance905.fieldValue[0] = fieldValue906;

let fieldValue907 = browser.currentScene.createNode("fieldValue");
fieldValue907.name = "translation";
fieldValue907.value = "0.07739999890327454 1.0190000534057617 -0.11509999632835388";
ProtoInstance905.fieldValue[1] = fieldValue907;

fieldValue823.children[27] = ProtoInstance905;

let ProtoInstance908 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance908.name = "Site";
ProtoInstance908.DEF = "hanim_waist_preferred_posterior";
let fieldValue909 = browser.currentScene.createNode("fieldValue");
fieldValue909.name = "name";
fieldValue909.value = "waist_preferred_posterior";
ProtoInstance908.fieldValue = new MFNode();

ProtoInstance908.fieldValue[0] = fieldValue909;

let fieldValue910 = browser.currentScene.createNode("fieldValue");
fieldValue910.name = "translation";
fieldValue910.value = "0.28999999165534973 1.0915000438690186 -0.10909999907016754";
ProtoInstance908.fieldValue[1] = fieldValue910;

fieldValue823.children[28] = ProtoInstance908;

let ProtoInstance911 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance911.name = "Site";
ProtoInstance911.DEF = "hanim_r_acromion";
let fieldValue912 = browser.currentScene.createNode("fieldValue");
fieldValue912.name = "name";
fieldValue912.value = "r_acromion";
ProtoInstance911.fieldValue = new MFNode();

ProtoInstance911.fieldValue[0] = fieldValue912;

let fieldValue913 = browser.currentScene.createNode("fieldValue");
fieldValue913.name = "translation";
fieldValue913.value = "-0.19050000607967377 1.479099988937378 -0.04309999942779541";
ProtoInstance911.fieldValue[1] = fieldValue913;

fieldValue823.children[29] = ProtoInstance911;

let ProtoInstance914 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance914.name = "Site";
ProtoInstance914.DEF = "hanim_r_axilla_proximal";
let fieldValue915 = browser.currentScene.createNode("fieldValue");
fieldValue915.name = "name";
fieldValue915.value = "r_axilla_proximal";
ProtoInstance914.fieldValue = new MFNode();

ProtoInstance914.fieldValue[0] = fieldValue915;

let fieldValue916 = browser.currentScene.createNode("fieldValue");
fieldValue916.name = "translation";
fieldValue916.value = "-0.16259999573230743 1.4071999788284302 -0.003100000089034438";
ProtoInstance914.fieldValue[1] = fieldValue916;

fieldValue823.children[30] = ProtoInstance914;

let ProtoInstance917 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance917.name = "Site";
ProtoInstance917.DEF = "hanim_r_radial_styloid";
let fieldValue918 = browser.currentScene.createNode("fieldValue");
fieldValue918.name = "name";
fieldValue918.value = "r_radial_styloid";
ProtoInstance917.fieldValue = new MFNode();

ProtoInstance917.fieldValue[0] = fieldValue918;

let fieldValue919 = browser.currentScene.createNode("fieldValue");
fieldValue919.name = "translation";
fieldValue919.value = "-0.188400000333786 0.8676000237464905 -0.035999998450279236";
ProtoInstance917.fieldValue[1] = fieldValue919;

fieldValue823.children[31] = ProtoInstance917;

let ProtoInstance920 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance920.name = "Site";
ProtoInstance920.DEF = "hanim_r_axilla_distal";
let fieldValue921 = browser.currentScene.createNode("fieldValue");
fieldValue921.name = "name";
fieldValue921.value = "r_axilla_distal";
ProtoInstance920.fieldValue = new MFNode();

ProtoInstance920.fieldValue[0] = fieldValue921;

let fieldValue922 = browser.currentScene.createNode("fieldValue");
fieldValue922.name = "translation";
fieldValue922.value = "-0.16030000150203705 1.4098000526428223 -0.08259999752044678";
ProtoInstance920.fieldValue[1] = fieldValue922;

fieldValue823.children[32] = ProtoInstance920;

let ProtoInstance923 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance923.name = "Site";
ProtoInstance923.DEF = "hanim_r_olecranon";
let fieldValue924 = browser.currentScene.createNode("fieldValue");
fieldValue924.name = "name";
fieldValue924.value = "r_olecranon";
ProtoInstance923.fieldValue = new MFNode();

ProtoInstance923.fieldValue[0] = fieldValue924;

let fieldValue925 = browser.currentScene.createNode("fieldValue");
fieldValue925.name = "translation";
fieldValue925.value = "-0.1906999945640564 1.1404999494552612 -0.10649999976158142";
ProtoInstance923.fieldValue[1] = fieldValue925;

fieldValue823.children[33] = ProtoInstance923;

let ProtoInstance926 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance926.name = "Site";
ProtoInstance926.DEF = "hanim_r_humeral_lateral_epicondyles";
let fieldValue927 = browser.currentScene.createNode("fieldValue");
fieldValue927.name = "name";
fieldValue927.value = "r_humeral_lateral_epicondyles";
ProtoInstance926.fieldValue = new MFNode();

ProtoInstance926.fieldValue[0] = fieldValue927;

let fieldValue928 = browser.currentScene.createNode("fieldValue");
fieldValue928.name = "translation";
fieldValue928.value = "-0.2223999947309494 1.1517000198364258 -0.10329999774694443";
ProtoInstance926.fieldValue[1] = fieldValue928;

fieldValue823.children[34] = ProtoInstance926;

let ProtoInstance929 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance929.name = "Site";
ProtoInstance929.DEF = "hanim_r_humeral_medial_epicondyles";
let fieldValue930 = browser.currentScene.createNode("fieldValue");
fieldValue930.name = "name";
fieldValue930.value = "r_humeral_medial_epicondyles";
ProtoInstance929.fieldValue = new MFNode();

ProtoInstance929.fieldValue[0] = fieldValue930;

let fieldValue931 = browser.currentScene.createNode("fieldValue");
fieldValue931.name = "translation";
fieldValue931.value = "-0.1679999977350235 1.1297999620437622 -0.10620000213384628";
ProtoInstance929.fieldValue[1] = fieldValue931;

fieldValue823.children[35] = ProtoInstance929;

let ProtoInstance932 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance932.name = "Site";
ProtoInstance932.DEF = "hanim_r_radiale";
let fieldValue933 = browser.currentScene.createNode("fieldValue");
fieldValue933.name = "name";
fieldValue933.value = "r_radiale";
ProtoInstance932.fieldValue = new MFNode();

ProtoInstance932.fieldValue[0] = fieldValue933;

let fieldValue934 = browser.currentScene.createNode("fieldValue");
fieldValue934.name = "translation";
fieldValue934.value = "-0.21299999952316284 1.1304999589920044 -0.10909999907016754";
ProtoInstance932.fieldValue[1] = fieldValue934;

fieldValue823.children[36] = ProtoInstance932;

let ProtoInstance935 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance935.name = "Site";
ProtoInstance935.DEF = "hanim_r_metacarpal_phalanx_2";
let fieldValue936 = browser.currentScene.createNode("fieldValue");
fieldValue936.name = "name";
fieldValue936.value = "r_metacarpal_phalanx_2";
ProtoInstance935.fieldValue = new MFNode();

ProtoInstance935.fieldValue[0] = fieldValue936;

let fieldValue937 = browser.currentScene.createNode("fieldValue");
fieldValue937.name = "translation";
fieldValue937.value = "-0.19769999384880066 0.8169000148773193 -0.01769999973475933";
ProtoInstance935.fieldValue[1] = fieldValue937;

fieldValue823.children[37] = ProtoInstance935;

let ProtoInstance938 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance938.name = "Site";
ProtoInstance938.DEF = "hanim_r_dactylion";
let fieldValue939 = browser.currentScene.createNode("fieldValue");
fieldValue939.name = "name";
fieldValue939.value = "r_dactylion";
ProtoInstance938.fieldValue = new MFNode();

ProtoInstance938.fieldValue[0] = fieldValue939;

let fieldValue940 = browser.currentScene.createNode("fieldValue");
fieldValue940.name = "translation";
fieldValue940.value = "-0.1941000074148178 0.6772000193595886 -0.04230000078678131";
ProtoInstance938.fieldValue[1] = fieldValue940;

fieldValue823.children[38] = ProtoInstance938;

let ProtoInstance941 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance941.name = "Site";
ProtoInstance941.DEF = "hanim_r_ulnar_styloid";
let fieldValue942 = browser.currentScene.createNode("fieldValue");
fieldValue942.name = "name";
fieldValue942.value = "r_ulnar_styloid";
ProtoInstance941.fieldValue = new MFNode();

ProtoInstance941.fieldValue[0] = fieldValue942;

let fieldValue943 = browser.currentScene.createNode("fieldValue");
fieldValue943.name = "translation";
fieldValue943.value = "-0.21170000731945038 0.8561999797821045 -0.058400001376867294";
ProtoInstance941.fieldValue[1] = fieldValue943;

fieldValue823.children[39] = ProtoInstance941;

let ProtoInstance944 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance944.name = "Site";
ProtoInstance944.DEF = "hanim_r_metacarpal_phalanx_5";
let fieldValue945 = browser.currentScene.createNode("fieldValue");
fieldValue945.name = "name";
fieldValue945.value = "r_metacarpal_phalanx_5";
ProtoInstance944.fieldValue = new MFNode();

ProtoInstance944.fieldValue[0] = fieldValue945;

let fieldValue946 = browser.currentScene.createNode("fieldValue");
fieldValue946.name = "translation";
fieldValue946.value = "-0.19290000200271606 0.7889999747276306 -0.10639999806880951";
ProtoInstance944.fieldValue[1] = fieldValue946;

fieldValue823.children[40] = ProtoInstance944;

let ProtoInstance947 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance947.name = "Site";
ProtoInstance947.DEF = "hanim_l_acromion";
let fieldValue948 = browser.currentScene.createNode("fieldValue");
fieldValue948.name = "name";
fieldValue948.value = "l_acromion";
ProtoInstance947.fieldValue = new MFNode();

ProtoInstance947.fieldValue[0] = fieldValue948;

let fieldValue949 = browser.currentScene.createNode("fieldValue");
fieldValue949.name = "translation";
fieldValue949.value = "0.20319999754428864 1.4759999513626099 -0.04899999871850014";
ProtoInstance947.fieldValue[1] = fieldValue949;

fieldValue823.children[41] = ProtoInstance947;

let ProtoInstance950 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance950.name = "Site";
ProtoInstance950.DEF = "hanim_l_axilla_proximal";
let fieldValue951 = browser.currentScene.createNode("fieldValue");
fieldValue951.name = "name";
fieldValue951.value = "l_axilla_proximal";
ProtoInstance950.fieldValue = new MFNode();

ProtoInstance950.fieldValue[0] = fieldValue951;

let fieldValue952 = browser.currentScene.createNode("fieldValue");
fieldValue952.name = "translation";
fieldValue952.value = "0.1776999980211258 1.406499981880188 -0.007499999832361937";
ProtoInstance950.fieldValue[1] = fieldValue952;

fieldValue823.children[42] = ProtoInstance950;

let ProtoInstance953 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance953.name = "Site";
ProtoInstance953.DEF = "hanim_l_radial_styloid";
let fieldValue954 = browser.currentScene.createNode("fieldValue");
fieldValue954.name = "name";
fieldValue954.value = "l_radial_styloid";
ProtoInstance953.fieldValue = new MFNode();

ProtoInstance953.fieldValue[0] = fieldValue954;

let fieldValue955 = browser.currentScene.createNode("fieldValue");
fieldValue955.name = "translation";
fieldValue955.value = "0.19009999930858612 0.8644999861717224 -0.04149999842047691";
ProtoInstance953.fieldValue[1] = fieldValue955;

fieldValue823.children[43] = ProtoInstance953;

let ProtoInstance956 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance956.name = "Site";
ProtoInstance956.DEF = "hanim_l_axilla_distal";
let fieldValue957 = browser.currentScene.createNode("fieldValue");
fieldValue957.name = "name";
fieldValue957.value = "l_axilla_distal";
ProtoInstance956.fieldValue = new MFNode();

ProtoInstance956.fieldValue[0] = fieldValue957;

let fieldValue958 = browser.currentScene.createNode("fieldValue");
fieldValue958.name = "translation";
fieldValue958.value = "0.17059999704360962 1.4071999788284302 -0.08749999850988388";
ProtoInstance956.fieldValue[1] = fieldValue958;

fieldValue823.children[44] = ProtoInstance956;

let ProtoInstance959 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance959.name = "Site";
ProtoInstance959.DEF = "hanim_l_olecranon";
let fieldValue960 = browser.currentScene.createNode("fieldValue");
fieldValue960.name = "name";
fieldValue960.value = "l_olecranon";
ProtoInstance959.fieldValue = new MFNode();

ProtoInstance959.fieldValue[0] = fieldValue960;

let fieldValue961 = browser.currentScene.createNode("fieldValue");
fieldValue961.name = "translation";
fieldValue961.value = "-0.19619999825954437 1.1375000476837158 -0.11230000108480453";
ProtoInstance959.fieldValue[1] = fieldValue961;

fieldValue823.children[45] = ProtoInstance959;

let ProtoInstance962 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance962.name = "Site";
ProtoInstance962.DEF = "hanim_l_humeral_lateral_epicondyles";
let fieldValue963 = browser.currentScene.createNode("fieldValue");
fieldValue963.name = "name";
fieldValue963.value = "l_humeral_lateral_epicondyles";
ProtoInstance962.fieldValue = new MFNode();

ProtoInstance962.fieldValue[0] = fieldValue963;

let fieldValue964 = browser.currentScene.createNode("fieldValue");
fieldValue964.name = "translation";
fieldValue964.value = "0.2280000001192093 1.1482000350952148 -0.10999999940395355";
ProtoInstance962.fieldValue[1] = fieldValue964;

fieldValue823.children[46] = ProtoInstance962;

let ProtoInstance965 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance965.name = "Site";
ProtoInstance965.DEF = "hanim_l_humeral_medial_epicondyles";
let fieldValue966 = browser.currentScene.createNode("fieldValue");
fieldValue966.name = "name";
fieldValue966.value = "l_humeral_medial_epicondyles";
ProtoInstance965.fieldValue = new MFNode();

ProtoInstance965.fieldValue[0] = fieldValue966;

let fieldValue967 = browser.currentScene.createNode("fieldValue");
fieldValue967.name = "translation";
fieldValue967.value = "0.17350000143051147 1.1272000074386597 -0.11129999905824661";
ProtoInstance965.fieldValue[1] = fieldValue967;

fieldValue823.children[47] = ProtoInstance965;

let ProtoInstance968 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance968.name = "Site";
ProtoInstance968.DEF = "hanim_l_radiale";
let fieldValue969 = browser.currentScene.createNode("fieldValue");
fieldValue969.name = "name";
fieldValue969.value = "l_radiale";
ProtoInstance968.fieldValue = new MFNode();

ProtoInstance968.fieldValue[0] = fieldValue969;

let fieldValue970 = browser.currentScene.createNode("fieldValue");
fieldValue970.name = "translation";
fieldValue970.value = "0.21819999814033508 1.1211999654769897 -0.11670000106096268";
ProtoInstance968.fieldValue[1] = fieldValue970;

fieldValue823.children[48] = ProtoInstance968;

let ProtoInstance971 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance971.name = "Site";
ProtoInstance971.DEF = "hanim_l_metacarpal_phalanx_2";
let fieldValue972 = browser.currentScene.createNode("fieldValue");
fieldValue972.name = "name";
fieldValue972.value = "l_metacarpal_phalanx_2";
ProtoInstance971.fieldValue = new MFNode();

ProtoInstance971.fieldValue[0] = fieldValue972;

let fieldValue973 = browser.currentScene.createNode("fieldValue");
fieldValue973.name = "translation";
fieldValue973.value = "0.20090000331401825 0.8138999938964844 -0.02370000071823597";
ProtoInstance971.fieldValue[1] = fieldValue973;

fieldValue823.children[49] = ProtoInstance971;

let ProtoInstance974 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance974.name = "Site";
ProtoInstance974.DEF = "hanim_l_dactylion";
let fieldValue975 = browser.currentScene.createNode("fieldValue");
fieldValue975.name = "name";
fieldValue975.value = "l_dactylion";
ProtoInstance974.fieldValue = new MFNode();

ProtoInstance974.fieldValue[0] = fieldValue975;

let fieldValue976 = browser.currentScene.createNode("fieldValue");
fieldValue976.name = "translation";
fieldValue976.value = "0.20559999346733093 0.6743000149726868 -0.04820000007748604";
ProtoInstance974.fieldValue[1] = fieldValue976;

fieldValue823.children[50] = ProtoInstance974;

let ProtoInstance977 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance977.name = "Site";
ProtoInstance977.DEF = "hanim_l_ulnar_styloid";
let fieldValue978 = browser.currentScene.createNode("fieldValue");
fieldValue978.name = "name";
fieldValue978.value = "l_ulnar_styloid";
ProtoInstance977.fieldValue = new MFNode();

ProtoInstance977.fieldValue[0] = fieldValue978;

let fieldValue979 = browser.currentScene.createNode("fieldValue");
fieldValue979.name = "translation";
fieldValue979.value = "-0.2142000049352646 0.8529000282287598 -0.06480000168085098";
ProtoInstance977.fieldValue[1] = fieldValue979;

fieldValue823.children[51] = ProtoInstance977;

let ProtoInstance980 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance980.name = "Site";
ProtoInstance980.DEF = "hanim_l_metacarpal_phalanx_5";
let fieldValue981 = browser.currentScene.createNode("fieldValue");
fieldValue981.name = "name";
fieldValue981.value = "l_metacarpal_phalanx_5";
ProtoInstance980.fieldValue = new MFNode();

ProtoInstance980.fieldValue[0] = fieldValue981;

let fieldValue982 = browser.currentScene.createNode("fieldValue");
fieldValue982.name = "translation";
fieldValue982.value = "0.19290000200271606 0.7860000133514404 -0.11219999939203262";
ProtoInstance980.fieldValue[1] = fieldValue982;

fieldValue823.children[52] = ProtoInstance980;

let ProtoInstance983 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance983.name = "Site";
ProtoInstance983.DEF = "hanim_r_knee_crease";
let fieldValue984 = browser.currentScene.createNode("fieldValue");
fieldValue984.name = "name";
fieldValue984.value = "r_knee_crease";
ProtoInstance983.fieldValue = new MFNode();

ProtoInstance983.fieldValue[0] = fieldValue984;

let fieldValue985 = browser.currentScene.createNode("fieldValue");
fieldValue985.name = "translation";
fieldValue985.value = "-0.08250000327825546 0.49320000410079956 -0.032600000500679016";
ProtoInstance983.fieldValue[1] = fieldValue985;

fieldValue823.children[53] = ProtoInstance983;

let ProtoInstance986 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance986.name = "Site";
ProtoInstance986.DEF = "hanim_r_femoral_lateral_epicondyles";
let fieldValue987 = browser.currentScene.createNode("fieldValue");
fieldValue987.name = "name";
fieldValue987.value = "r_femoral_lateral_epicondyles";
ProtoInstance986.fieldValue = new MFNode();

ProtoInstance986.fieldValue[0] = fieldValue987;

let fieldValue988 = browser.currentScene.createNode("fieldValue");
fieldValue988.name = "translation";
fieldValue988.value = "-0.1421000063419342 0.4991999864578247 0.03099999949336052";
ProtoInstance986.fieldValue[1] = fieldValue988;

fieldValue823.children[54] = ProtoInstance986;

let ProtoInstance989 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance989.name = "Site";
ProtoInstance989.DEF = "hanim_r_femoral_medial_epicondyles";
let fieldValue990 = browser.currentScene.createNode("fieldValue");
fieldValue990.name = "name";
fieldValue990.value = "r_femoral_lateral_epicondyles";
ProtoInstance989.fieldValue = new MFNode();

ProtoInstance989.fieldValue[0] = fieldValue990;

let fieldValue991 = browser.currentScene.createNode("fieldValue");
fieldValue991.name = "translation";
fieldValue991.value = "-0.022099999710917473 0.5013999938964844 0.02889999933540821";
ProtoInstance989.fieldValue[1] = fieldValue991;

fieldValue823.children[55] = ProtoInstance989;

let ProtoInstance992 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance992.name = "Site";
ProtoInstance992.DEF = "hanim_r_tarsal_interphalangeal_phalanx_5";
let fieldValue993 = browser.currentScene.createNode("fieldValue");
fieldValue993.name = "name";
fieldValue993.value = "r_tarsal_interphalangeal_phalanx_5";
ProtoInstance992.fieldValue = new MFNode();

ProtoInstance992.fieldValue[0] = fieldValue993;

let fieldValue994 = browser.currentScene.createNode("fieldValue");
fieldValue994.name = "translation";
fieldValue994.value = "-0.15230000019073486 0.016599999740719795 0.08950000256299973";
ProtoInstance992.fieldValue[1] = fieldValue994;

fieldValue823.children[56] = ProtoInstance992;

let ProtoInstance995 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance995.name = "Site";
ProtoInstance995.DEF = "hanim_r_lateral_malleolus";
let fieldValue996 = browser.currentScene.createNode("fieldValue");
fieldValue996.name = "name";
fieldValue996.value = "r_lateral_malleolus";
ProtoInstance995.fieldValue = new MFNode();

ProtoInstance995.fieldValue[0] = fieldValue996;

let fieldValue997 = browser.currentScene.createNode("fieldValue");
fieldValue997.name = "translation";
fieldValue997.value = "-0.1005999967455864 0.0658000037074089 -0.10750000178813934";
ProtoInstance995.fieldValue[1] = fieldValue997;

fieldValue823.children[57] = ProtoInstance995;

let ProtoInstance998 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance998.name = "Site";
ProtoInstance998.DEF = "hanim_r_medial_malleolus";
let fieldValue999 = browser.currentScene.createNode("fieldValue");
fieldValue999.name = "name";
fieldValue999.value = "r_medial_malleolus";
ProtoInstance998.fieldValue = new MFNode();

ProtoInstance998.fieldValue[0] = fieldValue999;

let fieldValue1000 = browser.currentScene.createNode("fieldValue");
fieldValue1000.name = "translation";
fieldValue1000.value = "-0.05909999832510948 0.07599999755620956 -0.09279999881982803";
ProtoInstance998.fieldValue[1] = fieldValue1000;

fieldValue823.children[58] = ProtoInstance998;

let ProtoInstance1001 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1001.name = "Site";
ProtoInstance1001.DEF = "hanim_r_sphyrion";
let fieldValue1002 = browser.currentScene.createNode("fieldValue");
fieldValue1002.name = "name";
fieldValue1002.value = "r_sphyrion";
ProtoInstance1001.fieldValue = new MFNode();

ProtoInstance1001.fieldValue[0] = fieldValue1002;

let fieldValue1003 = browser.currentScene.createNode("fieldValue");
fieldValue1003.name = "translation";
fieldValue1003.value = "-0.06030000001192093 0.061000000685453415 -0.10019999742507935";
ProtoInstance1001.fieldValue[1] = fieldValue1003;

fieldValue823.children[59] = ProtoInstance1001;

let ProtoInstance1004 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1004.name = "Site";
ProtoInstance1004.DEF = "hanim_r_tarsal_interphalangeal_phalanx_1";
let fieldValue1005 = browser.currentScene.createNode("fieldValue");
fieldValue1005.name = "name";
fieldValue1005.value = "r_tarsal_interphalangeal_phalanx_1";
ProtoInstance1004.fieldValue = new MFNode();

ProtoInstance1004.fieldValue[0] = fieldValue1005;

let fieldValue1006 = browser.currentScene.createNode("fieldValue");
fieldValue1006.name = "translation";
fieldValue1006.value = "-0.05209999904036522 0.026000000536441803 0.01269999984651804";
ProtoInstance1004.fieldValue[1] = fieldValue1006;

fieldValue823.children[60] = ProtoInstance1004;

let ProtoInstance1007 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1007.name = "Site";
ProtoInstance1007.DEF = "hanim_r_calcaneus_posterior";
let fieldValue1008 = browser.currentScene.createNode("fieldValue");
fieldValue1008.name = "name";
fieldValue1008.value = "r_calcaneus_posterior";
ProtoInstance1007.fieldValue = new MFNode();

ProtoInstance1007.fieldValue[0] = fieldValue1008;

let fieldValue1009 = browser.currentScene.createNode("fieldValue");
fieldValue1009.name = "translation";
fieldValue1009.value = "-0.06920000165700912 0.02969999983906746 -0.12210000306367874";
ProtoInstance1007.fieldValue[1] = fieldValue1009;

fieldValue823.children[61] = ProtoInstance1007;

let ProtoInstance1010 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1010.name = "Site";
ProtoInstance1010.DEF = "hanim_r_tarsal_distal_phalanx_2";
let fieldValue1011 = browser.currentScene.createNode("fieldValue");
fieldValue1011.name = "name";
fieldValue1011.value = "r_tarsal_distal_phalanx_2";
ProtoInstance1010.fieldValue = new MFNode();

ProtoInstance1010.fieldValue[0] = fieldValue1011;

let fieldValue1012 = browser.currentScene.createNode("fieldValue");
fieldValue1012.name = "translation";
fieldValue1012.value = "-0.08829999715089798 0.013399999588727951 0.13830000162124634";
ProtoInstance1010.fieldValue[1] = fieldValue1012;

fieldValue823.children[62] = ProtoInstance1010;

let ProtoInstance1013 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1013.name = "Site";
ProtoInstance1013.DEF = "hanim_l_knee_crease";
let fieldValue1014 = browser.currentScene.createNode("fieldValue");
fieldValue1014.name = "name";
fieldValue1014.value = "l_knee_crease";
ProtoInstance1013.fieldValue = new MFNode();

ProtoInstance1013.fieldValue[0] = fieldValue1014;

let fieldValue1015 = browser.currentScene.createNode("fieldValue");
fieldValue1015.name = "translation";
fieldValue1015.value = "0.09929999709129333 0.48809999227523804 -0.030899999663233757";
ProtoInstance1013.fieldValue[1] = fieldValue1015;

fieldValue823.children[63] = ProtoInstance1013;

let ProtoInstance1016 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1016.name = "Site";
ProtoInstance1016.DEF = "hanim_l_femoral_lateral_epicondyles";
let fieldValue1017 = browser.currentScene.createNode("fieldValue");
fieldValue1017.name = "name";
fieldValue1017.value = "l_femoral_lateral_epicondyles";
ProtoInstance1016.fieldValue = new MFNode();

ProtoInstance1016.fieldValue[0] = fieldValue1017;

let fieldValue1018 = browser.currentScene.createNode("fieldValue");
fieldValue1018.name = "translation";
fieldValue1018.value = "0.1597999930381775 0.4966999888420105 0.02969999983906746";
ProtoInstance1016.fieldValue[1] = fieldValue1018;

fieldValue823.children[64] = ProtoInstance1016;

let ProtoInstance1019 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1019.name = "Site";
ProtoInstance1019.DEF = "hanim_l_femoral_medial_epicondyles";
let fieldValue1020 = browser.currentScene.createNode("fieldValue");
fieldValue1020.name = "name";
fieldValue1020.value = "l_femoral_lateral_epicondyles";
ProtoInstance1019.fieldValue = new MFNode();

ProtoInstance1019.fieldValue[0] = fieldValue1020;

let fieldValue1021 = browser.currentScene.createNode("fieldValue");
fieldValue1021.name = "translation";
fieldValue1021.value = "0.039799999445676804 0.49459999799728394 0.030300000682473183";
ProtoInstance1019.fieldValue[1] = fieldValue1021;

fieldValue823.children[65] = ProtoInstance1019;

let ProtoInstance1022 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1022.name = "Site";
ProtoInstance1022.DEF = "hanim_l_tarsal_interphalangeal_phalanx_5";
let fieldValue1023 = browser.currentScene.createNode("fieldValue");
fieldValue1023.name = "name";
fieldValue1023.value = "l_tarsal_interphalangeal_phalanx_5";
ProtoInstance1022.fieldValue = new MFNode();

ProtoInstance1022.fieldValue[0] = fieldValue1023;

let fieldValue1024 = browser.currentScene.createNode("fieldValue");
fieldValue1024.name = "translation";
fieldValue1024.value = "0.18250000476837158 0.007000000216066837 0.09279999881982803";
ProtoInstance1022.fieldValue[1] = fieldValue1024;

fieldValue823.children[66] = ProtoInstance1022;

let ProtoInstance1025 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1025.name = "Site";
ProtoInstance1025.DEF = "hanim_l_lateral_malleolus";
let fieldValue1026 = browser.currentScene.createNode("fieldValue");
fieldValue1026.name = "name";
fieldValue1026.value = "l_lateral_malleolus";
ProtoInstance1025.fieldValue = new MFNode();

ProtoInstance1025.fieldValue[0] = fieldValue1026;

let fieldValue1027 = browser.currentScene.createNode("fieldValue");
fieldValue1027.name = "translation";
fieldValue1027.value = "0.13079999387264252 0.059700001031160355 -0.10320000350475311";
ProtoInstance1025.fieldValue[1] = fieldValue1027;

fieldValue823.children[67] = ProtoInstance1025;

let ProtoInstance1028 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1028.name = "Site";
ProtoInstance1028.DEF = "hanim_l_medial_malleolus";
let fieldValue1029 = browser.currentScene.createNode("fieldValue");
fieldValue1029.name = "name";
fieldValue1029.value = "l_medial_malleolus";
ProtoInstance1028.fieldValue = new MFNode();

ProtoInstance1028.fieldValue[0] = fieldValue1029;

let fieldValue1030 = browser.currentScene.createNode("fieldValue");
fieldValue1030.name = "translation";
fieldValue1030.value = "0.08900000154972076 0.07159999758005142 -0.08810000121593475";
ProtoInstance1028.fieldValue[1] = fieldValue1030;

fieldValue823.children[68] = ProtoInstance1028;

let ProtoInstance1031 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1031.name = "Site";
ProtoInstance1031.DEF = "hanim_l_sphyrion";
let fieldValue1032 = browser.currentScene.createNode("fieldValue");
fieldValue1032.name = "name";
fieldValue1032.value = "l_sphyrion";
ProtoInstance1031.fieldValue = new MFNode();

ProtoInstance1031.fieldValue[0] = fieldValue1032;

let fieldValue1033 = browser.currentScene.createNode("fieldValue");
fieldValue1033.name = "translation";
fieldValue1033.value = "0.08900000154972076 0.057500001043081284 -0.09430000185966492";
ProtoInstance1031.fieldValue[1] = fieldValue1033;

fieldValue823.children[69] = ProtoInstance1031;

let ProtoInstance1034 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1034.name = "Site";
ProtoInstance1034.DEF = "hanim_l_tarsal_interphalangeal_phalanx_1";
let fieldValue1035 = browser.currentScene.createNode("fieldValue");
fieldValue1035.name = "name";
fieldValue1035.value = "l_tarsal_interphalangeal_phalanx_1";
ProtoInstance1034.fieldValue = new MFNode();

ProtoInstance1034.fieldValue[0] = fieldValue1035;

let fieldValue1036 = browser.currentScene.createNode("fieldValue");
fieldValue1036.name = "translation";
fieldValue1036.value = "0.08160000294446945 0.02319999970495701 0.010599999688565731";
ProtoInstance1034.fieldValue[1] = fieldValue1036;

fieldValue823.children[70] = ProtoInstance1034;

let ProtoInstance1037 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1037.name = "Site";
ProtoInstance1037.DEF = "hanim_l_calcaneus_posterior";
let fieldValue1038 = browser.currentScene.createNode("fieldValue");
fieldValue1038.name = "name";
fieldValue1038.value = "l_calcaneus_posterior";
ProtoInstance1037.fieldValue = new MFNode();

ProtoInstance1037.fieldValue[0] = fieldValue1038;

let fieldValue1039 = browser.currentScene.createNode("fieldValue");
fieldValue1039.name = "translation";
fieldValue1039.value = "0.09740000218153 0.02590000070631504 -0.11710000038146973";
ProtoInstance1037.fieldValue[1] = fieldValue1039;

fieldValue823.children[71] = ProtoInstance1037;

let ProtoInstance1040 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1040.name = "Site";
ProtoInstance1040.DEF = "hanim_l_tarsal_distal_phalanx_2";
let fieldValue1041 = browser.currentScene.createNode("fieldValue");
fieldValue1041.name = "name";
fieldValue1041.value = "l_tarsal_distal_phalanx_2";
ProtoInstance1040.fieldValue = new MFNode();

ProtoInstance1040.fieldValue[0] = fieldValue1041;

let fieldValue1042 = browser.currentScene.createNode("fieldValue");
fieldValue1042.name = "translation";
fieldValue1042.value = "0.11949999630451202 0.007899999618530273 0.14329999685287476";
ProtoInstance1040.fieldValue[1] = fieldValue1042;

fieldValue823.children[72] = ProtoInstance1040;

let ProtoInstance1043 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1043.name = "Site";
ProtoInstance1043.DEF = "hanim_crotch";
let fieldValue1044 = browser.currentScene.createNode("fieldValue");
fieldValue1044.name = "name";
fieldValue1044.value = "crotch";
ProtoInstance1043.fieldValue = new MFNode();

ProtoInstance1043.fieldValue[0] = fieldValue1044;

let fieldValue1045 = browser.currentScene.createNode("fieldValue");
fieldValue1045.name = "translation";
fieldValue1045.value = "0.0034000000450760126 0.8266000151634216 0.025699999183416367";
ProtoInstance1043.fieldValue[1] = fieldValue1045;

fieldValue823.children[73] = ProtoInstance1043;

let ProtoInstance1046 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1046.name = "Site";
ProtoInstance1046.DEF = "hanim_r_neck_base";
let fieldValue1047 = browser.currentScene.createNode("fieldValue");
fieldValue1047.name = "name";
fieldValue1047.value = "r_neck_base";
ProtoInstance1046.fieldValue = new MFNode();

ProtoInstance1046.fieldValue[0] = fieldValue1047;

let fieldValue1048 = browser.currentScene.createNode("fieldValue");
fieldValue1048.name = "translation";
fieldValue1048.value = "-0.04190000146627426 1.5148999691009521 -0.02199999988079071";
ProtoInstance1046.fieldValue[1] = fieldValue1048;

fieldValue823.children[74] = ProtoInstance1046;

let ProtoInstance1049 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1049.name = "Site";
ProtoInstance1049.DEF = "hanim_l_neck_base";
let fieldValue1050 = browser.currentScene.createNode("fieldValue");
fieldValue1050.name = "name";
fieldValue1050.value = "l_neck_base";
ProtoInstance1049.fieldValue = new MFNode();

ProtoInstance1049.fieldValue[0] = fieldValue1050;

let fieldValue1051 = browser.currentScene.createNode("fieldValue");
fieldValue1051.name = "translation";
fieldValue1051.value = "0.06459999829530716 1.5140999555587769 -0.03799999877810478";
ProtoInstance1049.fieldValue[1] = fieldValue1051;

fieldValue823.children[75] = ProtoInstance1049;

let ProtoInstance1052 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1052.name = "Site";
ProtoInstance1052.DEF = "hanim_navel";
let fieldValue1053 = browser.currentScene.createNode("fieldValue");
fieldValue1053.name = "name";
fieldValue1053.value = "navel";
ProtoInstance1052.fieldValue = new MFNode();

ProtoInstance1052.fieldValue[0] = fieldValue1053;

let fieldValue1054 = browser.currentScene.createNode("fieldValue");
fieldValue1054.name = "translation";
fieldValue1054.value = "0.006899999920278788 1.09660005569458 0.10170000046491623";
ProtoInstance1052.fieldValue[1] = fieldValue1054;

fieldValue823.children[76] = ProtoInstance1052;

ProtoInstance107.fieldValue[3] = fieldValue823;

let fieldValue1055 = browser.currentScene.createNode("fieldValue");
fieldValue1055.name = "name";
fieldValue1055.value = "humanoid";
ProtoInstance107.fieldValue[4] = fieldValue1055;

let fieldValue1056 = browser.currentScene.createNode("fieldValue");
fieldValue1056.name = "info";
fieldValue1056.value = "\"authorName=Matthew T. Beitler\" \"authorEmail=beitler@cis.upenn.edu or beitler@acm.org\" \"creationDate=05/12/99\" \"copyright=Copyright 1999-2003, Matthew T. Beitler\" \"humanoidVersion=JointCenters 200x, LOA&#8209;0\" \"usageRestrictions= PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED, PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided 'as-is' and without warranty of any kind, express, implied or otherwise, including without limitation, any warranty of merchantability or fitness for a particular purpose.\" \"modificationDate=08/12/03\"";
ProtoInstance107.fieldValue[5] = fieldValue1056;

browser.currentScene.children[4] = ProtoInstance107;

let Group1057 = browser.currentScene.createNode("Group");
Group1057.DEF = "JointCenters_WorldInfo";
let WorldInfo1058 = browser.currentScene.createNode("WorldInfo");
WorldInfo1058.title = "HANIM 200x Default Joint Centers, LOA&#8209;0";
WorldInfo1058.info = new MFString(new java.lang.String[" HANIM 200x Default Joint Centers, Level-Of-Articulation 0 --------------------------------------------------------- HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://H-Anim.org/Specifications/H-Anim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human modelling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "]);
Group1057.children = new MFNode();

Group1057.children[0] = WorldInfo1058;

browser.currentScene.children[5] = Group1057;

let NavigationInfo1059 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo1059.avatarSize = new MFFloat(new float[0.25,1.600000023841858,0.75]);
NavigationInfo1059.speed = 1.5;
browser.currentScene.children[6] = NavigationInfo1059;

