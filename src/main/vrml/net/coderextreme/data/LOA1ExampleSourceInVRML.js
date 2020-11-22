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
ProtoInstance98.DEF = "humanoid_2";
let fieldValue99 = browser.currentScene.createNode("fieldValue");
fieldValue99.name = "humanoidBody";
let ProtoInstance100 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance100.name = "Joint";
ProtoInstance100.DEF = "hanim_humanoid_root_2";
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
fieldValue103.value = "0 0.824000000953674 0.0276999995112419";
ProtoInstance100.fieldValue[2] = fieldValue103;

let fieldValue104 = browser.currentScene.createNode("fieldValue");
fieldValue104.name = "children";
let ProtoInstance105 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance105.name = "Joint";
ProtoInstance105.DEF = "hanim_sacroiliac_2";
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
fieldValue108.value = "0 0.914900004863739 0.0015999999595806";
ProtoInstance105.fieldValue[2] = fieldValue108;

let fieldValue109 = browser.currentScene.createNode("fieldValue");
fieldValue109.name = "children";
let ProtoInstance110 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance110.name = "Joint";
ProtoInstance110.DEF = "hanim_l_hip_2";
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
fieldValue113.value = "0.0961000025272369 0.912400007247925 -0.0000999999974737875";
ProtoInstance110.fieldValue[2] = fieldValue113;

let fieldValue114 = browser.currentScene.createNode("fieldValue");
fieldValue114.name = "children";
let ProtoInstance115 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance115.name = "Joint";
ProtoInstance115.DEF = "hanim_l_knee_2";
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
fieldValue118.value = "0.104000002145767 0.486699998378754 0.030799999833107";
ProtoInstance115.fieldValue[2] = fieldValue118;

let fieldValue119 = browser.currentScene.createNode("fieldValue");
fieldValue119.name = "children";
let ProtoInstance120 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance120.name = "Joint";
ProtoInstance120.DEF = "hanim_l_talocrural_2";
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
fieldValue123.value = "0.110100001096725 0.0656000003218651 -0.0736000016331673";
ProtoInstance120.fieldValue[2] = fieldValue123;

let fieldValue124 = browser.currentScene.createNode("fieldValue");
fieldValue124.name = "children";
let ProtoInstance125 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance125.name = "Joint";
ProtoInstance125.DEF = "hanim_l_metatarsophalangeal__2";
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
fieldValue128.value = "0.108599998056889 0.0000999999974737875 0.0368000008165836";
ProtoInstance125.fieldValue[2] = fieldValue128;

let fieldValue129 = browser.currentScene.createNode("fieldValue");
fieldValue129.name = "children";
let ProtoInstance130 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance130.name = "Segment";
ProtoInstance130.DEF = "hanim_l_middistal_2";
let fieldValue131 = browser.currentScene.createNode("fieldValue");
fieldValue131.name = "name";
fieldValue131.value = "l_middistal";
ProtoInstance130.fieldValue = new MFNode();

ProtoInstance130.fieldValue[0] = fieldValue131;

let fieldValue132 = browser.currentScene.createNode("fieldValue");
fieldValue132.name = "children";
let ProtoInstance133 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance133.name = "Site";
ProtoInstance133.DEF = "hanim_l_middistal_tip_2";
let fieldValue134 = browser.currentScene.createNode("fieldValue");
fieldValue134.name = "name";
fieldValue134.value = "l_middistal_tip";
ProtoInstance133.fieldValue = new MFNode();

ProtoInstance133.fieldValue[0] = fieldValue134;

let fieldValue135 = browser.currentScene.createNode("fieldValue");
fieldValue135.name = "translation";
fieldValue135.value = "0.135399997234344 0.0015999999595806 0.147599995136261";
ProtoInstance133.fieldValue[1] = fieldValue135;

fieldValue132.children = new MFNode();

fieldValue132.children[0] = ProtoInstance133;

let ProtoInstance136 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance136.name = "Site";
ProtoInstance136.DEF = "hanim_l_tarsal_interphalangeal_phalanx6";
let fieldValue137 = browser.currentScene.createNode("fieldValue");
fieldValue137.name = "name";
fieldValue137.value = "l_tarsal_interphalangeal_phalanx_5";
ProtoInstance136.fieldValue = new MFNode();

ProtoInstance136.fieldValue[0] = fieldValue137;

let fieldValue138 = browser.currentScene.createNode("fieldValue");
fieldValue138.name = "translation";
fieldValue138.value = "0.182500004768372 0.00700000021606684 0.092799998819828";
ProtoInstance136.fieldValue[1] = fieldValue138;

fieldValue132.children[1] = ProtoInstance136;

let ProtoInstance139 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance139.name = "Site";
ProtoInstance139.DEF = "hanim_l_tarsal_interphalangeal_phalanx2";
let fieldValue140 = browser.currentScene.createNode("fieldValue");
fieldValue140.name = "name";
fieldValue140.value = "l_tarsal_interphalangeal_phalanx_1";
ProtoInstance139.fieldValue = new MFNode();

ProtoInstance139.fieldValue[0] = fieldValue140;

let fieldValue141 = browser.currentScene.createNode("fieldValue");
fieldValue141.name = "translation";
fieldValue141.value = "0.0816000029444695 0.023199999704957 0.0105999996885657";
ProtoInstance139.fieldValue[1] = fieldValue141;

fieldValue132.children[2] = ProtoInstance139;

let ProtoInstance142 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance142.name = "Site";
ProtoInstance142.DEF = "hanim_l_tarsal_distal_phalanx3";
let fieldValue143 = browser.currentScene.createNode("fieldValue");
fieldValue143.name = "name";
fieldValue143.value = "l_tarsal_distal_phalanx_2";
ProtoInstance142.fieldValue = new MFNode();

ProtoInstance142.fieldValue[0] = fieldValue143;

let fieldValue144 = browser.currentScene.createNode("fieldValue");
fieldValue144.name = "translation";
fieldValue144.value = "0.119499996304512 0.00789999961853027 0.143299996852875";
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
ProtoInstance145.DEF = "hanim_l_hindfoot_2";
let fieldValue146 = browser.currentScene.createNode("fieldValue");
fieldValue146.name = "name";
fieldValue146.value = "l_hindfoot";
ProtoInstance145.fieldValue = new MFNode();

ProtoInstance145.fieldValue[0] = fieldValue146;

let fieldValue147 = browser.currentScene.createNode("fieldValue");
fieldValue147.name = "children";
let ProtoInstance148 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance148.name = "Site";
ProtoInstance148.DEF = "hanim_l_lateral_malleolus_2";
let fieldValue149 = browser.currentScene.createNode("fieldValue");
fieldValue149.name = "name";
fieldValue149.value = "l_lateral_malleolus";
ProtoInstance148.fieldValue = new MFNode();

ProtoInstance148.fieldValue[0] = fieldValue149;

let fieldValue150 = browser.currentScene.createNode("fieldValue");
fieldValue150.name = "translation";
fieldValue150.value = "0.130799993872643 0.0597000010311604 -0.103200003504753";
ProtoInstance148.fieldValue[1] = fieldValue150;

fieldValue147.children = new MFNode();

fieldValue147.children[0] = ProtoInstance148;

let ProtoInstance151 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance151.name = "Site";
ProtoInstance151.DEF = "hanim_l_medial_malleolus_2";
let fieldValue152 = browser.currentScene.createNode("fieldValue");
fieldValue152.name = "name";
fieldValue152.value = "l_medial_malleolus";
ProtoInstance151.fieldValue = new MFNode();

ProtoInstance151.fieldValue[0] = fieldValue152;

let fieldValue153 = browser.currentScene.createNode("fieldValue");
fieldValue153.name = "translation";
fieldValue153.value = "0.0890000015497208 0.0715999975800514 -0.0881000012159348";
ProtoInstance151.fieldValue[1] = fieldValue153;

fieldValue147.children[1] = ProtoInstance151;

let ProtoInstance154 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance154.name = "Site";
ProtoInstance154.DEF = "hanim_l_sphyrion_2";
let fieldValue155 = browser.currentScene.createNode("fieldValue");
fieldValue155.name = "name";
fieldValue155.value = "l_sphyrion";
ProtoInstance154.fieldValue = new MFNode();

ProtoInstance154.fieldValue[0] = fieldValue155;

let fieldValue156 = browser.currentScene.createNode("fieldValue");
fieldValue156.name = "translation";
fieldValue156.value = "0.0890000015497208 0.0575000010430813 -0.0943000018596649";
ProtoInstance154.fieldValue[1] = fieldValue156;

fieldValue147.children[2] = ProtoInstance154;

let ProtoInstance157 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance157.name = "Site";
ProtoInstance157.DEF = "hanim_l_calcaneus_posterior_2";
let fieldValue158 = browser.currentScene.createNode("fieldValue");
fieldValue158.name = "name";
fieldValue158.value = "l_calcaneus_posterior";
ProtoInstance157.fieldValue = new MFNode();

ProtoInstance157.fieldValue[0] = fieldValue158;

let fieldValue159 = browser.currentScene.createNode("fieldValue");
fieldValue159.name = "translation";
fieldValue159.value = "0.09740000218153 0.025900000706315 -0.11710000038147";
ProtoInstance157.fieldValue[1] = fieldValue159;

fieldValue147.children[3] = ProtoInstance157;

ProtoInstance145.fieldValue[1] = fieldValue147;

fieldValue124.children[1] = ProtoInstance145;

ProtoInstance120.fieldValue[3] = fieldValue124;

fieldValue119.children = new MFNode();

fieldValue119.children[0] = ProtoInstance120;

let ProtoInstance160 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance160.name = "Segment";
ProtoInstance160.DEF = "hanim_l_calf_2";
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
ProtoInstance162.DEF = "hanim_l_thigh_2";
let fieldValue163 = browser.currentScene.createNode("fieldValue");
fieldValue163.name = "name";
fieldValue163.value = "l_thigh";
ProtoInstance162.fieldValue = new MFNode();

ProtoInstance162.fieldValue[0] = fieldValue163;

let fieldValue164 = browser.currentScene.createNode("fieldValue");
fieldValue164.name = "children";
let ProtoInstance165 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance165.name = "Site";
ProtoInstance165.DEF = "hanim_l_knee_crease_2";
let fieldValue166 = browser.currentScene.createNode("fieldValue");
fieldValue166.name = "name";
fieldValue166.value = "l_knee_crease";
ProtoInstance165.fieldValue = new MFNode();

ProtoInstance165.fieldValue[0] = fieldValue166;

let fieldValue167 = browser.currentScene.createNode("fieldValue");
fieldValue167.name = "translation";
fieldValue167.value = "0.0992999970912933 0.488099992275238 -0.0308999996632338";
ProtoInstance165.fieldValue[1] = fieldValue167;

fieldValue164.children = new MFNode();

fieldValue164.children[0] = ProtoInstance165;

let ProtoInstance168 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance168.name = "Site";
ProtoInstance168.DEF = "hanim_l_femoral_lateral_epicondyles_2";
let fieldValue169 = browser.currentScene.createNode("fieldValue");
fieldValue169.name = "name";
fieldValue169.value = "l_femoral_lateral_epicondyles";
ProtoInstance168.fieldValue = new MFNode();

ProtoInstance168.fieldValue[0] = fieldValue169;

let fieldValue170 = browser.currentScene.createNode("fieldValue");
fieldValue170.name = "translation";
fieldValue170.value = "0.159799993038177 0.496699988842011 0.0296999998390675";
ProtoInstance168.fieldValue[1] = fieldValue170;

fieldValue164.children[1] = ProtoInstance168;

