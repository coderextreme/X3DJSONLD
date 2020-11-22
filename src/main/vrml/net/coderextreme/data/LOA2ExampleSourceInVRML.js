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
ProtoInstance125.DEF = "hanim_l_tarsotarsal_interphalangeal__2";
let fieldValue126 = browser.currentScene.createNode("fieldValue");
fieldValue126.name = "stiffness";
fieldValue126.value = "1 1 1";
ProtoInstance125.fieldValue = new MFNode();

ProtoInstance125.fieldValue[0] = fieldValue126;

let fieldValue127 = browser.currentScene.createNode("fieldValue");
fieldValue127.name = "name";
fieldValue127.value = "l_tarsotarsal_interphalangeal_";
ProtoInstance125.fieldValue[1] = fieldValue127;

let fieldValue128 = browser.currentScene.createNode("fieldValue");
fieldValue128.name = "center";
fieldValue128.value = "0.108599998056889 0.0000999999974737875 -0.0368000008165836";
ProtoInstance125.fieldValue[2] = fieldValue128;

let fieldValue129 = browser.currentScene.createNode("fieldValue");
fieldValue129.name = "children";
let ProtoInstance130 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance130.name = "Joint";
ProtoInstance130.DEF = "hanim_l_metatarsophalangeal__2";
let fieldValue131 = browser.currentScene.createNode("fieldValue");
fieldValue131.name = "stiffness";
fieldValue131.value = "1 1 1";
ProtoInstance130.fieldValue = new MFNode();

ProtoInstance130.fieldValue[0] = fieldValue131;

let fieldValue132 = browser.currentScene.createNode("fieldValue");
fieldValue132.name = "name";
fieldValue132.value = "l_metatarsophalangeal_";
ProtoInstance130.fieldValue[1] = fieldValue132;

let fieldValue133 = browser.currentScene.createNode("fieldValue");
fieldValue133.name = "center";
fieldValue133.value = "0.108599998056889 0.0000999999974737875 0.0368000008165836";
ProtoInstance130.fieldValue[2] = fieldValue133;

let fieldValue134 = browser.currentScene.createNode("fieldValue");
fieldValue134.name = "children";
let ProtoInstance135 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance135.name = "Joint";
ProtoInstance135.DEF = "hanim_l_tarsal_interphalangeal__2";
let fieldValue136 = browser.currentScene.createNode("fieldValue");
fieldValue136.name = "stiffness";
fieldValue136.value = "1 1 1";
ProtoInstance135.fieldValue = new MFNode();

ProtoInstance135.fieldValue[0] = fieldValue136;

let fieldValue137 = browser.currentScene.createNode("fieldValue");
fieldValue137.name = "name";
fieldValue137.value = "l_tarsal_interphalangeal_";
ProtoInstance135.fieldValue[1] = fieldValue137;

let fieldValue138 = browser.currentScene.createNode("fieldValue");
fieldValue138.name = "center";
fieldValue138.value = "0.108599998056889 0 0.0762000009417534";
ProtoInstance135.fieldValue[2] = fieldValue138;

let fieldValue139 = browser.currentScene.createNode("fieldValue");
fieldValue139.name = "children";
let ProtoInstance140 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance140.name = "Segment";
ProtoInstance140.DEF = "hanim_l_tarsal_distal_phalanx2";
let fieldValue141 = browser.currentScene.createNode("fieldValue");
fieldValue141.name = "name";
fieldValue141.value = "l_tarsal_distal_phalanx_1";
ProtoInstance140.fieldValue = new MFNode();

ProtoInstance140.fieldValue[0] = fieldValue141;

let fieldValue142 = browser.currentScene.createNode("fieldValue");
fieldValue142.name = "children";
let ProtoInstance143 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance143.name = "Site";
ProtoInstance143.DEF = "hanim_l_tarsal_distal_phalanx_1_tip_2";
let fieldValue144 = browser.currentScene.createNode("fieldValue");
fieldValue144.name = "name";
fieldValue144.value = "l_tarsal_distal_phalanx_1_tip";
ProtoInstance143.fieldValue = new MFNode();

ProtoInstance143.fieldValue[0] = fieldValue144;

let fieldValue145 = browser.currentScene.createNode("fieldValue");
fieldValue145.name = "translation";
fieldValue145.value = "0.135399997234344 0.0015999999595806 0.147599995136261";
ProtoInstance143.fieldValue[1] = fieldValue145;

fieldValue142.children = new MFNode();

fieldValue142.children[0] = ProtoInstance143;

let ProtoInstance146 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance146.name = "Site";
ProtoInstance146.DEF = "hanim_l_tarsal_interphalangeal_phalanx6";
let fieldValue147 = browser.currentScene.createNode("fieldValue");
fieldValue147.name = "name";
fieldValue147.value = "l_tarsal_interphalangeal_phalanx_5";
ProtoInstance146.fieldValue = new MFNode();

ProtoInstance146.fieldValue[0] = fieldValue147;

let fieldValue148 = browser.currentScene.createNode("fieldValue");
fieldValue148.name = "translation";
fieldValue148.value = "0.182500004768372 0.00700000021606684 0.092799998819828";
ProtoInstance146.fieldValue[1] = fieldValue148;

fieldValue142.children[1] = ProtoInstance146;

let ProtoInstance149 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance149.name = "Site";
ProtoInstance149.DEF = "hanim_l_tarsal_distal_phalanx3";
let fieldValue150 = browser.currentScene.createNode("fieldValue");
fieldValue150.name = "name";
fieldValue150.value = "l_tarsal_distal_phalanx_2";
ProtoInstance149.fieldValue = new MFNode();

ProtoInstance149.fieldValue[0] = fieldValue150;

let fieldValue151 = browser.currentScene.createNode("fieldValue");
fieldValue151.name = "translation";
fieldValue151.value = "0.119499996304512 0.00789999961853027 0.143299996852875";
ProtoInstance149.fieldValue[1] = fieldValue151;

fieldValue142.children[2] = ProtoInstance149;

ProtoInstance140.fieldValue[1] = fieldValue142;

fieldValue139.children = new MFNode();

fieldValue139.children[0] = ProtoInstance140;

ProtoInstance135.fieldValue[3] = fieldValue139;

fieldValue134.children = new MFNode();

fieldValue134.children[0] = ProtoInstance135;

let ProtoInstance152 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance152.name = "Segment";
ProtoInstance152.DEF = "hanim_l_middistal_2";
let fieldValue153 = browser.currentScene.createNode("fieldValue");
fieldValue153.name = "name";
fieldValue153.value = "l_middistal";
ProtoInstance152.fieldValue = new MFNode();

ProtoInstance152.fieldValue[0] = fieldValue153;

let fieldValue154 = browser.currentScene.createNode("fieldValue");
fieldValue154.name = "children";
let ProtoInstance155 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance155.name = "Site";
ProtoInstance155.DEF = "hanim_l_tarsal_interphalangeal_phalanx2";
let fieldValue156 = browser.currentScene.createNode("fieldValue");
fieldValue156.name = "name";
fieldValue156.value = "l_tarsal_interphalangeal_phalanx_1";
ProtoInstance155.fieldValue = new MFNode();

ProtoInstance155.fieldValue[0] = fieldValue156;

let fieldValue157 = browser.currentScene.createNode("fieldValue");
fieldValue157.name = "translation";
fieldValue157.value = "0.0816000029444695 0.023199999704957 0.0105999996885657";
ProtoInstance155.fieldValue[1] = fieldValue157;

fieldValue154.children = new MFNode();

fieldValue154.children[0] = ProtoInstance155;

ProtoInstance152.fieldValue[1] = fieldValue154;

fieldValue134.children[1] = ProtoInstance152;

ProtoInstance130.fieldValue[3] = fieldValue134;

fieldValue129.children = new MFNode();

fieldValue129.children[0] = ProtoInstance130;

let ProtoInstance158 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance158.name = "Segment";
ProtoInstance158.DEF = "hanim_l_midproximal_2";
let fieldValue159 = browser.currentScene.createNode("fieldValue");
fieldValue159.name = "name";
fieldValue159.value = "l_midproximal";
ProtoInstance158.fieldValue = new MFNode();

ProtoInstance158.fieldValue[0] = fieldValue159;

fieldValue129.children[1] = ProtoInstance158;

ProtoInstance125.fieldValue[3] = fieldValue129;

fieldValue124.children = new MFNode();

fieldValue124.children[0] = ProtoInstance125;

let ProtoInstance160 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance160.name = "Segment";
ProtoInstance160.DEF = "hanim_l_hindfoot_2";
let fieldValue161 = browser.currentScene.createNode("fieldValue");
fieldValue161.name = "name";
fieldValue161.value = "l_hindfoot";
ProtoInstance160.fieldValue = new MFNode();

ProtoInstance160.fieldValue[0] = fieldValue161;

let fieldValue162 = browser.currentScene.createNode("fieldValue");
fieldValue162.name = "children";
let ProtoInstance163 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance163.name = "Site";
ProtoInstance163.DEF = "hanim_l_lateral_malleolus_2";
let fieldValue164 = browser.currentScene.createNode("fieldValue");
fieldValue164.name = "name";
fieldValue164.value = "l_lateral_malleolus";
ProtoInstance163.fieldValue = new MFNode();

ProtoInstance163.fieldValue[0] = fieldValue164;

let fieldValue165 = browser.currentScene.createNode("fieldValue");
fieldValue165.name = "translation";
fieldValue165.value = "0.130799993872643 0.0597000010311604 -0.103200003504753";
ProtoInstance163.fieldValue[1] = fieldValue165;

fieldValue162.children = new MFNode();

fieldValue162.children[0] = ProtoInstance163;

let ProtoInstance166 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance166.name = "Site";
ProtoInstance166.DEF = "hanim_l_medial_malleolus_2";
let fieldValue167 = browser.currentScene.createNode("fieldValue");
fieldValue167.name = "name";
fieldValue167.value = "l_medial_malleolus";
ProtoInstance166.fieldValue = new MFNode();

ProtoInstance166.fieldValue[0] = fieldValue167;

let fieldValue168 = browser.currentScene.createNode("fieldValue");
fieldValue168.name = "translation";
fieldValue168.value = "0.0890000015497208 0.0715999975800514 -0.0881000012159348";
ProtoInstance166.fieldValue[1] = fieldValue168;

fieldValue162.children[1] = ProtoInstance166;

let ProtoInstance169 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance169.name = "Site";
ProtoInstance169.DEF = "hanim_l_sphyrion_2";
let fieldValue170 = browser.currentScene.createNode("fieldValue");
fieldValue170.name = "name";
fieldValue170.value = "l_sphyrion";
ProtoInstance169.fieldValue = new MFNode();

ProtoInstance169.fieldValue[0] = fieldValue170;

let fieldValue171 = browser.currentScene.createNode("fieldValue");
fieldValue171.name = "translation";
fieldValue171.value = "0.0890000015497208 0.0575000010430813 -0.0943000018596649";
ProtoInstance169.fieldValue[1] = fieldValue171;

fieldValue162.children[2] = ProtoInstance169;

let ProtoInstance172 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance172.name = "Site";
ProtoInstance172.DEF = "hanim_l_calcaneus_posterior_2";
let fieldValue173 = browser.currentScene.createNode("fieldValue");
fieldValue173.name = "name";
fieldValue173.value = "l_calcaneus_posterior";
ProtoInstance172.fieldValue = new MFNode();

ProtoInstance172.fieldValue[0] = fieldValue173;

let fieldValue174 = browser.currentScene.createNode("fieldValue");
fieldValue174.name = "translation";
fieldValue174.value = "0.09740000218153 0.025900000706315 -0.11710000038147";
ProtoInstance172.fieldValue[1] = fieldValue174;

fieldValue162.children[3] = ProtoInstance172;

ProtoInstance160.fieldValue[1] = fieldValue162;

fieldValue124.children[1] = ProtoInstance160;

ProtoInstance120.fieldValue[3] = fieldValue124;

fieldValue119.children = new MFNode();

fieldValue119.children[0] = ProtoInstance120;

let ProtoInstance175 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance175.name = "Segment";
ProtoInstance175.DEF = "hanim_l_calf_2";
let fieldValue176 = browser.currentScene.createNode("fieldValue");
fieldValue176.name = "name";
fieldValue176.value = "l_calf";
ProtoInstance175.fieldValue = new MFNode();

ProtoInstance175.fieldValue[0] = fieldValue176;

fieldValue119.children[1] = ProtoInstance175;

ProtoInstance115.fieldValue[3] = fieldValue119;

fieldValue114.children = new MFNode();

fieldValue114.children[0] = ProtoInstance115;

let ProtoInstance177 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance177.name = "Segment";
ProtoInstance177.DEF = "hanim_l_thigh_2";
let fieldValue178 = browser.currentScene.createNode("fieldValue");
fieldValue178.name = "name";
fieldValue178.value = "l_thigh";
ProtoInstance177.fieldValue = new MFNode();

ProtoInstance177.fieldValue[0] = fieldValue178;

let fieldValue179 = browser.currentScene.createNode("fieldValue");
fieldValue179.name = "children";
let ProtoInstance180 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance180.name = "Site";
ProtoInstance180.DEF = "hanim_l_knee_crease_2";
let fieldValue181 = browser.currentScene.createNode("fieldValue");
fieldValue181.name = "name";
fieldValue181.value = "l_knee_crease";
ProtoInstance180.fieldValue = new MFNode();

ProtoInstance180.fieldValue[0] = fieldValue181;

let fieldValue182 = browser.currentScene.createNode("fieldValue");
fieldValue182.name = "translation";
fieldValue182.value = "0.0992999970912933 0.488099992275238 -0.0308999996632338";
ProtoInstance180.fieldValue[1] = fieldValue182;

fieldValue179.children = new MFNode();

fieldValue179.children[0] = ProtoInstance180;

let ProtoInstance183 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance183.name = "Site";
ProtoInstance183.DEF = "hanim_l_femoral_lateral_epicondyles_2";
let fieldValue184 = browser.currentScene.createNode("fieldValue");
fieldValue184.name = "name";
fieldValue184.value = "l_femoral_lateral_epicondyles";
ProtoInstance183.fieldValue = new MFNode();

ProtoInstance183.fieldValue[0] = fieldValue184;

let fieldValue185 = browser.currentScene.createNode("fieldValue");
fieldValue185.name = "translation";
fieldValue185.value = "0.159799993038177 0.496699988842011 0.0296999998390675";
ProtoInstance183.fieldValue[1] = fieldValue185;

fieldValue179.children[1] = ProtoInstance183;

let ProtoInstance186 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance186.name = "Site";
ProtoInstance186.DEF = "hanim_l_femoral_medial_epicondyles_2";
let fieldValue187 = browser.currentScene.createNode("fieldValue");
fieldValue187.name = "name";
fieldValue187.value = "l_femoral_lateral_epicondyles";
ProtoInstance186.fieldValue = new MFNode();

ProtoInstance186.fieldValue[0] = fieldValue187;

let fieldValue188 = browser.currentScene.createNode("fieldValue");
fieldValue188.name = "translation";
fieldValue188.value = "0.0397999994456768 0.494599997997284 0.0303000006824732";
ProtoInstance186.fieldValue[1] = fieldValue188;

fieldValue179.children[2] = ProtoInstance186;

ProtoInstance177.fieldValue[1] = fieldValue179;

fieldValue114.children[1] = ProtoInstance177;

ProtoInstance110.fieldValue[3] = fieldValue114;

fieldValue109.children = new MFNode();

fieldValue109.children[0] = ProtoInstance110;

let ProtoInstance189 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance189.name = "Joint";
ProtoInstance189.DEF = "hanim_r_hip_2";
let fieldValue190 = browser.currentScene.createNode("fieldValue");
fieldValue190.name = "stiffness";
fieldValue190.value = "1 1 1";
ProtoInstance189.fieldValue = new MFNode();

ProtoInstance189.fieldValue[0] = fieldValue190;

let fieldValue191 = browser.currentScene.createNode("fieldValue");
fieldValue191.name = "name";
fieldValue191.value = "r_hip";
ProtoInstance189.fieldValue[1] = fieldValue191;

let fieldValue192 = browser.currentScene.createNode("fieldValue");
fieldValue192.name = "center";
fieldValue192.value = "-0.0949999988079071 0.917100012302399 0.00289999996311963";
ProtoInstance189.fieldValue[2] = fieldValue192;

let fieldValue193 = browser.currentScene.createNode("fieldValue");
fieldValue193.name = "children";
let ProtoInstance194 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance194.name = "Joint";
ProtoInstance194.DEF = "hanim_r_knee_2";
let fieldValue195 = browser.currentScene.createNode("fieldValue");
fieldValue195.name = "stiffness";
fieldValue195.value = "1 1 1";
ProtoInstance194.fieldValue = new MFNode();

ProtoInstance194.fieldValue[0] = fieldValue195;

let fieldValue196 = browser.currentScene.createNode("fieldValue");
fieldValue196.name = "name";
fieldValue196.value = "r_knee";
ProtoInstance194.fieldValue[1] = fieldValue196;

let fieldValue197 = browser.currentScene.createNode("fieldValue");
fieldValue197.name = "center";
fieldValue197.value = "-0.0866999998688698 0.491299986839294 0.0318000018596649";
ProtoInstance194.fieldValue[2] = fieldValue197;

let fieldValue198 = browser.currentScene.createNode("fieldValue");
fieldValue198.name = "children";
let ProtoInstance199 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance199.name = "Joint";
ProtoInstance199.DEF = "hanim_r_talocrural_2";
let fieldValue200 = browser.currentScene.createNode("fieldValue");
fieldValue200.name = "stiffness";
fieldValue200.value = "1 1 1";
ProtoInstance199.fieldValue = new MFNode();

ProtoInstance199.fieldValue[0] = fieldValue200;

let fieldValue201 = browser.currentScene.createNode("fieldValue");
fieldValue201.name = "name";
fieldValue201.value = "r_talocrural";
ProtoInstance199.fieldValue[1] = fieldValue201;

let fieldValue202 = browser.currentScene.createNode("fieldValue");
fieldValue202.name = "center";
fieldValue202.value = "-0.0800999999046326 0.0711999982595444 -0.0766000002622604";
ProtoInstance199.fieldValue[2] = fieldValue202;

let fieldValue203 = browser.currentScene.createNode("fieldValue");
fieldValue203.name = "children";
let ProtoInstance204 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance204.name = "Joint";
ProtoInstance204.DEF = "hanim_r_tarsotarsal_interphalangeal__2";
let fieldValue205 = browser.currentScene.createNode("fieldValue");
fieldValue205.name = "stiffness";
fieldValue205.value = "1 1 1";
ProtoInstance204.fieldValue = new MFNode();

ProtoInstance204.fieldValue[0] = fieldValue205;

let fieldValue206 = browser.currentScene.createNode("fieldValue");
fieldValue206.name = "name";
fieldValue206.value = "r_tarsotarsal_interphalangeal_";
ProtoInstance204.fieldValue[1] = fieldValue206;

let fieldValue207 = browser.currentScene.createNode("fieldValue");
fieldValue207.name = "center";
fieldValue207.value = "-0.0800999999046326 0 -0.0368000008165836";
ProtoInstance204.fieldValue[2] = fieldValue207;

let fieldValue208 = browser.currentScene.createNode("fieldValue");
fieldValue208.name = "children";
let ProtoInstance209 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance209.name = "Joint";
ProtoInstance209.DEF = "hanim_r_metatarsophalangeal__2";
let fieldValue210 = browser.currentScene.createNode("fieldValue");
fieldValue210.name = "stiffness";
fieldValue210.value = "1 1 1";
ProtoInstance209.fieldValue = new MFNode();

ProtoInstance209.fieldValue[0] = fieldValue210;

let fieldValue211 = browser.currentScene.createNode("fieldValue");
fieldValue211.name = "name";
fieldValue211.value = "r_metatarsophalangeal_";
ProtoInstance209.fieldValue[1] = fieldValue211;

let fieldValue212 = browser.currentScene.createNode("fieldValue");
fieldValue212.name = "center";
fieldValue212.value = "-0.0800999999046326 0 0.0368000008165836";
ProtoInstance209.fieldValue[2] = fieldValue212;

let fieldValue213 = browser.currentScene.createNode("fieldValue");
fieldValue213.name = "children";
let ProtoInstance214 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance214.name = "Joint";
ProtoInstance214.DEF = "hanim_r_tarsal_interphalangeal__2";
let fieldValue215 = browser.currentScene.createNode("fieldValue");
fieldValue215.name = "stiffness";
fieldValue215.value = "1 1 1";
ProtoInstance214.fieldValue = new MFNode();

ProtoInstance214.fieldValue[0] = fieldValue215;

let fieldValue216 = browser.currentScene.createNode("fieldValue");
fieldValue216.name = "name";
fieldValue216.value = "r_tarsal_interphalangeal_";
ProtoInstance214.fieldValue[1] = fieldValue216;

let fieldValue217 = browser.currentScene.createNode("fieldValue");
fieldValue217.name = "center";
fieldValue217.value = "-0.0800999999046326 0.00389999989420176 0.0732000023126602";
ProtoInstance214.fieldValue[2] = fieldValue217;

let fieldValue218 = browser.currentScene.createNode("fieldValue");
fieldValue218.name = "children";
let ProtoInstance219 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance219.name = "Segment";
ProtoInstance219.DEF = "hanim_r_tarsal_distal_phalanx2";
let fieldValue220 = browser.currentScene.createNode("fieldValue");
fieldValue220.name = "name";
fieldValue220.value = "r_tarsal_distal_phalanx_1";
ProtoInstance219.fieldValue = new MFNode();

ProtoInstance219.fieldValue[0] = fieldValue220;

let fieldValue221 = browser.currentScene.createNode("fieldValue");
fieldValue221.name = "children";
let ProtoInstance222 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance222.name = "Site";
ProtoInstance222.DEF = "hanim_r_tarsal_distal_phalanx_1_tip_2";
let fieldValue223 = browser.currentScene.createNode("fieldValue");
fieldValue223.name = "name";
fieldValue223.value = "r_tarsal_distal_phalanx_1_tip";
ProtoInstance222.fieldValue = new MFNode();

ProtoInstance222.fieldValue[0] = fieldValue223;

let fieldValue224 = browser.currentScene.createNode("fieldValue");
fieldValue224.name = "translation";
fieldValue224.value = "-0.104299999773502 -0.0227000005543232 0.144999995827675";
ProtoInstance222.fieldValue[1] = fieldValue224;

fieldValue221.children = new MFNode();

fieldValue221.children[0] = ProtoInstance222;

let ProtoInstance225 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance225.name = "Site";
ProtoInstance225.DEF = "hanim_r_tarsal_interphalangeal_phalanx6";
let fieldValue226 = browser.currentScene.createNode("fieldValue");
fieldValue226.name = "name";
fieldValue226.value = "r_tarsal_interphalangeal_phalanx_5";
ProtoInstance225.fieldValue = new MFNode();

ProtoInstance225.fieldValue[0] = fieldValue226;

let fieldValue227 = browser.currentScene.createNode("fieldValue");
fieldValue227.name = "translation";
fieldValue227.value = "-0.152300000190735 0.0165999997407198 0.0895000025629997";
ProtoInstance225.fieldValue[1] = fieldValue227;

fieldValue221.children[1] = ProtoInstance225;

let ProtoInstance228 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance228.name = "Site";
ProtoInstance228.DEF = "hanim_r_tarsal_distal_phalanx3";
let fieldValue229 = browser.currentScene.createNode("fieldValue");
fieldValue229.name = "name";
fieldValue229.value = "r_tarsal_distal_phalanx_2";
ProtoInstance228.fieldValue = new MFNode();

ProtoInstance228.fieldValue[0] = fieldValue229;

let fieldValue230 = browser.currentScene.createNode("fieldValue");
fieldValue230.name = "translation";
fieldValue230.value = "-0.088299997150898 0.013399999588728 0.138300001621246";
ProtoInstance228.fieldValue[1] = fieldValue230;

fieldValue221.children[2] = ProtoInstance228;

ProtoInstance219.fieldValue[1] = fieldValue221;

fieldValue218.children = new MFNode();

fieldValue218.children[0] = ProtoInstance219;

ProtoInstance214.fieldValue[3] = fieldValue218;

fieldValue213.children = new MFNode();

fieldValue213.children[0] = ProtoInstance214;

let ProtoInstance231 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance231.name = "Segment";
ProtoInstance231.DEF = "hanim_r_middistal_2";
let fieldValue232 = browser.currentScene.createNode("fieldValue");
fieldValue232.name = "name";
fieldValue232.value = "r_middistal";
ProtoInstance231.fieldValue = new MFNode();

ProtoInstance231.fieldValue[0] = fieldValue232;

let fieldValue233 = browser.currentScene.createNode("fieldValue");
fieldValue233.name = "children";
let ProtoInstance234 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance234.name = "Site";
ProtoInstance234.DEF = "hanim_r_tarsal_interphalangeal_phalanx2";
let fieldValue235 = browser.currentScene.createNode("fieldValue");
fieldValue235.name = "name";
fieldValue235.value = "r_tarsal_interphalangeal_phalanx_1";
ProtoInstance234.fieldValue = new MFNode();

ProtoInstance234.fieldValue[0] = fieldValue235;

let fieldValue236 = browser.currentScene.createNode("fieldValue");
fieldValue236.name = "translation";
fieldValue236.value = "-0.0520999990403652 0.0260000005364418 0.012699999846518";
ProtoInstance234.fieldValue[1] = fieldValue236;

fieldValue233.children = new MFNode();

fieldValue233.children[0] = ProtoInstance234;

ProtoInstance231.fieldValue[1] = fieldValue233;

fieldValue213.children[1] = ProtoInstance231;

ProtoInstance209.fieldValue[3] = fieldValue213;

fieldValue208.children = new MFNode();

fieldValue208.children[0] = ProtoInstance209;

let ProtoInstance237 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance237.name = "Segment";
ProtoInstance237.DEF = "hanim_r_midproximal_2";
let fieldValue238 = browser.currentScene.createNode("fieldValue");
fieldValue238.name = "name";
fieldValue238.value = "r_midproximal";
ProtoInstance237.fieldValue = new MFNode();

ProtoInstance237.fieldValue[0] = fieldValue238;

fieldValue208.children[1] = ProtoInstance237;

ProtoInstance204.fieldValue[3] = fieldValue208;

fieldValue203.children = new MFNode();

fieldValue203.children[0] = ProtoInstance204;

