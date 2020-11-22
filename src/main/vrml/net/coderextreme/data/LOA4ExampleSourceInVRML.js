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
ProtoInstance303.DEF = "hanim_vl4_2";
let fieldValue304 = browser.currentScene.createNode("fieldValue");
fieldValue304.name = "stiffness";
fieldValue304.value = "1 1 1";
ProtoInstance303.fieldValue = new MFNode();

ProtoInstance303.fieldValue[0] = fieldValue304;

let fieldValue305 = browser.currentScene.createNode("fieldValue");
fieldValue305.name = "name";
fieldValue305.value = "vl4";
ProtoInstance303.fieldValue[1] = fieldValue305;

let fieldValue306 = browser.currentScene.createNode("fieldValue");
fieldValue306.name = "center";
fieldValue306.value = "0.00350000010803342 1.09249997138977 -0.0786999985575676";
ProtoInstance303.fieldValue[2] = fieldValue306;

let fieldValue307 = browser.currentScene.createNode("fieldValue");
fieldValue307.name = "children";
let ProtoInstance308 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance308.name = "Joint";
ProtoInstance308.DEF = "hanim_vl3_2";
let fieldValue309 = browser.currentScene.createNode("fieldValue");
fieldValue309.name = "stiffness";
fieldValue309.value = "1 1 1";
ProtoInstance308.fieldValue = new MFNode();

ProtoInstance308.fieldValue[0] = fieldValue309;

let fieldValue310 = browser.currentScene.createNode("fieldValue");
fieldValue310.name = "name";
fieldValue310.value = "vl3";
ProtoInstance308.fieldValue[1] = fieldValue310;

let fieldValue311 = browser.currentScene.createNode("fieldValue");
fieldValue311.name = "center";
fieldValue311.value = "0.00410000002011657 1.1275999546051 -0.0795999988913536";
ProtoInstance308.fieldValue[2] = fieldValue311;

let fieldValue312 = browser.currentScene.createNode("fieldValue");
fieldValue312.name = "children";
let ProtoInstance313 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance313.name = "Joint";
ProtoInstance313.DEF = "hanim_vl2_2";
let fieldValue314 = browser.currentScene.createNode("fieldValue");
fieldValue314.name = "stiffness";
fieldValue314.value = "1 1 1";
ProtoInstance313.fieldValue = new MFNode();

ProtoInstance313.fieldValue[0] = fieldValue314;

let fieldValue315 = browser.currentScene.createNode("fieldValue");
fieldValue315.name = "name";
fieldValue315.value = "vl2";
ProtoInstance313.fieldValue[1] = fieldValue315;

let fieldValue316 = browser.currentScene.createNode("fieldValue");
fieldValue316.name = "center";
fieldValue316.value = "0.0044999998062849 1.15460002422333 -0.0799999982118607";
ProtoInstance313.fieldValue[2] = fieldValue316;

let fieldValue317 = browser.currentScene.createNode("fieldValue");
fieldValue317.name = "children";
let ProtoInstance318 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance318.name = "Joint";
ProtoInstance318.DEF = "hanim_vl1_2";
let fieldValue319 = browser.currentScene.createNode("fieldValue");
fieldValue319.name = "stiffness";
fieldValue319.value = "1 1 1";
ProtoInstance318.fieldValue = new MFNode();

ProtoInstance318.fieldValue[0] = fieldValue319;

let fieldValue320 = browser.currentScene.createNode("fieldValue");
fieldValue320.name = "name";
fieldValue320.value = "vl1";
ProtoInstance318.fieldValue[1] = fieldValue320;

let fieldValue321 = browser.currentScene.createNode("fieldValue");
fieldValue321.name = "center";
fieldValue321.value = "0.00480000022798777 1.19120001792908 -0.0804999992251396";
ProtoInstance318.fieldValue[2] = fieldValue321;

let fieldValue322 = browser.currentScene.createNode("fieldValue");
fieldValue322.name = "children";
let ProtoInstance323 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance323.name = "Joint";
ProtoInstance323.DEF = "hanim_vt12_2";
let fieldValue324 = browser.currentScene.createNode("fieldValue");
fieldValue324.name = "stiffness";
fieldValue324.value = "1 1 1";
ProtoInstance323.fieldValue = new MFNode();

ProtoInstance323.fieldValue[0] = fieldValue324;

let fieldValue325 = browser.currentScene.createNode("fieldValue");
fieldValue325.name = "name";
fieldValue325.value = "vt12";
ProtoInstance323.fieldValue[1] = fieldValue325;

let fieldValue326 = browser.currentScene.createNode("fieldValue");
fieldValue326.name = "center";
fieldValue326.value = "0.00510000018402934 1.22780001163483 -0.0807999968528748";
ProtoInstance323.fieldValue[2] = fieldValue326;

let fieldValue327 = browser.currentScene.createNode("fieldValue");
fieldValue327.name = "children";
let ProtoInstance328 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance328.name = "Joint";
ProtoInstance328.DEF = "hanim_vt11_2";
let fieldValue329 = browser.currentScene.createNode("fieldValue");
fieldValue329.name = "stiffness";
fieldValue329.value = "1 1 1";
ProtoInstance328.fieldValue = new MFNode();

ProtoInstance328.fieldValue[0] = fieldValue329;

let fieldValue330 = browser.currentScene.createNode("fieldValue");
fieldValue330.name = "name";
fieldValue330.value = "vt11";
ProtoInstance328.fieldValue[1] = fieldValue330;

let fieldValue331 = browser.currentScene.createNode("fieldValue");
fieldValue331.name = "center";
fieldValue331.value = "0.00529999984428287 1.26789999008179 -0.0810000002384186";
ProtoInstance328.fieldValue[2] = fieldValue331;

let fieldValue332 = browser.currentScene.createNode("fieldValue");
fieldValue332.name = "children";
let ProtoInstance333 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance333.name = "Joint";
ProtoInstance333.DEF = "hanim_vt10_2";
let fieldValue334 = browser.currentScene.createNode("fieldValue");
fieldValue334.name = "stiffness";
fieldValue334.value = "1 1 1";
ProtoInstance333.fieldValue = new MFNode();

ProtoInstance333.fieldValue[0] = fieldValue334;

let fieldValue335 = browser.currentScene.createNode("fieldValue");
fieldValue335.name = "name";
fieldValue335.value = "vt10";
ProtoInstance333.fieldValue[1] = fieldValue335;

let fieldValue336 = browser.currentScene.createNode("fieldValue");
fieldValue336.name = "center";
fieldValue336.value = "0.00559999980032444 1.28480005264282 -0.0821999981999397";
ProtoInstance333.fieldValue[2] = fieldValue336;

let fieldValue337 = browser.currentScene.createNode("fieldValue");
fieldValue337.name = "children";
let ProtoInstance338 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance338.name = "Joint";
ProtoInstance338.DEF = "hanim_vt9_2";
let fieldValue339 = browser.currentScene.createNode("fieldValue");
fieldValue339.name = "stiffness";
fieldValue339.value = "1 1 1";
ProtoInstance338.fieldValue = new MFNode();

ProtoInstance338.fieldValue[0] = fieldValue339;

let fieldValue340 = browser.currentScene.createNode("fieldValue");
fieldValue340.name = "name";
fieldValue340.value = "vt9";
ProtoInstance338.fieldValue[1] = fieldValue340;

let fieldValue341 = browser.currentScene.createNode("fieldValue");
fieldValue341.name = "center";
fieldValue341.value = "0.00570000009611249 1.31260001659393 -0.0838000029325485";
ProtoInstance338.fieldValue[2] = fieldValue341;

let fieldValue342 = browser.currentScene.createNode("fieldValue");
fieldValue342.name = "children";
let ProtoInstance343 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance343.name = "Joint";
ProtoInstance343.DEF = "hanim_vt8_2";
let fieldValue344 = browser.currentScene.createNode("fieldValue");
fieldValue344.name = "stiffness";
fieldValue344.value = "1 1 1";
ProtoInstance343.fieldValue = new MFNode();

ProtoInstance343.fieldValue[0] = fieldValue344;

let fieldValue345 = browser.currentScene.createNode("fieldValue");
fieldValue345.name = "name";
fieldValue345.value = "vt8";
ProtoInstance343.fieldValue[1] = fieldValue345;

let fieldValue346 = browser.currentScene.createNode("fieldValue");
fieldValue346.name = "center";
fieldValue346.value = "0.00570000009611249 1.33819997310638 -0.0844999998807907";
ProtoInstance343.fieldValue[2] = fieldValue346;

let fieldValue347 = browser.currentScene.createNode("fieldValue");
fieldValue347.name = "children";
let ProtoInstance348 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance348.name = "Joint";
ProtoInstance348.DEF = "hanim_vt7_2";
let fieldValue349 = browser.currentScene.createNode("fieldValue");
fieldValue349.name = "stiffness";
fieldValue349.value = "1 1 1";
ProtoInstance348.fieldValue = new MFNode();

ProtoInstance348.fieldValue[0] = fieldValue349;

let fieldValue350 = browser.currentScene.createNode("fieldValue");
fieldValue350.name = "name";
fieldValue350.value = "vt7";
ProtoInstance348.fieldValue[1] = fieldValue350;

let fieldValue351 = browser.currentScene.createNode("fieldValue");
fieldValue351.name = "center";
fieldValue351.value = "0.00579999992623925 1.36249995231628 -0.0833000019192696";
ProtoInstance348.fieldValue[2] = fieldValue351;

let fieldValue352 = browser.currentScene.createNode("fieldValue");
fieldValue352.name = "children";
let ProtoInstance353 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance353.name = "Joint";
ProtoInstance353.DEF = "hanim_vt6_2";
let fieldValue354 = browser.currentScene.createNode("fieldValue");
fieldValue354.name = "stiffness";
fieldValue354.value = "1 1 1";
ProtoInstance353.fieldValue = new MFNode();

ProtoInstance353.fieldValue[0] = fieldValue354;

let fieldValue355 = browser.currentScene.createNode("fieldValue");
fieldValue355.name = "name";
fieldValue355.value = "vt6";
ProtoInstance353.fieldValue[1] = fieldValue355;

let fieldValue356 = browser.currentScene.createNode("fieldValue");
fieldValue356.name = "center";
fieldValue356.value = "0.0059000002220273 1.38660001754761 -0.0799999982118607";
ProtoInstance353.fieldValue[2] = fieldValue356;

let fieldValue357 = browser.currentScene.createNode("fieldValue");
fieldValue357.name = "children";
let ProtoInstance358 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance358.name = "Joint";
ProtoInstance358.DEF = "hanim_vt5_2";
let fieldValue359 = browser.currentScene.createNode("fieldValue");
fieldValue359.name = "stiffness";
fieldValue359.value = "1 1 1";
ProtoInstance358.fieldValue = new MFNode();

ProtoInstance358.fieldValue[0] = fieldValue359;

let fieldValue360 = browser.currentScene.createNode("fieldValue");
fieldValue360.name = "name";
fieldValue360.value = "vt5";
ProtoInstance358.fieldValue[1] = fieldValue360;

let fieldValue361 = browser.currentScene.createNode("fieldValue");
fieldValue361.name = "center";
fieldValue361.value = "0.00600000005215406 1.41019999980927 -0.0745000019669533";
ProtoInstance358.fieldValue[2] = fieldValue361;

let fieldValue362 = browser.currentScene.createNode("fieldValue");
fieldValue362.name = "children";
let ProtoInstance363 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance363.name = "Joint";
ProtoInstance363.DEF = "hanim_vt4_2";
let fieldValue364 = browser.currentScene.createNode("fieldValue");
fieldValue364.name = "stiffness";
fieldValue364.value = "1 1 1";
ProtoInstance363.fieldValue = new MFNode();

ProtoInstance363.fieldValue[0] = fieldValue364;

let fieldValue365 = browser.currentScene.createNode("fieldValue");
fieldValue365.name = "name";
fieldValue365.value = "vt4";
ProtoInstance363.fieldValue[1] = fieldValue365;

let fieldValue366 = browser.currentScene.createNode("fieldValue");
fieldValue366.name = "center";
fieldValue366.value = "0.00609999988228083 1.432000041008 -0.067500002682209";
ProtoInstance363.fieldValue[2] = fieldValue366;

let fieldValue367 = browser.currentScene.createNode("fieldValue");
fieldValue367.name = "children";
let ProtoInstance368 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance368.name = "Joint";
ProtoInstance368.DEF = "hanim_vt3_2";
let fieldValue369 = browser.currentScene.createNode("fieldValue");
fieldValue369.name = "stiffness";
fieldValue369.value = "1 1 1";
ProtoInstance368.fieldValue = new MFNode();

ProtoInstance368.fieldValue[0] = fieldValue369;

let fieldValue370 = browser.currentScene.createNode("fieldValue");
fieldValue370.name = "name";
fieldValue370.value = "vt3";
ProtoInstance368.fieldValue[1] = fieldValue370;

let fieldValue371 = browser.currentScene.createNode("fieldValue");
fieldValue371.name = "center";
fieldValue371.value = "0.00620000017806888 1.45829999446869 -0.0570000000298023";
ProtoInstance368.fieldValue[2] = fieldValue371;

let fieldValue372 = browser.currentScene.createNode("fieldValue");
fieldValue372.name = "children";
let ProtoInstance373 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance373.name = "Joint";
ProtoInstance373.DEF = "hanim_vt2_2";
let fieldValue374 = browser.currentScene.createNode("fieldValue");
fieldValue374.name = "stiffness";
fieldValue374.value = "1 1 1";
ProtoInstance373.fieldValue = new MFNode();

ProtoInstance373.fieldValue[0] = fieldValue374;

let fieldValue375 = browser.currentScene.createNode("fieldValue");
fieldValue375.name = "name";
fieldValue375.value = "vt2";
ProtoInstance373.fieldValue[1] = fieldValue375;

let fieldValue376 = browser.currentScene.createNode("fieldValue");
fieldValue376.name = "center";
fieldValue376.value = "0.00630000000819564 1.47609996795654 -0.0483999997377396";
ProtoInstance373.fieldValue[2] = fieldValue376;

let fieldValue377 = browser.currentScene.createNode("fieldValue");
fieldValue377.name = "children";
let ProtoInstance378 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance378.name = "Joint";
ProtoInstance378.DEF = "hanim_vt1_2";
let fieldValue379 = browser.currentScene.createNode("fieldValue");
fieldValue379.name = "stiffness";
fieldValue379.value = "1 1 1";
ProtoInstance378.fieldValue = new MFNode();

ProtoInstance378.fieldValue[0] = fieldValue379;

let fieldValue380 = browser.currentScene.createNode("fieldValue");
fieldValue380.name = "name";
fieldValue380.value = "vt1";
ProtoInstance378.fieldValue[1] = fieldValue380;

let fieldValue381 = browser.currentScene.createNode("fieldValue");
fieldValue381.name = "center";
fieldValue381.value = "0.00650000013411045 1.4951000213623 -0.0386999994516373";
ProtoInstance378.fieldValue[2] = fieldValue381;

let fieldValue382 = browser.currentScene.createNode("fieldValue");
fieldValue382.name = "children";
let ProtoInstance383 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance383.name = "Joint";
ProtoInstance383.DEF = "hanim_vc7_2";
let fieldValue384 = browser.currentScene.createNode("fieldValue");
fieldValue384.name = "stiffness";
fieldValue384.value = "1 1 1";
ProtoInstance383.fieldValue = new MFNode();

ProtoInstance383.fieldValue[0] = fieldValue384;

let fieldValue385 = browser.currentScene.createNode("fieldValue");
fieldValue385.name = "name";
fieldValue385.value = "vc7";
ProtoInstance383.fieldValue[1] = fieldValue385;

let fieldValue386 = browser.currentScene.createNode("fieldValue");
fieldValue386.name = "center";
fieldValue386.value = "0.00659999996423721 1.51320004463196 -0.0300999991595745";
ProtoInstance383.fieldValue[2] = fieldValue386;

let fieldValue387 = browser.currentScene.createNode("fieldValue");
fieldValue387.name = "children";
let ProtoInstance388 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance388.name = "Joint";
ProtoInstance388.DEF = "hanim_vc6_2";
let fieldValue389 = browser.currentScene.createNode("fieldValue");
fieldValue389.name = "stiffness";
fieldValue389.value = "1 1 1";
ProtoInstance388.fieldValue = new MFNode();

ProtoInstance388.fieldValue[0] = fieldValue389;

let fieldValue390 = browser.currentScene.createNode("fieldValue");
fieldValue390.name = "name";
fieldValue390.value = "vc6";
ProtoInstance388.fieldValue[1] = fieldValue390;

let fieldValue391 = browser.currentScene.createNode("fieldValue");
fieldValue391.name = "center";
fieldValue391.value = "0.00659999996423721 1.53569996356964 -0.014299999922514";
ProtoInstance388.fieldValue[2] = fieldValue391;

let fieldValue392 = browser.currentScene.createNode("fieldValue");
fieldValue392.name = "children";
let ProtoInstance393 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance393.name = "Joint";
ProtoInstance393.DEF = "hanim_vc5_2";
let fieldValue394 = browser.currentScene.createNode("fieldValue");
fieldValue394.name = "stiffness";
fieldValue394.value = "1 1 1";
ProtoInstance393.fieldValue = new MFNode();

ProtoInstance393.fieldValue[0] = fieldValue394;

let fieldValue395 = browser.currentScene.createNode("fieldValue");
fieldValue395.name = "name";
fieldValue395.value = "vc5";
ProtoInstance393.fieldValue[1] = fieldValue395;

let fieldValue396 = browser.currentScene.createNode("fieldValue");
fieldValue396.name = "center";
fieldValue396.value = "0.00659999996423721 1.55200004577637 -0.00820000004023314";
ProtoInstance393.fieldValue[2] = fieldValue396;

let fieldValue397 = browser.currentScene.createNode("fieldValue");
fieldValue397.name = "children";
let ProtoInstance398 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance398.name = "Joint";
ProtoInstance398.DEF = "hanim_vc4_2";
let fieldValue399 = browser.currentScene.createNode("fieldValue");
fieldValue399.name = "stiffness";
fieldValue399.value = "1 1 1";
ProtoInstance398.fieldValue = new MFNode();

ProtoInstance398.fieldValue[0] = fieldValue399;

let fieldValue400 = browser.currentScene.createNode("fieldValue");
fieldValue400.name = "name";
fieldValue400.value = "vc4";
ProtoInstance398.fieldValue[1] = fieldValue400;

let fieldValue401 = browser.currentScene.createNode("fieldValue");
fieldValue401.name = "center";
fieldValue401.value = "0.00659999996423721 1.56620001792908 -0.00839999970048666";
ProtoInstance398.fieldValue[2] = fieldValue401;

let fieldValue402 = browser.currentScene.createNode("fieldValue");
fieldValue402.name = "children";
let ProtoInstance403 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance403.name = "Joint";
ProtoInstance403.DEF = "hanim_vc3_2";
let fieldValue404 = browser.currentScene.createNode("fieldValue");
fieldValue404.name = "stiffness";
fieldValue404.value = "1 1 1";
ProtoInstance403.fieldValue = new MFNode();

ProtoInstance403.fieldValue[0] = fieldValue404;

let fieldValue405 = browser.currentScene.createNode("fieldValue");
fieldValue405.name = "name";
fieldValue405.value = "vc3";
ProtoInstance403.fieldValue[1] = fieldValue405;

let fieldValue406 = browser.currentScene.createNode("fieldValue");
fieldValue406.name = "center";
fieldValue406.value = "0.00659999996423721 1.58000004291534 -0.0103000001981854";
ProtoInstance403.fieldValue[2] = fieldValue406;

let fieldValue407 = browser.currentScene.createNode("fieldValue");
fieldValue407.name = "children";
let ProtoInstance408 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance408.name = "Joint";
ProtoInstance408.DEF = "hanim_vc2_2";
let fieldValue409 = browser.currentScene.createNode("fieldValue");
fieldValue409.name = "stiffness";
fieldValue409.value = "1 1 1";
ProtoInstance408.fieldValue = new MFNode();

ProtoInstance408.fieldValue[0] = fieldValue409;

let fieldValue410 = browser.currentScene.createNode("fieldValue");
fieldValue410.name = "name";
fieldValue410.value = "vc2";
ProtoInstance408.fieldValue[1] = fieldValue410;

let fieldValue411 = browser.currentScene.createNode("fieldValue");
fieldValue411.name = "center";
fieldValue411.value = "0.00659999996423721 1.59280002117157 -0.0103000001981854";
ProtoInstance408.fieldValue[2] = fieldValue411;

let fieldValue412 = browser.currentScene.createNode("fieldValue");
fieldValue412.name = "children";
let ProtoInstance413 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance413.name = "Joint";
ProtoInstance413.DEF = "hanim_vc1_2";
let fieldValue414 = browser.currentScene.createNode("fieldValue");
fieldValue414.name = "stiffness";
fieldValue414.value = "1 1 1";
ProtoInstance413.fieldValue = new MFNode();

ProtoInstance413.fieldValue[0] = fieldValue414;

let fieldValue415 = browser.currentScene.createNode("fieldValue");
fieldValue415.name = "name";
fieldValue415.value = "vc1";
ProtoInstance413.fieldValue[1] = fieldValue415;

let fieldValue416 = browser.currentScene.createNode("fieldValue");
fieldValue416.name = "center";
fieldValue416.value = "0.00659999996423721 1.61440002918243 -0.00340000004507601";
ProtoInstance413.fieldValue[2] = fieldValue416;

let fieldValue417 = browser.currentScene.createNode("fieldValue");
fieldValue417.name = "children";
let ProtoInstance418 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance418.name = "Joint";
ProtoInstance418.DEF = "hanim_skullbase_2";
let fieldValue419 = browser.currentScene.createNode("fieldValue");
fieldValue419.name = "stiffness";
fieldValue419.value = "1 1 1";
ProtoInstance418.fieldValue = new MFNode();

ProtoInstance418.fieldValue[0] = fieldValue419;

let fieldValue420 = browser.currentScene.createNode("fieldValue");
fieldValue420.name = "name";
fieldValue420.value = "skullbase";
ProtoInstance418.fieldValue[1] = fieldValue420;

let fieldValue421 = browser.currentScene.createNode("fieldValue");
fieldValue421.name = "center";
fieldValue421.value = "0.00439999997615814 1.62090003490448 0.0236000008881092";
ProtoInstance418.fieldValue[2] = fieldValue421;

let fieldValue422 = browser.currentScene.createNode("fieldValue");
fieldValue422.name = "children";
let ProtoInstance423 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance423.name = "Joint";
ProtoInstance423.DEF = "hanim_l_eyeball_4";
let fieldValue424 = browser.currentScene.createNode("fieldValue");
fieldValue424.name = "stiffness";
fieldValue424.value = "1 1 1";
ProtoInstance423.fieldValue = new MFNode();

ProtoInstance423.fieldValue[0] = fieldValue424;

let fieldValue425 = browser.currentScene.createNode("fieldValue");
fieldValue425.name = "name";
fieldValue425.value = "l_eyeball";
ProtoInstance423.fieldValue[1] = fieldValue425;

let fieldValue426 = browser.currentScene.createNode("fieldValue");
fieldValue426.name = "center";
fieldValue426.value = "0.0335999988019466 1.63320004940033 0.0502000004053116";
ProtoInstance423.fieldValue[2] = fieldValue426;

let fieldValue427 = browser.currentScene.createNode("fieldValue");
fieldValue427.name = "children";
let ProtoInstance428 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance428.name = "Segment";
ProtoInstance428.DEF = "hanim_l_eyeball_3";
let fieldValue429 = browser.currentScene.createNode("fieldValue");
fieldValue429.name = "name";
fieldValue429.value = "l_eyeball";
ProtoInstance428.fieldValue = new MFNode();

ProtoInstance428.fieldValue[0] = fieldValue429;

fieldValue427.children = new MFNode();

fieldValue427.children[0] = ProtoInstance428;

ProtoInstance423.fieldValue[3] = fieldValue427;

fieldValue422.children = new MFNode();

fieldValue422.children[0] = ProtoInstance423;

let ProtoInstance430 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance430.name = "Joint";
ProtoInstance430.DEF = "hanim_r_eyeball_4";
let fieldValue431 = browser.currentScene.createNode("fieldValue");
fieldValue431.name = "stiffness";
fieldValue431.value = "1 1 1";
ProtoInstance430.fieldValue = new MFNode();

ProtoInstance430.fieldValue[0] = fieldValue431;

let fieldValue432 = browser.currentScene.createNode("fieldValue");
fieldValue432.name = "name";
fieldValue432.value = "r_eyeball";
ProtoInstance430.fieldValue[1] = fieldValue432;

let fieldValue433 = browser.currentScene.createNode("fieldValue");
fieldValue433.name = "center";
fieldValue433.value = "-0.0236000008881092 1.6331000328064 0.0509999990463257";
ProtoInstance430.fieldValue[2] = fieldValue433;

let fieldValue434 = browser.currentScene.createNode("fieldValue");
fieldValue434.name = "children";
let ProtoInstance435 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance435.name = "Segment";
ProtoInstance435.DEF = "hanim_r_eyeball_3";
let fieldValue436 = browser.currentScene.createNode("fieldValue");
fieldValue436.name = "name";
fieldValue436.value = "r_eyeball";
ProtoInstance435.fieldValue = new MFNode();

ProtoInstance435.fieldValue[0] = fieldValue436;