let ProtoInstance171 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance171.name = "Site";
ProtoInstance171.DEF = "hanim_l_femoral_medial_epicondyles_2";
let fieldValue172 = browser.currentScene.createNode("fieldValue");
fieldValue172.name = "name";
fieldValue172.value = "l_femoral_lateral_epicondyles";
ProtoInstance171.fieldValue = new MFNode();

ProtoInstance171.fieldValue[0] = fieldValue172;

let fieldValue173 = browser.currentScene.createNode("fieldValue");
fieldValue173.name = "translation";
fieldValue173.value = "0.0397999994456768 0.494599997997284 0.0303000006824732";
ProtoInstance171.fieldValue[1] = fieldValue173;

fieldValue164.children[2] = ProtoInstance171;

ProtoInstance162.fieldValue[1] = fieldValue164;

fieldValue114.children[1] = ProtoInstance162;

ProtoInstance110.fieldValue[3] = fieldValue114;

fieldValue109.children = new MFNode();

fieldValue109.children[0] = ProtoInstance110;

let ProtoInstance174 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance174.name = "Joint";
ProtoInstance174.DEF = "hanim_r_hip_2";
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
fieldValue177.value = "-0.0949999988079071 0.917100012302399 0.00289999996311963";
ProtoInstance174.fieldValue[2] = fieldValue177;

let fieldValue178 = browser.currentScene.createNode("fieldValue");
fieldValue178.name = "children";
let ProtoInstance179 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance179.name = "Joint";
ProtoInstance179.DEF = "hanim_r_knee_2";
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
fieldValue182.value = "-0.0866999998688698 0.491299986839294 0.0318000018596649";
ProtoInstance179.fieldValue[2] = fieldValue182;

let fieldValue183 = browser.currentScene.createNode("fieldValue");
fieldValue183.name = "children";
let ProtoInstance184 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance184.name = "Joint";
ProtoInstance184.DEF = "hanim_r_talocrural_2";
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
fieldValue187.value = "-0.0800999999046326 0.0711999982595444 -0.0766000002622604";
ProtoInstance184.fieldValue[2] = fieldValue187;

let fieldValue188 = browser.currentScene.createNode("fieldValue");
fieldValue188.name = "children";
let ProtoInstance189 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance189.name = "Joint";
ProtoInstance189.DEF = "hanim_r_metatarsophalangeal__2";
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
fieldValue192.value = "-0.0800999999046326 0 0.0368000008165836";
ProtoInstance189.fieldValue[2] = fieldValue192;

let fieldValue193 = browser.currentScene.createNode("fieldValue");
fieldValue193.name = "children";
let ProtoInstance194 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance194.name = "Segment";
ProtoInstance194.DEF = "hanim_r_middistal_2";
let fieldValue195 = browser.currentScene.createNode("fieldValue");
fieldValue195.name = "name";
fieldValue195.value = "r_middistal";
ProtoInstance194.fieldValue = new MFNode();

ProtoInstance194.fieldValue[0] = fieldValue195;

let fieldValue196 = browser.currentScene.createNode("fieldValue");
fieldValue196.name = "children";
let ProtoInstance197 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance197.name = "Site";
ProtoInstance197.DEF = "hanim_r_middistal_tip_2";
let fieldValue198 = browser.currentScene.createNode("fieldValue");
fieldValue198.name = "name";
fieldValue198.value = "r_middistal_tip";
ProtoInstance197.fieldValue = new MFNode();

ProtoInstance197.fieldValue[0] = fieldValue198;

let fieldValue199 = browser.currentScene.createNode("fieldValue");
fieldValue199.name = "translation";
fieldValue199.value = "-0.104299999773502 -0.0227000005543232 0.144999995827675";
ProtoInstance197.fieldValue[1] = fieldValue199;

fieldValue196.children = new MFNode();

fieldValue196.children[0] = ProtoInstance197;

let ProtoInstance200 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance200.name = "Site";
ProtoInstance200.DEF = "hanim_r_tarsal_interphalangeal_phalanx6";
let fieldValue201 = browser.currentScene.createNode("fieldValue");
fieldValue201.name = "name";
fieldValue201.value = "r_tarsal_interphalangeal_phalanx_5";
ProtoInstance200.fieldValue = new MFNode();

ProtoInstance200.fieldValue[0] = fieldValue201;

let fieldValue202 = browser.currentScene.createNode("fieldValue");
fieldValue202.name = "translation";
fieldValue202.value = "-0.152300000190735 0.0165999997407198 0.0895000025629997";
ProtoInstance200.fieldValue[1] = fieldValue202;

fieldValue196.children[1] = ProtoInstance200;

let ProtoInstance203 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance203.name = "Site";
ProtoInstance203.DEF = "hanim_r_tarsal_interphalangeal_phalanx2";
let fieldValue204 = browser.currentScene.createNode("fieldValue");
fieldValue204.name = "name";
fieldValue204.value = "r_tarsal_interphalangeal_phalanx_1";
ProtoInstance203.fieldValue = new MFNode();

ProtoInstance203.fieldValue[0] = fieldValue204;

let fieldValue205 = browser.currentScene.createNode("fieldValue");
fieldValue205.name = "translation";
fieldValue205.value = "-0.0520999990403652 0.0260000005364418 0.012699999846518";
ProtoInstance203.fieldValue[1] = fieldValue205;

fieldValue196.children[2] = ProtoInstance203;

let ProtoInstance206 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance206.name = "Site";
ProtoInstance206.DEF = "hanim_r_tarsal_distal_phalanx3";
let fieldValue207 = browser.currentScene.createNode("fieldValue");
fieldValue207.name = "name";
fieldValue207.value = "r_tarsal_distal_phalanx_2";
ProtoInstance206.fieldValue = new MFNode();

ProtoInstance206.fieldValue[0] = fieldValue207;

let fieldValue208 = browser.currentScene.createNode("fieldValue");
fieldValue208.name = "translation";
fieldValue208.value = "-0.088299997150898 0.013399999588728 0.138300001621246";
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
ProtoInstance209.DEF = "hanim_r_hindfoot_2";
let fieldValue210 = browser.currentScene.createNode("fieldValue");
fieldValue210.name = "name";
fieldValue210.value = "r_hindfoot";
ProtoInstance209.fieldValue = new MFNode();

ProtoInstance209.fieldValue[0] = fieldValue210;

let fieldValue211 = browser.currentScene.createNode("fieldValue");
fieldValue211.name = "children";
let ProtoInstance212 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance212.name = "Site";
ProtoInstance212.DEF = "hanim_r_lateral_malleolus_2";
let fieldValue213 = browser.currentScene.createNode("fieldValue");
fieldValue213.name = "name";
fieldValue213.value = "r_lateral_malleolus";
ProtoInstance212.fieldValue = new MFNode();

ProtoInstance212.fieldValue[0] = fieldValue213;

let fieldValue214 = browser.currentScene.createNode("fieldValue");
fieldValue214.name = "translation";
fieldValue214.value = "-0.100599996745586 0.0658000037074089 -0.107500001788139";
ProtoInstance212.fieldValue[1] = fieldValue214;

fieldValue211.children = new MFNode();

fieldValue211.children[0] = ProtoInstance212;

let ProtoInstance215 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance215.name = "Site";
ProtoInstance215.DEF = "hanim_r_medial_malleolus_2";
let fieldValue216 = browser.currentScene.createNode("fieldValue");
fieldValue216.name = "name";
fieldValue216.value = "r_medial_malleolus";
ProtoInstance215.fieldValue = new MFNode();

ProtoInstance215.fieldValue[0] = fieldValue216;

let fieldValue217 = browser.currentScene.createNode("fieldValue");
fieldValue217.name = "translation";
fieldValue217.value = "-0.0590999983251095 0.0759999975562096 -0.092799998819828";
ProtoInstance215.fieldValue[1] = fieldValue217;

fieldValue211.children[1] = ProtoInstance215;

let ProtoInstance218 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance218.name = "Site";
ProtoInstance218.DEF = "hanim_r_sphyrion_2";
let fieldValue219 = browser.currentScene.createNode("fieldValue");
fieldValue219.name = "name";
fieldValue219.value = "r_sphyrion";
ProtoInstance218.fieldValue = new MFNode();

ProtoInstance218.fieldValue[0] = fieldValue219;

let fieldValue220 = browser.currentScene.createNode("fieldValue");
fieldValue220.name = "translation";
fieldValue220.value = "-0.0603000000119209 0.0610000006854534 -0.100199997425079";
ProtoInstance218.fieldValue[1] = fieldValue220;

fieldValue211.children[2] = ProtoInstance218;

let ProtoInstance221 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance221.name = "Site";
ProtoInstance221.DEF = "hanim_r_calcaneus_posterior_2";
let fieldValue222 = browser.currentScene.createNode("fieldValue");
fieldValue222.name = "name";
fieldValue222.value = "r_calcaneus_posterior";
ProtoInstance221.fieldValue = new MFNode();

ProtoInstance221.fieldValue[0] = fieldValue222;

let fieldValue223 = browser.currentScene.createNode("fieldValue");
fieldValue223.name = "translation";
fieldValue223.value = "-0.0692000016570091 0.0296999998390675 -0.122100003063679";
ProtoInstance221.fieldValue[1] = fieldValue223;

fieldValue211.children[3] = ProtoInstance221;

ProtoInstance209.fieldValue[1] = fieldValue211;

fieldValue188.children[1] = ProtoInstance209;

ProtoInstance184.fieldValue[3] = fieldValue188;

fieldValue183.children = new MFNode();

fieldValue183.children[0] = ProtoInstance184;

let ProtoInstance224 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance224.name = "Segment";
ProtoInstance224.DEF = "hanim_r_calf_2";
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
ProtoInstance226.DEF = "hanim_r_thigh_2";
let fieldValue227 = browser.currentScene.createNode("fieldValue");
fieldValue227.name = "name";
fieldValue227.value = "r_thigh";
ProtoInstance226.fieldValue = new MFNode();

ProtoInstance226.fieldValue[0] = fieldValue227;

let fieldValue228 = browser.currentScene.createNode("fieldValue");
fieldValue228.name = "children";
let ProtoInstance229 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance229.name = "Site";
ProtoInstance229.DEF = "hanim_r_knee_crease_2";
let fieldValue230 = browser.currentScene.createNode("fieldValue");
fieldValue230.name = "name";
fieldValue230.value = "r_knee_crease";
ProtoInstance229.fieldValue = new MFNode();

ProtoInstance229.fieldValue[0] = fieldValue230;

let fieldValue231 = browser.currentScene.createNode("fieldValue");
fieldValue231.name = "translation";
fieldValue231.value = "-0.0825000032782555 0.4932000041008 -0.032600000500679";
ProtoInstance229.fieldValue[1] = fieldValue231;

fieldValue228.children = new MFNode();

fieldValue228.children[0] = ProtoInstance229;

let ProtoInstance232 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance232.name = "Site";
ProtoInstance232.DEF = "hanim_r_femoral_lateral_epicondyles_2";
let fieldValue233 = browser.currentScene.createNode("fieldValue");
fieldValue233.name = "name";
fieldValue233.value = "r_femoral_lateral_epicondyles";
ProtoInstance232.fieldValue = new MFNode();

ProtoInstance232.fieldValue[0] = fieldValue233;

let fieldValue234 = browser.currentScene.createNode("fieldValue");
fieldValue234.name = "translation";
fieldValue234.value = "-0.142100006341934 0.499199986457825 0.0309999994933605";
ProtoInstance232.fieldValue[1] = fieldValue234;