let ProtoInstance239 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance239.name = "Segment";
ProtoInstance239.DEF = "hanim_r_hindfoot_2";
let fieldValue240 = browser.currentScene.createNode("fieldValue");
fieldValue240.name = "name";
fieldValue240.value = "r_hindfoot";
ProtoInstance239.fieldValue = new MFNode();

ProtoInstance239.fieldValue[0] = fieldValue240;

let fieldValue241 = browser.currentScene.createNode("fieldValue");
fieldValue241.name = "children";
let ProtoInstance242 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance242.name = "Site";
ProtoInstance242.DEF = "hanim_r_lateral_malleolus_2";
let fieldValue243 = browser.currentScene.createNode("fieldValue");
fieldValue243.name = "name";
fieldValue243.value = "r_lateral_malleolus";
ProtoInstance242.fieldValue = new MFNode();

ProtoInstance242.fieldValue[0] = fieldValue243;

let fieldValue244 = browser.currentScene.createNode("fieldValue");
fieldValue244.name = "translation";
fieldValue244.value = "-0.100599996745586 0.0658000037074089 -0.107500001788139";
ProtoInstance242.fieldValue[1] = fieldValue244;

fieldValue241.children = new MFNode();

fieldValue241.children[0] = ProtoInstance242;

let ProtoInstance245 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance245.name = "Site";
ProtoInstance245.DEF = "hanim_r_medial_malleolus_2";
let fieldValue246 = browser.currentScene.createNode("fieldValue");
fieldValue246.name = "name";
fieldValue246.value = "r_medial_malleolus";
ProtoInstance245.fieldValue = new MFNode();

ProtoInstance245.fieldValue[0] = fieldValue246;

let fieldValue247 = browser.currentScene.createNode("fieldValue");
fieldValue247.name = "translation";
fieldValue247.value = "-0.0590999983251095 0.0759999975562096 -0.092799998819828";
ProtoInstance245.fieldValue[1] = fieldValue247;

fieldValue241.children[1] = ProtoInstance245;

let ProtoInstance248 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance248.name = "Site";
ProtoInstance248.DEF = "hanim_r_sphyrion_2";
let fieldValue249 = browser.currentScene.createNode("fieldValue");
fieldValue249.name = "name";
fieldValue249.value = "r_sphyrion";
ProtoInstance248.fieldValue = new MFNode();

ProtoInstance248.fieldValue[0] = fieldValue249;

let fieldValue250 = browser.currentScene.createNode("fieldValue");
fieldValue250.name = "translation";
fieldValue250.value = "-0.0603000000119209 0.0610000006854534 -0.100199997425079";
ProtoInstance248.fieldValue[1] = fieldValue250;

fieldValue241.children[2] = ProtoInstance248;

let ProtoInstance251 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance251.name = "Site";
ProtoInstance251.DEF = "hanim_r_calcaneus_posterior_2";
let fieldValue252 = browser.currentScene.createNode("fieldValue");
fieldValue252.name = "name";
fieldValue252.value = "r_calcaneus_posterior";
ProtoInstance251.fieldValue = new MFNode();

ProtoInstance251.fieldValue[0] = fieldValue252;

let fieldValue253 = browser.currentScene.createNode("fieldValue");
fieldValue253.name = "translation";
fieldValue253.value = "-0.0692000016570091 0.0296999998390675 -0.122100003063679";
ProtoInstance251.fieldValue[1] = fieldValue253;

fieldValue241.children[3] = ProtoInstance251;

ProtoInstance239.fieldValue[1] = fieldValue241;

fieldValue203.children[1] = ProtoInstance239;

ProtoInstance199.fieldValue[3] = fieldValue203;

fieldValue198.children = new MFNode();

fieldValue198.children[0] = ProtoInstance199;

let ProtoInstance254 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance254.name = "Segment";
ProtoInstance254.DEF = "hanim_r_calf_2";
let fieldValue255 = browser.currentScene.createNode("fieldValue");
fieldValue255.name = "name";
fieldValue255.value = "r_calf";
ProtoInstance254.fieldValue = new MFNode();

ProtoInstance254.fieldValue[0] = fieldValue255;

fieldValue198.children[1] = ProtoInstance254;

ProtoInstance194.fieldValue[3] = fieldValue198;

fieldValue193.children = new MFNode();

fieldValue193.children[0] = ProtoInstance194;

let ProtoInstance256 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance256.name = "Segment";
ProtoInstance256.DEF = "hanim_r_thigh_2";
let fieldValue257 = browser.currentScene.createNode("fieldValue");
fieldValue257.name = "name";
fieldValue257.value = "r_thigh";
ProtoInstance256.fieldValue = new MFNode();

ProtoInstance256.fieldValue[0] = fieldValue257;

let fieldValue258 = browser.currentScene.createNode("fieldValue");
fieldValue258.name = "children";
let ProtoInstance259 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance259.name = "Site";
ProtoInstance259.DEF = "hanim_r_knee_crease_2";
let fieldValue260 = browser.currentScene.createNode("fieldValue");
fieldValue260.name = "name";
fieldValue260.value = "r_knee_crease";
ProtoInstance259.fieldValue = new MFNode();

ProtoInstance259.fieldValue[0] = fieldValue260;

let fieldValue261 = browser.currentScene.createNode("fieldValue");
fieldValue261.name = "translation";
fieldValue261.value = "-0.0825000032782555 0.4932000041008 -0.032600000500679";
ProtoInstance259.fieldValue[1] = fieldValue261;

fieldValue258.children = new MFNode();

fieldValue258.children[0] = ProtoInstance259;

let ProtoInstance262 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance262.name = "Site";
ProtoInstance262.DEF = "hanim_r_femoral_lateral_epicondyles_2";
let fieldValue263 = browser.currentScene.createNode("fieldValue");
fieldValue263.name = "name";
fieldValue263.value = "r_femoral_lateral_epicondyles";
ProtoInstance262.fieldValue = new MFNode();

ProtoInstance262.fieldValue[0] = fieldValue263;

let fieldValue264 = browser.currentScene.createNode("fieldValue");
fieldValue264.name = "translation";
fieldValue264.value = "-0.142100006341934 0.499199986457825 0.0309999994933605";
ProtoInstance262.fieldValue[1] = fieldValue264;

fieldValue258.children[1] = ProtoInstance262;

let ProtoInstance265 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance265.name = "Site";
ProtoInstance265.DEF = "hanim_r_femoral_medial_epicondyles_2";
let fieldValue266 = browser.currentScene.createNode("fieldValue");
fieldValue266.name = "name";
fieldValue266.value = "r_femoral_lateral_epicondyles";
ProtoInstance265.fieldValue = new MFNode();

ProtoInstance265.fieldValue[0] = fieldValue266;

let fieldValue267 = browser.currentScene.createNode("fieldValue");
fieldValue267.name = "translation";
fieldValue267.value = "-0.0220999997109175 0.501399993896484 0.0288999993354082";
ProtoInstance265.fieldValue[1] = fieldValue267;

fieldValue258.children[2] = ProtoInstance265;

ProtoInstance256.fieldValue[1] = fieldValue258;

fieldValue193.children[1] = ProtoInstance256;

ProtoInstance189.fieldValue[3] = fieldValue193;

fieldValue109.children[1] = ProtoInstance189;

let ProtoInstance268 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance268.name = "Segment";
ProtoInstance268.DEF = "hanim_pelvis_2";
let fieldValue269 = browser.currentScene.createNode("fieldValue");
fieldValue269.name = "name";
fieldValue269.value = "pelvis";
ProtoInstance268.fieldValue = new MFNode();

ProtoInstance268.fieldValue[0] = fieldValue269;

let fieldValue270 = browser.currentScene.createNode("fieldValue");
fieldValue270.name = "children";
let ProtoInstance271 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance271.name = "Site";
ProtoInstance271.DEF = "hanim_r_iliocristale_2";
let fieldValue272 = browser.currentScene.createNode("fieldValue");
fieldValue272.name = "name";
fieldValue272.value = "r_iliocristale";
ProtoInstance271.fieldValue = new MFNode();

ProtoInstance271.fieldValue[0] = fieldValue272;

let fieldValue273 = browser.currentScene.createNode("fieldValue");
fieldValue273.name = "translation";
fieldValue273.value = "-0.152500003576279 1.0628000497818 0.00350000010803342";
ProtoInstance271.fieldValue[1] = fieldValue273;

fieldValue270.children = new MFNode();

fieldValue270.children[0] = ProtoInstance271;

let ProtoInstance274 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance274.name = "Site";
ProtoInstance274.DEF = "hanim_r_trochanterion_2";
let fieldValue275 = browser.currentScene.createNode("fieldValue");
fieldValue275.name = "name";
fieldValue275.value = "r_trochanterion";
ProtoInstance274.fieldValue = new MFNode();

ProtoInstance274.fieldValue[0] = fieldValue275;

let fieldValue276 = browser.currentScene.createNode("fieldValue");
fieldValue276.name = "translation";
fieldValue276.value = "-0.16889999806881 0.841899991035461 0.0351999998092651";
ProtoInstance274.fieldValue[1] = fieldValue276;

fieldValue270.children[1] = ProtoInstance274;

let ProtoInstance277 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance277.name = "Site";
ProtoInstance277.DEF = "hanim_l_iliocristale_2";
let fieldValue278 = browser.currentScene.createNode("fieldValue");
fieldValue278.name = "name";
fieldValue278.value = "l_iliocristale";
ProtoInstance277.fieldValue = new MFNode();

ProtoInstance277.fieldValue[0] = fieldValue278;

let fieldValue279 = browser.currentScene.createNode("fieldValue");
fieldValue279.name = "translation";
fieldValue279.value = "0.161200001835823 1.05369997024536 0.0007999999797903";
ProtoInstance277.fieldValue[1] = fieldValue279;

fieldValue270.children[2] = ProtoInstance277;

let ProtoInstance280 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance280.name = "Site";
ProtoInstance280.DEF = "hanim_l_trochanterion_2";
let fieldValue281 = browser.currentScene.createNode("fieldValue");
fieldValue281.name = "name";
fieldValue281.value = "l_trochanterion";
ProtoInstance280.fieldValue = new MFNode();

ProtoInstance280.fieldValue[0] = fieldValue281;

let fieldValue282 = browser.currentScene.createNode("fieldValue");
fieldValue282.name = "translation";
fieldValue282.value = "0.167699992656708 0.833599984645844 0.0303000006824732";
ProtoInstance280.fieldValue[1] = fieldValue282;

fieldValue270.children[3] = ProtoInstance280;

let ProtoInstance283 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance283.name = "Site";
ProtoInstance283.DEF = "hanim_r_asis_2";
let fieldValue284 = browser.currentScene.createNode("fieldValue");
fieldValue284.name = "name";
fieldValue284.value = "r_asis";
ProtoInstance283.fieldValue = new MFNode();

ProtoInstance283.fieldValue[0] = fieldValue284;

let fieldValue285 = browser.currentScene.createNode("fieldValue");
fieldValue285.name = "translation";
fieldValue285.value = "-0.088699996471405 1.00209999084473 0.111199997365475";
ProtoInstance283.fieldValue[1] = fieldValue285;

fieldValue270.children[4] = ProtoInstance283;

let ProtoInstance286 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance286.name = "Site";
ProtoInstance286.DEF = "hanim_l_asis_2";
let fieldValue287 = browser.currentScene.createNode("fieldValue");
fieldValue287.name = "name";
fieldValue287.value = "l_asis";
ProtoInstance286.fieldValue = new MFNode();

ProtoInstance286.fieldValue[0] = fieldValue287;

let fieldValue288 = browser.currentScene.createNode("fieldValue");
fieldValue288.name = "translation";
fieldValue288.value = "0.0925000011920929 0.998300015926361 0.105200000107288";
ProtoInstance286.fieldValue[1] = fieldValue288;

fieldValue270.children[5] = ProtoInstance286;

let ProtoInstance289 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance289.name = "Site";
ProtoInstance289.DEF = "hanim_r_psis_2";
let fieldValue290 = browser.currentScene.createNode("fieldValue");
fieldValue290.name = "name";
fieldValue290.value = "r_psis";
ProtoInstance289.fieldValue = new MFNode();

ProtoInstance289.fieldValue[0] = fieldValue290;

let fieldValue291 = browser.currentScene.createNode("fieldValue");
fieldValue291.name = "translation";
fieldValue291.value = "-0.0715999975800514 1.01900005340576 -0.113799996674061";
ProtoInstance289.fieldValue[1] = fieldValue291;

fieldValue270.children[6] = ProtoInstance289;

let ProtoInstance292 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance292.name = "Site";
ProtoInstance292.DEF = "hanim_l_psis_2";
let fieldValue293 = browser.currentScene.createNode("fieldValue");
fieldValue293.name = "name";
fieldValue293.value = "l_psis";
ProtoInstance292.fieldValue = new MFNode();

ProtoInstance292.fieldValue[0] = fieldValue293;

let fieldValue294 = browser.currentScene.createNode("fieldValue");
fieldValue294.name = "translation";
fieldValue294.value = "0.0773999989032745 1.01900005340576 -0.115099996328354";
ProtoInstance292.fieldValue[1] = fieldValue294;

fieldValue270.children[7] = ProtoInstance292;

let ProtoInstance295 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance295.name = "Site";
ProtoInstance295.DEF = "hanim_crotch_2";
let fieldValue296 = browser.currentScene.createNode("fieldValue");
fieldValue296.name = "name";
fieldValue296.value = "crotch";
ProtoInstance295.fieldValue = new MFNode();

ProtoInstance295.fieldValue[0] = fieldValue296;

let fieldValue297 = browser.currentScene.createNode("fieldValue");
fieldValue297.name = "translation";
fieldValue297.value = "0.00340000004507601 0.826600015163422 0.0256999991834164";
ProtoInstance295.fieldValue[1] = fieldValue297;

fieldValue270.children[8] = ProtoInstance295;

ProtoInstance268.fieldValue[1] = fieldValue270;

fieldValue109.children[2] = ProtoInstance268;

ProtoInstance105.fieldValue[3] = fieldValue109;

fieldValue104.children = new MFNode();

fieldValue104.children[0] = ProtoInstance105;

let ProtoInstance298 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance298.name = "Joint";
ProtoInstance298.DEF = "hanim_vl5_2";
let fieldValue299 = browser.currentScene.createNode("fieldValue");
fieldValue299.name = "stiffness";
fieldValue299.value = "1 1 1";
ProtoInstance298.fieldValue = new MFNode();

ProtoInstance298.fieldValue[0] = fieldValue299;

let fieldValue300 = browser.currentScene.createNode("fieldValue");
fieldValue300.name = "name";
fieldValue300.value = "vl5";
ProtoInstance298.fieldValue[1] = fieldValue300;

let fieldValue301 = browser.currentScene.createNode("fieldValue");
fieldValue301.name = "center";
fieldValue301.value = "0.00279999990016222 1.05680000782013 -0.0776000022888184";
ProtoInstance298.fieldValue[2] = fieldValue301;

let fieldValue302 = browser.currentScene.createNode("fieldValue");
fieldValue302.name = "children";
let ProtoInstance303 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance303.name = "Joint";
ProtoInstance303.DEF = "hanim_vl3_2";
let fieldValue304 = browser.currentScene.createNode("fieldValue");
fieldValue304.name = "stiffness";
fieldValue304.value = "1 1 1";
ProtoInstance303.fieldValue = new MFNode();

ProtoInstance303.fieldValue[0] = fieldValue304;

let fieldValue305 = browser.currentScene.createNode("fieldValue");
fieldValue305.name = "name";
fieldValue305.value = "vl3";
ProtoInstance303.fieldValue[1] = fieldValue305;

let fieldValue306 = browser.currentScene.createNode("fieldValue");
fieldValue306.name = "center";
fieldValue306.value = "0.00410000002011657 1.1275999546051 -0.0795999988913536";
ProtoInstance303.fieldValue[2] = fieldValue306;

let fieldValue307 = browser.currentScene.createNode("fieldValue");
fieldValue307.name = "children";
let ProtoInstance308 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance308.name = "Joint";
ProtoInstance308.DEF = "hanim_vl1_2";
let fieldValue309 = browser.currentScene.createNode("fieldValue");
fieldValue309.name = "stiffness";
fieldValue309.value = "1 1 1";
ProtoInstance308.fieldValue = new MFNode();

ProtoInstance308.fieldValue[0] = fieldValue309;

let fieldValue310 = browser.currentScene.createNode("fieldValue");
fieldValue310.name = "name";
fieldValue310.value = "vl1";
ProtoInstance308.fieldValue[1] = fieldValue310;

let fieldValue311 = browser.currentScene.createNode("fieldValue");
fieldValue311.name = "center";
fieldValue311.value = "0.00480000022798777 1.19120001792908 -0.0804999992251396";
ProtoInstance308.fieldValue[2] = fieldValue311;

let fieldValue312 = browser.currentScene.createNode("fieldValue");
fieldValue312.name = "children";
let ProtoInstance313 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance313.name = "Joint";
ProtoInstance313.DEF = "hanim_vt10_2";
let fieldValue314 = browser.currentScene.createNode("fieldValue");
fieldValue314.name = "stiffness";
fieldValue314.value = "1 1 1";
ProtoInstance313.fieldValue = new MFNode();

ProtoInstance313.fieldValue[0] = fieldValue314;

let fieldValue315 = browser.currentScene.createNode("fieldValue");
fieldValue315.name = "name";
fieldValue315.value = "vt10";
ProtoInstance313.fieldValue[1] = fieldValue315;

let fieldValue316 = browser.currentScene.createNode("fieldValue");
fieldValue316.name = "center";
fieldValue316.value = "0.00559999980032444 1.28480005264282 -0.0821999981999397";
ProtoInstance313.fieldValue[2] = fieldValue316;

let fieldValue317 = browser.currentScene.createNode("fieldValue");
fieldValue317.name = "children";
let ProtoInstance318 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance318.name = "Joint";
ProtoInstance318.DEF = "hanim_vt6_2";
let fieldValue319 = browser.currentScene.createNode("fieldValue");
fieldValue319.name = "stiffness";
fieldValue319.value = "1 1 1";
ProtoInstance318.fieldValue = new MFNode();

ProtoInstance318.fieldValue[0] = fieldValue319;

let fieldValue320 = browser.currentScene.createNode("fieldValue");
fieldValue320.name = "name";
fieldValue320.value = "vt6";
ProtoInstance318.fieldValue[1] = fieldValue320;

let fieldValue321 = browser.currentScene.createNode("fieldValue");
fieldValue321.name = "center";
fieldValue321.value = "0.0059000002220273 1.38660001754761 -0.0799999982118607";
ProtoInstance318.fieldValue[2] = fieldValue321;

let fieldValue322 = browser.currentScene.createNode("fieldValue");
fieldValue322.name = "children";
let ProtoInstance323 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance323.name = "Joint";
ProtoInstance323.DEF = "hanim_vt1_2";
let fieldValue324 = browser.currentScene.createNode("fieldValue");
fieldValue324.name = "stiffness";
fieldValue324.value = "1 1 1";
ProtoInstance323.fieldValue = new MFNode();

ProtoInstance323.fieldValue[0] = fieldValue324;

let fieldValue325 = browser.currentScene.createNode("fieldValue");
fieldValue325.name = "name";
fieldValue325.value = "vt1";
ProtoInstance323.fieldValue[1] = fieldValue325;

let fieldValue326 = browser.currentScene.createNode("fieldValue");
fieldValue326.name = "center";
fieldValue326.value = "0.00650000013411045 1.4951000213623 -0.0386999994516373";
ProtoInstance323.fieldValue[2] = fieldValue326;

let fieldValue327 = browser.currentScene.createNode("fieldValue");
fieldValue327.name = "children";
let ProtoInstance328 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance328.name = "Joint";
ProtoInstance328.DEF = "hanim_vc4_2";
let fieldValue329 = browser.currentScene.createNode("fieldValue");
fieldValue329.name = "stiffness";
fieldValue329.value = "1 1 1";
ProtoInstance328.fieldValue = new MFNode();

ProtoInstance328.fieldValue[0] = fieldValue329;

let fieldValue330 = browser.currentScene.createNode("fieldValue");
fieldValue330.name = "name";
fieldValue330.value = "vc4";
ProtoInstance328.fieldValue[1] = fieldValue330;

let fieldValue331 = browser.currentScene.createNode("fieldValue");
fieldValue331.name = "center";
fieldValue331.value = "0.00659999996423721 1.56620001792908 -0.00839999970048666";
ProtoInstance328.fieldValue[2] = fieldValue331;

let fieldValue332 = browser.currentScene.createNode("fieldValue");
fieldValue332.name = "children";
let ProtoInstance333 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance333.name = "Joint";
ProtoInstance333.DEF = "hanim_vc2_2";
let fieldValue334 = browser.currentScene.createNode("fieldValue");
fieldValue334.name = "stiffness";
fieldValue334.value = "1 1 1";
ProtoInstance333.fieldValue = new MFNode();

ProtoInstance333.fieldValue[0] = fieldValue334;

let fieldValue335 = browser.currentScene.createNode("fieldValue");
fieldValue335.name = "name";
fieldValue335.value = "vc2";
ProtoInstance333.fieldValue[1] = fieldValue335;

let fieldValue336 = browser.currentScene.createNode("fieldValue");
fieldValue336.name = "center";
fieldValue336.value = "0.00659999996423721 1.59280002117157 -0.0103000001981854";
ProtoInstance333.fieldValue[2] = fieldValue336;

let fieldValue337 = browser.currentScene.createNode("fieldValue");
fieldValue337.name = "children";
let ProtoInstance338 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance338.name = "Joint";
ProtoInstance338.DEF = "hanim_skullbase_2";
let fieldValue339 = browser.currentScene.createNode("fieldValue");
fieldValue339.name = "stiffness";
fieldValue339.value = "1 1 1";
ProtoInstance338.fieldValue = new MFNode();

ProtoInstance338.fieldValue[0] = fieldValue339;

let fieldValue340 = browser.currentScene.createNode("fieldValue");
fieldValue340.name = "name";
fieldValue340.value = "skullbase";
ProtoInstance338.fieldValue[1] = fieldValue340;

let fieldValue341 = browser.currentScene.createNode("fieldValue");
fieldValue341.name = "center";
fieldValue341.value = "0.00439999997615814 1.62090003490448 0.0236000008881092";
ProtoInstance338.fieldValue[2] = fieldValue341;

let fieldValue342 = browser.currentScene.createNode("fieldValue");
fieldValue342.name = "children";
let ProtoInstance343 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance343.name = "Segment";
ProtoInstance343.DEF = "hanim_skull_2";
let fieldValue344 = browser.currentScene.createNode("fieldValue");
fieldValue344.name = "name";
fieldValue344.value = "skull";
ProtoInstance343.fieldValue = new MFNode();

ProtoInstance343.fieldValue[0] = fieldValue344;

let fieldValue345 = browser.currentScene.createNode("fieldValue");
fieldValue345.name = "children";
let ProtoInstance346 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance346.name = "Site";
ProtoInstance346.DEF = "hanim_skull_tip_2";
let fieldValue347 = browser.currentScene.createNode("fieldValue");
fieldValue347.name = "name";
fieldValue347.value = "skull_tip";
ProtoInstance346.fieldValue = new MFNode();

ProtoInstance346.fieldValue[0] = fieldValue347;

let fieldValue348 = browser.currentScene.createNode("fieldValue");
fieldValue348.name = "translation";
fieldValue348.value = "0.00499999988824129 1.75039994716644 0.00549999997019768";
ProtoInstance346.fieldValue[1] = fieldValue348;

fieldValue345.children = new MFNode();

fieldValue345.children[0] = ProtoInstance346;

let ProtoInstance349 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance349.name = "Site";
ProtoInstance349.DEF = "hanim_sellion_2";
let fieldValue350 = browser.currentScene.createNode("fieldValue");
fieldValue350.name = "name";
fieldValue350.value = "sellion";
ProtoInstance349.fieldValue = new MFNode();

ProtoInstance349.fieldValue[0] = fieldValue350;

let fieldValue351 = browser.currentScene.createNode("fieldValue");
fieldValue351.name = "translation";
fieldValue351.value = "0.00579999992623925 1.63160002231598 0.0851999968290329";
ProtoInstance349.fieldValue[1] = fieldValue351;

fieldValue345.children[1] = ProtoInstance349;

let ProtoInstance352 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance352.name = "Site";
ProtoInstance352.DEF = "hanim_r_infraorbitale_2";
let fieldValue353 = browser.currentScene.createNode("fieldValue");
fieldValue353.name = "name";
fieldValue353.value = "r_infraorbitale";
ProtoInstance352.fieldValue = new MFNode();

ProtoInstance352.fieldValue[0] = fieldValue353;

let fieldValue354 = browser.currentScene.createNode("fieldValue");
fieldValue354.name = "translation";
fieldValue354.value = "-0.023700000718236 1.61710000038147 0.0751999989151955";
ProtoInstance352.fieldValue[1] = fieldValue354;

fieldValue345.children[2] = ProtoInstance352;

let ProtoInstance355 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance355.name = "Site";
ProtoInstance355.DEF = "hanim_l_infraorbitale_2";
let fieldValue356 = browser.currentScene.createNode("fieldValue");
fieldValue356.name = "name";
fieldValue356.value = "l_infraorbitale";
ProtoInstance355.fieldValue = new MFNode();

ProtoInstance355.fieldValue[0] = fieldValue356;

let fieldValue357 = browser.currentScene.createNode("fieldValue");
fieldValue357.name = "translation";
fieldValue357.value = "0.0340999998152256 1.61710000038147 0.0751999989151955";
ProtoInstance355.fieldValue[1] = fieldValue357;

fieldValue345.children[3] = ProtoInstance355;

let ProtoInstance358 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance358.name = "Site";
ProtoInstance358.DEF = "hanim_supramenton_2";
let fieldValue359 = browser.currentScene.createNode("fieldValue");
fieldValue359.name = "name";
fieldValue359.value = "supramenton";
ProtoInstance358.fieldValue = new MFNode();

ProtoInstance358.fieldValue[0] = fieldValue359;

let fieldValue360 = browser.currentScene.createNode("fieldValue");
fieldValue360.name = "translation";
fieldValue360.value = "0.00609999988228083 1.54100000858307 0.0804999992251396";
ProtoInstance358.fieldValue[1] = fieldValue360;

fieldValue345.children[4] = ProtoInstance358;