fieldValue434.children = new MFNode();

fieldValue434.children[0] = ProtoInstance435;

ProtoInstance430.fieldValue[3] = fieldValue434;

fieldValue422.children[1] = ProtoInstance430;

let ProtoInstance437 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance437.name = "Segment";
ProtoInstance437.DEF = "hanim_skull_2";
let fieldValue438 = browser.currentScene.createNode("fieldValue");
fieldValue438.name = "name";
fieldValue438.value = "skull";
ProtoInstance437.fieldValue = new MFNode();

ProtoInstance437.fieldValue[0] = fieldValue438;

let fieldValue439 = browser.currentScene.createNode("fieldValue");
fieldValue439.name = "children";
let ProtoInstance440 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance440.name = "Site";
ProtoInstance440.DEF = "hanim_skull_tip_2";
let fieldValue441 = browser.currentScene.createNode("fieldValue");
fieldValue441.name = "name";
fieldValue441.value = "skull_tip";
ProtoInstance440.fieldValue = new MFNode();

ProtoInstance440.fieldValue[0] = fieldValue441;

let fieldValue442 = browser.currentScene.createNode("fieldValue");
fieldValue442.name = "translation";
fieldValue442.value = "0.00499999988824129 1.75039994716644 0.00549999997019768";
ProtoInstance440.fieldValue[1] = fieldValue442;

fieldValue439.children = new MFNode();

fieldValue439.children[0] = ProtoInstance440;

let ProtoInstance443 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance443.name = "Site";
ProtoInstance443.DEF = "hanim_sellion_2";
let fieldValue444 = browser.currentScene.createNode("fieldValue");
fieldValue444.name = "name";
fieldValue444.value = "sellion";
ProtoInstance443.fieldValue = new MFNode();

ProtoInstance443.fieldValue[0] = fieldValue444;

let fieldValue445 = browser.currentScene.createNode("fieldValue");
fieldValue445.name = "translation";
fieldValue445.value = "0.00579999992623925 1.63160002231598 0.0851999968290329";
ProtoInstance443.fieldValue[1] = fieldValue445;

fieldValue439.children[1] = ProtoInstance443;

let ProtoInstance446 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance446.name = "Site";
ProtoInstance446.DEF = "hanim_r_infraorbitale_2";
let fieldValue447 = browser.currentScene.createNode("fieldValue");
fieldValue447.name = "name";
fieldValue447.value = "r_infraorbitale";
ProtoInstance446.fieldValue = new MFNode();

ProtoInstance446.fieldValue[0] = fieldValue447;

let fieldValue448 = browser.currentScene.createNode("fieldValue");
fieldValue448.name = "translation";
fieldValue448.value = "-0.023700000718236 1.61710000038147 0.0751999989151955";
ProtoInstance446.fieldValue[1] = fieldValue448;

fieldValue439.children[2] = ProtoInstance446;

let ProtoInstance449 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance449.name = "Site";
ProtoInstance449.DEF = "hanim_l_infraorbitale_2";
let fieldValue450 = browser.currentScene.createNode("fieldValue");
fieldValue450.name = "name";
fieldValue450.value = "l_infraorbitale";
ProtoInstance449.fieldValue = new MFNode();

ProtoInstance449.fieldValue[0] = fieldValue450;

let fieldValue451 = browser.currentScene.createNode("fieldValue");
fieldValue451.name = "translation";
fieldValue451.value = "0.0340999998152256 1.61710000038147 0.0751999989151955";
ProtoInstance449.fieldValue[1] = fieldValue451;

fieldValue439.children[3] = ProtoInstance449;

let ProtoInstance452 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance452.name = "Site";
ProtoInstance452.DEF = "hanim_supramenton_2";
let fieldValue453 = browser.currentScene.createNode("fieldValue");
fieldValue453.name = "name";
fieldValue453.value = "supramenton";
ProtoInstance452.fieldValue = new MFNode();

ProtoInstance452.fieldValue[0] = fieldValue453;

let fieldValue454 = browser.currentScene.createNode("fieldValue");
fieldValue454.name = "translation";
fieldValue454.value = "0.00609999988228083 1.54100000858307 0.0804999992251396";
ProtoInstance452.fieldValue[1] = fieldValue454;

fieldValue439.children[4] = ProtoInstance452;

let ProtoInstance455 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance455.name = "Site";
ProtoInstance455.DEF = "hanim_r_tragion_2";
let fieldValue456 = browser.currentScene.createNode("fieldValue");
fieldValue456.name = "name";
fieldValue456.value = "r_tragion";
ProtoInstance455.fieldValue = new MFNode();

ProtoInstance455.fieldValue[0] = fieldValue456;

let fieldValue457 = browser.currentScene.createNode("fieldValue");
fieldValue457.name = "translation";
fieldValue457.value = "-0.0645999982953072 1.63469994068146 0.0302000008523464";
ProtoInstance455.fieldValue[1] = fieldValue457;

fieldValue439.children[5] = ProtoInstance455;

let ProtoInstance458 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance458.name = "Site";
ProtoInstance458.DEF = "hanim_r_gonion_2";
let fieldValue459 = browser.currentScene.createNode("fieldValue");
fieldValue459.name = "name";
fieldValue459.value = "r_gonion";
ProtoInstance458.fieldValue = new MFNode();

ProtoInstance458.fieldValue[0] = fieldValue459;

let fieldValue460 = browser.currentScene.createNode("fieldValue");
fieldValue460.name = "translation";
fieldValue460.value = "-0.0520000010728836 1.55289995670319 0.0346999987959862";
ProtoInstance458.fieldValue[1] = fieldValue460;

fieldValue439.children[6] = ProtoInstance458;

let ProtoInstance461 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance461.name = "Site";
ProtoInstance461.DEF = "hanim_l_tragion_2";
let fieldValue462 = browser.currentScene.createNode("fieldValue");
fieldValue462.name = "name";
fieldValue462.value = "l_tragion";
ProtoInstance461.fieldValue = new MFNode();

ProtoInstance461.fieldValue[0] = fieldValue462;

let fieldValue463 = browser.currentScene.createNode("fieldValue");
fieldValue463.name = "translation";
fieldValue463.value = "0.0738999992609024 1.63479995727539 0.0282000005245209";
ProtoInstance461.fieldValue[1] = fieldValue463;

fieldValue439.children[7] = ProtoInstance461;

let ProtoInstance464 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance464.name = "Site";
ProtoInstance464.DEF = "hanim_l_gonion_2";
let fieldValue465 = browser.currentScene.createNode("fieldValue");
fieldValue465.name = "name";
fieldValue465.value = "l_gonion";
ProtoInstance464.fieldValue = new MFNode();

ProtoInstance464.fieldValue[0] = fieldValue465;

let fieldValue466 = browser.currentScene.createNode("fieldValue");
fieldValue466.name = "translation";
fieldValue466.value = "0.0631000027060509 1.55299997329712 0.0329999998211861";
ProtoInstance464.fieldValue[1] = fieldValue466;

fieldValue439.children[8] = ProtoInstance464;

let ProtoInstance467 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance467.name = "Site";
ProtoInstance467.DEF = "hanim_nuchale_2";
let fieldValue468 = browser.currentScene.createNode("fieldValue");
fieldValue468.name = "name";
fieldValue468.value = "nuchale";
ProtoInstance467.fieldValue = new MFNode();

ProtoInstance467.fieldValue[0] = fieldValue468;

let fieldValue469 = browser.currentScene.createNode("fieldValue");
fieldValue469.name = "translation";
fieldValue469.value = "0.00389999989420176 1.59720003604889 -0.0795999988913536";
ProtoInstance467.fieldValue[1] = fieldValue469;

fieldValue439.children[9] = ProtoInstance467;

ProtoInstance437.fieldValue[1] = fieldValue439;

fieldValue422.children[2] = ProtoInstance437;

ProtoInstance418.fieldValue[3] = fieldValue422;

fieldValue417.children = new MFNode();

fieldValue417.children[0] = ProtoInstance418;

let ProtoInstance470 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance470.name = "Segment";
ProtoInstance470.DEF = "hanim_c1_2";
let fieldValue471 = browser.currentScene.createNode("fieldValue");
fieldValue471.name = "name";
fieldValue471.value = "c1";
ProtoInstance470.fieldValue = new MFNode();

ProtoInstance470.fieldValue[0] = fieldValue471;

fieldValue417.children[1] = ProtoInstance470;

ProtoInstance413.fieldValue[3] = fieldValue417;

fieldValue412.children = new MFNode();

fieldValue412.children[0] = ProtoInstance413;

let ProtoInstance472 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance472.name = "Segment";
ProtoInstance472.DEF = "hanim_c2_2";
let fieldValue473 = browser.currentScene.createNode("fieldValue");
fieldValue473.name = "name";
fieldValue473.value = "c2";
ProtoInstance472.fieldValue = new MFNode();

ProtoInstance472.fieldValue[0] = fieldValue473;

fieldValue412.children[1] = ProtoInstance472;

ProtoInstance408.fieldValue[3] = fieldValue412;

fieldValue407.children = new MFNode();

fieldValue407.children[0] = ProtoInstance408;

let ProtoInstance474 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance474.name = "Segment";
ProtoInstance474.DEF = "hanim_c3_2";
let fieldValue475 = browser.currentScene.createNode("fieldValue");
fieldValue475.name = "name";
fieldValue475.value = "c3";
ProtoInstance474.fieldValue = new MFNode();

ProtoInstance474.fieldValue[0] = fieldValue475;

fieldValue407.children[1] = ProtoInstance474;

ProtoInstance403.fieldValue[3] = fieldValue407;

fieldValue402.children = new MFNode();

fieldValue402.children[0] = ProtoInstance403;

let ProtoInstance476 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance476.name = "Segment";
ProtoInstance476.DEF = "hanim_c4_2";
let fieldValue477 = browser.currentScene.createNode("fieldValue");
fieldValue477.name = "name";
fieldValue477.value = "c4";
ProtoInstance476.fieldValue = new MFNode();

ProtoInstance476.fieldValue[0] = fieldValue477;

fieldValue402.children[1] = ProtoInstance476;

ProtoInstance398.fieldValue[3] = fieldValue402;

fieldValue397.children = new MFNode();

fieldValue397.children[0] = ProtoInstance398;

let ProtoInstance478 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance478.name = "Segment";
ProtoInstance478.DEF = "hanim_c5_2";
let fieldValue479 = browser.currentScene.createNode("fieldValue");
fieldValue479.name = "name";
fieldValue479.value = "c5";
ProtoInstance478.fieldValue = new MFNode();

ProtoInstance478.fieldValue[0] = fieldValue479;

fieldValue397.children[1] = ProtoInstance478;

ProtoInstance393.fieldValue[3] = fieldValue397;

fieldValue392.children = new MFNode();

fieldValue392.children[0] = ProtoInstance393;

let ProtoInstance480 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance480.name = "Segment";
ProtoInstance480.DEF = "hanim_c6_2";
let fieldValue481 = browser.currentScene.createNode("fieldValue");
fieldValue481.name = "name";
fieldValue481.value = "c6";
ProtoInstance480.fieldValue = new MFNode();

ProtoInstance480.fieldValue[0] = fieldValue481;

fieldValue392.children[1] = ProtoInstance480;

ProtoInstance388.fieldValue[3] = fieldValue392;

fieldValue387.children = new MFNode();

fieldValue387.children[0] = ProtoInstance388;

let ProtoInstance482 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance482.name = "Segment";
ProtoInstance482.DEF = "hanim_c7_2";
let fieldValue483 = browser.currentScene.createNode("fieldValue");
fieldValue483.name = "name";
fieldValue483.value = "c7";
ProtoInstance482.fieldValue = new MFNode();

ProtoInstance482.fieldValue[0] = fieldValue483;

let fieldValue484 = browser.currentScene.createNode("fieldValue");
fieldValue484.name = "children";
let ProtoInstance485 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance485.name = "Site";
ProtoInstance485.DEF = "hanim_r_neck_base_2";
let fieldValue486 = browser.currentScene.createNode("fieldValue");
fieldValue486.name = "name";
fieldValue486.value = "r_neck_base";
ProtoInstance485.fieldValue = new MFNode();

ProtoInstance485.fieldValue[0] = fieldValue486;

let fieldValue487 = browser.currentScene.createNode("fieldValue");
fieldValue487.name = "translation";
fieldValue487.value = "-0.0419000014662743 1.51489996910095 -0.0219999998807907";
ProtoInstance485.fieldValue[1] = fieldValue487;

fieldValue484.children = new MFNode();

fieldValue484.children[0] = ProtoInstance485;

let ProtoInstance488 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance488.name = "Site";
ProtoInstance488.DEF = "hanim_l_neck_base_2";
let fieldValue489 = browser.currentScene.createNode("fieldValue");
fieldValue489.name = "name";
fieldValue489.value = "l_neck_base";
ProtoInstance488.fieldValue = new MFNode();

ProtoInstance488.fieldValue[0] = fieldValue489;

let fieldValue490 = browser.currentScene.createNode("fieldValue");
fieldValue490.name = "translation";
fieldValue490.value = "0.0645999982953072 1.51409995555878 -0.0379999987781048";
ProtoInstance488.fieldValue[1] = fieldValue490;

fieldValue484.children[1] = ProtoInstance488;

ProtoInstance482.fieldValue[1] = fieldValue484;

fieldValue387.children[1] = ProtoInstance482;

ProtoInstance383.fieldValue[3] = fieldValue387;

fieldValue382.children = new MFNode();

fieldValue382.children[0] = ProtoInstance383;

let ProtoInstance491 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance491.name = "Joint";
ProtoInstance491.DEF = "hanim_l_sternoclavicular_2";
let fieldValue492 = browser.currentScene.createNode("fieldValue");
fieldValue492.name = "stiffness";
fieldValue492.value = "1 1 1";
ProtoInstance491.fieldValue = new MFNode();

ProtoInstance491.fieldValue[0] = fieldValue492;

let fieldValue493 = browser.currentScene.createNode("fieldValue");
fieldValue493.name = "name";
fieldValue493.value = "l_sternoclavicular";
ProtoInstance491.fieldValue[1] = fieldValue493;

let fieldValue494 = browser.currentScene.createNode("fieldValue");
fieldValue494.name = "center";
fieldValue494.value = "0.0820000022649765 1.44879996776581 -0.035300001502037";
ProtoInstance491.fieldValue[2] = fieldValue494;

let fieldValue495 = browser.currentScene.createNode("fieldValue");
fieldValue495.name = "children";
let ProtoInstance496 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance496.name = "Joint";
ProtoInstance496.DEF = "hanim_l_acromioclavicular_2";
let fieldValue497 = browser.currentScene.createNode("fieldValue");
fieldValue497.name = "stiffness";
fieldValue497.value = "1 1 1";
ProtoInstance496.fieldValue = new MFNode();

ProtoInstance496.fieldValue[0] = fieldValue497;

let fieldValue498 = browser.currentScene.createNode("fieldValue");
fieldValue498.name = "name";
fieldValue498.value = "l_acromioclavicular";
ProtoInstance496.fieldValue[1] = fieldValue498;

let fieldValue499 = browser.currentScene.createNode("fieldValue");
fieldValue499.name = "center";
fieldValue499.value = "0.0961999967694283 1.42690002918243 -0.0423999987542629";
ProtoInstance496.fieldValue[2] = fieldValue499;

let fieldValue500 = browser.currentScene.createNode("fieldValue");
fieldValue500.name = "children";
let ProtoInstance501 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance501.name = "Joint";
ProtoInstance501.DEF = "hanim_l_shoulder_2";
let fieldValue502 = browser.currentScene.createNode("fieldValue");
fieldValue502.name = "stiffness";
fieldValue502.value = "1 1 1";
ProtoInstance501.fieldValue = new MFNode();

ProtoInstance501.fieldValue[0] = fieldValue502;

let fieldValue503 = browser.currentScene.createNode("fieldValue");
fieldValue503.name = "name";
fieldValue503.value = "l_shoulder";
ProtoInstance501.fieldValue[1] = fieldValue503;

let fieldValue504 = browser.currentScene.createNode("fieldValue");
fieldValue504.name = "center";
fieldValue504.value = "0.202900007367134 1.43760001659393 -0.0386999994516373";
ProtoInstance501.fieldValue[2] = fieldValue504;

let fieldValue505 = browser.currentScene.createNode("fieldValue");
fieldValue505.name = "children";
let ProtoInstance506 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance506.name = "Joint";
ProtoInstance506.DEF = "hanim_l_elbow_2";
let fieldValue507 = browser.currentScene.createNode("fieldValue");
fieldValue507.name = "stiffness";
fieldValue507.value = "1 1 1";
ProtoInstance506.fieldValue = new MFNode();

ProtoInstance506.fieldValue[0] = fieldValue507;

let fieldValue508 = browser.currentScene.createNode("fieldValue");
fieldValue508.name = "name";
fieldValue508.value = "l_elbow";
ProtoInstance506.fieldValue[1] = fieldValue508;

let fieldValue509 = browser.currentScene.createNode("fieldValue");
fieldValue509.name = "center";
fieldValue509.value = "0.201399996876717 1.1356999874115 -0.0681999996304512";
ProtoInstance506.fieldValue[2] = fieldValue509;

let fieldValue510 = browser.currentScene.createNode("fieldValue");
fieldValue510.name = "children";
let ProtoInstance511 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance511.name = "Joint";
ProtoInstance511.DEF = "hanim_l_radiocarpal_2";
let fieldValue512 = browser.currentScene.createNode("fieldValue");
fieldValue512.name = "stiffness";
fieldValue512.value = "1 1 1";
ProtoInstance511.fieldValue = new MFNode();

ProtoInstance511.fieldValue[0] = fieldValue512;

let fieldValue513 = browser.currentScene.createNode("fieldValue");
fieldValue513.name = "name";
fieldValue513.value = "l_radiocarpal";
ProtoInstance511.fieldValue[1] = fieldValue513;

let fieldValue514 = browser.currentScene.createNode("fieldValue");
fieldValue514.name = "center";
fieldValue514.value = "0.198400005698204 0.866299986839294 -0.0582999996840954";
ProtoInstance511.fieldValue[2] = fieldValue514;

let fieldValue515 = browser.currentScene.createNode("fieldValue");
fieldValue515.name = "children";
let ProtoInstance516 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance516.name = "Joint";
ProtoInstance516.DEF = "hanim_l_carpometacarpal2";
let fieldValue517 = browser.currentScene.createNode("fieldValue");
fieldValue517.name = "stiffness";
fieldValue517.value = "1 1 1";
ProtoInstance516.fieldValue = new MFNode();

ProtoInstance516.fieldValue[0] = fieldValue517;

let fieldValue518 = browser.currentScene.createNode("fieldValue");
fieldValue518.name = "name";
fieldValue518.value = "l_carpometacarpal_1";
ProtoInstance516.fieldValue[1] = fieldValue518;

let fieldValue519 = browser.currentScene.createNode("fieldValue");
fieldValue519.name = "center";
fieldValue519.value = "0.192399993538857 0.847199976444244 -0.0533999986946583";
ProtoInstance516.fieldValue[2] = fieldValue519;

let fieldValue520 = browser.currentScene.createNode("fieldValue");
fieldValue520.name = "children";
let ProtoInstance521 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance521.name = "Joint";
ProtoInstance521.DEF = "hanim_l_metacarpophalangeal2";
let fieldValue522 = browser.currentScene.createNode("fieldValue");
fieldValue522.name = "stiffness";
fieldValue522.value = "1 1 1";
ProtoInstance521.fieldValue = new MFNode();

ProtoInstance521.fieldValue[0] = fieldValue522;

let fieldValue523 = browser.currentScene.createNode("fieldValue");
fieldValue523.name = "name";
fieldValue523.value = "l_metacarpophalangeal_1";
ProtoInstance521.fieldValue[1] = fieldValue523;

let fieldValue524 = browser.currentScene.createNode("fieldValue");
fieldValue524.name = "center";
fieldValue524.value = "0.195099994540215 0.82260000705719 0.0245999991893768";
ProtoInstance521.fieldValue[2] = fieldValue524;

let fieldValue525 = browser.currentScene.createNode("fieldValue");
fieldValue525.name = "children";
let ProtoInstance526 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance526.name = "Joint";
ProtoInstance526.DEF = "hanim_l_carpal_interphalangeal2";
let fieldValue527 = browser.currentScene.createNode("fieldValue");
fieldValue527.name = "stiffness";
fieldValue527.value = "1 1 1";
ProtoInstance526.fieldValue = new MFNode();

ProtoInstance526.fieldValue[0] = fieldValue527;

let fieldValue528 = browser.currentScene.createNode("fieldValue");
fieldValue528.name = "name";
fieldValue528.value = "l_carpal_interphalangeal_1";
ProtoInstance526.fieldValue[1] = fieldValue528;

let fieldValue529 = browser.currentScene.createNode("fieldValue");
fieldValue529.name = "center";
fieldValue529.value = "0.195500001311302 0.815900027751923 0.046399999409914";
ProtoInstance526.fieldValue[2] = fieldValue529;

let fieldValue530 = browser.currentScene.createNode("fieldValue");
fieldValue530.name = "children";
let ProtoInstance531 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance531.name = "Segment";
ProtoInstance531.DEF = "hanim_l_carpal_distal_phalanx2";
let fieldValue532 = browser.currentScene.createNode("fieldValue");
fieldValue532.name = "name";
fieldValue532.value = "l_carpal_distal_phalanx_1";
ProtoInstance531.fieldValue = new MFNode();

ProtoInstance531.fieldValue[0] = fieldValue532;

let fieldValue533 = browser.currentScene.createNode("fieldValue");
fieldValue533.name = "children";
let ProtoInstance534 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance534.name = "Site";
ProtoInstance534.DEF = "hanim_l_carpal_distal_phalanx_1_tip_2";
let fieldValue535 = browser.currentScene.createNode("fieldValue");
fieldValue535.name = "name";
fieldValue535.value = "l_carpal_distal_phalanx_1_tip";
ProtoInstance534.fieldValue = new MFNode();

ProtoInstance534.fieldValue[0] = fieldValue535;

let fieldValue536 = browser.currentScene.createNode("fieldValue");
fieldValue536.name = "translation";
fieldValue536.value = "0.19820000231266 0.806100010871887 0.0759000033140183";
ProtoInstance534.fieldValue[1] = fieldValue536;

fieldValue533.children = new MFNode();

fieldValue533.children[0] = ProtoInstance534;

ProtoInstance531.fieldValue[1] = fieldValue533;

fieldValue530.children = new MFNode();

fieldValue530.children[0] = ProtoInstance531;

ProtoInstance526.fieldValue[3] = fieldValue530;

fieldValue525.children = new MFNode();

fieldValue525.children[0] = ProtoInstance526;

let ProtoInstance537 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance537.name = "Segment";
ProtoInstance537.DEF = "hanim_l_index_proximal_2";
let fieldValue538 = browser.currentScene.createNode("fieldValue");
fieldValue538.name = "name";
fieldValue538.value = "l_index_proximal";
ProtoInstance537.fieldValue = new MFNode();

ProtoInstance537.fieldValue[0] = fieldValue538;

fieldValue525.children[1] = ProtoInstance537;

ProtoInstance521.fieldValue[3] = fieldValue525;

fieldValue520.children = new MFNode();

fieldValue520.children[0] = ProtoInstance521;

let ProtoInstance539 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance539.name = "Segment";
ProtoInstance539.DEF = "hanim_l_index_proximal_4";
let fieldValue540 = browser.currentScene.createNode("fieldValue");
fieldValue540.name = "name";
fieldValue540.value = "l_index_proximal";
ProtoInstance539.fieldValue = new MFNode();

ProtoInstance539.fieldValue[0] = fieldValue540;

fieldValue520.children[1] = ProtoInstance539;

ProtoInstance516.fieldValue[3] = fieldValue520;

fieldValue515.children = new MFNode();

fieldValue515.children[0] = ProtoInstance516;

let ProtoInstance541 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance541.name = "Joint";
ProtoInstance541.DEF = "hanim_l_carpometacarpal3";
let fieldValue542 = browser.currentScene.createNode("fieldValue");
fieldValue542.name = "stiffness";
fieldValue542.value = "1 1 1";
ProtoInstance541.fieldValue = new MFNode();

ProtoInstance541.fieldValue[0] = fieldValue542;

let fieldValue543 = browser.currentScene.createNode("fieldValue");
fieldValue543.name = "name";
fieldValue543.value = "l_carpometacarpal_2";
ProtoInstance541.fieldValue[1] = fieldValue543;

let fieldValue544 = browser.currentScene.createNode("fieldValue");
fieldValue544.name = "center";
fieldValue544.value = "0.198300004005432 0.80239999294281 -0.0280000008642673";
ProtoInstance541.fieldValue[2] = fieldValue544;

let fieldValue545 = browser.currentScene.createNode("fieldValue");
fieldValue545.name = "children";
let ProtoInstance546 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance546.name = "Joint";
ProtoInstance546.DEF = "hanim_l_metacarpophalangeal3";
let fieldValue547 = browser.currentScene.createNode("fieldValue");
fieldValue547.name = "stiffness";
fieldValue547.value = "1 1 1";
ProtoInstance546.fieldValue = new MFNode();

ProtoInstance546.fieldValue[0] = fieldValue547;

let fieldValue548 = browser.currentScene.createNode("fieldValue");
fieldValue548.name = "name";
fieldValue548.value = "l_metacarpophalangeal_2";
ProtoInstance546.fieldValue[1] = fieldValue548;