fieldValue228.children[1] = ProtoInstance232;

let ProtoInstance235 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance235.name = "Site";
ProtoInstance235.DEF = "hanim_r_femoral_medial_epicondyles_2";
let fieldValue236 = browser.currentScene.createNode("fieldValue");
fieldValue236.name = "name";
fieldValue236.value = "r_femoral_lateral_epicondyles";
ProtoInstance235.fieldValue = new MFNode();

ProtoInstance235.fieldValue[0] = fieldValue236;

let fieldValue237 = browser.currentScene.createNode("fieldValue");
fieldValue237.name = "translation";
fieldValue237.value = "-0.0220999997109175 0.501399993896484 0.0288999993354082";
ProtoInstance235.fieldValue[1] = fieldValue237;

fieldValue228.children[2] = ProtoInstance235;

ProtoInstance226.fieldValue[1] = fieldValue228;

fieldValue178.children[1] = ProtoInstance226;

ProtoInstance174.fieldValue[3] = fieldValue178;

fieldValue109.children[1] = ProtoInstance174;

let ProtoInstance238 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance238.name = "Segment";
ProtoInstance238.DEF = "hanim_pelvis_2";
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
ProtoInstance240.DEF = "hanim_vl5_2";
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
fieldValue243.value = "0.00279999990016222 1.05680000782013 -0.0776000022888184";
ProtoInstance240.fieldValue[2] = fieldValue243;

let fieldValue244 = browser.currentScene.createNode("fieldValue");
fieldValue244.name = "children";
let ProtoInstance245 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance245.name = "Joint";
ProtoInstance245.DEF = "hanim_skullbase_2";
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
fieldValue248.value = "0.00439999997615814 1.62090003490448 0.0236000008881092";
ProtoInstance245.fieldValue[2] = fieldValue248;

let fieldValue249 = browser.currentScene.createNode("fieldValue");
fieldValue249.name = "children";
let ProtoInstance250 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance250.name = "Segment";
ProtoInstance250.DEF = "hanim_skull_2";
let fieldValue251 = browser.currentScene.createNode("fieldValue");
fieldValue251.name = "name";
fieldValue251.value = "skull";
ProtoInstance250.fieldValue = new MFNode();

ProtoInstance250.fieldValue[0] = fieldValue251;

let fieldValue252 = browser.currentScene.createNode("fieldValue");
fieldValue252.name = "children";
let ProtoInstance253 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance253.name = "Site";
ProtoInstance253.DEF = "hanim_skull_tip_2";
let fieldValue254 = browser.currentScene.createNode("fieldValue");
fieldValue254.name = "name";
fieldValue254.value = "skull_tip";
ProtoInstance253.fieldValue = new MFNode();

ProtoInstance253.fieldValue[0] = fieldValue254;

let fieldValue255 = browser.currentScene.createNode("fieldValue");
fieldValue255.name = "translation";
fieldValue255.value = "0.00499999988824129 1.75039994716644 0.00549999997019768";
ProtoInstance253.fieldValue[1] = fieldValue255;

fieldValue252.children = new MFNode();

fieldValue252.children[0] = ProtoInstance253;

let ProtoInstance256 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance256.name = "Site";
ProtoInstance256.DEF = "hanim_sellion_2";
let fieldValue257 = browser.currentScene.createNode("fieldValue");
fieldValue257.name = "name";
fieldValue257.value = "sellion";
ProtoInstance256.fieldValue = new MFNode();

ProtoInstance256.fieldValue[0] = fieldValue257;

let fieldValue258 = browser.currentScene.createNode("fieldValue");
fieldValue258.name = "translation";
fieldValue258.value = "0.00579999992623925 1.63160002231598 0.0851999968290329";
ProtoInstance256.fieldValue[1] = fieldValue258;

fieldValue252.children[1] = ProtoInstance256;

let ProtoInstance259 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance259.name = "Site";
ProtoInstance259.DEF = "hanim_r_infraorbitale_2";
let fieldValue260 = browser.currentScene.createNode("fieldValue");
fieldValue260.name = "name";
fieldValue260.value = "r_infraorbitale";
ProtoInstance259.fieldValue = new MFNode();

ProtoInstance259.fieldValue[0] = fieldValue260;

let fieldValue261 = browser.currentScene.createNode("fieldValue");
fieldValue261.name = "translation";
fieldValue261.value = "-0.023700000718236 1.61710000038147 0.0751999989151955";
ProtoInstance259.fieldValue[1] = fieldValue261;

fieldValue252.children[2] = ProtoInstance259;

let ProtoInstance262 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance262.name = "Site";
ProtoInstance262.DEF = "hanim_l_infraorbitale_2";
let fieldValue263 = browser.currentScene.createNode("fieldValue");
fieldValue263.name = "name";
fieldValue263.value = "l_infraorbitale";
ProtoInstance262.fieldValue = new MFNode();

ProtoInstance262.fieldValue[0] = fieldValue263;

let fieldValue264 = browser.currentScene.createNode("fieldValue");
fieldValue264.name = "translation";
fieldValue264.value = "0.0340999998152256 1.61710000038147 0.0751999989151955";
ProtoInstance262.fieldValue[1] = fieldValue264;

fieldValue252.children[3] = ProtoInstance262;

let ProtoInstance265 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance265.name = "Site";
ProtoInstance265.DEF = "hanim_supramenton_2";
let fieldValue266 = browser.currentScene.createNode("fieldValue");
fieldValue266.name = "name";
fieldValue266.value = "supramenton";
ProtoInstance265.fieldValue = new MFNode();

ProtoInstance265.fieldValue[0] = fieldValue266;

let fieldValue267 = browser.currentScene.createNode("fieldValue");
fieldValue267.name = "translation";
fieldValue267.value = "0.00609999988228083 1.54100000858307 0.0804999992251396";
ProtoInstance265.fieldValue[1] = fieldValue267;

fieldValue252.children[4] = ProtoInstance265;

let ProtoInstance268 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance268.name = "Site";
ProtoInstance268.DEF = "hanim_r_tragion_2";
let fieldValue269 = browser.currentScene.createNode("fieldValue");
fieldValue269.name = "name";
fieldValue269.value = "r_tragion";
ProtoInstance268.fieldValue = new MFNode();

ProtoInstance268.fieldValue[0] = fieldValue269;

let fieldValue270 = browser.currentScene.createNode("fieldValue");
fieldValue270.name = "translation";
fieldValue270.value = "-0.0645999982953072 1.63469994068146 0.0302000008523464";
ProtoInstance268.fieldValue[1] = fieldValue270;

fieldValue252.children[5] = ProtoInstance268;

let ProtoInstance271 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance271.name = "Site";
ProtoInstance271.DEF = "hanim_r_gonion_2";
let fieldValue272 = browser.currentScene.createNode("fieldValue");
fieldValue272.name = "name";
fieldValue272.value = "r_gonion";
ProtoInstance271.fieldValue = new MFNode();

ProtoInstance271.fieldValue[0] = fieldValue272;

let fieldValue273 = browser.currentScene.createNode("fieldValue");
fieldValue273.name = "translation";
fieldValue273.value = "-0.0520000010728836 1.55289995670319 0.0346999987959862";
ProtoInstance271.fieldValue[1] = fieldValue273;

fieldValue252.children[6] = ProtoInstance271;

let ProtoInstance274 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance274.name = "Site";
ProtoInstance274.DEF = "hanim_l_tragion_2";
let fieldValue275 = browser.currentScene.createNode("fieldValue");
fieldValue275.name = "name";
fieldValue275.value = "l_tragion";
ProtoInstance274.fieldValue = new MFNode();

ProtoInstance274.fieldValue[0] = fieldValue275;

let fieldValue276 = browser.currentScene.createNode("fieldValue");
fieldValue276.name = "translation";
fieldValue276.value = "0.0738999992609024 1.63479995727539 0.0282000005245209";
ProtoInstance274.fieldValue[1] = fieldValue276;

fieldValue252.children[7] = ProtoInstance274;

let ProtoInstance277 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance277.name = "Site";
ProtoInstance277.DEF = "hanim_l_gonion_2";
let fieldValue278 = browser.currentScene.createNode("fieldValue");
fieldValue278.name = "name";
fieldValue278.value = "l_gonion";
ProtoInstance277.fieldValue = new MFNode();

ProtoInstance277.fieldValue[0] = fieldValue278;

let fieldValue279 = browser.currentScene.createNode("fieldValue");
fieldValue279.name = "translation";
fieldValue279.value = "0.0631000027060509 1.55299997329712 0.0329999998211861";
ProtoInstance277.fieldValue[1] = fieldValue279;

fieldValue252.children[8] = ProtoInstance277;

let ProtoInstance280 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance280.name = "Site";
ProtoInstance280.DEF = "hanim_nuchale_2";
let fieldValue281 = browser.currentScene.createNode("fieldValue");
fieldValue281.name = "name";
fieldValue281.value = "nuchale";
ProtoInstance280.fieldValue = new MFNode();

ProtoInstance280.fieldValue[0] = fieldValue281;

let fieldValue282 = browser.currentScene.createNode("fieldValue");
fieldValue282.name = "translation";
fieldValue282.value = "0.00389999989420176 1.59720003604889 -0.0795999988913536";
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
ProtoInstance283.DEF = "hanim_l_shoulder_2";
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
fieldValue286.value = "0.202900007367134 1.43760001659393 -0.0386999994516373";
ProtoInstance283.fieldValue[2] = fieldValue286;

let fieldValue287 = browser.currentScene.createNode("fieldValue");
fieldValue287.name = "children";
let ProtoInstance288 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance288.name = "Joint";
ProtoInstance288.DEF = "hanim_l_elbow_2";
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
fieldValue291.value = "0.201399996876717 1.1356999874115 -0.0681999996304512";
ProtoInstance288.fieldValue[2] = fieldValue291;

let fieldValue292 = browser.currentScene.createNode("fieldValue");
fieldValue292.name = "children";
let ProtoInstance293 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance293.name = "Joint";
ProtoInstance293.DEF = "hanim_l_radiocarpal_2";
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
fieldValue296.value = "0.198400005698204 0.866299986839294 -0.0582999996840954";
ProtoInstance293.fieldValue[2] = fieldValue296;

let fieldValue297 = browser.currentScene.createNode("fieldValue");
fieldValue297.name = "children";
let ProtoInstance298 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance298.name = "Segment";
ProtoInstance298.DEF = "hanim_l_hand_2";
let fieldValue299 = browser.currentScene.createNode("fieldValue");
fieldValue299.name = "name";
fieldValue299.value = "l_hand";
ProtoInstance298.fieldValue = new MFNode();

ProtoInstance298.fieldValue[0] = fieldValue299;

let fieldValue300 = browser.currentScene.createNode("fieldValue");
fieldValue300.name = "children";
let ProtoInstance301 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance301.name = "Site";
ProtoInstance301.DEF = "hanim_l_hand_tip_2";
let fieldValue302 = browser.currentScene.createNode("fieldValue");
fieldValue302.name = "name";
fieldValue302.value = "l_hand_tip";
ProtoInstance301.fieldValue = new MFNode();

ProtoInstance301.fieldValue[0] = fieldValue302;

let fieldValue303 = browser.currentScene.createNode("fieldValue");
fieldValue303.name = "translation";
fieldValue303.value = "0.208000004291534 0.673099994659424 -0.049100000411272";
ProtoInstance301.fieldValue[1] = fieldValue303;

fieldValue300.children = new MFNode();

fieldValue300.children[0] = ProtoInstance301;