let ProtoInstance361 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance361.name = "Site";
ProtoInstance361.DEF = "hanim_r_tragion_2";
let fieldValue362 = browser.currentScene.createNode("fieldValue");
fieldValue362.name = "name";
fieldValue362.value = "r_tragion";
ProtoInstance361.fieldValue = new MFNode();

ProtoInstance361.fieldValue[0] = fieldValue362;

let fieldValue363 = browser.currentScene.createNode("fieldValue");
fieldValue363.name = "translation";
fieldValue363.value = "-0.0645999982953072 1.63469994068146 0.0302000008523464";
ProtoInstance361.fieldValue[1] = fieldValue363;

fieldValue345.children[5] = ProtoInstance361;

let ProtoInstance364 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance364.name = "Site";
ProtoInstance364.DEF = "hanim_r_gonion_2";
let fieldValue365 = browser.currentScene.createNode("fieldValue");
fieldValue365.name = "name";
fieldValue365.value = "r_gonion";
ProtoInstance364.fieldValue = new MFNode();

ProtoInstance364.fieldValue[0] = fieldValue365;

let fieldValue366 = browser.currentScene.createNode("fieldValue");
fieldValue366.name = "translation";
fieldValue366.value = "-0.0520000010728836 1.55289995670319 0.0346999987959862";
ProtoInstance364.fieldValue[1] = fieldValue366;

fieldValue345.children[6] = ProtoInstance364;

let ProtoInstance367 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance367.name = "Site";
ProtoInstance367.DEF = "hanim_l_tragion_2";
let fieldValue368 = browser.currentScene.createNode("fieldValue");
fieldValue368.name = "name";
fieldValue368.value = "l_tragion";
ProtoInstance367.fieldValue = new MFNode();

ProtoInstance367.fieldValue[0] = fieldValue368;

let fieldValue369 = browser.currentScene.createNode("fieldValue");
fieldValue369.name = "translation";
fieldValue369.value = "0.0738999992609024 1.63479995727539 0.0282000005245209";
ProtoInstance367.fieldValue[1] = fieldValue369;

fieldValue345.children[7] = ProtoInstance367;

let ProtoInstance370 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance370.name = "Site";
ProtoInstance370.DEF = "hanim_l_gonion_2";
let fieldValue371 = browser.currentScene.createNode("fieldValue");
fieldValue371.name = "name";
fieldValue371.value = "l_gonion";
ProtoInstance370.fieldValue = new MFNode();

ProtoInstance370.fieldValue[0] = fieldValue371;

let fieldValue372 = browser.currentScene.createNode("fieldValue");
fieldValue372.name = "translation";
fieldValue372.value = "0.0631000027060509 1.55299997329712 0.0329999998211861";
ProtoInstance370.fieldValue[1] = fieldValue372;

fieldValue345.children[8] = ProtoInstance370;

let ProtoInstance373 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance373.name = "Site";
ProtoInstance373.DEF = "hanim_nuchale_2";
let fieldValue374 = browser.currentScene.createNode("fieldValue");
fieldValue374.name = "name";
fieldValue374.value = "nuchale";
ProtoInstance373.fieldValue = new MFNode();

ProtoInstance373.fieldValue[0] = fieldValue374;

let fieldValue375 = browser.currentScene.createNode("fieldValue");
fieldValue375.name = "translation";
fieldValue375.value = "0.00389999989420176 1.59720003604889 -0.0795999988913536";
ProtoInstance373.fieldValue[1] = fieldValue375;

fieldValue345.children[9] = ProtoInstance373;

ProtoInstance343.fieldValue[1] = fieldValue345;

fieldValue342.children = new MFNode();

fieldValue342.children[0] = ProtoInstance343;

ProtoInstance338.fieldValue[3] = fieldValue342;

fieldValue337.children = new MFNode();

fieldValue337.children[0] = ProtoInstance338;

let ProtoInstance376 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance376.name = "Segment";
ProtoInstance376.DEF = "hanim_c2_2";
let fieldValue377 = browser.currentScene.createNode("fieldValue");
fieldValue377.name = "name";
fieldValue377.value = "c2";
ProtoInstance376.fieldValue = new MFNode();

ProtoInstance376.fieldValue[0] = fieldValue377;

fieldValue337.children[1] = ProtoInstance376;

ProtoInstance333.fieldValue[3] = fieldValue337;

fieldValue332.children = new MFNode();

fieldValue332.children[0] = ProtoInstance333;

let ProtoInstance378 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance378.name = "Segment";
ProtoInstance378.DEF = "hanim_c4_2";
let fieldValue379 = browser.currentScene.createNode("fieldValue");
fieldValue379.name = "name";
fieldValue379.value = "c4";
ProtoInstance378.fieldValue = new MFNode();

ProtoInstance378.fieldValue[0] = fieldValue379;

fieldValue332.children[1] = ProtoInstance378;

ProtoInstance328.fieldValue[3] = fieldValue332;

fieldValue327.children = new MFNode();

fieldValue327.children[0] = ProtoInstance328;

let ProtoInstance380 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance380.name = "Joint";
ProtoInstance380.DEF = "hanim_l_sternoclavicular_2";
let fieldValue381 = browser.currentScene.createNode("fieldValue");
fieldValue381.name = "stiffness";
fieldValue381.value = "1 1 1";
ProtoInstance380.fieldValue = new MFNode();

ProtoInstance380.fieldValue[0] = fieldValue381;

let fieldValue382 = browser.currentScene.createNode("fieldValue");
fieldValue382.name = "name";
fieldValue382.value = "l_sternoclavicular";
ProtoInstance380.fieldValue[1] = fieldValue382;

let fieldValue383 = browser.currentScene.createNode("fieldValue");
fieldValue383.name = "center";
fieldValue383.value = "0.0820000022649765 1.44879996776581 -0.035300001502037";
ProtoInstance380.fieldValue[2] = fieldValue383;

let fieldValue384 = browser.currentScene.createNode("fieldValue");
fieldValue384.name = "children";
let ProtoInstance385 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance385.name = "Joint";
ProtoInstance385.DEF = "hanim_l_acromioclavicular_2";
let fieldValue386 = browser.currentScene.createNode("fieldValue");
fieldValue386.name = "stiffness";
fieldValue386.value = "1 1 1";
ProtoInstance385.fieldValue = new MFNode();

ProtoInstance385.fieldValue[0] = fieldValue386;

let fieldValue387 = browser.currentScene.createNode("fieldValue");
fieldValue387.name = "name";
fieldValue387.value = "l_acromioclavicular";
ProtoInstance385.fieldValue[1] = fieldValue387;

let fieldValue388 = browser.currentScene.createNode("fieldValue");
fieldValue388.name = "center";
fieldValue388.value = "0.0961999967694283 1.42690002918243 -0.0423999987542629";
ProtoInstance385.fieldValue[2] = fieldValue388;

let fieldValue389 = browser.currentScene.createNode("fieldValue");
fieldValue389.name = "children";
let ProtoInstance390 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance390.name = "Joint";
ProtoInstance390.DEF = "hanim_l_shoulder_2";
let fieldValue391 = browser.currentScene.createNode("fieldValue");
fieldValue391.name = "stiffness";
fieldValue391.value = "1 1 1";
ProtoInstance390.fieldValue = new MFNode();

ProtoInstance390.fieldValue[0] = fieldValue391;

let fieldValue392 = browser.currentScene.createNode("fieldValue");
fieldValue392.name = "name";
fieldValue392.value = "l_shoulder";
ProtoInstance390.fieldValue[1] = fieldValue392;

let fieldValue393 = browser.currentScene.createNode("fieldValue");
fieldValue393.name = "center";
fieldValue393.value = "0.202900007367134 1.43760001659393 -0.0386999994516373";
ProtoInstance390.fieldValue[2] = fieldValue393;

let fieldValue394 = browser.currentScene.createNode("fieldValue");
fieldValue394.name = "children";
let ProtoInstance395 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance395.name = "Joint";
ProtoInstance395.DEF = "hanim_l_elbow_2";
let fieldValue396 = browser.currentScene.createNode("fieldValue");
fieldValue396.name = "stiffness";
fieldValue396.value = "1 1 1";
ProtoInstance395.fieldValue = new MFNode();

ProtoInstance395.fieldValue[0] = fieldValue396;

let fieldValue397 = browser.currentScene.createNode("fieldValue");
fieldValue397.name = "name";
fieldValue397.value = "l_elbow";
ProtoInstance395.fieldValue[1] = fieldValue397;

let fieldValue398 = browser.currentScene.createNode("fieldValue");
fieldValue398.name = "center";
fieldValue398.value = "0.201399996876717 1.1356999874115 -0.0681999996304512";
ProtoInstance395.fieldValue[2] = fieldValue398;

let fieldValue399 = browser.currentScene.createNode("fieldValue");
fieldValue399.name = "children";
let ProtoInstance400 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance400.name = "Joint";
ProtoInstance400.DEF = "hanim_l_radiocarpal_2";
let fieldValue401 = browser.currentScene.createNode("fieldValue");
fieldValue401.name = "stiffness";
fieldValue401.value = "1 1 1";
ProtoInstance400.fieldValue = new MFNode();

ProtoInstance400.fieldValue[0] = fieldValue401;

let fieldValue402 = browser.currentScene.createNode("fieldValue");
fieldValue402.name = "name";
fieldValue402.value = "l_radiocarpal";
ProtoInstance400.fieldValue[1] = fieldValue402;

let fieldValue403 = browser.currentScene.createNode("fieldValue");
fieldValue403.name = "center";
fieldValue403.value = "0.198400005698204 0.866299986839294 -0.0582999996840954";
ProtoInstance400.fieldValue[2] = fieldValue403;

let fieldValue404 = browser.currentScene.createNode("fieldValue");
fieldValue404.name = "children";
let ProtoInstance405 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance405.name = "Joint";
ProtoInstance405.DEF = "hanim_l_carpometacarpal2";
let fieldValue406 = browser.currentScene.createNode("fieldValue");
fieldValue406.name = "stiffness";
fieldValue406.value = "1 1 1";
ProtoInstance405.fieldValue = new MFNode();

ProtoInstance405.fieldValue[0] = fieldValue406;

let fieldValue407 = browser.currentScene.createNode("fieldValue");
fieldValue407.name = "name";
fieldValue407.value = "l_carpometacarpal_1";
ProtoInstance405.fieldValue[1] = fieldValue407;

let fieldValue408 = browser.currentScene.createNode("fieldValue");
fieldValue408.name = "center";
fieldValue408.value = "0.192399993538857 0.847199976444244 -0.0533999986946583";
ProtoInstance405.fieldValue[2] = fieldValue408;

let fieldValue409 = browser.currentScene.createNode("fieldValue");
fieldValue409.name = "children";
let ProtoInstance410 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance410.name = "Joint";
ProtoInstance410.DEF = "hanim_l_metacarpophalangeal2";
let fieldValue411 = browser.currentScene.createNode("fieldValue");
fieldValue411.name = "stiffness";
fieldValue411.value = "1 1 1";
ProtoInstance410.fieldValue = new MFNode();

ProtoInstance410.fieldValue[0] = fieldValue411;

let fieldValue412 = browser.currentScene.createNode("fieldValue");
fieldValue412.name = "name";
fieldValue412.value = "l_metacarpophalangeal_1";
ProtoInstance410.fieldValue[1] = fieldValue412;

let fieldValue413 = browser.currentScene.createNode("fieldValue");
fieldValue413.name = "center";
fieldValue413.value = "0.195099994540215 0.82260000705719 0.0245999991893768";
ProtoInstance410.fieldValue[2] = fieldValue413;

let fieldValue414 = browser.currentScene.createNode("fieldValue");
fieldValue414.name = "children";
let ProtoInstance415 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance415.name = "Joint";
ProtoInstance415.DEF = "hanim_l_carpal_interphalangeal2";
let fieldValue416 = browser.currentScene.createNode("fieldValue");
fieldValue416.name = "stiffness";
fieldValue416.value = "1 1 1";
ProtoInstance415.fieldValue = new MFNode();

ProtoInstance415.fieldValue[0] = fieldValue416;

let fieldValue417 = browser.currentScene.createNode("fieldValue");
fieldValue417.name = "name";
fieldValue417.value = "l_carpal_interphalangeal_1";
ProtoInstance415.fieldValue[1] = fieldValue417;

let fieldValue418 = browser.currentScene.createNode("fieldValue");
fieldValue418.name = "center";
fieldValue418.value = "0.195500001311302 0.815900027751923 0.046399999409914";
ProtoInstance415.fieldValue[2] = fieldValue418;

let fieldValue419 = browser.currentScene.createNode("fieldValue");
fieldValue419.name = "children";
let ProtoInstance420 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance420.name = "Segment";
ProtoInstance420.DEF = "hanim_l_carpal_distal_phalanx2";
let fieldValue421 = browser.currentScene.createNode("fieldValue");
fieldValue421.name = "name";
fieldValue421.value = "l_carpal_distal_phalanx_1";
ProtoInstance420.fieldValue = new MFNode();

ProtoInstance420.fieldValue[0] = fieldValue421;

let fieldValue422 = browser.currentScene.createNode("fieldValue");
fieldValue422.name = "children";
let ProtoInstance423 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance423.name = "Site";
ProtoInstance423.DEF = "hanim_l_carpal_distal_phalanx_1_tip_2";
let fieldValue424 = browser.currentScene.createNode("fieldValue");
fieldValue424.name = "name";
fieldValue424.value = "l_carpal_distal_phalanx_1_tip";
ProtoInstance423.fieldValue = new MFNode();

ProtoInstance423.fieldValue[0] = fieldValue424;

let fieldValue425 = browser.currentScene.createNode("fieldValue");
fieldValue425.name = "translation";
fieldValue425.value = "0.19820000231266 0.806100010871887 0.0759000033140183";
ProtoInstance423.fieldValue[1] = fieldValue425;

fieldValue422.children = new MFNode();

fieldValue422.children[0] = ProtoInstance423;

ProtoInstance420.fieldValue[1] = fieldValue422;

fieldValue419.children = new MFNode();

fieldValue419.children[0] = ProtoInstance420;

ProtoInstance415.fieldValue[3] = fieldValue419;

fieldValue414.children = new MFNode();

fieldValue414.children[0] = ProtoInstance415;

let ProtoInstance426 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance426.name = "Segment";
ProtoInstance426.DEF = "hanim_l_index_proximal_2";
let fieldValue427 = browser.currentScene.createNode("fieldValue");
fieldValue427.name = "name";
fieldValue427.value = "l_index_proximal";
ProtoInstance426.fieldValue = new MFNode();

ProtoInstance426.fieldValue[0] = fieldValue427;

fieldValue414.children[1] = ProtoInstance426;

ProtoInstance410.fieldValue[3] = fieldValue414;

fieldValue409.children = new MFNode();

fieldValue409.children[0] = ProtoInstance410;

let ProtoInstance428 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance428.name = "Segment";
ProtoInstance428.DEF = "hanim_l_index_proximal_4";
let fieldValue429 = browser.currentScene.createNode("fieldValue");
fieldValue429.name = "name";
fieldValue429.value = "l_index_proximal";
ProtoInstance428.fieldValue = new MFNode();

ProtoInstance428.fieldValue[0] = fieldValue429;

fieldValue409.children[1] = ProtoInstance428;

ProtoInstance405.fieldValue[3] = fieldValue409;

fieldValue404.children = new MFNode();

fieldValue404.children[0] = ProtoInstance405;

let ProtoInstance430 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance430.name = "Joint";
ProtoInstance430.DEF = "hanim_l_carpometacarpal3";
let fieldValue431 = browser.currentScene.createNode("fieldValue");
fieldValue431.name = "stiffness";
fieldValue431.value = "1 1 1";
ProtoInstance430.fieldValue = new MFNode();

ProtoInstance430.fieldValue[0] = fieldValue431;

let fieldValue432 = browser.currentScene.createNode("fieldValue");
fieldValue432.name = "name";
fieldValue432.value = "l_carpometacarpal_2";
ProtoInstance430.fieldValue[1] = fieldValue432;

let fieldValue433 = browser.currentScene.createNode("fieldValue");
fieldValue433.name = "center";
fieldValue433.value = "0.198300004005432 0.80239999294281 -0.0280000008642673";
ProtoInstance430.fieldValue[2] = fieldValue433;

let fieldValue434 = browser.currentScene.createNode("fieldValue");
fieldValue434.name = "children";
let ProtoInstance435 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance435.name = "Joint";
ProtoInstance435.DEF = "hanim_l_metacarpophalangeal3";
let fieldValue436 = browser.currentScene.createNode("fieldValue");
fieldValue436.name = "stiffness";
fieldValue436.value = "1 1 1";
ProtoInstance435.fieldValue = new MFNode();

ProtoInstance435.fieldValue[0] = fieldValue436;

let fieldValue437 = browser.currentScene.createNode("fieldValue");
fieldValue437.name = "name";
fieldValue437.value = "l_metacarpophalangeal_2";
ProtoInstance435.fieldValue[1] = fieldValue437;

let fieldValue438 = browser.currentScene.createNode("fieldValue");
fieldValue438.name = "center";
fieldValue438.value = "0.198300004005432 0.781499981880188 -0.0280000008642673";
ProtoInstance435.fieldValue[2] = fieldValue438;

let fieldValue439 = browser.currentScene.createNode("fieldValue");
fieldValue439.name = "children";
let ProtoInstance440 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance440.name = "Joint";
ProtoInstance440.DEF = "hanim_l_carpal_proximal_interphalangeal3";
let fieldValue441 = browser.currentScene.createNode("fieldValue");
fieldValue441.name = "stiffness";
fieldValue441.value = "1 1 1";
ProtoInstance440.fieldValue = new MFNode();

ProtoInstance440.fieldValue[0] = fieldValue441;

let fieldValue442 = browser.currentScene.createNode("fieldValue");
fieldValue442.name = "name";
fieldValue442.value = "l_carpal_proximal_interphalangeal_2";
ProtoInstance440.fieldValue[1] = fieldValue442;

let fieldValue443 = browser.currentScene.createNode("fieldValue");
fieldValue443.name = "center";
fieldValue443.value = "0.201700001955032 0.736299991607666 -0.0248000007122755";
ProtoInstance440.fieldValue[2] = fieldValue443;

let fieldValue444 = browser.currentScene.createNode("fieldValue");
fieldValue444.name = "children";
let ProtoInstance445 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance445.name = "Joint";
ProtoInstance445.DEF = "hanim_l_carpal_distal_interphalangeal3";
let fieldValue446 = browser.currentScene.createNode("fieldValue");
fieldValue446.name = "stiffness";
fieldValue446.value = "1 1 1";
ProtoInstance445.fieldValue = new MFNode();

ProtoInstance445.fieldValue[0] = fieldValue446;

let fieldValue447 = browser.currentScene.createNode("fieldValue");
fieldValue447.name = "name";
fieldValue447.value = "l_carpal_distal_interphalangeal_2";
ProtoInstance445.fieldValue[1] = fieldValue447;

let fieldValue448 = browser.currentScene.createNode("fieldValue");
fieldValue448.name = "center";
fieldValue448.value = "0.202800005674362 0.713900029659271 -0.0236000008881092";
ProtoInstance445.fieldValue[2] = fieldValue448;

let fieldValue449 = browser.currentScene.createNode("fieldValue");
fieldValue449.name = "children";
let ProtoInstance450 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance450.name = "Segment";
ProtoInstance450.DEF = "hanim_l_carpal_distal_phalanx3";
let fieldValue451 = browser.currentScene.createNode("fieldValue");
fieldValue451.name = "name";
fieldValue451.value = "l_carpal_distal_phalanx_2";
ProtoInstance450.fieldValue = new MFNode();

ProtoInstance450.fieldValue[0] = fieldValue451;

let fieldValue452 = browser.currentScene.createNode("fieldValue");
fieldValue452.name = "children";
let ProtoInstance453 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance453.name = "Site";
ProtoInstance453.DEF = "hanim_l_carpal_distal_phalanx_2_tip_2";
let fieldValue454 = browser.currentScene.createNode("fieldValue");
fieldValue454.name = "name";
fieldValue454.value = "l_carpal_distal_phalanx_2_tip";
ProtoInstance453.fieldValue = new MFNode();

ProtoInstance453.fieldValue[0] = fieldValue454;

let fieldValue455 = browser.currentScene.createNode("fieldValue");
fieldValue455.name = "translation";
fieldValue455.value = "0.20890000462532 0.685800015926361 -0.0244999993592501";
ProtoInstance453.fieldValue[1] = fieldValue455;

fieldValue452.children = new MFNode();

fieldValue452.children[0] = ProtoInstance453;

let ProtoInstance456 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance456.name = "Site";
ProtoInstance456.DEF = "hanim_l_dactylion_2";
let fieldValue457 = browser.currentScene.createNode("fieldValue");
fieldValue457.name = "name";
fieldValue457.value = "l_dactylion";
ProtoInstance456.fieldValue = new MFNode();

ProtoInstance456.fieldValue[0] = fieldValue457;

let fieldValue458 = browser.currentScene.createNode("fieldValue");
fieldValue458.name = "translation";
fieldValue458.value = "0.205599993467331 0.674300014972687 -0.048200000077486";
ProtoInstance456.fieldValue[1] = fieldValue458;

fieldValue452.children[1] = ProtoInstance456;

ProtoInstance450.fieldValue[1] = fieldValue452;

fieldValue449.children = new MFNode();

fieldValue449.children[0] = ProtoInstance450;

ProtoInstance445.fieldValue[3] = fieldValue449;

fieldValue444.children = new MFNode();

fieldValue444.children[0] = ProtoInstance445;

let ProtoInstance459 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance459.name = "Segment";
ProtoInstance459.DEF = "hanim_l_index_middle_2";
let fieldValue460 = browser.currentScene.createNode("fieldValue");
fieldValue460.name = "name";
fieldValue460.value = "l_index_middle";
ProtoInstance459.fieldValue = new MFNode();

ProtoInstance459.fieldValue[0] = fieldValue460;

fieldValue444.children[1] = ProtoInstance459;

ProtoInstance440.fieldValue[3] = fieldValue444;

fieldValue439.children = new MFNode();

fieldValue439.children[0] = ProtoInstance440;

let ProtoInstance461 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance461.name = "Segment";
ProtoInstance461.DEF = "hanim_l_index_proximal_6";
let fieldValue462 = browser.currentScene.createNode("fieldValue");
fieldValue462.name = "name";
fieldValue462.value = "l_index_proximal";
ProtoInstance461.fieldValue = new MFNode();

ProtoInstance461.fieldValue[0] = fieldValue462;

fieldValue439.children[1] = ProtoInstance461;

ProtoInstance435.fieldValue[3] = fieldValue439;

fieldValue434.children = new MFNode();

fieldValue434.children[0] = ProtoInstance435;

let ProtoInstance463 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance463.name = "Segment";
ProtoInstance463.DEF = "hanim_l_index_metacarpal_2";
let fieldValue464 = browser.currentScene.createNode("fieldValue");
fieldValue464.name = "name";
fieldValue464.value = "l_index_metacarpal";
ProtoInstance463.fieldValue = new MFNode();

ProtoInstance463.fieldValue[0] = fieldValue464;

fieldValue434.children[1] = ProtoInstance463;

ProtoInstance430.fieldValue[3] = fieldValue434;

fieldValue404.children[1] = ProtoInstance430;

let ProtoInstance465 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance465.name = "Joint";
ProtoInstance465.DEF = "hanim_l_carpometacarpal4";
let fieldValue466 = browser.currentScene.createNode("fieldValue");
fieldValue466.name = "stiffness";
fieldValue466.value = "1 1 1";
ProtoInstance465.fieldValue = new MFNode();

ProtoInstance465.fieldValue[0] = fieldValue466;

let fieldValue467 = browser.currentScene.createNode("fieldValue");
fieldValue467.name = "name";
fieldValue467.value = "l_carpometacarpal_3";
ProtoInstance465.fieldValue[1] = fieldValue467;

let fieldValue468 = browser.currentScene.createNode("fieldValue");
fieldValue468.name = "center";
fieldValue468.value = "0.198699995875359 0.802900016307831 -0.0529999993741512";
ProtoInstance465.fieldValue[2] = fieldValue468;

let fieldValue469 = browser.currentScene.createNode("fieldValue");
fieldValue469.name = "children";
let ProtoInstance470 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance470.name = "Joint";
ProtoInstance470.DEF = "hanim_l_metacarpophalangeal4";
let fieldValue471 = browser.currentScene.createNode("fieldValue");
fieldValue471.name = "stiffness";
fieldValue471.value = "1 1 1";
ProtoInstance470.fieldValue = new MFNode();

ProtoInstance470.fieldValue[0] = fieldValue471;

let fieldValue472 = browser.currentScene.createNode("fieldValue");
fieldValue472.name = "name";
fieldValue472.value = "l_metacarpophalangeal_3";
ProtoInstance470.fieldValue[1] = fieldValue472;

let fieldValue473 = browser.currentScene.createNode("fieldValue");
fieldValue473.name = "center";
fieldValue473.value = "0.198699995875359 0.781799972057343 -0.0529999993741512";
ProtoInstance470.fieldValue[2] = fieldValue473;

let fieldValue474 = browser.currentScene.createNode("fieldValue");
fieldValue474.name = "children";
let ProtoInstance475 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance475.name = "Joint";
ProtoInstance475.DEF = "hanim_l_carpal_proximal_interphalangeal4";
let fieldValue476 = browser.currentScene.createNode("fieldValue");
fieldValue476.name = "stiffness";
fieldValue476.value = "1 1 1";
ProtoInstance475.fieldValue = new MFNode();

ProtoInstance475.fieldValue[0] = fieldValue476;

let fieldValue477 = browser.currentScene.createNode("fieldValue");
fieldValue477.name = "name";
fieldValue477.value = "l_carpal_proximal_interphalangeal_3";
ProtoInstance475.fieldValue[1] = fieldValue477;

let fieldValue478 = browser.currentScene.createNode("fieldValue");
fieldValue478.name = "center";
fieldValue478.value = "0.201299995183945 0.727299988269806 -0.0502999983727932";
ProtoInstance475.fieldValue[2] = fieldValue478;

let fieldValue479 = browser.currentScene.createNode("fieldValue");
fieldValue479.name = "children";
let ProtoInstance480 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance480.name = "Joint";
ProtoInstance480.DEF = "hanim_l_carpal_distal_interphalangeal4";
let fieldValue481 = browser.currentScene.createNode("fieldValue");
fieldValue481.name = "stiffness";
fieldValue481.value = "1 1 1";
ProtoInstance480.fieldValue = new MFNode();