let fieldValue549 = browser.currentScene.createNode("fieldValue");
fieldValue549.name = "center";
fieldValue549.value = "0.198300004005432 0.781499981880188 -0.0280000008642673";
ProtoInstance546.fieldValue[2] = fieldValue549;

let fieldValue550 = browser.currentScene.createNode("fieldValue");
fieldValue550.name = "children";
let ProtoInstance551 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance551.name = "Joint";
ProtoInstance551.DEF = "hanim_l_carpal_proximal_interphalangeal3";
let fieldValue552 = browser.currentScene.createNode("fieldValue");
fieldValue552.name = "stiffness";
fieldValue552.value = "1 1 1";
ProtoInstance551.fieldValue = new MFNode();

ProtoInstance551.fieldValue[0] = fieldValue552;

let fieldValue553 = browser.currentScene.createNode("fieldValue");
fieldValue553.name = "name";
fieldValue553.value = "l_carpal_proximal_interphalangeal_2";
ProtoInstance551.fieldValue[1] = fieldValue553;

let fieldValue554 = browser.currentScene.createNode("fieldValue");
fieldValue554.name = "center";
fieldValue554.value = "0.201700001955032 0.736299991607666 -0.0248000007122755";
ProtoInstance551.fieldValue[2] = fieldValue554;

let fieldValue555 = browser.currentScene.createNode("fieldValue");
fieldValue555.name = "children";
let ProtoInstance556 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance556.name = "Joint";
ProtoInstance556.DEF = "hanim_l_carpal_distal_interphalangeal3";
let fieldValue557 = browser.currentScene.createNode("fieldValue");
fieldValue557.name = "stiffness";
fieldValue557.value = "1 1 1";
ProtoInstance556.fieldValue = new MFNode();

ProtoInstance556.fieldValue[0] = fieldValue557;

let fieldValue558 = browser.currentScene.createNode("fieldValue");
fieldValue558.name = "name";
fieldValue558.value = "l_carpal_distal_interphalangeal_2";
ProtoInstance556.fieldValue[1] = fieldValue558;

let fieldValue559 = browser.currentScene.createNode("fieldValue");
fieldValue559.name = "center";
fieldValue559.value = "0.202800005674362 0.713900029659271 -0.0236000008881092";
ProtoInstance556.fieldValue[2] = fieldValue559;

let fieldValue560 = browser.currentScene.createNode("fieldValue");
fieldValue560.name = "children";
let ProtoInstance561 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance561.name = "Segment";
ProtoInstance561.DEF = "hanim_l_carpal_distal_phalanx3";
let fieldValue562 = browser.currentScene.createNode("fieldValue");
fieldValue562.name = "name";
fieldValue562.value = "l_carpal_distal_phalanx_2";
ProtoInstance561.fieldValue = new MFNode();

ProtoInstance561.fieldValue[0] = fieldValue562;

let fieldValue563 = browser.currentScene.createNode("fieldValue");
fieldValue563.name = "children";
let ProtoInstance564 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance564.name = "Site";
ProtoInstance564.DEF = "hanim_l_carpal_distal_phalanx_2_tip_2";
let fieldValue565 = browser.currentScene.createNode("fieldValue");
fieldValue565.name = "name";
fieldValue565.value = "l_carpal_distal_phalanx_2_tip";
ProtoInstance564.fieldValue = new MFNode();

ProtoInstance564.fieldValue[0] = fieldValue565;

let fieldValue566 = browser.currentScene.createNode("fieldValue");
fieldValue566.name = "translation";
fieldValue566.value = "0.20890000462532 0.685800015926361 -0.0244999993592501";
ProtoInstance564.fieldValue[1] = fieldValue566;

fieldValue563.children = new MFNode();

fieldValue563.children[0] = ProtoInstance564;

let ProtoInstance567 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance567.name = "Site";
ProtoInstance567.DEF = "hanim_l_dactylion_2";
let fieldValue568 = browser.currentScene.createNode("fieldValue");
fieldValue568.name = "name";
fieldValue568.value = "l_dactylion";
ProtoInstance567.fieldValue = new MFNode();

ProtoInstance567.fieldValue[0] = fieldValue568;

let fieldValue569 = browser.currentScene.createNode("fieldValue");
fieldValue569.name = "translation";
fieldValue569.value = "0.205599993467331 0.674300014972687 -0.048200000077486";
ProtoInstance567.fieldValue[1] = fieldValue569;

fieldValue563.children[1] = ProtoInstance567;

ProtoInstance561.fieldValue[1] = fieldValue563;

fieldValue560.children = new MFNode();

fieldValue560.children[0] = ProtoInstance561;

ProtoInstance556.fieldValue[3] = fieldValue560;

fieldValue555.children = new MFNode();

fieldValue555.children[0] = ProtoInstance556;

let ProtoInstance570 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance570.name = "Segment";
ProtoInstance570.DEF = "hanim_l_index_middle_2";
let fieldValue571 = browser.currentScene.createNode("fieldValue");
fieldValue571.name = "name";
fieldValue571.value = "l_index_middle";
ProtoInstance570.fieldValue = new MFNode();

ProtoInstance570.fieldValue[0] = fieldValue571;

fieldValue555.children[1] = ProtoInstance570;

ProtoInstance551.fieldValue[3] = fieldValue555;

fieldValue550.children = new MFNode();

fieldValue550.children[0] = ProtoInstance551;

let ProtoInstance572 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance572.name = "Segment";
ProtoInstance572.DEF = "hanim_l_index_proximal_6";
let fieldValue573 = browser.currentScene.createNode("fieldValue");
fieldValue573.name = "name";
fieldValue573.value = "l_index_proximal";
ProtoInstance572.fieldValue = new MFNode();

ProtoInstance572.fieldValue[0] = fieldValue573;

fieldValue550.children[1] = ProtoInstance572;

ProtoInstance546.fieldValue[3] = fieldValue550;

fieldValue545.children = new MFNode();

fieldValue545.children[0] = ProtoInstance546;

let ProtoInstance574 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance574.name = "Segment";
ProtoInstance574.DEF = "hanim_l_index_metacarpal_2";
let fieldValue575 = browser.currentScene.createNode("fieldValue");
fieldValue575.name = "name";
fieldValue575.value = "l_index_metacarpal";
ProtoInstance574.fieldValue = new MFNode();

ProtoInstance574.fieldValue[0] = fieldValue575;

fieldValue545.children[1] = ProtoInstance574;

ProtoInstance541.fieldValue[3] = fieldValue545;

fieldValue515.children[1] = ProtoInstance541;

let ProtoInstance576 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance576.name = "Joint";
ProtoInstance576.DEF = "hanim_l_carpometacarpal4";
let fieldValue577 = browser.currentScene.createNode("fieldValue");
fieldValue577.name = "stiffness";
fieldValue577.value = "1 1 1";
ProtoInstance576.fieldValue = new MFNode();

ProtoInstance576.fieldValue[0] = fieldValue577;

let fieldValue578 = browser.currentScene.createNode("fieldValue");
fieldValue578.name = "name";
fieldValue578.value = "l_carpometacarpal_3";
ProtoInstance576.fieldValue[1] = fieldValue578;

let fieldValue579 = browser.currentScene.createNode("fieldValue");
fieldValue579.name = "center";
fieldValue579.value = "0.198699995875359 0.802900016307831 -0.0529999993741512";
ProtoInstance576.fieldValue[2] = fieldValue579;

let fieldValue580 = browser.currentScene.createNode("fieldValue");
fieldValue580.name = "children";
let ProtoInstance581 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance581.name = "Joint";
ProtoInstance581.DEF = "hanim_l_metacarpophalangeal4";
let fieldValue582 = browser.currentScene.createNode("fieldValue");
fieldValue582.name = "stiffness";
fieldValue582.value = "1 1 1";
ProtoInstance581.fieldValue = new MFNode();

ProtoInstance581.fieldValue[0] = fieldValue582;

let fieldValue583 = browser.currentScene.createNode("fieldValue");
fieldValue583.name = "name";
fieldValue583.value = "l_metacarpophalangeal_3";
ProtoInstance581.fieldValue[1] = fieldValue583;

let fieldValue584 = browser.currentScene.createNode("fieldValue");
fieldValue584.name = "center";
fieldValue584.value = "0.198699995875359 0.781799972057343 -0.0529999993741512";
ProtoInstance581.fieldValue[2] = fieldValue584;

let fieldValue585 = browser.currentScene.createNode("fieldValue");
fieldValue585.name = "children";
let ProtoInstance586 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance586.name = "Joint";
ProtoInstance586.DEF = "hanim_l_carpal_proximal_interphalangeal4";
let fieldValue587 = browser.currentScene.createNode("fieldValue");
fieldValue587.name = "stiffness";
fieldValue587.value = "1 1 1";
ProtoInstance586.fieldValue = new MFNode();

ProtoInstance586.fieldValue[0] = fieldValue587;

let fieldValue588 = browser.currentScene.createNode("fieldValue");
fieldValue588.name = "name";
fieldValue588.value = "l_carpal_proximal_interphalangeal_3";
ProtoInstance586.fieldValue[1] = fieldValue588;

let fieldValue589 = browser.currentScene.createNode("fieldValue");
fieldValue589.name = "center";
fieldValue589.value = "0.201299995183945 0.727299988269806 -0.0502999983727932";
ProtoInstance586.fieldValue[2] = fieldValue589;

let fieldValue590 = browser.currentScene.createNode("fieldValue");
fieldValue590.name = "children";
let ProtoInstance591 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance591.name = "Joint";
ProtoInstance591.DEF = "hanim_l_carpal_distal_interphalangeal4";
let fieldValue592 = browser.currentScene.createNode("fieldValue");
fieldValue592.name = "stiffness";
fieldValue592.value = "1 1 1";
ProtoInstance591.fieldValue = new MFNode();

ProtoInstance591.fieldValue[0] = fieldValue592;

let fieldValue593 = browser.currentScene.createNode("fieldValue");
fieldValue593.name = "name";
fieldValue593.value = "l_carpal_distal_interphalangeal_3";
ProtoInstance591.fieldValue[1] = fieldValue593;

let fieldValue594 = browser.currentScene.createNode("fieldValue");
fieldValue594.name = "center";
fieldValue594.value = "0.202600002288818 0.701099991798401 -0.0494000017642975";
ProtoInstance591.fieldValue[2] = fieldValue594;

let fieldValue595 = browser.currentScene.createNode("fieldValue");
fieldValue595.name = "children";
let ProtoInstance596 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance596.name = "Segment";
ProtoInstance596.DEF = "hanim_l_carpal_distal_phalanx4";
let fieldValue597 = browser.currentScene.createNode("fieldValue");
fieldValue597.name = "name";
fieldValue597.value = "l_carpal_distal_phalanx_3";
ProtoInstance596.fieldValue = new MFNode();

ProtoInstance596.fieldValue[0] = fieldValue597;

let fieldValue598 = browser.currentScene.createNode("fieldValue");
fieldValue598.name = "children";
let ProtoInstance599 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance599.name = "Site";
ProtoInstance599.DEF = "hanim_l_carpal_distal_phalanx_3_tip_2";
let fieldValue600 = browser.currentScene.createNode("fieldValue");
fieldValue600.name = "name";
fieldValue600.value = "l_carpal_distal_phalanx_3_tip";
ProtoInstance599.fieldValue = new MFNode();

ProtoInstance599.fieldValue[0] = fieldValue600;

let fieldValue601 = browser.currentScene.createNode("fieldValue");
fieldValue601.name = "translation";
fieldValue601.value = "0.208000004291534 0.673099994659424 -0.049100000411272";
ProtoInstance599.fieldValue[1] = fieldValue601;

fieldValue598.children = new MFNode();

fieldValue598.children[0] = ProtoInstance599;

ProtoInstance596.fieldValue[1] = fieldValue598;

fieldValue595.children = new MFNode();

fieldValue595.children[0] = ProtoInstance596;

ProtoInstance591.fieldValue[3] = fieldValue595;

fieldValue590.children = new MFNode();

fieldValue590.children[0] = ProtoInstance591;

let ProtoInstance602 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance602.name = "Segment";
ProtoInstance602.DEF = "hanim_l_middle_middle_2";
let fieldValue603 = browser.currentScene.createNode("fieldValue");
fieldValue603.name = "name";
fieldValue603.value = "l_middle_middle";
ProtoInstance602.fieldValue = new MFNode();

ProtoInstance602.fieldValue[0] = fieldValue603;

fieldValue590.children[1] = ProtoInstance602;

ProtoInstance586.fieldValue[3] = fieldValue590;

fieldValue585.children = new MFNode();

fieldValue585.children[0] = ProtoInstance586;

let ProtoInstance604 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance604.name = "Segment";
ProtoInstance604.DEF = "hanim_l_middle_proximal_2";
let fieldValue605 = browser.currentScene.createNode("fieldValue");
fieldValue605.name = "name";
fieldValue605.value = "l_middle_proximal";
ProtoInstance604.fieldValue = new MFNode();

ProtoInstance604.fieldValue[0] = fieldValue605;

fieldValue585.children[1] = ProtoInstance604;

ProtoInstance581.fieldValue[3] = fieldValue585;

fieldValue580.children = new MFNode();

fieldValue580.children[0] = ProtoInstance581;

let ProtoInstance606 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance606.name = "Segment";
ProtoInstance606.DEF = "hanim_l_middle_metacarpal_2";
let fieldValue607 = browser.currentScene.createNode("fieldValue");
fieldValue607.name = "name";
fieldValue607.value = "l_middle_metacarpal";
ProtoInstance606.fieldValue = new MFNode();

ProtoInstance606.fieldValue[0] = fieldValue607;

fieldValue580.children[1] = ProtoInstance606;

ProtoInstance576.fieldValue[3] = fieldValue580;

fieldValue515.children[2] = ProtoInstance576;

let ProtoInstance608 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance608.name = "Joint";
ProtoInstance608.DEF = "hanim_l_carpometacarpal5";
let fieldValue609 = browser.currentScene.createNode("fieldValue");
fieldValue609.name = "stiffness";
fieldValue609.value = "1 1 1";
ProtoInstance608.fieldValue = new MFNode();

ProtoInstance608.fieldValue[0] = fieldValue609;

let fieldValue610 = browser.currentScene.createNode("fieldValue");
fieldValue610.name = "name";
fieldValue610.value = "l_carpometacarpal_4";
ProtoInstance608.fieldValue[1] = fieldValue610;

let fieldValue611 = browser.currentScene.createNode("fieldValue");
fieldValue611.name = "center";
fieldValue611.value = "0.195600003004074 0.801900029182434 -0.0794000029563904";
ProtoInstance608.fieldValue[2] = fieldValue611;

let fieldValue612 = browser.currentScene.createNode("fieldValue");
fieldValue612.name = "children";
let ProtoInstance613 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance613.name = "Joint";
ProtoInstance613.DEF = "hanim_l_metacarpophalangeal5";
let fieldValue614 = browser.currentScene.createNode("fieldValue");
fieldValue614.name = "stiffness";
fieldValue614.value = "1 1 1";
ProtoInstance613.fieldValue = new MFNode();

ProtoInstance613.fieldValue[0] = fieldValue614;

let fieldValue615 = browser.currentScene.createNode("fieldValue");
fieldValue615.name = "name";
fieldValue615.value = "l_metacarpophalangeal_4";
ProtoInstance613.fieldValue[1] = fieldValue615;

let fieldValue616 = browser.currentScene.createNode("fieldValue");
fieldValue616.name = "center";
fieldValue616.value = "0.195600003004074 0.781499981880188 -0.0794000029563904";
ProtoInstance613.fieldValue[2] = fieldValue616;

let fieldValue617 = browser.currentScene.createNode("fieldValue");
fieldValue617.name = "children";
let ProtoInstance618 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance618.name = "Joint";
ProtoInstance618.DEF = "hanim_l_carpal_proximal_interphalangeal5";
let fieldValue619 = browser.currentScene.createNode("fieldValue");
fieldValue619.name = "stiffness";
fieldValue619.value = "1 1 1";
ProtoInstance618.fieldValue = new MFNode();

ProtoInstance618.fieldValue[0] = fieldValue619;

let fieldValue620 = browser.currentScene.createNode("fieldValue");
fieldValue620.name = "name";
fieldValue620.value = "l_carpal_proximal_interphalangeal_4";
ProtoInstance618.fieldValue[1] = fieldValue620;

let fieldValue621 = browser.currentScene.createNode("fieldValue");
fieldValue621.name = "center";
fieldValue621.value = "0.197300001978874 0.72869998216629 -0.0776999965310097";
ProtoInstance618.fieldValue[2] = fieldValue621;

let fieldValue622 = browser.currentScene.createNode("fieldValue");
fieldValue622.name = "children";
let ProtoInstance623 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance623.name = "Joint";
ProtoInstance623.DEF = "hanim_l_carpal_distal_interphalangeal5";
let fieldValue624 = browser.currentScene.createNode("fieldValue");
fieldValue624.name = "stiffness";
fieldValue624.value = "1 1 1";
ProtoInstance623.fieldValue = new MFNode();

ProtoInstance623.fieldValue[0] = fieldValue624;

let fieldValue625 = browser.currentScene.createNode("fieldValue");
fieldValue625.name = "name";
fieldValue625.value = "l_carpal_distal_interphalangeal_4";
ProtoInstance623.fieldValue[1] = fieldValue625;

let fieldValue626 = browser.currentScene.createNode("fieldValue");
fieldValue626.name = "center";
fieldValue626.value = "0.198300004005432 0.704500019550323 -0.0767000019550323";
ProtoInstance623.fieldValue[2] = fieldValue626;

let fieldValue627 = browser.currentScene.createNode("fieldValue");
fieldValue627.name = "children";
let ProtoInstance628 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance628.name = "Segment";
ProtoInstance628.DEF = "hanim_l_carpal_distal_phalanx5";
let fieldValue629 = browser.currentScene.createNode("fieldValue");
fieldValue629.name = "name";
fieldValue629.value = "l_carpal_distal_phalanx_4";
ProtoInstance628.fieldValue = new MFNode();

ProtoInstance628.fieldValue[0] = fieldValue629;

let fieldValue630 = browser.currentScene.createNode("fieldValue");
fieldValue630.name = "children";
let ProtoInstance631 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance631.name = "Site";
ProtoInstance631.DEF = "hanim_l_carpal_distal_phalanx_4_tip_2";
let fieldValue632 = browser.currentScene.createNode("fieldValue");
fieldValue632.name = "name";
fieldValue632.value = "l_carpal_distal_phalanx_4_tip";
ProtoInstance631.fieldValue = new MFNode();

ProtoInstance631.fieldValue[0] = fieldValue632;

let fieldValue633 = browser.currentScene.createNode("fieldValue");
fieldValue633.name = "translation";
fieldValue633.value = "0.203500002622604 0.675000011920929 -0.0755999982357025";
ProtoInstance631.fieldValue[1] = fieldValue633;

fieldValue630.children = new MFNode();

fieldValue630.children[0] = ProtoInstance631;

ProtoInstance628.fieldValue[1] = fieldValue630;

fieldValue627.children = new MFNode();

fieldValue627.children[0] = ProtoInstance628;

ProtoInstance623.fieldValue[3] = fieldValue627;

fieldValue622.children = new MFNode();

fieldValue622.children[0] = ProtoInstance623;

let ProtoInstance634 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance634.name = "Segment";
ProtoInstance634.DEF = "hanim_l_ring_middle_2";
let fieldValue635 = browser.currentScene.createNode("fieldValue");
fieldValue635.name = "name";
fieldValue635.value = "l_ring_middle";
ProtoInstance634.fieldValue = new MFNode();

ProtoInstance634.fieldValue[0] = fieldValue635;

fieldValue622.children[1] = ProtoInstance634;

ProtoInstance618.fieldValue[3] = fieldValue622;

fieldValue617.children = new MFNode();

fieldValue617.children[0] = ProtoInstance618;

let ProtoInstance636 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance636.name = "Segment";
ProtoInstance636.DEF = "hanim_l_ring_proximal_2";
let fieldValue637 = browser.currentScene.createNode("fieldValue");
fieldValue637.name = "name";
fieldValue637.value = "l_ring_proximal";
ProtoInstance636.fieldValue = new MFNode();

ProtoInstance636.fieldValue[0] = fieldValue637;

fieldValue617.children[1] = ProtoInstance636;

ProtoInstance613.fieldValue[3] = fieldValue617;

fieldValue612.children = new MFNode();

fieldValue612.children[0] = ProtoInstance613;

let ProtoInstance638 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance638.name = "Segment";
ProtoInstance638.DEF = "hanim_l_ring_metacarpal_2";
let fieldValue639 = browser.currentScene.createNode("fieldValue");
fieldValue639.name = "name";
fieldValue639.value = "l_ring_metacarpal";
ProtoInstance638.fieldValue = new MFNode();

ProtoInstance638.fieldValue[0] = fieldValue639;

fieldValue612.children[1] = ProtoInstance638;

ProtoInstance608.fieldValue[3] = fieldValue612;

fieldValue515.children[3] = ProtoInstance608;

let ProtoInstance640 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance640.name = "Joint";
ProtoInstance640.DEF = "hanim_l_carpometacarpal6";
let fieldValue641 = browser.currentScene.createNode("fieldValue");
fieldValue641.name = "stiffness";
fieldValue641.value = "1 1 1";
ProtoInstance640.fieldValue = new MFNode();

ProtoInstance640.fieldValue[0] = fieldValue641;

let fieldValue642 = browser.currentScene.createNode("fieldValue");
fieldValue642.name = "name";
fieldValue642.value = "l_carpometacarpal_5";
ProtoInstance640.fieldValue[1] = fieldValue642;

let fieldValue643 = browser.currentScene.createNode("fieldValue");
fieldValue643.name = "center";
fieldValue643.value = "0.192499995231628 0.806599974632263 -0.10360000282526";
ProtoInstance640.fieldValue[2] = fieldValue643;

let fieldValue644 = browser.currentScene.createNode("fieldValue");
fieldValue644.name = "children";
let ProtoInstance645 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance645.name = "Joint";
ProtoInstance645.DEF = "hanim_l_metacarpophalangeal6";
let fieldValue646 = browser.currentScene.createNode("fieldValue");
fieldValue646.name = "stiffness";
fieldValue646.value = "1 1 1";
ProtoInstance645.fieldValue = new MFNode();

ProtoInstance645.fieldValue[0] = fieldValue646;

let fieldValue647 = browser.currentScene.createNode("fieldValue");
fieldValue647.name = "name";
fieldValue647.value = "l_metacarpophalangeal_5";
ProtoInstance645.fieldValue[1] = fieldValue647;

let fieldValue648 = browser.currentScene.createNode("fieldValue");
fieldValue648.name = "center";
fieldValue648.value = "0.192499995231628 0.78659999370575 -0.10360000282526";
ProtoInstance645.fieldValue[2] = fieldValue648;

let fieldValue649 = browser.currentScene.createNode("fieldValue");
fieldValue649.name = "children";
let ProtoInstance650 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance650.name = "Joint";
ProtoInstance650.DEF = "hanim_l_carpal_proximal_interphalangeal6";
let fieldValue651 = browser.currentScene.createNode("fieldValue");
fieldValue651.name = "stiffness";
fieldValue651.value = "1 1 1";
ProtoInstance650.fieldValue = new MFNode();

ProtoInstance650.fieldValue[0] = fieldValue651;

let fieldValue652 = browser.currentScene.createNode("fieldValue");
fieldValue652.name = "name";
fieldValue652.value = "l_carpal_proximal_interphalangeal_5";
ProtoInstance650.fieldValue[1] = fieldValue652;

let fieldValue653 = browser.currentScene.createNode("fieldValue");
fieldValue653.name = "center";
fieldValue653.value = "0.193800002336502 0.745199978351593 -0.102399997413158";
ProtoInstance650.fieldValue[2] = fieldValue653;

let fieldValue654 = browser.currentScene.createNode("fieldValue");
fieldValue654.name = "children";
let ProtoInstance655 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance655.name = "Joint";
ProtoInstance655.DEF = "hanim_l_carpal_distal_interphalangeal6";
let fieldValue656 = browser.currentScene.createNode("fieldValue");
fieldValue656.name = "stiffness";
fieldValue656.value = "1 1 1";
ProtoInstance655.fieldValue = new MFNode();

ProtoInstance655.fieldValue[0] = fieldValue656;

let fieldValue657 = browser.currentScene.createNode("fieldValue");
fieldValue657.name = "name";
fieldValue657.value = "l_carpal_distal_interphalangeal_5";
ProtoInstance655.fieldValue[1] = fieldValue657;

let fieldValue658 = browser.currentScene.createNode("fieldValue");
fieldValue658.name = "center";
fieldValue658.value = "0.19480000436306 0.727699995040894 -0.101700000464916";
ProtoInstance655.fieldValue[2] = fieldValue658;

let fieldValue659 = browser.currentScene.createNode("fieldValue");
fieldValue659.name = "children";
let ProtoInstance660 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance660.name = "Segment";
ProtoInstance660.DEF = "hanim_l_carpal_distal_phalanx6";
let fieldValue661 = browser.currentScene.createNode("fieldValue");
fieldValue661.name = "name";
fieldValue661.value = "l_carpal_distal_phalanx_5";
ProtoInstance660.fieldValue = new MFNode();