let ProtoInstance304 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance304.name = "Site";
ProtoInstance304.DEF = "hanim_l_metacarpal_phalanx3";
let fieldValue305 = browser.currentScene.createNode("fieldValue");
fieldValue305.name = "name";
fieldValue305.value = "l_metacarpal_phalanx_2";
ProtoInstance304.fieldValue = new MFNode();

ProtoInstance304.fieldValue[0] = fieldValue305;

let fieldValue306 = browser.currentScene.createNode("fieldValue");
fieldValue306.name = "translation";
fieldValue306.value = "0.200900003314018 0.813899993896484 -0.023700000718236";
ProtoInstance304.fieldValue[1] = fieldValue306;

fieldValue300.children[1] = ProtoInstance304;

let ProtoInstance307 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance307.name = "Site";
ProtoInstance307.DEF = "hanim_l_dactylion_2";
let fieldValue308 = browser.currentScene.createNode("fieldValue");
fieldValue308.name = "name";
fieldValue308.value = "l_dactylion";
ProtoInstance307.fieldValue = new MFNode();

ProtoInstance307.fieldValue[0] = fieldValue308;

let fieldValue309 = browser.currentScene.createNode("fieldValue");
fieldValue309.name = "translation";
fieldValue309.value = "0.205599993467331 0.674300014972687 -0.048200000077486";
ProtoInstance307.fieldValue[1] = fieldValue309;

fieldValue300.children[2] = ProtoInstance307;

let ProtoInstance310 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance310.name = "Site";
ProtoInstance310.DEF = "hanim_l_ulnar_styloid_2";
let fieldValue311 = browser.currentScene.createNode("fieldValue");
fieldValue311.name = "name";
fieldValue311.value = "l_ulnar_styloid";
ProtoInstance310.fieldValue = new MFNode();

ProtoInstance310.fieldValue[0] = fieldValue311;

let fieldValue312 = browser.currentScene.createNode("fieldValue");
fieldValue312.name = "translation";
fieldValue312.value = "-0.214200004935265 0.85290002822876 -0.064800001680851";
ProtoInstance310.fieldValue[1] = fieldValue312;

fieldValue300.children[3] = ProtoInstance310;

let ProtoInstance313 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance313.name = "Site";
ProtoInstance313.DEF = "hanim_l_metacarpal_phalanx6";
let fieldValue314 = browser.currentScene.createNode("fieldValue");
fieldValue314.name = "name";
fieldValue314.value = "l_metacarpal_phalanx_5";
ProtoInstance313.fieldValue = new MFNode();

ProtoInstance313.fieldValue[0] = fieldValue314;

let fieldValue315 = browser.currentScene.createNode("fieldValue");
fieldValue315.name = "translation";
fieldValue315.value = "0.192900002002716 0.78600001335144 -0.112199999392033";
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
ProtoInstance316.DEF = "hanim_l_forearm_2";
let fieldValue317 = browser.currentScene.createNode("fieldValue");
fieldValue317.name = "name";
fieldValue317.value = "l_forearm";
ProtoInstance316.fieldValue = new MFNode();

ProtoInstance316.fieldValue[0] = fieldValue317;

let fieldValue318 = browser.currentScene.createNode("fieldValue");
fieldValue318.name = "children";
let ProtoInstance319 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance319.name = "Site";
ProtoInstance319.DEF = "hanim_l_radial_styloid_2";
let fieldValue320 = browser.currentScene.createNode("fieldValue");
fieldValue320.name = "name";
fieldValue320.value = "l_radial_styloid";
ProtoInstance319.fieldValue = new MFNode();

ProtoInstance319.fieldValue[0] = fieldValue320;

let fieldValue321 = browser.currentScene.createNode("fieldValue");
fieldValue321.name = "translation";
fieldValue321.value = "0.190099999308586 0.864499986171722 -0.0414999984204769";
ProtoInstance319.fieldValue[1] = fieldValue321;

fieldValue318.children = new MFNode();

fieldValue318.children[0] = ProtoInstance319;

let ProtoInstance322 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance322.name = "Site";
ProtoInstance322.DEF = "hanim_l_olecranon_2";
let fieldValue323 = browser.currentScene.createNode("fieldValue");
fieldValue323.name = "name";
fieldValue323.value = "l_olecranon";
ProtoInstance322.fieldValue = new MFNode();

ProtoInstance322.fieldValue[0] = fieldValue323;

let fieldValue324 = browser.currentScene.createNode("fieldValue");
fieldValue324.name = "translation";
fieldValue324.value = "-0.196199998259544 1.13750004768372 -0.112300001084805";
ProtoInstance322.fieldValue[1] = fieldValue324;

fieldValue318.children[1] = ProtoInstance322;

let ProtoInstance325 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance325.name = "Site";
ProtoInstance325.DEF = "hanim_l_humeral_medial_epicondyles_2";
let fieldValue326 = browser.currentScene.createNode("fieldValue");
fieldValue326.name = "name";
fieldValue326.value = "l_humeral_medial_epicondyles";
ProtoInstance325.fieldValue = new MFNode();

ProtoInstance325.fieldValue[0] = fieldValue326;

let fieldValue327 = browser.currentScene.createNode("fieldValue");
fieldValue327.name = "translation";
fieldValue327.value = "0.173500001430511 1.12720000743866 -0.111299999058247";
ProtoInstance325.fieldValue[1] = fieldValue327;

fieldValue318.children[2] = ProtoInstance325;

let ProtoInstance328 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance328.name = "Site";
ProtoInstance328.DEF = "hanim_l_radiale_2";
let fieldValue329 = browser.currentScene.createNode("fieldValue");
fieldValue329.name = "name";
fieldValue329.value = "l_radiale";
ProtoInstance328.fieldValue = new MFNode();

ProtoInstance328.fieldValue[0] = fieldValue329;

let fieldValue330 = browser.currentScene.createNode("fieldValue");
fieldValue330.name = "translation";
fieldValue330.value = "0.218199998140335 1.12119996547699 -0.116700001060963";
ProtoInstance328.fieldValue[1] = fieldValue330;

fieldValue318.children[3] = ProtoInstance328;

ProtoInstance316.fieldValue[1] = fieldValue318;

fieldValue292.children[1] = ProtoInstance316;

ProtoInstance288.fieldValue[3] = fieldValue292;

fieldValue287.children = new MFNode();

fieldValue287.children[0] = ProtoInstance288;

let ProtoInstance331 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance331.name = "Segment";
ProtoInstance331.DEF = "hanim_l_upperarm_2";
let fieldValue332 = browser.currentScene.createNode("fieldValue");
fieldValue332.name = "name";
fieldValue332.value = "l_upperarm";
ProtoInstance331.fieldValue = new MFNode();

ProtoInstance331.fieldValue[0] = fieldValue332;

let fieldValue333 = browser.currentScene.createNode("fieldValue");
fieldValue333.name = "children";
let ProtoInstance334 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance334.name = "Site";
ProtoInstance334.DEF = "hanim_l_humeral_lateral_epicondyles_2";
let fieldValue335 = browser.currentScene.createNode("fieldValue");
fieldValue335.name = "name";
fieldValue335.value = "l_humeral_lateral_epicondyles";
ProtoInstance334.fieldValue = new MFNode();

ProtoInstance334.fieldValue[0] = fieldValue335;

let fieldValue336 = browser.currentScene.createNode("fieldValue");
fieldValue336.name = "translation";
fieldValue336.value = "0.228000000119209 1.14820003509521 -0.109999999403954";
ProtoInstance334.fieldValue[1] = fieldValue336;

fieldValue333.children = new MFNode();

fieldValue333.children[0] = ProtoInstance334;

ProtoInstance331.fieldValue[1] = fieldValue333;

fieldValue287.children[1] = ProtoInstance331;

ProtoInstance283.fieldValue[3] = fieldValue287;

fieldValue244.children[1] = ProtoInstance283;

let ProtoInstance337 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance337.name = "Joint";
ProtoInstance337.DEF = "hanim_r_shoulder_2";
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
fieldValue340.value = "-0.190699994564056 1.4407000541687 -0.0324999988079071";
ProtoInstance337.fieldValue[2] = fieldValue340;

let fieldValue341 = browser.currentScene.createNode("fieldValue");
fieldValue341.name = "children";
let ProtoInstance342 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance342.name = "Joint";
ProtoInstance342.DEF = "hanim_r_elbow_2";
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
fieldValue345.value = "-0.194900006055832 1.13880002498627 -0.061999998986721";
ProtoInstance342.fieldValue[2] = fieldValue345;

let fieldValue346 = browser.currentScene.createNode("fieldValue");
fieldValue346.name = "children";
let ProtoInstance347 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance347.name = "Joint";
ProtoInstance347.DEF = "hanim_r_radiocarpal_2";
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
fieldValue350.value = "-0.195899993181229 0.869400024414063 -0.0520999990403652";
ProtoInstance347.fieldValue[2] = fieldValue350;

let fieldValue351 = browser.currentScene.createNode("fieldValue");
fieldValue351.name = "children";
let ProtoInstance352 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance352.name = "Segment";
ProtoInstance352.DEF = "hanim_r_hand_2";
let fieldValue353 = browser.currentScene.createNode("fieldValue");
fieldValue353.name = "name";
fieldValue353.value = "r_hand";
ProtoInstance352.fieldValue = new MFNode();

ProtoInstance352.fieldValue[0] = fieldValue353;

let fieldValue354 = browser.currentScene.createNode("fieldValue");
fieldValue354.name = "children";
let ProtoInstance355 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance355.name = "Site";
ProtoInstance355.DEF = "hanim_r_hand_tip_2";
let fieldValue356 = browser.currentScene.createNode("fieldValue");
fieldValue356.name = "name";
fieldValue356.value = "r_hand_tip";
ProtoInstance355.fieldValue = new MFNode();

ProtoInstance355.fieldValue[0] = fieldValue356;

let fieldValue357 = browser.currentScene.createNode("fieldValue");
fieldValue357.name = "translation";
fieldValue357.value = "-0.196899995207787 0.675800025463104 -0.0427000001072884";
ProtoInstance355.fieldValue[1] = fieldValue357;

fieldValue354.children = new MFNode();

fieldValue354.children[0] = ProtoInstance355;

let ProtoInstance358 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance358.name = "Site";
ProtoInstance358.DEF = "hanim_r_metacarpal_phalanx3";
let fieldValue359 = browser.currentScene.createNode("fieldValue");
fieldValue359.name = "name";
fieldValue359.value = "r_metacarpal_phalanx_2";
ProtoInstance358.fieldValue = new MFNode();

ProtoInstance358.fieldValue[0] = fieldValue359;

let fieldValue360 = browser.currentScene.createNode("fieldValue");
fieldValue360.name = "translation";
fieldValue360.value = "-0.197699993848801 0.816900014877319 -0.0176999997347593";
ProtoInstance358.fieldValue[1] = fieldValue360;

fieldValue354.children[1] = ProtoInstance358;

let ProtoInstance361 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance361.name = "Site";
ProtoInstance361.DEF = "hanim_r_dactylion_2";
let fieldValue362 = browser.currentScene.createNode("fieldValue");
fieldValue362.name = "name";
fieldValue362.value = "r_dactylion";
ProtoInstance361.fieldValue = new MFNode();

ProtoInstance361.fieldValue[0] = fieldValue362;

let fieldValue363 = browser.currentScene.createNode("fieldValue");
fieldValue363.name = "translation";
fieldValue363.value = "-0.194100007414818 0.677200019359589 -0.0423000007867813";
ProtoInstance361.fieldValue[1] = fieldValue363;

fieldValue354.children[2] = ProtoInstance361;