ProtoInstance480.fieldValue[0] = fieldValue481;

let fieldValue482 = browser.currentScene.createNode("fieldValue");
fieldValue482.name = "name";
fieldValue482.value = "l_carpal_distal_interphalangeal_3";
ProtoInstance480.fieldValue[1] = fieldValue482;

let fieldValue483 = browser.currentScene.createNode("fieldValue");
fieldValue483.name = "center";
fieldValue483.value = "0.202600002288818 0.701099991798401 -0.0494000017642975";
ProtoInstance480.fieldValue[2] = fieldValue483;

let fieldValue484 = browser.currentScene.createNode("fieldValue");
fieldValue484.name = "children";
let ProtoInstance485 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance485.name = "Segment";
ProtoInstance485.DEF = "hanim_l_carpal_distal_phalanx4";
let fieldValue486 = browser.currentScene.createNode("fieldValue");
fieldValue486.name = "name";
fieldValue486.value = "l_carpal_distal_phalanx_3";
ProtoInstance485.fieldValue = new MFNode();

ProtoInstance485.fieldValue[0] = fieldValue486;

let fieldValue487 = browser.currentScene.createNode("fieldValue");
fieldValue487.name = "children";
let ProtoInstance488 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance488.name = "Site";
ProtoInstance488.DEF = "hanim_l_carpal_distal_phalanx_3_tip_2";
let fieldValue489 = browser.currentScene.createNode("fieldValue");
fieldValue489.name = "name";
fieldValue489.value = "l_carpal_distal_phalanx_3_tip";
ProtoInstance488.fieldValue = new MFNode();

ProtoInstance488.fieldValue[0] = fieldValue489;

let fieldValue490 = browser.currentScene.createNode("fieldValue");
fieldValue490.name = "translation";
fieldValue490.value = "0.208000004291534 0.673099994659424 -0.049100000411272";
ProtoInstance488.fieldValue[1] = fieldValue490;

fieldValue487.children = new MFNode();

fieldValue487.children[0] = ProtoInstance488;

ProtoInstance485.fieldValue[1] = fieldValue487;

fieldValue484.children = new MFNode();

fieldValue484.children[0] = ProtoInstance485;

ProtoInstance480.fieldValue[3] = fieldValue484;

fieldValue479.children = new MFNode();

fieldValue479.children[0] = ProtoInstance480;

let ProtoInstance491 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance491.name = "Segment";
ProtoInstance491.DEF = "hanim_l_middle_middle_2";
let fieldValue492 = browser.currentScene.createNode("fieldValue");
fieldValue492.name = "name";
fieldValue492.value = "l_middle_middle";
ProtoInstance491.fieldValue = new MFNode();

ProtoInstance491.fieldValue[0] = fieldValue492;

fieldValue479.children[1] = ProtoInstance491;

ProtoInstance475.fieldValue[3] = fieldValue479;

fieldValue474.children = new MFNode();

fieldValue474.children[0] = ProtoInstance475;

let ProtoInstance493 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance493.name = "Segment";
ProtoInstance493.DEF = "hanim_l_middle_proximal_2";
let fieldValue494 = browser.currentScene.createNode("fieldValue");
fieldValue494.name = "name";
fieldValue494.value = "l_middle_proximal";
ProtoInstance493.fieldValue = new MFNode();

ProtoInstance493.fieldValue[0] = fieldValue494;

fieldValue474.children[1] = ProtoInstance493;

ProtoInstance470.fieldValue[3] = fieldValue474;

fieldValue469.children = new MFNode();

fieldValue469.children[0] = ProtoInstance470;

let ProtoInstance495 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance495.name = "Segment";
ProtoInstance495.DEF = "hanim_l_middle_metacarpal_2";
let fieldValue496 = browser.currentScene.createNode("fieldValue");
fieldValue496.name = "name";
fieldValue496.value = "l_middle_metacarpal";
ProtoInstance495.fieldValue = new MFNode();

ProtoInstance495.fieldValue[0] = fieldValue496;

fieldValue469.children[1] = ProtoInstance495;

ProtoInstance465.fieldValue[3] = fieldValue469;

fieldValue404.children[2] = ProtoInstance465;

let ProtoInstance497 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance497.name = "Joint";
ProtoInstance497.DEF = "hanim_l_carpometacarpal5";
let fieldValue498 = browser.currentScene.createNode("fieldValue");
fieldValue498.name = "stiffness";
fieldValue498.value = "1 1 1";
ProtoInstance497.fieldValue = new MFNode();

ProtoInstance497.fieldValue[0] = fieldValue498;

let fieldValue499 = browser.currentScene.createNode("fieldValue");
fieldValue499.name = "name";
fieldValue499.value = "l_carpometacarpal_4";
ProtoInstance497.fieldValue[1] = fieldValue499;

let fieldValue500 = browser.currentScene.createNode("fieldValue");
fieldValue500.name = "center";
fieldValue500.value = "0.195600003004074 0.801900029182434 -0.0794000029563904";
ProtoInstance497.fieldValue[2] = fieldValue500;

let fieldValue501 = browser.currentScene.createNode("fieldValue");
fieldValue501.name = "children";
let ProtoInstance502 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance502.name = "Joint";
ProtoInstance502.DEF = "hanim_l_metacarpophalangeal5";
let fieldValue503 = browser.currentScene.createNode("fieldValue");
fieldValue503.name = "stiffness";
fieldValue503.value = "1 1 1";
ProtoInstance502.fieldValue = new MFNode();

ProtoInstance502.fieldValue[0] = fieldValue503;

let fieldValue504 = browser.currentScene.createNode("fieldValue");
fieldValue504.name = "name";
fieldValue504.value = "l_metacarpophalangeal_4";
ProtoInstance502.fieldValue[1] = fieldValue504;

let fieldValue505 = browser.currentScene.createNode("fieldValue");
fieldValue505.name = "center";
fieldValue505.value = "0.195600003004074 0.781499981880188 -0.0794000029563904";
ProtoInstance502.fieldValue[2] = fieldValue505;

let fieldValue506 = browser.currentScene.createNode("fieldValue");
fieldValue506.name = "children";
let ProtoInstance507 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance507.name = "Joint";
ProtoInstance507.DEF = "hanim_l_carpal_proximal_interphalangeal5";
let fieldValue508 = browser.currentScene.createNode("fieldValue");
fieldValue508.name = "stiffness";
fieldValue508.value = "1 1 1";
ProtoInstance507.fieldValue = new MFNode();

ProtoInstance507.fieldValue[0] = fieldValue508;

let fieldValue509 = browser.currentScene.createNode("fieldValue");
fieldValue509.name = "name";
fieldValue509.value = "l_carpal_proximal_interphalangeal_4";
ProtoInstance507.fieldValue[1] = fieldValue509;

let fieldValue510 = browser.currentScene.createNode("fieldValue");
fieldValue510.name = "center";
fieldValue510.value = "0.197300001978874 0.72869998216629 -0.0776999965310097";
ProtoInstance507.fieldValue[2] = fieldValue510;

let fieldValue511 = browser.currentScene.createNode("fieldValue");
fieldValue511.name = "children";
let ProtoInstance512 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance512.name = "Joint";
ProtoInstance512.DEF = "hanim_l_carpal_distal_interphalangeal5";
let fieldValue513 = browser.currentScene.createNode("fieldValue");
fieldValue513.name = "stiffness";
fieldValue513.value = "1 1 1";
ProtoInstance512.fieldValue = new MFNode();

ProtoInstance512.fieldValue[0] = fieldValue513;

let fieldValue514 = browser.currentScene.createNode("fieldValue");
fieldValue514.name = "name";
fieldValue514.value = "l_carpal_distal_interphalangeal_4";
ProtoInstance512.fieldValue[1] = fieldValue514;

let fieldValue515 = browser.currentScene.createNode("fieldValue");
fieldValue515.name = "center";
fieldValue515.value = "0.198300004005432 0.704500019550323 -0.0767000019550323";
ProtoInstance512.fieldValue[2] = fieldValue515;

let fieldValue516 = browser.currentScene.createNode("fieldValue");
fieldValue516.name = "children";
let ProtoInstance517 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance517.name = "Segment";
ProtoInstance517.DEF = "hanim_l_carpal_distal_phalanx5";
let fieldValue518 = browser.currentScene.createNode("fieldValue");
fieldValue518.name = "name";
fieldValue518.value = "l_carpal_distal_phalanx_4";
ProtoInstance517.fieldValue = new MFNode();

ProtoInstance517.fieldValue[0] = fieldValue518;

let fieldValue519 = browser.currentScene.createNode("fieldValue");
fieldValue519.name = "children";
let ProtoInstance520 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance520.name = "Site";
ProtoInstance520.DEF = "hanim_l_carpal_distal_phalanx_4_tip_2";
let fieldValue521 = browser.currentScene.createNode("fieldValue");
fieldValue521.name = "name";
fieldValue521.value = "l_carpal_distal_phalanx_4_tip";
ProtoInstance520.fieldValue = new MFNode();

ProtoInstance520.fieldValue[0] = fieldValue521;

let fieldValue522 = browser.currentScene.createNode("fieldValue");
fieldValue522.name = "translation";
fieldValue522.value = "0.203500002622604 0.675000011920929 -0.0755999982357025";
ProtoInstance520.fieldValue[1] = fieldValue522;

fieldValue519.children = new MFNode();

fieldValue519.children[0] = ProtoInstance520;

ProtoInstance517.fieldValue[1] = fieldValue519;

fieldValue516.children = new MFNode();

fieldValue516.children[0] = ProtoInstance517;

ProtoInstance512.fieldValue[3] = fieldValue516;

fieldValue511.children = new MFNode();

fieldValue511.children[0] = ProtoInstance512;

let ProtoInstance523 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance523.name = "Segment";
ProtoInstance523.DEF = "hanim_l_ring_middle_2";
let fieldValue524 = browser.currentScene.createNode("fieldValue");
fieldValue524.name = "name";
fieldValue524.value = "l_ring_middle";
ProtoInstance523.fieldValue = new MFNode();

ProtoInstance523.fieldValue[0] = fieldValue524;

fieldValue511.children[1] = ProtoInstance523;

ProtoInstance507.fieldValue[3] = fieldValue511;

fieldValue506.children = new MFNode();

fieldValue506.children[0] = ProtoInstance507;

let ProtoInstance525 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance525.name = "Segment";
ProtoInstance525.DEF = "hanim_l_ring_proximal_2";
let fieldValue526 = browser.currentScene.createNode("fieldValue");
fieldValue526.name = "name";
fieldValue526.value = "l_ring_proximal";
ProtoInstance525.fieldValue = new MFNode();

ProtoInstance525.fieldValue[0] = fieldValue526;

fieldValue506.children[1] = ProtoInstance525;

ProtoInstance502.fieldValue[3] = fieldValue506;

fieldValue501.children = new MFNode();

fieldValue501.children[0] = ProtoInstance502;

let ProtoInstance527 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance527.name = "Segment";
ProtoInstance527.DEF = "hanim_l_ring_metacarpal_2";
let fieldValue528 = browser.currentScene.createNode("fieldValue");
fieldValue528.name = "name";
fieldValue528.value = "l_ring_metacarpal";
ProtoInstance527.fieldValue = new MFNode();

ProtoInstance527.fieldValue[0] = fieldValue528;

fieldValue501.children[1] = ProtoInstance527;

ProtoInstance497.fieldValue[3] = fieldValue501;

fieldValue404.children[3] = ProtoInstance497;

let ProtoInstance529 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance529.name = "Joint";
ProtoInstance529.DEF = "hanim_l_carpometacarpal6";
let fieldValue530 = browser.currentScene.createNode("fieldValue");
fieldValue530.name = "stiffness";
fieldValue530.value = "1 1 1";
ProtoInstance529.fieldValue = new MFNode();

ProtoInstance529.fieldValue[0] = fieldValue530;

let fieldValue531 = browser.currentScene.createNode("fieldValue");
fieldValue531.name = "name";
fieldValue531.value = "l_carpometacarpal_5";
ProtoInstance529.fieldValue[1] = fieldValue531;

let fieldValue532 = browser.currentScene.createNode("fieldValue");
fieldValue532.name = "center";
fieldValue532.value = "0.192499995231628 0.806599974632263 -0.10360000282526";
ProtoInstance529.fieldValue[2] = fieldValue532;

let fieldValue533 = browser.currentScene.createNode("fieldValue");
fieldValue533.name = "children";
let ProtoInstance534 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance534.name = "Joint";
ProtoInstance534.DEF = "hanim_l_metacarpophalangeal6";
let fieldValue535 = browser.currentScene.createNode("fieldValue");
fieldValue535.name = "stiffness";
fieldValue535.value = "1 1 1";
ProtoInstance534.fieldValue = new MFNode();

ProtoInstance534.fieldValue[0] = fieldValue535;

let fieldValue536 = browser.currentScene.createNode("fieldValue");
fieldValue536.name = "name";
fieldValue536.value = "l_metacarpophalangeal_5";
ProtoInstance534.fieldValue[1] = fieldValue536;

let fieldValue537 = browser.currentScene.createNode("fieldValue");
fieldValue537.name = "center";
fieldValue537.value = "0.192499995231628 0.78659999370575 -0.10360000282526";
ProtoInstance534.fieldValue[2] = fieldValue537;

let fieldValue538 = browser.currentScene.createNode("fieldValue");
fieldValue538.name = "children";
let ProtoInstance539 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance539.name = "Joint";
ProtoInstance539.DEF = "hanim_l_carpal_proximal_interphalangeal6";
let fieldValue540 = browser.currentScene.createNode("fieldValue");
fieldValue540.name = "stiffness";
fieldValue540.value = "1 1 1";
ProtoInstance539.fieldValue = new MFNode();

ProtoInstance539.fieldValue[0] = fieldValue540;

let fieldValue541 = browser.currentScene.createNode("fieldValue");
fieldValue541.name = "name";
fieldValue541.value = "l_carpal_proximal_interphalangeal_5";
ProtoInstance539.fieldValue[1] = fieldValue541;

let fieldValue542 = browser.currentScene.createNode("fieldValue");
fieldValue542.name = "center";
fieldValue542.value = "0.193800002336502 0.745199978351593 -0.102399997413158";
ProtoInstance539.fieldValue[2] = fieldValue542;

let fieldValue543 = browser.currentScene.createNode("fieldValue");
fieldValue543.name = "children";
let ProtoInstance544 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance544.name = "Joint";
ProtoInstance544.DEF = "hanim_l_carpal_distal_interphalangeal6";
let fieldValue545 = browser.currentScene.createNode("fieldValue");
fieldValue545.name = "stiffness";
fieldValue545.value = "1 1 1";
ProtoInstance544.fieldValue = new MFNode();

ProtoInstance544.fieldValue[0] = fieldValue545;

let fieldValue546 = browser.currentScene.createNode("fieldValue");
fieldValue546.name = "name";
fieldValue546.value = "l_carpal_distal_interphalangeal_5";
ProtoInstance544.fieldValue[1] = fieldValue546;

let fieldValue547 = browser.currentScene.createNode("fieldValue");
fieldValue547.name = "center";
fieldValue547.value = "0.19480000436306 0.727699995040894 -0.101700000464916";
ProtoInstance544.fieldValue[2] = fieldValue547;

let fieldValue548 = browser.currentScene.createNode("fieldValue");
fieldValue548.name = "children";
let ProtoInstance549 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance549.name = "Segment";
ProtoInstance549.DEF = "hanim_l_carpal_distal_phalanx6";
let fieldValue550 = browser.currentScene.createNode("fieldValue");
fieldValue550.name = "name";
fieldValue550.value = "l_carpal_distal_phalanx_5";
ProtoInstance549.fieldValue = new MFNode();

ProtoInstance549.fieldValue[0] = fieldValue550;

let fieldValue551 = browser.currentScene.createNode("fieldValue");
fieldValue551.name = "children";
let ProtoInstance552 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance552.name = "Site";
ProtoInstance552.DEF = "hanim_l_carpal_distal_phalanx_5_tip_2";
let fieldValue553 = browser.currentScene.createNode("fieldValue");
fieldValue553.name = "name";
fieldValue553.value = "l_carpal_distal_phalanx_5_tip";
ProtoInstance552.fieldValue = new MFNode();

ProtoInstance552.fieldValue[0] = fieldValue553;

let fieldValue554 = browser.currentScene.createNode("fieldValue");
fieldValue554.name = "translation";
fieldValue554.value = "0.201399996876717 0.700900018215179 -0.101199999451637";
ProtoInstance552.fieldValue[1] = fieldValue554;

fieldValue551.children = new MFNode();

fieldValue551.children[0] = ProtoInstance552;

ProtoInstance549.fieldValue[1] = fieldValue551;

fieldValue548.children = new MFNode();

fieldValue548.children[0] = ProtoInstance549;

ProtoInstance544.fieldValue[3] = fieldValue548;

fieldValue543.children = new MFNode();

fieldValue543.children[0] = ProtoInstance544;

let ProtoInstance555 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance555.name = "Segment";
ProtoInstance555.DEF = "hanim_l_pinky_middle_2";
let fieldValue556 = browser.currentScene.createNode("fieldValue");
fieldValue556.name = "name";
fieldValue556.value = "l_pinky_middle";
ProtoInstance555.fieldValue = new MFNode();

ProtoInstance555.fieldValue[0] = fieldValue556;

fieldValue543.children[1] = ProtoInstance555;

ProtoInstance539.fieldValue[3] = fieldValue543;

fieldValue538.children = new MFNode();

fieldValue538.children[0] = ProtoInstance539;

let ProtoInstance557 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance557.name = "Segment";
ProtoInstance557.DEF = "hanim_l_pinky_proximal_2";
let fieldValue558 = browser.currentScene.createNode("fieldValue");
fieldValue558.name = "name";
fieldValue558.value = "l_pinky_proximal";
ProtoInstance557.fieldValue = new MFNode();

ProtoInstance557.fieldValue[0] = fieldValue558;

fieldValue538.children[1] = ProtoInstance557;

ProtoInstance534.fieldValue[3] = fieldValue538;

fieldValue533.children = new MFNode();

fieldValue533.children[0] = ProtoInstance534;

let ProtoInstance559 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance559.name = "Segment";
ProtoInstance559.DEF = "hanim_l_pinky_metacarpal_2";
let fieldValue560 = browser.currentScene.createNode("fieldValue");
fieldValue560.name = "name";
fieldValue560.value = "l_pinky_metacarpal";
ProtoInstance559.fieldValue = new MFNode();

ProtoInstance559.fieldValue[0] = fieldValue560;

fieldValue533.children[1] = ProtoInstance559;

ProtoInstance529.fieldValue[3] = fieldValue533;

fieldValue404.children[4] = ProtoInstance529;

let ProtoInstance561 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance561.name = "Segment";
ProtoInstance561.DEF = "hanim_l_hand_2";
let fieldValue562 = browser.currentScene.createNode("fieldValue");
fieldValue562.name = "name";
fieldValue562.value = "l_hand";
ProtoInstance561.fieldValue = new MFNode();

ProtoInstance561.fieldValue[0] = fieldValue562;

let fieldValue563 = browser.currentScene.createNode("fieldValue");
fieldValue563.name = "children";
let ProtoInstance564 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance564.name = "Site";
ProtoInstance564.DEF = "hanim_l_metacarpal_phalanx3";
let fieldValue565 = browser.currentScene.createNode("fieldValue");
fieldValue565.name = "name";
fieldValue565.value = "l_metacarpal_phalanx_2";
ProtoInstance564.fieldValue = new MFNode();

ProtoInstance564.fieldValue[0] = fieldValue565;

let fieldValue566 = browser.currentScene.createNode("fieldValue");
fieldValue566.name = "translation";
fieldValue566.value = "0.200900003314018 0.813899993896484 -0.023700000718236";
ProtoInstance564.fieldValue[1] = fieldValue566;

fieldValue563.children = new MFNode();

fieldValue563.children[0] = ProtoInstance564;

let ProtoInstance567 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance567.name = "Site";
ProtoInstance567.DEF = "hanim_l_ulnar_styloid_2";
let fieldValue568 = browser.currentScene.createNode("fieldValue");
fieldValue568.name = "name";
fieldValue568.value = "l_ulnar_styloid";
ProtoInstance567.fieldValue = new MFNode();

ProtoInstance567.fieldValue[0] = fieldValue568;

let fieldValue569 = browser.currentScene.createNode("fieldValue");
fieldValue569.name = "translation";
fieldValue569.value = "-0.214200004935265 0.85290002822876 -0.064800001680851";
ProtoInstance567.fieldValue[1] = fieldValue569;

fieldValue563.children[1] = ProtoInstance567;

let ProtoInstance570 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance570.name = "Site";
ProtoInstance570.DEF = "hanim_l_metacarpal_phalanx6";
let fieldValue571 = browser.currentScene.createNode("fieldValue");
fieldValue571.name = "name";
fieldValue571.value = "l_metacarpal_phalanx_5";
ProtoInstance570.fieldValue = new MFNode();

ProtoInstance570.fieldValue[0] = fieldValue571;

let fieldValue572 = browser.currentScene.createNode("fieldValue");
fieldValue572.name = "translation";
fieldValue572.value = "0.192900002002716 0.78600001335144 -0.112199999392033";
ProtoInstance570.fieldValue[1] = fieldValue572;

fieldValue563.children[2] = ProtoInstance570;

ProtoInstance561.fieldValue[1] = fieldValue563;

fieldValue404.children[5] = ProtoInstance561;

ProtoInstance400.fieldValue[3] = fieldValue404;

fieldValue399.children = new MFNode();

fieldValue399.children[0] = ProtoInstance400;

let ProtoInstance573 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance573.name = "Segment";
ProtoInstance573.DEF = "hanim_l_forearm_2";
let fieldValue574 = browser.currentScene.createNode("fieldValue");
fieldValue574.name = "name";
fieldValue574.value = "l_forearm";
ProtoInstance573.fieldValue = new MFNode();

ProtoInstance573.fieldValue[0] = fieldValue574;

let fieldValue575 = browser.currentScene.createNode("fieldValue");
fieldValue575.name = "children";
let ProtoInstance576 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance576.name = "Site";
ProtoInstance576.DEF = "hanim_l_radial_styloid_2";
let fieldValue577 = browser.currentScene.createNode("fieldValue");
fieldValue577.name = "name";
fieldValue577.value = "l_radial_styloid";
ProtoInstance576.fieldValue = new MFNode();

ProtoInstance576.fieldValue[0] = fieldValue577;

let fieldValue578 = browser.currentScene.createNode("fieldValue");
fieldValue578.name = "translation";
fieldValue578.value = "0.190099999308586 0.864499986171722 -0.0414999984204769";
ProtoInstance576.fieldValue[1] = fieldValue578;

fieldValue575.children = new MFNode();

fieldValue575.children[0] = ProtoInstance576;

let ProtoInstance579 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance579.name = "Site";
ProtoInstance579.DEF = "hanim_l_olecranon_2";
let fieldValue580 = browser.currentScene.createNode("fieldValue");
fieldValue580.name = "name";
fieldValue580.value = "l_olecranon";
ProtoInstance579.fieldValue = new MFNode();

ProtoInstance579.fieldValue[0] = fieldValue580;

let fieldValue581 = browser.currentScene.createNode("fieldValue");
fieldValue581.name = "translation";
fieldValue581.value = "-0.196199998259544 1.13750004768372 -0.112300001084805";
ProtoInstance579.fieldValue[1] = fieldValue581;

fieldValue575.children[1] = ProtoInstance579;

let ProtoInstance582 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance582.name = "Site";
ProtoInstance582.DEF = "hanim_l_humeral_medial_epicondyles_2";
let fieldValue583 = browser.currentScene.createNode("fieldValue");
fieldValue583.name = "name";
fieldValue583.value = "l_humeral_medial_epicondyles";
ProtoInstance582.fieldValue = new MFNode();

ProtoInstance582.fieldValue[0] = fieldValue583;

let fieldValue584 = browser.currentScene.createNode("fieldValue");
fieldValue584.name = "translation";
fieldValue584.value = "0.173500001430511 1.12720000743866 -0.111299999058247";
ProtoInstance582.fieldValue[1] = fieldValue584;

fieldValue575.children[2] = ProtoInstance582;

let ProtoInstance585 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance585.name = "Site";
ProtoInstance585.DEF = "hanim_l_radiale_2";
let fieldValue586 = browser.currentScene.createNode("fieldValue");
fieldValue586.name = "name";
fieldValue586.value = "l_radiale";
ProtoInstance585.fieldValue = new MFNode();

ProtoInstance585.fieldValue[0] = fieldValue586;

let fieldValue587 = browser.currentScene.createNode("fieldValue");
fieldValue587.name = "translation";
fieldValue587.value = "0.218199998140335 1.12119996547699 -0.116700001060963";
ProtoInstance585.fieldValue[1] = fieldValue587;

fieldValue575.children[3] = ProtoInstance585;

ProtoInstance573.fieldValue[1] = fieldValue575;

fieldValue399.children[1] = ProtoInstance573;

ProtoInstance395.fieldValue[3] = fieldValue399;

fieldValue394.children = new MFNode();

fieldValue394.children[0] = ProtoInstance395;

let ProtoInstance588 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance588.name = "Segment";
ProtoInstance588.DEF = "hanim_l_upperarm_2";
let fieldValue589 = browser.currentScene.createNode("fieldValue");
fieldValue589.name = "name";
fieldValue589.value = "l_upperarm";
ProtoInstance588.fieldValue = new MFNode();

ProtoInstance588.fieldValue[0] = fieldValue589;

let fieldValue590 = browser.currentScene.createNode("fieldValue");
fieldValue590.name = "children";
let ProtoInstance591 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance591.name = "Site";
ProtoInstance591.DEF = "hanim_l_humeral_lateral_epicondyles_2";
let fieldValue592 = browser.currentScene.createNode("fieldValue");
fieldValue592.name = "name";
fieldValue592.value = "l_humeral_lateral_epicondyles";
ProtoInstance591.fieldValue = new MFNode();

ProtoInstance591.fieldValue[0] = fieldValue592;

let fieldValue593 = browser.currentScene.createNode("fieldValue");
fieldValue593.name = "translation";
fieldValue593.value = "0.228000000119209 1.14820003509521 -0.109999999403954";
ProtoInstance591.fieldValue[1] = fieldValue593;