ProtoInstance660.fieldValue[0] = fieldValue661;

let fieldValue662 = browser.currentScene.createNode("fieldValue");
fieldValue662.name = "children";
let ProtoInstance663 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance663.name = "Site";
ProtoInstance663.DEF = "hanim_l_carpal_distal_phalanx_5_tip_2";
let fieldValue664 = browser.currentScene.createNode("fieldValue");
fieldValue664.name = "name";
fieldValue664.value = "l_carpal_distal_phalanx_5_tip";
ProtoInstance663.fieldValue = new MFNode();

ProtoInstance663.fieldValue[0] = fieldValue664;

let fieldValue665 = browser.currentScene.createNode("fieldValue");
fieldValue665.name = "translation";
fieldValue665.value = "0.201399996876717 0.700900018215179 -0.101199999451637";
ProtoInstance663.fieldValue[1] = fieldValue665;

fieldValue662.children = new MFNode();

fieldValue662.children[0] = ProtoInstance663;

ProtoInstance660.fieldValue[1] = fieldValue662;

fieldValue659.children = new MFNode();

fieldValue659.children[0] = ProtoInstance660;

ProtoInstance655.fieldValue[3] = fieldValue659;

fieldValue654.children = new MFNode();

fieldValue654.children[0] = ProtoInstance655;

let ProtoInstance666 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance666.name = "Segment";
ProtoInstance666.DEF = "hanim_l_pinky_middle_2";
let fieldValue667 = browser.currentScene.createNode("fieldValue");
fieldValue667.name = "name";
fieldValue667.value = "l_pinky_middle";
ProtoInstance666.fieldValue = new MFNode();

ProtoInstance666.fieldValue[0] = fieldValue667;

fieldValue654.children[1] = ProtoInstance666;

ProtoInstance650.fieldValue[3] = fieldValue654;

fieldValue649.children = new MFNode();

fieldValue649.children[0] = ProtoInstance650;

let ProtoInstance668 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance668.name = "Segment";
ProtoInstance668.DEF = "hanim_l_pinky_proximal_2";
let fieldValue669 = browser.currentScene.createNode("fieldValue");
fieldValue669.name = "name";
fieldValue669.value = "l_pinky_proximal";
ProtoInstance668.fieldValue = new MFNode();

ProtoInstance668.fieldValue[0] = fieldValue669;

fieldValue649.children[1] = ProtoInstance668;

ProtoInstance645.fieldValue[3] = fieldValue649;

fieldValue644.children = new MFNode();

fieldValue644.children[0] = ProtoInstance645;

let ProtoInstance670 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance670.name = "Segment";
ProtoInstance670.DEF = "hanim_l_pinky_metacarpal_2";
let fieldValue671 = browser.currentScene.createNode("fieldValue");
fieldValue671.name = "name";
fieldValue671.value = "l_pinky_metacarpal";
ProtoInstance670.fieldValue = new MFNode();

ProtoInstance670.fieldValue[0] = fieldValue671;

fieldValue644.children[1] = ProtoInstance670;

ProtoInstance640.fieldValue[3] = fieldValue644;

fieldValue515.children[4] = ProtoInstance640;

let ProtoInstance672 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance672.name = "Segment";
ProtoInstance672.DEF = "hanim_l_hand_2";
let fieldValue673 = browser.currentScene.createNode("fieldValue");
fieldValue673.name = "name";
fieldValue673.value = "l_hand";
ProtoInstance672.fieldValue = new MFNode();

ProtoInstance672.fieldValue[0] = fieldValue673;

let fieldValue674 = browser.currentScene.createNode("fieldValue");
fieldValue674.name = "children";
let ProtoInstance675 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance675.name = "Site";
ProtoInstance675.DEF = "hanim_l_metacarpal_phalanx3";
let fieldValue676 = browser.currentScene.createNode("fieldValue");
fieldValue676.name = "name";
fieldValue676.value = "l_metacarpal_phalanx_2";
ProtoInstance675.fieldValue = new MFNode();

ProtoInstance675.fieldValue[0] = fieldValue676;

let fieldValue677 = browser.currentScene.createNode("fieldValue");
fieldValue677.name = "translation";
fieldValue677.value = "0.200900003314018 0.813899993896484 -0.023700000718236";
ProtoInstance675.fieldValue[1] = fieldValue677;

fieldValue674.children = new MFNode();

fieldValue674.children[0] = ProtoInstance675;

let ProtoInstance678 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance678.name = "Site";
ProtoInstance678.DEF = "hanim_l_ulnar_styloid_2";
let fieldValue679 = browser.currentScene.createNode("fieldValue");
fieldValue679.name = "name";
fieldValue679.value = "l_ulnar_styloid";
ProtoInstance678.fieldValue = new MFNode();

ProtoInstance678.fieldValue[0] = fieldValue679;

let fieldValue680 = browser.currentScene.createNode("fieldValue");
fieldValue680.name = "translation";
fieldValue680.value = "-0.214200004935265 0.85290002822876 -0.064800001680851";
ProtoInstance678.fieldValue[1] = fieldValue680;

fieldValue674.children[1] = ProtoInstance678;

let ProtoInstance681 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance681.name = "Site";
ProtoInstance681.DEF = "hanim_l_metacarpal_phalanx6";
let fieldValue682 = browser.currentScene.createNode("fieldValue");
fieldValue682.name = "name";
fieldValue682.value = "l_metacarpal_phalanx_5";
ProtoInstance681.fieldValue = new MFNode();

ProtoInstance681.fieldValue[0] = fieldValue682;

let fieldValue683 = browser.currentScene.createNode("fieldValue");
fieldValue683.name = "translation";
fieldValue683.value = "0.192900002002716 0.78600001335144 -0.112199999392033";
ProtoInstance681.fieldValue[1] = fieldValue683;

fieldValue674.children[2] = ProtoInstance681;

ProtoInstance672.fieldValue[1] = fieldValue674;

fieldValue515.children[5] = ProtoInstance672;

ProtoInstance511.fieldValue[3] = fieldValue515;

fieldValue510.children = new MFNode();

fieldValue510.children[0] = ProtoInstance511;

let ProtoInstance684 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance684.name = "Segment";
ProtoInstance684.DEF = "hanim_l_forearm_2";
let fieldValue685 = browser.currentScene.createNode("fieldValue");
fieldValue685.name = "name";
fieldValue685.value = "l_forearm";
ProtoInstance684.fieldValue = new MFNode();

ProtoInstance684.fieldValue[0] = fieldValue685;

let fieldValue686 = browser.currentScene.createNode("fieldValue");
fieldValue686.name = "children";
let ProtoInstance687 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance687.name = "Site";
ProtoInstance687.DEF = "hanim_l_radial_styloid_2";
let fieldValue688 = browser.currentScene.createNode("fieldValue");
fieldValue688.name = "name";
fieldValue688.value = "l_radial_styloid";
ProtoInstance687.fieldValue = new MFNode();

ProtoInstance687.fieldValue[0] = fieldValue688;

let fieldValue689 = browser.currentScene.createNode("fieldValue");
fieldValue689.name = "translation";
fieldValue689.value = "0.190099999308586 0.864499986171722 -0.0414999984204769";
ProtoInstance687.fieldValue[1] = fieldValue689;

fieldValue686.children = new MFNode();

fieldValue686.children[0] = ProtoInstance687;

let ProtoInstance690 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance690.name = "Site";
ProtoInstance690.DEF = "hanim_l_olecranon_2";
let fieldValue691 = browser.currentScene.createNode("fieldValue");
fieldValue691.name = "name";
fieldValue691.value = "l_olecranon";
ProtoInstance690.fieldValue = new MFNode();

ProtoInstance690.fieldValue[0] = fieldValue691;

let fieldValue692 = browser.currentScene.createNode("fieldValue");
fieldValue692.name = "translation";
fieldValue692.value = "-0.196199998259544 1.13750004768372 -0.112300001084805";
ProtoInstance690.fieldValue[1] = fieldValue692;

fieldValue686.children[1] = ProtoInstance690;

let ProtoInstance693 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance693.name = "Site";
ProtoInstance693.DEF = "hanim_l_humeral_medial_epicondyles_2";
let fieldValue694 = browser.currentScene.createNode("fieldValue");
fieldValue694.name = "name";
fieldValue694.value = "l_humeral_medial_epicondyles";
ProtoInstance693.fieldValue = new MFNode();

ProtoInstance693.fieldValue[0] = fieldValue694;

let fieldValue695 = browser.currentScene.createNode("fieldValue");
fieldValue695.name = "translation";
fieldValue695.value = "0.173500001430511 1.12720000743866 -0.111299999058247";
ProtoInstance693.fieldValue[1] = fieldValue695;

fieldValue686.children[2] = ProtoInstance693;

let ProtoInstance696 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance696.name = "Site";
ProtoInstance696.DEF = "hanim_l_radiale_2";
let fieldValue697 = browser.currentScene.createNode("fieldValue");
fieldValue697.name = "name";
fieldValue697.value = "l_radiale";
ProtoInstance696.fieldValue = new MFNode();

ProtoInstance696.fieldValue[0] = fieldValue697;

let fieldValue698 = browser.currentScene.createNode("fieldValue");
fieldValue698.name = "translation";
fieldValue698.value = "0.218199998140335 1.12119996547699 -0.116700001060963";
ProtoInstance696.fieldValue[1] = fieldValue698;

fieldValue686.children[3] = ProtoInstance696;

ProtoInstance684.fieldValue[1] = fieldValue686;

fieldValue510.children[1] = ProtoInstance684;

ProtoInstance506.fieldValue[3] = fieldValue510;

fieldValue505.children = new MFNode();

fieldValue505.children[0] = ProtoInstance506;

let ProtoInstance699 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance699.name = "Segment";
ProtoInstance699.DEF = "hanim_l_upperarm_2";
let fieldValue700 = browser.currentScene.createNode("fieldValue");
fieldValue700.name = "name";
fieldValue700.value = "l_upperarm";
ProtoInstance699.fieldValue = new MFNode();

ProtoInstance699.fieldValue[0] = fieldValue700;

let fieldValue701 = browser.currentScene.createNode("fieldValue");
fieldValue701.name = "children";
let ProtoInstance702 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance702.name = "Site";
ProtoInstance702.DEF = "hanim_l_humeral_lateral_epicondyles_2";
let fieldValue703 = browser.currentScene.createNode("fieldValue");
fieldValue703.name = "name";
fieldValue703.value = "l_humeral_lateral_epicondyles";
ProtoInstance702.fieldValue = new MFNode();

ProtoInstance702.fieldValue[0] = fieldValue703;

let fieldValue704 = browser.currentScene.createNode("fieldValue");
fieldValue704.name = "translation";
fieldValue704.value = "0.228000000119209 1.14820003509521 -0.109999999403954";
ProtoInstance702.fieldValue[1] = fieldValue704;

fieldValue701.children = new MFNode();

fieldValue701.children[0] = ProtoInstance702;

ProtoInstance699.fieldValue[1] = fieldValue701;

fieldValue505.children[1] = ProtoInstance699;

ProtoInstance501.fieldValue[3] = fieldValue505;

fieldValue500.children = new MFNode();

fieldValue500.children[0] = ProtoInstance501;

let ProtoInstance705 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance705.name = "Segment";
ProtoInstance705.DEF = "hanim_l_scapula_2";
let fieldValue706 = browser.currentScene.createNode("fieldValue");
fieldValue706.name = "name";
fieldValue706.value = "l_scapula";
ProtoInstance705.fieldValue = new MFNode();

ProtoInstance705.fieldValue[0] = fieldValue706;

fieldValue500.children[1] = ProtoInstance705;

ProtoInstance496.fieldValue[3] = fieldValue500;

fieldValue495.children = new MFNode();

fieldValue495.children[0] = ProtoInstance496;

let ProtoInstance707 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance707.name = "Segment";
ProtoInstance707.DEF = "hanim_l_clavicle_2";
let fieldValue708 = browser.currentScene.createNode("fieldValue");
fieldValue708.name = "name";
fieldValue708.value = "l_clavicle";
ProtoInstance707.fieldValue = new MFNode();

ProtoInstance707.fieldValue[0] = fieldValue708;

let fieldValue709 = browser.currentScene.createNode("fieldValue");
fieldValue709.name = "children";
let ProtoInstance710 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance710.name = "Site";
ProtoInstance710.DEF = "hanim_l_clavicale_2";
let fieldValue711 = browser.currentScene.createNode("fieldValue");
fieldValue711.name = "name";
fieldValue711.value = "l_clavicale";
ProtoInstance710.fieldValue = new MFNode();

ProtoInstance710.fieldValue[0] = fieldValue711;

let fieldValue712 = browser.currentScene.createNode("fieldValue");
fieldValue712.name = "translation";
fieldValue712.value = "0.0271000005304813 1.49430000782013 0.0394000001251698";
ProtoInstance710.fieldValue[1] = fieldValue712;

fieldValue709.children = new MFNode();

fieldValue709.children[0] = ProtoInstance710;

let ProtoInstance713 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance713.name = "Site";
ProtoInstance713.DEF = "hanim_l_acromion_2";
let fieldValue714 = browser.currentScene.createNode("fieldValue");
fieldValue714.name = "name";
fieldValue714.value = "l_acromion";
ProtoInstance713.fieldValue = new MFNode();

ProtoInstance713.fieldValue[0] = fieldValue714;

let fieldValue715 = browser.currentScene.createNode("fieldValue");
fieldValue715.name = "translation";
fieldValue715.value = "0.203199997544289 1.47599995136261 -0.0489999987185001";
ProtoInstance713.fieldValue[1] = fieldValue715;

fieldValue709.children[1] = ProtoInstance713;

let ProtoInstance716 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance716.name = "Site";
ProtoInstance716.DEF = "hanim_l_axilla_proximal_2";
let fieldValue717 = browser.currentScene.createNode("fieldValue");
fieldValue717.name = "name";
fieldValue717.value = "l_axilla_proximal";
ProtoInstance716.fieldValue = new MFNode();

ProtoInstance716.fieldValue[0] = fieldValue717;

let fieldValue718 = browser.currentScene.createNode("fieldValue");
fieldValue718.name = "translation";
fieldValue718.value = "0.177699998021126 1.40649998188019 -0.00749999983236194";
ProtoInstance716.fieldValue[1] = fieldValue718;

fieldValue709.children[2] = ProtoInstance716;

let ProtoInstance719 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance719.name = "Site";
ProtoInstance719.DEF = "hanim_l_axilla_distal_2";
let fieldValue720 = browser.currentScene.createNode("fieldValue");
fieldValue720.name = "name";
fieldValue720.value = "l_axilla_distal";
ProtoInstance719.fieldValue = new MFNode();

ProtoInstance719.fieldValue[0] = fieldValue720;

let fieldValue721 = browser.currentScene.createNode("fieldValue");
fieldValue721.name = "translation";
fieldValue721.value = "0.17059999704361 1.40719997882843 -0.0874999985098839";
ProtoInstance719.fieldValue[1] = fieldValue721;

fieldValue709.children[3] = ProtoInstance719;

ProtoInstance707.fieldValue[1] = fieldValue709;

fieldValue495.children[1] = ProtoInstance707;

ProtoInstance491.fieldValue[3] = fieldValue495;

fieldValue382.children[1] = ProtoInstance491;

let ProtoInstance722 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance722.name = "Joint";
ProtoInstance722.DEF = "hanim_r_sternoclavicular_2";
let fieldValue723 = browser.currentScene.createNode("fieldValue");
fieldValue723.name = "stiffness";
fieldValue723.value = "1 1 1";
ProtoInstance722.fieldValue = new MFNode();

ProtoInstance722.fieldValue[0] = fieldValue723;

let fieldValue724 = browser.currentScene.createNode("fieldValue");
fieldValue724.name = "name";
fieldValue724.value = "r_sternoclavicular";
ProtoInstance722.fieldValue[1] = fieldValue724;

let fieldValue725 = browser.currentScene.createNode("fieldValue");
fieldValue725.name = "center";
fieldValue725.value = "-0.0693999975919724 1.46000003814697 -0.0329999998211861";
ProtoInstance722.fieldValue[2] = fieldValue725;

let fieldValue726 = browser.currentScene.createNode("fieldValue");
fieldValue726.name = "children";
let ProtoInstance727 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance727.name = "Joint";
ProtoInstance727.DEF = "hanim_r_acromioclavicular_2";
let fieldValue728 = browser.currentScene.createNode("fieldValue");
fieldValue728.name = "stiffness";
fieldValue728.value = "1 1 1";
ProtoInstance727.fieldValue = new MFNode();

ProtoInstance727.fieldValue[0] = fieldValue728;

let fieldValue729 = browser.currentScene.createNode("fieldValue");
fieldValue729.name = "name";
fieldValue729.value = "r_acromioclavicular";
ProtoInstance727.fieldValue[1] = fieldValue729;

let fieldValue730 = browser.currentScene.createNode("fieldValue");
fieldValue730.name = "center";
fieldValue730.value = "-0.0835999995470047 1.42809998989105 -0.0401000007987022";
ProtoInstance727.fieldValue[2] = fieldValue730;

let fieldValue731 = browser.currentScene.createNode("fieldValue");
fieldValue731.name = "children";
let ProtoInstance732 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance732.name = "Joint";
ProtoInstance732.DEF = "hanim_r_shoulder_2";
let fieldValue733 = browser.currentScene.createNode("fieldValue");
fieldValue733.name = "stiffness";
fieldValue733.value = "1 1 1";
ProtoInstance732.fieldValue = new MFNode();

ProtoInstance732.fieldValue[0] = fieldValue733;

let fieldValue734 = browser.currentScene.createNode("fieldValue");
fieldValue734.name = "name";
fieldValue734.value = "r_shoulder";
ProtoInstance732.fieldValue[1] = fieldValue734;

let fieldValue735 = browser.currentScene.createNode("fieldValue");
fieldValue735.name = "center";
fieldValue735.value = "-0.190699994564056 1.4407000541687 -0.0324999988079071";
ProtoInstance732.fieldValue[2] = fieldValue735;

let fieldValue736 = browser.currentScene.createNode("fieldValue");
fieldValue736.name = "children";
let ProtoInstance737 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance737.name = "Joint";
ProtoInstance737.DEF = "hanim_r_elbow_2";
let fieldValue738 = browser.currentScene.createNode("fieldValue");
fieldValue738.name = "stiffness";
fieldValue738.value = "1 1 1";
ProtoInstance737.fieldValue = new MFNode();

ProtoInstance737.fieldValue[0] = fieldValue738;

let fieldValue739 = browser.currentScene.createNode("fieldValue");
fieldValue739.name = "name";
fieldValue739.value = "r_elbow";
ProtoInstance737.fieldValue[1] = fieldValue739;

let fieldValue740 = browser.currentScene.createNode("fieldValue");
fieldValue740.name = "center";
fieldValue740.value = "-0.194900006055832 1.13880002498627 -0.061999998986721";
ProtoInstance737.fieldValue[2] = fieldValue740;

let fieldValue741 = browser.currentScene.createNode("fieldValue");
fieldValue741.name = "children";
let ProtoInstance742 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance742.name = "Joint";
ProtoInstance742.DEF = "hanim_r_radiocarpal_2";
let fieldValue743 = browser.currentScene.createNode("fieldValue");
fieldValue743.name = "stiffness";
fieldValue743.value = "1 1 1";
ProtoInstance742.fieldValue = new MFNode();

ProtoInstance742.fieldValue[0] = fieldValue743;

let fieldValue744 = browser.currentScene.createNode("fieldValue");
fieldValue744.name = "name";
fieldValue744.value = "r_radiocarpal";
ProtoInstance742.fieldValue[1] = fieldValue744;

let fieldValue745 = browser.currentScene.createNode("fieldValue");
fieldValue745.name = "center";
fieldValue745.value = "-0.195899993181229 0.869400024414063 -0.0520999990403652";
ProtoInstance742.fieldValue[2] = fieldValue745;

let fieldValue746 = browser.currentScene.createNode("fieldValue");
fieldValue746.name = "children";
let ProtoInstance747 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance747.name = "Joint";
ProtoInstance747.DEF = "hanim_r_carpometacarpal2";
let fieldValue748 = browser.currentScene.createNode("fieldValue");
fieldValue748.name = "stiffness";
fieldValue748.value = "1 1 1";
ProtoInstance747.fieldValue = new MFNode();

ProtoInstance747.fieldValue[0] = fieldValue748;

let fieldValue749 = browser.currentScene.createNode("fieldValue");
fieldValue749.name = "name";
fieldValue749.value = "r_carpometacarpal_1";
ProtoInstance747.fieldValue[1] = fieldValue749;

let fieldValue750 = browser.currentScene.createNode("fieldValue");
fieldValue750.name = "center";
fieldValue750.value = "-0.189899995923042 0.850199997425079 -0.0472999997437";
ProtoInstance747.fieldValue[2] = fieldValue750;

let fieldValue751 = browser.currentScene.createNode("fieldValue");
fieldValue751.name = "children";
let ProtoInstance752 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance752.name = "Joint";
ProtoInstance752.DEF = "hanim_r_metacarpophalangeal2";
let fieldValue753 = browser.currentScene.createNode("fieldValue");
fieldValue753.name = "stiffness";
fieldValue753.value = "1 1 1";
ProtoInstance752.fieldValue = new MFNode();

ProtoInstance752.fieldValue[0] = fieldValue753;

let fieldValue754 = browser.currentScene.createNode("fieldValue");
fieldValue754.name = "name";
fieldValue754.value = "r_metacarpophalangeal_1";
ProtoInstance752.fieldValue[1] = fieldValue754;

let fieldValue755 = browser.currentScene.createNode("fieldValue");
fieldValue755.name = "center";
fieldValue755.value = "-0.187399998307228 0.825600028038025 0.0306000001728535";
ProtoInstance752.fieldValue[2] = fieldValue755;

let fieldValue756 = browser.currentScene.createNode("fieldValue");
fieldValue756.name = "children";
let ProtoInstance757 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance757.name = "Joint";
ProtoInstance757.DEF = "hanim_r_carpal_interphalangeal2";
let fieldValue758 = browser.currentScene.createNode("fieldValue");
fieldValue758.name = "stiffness";
fieldValue758.value = "1 1 1";
ProtoInstance757.fieldValue = new MFNode();

ProtoInstance757.fieldValue[0] = fieldValue758;

let fieldValue759 = browser.currentScene.createNode("fieldValue");
fieldValue759.name = "name";
fieldValue759.value = "r_carpal_interphalangeal_1";
ProtoInstance757.fieldValue[1] = fieldValue759;

let fieldValue760 = browser.currentScene.createNode("fieldValue");
fieldValue760.name = "center";
fieldValue760.value = "-0.18639999628067 0.819000005722046 0.0505999997258186";
ProtoInstance757.fieldValue[2] = fieldValue760;

let fieldValue761 = browser.currentScene.createNode("fieldValue");
fieldValue761.name = "children";
let ProtoInstance762 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance762.name = "Segment";
ProtoInstance762.DEF = "hanim_r_carpal_distal_phalanx2";
let fieldValue763 = browser.currentScene.createNode("fieldValue");
fieldValue763.name = "name";
fieldValue763.value = "r_carpal_distal_phalanx_1";
ProtoInstance762.fieldValue = new MFNode();

ProtoInstance762.fieldValue[0] = fieldValue763;

let fieldValue764 = browser.currentScene.createNode("fieldValue");
fieldValue764.name = "children";
let ProtoInstance765 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance765.name = "Site";
ProtoInstance765.DEF = "hanim_r_carpal_distal_phalanx_1_tip_2";
let fieldValue766 = browser.currentScene.createNode("fieldValue");
fieldValue766.name = "name";
fieldValue766.value = "r_carpal_distal_phalanx_1_tip";
ProtoInstance765.fieldValue = new MFNode();

ProtoInstance765.fieldValue[0] = fieldValue766;

let fieldValue767 = browser.currentScene.createNode("fieldValue");
fieldValue767.name = "translation";
fieldValue767.value = "-0.18690000474453 0.809000015258789 0.0820000022649765";
ProtoInstance765.fieldValue[1] = fieldValue767;

fieldValue764.children = new MFNode();

fieldValue764.children[0] = ProtoInstance765;

ProtoInstance762.fieldValue[1] = fieldValue764;

fieldValue761.children = new MFNode();

fieldValue761.children[0] = ProtoInstance762;

ProtoInstance757.fieldValue[3] = fieldValue761;

fieldValue756.children = new MFNode();

fieldValue756.children[0] = ProtoInstance757;

let ProtoInstance768 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance768.name = "Segment";
ProtoInstance768.DEF = "hanim_r_index_proximal_2";
let fieldValue769 = browser.currentScene.createNode("fieldValue");
fieldValue769.name = "name";
fieldValue769.value = "r_index_proximal";
ProtoInstance768.fieldValue = new MFNode();

ProtoInstance768.fieldValue[0] = fieldValue769;

fieldValue756.children[1] = ProtoInstance768;

ProtoInstance752.fieldValue[3] = fieldValue756;

fieldValue751.children = new MFNode();

fieldValue751.children[0] = ProtoInstance752;

let ProtoInstance770 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance770.name = "Segment";
ProtoInstance770.DEF = "hanim_r_index_proximal_4";
let fieldValue771 = browser.currentScene.createNode("fieldValue");
fieldValue771.name = "name";
fieldValue771.value = "r_index_proximal";
ProtoInstance770.fieldValue = new MFNode();

