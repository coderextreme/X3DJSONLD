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
<ProtoBody><Transform><IS><connect nodeField="children" protoField="children"></connect>
<connect nodeField="center" protoField="center"></connect>
<connect nodeField="rotation" protoField="rotation"></connect>
<connect nodeField="scale" protoField="scale"></connect>
<connect nodeField="scaleOrientation" protoField="scaleOrientation"></connect>
<connect nodeField="translation" protoField="translation"></connect>
</IS>
</Transform>
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
let Transform47 = browser.currentScene.createNode("Transform");
let IS48 = browser.currentScene.createNode("IS");
let connect49 = browser.currentScene.createNode("connect");
connect49.nodeField = "children";
connect49.protoField = "children";
IS48.connect = new MFNode();

IS48.connect[0] = connect49;

let connect50 = browser.currentScene.createNode("connect");
connect50.nodeField = "center";
connect50.protoField = "center";
IS48.connect[1] = connect50;

let connect51 = browser.currentScene.createNode("connect");
connect51.nodeField = "rotation";
connect51.protoField = "rotation";
IS48.connect[2] = connect51;

let connect52 = browser.currentScene.createNode("connect");
connect52.nodeField = "scale";
connect52.protoField = "scale";
IS48.connect[3] = connect52;

let connect53 = browser.currentScene.createNode("connect");
connect53.nodeField = "scaleOrientation";
connect53.protoField = "scaleOrientation";
IS48.connect[4] = connect53;

let connect54 = browser.currentScene.createNode("connect");
connect54.nodeField = "translation";
connect54.protoField = "translation";
IS48.connect[5] = connect54;

Transform47.iS = IS48;

ProtoBody46.children = new MFNode();

ProtoBody46.children[0] = Transform47;

ProtoDeclare33.protoBody = ProtoBody46;

browser.currentScene.children[1] = ProtoDeclare33;

let ProtoDeclare55 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoDeclare55.name = "Segment";
let ProtoInterface56 = browser.currentScene.createNode("ProtoInterface");
let field57 = browser.currentScene.createNode("field");
field57.name = "addChildren";
field57.accessType = "inputOnly";
field57.type = "MFNode";
ProtoInterface56.field = new MFNode();

ProtoInterface56.field[0] = field57;

let field58 = browser.currentScene.createNode("field");
field58.name = "removeChildren";
field58.accessType = "inputOnly";
field58.type = "MFNode";
ProtoInterface56.field[1] = field58;

let field59 = browser.currentScene.createNode("field");
field59.name = "centerOfMass";
field59.accessType = "inputOutput";
field59.type = "SFVec3f";
field59.value = "0 0 0";
ProtoInterface56.field[2] = field59;

let field60 = browser.currentScene.createNode("field");
field60.name = "children";
field60.accessType = "inputOutput";
field60.type = "MFNode";
ProtoInterface56.field[3] = field60;

let field61 = browser.currentScene.createNode("field");
field61.name = "coord";
field61.accessType = "inputOutput";
field61.type = "SFNode";
field61.value = ;
ProtoInterface56.field[4] = field61;

let field62 = browser.currentScene.createNode("field");
field62.name = "displacers";
field62.accessType = "inputOutput";
field62.type = "MFNode";
ProtoInterface56.field[5] = field62;

let field63 = browser.currentScene.createNode("field");
field63.name = "name";
field63.accessType = "inputOutput";
field63.type = "SFString";
ProtoInterface56.field[6] = field63;

let field64 = browser.currentScene.createNode("field");
field64.name = "mass";
field64.accessType = "inputOutput";
field64.type = "SFFloat";
field64.value = "0";
ProtoInterface56.field[7] = field64;

let field65 = browser.currentScene.createNode("field");
field65.name = "momentsOfInertia";
field65.accessType = "inputOutput";
field65.type = "SFVec3f";
field65.value = "1 1 1";
ProtoInterface56.field[8] = field65;

let field66 = browser.currentScene.createNode("field");
field66.name = "bboxCenter";
field66.accessType = "initializeOnly";
field66.type = "SFVec3f";
field66.value = "0 0 0";
ProtoInterface56.field[9] = field66;

let field67 = browser.currentScene.createNode("field");
field67.name = "bboxSize";
field67.accessType = "initializeOnly";
field67.type = "SFVec3f";
field67.value = "-1 -1 -1";
ProtoInterface56.field[10] = field67;

ProtoDeclare55.protoInterface = ProtoInterface56;

let ProtoBody68 = browser.currentScene.createNode("ProtoBody");
let Group69 = browser.currentScene.createNode("Group");
let IS70 = browser.currentScene.createNode("IS");
let connect71 = browser.currentScene.createNode("connect");
connect71.nodeField = "children";
connect71.protoField = "children";
IS70.connect = new MFNode();

IS70.connect[0] = connect71;

let connect72 = browser.currentScene.createNode("connect");
connect72.nodeField = "bboxCenter";
connect72.protoField = "bboxCenter";
IS70.connect[1] = connect72;

let connect73 = browser.currentScene.createNode("connect");
connect73.nodeField = "bboxSize";
connect73.protoField = "bboxSize";
IS70.connect[2] = connect73;

let connect74 = browser.currentScene.createNode("connect");
connect74.nodeField = "addChildren";
connect74.protoField = "addChildren";
IS70.connect[3] = connect74;

let connect75 = browser.currentScene.createNode("connect");
connect75.nodeField = "removeChildren";
connect75.protoField = "removeChildren";
IS70.connect[4] = connect75;

Group69.iS = IS70;

ProtoBody68.children = new MFNode();

ProtoBody68.children[0] = Group69;

ProtoDeclare55.protoBody = ProtoBody68;

browser.currentScene.children[2] = ProtoDeclare55;

let ProtoDeclare76 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoDeclare76.name = "Site";
let ProtoInterface77 = browser.currentScene.createNode("ProtoInterface");
let field78 = browser.currentScene.createNode("field");
field78.name = "addChildren";
field78.accessType = "inputOnly";
field78.type = "MFNode";
ProtoInterface77.field = new MFNode();

ProtoInterface77.field[0] = field78;

let field79 = browser.currentScene.createNode("field");
field79.name = "removeChildren";
field79.accessType = "inputOnly";
field79.type = "MFNode";
ProtoInterface77.field[1] = field79;

let field80 = browser.currentScene.createNode("field");
field80.name = "center";
field80.accessType = "inputOutput";
field80.type = "SFVec3f";
field80.value = "0 0 0";
ProtoInterface77.field[2] = field80;

let field81 = browser.currentScene.createNode("field");
field81.name = "children";
field81.accessType = "inputOutput";
field81.type = "MFNode";
ProtoInterface77.field[3] = field81;

let field82 = browser.currentScene.createNode("field");
field82.name = "name";
field82.accessType = "inputOutput";
field82.type = "SFString";
ProtoInterface77.field[4] = field82;

let field83 = browser.currentScene.createNode("field");
field83.name = "rotation";
field83.accessType = "inputOutput";
field83.type = "SFRotation";
field83.value = "0 0 1 0";
ProtoInterface77.field[5] = field83;

let field84 = browser.currentScene.createNode("field");
field84.name = "scale";
field84.accessType = "inputOutput";
field84.type = "SFVec3f";
field84.value = "1 1 1";
ProtoInterface77.field[6] = field84;

let field85 = browser.currentScene.createNode("field");
field85.name = "scaleOrientation";
field85.accessType = "inputOutput";
field85.type = "SFRotation";
field85.value = "0 0 1 0";
ProtoInterface77.field[7] = field85;

let field86 = browser.currentScene.createNode("field");
field86.name = "translation";
field86.accessType = "inputOutput";
field86.type = "SFVec3f";
field86.value = "0 0 0";
ProtoInterface77.field[8] = field86;

ProtoDeclare76.protoInterface = ProtoInterface77;

let ProtoBody87 = browser.currentScene.createNode("ProtoBody");
let Transform88 = browser.currentScene.createNode("Transform");
let IS89 = browser.currentScene.createNode("IS");
let connect90 = browser.currentScene.createNode("connect");
connect90.nodeField = "children";
connect90.protoField = "children";
IS89.connect = new MFNode();

IS89.connect[0] = connect90;

let connect91 = browser.currentScene.createNode("connect");
connect91.nodeField = "center";
connect91.protoField = "center";
IS89.connect[1] = connect91;

let connect92 = browser.currentScene.createNode("connect");
connect92.nodeField = "rotation";
connect92.protoField = "rotation";
IS89.connect[2] = connect92;

let connect93 = browser.currentScene.createNode("connect");
connect93.nodeField = "scale";
connect93.protoField = "scale";
IS89.connect[3] = connect93;

let connect94 = browser.currentScene.createNode("connect");
connect94.nodeField = "scaleOrientation";
connect94.protoField = "scaleOrientation";
IS89.connect[4] = connect94;

let connect95 = browser.currentScene.createNode("connect");
connect95.nodeField = "translation";
connect95.protoField = "translation";
IS89.connect[5] = connect95;

let connect96 = browser.currentScene.createNode("connect");
connect96.nodeField = "addChildren";
connect96.protoField = "addChildren";
IS89.connect[6] = connect96;

let connect97 = browser.currentScene.createNode("connect");
connect97.nodeField = "removeChildren";
connect97.protoField = "removeChildren";
IS89.connect[7] = connect97;

Transform88.iS = IS89;

ProtoBody87.children = new MFNode();

ProtoBody87.children[0] = Transform88;

ProtoDeclare76.protoBody = ProtoBody87;

browser.currentScene.children[3] = ProtoDeclare76;

let ProtoInstance98 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance98.name = "Humanoid";
ProtoInstance98.DEF = "humanoid";
let fieldValue99 = browser.currentScene.createNode("fieldValue");
fieldValue99.name = "humanoidBody";
let ProtoInstance100 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance100.name = "Joint";
ProtoInstance100.DEF = "hanim_humanoid_root";
let fieldValue101 = browser.currentScene.createNode("fieldValue");
fieldValue101.name = "stiffness";
fieldValue101.value = "1 1 1";
ProtoInstance100.fieldValue = new MFNode();

ProtoInstance100.fieldValue[0] = fieldValue101;

let fieldValue102 = browser.currentScene.createNode("fieldValue");
fieldValue102.name = "name";
fieldValue102.value = "humanoid_root";
ProtoInstance100.fieldValue[1] = fieldValue102;

let fieldValue103 = browser.currentScene.createNode("fieldValue");
fieldValue103.name = "center";
fieldValue103.value = "0 0.8240000009536743 0.027699999511241913";
ProtoInstance100.fieldValue[2] = fieldValue103;

let fieldValue104 = browser.currentScene.createNode("fieldValue");
fieldValue104.name = "children";
let ProtoInstance105 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance105.name = "Joint";
ProtoInstance105.DEF = "hanim_sacroiliac";
let fieldValue106 = browser.currentScene.createNode("fieldValue");
fieldValue106.name = "stiffness";
fieldValue106.value = "1 1 1";
ProtoInstance105.fieldValue = new MFNode();

ProtoInstance105.fieldValue[0] = fieldValue106;

let fieldValue107 = browser.currentScene.createNode("fieldValue");
fieldValue107.name = "name";
fieldValue107.value = "sacroiliac";
ProtoInstance105.fieldValue[1] = fieldValue107;

let fieldValue108 = browser.currentScene.createNode("fieldValue");
fieldValue108.name = "center";
fieldValue108.value = "0 0.914900004863739 0.0015999999595806003";
ProtoInstance105.fieldValue[2] = fieldValue108;

let fieldValue109 = browser.currentScene.createNode("fieldValue");
fieldValue109.name = "children";
let ProtoInstance110 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance110.name = "Joint";
ProtoInstance110.DEF = "hanim_l_hip";
let fieldValue111 = browser.currentScene.createNode("fieldValue");
fieldValue111.name = "stiffness";
fieldValue111.value = "1 1 1";
ProtoInstance110.fieldValue = new MFNode();

ProtoInstance110.fieldValue[0] = fieldValue111;

let fieldValue112 = browser.currentScene.createNode("fieldValue");
fieldValue112.name = "name";
fieldValue112.value = "l_hip";
ProtoInstance110.fieldValue[1] = fieldValue112;

let fieldValue113 = browser.currentScene.createNode("fieldValue");
fieldValue113.name = "center";
fieldValue113.value = "0.09610000252723694 0.9124000072479248 -0.00009999999747378752";
ProtoInstance110.fieldValue[2] = fieldValue113;

let fieldValue114 = browser.currentScene.createNode("fieldValue");
fieldValue114.name = "children";
let ProtoInstance115 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance115.name = "Joint";
ProtoInstance115.DEF = "hanim_l_knee";
let fieldValue116 = browser.currentScene.createNode("fieldValue");
fieldValue116.name = "stiffness";
fieldValue116.value = "1 1 1";
ProtoInstance115.fieldValue = new MFNode();

ProtoInstance115.fieldValue[0] = fieldValue116;

let fieldValue117 = browser.currentScene.createNode("fieldValue");
fieldValue117.name = "name";
fieldValue117.value = "l_knee";
ProtoInstance115.fieldValue[1] = fieldValue117;

let fieldValue118 = browser.currentScene.createNode("fieldValue");
fieldValue118.name = "center";
fieldValue118.value = "0.10400000214576721 0.48669999837875366 0.030799999833106995";
ProtoInstance115.fieldValue[2] = fieldValue118;

let fieldValue119 = browser.currentScene.createNode("fieldValue");
fieldValue119.name = "children";
let ProtoInstance120 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance120.name = "Joint";
ProtoInstance120.DEF = "hanim_l_talocrural";
let fieldValue121 = browser.currentScene.createNode("fieldValue");
fieldValue121.name = "stiffness";
fieldValue121.value = "1 1 1";
ProtoInstance120.fieldValue = new MFNode();

ProtoInstance120.fieldValue[0] = fieldValue121;

let fieldValue122 = browser.currentScene.createNode("fieldValue");
fieldValue122.name = "name";
fieldValue122.value = "l_talocrural";
ProtoInstance120.fieldValue[1] = fieldValue122;

let fieldValue123 = browser.currentScene.createNode("fieldValue");
fieldValue123.name = "center";
fieldValue123.value = "0.11010000109672546 0.06560000032186508 -0.07360000163316727";
ProtoInstance120.fieldValue[2] = fieldValue123;

let fieldValue124 = browser.currentScene.createNode("fieldValue");
fieldValue124.name = "children";
let ProtoInstance125 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance125.name = "Joint";
ProtoInstance125.DEF = "hanim_l_metatarsophalangeal_";
let fieldValue126 = browser.currentScene.createNode("fieldValue");
fieldValue126.name = "stiffness";
fieldValue126.value = "1 1 1";
ProtoInstance125.fieldValue = new MFNode();

ProtoInstance125.fieldValue[0] = fieldValue126;

let fieldValue127 = browser.currentScene.createNode("fieldValue");
fieldValue127.name = "name";
fieldValue127.value = "l_metatarsophalangeal_";
ProtoInstance125.fieldValue[1] = fieldValue127;

let fieldValue128 = browser.currentScene.createNode("fieldValue");
fieldValue128.name = "center";
fieldValue128.value = "0.10859999805688858 0.00009999999747378752 0.03680000081658363";
ProtoInstance125.fieldValue[2] = fieldValue128;

let fieldValue129 = browser.currentScene.createNode("fieldValue");
fieldValue129.name = "children";
let ProtoInstance130 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance130.name = "Segment";
ProtoInstance130.DEF = "hanim_l_middistal";
let fieldValue131 = browser.currentScene.createNode("fieldValue");
fieldValue131.name = "name";
fieldValue131.value = "l_middistal";
ProtoInstance130.fieldValue = new MFNode();

ProtoInstance130.fieldValue[0] = fieldValue131;

let fieldValue132 = browser.currentScene.createNode("fieldValue");
fieldValue132.name = "children";
let ProtoInstance133 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance133.name = "Site";
ProtoInstance133.DEF = "hanim_l_middistal_tip";
let fieldValue134 = browser.currentScene.createNode("fieldValue");
fieldValue134.name = "name";
fieldValue134.value = "l_middistal_tip";
ProtoInstance133.fieldValue = new MFNode();

ProtoInstance133.fieldValue[0] = fieldValue134;

let fieldValue135 = browser.currentScene.createNode("fieldValue");
fieldValue135.name = "translation";
fieldValue135.value = "0.13539999723434448 0.0015999999595806003 0.147599995136261";
ProtoInstance133.fieldValue[1] = fieldValue135;

fieldValue132.children = new MFNode();

fieldValue132.children[0] = ProtoInstance133;

let ProtoInstance136 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance136.name = "Site";
ProtoInstance136.DEF = "hanim_l_tarsal_interphalangeal_phalanx_5";
let fieldValue137 = browser.currentScene.createNode("fieldValue");
fieldValue137.name = "name";
fieldValue137.value = "l_tarsal_interphalangeal_phalanx_5";
ProtoInstance136.fieldValue = new MFNode();

ProtoInstance136.fieldValue[0] = fieldValue137;

let fieldValue138 = browser.currentScene.createNode("fieldValue");
fieldValue138.name = "translation";
fieldValue138.value = "0.18250000476837158 0.007000000216066837 0.09279999881982803";
ProtoInstance136.fieldValue[1] = fieldValue138;

fieldValue132.children[1] = ProtoInstance136;

let ProtoInstance139 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance139.name = "Site";
ProtoInstance139.DEF = "hanim_l_tarsal_interphalangeal_phalanx_1";
let fieldValue140 = browser.currentScene.createNode("fieldValue");
fieldValue140.name = "name";
fieldValue140.value = "l_tarsal_interphalangeal_phalanx_1";
ProtoInstance139.fieldValue = new MFNode();

ProtoInstance139.fieldValue[0] = fieldValue140;

let fieldValue141 = browser.currentScene.createNode("fieldValue");
fieldValue141.name = "translation";
fieldValue141.value = "0.08160000294446945 0.02319999970495701 0.010599999688565731";
ProtoInstance139.fieldValue[1] = fieldValue141;

fieldValue132.children[2] = ProtoInstance139;

let ProtoInstance142 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance142.name = "Site";
ProtoInstance142.DEF = "hanim_l_tarsal_distal_phalanx_2";
let fieldValue143 = browser.currentScene.createNode("fieldValue");
fieldValue143.name = "name";
fieldValue143.value = "l_tarsal_distal_phalanx_2";
ProtoInstance142.fieldValue = new MFNode();

ProtoInstance142.fieldValue[0] = fieldValue143;

let fieldValue144 = browser.currentScene.createNode("fieldValue");
fieldValue144.name = "translation";
fieldValue144.value = "0.11949999630451202 0.007899999618530273 0.14329999685287476";
ProtoInstance142.fieldValue[1] = fieldValue144;

fieldValue132.children[3] = ProtoInstance142;

ProtoInstance130.fieldValue[1] = fieldValue132;

fieldValue129.children = new MFNode();

fieldValue129.children[0] = ProtoInstance130;

ProtoInstance125.fieldValue[3] = fieldValue129;

fieldValue124.children = new MFNode();

fieldValue124.children[0] = ProtoInstance125;

let ProtoInstance145 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance145.name = "Segment";
ProtoInstance145.DEF = "hanim_l_hindfoot";
let fieldValue146 = browser.currentScene.createNode("fieldValue");
fieldValue146.name = "name";
fieldValue146.value = "l_hindfoot";
ProtoInstance145.fieldValue = new MFNode();

ProtoInstance145.fieldValue[0] = fieldValue146;

let fieldValue147 = browser.currentScene.createNode("fieldValue");
fieldValue147.name = "children";
let ProtoInstance148 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance148.name = "Site";
ProtoInstance148.DEF = "hanim_l_lateral_malleolus";
let fieldValue149 = browser.currentScene.createNode("fieldValue");
fieldValue149.name = "name";
fieldValue149.value = "l_lateral_malleolus";
ProtoInstance148.fieldValue = new MFNode();

ProtoInstance148.fieldValue[0] = fieldValue149;

let fieldValue150 = browser.currentScene.createNode("fieldValue");
fieldValue150.name = "translation";
fieldValue150.value = "0.13079999387264252 0.059700001031160355 -0.10320000350475311";
ProtoInstance148.fieldValue[1] = fieldValue150;

fieldValue147.children = new MFNode();

fieldValue147.children[0] = ProtoInstance148;

let ProtoInstance151 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance151.name = "Site";
ProtoInstance151.DEF = "hanim_l_medial_malleolus";
let fieldValue152 = browser.currentScene.createNode("fieldValue");
fieldValue152.name = "name";
fieldValue152.value = "l_medial_malleolus";
ProtoInstance151.fieldValue = new MFNode();

ProtoInstance151.fieldValue[0] = fieldValue152;

let fieldValue153 = browser.currentScene.createNode("fieldValue");
fieldValue153.name = "translation";
fieldValue153.value = "0.08900000154972076 0.07159999758005142 -0.08810000121593475";
ProtoInstance151.fieldValue[1] = fieldValue153;

fieldValue147.children[1] = ProtoInstance151;

let ProtoInstance154 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance154.name = "Site";
ProtoInstance154.DEF = "hanim_l_sphyrion";
let fieldValue155 = browser.currentScene.createNode("fieldValue");
fieldValue155.name = "name";
fieldValue155.value = "l_sphyrion";
ProtoInstance154.fieldValue = new MFNode();

ProtoInstance154.fieldValue[0] = fieldValue155;

let fieldValue156 = browser.currentScene.createNode("fieldValue");
fieldValue156.name = "translation";
fieldValue156.value = "0.08900000154972076 0.057500001043081284 -0.09430000185966492";
ProtoInstance154.fieldValue[1] = fieldValue156;

fieldValue147.children[2] = ProtoInstance154;

let ProtoInstance157 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance157.name = "Site";
ProtoInstance157.DEF = "hanim_l_calcaneus_posterior";
let fieldValue158 = browser.currentScene.createNode("fieldValue");
fieldValue158.name = "name";
fieldValue158.value = "l_calcaneus_posterior";
ProtoInstance157.fieldValue = new MFNode();

ProtoInstance157.fieldValue[0] = fieldValue158;

let fieldValue159 = browser.currentScene.createNode("fieldValue");
fieldValue159.name = "translation";
fieldValue159.value = "0.09740000218153 0.02590000070631504 -0.11710000038146973";
ProtoInstance157.fieldValue[1] = fieldValue159;

fieldValue147.children[3] = ProtoInstance157;

ProtoInstance145.fieldValue[1] = fieldValue147;

fieldValue124.children[1] = ProtoInstance145;

ProtoInstance120.fieldValue[3] = fieldValue124;

fieldValue119.children = new MFNode();

fieldValue119.children[0] = ProtoInstance120;

let ProtoInstance160 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance160.name = "Segment";
ProtoInstance160.DEF = "hanim_l_calf";
let fieldValue161 = browser.currentScene.createNode("fieldValue");
fieldValue161.name = "name";
fieldValue161.value = "l_calf";
ProtoInstance160.fieldValue = new MFNode();

ProtoInstance160.fieldValue[0] = fieldValue161;

fieldValue119.children[1] = ProtoInstance160;

ProtoInstance115.fieldValue[3] = fieldValue119;

fieldValue114.children = new MFNode();

fieldValue114.children[0] = ProtoInstance115;

let ProtoInstance162 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance162.name = "Segment";
ProtoInstance162.DEF = "hanim_l_thigh";
let fieldValue163 = browser.currentScene.createNode("fieldValue");
fieldValue163.name = "name";
fieldValue163.value = "l_thigh";
ProtoInstance162.fieldValue = new MFNode();

ProtoInstance162.fieldValue[0] = fieldValue163;

let fieldValue164 = browser.currentScene.createNode("fieldValue");
fieldValue164.name = "children";
let ProtoInstance165 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance165.name = "Site";
ProtoInstance165.DEF = "hanim_l_knee_crease";
let fieldValue166 = browser.currentScene.createNode("fieldValue");
fieldValue166.name = "name";
fieldValue166.value = "l_knee_crease";
ProtoInstance165.fieldValue = new MFNode();

ProtoInstance165.fieldValue[0] = fieldValue166;

let fieldValue167 = browser.currentScene.createNode("fieldValue");
fieldValue167.name = "translation";
fieldValue167.value = "0.09929999709129333 0.48809999227523804 -0.030899999663233757";
ProtoInstance165.fieldValue[1] = fieldValue167;

fieldValue164.children = new MFNode();

fieldValue164.children[0] = ProtoInstance165;

let ProtoInstance168 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance168.name = "Site";
ProtoInstance168.DEF = "hanim_l_femoral_lateral_epicondyles";
let fieldValue169 = browser.currentScene.createNode("fieldValue");
fieldValue169.name = "name";
fieldValue169.value = "l_femoral_lateral_epicondyles";
ProtoInstance168.fieldValue = new MFNode();

ProtoInstance168.fieldValue[0] = fieldValue169;

let fieldValue170 = browser.currentScene.createNode("fieldValue");
fieldValue170.name = "translation";
fieldValue170.value = "0.1597999930381775 0.4966999888420105 0.02969999983906746";
ProtoInstance168.fieldValue[1] = fieldValue170;

fieldValue164.children[1] = ProtoInstance168;

let ProtoInstance171 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance171.name = "Site";
ProtoInstance171.DEF = "hanim_l_femoral_medial_epicondyles";
let fieldValue172 = browser.currentScene.createNode("fieldValue");
fieldValue172.name = "name";
fieldValue172.value = "l_femoral_lateral_epicondyles";
ProtoInstance171.fieldValue = new MFNode();

ProtoInstance171.fieldValue[0] = fieldValue172;

let fieldValue173 = browser.currentScene.createNode("fieldValue");
fieldValue173.name = "translation";
fieldValue173.value = "0.039799999445676804 0.49459999799728394 0.030300000682473183";
ProtoInstance171.fieldValue[1] = fieldValue173;

fieldValue164.children[2] = ProtoInstance171;

ProtoInstance162.fieldValue[1] = fieldValue164;

fieldValue114.children[1] = ProtoInstance162;

ProtoInstance110.fieldValue[3] = fieldValue114;

fieldValue109.children = new MFNode();

fieldValue109.children[0] = ProtoInstance110;

let ProtoInstance174 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance174.name = "Joint";
ProtoInstance174.DEF = "hanim_r_hip";
let fieldValue175 = browser.currentScene.createNode("fieldValue");
fieldValue175.name = "stiffness";
fieldValue175.value = "1 1 1";
ProtoInstance174.fieldValue = new MFNode();

ProtoInstance174.fieldValue[0] = fieldValue175;

let fieldValue176 = browser.currentScene.createNode("fieldValue");
fieldValue176.name = "name";
fieldValue176.value = "r_hip";
ProtoInstance174.fieldValue[1] = fieldValue176;

let fieldValue177 = browser.currentScene.createNode("fieldValue");
fieldValue177.name = "center";
fieldValue177.value = "-0.0949999988079071 0.9171000123023987 0.002899999963119626";
ProtoInstance174.fieldValue[2] = fieldValue177;

let fieldValue178 = browser.currentScene.createNode("fieldValue");
fieldValue178.name = "children";
let ProtoInstance179 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance179.name = "Joint";
ProtoInstance179.DEF = "hanim_r_knee";
let fieldValue180 = browser.currentScene.createNode("fieldValue");
fieldValue180.name = "stiffness";
fieldValue180.value = "1 1 1";
ProtoInstance179.fieldValue = new MFNode();

ProtoInstance179.fieldValue[0] = fieldValue180;

let fieldValue181 = browser.currentScene.createNode("fieldValue");
fieldValue181.name = "name";
fieldValue181.value = "r_knee";
ProtoInstance179.fieldValue[1] = fieldValue181;

let fieldValue182 = browser.currentScene.createNode("fieldValue");
fieldValue182.name = "center";
fieldValue182.value = "-0.08669999986886978 0.49129998683929443 0.03180000185966492";
ProtoInstance179.fieldValue[2] = fieldValue182;

let fieldValue183 = browser.currentScene.createNode("fieldValue");
fieldValue183.name = "children";
let ProtoInstance184 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance184.name = "Joint";
ProtoInstance184.DEF = "hanim_r_talocrural";
let fieldValue185 = browser.currentScene.createNode("fieldValue");
fieldValue185.name = "stiffness";
fieldValue185.value = "1 1 1";
ProtoInstance184.fieldValue = new MFNode();

ProtoInstance184.fieldValue[0] = fieldValue185;

let fieldValue186 = browser.currentScene.createNode("fieldValue");
fieldValue186.name = "name";
fieldValue186.value = "r_talocrural";
ProtoInstance184.fieldValue[1] = fieldValue186;

let fieldValue187 = browser.currentScene.createNode("fieldValue");
fieldValue187.name = "center";
fieldValue187.value = "-0.08009999990463257 0.07119999825954437 -0.07660000026226044";
ProtoInstance184.fieldValue[2] = fieldValue187;

let fieldValue188 = browser.currentScene.createNode("fieldValue");
fieldValue188.name = "children";
let ProtoInstance189 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance189.name = "Joint";
ProtoInstance189.DEF = "hanim_r_metatarsophalangeal_";
let fieldValue190 = browser.currentScene.createNode("fieldValue");
fieldValue190.name = "stiffness";
fieldValue190.value = "1 1 1";
ProtoInstance189.fieldValue = new MFNode();

ProtoInstance189.fieldValue[0] = fieldValue190;

let fieldValue191 = browser.currentScene.createNode("fieldValue");
fieldValue191.name = "name";
fieldValue191.value = "r_metatarsophalangeal_";
ProtoInstance189.fieldValue[1] = fieldValue191;

let fieldValue192 = browser.currentScene.createNode("fieldValue");
fieldValue192.name = "center";
fieldValue192.value = "-0.08009999990463257 0 0.03680000081658363";
ProtoInstance189.fieldValue[2] = fieldValue192;

let fieldValue193 = browser.currentScene.createNode("fieldValue");
fieldValue193.name = "children";
let ProtoInstance194 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance194.name = "Segment";
ProtoInstance194.DEF = "hanim_r_middistal";
let fieldValue195 = browser.currentScene.createNode("fieldValue");
fieldValue195.name = "name";
fieldValue195.value = "r_middistal";
ProtoInstance194.fieldValue = new MFNode();

ProtoInstance194.fieldValue[0] = fieldValue195;

let fieldValue196 = browser.currentScene.createNode("fieldValue");
fieldValue196.name = "children";
let ProtoInstance197 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance197.name = "Site";
ProtoInstance197.DEF = "hanim_r_middistal_tip";
let fieldValue198 = browser.currentScene.createNode("fieldValue");
fieldValue198.name = "name";
fieldValue198.value = "r_middistal_tip";
ProtoInstance197.fieldValue = new MFNode();

ProtoInstance197.fieldValue[0] = fieldValue198;

let fieldValue199 = browser.currentScene.createNode("fieldValue");
fieldValue199.name = "translation";
fieldValue199.value = "-0.10429999977350235 -0.022700000554323196 0.14499999582767487";
ProtoInstance197.fieldValue[1] = fieldValue199;

fieldValue196.children = new MFNode();

fieldValue196.children[0] = ProtoInstance197;

let ProtoInstance200 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance200.name = "Site";
ProtoInstance200.DEF = "hanim_r_tarsal_interphalangeal_phalanx_5";
let fieldValue201 = browser.currentScene.createNode("fieldValue");
fieldValue201.name = "name";
fieldValue201.value = "r_tarsal_interphalangeal_phalanx_5";
ProtoInstance200.fieldValue = new MFNode();

ProtoInstance200.fieldValue[0] = fieldValue201;

let fieldValue202 = browser.currentScene.createNode("fieldValue");
fieldValue202.name = "translation";
fieldValue202.value = "-0.15230000019073486 0.016599999740719795 0.08950000256299973";
ProtoInstance200.fieldValue[1] = fieldValue202;

fieldValue196.children[1] = ProtoInstance200;

let ProtoInstance203 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance203.name = "Site";
ProtoInstance203.DEF = "hanim_r_tarsal_interphalangeal_phalanx_1";
let fieldValue204 = browser.currentScene.createNode("fieldValue");
fieldValue204.name = "name";
fieldValue204.value = "r_tarsal_interphalangeal_phalanx_1";
ProtoInstance203.fieldValue = new MFNode();

ProtoInstance203.fieldValue[0] = fieldValue204;

let fieldValue205 = browser.currentScene.createNode("fieldValue");
fieldValue205.name = "translation";
fieldValue205.value = "-0.05209999904036522 0.026000000536441803 0.01269999984651804";
ProtoInstance203.fieldValue[1] = fieldValue205;

fieldValue196.children[2] = ProtoInstance203;

let ProtoInstance206 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance206.name = "Site";
ProtoInstance206.DEF = "hanim_r_tarsal_distal_phalanx_2";
let fieldValue207 = browser.currentScene.createNode("fieldValue");
fieldValue207.name = "name";
fieldValue207.value = "r_tarsal_distal_phalanx_2";
ProtoInstance206.fieldValue = new MFNode();

ProtoInstance206.fieldValue[0] = fieldValue207;

let fieldValue208 = browser.currentScene.createNode("fieldValue");
fieldValue208.name = "translation";
fieldValue208.value = "-0.08829999715089798 0.013399999588727951 0.13830000162124634";
ProtoInstance206.fieldValue[1] = fieldValue208;

fieldValue196.children[3] = ProtoInstance206;

ProtoInstance194.fieldValue[1] = fieldValue196;

fieldValue193.children = new MFNode();

fieldValue193.children[0] = ProtoInstance194;

ProtoInstance189.fieldValue[3] = fieldValue193;

fieldValue188.children = new MFNode();

fieldValue188.children[0] = ProtoInstance189;

let ProtoInstance209 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance209.name = "Segment";
ProtoInstance209.DEF = "hanim_r_hindfoot";
let fieldValue210 = browser.currentScene.createNode("fieldValue");
fieldValue210.name = "name";
fieldValue210.value = "r_hindfoot";
ProtoInstance209.fieldValue = new MFNode();

ProtoInstance209.fieldValue[0] = fieldValue210;

let fieldValue211 = browser.currentScene.createNode("fieldValue");
fieldValue211.name = "children";
let ProtoInstance212 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance212.name = "Site";
ProtoInstance212.DEF = "hanim_r_lateral_malleolus";
let fieldValue213 = browser.currentScene.createNode("fieldValue");
fieldValue213.name = "name";
fieldValue213.value = "r_lateral_malleolus";
ProtoInstance212.fieldValue = new MFNode();

ProtoInstance212.fieldValue[0] = fieldValue213;

let fieldValue214 = browser.currentScene.createNode("fieldValue");
fieldValue214.name = "translation";
fieldValue214.value = "-0.1005999967455864 0.0658000037074089 -0.10750000178813934";
ProtoInstance212.fieldValue[1] = fieldValue214;

fieldValue211.children = new MFNode();

fieldValue211.children[0] = ProtoInstance212;

let ProtoInstance215 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance215.name = "Site";
ProtoInstance215.DEF = "hanim_r_medial_malleolus";
let fieldValue216 = browser.currentScene.createNode("fieldValue");
fieldValue216.name = "name";
fieldValue216.value = "r_medial_malleolus";
ProtoInstance215.fieldValue = new MFNode();

ProtoInstance215.fieldValue[0] = fieldValue216;

let fieldValue217 = browser.currentScene.createNode("fieldValue");
fieldValue217.name = "translation";
fieldValue217.value = "-0.05909999832510948 0.07599999755620956 -0.09279999881982803";
ProtoInstance215.fieldValue[1] = fieldValue217;

fieldValue211.children[1] = ProtoInstance215;

let ProtoInstance218 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance218.name = "Site";
ProtoInstance218.DEF = "hanim_r_sphyrion";
let fieldValue219 = browser.currentScene.createNode("fieldValue");
fieldValue219.name = "name";
fieldValue219.value = "r_sphyrion";
ProtoInstance218.fieldValue = new MFNode();

ProtoInstance218.fieldValue[0] = fieldValue219;

let fieldValue220 = browser.currentScene.createNode("fieldValue");
fieldValue220.name = "translation";
fieldValue220.value = "-0.06030000001192093 0.061000000685453415 -0.10019999742507935";
ProtoInstance218.fieldValue[1] = fieldValue220;

fieldValue211.children[2] = ProtoInstance218;

let ProtoInstance221 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance221.name = "Site";
ProtoInstance221.DEF = "hanim_r_calcaneus_posterior";
let fieldValue222 = browser.currentScene.createNode("fieldValue");
fieldValue222.name = "name";
fieldValue222.value = "r_calcaneus_posterior";
ProtoInstance221.fieldValue = new MFNode();

ProtoInstance221.fieldValue[0] = fieldValue222;

let fieldValue223 = browser.currentScene.createNode("fieldValue");
fieldValue223.name = "translation";
fieldValue223.value = "-0.06920000165700912 0.02969999983906746 -0.12210000306367874";
ProtoInstance221.fieldValue[1] = fieldValue223;

fieldValue211.children[3] = ProtoInstance221;

ProtoInstance209.fieldValue[1] = fieldValue211;

fieldValue188.children[1] = ProtoInstance209;

ProtoInstance184.fieldValue[3] = fieldValue188;

fieldValue183.children = new MFNode();

fieldValue183.children[0] = ProtoInstance184;

let ProtoInstance224 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance224.name = "Segment";
ProtoInstance224.DEF = "hanim_r_calf";
let fieldValue225 = browser.currentScene.createNode("fieldValue");
fieldValue225.name = "name";
fieldValue225.value = "r_calf";
ProtoInstance224.fieldValue = new MFNode();

ProtoInstance224.fieldValue[0] = fieldValue225;

fieldValue183.children[1] = ProtoInstance224;

ProtoInstance179.fieldValue[3] = fieldValue183;

fieldValue178.children = new MFNode();

fieldValue178.children[0] = ProtoInstance179;

let ProtoInstance226 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance226.name = "Segment";
ProtoInstance226.DEF = "hanim_r_thigh";
let fieldValue227 = browser.currentScene.createNode("fieldValue");
fieldValue227.name = "name";
fieldValue227.value = "r_thigh";
ProtoInstance226.fieldValue = new MFNode();

ProtoInstance226.fieldValue[0] = fieldValue227;

let fieldValue228 = browser.currentScene.createNode("fieldValue");
fieldValue228.name = "children";
let ProtoInstance229 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance229.name = "Site";
ProtoInstance229.DEF = "hanim_r_knee_crease";
let fieldValue230 = browser.currentScene.createNode("fieldValue");
fieldValue230.name = "name";
fieldValue230.value = "r_knee_crease";
ProtoInstance229.fieldValue = new MFNode();

ProtoInstance229.fieldValue[0] = fieldValue230;

let fieldValue231 = browser.currentScene.createNode("fieldValue");
fieldValue231.name = "translation";
fieldValue231.value = "-0.08250000327825546 0.49320000410079956 -0.032600000500679016";
ProtoInstance229.fieldValue[1] = fieldValue231;

fieldValue228.children = new MFNode();

fieldValue228.children[0] = ProtoInstance229;

let ProtoInstance232 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance232.name = "Site";
ProtoInstance232.DEF = "hanim_r_femoral_lateral_epicondyles";
let fieldValue233 = browser.currentScene.createNode("fieldValue");
fieldValue233.name = "name";
fieldValue233.value = "r_femoral_lateral_epicondyles";
ProtoInstance232.fieldValue = new MFNode();

ProtoInstance232.fieldValue[0] = fieldValue233;

let fieldValue234 = browser.currentScene.createNode("fieldValue");
fieldValue234.name = "translation";
fieldValue234.value = "-0.1421000063419342 0.4991999864578247 0.03099999949336052";
ProtoInstance232.fieldValue[1] = fieldValue234;

fieldValue228.children[1] = ProtoInstance232;

let ProtoInstance235 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance235.name = "Site";
ProtoInstance235.DEF = "hanim_r_femoral_medial_epicondyles";
let fieldValue236 = browser.currentScene.createNode("fieldValue");
fieldValue236.name = "name";
fieldValue236.value = "r_femoral_lateral_epicondyles";
ProtoInstance235.fieldValue = new MFNode();

ProtoInstance235.fieldValue[0] = fieldValue236;

let fieldValue237 = browser.currentScene.createNode("fieldValue");
fieldValue237.name = "translation";
fieldValue237.value = "-0.022099999710917473 0.5013999938964844 0.02889999933540821";
ProtoInstance235.fieldValue[1] = fieldValue237;

fieldValue228.children[2] = ProtoInstance235;

ProtoInstance226.fieldValue[1] = fieldValue228;

fieldValue178.children[1] = ProtoInstance226;

ProtoInstance174.fieldValue[3] = fieldValue178;

fieldValue109.children[1] = ProtoInstance174;

let ProtoInstance238 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance238.name = "Segment";
ProtoInstance238.DEF = "hanim_pelvis";
let fieldValue239 = browser.currentScene.createNode("fieldValue");
fieldValue239.name = "name";
fieldValue239.value = "pelvis";
ProtoInstance238.fieldValue = new MFNode();

ProtoInstance238.fieldValue[0] = fieldValue239;

fieldValue109.children[2] = ProtoInstance238;

ProtoInstance105.fieldValue[3] = fieldValue109;

fieldValue104.children = new MFNode();

fieldValue104.children[0] = ProtoInstance105;

let ProtoInstance240 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance240.name = "Joint";
ProtoInstance240.DEF = "hanim_vl5";
let fieldValue241 = browser.currentScene.createNode("fieldValue");
fieldValue241.name = "stiffness";
fieldValue241.value = "1 1 1";
ProtoInstance240.fieldValue = new MFNode();

ProtoInstance240.fieldValue[0] = fieldValue241;

let fieldValue242 = browser.currentScene.createNode("fieldValue");
fieldValue242.name = "name";
fieldValue242.value = "vl5";
ProtoInstance240.fieldValue[1] = fieldValue242;

let fieldValue243 = browser.currentScene.createNode("fieldValue");
fieldValue243.name = "center";
fieldValue243.value = "0.00279999990016222 1.0568000078201294 -0.07760000228881836";
ProtoInstance240.fieldValue[2] = fieldValue243;

let fieldValue244 = browser.currentScene.createNode("fieldValue");
fieldValue244.name = "children";
let ProtoInstance245 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance245.name = "Joint";
ProtoInstance245.DEF = "hanim_skullbase";
let fieldValue246 = browser.currentScene.createNode("fieldValue");
fieldValue246.name = "stiffness";
fieldValue246.value = "1 1 1";
ProtoInstance245.fieldValue = new MFNode();

ProtoInstance245.fieldValue[0] = fieldValue246;

let fieldValue247 = browser.currentScene.createNode("fieldValue");
fieldValue247.name = "name";
fieldValue247.value = "skullbase";
ProtoInstance245.fieldValue[1] = fieldValue247;

let fieldValue248 = browser.currentScene.createNode("fieldValue");
fieldValue248.name = "center";
fieldValue248.value = "0.004399999976158142 1.62090003490448 0.023600000888109207";
ProtoInstance245.fieldValue[2] = fieldValue248;

let fieldValue249 = browser.currentScene.createNode("fieldValue");
fieldValue249.name = "children";
let ProtoInstance250 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance250.name = "Segment";
ProtoInstance250.DEF = "hanim_skull";
let fieldValue251 = browser.currentScene.createNode("fieldValue");
fieldValue251.name = "name";
fieldValue251.value = "skull";
ProtoInstance250.fieldValue = new MFNode();

ProtoInstance250.fieldValue[0] = fieldValue251;

let fieldValue252 = browser.currentScene.createNode("fieldValue");
fieldValue252.name = "children";
let ProtoInstance253 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance253.name = "Site";
ProtoInstance253.DEF = "hanim_skull_tip";
let fieldValue254 = browser.currentScene.createNode("fieldValue");
fieldValue254.name = "name";
fieldValue254.value = "skull_tip";
ProtoInstance253.fieldValue = new MFNode();

ProtoInstance253.fieldValue[0] = fieldValue254;

let fieldValue255 = browser.currentScene.createNode("fieldValue");
fieldValue255.name = "translation";
fieldValue255.value = "0.004999999888241291 1.7503999471664429 0.005499999970197678";
ProtoInstance253.fieldValue[1] = fieldValue255;

fieldValue252.children = new MFNode();

fieldValue252.children[0] = ProtoInstance253;

let ProtoInstance256 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance256.name = "Site";
ProtoInstance256.DEF = "hanim_sellion";
let fieldValue257 = browser.currentScene.createNode("fieldValue");
fieldValue257.name = "name";
fieldValue257.value = "sellion";
ProtoInstance256.fieldValue = new MFNode();

ProtoInstance256.fieldValue[0] = fieldValue257;

let fieldValue258 = browser.currentScene.createNode("fieldValue");
fieldValue258.name = "translation";
fieldValue258.value = "0.005799999926239252 1.631600022315979 0.0851999968290329";
ProtoInstance256.fieldValue[1] = fieldValue258;

fieldValue252.children[1] = ProtoInstance256;

let ProtoInstance259 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance259.name = "Site";
ProtoInstance259.DEF = "hanim_r_infraorbitale";
let fieldValue260 = browser.currentScene.createNode("fieldValue");
fieldValue260.name = "name";
fieldValue260.value = "r_infraorbitale";
ProtoInstance259.fieldValue = new MFNode();

ProtoInstance259.fieldValue[0] = fieldValue260;

let fieldValue261 = browser.currentScene.createNode("fieldValue");
fieldValue261.name = "translation";
fieldValue261.value = "-0.02370000071823597 1.6171000003814697 0.07519999891519547";
ProtoInstance259.fieldValue[1] = fieldValue261;

fieldValue252.children[2] = ProtoInstance259;

let ProtoInstance262 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance262.name = "Site";
ProtoInstance262.DEF = "hanim_l_infraorbitale";
let fieldValue263 = browser.currentScene.createNode("fieldValue");
fieldValue263.name = "name";
fieldValue263.value = "l_infraorbitale";
ProtoInstance262.fieldValue = new MFNode();

ProtoInstance262.fieldValue[0] = fieldValue263;

let fieldValue264 = browser.currentScene.createNode("fieldValue");
fieldValue264.name = "translation";
fieldValue264.value = "0.0340999998152256 1.6171000003814697 0.07519999891519547";
ProtoInstance262.fieldValue[1] = fieldValue264;

fieldValue252.children[3] = ProtoInstance262;

let ProtoInstance265 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance265.name = "Site";
ProtoInstance265.DEF = "hanim_supramenton";
let fieldValue266 = browser.currentScene.createNode("fieldValue");
fieldValue266.name = "name";
fieldValue266.value = "supramenton";
ProtoInstance265.fieldValue = new MFNode();

ProtoInstance265.fieldValue[0] = fieldValue266;

let fieldValue267 = browser.currentScene.createNode("fieldValue");
fieldValue267.name = "translation";
fieldValue267.value = "0.006099999882280827 1.5410000085830688 0.08049999922513962";
ProtoInstance265.fieldValue[1] = fieldValue267;

fieldValue252.children[4] = ProtoInstance265;

let ProtoInstance268 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance268.name = "Site";
ProtoInstance268.DEF = "hanim_r_tragion";
let fieldValue269 = browser.currentScene.createNode("fieldValue");
fieldValue269.name = "name";
fieldValue269.value = "r_tragion";
ProtoInstance268.fieldValue = new MFNode();

ProtoInstance268.fieldValue[0] = fieldValue269;

let fieldValue270 = browser.currentScene.createNode("fieldValue");
fieldValue270.name = "translation";
fieldValue270.value = "-0.06459999829530716 1.6346999406814575 0.03020000085234642";
ProtoInstance268.fieldValue[1] = fieldValue270;

fieldValue252.children[5] = ProtoInstance268;

let ProtoInstance271 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance271.name = "Site";
ProtoInstance271.DEF = "hanim_r_gonion";
let fieldValue272 = browser.currentScene.createNode("fieldValue");
fieldValue272.name = "name";
fieldValue272.value = "r_gonion";
ProtoInstance271.fieldValue = new MFNode();

ProtoInstance271.fieldValue[0] = fieldValue272;

let fieldValue273 = browser.currentScene.createNode("fieldValue");
fieldValue273.name = "translation";
fieldValue273.value = "-0.052000001072883606 1.552899956703186 0.034699998795986176";
ProtoInstance271.fieldValue[1] = fieldValue273;

fieldValue252.children[6] = ProtoInstance271;

let ProtoInstance274 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance274.name = "Site";
ProtoInstance274.DEF = "hanim_l_tragion";
let fieldValue275 = browser.currentScene.createNode("fieldValue");
fieldValue275.name = "name";
fieldValue275.value = "l_tragion";
ProtoInstance274.fieldValue = new MFNode();

ProtoInstance274.fieldValue[0] = fieldValue275;

let fieldValue276 = browser.currentScene.createNode("fieldValue");
fieldValue276.name = "translation";
fieldValue276.value = "0.0738999992609024 1.6347999572753906 0.028200000524520874";
ProtoInstance274.fieldValue[1] = fieldValue276;

fieldValue252.children[7] = ProtoInstance274;

let ProtoInstance277 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance277.name = "Site";
ProtoInstance277.DEF = "hanim_l_gonion";
let fieldValue278 = browser.currentScene.createNode("fieldValue");
fieldValue278.name = "name";
fieldValue278.value = "l_gonion";
ProtoInstance277.fieldValue = new MFNode();

ProtoInstance277.fieldValue[0] = fieldValue278;

let fieldValue279 = browser.currentScene.createNode("fieldValue");
fieldValue279.name = "translation";
fieldValue279.value = "0.06310000270605087 1.5529999732971191 0.032999999821186066";
ProtoInstance277.fieldValue[1] = fieldValue279;

fieldValue252.children[8] = ProtoInstance277;

let ProtoInstance280 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance280.name = "Site";
ProtoInstance280.DEF = "hanim_nuchale";
let fieldValue281 = browser.currentScene.createNode("fieldValue");
fieldValue281.name = "name";
fieldValue281.value = "nuchale";
ProtoInstance280.fieldValue = new MFNode();

ProtoInstance280.fieldValue[0] = fieldValue281;

let fieldValue282 = browser.currentScene.createNode("fieldValue");
fieldValue282.name = "translation";
fieldValue282.value = "0.0038999998942017555 1.5972000360488892 -0.07959999889135361";
ProtoInstance280.fieldValue[1] = fieldValue282;

fieldValue252.children[9] = ProtoInstance280;

ProtoInstance250.fieldValue[1] = fieldValue252;

fieldValue249.children = new MFNode();

fieldValue249.children[0] = ProtoInstance250;

ProtoInstance245.fieldValue[3] = fieldValue249;

fieldValue244.children = new MFNode();

fieldValue244.children[0] = ProtoInstance245;

let ProtoInstance283 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance283.name = "Joint";
ProtoInstance283.DEF = "hanim_l_shoulder";
let fieldValue284 = browser.currentScene.createNode("fieldValue");
fieldValue284.name = "stiffness";
fieldValue284.value = "1 1 1";
ProtoInstance283.fieldValue = new MFNode();

ProtoInstance283.fieldValue[0] = fieldValue284;

let fieldValue285 = browser.currentScene.createNode("fieldValue");
fieldValue285.name = "name";
fieldValue285.value = "l_shoulder";
ProtoInstance283.fieldValue[1] = fieldValue285;

let fieldValue286 = browser.currentScene.createNode("fieldValue");
fieldValue286.name = "center";
fieldValue286.value = "0.2029000073671341 1.437600016593933 -0.03869999945163727";
ProtoInstance283.fieldValue[2] = fieldValue286;

let fieldValue287 = browser.currentScene.createNode("fieldValue");
fieldValue287.name = "children";
let ProtoInstance288 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance288.name = "Joint";
ProtoInstance288.DEF = "hanim_l_elbow";
let fieldValue289 = browser.currentScene.createNode("fieldValue");
fieldValue289.name = "stiffness";
fieldValue289.value = "1 1 1";
ProtoInstance288.fieldValue = new MFNode();

ProtoInstance288.fieldValue[0] = fieldValue289;

let fieldValue290 = browser.currentScene.createNode("fieldValue");
fieldValue290.name = "name";
fieldValue290.value = "l_elbow";
ProtoInstance288.fieldValue[1] = fieldValue290;

let fieldValue291 = browser.currentScene.createNode("fieldValue");
fieldValue291.name = "center";
fieldValue291.value = "0.2013999968767166 1.135699987411499 -0.0681999996304512";
ProtoInstance288.fieldValue[2] = fieldValue291;

let fieldValue292 = browser.currentScene.createNode("fieldValue");
fieldValue292.name = "children";
let ProtoInstance293 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance293.name = "Joint";
ProtoInstance293.DEF = "hanim_l_radiocarpal";
let fieldValue294 = browser.currentScene.createNode("fieldValue");
fieldValue294.name = "stiffness";
fieldValue294.value = "1 1 1";
ProtoInstance293.fieldValue = new MFNode();

ProtoInstance293.fieldValue[0] = fieldValue294;

let fieldValue295 = browser.currentScene.createNode("fieldValue");
fieldValue295.name = "name";
fieldValue295.value = "l_radiocarpal";
ProtoInstance293.fieldValue[1] = fieldValue295;

let fieldValue296 = browser.currentScene.createNode("fieldValue");
fieldValue296.name = "center";
fieldValue296.value = "0.19840000569820404 0.8662999868392944 -0.05829999968409538";
ProtoInstance293.fieldValue[2] = fieldValue296;

let fieldValue297 = browser.currentScene.createNode("fieldValue");
fieldValue297.name = "children";
let ProtoInstance298 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance298.name = "Segment";
ProtoInstance298.DEF = "hanim_l_hand";
let fieldValue299 = browser.currentScene.createNode("fieldValue");
fieldValue299.name = "name";
fieldValue299.value = "l_hand";
ProtoInstance298.fieldValue = new MFNode();

ProtoInstance298.fieldValue[0] = fieldValue299;

let fieldValue300 = browser.currentScene.createNode("fieldValue");
fieldValue300.name = "children";
let ProtoInstance301 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance301.name = "Site";
ProtoInstance301.DEF = "hanim_l_hand_tip";
let fieldValue302 = browser.currentScene.createNode("fieldValue");
fieldValue302.name = "name";
fieldValue302.value = "l_hand_tip";
ProtoInstance301.fieldValue = new MFNode();

ProtoInstance301.fieldValue[0] = fieldValue302;

let fieldValue303 = browser.currentScene.createNode("fieldValue");
fieldValue303.name = "translation";
fieldValue303.value = "0.20800000429153442 0.6730999946594238 -0.04910000041127205";
ProtoInstance301.fieldValue[1] = fieldValue303;

fieldValue300.children = new MFNode();

fieldValue300.children[0] = ProtoInstance301;

let ProtoInstance304 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance304.name = "Site";
ProtoInstance304.DEF = "hanim_l_metacarpal_phalanx_2";
let fieldValue305 = browser.currentScene.createNode("fieldValue");
fieldValue305.name = "name";
fieldValue305.value = "l_metacarpal_phalanx_2";
ProtoInstance304.fieldValue = new MFNode();

ProtoInstance304.fieldValue[0] = fieldValue305;

let fieldValue306 = browser.currentScene.createNode("fieldValue");
fieldValue306.name = "translation";
fieldValue306.value = "0.20090000331401825 0.8138999938964844 -0.02370000071823597";
ProtoInstance304.fieldValue[1] = fieldValue306;

fieldValue300.children[1] = ProtoInstance304;

let ProtoInstance307 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance307.name = "Site";
ProtoInstance307.DEF = "hanim_l_dactylion";
let fieldValue308 = browser.currentScene.createNode("fieldValue");
fieldValue308.name = "name";
fieldValue308.value = "l_dactylion";
ProtoInstance307.fieldValue = new MFNode();

ProtoInstance307.fieldValue[0] = fieldValue308;

let fieldValue309 = browser.currentScene.createNode("fieldValue");
fieldValue309.name = "translation";
fieldValue309.value = "0.20559999346733093 0.6743000149726868 -0.04820000007748604";
ProtoInstance307.fieldValue[1] = fieldValue309;

fieldValue300.children[2] = ProtoInstance307;

let ProtoInstance310 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance310.name = "Site";
ProtoInstance310.DEF = "hanim_l_ulnar_styloid";
let fieldValue311 = browser.currentScene.createNode("fieldValue");
fieldValue311.name = "name";
fieldValue311.value = "l_ulnar_styloid";
ProtoInstance310.fieldValue = new MFNode();

ProtoInstance310.fieldValue[0] = fieldValue311;

let fieldValue312 = browser.currentScene.createNode("fieldValue");
fieldValue312.name = "translation";
fieldValue312.value = "-0.2142000049352646 0.8529000282287598 -0.06480000168085098";
ProtoInstance310.fieldValue[1] = fieldValue312;

fieldValue300.children[3] = ProtoInstance310;

let ProtoInstance313 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance313.name = "Site";
ProtoInstance313.DEF = "hanim_l_metacarpal_phalanx_5";
let fieldValue314 = browser.currentScene.createNode("fieldValue");
fieldValue314.name = "name";
fieldValue314.value = "l_metacarpal_phalanx_5";
ProtoInstance313.fieldValue = new MFNode();

ProtoInstance313.fieldValue[0] = fieldValue314;

let fieldValue315 = browser.currentScene.createNode("fieldValue");
fieldValue315.name = "translation";
fieldValue315.value = "0.19290000200271606 0.7860000133514404 -0.11219999939203262";
ProtoInstance313.fieldValue[1] = fieldValue315;

fieldValue300.children[4] = ProtoInstance313;

ProtoInstance298.fieldValue[1] = fieldValue300;

fieldValue297.children = new MFNode();

fieldValue297.children[0] = ProtoInstance298;

ProtoInstance293.fieldValue[3] = fieldValue297;

fieldValue292.children = new MFNode();

fieldValue292.children[0] = ProtoInstance293;

let ProtoInstance316 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance316.name = "Segment";
ProtoInstance316.DEF = "hanim_l_forearm";
let fieldValue317 = browser.currentScene.createNode("fieldValue");
fieldValue317.name = "name";
fieldValue317.value = "l_forearm";
ProtoInstance316.fieldValue = new MFNode();

ProtoInstance316.fieldValue[0] = fieldValue317;

let fieldValue318 = browser.currentScene.createNode("fieldValue");
fieldValue318.name = "children";
let ProtoInstance319 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance319.name = "Site";
ProtoInstance319.DEF = "hanim_l_radial_styloid";
let fieldValue320 = browser.currentScene.createNode("fieldValue");
fieldValue320.name = "name";
fieldValue320.value = "l_radial_styloid";
ProtoInstance319.fieldValue = new MFNode();

ProtoInstance319.fieldValue[0] = fieldValue320;

let fieldValue321 = browser.currentScene.createNode("fieldValue");
fieldValue321.name = "translation";
fieldValue321.value = "0.19009999930858612 0.8644999861717224 -0.04149999842047691";
ProtoInstance319.fieldValue[1] = fieldValue321;

fieldValue318.children = new MFNode();

fieldValue318.children[0] = ProtoInstance319;

let ProtoInstance322 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance322.name = "Site";
ProtoInstance322.DEF = "hanim_l_olecranon";
let fieldValue323 = browser.currentScene.createNode("fieldValue");
fieldValue323.name = "name";
fieldValue323.value = "l_olecranon";
ProtoInstance322.fieldValue = new MFNode();

ProtoInstance322.fieldValue[0] = fieldValue323;

let fieldValue324 = browser.currentScene.createNode("fieldValue");
fieldValue324.name = "translation";
fieldValue324.value = "-0.19619999825954437 1.1375000476837158 -0.11230000108480453";
ProtoInstance322.fieldValue[1] = fieldValue324;

fieldValue318.children[1] = ProtoInstance322;

let ProtoInstance325 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance325.name = "Site";
ProtoInstance325.DEF = "hanim_l_humeral_medial_epicondyles";
let fieldValue326 = browser.currentScene.createNode("fieldValue");
fieldValue326.name = "name";
fieldValue326.value = "l_humeral_medial_epicondyles";
ProtoInstance325.fieldValue = new MFNode();

ProtoInstance325.fieldValue[0] = fieldValue326;

let fieldValue327 = browser.currentScene.createNode("fieldValue");
fieldValue327.name = "translation";
fieldValue327.value = "0.17350000143051147 1.1272000074386597 -0.11129999905824661";
ProtoInstance325.fieldValue[1] = fieldValue327;

fieldValue318.children[2] = ProtoInstance325;

let ProtoInstance328 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance328.name = "Site";
ProtoInstance328.DEF = "hanim_l_radiale";
let fieldValue329 = browser.currentScene.createNode("fieldValue");
fieldValue329.name = "name";
fieldValue329.value = "l_radiale";
ProtoInstance328.fieldValue = new MFNode();

ProtoInstance328.fieldValue[0] = fieldValue329;

let fieldValue330 = browser.currentScene.createNode("fieldValue");
fieldValue330.name = "translation";
fieldValue330.value = "0.21819999814033508 1.1211999654769897 -0.11670000106096268";
ProtoInstance328.fieldValue[1] = fieldValue330;

fieldValue318.children[3] = ProtoInstance328;

ProtoInstance316.fieldValue[1] = fieldValue318;

fieldValue292.children[1] = ProtoInstance316;

ProtoInstance288.fieldValue[3] = fieldValue292;

fieldValue287.children = new MFNode();

fieldValue287.children[0] = ProtoInstance288;

let ProtoInstance331 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance331.name = "Segment";
ProtoInstance331.DEF = "hanim_l_upperarm";
let fieldValue332 = browser.currentScene.createNode("fieldValue");
fieldValue332.name = "name";
fieldValue332.value = "l_upperarm";
ProtoInstance331.fieldValue = new MFNode();

ProtoInstance331.fieldValue[0] = fieldValue332;

let fieldValue333 = browser.currentScene.createNode("fieldValue");
fieldValue333.name = "children";
let ProtoInstance334 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance334.name = "Site";
ProtoInstance334.DEF = "hanim_l_humeral_lateral_epicondyles";
let fieldValue335 = browser.currentScene.createNode("fieldValue");
fieldValue335.name = "name";
fieldValue335.value = "l_humeral_lateral_epicondyles";
ProtoInstance334.fieldValue = new MFNode();

ProtoInstance334.fieldValue[0] = fieldValue335;

let fieldValue336 = browser.currentScene.createNode("fieldValue");
fieldValue336.name = "translation";
fieldValue336.value = "0.2280000001192093 1.1482000350952148 -0.10999999940395355";
ProtoInstance334.fieldValue[1] = fieldValue336;

fieldValue333.children = new MFNode();

fieldValue333.children[0] = ProtoInstance334;

ProtoInstance331.fieldValue[1] = fieldValue333;

fieldValue287.children[1] = ProtoInstance331;

ProtoInstance283.fieldValue[3] = fieldValue287;

fieldValue244.children[1] = ProtoInstance283;

let ProtoInstance337 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance337.name = "Joint";
ProtoInstance337.DEF = "hanim_r_shoulder";
let fieldValue338 = browser.currentScene.createNode("fieldValue");
fieldValue338.name = "stiffness";
fieldValue338.value = "1 1 1";
ProtoInstance337.fieldValue = new MFNode();

ProtoInstance337.fieldValue[0] = fieldValue338;

let fieldValue339 = browser.currentScene.createNode("fieldValue");
fieldValue339.name = "name";
fieldValue339.value = "r_shoulder";
ProtoInstance337.fieldValue[1] = fieldValue339;

let fieldValue340 = browser.currentScene.createNode("fieldValue");
fieldValue340.name = "center";
fieldValue340.value = "-0.1906999945640564 1.4407000541687012 -0.032499998807907104";
ProtoInstance337.fieldValue[2] = fieldValue340;

let fieldValue341 = browser.currentScene.createNode("fieldValue");
fieldValue341.name = "children";
let ProtoInstance342 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance342.name = "Joint";
ProtoInstance342.DEF = "hanim_r_elbow";
let fieldValue343 = browser.currentScene.createNode("fieldValue");
fieldValue343.name = "stiffness";
fieldValue343.value = "1 1 1";
ProtoInstance342.fieldValue = new MFNode();

ProtoInstance342.fieldValue[0] = fieldValue343;

let fieldValue344 = browser.currentScene.createNode("fieldValue");
fieldValue344.name = "name";
fieldValue344.value = "r_elbow";
ProtoInstance342.fieldValue[1] = fieldValue344;

let fieldValue345 = browser.currentScene.createNode("fieldValue");
fieldValue345.name = "center";
fieldValue345.value = "-0.1949000060558319 1.138800024986267 -0.06199999898672104";
ProtoInstance342.fieldValue[2] = fieldValue345;

let fieldValue346 = browser.currentScene.createNode("fieldValue");
fieldValue346.name = "children";
let ProtoInstance347 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance347.name = "Joint";
ProtoInstance347.DEF = "hanim_r_radiocarpal";
let fieldValue348 = browser.currentScene.createNode("fieldValue");
fieldValue348.name = "stiffness";
fieldValue348.value = "1 1 1";
ProtoInstance347.fieldValue = new MFNode();

ProtoInstance347.fieldValue[0] = fieldValue348;

let fieldValue349 = browser.currentScene.createNode("fieldValue");
fieldValue349.name = "name";
fieldValue349.value = "r_radiocarpal";
ProtoInstance347.fieldValue[1] = fieldValue349;

let fieldValue350 = browser.currentScene.createNode("fieldValue");
fieldValue350.name = "center";
fieldValue350.value = "-0.19589999318122864 0.8694000244140625 -0.05209999904036522";
ProtoInstance347.fieldValue[2] = fieldValue350;

let fieldValue351 = browser.currentScene.createNode("fieldValue");
fieldValue351.name = "children";
let ProtoInstance352 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance352.name = "Segment";
ProtoInstance352.DEF = "hanim_r_hand";
let fieldValue353 = browser.currentScene.createNode("fieldValue");
fieldValue353.name = "name";
fieldValue353.value = "r_hand";
ProtoInstance352.fieldValue = new MFNode();

ProtoInstance352.fieldValue[0] = fieldValue353;

let fieldValue354 = browser.currentScene.createNode("fieldValue");
fieldValue354.name = "children";
let ProtoInstance355 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance355.name = "Site";
ProtoInstance355.DEF = "hanim_r_hand_tip";
let fieldValue356 = browser.currentScene.createNode("fieldValue");
fieldValue356.name = "name";
fieldValue356.value = "r_hand_tip";
ProtoInstance355.fieldValue = new MFNode();

ProtoInstance355.fieldValue[0] = fieldValue356;

let fieldValue357 = browser.currentScene.createNode("fieldValue");
fieldValue357.name = "translation";
fieldValue357.value = "-0.19689999520778656 0.6758000254631042 -0.04270000010728836";
ProtoInstance355.fieldValue[1] = fieldValue357;

fieldValue354.children = new MFNode();

fieldValue354.children[0] = ProtoInstance355;

let ProtoInstance358 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance358.name = "Site";
ProtoInstance358.DEF = "hanim_r_metacarpal_phalanx_2";
let fieldValue359 = browser.currentScene.createNode("fieldValue");
fieldValue359.name = "name";
fieldValue359.value = "r_metacarpal_phalanx_2";
ProtoInstance358.fieldValue = new MFNode();

ProtoInstance358.fieldValue[0] = fieldValue359;

let fieldValue360 = browser.currentScene.createNode("fieldValue");
fieldValue360.name = "translation";
fieldValue360.value = "-0.19769999384880066 0.8169000148773193 -0.01769999973475933";
ProtoInstance358.fieldValue[1] = fieldValue360;

fieldValue354.children[1] = ProtoInstance358;

let ProtoInstance361 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance361.name = "Site";
ProtoInstance361.DEF = "hanim_r_dactylion";
let fieldValue362 = browser.currentScene.createNode("fieldValue");
fieldValue362.name = "name";
fieldValue362.value = "r_dactylion";
ProtoInstance361.fieldValue = new MFNode();

ProtoInstance361.fieldValue[0] = fieldValue362;

let fieldValue363 = browser.currentScene.createNode("fieldValue");
fieldValue363.name = "translation";
fieldValue363.value = "-0.1941000074148178 0.6772000193595886 -0.04230000078678131";
ProtoInstance361.fieldValue[1] = fieldValue363;

fieldValue354.children[2] = ProtoInstance361;

let ProtoInstance364 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance364.name = "Site";
ProtoInstance364.DEF = "hanim_r_ulnar_styloid";
let fieldValue365 = browser.currentScene.createNode("fieldValue");
fieldValue365.name = "name";
fieldValue365.value = "r_ulnar_styloid";
ProtoInstance364.fieldValue = new MFNode();

ProtoInstance364.fieldValue[0] = fieldValue365;

let fieldValue366 = browser.currentScene.createNode("fieldValue");
fieldValue366.name = "translation";
fieldValue366.value = "-0.21170000731945038 0.8561999797821045 -0.058400001376867294";
ProtoInstance364.fieldValue[1] = fieldValue366;

fieldValue354.children[3] = ProtoInstance364;

let ProtoInstance367 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance367.name = "Site";
ProtoInstance367.DEF = "hanim_r_metacarpal_phalanx_5";
let fieldValue368 = browser.currentScene.createNode("fieldValue");
fieldValue368.name = "name";
fieldValue368.value = "r_metacarpal_phalanx_5";
ProtoInstance367.fieldValue = new MFNode();

ProtoInstance367.fieldValue[0] = fieldValue368;

let fieldValue369 = browser.currentScene.createNode("fieldValue");
fieldValue369.name = "translation";
fieldValue369.value = "-0.19290000200271606 0.7889999747276306 -0.10639999806880951";
ProtoInstance367.fieldValue[1] = fieldValue369;

fieldValue354.children[4] = ProtoInstance367;

ProtoInstance352.fieldValue[1] = fieldValue354;

fieldValue351.children = new MFNode();

fieldValue351.children[0] = ProtoInstance352;

ProtoInstance347.fieldValue[3] = fieldValue351;

fieldValue346.children = new MFNode();

fieldValue346.children[0] = ProtoInstance347;

let ProtoInstance370 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance370.name = "Segment";
ProtoInstance370.DEF = "hanim_r_forearm";
let fieldValue371 = browser.currentScene.createNode("fieldValue");
fieldValue371.name = "name";
fieldValue371.value = "r_forearm";
ProtoInstance370.fieldValue = new MFNode();

ProtoInstance370.fieldValue[0] = fieldValue371;

let fieldValue372 = browser.currentScene.createNode("fieldValue");
fieldValue372.name = "children";
let ProtoInstance373 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance373.name = "Site";
ProtoInstance373.DEF = "hanim_r_radial_styloid";
let fieldValue374 = browser.currentScene.createNode("fieldValue");
fieldValue374.name = "name";
fieldValue374.value = "r_radial_styloid";
ProtoInstance373.fieldValue = new MFNode();

ProtoInstance373.fieldValue[0] = fieldValue374;

let fieldValue375 = browser.currentScene.createNode("fieldValue");
fieldValue375.name = "translation";
fieldValue375.value = "-0.188400000333786 0.8676000237464905 -0.035999998450279236";
ProtoInstance373.fieldValue[1] = fieldValue375;

fieldValue372.children = new MFNode();

fieldValue372.children[0] = ProtoInstance373;

let ProtoInstance376 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance376.name = "Site";
ProtoInstance376.DEF = "hanim_r_olecranon";
let fieldValue377 = browser.currentScene.createNode("fieldValue");
fieldValue377.name = "name";
fieldValue377.value = "r_olecranon";
ProtoInstance376.fieldValue = new MFNode();

ProtoInstance376.fieldValue[0] = fieldValue377;

let fieldValue378 = browser.currentScene.createNode("fieldValue");
fieldValue378.name = "translation";
fieldValue378.value = "-0.1906999945640564 1.1404999494552612 -0.10649999976158142";
ProtoInstance376.fieldValue[1] = fieldValue378;

fieldValue372.children[1] = ProtoInstance376;

let ProtoInstance379 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance379.name = "Site";
ProtoInstance379.DEF = "hanim_r_humeral_medial_epicondyles";
let fieldValue380 = browser.currentScene.createNode("fieldValue");
fieldValue380.name = "name";
fieldValue380.value = "r_humeral_medial_epicondyles";
ProtoInstance379.fieldValue = new MFNode();

ProtoInstance379.fieldValue[0] = fieldValue380;

let fieldValue381 = browser.currentScene.createNode("fieldValue");
fieldValue381.name = "translation";
fieldValue381.value = "-0.1679999977350235 1.1297999620437622 -0.10620000213384628";
ProtoInstance379.fieldValue[1] = fieldValue381;

fieldValue372.children[2] = ProtoInstance379;

let ProtoInstance382 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance382.name = "Site";
ProtoInstance382.DEF = "hanim_r_radiale";
let fieldValue383 = browser.currentScene.createNode("fieldValue");
fieldValue383.name = "name";
fieldValue383.value = "r_radiale";
ProtoInstance382.fieldValue = new MFNode();

ProtoInstance382.fieldValue[0] = fieldValue383;

let fieldValue384 = browser.currentScene.createNode("fieldValue");
fieldValue384.name = "translation";
fieldValue384.value = "-0.21299999952316284 1.1304999589920044 -0.10909999907016754";
ProtoInstance382.fieldValue[1] = fieldValue384;

fieldValue372.children[3] = ProtoInstance382;

ProtoInstance370.fieldValue[1] = fieldValue372;

fieldValue346.children[1] = ProtoInstance370;

ProtoInstance342.fieldValue[3] = fieldValue346;

fieldValue341.children = new MFNode();

fieldValue341.children[0] = ProtoInstance342;

let ProtoInstance385 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance385.name = "Segment";
ProtoInstance385.DEF = "hanim_r_upperarm";
let fieldValue386 = browser.currentScene.createNode("fieldValue");
fieldValue386.name = "name";
fieldValue386.value = "r_upperarm";
ProtoInstance385.fieldValue = new MFNode();

ProtoInstance385.fieldValue[0] = fieldValue386;

let fieldValue387 = browser.currentScene.createNode("fieldValue");
fieldValue387.name = "children";
let ProtoInstance388 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance388.name = "Site";
ProtoInstance388.DEF = "hanim_r_humeral_lateral_epicondyles";
let fieldValue389 = browser.currentScene.createNode("fieldValue");
fieldValue389.name = "name";
fieldValue389.value = "r_humeral_lateral_epicondyles";
ProtoInstance388.fieldValue = new MFNode();

ProtoInstance388.fieldValue[0] = fieldValue389;

let fieldValue390 = browser.currentScene.createNode("fieldValue");
fieldValue390.name = "translation";
fieldValue390.value = "-0.2223999947309494 1.1517000198364258 -0.10329999774694443";
ProtoInstance388.fieldValue[1] = fieldValue390;

fieldValue387.children = new MFNode();

fieldValue387.children[0] = ProtoInstance388;

ProtoInstance385.fieldValue[1] = fieldValue387;

fieldValue341.children[1] = ProtoInstance385;

ProtoInstance337.fieldValue[3] = fieldValue341;

fieldValue244.children[2] = ProtoInstance337;

let ProtoInstance391 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance391.name = "Segment";
ProtoInstance391.DEF = "hanim_l5";
let fieldValue392 = browser.currentScene.createNode("fieldValue");
fieldValue392.name = "name";
fieldValue392.value = "l5";
ProtoInstance391.fieldValue = new MFNode();

ProtoInstance391.fieldValue[0] = fieldValue392;

let fieldValue393 = browser.currentScene.createNode("fieldValue");
fieldValue393.name = "children";
let ProtoInstance394 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance394.name = "Site";
ProtoInstance394.DEF = "hanim_r_clavicale";
let fieldValue395 = browser.currentScene.createNode("fieldValue");
fieldValue395.name = "name";
fieldValue395.value = "r_clavicale";
ProtoInstance394.fieldValue = new MFNode();

ProtoInstance394.fieldValue[0] = fieldValue395;

let fieldValue396 = browser.currentScene.createNode("fieldValue");
fieldValue396.name = "translation";
fieldValue396.value = "-0.011500000022351742 1.4943000078201294 0.03999999910593033";
ProtoInstance394.fieldValue[1] = fieldValue396;

fieldValue393.children = new MFNode();

fieldValue393.children[0] = ProtoInstance394;

let ProtoInstance397 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance397.name = "Site";
ProtoInstance397.DEF = "hanim_suprasternale";
let fieldValue398 = browser.currentScene.createNode("fieldValue");
fieldValue398.name = "name";
fieldValue398.value = "suprasternale";
ProtoInstance397.fieldValue = new MFNode();

ProtoInstance397.fieldValue[0] = fieldValue398;

let fieldValue399 = browser.currentScene.createNode("fieldValue");
fieldValue399.name = "translation";
fieldValue399.value = "0.00839999970048666 1.4714000225067139 0.05510000139474869";
ProtoInstance397.fieldValue[1] = fieldValue399;

fieldValue393.children[1] = ProtoInstance397;

let ProtoInstance400 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance400.name = "Site";
ProtoInstance400.DEF = "hanim_l_clavicale";
let fieldValue401 = browser.currentScene.createNode("fieldValue");
fieldValue401.name = "name";
fieldValue401.value = "l_clavicale";
ProtoInstance400.fieldValue = new MFNode();

ProtoInstance400.fieldValue[0] = fieldValue401;

let fieldValue402 = browser.currentScene.createNode("fieldValue");
fieldValue402.name = "translation";
fieldValue402.value = "0.02710000053048134 1.4943000078201294 0.039400000125169754";
ProtoInstance400.fieldValue[1] = fieldValue402;

fieldValue393.children[2] = ProtoInstance400;

let ProtoInstance403 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance403.name = "Site";
ProtoInstance403.DEF = "hanim_r_thelion";
let fieldValue404 = browser.currentScene.createNode("fieldValue");
fieldValue404.name = "name";
fieldValue404.value = "r_thelion";
ProtoInstance403.fieldValue = new MFNode();

ProtoInstance403.fieldValue[0] = fieldValue404;

let fieldValue405 = browser.currentScene.createNode("fieldValue");
fieldValue405.name = "translation";
fieldValue405.value = "-0.07360000163316727 1.3385000228881836 0.1216999962925911";
ProtoInstance403.fieldValue[1] = fieldValue405;

fieldValue393.children[3] = ProtoInstance403;

let ProtoInstance406 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance406.name = "Site";
ProtoInstance406.DEF = "hanim_l_thelion";
let fieldValue407 = browser.currentScene.createNode("fieldValue");
fieldValue407.name = "name";
fieldValue407.value = "l_thelion";
ProtoInstance406.fieldValue = new MFNode();

ProtoInstance406.fieldValue[0] = fieldValue407;

let fieldValue408 = browser.currentScene.createNode("fieldValue");
fieldValue408.name = "translation";
fieldValue408.value = "0.09179999679327011 1.3381999731063843 0.11919999867677689";
ProtoInstance406.fieldValue[1] = fieldValue408;

fieldValue393.children[4] = ProtoInstance406;

let ProtoInstance409 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance409.name = "Site";
ProtoInstance409.DEF = "hanim_substernale";
let fieldValue410 = browser.currentScene.createNode("fieldValue");
fieldValue410.name = "name";
fieldValue410.value = "substernale";
ProtoInstance409.fieldValue = new MFNode();

ProtoInstance409.fieldValue[0] = fieldValue410;

let fieldValue411 = browser.currentScene.createNode("fieldValue");
fieldValue411.name = "translation";
fieldValue411.value = "0.008500000461935997 1.2994999885559082 0.11469999700784683";
ProtoInstance409.fieldValue[1] = fieldValue411;

fieldValue393.children[5] = ProtoInstance409;

let ProtoInstance412 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance412.name = "Site";
ProtoInstance412.DEF = "hanim_r_rib10";
let fieldValue413 = browser.currentScene.createNode("fieldValue");
fieldValue413.name = "name";
fieldValue413.value = "r_rib10";
ProtoInstance412.fieldValue = new MFNode();

ProtoInstance412.fieldValue[0] = fieldValue413;

let fieldValue414 = browser.currentScene.createNode("fieldValue");
fieldValue414.name = "translation";
fieldValue414.value = "-0.07109999656677246 1.194100022315979 0.10159999877214432";
ProtoInstance412.fieldValue[1] = fieldValue414;

fieldValue393.children[6] = ProtoInstance412;

let ProtoInstance415 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance415.name = "Site";
ProtoInstance415.DEF = "hanim_l_rib10";
let fieldValue416 = browser.currentScene.createNode("fieldValue");
fieldValue416.name = "name";
fieldValue416.value = "l_rib10";
ProtoInstance415.fieldValue = new MFNode();

ProtoInstance415.fieldValue[0] = fieldValue416;

let fieldValue417 = browser.currentScene.createNode("fieldValue");
fieldValue417.name = "translation";
fieldValue417.value = "0.08709999918937683 1.1924999952316284 0.09920000284910202";
ProtoInstance415.fieldValue[1] = fieldValue417;

fieldValue393.children[7] = ProtoInstance415;

let ProtoInstance418 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance418.name = "Site";
ProtoInstance418.DEF = "hanim_cervicale";
let fieldValue419 = browser.currentScene.createNode("fieldValue");
fieldValue419.name = "name";
fieldValue419.value = "cervicale";
ProtoInstance418.fieldValue = new MFNode();

ProtoInstance418.fieldValue[0] = fieldValue419;

let fieldValue420 = browser.currentScene.createNode("fieldValue");
fieldValue420.name = "translation";
fieldValue420.value = "0.006399999838322401 1.5199999809265137 -0.08150000125169754";
ProtoInstance418.fieldValue[1] = fieldValue420;

fieldValue393.children[8] = ProtoInstance418;

let ProtoInstance421 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance421.name = "Site";
ProtoInstance421.DEF = "hanim_spine_2_lower_back";
let fieldValue422 = browser.currentScene.createNode("fieldValue");
fieldValue422.name = "name";
fieldValue422.value = "spine_2_lower_back";
ProtoInstance421.fieldValue = new MFNode();

ProtoInstance421.fieldValue[0] = fieldValue422;

let fieldValue423 = browser.currentScene.createNode("fieldValue");
fieldValue423.name = "translation";
fieldValue423.value = "0.004900000058114529 1.1907999515533447 -0.11129999905824661";
ProtoInstance421.fieldValue[1] = fieldValue423;

fieldValue393.children[9] = ProtoInstance421;

let ProtoInstance424 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance424.name = "Site";
ProtoInstance424.DEF = "hanim_waist_preferred_posterior";
let fieldValue425 = browser.currentScene.createNode("fieldValue");
fieldValue425.name = "name";
fieldValue425.value = "waist_preferred_posterior";
ProtoInstance424.fieldValue = new MFNode();

ProtoInstance424.fieldValue[0] = fieldValue425;

let fieldValue426 = browser.currentScene.createNode("fieldValue");
fieldValue426.name = "translation";
fieldValue426.value = "0.28999999165534973 1.0915000438690186 -0.10909999907016754";
ProtoInstance424.fieldValue[1] = fieldValue426;

fieldValue393.children[10] = ProtoInstance424;

let ProtoInstance427 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance427.name = "Site";
ProtoInstance427.DEF = "hanim_r_acromion";
let fieldValue428 = browser.currentScene.createNode("fieldValue");
fieldValue428.name = "name";
fieldValue428.value = "r_acromion";
ProtoInstance427.fieldValue = new MFNode();

ProtoInstance427.fieldValue[0] = fieldValue428;

let fieldValue429 = browser.currentScene.createNode("fieldValue");
fieldValue429.name = "translation";
fieldValue429.value = "-0.19050000607967377 1.479099988937378 -0.04309999942779541";
ProtoInstance427.fieldValue[1] = fieldValue429;

fieldValue393.children[11] = ProtoInstance427;

let ProtoInstance430 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance430.name = "Site";
ProtoInstance430.DEF = "hanim_r_axilla_proximal";
let fieldValue431 = browser.currentScene.createNode("fieldValue");
fieldValue431.name = "name";
fieldValue431.value = "r_axilla_proximal";
ProtoInstance430.fieldValue = new MFNode();

ProtoInstance430.fieldValue[0] = fieldValue431;

let fieldValue432 = browser.currentScene.createNode("fieldValue");
fieldValue432.name = "translation";
fieldValue432.value = "-0.16259999573230743 1.4071999788284302 -0.003100000089034438";
ProtoInstance430.fieldValue[1] = fieldValue432;

fieldValue393.children[12] = ProtoInstance430;

let ProtoInstance433 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance433.name = "Site";
ProtoInstance433.DEF = "hanim_r_axilla_distal";
let fieldValue434 = browser.currentScene.createNode("fieldValue");
fieldValue434.name = "name";
fieldValue434.value = "r_axilla_distal";
ProtoInstance433.fieldValue = new MFNode();

ProtoInstance433.fieldValue[0] = fieldValue434;

let fieldValue435 = browser.currentScene.createNode("fieldValue");
fieldValue435.name = "translation";
fieldValue435.value = "-0.16030000150203705 1.4098000526428223 -0.08259999752044678";
ProtoInstance433.fieldValue[1] = fieldValue435;

fieldValue393.children[13] = ProtoInstance433;

let ProtoInstance436 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance436.name = "Site";
ProtoInstance436.DEF = "hanim_l_acromion";
let fieldValue437 = browser.currentScene.createNode("fieldValue");
fieldValue437.name = "name";
fieldValue437.value = "l_acromion";
ProtoInstance436.fieldValue = new MFNode();

ProtoInstance436.fieldValue[0] = fieldValue437;

let fieldValue438 = browser.currentScene.createNode("fieldValue");
fieldValue438.name = "translation";
fieldValue438.value = "0.20319999754428864 1.4759999513626099 -0.04899999871850014";
ProtoInstance436.fieldValue[1] = fieldValue438;

fieldValue393.children[14] = ProtoInstance436;

let ProtoInstance439 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance439.name = "Site";
ProtoInstance439.DEF = "hanim_l_axilla_proximal";
let fieldValue440 = browser.currentScene.createNode("fieldValue");
fieldValue440.name = "name";
fieldValue440.value = "l_axilla_proximal";
ProtoInstance439.fieldValue = new MFNode();

ProtoInstance439.fieldValue[0] = fieldValue440;

let fieldValue441 = browser.currentScene.createNode("fieldValue");
fieldValue441.name = "translation";
fieldValue441.value = "0.1776999980211258 1.406499981880188 -0.007499999832361937";
ProtoInstance439.fieldValue[1] = fieldValue441;

fieldValue393.children[15] = ProtoInstance439;

let ProtoInstance442 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance442.name = "Site";
ProtoInstance442.DEF = "hanim_l_axilla_distal";
let fieldValue443 = browser.currentScene.createNode("fieldValue");
fieldValue443.name = "name";
fieldValue443.value = "l_axilla_distal";
ProtoInstance442.fieldValue = new MFNode();

ProtoInstance442.fieldValue[0] = fieldValue443;

let fieldValue444 = browser.currentScene.createNode("fieldValue");
fieldValue444.name = "translation";
fieldValue444.value = "0.17059999704360962 1.4071999788284302 -0.08749999850988388";
ProtoInstance442.fieldValue[1] = fieldValue444;

fieldValue393.children[16] = ProtoInstance442;

let ProtoInstance445 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance445.name = "Site";
ProtoInstance445.DEF = "hanim_r_neck_base";
let fieldValue446 = browser.currentScene.createNode("fieldValue");
fieldValue446.name = "name";
fieldValue446.value = "r_neck_base";
ProtoInstance445.fieldValue = new MFNode();

ProtoInstance445.fieldValue[0] = fieldValue446;

let fieldValue447 = browser.currentScene.createNode("fieldValue");
fieldValue447.name = "translation";
fieldValue447.value = "-0.04190000146627426 1.5148999691009521 -0.02199999988079071";
ProtoInstance445.fieldValue[1] = fieldValue447;

fieldValue393.children[17] = ProtoInstance445;

let ProtoInstance448 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance448.name = "Site";
ProtoInstance448.DEF = "hanim_l_neck_base";
let fieldValue449 = browser.currentScene.createNode("fieldValue");
fieldValue449.name = "name";
fieldValue449.value = "l_neck_base";
ProtoInstance448.fieldValue = new MFNode();

ProtoInstance448.fieldValue[0] = fieldValue449;

let fieldValue450 = browser.currentScene.createNode("fieldValue");
fieldValue450.name = "translation";
fieldValue450.value = "0.06459999829530716 1.5140999555587769 -0.03799999877810478";
ProtoInstance448.fieldValue[1] = fieldValue450;

fieldValue393.children[18] = ProtoInstance448;

let ProtoInstance451 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance451.name = "Site";
ProtoInstance451.DEF = "hanim_navel";
let fieldValue452 = browser.currentScene.createNode("fieldValue");
fieldValue452.name = "name";
fieldValue452.value = "navel";
ProtoInstance451.fieldValue = new MFNode();

ProtoInstance451.fieldValue[0] = fieldValue452;

let fieldValue453 = browser.currentScene.createNode("fieldValue");
fieldValue453.name = "translation";
fieldValue453.value = "0.006899999920278788 1.09660005569458 0.10170000046491623";
ProtoInstance451.fieldValue[1] = fieldValue453;

fieldValue393.children[19] = ProtoInstance451;

ProtoInstance391.fieldValue[1] = fieldValue393;

fieldValue244.children[3] = ProtoInstance391;

ProtoInstance240.fieldValue[3] = fieldValue244;

fieldValue104.children[1] = ProtoInstance240;

let ProtoInstance454 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance454.name = "Segment";
ProtoInstance454.DEF = "hanim_sacrum";
let fieldValue455 = browser.currentScene.createNode("fieldValue");
fieldValue455.name = "name";
fieldValue455.value = "sacrum";
ProtoInstance454.fieldValue = new MFNode();

ProtoInstance454.fieldValue[0] = fieldValue455;

let fieldValue456 = browser.currentScene.createNode("fieldValue");
fieldValue456.name = "children";
let ProtoInstance457 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance457.name = "Site";
ProtoInstance457.DEF = "hanim_r_asis";
let fieldValue458 = browser.currentScene.createNode("fieldValue");
fieldValue458.name = "name";
fieldValue458.value = "r_asis";
ProtoInstance457.fieldValue = new MFNode();

ProtoInstance457.fieldValue[0] = fieldValue458;

let fieldValue459 = browser.currentScene.createNode("fieldValue");
fieldValue459.name = "translation";
fieldValue459.value = "-0.08869999647140503 1.0020999908447266 0.1111999973654747";
ProtoInstance457.fieldValue[1] = fieldValue459;

fieldValue456.children = new MFNode();

fieldValue456.children[0] = ProtoInstance457;

let ProtoInstance460 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance460.name = "Site";
ProtoInstance460.DEF = "hanim_l_asis";
let fieldValue461 = browser.currentScene.createNode("fieldValue");
fieldValue461.name = "name";
fieldValue461.value = "l_asis";
ProtoInstance460.fieldValue = new MFNode();

ProtoInstance460.fieldValue[0] = fieldValue461;

let fieldValue462 = browser.currentScene.createNode("fieldValue");
fieldValue462.name = "translation";
fieldValue462.value = "0.0925000011920929 0.9983000159263611 0.10520000010728836";
ProtoInstance460.fieldValue[1] = fieldValue462;

fieldValue456.children[1] = ProtoInstance460;

let ProtoInstance463 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance463.name = "Site";
ProtoInstance463.DEF = "hanim_r_iliocristale";
let fieldValue464 = browser.currentScene.createNode("fieldValue");
fieldValue464.name = "name";
fieldValue464.value = "r_iliocristale";
ProtoInstance463.fieldValue = new MFNode();

ProtoInstance463.fieldValue[0] = fieldValue464;

let fieldValue465 = browser.currentScene.createNode("fieldValue");
fieldValue465.name = "translation";
fieldValue465.value = "-0.1525000035762787 1.0628000497817993 0.0035000001080334187";
ProtoInstance463.fieldValue[1] = fieldValue465;

fieldValue456.children[2] = ProtoInstance463;

let ProtoInstance466 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance466.name = "Site";
ProtoInstance466.DEF = "hanim_r_trochanterion";
let fieldValue467 = browser.currentScene.createNode("fieldValue");
fieldValue467.name = "name";
fieldValue467.value = "r_trochanterion";
ProtoInstance466.fieldValue = new MFNode();

ProtoInstance466.fieldValue[0] = fieldValue467;

let fieldValue468 = browser.currentScene.createNode("fieldValue");
fieldValue468.name = "translation";
fieldValue468.value = "-0.1688999980688095 0.8418999910354614 0.03519999980926514";
ProtoInstance466.fieldValue[1] = fieldValue468;

fieldValue456.children[3] = ProtoInstance466;

let ProtoInstance469 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance469.name = "Site";
ProtoInstance469.DEF = "hanim_l_iliocristale";
let fieldValue470 = browser.currentScene.createNode("fieldValue");
fieldValue470.name = "name";
fieldValue470.value = "l_iliocristale";
ProtoInstance469.fieldValue = new MFNode();

ProtoInstance469.fieldValue[0] = fieldValue470;

let fieldValue471 = browser.currentScene.createNode("fieldValue");
fieldValue471.name = "translation";
fieldValue471.value = "0.16120000183582306 1.0536999702453613 0.0007999999797903001";
ProtoInstance469.fieldValue[1] = fieldValue471;

fieldValue456.children[4] = ProtoInstance469;

let ProtoInstance472 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance472.name = "Site";
ProtoInstance472.DEF = "hanim_l_trochanterion";
let fieldValue473 = browser.currentScene.createNode("fieldValue");
fieldValue473.name = "name";
fieldValue473.value = "l_trochanterion";
ProtoInstance472.fieldValue = new MFNode();

ProtoInstance472.fieldValue[0] = fieldValue473;

let fieldValue474 = browser.currentScene.createNode("fieldValue");
fieldValue474.name = "translation";
fieldValue474.value = "0.16769999265670776 0.8335999846458435 0.030300000682473183";
ProtoInstance472.fieldValue[1] = fieldValue474;

fieldValue456.children[5] = ProtoInstance472;

let ProtoInstance475 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance475.name = "Site";
ProtoInstance475.DEF = "hanim_r_psis";
let fieldValue476 = browser.currentScene.createNode("fieldValue");
fieldValue476.name = "name";
fieldValue476.value = "r_psis";
ProtoInstance475.fieldValue = new MFNode();

ProtoInstance475.fieldValue[0] = fieldValue476;

let fieldValue477 = browser.currentScene.createNode("fieldValue");
fieldValue477.name = "translation";
fieldValue477.value = "-0.07159999758005142 1.0190000534057617 -0.11379999667406082";
ProtoInstance475.fieldValue[1] = fieldValue477;

fieldValue456.children[6] = ProtoInstance475;

let ProtoInstance478 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance478.name = "Site";
ProtoInstance478.DEF = "hanim_l_psis";
let fieldValue479 = browser.currentScene.createNode("fieldValue");
fieldValue479.name = "name";
fieldValue479.value = "l_psis";
ProtoInstance478.fieldValue = new MFNode();

ProtoInstance478.fieldValue[0] = fieldValue479;

let fieldValue480 = browser.currentScene.createNode("fieldValue");
fieldValue480.name = "translation";
fieldValue480.value = "0.07739999890327454 1.0190000534057617 -0.11509999632835388";
ProtoInstance478.fieldValue[1] = fieldValue480;

fieldValue456.children[7] = ProtoInstance478;

let ProtoInstance481 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance481.name = "Site";
ProtoInstance481.DEF = "hanim_crotch";
let fieldValue482 = browser.currentScene.createNode("fieldValue");
fieldValue482.name = "name";
fieldValue482.value = "crotch";
ProtoInstance481.fieldValue = new MFNode();

ProtoInstance481.fieldValue[0] = fieldValue482;

let fieldValue483 = browser.currentScene.createNode("fieldValue");
fieldValue483.name = "translation";
fieldValue483.value = "0.0034000000450760126 0.8266000151634216 0.025699999183416367";
ProtoInstance481.fieldValue[1] = fieldValue483;

fieldValue456.children[8] = ProtoInstance481;

ProtoInstance454.fieldValue[1] = fieldValue456;

fieldValue104.children[2] = ProtoInstance454;

ProtoInstance100.fieldValue[3] = fieldValue104;

fieldValue99.children = new MFNode();

fieldValue99.children[0] = ProtoInstance100;

ProtoInstance98.fieldValue = new MFNode();

ProtoInstance98.fieldValue[0] = fieldValue99;

let fieldValue484 = browser.currentScene.createNode("fieldValue");
fieldValue484.name = "joints";
let ProtoInstance485 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance485.name = "Joint";
ProtoInstance485.DEF = "hanim_humanoid_root";
let fieldValue486 = browser.currentScene.createNode("fieldValue");
fieldValue486.name = "stiffness";
fieldValue486.value = "1 1 1";
ProtoInstance485.fieldValue = new MFNode();

ProtoInstance485.fieldValue[0] = fieldValue486;

let fieldValue487 = browser.currentScene.createNode("fieldValue");
fieldValue487.name = "name";
fieldValue487.value = "humanoid_root";
ProtoInstance485.fieldValue[1] = fieldValue487;

let fieldValue488 = browser.currentScene.createNode("fieldValue");
fieldValue488.name = "center";
fieldValue488.value = "0 0.8240000009536743 0.027699999511241913";
ProtoInstance485.fieldValue[2] = fieldValue488;

let fieldValue489 = browser.currentScene.createNode("fieldValue");
fieldValue489.name = "children";
let ProtoInstance490 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance490.name = "Joint";
ProtoInstance490.DEF = "hanim_sacroiliac";
let fieldValue491 = browser.currentScene.createNode("fieldValue");
fieldValue491.name = "stiffness";
fieldValue491.value = "1 1 1";
ProtoInstance490.fieldValue = new MFNode();

ProtoInstance490.fieldValue[0] = fieldValue491;

let fieldValue492 = browser.currentScene.createNode("fieldValue");
fieldValue492.name = "name";
fieldValue492.value = "sacroiliac";
ProtoInstance490.fieldValue[1] = fieldValue492;

let fieldValue493 = browser.currentScene.createNode("fieldValue");
fieldValue493.name = "center";
fieldValue493.value = "0 0.914900004863739 0.0015999999595806003";
ProtoInstance490.fieldValue[2] = fieldValue493;

let fieldValue494 = browser.currentScene.createNode("fieldValue");
fieldValue494.name = "children";
let ProtoInstance495 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance495.name = "Joint";
ProtoInstance495.DEF = "hanim_l_hip";
let fieldValue496 = browser.currentScene.createNode("fieldValue");
fieldValue496.name = "stiffness";
fieldValue496.value = "1 1 1";
ProtoInstance495.fieldValue = new MFNode();

ProtoInstance495.fieldValue[0] = fieldValue496;

let fieldValue497 = browser.currentScene.createNode("fieldValue");
fieldValue497.name = "name";
fieldValue497.value = "l_hip";
ProtoInstance495.fieldValue[1] = fieldValue497;

let fieldValue498 = browser.currentScene.createNode("fieldValue");
fieldValue498.name = "center";
fieldValue498.value = "0.09610000252723694 0.9124000072479248 -0.00009999999747378752";
ProtoInstance495.fieldValue[2] = fieldValue498;

let fieldValue499 = browser.currentScene.createNode("fieldValue");
fieldValue499.name = "children";
let ProtoInstance500 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance500.name = "Joint";
ProtoInstance500.DEF = "hanim_l_knee";
let fieldValue501 = browser.currentScene.createNode("fieldValue");
fieldValue501.name = "stiffness";
fieldValue501.value = "1 1 1";
ProtoInstance500.fieldValue = new MFNode();

ProtoInstance500.fieldValue[0] = fieldValue501;

let fieldValue502 = browser.currentScene.createNode("fieldValue");
fieldValue502.name = "name";
fieldValue502.value = "l_knee";
ProtoInstance500.fieldValue[1] = fieldValue502;

let fieldValue503 = browser.currentScene.createNode("fieldValue");
fieldValue503.name = "center";
fieldValue503.value = "0.10400000214576721 0.48669999837875366 0.030799999833106995";
ProtoInstance500.fieldValue[2] = fieldValue503;

let fieldValue504 = browser.currentScene.createNode("fieldValue");
fieldValue504.name = "children";
let ProtoInstance505 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance505.name = "Joint";
ProtoInstance505.DEF = "hanim_l_talocrural";
let fieldValue506 = browser.currentScene.createNode("fieldValue");
fieldValue506.name = "stiffness";
fieldValue506.value = "1 1 1";
ProtoInstance505.fieldValue = new MFNode();

ProtoInstance505.fieldValue[0] = fieldValue506;

let fieldValue507 = browser.currentScene.createNode("fieldValue");
fieldValue507.name = "name";
fieldValue507.value = "l_talocrural";
ProtoInstance505.fieldValue[1] = fieldValue507;

let fieldValue508 = browser.currentScene.createNode("fieldValue");
fieldValue508.name = "center";
fieldValue508.value = "0.11010000109672546 0.06560000032186508 -0.07360000163316727";
ProtoInstance505.fieldValue[2] = fieldValue508;

let fieldValue509 = browser.currentScene.createNode("fieldValue");
fieldValue509.name = "children";
let ProtoInstance510 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance510.name = "Joint";
ProtoInstance510.DEF = "hanim_l_metatarsophalangeal_";
let fieldValue511 = browser.currentScene.createNode("fieldValue");
fieldValue511.name = "stiffness";
fieldValue511.value = "1 1 1";
ProtoInstance510.fieldValue = new MFNode();

ProtoInstance510.fieldValue[0] = fieldValue511;

let fieldValue512 = browser.currentScene.createNode("fieldValue");
fieldValue512.name = "name";
fieldValue512.value = "l_metatarsophalangeal_";
ProtoInstance510.fieldValue[1] = fieldValue512;

let fieldValue513 = browser.currentScene.createNode("fieldValue");
fieldValue513.name = "center";
fieldValue513.value = "0.10859999805688858 0.00009999999747378752 0.03680000081658363";
ProtoInstance510.fieldValue[2] = fieldValue513;

let fieldValue514 = browser.currentScene.createNode("fieldValue");
fieldValue514.name = "children";
let ProtoInstance515 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance515.name = "Segment";
ProtoInstance515.DEF = "hanim_l_middistal";
let fieldValue516 = browser.currentScene.createNode("fieldValue");
fieldValue516.name = "name";
fieldValue516.value = "l_middistal";
ProtoInstance515.fieldValue = new MFNode();

ProtoInstance515.fieldValue[0] = fieldValue516;

let fieldValue517 = browser.currentScene.createNode("fieldValue");
fieldValue517.name = "children";
let ProtoInstance518 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance518.name = "Site";
ProtoInstance518.DEF = "hanim_l_middistal_tip";
let fieldValue519 = browser.currentScene.createNode("fieldValue");
fieldValue519.name = "name";
fieldValue519.value = "l_middistal_tip";
ProtoInstance518.fieldValue = new MFNode();

ProtoInstance518.fieldValue[0] = fieldValue519;

let fieldValue520 = browser.currentScene.createNode("fieldValue");
fieldValue520.name = "translation";
fieldValue520.value = "0.13539999723434448 0.0015999999595806003 0.147599995136261";
ProtoInstance518.fieldValue[1] = fieldValue520;

fieldValue517.children = new MFNode();

fieldValue517.children[0] = ProtoInstance518;

let ProtoInstance521 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance521.name = "Site";
ProtoInstance521.DEF = "hanim_l_tarsal_interphalangeal_phalanx_5";
let fieldValue522 = browser.currentScene.createNode("fieldValue");
fieldValue522.name = "name";
fieldValue522.value = "l_tarsal_interphalangeal_phalanx_5";
ProtoInstance521.fieldValue = new MFNode();

ProtoInstance521.fieldValue[0] = fieldValue522;

let fieldValue523 = browser.currentScene.createNode("fieldValue");
fieldValue523.name = "translation";
fieldValue523.value = "0.18250000476837158 0.007000000216066837 0.09279999881982803";
ProtoInstance521.fieldValue[1] = fieldValue523;

fieldValue517.children[1] = ProtoInstance521;

let ProtoInstance524 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance524.name = "Site";
ProtoInstance524.DEF = "hanim_l_tarsal_interphalangeal_phalanx_1";
let fieldValue525 = browser.currentScene.createNode("fieldValue");
fieldValue525.name = "name";
fieldValue525.value = "l_tarsal_interphalangeal_phalanx_1";
ProtoInstance524.fieldValue = new MFNode();

ProtoInstance524.fieldValue[0] = fieldValue525;

let fieldValue526 = browser.currentScene.createNode("fieldValue");
fieldValue526.name = "translation";
fieldValue526.value = "0.08160000294446945 0.02319999970495701 0.010599999688565731";
ProtoInstance524.fieldValue[1] = fieldValue526;

fieldValue517.children[2] = ProtoInstance524;

let ProtoInstance527 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance527.name = "Site";
ProtoInstance527.DEF = "hanim_l_tarsal_distal_phalanx_2";
let fieldValue528 = browser.currentScene.createNode("fieldValue");
fieldValue528.name = "name";
fieldValue528.value = "l_tarsal_distal_phalanx_2";
ProtoInstance527.fieldValue = new MFNode();

ProtoInstance527.fieldValue[0] = fieldValue528;

let fieldValue529 = browser.currentScene.createNode("fieldValue");
fieldValue529.name = "translation";
fieldValue529.value = "0.11949999630451202 0.007899999618530273 0.14329999685287476";
ProtoInstance527.fieldValue[1] = fieldValue529;

fieldValue517.children[3] = ProtoInstance527;

ProtoInstance515.fieldValue[1] = fieldValue517;

fieldValue514.children = new MFNode();

fieldValue514.children[0] = ProtoInstance515;

ProtoInstance510.fieldValue[3] = fieldValue514;

fieldValue509.children = new MFNode();

fieldValue509.children[0] = ProtoInstance510;

let ProtoInstance530 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance530.name = "Segment";
ProtoInstance530.DEF = "hanim_l_hindfoot";
let fieldValue531 = browser.currentScene.createNode("fieldValue");
fieldValue531.name = "name";
fieldValue531.value = "l_hindfoot";
ProtoInstance530.fieldValue = new MFNode();

ProtoInstance530.fieldValue[0] = fieldValue531;

let fieldValue532 = browser.currentScene.createNode("fieldValue");
fieldValue532.name = "children";
let ProtoInstance533 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance533.name = "Site";
ProtoInstance533.DEF = "hanim_l_lateral_malleolus";
let fieldValue534 = browser.currentScene.createNode("fieldValue");
fieldValue534.name = "name";
fieldValue534.value = "l_lateral_malleolus";
ProtoInstance533.fieldValue = new MFNode();

ProtoInstance533.fieldValue[0] = fieldValue534;

let fieldValue535 = browser.currentScene.createNode("fieldValue");
fieldValue535.name = "translation";
fieldValue535.value = "0.13079999387264252 0.059700001031160355 -0.10320000350475311";
ProtoInstance533.fieldValue[1] = fieldValue535;

fieldValue532.children = new MFNode();

fieldValue532.children[0] = ProtoInstance533;

let ProtoInstance536 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance536.name = "Site";
ProtoInstance536.DEF = "hanim_l_medial_malleolus";
let fieldValue537 = browser.currentScene.createNode("fieldValue");
fieldValue537.name = "name";
fieldValue537.value = "l_medial_malleolus";
ProtoInstance536.fieldValue = new MFNode();

ProtoInstance536.fieldValue[0] = fieldValue537;

let fieldValue538 = browser.currentScene.createNode("fieldValue");
fieldValue538.name = "translation";
fieldValue538.value = "0.08900000154972076 0.07159999758005142 -0.08810000121593475";
ProtoInstance536.fieldValue[1] = fieldValue538;

fieldValue532.children[1] = ProtoInstance536;

let ProtoInstance539 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance539.name = "Site";
ProtoInstance539.DEF = "hanim_l_sphyrion";
let fieldValue540 = browser.currentScene.createNode("fieldValue");
fieldValue540.name = "name";
fieldValue540.value = "l_sphyrion";
ProtoInstance539.fieldValue = new MFNode();

ProtoInstance539.fieldValue[0] = fieldValue540;

let fieldValue541 = browser.currentScene.createNode("fieldValue");
fieldValue541.name = "translation";
fieldValue541.value = "0.08900000154972076 0.057500001043081284 -0.09430000185966492";
ProtoInstance539.fieldValue[1] = fieldValue541;

fieldValue532.children[2] = ProtoInstance539;

let ProtoInstance542 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance542.name = "Site";
ProtoInstance542.DEF = "hanim_l_calcaneus_posterior";
let fieldValue543 = browser.currentScene.createNode("fieldValue");
fieldValue543.name = "name";
fieldValue543.value = "l_calcaneus_posterior";
ProtoInstance542.fieldValue = new MFNode();

ProtoInstance542.fieldValue[0] = fieldValue543;

let fieldValue544 = browser.currentScene.createNode("fieldValue");
fieldValue544.name = "translation";
fieldValue544.value = "0.09740000218153 0.02590000070631504 -0.11710000038146973";
ProtoInstance542.fieldValue[1] = fieldValue544;

fieldValue532.children[3] = ProtoInstance542;

ProtoInstance530.fieldValue[1] = fieldValue532;

fieldValue509.children[1] = ProtoInstance530;

ProtoInstance505.fieldValue[3] = fieldValue509;

fieldValue504.children = new MFNode();

fieldValue504.children[0] = ProtoInstance505;

let ProtoInstance545 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance545.name = "Segment";
ProtoInstance545.DEF = "hanim_l_calf";
let fieldValue546 = browser.currentScene.createNode("fieldValue");
fieldValue546.name = "name";
fieldValue546.value = "l_calf";
ProtoInstance545.fieldValue = new MFNode();

ProtoInstance545.fieldValue[0] = fieldValue546;

fieldValue504.children[1] = ProtoInstance545;

ProtoInstance500.fieldValue[3] = fieldValue504;

fieldValue499.children = new MFNode();

fieldValue499.children[0] = ProtoInstance500;

let ProtoInstance547 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance547.name = "Segment";
ProtoInstance547.DEF = "hanim_l_thigh";
let fieldValue548 = browser.currentScene.createNode("fieldValue");
fieldValue548.name = "name";
fieldValue548.value = "l_thigh";
ProtoInstance547.fieldValue = new MFNode();

ProtoInstance547.fieldValue[0] = fieldValue548;

let fieldValue549 = browser.currentScene.createNode("fieldValue");
fieldValue549.name = "children";
let ProtoInstance550 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance550.name = "Site";
ProtoInstance550.DEF = "hanim_l_knee_crease";
let fieldValue551 = browser.currentScene.createNode("fieldValue");
fieldValue551.name = "name";
fieldValue551.value = "l_knee_crease";
ProtoInstance550.fieldValue = new MFNode();

ProtoInstance550.fieldValue[0] = fieldValue551;

let fieldValue552 = browser.currentScene.createNode("fieldValue");
fieldValue552.name = "translation";
fieldValue552.value = "0.09929999709129333 0.48809999227523804 -0.030899999663233757";
ProtoInstance550.fieldValue[1] = fieldValue552;

fieldValue549.children = new MFNode();

fieldValue549.children[0] = ProtoInstance550;

let ProtoInstance553 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance553.name = "Site";
ProtoInstance553.DEF = "hanim_l_femoral_lateral_epicondyles";
let fieldValue554 = browser.currentScene.createNode("fieldValue");
fieldValue554.name = "name";
fieldValue554.value = "l_femoral_lateral_epicondyles";
ProtoInstance553.fieldValue = new MFNode();

ProtoInstance553.fieldValue[0] = fieldValue554;

let fieldValue555 = browser.currentScene.createNode("fieldValue");
fieldValue555.name = "translation";
fieldValue555.value = "0.1597999930381775 0.4966999888420105 0.02969999983906746";
ProtoInstance553.fieldValue[1] = fieldValue555;

fieldValue549.children[1] = ProtoInstance553;

let ProtoInstance556 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance556.name = "Site";
ProtoInstance556.DEF = "hanim_l_femoral_medial_epicondyles";
let fieldValue557 = browser.currentScene.createNode("fieldValue");
fieldValue557.name = "name";
fieldValue557.value = "l_femoral_lateral_epicondyles";
ProtoInstance556.fieldValue = new MFNode();

ProtoInstance556.fieldValue[0] = fieldValue557;

let fieldValue558 = browser.currentScene.createNode("fieldValue");
fieldValue558.name = "translation";
fieldValue558.value = "0.039799999445676804 0.49459999799728394 0.030300000682473183";
ProtoInstance556.fieldValue[1] = fieldValue558;

fieldValue549.children[2] = ProtoInstance556;

ProtoInstance547.fieldValue[1] = fieldValue549;

fieldValue499.children[1] = ProtoInstance547;

ProtoInstance495.fieldValue[3] = fieldValue499;

fieldValue494.children = new MFNode();

fieldValue494.children[0] = ProtoInstance495;

let ProtoInstance559 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance559.name = "Joint";
ProtoInstance559.DEF = "hanim_r_hip";
let fieldValue560 = browser.currentScene.createNode("fieldValue");
fieldValue560.name = "stiffness";
fieldValue560.value = "1 1 1";
ProtoInstance559.fieldValue = new MFNode();

ProtoInstance559.fieldValue[0] = fieldValue560;

let fieldValue561 = browser.currentScene.createNode("fieldValue");
fieldValue561.name = "name";
fieldValue561.value = "r_hip";
ProtoInstance559.fieldValue[1] = fieldValue561;

let fieldValue562 = browser.currentScene.createNode("fieldValue");
fieldValue562.name = "center";
fieldValue562.value = "-0.0949999988079071 0.9171000123023987 0.002899999963119626";
ProtoInstance559.fieldValue[2] = fieldValue562;

let fieldValue563 = browser.currentScene.createNode("fieldValue");
fieldValue563.name = "children";
let ProtoInstance564 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance564.name = "Joint";
ProtoInstance564.DEF = "hanim_r_knee";
let fieldValue565 = browser.currentScene.createNode("fieldValue");
fieldValue565.name = "stiffness";
fieldValue565.value = "1 1 1";
ProtoInstance564.fieldValue = new MFNode();

ProtoInstance564.fieldValue[0] = fieldValue565;

let fieldValue566 = browser.currentScene.createNode("fieldValue");
fieldValue566.name = "name";
fieldValue566.value = "r_knee";
ProtoInstance564.fieldValue[1] = fieldValue566;

let fieldValue567 = browser.currentScene.createNode("fieldValue");
fieldValue567.name = "center";
fieldValue567.value = "-0.08669999986886978 0.49129998683929443 0.03180000185966492";
ProtoInstance564.fieldValue[2] = fieldValue567;

let fieldValue568 = browser.currentScene.createNode("fieldValue");
fieldValue568.name = "children";
let ProtoInstance569 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance569.name = "Joint";
ProtoInstance569.DEF = "hanim_r_talocrural";
let fieldValue570 = browser.currentScene.createNode("fieldValue");
fieldValue570.name = "stiffness";
fieldValue570.value = "1 1 1";
ProtoInstance569.fieldValue = new MFNode();

ProtoInstance569.fieldValue[0] = fieldValue570;

let fieldValue571 = browser.currentScene.createNode("fieldValue");
fieldValue571.name = "name";
fieldValue571.value = "r_talocrural";
ProtoInstance569.fieldValue[1] = fieldValue571;

let fieldValue572 = browser.currentScene.createNode("fieldValue");
fieldValue572.name = "center";
fieldValue572.value = "-0.08009999990463257 0.07119999825954437 -0.07660000026226044";
ProtoInstance569.fieldValue[2] = fieldValue572;

let fieldValue573 = browser.currentScene.createNode("fieldValue");
fieldValue573.name = "children";
let ProtoInstance574 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance574.name = "Joint";
ProtoInstance574.DEF = "hanim_r_metatarsophalangeal_";
let fieldValue575 = browser.currentScene.createNode("fieldValue");
fieldValue575.name = "stiffness";
fieldValue575.value = "1 1 1";
ProtoInstance574.fieldValue = new MFNode();

ProtoInstance574.fieldValue[0] = fieldValue575;

let fieldValue576 = browser.currentScene.createNode("fieldValue");
fieldValue576.name = "name";
fieldValue576.value = "r_metatarsophalangeal_";
ProtoInstance574.fieldValue[1] = fieldValue576;

let fieldValue577 = browser.currentScene.createNode("fieldValue");
fieldValue577.name = "center";
fieldValue577.value = "-0.08009999990463257 0 0.03680000081658363";
ProtoInstance574.fieldValue[2] = fieldValue577;

let fieldValue578 = browser.currentScene.createNode("fieldValue");
fieldValue578.name = "children";
let ProtoInstance579 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance579.name = "Segment";
ProtoInstance579.DEF = "hanim_r_middistal";
let fieldValue580 = browser.currentScene.createNode("fieldValue");
fieldValue580.name = "name";
fieldValue580.value = "r_middistal";
ProtoInstance579.fieldValue = new MFNode();

ProtoInstance579.fieldValue[0] = fieldValue580;

let fieldValue581 = browser.currentScene.createNode("fieldValue");
fieldValue581.name = "children";
let ProtoInstance582 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance582.name = "Site";
ProtoInstance582.DEF = "hanim_r_middistal_tip";
let fieldValue583 = browser.currentScene.createNode("fieldValue");
fieldValue583.name = "name";
fieldValue583.value = "r_middistal_tip";
ProtoInstance582.fieldValue = new MFNode();

ProtoInstance582.fieldValue[0] = fieldValue583;

let fieldValue584 = browser.currentScene.createNode("fieldValue");
fieldValue584.name = "translation";
fieldValue584.value = "-0.10429999977350235 -0.022700000554323196 0.14499999582767487";
ProtoInstance582.fieldValue[1] = fieldValue584;

fieldValue581.children = new MFNode();

fieldValue581.children[0] = ProtoInstance582;

let ProtoInstance585 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance585.name = "Site";
ProtoInstance585.DEF = "hanim_r_tarsal_interphalangeal_phalanx_5";
let fieldValue586 = browser.currentScene.createNode("fieldValue");
fieldValue586.name = "name";
fieldValue586.value = "r_tarsal_interphalangeal_phalanx_5";
ProtoInstance585.fieldValue = new MFNode();

ProtoInstance585.fieldValue[0] = fieldValue586;

let fieldValue587 = browser.currentScene.createNode("fieldValue");
fieldValue587.name = "translation";
fieldValue587.value = "-0.15230000019073486 0.016599999740719795 0.08950000256299973";
ProtoInstance585.fieldValue[1] = fieldValue587;

fieldValue581.children[1] = ProtoInstance585;

let ProtoInstance588 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance588.name = "Site";
ProtoInstance588.DEF = "hanim_r_tarsal_interphalangeal_phalanx_1";
let fieldValue589 = browser.currentScene.createNode("fieldValue");
fieldValue589.name = "name";
fieldValue589.value = "r_tarsal_interphalangeal_phalanx_1";
ProtoInstance588.fieldValue = new MFNode();

ProtoInstance588.fieldValue[0] = fieldValue589;

let fieldValue590 = browser.currentScene.createNode("fieldValue");
fieldValue590.name = "translation";
fieldValue590.value = "-0.05209999904036522 0.026000000536441803 0.01269999984651804";
ProtoInstance588.fieldValue[1] = fieldValue590;

fieldValue581.children[2] = ProtoInstance588;

let ProtoInstance591 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance591.name = "Site";
ProtoInstance591.DEF = "hanim_r_tarsal_distal_phalanx_2";
let fieldValue592 = browser.currentScene.createNode("fieldValue");
fieldValue592.name = "name";
fieldValue592.value = "r_tarsal_distal_phalanx_2";
ProtoInstance591.fieldValue = new MFNode();

ProtoInstance591.fieldValue[0] = fieldValue592;

let fieldValue593 = browser.currentScene.createNode("fieldValue");
fieldValue593.name = "translation";
fieldValue593.value = "-0.08829999715089798 0.013399999588727951 0.13830000162124634";
ProtoInstance591.fieldValue[1] = fieldValue593;

fieldValue581.children[3] = ProtoInstance591;

ProtoInstance579.fieldValue[1] = fieldValue581;

fieldValue578.children = new MFNode();

fieldValue578.children[0] = ProtoInstance579;

ProtoInstance574.fieldValue[3] = fieldValue578;

fieldValue573.children = new MFNode();

fieldValue573.children[0] = ProtoInstance574;

let ProtoInstance594 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance594.name = "Segment";
ProtoInstance594.DEF = "hanim_r_hindfoot";
let fieldValue595 = browser.currentScene.createNode("fieldValue");
fieldValue595.name = "name";
fieldValue595.value = "r_hindfoot";
ProtoInstance594.fieldValue = new MFNode();

ProtoInstance594.fieldValue[0] = fieldValue595;

let fieldValue596 = browser.currentScene.createNode("fieldValue");
fieldValue596.name = "children";
let ProtoInstance597 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance597.name = "Site";
ProtoInstance597.DEF = "hanim_r_lateral_malleolus";
let fieldValue598 = browser.currentScene.createNode("fieldValue");
fieldValue598.name = "name";
fieldValue598.value = "r_lateral_malleolus";
ProtoInstance597.fieldValue = new MFNode();

ProtoInstance597.fieldValue[0] = fieldValue598;

let fieldValue599 = browser.currentScene.createNode("fieldValue");
fieldValue599.name = "translation";
fieldValue599.value = "-0.1005999967455864 0.0658000037074089 -0.10750000178813934";
ProtoInstance597.fieldValue[1] = fieldValue599;

fieldValue596.children = new MFNode();

fieldValue596.children[0] = ProtoInstance597;

let ProtoInstance600 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance600.name = "Site";
ProtoInstance600.DEF = "hanim_r_medial_malleolus";
let fieldValue601 = browser.currentScene.createNode("fieldValue");
fieldValue601.name = "name";
fieldValue601.value = "r_medial_malleolus";
ProtoInstance600.fieldValue = new MFNode();

ProtoInstance600.fieldValue[0] = fieldValue601;

let fieldValue602 = browser.currentScene.createNode("fieldValue");
fieldValue602.name = "translation";
fieldValue602.value = "-0.05909999832510948 0.07599999755620956 -0.09279999881982803";
ProtoInstance600.fieldValue[1] = fieldValue602;

fieldValue596.children[1] = ProtoInstance600;

let ProtoInstance603 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance603.name = "Site";
ProtoInstance603.DEF = "hanim_r_sphyrion";
let fieldValue604 = browser.currentScene.createNode("fieldValue");
fieldValue604.name = "name";
fieldValue604.value = "r_sphyrion";
ProtoInstance603.fieldValue = new MFNode();

ProtoInstance603.fieldValue[0] = fieldValue604;

let fieldValue605 = browser.currentScene.createNode("fieldValue");
fieldValue605.name = "translation";
fieldValue605.value = "-0.06030000001192093 0.061000000685453415 -0.10019999742507935";
ProtoInstance603.fieldValue[1] = fieldValue605;

fieldValue596.children[2] = ProtoInstance603;

let ProtoInstance606 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance606.name = "Site";
ProtoInstance606.DEF = "hanim_r_calcaneus_posterior";
let fieldValue607 = browser.currentScene.createNode("fieldValue");
fieldValue607.name = "name";
fieldValue607.value = "r_calcaneus_posterior";
ProtoInstance606.fieldValue = new MFNode();

ProtoInstance606.fieldValue[0] = fieldValue607;

let fieldValue608 = browser.currentScene.createNode("fieldValue");
fieldValue608.name = "translation";
fieldValue608.value = "-0.06920000165700912 0.02969999983906746 -0.12210000306367874";
ProtoInstance606.fieldValue[1] = fieldValue608;

fieldValue596.children[3] = ProtoInstance606;

ProtoInstance594.fieldValue[1] = fieldValue596;

fieldValue573.children[1] = ProtoInstance594;

ProtoInstance569.fieldValue[3] = fieldValue573;

fieldValue568.children = new MFNode();

fieldValue568.children[0] = ProtoInstance569;

let ProtoInstance609 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance609.name = "Segment";
ProtoInstance609.DEF = "hanim_r_calf";
let fieldValue610 = browser.currentScene.createNode("fieldValue");
fieldValue610.name = "name";
fieldValue610.value = "r_calf";
ProtoInstance609.fieldValue = new MFNode();

ProtoInstance609.fieldValue[0] = fieldValue610;

fieldValue568.children[1] = ProtoInstance609;

ProtoInstance564.fieldValue[3] = fieldValue568;

fieldValue563.children = new MFNode();

fieldValue563.children[0] = ProtoInstance564;

let ProtoInstance611 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance611.name = "Segment";
ProtoInstance611.DEF = "hanim_r_thigh";
let fieldValue612 = browser.currentScene.createNode("fieldValue");
fieldValue612.name = "name";
fieldValue612.value = "r_thigh";
ProtoInstance611.fieldValue = new MFNode();

ProtoInstance611.fieldValue[0] = fieldValue612;

let fieldValue613 = browser.currentScene.createNode("fieldValue");
fieldValue613.name = "children";
let ProtoInstance614 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance614.name = "Site";
ProtoInstance614.DEF = "hanim_r_knee_crease";
let fieldValue615 = browser.currentScene.createNode("fieldValue");
fieldValue615.name = "name";
fieldValue615.value = "r_knee_crease";
ProtoInstance614.fieldValue = new MFNode();

ProtoInstance614.fieldValue[0] = fieldValue615;

let fieldValue616 = browser.currentScene.createNode("fieldValue");
fieldValue616.name = "translation";
fieldValue616.value = "-0.08250000327825546 0.49320000410079956 -0.032600000500679016";
ProtoInstance614.fieldValue[1] = fieldValue616;

fieldValue613.children = new MFNode();

fieldValue613.children[0] = ProtoInstance614;

let ProtoInstance617 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance617.name = "Site";
ProtoInstance617.DEF = "hanim_r_femoral_lateral_epicondyles";
let fieldValue618 = browser.currentScene.createNode("fieldValue");
fieldValue618.name = "name";
fieldValue618.value = "r_femoral_lateral_epicondyles";
ProtoInstance617.fieldValue = new MFNode();

ProtoInstance617.fieldValue[0] = fieldValue618;

let fieldValue619 = browser.currentScene.createNode("fieldValue");
fieldValue619.name = "translation";
fieldValue619.value = "-0.1421000063419342 0.4991999864578247 0.03099999949336052";
ProtoInstance617.fieldValue[1] = fieldValue619;

fieldValue613.children[1] = ProtoInstance617;

let ProtoInstance620 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance620.name = "Site";
ProtoInstance620.DEF = "hanim_r_femoral_medial_epicondyles";
let fieldValue621 = browser.currentScene.createNode("fieldValue");
fieldValue621.name = "name";
fieldValue621.value = "r_femoral_lateral_epicondyles";
ProtoInstance620.fieldValue = new MFNode();

ProtoInstance620.fieldValue[0] = fieldValue621;

let fieldValue622 = browser.currentScene.createNode("fieldValue");
fieldValue622.name = "translation";
fieldValue622.value = "-0.022099999710917473 0.5013999938964844 0.02889999933540821";
ProtoInstance620.fieldValue[1] = fieldValue622;

fieldValue613.children[2] = ProtoInstance620;

ProtoInstance611.fieldValue[1] = fieldValue613;

fieldValue563.children[1] = ProtoInstance611;

ProtoInstance559.fieldValue[3] = fieldValue563;

fieldValue494.children[1] = ProtoInstance559;

let ProtoInstance623 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance623.name = "Segment";
ProtoInstance623.DEF = "hanim_pelvis";
let fieldValue624 = browser.currentScene.createNode("fieldValue");
fieldValue624.name = "name";
fieldValue624.value = "pelvis";
ProtoInstance623.fieldValue = new MFNode();

ProtoInstance623.fieldValue[0] = fieldValue624;

fieldValue494.children[2] = ProtoInstance623;

ProtoInstance490.fieldValue[3] = fieldValue494;

fieldValue489.children = new MFNode();

fieldValue489.children[0] = ProtoInstance490;

let ProtoInstance625 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance625.name = "Joint";
ProtoInstance625.DEF = "hanim_vl5";
let fieldValue626 = browser.currentScene.createNode("fieldValue");
fieldValue626.name = "stiffness";
fieldValue626.value = "1 1 1";
ProtoInstance625.fieldValue = new MFNode();

ProtoInstance625.fieldValue[0] = fieldValue626;

let fieldValue627 = browser.currentScene.createNode("fieldValue");
fieldValue627.name = "name";
fieldValue627.value = "vl5";
ProtoInstance625.fieldValue[1] = fieldValue627;

let fieldValue628 = browser.currentScene.createNode("fieldValue");
fieldValue628.name = "center";
fieldValue628.value = "0.00279999990016222 1.0568000078201294 -0.07760000228881836";
ProtoInstance625.fieldValue[2] = fieldValue628;

let fieldValue629 = browser.currentScene.createNode("fieldValue");
fieldValue629.name = "children";
let ProtoInstance630 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance630.name = "Joint";
ProtoInstance630.DEF = "hanim_skullbase";
let fieldValue631 = browser.currentScene.createNode("fieldValue");
fieldValue631.name = "stiffness";
fieldValue631.value = "1 1 1";
ProtoInstance630.fieldValue = new MFNode();

ProtoInstance630.fieldValue[0] = fieldValue631;

let fieldValue632 = browser.currentScene.createNode("fieldValue");
fieldValue632.name = "name";
fieldValue632.value = "skullbase";
ProtoInstance630.fieldValue[1] = fieldValue632;

let fieldValue633 = browser.currentScene.createNode("fieldValue");
fieldValue633.name = "center";
fieldValue633.value = "0.004399999976158142 1.62090003490448 0.023600000888109207";
ProtoInstance630.fieldValue[2] = fieldValue633;

let fieldValue634 = browser.currentScene.createNode("fieldValue");
fieldValue634.name = "children";
let ProtoInstance635 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance635.name = "Segment";
ProtoInstance635.DEF = "hanim_skull";
let fieldValue636 = browser.currentScene.createNode("fieldValue");
fieldValue636.name = "name";
fieldValue636.value = "skull";
ProtoInstance635.fieldValue = new MFNode();

ProtoInstance635.fieldValue[0] = fieldValue636;

let fieldValue637 = browser.currentScene.createNode("fieldValue");
fieldValue637.name = "children";
let ProtoInstance638 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance638.name = "Site";
ProtoInstance638.DEF = "hanim_skull_tip";
let fieldValue639 = browser.currentScene.createNode("fieldValue");
fieldValue639.name = "name";
fieldValue639.value = "skull_tip";
ProtoInstance638.fieldValue = new MFNode();

ProtoInstance638.fieldValue[0] = fieldValue639;

let fieldValue640 = browser.currentScene.createNode("fieldValue");
fieldValue640.name = "translation";
fieldValue640.value = "0.004999999888241291 1.7503999471664429 0.005499999970197678";
ProtoInstance638.fieldValue[1] = fieldValue640;

fieldValue637.children = new MFNode();

fieldValue637.children[0] = ProtoInstance638;

let ProtoInstance641 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance641.name = "Site";
ProtoInstance641.DEF = "hanim_sellion";
let fieldValue642 = browser.currentScene.createNode("fieldValue");
fieldValue642.name = "name";
fieldValue642.value = "sellion";
ProtoInstance641.fieldValue = new MFNode();

ProtoInstance641.fieldValue[0] = fieldValue642;

let fieldValue643 = browser.currentScene.createNode("fieldValue");
fieldValue643.name = "translation";
fieldValue643.value = "0.005799999926239252 1.631600022315979 0.0851999968290329";
ProtoInstance641.fieldValue[1] = fieldValue643;

fieldValue637.children[1] = ProtoInstance641;

let ProtoInstance644 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance644.name = "Site";
ProtoInstance644.DEF = "hanim_r_infraorbitale";
let fieldValue645 = browser.currentScene.createNode("fieldValue");
fieldValue645.name = "name";
fieldValue645.value = "r_infraorbitale";
ProtoInstance644.fieldValue = new MFNode();

ProtoInstance644.fieldValue[0] = fieldValue645;

let fieldValue646 = browser.currentScene.createNode("fieldValue");
fieldValue646.name = "translation";
fieldValue646.value = "-0.02370000071823597 1.6171000003814697 0.07519999891519547";
ProtoInstance644.fieldValue[1] = fieldValue646;

fieldValue637.children[2] = ProtoInstance644;

let ProtoInstance647 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance647.name = "Site";
ProtoInstance647.DEF = "hanim_l_infraorbitale";
let fieldValue648 = browser.currentScene.createNode("fieldValue");
fieldValue648.name = "name";
fieldValue648.value = "l_infraorbitale";
ProtoInstance647.fieldValue = new MFNode();

ProtoInstance647.fieldValue[0] = fieldValue648;

let fieldValue649 = browser.currentScene.createNode("fieldValue");
fieldValue649.name = "translation";
fieldValue649.value = "0.0340999998152256 1.6171000003814697 0.07519999891519547";
ProtoInstance647.fieldValue[1] = fieldValue649;

fieldValue637.children[3] = ProtoInstance647;

let ProtoInstance650 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance650.name = "Site";
ProtoInstance650.DEF = "hanim_supramenton";
let fieldValue651 = browser.currentScene.createNode("fieldValue");
fieldValue651.name = "name";
fieldValue651.value = "supramenton";
ProtoInstance650.fieldValue = new MFNode();

ProtoInstance650.fieldValue[0] = fieldValue651;

let fieldValue652 = browser.currentScene.createNode("fieldValue");
fieldValue652.name = "translation";
fieldValue652.value = "0.006099999882280827 1.5410000085830688 0.08049999922513962";
ProtoInstance650.fieldValue[1] = fieldValue652;

fieldValue637.children[4] = ProtoInstance650;

let ProtoInstance653 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance653.name = "Site";
ProtoInstance653.DEF = "hanim_r_tragion";
let fieldValue654 = browser.currentScene.createNode("fieldValue");
fieldValue654.name = "name";
fieldValue654.value = "r_tragion";
ProtoInstance653.fieldValue = new MFNode();

ProtoInstance653.fieldValue[0] = fieldValue654;

let fieldValue655 = browser.currentScene.createNode("fieldValue");
fieldValue655.name = "translation";
fieldValue655.value = "-0.06459999829530716 1.6346999406814575 0.03020000085234642";
ProtoInstance653.fieldValue[1] = fieldValue655;

fieldValue637.children[5] = ProtoInstance653;

let ProtoInstance656 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance656.name = "Site";
ProtoInstance656.DEF = "hanim_r_gonion";
let fieldValue657 = browser.currentScene.createNode("fieldValue");
fieldValue657.name = "name";
fieldValue657.value = "r_gonion";
ProtoInstance656.fieldValue = new MFNode();

ProtoInstance656.fieldValue[0] = fieldValue657;

let fieldValue658 = browser.currentScene.createNode("fieldValue");
fieldValue658.name = "translation";
fieldValue658.value = "-0.052000001072883606 1.552899956703186 0.034699998795986176";
ProtoInstance656.fieldValue[1] = fieldValue658;

fieldValue637.children[6] = ProtoInstance656;

let ProtoInstance659 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance659.name = "Site";
ProtoInstance659.DEF = "hanim_l_tragion";
let fieldValue660 = browser.currentScene.createNode("fieldValue");
fieldValue660.name = "name";
fieldValue660.value = "l_tragion";
ProtoInstance659.fieldValue = new MFNode();

ProtoInstance659.fieldValue[0] = fieldValue660;

let fieldValue661 = browser.currentScene.createNode("fieldValue");
fieldValue661.name = "translation";
fieldValue661.value = "0.0738999992609024 1.6347999572753906 0.028200000524520874";
ProtoInstance659.fieldValue[1] = fieldValue661;

fieldValue637.children[7] = ProtoInstance659;

let ProtoInstance662 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance662.name = "Site";
ProtoInstance662.DEF = "hanim_l_gonion";
let fieldValue663 = browser.currentScene.createNode("fieldValue");
fieldValue663.name = "name";
fieldValue663.value = "l_gonion";
ProtoInstance662.fieldValue = new MFNode();

ProtoInstance662.fieldValue[0] = fieldValue663;

let fieldValue664 = browser.currentScene.createNode("fieldValue");
fieldValue664.name = "translation";
fieldValue664.value = "0.06310000270605087 1.5529999732971191 0.032999999821186066";
ProtoInstance662.fieldValue[1] = fieldValue664;

fieldValue637.children[8] = ProtoInstance662;

let ProtoInstance665 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance665.name = "Site";
ProtoInstance665.DEF = "hanim_nuchale";
let fieldValue666 = browser.currentScene.createNode("fieldValue");
fieldValue666.name = "name";
fieldValue666.value = "nuchale";
ProtoInstance665.fieldValue = new MFNode();

ProtoInstance665.fieldValue[0] = fieldValue666;

let fieldValue667 = browser.currentScene.createNode("fieldValue");
fieldValue667.name = "translation";
fieldValue667.value = "0.0038999998942017555 1.5972000360488892 -0.07959999889135361";
ProtoInstance665.fieldValue[1] = fieldValue667;

fieldValue637.children[9] = ProtoInstance665;

ProtoInstance635.fieldValue[1] = fieldValue637;

fieldValue634.children = new MFNode();

fieldValue634.children[0] = ProtoInstance635;

ProtoInstance630.fieldValue[3] = fieldValue634;

fieldValue629.children = new MFNode();

fieldValue629.children[0] = ProtoInstance630;

let ProtoInstance668 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance668.name = "Joint";
ProtoInstance668.DEF = "hanim_l_shoulder";
let fieldValue669 = browser.currentScene.createNode("fieldValue");
fieldValue669.name = "stiffness";
fieldValue669.value = "1 1 1";
ProtoInstance668.fieldValue = new MFNode();

ProtoInstance668.fieldValue[0] = fieldValue669;

let fieldValue670 = browser.currentScene.createNode("fieldValue");
fieldValue670.name = "name";
fieldValue670.value = "l_shoulder";
ProtoInstance668.fieldValue[1] = fieldValue670;

let fieldValue671 = browser.currentScene.createNode("fieldValue");
fieldValue671.name = "center";
fieldValue671.value = "0.2029000073671341 1.437600016593933 -0.03869999945163727";
ProtoInstance668.fieldValue[2] = fieldValue671;

let fieldValue672 = browser.currentScene.createNode("fieldValue");
fieldValue672.name = "children";
let ProtoInstance673 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance673.name = "Joint";
ProtoInstance673.DEF = "hanim_l_elbow";
let fieldValue674 = browser.currentScene.createNode("fieldValue");
fieldValue674.name = "stiffness";
fieldValue674.value = "1 1 1";
ProtoInstance673.fieldValue = new MFNode();

ProtoInstance673.fieldValue[0] = fieldValue674;

let fieldValue675 = browser.currentScene.createNode("fieldValue");
fieldValue675.name = "name";
fieldValue675.value = "l_elbow";
ProtoInstance673.fieldValue[1] = fieldValue675;

let fieldValue676 = browser.currentScene.createNode("fieldValue");
fieldValue676.name = "center";
fieldValue676.value = "0.2013999968767166 1.135699987411499 -0.0681999996304512";
ProtoInstance673.fieldValue[2] = fieldValue676;

let fieldValue677 = browser.currentScene.createNode("fieldValue");
fieldValue677.name = "children";
let ProtoInstance678 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance678.name = "Joint";
ProtoInstance678.DEF = "hanim_l_radiocarpal";
let fieldValue679 = browser.currentScene.createNode("fieldValue");
fieldValue679.name = "stiffness";
fieldValue679.value = "1 1 1";
ProtoInstance678.fieldValue = new MFNode();

ProtoInstance678.fieldValue[0] = fieldValue679;

let fieldValue680 = browser.currentScene.createNode("fieldValue");
fieldValue680.name = "name";
fieldValue680.value = "l_radiocarpal";
ProtoInstance678.fieldValue[1] = fieldValue680;

let fieldValue681 = browser.currentScene.createNode("fieldValue");
fieldValue681.name = "center";
fieldValue681.value = "0.19840000569820404 0.8662999868392944 -0.05829999968409538";
ProtoInstance678.fieldValue[2] = fieldValue681;

let fieldValue682 = browser.currentScene.createNode("fieldValue");
fieldValue682.name = "children";
let ProtoInstance683 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance683.name = "Segment";
ProtoInstance683.DEF = "hanim_l_hand";
let fieldValue684 = browser.currentScene.createNode("fieldValue");
fieldValue684.name = "name";
fieldValue684.value = "l_hand";
ProtoInstance683.fieldValue = new MFNode();

ProtoInstance683.fieldValue[0] = fieldValue684;

let fieldValue685 = browser.currentScene.createNode("fieldValue");
fieldValue685.name = "children";
let ProtoInstance686 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance686.name = "Site";
ProtoInstance686.DEF = "hanim_l_hand_tip";
let fieldValue687 = browser.currentScene.createNode("fieldValue");
fieldValue687.name = "name";
fieldValue687.value = "l_hand_tip";
ProtoInstance686.fieldValue = new MFNode();

ProtoInstance686.fieldValue[0] = fieldValue687;

let fieldValue688 = browser.currentScene.createNode("fieldValue");
fieldValue688.name = "translation";
fieldValue688.value = "0.20800000429153442 0.6730999946594238 -0.04910000041127205";
ProtoInstance686.fieldValue[1] = fieldValue688;

fieldValue685.children = new MFNode();

fieldValue685.children[0] = ProtoInstance686;

let ProtoInstance689 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance689.name = "Site";
ProtoInstance689.DEF = "hanim_l_metacarpal_phalanx_2";
let fieldValue690 = browser.currentScene.createNode("fieldValue");
fieldValue690.name = "name";
fieldValue690.value = "l_metacarpal_phalanx_2";
ProtoInstance689.fieldValue = new MFNode();

ProtoInstance689.fieldValue[0] = fieldValue690;

let fieldValue691 = browser.currentScene.createNode("fieldValue");
fieldValue691.name = "translation";
fieldValue691.value = "0.20090000331401825 0.8138999938964844 -0.02370000071823597";
ProtoInstance689.fieldValue[1] = fieldValue691;

fieldValue685.children[1] = ProtoInstance689;

let ProtoInstance692 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance692.name = "Site";
ProtoInstance692.DEF = "hanim_l_dactylion";
let fieldValue693 = browser.currentScene.createNode("fieldValue");
fieldValue693.name = "name";
fieldValue693.value = "l_dactylion";
ProtoInstance692.fieldValue = new MFNode();

ProtoInstance692.fieldValue[0] = fieldValue693;

let fieldValue694 = browser.currentScene.createNode("fieldValue");
fieldValue694.name = "translation";
fieldValue694.value = "0.20559999346733093 0.6743000149726868 -0.04820000007748604";
ProtoInstance692.fieldValue[1] = fieldValue694;

fieldValue685.children[2] = ProtoInstance692;

let ProtoInstance695 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance695.name = "Site";
ProtoInstance695.DEF = "hanim_l_ulnar_styloid";
let fieldValue696 = browser.currentScene.createNode("fieldValue");
fieldValue696.name = "name";
fieldValue696.value = "l_ulnar_styloid";
ProtoInstance695.fieldValue = new MFNode();

ProtoInstance695.fieldValue[0] = fieldValue696;

let fieldValue697 = browser.currentScene.createNode("fieldValue");
fieldValue697.name = "translation";
fieldValue697.value = "-0.2142000049352646 0.8529000282287598 -0.06480000168085098";
ProtoInstance695.fieldValue[1] = fieldValue697;

fieldValue685.children[3] = ProtoInstance695;

let ProtoInstance698 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance698.name = "Site";
ProtoInstance698.DEF = "hanim_l_metacarpal_phalanx_5";
let fieldValue699 = browser.currentScene.createNode("fieldValue");
fieldValue699.name = "name";
fieldValue699.value = "l_metacarpal_phalanx_5";
ProtoInstance698.fieldValue = new MFNode();

ProtoInstance698.fieldValue[0] = fieldValue699;

let fieldValue700 = browser.currentScene.createNode("fieldValue");
fieldValue700.name = "translation";
fieldValue700.value = "0.19290000200271606 0.7860000133514404 -0.11219999939203262";
ProtoInstance698.fieldValue[1] = fieldValue700;

fieldValue685.children[4] = ProtoInstance698;

ProtoInstance683.fieldValue[1] = fieldValue685;

fieldValue682.children = new MFNode();

fieldValue682.children[0] = ProtoInstance683;

ProtoInstance678.fieldValue[3] = fieldValue682;

fieldValue677.children = new MFNode();

fieldValue677.children[0] = ProtoInstance678;

let ProtoInstance701 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance701.name = "Segment";
ProtoInstance701.DEF = "hanim_l_forearm";
let fieldValue702 = browser.currentScene.createNode("fieldValue");
fieldValue702.name = "name";
fieldValue702.value = "l_forearm";
ProtoInstance701.fieldValue = new MFNode();

ProtoInstance701.fieldValue[0] = fieldValue702;

let fieldValue703 = browser.currentScene.createNode("fieldValue");
fieldValue703.name = "children";
let ProtoInstance704 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance704.name = "Site";
ProtoInstance704.DEF = "hanim_l_radial_styloid";
let fieldValue705 = browser.currentScene.createNode("fieldValue");
fieldValue705.name = "name";
fieldValue705.value = "l_radial_styloid";
ProtoInstance704.fieldValue = new MFNode();

ProtoInstance704.fieldValue[0] = fieldValue705;

let fieldValue706 = browser.currentScene.createNode("fieldValue");
fieldValue706.name = "translation";
fieldValue706.value = "0.19009999930858612 0.8644999861717224 -0.04149999842047691";
ProtoInstance704.fieldValue[1] = fieldValue706;

fieldValue703.children = new MFNode();

fieldValue703.children[0] = ProtoInstance704;

let ProtoInstance707 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance707.name = "Site";
ProtoInstance707.DEF = "hanim_l_olecranon";
let fieldValue708 = browser.currentScene.createNode("fieldValue");
fieldValue708.name = "name";
fieldValue708.value = "l_olecranon";
ProtoInstance707.fieldValue = new MFNode();

ProtoInstance707.fieldValue[0] = fieldValue708;

let fieldValue709 = browser.currentScene.createNode("fieldValue");
fieldValue709.name = "translation";
fieldValue709.value = "-0.19619999825954437 1.1375000476837158 -0.11230000108480453";
ProtoInstance707.fieldValue[1] = fieldValue709;

fieldValue703.children[1] = ProtoInstance707;

let ProtoInstance710 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance710.name = "Site";
ProtoInstance710.DEF = "hanim_l_humeral_medial_epicondyles";
let fieldValue711 = browser.currentScene.createNode("fieldValue");
fieldValue711.name = "name";
fieldValue711.value = "l_humeral_medial_epicondyles";
ProtoInstance710.fieldValue = new MFNode();

ProtoInstance710.fieldValue[0] = fieldValue711;

let fieldValue712 = browser.currentScene.createNode("fieldValue");
fieldValue712.name = "translation";
fieldValue712.value = "0.17350000143051147 1.1272000074386597 -0.11129999905824661";
ProtoInstance710.fieldValue[1] = fieldValue712;

fieldValue703.children[2] = ProtoInstance710;

let ProtoInstance713 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance713.name = "Site";
ProtoInstance713.DEF = "hanim_l_radiale";
let fieldValue714 = browser.currentScene.createNode("fieldValue");
fieldValue714.name = "name";
fieldValue714.value = "l_radiale";
ProtoInstance713.fieldValue = new MFNode();

ProtoInstance713.fieldValue[0] = fieldValue714;

let fieldValue715 = browser.currentScene.createNode("fieldValue");
fieldValue715.name = "translation";
fieldValue715.value = "0.21819999814033508 1.1211999654769897 -0.11670000106096268";
ProtoInstance713.fieldValue[1] = fieldValue715;

fieldValue703.children[3] = ProtoInstance713;

ProtoInstance701.fieldValue[1] = fieldValue703;

fieldValue677.children[1] = ProtoInstance701;

ProtoInstance673.fieldValue[3] = fieldValue677;

fieldValue672.children = new MFNode();

fieldValue672.children[0] = ProtoInstance673;

let ProtoInstance716 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance716.name = "Segment";
ProtoInstance716.DEF = "hanim_l_upperarm";
let fieldValue717 = browser.currentScene.createNode("fieldValue");
fieldValue717.name = "name";
fieldValue717.value = "l_upperarm";
ProtoInstance716.fieldValue = new MFNode();

ProtoInstance716.fieldValue[0] = fieldValue717;

let fieldValue718 = browser.currentScene.createNode("fieldValue");
fieldValue718.name = "children";
let ProtoInstance719 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance719.name = "Site";
ProtoInstance719.DEF = "hanim_l_humeral_lateral_epicondyles";
let fieldValue720 = browser.currentScene.createNode("fieldValue");
fieldValue720.name = "name";
fieldValue720.value = "l_humeral_lateral_epicondyles";
ProtoInstance719.fieldValue = new MFNode();

ProtoInstance719.fieldValue[0] = fieldValue720;

let fieldValue721 = browser.currentScene.createNode("fieldValue");
fieldValue721.name = "translation";
fieldValue721.value = "0.2280000001192093 1.1482000350952148 -0.10999999940395355";
ProtoInstance719.fieldValue[1] = fieldValue721;

fieldValue718.children = new MFNode();

fieldValue718.children[0] = ProtoInstance719;

ProtoInstance716.fieldValue[1] = fieldValue718;

fieldValue672.children[1] = ProtoInstance716;

ProtoInstance668.fieldValue[3] = fieldValue672;

fieldValue629.children[1] = ProtoInstance668;

let ProtoInstance722 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance722.name = "Joint";
ProtoInstance722.DEF = "hanim_r_shoulder";
let fieldValue723 = browser.currentScene.createNode("fieldValue");
fieldValue723.name = "stiffness";
fieldValue723.value = "1 1 1";
ProtoInstance722.fieldValue = new MFNode();

ProtoInstance722.fieldValue[0] = fieldValue723;

let fieldValue724 = browser.currentScene.createNode("fieldValue");
fieldValue724.name = "name";
fieldValue724.value = "r_shoulder";
ProtoInstance722.fieldValue[1] = fieldValue724;

let fieldValue725 = browser.currentScene.createNode("fieldValue");
fieldValue725.name = "center";
fieldValue725.value = "-0.1906999945640564 1.4407000541687012 -0.032499998807907104";
ProtoInstance722.fieldValue[2] = fieldValue725;

let fieldValue726 = browser.currentScene.createNode("fieldValue");
fieldValue726.name = "children";
let ProtoInstance727 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance727.name = "Joint";
ProtoInstance727.DEF = "hanim_r_elbow";
let fieldValue728 = browser.currentScene.createNode("fieldValue");
fieldValue728.name = "stiffness";
fieldValue728.value = "1 1 1";
ProtoInstance727.fieldValue = new MFNode();

ProtoInstance727.fieldValue[0] = fieldValue728;

let fieldValue729 = browser.currentScene.createNode("fieldValue");
fieldValue729.name = "name";
fieldValue729.value = "r_elbow";
ProtoInstance727.fieldValue[1] = fieldValue729;

let fieldValue730 = browser.currentScene.createNode("fieldValue");
fieldValue730.name = "center";
fieldValue730.value = "-0.1949000060558319 1.138800024986267 -0.06199999898672104";
ProtoInstance727.fieldValue[2] = fieldValue730;

let fieldValue731 = browser.currentScene.createNode("fieldValue");
fieldValue731.name = "children";
let ProtoInstance732 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance732.name = "Joint";
ProtoInstance732.DEF = "hanim_r_radiocarpal";
let fieldValue733 = browser.currentScene.createNode("fieldValue");
fieldValue733.name = "stiffness";
fieldValue733.value = "1 1 1";
ProtoInstance732.fieldValue = new MFNode();

ProtoInstance732.fieldValue[0] = fieldValue733;

let fieldValue734 = browser.currentScene.createNode("fieldValue");
fieldValue734.name = "name";
fieldValue734.value = "r_radiocarpal";
ProtoInstance732.fieldValue[1] = fieldValue734;

let fieldValue735 = browser.currentScene.createNode("fieldValue");
fieldValue735.name = "center";
fieldValue735.value = "-0.19589999318122864 0.8694000244140625 -0.05209999904036522";
ProtoInstance732.fieldValue[2] = fieldValue735;

let fieldValue736 = browser.currentScene.createNode("fieldValue");
fieldValue736.name = "children";
let ProtoInstance737 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance737.name = "Segment";
ProtoInstance737.DEF = "hanim_r_hand";
let fieldValue738 = browser.currentScene.createNode("fieldValue");
fieldValue738.name = "name";
fieldValue738.value = "r_hand";
ProtoInstance737.fieldValue = new MFNode();

ProtoInstance737.fieldValue[0] = fieldValue738;

let fieldValue739 = browser.currentScene.createNode("fieldValue");
fieldValue739.name = "children";
let ProtoInstance740 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance740.name = "Site";
ProtoInstance740.DEF = "hanim_r_hand_tip";
let fieldValue741 = browser.currentScene.createNode("fieldValue");
fieldValue741.name = "name";
fieldValue741.value = "r_hand_tip";
ProtoInstance740.fieldValue = new MFNode();

ProtoInstance740.fieldValue[0] = fieldValue741;

let fieldValue742 = browser.currentScene.createNode("fieldValue");
fieldValue742.name = "translation";
fieldValue742.value = "-0.19689999520778656 0.6758000254631042 -0.04270000010728836";
ProtoInstance740.fieldValue[1] = fieldValue742;

fieldValue739.children = new MFNode();

fieldValue739.children[0] = ProtoInstance740;

let ProtoInstance743 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance743.name = "Site";
ProtoInstance743.DEF = "hanim_r_metacarpal_phalanx_2";
let fieldValue744 = browser.currentScene.createNode("fieldValue");
fieldValue744.name = "name";
fieldValue744.value = "r_metacarpal_phalanx_2";
ProtoInstance743.fieldValue = new MFNode();

ProtoInstance743.fieldValue[0] = fieldValue744;

let fieldValue745 = browser.currentScene.createNode("fieldValue");
fieldValue745.name = "translation";
fieldValue745.value = "-0.19769999384880066 0.8169000148773193 -0.01769999973475933";
ProtoInstance743.fieldValue[1] = fieldValue745;

fieldValue739.children[1] = ProtoInstance743;

let ProtoInstance746 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance746.name = "Site";
ProtoInstance746.DEF = "hanim_r_dactylion";
let fieldValue747 = browser.currentScene.createNode("fieldValue");
fieldValue747.name = "name";
fieldValue747.value = "r_dactylion";
ProtoInstance746.fieldValue = new MFNode();

ProtoInstance746.fieldValue[0] = fieldValue747;

let fieldValue748 = browser.currentScene.createNode("fieldValue");
fieldValue748.name = "translation";
fieldValue748.value = "-0.1941000074148178 0.6772000193595886 -0.04230000078678131";
ProtoInstance746.fieldValue[1] = fieldValue748;

fieldValue739.children[2] = ProtoInstance746;

let ProtoInstance749 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance749.name = "Site";
ProtoInstance749.DEF = "hanim_r_ulnar_styloid";
let fieldValue750 = browser.currentScene.createNode("fieldValue");
fieldValue750.name = "name";
fieldValue750.value = "r_ulnar_styloid";
ProtoInstance749.fieldValue = new MFNode();

ProtoInstance749.fieldValue[0] = fieldValue750;

let fieldValue751 = browser.currentScene.createNode("fieldValue");
fieldValue751.name = "translation";
fieldValue751.value = "-0.21170000731945038 0.8561999797821045 -0.058400001376867294";
ProtoInstance749.fieldValue[1] = fieldValue751;

fieldValue739.children[3] = ProtoInstance749;

let ProtoInstance752 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance752.name = "Site";
ProtoInstance752.DEF = "hanim_r_metacarpal_phalanx_5";
let fieldValue753 = browser.currentScene.createNode("fieldValue");
fieldValue753.name = "name";
fieldValue753.value = "r_metacarpal_phalanx_5";
ProtoInstance752.fieldValue = new MFNode();

ProtoInstance752.fieldValue[0] = fieldValue753;

let fieldValue754 = browser.currentScene.createNode("fieldValue");
fieldValue754.name = "translation";
fieldValue754.value = "-0.19290000200271606 0.7889999747276306 -0.10639999806880951";
ProtoInstance752.fieldValue[1] = fieldValue754;

fieldValue739.children[4] = ProtoInstance752;

ProtoInstance737.fieldValue[1] = fieldValue739;

fieldValue736.children = new MFNode();

fieldValue736.children[0] = ProtoInstance737;

ProtoInstance732.fieldValue[3] = fieldValue736;

fieldValue731.children = new MFNode();

fieldValue731.children[0] = ProtoInstance732;

let ProtoInstance755 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance755.name = "Segment";
ProtoInstance755.DEF = "hanim_r_forearm";
let fieldValue756 = browser.currentScene.createNode("fieldValue");
fieldValue756.name = "name";
fieldValue756.value = "r_forearm";
ProtoInstance755.fieldValue = new MFNode();

ProtoInstance755.fieldValue[0] = fieldValue756;

let fieldValue757 = browser.currentScene.createNode("fieldValue");
fieldValue757.name = "children";
let ProtoInstance758 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance758.name = "Site";
ProtoInstance758.DEF = "hanim_r_radial_styloid";
let fieldValue759 = browser.currentScene.createNode("fieldValue");
fieldValue759.name = "name";
fieldValue759.value = "r_radial_styloid";
ProtoInstance758.fieldValue = new MFNode();

ProtoInstance758.fieldValue[0] = fieldValue759;

let fieldValue760 = browser.currentScene.createNode("fieldValue");
fieldValue760.name = "translation";
fieldValue760.value = "-0.188400000333786 0.8676000237464905 -0.035999998450279236";
ProtoInstance758.fieldValue[1] = fieldValue760;

fieldValue757.children = new MFNode();

fieldValue757.children[0] = ProtoInstance758;

let ProtoInstance761 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance761.name = "Site";
ProtoInstance761.DEF = "hanim_r_olecranon";
let fieldValue762 = browser.currentScene.createNode("fieldValue");
fieldValue762.name = "name";
fieldValue762.value = "r_olecranon";
ProtoInstance761.fieldValue = new MFNode();

ProtoInstance761.fieldValue[0] = fieldValue762;

let fieldValue763 = browser.currentScene.createNode("fieldValue");
fieldValue763.name = "translation";
fieldValue763.value = "-0.1906999945640564 1.1404999494552612 -0.10649999976158142";
ProtoInstance761.fieldValue[1] = fieldValue763;

fieldValue757.children[1] = ProtoInstance761;

let ProtoInstance764 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance764.name = "Site";
ProtoInstance764.DEF = "hanim_r_humeral_medial_epicondyles";
let fieldValue765 = browser.currentScene.createNode("fieldValue");
fieldValue765.name = "name";
fieldValue765.value = "r_humeral_medial_epicondyles";
ProtoInstance764.fieldValue = new MFNode();

ProtoInstance764.fieldValue[0] = fieldValue765;

let fieldValue766 = browser.currentScene.createNode("fieldValue");
fieldValue766.name = "translation";
fieldValue766.value = "-0.1679999977350235 1.1297999620437622 -0.10620000213384628";
ProtoInstance764.fieldValue[1] = fieldValue766;

fieldValue757.children[2] = ProtoInstance764;

let ProtoInstance767 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance767.name = "Site";
ProtoInstance767.DEF = "hanim_r_radiale";
let fieldValue768 = browser.currentScene.createNode("fieldValue");
fieldValue768.name = "name";
fieldValue768.value = "r_radiale";
ProtoInstance767.fieldValue = new MFNode();

ProtoInstance767.fieldValue[0] = fieldValue768;

let fieldValue769 = browser.currentScene.createNode("fieldValue");
fieldValue769.name = "translation";
fieldValue769.value = "-0.21299999952316284 1.1304999589920044 -0.10909999907016754";
ProtoInstance767.fieldValue[1] = fieldValue769;

fieldValue757.children[3] = ProtoInstance767;

ProtoInstance755.fieldValue[1] = fieldValue757;

fieldValue731.children[1] = ProtoInstance755;

ProtoInstance727.fieldValue[3] = fieldValue731;

fieldValue726.children = new MFNode();

fieldValue726.children[0] = ProtoInstance727;

let ProtoInstance770 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance770.name = "Segment";
ProtoInstance770.DEF = "hanim_r_upperarm";
let fieldValue771 = browser.currentScene.createNode("fieldValue");
fieldValue771.name = "name";
fieldValue771.value = "r_upperarm";
ProtoInstance770.fieldValue = new MFNode();

ProtoInstance770.fieldValue[0] = fieldValue771;

let fieldValue772 = browser.currentScene.createNode("fieldValue");
fieldValue772.name = "children";
let ProtoInstance773 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance773.name = "Site";
ProtoInstance773.DEF = "hanim_r_humeral_lateral_epicondyles";
let fieldValue774 = browser.currentScene.createNode("fieldValue");
fieldValue774.name = "name";
fieldValue774.value = "r_humeral_lateral_epicondyles";
ProtoInstance773.fieldValue = new MFNode();

ProtoInstance773.fieldValue[0] = fieldValue774;

let fieldValue775 = browser.currentScene.createNode("fieldValue");
fieldValue775.name = "translation";
fieldValue775.value = "-0.2223999947309494 1.1517000198364258 -0.10329999774694443";
ProtoInstance773.fieldValue[1] = fieldValue775;

fieldValue772.children = new MFNode();

fieldValue772.children[0] = ProtoInstance773;

ProtoInstance770.fieldValue[1] = fieldValue772;

fieldValue726.children[1] = ProtoInstance770;

ProtoInstance722.fieldValue[3] = fieldValue726;

fieldValue629.children[2] = ProtoInstance722;

let ProtoInstance776 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance776.name = "Segment";
ProtoInstance776.DEF = "hanim_l5";
let fieldValue777 = browser.currentScene.createNode("fieldValue");
fieldValue777.name = "name";
fieldValue777.value = "l5";
ProtoInstance776.fieldValue = new MFNode();

ProtoInstance776.fieldValue[0] = fieldValue777;

let fieldValue778 = browser.currentScene.createNode("fieldValue");
fieldValue778.name = "children";
let ProtoInstance779 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance779.name = "Site";
ProtoInstance779.DEF = "hanim_r_clavicale";
let fieldValue780 = browser.currentScene.createNode("fieldValue");
fieldValue780.name = "name";
fieldValue780.value = "r_clavicale";
ProtoInstance779.fieldValue = new MFNode();

ProtoInstance779.fieldValue[0] = fieldValue780;

let fieldValue781 = browser.currentScene.createNode("fieldValue");
fieldValue781.name = "translation";
fieldValue781.value = "-0.011500000022351742 1.4943000078201294 0.03999999910593033";
ProtoInstance779.fieldValue[1] = fieldValue781;

fieldValue778.children = new MFNode();

fieldValue778.children[0] = ProtoInstance779;

let ProtoInstance782 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance782.name = "Site";
ProtoInstance782.DEF = "hanim_suprasternale";
let fieldValue783 = browser.currentScene.createNode("fieldValue");
fieldValue783.name = "name";
fieldValue783.value = "suprasternale";
ProtoInstance782.fieldValue = new MFNode();

ProtoInstance782.fieldValue[0] = fieldValue783;

let fieldValue784 = browser.currentScene.createNode("fieldValue");
fieldValue784.name = "translation";
fieldValue784.value = "0.00839999970048666 1.4714000225067139 0.05510000139474869";
ProtoInstance782.fieldValue[1] = fieldValue784;

fieldValue778.children[1] = ProtoInstance782;

let ProtoInstance785 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance785.name = "Site";
ProtoInstance785.DEF = "hanim_l_clavicale";
let fieldValue786 = browser.currentScene.createNode("fieldValue");
fieldValue786.name = "name";
fieldValue786.value = "l_clavicale";
ProtoInstance785.fieldValue = new MFNode();

ProtoInstance785.fieldValue[0] = fieldValue786;

let fieldValue787 = browser.currentScene.createNode("fieldValue");
fieldValue787.name = "translation";
fieldValue787.value = "0.02710000053048134 1.4943000078201294 0.039400000125169754";
ProtoInstance785.fieldValue[1] = fieldValue787;

fieldValue778.children[2] = ProtoInstance785;

let ProtoInstance788 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance788.name = "Site";
ProtoInstance788.DEF = "hanim_r_thelion";
let fieldValue789 = browser.currentScene.createNode("fieldValue");
fieldValue789.name = "name";
fieldValue789.value = "r_thelion";
ProtoInstance788.fieldValue = new MFNode();

ProtoInstance788.fieldValue[0] = fieldValue789;

let fieldValue790 = browser.currentScene.createNode("fieldValue");
fieldValue790.name = "translation";
fieldValue790.value = "-0.07360000163316727 1.3385000228881836 0.1216999962925911";
ProtoInstance788.fieldValue[1] = fieldValue790;

fieldValue778.children[3] = ProtoInstance788;

let ProtoInstance791 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance791.name = "Site";
ProtoInstance791.DEF = "hanim_l_thelion";
let fieldValue792 = browser.currentScene.createNode("fieldValue");
fieldValue792.name = "name";
fieldValue792.value = "l_thelion";
ProtoInstance791.fieldValue = new MFNode();

ProtoInstance791.fieldValue[0] = fieldValue792;

let fieldValue793 = browser.currentScene.createNode("fieldValue");
fieldValue793.name = "translation";
fieldValue793.value = "0.09179999679327011 1.3381999731063843 0.11919999867677689";
ProtoInstance791.fieldValue[1] = fieldValue793;

fieldValue778.children[4] = ProtoInstance791;

let ProtoInstance794 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance794.name = "Site";
ProtoInstance794.DEF = "hanim_substernale";
let fieldValue795 = browser.currentScene.createNode("fieldValue");
fieldValue795.name = "name";
fieldValue795.value = "substernale";
ProtoInstance794.fieldValue = new MFNode();

ProtoInstance794.fieldValue[0] = fieldValue795;

let fieldValue796 = browser.currentScene.createNode("fieldValue");
fieldValue796.name = "translation";
fieldValue796.value = "0.008500000461935997 1.2994999885559082 0.11469999700784683";
ProtoInstance794.fieldValue[1] = fieldValue796;

fieldValue778.children[5] = ProtoInstance794;

let ProtoInstance797 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance797.name = "Site";
ProtoInstance797.DEF = "hanim_r_rib10";
let fieldValue798 = browser.currentScene.createNode("fieldValue");
fieldValue798.name = "name";
fieldValue798.value = "r_rib10";
ProtoInstance797.fieldValue = new MFNode();

ProtoInstance797.fieldValue[0] = fieldValue798;

let fieldValue799 = browser.currentScene.createNode("fieldValue");
fieldValue799.name = "translation";
fieldValue799.value = "-0.07109999656677246 1.194100022315979 0.10159999877214432";
ProtoInstance797.fieldValue[1] = fieldValue799;

fieldValue778.children[6] = ProtoInstance797;

let ProtoInstance800 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance800.name = "Site";
ProtoInstance800.DEF = "hanim_l_rib10";
let fieldValue801 = browser.currentScene.createNode("fieldValue");
fieldValue801.name = "name";
fieldValue801.value = "l_rib10";
ProtoInstance800.fieldValue = new MFNode();

ProtoInstance800.fieldValue[0] = fieldValue801;

let fieldValue802 = browser.currentScene.createNode("fieldValue");
fieldValue802.name = "translation";
fieldValue802.value = "0.08709999918937683 1.1924999952316284 0.09920000284910202";
ProtoInstance800.fieldValue[1] = fieldValue802;

fieldValue778.children[7] = ProtoInstance800;

let ProtoInstance803 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance803.name = "Site";
ProtoInstance803.DEF = "hanim_cervicale";
let fieldValue804 = browser.currentScene.createNode("fieldValue");
fieldValue804.name = "name";
fieldValue804.value = "cervicale";
ProtoInstance803.fieldValue = new MFNode();

ProtoInstance803.fieldValue[0] = fieldValue804;

let fieldValue805 = browser.currentScene.createNode("fieldValue");
fieldValue805.name = "translation";
fieldValue805.value = "0.006399999838322401 1.5199999809265137 -0.08150000125169754";
ProtoInstance803.fieldValue[1] = fieldValue805;

fieldValue778.children[8] = ProtoInstance803;

let ProtoInstance806 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance806.name = "Site";
ProtoInstance806.DEF = "hanim_spine_2_lower_back";
let fieldValue807 = browser.currentScene.createNode("fieldValue");
fieldValue807.name = "name";
fieldValue807.value = "spine_2_lower_back";
ProtoInstance806.fieldValue = new MFNode();

ProtoInstance806.fieldValue[0] = fieldValue807;

let fieldValue808 = browser.currentScene.createNode("fieldValue");
fieldValue808.name = "translation";
fieldValue808.value = "0.004900000058114529 1.1907999515533447 -0.11129999905824661";
ProtoInstance806.fieldValue[1] = fieldValue808;

fieldValue778.children[9] = ProtoInstance806;

let ProtoInstance809 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance809.name = "Site";
ProtoInstance809.DEF = "hanim_waist_preferred_posterior";
let fieldValue810 = browser.currentScene.createNode("fieldValue");
fieldValue810.name = "name";
fieldValue810.value = "waist_preferred_posterior";
ProtoInstance809.fieldValue = new MFNode();

ProtoInstance809.fieldValue[0] = fieldValue810;

let fieldValue811 = browser.currentScene.createNode("fieldValue");
fieldValue811.name = "translation";
fieldValue811.value = "0.28999999165534973 1.0915000438690186 -0.10909999907016754";
ProtoInstance809.fieldValue[1] = fieldValue811;

fieldValue778.children[10] = ProtoInstance809;

let ProtoInstance812 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance812.name = "Site";
ProtoInstance812.DEF = "hanim_r_acromion";
let fieldValue813 = browser.currentScene.createNode("fieldValue");
fieldValue813.name = "name";
fieldValue813.value = "r_acromion";
ProtoInstance812.fieldValue = new MFNode();

ProtoInstance812.fieldValue[0] = fieldValue813;

let fieldValue814 = browser.currentScene.createNode("fieldValue");
fieldValue814.name = "translation";
fieldValue814.value = "-0.19050000607967377 1.479099988937378 -0.04309999942779541";
ProtoInstance812.fieldValue[1] = fieldValue814;

fieldValue778.children[11] = ProtoInstance812;

let ProtoInstance815 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance815.name = "Site";
ProtoInstance815.DEF = "hanim_r_axilla_proximal";
let fieldValue816 = browser.currentScene.createNode("fieldValue");
fieldValue816.name = "name";
fieldValue816.value = "r_axilla_proximal";
ProtoInstance815.fieldValue = new MFNode();

ProtoInstance815.fieldValue[0] = fieldValue816;

let fieldValue817 = browser.currentScene.createNode("fieldValue");
fieldValue817.name = "translation";
fieldValue817.value = "-0.16259999573230743 1.4071999788284302 -0.003100000089034438";
ProtoInstance815.fieldValue[1] = fieldValue817;

fieldValue778.children[12] = ProtoInstance815;

let ProtoInstance818 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance818.name = "Site";
ProtoInstance818.DEF = "hanim_r_axilla_distal";
let fieldValue819 = browser.currentScene.createNode("fieldValue");
fieldValue819.name = "name";
fieldValue819.value = "r_axilla_distal";
ProtoInstance818.fieldValue = new MFNode();

ProtoInstance818.fieldValue[0] = fieldValue819;

let fieldValue820 = browser.currentScene.createNode("fieldValue");
fieldValue820.name = "translation";
fieldValue820.value = "-0.16030000150203705 1.4098000526428223 -0.08259999752044678";
ProtoInstance818.fieldValue[1] = fieldValue820;

fieldValue778.children[13] = ProtoInstance818;

let ProtoInstance821 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance821.name = "Site";
ProtoInstance821.DEF = "hanim_l_acromion";
let fieldValue822 = browser.currentScene.createNode("fieldValue");
fieldValue822.name = "name";
fieldValue822.value = "l_acromion";
ProtoInstance821.fieldValue = new MFNode();

ProtoInstance821.fieldValue[0] = fieldValue822;

let fieldValue823 = browser.currentScene.createNode("fieldValue");
fieldValue823.name = "translation";
fieldValue823.value = "0.20319999754428864 1.4759999513626099 -0.04899999871850014";
ProtoInstance821.fieldValue[1] = fieldValue823;

fieldValue778.children[14] = ProtoInstance821;

let ProtoInstance824 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance824.name = "Site";
ProtoInstance824.DEF = "hanim_l_axilla_proximal";
let fieldValue825 = browser.currentScene.createNode("fieldValue");
fieldValue825.name = "name";
fieldValue825.value = "l_axilla_proximal";
ProtoInstance824.fieldValue = new MFNode();

ProtoInstance824.fieldValue[0] = fieldValue825;

let fieldValue826 = browser.currentScene.createNode("fieldValue");
fieldValue826.name = "translation";
fieldValue826.value = "0.1776999980211258 1.406499981880188 -0.007499999832361937";
ProtoInstance824.fieldValue[1] = fieldValue826;

fieldValue778.children[15] = ProtoInstance824;

let ProtoInstance827 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance827.name = "Site";
ProtoInstance827.DEF = "hanim_l_axilla_distal";
let fieldValue828 = browser.currentScene.createNode("fieldValue");
fieldValue828.name = "name";
fieldValue828.value = "l_axilla_distal";
ProtoInstance827.fieldValue = new MFNode();

ProtoInstance827.fieldValue[0] = fieldValue828;

let fieldValue829 = browser.currentScene.createNode("fieldValue");
fieldValue829.name = "translation";
fieldValue829.value = "0.17059999704360962 1.4071999788284302 -0.08749999850988388";
ProtoInstance827.fieldValue[1] = fieldValue829;

fieldValue778.children[16] = ProtoInstance827;

let ProtoInstance830 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance830.name = "Site";
ProtoInstance830.DEF = "hanim_r_neck_base";
let fieldValue831 = browser.currentScene.createNode("fieldValue");
fieldValue831.name = "name";
fieldValue831.value = "r_neck_base";
ProtoInstance830.fieldValue = new MFNode();

ProtoInstance830.fieldValue[0] = fieldValue831;

let fieldValue832 = browser.currentScene.createNode("fieldValue");
fieldValue832.name = "translation";
fieldValue832.value = "-0.04190000146627426 1.5148999691009521 -0.02199999988079071";
ProtoInstance830.fieldValue[1] = fieldValue832;

fieldValue778.children[17] = ProtoInstance830;

let ProtoInstance833 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance833.name = "Site";
ProtoInstance833.DEF = "hanim_l_neck_base";
let fieldValue834 = browser.currentScene.createNode("fieldValue");
fieldValue834.name = "name";
fieldValue834.value = "l_neck_base";
ProtoInstance833.fieldValue = new MFNode();

ProtoInstance833.fieldValue[0] = fieldValue834;

let fieldValue835 = browser.currentScene.createNode("fieldValue");
fieldValue835.name = "translation";
fieldValue835.value = "0.06459999829530716 1.5140999555587769 -0.03799999877810478";
ProtoInstance833.fieldValue[1] = fieldValue835;

fieldValue778.children[18] = ProtoInstance833;

let ProtoInstance836 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance836.name = "Site";
ProtoInstance836.DEF = "hanim_navel";
let fieldValue837 = browser.currentScene.createNode("fieldValue");
fieldValue837.name = "name";
fieldValue837.value = "navel";
ProtoInstance836.fieldValue = new MFNode();

ProtoInstance836.fieldValue[0] = fieldValue837;

let fieldValue838 = browser.currentScene.createNode("fieldValue");
fieldValue838.name = "translation";
fieldValue838.value = "0.006899999920278788 1.09660005569458 0.10170000046491623";
ProtoInstance836.fieldValue[1] = fieldValue838;

fieldValue778.children[19] = ProtoInstance836;

ProtoInstance776.fieldValue[1] = fieldValue778;

fieldValue629.children[3] = ProtoInstance776;

ProtoInstance625.fieldValue[3] = fieldValue629;

fieldValue489.children[1] = ProtoInstance625;

let ProtoInstance839 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance839.name = "Segment";
ProtoInstance839.DEF = "hanim_sacrum";
let fieldValue840 = browser.currentScene.createNode("fieldValue");
fieldValue840.name = "name";
fieldValue840.value = "sacrum";
ProtoInstance839.fieldValue = new MFNode();

ProtoInstance839.fieldValue[0] = fieldValue840;

let fieldValue841 = browser.currentScene.createNode("fieldValue");
fieldValue841.name = "children";
let ProtoInstance842 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance842.name = "Site";
ProtoInstance842.DEF = "hanim_r_asis";
let fieldValue843 = browser.currentScene.createNode("fieldValue");
fieldValue843.name = "name";
fieldValue843.value = "r_asis";
ProtoInstance842.fieldValue = new MFNode();

ProtoInstance842.fieldValue[0] = fieldValue843;

let fieldValue844 = browser.currentScene.createNode("fieldValue");
fieldValue844.name = "translation";
fieldValue844.value = "-0.08869999647140503 1.0020999908447266 0.1111999973654747";
ProtoInstance842.fieldValue[1] = fieldValue844;

fieldValue841.children = new MFNode();

fieldValue841.children[0] = ProtoInstance842;

let ProtoInstance845 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance845.name = "Site";
ProtoInstance845.DEF = "hanim_l_asis";
let fieldValue846 = browser.currentScene.createNode("fieldValue");
fieldValue846.name = "name";
fieldValue846.value = "l_asis";
ProtoInstance845.fieldValue = new MFNode();

ProtoInstance845.fieldValue[0] = fieldValue846;

let fieldValue847 = browser.currentScene.createNode("fieldValue");
fieldValue847.name = "translation";
fieldValue847.value = "0.0925000011920929 0.9983000159263611 0.10520000010728836";
ProtoInstance845.fieldValue[1] = fieldValue847;

fieldValue841.children[1] = ProtoInstance845;

let ProtoInstance848 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance848.name = "Site";
ProtoInstance848.DEF = "hanim_r_iliocristale";
let fieldValue849 = browser.currentScene.createNode("fieldValue");
fieldValue849.name = "name";
fieldValue849.value = "r_iliocristale";
ProtoInstance848.fieldValue = new MFNode();

ProtoInstance848.fieldValue[0] = fieldValue849;

let fieldValue850 = browser.currentScene.createNode("fieldValue");
fieldValue850.name = "translation";
fieldValue850.value = "-0.1525000035762787 1.0628000497817993 0.0035000001080334187";
ProtoInstance848.fieldValue[1] = fieldValue850;

fieldValue841.children[2] = ProtoInstance848;

let ProtoInstance851 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance851.name = "Site";
ProtoInstance851.DEF = "hanim_r_trochanterion";
let fieldValue852 = browser.currentScene.createNode("fieldValue");
fieldValue852.name = "name";
fieldValue852.value = "r_trochanterion";
ProtoInstance851.fieldValue = new MFNode();

ProtoInstance851.fieldValue[0] = fieldValue852;

let fieldValue853 = browser.currentScene.createNode("fieldValue");
fieldValue853.name = "translation";
fieldValue853.value = "-0.1688999980688095 0.8418999910354614 0.03519999980926514";
ProtoInstance851.fieldValue[1] = fieldValue853;

fieldValue841.children[3] = ProtoInstance851;

let ProtoInstance854 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance854.name = "Site";
ProtoInstance854.DEF = "hanim_l_iliocristale";
let fieldValue855 = browser.currentScene.createNode("fieldValue");
fieldValue855.name = "name";
fieldValue855.value = "l_iliocristale";
ProtoInstance854.fieldValue = new MFNode();

ProtoInstance854.fieldValue[0] = fieldValue855;

let fieldValue856 = browser.currentScene.createNode("fieldValue");
fieldValue856.name = "translation";
fieldValue856.value = "0.16120000183582306 1.0536999702453613 0.0007999999797903001";
ProtoInstance854.fieldValue[1] = fieldValue856;

fieldValue841.children[4] = ProtoInstance854;

let ProtoInstance857 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance857.name = "Site";
ProtoInstance857.DEF = "hanim_l_trochanterion";
let fieldValue858 = browser.currentScene.createNode("fieldValue");
fieldValue858.name = "name";
fieldValue858.value = "l_trochanterion";
ProtoInstance857.fieldValue = new MFNode();

ProtoInstance857.fieldValue[0] = fieldValue858;

let fieldValue859 = browser.currentScene.createNode("fieldValue");
fieldValue859.name = "translation";
fieldValue859.value = "0.16769999265670776 0.8335999846458435 0.030300000682473183";
ProtoInstance857.fieldValue[1] = fieldValue859;

fieldValue841.children[5] = ProtoInstance857;

let ProtoInstance860 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance860.name = "Site";
ProtoInstance860.DEF = "hanim_r_psis";
let fieldValue861 = browser.currentScene.createNode("fieldValue");
fieldValue861.name = "name";
fieldValue861.value = "r_psis";
ProtoInstance860.fieldValue = new MFNode();

ProtoInstance860.fieldValue[0] = fieldValue861;

let fieldValue862 = browser.currentScene.createNode("fieldValue");
fieldValue862.name = "translation";
fieldValue862.value = "-0.07159999758005142 1.0190000534057617 -0.11379999667406082";
ProtoInstance860.fieldValue[1] = fieldValue862;

fieldValue841.children[6] = ProtoInstance860;

let ProtoInstance863 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance863.name = "Site";
ProtoInstance863.DEF = "hanim_l_psis";
let fieldValue864 = browser.currentScene.createNode("fieldValue");
fieldValue864.name = "name";
fieldValue864.value = "l_psis";
ProtoInstance863.fieldValue = new MFNode();

ProtoInstance863.fieldValue[0] = fieldValue864;

let fieldValue865 = browser.currentScene.createNode("fieldValue");
fieldValue865.name = "translation";
fieldValue865.value = "0.07739999890327454 1.0190000534057617 -0.11509999632835388";
ProtoInstance863.fieldValue[1] = fieldValue865;

fieldValue841.children[7] = ProtoInstance863;

let ProtoInstance866 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance866.name = "Site";
ProtoInstance866.DEF = "hanim_crotch";
let fieldValue867 = browser.currentScene.createNode("fieldValue");
fieldValue867.name = "name";
fieldValue867.value = "crotch";
ProtoInstance866.fieldValue = new MFNode();

ProtoInstance866.fieldValue[0] = fieldValue867;

let fieldValue868 = browser.currentScene.createNode("fieldValue");
fieldValue868.name = "translation";
fieldValue868.value = "0.0034000000450760126 0.8266000151634216 0.025699999183416367";
ProtoInstance866.fieldValue[1] = fieldValue868;

fieldValue841.children[8] = ProtoInstance866;

ProtoInstance839.fieldValue[1] = fieldValue841;

fieldValue489.children[2] = ProtoInstance839;

ProtoInstance485.fieldValue[3] = fieldValue489;

fieldValue484.children = new MFNode();

fieldValue484.children[0] = ProtoInstance485;

let ProtoInstance869 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance869.name = "Joint";
ProtoInstance869.DEF = "hanim_sacroiliac";
let fieldValue870 = browser.currentScene.createNode("fieldValue");
fieldValue870.name = "stiffness";
fieldValue870.value = "1 1 1";
ProtoInstance869.fieldValue = new MFNode();

ProtoInstance869.fieldValue[0] = fieldValue870;

let fieldValue871 = browser.currentScene.createNode("fieldValue");
fieldValue871.name = "name";
fieldValue871.value = "sacroiliac";
ProtoInstance869.fieldValue[1] = fieldValue871;

let fieldValue872 = browser.currentScene.createNode("fieldValue");
fieldValue872.name = "center";
fieldValue872.value = "0 0.914900004863739 0.0015999999595806003";
ProtoInstance869.fieldValue[2] = fieldValue872;

let fieldValue873 = browser.currentScene.createNode("fieldValue");
fieldValue873.name = "children";
let ProtoInstance874 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance874.name = "Joint";
ProtoInstance874.DEF = "hanim_l_hip";
let fieldValue875 = browser.currentScene.createNode("fieldValue");
fieldValue875.name = "stiffness";
fieldValue875.value = "1 1 1";
ProtoInstance874.fieldValue = new MFNode();

ProtoInstance874.fieldValue[0] = fieldValue875;

let fieldValue876 = browser.currentScene.createNode("fieldValue");
fieldValue876.name = "name";
fieldValue876.value = "l_hip";
ProtoInstance874.fieldValue[1] = fieldValue876;

let fieldValue877 = browser.currentScene.createNode("fieldValue");
fieldValue877.name = "center";
fieldValue877.value = "0.09610000252723694 0.9124000072479248 -0.00009999999747378752";
ProtoInstance874.fieldValue[2] = fieldValue877;

let fieldValue878 = browser.currentScene.createNode("fieldValue");
fieldValue878.name = "children";
let ProtoInstance879 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance879.name = "Joint";
ProtoInstance879.DEF = "hanim_l_knee";
let fieldValue880 = browser.currentScene.createNode("fieldValue");
fieldValue880.name = "stiffness";
fieldValue880.value = "1 1 1";
ProtoInstance879.fieldValue = new MFNode();

ProtoInstance879.fieldValue[0] = fieldValue880;

let fieldValue881 = browser.currentScene.createNode("fieldValue");
fieldValue881.name = "name";
fieldValue881.value = "l_knee";
ProtoInstance879.fieldValue[1] = fieldValue881;

let fieldValue882 = browser.currentScene.createNode("fieldValue");
fieldValue882.name = "center";
fieldValue882.value = "0.10400000214576721 0.48669999837875366 0.030799999833106995";
ProtoInstance879.fieldValue[2] = fieldValue882;

let fieldValue883 = browser.currentScene.createNode("fieldValue");
fieldValue883.name = "children";
let ProtoInstance884 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance884.name = "Joint";
ProtoInstance884.DEF = "hanim_l_talocrural";
let fieldValue885 = browser.currentScene.createNode("fieldValue");
fieldValue885.name = "stiffness";
fieldValue885.value = "1 1 1";
ProtoInstance884.fieldValue = new MFNode();

ProtoInstance884.fieldValue[0] = fieldValue885;

let fieldValue886 = browser.currentScene.createNode("fieldValue");
fieldValue886.name = "name";
fieldValue886.value = "l_talocrural";
ProtoInstance884.fieldValue[1] = fieldValue886;

let fieldValue887 = browser.currentScene.createNode("fieldValue");
fieldValue887.name = "center";
fieldValue887.value = "0.11010000109672546 0.06560000032186508 -0.07360000163316727";
ProtoInstance884.fieldValue[2] = fieldValue887;

let fieldValue888 = browser.currentScene.createNode("fieldValue");
fieldValue888.name = "children";
let ProtoInstance889 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance889.name = "Joint";
ProtoInstance889.DEF = "hanim_l_metatarsophalangeal_";
let fieldValue890 = browser.currentScene.createNode("fieldValue");
fieldValue890.name = "stiffness";
fieldValue890.value = "1 1 1";
ProtoInstance889.fieldValue = new MFNode();

ProtoInstance889.fieldValue[0] = fieldValue890;

let fieldValue891 = browser.currentScene.createNode("fieldValue");
fieldValue891.name = "name";
fieldValue891.value = "l_metatarsophalangeal_";
ProtoInstance889.fieldValue[1] = fieldValue891;

let fieldValue892 = browser.currentScene.createNode("fieldValue");
fieldValue892.name = "center";
fieldValue892.value = "0.10859999805688858 0.00009999999747378752 0.03680000081658363";
ProtoInstance889.fieldValue[2] = fieldValue892;

let fieldValue893 = browser.currentScene.createNode("fieldValue");
fieldValue893.name = "children";
let ProtoInstance894 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance894.name = "Segment";
ProtoInstance894.DEF = "hanim_l_middistal";
let fieldValue895 = browser.currentScene.createNode("fieldValue");
fieldValue895.name = "name";
fieldValue895.value = "l_middistal";
ProtoInstance894.fieldValue = new MFNode();

ProtoInstance894.fieldValue[0] = fieldValue895;

let fieldValue896 = browser.currentScene.createNode("fieldValue");
fieldValue896.name = "children";
let ProtoInstance897 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance897.name = "Site";
ProtoInstance897.DEF = "hanim_l_middistal_tip";
let fieldValue898 = browser.currentScene.createNode("fieldValue");
fieldValue898.name = "name";
fieldValue898.value = "l_middistal_tip";
ProtoInstance897.fieldValue = new MFNode();

ProtoInstance897.fieldValue[0] = fieldValue898;

let fieldValue899 = browser.currentScene.createNode("fieldValue");
fieldValue899.name = "translation";
fieldValue899.value = "0.13539999723434448 0.0015999999595806003 0.147599995136261";
ProtoInstance897.fieldValue[1] = fieldValue899;

fieldValue896.children = new MFNode();

fieldValue896.children[0] = ProtoInstance897;

let ProtoInstance900 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance900.name = "Site";
ProtoInstance900.DEF = "hanim_l_tarsal_interphalangeal_phalanx_5";
let fieldValue901 = browser.currentScene.createNode("fieldValue");
fieldValue901.name = "name";
fieldValue901.value = "l_tarsal_interphalangeal_phalanx_5";
ProtoInstance900.fieldValue = new MFNode();

ProtoInstance900.fieldValue[0] = fieldValue901;

let fieldValue902 = browser.currentScene.createNode("fieldValue");
fieldValue902.name = "translation";
fieldValue902.value = "0.18250000476837158 0.007000000216066837 0.09279999881982803";
ProtoInstance900.fieldValue[1] = fieldValue902;

fieldValue896.children[1] = ProtoInstance900;

let ProtoInstance903 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance903.name = "Site";
ProtoInstance903.DEF = "hanim_l_tarsal_interphalangeal_phalanx_1";
let fieldValue904 = browser.currentScene.createNode("fieldValue");
fieldValue904.name = "name";
fieldValue904.value = "l_tarsal_interphalangeal_phalanx_1";
ProtoInstance903.fieldValue = new MFNode();

ProtoInstance903.fieldValue[0] = fieldValue904;

let fieldValue905 = browser.currentScene.createNode("fieldValue");
fieldValue905.name = "translation";
fieldValue905.value = "0.08160000294446945 0.02319999970495701 0.010599999688565731";
ProtoInstance903.fieldValue[1] = fieldValue905;

fieldValue896.children[2] = ProtoInstance903;

let ProtoInstance906 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance906.name = "Site";
ProtoInstance906.DEF = "hanim_l_tarsal_distal_phalanx_2";
let fieldValue907 = browser.currentScene.createNode("fieldValue");
fieldValue907.name = "name";
fieldValue907.value = "l_tarsal_distal_phalanx_2";
ProtoInstance906.fieldValue = new MFNode();

ProtoInstance906.fieldValue[0] = fieldValue907;

let fieldValue908 = browser.currentScene.createNode("fieldValue");
fieldValue908.name = "translation";
fieldValue908.value = "0.11949999630451202 0.007899999618530273 0.14329999685287476";
ProtoInstance906.fieldValue[1] = fieldValue908;

fieldValue896.children[3] = ProtoInstance906;

ProtoInstance894.fieldValue[1] = fieldValue896;

fieldValue893.children = new MFNode();

fieldValue893.children[0] = ProtoInstance894;

ProtoInstance889.fieldValue[3] = fieldValue893;

fieldValue888.children = new MFNode();

fieldValue888.children[0] = ProtoInstance889;

let ProtoInstance909 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance909.name = "Segment";
ProtoInstance909.DEF = "hanim_l_hindfoot";
let fieldValue910 = browser.currentScene.createNode("fieldValue");
fieldValue910.name = "name";
fieldValue910.value = "l_hindfoot";
ProtoInstance909.fieldValue = new MFNode();

ProtoInstance909.fieldValue[0] = fieldValue910;

let fieldValue911 = browser.currentScene.createNode("fieldValue");
fieldValue911.name = "children";
let ProtoInstance912 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance912.name = "Site";
ProtoInstance912.DEF = "hanim_l_lateral_malleolus";
let fieldValue913 = browser.currentScene.createNode("fieldValue");
fieldValue913.name = "name";
fieldValue913.value = "l_lateral_malleolus";
ProtoInstance912.fieldValue = new MFNode();

ProtoInstance912.fieldValue[0] = fieldValue913;

let fieldValue914 = browser.currentScene.createNode("fieldValue");
fieldValue914.name = "translation";
fieldValue914.value = "0.13079999387264252 0.059700001031160355 -0.10320000350475311";
ProtoInstance912.fieldValue[1] = fieldValue914;

fieldValue911.children = new MFNode();

fieldValue911.children[0] = ProtoInstance912;

let ProtoInstance915 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance915.name = "Site";
ProtoInstance915.DEF = "hanim_l_medial_malleolus";
let fieldValue916 = browser.currentScene.createNode("fieldValue");
fieldValue916.name = "name";
fieldValue916.value = "l_medial_malleolus";
ProtoInstance915.fieldValue = new MFNode();

ProtoInstance915.fieldValue[0] = fieldValue916;

let fieldValue917 = browser.currentScene.createNode("fieldValue");
fieldValue917.name = "translation";
fieldValue917.value = "0.08900000154972076 0.07159999758005142 -0.08810000121593475";
ProtoInstance915.fieldValue[1] = fieldValue917;

fieldValue911.children[1] = ProtoInstance915;

let ProtoInstance918 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance918.name = "Site";
ProtoInstance918.DEF = "hanim_l_sphyrion";
let fieldValue919 = browser.currentScene.createNode("fieldValue");
fieldValue919.name = "name";
fieldValue919.value = "l_sphyrion";
ProtoInstance918.fieldValue = new MFNode();

ProtoInstance918.fieldValue[0] = fieldValue919;

let fieldValue920 = browser.currentScene.createNode("fieldValue");
fieldValue920.name = "translation";
fieldValue920.value = "0.08900000154972076 0.057500001043081284 -0.09430000185966492";
ProtoInstance918.fieldValue[1] = fieldValue920;

fieldValue911.children[2] = ProtoInstance918;

let ProtoInstance921 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance921.name = "Site";
ProtoInstance921.DEF = "hanim_l_calcaneus_posterior";
let fieldValue922 = browser.currentScene.createNode("fieldValue");
fieldValue922.name = "name";
fieldValue922.value = "l_calcaneus_posterior";
ProtoInstance921.fieldValue = new MFNode();

ProtoInstance921.fieldValue[0] = fieldValue922;

let fieldValue923 = browser.currentScene.createNode("fieldValue");
fieldValue923.name = "translation";
fieldValue923.value = "0.09740000218153 0.02590000070631504 -0.11710000038146973";
ProtoInstance921.fieldValue[1] = fieldValue923;

fieldValue911.children[3] = ProtoInstance921;

ProtoInstance909.fieldValue[1] = fieldValue911;

fieldValue888.children[1] = ProtoInstance909;

ProtoInstance884.fieldValue[3] = fieldValue888;

fieldValue883.children = new MFNode();

fieldValue883.children[0] = ProtoInstance884;

let ProtoInstance924 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance924.name = "Segment";
ProtoInstance924.DEF = "hanim_l_calf";
let fieldValue925 = browser.currentScene.createNode("fieldValue");
fieldValue925.name = "name";
fieldValue925.value = "l_calf";
ProtoInstance924.fieldValue = new MFNode();

ProtoInstance924.fieldValue[0] = fieldValue925;

fieldValue883.children[1] = ProtoInstance924;

ProtoInstance879.fieldValue[3] = fieldValue883;

fieldValue878.children = new MFNode();

fieldValue878.children[0] = ProtoInstance879;

let ProtoInstance926 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance926.name = "Segment";
ProtoInstance926.DEF = "hanim_l_thigh";
let fieldValue927 = browser.currentScene.createNode("fieldValue");
fieldValue927.name = "name";
fieldValue927.value = "l_thigh";
ProtoInstance926.fieldValue = new MFNode();

ProtoInstance926.fieldValue[0] = fieldValue927;

let fieldValue928 = browser.currentScene.createNode("fieldValue");
fieldValue928.name = "children";
let ProtoInstance929 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance929.name = "Site";
ProtoInstance929.DEF = "hanim_l_knee_crease";
let fieldValue930 = browser.currentScene.createNode("fieldValue");
fieldValue930.name = "name";
fieldValue930.value = "l_knee_crease";
ProtoInstance929.fieldValue = new MFNode();

ProtoInstance929.fieldValue[0] = fieldValue930;

let fieldValue931 = browser.currentScene.createNode("fieldValue");
fieldValue931.name = "translation";
fieldValue931.value = "0.09929999709129333 0.48809999227523804 -0.030899999663233757";
ProtoInstance929.fieldValue[1] = fieldValue931;

fieldValue928.children = new MFNode();

fieldValue928.children[0] = ProtoInstance929;

let ProtoInstance932 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance932.name = "Site";
ProtoInstance932.DEF = "hanim_l_femoral_lateral_epicondyles";
let fieldValue933 = browser.currentScene.createNode("fieldValue");
fieldValue933.name = "name";
fieldValue933.value = "l_femoral_lateral_epicondyles";
ProtoInstance932.fieldValue = new MFNode();

ProtoInstance932.fieldValue[0] = fieldValue933;

let fieldValue934 = browser.currentScene.createNode("fieldValue");
fieldValue934.name = "translation";
fieldValue934.value = "0.1597999930381775 0.4966999888420105 0.02969999983906746";
ProtoInstance932.fieldValue[1] = fieldValue934;

fieldValue928.children[1] = ProtoInstance932;

let ProtoInstance935 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance935.name = "Site";
ProtoInstance935.DEF = "hanim_l_femoral_medial_epicondyles";
let fieldValue936 = browser.currentScene.createNode("fieldValue");
fieldValue936.name = "name";
fieldValue936.value = "l_femoral_lateral_epicondyles";
ProtoInstance935.fieldValue = new MFNode();

ProtoInstance935.fieldValue[0] = fieldValue936;

let fieldValue937 = browser.currentScene.createNode("fieldValue");
fieldValue937.name = "translation";
fieldValue937.value = "0.039799999445676804 0.49459999799728394 0.030300000682473183";
ProtoInstance935.fieldValue[1] = fieldValue937;

fieldValue928.children[2] = ProtoInstance935;

ProtoInstance926.fieldValue[1] = fieldValue928;

fieldValue878.children[1] = ProtoInstance926;

ProtoInstance874.fieldValue[3] = fieldValue878;

fieldValue873.children = new MFNode();

fieldValue873.children[0] = ProtoInstance874;

let ProtoInstance938 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance938.name = "Joint";
ProtoInstance938.DEF = "hanim_r_hip";
let fieldValue939 = browser.currentScene.createNode("fieldValue");
fieldValue939.name = "stiffness";
fieldValue939.value = "1 1 1";
ProtoInstance938.fieldValue = new MFNode();

ProtoInstance938.fieldValue[0] = fieldValue939;

let fieldValue940 = browser.currentScene.createNode("fieldValue");
fieldValue940.name = "name";
fieldValue940.value = "r_hip";
ProtoInstance938.fieldValue[1] = fieldValue940;

let fieldValue941 = browser.currentScene.createNode("fieldValue");
fieldValue941.name = "center";
fieldValue941.value = "-0.0949999988079071 0.9171000123023987 0.002899999963119626";
ProtoInstance938.fieldValue[2] = fieldValue941;

let fieldValue942 = browser.currentScene.createNode("fieldValue");
fieldValue942.name = "children";
let ProtoInstance943 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance943.name = "Joint";
ProtoInstance943.DEF = "hanim_r_knee";
let fieldValue944 = browser.currentScene.createNode("fieldValue");
fieldValue944.name = "stiffness";
fieldValue944.value = "1 1 1";
ProtoInstance943.fieldValue = new MFNode();

ProtoInstance943.fieldValue[0] = fieldValue944;

let fieldValue945 = browser.currentScene.createNode("fieldValue");
fieldValue945.name = "name";
fieldValue945.value = "r_knee";
ProtoInstance943.fieldValue[1] = fieldValue945;

let fieldValue946 = browser.currentScene.createNode("fieldValue");
fieldValue946.name = "center";
fieldValue946.value = "-0.08669999986886978 0.49129998683929443 0.03180000185966492";
ProtoInstance943.fieldValue[2] = fieldValue946;

let fieldValue947 = browser.currentScene.createNode("fieldValue");
fieldValue947.name = "children";
let ProtoInstance948 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance948.name = "Joint";
ProtoInstance948.DEF = "hanim_r_talocrural";
let fieldValue949 = browser.currentScene.createNode("fieldValue");
fieldValue949.name = "stiffness";
fieldValue949.value = "1 1 1";
ProtoInstance948.fieldValue = new MFNode();

ProtoInstance948.fieldValue[0] = fieldValue949;

let fieldValue950 = browser.currentScene.createNode("fieldValue");
fieldValue950.name = "name";
fieldValue950.value = "r_talocrural";
ProtoInstance948.fieldValue[1] = fieldValue950;

let fieldValue951 = browser.currentScene.createNode("fieldValue");
fieldValue951.name = "center";
fieldValue951.value = "-0.08009999990463257 0.07119999825954437 -0.07660000026226044";
ProtoInstance948.fieldValue[2] = fieldValue951;

let fieldValue952 = browser.currentScene.createNode("fieldValue");
fieldValue952.name = "children";
let ProtoInstance953 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance953.name = "Joint";
ProtoInstance953.DEF = "hanim_r_metatarsophalangeal_";
let fieldValue954 = browser.currentScene.createNode("fieldValue");
fieldValue954.name = "stiffness";
fieldValue954.value = "1 1 1";
ProtoInstance953.fieldValue = new MFNode();

ProtoInstance953.fieldValue[0] = fieldValue954;

let fieldValue955 = browser.currentScene.createNode("fieldValue");
fieldValue955.name = "name";
fieldValue955.value = "r_metatarsophalangeal_";
ProtoInstance953.fieldValue[1] = fieldValue955;

let fieldValue956 = browser.currentScene.createNode("fieldValue");
fieldValue956.name = "center";
fieldValue956.value = "-0.08009999990463257 0 0.03680000081658363";
ProtoInstance953.fieldValue[2] = fieldValue956;

let fieldValue957 = browser.currentScene.createNode("fieldValue");
fieldValue957.name = "children";
let ProtoInstance958 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance958.name = "Segment";
ProtoInstance958.DEF = "hanim_r_middistal";
let fieldValue959 = browser.currentScene.createNode("fieldValue");
fieldValue959.name = "name";
fieldValue959.value = "r_middistal";
ProtoInstance958.fieldValue = new MFNode();

ProtoInstance958.fieldValue[0] = fieldValue959;

let fieldValue960 = browser.currentScene.createNode("fieldValue");
fieldValue960.name = "children";
let ProtoInstance961 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance961.name = "Site";
ProtoInstance961.DEF = "hanim_r_middistal_tip";
let fieldValue962 = browser.currentScene.createNode("fieldValue");
fieldValue962.name = "name";
fieldValue962.value = "r_middistal_tip";
ProtoInstance961.fieldValue = new MFNode();

ProtoInstance961.fieldValue[0] = fieldValue962;

let fieldValue963 = browser.currentScene.createNode("fieldValue");
fieldValue963.name = "translation";
fieldValue963.value = "-0.10429999977350235 -0.022700000554323196 0.14499999582767487";
ProtoInstance961.fieldValue[1] = fieldValue963;

fieldValue960.children = new MFNode();

fieldValue960.children[0] = ProtoInstance961;

let ProtoInstance964 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance964.name = "Site";
ProtoInstance964.DEF = "hanim_r_tarsal_interphalangeal_phalanx_5";
let fieldValue965 = browser.currentScene.createNode("fieldValue");
fieldValue965.name = "name";
fieldValue965.value = "r_tarsal_interphalangeal_phalanx_5";
ProtoInstance964.fieldValue = new MFNode();

ProtoInstance964.fieldValue[0] = fieldValue965;

let fieldValue966 = browser.currentScene.createNode("fieldValue");
fieldValue966.name = "translation";
fieldValue966.value = "-0.15230000019073486 0.016599999740719795 0.08950000256299973";
ProtoInstance964.fieldValue[1] = fieldValue966;

fieldValue960.children[1] = ProtoInstance964;

let ProtoInstance967 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance967.name = "Site";
ProtoInstance967.DEF = "hanim_r_tarsal_interphalangeal_phalanx_1";
let fieldValue968 = browser.currentScene.createNode("fieldValue");
fieldValue968.name = "name";
fieldValue968.value = "r_tarsal_interphalangeal_phalanx_1";
ProtoInstance967.fieldValue = new MFNode();

ProtoInstance967.fieldValue[0] = fieldValue968;

let fieldValue969 = browser.currentScene.createNode("fieldValue");
fieldValue969.name = "translation";
fieldValue969.value = "-0.05209999904036522 0.026000000536441803 0.01269999984651804";
ProtoInstance967.fieldValue[1] = fieldValue969;

fieldValue960.children[2] = ProtoInstance967;

let ProtoInstance970 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance970.name = "Site";
ProtoInstance970.DEF = "hanim_r_tarsal_distal_phalanx_2";
let fieldValue971 = browser.currentScene.createNode("fieldValue");
fieldValue971.name = "name";
fieldValue971.value = "r_tarsal_distal_phalanx_2";
ProtoInstance970.fieldValue = new MFNode();

ProtoInstance970.fieldValue[0] = fieldValue971;

let fieldValue972 = browser.currentScene.createNode("fieldValue");
fieldValue972.name = "translation";
fieldValue972.value = "-0.08829999715089798 0.013399999588727951 0.13830000162124634";
ProtoInstance970.fieldValue[1] = fieldValue972;

fieldValue960.children[3] = ProtoInstance970;

ProtoInstance958.fieldValue[1] = fieldValue960;

fieldValue957.children = new MFNode();

fieldValue957.children[0] = ProtoInstance958;

ProtoInstance953.fieldValue[3] = fieldValue957;

fieldValue952.children = new MFNode();

fieldValue952.children[0] = ProtoInstance953;

let ProtoInstance973 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance973.name = "Segment";
ProtoInstance973.DEF = "hanim_r_hindfoot";
let fieldValue974 = browser.currentScene.createNode("fieldValue");
fieldValue974.name = "name";
fieldValue974.value = "r_hindfoot";
ProtoInstance973.fieldValue = new MFNode();

ProtoInstance973.fieldValue[0] = fieldValue974;

let fieldValue975 = browser.currentScene.createNode("fieldValue");
fieldValue975.name = "children";
let ProtoInstance976 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance976.name = "Site";
ProtoInstance976.DEF = "hanim_r_lateral_malleolus";
let fieldValue977 = browser.currentScene.createNode("fieldValue");
fieldValue977.name = "name";
fieldValue977.value = "r_lateral_malleolus";
ProtoInstance976.fieldValue = new MFNode();

ProtoInstance976.fieldValue[0] = fieldValue977;

let fieldValue978 = browser.currentScene.createNode("fieldValue");
fieldValue978.name = "translation";
fieldValue978.value = "-0.1005999967455864 0.0658000037074089 -0.10750000178813934";
ProtoInstance976.fieldValue[1] = fieldValue978;

fieldValue975.children = new MFNode();

fieldValue975.children[0] = ProtoInstance976;

let ProtoInstance979 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance979.name = "Site";
ProtoInstance979.DEF = "hanim_r_medial_malleolus";
let fieldValue980 = browser.currentScene.createNode("fieldValue");
fieldValue980.name = "name";
fieldValue980.value = "r_medial_malleolus";
ProtoInstance979.fieldValue = new MFNode();

ProtoInstance979.fieldValue[0] = fieldValue980;

let fieldValue981 = browser.currentScene.createNode("fieldValue");
fieldValue981.name = "translation";
fieldValue981.value = "-0.05909999832510948 0.07599999755620956 -0.09279999881982803";
ProtoInstance979.fieldValue[1] = fieldValue981;

fieldValue975.children[1] = ProtoInstance979;

let ProtoInstance982 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance982.name = "Site";
ProtoInstance982.DEF = "hanim_r_sphyrion";
let fieldValue983 = browser.currentScene.createNode("fieldValue");
fieldValue983.name = "name";
fieldValue983.value = "r_sphyrion";
ProtoInstance982.fieldValue = new MFNode();

ProtoInstance982.fieldValue[0] = fieldValue983;

let fieldValue984 = browser.currentScene.createNode("fieldValue");
fieldValue984.name = "translation";
fieldValue984.value = "-0.06030000001192093 0.061000000685453415 -0.10019999742507935";
ProtoInstance982.fieldValue[1] = fieldValue984;

fieldValue975.children[2] = ProtoInstance982;

let ProtoInstance985 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance985.name = "Site";
ProtoInstance985.DEF = "hanim_r_calcaneus_posterior";
let fieldValue986 = browser.currentScene.createNode("fieldValue");
fieldValue986.name = "name";
fieldValue986.value = "r_calcaneus_posterior";
ProtoInstance985.fieldValue = new MFNode();

ProtoInstance985.fieldValue[0] = fieldValue986;

let fieldValue987 = browser.currentScene.createNode("fieldValue");
fieldValue987.name = "translation";
fieldValue987.value = "-0.06920000165700912 0.02969999983906746 -0.12210000306367874";
ProtoInstance985.fieldValue[1] = fieldValue987;

fieldValue975.children[3] = ProtoInstance985;

ProtoInstance973.fieldValue[1] = fieldValue975;

fieldValue952.children[1] = ProtoInstance973;

ProtoInstance948.fieldValue[3] = fieldValue952;

fieldValue947.children = new MFNode();

fieldValue947.children[0] = ProtoInstance948;

let ProtoInstance988 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance988.name = "Segment";
ProtoInstance988.DEF = "hanim_r_calf";
let fieldValue989 = browser.currentScene.createNode("fieldValue");
fieldValue989.name = "name";
fieldValue989.value = "r_calf";
ProtoInstance988.fieldValue = new MFNode();

ProtoInstance988.fieldValue[0] = fieldValue989;

fieldValue947.children[1] = ProtoInstance988;

ProtoInstance943.fieldValue[3] = fieldValue947;

fieldValue942.children = new MFNode();

fieldValue942.children[0] = ProtoInstance943;

let ProtoInstance990 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance990.name = "Segment";
ProtoInstance990.DEF = "hanim_r_thigh";
let fieldValue991 = browser.currentScene.createNode("fieldValue");
fieldValue991.name = "name";
fieldValue991.value = "r_thigh";
ProtoInstance990.fieldValue = new MFNode();

ProtoInstance990.fieldValue[0] = fieldValue991;

let fieldValue992 = browser.currentScene.createNode("fieldValue");
fieldValue992.name = "children";
let ProtoInstance993 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance993.name = "Site";
ProtoInstance993.DEF = "hanim_r_knee_crease";
let fieldValue994 = browser.currentScene.createNode("fieldValue");
fieldValue994.name = "name";
fieldValue994.value = "r_knee_crease";
ProtoInstance993.fieldValue = new MFNode();

ProtoInstance993.fieldValue[0] = fieldValue994;

let fieldValue995 = browser.currentScene.createNode("fieldValue");
fieldValue995.name = "translation";
fieldValue995.value = "-0.08250000327825546 0.49320000410079956 -0.032600000500679016";
ProtoInstance993.fieldValue[1] = fieldValue995;

fieldValue992.children = new MFNode();

fieldValue992.children[0] = ProtoInstance993;

let ProtoInstance996 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance996.name = "Site";
ProtoInstance996.DEF = "hanim_r_femoral_lateral_epicondyles";
let fieldValue997 = browser.currentScene.createNode("fieldValue");
fieldValue997.name = "name";
fieldValue997.value = "r_femoral_lateral_epicondyles";
ProtoInstance996.fieldValue = new MFNode();

ProtoInstance996.fieldValue[0] = fieldValue997;

let fieldValue998 = browser.currentScene.createNode("fieldValue");
fieldValue998.name = "translation";
fieldValue998.value = "-0.1421000063419342 0.4991999864578247 0.03099999949336052";
ProtoInstance996.fieldValue[1] = fieldValue998;

fieldValue992.children[1] = ProtoInstance996;

let ProtoInstance999 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance999.name = "Site";
ProtoInstance999.DEF = "hanim_r_femoral_medial_epicondyles";
let fieldValue1000 = browser.currentScene.createNode("fieldValue");
fieldValue1000.name = "name";
fieldValue1000.value = "r_femoral_lateral_epicondyles";
ProtoInstance999.fieldValue = new MFNode();

ProtoInstance999.fieldValue[0] = fieldValue1000;

let fieldValue1001 = browser.currentScene.createNode("fieldValue");
fieldValue1001.name = "translation";
fieldValue1001.value = "-0.022099999710917473 0.5013999938964844 0.02889999933540821";
ProtoInstance999.fieldValue[1] = fieldValue1001;

fieldValue992.children[2] = ProtoInstance999;

ProtoInstance990.fieldValue[1] = fieldValue992;

fieldValue942.children[1] = ProtoInstance990;

ProtoInstance938.fieldValue[3] = fieldValue942;

fieldValue873.children[1] = ProtoInstance938;

let ProtoInstance1002 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1002.name = "Segment";
ProtoInstance1002.DEF = "hanim_pelvis";
let fieldValue1003 = browser.currentScene.createNode("fieldValue");
fieldValue1003.name = "name";
fieldValue1003.value = "pelvis";
ProtoInstance1002.fieldValue = new MFNode();

ProtoInstance1002.fieldValue[0] = fieldValue1003;

fieldValue873.children[2] = ProtoInstance1002;

ProtoInstance869.fieldValue[3] = fieldValue873;

fieldValue484.children[1] = ProtoInstance869;

let ProtoInstance1004 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1004.name = "Joint";
ProtoInstance1004.DEF = "hanim_l_hip";
let fieldValue1005 = browser.currentScene.createNode("fieldValue");
fieldValue1005.name = "stiffness";
fieldValue1005.value = "1 1 1";
ProtoInstance1004.fieldValue = new MFNode();

ProtoInstance1004.fieldValue[0] = fieldValue1005;

let fieldValue1006 = browser.currentScene.createNode("fieldValue");
fieldValue1006.name = "name";
fieldValue1006.value = "l_hip";
ProtoInstance1004.fieldValue[1] = fieldValue1006;

let fieldValue1007 = browser.currentScene.createNode("fieldValue");
fieldValue1007.name = "center";
fieldValue1007.value = "0.09610000252723694 0.9124000072479248 -0.00009999999747378752";
ProtoInstance1004.fieldValue[2] = fieldValue1007;

let fieldValue1008 = browser.currentScene.createNode("fieldValue");
fieldValue1008.name = "children";
let ProtoInstance1009 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1009.name = "Joint";
ProtoInstance1009.DEF = "hanim_l_knee";
let fieldValue1010 = browser.currentScene.createNode("fieldValue");
fieldValue1010.name = "stiffness";
fieldValue1010.value = "1 1 1";
ProtoInstance1009.fieldValue = new MFNode();

ProtoInstance1009.fieldValue[0] = fieldValue1010;

let fieldValue1011 = browser.currentScene.createNode("fieldValue");
fieldValue1011.name = "name";
fieldValue1011.value = "l_knee";
ProtoInstance1009.fieldValue[1] = fieldValue1011;

let fieldValue1012 = browser.currentScene.createNode("fieldValue");
fieldValue1012.name = "center";
fieldValue1012.value = "0.10400000214576721 0.48669999837875366 0.030799999833106995";
ProtoInstance1009.fieldValue[2] = fieldValue1012;

let fieldValue1013 = browser.currentScene.createNode("fieldValue");
fieldValue1013.name = "children";
let ProtoInstance1014 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1014.name = "Joint";
ProtoInstance1014.DEF = "hanim_l_talocrural";
let fieldValue1015 = browser.currentScene.createNode("fieldValue");
fieldValue1015.name = "stiffness";
fieldValue1015.value = "1 1 1";
ProtoInstance1014.fieldValue = new MFNode();

ProtoInstance1014.fieldValue[0] = fieldValue1015;

let fieldValue1016 = browser.currentScene.createNode("fieldValue");
fieldValue1016.name = "name";
fieldValue1016.value = "l_talocrural";
ProtoInstance1014.fieldValue[1] = fieldValue1016;

let fieldValue1017 = browser.currentScene.createNode("fieldValue");
fieldValue1017.name = "center";
fieldValue1017.value = "0.11010000109672546 0.06560000032186508 -0.07360000163316727";
ProtoInstance1014.fieldValue[2] = fieldValue1017;

let fieldValue1018 = browser.currentScene.createNode("fieldValue");
fieldValue1018.name = "children";
let ProtoInstance1019 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1019.name = "Joint";
ProtoInstance1019.DEF = "hanim_l_metatarsophalangeal_";
let fieldValue1020 = browser.currentScene.createNode("fieldValue");
fieldValue1020.name = "stiffness";
fieldValue1020.value = "1 1 1";
ProtoInstance1019.fieldValue = new MFNode();

ProtoInstance1019.fieldValue[0] = fieldValue1020;

let fieldValue1021 = browser.currentScene.createNode("fieldValue");
fieldValue1021.name = "name";
fieldValue1021.value = "l_metatarsophalangeal_";
ProtoInstance1019.fieldValue[1] = fieldValue1021;

let fieldValue1022 = browser.currentScene.createNode("fieldValue");
fieldValue1022.name = "center";
fieldValue1022.value = "0.10859999805688858 0.00009999999747378752 0.03680000081658363";
ProtoInstance1019.fieldValue[2] = fieldValue1022;

let fieldValue1023 = browser.currentScene.createNode("fieldValue");
fieldValue1023.name = "children";
let ProtoInstance1024 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1024.name = "Segment";
ProtoInstance1024.DEF = "hanim_l_middistal";
let fieldValue1025 = browser.currentScene.createNode("fieldValue");
fieldValue1025.name = "name";
fieldValue1025.value = "l_middistal";
ProtoInstance1024.fieldValue = new MFNode();

ProtoInstance1024.fieldValue[0] = fieldValue1025;

let fieldValue1026 = browser.currentScene.createNode("fieldValue");
fieldValue1026.name = "children";
let ProtoInstance1027 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1027.name = "Site";
ProtoInstance1027.DEF = "hanim_l_middistal_tip";
let fieldValue1028 = browser.currentScene.createNode("fieldValue");
fieldValue1028.name = "name";
fieldValue1028.value = "l_middistal_tip";
ProtoInstance1027.fieldValue = new MFNode();

ProtoInstance1027.fieldValue[0] = fieldValue1028;

let fieldValue1029 = browser.currentScene.createNode("fieldValue");
fieldValue1029.name = "translation";
fieldValue1029.value = "0.13539999723434448 0.0015999999595806003 0.147599995136261";
ProtoInstance1027.fieldValue[1] = fieldValue1029;

fieldValue1026.children = new MFNode();

fieldValue1026.children[0] = ProtoInstance1027;

let ProtoInstance1030 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1030.name = "Site";
ProtoInstance1030.DEF = "hanim_l_tarsal_interphalangeal_phalanx_5";
let fieldValue1031 = browser.currentScene.createNode("fieldValue");
fieldValue1031.name = "name";
fieldValue1031.value = "l_tarsal_interphalangeal_phalanx_5";
ProtoInstance1030.fieldValue = new MFNode();

ProtoInstance1030.fieldValue[0] = fieldValue1031;

let fieldValue1032 = browser.currentScene.createNode("fieldValue");
fieldValue1032.name = "translation";
fieldValue1032.value = "0.18250000476837158 0.007000000216066837 0.09279999881982803";
ProtoInstance1030.fieldValue[1] = fieldValue1032;

fieldValue1026.children[1] = ProtoInstance1030;

let ProtoInstance1033 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1033.name = "Site";
ProtoInstance1033.DEF = "hanim_l_tarsal_interphalangeal_phalanx_1";
let fieldValue1034 = browser.currentScene.createNode("fieldValue");
fieldValue1034.name = "name";
fieldValue1034.value = "l_tarsal_interphalangeal_phalanx_1";
ProtoInstance1033.fieldValue = new MFNode();

ProtoInstance1033.fieldValue[0] = fieldValue1034;

let fieldValue1035 = browser.currentScene.createNode("fieldValue");
fieldValue1035.name = "translation";
fieldValue1035.value = "0.08160000294446945 0.02319999970495701 0.010599999688565731";
ProtoInstance1033.fieldValue[1] = fieldValue1035;

fieldValue1026.children[2] = ProtoInstance1033;

let ProtoInstance1036 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1036.name = "Site";
ProtoInstance1036.DEF = "hanim_l_tarsal_distal_phalanx_2";
let fieldValue1037 = browser.currentScene.createNode("fieldValue");
fieldValue1037.name = "name";
fieldValue1037.value = "l_tarsal_distal_phalanx_2";
ProtoInstance1036.fieldValue = new MFNode();

ProtoInstance1036.fieldValue[0] = fieldValue1037;

let fieldValue1038 = browser.currentScene.createNode("fieldValue");
fieldValue1038.name = "translation";
fieldValue1038.value = "0.11949999630451202 0.007899999618530273 0.14329999685287476";
ProtoInstance1036.fieldValue[1] = fieldValue1038;

fieldValue1026.children[3] = ProtoInstance1036;

ProtoInstance1024.fieldValue[1] = fieldValue1026;

fieldValue1023.children = new MFNode();

fieldValue1023.children[0] = ProtoInstance1024;

ProtoInstance1019.fieldValue[3] = fieldValue1023;

fieldValue1018.children = new MFNode();

fieldValue1018.children[0] = ProtoInstance1019;

let ProtoInstance1039 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1039.name = "Segment";
ProtoInstance1039.DEF = "hanim_l_hindfoot";
let fieldValue1040 = browser.currentScene.createNode("fieldValue");
fieldValue1040.name = "name";
fieldValue1040.value = "l_hindfoot";
ProtoInstance1039.fieldValue = new MFNode();

ProtoInstance1039.fieldValue[0] = fieldValue1040;

let fieldValue1041 = browser.currentScene.createNode("fieldValue");
fieldValue1041.name = "children";
let ProtoInstance1042 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1042.name = "Site";
ProtoInstance1042.DEF = "hanim_l_lateral_malleolus";
let fieldValue1043 = browser.currentScene.createNode("fieldValue");
fieldValue1043.name = "name";
fieldValue1043.value = "l_lateral_malleolus";
ProtoInstance1042.fieldValue = new MFNode();

ProtoInstance1042.fieldValue[0] = fieldValue1043;

let fieldValue1044 = browser.currentScene.createNode("fieldValue");
fieldValue1044.name = "translation";
fieldValue1044.value = "0.13079999387264252 0.059700001031160355 -0.10320000350475311";
ProtoInstance1042.fieldValue[1] = fieldValue1044;

fieldValue1041.children = new MFNode();

fieldValue1041.children[0] = ProtoInstance1042;

let ProtoInstance1045 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1045.name = "Site";
ProtoInstance1045.DEF = "hanim_l_medial_malleolus";
let fieldValue1046 = browser.currentScene.createNode("fieldValue");
fieldValue1046.name = "name";
fieldValue1046.value = "l_medial_malleolus";
ProtoInstance1045.fieldValue = new MFNode();

ProtoInstance1045.fieldValue[0] = fieldValue1046;

let fieldValue1047 = browser.currentScene.createNode("fieldValue");
fieldValue1047.name = "translation";
fieldValue1047.value = "0.08900000154972076 0.07159999758005142 -0.08810000121593475";
ProtoInstance1045.fieldValue[1] = fieldValue1047;

fieldValue1041.children[1] = ProtoInstance1045;

let ProtoInstance1048 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1048.name = "Site";
ProtoInstance1048.DEF = "hanim_l_sphyrion";
let fieldValue1049 = browser.currentScene.createNode("fieldValue");
fieldValue1049.name = "name";
fieldValue1049.value = "l_sphyrion";
ProtoInstance1048.fieldValue = new MFNode();

ProtoInstance1048.fieldValue[0] = fieldValue1049;

let fieldValue1050 = browser.currentScene.createNode("fieldValue");
fieldValue1050.name = "translation";
fieldValue1050.value = "0.08900000154972076 0.057500001043081284 -0.09430000185966492";
ProtoInstance1048.fieldValue[1] = fieldValue1050;

fieldValue1041.children[2] = ProtoInstance1048;

let ProtoInstance1051 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1051.name = "Site";
ProtoInstance1051.DEF = "hanim_l_calcaneus_posterior";
let fieldValue1052 = browser.currentScene.createNode("fieldValue");
fieldValue1052.name = "name";
fieldValue1052.value = "l_calcaneus_posterior";
ProtoInstance1051.fieldValue = new MFNode();

ProtoInstance1051.fieldValue[0] = fieldValue1052;

let fieldValue1053 = browser.currentScene.createNode("fieldValue");
fieldValue1053.name = "translation";
fieldValue1053.value = "0.09740000218153 0.02590000070631504 -0.11710000038146973";
ProtoInstance1051.fieldValue[1] = fieldValue1053;

fieldValue1041.children[3] = ProtoInstance1051;

ProtoInstance1039.fieldValue[1] = fieldValue1041;

fieldValue1018.children[1] = ProtoInstance1039;

ProtoInstance1014.fieldValue[3] = fieldValue1018;

fieldValue1013.children = new MFNode();

fieldValue1013.children[0] = ProtoInstance1014;

let ProtoInstance1054 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1054.name = "Segment";
ProtoInstance1054.DEF = "hanim_l_calf";
let fieldValue1055 = browser.currentScene.createNode("fieldValue");
fieldValue1055.name = "name";
fieldValue1055.value = "l_calf";
ProtoInstance1054.fieldValue = new MFNode();

ProtoInstance1054.fieldValue[0] = fieldValue1055;

fieldValue1013.children[1] = ProtoInstance1054;

ProtoInstance1009.fieldValue[3] = fieldValue1013;

fieldValue1008.children = new MFNode();

fieldValue1008.children[0] = ProtoInstance1009;

let ProtoInstance1056 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1056.name = "Segment";
ProtoInstance1056.DEF = "hanim_l_thigh";
let fieldValue1057 = browser.currentScene.createNode("fieldValue");
fieldValue1057.name = "name";
fieldValue1057.value = "l_thigh";
ProtoInstance1056.fieldValue = new MFNode();

ProtoInstance1056.fieldValue[0] = fieldValue1057;

let fieldValue1058 = browser.currentScene.createNode("fieldValue");
fieldValue1058.name = "children";
let ProtoInstance1059 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1059.name = "Site";
ProtoInstance1059.DEF = "hanim_l_knee_crease";
let fieldValue1060 = browser.currentScene.createNode("fieldValue");
fieldValue1060.name = "name";
fieldValue1060.value = "l_knee_crease";
ProtoInstance1059.fieldValue = new MFNode();

ProtoInstance1059.fieldValue[0] = fieldValue1060;

let fieldValue1061 = browser.currentScene.createNode("fieldValue");
fieldValue1061.name = "translation";
fieldValue1061.value = "0.09929999709129333 0.48809999227523804 -0.030899999663233757";
ProtoInstance1059.fieldValue[1] = fieldValue1061;

fieldValue1058.children = new MFNode();

fieldValue1058.children[0] = ProtoInstance1059;

let ProtoInstance1062 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1062.name = "Site";
ProtoInstance1062.DEF = "hanim_l_femoral_lateral_epicondyles";
let fieldValue1063 = browser.currentScene.createNode("fieldValue");
fieldValue1063.name = "name";
fieldValue1063.value = "l_femoral_lateral_epicondyles";
ProtoInstance1062.fieldValue = new MFNode();

ProtoInstance1062.fieldValue[0] = fieldValue1063;

let fieldValue1064 = browser.currentScene.createNode("fieldValue");
fieldValue1064.name = "translation";
fieldValue1064.value = "0.1597999930381775 0.4966999888420105 0.02969999983906746";
ProtoInstance1062.fieldValue[1] = fieldValue1064;

fieldValue1058.children[1] = ProtoInstance1062;

let ProtoInstance1065 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1065.name = "Site";
ProtoInstance1065.DEF = "hanim_l_femoral_medial_epicondyles";
let fieldValue1066 = browser.currentScene.createNode("fieldValue");
fieldValue1066.name = "name";
fieldValue1066.value = "l_femoral_lateral_epicondyles";
ProtoInstance1065.fieldValue = new MFNode();

ProtoInstance1065.fieldValue[0] = fieldValue1066;

let fieldValue1067 = browser.currentScene.createNode("fieldValue");
fieldValue1067.name = "translation";
fieldValue1067.value = "0.039799999445676804 0.49459999799728394 0.030300000682473183";
ProtoInstance1065.fieldValue[1] = fieldValue1067;

fieldValue1058.children[2] = ProtoInstance1065;

ProtoInstance1056.fieldValue[1] = fieldValue1058;

fieldValue1008.children[1] = ProtoInstance1056;

ProtoInstance1004.fieldValue[3] = fieldValue1008;

fieldValue484.children[2] = ProtoInstance1004;

let ProtoInstance1068 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1068.name = "Joint";
ProtoInstance1068.DEF = "hanim_l_knee";
let fieldValue1069 = browser.currentScene.createNode("fieldValue");
fieldValue1069.name = "stiffness";
fieldValue1069.value = "1 1 1";
ProtoInstance1068.fieldValue = new MFNode();

ProtoInstance1068.fieldValue[0] = fieldValue1069;

let fieldValue1070 = browser.currentScene.createNode("fieldValue");
fieldValue1070.name = "name";
fieldValue1070.value = "l_knee";
ProtoInstance1068.fieldValue[1] = fieldValue1070;

let fieldValue1071 = browser.currentScene.createNode("fieldValue");
fieldValue1071.name = "center";
fieldValue1071.value = "0.10400000214576721 0.48669999837875366 0.030799999833106995";
ProtoInstance1068.fieldValue[2] = fieldValue1071;

let fieldValue1072 = browser.currentScene.createNode("fieldValue");
fieldValue1072.name = "children";
let ProtoInstance1073 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1073.name = "Joint";
ProtoInstance1073.DEF = "hanim_l_talocrural";
let fieldValue1074 = browser.currentScene.createNode("fieldValue");
fieldValue1074.name = "stiffness";
fieldValue1074.value = "1 1 1";
ProtoInstance1073.fieldValue = new MFNode();

ProtoInstance1073.fieldValue[0] = fieldValue1074;

let fieldValue1075 = browser.currentScene.createNode("fieldValue");
fieldValue1075.name = "name";
fieldValue1075.value = "l_talocrural";
ProtoInstance1073.fieldValue[1] = fieldValue1075;

let fieldValue1076 = browser.currentScene.createNode("fieldValue");
fieldValue1076.name = "center";
fieldValue1076.value = "0.11010000109672546 0.06560000032186508 -0.07360000163316727";
ProtoInstance1073.fieldValue[2] = fieldValue1076;

let fieldValue1077 = browser.currentScene.createNode("fieldValue");
fieldValue1077.name = "children";
let ProtoInstance1078 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1078.name = "Joint";
ProtoInstance1078.DEF = "hanim_l_metatarsophalangeal_";
let fieldValue1079 = browser.currentScene.createNode("fieldValue");
fieldValue1079.name = "stiffness";
fieldValue1079.value = "1 1 1";
ProtoInstance1078.fieldValue = new MFNode();

ProtoInstance1078.fieldValue[0] = fieldValue1079;

let fieldValue1080 = browser.currentScene.createNode("fieldValue");
fieldValue1080.name = "name";
fieldValue1080.value = "l_metatarsophalangeal_";
ProtoInstance1078.fieldValue[1] = fieldValue1080;

let fieldValue1081 = browser.currentScene.createNode("fieldValue");
fieldValue1081.name = "center";
fieldValue1081.value = "0.10859999805688858 0.00009999999747378752 0.03680000081658363";
ProtoInstance1078.fieldValue[2] = fieldValue1081;

let fieldValue1082 = browser.currentScene.createNode("fieldValue");
fieldValue1082.name = "children";
let ProtoInstance1083 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1083.name = "Segment";
ProtoInstance1083.DEF = "hanim_l_middistal";
let fieldValue1084 = browser.currentScene.createNode("fieldValue");
fieldValue1084.name = "name";
fieldValue1084.value = "l_middistal";
ProtoInstance1083.fieldValue = new MFNode();

ProtoInstance1083.fieldValue[0] = fieldValue1084;

let fieldValue1085 = browser.currentScene.createNode("fieldValue");
fieldValue1085.name = "children";
let ProtoInstance1086 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1086.name = "Site";
ProtoInstance1086.DEF = "hanim_l_middistal_tip";
let fieldValue1087 = browser.currentScene.createNode("fieldValue");
fieldValue1087.name = "name";
fieldValue1087.value = "l_middistal_tip";
ProtoInstance1086.fieldValue = new MFNode();

ProtoInstance1086.fieldValue[0] = fieldValue1087;

let fieldValue1088 = browser.currentScene.createNode("fieldValue");
fieldValue1088.name = "translation";
fieldValue1088.value = "0.13539999723434448 0.0015999999595806003 0.147599995136261";
ProtoInstance1086.fieldValue[1] = fieldValue1088;

fieldValue1085.children = new MFNode();

fieldValue1085.children[0] = ProtoInstance1086;

let ProtoInstance1089 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1089.name = "Site";
ProtoInstance1089.DEF = "hanim_l_tarsal_interphalangeal_phalanx_5";
let fieldValue1090 = browser.currentScene.createNode("fieldValue");
fieldValue1090.name = "name";
fieldValue1090.value = "l_tarsal_interphalangeal_phalanx_5";
ProtoInstance1089.fieldValue = new MFNode();

ProtoInstance1089.fieldValue[0] = fieldValue1090;

let fieldValue1091 = browser.currentScene.createNode("fieldValue");
fieldValue1091.name = "translation";
fieldValue1091.value = "0.18250000476837158 0.007000000216066837 0.09279999881982803";
ProtoInstance1089.fieldValue[1] = fieldValue1091;

fieldValue1085.children[1] = ProtoInstance1089;

let ProtoInstance1092 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1092.name = "Site";
ProtoInstance1092.DEF = "hanim_l_tarsal_interphalangeal_phalanx_1";
let fieldValue1093 = browser.currentScene.createNode("fieldValue");
fieldValue1093.name = "name";
fieldValue1093.value = "l_tarsal_interphalangeal_phalanx_1";
ProtoInstance1092.fieldValue = new MFNode();

ProtoInstance1092.fieldValue[0] = fieldValue1093;

let fieldValue1094 = browser.currentScene.createNode("fieldValue");
fieldValue1094.name = "translation";
fieldValue1094.value = "0.08160000294446945 0.02319999970495701 0.010599999688565731";
ProtoInstance1092.fieldValue[1] = fieldValue1094;

fieldValue1085.children[2] = ProtoInstance1092;

let ProtoInstance1095 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1095.name = "Site";
ProtoInstance1095.DEF = "hanim_l_tarsal_distal_phalanx_2";
let fieldValue1096 = browser.currentScene.createNode("fieldValue");
fieldValue1096.name = "name";
fieldValue1096.value = "l_tarsal_distal_phalanx_2";
ProtoInstance1095.fieldValue = new MFNode();

ProtoInstance1095.fieldValue[0] = fieldValue1096;

let fieldValue1097 = browser.currentScene.createNode("fieldValue");
fieldValue1097.name = "translation";
fieldValue1097.value = "0.11949999630451202 0.007899999618530273 0.14329999685287476";
ProtoInstance1095.fieldValue[1] = fieldValue1097;

fieldValue1085.children[3] = ProtoInstance1095;

ProtoInstance1083.fieldValue[1] = fieldValue1085;

fieldValue1082.children = new MFNode();

fieldValue1082.children[0] = ProtoInstance1083;

ProtoInstance1078.fieldValue[3] = fieldValue1082;

fieldValue1077.children = new MFNode();

fieldValue1077.children[0] = ProtoInstance1078;

let ProtoInstance1098 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1098.name = "Segment";
ProtoInstance1098.DEF = "hanim_l_hindfoot";
let fieldValue1099 = browser.currentScene.createNode("fieldValue");
fieldValue1099.name = "name";
fieldValue1099.value = "l_hindfoot";
ProtoInstance1098.fieldValue = new MFNode();

ProtoInstance1098.fieldValue[0] = fieldValue1099;

let fieldValue1100 = browser.currentScene.createNode("fieldValue");
fieldValue1100.name = "children";
let ProtoInstance1101 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1101.name = "Site";
ProtoInstance1101.DEF = "hanim_l_lateral_malleolus";
let fieldValue1102 = browser.currentScene.createNode("fieldValue");
fieldValue1102.name = "name";
fieldValue1102.value = "l_lateral_malleolus";
ProtoInstance1101.fieldValue = new MFNode();

ProtoInstance1101.fieldValue[0] = fieldValue1102;

let fieldValue1103 = browser.currentScene.createNode("fieldValue");
fieldValue1103.name = "translation";
fieldValue1103.value = "0.13079999387264252 0.059700001031160355 -0.10320000350475311";
ProtoInstance1101.fieldValue[1] = fieldValue1103;

fieldValue1100.children = new MFNode();

fieldValue1100.children[0] = ProtoInstance1101;

let ProtoInstance1104 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1104.name = "Site";
ProtoInstance1104.DEF = "hanim_l_medial_malleolus";
let fieldValue1105 = browser.currentScene.createNode("fieldValue");
fieldValue1105.name = "name";
fieldValue1105.value = "l_medial_malleolus";
ProtoInstance1104.fieldValue = new MFNode();

ProtoInstance1104.fieldValue[0] = fieldValue1105;

let fieldValue1106 = browser.currentScene.createNode("fieldValue");
fieldValue1106.name = "translation";
fieldValue1106.value = "0.08900000154972076 0.07159999758005142 -0.08810000121593475";
ProtoInstance1104.fieldValue[1] = fieldValue1106;

fieldValue1100.children[1] = ProtoInstance1104;

let ProtoInstance1107 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1107.name = "Site";
ProtoInstance1107.DEF = "hanim_l_sphyrion";
let fieldValue1108 = browser.currentScene.createNode("fieldValue");
fieldValue1108.name = "name";
fieldValue1108.value = "l_sphyrion";
ProtoInstance1107.fieldValue = new MFNode();

ProtoInstance1107.fieldValue[0] = fieldValue1108;

let fieldValue1109 = browser.currentScene.createNode("fieldValue");
fieldValue1109.name = "translation";
fieldValue1109.value = "0.08900000154972076 0.057500001043081284 -0.09430000185966492";
ProtoInstance1107.fieldValue[1] = fieldValue1109;

fieldValue1100.children[2] = ProtoInstance1107;

let ProtoInstance1110 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1110.name = "Site";
ProtoInstance1110.DEF = "hanim_l_calcaneus_posterior";
let fieldValue1111 = browser.currentScene.createNode("fieldValue");
fieldValue1111.name = "name";
fieldValue1111.value = "l_calcaneus_posterior";
ProtoInstance1110.fieldValue = new MFNode();

ProtoInstance1110.fieldValue[0] = fieldValue1111;

let fieldValue1112 = browser.currentScene.createNode("fieldValue");
fieldValue1112.name = "translation";
fieldValue1112.value = "0.09740000218153 0.02590000070631504 -0.11710000038146973";
ProtoInstance1110.fieldValue[1] = fieldValue1112;

fieldValue1100.children[3] = ProtoInstance1110;

ProtoInstance1098.fieldValue[1] = fieldValue1100;

fieldValue1077.children[1] = ProtoInstance1098;

ProtoInstance1073.fieldValue[3] = fieldValue1077;

fieldValue1072.children = new MFNode();

fieldValue1072.children[0] = ProtoInstance1073;

let ProtoInstance1113 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1113.name = "Segment";
ProtoInstance1113.DEF = "hanim_l_calf";
let fieldValue1114 = browser.currentScene.createNode("fieldValue");
fieldValue1114.name = "name";
fieldValue1114.value = "l_calf";
ProtoInstance1113.fieldValue = new MFNode();

ProtoInstance1113.fieldValue[0] = fieldValue1114;

fieldValue1072.children[1] = ProtoInstance1113;

ProtoInstance1068.fieldValue[3] = fieldValue1072;

fieldValue484.children[3] = ProtoInstance1068;

let ProtoInstance1115 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1115.name = "Joint";
ProtoInstance1115.DEF = "hanim_l_talocrural";
let fieldValue1116 = browser.currentScene.createNode("fieldValue");
fieldValue1116.name = "stiffness";
fieldValue1116.value = "1 1 1";
ProtoInstance1115.fieldValue = new MFNode();

ProtoInstance1115.fieldValue[0] = fieldValue1116;

let fieldValue1117 = browser.currentScene.createNode("fieldValue");
fieldValue1117.name = "name";
fieldValue1117.value = "l_talocrural";
ProtoInstance1115.fieldValue[1] = fieldValue1117;

let fieldValue1118 = browser.currentScene.createNode("fieldValue");
fieldValue1118.name = "center";
fieldValue1118.value = "0.11010000109672546 0.06560000032186508 -0.07360000163316727";
ProtoInstance1115.fieldValue[2] = fieldValue1118;

let fieldValue1119 = browser.currentScene.createNode("fieldValue");
fieldValue1119.name = "children";
let ProtoInstance1120 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1120.name = "Joint";
ProtoInstance1120.DEF = "hanim_l_metatarsophalangeal_";
let fieldValue1121 = browser.currentScene.createNode("fieldValue");
fieldValue1121.name = "stiffness";
fieldValue1121.value = "1 1 1";
ProtoInstance1120.fieldValue = new MFNode();

ProtoInstance1120.fieldValue[0] = fieldValue1121;

let fieldValue1122 = browser.currentScene.createNode("fieldValue");
fieldValue1122.name = "name";
fieldValue1122.value = "l_metatarsophalangeal_";
ProtoInstance1120.fieldValue[1] = fieldValue1122;

let fieldValue1123 = browser.currentScene.createNode("fieldValue");
fieldValue1123.name = "center";
fieldValue1123.value = "0.10859999805688858 0.00009999999747378752 0.03680000081658363";
ProtoInstance1120.fieldValue[2] = fieldValue1123;

let fieldValue1124 = browser.currentScene.createNode("fieldValue");
fieldValue1124.name = "children";
let ProtoInstance1125 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1125.name = "Segment";
ProtoInstance1125.DEF = "hanim_l_middistal";
let fieldValue1126 = browser.currentScene.createNode("fieldValue");
fieldValue1126.name = "name";
fieldValue1126.value = "l_middistal";
ProtoInstance1125.fieldValue = new MFNode();

ProtoInstance1125.fieldValue[0] = fieldValue1126;

let fieldValue1127 = browser.currentScene.createNode("fieldValue");
fieldValue1127.name = "children";
let ProtoInstance1128 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1128.name = "Site";
ProtoInstance1128.DEF = "hanim_l_middistal_tip";
let fieldValue1129 = browser.currentScene.createNode("fieldValue");
fieldValue1129.name = "name";
fieldValue1129.value = "l_middistal_tip";
ProtoInstance1128.fieldValue = new MFNode();

ProtoInstance1128.fieldValue[0] = fieldValue1129;

let fieldValue1130 = browser.currentScene.createNode("fieldValue");
fieldValue1130.name = "translation";
fieldValue1130.value = "0.13539999723434448 0.0015999999595806003 0.147599995136261";
ProtoInstance1128.fieldValue[1] = fieldValue1130;

fieldValue1127.children = new MFNode();

fieldValue1127.children[0] = ProtoInstance1128;

let ProtoInstance1131 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1131.name = "Site";
ProtoInstance1131.DEF = "hanim_l_tarsal_interphalangeal_phalanx_5";
let fieldValue1132 = browser.currentScene.createNode("fieldValue");
fieldValue1132.name = "name";
fieldValue1132.value = "l_tarsal_interphalangeal_phalanx_5";
ProtoInstance1131.fieldValue = new MFNode();

ProtoInstance1131.fieldValue[0] = fieldValue1132;

let fieldValue1133 = browser.currentScene.createNode("fieldValue");
fieldValue1133.name = "translation";
fieldValue1133.value = "0.18250000476837158 0.007000000216066837 0.09279999881982803";
ProtoInstance1131.fieldValue[1] = fieldValue1133;

fieldValue1127.children[1] = ProtoInstance1131;

let ProtoInstance1134 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1134.name = "Site";
ProtoInstance1134.DEF = "hanim_l_tarsal_interphalangeal_phalanx_1";
let fieldValue1135 = browser.currentScene.createNode("fieldValue");
fieldValue1135.name = "name";
fieldValue1135.value = "l_tarsal_interphalangeal_phalanx_1";
ProtoInstance1134.fieldValue = new MFNode();

ProtoInstance1134.fieldValue[0] = fieldValue1135;

let fieldValue1136 = browser.currentScene.createNode("fieldValue");
fieldValue1136.name = "translation";
fieldValue1136.value = "0.08160000294446945 0.02319999970495701 0.010599999688565731";
ProtoInstance1134.fieldValue[1] = fieldValue1136;

fieldValue1127.children[2] = ProtoInstance1134;

let ProtoInstance1137 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1137.name = "Site";
ProtoInstance1137.DEF = "hanim_l_tarsal_distal_phalanx_2";
let fieldValue1138 = browser.currentScene.createNode("fieldValue");
fieldValue1138.name = "name";
fieldValue1138.value = "l_tarsal_distal_phalanx_2";
ProtoInstance1137.fieldValue = new MFNode();

ProtoInstance1137.fieldValue[0] = fieldValue1138;

let fieldValue1139 = browser.currentScene.createNode("fieldValue");
fieldValue1139.name = "translation";
fieldValue1139.value = "0.11949999630451202 0.007899999618530273 0.14329999685287476";
ProtoInstance1137.fieldValue[1] = fieldValue1139;

fieldValue1127.children[3] = ProtoInstance1137;

ProtoInstance1125.fieldValue[1] = fieldValue1127;

fieldValue1124.children = new MFNode();

fieldValue1124.children[0] = ProtoInstance1125;

ProtoInstance1120.fieldValue[3] = fieldValue1124;

fieldValue1119.children = new MFNode();

fieldValue1119.children[0] = ProtoInstance1120;

let ProtoInstance1140 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1140.name = "Segment";
ProtoInstance1140.DEF = "hanim_l_hindfoot";
let fieldValue1141 = browser.currentScene.createNode("fieldValue");
fieldValue1141.name = "name";
fieldValue1141.value = "l_hindfoot";
ProtoInstance1140.fieldValue = new MFNode();

ProtoInstance1140.fieldValue[0] = fieldValue1141;

let fieldValue1142 = browser.currentScene.createNode("fieldValue");
fieldValue1142.name = "children";
let ProtoInstance1143 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1143.name = "Site";
ProtoInstance1143.DEF = "hanim_l_lateral_malleolus";
let fieldValue1144 = browser.currentScene.createNode("fieldValue");
fieldValue1144.name = "name";
fieldValue1144.value = "l_lateral_malleolus";
ProtoInstance1143.fieldValue = new MFNode();

ProtoInstance1143.fieldValue[0] = fieldValue1144;

let fieldValue1145 = browser.currentScene.createNode("fieldValue");
fieldValue1145.name = "translation";
fieldValue1145.value = "0.13079999387264252 0.059700001031160355 -0.10320000350475311";
ProtoInstance1143.fieldValue[1] = fieldValue1145;

fieldValue1142.children = new MFNode();

fieldValue1142.children[0] = ProtoInstance1143;

let ProtoInstance1146 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1146.name = "Site";
ProtoInstance1146.DEF = "hanim_l_medial_malleolus";
let fieldValue1147 = browser.currentScene.createNode("fieldValue");
fieldValue1147.name = "name";
fieldValue1147.value = "l_medial_malleolus";
ProtoInstance1146.fieldValue = new MFNode();

ProtoInstance1146.fieldValue[0] = fieldValue1147;

let fieldValue1148 = browser.currentScene.createNode("fieldValue");
fieldValue1148.name = "translation";
fieldValue1148.value = "0.08900000154972076 0.07159999758005142 -0.08810000121593475";
ProtoInstance1146.fieldValue[1] = fieldValue1148;

fieldValue1142.children[1] = ProtoInstance1146;

let ProtoInstance1149 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1149.name = "Site";
ProtoInstance1149.DEF = "hanim_l_sphyrion";
let fieldValue1150 = browser.currentScene.createNode("fieldValue");
fieldValue1150.name = "name";
fieldValue1150.value = "l_sphyrion";
ProtoInstance1149.fieldValue = new MFNode();

ProtoInstance1149.fieldValue[0] = fieldValue1150;

let fieldValue1151 = browser.currentScene.createNode("fieldValue");
fieldValue1151.name = "translation";
fieldValue1151.value = "0.08900000154972076 0.057500001043081284 -0.09430000185966492";
ProtoInstance1149.fieldValue[1] = fieldValue1151;

fieldValue1142.children[2] = ProtoInstance1149;

let ProtoInstance1152 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1152.name = "Site";
ProtoInstance1152.DEF = "hanim_l_calcaneus_posterior";
let fieldValue1153 = browser.currentScene.createNode("fieldValue");
fieldValue1153.name = "name";
fieldValue1153.value = "l_calcaneus_posterior";
ProtoInstance1152.fieldValue = new MFNode();

ProtoInstance1152.fieldValue[0] = fieldValue1153;

let fieldValue1154 = browser.currentScene.createNode("fieldValue");
fieldValue1154.name = "translation";
fieldValue1154.value = "0.09740000218153 0.02590000070631504 -0.11710000038146973";
ProtoInstance1152.fieldValue[1] = fieldValue1154;

fieldValue1142.children[3] = ProtoInstance1152;

ProtoInstance1140.fieldValue[1] = fieldValue1142;

fieldValue1119.children[1] = ProtoInstance1140;

ProtoInstance1115.fieldValue[3] = fieldValue1119;

fieldValue484.children[4] = ProtoInstance1115;

let ProtoInstance1155 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1155.name = "Joint";
ProtoInstance1155.DEF = "hanim_l_metatarsophalangeal_";
let fieldValue1156 = browser.currentScene.createNode("fieldValue");
fieldValue1156.name = "stiffness";
fieldValue1156.value = "1 1 1";
ProtoInstance1155.fieldValue = new MFNode();

ProtoInstance1155.fieldValue[0] = fieldValue1156;

let fieldValue1157 = browser.currentScene.createNode("fieldValue");
fieldValue1157.name = "name";
fieldValue1157.value = "l_metatarsophalangeal_";
ProtoInstance1155.fieldValue[1] = fieldValue1157;

let fieldValue1158 = browser.currentScene.createNode("fieldValue");
fieldValue1158.name = "center";
fieldValue1158.value = "0.10859999805688858 0.00009999999747378752 0.03680000081658363";
ProtoInstance1155.fieldValue[2] = fieldValue1158;

let fieldValue1159 = browser.currentScene.createNode("fieldValue");
fieldValue1159.name = "children";
let ProtoInstance1160 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1160.name = "Segment";
ProtoInstance1160.DEF = "hanim_l_middistal";
let fieldValue1161 = browser.currentScene.createNode("fieldValue");
fieldValue1161.name = "name";
fieldValue1161.value = "l_middistal";
ProtoInstance1160.fieldValue = new MFNode();

ProtoInstance1160.fieldValue[0] = fieldValue1161;

let fieldValue1162 = browser.currentScene.createNode("fieldValue");
fieldValue1162.name = "children";
let ProtoInstance1163 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1163.name = "Site";
ProtoInstance1163.DEF = "hanim_l_middistal_tip";
let fieldValue1164 = browser.currentScene.createNode("fieldValue");
fieldValue1164.name = "name";
fieldValue1164.value = "l_middistal_tip";
ProtoInstance1163.fieldValue = new MFNode();

ProtoInstance1163.fieldValue[0] = fieldValue1164;

let fieldValue1165 = browser.currentScene.createNode("fieldValue");
fieldValue1165.name = "translation";
fieldValue1165.value = "0.13539999723434448 0.0015999999595806003 0.147599995136261";
ProtoInstance1163.fieldValue[1] = fieldValue1165;

fieldValue1162.children = new MFNode();

fieldValue1162.children[0] = ProtoInstance1163;

let ProtoInstance1166 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1166.name = "Site";
ProtoInstance1166.DEF = "hanim_l_tarsal_interphalangeal_phalanx_5";
let fieldValue1167 = browser.currentScene.createNode("fieldValue");
fieldValue1167.name = "name";
fieldValue1167.value = "l_tarsal_interphalangeal_phalanx_5";
ProtoInstance1166.fieldValue = new MFNode();

ProtoInstance1166.fieldValue[0] = fieldValue1167;

let fieldValue1168 = browser.currentScene.createNode("fieldValue");
fieldValue1168.name = "translation";
fieldValue1168.value = "0.18250000476837158 0.007000000216066837 0.09279999881982803";
ProtoInstance1166.fieldValue[1] = fieldValue1168;

fieldValue1162.children[1] = ProtoInstance1166;

let ProtoInstance1169 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1169.name = "Site";
ProtoInstance1169.DEF = "hanim_l_tarsal_interphalangeal_phalanx_1";
let fieldValue1170 = browser.currentScene.createNode("fieldValue");
fieldValue1170.name = "name";
fieldValue1170.value = "l_tarsal_interphalangeal_phalanx_1";
ProtoInstance1169.fieldValue = new MFNode();

ProtoInstance1169.fieldValue[0] = fieldValue1170;

let fieldValue1171 = browser.currentScene.createNode("fieldValue");
fieldValue1171.name = "translation";
fieldValue1171.value = "0.08160000294446945 0.02319999970495701 0.010599999688565731";
ProtoInstance1169.fieldValue[1] = fieldValue1171;

fieldValue1162.children[2] = ProtoInstance1169;

let ProtoInstance1172 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1172.name = "Site";
ProtoInstance1172.DEF = "hanim_l_tarsal_distal_phalanx_2";
let fieldValue1173 = browser.currentScene.createNode("fieldValue");
fieldValue1173.name = "name";
fieldValue1173.value = "l_tarsal_distal_phalanx_2";
ProtoInstance1172.fieldValue = new MFNode();

ProtoInstance1172.fieldValue[0] = fieldValue1173;

let fieldValue1174 = browser.currentScene.createNode("fieldValue");
fieldValue1174.name = "translation";
fieldValue1174.value = "0.11949999630451202 0.007899999618530273 0.14329999685287476";
ProtoInstance1172.fieldValue[1] = fieldValue1174;

fieldValue1162.children[3] = ProtoInstance1172;

ProtoInstance1160.fieldValue[1] = fieldValue1162;

fieldValue1159.children = new MFNode();

fieldValue1159.children[0] = ProtoInstance1160;

ProtoInstance1155.fieldValue[3] = fieldValue1159;

fieldValue484.children[5] = ProtoInstance1155;

let ProtoInstance1175 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1175.name = "Joint";
ProtoInstance1175.DEF = "hanim_r_hip";
let fieldValue1176 = browser.currentScene.createNode("fieldValue");
fieldValue1176.name = "stiffness";
fieldValue1176.value = "1 1 1";
ProtoInstance1175.fieldValue = new MFNode();

ProtoInstance1175.fieldValue[0] = fieldValue1176;

let fieldValue1177 = browser.currentScene.createNode("fieldValue");
fieldValue1177.name = "name";
fieldValue1177.value = "r_hip";
ProtoInstance1175.fieldValue[1] = fieldValue1177;

let fieldValue1178 = browser.currentScene.createNode("fieldValue");
fieldValue1178.name = "center";
fieldValue1178.value = "-0.0949999988079071 0.9171000123023987 0.002899999963119626";
ProtoInstance1175.fieldValue[2] = fieldValue1178;

let fieldValue1179 = browser.currentScene.createNode("fieldValue");
fieldValue1179.name = "children";
let ProtoInstance1180 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1180.name = "Joint";
ProtoInstance1180.DEF = "hanim_r_knee";
let fieldValue1181 = browser.currentScene.createNode("fieldValue");
fieldValue1181.name = "stiffness";
fieldValue1181.value = "1 1 1";
ProtoInstance1180.fieldValue = new MFNode();

ProtoInstance1180.fieldValue[0] = fieldValue1181;

let fieldValue1182 = browser.currentScene.createNode("fieldValue");
fieldValue1182.name = "name";
fieldValue1182.value = "r_knee";
ProtoInstance1180.fieldValue[1] = fieldValue1182;

let fieldValue1183 = browser.currentScene.createNode("fieldValue");
fieldValue1183.name = "center";
fieldValue1183.value = "-0.08669999986886978 0.49129998683929443 0.03180000185966492";
ProtoInstance1180.fieldValue[2] = fieldValue1183;

let fieldValue1184 = browser.currentScene.createNode("fieldValue");
fieldValue1184.name = "children";
let ProtoInstance1185 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1185.name = "Joint";
ProtoInstance1185.DEF = "hanim_r_talocrural";
let fieldValue1186 = browser.currentScene.createNode("fieldValue");
fieldValue1186.name = "stiffness";
fieldValue1186.value = "1 1 1";
ProtoInstance1185.fieldValue = new MFNode();

ProtoInstance1185.fieldValue[0] = fieldValue1186;

let fieldValue1187 = browser.currentScene.createNode("fieldValue");
fieldValue1187.name = "name";
fieldValue1187.value = "r_talocrural";
ProtoInstance1185.fieldValue[1] = fieldValue1187;

let fieldValue1188 = browser.currentScene.createNode("fieldValue");
fieldValue1188.name = "center";
fieldValue1188.value = "-0.08009999990463257 0.07119999825954437 -0.07660000026226044";
ProtoInstance1185.fieldValue[2] = fieldValue1188;

let fieldValue1189 = browser.currentScene.createNode("fieldValue");
fieldValue1189.name = "children";
let ProtoInstance1190 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1190.name = "Joint";
ProtoInstance1190.DEF = "hanim_r_metatarsophalangeal_";
let fieldValue1191 = browser.currentScene.createNode("fieldValue");
fieldValue1191.name = "stiffness";
fieldValue1191.value = "1 1 1";
ProtoInstance1190.fieldValue = new MFNode();

ProtoInstance1190.fieldValue[0] = fieldValue1191;

let fieldValue1192 = browser.currentScene.createNode("fieldValue");
fieldValue1192.name = "name";
fieldValue1192.value = "r_metatarsophalangeal_";
ProtoInstance1190.fieldValue[1] = fieldValue1192;

let fieldValue1193 = browser.currentScene.createNode("fieldValue");
fieldValue1193.name = "center";
fieldValue1193.value = "-0.08009999990463257 0 0.03680000081658363";
ProtoInstance1190.fieldValue[2] = fieldValue1193;

let fieldValue1194 = browser.currentScene.createNode("fieldValue");
fieldValue1194.name = "children";
let ProtoInstance1195 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1195.name = "Segment";
ProtoInstance1195.DEF = "hanim_r_middistal";
let fieldValue1196 = browser.currentScene.createNode("fieldValue");
fieldValue1196.name = "name";
fieldValue1196.value = "r_middistal";
ProtoInstance1195.fieldValue = new MFNode();

ProtoInstance1195.fieldValue[0] = fieldValue1196;

let fieldValue1197 = browser.currentScene.createNode("fieldValue");
fieldValue1197.name = "children";
let ProtoInstance1198 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1198.name = "Site";
ProtoInstance1198.DEF = "hanim_r_middistal_tip";
let fieldValue1199 = browser.currentScene.createNode("fieldValue");
fieldValue1199.name = "name";
fieldValue1199.value = "r_middistal_tip";
ProtoInstance1198.fieldValue = new MFNode();

ProtoInstance1198.fieldValue[0] = fieldValue1199;

let fieldValue1200 = browser.currentScene.createNode("fieldValue");
fieldValue1200.name = "translation";
fieldValue1200.value = "-0.10429999977350235 -0.022700000554323196 0.14499999582767487";
ProtoInstance1198.fieldValue[1] = fieldValue1200;

fieldValue1197.children = new MFNode();

fieldValue1197.children[0] = ProtoInstance1198;

let ProtoInstance1201 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1201.name = "Site";
ProtoInstance1201.DEF = "hanim_r_tarsal_interphalangeal_phalanx_5";
let fieldValue1202 = browser.currentScene.createNode("fieldValue");
fieldValue1202.name = "name";
fieldValue1202.value = "r_tarsal_interphalangeal_phalanx_5";
ProtoInstance1201.fieldValue = new MFNode();

ProtoInstance1201.fieldValue[0] = fieldValue1202;

let fieldValue1203 = browser.currentScene.createNode("fieldValue");
fieldValue1203.name = "translation";
fieldValue1203.value = "-0.15230000019073486 0.016599999740719795 0.08950000256299973";
ProtoInstance1201.fieldValue[1] = fieldValue1203;

fieldValue1197.children[1] = ProtoInstance1201;

let ProtoInstance1204 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1204.name = "Site";
ProtoInstance1204.DEF = "hanim_r_tarsal_interphalangeal_phalanx_1";
let fieldValue1205 = browser.currentScene.createNode("fieldValue");
fieldValue1205.name = "name";
fieldValue1205.value = "r_tarsal_interphalangeal_phalanx_1";
ProtoInstance1204.fieldValue = new MFNode();

ProtoInstance1204.fieldValue[0] = fieldValue1205;

let fieldValue1206 = browser.currentScene.createNode("fieldValue");
fieldValue1206.name = "translation";
fieldValue1206.value = "-0.05209999904036522 0.026000000536441803 0.01269999984651804";
ProtoInstance1204.fieldValue[1] = fieldValue1206;

fieldValue1197.children[2] = ProtoInstance1204;

let ProtoInstance1207 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1207.name = "Site";
ProtoInstance1207.DEF = "hanim_r_tarsal_distal_phalanx_2";
let fieldValue1208 = browser.currentScene.createNode("fieldValue");
fieldValue1208.name = "name";
fieldValue1208.value = "r_tarsal_distal_phalanx_2";
ProtoInstance1207.fieldValue = new MFNode();

ProtoInstance1207.fieldValue[0] = fieldValue1208;

let fieldValue1209 = browser.currentScene.createNode("fieldValue");
fieldValue1209.name = "translation";
fieldValue1209.value = "-0.08829999715089798 0.013399999588727951 0.13830000162124634";
ProtoInstance1207.fieldValue[1] = fieldValue1209;

fieldValue1197.children[3] = ProtoInstance1207;

ProtoInstance1195.fieldValue[1] = fieldValue1197;

fieldValue1194.children = new MFNode();

fieldValue1194.children[0] = ProtoInstance1195;

ProtoInstance1190.fieldValue[3] = fieldValue1194;

fieldValue1189.children = new MFNode();

fieldValue1189.children[0] = ProtoInstance1190;

let ProtoInstance1210 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1210.name = "Segment";
ProtoInstance1210.DEF = "hanim_r_hindfoot";
let fieldValue1211 = browser.currentScene.createNode("fieldValue");
fieldValue1211.name = "name";
fieldValue1211.value = "r_hindfoot";
ProtoInstance1210.fieldValue = new MFNode();

ProtoInstance1210.fieldValue[0] = fieldValue1211;

let fieldValue1212 = browser.currentScene.createNode("fieldValue");
fieldValue1212.name = "children";
let ProtoInstance1213 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1213.name = "Site";
ProtoInstance1213.DEF = "hanim_r_lateral_malleolus";
let fieldValue1214 = browser.currentScene.createNode("fieldValue");
fieldValue1214.name = "name";
fieldValue1214.value = "r_lateral_malleolus";
ProtoInstance1213.fieldValue = new MFNode();

ProtoInstance1213.fieldValue[0] = fieldValue1214;

let fieldValue1215 = browser.currentScene.createNode("fieldValue");
fieldValue1215.name = "translation";
fieldValue1215.value = "-0.1005999967455864 0.0658000037074089 -0.10750000178813934";
ProtoInstance1213.fieldValue[1] = fieldValue1215;

fieldValue1212.children = new MFNode();

fieldValue1212.children[0] = ProtoInstance1213;

let ProtoInstance1216 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1216.name = "Site";
ProtoInstance1216.DEF = "hanim_r_medial_malleolus";
let fieldValue1217 = browser.currentScene.createNode("fieldValue");
fieldValue1217.name = "name";
fieldValue1217.value = "r_medial_malleolus";
ProtoInstance1216.fieldValue = new MFNode();

ProtoInstance1216.fieldValue[0] = fieldValue1217;

let fieldValue1218 = browser.currentScene.createNode("fieldValue");
fieldValue1218.name = "translation";
fieldValue1218.value = "-0.05909999832510948 0.07599999755620956 -0.09279999881982803";
ProtoInstance1216.fieldValue[1] = fieldValue1218;

fieldValue1212.children[1] = ProtoInstance1216;

let ProtoInstance1219 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1219.name = "Site";
ProtoInstance1219.DEF = "hanim_r_sphyrion";
let fieldValue1220 = browser.currentScene.createNode("fieldValue");
fieldValue1220.name = "name";
fieldValue1220.value = "r_sphyrion";
ProtoInstance1219.fieldValue = new MFNode();

ProtoInstance1219.fieldValue[0] = fieldValue1220;

let fieldValue1221 = browser.currentScene.createNode("fieldValue");
fieldValue1221.name = "translation";
fieldValue1221.value = "-0.06030000001192093 0.061000000685453415 -0.10019999742507935";
ProtoInstance1219.fieldValue[1] = fieldValue1221;

fieldValue1212.children[2] = ProtoInstance1219;

let ProtoInstance1222 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1222.name = "Site";
ProtoInstance1222.DEF = "hanim_r_calcaneus_posterior";
let fieldValue1223 = browser.currentScene.createNode("fieldValue");
fieldValue1223.name = "name";
fieldValue1223.value = "r_calcaneus_posterior";
ProtoInstance1222.fieldValue = new MFNode();

ProtoInstance1222.fieldValue[0] = fieldValue1223;

let fieldValue1224 = browser.currentScene.createNode("fieldValue");
fieldValue1224.name = "translation";
fieldValue1224.value = "-0.06920000165700912 0.02969999983906746 -0.12210000306367874";
ProtoInstance1222.fieldValue[1] = fieldValue1224;

fieldValue1212.children[3] = ProtoInstance1222;

ProtoInstance1210.fieldValue[1] = fieldValue1212;

fieldValue1189.children[1] = ProtoInstance1210;

ProtoInstance1185.fieldValue[3] = fieldValue1189;

fieldValue1184.children = new MFNode();

fieldValue1184.children[0] = ProtoInstance1185;

let ProtoInstance1225 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1225.name = "Segment";
ProtoInstance1225.DEF = "hanim_r_calf";
let fieldValue1226 = browser.currentScene.createNode("fieldValue");
fieldValue1226.name = "name";
fieldValue1226.value = "r_calf";
ProtoInstance1225.fieldValue = new MFNode();

ProtoInstance1225.fieldValue[0] = fieldValue1226;

fieldValue1184.children[1] = ProtoInstance1225;

ProtoInstance1180.fieldValue[3] = fieldValue1184;

fieldValue1179.children = new MFNode();

fieldValue1179.children[0] = ProtoInstance1180;

let ProtoInstance1227 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1227.name = "Segment";
ProtoInstance1227.DEF = "hanim_r_thigh";
let fieldValue1228 = browser.currentScene.createNode("fieldValue");
fieldValue1228.name = "name";
fieldValue1228.value = "r_thigh";
ProtoInstance1227.fieldValue = new MFNode();

ProtoInstance1227.fieldValue[0] = fieldValue1228;

let fieldValue1229 = browser.currentScene.createNode("fieldValue");
fieldValue1229.name = "children";
let ProtoInstance1230 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1230.name = "Site";
ProtoInstance1230.DEF = "hanim_r_knee_crease";
let fieldValue1231 = browser.currentScene.createNode("fieldValue");
fieldValue1231.name = "name";
fieldValue1231.value = "r_knee_crease";
ProtoInstance1230.fieldValue = new MFNode();

ProtoInstance1230.fieldValue[0] = fieldValue1231;

let fieldValue1232 = browser.currentScene.createNode("fieldValue");
fieldValue1232.name = "translation";
fieldValue1232.value = "-0.08250000327825546 0.49320000410079956 -0.032600000500679016";
ProtoInstance1230.fieldValue[1] = fieldValue1232;

fieldValue1229.children = new MFNode();

fieldValue1229.children[0] = ProtoInstance1230;

let ProtoInstance1233 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1233.name = "Site";
ProtoInstance1233.DEF = "hanim_r_femoral_lateral_epicondyles";
let fieldValue1234 = browser.currentScene.createNode("fieldValue");
fieldValue1234.name = "name";
fieldValue1234.value = "r_femoral_lateral_epicondyles";
ProtoInstance1233.fieldValue = new MFNode();

ProtoInstance1233.fieldValue[0] = fieldValue1234;

let fieldValue1235 = browser.currentScene.createNode("fieldValue");
fieldValue1235.name = "translation";
fieldValue1235.value = "-0.1421000063419342 0.4991999864578247 0.03099999949336052";
ProtoInstance1233.fieldValue[1] = fieldValue1235;

fieldValue1229.children[1] = ProtoInstance1233;

let ProtoInstance1236 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1236.name = "Site";
ProtoInstance1236.DEF = "hanim_r_femoral_medial_epicondyles";
let fieldValue1237 = browser.currentScene.createNode("fieldValue");
fieldValue1237.name = "name";
fieldValue1237.value = "r_femoral_lateral_epicondyles";
ProtoInstance1236.fieldValue = new MFNode();

ProtoInstance1236.fieldValue[0] = fieldValue1237;

let fieldValue1238 = browser.currentScene.createNode("fieldValue");
fieldValue1238.name = "translation";
fieldValue1238.value = "-0.022099999710917473 0.5013999938964844 0.02889999933540821";
ProtoInstance1236.fieldValue[1] = fieldValue1238;

fieldValue1229.children[2] = ProtoInstance1236;

ProtoInstance1227.fieldValue[1] = fieldValue1229;

fieldValue1179.children[1] = ProtoInstance1227;

ProtoInstance1175.fieldValue[3] = fieldValue1179;

fieldValue484.children[6] = ProtoInstance1175;

let ProtoInstance1239 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1239.name = "Joint";
ProtoInstance1239.DEF = "hanim_r_knee";
let fieldValue1240 = browser.currentScene.createNode("fieldValue");
fieldValue1240.name = "stiffness";
fieldValue1240.value = "1 1 1";
ProtoInstance1239.fieldValue = new MFNode();

ProtoInstance1239.fieldValue[0] = fieldValue1240;

let fieldValue1241 = browser.currentScene.createNode("fieldValue");
fieldValue1241.name = "name";
fieldValue1241.value = "r_knee";
ProtoInstance1239.fieldValue[1] = fieldValue1241;

let fieldValue1242 = browser.currentScene.createNode("fieldValue");
fieldValue1242.name = "center";
fieldValue1242.value = "-0.08669999986886978 0.49129998683929443 0.03180000185966492";
ProtoInstance1239.fieldValue[2] = fieldValue1242;

let fieldValue1243 = browser.currentScene.createNode("fieldValue");
fieldValue1243.name = "children";
let ProtoInstance1244 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1244.name = "Joint";
ProtoInstance1244.DEF = "hanim_r_talocrural";
let fieldValue1245 = browser.currentScene.createNode("fieldValue");
fieldValue1245.name = "stiffness";
fieldValue1245.value = "1 1 1";
ProtoInstance1244.fieldValue = new MFNode();

ProtoInstance1244.fieldValue[0] = fieldValue1245;

let fieldValue1246 = browser.currentScene.createNode("fieldValue");
fieldValue1246.name = "name";
fieldValue1246.value = "r_talocrural";
ProtoInstance1244.fieldValue[1] = fieldValue1246;

let fieldValue1247 = browser.currentScene.createNode("fieldValue");
fieldValue1247.name = "center";
fieldValue1247.value = "-0.08009999990463257 0.07119999825954437 -0.07660000026226044";
ProtoInstance1244.fieldValue[2] = fieldValue1247;

let fieldValue1248 = browser.currentScene.createNode("fieldValue");
fieldValue1248.name = "children";
let ProtoInstance1249 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1249.name = "Joint";
ProtoInstance1249.DEF = "hanim_r_metatarsophalangeal_";
let fieldValue1250 = browser.currentScene.createNode("fieldValue");
fieldValue1250.name = "stiffness";
fieldValue1250.value = "1 1 1";
ProtoInstance1249.fieldValue = new MFNode();

ProtoInstance1249.fieldValue[0] = fieldValue1250;

let fieldValue1251 = browser.currentScene.createNode("fieldValue");
fieldValue1251.name = "name";
fieldValue1251.value = "r_metatarsophalangeal_";
ProtoInstance1249.fieldValue[1] = fieldValue1251;

let fieldValue1252 = browser.currentScene.createNode("fieldValue");
fieldValue1252.name = "center";
fieldValue1252.value = "-0.08009999990463257 0 0.03680000081658363";
ProtoInstance1249.fieldValue[2] = fieldValue1252;

let fieldValue1253 = browser.currentScene.createNode("fieldValue");
fieldValue1253.name = "children";
let ProtoInstance1254 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1254.name = "Segment";
ProtoInstance1254.DEF = "hanim_r_middistal";
let fieldValue1255 = browser.currentScene.createNode("fieldValue");
fieldValue1255.name = "name";
fieldValue1255.value = "r_middistal";
ProtoInstance1254.fieldValue = new MFNode();

ProtoInstance1254.fieldValue[0] = fieldValue1255;

let fieldValue1256 = browser.currentScene.createNode("fieldValue");
fieldValue1256.name = "children";
let ProtoInstance1257 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1257.name = "Site";
ProtoInstance1257.DEF = "hanim_r_middistal_tip";
let fieldValue1258 = browser.currentScene.createNode("fieldValue");
fieldValue1258.name = "name";
fieldValue1258.value = "r_middistal_tip";
ProtoInstance1257.fieldValue = new MFNode();

ProtoInstance1257.fieldValue[0] = fieldValue1258;

let fieldValue1259 = browser.currentScene.createNode("fieldValue");
fieldValue1259.name = "translation";
fieldValue1259.value = "-0.10429999977350235 -0.022700000554323196 0.14499999582767487";
ProtoInstance1257.fieldValue[1] = fieldValue1259;

fieldValue1256.children = new MFNode();

fieldValue1256.children[0] = ProtoInstance1257;

let ProtoInstance1260 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1260.name = "Site";
ProtoInstance1260.DEF = "hanim_r_tarsal_interphalangeal_phalanx_5";
let fieldValue1261 = browser.currentScene.createNode("fieldValue");
fieldValue1261.name = "name";
fieldValue1261.value = "r_tarsal_interphalangeal_phalanx_5";
ProtoInstance1260.fieldValue = new MFNode();

ProtoInstance1260.fieldValue[0] = fieldValue1261;

let fieldValue1262 = browser.currentScene.createNode("fieldValue");
fieldValue1262.name = "translation";
fieldValue1262.value = "-0.15230000019073486 0.016599999740719795 0.08950000256299973";
ProtoInstance1260.fieldValue[1] = fieldValue1262;

fieldValue1256.children[1] = ProtoInstance1260;

let ProtoInstance1263 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1263.name = "Site";
ProtoInstance1263.DEF = "hanim_r_tarsal_interphalangeal_phalanx_1";
let fieldValue1264 = browser.currentScene.createNode("fieldValue");
fieldValue1264.name = "name";
fieldValue1264.value = "r_tarsal_interphalangeal_phalanx_1";
ProtoInstance1263.fieldValue = new MFNode();

ProtoInstance1263.fieldValue[0] = fieldValue1264;

let fieldValue1265 = browser.currentScene.createNode("fieldValue");
fieldValue1265.name = "translation";
fieldValue1265.value = "-0.05209999904036522 0.026000000536441803 0.01269999984651804";
ProtoInstance1263.fieldValue[1] = fieldValue1265;

fieldValue1256.children[2] = ProtoInstance1263;

let ProtoInstance1266 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1266.name = "Site";
ProtoInstance1266.DEF = "hanim_r_tarsal_distal_phalanx_2";
let fieldValue1267 = browser.currentScene.createNode("fieldValue");
fieldValue1267.name = "name";
fieldValue1267.value = "r_tarsal_distal_phalanx_2";
ProtoInstance1266.fieldValue = new MFNode();

ProtoInstance1266.fieldValue[0] = fieldValue1267;

let fieldValue1268 = browser.currentScene.createNode("fieldValue");
fieldValue1268.name = "translation";
fieldValue1268.value = "-0.08829999715089798 0.013399999588727951 0.13830000162124634";
ProtoInstance1266.fieldValue[1] = fieldValue1268;

fieldValue1256.children[3] = ProtoInstance1266;

ProtoInstance1254.fieldValue[1] = fieldValue1256;

fieldValue1253.children = new MFNode();

fieldValue1253.children[0] = ProtoInstance1254;

ProtoInstance1249.fieldValue[3] = fieldValue1253;

fieldValue1248.children = new MFNode();

fieldValue1248.children[0] = ProtoInstance1249;

let ProtoInstance1269 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1269.name = "Segment";
ProtoInstance1269.DEF = "hanim_r_hindfoot";
let fieldValue1270 = browser.currentScene.createNode("fieldValue");
fieldValue1270.name = "name";
fieldValue1270.value = "r_hindfoot";
ProtoInstance1269.fieldValue = new MFNode();

ProtoInstance1269.fieldValue[0] = fieldValue1270;

let fieldValue1271 = browser.currentScene.createNode("fieldValue");
fieldValue1271.name = "children";
let ProtoInstance1272 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1272.name = "Site";
ProtoInstance1272.DEF = "hanim_r_lateral_malleolus";
let fieldValue1273 = browser.currentScene.createNode("fieldValue");
fieldValue1273.name = "name";
fieldValue1273.value = "r_lateral_malleolus";
ProtoInstance1272.fieldValue = new MFNode();

ProtoInstance1272.fieldValue[0] = fieldValue1273;

let fieldValue1274 = browser.currentScene.createNode("fieldValue");
fieldValue1274.name = "translation";
fieldValue1274.value = "-0.1005999967455864 0.0658000037074089 -0.10750000178813934";
ProtoInstance1272.fieldValue[1] = fieldValue1274;

fieldValue1271.children = new MFNode();

fieldValue1271.children[0] = ProtoInstance1272;

let ProtoInstance1275 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1275.name = "Site";
ProtoInstance1275.DEF = "hanim_r_medial_malleolus";
let fieldValue1276 = browser.currentScene.createNode("fieldValue");
fieldValue1276.name = "name";
fieldValue1276.value = "r_medial_malleolus";
ProtoInstance1275.fieldValue = new MFNode();

ProtoInstance1275.fieldValue[0] = fieldValue1276;

let fieldValue1277 = browser.currentScene.createNode("fieldValue");
fieldValue1277.name = "translation";
fieldValue1277.value = "-0.05909999832510948 0.07599999755620956 -0.09279999881982803";
ProtoInstance1275.fieldValue[1] = fieldValue1277;

fieldValue1271.children[1] = ProtoInstance1275;

let ProtoInstance1278 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1278.name = "Site";
ProtoInstance1278.DEF = "hanim_r_sphyrion";
let fieldValue1279 = browser.currentScene.createNode("fieldValue");
fieldValue1279.name = "name";
fieldValue1279.value = "r_sphyrion";
ProtoInstance1278.fieldValue = new MFNode();

ProtoInstance1278.fieldValue[0] = fieldValue1279;

let fieldValue1280 = browser.currentScene.createNode("fieldValue");
fieldValue1280.name = "translation";
fieldValue1280.value = "-0.06030000001192093 0.061000000685453415 -0.10019999742507935";
ProtoInstance1278.fieldValue[1] = fieldValue1280;

fieldValue1271.children[2] = ProtoInstance1278;

let ProtoInstance1281 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1281.name = "Site";
ProtoInstance1281.DEF = "hanim_r_calcaneus_posterior";
let fieldValue1282 = browser.currentScene.createNode("fieldValue");
fieldValue1282.name = "name";
fieldValue1282.value = "r_calcaneus_posterior";
ProtoInstance1281.fieldValue = new MFNode();

ProtoInstance1281.fieldValue[0] = fieldValue1282;

let fieldValue1283 = browser.currentScene.createNode("fieldValue");
fieldValue1283.name = "translation";
fieldValue1283.value = "-0.06920000165700912 0.02969999983906746 -0.12210000306367874";
ProtoInstance1281.fieldValue[1] = fieldValue1283;

fieldValue1271.children[3] = ProtoInstance1281;

ProtoInstance1269.fieldValue[1] = fieldValue1271;

fieldValue1248.children[1] = ProtoInstance1269;

ProtoInstance1244.fieldValue[3] = fieldValue1248;

fieldValue1243.children = new MFNode();

fieldValue1243.children[0] = ProtoInstance1244;

let ProtoInstance1284 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1284.name = "Segment";
ProtoInstance1284.DEF = "hanim_r_calf";
let fieldValue1285 = browser.currentScene.createNode("fieldValue");
fieldValue1285.name = "name";
fieldValue1285.value = "r_calf";
ProtoInstance1284.fieldValue = new MFNode();

ProtoInstance1284.fieldValue[0] = fieldValue1285;

fieldValue1243.children[1] = ProtoInstance1284;

ProtoInstance1239.fieldValue[3] = fieldValue1243;

fieldValue484.children[7] = ProtoInstance1239;

let ProtoInstance1286 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1286.name = "Joint";
ProtoInstance1286.DEF = "hanim_r_talocrural";
let fieldValue1287 = browser.currentScene.createNode("fieldValue");
fieldValue1287.name = "stiffness";
fieldValue1287.value = "1 1 1";
ProtoInstance1286.fieldValue = new MFNode();

ProtoInstance1286.fieldValue[0] = fieldValue1287;

let fieldValue1288 = browser.currentScene.createNode("fieldValue");
fieldValue1288.name = "name";
fieldValue1288.value = "r_talocrural";
ProtoInstance1286.fieldValue[1] = fieldValue1288;

let fieldValue1289 = browser.currentScene.createNode("fieldValue");
fieldValue1289.name = "center";
fieldValue1289.value = "-0.08009999990463257 0.07119999825954437 -0.07660000026226044";
ProtoInstance1286.fieldValue[2] = fieldValue1289;

let fieldValue1290 = browser.currentScene.createNode("fieldValue");
fieldValue1290.name = "children";
let ProtoInstance1291 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1291.name = "Joint";
ProtoInstance1291.DEF = "hanim_r_metatarsophalangeal_";
let fieldValue1292 = browser.currentScene.createNode("fieldValue");
fieldValue1292.name = "stiffness";
fieldValue1292.value = "1 1 1";
ProtoInstance1291.fieldValue = new MFNode();

ProtoInstance1291.fieldValue[0] = fieldValue1292;

let fieldValue1293 = browser.currentScene.createNode("fieldValue");
fieldValue1293.name = "name";
fieldValue1293.value = "r_metatarsophalangeal_";
ProtoInstance1291.fieldValue[1] = fieldValue1293;

let fieldValue1294 = browser.currentScene.createNode("fieldValue");
fieldValue1294.name = "center";
fieldValue1294.value = "-0.08009999990463257 0 0.03680000081658363";
ProtoInstance1291.fieldValue[2] = fieldValue1294;

let fieldValue1295 = browser.currentScene.createNode("fieldValue");
fieldValue1295.name = "children";
let ProtoInstance1296 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1296.name = "Segment";
ProtoInstance1296.DEF = "hanim_r_middistal";
let fieldValue1297 = browser.currentScene.createNode("fieldValue");
fieldValue1297.name = "name";
fieldValue1297.value = "r_middistal";
ProtoInstance1296.fieldValue = new MFNode();

ProtoInstance1296.fieldValue[0] = fieldValue1297;

let fieldValue1298 = browser.currentScene.createNode("fieldValue");
fieldValue1298.name = "children";
let ProtoInstance1299 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1299.name = "Site";
ProtoInstance1299.DEF = "hanim_r_middistal_tip";
let fieldValue1300 = browser.currentScene.createNode("fieldValue");
fieldValue1300.name = "name";
fieldValue1300.value = "r_middistal_tip";
ProtoInstance1299.fieldValue = new MFNode();

ProtoInstance1299.fieldValue[0] = fieldValue1300;

let fieldValue1301 = browser.currentScene.createNode("fieldValue");
fieldValue1301.name = "translation";
fieldValue1301.value = "-0.10429999977350235 -0.022700000554323196 0.14499999582767487";
ProtoInstance1299.fieldValue[1] = fieldValue1301;

fieldValue1298.children = new MFNode();

fieldValue1298.children[0] = ProtoInstance1299;

let ProtoInstance1302 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1302.name = "Site";
ProtoInstance1302.DEF = "hanim_r_tarsal_interphalangeal_phalanx_5";
let fieldValue1303 = browser.currentScene.createNode("fieldValue");
fieldValue1303.name = "name";
fieldValue1303.value = "r_tarsal_interphalangeal_phalanx_5";
ProtoInstance1302.fieldValue = new MFNode();

ProtoInstance1302.fieldValue[0] = fieldValue1303;

let fieldValue1304 = browser.currentScene.createNode("fieldValue");
fieldValue1304.name = "translation";
fieldValue1304.value = "-0.15230000019073486 0.016599999740719795 0.08950000256299973";
ProtoInstance1302.fieldValue[1] = fieldValue1304;

fieldValue1298.children[1] = ProtoInstance1302;

let ProtoInstance1305 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1305.name = "Site";
ProtoInstance1305.DEF = "hanim_r_tarsal_interphalangeal_phalanx_1";
let fieldValue1306 = browser.currentScene.createNode("fieldValue");
fieldValue1306.name = "name";
fieldValue1306.value = "r_tarsal_interphalangeal_phalanx_1";
ProtoInstance1305.fieldValue = new MFNode();

ProtoInstance1305.fieldValue[0] = fieldValue1306;

let fieldValue1307 = browser.currentScene.createNode("fieldValue");
fieldValue1307.name = "translation";
fieldValue1307.value = "-0.05209999904036522 0.026000000536441803 0.01269999984651804";
ProtoInstance1305.fieldValue[1] = fieldValue1307;

fieldValue1298.children[2] = ProtoInstance1305;

let ProtoInstance1308 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1308.name = "Site";
ProtoInstance1308.DEF = "hanim_r_tarsal_distal_phalanx_2";
let fieldValue1309 = browser.currentScene.createNode("fieldValue");
fieldValue1309.name = "name";
fieldValue1309.value = "r_tarsal_distal_phalanx_2";
ProtoInstance1308.fieldValue = new MFNode();

ProtoInstance1308.fieldValue[0] = fieldValue1309;

let fieldValue1310 = browser.currentScene.createNode("fieldValue");
fieldValue1310.name = "translation";
fieldValue1310.value = "-0.08829999715089798 0.013399999588727951 0.13830000162124634";
ProtoInstance1308.fieldValue[1] = fieldValue1310;

fieldValue1298.children[3] = ProtoInstance1308;

ProtoInstance1296.fieldValue[1] = fieldValue1298;

fieldValue1295.children = new MFNode();

fieldValue1295.children[0] = ProtoInstance1296;

ProtoInstance1291.fieldValue[3] = fieldValue1295;

fieldValue1290.children = new MFNode();

fieldValue1290.children[0] = ProtoInstance1291;

let ProtoInstance1311 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1311.name = "Segment";
ProtoInstance1311.DEF = "hanim_r_hindfoot";
let fieldValue1312 = browser.currentScene.createNode("fieldValue");
fieldValue1312.name = "name";
fieldValue1312.value = "r_hindfoot";
ProtoInstance1311.fieldValue = new MFNode();

ProtoInstance1311.fieldValue[0] = fieldValue1312;

let fieldValue1313 = browser.currentScene.createNode("fieldValue");
fieldValue1313.name = "children";
let ProtoInstance1314 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1314.name = "Site";
ProtoInstance1314.DEF = "hanim_r_lateral_malleolus";
let fieldValue1315 = browser.currentScene.createNode("fieldValue");
fieldValue1315.name = "name";
fieldValue1315.value = "r_lateral_malleolus";
ProtoInstance1314.fieldValue = new MFNode();

ProtoInstance1314.fieldValue[0] = fieldValue1315;

let fieldValue1316 = browser.currentScene.createNode("fieldValue");
fieldValue1316.name = "translation";
fieldValue1316.value = "-0.1005999967455864 0.0658000037074089 -0.10750000178813934";
ProtoInstance1314.fieldValue[1] = fieldValue1316;

fieldValue1313.children = new MFNode();

fieldValue1313.children[0] = ProtoInstance1314;

let ProtoInstance1317 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1317.name = "Site";
ProtoInstance1317.DEF = "hanim_r_medial_malleolus";
let fieldValue1318 = browser.currentScene.createNode("fieldValue");
fieldValue1318.name = "name";
fieldValue1318.value = "r_medial_malleolus";
ProtoInstance1317.fieldValue = new MFNode();

ProtoInstance1317.fieldValue[0] = fieldValue1318;

let fieldValue1319 = browser.currentScene.createNode("fieldValue");
fieldValue1319.name = "translation";
fieldValue1319.value = "-0.05909999832510948 0.07599999755620956 -0.09279999881982803";
ProtoInstance1317.fieldValue[1] = fieldValue1319;

fieldValue1313.children[1] = ProtoInstance1317;

let ProtoInstance1320 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1320.name = "Site";
ProtoInstance1320.DEF = "hanim_r_sphyrion";
let fieldValue1321 = browser.currentScene.createNode("fieldValue");
fieldValue1321.name = "name";
fieldValue1321.value = "r_sphyrion";
ProtoInstance1320.fieldValue = new MFNode();

ProtoInstance1320.fieldValue[0] = fieldValue1321;

let fieldValue1322 = browser.currentScene.createNode("fieldValue");
fieldValue1322.name = "translation";
fieldValue1322.value = "-0.06030000001192093 0.061000000685453415 -0.10019999742507935";
ProtoInstance1320.fieldValue[1] = fieldValue1322;

fieldValue1313.children[2] = ProtoInstance1320;

let ProtoInstance1323 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1323.name = "Site";
ProtoInstance1323.DEF = "hanim_r_calcaneus_posterior";
let fieldValue1324 = browser.currentScene.createNode("fieldValue");
fieldValue1324.name = "name";
fieldValue1324.value = "r_calcaneus_posterior";
ProtoInstance1323.fieldValue = new MFNode();

ProtoInstance1323.fieldValue[0] = fieldValue1324;

let fieldValue1325 = browser.currentScene.createNode("fieldValue");
fieldValue1325.name = "translation";
fieldValue1325.value = "-0.06920000165700912 0.02969999983906746 -0.12210000306367874";
ProtoInstance1323.fieldValue[1] = fieldValue1325;

fieldValue1313.children[3] = ProtoInstance1323;

ProtoInstance1311.fieldValue[1] = fieldValue1313;

fieldValue1290.children[1] = ProtoInstance1311;

ProtoInstance1286.fieldValue[3] = fieldValue1290;

fieldValue484.children[8] = ProtoInstance1286;

let ProtoInstance1326 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1326.name = "Joint";
ProtoInstance1326.DEF = "hanim_r_metatarsophalangeal_";
let fieldValue1327 = browser.currentScene.createNode("fieldValue");
fieldValue1327.name = "stiffness";
fieldValue1327.value = "1 1 1";
ProtoInstance1326.fieldValue = new MFNode();

ProtoInstance1326.fieldValue[0] = fieldValue1327;

let fieldValue1328 = browser.currentScene.createNode("fieldValue");
fieldValue1328.name = "name";
fieldValue1328.value = "r_metatarsophalangeal_";
ProtoInstance1326.fieldValue[1] = fieldValue1328;

let fieldValue1329 = browser.currentScene.createNode("fieldValue");
fieldValue1329.name = "center";
fieldValue1329.value = "-0.08009999990463257 0 0.03680000081658363";
ProtoInstance1326.fieldValue[2] = fieldValue1329;

let fieldValue1330 = browser.currentScene.createNode("fieldValue");
fieldValue1330.name = "children";
let ProtoInstance1331 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1331.name = "Segment";
ProtoInstance1331.DEF = "hanim_r_middistal";
let fieldValue1332 = browser.currentScene.createNode("fieldValue");
fieldValue1332.name = "name";
fieldValue1332.value = "r_middistal";
ProtoInstance1331.fieldValue = new MFNode();

ProtoInstance1331.fieldValue[0] = fieldValue1332;

let fieldValue1333 = browser.currentScene.createNode("fieldValue");
fieldValue1333.name = "children";
let ProtoInstance1334 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1334.name = "Site";
ProtoInstance1334.DEF = "hanim_r_middistal_tip";
let fieldValue1335 = browser.currentScene.createNode("fieldValue");
fieldValue1335.name = "name";
fieldValue1335.value = "r_middistal_tip";
ProtoInstance1334.fieldValue = new MFNode();

ProtoInstance1334.fieldValue[0] = fieldValue1335;

let fieldValue1336 = browser.currentScene.createNode("fieldValue");
fieldValue1336.name = "translation";
fieldValue1336.value = "-0.10429999977350235 -0.022700000554323196 0.14499999582767487";
ProtoInstance1334.fieldValue[1] = fieldValue1336;

fieldValue1333.children = new MFNode();

fieldValue1333.children[0] = ProtoInstance1334;

let ProtoInstance1337 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1337.name = "Site";
ProtoInstance1337.DEF = "hanim_r_tarsal_interphalangeal_phalanx_5";
let fieldValue1338 = browser.currentScene.createNode("fieldValue");
fieldValue1338.name = "name";
fieldValue1338.value = "r_tarsal_interphalangeal_phalanx_5";
ProtoInstance1337.fieldValue = new MFNode();

ProtoInstance1337.fieldValue[0] = fieldValue1338;

let fieldValue1339 = browser.currentScene.createNode("fieldValue");
fieldValue1339.name = "translation";
fieldValue1339.value = "-0.15230000019073486 0.016599999740719795 0.08950000256299973";
ProtoInstance1337.fieldValue[1] = fieldValue1339;

fieldValue1333.children[1] = ProtoInstance1337;

let ProtoInstance1340 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1340.name = "Site";
ProtoInstance1340.DEF = "hanim_r_tarsal_interphalangeal_phalanx_1";
let fieldValue1341 = browser.currentScene.createNode("fieldValue");
fieldValue1341.name = "name";
fieldValue1341.value = "r_tarsal_interphalangeal_phalanx_1";
ProtoInstance1340.fieldValue = new MFNode();

ProtoInstance1340.fieldValue[0] = fieldValue1341;

let fieldValue1342 = browser.currentScene.createNode("fieldValue");
fieldValue1342.name = "translation";
fieldValue1342.value = "-0.05209999904036522 0.026000000536441803 0.01269999984651804";
ProtoInstance1340.fieldValue[1] = fieldValue1342;

fieldValue1333.children[2] = ProtoInstance1340;

let ProtoInstance1343 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1343.name = "Site";
ProtoInstance1343.DEF = "hanim_r_tarsal_distal_phalanx_2";
let fieldValue1344 = browser.currentScene.createNode("fieldValue");
fieldValue1344.name = "name";
fieldValue1344.value = "r_tarsal_distal_phalanx_2";
ProtoInstance1343.fieldValue = new MFNode();

ProtoInstance1343.fieldValue[0] = fieldValue1344;

let fieldValue1345 = browser.currentScene.createNode("fieldValue");
fieldValue1345.name = "translation";
fieldValue1345.value = "-0.08829999715089798 0.013399999588727951 0.13830000162124634";
ProtoInstance1343.fieldValue[1] = fieldValue1345;

fieldValue1333.children[3] = ProtoInstance1343;

ProtoInstance1331.fieldValue[1] = fieldValue1333;

fieldValue1330.children = new MFNode();

fieldValue1330.children[0] = ProtoInstance1331;

ProtoInstance1326.fieldValue[3] = fieldValue1330;

fieldValue484.children[9] = ProtoInstance1326;

let ProtoInstance1346 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1346.name = "Joint";
ProtoInstance1346.DEF = "hanim_vl5";
let fieldValue1347 = browser.currentScene.createNode("fieldValue");
fieldValue1347.name = "stiffness";
fieldValue1347.value = "1 1 1";
ProtoInstance1346.fieldValue = new MFNode();

ProtoInstance1346.fieldValue[0] = fieldValue1347;

let fieldValue1348 = browser.currentScene.createNode("fieldValue");
fieldValue1348.name = "name";
fieldValue1348.value = "vl5";
ProtoInstance1346.fieldValue[1] = fieldValue1348;

let fieldValue1349 = browser.currentScene.createNode("fieldValue");
fieldValue1349.name = "center";
fieldValue1349.value = "0.00279999990016222 1.0568000078201294 -0.07760000228881836";
ProtoInstance1346.fieldValue[2] = fieldValue1349;

let fieldValue1350 = browser.currentScene.createNode("fieldValue");
fieldValue1350.name = "children";
let ProtoInstance1351 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1351.name = "Joint";
ProtoInstance1351.DEF = "hanim_skullbase";
let fieldValue1352 = browser.currentScene.createNode("fieldValue");
fieldValue1352.name = "stiffness";
fieldValue1352.value = "1 1 1";
ProtoInstance1351.fieldValue = new MFNode();

ProtoInstance1351.fieldValue[0] = fieldValue1352;

let fieldValue1353 = browser.currentScene.createNode("fieldValue");
fieldValue1353.name = "name";
fieldValue1353.value = "skullbase";
ProtoInstance1351.fieldValue[1] = fieldValue1353;

let fieldValue1354 = browser.currentScene.createNode("fieldValue");
fieldValue1354.name = "center";
fieldValue1354.value = "0.004399999976158142 1.62090003490448 0.023600000888109207";
ProtoInstance1351.fieldValue[2] = fieldValue1354;

let fieldValue1355 = browser.currentScene.createNode("fieldValue");
fieldValue1355.name = "children";
let ProtoInstance1356 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1356.name = "Segment";
ProtoInstance1356.DEF = "hanim_skull";
let fieldValue1357 = browser.currentScene.createNode("fieldValue");
fieldValue1357.name = "name";
fieldValue1357.value = "skull";
ProtoInstance1356.fieldValue = new MFNode();

ProtoInstance1356.fieldValue[0] = fieldValue1357;

let fieldValue1358 = browser.currentScene.createNode("fieldValue");
fieldValue1358.name = "children";
let ProtoInstance1359 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1359.name = "Site";
ProtoInstance1359.DEF = "hanim_skull_tip";
let fieldValue1360 = browser.currentScene.createNode("fieldValue");
fieldValue1360.name = "name";
fieldValue1360.value = "skull_tip";
ProtoInstance1359.fieldValue = new MFNode();

ProtoInstance1359.fieldValue[0] = fieldValue1360;

let fieldValue1361 = browser.currentScene.createNode("fieldValue");
fieldValue1361.name = "translation";
fieldValue1361.value = "0.004999999888241291 1.7503999471664429 0.005499999970197678";
ProtoInstance1359.fieldValue[1] = fieldValue1361;

fieldValue1358.children = new MFNode();

fieldValue1358.children[0] = ProtoInstance1359;

let ProtoInstance1362 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1362.name = "Site";
ProtoInstance1362.DEF = "hanim_sellion";
let fieldValue1363 = browser.currentScene.createNode("fieldValue");
fieldValue1363.name = "name";
fieldValue1363.value = "sellion";
ProtoInstance1362.fieldValue = new MFNode();

ProtoInstance1362.fieldValue[0] = fieldValue1363;

let fieldValue1364 = browser.currentScene.createNode("fieldValue");
fieldValue1364.name = "translation";
fieldValue1364.value = "0.005799999926239252 1.631600022315979 0.0851999968290329";
ProtoInstance1362.fieldValue[1] = fieldValue1364;

fieldValue1358.children[1] = ProtoInstance1362;

let ProtoInstance1365 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1365.name = "Site";
ProtoInstance1365.DEF = "hanim_r_infraorbitale";
let fieldValue1366 = browser.currentScene.createNode("fieldValue");
fieldValue1366.name = "name";
fieldValue1366.value = "r_infraorbitale";
ProtoInstance1365.fieldValue = new MFNode();

ProtoInstance1365.fieldValue[0] = fieldValue1366;

let fieldValue1367 = browser.currentScene.createNode("fieldValue");
fieldValue1367.name = "translation";
fieldValue1367.value = "-0.02370000071823597 1.6171000003814697 0.07519999891519547";
ProtoInstance1365.fieldValue[1] = fieldValue1367;

fieldValue1358.children[2] = ProtoInstance1365;

let ProtoInstance1368 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1368.name = "Site";
ProtoInstance1368.DEF = "hanim_l_infraorbitale";
let fieldValue1369 = browser.currentScene.createNode("fieldValue");
fieldValue1369.name = "name";
fieldValue1369.value = "l_infraorbitale";
ProtoInstance1368.fieldValue = new MFNode();

ProtoInstance1368.fieldValue[0] = fieldValue1369;

let fieldValue1370 = browser.currentScene.createNode("fieldValue");
fieldValue1370.name = "translation";
fieldValue1370.value = "0.0340999998152256 1.6171000003814697 0.07519999891519547";
ProtoInstance1368.fieldValue[1] = fieldValue1370;

fieldValue1358.children[3] = ProtoInstance1368;

let ProtoInstance1371 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1371.name = "Site";
ProtoInstance1371.DEF = "hanim_supramenton";
let fieldValue1372 = browser.currentScene.createNode("fieldValue");
fieldValue1372.name = "name";
fieldValue1372.value = "supramenton";
ProtoInstance1371.fieldValue = new MFNode();

ProtoInstance1371.fieldValue[0] = fieldValue1372;

let fieldValue1373 = browser.currentScene.createNode("fieldValue");
fieldValue1373.name = "translation";
fieldValue1373.value = "0.006099999882280827 1.5410000085830688 0.08049999922513962";
ProtoInstance1371.fieldValue[1] = fieldValue1373;

fieldValue1358.children[4] = ProtoInstance1371;

let ProtoInstance1374 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1374.name = "Site";
ProtoInstance1374.DEF = "hanim_r_tragion";
let fieldValue1375 = browser.currentScene.createNode("fieldValue");
fieldValue1375.name = "name";
fieldValue1375.value = "r_tragion";
ProtoInstance1374.fieldValue = new MFNode();

ProtoInstance1374.fieldValue[0] = fieldValue1375;

let fieldValue1376 = browser.currentScene.createNode("fieldValue");
fieldValue1376.name = "translation";
fieldValue1376.value = "-0.06459999829530716 1.6346999406814575 0.03020000085234642";
ProtoInstance1374.fieldValue[1] = fieldValue1376;

fieldValue1358.children[5] = ProtoInstance1374;

let ProtoInstance1377 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1377.name = "Site";
ProtoInstance1377.DEF = "hanim_r_gonion";
let fieldValue1378 = browser.currentScene.createNode("fieldValue");
fieldValue1378.name = "name";
fieldValue1378.value = "r_gonion";
ProtoInstance1377.fieldValue = new MFNode();

ProtoInstance1377.fieldValue[0] = fieldValue1378;

let fieldValue1379 = browser.currentScene.createNode("fieldValue");
fieldValue1379.name = "translation";
fieldValue1379.value = "-0.052000001072883606 1.552899956703186 0.034699998795986176";
ProtoInstance1377.fieldValue[1] = fieldValue1379;

fieldValue1358.children[6] = ProtoInstance1377;

let ProtoInstance1380 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1380.name = "Site";
ProtoInstance1380.DEF = "hanim_l_tragion";
let fieldValue1381 = browser.currentScene.createNode("fieldValue");
fieldValue1381.name = "name";
fieldValue1381.value = "l_tragion";
ProtoInstance1380.fieldValue = new MFNode();

ProtoInstance1380.fieldValue[0] = fieldValue1381;

let fieldValue1382 = browser.currentScene.createNode("fieldValue");
fieldValue1382.name = "translation";
fieldValue1382.value = "0.0738999992609024 1.6347999572753906 0.028200000524520874";
ProtoInstance1380.fieldValue[1] = fieldValue1382;

fieldValue1358.children[7] = ProtoInstance1380;

let ProtoInstance1383 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1383.name = "Site";
ProtoInstance1383.DEF = "hanim_l_gonion";
let fieldValue1384 = browser.currentScene.createNode("fieldValue");
fieldValue1384.name = "name";
fieldValue1384.value = "l_gonion";
ProtoInstance1383.fieldValue = new MFNode();

ProtoInstance1383.fieldValue[0] = fieldValue1384;

let fieldValue1385 = browser.currentScene.createNode("fieldValue");
fieldValue1385.name = "translation";
fieldValue1385.value = "0.06310000270605087 1.5529999732971191 0.032999999821186066";
ProtoInstance1383.fieldValue[1] = fieldValue1385;

fieldValue1358.children[8] = ProtoInstance1383;

let ProtoInstance1386 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1386.name = "Site";
ProtoInstance1386.DEF = "hanim_nuchale";
let fieldValue1387 = browser.currentScene.createNode("fieldValue");
fieldValue1387.name = "name";
fieldValue1387.value = "nuchale";
ProtoInstance1386.fieldValue = new MFNode();

ProtoInstance1386.fieldValue[0] = fieldValue1387;

let fieldValue1388 = browser.currentScene.createNode("fieldValue");
fieldValue1388.name = "translation";
fieldValue1388.value = "0.0038999998942017555 1.5972000360488892 -0.07959999889135361";
ProtoInstance1386.fieldValue[1] = fieldValue1388;

fieldValue1358.children[9] = ProtoInstance1386;

ProtoInstance1356.fieldValue[1] = fieldValue1358;

fieldValue1355.children = new MFNode();

fieldValue1355.children[0] = ProtoInstance1356;

ProtoInstance1351.fieldValue[3] = fieldValue1355;

fieldValue1350.children = new MFNode();

fieldValue1350.children[0] = ProtoInstance1351;

let ProtoInstance1389 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1389.name = "Joint";
ProtoInstance1389.DEF = "hanim_l_shoulder";
let fieldValue1390 = browser.currentScene.createNode("fieldValue");
fieldValue1390.name = "stiffness";
fieldValue1390.value = "1 1 1";
ProtoInstance1389.fieldValue = new MFNode();

ProtoInstance1389.fieldValue[0] = fieldValue1390;

let fieldValue1391 = browser.currentScene.createNode("fieldValue");
fieldValue1391.name = "name";
fieldValue1391.value = "l_shoulder";
ProtoInstance1389.fieldValue[1] = fieldValue1391;

let fieldValue1392 = browser.currentScene.createNode("fieldValue");
fieldValue1392.name = "center";
fieldValue1392.value = "0.2029000073671341 1.437600016593933 -0.03869999945163727";
ProtoInstance1389.fieldValue[2] = fieldValue1392;

let fieldValue1393 = browser.currentScene.createNode("fieldValue");
fieldValue1393.name = "children";
let ProtoInstance1394 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1394.name = "Joint";
ProtoInstance1394.DEF = "hanim_l_elbow";
let fieldValue1395 = browser.currentScene.createNode("fieldValue");
fieldValue1395.name = "stiffness";
fieldValue1395.value = "1 1 1";
ProtoInstance1394.fieldValue = new MFNode();

ProtoInstance1394.fieldValue[0] = fieldValue1395;

let fieldValue1396 = browser.currentScene.createNode("fieldValue");
fieldValue1396.name = "name";
fieldValue1396.value = "l_elbow";
ProtoInstance1394.fieldValue[1] = fieldValue1396;

let fieldValue1397 = browser.currentScene.createNode("fieldValue");
fieldValue1397.name = "center";
fieldValue1397.value = "0.2013999968767166 1.135699987411499 -0.0681999996304512";
ProtoInstance1394.fieldValue[2] = fieldValue1397;

let fieldValue1398 = browser.currentScene.createNode("fieldValue");
fieldValue1398.name = "children";
let ProtoInstance1399 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1399.name = "Joint";
ProtoInstance1399.DEF = "hanim_l_radiocarpal";
let fieldValue1400 = browser.currentScene.createNode("fieldValue");
fieldValue1400.name = "stiffness";
fieldValue1400.value = "1 1 1";
ProtoInstance1399.fieldValue = new MFNode();

ProtoInstance1399.fieldValue[0] = fieldValue1400;

let fieldValue1401 = browser.currentScene.createNode("fieldValue");
fieldValue1401.name = "name";
fieldValue1401.value = "l_radiocarpal";
ProtoInstance1399.fieldValue[1] = fieldValue1401;

let fieldValue1402 = browser.currentScene.createNode("fieldValue");
fieldValue1402.name = "center";
fieldValue1402.value = "0.19840000569820404 0.8662999868392944 -0.05829999968409538";
ProtoInstance1399.fieldValue[2] = fieldValue1402;

let fieldValue1403 = browser.currentScene.createNode("fieldValue");
fieldValue1403.name = "children";
let ProtoInstance1404 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1404.name = "Segment";
ProtoInstance1404.DEF = "hanim_l_hand";
let fieldValue1405 = browser.currentScene.createNode("fieldValue");
fieldValue1405.name = "name";
fieldValue1405.value = "l_hand";
ProtoInstance1404.fieldValue = new MFNode();

ProtoInstance1404.fieldValue[0] = fieldValue1405;

let fieldValue1406 = browser.currentScene.createNode("fieldValue");
fieldValue1406.name = "children";
let ProtoInstance1407 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1407.name = "Site";
ProtoInstance1407.DEF = "hanim_l_hand_tip";
let fieldValue1408 = browser.currentScene.createNode("fieldValue");
fieldValue1408.name = "name";
fieldValue1408.value = "l_hand_tip";
ProtoInstance1407.fieldValue = new MFNode();

ProtoInstance1407.fieldValue[0] = fieldValue1408;

let fieldValue1409 = browser.currentScene.createNode("fieldValue");
fieldValue1409.name = "translation";
fieldValue1409.value = "0.20800000429153442 0.6730999946594238 -0.04910000041127205";
ProtoInstance1407.fieldValue[1] = fieldValue1409;

fieldValue1406.children = new MFNode();

fieldValue1406.children[0] = ProtoInstance1407;

let ProtoInstance1410 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1410.name = "Site";
ProtoInstance1410.DEF = "hanim_l_metacarpal_phalanx_2";
let fieldValue1411 = browser.currentScene.createNode("fieldValue");
fieldValue1411.name = "name";
fieldValue1411.value = "l_metacarpal_phalanx_2";
ProtoInstance1410.fieldValue = new MFNode();

ProtoInstance1410.fieldValue[0] = fieldValue1411;

let fieldValue1412 = browser.currentScene.createNode("fieldValue");
fieldValue1412.name = "translation";
fieldValue1412.value = "0.20090000331401825 0.8138999938964844 -0.02370000071823597";
ProtoInstance1410.fieldValue[1] = fieldValue1412;

fieldValue1406.children[1] = ProtoInstance1410;

let ProtoInstance1413 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1413.name = "Site";
ProtoInstance1413.DEF = "hanim_l_dactylion";
let fieldValue1414 = browser.currentScene.createNode("fieldValue");
fieldValue1414.name = "name";
fieldValue1414.value = "l_dactylion";
ProtoInstance1413.fieldValue = new MFNode();

ProtoInstance1413.fieldValue[0] = fieldValue1414;

let fieldValue1415 = browser.currentScene.createNode("fieldValue");
fieldValue1415.name = "translation";
fieldValue1415.value = "0.20559999346733093 0.6743000149726868 -0.04820000007748604";
ProtoInstance1413.fieldValue[1] = fieldValue1415;

fieldValue1406.children[2] = ProtoInstance1413;

let ProtoInstance1416 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1416.name = "Site";
ProtoInstance1416.DEF = "hanim_l_ulnar_styloid";
let fieldValue1417 = browser.currentScene.createNode("fieldValue");
fieldValue1417.name = "name";
fieldValue1417.value = "l_ulnar_styloid";
ProtoInstance1416.fieldValue = new MFNode();

ProtoInstance1416.fieldValue[0] = fieldValue1417;

let fieldValue1418 = browser.currentScene.createNode("fieldValue");
fieldValue1418.name = "translation";
fieldValue1418.value = "-0.2142000049352646 0.8529000282287598 -0.06480000168085098";
ProtoInstance1416.fieldValue[1] = fieldValue1418;

fieldValue1406.children[3] = ProtoInstance1416;

let ProtoInstance1419 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1419.name = "Site";
ProtoInstance1419.DEF = "hanim_l_metacarpal_phalanx_5";
let fieldValue1420 = browser.currentScene.createNode("fieldValue");
fieldValue1420.name = "name";
fieldValue1420.value = "l_metacarpal_phalanx_5";
ProtoInstance1419.fieldValue = new MFNode();

ProtoInstance1419.fieldValue[0] = fieldValue1420;

let fieldValue1421 = browser.currentScene.createNode("fieldValue");
fieldValue1421.name = "translation";
fieldValue1421.value = "0.19290000200271606 0.7860000133514404 -0.11219999939203262";
ProtoInstance1419.fieldValue[1] = fieldValue1421;

fieldValue1406.children[4] = ProtoInstance1419;

ProtoInstance1404.fieldValue[1] = fieldValue1406;

fieldValue1403.children = new MFNode();

fieldValue1403.children[0] = ProtoInstance1404;

ProtoInstance1399.fieldValue[3] = fieldValue1403;

fieldValue1398.children = new MFNode();

fieldValue1398.children[0] = ProtoInstance1399;

let ProtoInstance1422 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1422.name = "Segment";
ProtoInstance1422.DEF = "hanim_l_forearm";
let fieldValue1423 = browser.currentScene.createNode("fieldValue");
fieldValue1423.name = "name";
fieldValue1423.value = "l_forearm";
ProtoInstance1422.fieldValue = new MFNode();

ProtoInstance1422.fieldValue[0] = fieldValue1423;

let fieldValue1424 = browser.currentScene.createNode("fieldValue");
fieldValue1424.name = "children";
let ProtoInstance1425 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1425.name = "Site";
ProtoInstance1425.DEF = "hanim_l_radial_styloid";
let fieldValue1426 = browser.currentScene.createNode("fieldValue");
fieldValue1426.name = "name";
fieldValue1426.value = "l_radial_styloid";
ProtoInstance1425.fieldValue = new MFNode();

ProtoInstance1425.fieldValue[0] = fieldValue1426;

let fieldValue1427 = browser.currentScene.createNode("fieldValue");
fieldValue1427.name = "translation";
fieldValue1427.value = "0.19009999930858612 0.8644999861717224 -0.04149999842047691";
ProtoInstance1425.fieldValue[1] = fieldValue1427;

fieldValue1424.children = new MFNode();

fieldValue1424.children[0] = ProtoInstance1425;

let ProtoInstance1428 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1428.name = "Site";
ProtoInstance1428.DEF = "hanim_l_olecranon";
let fieldValue1429 = browser.currentScene.createNode("fieldValue");
fieldValue1429.name = "name";
fieldValue1429.value = "l_olecranon";
ProtoInstance1428.fieldValue = new MFNode();

ProtoInstance1428.fieldValue[0] = fieldValue1429;

let fieldValue1430 = browser.currentScene.createNode("fieldValue");
fieldValue1430.name = "translation";
fieldValue1430.value = "-0.19619999825954437 1.1375000476837158 -0.11230000108480453";
ProtoInstance1428.fieldValue[1] = fieldValue1430;

fieldValue1424.children[1] = ProtoInstance1428;

let ProtoInstance1431 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1431.name = "Site";
ProtoInstance1431.DEF = "hanim_l_humeral_medial_epicondyles";
let fieldValue1432 = browser.currentScene.createNode("fieldValue");
fieldValue1432.name = "name";
fieldValue1432.value = "l_humeral_medial_epicondyles";
ProtoInstance1431.fieldValue = new MFNode();

ProtoInstance1431.fieldValue[0] = fieldValue1432;

let fieldValue1433 = browser.currentScene.createNode("fieldValue");
fieldValue1433.name = "translation";
fieldValue1433.value = "0.17350000143051147 1.1272000074386597 -0.11129999905824661";
ProtoInstance1431.fieldValue[1] = fieldValue1433;

fieldValue1424.children[2] = ProtoInstance1431;

let ProtoInstance1434 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1434.name = "Site";
ProtoInstance1434.DEF = "hanim_l_radiale";
let fieldValue1435 = browser.currentScene.createNode("fieldValue");
fieldValue1435.name = "name";
fieldValue1435.value = "l_radiale";
ProtoInstance1434.fieldValue = new MFNode();

ProtoInstance1434.fieldValue[0] = fieldValue1435;

let fieldValue1436 = browser.currentScene.createNode("fieldValue");
fieldValue1436.name = "translation";
fieldValue1436.value = "0.21819999814033508 1.1211999654769897 -0.11670000106096268";
ProtoInstance1434.fieldValue[1] = fieldValue1436;

fieldValue1424.children[3] = ProtoInstance1434;

ProtoInstance1422.fieldValue[1] = fieldValue1424;

fieldValue1398.children[1] = ProtoInstance1422;

ProtoInstance1394.fieldValue[3] = fieldValue1398;

fieldValue1393.children = new MFNode();

fieldValue1393.children[0] = ProtoInstance1394;

let ProtoInstance1437 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1437.name = "Segment";
ProtoInstance1437.DEF = "hanim_l_upperarm";
let fieldValue1438 = browser.currentScene.createNode("fieldValue");
fieldValue1438.name = "name";
fieldValue1438.value = "l_upperarm";
ProtoInstance1437.fieldValue = new MFNode();

ProtoInstance1437.fieldValue[0] = fieldValue1438;

let fieldValue1439 = browser.currentScene.createNode("fieldValue");
fieldValue1439.name = "children";
let ProtoInstance1440 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1440.name = "Site";
ProtoInstance1440.DEF = "hanim_l_humeral_lateral_epicondyles";
let fieldValue1441 = browser.currentScene.createNode("fieldValue");
fieldValue1441.name = "name";
fieldValue1441.value = "l_humeral_lateral_epicondyles";
ProtoInstance1440.fieldValue = new MFNode();

ProtoInstance1440.fieldValue[0] = fieldValue1441;

let fieldValue1442 = browser.currentScene.createNode("fieldValue");
fieldValue1442.name = "translation";
fieldValue1442.value = "0.2280000001192093 1.1482000350952148 -0.10999999940395355";
ProtoInstance1440.fieldValue[1] = fieldValue1442;

fieldValue1439.children = new MFNode();

fieldValue1439.children[0] = ProtoInstance1440;

ProtoInstance1437.fieldValue[1] = fieldValue1439;

fieldValue1393.children[1] = ProtoInstance1437;

ProtoInstance1389.fieldValue[3] = fieldValue1393;

fieldValue1350.children[1] = ProtoInstance1389;

let ProtoInstance1443 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1443.name = "Joint";
ProtoInstance1443.DEF = "hanim_r_shoulder";
let fieldValue1444 = browser.currentScene.createNode("fieldValue");
fieldValue1444.name = "stiffness";
fieldValue1444.value = "1 1 1";
ProtoInstance1443.fieldValue = new MFNode();

ProtoInstance1443.fieldValue[0] = fieldValue1444;

let fieldValue1445 = browser.currentScene.createNode("fieldValue");
fieldValue1445.name = "name";
fieldValue1445.value = "r_shoulder";
ProtoInstance1443.fieldValue[1] = fieldValue1445;

let fieldValue1446 = browser.currentScene.createNode("fieldValue");
fieldValue1446.name = "center";
fieldValue1446.value = "-0.1906999945640564 1.4407000541687012 -0.032499998807907104";
ProtoInstance1443.fieldValue[2] = fieldValue1446;

let fieldValue1447 = browser.currentScene.createNode("fieldValue");
fieldValue1447.name = "children";
let ProtoInstance1448 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1448.name = "Joint";
ProtoInstance1448.DEF = "hanim_r_elbow";
let fieldValue1449 = browser.currentScene.createNode("fieldValue");
fieldValue1449.name = "stiffness";
fieldValue1449.value = "1 1 1";
ProtoInstance1448.fieldValue = new MFNode();

ProtoInstance1448.fieldValue[0] = fieldValue1449;

let fieldValue1450 = browser.currentScene.createNode("fieldValue");
fieldValue1450.name = "name";
fieldValue1450.value = "r_elbow";
ProtoInstance1448.fieldValue[1] = fieldValue1450;

let fieldValue1451 = browser.currentScene.createNode("fieldValue");
fieldValue1451.name = "center";
fieldValue1451.value = "-0.1949000060558319 1.138800024986267 -0.06199999898672104";
ProtoInstance1448.fieldValue[2] = fieldValue1451;

let fieldValue1452 = browser.currentScene.createNode("fieldValue");
fieldValue1452.name = "children";
let ProtoInstance1453 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1453.name = "Joint";
ProtoInstance1453.DEF = "hanim_r_radiocarpal";
let fieldValue1454 = browser.currentScene.createNode("fieldValue");
fieldValue1454.name = "stiffness";
fieldValue1454.value = "1 1 1";
ProtoInstance1453.fieldValue = new MFNode();

ProtoInstance1453.fieldValue[0] = fieldValue1454;

let fieldValue1455 = browser.currentScene.createNode("fieldValue");
fieldValue1455.name = "name";
fieldValue1455.value = "r_radiocarpal";
ProtoInstance1453.fieldValue[1] = fieldValue1455;

let fieldValue1456 = browser.currentScene.createNode("fieldValue");
fieldValue1456.name = "center";
fieldValue1456.value = "-0.19589999318122864 0.8694000244140625 -0.05209999904036522";
ProtoInstance1453.fieldValue[2] = fieldValue1456;

let fieldValue1457 = browser.currentScene.createNode("fieldValue");
fieldValue1457.name = "children";
let ProtoInstance1458 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1458.name = "Segment";
ProtoInstance1458.DEF = "hanim_r_hand";
let fieldValue1459 = browser.currentScene.createNode("fieldValue");
fieldValue1459.name = "name";
fieldValue1459.value = "r_hand";
ProtoInstance1458.fieldValue = new MFNode();

ProtoInstance1458.fieldValue[0] = fieldValue1459;

let fieldValue1460 = browser.currentScene.createNode("fieldValue");
fieldValue1460.name = "children";
let ProtoInstance1461 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1461.name = "Site";
ProtoInstance1461.DEF = "hanim_r_hand_tip";
let fieldValue1462 = browser.currentScene.createNode("fieldValue");
fieldValue1462.name = "name";
fieldValue1462.value = "r_hand_tip";
ProtoInstance1461.fieldValue = new MFNode();

ProtoInstance1461.fieldValue[0] = fieldValue1462;

let fieldValue1463 = browser.currentScene.createNode("fieldValue");
fieldValue1463.name = "translation";
fieldValue1463.value = "-0.19689999520778656 0.6758000254631042 -0.04270000010728836";
ProtoInstance1461.fieldValue[1] = fieldValue1463;

fieldValue1460.children = new MFNode();

fieldValue1460.children[0] = ProtoInstance1461;

let ProtoInstance1464 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1464.name = "Site";
ProtoInstance1464.DEF = "hanim_r_metacarpal_phalanx_2";
let fieldValue1465 = browser.currentScene.createNode("fieldValue");
fieldValue1465.name = "name";
fieldValue1465.value = "r_metacarpal_phalanx_2";
ProtoInstance1464.fieldValue = new MFNode();

ProtoInstance1464.fieldValue[0] = fieldValue1465;

let fieldValue1466 = browser.currentScene.createNode("fieldValue");
fieldValue1466.name = "translation";
fieldValue1466.value = "-0.19769999384880066 0.8169000148773193 -0.01769999973475933";
ProtoInstance1464.fieldValue[1] = fieldValue1466;

fieldValue1460.children[1] = ProtoInstance1464;

let ProtoInstance1467 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1467.name = "Site";
ProtoInstance1467.DEF = "hanim_r_dactylion";
let fieldValue1468 = browser.currentScene.createNode("fieldValue");
fieldValue1468.name = "name";
fieldValue1468.value = "r_dactylion";
ProtoInstance1467.fieldValue = new MFNode();

ProtoInstance1467.fieldValue[0] = fieldValue1468;

let fieldValue1469 = browser.currentScene.createNode("fieldValue");
fieldValue1469.name = "translation";
fieldValue1469.value = "-0.1941000074148178 0.6772000193595886 -0.04230000078678131";
ProtoInstance1467.fieldValue[1] = fieldValue1469;

fieldValue1460.children[2] = ProtoInstance1467;

let ProtoInstance1470 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1470.name = "Site";
ProtoInstance1470.DEF = "hanim_r_ulnar_styloid";
let fieldValue1471 = browser.currentScene.createNode("fieldValue");
fieldValue1471.name = "name";
fieldValue1471.value = "r_ulnar_styloid";
ProtoInstance1470.fieldValue = new MFNode();

ProtoInstance1470.fieldValue[0] = fieldValue1471;

let fieldValue1472 = browser.currentScene.createNode("fieldValue");
fieldValue1472.name = "translation";
fieldValue1472.value = "-0.21170000731945038 0.8561999797821045 -0.058400001376867294";
ProtoInstance1470.fieldValue[1] = fieldValue1472;

fieldValue1460.children[3] = ProtoInstance1470;

let ProtoInstance1473 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1473.name = "Site";
ProtoInstance1473.DEF = "hanim_r_metacarpal_phalanx_5";
let fieldValue1474 = browser.currentScene.createNode("fieldValue");
fieldValue1474.name = "name";
fieldValue1474.value = "r_metacarpal_phalanx_5";
ProtoInstance1473.fieldValue = new MFNode();

ProtoInstance1473.fieldValue[0] = fieldValue1474;

let fieldValue1475 = browser.currentScene.createNode("fieldValue");
fieldValue1475.name = "translation";
fieldValue1475.value = "-0.19290000200271606 0.7889999747276306 -0.10639999806880951";
ProtoInstance1473.fieldValue[1] = fieldValue1475;

fieldValue1460.children[4] = ProtoInstance1473;

ProtoInstance1458.fieldValue[1] = fieldValue1460;

fieldValue1457.children = new MFNode();

fieldValue1457.children[0] = ProtoInstance1458;

ProtoInstance1453.fieldValue[3] = fieldValue1457;

fieldValue1452.children = new MFNode();

fieldValue1452.children[0] = ProtoInstance1453;

let ProtoInstance1476 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1476.name = "Segment";
ProtoInstance1476.DEF = "hanim_r_forearm";
let fieldValue1477 = browser.currentScene.createNode("fieldValue");
fieldValue1477.name = "name";
fieldValue1477.value = "r_forearm";
ProtoInstance1476.fieldValue = new MFNode();

ProtoInstance1476.fieldValue[0] = fieldValue1477;

let fieldValue1478 = browser.currentScene.createNode("fieldValue");
fieldValue1478.name = "children";
let ProtoInstance1479 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1479.name = "Site";
ProtoInstance1479.DEF = "hanim_r_radial_styloid";
let fieldValue1480 = browser.currentScene.createNode("fieldValue");
fieldValue1480.name = "name";
fieldValue1480.value = "r_radial_styloid";
ProtoInstance1479.fieldValue = new MFNode();

ProtoInstance1479.fieldValue[0] = fieldValue1480;

let fieldValue1481 = browser.currentScene.createNode("fieldValue");
fieldValue1481.name = "translation";
fieldValue1481.value = "-0.188400000333786 0.8676000237464905 -0.035999998450279236";
ProtoInstance1479.fieldValue[1] = fieldValue1481;

fieldValue1478.children = new MFNode();

fieldValue1478.children[0] = ProtoInstance1479;

let ProtoInstance1482 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1482.name = "Site";
ProtoInstance1482.DEF = "hanim_r_olecranon";
let fieldValue1483 = browser.currentScene.createNode("fieldValue");
fieldValue1483.name = "name";
fieldValue1483.value = "r_olecranon";
ProtoInstance1482.fieldValue = new MFNode();

ProtoInstance1482.fieldValue[0] = fieldValue1483;

let fieldValue1484 = browser.currentScene.createNode("fieldValue");
fieldValue1484.name = "translation";
fieldValue1484.value = "-0.1906999945640564 1.1404999494552612 -0.10649999976158142";
ProtoInstance1482.fieldValue[1] = fieldValue1484;

fieldValue1478.children[1] = ProtoInstance1482;

let ProtoInstance1485 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1485.name = "Site";
ProtoInstance1485.DEF = "hanim_r_humeral_medial_epicondyles";
let fieldValue1486 = browser.currentScene.createNode("fieldValue");
fieldValue1486.name = "name";
fieldValue1486.value = "r_humeral_medial_epicondyles";
ProtoInstance1485.fieldValue = new MFNode();

ProtoInstance1485.fieldValue[0] = fieldValue1486;

let fieldValue1487 = browser.currentScene.createNode("fieldValue");
fieldValue1487.name = "translation";
fieldValue1487.value = "-0.1679999977350235 1.1297999620437622 -0.10620000213384628";
ProtoInstance1485.fieldValue[1] = fieldValue1487;

fieldValue1478.children[2] = ProtoInstance1485;

let ProtoInstance1488 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1488.name = "Site";
ProtoInstance1488.DEF = "hanim_r_radiale";
let fieldValue1489 = browser.currentScene.createNode("fieldValue");
fieldValue1489.name = "name";
fieldValue1489.value = "r_radiale";
ProtoInstance1488.fieldValue = new MFNode();

ProtoInstance1488.fieldValue[0] = fieldValue1489;

let fieldValue1490 = browser.currentScene.createNode("fieldValue");
fieldValue1490.name = "translation";
fieldValue1490.value = "-0.21299999952316284 1.1304999589920044 -0.10909999907016754";
ProtoInstance1488.fieldValue[1] = fieldValue1490;

fieldValue1478.children[3] = ProtoInstance1488;

ProtoInstance1476.fieldValue[1] = fieldValue1478;

fieldValue1452.children[1] = ProtoInstance1476;

ProtoInstance1448.fieldValue[3] = fieldValue1452;

fieldValue1447.children = new MFNode();

fieldValue1447.children[0] = ProtoInstance1448;

let ProtoInstance1491 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1491.name = "Segment";
ProtoInstance1491.DEF = "hanim_r_upperarm";
let fieldValue1492 = browser.currentScene.createNode("fieldValue");
fieldValue1492.name = "name";
fieldValue1492.value = "r_upperarm";
ProtoInstance1491.fieldValue = new MFNode();

ProtoInstance1491.fieldValue[0] = fieldValue1492;

let fieldValue1493 = browser.currentScene.createNode("fieldValue");
fieldValue1493.name = "children";
let ProtoInstance1494 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1494.name = "Site";
ProtoInstance1494.DEF = "hanim_r_humeral_lateral_epicondyles";
let fieldValue1495 = browser.currentScene.createNode("fieldValue");
fieldValue1495.name = "name";
fieldValue1495.value = "r_humeral_lateral_epicondyles";
ProtoInstance1494.fieldValue = new MFNode();

ProtoInstance1494.fieldValue[0] = fieldValue1495;

let fieldValue1496 = browser.currentScene.createNode("fieldValue");
fieldValue1496.name = "translation";
fieldValue1496.value = "-0.2223999947309494 1.1517000198364258 -0.10329999774694443";
ProtoInstance1494.fieldValue[1] = fieldValue1496;

fieldValue1493.children = new MFNode();

fieldValue1493.children[0] = ProtoInstance1494;

ProtoInstance1491.fieldValue[1] = fieldValue1493;

fieldValue1447.children[1] = ProtoInstance1491;

ProtoInstance1443.fieldValue[3] = fieldValue1447;

fieldValue1350.children[2] = ProtoInstance1443;

let ProtoInstance1497 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1497.name = "Segment";
ProtoInstance1497.DEF = "hanim_l5";
let fieldValue1498 = browser.currentScene.createNode("fieldValue");
fieldValue1498.name = "name";
fieldValue1498.value = "l5";
ProtoInstance1497.fieldValue = new MFNode();

ProtoInstance1497.fieldValue[0] = fieldValue1498;

let fieldValue1499 = browser.currentScene.createNode("fieldValue");
fieldValue1499.name = "children";
let ProtoInstance1500 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1500.name = "Site";
ProtoInstance1500.DEF = "hanim_r_clavicale";
let fieldValue1501 = browser.currentScene.createNode("fieldValue");
fieldValue1501.name = "name";
fieldValue1501.value = "r_clavicale";
ProtoInstance1500.fieldValue = new MFNode();

ProtoInstance1500.fieldValue[0] = fieldValue1501;

let fieldValue1502 = browser.currentScene.createNode("fieldValue");
fieldValue1502.name = "translation";
fieldValue1502.value = "-0.011500000022351742 1.4943000078201294 0.03999999910593033";
ProtoInstance1500.fieldValue[1] = fieldValue1502;

fieldValue1499.children = new MFNode();

fieldValue1499.children[0] = ProtoInstance1500;

let ProtoInstance1503 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1503.name = "Site";
ProtoInstance1503.DEF = "hanim_suprasternale";
let fieldValue1504 = browser.currentScene.createNode("fieldValue");
fieldValue1504.name = "name";
fieldValue1504.value = "suprasternale";
ProtoInstance1503.fieldValue = new MFNode();

ProtoInstance1503.fieldValue[0] = fieldValue1504;

let fieldValue1505 = browser.currentScene.createNode("fieldValue");
fieldValue1505.name = "translation";
fieldValue1505.value = "0.00839999970048666 1.4714000225067139 0.05510000139474869";
ProtoInstance1503.fieldValue[1] = fieldValue1505;

fieldValue1499.children[1] = ProtoInstance1503;

let ProtoInstance1506 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1506.name = "Site";
ProtoInstance1506.DEF = "hanim_l_clavicale";
let fieldValue1507 = browser.currentScene.createNode("fieldValue");
fieldValue1507.name = "name";
fieldValue1507.value = "l_clavicale";
ProtoInstance1506.fieldValue = new MFNode();

ProtoInstance1506.fieldValue[0] = fieldValue1507;

let fieldValue1508 = browser.currentScene.createNode("fieldValue");
fieldValue1508.name = "translation";
fieldValue1508.value = "0.02710000053048134 1.4943000078201294 0.039400000125169754";
ProtoInstance1506.fieldValue[1] = fieldValue1508;

fieldValue1499.children[2] = ProtoInstance1506;

let ProtoInstance1509 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1509.name = "Site";
ProtoInstance1509.DEF = "hanim_r_thelion";
let fieldValue1510 = browser.currentScene.createNode("fieldValue");
fieldValue1510.name = "name";
fieldValue1510.value = "r_thelion";
ProtoInstance1509.fieldValue = new MFNode();

ProtoInstance1509.fieldValue[0] = fieldValue1510;

let fieldValue1511 = browser.currentScene.createNode("fieldValue");
fieldValue1511.name = "translation";
fieldValue1511.value = "-0.07360000163316727 1.3385000228881836 0.1216999962925911";
ProtoInstance1509.fieldValue[1] = fieldValue1511;

fieldValue1499.children[3] = ProtoInstance1509;

let ProtoInstance1512 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1512.name = "Site";
ProtoInstance1512.DEF = "hanim_l_thelion";
let fieldValue1513 = browser.currentScene.createNode("fieldValue");
fieldValue1513.name = "name";
fieldValue1513.value = "l_thelion";
ProtoInstance1512.fieldValue = new MFNode();

ProtoInstance1512.fieldValue[0] = fieldValue1513;

let fieldValue1514 = browser.currentScene.createNode("fieldValue");
fieldValue1514.name = "translation";
fieldValue1514.value = "0.09179999679327011 1.3381999731063843 0.11919999867677689";
ProtoInstance1512.fieldValue[1] = fieldValue1514;

fieldValue1499.children[4] = ProtoInstance1512;

let ProtoInstance1515 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1515.name = "Site";
ProtoInstance1515.DEF = "hanim_substernale";
let fieldValue1516 = browser.currentScene.createNode("fieldValue");
fieldValue1516.name = "name";
fieldValue1516.value = "substernale";
ProtoInstance1515.fieldValue = new MFNode();

ProtoInstance1515.fieldValue[0] = fieldValue1516;

let fieldValue1517 = browser.currentScene.createNode("fieldValue");
fieldValue1517.name = "translation";
fieldValue1517.value = "0.008500000461935997 1.2994999885559082 0.11469999700784683";
ProtoInstance1515.fieldValue[1] = fieldValue1517;

fieldValue1499.children[5] = ProtoInstance1515;

let ProtoInstance1518 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1518.name = "Site";
ProtoInstance1518.DEF = "hanim_r_rib10";
let fieldValue1519 = browser.currentScene.createNode("fieldValue");
fieldValue1519.name = "name";
fieldValue1519.value = "r_rib10";
ProtoInstance1518.fieldValue = new MFNode();

ProtoInstance1518.fieldValue[0] = fieldValue1519;

let fieldValue1520 = browser.currentScene.createNode("fieldValue");
fieldValue1520.name = "translation";
fieldValue1520.value = "-0.07109999656677246 1.194100022315979 0.10159999877214432";
ProtoInstance1518.fieldValue[1] = fieldValue1520;

fieldValue1499.children[6] = ProtoInstance1518;

let ProtoInstance1521 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1521.name = "Site";
ProtoInstance1521.DEF = "hanim_l_rib10";
let fieldValue1522 = browser.currentScene.createNode("fieldValue");
fieldValue1522.name = "name";
fieldValue1522.value = "l_rib10";
ProtoInstance1521.fieldValue = new MFNode();

ProtoInstance1521.fieldValue[0] = fieldValue1522;

let fieldValue1523 = browser.currentScene.createNode("fieldValue");
fieldValue1523.name = "translation";
fieldValue1523.value = "0.08709999918937683 1.1924999952316284 0.09920000284910202";
ProtoInstance1521.fieldValue[1] = fieldValue1523;

fieldValue1499.children[7] = ProtoInstance1521;

let ProtoInstance1524 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1524.name = "Site";
ProtoInstance1524.DEF = "hanim_cervicale";
let fieldValue1525 = browser.currentScene.createNode("fieldValue");
fieldValue1525.name = "name";
fieldValue1525.value = "cervicale";
ProtoInstance1524.fieldValue = new MFNode();

ProtoInstance1524.fieldValue[0] = fieldValue1525;

let fieldValue1526 = browser.currentScene.createNode("fieldValue");
fieldValue1526.name = "translation";
fieldValue1526.value = "0.006399999838322401 1.5199999809265137 -0.08150000125169754";
ProtoInstance1524.fieldValue[1] = fieldValue1526;

fieldValue1499.children[8] = ProtoInstance1524;

let ProtoInstance1527 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1527.name = "Site";
ProtoInstance1527.DEF = "hanim_spine_2_lower_back";
let fieldValue1528 = browser.currentScene.createNode("fieldValue");
fieldValue1528.name = "name";
fieldValue1528.value = "spine_2_lower_back";
ProtoInstance1527.fieldValue = new MFNode();

ProtoInstance1527.fieldValue[0] = fieldValue1528;

let fieldValue1529 = browser.currentScene.createNode("fieldValue");
fieldValue1529.name = "translation";
fieldValue1529.value = "0.004900000058114529 1.1907999515533447 -0.11129999905824661";
ProtoInstance1527.fieldValue[1] = fieldValue1529;

fieldValue1499.children[9] = ProtoInstance1527;

let ProtoInstance1530 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1530.name = "Site";
ProtoInstance1530.DEF = "hanim_waist_preferred_posterior";
let fieldValue1531 = browser.currentScene.createNode("fieldValue");
fieldValue1531.name = "name";
fieldValue1531.value = "waist_preferred_posterior";
ProtoInstance1530.fieldValue = new MFNode();

ProtoInstance1530.fieldValue[0] = fieldValue1531;

let fieldValue1532 = browser.currentScene.createNode("fieldValue");
fieldValue1532.name = "translation";
fieldValue1532.value = "0.28999999165534973 1.0915000438690186 -0.10909999907016754";
ProtoInstance1530.fieldValue[1] = fieldValue1532;

fieldValue1499.children[10] = ProtoInstance1530;

let ProtoInstance1533 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1533.name = "Site";
ProtoInstance1533.DEF = "hanim_r_acromion";
let fieldValue1534 = browser.currentScene.createNode("fieldValue");
fieldValue1534.name = "name";
fieldValue1534.value = "r_acromion";
ProtoInstance1533.fieldValue = new MFNode();

ProtoInstance1533.fieldValue[0] = fieldValue1534;

let fieldValue1535 = browser.currentScene.createNode("fieldValue");
fieldValue1535.name = "translation";
fieldValue1535.value = "-0.19050000607967377 1.479099988937378 -0.04309999942779541";
ProtoInstance1533.fieldValue[1] = fieldValue1535;

fieldValue1499.children[11] = ProtoInstance1533;

let ProtoInstance1536 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1536.name = "Site";
ProtoInstance1536.DEF = "hanim_r_axilla_proximal";
let fieldValue1537 = browser.currentScene.createNode("fieldValue");
fieldValue1537.name = "name";
fieldValue1537.value = "r_axilla_proximal";
ProtoInstance1536.fieldValue = new MFNode();

ProtoInstance1536.fieldValue[0] = fieldValue1537;

let fieldValue1538 = browser.currentScene.createNode("fieldValue");
fieldValue1538.name = "translation";
fieldValue1538.value = "-0.16259999573230743 1.4071999788284302 -0.003100000089034438";
ProtoInstance1536.fieldValue[1] = fieldValue1538;

fieldValue1499.children[12] = ProtoInstance1536;

let ProtoInstance1539 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1539.name = "Site";
ProtoInstance1539.DEF = "hanim_r_axilla_distal";
let fieldValue1540 = browser.currentScene.createNode("fieldValue");
fieldValue1540.name = "name";
fieldValue1540.value = "r_axilla_distal";
ProtoInstance1539.fieldValue = new MFNode();

ProtoInstance1539.fieldValue[0] = fieldValue1540;

let fieldValue1541 = browser.currentScene.createNode("fieldValue");
fieldValue1541.name = "translation";
fieldValue1541.value = "-0.16030000150203705 1.4098000526428223 -0.08259999752044678";
ProtoInstance1539.fieldValue[1] = fieldValue1541;

fieldValue1499.children[13] = ProtoInstance1539;

let ProtoInstance1542 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1542.name = "Site";
ProtoInstance1542.DEF = "hanim_l_acromion";
let fieldValue1543 = browser.currentScene.createNode("fieldValue");
fieldValue1543.name = "name";
fieldValue1543.value = "l_acromion";
ProtoInstance1542.fieldValue = new MFNode();

ProtoInstance1542.fieldValue[0] = fieldValue1543;

let fieldValue1544 = browser.currentScene.createNode("fieldValue");
fieldValue1544.name = "translation";
fieldValue1544.value = "0.20319999754428864 1.4759999513626099 -0.04899999871850014";
ProtoInstance1542.fieldValue[1] = fieldValue1544;

fieldValue1499.children[14] = ProtoInstance1542;

let ProtoInstance1545 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1545.name = "Site";
ProtoInstance1545.DEF = "hanim_l_axilla_proximal";
let fieldValue1546 = browser.currentScene.createNode("fieldValue");
fieldValue1546.name = "name";
fieldValue1546.value = "l_axilla_proximal";
ProtoInstance1545.fieldValue = new MFNode();

ProtoInstance1545.fieldValue[0] = fieldValue1546;

let fieldValue1547 = browser.currentScene.createNode("fieldValue");
fieldValue1547.name = "translation";
fieldValue1547.value = "0.1776999980211258 1.406499981880188 -0.007499999832361937";
ProtoInstance1545.fieldValue[1] = fieldValue1547;

fieldValue1499.children[15] = ProtoInstance1545;

let ProtoInstance1548 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1548.name = "Site";
ProtoInstance1548.DEF = "hanim_l_axilla_distal";
let fieldValue1549 = browser.currentScene.createNode("fieldValue");
fieldValue1549.name = "name";
fieldValue1549.value = "l_axilla_distal";
ProtoInstance1548.fieldValue = new MFNode();

ProtoInstance1548.fieldValue[0] = fieldValue1549;

let fieldValue1550 = browser.currentScene.createNode("fieldValue");
fieldValue1550.name = "translation";
fieldValue1550.value = "0.17059999704360962 1.4071999788284302 -0.08749999850988388";
ProtoInstance1548.fieldValue[1] = fieldValue1550;

fieldValue1499.children[16] = ProtoInstance1548;

let ProtoInstance1551 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1551.name = "Site";
ProtoInstance1551.DEF = "hanim_r_neck_base";
let fieldValue1552 = browser.currentScene.createNode("fieldValue");
fieldValue1552.name = "name";
fieldValue1552.value = "r_neck_base";
ProtoInstance1551.fieldValue = new MFNode();

ProtoInstance1551.fieldValue[0] = fieldValue1552;

let fieldValue1553 = browser.currentScene.createNode("fieldValue");
fieldValue1553.name = "translation";
fieldValue1553.value = "-0.04190000146627426 1.5148999691009521 -0.02199999988079071";
ProtoInstance1551.fieldValue[1] = fieldValue1553;

fieldValue1499.children[17] = ProtoInstance1551;

let ProtoInstance1554 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1554.name = "Site";
ProtoInstance1554.DEF = "hanim_l_neck_base";
let fieldValue1555 = browser.currentScene.createNode("fieldValue");
fieldValue1555.name = "name";
fieldValue1555.value = "l_neck_base";
ProtoInstance1554.fieldValue = new MFNode();

ProtoInstance1554.fieldValue[0] = fieldValue1555;

let fieldValue1556 = browser.currentScene.createNode("fieldValue");
fieldValue1556.name = "translation";
fieldValue1556.value = "0.06459999829530716 1.5140999555587769 -0.03799999877810478";
ProtoInstance1554.fieldValue[1] = fieldValue1556;

fieldValue1499.children[18] = ProtoInstance1554;

let ProtoInstance1557 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1557.name = "Site";
ProtoInstance1557.DEF = "hanim_navel";
let fieldValue1558 = browser.currentScene.createNode("fieldValue");
fieldValue1558.name = "name";
fieldValue1558.value = "navel";
ProtoInstance1557.fieldValue = new MFNode();

ProtoInstance1557.fieldValue[0] = fieldValue1558;

let fieldValue1559 = browser.currentScene.createNode("fieldValue");
fieldValue1559.name = "translation";
fieldValue1559.value = "0.006899999920278788 1.09660005569458 0.10170000046491623";
ProtoInstance1557.fieldValue[1] = fieldValue1559;

fieldValue1499.children[19] = ProtoInstance1557;

ProtoInstance1497.fieldValue[1] = fieldValue1499;

fieldValue1350.children[3] = ProtoInstance1497;

ProtoInstance1346.fieldValue[3] = fieldValue1350;

fieldValue484.children[10] = ProtoInstance1346;

let ProtoInstance1560 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1560.name = "Joint";
ProtoInstance1560.DEF = "hanim_skullbase";
let fieldValue1561 = browser.currentScene.createNode("fieldValue");
fieldValue1561.name = "stiffness";
fieldValue1561.value = "1 1 1";
ProtoInstance1560.fieldValue = new MFNode();

ProtoInstance1560.fieldValue[0] = fieldValue1561;

let fieldValue1562 = browser.currentScene.createNode("fieldValue");
fieldValue1562.name = "name";
fieldValue1562.value = "skullbase";
ProtoInstance1560.fieldValue[1] = fieldValue1562;

let fieldValue1563 = browser.currentScene.createNode("fieldValue");
fieldValue1563.name = "center";
fieldValue1563.value = "0.004399999976158142 1.62090003490448 0.023600000888109207";
ProtoInstance1560.fieldValue[2] = fieldValue1563;

let fieldValue1564 = browser.currentScene.createNode("fieldValue");
fieldValue1564.name = "children";
let ProtoInstance1565 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1565.name = "Segment";
ProtoInstance1565.DEF = "hanim_skull";
let fieldValue1566 = browser.currentScene.createNode("fieldValue");
fieldValue1566.name = "name";
fieldValue1566.value = "skull";
ProtoInstance1565.fieldValue = new MFNode();

ProtoInstance1565.fieldValue[0] = fieldValue1566;

let fieldValue1567 = browser.currentScene.createNode("fieldValue");
fieldValue1567.name = "children";
let ProtoInstance1568 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1568.name = "Site";
ProtoInstance1568.DEF = "hanim_skull_tip";
let fieldValue1569 = browser.currentScene.createNode("fieldValue");
fieldValue1569.name = "name";
fieldValue1569.value = "skull_tip";
ProtoInstance1568.fieldValue = new MFNode();

ProtoInstance1568.fieldValue[0] = fieldValue1569;

let fieldValue1570 = browser.currentScene.createNode("fieldValue");
fieldValue1570.name = "translation";
fieldValue1570.value = "0.004999999888241291 1.7503999471664429 0.005499999970197678";
ProtoInstance1568.fieldValue[1] = fieldValue1570;

fieldValue1567.children = new MFNode();

fieldValue1567.children[0] = ProtoInstance1568;

let ProtoInstance1571 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1571.name = "Site";
ProtoInstance1571.DEF = "hanim_sellion";
let fieldValue1572 = browser.currentScene.createNode("fieldValue");
fieldValue1572.name = "name";
fieldValue1572.value = "sellion";
ProtoInstance1571.fieldValue = new MFNode();

ProtoInstance1571.fieldValue[0] = fieldValue1572;

let fieldValue1573 = browser.currentScene.createNode("fieldValue");
fieldValue1573.name = "translation";
fieldValue1573.value = "0.005799999926239252 1.631600022315979 0.0851999968290329";
ProtoInstance1571.fieldValue[1] = fieldValue1573;

fieldValue1567.children[1] = ProtoInstance1571;

let ProtoInstance1574 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1574.name = "Site";
ProtoInstance1574.DEF = "hanim_r_infraorbitale";
let fieldValue1575 = browser.currentScene.createNode("fieldValue");
fieldValue1575.name = "name";
fieldValue1575.value = "r_infraorbitale";
ProtoInstance1574.fieldValue = new MFNode();

ProtoInstance1574.fieldValue[0] = fieldValue1575;

let fieldValue1576 = browser.currentScene.createNode("fieldValue");
fieldValue1576.name = "translation";
fieldValue1576.value = "-0.02370000071823597 1.6171000003814697 0.07519999891519547";
ProtoInstance1574.fieldValue[1] = fieldValue1576;

fieldValue1567.children[2] = ProtoInstance1574;

let ProtoInstance1577 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1577.name = "Site";
ProtoInstance1577.DEF = "hanim_l_infraorbitale";
let fieldValue1578 = browser.currentScene.createNode("fieldValue");
fieldValue1578.name = "name";
fieldValue1578.value = "l_infraorbitale";
ProtoInstance1577.fieldValue = new MFNode();

ProtoInstance1577.fieldValue[0] = fieldValue1578;

let fieldValue1579 = browser.currentScene.createNode("fieldValue");
fieldValue1579.name = "translation";
fieldValue1579.value = "0.0340999998152256 1.6171000003814697 0.07519999891519547";
ProtoInstance1577.fieldValue[1] = fieldValue1579;

fieldValue1567.children[3] = ProtoInstance1577;

let ProtoInstance1580 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1580.name = "Site";
ProtoInstance1580.DEF = "hanim_supramenton";
let fieldValue1581 = browser.currentScene.createNode("fieldValue");
fieldValue1581.name = "name";
fieldValue1581.value = "supramenton";
ProtoInstance1580.fieldValue = new MFNode();

ProtoInstance1580.fieldValue[0] = fieldValue1581;

let fieldValue1582 = browser.currentScene.createNode("fieldValue");
fieldValue1582.name = "translation";
fieldValue1582.value = "0.006099999882280827 1.5410000085830688 0.08049999922513962";
ProtoInstance1580.fieldValue[1] = fieldValue1582;

fieldValue1567.children[4] = ProtoInstance1580;

let ProtoInstance1583 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1583.name = "Site";
ProtoInstance1583.DEF = "hanim_r_tragion";
let fieldValue1584 = browser.currentScene.createNode("fieldValue");
fieldValue1584.name = "name";
fieldValue1584.value = "r_tragion";
ProtoInstance1583.fieldValue = new MFNode();

ProtoInstance1583.fieldValue[0] = fieldValue1584;

let fieldValue1585 = browser.currentScene.createNode("fieldValue");
fieldValue1585.name = "translation";
fieldValue1585.value = "-0.06459999829530716 1.6346999406814575 0.03020000085234642";
ProtoInstance1583.fieldValue[1] = fieldValue1585;

fieldValue1567.children[5] = ProtoInstance1583;

let ProtoInstance1586 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1586.name = "Site";
ProtoInstance1586.DEF = "hanim_r_gonion";
let fieldValue1587 = browser.currentScene.createNode("fieldValue");
fieldValue1587.name = "name";
fieldValue1587.value = "r_gonion";
ProtoInstance1586.fieldValue = new MFNode();

ProtoInstance1586.fieldValue[0] = fieldValue1587;

let fieldValue1588 = browser.currentScene.createNode("fieldValue");
fieldValue1588.name = "translation";
fieldValue1588.value = "-0.052000001072883606 1.552899956703186 0.034699998795986176";
ProtoInstance1586.fieldValue[1] = fieldValue1588;

fieldValue1567.children[6] = ProtoInstance1586;

let ProtoInstance1589 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1589.name = "Site";
ProtoInstance1589.DEF = "hanim_l_tragion";
let fieldValue1590 = browser.currentScene.createNode("fieldValue");
fieldValue1590.name = "name";
fieldValue1590.value = "l_tragion";
ProtoInstance1589.fieldValue = new MFNode();

ProtoInstance1589.fieldValue[0] = fieldValue1590;

let fieldValue1591 = browser.currentScene.createNode("fieldValue");
fieldValue1591.name = "translation";
fieldValue1591.value = "0.0738999992609024 1.6347999572753906 0.028200000524520874";
ProtoInstance1589.fieldValue[1] = fieldValue1591;

fieldValue1567.children[7] = ProtoInstance1589;

let ProtoInstance1592 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1592.name = "Site";
ProtoInstance1592.DEF = "hanim_l_gonion";
let fieldValue1593 = browser.currentScene.createNode("fieldValue");
fieldValue1593.name = "name";
fieldValue1593.value = "l_gonion";
ProtoInstance1592.fieldValue = new MFNode();

ProtoInstance1592.fieldValue[0] = fieldValue1593;

let fieldValue1594 = browser.currentScene.createNode("fieldValue");
fieldValue1594.name = "translation";
fieldValue1594.value = "0.06310000270605087 1.5529999732971191 0.032999999821186066";
ProtoInstance1592.fieldValue[1] = fieldValue1594;

fieldValue1567.children[8] = ProtoInstance1592;

let ProtoInstance1595 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1595.name = "Site";
ProtoInstance1595.DEF = "hanim_nuchale";
let fieldValue1596 = browser.currentScene.createNode("fieldValue");
fieldValue1596.name = "name";
fieldValue1596.value = "nuchale";
ProtoInstance1595.fieldValue = new MFNode();

ProtoInstance1595.fieldValue[0] = fieldValue1596;

let fieldValue1597 = browser.currentScene.createNode("fieldValue");
fieldValue1597.name = "translation";
fieldValue1597.value = "0.0038999998942017555 1.5972000360488892 -0.07959999889135361";
ProtoInstance1595.fieldValue[1] = fieldValue1597;

fieldValue1567.children[9] = ProtoInstance1595;

ProtoInstance1565.fieldValue[1] = fieldValue1567;

fieldValue1564.children = new MFNode();

fieldValue1564.children[0] = ProtoInstance1565;

ProtoInstance1560.fieldValue[3] = fieldValue1564;

fieldValue484.children[11] = ProtoInstance1560;

let ProtoInstance1598 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1598.name = "Joint";
ProtoInstance1598.DEF = "hanim_l_shoulder";
let fieldValue1599 = browser.currentScene.createNode("fieldValue");
fieldValue1599.name = "stiffness";
fieldValue1599.value = "1 1 1";
ProtoInstance1598.fieldValue = new MFNode();

ProtoInstance1598.fieldValue[0] = fieldValue1599;

let fieldValue1600 = browser.currentScene.createNode("fieldValue");
fieldValue1600.name = "name";
fieldValue1600.value = "l_shoulder";
ProtoInstance1598.fieldValue[1] = fieldValue1600;

let fieldValue1601 = browser.currentScene.createNode("fieldValue");
fieldValue1601.name = "center";
fieldValue1601.value = "0.2029000073671341 1.437600016593933 -0.03869999945163727";
ProtoInstance1598.fieldValue[2] = fieldValue1601;

let fieldValue1602 = browser.currentScene.createNode("fieldValue");
fieldValue1602.name = "children";
let ProtoInstance1603 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1603.name = "Joint";
ProtoInstance1603.DEF = "hanim_l_elbow";
let fieldValue1604 = browser.currentScene.createNode("fieldValue");
fieldValue1604.name = "stiffness";
fieldValue1604.value = "1 1 1";
ProtoInstance1603.fieldValue = new MFNode();

ProtoInstance1603.fieldValue[0] = fieldValue1604;

let fieldValue1605 = browser.currentScene.createNode("fieldValue");
fieldValue1605.name = "name";
fieldValue1605.value = "l_elbow";
ProtoInstance1603.fieldValue[1] = fieldValue1605;

let fieldValue1606 = browser.currentScene.createNode("fieldValue");
fieldValue1606.name = "center";
fieldValue1606.value = "0.2013999968767166 1.135699987411499 -0.0681999996304512";
ProtoInstance1603.fieldValue[2] = fieldValue1606;

let fieldValue1607 = browser.currentScene.createNode("fieldValue");
fieldValue1607.name = "children";
let ProtoInstance1608 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1608.name = "Joint";
ProtoInstance1608.DEF = "hanim_l_radiocarpal";
let fieldValue1609 = browser.currentScene.createNode("fieldValue");
fieldValue1609.name = "stiffness";
fieldValue1609.value = "1 1 1";
ProtoInstance1608.fieldValue = new MFNode();

ProtoInstance1608.fieldValue[0] = fieldValue1609;

let fieldValue1610 = browser.currentScene.createNode("fieldValue");
fieldValue1610.name = "name";
fieldValue1610.value = "l_radiocarpal";
ProtoInstance1608.fieldValue[1] = fieldValue1610;

let fieldValue1611 = browser.currentScene.createNode("fieldValue");
fieldValue1611.name = "center";
fieldValue1611.value = "0.19840000569820404 0.8662999868392944 -0.05829999968409538";
ProtoInstance1608.fieldValue[2] = fieldValue1611;

let fieldValue1612 = browser.currentScene.createNode("fieldValue");
fieldValue1612.name = "children";
let ProtoInstance1613 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1613.name = "Segment";
ProtoInstance1613.DEF = "hanim_l_hand";
let fieldValue1614 = browser.currentScene.createNode("fieldValue");
fieldValue1614.name = "name";
fieldValue1614.value = "l_hand";
ProtoInstance1613.fieldValue = new MFNode();

ProtoInstance1613.fieldValue[0] = fieldValue1614;

let fieldValue1615 = browser.currentScene.createNode("fieldValue");
fieldValue1615.name = "children";
let ProtoInstance1616 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1616.name = "Site";
ProtoInstance1616.DEF = "hanim_l_hand_tip";
let fieldValue1617 = browser.currentScene.createNode("fieldValue");
fieldValue1617.name = "name";
fieldValue1617.value = "l_hand_tip";
ProtoInstance1616.fieldValue = new MFNode();

ProtoInstance1616.fieldValue[0] = fieldValue1617;

let fieldValue1618 = browser.currentScene.createNode("fieldValue");
fieldValue1618.name = "translation";
fieldValue1618.value = "0.20800000429153442 0.6730999946594238 -0.04910000041127205";
ProtoInstance1616.fieldValue[1] = fieldValue1618;

fieldValue1615.children = new MFNode();

fieldValue1615.children[0] = ProtoInstance1616;

let ProtoInstance1619 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1619.name = "Site";
ProtoInstance1619.DEF = "hanim_l_metacarpal_phalanx_2";
let fieldValue1620 = browser.currentScene.createNode("fieldValue");
fieldValue1620.name = "name";
fieldValue1620.value = "l_metacarpal_phalanx_2";
ProtoInstance1619.fieldValue = new MFNode();

ProtoInstance1619.fieldValue[0] = fieldValue1620;

let fieldValue1621 = browser.currentScene.createNode("fieldValue");
fieldValue1621.name = "translation";
fieldValue1621.value = "0.20090000331401825 0.8138999938964844 -0.02370000071823597";
ProtoInstance1619.fieldValue[1] = fieldValue1621;

fieldValue1615.children[1] = ProtoInstance1619;

let ProtoInstance1622 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1622.name = "Site";
ProtoInstance1622.DEF = "hanim_l_dactylion";
let fieldValue1623 = browser.currentScene.createNode("fieldValue");
fieldValue1623.name = "name";
fieldValue1623.value = "l_dactylion";
ProtoInstance1622.fieldValue = new MFNode();

ProtoInstance1622.fieldValue[0] = fieldValue1623;

let fieldValue1624 = browser.currentScene.createNode("fieldValue");
fieldValue1624.name = "translation";
fieldValue1624.value = "0.20559999346733093 0.6743000149726868 -0.04820000007748604";
ProtoInstance1622.fieldValue[1] = fieldValue1624;

fieldValue1615.children[2] = ProtoInstance1622;

let ProtoInstance1625 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1625.name = "Site";
ProtoInstance1625.DEF = "hanim_l_ulnar_styloid";
let fieldValue1626 = browser.currentScene.createNode("fieldValue");
fieldValue1626.name = "name";
fieldValue1626.value = "l_ulnar_styloid";
ProtoInstance1625.fieldValue = new MFNode();

ProtoInstance1625.fieldValue[0] = fieldValue1626;

let fieldValue1627 = browser.currentScene.createNode("fieldValue");
fieldValue1627.name = "translation";
fieldValue1627.value = "-0.2142000049352646 0.8529000282287598 -0.06480000168085098";
ProtoInstance1625.fieldValue[1] = fieldValue1627;

fieldValue1615.children[3] = ProtoInstance1625;

let ProtoInstance1628 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1628.name = "Site";
ProtoInstance1628.DEF = "hanim_l_metacarpal_phalanx_5";
let fieldValue1629 = browser.currentScene.createNode("fieldValue");
fieldValue1629.name = "name";
fieldValue1629.value = "l_metacarpal_phalanx_5";
ProtoInstance1628.fieldValue = new MFNode();

ProtoInstance1628.fieldValue[0] = fieldValue1629;

let fieldValue1630 = browser.currentScene.createNode("fieldValue");
fieldValue1630.name = "translation";
fieldValue1630.value = "0.19290000200271606 0.7860000133514404 -0.11219999939203262";
ProtoInstance1628.fieldValue[1] = fieldValue1630;

fieldValue1615.children[4] = ProtoInstance1628;

ProtoInstance1613.fieldValue[1] = fieldValue1615;

fieldValue1612.children = new MFNode();

fieldValue1612.children[0] = ProtoInstance1613;

ProtoInstance1608.fieldValue[3] = fieldValue1612;

fieldValue1607.children = new MFNode();

fieldValue1607.children[0] = ProtoInstance1608;

let ProtoInstance1631 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1631.name = "Segment";
ProtoInstance1631.DEF = "hanim_l_forearm";
let fieldValue1632 = browser.currentScene.createNode("fieldValue");
fieldValue1632.name = "name";
fieldValue1632.value = "l_forearm";
ProtoInstance1631.fieldValue = new MFNode();

ProtoInstance1631.fieldValue[0] = fieldValue1632;

let fieldValue1633 = browser.currentScene.createNode("fieldValue");
fieldValue1633.name = "children";
let ProtoInstance1634 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1634.name = "Site";
ProtoInstance1634.DEF = "hanim_l_radial_styloid";
let fieldValue1635 = browser.currentScene.createNode("fieldValue");
fieldValue1635.name = "name";
fieldValue1635.value = "l_radial_styloid";
ProtoInstance1634.fieldValue = new MFNode();

ProtoInstance1634.fieldValue[0] = fieldValue1635;

let fieldValue1636 = browser.currentScene.createNode("fieldValue");
fieldValue1636.name = "translation";
fieldValue1636.value = "0.19009999930858612 0.8644999861717224 -0.04149999842047691";
ProtoInstance1634.fieldValue[1] = fieldValue1636;

fieldValue1633.children = new MFNode();

fieldValue1633.children[0] = ProtoInstance1634;

let ProtoInstance1637 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1637.name = "Site";
ProtoInstance1637.DEF = "hanim_l_olecranon";
let fieldValue1638 = browser.currentScene.createNode("fieldValue");
fieldValue1638.name = "name";
fieldValue1638.value = "l_olecranon";
ProtoInstance1637.fieldValue = new MFNode();

ProtoInstance1637.fieldValue[0] = fieldValue1638;

let fieldValue1639 = browser.currentScene.createNode("fieldValue");
fieldValue1639.name = "translation";
fieldValue1639.value = "-0.19619999825954437 1.1375000476837158 -0.11230000108480453";
ProtoInstance1637.fieldValue[1] = fieldValue1639;

fieldValue1633.children[1] = ProtoInstance1637;

let ProtoInstance1640 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1640.name = "Site";
ProtoInstance1640.DEF = "hanim_l_humeral_medial_epicondyles";
let fieldValue1641 = browser.currentScene.createNode("fieldValue");
fieldValue1641.name = "name";
fieldValue1641.value = "l_humeral_medial_epicondyles";
ProtoInstance1640.fieldValue = new MFNode();

ProtoInstance1640.fieldValue[0] = fieldValue1641;

let fieldValue1642 = browser.currentScene.createNode("fieldValue");
fieldValue1642.name = "translation";
fieldValue1642.value = "0.17350000143051147 1.1272000074386597 -0.11129999905824661";
ProtoInstance1640.fieldValue[1] = fieldValue1642;

fieldValue1633.children[2] = ProtoInstance1640;

let ProtoInstance1643 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1643.name = "Site";
ProtoInstance1643.DEF = "hanim_l_radiale";
let fieldValue1644 = browser.currentScene.createNode("fieldValue");
fieldValue1644.name = "name";
fieldValue1644.value = "l_radiale";
ProtoInstance1643.fieldValue = new MFNode();

ProtoInstance1643.fieldValue[0] = fieldValue1644;

let fieldValue1645 = browser.currentScene.createNode("fieldValue");
fieldValue1645.name = "translation";
fieldValue1645.value = "0.21819999814033508 1.1211999654769897 -0.11670000106096268";
ProtoInstance1643.fieldValue[1] = fieldValue1645;

fieldValue1633.children[3] = ProtoInstance1643;

ProtoInstance1631.fieldValue[1] = fieldValue1633;

fieldValue1607.children[1] = ProtoInstance1631;

ProtoInstance1603.fieldValue[3] = fieldValue1607;

fieldValue1602.children = new MFNode();

fieldValue1602.children[0] = ProtoInstance1603;

let ProtoInstance1646 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1646.name = "Segment";
ProtoInstance1646.DEF = "hanim_l_upperarm";
let fieldValue1647 = browser.currentScene.createNode("fieldValue");
fieldValue1647.name = "name";
fieldValue1647.value = "l_upperarm";
ProtoInstance1646.fieldValue = new MFNode();

ProtoInstance1646.fieldValue[0] = fieldValue1647;

let fieldValue1648 = browser.currentScene.createNode("fieldValue");
fieldValue1648.name = "children";
let ProtoInstance1649 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1649.name = "Site";
ProtoInstance1649.DEF = "hanim_l_humeral_lateral_epicondyles";
let fieldValue1650 = browser.currentScene.createNode("fieldValue");
fieldValue1650.name = "name";
fieldValue1650.value = "l_humeral_lateral_epicondyles";
ProtoInstance1649.fieldValue = new MFNode();

ProtoInstance1649.fieldValue[0] = fieldValue1650;

let fieldValue1651 = browser.currentScene.createNode("fieldValue");
fieldValue1651.name = "translation";
fieldValue1651.value = "0.2280000001192093 1.1482000350952148 -0.10999999940395355";
ProtoInstance1649.fieldValue[1] = fieldValue1651;

fieldValue1648.children = new MFNode();

fieldValue1648.children[0] = ProtoInstance1649;

ProtoInstance1646.fieldValue[1] = fieldValue1648;

fieldValue1602.children[1] = ProtoInstance1646;

ProtoInstance1598.fieldValue[3] = fieldValue1602;

fieldValue484.children[12] = ProtoInstance1598;

let ProtoInstance1652 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1652.name = "Joint";
ProtoInstance1652.DEF = "hanim_l_elbow";
let fieldValue1653 = browser.currentScene.createNode("fieldValue");
fieldValue1653.name = "stiffness";
fieldValue1653.value = "1 1 1";
ProtoInstance1652.fieldValue = new MFNode();

ProtoInstance1652.fieldValue[0] = fieldValue1653;

let fieldValue1654 = browser.currentScene.createNode("fieldValue");
fieldValue1654.name = "name";
fieldValue1654.value = "l_elbow";
ProtoInstance1652.fieldValue[1] = fieldValue1654;

let fieldValue1655 = browser.currentScene.createNode("fieldValue");
fieldValue1655.name = "center";
fieldValue1655.value = "0.2013999968767166 1.135699987411499 -0.0681999996304512";
ProtoInstance1652.fieldValue[2] = fieldValue1655;

let fieldValue1656 = browser.currentScene.createNode("fieldValue");
fieldValue1656.name = "children";
let ProtoInstance1657 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1657.name = "Joint";
ProtoInstance1657.DEF = "hanim_l_radiocarpal";
let fieldValue1658 = browser.currentScene.createNode("fieldValue");
fieldValue1658.name = "stiffness";
fieldValue1658.value = "1 1 1";
ProtoInstance1657.fieldValue = new MFNode();

ProtoInstance1657.fieldValue[0] = fieldValue1658;

let fieldValue1659 = browser.currentScene.createNode("fieldValue");
fieldValue1659.name = "name";
fieldValue1659.value = "l_radiocarpal";
ProtoInstance1657.fieldValue[1] = fieldValue1659;

let fieldValue1660 = browser.currentScene.createNode("fieldValue");
fieldValue1660.name = "center";
fieldValue1660.value = "0.19840000569820404 0.8662999868392944 -0.05829999968409538";
ProtoInstance1657.fieldValue[2] = fieldValue1660;

let fieldValue1661 = browser.currentScene.createNode("fieldValue");
fieldValue1661.name = "children";
let ProtoInstance1662 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1662.name = "Segment";
ProtoInstance1662.DEF = "hanim_l_hand";
let fieldValue1663 = browser.currentScene.createNode("fieldValue");
fieldValue1663.name = "name";
fieldValue1663.value = "l_hand";
ProtoInstance1662.fieldValue = new MFNode();

ProtoInstance1662.fieldValue[0] = fieldValue1663;

let fieldValue1664 = browser.currentScene.createNode("fieldValue");
fieldValue1664.name = "children";
let ProtoInstance1665 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1665.name = "Site";
ProtoInstance1665.DEF = "hanim_l_hand_tip";
let fieldValue1666 = browser.currentScene.createNode("fieldValue");
fieldValue1666.name = "name";
fieldValue1666.value = "l_hand_tip";
ProtoInstance1665.fieldValue = new MFNode();

ProtoInstance1665.fieldValue[0] = fieldValue1666;

let fieldValue1667 = browser.currentScene.createNode("fieldValue");
fieldValue1667.name = "translation";
fieldValue1667.value = "0.20800000429153442 0.6730999946594238 -0.04910000041127205";
ProtoInstance1665.fieldValue[1] = fieldValue1667;

fieldValue1664.children = new MFNode();

fieldValue1664.children[0] = ProtoInstance1665;

let ProtoInstance1668 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1668.name = "Site";
ProtoInstance1668.DEF = "hanim_l_metacarpal_phalanx_2";
let fieldValue1669 = browser.currentScene.createNode("fieldValue");
fieldValue1669.name = "name";
fieldValue1669.value = "l_metacarpal_phalanx_2";
ProtoInstance1668.fieldValue = new MFNode();

ProtoInstance1668.fieldValue[0] = fieldValue1669;

let fieldValue1670 = browser.currentScene.createNode("fieldValue");
fieldValue1670.name = "translation";
fieldValue1670.value = "0.20090000331401825 0.8138999938964844 -0.02370000071823597";
ProtoInstance1668.fieldValue[1] = fieldValue1670;

fieldValue1664.children[1] = ProtoInstance1668;

let ProtoInstance1671 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1671.name = "Site";
ProtoInstance1671.DEF = "hanim_l_dactylion";
let fieldValue1672 = browser.currentScene.createNode("fieldValue");
fieldValue1672.name = "name";
fieldValue1672.value = "l_dactylion";
ProtoInstance1671.fieldValue = new MFNode();

ProtoInstance1671.fieldValue[0] = fieldValue1672;

let fieldValue1673 = browser.currentScene.createNode("fieldValue");
fieldValue1673.name = "translation";
fieldValue1673.value = "0.20559999346733093 0.6743000149726868 -0.04820000007748604";
ProtoInstance1671.fieldValue[1] = fieldValue1673;

fieldValue1664.children[2] = ProtoInstance1671;

let ProtoInstance1674 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1674.name = "Site";
ProtoInstance1674.DEF = "hanim_l_ulnar_styloid";
let fieldValue1675 = browser.currentScene.createNode("fieldValue");
fieldValue1675.name = "name";
fieldValue1675.value = "l_ulnar_styloid";
ProtoInstance1674.fieldValue = new MFNode();

ProtoInstance1674.fieldValue[0] = fieldValue1675;

let fieldValue1676 = browser.currentScene.createNode("fieldValue");
fieldValue1676.name = "translation";
fieldValue1676.value = "-0.2142000049352646 0.8529000282287598 -0.06480000168085098";
ProtoInstance1674.fieldValue[1] = fieldValue1676;

fieldValue1664.children[3] = ProtoInstance1674;

let ProtoInstance1677 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1677.name = "Site";
ProtoInstance1677.DEF = "hanim_l_metacarpal_phalanx_5";
let fieldValue1678 = browser.currentScene.createNode("fieldValue");
fieldValue1678.name = "name";
fieldValue1678.value = "l_metacarpal_phalanx_5";
ProtoInstance1677.fieldValue = new MFNode();

ProtoInstance1677.fieldValue[0] = fieldValue1678;

let fieldValue1679 = browser.currentScene.createNode("fieldValue");
fieldValue1679.name = "translation";
fieldValue1679.value = "0.19290000200271606 0.7860000133514404 -0.11219999939203262";
ProtoInstance1677.fieldValue[1] = fieldValue1679;

fieldValue1664.children[4] = ProtoInstance1677;

ProtoInstance1662.fieldValue[1] = fieldValue1664;

fieldValue1661.children = new MFNode();

fieldValue1661.children[0] = ProtoInstance1662;

ProtoInstance1657.fieldValue[3] = fieldValue1661;

fieldValue1656.children = new MFNode();

fieldValue1656.children[0] = ProtoInstance1657;

let ProtoInstance1680 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1680.name = "Segment";
ProtoInstance1680.DEF = "hanim_l_forearm";
let fieldValue1681 = browser.currentScene.createNode("fieldValue");
fieldValue1681.name = "name";
fieldValue1681.value = "l_forearm";
ProtoInstance1680.fieldValue = new MFNode();

ProtoInstance1680.fieldValue[0] = fieldValue1681;

let fieldValue1682 = browser.currentScene.createNode("fieldValue");
fieldValue1682.name = "children";
let ProtoInstance1683 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1683.name = "Site";
ProtoInstance1683.DEF = "hanim_l_radial_styloid";
let fieldValue1684 = browser.currentScene.createNode("fieldValue");
fieldValue1684.name = "name";
fieldValue1684.value = "l_radial_styloid";
ProtoInstance1683.fieldValue = new MFNode();

ProtoInstance1683.fieldValue[0] = fieldValue1684;

let fieldValue1685 = browser.currentScene.createNode("fieldValue");
fieldValue1685.name = "translation";
fieldValue1685.value = "0.19009999930858612 0.8644999861717224 -0.04149999842047691";
ProtoInstance1683.fieldValue[1] = fieldValue1685;

fieldValue1682.children = new MFNode();

fieldValue1682.children[0] = ProtoInstance1683;

let ProtoInstance1686 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1686.name = "Site";
ProtoInstance1686.DEF = "hanim_l_olecranon";
let fieldValue1687 = browser.currentScene.createNode("fieldValue");
fieldValue1687.name = "name";
fieldValue1687.value = "l_olecranon";
ProtoInstance1686.fieldValue = new MFNode();

ProtoInstance1686.fieldValue[0] = fieldValue1687;

let fieldValue1688 = browser.currentScene.createNode("fieldValue");
fieldValue1688.name = "translation";
fieldValue1688.value = "-0.19619999825954437 1.1375000476837158 -0.11230000108480453";
ProtoInstance1686.fieldValue[1] = fieldValue1688;

fieldValue1682.children[1] = ProtoInstance1686;

let ProtoInstance1689 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1689.name = "Site";
ProtoInstance1689.DEF = "hanim_l_humeral_medial_epicondyles";
let fieldValue1690 = browser.currentScene.createNode("fieldValue");
fieldValue1690.name = "name";
fieldValue1690.value = "l_humeral_medial_epicondyles";
ProtoInstance1689.fieldValue = new MFNode();

ProtoInstance1689.fieldValue[0] = fieldValue1690;

let fieldValue1691 = browser.currentScene.createNode("fieldValue");
fieldValue1691.name = "translation";
fieldValue1691.value = "0.17350000143051147 1.1272000074386597 -0.11129999905824661";
ProtoInstance1689.fieldValue[1] = fieldValue1691;

fieldValue1682.children[2] = ProtoInstance1689;

let ProtoInstance1692 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1692.name = "Site";
ProtoInstance1692.DEF = "hanim_l_radiale";
let fieldValue1693 = browser.currentScene.createNode("fieldValue");
fieldValue1693.name = "name";
fieldValue1693.value = "l_radiale";
ProtoInstance1692.fieldValue = new MFNode();

ProtoInstance1692.fieldValue[0] = fieldValue1693;

let fieldValue1694 = browser.currentScene.createNode("fieldValue");
fieldValue1694.name = "translation";
fieldValue1694.value = "0.21819999814033508 1.1211999654769897 -0.11670000106096268";
ProtoInstance1692.fieldValue[1] = fieldValue1694;

fieldValue1682.children[3] = ProtoInstance1692;

ProtoInstance1680.fieldValue[1] = fieldValue1682;

fieldValue1656.children[1] = ProtoInstance1680;

ProtoInstance1652.fieldValue[3] = fieldValue1656;

fieldValue484.children[13] = ProtoInstance1652;

let ProtoInstance1695 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1695.name = "Joint";
ProtoInstance1695.DEF = "hanim_l_radiocarpal";
let fieldValue1696 = browser.currentScene.createNode("fieldValue");
fieldValue1696.name = "stiffness";
fieldValue1696.value = "1 1 1";
ProtoInstance1695.fieldValue = new MFNode();

ProtoInstance1695.fieldValue[0] = fieldValue1696;

let fieldValue1697 = browser.currentScene.createNode("fieldValue");
fieldValue1697.name = "name";
fieldValue1697.value = "l_radiocarpal";
ProtoInstance1695.fieldValue[1] = fieldValue1697;

let fieldValue1698 = browser.currentScene.createNode("fieldValue");
fieldValue1698.name = "center";
fieldValue1698.value = "0.19840000569820404 0.8662999868392944 -0.05829999968409538";
ProtoInstance1695.fieldValue[2] = fieldValue1698;

let fieldValue1699 = browser.currentScene.createNode("fieldValue");
fieldValue1699.name = "children";
let ProtoInstance1700 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1700.name = "Segment";
ProtoInstance1700.DEF = "hanim_l_hand";
let fieldValue1701 = browser.currentScene.createNode("fieldValue");
fieldValue1701.name = "name";
fieldValue1701.value = "l_hand";
ProtoInstance1700.fieldValue = new MFNode();

ProtoInstance1700.fieldValue[0] = fieldValue1701;

let fieldValue1702 = browser.currentScene.createNode("fieldValue");
fieldValue1702.name = "children";
let ProtoInstance1703 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1703.name = "Site";
ProtoInstance1703.DEF = "hanim_l_hand_tip";
let fieldValue1704 = browser.currentScene.createNode("fieldValue");
fieldValue1704.name = "name";
fieldValue1704.value = "l_hand_tip";
ProtoInstance1703.fieldValue = new MFNode();

ProtoInstance1703.fieldValue[0] = fieldValue1704;

let fieldValue1705 = browser.currentScene.createNode("fieldValue");
fieldValue1705.name = "translation";
fieldValue1705.value = "0.20800000429153442 0.6730999946594238 -0.04910000041127205";
ProtoInstance1703.fieldValue[1] = fieldValue1705;

fieldValue1702.children = new MFNode();

fieldValue1702.children[0] = ProtoInstance1703;

let ProtoInstance1706 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1706.name = "Site";
ProtoInstance1706.DEF = "hanim_l_metacarpal_phalanx_2";
let fieldValue1707 = browser.currentScene.createNode("fieldValue");
fieldValue1707.name = "name";
fieldValue1707.value = "l_metacarpal_phalanx_2";
ProtoInstance1706.fieldValue = new MFNode();

ProtoInstance1706.fieldValue[0] = fieldValue1707;

let fieldValue1708 = browser.currentScene.createNode("fieldValue");
fieldValue1708.name = "translation";
fieldValue1708.value = "0.20090000331401825 0.8138999938964844 -0.02370000071823597";
ProtoInstance1706.fieldValue[1] = fieldValue1708;

fieldValue1702.children[1] = ProtoInstance1706;

let ProtoInstance1709 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1709.name = "Site";
ProtoInstance1709.DEF = "hanim_l_dactylion";
let fieldValue1710 = browser.currentScene.createNode("fieldValue");
fieldValue1710.name = "name";
fieldValue1710.value = "l_dactylion";
ProtoInstance1709.fieldValue = new MFNode();

ProtoInstance1709.fieldValue[0] = fieldValue1710;

let fieldValue1711 = browser.currentScene.createNode("fieldValue");
fieldValue1711.name = "translation";
fieldValue1711.value = "0.20559999346733093 0.6743000149726868 -0.04820000007748604";
ProtoInstance1709.fieldValue[1] = fieldValue1711;

fieldValue1702.children[2] = ProtoInstance1709;

let ProtoInstance1712 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1712.name = "Site";
ProtoInstance1712.DEF = "hanim_l_ulnar_styloid";
let fieldValue1713 = browser.currentScene.createNode("fieldValue");
fieldValue1713.name = "name";
fieldValue1713.value = "l_ulnar_styloid";
ProtoInstance1712.fieldValue = new MFNode();

ProtoInstance1712.fieldValue[0] = fieldValue1713;

let fieldValue1714 = browser.currentScene.createNode("fieldValue");
fieldValue1714.name = "translation";
fieldValue1714.value = "-0.2142000049352646 0.8529000282287598 -0.06480000168085098";
ProtoInstance1712.fieldValue[1] = fieldValue1714;

fieldValue1702.children[3] = ProtoInstance1712;

let ProtoInstance1715 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1715.name = "Site";
ProtoInstance1715.DEF = "hanim_l_metacarpal_phalanx_5";
let fieldValue1716 = browser.currentScene.createNode("fieldValue");
fieldValue1716.name = "name";
fieldValue1716.value = "l_metacarpal_phalanx_5";
ProtoInstance1715.fieldValue = new MFNode();

ProtoInstance1715.fieldValue[0] = fieldValue1716;

let fieldValue1717 = browser.currentScene.createNode("fieldValue");
fieldValue1717.name = "translation";
fieldValue1717.value = "0.19290000200271606 0.7860000133514404 -0.11219999939203262";
ProtoInstance1715.fieldValue[1] = fieldValue1717;

fieldValue1702.children[4] = ProtoInstance1715;

ProtoInstance1700.fieldValue[1] = fieldValue1702;

fieldValue1699.children = new MFNode();

fieldValue1699.children[0] = ProtoInstance1700;

ProtoInstance1695.fieldValue[3] = fieldValue1699;

fieldValue484.children[14] = ProtoInstance1695;

let ProtoInstance1718 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1718.name = "Joint";
ProtoInstance1718.DEF = "hanim_r_shoulder";
let fieldValue1719 = browser.currentScene.createNode("fieldValue");
fieldValue1719.name = "stiffness";
fieldValue1719.value = "1 1 1";
ProtoInstance1718.fieldValue = new MFNode();

ProtoInstance1718.fieldValue[0] = fieldValue1719;

let fieldValue1720 = browser.currentScene.createNode("fieldValue");
fieldValue1720.name = "name";
fieldValue1720.value = "r_shoulder";
ProtoInstance1718.fieldValue[1] = fieldValue1720;

let fieldValue1721 = browser.currentScene.createNode("fieldValue");
fieldValue1721.name = "center";
fieldValue1721.value = "-0.1906999945640564 1.4407000541687012 -0.032499998807907104";
ProtoInstance1718.fieldValue[2] = fieldValue1721;

let fieldValue1722 = browser.currentScene.createNode("fieldValue");
fieldValue1722.name = "children";
let ProtoInstance1723 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1723.name = "Joint";
ProtoInstance1723.DEF = "hanim_r_elbow";
let fieldValue1724 = browser.currentScene.createNode("fieldValue");
fieldValue1724.name = "stiffness";
fieldValue1724.value = "1 1 1";
ProtoInstance1723.fieldValue = new MFNode();

ProtoInstance1723.fieldValue[0] = fieldValue1724;

let fieldValue1725 = browser.currentScene.createNode("fieldValue");
fieldValue1725.name = "name";
fieldValue1725.value = "r_elbow";
ProtoInstance1723.fieldValue[1] = fieldValue1725;

let fieldValue1726 = browser.currentScene.createNode("fieldValue");
fieldValue1726.name = "center";
fieldValue1726.value = "-0.1949000060558319 1.138800024986267 -0.06199999898672104";
ProtoInstance1723.fieldValue[2] = fieldValue1726;

let fieldValue1727 = browser.currentScene.createNode("fieldValue");
fieldValue1727.name = "children";
let ProtoInstance1728 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1728.name = "Joint";
ProtoInstance1728.DEF = "hanim_r_radiocarpal";
let fieldValue1729 = browser.currentScene.createNode("fieldValue");
fieldValue1729.name = "stiffness";
fieldValue1729.value = "1 1 1";
ProtoInstance1728.fieldValue = new MFNode();

ProtoInstance1728.fieldValue[0] = fieldValue1729;

let fieldValue1730 = browser.currentScene.createNode("fieldValue");
fieldValue1730.name = "name";
fieldValue1730.value = "r_radiocarpal";
ProtoInstance1728.fieldValue[1] = fieldValue1730;

let fieldValue1731 = browser.currentScene.createNode("fieldValue");
fieldValue1731.name = "center";
fieldValue1731.value = "-0.19589999318122864 0.8694000244140625 -0.05209999904036522";
ProtoInstance1728.fieldValue[2] = fieldValue1731;

let fieldValue1732 = browser.currentScene.createNode("fieldValue");
fieldValue1732.name = "children";
let ProtoInstance1733 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1733.name = "Segment";
ProtoInstance1733.DEF = "hanim_r_hand";
let fieldValue1734 = browser.currentScene.createNode("fieldValue");
fieldValue1734.name = "name";
fieldValue1734.value = "r_hand";
ProtoInstance1733.fieldValue = new MFNode();

ProtoInstance1733.fieldValue[0] = fieldValue1734;

let fieldValue1735 = browser.currentScene.createNode("fieldValue");
fieldValue1735.name = "children";
let ProtoInstance1736 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1736.name = "Site";
ProtoInstance1736.DEF = "hanim_r_hand_tip";
let fieldValue1737 = browser.currentScene.createNode("fieldValue");
fieldValue1737.name = "name";
fieldValue1737.value = "r_hand_tip";
ProtoInstance1736.fieldValue = new MFNode();

ProtoInstance1736.fieldValue[0] = fieldValue1737;

let fieldValue1738 = browser.currentScene.createNode("fieldValue");
fieldValue1738.name = "translation";
fieldValue1738.value = "-0.19689999520778656 0.6758000254631042 -0.04270000010728836";
ProtoInstance1736.fieldValue[1] = fieldValue1738;

fieldValue1735.children = new MFNode();

fieldValue1735.children[0] = ProtoInstance1736;

let ProtoInstance1739 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1739.name = "Site";
ProtoInstance1739.DEF = "hanim_r_metacarpal_phalanx_2";
let fieldValue1740 = browser.currentScene.createNode("fieldValue");
fieldValue1740.name = "name";
fieldValue1740.value = "r_metacarpal_phalanx_2";
ProtoInstance1739.fieldValue = new MFNode();

ProtoInstance1739.fieldValue[0] = fieldValue1740;

let fieldValue1741 = browser.currentScene.createNode("fieldValue");
fieldValue1741.name = "translation";
fieldValue1741.value = "-0.19769999384880066 0.8169000148773193 -0.01769999973475933";
ProtoInstance1739.fieldValue[1] = fieldValue1741;

fieldValue1735.children[1] = ProtoInstance1739;

let ProtoInstance1742 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1742.name = "Site";
ProtoInstance1742.DEF = "hanim_r_dactylion";
let fieldValue1743 = browser.currentScene.createNode("fieldValue");
fieldValue1743.name = "name";
fieldValue1743.value = "r_dactylion";
ProtoInstance1742.fieldValue = new MFNode();

ProtoInstance1742.fieldValue[0] = fieldValue1743;

let fieldValue1744 = browser.currentScene.createNode("fieldValue");
fieldValue1744.name = "translation";
fieldValue1744.value = "-0.1941000074148178 0.6772000193595886 -0.04230000078678131";
ProtoInstance1742.fieldValue[1] = fieldValue1744;

fieldValue1735.children[2] = ProtoInstance1742;

let ProtoInstance1745 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1745.name = "Site";
ProtoInstance1745.DEF = "hanim_r_ulnar_styloid";
let fieldValue1746 = browser.currentScene.createNode("fieldValue");
fieldValue1746.name = "name";
fieldValue1746.value = "r_ulnar_styloid";
ProtoInstance1745.fieldValue = new MFNode();

ProtoInstance1745.fieldValue[0] = fieldValue1746;

let fieldValue1747 = browser.currentScene.createNode("fieldValue");
fieldValue1747.name = "translation";
fieldValue1747.value = "-0.21170000731945038 0.8561999797821045 -0.058400001376867294";
ProtoInstance1745.fieldValue[1] = fieldValue1747;

fieldValue1735.children[3] = ProtoInstance1745;

let ProtoInstance1748 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1748.name = "Site";
ProtoInstance1748.DEF = "hanim_r_metacarpal_phalanx_5";
let fieldValue1749 = browser.currentScene.createNode("fieldValue");
fieldValue1749.name = "name";
fieldValue1749.value = "r_metacarpal_phalanx_5";
ProtoInstance1748.fieldValue = new MFNode();

ProtoInstance1748.fieldValue[0] = fieldValue1749;

let fieldValue1750 = browser.currentScene.createNode("fieldValue");
fieldValue1750.name = "translation";
fieldValue1750.value = "-0.19290000200271606 0.7889999747276306 -0.10639999806880951";
ProtoInstance1748.fieldValue[1] = fieldValue1750;

fieldValue1735.children[4] = ProtoInstance1748;

ProtoInstance1733.fieldValue[1] = fieldValue1735;

fieldValue1732.children = new MFNode();

fieldValue1732.children[0] = ProtoInstance1733;

ProtoInstance1728.fieldValue[3] = fieldValue1732;

fieldValue1727.children = new MFNode();

fieldValue1727.children[0] = ProtoInstance1728;

let ProtoInstance1751 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1751.name = "Segment";
ProtoInstance1751.DEF = "hanim_r_forearm";
let fieldValue1752 = browser.currentScene.createNode("fieldValue");
fieldValue1752.name = "name";
fieldValue1752.value = "r_forearm";
ProtoInstance1751.fieldValue = new MFNode();

ProtoInstance1751.fieldValue[0] = fieldValue1752;

let fieldValue1753 = browser.currentScene.createNode("fieldValue");
fieldValue1753.name = "children";
let ProtoInstance1754 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1754.name = "Site";
ProtoInstance1754.DEF = "hanim_r_radial_styloid";
let fieldValue1755 = browser.currentScene.createNode("fieldValue");
fieldValue1755.name = "name";
fieldValue1755.value = "r_radial_styloid";
ProtoInstance1754.fieldValue = new MFNode();

ProtoInstance1754.fieldValue[0] = fieldValue1755;

let fieldValue1756 = browser.currentScene.createNode("fieldValue");
fieldValue1756.name = "translation";
fieldValue1756.value = "-0.188400000333786 0.8676000237464905 -0.035999998450279236";
ProtoInstance1754.fieldValue[1] = fieldValue1756;

fieldValue1753.children = new MFNode();

fieldValue1753.children[0] = ProtoInstance1754;

let ProtoInstance1757 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1757.name = "Site";
ProtoInstance1757.DEF = "hanim_r_olecranon";
let fieldValue1758 = browser.currentScene.createNode("fieldValue");
fieldValue1758.name = "name";
fieldValue1758.value = "r_olecranon";
ProtoInstance1757.fieldValue = new MFNode();

ProtoInstance1757.fieldValue[0] = fieldValue1758;

let fieldValue1759 = browser.currentScene.createNode("fieldValue");
fieldValue1759.name = "translation";
fieldValue1759.value = "-0.1906999945640564 1.1404999494552612 -0.10649999976158142";
ProtoInstance1757.fieldValue[1] = fieldValue1759;

fieldValue1753.children[1] = ProtoInstance1757;

let ProtoInstance1760 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1760.name = "Site";
ProtoInstance1760.DEF = "hanim_r_humeral_medial_epicondyles";
let fieldValue1761 = browser.currentScene.createNode("fieldValue");
fieldValue1761.name = "name";
fieldValue1761.value = "r_humeral_medial_epicondyles";
ProtoInstance1760.fieldValue = new MFNode();

ProtoInstance1760.fieldValue[0] = fieldValue1761;

let fieldValue1762 = browser.currentScene.createNode("fieldValue");
fieldValue1762.name = "translation";
fieldValue1762.value = "-0.1679999977350235 1.1297999620437622 -0.10620000213384628";
ProtoInstance1760.fieldValue[1] = fieldValue1762;

fieldValue1753.children[2] = ProtoInstance1760;

let ProtoInstance1763 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1763.name = "Site";
ProtoInstance1763.DEF = "hanim_r_radiale";
let fieldValue1764 = browser.currentScene.createNode("fieldValue");
fieldValue1764.name = "name";
fieldValue1764.value = "r_radiale";
ProtoInstance1763.fieldValue = new MFNode();

ProtoInstance1763.fieldValue[0] = fieldValue1764;

let fieldValue1765 = browser.currentScene.createNode("fieldValue");
fieldValue1765.name = "translation";
fieldValue1765.value = "-0.21299999952316284 1.1304999589920044 -0.10909999907016754";
ProtoInstance1763.fieldValue[1] = fieldValue1765;

fieldValue1753.children[3] = ProtoInstance1763;

ProtoInstance1751.fieldValue[1] = fieldValue1753;

fieldValue1727.children[1] = ProtoInstance1751;

ProtoInstance1723.fieldValue[3] = fieldValue1727;

fieldValue1722.children = new MFNode();

fieldValue1722.children[0] = ProtoInstance1723;

let ProtoInstance1766 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1766.name = "Segment";
ProtoInstance1766.DEF = "hanim_r_upperarm";
let fieldValue1767 = browser.currentScene.createNode("fieldValue");
fieldValue1767.name = "name";
fieldValue1767.value = "r_upperarm";
ProtoInstance1766.fieldValue = new MFNode();

ProtoInstance1766.fieldValue[0] = fieldValue1767;

let fieldValue1768 = browser.currentScene.createNode("fieldValue");
fieldValue1768.name = "children";
let ProtoInstance1769 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1769.name = "Site";
ProtoInstance1769.DEF = "hanim_r_humeral_lateral_epicondyles";
let fieldValue1770 = browser.currentScene.createNode("fieldValue");
fieldValue1770.name = "name";
fieldValue1770.value = "r_humeral_lateral_epicondyles";
ProtoInstance1769.fieldValue = new MFNode();

ProtoInstance1769.fieldValue[0] = fieldValue1770;

let fieldValue1771 = browser.currentScene.createNode("fieldValue");
fieldValue1771.name = "translation";
fieldValue1771.value = "-0.2223999947309494 1.1517000198364258 -0.10329999774694443";
ProtoInstance1769.fieldValue[1] = fieldValue1771;

fieldValue1768.children = new MFNode();

fieldValue1768.children[0] = ProtoInstance1769;

ProtoInstance1766.fieldValue[1] = fieldValue1768;

fieldValue1722.children[1] = ProtoInstance1766;

ProtoInstance1718.fieldValue[3] = fieldValue1722;

fieldValue484.children[15] = ProtoInstance1718;

let ProtoInstance1772 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1772.name = "Joint";
ProtoInstance1772.DEF = "hanim_r_elbow";
let fieldValue1773 = browser.currentScene.createNode("fieldValue");
fieldValue1773.name = "stiffness";
fieldValue1773.value = "1 1 1";
ProtoInstance1772.fieldValue = new MFNode();

ProtoInstance1772.fieldValue[0] = fieldValue1773;

let fieldValue1774 = browser.currentScene.createNode("fieldValue");
fieldValue1774.name = "name";
fieldValue1774.value = "r_elbow";
ProtoInstance1772.fieldValue[1] = fieldValue1774;

let fieldValue1775 = browser.currentScene.createNode("fieldValue");
fieldValue1775.name = "center";
fieldValue1775.value = "-0.1949000060558319 1.138800024986267 -0.06199999898672104";
ProtoInstance1772.fieldValue[2] = fieldValue1775;

let fieldValue1776 = browser.currentScene.createNode("fieldValue");
fieldValue1776.name = "children";
let ProtoInstance1777 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1777.name = "Joint";
ProtoInstance1777.DEF = "hanim_r_radiocarpal";
let fieldValue1778 = browser.currentScene.createNode("fieldValue");
fieldValue1778.name = "stiffness";
fieldValue1778.value = "1 1 1";
ProtoInstance1777.fieldValue = new MFNode();

ProtoInstance1777.fieldValue[0] = fieldValue1778;

let fieldValue1779 = browser.currentScene.createNode("fieldValue");
fieldValue1779.name = "name";
fieldValue1779.value = "r_radiocarpal";
ProtoInstance1777.fieldValue[1] = fieldValue1779;

let fieldValue1780 = browser.currentScene.createNode("fieldValue");
fieldValue1780.name = "center";
fieldValue1780.value = "-0.19589999318122864 0.8694000244140625 -0.05209999904036522";
ProtoInstance1777.fieldValue[2] = fieldValue1780;

let fieldValue1781 = browser.currentScene.createNode("fieldValue");
fieldValue1781.name = "children";
let ProtoInstance1782 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1782.name = "Segment";
ProtoInstance1782.DEF = "hanim_r_hand";
let fieldValue1783 = browser.currentScene.createNode("fieldValue");
fieldValue1783.name = "name";
fieldValue1783.value = "r_hand";
ProtoInstance1782.fieldValue = new MFNode();

ProtoInstance1782.fieldValue[0] = fieldValue1783;

let fieldValue1784 = browser.currentScene.createNode("fieldValue");
fieldValue1784.name = "children";
let ProtoInstance1785 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1785.name = "Site";
ProtoInstance1785.DEF = "hanim_r_hand_tip";
let fieldValue1786 = browser.currentScene.createNode("fieldValue");
fieldValue1786.name = "name";
fieldValue1786.value = "r_hand_tip";
ProtoInstance1785.fieldValue = new MFNode();

ProtoInstance1785.fieldValue[0] = fieldValue1786;

let fieldValue1787 = browser.currentScene.createNode("fieldValue");
fieldValue1787.name = "translation";
fieldValue1787.value = "-0.19689999520778656 0.6758000254631042 -0.04270000010728836";
ProtoInstance1785.fieldValue[1] = fieldValue1787;

fieldValue1784.children = new MFNode();

fieldValue1784.children[0] = ProtoInstance1785;

let ProtoInstance1788 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1788.name = "Site";
ProtoInstance1788.DEF = "hanim_r_metacarpal_phalanx_2";
let fieldValue1789 = browser.currentScene.createNode("fieldValue");
fieldValue1789.name = "name";
fieldValue1789.value = "r_metacarpal_phalanx_2";
ProtoInstance1788.fieldValue = new MFNode();

ProtoInstance1788.fieldValue[0] = fieldValue1789;

let fieldValue1790 = browser.currentScene.createNode("fieldValue");
fieldValue1790.name = "translation";
fieldValue1790.value = "-0.19769999384880066 0.8169000148773193 -0.01769999973475933";
ProtoInstance1788.fieldValue[1] = fieldValue1790;

fieldValue1784.children[1] = ProtoInstance1788;

let ProtoInstance1791 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1791.name = "Site";
ProtoInstance1791.DEF = "hanim_r_dactylion";
let fieldValue1792 = browser.currentScene.createNode("fieldValue");
fieldValue1792.name = "name";
fieldValue1792.value = "r_dactylion";
ProtoInstance1791.fieldValue = new MFNode();

ProtoInstance1791.fieldValue[0] = fieldValue1792;

let fieldValue1793 = browser.currentScene.createNode("fieldValue");
fieldValue1793.name = "translation";
fieldValue1793.value = "-0.1941000074148178 0.6772000193595886 -0.04230000078678131";
ProtoInstance1791.fieldValue[1] = fieldValue1793;

fieldValue1784.children[2] = ProtoInstance1791;

let ProtoInstance1794 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1794.name = "Site";
ProtoInstance1794.DEF = "hanim_r_ulnar_styloid";
let fieldValue1795 = browser.currentScene.createNode("fieldValue");
fieldValue1795.name = "name";
fieldValue1795.value = "r_ulnar_styloid";
ProtoInstance1794.fieldValue = new MFNode();

ProtoInstance1794.fieldValue[0] = fieldValue1795;

let fieldValue1796 = browser.currentScene.createNode("fieldValue");
fieldValue1796.name = "translation";
fieldValue1796.value = "-0.21170000731945038 0.8561999797821045 -0.058400001376867294";
ProtoInstance1794.fieldValue[1] = fieldValue1796;

fieldValue1784.children[3] = ProtoInstance1794;

let ProtoInstance1797 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1797.name = "Site";
ProtoInstance1797.DEF = "hanim_r_metacarpal_phalanx_5";
let fieldValue1798 = browser.currentScene.createNode("fieldValue");
fieldValue1798.name = "name";
fieldValue1798.value = "r_metacarpal_phalanx_5";
ProtoInstance1797.fieldValue = new MFNode();

ProtoInstance1797.fieldValue[0] = fieldValue1798;

let fieldValue1799 = browser.currentScene.createNode("fieldValue");
fieldValue1799.name = "translation";
fieldValue1799.value = "-0.19290000200271606 0.7889999747276306 -0.10639999806880951";
ProtoInstance1797.fieldValue[1] = fieldValue1799;

fieldValue1784.children[4] = ProtoInstance1797;

ProtoInstance1782.fieldValue[1] = fieldValue1784;

fieldValue1781.children = new MFNode();

fieldValue1781.children[0] = ProtoInstance1782;

ProtoInstance1777.fieldValue[3] = fieldValue1781;

fieldValue1776.children = new MFNode();

fieldValue1776.children[0] = ProtoInstance1777;

let ProtoInstance1800 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1800.name = "Segment";
ProtoInstance1800.DEF = "hanim_r_forearm";
let fieldValue1801 = browser.currentScene.createNode("fieldValue");
fieldValue1801.name = "name";
fieldValue1801.value = "r_forearm";
ProtoInstance1800.fieldValue = new MFNode();

ProtoInstance1800.fieldValue[0] = fieldValue1801;

let fieldValue1802 = browser.currentScene.createNode("fieldValue");
fieldValue1802.name = "children";
let ProtoInstance1803 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1803.name = "Site";
ProtoInstance1803.DEF = "hanim_r_radial_styloid";
let fieldValue1804 = browser.currentScene.createNode("fieldValue");
fieldValue1804.name = "name";
fieldValue1804.value = "r_radial_styloid";
ProtoInstance1803.fieldValue = new MFNode();

ProtoInstance1803.fieldValue[0] = fieldValue1804;

let fieldValue1805 = browser.currentScene.createNode("fieldValue");
fieldValue1805.name = "translation";
fieldValue1805.value = "-0.188400000333786 0.8676000237464905 -0.035999998450279236";
ProtoInstance1803.fieldValue[1] = fieldValue1805;

fieldValue1802.children = new MFNode();

fieldValue1802.children[0] = ProtoInstance1803;

let ProtoInstance1806 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1806.name = "Site";
ProtoInstance1806.DEF = "hanim_r_olecranon";
let fieldValue1807 = browser.currentScene.createNode("fieldValue");
fieldValue1807.name = "name";
fieldValue1807.value = "r_olecranon";
ProtoInstance1806.fieldValue = new MFNode();

ProtoInstance1806.fieldValue[0] = fieldValue1807;

let fieldValue1808 = browser.currentScene.createNode("fieldValue");
fieldValue1808.name = "translation";
fieldValue1808.value = "-0.1906999945640564 1.1404999494552612 -0.10649999976158142";
ProtoInstance1806.fieldValue[1] = fieldValue1808;

fieldValue1802.children[1] = ProtoInstance1806;

let ProtoInstance1809 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1809.name = "Site";
ProtoInstance1809.DEF = "hanim_r_humeral_medial_epicondyles";
let fieldValue1810 = browser.currentScene.createNode("fieldValue");
fieldValue1810.name = "name";
fieldValue1810.value = "r_humeral_medial_epicondyles";
ProtoInstance1809.fieldValue = new MFNode();

ProtoInstance1809.fieldValue[0] = fieldValue1810;

let fieldValue1811 = browser.currentScene.createNode("fieldValue");
fieldValue1811.name = "translation";
fieldValue1811.value = "-0.1679999977350235 1.1297999620437622 -0.10620000213384628";
ProtoInstance1809.fieldValue[1] = fieldValue1811;

fieldValue1802.children[2] = ProtoInstance1809;

let ProtoInstance1812 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1812.name = "Site";
ProtoInstance1812.DEF = "hanim_r_radiale";
let fieldValue1813 = browser.currentScene.createNode("fieldValue");
fieldValue1813.name = "name";
fieldValue1813.value = "r_radiale";
ProtoInstance1812.fieldValue = new MFNode();

ProtoInstance1812.fieldValue[0] = fieldValue1813;

let fieldValue1814 = browser.currentScene.createNode("fieldValue");
fieldValue1814.name = "translation";
fieldValue1814.value = "-0.21299999952316284 1.1304999589920044 -0.10909999907016754";
ProtoInstance1812.fieldValue[1] = fieldValue1814;

fieldValue1802.children[3] = ProtoInstance1812;

ProtoInstance1800.fieldValue[1] = fieldValue1802;

fieldValue1776.children[1] = ProtoInstance1800;

ProtoInstance1772.fieldValue[3] = fieldValue1776;

fieldValue484.children[16] = ProtoInstance1772;

let ProtoInstance1815 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1815.name = "Joint";
ProtoInstance1815.DEF = "hanim_r_radiocarpal";
let fieldValue1816 = browser.currentScene.createNode("fieldValue");
fieldValue1816.name = "stiffness";
fieldValue1816.value = "1 1 1";
ProtoInstance1815.fieldValue = new MFNode();

ProtoInstance1815.fieldValue[0] = fieldValue1816;

let fieldValue1817 = browser.currentScene.createNode("fieldValue");
fieldValue1817.name = "name";
fieldValue1817.value = "r_radiocarpal";
ProtoInstance1815.fieldValue[1] = fieldValue1817;

let fieldValue1818 = browser.currentScene.createNode("fieldValue");
fieldValue1818.name = "center";
fieldValue1818.value = "-0.19589999318122864 0.8694000244140625 -0.05209999904036522";
ProtoInstance1815.fieldValue[2] = fieldValue1818;

let fieldValue1819 = browser.currentScene.createNode("fieldValue");
fieldValue1819.name = "children";
let ProtoInstance1820 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1820.name = "Segment";
ProtoInstance1820.DEF = "hanim_r_hand";
let fieldValue1821 = browser.currentScene.createNode("fieldValue");
fieldValue1821.name = "name";
fieldValue1821.value = "r_hand";
ProtoInstance1820.fieldValue = new MFNode();

ProtoInstance1820.fieldValue[0] = fieldValue1821;

let fieldValue1822 = browser.currentScene.createNode("fieldValue");
fieldValue1822.name = "children";
let ProtoInstance1823 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1823.name = "Site";
ProtoInstance1823.DEF = "hanim_r_hand_tip";
let fieldValue1824 = browser.currentScene.createNode("fieldValue");
fieldValue1824.name = "name";
fieldValue1824.value = "r_hand_tip";
ProtoInstance1823.fieldValue = new MFNode();

ProtoInstance1823.fieldValue[0] = fieldValue1824;

let fieldValue1825 = browser.currentScene.createNode("fieldValue");
fieldValue1825.name = "translation";
fieldValue1825.value = "-0.19689999520778656 0.6758000254631042 -0.04270000010728836";
ProtoInstance1823.fieldValue[1] = fieldValue1825;

fieldValue1822.children = new MFNode();

fieldValue1822.children[0] = ProtoInstance1823;

let ProtoInstance1826 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1826.name = "Site";
ProtoInstance1826.DEF = "hanim_r_metacarpal_phalanx_2";
let fieldValue1827 = browser.currentScene.createNode("fieldValue");
fieldValue1827.name = "name";
fieldValue1827.value = "r_metacarpal_phalanx_2";
ProtoInstance1826.fieldValue = new MFNode();

ProtoInstance1826.fieldValue[0] = fieldValue1827;

let fieldValue1828 = browser.currentScene.createNode("fieldValue");
fieldValue1828.name = "translation";
fieldValue1828.value = "-0.19769999384880066 0.8169000148773193 -0.01769999973475933";
ProtoInstance1826.fieldValue[1] = fieldValue1828;

fieldValue1822.children[1] = ProtoInstance1826;

let ProtoInstance1829 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1829.name = "Site";
ProtoInstance1829.DEF = "hanim_r_dactylion";
let fieldValue1830 = browser.currentScene.createNode("fieldValue");
fieldValue1830.name = "name";
fieldValue1830.value = "r_dactylion";
ProtoInstance1829.fieldValue = new MFNode();

ProtoInstance1829.fieldValue[0] = fieldValue1830;

let fieldValue1831 = browser.currentScene.createNode("fieldValue");
fieldValue1831.name = "translation";
fieldValue1831.value = "-0.1941000074148178 0.6772000193595886 -0.04230000078678131";
ProtoInstance1829.fieldValue[1] = fieldValue1831;

fieldValue1822.children[2] = ProtoInstance1829;

let ProtoInstance1832 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1832.name = "Site";
ProtoInstance1832.DEF = "hanim_r_ulnar_styloid";
let fieldValue1833 = browser.currentScene.createNode("fieldValue");
fieldValue1833.name = "name";
fieldValue1833.value = "r_ulnar_styloid";
ProtoInstance1832.fieldValue = new MFNode();

ProtoInstance1832.fieldValue[0] = fieldValue1833;

let fieldValue1834 = browser.currentScene.createNode("fieldValue");
fieldValue1834.name = "translation";
fieldValue1834.value = "-0.21170000731945038 0.8561999797821045 -0.058400001376867294";
ProtoInstance1832.fieldValue[1] = fieldValue1834;

fieldValue1822.children[3] = ProtoInstance1832;

let ProtoInstance1835 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1835.name = "Site";
ProtoInstance1835.DEF = "hanim_r_metacarpal_phalanx_5";
let fieldValue1836 = browser.currentScene.createNode("fieldValue");
fieldValue1836.name = "name";
fieldValue1836.value = "r_metacarpal_phalanx_5";
ProtoInstance1835.fieldValue = new MFNode();

ProtoInstance1835.fieldValue[0] = fieldValue1836;

let fieldValue1837 = browser.currentScene.createNode("fieldValue");
fieldValue1837.name = "translation";
fieldValue1837.value = "-0.19290000200271606 0.7889999747276306 -0.10639999806880951";
ProtoInstance1835.fieldValue[1] = fieldValue1837;

fieldValue1822.children[4] = ProtoInstance1835;

ProtoInstance1820.fieldValue[1] = fieldValue1822;

fieldValue1819.children = new MFNode();

fieldValue1819.children[0] = ProtoInstance1820;

ProtoInstance1815.fieldValue[3] = fieldValue1819;

fieldValue484.children[17] = ProtoInstance1815;

ProtoInstance98.fieldValue[1] = fieldValue484;

let fieldValue1838 = browser.currentScene.createNode("fieldValue");
fieldValue1838.name = "segments";
let ProtoInstance1839 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1839.name = "Segment";
ProtoInstance1839.DEF = "hanim_l_middistal";
let fieldValue1840 = browser.currentScene.createNode("fieldValue");
fieldValue1840.name = "name";
fieldValue1840.value = "l_middistal";
ProtoInstance1839.fieldValue = new MFNode();

ProtoInstance1839.fieldValue[0] = fieldValue1840;

let fieldValue1841 = browser.currentScene.createNode("fieldValue");
fieldValue1841.name = "children";
let ProtoInstance1842 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1842.name = "Site";
ProtoInstance1842.DEF = "hanim_l_middistal_tip";
let fieldValue1843 = browser.currentScene.createNode("fieldValue");
fieldValue1843.name = "name";
fieldValue1843.value = "l_middistal_tip";
ProtoInstance1842.fieldValue = new MFNode();

ProtoInstance1842.fieldValue[0] = fieldValue1843;

let fieldValue1844 = browser.currentScene.createNode("fieldValue");
fieldValue1844.name = "translation";
fieldValue1844.value = "0.13539999723434448 0.0015999999595806003 0.147599995136261";
ProtoInstance1842.fieldValue[1] = fieldValue1844;

fieldValue1841.children = new MFNode();

fieldValue1841.children[0] = ProtoInstance1842;

let ProtoInstance1845 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1845.name = "Site";
ProtoInstance1845.DEF = "hanim_l_tarsal_interphalangeal_phalanx_5";
let fieldValue1846 = browser.currentScene.createNode("fieldValue");
fieldValue1846.name = "name";
fieldValue1846.value = "l_tarsal_interphalangeal_phalanx_5";
ProtoInstance1845.fieldValue = new MFNode();

ProtoInstance1845.fieldValue[0] = fieldValue1846;

let fieldValue1847 = browser.currentScene.createNode("fieldValue");
fieldValue1847.name = "translation";
fieldValue1847.value = "0.18250000476837158 0.007000000216066837 0.09279999881982803";
ProtoInstance1845.fieldValue[1] = fieldValue1847;

fieldValue1841.children[1] = ProtoInstance1845;

let ProtoInstance1848 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1848.name = "Site";
ProtoInstance1848.DEF = "hanim_l_tarsal_interphalangeal_phalanx_1";
let fieldValue1849 = browser.currentScene.createNode("fieldValue");
fieldValue1849.name = "name";
fieldValue1849.value = "l_tarsal_interphalangeal_phalanx_1";
ProtoInstance1848.fieldValue = new MFNode();

ProtoInstance1848.fieldValue[0] = fieldValue1849;

let fieldValue1850 = browser.currentScene.createNode("fieldValue");
fieldValue1850.name = "translation";
fieldValue1850.value = "0.08160000294446945 0.02319999970495701 0.010599999688565731";
ProtoInstance1848.fieldValue[1] = fieldValue1850;

fieldValue1841.children[2] = ProtoInstance1848;

let ProtoInstance1851 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1851.name = "Site";
ProtoInstance1851.DEF = "hanim_l_tarsal_distal_phalanx_2";
let fieldValue1852 = browser.currentScene.createNode("fieldValue");
fieldValue1852.name = "name";
fieldValue1852.value = "l_tarsal_distal_phalanx_2";
ProtoInstance1851.fieldValue = new MFNode();

ProtoInstance1851.fieldValue[0] = fieldValue1852;

let fieldValue1853 = browser.currentScene.createNode("fieldValue");
fieldValue1853.name = "translation";
fieldValue1853.value = "0.11949999630451202 0.007899999618530273 0.14329999685287476";
ProtoInstance1851.fieldValue[1] = fieldValue1853;

fieldValue1841.children[3] = ProtoInstance1851;

ProtoInstance1839.fieldValue[1] = fieldValue1841;

fieldValue1838.children = new MFNode();

fieldValue1838.children[0] = ProtoInstance1839;

let ProtoInstance1854 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1854.name = "Segment";
ProtoInstance1854.DEF = "hanim_l_hindfoot";
let fieldValue1855 = browser.currentScene.createNode("fieldValue");
fieldValue1855.name = "name";
fieldValue1855.value = "l_hindfoot";
ProtoInstance1854.fieldValue = new MFNode();

ProtoInstance1854.fieldValue[0] = fieldValue1855;

let fieldValue1856 = browser.currentScene.createNode("fieldValue");
fieldValue1856.name = "children";
let ProtoInstance1857 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1857.name = "Site";
ProtoInstance1857.DEF = "hanim_l_lateral_malleolus";
let fieldValue1858 = browser.currentScene.createNode("fieldValue");
fieldValue1858.name = "name";
fieldValue1858.value = "l_lateral_malleolus";
ProtoInstance1857.fieldValue = new MFNode();

ProtoInstance1857.fieldValue[0] = fieldValue1858;

let fieldValue1859 = browser.currentScene.createNode("fieldValue");
fieldValue1859.name = "translation";
fieldValue1859.value = "0.13079999387264252 0.059700001031160355 -0.10320000350475311";
ProtoInstance1857.fieldValue[1] = fieldValue1859;

fieldValue1856.children = new MFNode();

fieldValue1856.children[0] = ProtoInstance1857;

let ProtoInstance1860 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1860.name = "Site";
ProtoInstance1860.DEF = "hanim_l_medial_malleolus";
let fieldValue1861 = browser.currentScene.createNode("fieldValue");
fieldValue1861.name = "name";
fieldValue1861.value = "l_medial_malleolus";
ProtoInstance1860.fieldValue = new MFNode();

ProtoInstance1860.fieldValue[0] = fieldValue1861;

let fieldValue1862 = browser.currentScene.createNode("fieldValue");
fieldValue1862.name = "translation";
fieldValue1862.value = "0.08900000154972076 0.07159999758005142 -0.08810000121593475";
ProtoInstance1860.fieldValue[1] = fieldValue1862;

fieldValue1856.children[1] = ProtoInstance1860;

let ProtoInstance1863 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1863.name = "Site";
ProtoInstance1863.DEF = "hanim_l_sphyrion";
let fieldValue1864 = browser.currentScene.createNode("fieldValue");
fieldValue1864.name = "name";
fieldValue1864.value = "l_sphyrion";
ProtoInstance1863.fieldValue = new MFNode();

ProtoInstance1863.fieldValue[0] = fieldValue1864;

let fieldValue1865 = browser.currentScene.createNode("fieldValue");
fieldValue1865.name = "translation";
fieldValue1865.value = "0.08900000154972076 0.057500001043081284 -0.09430000185966492";
ProtoInstance1863.fieldValue[1] = fieldValue1865;

fieldValue1856.children[2] = ProtoInstance1863;

let ProtoInstance1866 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1866.name = "Site";
ProtoInstance1866.DEF = "hanim_l_calcaneus_posterior";
let fieldValue1867 = browser.currentScene.createNode("fieldValue");
fieldValue1867.name = "name";
fieldValue1867.value = "l_calcaneus_posterior";
ProtoInstance1866.fieldValue = new MFNode();

ProtoInstance1866.fieldValue[0] = fieldValue1867;

let fieldValue1868 = browser.currentScene.createNode("fieldValue");
fieldValue1868.name = "translation";
fieldValue1868.value = "0.09740000218153 0.02590000070631504 -0.11710000038146973";
ProtoInstance1866.fieldValue[1] = fieldValue1868;

fieldValue1856.children[3] = ProtoInstance1866;

ProtoInstance1854.fieldValue[1] = fieldValue1856;

fieldValue1838.children[1] = ProtoInstance1854;

let ProtoInstance1869 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1869.name = "Segment";
ProtoInstance1869.DEF = "hanim_l_calf";
let fieldValue1870 = browser.currentScene.createNode("fieldValue");
fieldValue1870.name = "name";
fieldValue1870.value = "l_calf";
ProtoInstance1869.fieldValue = new MFNode();

ProtoInstance1869.fieldValue[0] = fieldValue1870;

fieldValue1838.children[2] = ProtoInstance1869;

let ProtoInstance1871 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1871.name = "Segment";
ProtoInstance1871.DEF = "hanim_l_thigh";
let fieldValue1872 = browser.currentScene.createNode("fieldValue");
fieldValue1872.name = "name";
fieldValue1872.value = "l_thigh";
ProtoInstance1871.fieldValue = new MFNode();

ProtoInstance1871.fieldValue[0] = fieldValue1872;

let fieldValue1873 = browser.currentScene.createNode("fieldValue");
fieldValue1873.name = "children";
let ProtoInstance1874 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1874.name = "Site";
ProtoInstance1874.DEF = "hanim_l_knee_crease";
let fieldValue1875 = browser.currentScene.createNode("fieldValue");
fieldValue1875.name = "name";
fieldValue1875.value = "l_knee_crease";
ProtoInstance1874.fieldValue = new MFNode();

ProtoInstance1874.fieldValue[0] = fieldValue1875;

let fieldValue1876 = browser.currentScene.createNode("fieldValue");
fieldValue1876.name = "translation";
fieldValue1876.value = "0.09929999709129333 0.48809999227523804 -0.030899999663233757";
ProtoInstance1874.fieldValue[1] = fieldValue1876;

fieldValue1873.children = new MFNode();

fieldValue1873.children[0] = ProtoInstance1874;

let ProtoInstance1877 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1877.name = "Site";
ProtoInstance1877.DEF = "hanim_l_femoral_lateral_epicondyles";
let fieldValue1878 = browser.currentScene.createNode("fieldValue");
fieldValue1878.name = "name";
fieldValue1878.value = "l_femoral_lateral_epicondyles";
ProtoInstance1877.fieldValue = new MFNode();

ProtoInstance1877.fieldValue[0] = fieldValue1878;

let fieldValue1879 = browser.currentScene.createNode("fieldValue");
fieldValue1879.name = "translation";
fieldValue1879.value = "0.1597999930381775 0.4966999888420105 0.02969999983906746";
ProtoInstance1877.fieldValue[1] = fieldValue1879;

fieldValue1873.children[1] = ProtoInstance1877;

let ProtoInstance1880 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1880.name = "Site";
ProtoInstance1880.DEF = "hanim_l_femoral_medial_epicondyles";
let fieldValue1881 = browser.currentScene.createNode("fieldValue");
fieldValue1881.name = "name";
fieldValue1881.value = "l_femoral_lateral_epicondyles";
ProtoInstance1880.fieldValue = new MFNode();

ProtoInstance1880.fieldValue[0] = fieldValue1881;

let fieldValue1882 = browser.currentScene.createNode("fieldValue");
fieldValue1882.name = "translation";
fieldValue1882.value = "0.039799999445676804 0.49459999799728394 0.030300000682473183";
ProtoInstance1880.fieldValue[1] = fieldValue1882;

fieldValue1873.children[2] = ProtoInstance1880;

ProtoInstance1871.fieldValue[1] = fieldValue1873;

fieldValue1838.children[3] = ProtoInstance1871;

let ProtoInstance1883 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1883.name = "Segment";
ProtoInstance1883.DEF = "hanim_r_middistal";
let fieldValue1884 = browser.currentScene.createNode("fieldValue");
fieldValue1884.name = "name";
fieldValue1884.value = "r_middistal";
ProtoInstance1883.fieldValue = new MFNode();

ProtoInstance1883.fieldValue[0] = fieldValue1884;

let fieldValue1885 = browser.currentScene.createNode("fieldValue");
fieldValue1885.name = "children";
let ProtoInstance1886 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1886.name = "Site";
ProtoInstance1886.DEF = "hanim_r_middistal_tip";
let fieldValue1887 = browser.currentScene.createNode("fieldValue");
fieldValue1887.name = "name";
fieldValue1887.value = "r_middistal_tip";
ProtoInstance1886.fieldValue = new MFNode();

ProtoInstance1886.fieldValue[0] = fieldValue1887;

let fieldValue1888 = browser.currentScene.createNode("fieldValue");
fieldValue1888.name = "translation";
fieldValue1888.value = "-0.10429999977350235 -0.022700000554323196 0.14499999582767487";
ProtoInstance1886.fieldValue[1] = fieldValue1888;

fieldValue1885.children = new MFNode();

fieldValue1885.children[0] = ProtoInstance1886;

let ProtoInstance1889 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1889.name = "Site";
ProtoInstance1889.DEF = "hanim_r_tarsal_interphalangeal_phalanx_5";
let fieldValue1890 = browser.currentScene.createNode("fieldValue");
fieldValue1890.name = "name";
fieldValue1890.value = "r_tarsal_interphalangeal_phalanx_5";
ProtoInstance1889.fieldValue = new MFNode();

ProtoInstance1889.fieldValue[0] = fieldValue1890;

let fieldValue1891 = browser.currentScene.createNode("fieldValue");
fieldValue1891.name = "translation";
fieldValue1891.value = "-0.15230000019073486 0.016599999740719795 0.08950000256299973";
ProtoInstance1889.fieldValue[1] = fieldValue1891;

fieldValue1885.children[1] = ProtoInstance1889;

let ProtoInstance1892 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1892.name = "Site";
ProtoInstance1892.DEF = "hanim_r_tarsal_interphalangeal_phalanx_1";
let fieldValue1893 = browser.currentScene.createNode("fieldValue");
fieldValue1893.name = "name";
fieldValue1893.value = "r_tarsal_interphalangeal_phalanx_1";
ProtoInstance1892.fieldValue = new MFNode();

ProtoInstance1892.fieldValue[0] = fieldValue1893;

let fieldValue1894 = browser.currentScene.createNode("fieldValue");
fieldValue1894.name = "translation";
fieldValue1894.value = "-0.05209999904036522 0.026000000536441803 0.01269999984651804";
ProtoInstance1892.fieldValue[1] = fieldValue1894;

fieldValue1885.children[2] = ProtoInstance1892;

let ProtoInstance1895 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1895.name = "Site";
ProtoInstance1895.DEF = "hanim_r_tarsal_distal_phalanx_2";
let fieldValue1896 = browser.currentScene.createNode("fieldValue");
fieldValue1896.name = "name";
fieldValue1896.value = "r_tarsal_distal_phalanx_2";
ProtoInstance1895.fieldValue = new MFNode();

ProtoInstance1895.fieldValue[0] = fieldValue1896;

let fieldValue1897 = browser.currentScene.createNode("fieldValue");
fieldValue1897.name = "translation";
fieldValue1897.value = "-0.08829999715089798 0.013399999588727951 0.13830000162124634";
ProtoInstance1895.fieldValue[1] = fieldValue1897;

fieldValue1885.children[3] = ProtoInstance1895;

ProtoInstance1883.fieldValue[1] = fieldValue1885;

fieldValue1838.children[4] = ProtoInstance1883;

let ProtoInstance1898 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1898.name = "Segment";
ProtoInstance1898.DEF = "hanim_r_hindfoot";
let fieldValue1899 = browser.currentScene.createNode("fieldValue");
fieldValue1899.name = "name";
fieldValue1899.value = "r_hindfoot";
ProtoInstance1898.fieldValue = new MFNode();

ProtoInstance1898.fieldValue[0] = fieldValue1899;

let fieldValue1900 = browser.currentScene.createNode("fieldValue");
fieldValue1900.name = "children";
let ProtoInstance1901 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1901.name = "Site";
ProtoInstance1901.DEF = "hanim_r_lateral_malleolus";
let fieldValue1902 = browser.currentScene.createNode("fieldValue");
fieldValue1902.name = "name";
fieldValue1902.value = "r_lateral_malleolus";
ProtoInstance1901.fieldValue = new MFNode();

ProtoInstance1901.fieldValue[0] = fieldValue1902;

let fieldValue1903 = browser.currentScene.createNode("fieldValue");
fieldValue1903.name = "translation";
fieldValue1903.value = "-0.1005999967455864 0.0658000037074089 -0.10750000178813934";
ProtoInstance1901.fieldValue[1] = fieldValue1903;

fieldValue1900.children = new MFNode();

fieldValue1900.children[0] = ProtoInstance1901;

let ProtoInstance1904 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1904.name = "Site";
ProtoInstance1904.DEF = "hanim_r_medial_malleolus";
let fieldValue1905 = browser.currentScene.createNode("fieldValue");
fieldValue1905.name = "name";
fieldValue1905.value = "r_medial_malleolus";
ProtoInstance1904.fieldValue = new MFNode();

ProtoInstance1904.fieldValue[0] = fieldValue1905;

let fieldValue1906 = browser.currentScene.createNode("fieldValue");
fieldValue1906.name = "translation";
fieldValue1906.value = "-0.05909999832510948 0.07599999755620956 -0.09279999881982803";
ProtoInstance1904.fieldValue[1] = fieldValue1906;

fieldValue1900.children[1] = ProtoInstance1904;

let ProtoInstance1907 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1907.name = "Site";
ProtoInstance1907.DEF = "hanim_r_sphyrion";
let fieldValue1908 = browser.currentScene.createNode("fieldValue");
fieldValue1908.name = "name";
fieldValue1908.value = "r_sphyrion";
ProtoInstance1907.fieldValue = new MFNode();

ProtoInstance1907.fieldValue[0] = fieldValue1908;

let fieldValue1909 = browser.currentScene.createNode("fieldValue");
fieldValue1909.name = "translation";
fieldValue1909.value = "-0.06030000001192093 0.061000000685453415 -0.10019999742507935";
ProtoInstance1907.fieldValue[1] = fieldValue1909;

fieldValue1900.children[2] = ProtoInstance1907;

let ProtoInstance1910 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1910.name = "Site";
ProtoInstance1910.DEF = "hanim_r_calcaneus_posterior";
let fieldValue1911 = browser.currentScene.createNode("fieldValue");
fieldValue1911.name = "name";
fieldValue1911.value = "r_calcaneus_posterior";
ProtoInstance1910.fieldValue = new MFNode();

ProtoInstance1910.fieldValue[0] = fieldValue1911;

let fieldValue1912 = browser.currentScene.createNode("fieldValue");
fieldValue1912.name = "translation";
fieldValue1912.value = "-0.06920000165700912 0.02969999983906746 -0.12210000306367874";
ProtoInstance1910.fieldValue[1] = fieldValue1912;

fieldValue1900.children[3] = ProtoInstance1910;

ProtoInstance1898.fieldValue[1] = fieldValue1900;

fieldValue1838.children[5] = ProtoInstance1898;

let ProtoInstance1913 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1913.name = "Segment";
ProtoInstance1913.DEF = "hanim_r_calf";
let fieldValue1914 = browser.currentScene.createNode("fieldValue");
fieldValue1914.name = "name";
fieldValue1914.value = "r_calf";
ProtoInstance1913.fieldValue = new MFNode();

ProtoInstance1913.fieldValue[0] = fieldValue1914;

fieldValue1838.children[6] = ProtoInstance1913;

let ProtoInstance1915 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1915.name = "Segment";
ProtoInstance1915.DEF = "hanim_r_thigh";
let fieldValue1916 = browser.currentScene.createNode("fieldValue");
fieldValue1916.name = "name";
fieldValue1916.value = "r_thigh";
ProtoInstance1915.fieldValue = new MFNode();

ProtoInstance1915.fieldValue[0] = fieldValue1916;

let fieldValue1917 = browser.currentScene.createNode("fieldValue");
fieldValue1917.name = "children";
let ProtoInstance1918 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1918.name = "Site";
ProtoInstance1918.DEF = "hanim_r_knee_crease";
let fieldValue1919 = browser.currentScene.createNode("fieldValue");
fieldValue1919.name = "name";
fieldValue1919.value = "r_knee_crease";
ProtoInstance1918.fieldValue = new MFNode();

ProtoInstance1918.fieldValue[0] = fieldValue1919;

let fieldValue1920 = browser.currentScene.createNode("fieldValue");
fieldValue1920.name = "translation";
fieldValue1920.value = "-0.08250000327825546 0.49320000410079956 -0.032600000500679016";
ProtoInstance1918.fieldValue[1] = fieldValue1920;

fieldValue1917.children = new MFNode();

fieldValue1917.children[0] = ProtoInstance1918;

let ProtoInstance1921 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1921.name = "Site";
ProtoInstance1921.DEF = "hanim_r_femoral_lateral_epicondyles";
let fieldValue1922 = browser.currentScene.createNode("fieldValue");
fieldValue1922.name = "name";
fieldValue1922.value = "r_femoral_lateral_epicondyles";
ProtoInstance1921.fieldValue = new MFNode();

ProtoInstance1921.fieldValue[0] = fieldValue1922;

let fieldValue1923 = browser.currentScene.createNode("fieldValue");
fieldValue1923.name = "translation";
fieldValue1923.value = "-0.1421000063419342 0.4991999864578247 0.03099999949336052";
ProtoInstance1921.fieldValue[1] = fieldValue1923;

fieldValue1917.children[1] = ProtoInstance1921;

let ProtoInstance1924 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1924.name = "Site";
ProtoInstance1924.DEF = "hanim_r_femoral_medial_epicondyles";
let fieldValue1925 = browser.currentScene.createNode("fieldValue");
fieldValue1925.name = "name";
fieldValue1925.value = "r_femoral_lateral_epicondyles";
ProtoInstance1924.fieldValue = new MFNode();

ProtoInstance1924.fieldValue[0] = fieldValue1925;

let fieldValue1926 = browser.currentScene.createNode("fieldValue");
fieldValue1926.name = "translation";
fieldValue1926.value = "-0.022099999710917473 0.5013999938964844 0.02889999933540821";
ProtoInstance1924.fieldValue[1] = fieldValue1926;

fieldValue1917.children[2] = ProtoInstance1924;

ProtoInstance1915.fieldValue[1] = fieldValue1917;

fieldValue1838.children[7] = ProtoInstance1915;

let ProtoInstance1927 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1927.name = "Segment";
ProtoInstance1927.DEF = "hanim_pelvis";
let fieldValue1928 = browser.currentScene.createNode("fieldValue");
fieldValue1928.name = "name";
fieldValue1928.value = "pelvis";
ProtoInstance1927.fieldValue = new MFNode();

ProtoInstance1927.fieldValue[0] = fieldValue1928;

fieldValue1838.children[8] = ProtoInstance1927;

let ProtoInstance1929 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1929.name = "Segment";
ProtoInstance1929.DEF = "hanim_skull";
let fieldValue1930 = browser.currentScene.createNode("fieldValue");
fieldValue1930.name = "name";
fieldValue1930.value = "skull";
ProtoInstance1929.fieldValue = new MFNode();

ProtoInstance1929.fieldValue[0] = fieldValue1930;

let fieldValue1931 = browser.currentScene.createNode("fieldValue");
fieldValue1931.name = "children";
let ProtoInstance1932 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1932.name = "Site";
ProtoInstance1932.DEF = "hanim_skull_tip";
let fieldValue1933 = browser.currentScene.createNode("fieldValue");
fieldValue1933.name = "name";
fieldValue1933.value = "skull_tip";
ProtoInstance1932.fieldValue = new MFNode();

ProtoInstance1932.fieldValue[0] = fieldValue1933;

let fieldValue1934 = browser.currentScene.createNode("fieldValue");
fieldValue1934.name = "translation";
fieldValue1934.value = "0.004999999888241291 1.7503999471664429 0.005499999970197678";
ProtoInstance1932.fieldValue[1] = fieldValue1934;

fieldValue1931.children = new MFNode();

fieldValue1931.children[0] = ProtoInstance1932;

let ProtoInstance1935 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1935.name = "Site";
ProtoInstance1935.DEF = "hanim_sellion";
let fieldValue1936 = browser.currentScene.createNode("fieldValue");
fieldValue1936.name = "name";
fieldValue1936.value = "sellion";
ProtoInstance1935.fieldValue = new MFNode();

ProtoInstance1935.fieldValue[0] = fieldValue1936;

let fieldValue1937 = browser.currentScene.createNode("fieldValue");
fieldValue1937.name = "translation";
fieldValue1937.value = "0.005799999926239252 1.631600022315979 0.0851999968290329";
ProtoInstance1935.fieldValue[1] = fieldValue1937;

fieldValue1931.children[1] = ProtoInstance1935;

let ProtoInstance1938 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1938.name = "Site";
ProtoInstance1938.DEF = "hanim_r_infraorbitale";
let fieldValue1939 = browser.currentScene.createNode("fieldValue");
fieldValue1939.name = "name";
fieldValue1939.value = "r_infraorbitale";
ProtoInstance1938.fieldValue = new MFNode();

ProtoInstance1938.fieldValue[0] = fieldValue1939;

let fieldValue1940 = browser.currentScene.createNode("fieldValue");
fieldValue1940.name = "translation";
fieldValue1940.value = "-0.02370000071823597 1.6171000003814697 0.07519999891519547";
ProtoInstance1938.fieldValue[1] = fieldValue1940;

fieldValue1931.children[2] = ProtoInstance1938;

let ProtoInstance1941 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1941.name = "Site";
ProtoInstance1941.DEF = "hanim_l_infraorbitale";
let fieldValue1942 = browser.currentScene.createNode("fieldValue");
fieldValue1942.name = "name";
fieldValue1942.value = "l_infraorbitale";
ProtoInstance1941.fieldValue = new MFNode();

ProtoInstance1941.fieldValue[0] = fieldValue1942;

let fieldValue1943 = browser.currentScene.createNode("fieldValue");
fieldValue1943.name = "translation";
fieldValue1943.value = "0.0340999998152256 1.6171000003814697 0.07519999891519547";
ProtoInstance1941.fieldValue[1] = fieldValue1943;

fieldValue1931.children[3] = ProtoInstance1941;

let ProtoInstance1944 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1944.name = "Site";
ProtoInstance1944.DEF = "hanim_supramenton";
let fieldValue1945 = browser.currentScene.createNode("fieldValue");
fieldValue1945.name = "name";
fieldValue1945.value = "supramenton";
ProtoInstance1944.fieldValue = new MFNode();

ProtoInstance1944.fieldValue[0] = fieldValue1945;

let fieldValue1946 = browser.currentScene.createNode("fieldValue");
fieldValue1946.name = "translation";
fieldValue1946.value = "0.006099999882280827 1.5410000085830688 0.08049999922513962";
ProtoInstance1944.fieldValue[1] = fieldValue1946;

fieldValue1931.children[4] = ProtoInstance1944;

let ProtoInstance1947 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1947.name = "Site";
ProtoInstance1947.DEF = "hanim_r_tragion";
let fieldValue1948 = browser.currentScene.createNode("fieldValue");
fieldValue1948.name = "name";
fieldValue1948.value = "r_tragion";
ProtoInstance1947.fieldValue = new MFNode();

ProtoInstance1947.fieldValue[0] = fieldValue1948;

let fieldValue1949 = browser.currentScene.createNode("fieldValue");
fieldValue1949.name = "translation";
fieldValue1949.value = "-0.06459999829530716 1.6346999406814575 0.03020000085234642";
ProtoInstance1947.fieldValue[1] = fieldValue1949;

fieldValue1931.children[5] = ProtoInstance1947;

let ProtoInstance1950 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1950.name = "Site";
ProtoInstance1950.DEF = "hanim_r_gonion";
let fieldValue1951 = browser.currentScene.createNode("fieldValue");
fieldValue1951.name = "name";
fieldValue1951.value = "r_gonion";
ProtoInstance1950.fieldValue = new MFNode();

ProtoInstance1950.fieldValue[0] = fieldValue1951;

let fieldValue1952 = browser.currentScene.createNode("fieldValue");
fieldValue1952.name = "translation";
fieldValue1952.value = "-0.052000001072883606 1.552899956703186 0.034699998795986176";
ProtoInstance1950.fieldValue[1] = fieldValue1952;

fieldValue1931.children[6] = ProtoInstance1950;

let ProtoInstance1953 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1953.name = "Site";
ProtoInstance1953.DEF = "hanim_l_tragion";
let fieldValue1954 = browser.currentScene.createNode("fieldValue");
fieldValue1954.name = "name";
fieldValue1954.value = "l_tragion";
ProtoInstance1953.fieldValue = new MFNode();

ProtoInstance1953.fieldValue[0] = fieldValue1954;

let fieldValue1955 = browser.currentScene.createNode("fieldValue");
fieldValue1955.name = "translation";
fieldValue1955.value = "0.0738999992609024 1.6347999572753906 0.028200000524520874";
ProtoInstance1953.fieldValue[1] = fieldValue1955;

fieldValue1931.children[7] = ProtoInstance1953;

let ProtoInstance1956 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1956.name = "Site";
ProtoInstance1956.DEF = "hanim_l_gonion";
let fieldValue1957 = browser.currentScene.createNode("fieldValue");
fieldValue1957.name = "name";
fieldValue1957.value = "l_gonion";
ProtoInstance1956.fieldValue = new MFNode();

ProtoInstance1956.fieldValue[0] = fieldValue1957;

let fieldValue1958 = browser.currentScene.createNode("fieldValue");
fieldValue1958.name = "translation";
fieldValue1958.value = "0.06310000270605087 1.5529999732971191 0.032999999821186066";
ProtoInstance1956.fieldValue[1] = fieldValue1958;

fieldValue1931.children[8] = ProtoInstance1956;

let ProtoInstance1959 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1959.name = "Site";
ProtoInstance1959.DEF = "hanim_nuchale";
let fieldValue1960 = browser.currentScene.createNode("fieldValue");
fieldValue1960.name = "name";
fieldValue1960.value = "nuchale";
ProtoInstance1959.fieldValue = new MFNode();

ProtoInstance1959.fieldValue[0] = fieldValue1960;

let fieldValue1961 = browser.currentScene.createNode("fieldValue");
fieldValue1961.name = "translation";
fieldValue1961.value = "0.0038999998942017555 1.5972000360488892 -0.07959999889135361";
ProtoInstance1959.fieldValue[1] = fieldValue1961;

fieldValue1931.children[9] = ProtoInstance1959;

ProtoInstance1929.fieldValue[1] = fieldValue1931;

fieldValue1838.children[9] = ProtoInstance1929;

let ProtoInstance1962 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1962.name = "Segment";
ProtoInstance1962.DEF = "hanim_l_hand";
let fieldValue1963 = browser.currentScene.createNode("fieldValue");
fieldValue1963.name = "name";
fieldValue1963.value = "l_hand";
ProtoInstance1962.fieldValue = new MFNode();

ProtoInstance1962.fieldValue[0] = fieldValue1963;

let fieldValue1964 = browser.currentScene.createNode("fieldValue");
fieldValue1964.name = "children";
let ProtoInstance1965 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1965.name = "Site";
ProtoInstance1965.DEF = "hanim_l_hand_tip";
let fieldValue1966 = browser.currentScene.createNode("fieldValue");
fieldValue1966.name = "name";
fieldValue1966.value = "l_hand_tip";
ProtoInstance1965.fieldValue = new MFNode();

ProtoInstance1965.fieldValue[0] = fieldValue1966;

let fieldValue1967 = browser.currentScene.createNode("fieldValue");
fieldValue1967.name = "translation";
fieldValue1967.value = "0.20800000429153442 0.6730999946594238 -0.04910000041127205";
ProtoInstance1965.fieldValue[1] = fieldValue1967;

fieldValue1964.children = new MFNode();

fieldValue1964.children[0] = ProtoInstance1965;

let ProtoInstance1968 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1968.name = "Site";
ProtoInstance1968.DEF = "hanim_l_metacarpal_phalanx_2";
let fieldValue1969 = browser.currentScene.createNode("fieldValue");
fieldValue1969.name = "name";
fieldValue1969.value = "l_metacarpal_phalanx_2";
ProtoInstance1968.fieldValue = new MFNode();

ProtoInstance1968.fieldValue[0] = fieldValue1969;

let fieldValue1970 = browser.currentScene.createNode("fieldValue");
fieldValue1970.name = "translation";
fieldValue1970.value = "0.20090000331401825 0.8138999938964844 -0.02370000071823597";
ProtoInstance1968.fieldValue[1] = fieldValue1970;

fieldValue1964.children[1] = ProtoInstance1968;

let ProtoInstance1971 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1971.name = "Site";
ProtoInstance1971.DEF = "hanim_l_dactylion";
let fieldValue1972 = browser.currentScene.createNode("fieldValue");
fieldValue1972.name = "name";
fieldValue1972.value = "l_dactylion";
ProtoInstance1971.fieldValue = new MFNode();

ProtoInstance1971.fieldValue[0] = fieldValue1972;

let fieldValue1973 = browser.currentScene.createNode("fieldValue");
fieldValue1973.name = "translation";
fieldValue1973.value = "0.20559999346733093 0.6743000149726868 -0.04820000007748604";
ProtoInstance1971.fieldValue[1] = fieldValue1973;

fieldValue1964.children[2] = ProtoInstance1971;

let ProtoInstance1974 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1974.name = "Site";
ProtoInstance1974.DEF = "hanim_l_ulnar_styloid";
let fieldValue1975 = browser.currentScene.createNode("fieldValue");
fieldValue1975.name = "name";
fieldValue1975.value = "l_ulnar_styloid";
ProtoInstance1974.fieldValue = new MFNode();

ProtoInstance1974.fieldValue[0] = fieldValue1975;

let fieldValue1976 = browser.currentScene.createNode("fieldValue");
fieldValue1976.name = "translation";
fieldValue1976.value = "-0.2142000049352646 0.8529000282287598 -0.06480000168085098";
ProtoInstance1974.fieldValue[1] = fieldValue1976;

fieldValue1964.children[3] = ProtoInstance1974;

let ProtoInstance1977 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1977.name = "Site";
ProtoInstance1977.DEF = "hanim_l_metacarpal_phalanx_5";
let fieldValue1978 = browser.currentScene.createNode("fieldValue");
fieldValue1978.name = "name";
fieldValue1978.value = "l_metacarpal_phalanx_5";
ProtoInstance1977.fieldValue = new MFNode();

ProtoInstance1977.fieldValue[0] = fieldValue1978;

let fieldValue1979 = browser.currentScene.createNode("fieldValue");
fieldValue1979.name = "translation";
fieldValue1979.value = "0.19290000200271606 0.7860000133514404 -0.11219999939203262";
ProtoInstance1977.fieldValue[1] = fieldValue1979;

fieldValue1964.children[4] = ProtoInstance1977;

ProtoInstance1962.fieldValue[1] = fieldValue1964;

fieldValue1838.children[10] = ProtoInstance1962;

let ProtoInstance1980 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1980.name = "Segment";
ProtoInstance1980.DEF = "hanim_l_forearm";
let fieldValue1981 = browser.currentScene.createNode("fieldValue");
fieldValue1981.name = "name";
fieldValue1981.value = "l_forearm";
ProtoInstance1980.fieldValue = new MFNode();

ProtoInstance1980.fieldValue[0] = fieldValue1981;

let fieldValue1982 = browser.currentScene.createNode("fieldValue");
fieldValue1982.name = "children";
let ProtoInstance1983 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1983.name = "Site";
ProtoInstance1983.DEF = "hanim_l_radial_styloid";
let fieldValue1984 = browser.currentScene.createNode("fieldValue");
fieldValue1984.name = "name";
fieldValue1984.value = "l_radial_styloid";
ProtoInstance1983.fieldValue = new MFNode();

ProtoInstance1983.fieldValue[0] = fieldValue1984;

let fieldValue1985 = browser.currentScene.createNode("fieldValue");
fieldValue1985.name = "translation";
fieldValue1985.value = "0.19009999930858612 0.8644999861717224 -0.04149999842047691";
ProtoInstance1983.fieldValue[1] = fieldValue1985;

fieldValue1982.children = new MFNode();

fieldValue1982.children[0] = ProtoInstance1983;

let ProtoInstance1986 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1986.name = "Site";
ProtoInstance1986.DEF = "hanim_l_olecranon";
let fieldValue1987 = browser.currentScene.createNode("fieldValue");
fieldValue1987.name = "name";
fieldValue1987.value = "l_olecranon";
ProtoInstance1986.fieldValue = new MFNode();

ProtoInstance1986.fieldValue[0] = fieldValue1987;

let fieldValue1988 = browser.currentScene.createNode("fieldValue");
fieldValue1988.name = "translation";
fieldValue1988.value = "-0.19619999825954437 1.1375000476837158 -0.11230000108480453";
ProtoInstance1986.fieldValue[1] = fieldValue1988;

fieldValue1982.children[1] = ProtoInstance1986;

let ProtoInstance1989 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1989.name = "Site";
ProtoInstance1989.DEF = "hanim_l_humeral_medial_epicondyles";
let fieldValue1990 = browser.currentScene.createNode("fieldValue");
fieldValue1990.name = "name";
fieldValue1990.value = "l_humeral_medial_epicondyles";
ProtoInstance1989.fieldValue = new MFNode();

ProtoInstance1989.fieldValue[0] = fieldValue1990;

let fieldValue1991 = browser.currentScene.createNode("fieldValue");
fieldValue1991.name = "translation";
fieldValue1991.value = "0.17350000143051147 1.1272000074386597 -0.11129999905824661";
ProtoInstance1989.fieldValue[1] = fieldValue1991;

fieldValue1982.children[2] = ProtoInstance1989;

let ProtoInstance1992 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1992.name = "Site";
ProtoInstance1992.DEF = "hanim_l_radiale";
let fieldValue1993 = browser.currentScene.createNode("fieldValue");
fieldValue1993.name = "name";
fieldValue1993.value = "l_radiale";
ProtoInstance1992.fieldValue = new MFNode();

ProtoInstance1992.fieldValue[0] = fieldValue1993;

let fieldValue1994 = browser.currentScene.createNode("fieldValue");
fieldValue1994.name = "translation";
fieldValue1994.value = "0.21819999814033508 1.1211999654769897 -0.11670000106096268";
ProtoInstance1992.fieldValue[1] = fieldValue1994;

fieldValue1982.children[3] = ProtoInstance1992;

ProtoInstance1980.fieldValue[1] = fieldValue1982;

fieldValue1838.children[11] = ProtoInstance1980;

let ProtoInstance1995 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1995.name = "Segment";
ProtoInstance1995.DEF = "hanim_l_upperarm";
let fieldValue1996 = browser.currentScene.createNode("fieldValue");
fieldValue1996.name = "name";
fieldValue1996.value = "l_upperarm";
ProtoInstance1995.fieldValue = new MFNode();

ProtoInstance1995.fieldValue[0] = fieldValue1996;

let fieldValue1997 = browser.currentScene.createNode("fieldValue");
fieldValue1997.name = "children";
let ProtoInstance1998 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1998.name = "Site";
ProtoInstance1998.DEF = "hanim_l_humeral_lateral_epicondyles";
let fieldValue1999 = browser.currentScene.createNode("fieldValue");
fieldValue1999.name = "name";
fieldValue1999.value = "l_humeral_lateral_epicondyles";
ProtoInstance1998.fieldValue = new MFNode();

ProtoInstance1998.fieldValue[0] = fieldValue1999;

let fieldValue2000 = browser.currentScene.createNode("fieldValue");
fieldValue2000.name = "translation";
fieldValue2000.value = "0.2280000001192093 1.1482000350952148 -0.10999999940395355";
ProtoInstance1998.fieldValue[1] = fieldValue2000;

fieldValue1997.children = new MFNode();

fieldValue1997.children[0] = ProtoInstance1998;

ProtoInstance1995.fieldValue[1] = fieldValue1997;

fieldValue1838.children[12] = ProtoInstance1995;

let ProtoInstance2001 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2001.name = "Segment";
ProtoInstance2001.DEF = "hanim_r_hand";
let fieldValue2002 = browser.currentScene.createNode("fieldValue");
fieldValue2002.name = "name";
fieldValue2002.value = "r_hand";
ProtoInstance2001.fieldValue = new MFNode();

ProtoInstance2001.fieldValue[0] = fieldValue2002;

let fieldValue2003 = browser.currentScene.createNode("fieldValue");
fieldValue2003.name = "children";
let ProtoInstance2004 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2004.name = "Site";
ProtoInstance2004.DEF = "hanim_r_hand_tip";
let fieldValue2005 = browser.currentScene.createNode("fieldValue");
fieldValue2005.name = "name";
fieldValue2005.value = "r_hand_tip";
ProtoInstance2004.fieldValue = new MFNode();

ProtoInstance2004.fieldValue[0] = fieldValue2005;

let fieldValue2006 = browser.currentScene.createNode("fieldValue");
fieldValue2006.name = "translation";
fieldValue2006.value = "-0.19689999520778656 0.6758000254631042 -0.04270000010728836";
ProtoInstance2004.fieldValue[1] = fieldValue2006;

fieldValue2003.children = new MFNode();

fieldValue2003.children[0] = ProtoInstance2004;

let ProtoInstance2007 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2007.name = "Site";
ProtoInstance2007.DEF = "hanim_r_metacarpal_phalanx_2";
let fieldValue2008 = browser.currentScene.createNode("fieldValue");
fieldValue2008.name = "name";
fieldValue2008.value = "r_metacarpal_phalanx_2";
ProtoInstance2007.fieldValue = new MFNode();

ProtoInstance2007.fieldValue[0] = fieldValue2008;

let fieldValue2009 = browser.currentScene.createNode("fieldValue");
fieldValue2009.name = "translation";
fieldValue2009.value = "-0.19769999384880066 0.8169000148773193 -0.01769999973475933";
ProtoInstance2007.fieldValue[1] = fieldValue2009;

fieldValue2003.children[1] = ProtoInstance2007;

let ProtoInstance2010 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2010.name = "Site";
ProtoInstance2010.DEF = "hanim_r_dactylion";
let fieldValue2011 = browser.currentScene.createNode("fieldValue");
fieldValue2011.name = "name";
fieldValue2011.value = "r_dactylion";
ProtoInstance2010.fieldValue = new MFNode();

ProtoInstance2010.fieldValue[0] = fieldValue2011;

let fieldValue2012 = browser.currentScene.createNode("fieldValue");
fieldValue2012.name = "translation";
fieldValue2012.value = "-0.1941000074148178 0.6772000193595886 -0.04230000078678131";
ProtoInstance2010.fieldValue[1] = fieldValue2012;

fieldValue2003.children[2] = ProtoInstance2010;

let ProtoInstance2013 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2013.name = "Site";
ProtoInstance2013.DEF = "hanim_r_ulnar_styloid";
let fieldValue2014 = browser.currentScene.createNode("fieldValue");
fieldValue2014.name = "name";
fieldValue2014.value = "r_ulnar_styloid";
ProtoInstance2013.fieldValue = new MFNode();

ProtoInstance2013.fieldValue[0] = fieldValue2014;

let fieldValue2015 = browser.currentScene.createNode("fieldValue");
fieldValue2015.name = "translation";
fieldValue2015.value = "-0.21170000731945038 0.8561999797821045 -0.058400001376867294";
ProtoInstance2013.fieldValue[1] = fieldValue2015;

fieldValue2003.children[3] = ProtoInstance2013;

let ProtoInstance2016 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2016.name = "Site";
ProtoInstance2016.DEF = "hanim_r_metacarpal_phalanx_5";
let fieldValue2017 = browser.currentScene.createNode("fieldValue");
fieldValue2017.name = "name";
fieldValue2017.value = "r_metacarpal_phalanx_5";
ProtoInstance2016.fieldValue = new MFNode();

ProtoInstance2016.fieldValue[0] = fieldValue2017;

let fieldValue2018 = browser.currentScene.createNode("fieldValue");
fieldValue2018.name = "translation";
fieldValue2018.value = "-0.19290000200271606 0.7889999747276306 -0.10639999806880951";
ProtoInstance2016.fieldValue[1] = fieldValue2018;

fieldValue2003.children[4] = ProtoInstance2016;

ProtoInstance2001.fieldValue[1] = fieldValue2003;

fieldValue1838.children[13] = ProtoInstance2001;

let ProtoInstance2019 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2019.name = "Segment";
ProtoInstance2019.DEF = "hanim_r_forearm";
let fieldValue2020 = browser.currentScene.createNode("fieldValue");
fieldValue2020.name = "name";
fieldValue2020.value = "r_forearm";
ProtoInstance2019.fieldValue = new MFNode();

ProtoInstance2019.fieldValue[0] = fieldValue2020;

let fieldValue2021 = browser.currentScene.createNode("fieldValue");
fieldValue2021.name = "children";
let ProtoInstance2022 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2022.name = "Site";
ProtoInstance2022.DEF = "hanim_r_radial_styloid";
let fieldValue2023 = browser.currentScene.createNode("fieldValue");
fieldValue2023.name = "name";
fieldValue2023.value = "r_radial_styloid";
ProtoInstance2022.fieldValue = new MFNode();

ProtoInstance2022.fieldValue[0] = fieldValue2023;

let fieldValue2024 = browser.currentScene.createNode("fieldValue");
fieldValue2024.name = "translation";
fieldValue2024.value = "-0.188400000333786 0.8676000237464905 -0.035999998450279236";
ProtoInstance2022.fieldValue[1] = fieldValue2024;

fieldValue2021.children = new MFNode();

fieldValue2021.children[0] = ProtoInstance2022;

let ProtoInstance2025 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2025.name = "Site";
ProtoInstance2025.DEF = "hanim_r_olecranon";
let fieldValue2026 = browser.currentScene.createNode("fieldValue");
fieldValue2026.name = "name";
fieldValue2026.value = "r_olecranon";
ProtoInstance2025.fieldValue = new MFNode();

ProtoInstance2025.fieldValue[0] = fieldValue2026;

let fieldValue2027 = browser.currentScene.createNode("fieldValue");
fieldValue2027.name = "translation";
fieldValue2027.value = "-0.1906999945640564 1.1404999494552612 -0.10649999976158142";
ProtoInstance2025.fieldValue[1] = fieldValue2027;

fieldValue2021.children[1] = ProtoInstance2025;

let ProtoInstance2028 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2028.name = "Site";
ProtoInstance2028.DEF = "hanim_r_humeral_medial_epicondyles";
let fieldValue2029 = browser.currentScene.createNode("fieldValue");
fieldValue2029.name = "name";
fieldValue2029.value = "r_humeral_medial_epicondyles";
ProtoInstance2028.fieldValue = new MFNode();

ProtoInstance2028.fieldValue[0] = fieldValue2029;

let fieldValue2030 = browser.currentScene.createNode("fieldValue");
fieldValue2030.name = "translation";
fieldValue2030.value = "-0.1679999977350235 1.1297999620437622 -0.10620000213384628";
ProtoInstance2028.fieldValue[1] = fieldValue2030;

fieldValue2021.children[2] = ProtoInstance2028;

let ProtoInstance2031 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2031.name = "Site";
ProtoInstance2031.DEF = "hanim_r_radiale";
let fieldValue2032 = browser.currentScene.createNode("fieldValue");
fieldValue2032.name = "name";
fieldValue2032.value = "r_radiale";
ProtoInstance2031.fieldValue = new MFNode();

ProtoInstance2031.fieldValue[0] = fieldValue2032;

let fieldValue2033 = browser.currentScene.createNode("fieldValue");
fieldValue2033.name = "translation";
fieldValue2033.value = "-0.21299999952316284 1.1304999589920044 -0.10909999907016754";
ProtoInstance2031.fieldValue[1] = fieldValue2033;

fieldValue2021.children[3] = ProtoInstance2031;

ProtoInstance2019.fieldValue[1] = fieldValue2021;

fieldValue1838.children[14] = ProtoInstance2019;

let ProtoInstance2034 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2034.name = "Segment";
ProtoInstance2034.DEF = "hanim_r_upperarm";
let fieldValue2035 = browser.currentScene.createNode("fieldValue");
fieldValue2035.name = "name";
fieldValue2035.value = "r_upperarm";
ProtoInstance2034.fieldValue = new MFNode();

ProtoInstance2034.fieldValue[0] = fieldValue2035;

let fieldValue2036 = browser.currentScene.createNode("fieldValue");
fieldValue2036.name = "children";
let ProtoInstance2037 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2037.name = "Site";
ProtoInstance2037.DEF = "hanim_r_humeral_lateral_epicondyles";
let fieldValue2038 = browser.currentScene.createNode("fieldValue");
fieldValue2038.name = "name";
fieldValue2038.value = "r_humeral_lateral_epicondyles";
ProtoInstance2037.fieldValue = new MFNode();

ProtoInstance2037.fieldValue[0] = fieldValue2038;

let fieldValue2039 = browser.currentScene.createNode("fieldValue");
fieldValue2039.name = "translation";
fieldValue2039.value = "-0.2223999947309494 1.1517000198364258 -0.10329999774694443";
ProtoInstance2037.fieldValue[1] = fieldValue2039;

fieldValue2036.children = new MFNode();

fieldValue2036.children[0] = ProtoInstance2037;

ProtoInstance2034.fieldValue[1] = fieldValue2036;

fieldValue1838.children[15] = ProtoInstance2034;

let ProtoInstance2040 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2040.name = "Segment";
ProtoInstance2040.DEF = "hanim_l5";
let fieldValue2041 = browser.currentScene.createNode("fieldValue");
fieldValue2041.name = "name";
fieldValue2041.value = "l5";
ProtoInstance2040.fieldValue = new MFNode();

ProtoInstance2040.fieldValue[0] = fieldValue2041;

let fieldValue2042 = browser.currentScene.createNode("fieldValue");
fieldValue2042.name = "children";
let ProtoInstance2043 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2043.name = "Site";
ProtoInstance2043.DEF = "hanim_r_clavicale";
let fieldValue2044 = browser.currentScene.createNode("fieldValue");
fieldValue2044.name = "name";
fieldValue2044.value = "r_clavicale";
ProtoInstance2043.fieldValue = new MFNode();

ProtoInstance2043.fieldValue[0] = fieldValue2044;

let fieldValue2045 = browser.currentScene.createNode("fieldValue");
fieldValue2045.name = "translation";
fieldValue2045.value = "-0.011500000022351742 1.4943000078201294 0.03999999910593033";
ProtoInstance2043.fieldValue[1] = fieldValue2045;

fieldValue2042.children = new MFNode();

fieldValue2042.children[0] = ProtoInstance2043;

let ProtoInstance2046 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2046.name = "Site";
ProtoInstance2046.DEF = "hanim_suprasternale";
let fieldValue2047 = browser.currentScene.createNode("fieldValue");
fieldValue2047.name = "name";
fieldValue2047.value = "suprasternale";
ProtoInstance2046.fieldValue = new MFNode();

ProtoInstance2046.fieldValue[0] = fieldValue2047;

let fieldValue2048 = browser.currentScene.createNode("fieldValue");
fieldValue2048.name = "translation";
fieldValue2048.value = "0.00839999970048666 1.4714000225067139 0.05510000139474869";
ProtoInstance2046.fieldValue[1] = fieldValue2048;

fieldValue2042.children[1] = ProtoInstance2046;

let ProtoInstance2049 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2049.name = "Site";
ProtoInstance2049.DEF = "hanim_l_clavicale";
let fieldValue2050 = browser.currentScene.createNode("fieldValue");
fieldValue2050.name = "name";
fieldValue2050.value = "l_clavicale";
ProtoInstance2049.fieldValue = new MFNode();

ProtoInstance2049.fieldValue[0] = fieldValue2050;

let fieldValue2051 = browser.currentScene.createNode("fieldValue");
fieldValue2051.name = "translation";
fieldValue2051.value = "0.02710000053048134 1.4943000078201294 0.039400000125169754";
ProtoInstance2049.fieldValue[1] = fieldValue2051;

fieldValue2042.children[2] = ProtoInstance2049;

let ProtoInstance2052 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2052.name = "Site";
ProtoInstance2052.DEF = "hanim_r_thelion";
let fieldValue2053 = browser.currentScene.createNode("fieldValue");
fieldValue2053.name = "name";
fieldValue2053.value = "r_thelion";
ProtoInstance2052.fieldValue = new MFNode();

ProtoInstance2052.fieldValue[0] = fieldValue2053;

let fieldValue2054 = browser.currentScene.createNode("fieldValue");
fieldValue2054.name = "translation";
fieldValue2054.value = "-0.07360000163316727 1.3385000228881836 0.1216999962925911";
ProtoInstance2052.fieldValue[1] = fieldValue2054;

fieldValue2042.children[3] = ProtoInstance2052;

let ProtoInstance2055 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2055.name = "Site";
ProtoInstance2055.DEF = "hanim_l_thelion";
let fieldValue2056 = browser.currentScene.createNode("fieldValue");
fieldValue2056.name = "name";
fieldValue2056.value = "l_thelion";
ProtoInstance2055.fieldValue = new MFNode();

ProtoInstance2055.fieldValue[0] = fieldValue2056;

let fieldValue2057 = browser.currentScene.createNode("fieldValue");
fieldValue2057.name = "translation";
fieldValue2057.value = "0.09179999679327011 1.3381999731063843 0.11919999867677689";
ProtoInstance2055.fieldValue[1] = fieldValue2057;

fieldValue2042.children[4] = ProtoInstance2055;

let ProtoInstance2058 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2058.name = "Site";
ProtoInstance2058.DEF = "hanim_substernale";
let fieldValue2059 = browser.currentScene.createNode("fieldValue");
fieldValue2059.name = "name";
fieldValue2059.value = "substernale";
ProtoInstance2058.fieldValue = new MFNode();

ProtoInstance2058.fieldValue[0] = fieldValue2059;

let fieldValue2060 = browser.currentScene.createNode("fieldValue");
fieldValue2060.name = "translation";
fieldValue2060.value = "0.008500000461935997 1.2994999885559082 0.11469999700784683";
ProtoInstance2058.fieldValue[1] = fieldValue2060;

fieldValue2042.children[5] = ProtoInstance2058;

let ProtoInstance2061 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2061.name = "Site";
ProtoInstance2061.DEF = "hanim_r_rib10";
let fieldValue2062 = browser.currentScene.createNode("fieldValue");
fieldValue2062.name = "name";
fieldValue2062.value = "r_rib10";
ProtoInstance2061.fieldValue = new MFNode();

ProtoInstance2061.fieldValue[0] = fieldValue2062;

let fieldValue2063 = browser.currentScene.createNode("fieldValue");
fieldValue2063.name = "translation";
fieldValue2063.value = "-0.07109999656677246 1.194100022315979 0.10159999877214432";
ProtoInstance2061.fieldValue[1] = fieldValue2063;

fieldValue2042.children[6] = ProtoInstance2061;

let ProtoInstance2064 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2064.name = "Site";
ProtoInstance2064.DEF = "hanim_l_rib10";
let fieldValue2065 = browser.currentScene.createNode("fieldValue");
fieldValue2065.name = "name";
fieldValue2065.value = "l_rib10";
ProtoInstance2064.fieldValue = new MFNode();

ProtoInstance2064.fieldValue[0] = fieldValue2065;

let fieldValue2066 = browser.currentScene.createNode("fieldValue");
fieldValue2066.name = "translation";
fieldValue2066.value = "0.08709999918937683 1.1924999952316284 0.09920000284910202";
ProtoInstance2064.fieldValue[1] = fieldValue2066;

fieldValue2042.children[7] = ProtoInstance2064;

let ProtoInstance2067 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2067.name = "Site";
ProtoInstance2067.DEF = "hanim_cervicale";
let fieldValue2068 = browser.currentScene.createNode("fieldValue");
fieldValue2068.name = "name";
fieldValue2068.value = "cervicale";
ProtoInstance2067.fieldValue = new MFNode();

ProtoInstance2067.fieldValue[0] = fieldValue2068;

let fieldValue2069 = browser.currentScene.createNode("fieldValue");
fieldValue2069.name = "translation";
fieldValue2069.value = "0.006399999838322401 1.5199999809265137 -0.08150000125169754";
ProtoInstance2067.fieldValue[1] = fieldValue2069;

fieldValue2042.children[8] = ProtoInstance2067;

let ProtoInstance2070 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2070.name = "Site";
ProtoInstance2070.DEF = "hanim_spine_2_lower_back";
let fieldValue2071 = browser.currentScene.createNode("fieldValue");
fieldValue2071.name = "name";
fieldValue2071.value = "spine_2_lower_back";
ProtoInstance2070.fieldValue = new MFNode();

ProtoInstance2070.fieldValue[0] = fieldValue2071;

let fieldValue2072 = browser.currentScene.createNode("fieldValue");
fieldValue2072.name = "translation";
fieldValue2072.value = "0.004900000058114529 1.1907999515533447 -0.11129999905824661";
ProtoInstance2070.fieldValue[1] = fieldValue2072;

fieldValue2042.children[9] = ProtoInstance2070;

let ProtoInstance2073 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2073.name = "Site";
ProtoInstance2073.DEF = "hanim_waist_preferred_posterior";
let fieldValue2074 = browser.currentScene.createNode("fieldValue");
fieldValue2074.name = "name";
fieldValue2074.value = "waist_preferred_posterior";
ProtoInstance2073.fieldValue = new MFNode();

ProtoInstance2073.fieldValue[0] = fieldValue2074;

let fieldValue2075 = browser.currentScene.createNode("fieldValue");
fieldValue2075.name = "translation";
fieldValue2075.value = "0.28999999165534973 1.0915000438690186 -0.10909999907016754";
ProtoInstance2073.fieldValue[1] = fieldValue2075;

fieldValue2042.children[10] = ProtoInstance2073;

let ProtoInstance2076 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2076.name = "Site";
ProtoInstance2076.DEF = "hanim_r_acromion";
let fieldValue2077 = browser.currentScene.createNode("fieldValue");
fieldValue2077.name = "name";
fieldValue2077.value = "r_acromion";
ProtoInstance2076.fieldValue = new MFNode();

ProtoInstance2076.fieldValue[0] = fieldValue2077;

let fieldValue2078 = browser.currentScene.createNode("fieldValue");
fieldValue2078.name = "translation";
fieldValue2078.value = "-0.19050000607967377 1.479099988937378 -0.04309999942779541";
ProtoInstance2076.fieldValue[1] = fieldValue2078;

fieldValue2042.children[11] = ProtoInstance2076;

let ProtoInstance2079 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2079.name = "Site";
ProtoInstance2079.DEF = "hanim_r_axilla_proximal";
let fieldValue2080 = browser.currentScene.createNode("fieldValue");
fieldValue2080.name = "name";
fieldValue2080.value = "r_axilla_proximal";
ProtoInstance2079.fieldValue = new MFNode();

ProtoInstance2079.fieldValue[0] = fieldValue2080;

let fieldValue2081 = browser.currentScene.createNode("fieldValue");
fieldValue2081.name = "translation";
fieldValue2081.value = "-0.16259999573230743 1.4071999788284302 -0.003100000089034438";
ProtoInstance2079.fieldValue[1] = fieldValue2081;

fieldValue2042.children[12] = ProtoInstance2079;

let ProtoInstance2082 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2082.name = "Site";
ProtoInstance2082.DEF = "hanim_r_axilla_distal";
let fieldValue2083 = browser.currentScene.createNode("fieldValue");
fieldValue2083.name = "name";
fieldValue2083.value = "r_axilla_distal";
ProtoInstance2082.fieldValue = new MFNode();

ProtoInstance2082.fieldValue[0] = fieldValue2083;

let fieldValue2084 = browser.currentScene.createNode("fieldValue");
fieldValue2084.name = "translation";
fieldValue2084.value = "-0.16030000150203705 1.4098000526428223 -0.08259999752044678";
ProtoInstance2082.fieldValue[1] = fieldValue2084;

fieldValue2042.children[13] = ProtoInstance2082;

let ProtoInstance2085 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2085.name = "Site";
ProtoInstance2085.DEF = "hanim_l_acromion";
let fieldValue2086 = browser.currentScene.createNode("fieldValue");
fieldValue2086.name = "name";
fieldValue2086.value = "l_acromion";
ProtoInstance2085.fieldValue = new MFNode();

ProtoInstance2085.fieldValue[0] = fieldValue2086;

let fieldValue2087 = browser.currentScene.createNode("fieldValue");
fieldValue2087.name = "translation";
fieldValue2087.value = "0.20319999754428864 1.4759999513626099 -0.04899999871850014";
ProtoInstance2085.fieldValue[1] = fieldValue2087;

fieldValue2042.children[14] = ProtoInstance2085;

let ProtoInstance2088 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2088.name = "Site";
ProtoInstance2088.DEF = "hanim_l_axilla_proximal";
let fieldValue2089 = browser.currentScene.createNode("fieldValue");
fieldValue2089.name = "name";
fieldValue2089.value = "l_axilla_proximal";
ProtoInstance2088.fieldValue = new MFNode();

ProtoInstance2088.fieldValue[0] = fieldValue2089;

let fieldValue2090 = browser.currentScene.createNode("fieldValue");
fieldValue2090.name = "translation";
fieldValue2090.value = "0.1776999980211258 1.406499981880188 -0.007499999832361937";
ProtoInstance2088.fieldValue[1] = fieldValue2090;

fieldValue2042.children[15] = ProtoInstance2088;

let ProtoInstance2091 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2091.name = "Site";
ProtoInstance2091.DEF = "hanim_l_axilla_distal";
let fieldValue2092 = browser.currentScene.createNode("fieldValue");
fieldValue2092.name = "name";
fieldValue2092.value = "l_axilla_distal";
ProtoInstance2091.fieldValue = new MFNode();

ProtoInstance2091.fieldValue[0] = fieldValue2092;

let fieldValue2093 = browser.currentScene.createNode("fieldValue");
fieldValue2093.name = "translation";
fieldValue2093.value = "0.17059999704360962 1.4071999788284302 -0.08749999850988388";
ProtoInstance2091.fieldValue[1] = fieldValue2093;

fieldValue2042.children[16] = ProtoInstance2091;

let ProtoInstance2094 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2094.name = "Site";
ProtoInstance2094.DEF = "hanim_r_neck_base";
let fieldValue2095 = browser.currentScene.createNode("fieldValue");
fieldValue2095.name = "name";
fieldValue2095.value = "r_neck_base";
ProtoInstance2094.fieldValue = new MFNode();

ProtoInstance2094.fieldValue[0] = fieldValue2095;

let fieldValue2096 = browser.currentScene.createNode("fieldValue");
fieldValue2096.name = "translation";
fieldValue2096.value = "-0.04190000146627426 1.5148999691009521 -0.02199999988079071";
ProtoInstance2094.fieldValue[1] = fieldValue2096;

fieldValue2042.children[17] = ProtoInstance2094;

let ProtoInstance2097 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2097.name = "Site";
ProtoInstance2097.DEF = "hanim_l_neck_base";
let fieldValue2098 = browser.currentScene.createNode("fieldValue");
fieldValue2098.name = "name";
fieldValue2098.value = "l_neck_base";
ProtoInstance2097.fieldValue = new MFNode();

ProtoInstance2097.fieldValue[0] = fieldValue2098;

let fieldValue2099 = browser.currentScene.createNode("fieldValue");
fieldValue2099.name = "translation";
fieldValue2099.value = "0.06459999829530716 1.5140999555587769 -0.03799999877810478";
ProtoInstance2097.fieldValue[1] = fieldValue2099;

fieldValue2042.children[18] = ProtoInstance2097;

let ProtoInstance2100 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2100.name = "Site";
ProtoInstance2100.DEF = "hanim_navel";
let fieldValue2101 = browser.currentScene.createNode("fieldValue");
fieldValue2101.name = "name";
fieldValue2101.value = "navel";
ProtoInstance2100.fieldValue = new MFNode();

ProtoInstance2100.fieldValue[0] = fieldValue2101;

let fieldValue2102 = browser.currentScene.createNode("fieldValue");
fieldValue2102.name = "translation";
fieldValue2102.value = "0.006899999920278788 1.09660005569458 0.10170000046491623";
ProtoInstance2100.fieldValue[1] = fieldValue2102;

fieldValue2042.children[19] = ProtoInstance2100;

ProtoInstance2040.fieldValue[1] = fieldValue2042;

fieldValue1838.children[16] = ProtoInstance2040;

let ProtoInstance2103 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2103.name = "Segment";
ProtoInstance2103.DEF = "hanim_sacrum";
let fieldValue2104 = browser.currentScene.createNode("fieldValue");
fieldValue2104.name = "name";
fieldValue2104.value = "sacrum";
ProtoInstance2103.fieldValue = new MFNode();

ProtoInstance2103.fieldValue[0] = fieldValue2104;

let fieldValue2105 = browser.currentScene.createNode("fieldValue");
fieldValue2105.name = "children";
let ProtoInstance2106 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2106.name = "Site";
ProtoInstance2106.DEF = "hanim_r_asis";
let fieldValue2107 = browser.currentScene.createNode("fieldValue");
fieldValue2107.name = "name";
fieldValue2107.value = "r_asis";
ProtoInstance2106.fieldValue = new MFNode();

ProtoInstance2106.fieldValue[0] = fieldValue2107;

let fieldValue2108 = browser.currentScene.createNode("fieldValue");
fieldValue2108.name = "translation";
fieldValue2108.value = "-0.08869999647140503 1.0020999908447266 0.1111999973654747";
ProtoInstance2106.fieldValue[1] = fieldValue2108;

fieldValue2105.children = new MFNode();

fieldValue2105.children[0] = ProtoInstance2106;

let ProtoInstance2109 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2109.name = "Site";
ProtoInstance2109.DEF = "hanim_l_asis";
let fieldValue2110 = browser.currentScene.createNode("fieldValue");
fieldValue2110.name = "name";
fieldValue2110.value = "l_asis";
ProtoInstance2109.fieldValue = new MFNode();

ProtoInstance2109.fieldValue[0] = fieldValue2110;

let fieldValue2111 = browser.currentScene.createNode("fieldValue");
fieldValue2111.name = "translation";
fieldValue2111.value = "0.0925000011920929 0.9983000159263611 0.10520000010728836";
ProtoInstance2109.fieldValue[1] = fieldValue2111;

fieldValue2105.children[1] = ProtoInstance2109;

let ProtoInstance2112 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2112.name = "Site";
ProtoInstance2112.DEF = "hanim_r_iliocristale";
let fieldValue2113 = browser.currentScene.createNode("fieldValue");
fieldValue2113.name = "name";
fieldValue2113.value = "r_iliocristale";
ProtoInstance2112.fieldValue = new MFNode();

ProtoInstance2112.fieldValue[0] = fieldValue2113;

let fieldValue2114 = browser.currentScene.createNode("fieldValue");
fieldValue2114.name = "translation";
fieldValue2114.value = "-0.1525000035762787 1.0628000497817993 0.0035000001080334187";
ProtoInstance2112.fieldValue[1] = fieldValue2114;

fieldValue2105.children[2] = ProtoInstance2112;

let ProtoInstance2115 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2115.name = "Site";
ProtoInstance2115.DEF = "hanim_r_trochanterion";
let fieldValue2116 = browser.currentScene.createNode("fieldValue");
fieldValue2116.name = "name";
fieldValue2116.value = "r_trochanterion";
ProtoInstance2115.fieldValue = new MFNode();

ProtoInstance2115.fieldValue[0] = fieldValue2116;

let fieldValue2117 = browser.currentScene.createNode("fieldValue");
fieldValue2117.name = "translation";
fieldValue2117.value = "-0.1688999980688095 0.8418999910354614 0.03519999980926514";
ProtoInstance2115.fieldValue[1] = fieldValue2117;

fieldValue2105.children[3] = ProtoInstance2115;

let ProtoInstance2118 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2118.name = "Site";
ProtoInstance2118.DEF = "hanim_l_iliocristale";
let fieldValue2119 = browser.currentScene.createNode("fieldValue");
fieldValue2119.name = "name";
fieldValue2119.value = "l_iliocristale";
ProtoInstance2118.fieldValue = new MFNode();

ProtoInstance2118.fieldValue[0] = fieldValue2119;

let fieldValue2120 = browser.currentScene.createNode("fieldValue");
fieldValue2120.name = "translation";
fieldValue2120.value = "0.16120000183582306 1.0536999702453613 0.0007999999797903001";
ProtoInstance2118.fieldValue[1] = fieldValue2120;

fieldValue2105.children[4] = ProtoInstance2118;

let ProtoInstance2121 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2121.name = "Site";
ProtoInstance2121.DEF = "hanim_l_trochanterion";
let fieldValue2122 = browser.currentScene.createNode("fieldValue");
fieldValue2122.name = "name";
fieldValue2122.value = "l_trochanterion";
ProtoInstance2121.fieldValue = new MFNode();

ProtoInstance2121.fieldValue[0] = fieldValue2122;

let fieldValue2123 = browser.currentScene.createNode("fieldValue");
fieldValue2123.name = "translation";
fieldValue2123.value = "0.16769999265670776 0.8335999846458435 0.030300000682473183";
ProtoInstance2121.fieldValue[1] = fieldValue2123;

fieldValue2105.children[5] = ProtoInstance2121;

let ProtoInstance2124 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2124.name = "Site";
ProtoInstance2124.DEF = "hanim_r_psis";
let fieldValue2125 = browser.currentScene.createNode("fieldValue");
fieldValue2125.name = "name";
fieldValue2125.value = "r_psis";
ProtoInstance2124.fieldValue = new MFNode();

ProtoInstance2124.fieldValue[0] = fieldValue2125;

let fieldValue2126 = browser.currentScene.createNode("fieldValue");
fieldValue2126.name = "translation";
fieldValue2126.value = "-0.07159999758005142 1.0190000534057617 -0.11379999667406082";
ProtoInstance2124.fieldValue[1] = fieldValue2126;

fieldValue2105.children[6] = ProtoInstance2124;

let ProtoInstance2127 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2127.name = "Site";
ProtoInstance2127.DEF = "hanim_l_psis";
let fieldValue2128 = browser.currentScene.createNode("fieldValue");
fieldValue2128.name = "name";
fieldValue2128.value = "l_psis";
ProtoInstance2127.fieldValue = new MFNode();

ProtoInstance2127.fieldValue[0] = fieldValue2128;

let fieldValue2129 = browser.currentScene.createNode("fieldValue");
fieldValue2129.name = "translation";
fieldValue2129.value = "0.07739999890327454 1.0190000534057617 -0.11509999632835388";
ProtoInstance2127.fieldValue[1] = fieldValue2129;

fieldValue2105.children[7] = ProtoInstance2127;

let ProtoInstance2130 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2130.name = "Site";
ProtoInstance2130.DEF = "hanim_crotch";
let fieldValue2131 = browser.currentScene.createNode("fieldValue");
fieldValue2131.name = "name";
fieldValue2131.value = "crotch";
ProtoInstance2130.fieldValue = new MFNode();

ProtoInstance2130.fieldValue[0] = fieldValue2131;

let fieldValue2132 = browser.currentScene.createNode("fieldValue");
fieldValue2132.name = "translation";
fieldValue2132.value = "0.0034000000450760126 0.8266000151634216 0.025699999183416367";
ProtoInstance2130.fieldValue[1] = fieldValue2132;

fieldValue2105.children[8] = ProtoInstance2130;

ProtoInstance2103.fieldValue[1] = fieldValue2105;

fieldValue1838.children[17] = ProtoInstance2103;

ProtoInstance98.fieldValue[2] = fieldValue1838;

let fieldValue2133 = browser.currentScene.createNode("fieldValue");
fieldValue2133.name = "sites";
let ProtoInstance2134 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2134.name = "Site";
ProtoInstance2134.DEF = "hanim_l_middistal_tip";
let fieldValue2135 = browser.currentScene.createNode("fieldValue");
fieldValue2135.name = "name";
fieldValue2135.value = "l_middistal_tip";
ProtoInstance2134.fieldValue = new MFNode();

ProtoInstance2134.fieldValue[0] = fieldValue2135;

let fieldValue2136 = browser.currentScene.createNode("fieldValue");
fieldValue2136.name = "translation";
fieldValue2136.value = "0.13539999723434448 0.0015999999595806003 0.147599995136261";
ProtoInstance2134.fieldValue[1] = fieldValue2136;

fieldValue2133.children = new MFNode();

fieldValue2133.children[0] = ProtoInstance2134;

let ProtoInstance2137 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2137.name = "Site";
ProtoInstance2137.DEF = "hanim_l_tarsal_interphalangeal_phalanx_5";
let fieldValue2138 = browser.currentScene.createNode("fieldValue");
fieldValue2138.name = "name";
fieldValue2138.value = "l_tarsal_interphalangeal_phalanx_5";
ProtoInstance2137.fieldValue = new MFNode();

ProtoInstance2137.fieldValue[0] = fieldValue2138;

let fieldValue2139 = browser.currentScene.createNode("fieldValue");
fieldValue2139.name = "translation";
fieldValue2139.value = "0.18250000476837158 0.007000000216066837 0.09279999881982803";
ProtoInstance2137.fieldValue[1] = fieldValue2139;

fieldValue2133.children[1] = ProtoInstance2137;

let ProtoInstance2140 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2140.name = "Site";
ProtoInstance2140.DEF = "hanim_l_tarsal_interphalangeal_phalanx_1";
let fieldValue2141 = browser.currentScene.createNode("fieldValue");
fieldValue2141.name = "name";
fieldValue2141.value = "l_tarsal_interphalangeal_phalanx_1";
ProtoInstance2140.fieldValue = new MFNode();

ProtoInstance2140.fieldValue[0] = fieldValue2141;

let fieldValue2142 = browser.currentScene.createNode("fieldValue");
fieldValue2142.name = "translation";
fieldValue2142.value = "0.08160000294446945 0.02319999970495701 0.010599999688565731";
ProtoInstance2140.fieldValue[1] = fieldValue2142;

fieldValue2133.children[2] = ProtoInstance2140;

let ProtoInstance2143 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2143.name = "Site";
ProtoInstance2143.DEF = "hanim_l_tarsal_distal_phalanx_2";
let fieldValue2144 = browser.currentScene.createNode("fieldValue");
fieldValue2144.name = "name";
fieldValue2144.value = "l_tarsal_distal_phalanx_2";
ProtoInstance2143.fieldValue = new MFNode();

ProtoInstance2143.fieldValue[0] = fieldValue2144;

let fieldValue2145 = browser.currentScene.createNode("fieldValue");
fieldValue2145.name = "translation";
fieldValue2145.value = "0.11949999630451202 0.007899999618530273 0.14329999685287476";
ProtoInstance2143.fieldValue[1] = fieldValue2145;

fieldValue2133.children[3] = ProtoInstance2143;

let ProtoInstance2146 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2146.name = "Site";
ProtoInstance2146.DEF = "hanim_l_lateral_malleolus";
let fieldValue2147 = browser.currentScene.createNode("fieldValue");
fieldValue2147.name = "name";
fieldValue2147.value = "l_lateral_malleolus";
ProtoInstance2146.fieldValue = new MFNode();

ProtoInstance2146.fieldValue[0] = fieldValue2147;

let fieldValue2148 = browser.currentScene.createNode("fieldValue");
fieldValue2148.name = "translation";
fieldValue2148.value = "0.13079999387264252 0.059700001031160355 -0.10320000350475311";
ProtoInstance2146.fieldValue[1] = fieldValue2148;

fieldValue2133.children[4] = ProtoInstance2146;

let ProtoInstance2149 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2149.name = "Site";
ProtoInstance2149.DEF = "hanim_l_medial_malleolus";
let fieldValue2150 = browser.currentScene.createNode("fieldValue");
fieldValue2150.name = "name";
fieldValue2150.value = "l_medial_malleolus";
ProtoInstance2149.fieldValue = new MFNode();

ProtoInstance2149.fieldValue[0] = fieldValue2150;

let fieldValue2151 = browser.currentScene.createNode("fieldValue");
fieldValue2151.name = "translation";
fieldValue2151.value = "0.08900000154972076 0.07159999758005142 -0.08810000121593475";
ProtoInstance2149.fieldValue[1] = fieldValue2151;

fieldValue2133.children[5] = ProtoInstance2149;

let ProtoInstance2152 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2152.name = "Site";
ProtoInstance2152.DEF = "hanim_l_sphyrion";
let fieldValue2153 = browser.currentScene.createNode("fieldValue");
fieldValue2153.name = "name";
fieldValue2153.value = "l_sphyrion";
ProtoInstance2152.fieldValue = new MFNode();

ProtoInstance2152.fieldValue[0] = fieldValue2153;

let fieldValue2154 = browser.currentScene.createNode("fieldValue");
fieldValue2154.name = "translation";
fieldValue2154.value = "0.08900000154972076 0.057500001043081284 -0.09430000185966492";
ProtoInstance2152.fieldValue[1] = fieldValue2154;

fieldValue2133.children[6] = ProtoInstance2152;

let ProtoInstance2155 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2155.name = "Site";
ProtoInstance2155.DEF = "hanim_l_calcaneus_posterior";
let fieldValue2156 = browser.currentScene.createNode("fieldValue");
fieldValue2156.name = "name";
fieldValue2156.value = "l_calcaneus_posterior";
ProtoInstance2155.fieldValue = new MFNode();

ProtoInstance2155.fieldValue[0] = fieldValue2156;

let fieldValue2157 = browser.currentScene.createNode("fieldValue");
fieldValue2157.name = "translation";
fieldValue2157.value = "0.09740000218153 0.02590000070631504 -0.11710000038146973";
ProtoInstance2155.fieldValue[1] = fieldValue2157;

fieldValue2133.children[7] = ProtoInstance2155;

let ProtoInstance2158 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2158.name = "Site";
ProtoInstance2158.DEF = "hanim_l_knee_crease";
let fieldValue2159 = browser.currentScene.createNode("fieldValue");
fieldValue2159.name = "name";
fieldValue2159.value = "l_knee_crease";
ProtoInstance2158.fieldValue = new MFNode();

ProtoInstance2158.fieldValue[0] = fieldValue2159;

let fieldValue2160 = browser.currentScene.createNode("fieldValue");
fieldValue2160.name = "translation";
fieldValue2160.value = "0.09929999709129333 0.48809999227523804 -0.030899999663233757";
ProtoInstance2158.fieldValue[1] = fieldValue2160;

fieldValue2133.children[8] = ProtoInstance2158;

let ProtoInstance2161 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2161.name = "Site";
ProtoInstance2161.DEF = "hanim_l_femoral_lateral_epicondyles";
let fieldValue2162 = browser.currentScene.createNode("fieldValue");
fieldValue2162.name = "name";
fieldValue2162.value = "l_femoral_lateral_epicondyles";
ProtoInstance2161.fieldValue = new MFNode();

ProtoInstance2161.fieldValue[0] = fieldValue2162;

let fieldValue2163 = browser.currentScene.createNode("fieldValue");
fieldValue2163.name = "translation";
fieldValue2163.value = "0.1597999930381775 0.4966999888420105 0.02969999983906746";
ProtoInstance2161.fieldValue[1] = fieldValue2163;

fieldValue2133.children[9] = ProtoInstance2161;

let ProtoInstance2164 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2164.name = "Site";
ProtoInstance2164.DEF = "hanim_l_femoral_medial_epicondyles";
let fieldValue2165 = browser.currentScene.createNode("fieldValue");
fieldValue2165.name = "name";
fieldValue2165.value = "l_femoral_lateral_epicondyles";
ProtoInstance2164.fieldValue = new MFNode();

ProtoInstance2164.fieldValue[0] = fieldValue2165;

let fieldValue2166 = browser.currentScene.createNode("fieldValue");
fieldValue2166.name = "translation";
fieldValue2166.value = "0.039799999445676804 0.49459999799728394 0.030300000682473183";
ProtoInstance2164.fieldValue[1] = fieldValue2166;

fieldValue2133.children[10] = ProtoInstance2164;

let ProtoInstance2167 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2167.name = "Site";
ProtoInstance2167.DEF = "hanim_r_middistal_tip";
let fieldValue2168 = browser.currentScene.createNode("fieldValue");
fieldValue2168.name = "name";
fieldValue2168.value = "r_middistal_tip";
ProtoInstance2167.fieldValue = new MFNode();

ProtoInstance2167.fieldValue[0] = fieldValue2168;

let fieldValue2169 = browser.currentScene.createNode("fieldValue");
fieldValue2169.name = "translation";
fieldValue2169.value = "-0.10429999977350235 -0.022700000554323196 0.14499999582767487";
ProtoInstance2167.fieldValue[1] = fieldValue2169;

fieldValue2133.children[11] = ProtoInstance2167;

let ProtoInstance2170 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2170.name = "Site";
ProtoInstance2170.DEF = "hanim_r_tarsal_interphalangeal_phalanx_5";
let fieldValue2171 = browser.currentScene.createNode("fieldValue");
fieldValue2171.name = "name";
fieldValue2171.value = "r_tarsal_interphalangeal_phalanx_5";
ProtoInstance2170.fieldValue = new MFNode();

ProtoInstance2170.fieldValue[0] = fieldValue2171;

let fieldValue2172 = browser.currentScene.createNode("fieldValue");
fieldValue2172.name = "translation";
fieldValue2172.value = "-0.15230000019073486 0.016599999740719795 0.08950000256299973";
ProtoInstance2170.fieldValue[1] = fieldValue2172;

fieldValue2133.children[12] = ProtoInstance2170;

let ProtoInstance2173 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2173.name = "Site";
ProtoInstance2173.DEF = "hanim_r_tarsal_interphalangeal_phalanx_1";
let fieldValue2174 = browser.currentScene.createNode("fieldValue");
fieldValue2174.name = "name";
fieldValue2174.value = "r_tarsal_interphalangeal_phalanx_1";
ProtoInstance2173.fieldValue = new MFNode();

ProtoInstance2173.fieldValue[0] = fieldValue2174;

let fieldValue2175 = browser.currentScene.createNode("fieldValue");
fieldValue2175.name = "translation";
fieldValue2175.value = "-0.05209999904036522 0.026000000536441803 0.01269999984651804";
ProtoInstance2173.fieldValue[1] = fieldValue2175;

fieldValue2133.children[13] = ProtoInstance2173;

let ProtoInstance2176 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2176.name = "Site";
ProtoInstance2176.DEF = "hanim_r_tarsal_distal_phalanx_2";
let fieldValue2177 = browser.currentScene.createNode("fieldValue");
fieldValue2177.name = "name";
fieldValue2177.value = "r_tarsal_distal_phalanx_2";
ProtoInstance2176.fieldValue = new MFNode();

ProtoInstance2176.fieldValue[0] = fieldValue2177;

let fieldValue2178 = browser.currentScene.createNode("fieldValue");
fieldValue2178.name = "translation";
fieldValue2178.value = "-0.08829999715089798 0.013399999588727951 0.13830000162124634";
ProtoInstance2176.fieldValue[1] = fieldValue2178;

fieldValue2133.children[14] = ProtoInstance2176;

let ProtoInstance2179 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2179.name = "Site";
ProtoInstance2179.DEF = "hanim_r_lateral_malleolus";
let fieldValue2180 = browser.currentScene.createNode("fieldValue");
fieldValue2180.name = "name";
fieldValue2180.value = "r_lateral_malleolus";
ProtoInstance2179.fieldValue = new MFNode();

ProtoInstance2179.fieldValue[0] = fieldValue2180;

let fieldValue2181 = browser.currentScene.createNode("fieldValue");
fieldValue2181.name = "translation";
fieldValue2181.value = "-0.1005999967455864 0.0658000037074089 -0.10750000178813934";
ProtoInstance2179.fieldValue[1] = fieldValue2181;

fieldValue2133.children[15] = ProtoInstance2179;

let ProtoInstance2182 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2182.name = "Site";
ProtoInstance2182.DEF = "hanim_r_medial_malleolus";
let fieldValue2183 = browser.currentScene.createNode("fieldValue");
fieldValue2183.name = "name";
fieldValue2183.value = "r_medial_malleolus";
ProtoInstance2182.fieldValue = new MFNode();

ProtoInstance2182.fieldValue[0] = fieldValue2183;

let fieldValue2184 = browser.currentScene.createNode("fieldValue");
fieldValue2184.name = "translation";
fieldValue2184.value = "-0.05909999832510948 0.07599999755620956 -0.09279999881982803";
ProtoInstance2182.fieldValue[1] = fieldValue2184;

fieldValue2133.children[16] = ProtoInstance2182;

let ProtoInstance2185 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2185.name = "Site";
ProtoInstance2185.DEF = "hanim_r_sphyrion";
let fieldValue2186 = browser.currentScene.createNode("fieldValue");
fieldValue2186.name = "name";
fieldValue2186.value = "r_sphyrion";
ProtoInstance2185.fieldValue = new MFNode();

ProtoInstance2185.fieldValue[0] = fieldValue2186;

let fieldValue2187 = browser.currentScene.createNode("fieldValue");
fieldValue2187.name = "translation";
fieldValue2187.value = "-0.06030000001192093 0.061000000685453415 -0.10019999742507935";
ProtoInstance2185.fieldValue[1] = fieldValue2187;

fieldValue2133.children[17] = ProtoInstance2185;

let ProtoInstance2188 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2188.name = "Site";
ProtoInstance2188.DEF = "hanim_r_calcaneus_posterior";
let fieldValue2189 = browser.currentScene.createNode("fieldValue");
fieldValue2189.name = "name";
fieldValue2189.value = "r_calcaneus_posterior";
ProtoInstance2188.fieldValue = new MFNode();

ProtoInstance2188.fieldValue[0] = fieldValue2189;

let fieldValue2190 = browser.currentScene.createNode("fieldValue");
fieldValue2190.name = "translation";
fieldValue2190.value = "-0.06920000165700912 0.02969999983906746 -0.12210000306367874";
ProtoInstance2188.fieldValue[1] = fieldValue2190;

fieldValue2133.children[18] = ProtoInstance2188;

let ProtoInstance2191 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2191.name = "Site";
ProtoInstance2191.DEF = "hanim_r_knee_crease";
let fieldValue2192 = browser.currentScene.createNode("fieldValue");
fieldValue2192.name = "name";
fieldValue2192.value = "r_knee_crease";
ProtoInstance2191.fieldValue = new MFNode();

ProtoInstance2191.fieldValue[0] = fieldValue2192;

let fieldValue2193 = browser.currentScene.createNode("fieldValue");
fieldValue2193.name = "translation";
fieldValue2193.value = "-0.08250000327825546 0.49320000410079956 -0.032600000500679016";
ProtoInstance2191.fieldValue[1] = fieldValue2193;

fieldValue2133.children[19] = ProtoInstance2191;

let ProtoInstance2194 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2194.name = "Site";
ProtoInstance2194.DEF = "hanim_r_femoral_lateral_epicondyles";
let fieldValue2195 = browser.currentScene.createNode("fieldValue");
fieldValue2195.name = "name";
fieldValue2195.value = "r_femoral_lateral_epicondyles";
ProtoInstance2194.fieldValue = new MFNode();

ProtoInstance2194.fieldValue[0] = fieldValue2195;

let fieldValue2196 = browser.currentScene.createNode("fieldValue");
fieldValue2196.name = "translation";
fieldValue2196.value = "-0.1421000063419342 0.4991999864578247 0.03099999949336052";
ProtoInstance2194.fieldValue[1] = fieldValue2196;

fieldValue2133.children[20] = ProtoInstance2194;

let ProtoInstance2197 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2197.name = "Site";
ProtoInstance2197.DEF = "hanim_r_femoral_medial_epicondyles";
let fieldValue2198 = browser.currentScene.createNode("fieldValue");
fieldValue2198.name = "name";
fieldValue2198.value = "r_femoral_lateral_epicondyles";
ProtoInstance2197.fieldValue = new MFNode();

ProtoInstance2197.fieldValue[0] = fieldValue2198;

let fieldValue2199 = browser.currentScene.createNode("fieldValue");
fieldValue2199.name = "translation";
fieldValue2199.value = "-0.022099999710917473 0.5013999938964844 0.02889999933540821";
ProtoInstance2197.fieldValue[1] = fieldValue2199;

fieldValue2133.children[21] = ProtoInstance2197;

let ProtoInstance2200 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2200.name = "Site";
ProtoInstance2200.DEF = "hanim_skull_tip";
let fieldValue2201 = browser.currentScene.createNode("fieldValue");
fieldValue2201.name = "name";
fieldValue2201.value = "skull_tip";
ProtoInstance2200.fieldValue = new MFNode();

ProtoInstance2200.fieldValue[0] = fieldValue2201;

let fieldValue2202 = browser.currentScene.createNode("fieldValue");
fieldValue2202.name = "translation";
fieldValue2202.value = "0.004999999888241291 1.7503999471664429 0.005499999970197678";
ProtoInstance2200.fieldValue[1] = fieldValue2202;

fieldValue2133.children[22] = ProtoInstance2200;

let ProtoInstance2203 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2203.name = "Site";
ProtoInstance2203.DEF = "hanim_sellion";
let fieldValue2204 = browser.currentScene.createNode("fieldValue");
fieldValue2204.name = "name";
fieldValue2204.value = "sellion";
ProtoInstance2203.fieldValue = new MFNode();

ProtoInstance2203.fieldValue[0] = fieldValue2204;

let fieldValue2205 = browser.currentScene.createNode("fieldValue");
fieldValue2205.name = "translation";
fieldValue2205.value = "0.005799999926239252 1.631600022315979 0.0851999968290329";
ProtoInstance2203.fieldValue[1] = fieldValue2205;

fieldValue2133.children[23] = ProtoInstance2203;

let ProtoInstance2206 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2206.name = "Site";
ProtoInstance2206.DEF = "hanim_r_infraorbitale";
let fieldValue2207 = browser.currentScene.createNode("fieldValue");
fieldValue2207.name = "name";
fieldValue2207.value = "r_infraorbitale";
ProtoInstance2206.fieldValue = new MFNode();

ProtoInstance2206.fieldValue[0] = fieldValue2207;

let fieldValue2208 = browser.currentScene.createNode("fieldValue");
fieldValue2208.name = "translation";
fieldValue2208.value = "-0.02370000071823597 1.6171000003814697 0.07519999891519547";
ProtoInstance2206.fieldValue[1] = fieldValue2208;

fieldValue2133.children[24] = ProtoInstance2206;

let ProtoInstance2209 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2209.name = "Site";
ProtoInstance2209.DEF = "hanim_l_infraorbitale";
let fieldValue2210 = browser.currentScene.createNode("fieldValue");
fieldValue2210.name = "name";
fieldValue2210.value = "l_infraorbitale";
ProtoInstance2209.fieldValue = new MFNode();

ProtoInstance2209.fieldValue[0] = fieldValue2210;

let fieldValue2211 = browser.currentScene.createNode("fieldValue");
fieldValue2211.name = "translation";
fieldValue2211.value = "0.0340999998152256 1.6171000003814697 0.07519999891519547";
ProtoInstance2209.fieldValue[1] = fieldValue2211;

fieldValue2133.children[25] = ProtoInstance2209;

let ProtoInstance2212 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2212.name = "Site";
ProtoInstance2212.DEF = "hanim_supramenton";
let fieldValue2213 = browser.currentScene.createNode("fieldValue");
fieldValue2213.name = "name";
fieldValue2213.value = "supramenton";
ProtoInstance2212.fieldValue = new MFNode();

ProtoInstance2212.fieldValue[0] = fieldValue2213;

let fieldValue2214 = browser.currentScene.createNode("fieldValue");
fieldValue2214.name = "translation";
fieldValue2214.value = "0.006099999882280827 1.5410000085830688 0.08049999922513962";
ProtoInstance2212.fieldValue[1] = fieldValue2214;

fieldValue2133.children[26] = ProtoInstance2212;

let ProtoInstance2215 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2215.name = "Site";
ProtoInstance2215.DEF = "hanim_r_tragion";
let fieldValue2216 = browser.currentScene.createNode("fieldValue");
fieldValue2216.name = "name";
fieldValue2216.value = "r_tragion";
ProtoInstance2215.fieldValue = new MFNode();

ProtoInstance2215.fieldValue[0] = fieldValue2216;

let fieldValue2217 = browser.currentScene.createNode("fieldValue");
fieldValue2217.name = "translation";
fieldValue2217.value = "-0.06459999829530716 1.6346999406814575 0.03020000085234642";
ProtoInstance2215.fieldValue[1] = fieldValue2217;

fieldValue2133.children[27] = ProtoInstance2215;

let ProtoInstance2218 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2218.name = "Site";
ProtoInstance2218.DEF = "hanim_r_gonion";
let fieldValue2219 = browser.currentScene.createNode("fieldValue");
fieldValue2219.name = "name";
fieldValue2219.value = "r_gonion";
ProtoInstance2218.fieldValue = new MFNode();

ProtoInstance2218.fieldValue[0] = fieldValue2219;

let fieldValue2220 = browser.currentScene.createNode("fieldValue");
fieldValue2220.name = "translation";
fieldValue2220.value = "-0.052000001072883606 1.552899956703186 0.034699998795986176";
ProtoInstance2218.fieldValue[1] = fieldValue2220;

fieldValue2133.children[28] = ProtoInstance2218;

let ProtoInstance2221 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2221.name = "Site";
ProtoInstance2221.DEF = "hanim_l_tragion";
let fieldValue2222 = browser.currentScene.createNode("fieldValue");
fieldValue2222.name = "name";
fieldValue2222.value = "l_tragion";
ProtoInstance2221.fieldValue = new MFNode();

ProtoInstance2221.fieldValue[0] = fieldValue2222;

let fieldValue2223 = browser.currentScene.createNode("fieldValue");
fieldValue2223.name = "translation";
fieldValue2223.value = "0.0738999992609024 1.6347999572753906 0.028200000524520874";
ProtoInstance2221.fieldValue[1] = fieldValue2223;

fieldValue2133.children[29] = ProtoInstance2221;

let ProtoInstance2224 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2224.name = "Site";
ProtoInstance2224.DEF = "hanim_l_gonion";
let fieldValue2225 = browser.currentScene.createNode("fieldValue");
fieldValue2225.name = "name";
fieldValue2225.value = "l_gonion";
ProtoInstance2224.fieldValue = new MFNode();

ProtoInstance2224.fieldValue[0] = fieldValue2225;

let fieldValue2226 = browser.currentScene.createNode("fieldValue");
fieldValue2226.name = "translation";
fieldValue2226.value = "0.06310000270605087 1.5529999732971191 0.032999999821186066";
ProtoInstance2224.fieldValue[1] = fieldValue2226;

fieldValue2133.children[30] = ProtoInstance2224;

let ProtoInstance2227 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2227.name = "Site";
ProtoInstance2227.DEF = "hanim_nuchale";
let fieldValue2228 = browser.currentScene.createNode("fieldValue");
fieldValue2228.name = "name";
fieldValue2228.value = "nuchale";
ProtoInstance2227.fieldValue = new MFNode();

ProtoInstance2227.fieldValue[0] = fieldValue2228;

let fieldValue2229 = browser.currentScene.createNode("fieldValue");
fieldValue2229.name = "translation";
fieldValue2229.value = "0.0038999998942017555 1.5972000360488892 -0.07959999889135361";
ProtoInstance2227.fieldValue[1] = fieldValue2229;

fieldValue2133.children[31] = ProtoInstance2227;

let ProtoInstance2230 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2230.name = "Site";
ProtoInstance2230.DEF = "hanim_l_hand_tip";
let fieldValue2231 = browser.currentScene.createNode("fieldValue");
fieldValue2231.name = "name";
fieldValue2231.value = "l_hand_tip";
ProtoInstance2230.fieldValue = new MFNode();

ProtoInstance2230.fieldValue[0] = fieldValue2231;

let fieldValue2232 = browser.currentScene.createNode("fieldValue");
fieldValue2232.name = "translation";
fieldValue2232.value = "0.20800000429153442 0.6730999946594238 -0.04910000041127205";
ProtoInstance2230.fieldValue[1] = fieldValue2232;

fieldValue2133.children[32] = ProtoInstance2230;

let ProtoInstance2233 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2233.name = "Site";
ProtoInstance2233.DEF = "hanim_l_metacarpal_phalanx_2";
let fieldValue2234 = browser.currentScene.createNode("fieldValue");
fieldValue2234.name = "name";
fieldValue2234.value = "l_metacarpal_phalanx_2";
ProtoInstance2233.fieldValue = new MFNode();

ProtoInstance2233.fieldValue[0] = fieldValue2234;

let fieldValue2235 = browser.currentScene.createNode("fieldValue");
fieldValue2235.name = "translation";
fieldValue2235.value = "0.20090000331401825 0.8138999938964844 -0.02370000071823597";
ProtoInstance2233.fieldValue[1] = fieldValue2235;

fieldValue2133.children[33] = ProtoInstance2233;

let ProtoInstance2236 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2236.name = "Site";
ProtoInstance2236.DEF = "hanim_l_dactylion";
let fieldValue2237 = browser.currentScene.createNode("fieldValue");
fieldValue2237.name = "name";
fieldValue2237.value = "l_dactylion";
ProtoInstance2236.fieldValue = new MFNode();

ProtoInstance2236.fieldValue[0] = fieldValue2237;

let fieldValue2238 = browser.currentScene.createNode("fieldValue");
fieldValue2238.name = "translation";
fieldValue2238.value = "0.20559999346733093 0.6743000149726868 -0.04820000007748604";
ProtoInstance2236.fieldValue[1] = fieldValue2238;

fieldValue2133.children[34] = ProtoInstance2236;

let ProtoInstance2239 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2239.name = "Site";
ProtoInstance2239.DEF = "hanim_l_ulnar_styloid";
let fieldValue2240 = browser.currentScene.createNode("fieldValue");
fieldValue2240.name = "name";
fieldValue2240.value = "l_ulnar_styloid";
ProtoInstance2239.fieldValue = new MFNode();

ProtoInstance2239.fieldValue[0] = fieldValue2240;

let fieldValue2241 = browser.currentScene.createNode("fieldValue");
fieldValue2241.name = "translation";
fieldValue2241.value = "-0.2142000049352646 0.8529000282287598 -0.06480000168085098";
ProtoInstance2239.fieldValue[1] = fieldValue2241;

fieldValue2133.children[35] = ProtoInstance2239;

let ProtoInstance2242 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2242.name = "Site";
ProtoInstance2242.DEF = "hanim_l_metacarpal_phalanx_5";
let fieldValue2243 = browser.currentScene.createNode("fieldValue");
fieldValue2243.name = "name";
fieldValue2243.value = "l_metacarpal_phalanx_5";
ProtoInstance2242.fieldValue = new MFNode();

ProtoInstance2242.fieldValue[0] = fieldValue2243;

let fieldValue2244 = browser.currentScene.createNode("fieldValue");
fieldValue2244.name = "translation";
fieldValue2244.value = "0.19290000200271606 0.7860000133514404 -0.11219999939203262";
ProtoInstance2242.fieldValue[1] = fieldValue2244;

fieldValue2133.children[36] = ProtoInstance2242;

let ProtoInstance2245 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2245.name = "Site";
ProtoInstance2245.DEF = "hanim_l_radial_styloid";
let fieldValue2246 = browser.currentScene.createNode("fieldValue");
fieldValue2246.name = "name";
fieldValue2246.value = "l_radial_styloid";
ProtoInstance2245.fieldValue = new MFNode();

ProtoInstance2245.fieldValue[0] = fieldValue2246;

let fieldValue2247 = browser.currentScene.createNode("fieldValue");
fieldValue2247.name = "translation";
fieldValue2247.value = "0.19009999930858612 0.8644999861717224 -0.04149999842047691";
ProtoInstance2245.fieldValue[1] = fieldValue2247;

fieldValue2133.children[37] = ProtoInstance2245;

let ProtoInstance2248 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2248.name = "Site";
ProtoInstance2248.DEF = "hanim_l_olecranon";
let fieldValue2249 = browser.currentScene.createNode("fieldValue");
fieldValue2249.name = "name";
fieldValue2249.value = "l_olecranon";
ProtoInstance2248.fieldValue = new MFNode();

ProtoInstance2248.fieldValue[0] = fieldValue2249;

let fieldValue2250 = browser.currentScene.createNode("fieldValue");
fieldValue2250.name = "translation";
fieldValue2250.value = "-0.19619999825954437 1.1375000476837158 -0.11230000108480453";
ProtoInstance2248.fieldValue[1] = fieldValue2250;

fieldValue2133.children[38] = ProtoInstance2248;

let ProtoInstance2251 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2251.name = "Site";
ProtoInstance2251.DEF = "hanim_l_humeral_medial_epicondyles";
let fieldValue2252 = browser.currentScene.createNode("fieldValue");
fieldValue2252.name = "name";
fieldValue2252.value = "l_humeral_medial_epicondyles";
ProtoInstance2251.fieldValue = new MFNode();

ProtoInstance2251.fieldValue[0] = fieldValue2252;

let fieldValue2253 = browser.currentScene.createNode("fieldValue");
fieldValue2253.name = "translation";
fieldValue2253.value = "0.17350000143051147 1.1272000074386597 -0.11129999905824661";
ProtoInstance2251.fieldValue[1] = fieldValue2253;

fieldValue2133.children[39] = ProtoInstance2251;

let ProtoInstance2254 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2254.name = "Site";
ProtoInstance2254.DEF = "hanim_l_radiale";
let fieldValue2255 = browser.currentScene.createNode("fieldValue");
fieldValue2255.name = "name";
fieldValue2255.value = "l_radiale";
ProtoInstance2254.fieldValue = new MFNode();

ProtoInstance2254.fieldValue[0] = fieldValue2255;

let fieldValue2256 = browser.currentScene.createNode("fieldValue");
fieldValue2256.name = "translation";
fieldValue2256.value = "0.21819999814033508 1.1211999654769897 -0.11670000106096268";
ProtoInstance2254.fieldValue[1] = fieldValue2256;

fieldValue2133.children[40] = ProtoInstance2254;

let ProtoInstance2257 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2257.name = "Site";
ProtoInstance2257.DEF = "hanim_l_humeral_lateral_epicondyles";
let fieldValue2258 = browser.currentScene.createNode("fieldValue");
fieldValue2258.name = "name";
fieldValue2258.value = "l_humeral_lateral_epicondyles";
ProtoInstance2257.fieldValue = new MFNode();

ProtoInstance2257.fieldValue[0] = fieldValue2258;

let fieldValue2259 = browser.currentScene.createNode("fieldValue");
fieldValue2259.name = "translation";
fieldValue2259.value = "0.2280000001192093 1.1482000350952148 -0.10999999940395355";
ProtoInstance2257.fieldValue[1] = fieldValue2259;

fieldValue2133.children[41] = ProtoInstance2257;

let ProtoInstance2260 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2260.name = "Site";
ProtoInstance2260.DEF = "hanim_r_hand_tip";
let fieldValue2261 = browser.currentScene.createNode("fieldValue");
fieldValue2261.name = "name";
fieldValue2261.value = "r_hand_tip";
ProtoInstance2260.fieldValue = new MFNode();

ProtoInstance2260.fieldValue[0] = fieldValue2261;

let fieldValue2262 = browser.currentScene.createNode("fieldValue");
fieldValue2262.name = "translation";
fieldValue2262.value = "-0.19689999520778656 0.6758000254631042 -0.04270000010728836";
ProtoInstance2260.fieldValue[1] = fieldValue2262;

fieldValue2133.children[42] = ProtoInstance2260;

let ProtoInstance2263 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2263.name = "Site";
ProtoInstance2263.DEF = "hanim_r_metacarpal_phalanx_2";
let fieldValue2264 = browser.currentScene.createNode("fieldValue");
fieldValue2264.name = "name";
fieldValue2264.value = "r_metacarpal_phalanx_2";
ProtoInstance2263.fieldValue = new MFNode();

ProtoInstance2263.fieldValue[0] = fieldValue2264;

let fieldValue2265 = browser.currentScene.createNode("fieldValue");
fieldValue2265.name = "translation";
fieldValue2265.value = "-0.19769999384880066 0.8169000148773193 -0.01769999973475933";
ProtoInstance2263.fieldValue[1] = fieldValue2265;

fieldValue2133.children[43] = ProtoInstance2263;

let ProtoInstance2266 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2266.name = "Site";
ProtoInstance2266.DEF = "hanim_r_dactylion";
let fieldValue2267 = browser.currentScene.createNode("fieldValue");
fieldValue2267.name = "name";
fieldValue2267.value = "r_dactylion";
ProtoInstance2266.fieldValue = new MFNode();

ProtoInstance2266.fieldValue[0] = fieldValue2267;

let fieldValue2268 = browser.currentScene.createNode("fieldValue");
fieldValue2268.name = "translation";
fieldValue2268.value = "-0.1941000074148178 0.6772000193595886 -0.04230000078678131";
ProtoInstance2266.fieldValue[1] = fieldValue2268;

fieldValue2133.children[44] = ProtoInstance2266;

let ProtoInstance2269 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2269.name = "Site";
ProtoInstance2269.DEF = "hanim_r_ulnar_styloid";
let fieldValue2270 = browser.currentScene.createNode("fieldValue");
fieldValue2270.name = "name";
fieldValue2270.value = "r_ulnar_styloid";
ProtoInstance2269.fieldValue = new MFNode();

ProtoInstance2269.fieldValue[0] = fieldValue2270;

let fieldValue2271 = browser.currentScene.createNode("fieldValue");
fieldValue2271.name = "translation";
fieldValue2271.value = "-0.21170000731945038 0.8561999797821045 -0.058400001376867294";
ProtoInstance2269.fieldValue[1] = fieldValue2271;

fieldValue2133.children[45] = ProtoInstance2269;

let ProtoInstance2272 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2272.name = "Site";
ProtoInstance2272.DEF = "hanim_r_metacarpal_phalanx_5";
let fieldValue2273 = browser.currentScene.createNode("fieldValue");
fieldValue2273.name = "name";
fieldValue2273.value = "r_metacarpal_phalanx_5";
ProtoInstance2272.fieldValue = new MFNode();

ProtoInstance2272.fieldValue[0] = fieldValue2273;

let fieldValue2274 = browser.currentScene.createNode("fieldValue");
fieldValue2274.name = "translation";
fieldValue2274.value = "-0.19290000200271606 0.7889999747276306 -0.10639999806880951";
ProtoInstance2272.fieldValue[1] = fieldValue2274;

fieldValue2133.children[46] = ProtoInstance2272;

let ProtoInstance2275 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2275.name = "Site";
ProtoInstance2275.DEF = "hanim_r_radial_styloid";
let fieldValue2276 = browser.currentScene.createNode("fieldValue");
fieldValue2276.name = "name";
fieldValue2276.value = "r_radial_styloid";
ProtoInstance2275.fieldValue = new MFNode();

ProtoInstance2275.fieldValue[0] = fieldValue2276;

let fieldValue2277 = browser.currentScene.createNode("fieldValue");
fieldValue2277.name = "translation";
fieldValue2277.value = "-0.188400000333786 0.8676000237464905 -0.035999998450279236";
ProtoInstance2275.fieldValue[1] = fieldValue2277;

fieldValue2133.children[47] = ProtoInstance2275;

let ProtoInstance2278 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2278.name = "Site";
ProtoInstance2278.DEF = "hanim_r_olecranon";
let fieldValue2279 = browser.currentScene.createNode("fieldValue");
fieldValue2279.name = "name";
fieldValue2279.value = "r_olecranon";
ProtoInstance2278.fieldValue = new MFNode();

ProtoInstance2278.fieldValue[0] = fieldValue2279;

let fieldValue2280 = browser.currentScene.createNode("fieldValue");
fieldValue2280.name = "translation";
fieldValue2280.value = "-0.1906999945640564 1.1404999494552612 -0.10649999976158142";
ProtoInstance2278.fieldValue[1] = fieldValue2280;

fieldValue2133.children[48] = ProtoInstance2278;

let ProtoInstance2281 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2281.name = "Site";
ProtoInstance2281.DEF = "hanim_r_humeral_medial_epicondyles";
let fieldValue2282 = browser.currentScene.createNode("fieldValue");
fieldValue2282.name = "name";
fieldValue2282.value = "r_humeral_medial_epicondyles";
ProtoInstance2281.fieldValue = new MFNode();

ProtoInstance2281.fieldValue[0] = fieldValue2282;

let fieldValue2283 = browser.currentScene.createNode("fieldValue");
fieldValue2283.name = "translation";
fieldValue2283.value = "-0.1679999977350235 1.1297999620437622 -0.10620000213384628";
ProtoInstance2281.fieldValue[1] = fieldValue2283;

fieldValue2133.children[49] = ProtoInstance2281;

let ProtoInstance2284 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2284.name = "Site";
ProtoInstance2284.DEF = "hanim_r_radiale";
let fieldValue2285 = browser.currentScene.createNode("fieldValue");
fieldValue2285.name = "name";
fieldValue2285.value = "r_radiale";
ProtoInstance2284.fieldValue = new MFNode();

ProtoInstance2284.fieldValue[0] = fieldValue2285;

let fieldValue2286 = browser.currentScene.createNode("fieldValue");
fieldValue2286.name = "translation";
fieldValue2286.value = "-0.21299999952316284 1.1304999589920044 -0.10909999907016754";
ProtoInstance2284.fieldValue[1] = fieldValue2286;

fieldValue2133.children[50] = ProtoInstance2284;

let ProtoInstance2287 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2287.name = "Site";
ProtoInstance2287.DEF = "hanim_r_humeral_lateral_epicondyles";
let fieldValue2288 = browser.currentScene.createNode("fieldValue");
fieldValue2288.name = "name";
fieldValue2288.value = "r_humeral_lateral_epicondyles";
ProtoInstance2287.fieldValue = new MFNode();

ProtoInstance2287.fieldValue[0] = fieldValue2288;

let fieldValue2289 = browser.currentScene.createNode("fieldValue");
fieldValue2289.name = "translation";
fieldValue2289.value = "-0.2223999947309494 1.1517000198364258 -0.10329999774694443";
ProtoInstance2287.fieldValue[1] = fieldValue2289;

fieldValue2133.children[51] = ProtoInstance2287;

let ProtoInstance2290 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2290.name = "Site";
ProtoInstance2290.DEF = "hanim_r_clavicale";
let fieldValue2291 = browser.currentScene.createNode("fieldValue");
fieldValue2291.name = "name";
fieldValue2291.value = "r_clavicale";
ProtoInstance2290.fieldValue = new MFNode();

ProtoInstance2290.fieldValue[0] = fieldValue2291;

let fieldValue2292 = browser.currentScene.createNode("fieldValue");
fieldValue2292.name = "translation";
fieldValue2292.value = "-0.011500000022351742 1.4943000078201294 0.03999999910593033";
ProtoInstance2290.fieldValue[1] = fieldValue2292;

fieldValue2133.children[52] = ProtoInstance2290;

let ProtoInstance2293 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2293.name = "Site";
ProtoInstance2293.DEF = "hanim_suprasternale";
let fieldValue2294 = browser.currentScene.createNode("fieldValue");
fieldValue2294.name = "name";
fieldValue2294.value = "suprasternale";
ProtoInstance2293.fieldValue = new MFNode();

ProtoInstance2293.fieldValue[0] = fieldValue2294;

let fieldValue2295 = browser.currentScene.createNode("fieldValue");
fieldValue2295.name = "translation";
fieldValue2295.value = "0.00839999970048666 1.4714000225067139 0.05510000139474869";
ProtoInstance2293.fieldValue[1] = fieldValue2295;

fieldValue2133.children[53] = ProtoInstance2293;

let ProtoInstance2296 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2296.name = "Site";
ProtoInstance2296.DEF = "hanim_l_clavicale";
let fieldValue2297 = browser.currentScene.createNode("fieldValue");
fieldValue2297.name = "name";
fieldValue2297.value = "l_clavicale";
ProtoInstance2296.fieldValue = new MFNode();

ProtoInstance2296.fieldValue[0] = fieldValue2297;

let fieldValue2298 = browser.currentScene.createNode("fieldValue");
fieldValue2298.name = "translation";
fieldValue2298.value = "0.02710000053048134 1.4943000078201294 0.039400000125169754";
ProtoInstance2296.fieldValue[1] = fieldValue2298;

fieldValue2133.children[54] = ProtoInstance2296;

let ProtoInstance2299 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2299.name = "Site";
ProtoInstance2299.DEF = "hanim_r_thelion";
let fieldValue2300 = browser.currentScene.createNode("fieldValue");
fieldValue2300.name = "name";
fieldValue2300.value = "r_thelion";
ProtoInstance2299.fieldValue = new MFNode();

ProtoInstance2299.fieldValue[0] = fieldValue2300;

let fieldValue2301 = browser.currentScene.createNode("fieldValue");
fieldValue2301.name = "translation";
fieldValue2301.value = "-0.07360000163316727 1.3385000228881836 0.1216999962925911";
ProtoInstance2299.fieldValue[1] = fieldValue2301;

fieldValue2133.children[55] = ProtoInstance2299;

let ProtoInstance2302 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2302.name = "Site";
ProtoInstance2302.DEF = "hanim_l_thelion";
let fieldValue2303 = browser.currentScene.createNode("fieldValue");
fieldValue2303.name = "name";
fieldValue2303.value = "l_thelion";
ProtoInstance2302.fieldValue = new MFNode();

ProtoInstance2302.fieldValue[0] = fieldValue2303;

let fieldValue2304 = browser.currentScene.createNode("fieldValue");
fieldValue2304.name = "translation";
fieldValue2304.value = "0.09179999679327011 1.3381999731063843 0.11919999867677689";
ProtoInstance2302.fieldValue[1] = fieldValue2304;

fieldValue2133.children[56] = ProtoInstance2302;

let ProtoInstance2305 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2305.name = "Site";
ProtoInstance2305.DEF = "hanim_substernale";
let fieldValue2306 = browser.currentScene.createNode("fieldValue");
fieldValue2306.name = "name";
fieldValue2306.value = "substernale";
ProtoInstance2305.fieldValue = new MFNode();

ProtoInstance2305.fieldValue[0] = fieldValue2306;

let fieldValue2307 = browser.currentScene.createNode("fieldValue");
fieldValue2307.name = "translation";
fieldValue2307.value = "0.008500000461935997 1.2994999885559082 0.11469999700784683";
ProtoInstance2305.fieldValue[1] = fieldValue2307;

fieldValue2133.children[57] = ProtoInstance2305;

let ProtoInstance2308 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2308.name = "Site";
ProtoInstance2308.DEF = "hanim_r_rib10";
let fieldValue2309 = browser.currentScene.createNode("fieldValue");
fieldValue2309.name = "name";
fieldValue2309.value = "r_rib10";
ProtoInstance2308.fieldValue = new MFNode();

ProtoInstance2308.fieldValue[0] = fieldValue2309;

let fieldValue2310 = browser.currentScene.createNode("fieldValue");
fieldValue2310.name = "translation";
fieldValue2310.value = "-0.07109999656677246 1.194100022315979 0.10159999877214432";
ProtoInstance2308.fieldValue[1] = fieldValue2310;

fieldValue2133.children[58] = ProtoInstance2308;

let ProtoInstance2311 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2311.name = "Site";
ProtoInstance2311.DEF = "hanim_l_rib10";
let fieldValue2312 = browser.currentScene.createNode("fieldValue");
fieldValue2312.name = "name";
fieldValue2312.value = "l_rib10";
ProtoInstance2311.fieldValue = new MFNode();

ProtoInstance2311.fieldValue[0] = fieldValue2312;

let fieldValue2313 = browser.currentScene.createNode("fieldValue");
fieldValue2313.name = "translation";
fieldValue2313.value = "0.08709999918937683 1.1924999952316284 0.09920000284910202";
ProtoInstance2311.fieldValue[1] = fieldValue2313;

fieldValue2133.children[59] = ProtoInstance2311;

let ProtoInstance2314 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2314.name = "Site";
ProtoInstance2314.DEF = "hanim_cervicale";
let fieldValue2315 = browser.currentScene.createNode("fieldValue");
fieldValue2315.name = "name";
fieldValue2315.value = "cervicale";
ProtoInstance2314.fieldValue = new MFNode();

ProtoInstance2314.fieldValue[0] = fieldValue2315;

let fieldValue2316 = browser.currentScene.createNode("fieldValue");
fieldValue2316.name = "translation";
fieldValue2316.value = "0.006399999838322401 1.5199999809265137 -0.08150000125169754";
ProtoInstance2314.fieldValue[1] = fieldValue2316;

fieldValue2133.children[60] = ProtoInstance2314;

let ProtoInstance2317 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2317.name = "Site";
ProtoInstance2317.DEF = "hanim_spine_2_lower_back";
let fieldValue2318 = browser.currentScene.createNode("fieldValue");
fieldValue2318.name = "name";
fieldValue2318.value = "spine_2_lower_back";
ProtoInstance2317.fieldValue = new MFNode();

ProtoInstance2317.fieldValue[0] = fieldValue2318;

let fieldValue2319 = browser.currentScene.createNode("fieldValue");
fieldValue2319.name = "translation";
fieldValue2319.value = "0.004900000058114529 1.1907999515533447 -0.11129999905824661";
ProtoInstance2317.fieldValue[1] = fieldValue2319;

fieldValue2133.children[61] = ProtoInstance2317;

let ProtoInstance2320 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2320.name = "Site";
ProtoInstance2320.DEF = "hanim_waist_preferred_posterior";
let fieldValue2321 = browser.currentScene.createNode("fieldValue");
fieldValue2321.name = "name";
fieldValue2321.value = "waist_preferred_posterior";
ProtoInstance2320.fieldValue = new MFNode();

ProtoInstance2320.fieldValue[0] = fieldValue2321;

let fieldValue2322 = browser.currentScene.createNode("fieldValue");
fieldValue2322.name = "translation";
fieldValue2322.value = "0.28999999165534973 1.0915000438690186 -0.10909999907016754";
ProtoInstance2320.fieldValue[1] = fieldValue2322;

fieldValue2133.children[62] = ProtoInstance2320;

let ProtoInstance2323 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2323.name = "Site";
ProtoInstance2323.DEF = "hanim_r_acromion";
let fieldValue2324 = browser.currentScene.createNode("fieldValue");
fieldValue2324.name = "name";
fieldValue2324.value = "r_acromion";
ProtoInstance2323.fieldValue = new MFNode();

ProtoInstance2323.fieldValue[0] = fieldValue2324;

let fieldValue2325 = browser.currentScene.createNode("fieldValue");
fieldValue2325.name = "translation";
fieldValue2325.value = "-0.19050000607967377 1.479099988937378 -0.04309999942779541";
ProtoInstance2323.fieldValue[1] = fieldValue2325;

fieldValue2133.children[63] = ProtoInstance2323;

let ProtoInstance2326 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2326.name = "Site";
ProtoInstance2326.DEF = "hanim_r_axilla_proximal";
let fieldValue2327 = browser.currentScene.createNode("fieldValue");
fieldValue2327.name = "name";
fieldValue2327.value = "r_axilla_proximal";
ProtoInstance2326.fieldValue = new MFNode();

ProtoInstance2326.fieldValue[0] = fieldValue2327;

let fieldValue2328 = browser.currentScene.createNode("fieldValue");
fieldValue2328.name = "translation";
fieldValue2328.value = "-0.16259999573230743 1.4071999788284302 -0.003100000089034438";
ProtoInstance2326.fieldValue[1] = fieldValue2328;

fieldValue2133.children[64] = ProtoInstance2326;

let ProtoInstance2329 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2329.name = "Site";
ProtoInstance2329.DEF = "hanim_r_axilla_distal";
let fieldValue2330 = browser.currentScene.createNode("fieldValue");
fieldValue2330.name = "name";
fieldValue2330.value = "r_axilla_distal";
ProtoInstance2329.fieldValue = new MFNode();

ProtoInstance2329.fieldValue[0] = fieldValue2330;

let fieldValue2331 = browser.currentScene.createNode("fieldValue");
fieldValue2331.name = "translation";
fieldValue2331.value = "-0.16030000150203705 1.4098000526428223 -0.08259999752044678";
ProtoInstance2329.fieldValue[1] = fieldValue2331;

fieldValue2133.children[65] = ProtoInstance2329;

let ProtoInstance2332 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2332.name = "Site";
ProtoInstance2332.DEF = "hanim_l_acromion";
let fieldValue2333 = browser.currentScene.createNode("fieldValue");
fieldValue2333.name = "name";
fieldValue2333.value = "l_acromion";
ProtoInstance2332.fieldValue = new MFNode();

ProtoInstance2332.fieldValue[0] = fieldValue2333;

let fieldValue2334 = browser.currentScene.createNode("fieldValue");
fieldValue2334.name = "translation";
fieldValue2334.value = "0.20319999754428864 1.4759999513626099 -0.04899999871850014";
ProtoInstance2332.fieldValue[1] = fieldValue2334;

fieldValue2133.children[66] = ProtoInstance2332;

let ProtoInstance2335 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2335.name = "Site";
ProtoInstance2335.DEF = "hanim_l_axilla_proximal";
let fieldValue2336 = browser.currentScene.createNode("fieldValue");
fieldValue2336.name = "name";
fieldValue2336.value = "l_axilla_proximal";
ProtoInstance2335.fieldValue = new MFNode();

ProtoInstance2335.fieldValue[0] = fieldValue2336;

let fieldValue2337 = browser.currentScene.createNode("fieldValue");
fieldValue2337.name = "translation";
fieldValue2337.value = "0.1776999980211258 1.406499981880188 -0.007499999832361937";
ProtoInstance2335.fieldValue[1] = fieldValue2337;

fieldValue2133.children[67] = ProtoInstance2335;

let ProtoInstance2338 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2338.name = "Site";
ProtoInstance2338.DEF = "hanim_l_axilla_distal";
let fieldValue2339 = browser.currentScene.createNode("fieldValue");
fieldValue2339.name = "name";
fieldValue2339.value = "l_axilla_distal";
ProtoInstance2338.fieldValue = new MFNode();

ProtoInstance2338.fieldValue[0] = fieldValue2339;

let fieldValue2340 = browser.currentScene.createNode("fieldValue");
fieldValue2340.name = "translation";
fieldValue2340.value = "0.17059999704360962 1.4071999788284302 -0.08749999850988388";
ProtoInstance2338.fieldValue[1] = fieldValue2340;

fieldValue2133.children[68] = ProtoInstance2338;

let ProtoInstance2341 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2341.name = "Site";
ProtoInstance2341.DEF = "hanim_r_neck_base";
let fieldValue2342 = browser.currentScene.createNode("fieldValue");
fieldValue2342.name = "name";
fieldValue2342.value = "r_neck_base";
ProtoInstance2341.fieldValue = new MFNode();

ProtoInstance2341.fieldValue[0] = fieldValue2342;

let fieldValue2343 = browser.currentScene.createNode("fieldValue");
fieldValue2343.name = "translation";
fieldValue2343.value = "-0.04190000146627426 1.5148999691009521 -0.02199999988079071";
ProtoInstance2341.fieldValue[1] = fieldValue2343;

fieldValue2133.children[69] = ProtoInstance2341;

let ProtoInstance2344 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2344.name = "Site";
ProtoInstance2344.DEF = "hanim_l_neck_base";
let fieldValue2345 = browser.currentScene.createNode("fieldValue");
fieldValue2345.name = "name";
fieldValue2345.value = "l_neck_base";
ProtoInstance2344.fieldValue = new MFNode();

ProtoInstance2344.fieldValue[0] = fieldValue2345;

let fieldValue2346 = browser.currentScene.createNode("fieldValue");
fieldValue2346.name = "translation";
fieldValue2346.value = "0.06459999829530716 1.5140999555587769 -0.03799999877810478";
ProtoInstance2344.fieldValue[1] = fieldValue2346;

fieldValue2133.children[70] = ProtoInstance2344;

let ProtoInstance2347 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2347.name = "Site";
ProtoInstance2347.DEF = "hanim_navel";
let fieldValue2348 = browser.currentScene.createNode("fieldValue");
fieldValue2348.name = "name";
fieldValue2348.value = "navel";
ProtoInstance2347.fieldValue = new MFNode();

ProtoInstance2347.fieldValue[0] = fieldValue2348;

let fieldValue2349 = browser.currentScene.createNode("fieldValue");
fieldValue2349.name = "translation";
fieldValue2349.value = "0.006899999920278788 1.09660005569458 0.10170000046491623";
ProtoInstance2347.fieldValue[1] = fieldValue2349;

fieldValue2133.children[71] = ProtoInstance2347;

let ProtoInstance2350 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2350.name = "Site";
ProtoInstance2350.DEF = "hanim_r_asis";
let fieldValue2351 = browser.currentScene.createNode("fieldValue");
fieldValue2351.name = "name";
fieldValue2351.value = "r_asis";
ProtoInstance2350.fieldValue = new MFNode();

ProtoInstance2350.fieldValue[0] = fieldValue2351;

let fieldValue2352 = browser.currentScene.createNode("fieldValue");
fieldValue2352.name = "translation";
fieldValue2352.value = "-0.08869999647140503 1.0020999908447266 0.1111999973654747";
ProtoInstance2350.fieldValue[1] = fieldValue2352;

fieldValue2133.children[72] = ProtoInstance2350;

let ProtoInstance2353 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2353.name = "Site";
ProtoInstance2353.DEF = "hanim_l_asis";
let fieldValue2354 = browser.currentScene.createNode("fieldValue");
fieldValue2354.name = "name";
fieldValue2354.value = "l_asis";
ProtoInstance2353.fieldValue = new MFNode();

ProtoInstance2353.fieldValue[0] = fieldValue2354;

let fieldValue2355 = browser.currentScene.createNode("fieldValue");
fieldValue2355.name = "translation";
fieldValue2355.value = "0.0925000011920929 0.9983000159263611 0.10520000010728836";
ProtoInstance2353.fieldValue[1] = fieldValue2355;

fieldValue2133.children[73] = ProtoInstance2353;

let ProtoInstance2356 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2356.name = "Site";
ProtoInstance2356.DEF = "hanim_r_iliocristale";
let fieldValue2357 = browser.currentScene.createNode("fieldValue");
fieldValue2357.name = "name";
fieldValue2357.value = "r_iliocristale";
ProtoInstance2356.fieldValue = new MFNode();

ProtoInstance2356.fieldValue[0] = fieldValue2357;

let fieldValue2358 = browser.currentScene.createNode("fieldValue");
fieldValue2358.name = "translation";
fieldValue2358.value = "-0.1525000035762787 1.0628000497817993 0.0035000001080334187";
ProtoInstance2356.fieldValue[1] = fieldValue2358;

fieldValue2133.children[74] = ProtoInstance2356;

let ProtoInstance2359 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2359.name = "Site";
ProtoInstance2359.DEF = "hanim_r_trochanterion";
let fieldValue2360 = browser.currentScene.createNode("fieldValue");
fieldValue2360.name = "name";
fieldValue2360.value = "r_trochanterion";
ProtoInstance2359.fieldValue = new MFNode();

ProtoInstance2359.fieldValue[0] = fieldValue2360;

let fieldValue2361 = browser.currentScene.createNode("fieldValue");
fieldValue2361.name = "translation";
fieldValue2361.value = "-0.1688999980688095 0.8418999910354614 0.03519999980926514";
ProtoInstance2359.fieldValue[1] = fieldValue2361;

fieldValue2133.children[75] = ProtoInstance2359;

let ProtoInstance2362 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2362.name = "Site";
ProtoInstance2362.DEF = "hanim_l_iliocristale";
let fieldValue2363 = browser.currentScene.createNode("fieldValue");
fieldValue2363.name = "name";
fieldValue2363.value = "l_iliocristale";
ProtoInstance2362.fieldValue = new MFNode();

ProtoInstance2362.fieldValue[0] = fieldValue2363;

let fieldValue2364 = browser.currentScene.createNode("fieldValue");
fieldValue2364.name = "translation";
fieldValue2364.value = "0.16120000183582306 1.0536999702453613 0.0007999999797903001";
ProtoInstance2362.fieldValue[1] = fieldValue2364;

fieldValue2133.children[76] = ProtoInstance2362;

let ProtoInstance2365 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2365.name = "Site";
ProtoInstance2365.DEF = "hanim_l_trochanterion";
let fieldValue2366 = browser.currentScene.createNode("fieldValue");
fieldValue2366.name = "name";
fieldValue2366.value = "l_trochanterion";
ProtoInstance2365.fieldValue = new MFNode();

ProtoInstance2365.fieldValue[0] = fieldValue2366;

let fieldValue2367 = browser.currentScene.createNode("fieldValue");
fieldValue2367.name = "translation";
fieldValue2367.value = "0.16769999265670776 0.8335999846458435 0.030300000682473183";
ProtoInstance2365.fieldValue[1] = fieldValue2367;

fieldValue2133.children[77] = ProtoInstance2365;

let ProtoInstance2368 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2368.name = "Site";
ProtoInstance2368.DEF = "hanim_r_psis";
let fieldValue2369 = browser.currentScene.createNode("fieldValue");
fieldValue2369.name = "name";
fieldValue2369.value = "r_psis";
ProtoInstance2368.fieldValue = new MFNode();

ProtoInstance2368.fieldValue[0] = fieldValue2369;

let fieldValue2370 = browser.currentScene.createNode("fieldValue");
fieldValue2370.name = "translation";
fieldValue2370.value = "-0.07159999758005142 1.0190000534057617 -0.11379999667406082";
ProtoInstance2368.fieldValue[1] = fieldValue2370;

fieldValue2133.children[78] = ProtoInstance2368;

let ProtoInstance2371 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2371.name = "Site";
ProtoInstance2371.DEF = "hanim_l_psis";
let fieldValue2372 = browser.currentScene.createNode("fieldValue");
fieldValue2372.name = "name";
fieldValue2372.value = "l_psis";
ProtoInstance2371.fieldValue = new MFNode();

ProtoInstance2371.fieldValue[0] = fieldValue2372;

let fieldValue2373 = browser.currentScene.createNode("fieldValue");
fieldValue2373.name = "translation";
fieldValue2373.value = "0.07739999890327454 1.0190000534057617 -0.11509999632835388";
ProtoInstance2371.fieldValue[1] = fieldValue2373;

fieldValue2133.children[79] = ProtoInstance2371;

let ProtoInstance2374 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance2374.name = "Site";
ProtoInstance2374.DEF = "hanim_crotch";
let fieldValue2375 = browser.currentScene.createNode("fieldValue");
fieldValue2375.name = "name";
fieldValue2375.value = "crotch";
ProtoInstance2374.fieldValue = new MFNode();

ProtoInstance2374.fieldValue[0] = fieldValue2375;

let fieldValue2376 = browser.currentScene.createNode("fieldValue");
fieldValue2376.name = "translation";
fieldValue2376.value = "0.0034000000450760126 0.8266000151634216 0.025699999183416367";
ProtoInstance2374.fieldValue[1] = fieldValue2376;

fieldValue2133.children[80] = ProtoInstance2374;

ProtoInstance98.fieldValue[3] = fieldValue2133;

let fieldValue2377 = browser.currentScene.createNode("fieldValue");
fieldValue2377.name = "name";
fieldValue2377.value = "humanoid";
ProtoInstance98.fieldValue[4] = fieldValue2377;

let fieldValue2378 = browser.currentScene.createNode("fieldValue");
fieldValue2378.name = "info";
fieldValue2378.value = "\"authorName=Matthew T. Beitler\" \"authorEmail=beitler@cis.upenn.edu or beitler@acm.org\" \"creationDate=05/12/99\" \"copyright=Copyright 1999-2003, Matthew T. Beitler\" \"humanoidVersion=JointCenters 200x, LOA&#8209;1\" \"usageRestrictions= PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED, PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided 'as-is' and without warranty of any kind, express, implied or otherwise, including without limitation, any warranty of merchantability or fitness for a particular purpose.\" \"modificationDate=08/12/03\"";
ProtoInstance98.fieldValue[5] = fieldValue2378;

browser.currentScene.children[4] = ProtoInstance98;

let Group2379 = browser.currentScene.createNode("Group");
Group2379.DEF = "JointCenters_WorldInfo";
let WorldInfo2380 = browser.currentScene.createNode("WorldInfo");
WorldInfo2380.title = "HANIM 200x Default Joint Centers, LOA&#8209;1";
WorldInfo2380.info = new MFString(new java.lang.String[" HANIM 200x Default Joint Centers, Level-Of-Articulation 1 -------------------------------------------------------- HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://H-Anim.org/Specifications/H-Anim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modelling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "]);
Group2379.children = new MFNode();

Group2379.children[0] = WorldInfo2380;

browser.currentScene.children[5] = Group2379;

let NavigationInfo2381 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo2381.avatarSize = new MFFloat(new float[0.25,1.600000023841858,0.75]);
NavigationInfo2381.speed = 1.5;
browser.currentScene.children[6] = NavigationInfo2381;