fieldValue590.children = new MFNode();

fieldValue590.children[0] = ProtoInstance591;

ProtoInstance588.fieldValue[1] = fieldValue590;

fieldValue394.children[1] = ProtoInstance588;

ProtoInstance390.fieldValue[3] = fieldValue394;

fieldValue389.children = new MFNode();

fieldValue389.children[0] = ProtoInstance390;

let ProtoInstance594 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance594.name = "Segment";
ProtoInstance594.DEF = "hanim_l_scapula_2";
let fieldValue595 = browser.currentScene.createNode("fieldValue");
fieldValue595.name = "name";
fieldValue595.value = "l_scapula";
ProtoInstance594.fieldValue = new MFNode();

ProtoInstance594.fieldValue[0] = fieldValue595;

fieldValue389.children[1] = ProtoInstance594;

ProtoInstance385.fieldValue[3] = fieldValue389;

fieldValue384.children = new MFNode();

fieldValue384.children[0] = ProtoInstance385;

let ProtoInstance596 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance596.name = "Segment";
ProtoInstance596.DEF = "hanim_l_clavicle_2";
let fieldValue597 = browser.currentScene.createNode("fieldValue");
fieldValue597.name = "name";
fieldValue597.value = "l_clavicle";
ProtoInstance596.fieldValue = new MFNode();

ProtoInstance596.fieldValue[0] = fieldValue597;

let fieldValue598 = browser.currentScene.createNode("fieldValue");
fieldValue598.name = "children";
let ProtoInstance599 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance599.name = "Site";
ProtoInstance599.DEF = "hanim_l_clavicale_2";
let fieldValue600 = browser.currentScene.createNode("fieldValue");
fieldValue600.name = "name";
fieldValue600.value = "l_clavicale";
ProtoInstance599.fieldValue = new MFNode();

ProtoInstance599.fieldValue[0] = fieldValue600;

let fieldValue601 = browser.currentScene.createNode("fieldValue");
fieldValue601.name = "translation";
fieldValue601.value = "0.0271000005304813 1.49430000782013 0.0394000001251698";
ProtoInstance599.fieldValue[1] = fieldValue601;

fieldValue598.children = new MFNode();

fieldValue598.children[0] = ProtoInstance599;

let ProtoInstance602 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance602.name = "Site";
ProtoInstance602.DEF = "hanim_l_acromion_2";
let fieldValue603 = browser.currentScene.createNode("fieldValue");
fieldValue603.name = "name";
fieldValue603.value = "l_acromion";
ProtoInstance602.fieldValue = new MFNode();

ProtoInstance602.fieldValue[0] = fieldValue603;

let fieldValue604 = browser.currentScene.createNode("fieldValue");
fieldValue604.name = "translation";
fieldValue604.value = "0.203199997544289 1.47599995136261 -0.0489999987185001";
ProtoInstance602.fieldValue[1] = fieldValue604;

fieldValue598.children[1] = ProtoInstance602;

let ProtoInstance605 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance605.name = "Site";
ProtoInstance605.DEF = "hanim_l_axilla_proximal_2";
let fieldValue606 = browser.currentScene.createNode("fieldValue");
fieldValue606.name = "name";
fieldValue606.value = "l_axilla_proximal";
ProtoInstance605.fieldValue = new MFNode();

ProtoInstance605.fieldValue[0] = fieldValue606;

let fieldValue607 = browser.currentScene.createNode("fieldValue");
fieldValue607.name = "translation";
fieldValue607.value = "0.177699998021126 1.40649998188019 -0.00749999983236194";
ProtoInstance605.fieldValue[1] = fieldValue607;

fieldValue598.children[2] = ProtoInstance605;

let ProtoInstance608 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance608.name = "Site";
ProtoInstance608.DEF = "hanim_l_axilla_distal_2";
let fieldValue609 = browser.currentScene.createNode("fieldValue");
fieldValue609.name = "name";
fieldValue609.value = "l_axilla_distal";
ProtoInstance608.fieldValue = new MFNode();

ProtoInstance608.fieldValue[0] = fieldValue609;

let fieldValue610 = browser.currentScene.createNode("fieldValue");
fieldValue610.name = "translation";
fieldValue610.value = "0.17059999704361 1.40719997882843 -0.0874999985098839";
ProtoInstance608.fieldValue[1] = fieldValue610;

fieldValue598.children[3] = ProtoInstance608;

ProtoInstance596.fieldValue[1] = fieldValue598;

fieldValue384.children[1] = ProtoInstance596;

ProtoInstance380.fieldValue[3] = fieldValue384;

fieldValue327.children[1] = ProtoInstance380;

let ProtoInstance611 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance611.name = "Joint";
ProtoInstance611.DEF = "hanim_r_sternoclavicular_2";
let fieldValue612 = browser.currentScene.createNode("fieldValue");
fieldValue612.name = "stiffness";
fieldValue612.value = "1 1 1";
ProtoInstance611.fieldValue = new MFNode();

ProtoInstance611.fieldValue[0] = fieldValue612;

let fieldValue613 = browser.currentScene.createNode("fieldValue");
fieldValue613.name = "name";
fieldValue613.value = "r_sternoclavicular";
ProtoInstance611.fieldValue[1] = fieldValue613;

let fieldValue614 = browser.currentScene.createNode("fieldValue");
fieldValue614.name = "center";
fieldValue614.value = "-0.0693999975919724 1.46000003814697 -0.0329999998211861";
ProtoInstance611.fieldValue[2] = fieldValue614;

let fieldValue615 = browser.currentScene.createNode("fieldValue");
fieldValue615.name = "children";
let ProtoInstance616 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance616.name = "Joint";
ProtoInstance616.DEF = "hanim_r_acromioclavicular_2";
let fieldValue617 = browser.currentScene.createNode("fieldValue");
fieldValue617.name = "stiffness";
fieldValue617.value = "1 1 1";
ProtoInstance616.fieldValue = new MFNode();

ProtoInstance616.fieldValue[0] = fieldValue617;

let fieldValue618 = browser.currentScene.createNode("fieldValue");
fieldValue618.name = "name";
fieldValue618.value = "r_acromioclavicular";
ProtoInstance616.fieldValue[1] = fieldValue618;

let fieldValue619 = browser.currentScene.createNode("fieldValue");
fieldValue619.name = "center";
fieldValue619.value = "-0.0835999995470047 1.42809998989105 -0.0401000007987022";
ProtoInstance616.fieldValue[2] = fieldValue619;

let fieldValue620 = browser.currentScene.createNode("fieldValue");
fieldValue620.name = "children";
let ProtoInstance621 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance621.name = "Joint";
ProtoInstance621.DEF = "hanim_r_shoulder_2";
let fieldValue622 = browser.currentScene.createNode("fieldValue");
fieldValue622.name = "stiffness";
fieldValue622.value = "1 1 1";
ProtoInstance621.fieldValue = new MFNode();

ProtoInstance621.fieldValue[0] = fieldValue622;

let fieldValue623 = browser.currentScene.createNode("fieldValue");
fieldValue623.name = "name";
fieldValue623.value = "r_shoulder";
ProtoInstance621.fieldValue[1] = fieldValue623;

let fieldValue624 = browser.currentScene.createNode("fieldValue");
fieldValue624.name = "center";
fieldValue624.value = "-0.190699994564056 1.4407000541687 -0.0324999988079071";
ProtoInstance621.fieldValue[2] = fieldValue624;

let fieldValue625 = browser.currentScene.createNode("fieldValue");
fieldValue625.name = "children";
let ProtoInstance626 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance626.name = "Joint";
ProtoInstance626.DEF = "hanim_r_elbow_2";
let fieldValue627 = browser.currentScene.createNode("fieldValue");
fieldValue627.name = "stiffness";
fieldValue627.value = "1 1 1";
ProtoInstance626.fieldValue = new MFNode();

ProtoInstance626.fieldValue[0] = fieldValue627;

let fieldValue628 = browser.currentScene.createNode("fieldValue");
fieldValue628.name = "name";
fieldValue628.value = "r_elbow";
ProtoInstance626.fieldValue[1] = fieldValue628;

let fieldValue629 = browser.currentScene.createNode("fieldValue");
fieldValue629.name = "center";
fieldValue629.value = "-0.194900006055832 1.13880002498627 -0.061999998986721";
ProtoInstance626.fieldValue[2] = fieldValue629;

let fieldValue630 = browser.currentScene.createNode("fieldValue");
fieldValue630.name = "children";
let ProtoInstance631 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance631.name = "Joint";
ProtoInstance631.DEF = "hanim_r_radiocarpal_2";
let fieldValue632 = browser.currentScene.createNode("fieldValue");
fieldValue632.name = "stiffness";
fieldValue632.value = "1 1 1";
ProtoInstance631.fieldValue = new MFNode();

ProtoInstance631.fieldValue[0] = fieldValue632;

let fieldValue633 = browser.currentScene.createNode("fieldValue");
fieldValue633.name = "name";
fieldValue633.value = "r_radiocarpal";
ProtoInstance631.fieldValue[1] = fieldValue633;

let fieldValue634 = browser.currentScene.createNode("fieldValue");
fieldValue634.name = "center";
fieldValue634.value = "-0.195899993181229 0.869400024414063 -0.0520999990403652";
ProtoInstance631.fieldValue[2] = fieldValue634;

let fieldValue635 = browser.currentScene.createNode("fieldValue");
fieldValue635.name = "children";
let ProtoInstance636 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance636.name = "Joint";
ProtoInstance636.DEF = "hanim_r_carpometacarpal2";
let fieldValue637 = browser.currentScene.createNode("fieldValue");
fieldValue637.name = "stiffness";
fieldValue637.value = "1 1 1";
ProtoInstance636.fieldValue = new MFNode();

ProtoInstance636.fieldValue[0] = fieldValue637;

let fieldValue638 = browser.currentScene.createNode("fieldValue");
fieldValue638.name = "name";
fieldValue638.value = "r_carpometacarpal_1";
ProtoInstance636.fieldValue[1] = fieldValue638;

let fieldValue639 = browser.currentScene.createNode("fieldValue");
fieldValue639.name = "center";
fieldValue639.value = "-0.189899995923042 0.850199997425079 -0.0472999997437";
ProtoInstance636.fieldValue[2] = fieldValue639;

let fieldValue640 = browser.currentScene.createNode("fieldValue");
fieldValue640.name = "children";
let ProtoInstance641 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance641.name = "Joint";
ProtoInstance641.DEF = "hanim_r_metacarpophalangeal2";
let fieldValue642 = browser.currentScene.createNode("fieldValue");
fieldValue642.name = "stiffness";
fieldValue642.value = "1 1 1";
ProtoInstance641.fieldValue = new MFNode();

ProtoInstance641.fieldValue[0] = fieldValue642;

let fieldValue643 = browser.currentScene.createNode("fieldValue");
fieldValue643.name = "name";
fieldValue643.value = "r_metacarpophalangeal_1";
ProtoInstance641.fieldValue[1] = fieldValue643;

let fieldValue644 = browser.currentScene.createNode("fieldValue");
fieldValue644.name = "center";
fieldValue644.value = "-0.187399998307228 0.825600028038025 0.0306000001728535";
ProtoInstance641.fieldValue[2] = fieldValue644;

let fieldValue645 = browser.currentScene.createNode("fieldValue");
fieldValue645.name = "children";
let ProtoInstance646 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance646.name = "Joint";
ProtoInstance646.DEF = "hanim_r_carpal_interphalangeal2";
let fieldValue647 = browser.currentScene.createNode("fieldValue");
fieldValue647.name = "stiffness";
fieldValue647.value = "1 1 1";
ProtoInstance646.fieldValue = new MFNode();

ProtoInstance646.fieldValue[0] = fieldValue647;

let fieldValue648 = browser.currentScene.createNode("fieldValue");
fieldValue648.name = "name";
fieldValue648.value = "r_carpal_interphalangeal_1";
ProtoInstance646.fieldValue[1] = fieldValue648;

let fieldValue649 = browser.currentScene.createNode("fieldValue");
fieldValue649.name = "center";
fieldValue649.value = "-0.18639999628067 0.819000005722046 0.0505999997258186";
ProtoInstance646.fieldValue[2] = fieldValue649;

let fieldValue650 = browser.currentScene.createNode("fieldValue");
fieldValue650.name = "children";
let ProtoInstance651 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance651.name = "Segment";
ProtoInstance651.DEF = "hanim_r_carpal_distal_phalanx2";
let fieldValue652 = browser.currentScene.createNode("fieldValue");
fieldValue652.name = "name";
fieldValue652.value = "r_carpal_distal_phalanx_1";
ProtoInstance651.fieldValue = new MFNode();

ProtoInstance651.fieldValue[0] = fieldValue652;

let fieldValue653 = browser.currentScene.createNode("fieldValue");
fieldValue653.name = "children";
let ProtoInstance654 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance654.name = "Site";
ProtoInstance654.DEF = "hanim_r_carpal_distal_phalanx_1_tip_2";
let fieldValue655 = browser.currentScene.createNode("fieldValue");
fieldValue655.name = "name";
fieldValue655.value = "r_carpal_distal_phalanx_1_tip";
ProtoInstance654.fieldValue = new MFNode();

ProtoInstance654.fieldValue[0] = fieldValue655;

let fieldValue656 = browser.currentScene.createNode("fieldValue");
fieldValue656.name = "translation";
fieldValue656.value = "-0.18690000474453 0.809000015258789 0.0820000022649765";
ProtoInstance654.fieldValue[1] = fieldValue656;

fieldValue653.children = new MFNode();

fieldValue653.children[0] = ProtoInstance654;

ProtoInstance651.fieldValue[1] = fieldValue653;

fieldValue650.children = new MFNode();

fieldValue650.children[0] = ProtoInstance651;

ProtoInstance646.fieldValue[3] = fieldValue650;

fieldValue645.children = new MFNode();

fieldValue645.children[0] = ProtoInstance646;

let ProtoInstance657 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance657.name = "Segment";
ProtoInstance657.DEF = "hanim_r_index_proximal_2";
let fieldValue658 = browser.currentScene.createNode("fieldValue");
fieldValue658.name = "name";
fieldValue658.value = "r_index_proximal";
ProtoInstance657.fieldValue = new MFNode();

ProtoInstance657.fieldValue[0] = fieldValue658;

fieldValue645.children[1] = ProtoInstance657;

ProtoInstance641.fieldValue[3] = fieldValue645;

fieldValue640.children = new MFNode();

fieldValue640.children[0] = ProtoInstance641;

let ProtoInstance659 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance659.name = "Segment";
ProtoInstance659.DEF = "hanim_r_index_proximal_4";
let fieldValue660 = browser.currentScene.createNode("fieldValue");
fieldValue660.name = "name";
fieldValue660.value = "r_index_proximal";
ProtoInstance659.fieldValue = new MFNode();

ProtoInstance659.fieldValue[0] = fieldValue660;

fieldValue640.children[1] = ProtoInstance659;

ProtoInstance636.fieldValue[3] = fieldValue640;

fieldValue635.children = new MFNode();

fieldValue635.children[0] = ProtoInstance636;

let ProtoInstance661 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance661.name = "Joint";
ProtoInstance661.DEF = "hanim_r_carpometacarpal3";
let fieldValue662 = browser.currentScene.createNode("fieldValue");
fieldValue662.name = "stiffness";
fieldValue662.value = "1 1 1";
ProtoInstance661.fieldValue = new MFNode();

ProtoInstance661.fieldValue[0] = fieldValue662;

let fieldValue663 = browser.currentScene.createNode("fieldValue");
fieldValue663.name = "name";
fieldValue663.value = "r_carpometacarpal_2";
ProtoInstance661.fieldValue[1] = fieldValue663;

let fieldValue664 = browser.currentScene.createNode("fieldValue");
fieldValue664.name = "center";
fieldValue664.value = "-0.196099996566772 0.805499970912933 -0.0218000002205372";
ProtoInstance661.fieldValue[2] = fieldValue664;

let fieldValue665 = browser.currentScene.createNode("fieldValue");
fieldValue665.name = "children";
let ProtoInstance666 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance666.name = "Joint";
ProtoInstance666.DEF = "hanim_r_metacarpophalangeal3";
let fieldValue667 = browser.currentScene.createNode("fieldValue");
fieldValue667.name = "stiffness";
fieldValue667.value = "1 1 1";
ProtoInstance666.fieldValue = new MFNode();

ProtoInstance666.fieldValue[0] = fieldValue667;

let fieldValue668 = browser.currentScene.createNode("fieldValue");
fieldValue668.name = "name";
fieldValue668.value = "r_metacarpophalangeal_2";
ProtoInstance666.fieldValue[1] = fieldValue668;

let fieldValue669 = browser.currentScene.createNode("fieldValue");
fieldValue669.name = "center";
fieldValue669.value = "-0.196099996566772 0.784600019454956 -0.0218000002205372";
ProtoInstance666.fieldValue[2] = fieldValue669;

let fieldValue670 = browser.currentScene.createNode("fieldValue");
fieldValue670.name = "children";
let ProtoInstance671 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance671.name = "Joint";
ProtoInstance671.DEF = "hanim_r_carpal_proximal_interphalangeal3";
let fieldValue672 = browser.currentScene.createNode("fieldValue");
fieldValue672.name = "stiffness";
fieldValue672.value = "1 1 1";
ProtoInstance671.fieldValue = new MFNode();

ProtoInstance671.fieldValue[0] = fieldValue672;

let fieldValue673 = browser.currentScene.createNode("fieldValue");
fieldValue673.name = "name";
fieldValue673.value = "r_carpal_proximal_interphalangeal_2";
ProtoInstance671.fieldValue[1] = fieldValue673;

let fieldValue674 = browser.currentScene.createNode("fieldValue");
fieldValue674.name = "center";
fieldValue674.value = "-0.19539999961853 0.739300012588501 -0.0185000002384186";
ProtoInstance671.fieldValue[2] = fieldValue674;

let fieldValue675 = browser.currentScene.createNode("fieldValue");
fieldValue675.name = "children";
let ProtoInstance676 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance676.name = "Joint";
ProtoInstance676.DEF = "hanim_r_carpal_distal_interphalangeal3";
let fieldValue677 = browser.currentScene.createNode("fieldValue");
fieldValue677.name = "stiffness";
fieldValue677.value = "1 1 1";
ProtoInstance676.fieldValue = new MFNode();

ProtoInstance676.fieldValue[0] = fieldValue677;

let fieldValue678 = browser.currentScene.createNode("fieldValue");
fieldValue678.name = "name";
fieldValue678.value = "r_carpal_distal_interphalangeal_2";
ProtoInstance676.fieldValue[1] = fieldValue678;

let fieldValue679 = browser.currentScene.createNode("fieldValue");
fieldValue679.name = "center";
fieldValue679.value = "-0.194499999284744 0.716899991035461 -0.0173000004142523";
ProtoInstance676.fieldValue[2] = fieldValue679;

let fieldValue680 = browser.currentScene.createNode("fieldValue");
fieldValue680.name = "children";
let ProtoInstance681 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance681.name = "Segment";
ProtoInstance681.DEF = "hanim_r_carpal_distal_phalanx3";
let fieldValue682 = browser.currentScene.createNode("fieldValue");
fieldValue682.name = "name";
fieldValue682.value = "r_carpal_distal_phalanx_2";
ProtoInstance681.fieldValue = new MFNode();

ProtoInstance681.fieldValue[0] = fieldValue682;

let fieldValue683 = browser.currentScene.createNode("fieldValue");
fieldValue683.name = "children";
let ProtoInstance684 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance684.name = "Site";
ProtoInstance684.DEF = "hanim_r_carpal_distal_phalanx_2_tip_2";
let fieldValue685 = browser.currentScene.createNode("fieldValue");
fieldValue685.name = "name";
fieldValue685.value = "r_carpal_distal_phalanx_2_tip";
ProtoInstance684.fieldValue = new MFNode();

ProtoInstance684.fieldValue[0] = fieldValue685;

let fieldValue686 = browser.currentScene.createNode("fieldValue");
fieldValue686.name = "translation";
fieldValue686.value = "-0.197999998927116 0.688300013542175 -0.0179999992251396";
ProtoInstance684.fieldValue[1] = fieldValue686;

fieldValue683.children = new MFNode();

fieldValue683.children[0] = ProtoInstance684;

let ProtoInstance687 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance687.name = "Site";
ProtoInstance687.DEF = "hanim_r_dactylion_2";
let fieldValue688 = browser.currentScene.createNode("fieldValue");
fieldValue688.name = "name";
fieldValue688.value = "r_dactylion";
ProtoInstance687.fieldValue = new MFNode();

ProtoInstance687.fieldValue[0] = fieldValue688;

let fieldValue689 = browser.currentScene.createNode("fieldValue");
fieldValue689.name = "translation";
fieldValue689.value = "-0.194100007414818 0.677200019359589 -0.0423000007867813";
ProtoInstance687.fieldValue[1] = fieldValue689;

fieldValue683.children[1] = ProtoInstance687;

ProtoInstance681.fieldValue[1] = fieldValue683;

fieldValue680.children = new MFNode();

fieldValue680.children[0] = ProtoInstance681;

ProtoInstance676.fieldValue[3] = fieldValue680;

fieldValue675.children = new MFNode();

fieldValue675.children[0] = ProtoInstance676;

let ProtoInstance690 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance690.name = "Segment";
ProtoInstance690.DEF = "hanim_r_index_middle_2";
let fieldValue691 = browser.currentScene.createNode("fieldValue");
fieldValue691.name = "name";
fieldValue691.value = "r_index_middle";
ProtoInstance690.fieldValue = new MFNode();

ProtoInstance690.fieldValue[0] = fieldValue691;

fieldValue675.children[1] = ProtoInstance690;

ProtoInstance671.fieldValue[3] = fieldValue675;

fieldValue670.children = new MFNode();

fieldValue670.children[0] = ProtoInstance671;

let ProtoInstance692 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance692.name = "Segment";
ProtoInstance692.DEF = "hanim_r_index_proximal_6";
let fieldValue693 = browser.currentScene.createNode("fieldValue");
fieldValue693.name = "name";
fieldValue693.value = "r_index_proximal";
ProtoInstance692.fieldValue = new MFNode();

ProtoInstance692.fieldValue[0] = fieldValue693;

fieldValue670.children[1] = ProtoInstance692;

ProtoInstance666.fieldValue[3] = fieldValue670;

fieldValue665.children = new MFNode();

fieldValue665.children[0] = ProtoInstance666;

let ProtoInstance694 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance694.name = "Segment";
ProtoInstance694.DEF = "hanim_r_index_metacarpal_2";
let fieldValue695 = browser.currentScene.createNode("fieldValue");
fieldValue695.name = "name";
fieldValue695.value = "r_index_metacarpal";
ProtoInstance694.fieldValue = new MFNode();

ProtoInstance694.fieldValue[0] = fieldValue695;

fieldValue665.children[1] = ProtoInstance694;

ProtoInstance661.fieldValue[3] = fieldValue665;

fieldValue635.children[1] = ProtoInstance661;

let ProtoInstance696 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance696.name = "Joint";
ProtoInstance696.DEF = "hanim_r_carpometacarpal4";
let fieldValue697 = browser.currentScene.createNode("fieldValue");
fieldValue697.name = "stiffness";
fieldValue697.value = "1 1 1";
ProtoInstance696.fieldValue = new MFNode();

ProtoInstance696.fieldValue[0] = fieldValue697;

let fieldValue698 = browser.currentScene.createNode("fieldValue");
fieldValue698.name = "name";
fieldValue698.value = "r_carpometacarpal_3";
ProtoInstance696.fieldValue[1] = fieldValue698;

let fieldValue699 = browser.currentScene.createNode("fieldValue");
fieldValue699.name = "center";
fieldValue699.value = "-0.197200000286102 0.805999994277954 -0.0467999987304211";
ProtoInstance696.fieldValue[2] = fieldValue699;

let fieldValue700 = browser.currentScene.createNode("fieldValue");
fieldValue700.name = "children";
let ProtoInstance701 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance701.name = "Joint";
ProtoInstance701.DEF = "hanim_r_metacarpophalangeal4";
let fieldValue702 = browser.currentScene.createNode("fieldValue");
fieldValue702.name = "stiffness";
fieldValue702.value = "1 1 1";
ProtoInstance701.fieldValue = new MFNode();

ProtoInstance701.fieldValue[0] = fieldValue702;

let fieldValue703 = browser.currentScene.createNode("fieldValue");
fieldValue703.name = "name";
fieldValue703.value = "r_metacarpophalangeal_3";
ProtoInstance701.fieldValue[1] = fieldValue703;

let fieldValue704 = browser.currentScene.createNode("fieldValue");
fieldValue704.name = "center";
fieldValue704.value = "-0.197200000286102 0.784900009632111 -0.0467999987304211";
ProtoInstance701.fieldValue[2] = fieldValue704;

let fieldValue705 = browser.currentScene.createNode("fieldValue");
fieldValue705.name = "children";
let ProtoInstance706 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance706.name = "Joint";
ProtoInstance706.DEF = "hanim_r_carpal_proximal_interphalangeal4";
let fieldValue707 = browser.currentScene.createNode("fieldValue");
fieldValue707.name = "stiffness";
fieldValue707.value = "1 1 1";
ProtoInstance706.fieldValue = new MFNode();

ProtoInstance706.fieldValue[0] = fieldValue707;

let fieldValue708 = browser.currentScene.createNode("fieldValue");
fieldValue708.name = "name";
fieldValue708.value = "r_carpal_proximal_interphalangeal_3";
ProtoInstance706.fieldValue[1] = fieldValue708;

let fieldValue709 = browser.currentScene.createNode("fieldValue");
fieldValue709.name = "center";
fieldValue709.value = "-0.194999992847443 0.730400025844574 -0.0441000014543533";
ProtoInstance706.fieldValue[2] = fieldValue709;

let fieldValue710 = browser.currentScene.createNode("fieldValue");
fieldValue710.name = "children";
let ProtoInstance711 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance711.name = "Joint";
ProtoInstance711.DEF = "hanim_r_carpal_distal_interphalangeal4";
let fieldValue712 = browser.currentScene.createNode("fieldValue");
fieldValue712.name = "stiffness";
fieldValue712.value = "1 1 1";
ProtoInstance711.fieldValue = new MFNode();

ProtoInstance711.fieldValue[0] = fieldValue712;