ProtoInstance770.fieldValue[0] = fieldValue771;

fieldValue751.children[1] = ProtoInstance770;

ProtoInstance747.fieldValue[3] = fieldValue751;

fieldValue746.children = new MFNode();

fieldValue746.children[0] = ProtoInstance747;

let ProtoInstance772 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance772.name = "Joint";
ProtoInstance772.DEF = "hanim_r_carpometacarpal3";
let fieldValue773 = browser.currentScene.createNode("fieldValue");
fieldValue773.name = "stiffness";
fieldValue773.value = "1 1 1";
ProtoInstance772.fieldValue = new MFNode();

ProtoInstance772.fieldValue[0] = fieldValue773;

let fieldValue774 = browser.currentScene.createNode("fieldValue");
fieldValue774.name = "name";
fieldValue774.value = "r_carpometacarpal_2";
ProtoInstance772.fieldValue[1] = fieldValue774;

let fieldValue775 = browser.currentScene.createNode("fieldValue");
fieldValue775.name = "center";
fieldValue775.value = "-0.196099996566772 0.805499970912933 -0.0218000002205372";
ProtoInstance772.fieldValue[2] = fieldValue775;

let fieldValue776 = browser.currentScene.createNode("fieldValue");
fieldValue776.name = "children";
let ProtoInstance777 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance777.name = "Joint";
ProtoInstance777.DEF = "hanim_r_metacarpophalangeal3";
let fieldValue778 = browser.currentScene.createNode("fieldValue");
fieldValue778.name = "stiffness";
fieldValue778.value = "1 1 1";
ProtoInstance777.fieldValue = new MFNode();

ProtoInstance777.fieldValue[0] = fieldValue778;

let fieldValue779 = browser.currentScene.createNode("fieldValue");
fieldValue779.name = "name";
fieldValue779.value = "r_metacarpophalangeal_2";
ProtoInstance777.fieldValue[1] = fieldValue779;

let fieldValue780 = browser.currentScene.createNode("fieldValue");
fieldValue780.name = "center";
fieldValue780.value = "-0.196099996566772 0.784600019454956 -0.0218000002205372";
ProtoInstance777.fieldValue[2] = fieldValue780;

let fieldValue781 = browser.currentScene.createNode("fieldValue");
fieldValue781.name = "children";
let ProtoInstance782 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance782.name = "Joint";
ProtoInstance782.DEF = "hanim_r_carpal_proximal_interphalangeal3";
let fieldValue783 = browser.currentScene.createNode("fieldValue");
fieldValue783.name = "stiffness";
fieldValue783.value = "1 1 1";
ProtoInstance782.fieldValue = new MFNode();

ProtoInstance782.fieldValue[0] = fieldValue783;

let fieldValue784 = browser.currentScene.createNode("fieldValue");
fieldValue784.name = "name";
fieldValue784.value = "r_carpal_proximal_interphalangeal_2";
ProtoInstance782.fieldValue[1] = fieldValue784;

let fieldValue785 = browser.currentScene.createNode("fieldValue");
fieldValue785.name = "center";
fieldValue785.value = "-0.19539999961853 0.739300012588501 -0.0185000002384186";
ProtoInstance782.fieldValue[2] = fieldValue785;

let fieldValue786 = browser.currentScene.createNode("fieldValue");
fieldValue786.name = "children";
let ProtoInstance787 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance787.name = "Joint";
ProtoInstance787.DEF = "hanim_r_carpal_distal_interphalangeal3";
let fieldValue788 = browser.currentScene.createNode("fieldValue");
fieldValue788.name = "stiffness";
fieldValue788.value = "1 1 1";
ProtoInstance787.fieldValue = new MFNode();

ProtoInstance787.fieldValue[0] = fieldValue788;

let fieldValue789 = browser.currentScene.createNode("fieldValue");
fieldValue789.name = "name";
fieldValue789.value = "r_carpal_distal_interphalangeal_2";
ProtoInstance787.fieldValue[1] = fieldValue789;

let fieldValue790 = browser.currentScene.createNode("fieldValue");
fieldValue790.name = "center";
fieldValue790.value = "-0.194499999284744 0.716899991035461 -0.0173000004142523";
ProtoInstance787.fieldValue[2] = fieldValue790;

let fieldValue791 = browser.currentScene.createNode("fieldValue");
fieldValue791.name = "children";
let ProtoInstance792 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance792.name = "Segment";
ProtoInstance792.DEF = "hanim_r_carpal_distal_phalanx3";
let fieldValue793 = browser.currentScene.createNode("fieldValue");
fieldValue793.name = "name";
fieldValue793.value = "r_carpal_distal_phalanx_2";
ProtoInstance792.fieldValue = new MFNode();

ProtoInstance792.fieldValue[0] = fieldValue793;

let fieldValue794 = browser.currentScene.createNode("fieldValue");
fieldValue794.name = "children";
let ProtoInstance795 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance795.name = "Site";
ProtoInstance795.DEF = "hanim_r_carpal_distal_phalanx_2_tip_2";
let fieldValue796 = browser.currentScene.createNode("fieldValue");
fieldValue796.name = "name";
fieldValue796.value = "r_carpal_distal_phalanx_2_tip";
ProtoInstance795.fieldValue = new MFNode();

ProtoInstance795.fieldValue[0] = fieldValue796;

let fieldValue797 = browser.currentScene.createNode("fieldValue");
fieldValue797.name = "translation";
fieldValue797.value = "-0.197999998927116 0.688300013542175 -0.0179999992251396";
ProtoInstance795.fieldValue[1] = fieldValue797;

fieldValue794.children = new MFNode();

fieldValue794.children[0] = ProtoInstance795;

let ProtoInstance798 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance798.name = "Site";
ProtoInstance798.DEF = "hanim_r_dactylion_2";
let fieldValue799 = browser.currentScene.createNode("fieldValue");
fieldValue799.name = "name";
fieldValue799.value = "r_dactylion";
ProtoInstance798.fieldValue = new MFNode();

ProtoInstance798.fieldValue[0] = fieldValue799;

let fieldValue800 = browser.currentScene.createNode("fieldValue");
fieldValue800.name = "translation";
fieldValue800.value = "-0.194100007414818 0.677200019359589 -0.0423000007867813";
ProtoInstance798.fieldValue[1] = fieldValue800;

fieldValue794.children[1] = ProtoInstance798;

ProtoInstance792.fieldValue[1] = fieldValue794;

fieldValue791.children = new MFNode();

fieldValue791.children[0] = ProtoInstance792;

ProtoInstance787.fieldValue[3] = fieldValue791;

fieldValue786.children = new MFNode();

fieldValue786.children[0] = ProtoInstance787;

let ProtoInstance801 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance801.name = "Segment";
ProtoInstance801.DEF = "hanim_r_index_middle_2";
let fieldValue802 = browser.currentScene.createNode("fieldValue");
fieldValue802.name = "name";
fieldValue802.value = "r_index_middle";
ProtoInstance801.fieldValue = new MFNode();

ProtoInstance801.fieldValue[0] = fieldValue802;

fieldValue786.children[1] = ProtoInstance801;

ProtoInstance782.fieldValue[3] = fieldValue786;

fieldValue781.children = new MFNode();

fieldValue781.children[0] = ProtoInstance782;

let ProtoInstance803 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance803.name = "Segment";
ProtoInstance803.DEF = "hanim_r_index_proximal_6";
let fieldValue804 = browser.currentScene.createNode("fieldValue");
fieldValue804.name = "name";
fieldValue804.value = "r_index_proximal";
ProtoInstance803.fieldValue = new MFNode();

ProtoInstance803.fieldValue[0] = fieldValue804;

fieldValue781.children[1] = ProtoInstance803;

ProtoInstance777.fieldValue[3] = fieldValue781;

fieldValue776.children = new MFNode();

fieldValue776.children[0] = ProtoInstance777;

let ProtoInstance805 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance805.name = "Segment";
ProtoInstance805.DEF = "hanim_r_index_metacarpal_2";
let fieldValue806 = browser.currentScene.createNode("fieldValue");
fieldValue806.name = "name";
fieldValue806.value = "r_index_metacarpal";
ProtoInstance805.fieldValue = new MFNode();

ProtoInstance805.fieldValue[0] = fieldValue806;

fieldValue776.children[1] = ProtoInstance805;

ProtoInstance772.fieldValue[3] = fieldValue776;

fieldValue746.children[1] = ProtoInstance772;

let ProtoInstance807 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance807.name = "Joint";
ProtoInstance807.DEF = "hanim_r_carpometacarpal4";
let fieldValue808 = browser.currentScene.createNode("fieldValue");
fieldValue808.name = "stiffness";
fieldValue808.value = "1 1 1";
ProtoInstance807.fieldValue = new MFNode();

ProtoInstance807.fieldValue[0] = fieldValue808;

let fieldValue809 = browser.currentScene.createNode("fieldValue");
fieldValue809.name = "name";
fieldValue809.value = "r_carpometacarpal_3";
ProtoInstance807.fieldValue[1] = fieldValue809;

let fieldValue810 = browser.currentScene.createNode("fieldValue");
fieldValue810.name = "center";
fieldValue810.value = "-0.197200000286102 0.805999994277954 -0.0467999987304211";
ProtoInstance807.fieldValue[2] = fieldValue810;

let fieldValue811 = browser.currentScene.createNode("fieldValue");
fieldValue811.name = "children";
let ProtoInstance812 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance812.name = "Joint";
ProtoInstance812.DEF = "hanim_r_metacarpophalangeal4";
let fieldValue813 = browser.currentScene.createNode("fieldValue");
fieldValue813.name = "stiffness";
fieldValue813.value = "1 1 1";
ProtoInstance812.fieldValue = new MFNode();

ProtoInstance812.fieldValue[0] = fieldValue813;

let fieldValue814 = browser.currentScene.createNode("fieldValue");
fieldValue814.name = "name";
fieldValue814.value = "r_metacarpophalangeal_3";
ProtoInstance812.fieldValue[1] = fieldValue814;

let fieldValue815 = browser.currentScene.createNode("fieldValue");
fieldValue815.name = "center";
fieldValue815.value = "-0.197200000286102 0.784900009632111 -0.0467999987304211";
ProtoInstance812.fieldValue[2] = fieldValue815;

let fieldValue816 = browser.currentScene.createNode("fieldValue");
fieldValue816.name = "children";
let ProtoInstance817 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance817.name = "Joint";
ProtoInstance817.DEF = "hanim_r_carpal_proximal_interphalangeal4";
let fieldValue818 = browser.currentScene.createNode("fieldValue");
fieldValue818.name = "stiffness";
fieldValue818.value = "1 1 1";
ProtoInstance817.fieldValue = new MFNode();

ProtoInstance817.fieldValue[0] = fieldValue818;

let fieldValue819 = browser.currentScene.createNode("fieldValue");
fieldValue819.name = "name";
fieldValue819.value = "r_carpal_proximal_interphalangeal_3";
ProtoInstance817.fieldValue[1] = fieldValue819;

let fieldValue820 = browser.currentScene.createNode("fieldValue");
fieldValue820.name = "center";
fieldValue820.value = "-0.194999992847443 0.730400025844574 -0.0441000014543533";
ProtoInstance817.fieldValue[2] = fieldValue820;

let fieldValue821 = browser.currentScene.createNode("fieldValue");
fieldValue821.name = "children";
let ProtoInstance822 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance822.name = "Joint";
ProtoInstance822.DEF = "hanim_r_carpal_distal_interphalangeal4";
let fieldValue823 = browser.currentScene.createNode("fieldValue");
fieldValue823.name = "stiffness";
fieldValue823.value = "1 1 1";
ProtoInstance822.fieldValue = new MFNode();

ProtoInstance822.fieldValue[0] = fieldValue823;

let fieldValue824 = browser.currentScene.createNode("fieldValue");
fieldValue824.name = "name";
fieldValue824.value = "r_carpal_distal_interphalangeal_3";
ProtoInstance822.fieldValue[1] = fieldValue824;

let fieldValue825 = browser.currentScene.createNode("fieldValue");
fieldValue825.name = "center";
fieldValue825.value = "-0.193900004029274 0.704200029373169 -0.0432000011205673";
ProtoInstance822.fieldValue[2] = fieldValue825;

let fieldValue826 = browser.currentScene.createNode("fieldValue");
fieldValue826.name = "children";
let ProtoInstance827 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance827.name = "Segment";
ProtoInstance827.DEF = "hanim_r_carpal_distal_phalanx4";
let fieldValue828 = browser.currentScene.createNode("fieldValue");
fieldValue828.name = "name";
fieldValue828.value = "r_carpal_distal_phalanx_3";
ProtoInstance827.fieldValue = new MFNode();

ProtoInstance827.fieldValue[0] = fieldValue828;

let fieldValue829 = browser.currentScene.createNode("fieldValue");
fieldValue829.name = "children";
let ProtoInstance830 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance830.name = "Site";
ProtoInstance830.DEF = "hanim_r_carpal_distal_phalanx_3_tip_2";
let fieldValue831 = browser.currentScene.createNode("fieldValue");
fieldValue831.name = "name";
fieldValue831.value = "r_carpal_distal_phalanx_3_tip";
ProtoInstance830.fieldValue = new MFNode();

ProtoInstance830.fieldValue[0] = fieldValue831;

let fieldValue832 = browser.currentScene.createNode("fieldValue");
fieldValue832.name = "translation";
fieldValue832.value = "-0.196899995207787 0.675800025463104 -0.0427000001072884";
ProtoInstance830.fieldValue[1] = fieldValue832;

fieldValue829.children = new MFNode();

fieldValue829.children[0] = ProtoInstance830;

ProtoInstance827.fieldValue[1] = fieldValue829;

fieldValue826.children = new MFNode();

fieldValue826.children[0] = ProtoInstance827;

ProtoInstance822.fieldValue[3] = fieldValue826;

fieldValue821.children = new MFNode();

fieldValue821.children[0] = ProtoInstance822;

let ProtoInstance833 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance833.name = "Segment";
ProtoInstance833.DEF = "hanim_r_middle_middle_2";
let fieldValue834 = browser.currentScene.createNode("fieldValue");
fieldValue834.name = "name";
fieldValue834.value = "r_middle_middle";
ProtoInstance833.fieldValue = new MFNode();

ProtoInstance833.fieldValue[0] = fieldValue834;

fieldValue821.children[1] = ProtoInstance833;

ProtoInstance817.fieldValue[3] = fieldValue821;

fieldValue816.children = new MFNode();

fieldValue816.children[0] = ProtoInstance817;

let ProtoInstance835 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance835.name = "Segment";
ProtoInstance835.DEF = "hanim_r_middle_proximal_2";
let fieldValue836 = browser.currentScene.createNode("fieldValue");
fieldValue836.name = "name";
fieldValue836.value = "r_middle_proximal";
ProtoInstance835.fieldValue = new MFNode();

ProtoInstance835.fieldValue[0] = fieldValue836;

fieldValue816.children[1] = ProtoInstance835;

ProtoInstance812.fieldValue[3] = fieldValue816;

fieldValue811.children = new MFNode();

fieldValue811.children[0] = ProtoInstance812;

let ProtoInstance837 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance837.name = "Segment";
ProtoInstance837.DEF = "hanim_r_middle_metacarpal_2";
let fieldValue838 = browser.currentScene.createNode("fieldValue");
fieldValue838.name = "name";
fieldValue838.value = "r_middle_metacarpal";
ProtoInstance837.fieldValue = new MFNode();

ProtoInstance837.fieldValue[0] = fieldValue838;

fieldValue811.children[1] = ProtoInstance837;

ProtoInstance807.fieldValue[3] = fieldValue811;

fieldValue746.children[2] = ProtoInstance807;

let ProtoInstance839 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance839.name = "Joint";
ProtoInstance839.DEF = "hanim_r_carpometacarpal5";
let fieldValue840 = browser.currentScene.createNode("fieldValue");
fieldValue840.name = "stiffness";
fieldValue840.value = "1 1 1";
ProtoInstance839.fieldValue = new MFNode();

ProtoInstance839.fieldValue[0] = fieldValue840;

let fieldValue841 = browser.currentScene.createNode("fieldValue");
fieldValue841.name = "name";
fieldValue841.value = "r_carpometacarpal_4";
ProtoInstance839.fieldValue[1] = fieldValue841;

let fieldValue842 = browser.currentScene.createNode("fieldValue");
fieldValue842.name = "center";
fieldValue842.value = "-0.195099994540215 0.804899990558624 -0.0732000023126602";
ProtoInstance839.fieldValue[2] = fieldValue842;

let fieldValue843 = browser.currentScene.createNode("fieldValue");
fieldValue843.name = "children";
let ProtoInstance844 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance844.name = "Joint";
ProtoInstance844.DEF = "hanim_r_metacarpophalangeal5";
let fieldValue845 = browser.currentScene.createNode("fieldValue");
fieldValue845.name = "stiffness";
fieldValue845.value = "1 1 1";
ProtoInstance844.fieldValue = new MFNode();

ProtoInstance844.fieldValue[0] = fieldValue845;

let fieldValue846 = browser.currentScene.createNode("fieldValue");
fieldValue846.name = "name";
fieldValue846.value = "r_metacarpophalangeal_4";
ProtoInstance844.fieldValue[1] = fieldValue846;

let fieldValue847 = browser.currentScene.createNode("fieldValue");
fieldValue847.name = "center";
fieldValue847.value = "-0.195099994540215 0.784500002861023 -0.0732000023126602";
ProtoInstance844.fieldValue[2] = fieldValue847;

let fieldValue848 = browser.currentScene.createNode("fieldValue");
fieldValue848.name = "children";
let ProtoInstance849 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance849.name = "Joint";
ProtoInstance849.DEF = "hanim_r_carpal_proximal_interphalangeal5";
let fieldValue850 = browser.currentScene.createNode("fieldValue");
fieldValue850.name = "stiffness";
fieldValue850.value = "1 1 1";
ProtoInstance849.fieldValue = new MFNode();

ProtoInstance849.fieldValue[0] = fieldValue850;

let fieldValue851 = browser.currentScene.createNode("fieldValue");
fieldValue851.name = "name";
fieldValue851.value = "r_carpal_proximal_interphalangeal_4";
ProtoInstance849.fieldValue[1] = fieldValue851;

let fieldValue852 = browser.currentScene.createNode("fieldValue");
fieldValue852.name = "center";
fieldValue852.value = "-0.19200000166893 0.731800019741058 -0.0715999975800514";
ProtoInstance849.fieldValue[2] = fieldValue852;

let fieldValue853 = browser.currentScene.createNode("fieldValue");
fieldValue853.name = "children";
let ProtoInstance854 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance854.name = "Joint";
ProtoInstance854.DEF = "hanim_r_carpal_distal_interphalangeal5";
let fieldValue855 = browser.currentScene.createNode("fieldValue");
fieldValue855.name = "stiffness";
fieldValue855.value = "1 1 1";
ProtoInstance854.fieldValue = new MFNode();

ProtoInstance854.fieldValue[0] = fieldValue855;

let fieldValue856 = browser.currentScene.createNode("fieldValue");
fieldValue856.name = "name";
fieldValue856.value = "r_carpal_distal_interphalangeal_4";
ProtoInstance854.fieldValue[1] = fieldValue856;

let fieldValue857 = browser.currentScene.createNode("fieldValue");
fieldValue857.name = "center";
fieldValue857.value = "-0.190799996256828 0.70770001411438 -0.0706000030040741";
ProtoInstance854.fieldValue[2] = fieldValue857;

let fieldValue858 = browser.currentScene.createNode("fieldValue");
fieldValue858.name = "children";
let ProtoInstance859 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance859.name = "Segment";
ProtoInstance859.DEF = "hanim_r_carpal_distal_phalanx5";
let fieldValue860 = browser.currentScene.createNode("fieldValue");
fieldValue860.name = "name";
fieldValue860.value = "r_carpal_distal_phalanx_4";
ProtoInstance859.fieldValue = new MFNode();

ProtoInstance859.fieldValue[0] = fieldValue860;

let fieldValue861 = browser.currentScene.createNode("fieldValue");
fieldValue861.name = "children";
let ProtoInstance862 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance862.name = "Site";
ProtoInstance862.DEF = "hanim_r_carpal_distal_phalanx_4_tip_2";
let fieldValue863 = browser.currentScene.createNode("fieldValue");
fieldValue863.name = "name";
fieldValue863.value = "r_carpal_distal_phalanx_4_tip";
ProtoInstance862.fieldValue = new MFNode();

ProtoInstance862.fieldValue[0] = fieldValue863;

let fieldValue864 = browser.currentScene.createNode("fieldValue");
fieldValue864.name = "translation";
fieldValue864.value = "-0.193399995565414 0.677799999713898 -0.069300003349781";
ProtoInstance862.fieldValue[1] = fieldValue864;

fieldValue861.children = new MFNode();

fieldValue861.children[0] = ProtoInstance862;

ProtoInstance859.fieldValue[1] = fieldValue861;

fieldValue858.children = new MFNode();

fieldValue858.children[0] = ProtoInstance859;

ProtoInstance854.fieldValue[3] = fieldValue858;

fieldValue853.children = new MFNode();

fieldValue853.children[0] = ProtoInstance854;

let ProtoInstance865 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance865.name = "Segment";
ProtoInstance865.DEF = "hanim_r_ring_middle_2";
let fieldValue866 = browser.currentScene.createNode("fieldValue");
fieldValue866.name = "name";
fieldValue866.value = "r_ring_middle";
ProtoInstance865.fieldValue = new MFNode();

ProtoInstance865.fieldValue[0] = fieldValue866;

fieldValue853.children[1] = ProtoInstance865;

ProtoInstance849.fieldValue[3] = fieldValue853;

fieldValue848.children = new MFNode();

fieldValue848.children[0] = ProtoInstance849;

let ProtoInstance867 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance867.name = "Segment";
ProtoInstance867.DEF = "hanim_r_ring_proximal_2";
let fieldValue868 = browser.currentScene.createNode("fieldValue");
fieldValue868.name = "name";
fieldValue868.value = "r_ring_proximal";
ProtoInstance867.fieldValue = new MFNode();

ProtoInstance867.fieldValue[0] = fieldValue868;

fieldValue848.children[1] = ProtoInstance867;

ProtoInstance844.fieldValue[3] = fieldValue848;

fieldValue843.children = new MFNode();

fieldValue843.children[0] = ProtoInstance844;

let ProtoInstance869 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance869.name = "Segment";
ProtoInstance869.DEF = "hanim_r_ring_metacarpal_2";
let fieldValue870 = browser.currentScene.createNode("fieldValue");
fieldValue870.name = "name";
fieldValue870.value = "r_ring_metacarpal";
ProtoInstance869.fieldValue = new MFNode();

ProtoInstance869.fieldValue[0] = fieldValue870;

fieldValue843.children[1] = ProtoInstance869;

ProtoInstance839.fieldValue[3] = fieldValue843;

fieldValue746.children[3] = ProtoInstance839;

let ProtoInstance871 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance871.name = "Joint";
ProtoInstance871.DEF = "hanim_r_carpometacarpal6";
let fieldValue872 = browser.currentScene.createNode("fieldValue");
fieldValue872.name = "stiffness";
fieldValue872.value = "1 1 1";
ProtoInstance871.fieldValue = new MFNode();

ProtoInstance871.fieldValue[0] = fieldValue872;

let fieldValue873 = browser.currentScene.createNode("fieldValue");
fieldValue873.name = "name";
fieldValue873.value = "r_carpometacarpal_5";
ProtoInstance871.fieldValue[1] = fieldValue873;

let fieldValue874 = browser.currentScene.createNode("fieldValue");
fieldValue874.name = "center";
fieldValue874.value = "-0.1925999969244 0.809599995613098 -0.0974999964237213";
ProtoInstance871.fieldValue[2] = fieldValue874;

let fieldValue875 = browser.currentScene.createNode("fieldValue");
fieldValue875.name = "children";
let ProtoInstance876 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance876.name = "Joint";
ProtoInstance876.DEF = "hanim_r_metacarpophalangeal6";
let fieldValue877 = browser.currentScene.createNode("fieldValue");
fieldValue877.name = "stiffness";
fieldValue877.value = "1 1 1";
ProtoInstance876.fieldValue = new MFNode();

ProtoInstance876.fieldValue[0] = fieldValue877;

let fieldValue878 = browser.currentScene.createNode("fieldValue");
fieldValue878.name = "name";
fieldValue878.value = "r_metacarpophalangeal_5";
ProtoInstance876.fieldValue[1] = fieldValue878;

let fieldValue879 = browser.currentScene.createNode("fieldValue");
fieldValue879.name = "center";
fieldValue879.value = "-0.1925999969244 0.789600014686584 -0.0974999964237213";
ProtoInstance876.fieldValue[2] = fieldValue879;

let fieldValue880 = browser.currentScene.createNode("fieldValue");
fieldValue880.name = "children";
let ProtoInstance881 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance881.name = "Joint";
ProtoInstance881.DEF = "hanim_r_carpal_proximal_interphalangeal6";
let fieldValue882 = browser.currentScene.createNode("fieldValue");
fieldValue882.name = "stiffness";
fieldValue882.value = "1 1 1";
ProtoInstance881.fieldValue = new MFNode();

ProtoInstance881.fieldValue[0] = fieldValue882;