let ProtoInstance364 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance364.name = "Site";
ProtoInstance364.DEF = "hanim_r_ulnar_styloid_2";
let fieldValue365 = browser.currentScene.createNode("fieldValue");
fieldValue365.name = "name";
fieldValue365.value = "r_ulnar_styloid";
ProtoInstance364.fieldValue = new MFNode();

ProtoInstance364.fieldValue[0] = fieldValue365;

let fieldValue366 = browser.currentScene.createNode("fieldValue");
fieldValue366.name = "translation";
fieldValue366.value = "-0.21170000731945 0.856199979782104 -0.0584000013768673";
ProtoInstance364.fieldValue[1] = fieldValue366;

fieldValue354.children[3] = ProtoInstance364;

let ProtoInstance367 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance367.name = "Site";
ProtoInstance367.DEF = "hanim_r_metacarpal_phalanx6";
let fieldValue368 = browser.currentScene.createNode("fieldValue");
fieldValue368.name = "name";
fieldValue368.value = "r_metacarpal_phalanx_5";
ProtoInstance367.fieldValue = new MFNode();

ProtoInstance367.fieldValue[0] = fieldValue368;

let fieldValue369 = browser.currentScene.createNode("fieldValue");
fieldValue369.name = "translation";
fieldValue369.value = "-0.192900002002716 0.788999974727631 -0.10639999806881";
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
ProtoInstance370.DEF = "hanim_r_forearm_2";
let fieldValue371 = browser.currentScene.createNode("fieldValue");
fieldValue371.name = "name";
fieldValue371.value = "r_forearm";
ProtoInstance370.fieldValue = new MFNode();

ProtoInstance370.fieldValue[0] = fieldValue371;

let fieldValue372 = browser.currentScene.createNode("fieldValue");
fieldValue372.name = "children";
let ProtoInstance373 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance373.name = "Site";
ProtoInstance373.DEF = "hanim_r_radial_styloid_2";
let fieldValue374 = browser.currentScene.createNode("fieldValue");
fieldValue374.name = "name";
fieldValue374.value = "r_radial_styloid";
ProtoInstance373.fieldValue = new MFNode();

ProtoInstance373.fieldValue[0] = fieldValue374;

let fieldValue375 = browser.currentScene.createNode("fieldValue");
fieldValue375.name = "translation";
fieldValue375.value = "-0.188400000333786 0.86760002374649 -0.0359999984502792";
ProtoInstance373.fieldValue[1] = fieldValue375;

fieldValue372.children = new MFNode();

fieldValue372.children[0] = ProtoInstance373;

let ProtoInstance376 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance376.name = "Site";
ProtoInstance376.DEF = "hanim_r_olecranon_2";
let fieldValue377 = browser.currentScene.createNode("fieldValue");
fieldValue377.name = "name";
fieldValue377.value = "r_olecranon";
ProtoInstance376.fieldValue = new MFNode();

ProtoInstance376.fieldValue[0] = fieldValue377;

let fieldValue378 = browser.currentScene.createNode("fieldValue");
fieldValue378.name = "translation";
fieldValue378.value = "-0.190699994564056 1.14049994945526 -0.106499999761581";
ProtoInstance376.fieldValue[1] = fieldValue378;

fieldValue372.children[1] = ProtoInstance376;

let ProtoInstance379 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance379.name = "Site";
ProtoInstance379.DEF = "hanim_r_humeral_medial_epicondyles_2";
let fieldValue380 = browser.currentScene.createNode("fieldValue");
fieldValue380.name = "name";
fieldValue380.value = "r_humeral_medial_epicondyles";
ProtoInstance379.fieldValue = new MFNode();

ProtoInstance379.fieldValue[0] = fieldValue380;

let fieldValue381 = browser.currentScene.createNode("fieldValue");
fieldValue381.name = "translation";
fieldValue381.value = "-0.167999997735024 1.12979996204376 -0.106200002133846";
ProtoInstance379.fieldValue[1] = fieldValue381;

fieldValue372.children[2] = ProtoInstance379;

let ProtoInstance382 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance382.name = "Site";
ProtoInstance382.DEF = "hanim_r_radiale_2";
let fieldValue383 = browser.currentScene.createNode("fieldValue");
fieldValue383.name = "name";
fieldValue383.value = "r_radiale";
ProtoInstance382.fieldValue = new MFNode();

ProtoInstance382.fieldValue[0] = fieldValue383;

let fieldValue384 = browser.currentScene.createNode("fieldValue");
fieldValue384.name = "translation";
fieldValue384.value = "-0.212999999523163 1.130499958992 -0.109099999070168";
ProtoInstance382.fieldValue[1] = fieldValue384;

fieldValue372.children[3] = ProtoInstance382;

ProtoInstance370.fieldValue[1] = fieldValue372;

fieldValue346.children[1] = ProtoInstance370;

ProtoInstance342.fieldValue[3] = fieldValue346;

fieldValue341.children = new MFNode();

fieldValue341.children[0] = ProtoInstance342;

let ProtoInstance385 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance385.name = "Segment";
ProtoInstance385.DEF = "hanim_r_upperarm_2";
let fieldValue386 = browser.currentScene.createNode("fieldValue");
fieldValue386.name = "name";
fieldValue386.value = "r_upperarm";
ProtoInstance385.fieldValue = new MFNode();

ProtoInstance385.fieldValue[0] = fieldValue386;

let fieldValue387 = browser.currentScene.createNode("fieldValue");
fieldValue387.name = "children";
let ProtoInstance388 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance388.name = "Site";
ProtoInstance388.DEF = "hanim_r_humeral_lateral_epicondyles_2";
let fieldValue389 = browser.currentScene.createNode("fieldValue");
fieldValue389.name = "name";
fieldValue389.value = "r_humeral_lateral_epicondyles";
ProtoInstance388.fieldValue = new MFNode();

ProtoInstance388.fieldValue[0] = fieldValue389;

let fieldValue390 = browser.currentScene.createNode("fieldValue");
fieldValue390.name = "translation";
fieldValue390.value = "-0.222399994730949 1.15170001983643 -0.103299997746944";
ProtoInstance388.fieldValue[1] = fieldValue390;

fieldValue387.children = new MFNode();

fieldValue387.children[0] = ProtoInstance388;

ProtoInstance385.fieldValue[1] = fieldValue387;

fieldValue341.children[1] = ProtoInstance385;

ProtoInstance337.fieldValue[3] = fieldValue341;

fieldValue244.children[2] = ProtoInstance337;

let ProtoInstance391 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance391.name = "Segment";
ProtoInstance391.DEF = "hanim_l5_2";
let fieldValue392 = browser.currentScene.createNode("fieldValue");
fieldValue392.name = "name";
fieldValue392.value = "l5";
ProtoInstance391.fieldValue = new MFNode();

ProtoInstance391.fieldValue[0] = fieldValue392;

let fieldValue393 = browser.currentScene.createNode("fieldValue");
fieldValue393.name = "children";
let ProtoInstance394 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance394.name = "Site";
ProtoInstance394.DEF = "hanim_r_clavicale_2";
let fieldValue395 = browser.currentScene.createNode("fieldValue");
fieldValue395.name = "name";
fieldValue395.value = "r_clavicale";
ProtoInstance394.fieldValue = new MFNode();

ProtoInstance394.fieldValue[0] = fieldValue395;

let fieldValue396 = browser.currentScene.createNode("fieldValue");
fieldValue396.name = "translation";
fieldValue396.value = "-0.0115000000223517 1.49430000782013 0.0399999991059303";
ProtoInstance394.fieldValue[1] = fieldValue396;

fieldValue393.children = new MFNode();

fieldValue393.children[0] = ProtoInstance394;

let ProtoInstance397 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance397.name = "Site";
ProtoInstance397.DEF = "hanim_suprasternale_2";
let fieldValue398 = browser.currentScene.createNode("fieldValue");
fieldValue398.name = "name";
fieldValue398.value = "suprasternale";
ProtoInstance397.fieldValue = new MFNode();

ProtoInstance397.fieldValue[0] = fieldValue398;

let fieldValue399 = browser.currentScene.createNode("fieldValue");
fieldValue399.name = "translation";
fieldValue399.value = "0.00839999970048666 1.47140002250671 0.0551000013947487";
ProtoInstance397.fieldValue[1] = fieldValue399;

fieldValue393.children[1] = ProtoInstance397;

let ProtoInstance400 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance400.name = "Site";
ProtoInstance400.DEF = "hanim_l_clavicale_2";
let fieldValue401 = browser.currentScene.createNode("fieldValue");
fieldValue401.name = "name";
fieldValue401.value = "l_clavicale";
ProtoInstance400.fieldValue = new MFNode();

ProtoInstance400.fieldValue[0] = fieldValue401;

let fieldValue402 = browser.currentScene.createNode("fieldValue");
fieldValue402.name = "translation";
fieldValue402.value = "0.0271000005304813 1.49430000782013 0.0394000001251698";
ProtoInstance400.fieldValue[1] = fieldValue402;

fieldValue393.children[2] = ProtoInstance400;

let ProtoInstance403 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance403.name = "Site";
ProtoInstance403.DEF = "hanim_r_thelion_2";
let fieldValue404 = browser.currentScene.createNode("fieldValue");
fieldValue404.name = "name";
fieldValue404.value = "r_thelion";
ProtoInstance403.fieldValue = new MFNode();

ProtoInstance403.fieldValue[0] = fieldValue404;

let fieldValue405 = browser.currentScene.createNode("fieldValue");
fieldValue405.name = "translation";
fieldValue405.value = "-0.0736000016331673 1.33850002288818 0.121699996292591";
ProtoInstance403.fieldValue[1] = fieldValue405;

fieldValue393.children[3] = ProtoInstance403;

let ProtoInstance406 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance406.name = "Site";
ProtoInstance406.DEF = "hanim_l_thelion_2";
let fieldValue407 = browser.currentScene.createNode("fieldValue");
fieldValue407.name = "name";
fieldValue407.value = "l_thelion";
ProtoInstance406.fieldValue = new MFNode();

ProtoInstance406.fieldValue[0] = fieldValue407;

let fieldValue408 = browser.currentScene.createNode("fieldValue");
fieldValue408.name = "translation";
fieldValue408.value = "0.0917999967932701 1.33819997310638 0.119199998676777";
ProtoInstance406.fieldValue[1] = fieldValue408;

fieldValue393.children[4] = ProtoInstance406;

let ProtoInstance409 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance409.name = "Site";
ProtoInstance409.DEF = "hanim_substernale_2";
let fieldValue410 = browser.currentScene.createNode("fieldValue");
fieldValue410.name = "name";
fieldValue410.value = "substernale";
ProtoInstance409.fieldValue = new MFNode();

ProtoInstance409.fieldValue[0] = fieldValue410;

let fieldValue411 = browser.currentScene.createNode("fieldValue");
fieldValue411.name = "translation";
fieldValue411.value = "0.008500000461936 1.29949998855591 0.114699997007847";
ProtoInstance409.fieldValue[1] = fieldValue411;

fieldValue393.children[5] = ProtoInstance409;

let ProtoInstance412 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance412.name = "Site";
ProtoInstance412.DEF = "hanim_r_rib10_2";
let fieldValue413 = browser.currentScene.createNode("fieldValue");
fieldValue413.name = "name";
fieldValue413.value = "r_rib10";
ProtoInstance412.fieldValue = new MFNode();

ProtoInstance412.fieldValue[0] = fieldValue413;