let fieldValue713 = browser.currentScene.createNode("fieldValue");
fieldValue713.name = "name";
fieldValue713.value = "r_carpal_distal_interphalangeal_3";
ProtoInstance711.fieldValue[1] = fieldValue713;

let fieldValue714 = browser.currentScene.createNode("fieldValue");
fieldValue714.name = "center";
fieldValue714.value = "-0.193900004029274 0.704200029373169 -0.0432000011205673";
ProtoInstance711.fieldValue[2] = fieldValue714;

let fieldValue715 = browser.currentScene.createNode("fieldValue");
fieldValue715.name = "children";
let ProtoInstance716 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance716.name = "Segment";
ProtoInstance716.DEF = "hanim_r_carpal_distal_phalanx4";
let fieldValue717 = browser.currentScene.createNode("fieldValue");
fieldValue717.name = "name";
fieldValue717.value = "r_carpal_distal_phalanx_3";
ProtoInstance716.fieldValue = new MFNode();

ProtoInstance716.fieldValue[0] = fieldValue717;

let fieldValue718 = browser.currentScene.createNode("fieldValue");
fieldValue718.name = "children";
let ProtoInstance719 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance719.name = "Site";
ProtoInstance719.DEF = "hanim_r_carpal_distal_phalanx_3_tip_2";
let fieldValue720 = browser.currentScene.createNode("fieldValue");
fieldValue720.name = "name";
fieldValue720.value = "r_carpal_distal_phalanx_3_tip";
ProtoInstance719.fieldValue = new MFNode();

ProtoInstance719.fieldValue[0] = fieldValue720;

let fieldValue721 = browser.currentScene.createNode("fieldValue");
fieldValue721.name = "translation";
fieldValue721.value = "-0.196899995207787 0.675800025463104 -0.0427000001072884";
ProtoInstance719.fieldValue[1] = fieldValue721;

fieldValue718.children = new MFNode();

fieldValue718.children[0] = ProtoInstance719;

ProtoInstance716.fieldValue[1] = fieldValue718;

fieldValue715.children = new MFNode();

fieldValue715.children[0] = ProtoInstance716;

ProtoInstance711.fieldValue[3] = fieldValue715;

fieldValue710.children = new MFNode();

fieldValue710.children[0] = ProtoInstance711;

let ProtoInstance722 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance722.name = "Segment";
ProtoInstance722.DEF = "hanim_r_middle_middle_2";
let fieldValue723 = browser.currentScene.createNode("fieldValue");
fieldValue723.name = "name";
fieldValue723.value = "r_middle_middle";
ProtoInstance722.fieldValue = new MFNode();

ProtoInstance722.fieldValue[0] = fieldValue723;

fieldValue710.children[1] = ProtoInstance722;

ProtoInstance706.fieldValue[3] = fieldValue710;

fieldValue705.children = new MFNode();

fieldValue705.children[0] = ProtoInstance706;

let ProtoInstance724 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance724.name = "Segment";
ProtoInstance724.DEF = "hanim_r_middle_proximal_2";
let fieldValue725 = browser.currentScene.createNode("fieldValue");
fieldValue725.name = "name";
fieldValue725.value = "r_middle_proximal";
ProtoInstance724.fieldValue = new MFNode();

ProtoInstance724.fieldValue[0] = fieldValue725;

fieldValue705.children[1] = ProtoInstance724;

ProtoInstance701.fieldValue[3] = fieldValue705;

fieldValue700.children = new MFNode();

fieldValue700.children[0] = ProtoInstance701;

let ProtoInstance726 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance726.name = "Segment";
ProtoInstance726.DEF = "hanim_r_middle_metacarpal_2";
let fieldValue727 = browser.currentScene.createNode("fieldValue");
fieldValue727.name = "name";
fieldValue727.value = "r_middle_metacarpal";
ProtoInstance726.fieldValue = new MFNode();

ProtoInstance726.fieldValue[0] = fieldValue727;

fieldValue700.children[1] = ProtoInstance726;

ProtoInstance696.fieldValue[3] = fieldValue700;

fieldValue635.children[2] = ProtoInstance696;

let ProtoInstance728 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance728.name = "Joint";
ProtoInstance728.DEF = "hanim_r_carpometacarpal5";
let fieldValue729 = browser.currentScene.createNode("fieldValue");
fieldValue729.name = "stiffness";
fieldValue729.value = "1 1 1";
ProtoInstance728.fieldValue = new MFNode();

ProtoInstance728.fieldValue[0] = fieldValue729;

let fieldValue730 = browser.currentScene.createNode("fieldValue");
fieldValue730.name = "name";
fieldValue730.value = "r_carpometacarpal_4";
ProtoInstance728.fieldValue[1] = fieldValue730;

let fieldValue731 = browser.currentScene.createNode("fieldValue");
fieldValue731.name = "center";
fieldValue731.value = "-0.195099994540215 0.804899990558624 -0.0732000023126602";
ProtoInstance728.fieldValue[2] = fieldValue731;

let fieldValue732 = browser.currentScene.createNode("fieldValue");
fieldValue732.name = "children";
let ProtoInstance733 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance733.name = "Joint";
ProtoInstance733.DEF = "hanim_r_metacarpophalangeal5";
let fieldValue734 = browser.currentScene.createNode("fieldValue");
fieldValue734.name = "stiffness";
fieldValue734.value = "1 1 1";
ProtoInstance733.fieldValue = new MFNode();

ProtoInstance733.fieldValue[0] = fieldValue734;

let fieldValue735 = browser.currentScene.createNode("fieldValue");
fieldValue735.name = "name";
fieldValue735.value = "r_metacarpophalangeal_4";
ProtoInstance733.fieldValue[1] = fieldValue735;

let fieldValue736 = browser.currentScene.createNode("fieldValue");
fieldValue736.name = "center";
fieldValue736.value = "-0.195099994540215 0.784500002861023 -0.0732000023126602";
ProtoInstance733.fieldValue[2] = fieldValue736;

let fieldValue737 = browser.currentScene.createNode("fieldValue");
fieldValue737.name = "children";
let ProtoInstance738 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance738.name = "Joint";
ProtoInstance738.DEF = "hanim_r_carpal_proximal_interphalangeal5";
let fieldValue739 = browser.currentScene.createNode("fieldValue");
fieldValue739.name = "stiffness";
fieldValue739.value = "1 1 1";
ProtoInstance738.fieldValue = new MFNode();

ProtoInstance738.fieldValue[0] = fieldValue739;

let fieldValue740 = browser.currentScene.createNode("fieldValue");
fieldValue740.name = "name";
fieldValue740.value = "r_carpal_proximal_interphalangeal_4";
ProtoInstance738.fieldValue[1] = fieldValue740;

let fieldValue741 = browser.currentScene.createNode("fieldValue");
fieldValue741.name = "center";
fieldValue741.value = "-0.19200000166893 0.731800019741058 -0.0715999975800514";
ProtoInstance738.fieldValue[2] = fieldValue741;

let fieldValue742 = browser.currentScene.createNode("fieldValue");
fieldValue742.name = "children";
let ProtoInstance743 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance743.name = "Joint";
ProtoInstance743.DEF = "hanim_r_carpal_distal_interphalangeal5";
let fieldValue744 = browser.currentScene.createNode("fieldValue");
fieldValue744.name = "stiffness";
fieldValue744.value = "1 1 1";
ProtoInstance743.fieldValue = new MFNode();

ProtoInstance743.fieldValue[0] = fieldValue744;

let fieldValue745 = browser.currentScene.createNode("fieldValue");
fieldValue745.name = "name";
fieldValue745.value = "r_carpal_distal_interphalangeal_4";
ProtoInstance743.fieldValue[1] = fieldValue745;

let fieldValue746 = browser.currentScene.createNode("fieldValue");
fieldValue746.name = "center";
fieldValue746.value = "-0.190799996256828 0.70770001411438 -0.0706000030040741";
ProtoInstance743.fieldValue[2] = fieldValue746;

let fieldValue747 = browser.currentScene.createNode("fieldValue");
fieldValue747.name = "children";
let ProtoInstance748 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance748.name = "Segment";
ProtoInstance748.DEF = "hanim_r_carpal_distal_phalanx5";
let fieldValue749 = browser.currentScene.createNode("fieldValue");
fieldValue749.name = "name";
fieldValue749.value = "r_carpal_distal_phalanx_4";
ProtoInstance748.fieldValue = new MFNode();

ProtoInstance748.fieldValue[0] = fieldValue749;

let fieldValue750 = browser.currentScene.createNode("fieldValue");
fieldValue750.name = "children";
let ProtoInstance751 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance751.name = "Site";
ProtoInstance751.DEF = "hanim_r_carpal_distal_phalanx_4_tip_2";
let fieldValue752 = browser.currentScene.createNode("fieldValue");
fieldValue752.name = "name";
fieldValue752.value = "r_carpal_distal_phalanx_4_tip";
ProtoInstance751.fieldValue = new MFNode();

ProtoInstance751.fieldValue[0] = fieldValue752;

let fieldValue753 = browser.currentScene.createNode("fieldValue");
fieldValue753.name = "translation";
fieldValue753.value = "-0.193399995565414 0.677799999713898 -0.069300003349781";
ProtoInstance751.fieldValue[1] = fieldValue753;

fieldValue750.children = new MFNode();

fieldValue750.children[0] = ProtoInstance751;

ProtoInstance748.fieldValue[1] = fieldValue750;

fieldValue747.children = new MFNode();

fieldValue747.children[0] = ProtoInstance748;

ProtoInstance743.fieldValue[3] = fieldValue747;

fieldValue742.children = new MFNode();

fieldValue742.children[0] = ProtoInstance743;

let ProtoInstance754 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance754.name = "Segment";
ProtoInstance754.DEF = "hanim_r_ring_middle_2";
let fieldValue755 = browser.currentScene.createNode("fieldValue");
fieldValue755.name = "name";
fieldValue755.value = "r_ring_middle";
ProtoInstance754.fieldValue = new MFNode();

ProtoInstance754.fieldValue[0] = fieldValue755;

fieldValue742.children[1] = ProtoInstance754;

ProtoInstance738.fieldValue[3] = fieldValue742;

fieldValue737.children = new MFNode();

fieldValue737.children[0] = ProtoInstance738;

let ProtoInstance756 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance756.name = "Segment";
ProtoInstance756.DEF = "hanim_r_ring_proximal_2";
let fieldValue757 = browser.currentScene.createNode("fieldValue");
fieldValue757.name = "name";
fieldValue757.value = "r_ring_proximal";
ProtoInstance756.fieldValue = new MFNode();

ProtoInstance756.fieldValue[0] = fieldValue757;

fieldValue737.children[1] = ProtoInstance756;

ProtoInstance733.fieldValue[3] = fieldValue737;

fieldValue732.children = new MFNode();

fieldValue732.children[0] = ProtoInstance733;

let ProtoInstance758 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance758.name = "Segment";
ProtoInstance758.DEF = "hanim_r_ring_metacarpal_2";
let fieldValue759 = browser.currentScene.createNode("fieldValue");
fieldValue759.name = "name";
fieldValue759.value = "r_ring_metacarpal";
ProtoInstance758.fieldValue = new MFNode();

ProtoInstance758.fieldValue[0] = fieldValue759;

fieldValue732.children[1] = ProtoInstance758;

ProtoInstance728.fieldValue[3] = fieldValue732;

fieldValue635.children[3] = ProtoInstance728;

let ProtoInstance760 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance760.name = "Joint";
ProtoInstance760.DEF = "hanim_r_carpometacarpal6";
let fieldValue761 = browser.currentScene.createNode("fieldValue");
fieldValue761.name = "stiffness";
fieldValue761.value = "1 1 1";
ProtoInstance760.fieldValue = new MFNode();

ProtoInstance760.fieldValue[0] = fieldValue761;

let fieldValue762 = browser.currentScene.createNode("fieldValue");
fieldValue762.name = "name";
fieldValue762.value = "r_carpometacarpal_5";
ProtoInstance760.fieldValue[1] = fieldValue762;

let fieldValue763 = browser.currentScene.createNode("fieldValue");
fieldValue763.name = "center";
fieldValue763.value = "-0.1925999969244 0.809599995613098 -0.0974999964237213";
ProtoInstance760.fieldValue[2] = fieldValue763;

let fieldValue764 = browser.currentScene.createNode("fieldValue");
fieldValue764.name = "children";
let ProtoInstance765 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance765.name = "Joint";
ProtoInstance765.DEF = "hanim_r_metacarpophalangeal6";
let fieldValue766 = browser.currentScene.createNode("fieldValue");
fieldValue766.name = "stiffness";
fieldValue766.value = "1 1 1";
ProtoInstance765.fieldValue = new MFNode();

ProtoInstance765.fieldValue[0] = fieldValue766;

let fieldValue767 = browser.currentScene.createNode("fieldValue");
fieldValue767.name = "name";
fieldValue767.value = "r_metacarpophalangeal_5";
ProtoInstance765.fieldValue[1] = fieldValue767;

let fieldValue768 = browser.currentScene.createNode("fieldValue");
fieldValue768.name = "center";
fieldValue768.value = "-0.1925999969244 0.789600014686584 -0.0974999964237213";
ProtoInstance765.fieldValue[2] = fieldValue768;

let fieldValue769 = browser.currentScene.createNode("fieldValue");
fieldValue769.name = "children";
let ProtoInstance770 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance770.name = "Joint";
ProtoInstance770.DEF = "hanim_r_carpal_proximal_interphalangeal6";
let fieldValue771 = browser.currentScene.createNode("fieldValue");
fieldValue771.name = "stiffness";
fieldValue771.value = "1 1 1";
ProtoInstance770.fieldValue = new MFNode();

ProtoInstance770.fieldValue[0] = fieldValue771;

let fieldValue772 = browser.currentScene.createNode("fieldValue");
fieldValue772.name = "name";
fieldValue772.value = "r_carpal_proximal_interphalangeal_5";
ProtoInstance770.fieldValue[1] = fieldValue772;

let fieldValue773 = browser.currentScene.createNode("fieldValue");
fieldValue773.name = "center";
fieldValue773.value = "-0.190200001001358 0.748300015926361 -0.0962999984622002";
ProtoInstance770.fieldValue[2] = fieldValue773;

let fieldValue774 = browser.currentScene.createNode("fieldValue");
fieldValue774.name = "children";
let ProtoInstance775 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance775.name = "Joint";
ProtoInstance775.DEF = "hanim_r_carpal_distal_interphalangeal6";
let fieldValue776 = browser.currentScene.createNode("fieldValue");
fieldValue776.name = "stiffness";
fieldValue776.value = "1 1 1";
ProtoInstance775.fieldValue = new MFNode();

ProtoInstance775.fieldValue[0] = fieldValue776;

let fieldValue777 = browser.currentScene.createNode("fieldValue");
fieldValue777.name = "name";
fieldValue777.value = "r_carpal_distal_interphalangeal_5";
ProtoInstance775.fieldValue[1] = fieldValue777;

let fieldValue778 = browser.currentScene.createNode("fieldValue");
fieldValue778.name = "center";
fieldValue778.value = "-0.190799996256828 0.754000008106232 -0.096000000834465";
ProtoInstance775.fieldValue[2] = fieldValue778;

let fieldValue779 = browser.currentScene.createNode("fieldValue");
fieldValue779.name = "children";
let ProtoInstance780 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance780.name = "Segment";
ProtoInstance780.DEF = "hanim_r_carpal_distal_phalanx6";
let fieldValue781 = browser.currentScene.createNode("fieldValue");
fieldValue781.name = "name";
fieldValue781.value = "r_carpal_distal_phalanx_5";
ProtoInstance780.fieldValue = new MFNode();

ProtoInstance780.fieldValue[0] = fieldValue781;

let fieldValue782 = browser.currentScene.createNode("fieldValue");
fieldValue782.name = "children";
let ProtoInstance783 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance783.name = "Site";
ProtoInstance783.DEF = "hanim_r_carpal_distal_phalanx_5_tip_2";
let fieldValue784 = browser.currentScene.createNode("fieldValue");
fieldValue784.name = "name";
fieldValue784.value = "r_carpal_distal_phalanx_5_tip";
ProtoInstance783.fieldValue = new MFNode();

ProtoInstance783.fieldValue[0] = fieldValue784;

let fieldValue785 = browser.currentScene.createNode("fieldValue");
fieldValue785.name = "translation";
fieldValue785.value = "-0.193800002336502 0.703499972820282 -0.0948999971151352";
ProtoInstance783.fieldValue[1] = fieldValue785;

fieldValue782.children = new MFNode();

fieldValue782.children[0] = ProtoInstance783;

ProtoInstance780.fieldValue[1] = fieldValue782;

fieldValue779.children = new MFNode();

fieldValue779.children[0] = ProtoInstance780;

ProtoInstance775.fieldValue[3] = fieldValue779;

fieldValue774.children = new MFNode();

fieldValue774.children[0] = ProtoInstance775;

let ProtoInstance786 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance786.name = "Segment";
ProtoInstance786.DEF = "hanim_r_pinky_middle_2";
let fieldValue787 = browser.currentScene.createNode("fieldValue");
fieldValue787.name = "name";
fieldValue787.value = "r_pinky_middle";
ProtoInstance786.fieldValue = new MFNode();

ProtoInstance786.fieldValue[0] = fieldValue787;

fieldValue774.children[1] = ProtoInstance786;

ProtoInstance770.fieldValue[3] = fieldValue774;

fieldValue769.children = new MFNode();

fieldValue769.children[0] = ProtoInstance770;

let ProtoInstance788 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance788.name = "Segment";
ProtoInstance788.DEF = "hanim_r_pinky_proximal_2";
let fieldValue789 = browser.currentScene.createNode("fieldValue");
fieldValue789.name = "name";
fieldValue789.value = "r_pinky_proximal";
ProtoInstance788.fieldValue = new MFNode();

ProtoInstance788.fieldValue[0] = fieldValue789;

fieldValue769.children[1] = ProtoInstance788;

ProtoInstance765.fieldValue[3] = fieldValue769;

fieldValue764.children = new MFNode();

fieldValue764.children[0] = ProtoInstance765;

let ProtoInstance790 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance790.name = "Segment";
ProtoInstance790.DEF = "hanim_r_pinky_metacarpal_2";
let fieldValue791 = browser.currentScene.createNode("fieldValue");
fieldValue791.name = "name";
fieldValue791.value = "r_pinky_metacarpal";
ProtoInstance790.fieldValue = new MFNode();

ProtoInstance790.fieldValue[0] = fieldValue791;

fieldValue764.children[1] = ProtoInstance790;

ProtoInstance760.fieldValue[3] = fieldValue764;

fieldValue635.children[4] = ProtoInstance760;

let ProtoInstance792 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance792.name = "Segment";
ProtoInstance792.DEF = "hanim_r_hand_2";
let fieldValue793 = browser.currentScene.createNode("fieldValue");
fieldValue793.name = "name";
fieldValue793.value = "r_hand";
ProtoInstance792.fieldValue = new MFNode();

ProtoInstance792.fieldValue[0] = fieldValue793;

let fieldValue794 = browser.currentScene.createNode("fieldValue");
fieldValue794.name = "children";
let ProtoInstance795 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance795.name = "Site";
ProtoInstance795.DEF = "hanim_r_metacarpal_phalanx3";
let fieldValue796 = browser.currentScene.createNode("fieldValue");
fieldValue796.name = "name";
fieldValue796.value = "r_metacarpal_phalanx_2";
ProtoInstance795.fieldValue = new MFNode();

ProtoInstance795.fieldValue[0] = fieldValue796;

let fieldValue797 = browser.currentScene.createNode("fieldValue");
fieldValue797.name = "translation";
fieldValue797.value = "-0.197699993848801 0.816900014877319 -0.0176999997347593";
ProtoInstance795.fieldValue[1] = fieldValue797;

fieldValue794.children = new MFNode();

fieldValue794.children[0] = ProtoInstance795;

let ProtoInstance798 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance798.name = "Site";
ProtoInstance798.DEF = "hanim_r_ulnar_styloid_2";
let fieldValue799 = browser.currentScene.createNode("fieldValue");
fieldValue799.name = "name";
fieldValue799.value = "r_ulnar_styloid";
ProtoInstance798.fieldValue = new MFNode();

ProtoInstance798.fieldValue[0] = fieldValue799;

let fieldValue800 = browser.currentScene.createNode("fieldValue");
fieldValue800.name = "translation";
fieldValue800.value = "-0.21170000731945 0.856199979782104 -0.0584000013768673";
ProtoInstance798.fieldValue[1] = fieldValue800;

fieldValue794.children[1] = ProtoInstance798;

let ProtoInstance801 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance801.name = "Site";
ProtoInstance801.DEF = "hanim_r_metacarpal_phalanx6";
let fieldValue802 = browser.currentScene.createNode("fieldValue");
fieldValue802.name = "name";
fieldValue802.value = "r_metacarpal_phalanx_5";
ProtoInstance801.fieldValue = new MFNode();

ProtoInstance801.fieldValue[0] = fieldValue802;

let fieldValue803 = browser.currentScene.createNode("fieldValue");
fieldValue803.name = "translation";
fieldValue803.value = "-0.192900002002716 0.788999974727631 -0.10639999806881";
ProtoInstance801.fieldValue[1] = fieldValue803;

fieldValue794.children[2] = ProtoInstance801;

ProtoInstance792.fieldValue[1] = fieldValue794;

fieldValue635.children[5] = ProtoInstance792;

ProtoInstance631.fieldValue[3] = fieldValue635;

fieldValue630.children = new MFNode();

fieldValue630.children[0] = ProtoInstance631;

let ProtoInstance804 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance804.name = "Segment";
ProtoInstance804.DEF = "hanim_r_forearm_2";
let fieldValue805 = browser.currentScene.createNode("fieldValue");
fieldValue805.name = "name";
fieldValue805.value = "r_forearm";
ProtoInstance804.fieldValue = new MFNode();

ProtoInstance804.fieldValue[0] = fieldValue805;

let fieldValue806 = browser.currentScene.createNode("fieldValue");
fieldValue806.name = "children";
let ProtoInstance807 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance807.name = "Site";
ProtoInstance807.DEF = "hanim_r_radial_styloid_2";
let fieldValue808 = browser.currentScene.createNode("fieldValue");
fieldValue808.name = "name";
fieldValue808.value = "r_radial_styloid";
ProtoInstance807.fieldValue = new MFNode();

ProtoInstance807.fieldValue[0] = fieldValue808;

let fieldValue809 = browser.currentScene.createNode("fieldValue");
fieldValue809.name = "translation";
fieldValue809.value = "-0.188400000333786 0.86760002374649 -0.0359999984502792";
ProtoInstance807.fieldValue[1] = fieldValue809;

fieldValue806.children = new MFNode();

fieldValue806.children[0] = ProtoInstance807;

let ProtoInstance810 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance810.name = "Site";
ProtoInstance810.DEF = "hanim_r_olecranon_2";
let fieldValue811 = browser.currentScene.createNode("fieldValue");
fieldValue811.name = "name";
fieldValue811.value = "r_olecranon";
ProtoInstance810.fieldValue = new MFNode();

ProtoInstance810.fieldValue[0] = fieldValue811;

let fieldValue812 = browser.currentScene.createNode("fieldValue");
fieldValue812.name = "translation";
fieldValue812.value = "-0.190699994564056 1.14049994945526 -0.106499999761581";
ProtoInstance810.fieldValue[1] = fieldValue812;

fieldValue806.children[1] = ProtoInstance810;

let ProtoInstance813 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance813.name = "Site";
ProtoInstance813.DEF = "hanim_r_humeral_medial_epicondyles_2";
let fieldValue814 = browser.currentScene.createNode("fieldValue");
fieldValue814.name = "name";
fieldValue814.value = "r_humeral_medial_epicondyles";
ProtoInstance813.fieldValue = new MFNode();

ProtoInstance813.fieldValue[0] = fieldValue814;

let fieldValue815 = browser.currentScene.createNode("fieldValue");
fieldValue815.name = "translation";
fieldValue815.value = "-0.167999997735024 1.12979996204376 -0.106200002133846";
ProtoInstance813.fieldValue[1] = fieldValue815;

fieldValue806.children[2] = ProtoInstance813;

let ProtoInstance816 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance816.name = "Site";
ProtoInstance816.DEF = "hanim_r_radiale_2";
let fieldValue817 = browser.currentScene.createNode("fieldValue");
fieldValue817.name = "name";
fieldValue817.value = "r_radiale";
ProtoInstance816.fieldValue = new MFNode();

ProtoInstance816.fieldValue[0] = fieldValue817;

let fieldValue818 = browser.currentScene.createNode("fieldValue");
fieldValue818.name = "translation";
fieldValue818.value = "-0.212999999523163 1.130499958992 -0.109099999070168";
ProtoInstance816.fieldValue[1] = fieldValue818;

fieldValue806.children[3] = ProtoInstance816;

ProtoInstance804.fieldValue[1] = fieldValue806;

fieldValue630.children[1] = ProtoInstance804;

ProtoInstance626.fieldValue[3] = fieldValue630;

fieldValue625.children = new MFNode();

fieldValue625.children[0] = ProtoInstance626;

let ProtoInstance819 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance819.name = "Segment";
ProtoInstance819.DEF = "hanim_r_upperarm_2";
let fieldValue820 = browser.currentScene.createNode("fieldValue");
fieldValue820.name = "name";
fieldValue820.value = "r_upperarm";
ProtoInstance819.fieldValue = new MFNode();

ProtoInstance819.fieldValue[0] = fieldValue820;

let fieldValue821 = browser.currentScene.createNode("fieldValue");
fieldValue821.name = "children";
let ProtoInstance822 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance822.name = "Site";
ProtoInstance822.DEF = "hanim_r_humeral_lateral_epicondyles_2";
let fieldValue823 = browser.currentScene.createNode("fieldValue");
fieldValue823.name = "name";
fieldValue823.value = "r_humeral_lateral_epicondyles";
ProtoInstance822.fieldValue = new MFNode();

ProtoInstance822.fieldValue[0] = fieldValue823;

let fieldValue824 = browser.currentScene.createNode("fieldValue");
fieldValue824.name = "translation";
fieldValue824.value = "-0.222399994730949 1.15170001983643 -0.103299997746944";
ProtoInstance822.fieldValue[1] = fieldValue824;

fieldValue821.children = new MFNode();

fieldValue821.children[0] = ProtoInstance822;