let fieldValue883 = browser.currentScene.createNode("fieldValue");
fieldValue883.name = "name";
fieldValue883.value = "r_carpal_proximal_interphalangeal_5";
ProtoInstance881.fieldValue[1] = fieldValue883;

let fieldValue884 = browser.currentScene.createNode("fieldValue");
fieldValue884.name = "center";
fieldValue884.value = "-0.190200001001358 0.748300015926361 -0.0962999984622002";
ProtoInstance881.fieldValue[2] = fieldValue884;

let fieldValue885 = browser.currentScene.createNode("fieldValue");
fieldValue885.name = "children";
let ProtoInstance886 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance886.name = "Joint";
ProtoInstance886.DEF = "hanim_r_carpal_distal_interphalangeal6";
let fieldValue887 = browser.currentScene.createNode("fieldValue");
fieldValue887.name = "stiffness";
fieldValue887.value = "1 1 1";
ProtoInstance886.fieldValue = new MFNode();

ProtoInstance886.fieldValue[0] = fieldValue887;

let fieldValue888 = browser.currentScene.createNode("fieldValue");
fieldValue888.name = "name";
fieldValue888.value = "r_carpal_distal_interphalangeal_5";
ProtoInstance886.fieldValue[1] = fieldValue888;

let fieldValue889 = browser.currentScene.createNode("fieldValue");
fieldValue889.name = "center";
fieldValue889.value = "-0.190799996256828 0.754000008106232 -0.096000000834465";
ProtoInstance886.fieldValue[2] = fieldValue889;

let fieldValue890 = browser.currentScene.createNode("fieldValue");
fieldValue890.name = "children";
let ProtoInstance891 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance891.name = "Segment";
ProtoInstance891.DEF = "hanim_r_carpal_distal_phalanx6";
let fieldValue892 = browser.currentScene.createNode("fieldValue");
fieldValue892.name = "name";
fieldValue892.value = "r_carpal_distal_phalanx_5";
ProtoInstance891.fieldValue = new MFNode();

ProtoInstance891.fieldValue[0] = fieldValue892;

let fieldValue893 = browser.currentScene.createNode("fieldValue");
fieldValue893.name = "children";
let ProtoInstance894 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance894.name = "Site";
ProtoInstance894.DEF = "hanim_r_carpal_distal_phalanx_5_tip_2";
let fieldValue895 = browser.currentScene.createNode("fieldValue");
fieldValue895.name = "name";
fieldValue895.value = "r_carpal_distal_phalanx_5_tip";
ProtoInstance894.fieldValue = new MFNode();

ProtoInstance894.fieldValue[0] = fieldValue895;

let fieldValue896 = browser.currentScene.createNode("fieldValue");
fieldValue896.name = "translation";
fieldValue896.value = "-0.193800002336502 0.703499972820282 -0.0948999971151352";
ProtoInstance894.fieldValue[1] = fieldValue896;

fieldValue893.children = new MFNode();

fieldValue893.children[0] = ProtoInstance894;

ProtoInstance891.fieldValue[1] = fieldValue893;

fieldValue890.children = new MFNode();

fieldValue890.children[0] = ProtoInstance891;

ProtoInstance886.fieldValue[3] = fieldValue890;

fieldValue885.children = new MFNode();

fieldValue885.children[0] = ProtoInstance886;

let ProtoInstance897 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance897.name = "Segment";
ProtoInstance897.DEF = "hanim_r_pinky_middle_2";
let fieldValue898 = browser.currentScene.createNode("fieldValue");
fieldValue898.name = "name";
fieldValue898.value = "r_pinky_middle";
ProtoInstance897.fieldValue = new MFNode();

ProtoInstance897.fieldValue[0] = fieldValue898;

fieldValue885.children[1] = ProtoInstance897;

ProtoInstance881.fieldValue[3] = fieldValue885;

fieldValue880.children = new MFNode();

fieldValue880.children[0] = ProtoInstance881;

let ProtoInstance899 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance899.name = "Segment";
ProtoInstance899.DEF = "hanim_r_pinky_proximal_2";
let fieldValue900 = browser.currentScene.createNode("fieldValue");
fieldValue900.name = "name";
fieldValue900.value = "r_pinky_proximal";
ProtoInstance899.fieldValue = new MFNode();

ProtoInstance899.fieldValue[0] = fieldValue900;

fieldValue880.children[1] = ProtoInstance899;

ProtoInstance876.fieldValue[3] = fieldValue880;

fieldValue875.children = new MFNode();

fieldValue875.children[0] = ProtoInstance876;

let ProtoInstance901 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance901.name = "Segment";
ProtoInstance901.DEF = "hanim_r_pinky_metacarpal_2";
let fieldValue902 = browser.currentScene.createNode("fieldValue");
fieldValue902.name = "name";
fieldValue902.value = "r_pinky_metacarpal";
ProtoInstance901.fieldValue = new MFNode();

ProtoInstance901.fieldValue[0] = fieldValue902;

fieldValue875.children[1] = ProtoInstance901;

ProtoInstance871.fieldValue[3] = fieldValue875;

fieldValue746.children[4] = ProtoInstance871;

let ProtoInstance903 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance903.name = "Segment";
ProtoInstance903.DEF = "hanim_r_hand_2";
let fieldValue904 = browser.currentScene.createNode("fieldValue");
fieldValue904.name = "name";
fieldValue904.value = "r_hand";
ProtoInstance903.fieldValue = new MFNode();

ProtoInstance903.fieldValue[0] = fieldValue904;

let fieldValue905 = browser.currentScene.createNode("fieldValue");
fieldValue905.name = "children";
let ProtoInstance906 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance906.name = "Site";
ProtoInstance906.DEF = "hanim_r_metacarpal_phalanx3";
let fieldValue907 = browser.currentScene.createNode("fieldValue");
fieldValue907.name = "name";
fieldValue907.value = "r_metacarpal_phalanx_2";
ProtoInstance906.fieldValue = new MFNode();

ProtoInstance906.fieldValue[0] = fieldValue907;

let fieldValue908 = browser.currentScene.createNode("fieldValue");
fieldValue908.name = "translation";
fieldValue908.value = "-0.197699993848801 0.816900014877319 -0.0176999997347593";
ProtoInstance906.fieldValue[1] = fieldValue908;

fieldValue905.children = new MFNode();

fieldValue905.children[0] = ProtoInstance906;

let ProtoInstance909 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance909.name = "Site";
ProtoInstance909.DEF = "hanim_r_ulnar_styloid_2";
let fieldValue910 = browser.currentScene.createNode("fieldValue");
fieldValue910.name = "name";
fieldValue910.value = "r_ulnar_styloid";
ProtoInstance909.fieldValue = new MFNode();

ProtoInstance909.fieldValue[0] = fieldValue910;

let fieldValue911 = browser.currentScene.createNode("fieldValue");
fieldValue911.name = "translation";
fieldValue911.value = "-0.21170000731945 0.856199979782104 -0.0584000013768673";
ProtoInstance909.fieldValue[1] = fieldValue911;

fieldValue905.children[1] = ProtoInstance909;

let ProtoInstance912 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance912.name = "Site";
ProtoInstance912.DEF = "hanim_r_metacarpal_phalanx6";
let fieldValue913 = browser.currentScene.createNode("fieldValue");
fieldValue913.name = "name";
fieldValue913.value = "r_metacarpal_phalanx_5";
ProtoInstance912.fieldValue = new MFNode();

ProtoInstance912.fieldValue[0] = fieldValue913;

let fieldValue914 = browser.currentScene.createNode("fieldValue");
fieldValue914.name = "translation";
fieldValue914.value = "-0.192900002002716 0.788999974727631 -0.10639999806881";
ProtoInstance912.fieldValue[1] = fieldValue914;

fieldValue905.children[2] = ProtoInstance912;

ProtoInstance903.fieldValue[1] = fieldValue905;

fieldValue746.children[5] = ProtoInstance903;

ProtoInstance742.fieldValue[3] = fieldValue746;

fieldValue741.children = new MFNode();

fieldValue741.children[0] = ProtoInstance742;

let ProtoInstance915 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance915.name = "Segment";
ProtoInstance915.DEF = "hanim_r_forearm_2";
let fieldValue916 = browser.currentScene.createNode("fieldValue");
fieldValue916.name = "name";
fieldValue916.value = "r_forearm";
ProtoInstance915.fieldValue = new MFNode();

ProtoInstance915.fieldValue[0] = fieldValue916;

let fieldValue917 = browser.currentScene.createNode("fieldValue");
fieldValue917.name = "children";
let ProtoInstance918 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance918.name = "Site";
ProtoInstance918.DEF = "hanim_r_radial_styloid_2";
let fieldValue919 = browser.currentScene.createNode("fieldValue");
fieldValue919.name = "name";
fieldValue919.value = "r_radial_styloid";
ProtoInstance918.fieldValue = new MFNode();

ProtoInstance918.fieldValue[0] = fieldValue919;

let fieldValue920 = browser.currentScene.createNode("fieldValue");
fieldValue920.name = "translation";
fieldValue920.value = "-0.188400000333786 0.86760002374649 -0.0359999984502792";
ProtoInstance918.fieldValue[1] = fieldValue920;

fieldValue917.children = new MFNode();

fieldValue917.children[0] = ProtoInstance918;

let ProtoInstance921 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance921.name = "Site";
ProtoInstance921.DEF = "hanim_r_olecranon_2";
let fieldValue922 = browser.currentScene.createNode("fieldValue");
fieldValue922.name = "name";
fieldValue922.value = "r_olecranon";
ProtoInstance921.fieldValue = new MFNode();

ProtoInstance921.fieldValue[0] = fieldValue922;

let fieldValue923 = browser.currentScene.createNode("fieldValue");
fieldValue923.name = "translation";
fieldValue923.value = "-0.190699994564056 1.14049994945526 -0.106499999761581";
ProtoInstance921.fieldValue[1] = fieldValue923;

fieldValue917.children[1] = ProtoInstance921;

let ProtoInstance924 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance924.name = "Site";
ProtoInstance924.DEF = "hanim_r_humeral_medial_epicondyles_2";
let fieldValue925 = browser.currentScene.createNode("fieldValue");
fieldValue925.name = "name";
fieldValue925.value = "r_humeral_medial_epicondyles";
ProtoInstance924.fieldValue = new MFNode();

ProtoInstance924.fieldValue[0] = fieldValue925;

let fieldValue926 = browser.currentScene.createNode("fieldValue");
fieldValue926.name = "translation";
fieldValue926.value = "-0.167999997735024 1.12979996204376 -0.106200002133846";
ProtoInstance924.fieldValue[1] = fieldValue926;

fieldValue917.children[2] = ProtoInstance924;

let ProtoInstance927 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance927.name = "Site";
ProtoInstance927.DEF = "hanim_r_radiale_2";
let fieldValue928 = browser.currentScene.createNode("fieldValue");
fieldValue928.name = "name";
fieldValue928.value = "r_radiale";
ProtoInstance927.fieldValue = new MFNode();

ProtoInstance927.fieldValue[0] = fieldValue928;

let fieldValue929 = browser.currentScene.createNode("fieldValue");
fieldValue929.name = "translation";
fieldValue929.value = "-0.212999999523163 1.130499958992 -0.109099999070168";
ProtoInstance927.fieldValue[1] = fieldValue929;

fieldValue917.children[3] = ProtoInstance927;

ProtoInstance915.fieldValue[1] = fieldValue917;

fieldValue741.children[1] = ProtoInstance915;

ProtoInstance737.fieldValue[3] = fieldValue741;

fieldValue736.children = new MFNode();

fieldValue736.children[0] = ProtoInstance737;

let ProtoInstance930 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance930.name = "Segment";
ProtoInstance930.DEF = "hanim_r_upperarm_2";
let fieldValue931 = browser.currentScene.createNode("fieldValue");
fieldValue931.name = "name";
fieldValue931.value = "r_upperarm";
ProtoInstance930.fieldValue = new MFNode();

ProtoInstance930.fieldValue[0] = fieldValue931;

let fieldValue932 = browser.currentScene.createNode("fieldValue");
fieldValue932.name = "children";
let ProtoInstance933 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance933.name = "Site";
ProtoInstance933.DEF = "hanim_r_humeral_lateral_epicondyles_2";
let fieldValue934 = browser.currentScene.createNode("fieldValue");
fieldValue934.name = "name";
fieldValue934.value = "r_humeral_lateral_epicondyles";
ProtoInstance933.fieldValue = new MFNode();

ProtoInstance933.fieldValue[0] = fieldValue934;

let fieldValue935 = browser.currentScene.createNode("fieldValue");
fieldValue935.name = "translation";
fieldValue935.value = "-0.222399994730949 1.15170001983643 -0.103299997746944";
ProtoInstance933.fieldValue[1] = fieldValue935;

fieldValue932.children = new MFNode();

fieldValue932.children[0] = ProtoInstance933;

ProtoInstance930.fieldValue[1] = fieldValue932;

fieldValue736.children[1] = ProtoInstance930;

ProtoInstance732.fieldValue[3] = fieldValue736;

fieldValue731.children = new MFNode();

fieldValue731.children[0] = ProtoInstance732;

let ProtoInstance936 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance936.name = "Segment";
ProtoInstance936.DEF = "hanim_r_scapula_2";
let fieldValue937 = browser.currentScene.createNode("fieldValue");
fieldValue937.name = "name";
fieldValue937.value = "r_scapula";
ProtoInstance936.fieldValue = new MFNode();

ProtoInstance936.fieldValue[0] = fieldValue937;

fieldValue731.children[1] = ProtoInstance936;

ProtoInstance727.fieldValue[3] = fieldValue731;

fieldValue726.children = new MFNode();

fieldValue726.children[0] = ProtoInstance727;

let ProtoInstance938 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance938.name = "Segment";
ProtoInstance938.DEF = "hanim_r_clavicle_2";
let fieldValue939 = browser.currentScene.createNode("fieldValue");
fieldValue939.name = "name";
fieldValue939.value = "r_clavicle";
ProtoInstance938.fieldValue = new MFNode();

ProtoInstance938.fieldValue[0] = fieldValue939;

let fieldValue940 = browser.currentScene.createNode("fieldValue");
fieldValue940.name = "children";
let ProtoInstance941 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance941.name = "Site";
ProtoInstance941.DEF = "hanim_r_clavicale_2";
let fieldValue942 = browser.currentScene.createNode("fieldValue");
fieldValue942.name = "name";
fieldValue942.value = "r_clavicale";
ProtoInstance941.fieldValue = new MFNode();

ProtoInstance941.fieldValue[0] = fieldValue942;

let fieldValue943 = browser.currentScene.createNode("fieldValue");
fieldValue943.name = "translation";
fieldValue943.value = "-0.0115000000223517 1.49430000782013 0.0399999991059303";
ProtoInstance941.fieldValue[1] = fieldValue943;

fieldValue940.children = new MFNode();

fieldValue940.children[0] = ProtoInstance941;

let ProtoInstance944 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance944.name = "Site";
ProtoInstance944.DEF = "hanim_r_acromion_2";
let fieldValue945 = browser.currentScene.createNode("fieldValue");
fieldValue945.name = "name";
fieldValue945.value = "r_acromion";
ProtoInstance944.fieldValue = new MFNode();

ProtoInstance944.fieldValue[0] = fieldValue945;

let fieldValue946 = browser.currentScene.createNode("fieldValue");
fieldValue946.name = "translation";
fieldValue946.value = "-0.190500006079674 1.47909998893738 -0.0430999994277954";
ProtoInstance944.fieldValue[1] = fieldValue946;

fieldValue940.children[1] = ProtoInstance944;

let ProtoInstance947 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance947.name = "Site";
ProtoInstance947.DEF = "hanim_r_axilla_proximal_2";
let fieldValue948 = browser.currentScene.createNode("fieldValue");
fieldValue948.name = "name";
fieldValue948.value = "r_axilla_proximal";
ProtoInstance947.fieldValue = new MFNode();

ProtoInstance947.fieldValue[0] = fieldValue948;

let fieldValue949 = browser.currentScene.createNode("fieldValue");
fieldValue949.name = "translation";
fieldValue949.value = "-0.162599995732307 1.40719997882843 -0.00310000008903444";
ProtoInstance947.fieldValue[1] = fieldValue949;

fieldValue940.children[2] = ProtoInstance947;

let ProtoInstance950 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance950.name = "Site";
ProtoInstance950.DEF = "hanim_r_axilla_distal_2";
let fieldValue951 = browser.currentScene.createNode("fieldValue");
fieldValue951.name = "name";
fieldValue951.value = "r_axilla_distal";
ProtoInstance950.fieldValue = new MFNode();

ProtoInstance950.fieldValue[0] = fieldValue951;

let fieldValue952 = browser.currentScene.createNode("fieldValue");
fieldValue952.name = "translation";
fieldValue952.value = "-0.160300001502037 1.40980005264282 -0.0825999975204468";
ProtoInstance950.fieldValue[1] = fieldValue952;

fieldValue940.children[3] = ProtoInstance950;

ProtoInstance938.fieldValue[1] = fieldValue940;

fieldValue726.children[1] = ProtoInstance938;

ProtoInstance722.fieldValue[3] = fieldValue726;

fieldValue382.children[2] = ProtoInstance722;

let ProtoInstance953 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance953.name = "Segment";
ProtoInstance953.DEF = "hanim_t1_2";
let fieldValue954 = browser.currentScene.createNode("fieldValue");
fieldValue954.name = "name";
fieldValue954.value = "t1";
ProtoInstance953.fieldValue = new MFNode();

ProtoInstance953.fieldValue[0] = fieldValue954;

let fieldValue955 = browser.currentScene.createNode("fieldValue");
fieldValue955.name = "children";
let ProtoInstance956 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance956.name = "Site";
ProtoInstance956.DEF = "hanim_suprasternale_2";
let fieldValue957 = browser.currentScene.createNode("fieldValue");
fieldValue957.name = "name";
fieldValue957.value = "suprasternale";
ProtoInstance956.fieldValue = new MFNode();

ProtoInstance956.fieldValue[0] = fieldValue957;

let fieldValue958 = browser.currentScene.createNode("fieldValue");
fieldValue958.name = "translation";
fieldValue958.value = "0.00839999970048666 1.47140002250671 0.0551000013947487";
ProtoInstance956.fieldValue[1] = fieldValue958;

fieldValue955.children = new MFNode();

fieldValue955.children[0] = ProtoInstance956;

let ProtoInstance959 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance959.name = "Site";
ProtoInstance959.DEF = "hanim_cervicale_2";
let fieldValue960 = browser.currentScene.createNode("fieldValue");
fieldValue960.name = "name";
fieldValue960.value = "cervicale";
ProtoInstance959.fieldValue = new MFNode();

ProtoInstance959.fieldValue[0] = fieldValue960;

let fieldValue961 = browser.currentScene.createNode("fieldValue");
fieldValue961.name = "translation";
fieldValue961.value = "0.0063999998383224 1.51999998092651 -0.0815000012516975";
ProtoInstance959.fieldValue[1] = fieldValue961;

fieldValue955.children[1] = ProtoInstance959;

ProtoInstance953.fieldValue[1] = fieldValue955;

fieldValue382.children[3] = ProtoInstance953;

ProtoInstance378.fieldValue[3] = fieldValue382;

fieldValue377.children = new MFNode();

fieldValue377.children[0] = ProtoInstance378;

let ProtoInstance962 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance962.name = "Segment";
ProtoInstance962.DEF = "hanim_t2_2";
let fieldValue963 = browser.currentScene.createNode("fieldValue");
fieldValue963.name = "name";
fieldValue963.value = "t2";
ProtoInstance962.fieldValue = new MFNode();

ProtoInstance962.fieldValue[0] = fieldValue963;

fieldValue377.children[1] = ProtoInstance962;

ProtoInstance373.fieldValue[3] = fieldValue377;

fieldValue372.children = new MFNode();

fieldValue372.children[0] = ProtoInstance373;

let ProtoInstance964 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance964.name = "Segment";
ProtoInstance964.DEF = "hanim_t3_2";
let fieldValue965 = browser.currentScene.createNode("fieldValue");
fieldValue965.name = "name";
fieldValue965.value = "t3";
ProtoInstance964.fieldValue = new MFNode();

ProtoInstance964.fieldValue[0] = fieldValue965;

fieldValue372.children[1] = ProtoInstance964;

ProtoInstance368.fieldValue[3] = fieldValue372;

fieldValue367.children = new MFNode();

fieldValue367.children[0] = ProtoInstance368;

let ProtoInstance966 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance966.name = "Segment";
ProtoInstance966.DEF = "hanim_t4_2";
let fieldValue967 = browser.currentScene.createNode("fieldValue");
fieldValue967.name = "name";
fieldValue967.value = "t4";
ProtoInstance966.fieldValue = new MFNode();

ProtoInstance966.fieldValue[0] = fieldValue967;

fieldValue367.children[1] = ProtoInstance966;

ProtoInstance363.fieldValue[3] = fieldValue367;

fieldValue362.children = new MFNode();

fieldValue362.children[0] = ProtoInstance363;

let ProtoInstance968 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance968.name = "Segment";
ProtoInstance968.DEF = "hanim_t5_2";
let fieldValue969 = browser.currentScene.createNode("fieldValue");
fieldValue969.name = "name";
fieldValue969.value = "t5";
ProtoInstance968.fieldValue = new MFNode();

ProtoInstance968.fieldValue[0] = fieldValue969;

fieldValue362.children[1] = ProtoInstance968;

ProtoInstance358.fieldValue[3] = fieldValue362;

fieldValue357.children = new MFNode();

fieldValue357.children[0] = ProtoInstance358;

let ProtoInstance970 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance970.name = "Segment";
ProtoInstance970.DEF = "hanim_t6_2";
let fieldValue971 = browser.currentScene.createNode("fieldValue");
fieldValue971.name = "name";
fieldValue971.value = "t6";
ProtoInstance970.fieldValue = new MFNode();

ProtoInstance970.fieldValue[0] = fieldValue971;

fieldValue357.children[1] = ProtoInstance970;

ProtoInstance353.fieldValue[3] = fieldValue357;

fieldValue352.children = new MFNode();

fieldValue352.children[0] = ProtoInstance353;

let ProtoInstance972 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance972.name = "Segment";
ProtoInstance972.DEF = "hanim_t7_2";
let fieldValue973 = browser.currentScene.createNode("fieldValue");
fieldValue973.name = "name";
fieldValue973.value = "t7";
ProtoInstance972.fieldValue = new MFNode();

ProtoInstance972.fieldValue[0] = fieldValue973;

fieldValue352.children[1] = ProtoInstance972;

ProtoInstance348.fieldValue[3] = fieldValue352;

fieldValue347.children = new MFNode();

fieldValue347.children[0] = ProtoInstance348;

let ProtoInstance974 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance974.name = "Segment";
ProtoInstance974.DEF = "hanim_t8_2";
let fieldValue975 = browser.currentScene.createNode("fieldValue");
fieldValue975.name = "name";
fieldValue975.value = "t8";
ProtoInstance974.fieldValue = new MFNode();

ProtoInstance974.fieldValue[0] = fieldValue975;

fieldValue347.children[1] = ProtoInstance974;

ProtoInstance343.fieldValue[3] = fieldValue347;

fieldValue342.children = new MFNode();

fieldValue342.children[0] = ProtoInstance343;

let ProtoInstance976 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance976.name = "Segment";
ProtoInstance976.DEF = "hanim_t9_2";
let fieldValue977 = browser.currentScene.createNode("fieldValue");
fieldValue977.name = "name";
fieldValue977.value = "t9";
ProtoInstance976.fieldValue = new MFNode();

ProtoInstance976.fieldValue[0] = fieldValue977;

let fieldValue978 = browser.currentScene.createNode("fieldValue");
fieldValue978.name = "children";
let ProtoInstance979 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance979.name = "Site";
ProtoInstance979.DEF = "hanim_r_thelion_2";
let fieldValue980 = browser.currentScene.createNode("fieldValue");
fieldValue980.name = "name";
fieldValue980.value = "r_thelion";
ProtoInstance979.fieldValue = new MFNode();

ProtoInstance979.fieldValue[0] = fieldValue980;

let fieldValue981 = browser.currentScene.createNode("fieldValue");
fieldValue981.name = "translation";
fieldValue981.value = "-0.0736000016331673 1.33850002288818 0.121699996292591";
ProtoInstance979.fieldValue[1] = fieldValue981;

fieldValue978.children = new MFNode();

fieldValue978.children[0] = ProtoInstance979;

let ProtoInstance982 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance982.name = "Site";
ProtoInstance982.DEF = "hanim_l_thelion_2";
let fieldValue983 = browser.currentScene.createNode("fieldValue");
fieldValue983.name = "name";
fieldValue983.value = "l_thelion";
ProtoInstance982.fieldValue = new MFNode();

ProtoInstance982.fieldValue[0] = fieldValue983;

let fieldValue984 = browser.currentScene.createNode("fieldValue");
fieldValue984.name = "translation";
fieldValue984.value = "0.0917999967932701 1.33819997310638 0.119199998676777";
ProtoInstance982.fieldValue[1] = fieldValue984;

fieldValue978.children[1] = ProtoInstance982;

ProtoInstance976.fieldValue[1] = fieldValue978;

fieldValue342.children[1] = ProtoInstance976;

ProtoInstance338.fieldValue[3] = fieldValue342;

fieldValue337.children = new MFNode();

fieldValue337.children[0] = ProtoInstance338;

