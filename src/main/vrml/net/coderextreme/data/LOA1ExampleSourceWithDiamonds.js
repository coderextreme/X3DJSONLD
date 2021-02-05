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
ProtoInstance114.name = "Joint";
ProtoInstance114.DEF = "hanim_sacroiliac";
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
fieldValue117.value = "0 0.914900004863739 0.0015999999595806003";
ProtoInstance114.fieldValue[2] = fieldValue117;

let fieldValue118 = browser.currentScene.createNode("fieldValue");
fieldValue118.name = "children";
let ProtoInstance119 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance119.name = "Joint";
ProtoInstance119.DEF = "hanim_l_hip";
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
fieldValue122.value = "0.09610000252723694 0.9124000072479248 -0.00009999999747378752";
ProtoInstance119.fieldValue[2] = fieldValue122;

let fieldValue123 = browser.currentScene.createNode("fieldValue");
fieldValue123.name = "children";
let ProtoInstance124 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance124.name = "Joint";
ProtoInstance124.DEF = "hanim_l_knee";
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
fieldValue127.value = "0.10400000214576721 0.48669999837875366 0.030799999833106995";
ProtoInstance124.fieldValue[2] = fieldValue127;

let fieldValue128 = browser.currentScene.createNode("fieldValue");
fieldValue128.name = "children";
let ProtoInstance129 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance129.name = "Joint";
ProtoInstance129.DEF = "hanim_l_talocrural";
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
fieldValue132.value = "0.11010000109672546 0.06560000032186508 -0.07360000163316727";
ProtoInstance129.fieldValue[2] = fieldValue132;

let fieldValue133 = browser.currentScene.createNode("fieldValue");
fieldValue133.name = "children";
let ProtoInstance134 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance134.name = "Joint";
ProtoInstance134.DEF = "hanim_l_metatarsophalangeal_";
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
fieldValue137.value = "0.10859999805688858 0.00009999999747378752 0.03680000081658363";
ProtoInstance134.fieldValue[2] = fieldValue137;

let fieldValue138 = browser.currentScene.createNode("fieldValue");
fieldValue138.name = "children";
let ProtoInstance139 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance139.name = "Segment";
ProtoInstance139.DEF = "hanim_l_middistal";
let fieldValue140 = browser.currentScene.createNode("fieldValue");
fieldValue140.name = "name";
fieldValue140.value = "l_middistal";
ProtoInstance139.fieldValue = new MFNode();

ProtoInstance139.fieldValue[0] = fieldValue140;

let fieldValue141 = browser.currentScene.createNode("fieldValue");
fieldValue141.name = "children";
let ProtoInstance142 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance142.name = "Site";
ProtoInstance142.DEF = "hanim_l_middistal_tip";
let fieldValue143 = browser.currentScene.createNode("fieldValue");
fieldValue143.name = "name";
fieldValue143.value = "l_middistal_tip";
ProtoInstance142.fieldValue = new MFNode();

ProtoInstance142.fieldValue[0] = fieldValue143;

let fieldValue144 = browser.currentScene.createNode("fieldValue");
fieldValue144.name = "translation";
fieldValue144.value = "0.13539999723434448 0.0015999999595806003 0.147599995136261";
ProtoInstance142.fieldValue[1] = fieldValue144;

fieldValue141.children = new MFNode();

fieldValue141.children[0] = ProtoInstance142;

let ProtoInstance145 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance145.name = "Site";
ProtoInstance145.DEF = "hanim_l_tarsal_interphalangeal_phalanx_5";
let fieldValue146 = browser.currentScene.createNode("fieldValue");
fieldValue146.name = "name";
fieldValue146.value = "l_tarsal_interphalangeal_phalanx_5";
ProtoInstance145.fieldValue = new MFNode();

ProtoInstance145.fieldValue[0] = fieldValue146;

let fieldValue147 = browser.currentScene.createNode("fieldValue");
fieldValue147.name = "translation";
fieldValue147.value = "0.18250000476837158 0.007000000216066837 0.09279999881982803";
ProtoInstance145.fieldValue[1] = fieldValue147;

fieldValue141.children[1] = ProtoInstance145;

let ProtoInstance148 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance148.name = "Site";
ProtoInstance148.DEF = "hanim_l_tarsal_interphalangeal_phalanx_1";
let fieldValue149 = browser.currentScene.createNode("fieldValue");
fieldValue149.name = "name";
fieldValue149.value = "l_tarsal_interphalangeal_phalanx_1";
ProtoInstance148.fieldValue = new MFNode();

ProtoInstance148.fieldValue[0] = fieldValue149;

let fieldValue150 = browser.currentScene.createNode("fieldValue");
fieldValue150.name = "translation";
fieldValue150.value = "0.08160000294446945 0.02319999970495701 0.010599999688565731";
ProtoInstance148.fieldValue[1] = fieldValue150;

fieldValue141.children[2] = ProtoInstance148;

let ProtoInstance151 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance151.name = "Site";
ProtoInstance151.DEF = "hanim_l_tarsal_distal_phalanx_2";
let fieldValue152 = browser.currentScene.createNode("fieldValue");
fieldValue152.name = "name";
fieldValue152.value = "l_tarsal_distal_phalanx_2";
ProtoInstance151.fieldValue = new MFNode();

ProtoInstance151.fieldValue[0] = fieldValue152;

let fieldValue153 = browser.currentScene.createNode("fieldValue");
fieldValue153.name = "translation";
fieldValue153.value = "0.11949999630451202 0.007899999618530273 0.14329999685287476";
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
ProtoInstance154.DEF = "hanim_l_hindfoot";
let fieldValue155 = browser.currentScene.createNode("fieldValue");
fieldValue155.name = "name";
fieldValue155.value = "l_hindfoot";
ProtoInstance154.fieldValue = new MFNode();

ProtoInstance154.fieldValue[0] = fieldValue155;

let fieldValue156 = browser.currentScene.createNode("fieldValue");
fieldValue156.name = "children";
let ProtoInstance157 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance157.name = "Site";
ProtoInstance157.DEF = "hanim_l_lateral_malleolus";
let fieldValue158 = browser.currentScene.createNode("fieldValue");
fieldValue158.name = "name";
fieldValue158.value = "l_lateral_malleolus";
ProtoInstance157.fieldValue = new MFNode();

ProtoInstance157.fieldValue[0] = fieldValue158;

let fieldValue159 = browser.currentScene.createNode("fieldValue");
fieldValue159.name = "translation";
fieldValue159.value = "0.13079999387264252 0.059700001031160355 -0.10320000350475311";
ProtoInstance157.fieldValue[1] = fieldValue159;

fieldValue156.children = new MFNode();

fieldValue156.children[0] = ProtoInstance157;

let ProtoInstance160 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance160.name = "Site";
ProtoInstance160.DEF = "hanim_l_medial_malleolus";
let fieldValue161 = browser.currentScene.createNode("fieldValue");
fieldValue161.name = "name";
fieldValue161.value = "l_medial_malleolus";
ProtoInstance160.fieldValue = new MFNode();

ProtoInstance160.fieldValue[0] = fieldValue161;

let fieldValue162 = browser.currentScene.createNode("fieldValue");
fieldValue162.name = "translation";
fieldValue162.value = "0.08900000154972076 0.07159999758005142 -0.08810000121593475";
ProtoInstance160.fieldValue[1] = fieldValue162;

fieldValue156.children[1] = ProtoInstance160;

let ProtoInstance163 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance163.name = "Site";
ProtoInstance163.DEF = "hanim_l_sphyrion";
let fieldValue164 = browser.currentScene.createNode("fieldValue");
fieldValue164.name = "name";
fieldValue164.value = "l_sphyrion";
ProtoInstance163.fieldValue = new MFNode();

ProtoInstance163.fieldValue[0] = fieldValue164;

let fieldValue165 = browser.currentScene.createNode("fieldValue");
fieldValue165.name = "translation";
fieldValue165.value = "0.08900000154972076 0.057500001043081284 -0.09430000185966492";
ProtoInstance163.fieldValue[1] = fieldValue165;

fieldValue156.children[2] = ProtoInstance163;

let ProtoInstance166 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance166.name = "Site";
ProtoInstance166.DEF = "hanim_l_calcaneus_posterior";
let fieldValue167 = browser.currentScene.createNode("fieldValue");
fieldValue167.name = "name";
fieldValue167.value = "l_calcaneus_posterior";
ProtoInstance166.fieldValue = new MFNode();

ProtoInstance166.fieldValue[0] = fieldValue167;

let fieldValue168 = browser.currentScene.createNode("fieldValue");
fieldValue168.name = "translation";
fieldValue168.value = "0.09740000218153 0.02590000070631504 -0.11710000038146973";
ProtoInstance166.fieldValue[1] = fieldValue168;

fieldValue156.children[3] = ProtoInstance166;

ProtoInstance154.fieldValue[1] = fieldValue156;

fieldValue133.children[1] = ProtoInstance154;

ProtoInstance129.fieldValue[3] = fieldValue133;

fieldValue128.children = new MFNode();

fieldValue128.children[0] = ProtoInstance129;

let ProtoInstance169 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance169.name = "Segment";
ProtoInstance169.DEF = "hanim_l_calf";
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
ProtoInstance171.DEF = "hanim_l_thigh";
let fieldValue172 = browser.currentScene.createNode("fieldValue");
fieldValue172.name = "name";
fieldValue172.value = "l_thigh";
ProtoInstance171.fieldValue = new MFNode();

ProtoInstance171.fieldValue[0] = fieldValue172;

let fieldValue173 = browser.currentScene.createNode("fieldValue");
fieldValue173.name = "children";
let ProtoInstance174 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance174.name = "Site";
ProtoInstance174.DEF = "hanim_l_knee_crease";
let fieldValue175 = browser.currentScene.createNode("fieldValue");
fieldValue175.name = "name";
fieldValue175.value = "l_knee_crease";
ProtoInstance174.fieldValue = new MFNode();

ProtoInstance174.fieldValue[0] = fieldValue175;

let fieldValue176 = browser.currentScene.createNode("fieldValue");
fieldValue176.name = "translation";
fieldValue176.value = "0.09929999709129333 0.48809999227523804 -0.030899999663233757";
ProtoInstance174.fieldValue[1] = fieldValue176;

fieldValue173.children = new MFNode();

fieldValue173.children[0] = ProtoInstance174;

let ProtoInstance177 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance177.name = "Site";
ProtoInstance177.DEF = "hanim_l_femoral_lateral_epicondyles";
let fieldValue178 = browser.currentScene.createNode("fieldValue");
fieldValue178.name = "name";
fieldValue178.value = "l_femoral_lateral_epicondyles";
ProtoInstance177.fieldValue = new MFNode();

ProtoInstance177.fieldValue[0] = fieldValue178;

let fieldValue179 = browser.currentScene.createNode("fieldValue");
fieldValue179.name = "translation";
fieldValue179.value = "0.1597999930381775 0.4966999888420105 0.02969999983906746";
ProtoInstance177.fieldValue[1] = fieldValue179;

fieldValue173.children[1] = ProtoInstance177;

let ProtoInstance180 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance180.name = "Site";
ProtoInstance180.DEF = "hanim_l_femoral_medial_epicondyles";
let fieldValue181 = browser.currentScene.createNode("fieldValue");
fieldValue181.name = "name";
fieldValue181.value = "l_femoral_lateral_epicondyles";
ProtoInstance180.fieldValue = new MFNode();

ProtoInstance180.fieldValue[0] = fieldValue181;

let fieldValue182 = browser.currentScene.createNode("fieldValue");
fieldValue182.name = "translation";
fieldValue182.value = "0.039799999445676804 0.49459999799728394 0.030300000682473183";
ProtoInstance180.fieldValue[1] = fieldValue182;

fieldValue173.children[2] = ProtoInstance180;

ProtoInstance171.fieldValue[1] = fieldValue173;

fieldValue123.children[1] = ProtoInstance171;

ProtoInstance119.fieldValue[3] = fieldValue123;

fieldValue118.children = new MFNode();

fieldValue118.children[0] = ProtoInstance119;

let ProtoInstance183 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance183.name = "Joint";
ProtoInstance183.DEF = "hanim_r_hip";
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
fieldValue186.value = "-0.0949999988079071 0.9171000123023987 0.002899999963119626";
ProtoInstance183.fieldValue[2] = fieldValue186;

let fieldValue187 = browser.currentScene.createNode("fieldValue");
fieldValue187.name = "children";
let ProtoInstance188 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance188.name = "Joint";
ProtoInstance188.DEF = "hanim_r_knee";
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
fieldValue191.value = "-0.08669999986886978 0.49129998683929443 0.03180000185966492";
ProtoInstance188.fieldValue[2] = fieldValue191;

let fieldValue192 = browser.currentScene.createNode("fieldValue");
fieldValue192.name = "children";
let ProtoInstance193 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance193.name = "Joint";
ProtoInstance193.DEF = "hanim_r_talocrural";
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
fieldValue196.value = "-0.08009999990463257 0.07119999825954437 -0.07660000026226044";
ProtoInstance193.fieldValue[2] = fieldValue196;

let fieldValue197 = browser.currentScene.createNode("fieldValue");
fieldValue197.name = "children";
let ProtoInstance198 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance198.name = "Joint";
ProtoInstance198.DEF = "hanim_r_metatarsophalangeal_";
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
fieldValue201.value = "-0.08009999990463257 0 0.03680000081658363";
ProtoInstance198.fieldValue[2] = fieldValue201;

let fieldValue202 = browser.currentScene.createNode("fieldValue");
fieldValue202.name = "children";
let ProtoInstance203 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance203.name = "Segment";
ProtoInstance203.DEF = "hanim_r_middistal";
let fieldValue204 = browser.currentScene.createNode("fieldValue");
fieldValue204.name = "name";
fieldValue204.value = "r_middistal";
ProtoInstance203.fieldValue = new MFNode();

ProtoInstance203.fieldValue[0] = fieldValue204;

let fieldValue205 = browser.currentScene.createNode("fieldValue");
fieldValue205.name = "children";
let ProtoInstance206 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance206.name = "Site";
ProtoInstance206.DEF = "hanim_r_middistal_tip";
let fieldValue207 = browser.currentScene.createNode("fieldValue");
fieldValue207.name = "name";
fieldValue207.value = "r_middistal_tip";
ProtoInstance206.fieldValue = new MFNode();

ProtoInstance206.fieldValue[0] = fieldValue207;

let fieldValue208 = browser.currentScene.createNode("fieldValue");
fieldValue208.name = "translation";
fieldValue208.value = "-0.10429999977350235 -0.022700000554323196 0.14499999582767487";
ProtoInstance206.fieldValue[1] = fieldValue208;

fieldValue205.children = new MFNode();

fieldValue205.children[0] = ProtoInstance206;

let ProtoInstance209 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance209.name = "Site";
ProtoInstance209.DEF = "hanim_r_tarsal_interphalangeal_phalanx_5";
let fieldValue210 = browser.currentScene.createNode("fieldValue");
fieldValue210.name = "name";
fieldValue210.value = "r_tarsal_interphalangeal_phalanx_5";
ProtoInstance209.fieldValue = new MFNode();

ProtoInstance209.fieldValue[0] = fieldValue210;

let fieldValue211 = browser.currentScene.createNode("fieldValue");
fieldValue211.name = "translation";
fieldValue211.value = "-0.15230000019073486 0.016599999740719795 0.08950000256299973";
ProtoInstance209.fieldValue[1] = fieldValue211;

fieldValue205.children[1] = ProtoInstance209;

let ProtoInstance212 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance212.name = "Site";
ProtoInstance212.DEF = "hanim_r_tarsal_interphalangeal_phalanx_1";
let fieldValue213 = browser.currentScene.createNode("fieldValue");
fieldValue213.name = "name";
fieldValue213.value = "r_tarsal_interphalangeal_phalanx_1";
ProtoInstance212.fieldValue = new MFNode();

ProtoInstance212.fieldValue[0] = fieldValue213;

let fieldValue214 = browser.currentScene.createNode("fieldValue");
fieldValue214.name = "translation";
fieldValue214.value = "-0.05209999904036522 0.026000000536441803 0.01269999984651804";
ProtoInstance212.fieldValue[1] = fieldValue214;

fieldValue205.children[2] = ProtoInstance212;

let ProtoInstance215 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance215.name = "Site";
ProtoInstance215.DEF = "hanim_r_tarsal_distal_phalanx_2";
let fieldValue216 = browser.currentScene.createNode("fieldValue");
fieldValue216.name = "name";
fieldValue216.value = "r_tarsal_distal_phalanx_2";
ProtoInstance215.fieldValue = new MFNode();

ProtoInstance215.fieldValue[0] = fieldValue216;

let fieldValue217 = browser.currentScene.createNode("fieldValue");
fieldValue217.name = "translation";
fieldValue217.value = "-0.08829999715089798 0.013399999588727951 0.13830000162124634";
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
ProtoInstance218.DEF = "hanim_r_hindfoot";
let fieldValue219 = browser.currentScene.createNode("fieldValue");
fieldValue219.name = "name";
fieldValue219.value = "r_hindfoot";
ProtoInstance218.fieldValue = new MFNode();

ProtoInstance218.fieldValue[0] = fieldValue219;

let fieldValue220 = browser.currentScene.createNode("fieldValue");
fieldValue220.name = "children";
let ProtoInstance221 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance221.name = "Site";
ProtoInstance221.DEF = "hanim_r_lateral_malleolus";
let fieldValue222 = browser.currentScene.createNode("fieldValue");
fieldValue222.name = "name";
fieldValue222.value = "r_lateral_malleolus";
ProtoInstance221.fieldValue = new MFNode();

ProtoInstance221.fieldValue[0] = fieldValue222;

let fieldValue223 = browser.currentScene.createNode("fieldValue");
fieldValue223.name = "translation";
fieldValue223.value = "-0.1005999967455864 0.0658000037074089 -0.10750000178813934";
ProtoInstance221.fieldValue[1] = fieldValue223;

fieldValue220.children = new MFNode();

fieldValue220.children[0] = ProtoInstance221;

let ProtoInstance224 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance224.name = "Site";
ProtoInstance224.DEF = "hanim_r_medial_malleolus";
let fieldValue225 = browser.currentScene.createNode("fieldValue");
fieldValue225.name = "name";
fieldValue225.value = "r_medial_malleolus";
ProtoInstance224.fieldValue = new MFNode();

ProtoInstance224.fieldValue[0] = fieldValue225;

let fieldValue226 = browser.currentScene.createNode("fieldValue");
fieldValue226.name = "translation";
fieldValue226.value = "-0.05909999832510948 0.07599999755620956 -0.09279999881982803";
ProtoInstance224.fieldValue[1] = fieldValue226;

fieldValue220.children[1] = ProtoInstance224;

let ProtoInstance227 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance227.name = "Site";
ProtoInstance227.DEF = "hanim_r_sphyrion";
let fieldValue228 = browser.currentScene.createNode("fieldValue");
fieldValue228.name = "name";
fieldValue228.value = "r_sphyrion";
ProtoInstance227.fieldValue = new MFNode();

ProtoInstance227.fieldValue[0] = fieldValue228;

let fieldValue229 = browser.currentScene.createNode("fieldValue");
fieldValue229.name = "translation";
fieldValue229.value = "-0.06030000001192093 0.061000000685453415 -0.10019999742507935";
ProtoInstance227.fieldValue[1] = fieldValue229;

fieldValue220.children[2] = ProtoInstance227;

let ProtoInstance230 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance230.name = "Site";
ProtoInstance230.DEF = "hanim_r_calcaneus_posterior";
let fieldValue231 = browser.currentScene.createNode("fieldValue");
fieldValue231.name = "name";
fieldValue231.value = "r_calcaneus_posterior";
ProtoInstance230.fieldValue = new MFNode();

ProtoInstance230.fieldValue[0] = fieldValue231;

let fieldValue232 = browser.currentScene.createNode("fieldValue");
fieldValue232.name = "translation";
fieldValue232.value = "-0.06920000165700912 0.02969999983906746 -0.12210000306367874";
ProtoInstance230.fieldValue[1] = fieldValue232;

fieldValue220.children[3] = ProtoInstance230;

ProtoInstance218.fieldValue[1] = fieldValue220;

fieldValue197.children[1] = ProtoInstance218;

ProtoInstance193.fieldValue[3] = fieldValue197;

fieldValue192.children = new MFNode();

fieldValue192.children[0] = ProtoInstance193;

let ProtoInstance233 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance233.name = "Segment";
ProtoInstance233.DEF = "hanim_r_calf";
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
ProtoInstance235.DEF = "hanim_r_thigh";
let fieldValue236 = browser.currentScene.createNode("fieldValue");
fieldValue236.name = "name";
fieldValue236.value = "r_thigh";
ProtoInstance235.fieldValue = new MFNode();

ProtoInstance235.fieldValue[0] = fieldValue236;

let fieldValue237 = browser.currentScene.createNode("fieldValue");
fieldValue237.name = "children";
let ProtoInstance238 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance238.name = "Site";
ProtoInstance238.DEF = "hanim_r_knee_crease";
let fieldValue239 = browser.currentScene.createNode("fieldValue");
fieldValue239.name = "name";
fieldValue239.value = "r_knee_crease";
ProtoInstance238.fieldValue = new MFNode();

ProtoInstance238.fieldValue[0] = fieldValue239;

let fieldValue240 = browser.currentScene.createNode("fieldValue");
fieldValue240.name = "translation";
fieldValue240.value = "-0.08250000327825546 0.49320000410079956 -0.032600000500679016";
ProtoInstance238.fieldValue[1] = fieldValue240;

fieldValue237.children = new MFNode();

fieldValue237.children[0] = ProtoInstance238;

let ProtoInstance241 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance241.name = "Site";
ProtoInstance241.DEF = "hanim_r_femoral_lateral_epicondyles";
let fieldValue242 = browser.currentScene.createNode("fieldValue");
fieldValue242.name = "name";
fieldValue242.value = "r_femoral_lateral_epicondyles";
ProtoInstance241.fieldValue = new MFNode();

ProtoInstance241.fieldValue[0] = fieldValue242;

let fieldValue243 = browser.currentScene.createNode("fieldValue");
fieldValue243.name = "translation";
fieldValue243.value = "-0.1421000063419342 0.4991999864578247 0.03099999949336052";
ProtoInstance241.fieldValue[1] = fieldValue243;

fieldValue237.children[1] = ProtoInstance241;

let ProtoInstance244 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance244.name = "Site";
ProtoInstance244.DEF = "hanim_r_femoral_medial_epicondyles";
let fieldValue245 = browser.currentScene.createNode("fieldValue");
fieldValue245.name = "name";
fieldValue245.value = "r_femoral_lateral_epicondyles";
ProtoInstance244.fieldValue = new MFNode();

ProtoInstance244.fieldValue[0] = fieldValue245;

let fieldValue246 = browser.currentScene.createNode("fieldValue");
fieldValue246.name = "translation";
fieldValue246.value = "-0.022099999710917473 0.5013999938964844 0.02889999933540821";
ProtoInstance244.fieldValue[1] = fieldValue246;

fieldValue237.children[2] = ProtoInstance244;

ProtoInstance235.fieldValue[1] = fieldValue237;

fieldValue187.children[1] = ProtoInstance235;

ProtoInstance183.fieldValue[3] = fieldValue187;

fieldValue118.children[1] = ProtoInstance183;

let ProtoInstance247 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance247.name = "Segment";
ProtoInstance247.DEF = "hanim_pelvis";
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
ProtoInstance249.DEF = "hanim_vl5";
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
fieldValue252.value = "0.00279999990016222 1.0568000078201294 -0.07760000228881836";
ProtoInstance249.fieldValue[2] = fieldValue252;

let fieldValue253 = browser.currentScene.createNode("fieldValue");
fieldValue253.name = "children";
let ProtoInstance254 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance254.name = "Joint";
ProtoInstance254.DEF = "hanim_skullbase";
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
fieldValue257.value = "0.004399999976158142 1.62090003490448 0.023600000888109207";
ProtoInstance254.fieldValue[2] = fieldValue257;

let fieldValue258 = browser.currentScene.createNode("fieldValue");
fieldValue258.name = "children";
let ProtoInstance259 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance259.name = "Segment";
ProtoInstance259.DEF = "hanim_skull";
let fieldValue260 = browser.currentScene.createNode("fieldValue");
fieldValue260.name = "name";
fieldValue260.value = "skull";
ProtoInstance259.fieldValue = new MFNode();

ProtoInstance259.fieldValue[0] = fieldValue260;

let fieldValue261 = browser.currentScene.createNode("fieldValue");
fieldValue261.name = "children";
let ProtoInstance262 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance262.name = "Site";
ProtoInstance262.DEF = "hanim_skull_tip";
let fieldValue263 = browser.currentScene.createNode("fieldValue");
fieldValue263.name = "name";
fieldValue263.value = "skull_tip";
ProtoInstance262.fieldValue = new MFNode();

ProtoInstance262.fieldValue[0] = fieldValue263;

let fieldValue264 = browser.currentScene.createNode("fieldValue");
fieldValue264.name = "translation";
fieldValue264.value = "0.004999999888241291 1.7503999471664429 0.005499999970197678";
ProtoInstance262.fieldValue[1] = fieldValue264;

fieldValue261.children = new MFNode();

fieldValue261.children[0] = ProtoInstance262;

let ProtoInstance265 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance265.name = "Site";
ProtoInstance265.DEF = "hanim_sellion";
let fieldValue266 = browser.currentScene.createNode("fieldValue");
fieldValue266.name = "name";
fieldValue266.value = "sellion";
ProtoInstance265.fieldValue = new MFNode();

ProtoInstance265.fieldValue[0] = fieldValue266;

let fieldValue267 = browser.currentScene.createNode("fieldValue");
fieldValue267.name = "translation";
fieldValue267.value = "0.005799999926239252 1.631600022315979 0.0851999968290329";
ProtoInstance265.fieldValue[1] = fieldValue267;

fieldValue261.children[1] = ProtoInstance265;

let ProtoInstance268 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance268.name = "Site";
ProtoInstance268.DEF = "hanim_r_infraorbitale";
let fieldValue269 = browser.currentScene.createNode("fieldValue");
fieldValue269.name = "name";
fieldValue269.value = "r_infraorbitale";
ProtoInstance268.fieldValue = new MFNode();

ProtoInstance268.fieldValue[0] = fieldValue269;

let fieldValue270 = browser.currentScene.createNode("fieldValue");
fieldValue270.name = "translation";
fieldValue270.value = "-0.02370000071823597 1.6171000003814697 0.07519999891519547";
ProtoInstance268.fieldValue[1] = fieldValue270;

fieldValue261.children[2] = ProtoInstance268;

let ProtoInstance271 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance271.name = "Site";
ProtoInstance271.DEF = "hanim_l_infraorbitale";
let fieldValue272 = browser.currentScene.createNode("fieldValue");
fieldValue272.name = "name";
fieldValue272.value = "l_infraorbitale";
ProtoInstance271.fieldValue = new MFNode();

ProtoInstance271.fieldValue[0] = fieldValue272;

let fieldValue273 = browser.currentScene.createNode("fieldValue");
fieldValue273.name = "translation";
fieldValue273.value = "0.0340999998152256 1.6171000003814697 0.07519999891519547";
ProtoInstance271.fieldValue[1] = fieldValue273;

fieldValue261.children[3] = ProtoInstance271;

let ProtoInstance274 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance274.name = "Site";
ProtoInstance274.DEF = "hanim_supramenton";
let fieldValue275 = browser.currentScene.createNode("fieldValue");
fieldValue275.name = "name";
fieldValue275.value = "supramenton";
ProtoInstance274.fieldValue = new MFNode();

ProtoInstance274.fieldValue[0] = fieldValue275;

let fieldValue276 = browser.currentScene.createNode("fieldValue");
fieldValue276.name = "translation";
fieldValue276.value = "0.006099999882280827 1.5410000085830688 0.08049999922513962";
ProtoInstance274.fieldValue[1] = fieldValue276;

fieldValue261.children[4] = ProtoInstance274;

let ProtoInstance277 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance277.name = "Site";
ProtoInstance277.DEF = "hanim_r_tragion";
let fieldValue278 = browser.currentScene.createNode("fieldValue");
fieldValue278.name = "name";
fieldValue278.value = "r_tragion";
ProtoInstance277.fieldValue = new MFNode();

ProtoInstance277.fieldValue[0] = fieldValue278;

let fieldValue279 = browser.currentScene.createNode("fieldValue");
fieldValue279.name = "translation";
fieldValue279.value = "-0.06459999829530716 1.6346999406814575 0.03020000085234642";
ProtoInstance277.fieldValue[1] = fieldValue279;

fieldValue261.children[5] = ProtoInstance277;

let ProtoInstance280 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance280.name = "Site";
ProtoInstance280.DEF = "hanim_r_gonion";
let fieldValue281 = browser.currentScene.createNode("fieldValue");
fieldValue281.name = "name";
fieldValue281.value = "r_gonion";
ProtoInstance280.fieldValue = new MFNode();

ProtoInstance280.fieldValue[0] = fieldValue281;

let fieldValue282 = browser.currentScene.createNode("fieldValue");
fieldValue282.name = "translation";
fieldValue282.value = "-0.052000001072883606 1.552899956703186 0.034699998795986176";
ProtoInstance280.fieldValue[1] = fieldValue282;

fieldValue261.children[6] = ProtoInstance280;

let ProtoInstance283 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance283.name = "Site";
ProtoInstance283.DEF = "hanim_l_tragion";
let fieldValue284 = browser.currentScene.createNode("fieldValue");
fieldValue284.name = "name";
fieldValue284.value = "l_tragion";
ProtoInstance283.fieldValue = new MFNode();

ProtoInstance283.fieldValue[0] = fieldValue284;

let fieldValue285 = browser.currentScene.createNode("fieldValue");
fieldValue285.name = "translation";
fieldValue285.value = "0.0738999992609024 1.6347999572753906 0.028200000524520874";
ProtoInstance283.fieldValue[1] = fieldValue285;

fieldValue261.children[7] = ProtoInstance283;

let ProtoInstance286 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance286.name = "Site";
ProtoInstance286.DEF = "hanim_l_gonion";
let fieldValue287 = browser.currentScene.createNode("fieldValue");
fieldValue287.name = "name";
fieldValue287.value = "l_gonion";
ProtoInstance286.fieldValue = new MFNode();

ProtoInstance286.fieldValue[0] = fieldValue287;

let fieldValue288 = browser.currentScene.createNode("fieldValue");
fieldValue288.name = "translation";
fieldValue288.value = "0.06310000270605087 1.5529999732971191 0.032999999821186066";
ProtoInstance286.fieldValue[1] = fieldValue288;

fieldValue261.children[8] = ProtoInstance286;

let ProtoInstance289 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance289.name = "Site";
ProtoInstance289.DEF = "hanim_nuchale";
let fieldValue290 = browser.currentScene.createNode("fieldValue");
fieldValue290.name = "name";
fieldValue290.value = "nuchale";
ProtoInstance289.fieldValue = new MFNode();

ProtoInstance289.fieldValue[0] = fieldValue290;

let fieldValue291 = browser.currentScene.createNode("fieldValue");
fieldValue291.name = "translation";
fieldValue291.value = "0.0038999998942017555 1.5972000360488892 -0.07959999889135361";
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
ProtoInstance292.DEF = "hanim_l_shoulder";
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
fieldValue295.value = "0.2029000073671341 1.437600016593933 -0.03869999945163727";
ProtoInstance292.fieldValue[2] = fieldValue295;

let fieldValue296 = browser.currentScene.createNode("fieldValue");
fieldValue296.name = "children";
let ProtoInstance297 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance297.name = "Joint";
ProtoInstance297.DEF = "hanim_l_elbow";
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
fieldValue300.value = "0.2013999968767166 1.135699987411499 -0.0681999996304512";
ProtoInstance297.fieldValue[2] = fieldValue300;

let fieldValue301 = browser.currentScene.createNode("fieldValue");
fieldValue301.name = "children";
let ProtoInstance302 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance302.name = "Joint";
ProtoInstance302.DEF = "hanim_l_radiocarpal";
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
fieldValue305.value = "0.19840000569820404 0.8662999868392944 -0.05829999968409538";
ProtoInstance302.fieldValue[2] = fieldValue305;

let fieldValue306 = browser.currentScene.createNode("fieldValue");
fieldValue306.name = "children";
let ProtoInstance307 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance307.name = "Segment";
ProtoInstance307.DEF = "hanim_l_hand";
let fieldValue308 = browser.currentScene.createNode("fieldValue");
fieldValue308.name = "name";
fieldValue308.value = "l_hand";
ProtoInstance307.fieldValue = new MFNode();

ProtoInstance307.fieldValue[0] = fieldValue308;

let fieldValue309 = browser.currentScene.createNode("fieldValue");
fieldValue309.name = "children";
let ProtoInstance310 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance310.name = "Site";
ProtoInstance310.DEF = "hanim_l_hand_tip";
let fieldValue311 = browser.currentScene.createNode("fieldValue");
fieldValue311.name = "name";
fieldValue311.value = "l_hand_tip";
ProtoInstance310.fieldValue = new MFNode();

ProtoInstance310.fieldValue[0] = fieldValue311;

let fieldValue312 = browser.currentScene.createNode("fieldValue");
fieldValue312.name = "translation";
fieldValue312.value = "0.20800000429153442 0.6730999946594238 -0.04910000041127205";
ProtoInstance310.fieldValue[1] = fieldValue312;

fieldValue309.children = new MFNode();

fieldValue309.children[0] = ProtoInstance310;

let ProtoInstance313 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance313.name = "Site";
ProtoInstance313.DEF = "hanim_l_metacarpal_phalanx_2";
let fieldValue314 = browser.currentScene.createNode("fieldValue");
fieldValue314.name = "name";
fieldValue314.value = "l_metacarpal_phalanx_2";
ProtoInstance313.fieldValue = new MFNode();

ProtoInstance313.fieldValue[0] = fieldValue314;

let fieldValue315 = browser.currentScene.createNode("fieldValue");
fieldValue315.name = "translation";
fieldValue315.value = "0.20090000331401825 0.8138999938964844 -0.02370000071823597";
ProtoInstance313.fieldValue[1] = fieldValue315;

fieldValue309.children[1] = ProtoInstance313;

let ProtoInstance316 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance316.name = "Site";
ProtoInstance316.DEF = "hanim_l_dactylion";
let fieldValue317 = browser.currentScene.createNode("fieldValue");
fieldValue317.name = "name";
fieldValue317.value = "l_dactylion";
ProtoInstance316.fieldValue = new MFNode();

ProtoInstance316.fieldValue[0] = fieldValue317;

let fieldValue318 = browser.currentScene.createNode("fieldValue");
fieldValue318.name = "translation";
fieldValue318.value = "0.20559999346733093 0.6743000149726868 -0.04820000007748604";
ProtoInstance316.fieldValue[1] = fieldValue318;

fieldValue309.children[2] = ProtoInstance316;

let ProtoInstance319 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance319.name = "Site";
ProtoInstance319.DEF = "hanim_l_ulnar_styloid";
let fieldValue320 = browser.currentScene.createNode("fieldValue");
fieldValue320.name = "name";
fieldValue320.value = "l_ulnar_styloid";
ProtoInstance319.fieldValue = new MFNode();

ProtoInstance319.fieldValue[0] = fieldValue320;

let fieldValue321 = browser.currentScene.createNode("fieldValue");
fieldValue321.name = "translation";
fieldValue321.value = "-0.2142000049352646 0.8529000282287598 -0.06480000168085098";
ProtoInstance319.fieldValue[1] = fieldValue321;

fieldValue309.children[3] = ProtoInstance319;

let ProtoInstance322 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance322.name = "Site";
ProtoInstance322.DEF = "hanim_l_metacarpal_phalanx_5";
let fieldValue323 = browser.currentScene.createNode("fieldValue");
fieldValue323.name = "name";
fieldValue323.value = "l_metacarpal_phalanx_5";
ProtoInstance322.fieldValue = new MFNode();

ProtoInstance322.fieldValue[0] = fieldValue323;

let fieldValue324 = browser.currentScene.createNode("fieldValue");
fieldValue324.name = "translation";
fieldValue324.value = "0.19290000200271606 0.7860000133514404 -0.11219999939203262";
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
ProtoInstance325.DEF = "hanim_l_forearm";
let fieldValue326 = browser.currentScene.createNode("fieldValue");
fieldValue326.name = "name";
fieldValue326.value = "l_forearm";
ProtoInstance325.fieldValue = new MFNode();

ProtoInstance325.fieldValue[0] = fieldValue326;

let fieldValue327 = browser.currentScene.createNode("fieldValue");
fieldValue327.name = "children";
let ProtoInstance328 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance328.name = "Site";
ProtoInstance328.DEF = "hanim_l_radial_styloid";
let fieldValue329 = browser.currentScene.createNode("fieldValue");
fieldValue329.name = "name";
fieldValue329.value = "l_radial_styloid";
ProtoInstance328.fieldValue = new MFNode();

ProtoInstance328.fieldValue[0] = fieldValue329;

let fieldValue330 = browser.currentScene.createNode("fieldValue");
fieldValue330.name = "translation";
fieldValue330.value = "0.19009999930858612 0.8644999861717224 -0.04149999842047691";
ProtoInstance328.fieldValue[1] = fieldValue330;

fieldValue327.children = new MFNode();

fieldValue327.children[0] = ProtoInstance328;

let ProtoInstance331 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance331.name = "Site";
ProtoInstance331.DEF = "hanim_l_olecranon";
let fieldValue332 = browser.currentScene.createNode("fieldValue");
fieldValue332.name = "name";
fieldValue332.value = "l_olecranon";
ProtoInstance331.fieldValue = new MFNode();

ProtoInstance331.fieldValue[0] = fieldValue332;

let fieldValue333 = browser.currentScene.createNode("fieldValue");
fieldValue333.name = "translation";
fieldValue333.value = "-0.19619999825954437 1.1375000476837158 -0.11230000108480453";
ProtoInstance331.fieldValue[1] = fieldValue333;

fieldValue327.children[1] = ProtoInstance331;

let ProtoInstance334 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance334.name = "Site";
ProtoInstance334.DEF = "hanim_l_humeral_medial_epicondyles";
let fieldValue335 = browser.currentScene.createNode("fieldValue");
fieldValue335.name = "name";
fieldValue335.value = "l_humeral_medial_epicondyles";
ProtoInstance334.fieldValue = new MFNode();

ProtoInstance334.fieldValue[0] = fieldValue335;

let fieldValue336 = browser.currentScene.createNode("fieldValue");
fieldValue336.name = "translation";
fieldValue336.value = "0.17350000143051147 1.1272000074386597 -0.11129999905824661";
ProtoInstance334.fieldValue[1] = fieldValue336;

fieldValue327.children[2] = ProtoInstance334;

let ProtoInstance337 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance337.name = "Site";
ProtoInstance337.DEF = "hanim_l_radiale";
let fieldValue338 = browser.currentScene.createNode("fieldValue");
fieldValue338.name = "name";
fieldValue338.value = "l_radiale";
ProtoInstance337.fieldValue = new MFNode();

ProtoInstance337.fieldValue[0] = fieldValue338;

let fieldValue339 = browser.currentScene.createNode("fieldValue");
fieldValue339.name = "translation";
fieldValue339.value = "0.21819999814033508 1.1211999654769897 -0.11670000106096268";
ProtoInstance337.fieldValue[1] = fieldValue339;

fieldValue327.children[3] = ProtoInstance337;

ProtoInstance325.fieldValue[1] = fieldValue327;

fieldValue301.children[1] = ProtoInstance325;

ProtoInstance297.fieldValue[3] = fieldValue301;

fieldValue296.children = new MFNode();

fieldValue296.children[0] = ProtoInstance297;

let ProtoInstance340 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance340.name = "Segment";
ProtoInstance340.DEF = "hanim_l_upperarm";
let fieldValue341 = browser.currentScene.createNode("fieldValue");
fieldValue341.name = "name";
fieldValue341.value = "l_upperarm";
ProtoInstance340.fieldValue = new MFNode();

ProtoInstance340.fieldValue[0] = fieldValue341;

let fieldValue342 = browser.currentScene.createNode("fieldValue");
fieldValue342.name = "children";
let ProtoInstance343 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance343.name = "Site";
ProtoInstance343.DEF = "hanim_l_humeral_lateral_epicondyles";
let fieldValue344 = browser.currentScene.createNode("fieldValue");
fieldValue344.name = "name";
fieldValue344.value = "l_humeral_lateral_epicondyles";
ProtoInstance343.fieldValue = new MFNode();

ProtoInstance343.fieldValue[0] = fieldValue344;

let fieldValue345 = browser.currentScene.createNode("fieldValue");
fieldValue345.name = "translation";
fieldValue345.value = "0.2280000001192093 1.1482000350952148 -0.10999999940395355";
ProtoInstance343.fieldValue[1] = fieldValue345;

fieldValue342.children = new MFNode();

fieldValue342.children[0] = ProtoInstance343;

ProtoInstance340.fieldValue[1] = fieldValue342;

fieldValue296.children[1] = ProtoInstance340;

ProtoInstance292.fieldValue[3] = fieldValue296;

fieldValue253.children[1] = ProtoInstance292;

let ProtoInstance346 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance346.name = "Joint";
ProtoInstance346.DEF = "hanim_r_shoulder";
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
fieldValue349.value = "-0.1906999945640564 1.4407000541687012 -0.032499998807907104";
ProtoInstance346.fieldValue[2] = fieldValue349;

let fieldValue350 = browser.currentScene.createNode("fieldValue");
fieldValue350.name = "children";
let ProtoInstance351 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance351.name = "Joint";
ProtoInstance351.DEF = "hanim_r_elbow";
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
fieldValue354.value = "-0.1949000060558319 1.138800024986267 -0.06199999898672104";
ProtoInstance351.fieldValue[2] = fieldValue354;

let fieldValue355 = browser.currentScene.createNode("fieldValue");
fieldValue355.name = "children";
let ProtoInstance356 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance356.name = "Joint";
ProtoInstance356.DEF = "hanim_r_radiocarpal";
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
fieldValue359.value = "-0.19589999318122864 0.8694000244140625 -0.05209999904036522";
ProtoInstance356.fieldValue[2] = fieldValue359;

let fieldValue360 = browser.currentScene.createNode("fieldValue");
fieldValue360.name = "children";
let ProtoInstance361 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance361.name = "Segment";
ProtoInstance361.DEF = "hanim_r_hand";
let fieldValue362 = browser.currentScene.createNode("fieldValue");
fieldValue362.name = "name";
fieldValue362.value = "r_hand";
ProtoInstance361.fieldValue = new MFNode();

ProtoInstance361.fieldValue[0] = fieldValue362;

let fieldValue363 = browser.currentScene.createNode("fieldValue");
fieldValue363.name = "children";
let ProtoInstance364 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance364.name = "Site";
ProtoInstance364.DEF = "hanim_r_hand_tip";
let fieldValue365 = browser.currentScene.createNode("fieldValue");
fieldValue365.name = "name";
fieldValue365.value = "r_hand_tip";
ProtoInstance364.fieldValue = new MFNode();

ProtoInstance364.fieldValue[0] = fieldValue365;

let fieldValue366 = browser.currentScene.createNode("fieldValue");
fieldValue366.name = "translation";
fieldValue366.value = "-0.19689999520778656 0.6758000254631042 -0.04270000010728836";
ProtoInstance364.fieldValue[1] = fieldValue366;

fieldValue363.children = new MFNode();

fieldValue363.children[0] = ProtoInstance364;

let ProtoInstance367 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance367.name = "Site";
ProtoInstance367.DEF = "hanim_r_metacarpal_phalanx_2";
let fieldValue368 = browser.currentScene.createNode("fieldValue");
fieldValue368.name = "name";
fieldValue368.value = "r_metacarpal_phalanx_2";
ProtoInstance367.fieldValue = new MFNode();

ProtoInstance367.fieldValue[0] = fieldValue368;

let fieldValue369 = browser.currentScene.createNode("fieldValue");
fieldValue369.name = "translation";
fieldValue369.value = "-0.19769999384880066 0.8169000148773193 -0.01769999973475933";
ProtoInstance367.fieldValue[1] = fieldValue369;

fieldValue363.children[1] = ProtoInstance367;

let ProtoInstance370 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance370.name = "Site";
ProtoInstance370.DEF = "hanim_r_dactylion";
let fieldValue371 = browser.currentScene.createNode("fieldValue");
fieldValue371.name = "name";
fieldValue371.value = "r_dactylion";
ProtoInstance370.fieldValue = new MFNode();

ProtoInstance370.fieldValue[0] = fieldValue371;

let fieldValue372 = browser.currentScene.createNode("fieldValue");
fieldValue372.name = "translation";
fieldValue372.value = "-0.1941000074148178 0.6772000193595886 -0.04230000078678131";
ProtoInstance370.fieldValue[1] = fieldValue372;

fieldValue363.children[2] = ProtoInstance370;

let ProtoInstance373 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance373.name = "Site";
ProtoInstance373.DEF = "hanim_r_ulnar_styloid";
let fieldValue374 = browser.currentScene.createNode("fieldValue");
fieldValue374.name = "name";
fieldValue374.value = "r_ulnar_styloid";
ProtoInstance373.fieldValue = new MFNode();

ProtoInstance373.fieldValue[0] = fieldValue374;

let fieldValue375 = browser.currentScene.createNode("fieldValue");
fieldValue375.name = "translation";
fieldValue375.value = "-0.21170000731945038 0.8561999797821045 -0.058400001376867294";
ProtoInstance373.fieldValue[1] = fieldValue375;

fieldValue363.children[3] = ProtoInstance373;

let ProtoInstance376 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance376.name = "Site";
ProtoInstance376.DEF = "hanim_r_metacarpal_phalanx_5";
let fieldValue377 = browser.currentScene.createNode("fieldValue");
fieldValue377.name = "name";
fieldValue377.value = "r_metacarpal_phalanx_5";
ProtoInstance376.fieldValue = new MFNode();

ProtoInstance376.fieldValue[0] = fieldValue377;

let fieldValue378 = browser.currentScene.createNode("fieldValue");
fieldValue378.name = "translation";
fieldValue378.value = "-0.19290000200271606 0.7889999747276306 -0.10639999806880951";
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
ProtoInstance379.DEF = "hanim_r_forearm";
let fieldValue380 = browser.currentScene.createNode("fieldValue");
fieldValue380.name = "name";
fieldValue380.value = "r_forearm";
ProtoInstance379.fieldValue = new MFNode();

ProtoInstance379.fieldValue[0] = fieldValue380;

let fieldValue381 = browser.currentScene.createNode("fieldValue");
fieldValue381.name = "children";
let ProtoInstance382 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance382.name = "Site";
ProtoInstance382.DEF = "hanim_r_radial_styloid";
let fieldValue383 = browser.currentScene.createNode("fieldValue");
fieldValue383.name = "name";
fieldValue383.value = "r_radial_styloid";
ProtoInstance382.fieldValue = new MFNode();

ProtoInstance382.fieldValue[0] = fieldValue383;

let fieldValue384 = browser.currentScene.createNode("fieldValue");
fieldValue384.name = "translation";
fieldValue384.value = "-0.188400000333786 0.8676000237464905 -0.035999998450279236";
ProtoInstance382.fieldValue[1] = fieldValue384;

fieldValue381.children = new MFNode();

fieldValue381.children[0] = ProtoInstance382;

let ProtoInstance385 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance385.name = "Site";
ProtoInstance385.DEF = "hanim_r_olecranon";
let fieldValue386 = browser.currentScene.createNode("fieldValue");
fieldValue386.name = "name";
fieldValue386.value = "r_olecranon";
ProtoInstance385.fieldValue = new MFNode();

ProtoInstance385.fieldValue[0] = fieldValue386;

let fieldValue387 = browser.currentScene.createNode("fieldValue");
fieldValue387.name = "translation";
fieldValue387.value = "-0.1906999945640564 1.1404999494552612 -0.10649999976158142";
ProtoInstance385.fieldValue[1] = fieldValue387;

fieldValue381.children[1] = ProtoInstance385;

let ProtoInstance388 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance388.name = "Site";
ProtoInstance388.DEF = "hanim_r_humeral_medial_epicondyles";
let fieldValue389 = browser.currentScene.createNode("fieldValue");
fieldValue389.name = "name";
fieldValue389.value = "r_humeral_medial_epicondyles";
ProtoInstance388.fieldValue = new MFNode();

ProtoInstance388.fieldValue[0] = fieldValue389;

let fieldValue390 = browser.currentScene.createNode("fieldValue");
fieldValue390.name = "translation";
fieldValue390.value = "-0.1679999977350235 1.1297999620437622 -0.10620000213384628";
ProtoInstance388.fieldValue[1] = fieldValue390;

fieldValue381.children[2] = ProtoInstance388;

let ProtoInstance391 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance391.name = "Site";
ProtoInstance391.DEF = "hanim_r_radiale";
let fieldValue392 = browser.currentScene.createNode("fieldValue");
fieldValue392.name = "name";
fieldValue392.value = "r_radiale";
ProtoInstance391.fieldValue = new MFNode();

ProtoInstance391.fieldValue[0] = fieldValue392;

let fieldValue393 = browser.currentScene.createNode("fieldValue");
fieldValue393.name = "translation";
fieldValue393.value = "-0.21299999952316284 1.1304999589920044 -0.10909999907016754";
ProtoInstance391.fieldValue[1] = fieldValue393;

fieldValue381.children[3] = ProtoInstance391;

ProtoInstance379.fieldValue[1] = fieldValue381;

fieldValue355.children[1] = ProtoInstance379;

ProtoInstance351.fieldValue[3] = fieldValue355;

fieldValue350.children = new MFNode();

fieldValue350.children[0] = ProtoInstance351;

let ProtoInstance394 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance394.name = "Segment";
ProtoInstance394.DEF = "hanim_r_upperarm";
let fieldValue395 = browser.currentScene.createNode("fieldValue");
fieldValue395.name = "name";
fieldValue395.value = "r_upperarm";
ProtoInstance394.fieldValue = new MFNode();

ProtoInstance394.fieldValue[0] = fieldValue395;

let fieldValue396 = browser.currentScene.createNode("fieldValue");
fieldValue396.name = "children";
let ProtoInstance397 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance397.name = "Site";
ProtoInstance397.DEF = "hanim_r_humeral_lateral_epicondyles";
let fieldValue398 = browser.currentScene.createNode("fieldValue");
fieldValue398.name = "name";
fieldValue398.value = "r_humeral_lateral_epicondyles";
ProtoInstance397.fieldValue = new MFNode();

ProtoInstance397.fieldValue[0] = fieldValue398;

let fieldValue399 = browser.currentScene.createNode("fieldValue");
fieldValue399.name = "translation";
fieldValue399.value = "-0.2223999947309494 1.1517000198364258 -0.10329999774694443";
ProtoInstance397.fieldValue[1] = fieldValue399;

fieldValue396.children = new MFNode();

fieldValue396.children[0] = ProtoInstance397;

ProtoInstance394.fieldValue[1] = fieldValue396;

fieldValue350.children[1] = ProtoInstance394;

ProtoInstance346.fieldValue[3] = fieldValue350;

fieldValue253.children[2] = ProtoInstance346;

let ProtoInstance400 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance400.name = "Segment";
ProtoInstance400.DEF = "hanim_l5";
let fieldValue401 = browser.currentScene.createNode("fieldValue");
fieldValue401.name = "name";
fieldValue401.value = "l5";
ProtoInstance400.fieldValue = new MFNode();

ProtoInstance400.fieldValue[0] = fieldValue401;

let fieldValue402 = browser.currentScene.createNode("fieldValue");
fieldValue402.name = "children";
let ProtoInstance403 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance403.name = "Site";
ProtoInstance403.DEF = "hanim_r_clavicale";
let fieldValue404 = browser.currentScene.createNode("fieldValue");
fieldValue404.name = "name";
fieldValue404.value = "r_clavicale";
ProtoInstance403.fieldValue = new MFNode();

ProtoInstance403.fieldValue[0] = fieldValue404;

let fieldValue405 = browser.currentScene.createNode("fieldValue");
fieldValue405.name = "translation";
fieldValue405.value = "-0.011500000022351742 1.4943000078201294 0.03999999910593033";
ProtoInstance403.fieldValue[1] = fieldValue405;

fieldValue402.children = new MFNode();

fieldValue402.children[0] = ProtoInstance403;

let ProtoInstance406 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance406.name = "Site";
ProtoInstance406.DEF = "hanim_suprasternale";
let fieldValue407 = browser.currentScene.createNode("fieldValue");
fieldValue407.name = "name";
fieldValue407.value = "suprasternale";
ProtoInstance406.fieldValue = new MFNode();

ProtoInstance406.fieldValue[0] = fieldValue407;

let fieldValue408 = browser.currentScene.createNode("fieldValue");
fieldValue408.name = "translation";
fieldValue408.value = "0.00839999970048666 1.4714000225067139 0.05510000139474869";
ProtoInstance406.fieldValue[1] = fieldValue408;

fieldValue402.children[1] = ProtoInstance406;

let ProtoInstance409 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance409.name = "Site";
ProtoInstance409.DEF = "hanim_l_clavicale";
let fieldValue410 = browser.currentScene.createNode("fieldValue");
fieldValue410.name = "name";
fieldValue410.value = "l_clavicale";
ProtoInstance409.fieldValue = new MFNode();

ProtoInstance409.fieldValue[0] = fieldValue410;

let fieldValue411 = browser.currentScene.createNode("fieldValue");
fieldValue411.name = "translation";
fieldValue411.value = "0.02710000053048134 1.4943000078201294 0.039400000125169754";
ProtoInstance409.fieldValue[1] = fieldValue411;

fieldValue402.children[2] = ProtoInstance409;

let ProtoInstance412 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance412.name = "Site";
ProtoInstance412.DEF = "hanim_r_thelion";
let fieldValue413 = browser.currentScene.createNode("fieldValue");
fieldValue413.name = "name";
fieldValue413.value = "r_thelion";
ProtoInstance412.fieldValue = new MFNode();

ProtoInstance412.fieldValue[0] = fieldValue413;

let fieldValue414 = browser.currentScene.createNode("fieldValue");
fieldValue414.name = "translation";
fieldValue414.value = "-0.07360000163316727 1.3385000228881836 0.1216999962925911";
ProtoInstance412.fieldValue[1] = fieldValue414;

fieldValue402.children[3] = ProtoInstance412;

let ProtoInstance415 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance415.name = "Site";
ProtoInstance415.DEF = "hanim_l_thelion";
let fieldValue416 = browser.currentScene.createNode("fieldValue");
fieldValue416.name = "name";
fieldValue416.value = "l_thelion";
ProtoInstance415.fieldValue = new MFNode();

ProtoInstance415.fieldValue[0] = fieldValue416;

let fieldValue417 = browser.currentScene.createNode("fieldValue");
fieldValue417.name = "translation";
fieldValue417.value = "0.09179999679327011 1.3381999731063843 0.11919999867677689";
ProtoInstance415.fieldValue[1] = fieldValue417;

fieldValue402.children[4] = ProtoInstance415;

let ProtoInstance418 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance418.name = "Site";
ProtoInstance418.DEF = "hanim_substernale";
let fieldValue419 = browser.currentScene.createNode("fieldValue");
fieldValue419.name = "name";
fieldValue419.value = "substernale";
ProtoInstance418.fieldValue = new MFNode();

ProtoInstance418.fieldValue[0] = fieldValue419;

let fieldValue420 = browser.currentScene.createNode("fieldValue");
fieldValue420.name = "translation";
fieldValue420.value = "0.008500000461935997 1.2994999885559082 0.11469999700784683";
ProtoInstance418.fieldValue[1] = fieldValue420;

fieldValue402.children[5] = ProtoInstance418;

let ProtoInstance421 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance421.name = "Site";
ProtoInstance421.DEF = "hanim_r_rib10";
let fieldValue422 = browser.currentScene.createNode("fieldValue");
fieldValue422.name = "name";
fieldValue422.value = "r_rib10";
ProtoInstance421.fieldValue = new MFNode();

ProtoInstance421.fieldValue[0] = fieldValue422;

let fieldValue423 = browser.currentScene.createNode("fieldValue");
fieldValue423.name = "translation";
fieldValue423.value = "-0.07109999656677246 1.194100022315979 0.10159999877214432";
ProtoInstance421.fieldValue[1] = fieldValue423;

fieldValue402.children[6] = ProtoInstance421;

let ProtoInstance424 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance424.name = "Site";
ProtoInstance424.DEF = "hanim_l_rib10";
let fieldValue425 = browser.currentScene.createNode("fieldValue");
fieldValue425.name = "name";
fieldValue425.value = "l_rib10";
ProtoInstance424.fieldValue = new MFNode();

ProtoInstance424.fieldValue[0] = fieldValue425;

let fieldValue426 = browser.currentScene.createNode("fieldValue");
fieldValue426.name = "translation";
fieldValue426.value = "0.08709999918937683 1.1924999952316284 0.09920000284910202";
ProtoInstance424.fieldValue[1] = fieldValue426;

fieldValue402.children[7] = ProtoInstance424;

let ProtoInstance427 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance427.name = "Site";
ProtoInstance427.DEF = "hanim_cervicale";
let fieldValue428 = browser.currentScene.createNode("fieldValue");
fieldValue428.name = "name";
fieldValue428.value = "cervicale";
ProtoInstance427.fieldValue = new MFNode();

ProtoInstance427.fieldValue[0] = fieldValue428;

let fieldValue429 = browser.currentScene.createNode("fieldValue");
fieldValue429.name = "translation";
fieldValue429.value = "0.006399999838322401 1.5199999809265137 -0.08150000125169754";
ProtoInstance427.fieldValue[1] = fieldValue429;

fieldValue402.children[8] = ProtoInstance427;

let ProtoInstance430 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance430.name = "Site";
ProtoInstance430.DEF = "hanim_spine_2_lower_back";
let fieldValue431 = browser.currentScene.createNode("fieldValue");
fieldValue431.name = "name";
fieldValue431.value = "spine_2_lower_back";
ProtoInstance430.fieldValue = new MFNode();

ProtoInstance430.fieldValue[0] = fieldValue431;

let fieldValue432 = browser.currentScene.createNode("fieldValue");
fieldValue432.name = "translation";
fieldValue432.value = "0.004900000058114529 1.1907999515533447 -0.11129999905824661";
ProtoInstance430.fieldValue[1] = fieldValue432;

fieldValue402.children[9] = ProtoInstance430;

let ProtoInstance433 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance433.name = "Site";
ProtoInstance433.DEF = "hanim_waist_preferred_posterior";
let fieldValue434 = browser.currentScene.createNode("fieldValue");
fieldValue434.name = "name";
fieldValue434.value = "waist_preferred_posterior";
ProtoInstance433.fieldValue = new MFNode();

ProtoInstance433.fieldValue[0] = fieldValue434;

let fieldValue435 = browser.currentScene.createNode("fieldValue");
fieldValue435.name = "translation";
fieldValue435.value = "0.28999999165534973 1.0915000438690186 -0.10909999907016754";
ProtoInstance433.fieldValue[1] = fieldValue435;

fieldValue402.children[10] = ProtoInstance433;

let ProtoInstance436 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance436.name = "Site";
ProtoInstance436.DEF = "hanim_r_acromion";
let fieldValue437 = browser.currentScene.createNode("fieldValue");
fieldValue437.name = "name";
fieldValue437.value = "r_acromion";
ProtoInstance436.fieldValue = new MFNode();

ProtoInstance436.fieldValue[0] = fieldValue437;

let fieldValue438 = browser.currentScene.createNode("fieldValue");
fieldValue438.name = "translation";
fieldValue438.value = "-0.19050000607967377 1.479099988937378 -0.04309999942779541";
ProtoInstance436.fieldValue[1] = fieldValue438;

fieldValue402.children[11] = ProtoInstance436;

let ProtoInstance439 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance439.name = "Site";
ProtoInstance439.DEF = "hanim_r_axilla_proximal";
let fieldValue440 = browser.currentScene.createNode("fieldValue");
fieldValue440.name = "name";
fieldValue440.value = "r_axilla_proximal";
ProtoInstance439.fieldValue = new MFNode();

ProtoInstance439.fieldValue[0] = fieldValue440;

let fieldValue441 = browser.currentScene.createNode("fieldValue");
fieldValue441.name = "translation";
fieldValue441.value = "-0.16259999573230743 1.4071999788284302 -0.003100000089034438";
ProtoInstance439.fieldValue[1] = fieldValue441;

fieldValue402.children[12] = ProtoInstance439;

let ProtoInstance442 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance442.name = "Site";
ProtoInstance442.DEF = "hanim_r_axilla_distal";
let fieldValue443 = browser.currentScene.createNode("fieldValue");
fieldValue443.name = "name";
fieldValue443.value = "r_axilla_distal";
ProtoInstance442.fieldValue = new MFNode();

ProtoInstance442.fieldValue[0] = fieldValue443;

let fieldValue444 = browser.currentScene.createNode("fieldValue");
fieldValue444.name = "translation";
fieldValue444.value = "-0.16030000150203705 1.4098000526428223 -0.08259999752044678";
ProtoInstance442.fieldValue[1] = fieldValue444;

fieldValue402.children[13] = ProtoInstance442;

let ProtoInstance445 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance445.name = "Site";
ProtoInstance445.DEF = "hanim_l_acromion";
let fieldValue446 = browser.currentScene.createNode("fieldValue");
fieldValue446.name = "name";
fieldValue446.value = "l_acromion";
ProtoInstance445.fieldValue = new MFNode();

ProtoInstance445.fieldValue[0] = fieldValue446;

let fieldValue447 = browser.currentScene.createNode("fieldValue");
fieldValue447.name = "translation";
fieldValue447.value = "0.20319999754428864 1.4759999513626099 -0.04899999871850014";
ProtoInstance445.fieldValue[1] = fieldValue447;

fieldValue402.children[14] = ProtoInstance445;

let ProtoInstance448 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance448.name = "Site";
ProtoInstance448.DEF = "hanim_l_axilla_proximal";
let fieldValue449 = browser.currentScene.createNode("fieldValue");
fieldValue449.name = "name";
fieldValue449.value = "l_axilla_proximal";
ProtoInstance448.fieldValue = new MFNode();

ProtoInstance448.fieldValue[0] = fieldValue449;

let fieldValue450 = browser.currentScene.createNode("fieldValue");
fieldValue450.name = "translation";
fieldValue450.value = "0.1776999980211258 1.406499981880188 -0.007499999832361937";
ProtoInstance448.fieldValue[1] = fieldValue450;

fieldValue402.children[15] = ProtoInstance448;

let ProtoInstance451 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance451.name = "Site";
ProtoInstance451.DEF = "hanim_l_axilla_distal";
let fieldValue452 = browser.currentScene.createNode("fieldValue");
fieldValue452.name = "name";
fieldValue452.value = "l_axilla_distal";
ProtoInstance451.fieldValue = new MFNode();

ProtoInstance451.fieldValue[0] = fieldValue452;

let fieldValue453 = browser.currentScene.createNode("fieldValue");
fieldValue453.name = "translation";
fieldValue453.value = "0.17059999704360962 1.4071999788284302 -0.08749999850988388";
ProtoInstance451.fieldValue[1] = fieldValue453;

fieldValue402.children[16] = ProtoInstance451;

let ProtoInstance454 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance454.name = "Site";
ProtoInstance454.DEF = "hanim_r_neck_base";
let fieldValue455 = browser.currentScene.createNode("fieldValue");
fieldValue455.name = "name";
fieldValue455.value = "r_neck_base";
ProtoInstance454.fieldValue = new MFNode();

ProtoInstance454.fieldValue[0] = fieldValue455;

let fieldValue456 = browser.currentScene.createNode("fieldValue");
fieldValue456.name = "translation";
fieldValue456.value = "-0.04190000146627426 1.5148999691009521 -0.02199999988079071";
ProtoInstance454.fieldValue[1] = fieldValue456;

fieldValue402.children[17] = ProtoInstance454;

let ProtoInstance457 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance457.name = "Site";
ProtoInstance457.DEF = "hanim_l_neck_base";
let fieldValue458 = browser.currentScene.createNode("fieldValue");
fieldValue458.name = "name";
fieldValue458.value = "l_neck_base";
ProtoInstance457.fieldValue = new MFNode();

ProtoInstance457.fieldValue[0] = fieldValue458;

let fieldValue459 = browser.currentScene.createNode("fieldValue");
fieldValue459.name = "translation";
fieldValue459.value = "0.06459999829530716 1.5140999555587769 -0.03799999877810478";
ProtoInstance457.fieldValue[1] = fieldValue459;

fieldValue402.children[18] = ProtoInstance457;

let ProtoInstance460 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance460.name = "Site";
ProtoInstance460.DEF = "hanim_navel";
let fieldValue461 = browser.currentScene.createNode("fieldValue");
fieldValue461.name = "name";
fieldValue461.value = "navel";
ProtoInstance460.fieldValue = new MFNode();

ProtoInstance460.fieldValue[0] = fieldValue461;

let fieldValue462 = browser.currentScene.createNode("fieldValue");
fieldValue462.name = "translation";
fieldValue462.value = "0.006899999920278788 1.09660005569458 0.10170000046491623";
ProtoInstance460.fieldValue[1] = fieldValue462;

fieldValue402.children[19] = ProtoInstance460;

ProtoInstance400.fieldValue[1] = fieldValue402;

fieldValue253.children[3] = ProtoInstance400;

ProtoInstance249.fieldValue[3] = fieldValue253;

fieldValue113.children[1] = ProtoInstance249;

let ProtoInstance463 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance463.name = "Segment";
ProtoInstance463.DEF = "hanim_sacrum";
let fieldValue464 = browser.currentScene.createNode("fieldValue");
fieldValue464.name = "name";
fieldValue464.value = "sacrum";
ProtoInstance463.fieldValue = new MFNode();

ProtoInstance463.fieldValue[0] = fieldValue464;

let fieldValue465 = browser.currentScene.createNode("fieldValue");
fieldValue465.name = "children";
let ProtoInstance466 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance466.name = "Site";
ProtoInstance466.DEF = "hanim_r_asis";
let fieldValue467 = browser.currentScene.createNode("fieldValue");
fieldValue467.name = "name";
fieldValue467.value = "r_asis";
ProtoInstance466.fieldValue = new MFNode();

ProtoInstance466.fieldValue[0] = fieldValue467;

let fieldValue468 = browser.currentScene.createNode("fieldValue");
fieldValue468.name = "translation";
fieldValue468.value = "-0.08869999647140503 1.0020999908447266 0.1111999973654747";
ProtoInstance466.fieldValue[1] = fieldValue468;

fieldValue465.children = new MFNode();

fieldValue465.children[0] = ProtoInstance466;

let ProtoInstance469 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance469.name = "Site";
ProtoInstance469.DEF = "hanim_l_asis";
let fieldValue470 = browser.currentScene.createNode("fieldValue");
fieldValue470.name = "name";
fieldValue470.value = "l_asis";
ProtoInstance469.fieldValue = new MFNode();

ProtoInstance469.fieldValue[0] = fieldValue470;

let fieldValue471 = browser.currentScene.createNode("fieldValue");
fieldValue471.name = "translation";
fieldValue471.value = "0.0925000011920929 0.9983000159263611 0.10520000010728836";
ProtoInstance469.fieldValue[1] = fieldValue471;

fieldValue465.children[1] = ProtoInstance469;

let ProtoInstance472 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance472.name = "Site";
ProtoInstance472.DEF = "hanim_r_iliocristale";
let fieldValue473 = browser.currentScene.createNode("fieldValue");
fieldValue473.name = "name";
fieldValue473.value = "r_iliocristale";
ProtoInstance472.fieldValue = new MFNode();

ProtoInstance472.fieldValue[0] = fieldValue473;

let fieldValue474 = browser.currentScene.createNode("fieldValue");
fieldValue474.name = "translation";
fieldValue474.value = "-0.1525000035762787 1.0628000497817993 0.0035000001080334187";
ProtoInstance472.fieldValue[1] = fieldValue474;

fieldValue465.children[2] = ProtoInstance472;

let ProtoInstance475 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance475.name = "Site";
ProtoInstance475.DEF = "hanim_r_trochanterion";
let fieldValue476 = browser.currentScene.createNode("fieldValue");
fieldValue476.name = "name";
fieldValue476.value = "r_trochanterion";
ProtoInstance475.fieldValue = new MFNode();

ProtoInstance475.fieldValue[0] = fieldValue476;

let fieldValue477 = browser.currentScene.createNode("fieldValue");
fieldValue477.name = "translation";
fieldValue477.value = "-0.1688999980688095 0.8418999910354614 0.03519999980926514";
ProtoInstance475.fieldValue[1] = fieldValue477;

fieldValue465.children[3] = ProtoInstance475;

let ProtoInstance478 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance478.name = "Site";
ProtoInstance478.DEF = "hanim_l_iliocristale";
let fieldValue479 = browser.currentScene.createNode("fieldValue");
fieldValue479.name = "name";
fieldValue479.value = "l_iliocristale";
ProtoInstance478.fieldValue = new MFNode();

ProtoInstance478.fieldValue[0] = fieldValue479;

let fieldValue480 = browser.currentScene.createNode("fieldValue");
fieldValue480.name = "translation";
fieldValue480.value = "0.16120000183582306 1.0536999702453613 0.0007999999797903001";
ProtoInstance478.fieldValue[1] = fieldValue480;

fieldValue465.children[4] = ProtoInstance478;

let ProtoInstance481 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance481.name = "Site";
ProtoInstance481.DEF = "hanim_l_trochanterion";
let fieldValue482 = browser.currentScene.createNode("fieldValue");
fieldValue482.name = "name";
fieldValue482.value = "l_trochanterion";
ProtoInstance481.fieldValue = new MFNode();

ProtoInstance481.fieldValue[0] = fieldValue482;

let fieldValue483 = browser.currentScene.createNode("fieldValue");
fieldValue483.name = "translation";
fieldValue483.value = "0.16769999265670776 0.8335999846458435 0.030300000682473183";
ProtoInstance481.fieldValue[1] = fieldValue483;

fieldValue465.children[5] = ProtoInstance481;

let ProtoInstance484 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance484.name = "Site";
ProtoInstance484.DEF = "hanim_r_psis";
let fieldValue485 = browser.currentScene.createNode("fieldValue");
fieldValue485.name = "name";
fieldValue485.value = "r_psis";
ProtoInstance484.fieldValue = new MFNode();

ProtoInstance484.fieldValue[0] = fieldValue485;

let fieldValue486 = browser.currentScene.createNode("fieldValue");
fieldValue486.name = "translation";
fieldValue486.value = "-0.07159999758005142 1.0190000534057617 -0.11379999667406082";
ProtoInstance484.fieldValue[1] = fieldValue486;

fieldValue465.children[6] = ProtoInstance484;

let ProtoInstance487 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance487.name = "Site";
ProtoInstance487.DEF = "hanim_l_psis";
let fieldValue488 = browser.currentScene.createNode("fieldValue");
fieldValue488.name = "name";
fieldValue488.value = "l_psis";
ProtoInstance487.fieldValue = new MFNode();

ProtoInstance487.fieldValue[0] = fieldValue488;

let fieldValue489 = browser.currentScene.createNode("fieldValue");
fieldValue489.name = "translation";
fieldValue489.value = "0.07739999890327454 1.0190000534057617 -0.11509999632835388";
ProtoInstance487.fieldValue[1] = fieldValue489;

fieldValue465.children[7] = ProtoInstance487;

let ProtoInstance490 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance490.name = "Site";
ProtoInstance490.DEF = "hanim_crotch";
let fieldValue491 = browser.currentScene.createNode("fieldValue");
fieldValue491.name = "name";
fieldValue491.value = "crotch";
ProtoInstance490.fieldValue = new MFNode();

ProtoInstance490.fieldValue[0] = fieldValue491;

let fieldValue492 = browser.currentScene.createNode("fieldValue");
fieldValue492.name = "translation";
fieldValue492.value = "0.0034000000450760126 0.8266000151634216 0.025699999183416367";
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
ProtoInstance494.name = "Joint";
ProtoInstance494.DEF = "hanim_humanoid_root";
let fieldValue495 = browser.currentScene.createNode("fieldValue");
fieldValue495.name = "stiffness";
fieldValue495.value = "1 1 1";
ProtoInstance494.fieldValue = new MFNode();

ProtoInstance494.fieldValue[0] = fieldValue495;

let fieldValue496 = browser.currentScene.createNode("fieldValue");
fieldValue496.name = "name";
fieldValue496.value = "humanoid_root";
ProtoInstance494.fieldValue[1] = fieldValue496;

let fieldValue497 = browser.currentScene.createNode("fieldValue");
fieldValue497.name = "center";
fieldValue497.value = "0 0.8240000009536743 0.027699999511241913";
ProtoInstance494.fieldValue[2] = fieldValue497;

let fieldValue498 = browser.currentScene.createNode("fieldValue");
fieldValue498.name = "children";
let ProtoInstance499 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance499.name = "Joint";
ProtoInstance499.DEF = "hanim_sacroiliac";
let fieldValue500 = browser.currentScene.createNode("fieldValue");
fieldValue500.name = "stiffness";
fieldValue500.value = "1 1 1";
ProtoInstance499.fieldValue = new MFNode();

ProtoInstance499.fieldValue[0] = fieldValue500;

let fieldValue501 = browser.currentScene.createNode("fieldValue");
fieldValue501.name = "name";
fieldValue501.value = "sacroiliac";
ProtoInstance499.fieldValue[1] = fieldValue501;

let fieldValue502 = browser.currentScene.createNode("fieldValue");
fieldValue502.name = "center";
fieldValue502.value = "0 0.914900004863739 0.0015999999595806003";
ProtoInstance499.fieldValue[2] = fieldValue502;

let fieldValue503 = browser.currentScene.createNode("fieldValue");
fieldValue503.name = "children";
let ProtoInstance504 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance504.name = "Joint";
ProtoInstance504.DEF = "hanim_l_hip";
let fieldValue505 = browser.currentScene.createNode("fieldValue");
fieldValue505.name = "stiffness";
fieldValue505.value = "1 1 1";
ProtoInstance504.fieldValue = new MFNode();

ProtoInstance504.fieldValue[0] = fieldValue505;

let fieldValue506 = browser.currentScene.createNode("fieldValue");
fieldValue506.name = "name";
fieldValue506.value = "l_hip";
ProtoInstance504.fieldValue[1] = fieldValue506;

let fieldValue507 = browser.currentScene.createNode("fieldValue");
fieldValue507.name = "center";
fieldValue507.value = "0.09610000252723694 0.9124000072479248 -0.00009999999747378752";
ProtoInstance504.fieldValue[2] = fieldValue507;

let fieldValue508 = browser.currentScene.createNode("fieldValue");
fieldValue508.name = "children";
let ProtoInstance509 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance509.name = "Joint";
ProtoInstance509.DEF = "hanim_l_knee";
let fieldValue510 = browser.currentScene.createNode("fieldValue");
fieldValue510.name = "stiffness";
fieldValue510.value = "1 1 1";
ProtoInstance509.fieldValue = new MFNode();

ProtoInstance509.fieldValue[0] = fieldValue510;

let fieldValue511 = browser.currentScene.createNode("fieldValue");
fieldValue511.name = "name";
fieldValue511.value = "l_knee";
ProtoInstance509.fieldValue[1] = fieldValue511;

let fieldValue512 = browser.currentScene.createNode("fieldValue");
fieldValue512.name = "center";
fieldValue512.value = "0.10400000214576721 0.48669999837875366 0.030799999833106995";
ProtoInstance509.fieldValue[2] = fieldValue512;

let fieldValue513 = browser.currentScene.createNode("fieldValue");
fieldValue513.name = "children";
let ProtoInstance514 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance514.name = "Joint";
ProtoInstance514.DEF = "hanim_l_talocrural";
let fieldValue515 = browser.currentScene.createNode("fieldValue");
fieldValue515.name = "stiffness";
fieldValue515.value = "1 1 1";
ProtoInstance514.fieldValue = new MFNode();

ProtoInstance514.fieldValue[0] = fieldValue515;

let fieldValue516 = browser.currentScene.createNode("fieldValue");
fieldValue516.name = "name";
fieldValue516.value = "l_talocrural";
ProtoInstance514.fieldValue[1] = fieldValue516;

let fieldValue517 = browser.currentScene.createNode("fieldValue");
fieldValue517.name = "center";
fieldValue517.value = "0.11010000109672546 0.06560000032186508 -0.07360000163316727";
ProtoInstance514.fieldValue[2] = fieldValue517;

let fieldValue518 = browser.currentScene.createNode("fieldValue");
fieldValue518.name = "children";
let ProtoInstance519 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance519.name = "Joint";
ProtoInstance519.DEF = "hanim_l_metatarsophalangeal_";
let fieldValue520 = browser.currentScene.createNode("fieldValue");
fieldValue520.name = "stiffness";
fieldValue520.value = "1 1 1";
ProtoInstance519.fieldValue = new MFNode();

ProtoInstance519.fieldValue[0] = fieldValue520;

let fieldValue521 = browser.currentScene.createNode("fieldValue");
fieldValue521.name = "name";
fieldValue521.value = "l_metatarsophalangeal_";
ProtoInstance519.fieldValue[1] = fieldValue521;

let fieldValue522 = browser.currentScene.createNode("fieldValue");
fieldValue522.name = "center";
fieldValue522.value = "0.10859999805688858 0.00009999999747378752 0.03680000081658363";
ProtoInstance519.fieldValue[2] = fieldValue522;

let fieldValue523 = browser.currentScene.createNode("fieldValue");
fieldValue523.name = "children";
let ProtoInstance524 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance524.name = "Segment";
ProtoInstance524.DEF = "hanim_l_middistal";
let fieldValue525 = browser.currentScene.createNode("fieldValue");
fieldValue525.name = "name";
fieldValue525.value = "l_middistal";
ProtoInstance524.fieldValue = new MFNode();

ProtoInstance524.fieldValue[0] = fieldValue525;

let fieldValue526 = browser.currentScene.createNode("fieldValue");
fieldValue526.name = "children";
let ProtoInstance527 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance527.name = "Site";
ProtoInstance527.DEF = "hanim_l_middistal_tip";
let fieldValue528 = browser.currentScene.createNode("fieldValue");
fieldValue528.name = "name";
fieldValue528.value = "l_middistal_tip";
ProtoInstance527.fieldValue = new MFNode();

ProtoInstance527.fieldValue[0] = fieldValue528;

let fieldValue529 = browser.currentScene.createNode("fieldValue");
fieldValue529.name = "translation";
fieldValue529.value = "0.13539999723434448 0.0015999999595806003 0.147599995136261";
ProtoInstance527.fieldValue[1] = fieldValue529;

fieldValue526.children = new MFNode();

fieldValue526.children[0] = ProtoInstance527;

let ProtoInstance530 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance530.name = "Site";
ProtoInstance530.DEF = "hanim_l_tarsal_interphalangeal_phalanx_5";
let fieldValue531 = browser.currentScene.createNode("fieldValue");
fieldValue531.name = "name";
fieldValue531.value = "l_tarsal_interphalangeal_phalanx_5";
ProtoInstance530.fieldValue = new MFNode();

ProtoInstance530.fieldValue[0] = fieldValue531;

let fieldValue532 = browser.currentScene.createNode("fieldValue");
fieldValue532.name = "translation";
fieldValue532.value = "0.18250000476837158 0.007000000216066837 0.09279999881982803";
ProtoInstance530.fieldValue[1] = fieldValue532;

fieldValue526.children[1] = ProtoInstance530;

let ProtoInstance533 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance533.name = "Site";
ProtoInstance533.DEF = "hanim_l_tarsal_interphalangeal_phalanx_1";
let fieldValue534 = browser.currentScene.createNode("fieldValue");
fieldValue534.name = "name";
fieldValue534.value = "l_tarsal_interphalangeal_phalanx_1";
ProtoInstance533.fieldValue = new MFNode();

ProtoInstance533.fieldValue[0] = fieldValue534;

let fieldValue535 = browser.currentScene.createNode("fieldValue");
fieldValue535.name = "translation";
fieldValue535.value = "0.08160000294446945 0.02319999970495701 0.010599999688565731";
ProtoInstance533.fieldValue[1] = fieldValue535;

fieldValue526.children[2] = ProtoInstance533;

let ProtoInstance536 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance536.name = "Site";
ProtoInstance536.DEF = "hanim_l_tarsal_distal_phalanx_2";
let fieldValue537 = browser.currentScene.createNode("fieldValue");
fieldValue537.name = "name";
fieldValue537.value = "l_tarsal_distal_phalanx_2";
ProtoInstance536.fieldValue = new MFNode();

ProtoInstance536.fieldValue[0] = fieldValue537;

let fieldValue538 = browser.currentScene.createNode("fieldValue");
fieldValue538.name = "translation";
fieldValue538.value = "0.11949999630451202 0.007899999618530273 0.14329999685287476";
ProtoInstance536.fieldValue[1] = fieldValue538;

fieldValue526.children[3] = ProtoInstance536;

ProtoInstance524.fieldValue[1] = fieldValue526;

fieldValue523.children = new MFNode();

fieldValue523.children[0] = ProtoInstance524;

ProtoInstance519.fieldValue[3] = fieldValue523;

fieldValue518.children = new MFNode();

fieldValue518.children[0] = ProtoInstance519;

let ProtoInstance539 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance539.name = "Segment";
ProtoInstance539.DEF = "hanim_l_hindfoot";
let fieldValue540 = browser.currentScene.createNode("fieldValue");
fieldValue540.name = "name";
fieldValue540.value = "l_hindfoot";
ProtoInstance539.fieldValue = new MFNode();

ProtoInstance539.fieldValue[0] = fieldValue540;

let fieldValue541 = browser.currentScene.createNode("fieldValue");
fieldValue541.name = "children";
let ProtoInstance542 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance542.name = "Site";
ProtoInstance542.DEF = "hanim_l_lateral_malleolus";
let fieldValue543 = browser.currentScene.createNode("fieldValue");
fieldValue543.name = "name";
fieldValue543.value = "l_lateral_malleolus";
ProtoInstance542.fieldValue = new MFNode();

ProtoInstance542.fieldValue[0] = fieldValue543;

let fieldValue544 = browser.currentScene.createNode("fieldValue");
fieldValue544.name = "translation";
fieldValue544.value = "0.13079999387264252 0.059700001031160355 -0.10320000350475311";
ProtoInstance542.fieldValue[1] = fieldValue544;

fieldValue541.children = new MFNode();

fieldValue541.children[0] = ProtoInstance542;

let ProtoInstance545 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance545.name = "Site";
ProtoInstance545.DEF = "hanim_l_medial_malleolus";
let fieldValue546 = browser.currentScene.createNode("fieldValue");
fieldValue546.name = "name";
fieldValue546.value = "l_medial_malleolus";
ProtoInstance545.fieldValue = new MFNode();

ProtoInstance545.fieldValue[0] = fieldValue546;

let fieldValue547 = browser.currentScene.createNode("fieldValue");
fieldValue547.name = "translation";
fieldValue547.value = "0.08900000154972076 0.07159999758005142 -0.08810000121593475";
ProtoInstance545.fieldValue[1] = fieldValue547;

fieldValue541.children[1] = ProtoInstance545;

let ProtoInstance548 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance548.name = "Site";
ProtoInstance548.DEF = "hanim_l_sphyrion";
let fieldValue549 = browser.currentScene.createNode("fieldValue");
fieldValue549.name = "name";
fieldValue549.value = "l_sphyrion";
ProtoInstance548.fieldValue = new MFNode();

ProtoInstance548.fieldValue[0] = fieldValue549;

let fieldValue550 = browser.currentScene.createNode("fieldValue");
fieldValue550.name = "translation";
fieldValue550.value = "0.08900000154972076 0.057500001043081284 -0.09430000185966492";
ProtoInstance548.fieldValue[1] = fieldValue550;

fieldValue541.children[2] = ProtoInstance548;

let ProtoInstance551 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance551.name = "Site";
ProtoInstance551.DEF = "hanim_l_calcaneus_posterior";
let fieldValue552 = browser.currentScene.createNode("fieldValue");
fieldValue552.name = "name";
fieldValue552.value = "l_calcaneus_posterior";
ProtoInstance551.fieldValue = new MFNode();

ProtoInstance551.fieldValue[0] = fieldValue552;

let fieldValue553 = browser.currentScene.createNode("fieldValue");
fieldValue553.name = "translation";
fieldValue553.value = "0.09740000218153 0.02590000070631504 -0.11710000038146973";
ProtoInstance551.fieldValue[1] = fieldValue553;

fieldValue541.children[3] = ProtoInstance551;

ProtoInstance539.fieldValue[1] = fieldValue541;

fieldValue518.children[1] = ProtoInstance539;

ProtoInstance514.fieldValue[3] = fieldValue518;

fieldValue513.children = new MFNode();

fieldValue513.children[0] = ProtoInstance514;

let ProtoInstance554 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance554.name = "Segment";
ProtoInstance554.DEF = "hanim_l_calf";
let fieldValue555 = browser.currentScene.createNode("fieldValue");
fieldValue555.name = "name";
fieldValue555.value = "l_calf";
ProtoInstance554.fieldValue = new MFNode();

ProtoInstance554.fieldValue[0] = fieldValue555;

fieldValue513.children[1] = ProtoInstance554;

ProtoInstance509.fieldValue[3] = fieldValue513;

fieldValue508.children = new MFNode();

fieldValue508.children[0] = ProtoInstance509;

let ProtoInstance556 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance556.name = "Segment";
ProtoInstance556.DEF = "hanim_l_thigh";
let fieldValue557 = browser.currentScene.createNode("fieldValue");
fieldValue557.name = "name";
fieldValue557.value = "l_thigh";
ProtoInstance556.fieldValue = new MFNode();

ProtoInstance556.fieldValue[0] = fieldValue557;

let fieldValue558 = browser.currentScene.createNode("fieldValue");
fieldValue558.name = "children";
let ProtoInstance559 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance559.name = "Site";
ProtoInstance559.DEF = "hanim_l_knee_crease";
let fieldValue560 = browser.currentScene.createNode("fieldValue");
fieldValue560.name = "name";
fieldValue560.value = "l_knee_crease";
ProtoInstance559.fieldValue = new MFNode();

ProtoInstance559.fieldValue[0] = fieldValue560;

let fieldValue561 = browser.currentScene.createNode("fieldValue");
fieldValue561.name = "translation";
fieldValue561.value = "0.09929999709129333 0.48809999227523804 -0.030899999663233757";
ProtoInstance559.fieldValue[1] = fieldValue561;

fieldValue558.children = new MFNode();

fieldValue558.children[0] = ProtoInstance559;

let ProtoInstance562 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance562.name = "Site";
ProtoInstance562.DEF = "hanim_l_femoral_lateral_epicondyles";
let fieldValue563 = browser.currentScene.createNode("fieldValue");
fieldValue563.name = "name";
fieldValue563.value = "l_femoral_lateral_epicondyles";
ProtoInstance562.fieldValue = new MFNode();

ProtoInstance562.fieldValue[0] = fieldValue563;

let fieldValue564 = browser.currentScene.createNode("fieldValue");
fieldValue564.name = "translation";
fieldValue564.value = "0.1597999930381775 0.4966999888420105 0.02969999983906746";
ProtoInstance562.fieldValue[1] = fieldValue564;

fieldValue558.children[1] = ProtoInstance562;

let ProtoInstance565 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance565.name = "Site";
ProtoInstance565.DEF = "hanim_l_femoral_medial_epicondyles";
let fieldValue566 = browser.currentScene.createNode("fieldValue");
fieldValue566.name = "name";
fieldValue566.value = "l_femoral_lateral_epicondyles";
ProtoInstance565.fieldValue = new MFNode();

ProtoInstance565.fieldValue[0] = fieldValue566;

let fieldValue567 = browser.currentScene.createNode("fieldValue");
fieldValue567.name = "translation";
fieldValue567.value = "0.039799999445676804 0.49459999799728394 0.030300000682473183";
ProtoInstance565.fieldValue[1] = fieldValue567;

fieldValue558.children[2] = ProtoInstance565;

ProtoInstance556.fieldValue[1] = fieldValue558;

fieldValue508.children[1] = ProtoInstance556;

ProtoInstance504.fieldValue[3] = fieldValue508;

fieldValue503.children = new MFNode();

fieldValue503.children[0] = ProtoInstance504;

let ProtoInstance568 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance568.name = "Joint";
ProtoInstance568.DEF = "hanim_r_hip";
let fieldValue569 = browser.currentScene.createNode("fieldValue");
fieldValue569.name = "stiffness";
fieldValue569.value = "1 1 1";
ProtoInstance568.fieldValue = new MFNode();

ProtoInstance568.fieldValue[0] = fieldValue569;

let fieldValue570 = browser.currentScene.createNode("fieldValue");
fieldValue570.name = "name";
fieldValue570.value = "r_hip";
ProtoInstance568.fieldValue[1] = fieldValue570;

let fieldValue571 = browser.currentScene.createNode("fieldValue");
fieldValue571.name = "center";
fieldValue571.value = "-0.0949999988079071 0.9171000123023987 0.002899999963119626";
ProtoInstance568.fieldValue[2] = fieldValue571;

let fieldValue572 = browser.currentScene.createNode("fieldValue");
fieldValue572.name = "children";
let ProtoInstance573 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance573.name = "Joint";
ProtoInstance573.DEF = "hanim_r_knee";
let fieldValue574 = browser.currentScene.createNode("fieldValue");
fieldValue574.name = "stiffness";
fieldValue574.value = "1 1 1";
ProtoInstance573.fieldValue = new MFNode();

ProtoInstance573.fieldValue[0] = fieldValue574;

let fieldValue575 = browser.currentScene.createNode("fieldValue");
fieldValue575.name = "name";
fieldValue575.value = "r_knee";
ProtoInstance573.fieldValue[1] = fieldValue575;

let fieldValue576 = browser.currentScene.createNode("fieldValue");
fieldValue576.name = "center";
fieldValue576.value = "-0.08669999986886978 0.49129998683929443 0.03180000185966492";
ProtoInstance573.fieldValue[2] = fieldValue576;

let fieldValue577 = browser.currentScene.createNode("fieldValue");
fieldValue577.name = "children";
let ProtoInstance578 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance578.name = "Joint";
ProtoInstance578.DEF = "hanim_r_talocrural";
let fieldValue579 = browser.currentScene.createNode("fieldValue");
fieldValue579.name = "stiffness";
fieldValue579.value = "1 1 1";
ProtoInstance578.fieldValue = new MFNode();

ProtoInstance578.fieldValue[0] = fieldValue579;

let fieldValue580 = browser.currentScene.createNode("fieldValue");
fieldValue580.name = "name";
fieldValue580.value = "r_talocrural";
ProtoInstance578.fieldValue[1] = fieldValue580;

let fieldValue581 = browser.currentScene.createNode("fieldValue");
fieldValue581.name = "center";
fieldValue581.value = "-0.08009999990463257 0.07119999825954437 -0.07660000026226044";
ProtoInstance578.fieldValue[2] = fieldValue581;

let fieldValue582 = browser.currentScene.createNode("fieldValue");
fieldValue582.name = "children";
let ProtoInstance583 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance583.name = "Joint";
ProtoInstance583.DEF = "hanim_r_metatarsophalangeal_";
let fieldValue584 = browser.currentScene.createNode("fieldValue");
fieldValue584.name = "stiffness";
fieldValue584.value = "1 1 1";
ProtoInstance583.fieldValue = new MFNode();

ProtoInstance583.fieldValue[0] = fieldValue584;

let fieldValue585 = browser.currentScene.createNode("fieldValue");
fieldValue585.name = "name";
fieldValue585.value = "r_metatarsophalangeal_";
ProtoInstance583.fieldValue[1] = fieldValue585;

let fieldValue586 = browser.currentScene.createNode("fieldValue");
fieldValue586.name = "center";
fieldValue586.value = "-0.08009999990463257 0 0.03680000081658363";
ProtoInstance583.fieldValue[2] = fieldValue586;

let fieldValue587 = browser.currentScene.createNode("fieldValue");
fieldValue587.name = "children";
let ProtoInstance588 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance588.name = "Segment";
ProtoInstance588.DEF = "hanim_r_middistal";
let fieldValue589 = browser.currentScene.createNode("fieldValue");
fieldValue589.name = "name";
fieldValue589.value = "r_middistal";
ProtoInstance588.fieldValue = new MFNode();

ProtoInstance588.fieldValue[0] = fieldValue589;

let fieldValue590 = browser.currentScene.createNode("fieldValue");
fieldValue590.name = "children";
let ProtoInstance591 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance591.name = "Site";
ProtoInstance591.DEF = "hanim_r_middistal_tip";
let fieldValue592 = browser.currentScene.createNode("fieldValue");
fieldValue592.name = "name";
fieldValue592.value = "r_middistal_tip";
ProtoInstance591.fieldValue = new MFNode();

ProtoInstance591.fieldValue[0] = fieldValue592;

let fieldValue593 = browser.currentScene.createNode("fieldValue");
fieldValue593.name = "translation";
fieldValue593.value = "-0.10429999977350235 -0.022700000554323196 0.14499999582767487";
ProtoInstance591.fieldValue[1] = fieldValue593;

fieldValue590.children = new MFNode();

fieldValue590.children[0] = ProtoInstance591;

let ProtoInstance594 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance594.name = "Site";
ProtoInstance594.DEF = "hanim_r_tarsal_interphalangeal_phalanx_5";
let fieldValue595 = browser.currentScene.createNode("fieldValue");
fieldValue595.name = "name";
fieldValue595.value = "r_tarsal_interphalangeal_phalanx_5";
ProtoInstance594.fieldValue = new MFNode();

ProtoInstance594.fieldValue[0] = fieldValue595;

let fieldValue596 = browser.currentScene.createNode("fieldValue");
fieldValue596.name = "translation";
fieldValue596.value = "-0.15230000019073486 0.016599999740719795 0.08950000256299973";
ProtoInstance594.fieldValue[1] = fieldValue596;

fieldValue590.children[1] = ProtoInstance594;

let ProtoInstance597 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance597.name = "Site";
ProtoInstance597.DEF = "hanim_r_tarsal_interphalangeal_phalanx_1";
let fieldValue598 = browser.currentScene.createNode("fieldValue");
fieldValue598.name = "name";
fieldValue598.value = "r_tarsal_interphalangeal_phalanx_1";
ProtoInstance597.fieldValue = new MFNode();

ProtoInstance597.fieldValue[0] = fieldValue598;

let fieldValue599 = browser.currentScene.createNode("fieldValue");
fieldValue599.name = "translation";
fieldValue599.value = "-0.05209999904036522 0.026000000536441803 0.01269999984651804";
ProtoInstance597.fieldValue[1] = fieldValue599;

fieldValue590.children[2] = ProtoInstance597;

let ProtoInstance600 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance600.name = "Site";
ProtoInstance600.DEF = "hanim_r_tarsal_distal_phalanx_2";
let fieldValue601 = browser.currentScene.createNode("fieldValue");
fieldValue601.name = "name";
fieldValue601.value = "r_tarsal_distal_phalanx_2";
ProtoInstance600.fieldValue = new MFNode();

ProtoInstance600.fieldValue[0] = fieldValue601;

let fieldValue602 = browser.currentScene.createNode("fieldValue");
fieldValue602.name = "translation";
fieldValue602.value = "-0.08829999715089798 0.013399999588727951 0.13830000162124634";
ProtoInstance600.fieldValue[1] = fieldValue602;

fieldValue590.children[3] = ProtoInstance600;

ProtoInstance588.fieldValue[1] = fieldValue590;

fieldValue587.children = new MFNode();

fieldValue587.children[0] = ProtoInstance588;

ProtoInstance583.fieldValue[3] = fieldValue587;

fieldValue582.children = new MFNode();

fieldValue582.children[0] = ProtoInstance583;

let ProtoInstance603 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance603.name = "Segment";
ProtoInstance603.DEF = "hanim_r_hindfoot";
let fieldValue604 = browser.currentScene.createNode("fieldValue");
fieldValue604.name = "name";
fieldValue604.value = "r_hindfoot";
ProtoInstance603.fieldValue = new MFNode();

ProtoInstance603.fieldValue[0] = fieldValue604;

let fieldValue605 = browser.currentScene.createNode("fieldValue");
fieldValue605.name = "children";
let ProtoInstance606 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance606.name = "Site";
ProtoInstance606.DEF = "hanim_r_lateral_malleolus";
let fieldValue607 = browser.currentScene.createNode("fieldValue");
fieldValue607.name = "name";
fieldValue607.value = "r_lateral_malleolus";
ProtoInstance606.fieldValue = new MFNode();

ProtoInstance606.fieldValue[0] = fieldValue607;

let fieldValue608 = browser.currentScene.createNode("fieldValue");
fieldValue608.name = "translation";
fieldValue608.value = "-0.1005999967455864 0.0658000037074089 -0.10750000178813934";
ProtoInstance606.fieldValue[1] = fieldValue608;

fieldValue605.children = new MFNode();

fieldValue605.children[0] = ProtoInstance606;

let ProtoInstance609 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance609.name = "Site";
ProtoInstance609.DEF = "hanim_r_medial_malleolus";
let fieldValue610 = browser.currentScene.createNode("fieldValue");
fieldValue610.name = "name";
fieldValue610.value = "r_medial_malleolus";
ProtoInstance609.fieldValue = new MFNode();

ProtoInstance609.fieldValue[0] = fieldValue610;

let fieldValue611 = browser.currentScene.createNode("fieldValue");
fieldValue611.name = "translation";
fieldValue611.value = "-0.05909999832510948 0.07599999755620956 -0.09279999881982803";
ProtoInstance609.fieldValue[1] = fieldValue611;

fieldValue605.children[1] = ProtoInstance609;

let ProtoInstance612 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance612.name = "Site";
ProtoInstance612.DEF = "hanim_r_sphyrion";
let fieldValue613 = browser.currentScene.createNode("fieldValue");
fieldValue613.name = "name";
fieldValue613.value = "r_sphyrion";
ProtoInstance612.fieldValue = new MFNode();

ProtoInstance612.fieldValue[0] = fieldValue613;

let fieldValue614 = browser.currentScene.createNode("fieldValue");
fieldValue614.name = "translation";
fieldValue614.value = "-0.06030000001192093 0.061000000685453415 -0.10019999742507935";
ProtoInstance612.fieldValue[1] = fieldValue614;

fieldValue605.children[2] = ProtoInstance612;

let ProtoInstance615 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance615.name = "Site";
ProtoInstance615.DEF = "hanim_r_calcaneus_posterior";
let fieldValue616 = browser.currentScene.createNode("fieldValue");
fieldValue616.name = "name";
fieldValue616.value = "r_calcaneus_posterior";
ProtoInstance615.fieldValue = new MFNode();

ProtoInstance615.fieldValue[0] = fieldValue616;

let fieldValue617 = browser.currentScene.createNode("fieldValue");
fieldValue617.name = "translation";
fieldValue617.value = "-0.06920000165700912 0.02969999983906746 -0.12210000306367874";
ProtoInstance615.fieldValue[1] = fieldValue617;

fieldValue605.children[3] = ProtoInstance615;

ProtoInstance603.fieldValue[1] = fieldValue605;

fieldValue582.children[1] = ProtoInstance603;

ProtoInstance578.fieldValue[3] = fieldValue582;

fieldValue577.children = new MFNode();

fieldValue577.children[0] = ProtoInstance578;

let ProtoInstance618 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance618.name = "Segment";
ProtoInstance618.DEF = "hanim_r_calf";
let fieldValue619 = browser.currentScene.createNode("fieldValue");
fieldValue619.name = "name";
fieldValue619.value = "r_calf";
ProtoInstance618.fieldValue = new MFNode();

ProtoInstance618.fieldValue[0] = fieldValue619;

fieldValue577.children[1] = ProtoInstance618;

ProtoInstance573.fieldValue[3] = fieldValue577;

fieldValue572.children = new MFNode();

fieldValue572.children[0] = ProtoInstance573;

let ProtoInstance620 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance620.name = "Segment";
ProtoInstance620.DEF = "hanim_r_thigh";
let fieldValue621 = browser.currentScene.createNode("fieldValue");
fieldValue621.name = "name";
fieldValue621.value = "r_thigh";
ProtoInstance620.fieldValue = new MFNode();

ProtoInstance620.fieldValue[0] = fieldValue621;

let fieldValue622 = browser.currentScene.createNode("fieldValue");
fieldValue622.name = "children";
let ProtoInstance623 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance623.name = "Site";
ProtoInstance623.DEF = "hanim_r_knee_crease";
let fieldValue624 = browser.currentScene.createNode("fieldValue");
fieldValue624.name = "name";
fieldValue624.value = "r_knee_crease";
ProtoInstance623.fieldValue = new MFNode();

ProtoInstance623.fieldValue[0] = fieldValue624;

let fieldValue625 = browser.currentScene.createNode("fieldValue");
fieldValue625.name = "translation";
fieldValue625.value = "-0.08250000327825546 0.49320000410079956 -0.032600000500679016";
ProtoInstance623.fieldValue[1] = fieldValue625;

fieldValue622.children = new MFNode();

fieldValue622.children[0] = ProtoInstance623;

let ProtoInstance626 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance626.name = "Site";
ProtoInstance626.DEF = "hanim_r_femoral_lateral_epicondyles";
let fieldValue627 = browser.currentScene.createNode("fieldValue");
fieldValue627.name = "name";
fieldValue627.value = "r_femoral_lateral_epicondyles";
ProtoInstance626.fieldValue = new MFNode();

ProtoInstance626.fieldValue[0] = fieldValue627;

let fieldValue628 = browser.currentScene.createNode("fieldValue");
fieldValue628.name = "translation";
fieldValue628.value = "-0.1421000063419342 0.4991999864578247 0.03099999949336052";
ProtoInstance626.fieldValue[1] = fieldValue628;

fieldValue622.children[1] = ProtoInstance626;

let ProtoInstance629 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance629.name = "Site";
ProtoInstance629.DEF = "hanim_r_femoral_medial_epicondyles";
let fieldValue630 = browser.currentScene.createNode("fieldValue");
fieldValue630.name = "name";
fieldValue630.value = "r_femoral_lateral_epicondyles";
ProtoInstance629.fieldValue = new MFNode();

ProtoInstance629.fieldValue[0] = fieldValue630;

let fieldValue631 = browser.currentScene.createNode("fieldValue");
fieldValue631.name = "translation";
fieldValue631.value = "-0.022099999710917473 0.5013999938964844 0.02889999933540821";
ProtoInstance629.fieldValue[1] = fieldValue631;

fieldValue622.children[2] = ProtoInstance629;

ProtoInstance620.fieldValue[1] = fieldValue622;

fieldValue572.children[1] = ProtoInstance620;

ProtoInstance568.fieldValue[3] = fieldValue572;

fieldValue503.children[1] = ProtoInstance568;

let ProtoInstance632 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance632.name = "Segment";
ProtoInstance632.DEF = "hanim_pelvis";
let fieldValue633 = browser.currentScene.createNode("fieldValue");
fieldValue633.name = "name";
fieldValue633.value = "pelvis";
ProtoInstance632.fieldValue = new MFNode();

ProtoInstance632.fieldValue[0] = fieldValue633;

fieldValue503.children[2] = ProtoInstance632;

ProtoInstance499.fieldValue[3] = fieldValue503;

fieldValue498.children = new MFNode();

fieldValue498.children[0] = ProtoInstance499;

let ProtoInstance634 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance634.name = "Joint";
ProtoInstance634.DEF = "hanim_vl5";
let fieldValue635 = browser.currentScene.createNode("fieldValue");
fieldValue635.name = "stiffness";
fieldValue635.value = "1 1 1";
ProtoInstance634.fieldValue = new MFNode();

ProtoInstance634.fieldValue[0] = fieldValue635;

let fieldValue636 = browser.currentScene.createNode("fieldValue");
fieldValue636.name = "name";
fieldValue636.value = "vl5";
ProtoInstance634.fieldValue[1] = fieldValue636;

let fieldValue637 = browser.currentScene.createNode("fieldValue");
fieldValue637.name = "center";
fieldValue637.value = "0.00279999990016222 1.0568000078201294 -0.07760000228881836";
ProtoInstance634.fieldValue[2] = fieldValue637;

let fieldValue638 = browser.currentScene.createNode("fieldValue");
fieldValue638.name = "children";
let ProtoInstance639 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance639.name = "Joint";
ProtoInstance639.DEF = "hanim_skullbase";
let fieldValue640 = browser.currentScene.createNode("fieldValue");
fieldValue640.name = "stiffness";
fieldValue640.value = "1 1 1";
ProtoInstance639.fieldValue = new MFNode();

ProtoInstance639.fieldValue[0] = fieldValue640;

let fieldValue641 = browser.currentScene.createNode("fieldValue");
fieldValue641.name = "name";
fieldValue641.value = "skullbase";
ProtoInstance639.fieldValue[1] = fieldValue641;

let fieldValue642 = browser.currentScene.createNode("fieldValue");
fieldValue642.name = "center";
fieldValue642.value = "0.004399999976158142 1.62090003490448 0.023600000888109207";
ProtoInstance639.fieldValue[2] = fieldValue642;

let fieldValue643 = browser.currentScene.createNode("fieldValue");
fieldValue643.name = "children";
let ProtoInstance644 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance644.name = "Segment";
ProtoInstance644.DEF = "hanim_skull";
let fieldValue645 = browser.currentScene.createNode("fieldValue");
fieldValue645.name = "name";
fieldValue645.value = "skull";
ProtoInstance644.fieldValue = new MFNode();

ProtoInstance644.fieldValue[0] = fieldValue645;

let fieldValue646 = browser.currentScene.createNode("fieldValue");
fieldValue646.name = "children";
let ProtoInstance647 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance647.name = "Site";
ProtoInstance647.DEF = "hanim_skull_tip";
let fieldValue648 = browser.currentScene.createNode("fieldValue");
fieldValue648.name = "name";
fieldValue648.value = "skull_tip";
ProtoInstance647.fieldValue = new MFNode();

ProtoInstance647.fieldValue[0] = fieldValue648;

let fieldValue649 = browser.currentScene.createNode("fieldValue");
fieldValue649.name = "translation";
fieldValue649.value = "0.004999999888241291 1.7503999471664429 0.005499999970197678";
ProtoInstance647.fieldValue[1] = fieldValue649;

fieldValue646.children = new MFNode();

fieldValue646.children[0] = ProtoInstance647;

let ProtoInstance650 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance650.name = "Site";
ProtoInstance650.DEF = "hanim_sellion";
let fieldValue651 = browser.currentScene.createNode("fieldValue");
fieldValue651.name = "name";
fieldValue651.value = "sellion";
ProtoInstance650.fieldValue = new MFNode();

ProtoInstance650.fieldValue[0] = fieldValue651;

let fieldValue652 = browser.currentScene.createNode("fieldValue");
fieldValue652.name = "translation";
fieldValue652.value = "0.005799999926239252 1.631600022315979 0.0851999968290329";
ProtoInstance650.fieldValue[1] = fieldValue652;

fieldValue646.children[1] = ProtoInstance650;

let ProtoInstance653 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance653.name = "Site";
ProtoInstance653.DEF = "hanim_r_infraorbitale";
let fieldValue654 = browser.currentScene.createNode("fieldValue");
fieldValue654.name = "name";
fieldValue654.value = "r_infraorbitale";
ProtoInstance653.fieldValue = new MFNode();

ProtoInstance653.fieldValue[0] = fieldValue654;

let fieldValue655 = browser.currentScene.createNode("fieldValue");
fieldValue655.name = "translation";
fieldValue655.value = "-0.02370000071823597 1.6171000003814697 0.07519999891519547";
ProtoInstance653.fieldValue[1] = fieldValue655;

fieldValue646.children[2] = ProtoInstance653;

let ProtoInstance656 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance656.name = "Site";
ProtoInstance656.DEF = "hanim_l_infraorbitale";
let fieldValue657 = browser.currentScene.createNode("fieldValue");
fieldValue657.name = "name";
fieldValue657.value = "l_infraorbitale";
ProtoInstance656.fieldValue = new MFNode();

ProtoInstance656.fieldValue[0] = fieldValue657;

let fieldValue658 = browser.currentScene.createNode("fieldValue");
fieldValue658.name = "translation";
fieldValue658.value = "0.0340999998152256 1.6171000003814697 0.07519999891519547";
ProtoInstance656.fieldValue[1] = fieldValue658;

fieldValue646.children[3] = ProtoInstance656;

let ProtoInstance659 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance659.name = "Site";
ProtoInstance659.DEF = "hanim_supramenton";
let fieldValue660 = browser.currentScene.createNode("fieldValue");
fieldValue660.name = "name";
fieldValue660.value = "supramenton";
ProtoInstance659.fieldValue = new MFNode();

ProtoInstance659.fieldValue[0] = fieldValue660;

let fieldValue661 = browser.currentScene.createNode("fieldValue");
fieldValue661.name = "translation";
fieldValue661.value = "0.006099999882280827 1.5410000085830688 0.08049999922513962";
ProtoInstance659.fieldValue[1] = fieldValue661;

fieldValue646.children[4] = ProtoInstance659;

let ProtoInstance662 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance662.name = "Site";
ProtoInstance662.DEF = "hanim_r_tragion";
let fieldValue663 = browser.currentScene.createNode("fieldValue");
fieldValue663.name = "name";
fieldValue663.value = "r_tragion";
ProtoInstance662.fieldValue = new MFNode();

ProtoInstance662.fieldValue[0] = fieldValue663;

let fieldValue664 = browser.currentScene.createNode("fieldValue");
fieldValue664.name = "translation";
fieldValue664.value = "-0.06459999829530716 1.6346999406814575 0.03020000085234642";
ProtoInstance662.fieldValue[1] = fieldValue664;

fieldValue646.children[5] = ProtoInstance662;

let ProtoInstance665 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance665.name = "Site";
ProtoInstance665.DEF = "hanim_r_gonion";
let fieldValue666 = browser.currentScene.createNode("fieldValue");
fieldValue666.name = "name";
fieldValue666.value = "r_gonion";
ProtoInstance665.fieldValue = new MFNode();

ProtoInstance665.fieldValue[0] = fieldValue666;

let fieldValue667 = browser.currentScene.createNode("fieldValue");
fieldValue667.name = "translation";
fieldValue667.value = "-0.052000001072883606 1.552899956703186 0.034699998795986176";
ProtoInstance665.fieldValue[1] = fieldValue667;

fieldValue646.children[6] = ProtoInstance665;

let ProtoInstance668 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance668.name = "Site";
ProtoInstance668.DEF = "hanim_l_tragion";
let fieldValue669 = browser.currentScene.createNode("fieldValue");
fieldValue669.name = "name";
fieldValue669.value = "l_tragion";
ProtoInstance668.fieldValue = new MFNode();

ProtoInstance668.fieldValue[0] = fieldValue669;

let fieldValue670 = browser.currentScene.createNode("fieldValue");
fieldValue670.name = "translation";
fieldValue670.value = "0.0738999992609024 1.6347999572753906 0.028200000524520874";
ProtoInstance668.fieldValue[1] = fieldValue670;

fieldValue646.children[7] = ProtoInstance668;

let ProtoInstance671 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance671.name = "Site";
ProtoInstance671.DEF = "hanim_l_gonion";
let fieldValue672 = browser.currentScene.createNode("fieldValue");
fieldValue672.name = "name";
fieldValue672.value = "l_gonion";
ProtoInstance671.fieldValue = new MFNode();

ProtoInstance671.fieldValue[0] = fieldValue672;

let fieldValue673 = browser.currentScene.createNode("fieldValue");
fieldValue673.name = "translation";
fieldValue673.value = "0.06310000270605087 1.5529999732971191 0.032999999821186066";
ProtoInstance671.fieldValue[1] = fieldValue673;

fieldValue646.children[8] = ProtoInstance671;

let ProtoInstance674 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance674.name = "Site";
ProtoInstance674.DEF = "hanim_nuchale";
let fieldValue675 = browser.currentScene.createNode("fieldValue");
fieldValue675.name = "name";
fieldValue675.value = "nuchale";
ProtoInstance674.fieldValue = new MFNode();

ProtoInstance674.fieldValue[0] = fieldValue675;

let fieldValue676 = browser.currentScene.createNode("fieldValue");
fieldValue676.name = "translation";
fieldValue676.value = "0.0038999998942017555 1.5972000360488892 -0.07959999889135361";
ProtoInstance674.fieldValue[1] = fieldValue676;

fieldValue646.children[9] = ProtoInstance674;

ProtoInstance644.fieldValue[1] = fieldValue646;

fieldValue643.children = new MFNode();

fieldValue643.children[0] = ProtoInstance644;

ProtoInstance639.fieldValue[3] = fieldValue643;

fieldValue638.children = new MFNode();

fieldValue638.children[0] = ProtoInstance639;

let ProtoInstance677 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance677.name = "Joint";
ProtoInstance677.DEF = "hanim_l_shoulder";
let fieldValue678 = browser.currentScene.createNode("fieldValue");
fieldValue678.name = "stiffness";
fieldValue678.value = "1 1 1";
ProtoInstance677.fieldValue = new MFNode();

ProtoInstance677.fieldValue[0] = fieldValue678;

let fieldValue679 = browser.currentScene.createNode("fieldValue");
fieldValue679.name = "name";
fieldValue679.value = "l_shoulder";
ProtoInstance677.fieldValue[1] = fieldValue679;

let fieldValue680 = browser.currentScene.createNode("fieldValue");
fieldValue680.name = "center";
fieldValue680.value = "0.2029000073671341 1.437600016593933 -0.03869999945163727";
ProtoInstance677.fieldValue[2] = fieldValue680;

let fieldValue681 = browser.currentScene.createNode("fieldValue");
fieldValue681.name = "children";
let ProtoInstance682 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance682.name = "Joint";
ProtoInstance682.DEF = "hanim_l_elbow";
let fieldValue683 = browser.currentScene.createNode("fieldValue");
fieldValue683.name = "stiffness";
fieldValue683.value = "1 1 1";
ProtoInstance682.fieldValue = new MFNode();

ProtoInstance682.fieldValue[0] = fieldValue683;

let fieldValue684 = browser.currentScene.createNode("fieldValue");
fieldValue684.name = "name";
fieldValue684.value = "l_elbow";
ProtoInstance682.fieldValue[1] = fieldValue684;

let fieldValue685 = browser.currentScene.createNode("fieldValue");
fieldValue685.name = "center";
fieldValue685.value = "0.2013999968767166 1.135699987411499 -0.0681999996304512";
ProtoInstance682.fieldValue[2] = fieldValue685;

let fieldValue686 = browser.currentScene.createNode("fieldValue");
fieldValue686.name = "children";
let ProtoInstance687 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance687.name = "Joint";
ProtoInstance687.DEF = "hanim_l_radiocarpal";
let fieldValue688 = browser.currentScene.createNode("fieldValue");
fieldValue688.name = "stiffness";
fieldValue688.value = "1 1 1";
ProtoInstance687.fieldValue = new MFNode();

ProtoInstance687.fieldValue[0] = fieldValue688;

let fieldValue689 = browser.currentScene.createNode("fieldValue");
fieldValue689.name = "name";
fieldValue689.value = "l_radiocarpal";
ProtoInstance687.fieldValue[1] = fieldValue689;

let fieldValue690 = browser.currentScene.createNode("fieldValue");
fieldValue690.name = "center";
fieldValue690.value = "0.19840000569820404 0.8662999868392944 -0.05829999968409538";
ProtoInstance687.fieldValue[2] = fieldValue690;

let fieldValue691 = browser.currentScene.createNode("fieldValue");
fieldValue691.name = "children";
let ProtoInstance692 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance692.name = "Segment";
ProtoInstance692.DEF = "hanim_l_hand";
let fieldValue693 = browser.currentScene.createNode("fieldValue");
fieldValue693.name = "name";
fieldValue693.value = "l_hand";
ProtoInstance692.fieldValue = new MFNode();

ProtoInstance692.fieldValue[0] = fieldValue693;

let fieldValue694 = browser.currentScene.createNode("fieldValue");
fieldValue694.name = "children";
let ProtoInstance695 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance695.name = "Site";
ProtoInstance695.DEF = "hanim_l_hand_tip";
let fieldValue696 = browser.currentScene.createNode("fieldValue");
fieldValue696.name = "name";
fieldValue696.value = "l_hand_tip";
ProtoInstance695.fieldValue = new MFNode();

ProtoInstance695.fieldValue[0] = fieldValue696;

let fieldValue697 = browser.currentScene.createNode("fieldValue");
fieldValue697.name = "translation";
fieldValue697.value = "0.20800000429153442 0.6730999946594238 -0.04910000041127205";
ProtoInstance695.fieldValue[1] = fieldValue697;

fieldValue694.children = new MFNode();

fieldValue694.children[0] = ProtoInstance695;

let ProtoInstance698 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance698.name = "Site";
ProtoInstance698.DEF = "hanim_l_metacarpal_phalanx_2";
let fieldValue699 = browser.currentScene.createNode("fieldValue");
fieldValue699.name = "name";
fieldValue699.value = "l_metacarpal_phalanx_2";
ProtoInstance698.fieldValue = new MFNode();

ProtoInstance698.fieldValue[0] = fieldValue699;

let fieldValue700 = browser.currentScene.createNode("fieldValue");
fieldValue700.name = "translation";
fieldValue700.value = "0.20090000331401825 0.8138999938964844 -0.02370000071823597";
ProtoInstance698.fieldValue[1] = fieldValue700;

fieldValue694.children[1] = ProtoInstance698;

let ProtoInstance701 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance701.name = "Site";
ProtoInstance701.DEF = "hanim_l_dactylion";
let fieldValue702 = browser.currentScene.createNode("fieldValue");
fieldValue702.name = "name";
fieldValue702.value = "l_dactylion";
ProtoInstance701.fieldValue = new MFNode();

ProtoInstance701.fieldValue[0] = fieldValue702;

let fieldValue703 = browser.currentScene.createNode("fieldValue");
fieldValue703.name = "translation";
fieldValue703.value = "0.20559999346733093 0.6743000149726868 -0.04820000007748604";
ProtoInstance701.fieldValue[1] = fieldValue703;

fieldValue694.children[2] = ProtoInstance701;

let ProtoInstance704 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance704.name = "Site";
ProtoInstance704.DEF = "hanim_l_ulnar_styloid";
let fieldValue705 = browser.currentScene.createNode("fieldValue");
fieldValue705.name = "name";
fieldValue705.value = "l_ulnar_styloid";
ProtoInstance704.fieldValue = new MFNode();

ProtoInstance704.fieldValue[0] = fieldValue705;

let fieldValue706 = browser.currentScene.createNode("fieldValue");
fieldValue706.name = "translation";
fieldValue706.value = "-0.2142000049352646 0.8529000282287598 -0.06480000168085098";
ProtoInstance704.fieldValue[1] = fieldValue706;

fieldValue694.children[3] = ProtoInstance704;

let ProtoInstance707 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance707.name = "Site";
ProtoInstance707.DEF = "hanim_l_metacarpal_phalanx_5";
let fieldValue708 = browser.currentScene.createNode("fieldValue");
fieldValue708.name = "name";
fieldValue708.value = "l_metacarpal_phalanx_5";
ProtoInstance707.fieldValue = new MFNode();

ProtoInstance707.fieldValue[0] = fieldValue708;

let fieldValue709 = browser.currentScene.createNode("fieldValue");
fieldValue709.name = "translation";
fieldValue709.value = "0.19290000200271606 0.7860000133514404 -0.11219999939203262";
ProtoInstance707.fieldValue[1] = fieldValue709;

fieldValue694.children[4] = ProtoInstance707;

ProtoInstance692.fieldValue[1] = fieldValue694;

fieldValue691.children = new MFNode();

fieldValue691.children[0] = ProtoInstance692;

ProtoInstance687.fieldValue[3] = fieldValue691;

fieldValue686.children = new MFNode();

fieldValue686.children[0] = ProtoInstance687;

let ProtoInstance710 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance710.name = "Segment";
ProtoInstance710.DEF = "hanim_l_forearm";
let fieldValue711 = browser.currentScene.createNode("fieldValue");
fieldValue711.name = "name";
fieldValue711.value = "l_forearm";
ProtoInstance710.fieldValue = new MFNode();

ProtoInstance710.fieldValue[0] = fieldValue711;

let fieldValue712 = browser.currentScene.createNode("fieldValue");
fieldValue712.name = "children";
let ProtoInstance713 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance713.name = "Site";
ProtoInstance713.DEF = "hanim_l_radial_styloid";
let fieldValue714 = browser.currentScene.createNode("fieldValue");
fieldValue714.name = "name";
fieldValue714.value = "l_radial_styloid";
ProtoInstance713.fieldValue = new MFNode();

ProtoInstance713.fieldValue[0] = fieldValue714;

let fieldValue715 = browser.currentScene.createNode("fieldValue");
fieldValue715.name = "translation";
fieldValue715.value = "0.19009999930858612 0.8644999861717224 -0.04149999842047691";
ProtoInstance713.fieldValue[1] = fieldValue715;

fieldValue712.children = new MFNode();

fieldValue712.children[0] = ProtoInstance713;

let ProtoInstance716 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance716.name = "Site";
ProtoInstance716.DEF = "hanim_l_olecranon";
let fieldValue717 = browser.currentScene.createNode("fieldValue");
fieldValue717.name = "name";
fieldValue717.value = "l_olecranon";
ProtoInstance716.fieldValue = new MFNode();

ProtoInstance716.fieldValue[0] = fieldValue717;

let fieldValue718 = browser.currentScene.createNode("fieldValue");
fieldValue718.name = "translation";
fieldValue718.value = "-0.19619999825954437 1.1375000476837158 -0.11230000108480453";
ProtoInstance716.fieldValue[1] = fieldValue718;

fieldValue712.children[1] = ProtoInstance716;

let ProtoInstance719 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance719.name = "Site";
ProtoInstance719.DEF = "hanim_l_humeral_medial_epicondyles";
let fieldValue720 = browser.currentScene.createNode("fieldValue");
fieldValue720.name = "name";
fieldValue720.value = "l_humeral_medial_epicondyles";
ProtoInstance719.fieldValue = new MFNode();

ProtoInstance719.fieldValue[0] = fieldValue720;

let fieldValue721 = browser.currentScene.createNode("fieldValue");
fieldValue721.name = "translation";
fieldValue721.value = "0.17350000143051147 1.1272000074386597 -0.11129999905824661";
ProtoInstance719.fieldValue[1] = fieldValue721;

fieldValue712.children[2] = ProtoInstance719;

let ProtoInstance722 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance722.name = "Site";
ProtoInstance722.DEF = "hanim_l_radiale";
let fieldValue723 = browser.currentScene.createNode("fieldValue");
fieldValue723.name = "name";
fieldValue723.value = "l_radiale";
ProtoInstance722.fieldValue = new MFNode();

ProtoInstance722.fieldValue[0] = fieldValue723;

let fieldValue724 = browser.currentScene.createNode("fieldValue");
fieldValue724.name = "translation";
fieldValue724.value = "0.21819999814033508 1.1211999654769897 -0.11670000106096268";
ProtoInstance722.fieldValue[1] = fieldValue724;

fieldValue712.children[3] = ProtoInstance722;

ProtoInstance710.fieldValue[1] = fieldValue712;

fieldValue686.children[1] = ProtoInstance710;

ProtoInstance682.fieldValue[3] = fieldValue686;

fieldValue681.children = new MFNode();

fieldValue681.children[0] = ProtoInstance682;

let ProtoInstance725 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance725.name = "Segment";
ProtoInstance725.DEF = "hanim_l_upperarm";
let fieldValue726 = browser.currentScene.createNode("fieldValue");
fieldValue726.name = "name";
fieldValue726.value = "l_upperarm";
ProtoInstance725.fieldValue = new MFNode();

ProtoInstance725.fieldValue[0] = fieldValue726;

let fieldValue727 = browser.currentScene.createNode("fieldValue");
fieldValue727.name = "children";
let ProtoInstance728 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance728.name = "Site";
ProtoInstance728.DEF = "hanim_l_humeral_lateral_epicondyles";
let fieldValue729 = browser.currentScene.createNode("fieldValue");
fieldValue729.name = "name";
fieldValue729.value = "l_humeral_lateral_epicondyles";
ProtoInstance728.fieldValue = new MFNode();

ProtoInstance728.fieldValue[0] = fieldValue729;

let fieldValue730 = browser.currentScene.createNode("fieldValue");
fieldValue730.name = "translation";
fieldValue730.value = "0.2280000001192093 1.1482000350952148 -0.10999999940395355";
ProtoInstance728.fieldValue[1] = fieldValue730;

fieldValue727.children = new MFNode();

fieldValue727.children[0] = ProtoInstance728;

ProtoInstance725.fieldValue[1] = fieldValue727;

fieldValue681.children[1] = ProtoInstance725;

ProtoInstance677.fieldValue[3] = fieldValue681;

fieldValue638.children[1] = ProtoInstance677;

let ProtoInstance731 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance731.name = "Joint";
ProtoInstance731.DEF = "hanim_r_shoulder";
let fieldValue732 = browser.currentScene.createNode("fieldValue");
fieldValue732.name = "stiffness";
fieldValue732.value = "1 1 1";
ProtoInstance731.fieldValue = new MFNode();

ProtoInstance731.fieldValue[0] = fieldValue732;

let fieldValue733 = browser.currentScene.createNode("fieldValue");
fieldValue733.name = "name";
fieldValue733.value = "r_shoulder";
ProtoInstance731.fieldValue[1] = fieldValue733;

let fieldValue734 = browser.currentScene.createNode("fieldValue");
fieldValue734.name = "center";
fieldValue734.value = "-0.1906999945640564 1.4407000541687012 -0.032499998807907104";
ProtoInstance731.fieldValue[2] = fieldValue734;

let fieldValue735 = browser.currentScene.createNode("fieldValue");
fieldValue735.name = "children";
let ProtoInstance736 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance736.name = "Joint";
ProtoInstance736.DEF = "hanim_r_elbow";
let fieldValue737 = browser.currentScene.createNode("fieldValue");
fieldValue737.name = "stiffness";
fieldValue737.value = "1 1 1";
ProtoInstance736.fieldValue = new MFNode();

ProtoInstance736.fieldValue[0] = fieldValue737;

let fieldValue738 = browser.currentScene.createNode("fieldValue");
fieldValue738.name = "name";
fieldValue738.value = "r_elbow";
ProtoInstance736.fieldValue[1] = fieldValue738;

let fieldValue739 = browser.currentScene.createNode("fieldValue");
fieldValue739.name = "center";
fieldValue739.value = "-0.1949000060558319 1.138800024986267 -0.06199999898672104";
ProtoInstance736.fieldValue[2] = fieldValue739;

let fieldValue740 = browser.currentScene.createNode("fieldValue");
fieldValue740.name = "children";
let ProtoInstance741 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance741.name = "Joint";
ProtoInstance741.DEF = "hanim_r_radiocarpal";
let fieldValue742 = browser.currentScene.createNode("fieldValue");
fieldValue742.name = "stiffness";
fieldValue742.value = "1 1 1";
ProtoInstance741.fieldValue = new MFNode();

ProtoInstance741.fieldValue[0] = fieldValue742;

let fieldValue743 = browser.currentScene.createNode("fieldValue");
fieldValue743.name = "name";
fieldValue743.value = "r_radiocarpal";
ProtoInstance741.fieldValue[1] = fieldValue743;

let fieldValue744 = browser.currentScene.createNode("fieldValue");
fieldValue744.name = "center";
fieldValue744.value = "-0.19589999318122864 0.8694000244140625 -0.05209999904036522";
ProtoInstance741.fieldValue[2] = fieldValue744;

let fieldValue745 = browser.currentScene.createNode("fieldValue");
fieldValue745.name = "children";
let ProtoInstance746 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance746.name = "Segment";
ProtoInstance746.DEF = "hanim_r_hand";
let fieldValue747 = browser.currentScene.createNode("fieldValue");
fieldValue747.name = "name";
fieldValue747.value = "r_hand";
ProtoInstance746.fieldValue = new MFNode();

ProtoInstance746.fieldValue[0] = fieldValue747;

let fieldValue748 = browser.currentScene.createNode("fieldValue");
fieldValue748.name = "children";
let ProtoInstance749 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance749.name = "Site";
ProtoInstance749.DEF = "hanim_r_hand_tip";
let fieldValue750 = browser.currentScene.createNode("fieldValue");
fieldValue750.name = "name";
fieldValue750.value = "r_hand_tip";
ProtoInstance749.fieldValue = new MFNode();

ProtoInstance749.fieldValue[0] = fieldValue750;

let fieldValue751 = browser.currentScene.createNode("fieldValue");
fieldValue751.name = "translation";
fieldValue751.value = "-0.19689999520778656 0.6758000254631042 -0.04270000010728836";
ProtoInstance749.fieldValue[1] = fieldValue751;

fieldValue748.children = new MFNode();

fieldValue748.children[0] = ProtoInstance749;

let ProtoInstance752 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance752.name = "Site";
ProtoInstance752.DEF = "hanim_r_metacarpal_phalanx_2";
let fieldValue753 = browser.currentScene.createNode("fieldValue");
fieldValue753.name = "name";
fieldValue753.value = "r_metacarpal_phalanx_2";
ProtoInstance752.fieldValue = new MFNode();

ProtoInstance752.fieldValue[0] = fieldValue753;

let fieldValue754 = browser.currentScene.createNode("fieldValue");
fieldValue754.name = "translation";
fieldValue754.value = "-0.19769999384880066 0.8169000148773193 -0.01769999973475933";
ProtoInstance752.fieldValue[1] = fieldValue754;

fieldValue748.children[1] = ProtoInstance752;

let ProtoInstance755 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance755.name = "Site";
ProtoInstance755.DEF = "hanim_r_dactylion";
let fieldValue756 = browser.currentScene.createNode("fieldValue");
fieldValue756.name = "name";
fieldValue756.value = "r_dactylion";
ProtoInstance755.fieldValue = new MFNode();

ProtoInstance755.fieldValue[0] = fieldValue756;

let fieldValue757 = browser.currentScene.createNode("fieldValue");
fieldValue757.name = "translation";
fieldValue757.value = "-0.1941000074148178 0.6772000193595886 -0.04230000078678131";
ProtoInstance755.fieldValue[1] = fieldValue757;

fieldValue748.children[2] = ProtoInstance755;

let ProtoInstance758 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance758.name = "Site";
ProtoInstance758.DEF = "hanim_r_ulnar_styloid";
let fieldValue759 = browser.currentScene.createNode("fieldValue");
fieldValue759.name = "name";
fieldValue759.value = "r_ulnar_styloid";
ProtoInstance758.fieldValue = new MFNode();

ProtoInstance758.fieldValue[0] = fieldValue759;

let fieldValue760 = browser.currentScene.createNode("fieldValue");
fieldValue760.name = "translation";
fieldValue760.value = "-0.21170000731945038 0.8561999797821045 -0.058400001376867294";
ProtoInstance758.fieldValue[1] = fieldValue760;

fieldValue748.children[3] = ProtoInstance758;

let ProtoInstance761 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance761.name = "Site";
ProtoInstance761.DEF = "hanim_r_metacarpal_phalanx_5";
let fieldValue762 = browser.currentScene.createNode("fieldValue");
fieldValue762.name = "name";
fieldValue762.value = "r_metacarpal_phalanx_5";
ProtoInstance761.fieldValue = new MFNode();

ProtoInstance761.fieldValue[0] = fieldValue762;

let fieldValue763 = browser.currentScene.createNode("fieldValue");
fieldValue763.name = "translation";
fieldValue763.value = "-0.19290000200271606 0.7889999747276306 -0.10639999806880951";
ProtoInstance761.fieldValue[1] = fieldValue763;

fieldValue748.children[4] = ProtoInstance761;

ProtoInstance746.fieldValue[1] = fieldValue748;

fieldValue745.children = new MFNode();

fieldValue745.children[0] = ProtoInstance746;

ProtoInstance741.fieldValue[3] = fieldValue745;

fieldValue740.children = new MFNode();

fieldValue740.children[0] = ProtoInstance741;

let ProtoInstance764 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance764.name = "Segment";
ProtoInstance764.DEF = "hanim_r_forearm";
let fieldValue765 = browser.currentScene.createNode("fieldValue");
fieldValue765.name = "name";
fieldValue765.value = "r_forearm";
ProtoInstance764.fieldValue = new MFNode();

ProtoInstance764.fieldValue[0] = fieldValue765;

let fieldValue766 = browser.currentScene.createNode("fieldValue");
fieldValue766.name = "children";
let ProtoInstance767 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance767.name = "Site";
ProtoInstance767.DEF = "hanim_r_radial_styloid";
let fieldValue768 = browser.currentScene.createNode("fieldValue");
fieldValue768.name = "name";
fieldValue768.value = "r_radial_styloid";
ProtoInstance767.fieldValue = new MFNode();

ProtoInstance767.fieldValue[0] = fieldValue768;

let fieldValue769 = browser.currentScene.createNode("fieldValue");
fieldValue769.name = "translation";
fieldValue769.value = "-0.188400000333786 0.8676000237464905 -0.035999998450279236";
ProtoInstance767.fieldValue[1] = fieldValue769;

fieldValue766.children = new MFNode();

fieldValue766.children[0] = ProtoInstance767;

let ProtoInstance770 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance770.name = "Site";
ProtoInstance770.DEF = "hanim_r_olecranon";
let fieldValue771 = browser.currentScene.createNode("fieldValue");
fieldValue771.name = "name";
fieldValue771.value = "r_olecranon";
ProtoInstance770.fieldValue = new MFNode();

ProtoInstance770.fieldValue[0] = fieldValue771;

let fieldValue772 = browser.currentScene.createNode("fieldValue");
fieldValue772.name = "translation";
fieldValue772.value = "-0.1906999945640564 1.1404999494552612 -0.10649999976158142";
ProtoInstance770.fieldValue[1] = fieldValue772;

fieldValue766.children[1] = ProtoInstance770;

let ProtoInstance773 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance773.name = "Site";
ProtoInstance773.DEF = "hanim_r_humeral_medial_epicondyles";
let fieldValue774 = browser.currentScene.createNode("fieldValue");
fieldValue774.name = "name";
fieldValue774.value = "r_humeral_medial_epicondyles";
ProtoInstance773.fieldValue = new MFNode();

ProtoInstance773.fieldValue[0] = fieldValue774;

let fieldValue775 = browser.currentScene.createNode("fieldValue");
fieldValue775.name = "translation";
fieldValue775.value = "-0.1679999977350235 1.1297999620437622 -0.10620000213384628";
ProtoInstance773.fieldValue[1] = fieldValue775;

fieldValue766.children[2] = ProtoInstance773;

let ProtoInstance776 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance776.name = "Site";
ProtoInstance776.DEF = "hanim_r_radiale";
let fieldValue777 = browser.currentScene.createNode("fieldValue");
fieldValue777.name = "name";
fieldValue777.value = "r_radiale";
ProtoInstance776.fieldValue = new MFNode();

ProtoInstance776.fieldValue[0] = fieldValue777;

let fieldValue778 = browser.currentScene.createNode("fieldValue");
fieldValue778.name = "translation";
fieldValue778.value = "-0.21299999952316284 1.1304999589920044 -0.10909999907016754";
ProtoInstance776.fieldValue[1] = fieldValue778;

fieldValue766.children[3] = ProtoInstance776;

ProtoInstance764.fieldValue[1] = fieldValue766;

fieldValue740.children[1] = ProtoInstance764;

ProtoInstance736.fieldValue[3] = fieldValue740;

fieldValue735.children = new MFNode();

fieldValue735.children[0] = ProtoInstance736;

let ProtoInstance779 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance779.name = "Segment";
ProtoInstance779.DEF = "hanim_r_upperarm";
let fieldValue780 = browser.currentScene.createNode("fieldValue");
fieldValue780.name = "name";
fieldValue780.value = "r_upperarm";
ProtoInstance779.fieldValue = new MFNode();

ProtoInstance779.fieldValue[0] = fieldValue780;

let fieldValue781 = browser.currentScene.createNode("fieldValue");
fieldValue781.name = "children";
let ProtoInstance782 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance782.name = "Site";
ProtoInstance782.DEF = "hanim_r_humeral_lateral_epicondyles";
let fieldValue783 = browser.currentScene.createNode("fieldValue");
fieldValue783.name = "name";
fieldValue783.value = "r_humeral_lateral_epicondyles";
ProtoInstance782.fieldValue = new MFNode();

ProtoInstance782.fieldValue[0] = fieldValue783;

let fieldValue784 = browser.currentScene.createNode("fieldValue");
fieldValue784.name = "translation";
fieldValue784.value = "-0.2223999947309494 1.1517000198364258 -0.10329999774694443";
ProtoInstance782.fieldValue[1] = fieldValue784;

fieldValue781.children = new MFNode();

fieldValue781.children[0] = ProtoInstance782;

ProtoInstance779.fieldValue[1] = fieldValue781;

fieldValue735.children[1] = ProtoInstance779;

ProtoInstance731.fieldValue[3] = fieldValue735;

fieldValue638.children[2] = ProtoInstance731;

let ProtoInstance785 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance785.name = "Segment";
ProtoInstance785.DEF = "hanim_l5";
let fieldValue786 = browser.currentScene.createNode("fieldValue");
fieldValue786.name = "name";
fieldValue786.value = "l5";
ProtoInstance785.fieldValue = new MFNode();

ProtoInstance785.fieldValue[0] = fieldValue786;

let fieldValue787 = browser.currentScene.createNode("fieldValue");
fieldValue787.name = "children";
let ProtoInstance788 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance788.name = "Site";
ProtoInstance788.DEF = "hanim_r_clavicale";
let fieldValue789 = browser.currentScene.createNode("fieldValue");
fieldValue789.name = "name";
fieldValue789.value = "r_clavicale";
ProtoInstance788.fieldValue = new MFNode();

ProtoInstance788.fieldValue[0] = fieldValue789;

let fieldValue790 = browser.currentScene.createNode("fieldValue");
fieldValue790.name = "translation";
fieldValue790.value = "-0.011500000022351742 1.4943000078201294 0.03999999910593033";
ProtoInstance788.fieldValue[1] = fieldValue790;

fieldValue787.children = new MFNode();

fieldValue787.children[0] = ProtoInstance788;

let ProtoInstance791 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance791.name = "Site";
ProtoInstance791.DEF = "hanim_suprasternale";
let fieldValue792 = browser.currentScene.createNode("fieldValue");
fieldValue792.name = "name";
fieldValue792.value = "suprasternale";
ProtoInstance791.fieldValue = new MFNode();

ProtoInstance791.fieldValue[0] = fieldValue792;

let fieldValue793 = browser.currentScene.createNode("fieldValue");
fieldValue793.name = "translation";
fieldValue793.value = "0.00839999970048666 1.4714000225067139 0.05510000139474869";
ProtoInstance791.fieldValue[1] = fieldValue793;

fieldValue787.children[1] = ProtoInstance791;

let ProtoInstance794 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance794.name = "Site";
ProtoInstance794.DEF = "hanim_l_clavicale";
let fieldValue795 = browser.currentScene.createNode("fieldValue");
fieldValue795.name = "name";
fieldValue795.value = "l_clavicale";
ProtoInstance794.fieldValue = new MFNode();

ProtoInstance794.fieldValue[0] = fieldValue795;

let fieldValue796 = browser.currentScene.createNode("fieldValue");
fieldValue796.name = "translation";
fieldValue796.value = "0.02710000053048134 1.4943000078201294 0.039400000125169754";
ProtoInstance794.fieldValue[1] = fieldValue796;

fieldValue787.children[2] = ProtoInstance794;

let ProtoInstance797 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance797.name = "Site";
ProtoInstance797.DEF = "hanim_r_thelion";
let fieldValue798 = browser.currentScene.createNode("fieldValue");
fieldValue798.name = "name";
fieldValue798.value = "r_thelion";
ProtoInstance797.fieldValue = new MFNode();

ProtoInstance797.fieldValue[0] = fieldValue798;

let fieldValue799 = browser.currentScene.createNode("fieldValue");
fieldValue799.name = "translation";
fieldValue799.value = "-0.07360000163316727 1.3385000228881836 0.1216999962925911";
ProtoInstance797.fieldValue[1] = fieldValue799;

fieldValue787.children[3] = ProtoInstance797;

let ProtoInstance800 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance800.name = "Site";
ProtoInstance800.DEF = "hanim_l_thelion";
let fieldValue801 = browser.currentScene.createNode("fieldValue");
fieldValue801.name = "name";
fieldValue801.value = "l_thelion";
ProtoInstance800.fieldValue = new MFNode();

ProtoInstance800.fieldValue[0] = fieldValue801;

let fieldValue802 = browser.currentScene.createNode("fieldValue");
fieldValue802.name = "translation";
fieldValue802.value = "0.09179999679327011 1.3381999731063843 0.11919999867677689";
ProtoInstance800.fieldValue[1] = fieldValue802;

fieldValue787.children[4] = ProtoInstance800;

let ProtoInstance803 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance803.name = "Site";
ProtoInstance803.DEF = "hanim_substernale";
let fieldValue804 = browser.currentScene.createNode("fieldValue");
fieldValue804.name = "name";
fieldValue804.value = "substernale";
ProtoInstance803.fieldValue = new MFNode();

ProtoInstance803.fieldValue[0] = fieldValue804;

let fieldValue805 = browser.currentScene.createNode("fieldValue");
fieldValue805.name = "translation";
fieldValue805.value = "0.008500000461935997 1.2994999885559082 0.11469999700784683";
ProtoInstance803.fieldValue[1] = fieldValue805;

fieldValue787.children[5] = ProtoInstance803;

let ProtoInstance806 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance806.name = "Site";
ProtoInstance806.DEF = "hanim_r_rib10";
let fieldValue807 = browser.currentScene.createNode("fieldValue");
fieldValue807.name = "name";
fieldValue807.value = "r_rib10";
ProtoInstance806.fieldValue = new MFNode();

ProtoInstance806.fieldValue[0] = fieldValue807;

let fieldValue808 = browser.currentScene.createNode("fieldValue");
fieldValue808.name = "translation";
fieldValue808.value = "-0.07109999656677246 1.194100022315979 0.10159999877214432";
ProtoInstance806.fieldValue[1] = fieldValue808;

fieldValue787.children[6] = ProtoInstance806;

let ProtoInstance809 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance809.name = "Site";
ProtoInstance809.DEF = "hanim_l_rib10";
let fieldValue810 = browser.currentScene.createNode("fieldValue");
fieldValue810.name = "name";
fieldValue810.value = "l_rib10";
ProtoInstance809.fieldValue = new MFNode();

ProtoInstance809.fieldValue[0] = fieldValue810;

let fieldValue811 = browser.currentScene.createNode("fieldValue");
fieldValue811.name = "translation";
fieldValue811.value = "0.08709999918937683 1.1924999952316284 0.09920000284910202";
ProtoInstance809.fieldValue[1] = fieldValue811;

fieldValue787.children[7] = ProtoInstance809;

let ProtoInstance812 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance812.name = "Site";
ProtoInstance812.DEF = "hanim_cervicale";
let fieldValue813 = browser.currentScene.createNode("fieldValue");
fieldValue813.name = "name";
fieldValue813.value = "cervicale";
ProtoInstance812.fieldValue = new MFNode();

ProtoInstance812.fieldValue[0] = fieldValue813;

let fieldValue814 = browser.currentScene.createNode("fieldValue");
fieldValue814.name = "translation";
fieldValue814.value = "0.006399999838322401 1.5199999809265137 -0.08150000125169754";
ProtoInstance812.fieldValue[1] = fieldValue814;

fieldValue787.children[8] = ProtoInstance812;

let ProtoInstance815 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance815.name = "Site";
ProtoInstance815.DEF = "hanim_spine_2_lower_back";
let fieldValue816 = browser.currentScene.createNode("fieldValue");
fieldValue816.name = "name";
fieldValue816.value = "spine_2_lower_back";
ProtoInstance815.fieldValue = new MFNode();

ProtoInstance815.fieldValue[0] = fieldValue816;

let fieldValue817 = browser.currentScene.createNode("fieldValue");
fieldValue817.name = "translation";
fieldValue817.value = "0.004900000058114529 1.1907999515533447 -0.11129999905824661";
ProtoInstance815.fieldValue[1] = fieldValue817;

fieldValue787.children[9] = ProtoInstance815;

let ProtoInstance818 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance818.name = "Site";
ProtoInstance818.DEF = "hanim_waist_preferred_posterior";
let fieldValue819 = browser.currentScene.createNode("fieldValue");
fieldValue819.name = "name";
fieldValue819.value = "waist_preferred_posterior";
ProtoInstance818.fieldValue = new MFNode();

ProtoInstance818.fieldValue[0] = fieldValue819;

let fieldValue820 = browser.currentScene.createNode("fieldValue");
fieldValue820.name = "translation";
fieldValue820.value = "0.28999999165534973 1.0915000438690186 -0.10909999907016754";
ProtoInstance818.fieldValue[1] = fieldValue820;

fieldValue787.children[10] = ProtoInstance818;

let ProtoInstance821 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance821.name = "Site";
ProtoInstance821.DEF = "hanim_r_acromion";
let fieldValue822 = browser.currentScene.createNode("fieldValue");
fieldValue822.name = "name";
fieldValue822.value = "r_acromion";
ProtoInstance821.fieldValue = new MFNode();

ProtoInstance821.fieldValue[0] = fieldValue822;

let fieldValue823 = browser.currentScene.createNode("fieldValue");
fieldValue823.name = "translation";
fieldValue823.value = "-0.19050000607967377 1.479099988937378 -0.04309999942779541";
ProtoInstance821.fieldValue[1] = fieldValue823;

fieldValue787.children[11] = ProtoInstance821;

let ProtoInstance824 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance824.name = "Site";
ProtoInstance824.DEF = "hanim_r_axilla_proximal";
let fieldValue825 = browser.currentScene.createNode("fieldValue");
fieldValue825.name = "name";
fieldValue825.value = "r_axilla_proximal";
ProtoInstance824.fieldValue = new MFNode();

ProtoInstance824.fieldValue[0] = fieldValue825;

let fieldValue826 = browser.currentScene.createNode("fieldValue");
fieldValue826.name = "translation";
fieldValue826.value = "-0.16259999573230743 1.4071999788284302 -0.003100000089034438";
ProtoInstance824.fieldValue[1] = fieldValue826;

fieldValue787.children[12] = ProtoInstance824;

let ProtoInstance827 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance827.name = "Site";
ProtoInstance827.DEF = "hanim_r_axilla_distal";
let fieldValue828 = browser.currentScene.createNode("fieldValue");
fieldValue828.name = "name";
fieldValue828.value = "r_axilla_distal";
ProtoInstance827.fieldValue = new MFNode();

ProtoInstance827.fieldValue[0] = fieldValue828;

let fieldValue829 = browser.currentScene.createNode("fieldValue");
fieldValue829.name = "translation";
fieldValue829.value = "-0.16030000150203705 1.4098000526428223 -0.08259999752044678";
ProtoInstance827.fieldValue[1] = fieldValue829;

fieldValue787.children[13] = ProtoInstance827;

let ProtoInstance830 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance830.name = "Site";
ProtoInstance830.DEF = "hanim_l_acromion";
let fieldValue831 = browser.currentScene.createNode("fieldValue");
fieldValue831.name = "name";
fieldValue831.value = "l_acromion";
ProtoInstance830.fieldValue = new MFNode();

ProtoInstance830.fieldValue[0] = fieldValue831;

let fieldValue832 = browser.currentScene.createNode("fieldValue");
fieldValue832.name = "translation";
fieldValue832.value = "0.20319999754428864 1.4759999513626099 -0.04899999871850014";
ProtoInstance830.fieldValue[1] = fieldValue832;

fieldValue787.children[14] = ProtoInstance830;

let ProtoInstance833 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance833.name = "Site";
ProtoInstance833.DEF = "hanim_l_axilla_proximal";
let fieldValue834 = browser.currentScene.createNode("fieldValue");
fieldValue834.name = "name";
fieldValue834.value = "l_axilla_proximal";
ProtoInstance833.fieldValue = new MFNode();

ProtoInstance833.fieldValue[0] = fieldValue834;

let fieldValue835 = browser.currentScene.createNode("fieldValue");
fieldValue835.name = "translation";
fieldValue835.value = "0.1776999980211258 1.406499981880188 -0.007499999832361937";
ProtoInstance833.fieldValue[1] = fieldValue835;

fieldValue787.children[15] = ProtoInstance833;

let ProtoInstance836 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance836.name = "Site";
ProtoInstance836.DEF = "hanim_l_axilla_distal";
let fieldValue837 = browser.currentScene.createNode("fieldValue");
fieldValue837.name = "name";
fieldValue837.value = "l_axilla_distal";
ProtoInstance836.fieldValue = new MFNode();

ProtoInstance836.fieldValue[0] = fieldValue837;

let fieldValue838 = browser.currentScene.createNode("fieldValue");
fieldValue838.name = "translation";
fieldValue838.value = "0.17059999704360962 1.4071999788284302 -0.08749999850988388";
ProtoInstance836.fieldValue[1] = fieldValue838;

fieldValue787.children[16] = ProtoInstance836;

let ProtoInstance839 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance839.name = "Site";
ProtoInstance839.DEF = "hanim_r_neck_base";
let fieldValue840 = browser.currentScene.createNode("fieldValue");
fieldValue840.name = "name";
fieldValue840.value = "r_neck_base";
ProtoInstance839.fieldValue = new MFNode();

ProtoInstance839.fieldValue[0] = fieldValue840;

let fieldValue841 = browser.currentScene.createNode("fieldValue");
fieldValue841.name = "translation";
fieldValue841.value = "-0.04190000146627426 1.5148999691009521 -0.02199999988079071";
ProtoInstance839.fieldValue[1] = fieldValue841;

fieldValue787.children[17] = ProtoInstance839;

let ProtoInstance842 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance842.name = "Site";
ProtoInstance842.DEF = "hanim_l_neck_base";
let fieldValue843 = browser.currentScene.createNode("fieldValue");
fieldValue843.name = "name";
fieldValue843.value = "l_neck_base";
ProtoInstance842.fieldValue = new MFNode();

ProtoInstance842.fieldValue[0] = fieldValue843;

let fieldValue844 = browser.currentScene.createNode("fieldValue");
fieldValue844.name = "translation";
fieldValue844.value = "0.06459999829530716 1.5140999555587769 -0.03799999877810478";
ProtoInstance842.fieldValue[1] = fieldValue844;

fieldValue787.children[18] = ProtoInstance842;

let ProtoInstance845 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance845.name = "Site";
ProtoInstance845.DEF = "hanim_navel";
let fieldValue846 = browser.currentScene.createNode("fieldValue");
fieldValue846.name = "name";
fieldValue846.value = "navel";
ProtoInstance845.fieldValue = new MFNode();

ProtoInstance845.fieldValue[0] = fieldValue846;

let fieldValue847 = browser.currentScene.createNode("fieldValue");
fieldValue847.name = "translation";
fieldValue847.value = "0.006899999920278788 1.09660005569458 0.10170000046491623";
ProtoInstance845.fieldValue[1] = fieldValue847;

fieldValue787.children[19] = ProtoInstance845;

ProtoInstance785.fieldValue[1] = fieldValue787;

fieldValue638.children[3] = ProtoInstance785;

ProtoInstance634.fieldValue[3] = fieldValue638;

fieldValue498.children[1] = ProtoInstance634;

let ProtoInstance848 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance848.name = "Segment";
ProtoInstance848.DEF = "hanim_sacrum";
let fieldValue849 = browser.currentScene.createNode("fieldValue");
fieldValue849.name = "name";
fieldValue849.value = "sacrum";
ProtoInstance848.fieldValue = new MFNode();

ProtoInstance848.fieldValue[0] = fieldValue849;

let fieldValue850 = browser.currentScene.createNode("fieldValue");
fieldValue850.name = "children";
let ProtoInstance851 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance851.name = "Site";
ProtoInstance851.DEF = "hanim_r_asis";
let fieldValue852 = browser.currentScene.createNode("fieldValue");
fieldValue852.name = "name";
fieldValue852.value = "r_asis";
ProtoInstance851.fieldValue = new MFNode();

ProtoInstance851.fieldValue[0] = fieldValue852;

let fieldValue853 = browser.currentScene.createNode("fieldValue");
fieldValue853.name = "translation";
fieldValue853.value = "-0.08869999647140503 1.0020999908447266 0.1111999973654747";
ProtoInstance851.fieldValue[1] = fieldValue853;

fieldValue850.children = new MFNode();

fieldValue850.children[0] = ProtoInstance851;

let ProtoInstance854 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance854.name = "Site";
ProtoInstance854.DEF = "hanim_l_asis";
let fieldValue855 = browser.currentScene.createNode("fieldValue");
fieldValue855.name = "name";
fieldValue855.value = "l_asis";
ProtoInstance854.fieldValue = new MFNode();

ProtoInstance854.fieldValue[0] = fieldValue855;

let fieldValue856 = browser.currentScene.createNode("fieldValue");
fieldValue856.name = "translation";
fieldValue856.value = "0.0925000011920929 0.9983000159263611 0.10520000010728836";
ProtoInstance854.fieldValue[1] = fieldValue856;

fieldValue850.children[1] = ProtoInstance854;

let ProtoInstance857 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance857.name = "Site";
ProtoInstance857.DEF = "hanim_r_iliocristale";
let fieldValue858 = browser.currentScene.createNode("fieldValue");
fieldValue858.name = "name";
fieldValue858.value = "r_iliocristale";
ProtoInstance857.fieldValue = new MFNode();

ProtoInstance857.fieldValue[0] = fieldValue858;

let fieldValue859 = browser.currentScene.createNode("fieldValue");
fieldValue859.name = "translation";
fieldValue859.value = "-0.1525000035762787 1.0628000497817993 0.0035000001080334187";
ProtoInstance857.fieldValue[1] = fieldValue859;

fieldValue850.children[2] = ProtoInstance857;

let ProtoInstance860 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance860.name = "Site";
ProtoInstance860.DEF = "hanim_r_trochanterion";
let fieldValue861 = browser.currentScene.createNode("fieldValue");
fieldValue861.name = "name";
fieldValue861.value = "r_trochanterion";
ProtoInstance860.fieldValue = new MFNode();

ProtoInstance860.fieldValue[0] = fieldValue861;

let fieldValue862 = browser.currentScene.createNode("fieldValue");
fieldValue862.name = "translation";
fieldValue862.value = "-0.1688999980688095 0.8418999910354614 0.03519999980926514";
ProtoInstance860.fieldValue[1] = fieldValue862;

fieldValue850.children[3] = ProtoInstance860;

let ProtoInstance863 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance863.name = "Site";
ProtoInstance863.DEF = "hanim_l_iliocristale";
let fieldValue864 = browser.currentScene.createNode("fieldValue");
fieldValue864.name = "name";
fieldValue864.value = "l_iliocristale";
ProtoInstance863.fieldValue = new MFNode();

ProtoInstance863.fieldValue[0] = fieldValue864;

let fieldValue865 = browser.currentScene.createNode("fieldValue");
fieldValue865.name = "translation";
fieldValue865.value = "0.16120000183582306 1.0536999702453613 0.0007999999797903001";
ProtoInstance863.fieldValue[1] = fieldValue865;

fieldValue850.children[4] = ProtoInstance863;

let ProtoInstance866 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance866.name = "Site";
ProtoInstance866.DEF = "hanim_l_trochanterion";
let fieldValue867 = browser.currentScene.createNode("fieldValue");
fieldValue867.name = "name";
fieldValue867.value = "l_trochanterion";
ProtoInstance866.fieldValue = new MFNode();

ProtoInstance866.fieldValue[0] = fieldValue867;

let fieldValue868 = browser.currentScene.createNode("fieldValue");
fieldValue868.name = "translation";
fieldValue868.value = "0.16769999265670776 0.8335999846458435 0.030300000682473183";
ProtoInstance866.fieldValue[1] = fieldValue868;

fieldValue850.children[5] = ProtoInstance866;

let ProtoInstance869 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance869.name = "Site";
ProtoInstance869.DEF = "hanim_r_psis";
let fieldValue870 = browser.currentScene.createNode("fieldValue");
fieldValue870.name = "name";
fieldValue870.value = "r_psis";
ProtoInstance869.fieldValue = new MFNode();

ProtoInstance869.fieldValue[0] = fieldValue870;

let fieldValue871 = browser.currentScene.createNode("fieldValue");
fieldValue871.name = "translation";
fieldValue871.value = "-0.07159999758005142 1.0190000534057617 -0.11379999667406082";
ProtoInstance869.fieldValue[1] = fieldValue871;

fieldValue850.children[6] = ProtoInstance869;

let ProtoInstance872 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance872.name = "Site";
ProtoInstance872.DEF = "hanim_l_psis";
let fieldValue873 = browser.currentScene.createNode("fieldValue");
fieldValue873.name = "name";
fieldValue873.value = "l_psis";
ProtoInstance872.fieldValue = new MFNode();

ProtoInstance872.fieldValue[0] = fieldValue873;

let fieldValue874 = browser.currentScene.createNode("fieldValue");
fieldValue874.name = "translation";
fieldValue874.value = "0.07739999890327454 1.0190000534057617 -0.11509999632835388";
ProtoInstance872.fieldValue[1] = fieldValue874;

fieldValue850.children[7] = ProtoInstance872;

let ProtoInstance875 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance875.name = "Site";
ProtoInstance875.DEF = "hanim_crotch";
let fieldValue876 = browser.currentScene.createNode("fieldValue");
fieldValue876.name = "name";
fieldValue876.value = "crotch";
ProtoInstance875.fieldValue = new MFNode();

ProtoInstance875.fieldValue[0] = fieldValue876;

let fieldValue877 = browser.currentScene.createNode("fieldValue");
fieldValue877.name = "translation";
fieldValue877.value = "0.0034000000450760126 0.8266000151634216 0.025699999183416367";
ProtoInstance875.fieldValue[1] = fieldValue877;

fieldValue850.children[8] = ProtoInstance875;

ProtoInstance848.fieldValue[1] = fieldValue850;

fieldValue498.children[2] = ProtoInstance848;

ProtoInstance494.fieldValue[3] = fieldValue498;

fieldValue493.children = new MFNode();

fieldValue493.children[0] = ProtoInstance494;

let ProtoInstance878 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance878.name = "Joint";
ProtoInstance878.DEF = "hanim_sacroiliac";
let fieldValue879 = browser.currentScene.createNode("fieldValue");
fieldValue879.name = "stiffness";
fieldValue879.value = "1 1 1";
ProtoInstance878.fieldValue = new MFNode();

ProtoInstance878.fieldValue[0] = fieldValue879;

let fieldValue880 = browser.currentScene.createNode("fieldValue");
fieldValue880.name = "name";
fieldValue880.value = "sacroiliac";
ProtoInstance878.fieldValue[1] = fieldValue880;

let fieldValue881 = browser.currentScene.createNode("fieldValue");
fieldValue881.name = "center";
fieldValue881.value = "0 0.914900004863739 0.0015999999595806003";
ProtoInstance878.fieldValue[2] = fieldValue881;

let fieldValue882 = browser.currentScene.createNode("fieldValue");
fieldValue882.name = "children";
let ProtoInstance883 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance883.name = "Joint";
ProtoInstance883.DEF = "hanim_l_hip";
let fieldValue884 = browser.currentScene.createNode("fieldValue");
fieldValue884.name = "stiffness";
fieldValue884.value = "1 1 1";
ProtoInstance883.fieldValue = new MFNode();

ProtoInstance883.fieldValue[0] = fieldValue884;

let fieldValue885 = browser.currentScene.createNode("fieldValue");
fieldValue885.name = "name";
fieldValue885.value = "l_hip";
ProtoInstance883.fieldValue[1] = fieldValue885;

let fieldValue886 = browser.currentScene.createNode("fieldValue");
fieldValue886.name = "center";
fieldValue886.value = "0.09610000252723694 0.9124000072479248 -0.00009999999747378752";
ProtoInstance883.fieldValue[2] = fieldValue886;

let fieldValue887 = browser.currentScene.createNode("fieldValue");
fieldValue887.name = "children";
let ProtoInstance888 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance888.name = "Joint";
ProtoInstance888.DEF = "hanim_l_knee";
let fieldValue889 = browser.currentScene.createNode("fieldValue");
fieldValue889.name = "stiffness";
fieldValue889.value = "1 1 1";
ProtoInstance888.fieldValue = new MFNode();

ProtoInstance888.fieldValue[0] = fieldValue889;

let fieldValue890 = browser.currentScene.createNode("fieldValue");
fieldValue890.name = "name";
fieldValue890.value = "l_knee";
ProtoInstance888.fieldValue[1] = fieldValue890;

let fieldValue891 = browser.currentScene.createNode("fieldValue");
fieldValue891.name = "center";
fieldValue891.value = "0.10400000214576721 0.48669999837875366 0.030799999833106995";
ProtoInstance888.fieldValue[2] = fieldValue891;

let fieldValue892 = browser.currentScene.createNode("fieldValue");
fieldValue892.name = "children";
let ProtoInstance893 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance893.name = "Joint";
ProtoInstance893.DEF = "hanim_l_talocrural";
let fieldValue894 = browser.currentScene.createNode("fieldValue");
fieldValue894.name = "stiffness";
fieldValue894.value = "1 1 1";
ProtoInstance893.fieldValue = new MFNode();

ProtoInstance893.fieldValue[0] = fieldValue894;

let fieldValue895 = browser.currentScene.createNode("fieldValue");
fieldValue895.name = "name";
fieldValue895.value = "l_talocrural";
ProtoInstance893.fieldValue[1] = fieldValue895;

let fieldValue896 = browser.currentScene.createNode("fieldValue");
fieldValue896.name = "center";
fieldValue896.value = "0.11010000109672546 0.06560000032186508 -0.07360000163316727";
ProtoInstance893.fieldValue[2] = fieldValue896;

let fieldValue897 = browser.currentScene.createNode("fieldValue");
fieldValue897.name = "children";
let ProtoInstance898 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance898.name = "Joint";
ProtoInstance898.DEF = "hanim_l_metatarsophalangeal_";
let fieldValue899 = browser.currentScene.createNode("fieldValue");
fieldValue899.name = "stiffness";
fieldValue899.value = "1 1 1";
ProtoInstance898.fieldValue = new MFNode();

ProtoInstance898.fieldValue[0] = fieldValue899;

let fieldValue900 = browser.currentScene.createNode("fieldValue");
fieldValue900.name = "name";
fieldValue900.value = "l_metatarsophalangeal_";
ProtoInstance898.fieldValue[1] = fieldValue900;

let fieldValue901 = browser.currentScene.createNode("fieldValue");
fieldValue901.name = "center";
fieldValue901.value = "0.10859999805688858 0.00009999999747378752 0.03680000081658363";
ProtoInstance898.fieldValue[2] = fieldValue901;

let fieldValue902 = browser.currentScene.createNode("fieldValue");
fieldValue902.name = "children";
let ProtoInstance903 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance903.name = "Segment";
ProtoInstance903.DEF = "hanim_l_middistal";
let fieldValue904 = browser.currentScene.createNode("fieldValue");
fieldValue904.name = "name";
fieldValue904.value = "l_middistal";
ProtoInstance903.fieldValue = new MFNode();

ProtoInstance903.fieldValue[0] = fieldValue904;

let fieldValue905 = browser.currentScene.createNode("fieldValue");
fieldValue905.name = "children";
let ProtoInstance906 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance906.name = "Site";
ProtoInstance906.DEF = "hanim_l_middistal_tip";
let fieldValue907 = browser.currentScene.createNode("fieldValue");
fieldValue907.name = "name";
fieldValue907.value = "l_middistal_tip";
ProtoInstance906.fieldValue = new MFNode();

ProtoInstance906.fieldValue[0] = fieldValue907;

let fieldValue908 = browser.currentScene.createNode("fieldValue");
fieldValue908.name = "translation";
fieldValue908.value = "0.13539999723434448 0.0015999999595806003 0.147599995136261";
ProtoInstance906.fieldValue[1] = fieldValue908;

fieldValue905.children = new MFNode();

fieldValue905.children[0] = ProtoInstance906;

let ProtoInstance909 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance909.name = "Site";
ProtoInstance909.DEF = "hanim_l_tarsal_interphalangeal_phalanx_5";
let fieldValue910 = browser.currentScene.createNode("fieldValue");
fieldValue910.name = "name";
fieldValue910.value = "l_tarsal_interphalangeal_phalanx_5";
ProtoInstance909.fieldValue = new MFNode();

ProtoInstance909.fieldValue[0] = fieldValue910;

let fieldValue911 = browser.currentScene.createNode("fieldValue");
fieldValue911.name = "translation";
fieldValue911.value = "0.18250000476837158 0.007000000216066837 0.09279999881982803";
ProtoInstance909.fieldValue[1] = fieldValue911;

fieldValue905.children[1] = ProtoInstance909;

let ProtoInstance912 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance912.name = "Site";
ProtoInstance912.DEF = "hanim_l_tarsal_interphalangeal_phalanx_1";
let fieldValue913 = browser.currentScene.createNode("fieldValue");
fieldValue913.name = "name";
fieldValue913.value = "l_tarsal_interphalangeal_phalanx_1";
ProtoInstance912.fieldValue = new MFNode();

ProtoInstance912.fieldValue[0] = fieldValue913;

let fieldValue914 = browser.currentScene.createNode("fieldValue");
fieldValue914.name = "translation";
fieldValue914.value = "0.08160000294446945 0.02319999970495701 0.010599999688565731";
ProtoInstance912.fieldValue[1] = fieldValue914;

fieldValue905.children[2] = ProtoInstance912;

let ProtoInstance915 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance915.name = "Site";
ProtoInstance915.DEF = "hanim_l_tarsal_distal_phalanx_2";
let fieldValue916 = browser.currentScene.createNode("fieldValue");
fieldValue916.name = "name";
fieldValue916.value = "l_tarsal_distal_phalanx_2";
ProtoInstance915.fieldValue = new MFNode();

ProtoInstance915.fieldValue[0] = fieldValue916;

let fieldValue917 = browser.currentScene.createNode("fieldValue");
fieldValue917.name = "translation";
fieldValue917.value = "0.11949999630451202 0.007899999618530273 0.14329999685287476";
ProtoInstance915.fieldValue[1] = fieldValue917;

fieldValue905.children[3] = ProtoInstance915;

ProtoInstance903.fieldValue[1] = fieldValue905;

fieldValue902.children = new MFNode();

fieldValue902.children[0] = ProtoInstance903;

ProtoInstance898.fieldValue[3] = fieldValue902;

fieldValue897.children = new MFNode();

fieldValue897.children[0] = ProtoInstance898;

let ProtoInstance918 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance918.name = "Segment";
ProtoInstance918.DEF = "hanim_l_hindfoot";
let fieldValue919 = browser.currentScene.createNode("fieldValue");
fieldValue919.name = "name";
fieldValue919.value = "l_hindfoot";
ProtoInstance918.fieldValue = new MFNode();

ProtoInstance918.fieldValue[0] = fieldValue919;

let fieldValue920 = browser.currentScene.createNode("fieldValue");
fieldValue920.name = "children";
let ProtoInstance921 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance921.name = "Site";
ProtoInstance921.DEF = "hanim_l_lateral_malleolus";
let fieldValue922 = browser.currentScene.createNode("fieldValue");
fieldValue922.name = "name";
fieldValue922.value = "l_lateral_malleolus";
ProtoInstance921.fieldValue = new MFNode();

ProtoInstance921.fieldValue[0] = fieldValue922;

let fieldValue923 = browser.currentScene.createNode("fieldValue");
fieldValue923.name = "translation";
fieldValue923.value = "0.13079999387264252 0.059700001031160355 -0.10320000350475311";
ProtoInstance921.fieldValue[1] = fieldValue923;

fieldValue920.children = new MFNode();

fieldValue920.children[0] = ProtoInstance921;

let ProtoInstance924 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance924.name = "Site";
ProtoInstance924.DEF = "hanim_l_medial_malleolus";
let fieldValue925 = browser.currentScene.createNode("fieldValue");
fieldValue925.name = "name";
fieldValue925.value = "l_medial_malleolus";
ProtoInstance924.fieldValue = new MFNode();

ProtoInstance924.fieldValue[0] = fieldValue925;

let fieldValue926 = browser.currentScene.createNode("fieldValue");
fieldValue926.name = "translation";
fieldValue926.value = "0.08900000154972076 0.07159999758005142 -0.08810000121593475";
ProtoInstance924.fieldValue[1] = fieldValue926;

fieldValue920.children[1] = ProtoInstance924;

let ProtoInstance927 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance927.name = "Site";
ProtoInstance927.DEF = "hanim_l_sphyrion";
let fieldValue928 = browser.currentScene.createNode("fieldValue");
fieldValue928.name = "name";
fieldValue928.value = "l_sphyrion";
ProtoInstance927.fieldValue = new MFNode();

ProtoInstance927.fieldValue[0] = fieldValue928;

let fieldValue929 = browser.currentScene.createNode("fieldValue");
fieldValue929.name = "translation";
fieldValue929.value = "0.08900000154972076 0.057500001043081284 -0.09430000185966492";
ProtoInstance927.fieldValue[1] = fieldValue929;

fieldValue920.children[2] = ProtoInstance927;

let ProtoInstance930 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance930.name = "Site";
ProtoInstance930.DEF = "hanim_l_calcaneus_posterior";
let fieldValue931 = browser.currentScene.createNode("fieldValue");
fieldValue931.name = "name";
fieldValue931.value = "l_calcaneus_posterior";
ProtoInstance930.fieldValue = new MFNode();

ProtoInstance930.fieldValue[0] = fieldValue931;

let fieldValue932 = browser.currentScene.createNode("fieldValue");
fieldValue932.name = "translation";
fieldValue932.value = "0.09740000218153 0.02590000070631504 -0.11710000038146973";
ProtoInstance930.fieldValue[1] = fieldValue932;

fieldValue920.children[3] = ProtoInstance930;

ProtoInstance918.fieldValue[1] = fieldValue920;

fieldValue897.children[1] = ProtoInstance918;

ProtoInstance893.fieldValue[3] = fieldValue897;

fieldValue892.children = new MFNode();

fieldValue892.children[0] = ProtoInstance893;

let ProtoInstance933 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance933.name = "Segment";
ProtoInstance933.DEF = "hanim_l_calf";
let fieldValue934 = browser.currentScene.createNode("fieldValue");
fieldValue934.name = "name";
fieldValue934.value = "l_calf";
ProtoInstance933.fieldValue = new MFNode();

ProtoInstance933.fieldValue[0] = fieldValue934;

fieldValue892.children[1] = ProtoInstance933;

ProtoInstance888.fieldValue[3] = fieldValue892;

fieldValue887.children = new MFNode();

fieldValue887.children[0] = ProtoInstance888;

let ProtoInstance935 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance935.name = "Segment";
ProtoInstance935.DEF = "hanim_l_thigh";
let fieldValue936 = browser.currentScene.createNode("fieldValue");
fieldValue936.name = "name";
fieldValue936.value = "l_thigh";
ProtoInstance935.fieldValue = new MFNode();

ProtoInstance935.fieldValue[0] = fieldValue936;

let fieldValue937 = browser.currentScene.createNode("fieldValue");
fieldValue937.name = "children";
let ProtoInstance938 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance938.name = "Site";
ProtoInstance938.DEF = "hanim_l_knee_crease";
let fieldValue939 = browser.currentScene.createNode("fieldValue");
fieldValue939.name = "name";
fieldValue939.value = "l_knee_crease";
ProtoInstance938.fieldValue = new MFNode();

ProtoInstance938.fieldValue[0] = fieldValue939;

let fieldValue940 = browser.currentScene.createNode("fieldValue");
fieldValue940.name = "translation";
fieldValue940.value = "0.09929999709129333 0.48809999227523804 -0.030899999663233757";
ProtoInstance938.fieldValue[1] = fieldValue940;

fieldValue937.children = new MFNode();

fieldValue937.children[0] = ProtoInstance938;

let ProtoInstance941 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance941.name = "Site";
ProtoInstance941.DEF = "hanim_l_femoral_lateral_epicondyles";
let fieldValue942 = browser.currentScene.createNode("fieldValue");
fieldValue942.name = "name";
fieldValue942.value = "l_femoral_lateral_epicondyles";
ProtoInstance941.fieldValue = new MFNode();

ProtoInstance941.fieldValue[0] = fieldValue942;

let fieldValue943 = browser.currentScene.createNode("fieldValue");
fieldValue943.name = "translation";
fieldValue943.value = "0.1597999930381775 0.4966999888420105 0.02969999983906746";
ProtoInstance941.fieldValue[1] = fieldValue943;

fieldValue937.children[1] = ProtoInstance941;

let ProtoInstance944 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance944.name = "Site";
ProtoInstance944.DEF = "hanim_l_femoral_medial_epicondyles";
let fieldValue945 = browser.currentScene.createNode("fieldValue");
fieldValue945.name = "name";
fieldValue945.value = "l_femoral_lateral_epicondyles";
ProtoInstance944.fieldValue = new MFNode();

ProtoInstance944.fieldValue[0] = fieldValue945;

let fieldValue946 = browser.currentScene.createNode("fieldValue");
fieldValue946.name = "translation";
fieldValue946.value = "0.039799999445676804 0.49459999799728394 0.030300000682473183";
ProtoInstance944.fieldValue[1] = fieldValue946;

fieldValue937.children[2] = ProtoInstance944;

ProtoInstance935.fieldValue[1] = fieldValue937;

fieldValue887.children[1] = ProtoInstance935;

ProtoInstance883.fieldValue[3] = fieldValue887;

fieldValue882.children = new MFNode();

fieldValue882.children[0] = ProtoInstance883;

let ProtoInstance947 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance947.name = "Joint";
ProtoInstance947.DEF = "hanim_r_hip";
let fieldValue948 = browser.currentScene.createNode("fieldValue");
fieldValue948.name = "stiffness";
fieldValue948.value = "1 1 1";
ProtoInstance947.fieldValue = new MFNode();

ProtoInstance947.fieldValue[0] = fieldValue948;

let fieldValue949 = browser.currentScene.createNode("fieldValue");
fieldValue949.name = "name";
fieldValue949.value = "r_hip";
ProtoInstance947.fieldValue[1] = fieldValue949;

let fieldValue950 = browser.currentScene.createNode("fieldValue");
fieldValue950.name = "center";
fieldValue950.value = "-0.0949999988079071 0.9171000123023987 0.002899999963119626";
ProtoInstance947.fieldValue[2] = fieldValue950;

let fieldValue951 = browser.currentScene.createNode("fieldValue");
fieldValue951.name = "children";
let ProtoInstance952 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance952.name = "Joint";
ProtoInstance952.DEF = "hanim_r_knee";
let fieldValue953 = browser.currentScene.createNode("fieldValue");
fieldValue953.name = "stiffness";
fieldValue953.value = "1 1 1";
ProtoInstance952.fieldValue = new MFNode();

ProtoInstance952.fieldValue[0] = fieldValue953;

let fieldValue954 = browser.currentScene.createNode("fieldValue");
fieldValue954.name = "name";
fieldValue954.value = "r_knee";
ProtoInstance952.fieldValue[1] = fieldValue954;

let fieldValue955 = browser.currentScene.createNode("fieldValue");
fieldValue955.name = "center";
fieldValue955.value = "-0.08669999986886978 0.49129998683929443 0.03180000185966492";
ProtoInstance952.fieldValue[2] = fieldValue955;

let fieldValue956 = browser.currentScene.createNode("fieldValue");
fieldValue956.name = "children";
let ProtoInstance957 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance957.name = "Joint";
ProtoInstance957.DEF = "hanim_r_talocrural";
let fieldValue958 = browser.currentScene.createNode("fieldValue");
fieldValue958.name = "stiffness";
fieldValue958.value = "1 1 1";
ProtoInstance957.fieldValue = new MFNode();

ProtoInstance957.fieldValue[0] = fieldValue958;

let fieldValue959 = browser.currentScene.createNode("fieldValue");
fieldValue959.name = "name";
fieldValue959.value = "r_talocrural";
ProtoInstance957.fieldValue[1] = fieldValue959;

let fieldValue960 = browser.currentScene.createNode("fieldValue");
fieldValue960.name = "center";
fieldValue960.value = "-0.08009999990463257 0.07119999825954437 -0.07660000026226044";
ProtoInstance957.fieldValue[2] = fieldValue960;

let fieldValue961 = browser.currentScene.createNode("fieldValue");
fieldValue961.name = "children";
let ProtoInstance962 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance962.name = "Joint";
ProtoInstance962.DEF = "hanim_r_metatarsophalangeal_";
let fieldValue963 = browser.currentScene.createNode("fieldValue");
fieldValue963.name = "stiffness";
fieldValue963.value = "1 1 1";
ProtoInstance962.fieldValue = new MFNode();

ProtoInstance962.fieldValue[0] = fieldValue963;

let fieldValue964 = browser.currentScene.createNode("fieldValue");
fieldValue964.name = "name";
fieldValue964.value = "r_metatarsophalangeal_";
ProtoInstance962.fieldValue[1] = fieldValue964;

let fieldValue965 = browser.currentScene.createNode("fieldValue");
fieldValue965.name = "center";
fieldValue965.value = "-0.08009999990463257 0 0.03680000081658363";
ProtoInstance962.fieldValue[2] = fieldValue965;

let fieldValue966 = browser.currentScene.createNode("fieldValue");
fieldValue966.name = "children";
let ProtoInstance967 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance967.name = "Segment";
ProtoInstance967.DEF = "hanim_r_middistal";
let fieldValue968 = browser.currentScene.createNode("fieldValue");
fieldValue968.name = "name";
fieldValue968.value = "r_middistal";
ProtoInstance967.fieldValue = new MFNode();

ProtoInstance967.fieldValue[0] = fieldValue968;

let fieldValue969 = browser.currentScene.createNode("fieldValue");
fieldValue969.name = "children";
let ProtoInstance970 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance970.name = "Site";
ProtoInstance970.DEF = "hanim_r_middistal_tip";
let fieldValue971 = browser.currentScene.createNode("fieldValue");
fieldValue971.name = "name";
fieldValue971.value = "r_middistal_tip";
ProtoInstance970.fieldValue = new MFNode();

ProtoInstance970.fieldValue[0] = fieldValue971;

let fieldValue972 = browser.currentScene.createNode("fieldValue");
fieldValue972.name = "translation";
fieldValue972.value = "-0.10429999977350235 -0.022700000554323196 0.14499999582767487";
ProtoInstance970.fieldValue[1] = fieldValue972;

fieldValue969.children = new MFNode();

fieldValue969.children[0] = ProtoInstance970;

let ProtoInstance973 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance973.name = "Site";
ProtoInstance973.DEF = "hanim_r_tarsal_interphalangeal_phalanx_5";
let fieldValue974 = browser.currentScene.createNode("fieldValue");
fieldValue974.name = "name";
fieldValue974.value = "r_tarsal_interphalangeal_phalanx_5";
ProtoInstance973.fieldValue = new MFNode();

ProtoInstance973.fieldValue[0] = fieldValue974;

let fieldValue975 = browser.currentScene.createNode("fieldValue");
fieldValue975.name = "translation";
fieldValue975.value = "-0.15230000019073486 0.016599999740719795 0.08950000256299973";
ProtoInstance973.fieldValue[1] = fieldValue975;

fieldValue969.children[1] = ProtoInstance973;

let ProtoInstance976 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance976.name = "Site";
ProtoInstance976.DEF = "hanim_r_tarsal_interphalangeal_phalanx_1";
let fieldValue977 = browser.currentScene.createNode("fieldValue");
fieldValue977.name = "name";
fieldValue977.value = "r_tarsal_interphalangeal_phalanx_1";
ProtoInstance976.fieldValue = new MFNode();

ProtoInstance976.fieldValue[0] = fieldValue977;

let fieldValue978 = browser.currentScene.createNode("fieldValue");
fieldValue978.name = "translation";
fieldValue978.value = "-0.05209999904036522 0.026000000536441803 0.01269999984651804";
ProtoInstance976.fieldValue[1] = fieldValue978;

fieldValue969.children[2] = ProtoInstance976;

let ProtoInstance979 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance979.name = "Site";
ProtoInstance979.DEF = "hanim_r_tarsal_distal_phalanx_2";
let fieldValue980 = browser.currentScene.createNode("fieldValue");
fieldValue980.name = "name";
fieldValue980.value = "r_tarsal_distal_phalanx_2";
ProtoInstance979.fieldValue = new MFNode();

ProtoInstance979.fieldValue[0] = fieldValue980;

let fieldValue981 = browser.currentScene.createNode("fieldValue");
fieldValue981.name = "translation";
fieldValue981.value = "-0.08829999715089798 0.013399999588727951 0.13830000162124634";
ProtoInstance979.fieldValue[1] = fieldValue981;

fieldValue969.children[3] = ProtoInstance979;

ProtoInstance967.fieldValue[1] = fieldValue969;

fieldValue966.children = new MFNode();

fieldValue966.children[0] = ProtoInstance967;

ProtoInstance962.fieldValue[3] = fieldValue966;

fieldValue961.children = new MFNode();

fieldValue961.children[0] = ProtoInstance962;

let ProtoInstance982 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance982.name = "Segment";
ProtoInstance982.DEF = "hanim_r_hindfoot";
let fieldValue983 = browser.currentScene.createNode("fieldValue");
fieldValue983.name = "name";
fieldValue983.value = "r_hindfoot";
ProtoInstance982.fieldValue = new MFNode();

ProtoInstance982.fieldValue[0] = fieldValue983;

let fieldValue984 = browser.currentScene.createNode("fieldValue");
fieldValue984.name = "children";
let ProtoInstance985 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance985.name = "Site";
ProtoInstance985.DEF = "hanim_r_lateral_malleolus";
let fieldValue986 = browser.currentScene.createNode("fieldValue");
fieldValue986.name = "name";
fieldValue986.value = "r_lateral_malleolus";
ProtoInstance985.fieldValue = new MFNode();

ProtoInstance985.fieldValue[0] = fieldValue986;

let fieldValue987 = browser.currentScene.createNode("fieldValue");
fieldValue987.name = "translation";
fieldValue987.value = "-0.1005999967455864 0.0658000037074089 -0.10750000178813934";
ProtoInstance985.fieldValue[1] = fieldValue987;

fieldValue984.children = new MFNode();

fieldValue984.children[0] = ProtoInstance985;

let ProtoInstance988 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance988.name = "Site";
ProtoInstance988.DEF = "hanim_r_medial_malleolus";
let fieldValue989 = browser.currentScene.createNode("fieldValue");
fieldValue989.name = "name";
fieldValue989.value = "r_medial_malleolus";
ProtoInstance988.fieldValue = new MFNode();

ProtoInstance988.fieldValue[0] = fieldValue989;

let fieldValue990 = browser.currentScene.createNode("fieldValue");
fieldValue990.name = "translation";
fieldValue990.value = "-0.05909999832510948 0.07599999755620956 -0.09279999881982803";
ProtoInstance988.fieldValue[1] = fieldValue990;

fieldValue984.children[1] = ProtoInstance988;

let ProtoInstance991 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance991.name = "Site";
ProtoInstance991.DEF = "hanim_r_sphyrion";
let fieldValue992 = browser.currentScene.createNode("fieldValue");
fieldValue992.name = "name";
fieldValue992.value = "r_sphyrion";
ProtoInstance991.fieldValue = new MFNode();

ProtoInstance991.fieldValue[0] = fieldValue992;

let fieldValue993 = browser.currentScene.createNode("fieldValue");
fieldValue993.name = "translation";
fieldValue993.value = "-0.06030000001192093 0.061000000685453415 -0.10019999742507935";
ProtoInstance991.fieldValue[1] = fieldValue993;

fieldValue984.children[2] = ProtoInstance991;

let ProtoInstance994 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance994.name = "Site";
ProtoInstance994.DEF = "hanim_r_calcaneus_posterior";
let fieldValue995 = browser.currentScene.createNode("fieldValue");
fieldValue995.name = "name";
fieldValue995.value = "r_calcaneus_posterior";
ProtoInstance994.fieldValue = new MFNode();

ProtoInstance994.fieldValue[0] = fieldValue995;

let fieldValue996 = browser.currentScene.createNode("fieldValue");
fieldValue996.name = "translation";
fieldValue996.value = "-0.06920000165700912 0.02969999983906746 -0.12210000306367874";
ProtoInstance994.fieldValue[1] = fieldValue996;

fieldValue984.children[3] = ProtoInstance994;

ProtoInstance982.fieldValue[1] = fieldValue984;

fieldValue961.children[1] = ProtoInstance982;

ProtoInstance957.fieldValue[3] = fieldValue961;

fieldValue956.children = new MFNode();

fieldValue956.children[0] = ProtoInstance957;

let ProtoInstance997 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance997.name = "Segment";
ProtoInstance997.DEF = "hanim_r_calf";
let fieldValue998 = browser.currentScene.createNode("fieldValue");
fieldValue998.name = "name";
fieldValue998.value = "r_calf";
ProtoInstance997.fieldValue = new MFNode();

ProtoInstance997.fieldValue[0] = fieldValue998;

fieldValue956.children[1] = ProtoInstance997;

ProtoInstance952.fieldValue[3] = fieldValue956;

fieldValue951.children = new MFNode();

fieldValue951.children[0] = ProtoInstance952;

let ProtoInstance999 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance999.name = "Segment";
ProtoInstance999.DEF = "hanim_r_thigh";
let fieldValue1000 = browser.currentScene.createNode("fieldValue");
fieldValue1000.name = "name";
fieldValue1000.value = "r_thigh";
ProtoInstance999.fieldValue = new MFNode();

ProtoInstance999.fieldValue[0] = fieldValue1000;

let fieldValue1001 = browser.currentScene.createNode("fieldValue");
fieldValue1001.name = "children";
let ProtoInstance1002 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1002.name = "Site";
ProtoInstance1002.DEF = "hanim_r_knee_crease";
let fieldValue1003 = browser.currentScene.createNode("fieldValue");
fieldValue1003.name = "name";
fieldValue1003.value = "r_knee_crease";
ProtoInstance1002.fieldValue = new MFNode();

ProtoInstance1002.fieldValue[0] = fieldValue1003;

let fieldValue1004 = browser.currentScene.createNode("fieldValue");
fieldValue1004.name = "translation";
fieldValue1004.value = "-0.08250000327825546 0.49320000410079956 -0.032600000500679016";
ProtoInstance1002.fieldValue[1] = fieldValue1004;

fieldValue1001.children = new MFNode();

fieldValue1001.children[0] = ProtoInstance1002;

let ProtoInstance1005 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1005.name = "Site";
ProtoInstance1005.DEF = "hanim_r_femoral_lateral_epicondyles";
let fieldValue1006 = browser.currentScene.createNode("fieldValue");
fieldValue1006.name = "name";
fieldValue1006.value = "r_femoral_lateral_epicondyles";
ProtoInstance1005.fieldValue = new MFNode();

ProtoInstance1005.fieldValue[0] = fieldValue1006;

let fieldValue1007 = browser.currentScene.createNode("fieldValue");
fieldValue1007.name = "translation";
fieldValue1007.value = "-0.1421000063419342 0.4991999864578247 0.03099999949336052";
ProtoInstance1005.fieldValue[1] = fieldValue1007;

fieldValue1001.children[1] = ProtoInstance1005;

let ProtoInstance1008 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1008.name = "Site";
ProtoInstance1008.DEF = "hanim_r_femoral_medial_epicondyles";
let fieldValue1009 = browser.currentScene.createNode("fieldValue");
fieldValue1009.name = "name";
fieldValue1009.value = "r_femoral_lateral_epicondyles";
ProtoInstance1008.fieldValue = new MFNode();

ProtoInstance1008.fieldValue[0] = fieldValue1009;

let fieldValue1010 = browser.currentScene.createNode("fieldValue");
fieldValue1010.name = "translation";
fieldValue1010.value = "-0.022099999710917473 0.5013999938964844 0.02889999933540821";
ProtoInstance1008.fieldValue[1] = fieldValue1010;

fieldValue1001.children[2] = ProtoInstance1008;

ProtoInstance999.fieldValue[1] = fieldValue1001;

fieldValue951.children[1] = ProtoInstance999;

ProtoInstance947.fieldValue[3] = fieldValue951;

fieldValue882.children[1] = ProtoInstance947;

let ProtoInstance1011 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1011.name = "Segment";
ProtoInstance1011.DEF = "hanim_pelvis";
let fieldValue1012 = browser.currentScene.createNode("fieldValue");
fieldValue1012.name = "name";
fieldValue1012.value = "pelvis";
ProtoInstance1011.fieldValue = new MFNode();

ProtoInstance1011.fieldValue[0] = fieldValue1012;

fieldValue882.children[2] = ProtoInstance1011;

ProtoInstance878.fieldValue[3] = fieldValue882;

fieldValue493.children[1] = ProtoInstance878;

let ProtoInstance1013 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1013.name = "Joint";
ProtoInstance1013.DEF = "hanim_l_hip";
let fieldValue1014 = browser.currentScene.createNode("fieldValue");
fieldValue1014.name = "stiffness";
fieldValue1014.value = "1 1 1";
ProtoInstance1013.fieldValue = new MFNode();

ProtoInstance1013.fieldValue[0] = fieldValue1014;

let fieldValue1015 = browser.currentScene.createNode("fieldValue");
fieldValue1015.name = "name";
fieldValue1015.value = "l_hip";
ProtoInstance1013.fieldValue[1] = fieldValue1015;

let fieldValue1016 = browser.currentScene.createNode("fieldValue");
fieldValue1016.name = "center";
fieldValue1016.value = "0.09610000252723694 0.9124000072479248 -0.00009999999747378752";
ProtoInstance1013.fieldValue[2] = fieldValue1016;

let fieldValue1017 = browser.currentScene.createNode("fieldValue");
fieldValue1017.name = "children";
let ProtoInstance1018 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1018.name = "Joint";
ProtoInstance1018.DEF = "hanim_l_knee";
let fieldValue1019 = browser.currentScene.createNode("fieldValue");
fieldValue1019.name = "stiffness";
fieldValue1019.value = "1 1 1";
ProtoInstance1018.fieldValue = new MFNode();

ProtoInstance1018.fieldValue[0] = fieldValue1019;

let fieldValue1020 = browser.currentScene.createNode("fieldValue");
fieldValue1020.name = "name";
fieldValue1020.value = "l_knee";
ProtoInstance1018.fieldValue[1] = fieldValue1020;

let fieldValue1021 = browser.currentScene.createNode("fieldValue");
fieldValue1021.name = "center";
fieldValue1021.value = "0.10400000214576721 0.48669999837875366 0.030799999833106995";
ProtoInstance1018.fieldValue[2] = fieldValue1021;

let fieldValue1022 = browser.currentScene.createNode("fieldValue");
fieldValue1022.name = "children";
let ProtoInstance1023 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1023.name = "Joint";
ProtoInstance1023.DEF = "hanim_l_talocrural";
let fieldValue1024 = browser.currentScene.createNode("fieldValue");
fieldValue1024.name = "stiffness";
fieldValue1024.value = "1 1 1";
ProtoInstance1023.fieldValue = new MFNode();

ProtoInstance1023.fieldValue[0] = fieldValue1024;

let fieldValue1025 = browser.currentScene.createNode("fieldValue");
fieldValue1025.name = "name";
fieldValue1025.value = "l_talocrural";
ProtoInstance1023.fieldValue[1] = fieldValue1025;

let fieldValue1026 = browser.currentScene.createNode("fieldValue");
fieldValue1026.name = "center";
fieldValue1026.value = "0.11010000109672546 0.06560000032186508 -0.07360000163316727";
ProtoInstance1023.fieldValue[2] = fieldValue1026;

let fieldValue1027 = browser.currentScene.createNode("fieldValue");
fieldValue1027.name = "children";
let ProtoInstance1028 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1028.name = "Joint";
ProtoInstance1028.DEF = "hanim_l_metatarsophalangeal_";
let fieldValue1029 = browser.currentScene.createNode("fieldValue");
fieldValue1029.name = "stiffness";
fieldValue1029.value = "1 1 1";
ProtoInstance1028.fieldValue = new MFNode();

ProtoInstance1028.fieldValue[0] = fieldValue1029;

let fieldValue1030 = browser.currentScene.createNode("fieldValue");
fieldValue1030.name = "name";
fieldValue1030.value = "l_metatarsophalangeal_";
ProtoInstance1028.fieldValue[1] = fieldValue1030;

let fieldValue1031 = browser.currentScene.createNode("fieldValue");
fieldValue1031.name = "center";
fieldValue1031.value = "0.10859999805688858 0.00009999999747378752 0.03680000081658363";
ProtoInstance1028.fieldValue[2] = fieldValue1031;

let fieldValue1032 = browser.currentScene.createNode("fieldValue");
fieldValue1032.name = "children";
let ProtoInstance1033 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1033.name = "Segment";
ProtoInstance1033.DEF = "hanim_l_middistal";
let fieldValue1034 = browser.currentScene.createNode("fieldValue");
fieldValue1034.name = "name";
fieldValue1034.value = "l_middistal";
ProtoInstance1033.fieldValue = new MFNode();

ProtoInstance1033.fieldValue[0] = fieldValue1034;

let fieldValue1035 = browser.currentScene.createNode("fieldValue");
fieldValue1035.name = "children";
let ProtoInstance1036 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1036.name = "Site";
ProtoInstance1036.DEF = "hanim_l_middistal_tip";
let fieldValue1037 = browser.currentScene.createNode("fieldValue");
fieldValue1037.name = "name";
fieldValue1037.value = "l_middistal_tip";
ProtoInstance1036.fieldValue = new MFNode();

ProtoInstance1036.fieldValue[0] = fieldValue1037;

let fieldValue1038 = browser.currentScene.createNode("fieldValue");
fieldValue1038.name = "translation";
fieldValue1038.value = "0.13539999723434448 0.0015999999595806003 0.147599995136261";
ProtoInstance1036.fieldValue[1] = fieldValue1038;

fieldValue1035.children = new MFNode();

fieldValue1035.children[0] = ProtoInstance1036;

let ProtoInstance1039 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1039.name = "Site";
ProtoInstance1039.DEF = "hanim_l_tarsal_interphalangeal_phalanx_5";
let fieldValue1040 = browser.currentScene.createNode("fieldValue");
fieldValue1040.name = "name";
fieldValue1040.value = "l_tarsal_interphalangeal_phalanx_5";
ProtoInstance1039.fieldValue = new MFNode();

ProtoInstance1039.fieldValue[0] = fieldValue1040;

let fieldValue1041 = browser.currentScene.createNode("fieldValue");
fieldValue1041.name = "translation";
fieldValue1041.value = "0.18250000476837158 0.007000000216066837 0.09279999881982803";
ProtoInstance1039.fieldValue[1] = fieldValue1041;

fieldValue1035.children[1] = ProtoInstance1039;

let ProtoInstance1042 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1042.name = "Site";
ProtoInstance1042.DEF = "hanim_l_tarsal_interphalangeal_phalanx_1";
let fieldValue1043 = browser.currentScene.createNode("fieldValue");
fieldValue1043.name = "name";
fieldValue1043.value = "l_tarsal_interphalangeal_phalanx_1";
ProtoInstance1042.fieldValue = new MFNode();

ProtoInstance1042.fieldValue[0] = fieldValue1043;

let fieldValue1044 = browser.currentScene.createNode("fieldValue");
fieldValue1044.name = "translation";
fieldValue1044.value = "0.08160000294446945 0.02319999970495701 0.010599999688565731";
ProtoInstance1042.fieldValue[1] = fieldValue1044;

fieldValue1035.children[2] = ProtoInstance1042;

let ProtoInstance1045 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1045.name = "Site";
ProtoInstance1045.DEF = "hanim_l_tarsal_distal_phalanx_2";
let fieldValue1046 = browser.currentScene.createNode("fieldValue");
fieldValue1046.name = "name";
fieldValue1046.value = "l_tarsal_distal_phalanx_2";
ProtoInstance1045.fieldValue = new MFNode();

ProtoInstance1045.fieldValue[0] = fieldValue1046;

let fieldValue1047 = browser.currentScene.createNode("fieldValue");
fieldValue1047.name = "translation";
fieldValue1047.value = "0.11949999630451202 0.007899999618530273 0.14329999685287476";
ProtoInstance1045.fieldValue[1] = fieldValue1047;

fieldValue1035.children[3] = ProtoInstance1045;

ProtoInstance1033.fieldValue[1] = fieldValue1035;

fieldValue1032.children = new MFNode();

fieldValue1032.children[0] = ProtoInstance1033;

ProtoInstance1028.fieldValue[3] = fieldValue1032;

fieldValue1027.children = new MFNode();

fieldValue1027.children[0] = ProtoInstance1028;

let ProtoInstance1048 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1048.name = "Segment";
ProtoInstance1048.DEF = "hanim_l_hindfoot";
let fieldValue1049 = browser.currentScene.createNode("fieldValue");
fieldValue1049.name = "name";
fieldValue1049.value = "l_hindfoot";
ProtoInstance1048.fieldValue = new MFNode();

ProtoInstance1048.fieldValue[0] = fieldValue1049;

let fieldValue1050 = browser.currentScene.createNode("fieldValue");
fieldValue1050.name = "children";
let ProtoInstance1051 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1051.name = "Site";
ProtoInstance1051.DEF = "hanim_l_lateral_malleolus";
let fieldValue1052 = browser.currentScene.createNode("fieldValue");
fieldValue1052.name = "name";
fieldValue1052.value = "l_lateral_malleolus";
ProtoInstance1051.fieldValue = new MFNode();

ProtoInstance1051.fieldValue[0] = fieldValue1052;

let fieldValue1053 = browser.currentScene.createNode("fieldValue");
fieldValue1053.name = "translation";
fieldValue1053.value = "0.13079999387264252 0.059700001031160355 -0.10320000350475311";
ProtoInstance1051.fieldValue[1] = fieldValue1053;

fieldValue1050.children = new MFNode();

fieldValue1050.children[0] = ProtoInstance1051;

let ProtoInstance1054 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1054.name = "Site";
ProtoInstance1054.DEF = "hanim_l_medial_malleolus";
let fieldValue1055 = browser.currentScene.createNode("fieldValue");
fieldValue1055.name = "name";
fieldValue1055.value = "l_medial_malleolus";
ProtoInstance1054.fieldValue = new MFNode();

ProtoInstance1054.fieldValue[0] = fieldValue1055;

let fieldValue1056 = browser.currentScene.createNode("fieldValue");
fieldValue1056.name = "translation";
fieldValue1056.value = "0.08900000154972076 0.07159999758005142 -0.08810000121593475";
ProtoInstance1054.fieldValue[1] = fieldValue1056;

fieldValue1050.children[1] = ProtoInstance1054;

let ProtoInstance1057 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1057.name = "Site";
ProtoInstance1057.DEF = "hanim_l_sphyrion";
let fieldValue1058 = browser.currentScene.createNode("fieldValue");
fieldValue1058.name = "name";
fieldValue1058.value = "l_sphyrion";
ProtoInstance1057.fieldValue = new MFNode();

ProtoInstance1057.fieldValue[0] = fieldValue1058;

let fieldValue1059 = browser.currentScene.createNode("fieldValue");
fieldValue1059.name = "translation";
fieldValue1059.value = "0.08900000154972076 0.057500001043081284 -0.09430000185966492";
ProtoInstance1057.fieldValue[1] = fieldValue1059;

fieldValue1050.children[2] = ProtoInstance1057;

let ProtoInstance1060 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1060.name = "Site";
ProtoInstance1060.DEF = "hanim_l_calcaneus_posterior";
let fieldValue1061 = browser.currentScene.createNode("fieldValue");
fieldValue1061.name = "name";
fieldValue1061.value = "l_calcaneus_posterior";
ProtoInstance1060.fieldValue = new MFNode();

ProtoInstance1060.fieldValue[0] = fieldValue1061;

let fieldValue1062 = browser.currentScene.createNode("fieldValue");
fieldValue1062.name = "translation";
fieldValue1062.value = "0.09740000218153 0.02590000070631504 -0.11710000038146973";
ProtoInstance1060.fieldValue[1] = fieldValue1062;

fieldValue1050.children[3] = ProtoInstance1060;

ProtoInstance1048.fieldValue[1] = fieldValue1050;

fieldValue1027.children[1] = ProtoInstance1048;

ProtoInstance1023.fieldValue[3] = fieldValue1027;

fieldValue1022.children = new MFNode();

fieldValue1022.children[0] = ProtoInstance1023;

let ProtoInstance1063 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1063.name = "Segment";
ProtoInstance1063.DEF = "hanim_l_calf";
let fieldValue1064 = browser.currentScene.createNode("fieldValue");
fieldValue1064.name = "name";
fieldValue1064.value = "l_calf";
ProtoInstance1063.fieldValue = new MFNode();

ProtoInstance1063.fieldValue[0] = fieldValue1064;

fieldValue1022.children[1] = ProtoInstance1063;

ProtoInstance1018.fieldValue[3] = fieldValue1022;

fieldValue1017.children = new MFNode();

fieldValue1017.children[0] = ProtoInstance1018;

let ProtoInstance1065 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1065.name = "Segment";
ProtoInstance1065.DEF = "hanim_l_thigh";
let fieldValue1066 = browser.currentScene.createNode("fieldValue");
fieldValue1066.name = "name";
fieldValue1066.value = "l_thigh";
ProtoInstance1065.fieldValue = new MFNode();

ProtoInstance1065.fieldValue[0] = fieldValue1066;

let fieldValue1067 = browser.currentScene.createNode("fieldValue");
fieldValue1067.name = "children";
let ProtoInstance1068 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1068.name = "Site";
ProtoInstance1068.DEF = "hanim_l_knee_crease";
let fieldValue1069 = browser.currentScene.createNode("fieldValue");
fieldValue1069.name = "name";
fieldValue1069.value = "l_knee_crease";
ProtoInstance1068.fieldValue = new MFNode();

ProtoInstance1068.fieldValue[0] = fieldValue1069;

let fieldValue1070 = browser.currentScene.createNode("fieldValue");
fieldValue1070.name = "translation";
fieldValue1070.value = "0.09929999709129333 0.48809999227523804 -0.030899999663233757";
ProtoInstance1068.fieldValue[1] = fieldValue1070;

fieldValue1067.children = new MFNode();

fieldValue1067.children[0] = ProtoInstance1068;

let ProtoInstance1071 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1071.name = "Site";
ProtoInstance1071.DEF = "hanim_l_femoral_lateral_epicondyles";
let fieldValue1072 = browser.currentScene.createNode("fieldValue");
fieldValue1072.name = "name";
fieldValue1072.value = "l_femoral_lateral_epicondyles";
ProtoInstance1071.fieldValue = new MFNode();

ProtoInstance1071.fieldValue[0] = fieldValue1072;

let fieldValue1073 = browser.currentScene.createNode("fieldValue");
fieldValue1073.name = "translation";
fieldValue1073.value = "0.1597999930381775 0.4966999888420105 0.02969999983906746";
ProtoInstance1071.fieldValue[1] = fieldValue1073;

fieldValue1067.children[1] = ProtoInstance1071;

let ProtoInstance1074 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1074.name = "Site";
ProtoInstance1074.DEF = "hanim_l_femoral_medial_epicondyles";
let fieldValue1075 = browser.currentScene.createNode("fieldValue");
fieldValue1075.name = "name";
fieldValue1075.value = "l_femoral_lateral_epicondyles";
ProtoInstance1074.fieldValue = new MFNode();

ProtoInstance1074.fieldValue[0] = fieldValue1075;

let fieldValue1076 = browser.currentScene.createNode("fieldValue");
fieldValue1076.name = "translation";
fieldValue1076.value = "0.039799999445676804 0.49459999799728394 0.030300000682473183";
ProtoInstance1074.fieldValue[1] = fieldValue1076;

fieldValue1067.children[2] = ProtoInstance1074;

ProtoInstance1065.fieldValue[1] = fieldValue1067;

fieldValue1017.children[1] = ProtoInstance1065;

ProtoInstance1013.fieldValue[3] = fieldValue1017;

fieldValue493.children[2] = ProtoInstance1013;

let ProtoInstance1077 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1077.name = "Joint";
ProtoInstance1077.DEF = "hanim_l_knee";
let fieldValue1078 = browser.currentScene.createNode("fieldValue");
fieldValue1078.name = "stiffness";
fieldValue1078.value = "1 1 1";
ProtoInstance1077.fieldValue = new MFNode();

ProtoInstance1077.fieldValue[0] = fieldValue1078;

let fieldValue1079 = browser.currentScene.createNode("fieldValue");
fieldValue1079.name = "name";
fieldValue1079.value = "l_knee";
ProtoInstance1077.fieldValue[1] = fieldValue1079;

let fieldValue1080 = browser.currentScene.createNode("fieldValue");
fieldValue1080.name = "center";
fieldValue1080.value = "0.10400000214576721 0.48669999837875366 0.030799999833106995";
ProtoInstance1077.fieldValue[2] = fieldValue1080;

let fieldValue1081 = browser.currentScene.createNode("fieldValue");
fieldValue1081.name = "children";
let ProtoInstance1082 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1082.name = "Joint";
ProtoInstance1082.DEF = "hanim_l_talocrural";
let fieldValue1083 = browser.currentScene.createNode("fieldValue");
fieldValue1083.name = "stiffness";
fieldValue1083.value = "1 1 1";
ProtoInstance1082.fieldValue = new MFNode();

ProtoInstance1082.fieldValue[0] = fieldValue1083;

let fieldValue1084 = browser.currentScene.createNode("fieldValue");
fieldValue1084.name = "name";
fieldValue1084.value = "l_talocrural";
ProtoInstance1082.fieldValue[1] = fieldValue1084;

let fieldValue1085 = browser.currentScene.createNode("fieldValue");
fieldValue1085.name = "center";
fieldValue1085.value = "0.11010000109672546 0.06560000032186508 -0.07360000163316727";
ProtoInstance1082.fieldValue[2] = fieldValue1085;

let fieldValue1086 = browser.currentScene.createNode("fieldValue");
fieldValue1086.name = "children";
let ProtoInstance1087 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1087.name = "Joint";
ProtoInstance1087.DEF = "hanim_l_metatarsophalangeal_";
let fieldValue1088 = browser.currentScene.createNode("fieldValue");
fieldValue1088.name = "stiffness";
fieldValue1088.value = "1 1 1";
ProtoInstance1087.fieldValue = new MFNode();

ProtoInstance1087.fieldValue[0] = fieldValue1088;

let fieldValue1089 = browser.currentScene.createNode("fieldValue");
fieldValue1089.name = "name";
fieldValue1089.value = "l_metatarsophalangeal_";
ProtoInstance1087.fieldValue[1] = fieldValue1089;

let fieldValue1090 = browser.currentScene.createNode("fieldValue");
fieldValue1090.name = "center";
fieldValue1090.value = "0.10859999805688858 0.00009999999747378752 0.03680000081658363";
ProtoInstance1087.fieldValue[2] = fieldValue1090;

let fieldValue1091 = browser.currentScene.createNode("fieldValue");
fieldValue1091.name = "children";
let ProtoInstance1092 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1092.name = "Segment";
ProtoInstance1092.DEF = "hanim_l_middistal";
let fieldValue1093 = browser.currentScene.createNode("fieldValue");
fieldValue1093.name = "name";
fieldValue1093.value = "l_middistal";
ProtoInstance1092.fieldValue = new MFNode();

ProtoInstance1092.fieldValue[0] = fieldValue1093;

let fieldValue1094 = browser.currentScene.createNode("fieldValue");
fieldValue1094.name = "children";
let ProtoInstance1095 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1095.name = "Site";
ProtoInstance1095.DEF = "hanim_l_middistal_tip";
let fieldValue1096 = browser.currentScene.createNode("fieldValue");
fieldValue1096.name = "name";
fieldValue1096.value = "l_middistal_tip";
ProtoInstance1095.fieldValue = new MFNode();

ProtoInstance1095.fieldValue[0] = fieldValue1096;

let fieldValue1097 = browser.currentScene.createNode("fieldValue");
fieldValue1097.name = "translation";
fieldValue1097.value = "0.13539999723434448 0.0015999999595806003 0.147599995136261";
ProtoInstance1095.fieldValue[1] = fieldValue1097;

fieldValue1094.children = new MFNode();

fieldValue1094.children[0] = ProtoInstance1095;

let ProtoInstance1098 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1098.name = "Site";
ProtoInstance1098.DEF = "hanim_l_tarsal_interphalangeal_phalanx_5";
let fieldValue1099 = browser.currentScene.createNode("fieldValue");
fieldValue1099.name = "name";
fieldValue1099.value = "l_tarsal_interphalangeal_phalanx_5";
ProtoInstance1098.fieldValue = new MFNode();

ProtoInstance1098.fieldValue[0] = fieldValue1099;

let fieldValue1100 = browser.currentScene.createNode("fieldValue");
fieldValue1100.name = "translation";
fieldValue1100.value = "0.18250000476837158 0.007000000216066837 0.09279999881982803";
ProtoInstance1098.fieldValue[1] = fieldValue1100;

fieldValue1094.children[1] = ProtoInstance1098;

let ProtoInstance1101 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1101.name = "Site";
ProtoInstance1101.DEF = "hanim_l_tarsal_interphalangeal_phalanx_1";
let fieldValue1102 = browser.currentScene.createNode("fieldValue");
fieldValue1102.name = "name";
fieldValue1102.value = "l_tarsal_interphalangeal_phalanx_1";
ProtoInstance1101.fieldValue = new MFNode();

ProtoInstance1101.fieldValue[0] = fieldValue1102;

let fieldValue1103 = browser.currentScene.createNode("fieldValue");
fieldValue1103.name = "translation";
fieldValue1103.value = "0.08160000294446945 0.02319999970495701 0.010599999688565731";
ProtoInstance1101.fieldValue[1] = fieldValue1103;

fieldValue1094.children[2] = ProtoInstance1101;

let ProtoInstance1104 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1104.name = "Site";
ProtoInstance1104.DEF = "hanim_l_tarsal_distal_phalanx_2";
let fieldValue1105 = browser.currentScene.createNode("fieldValue");
fieldValue1105.name = "name";
fieldValue1105.value = "l_tarsal_distal_phalanx_2";
ProtoInstance1104.fieldValue = new MFNode();

ProtoInstance1104.fieldValue[0] = fieldValue1105;

let fieldValue1106 = browser.currentScene.createNode("fieldValue");
fieldValue1106.name = "translation";
fieldValue1106.value = "0.11949999630451202 0.007899999618530273 0.14329999685287476";
ProtoInstance1104.fieldValue[1] = fieldValue1106;

fieldValue1094.children[3] = ProtoInstance1104;

ProtoInstance1092.fieldValue[1] = fieldValue1094;

fieldValue1091.children = new MFNode();

fieldValue1091.children[0] = ProtoInstance1092;

ProtoInstance1087.fieldValue[3] = fieldValue1091;

fieldValue1086.children = new MFNode();

fieldValue1086.children[0] = ProtoInstance1087;

let ProtoInstance1107 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1107.name = "Segment";
ProtoInstance1107.DEF = "hanim_l_hindfoot";
let fieldValue1108 = browser.currentScene.createNode("fieldValue");
fieldValue1108.name = "name";
fieldValue1108.value = "l_hindfoot";
ProtoInstance1107.fieldValue = new MFNode();

ProtoInstance1107.fieldValue[0] = fieldValue1108;

let fieldValue1109 = browser.currentScene.createNode("fieldValue");
fieldValue1109.name = "children";
let ProtoInstance1110 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1110.name = "Site";
ProtoInstance1110.DEF = "hanim_l_lateral_malleolus";
let fieldValue1111 = browser.currentScene.createNode("fieldValue");
fieldValue1111.name = "name";
fieldValue1111.value = "l_lateral_malleolus";
ProtoInstance1110.fieldValue = new MFNode();

ProtoInstance1110.fieldValue[0] = fieldValue1111;

let fieldValue1112 = browser.currentScene.createNode("fieldValue");
fieldValue1112.name = "translation";
fieldValue1112.value = "0.13079999387264252 0.059700001031160355 -0.10320000350475311";
ProtoInstance1110.fieldValue[1] = fieldValue1112;

fieldValue1109.children = new MFNode();

fieldValue1109.children[0] = ProtoInstance1110;

let ProtoInstance1113 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1113.name = "Site";
ProtoInstance1113.DEF = "hanim_l_medial_malleolus";
let fieldValue1114 = browser.currentScene.createNode("fieldValue");
fieldValue1114.name = "name";
fieldValue1114.value = "l_medial_malleolus";
ProtoInstance1113.fieldValue = new MFNode();

ProtoInstance1113.fieldValue[0] = fieldValue1114;

let fieldValue1115 = browser.currentScene.createNode("fieldValue");
fieldValue1115.name = "translation";
fieldValue1115.value = "0.08900000154972076 0.07159999758005142 -0.08810000121593475";
ProtoInstance1113.fieldValue[1] = fieldValue1115;

fieldValue1109.children[1] = ProtoInstance1113;

let ProtoInstance1116 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1116.name = "Site";
ProtoInstance1116.DEF = "hanim_l_sphyrion";
let fieldValue1117 = browser.currentScene.createNode("fieldValue");
fieldValue1117.name = "name";
fieldValue1117.value = "l_sphyrion";
ProtoInstance1116.fieldValue = new MFNode();

ProtoInstance1116.fieldValue[0] = fieldValue1117;

let fieldValue1118 = browser.currentScene.createNode("fieldValue");
fieldValue1118.name = "translation";
fieldValue1118.value = "0.08900000154972076 0.057500001043081284 -0.09430000185966492";
ProtoInstance1116.fieldValue[1] = fieldValue1118;

fieldValue1109.children[2] = ProtoInstance1116;

let ProtoInstance1119 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1119.name = "Site";
ProtoInstance1119.DEF = "hanim_l_calcaneus_posterior";
let fieldValue1120 = browser.currentScene.createNode("fieldValue");
fieldValue1120.name = "name";
fieldValue1120.value = "l_calcaneus_posterior";
ProtoInstance1119.fieldValue = new MFNode();

ProtoInstance1119.fieldValue[0] = fieldValue1120;

let fieldValue1121 = browser.currentScene.createNode("fieldValue");
fieldValue1121.name = "translation";
fieldValue1121.value = "0.09740000218153 0.02590000070631504 -0.11710000038146973";
ProtoInstance1119.fieldValue[1] = fieldValue1121;

fieldValue1109.children[3] = ProtoInstance1119;

ProtoInstance1107.fieldValue[1] = fieldValue1109;

fieldValue1086.children[1] = ProtoInstance1107;

ProtoInstance1082.fieldValue[3] = fieldValue1086;

fieldValue1081.children = new MFNode();

fieldValue1081.children[0] = ProtoInstance1082;

let ProtoInstance1122 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1122.name = "Segment";
ProtoInstance1122.DEF = "hanim_l_calf";
let fieldValue1123 = browser.currentScene.createNode("fieldValue");
fieldValue1123.name = "name";
fieldValue1123.value = "l_calf";
ProtoInstance1122.fieldValue = new MFNode();

ProtoInstance1122.fieldValue[0] = fieldValue1123;

fieldValue1081.children[1] = ProtoInstance1122;

ProtoInstance1077.fieldValue[3] = fieldValue1081;

fieldValue493.children[3] = ProtoInstance1077;

let ProtoInstance1124 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1124.name = "Joint";
ProtoInstance1124.DEF = "hanim_l_talocrural";
let fieldValue1125 = browser.currentScene.createNode("fieldValue");
fieldValue1125.name = "stiffness";
fieldValue1125.value = "1 1 1";
ProtoInstance1124.fieldValue = new MFNode();

ProtoInstance1124.fieldValue[0] = fieldValue1125;

let fieldValue1126 = browser.currentScene.createNode("fieldValue");
fieldValue1126.name = "name";
fieldValue1126.value = "l_talocrural";
ProtoInstance1124.fieldValue[1] = fieldValue1126;

let fieldValue1127 = browser.currentScene.createNode("fieldValue");
fieldValue1127.name = "center";
fieldValue1127.value = "0.11010000109672546 0.06560000032186508 -0.07360000163316727";
ProtoInstance1124.fieldValue[2] = fieldValue1127;

let fieldValue1128 = browser.currentScene.createNode("fieldValue");
fieldValue1128.name = "children";
let ProtoInstance1129 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1129.name = "Joint";
ProtoInstance1129.DEF = "hanim_l_metatarsophalangeal_";
let fieldValue1130 = browser.currentScene.createNode("fieldValue");
fieldValue1130.name = "stiffness";
fieldValue1130.value = "1 1 1";
ProtoInstance1129.fieldValue = new MFNode();

ProtoInstance1129.fieldValue[0] = fieldValue1130;

let fieldValue1131 = browser.currentScene.createNode("fieldValue");
fieldValue1131.name = "name";
fieldValue1131.value = "l_metatarsophalangeal_";
ProtoInstance1129.fieldValue[1] = fieldValue1131;

let fieldValue1132 = browser.currentScene.createNode("fieldValue");
fieldValue1132.name = "center";
fieldValue1132.value = "0.10859999805688858 0.00009999999747378752 0.03680000081658363";
ProtoInstance1129.fieldValue[2] = fieldValue1132;

let fieldValue1133 = browser.currentScene.createNode("fieldValue");
fieldValue1133.name = "children";
let ProtoInstance1134 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1134.name = "Segment";
ProtoInstance1134.DEF = "hanim_l_middistal";
let fieldValue1135 = browser.currentScene.createNode("fieldValue");
fieldValue1135.name = "name";
fieldValue1135.value = "l_middistal";
ProtoInstance1134.fieldValue = new MFNode();

ProtoInstance1134.fieldValue[0] = fieldValue1135;

let fieldValue1136 = browser.currentScene.createNode("fieldValue");
fieldValue1136.name = "children";
let ProtoInstance1137 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1137.name = "Site";
ProtoInstance1137.DEF = "hanim_l_middistal_tip";
let fieldValue1138 = browser.currentScene.createNode("fieldValue");
fieldValue1138.name = "name";
fieldValue1138.value = "l_middistal_tip";
ProtoInstance1137.fieldValue = new MFNode();

ProtoInstance1137.fieldValue[0] = fieldValue1138;

let fieldValue1139 = browser.currentScene.createNode("fieldValue");
fieldValue1139.name = "translation";
fieldValue1139.value = "0.13539999723434448 0.0015999999595806003 0.147599995136261";
ProtoInstance1137.fieldValue[1] = fieldValue1139;

fieldValue1136.children = new MFNode();

fieldValue1136.children[0] = ProtoInstance1137;

let ProtoInstance1140 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1140.name = "Site";
ProtoInstance1140.DEF = "hanim_l_tarsal_interphalangeal_phalanx_5";
let fieldValue1141 = browser.currentScene.createNode("fieldValue");
fieldValue1141.name = "name";
fieldValue1141.value = "l_tarsal_interphalangeal_phalanx_5";
ProtoInstance1140.fieldValue = new MFNode();

ProtoInstance1140.fieldValue[0] = fieldValue1141;

let fieldValue1142 = browser.currentScene.createNode("fieldValue");
fieldValue1142.name = "translation";
fieldValue1142.value = "0.18250000476837158 0.007000000216066837 0.09279999881982803";
ProtoInstance1140.fieldValue[1] = fieldValue1142;

fieldValue1136.children[1] = ProtoInstance1140;

let ProtoInstance1143 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1143.name = "Site";
ProtoInstance1143.DEF = "hanim_l_tarsal_interphalangeal_phalanx_1";
let fieldValue1144 = browser.currentScene.createNode("fieldValue");
fieldValue1144.name = "name";
fieldValue1144.value = "l_tarsal_interphalangeal_phalanx_1";
ProtoInstance1143.fieldValue = new MFNode();

ProtoInstance1143.fieldValue[0] = fieldValue1144;

let fieldValue1145 = browser.currentScene.createNode("fieldValue");
fieldValue1145.name = "translation";
fieldValue1145.value = "0.08160000294446945 0.02319999970495701 0.010599999688565731";
ProtoInstance1143.fieldValue[1] = fieldValue1145;

fieldValue1136.children[2] = ProtoInstance1143;

let ProtoInstance1146 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1146.name = "Site";
ProtoInstance1146.DEF = "hanim_l_tarsal_distal_phalanx_2";
let fieldValue1147 = browser.currentScene.createNode("fieldValue");
fieldValue1147.name = "name";
fieldValue1147.value = "l_tarsal_distal_phalanx_2";
ProtoInstance1146.fieldValue = new MFNode();

ProtoInstance1146.fieldValue[0] = fieldValue1147;

let fieldValue1148 = browser.currentScene.createNode("fieldValue");
fieldValue1148.name = "translation";
fieldValue1148.value = "0.11949999630451202 0.007899999618530273 0.14329999685287476";
ProtoInstance1146.fieldValue[1] = fieldValue1148;

fieldValue1136.children[3] = ProtoInstance1146;

ProtoInstance1134.fieldValue[1] = fieldValue1136;

fieldValue1133.children = new MFNode();

fieldValue1133.children[0] = ProtoInstance1134;

ProtoInstance1129.fieldValue[3] = fieldValue1133;

fieldValue1128.children = new MFNode();

fieldValue1128.children[0] = ProtoInstance1129;

let ProtoInstance1149 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1149.name = "Segment";
ProtoInstance1149.DEF = "hanim_l_hindfoot";
let fieldValue1150 = browser.currentScene.createNode("fieldValue");
fieldValue1150.name = "name";
fieldValue1150.value = "l_hindfoot";
ProtoInstance1149.fieldValue = new MFNode();

ProtoInstance1149.fieldValue[0] = fieldValue1150;

let fieldValue1151 = browser.currentScene.createNode("fieldValue");
fieldValue1151.name = "children";
let ProtoInstance1152 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1152.name = "Site";
ProtoInstance1152.DEF = "hanim_l_lateral_malleolus";
let fieldValue1153 = browser.currentScene.createNode("fieldValue");
fieldValue1153.name = "name";
fieldValue1153.value = "l_lateral_malleolus";
ProtoInstance1152.fieldValue = new MFNode();

ProtoInstance1152.fieldValue[0] = fieldValue1153;

let fieldValue1154 = browser.currentScene.createNode("fieldValue");
fieldValue1154.name = "translation";
fieldValue1154.value = "0.13079999387264252 0.059700001031160355 -0.10320000350475311";
ProtoInstance1152.fieldValue[1] = fieldValue1154;

fieldValue1151.children = new MFNode();

fieldValue1151.children[0] = ProtoInstance1152;

let ProtoInstance1155 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1155.name = "Site";
ProtoInstance1155.DEF = "hanim_l_medial_malleolus";
let fieldValue1156 = browser.currentScene.createNode("fieldValue");
fieldValue1156.name = "name";
fieldValue1156.value = "l_medial_malleolus";
ProtoInstance1155.fieldValue = new MFNode();

ProtoInstance1155.fieldValue[0] = fieldValue1156;

let fieldValue1157 = browser.currentScene.createNode("fieldValue");
fieldValue1157.name = "translation";
fieldValue1157.value = "0.08900000154972076 0.07159999758005142 -0.08810000121593475";
ProtoInstance1155.fieldValue[1] = fieldValue1157;

fieldValue1151.children[1] = ProtoInstance1155;

let ProtoInstance1158 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1158.name = "Site";
ProtoInstance1158.DEF = "hanim_l_sphyrion";
let fieldValue1159 = browser.currentScene.createNode("fieldValue");
fieldValue1159.name = "name";
fieldValue1159.value = "l_sphyrion";
ProtoInstance1158.fieldValue = new MFNode();

ProtoInstance1158.fieldValue[0] = fieldValue1159;

let fieldValue1160 = browser.currentScene.createNode("fieldValue");
fieldValue1160.name = "translation";
fieldValue1160.value = "0.08900000154972076 0.057500001043081284 -0.09430000185966492";
ProtoInstance1158.fieldValue[1] = fieldValue1160;

fieldValue1151.children[2] = ProtoInstance1158;

let ProtoInstance1161 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1161.name = "Site";
ProtoInstance1161.DEF = "hanim_l_calcaneus_posterior";
let fieldValue1162 = browser.currentScene.createNode("fieldValue");
fieldValue1162.name = "name";
fieldValue1162.value = "l_calcaneus_posterior";
ProtoInstance1161.fieldValue = new MFNode();

ProtoInstance1161.fieldValue[0] = fieldValue1162;

let fieldValue1163 = browser.currentScene.createNode("fieldValue");
fieldValue1163.name = "translation";
fieldValue1163.value = "0.09740000218153 0.02590000070631504 -0.11710000038146973";
ProtoInstance1161.fieldValue[1] = fieldValue1163;

fieldValue1151.children[3] = ProtoInstance1161;

ProtoInstance1149.fieldValue[1] = fieldValue1151;

fieldValue1128.children[1] = ProtoInstance1149;

ProtoInstance1124.fieldValue[3] = fieldValue1128;

fieldValue493.children[4] = ProtoInstance1124;

let ProtoInstance1164 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1164.name = "Joint";
ProtoInstance1164.DEF = "hanim_l_metatarsophalangeal_";
let fieldValue1165 = browser.currentScene.createNode("fieldValue");
fieldValue1165.name = "stiffness";
fieldValue1165.value = "1 1 1";
ProtoInstance1164.fieldValue = new MFNode();

ProtoInstance1164.fieldValue[0] = fieldValue1165;

let fieldValue1166 = browser.currentScene.createNode("fieldValue");
fieldValue1166.name = "name";
fieldValue1166.value = "l_metatarsophalangeal_";
ProtoInstance1164.fieldValue[1] = fieldValue1166;

let fieldValue1167 = browser.currentScene.createNode("fieldValue");
fieldValue1167.name = "center";
fieldValue1167.value = "0.10859999805688858 0.00009999999747378752 0.03680000081658363";
ProtoInstance1164.fieldValue[2] = fieldValue1167;

let fieldValue1168 = browser.currentScene.createNode("fieldValue");
fieldValue1168.name = "children";
let ProtoInstance1169 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1169.name = "Segment";
ProtoInstance1169.DEF = "hanim_l_middistal";
let fieldValue1170 = browser.currentScene.createNode("fieldValue");
fieldValue1170.name = "name";
fieldValue1170.value = "l_middistal";
ProtoInstance1169.fieldValue = new MFNode();

ProtoInstance1169.fieldValue[0] = fieldValue1170;

let fieldValue1171 = browser.currentScene.createNode("fieldValue");
fieldValue1171.name = "children";
let ProtoInstance1172 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1172.name = "Site";
ProtoInstance1172.DEF = "hanim_l_middistal_tip";
let fieldValue1173 = browser.currentScene.createNode("fieldValue");
fieldValue1173.name = "name";
fieldValue1173.value = "l_middistal_tip";
ProtoInstance1172.fieldValue = new MFNode();

ProtoInstance1172.fieldValue[0] = fieldValue1173;

let fieldValue1174 = browser.currentScene.createNode("fieldValue");
fieldValue1174.name = "translation";
fieldValue1174.value = "0.13539999723434448 0.0015999999595806003 0.147599995136261";
ProtoInstance1172.fieldValue[1] = fieldValue1174;

fieldValue1171.children = new MFNode();

fieldValue1171.children[0] = ProtoInstance1172;

let ProtoInstance1175 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1175.name = "Site";
ProtoInstance1175.DEF = "hanim_l_tarsal_interphalangeal_phalanx_5";
let fieldValue1176 = browser.currentScene.createNode("fieldValue");
fieldValue1176.name = "name";
fieldValue1176.value = "l_tarsal_interphalangeal_phalanx_5";
ProtoInstance1175.fieldValue = new MFNode();

ProtoInstance1175.fieldValue[0] = fieldValue1176;

let fieldValue1177 = browser.currentScene.createNode("fieldValue");
fieldValue1177.name = "translation";
fieldValue1177.value = "0.18250000476837158 0.007000000216066837 0.09279999881982803";
ProtoInstance1175.fieldValue[1] = fieldValue1177;

fieldValue1171.children[1] = ProtoInstance1175;

let ProtoInstance1178 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1178.name = "Site";
ProtoInstance1178.DEF = "hanim_l_tarsal_interphalangeal_phalanx_1";
let fieldValue1179 = browser.currentScene.createNode("fieldValue");
fieldValue1179.name = "name";
fieldValue1179.value = "l_tarsal_interphalangeal_phalanx_1";
ProtoInstance1178.fieldValue = new MFNode();

ProtoInstance1178.fieldValue[0] = fieldValue1179;

let fieldValue1180 = browser.currentScene.createNode("fieldValue");
fieldValue1180.name = "translation";
fieldValue1180.value = "0.08160000294446945 0.02319999970495701 0.010599999688565731";
ProtoInstance1178.fieldValue[1] = fieldValue1180;

fieldValue1171.children[2] = ProtoInstance1178;

let ProtoInstance1181 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1181.name = "Site";
ProtoInstance1181.DEF = "hanim_l_tarsal_distal_phalanx_2";
let fieldValue1182 = browser.currentScene.createNode("fieldValue");
fieldValue1182.name = "name";
fieldValue1182.value = "l_tarsal_distal_phalanx_2";
ProtoInstance1181.fieldValue = new MFNode();

ProtoInstance1181.fieldValue[0] = fieldValue1182;

let fieldValue1183 = browser.currentScene.createNode("fieldValue");
fieldValue1183.name = "translation";
fieldValue1183.value = "0.11949999630451202 0.007899999618530273 0.14329999685287476";
ProtoInstance1181.fieldValue[1] = fieldValue1183;

fieldValue1171.children[3] = ProtoInstance1181;

ProtoInstance1169.fieldValue[1] = fieldValue1171;

fieldValue1168.children = new MFNode();

fieldValue1168.children[0] = ProtoInstance1169;

ProtoInstance1164.fieldValue[3] = fieldValue1168;

fieldValue493.children[5] = ProtoInstance1164;

let ProtoInstance1184 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1184.name = "Joint";
ProtoInstance1184.DEF = "hanim_r_hip";
let fieldValue1185 = browser.currentScene.createNode("fieldValue");
fieldValue1185.name = "stiffness";
fieldValue1185.value = "1 1 1";
ProtoInstance1184.fieldValue = new MFNode();

ProtoInstance1184.fieldValue[0] = fieldValue1185;

let fieldValue1186 = browser.currentScene.createNode("fieldValue");
fieldValue1186.name = "name";
fieldValue1186.value = "r_hip";
ProtoInstance1184.fieldValue[1] = fieldValue1186;

let fieldValue1187 = browser.currentScene.createNode("fieldValue");
fieldValue1187.name = "center";
fieldValue1187.value = "-0.0949999988079071 0.9171000123023987 0.002899999963119626";
ProtoInstance1184.fieldValue[2] = fieldValue1187;

let fieldValue1188 = browser.currentScene.createNode("fieldValue");
fieldValue1188.name = "children";
let ProtoInstance1189 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1189.name = "Joint";
ProtoInstance1189.DEF = "hanim_r_knee";
let fieldValue1190 = browser.currentScene.createNode("fieldValue");
fieldValue1190.name = "stiffness";
fieldValue1190.value = "1 1 1";
ProtoInstance1189.fieldValue = new MFNode();

ProtoInstance1189.fieldValue[0] = fieldValue1190;

let fieldValue1191 = browser.currentScene.createNode("fieldValue");
fieldValue1191.name = "name";
fieldValue1191.value = "r_knee";
ProtoInstance1189.fieldValue[1] = fieldValue1191;

let fieldValue1192 = browser.currentScene.createNode("fieldValue");
fieldValue1192.name = "center";
fieldValue1192.value = "-0.08669999986886978 0.49129998683929443 0.03180000185966492";
ProtoInstance1189.fieldValue[2] = fieldValue1192;

let fieldValue1193 = browser.currentScene.createNode("fieldValue");
fieldValue1193.name = "children";
let ProtoInstance1194 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1194.name = "Joint";
ProtoInstance1194.DEF = "hanim_r_talocrural";
let fieldValue1195 = browser.currentScene.createNode("fieldValue");
fieldValue1195.name = "stiffness";
fieldValue1195.value = "1 1 1";
ProtoInstance1194.fieldValue = new MFNode();

ProtoInstance1194.fieldValue[0] = fieldValue1195;

let fieldValue1196 = browser.currentScene.createNode("fieldValue");
fieldValue1196.name = "name";
fieldValue1196.value = "r_talocrural";
ProtoInstance1194.fieldValue[1] = fieldValue1196;

let fieldValue1197 = browser.currentScene.createNode("fieldValue");
fieldValue1197.name = "center";
fieldValue1197.value = "-0.08009999990463257 0.07119999825954437 -0.07660000026226044";
ProtoInstance1194.fieldValue[2] = fieldValue1197;

let fieldValue1198 = browser.currentScene.createNode("fieldValue");
fieldValue1198.name = "children";
let ProtoInstance1199 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1199.name = "Joint";
ProtoInstance1199.DEF = "hanim_r_metatarsophalangeal_";
let fieldValue1200 = browser.currentScene.createNode("fieldValue");
fieldValue1200.name = "stiffness";
fieldValue1200.value = "1 1 1";
ProtoInstance1199.fieldValue = new MFNode();

ProtoInstance1199.fieldValue[0] = fieldValue1200;

let fieldValue1201 = browser.currentScene.createNode("fieldValue");
fieldValue1201.name = "name";
fieldValue1201.value = "r_metatarsophalangeal_";
ProtoInstance1199.fieldValue[1] = fieldValue1201;

let fieldValue1202 = browser.currentScene.createNode("fieldValue");
fieldValue1202.name = "center";
fieldValue1202.value = "-0.08009999990463257 0 0.03680000081658363";
ProtoInstance1199.fieldValue[2] = fieldValue1202;

let fieldValue1203 = browser.currentScene.createNode("fieldValue");
fieldValue1203.name = "children";
let ProtoInstance1204 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1204.name = "Segment";
ProtoInstance1204.DEF = "hanim_r_middistal";
let fieldValue1205 = browser.currentScene.createNode("fieldValue");
fieldValue1205.name = "name";
fieldValue1205.value = "r_middistal";
ProtoInstance1204.fieldValue = new MFNode();

ProtoInstance1204.fieldValue[0] = fieldValue1205;

let fieldValue1206 = browser.currentScene.createNode("fieldValue");
fieldValue1206.name = "children";
let ProtoInstance1207 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1207.name = "Site";
ProtoInstance1207.DEF = "hanim_r_middistal_tip";
let fieldValue1208 = browser.currentScene.createNode("fieldValue");
fieldValue1208.name = "name";
fieldValue1208.value = "r_middistal_tip";
ProtoInstance1207.fieldValue = new MFNode();

ProtoInstance1207.fieldValue[0] = fieldValue1208;

let fieldValue1209 = browser.currentScene.createNode("fieldValue");
fieldValue1209.name = "translation";
fieldValue1209.value = "-0.10429999977350235 -0.022700000554323196 0.14499999582767487";
ProtoInstance1207.fieldValue[1] = fieldValue1209;

fieldValue1206.children = new MFNode();

fieldValue1206.children[0] = ProtoInstance1207;

let ProtoInstance1210 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1210.name = "Site";
ProtoInstance1210.DEF = "hanim_r_tarsal_interphalangeal_phalanx_5";
let fieldValue1211 = browser.currentScene.createNode("fieldValue");
fieldValue1211.name = "name";
fieldValue1211.value = "r_tarsal_interphalangeal_phalanx_5";
ProtoInstance1210.fieldValue = new MFNode();

ProtoInstance1210.fieldValue[0] = fieldValue1211;

let fieldValue1212 = browser.currentScene.createNode("fieldValue");
fieldValue1212.name = "translation";
fieldValue1212.value = "-0.15230000019073486 0.016599999740719795 0.08950000256299973";
ProtoInstance1210.fieldValue[1] = fieldValue1212;

fieldValue1206.children[1] = ProtoInstance1210;

let ProtoInstance1213 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1213.name = "Site";
ProtoInstance1213.DEF = "hanim_r_tarsal_interphalangeal_phalanx_1";
let fieldValue1214 = browser.currentScene.createNode("fieldValue");
fieldValue1214.name = "name";
fieldValue1214.value = "r_tarsal_interphalangeal_phalanx_1";
ProtoInstance1213.fieldValue = new MFNode();

ProtoInstance1213.fieldValue[0] = fieldValue1214;

let fieldValue1215 = browser.currentScene.createNode("fieldValue");
fieldValue1215.name = "translation";
fieldValue1215.value = "-0.05209999904036522 0.026000000536441803 0.01269999984651804";
ProtoInstance1213.fieldValue[1] = fieldValue1215;

fieldValue1206.children[2] = ProtoInstance1213;

let ProtoInstance1216 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1216.name = "Site";
ProtoInstance1216.DEF = "hanim_r_tarsal_distal_phalanx_2";
let fieldValue1217 = browser.currentScene.createNode("fieldValue");
fieldValue1217.name = "name";
fieldValue1217.value = "r_tarsal_distal_phalanx_2";
ProtoInstance1216.fieldValue = new MFNode();

ProtoInstance1216.fieldValue[0] = fieldValue1217;

let fieldValue1218 = browser.currentScene.createNode("fieldValue");
fieldValue1218.name = "translation";
fieldValue1218.value = "-0.08829999715089798 0.013399999588727951 0.13830000162124634";
ProtoInstance1216.fieldValue[1] = fieldValue1218;

fieldValue1206.children[3] = ProtoInstance1216;

ProtoInstance1204.fieldValue[1] = fieldValue1206;

fieldValue1203.children = new MFNode();

fieldValue1203.children[0] = ProtoInstance1204;

ProtoInstance1199.fieldValue[3] = fieldValue1203;

fieldValue1198.children = new MFNode();

fieldValue1198.children[0] = ProtoInstance1199;

let ProtoInstance1219 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1219.name = "Segment";
ProtoInstance1219.DEF = "hanim_r_hindfoot";
let fieldValue1220 = browser.currentScene.createNode("fieldValue");
fieldValue1220.name = "name";
fieldValue1220.value = "r_hindfoot";
ProtoInstance1219.fieldValue = new MFNode();

ProtoInstance1219.fieldValue[0] = fieldValue1220;

let fieldValue1221 = browser.currentScene.createNode("fieldValue");
fieldValue1221.name = "children";
let ProtoInstance1222 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1222.name = "Site";
ProtoInstance1222.DEF = "hanim_r_lateral_malleolus";
let fieldValue1223 = browser.currentScene.createNode("fieldValue");
fieldValue1223.name = "name";
fieldValue1223.value = "r_lateral_malleolus";
ProtoInstance1222.fieldValue = new MFNode();

ProtoInstance1222.fieldValue[0] = fieldValue1223;

let fieldValue1224 = browser.currentScene.createNode("fieldValue");
fieldValue1224.name = "translation";
fieldValue1224.value = "-0.1005999967455864 0.0658000037074089 -0.10750000178813934";
ProtoInstance1222.fieldValue[1] = fieldValue1224;

fieldValue1221.children = new MFNode();

fieldValue1221.children[0] = ProtoInstance1222;

let ProtoInstance1225 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1225.name = "Site";
ProtoInstance1225.DEF = "hanim_r_medial_malleolus";
let fieldValue1226 = browser.currentScene.createNode("fieldValue");
fieldValue1226.name = "name";
fieldValue1226.value = "r_medial_malleolus";
ProtoInstance1225.fieldValue = new MFNode();

ProtoInstance1225.fieldValue[0] = fieldValue1226;

let fieldValue1227 = browser.currentScene.createNode("fieldValue");
fieldValue1227.name = "translation";
fieldValue1227.value = "-0.05909999832510948 0.07599999755620956 -0.09279999881982803";
ProtoInstance1225.fieldValue[1] = fieldValue1227;

fieldValue1221.children[1] = ProtoInstance1225;

let ProtoInstance1228 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1228.name = "Site";
ProtoInstance1228.DEF = "hanim_r_sphyrion";
let fieldValue1229 = browser.currentScene.createNode("fieldValue");
fieldValue1229.name = "name";
fieldValue1229.value = "r_sphyrion";
ProtoInstance1228.fieldValue = new MFNode();

ProtoInstance1228.fieldValue[0] = fieldValue1229;

let fieldValue1230 = browser.currentScene.createNode("fieldValue");
fieldValue1230.name = "translation";
fieldValue1230.value = "-0.06030000001192093 0.061000000685453415 -0.10019999742507935";
ProtoInstance1228.fieldValue[1] = fieldValue1230;

fieldValue1221.children[2] = ProtoInstance1228;

let ProtoInstance1231 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1231.name = "Site";
ProtoInstance1231.DEF = "hanim_r_calcaneus_posterior";
let fieldValue1232 = browser.currentScene.createNode("fieldValue");
fieldValue1232.name = "name";
fieldValue1232.value = "r_calcaneus_posterior";
ProtoInstance1231.fieldValue = new MFNode();

ProtoInstance1231.fieldValue[0] = fieldValue1232;

let fieldValue1233 = browser.currentScene.createNode("fieldValue");
fieldValue1233.name = "translation";
fieldValue1233.value = "-0.06920000165700912 0.02969999983906746 -0.12210000306367874";
ProtoInstance1231.fieldValue[1] = fieldValue1233;

fieldValue1221.children[3] = ProtoInstance1231;

ProtoInstance1219.fieldValue[1] = fieldValue1221;

fieldValue1198.children[1] = ProtoInstance1219;

ProtoInstance1194.fieldValue[3] = fieldValue1198;

fieldValue1193.children = new MFNode();

fieldValue1193.children[0] = ProtoInstance1194;

let ProtoInstance1234 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1234.name = "Segment";
ProtoInstance1234.DEF = "hanim_r_calf";
let fieldValue1235 = browser.currentScene.createNode("fieldValue");
fieldValue1235.name = "name";
fieldValue1235.value = "r_calf";
ProtoInstance1234.fieldValue = new MFNode();

ProtoInstance1234.fieldValue[0] = fieldValue1235;

fieldValue1193.children[1] = ProtoInstance1234;

ProtoInstance1189.fieldValue[3] = fieldValue1193;

fieldValue1188.children = new MFNode();

fieldValue1188.children[0] = ProtoInstance1189;

let ProtoInstance1236 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1236.name = "Segment";
ProtoInstance1236.DEF = "hanim_r_thigh";
let fieldValue1237 = browser.currentScene.createNode("fieldValue");
fieldValue1237.name = "name";
fieldValue1237.value = "r_thigh";
ProtoInstance1236.fieldValue = new MFNode();

ProtoInstance1236.fieldValue[0] = fieldValue1237;

let fieldValue1238 = browser.currentScene.createNode("fieldValue");
fieldValue1238.name = "children";
let ProtoInstance1239 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1239.name = "Site";
ProtoInstance1239.DEF = "hanim_r_knee_crease";
let fieldValue1240 = browser.currentScene.createNode("fieldValue");
fieldValue1240.name = "name";
fieldValue1240.value = "r_knee_crease";
ProtoInstance1239.fieldValue = new MFNode();

ProtoInstance1239.fieldValue[0] = fieldValue1240;

let fieldValue1241 = browser.currentScene.createNode("fieldValue");
fieldValue1241.name = "translation";
fieldValue1241.value = "-0.08250000327825546 0.49320000410079956 -0.032600000500679016";
ProtoInstance1239.fieldValue[1] = fieldValue1241;

fieldValue1238.children = new MFNode();

fieldValue1238.children[0] = ProtoInstance1239;

let ProtoInstance1242 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1242.name = "Site";
ProtoInstance1242.DEF = "hanim_r_femoral_lateral_epicondyles";
let fieldValue1243 = browser.currentScene.createNode("fieldValue");
fieldValue1243.name = "name";
fieldValue1243.value = "r_femoral_lateral_epicondyles";
ProtoInstance1242.fieldValue = new MFNode();

ProtoInstance1242.fieldValue[0] = fieldValue1243;

let fieldValue1244 = browser.currentScene.createNode("fieldValue");
fieldValue1244.name = "translation";
fieldValue1244.value = "-0.1421000063419342 0.4991999864578247 0.03099999949336052";
ProtoInstance1242.fieldValue[1] = fieldValue1244;

fieldValue1238.children[1] = ProtoInstance1242;

let ProtoInstance1245 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1245.name = "Site";
ProtoInstance1245.DEF = "hanim_r_femoral_medial_epicondyles";
let fieldValue1246 = browser.currentScene.createNode("fieldValue");
fieldValue1246.name = "name";
fieldValue1246.value = "r_femoral_lateral_epicondyles";
ProtoInstance1245.fieldValue = new MFNode();

ProtoInstance1245.fieldValue[0] = fieldValue1246;

let fieldValue1247 = browser.currentScene.createNode("fieldValue");
fieldValue1247.name = "translation";
fieldValue1247.value = "-0.022099999710917473 0.5013999938964844 0.02889999933540821";
ProtoInstance1245.fieldValue[1] = fieldValue1247;

fieldValue1238.children[2] = ProtoInstance1245;

ProtoInstance1236.fieldValue[1] = fieldValue1238;

fieldValue1188.children[1] = ProtoInstance1236;

ProtoInstance1184.fieldValue[3] = fieldValue1188;

fieldValue493.children[6] = ProtoInstance1184;

let ProtoInstance1248 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1248.name = "Joint";
ProtoInstance1248.DEF = "hanim_r_knee";
let fieldValue1249 = browser.currentScene.createNode("fieldValue");
fieldValue1249.name = "stiffness";
fieldValue1249.value = "1 1 1";
ProtoInstance1248.fieldValue = new MFNode();

ProtoInstance1248.fieldValue[0] = fieldValue1249;

let fieldValue1250 = browser.currentScene.createNode("fieldValue");
fieldValue1250.name = "name";
fieldValue1250.value = "r_knee";
ProtoInstance1248.fieldValue[1] = fieldValue1250;

let fieldValue1251 = browser.currentScene.createNode("fieldValue");
fieldValue1251.name = "center";
fieldValue1251.value = "-0.08669999986886978 0.49129998683929443 0.03180000185966492";
ProtoInstance1248.fieldValue[2] = fieldValue1251;

let fieldValue1252 = browser.currentScene.createNode("fieldValue");
fieldValue1252.name = "children";
let ProtoInstance1253 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1253.name = "Joint";
ProtoInstance1253.DEF = "hanim_r_talocrural";
let fieldValue1254 = browser.currentScene.createNode("fieldValue");
fieldValue1254.name = "stiffness";
fieldValue1254.value = "1 1 1";
ProtoInstance1253.fieldValue = new MFNode();

ProtoInstance1253.fieldValue[0] = fieldValue1254;

let fieldValue1255 = browser.currentScene.createNode("fieldValue");
fieldValue1255.name = "name";
fieldValue1255.value = "r_talocrural";
ProtoInstance1253.fieldValue[1] = fieldValue1255;

let fieldValue1256 = browser.currentScene.createNode("fieldValue");
fieldValue1256.name = "center";
fieldValue1256.value = "-0.08009999990463257 0.07119999825954437 -0.07660000026226044";
ProtoInstance1253.fieldValue[2] = fieldValue1256;

let fieldValue1257 = browser.currentScene.createNode("fieldValue");
fieldValue1257.name = "children";
let ProtoInstance1258 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1258.name = "Joint";
ProtoInstance1258.DEF = "hanim_r_metatarsophalangeal_";
let fieldValue1259 = browser.currentScene.createNode("fieldValue");
fieldValue1259.name = "stiffness";
fieldValue1259.value = "1 1 1";
ProtoInstance1258.fieldValue = new MFNode();

ProtoInstance1258.fieldValue[0] = fieldValue1259;

let fieldValue1260 = browser.currentScene.createNode("fieldValue");
fieldValue1260.name = "name";
fieldValue1260.value = "r_metatarsophalangeal_";
ProtoInstance1258.fieldValue[1] = fieldValue1260;

let fieldValue1261 = browser.currentScene.createNode("fieldValue");
fieldValue1261.name = "center";
fieldValue1261.value = "-0.08009999990463257 0 0.03680000081658363";
ProtoInstance1258.fieldValue[2] = fieldValue1261;

let fieldValue1262 = browser.currentScene.createNode("fieldValue");
fieldValue1262.name = "children";
let ProtoInstance1263 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1263.name = "Segment";
ProtoInstance1263.DEF = "hanim_r_middistal";
let fieldValue1264 = browser.currentScene.createNode("fieldValue");
fieldValue1264.name = "name";
fieldValue1264.value = "r_middistal";
ProtoInstance1263.fieldValue = new MFNode();

ProtoInstance1263.fieldValue[0] = fieldValue1264;

let fieldValue1265 = browser.currentScene.createNode("fieldValue");
fieldValue1265.name = "children";
let ProtoInstance1266 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1266.name = "Site";
ProtoInstance1266.DEF = "hanim_r_middistal_tip";
let fieldValue1267 = browser.currentScene.createNode("fieldValue");
fieldValue1267.name = "name";
fieldValue1267.value = "r_middistal_tip";
ProtoInstance1266.fieldValue = new MFNode();

ProtoInstance1266.fieldValue[0] = fieldValue1267;

let fieldValue1268 = browser.currentScene.createNode("fieldValue");
fieldValue1268.name = "translation";
fieldValue1268.value = "-0.10429999977350235 -0.022700000554323196 0.14499999582767487";
ProtoInstance1266.fieldValue[1] = fieldValue1268;

fieldValue1265.children = new MFNode();

fieldValue1265.children[0] = ProtoInstance1266;

let ProtoInstance1269 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1269.name = "Site";
ProtoInstance1269.DEF = "hanim_r_tarsal_interphalangeal_phalanx_5";
let fieldValue1270 = browser.currentScene.createNode("fieldValue");
fieldValue1270.name = "name";
fieldValue1270.value = "r_tarsal_interphalangeal_phalanx_5";
ProtoInstance1269.fieldValue = new MFNode();

ProtoInstance1269.fieldValue[0] = fieldValue1270;

let fieldValue1271 = browser.currentScene.createNode("fieldValue");
fieldValue1271.name = "translation";
fieldValue1271.value = "-0.15230000019073486 0.016599999740719795 0.08950000256299973";
ProtoInstance1269.fieldValue[1] = fieldValue1271;

fieldValue1265.children[1] = ProtoInstance1269;

let ProtoInstance1272 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1272.name = "Site";
ProtoInstance1272.DEF = "hanim_r_tarsal_interphalangeal_phalanx_1";
let fieldValue1273 = browser.currentScene.createNode("fieldValue");
fieldValue1273.name = "name";
fieldValue1273.value = "r_tarsal_interphalangeal_phalanx_1";
ProtoInstance1272.fieldValue = new MFNode();

ProtoInstance1272.fieldValue[0] = fieldValue1273;

let fieldValue1274 = browser.currentScene.createNode("fieldValue");
fieldValue1274.name = "translation";
fieldValue1274.value = "-0.05209999904036522 0.026000000536441803 0.01269999984651804";
ProtoInstance1272.fieldValue[1] = fieldValue1274;

fieldValue1265.children[2] = ProtoInstance1272;

let ProtoInstance1275 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1275.name = "Site";
ProtoInstance1275.DEF = "hanim_r_tarsal_distal_phalanx_2";
let fieldValue1276 = browser.currentScene.createNode("fieldValue");
fieldValue1276.name = "name";
fieldValue1276.value = "r_tarsal_distal_phalanx_2";
ProtoInstance1275.fieldValue = new MFNode();

ProtoInstance1275.fieldValue[0] = fieldValue1276;

let fieldValue1277 = browser.currentScene.createNode("fieldValue");
fieldValue1277.name = "translation";
fieldValue1277.value = "-0.08829999715089798 0.013399999588727951 0.13830000162124634";
ProtoInstance1275.fieldValue[1] = fieldValue1277;

fieldValue1265.children[3] = ProtoInstance1275;

ProtoInstance1263.fieldValue[1] = fieldValue1265;

fieldValue1262.children = new MFNode();

fieldValue1262.children[0] = ProtoInstance1263;

ProtoInstance1258.fieldValue[3] = fieldValue1262;

fieldValue1257.children = new MFNode();

fieldValue1257.children[0] = ProtoInstance1258;

let ProtoInstance1278 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1278.name = "Segment";
ProtoInstance1278.DEF = "hanim_r_hindfoot";
let fieldValue1279 = browser.currentScene.createNode("fieldValue");
fieldValue1279.name = "name";
fieldValue1279.value = "r_hindfoot";
ProtoInstance1278.fieldValue = new MFNode();

ProtoInstance1278.fieldValue[0] = fieldValue1279;

let fieldValue1280 = browser.currentScene.createNode("fieldValue");
fieldValue1280.name = "children";
let ProtoInstance1281 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1281.name = "Site";
ProtoInstance1281.DEF = "hanim_r_lateral_malleolus";
let fieldValue1282 = browser.currentScene.createNode("fieldValue");
fieldValue1282.name = "name";
fieldValue1282.value = "r_lateral_malleolus";
ProtoInstance1281.fieldValue = new MFNode();

ProtoInstance1281.fieldValue[0] = fieldValue1282;

let fieldValue1283 = browser.currentScene.createNode("fieldValue");
fieldValue1283.name = "translation";
fieldValue1283.value = "-0.1005999967455864 0.0658000037074089 -0.10750000178813934";
ProtoInstance1281.fieldValue[1] = fieldValue1283;

fieldValue1280.children = new MFNode();

fieldValue1280.children[0] = ProtoInstance1281;

let ProtoInstance1284 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1284.name = "Site";
ProtoInstance1284.DEF = "hanim_r_medial_malleolus";
let fieldValue1285 = browser.currentScene.createNode("fieldValue");
fieldValue1285.name = "name";
fieldValue1285.value = "r_medial_malleolus";
ProtoInstance1284.fieldValue = new MFNode();

ProtoInstance1284.fieldValue[0] = fieldValue1285;

let fieldValue1286 = browser.currentScene.createNode("fieldValue");
fieldValue1286.name = "translation";
fieldValue1286.value = "-0.05909999832510948 0.07599999755620956 -0.09279999881982803";
ProtoInstance1284.fieldValue[1] = fieldValue1286;

fieldValue1280.children[1] = ProtoInstance1284;

let ProtoInstance1287 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1287.name = "Site";
ProtoInstance1287.DEF = "hanim_r_sphyrion";
let fieldValue1288 = browser.currentScene.createNode("fieldValue");
fieldValue1288.name = "name";
fieldValue1288.value = "r_sphyrion";
ProtoInstance1287.fieldValue = new MFNode();

ProtoInstance1287.fieldValue[0] = fieldValue1288;

let fieldValue1289 = browser.currentScene.createNode("fieldValue");
fieldValue1289.name = "translation";
fieldValue1289.value = "-0.06030000001192093 0.061000000685453415 -0.10019999742507935";
ProtoInstance1287.fieldValue[1] = fieldValue1289;

fieldValue1280.children[2] = ProtoInstance1287;

let ProtoInstance1290 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1290.name = "Site";
ProtoInstance1290.DEF = "hanim_r_calcaneus_posterior";
let fieldValue1291 = browser.currentScene.createNode("fieldValue");
fieldValue1291.name = "name";
fieldValue1291.value = "r_calcaneus_posterior";
ProtoInstance1290.fieldValue = new MFNode();

ProtoInstance1290.fieldValue[0] = fieldValue1291;

let fieldValue1292 = browser.currentScene.createNode("fieldValue");
fieldValue1292.name = "translation";
fieldValue1292.value = "-0.06920000165700912 0.02969999983906746 -0.12210000306367874";
ProtoInstance1290.fieldValue[1] = fieldValue1292;

fieldValue1280.children[3] = ProtoInstance1290;

ProtoInstance1278.fieldValue[1] = fieldValue1280;

fieldValue1257.children[1] = ProtoInstance1278;

ProtoInstance1253.fieldValue[3] = fieldValue1257;

fieldValue1252.children = new MFNode();

fieldValue1252.children[0] = ProtoInstance1253;

let ProtoInstance1293 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1293.name = "Segment";
ProtoInstance1293.DEF = "hanim_r_calf";
let fieldValue1294 = browser.currentScene.createNode("fieldValue");
fieldValue1294.name = "name";
fieldValue1294.value = "r_calf";
ProtoInstance1293.fieldValue = new MFNode();

ProtoInstance1293.fieldValue[0] = fieldValue1294;

fieldValue1252.children[1] = ProtoInstance1293;

ProtoInstance1248.fieldValue[3] = fieldValue1252;

fieldValue493.children[7] = ProtoInstance1248;

let ProtoInstance1295 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1295.name = "Joint";
ProtoInstance1295.DEF = "hanim_r_talocrural";
let fieldValue1296 = browser.currentScene.createNode("fieldValue");
fieldValue1296.name = "stiffness";
fieldValue1296.value = "1 1 1";
ProtoInstance1295.fieldValue = new MFNode();

ProtoInstance1295.fieldValue[0] = fieldValue1296;

let fieldValue1297 = browser.currentScene.createNode("fieldValue");
fieldValue1297.name = "name";
fieldValue1297.value = "r_talocrural";
ProtoInstance1295.fieldValue[1] = fieldValue1297;

let fieldValue1298 = browser.currentScene.createNode("fieldValue");
fieldValue1298.name = "center";
fieldValue1298.value = "-0.08009999990463257 0.07119999825954437 -0.07660000026226044";
ProtoInstance1295.fieldValue[2] = fieldValue1298;

let fieldValue1299 = browser.currentScene.createNode("fieldValue");
fieldValue1299.name = "children";
let ProtoInstance1300 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1300.name = "Joint";
ProtoInstance1300.DEF = "hanim_r_metatarsophalangeal_";
let fieldValue1301 = browser.currentScene.createNode("fieldValue");
fieldValue1301.name = "stiffness";
fieldValue1301.value = "1 1 1";
ProtoInstance1300.fieldValue = new MFNode();

ProtoInstance1300.fieldValue[0] = fieldValue1301;

let fieldValue1302 = browser.currentScene.createNode("fieldValue");
fieldValue1302.name = "name";
fieldValue1302.value = "r_metatarsophalangeal_";
ProtoInstance1300.fieldValue[1] = fieldValue1302;

let fieldValue1303 = browser.currentScene.createNode("fieldValue");
fieldValue1303.name = "center";
fieldValue1303.value = "-0.08009999990463257 0 0.03680000081658363";
ProtoInstance1300.fieldValue[2] = fieldValue1303;

let fieldValue1304 = browser.currentScene.createNode("fieldValue");
fieldValue1304.name = "children";
let ProtoInstance1305 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1305.name = "Segment";
ProtoInstance1305.DEF = "hanim_r_middistal";
let fieldValue1306 = browser.currentScene.createNode("fieldValue");
fieldValue1306.name = "name";
fieldValue1306.value = "r_middistal";
ProtoInstance1305.fieldValue = new MFNode();

ProtoInstance1305.fieldValue[0] = fieldValue1306;

let fieldValue1307 = browser.currentScene.createNode("fieldValue");
fieldValue1307.name = "children";
let ProtoInstance1308 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1308.name = "Site";
ProtoInstance1308.DEF = "hanim_r_middistal_tip";
let fieldValue1309 = browser.currentScene.createNode("fieldValue");
fieldValue1309.name = "name";
fieldValue1309.value = "r_middistal_tip";
ProtoInstance1308.fieldValue = new MFNode();

ProtoInstance1308.fieldValue[0] = fieldValue1309;

let fieldValue1310 = browser.currentScene.createNode("fieldValue");
fieldValue1310.name = "translation";
fieldValue1310.value = "-0.10429999977350235 -0.022700000554323196 0.14499999582767487";
ProtoInstance1308.fieldValue[1] = fieldValue1310;

fieldValue1307.children = new MFNode();

fieldValue1307.children[0] = ProtoInstance1308;

let ProtoInstance1311 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1311.name = "Site";
ProtoInstance1311.DEF = "hanim_r_tarsal_interphalangeal_phalanx_5";
let fieldValue1312 = browser.currentScene.createNode("fieldValue");
fieldValue1312.name = "name";
fieldValue1312.value = "r_tarsal_interphalangeal_phalanx_5";
ProtoInstance1311.fieldValue = new MFNode();

ProtoInstance1311.fieldValue[0] = fieldValue1312;

let fieldValue1313 = browser.currentScene.createNode("fieldValue");
fieldValue1313.name = "translation";
fieldValue1313.value = "-0.15230000019073486 0.016599999740719795 0.08950000256299973";
ProtoInstance1311.fieldValue[1] = fieldValue1313;

fieldValue1307.children[1] = ProtoInstance1311;

let ProtoInstance1314 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1314.name = "Site";
ProtoInstance1314.DEF = "hanim_r_tarsal_interphalangeal_phalanx_1";
let fieldValue1315 = browser.currentScene.createNode("fieldValue");
fieldValue1315.name = "name";
fieldValue1315.value = "r_tarsal_interphalangeal_phalanx_1";
ProtoInstance1314.fieldValue = new MFNode();

ProtoInstance1314.fieldValue[0] = fieldValue1315;

let fieldValue1316 = browser.currentScene.createNode("fieldValue");
fieldValue1316.name = "translation";
fieldValue1316.value = "-0.05209999904036522 0.026000000536441803 0.01269999984651804";
ProtoInstance1314.fieldValue[1] = fieldValue1316;

fieldValue1307.children[2] = ProtoInstance1314;

let ProtoInstance1317 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1317.name = "Site";
ProtoInstance1317.DEF = "hanim_r_tarsal_distal_phalanx_2";
let fieldValue1318 = browser.currentScene.createNode("fieldValue");
fieldValue1318.name = "name";
fieldValue1318.value = "r_tarsal_distal_phalanx_2";
ProtoInstance1317.fieldValue = new MFNode();

ProtoInstance1317.fieldValue[0] = fieldValue1318;

let fieldValue1319 = browser.currentScene.createNode("fieldValue");
fieldValue1319.name = "translation";
fieldValue1319.value = "-0.08829999715089798 0.013399999588727951 0.13830000162124634";
ProtoInstance1317.fieldValue[1] = fieldValue1319;

fieldValue1307.children[3] = ProtoInstance1317;

ProtoInstance1305.fieldValue[1] = fieldValue1307;

fieldValue1304.children = new MFNode();

fieldValue1304.children[0] = ProtoInstance1305;

ProtoInstance1300.fieldValue[3] = fieldValue1304;

fieldValue1299.children = new MFNode();

fieldValue1299.children[0] = ProtoInstance1300;

let ProtoInstance1320 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1320.name = "Segment";
ProtoInstance1320.DEF = "hanim_r_hindfoot";
let fieldValue1321 = browser.currentScene.createNode("fieldValue");
fieldValue1321.name = "name";
fieldValue1321.value = "r_hindfoot";
ProtoInstance1320.fieldValue = new MFNode();

ProtoInstance1320.fieldValue[0] = fieldValue1321;

let fieldValue1322 = browser.currentScene.createNode("fieldValue");
fieldValue1322.name = "children";
let ProtoInstance1323 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1323.name = "Site";
ProtoInstance1323.DEF = "hanim_r_lateral_malleolus";
let fieldValue1324 = browser.currentScene.createNode("fieldValue");
fieldValue1324.name = "name";
fieldValue1324.value = "r_lateral_malleolus";
ProtoInstance1323.fieldValue = new MFNode();

ProtoInstance1323.fieldValue[0] = fieldValue1324;

let fieldValue1325 = browser.currentScene.createNode("fieldValue");
fieldValue1325.name = "translation";
fieldValue1325.value = "-0.1005999967455864 0.0658000037074089 -0.10750000178813934";
ProtoInstance1323.fieldValue[1] = fieldValue1325;

fieldValue1322.children = new MFNode();

fieldValue1322.children[0] = ProtoInstance1323;

let ProtoInstance1326 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1326.name = "Site";
ProtoInstance1326.DEF = "hanim_r_medial_malleolus";
let fieldValue1327 = browser.currentScene.createNode("fieldValue");
fieldValue1327.name = "name";
fieldValue1327.value = "r_medial_malleolus";
ProtoInstance1326.fieldValue = new MFNode();

ProtoInstance1326.fieldValue[0] = fieldValue1327;

let fieldValue1328 = browser.currentScene.createNode("fieldValue");
fieldValue1328.name = "translation";
fieldValue1328.value = "-0.05909999832510948 0.07599999755620956 -0.09279999881982803";
ProtoInstance1326.fieldValue[1] = fieldValue1328;

fieldValue1322.children[1] = ProtoInstance1326;

let ProtoInstance1329 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1329.name = "Site";
ProtoInstance1329.DEF = "hanim_r_sphyrion";
let fieldValue1330 = browser.currentScene.createNode("fieldValue");
fieldValue1330.name = "name";
fieldValue1330.value = "r_sphyrion";
ProtoInstance1329.fieldValue = new MFNode();

ProtoInstance1329.fieldValue[0] = fieldValue1330;

let fieldValue1331 = browser.currentScene.createNode("fieldValue");
fieldValue1331.name = "translation";
fieldValue1331.value = "-0.06030000001192093 0.061000000685453415 -0.10019999742507935";
ProtoInstance1329.fieldValue[1] = fieldValue1331;

fieldValue1322.children[2] = ProtoInstance1329;

let ProtoInstance1332 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1332.name = "Site";
ProtoInstance1332.DEF = "hanim_r_calcaneus_posterior";
let fieldValue1333 = browser.currentScene.createNode("fieldValue");
fieldValue1333.name = "name";
fieldValue1333.value = "r_calcaneus_posterior";
ProtoInstance1332.fieldValue = new MFNode();

ProtoInstance1332.fieldValue[0] = fieldValue1333;

let fieldValue1334 = browser.currentScene.createNode("fieldValue");
fieldValue1334.name = "translation";
fieldValue1334.value = "-0.06920000165700912 0.02969999983906746 -0.12210000306367874";
ProtoInstance1332.fieldValue[1] = fieldValue1334;

fieldValue1322.children[3] = ProtoInstance1332;

ProtoInstance1320.fieldValue[1] = fieldValue1322;

fieldValue1299.children[1] = ProtoInstance1320;

ProtoInstance1295.fieldValue[3] = fieldValue1299;

fieldValue493.children[8] = ProtoInstance1295;

let ProtoInstance1335 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1335.name = "Joint";
ProtoInstance1335.DEF = "hanim_r_metatarsophalangeal_";
let fieldValue1336 = browser.currentScene.createNode("fieldValue");
fieldValue1336.name = "stiffness";
fieldValue1336.value = "1 1 1";
ProtoInstance1335.fieldValue = new MFNode();

ProtoInstance1335.fieldValue[0] = fieldValue1336;

let fieldValue1337 = browser.currentScene.createNode("fieldValue");
fieldValue1337.name = "name";
fieldValue1337.value = "r_metatarsophalangeal_";
ProtoInstance1335.fieldValue[1] = fieldValue1337;

let fieldValue1338 = browser.currentScene.createNode("fieldValue");
fieldValue1338.name = "center";
fieldValue1338.value = "-0.08009999990463257 0 0.03680000081658363";
ProtoInstance1335.fieldValue[2] = fieldValue1338;

let fieldValue1339 = browser.currentScene.createNode("fieldValue");
fieldValue1339.name = "children";
let ProtoInstance1340 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1340.name = "Segment";
ProtoInstance1340.DEF = "hanim_r_middistal";
let fieldValue1341 = browser.currentScene.createNode("fieldValue");
fieldValue1341.name = "name";
fieldValue1341.value = "r_middistal";
ProtoInstance1340.fieldValue = new MFNode();

ProtoInstance1340.fieldValue[0] = fieldValue1341;

let fieldValue1342 = browser.currentScene.createNode("fieldValue");
fieldValue1342.name = "children";
let ProtoInstance1343 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1343.name = "Site";
ProtoInstance1343.DEF = "hanim_r_middistal_tip";
let fieldValue1344 = browser.currentScene.createNode("fieldValue");
fieldValue1344.name = "name";
fieldValue1344.value = "r_middistal_tip";
ProtoInstance1343.fieldValue = new MFNode();

ProtoInstance1343.fieldValue[0] = fieldValue1344;

let fieldValue1345 = browser.currentScene.createNode("fieldValue");
fieldValue1345.name = "translation";
fieldValue1345.value = "-0.10429999977350235 -0.022700000554323196 0.14499999582767487";
ProtoInstance1343.fieldValue[1] = fieldValue1345;

fieldValue1342.children = new MFNode();

fieldValue1342.children[0] = ProtoInstance1343;

let ProtoInstance1346 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1346.name = "Site";
ProtoInstance1346.DEF = "hanim_r_tarsal_interphalangeal_phalanx_5";
let fieldValue1347 = browser.currentScene.createNode("fieldValue");
fieldValue1347.name = "name";
fieldValue1347.value = "r_tarsal_interphalangeal_phalanx_5";
ProtoInstance1346.fieldValue = new MFNode();

ProtoInstance1346.fieldValue[0] = fieldValue1347;

let fieldValue1348 = browser.currentScene.createNode("fieldValue");
fieldValue1348.name = "translation";
fieldValue1348.value = "-0.15230000019073486 0.016599999740719795 0.08950000256299973";
ProtoInstance1346.fieldValue[1] = fieldValue1348;

fieldValue1342.children[1] = ProtoInstance1346;

let ProtoInstance1349 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1349.name = "Site";
ProtoInstance1349.DEF = "hanim_r_tarsal_interphalangeal_phalanx_1";
let fieldValue1350 = browser.currentScene.createNode("fieldValue");
fieldValue1350.name = "name";
fieldValue1350.value = "r_tarsal_interphalangeal_phalanx_1";
ProtoInstance1349.fieldValue = new MFNode();

ProtoInstance1349.fieldValue[0] = fieldValue1350;

let fieldValue1351 = browser.currentScene.createNode("fieldValue");
fieldValue1351.name = "translation";
fieldValue1351.value = "-0.05209999904036522 0.026000000536441803 0.01269999984651804";
ProtoInstance1349.fieldValue[1] = fieldValue1351;

fieldValue1342.children[2] = ProtoInstance1349;

let ProtoInstance1352 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1352.name = "Site";
ProtoInstance1352.DEF = "hanim_r_tarsal_distal_phalanx_2";
let fieldValue1353 = browser.currentScene.createNode("fieldValue");
fieldValue1353.name = "name";
fieldValue1353.value = "r_tarsal_distal_phalanx_2";
ProtoInstance1352.fieldValue = new MFNode();

ProtoInstance1352.fieldValue[0] = fieldValue1353;

let fieldValue1354 = browser.currentScene.createNode("fieldValue");
fieldValue1354.name = "translation";
fieldValue1354.value = "-0.08829999715089798 0.013399999588727951 0.13830000162124634";
ProtoInstance1352.fieldValue[1] = fieldValue1354;

fieldValue1342.children[3] = ProtoInstance1352;

ProtoInstance1340.fieldValue[1] = fieldValue1342;

fieldValue1339.children = new MFNode();

fieldValue1339.children[0] = ProtoInstance1340;

ProtoInstance1335.fieldValue[3] = fieldValue1339;

fieldValue493.children[9] = ProtoInstance1335;

let ProtoInstance1355 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1355.name = "Joint";
ProtoInstance1355.DEF = "hanim_vl5";
let fieldValue1356 = browser.currentScene.createNode("fieldValue");
fieldValue1356.name = "stiffness";
fieldValue1356.value = "1 1 1";
ProtoInstance1355.fieldValue = new MFNode();

ProtoInstance1355.fieldValue[0] = fieldValue1356;

let fieldValue1357 = browser.currentScene.createNode("fieldValue");
fieldValue1357.name = "name";
fieldValue1357.value = "vl5";
ProtoInstance1355.fieldValue[1] = fieldValue1357;

let fieldValue1358 = browser.currentScene.createNode("fieldValue");
fieldValue1358.name = "center";
fieldValue1358.value = "0.00279999990016222 1.0568000078201294 -0.07760000228881836";
ProtoInstance1355.fieldValue[2] = fieldValue1358;

let fieldValue1359 = browser.currentScene.createNode("fieldValue");
fieldValue1359.name = "children";
let ProtoInstance1360 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1360.name = "Joint";
ProtoInstance1360.DEF = "hanim_skullbase";
let fieldValue1361 = browser.currentScene.createNode("fieldValue");
fieldValue1361.name = "stiffness";
fieldValue1361.value = "1 1 1";
ProtoInstance1360.fieldValue = new MFNode();

ProtoInstance1360.fieldValue[0] = fieldValue1361;

let fieldValue1362 = browser.currentScene.createNode("fieldValue");
fieldValue1362.name = "name";
fieldValue1362.value = "skullbase";
ProtoInstance1360.fieldValue[1] = fieldValue1362;

let fieldValue1363 = browser.currentScene.createNode("fieldValue");
fieldValue1363.name = "center";
fieldValue1363.value = "0.004399999976158142 1.62090003490448 0.023600000888109207";
ProtoInstance1360.fieldValue[2] = fieldValue1363;

let fieldValue1364 = browser.currentScene.createNode("fieldValue");
fieldValue1364.name = "children";
let ProtoInstance1365 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1365.name = "Segment";
ProtoInstance1365.DEF = "hanim_skull";
let fieldValue1366 = browser.currentScene.createNode("fieldValue");
fieldValue1366.name = "name";
fieldValue1366.value = "skull";
ProtoInstance1365.fieldValue = new MFNode();

ProtoInstance1365.fieldValue[0] = fieldValue1366;

let fieldValue1367 = browser.currentScene.createNode("fieldValue");
fieldValue1367.name = "children";
let ProtoInstance1368 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1368.name = "Site";
ProtoInstance1368.DEF = "hanim_skull_tip";
let fieldValue1369 = browser.currentScene.createNode("fieldValue");
fieldValue1369.name = "name";
fieldValue1369.value = "skull_tip";
ProtoInstance1368.fieldValue = new MFNode();

ProtoInstance1368.fieldValue[0] = fieldValue1369;

let fieldValue1370 = browser.currentScene.createNode("fieldValue");
fieldValue1370.name = "translation";
fieldValue1370.value = "0.004999999888241291 1.7503999471664429 0.005499999970197678";
ProtoInstance1368.fieldValue[1] = fieldValue1370;

fieldValue1367.children = new MFNode();

fieldValue1367.children[0] = ProtoInstance1368;

let ProtoInstance1371 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1371.name = "Site";
ProtoInstance1371.DEF = "hanim_sellion";
let fieldValue1372 = browser.currentScene.createNode("fieldValue");
fieldValue1372.name = "name";
fieldValue1372.value = "sellion";
ProtoInstance1371.fieldValue = new MFNode();

ProtoInstance1371.fieldValue[0] = fieldValue1372;

let fieldValue1373 = browser.currentScene.createNode("fieldValue");
fieldValue1373.name = "translation";
fieldValue1373.value = "0.005799999926239252 1.631600022315979 0.0851999968290329";
ProtoInstance1371.fieldValue[1] = fieldValue1373;

fieldValue1367.children[1] = ProtoInstance1371;

let ProtoInstance1374 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1374.name = "Site";
ProtoInstance1374.DEF = "hanim_r_infraorbitale";
let fieldValue1375 = browser.currentScene.createNode("fieldValue");
fieldValue1375.name = "name";
fieldValue1375.value = "r_infraorbitale";
ProtoInstance1374.fieldValue = new MFNode();

ProtoInstance1374.fieldValue[0] = fieldValue1375;

let fieldValue1376 = browser.currentScene.createNode("fieldValue");
fieldValue1376.name = "translation";
fieldValue1376.value = "-0.02370000071823597 1.6171000003814697 0.07519999891519547";
ProtoInstance1374.fieldValue[1] = fieldValue1376;

fieldValue1367.children[2] = ProtoInstance1374;

let ProtoInstance1377 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1377.name = "Site";
ProtoInstance1377.DEF = "hanim_l_infraorbitale";
let fieldValue1378 = browser.currentScene.createNode("fieldValue");
fieldValue1378.name = "name";
fieldValue1378.value = "l_infraorbitale";
ProtoInstance1377.fieldValue = new MFNode();

ProtoInstance1377.fieldValue[0] = fieldValue1378;

let fieldValue1379 = browser.currentScene.createNode("fieldValue");
fieldValue1379.name = "translation";
fieldValue1379.value = "0.0340999998152256 1.6171000003814697 0.07519999891519547";
ProtoInstance1377.fieldValue[1] = fieldValue1379;

fieldValue1367.children[3] = ProtoInstance1377;

let ProtoInstance1380 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1380.name = "Site";
ProtoInstance1380.DEF = "hanim_supramenton";
let fieldValue1381 = browser.currentScene.createNode("fieldValue");
fieldValue1381.name = "name";
fieldValue1381.value = "supramenton";
ProtoInstance1380.fieldValue = new MFNode();

ProtoInstance1380.fieldValue[0] = fieldValue1381;

let fieldValue1382 = browser.currentScene.createNode("fieldValue");
fieldValue1382.name = "translation";
fieldValue1382.value = "0.006099999882280827 1.5410000085830688 0.08049999922513962";
ProtoInstance1380.fieldValue[1] = fieldValue1382;

fieldValue1367.children[4] = ProtoInstance1380;

let ProtoInstance1383 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1383.name = "Site";
ProtoInstance1383.DEF = "hanim_r_tragion";
let fieldValue1384 = browser.currentScene.createNode("fieldValue");
fieldValue1384.name = "name";
fieldValue1384.value = "r_tragion";
ProtoInstance1383.fieldValue = new MFNode();

ProtoInstance1383.fieldValue[0] = fieldValue1384;

let fieldValue1385 = browser.currentScene.createNode("fieldValue");
fieldValue1385.name = "translation";
fieldValue1385.value = "-0.06459999829530716 1.6346999406814575 0.03020000085234642";
ProtoInstance1383.fieldValue[1] = fieldValue1385;

fieldValue1367.children[5] = ProtoInstance1383;

let ProtoInstance1386 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1386.name = "Site";
ProtoInstance1386.DEF = "hanim_r_gonion";
let fieldValue1387 = browser.currentScene.createNode("fieldValue");
fieldValue1387.name = "name";
fieldValue1387.value = "r_gonion";
ProtoInstance1386.fieldValue = new MFNode();

ProtoInstance1386.fieldValue[0] = fieldValue1387;

let fieldValue1388 = browser.currentScene.createNode("fieldValue");
fieldValue1388.name = "translation";
fieldValue1388.value = "-0.052000001072883606 1.552899956703186 0.034699998795986176";
ProtoInstance1386.fieldValue[1] = fieldValue1388;

fieldValue1367.children[6] = ProtoInstance1386;

let ProtoInstance1389 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1389.name = "Site";
ProtoInstance1389.DEF = "hanim_l_tragion";
let fieldValue1390 = browser.currentScene.createNode("fieldValue");
fieldValue1390.name = "name";
fieldValue1390.value = "l_tragion";
ProtoInstance1389.fieldValue = new MFNode();

ProtoInstance1389.fieldValue[0] = fieldValue1390;

let fieldValue1391 = browser.currentScene.createNode("fieldValue");
fieldValue1391.name = "translation";
fieldValue1391.value = "0.0738999992609024 1.6347999572753906 0.028200000524520874";
ProtoInstance1389.fieldValue[1] = fieldValue1391;

fieldValue1367.children[7] = ProtoInstance1389;

let ProtoInstance1392 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1392.name = "Site";
ProtoInstance1392.DEF = "hanim_l_gonion";
let fieldValue1393 = browser.currentScene.createNode("fieldValue");
fieldValue1393.name = "name";
fieldValue1393.value = "l_gonion";
ProtoInstance1392.fieldValue = new MFNode();

ProtoInstance1392.fieldValue[0] = fieldValue1393;

let fieldValue1394 = browser.currentScene.createNode("fieldValue");
fieldValue1394.name = "translation";
fieldValue1394.value = "0.06310000270605087 1.5529999732971191 0.032999999821186066";
ProtoInstance1392.fieldValue[1] = fieldValue1394;

fieldValue1367.children[8] = ProtoInstance1392;

let ProtoInstance1395 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1395.name = "Site";
ProtoInstance1395.DEF = "hanim_nuchale";
let fieldValue1396 = browser.currentScene.createNode("fieldValue");
fieldValue1396.name = "name";
fieldValue1396.value = "nuchale";
ProtoInstance1395.fieldValue = new MFNode();

ProtoInstance1395.fieldValue[0] = fieldValue1396;

let fieldValue1397 = browser.currentScene.createNode("fieldValue");
fieldValue1397.name = "translation";
fieldValue1397.value = "0.0038999998942017555 1.5972000360488892 -0.07959999889135361";
ProtoInstance1395.fieldValue[1] = fieldValue1397;

fieldValue1367.children[9] = ProtoInstance1395;

ProtoInstance1365.fieldValue[1] = fieldValue1367;

fieldValue1364.children = new MFNode();

fieldValue1364.children[0] = ProtoInstance1365;

ProtoInstance1360.fieldValue[3] = fieldValue1364;

fieldValue1359.children = new MFNode();

fieldValue1359.children[0] = ProtoInstance1360;

let ProtoInstance1398 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1398.name = "Joint";
ProtoInstance1398.DEF = "hanim_l_shoulder";
let fieldValue1399 = browser.currentScene.createNode("fieldValue");
fieldValue1399.name = "stiffness";
fieldValue1399.value = "1 1 1";
ProtoInstance1398.fieldValue = new MFNode();

ProtoInstance1398.fieldValue[0] = fieldValue1399;

let fieldValue1400 = browser.currentScene.createNode("fieldValue");
fieldValue1400.name = "name";
fieldValue1400.value = "l_shoulder";
ProtoInstance1398.fieldValue[1] = fieldValue1400;

let fieldValue1401 = browser.currentScene.createNode("fieldValue");
fieldValue1401.name = "center";
fieldValue1401.value = "0.2029000073671341 1.437600016593933 -0.03869999945163727";
ProtoInstance1398.fieldValue[2] = fieldValue1401;

let fieldValue1402 = browser.currentScene.createNode("fieldValue");
fieldValue1402.name = "children";
let ProtoInstance1403 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1403.name = "Joint";
ProtoInstance1403.DEF = "hanim_l_elbow";
let fieldValue1404 = browser.currentScene.createNode("fieldValue");
fieldValue1404.name = "stiffness";
fieldValue1404.value = "1 1 1";
ProtoInstance1403.fieldValue = new MFNode();

ProtoInstance1403.fieldValue[0] = fieldValue1404;

let fieldValue1405 = browser.currentScene.createNode("fieldValue");
fieldValue1405.name = "name";
fieldValue1405.value = "l_elbow";
ProtoInstance1403.fieldValue[1] = fieldValue1405;

let fieldValue1406 = browser.currentScene.createNode("fieldValue");
fieldValue1406.name = "center";
fieldValue1406.value = "0.2013999968767166 1.135699987411499 -0.0681999996304512";
ProtoInstance1403.fieldValue[2] = fieldValue1406;

let fieldValue1407 = browser.currentScene.createNode("fieldValue");
fieldValue1407.name = "children";
let ProtoInstance1408 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1408.name = "Joint";
ProtoInstance1408.DEF = "hanim_l_radiocarpal";
let fieldValue1409 = browser.currentScene.createNode("fieldValue");
fieldValue1409.name = "stiffness";
fieldValue1409.value = "1 1 1";
ProtoInstance1408.fieldValue = new MFNode();

ProtoInstance1408.fieldValue[0] = fieldValue1409;

let fieldValue1410 = browser.currentScene.createNode("fieldValue");
fieldValue1410.name = "name";
fieldValue1410.value = "l_radiocarpal";
ProtoInstance1408.fieldValue[1] = fieldValue1410;

let fieldValue1411 = browser.currentScene.createNode("fieldValue");
fieldValue1411.name = "center";
fieldValue1411.value = "0.19840000569820404 0.8662999868392944 -0.05829999968409538";
ProtoInstance1408.fieldValue[2] = fieldValue1411;

let fieldValue1412 = browser.currentScene.createNode("fieldValue");
fieldValue1412.name = "children";
let ProtoInstance1413 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1413.name = "Segment";
ProtoInstance1413.DEF = "hanim_l_hand";
let fieldValue1414 = browser.currentScene.createNode("fieldValue");
fieldValue1414.name = "name";
fieldValue1414.value = "l_hand";
ProtoInstance1413.fieldValue = new MFNode();

ProtoInstance1413.fieldValue[0] = fieldValue1414;

let fieldValue1415 = browser.currentScene.createNode("fieldValue");
fieldValue1415.name = "children";
let ProtoInstance1416 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1416.name = "Site";
ProtoInstance1416.DEF = "hanim_l_hand_tip";
let fieldValue1417 = browser.currentScene.createNode("fieldValue");
fieldValue1417.name = "name";
fieldValue1417.value = "l_hand_tip";
ProtoInstance1416.fieldValue = new MFNode();

ProtoInstance1416.fieldValue[0] = fieldValue1417;

let fieldValue1418 = browser.currentScene.createNode("fieldValue");
fieldValue1418.name = "translation";
fieldValue1418.value = "0.20800000429153442 0.6730999946594238 -0.04910000041127205";
ProtoInstance1416.fieldValue[1] = fieldValue1418;

fieldValue1415.children = new MFNode();

fieldValue1415.children[0] = ProtoInstance1416;

let ProtoInstance1419 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1419.name = "Site";
ProtoInstance1419.DEF = "hanim_l_metacarpal_phalanx_2";
let fieldValue1420 = browser.currentScene.createNode("fieldValue");
fieldValue1420.name = "name";
fieldValue1420.value = "l_metacarpal_phalanx_2";
ProtoInstance1419.fieldValue = new MFNode();

ProtoInstance1419.fieldValue[0] = fieldValue1420;

let fieldValue1421 = browser.currentScene.createNode("fieldValue");
fieldValue1421.name = "translation";
fieldValue1421.value = "0.20090000331401825 0.8138999938964844 -0.02370000071823597";
ProtoInstance1419.fieldValue[1] = fieldValue1421;

fieldValue1415.children[1] = ProtoInstance1419;

let ProtoInstance1422 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1422.name = "Site";
ProtoInstance1422.DEF = "hanim_l_dactylion";
let fieldValue1423 = browser.currentScene.createNode("fieldValue");
fieldValue1423.name = "name";
fieldValue1423.value = "l_dactylion";
ProtoInstance1422.fieldValue = new MFNode();

ProtoInstance1422.fieldValue[0] = fieldValue1423;

let fieldValue1424 = browser.currentScene.createNode("fieldValue");
fieldValue1424.name = "translation";
fieldValue1424.value = "0.20559999346733093 0.6743000149726868 -0.04820000007748604";
ProtoInstance1422.fieldValue[1] = fieldValue1424;

fieldValue1415.children[2] = ProtoInstance1422;

let ProtoInstance1425 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1425.name = "Site";
ProtoInstance1425.DEF = "hanim_l_ulnar_styloid";
let fieldValue1426 = browser.currentScene.createNode("fieldValue");
fieldValue1426.name = "name";
fieldValue1426.value = "l_ulnar_styloid";
ProtoInstance1425.fieldValue = new MFNode();

ProtoInstance1425.fieldValue[0] = fieldValue1426;

let fieldValue1427 = browser.currentScene.createNode("fieldValue");
fieldValue1427.name = "translation";
fieldValue1427.value = "-0.2142000049352646 0.8529000282287598 -0.06480000168085098";
ProtoInstance1425.fieldValue[1] = fieldValue1427;

fieldValue1415.children[3] = ProtoInstance1425;

let ProtoInstance1428 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1428.name = "Site";
ProtoInstance1428.DEF = "hanim_l_metacarpal_phalanx_5";
let fieldValue1429 = browser.currentScene.createNode("fieldValue");
fieldValue1429.name = "name";
fieldValue1429.value = "l_metacarpal_phalanx_5";
ProtoInstance1428.fieldValue = new MFNode();

ProtoInstance1428.fieldValue[0] = fieldValue1429;

let fieldValue1430 = browser.currentScene.createNode("fieldValue");
fieldValue1430.name = "translation";
fieldValue1430.value = "0.19290000200271606 0.7860000133514404 -0.11219999939203262";
ProtoInstance1428.fieldValue[1] = fieldValue1430;

fieldValue1415.children[4] = ProtoInstance1428;

ProtoInstance1413.fieldValue[1] = fieldValue1415;

fieldValue1412.children = new MFNode();

fieldValue1412.children[0] = ProtoInstance1413;

ProtoInstance1408.fieldValue[3] = fieldValue1412;

fieldValue1407.children = new MFNode();

fieldValue1407.children[0] = ProtoInstance1408;

let ProtoInstance1431 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1431.name = "Segment";
ProtoInstance1431.DEF = "hanim_l_forearm";
let fieldValue1432 = browser.currentScene.createNode("fieldValue");
fieldValue1432.name = "name";
fieldValue1432.value = "l_forearm";
ProtoInstance1431.fieldValue = new MFNode();

ProtoInstance1431.fieldValue[0] = fieldValue1432;

let fieldValue1433 = browser.currentScene.createNode("fieldValue");
fieldValue1433.name = "children";
let ProtoInstance1434 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1434.name = "Site";
ProtoInstance1434.DEF = "hanim_l_radial_styloid";
let fieldValue1435 = browser.currentScene.createNode("fieldValue");
fieldValue1435.name = "name";
fieldValue1435.value = "l_radial_styloid";
ProtoInstance1434.fieldValue = new MFNode();

ProtoInstance1434.fieldValue[0] = fieldValue1435;

let fieldValue1436 = browser.currentScene.createNode("fieldValue");
fieldValue1436.name = "translation";
fieldValue1436.value = "0.19009999930858612 0.8644999861717224 -0.04149999842047691";
ProtoInstance1434.fieldValue[1] = fieldValue1436;

fieldValue1433.children = new MFNode();

fieldValue1433.children[0] = ProtoInstance1434;

let ProtoInstance1437 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1437.name = "Site";
ProtoInstance1437.DEF = "hanim_l_olecranon";
let fieldValue1438 = browser.currentScene.createNode("fieldValue");
fieldValue1438.name = "name";
fieldValue1438.value = "l_olecranon";
ProtoInstance1437.fieldValue = new MFNode();

ProtoInstance1437.fieldValue[0] = fieldValue1438;

let fieldValue1439 = browser.currentScene.createNode("fieldValue");
fieldValue1439.name = "translation";
fieldValue1439.value = "-0.19619999825954437 1.1375000476837158 -0.11230000108480453";
ProtoInstance1437.fieldValue[1] = fieldValue1439;

fieldValue1433.children[1] = ProtoInstance1437;

let ProtoInstance1440 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1440.name = "Site";
ProtoInstance1440.DEF = "hanim_l_humeral_medial_epicondyles";
let fieldValue1441 = browser.currentScene.createNode("fieldValue");
fieldValue1441.name = "name";
fieldValue1441.value = "l_humeral_medial_epicondyles";
ProtoInstance1440.fieldValue = new MFNode();

ProtoInstance1440.fieldValue[0] = fieldValue1441;

let fieldValue1442 = browser.currentScene.createNode("fieldValue");
fieldValue1442.name = "translation";
fieldValue1442.value = "0.17350000143051147 1.1272000074386597 -0.11129999905824661";
ProtoInstance1440.fieldValue[1] = fieldValue1442;

fieldValue1433.children[2] = ProtoInstance1440;

let ProtoInstance1443 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1443.name = "Site";
ProtoInstance1443.DEF = "hanim_l_radiale";
let fieldValue1444 = browser.currentScene.createNode("fieldValue");
fieldValue1444.name = "name";
fieldValue1444.value = "l_radiale";
ProtoInstance1443.fieldValue = new MFNode();

ProtoInstance1443.fieldValue[0] = fieldValue1444;

let fieldValue1445 = browser.currentScene.createNode("fieldValue");
fieldValue1445.name = "translation";
fieldValue1445.value = "0.21819999814033508 1.1211999654769897 -0.11670000106096268";
ProtoInstance1443.fieldValue[1] = fieldValue1445;

fieldValue1433.children[3] = ProtoInstance1443;

ProtoInstance1431.fieldValue[1] = fieldValue1433;

fieldValue1407.children[1] = ProtoInstance1431;

ProtoInstance1403.fieldValue[3] = fieldValue1407;

fieldValue1402.children = new MFNode();

fieldValue1402.children[0] = ProtoInstance1403;

let ProtoInstance1446 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1446.name = "Segment";
ProtoInstance1446.DEF = "hanim_l_upperarm";
let fieldValue1447 = browser.currentScene.createNode("fieldValue");
fieldValue1447.name = "name";
fieldValue1447.value = "l_upperarm";
ProtoInstance1446.fieldValue = new MFNode();

ProtoInstance1446.fieldValue[0] = fieldValue1447;

let fieldValue1448 = browser.currentScene.createNode("fieldValue");
fieldValue1448.name = "children";
let ProtoInstance1449 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1449.name = "Site";
ProtoInstance1449.DEF = "hanim_l_humeral_lateral_epicondyles";
let fieldValue1450 = browser.currentScene.createNode("fieldValue");
fieldValue1450.name = "name";
fieldValue1450.value = "l_humeral_lateral_epicondyles";
ProtoInstance1449.fieldValue = new MFNode();

ProtoInstance1449.fieldValue[0] = fieldValue1450;

let fieldValue1451 = browser.currentScene.createNode("fieldValue");
fieldValue1451.name = "translation";
fieldValue1451.value = "0.2280000001192093 1.1482000350952148 -0.10999999940395355";
ProtoInstance1449.fieldValue[1] = fieldValue1451;

fieldValue1448.children = new MFNode();

fieldValue1448.children[0] = ProtoInstance1449;

ProtoInstance1446.fieldValue[1] = fieldValue1448;

fieldValue1402.children[1] = ProtoInstance1446;

ProtoInstance1398.fieldValue[3] = fieldValue1402;

fieldValue1359.children[1] = ProtoInstance1398;

let ProtoInstance1452 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1452.name = "Joint";
ProtoInstance1452.DEF = "hanim_r_shoulder";
let fieldValue1453 = browser.currentScene.createNode("fieldValue");
fieldValue1453.name = "stiffness";
fieldValue1453.value = "1 1 1";
ProtoInstance1452.fieldValue = new MFNode();

ProtoInstance1452.fieldValue[0] = fieldValue1453;

let fieldValue1454 = browser.currentScene.createNode("fieldValue");
fieldValue1454.name = "name";
fieldValue1454.value = "r_shoulder";
ProtoInstance1452.fieldValue[1] = fieldValue1454;

let fieldValue1455 = browser.currentScene.createNode("fieldValue");
fieldValue1455.name = "center";
fieldValue1455.value = "-0.1906999945640564 1.4407000541687012 -0.032499998807907104";
ProtoInstance1452.fieldValue[2] = fieldValue1455;

let fieldValue1456 = browser.currentScene.createNode("fieldValue");
fieldValue1456.name = "children";
let ProtoInstance1457 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1457.name = "Joint";
ProtoInstance1457.DEF = "hanim_r_elbow";
let fieldValue1458 = browser.currentScene.createNode("fieldValue");
fieldValue1458.name = "stiffness";
fieldValue1458.value = "1 1 1";
ProtoInstance1457.fieldValue = new MFNode();

ProtoInstance1457.fieldValue[0] = fieldValue1458;

let fieldValue1459 = browser.currentScene.createNode("fieldValue");
fieldValue1459.name = "name";
fieldValue1459.value = "r_elbow";
ProtoInstance1457.fieldValue[1] = fieldValue1459;

let fieldValue1460 = browser.currentScene.createNode("fieldValue");
fieldValue1460.name = "center";
fieldValue1460.value = "-0.1949000060558319 1.138800024986267 -0.06199999898672104";
ProtoInstance1457.fieldValue[2] = fieldValue1460;

let fieldValue1461 = browser.currentScene.createNode("fieldValue");
fieldValue1461.name = "children";
let ProtoInstance1462 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1462.name = "Joint";
ProtoInstance1462.DEF = "hanim_r_radiocarpal";
let fieldValue1463 = browser.currentScene.createNode("fieldValue");
fieldValue1463.name = "stiffness";
fieldValue1463.value = "1 1 1";
ProtoInstance1462.fieldValue = new MFNode();

ProtoInstance1462.fieldValue[0] = fieldValue1463;

let fieldValue1464 = browser.currentScene.createNode("fieldValue");
fieldValue1464.name = "name";
fieldValue1464.value = "r_radiocarpal";
ProtoInstance1462.fieldValue[1] = fieldValue1464;

let fieldValue1465 = browser.currentScene.createNode("fieldValue");
fieldValue1465.name = "center";
fieldValue1465.value = "-0.19589999318122864 0.8694000244140625 -0.05209999904036522";
ProtoInstance1462.fieldValue[2] = fieldValue1465;

let fieldValue1466 = browser.currentScene.createNode("fieldValue");
fieldValue1466.name = "children";
let ProtoInstance1467 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1467.name = "Segment";
ProtoInstance1467.DEF = "hanim_r_hand";
let fieldValue1468 = browser.currentScene.createNode("fieldValue");
fieldValue1468.name = "name";
fieldValue1468.value = "r_hand";
ProtoInstance1467.fieldValue = new MFNode();

ProtoInstance1467.fieldValue[0] = fieldValue1468;

let fieldValue1469 = browser.currentScene.createNode("fieldValue");
fieldValue1469.name = "children";
let ProtoInstance1470 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1470.name = "Site";
ProtoInstance1470.DEF = "hanim_r_hand_tip";
let fieldValue1471 = browser.currentScene.createNode("fieldValue");
fieldValue1471.name = "name";
fieldValue1471.value = "r_hand_tip";
ProtoInstance1470.fieldValue = new MFNode();

ProtoInstance1470.fieldValue[0] = fieldValue1471;

let fieldValue1472 = browser.currentScene.createNode("fieldValue");
fieldValue1472.name = "translation";
fieldValue1472.value = "-0.19689999520778656 0.6758000254631042 -0.04270000010728836";
ProtoInstance1470.fieldValue[1] = fieldValue1472;

fieldValue1469.children = new MFNode();

fieldValue1469.children[0] = ProtoInstance1470;

let ProtoInstance1473 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1473.name = "Site";
ProtoInstance1473.DEF = "hanim_r_metacarpal_phalanx_2";
let fieldValue1474 = browser.currentScene.createNode("fieldValue");
fieldValue1474.name = "name";
fieldValue1474.value = "r_metacarpal_phalanx_2";
ProtoInstance1473.fieldValue = new MFNode();

ProtoInstance1473.fieldValue[0] = fieldValue1474;

let fieldValue1475 = browser.currentScene.createNode("fieldValue");
fieldValue1475.name = "translation";
fieldValue1475.value = "-0.19769999384880066 0.8169000148773193 -0.01769999973475933";
ProtoInstance1473.fieldValue[1] = fieldValue1475;

fieldValue1469.children[1] = ProtoInstance1473;

let ProtoInstance1476 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1476.name = "Site";
ProtoInstance1476.DEF = "hanim_r_dactylion";
let fieldValue1477 = browser.currentScene.createNode("fieldValue");
fieldValue1477.name = "name";
fieldValue1477.value = "r_dactylion";
ProtoInstance1476.fieldValue = new MFNode();

ProtoInstance1476.fieldValue[0] = fieldValue1477;

let fieldValue1478 = browser.currentScene.createNode("fieldValue");
fieldValue1478.name = "translation";
fieldValue1478.value = "-0.1941000074148178 0.6772000193595886 -0.04230000078678131";
ProtoInstance1476.fieldValue[1] = fieldValue1478;

fieldValue1469.children[2] = ProtoInstance1476;

let ProtoInstance1479 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1479.name = "Site";
ProtoInstance1479.DEF = "hanim_r_ulnar_styloid";
let fieldValue1480 = browser.currentScene.createNode("fieldValue");
fieldValue1480.name = "name";
fieldValue1480.value = "r_ulnar_styloid";
ProtoInstance1479.fieldValue = new MFNode();

ProtoInstance1479.fieldValue[0] = fieldValue1480;

let fieldValue1481 = browser.currentScene.createNode("fieldValue");
fieldValue1481.name = "translation";
fieldValue1481.value = "-0.21170000731945038 0.8561999797821045 -0.058400001376867294";
ProtoInstance1479.fieldValue[1] = fieldValue1481;

fieldValue1469.children[3] = ProtoInstance1479;

let ProtoInstance1482 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1482.name = "Site";
ProtoInstance1482.DEF = "hanim_r_metacarpal_phalanx_5";
let fieldValue1483 = browser.currentScene.createNode("fieldValue");
fieldValue1483.name = "name";
fieldValue1483.value = "r_metacarpal_phalanx_5";
ProtoInstance1482.fieldValue = new MFNode();

ProtoInstance1482.fieldValue[0] = fieldValue1483;

let fieldValue1484 = browser.currentScene.createNode("fieldValue");
fieldValue1484.name = "translation";
fieldValue1484.value = "-0.19290000200271606 0.7889999747276306 -0.10639999806880951";
ProtoInstance1482.fieldValue[1] = fieldValue1484;

fieldValue1469.children[4] = ProtoInstance1482;

ProtoInstance1467.fieldValue[1] = fieldValue1469;

fieldValue1466.children = new MFNode();

fieldValue1466.children[0] = ProtoInstance1467;

ProtoInstance1462.fieldValue[3] = fieldValue1466;

fieldValue1461.children = new MFNode();

fieldValue1461.children[0] = ProtoInstance1462;

let ProtoInstance1485 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1485.name = "Segment";
ProtoInstance1485.DEF = "hanim_r_forearm";
let fieldValue1486 = browser.currentScene.createNode("fieldValue");
fieldValue1486.name = "name";
fieldValue1486.value = "r_forearm";
ProtoInstance1485.fieldValue = new MFNode();

ProtoInstance1485.fieldValue[0] = fieldValue1486;

let fieldValue1487 = browser.currentScene.createNode("fieldValue");
fieldValue1487.name = "children";
let ProtoInstance1488 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1488.name = "Site";
ProtoInstance1488.DEF = "hanim_r_radial_styloid";
let fieldValue1489 = browser.currentScene.createNode("fieldValue");
fieldValue1489.name = "name";
fieldValue1489.value = "r_radial_styloid";
ProtoInstance1488.fieldValue = new MFNode();

ProtoInstance1488.fieldValue[0] = fieldValue1489;

let fieldValue1490 = browser.currentScene.createNode("fieldValue");
fieldValue1490.name = "translation";
fieldValue1490.value = "-0.188400000333786 0.8676000237464905 -0.035999998450279236";
ProtoInstance1488.fieldValue[1] = fieldValue1490;

fieldValue1487.children = new MFNode();

fieldValue1487.children[0] = ProtoInstance1488;

let ProtoInstance1491 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1491.name = "Site";
ProtoInstance1491.DEF = "hanim_r_olecranon";
let fieldValue1492 = browser.currentScene.createNode("fieldValue");
fieldValue1492.name = "name";
fieldValue1492.value = "r_olecranon";
ProtoInstance1491.fieldValue = new MFNode();

ProtoInstance1491.fieldValue[0] = fieldValue1492;

let fieldValue1493 = browser.currentScene.createNode("fieldValue");
fieldValue1493.name = "translation";
fieldValue1493.value = "-0.1906999945640564 1.1404999494552612 -0.10649999976158142";
ProtoInstance1491.fieldValue[1] = fieldValue1493;

fieldValue1487.children[1] = ProtoInstance1491;

let ProtoInstance1494 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1494.name = "Site";
ProtoInstance1494.DEF = "hanim_r_humeral_medial_epicondyles";
let fieldValue1495 = browser.currentScene.createNode("fieldValue");
fieldValue1495.name = "name";
fieldValue1495.value = "r_humeral_medial_epicondyles";
ProtoInstance1494.fieldValue = new MFNode();

ProtoInstance1494.fieldValue[0] = fieldValue1495;

let fieldValue1496 = browser.currentScene.createNode("fieldValue");
fieldValue1496.name = "translation";
fieldValue1496.value = "-0.1679999977350235 1.1297999620437622 -0.10620000213384628";
ProtoInstance1494.fieldValue[1] = fieldValue1496;

fieldValue1487.children[2] = ProtoInstance1494;

let ProtoInstance1497 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1497.name = "Site";
ProtoInstance1497.DEF = "hanim_r_radiale";
let fieldValue1498 = browser.currentScene.createNode("fieldValue");
fieldValue1498.name = "name";
fieldValue1498.value = "r_radiale";
ProtoInstance1497.fieldValue = new MFNode();

ProtoInstance1497.fieldValue[0] = fieldValue1498;

let fieldValue1499 = browser.currentScene.createNode("fieldValue");
fieldValue1499.name = "translation";
fieldValue1499.value = "-0.21299999952316284 1.1304999589920044 -0.10909999907016754";
ProtoInstance1497.fieldValue[1] = fieldValue1499;

fieldValue1487.children[3] = ProtoInstance1497;

ProtoInstance1485.fieldValue[1] = fieldValue1487;

fieldValue1461.children[1] = ProtoInstance1485;

ProtoInstance1457.fieldValue[3] = fieldValue1461;

fieldValue1456.children = new MFNode();

fieldValue1456.children[0] = ProtoInstance1457;

let ProtoInstance1500 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1500.name = "Segment";
ProtoInstance1500.DEF = "hanim_r_upperarm";
let fieldValue1501 = browser.currentScene.createNode("fieldValue");
fieldValue1501.name = "name";
fieldValue1501.value = "r_upperarm";
ProtoInstance1500.fieldValue = new MFNode();

ProtoInstance1500.fieldValue[0] = fieldValue1501;

let fieldValue1502 = browser.currentScene.createNode("fieldValue");
fieldValue1502.name = "children";
let ProtoInstance1503 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1503.name = "Site";
ProtoInstance1503.DEF = "hanim_r_humeral_lateral_epicondyles";
let fieldValue1504 = browser.currentScene.createNode("fieldValue");
fieldValue1504.name = "name";
fieldValue1504.value = "r_humeral_lateral_epicondyles";
ProtoInstance1503.fieldValue = new MFNode();

ProtoInstance1503.fieldValue[0] = fieldValue1504;

let fieldValue1505 = browser.currentScene.createNode("fieldValue");
fieldValue1505.name = "translation";
fieldValue1505.value = "-0.2223999947309494 1.1517000198364258 -0.10329999774694443";
ProtoInstance1503.fieldValue[1] = fieldValue1505;

fieldValue1502.children = new MFNode();

fieldValue1502.children[0] = ProtoInstance1503;

ProtoInstance1500.fieldValue[1] = fieldValue1502;

fieldValue1456.children[1] = ProtoInstance1500;

ProtoInstance1452.fieldValue[3] = fieldValue1456;

fieldValue1359.children[2] = ProtoInstance1452;

let ProtoInstance1506 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1506.name = "Segment";
ProtoInstance1506.DEF = "hanim_l5";
let fieldValue1507 = browser.currentScene.createNode("fieldValue");
fieldValue1507.name = "name";
fieldValue1507.value = "l5";
ProtoInstance1506.fieldValue = new MFNode();

ProtoInstance1506.fieldValue[0] = fieldValue1507;

let fieldValue1508 = browser.currentScene.createNode("fieldValue");
fieldValue1508.name = "children";
let ProtoInstance1509 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1509.name = "Site";
ProtoInstance1509.DEF = "hanim_r_clavicale";
let fieldValue1510 = browser.currentScene.createNode("fieldValue");
fieldValue1510.name = "name";
fieldValue1510.value = "r_clavicale";
ProtoInstance1509.fieldValue = new MFNode();

ProtoInstance1509.fieldValue[0] = fieldValue1510;

let fieldValue1511 = browser.currentScene.createNode("fieldValue");
fieldValue1511.name = "translation";
fieldValue1511.value = "-0.011500000022351742 1.4943000078201294 0.03999999910593033";
ProtoInstance1509.fieldValue[1] = fieldValue1511;

fieldValue1508.children = new MFNode();

fieldValue1508.children[0] = ProtoInstance1509;

let ProtoInstance1512 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1512.name = "Site";
ProtoInstance1512.DEF = "hanim_suprasternale";
let fieldValue1513 = browser.currentScene.createNode("fieldValue");
fieldValue1513.name = "name";
fieldValue1513.value = "suprasternale";
ProtoInstance1512.fieldValue = new MFNode();

ProtoInstance1512.fieldValue[0] = fieldValue1513;

let fieldValue1514 = browser.currentScene.createNode("fieldValue");
fieldValue1514.name = "translation";
fieldValue1514.value = "0.00839999970048666 1.4714000225067139 0.05510000139474869";
ProtoInstance1512.fieldValue[1] = fieldValue1514;

fieldValue1508.children[1] = ProtoInstance1512;

let ProtoInstance1515 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1515.name = "Site";
ProtoInstance1515.DEF = "hanim_l_clavicale";
let fieldValue1516 = browser.currentScene.createNode("fieldValue");
fieldValue1516.name = "name";
fieldValue1516.value = "l_clavicale";
ProtoInstance1515.fieldValue = new MFNode();

ProtoInstance1515.fieldValue[0] = fieldValue1516;

let fieldValue1517 = browser.currentScene.createNode("fieldValue");
fieldValue1517.name = "translation";
fieldValue1517.value = "0.02710000053048134 1.4943000078201294 0.039400000125169754";
ProtoInstance1515.fieldValue[1] = fieldValue1517;

fieldValue1508.children[2] = ProtoInstance1515;

let ProtoInstance1518 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1518.name = "Site";
ProtoInstance1518.DEF = "hanim_r_thelion";
let fieldValue1519 = browser.currentScene.createNode("fieldValue");
fieldValue1519.name = "name";
fieldValue1519.value = "r_thelion";
ProtoInstance1518.fieldValue = new MFNode();

ProtoInstance1518.fieldValue[0] = fieldValue1519;

let fieldValue1520 = browser.currentScene.createNode("fieldValue");
fieldValue1520.name = "translation";
fieldValue1520.value = "-0.07360000163316727 1.3385000228881836 0.1216999962925911";
ProtoInstance1518.fieldValue[1] = fieldValue1520;

fieldValue1508.children[3] = ProtoInstance1518;

let ProtoInstance1521 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1521.name = "Site";
ProtoInstance1521.DEF = "hanim_l_thelion";
let fieldValue1522 = browser.currentScene.createNode("fieldValue");
fieldValue1522.name = "name";
fieldValue1522.value = "l_thelion";
ProtoInstance1521.fieldValue = new MFNode();

ProtoInstance1521.fieldValue[0] = fieldValue1522;

let fieldValue1523 = browser.currentScene.createNode("fieldValue");
fieldValue1523.name = "translation";
fieldValue1523.value = "0.09179999679327011 1.3381999731063843 0.11919999867677689";
ProtoInstance1521.fieldValue[1] = fieldValue1523;

fieldValue1508.children[4] = ProtoInstance1521;

let ProtoInstance1524 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1524.name = "Site";
ProtoInstance1524.DEF = "hanim_substernale";
let fieldValue1525 = browser.currentScene.createNode("fieldValue");
fieldValue1525.name = "name";
fieldValue1525.value = "substernale";
ProtoInstance1524.fieldValue = new MFNode();

ProtoInstance1524.fieldValue[0] = fieldValue1525;

let fieldValue1526 = browser.currentScene.createNode("fieldValue");
fieldValue1526.name = "translation";
fieldValue1526.value = "0.008500000461935997 1.2994999885559082 0.11469999700784683";
ProtoInstance1524.fieldValue[1] = fieldValue1526;

fieldValue1508.children[5] = ProtoInstance1524;

let ProtoInstance1527 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1527.name = "Site";
ProtoInstance1527.DEF = "hanim_r_rib10";
let fieldValue1528 = browser.currentScene.createNode("fieldValue");
fieldValue1528.name = "name";
fieldValue1528.value = "r_rib10";
ProtoInstance1527.fieldValue = new MFNode();

ProtoInstance1527.fieldValue[0] = fieldValue1528;

let fieldValue1529 = browser.currentScene.createNode("fieldValue");
fieldValue1529.name = "translation";
fieldValue1529.value = "-0.07109999656677246 1.194100022315979 0.10159999877214432";
ProtoInstance1527.fieldValue[1] = fieldValue1529;

fieldValue1508.children[6] = ProtoInstance1527;

let ProtoInstance1530 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1530.name = "Site";
ProtoInstance1530.DEF = "hanim_l_rib10";
let fieldValue1531 = browser.currentScene.createNode("fieldValue");
fieldValue1531.name = "name";
fieldValue1531.value = "l_rib10";
ProtoInstance1530.fieldValue = new MFNode();

ProtoInstance1530.fieldValue[0] = fieldValue1531;

let fieldValue1532 = browser.currentScene.createNode("fieldValue");
fieldValue1532.name = "translation";
fieldValue1532.value = "0.08709999918937683 1.1924999952316284 0.09920000284910202";
ProtoInstance1530.fieldValue[1] = fieldValue1532;

fieldValue1508.children[7] = ProtoInstance1530;

let ProtoInstance1533 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1533.name = "Site";
ProtoInstance1533.DEF = "hanim_cervicale";
let fieldValue1534 = browser.currentScene.createNode("fieldValue");
fieldValue1534.name = "name";
fieldValue1534.value = "cervicale";
ProtoInstance1533.fieldValue = new MFNode();

ProtoInstance1533.fieldValue[0] = fieldValue1534;

let fieldValue1535 = browser.currentScene.createNode("fieldValue");
fieldValue1535.name = "translation";
fieldValue1535.value = "0.006399999838322401 1.5199999809265137 -0.08150000125169754";
ProtoInstance1533.fieldValue[1] = fieldValue1535;

fieldValue1508.children[8] = ProtoInstance1533;

let ProtoInstance1536 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1536.name = "Site";
ProtoInstance1536.DEF = "hanim_spine_2_lower_back";
let fieldValue1537 = browser.currentScene.createNode("fieldValue");
fieldValue1537.name = "name";
fieldValue1537.value = "spine_2_lower_back";
ProtoInstance1536.fieldValue = new MFNode();

ProtoInstance1536.fieldValue[0] = fieldValue1537;

let fieldValue1538 = browser.currentScene.createNode("fieldValue");
fieldValue1538.name = "translation";
fieldValue1538.value = "0.004900000058114529 1.1907999515533447 -0.11129999905824661";
ProtoInstance1536.fieldValue[1] = fieldValue1538;

fieldValue1508.children[9] = ProtoInstance1536;

let ProtoInstance1539 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1539.name = "Site";
ProtoInstance1539.DEF = "hanim_waist_preferred_posterior";
let fieldValue1540 = browser.currentScene.createNode("fieldValue");
fieldValue1540.name = "name";
fieldValue1540.value = "waist_preferred_posterior";
ProtoInstance1539.fieldValue = new MFNode();

ProtoInstance1539.fieldValue[0] = fieldValue1540;

let fieldValue1541 = browser.currentScene.createNode("fieldValue");
fieldValue1541.name = "translation";
fieldValue1541.value = "0.28999999165534973 1.0915000438690186 -0.10909999907016754";
ProtoInstance1539.fieldValue[1] = fieldValue1541;

fieldValue1508.children[10] = ProtoInstance1539;

let ProtoInstance1542 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1542.name = "Site";
ProtoInstance1542.DEF = "hanim_r_acromion";
let fieldValue1543 = browser.currentScene.createNode("fieldValue");
fieldValue1543.name = "name";
fieldValue1543.value = "r_acromion";
ProtoInstance1542.fieldValue = new MFNode();

ProtoInstance1542.fieldValue[0] = fieldValue1543;

let fieldValue1544 = browser.currentScene.createNode("fieldValue");
fieldValue1544.name = "translation";
fieldValue1544.value = "-0.19050000607967377 1.479099988937378 -0.04309999942779541";
ProtoInstance1542.fieldValue[1] = fieldValue1544;

fieldValue1508.children[11] = ProtoInstance1542;

let ProtoInstance1545 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1545.name = "Site";
ProtoInstance1545.DEF = "hanim_r_axilla_proximal";
let fieldValue1546 = browser.currentScene.createNode("fieldValue");
fieldValue1546.name = "name";
fieldValue1546.value = "r_axilla_proximal";
ProtoInstance1545.fieldValue = new MFNode();

ProtoInstance1545.fieldValue[0] = fieldValue1546;

let fieldValue1547 = browser.currentScene.createNode("fieldValue");
fieldValue1547.name = "translation";
fieldValue1547.value = "-0.16259999573230743 1.4071999788284302 -0.003100000089034438";
ProtoInstance1545.fieldValue[1] = fieldValue1547;

fieldValue1508.children[12] = ProtoInstance1545;

let ProtoInstance1548 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1548.name = "Site";
ProtoInstance1548.DEF = "hanim_r_axilla_distal";
let fieldValue1549 = browser.currentScene.createNode("fieldValue");
fieldValue1549.name = "name";
fieldValue1549.value = "r_axilla_distal";
ProtoInstance1548.fieldValue = new MFNode();

ProtoInstance1548.fieldValue[0] = fieldValue1549;

let fieldValue1550 = browser.currentScene.createNode("fieldValue");
fieldValue1550.name = "translation";
fieldValue1550.value = "-0.16030000150203705 1.4098000526428223 -0.08259999752044678";
ProtoInstance1548.fieldValue[1] = fieldValue1550;

fieldValue1508.children[13] = ProtoInstance1548;

let ProtoInstance1551 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1551.name = "Site";
ProtoInstance1551.DEF = "hanim_l_acromion";
let fieldValue1552 = browser.currentScene.createNode("fieldValue");
fieldValue1552.name = "name";
fieldValue1552.value = "l_acromion";
ProtoInstance1551.fieldValue = new MFNode();

ProtoInstance1551.fieldValue[0] = fieldValue1552;

let fieldValue1553 = browser.currentScene.createNode("fieldValue");
fieldValue1553.name = "translation";
fieldValue1553.value = "0.20319999754428864 1.4759999513626099 -0.04899999871850014";
ProtoInstance1551.fieldValue[1] = fieldValue1553;

fieldValue1508.children[14] = ProtoInstance1551;

let ProtoInstance1554 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1554.name = "Site";
ProtoInstance1554.DEF = "hanim_l_axilla_proximal";
let fieldValue1555 = browser.currentScene.createNode("fieldValue");
fieldValue1555.name = "name";
fieldValue1555.value = "l_axilla_proximal";
ProtoInstance1554.fieldValue = new MFNode();

ProtoInstance1554.fieldValue[0] = fieldValue1555;

let fieldValue1556 = browser.currentScene.createNode("fieldValue");
fieldValue1556.name = "translation";
fieldValue1556.value = "0.1776999980211258 1.406499981880188 -0.007499999832361937";
ProtoInstance1554.fieldValue[1] = fieldValue1556;

fieldValue1508.children[15] = ProtoInstance1554;

let ProtoInstance1557 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1557.name = "Site";
ProtoInstance1557.DEF = "hanim_l_axilla_distal";
let fieldValue1558 = browser.currentScene.createNode("fieldValue");
fieldValue1558.name = "name";
fieldValue1558.value = "l_axilla_distal";
ProtoInstance1557.fieldValue = new MFNode();

ProtoInstance1557.fieldValue[0] = fieldValue1558;

let fieldValue1559 = browser.currentScene.createNode("fieldValue");
fieldValue1559.name = "translation";
fieldValue1559.value = "0.17059999704360962 1.4071999788284302 -0.08749999850988388";
ProtoInstance1557.fieldValue[1] = fieldValue1559;

fieldValue1508.children[16] = ProtoInstance1557;

let ProtoInstance1560 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1560.name = "Site";
ProtoInstance1560.DEF = "hanim_r_neck_base";
let fieldValue1561 = browser.currentScene.createNode("fieldValue");
fieldValue1561.name = "name";
fieldValue1561.value = "r_neck_base";
ProtoInstance1560.fieldValue = new MFNode();

ProtoInstance1560.fieldValue[0] = fieldValue1561;

let fieldValue1562 = browser.currentScene.createNode("fieldValue");
fieldValue1562.name = "translation";
fieldValue1562.value = "-0.04190000146627426 1.5148999691009521 -0.02199999988079071";
ProtoInstance1560.fieldValue[1] = fieldValue1562;

fieldValue1508.children[17] = ProtoInstance1560;

let ProtoInstance1563 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1563.name = "Site";
ProtoInstance1563.DEF = "hanim_l_neck_base";
let fieldValue1564 = browser.currentScene.createNode("fieldValue");
fieldValue1564.name = "name";
fieldValue1564.value = "l_neck_base";
ProtoInstance1563.fieldValue = new MFNode();

ProtoInstance1563.fieldValue[0] = fieldValue1564;

let fieldValue1565 = browser.currentScene.createNode("fieldValue");
fieldValue1565.name = "translation";
fieldValue1565.value = "0.06459999829530716 1.5140999555587769 -0.03799999877810478";
ProtoInstance1563.fieldValue[1] = fieldValue1565;

fieldValue1508.children[18] = ProtoInstance1563;

let ProtoInstance1566 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1566.name = "Site";
ProtoInstance1566.DEF = "hanim_navel";
let fieldValue1567 = browser.currentScene.createNode("fieldValue");
fieldValue1567.name = "name";
fieldValue1567.value = "navel";
ProtoInstance1566.fieldValue = new MFNode();

ProtoInstance1566.fieldValue[0] = fieldValue1567;

let fieldValue1568 = browser.currentScene.createNode("fieldValue");
fieldValue1568.name = "translation";
fieldValue1568.value = "0.006899999920278788 1.09660005569458 0.10170000046491623";
ProtoInstance1566.fieldValue[1] = fieldValue1568;

fieldValue1508.children[19] = ProtoInstance1566;

ProtoInstance1506.fieldValue[1] = fieldValue1508;

fieldValue1359.children[3] = ProtoInstance1506;

ProtoInstance1355.fieldValue[3] = fieldValue1359;

fieldValue493.children[10] = ProtoInstance1355;

let ProtoInstance1569 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1569.name = "Joint";
ProtoInstance1569.DEF = "hanim_skullbase";
let fieldValue1570 = browser.currentScene.createNode("fieldValue");
fieldValue1570.name = "stiffness";
fieldValue1570.value = "1 1 1";
ProtoInstance1569.fieldValue = new MFNode();

ProtoInstance1569.fieldValue[0] = fieldValue1570;

let fieldValue1571 = browser.currentScene.createNode("fieldValue");
fieldValue1571.name = "name";
fieldValue1571.value = "skullbase";
ProtoInstance1569.fieldValue[1] = fieldValue1571;

let fieldValue1572 = browser.currentScene.createNode("fieldValue");
fieldValue1572.name = "center";
fieldValue1572.value = "0.004399999976158142 1.62090003490448 0.023600000888109207";
ProtoInstance1569.fieldValue[2] = fieldValue1572;

let fieldValue1573 = browser.currentScene.createNode("fieldValue");
fieldValue1573.name = "children";
let ProtoInstance1574 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1574.name = "Segment";
ProtoInstance1574.DEF = "hanim_skull";
let fieldValue1575 = browser.currentScene.createNode("fieldValue");
fieldValue1575.name = "name";
fieldValue1575.value = "skull";
ProtoInstance1574.fieldValue = new MFNode();

ProtoInstance1574.fieldValue[0] = fieldValue1575;

let fieldValue1576 = browser.currentScene.createNode("fieldValue");
fieldValue1576.name = "children";
let ProtoInstance1577 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1577.name = "Site";
ProtoInstance1577.DEF = "hanim_skull_tip";
let fieldValue1578 = browser.currentScene.createNode("fieldValue");
fieldValue1578.name = "name";
fieldValue1578.value = "skull_tip";
ProtoInstance1577.fieldValue = new MFNode();

ProtoInstance1577.fieldValue[0] = fieldValue1578;

let fieldValue1579 = browser.currentScene.createNode("fieldValue");
fieldValue1579.name = "translation";
fieldValue1579.value = "0.004999999888241291 1.7503999471664429 0.005499999970197678";
ProtoInstance1577.fieldValue[1] = fieldValue1579;

fieldValue1576.children = new MFNode();

fieldValue1576.children[0] = ProtoInstance1577;

let ProtoInstance1580 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1580.name = "Site";
ProtoInstance1580.DEF = "hanim_sellion";
let fieldValue1581 = browser.currentScene.createNode("fieldValue");
fieldValue1581.name = "name";
fieldValue1581.value = "sellion";
ProtoInstance1580.fieldValue = new MFNode();

ProtoInstance1580.fieldValue[0] = fieldValue1581;

let fieldValue1582 = browser.currentScene.createNode("fieldValue");
fieldValue1582.name = "translation";
fieldValue1582.value = "0.005799999926239252 1.631600022315979 0.0851999968290329";
ProtoInstance1580.fieldValue[1] = fieldValue1582;

fieldValue1576.children[1] = ProtoInstance1580;

let ProtoInstance1583 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1583.name = "Site";
ProtoInstance1583.DEF = "hanim_r_infraorbitale";
let fieldValue1584 = browser.currentScene.createNode("fieldValue");
fieldValue1584.name = "name";
fieldValue1584.value = "r_infraorbitale";
ProtoInstance1583.fieldValue = new MFNode();

ProtoInstance1583.fieldValue[0] = fieldValue1584;

let fieldValue1585 = browser.currentScene.createNode("fieldValue");
fieldValue1585.name = "translation";
fieldValue1585.value = "-0.02370000071823597 1.6171000003814697 0.07519999891519547";
ProtoInstance1583.fieldValue[1] = fieldValue1585;

fieldValue1576.children[2] = ProtoInstance1583;

let ProtoInstance1586 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1586.name = "Site";
ProtoInstance1586.DEF = "hanim_l_infraorbitale";
let fieldValue1587 = browser.currentScene.createNode("fieldValue");
fieldValue1587.name = "name";
fieldValue1587.value = "l_infraorbitale";
ProtoInstance1586.fieldValue = new MFNode();

ProtoInstance1586.fieldValue[0] = fieldValue1587;

let fieldValue1588 = browser.currentScene.createNode("fieldValue");
fieldValue1588.name = "translation";
fieldValue1588.value = "0.0340999998152256 1.6171000003814697 0.07519999891519547";
ProtoInstance1586.fieldValue[1] = fieldValue1588;

fieldValue1576.children[3] = ProtoInstance1586;

let ProtoInstance1589 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1589.name = "Site";
ProtoInstance1589.DEF = "hanim_supramenton";
let fieldValue1590 = browser.currentScene.createNode("fieldValue");
fieldValue1590.name = "name";
fieldValue1590.value = "supramenton";
ProtoInstance1589.fieldValue = new MFNode();

ProtoInstance1589.fieldValue[0] = fieldValue1590;

let fieldValue1591 = browser.currentScene.createNode("fieldValue");
fieldValue1591.name = "translation";
fieldValue1591.value = "0.006099999882280827 1.5410000085830688 0.08049999922513962";
ProtoInstance1589.fieldValue[1] = fieldValue1591;

fieldValue1576.children[4] = ProtoInstance1589;

let ProtoInstance1592 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1592.name = "Site";
ProtoInstance1592.DEF = "hanim_r_tragion";
let fieldValue1593 = browser.currentScene.createNode("fieldValue");
fieldValue1593.name = "name";
fieldValue1593.value = "r_tragion";
ProtoInstance1592.fieldValue = new MFNode();

ProtoInstance1592.fieldValue[0] = fieldValue1593;

let fieldValue1594 = browser.currentScene.createNode("fieldValue");
fieldValue1594.name = "translation";
fieldValue1594.value = "-0.06459999829530716 1.6346999406814575 0.03020000085234642";
ProtoInstance1592.fieldValue[1] = fieldValue1594;

fieldValue1576.children[5] = ProtoInstance1592;

let ProtoInstance1595 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1595.name = "Site";
ProtoInstance1595.DEF = "hanim_r_gonion";
let fieldValue1596 = browser.currentScene.createNode("fieldValue");
fieldValue1596.name = "name";
fieldValue1596.value = "r_gonion";
ProtoInstance1595.fieldValue = new MFNode();

ProtoInstance1595.fieldValue[0] = fieldValue1596;

let fieldValue1597 = browser.currentScene.createNode("fieldValue");
fieldValue1597.name = "translation";
fieldValue1597.value = "-0.052000001072883606 1.552899956703186 0.034699998795986176";
ProtoInstance1595.fieldValue[1] = fieldValue1597;

fieldValue1576.children[6] = ProtoInstance1595;

let ProtoInstance1598 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1598.name = "Site";
ProtoInstance1598.DEF = "hanim_l_tragion";
let fieldValue1599 = browser.currentScene.createNode("fieldValue");
fieldValue1599.name = "name";
fieldValue1599.value = "l_tragion";
ProtoInstance1598.fieldValue = new MFNode();

ProtoInstance1598.fieldValue[0] = fieldValue1599;

let fieldValue1600 = browser.currentScene.createNode("fieldValue");
fieldValue1600.name = "translation";
fieldValue1600.value = "0.0738999992609024 1.6347999572753906 0.028200000524520874";
ProtoInstance1598.fieldValue[1] = fieldValue1600;

fieldValue1576.children[7] = ProtoInstance1598;

let ProtoInstance1601 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1601.name = "Site";
ProtoInstance1601.DEF = "hanim_l_gonion";
let fieldValue1602 = browser.currentScene.createNode("fieldValue");
fieldValue1602.name = "name";
fieldValue1602.value = "l_gonion";
ProtoInstance1601.fieldValue = new MFNode();

ProtoInstance1601.fieldValue[0] = fieldValue1602;

let fieldValue1603 = browser.currentScene.createNode("fieldValue");
fieldValue1603.name = "translation";
fieldValue1603.value = "0.06310000270605087 1.5529999732971191 0.032999999821186066";
ProtoInstance1601.fieldValue[1] = fieldValue1603;

fieldValue1576.children[8] = ProtoInstance1601;

let ProtoInstance1604 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1604.name = "Site";
ProtoInstance1604.DEF = "hanim_nuchale";
let fieldValue1605 = browser.currentScene.createNode("fieldValue");
fieldValue1605.name = "name";
fieldValue1605.value = "nuchale";
ProtoInstance1604.fieldValue = new MFNode();

ProtoInstance1604.fieldValue[0] = fieldValue1605;

let fieldValue1606 = browser.currentScene.createNode("fieldValue");
fieldValue1606.name = "translation";
fieldValue1606.value = "0.0038999998942017555 1.5972000360488892 -0.07959999889135361";
ProtoInstance1604.fieldValue[1] = fieldValue1606;

fieldValue1576.children[9] = ProtoInstance1604;

ProtoInstance1574.fieldValue[1] = fieldValue1576;

fieldValue1573.children = new MFNode();

fieldValue1573.children[0] = ProtoInstance1574;

ProtoInstance1569.fieldValue[3] = fieldValue1573;

fieldValue493.children[11] = ProtoInstance1569;

let ProtoInstance1607 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1607.name = "Joint";
ProtoInstance1607.DEF = "hanim_l_shoulder";
let fieldValue1608 = browser.currentScene.createNode("fieldValue");
fieldValue1608.name = "stiffness";
fieldValue1608.value = "1 1 1";
ProtoInstance1607.fieldValue = new MFNode();

ProtoInstance1607.fieldValue[0] = fieldValue1608;

let fieldValue1609 = browser.currentScene.createNode("fieldValue");
fieldValue1609.name = "name";
fieldValue1609.value = "l_shoulder";
ProtoInstance1607.fieldValue[1] = fieldValue1609;

let fieldValue1610 = browser.currentScene.createNode("fieldValue");
fieldValue1610.name = "center";
fieldValue1610.value = "0.2029000073671341 1.437600016593933 -0.03869999945163727";
ProtoInstance1607.fieldValue[2] = fieldValue1610;

let fieldValue1611 = browser.currentScene.createNode("fieldValue");
fieldValue1611.name = "children";
let ProtoInstance1612 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1612.name = "Joint";
ProtoInstance1612.DEF = "hanim_l_elbow";
let fieldValue1613 = browser.currentScene.createNode("fieldValue");
fieldValue1613.name = "stiffness";
fieldValue1613.value = "1 1 1";
ProtoInstance1612.fieldValue = new MFNode();

ProtoInstance1612.fieldValue[0] = fieldValue1613;

let fieldValue1614 = browser.currentScene.createNode("fieldValue");
fieldValue1614.name = "name";
fieldValue1614.value = "l_elbow";
ProtoInstance1612.fieldValue[1] = fieldValue1614;

let fieldValue1615 = browser.currentScene.createNode("fieldValue");
fieldValue1615.name = "center";
fieldValue1615.value = "0.2013999968767166 1.135699987411499 -0.0681999996304512";
ProtoInstance1612.fieldValue[2] = fieldValue1615;

let fieldValue1616 = browser.currentScene.createNode("fieldValue");
fieldValue1616.name = "children";
let ProtoInstance1617 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1617.name = "Joint";
ProtoInstance1617.DEF = "hanim_l_radiocarpal";
let fieldValue1618 = browser.currentScene.createNode("fieldValue");
fieldValue1618.name = "stiffness";
fieldValue1618.value = "1 1 1";
ProtoInstance1617.fieldValue = new MFNode();

ProtoInstance1617.fieldValue[0] = fieldValue1618;

let fieldValue1619 = browser.currentScene.createNode("fieldValue");
fieldValue1619.name = "name";
fieldValue1619.value = "l_radiocarpal";
ProtoInstance1617.fieldValue[1] = fieldValue1619;

let fieldValue1620 = browser.currentScene.createNode("fieldValue");
fieldValue1620.name = "center";
fieldValue1620.value = "0.19840000569820404 0.8662999868392944 -0.05829999968409538";
ProtoInstance1617.fieldValue[2] = fieldValue1620;

let fieldValue1621 = browser.currentScene.createNode("fieldValue");
fieldValue1621.name = "children";
let ProtoInstance1622 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1622.name = "Segment";
ProtoInstance1622.DEF = "hanim_l_hand";
let fieldValue1623 = browser.currentScene.createNode("fieldValue");
fieldValue1623.name = "name";
fieldValue1623.value = "l_hand";
ProtoInstance1622.fieldValue = new MFNode();

ProtoInstance1622.fieldValue[0] = fieldValue1623;

let fieldValue1624 = browser.currentScene.createNode("fieldValue");
fieldValue1624.name = "children";
let ProtoInstance1625 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1625.name = "Site";
ProtoInstance1625.DEF = "hanim_l_hand_tip";
let fieldValue1626 = browser.currentScene.createNode("fieldValue");
fieldValue1626.name = "name";
fieldValue1626.value = "l_hand_tip";
ProtoInstance1625.fieldValue = new MFNode();

ProtoInstance1625.fieldValue[0] = fieldValue1626;

let fieldValue1627 = browser.currentScene.createNode("fieldValue");
fieldValue1627.name = "translation";
fieldValue1627.value = "0.20800000429153442 0.6730999946594238 -0.04910000041127205";
ProtoInstance1625.fieldValue[1] = fieldValue1627;

fieldValue1624.children = new MFNode();

fieldValue1624.children[0] = ProtoInstance1625;

let ProtoInstance1628 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1628.name = "Site";
ProtoInstance1628.DEF = "hanim_l_metacarpal_phalanx_2";
let fieldValue1629 = browser.currentScene.createNode("fieldValue");
fieldValue1629.name = "name";
fieldValue1629.value = "l_metacarpal_phalanx_2";
ProtoInstance1628.fieldValue = new MFNode();

ProtoInstance1628.fieldValue[0] = fieldValue1629;

let fieldValue1630 = browser.currentScene.createNode("fieldValue");
fieldValue1630.name = "translation";
fieldValue1630.value = "0.20090000331401825 0.8138999938964844 -0.02370000071823597";
ProtoInstance1628.fieldValue[1] = fieldValue1630;

fieldValue1624.children[1] = ProtoInstance1628;

let ProtoInstance1631 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1631.name = "Site";
ProtoInstance1631.DEF = "hanim_l_dactylion";
let fieldValue1632 = browser.currentScene.createNode("fieldValue");
fieldValue1632.name = "name";
fieldValue1632.value = "l_dactylion";
ProtoInstance1631.fieldValue = new MFNode();

ProtoInstance1631.fieldValue[0] = fieldValue1632;

let fieldValue1633 = browser.currentScene.createNode("fieldValue");
fieldValue1633.name = "translation";
fieldValue1633.value = "0.20559999346733093 0.6743000149726868 -0.04820000007748604";
ProtoInstance1631.fieldValue[1] = fieldValue1633;

fieldValue1624.children[2] = ProtoInstance1631;

let ProtoInstance1634 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1634.name = "Site";
ProtoInstance1634.DEF = "hanim_l_ulnar_styloid";
let fieldValue1635 = browser.currentScene.createNode("fieldValue");
fieldValue1635.name = "name";
fieldValue1635.value = "l_ulnar_styloid";
ProtoInstance1634.fieldValue = new MFNode();

ProtoInstance1634.fieldValue[0] = fieldValue1635;

let fieldValue1636 = browser.currentScene.createNode("fieldValue");
fieldValue1636.name = "translation";
fieldValue1636.value = "-0.2142000049352646 0.8529000282287598 -0.06480000168085098";
ProtoInstance1634.fieldValue[1] = fieldValue1636;

fieldValue1624.children[3] = ProtoInstance1634;

let ProtoInstance1637 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1637.name = "Site";
ProtoInstance1637.DEF = "hanim_l_metacarpal_phalanx_5";
let fieldValue1638 = browser.currentScene.createNode("fieldValue");
fieldValue1638.name = "name";
fieldValue1638.value = "l_metacarpal_phalanx_5";
ProtoInstance1637.fieldValue = new MFNode();

ProtoInstance1637.fieldValue[0] = fieldValue1638;

let fieldValue1639 = browser.currentScene.createNode("fieldValue");
fieldValue1639.name = "translation";
fieldValue1639.value = "0.19290000200271606 0.7860000133514404 -0.11219999939203262";
ProtoInstance1637.fieldValue[1] = fieldValue1639;

fieldValue1624.children[4] = ProtoInstance1637;

ProtoInstance1622.fieldValue[1] = fieldValue1624;

fieldValue1621.children = new MFNode();

fieldValue1621.children[0] = ProtoInstance1622;

ProtoInstance1617.fieldValue[3] = fieldValue1621;

fieldValue1616.children = new MFNode();

fieldValue1616.children[0] = ProtoInstance1617;

let ProtoInstance1640 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1640.name = "Segment";
ProtoInstance1640.DEF = "hanim_l_forearm";
let fieldValue1641 = browser.currentScene.createNode("fieldValue");
fieldValue1641.name = "name";
fieldValue1641.value = "l_forearm";
ProtoInstance1640.fieldValue = new MFNode();

ProtoInstance1640.fieldValue[0] = fieldValue1641;

let fieldValue1642 = browser.currentScene.createNode("fieldValue");
fieldValue1642.name = "children";
let ProtoInstance1643 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1643.name = "Site";
ProtoInstance1643.DEF = "hanim_l_radial_styloid";
let fieldValue1644 = browser.currentScene.createNode("fieldValue");
fieldValue1644.name = "name";
fieldValue1644.value = "l_radial_styloid";
ProtoInstance1643.fieldValue = new MFNode();

ProtoInstance1643.fieldValue[0] = fieldValue1644;

let fieldValue1645 = browser.currentScene.createNode("fieldValue");
fieldValue1645.name = "translation";
fieldValue1645.value = "0.19009999930858612 0.8644999861717224 -0.04149999842047691";
ProtoInstance1643.fieldValue[1] = fieldValue1645;

fieldValue1642.children = new MFNode();

fieldValue1642.children[0] = ProtoInstance1643;

let ProtoInstance1646 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1646.name = "Site";
ProtoInstance1646.DEF = "hanim_l_olecranon";
let fieldValue1647 = browser.currentScene.createNode("fieldValue");
fieldValue1647.name = "name";
fieldValue1647.value = "l_olecranon";
ProtoInstance1646.fieldValue = new MFNode();

ProtoInstance1646.fieldValue[0] = fieldValue1647;

let fieldValue1648 = browser.currentScene.createNode("fieldValue");
fieldValue1648.name = "translation";
fieldValue1648.value = "-0.19619999825954437 1.1375000476837158 -0.11230000108480453";
ProtoInstance1646.fieldValue[1] = fieldValue1648;

fieldValue1642.children[1] = ProtoInstance1646;

let ProtoInstance1649 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1649.name = "Site";
ProtoInstance1649.DEF = "hanim_l_humeral_medial_epicondyles";
let fieldValue1650 = browser.currentScene.createNode("fieldValue");
fieldValue1650.name = "name";
fieldValue1650.value = "l_humeral_medial_epicondyles";
ProtoInstance1649.fieldValue = new MFNode();

ProtoInstance1649.fieldValue[0] = fieldValue1650;

let fieldValue1651 = browser.currentScene.createNode("fieldValue");
fieldValue1651.name = "translation";
fieldValue1651.value = "0.17350000143051147 1.1272000074386597 -0.11129999905824661";
ProtoInstance1649.fieldValue[1] = fieldValue1651;

fieldValue1642.children[2] = ProtoInstance1649;

let ProtoInstance1652 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1652.name = "Site";
ProtoInstance1652.DEF = "hanim_l_radiale";
let fieldValue1653 = browser.currentScene.createNode("fieldValue");
fieldValue1653.name = "name";
fieldValue1653.value = "l_radiale";
ProtoInstance1652.fieldValue = new MFNode();

ProtoInstance1652.fieldValue[0] = fieldValue1653;

let fieldValue1654 = browser.currentScene.createNode("fieldValue");
fieldValue1654.name = "translation";
fieldValue1654.value = "0.21819999814033508 1.1211999654769897 -0.11670000106096268";
ProtoInstance1652.fieldValue[1] = fieldValue1654;

fieldValue1642.children[3] = ProtoInstance1652;

ProtoInstance1640.fieldValue[1] = fieldValue1642;

fieldValue1616.children[1] = ProtoInstance1640;

ProtoInstance1612.fieldValue[3] = fieldValue1616;

fieldValue1611.children = new MFNode();

fieldValue1611.children[0] = ProtoInstance1612;

let ProtoInstance1655 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1655.name = "Segment";
ProtoInstance1655.DEF = "hanim_l_upperarm";
let fieldValue1656 = browser.currentScene.createNode("fieldValue");
fieldValue1656.name = "name";
fieldValue1656.value = "l_upperarm";
ProtoInstance1655.fieldValue = new MFNode();

ProtoInstance1655.fieldValue[0] = fieldValue1656;

let fieldValue1657 = browser.currentScene.createNode("fieldValue");
fieldValue1657.name = "children";
let ProtoInstance1658 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1658.name = "Site";
ProtoInstance1658.DEF = "hanim_l_humeral_lateral_epicondyles";
let fieldValue1659 = browser.currentScene.createNode("fieldValue");
fieldValue1659.name = "name";
fieldValue1659.value = "l_humeral_lateral_epicondyles";
ProtoInstance1658.fieldValue = new MFNode();

ProtoInstance1658.fieldValue[0] = fieldValue1659;

let fieldValue1660 = browser.currentScene.createNode("fieldValue");
fieldValue1660.name = "translation";
fieldValue1660.value = "0.2280000001192093 1.1482000350952148 -0.10999999940395355";
ProtoInstance1658.fieldValue[1] = fieldValue1660;

fieldValue1657.children = new MFNode();

fieldValue1657.children[0] = ProtoInstance1658;

ProtoInstance1655.fieldValue[1] = fieldValue1657;

fieldValue1611.children[1] = ProtoInstance1655;

ProtoInstance1607.fieldValue[3] = fieldValue1611;

fieldValue493.children[12] = ProtoInstance1607;

let ProtoInstance1661 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1661.name = "Joint";
ProtoInstance1661.DEF = "hanim_l_elbow";
let fieldValue1662 = browser.currentScene.createNode("fieldValue");
fieldValue1662.name = "stiffness";
fieldValue1662.value = "1 1 1";
ProtoInstance1661.fieldValue = new MFNode();

ProtoInstance1661.fieldValue[0] = fieldValue1662;

let fieldValue1663 = browser.currentScene.createNode("fieldValue");
fieldValue1663.name = "name";
fieldValue1663.value = "l_elbow";
ProtoInstance1661.fieldValue[1] = fieldValue1663;

let fieldValue1664 = browser.currentScene.createNode("fieldValue");
fieldValue1664.name = "center";
fieldValue1664.value = "0.2013999968767166 1.135699987411499 -0.0681999996304512";
ProtoInstance1661.fieldValue[2] = fieldValue1664;

let fieldValue1665 = browser.currentScene.createNode("fieldValue");
fieldValue1665.name = "children";
let ProtoInstance1666 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1666.name = "Joint";
ProtoInstance1666.DEF = "hanim_l_radiocarpal";
let fieldValue1667 = browser.currentScene.createNode("fieldValue");
fieldValue1667.name = "stiffness";
fieldValue1667.value = "1 1 1";
ProtoInstance1666.fieldValue = new MFNode();

ProtoInstance1666.fieldValue[0] = fieldValue1667;

let fieldValue1668 = browser.currentScene.createNode("fieldValue");
fieldValue1668.name = "name";
fieldValue1668.value = "l_radiocarpal";
ProtoInstance1666.fieldValue[1] = fieldValue1668;

let fieldValue1669 = browser.currentScene.createNode("fieldValue");
fieldValue1669.name = "center";
fieldValue1669.value = "0.19840000569820404 0.8662999868392944 -0.05829999968409538";
ProtoInstance1666.fieldValue[2] = fieldValue1669;

let fieldValue1670 = browser.currentScene.createNode("fieldValue");
fieldValue1670.name = "children";
let ProtoInstance1671 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1671.name = "Segment";
ProtoInstance1671.DEF = "hanim_l_hand";
let fieldValue1672 = browser.currentScene.createNode("fieldValue");
fieldValue1672.name = "name";
fieldValue1672.value = "l_hand";
ProtoInstance1671.fieldValue = new MFNode();

ProtoInstance1671.fieldValue[0] = fieldValue1672;

let fieldValue1673 = browser.currentScene.createNode("fieldValue");
fieldValue1673.name = "children";
let ProtoInstance1674 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1674.name = "Site";
ProtoInstance1674.DEF = "hanim_l_hand_tip";
let fieldValue1675 = browser.currentScene.createNode("fieldValue");
fieldValue1675.name = "name";
fieldValue1675.value = "l_hand_tip";
ProtoInstance1674.fieldValue = new MFNode();

ProtoInstance1674.fieldValue[0] = fieldValue1675;

let fieldValue1676 = browser.currentScene.createNode("fieldValue");
fieldValue1676.name = "translation";
fieldValue1676.value = "0.20800000429153442 0.6730999946594238 -0.04910000041127205";
ProtoInstance1674.fieldValue[1] = fieldValue1676;

fieldValue1673.children = new MFNode();

fieldValue1673.children[0] = ProtoInstance1674;

let ProtoInstance1677 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1677.name = "Site";
ProtoInstance1677.DEF = "hanim_l_metacarpal_phalanx_2";
let fieldValue1678 = browser.currentScene.createNode("fieldValue");
fieldValue1678.name = "name";
fieldValue1678.value = "l_metacarpal_phalanx_2";
ProtoInstance1677.fieldValue = new MFNode();

ProtoInstance1677.fieldValue[0] = fieldValue1678;

let fieldValue1679 = browser.currentScene.createNode("fieldValue");
fieldValue1679.name = "translation";
fieldValue1679.value = "0.20090000331401825 0.8138999938964844 -0.02370000071823597";
ProtoInstance1677.fieldValue[1] = fieldValue1679;

fieldValue1673.children[1] = ProtoInstance1677;

let ProtoInstance1680 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1680.name = "Site";
ProtoInstance1680.DEF = "hanim_l_dactylion";
let fieldValue1681 = browser.currentScene.createNode("fieldValue");
fieldValue1681.name = "name";
fieldValue1681.value = "l_dactylion";
ProtoInstance1680.fieldValue = new MFNode();

ProtoInstance1680.fieldValue[0] = fieldValue1681;

let fieldValue1682 = browser.currentScene.createNode("fieldValue");
fieldValue1682.name = "translation";
fieldValue1682.value = "0.20559999346733093 0.6743000149726868 -0.04820000007748604";
ProtoInstance1680.fieldValue[1] = fieldValue1682;

fieldValue1673.children[2] = ProtoInstance1680;

let ProtoInstance1683 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1683.name = "Site";
ProtoInstance1683.DEF = "hanim_l_ulnar_styloid";
let fieldValue1684 = browser.currentScene.createNode("fieldValue");
fieldValue1684.name = "name";
fieldValue1684.value = "l_ulnar_styloid";
ProtoInstance1683.fieldValue = new MFNode();

ProtoInstance1683.fieldValue[0] = fieldValue1684;

let fieldValue1685 = browser.currentScene.createNode("fieldValue");
fieldValue1685.name = "translation";
fieldValue1685.value = "-0.2142000049352646 0.8529000282287598 -0.06480000168085098";
ProtoInstance1683.fieldValue[1] = fieldValue1685;

fieldValue1673.children[3] = ProtoInstance1683;

let ProtoInstance1686 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1686.name = "Site";
ProtoInstance1686.DEF = "hanim_l_metacarpal_phalanx_5";
let fieldValue1687 = browser.currentScene.createNode("fieldValue");
fieldValue1687.name = "name";
fieldValue1687.value = "l_metacarpal_phalanx_5";
ProtoInstance1686.fieldValue = new MFNode();

ProtoInstance1686.fieldValue[0] = fieldValue1687;

let fieldValue1688 = browser.currentScene.createNode("fieldValue");
fieldValue1688.name = "translation";
fieldValue1688.value = "0.19290000200271606 0.7860000133514404 -0.11219999939203262";
ProtoInstance1686.fieldValue[1] = fieldValue1688;

fieldValue1673.children[4] = ProtoInstance1686;

ProtoInstance1671.fieldValue[1] = fieldValue1673;

fieldValue1670.children = new MFNode();

fieldValue1670.children[0] = ProtoInstance1671;

ProtoInstance1666.fieldValue[3] = fieldValue1670;

fieldValue1665.children = new MFNode();

fieldValue1665.children[0] = ProtoInstance1666;

let ProtoInstance1689 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1689.name = "Segment";
ProtoInstance1689.DEF = "hanim_l_forearm";
let fieldValue1690 = browser.currentScene.createNode("fieldValue");
fieldValue1690.name = "name";
fieldValue1690.value = "l_forearm";
ProtoInstance1689.fieldValue = new MFNode();

ProtoInstance1689.fieldValue[0] = fieldValue1690;

let fieldValue1691 = browser.currentScene.createNode("fieldValue");
fieldValue1691.name = "children";
let ProtoInstance1692 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1692.name = "Site";
ProtoInstance1692.DEF = "hanim_l_radial_styloid";
let fieldValue1693 = browser.currentScene.createNode("fieldValue");
fieldValue1693.name = "name";
fieldValue1693.value = "l_radial_styloid";
ProtoInstance1692.fieldValue = new MFNode();

ProtoInstance1692.fieldValue[0] = fieldValue1693;

let fieldValue1694 = browser.currentScene.createNode("fieldValue");
fieldValue1694.name = "translation";
fieldValue1694.value = "0.19009999930858612 0.8644999861717224 -0.04149999842047691";
ProtoInstance1692.fieldValue[1] = fieldValue1694;

fieldValue1691.children = new MFNode();

fieldValue1691.children[0] = ProtoInstance1692;

let ProtoInstance1695 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1695.name = "Site";
ProtoInstance1695.DEF = "hanim_l_olecranon";
let fieldValue1696 = browser.currentScene.createNode("fieldValue");
fieldValue1696.name = "name";
fieldValue1696.value = "l_olecranon";
ProtoInstance1695.fieldValue = new MFNode();

ProtoInstance1695.fieldValue[0] = fieldValue1696;

let fieldValue1697 = browser.currentScene.createNode("fieldValue");
fieldValue1697.name = "translation";
fieldValue1697.value = "-0.19619999825954437 1.1375000476837158 -0.11230000108480453";
ProtoInstance1695.fieldValue[1] = fieldValue1697;

fieldValue1691.children[1] = ProtoInstance1695;

let ProtoInstance1698 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1698.name = "Site";
ProtoInstance1698.DEF = "hanim_l_humeral_medial_epicondyles";
let fieldValue1699 = browser.currentScene.createNode("fieldValue");
fieldValue1699.name = "name";
fieldValue1699.value = "l_humeral_medial_epicondyles";
ProtoInstance1698.fieldValue = new MFNode();

ProtoInstance1698.fieldValue[0] = fieldValue1699;

let fieldValue1700 = browser.currentScene.createNode("fieldValue");
fieldValue1700.name = "translation";
fieldValue1700.value = "0.17350000143051147 1.1272000074386597 -0.11129999905824661";
ProtoInstance1698.fieldValue[1] = fieldValue1700;

fieldValue1691.children[2] = ProtoInstance1698;

let ProtoInstance1701 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1701.name = "Site";
ProtoInstance1701.DEF = "hanim_l_radiale";
let fieldValue1702 = browser.currentScene.createNode("fieldValue");
fieldValue1702.name = "name";
fieldValue1702.value = "l_radiale";
ProtoInstance1701.fieldValue = new MFNode();

ProtoInstance1701.fieldValue[0] = fieldValue1702;

let fieldValue1703 = browser.currentScene.createNode("fieldValue");
fieldValue1703.name = "translation";
fieldValue1703.value = "0.21819999814033508 1.1211999654769897 -0.11670000106096268";
ProtoInstance1701.fieldValue[1] = fieldValue1703;

fieldValue1691.children[3] = ProtoInstance1701;

ProtoInstance1689.fieldValue[1] = fieldValue1691;

fieldValue1665.children[1] = ProtoInstance1689;

ProtoInstance1661.fieldValue[3] = fieldValue1665;

fieldValue493.children[13] = ProtoInstance1661;

let ProtoInstance1704 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1704.name = "Joint";
ProtoInstance1704.DEF = "hanim_l_radiocarpal";
let fieldValue1705 = browser.currentScene.createNode("fieldValue");
fieldValue1705.name = "stiffness";
fieldValue1705.value = "1 1 1";
ProtoInstance1704.fieldValue = new MFNode();

ProtoInstance1704.fieldValue[0] = fieldValue1705;

let fieldValue1706 = browser.currentScene.createNode("fieldValue");
fieldValue1706.name = "name";
fieldValue1706.value = "l_radiocarpal";
ProtoInstance1704.fieldValue[1] = fieldValue1706;

let fieldValue1707 = browser.currentScene.createNode("fieldValue");
fieldValue1707.name = "center";
fieldValue1707.value = "0.19840000569820404 0.8662999868392944 -0.05829999968409538";
ProtoInstance1704.fieldValue[2] = fieldValue1707;

let fieldValue1708 = browser.currentScene.createNode("fieldValue");
fieldValue1708.name = "children";
let ProtoInstance1709 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1709.name = "Segment";
ProtoInstance1709.DEF = "hanim_l_hand";
let fieldValue1710 = browser.currentScene.createNode("fieldValue");
fieldValue1710.name = "name";
fieldValue1710.value = "l_hand";
ProtoInstance1709.fieldValue = new MFNode();

ProtoInstance1709.fieldValue[0] = fieldValue1710;

let fieldValue1711 = browser.currentScene.createNode("fieldValue");
fieldValue1711.name = "children";
let ProtoInstance1712 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1712.name = "Site";
ProtoInstance1712.DEF = "hanim_l_hand_tip";
let fieldValue1713 = browser.currentScene.createNode("fieldValue");
fieldValue1713.name = "name";
fieldValue1713.value = "l_hand_tip";
ProtoInstance1712.fieldValue = new MFNode();

ProtoInstance1712.fieldValue[0] = fieldValue1713;

let fieldValue1714 = browser.currentScene.createNode("fieldValue");
fieldValue1714.name = "translation";
fieldValue1714.value = "0.20800000429153442 0.6730999946594238 -0.04910000041127205";
ProtoInstance1712.fieldValue[1] = fieldValue1714;

fieldValue1711.children = new MFNode();

fieldValue1711.children[0] = ProtoInstance1712;

let ProtoInstance1715 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1715.name = "Site";
ProtoInstance1715.DEF = "hanim_l_metacarpal_phalanx_2";
let fieldValue1716 = browser.currentScene.createNode("fieldValue");
fieldValue1716.name = "name";
fieldValue1716.value = "l_metacarpal_phalanx_2";
ProtoInstance1715.fieldValue = new MFNode();

ProtoInstance1715.fieldValue[0] = fieldValue1716;

let fieldValue1717 = browser.currentScene.createNode("fieldValue");
fieldValue1717.name = "translation";
fieldValue1717.value = "0.20090000331401825 0.8138999938964844 -0.02370000071823597";
ProtoInstance1715.fieldValue[1] = fieldValue1717;

fieldValue1711.children[1] = ProtoInstance1715;

let ProtoInstance1718 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1718.name = "Site";
ProtoInstance1718.DEF = "hanim_l_dactylion";
let fieldValue1719 = browser.currentScene.createNode("fieldValue");
fieldValue1719.name = "name";
fieldValue1719.value = "l_dactylion";
ProtoInstance1718.fieldValue = new MFNode();

ProtoInstance1718.fieldValue[0] = fieldValue1719;

let fieldValue1720 = browser.currentScene.createNode("fieldValue");
fieldValue1720.name = "translation";
fieldValue1720.value = "0.20559999346733093 0.6743000149726868 -0.04820000007748604";
ProtoInstance1718.fieldValue[1] = fieldValue1720;

fieldValue1711.children[2] = ProtoInstance1718;

let ProtoInstance1721 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1721.name = "Site";
ProtoInstance1721.DEF = "hanim_l_ulnar_styloid";
let fieldValue1722 = browser.currentScene.createNode("fieldValue");
fieldValue1722.name = "name";
fieldValue1722.value = "l_ulnar_styloid";
ProtoInstance1721.fieldValue = new MFNode();

ProtoInstance1721.fieldValue[0] = fieldValue1722;

let fieldValue1723 = browser.currentScene.createNode("fieldValue");
fieldValue1723.name = "translation";
fieldValue1723.value = "-0.2142000049352646 0.8529000282287598 -0.06480000168085098";
ProtoInstance1721.fieldValue[1] = fieldValue1723;

fieldValue1711.children[3] = ProtoInstance1721;

let ProtoInstance1724 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1724.name = "Site";
ProtoInstance1724.DEF = "hanim_l_metacarpal_phalanx_5";
let fieldValue1725 = browser.currentScene.createNode("fieldValue");
fieldValue1725.name = "name";
fieldValue1725.value = "l_metacarpal_phalanx_5";
ProtoInstance1724.fieldValue = new MFNode();

ProtoInstance1724.fieldValue[0] = fieldValue1725;

let fieldValue1726 = browser.currentScene.createNode("fieldValue");
fieldValue1726.name = "translation";
fieldValue1726.value = "0.19290000200271606 0.7860000133514404 -0.11219999939203262";
ProtoInstance1724.fieldValue[1] = fieldValue1726;

fieldValue1711.children[4] = ProtoInstance1724;

ProtoInstance1709.fieldValue[1] = fieldValue1711;

fieldValue1708.children = new MFNode();

fieldValue1708.children[0] = ProtoInstance1709;

ProtoInstance1704.fieldValue[3] = fieldValue1708;

fieldValue493.children[14] = ProtoInstance1704;

let ProtoInstance1727 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1727.name = "Joint";
ProtoInstance1727.DEF = "hanim_r_shoulder";
let fieldValue1728 = browser.currentScene.createNode("fieldValue");
fieldValue1728.name = "stiffness";
fieldValue1728.value = "1 1 1";
ProtoInstance1727.fieldValue = new MFNode();

ProtoInstance1727.fieldValue[0] = fieldValue1728;

let fieldValue1729 = browser.currentScene.createNode("fieldValue");
fieldValue1729.name = "name";
fieldValue1729.value = "r_shoulder";
ProtoInstance1727.fieldValue[1] = fieldValue1729;

let fieldValue1730 = browser.currentScene.createNode("fieldValue");
fieldValue1730.name = "center";
fieldValue1730.value = "-0.1906999945640564 1.4407000541687012 -0.032499998807907104";
ProtoInstance1727.fieldValue[2] = fieldValue1730;

let fieldValue1731 = browser.currentScene.createNode("fieldValue");
fieldValue1731.name = "children";
let ProtoInstance1732 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1732.name = "Joint";
ProtoInstance1732.DEF = "hanim_r_elbow";
let fieldValue1733 = browser.currentScene.createNode("fieldValue");
fieldValue1733.name = "stiffness";
fieldValue1733.value = "1 1 1";
ProtoInstance1732.fieldValue = new MFNode();

ProtoInstance1732.fieldValue[0] = fieldValue1733;

let fieldValue1734 = browser.currentScene.createNode("fieldValue");
fieldValue1734.name = "name";
fieldValue1734.value = "r_elbow";
ProtoInstance1732.fieldValue[1] = fieldValue1734;

let fieldValue1735 = browser.currentScene.createNode("fieldValue");
fieldValue1735.name = "center";
fieldValue1735.value = "-0.1949000060558319 1.138800024986267 -0.06199999898672104";
ProtoInstance1732.fieldValue[2] = fieldValue1735;

let fieldValue1736 = browser.currentScene.createNode("fieldValue");
fieldValue1736.name = "children";
let ProtoInstance1737 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1737.name = "Joint";
ProtoInstance1737.DEF = "hanim_r_radiocarpal";
let fieldValue1738 = browser.currentScene.createNode("fieldValue");
fieldValue1738.name = "stiffness";
fieldValue1738.value = "1 1 1";
ProtoInstance1737.fieldValue = new MFNode();

ProtoInstance1737.fieldValue[0] = fieldValue1738;

let fieldValue1739 = browser.currentScene.createNode("fieldValue");
fieldValue1739.name = "name";
fieldValue1739.value = "r_radiocarpal";
ProtoInstance1737.fieldValue[1] = fieldValue1739;

let fieldValue1740 = browser.currentScene.createNode("fieldValue");
fieldValue1740.name = "center";
fieldValue1740.value = "-0.19589999318122864 0.8694000244140625 -0.05209999904036522";
ProtoInstance1737.fieldValue[2] = fieldValue1740;

let fieldValue1741 = browser.currentScene.createNode("fieldValue");
fieldValue1741.name = "children";
let ProtoInstance1742 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1742.name = "Segment";
ProtoInstance1742.DEF = "hanim_r_hand";
let fieldValue1743 = browser.currentScene.createNode("fieldValue");
fieldValue1743.name = "name";
fieldValue1743.value = "r_hand";
ProtoInstance1742.fieldValue = new MFNode();

ProtoInstance1742.fieldValue[0] = fieldValue1743;

let fieldValue1744 = browser.currentScene.createNode("fieldValue");
fieldValue1744.name = "children";
let ProtoInstance1745 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1745.name = "Site";
ProtoInstance1745.DEF = "hanim_r_hand_tip";
let fieldValue1746 = browser.currentScene.createNode("fieldValue");
fieldValue1746.name = "name";
fieldValue1746.value = "r_hand_tip";
ProtoInstance1745.fieldValue = new MFNode();

ProtoInstance1745.fieldValue[0] = fieldValue1746;

let fieldValue1747 = browser.currentScene.createNode("fieldValue");
fieldValue1747.name = "translation";
fieldValue1747.value = "-0.19689999520778656 0.6758000254631042 -0.04270000010728836";
ProtoInstance1745.fieldValue[1] = fieldValue1747;

fieldValue1744.children = new MFNode();

fieldValue1744.children[0] = ProtoInstance1745;

let ProtoInstance1748 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1748.name = "Site";
ProtoInstance1748.DEF = "hanim_r_metacarpal_phalanx_2";
let fieldValue1749 = browser.currentScene.createNode("fieldValue");
fieldValue1749.name = "name";
fieldValue1749.value = "r_metacarpal_phalanx_2";
ProtoInstance1748.fieldValue = new MFNode();

ProtoInstance1748.fieldValue[0] = fieldValue1749;

let fieldValue1750 = browser.currentScene.createNode("fieldValue");
fieldValue1750.name = "translation";
fieldValue1750.value = "-0.19769999384880066 0.8169000148773193 -0.01769999973475933";
ProtoInstance1748.fieldValue[1] = fieldValue1750;

fieldValue1744.children[1] = ProtoInstance1748;

let ProtoInstance1751 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1751.name = "Site";
ProtoInstance1751.DEF = "hanim_r_dactylion";
let fieldValue1752 = browser.currentScene.createNode("fieldValue");
fieldValue1752.name = "name";
fieldValue1752.value = "r_dactylion";
ProtoInstance1751.fieldValue = new MFNode();

ProtoInstance1751.fieldValue[0] = fieldValue1752;

let fieldValue1753 = browser.currentScene.createNode("fieldValue");
fieldValue1753.name = "translation";
fieldValue1753.value = "-0.1941000074148178 0.6772000193595886 -0.04230000078678131";
ProtoInstance1751.fieldValue[1] = fieldValue1753;

fieldValue1744.children[2] = ProtoInstance1751;

let ProtoInstance1754 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1754.name = "Site";
ProtoInstance1754.DEF = "hanim_r_ulnar_styloid";
let fieldValue1755 = browser.currentScene.createNode("fieldValue");
fieldValue1755.name = "name";
fieldValue1755.value = "r_ulnar_styloid";
ProtoInstance1754.fieldValue = new MFNode();

ProtoInstance1754.fieldValue[0] = fieldValue1755;

let fieldValue1756 = browser.currentScene.createNode("fieldValue");
fieldValue1756.name = "translation";
fieldValue1756.value = "-0.21170000731945038 0.8561999797821045 -0.058400001376867294";
ProtoInstance1754.fieldValue[1] = fieldValue1756;

fieldValue1744.children[3] = ProtoInstance1754;

let ProtoInstance1757 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1757.name = "Site";
ProtoInstance1757.DEF = "hanim_r_metacarpal_phalanx_5";
let fieldValue1758 = browser.currentScene.createNode("fieldValue");
fieldValue1758.name = "name";
fieldValue1758.value = "r_metacarpal_phalanx_5";
ProtoInstance1757.fieldValue = new MFNode();

ProtoInstance1757.fieldValue[0] = fieldValue1758;

let fieldValue1759 = browser.currentScene.createNode("fieldValue");
fieldValue1759.name = "translation";
fieldValue1759.value = "-0.19290000200271606 0.7889999747276306 -0.10639999806880951";
ProtoInstance1757.fieldValue[1] = fieldValue1759;

fieldValue1744.children[4] = ProtoInstance1757;

ProtoInstance1742.fieldValue[1] = fieldValue1744;

fieldValue1741.children = new MFNode();

fieldValue1741.children[0] = ProtoInstance1742;

ProtoInstance1737.fieldValue[3] = fieldValue1741;

fieldValue1736.children = new MFNode();

fieldValue1736.children[0] = ProtoInstance1737;

let ProtoInstance1760 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1760.name = "Segment";
ProtoInstance1760.DEF = "hanim_r_forearm";
let fieldValue1761 = browser.currentScene.createNode("fieldValue");
fieldValue1761.name = "name";
fieldValue1761.value = "r_forearm";
ProtoInstance1760.fieldValue = new MFNode();

ProtoInstance1760.fieldValue[0] = fieldValue1761;

let fieldValue1762 = browser.currentScene.createNode("fieldValue");
fieldValue1762.name = "children";
let ProtoInstance1763 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1763.name = "Site";
ProtoInstance1763.DEF = "hanim_r_radial_styloid";
let fieldValue1764 = browser.currentScene.createNode("fieldValue");
fieldValue1764.name = "name";
fieldValue1764.value = "r_radial_styloid";
ProtoInstance1763.fieldValue = new MFNode();

ProtoInstance1763.fieldValue[0] = fieldValue1764;

let fieldValue1765 = browser.currentScene.createNode("fieldValue");
fieldValue1765.name = "translation";
fieldValue1765.value = "-0.188400000333786 0.8676000237464905 -0.035999998450279236";
ProtoInstance1763.fieldValue[1] = fieldValue1765;

fieldValue1762.children = new MFNode();

fieldValue1762.children[0] = ProtoInstance1763;

let ProtoInstance1766 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1766.name = "Site";
ProtoInstance1766.DEF = "hanim_r_olecranon";
let fieldValue1767 = browser.currentScene.createNode("fieldValue");
fieldValue1767.name = "name";
fieldValue1767.value = "r_olecranon";
ProtoInstance1766.fieldValue = new MFNode();

ProtoInstance1766.fieldValue[0] = fieldValue1767;

let fieldValue1768 = browser.currentScene.createNode("fieldValue");
fieldValue1768.name = "translation";
fieldValue1768.value = "-0.1906999945640564 1.1404999494552612 -0.10649999976158142";
ProtoInstance1766.fieldValue[1] = fieldValue1768;

fieldValue1762.children[1] = ProtoInstance1766;

let ProtoInstance1769 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1769.name = "Site";
ProtoInstance1769.DEF = "hanim_r_humeral_medial_epicondyles";
let fieldValue1770 = browser.currentScene.createNode("fieldValue");
fieldValue1770.name = "name";
fieldValue1770.value = "r_humeral_medial_epicondyles";
ProtoInstance1769.fieldValue = new MFNode();

ProtoInstance1769.fieldValue[0] = fieldValue1770;

let fieldValue1771 = browser.currentScene.createNode("fieldValue");
fieldValue1771.name = "translation";
fieldValue1771.value = "-0.1679999977350235 1.1297999620437622 -0.10620000213384628";
ProtoInstance1769.fieldValue[1] = fieldValue1771;

fieldValue1762.children[2] = ProtoInstance1769;

let ProtoInstance1772 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1772.name = "Site";
ProtoInstance1772.DEF = "hanim_r_radiale";
let fieldValue1773 = browser.currentScene.createNode("fieldValue");
fieldValue1773.name = "name";
fieldValue1773.value = "r_radiale";
ProtoInstance1772.fieldValue = new MFNode();

ProtoInstance1772.fieldValue[0] = fieldValue1773;

let fieldValue1774 = browser.currentScene.createNode("fieldValue");
fieldValue1774.name = "translation";
fieldValue1774.value = "-0.21299999952316284 1.1304999589920044 -0.10909999907016754";
ProtoInstance1772.fieldValue[1] = fieldValue1774;

fieldValue1762.children[3] = ProtoInstance1772;

ProtoInstance1760.fieldValue[1] = fieldValue1762;

fieldValue1736.children[1] = ProtoInstance1760;

ProtoInstance1732.fieldValue[3] = fieldValue1736;

fieldValue1731.children = new MFNode();

fieldValue1731.children[0] = ProtoInstance1732;

let ProtoInstance1775 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1775.name = "Segment";
ProtoInstance1775.DEF = "hanim_r_upperarm";
let fieldValue1776 = browser.currentScene.createNode("fieldValue");
fieldValue1776.name = "name";
fieldValue1776.value = "r_upperarm";
ProtoInstance1775.fieldValue = new MFNode();

ProtoInstance1775.fieldValue[0] = fieldValue1776;

let fieldValue1777 = browser.currentScene.createNode("fieldValue");
fieldValue1777.name = "children";
let ProtoInstance1778 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1778.name = "Site";
ProtoInstance1778.DEF = "hanim_r_humeral_lateral_epicondyles";
let fieldValue1779 = browser.currentScene.createNode("fieldValue");
fieldValue1779.name = "name";
fieldValue1779.value = "r_humeral_lateral_epicondyles";
ProtoInstance1778.fieldValue = new MFNode();

ProtoInstance1778.fieldValue[0] = fieldValue1779;

let fieldValue1780 = browser.currentScene.createNode("fieldValue");
fieldValue1780.name = "translation";
fieldValue1780.value = "-0.2223999947309494 1.1517000198364258 -0.10329999774694443";
ProtoInstance1778.fieldValue[1] = fieldValue1780;

fieldValue1777.children = new MFNode();

fieldValue1777.children[0] = ProtoInstance1778;

ProtoInstance1775.fieldValue[1] = fieldValue1777;

fieldValue1731.children[1] = ProtoInstance1775;

ProtoInstance1727.fieldValue[3] = fieldValue1731;

fieldValue493.children[15] = ProtoInstance1727;

let ProtoInstance1781 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1781.name = "Joint";
ProtoInstance1781.DEF = "hanim_r_elbow";
let fieldValue1782 = browser.currentScene.createNode("fieldValue");
fieldValue1782.name = "stiffness";
fieldValue1782.value = "1 1 1";
ProtoInstance1781.fieldValue = new MFNode();

ProtoInstance1781.fieldValue[0] = fieldValue1782;

let fieldValue1783 = browser.currentScene.createNode("fieldValue");
fieldValue1783.name = "name";
fieldValue1783.value = "r_elbow";
ProtoInstance1781.fieldValue[1] = fieldValue1783;

let fieldValue1784 = browser.currentScene.createNode("fieldValue");
fieldValue1784.name = "center";
fieldValue1784.value = "-0.1949000060558319 1.138800024986267 -0.06199999898672104";
ProtoInstance1781.fieldValue[2] = fieldValue1784;

let fieldValue1785 = browser.currentScene.createNode("fieldValue");
fieldValue1785.name = "children";
let ProtoInstance1786 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1786.name = "Joint";
ProtoInstance1786.DEF = "hanim_r_radiocarpal";
let fieldValue1787 = browser.currentScene.createNode("fieldValue");
fieldValue1787.name = "stiffness";
fieldValue1787.value = "1 1 1";
ProtoInstance1786.fieldValue = new MFNode();

ProtoInstance1786.fieldValue[0] = fieldValue1787;

let fieldValue1788 = browser.currentScene.createNode("fieldValue");
fieldValue1788.name = "name";
fieldValue1788.value = "r_radiocarpal";
ProtoInstance1786.fieldValue[1] = fieldValue1788;

let fieldValue1789 = browser.currentScene.createNode("fieldValue");
fieldValue1789.name = "center";
fieldValue1789.value = "-0.19589999318122864 0.8694000244140625 -0.05209999904036522";
ProtoInstance1786.fieldValue[2] = fieldValue1789;

let fieldValue1790 = browser.currentScene.createNode("fieldValue");
fieldValue1790.name = "children";
let ProtoInstance1791 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1791.name = "Segment";
ProtoInstance1791.DEF = "hanim_r_hand";
let fieldValue1792 = browser.currentScene.createNode("fieldValue");
fieldValue1792.name = "name";
fieldValue1792.value = "r_hand";
ProtoInstance1791.fieldValue = new MFNode();

ProtoInstance1791.fieldValue[0] = fieldValue1792;

let fieldValue1793 = browser.currentScene.createNode("fieldValue");
fieldValue1793.name = "children";
let ProtoInstance1794 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1794.name = "Site";
ProtoInstance1794.DEF = "hanim_r_hand_tip";
let fieldValue1795 = browser.currentScene.createNode("fieldValue");
fieldValue1795.name = "name";
fieldValue1795.value = "r_hand_tip";
ProtoInstance1794.fieldValue = new MFNode();

ProtoInstance1794.fieldValue[0] = fieldValue1795;

let fieldValue1796 = browser.currentScene.createNode("fieldValue");
fieldValue1796.name = "translation";
fieldValue1796.value = "-0.19689999520778656 0.6758000254631042 -0.04270000010728836";
ProtoInstance1794.fieldValue[1] = fieldValue1796;

fieldValue1793.children = new MFNode();

fieldValue1793.children[0] = ProtoInstance1794;

let ProtoInstance1797 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1797.name = "Site";
ProtoInstance1797.DEF = "hanim_r_metacarpal_phalanx_2";
let fieldValue1798 = browser.currentScene.createNode("fieldValue");
fieldValue1798.name = "name";
fieldValue1798.value = "r_metacarpal_phalanx_2";
ProtoInstance1797.fieldValue = new MFNode();

ProtoInstance1797.fieldValue[0] = fieldValue1798;

let fieldValue1799 = browser.currentScene.createNode("fieldValue");
fieldValue1799.name = "translation";
fieldValue1799.value = "-0.19769999384880066 0.8169000148773193 -0.01769999973475933";
ProtoInstance1797.fieldValue[1] = fieldValue1799;

fieldValue1793.children[1] = ProtoInstance1797;

let ProtoInstance1800 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1800.name = "Site";
ProtoInstance1800.DEF = "hanim_r_dactylion";
let fieldValue1801 = browser.currentScene.createNode("fieldValue");
fieldValue1801.name = "name";
fieldValue1801.value = "r_dactylion";
ProtoInstance1800.fieldValue = new MFNode();

ProtoInstance1800.fieldValue[0] = fieldValue1801;

let fieldValue1802 = browser.currentScene.createNode("fieldValue");
fieldValue1802.name = "translation";
fieldValue1802.value = "-0.1941000074148178 0.6772000193595886 -0.04230000078678131";
ProtoInstance1800.fieldValue[1] = fieldValue1802;

fieldValue1793.children[2] = ProtoInstance1800;

let ProtoInstance1803 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1803.name = "Site";
ProtoInstance1803.DEF = "hanim_r_ulnar_styloid";
let fieldValue1804 = browser.currentScene.createNode("fieldValue");
fieldValue1804.name = "name";
fieldValue1804.value = "r_ulnar_styloid";
ProtoInstance1803.fieldValue = new MFNode();

ProtoInstance1803.fieldValue[0] = fieldValue1804;

let fieldValue1805 = browser.currentScene.createNode("fieldValue");
fieldValue1805.name = "translation";
fieldValue1805.value = "-0.21170000731945038 0.8561999797821045 -0.058400001376867294";
ProtoInstance1803.fieldValue[1] = fieldValue1805;

fieldValue1793.children[3] = ProtoInstance1803;

let ProtoInstance1806 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1806.name = "Site";
ProtoInstance1806.DEF = "hanim_r_metacarpal_phalanx_5";
let fieldValue1807 = browser.currentScene.createNode("fieldValue");
fieldValue1807.name = "name";
fieldValue1807.value = "r_metacarpal_phalanx_5";
ProtoInstance1806.fieldValue = new MFNode();

ProtoInstance1806.fieldValue[0] = fieldValue1807;

let fieldValue1808 = browser.currentScene.createNode("fieldValue");
fieldValue1808.name = "translation";
fieldValue1808.value = "-0.19290000200271606 0.7889999747276306 -0.10639999806880951";
ProtoInstance1806.fieldValue[1] = fieldValue1808;

fieldValue1793.children[4] = ProtoInstance1806;

ProtoInstance1791.fieldValue[1] = fieldValue1793;

fieldValue1790.children = new MFNode();

fieldValue1790.children[0] = ProtoInstance1791;

ProtoInstance1786.fieldValue[3] = fieldValue1790;

fieldValue1785.children = new MFNode();

fieldValue1785.children[0] = ProtoInstance1786;

let ProtoInstance1809 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1809.name = "Segment";
ProtoInstance1809.DEF = "hanim_r_forearm";
let fieldValue1810 = browser.currentScene.createNode("fieldValue");
fieldValue1810.name = "name";
fieldValue1810.value = "r_forearm";
ProtoInstance1809.fieldValue = new MFNode();

ProtoInstance1809.fieldValue[0] = fieldValue1810;

let fieldValue1811 = browser.currentScene.createNode("fieldValue");
fieldValue1811.name = "children";
let ProtoInstance1812 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1812.name = "Site";
ProtoInstance1812.DEF = "hanim_r_radial_styloid";
let fieldValue1813 = browser.currentScene.createNode("fieldValue");
fieldValue1813.name = "name";
fieldValue1813.value = "r_radial_styloid";
ProtoInstance1812.fieldValue = new MFNode();

ProtoInstance1812.fieldValue[0] = fieldValue1813;

let fieldValue1814 = browser.currentScene.createNode("fieldValue");
fieldValue1814.name = "translation";
fieldValue1814.value = "-0.188400000333786 0.8676000237464905 -0.035999998450279236";
ProtoInstance1812.fieldValue[1] = fieldValue1814;

fieldValue1811.children = new MFNode();

fieldValue1811.children[0] = ProtoInstance1812;

let ProtoInstance1815 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1815.name = "Site";
ProtoInstance1815.DEF = "hanim_r_olecranon";
let fieldValue1816 = browser.currentScene.createNode("fieldValue");
fieldValue1816.name = "name";
fieldValue1816.value = "r_olecranon";
ProtoInstance1815.fieldValue = new MFNode();

ProtoInstance1815.fieldValue[0] = fieldValue1816;

let fieldValue1817 = browser.currentScene.createNode("fieldValue");
fieldValue1817.name = "translation";
fieldValue1817.value = "-0.1906999945640564 1.1404999494552612 -0.10649999976158142";
ProtoInstance1815.fieldValue[1] = fieldValue1817;

fieldValue1811.children[1] = ProtoInstance1815;

let ProtoInstance1818 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1818.name = "Site";
ProtoInstance1818.DEF = "hanim_r_humeral_medial_epicondyles";
let fieldValue1819 = browser.currentScene.createNode("fieldValue");
fieldValue1819.name = "name";
fieldValue1819.value = "r_humeral_medial_epicondyles";
ProtoInstance1818.fieldValue = new MFNode();

ProtoInstance1818.fieldValue[0] = fieldValue1819;

let fieldValue1820 = browser.currentScene.createNode("fieldValue");
fieldValue1820.name = "translation";
fieldValue1820.value = "-0.1679999977350235 1.1297999620437622 -0.10620000213384628";
ProtoInstance1818.fieldValue[1] = fieldValue1820;

fieldValue1811.children[2] = ProtoInstance1818;

let ProtoInstance1821 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1821.name = "Site";
ProtoInstance1821.DEF = "hanim_r_radiale";
let fieldValue1822 = browser.currentScene.createNode("fieldValue");
fieldValue1822.name = "name";
fieldValue1822.value = "r_radiale";
ProtoInstance1821.fieldValue = new MFNode();

ProtoInstance1821.fieldValue[0] = fieldValue1822;

let fieldValue1823 = browser.currentScene.createNode("fieldValue");
fieldValue1823.name = "translation";
fieldValue1823.value = "-0.21299999952316284 1.1304999589920044 -0.10909999907016754";
ProtoInstance1821.fieldValue[1] = fieldValue1823;

fieldValue1811.children[3] = ProtoInstance1821;

ProtoInstance1809.fieldValue[1] = fieldValue1811;

fieldValue1785.children[1] = ProtoInstance1809;

ProtoInstance1781.fieldValue[3] = fieldValue1785;

fieldValue493.children[16] = ProtoInstance1781;

let ProtoInstance1824 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1824.name = "Joint";
ProtoInstance1824.DEF = "hanim_r_radiocarpal";
let fieldValue1825 = browser.currentScene.createNode("fieldValue");
fieldValue1825.name = "stiffness";
fieldValue1825.value = "1 1 1";
ProtoInstance1824.fieldValue = new MFNode();

ProtoInstance1824.fieldValue[0] = fieldValue1825;

let fieldValue1826 = browser.currentScene.createNode("fieldValue");
fieldValue1826.name = "name";
fieldValue1826.value = "r_radiocarpal";
ProtoInstance1824.fieldValue[1] = fieldValue1826;

let fieldValue1827 = browser.currentScene.createNode("fieldValue");
fieldValue1827.name = "center";
fieldValue1827.value = "-0.19589999318122864 0.8694000244140625 -0.05209999904036522";
ProtoInstance1824.fieldValue[2] = fieldValue1827;

let fieldValue1828 = browser.currentScene.createNode("fieldValue");
fieldValue1828.name = "children";
let ProtoInstance1829 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1829.name = "Segment";
ProtoInstance1829.DEF = "hanim_r_hand";
let fieldValue1830 = browser.currentScene.createNode("fieldValue");
fieldValue1830.name = "name";
fieldValue1830.value = "r_hand";
ProtoInstance1829.fieldValue = new MFNode();

ProtoInstance1829.fieldValue[0] = fieldValue1830;

let fieldValue1831 = browser.currentScene.createNode("fieldValue");
fieldValue1831.name = "children";
let ProtoInstance1832 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1832.name = "Site";
ProtoInstance1832.DEF = "hanim_r_hand_tip";
let fieldValue1833 = browser.currentScene.createNode("fieldValue");
fieldValue1833.name = "name";
fieldValue1833.value = "r_hand_tip";
ProtoInstance1832.fieldValue = new MFNode();

ProtoInstance1832.fieldValue[0] = fieldValue1833;

let fieldValue1834 = browser.currentScene.createNode("fieldValue");
fieldValue1834.name = "translation";
fieldValue1834.value = "-0.19689999520778656 0.6758000254631042 -0.04270000010728836";
ProtoInstance1832.fieldValue[1] = fieldValue1834;

fieldValue1831.children = new MFNode();

fieldValue1831.children[0] = ProtoInstance1832;

let ProtoInstance1835 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1835.name = "Site";
ProtoInstance1835.DEF = "hanim_r_metacarpal_phalanx_2";
let fieldValue1836 = browser.currentScene.createNode("fieldValue");
fieldValue1836.name = "name";
fieldValue1836.value = "r_metacarpal_phalanx_2";
ProtoInstance1835.fieldValue = new MFNode();

ProtoInstance1835.fieldValue[0] = fieldValue1836;

let fieldValue1837 = browser.currentScene.createNode("fieldValue");
fieldValue1837.name = "translation";
fieldValue1837.value = "-0.19769999384880066 0.8169000148773193 -0.01769999973475933";
ProtoInstance1835.fieldValue[1] = fieldValue1837;

fieldValue1831.children[1] = ProtoInstance1835;

let ProtoInstance1838 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1838.name = "Site";
ProtoInstance1838.DEF = "hanim_r_dactylion";
let fieldValue1839 = browser.currentScene.createNode("fieldValue");
fieldValue1839.name = "name";
fieldValue1839.value = "r_dactylion";
ProtoInstance1838.fieldValue = new MFNode();

ProtoInstance1838.fieldValue[0] = fieldValue1839;

let fieldValue1840 = browser.currentScene.createNode("fieldValue");
fieldValue1840.name = "translation";
fieldValue1840.value = "-0.1941000074148178 0.6772000193595886 -0.04230000078678131";
ProtoInstance1838.fieldValue[1] = fieldValue1840;

fieldValue1831.children[2] = ProtoInstance1838;

let ProtoInstance1841 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1841.name = "Site";
ProtoInstance1841.DEF = "hanim_r_ulnar_styloid";
let fieldValue1842 = browser.currentScene.createNode("fieldValue");
fieldValue1842.name = "name";
fieldValue1842.value = "r_ulnar_styloid";
ProtoInstance1841.fieldValue = new MFNode();

ProtoInstance1841.fieldValue[0] = fieldValue1842;

let fieldValue1843 = browser.currentScene.createNode("fieldValue");
fieldValue1843.name = "translation";
fieldValue1843.value = "-0.21170000731945038 0.8561999797821045 -0.058400001376867294";
ProtoInstance1841.fieldValue[1] = fieldValue1843;

fieldValue1831.children[3] = ProtoInstance1841;

let ProtoInstance1844 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1844.name = "Site";
ProtoInstance1844.DEF = "hanim_r_metacarpal_phalanx_5";
let fieldValue1845 = browser.currentScene.createNode("fieldValue");
fieldValue1845.name = "name";
fieldValue1845.value = "r_metacarpal_phalanx_5";
ProtoInstance1844.fieldValue = new MFNode();

ProtoInstance1844.fieldValue[0] = fieldValue1845;

let fieldValue1846 = browser.currentScene.createNode("fieldValue");
fieldValue1846.name = "translation";
fieldValue1846.value = "-0.19290000200271606 0.7889999747276306 -0.10639999806880951";
ProtoInstance1844.fieldValue[1] = fieldValue1846;

fieldValue1831.children[4] = ProtoInstance1844;

ProtoInstance1829.fieldValue[1] = fieldValue1831;

fieldValue1828.children = new MFNode();

fieldValue1828.children[0] = ProtoInstance1829;

ProtoInstance1824.fieldValue[3] = fieldValue1828;

fieldValue493.children[17] = ProtoInstance1824;

ProtoInstance107.fieldValue[1] = fieldValue493;

let fieldValue1847 = browser.currentScene.createNode("fieldValue");
fieldValue1847.name = "segments";
let ProtoInstance1848 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1848.name = "Segment";
ProtoInstance1848.DEF = "hanim_l_middistal";
let fieldValue1849 = browser.currentScene.createNode("fieldValue");
fieldValue1849.name = "name";
fieldValue1849.value = "l_middistal";
ProtoInstance1848.fieldValue = new MFNode();

ProtoInstance1848.fieldValue[0] = fieldValue1849;

let fieldValue1850 = browser.currentScene.createNode("fieldValue");
fieldValue1850.name = "children";
let ProtoInstance1851 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1851.name = "Site";
ProtoInstance1851.DEF = "hanim_l_middistal_tip";
let fieldValue1852 = browser.currentScene.createNode("fieldValue");
fieldValue1852.name = "name";
fieldValue1852.value = "l_middistal_tip";
ProtoInstance1851.fieldValue = new MFNode();

ProtoInstance1851.fieldValue[0] = fieldValue1852;

let fieldValue1853 = browser.currentScene.createNode("fieldValue");
fieldValue1853.name = "translation";
fieldValue1853.value = "0.13539999723434448 0.0015999999595806003 0.147599995136261";
ProtoInstance1851.fieldValue[1] = fieldValue1853;

fieldValue1850.children = new MFNode();

fieldValue1850.children[0] = ProtoInstance1851;

let ProtoInstance1854 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1854.name = "Site";
ProtoInstance1854.DEF = "hanim_l_tarsal_interphalangeal_phalanx_5";
let fieldValue1855 = browser.currentScene.createNode("fieldValue");
fieldValue1855.name = "name";
fieldValue1855.value = "l_tarsal_interphalangeal_phalanx_5";
ProtoInstance1854.fieldValue = new MFNode();

ProtoInstance1854.fieldValue[0] = fieldValue1855;

let fieldValue1856 = browser.currentScene.createNode("fieldValue");
fieldValue1856.name = "translation";
fieldValue1856.value = "0.18250000476837158 0.007000000216066837 0.09279999881982803";
ProtoInstance1854.fieldValue[1] = fieldValue1856;

fieldValue1850.children[1] = ProtoInstance1854;

let ProtoInstance1857 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1857.name = "Site";
ProtoInstance1857.DEF = "hanim_l_tarsal_interphalangeal_phalanx_1";
let fieldValue1858 = browser.currentScene.createNode("fieldValue");
fieldValue1858.name = "name";
fieldValue1858.value = "l_tarsal_interphalangeal_phalanx_1";
ProtoInstance1857.fieldValue = new MFNode();

ProtoInstance1857.fieldValue[0] = fieldValue1858;

let fieldValue1859 = browser.currentScene.createNode("fieldValue");
fieldValue1859.name = "translation";
fieldValue1859.value = "0.08160000294446945 0.02319999970495701 0.010599999688565731";
ProtoInstance1857.fieldValue[1] = fieldValue1859;

fieldValue1850.children[2] = ProtoInstance1857;

let ProtoInstance1860 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1860.name = "Site";
ProtoInstance1860.DEF = "hanim_l_tarsal_distal_phalanx_2";
let fieldValue1861 = browser.currentScene.createNode("fieldValue");
fieldValue1861.name = "name";
fieldValue1861.value = "l_tarsal_distal_phalanx_2";
ProtoInstance1860.fieldValue = new MFNode();

ProtoInstance1860.fieldValue[0] = fieldValue1861;

let fieldValue1862 = browser.currentScene.createNode("fieldValue");
fieldValue1862.name = "translation";
fieldValue1862.value = "0.11949999630451202 0.007899999618530273 0.14329999685287476";
ProtoInstance1860.fieldValue[1] = fieldValue1862;

fieldValue1850.children[3] = ProtoInstance1860;

ProtoInstance1848.fieldValue[1] = fieldValue1850;

fieldValue1847.children = new MFNode();

fieldValue1847.children[0] = ProtoInstance1848;

let ProtoInstance1863 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1863.name = "Segment";
ProtoInstance1863.DEF = "hanim_l_hindfoot";
let fieldValue1864 = browser.currentScene.createNode("fieldValue");
fieldValue1864.name = "name";
fieldValue1864.value = "l_hindfoot";
ProtoInstance1863.fieldValue = new MFNode();

ProtoInstance1863.fieldValue[0] = fieldValue1864;

let fieldValue1865 = browser.currentScene.createNode("fieldValue");
fieldValue1865.name = "children";
let ProtoInstance1866 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1866.name = "Site";
ProtoInstance1866.DEF = "hanim_l_lateral_malleolus";
let fieldValue1867 = browser.currentScene.createNode("fieldValue");
fieldValue1867.name = "name";
fieldValue1867.value = "l_lateral_malleolus";
ProtoInstance1866.fieldValue = new MFNode();

ProtoInstance1866.fieldValue[0] = fieldValue1867;

let fieldValue1868 = browser.currentScene.createNode("fieldValue");
fieldValue1868.name = "translation";
fieldValue1868.value = "0.13079999387264252 0.059700001031160355 -0.10320000350475311";
ProtoInstance1866.fieldValue[1] = fieldValue1868;

fieldValue1865.children = new MFNode();

fieldValue1865.children[0] = ProtoInstance1866;

let ProtoInstance1869 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1869.name = "Site";
ProtoInstance1869.DEF = "hanim_l_medial_malleolus";
let fieldValue1870 = browser.currentScene.createNode("fieldValue");
fieldValue1870.name = "name";
fieldValue1870.value = "l_medial_malleolus";
ProtoInstance1869.fieldValue = new MFNode();

ProtoInstance1869.fieldValue[0] = fieldValue1870;

let fieldValue1871 = browser.currentScene.createNode("fieldValue");
fieldValue1871.name = "translation";
fieldValue1871.value = "0.08900000154972076 0.07159999758005142 -0.08810000121593475";
ProtoInstance1869.fieldValue[1] = fieldValue1871;

fieldValue1865.children[1] = ProtoInstance1869;

let ProtoInstance1872 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1872.name = "Site";
ProtoInstance1872.DEF = "hanim_l_sphyrion";
let fieldValue1873 = browser.currentScene.createNode("fieldValue");
fieldValue1873.name = "name";
fieldValue1873.value = "l_sphyrion";
ProtoInstance1872.fieldValue = new MFNode();

ProtoInstance1872.fieldValue[0] = fieldValue1873;

let fieldValue1874 = browser.currentScene.createNode("fieldValue");
fieldValue1874.name = "translation";
fieldValue1874.value = "0.08900000154972076 0.057500001043081284 -0.09430000185966492";
ProtoInstance1872.fieldValue[1] = fieldValue1874;

fieldValue1865.children[2] = ProtoInstance1872;

let ProtoInstance1875 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1875.name = "Site";
ProtoInstance1875.DEF = "hanim_l_calcaneus_posterior";
let fieldValue1876 = browser.currentScene.createNode("fieldValue");
fieldValue1876.name = "name";
fieldValue1876.value = "l_calcaneus_posterior";
ProtoInstance1875.fieldValue = new MFNode();

ProtoInstance1875.fieldValue[0] = fieldValue1876;

let fieldValue1877 = browser.currentScene.createNode("fieldValue");
fieldValue1877.name = "translation";
fieldValue1877.value = "0.09740000218153 0.02590000070631504 -0.11710000038146973";
ProtoInstance1875.fieldValue[1] = fieldValue1877;

fieldValue1865.children[3] = ProtoInstance1875;

ProtoInstance1863.fieldValue[1] = fieldValue1865;

fieldValue1847.children[1] = ProtoInstance1863;

let ProtoInstance1878 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1878.name = "Segment";
ProtoInstance1878.DEF = "hanim_l_calf";
let fieldValue1879 = browser.currentScene.createNode("fieldValue");
fieldValue1879.name = "name";
fieldValue1879.value = "l_calf";
ProtoInstance1878.fieldValue = new MFNode();

ProtoInstance1878.fieldValue[0] = fieldValue1879;

fieldValue1847.children[2] = ProtoInstance1878;

let ProtoInstance1880 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1880.name = "Segment";
ProtoInstance1880.DEF = "hanim_l_thigh";
let fieldValue1881 = browser.currentScene.createNode("fieldValue");
fieldValue1881.name = "name";
fieldValue1881.value = "l_thigh";
ProtoInstance1880.fieldValue = new MFNode();

ProtoInstance1880.fieldValue[0] = fieldValue1881;

let fieldValue1882 = browser.currentScene.createNode("fieldValue");
fieldValue1882.name = "children";
let ProtoInstance1883 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1883.name = "Site";
ProtoInstance1883.DEF = "hanim_l_knee_crease";
let fieldValue1884 = browser.currentScene.createNode("fieldValue");
fieldValue1884.name = "name";
fieldValue1884.value = "l_knee_crease";
ProtoInstance1883.fieldValue = new MFNode();

ProtoInstance1883.fieldValue[0] = fieldValue1884;

let fieldValue1885 = browser.currentScene.createNode("fieldValue");
fieldValue1885.name = "translation";
fieldValue1885.value = "0.09929999709129333 0.48809999227523804 -0.030899999663233757";
ProtoInstance1883.fieldValue[1] = fieldValue1885;

fieldValue1882.children = new MFNode();

fieldValue1882.children[0] = ProtoInstance1883;

let ProtoInstance1886 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1886.name = "Site";
ProtoInstance1886.DEF = "hanim_l_femoral_lateral_epicondyles";
let fieldValue1887 = browser.currentScene.createNode("fieldValue");
fieldValue1887.name = "name";
fieldValue1887.value = "l_femoral_lateral_epicondyles";
ProtoInstance1886.fieldValue = new MFNode();

ProtoInstance1886.fieldValue[0] = fieldValue1887;

let fieldValue1888 = browser.currentScene.createNode("fieldValue");
fieldValue1888.name = "translation";
fieldValue1888.value = "0.1597999930381775 0.4966999888420105 0.02969999983906746";
ProtoInstance1886.fieldValue[1] = fieldValue1888;

fieldValue1882.children[1] = ProtoInstance1886;

let ProtoInstance1889 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1889.name = "Site";
ProtoInstance1889.DEF = "hanim_l_femoral_medial_epicondyles";
let fieldValue1890 = browser.currentScene.createNode("fieldValue");
fieldValue1890.name = "name";
fieldValue1890.value = "l_femoral_lateral_epicondyles";
ProtoInstance1889.fieldValue = new MFNode();

ProtoInstance1889.fieldValue[0] = fieldValue1890;

let fieldValue1891 = browser.currentScene.createNode("fieldValue");
fieldValue1891.name = "translation";
fieldValue1891.value = "0.039799999445676804 0.49459999799728394 0.030300000682473183";
ProtoInstance1889.fieldValue[1] = fieldValue1891;

fieldValue1882.children[2] = ProtoInstance1889;

ProtoInstance1880.fieldValue[1] = fieldValue1882;

fieldValue1847.children[3] = ProtoInstance1880;

let ProtoInstance1892 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1892.name = "Segment";
ProtoInstance1892.DEF = "hanim_r_middistal";
let fieldValue1893 = browser.currentScene.createNode("fieldValue");
fieldValue1893.name = "name";
fieldValue1893.value = "r_middistal";
ProtoInstance1892.fieldValue = new MFNode();

ProtoInstance1892.fieldValue[0] = fieldValue1893;

let fieldValue1894 = browser.currentScene.createNode("fieldValue");
fieldValue1894.name = "children";
let ProtoInstance1895 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1895.name = "Site";
ProtoInstance1895.DEF = "hanim_r_middistal_tip";
let fieldValue1896 = browser.currentScene.createNode("fieldValue");
fieldValue1896.name = "name";
fieldValue1896.value = "r_middistal_tip";
ProtoInstance1895.fieldValue = new MFNode();

ProtoInstance1895.fieldValue[0] = fieldValue1896;

let fieldValue1897 = browser.currentScene.createNode("fieldValue");
fieldValue1897.name = "translation";
fieldValue1897.value = "-0.10429999977350235 -0.022700000554323196 0.14499999582767487";
ProtoInstance1895.fieldValue[1] = fieldValue1897;

fieldValue1894.children = new MFNode();

fieldValue1894.children[0] = ProtoInstance1895;

let ProtoInstance1898 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1898.name = "Site";
ProtoInstance1898.DEF = "hanim_r_tarsal_interphalangeal_phalanx_5";
let fieldValue1899 = browser.currentScene.createNode("fieldValue");
fieldValue1899.name = "name";
fieldValue1899.value = "r_tarsal_interphalangeal_phalanx_5";
ProtoInstance1898.fieldValue = new MFNode();

ProtoInstance1898.fieldValue[0] = fieldValue1899;

let fieldValue1900 = browser.currentScene.createNode("fieldValue");
fieldValue1900.name = "translation";
fieldValue1900.value = "-0.15230000019073486 0.016599999740719795 0.08950000256299973";
ProtoInstance1898.fieldValue[1] = fieldValue1900;

fieldValue1894.children[1] = ProtoInstance1898;

let ProtoInstance1901 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1901.name = "Site";
ProtoInstance1901.DEF = "hanim_r_tarsal_interphalangeal_phalanx_1";
let fieldValue1902 = browser.currentScene.createNode("fieldValue");
fieldValue1902.name = "name";
fieldValue1902.value = "r_tarsal_interphalangeal_phalanx_1";
ProtoInstance1901.fieldValue = new MFNode();

ProtoInstance1901.fieldValue[0] = fieldValue1902;

let fieldValue1903 = browser.currentScene.createNode("fieldValue");
fieldValue1903.name = "translation";
fieldValue1903.value = "-0.05209999904036522 0.026000000536441803 0.01269999984651804";
ProtoInstance1901.fieldValue[1] = fieldValue1903;

fieldValue1894.children[2] = ProtoInstance1901;

let ProtoInstance1904 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1904.name = "Site";
ProtoInstance1904.DEF = "hanim_r_tarsal_distal_phalanx_2";
let fieldValue1905 = browser.currentScene.createNode("fieldValue");
fieldValue1905.name = "name";
fieldValue1905.value = "r_tarsal_distal_phalanx_2";
ProtoInstance1904.fieldValue = new MFNode();

ProtoInstance1904.fieldValue[0] = fieldValue1905;

let fieldValue1906 = browser.currentScene.createNode("fieldValue");
fieldValue1906.name = "translation";
fieldValue1906.value = "-0.08829999715089798 0.013399999588727951 0.13830000162124634";
ProtoInstance1904.fieldValue[1] = fieldValue1906;

fieldValue1894.children[3] = ProtoInstance1904;

ProtoInstance1892.fieldValue[1] = fieldValue1894;

fieldValue1847.children[4] = ProtoInstance1892;

let ProtoInstance1907 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1907.name = "Segment";
ProtoInstance1907.DEF = "hanim_r_hindfoot";
let fieldValue1908 = browser.currentScene.createNode("fieldValue");
fieldValue1908.name = "name";
fieldValue1908.value = "r_hindfoot";
ProtoInstance1907.fieldValue = new MFNode();

ProtoInstance1907.fieldValue[0] = fieldValue1908;

let fieldValue1909 = browser.currentScene.createNode("fieldValue");
fieldValue1909.name = "children";
let ProtoInstance1910 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1910.name = "Site";
ProtoInstance1910.DEF = "hanim_r_lateral_malleolus";
let fieldValue1911 = browser.currentScene.createNode("fieldValue");
fieldValue1911.name = "name";
fieldValue1911.value = "r_lateral_malleolus";
ProtoInstance1910.fieldValue = new MFNode();

ProtoInstance1910.fieldValue[0] = fieldValue1911;

let fieldValue1912 = browser.currentScene.createNode("fieldValue");
fieldValue1912.name = "translation";
fieldValue1912.value = "-0.1005999967455864 0.0658000037074089 -0.10750000178813934";
ProtoInstance1910.fieldValue[1] = fieldValue1912;

fieldValue1909.children = new MFNode();

fieldValue1909.children[0] = ProtoInstance1910;

let ProtoInstance1913 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1913.name = "Site";
ProtoInstance1913.DEF = "hanim_r_medial_malleolus";
let fieldValue1914 = browser.currentScene.createNode("fieldValue");
fieldValue1914.name = "name";
fieldValue1914.value = "r_medial_malleolus";
ProtoInstance1913.fieldValue = new MFNode();

ProtoInstance1913.fieldValue[0] = fieldValue1914;

let fieldValue1915 = browser.currentScene.createNode("fieldValue");
fieldValue1915.name = "translation";
fieldValue1915.value = "-0.05909999832510948 0.07599999755620956 -0.09279999881982803";
ProtoInstance1913.fieldValue[1] = fieldValue1915;

fieldValue1909.children[1] = ProtoInstance1913;

let ProtoInstance1916 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1916.name = "Site";
ProtoInstance1916.DEF = "hanim_r_sphyrion";
let fieldValue1917 = browser.currentScene.createNode("fieldValue");
fieldValue1917.name = "name";
fieldValue1917.value = "r_sphyrion";
ProtoInstance1916.fieldValue = new MFNode();

ProtoInstance1916.fieldValue[0] = fieldValue1917;

let fieldValue1918 = browser.currentScene.createNode("fieldValue");
fieldValue1918.name = "translation";
fieldValue1918.value = "-0.06030000001192093 0.061000000685453415 -0.10019999742507935";
ProtoInstance1916.fieldValue[1] = fieldValue1918;

fieldValue1909.children[2] = ProtoInstance1916;

let ProtoInstance1919 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1919.name = "Site";
ProtoInstance1919.DEF = "hanim_r_calcaneus_posterior";
let fieldValue1920 = browser.currentScene.createNode("fieldValue");
fieldValue1920.name = "name";
fieldValue1920.value = "r_calcaneus_posterior";
ProtoInstance1919.fieldValue = new MFNode();

ProtoInstance1919.fieldValue[0] = fieldValue1920;

let fieldValue1921 = browser.currentScene.createNode("fieldValue");
fieldValue1921.name = "translation";
fieldValue1921.value = "-0.06920000165700912 0.02969999983906746 -0.12210000306367874";
ProtoInstance1919.fieldValue[1] = fieldValue1921;

fieldValue1909.children[3] = ProtoInstance1919;

ProtoInstance1907.fieldValue[1] = fieldValue1909;

fieldValue1847.children[5] = ProtoInstance1907;

let ProtoInstance1922 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1922.name = "Segment";
ProtoInstance1922.DEF = "hanim_r_calf";
let fieldValue1923 = browser.currentScene.createNode("fieldValue");
fieldValue1923.name = "name";
fieldValue1923.value = "r_calf";
ProtoInstance1922.fieldValue = new MFNode();

ProtoInstance1922.fieldValue[0] = fieldValue1923;

fieldValue1847.children[6] = ProtoInstance1922;

let ProtoInstance1924 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1924.name = "Segment";
ProtoInstance1924.DEF = "hanim_r_thigh";
let fieldValue1925 = browser.currentScene.createNode("fieldValue");
fieldValue1925.name = "name";
fieldValue1925.value = "r_thigh";
ProtoInstance1924.fieldValue = new MFNode();

ProtoInstance1924.fieldValue[0] = fieldValue1925;

let fieldValue1926 = browser.currentScene.createNode("fieldValue");
fieldValue1926.name = "children";
let ProtoInstance1927 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1927.name = "Site";
ProtoInstance1927.DEF = "hanim_r_knee_crease";
let fieldValue1928 = browser.currentScene.createNode("fieldValue");
fieldValue1928.name = "name";
fieldValue1928.value = "r_knee_crease";
ProtoInstance1927.fieldValue = new MFNode();

ProtoInstance1927.fieldValue[0] = fieldValue1928;

let fieldValue1929 = browser.currentScene.createNode("fieldValue");
fieldValue1929.name = "translation";
fieldValue1929.value = "-0.08250000327825546 0.49320000410079956 -0.032600000500679016";
ProtoInstance1927.fieldValue[1] = fieldValue1929;

fieldValue1926.children = new MFNode();

fieldValue1926.children[0] = ProtoInstance1927;

let ProtoInstance1930 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1930.name = "Site";
ProtoInstance1930.DEF = "hanim_r_femoral_lateral_epicondyles";
let fieldValue1931 = browser.currentScene.createNode("fieldValue");
fieldValue1931.name = "name";
fieldValue1931.value = "r_femoral_lateral_epicondyles";
ProtoInstance1930.fieldValue = new MFNode();

ProtoInstance1930.fieldValue[0] = fieldValue1931;

let fieldValue1932 = browser.currentScene.createNode("fieldValue");
fieldValue1932.name = "translation";
fieldValue1932.value = "-0.1421000063419342 0.4991999864578247 0.03099999949336052";
ProtoInstance1930.fieldValue[1] = fieldValue1932;

fieldValue1926.children[1] = ProtoInstance1930;

let ProtoInstance1933 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1933.name = "Site";
ProtoInstance1933.DEF = "hanim_r_femoral_medial_epicondyles";
let fieldValue1934 = browser.currentScene.createNode("fieldValue");
fieldValue1934.name = "name";
fieldValue1934.value = "r_femoral_lateral_epicondyles";
ProtoInstance1933.fieldValue = new MFNode();

ProtoInstance1933.fieldValue[0] = fieldValue1934;

let fieldValue1935 = browser.currentScene.createNode("fieldValue");
fieldValue1935.name = "translation";
fieldValue1935.value = "-0.022099999710917473 0.5013999938964844 0.02889999933540821";
ProtoInstance1933.fieldValue[1] = fieldValue1935;

fieldValue1926.children[2] = ProtoInstance1933;

ProtoInstance1924.fieldValue[1] = fieldValue1926;

fieldValue1847.children[7] = ProtoInstance1924;

let ProtoInstance1936 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1936.name = "Segment";
ProtoInstance1936.DEF = "hanim_pelvis";
let fieldValue1937 = browser.currentScene.createNode("fieldValue");
fieldValue1937.name = "name";
fieldValue1937.value = "pelvis";
ProtoInstance1936.fieldValue = new MFNode();

ProtoInstance1936.fieldValue[0] = fieldValue1937;

fieldValue1847.children[8] = ProtoInstance1936;

let ProtoInstance1938 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1938.name = "Segment";
ProtoInstance1938.DEF = "hanim_skull";
let fieldValue1939 = browser.currentScene.createNode("fieldValue");
fieldValue1939.name = "name";
fieldValue1939.value = "skull";
ProtoInstance1938.fieldValue = new MFNode();

ProtoInstance1938.fieldValue[0] = fieldValue1939;

let fieldValue1940 = browser.currentScene.createNode("fieldValue");
fieldValue1940.name = "children";
let ProtoInstance1941 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1941.name = "Site";
ProtoInstance1941.DEF = "hanim_skull_tip";
let fieldValue1942 = browser.currentScene.createNode("fieldValue");
fieldValue1942.name = "name";
fieldValue1942.value = "skull_tip";
ProtoInstance1941.fieldValue = new MFNode();

ProtoInstance1941.fieldValue[0] = fieldValue1942;

let fieldValue1943 = browser.currentScene.createNode("fieldValue");
fieldValue1943.name = "translation";
fieldValue1943.value = "0.004999999888241291 1.7503999471664429 0.005499999970197678";
ProtoInstance1941.fieldValue[1] = fieldValue1943;

fieldValue1940.children = new MFNode();

fieldValue1940.children[0] = ProtoInstance1941;

let ProtoInstance1944 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1944.name = "Site";
ProtoInstance1944.DEF = "hanim_sellion";
let fieldValue1945 = browser.currentScene.createNode("fieldValue");
fieldValue1945.name = "name";
fieldValue1945.value = "sellion";
ProtoInstance1944.fieldValue = new MFNode();

ProtoInstance1944.fieldValue[0] = fieldValue1945;

let fieldValue1946 = browser.currentScene.createNode("fieldValue");
fieldValue1946.name = "translation";
fieldValue1946.value = "0.005799999926239252 1.631600022315979 0.0851999968290329";
ProtoInstance1944.fieldValue[1] = fieldValue1946;

fieldValue1940.children[1] = ProtoInstance1944;

let ProtoInstance1947 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1947.name = "Site";
ProtoInstance1947.DEF = "hanim_r_infraorbitale";
let fieldValue1948 = browser.currentScene.createNode("fieldValue");
fieldValue1948.name = "name";
fieldValue1948.value = "r_infraorbitale";
ProtoInstance1947.fieldValue = new MFNode();

ProtoInstance1947.fieldValue[0] = fieldValue1948;

let fieldValue1949 = browser.currentScene.createNode("fieldValue");
fieldValue1949.name = "translation";
fieldValue1949.value = "-0.02370000071823597 1.6171000003814697 0.07519999891519547";
ProtoInstance1947.fieldValue[1] = fieldValue1949;

fieldValue1940.children[2] = ProtoInstance1947;

let ProtoInstance1950 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1950.name = "Site";
ProtoInstance1950.DEF = "hanim_l_infraorbitale";
let fieldValue1951 = browser.currentScene.createNode("fieldValue");
fieldValue1951.name = "name";
fieldValue1951.value = "l_infraorbitale";
ProtoInstance1950.fieldValue = new MFNode();

ProtoInstance1950.fieldValue[0] = fieldValue1951;

let fieldValue1952 = browser.currentScene.createNode("fieldValue");
fieldValue1952.name = "translation";
fieldValue1952.value = "0.0340999998152256 1.6171000003814697 0.07519999891519547";
ProtoInstance1950.fieldValue[1] = fieldValue1952;

fieldValue1940.children[3] = ProtoInstance1950;

let ProtoInstance1953 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1953.name = "Site";
ProtoInstance1953.DEF = "hanim_supramenton";
let fieldValue1954 = browser.currentScene.createNode("fieldValue");
fieldValue1954.name = "name";
fieldValue1954.value = "supramenton";
ProtoInstance1953.fieldValue = new MFNode();

ProtoInstance1953.fieldValue[0] = fieldValue1954;

let fieldValue1955 = browser.currentScene.createNode("fieldValue");
fieldValue1955.name = "translation";
fieldValue1955.value = "0.006099999882280827 1.5410000085830688 0.08049999922513962";
ProtoInstance1953.fieldValue[1] = fieldValue1955;

fieldValue1940.children[4] = ProtoInstance1953;

let ProtoInstance1956 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1956.name = "Site";
ProtoInstance1956.DEF = "hanim_r_tragion";
let fieldValue1957 = browser.currentScene.createNode("fieldValue");
fieldValue1957.name = "name";
fieldValue1957.value = "r_tragion";
ProtoInstance1956.fieldValue = new MFNode();

ProtoInstance1956.fieldValue[0] = fieldValue1957;

let fieldValue1958 = browser.currentScene.createNode("fieldValue");
fieldValue1958.name = "translation";
fieldValue1958.value = "-0.06459999829530716 1.6346999406814575 0.03020000085234642";
ProtoInstance1956.fieldValue[1] = fieldValue1958;

fieldValue1940.children[5] = ProtoInstance1956;

let ProtoInstance1959 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1959.name = "Site";
ProtoInstance1959.DEF = "hanim_r_gonion";
let fieldValue1960 = browser.currentScene.createNode("fieldValue");
fieldValue1960.name = "name";
fieldValue1960.value = "r_gonion";
ProtoInstance1959.fieldValue = new MFNode();

ProtoInstance1959.fieldValue[0] = fieldValue1960;

let fieldValue1961 = browser.currentScene.createNode("fieldValue");
fieldValue1961.name = "translation";
fieldValue1961.value = "-0.052000001072883606 1.552899956703186 0.034699998795986176";
ProtoInstance1959.fieldValue[1] = fieldValue1961;

fieldValue1940.children[6] = ProtoInstance1959;

let ProtoInstance1962 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1962.name = "Site";
ProtoInstance1962.DEF = "hanim_l_tragion";
let fieldValue1963 = browser.currentScene.createNode("fieldValue");
fieldValue1963.name = "name";
fieldValue1963.value = "l_tragion";
ProtoInstance1962.fieldValue = new MFNode();

ProtoInstance1962.fieldValue[0] = fieldValue1963;

let fieldValue1964 = browser.currentScene.createNode("fieldValue");
fieldValue1964.name = "translation";
fieldValue1964.value = "0.0738999992609024 1.6347999572753906 0.028200000524520874";
ProtoInstance1962.fieldValue[1] = fieldValue1964;

fieldValue1940.children[7] = ProtoInstance1962;

let ProtoInstance1965 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1965.name = "Site";
ProtoInstance1965.DEF = "hanim_l_gonion";
let fieldValue1966 = browser.currentScene.createNode("fieldValue");
fieldValue1966.name = "name";
fieldValue1966.value = "l_gonion";
ProtoInstance1965.fieldValue = new MFNode();

ProtoInstance1965.fieldValue[0] = fieldValue1966;

let fieldValue1967 = browser.currentScene.createNode("fieldValue");
fieldValue1967.name = "translation";
fieldValue1967.value = "0.06310000270605087 1.5529999732971191 0.032999999821186066";
ProtoInstance1965.fieldValue[1] = fieldValue1967;

fieldValue1940.children[8] = ProtoInstance1965;

let ProtoInstance1968 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1968.name = "Site";
ProtoInstance1968.DEF = "hanim_nuchale";
let fieldValue1969 = browser.currentScene.createNode("fieldValue");
fieldValue1969.name = "name";
fieldValue1969.value = "nuchale";
ProtoInstance1968.fieldValue = new MFNode();

ProtoInstance1968.fieldValue[0] = fieldValue1969;

let fieldValue1970 = browser.currentScene.createNode("fieldValue");
fieldValue1970.name = "translation";
fieldValue1970.value = "0.0038999998942017555 1.5972000360488892 -0.07959999889135361";
ProtoInstance1968.fieldValue[1] = fieldValue1970;

fieldValue1940.children[9] = ProtoInstance1968;

ProtoInstance1938.fieldValue[1] = fieldValue1940;

fieldValue1847.children[9] = ProtoInstance1938;

let ProtoInstance1971 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1971.name = "Segment";
ProtoInstance1971.DEF = "hanim_l_hand";
let fieldValue1972 = browser.currentScene.createNode("fieldValue");
fieldValue1972.name = "name";
fieldValue1972.value = "l_hand";
ProtoInstance1971.fieldValue = new MFNode();

ProtoInstance1971.fieldValue[0] = fieldValue1972;

let fieldValue1973 = browser.currentScene.createNode("fieldValue");
fieldValue1973.name = "children";
let ProtoInstance1974 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1974.name = "Site";
ProtoInstance1974.DEF = "hanim_l_hand_tip";
let fieldValue1975 = browser.currentScene.createNode("fieldValue");
fieldValue1975.name = "name";
fieldValue1975.value = "l_hand_tip";
ProtoInstance1974.fieldValue = new MFNode();

ProtoInstance1974.fieldValue[0] = fieldValue1975;

let fieldValue1976 = browser.currentScene.createNode("fieldValue");
fieldValue1976.name = "translation";
fieldValue1976.value = "0.20800000429153442 0.6730999946594238 -0.04910000041127205";
ProtoInstance1974.fieldValue[1] = fieldValue1976;

fieldValue1973.children = new MFNode();

fieldValue1973.children[0] = ProtoInstance1974;

let ProtoInstance1977 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1977.name = "Site";
ProtoInstance1977.DEF = "hanim_l_metacarpal_phalanx_2";
let fieldValue1978 = browser.currentScene.createNode("fieldValue");
fieldValue1978.name = "name";
fieldValue1978.value = "l_metacarpal_phalanx_2";
ProtoInstance1977.fieldValue = new MFNode();

ProtoInstance1977.fieldValue[0] = fieldValue1978;

let fieldValue1979 = browser.currentScene.createNode("fieldValue");
fieldValue1979.name = "translation";
fieldValue1979.value = "0.20090000331401825 0.8138999938964844 -0.02370000071823597";
ProtoInstance1977.fieldValue[1] = fieldValue1979;

fieldValue1973.children[1] = ProtoInstance1977;

let ProtoInstance1980 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1980.name = "Site";
ProtoInstance1980.DEF = "hanim_l_dactylion";
let fieldValue1981 = browser.currentScene.createNode("fieldValue");
fieldValue1981.name = "name";
fieldValue1981.value = "l_dactylion";
ProtoInstance1980.fieldValue = new MFNode();

ProtoInstance1980.fieldValue[0] = fieldValue1981;

let fieldValue1982 = browser.currentScene.createNode("fieldValue");
fieldValue1982.name = "translation";
fieldValue1982.value = "0.20559999346733093 0.6743000149726868 -0.04820000007748604";
ProtoInstance1980.fieldValue[1] = fieldValue1982;

fieldValue1973.children[2] = ProtoInstance1980;

let ProtoInstance1983 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1983.name = "Site";
ProtoInstance1983.DEF = "hanim_l_ulnar_styloid";
let fieldValue1984 = browser.currentScene.createNode("fieldValue");
fieldValue1984.name = "name";
fieldValue1984.value = "l_ulnar_styloid";
ProtoInstance1983.fieldValue = new MFNode();

ProtoInstance1983.fieldValue[0] = fieldValue1984;

let fieldValue1985 = browser.currentScene.createNode("fieldValue");
fieldValue1985.name = "translation";
fieldValue1985.value = "-0.2142000049352646 0.8529000282287598 -0.06480000168085098";
ProtoInstance1983.fieldValue[1] = fieldValue1985;

fieldValue1973.children[3] = ProtoInstance1983;

let ProtoInstance1986 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1986.name = "Site";
ProtoInstance1986.DEF = "hanim_l_metacarpal_phalanx_5";
let fieldValue1987 = browser.currentScene.createNode("fieldValue");
fieldValue1987.name = "name";
fieldValue1987.value = "l_metacarpal_phalanx_5";
ProtoInstance1986.fieldValue = new MFNode();

ProtoInstance1986.fieldValue[0] = fieldValue1987;

let fieldValue1988 = browser.currentScene.createNode("fieldValue");
fieldValue1988.name = "translation";
fieldValue1988.value = "0.19290000200271606 0.7860000133514404 -0.11219999939203262";
ProtoInstance1986.fieldValue[1] = fieldValue1988;

fieldValue1973.children[4] = ProtoInstance1986;

ProtoInstance1971.fieldValue[1] = fieldValue1973;

fieldValue1847.children[10] = ProtoInstance1971;

let ProtoInstance1989 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1989.name = "Segment";
ProtoInstance1989.DEF = "hanim_l_forearm";
let fieldValue1990 = browser.currentScene.createNode("fieldValue");
fieldValue1990.name = "name";
fieldValue1990.value = "l_forearm";
ProtoInstance1989.fieldValue = new MFNode();

ProtoInstance1989.fieldValue[0] = fieldValue1990;

let fieldValue1991 = browser.currentScene.createNode("fieldValue");
fieldValue1991.name = "children";
let ProtoInstance1992 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1992.name = "Site";
ProtoInstance1992.DEF = "hanim_l_radial_styloid";
let fieldValue1993 = browser.currentScene.createNode("fieldValue");
fieldValue1993.name = "name";
fieldValue1993.value = "l_radial_styloid";
ProtoInstance1992.fieldValue = new MFNode();

ProtoInstance1992.fieldValue[0] = fieldValue1993;

let fieldValue1994 = browser.currentScene.createNode("fieldValue");
fieldValue1994.name = "translation";
fieldValue1994.value = "0.19009999930858612 0.8644999861717224 -0.04149999842047691";
ProtoInstance1992.fieldValue[1] = fieldValue1994;

fieldValue1991.children = new MFNode();

fieldValue1991.children[0] = ProtoInstance1992;

let ProtoInstance1995 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1995.name = "Site";
ProtoInstance1995.DEF = "hanim_l_olecranon";
let fieldValue1996 = browser.currentScene.createNode("fieldValue");
fieldValue1996.name = "name";
fieldValue1996.value = "l_olecranon";
ProtoInstance1995.fieldValue = new MFNode();

ProtoInstance1995.fieldValue[0] = fieldValue1996;

let fieldValue1997 = browser.currentScene.createNode("fieldValue");
fieldValue1997.name = "translation";
fieldValue1997.value = "-0.19619999825954437 1.1375000476837158 -0.11230000108480453";
ProtoInstance1995.fieldValue[1] = fieldValue1997;

fieldValue1991.children[1] = ProtoInstance1995;

let ProtoInstance1998 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1998.name = "Site";
ProtoInstance1998.DEF = "hanim_l_humeral_medial_epicondyles";
let fieldValue1999 = browser.currentScene.createNode("fieldValue");
fieldValue1999.name = "name";
fieldValue1999.value = "l_humeral_medial_epicondyles";
ProtoInstance1998.fieldValue = new MFNode();

ProtoInstance1998.fieldValue[0] = fieldValue1999;

let fieldValue2000 = browser.currentScene.createNode("fieldValue");
fieldValue2000.name = "translation";
fieldValue2000.value = "0.17350000143051147 1.1272000074386597 -0.11129999905824661";
ProtoInstance1998.fieldValue[1] = fieldValue2000;

fieldValue1991.children[2] = ProtoInstance1998;

let ProtoInstance2001 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2001.name = "Site";
ProtoInstance2001.DEF = "hanim_l_radiale";
let fieldValue2002 = browser.currentScene.createNode("fieldValue");
fieldValue2002.name = "name";
fieldValue2002.value = "l_radiale";
ProtoInstance2001.fieldValue = new MFNode();

ProtoInstance2001.fieldValue[0] = fieldValue2002;

let fieldValue2003 = browser.currentScene.createNode("fieldValue");
fieldValue2003.name = "translation";
fieldValue2003.value = "0.21819999814033508 1.1211999654769897 -0.11670000106096268";
ProtoInstance2001.fieldValue[1] = fieldValue2003;

fieldValue1991.children[3] = ProtoInstance2001;

ProtoInstance1989.fieldValue[1] = fieldValue1991;

fieldValue1847.children[11] = ProtoInstance1989;

let ProtoInstance2004 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2004.name = "Segment";
ProtoInstance2004.DEF = "hanim_l_upperarm";
let fieldValue2005 = browser.currentScene.createNode("fieldValue");
fieldValue2005.name = "name";
fieldValue2005.value = "l_upperarm";
ProtoInstance2004.fieldValue = new MFNode();

ProtoInstance2004.fieldValue[0] = fieldValue2005;

let fieldValue2006 = browser.currentScene.createNode("fieldValue");
fieldValue2006.name = "children";
let ProtoInstance2007 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2007.name = "Site";
ProtoInstance2007.DEF = "hanim_l_humeral_lateral_epicondyles";
let fieldValue2008 = browser.currentScene.createNode("fieldValue");
fieldValue2008.name = "name";
fieldValue2008.value = "l_humeral_lateral_epicondyles";
ProtoInstance2007.fieldValue = new MFNode();

ProtoInstance2007.fieldValue[0] = fieldValue2008;

let fieldValue2009 = browser.currentScene.createNode("fieldValue");
fieldValue2009.name = "translation";
fieldValue2009.value = "0.2280000001192093 1.1482000350952148 -0.10999999940395355";
ProtoInstance2007.fieldValue[1] = fieldValue2009;

fieldValue2006.children = new MFNode();

fieldValue2006.children[0] = ProtoInstance2007;

ProtoInstance2004.fieldValue[1] = fieldValue2006;

fieldValue1847.children[12] = ProtoInstance2004;

let ProtoInstance2010 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2010.name = "Segment";
ProtoInstance2010.DEF = "hanim_r_hand";
let fieldValue2011 = browser.currentScene.createNode("fieldValue");
fieldValue2011.name = "name";
fieldValue2011.value = "r_hand";
ProtoInstance2010.fieldValue = new MFNode();

ProtoInstance2010.fieldValue[0] = fieldValue2011;

let fieldValue2012 = browser.currentScene.createNode("fieldValue");
fieldValue2012.name = "children";
let ProtoInstance2013 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2013.name = "Site";
ProtoInstance2013.DEF = "hanim_r_hand_tip";
let fieldValue2014 = browser.currentScene.createNode("fieldValue");
fieldValue2014.name = "name";
fieldValue2014.value = "r_hand_tip";
ProtoInstance2013.fieldValue = new MFNode();

ProtoInstance2013.fieldValue[0] = fieldValue2014;

let fieldValue2015 = browser.currentScene.createNode("fieldValue");
fieldValue2015.name = "translation";
fieldValue2015.value = "-0.19689999520778656 0.6758000254631042 -0.04270000010728836";
ProtoInstance2013.fieldValue[1] = fieldValue2015;

fieldValue2012.children = new MFNode();

fieldValue2012.children[0] = ProtoInstance2013;

let ProtoInstance2016 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2016.name = "Site";
ProtoInstance2016.DEF = "hanim_r_metacarpal_phalanx_2";
let fieldValue2017 = browser.currentScene.createNode("fieldValue");
fieldValue2017.name = "name";
fieldValue2017.value = "r_metacarpal_phalanx_2";
ProtoInstance2016.fieldValue = new MFNode();

ProtoInstance2016.fieldValue[0] = fieldValue2017;

let fieldValue2018 = browser.currentScene.createNode("fieldValue");
fieldValue2018.name = "translation";
fieldValue2018.value = "-0.19769999384880066 0.8169000148773193 -0.01769999973475933";
ProtoInstance2016.fieldValue[1] = fieldValue2018;

fieldValue2012.children[1] = ProtoInstance2016;

let ProtoInstance2019 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2019.name = "Site";
ProtoInstance2019.DEF = "hanim_r_dactylion";
let fieldValue2020 = browser.currentScene.createNode("fieldValue");
fieldValue2020.name = "name";
fieldValue2020.value = "r_dactylion";
ProtoInstance2019.fieldValue = new MFNode();

ProtoInstance2019.fieldValue[0] = fieldValue2020;

let fieldValue2021 = browser.currentScene.createNode("fieldValue");
fieldValue2021.name = "translation";
fieldValue2021.value = "-0.1941000074148178 0.6772000193595886 -0.04230000078678131";
ProtoInstance2019.fieldValue[1] = fieldValue2021;

fieldValue2012.children[2] = ProtoInstance2019;

let ProtoInstance2022 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2022.name = "Site";
ProtoInstance2022.DEF = "hanim_r_ulnar_styloid";
let fieldValue2023 = browser.currentScene.createNode("fieldValue");
fieldValue2023.name = "name";
fieldValue2023.value = "r_ulnar_styloid";
ProtoInstance2022.fieldValue = new MFNode();

ProtoInstance2022.fieldValue[0] = fieldValue2023;

let fieldValue2024 = browser.currentScene.createNode("fieldValue");
fieldValue2024.name = "translation";
fieldValue2024.value = "-0.21170000731945038 0.8561999797821045 -0.058400001376867294";
ProtoInstance2022.fieldValue[1] = fieldValue2024;

fieldValue2012.children[3] = ProtoInstance2022;

let ProtoInstance2025 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2025.name = "Site";
ProtoInstance2025.DEF = "hanim_r_metacarpal_phalanx_5";
let fieldValue2026 = browser.currentScene.createNode("fieldValue");
fieldValue2026.name = "name";
fieldValue2026.value = "r_metacarpal_phalanx_5";
ProtoInstance2025.fieldValue = new MFNode();

ProtoInstance2025.fieldValue[0] = fieldValue2026;

let fieldValue2027 = browser.currentScene.createNode("fieldValue");
fieldValue2027.name = "translation";
fieldValue2027.value = "-0.19290000200271606 0.7889999747276306 -0.10639999806880951";
ProtoInstance2025.fieldValue[1] = fieldValue2027;

fieldValue2012.children[4] = ProtoInstance2025;

ProtoInstance2010.fieldValue[1] = fieldValue2012;

fieldValue1847.children[13] = ProtoInstance2010;

let ProtoInstance2028 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2028.name = "Segment";
ProtoInstance2028.DEF = "hanim_r_forearm";
let fieldValue2029 = browser.currentScene.createNode("fieldValue");
fieldValue2029.name = "name";
fieldValue2029.value = "r_forearm";
ProtoInstance2028.fieldValue = new MFNode();

ProtoInstance2028.fieldValue[0] = fieldValue2029;

let fieldValue2030 = browser.currentScene.createNode("fieldValue");
fieldValue2030.name = "children";
let ProtoInstance2031 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2031.name = "Site";
ProtoInstance2031.DEF = "hanim_r_radial_styloid";
let fieldValue2032 = browser.currentScene.createNode("fieldValue");
fieldValue2032.name = "name";
fieldValue2032.value = "r_radial_styloid";
ProtoInstance2031.fieldValue = new MFNode();

ProtoInstance2031.fieldValue[0] = fieldValue2032;

let fieldValue2033 = browser.currentScene.createNode("fieldValue");
fieldValue2033.name = "translation";
fieldValue2033.value = "-0.188400000333786 0.8676000237464905 -0.035999998450279236";
ProtoInstance2031.fieldValue[1] = fieldValue2033;

fieldValue2030.children = new MFNode();

fieldValue2030.children[0] = ProtoInstance2031;

let ProtoInstance2034 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2034.name = "Site";
ProtoInstance2034.DEF = "hanim_r_olecranon";
let fieldValue2035 = browser.currentScene.createNode("fieldValue");
fieldValue2035.name = "name";
fieldValue2035.value = "r_olecranon";
ProtoInstance2034.fieldValue = new MFNode();

ProtoInstance2034.fieldValue[0] = fieldValue2035;

let fieldValue2036 = browser.currentScene.createNode("fieldValue");
fieldValue2036.name = "translation";
fieldValue2036.value = "-0.1906999945640564 1.1404999494552612 -0.10649999976158142";
ProtoInstance2034.fieldValue[1] = fieldValue2036;

fieldValue2030.children[1] = ProtoInstance2034;

let ProtoInstance2037 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2037.name = "Site";
ProtoInstance2037.DEF = "hanim_r_humeral_medial_epicondyles";
let fieldValue2038 = browser.currentScene.createNode("fieldValue");
fieldValue2038.name = "name";
fieldValue2038.value = "r_humeral_medial_epicondyles";
ProtoInstance2037.fieldValue = new MFNode();

ProtoInstance2037.fieldValue[0] = fieldValue2038;

let fieldValue2039 = browser.currentScene.createNode("fieldValue");
fieldValue2039.name = "translation";
fieldValue2039.value = "-0.1679999977350235 1.1297999620437622 -0.10620000213384628";
ProtoInstance2037.fieldValue[1] = fieldValue2039;

fieldValue2030.children[2] = ProtoInstance2037;

let ProtoInstance2040 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2040.name = "Site";
ProtoInstance2040.DEF = "hanim_r_radiale";
let fieldValue2041 = browser.currentScene.createNode("fieldValue");
fieldValue2041.name = "name";
fieldValue2041.value = "r_radiale";
ProtoInstance2040.fieldValue = new MFNode();

ProtoInstance2040.fieldValue[0] = fieldValue2041;

let fieldValue2042 = browser.currentScene.createNode("fieldValue");
fieldValue2042.name = "translation";
fieldValue2042.value = "-0.21299999952316284 1.1304999589920044 -0.10909999907016754";
ProtoInstance2040.fieldValue[1] = fieldValue2042;

fieldValue2030.children[3] = ProtoInstance2040;

ProtoInstance2028.fieldValue[1] = fieldValue2030;

fieldValue1847.children[14] = ProtoInstance2028;

let ProtoInstance2043 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2043.name = "Segment";
ProtoInstance2043.DEF = "hanim_r_upperarm";
let fieldValue2044 = browser.currentScene.createNode("fieldValue");
fieldValue2044.name = "name";
fieldValue2044.value = "r_upperarm";
ProtoInstance2043.fieldValue = new MFNode();

ProtoInstance2043.fieldValue[0] = fieldValue2044;

let fieldValue2045 = browser.currentScene.createNode("fieldValue");
fieldValue2045.name = "children";
let ProtoInstance2046 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2046.name = "Site";
ProtoInstance2046.DEF = "hanim_r_humeral_lateral_epicondyles";
let fieldValue2047 = browser.currentScene.createNode("fieldValue");
fieldValue2047.name = "name";
fieldValue2047.value = "r_humeral_lateral_epicondyles";
ProtoInstance2046.fieldValue = new MFNode();

ProtoInstance2046.fieldValue[0] = fieldValue2047;

let fieldValue2048 = browser.currentScene.createNode("fieldValue");
fieldValue2048.name = "translation";
fieldValue2048.value = "-0.2223999947309494 1.1517000198364258 -0.10329999774694443";
ProtoInstance2046.fieldValue[1] = fieldValue2048;

fieldValue2045.children = new MFNode();

fieldValue2045.children[0] = ProtoInstance2046;

ProtoInstance2043.fieldValue[1] = fieldValue2045;

fieldValue1847.children[15] = ProtoInstance2043;

let ProtoInstance2049 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2049.name = "Segment";
ProtoInstance2049.DEF = "hanim_l5";
let fieldValue2050 = browser.currentScene.createNode("fieldValue");
fieldValue2050.name = "name";
fieldValue2050.value = "l5";
ProtoInstance2049.fieldValue = new MFNode();

ProtoInstance2049.fieldValue[0] = fieldValue2050;

let fieldValue2051 = browser.currentScene.createNode("fieldValue");
fieldValue2051.name = "children";
let ProtoInstance2052 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2052.name = "Site";
ProtoInstance2052.DEF = "hanim_r_clavicale";
let fieldValue2053 = browser.currentScene.createNode("fieldValue");
fieldValue2053.name = "name";
fieldValue2053.value = "r_clavicale";
ProtoInstance2052.fieldValue = new MFNode();

ProtoInstance2052.fieldValue[0] = fieldValue2053;

let fieldValue2054 = browser.currentScene.createNode("fieldValue");
fieldValue2054.name = "translation";
fieldValue2054.value = "-0.011500000022351742 1.4943000078201294 0.03999999910593033";
ProtoInstance2052.fieldValue[1] = fieldValue2054;

fieldValue2051.children = new MFNode();

fieldValue2051.children[0] = ProtoInstance2052;

let ProtoInstance2055 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2055.name = "Site";
ProtoInstance2055.DEF = "hanim_suprasternale";
let fieldValue2056 = browser.currentScene.createNode("fieldValue");
fieldValue2056.name = "name";
fieldValue2056.value = "suprasternale";
ProtoInstance2055.fieldValue = new MFNode();

ProtoInstance2055.fieldValue[0] = fieldValue2056;

let fieldValue2057 = browser.currentScene.createNode("fieldValue");
fieldValue2057.name = "translation";
fieldValue2057.value = "0.00839999970048666 1.4714000225067139 0.05510000139474869";
ProtoInstance2055.fieldValue[1] = fieldValue2057;

fieldValue2051.children[1] = ProtoInstance2055;

let ProtoInstance2058 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2058.name = "Site";
ProtoInstance2058.DEF = "hanim_l_clavicale";
let fieldValue2059 = browser.currentScene.createNode("fieldValue");
fieldValue2059.name = "name";
fieldValue2059.value = "l_clavicale";
ProtoInstance2058.fieldValue = new MFNode();

ProtoInstance2058.fieldValue[0] = fieldValue2059;

let fieldValue2060 = browser.currentScene.createNode("fieldValue");
fieldValue2060.name = "translation";
fieldValue2060.value = "0.02710000053048134 1.4943000078201294 0.039400000125169754";
ProtoInstance2058.fieldValue[1] = fieldValue2060;

fieldValue2051.children[2] = ProtoInstance2058;

let ProtoInstance2061 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2061.name = "Site";
ProtoInstance2061.DEF = "hanim_r_thelion";
let fieldValue2062 = browser.currentScene.createNode("fieldValue");
fieldValue2062.name = "name";
fieldValue2062.value = "r_thelion";
ProtoInstance2061.fieldValue = new MFNode();

ProtoInstance2061.fieldValue[0] = fieldValue2062;

let fieldValue2063 = browser.currentScene.createNode("fieldValue");
fieldValue2063.name = "translation";
fieldValue2063.value = "-0.07360000163316727 1.3385000228881836 0.1216999962925911";
ProtoInstance2061.fieldValue[1] = fieldValue2063;

fieldValue2051.children[3] = ProtoInstance2061;

let ProtoInstance2064 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2064.name = "Site";
ProtoInstance2064.DEF = "hanim_l_thelion";
let fieldValue2065 = browser.currentScene.createNode("fieldValue");
fieldValue2065.name = "name";
fieldValue2065.value = "l_thelion";
ProtoInstance2064.fieldValue = new MFNode();

ProtoInstance2064.fieldValue[0] = fieldValue2065;

let fieldValue2066 = browser.currentScene.createNode("fieldValue");
fieldValue2066.name = "translation";
fieldValue2066.value = "0.09179999679327011 1.3381999731063843 0.11919999867677689";
ProtoInstance2064.fieldValue[1] = fieldValue2066;

fieldValue2051.children[4] = ProtoInstance2064;

let ProtoInstance2067 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2067.name = "Site";
ProtoInstance2067.DEF = "hanim_substernale";
let fieldValue2068 = browser.currentScene.createNode("fieldValue");
fieldValue2068.name = "name";
fieldValue2068.value = "substernale";
ProtoInstance2067.fieldValue = new MFNode();

ProtoInstance2067.fieldValue[0] = fieldValue2068;

let fieldValue2069 = browser.currentScene.createNode("fieldValue");
fieldValue2069.name = "translation";
fieldValue2069.value = "0.008500000461935997 1.2994999885559082 0.11469999700784683";
ProtoInstance2067.fieldValue[1] = fieldValue2069;

fieldValue2051.children[5] = ProtoInstance2067;

let ProtoInstance2070 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2070.name = "Site";
ProtoInstance2070.DEF = "hanim_r_rib10";
let fieldValue2071 = browser.currentScene.createNode("fieldValue");
fieldValue2071.name = "name";
fieldValue2071.value = "r_rib10";
ProtoInstance2070.fieldValue = new MFNode();

ProtoInstance2070.fieldValue[0] = fieldValue2071;

let fieldValue2072 = browser.currentScene.createNode("fieldValue");
fieldValue2072.name = "translation";
fieldValue2072.value = "-0.07109999656677246 1.194100022315979 0.10159999877214432";
ProtoInstance2070.fieldValue[1] = fieldValue2072;

fieldValue2051.children[6] = ProtoInstance2070;

let ProtoInstance2073 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2073.name = "Site";
ProtoInstance2073.DEF = "hanim_l_rib10";
let fieldValue2074 = browser.currentScene.createNode("fieldValue");
fieldValue2074.name = "name";
fieldValue2074.value = "l_rib10";
ProtoInstance2073.fieldValue = new MFNode();

ProtoInstance2073.fieldValue[0] = fieldValue2074;

let fieldValue2075 = browser.currentScene.createNode("fieldValue");
fieldValue2075.name = "translation";
fieldValue2075.value = "0.08709999918937683 1.1924999952316284 0.09920000284910202";
ProtoInstance2073.fieldValue[1] = fieldValue2075;

fieldValue2051.children[7] = ProtoInstance2073;

let ProtoInstance2076 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2076.name = "Site";
ProtoInstance2076.DEF = "hanim_cervicale";
let fieldValue2077 = browser.currentScene.createNode("fieldValue");
fieldValue2077.name = "name";
fieldValue2077.value = "cervicale";
ProtoInstance2076.fieldValue = new MFNode();

ProtoInstance2076.fieldValue[0] = fieldValue2077;

let fieldValue2078 = browser.currentScene.createNode("fieldValue");
fieldValue2078.name = "translation";
fieldValue2078.value = "0.006399999838322401 1.5199999809265137 -0.08150000125169754";
ProtoInstance2076.fieldValue[1] = fieldValue2078;

fieldValue2051.children[8] = ProtoInstance2076;

let ProtoInstance2079 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2079.name = "Site";
ProtoInstance2079.DEF = "hanim_spine_2_lower_back";
let fieldValue2080 = browser.currentScene.createNode("fieldValue");
fieldValue2080.name = "name";
fieldValue2080.value = "spine_2_lower_back";
ProtoInstance2079.fieldValue = new MFNode();

ProtoInstance2079.fieldValue[0] = fieldValue2080;

let fieldValue2081 = browser.currentScene.createNode("fieldValue");
fieldValue2081.name = "translation";
fieldValue2081.value = "0.004900000058114529 1.1907999515533447 -0.11129999905824661";
ProtoInstance2079.fieldValue[1] = fieldValue2081;

fieldValue2051.children[9] = ProtoInstance2079;

let ProtoInstance2082 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2082.name = "Site";
ProtoInstance2082.DEF = "hanim_waist_preferred_posterior";
let fieldValue2083 = browser.currentScene.createNode("fieldValue");
fieldValue2083.name = "name";
fieldValue2083.value = "waist_preferred_posterior";
ProtoInstance2082.fieldValue = new MFNode();

ProtoInstance2082.fieldValue[0] = fieldValue2083;

let fieldValue2084 = browser.currentScene.createNode("fieldValue");
fieldValue2084.name = "translation";
fieldValue2084.value = "0.28999999165534973 1.0915000438690186 -0.10909999907016754";
ProtoInstance2082.fieldValue[1] = fieldValue2084;

fieldValue2051.children[10] = ProtoInstance2082;

let ProtoInstance2085 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2085.name = "Site";
ProtoInstance2085.DEF = "hanim_r_acromion";
let fieldValue2086 = browser.currentScene.createNode("fieldValue");
fieldValue2086.name = "name";
fieldValue2086.value = "r_acromion";
ProtoInstance2085.fieldValue = new MFNode();

ProtoInstance2085.fieldValue[0] = fieldValue2086;

let fieldValue2087 = browser.currentScene.createNode("fieldValue");
fieldValue2087.name = "translation";
fieldValue2087.value = "-0.19050000607967377 1.479099988937378 -0.04309999942779541";
ProtoInstance2085.fieldValue[1] = fieldValue2087;

fieldValue2051.children[11] = ProtoInstance2085;

let ProtoInstance2088 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2088.name = "Site";
ProtoInstance2088.DEF = "hanim_r_axilla_proximal";
let fieldValue2089 = browser.currentScene.createNode("fieldValue");
fieldValue2089.name = "name";
fieldValue2089.value = "r_axilla_proximal";
ProtoInstance2088.fieldValue = new MFNode();

ProtoInstance2088.fieldValue[0] = fieldValue2089;

let fieldValue2090 = browser.currentScene.createNode("fieldValue");
fieldValue2090.name = "translation";
fieldValue2090.value = "-0.16259999573230743 1.4071999788284302 -0.003100000089034438";
ProtoInstance2088.fieldValue[1] = fieldValue2090;

fieldValue2051.children[12] = ProtoInstance2088;

let ProtoInstance2091 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2091.name = "Site";
ProtoInstance2091.DEF = "hanim_r_axilla_distal";
let fieldValue2092 = browser.currentScene.createNode("fieldValue");
fieldValue2092.name = "name";
fieldValue2092.value = "r_axilla_distal";
ProtoInstance2091.fieldValue = new MFNode();

ProtoInstance2091.fieldValue[0] = fieldValue2092;

let fieldValue2093 = browser.currentScene.createNode("fieldValue");
fieldValue2093.name = "translation";
fieldValue2093.value = "-0.16030000150203705 1.4098000526428223 -0.08259999752044678";
ProtoInstance2091.fieldValue[1] = fieldValue2093;

fieldValue2051.children[13] = ProtoInstance2091;

let ProtoInstance2094 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2094.name = "Site";
ProtoInstance2094.DEF = "hanim_l_acromion";
let fieldValue2095 = browser.currentScene.createNode("fieldValue");
fieldValue2095.name = "name";
fieldValue2095.value = "l_acromion";
ProtoInstance2094.fieldValue = new MFNode();

ProtoInstance2094.fieldValue[0] = fieldValue2095;

let fieldValue2096 = browser.currentScene.createNode("fieldValue");
fieldValue2096.name = "translation";
fieldValue2096.value = "0.20319999754428864 1.4759999513626099 -0.04899999871850014";
ProtoInstance2094.fieldValue[1] = fieldValue2096;

fieldValue2051.children[14] = ProtoInstance2094;

let ProtoInstance2097 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2097.name = "Site";
ProtoInstance2097.DEF = "hanim_l_axilla_proximal";
let fieldValue2098 = browser.currentScene.createNode("fieldValue");
fieldValue2098.name = "name";
fieldValue2098.value = "l_axilla_proximal";
ProtoInstance2097.fieldValue = new MFNode();

ProtoInstance2097.fieldValue[0] = fieldValue2098;

let fieldValue2099 = browser.currentScene.createNode("fieldValue");
fieldValue2099.name = "translation";
fieldValue2099.value = "0.1776999980211258 1.406499981880188 -0.007499999832361937";
ProtoInstance2097.fieldValue[1] = fieldValue2099;

fieldValue2051.children[15] = ProtoInstance2097;

let ProtoInstance2100 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2100.name = "Site";
ProtoInstance2100.DEF = "hanim_l_axilla_distal";
let fieldValue2101 = browser.currentScene.createNode("fieldValue");
fieldValue2101.name = "name";
fieldValue2101.value = "l_axilla_distal";
ProtoInstance2100.fieldValue = new MFNode();

ProtoInstance2100.fieldValue[0] = fieldValue2101;

let fieldValue2102 = browser.currentScene.createNode("fieldValue");
fieldValue2102.name = "translation";
fieldValue2102.value = "0.17059999704360962 1.4071999788284302 -0.08749999850988388";
ProtoInstance2100.fieldValue[1] = fieldValue2102;

fieldValue2051.children[16] = ProtoInstance2100;

let ProtoInstance2103 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2103.name = "Site";
ProtoInstance2103.DEF = "hanim_r_neck_base";
let fieldValue2104 = browser.currentScene.createNode("fieldValue");
fieldValue2104.name = "name";
fieldValue2104.value = "r_neck_base";
ProtoInstance2103.fieldValue = new MFNode();

ProtoInstance2103.fieldValue[0] = fieldValue2104;

let fieldValue2105 = browser.currentScene.createNode("fieldValue");
fieldValue2105.name = "translation";
fieldValue2105.value = "-0.04190000146627426 1.5148999691009521 -0.02199999988079071";
ProtoInstance2103.fieldValue[1] = fieldValue2105;

fieldValue2051.children[17] = ProtoInstance2103;

let ProtoInstance2106 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2106.name = "Site";
ProtoInstance2106.DEF = "hanim_l_neck_base";
let fieldValue2107 = browser.currentScene.createNode("fieldValue");
fieldValue2107.name = "name";
fieldValue2107.value = "l_neck_base";
ProtoInstance2106.fieldValue = new MFNode();

ProtoInstance2106.fieldValue[0] = fieldValue2107;

let fieldValue2108 = browser.currentScene.createNode("fieldValue");
fieldValue2108.name = "translation";
fieldValue2108.value = "0.06459999829530716 1.5140999555587769 -0.03799999877810478";
ProtoInstance2106.fieldValue[1] = fieldValue2108;

fieldValue2051.children[18] = ProtoInstance2106;

let ProtoInstance2109 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2109.name = "Site";
ProtoInstance2109.DEF = "hanim_navel";
let fieldValue2110 = browser.currentScene.createNode("fieldValue");
fieldValue2110.name = "name";
fieldValue2110.value = "navel";
ProtoInstance2109.fieldValue = new MFNode();

ProtoInstance2109.fieldValue[0] = fieldValue2110;

let fieldValue2111 = browser.currentScene.createNode("fieldValue");
fieldValue2111.name = "translation";
fieldValue2111.value = "0.006899999920278788 1.09660005569458 0.10170000046491623";
ProtoInstance2109.fieldValue[1] = fieldValue2111;

fieldValue2051.children[19] = ProtoInstance2109;

ProtoInstance2049.fieldValue[1] = fieldValue2051;

fieldValue1847.children[16] = ProtoInstance2049;

let ProtoInstance2112 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2112.name = "Segment";
ProtoInstance2112.DEF = "hanim_sacrum";
let fieldValue2113 = browser.currentScene.createNode("fieldValue");
fieldValue2113.name = "name";
fieldValue2113.value = "sacrum";
ProtoInstance2112.fieldValue = new MFNode();

ProtoInstance2112.fieldValue[0] = fieldValue2113;

let fieldValue2114 = browser.currentScene.createNode("fieldValue");
fieldValue2114.name = "children";
let ProtoInstance2115 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2115.name = "Site";
ProtoInstance2115.DEF = "hanim_r_asis";
let fieldValue2116 = browser.currentScene.createNode("fieldValue");
fieldValue2116.name = "name";
fieldValue2116.value = "r_asis";
ProtoInstance2115.fieldValue = new MFNode();

ProtoInstance2115.fieldValue[0] = fieldValue2116;

let fieldValue2117 = browser.currentScene.createNode("fieldValue");
fieldValue2117.name = "translation";
fieldValue2117.value = "-0.08869999647140503 1.0020999908447266 0.1111999973654747";
ProtoInstance2115.fieldValue[1] = fieldValue2117;

fieldValue2114.children = new MFNode();

fieldValue2114.children[0] = ProtoInstance2115;

let ProtoInstance2118 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2118.name = "Site";
ProtoInstance2118.DEF = "hanim_l_asis";
let fieldValue2119 = browser.currentScene.createNode("fieldValue");
fieldValue2119.name = "name";
fieldValue2119.value = "l_asis";
ProtoInstance2118.fieldValue = new MFNode();

ProtoInstance2118.fieldValue[0] = fieldValue2119;

let fieldValue2120 = browser.currentScene.createNode("fieldValue");
fieldValue2120.name = "translation";
fieldValue2120.value = "0.0925000011920929 0.9983000159263611 0.10520000010728836";
ProtoInstance2118.fieldValue[1] = fieldValue2120;

fieldValue2114.children[1] = ProtoInstance2118;

let ProtoInstance2121 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2121.name = "Site";
ProtoInstance2121.DEF = "hanim_r_iliocristale";
let fieldValue2122 = browser.currentScene.createNode("fieldValue");
fieldValue2122.name = "name";
fieldValue2122.value = "r_iliocristale";
ProtoInstance2121.fieldValue = new MFNode();

ProtoInstance2121.fieldValue[0] = fieldValue2122;

let fieldValue2123 = browser.currentScene.createNode("fieldValue");
fieldValue2123.name = "translation";
fieldValue2123.value = "-0.1525000035762787 1.0628000497817993 0.0035000001080334187";
ProtoInstance2121.fieldValue[1] = fieldValue2123;

fieldValue2114.children[2] = ProtoInstance2121;

let ProtoInstance2124 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2124.name = "Site";
ProtoInstance2124.DEF = "hanim_r_trochanterion";
let fieldValue2125 = browser.currentScene.createNode("fieldValue");
fieldValue2125.name = "name";
fieldValue2125.value = "r_trochanterion";
ProtoInstance2124.fieldValue = new MFNode();

ProtoInstance2124.fieldValue[0] = fieldValue2125;

let fieldValue2126 = browser.currentScene.createNode("fieldValue");
fieldValue2126.name = "translation";
fieldValue2126.value = "-0.1688999980688095 0.8418999910354614 0.03519999980926514";
ProtoInstance2124.fieldValue[1] = fieldValue2126;

fieldValue2114.children[3] = ProtoInstance2124;

let ProtoInstance2127 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2127.name = "Site";
ProtoInstance2127.DEF = "hanim_l_iliocristale";
let fieldValue2128 = browser.currentScene.createNode("fieldValue");
fieldValue2128.name = "name";
fieldValue2128.value = "l_iliocristale";
ProtoInstance2127.fieldValue = new MFNode();

ProtoInstance2127.fieldValue[0] = fieldValue2128;

let fieldValue2129 = browser.currentScene.createNode("fieldValue");
fieldValue2129.name = "translation";
fieldValue2129.value = "0.16120000183582306 1.0536999702453613 0.0007999999797903001";
ProtoInstance2127.fieldValue[1] = fieldValue2129;

fieldValue2114.children[4] = ProtoInstance2127;

let ProtoInstance2130 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2130.name = "Site";
ProtoInstance2130.DEF = "hanim_l_trochanterion";
let fieldValue2131 = browser.currentScene.createNode("fieldValue");
fieldValue2131.name = "name";
fieldValue2131.value = "l_trochanterion";
ProtoInstance2130.fieldValue = new MFNode();

ProtoInstance2130.fieldValue[0] = fieldValue2131;

let fieldValue2132 = browser.currentScene.createNode("fieldValue");
fieldValue2132.name = "translation";
fieldValue2132.value = "0.16769999265670776 0.8335999846458435 0.030300000682473183";
ProtoInstance2130.fieldValue[1] = fieldValue2132;

fieldValue2114.children[5] = ProtoInstance2130;

let ProtoInstance2133 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2133.name = "Site";
ProtoInstance2133.DEF = "hanim_r_psis";
let fieldValue2134 = browser.currentScene.createNode("fieldValue");
fieldValue2134.name = "name";
fieldValue2134.value = "r_psis";
ProtoInstance2133.fieldValue = new MFNode();

ProtoInstance2133.fieldValue[0] = fieldValue2134;

let fieldValue2135 = browser.currentScene.createNode("fieldValue");
fieldValue2135.name = "translation";
fieldValue2135.value = "-0.07159999758005142 1.0190000534057617 -0.11379999667406082";
ProtoInstance2133.fieldValue[1] = fieldValue2135;

fieldValue2114.children[6] = ProtoInstance2133;

let ProtoInstance2136 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2136.name = "Site";
ProtoInstance2136.DEF = "hanim_l_psis";
let fieldValue2137 = browser.currentScene.createNode("fieldValue");
fieldValue2137.name = "name";
fieldValue2137.value = "l_psis";
ProtoInstance2136.fieldValue = new MFNode();

ProtoInstance2136.fieldValue[0] = fieldValue2137;

let fieldValue2138 = browser.currentScene.createNode("fieldValue");
fieldValue2138.name = "translation";
fieldValue2138.value = "0.07739999890327454 1.0190000534057617 -0.11509999632835388";
ProtoInstance2136.fieldValue[1] = fieldValue2138;

fieldValue2114.children[7] = ProtoInstance2136;

let ProtoInstance2139 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2139.name = "Site";
ProtoInstance2139.DEF = "hanim_crotch";
let fieldValue2140 = browser.currentScene.createNode("fieldValue");
fieldValue2140.name = "name";
fieldValue2140.value = "crotch";
ProtoInstance2139.fieldValue = new MFNode();

ProtoInstance2139.fieldValue[0] = fieldValue2140;

let fieldValue2141 = browser.currentScene.createNode("fieldValue");
fieldValue2141.name = "translation";
fieldValue2141.value = "0.0034000000450760126 0.8266000151634216 0.025699999183416367";
ProtoInstance2139.fieldValue[1] = fieldValue2141;

fieldValue2114.children[8] = ProtoInstance2139;

ProtoInstance2112.fieldValue[1] = fieldValue2114;

fieldValue1847.children[17] = ProtoInstance2112;

ProtoInstance107.fieldValue[2] = fieldValue1847;

let fieldValue2142 = browser.currentScene.createNode("fieldValue");
fieldValue2142.name = "sites";
let ProtoInstance2143 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2143.name = "Site";
ProtoInstance2143.DEF = "hanim_l_middistal_tip";
let fieldValue2144 = browser.currentScene.createNode("fieldValue");
fieldValue2144.name = "name";
fieldValue2144.value = "l_middistal_tip";
ProtoInstance2143.fieldValue = new MFNode();

ProtoInstance2143.fieldValue[0] = fieldValue2144;

let fieldValue2145 = browser.currentScene.createNode("fieldValue");
fieldValue2145.name = "translation";
fieldValue2145.value = "0.13539999723434448 0.0015999999595806003 0.147599995136261";
ProtoInstance2143.fieldValue[1] = fieldValue2145;

fieldValue2142.children = new MFNode();

fieldValue2142.children[0] = ProtoInstance2143;

let ProtoInstance2146 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2146.name = "Site";
ProtoInstance2146.DEF = "hanim_l_tarsal_interphalangeal_phalanx_5";
let fieldValue2147 = browser.currentScene.createNode("fieldValue");
fieldValue2147.name = "name";
fieldValue2147.value = "l_tarsal_interphalangeal_phalanx_5";
ProtoInstance2146.fieldValue = new MFNode();

ProtoInstance2146.fieldValue[0] = fieldValue2147;

let fieldValue2148 = browser.currentScene.createNode("fieldValue");
fieldValue2148.name = "translation";
fieldValue2148.value = "0.18250000476837158 0.007000000216066837 0.09279999881982803";
ProtoInstance2146.fieldValue[1] = fieldValue2148;

fieldValue2142.children[1] = ProtoInstance2146;

let ProtoInstance2149 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2149.name = "Site";
ProtoInstance2149.DEF = "hanim_l_tarsal_interphalangeal_phalanx_1";
let fieldValue2150 = browser.currentScene.createNode("fieldValue");
fieldValue2150.name = "name";
fieldValue2150.value = "l_tarsal_interphalangeal_phalanx_1";
ProtoInstance2149.fieldValue = new MFNode();

ProtoInstance2149.fieldValue[0] = fieldValue2150;

let fieldValue2151 = browser.currentScene.createNode("fieldValue");
fieldValue2151.name = "translation";
fieldValue2151.value = "0.08160000294446945 0.02319999970495701 0.010599999688565731";
ProtoInstance2149.fieldValue[1] = fieldValue2151;

fieldValue2142.children[2] = ProtoInstance2149;

let ProtoInstance2152 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2152.name = "Site";
ProtoInstance2152.DEF = "hanim_l_tarsal_distal_phalanx_2";
let fieldValue2153 = browser.currentScene.createNode("fieldValue");
fieldValue2153.name = "name";
fieldValue2153.value = "l_tarsal_distal_phalanx_2";
ProtoInstance2152.fieldValue = new MFNode();

ProtoInstance2152.fieldValue[0] = fieldValue2153;

let fieldValue2154 = browser.currentScene.createNode("fieldValue");
fieldValue2154.name = "translation";
fieldValue2154.value = "0.11949999630451202 0.007899999618530273 0.14329999685287476";
ProtoInstance2152.fieldValue[1] = fieldValue2154;

fieldValue2142.children[3] = ProtoInstance2152;

let ProtoInstance2155 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2155.name = "Site";
ProtoInstance2155.DEF = "hanim_l_lateral_malleolus";
let fieldValue2156 = browser.currentScene.createNode("fieldValue");
fieldValue2156.name = "name";
fieldValue2156.value = "l_lateral_malleolus";
ProtoInstance2155.fieldValue = new MFNode();

ProtoInstance2155.fieldValue[0] = fieldValue2156;

let fieldValue2157 = browser.currentScene.createNode("fieldValue");
fieldValue2157.name = "translation";
fieldValue2157.value = "0.13079999387264252 0.059700001031160355 -0.10320000350475311";
ProtoInstance2155.fieldValue[1] = fieldValue2157;

fieldValue2142.children[4] = ProtoInstance2155;

let ProtoInstance2158 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2158.name = "Site";
ProtoInstance2158.DEF = "hanim_l_medial_malleolus";
let fieldValue2159 = browser.currentScene.createNode("fieldValue");
fieldValue2159.name = "name";
fieldValue2159.value = "l_medial_malleolus";
ProtoInstance2158.fieldValue = new MFNode();

ProtoInstance2158.fieldValue[0] = fieldValue2159;

let fieldValue2160 = browser.currentScene.createNode("fieldValue");
fieldValue2160.name = "translation";
fieldValue2160.value = "0.08900000154972076 0.07159999758005142 -0.08810000121593475";
ProtoInstance2158.fieldValue[1] = fieldValue2160;

fieldValue2142.children[5] = ProtoInstance2158;

let ProtoInstance2161 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2161.name = "Site";
ProtoInstance2161.DEF = "hanim_l_sphyrion";
let fieldValue2162 = browser.currentScene.createNode("fieldValue");
fieldValue2162.name = "name";
fieldValue2162.value = "l_sphyrion";
ProtoInstance2161.fieldValue = new MFNode();

ProtoInstance2161.fieldValue[0] = fieldValue2162;

let fieldValue2163 = browser.currentScene.createNode("fieldValue");
fieldValue2163.name = "translation";
fieldValue2163.value = "0.08900000154972076 0.057500001043081284 -0.09430000185966492";
ProtoInstance2161.fieldValue[1] = fieldValue2163;

fieldValue2142.children[6] = ProtoInstance2161;

let ProtoInstance2164 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2164.name = "Site";
ProtoInstance2164.DEF = "hanim_l_calcaneus_posterior";
let fieldValue2165 = browser.currentScene.createNode("fieldValue");
fieldValue2165.name = "name";
fieldValue2165.value = "l_calcaneus_posterior";
ProtoInstance2164.fieldValue = new MFNode();

ProtoInstance2164.fieldValue[0] = fieldValue2165;

let fieldValue2166 = browser.currentScene.createNode("fieldValue");
fieldValue2166.name = "translation";
fieldValue2166.value = "0.09740000218153 0.02590000070631504 -0.11710000038146973";
ProtoInstance2164.fieldValue[1] = fieldValue2166;

fieldValue2142.children[7] = ProtoInstance2164;

let ProtoInstance2167 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2167.name = "Site";
ProtoInstance2167.DEF = "hanim_l_knee_crease";
let fieldValue2168 = browser.currentScene.createNode("fieldValue");
fieldValue2168.name = "name";
fieldValue2168.value = "l_knee_crease";
ProtoInstance2167.fieldValue = new MFNode();

ProtoInstance2167.fieldValue[0] = fieldValue2168;

let fieldValue2169 = browser.currentScene.createNode("fieldValue");
fieldValue2169.name = "translation";
fieldValue2169.value = "0.09929999709129333 0.48809999227523804 -0.030899999663233757";
ProtoInstance2167.fieldValue[1] = fieldValue2169;

fieldValue2142.children[8] = ProtoInstance2167;

let ProtoInstance2170 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2170.name = "Site";
ProtoInstance2170.DEF = "hanim_l_femoral_lateral_epicondyles";
let fieldValue2171 = browser.currentScene.createNode("fieldValue");
fieldValue2171.name = "name";
fieldValue2171.value = "l_femoral_lateral_epicondyles";
ProtoInstance2170.fieldValue = new MFNode();

ProtoInstance2170.fieldValue[0] = fieldValue2171;

let fieldValue2172 = browser.currentScene.createNode("fieldValue");
fieldValue2172.name = "translation";
fieldValue2172.value = "0.1597999930381775 0.4966999888420105 0.02969999983906746";
ProtoInstance2170.fieldValue[1] = fieldValue2172;

fieldValue2142.children[9] = ProtoInstance2170;

let ProtoInstance2173 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2173.name = "Site";
ProtoInstance2173.DEF = "hanim_l_femoral_medial_epicondyles";
let fieldValue2174 = browser.currentScene.createNode("fieldValue");
fieldValue2174.name = "name";
fieldValue2174.value = "l_femoral_lateral_epicondyles";
ProtoInstance2173.fieldValue = new MFNode();

ProtoInstance2173.fieldValue[0] = fieldValue2174;

let fieldValue2175 = browser.currentScene.createNode("fieldValue");
fieldValue2175.name = "translation";
fieldValue2175.value = "0.039799999445676804 0.49459999799728394 0.030300000682473183";
ProtoInstance2173.fieldValue[1] = fieldValue2175;

fieldValue2142.children[10] = ProtoInstance2173;

let ProtoInstance2176 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2176.name = "Site";
ProtoInstance2176.DEF = "hanim_r_middistal_tip";
let fieldValue2177 = browser.currentScene.createNode("fieldValue");
fieldValue2177.name = "name";
fieldValue2177.value = "r_middistal_tip";
ProtoInstance2176.fieldValue = new MFNode();

ProtoInstance2176.fieldValue[0] = fieldValue2177;

let fieldValue2178 = browser.currentScene.createNode("fieldValue");
fieldValue2178.name = "translation";
fieldValue2178.value = "-0.10429999977350235 -0.022700000554323196 0.14499999582767487";
ProtoInstance2176.fieldValue[1] = fieldValue2178;

fieldValue2142.children[11] = ProtoInstance2176;

let ProtoInstance2179 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2179.name = "Site";
ProtoInstance2179.DEF = "hanim_r_tarsal_interphalangeal_phalanx_5";
let fieldValue2180 = browser.currentScene.createNode("fieldValue");
fieldValue2180.name = "name";
fieldValue2180.value = "r_tarsal_interphalangeal_phalanx_5";
ProtoInstance2179.fieldValue = new MFNode();

ProtoInstance2179.fieldValue[0] = fieldValue2180;

let fieldValue2181 = browser.currentScene.createNode("fieldValue");
fieldValue2181.name = "translation";
fieldValue2181.value = "-0.15230000019073486 0.016599999740719795 0.08950000256299973";
ProtoInstance2179.fieldValue[1] = fieldValue2181;

fieldValue2142.children[12] = ProtoInstance2179;

let ProtoInstance2182 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2182.name = "Site";
ProtoInstance2182.DEF = "hanim_r_tarsal_interphalangeal_phalanx_1";
let fieldValue2183 = browser.currentScene.createNode("fieldValue");
fieldValue2183.name = "name";
fieldValue2183.value = "r_tarsal_interphalangeal_phalanx_1";
ProtoInstance2182.fieldValue = new MFNode();

ProtoInstance2182.fieldValue[0] = fieldValue2183;

let fieldValue2184 = browser.currentScene.createNode("fieldValue");
fieldValue2184.name = "translation";
fieldValue2184.value = "-0.05209999904036522 0.026000000536441803 0.01269999984651804";
ProtoInstance2182.fieldValue[1] = fieldValue2184;

fieldValue2142.children[13] = ProtoInstance2182;

let ProtoInstance2185 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2185.name = "Site";
ProtoInstance2185.DEF = "hanim_r_tarsal_distal_phalanx_2";
let fieldValue2186 = browser.currentScene.createNode("fieldValue");
fieldValue2186.name = "name";
fieldValue2186.value = "r_tarsal_distal_phalanx_2";
ProtoInstance2185.fieldValue = new MFNode();

ProtoInstance2185.fieldValue[0] = fieldValue2186;

let fieldValue2187 = browser.currentScene.createNode("fieldValue");
fieldValue2187.name = "translation";
fieldValue2187.value = "-0.08829999715089798 0.013399999588727951 0.13830000162124634";
ProtoInstance2185.fieldValue[1] = fieldValue2187;

fieldValue2142.children[14] = ProtoInstance2185;

let ProtoInstance2188 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2188.name = "Site";
ProtoInstance2188.DEF = "hanim_r_lateral_malleolus";
let fieldValue2189 = browser.currentScene.createNode("fieldValue");
fieldValue2189.name = "name";
fieldValue2189.value = "r_lateral_malleolus";
ProtoInstance2188.fieldValue = new MFNode();

ProtoInstance2188.fieldValue[0] = fieldValue2189;

let fieldValue2190 = browser.currentScene.createNode("fieldValue");
fieldValue2190.name = "translation";
fieldValue2190.value = "-0.1005999967455864 0.0658000037074089 -0.10750000178813934";
ProtoInstance2188.fieldValue[1] = fieldValue2190;

fieldValue2142.children[15] = ProtoInstance2188;

let ProtoInstance2191 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2191.name = "Site";
ProtoInstance2191.DEF = "hanim_r_medial_malleolus";
let fieldValue2192 = browser.currentScene.createNode("fieldValue");
fieldValue2192.name = "name";
fieldValue2192.value = "r_medial_malleolus";
ProtoInstance2191.fieldValue = new MFNode();

ProtoInstance2191.fieldValue[0] = fieldValue2192;

let fieldValue2193 = browser.currentScene.createNode("fieldValue");
fieldValue2193.name = "translation";
fieldValue2193.value = "-0.05909999832510948 0.07599999755620956 -0.09279999881982803";
ProtoInstance2191.fieldValue[1] = fieldValue2193;

fieldValue2142.children[16] = ProtoInstance2191;

let ProtoInstance2194 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2194.name = "Site";
ProtoInstance2194.DEF = "hanim_r_sphyrion";
let fieldValue2195 = browser.currentScene.createNode("fieldValue");
fieldValue2195.name = "name";
fieldValue2195.value = "r_sphyrion";
ProtoInstance2194.fieldValue = new MFNode();

ProtoInstance2194.fieldValue[0] = fieldValue2195;

let fieldValue2196 = browser.currentScene.createNode("fieldValue");
fieldValue2196.name = "translation";
fieldValue2196.value = "-0.06030000001192093 0.061000000685453415 -0.10019999742507935";
ProtoInstance2194.fieldValue[1] = fieldValue2196;

fieldValue2142.children[17] = ProtoInstance2194;

let ProtoInstance2197 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2197.name = "Site";
ProtoInstance2197.DEF = "hanim_r_calcaneus_posterior";
let fieldValue2198 = browser.currentScene.createNode("fieldValue");
fieldValue2198.name = "name";
fieldValue2198.value = "r_calcaneus_posterior";
ProtoInstance2197.fieldValue = new MFNode();

ProtoInstance2197.fieldValue[0] = fieldValue2198;

let fieldValue2199 = browser.currentScene.createNode("fieldValue");
fieldValue2199.name = "translation";
fieldValue2199.value = "-0.06920000165700912 0.02969999983906746 -0.12210000306367874";
ProtoInstance2197.fieldValue[1] = fieldValue2199;

fieldValue2142.children[18] = ProtoInstance2197;

let ProtoInstance2200 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2200.name = "Site";
ProtoInstance2200.DEF = "hanim_r_knee_crease";
let fieldValue2201 = browser.currentScene.createNode("fieldValue");
fieldValue2201.name = "name";
fieldValue2201.value = "r_knee_crease";
ProtoInstance2200.fieldValue = new MFNode();

ProtoInstance2200.fieldValue[0] = fieldValue2201;

let fieldValue2202 = browser.currentScene.createNode("fieldValue");
fieldValue2202.name = "translation";
fieldValue2202.value = "-0.08250000327825546 0.49320000410079956 -0.032600000500679016";
ProtoInstance2200.fieldValue[1] = fieldValue2202;

fieldValue2142.children[19] = ProtoInstance2200;

let ProtoInstance2203 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2203.name = "Site";
ProtoInstance2203.DEF = "hanim_r_femoral_lateral_epicondyles";
let fieldValue2204 = browser.currentScene.createNode("fieldValue");
fieldValue2204.name = "name";
fieldValue2204.value = "r_femoral_lateral_epicondyles";
ProtoInstance2203.fieldValue = new MFNode();

ProtoInstance2203.fieldValue[0] = fieldValue2204;

let fieldValue2205 = browser.currentScene.createNode("fieldValue");
fieldValue2205.name = "translation";
fieldValue2205.value = "-0.1421000063419342 0.4991999864578247 0.03099999949336052";
ProtoInstance2203.fieldValue[1] = fieldValue2205;

fieldValue2142.children[20] = ProtoInstance2203;

let ProtoInstance2206 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2206.name = "Site";
ProtoInstance2206.DEF = "hanim_r_femoral_medial_epicondyles";
let fieldValue2207 = browser.currentScene.createNode("fieldValue");
fieldValue2207.name = "name";
fieldValue2207.value = "r_femoral_lateral_epicondyles";
ProtoInstance2206.fieldValue = new MFNode();

ProtoInstance2206.fieldValue[0] = fieldValue2207;

let fieldValue2208 = browser.currentScene.createNode("fieldValue");
fieldValue2208.name = "translation";
fieldValue2208.value = "-0.022099999710917473 0.5013999938964844 0.02889999933540821";
ProtoInstance2206.fieldValue[1] = fieldValue2208;

fieldValue2142.children[21] = ProtoInstance2206;

let ProtoInstance2209 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2209.name = "Site";
ProtoInstance2209.DEF = "hanim_skull_tip";
let fieldValue2210 = browser.currentScene.createNode("fieldValue");
fieldValue2210.name = "name";
fieldValue2210.value = "skull_tip";
ProtoInstance2209.fieldValue = new MFNode();

ProtoInstance2209.fieldValue[0] = fieldValue2210;

let fieldValue2211 = browser.currentScene.createNode("fieldValue");
fieldValue2211.name = "translation";
fieldValue2211.value = "0.004999999888241291 1.7503999471664429 0.005499999970197678";
ProtoInstance2209.fieldValue[1] = fieldValue2211;

fieldValue2142.children[22] = ProtoInstance2209;

let ProtoInstance2212 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2212.name = "Site";
ProtoInstance2212.DEF = "hanim_sellion";
let fieldValue2213 = browser.currentScene.createNode("fieldValue");
fieldValue2213.name = "name";
fieldValue2213.value = "sellion";
ProtoInstance2212.fieldValue = new MFNode();

ProtoInstance2212.fieldValue[0] = fieldValue2213;

let fieldValue2214 = browser.currentScene.createNode("fieldValue");
fieldValue2214.name = "translation";
fieldValue2214.value = "0.005799999926239252 1.631600022315979 0.0851999968290329";
ProtoInstance2212.fieldValue[1] = fieldValue2214;

fieldValue2142.children[23] = ProtoInstance2212;

let ProtoInstance2215 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2215.name = "Site";
ProtoInstance2215.DEF = "hanim_r_infraorbitale";
let fieldValue2216 = browser.currentScene.createNode("fieldValue");
fieldValue2216.name = "name";
fieldValue2216.value = "r_infraorbitale";
ProtoInstance2215.fieldValue = new MFNode();

ProtoInstance2215.fieldValue[0] = fieldValue2216;

let fieldValue2217 = browser.currentScene.createNode("fieldValue");
fieldValue2217.name = "translation";
fieldValue2217.value = "-0.02370000071823597 1.6171000003814697 0.07519999891519547";
ProtoInstance2215.fieldValue[1] = fieldValue2217;

fieldValue2142.children[24] = ProtoInstance2215;

let ProtoInstance2218 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2218.name = "Site";
ProtoInstance2218.DEF = "hanim_l_infraorbitale";
let fieldValue2219 = browser.currentScene.createNode("fieldValue");
fieldValue2219.name = "name";
fieldValue2219.value = "l_infraorbitale";
ProtoInstance2218.fieldValue = new MFNode();

ProtoInstance2218.fieldValue[0] = fieldValue2219;

let fieldValue2220 = browser.currentScene.createNode("fieldValue");
fieldValue2220.name = "translation";
fieldValue2220.value = "0.0340999998152256 1.6171000003814697 0.07519999891519547";
ProtoInstance2218.fieldValue[1] = fieldValue2220;

fieldValue2142.children[25] = ProtoInstance2218;

let ProtoInstance2221 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2221.name = "Site";
ProtoInstance2221.DEF = "hanim_supramenton";
let fieldValue2222 = browser.currentScene.createNode("fieldValue");
fieldValue2222.name = "name";
fieldValue2222.value = "supramenton";
ProtoInstance2221.fieldValue = new MFNode();

ProtoInstance2221.fieldValue[0] = fieldValue2222;

let fieldValue2223 = browser.currentScene.createNode("fieldValue");
fieldValue2223.name = "translation";
fieldValue2223.value = "0.006099999882280827 1.5410000085830688 0.08049999922513962";
ProtoInstance2221.fieldValue[1] = fieldValue2223;

fieldValue2142.children[26] = ProtoInstance2221;

let ProtoInstance2224 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2224.name = "Site";
ProtoInstance2224.DEF = "hanim_r_tragion";
let fieldValue2225 = browser.currentScene.createNode("fieldValue");
fieldValue2225.name = "name";
fieldValue2225.value = "r_tragion";
ProtoInstance2224.fieldValue = new MFNode();

ProtoInstance2224.fieldValue[0] = fieldValue2225;

let fieldValue2226 = browser.currentScene.createNode("fieldValue");
fieldValue2226.name = "translation";
fieldValue2226.value = "-0.06459999829530716 1.6346999406814575 0.03020000085234642";
ProtoInstance2224.fieldValue[1] = fieldValue2226;

fieldValue2142.children[27] = ProtoInstance2224;

let ProtoInstance2227 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2227.name = "Site";
ProtoInstance2227.DEF = "hanim_r_gonion";
let fieldValue2228 = browser.currentScene.createNode("fieldValue");
fieldValue2228.name = "name";
fieldValue2228.value = "r_gonion";
ProtoInstance2227.fieldValue = new MFNode();

ProtoInstance2227.fieldValue[0] = fieldValue2228;

let fieldValue2229 = browser.currentScene.createNode("fieldValue");
fieldValue2229.name = "translation";
fieldValue2229.value = "-0.052000001072883606 1.552899956703186 0.034699998795986176";
ProtoInstance2227.fieldValue[1] = fieldValue2229;

fieldValue2142.children[28] = ProtoInstance2227;

let ProtoInstance2230 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2230.name = "Site";
ProtoInstance2230.DEF = "hanim_l_tragion";
let fieldValue2231 = browser.currentScene.createNode("fieldValue");
fieldValue2231.name = "name";
fieldValue2231.value = "l_tragion";
ProtoInstance2230.fieldValue = new MFNode();

ProtoInstance2230.fieldValue[0] = fieldValue2231;

let fieldValue2232 = browser.currentScene.createNode("fieldValue");
fieldValue2232.name = "translation";
fieldValue2232.value = "0.0738999992609024 1.6347999572753906 0.028200000524520874";
ProtoInstance2230.fieldValue[1] = fieldValue2232;

fieldValue2142.children[29] = ProtoInstance2230;

let ProtoInstance2233 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2233.name = "Site";
ProtoInstance2233.DEF = "hanim_l_gonion";
let fieldValue2234 = browser.currentScene.createNode("fieldValue");
fieldValue2234.name = "name";
fieldValue2234.value = "l_gonion";
ProtoInstance2233.fieldValue = new MFNode();

ProtoInstance2233.fieldValue[0] = fieldValue2234;

let fieldValue2235 = browser.currentScene.createNode("fieldValue");
fieldValue2235.name = "translation";
fieldValue2235.value = "0.06310000270605087 1.5529999732971191 0.032999999821186066";
ProtoInstance2233.fieldValue[1] = fieldValue2235;

fieldValue2142.children[30] = ProtoInstance2233;

let ProtoInstance2236 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2236.name = "Site";
ProtoInstance2236.DEF = "hanim_nuchale";
let fieldValue2237 = browser.currentScene.createNode("fieldValue");
fieldValue2237.name = "name";
fieldValue2237.value = "nuchale";
ProtoInstance2236.fieldValue = new MFNode();

ProtoInstance2236.fieldValue[0] = fieldValue2237;

let fieldValue2238 = browser.currentScene.createNode("fieldValue");
fieldValue2238.name = "translation";
fieldValue2238.value = "0.0038999998942017555 1.5972000360488892 -0.07959999889135361";
ProtoInstance2236.fieldValue[1] = fieldValue2238;

fieldValue2142.children[31] = ProtoInstance2236;

let ProtoInstance2239 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2239.name = "Site";
ProtoInstance2239.DEF = "hanim_l_hand_tip";
let fieldValue2240 = browser.currentScene.createNode("fieldValue");
fieldValue2240.name = "name";
fieldValue2240.value = "l_hand_tip";
ProtoInstance2239.fieldValue = new MFNode();

ProtoInstance2239.fieldValue[0] = fieldValue2240;

let fieldValue2241 = browser.currentScene.createNode("fieldValue");
fieldValue2241.name = "translation";
fieldValue2241.value = "0.20800000429153442 0.6730999946594238 -0.04910000041127205";
ProtoInstance2239.fieldValue[1] = fieldValue2241;

fieldValue2142.children[32] = ProtoInstance2239;

let ProtoInstance2242 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2242.name = "Site";
ProtoInstance2242.DEF = "hanim_l_metacarpal_phalanx_2";
let fieldValue2243 = browser.currentScene.createNode("fieldValue");
fieldValue2243.name = "name";
fieldValue2243.value = "l_metacarpal_phalanx_2";
ProtoInstance2242.fieldValue = new MFNode();

ProtoInstance2242.fieldValue[0] = fieldValue2243;

let fieldValue2244 = browser.currentScene.createNode("fieldValue");
fieldValue2244.name = "translation";
fieldValue2244.value = "0.20090000331401825 0.8138999938964844 -0.02370000071823597";
ProtoInstance2242.fieldValue[1] = fieldValue2244;

fieldValue2142.children[33] = ProtoInstance2242;

let ProtoInstance2245 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2245.name = "Site";
ProtoInstance2245.DEF = "hanim_l_dactylion";
let fieldValue2246 = browser.currentScene.createNode("fieldValue");
fieldValue2246.name = "name";
fieldValue2246.value = "l_dactylion";
ProtoInstance2245.fieldValue = new MFNode();

ProtoInstance2245.fieldValue[0] = fieldValue2246;

let fieldValue2247 = browser.currentScene.createNode("fieldValue");
fieldValue2247.name = "translation";
fieldValue2247.value = "0.20559999346733093 0.6743000149726868 -0.04820000007748604";
ProtoInstance2245.fieldValue[1] = fieldValue2247;

fieldValue2142.children[34] = ProtoInstance2245;

let ProtoInstance2248 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2248.name = "Site";
ProtoInstance2248.DEF = "hanim_l_ulnar_styloid";
let fieldValue2249 = browser.currentScene.createNode("fieldValue");
fieldValue2249.name = "name";
fieldValue2249.value = "l_ulnar_styloid";
ProtoInstance2248.fieldValue = new MFNode();

ProtoInstance2248.fieldValue[0] = fieldValue2249;

let fieldValue2250 = browser.currentScene.createNode("fieldValue");
fieldValue2250.name = "translation";
fieldValue2250.value = "-0.2142000049352646 0.8529000282287598 -0.06480000168085098";
ProtoInstance2248.fieldValue[1] = fieldValue2250;

fieldValue2142.children[35] = ProtoInstance2248;

let ProtoInstance2251 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2251.name = "Site";
ProtoInstance2251.DEF = "hanim_l_metacarpal_phalanx_5";
let fieldValue2252 = browser.currentScene.createNode("fieldValue");
fieldValue2252.name = "name";
fieldValue2252.value = "l_metacarpal_phalanx_5";
ProtoInstance2251.fieldValue = new MFNode();

ProtoInstance2251.fieldValue[0] = fieldValue2252;

let fieldValue2253 = browser.currentScene.createNode("fieldValue");
fieldValue2253.name = "translation";
fieldValue2253.value = "0.19290000200271606 0.7860000133514404 -0.11219999939203262";
ProtoInstance2251.fieldValue[1] = fieldValue2253;

fieldValue2142.children[36] = ProtoInstance2251;

let ProtoInstance2254 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2254.name = "Site";
ProtoInstance2254.DEF = "hanim_l_radial_styloid";
let fieldValue2255 = browser.currentScene.createNode("fieldValue");
fieldValue2255.name = "name";
fieldValue2255.value = "l_radial_styloid";
ProtoInstance2254.fieldValue = new MFNode();

ProtoInstance2254.fieldValue[0] = fieldValue2255;

let fieldValue2256 = browser.currentScene.createNode("fieldValue");
fieldValue2256.name = "translation";
fieldValue2256.value = "0.19009999930858612 0.8644999861717224 -0.04149999842047691";
ProtoInstance2254.fieldValue[1] = fieldValue2256;

fieldValue2142.children[37] = ProtoInstance2254;

let ProtoInstance2257 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2257.name = "Site";
ProtoInstance2257.DEF = "hanim_l_olecranon";
let fieldValue2258 = browser.currentScene.createNode("fieldValue");
fieldValue2258.name = "name";
fieldValue2258.value = "l_olecranon";
ProtoInstance2257.fieldValue = new MFNode();

ProtoInstance2257.fieldValue[0] = fieldValue2258;

let fieldValue2259 = browser.currentScene.createNode("fieldValue");
fieldValue2259.name = "translation";
fieldValue2259.value = "-0.19619999825954437 1.1375000476837158 -0.11230000108480453";
ProtoInstance2257.fieldValue[1] = fieldValue2259;

fieldValue2142.children[38] = ProtoInstance2257;

let ProtoInstance2260 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2260.name = "Site";
ProtoInstance2260.DEF = "hanim_l_humeral_medial_epicondyles";
let fieldValue2261 = browser.currentScene.createNode("fieldValue");
fieldValue2261.name = "name";
fieldValue2261.value = "l_humeral_medial_epicondyles";
ProtoInstance2260.fieldValue = new MFNode();

ProtoInstance2260.fieldValue[0] = fieldValue2261;

let fieldValue2262 = browser.currentScene.createNode("fieldValue");
fieldValue2262.name = "translation";
fieldValue2262.value = "0.17350000143051147 1.1272000074386597 -0.11129999905824661";
ProtoInstance2260.fieldValue[1] = fieldValue2262;

fieldValue2142.children[39] = ProtoInstance2260;

let ProtoInstance2263 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2263.name = "Site";
ProtoInstance2263.DEF = "hanim_l_radiale";
let fieldValue2264 = browser.currentScene.createNode("fieldValue");
fieldValue2264.name = "name";
fieldValue2264.value = "l_radiale";
ProtoInstance2263.fieldValue = new MFNode();

ProtoInstance2263.fieldValue[0] = fieldValue2264;

let fieldValue2265 = browser.currentScene.createNode("fieldValue");
fieldValue2265.name = "translation";
fieldValue2265.value = "0.21819999814033508 1.1211999654769897 -0.11670000106096268";
ProtoInstance2263.fieldValue[1] = fieldValue2265;

fieldValue2142.children[40] = ProtoInstance2263;

let ProtoInstance2266 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2266.name = "Site";
ProtoInstance2266.DEF = "hanim_l_humeral_lateral_epicondyles";
let fieldValue2267 = browser.currentScene.createNode("fieldValue");
fieldValue2267.name = "name";
fieldValue2267.value = "l_humeral_lateral_epicondyles";
ProtoInstance2266.fieldValue = new MFNode();

ProtoInstance2266.fieldValue[0] = fieldValue2267;

let fieldValue2268 = browser.currentScene.createNode("fieldValue");
fieldValue2268.name = "translation";
fieldValue2268.value = "0.2280000001192093 1.1482000350952148 -0.10999999940395355";
ProtoInstance2266.fieldValue[1] = fieldValue2268;

fieldValue2142.children[41] = ProtoInstance2266;

let ProtoInstance2269 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2269.name = "Site";
ProtoInstance2269.DEF = "hanim_r_hand_tip";
let fieldValue2270 = browser.currentScene.createNode("fieldValue");
fieldValue2270.name = "name";
fieldValue2270.value = "r_hand_tip";
ProtoInstance2269.fieldValue = new MFNode();

ProtoInstance2269.fieldValue[0] = fieldValue2270;

let fieldValue2271 = browser.currentScene.createNode("fieldValue");
fieldValue2271.name = "translation";
fieldValue2271.value = "-0.19689999520778656 0.6758000254631042 -0.04270000010728836";
ProtoInstance2269.fieldValue[1] = fieldValue2271;

fieldValue2142.children[42] = ProtoInstance2269;

let ProtoInstance2272 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2272.name = "Site";
ProtoInstance2272.DEF = "hanim_r_metacarpal_phalanx_2";
let fieldValue2273 = browser.currentScene.createNode("fieldValue");
fieldValue2273.name = "name";
fieldValue2273.value = "r_metacarpal_phalanx_2";
ProtoInstance2272.fieldValue = new MFNode();

ProtoInstance2272.fieldValue[0] = fieldValue2273;

let fieldValue2274 = browser.currentScene.createNode("fieldValue");
fieldValue2274.name = "translation";
fieldValue2274.value = "-0.19769999384880066 0.8169000148773193 -0.01769999973475933";
ProtoInstance2272.fieldValue[1] = fieldValue2274;

fieldValue2142.children[43] = ProtoInstance2272;

let ProtoInstance2275 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2275.name = "Site";
ProtoInstance2275.DEF = "hanim_r_dactylion";
let fieldValue2276 = browser.currentScene.createNode("fieldValue");
fieldValue2276.name = "name";
fieldValue2276.value = "r_dactylion";
ProtoInstance2275.fieldValue = new MFNode();

ProtoInstance2275.fieldValue[0] = fieldValue2276;

let fieldValue2277 = browser.currentScene.createNode("fieldValue");
fieldValue2277.name = "translation";
fieldValue2277.value = "-0.1941000074148178 0.6772000193595886 -0.04230000078678131";
ProtoInstance2275.fieldValue[1] = fieldValue2277;

fieldValue2142.children[44] = ProtoInstance2275;

let ProtoInstance2278 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2278.name = "Site";
ProtoInstance2278.DEF = "hanim_r_ulnar_styloid";
let fieldValue2279 = browser.currentScene.createNode("fieldValue");
fieldValue2279.name = "name";
fieldValue2279.value = "r_ulnar_styloid";
ProtoInstance2278.fieldValue = new MFNode();

ProtoInstance2278.fieldValue[0] = fieldValue2279;

let fieldValue2280 = browser.currentScene.createNode("fieldValue");
fieldValue2280.name = "translation";
fieldValue2280.value = "-0.21170000731945038 0.8561999797821045 -0.058400001376867294";
ProtoInstance2278.fieldValue[1] = fieldValue2280;

fieldValue2142.children[45] = ProtoInstance2278;

let ProtoInstance2281 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2281.name = "Site";
ProtoInstance2281.DEF = "hanim_r_metacarpal_phalanx_5";
let fieldValue2282 = browser.currentScene.createNode("fieldValue");
fieldValue2282.name = "name";
fieldValue2282.value = "r_metacarpal_phalanx_5";
ProtoInstance2281.fieldValue = new MFNode();

ProtoInstance2281.fieldValue[0] = fieldValue2282;

let fieldValue2283 = browser.currentScene.createNode("fieldValue");
fieldValue2283.name = "translation";
fieldValue2283.value = "-0.19290000200271606 0.7889999747276306 -0.10639999806880951";
ProtoInstance2281.fieldValue[1] = fieldValue2283;

fieldValue2142.children[46] = ProtoInstance2281;

let ProtoInstance2284 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2284.name = "Site";
ProtoInstance2284.DEF = "hanim_r_radial_styloid";
let fieldValue2285 = browser.currentScene.createNode("fieldValue");
fieldValue2285.name = "name";
fieldValue2285.value = "r_radial_styloid";
ProtoInstance2284.fieldValue = new MFNode();

ProtoInstance2284.fieldValue[0] = fieldValue2285;

let fieldValue2286 = browser.currentScene.createNode("fieldValue");
fieldValue2286.name = "translation";
fieldValue2286.value = "-0.188400000333786 0.8676000237464905 -0.035999998450279236";
ProtoInstance2284.fieldValue[1] = fieldValue2286;

fieldValue2142.children[47] = ProtoInstance2284;

let ProtoInstance2287 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2287.name = "Site";
ProtoInstance2287.DEF = "hanim_r_olecranon";
let fieldValue2288 = browser.currentScene.createNode("fieldValue");
fieldValue2288.name = "name";
fieldValue2288.value = "r_olecranon";
ProtoInstance2287.fieldValue = new MFNode();

ProtoInstance2287.fieldValue[0] = fieldValue2288;

let fieldValue2289 = browser.currentScene.createNode("fieldValue");
fieldValue2289.name = "translation";
fieldValue2289.value = "-0.1906999945640564 1.1404999494552612 -0.10649999976158142";
ProtoInstance2287.fieldValue[1] = fieldValue2289;

fieldValue2142.children[48] = ProtoInstance2287;

let ProtoInstance2290 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2290.name = "Site";
ProtoInstance2290.DEF = "hanim_r_humeral_medial_epicondyles";
let fieldValue2291 = browser.currentScene.createNode("fieldValue");
fieldValue2291.name = "name";
fieldValue2291.value = "r_humeral_medial_epicondyles";
ProtoInstance2290.fieldValue = new MFNode();

ProtoInstance2290.fieldValue[0] = fieldValue2291;

let fieldValue2292 = browser.currentScene.createNode("fieldValue");
fieldValue2292.name = "translation";
fieldValue2292.value = "-0.1679999977350235 1.1297999620437622 -0.10620000213384628";
ProtoInstance2290.fieldValue[1] = fieldValue2292;

fieldValue2142.children[49] = ProtoInstance2290;

let ProtoInstance2293 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2293.name = "Site";
ProtoInstance2293.DEF = "hanim_r_radiale";
let fieldValue2294 = browser.currentScene.createNode("fieldValue");
fieldValue2294.name = "name";
fieldValue2294.value = "r_radiale";
ProtoInstance2293.fieldValue = new MFNode();

ProtoInstance2293.fieldValue[0] = fieldValue2294;

let fieldValue2295 = browser.currentScene.createNode("fieldValue");
fieldValue2295.name = "translation";
fieldValue2295.value = "-0.21299999952316284 1.1304999589920044 -0.10909999907016754";
ProtoInstance2293.fieldValue[1] = fieldValue2295;

fieldValue2142.children[50] = ProtoInstance2293;

let ProtoInstance2296 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2296.name = "Site";
ProtoInstance2296.DEF = "hanim_r_humeral_lateral_epicondyles";
let fieldValue2297 = browser.currentScene.createNode("fieldValue");
fieldValue2297.name = "name";
fieldValue2297.value = "r_humeral_lateral_epicondyles";
ProtoInstance2296.fieldValue = new MFNode();

ProtoInstance2296.fieldValue[0] = fieldValue2297;

let fieldValue2298 = browser.currentScene.createNode("fieldValue");
fieldValue2298.name = "translation";
fieldValue2298.value = "-0.2223999947309494 1.1517000198364258 -0.10329999774694443";
ProtoInstance2296.fieldValue[1] = fieldValue2298;

fieldValue2142.children[51] = ProtoInstance2296;

let ProtoInstance2299 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2299.name = "Site";
ProtoInstance2299.DEF = "hanim_r_clavicale";
let fieldValue2300 = browser.currentScene.createNode("fieldValue");
fieldValue2300.name = "name";
fieldValue2300.value = "r_clavicale";
ProtoInstance2299.fieldValue = new MFNode();

ProtoInstance2299.fieldValue[0] = fieldValue2300;

let fieldValue2301 = browser.currentScene.createNode("fieldValue");
fieldValue2301.name = "translation";
fieldValue2301.value = "-0.011500000022351742 1.4943000078201294 0.03999999910593033";
ProtoInstance2299.fieldValue[1] = fieldValue2301;

fieldValue2142.children[52] = ProtoInstance2299;

let ProtoInstance2302 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2302.name = "Site";
ProtoInstance2302.DEF = "hanim_suprasternale";
let fieldValue2303 = browser.currentScene.createNode("fieldValue");
fieldValue2303.name = "name";
fieldValue2303.value = "suprasternale";
ProtoInstance2302.fieldValue = new MFNode();

ProtoInstance2302.fieldValue[0] = fieldValue2303;

let fieldValue2304 = browser.currentScene.createNode("fieldValue");
fieldValue2304.name = "translation";
fieldValue2304.value = "0.00839999970048666 1.4714000225067139 0.05510000139474869";
ProtoInstance2302.fieldValue[1] = fieldValue2304;

fieldValue2142.children[53] = ProtoInstance2302;

let ProtoInstance2305 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2305.name = "Site";
ProtoInstance2305.DEF = "hanim_l_clavicale";
let fieldValue2306 = browser.currentScene.createNode("fieldValue");
fieldValue2306.name = "name";
fieldValue2306.value = "l_clavicale";
ProtoInstance2305.fieldValue = new MFNode();

ProtoInstance2305.fieldValue[0] = fieldValue2306;

let fieldValue2307 = browser.currentScene.createNode("fieldValue");
fieldValue2307.name = "translation";
fieldValue2307.value = "0.02710000053048134 1.4943000078201294 0.039400000125169754";
ProtoInstance2305.fieldValue[1] = fieldValue2307;

fieldValue2142.children[54] = ProtoInstance2305;

let ProtoInstance2308 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2308.name = "Site";
ProtoInstance2308.DEF = "hanim_r_thelion";
let fieldValue2309 = browser.currentScene.createNode("fieldValue");
fieldValue2309.name = "name";
fieldValue2309.value = "r_thelion";
ProtoInstance2308.fieldValue = new MFNode();

ProtoInstance2308.fieldValue[0] = fieldValue2309;

let fieldValue2310 = browser.currentScene.createNode("fieldValue");
fieldValue2310.name = "translation";
fieldValue2310.value = "-0.07360000163316727 1.3385000228881836 0.1216999962925911";
ProtoInstance2308.fieldValue[1] = fieldValue2310;

fieldValue2142.children[55] = ProtoInstance2308;

let ProtoInstance2311 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2311.name = "Site";
ProtoInstance2311.DEF = "hanim_l_thelion";
let fieldValue2312 = browser.currentScene.createNode("fieldValue");
fieldValue2312.name = "name";
fieldValue2312.value = "l_thelion";
ProtoInstance2311.fieldValue = new MFNode();

ProtoInstance2311.fieldValue[0] = fieldValue2312;

let fieldValue2313 = browser.currentScene.createNode("fieldValue");
fieldValue2313.name = "translation";
fieldValue2313.value = "0.09179999679327011 1.3381999731063843 0.11919999867677689";
ProtoInstance2311.fieldValue[1] = fieldValue2313;

fieldValue2142.children[56] = ProtoInstance2311;

let ProtoInstance2314 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2314.name = "Site";
ProtoInstance2314.DEF = "hanim_substernale";
let fieldValue2315 = browser.currentScene.createNode("fieldValue");
fieldValue2315.name = "name";
fieldValue2315.value = "substernale";
ProtoInstance2314.fieldValue = new MFNode();

ProtoInstance2314.fieldValue[0] = fieldValue2315;

let fieldValue2316 = browser.currentScene.createNode("fieldValue");
fieldValue2316.name = "translation";
fieldValue2316.value = "0.008500000461935997 1.2994999885559082 0.11469999700784683";
ProtoInstance2314.fieldValue[1] = fieldValue2316;

fieldValue2142.children[57] = ProtoInstance2314;

let ProtoInstance2317 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2317.name = "Site";
ProtoInstance2317.DEF = "hanim_r_rib10";
let fieldValue2318 = browser.currentScene.createNode("fieldValue");
fieldValue2318.name = "name";
fieldValue2318.value = "r_rib10";
ProtoInstance2317.fieldValue = new MFNode();

ProtoInstance2317.fieldValue[0] = fieldValue2318;

let fieldValue2319 = browser.currentScene.createNode("fieldValue");
fieldValue2319.name = "translation";
fieldValue2319.value = "-0.07109999656677246 1.194100022315979 0.10159999877214432";
ProtoInstance2317.fieldValue[1] = fieldValue2319;

fieldValue2142.children[58] = ProtoInstance2317;

let ProtoInstance2320 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2320.name = "Site";
ProtoInstance2320.DEF = "hanim_l_rib10";
let fieldValue2321 = browser.currentScene.createNode("fieldValue");
fieldValue2321.name = "name";
fieldValue2321.value = "l_rib10";
ProtoInstance2320.fieldValue = new MFNode();

ProtoInstance2320.fieldValue[0] = fieldValue2321;

let fieldValue2322 = browser.currentScene.createNode("fieldValue");
fieldValue2322.name = "translation";
fieldValue2322.value = "0.08709999918937683 1.1924999952316284 0.09920000284910202";
ProtoInstance2320.fieldValue[1] = fieldValue2322;

fieldValue2142.children[59] = ProtoInstance2320;

let ProtoInstance2323 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2323.name = "Site";
ProtoInstance2323.DEF = "hanim_cervicale";
let fieldValue2324 = browser.currentScene.createNode("fieldValue");
fieldValue2324.name = "name";
fieldValue2324.value = "cervicale";
ProtoInstance2323.fieldValue = new MFNode();

ProtoInstance2323.fieldValue[0] = fieldValue2324;

let fieldValue2325 = browser.currentScene.createNode("fieldValue");
fieldValue2325.name = "translation";
fieldValue2325.value = "0.006399999838322401 1.5199999809265137 -0.08150000125169754";
ProtoInstance2323.fieldValue[1] = fieldValue2325;

fieldValue2142.children[60] = ProtoInstance2323;

let ProtoInstance2326 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2326.name = "Site";
ProtoInstance2326.DEF = "hanim_spine_2_lower_back";
let fieldValue2327 = browser.currentScene.createNode("fieldValue");
fieldValue2327.name = "name";
fieldValue2327.value = "spine_2_lower_back";
ProtoInstance2326.fieldValue = new MFNode();

ProtoInstance2326.fieldValue[0] = fieldValue2327;

let fieldValue2328 = browser.currentScene.createNode("fieldValue");
fieldValue2328.name = "translation";
fieldValue2328.value = "0.004900000058114529 1.1907999515533447 -0.11129999905824661";
ProtoInstance2326.fieldValue[1] = fieldValue2328;

fieldValue2142.children[61] = ProtoInstance2326;

let ProtoInstance2329 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2329.name = "Site";
ProtoInstance2329.DEF = "hanim_waist_preferred_posterior";
let fieldValue2330 = browser.currentScene.createNode("fieldValue");
fieldValue2330.name = "name";
fieldValue2330.value = "waist_preferred_posterior";
ProtoInstance2329.fieldValue = new MFNode();

ProtoInstance2329.fieldValue[0] = fieldValue2330;

let fieldValue2331 = browser.currentScene.createNode("fieldValue");
fieldValue2331.name = "translation";
fieldValue2331.value = "0.28999999165534973 1.0915000438690186 -0.10909999907016754";
ProtoInstance2329.fieldValue[1] = fieldValue2331;

fieldValue2142.children[62] = ProtoInstance2329;

let ProtoInstance2332 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2332.name = "Site";
ProtoInstance2332.DEF = "hanim_r_acromion";
let fieldValue2333 = browser.currentScene.createNode("fieldValue");
fieldValue2333.name = "name";
fieldValue2333.value = "r_acromion";
ProtoInstance2332.fieldValue = new MFNode();

ProtoInstance2332.fieldValue[0] = fieldValue2333;

let fieldValue2334 = browser.currentScene.createNode("fieldValue");
fieldValue2334.name = "translation";
fieldValue2334.value = "-0.19050000607967377 1.479099988937378 -0.04309999942779541";
ProtoInstance2332.fieldValue[1] = fieldValue2334;

fieldValue2142.children[63] = ProtoInstance2332;

let ProtoInstance2335 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2335.name = "Site";
ProtoInstance2335.DEF = "hanim_r_axilla_proximal";
let fieldValue2336 = browser.currentScene.createNode("fieldValue");
fieldValue2336.name = "name";
fieldValue2336.value = "r_axilla_proximal";
ProtoInstance2335.fieldValue = new MFNode();

ProtoInstance2335.fieldValue[0] = fieldValue2336;

let fieldValue2337 = browser.currentScene.createNode("fieldValue");
fieldValue2337.name = "translation";
fieldValue2337.value = "-0.16259999573230743 1.4071999788284302 -0.003100000089034438";
ProtoInstance2335.fieldValue[1] = fieldValue2337;

fieldValue2142.children[64] = ProtoInstance2335;

let ProtoInstance2338 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2338.name = "Site";
ProtoInstance2338.DEF = "hanim_r_axilla_distal";
let fieldValue2339 = browser.currentScene.createNode("fieldValue");
fieldValue2339.name = "name";
fieldValue2339.value = "r_axilla_distal";
ProtoInstance2338.fieldValue = new MFNode();

ProtoInstance2338.fieldValue[0] = fieldValue2339;

let fieldValue2340 = browser.currentScene.createNode("fieldValue");
fieldValue2340.name = "translation";
fieldValue2340.value = "-0.16030000150203705 1.4098000526428223 -0.08259999752044678";
ProtoInstance2338.fieldValue[1] = fieldValue2340;

fieldValue2142.children[65] = ProtoInstance2338;

let ProtoInstance2341 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2341.name = "Site";
ProtoInstance2341.DEF = "hanim_l_acromion";
let fieldValue2342 = browser.currentScene.createNode("fieldValue");
fieldValue2342.name = "name";
fieldValue2342.value = "l_acromion";
ProtoInstance2341.fieldValue = new MFNode();

ProtoInstance2341.fieldValue[0] = fieldValue2342;

let fieldValue2343 = browser.currentScene.createNode("fieldValue");
fieldValue2343.name = "translation";
fieldValue2343.value = "0.20319999754428864 1.4759999513626099 -0.04899999871850014";
ProtoInstance2341.fieldValue[1] = fieldValue2343;

fieldValue2142.children[66] = ProtoInstance2341;

let ProtoInstance2344 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2344.name = "Site";
ProtoInstance2344.DEF = "hanim_l_axilla_proximal";
let fieldValue2345 = browser.currentScene.createNode("fieldValue");
fieldValue2345.name = "name";
fieldValue2345.value = "l_axilla_proximal";
ProtoInstance2344.fieldValue = new MFNode();

ProtoInstance2344.fieldValue[0] = fieldValue2345;

let fieldValue2346 = browser.currentScene.createNode("fieldValue");
fieldValue2346.name = "translation";
fieldValue2346.value = "0.1776999980211258 1.406499981880188 -0.007499999832361937";
ProtoInstance2344.fieldValue[1] = fieldValue2346;

fieldValue2142.children[67] = ProtoInstance2344;

let ProtoInstance2347 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2347.name = "Site";
ProtoInstance2347.DEF = "hanim_l_axilla_distal";
let fieldValue2348 = browser.currentScene.createNode("fieldValue");
fieldValue2348.name = "name";
fieldValue2348.value = "l_axilla_distal";
ProtoInstance2347.fieldValue = new MFNode();

ProtoInstance2347.fieldValue[0] = fieldValue2348;

let fieldValue2349 = browser.currentScene.createNode("fieldValue");
fieldValue2349.name = "translation";
fieldValue2349.value = "0.17059999704360962 1.4071999788284302 -0.08749999850988388";
ProtoInstance2347.fieldValue[1] = fieldValue2349;

fieldValue2142.children[68] = ProtoInstance2347;

let ProtoInstance2350 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2350.name = "Site";
ProtoInstance2350.DEF = "hanim_r_neck_base";
let fieldValue2351 = browser.currentScene.createNode("fieldValue");
fieldValue2351.name = "name";
fieldValue2351.value = "r_neck_base";
ProtoInstance2350.fieldValue = new MFNode();

ProtoInstance2350.fieldValue[0] = fieldValue2351;

let fieldValue2352 = browser.currentScene.createNode("fieldValue");
fieldValue2352.name = "translation";
fieldValue2352.value = "-0.04190000146627426 1.5148999691009521 -0.02199999988079071";
ProtoInstance2350.fieldValue[1] = fieldValue2352;

fieldValue2142.children[69] = ProtoInstance2350;

let ProtoInstance2353 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2353.name = "Site";
ProtoInstance2353.DEF = "hanim_l_neck_base";
let fieldValue2354 = browser.currentScene.createNode("fieldValue");
fieldValue2354.name = "name";
fieldValue2354.value = "l_neck_base";
ProtoInstance2353.fieldValue = new MFNode();

ProtoInstance2353.fieldValue[0] = fieldValue2354;

let fieldValue2355 = browser.currentScene.createNode("fieldValue");
fieldValue2355.name = "translation";
fieldValue2355.value = "0.06459999829530716 1.5140999555587769 -0.03799999877810478";
ProtoInstance2353.fieldValue[1] = fieldValue2355;

fieldValue2142.children[70] = ProtoInstance2353;

let ProtoInstance2356 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2356.name = "Site";
ProtoInstance2356.DEF = "hanim_navel";
let fieldValue2357 = browser.currentScene.createNode("fieldValue");
fieldValue2357.name = "name";
fieldValue2357.value = "navel";
ProtoInstance2356.fieldValue = new MFNode();

ProtoInstance2356.fieldValue[0] = fieldValue2357;

let fieldValue2358 = browser.currentScene.createNode("fieldValue");
fieldValue2358.name = "translation";
fieldValue2358.value = "0.006899999920278788 1.09660005569458 0.10170000046491623";
ProtoInstance2356.fieldValue[1] = fieldValue2358;

fieldValue2142.children[71] = ProtoInstance2356;

let ProtoInstance2359 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2359.name = "Site";
ProtoInstance2359.DEF = "hanim_r_asis";
let fieldValue2360 = browser.currentScene.createNode("fieldValue");
fieldValue2360.name = "name";
fieldValue2360.value = "r_asis";
ProtoInstance2359.fieldValue = new MFNode();

ProtoInstance2359.fieldValue[0] = fieldValue2360;

let fieldValue2361 = browser.currentScene.createNode("fieldValue");
fieldValue2361.name = "translation";
fieldValue2361.value = "-0.08869999647140503 1.0020999908447266 0.1111999973654747";
ProtoInstance2359.fieldValue[1] = fieldValue2361;

fieldValue2142.children[72] = ProtoInstance2359;

let ProtoInstance2362 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2362.name = "Site";
ProtoInstance2362.DEF = "hanim_l_asis";
let fieldValue2363 = browser.currentScene.createNode("fieldValue");
fieldValue2363.name = "name";
fieldValue2363.value = "l_asis";
ProtoInstance2362.fieldValue = new MFNode();

ProtoInstance2362.fieldValue[0] = fieldValue2363;

let fieldValue2364 = browser.currentScene.createNode("fieldValue");
fieldValue2364.name = "translation";
fieldValue2364.value = "0.0925000011920929 0.9983000159263611 0.10520000010728836";
ProtoInstance2362.fieldValue[1] = fieldValue2364;

fieldValue2142.children[73] = ProtoInstance2362;

let ProtoInstance2365 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2365.name = "Site";
ProtoInstance2365.DEF = "hanim_r_iliocristale";
let fieldValue2366 = browser.currentScene.createNode("fieldValue");
fieldValue2366.name = "name";
fieldValue2366.value = "r_iliocristale";
ProtoInstance2365.fieldValue = new MFNode();

ProtoInstance2365.fieldValue[0] = fieldValue2366;

let fieldValue2367 = browser.currentScene.createNode("fieldValue");
fieldValue2367.name = "translation";
fieldValue2367.value = "-0.1525000035762787 1.0628000497817993 0.0035000001080334187";
ProtoInstance2365.fieldValue[1] = fieldValue2367;

fieldValue2142.children[74] = ProtoInstance2365;

let ProtoInstance2368 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2368.name = "Site";
ProtoInstance2368.DEF = "hanim_r_trochanterion";
let fieldValue2369 = browser.currentScene.createNode("fieldValue");
fieldValue2369.name = "name";
fieldValue2369.value = "r_trochanterion";
ProtoInstance2368.fieldValue = new MFNode();

ProtoInstance2368.fieldValue[0] = fieldValue2369;

let fieldValue2370 = browser.currentScene.createNode("fieldValue");
fieldValue2370.name = "translation";
fieldValue2370.value = "-0.1688999980688095 0.8418999910354614 0.03519999980926514";
ProtoInstance2368.fieldValue[1] = fieldValue2370;

fieldValue2142.children[75] = ProtoInstance2368;

let ProtoInstance2371 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2371.name = "Site";
ProtoInstance2371.DEF = "hanim_l_iliocristale";
let fieldValue2372 = browser.currentScene.createNode("fieldValue");
fieldValue2372.name = "name";
fieldValue2372.value = "l_iliocristale";
ProtoInstance2371.fieldValue = new MFNode();

ProtoInstance2371.fieldValue[0] = fieldValue2372;

let fieldValue2373 = browser.currentScene.createNode("fieldValue");
fieldValue2373.name = "translation";
fieldValue2373.value = "0.16120000183582306 1.0536999702453613 0.0007999999797903001";
ProtoInstance2371.fieldValue[1] = fieldValue2373;

fieldValue2142.children[76] = ProtoInstance2371;

let ProtoInstance2374 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2374.name = "Site";
ProtoInstance2374.DEF = "hanim_l_trochanterion";
let fieldValue2375 = browser.currentScene.createNode("fieldValue");
fieldValue2375.name = "name";
fieldValue2375.value = "l_trochanterion";
ProtoInstance2374.fieldValue = new MFNode();

ProtoInstance2374.fieldValue[0] = fieldValue2375;

let fieldValue2376 = browser.currentScene.createNode("fieldValue");
fieldValue2376.name = "translation";
fieldValue2376.value = "0.16769999265670776 0.8335999846458435 0.030300000682473183";
ProtoInstance2374.fieldValue[1] = fieldValue2376;

fieldValue2142.children[77] = ProtoInstance2374;

let ProtoInstance2377 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2377.name = "Site";
ProtoInstance2377.DEF = "hanim_r_psis";
let fieldValue2378 = browser.currentScene.createNode("fieldValue");
fieldValue2378.name = "name";
fieldValue2378.value = "r_psis";
ProtoInstance2377.fieldValue = new MFNode();

ProtoInstance2377.fieldValue[0] = fieldValue2378;

let fieldValue2379 = browser.currentScene.createNode("fieldValue");
fieldValue2379.name = "translation";
fieldValue2379.value = "-0.07159999758005142 1.0190000534057617 -0.11379999667406082";
ProtoInstance2377.fieldValue[1] = fieldValue2379;

fieldValue2142.children[78] = ProtoInstance2377;

let ProtoInstance2380 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2380.name = "Site";
ProtoInstance2380.DEF = "hanim_l_psis";
let fieldValue2381 = browser.currentScene.createNode("fieldValue");
fieldValue2381.name = "name";
fieldValue2381.value = "l_psis";
ProtoInstance2380.fieldValue = new MFNode();

ProtoInstance2380.fieldValue[0] = fieldValue2381;

let fieldValue2382 = browser.currentScene.createNode("fieldValue");
fieldValue2382.name = "translation";
fieldValue2382.value = "0.07739999890327454 1.0190000534057617 -0.11509999632835388";
ProtoInstance2380.fieldValue[1] = fieldValue2382;

fieldValue2142.children[79] = ProtoInstance2380;

let ProtoInstance2383 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2383.name = "Site";
ProtoInstance2383.DEF = "hanim_crotch";
let fieldValue2384 = browser.currentScene.createNode("fieldValue");
fieldValue2384.name = "name";
fieldValue2384.value = "crotch";
ProtoInstance2383.fieldValue = new MFNode();

ProtoInstance2383.fieldValue[0] = fieldValue2384;

let fieldValue2385 = browser.currentScene.createNode("fieldValue");
fieldValue2385.name = "translation";
fieldValue2385.value = "0.0034000000450760126 0.8266000151634216 0.025699999183416367";
ProtoInstance2383.fieldValue[1] = fieldValue2385;

fieldValue2142.children[80] = ProtoInstance2383;

ProtoInstance107.fieldValue[3] = fieldValue2142;

let fieldValue2386 = browser.currentScene.createNode("fieldValue");
fieldValue2386.name = "name";
fieldValue2386.value = "humanoid";
ProtoInstance107.fieldValue[4] = fieldValue2386;

let fieldValue2387 = browser.currentScene.createNode("fieldValue");
fieldValue2387.name = "info";
fieldValue2387.value = "\"authorName=Matthew T. Beitler\" \"authorEmail=beitler@cis.upenn.edu or beitler@acm.org\" \"creationDate=05/12/99\" \"copyright=Copyright 1999-2003, Matthew T. Beitler\" \"humanoidVersion=JointCenters 200x, LOA&#8209;1\" \"usageRestrictions= PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED, PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided 'as-is' and without warranty of any kind, express, implied or otherwise, including without limitation, any warranty of merchantability or fitness for a particular purpose.\" \"modificationDate=08/12/03\"";
ProtoInstance107.fieldValue[5] = fieldValue2387;

browser.currentScene.children[4] = ProtoInstance107;

let Group2388 = browser.currentScene.createNode("Group");
Group2388.DEF = "JointCenters_WorldInfo";
let WorldInfo2389 = browser.currentScene.createNode("WorldInfo");
WorldInfo2389.title = "HANIM 200x Default Joint Centers, LOA&#8209;1";
WorldInfo2389.info = new MFString(new java.lang.String[" HANIM 200x Default Joint Centers, Level-Of-Articulation 1 -------------------------------------------------------- HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://H-Anim.org/Specifications/H-Anim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human modelling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "]);
Group2388.children = new MFNode();

Group2388.children[0] = WorldInfo2389;

browser.currentScene.children[5] = Group2388;

let NavigationInfo2390 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo2390.avatarSize = new MFFloat(new float[0.25,1.600000023841858,0.75]);
NavigationInfo2390.speed = 1.5;
browser.currentScene.children[6] = NavigationInfo2390;