ProtoInstance819.fieldValue[1] = fieldValue821;

fieldValue625.children[1] = ProtoInstance819;

ProtoInstance621.fieldValue[3] = fieldValue625;

fieldValue620.children = new MFNode();

fieldValue620.children[0] = ProtoInstance621;

let ProtoInstance825 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance825.name = "Segment";
ProtoInstance825.DEF = "hanim_r_scapula_2";
let fieldValue826 = browser.currentScene.createNode("fieldValue");
fieldValue826.name = "name";
fieldValue826.value = "r_scapula";
ProtoInstance825.fieldValue = new MFNode();

ProtoInstance825.fieldValue[0] = fieldValue826;

fieldValue620.children[1] = ProtoInstance825;

ProtoInstance616.fieldValue[3] = fieldValue620;

fieldValue615.children = new MFNode();

fieldValue615.children[0] = ProtoInstance616;

let ProtoInstance827 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance827.name = "Segment";
ProtoInstance827.DEF = "hanim_r_clavicle_2";
let fieldValue828 = browser.currentScene.createNode("fieldValue");
fieldValue828.name = "name";
fieldValue828.value = "r_clavicle";
ProtoInstance827.fieldValue = new MFNode();

ProtoInstance827.fieldValue[0] = fieldValue828;

let fieldValue829 = browser.currentScene.createNode("fieldValue");
fieldValue829.name = "children";
let ProtoInstance830 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance830.name = "Site";
ProtoInstance830.DEF = "hanim_r_clavicale_2";
let fieldValue831 = browser.currentScene.createNode("fieldValue");
fieldValue831.name = "name";
fieldValue831.value = "r_clavicale";
ProtoInstance830.fieldValue = new MFNode();

ProtoInstance830.fieldValue[0] = fieldValue831;

let fieldValue832 = browser.currentScene.createNode("fieldValue");
fieldValue832.name = "translation";
fieldValue832.value = "-0.0115000000223517 1.49430000782013 0.0399999991059303";
ProtoInstance830.fieldValue[1] = fieldValue832;

fieldValue829.children = new MFNode();

fieldValue829.children[0] = ProtoInstance830;

let ProtoInstance833 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance833.name = "Site";
ProtoInstance833.DEF = "hanim_r_acromion_2";
let fieldValue834 = browser.currentScene.createNode("fieldValue");
fieldValue834.name = "name";
fieldValue834.value = "r_acromion";
ProtoInstance833.fieldValue = new MFNode();

ProtoInstance833.fieldValue[0] = fieldValue834;

let fieldValue835 = browser.currentScene.createNode("fieldValue");
fieldValue835.name = "translation";
fieldValue835.value = "-0.190500006079674 1.47909998893738 -0.0430999994277954";
ProtoInstance833.fieldValue[1] = fieldValue835;

fieldValue829.children[1] = ProtoInstance833;

let ProtoInstance836 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance836.name = "Site";
ProtoInstance836.DEF = "hanim_r_axilla_proximal_2";
let fieldValue837 = browser.currentScene.createNode("fieldValue");
fieldValue837.name = "name";
fieldValue837.value = "r_axilla_proximal";
ProtoInstance836.fieldValue = new MFNode();

ProtoInstance836.fieldValue[0] = fieldValue837;

let fieldValue838 = browser.currentScene.createNode("fieldValue");
fieldValue838.name = "translation";
fieldValue838.value = "-0.162599995732307 1.40719997882843 -0.00310000008903444";
ProtoInstance836.fieldValue[1] = fieldValue838;

fieldValue829.children[2] = ProtoInstance836;

let ProtoInstance839 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance839.name = "Site";
ProtoInstance839.DEF = "hanim_r_axilla_distal_2";
let fieldValue840 = browser.currentScene.createNode("fieldValue");
fieldValue840.name = "name";
fieldValue840.value = "r_axilla_distal";
ProtoInstance839.fieldValue = new MFNode();

ProtoInstance839.fieldValue[0] = fieldValue840;

let fieldValue841 = browser.currentScene.createNode("fieldValue");
fieldValue841.name = "translation";
fieldValue841.value = "-0.160300001502037 1.40980005264282 -0.0825999975204468";
ProtoInstance839.fieldValue[1] = fieldValue841;

fieldValue829.children[3] = ProtoInstance839;

ProtoInstance827.fieldValue[1] = fieldValue829;

fieldValue615.children[1] = ProtoInstance827;

ProtoInstance611.fieldValue[3] = fieldValue615;

fieldValue327.children[2] = ProtoInstance611;

let ProtoInstance842 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance842.name = "Segment";
ProtoInstance842.DEF = "hanim_t1_2";
let fieldValue843 = browser.currentScene.createNode("fieldValue");
fieldValue843.name = "name";
fieldValue843.value = "t1";
ProtoInstance842.fieldValue = new MFNode();

ProtoInstance842.fieldValue[0] = fieldValue843;

let fieldValue844 = browser.currentScene.createNode("fieldValue");
fieldValue844.name = "children";
let ProtoInstance845 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance845.name = "Site";
ProtoInstance845.DEF = "hanim_r_neck_base_2";
let fieldValue846 = browser.currentScene.createNode("fieldValue");
fieldValue846.name = "name";
fieldValue846.value = "r_neck_base";
ProtoInstance845.fieldValue = new MFNode();

ProtoInstance845.fieldValue[0] = fieldValue846;

let fieldValue847 = browser.currentScene.createNode("fieldValue");
fieldValue847.name = "translation";
fieldValue847.value = "-0.0419000014662743 1.51489996910095 -0.0219999998807907";
ProtoInstance845.fieldValue[1] = fieldValue847;

fieldValue844.children = new MFNode();

fieldValue844.children[0] = ProtoInstance845;

let ProtoInstance848 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance848.name = "Site";
ProtoInstance848.DEF = "hanim_l_neck_base_2";
let fieldValue849 = browser.currentScene.createNode("fieldValue");
fieldValue849.name = "name";
fieldValue849.value = "l_neck_base";
ProtoInstance848.fieldValue = new MFNode();

ProtoInstance848.fieldValue[0] = fieldValue849;

let fieldValue850 = browser.currentScene.createNode("fieldValue");
fieldValue850.name = "translation";
fieldValue850.value = "0.0645999982953072 1.51409995555878 -0.0379999987781048";
ProtoInstance848.fieldValue[1] = fieldValue850;

fieldValue844.children[1] = ProtoInstance848;

let ProtoInstance851 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance851.name = "Site";
ProtoInstance851.DEF = "hanim_suprasternale_2";
let fieldValue852 = browser.currentScene.createNode("fieldValue");
fieldValue852.name = "name";
fieldValue852.value = "suprasternale";
ProtoInstance851.fieldValue = new MFNode();

ProtoInstance851.fieldValue[0] = fieldValue852;

let fieldValue853 = browser.currentScene.createNode("fieldValue");
fieldValue853.name = "translation";
fieldValue853.value = "0.00839999970048666 1.47140002250671 0.0551000013947487";
ProtoInstance851.fieldValue[1] = fieldValue853;

fieldValue844.children[2] = ProtoInstance851;

let ProtoInstance854 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance854.name = "Site";
ProtoInstance854.DEF = "hanim_cervicale_2";
let fieldValue855 = browser.currentScene.createNode("fieldValue");
fieldValue855.name = "name";
fieldValue855.value = "cervicale";
ProtoInstance854.fieldValue = new MFNode();

ProtoInstance854.fieldValue[0] = fieldValue855;

let fieldValue856 = browser.currentScene.createNode("fieldValue");
fieldValue856.name = "translation";
fieldValue856.value = "0.0063999998383224 1.51999998092651 -0.0815000012516975";
ProtoInstance854.fieldValue[1] = fieldValue856;

fieldValue844.children[3] = ProtoInstance854;

ProtoInstance842.fieldValue[1] = fieldValue844;

fieldValue327.children[3] = ProtoInstance842;

ProtoInstance323.fieldValue[3] = fieldValue327;

fieldValue322.children = new MFNode();

fieldValue322.children[0] = ProtoInstance323;

let ProtoInstance857 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance857.name = "Segment";
ProtoInstance857.DEF = "hanim_t6_2";
let fieldValue858 = browser.currentScene.createNode("fieldValue");
fieldValue858.name = "name";
fieldValue858.value = "t6";
ProtoInstance857.fieldValue = new MFNode();

ProtoInstance857.fieldValue[0] = fieldValue858;

fieldValue322.children[1] = ProtoInstance857;

ProtoInstance318.fieldValue[3] = fieldValue322;

fieldValue317.children = new MFNode();

fieldValue317.children[0] = ProtoInstance318;

let ProtoInstance859 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance859.name = "Segment";
ProtoInstance859.DEF = "hanim_t10_2";
let fieldValue860 = browser.currentScene.createNode("fieldValue");
fieldValue860.name = "name";
fieldValue860.value = "t10";
ProtoInstance859.fieldValue = new MFNode();

ProtoInstance859.fieldValue[0] = fieldValue860;

let fieldValue861 = browser.currentScene.createNode("fieldValue");
fieldValue861.name = "children";
let ProtoInstance862 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance862.name = "Site";
ProtoInstance862.DEF = "hanim_r_thelion_2";
let fieldValue863 = browser.currentScene.createNode("fieldValue");
fieldValue863.name = "name";
fieldValue863.value = "r_thelion";
ProtoInstance862.fieldValue = new MFNode();

ProtoInstance862.fieldValue[0] = fieldValue863;

let fieldValue864 = browser.currentScene.createNode("fieldValue");
fieldValue864.name = "translation";
fieldValue864.value = "-0.0736000016331673 1.33850002288818 0.121699996292591";
ProtoInstance862.fieldValue[1] = fieldValue864;

fieldValue861.children = new MFNode();

fieldValue861.children[0] = ProtoInstance862;

let ProtoInstance865 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance865.name = "Site";
ProtoInstance865.DEF = "hanim_l_thelion_2";
let fieldValue866 = browser.currentScene.createNode("fieldValue");
fieldValue866.name = "name";
fieldValue866.value = "l_thelion";
ProtoInstance865.fieldValue = new MFNode();

ProtoInstance865.fieldValue[0] = fieldValue866;

let fieldValue867 = browser.currentScene.createNode("fieldValue");
fieldValue867.name = "translation";
fieldValue867.value = "0.0917999967932701 1.33819997310638 0.119199998676777";
ProtoInstance865.fieldValue[1] = fieldValue867;

fieldValue861.children[1] = ProtoInstance865;

let ProtoInstance868 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance868.name = "Site";
ProtoInstance868.DEF = "hanim_substernale_2";
let fieldValue869 = browser.currentScene.createNode("fieldValue");
fieldValue869.name = "name";
fieldValue869.value = "substernale";
ProtoInstance868.fieldValue = new MFNode();

ProtoInstance868.fieldValue[0] = fieldValue869;

let fieldValue870 = browser.currentScene.createNode("fieldValue");
fieldValue870.name = "translation";
fieldValue870.value = "0.008500000461936 1.29949998855591 0.114699997007847";
ProtoInstance868.fieldValue[1] = fieldValue870;

fieldValue861.children[2] = ProtoInstance868;

ProtoInstance859.fieldValue[1] = fieldValue861;

fieldValue317.children[1] = ProtoInstance859;

ProtoInstance313.fieldValue[3] = fieldValue317;

fieldValue312.children = new MFNode();

fieldValue312.children[0] = ProtoInstance313;

let ProtoInstance871 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance871.name = "Segment";
ProtoInstance871.DEF = "hanim_l1_2";
let fieldValue872 = browser.currentScene.createNode("fieldValue");
fieldValue872.name = "name";
fieldValue872.value = "l1";
ProtoInstance871.fieldValue = new MFNode();

ProtoInstance871.fieldValue[0] = fieldValue872;

fieldValue312.children[1] = ProtoInstance871;

ProtoInstance308.fieldValue[3] = fieldValue312;

fieldValue307.children = new MFNode();

fieldValue307.children[0] = ProtoInstance308;

let ProtoInstance873 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance873.name = "Segment";
ProtoInstance873.DEF = "hanim_l3_2";
let fieldValue874 = browser.currentScene.createNode("fieldValue");
fieldValue874.name = "name";
fieldValue874.value = "l3";
ProtoInstance873.fieldValue = new MFNode();

ProtoInstance873.fieldValue[0] = fieldValue874;

let fieldValue875 = browser.currentScene.createNode("fieldValue");
fieldValue875.name = "children";
let ProtoInstance876 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance876.name = "Site";
ProtoInstance876.DEF = "hanim_r_rib10_2";
let fieldValue877 = browser.currentScene.createNode("fieldValue");
fieldValue877.name = "name";
fieldValue877.value = "r_rib10";
ProtoInstance876.fieldValue = new MFNode();

ProtoInstance876.fieldValue[0] = fieldValue877;

let fieldValue878 = browser.currentScene.createNode("fieldValue");
fieldValue878.name = "translation";
fieldValue878.value = "-0.0710999965667725 1.19410002231598 0.101599998772144";
ProtoInstance876.fieldValue[1] = fieldValue878;

fieldValue875.children = new MFNode();

fieldValue875.children[0] = ProtoInstance876;

let ProtoInstance879 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance879.name = "Site";
ProtoInstance879.DEF = "hanim_l_rib10_2";
let fieldValue880 = browser.currentScene.createNode("fieldValue");
fieldValue880.name = "name";
fieldValue880.value = "l_rib10";
ProtoInstance879.fieldValue = new MFNode();

ProtoInstance879.fieldValue[0] = fieldValue880;

let fieldValue881 = browser.currentScene.createNode("fieldValue");
fieldValue881.name = "translation";
fieldValue881.value = "0.0870999991893768 1.19249999523163 0.099200002849102";
ProtoInstance879.fieldValue[1] = fieldValue881;

fieldValue875.children[1] = ProtoInstance879;

let ProtoInstance882 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance882.name = "Site";
ProtoInstance882.DEF = "hanim_spine_2_lower_back_2";
let fieldValue883 = browser.currentScene.createNode("fieldValue");
fieldValue883.name = "name";
fieldValue883.value = "spine_2_lower_back";
ProtoInstance882.fieldValue = new MFNode();

ProtoInstance882.fieldValue[0] = fieldValue883;

let fieldValue884 = browser.currentScene.createNode("fieldValue");
fieldValue884.name = "translation";
fieldValue884.value = "0.00490000005811453 1.19079995155334 -0.111299999058247";
ProtoInstance882.fieldValue[1] = fieldValue884;

fieldValue875.children[2] = ProtoInstance882;

ProtoInstance873.fieldValue[1] = fieldValue875;

fieldValue307.children[1] = ProtoInstance873;

ProtoInstance303.fieldValue[3] = fieldValue307;

fieldValue302.children = new MFNode();

fieldValue302.children[0] = ProtoInstance303;

let ProtoInstance885 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance885.name = "Segment";
ProtoInstance885.DEF = "hanim_l5_2";
let fieldValue886 = browser.currentScene.createNode("fieldValue");
fieldValue886.name = "name";
fieldValue886.value = "l5";
ProtoInstance885.fieldValue = new MFNode();

ProtoInstance885.fieldValue[0] = fieldValue886;

let fieldValue887 = browser.currentScene.createNode("fieldValue");
fieldValue887.name = "children";
let ProtoInstance888 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance888.name = "Site";
ProtoInstance888.DEF = "hanim_waist_preferred_posterior_2";
let fieldValue889 = browser.currentScene.createNode("fieldValue");
fieldValue889.name = "name";
fieldValue889.value = "waist_preferred_posterior";
ProtoInstance888.fieldValue = new MFNode();

ProtoInstance888.fieldValue[0] = fieldValue889;

let fieldValue890 = browser.currentScene.createNode("fieldValue");
fieldValue890.name = "translation";
fieldValue890.value = "0.28999999165535 1.09150004386902 -0.109099999070168";
ProtoInstance888.fieldValue[1] = fieldValue890;

fieldValue887.children = new MFNode();

fieldValue887.children[0] = ProtoInstance888;

let ProtoInstance891 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance891.name = "Site";
ProtoInstance891.DEF = "hanim_navel_2";
let fieldValue892 = browser.currentScene.createNode("fieldValue");
fieldValue892.name = "name";
fieldValue892.value = "navel";
ProtoInstance891.fieldValue = new MFNode();

ProtoInstance891.fieldValue[0] = fieldValue892;

let fieldValue893 = browser.currentScene.createNode("fieldValue");
fieldValue893.name = "translation";
fieldValue893.value = "0.00689999992027879 1.09660005569458 0.101700000464916";
ProtoInstance891.fieldValue[1] = fieldValue893;

fieldValue887.children[1] = ProtoInstance891;

ProtoInstance885.fieldValue[1] = fieldValue887;

fieldValue302.children[1] = ProtoInstance885;

ProtoInstance298.fieldValue[3] = fieldValue302;

fieldValue104.children[1] = ProtoInstance298;

let ProtoInstance894 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance894.name = "Segment";
ProtoInstance894.DEF = "hanim_sacrum_2";
let fieldValue895 = browser.currentScene.createNode("fieldValue");
fieldValue895.name = "name";
fieldValue895.value = "sacrum";
ProtoInstance894.fieldValue = new MFNode();

ProtoInstance894.fieldValue[0] = fieldValue895;

fieldValue104.children[2] = ProtoInstance894;

ProtoInstance100.fieldValue[3] = fieldValue104;

fieldValue99.children = new MFNode();

fieldValue99.children[0] = ProtoInstance100;

ProtoInstance98.fieldValue = new MFNode();

ProtoInstance98.fieldValue[0] = fieldValue99;

let fieldValue896 = browser.currentScene.createNode("fieldValue");
fieldValue896.name = "joints";
let ProtoInstance897 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance897.USE = "hanim_humanoid_root_2";
fieldValue896.children = new MFNode();

fieldValue896.children[0] = ProtoInstance897;

let ProtoInstance898 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance898.USE = "hanim_sacroiliac_2";
fieldValue896.children[1] = ProtoInstance898;

let ProtoInstance899 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance899.USE = "hanim_l_hip_2";
fieldValue896.children[2] = ProtoInstance899;

let ProtoInstance900 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance900.USE = "hanim_l_knee_2";
fieldValue896.children[3] = ProtoInstance900;

let ProtoInstance901 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance901.USE = "hanim_l_talocrural_2";
fieldValue896.children[4] = ProtoInstance901;

let ProtoInstance902 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance902.USE = "hanim_l_tarsotarsal_interphalangeal__2";
fieldValue896.children[5] = ProtoInstance902;

let ProtoInstance903 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance903.USE = "hanim_l_metatarsophalangeal__2";
fieldValue896.children[6] = ProtoInstance903;

let ProtoInstance904 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance904.USE = "hanim_l_tarsal_interphalangeal__2";
fieldValue896.children[7] = ProtoInstance904;

let ProtoInstance905 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance905.USE = "hanim_r_hip_2";
fieldValue896.children[8] = ProtoInstance905;

let ProtoInstance906 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance906.USE = "hanim_r_knee_2";
fieldValue896.children[9] = ProtoInstance906;

let ProtoInstance907 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance907.USE = "hanim_r_talocrural_2";
fieldValue896.children[10] = ProtoInstance907;

let ProtoInstance908 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance908.USE = "hanim_r_tarsotarsal_interphalangeal__2";
fieldValue896.children[11] = ProtoInstance908;

let ProtoInstance909 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance909.USE = "hanim_r_metatarsophalangeal__2";
fieldValue896.children[12] = ProtoInstance909;

let ProtoInstance910 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance910.USE = "hanim_r_tarsal_interphalangeal__2";
fieldValue896.children[13] = ProtoInstance910;

let ProtoInstance911 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance911.USE = "hanim_vl5_2";
fieldValue896.children[14] = ProtoInstance911;

let ProtoInstance912 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance912.USE = "hanim_vl3_2";
fieldValue896.children[15] = ProtoInstance912;

let ProtoInstance913 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance913.USE = "hanim_vl1_2";
fieldValue896.children[16] = ProtoInstance913;

let ProtoInstance914 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance914.USE = "hanim_vt10_2";
fieldValue896.children[17] = ProtoInstance914;

let ProtoInstance915 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance915.USE = "hanim_vt6_2";
fieldValue896.children[18] = ProtoInstance915;

let ProtoInstance916 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance916.USE = "hanim_vt1_2";
fieldValue896.children[19] = ProtoInstance916;

let ProtoInstance917 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance917.USE = "hanim_vc4_2";
fieldValue896.children[20] = ProtoInstance917;

let ProtoInstance918 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance918.USE = "hanim_vc2_2";
fieldValue896.children[21] = ProtoInstance918;

let ProtoInstance919 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance919.USE = "hanim_skullbase_2";
fieldValue896.children[22] = ProtoInstance919;

let ProtoInstance920 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance920.USE = "hanim_l_sternoclavicular_2";
fieldValue896.children[23] = ProtoInstance920;

let ProtoInstance921 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance921.USE = "hanim_l_acromioclavicular_2";
fieldValue896.children[24] = ProtoInstance921;

let ProtoInstance922 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance922.USE = "hanim_l_shoulder_2";
fieldValue896.children[25] = ProtoInstance922;

let ProtoInstance923 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance923.USE = "hanim_l_elbow_2";
fieldValue896.children[26] = ProtoInstance923;

let ProtoInstance924 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance924.USE = "hanim_l_radiocarpal_2";
fieldValue896.children[27] = ProtoInstance924;

let ProtoInstance925 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance925.USE = "hanim_l_carpometacarpal2";
fieldValue896.children[28] = ProtoInstance925;

let ProtoInstance926 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance926.USE = "hanim_l_metacarpophalangeal2";
fieldValue896.children[29] = ProtoInstance926;

let ProtoInstance927 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance927.USE = "hanim_l_carpal_interphalangeal2";
fieldValue896.children[30] = ProtoInstance927;

let ProtoInstance928 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance928.USE = "hanim_l_carpometacarpal3";
fieldValue896.children[31] = ProtoInstance928;

let ProtoInstance929 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance929.USE = "hanim_l_metacarpophalangeal3";
fieldValue896.children[32] = ProtoInstance929;

let ProtoInstance930 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance930.USE = "hanim_l_carpal_proximal_interphalangeal3";
fieldValue896.children[33] = ProtoInstance930;

let ProtoInstance931 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance931.USE = "hanim_l_carpal_distal_interphalangeal3";
fieldValue896.children[34] = ProtoInstance931;

let ProtoInstance932 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance932.USE = "hanim_l_carpometacarpal4";
fieldValue896.children[35] = ProtoInstance932;

let ProtoInstance933 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance933.USE = "hanim_l_metacarpophalangeal4";
fieldValue896.children[36] = ProtoInstance933;

let ProtoInstance934 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance934.USE = "hanim_l_carpal_proximal_interphalangeal4";
fieldValue896.children[37] = ProtoInstance934;

let ProtoInstance935 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance935.USE = "hanim_l_carpal_distal_interphalangeal4";
fieldValue896.children[38] = ProtoInstance935;

let ProtoInstance936 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance936.USE = "hanim_l_carpometacarpal5";
fieldValue896.children[39] = ProtoInstance936;

let ProtoInstance937 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance937.USE = "hanim_l_metacarpophalangeal5";
fieldValue896.children[40] = ProtoInstance937;

let ProtoInstance938 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance938.USE = "hanim_l_carpal_proximal_interphalangeal5";
fieldValue896.children[41] = ProtoInstance938;

let ProtoInstance939 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance939.USE = "hanim_l_carpal_distal_interphalangeal5";
fieldValue896.children[42] = ProtoInstance939;

let ProtoInstance940 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance940.USE = "hanim_l_carpometacarpal6";
fieldValue896.children[43] = ProtoInstance940;

let ProtoInstance941 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance941.USE = "hanim_l_metacarpophalangeal6";
fieldValue896.children[44] = ProtoInstance941;

let ProtoInstance942 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance942.USE = "hanim_l_carpal_proximal_interphalangeal6";
fieldValue896.children[45] = ProtoInstance942;

let ProtoInstance943 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance943.USE = "hanim_l_carpal_distal_interphalangeal6";
fieldValue896.children[46] = ProtoInstance943;

let ProtoInstance944 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance944.USE = "hanim_r_sternoclavicular_2";
fieldValue896.children[47] = ProtoInstance944;

let ProtoInstance945 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance945.USE = "hanim_r_acromioclavicular_2";
fieldValue896.children[48] = ProtoInstance945;

let ProtoInstance946 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance946.USE = "hanim_r_shoulder_2";
fieldValue896.children[49] = ProtoInstance946;

let ProtoInstance947 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance947.USE = "hanim_r_elbow_2";
fieldValue896.children[50] = ProtoInstance947;

let ProtoInstance948 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance948.USE = "hanim_r_radiocarpal_2";
fieldValue896.children[51] = ProtoInstance948;

let ProtoInstance949 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance949.USE = "hanim_r_carpometacarpal2";
fieldValue896.children[52] = ProtoInstance949;

let ProtoInstance950 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance950.USE = "hanim_r_metacarpophalangeal2";
fieldValue896.children[53] = ProtoInstance950;

let ProtoInstance951 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance951.USE = "hanim_r_carpal_interphalangeal2";
fieldValue896.children[54] = ProtoInstance951;

let ProtoInstance952 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance952.USE = "hanim_r_carpometacarpal3";
fieldValue896.children[55] = ProtoInstance952;

let ProtoInstance953 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance953.USE = "hanim_r_metacarpophalangeal3";
fieldValue896.children[56] = ProtoInstance953;

let ProtoInstance954 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance954.USE = "hanim_r_carpal_proximal_interphalangeal3";
fieldValue896.children[57] = ProtoInstance954;

let ProtoInstance955 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance955.USE = "hanim_r_carpal_distal_interphalangeal3";
fieldValue896.children[58] = ProtoInstance955;

let ProtoInstance956 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance956.USE = "hanim_r_carpometacarpal4";
fieldValue896.children[59] = ProtoInstance956;

let ProtoInstance957 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance957.USE = "hanim_r_metacarpophalangeal4";
fieldValue896.children[60] = ProtoInstance957;

let ProtoInstance958 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance958.USE = "hanim_r_carpal_proximal_interphalangeal4";
fieldValue896.children[61] = ProtoInstance958;