let fieldValue414 = browser.currentScene.createNode("fieldValue");
fieldValue414.name = "translation";
fieldValue414.value = "-0.0710999965667725 1.19410002231598 0.101599998772144";
ProtoInstance412.fieldValue[1] = fieldValue414;

fieldValue393.children[6] = ProtoInstance412;

let ProtoInstance415 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance415.name = "Site";
ProtoInstance415.DEF = "hanim_l_rib10_2";
let fieldValue416 = browser.currentScene.createNode("fieldValue");
fieldValue416.name = "name";
fieldValue416.value = "l_rib10";
ProtoInstance415.fieldValue = new MFNode();

ProtoInstance415.fieldValue[0] = fieldValue416;

let fieldValue417 = browser.currentScene.createNode("fieldValue");
fieldValue417.name = "translation";
fieldValue417.value = "0.0870999991893768 1.19249999523163 0.099200002849102";
ProtoInstance415.fieldValue[1] = fieldValue417;

fieldValue393.children[7] = ProtoInstance415;

let ProtoInstance418 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance418.name = "Site";
ProtoInstance418.DEF = "hanim_cervicale_2";
let fieldValue419 = browser.currentScene.createNode("fieldValue");
fieldValue419.name = "name";
fieldValue419.value = "cervicale";
ProtoInstance418.fieldValue = new MFNode();

ProtoInstance418.fieldValue[0] = fieldValue419;

let fieldValue420 = browser.currentScene.createNode("fieldValue");
fieldValue420.name = "translation";
fieldValue420.value = "0.0063999998383224 1.51999998092651 -0.0815000012516975";
ProtoInstance418.fieldValue[1] = fieldValue420;

fieldValue393.children[8] = ProtoInstance418;

let ProtoInstance421 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance421.name = "Site";
ProtoInstance421.DEF = "hanim_spine_2_lower_back_2";
let fieldValue422 = browser.currentScene.createNode("fieldValue");
fieldValue422.name = "name";
fieldValue422.value = "spine_2_lower_back";
ProtoInstance421.fieldValue = new MFNode();

ProtoInstance421.fieldValue[0] = fieldValue422;

let fieldValue423 = browser.currentScene.createNode("fieldValue");
fieldValue423.name = "translation";
fieldValue423.value = "0.00490000005811453 1.19079995155334 -0.111299999058247";
ProtoInstance421.fieldValue[1] = fieldValue423;

fieldValue393.children[9] = ProtoInstance421;

let ProtoInstance424 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance424.name = "Site";
ProtoInstance424.DEF = "hanim_waist_preferred_posterior_2";
let fieldValue425 = browser.currentScene.createNode("fieldValue");
fieldValue425.name = "name";
fieldValue425.value = "waist_preferred_posterior";
ProtoInstance424.fieldValue = new MFNode();

ProtoInstance424.fieldValue[0] = fieldValue425;

let fieldValue426 = browser.currentScene.createNode("fieldValue");
fieldValue426.name = "translation";
fieldValue426.value = "0.28999999165535 1.09150004386902 -0.109099999070168";
ProtoInstance424.fieldValue[1] = fieldValue426;

fieldValue393.children[10] = ProtoInstance424;

let ProtoInstance427 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance427.name = "Site";
ProtoInstance427.DEF = "hanim_r_acromion_2";
let fieldValue428 = browser.currentScene.createNode("fieldValue");
fieldValue428.name = "name";
fieldValue428.value = "r_acromion";
ProtoInstance427.fieldValue = new MFNode();

ProtoInstance427.fieldValue[0] = fieldValue428;

let fieldValue429 = browser.currentScene.createNode("fieldValue");
fieldValue429.name = "translation";
fieldValue429.value = "-0.190500006079674 1.47909998893738 -0.0430999994277954";
ProtoInstance427.fieldValue[1] = fieldValue429;

fieldValue393.children[11] = ProtoInstance427;

let ProtoInstance430 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance430.name = "Site";
ProtoInstance430.DEF = "hanim_r_axilla_proximal_2";
let fieldValue431 = browser.currentScene.createNode("fieldValue");
fieldValue431.name = "name";
fieldValue431.value = "r_axilla_proximal";
ProtoInstance430.fieldValue = new MFNode();

ProtoInstance430.fieldValue[0] = fieldValue431;

let fieldValue432 = browser.currentScene.createNode("fieldValue");
fieldValue432.name = "translation";
fieldValue432.value = "-0.162599995732307 1.40719997882843 -0.00310000008903444";
ProtoInstance430.fieldValue[1] = fieldValue432;

fieldValue393.children[12] = ProtoInstance430;

let ProtoInstance433 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance433.name = "Site";
ProtoInstance433.DEF = "hanim_r_axilla_distal_2";
let fieldValue434 = browser.currentScene.createNode("fieldValue");
fieldValue434.name = "name";
fieldValue434.value = "r_axilla_distal";
ProtoInstance433.fieldValue = new MFNode();

ProtoInstance433.fieldValue[0] = fieldValue434;

let fieldValue435 = browser.currentScene.createNode("fieldValue");
fieldValue435.name = "translation";
fieldValue435.value = "-0.160300001502037 1.40980005264282 -0.0825999975204468";
ProtoInstance433.fieldValue[1] = fieldValue435;

fieldValue393.children[13] = ProtoInstance433;

let ProtoInstance436 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance436.name = "Site";
ProtoInstance436.DEF = "hanim_l_acromion_2";
let fieldValue437 = browser.currentScene.createNode("fieldValue");
fieldValue437.name = "name";
fieldValue437.value = "l_acromion";
ProtoInstance436.fieldValue = new MFNode();

ProtoInstance436.fieldValue[0] = fieldValue437;

let fieldValue438 = browser.currentScene.createNode("fieldValue");
fieldValue438.name = "translation";
fieldValue438.value = "0.203199997544289 1.47599995136261 -0.0489999987185001";
ProtoInstance436.fieldValue[1] = fieldValue438;

fieldValue393.children[14] = ProtoInstance436;

let ProtoInstance439 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance439.name = "Site";
ProtoInstance439.DEF = "hanim_l_axilla_proximal_2";
let fieldValue440 = browser.currentScene.createNode("fieldValue");
fieldValue440.name = "name";
fieldValue440.value = "l_axilla_proximal";
ProtoInstance439.fieldValue = new MFNode();

ProtoInstance439.fieldValue[0] = fieldValue440;

let fieldValue441 = browser.currentScene.createNode("fieldValue");
fieldValue441.name = "translation";
fieldValue441.value = "0.177699998021126 1.40649998188019 -0.00749999983236194";
ProtoInstance439.fieldValue[1] = fieldValue441;

fieldValue393.children[15] = ProtoInstance439;

let ProtoInstance442 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance442.name = "Site";
ProtoInstance442.DEF = "hanim_l_axilla_distal_2";
let fieldValue443 = browser.currentScene.createNode("fieldValue");
fieldValue443.name = "name";
fieldValue443.value = "l_axilla_distal";
ProtoInstance442.fieldValue = new MFNode();

ProtoInstance442.fieldValue[0] = fieldValue443;

let fieldValue444 = browser.currentScene.createNode("fieldValue");
fieldValue444.name = "translation";
fieldValue444.value = "0.17059999704361 1.40719997882843 -0.0874999985098839";
ProtoInstance442.fieldValue[1] = fieldValue444;

fieldValue393.children[16] = ProtoInstance442;

let ProtoInstance445 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance445.name = "Site";
ProtoInstance445.DEF = "hanim_r_neck_base_2";
let fieldValue446 = browser.currentScene.createNode("fieldValue");
fieldValue446.name = "name";
fieldValue446.value = "r_neck_base";
ProtoInstance445.fieldValue = new MFNode();

ProtoInstance445.fieldValue[0] = fieldValue446;

let fieldValue447 = browser.currentScene.createNode("fieldValue");
fieldValue447.name = "translation";
fieldValue447.value = "-0.0419000014662743 1.51489996910095 -0.0219999998807907";
ProtoInstance445.fieldValue[1] = fieldValue447;

fieldValue393.children[17] = ProtoInstance445;

let ProtoInstance448 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance448.name = "Site";
ProtoInstance448.DEF = "hanim_l_neck_base_2";
let fieldValue449 = browser.currentScene.createNode("fieldValue");
fieldValue449.name = "name";
fieldValue449.value = "l_neck_base";
ProtoInstance448.fieldValue = new MFNode();

ProtoInstance448.fieldValue[0] = fieldValue449;

let fieldValue450 = browser.currentScene.createNode("fieldValue");
fieldValue450.name = "translation";
fieldValue450.value = "0.0645999982953072 1.51409995555878 -0.0379999987781048";
ProtoInstance448.fieldValue[1] = fieldValue450;

fieldValue393.children[18] = ProtoInstance448;

let ProtoInstance451 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance451.name = "Site";
ProtoInstance451.DEF = "hanim_navel_2";
let fieldValue452 = browser.currentScene.createNode("fieldValue");
fieldValue452.name = "name";
fieldValue452.value = "navel";
ProtoInstance451.fieldValue = new MFNode();

ProtoInstance451.fieldValue[0] = fieldValue452;

let fieldValue453 = browser.currentScene.createNode("fieldValue");
fieldValue453.name = "translation";
fieldValue453.value = "0.00689999992027879 1.09660005569458 0.101700000464916";
ProtoInstance451.fieldValue[1] = fieldValue453;

fieldValue393.children[19] = ProtoInstance451;

ProtoInstance391.fieldValue[1] = fieldValue393;

fieldValue244.children[3] = ProtoInstance391;

ProtoInstance240.fieldValue[3] = fieldValue244;

fieldValue104.children[1] = ProtoInstance240;

let ProtoInstance454 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance454.name = "Segment";
ProtoInstance454.DEF = "hanim_sacrum_2";
let fieldValue455 = browser.currentScene.createNode("fieldValue");
fieldValue455.name = "name";
fieldValue455.value = "sacrum";
ProtoInstance454.fieldValue = new MFNode();

ProtoInstance454.fieldValue[0] = fieldValue455;

let fieldValue456 = browser.currentScene.createNode("fieldValue");
fieldValue456.name = "children";
let ProtoInstance457 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance457.name = "Site";
ProtoInstance457.DEF = "hanim_r_asis_2";
let fieldValue458 = browser.currentScene.createNode("fieldValue");
fieldValue458.name = "name";
fieldValue458.value = "r_asis";
ProtoInstance457.fieldValue = new MFNode();

ProtoInstance457.fieldValue[0] = fieldValue458;

let fieldValue459 = browser.currentScene.createNode("fieldValue");
fieldValue459.name = "translation";
fieldValue459.value = "-0.088699996471405 1.00209999084473 0.111199997365475";
ProtoInstance457.fieldValue[1] = fieldValue459;

fieldValue456.children = new MFNode();

fieldValue456.children[0] = ProtoInstance457;

let ProtoInstance460 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance460.name = "Site";
ProtoInstance460.DEF = "hanim_l_asis_2";
let fieldValue461 = browser.currentScene.createNode("fieldValue");
fieldValue461.name = "name";
fieldValue461.value = "l_asis";
ProtoInstance460.fieldValue = new MFNode();

ProtoInstance460.fieldValue[0] = fieldValue461;

let fieldValue462 = browser.currentScene.createNode("fieldValue");
fieldValue462.name = "translation";
fieldValue462.value = "0.0925000011920929 0.998300015926361 0.105200000107288";
ProtoInstance460.fieldValue[1] = fieldValue462;

fieldValue456.children[1] = ProtoInstance460;