let ProtoInstance985 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance985.name = "Segment";
ProtoInstance985.DEF = "hanim_t10_2";
let fieldValue986 = browser.currentScene.createNode("fieldValue");
fieldValue986.name = "name";
fieldValue986.value = "t10";
ProtoInstance985.fieldValue = new MFNode();

ProtoInstance985.fieldValue[0] = fieldValue986;

let fieldValue987 = browser.currentScene.createNode("fieldValue");
fieldValue987.name = "children";
let ProtoInstance988 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance988.name = "Site";
ProtoInstance988.DEF = "hanim_substernale_2";
let fieldValue989 = browser.currentScene.createNode("fieldValue");
fieldValue989.name = "name";
fieldValue989.value = "substernale";
ProtoInstance988.fieldValue = new MFNode();

ProtoInstance988.fieldValue[0] = fieldValue989;

let fieldValue990 = browser.currentScene.createNode("fieldValue");
fieldValue990.name = "translation";
fieldValue990.value = "0.008500000461936 1.29949998855591 0.114699997007847";
ProtoInstance988.fieldValue[1] = fieldValue990;

fieldValue987.children = new MFNode();

fieldValue987.children[0] = ProtoInstance988;

ProtoInstance985.fieldValue[1] = fieldValue987;

fieldValue337.children[1] = ProtoInstance985;

ProtoInstance333.fieldValue[3] = fieldValue337;

fieldValue332.children = new MFNode();

fieldValue332.children[0] = ProtoInstance333;

let ProtoInstance991 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance991.name = "Segment";
ProtoInstance991.DEF = "hanim_t11_2";
let fieldValue992 = browser.currentScene.createNode("fieldValue");
fieldValue992.name = "name";
fieldValue992.value = "t11";
ProtoInstance991.fieldValue = new MFNode();

ProtoInstance991.fieldValue[0] = fieldValue992;

fieldValue332.children[1] = ProtoInstance991;

ProtoInstance328.fieldValue[3] = fieldValue332;

fieldValue327.children = new MFNode();

fieldValue327.children[0] = ProtoInstance328;

let ProtoInstance993 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance993.name = "Segment";
ProtoInstance993.DEF = "hanim_t12_2";
let fieldValue994 = browser.currentScene.createNode("fieldValue");
fieldValue994.name = "name";
fieldValue994.value = "t12";
ProtoInstance993.fieldValue = new MFNode();

ProtoInstance993.fieldValue[0] = fieldValue994;

fieldValue327.children[1] = ProtoInstance993;

ProtoInstance323.fieldValue[3] = fieldValue327;

fieldValue322.children = new MFNode();

fieldValue322.children[0] = ProtoInstance323;

let ProtoInstance995 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance995.name = "Segment";
ProtoInstance995.DEF = "hanim_l1_2";
let fieldValue996 = browser.currentScene.createNode("fieldValue");
fieldValue996.name = "name";
fieldValue996.value = "l1";
ProtoInstance995.fieldValue = new MFNode();

ProtoInstance995.fieldValue[0] = fieldValue996;

fieldValue322.children[1] = ProtoInstance995;

ProtoInstance318.fieldValue[3] = fieldValue322;

fieldValue317.children = new MFNode();

fieldValue317.children[0] = ProtoInstance318;

let ProtoInstance997 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance997.name = "Segment";
ProtoInstance997.DEF = "hanim_l2_2";
let fieldValue998 = browser.currentScene.createNode("fieldValue");
fieldValue998.name = "name";
fieldValue998.value = "l2";
ProtoInstance997.fieldValue = new MFNode();

ProtoInstance997.fieldValue[0] = fieldValue998;

let fieldValue999 = browser.currentScene.createNode("fieldValue");
fieldValue999.name = "children";
let ProtoInstance1000 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1000.name = "Site";
ProtoInstance1000.DEF = "hanim_r_rib10_2";
let fieldValue1001 = browser.currentScene.createNode("fieldValue");
fieldValue1001.name = "name";
fieldValue1001.value = "r_rib10";
ProtoInstance1000.fieldValue = new MFNode();

ProtoInstance1000.fieldValue[0] = fieldValue1001;

let fieldValue1002 = browser.currentScene.createNode("fieldValue");
fieldValue1002.name = "translation";
fieldValue1002.value = "-0.0710999965667725 1.19410002231598 0.101599998772144";
ProtoInstance1000.fieldValue[1] = fieldValue1002;

fieldValue999.children = new MFNode();

fieldValue999.children[0] = ProtoInstance1000;

let ProtoInstance1003 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1003.name = "Site";
ProtoInstance1003.DEF = "hanim_l_rib10_2";
let fieldValue1004 = browser.currentScene.createNode("fieldValue");
fieldValue1004.name = "name";
fieldValue1004.value = "l_rib10";
ProtoInstance1003.fieldValue = new MFNode();

ProtoInstance1003.fieldValue[0] = fieldValue1004;

let fieldValue1005 = browser.currentScene.createNode("fieldValue");
fieldValue1005.name = "translation";
fieldValue1005.value = "0.0870999991893768 1.19249999523163 0.099200002849102";
ProtoInstance1003.fieldValue[1] = fieldValue1005;

fieldValue999.children[1] = ProtoInstance1003;

let ProtoInstance1006 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1006.name = "Site";
ProtoInstance1006.DEF = "hanim_spine_2_lower_back_2";
let fieldValue1007 = browser.currentScene.createNode("fieldValue");
fieldValue1007.name = "name";
fieldValue1007.value = "spine_2_lower_back";
ProtoInstance1006.fieldValue = new MFNode();

ProtoInstance1006.fieldValue[0] = fieldValue1007;

let fieldValue1008 = browser.currentScene.createNode("fieldValue");
fieldValue1008.name = "translation";
fieldValue1008.value = "0.00490000005811453 1.19079995155334 -0.111299999058247";
ProtoInstance1006.fieldValue[1] = fieldValue1008;

fieldValue999.children[2] = ProtoInstance1006;

ProtoInstance997.fieldValue[1] = fieldValue999;

fieldValue317.children[1] = ProtoInstance997;

ProtoInstance313.fieldValue[3] = fieldValue317;

fieldValue312.children = new MFNode();

fieldValue312.children[0] = ProtoInstance313;

let ProtoInstance1009 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1009.name = "Segment";
ProtoInstance1009.DEF = "hanim_l3_2";
let fieldValue1010 = browser.currentScene.createNode("fieldValue");
fieldValue1010.name = "name";
fieldValue1010.value = "l3";
ProtoInstance1009.fieldValue = new MFNode();

ProtoInstance1009.fieldValue[0] = fieldValue1010;

fieldValue312.children[1] = ProtoInstance1009;

ProtoInstance308.fieldValue[3] = fieldValue312;

fieldValue307.children = new MFNode();

fieldValue307.children[0] = ProtoInstance308;

let ProtoInstance1011 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1011.name = "Segment";
ProtoInstance1011.DEF = "hanim_l4_2";
let fieldValue1012 = browser.currentScene.createNode("fieldValue");
fieldValue1012.name = "name";
fieldValue1012.value = "l4";
ProtoInstance1011.fieldValue = new MFNode();

ProtoInstance1011.fieldValue[0] = fieldValue1012;

fieldValue307.children[1] = ProtoInstance1011;

ProtoInstance303.fieldValue[3] = fieldValue307;

fieldValue302.children = new MFNode();

fieldValue302.children[0] = ProtoInstance303;

let ProtoInstance1013 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1013.name = "Segment";
ProtoInstance1013.DEF = "hanim_l5_2";
let fieldValue1014 = browser.currentScene.createNode("fieldValue");
fieldValue1014.name = "name";
fieldValue1014.value = "l5";
ProtoInstance1013.fieldValue = new MFNode();

ProtoInstance1013.fieldValue[0] = fieldValue1014;

let fieldValue1015 = browser.currentScene.createNode("fieldValue");
fieldValue1015.name = "children";
let ProtoInstance1016 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1016.name = "Site";
ProtoInstance1016.DEF = "hanim_waist_preferred_posterior_2";
let fieldValue1017 = browser.currentScene.createNode("fieldValue");
fieldValue1017.name = "name";
fieldValue1017.value = "waist_preferred_posterior";
ProtoInstance1016.fieldValue = new MFNode();

ProtoInstance1016.fieldValue[0] = fieldValue1017;

let fieldValue1018 = browser.currentScene.createNode("fieldValue");
fieldValue1018.name = "translation";
fieldValue1018.value = "0.28999999165535 1.09150004386902 -0.109099999070168";
ProtoInstance1016.fieldValue[1] = fieldValue1018;

fieldValue1015.children = new MFNode();

fieldValue1015.children[0] = ProtoInstance1016;

let ProtoInstance1019 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1019.name = "Site";
ProtoInstance1019.DEF = "hanim_navel_2";
let fieldValue1020 = browser.currentScene.createNode("fieldValue");
fieldValue1020.name = "name";
fieldValue1020.value = "navel";
ProtoInstance1019.fieldValue = new MFNode();

ProtoInstance1019.fieldValue[0] = fieldValue1020;

let fieldValue1021 = browser.currentScene.createNode("fieldValue");
fieldValue1021.name = "translation";
fieldValue1021.value = "0.00689999992027879 1.09660005569458 0.101700000464916";
ProtoInstance1019.fieldValue[1] = fieldValue1021;

fieldValue1015.children[1] = ProtoInstance1019;

ProtoInstance1013.fieldValue[1] = fieldValue1015;

fieldValue302.children[1] = ProtoInstance1013;

ProtoInstance298.fieldValue[3] = fieldValue302;

fieldValue104.children[1] = ProtoInstance298;

let ProtoInstance1022 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1022.name = "Segment";
ProtoInstance1022.DEF = "hanim_sacrum_2";
let fieldValue1023 = browser.currentScene.createNode("fieldValue");
fieldValue1023.name = "name";
fieldValue1023.value = "sacrum";
ProtoInstance1022.fieldValue = new MFNode();

ProtoInstance1022.fieldValue[0] = fieldValue1023;

fieldValue104.children[2] = ProtoInstance1022;

ProtoInstance100.fieldValue[3] = fieldValue104;

fieldValue99.children = new MFNode();

fieldValue99.children[0] = ProtoInstance100;

ProtoInstance98.fieldValue = new MFNode();

ProtoInstance98.fieldValue[0] = fieldValue99;

let fieldValue1024 = browser.currentScene.createNode("fieldValue");
fieldValue1024.name = "joints";
let ProtoInstance1025 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1025.USE = "hanim_humanoid_root_2";
fieldValue1024.children = new MFNode();

fieldValue1024.children[0] = ProtoInstance1025;

let ProtoInstance1026 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1026.USE = "hanim_sacroiliac_2";
fieldValue1024.children[1] = ProtoInstance1026;

let ProtoInstance1027 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1027.USE = "hanim_l_hip_2";
fieldValue1024.children[2] = ProtoInstance1027;

let ProtoInstance1028 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1028.USE = "hanim_l_knee_2";
fieldValue1024.children[3] = ProtoInstance1028;

let ProtoInstance1029 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1029.USE = "hanim_l_talocrural_2";
fieldValue1024.children[4] = ProtoInstance1029;

let ProtoInstance1030 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1030.USE = "hanim_l_tarsotarsal_interphalangeal__2";
fieldValue1024.children[5] = ProtoInstance1030;

let ProtoInstance1031 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1031.USE = "hanim_l_metatarsophalangeal__2";
fieldValue1024.children[6] = ProtoInstance1031;

let ProtoInstance1032 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1032.USE = "hanim_l_tarsal_interphalangeal__2";
fieldValue1024.children[7] = ProtoInstance1032;

let ProtoInstance1033 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1033.USE = "hanim_r_hip_2";
fieldValue1024.children[8] = ProtoInstance1033;

let ProtoInstance1034 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1034.USE = "hanim_r_knee_2";
fieldValue1024.children[9] = ProtoInstance1034;

let ProtoInstance1035 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1035.USE = "hanim_r_talocrural_2";
fieldValue1024.children[10] = ProtoInstance1035;

let ProtoInstance1036 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1036.USE = "hanim_r_tarsotarsal_interphalangeal__2";
fieldValue1024.children[11] = ProtoInstance1036;

let ProtoInstance1037 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1037.USE = "hanim_r_metatarsophalangeal__2";
fieldValue1024.children[12] = ProtoInstance1037;

let ProtoInstance1038 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1038.USE = "hanim_r_tarsal_interphalangeal__2";
fieldValue1024.children[13] = ProtoInstance1038;

let ProtoInstance1039 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1039.USE = "hanim_vl5_2";
fieldValue1024.children[14] = ProtoInstance1039;

let ProtoInstance1040 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1040.USE = "hanim_vl4_2";
fieldValue1024.children[15] = ProtoInstance1040;

let ProtoInstance1041 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1041.USE = "hanim_vl3_2";
fieldValue1024.children[16] = ProtoInstance1041;

let ProtoInstance1042 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1042.USE = "hanim_vl2_2";
fieldValue1024.children[17] = ProtoInstance1042;

let ProtoInstance1043 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1043.USE = "hanim_vl1_2";
fieldValue1024.children[18] = ProtoInstance1043;

let ProtoInstance1044 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1044.USE = "hanim_vt12_2";
fieldValue1024.children[19] = ProtoInstance1044;

let ProtoInstance1045 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1045.USE = "hanim_vt11_2";
fieldValue1024.children[20] = ProtoInstance1045;

let ProtoInstance1046 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1046.USE = "hanim_vt10_2";
fieldValue1024.children[21] = ProtoInstance1046;

let ProtoInstance1047 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1047.USE = "hanim_vt9_2";
fieldValue1024.children[22] = ProtoInstance1047;

let ProtoInstance1048 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1048.USE = "hanim_vt8_2";
fieldValue1024.children[23] = ProtoInstance1048;

let ProtoInstance1049 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1049.USE = "hanim_vt7_2";
fieldValue1024.children[24] = ProtoInstance1049;

let ProtoInstance1050 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1050.USE = "hanim_vt6_2";
fieldValue1024.children[25] = ProtoInstance1050;

let ProtoInstance1051 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1051.USE = "hanim_vt5_2";
fieldValue1024.children[26] = ProtoInstance1051;

let ProtoInstance1052 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1052.USE = "hanim_vt4_2";
fieldValue1024.children[27] = ProtoInstance1052;

let ProtoInstance1053 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1053.USE = "hanim_vt3_2";
fieldValue1024.children[28] = ProtoInstance1053;

let ProtoInstance1054 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1054.USE = "hanim_vt2_2";
fieldValue1024.children[29] = ProtoInstance1054;

let ProtoInstance1055 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1055.USE = "hanim_vt1_2";
fieldValue1024.children[30] = ProtoInstance1055;

let ProtoInstance1056 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1056.USE = "hanim_vc7_2";
fieldValue1024.children[31] = ProtoInstance1056;

let ProtoInstance1057 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1057.USE = "hanim_vc6_2";
fieldValue1024.children[32] = ProtoInstance1057;

let ProtoInstance1058 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1058.USE = "hanim_vc5_2";
fieldValue1024.children[33] = ProtoInstance1058;

let ProtoInstance1059 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1059.USE = "hanim_vc4_2";
fieldValue1024.children[34] = ProtoInstance1059;

let ProtoInstance1060 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1060.USE = "hanim_vc3_2";
fieldValue1024.children[35] = ProtoInstance1060;

let ProtoInstance1061 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1061.USE = "hanim_vc2_2";
fieldValue1024.children[36] = ProtoInstance1061;

let ProtoInstance1062 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1062.USE = "hanim_vc1_2";
fieldValue1024.children[37] = ProtoInstance1062;

let ProtoInstance1063 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1063.USE = "hanim_skullbase_2";
fieldValue1024.children[38] = ProtoInstance1063;

let ProtoInstance1064 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1064.USE = "hanim_l_eyeball_4";
fieldValue1024.children[39] = ProtoInstance1064;

let ProtoInstance1065 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1065.USE = "hanim_r_eyeball_4";
fieldValue1024.children[40] = ProtoInstance1065;

let ProtoInstance1066 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1066.USE = "hanim_l_sternoclavicular_2";
fieldValue1024.children[41] = ProtoInstance1066;

let ProtoInstance1067 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1067.USE = "hanim_l_acromioclavicular_2";
fieldValue1024.children[42] = ProtoInstance1067;

let ProtoInstance1068 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1068.USE = "hanim_l_shoulder_2";
fieldValue1024.children[43] = ProtoInstance1068;

let ProtoInstance1069 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1069.USE = "hanim_l_elbow_2";
fieldValue1024.children[44] = ProtoInstance1069;

let ProtoInstance1070 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1070.USE = "hanim_l_radiocarpal_2";
fieldValue1024.children[45] = ProtoInstance1070;

let ProtoInstance1071 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1071.USE = "hanim_l_carpometacarpal2";
fieldValue1024.children[46] = ProtoInstance1071;

let ProtoInstance1072 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1072.USE = "hanim_l_metacarpophalangeal2";
fieldValue1024.children[47] = ProtoInstance1072;

let ProtoInstance1073 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1073.USE = "hanim_l_carpal_interphalangeal2";
fieldValue1024.children[48] = ProtoInstance1073;

let ProtoInstance1074 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1074.USE = "hanim_l_carpometacarpal3";
fieldValue1024.children[49] = ProtoInstance1074;

let ProtoInstance1075 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1075.USE = "hanim_l_metacarpophalangeal3";
fieldValue1024.children[50] = ProtoInstance1075;

let ProtoInstance1076 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1076.USE = "hanim_l_carpal_proximal_interphalangeal3";
fieldValue1024.children[51] = ProtoInstance1076;

let ProtoInstance1077 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1077.USE = "hanim_l_carpal_distal_interphalangeal3";
fieldValue1024.children[52] = ProtoInstance1077;

let ProtoInstance1078 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1078.USE = "hanim_l_carpometacarpal4";
fieldValue1024.children[53] = ProtoInstance1078;

let ProtoInstance1079 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1079.USE = "hanim_l_metacarpophalangeal4";
fieldValue1024.children[54] = ProtoInstance1079;

let ProtoInstance1080 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1080.USE = "hanim_l_carpal_proximal_interphalangeal4";
fieldValue1024.children[55] = ProtoInstance1080;

let ProtoInstance1081 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1081.USE = "hanim_l_carpal_distal_interphalangeal4";
fieldValue1024.children[56] = ProtoInstance1081;

let ProtoInstance1082 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1082.USE = "hanim_l_carpometacarpal5";
fieldValue1024.children[57] = ProtoInstance1082;

let ProtoInstance1083 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1083.USE = "hanim_l_metacarpophalangeal5";
fieldValue1024.children[58] = ProtoInstance1083;

let ProtoInstance1084 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1084.USE = "hanim_l_carpal_proximal_interphalangeal5";
fieldValue1024.children[59] = ProtoInstance1084;

let ProtoInstance1085 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1085.USE = "hanim_l_carpal_distal_interphalangeal5";
fieldValue1024.children[60] = ProtoInstance1085;

let ProtoInstance1086 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1086.USE = "hanim_l_carpometacarpal6";
fieldValue1024.children[61] = ProtoInstance1086;

let ProtoInstance1087 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1087.USE = "hanim_l_metacarpophalangeal6";
fieldValue1024.children[62] = ProtoInstance1087;

let ProtoInstance1088 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1088.USE = "hanim_l_carpal_proximal_interphalangeal6";
fieldValue1024.children[63] = ProtoInstance1088;

let ProtoInstance1089 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1089.USE = "hanim_l_carpal_distal_interphalangeal6";
fieldValue1024.children[64] = ProtoInstance1089;

let ProtoInstance1090 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1090.USE = "hanim_r_sternoclavicular_2";
fieldValue1024.children[65] = ProtoInstance1090;

let ProtoInstance1091 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1091.USE = "hanim_r_acromioclavicular_2";
fieldValue1024.children[66] = ProtoInstance1091;

let ProtoInstance1092 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1092.USE = "hanim_r_shoulder_2";
fieldValue1024.children[67] = ProtoInstance1092;

let ProtoInstance1093 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1093.USE = "hanim_r_elbow_2";
fieldValue1024.children[68] = ProtoInstance1093;

let ProtoInstance1094 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1094.USE = "hanim_r_radiocarpal_2";
fieldValue1024.children[69] = ProtoInstance1094;

let ProtoInstance1095 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1095.USE = "hanim_r_carpometacarpal2";
fieldValue1024.children[70] = ProtoInstance1095;

let ProtoInstance1096 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1096.USE = "hanim_r_metacarpophalangeal2";
fieldValue1024.children[71] = ProtoInstance1096;

let ProtoInstance1097 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1097.USE = "hanim_r_carpal_interphalangeal2";
fieldValue1024.children[72] = ProtoInstance1097;

let ProtoInstance1098 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1098.USE = "hanim_r_carpometacarpal3";
fieldValue1024.children[73] = ProtoInstance1098;

let ProtoInstance1099 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1099.USE = "hanim_r_metacarpophalangeal3";
fieldValue1024.children[74] = ProtoInstance1099;

let ProtoInstance1100 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1100.USE = "hanim_r_carpal_proximal_interphalangeal3";
fieldValue1024.children[75] = ProtoInstance1100;

let ProtoInstance1101 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1101.USE = "hanim_r_carpal_distal_interphalangeal3";
fieldValue1024.children[76] = ProtoInstance1101;

let ProtoInstance1102 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1102.USE = "hanim_r_carpometacarpal4";
fieldValue1024.children[77] = ProtoInstance1102;

let ProtoInstance1103 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1103.USE = "hanim_r_metacarpophalangeal4";
fieldValue1024.children[78] = ProtoInstance1103;

let ProtoInstance1104 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1104.USE = "hanim_r_carpal_proximal_interphalangeal4";
fieldValue1024.children[79] = ProtoInstance1104;

let ProtoInstance1105 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1105.USE = "hanim_r_carpal_distal_interphalangeal4";
fieldValue1024.children[80] = ProtoInstance1105;

let ProtoInstance1106 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1106.USE = "hanim_r_carpometacarpal5";
fieldValue1024.children[81] = ProtoInstance1106;

let ProtoInstance1107 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1107.USE = "hanim_r_metacarpophalangeal5";
fieldValue1024.children[82] = ProtoInstance1107;

let ProtoInstance1108 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1108.USE = "hanim_r_carpal_proximal_interphalangeal5";
fieldValue1024.children[83] = ProtoInstance1108;

let ProtoInstance1109 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1109.USE = "hanim_r_carpal_distal_interphalangeal5";
fieldValue1024.children[84] = ProtoInstance1109;

let ProtoInstance1110 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1110.USE = "hanim_r_carpometacarpal6";
fieldValue1024.children[85] = ProtoInstance1110;

let ProtoInstance1111 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1111.USE = "hanim_r_metacarpophalangeal6";
fieldValue1024.children[86] = ProtoInstance1111;

let ProtoInstance1112 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1112.USE = "hanim_r_carpal_proximal_interphalangeal6";
fieldValue1024.children[87] = ProtoInstance1112;

let ProtoInstance1113 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1113.USE = "hanim_r_carpal_distal_interphalangeal6";
fieldValue1024.children[88] = ProtoInstance1113;

ProtoInstance98.fieldValue[1] = fieldValue1024;

let fieldValue1114 = browser.currentScene.createNode("fieldValue");
fieldValue1114.name = "sites";
let ProtoInstance1115 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1115.USE = "hanim_l_tarsal_distal_phalanx_1_tip_2";
fieldValue1114.children = new MFNode();

fieldValue1114.children[0] = ProtoInstance1115;

let ProtoInstance1116 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1116.USE = "hanim_l_tarsal_interphalangeal_phalanx6";
fieldValue1114.children[1] = ProtoInstance1116;

let ProtoInstance1117 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1117.USE = "hanim_l_tarsal_distal_phalanx3";
fieldValue1114.children[2] = ProtoInstance1117;

let ProtoInstance1118 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1118.USE = "hanim_l_tarsal_interphalangeal_phalanx2";
fieldValue1114.children[3] = ProtoInstance1118;

let ProtoInstance1119 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1119.USE = "hanim_l_lateral_malleolus_2";
fieldValue1114.children[4] = ProtoInstance1119;

let ProtoInstance1120 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1120.USE = "hanim_l_medial_malleolus_2";
fieldValue1114.children[5] = ProtoInstance1120;

let ProtoInstance1121 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1121.USE = "hanim_l_sphyrion_2";
fieldValue1114.children[6] = ProtoInstance1121;

let ProtoInstance1122 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1122.USE = "hanim_l_calcaneus_posterior_2";
fieldValue1114.children[7] = ProtoInstance1122;

let ProtoInstance1123 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1123.USE = "hanim_l_knee_crease_2";
fieldValue1114.children[8] = ProtoInstance1123;

let ProtoInstance1124 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1124.USE = "hanim_l_femoral_lateral_epicondyles_2";
fieldValue1114.children[9] = ProtoInstance1124;

let ProtoInstance1125 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1125.USE = "hanim_l_femoral_medial_epicondyles_2";
fieldValue1114.children[10] = ProtoInstance1125;

let ProtoInstance1126 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1126.USE = "hanim_r_tarsal_distal_phalanx_1_tip_2";
fieldValue1114.children[11] = ProtoInstance1126;

let ProtoInstance1127 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1127.USE = "hanim_r_tarsal_interphalangeal_phalanx6";
fieldValue1114.children[12] = ProtoInstance1127;