let ProtoInstance959 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance959.USE = "hanim_r_carpal_distal_interphalangeal4";
fieldValue896.children[62] = ProtoInstance959;

let ProtoInstance960 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance960.USE = "hanim_r_carpometacarpal5";
fieldValue896.children[63] = ProtoInstance960;

let ProtoInstance961 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance961.USE = "hanim_r_metacarpophalangeal5";
fieldValue896.children[64] = ProtoInstance961;

let ProtoInstance962 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance962.USE = "hanim_r_carpal_proximal_interphalangeal5";
fieldValue896.children[65] = ProtoInstance962;

let ProtoInstance963 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance963.USE = "hanim_r_carpal_distal_interphalangeal5";
fieldValue896.children[66] = ProtoInstance963;

let ProtoInstance964 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance964.USE = "hanim_r_carpometacarpal6";
fieldValue896.children[67] = ProtoInstance964;

let ProtoInstance965 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance965.USE = "hanim_r_metacarpophalangeal6";
fieldValue896.children[68] = ProtoInstance965;

let ProtoInstance966 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance966.USE = "hanim_r_carpal_proximal_interphalangeal6";
fieldValue896.children[69] = ProtoInstance966;

let ProtoInstance967 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance967.USE = "hanim_r_carpal_distal_interphalangeal6";
fieldValue896.children[70] = ProtoInstance967;

ProtoInstance98.fieldValue[1] = fieldValue896;

let fieldValue968 = browser.currentScene.createNode("fieldValue");
fieldValue968.name = "sites";
let ProtoInstance969 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance969.USE = "hanim_l_tarsal_distal_phalanx_1_tip_2";
fieldValue968.children = new MFNode();

fieldValue968.children[0] = ProtoInstance969;

let ProtoInstance970 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance970.USE = "hanim_l_tarsal_interphalangeal_phalanx6";
fieldValue968.children[1] = ProtoInstance970;

let ProtoInstance971 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance971.USE = "hanim_l_tarsal_distal_phalanx3";
fieldValue968.children[2] = ProtoInstance971;

let ProtoInstance972 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance972.USE = "hanim_l_tarsal_interphalangeal_phalanx2";
fieldValue968.children[3] = ProtoInstance972;

let ProtoInstance973 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance973.USE = "hanim_l_lateral_malleolus_2";
fieldValue968.children[4] = ProtoInstance973;

let ProtoInstance974 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance974.USE = "hanim_l_medial_malleolus_2";
fieldValue968.children[5] = ProtoInstance974;

let ProtoInstance975 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance975.USE = "hanim_l_sphyrion_2";
fieldValue968.children[6] = ProtoInstance975;

let ProtoInstance976 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance976.USE = "hanim_l_calcaneus_posterior_2";
fieldValue968.children[7] = ProtoInstance976;

let ProtoInstance977 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance977.USE = "hanim_l_knee_crease_2";
fieldValue968.children[8] = ProtoInstance977;

let ProtoInstance978 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance978.USE = "hanim_l_femoral_lateral_epicondyles_2";
fieldValue968.children[9] = ProtoInstance978;

let ProtoInstance979 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance979.USE = "hanim_l_femoral_medial_epicondyles_2";
fieldValue968.children[10] = ProtoInstance979;

let ProtoInstance980 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance980.USE = "hanim_r_tarsal_distal_phalanx_1_tip_2";
fieldValue968.children[11] = ProtoInstance980;

let ProtoInstance981 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance981.USE = "hanim_r_tarsal_interphalangeal_phalanx6";
fieldValue968.children[12] = ProtoInstance981;

let ProtoInstance982 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance982.USE = "hanim_r_tarsal_distal_phalanx3";
fieldValue968.children[13] = ProtoInstance982;

let ProtoInstance983 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance983.USE = "hanim_r_tarsal_interphalangeal_phalanx2";
fieldValue968.children[14] = ProtoInstance983;

let ProtoInstance984 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance984.USE = "hanim_r_lateral_malleolus_2";
fieldValue968.children[15] = ProtoInstance984;

let ProtoInstance985 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance985.USE = "hanim_r_medial_malleolus_2";
fieldValue968.children[16] = ProtoInstance985;

let ProtoInstance986 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance986.USE = "hanim_r_sphyrion_2";
fieldValue968.children[17] = ProtoInstance986;

let ProtoInstance987 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance987.USE = "hanim_r_calcaneus_posterior_2";
fieldValue968.children[18] = ProtoInstance987;

let ProtoInstance988 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance988.USE = "hanim_r_knee_crease_2";
fieldValue968.children[19] = ProtoInstance988;

let ProtoInstance989 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance989.USE = "hanim_r_femoral_lateral_epicondyles_2";
fieldValue968.children[20] = ProtoInstance989;

let ProtoInstance990 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance990.USE = "hanim_r_femoral_medial_epicondyles_2";
fieldValue968.children[21] = ProtoInstance990;

let ProtoInstance991 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance991.USE = "hanim_r_iliocristale_2";
fieldValue968.children[22] = ProtoInstance991;

let ProtoInstance992 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance992.USE = "hanim_r_trochanterion_2";
fieldValue968.children[23] = ProtoInstance992;

let ProtoInstance993 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance993.USE = "hanim_l_iliocristale_2";
fieldValue968.children[24] = ProtoInstance993;

let ProtoInstance994 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance994.USE = "hanim_l_trochanterion_2";
fieldValue968.children[25] = ProtoInstance994;

let ProtoInstance995 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance995.USE = "hanim_r_asis_2";
fieldValue968.children[26] = ProtoInstance995;

let ProtoInstance996 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance996.USE = "hanim_l_asis_2";
fieldValue968.children[27] = ProtoInstance996;

let ProtoInstance997 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance997.USE = "hanim_r_psis_2";
fieldValue968.children[28] = ProtoInstance997;

let ProtoInstance998 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance998.USE = "hanim_l_psis_2";
fieldValue968.children[29] = ProtoInstance998;

let ProtoInstance999 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance999.USE = "hanim_crotch_2";
fieldValue968.children[30] = ProtoInstance999;

let ProtoInstance1000 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1000.USE = "hanim_skull_tip_2";
fieldValue968.children[31] = ProtoInstance1000;

let ProtoInstance1001 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1001.USE = "hanim_sellion_2";
fieldValue968.children[32] = ProtoInstance1001;

let ProtoInstance1002 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1002.USE = "hanim_r_infraorbitale_2";
fieldValue968.children[33] = ProtoInstance1002;

let ProtoInstance1003 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1003.USE = "hanim_l_infraorbitale_2";
fieldValue968.children[34] = ProtoInstance1003;

let ProtoInstance1004 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1004.USE = "hanim_supramenton_2";
fieldValue968.children[35] = ProtoInstance1004;

let ProtoInstance1005 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1005.USE = "hanim_r_tragion_2";
fieldValue968.children[36] = ProtoInstance1005;

let ProtoInstance1006 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1006.USE = "hanim_r_gonion_2";
fieldValue968.children[37] = ProtoInstance1006;

let ProtoInstance1007 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1007.USE = "hanim_l_tragion_2";
fieldValue968.children[38] = ProtoInstance1007;

let ProtoInstance1008 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1008.USE = "hanim_l_gonion_2";
fieldValue968.children[39] = ProtoInstance1008;

let ProtoInstance1009 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1009.USE = "hanim_nuchale_2";
fieldValue968.children[40] = ProtoInstance1009;

let ProtoInstance1010 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1010.USE = "hanim_l_carpal_distal_phalanx_1_tip_2";
fieldValue968.children[41] = ProtoInstance1010;

let ProtoInstance1011 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1011.USE = "hanim_l_carpal_distal_phalanx_2_tip_2";
fieldValue968.children[42] = ProtoInstance1011;

let ProtoInstance1012 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1012.USE = "hanim_l_dactylion_2";
fieldValue968.children[43] = ProtoInstance1012;

let ProtoInstance1013 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1013.USE = "hanim_l_carpal_distal_phalanx_3_tip_2";
fieldValue968.children[44] = ProtoInstance1013;

let ProtoInstance1014 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1014.USE = "hanim_l_carpal_distal_phalanx_4_tip_2";
fieldValue968.children[45] = ProtoInstance1014;

let ProtoInstance1015 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1015.USE = "hanim_l_carpal_distal_phalanx_5_tip_2";
fieldValue968.children[46] = ProtoInstance1015;

let ProtoInstance1016 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1016.USE = "hanim_l_metacarpal_phalanx3";
fieldValue968.children[47] = ProtoInstance1016;

let ProtoInstance1017 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1017.USE = "hanim_l_ulnar_styloid_2";
fieldValue968.children[48] = ProtoInstance1017;

let ProtoInstance1018 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1018.USE = "hanim_l_metacarpal_phalanx6";
fieldValue968.children[49] = ProtoInstance1018;

let ProtoInstance1019 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1019.USE = "hanim_l_radial_styloid_2";
fieldValue968.children[50] = ProtoInstance1019;

let ProtoInstance1020 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1020.USE = "hanim_l_olecranon_2";
fieldValue968.children[51] = ProtoInstance1020;

let ProtoInstance1021 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1021.USE = "hanim_l_humeral_medial_epicondyles_2";
fieldValue968.children[52] = ProtoInstance1021;

let ProtoInstance1022 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1022.USE = "hanim_l_radiale_2";
fieldValue968.children[53] = ProtoInstance1022;

let ProtoInstance1023 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1023.USE = "hanim_l_humeral_lateral_epicondyles_2";
fieldValue968.children[54] = ProtoInstance1023;

let ProtoInstance1024 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1024.USE = "hanim_l_clavicale_2";
fieldValue968.children[55] = ProtoInstance1024;

let ProtoInstance1025 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1025.USE = "hanim_l_acromion_2";
fieldValue968.children[56] = ProtoInstance1025;

let ProtoInstance1026 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1026.USE = "hanim_l_axilla_proximal_2";
fieldValue968.children[57] = ProtoInstance1026;

let ProtoInstance1027 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1027.USE = "hanim_l_axilla_distal_2";
fieldValue968.children[58] = ProtoInstance1027;

let ProtoInstance1028 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1028.USE = "hanim_r_carpal_distal_phalanx_1_tip_2";
fieldValue968.children[59] = ProtoInstance1028;

let ProtoInstance1029 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1029.USE = "hanim_r_carpal_distal_phalanx_2_tip_2";
fieldValue968.children[60] = ProtoInstance1029;

let ProtoInstance1030 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1030.USE = "hanim_r_dactylion_2";
fieldValue968.children[61] = ProtoInstance1030;

let ProtoInstance1031 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1031.USE = "hanim_r_carpal_distal_phalanx_3_tip_2";
fieldValue968.children[62] = ProtoInstance1031;

let ProtoInstance1032 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1032.USE = "hanim_r_carpal_distal_phalanx_4_tip_2";
fieldValue968.children[63] = ProtoInstance1032;

let ProtoInstance1033 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1033.USE = "hanim_r_carpal_distal_phalanx_5_tip_2";
fieldValue968.children[64] = ProtoInstance1033;

let ProtoInstance1034 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1034.USE = "hanim_r_metacarpal_phalanx3";
fieldValue968.children[65] = ProtoInstance1034;

let ProtoInstance1035 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1035.USE = "hanim_r_ulnar_styloid_2";
fieldValue968.children[66] = ProtoInstance1035;

let ProtoInstance1036 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1036.USE = "hanim_r_metacarpal_phalanx6";
fieldValue968.children[67] = ProtoInstance1036;

let ProtoInstance1037 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1037.USE = "hanim_r_radial_styloid_2";
fieldValue968.children[68] = ProtoInstance1037;

let ProtoInstance1038 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1038.USE = "hanim_r_olecranon_2";
fieldValue968.children[69] = ProtoInstance1038;

let ProtoInstance1039 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1039.USE = "hanim_r_humeral_medial_epicondyles_2";
fieldValue968.children[70] = ProtoInstance1039;

let ProtoInstance1040 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1040.USE = "hanim_r_radiale_2";
fieldValue968.children[71] = ProtoInstance1040;

let ProtoInstance1041 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1041.USE = "hanim_r_humeral_lateral_epicondyles_2";
fieldValue968.children[72] = ProtoInstance1041;

let ProtoInstance1042 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1042.USE = "hanim_r_clavicale_2";
fieldValue968.children[73] = ProtoInstance1042;

let ProtoInstance1043 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1043.USE = "hanim_r_acromion_2";
fieldValue968.children[74] = ProtoInstance1043;

let ProtoInstance1044 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1044.USE = "hanim_r_axilla_proximal_2";
fieldValue968.children[75] = ProtoInstance1044;

let ProtoInstance1045 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1045.USE = "hanim_r_axilla_distal_2";
fieldValue968.children[76] = ProtoInstance1045;

let ProtoInstance1046 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1046.USE = "hanim_r_neck_base_2";
fieldValue968.children[77] = ProtoInstance1046;

let ProtoInstance1047 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1047.USE = "hanim_l_neck_base_2";
fieldValue968.children[78] = ProtoInstance1047;

let ProtoInstance1048 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1048.USE = "hanim_suprasternale_2";
fieldValue968.children[79] = ProtoInstance1048;

let ProtoInstance1049 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1049.USE = "hanim_cervicale_2";
fieldValue968.children[80] = ProtoInstance1049;

let ProtoInstance1050 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1050.USE = "hanim_r_thelion_2";
fieldValue968.children[81] = ProtoInstance1050;

let ProtoInstance1051 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1051.USE = "hanim_l_thelion_2";
fieldValue968.children[82] = ProtoInstance1051;

let ProtoInstance1052 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1052.USE = "hanim_substernale_2";
fieldValue968.children[83] = ProtoInstance1052;

let ProtoInstance1053 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1053.USE = "hanim_r_rib10_2";
fieldValue968.children[84] = ProtoInstance1053;

let ProtoInstance1054 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1054.USE = "hanim_l_rib10_2";
fieldValue968.children[85] = ProtoInstance1054;

let ProtoInstance1055 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1055.USE = "hanim_spine_2_lower_back_2";
fieldValue968.children[86] = ProtoInstance1055;

let ProtoInstance1056 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1056.USE = "hanim_waist_preferred_posterior_2";
fieldValue968.children[87] = ProtoInstance1056;

let ProtoInstance1057 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1057.USE = "hanim_navel_2";
fieldValue968.children[88] = ProtoInstance1057;

ProtoInstance98.fieldValue[2] = fieldValue968;

let fieldValue1058 = browser.currentScene.createNode("fieldValue");
fieldValue1058.name = "segments";
let ProtoInstance1059 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1059.USE = "hanim_l_tarsal_distal_phalanx2";
fieldValue1058.children = new MFNode();

fieldValue1058.children[0] = ProtoInstance1059;

let ProtoInstance1060 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1060.USE = "hanim_l_middistal_2";
fieldValue1058.children[1] = ProtoInstance1060;

let ProtoInstance1061 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1061.USE = "hanim_l_midproximal_2";
fieldValue1058.children[2] = ProtoInstance1061;

let ProtoInstance1062 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1062.USE = "hanim_l_hindfoot_2";
fieldValue1058.children[3] = ProtoInstance1062;

let ProtoInstance1063 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1063.USE = "hanim_l_calf_2";
fieldValue1058.children[4] = ProtoInstance1063;

let ProtoInstance1064 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1064.USE = "hanim_l_thigh_2";
fieldValue1058.children[5] = ProtoInstance1064;

let ProtoInstance1065 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1065.USE = "hanim_r_tarsal_distal_phalanx2";
fieldValue1058.children[6] = ProtoInstance1065;

let ProtoInstance1066 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1066.USE = "hanim_r_middistal_2";
fieldValue1058.children[7] = ProtoInstance1066;

let ProtoInstance1067 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1067.USE = "hanim_r_midproximal_2";
fieldValue1058.children[8] = ProtoInstance1067;

let ProtoInstance1068 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1068.USE = "hanim_r_hindfoot_2";
fieldValue1058.children[9] = ProtoInstance1068;

let ProtoInstance1069 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1069.USE = "hanim_r_calf_2";
fieldValue1058.children[10] = ProtoInstance1069;

let ProtoInstance1070 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1070.USE = "hanim_r_thigh_2";
fieldValue1058.children[11] = ProtoInstance1070;

let ProtoInstance1071 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1071.USE = "hanim_pelvis_2";
fieldValue1058.children[12] = ProtoInstance1071;

let ProtoInstance1072 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1072.USE = "hanim_skull_2";
fieldValue1058.children[13] = ProtoInstance1072;

let ProtoInstance1073 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1073.USE = "hanim_c2_2";
fieldValue1058.children[14] = ProtoInstance1073;

let ProtoInstance1074 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1074.USE = "hanim_c4_2";
fieldValue1058.children[15] = ProtoInstance1074;

let ProtoInstance1075 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1075.USE = "hanim_l_carpal_distal_phalanx2";
fieldValue1058.children[16] = ProtoInstance1075;

let ProtoInstance1076 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1076.USE = "hanim_l_index_proximal_6";
fieldValue1058.children[17] = ProtoInstance1076;

let ProtoInstance1077 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1077.USE = "hanim_l_index_proximal_6";
fieldValue1058.children[18] = ProtoInstance1077;

let ProtoInstance1078 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1078.USE = "hanim_l_carpal_distal_phalanx3";
fieldValue1058.children[19] = ProtoInstance1078;

let ProtoInstance1079 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1079.USE = "hanim_l_index_middle_2";
fieldValue1058.children[20] = ProtoInstance1079;

let ProtoInstance1080 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1080.USE = "hanim_l_index_proximal_6";
fieldValue1058.children[21] = ProtoInstance1080;

let ProtoInstance1081 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1081.USE = "hanim_l_index_metacarpal_2";
fieldValue1058.children[22] = ProtoInstance1081;

let ProtoInstance1082 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1082.USE = "hanim_l_carpal_distal_phalanx4";
fieldValue1058.children[23] = ProtoInstance1082;

let ProtoInstance1083 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1083.USE = "hanim_l_middle_middle_2";
fieldValue1058.children[24] = ProtoInstance1083;

let ProtoInstance1084 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1084.USE = "hanim_l_middle_proximal_2";
fieldValue1058.children[25] = ProtoInstance1084;

let ProtoInstance1085 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1085.USE = "hanim_l_middle_metacarpal_2";
fieldValue1058.children[26] = ProtoInstance1085;

let ProtoInstance1086 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1086.USE = "hanim_l_carpal_distal_phalanx5";
fieldValue1058.children[27] = ProtoInstance1086;

let ProtoInstance1087 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1087.USE = "hanim_l_ring_middle_2";
fieldValue1058.children[28] = ProtoInstance1087;

let ProtoInstance1088 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1088.USE = "hanim_l_ring_proximal_2";
fieldValue1058.children[29] = ProtoInstance1088;

let ProtoInstance1089 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1089.USE = "hanim_l_ring_metacarpal_2";
fieldValue1058.children[30] = ProtoInstance1089;

let ProtoInstance1090 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1090.USE = "hanim_l_carpal_distal_phalanx6";
fieldValue1058.children[31] = ProtoInstance1090;

let ProtoInstance1091 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1091.USE = "hanim_l_pinky_middle_2";
fieldValue1058.children[32] = ProtoInstance1091;

let ProtoInstance1092 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1092.USE = "hanim_l_pinky_proximal_2";
fieldValue1058.children[33] = ProtoInstance1092;

let ProtoInstance1093 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1093.USE = "hanim_l_pinky_metacarpal_2";
fieldValue1058.children[34] = ProtoInstance1093;

let ProtoInstance1094 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1094.USE = "hanim_l_hand_2";
fieldValue1058.children[35] = ProtoInstance1094;

let ProtoInstance1095 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1095.USE = "hanim_l_forearm_2";
fieldValue1058.children[36] = ProtoInstance1095;

let ProtoInstance1096 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1096.USE = "hanim_l_upperarm_2";
fieldValue1058.children[37] = ProtoInstance1096;

let ProtoInstance1097 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1097.USE = "hanim_l_scapula_2";
fieldValue1058.children[38] = ProtoInstance1097;

let ProtoInstance1098 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1098.USE = "hanim_l_clavicle_2";
fieldValue1058.children[39] = ProtoInstance1098;

let ProtoInstance1099 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1099.USE = "hanim_r_carpal_distal_phalanx2";
fieldValue1058.children[40] = ProtoInstance1099;

let ProtoInstance1100 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1100.USE = "hanim_r_index_proximal_6";
fieldValue1058.children[41] = ProtoInstance1100;

let ProtoInstance1101 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1101.USE = "hanim_r_index_proximal_6";
fieldValue1058.children[42] = ProtoInstance1101;

let ProtoInstance1102 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1102.USE = "hanim_r_carpal_distal_phalanx3";
fieldValue1058.children[43] = ProtoInstance1102;

let ProtoInstance1103 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1103.USE = "hanim_r_index_middle_2";
fieldValue1058.children[44] = ProtoInstance1103;

let ProtoInstance1104 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1104.USE = "hanim_r_index_proximal_6";
fieldValue1058.children[45] = ProtoInstance1104;

let ProtoInstance1105 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1105.USE = "hanim_r_index_metacarpal_2";
fieldValue1058.children[46] = ProtoInstance1105;

let ProtoInstance1106 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1106.USE = "hanim_r_carpal_distal_phalanx4";
fieldValue1058.children[47] = ProtoInstance1106;

let ProtoInstance1107 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1107.USE = "hanim_r_middle_middle_2";
fieldValue1058.children[48] = ProtoInstance1107;

let ProtoInstance1108 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1108.USE = "hanim_r_middle_proximal_2";
fieldValue1058.children[49] = ProtoInstance1108;

let ProtoInstance1109 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1109.USE = "hanim_r_middle_metacarpal_2";
fieldValue1058.children[50] = ProtoInstance1109;

let ProtoInstance1110 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1110.USE = "hanim_r_carpal_distal_phalanx5";
fieldValue1058.children[51] = ProtoInstance1110;

let ProtoInstance1111 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1111.USE = "hanim_r_ring_middle_2";
fieldValue1058.children[52] = ProtoInstance1111;

let ProtoInstance1112 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1112.USE = "hanim_r_ring_proximal_2";
fieldValue1058.children[53] = ProtoInstance1112;

let ProtoInstance1113 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1113.USE = "hanim_r_ring_metacarpal_2";
fieldValue1058.children[54] = ProtoInstance1113;

let ProtoInstance1114 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1114.USE = "hanim_r_carpal_distal_phalanx6";
fieldValue1058.children[55] = ProtoInstance1114;

let ProtoInstance1115 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1115.USE = "hanim_r_pinky_middle_2";
fieldValue1058.children[56] = ProtoInstance1115;

let ProtoInstance1116 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1116.USE = "hanim_r_pinky_proximal_2";
fieldValue1058.children[57] = ProtoInstance1116;

let ProtoInstance1117 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1117.USE = "hanim_r_pinky_metacarpal_2";
fieldValue1058.children[58] = ProtoInstance1117;

let ProtoInstance1118 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1118.USE = "hanim_r_hand_2";
fieldValue1058.children[59] = ProtoInstance1118;

let ProtoInstance1119 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1119.USE = "hanim_r_forearm_2";
fieldValue1058.children[60] = ProtoInstance1119;

let ProtoInstance1120 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1120.USE = "hanim_r_upperarm_2";
fieldValue1058.children[61] = ProtoInstance1120;

let ProtoInstance1121 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1121.USE = "hanim_r_scapula_2";
fieldValue1058.children[62] = ProtoInstance1121;

let ProtoInstance1122 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1122.USE = "hanim_r_clavicle_2";
fieldValue1058.children[63] = ProtoInstance1122;

let ProtoInstance1123 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1123.USE = "hanim_t1_2";
fieldValue1058.children[64] = ProtoInstance1123;

let ProtoInstance1124 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1124.USE = "hanim_t6_2";
fieldValue1058.children[65] = ProtoInstance1124;

let ProtoInstance1125 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1125.USE = "hanim_t10_2";
fieldValue1058.children[66] = ProtoInstance1125;

let ProtoInstance1126 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1126.USE = "hanim_l1_2";
fieldValue1058.children[67] = ProtoInstance1126;

let ProtoInstance1127 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1127.USE = "hanim_l3_2";
fieldValue1058.children[68] = ProtoInstance1127;

let ProtoInstance1128 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1128.USE = "hanim_l5_2";
fieldValue1058.children[69] = ProtoInstance1128;

let ProtoInstance1129 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1129.USE = "hanim_sacrum_2";
fieldValue1058.children[70] = ProtoInstance1129;

ProtoInstance98.fieldValue[3] = fieldValue1058;

let fieldValue1130 = browser.currentScene.createNode("fieldValue");
fieldValue1130.name = "name";
fieldValue1130.value = "humanoid";
ProtoInstance98.fieldValue[4] = fieldValue1130;

let fieldValue1131 = browser.currentScene.createNode("fieldValue");
fieldValue1131.name = "info";
fieldValue1131.value = "\"authorName=Matthew T. Beitler\" \"authorEmail=beitler@cis.upenn.edu or beitler@acm.org\" \"creationDate=05/12/99\" \"copyright=Copyright 1999-2003, Matthew T. Beitler\" \"humanoidVersion=JointCenters 200x, LOA&#8209;2\" \"usageRestrictions= PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED, PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided 'as-is' and without warranty of any kind, express, implied or otherwise, including without limitation, any warranty of merchantability or fitness for a particular purpose.\" \"modificationDate=08/12/03\"";
ProtoInstance98.fieldValue[5] = fieldValue1131;

browser.currentScene.children[4] = ProtoInstance98;

let Group1132 = browser.currentScene.createNode("Group");
Group1132.DEF = "JointCenters_WorldInfo";
let WorldInfo1133 = browser.currentScene.createNode("WorldInfo");
WorldInfo1133.title = "HANIM 200x Default Joint Centers, LOA&#8209;2";
WorldInfo1133.info = new MFString(new java.lang.String[" HANIM 200x Default Joint Centers, Level-Of-Articulation 2 --------------------------------------------------------- HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://H-Anim.org/Specifications/H-Anim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human modelling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "]);
Group1132.children = new MFNode();

Group1132.children[0] = WorldInfo1133;

browser.currentScene.children[5] = Group1132;

let NavigationInfo1134 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo1134.avatarSize = new MFFloat(new float[0.25,1.60000002384186,0.75]);
NavigationInfo1134.speed = 1.5;
browser.currentScene.children[6] = NavigationInfo1134;