let ProtoInstance463 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance463.name = "Site";
ProtoInstance463.DEF = "hanim_r_iliocristale_2";
let fieldValue464 = browser.currentScene.createNode("fieldValue");
fieldValue464.name = "name";
fieldValue464.value = "r_iliocristale";
ProtoInstance463.fieldValue = new MFNode();

ProtoInstance463.fieldValue[0] = fieldValue464;

let fieldValue465 = browser.currentScene.createNode("fieldValue");
fieldValue465.name = "translation";
fieldValue465.value = "-0.152500003576279 1.0628000497818 0.00350000010803342";
ProtoInstance463.fieldValue[1] = fieldValue465;

fieldValue456.children[2] = ProtoInstance463;

let ProtoInstance466 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance466.name = "Site";
ProtoInstance466.DEF = "hanim_r_trochanterion_2";
let fieldValue467 = browser.currentScene.createNode("fieldValue");
fieldValue467.name = "name";
fieldValue467.value = "r_trochanterion";
ProtoInstance466.fieldValue = new MFNode();

ProtoInstance466.fieldValue[0] = fieldValue467;

let fieldValue468 = browser.currentScene.createNode("fieldValue");
fieldValue468.name = "translation";
fieldValue468.value = "-0.16889999806881 0.841899991035461 0.0351999998092651";
ProtoInstance466.fieldValue[1] = fieldValue468;

fieldValue456.children[3] = ProtoInstance466;

let ProtoInstance469 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance469.name = "Site";
ProtoInstance469.DEF = "hanim_l_iliocristale_2";
let fieldValue470 = browser.currentScene.createNode("fieldValue");
fieldValue470.name = "name";
fieldValue470.value = "l_iliocristale";
ProtoInstance469.fieldValue = new MFNode();

ProtoInstance469.fieldValue[0] = fieldValue470;

let fieldValue471 = browser.currentScene.createNode("fieldValue");
fieldValue471.name = "translation";
fieldValue471.value = "0.161200001835823 1.05369997024536 0.0007999999797903";
ProtoInstance469.fieldValue[1] = fieldValue471;

fieldValue456.children[4] = ProtoInstance469;

let ProtoInstance472 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance472.name = "Site";
ProtoInstance472.DEF = "hanim_l_trochanterion_2";
let fieldValue473 = browser.currentScene.createNode("fieldValue");
fieldValue473.name = "name";
fieldValue473.value = "l_trochanterion";
ProtoInstance472.fieldValue = new MFNode();

ProtoInstance472.fieldValue[0] = fieldValue473;

let fieldValue474 = browser.currentScene.createNode("fieldValue");
fieldValue474.name = "translation";
fieldValue474.value = "0.167699992656708 0.833599984645844 0.0303000006824732";
ProtoInstance472.fieldValue[1] = fieldValue474;

fieldValue456.children[5] = ProtoInstance472;

let ProtoInstance475 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance475.name = "Site";
ProtoInstance475.DEF = "hanim_r_psis_2";
let fieldValue476 = browser.currentScene.createNode("fieldValue");
fieldValue476.name = "name";
fieldValue476.value = "r_psis";
ProtoInstance475.fieldValue = new MFNode();

ProtoInstance475.fieldValue[0] = fieldValue476;

let fieldValue477 = browser.currentScene.createNode("fieldValue");
fieldValue477.name = "translation";
fieldValue477.value = "-0.0715999975800514 1.01900005340576 -0.113799996674061";
ProtoInstance475.fieldValue[1] = fieldValue477;

fieldValue456.children[6] = ProtoInstance475;

let ProtoInstance478 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance478.name = "Site";
ProtoInstance478.DEF = "hanim_l_psis_2";
let fieldValue479 = browser.currentScene.createNode("fieldValue");
fieldValue479.name = "name";
fieldValue479.value = "l_psis";
ProtoInstance478.fieldValue = new MFNode();

ProtoInstance478.fieldValue[0] = fieldValue479;

let fieldValue480 = browser.currentScene.createNode("fieldValue");
fieldValue480.name = "translation";
fieldValue480.value = "0.0773999989032745 1.01900005340576 -0.115099996328354";
ProtoInstance478.fieldValue[1] = fieldValue480;

fieldValue456.children[7] = ProtoInstance478;

let ProtoInstance481 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance481.name = "Site";
ProtoInstance481.DEF = "hanim_crotch_2";
let fieldValue482 = browser.currentScene.createNode("fieldValue");
fieldValue482.name = "name";
fieldValue482.value = "crotch";
ProtoInstance481.fieldValue = new MFNode();

ProtoInstance481.fieldValue[0] = fieldValue482;

let fieldValue483 = browser.currentScene.createNode("fieldValue");
fieldValue483.name = "translation";
fieldValue483.value = "0.00340000004507601 0.826600015163422 0.0256999991834164";
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
ProtoInstance485.USE = "hanim_humanoid_root_2";
fieldValue484.children = new MFNode();

fieldValue484.children[0] = ProtoInstance485;

let ProtoInstance486 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance486.USE = "hanim_sacroiliac_2";
fieldValue484.children[1] = ProtoInstance486;

let ProtoInstance487 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance487.USE = "hanim_l_hip_2";
fieldValue484.children[2] = ProtoInstance487;

let ProtoInstance488 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance488.USE = "hanim_l_knee_2";
fieldValue484.children[3] = ProtoInstance488;

let ProtoInstance489 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance489.USE = "hanim_l_talocrural_2";
fieldValue484.children[4] = ProtoInstance489;

let ProtoInstance490 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance490.USE = "hanim_l_metatarsophalangeal__2";
fieldValue484.children[5] = ProtoInstance490;

let ProtoInstance491 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance491.USE = "hanim_r_hip_2";
fieldValue484.children[6] = ProtoInstance491;

let ProtoInstance492 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance492.USE = "hanim_r_knee_2";
fieldValue484.children[7] = ProtoInstance492;

let ProtoInstance493 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance493.USE = "hanim_r_talocrural_2";
fieldValue484.children[8] = ProtoInstance493;

let ProtoInstance494 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance494.USE = "hanim_r_metatarsophalangeal__2";
fieldValue484.children[9] = ProtoInstance494;

let ProtoInstance495 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance495.USE = "hanim_vl5_2";
fieldValue484.children[10] = ProtoInstance495;

let ProtoInstance496 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance496.USE = "hanim_skullbase_2";
fieldValue484.children[11] = ProtoInstance496;

let ProtoInstance497 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance497.USE = "hanim_l_shoulder_2";
fieldValue484.children[12] = ProtoInstance497;

let ProtoInstance498 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance498.USE = "hanim_l_elbow_2";
fieldValue484.children[13] = ProtoInstance498;

let ProtoInstance499 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance499.USE = "hanim_l_radiocarpal_2";
fieldValue484.children[14] = ProtoInstance499;

let ProtoInstance500 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance500.USE = "hanim_r_shoulder_2";
fieldValue484.children[15] = ProtoInstance500;

let ProtoInstance501 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance501.USE = "hanim_r_elbow_2";
fieldValue484.children[16] = ProtoInstance501;

let ProtoInstance502 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance502.USE = "hanim_r_radiocarpal_2";
fieldValue484.children[17] = ProtoInstance502;

ProtoInstance98.fieldValue[1] = fieldValue484;

let fieldValue503 = browser.currentScene.createNode("fieldValue");
fieldValue503.name = "segments";
let ProtoInstance504 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance504.USE = "hanim_l_middistal_2";
fieldValue503.children = new MFNode();

fieldValue503.children[0] = ProtoInstance504;

let ProtoInstance505 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance505.USE = "hanim_l_hindfoot_2";
fieldValue503.children[1] = ProtoInstance505;

let ProtoInstance506 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance506.USE = "hanim_l_calf_2";
fieldValue503.children[2] = ProtoInstance506;

let ProtoInstance507 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance507.USE = "hanim_l_thigh_2";
fieldValue503.children[3] = ProtoInstance507;

let ProtoInstance508 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance508.USE = "hanim_r_middistal_2";
fieldValue503.children[4] = ProtoInstance508;

let ProtoInstance509 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance509.USE = "hanim_r_hindfoot_2";
fieldValue503.children[5] = ProtoInstance509;

let ProtoInstance510 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance510.USE = "hanim_r_calf_2";
fieldValue503.children[6] = ProtoInstance510;

let ProtoInstance511 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance511.USE = "hanim_r_thigh_2";
fieldValue503.children[7] = ProtoInstance511;

let ProtoInstance512 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance512.USE = "hanim_pelvis_2";
fieldValue503.children[8] = ProtoInstance512;

let ProtoInstance513 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance513.USE = "hanim_skull_2";
fieldValue503.children[9] = ProtoInstance513;

let ProtoInstance514 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance514.USE = "hanim_l_hand_2";
fieldValue503.children[10] = ProtoInstance514;

let ProtoInstance515 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance515.USE = "hanim_l_forearm_2";
fieldValue503.children[11] = ProtoInstance515;

let ProtoInstance516 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance516.USE = "hanim_l_upperarm_2";
fieldValue503.children[12] = ProtoInstance516;

let ProtoInstance517 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance517.USE = "hanim_r_hand_2";
fieldValue503.children[13] = ProtoInstance517;

let ProtoInstance518 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance518.USE = "hanim_r_forearm_2";
fieldValue503.children[14] = ProtoInstance518;

let ProtoInstance519 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance519.USE = "hanim_r_upperarm_2";
fieldValue503.children[15] = ProtoInstance519;

let ProtoInstance520 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance520.USE = "hanim_l5_2";
fieldValue503.children[16] = ProtoInstance520;

let ProtoInstance521 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance521.USE = "hanim_sacrum_2";
fieldValue503.children[17] = ProtoInstance521;

ProtoInstance98.fieldValue[2] = fieldValue503;

let fieldValue522 = browser.currentScene.createNode("fieldValue");
fieldValue522.name = "sites";
let ProtoInstance523 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance523.USE = "hanim_l_middistal_tip_2";
fieldValue522.children = new MFNode();

fieldValue522.children[0] = ProtoInstance523;

let ProtoInstance524 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance524.USE = "hanim_l_tarsal_interphalangeal_phalanx6";
fieldValue522.children[1] = ProtoInstance524;

let ProtoInstance525 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance525.USE = "hanim_l_tarsal_interphalangeal_phalanx2";
fieldValue522.children[2] = ProtoInstance525;

let ProtoInstance526 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance526.USE = "hanim_l_tarsal_distal_phalanx3";
fieldValue522.children[3] = ProtoInstance526;

let ProtoInstance527 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance527.USE = "hanim_l_lateral_malleolus_2";
fieldValue522.children[4] = ProtoInstance527;

let ProtoInstance528 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance528.USE = "hanim_l_medial_malleolus_2";
fieldValue522.children[5] = ProtoInstance528;

let ProtoInstance529 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance529.USE = "hanim_l_sphyrion_2";
fieldValue522.children[6] = ProtoInstance529;

let ProtoInstance530 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance530.USE = "hanim_l_calcaneus_posterior_2";
fieldValue522.children[7] = ProtoInstance530;

let ProtoInstance531 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance531.USE = "hanim_l_knee_crease_2";
fieldValue522.children[8] = ProtoInstance531;

let ProtoInstance532 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance532.USE = "hanim_l_femoral_lateral_epicondyles_2";
fieldValue522.children[9] = ProtoInstance532;

let ProtoInstance533 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance533.USE = "hanim_l_femoral_medial_epicondyles_2";
fieldValue522.children[10] = ProtoInstance533;