let ProtoInstance1128 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1128.USE = "hanim_r_tarsal_distal_phalanx3";
fieldValue1114.children[13] = ProtoInstance1128;

let ProtoInstance1129 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1129.USE = "hanim_r_tarsal_interphalangeal_phalanx2";
fieldValue1114.children[14] = ProtoInstance1129;

let ProtoInstance1130 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1130.USE = "hanim_r_lateral_malleolus_2";
fieldValue1114.children[15] = ProtoInstance1130;

let ProtoInstance1131 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1131.USE = "hanim_r_medial_malleolus_2";
fieldValue1114.children[16] = ProtoInstance1131;

let ProtoInstance1132 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1132.USE = "hanim_r_sphyrion_2";
fieldValue1114.children[17] = ProtoInstance1132;

let ProtoInstance1133 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1133.USE = "hanim_r_calcaneus_posterior_2";
fieldValue1114.children[18] = ProtoInstance1133;

let ProtoInstance1134 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1134.USE = "hanim_r_knee_crease_2";
fieldValue1114.children[19] = ProtoInstance1134;

let ProtoInstance1135 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1135.USE = "hanim_r_femoral_lateral_epicondyles_2";
fieldValue1114.children[20] = ProtoInstance1135;

let ProtoInstance1136 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1136.USE = "hanim_r_femoral_medial_epicondyles_2";
fieldValue1114.children[21] = ProtoInstance1136;

let ProtoInstance1137 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1137.USE = "hanim_r_iliocristale_2";
fieldValue1114.children[22] = ProtoInstance1137;

let ProtoInstance1138 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1138.USE = "hanim_r_trochanterion_2";
fieldValue1114.children[23] = ProtoInstance1138;

let ProtoInstance1139 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1139.USE = "hanim_l_iliocristale_2";
fieldValue1114.children[24] = ProtoInstance1139;

let ProtoInstance1140 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1140.USE = "hanim_l_trochanterion_2";
fieldValue1114.children[25] = ProtoInstance1140;

let ProtoInstance1141 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1141.USE = "hanim_r_asis_2";
fieldValue1114.children[26] = ProtoInstance1141;

let ProtoInstance1142 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1142.USE = "hanim_l_asis_2";
fieldValue1114.children[27] = ProtoInstance1142;

let ProtoInstance1143 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1143.USE = "hanim_r_psis_2";
fieldValue1114.children[28] = ProtoInstance1143;

let ProtoInstance1144 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1144.USE = "hanim_l_psis_2";
fieldValue1114.children[29] = ProtoInstance1144;

let ProtoInstance1145 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1145.USE = "hanim_crotch_2";
fieldValue1114.children[30] = ProtoInstance1145;

let ProtoInstance1146 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1146.USE = "hanim_skull_tip_2";
fieldValue1114.children[31] = ProtoInstance1146;

let ProtoInstance1147 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1147.USE = "hanim_sellion_2";
fieldValue1114.children[32] = ProtoInstance1147;

let ProtoInstance1148 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1148.USE = "hanim_r_infraorbitale_2";
fieldValue1114.children[33] = ProtoInstance1148;

let ProtoInstance1149 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1149.USE = "hanim_l_infraorbitale_2";
fieldValue1114.children[34] = ProtoInstance1149;

let ProtoInstance1150 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1150.USE = "hanim_supramenton_2";
fieldValue1114.children[35] = ProtoInstance1150;

let ProtoInstance1151 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1151.USE = "hanim_r_tragion_2";
fieldValue1114.children[36] = ProtoInstance1151;

let ProtoInstance1152 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1152.USE = "hanim_r_gonion_2";
fieldValue1114.children[37] = ProtoInstance1152;

let ProtoInstance1153 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1153.USE = "hanim_l_tragion_2";
fieldValue1114.children[38] = ProtoInstance1153;

let ProtoInstance1154 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1154.USE = "hanim_l_gonion_2";
fieldValue1114.children[39] = ProtoInstance1154;

let ProtoInstance1155 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1155.USE = "hanim_nuchale_2";
fieldValue1114.children[40] = ProtoInstance1155;

let ProtoInstance1156 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1156.USE = "hanim_r_neck_base_2";
fieldValue1114.children[41] = ProtoInstance1156;

let ProtoInstance1157 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1157.USE = "hanim_l_neck_base_2";
fieldValue1114.children[42] = ProtoInstance1157;

let ProtoInstance1158 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1158.USE = "hanim_l_carpal_distal_phalanx_1_tip_2";
fieldValue1114.children[43] = ProtoInstance1158;

let ProtoInstance1159 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1159.USE = "hanim_l_carpal_distal_phalanx_2_tip_2";
fieldValue1114.children[44] = ProtoInstance1159;

let ProtoInstance1160 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1160.USE = "hanim_l_dactylion_2";
fieldValue1114.children[45] = ProtoInstance1160;

let ProtoInstance1161 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1161.USE = "hanim_l_carpal_distal_phalanx_3_tip_2";
fieldValue1114.children[46] = ProtoInstance1161;

let ProtoInstance1162 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1162.USE = "hanim_l_carpal_distal_phalanx_4_tip_2";
fieldValue1114.children[47] = ProtoInstance1162;

let ProtoInstance1163 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1163.USE = "hanim_l_carpal_distal_phalanx_5_tip_2";
fieldValue1114.children[48] = ProtoInstance1163;

let ProtoInstance1164 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1164.USE = "hanim_l_metacarpal_phalanx3";
fieldValue1114.children[49] = ProtoInstance1164;

let ProtoInstance1165 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1165.USE = "hanim_l_ulnar_styloid_2";
fieldValue1114.children[50] = ProtoInstance1165;

let ProtoInstance1166 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1166.USE = "hanim_l_metacarpal_phalanx6";
fieldValue1114.children[51] = ProtoInstance1166;

let ProtoInstance1167 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1167.USE = "hanim_l_radial_styloid_2";
fieldValue1114.children[52] = ProtoInstance1167;

let ProtoInstance1168 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1168.USE = "hanim_l_olecranon_2";
fieldValue1114.children[53] = ProtoInstance1168;

let ProtoInstance1169 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1169.USE = "hanim_l_humeral_medial_epicondyles_2";
fieldValue1114.children[54] = ProtoInstance1169;

let ProtoInstance1170 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1170.USE = "hanim_l_radiale_2";
fieldValue1114.children[55] = ProtoInstance1170;

let ProtoInstance1171 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1171.USE = "hanim_l_humeral_lateral_epicondyles_2";
fieldValue1114.children[56] = ProtoInstance1171;

let ProtoInstance1172 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1172.USE = "hanim_l_clavicale_2";
fieldValue1114.children[57] = ProtoInstance1172;

let ProtoInstance1173 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1173.USE = "hanim_l_acromion_2";
fieldValue1114.children[58] = ProtoInstance1173;

let ProtoInstance1174 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1174.USE = "hanim_l_axilla_proximal_2";
fieldValue1114.children[59] = ProtoInstance1174;

let ProtoInstance1175 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1175.USE = "hanim_l_axilla_distal_2";
fieldValue1114.children[60] = ProtoInstance1175;

let ProtoInstance1176 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1176.USE = "hanim_r_carpal_distal_phalanx_1_tip_2";
fieldValue1114.children[61] = ProtoInstance1176;

let ProtoInstance1177 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1177.USE = "hanim_r_carpal_distal_phalanx_2_tip_2";
fieldValue1114.children[62] = ProtoInstance1177;

let ProtoInstance1178 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1178.USE = "hanim_r_dactylion_2";
fieldValue1114.children[63] = ProtoInstance1178;

let ProtoInstance1179 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1179.USE = "hanim_r_carpal_distal_phalanx_3_tip_2";
fieldValue1114.children[64] = ProtoInstance1179;

let ProtoInstance1180 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1180.USE = "hanim_r_carpal_distal_phalanx_4_tip_2";
fieldValue1114.children[65] = ProtoInstance1180;

let ProtoInstance1181 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1181.USE = "hanim_r_carpal_distal_phalanx_5_tip_2";
fieldValue1114.children[66] = ProtoInstance1181;

let ProtoInstance1182 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1182.USE = "hanim_r_metacarpal_phalanx3";
fieldValue1114.children[67] = ProtoInstance1182;

let ProtoInstance1183 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1183.USE = "hanim_r_ulnar_styloid_2";
fieldValue1114.children[68] = ProtoInstance1183;

let ProtoInstance1184 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1184.USE = "hanim_r_metacarpal_phalanx6";
fieldValue1114.children[69] = ProtoInstance1184;

let ProtoInstance1185 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1185.USE = "hanim_r_radial_styloid_2";
fieldValue1114.children[70] = ProtoInstance1185;

let ProtoInstance1186 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1186.USE = "hanim_r_olecranon_2";
fieldValue1114.children[71] = ProtoInstance1186;

let ProtoInstance1187 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1187.USE = "hanim_r_humeral_medial_epicondyles_2";
fieldValue1114.children[72] = ProtoInstance1187;

let ProtoInstance1188 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1188.USE = "hanim_r_radiale_2";
fieldValue1114.children[73] = ProtoInstance1188;

let ProtoInstance1189 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1189.USE = "hanim_r_humeral_lateral_epicondyles_2";
fieldValue1114.children[74] = ProtoInstance1189;

let ProtoInstance1190 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1190.USE = "hanim_r_clavicale_2";
fieldValue1114.children[75] = ProtoInstance1190;

let ProtoInstance1191 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1191.USE = "hanim_r_acromion_2";
fieldValue1114.children[76] = ProtoInstance1191;

let ProtoInstance1192 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1192.USE = "hanim_r_axilla_proximal_2";
fieldValue1114.children[77] = ProtoInstance1192;

let ProtoInstance1193 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1193.USE = "hanim_r_axilla_distal_2";
fieldValue1114.children[78] = ProtoInstance1193;

let ProtoInstance1194 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1194.USE = "hanim_suprasternale_2";
fieldValue1114.children[79] = ProtoInstance1194;

let ProtoInstance1195 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1195.USE = "hanim_cervicale_2";
fieldValue1114.children[80] = ProtoInstance1195;

let ProtoInstance1196 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1196.USE = "hanim_r_thelion_2";
fieldValue1114.children[81] = ProtoInstance1196;

let ProtoInstance1197 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1197.USE = "hanim_l_thelion_2";
fieldValue1114.children[82] = ProtoInstance1197;

let ProtoInstance1198 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1198.USE = "hanim_substernale_2";
fieldValue1114.children[83] = ProtoInstance1198;

let ProtoInstance1199 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1199.USE = "hanim_r_rib10_2";
fieldValue1114.children[84] = ProtoInstance1199;

let ProtoInstance1200 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1200.USE = "hanim_l_rib10_2";
fieldValue1114.children[85] = ProtoInstance1200;

let ProtoInstance1201 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1201.USE = "hanim_spine_2_lower_back_2";
fieldValue1114.children[86] = ProtoInstance1201;

let ProtoInstance1202 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1202.USE = "hanim_waist_preferred_posterior_2";
fieldValue1114.children[87] = ProtoInstance1202;

let ProtoInstance1203 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1203.USE = "hanim_navel_2";
fieldValue1114.children[88] = ProtoInstance1203;

ProtoInstance98.fieldValue[2] = fieldValue1114;

let fieldValue1204 = browser.currentScene.createNode("fieldValue");
fieldValue1204.name = "segments";
let ProtoInstance1205 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1205.USE = "hanim_l_tarsal_distal_phalanx2";
fieldValue1204.children = new MFNode();

fieldValue1204.children[0] = ProtoInstance1205;

let ProtoInstance1206 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1206.USE = "hanim_l_middistal_2";
fieldValue1204.children[1] = ProtoInstance1206;

let ProtoInstance1207 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1207.USE = "hanim_l_midproximal_2";
fieldValue1204.children[2] = ProtoInstance1207;

let ProtoInstance1208 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1208.USE = "hanim_l_hindfoot_2";
fieldValue1204.children[3] = ProtoInstance1208;

let ProtoInstance1209 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1209.USE = "hanim_l_calf_2";
fieldValue1204.children[4] = ProtoInstance1209;

let ProtoInstance1210 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1210.USE = "hanim_l_thigh_2";
fieldValue1204.children[5] = ProtoInstance1210;

let ProtoInstance1211 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1211.USE = "hanim_r_tarsal_distal_phalanx2";
fieldValue1204.children[6] = ProtoInstance1211;

let ProtoInstance1212 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1212.USE = "hanim_r_middistal_2";
fieldValue1204.children[7] = ProtoInstance1212;

let ProtoInstance1213 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1213.USE = "hanim_r_midproximal_2";
fieldValue1204.children[8] = ProtoInstance1213;

let ProtoInstance1214 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1214.USE = "hanim_r_hindfoot_2";
fieldValue1204.children[9] = ProtoInstance1214;

let ProtoInstance1215 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1215.USE = "hanim_r_calf_2";
fieldValue1204.children[10] = ProtoInstance1215;

let ProtoInstance1216 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1216.USE = "hanim_r_thigh_2";
fieldValue1204.children[11] = ProtoInstance1216;

let ProtoInstance1217 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1217.USE = "hanim_pelvis_2";
fieldValue1204.children[12] = ProtoInstance1217;

let ProtoInstance1218 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1218.USE = "hanim_l_eyeball_4";
fieldValue1204.children[13] = ProtoInstance1218;

let ProtoInstance1219 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1219.USE = "hanim_r_eyeball_4";
fieldValue1204.children[14] = ProtoInstance1219;

let ProtoInstance1220 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1220.USE = "hanim_skull_2";
fieldValue1204.children[15] = ProtoInstance1220;

let ProtoInstance1221 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1221.USE = "hanim_c1_2";
fieldValue1204.children[16] = ProtoInstance1221;

let ProtoInstance1222 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1222.USE = "hanim_c2_2";
fieldValue1204.children[17] = ProtoInstance1222;

let ProtoInstance1223 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1223.USE = "hanim_c3_2";
fieldValue1204.children[18] = ProtoInstance1223;

let ProtoInstance1224 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1224.USE = "hanim_c4_2";
fieldValue1204.children[19] = ProtoInstance1224;

let ProtoInstance1225 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1225.USE = "hanim_c5_2";
fieldValue1204.children[20] = ProtoInstance1225;

let ProtoInstance1226 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1226.USE = "hanim_c6_2";
fieldValue1204.children[21] = ProtoInstance1226;

let ProtoInstance1227 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1227.USE = "hanim_c7_2";
fieldValue1204.children[22] = ProtoInstance1227;

let ProtoInstance1228 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1228.USE = "hanim_l_carpal_distal_phalanx2";
fieldValue1204.children[23] = ProtoInstance1228;

let ProtoInstance1229 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1229.USE = "hanim_l_index_proximal_6";
fieldValue1204.children[24] = ProtoInstance1229;

let ProtoInstance1230 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1230.USE = "hanim_l_index_proximal_6";
fieldValue1204.children[25] = ProtoInstance1230;

let ProtoInstance1231 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1231.USE = "hanim_l_carpal_distal_phalanx3";
fieldValue1204.children[26] = ProtoInstance1231;

let ProtoInstance1232 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1232.USE = "hanim_l_index_middle_2";
fieldValue1204.children[27] = ProtoInstance1232;

let ProtoInstance1233 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1233.USE = "hanim_l_index_proximal_6";
fieldValue1204.children[28] = ProtoInstance1233;

let ProtoInstance1234 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1234.USE = "hanim_l_index_metacarpal_2";
fieldValue1204.children[29] = ProtoInstance1234;

let ProtoInstance1235 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1235.USE = "hanim_l_carpal_distal_phalanx4";
fieldValue1204.children[30] = ProtoInstance1235;

let ProtoInstance1236 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1236.USE = "hanim_l_middle_middle_2";
fieldValue1204.children[31] = ProtoInstance1236;

let ProtoInstance1237 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1237.USE = "hanim_l_middle_proximal_2";
fieldValue1204.children[32] = ProtoInstance1237;

let ProtoInstance1238 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1238.USE = "hanim_l_middle_metacarpal_2";
fieldValue1204.children[33] = ProtoInstance1238;

let ProtoInstance1239 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1239.USE = "hanim_l_carpal_distal_phalanx5";
fieldValue1204.children[34] = ProtoInstance1239;

let ProtoInstance1240 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1240.USE = "hanim_l_ring_middle_2";
fieldValue1204.children[35] = ProtoInstance1240;

let ProtoInstance1241 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1241.USE = "hanim_l_ring_proximal_2";
fieldValue1204.children[36] = ProtoInstance1241;

let ProtoInstance1242 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1242.USE = "hanim_l_ring_metacarpal_2";
fieldValue1204.children[37] = ProtoInstance1242;

let ProtoInstance1243 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1243.USE = "hanim_l_carpal_distal_phalanx6";
fieldValue1204.children[38] = ProtoInstance1243;

let ProtoInstance1244 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1244.USE = "hanim_l_pinky_middle_2";
fieldValue1204.children[39] = ProtoInstance1244;

let ProtoInstance1245 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1245.USE = "hanim_l_pinky_proximal_2";
fieldValue1204.children[40] = ProtoInstance1245;

let ProtoInstance1246 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1246.USE = "hanim_l_pinky_metacarpal_2";
fieldValue1204.children[41] = ProtoInstance1246;

let ProtoInstance1247 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1247.USE = "hanim_l_hand_2";
fieldValue1204.children[42] = ProtoInstance1247;

let ProtoInstance1248 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1248.USE = "hanim_l_forearm_2";
fieldValue1204.children[43] = ProtoInstance1248;

let ProtoInstance1249 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1249.USE = "hanim_l_upperarm_2";
fieldValue1204.children[44] = ProtoInstance1249;

let ProtoInstance1250 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1250.USE = "hanim_l_scapula_2";
fieldValue1204.children[45] = ProtoInstance1250;

let ProtoInstance1251 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1251.USE = "hanim_l_clavicle_2";
fieldValue1204.children[46] = ProtoInstance1251;

let ProtoInstance1252 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1252.USE = "hanim_r_carpal_distal_phalanx2";
fieldValue1204.children[47] = ProtoInstance1252;

let ProtoInstance1253 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1253.USE = "hanim_r_index_proximal_6";
fieldValue1204.children[48] = ProtoInstance1253;

let ProtoInstance1254 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1254.USE = "hanim_r_index_proximal_6";
fieldValue1204.children[49] = ProtoInstance1254;

let ProtoInstance1255 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1255.USE = "hanim_r_carpal_distal_phalanx3";
fieldValue1204.children[50] = ProtoInstance1255;

let ProtoInstance1256 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1256.USE = "hanim_r_index_middle_2";
fieldValue1204.children[51] = ProtoInstance1256;

let ProtoInstance1257 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1257.USE = "hanim_r_index_proximal_6";
fieldValue1204.children[52] = ProtoInstance1257;

let ProtoInstance1258 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1258.USE = "hanim_r_index_metacarpal_2";
fieldValue1204.children[53] = ProtoInstance1258;

let ProtoInstance1259 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1259.USE = "hanim_r_carpal_distal_phalanx4";
fieldValue1204.children[54] = ProtoInstance1259;

let ProtoInstance1260 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1260.USE = "hanim_r_middle_middle_2";
fieldValue1204.children[55] = ProtoInstance1260;

let ProtoInstance1261 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1261.USE = "hanim_r_middle_proximal_2";
fieldValue1204.children[56] = ProtoInstance1261;

let ProtoInstance1262 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1262.USE = "hanim_r_middle_metacarpal_2";
fieldValue1204.children[57] = ProtoInstance1262;

let ProtoInstance1263 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1263.USE = "hanim_r_carpal_distal_phalanx5";
fieldValue1204.children[58] = ProtoInstance1263;

let ProtoInstance1264 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1264.USE = "hanim_r_ring_middle_2";
fieldValue1204.children[59] = ProtoInstance1264;

let ProtoInstance1265 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1265.USE = "hanim_r_ring_proximal_2";
fieldValue1204.children[60] = ProtoInstance1265;

let ProtoInstance1266 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1266.USE = "hanim_r_ring_metacarpal_2";
fieldValue1204.children[61] = ProtoInstance1266;

let ProtoInstance1267 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1267.USE = "hanim_r_carpal_distal_phalanx6";
fieldValue1204.children[62] = ProtoInstance1267;

let ProtoInstance1268 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1268.USE = "hanim_r_pinky_middle_2";
fieldValue1204.children[63] = ProtoInstance1268;

let ProtoInstance1269 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1269.USE = "hanim_r_pinky_proximal_2";
fieldValue1204.children[64] = ProtoInstance1269;

let ProtoInstance1270 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1270.USE = "hanim_r_pinky_metacarpal_2";
fieldValue1204.children[65] = ProtoInstance1270;

let ProtoInstance1271 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1271.USE = "hanim_r_hand_2";
fieldValue1204.children[66] = ProtoInstance1271;

let ProtoInstance1272 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1272.USE = "hanim_r_forearm_2";
fieldValue1204.children[67] = ProtoInstance1272;

let ProtoInstance1273 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1273.USE = "hanim_r_upperarm_2";
fieldValue1204.children[68] = ProtoInstance1273;

let ProtoInstance1274 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1274.USE = "hanim_r_scapula_2";
fieldValue1204.children[69] = ProtoInstance1274;

let ProtoInstance1275 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1275.USE = "hanim_r_clavicle_2";
fieldValue1204.children[70] = ProtoInstance1275;

let ProtoInstance1276 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1276.USE = "hanim_t1_2";
fieldValue1204.children[71] = ProtoInstance1276;

let ProtoInstance1277 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1277.USE = "hanim_t2_2";
fieldValue1204.children[72] = ProtoInstance1277;

let ProtoInstance1278 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1278.USE = "hanim_t3_2";
fieldValue1204.children[73] = ProtoInstance1278;

let ProtoInstance1279 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1279.USE = "hanim_t4_2";
fieldValue1204.children[74] = ProtoInstance1279;

let ProtoInstance1280 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1280.USE = "hanim_t5_2";
fieldValue1204.children[75] = ProtoInstance1280;

let ProtoInstance1281 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1281.USE = "hanim_t6_2";
fieldValue1204.children[76] = ProtoInstance1281;

let ProtoInstance1282 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1282.USE = "hanim_t7_2";
fieldValue1204.children[77] = ProtoInstance1282;

let ProtoInstance1283 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1283.USE = "hanim_t8_2";
fieldValue1204.children[78] = ProtoInstance1283;

let ProtoInstance1284 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1284.USE = "hanim_t9_2";
fieldValue1204.children[79] = ProtoInstance1284;

let ProtoInstance1285 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1285.USE = "hanim_t10_2";
fieldValue1204.children[80] = ProtoInstance1285;

let ProtoInstance1286 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1286.USE = "hanim_t11_2";
fieldValue1204.children[81] = ProtoInstance1286;

let ProtoInstance1287 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1287.USE = "hanim_t12_2";
fieldValue1204.children[82] = ProtoInstance1287;

let ProtoInstance1288 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1288.USE = "hanim_l1_2";
fieldValue1204.children[83] = ProtoInstance1288;

let ProtoInstance1289 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1289.USE = "hanim_l2_2";
fieldValue1204.children[84] = ProtoInstance1289;

let ProtoInstance1290 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1290.USE = "hanim_l3_2";
fieldValue1204.children[85] = ProtoInstance1290;

let ProtoInstance1291 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1291.USE = "hanim_l4_2";
fieldValue1204.children[86] = ProtoInstance1291;

let ProtoInstance1292 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1292.USE = "hanim_l5_2";
fieldValue1204.children[87] = ProtoInstance1292;

let ProtoInstance1293 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1293.USE = "hanim_sacrum_2";
fieldValue1204.children[88] = ProtoInstance1293;

ProtoInstance98.fieldValue[3] = fieldValue1204;

let fieldValue1294 = browser.currentScene.createNode("fieldValue");
fieldValue1294.name = "name";
fieldValue1294.value = "humanoid";
ProtoInstance98.fieldValue[4] = fieldValue1294;

let fieldValue1295 = browser.currentScene.createNode("fieldValue");
fieldValue1295.name = "info";
fieldValue1295.value = "\"authorName=Matthew T. Beitler\" \"authorEmail=beitler@cis.upenn.edu or beitler@acm.org\" \"creationDate=05/12/99\" \"copyright=Copyright 1999-2003, Matthew T. Beitler\" \"humanoidVersion=JointCenters 200x, LOA&#8209;4\" \"usageRestrictions= PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED, PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided 'as-is' and without warranty of any kind, express, implied or otherwise, including without limitation, any warranty of merchantability or fitness for a particular purpose.\" \"modificationDate=08/12/03\"";
ProtoInstance98.fieldValue[5] = fieldValue1295;

browser.currentScene.children[4] = ProtoInstance98;

let Group1296 = browser.currentScene.createNode("Group");
Group1296.DEF = "JointCenters_WorldInfo";
let WorldInfo1297 = browser.currentScene.createNode("WorldInfo");
WorldInfo1297.title = "HANIM 200x Default Joint Centers, LOA&#8209;4";
WorldInfo1297.info = new MFString(new java.lang.String[" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 --------------------------------------------------------- HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://H-Anim.org/Specifications/H-Anim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human modelling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "]);
Group1296.children = new MFNode();

Group1296.children[0] = WorldInfo1297;

browser.currentScene.children[5] = Group1296;

let NavigationInfo1298 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo1298.avatarSize = new MFFloat(new float[0.25,1.60000002384186,0.75]);
NavigationInfo1298.speed = 1.5;
browser.currentScene.children[6] = NavigationInfo1298;