let ProtoInstance534 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance534.USE = "hanim_r_middistal_tip_2";
fieldValue522.children[11] = ProtoInstance534;

let ProtoInstance535 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance535.USE = "hanim_r_tarsal_interphalangeal_phalanx6";
fieldValue522.children[12] = ProtoInstance535;

let ProtoInstance536 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance536.USE = "hanim_r_tarsal_interphalangeal_phalanx2";
fieldValue522.children[13] = ProtoInstance536;

let ProtoInstance537 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance537.USE = "hanim_r_tarsal_distal_phalanx3";
fieldValue522.children[14] = ProtoInstance537;

let ProtoInstance538 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance538.USE = "hanim_r_lateral_malleolus_2";
fieldValue522.children[15] = ProtoInstance538;

let ProtoInstance539 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance539.USE = "hanim_r_medial_malleolus_2";
fieldValue522.children[16] = ProtoInstance539;

let ProtoInstance540 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance540.USE = "hanim_r_sphyrion_2";
fieldValue522.children[17] = ProtoInstance540;

let ProtoInstance541 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance541.USE = "hanim_r_calcaneus_posterior_2";
fieldValue522.children[18] = ProtoInstance541;

let ProtoInstance542 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance542.USE = "hanim_r_knee_crease_2";
fieldValue522.children[19] = ProtoInstance542;

let ProtoInstance543 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance543.USE = "hanim_r_femoral_lateral_epicondyles_2";
fieldValue522.children[20] = ProtoInstance543;

let ProtoInstance544 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance544.USE = "hanim_r_femoral_medial_epicondyles_2";
fieldValue522.children[21] = ProtoInstance544;

let ProtoInstance545 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance545.USE = "hanim_skull_tip_2";
fieldValue522.children[22] = ProtoInstance545;

let ProtoInstance546 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance546.USE = "hanim_sellion_2";
fieldValue522.children[23] = ProtoInstance546;

let ProtoInstance547 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance547.USE = "hanim_r_infraorbitale_2";
fieldValue522.children[24] = ProtoInstance547;

let ProtoInstance548 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance548.USE = "hanim_l_infraorbitale_2";
fieldValue522.children[25] = ProtoInstance548;

let ProtoInstance549 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance549.USE = "hanim_supramenton_2";
fieldValue522.children[26] = ProtoInstance549;

let ProtoInstance550 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance550.USE = "hanim_r_tragion_2";
fieldValue522.children[27] = ProtoInstance550;

let ProtoInstance551 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance551.USE = "hanim_r_gonion_2";
fieldValue522.children[28] = ProtoInstance551;

let ProtoInstance552 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance552.USE = "hanim_l_tragion_2";
fieldValue522.children[29] = ProtoInstance552;

let ProtoInstance553 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance553.USE = "hanim_l_gonion_2";
fieldValue522.children[30] = ProtoInstance553;

let ProtoInstance554 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance554.USE = "hanim_nuchale_2";
fieldValue522.children[31] = ProtoInstance554;

let ProtoInstance555 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance555.USE = "hanim_l_hand_tip_2";
fieldValue522.children[32] = ProtoInstance555;

let ProtoInstance556 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance556.USE = "hanim_l_metacarpal_phalanx3";
fieldValue522.children[33] = ProtoInstance556;

let ProtoInstance557 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance557.USE = "hanim_l_dactylion_2";
fieldValue522.children[34] = ProtoInstance557;

let ProtoInstance558 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance558.USE = "hanim_l_ulnar_styloid_2";
fieldValue522.children[35] = ProtoInstance558;

let ProtoInstance559 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance559.USE = "hanim_l_metacarpal_phalanx6";
fieldValue522.children[36] = ProtoInstance559;

let ProtoInstance560 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance560.USE = "hanim_l_radial_styloid_2";
fieldValue522.children[37] = ProtoInstance560;

let ProtoInstance561 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance561.USE = "hanim_l_olecranon_2";
fieldValue522.children[38] = ProtoInstance561;

let ProtoInstance562 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance562.USE = "hanim_l_humeral_medial_epicondyles_2";
fieldValue522.children[39] = ProtoInstance562;

let ProtoInstance563 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance563.USE = "hanim_l_radiale_2";
fieldValue522.children[40] = ProtoInstance563;

let ProtoInstance564 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance564.USE = "hanim_l_humeral_lateral_epicondyles_2";
fieldValue522.children[41] = ProtoInstance564;

let ProtoInstance565 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance565.USE = "hanim_r_hand_tip_2";
fieldValue522.children[42] = ProtoInstance565;

let ProtoInstance566 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance566.USE = "hanim_r_metacarpal_phalanx3";
fieldValue522.children[43] = ProtoInstance566;

let ProtoInstance567 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance567.USE = "hanim_r_dactylion_2";
fieldValue522.children[44] = ProtoInstance567;

let ProtoInstance568 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance568.USE = "hanim_r_ulnar_styloid_2";
fieldValue522.children[45] = ProtoInstance568;

let ProtoInstance569 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance569.USE = "hanim_r_metacarpal_phalanx6";
fieldValue522.children[46] = ProtoInstance569;

let ProtoInstance570 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance570.USE = "hanim_r_radial_styloid_2";
fieldValue522.children[47] = ProtoInstance570;

let ProtoInstance571 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance571.USE = "hanim_r_olecranon_2";
fieldValue522.children[48] = ProtoInstance571;

let ProtoInstance572 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance572.USE = "hanim_r_humeral_medial_epicondyles_2";
fieldValue522.children[49] = ProtoInstance572;

let ProtoInstance573 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance573.USE = "hanim_r_radiale_2";
fieldValue522.children[50] = ProtoInstance573;

let ProtoInstance574 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance574.USE = "hanim_r_humeral_lateral_epicondyles_2";
fieldValue522.children[51] = ProtoInstance574;

let ProtoInstance575 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance575.USE = "hanim_r_clavicale_2";
fieldValue522.children[52] = ProtoInstance575;

let ProtoInstance576 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance576.USE = "hanim_suprasternale_2";
fieldValue522.children[53] = ProtoInstance576;

let ProtoInstance577 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance577.USE = "hanim_l_clavicale_2";
fieldValue522.children[54] = ProtoInstance577;

let ProtoInstance578 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance578.USE = "hanim_r_thelion_2";
fieldValue522.children[55] = ProtoInstance578;

let ProtoInstance579 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance579.USE = "hanim_l_thelion_2";
fieldValue522.children[56] = ProtoInstance579;

let ProtoInstance580 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance580.USE = "hanim_substernale_2";
fieldValue522.children[57] = ProtoInstance580;

let ProtoInstance581 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance581.USE = "hanim_r_rib10_2";
fieldValue522.children[58] = ProtoInstance581;

let ProtoInstance582 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance582.USE = "hanim_l_rib10_2";
fieldValue522.children[59] = ProtoInstance582;

let ProtoInstance583 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance583.USE = "hanim_cervicale_2";
fieldValue522.children[60] = ProtoInstance583;

let ProtoInstance584 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance584.USE = "hanim_spine_2_lower_back_2";
fieldValue522.children[61] = ProtoInstance584;

let ProtoInstance585 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance585.USE = "hanim_waist_preferred_posterior_2";
fieldValue522.children[62] = ProtoInstance585;

let ProtoInstance586 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance586.USE = "hanim_r_acromion_2";
fieldValue522.children[63] = ProtoInstance586;

let ProtoInstance587 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance587.USE = "hanim_r_axilla_proximal_2";
fieldValue522.children[64] = ProtoInstance587;

let ProtoInstance588 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance588.USE = "hanim_r_axilla_distal_2";
fieldValue522.children[65] = ProtoInstance588;

let ProtoInstance589 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance589.USE = "hanim_l_acromion_2";
fieldValue522.children[66] = ProtoInstance589;

let ProtoInstance590 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance590.USE = "hanim_l_axilla_proximal_2";
fieldValue522.children[67] = ProtoInstance590;

let ProtoInstance591 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance591.USE = "hanim_l_axilla_distal_2";
fieldValue522.children[68] = ProtoInstance591;

let ProtoInstance592 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance592.USE = "hanim_r_neck_base_2";
fieldValue522.children[69] = ProtoInstance592;

let ProtoInstance593 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance593.USE = "hanim_l_neck_base_2";
fieldValue522.children[70] = ProtoInstance593;

let ProtoInstance594 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance594.USE = "hanim_navel_2";
fieldValue522.children[71] = ProtoInstance594;

let ProtoInstance595 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance595.USE = "hanim_r_asis_2";
fieldValue522.children[72] = ProtoInstance595;

let ProtoInstance596 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance596.USE = "hanim_l_asis_2";
fieldValue522.children[73] = ProtoInstance596;

let ProtoInstance597 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance597.USE = "hanim_r_iliocristale_2";
fieldValue522.children[74] = ProtoInstance597;

let ProtoInstance598 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance598.USE = "hanim_r_trochanterion_2";
fieldValue522.children[75] = ProtoInstance598;

let ProtoInstance599 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance599.USE = "hanim_l_iliocristale_2";
fieldValue522.children[76] = ProtoInstance599;

let ProtoInstance600 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance600.USE = "hanim_l_trochanterion_2";
fieldValue522.children[77] = ProtoInstance600;

let ProtoInstance601 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance601.USE = "hanim_r_psis_2";
fieldValue522.children[78] = ProtoInstance601;

let ProtoInstance602 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance602.USE = "hanim_l_psis_2";
fieldValue522.children[79] = ProtoInstance602;

let ProtoInstance603 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance603.USE = "hanim_crotch_2";
fieldValue522.children[80] = ProtoInstance603;

ProtoInstance98.fieldValue[3] = fieldValue522;

let fieldValue604 = browser.currentScene.createNode("fieldValue");
fieldValue604.name = "name";
fieldValue604.value = "humanoid";
ProtoInstance98.fieldValue[4] = fieldValue604;

let fieldValue605 = browser.currentScene.createNode("fieldValue");
fieldValue605.name = "info";
fieldValue605.value = "\"authorName=Matthew T. Beitler\" \"authorEmail=beitler@cis.upenn.edu or beitler@acm.org\" \"creationDate=05/12/99\" \"copyright=Copyright 1999-2003, Matthew T. Beitler\" \"humanoidVersion=JointCenters 200x, LOA&#8209;1\" \"usageRestrictions= PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED, PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided 'as-is' and without warranty of any kind, express, implied or otherwise, including without limitation, any warranty of merchantability or fitness for a particular purpose.\" \"modificationDate=08/12/03\"";
ProtoInstance98.fieldValue[5] = fieldValue605;

browser.currentScene.children[4] = ProtoInstance98;

let Group606 = browser.currentScene.createNode("Group");
Group606.DEF = "JointCenters_WorldInfo";
let WorldInfo607 = browser.currentScene.createNode("WorldInfo");
WorldInfo607.title = "HANIM 200x Default Joint Centers, LOA&#8209;1";
WorldInfo607.info = new MFString(new java.lang.String[" HANIM 200x Default Joint Centers, Level-Of-Articulation 1 -------------------------------------------------------- HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://H-Anim.org/Specifications/H-Anim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modelling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "]);
Group606.children = new MFNode();

Group606.children[0] = WorldInfo607;

browser.currentScene.children[5] = Group606;

let NavigationInfo608 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo608.avatarSize = new MFFloat(new float[0.25,1.60000002384186,0.75]);
NavigationInfo608.speed = 1.5;
browser.currentScene.children[6] = NavigationInfo608;

