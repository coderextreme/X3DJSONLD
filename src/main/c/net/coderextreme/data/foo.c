#include "/c/x3d-code/www.web3d.org/x3d/languages/c/X3DLib/X3DLib.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Interchange";
X3D0.version = "3.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "generator";
meta2.content = "tovrmlx3d, http://castle-engine.sourceforge.net/view3dscene.php#section_converting";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "source";
meta3.content = "LOA0ExampleSourceInVRML.wrl";
head1.meta[1] = meta3;

head = head1;

ProtoDeclare ProtoDeclare5 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoDeclare5.name = "Humanoid";
ProtoInterface ProtoInterface6 = createNode("ProtoInterface");
field field7 = createNode("field");
field7.name = "center";
field7.accessType = "inputOutput";
field7.type = "SFVec3f";
field7.value = "0 0 0";
ProtoInterface6.field = new MFNode();

ProtoInterface6.field[0] = field7;

field field8 = createNode("field");
field8.name = "humanoidBody";
field8.accessType = "inputOutput";
field8.type = "MFNode";
ProtoInterface6.field[1] = field8;

field field9 = createNode("field");
field9.name = "info";
field9.accessType = "inputOutput";
field9.type = "MFString";
ProtoInterface6.field[2] = field9;

field field10 = createNode("field");
field10.name = "joints";
field10.accessType = "inputOutput";
field10.type = "MFNode";
ProtoInterface6.field[3] = field10;

field field11 = createNode("field");
field11.name = "name";
field11.accessType = "inputOutput";
field11.type = "SFString";
ProtoInterface6.field[4] = field11;

field field12 = createNode("field");
field12.name = "rotation";
field12.accessType = "inputOutput";
field12.type = "SFRotation";
field12.value = "0 0 1 0";
ProtoInterface6.field[5] = field12;

field field13 = createNode("field");
field13.name = "scale";
field13.accessType = "inputOutput";
field13.type = "SFVec3f";
field13.value = "1 1 1";
ProtoInterface6.field[6] = field13;

field field14 = createNode("field");
field14.name = "scaleOrientation";
field14.accessType = "inputOutput";
field14.type = "SFRotation";
field14.value = "0 0 1 0";
ProtoInterface6.field[7] = field14;

field field15 = createNode("field");
field15.name = "segments";
field15.accessType = "inputOutput";
field15.type = "MFNode";
ProtoInterface6.field[8] = field15;

field field16 = createNode("field");
field16.name = "sites";
field16.accessType = "inputOutput";
field16.type = "MFNode";
ProtoInterface6.field[9] = field16;

field field17 = createNode("field");
field17.name = "translation";
field17.accessType = "inputOutput";
field17.type = "SFVec3f";
field17.value = "0 0 0";
ProtoInterface6.field[10] = field17;

field field18 = createNode("field");
field18.name = "version";
field18.accessType = "inputOutput";
field18.type = "SFString";
field18.value = "200x";
ProtoInterface6.field[11] = field18;

field field19 = createNode("field");
field19.name = "viewpoints";
field19.accessType = "inputOutput";
field19.type = "MFNode";
ProtoInterface6.field[12] = field19;

field field20 = createNode("field");
field20.name = "bboxCenter";
field20.accessType = "initializeOnly";
field20.type = "SFVec3f";
field20.value = "0 0 0";
ProtoInterface6.field[13] = field20;

field field21 = createNode("field");
field21.name = "bboxSize";
field21.accessType = "initializeOnly";
field21.type = "SFVec3f";
field21.value = "-1 -1 -1";
ProtoInterface6.field[14] = field21;

ProtoDeclare5.protoInterface = ProtoInterface6;

ProtoBody ProtoBody22 = createNode("ProtoBody");
Transform Transform23 = createNode("Transform");
Group Group24 = createNode("Group");
IS IS25 = createNode("IS");
connect connect26 = createNode("connect");
connect26.nodeField = "children";
connect26.protoField = "humanoidBody";
IS25.connect = new MFNode();

IS25.connect[0] = connect26;

Group24.iS = IS25;

Transform23.children = new MFNode();

Transform23.children[0] = Group24;

Group Group27 = createNode("Group");
IS IS28 = createNode("IS");
connect connect29 = createNode("connect");
connect29.nodeField = "children";
connect29.protoField = "viewpoints";
IS28.connect = new MFNode();

IS28.connect[0] = connect29;

Group27.iS = IS28;

Transform23.children[1] = Group27;

IS IS30 = createNode("IS");
connect connect31 = createNode("connect");
connect31.nodeField = "center";
connect31.protoField = "center";
IS30.connect = new MFNode();

IS30.connect[0] = connect31;

connect connect32 = createNode("connect");
connect32.nodeField = "rotation";
connect32.protoField = "rotation";
IS30.connect[1] = connect32;

connect connect33 = createNode("connect");
connect33.nodeField = "scale";
connect33.protoField = "scale";
IS30.connect[2] = connect33;

connect connect34 = createNode("connect");
connect34.nodeField = "scaleOrientation";
connect34.protoField = "scaleOrientation";
IS30.connect[3] = connect34;

connect connect35 = createNode("connect");
connect35.nodeField = "translation";
connect35.protoField = "translation";
IS30.connect[4] = connect35;

Transform23.iS = IS30;

ProtoBody22.children = new MFNode();

ProtoBody22.children[0] = Transform23;

ProtoDeclare5.protoBody = ProtoBody22;

children = new MFNode();

children[0] = ProtoDeclare5;

ProtoDeclare ProtoDeclare36 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoDeclare36.name = "Joint";
ProtoInterface ProtoInterface37 = createNode("ProtoInterface");
field field38 = createNode("field");
field38.name = "center";
field38.accessType = "inputOutput";
field38.type = "SFVec3f";
field38.value = "0 0 0";
ProtoInterface37.field = new MFNode();

ProtoInterface37.field[0] = field38;

field field39 = createNode("field");
field39.name = "children";
field39.accessType = "inputOutput";
field39.type = "MFNode";
ProtoInterface37.field[1] = field39;

field field40 = createNode("field");
field40.name = "limitOrientation";
field40.accessType = "inputOutput";
field40.type = "SFRotation";
field40.value = "0 0 1 0";
ProtoInterface37.field[2] = field40;

field field41 = createNode("field");
field41.name = "llimit";
field41.accessType = "inputOutput";
field41.type = "MFFloat";
ProtoInterface37.field[3] = field41;

field field42 = createNode("field");
field42.name = "name";
field42.accessType = "inputOutput";
field42.type = "SFString";
ProtoInterface37.field[4] = field42;

field field43 = createNode("field");
field43.name = "rotation";
field43.accessType = "inputOutput";
field43.type = "SFRotation";
field43.value = "0 0 1 0";
ProtoInterface37.field[5] = field43;

field field44 = createNode("field");
field44.name = "scale";
field44.accessType = "inputOutput";
field44.type = "SFVec3f";
field44.value = "1 1 1";
ProtoInterface37.field[6] = field44;

field field45 = createNode("field");
field45.name = "scaleOrientation";
field45.accessType = "inputOutput";
field45.type = "SFRotation";
field45.value = "0 0 1 0";
ProtoInterface37.field[7] = field45;

field field46 = createNode("field");
field46.name = "stiffness";
field46.accessType = "inputOutput";
field46.type = "MFFloat";
field46.value = "1 1 1";
ProtoInterface37.field[8] = field46;

field field47 = createNode("field");
field47.name = "translation";
field47.accessType = "inputOutput";
field47.type = "SFVec3f";
field47.value = "0 0 0";
ProtoInterface37.field[9] = field47;

field field48 = createNode("field");
field48.name = "ulimit";
field48.accessType = "inputOutput";
field48.type = "MFFloat";
ProtoInterface37.field[10] = field48;

ProtoDeclare36.protoInterface = ProtoInterface37;

ProtoBody ProtoBody49 = createNode("ProtoBody");
Transform Transform50 = createNode("Transform");
IS IS51 = createNode("IS");
connect connect52 = createNode("connect");
connect52.nodeField = "children";
connect52.protoField = "children";
IS51.connect = new MFNode();

IS51.connect[0] = connect52;

connect connect53 = createNode("connect");
connect53.nodeField = "center";
connect53.protoField = "center";
IS51.connect[1] = connect53;

connect connect54 = createNode("connect");
connect54.nodeField = "rotation";
connect54.protoField = "rotation";
IS51.connect[2] = connect54;

connect connect55 = createNode("connect");
connect55.nodeField = "scale";
connect55.protoField = "scale";
IS51.connect[3] = connect55;

connect connect56 = createNode("connect");
connect56.nodeField = "scaleOrientation";
connect56.protoField = "scaleOrientation";
IS51.connect[4] = connect56;

connect connect57 = createNode("connect");
connect57.nodeField = "translation";
connect57.protoField = "translation";
IS51.connect[5] = connect57;

Transform50.iS = IS51;

ProtoBody49.children = new MFNode();

ProtoBody49.children[0] = Transform50;

ProtoDeclare36.protoBody = ProtoBody49;

children[1] = ProtoDeclare36;

ProtoDeclare ProtoDeclare58 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoDeclare58.name = "Segment";
ProtoInterface ProtoInterface59 = createNode("ProtoInterface");
field field60 = createNode("field");
field60.name = "addChildren";
field60.accessType = "inputOnly";
field60.type = "MFNode";
ProtoInterface59.field = new MFNode();

ProtoInterface59.field[0] = field60;

field field61 = createNode("field");
field61.name = "removeChildren";
field61.accessType = "inputOnly";
field61.type = "MFNode";
ProtoInterface59.field[1] = field61;

field field62 = createNode("field");
field62.name = "centerOfMass";
field62.accessType = "inputOutput";
field62.type = "SFVec3f";
field62.value = "0 0 0";
ProtoInterface59.field[2] = field62;

field field63 = createNode("field");
field63.name = "children";
field63.accessType = "inputOutput";
field63.type = "MFNode";
ProtoInterface59.field[3] = field63;

field field64 = createNode("field");
field64.name = "coord";
field64.accessType = "inputOutput";
field64.type = "SFNode";
field64.value = ;
ProtoInterface59.field[4] = field64;

field field65 = createNode("field");
field65.name = "displacers";
field65.accessType = "inputOutput";
field65.type = "MFNode";
ProtoInterface59.field[5] = field65;

field field66 = createNode("field");
field66.name = "name";
field66.accessType = "inputOutput";
field66.type = "SFString";
ProtoInterface59.field[6] = field66;

field field67 = createNode("field");
field67.name = "mass";
field67.accessType = "inputOutput";
field67.type = "SFFloat";
field67.value = "0";
ProtoInterface59.field[7] = field67;

field field68 = createNode("field");
field68.name = "momentsOfInertia";
field68.accessType = "inputOutput";
field68.type = "SFVec3f";
field68.value = "1 1 1";
ProtoInterface59.field[8] = field68;

field field69 = createNode("field");
field69.name = "bboxCenter";
field69.accessType = "initializeOnly";
field69.type = "SFVec3f";
field69.value = "0 0 0";
ProtoInterface59.field[9] = field69;

field field70 = createNode("field");
field70.name = "bboxSize";
field70.accessType = "initializeOnly";
field70.type = "SFVec3f";
field70.value = "-1 -1 -1";
ProtoInterface59.field[10] = field70;

ProtoDeclare58.protoInterface = ProtoInterface59;

ProtoBody ProtoBody71 = createNode("ProtoBody");
Group Group72 = createNode("Group");
IS IS73 = createNode("IS");
connect connect74 = createNode("connect");
connect74.nodeField = "children";
connect74.protoField = "children";
IS73.connect = new MFNode();

IS73.connect[0] = connect74;

connect connect75 = createNode("connect");
connect75.nodeField = "bboxCenter";
connect75.protoField = "bboxCenter";
IS73.connect[1] = connect75;

connect connect76 = createNode("connect");
connect76.nodeField = "bboxSize";
connect76.protoField = "bboxSize";
IS73.connect[2] = connect76;

connect connect77 = createNode("connect");
connect77.nodeField = "addChildren";
connect77.protoField = "addChildren";
IS73.connect[3] = connect77;

connect connect78 = createNode("connect");
connect78.nodeField = "removeChildren";
connect78.protoField = "removeChildren";
IS73.connect[4] = connect78;

Group72.iS = IS73;

ProtoBody71.children = new MFNode();

ProtoBody71.children[0] = Group72;

ProtoDeclare58.protoBody = ProtoBody71;

children[2] = ProtoDeclare58;

ProtoDeclare ProtoDeclare79 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoDeclare79.name = "Site";
ProtoInterface ProtoInterface80 = createNode("ProtoInterface");
field field81 = createNode("field");
field81.name = "addChildren";
field81.accessType = "inputOnly";
field81.type = "MFNode";
ProtoInterface80.field = new MFNode();

ProtoInterface80.field[0] = field81;

field field82 = createNode("field");
field82.name = "removeChildren";
field82.accessType = "inputOnly";
field82.type = "MFNode";
ProtoInterface80.field[1] = field82;

field field83 = createNode("field");
field83.name = "center";
field83.accessType = "inputOutput";
field83.type = "SFVec3f";
field83.value = "0 0 0";
ProtoInterface80.field[2] = field83;

field field84 = createNode("field");
field84.name = "children";
field84.accessType = "inputOutput";
field84.type = "MFNode";
ProtoInterface80.field[3] = field84;

field field85 = createNode("field");
field85.name = "name";
field85.accessType = "inputOutput";
field85.type = "SFString";
ProtoInterface80.field[4] = field85;

field field86 = createNode("field");
field86.name = "rotation";
field86.accessType = "inputOutput";
field86.type = "SFRotation";
field86.value = "0 0 1 0";
ProtoInterface80.field[5] = field86;

field field87 = createNode("field");
field87.name = "scale";
field87.accessType = "inputOutput";
field87.type = "SFVec3f";
field87.value = "1 1 1";
ProtoInterface80.field[6] = field87;

field field88 = createNode("field");
field88.name = "scaleOrientation";
field88.accessType = "inputOutput";
field88.type = "SFRotation";
field88.value = "0 0 1 0";
ProtoInterface80.field[7] = field88;

field field89 = createNode("field");
field89.name = "translation";
field89.accessType = "inputOutput";
field89.type = "SFVec3f";
field89.value = "0 0 0";
ProtoInterface80.field[8] = field89;

ProtoDeclare79.protoInterface = ProtoInterface80;

ProtoBody ProtoBody90 = createNode("ProtoBody");
Transform Transform91 = createNode("Transform");
IS IS92 = createNode("IS");
connect connect93 = createNode("connect");
connect93.nodeField = "children";
connect93.protoField = "children";
IS92.connect = new MFNode();

IS92.connect[0] = connect93;

connect connect94 = createNode("connect");
connect94.nodeField = "center";
connect94.protoField = "center";
IS92.connect[1] = connect94;

connect connect95 = createNode("connect");
connect95.nodeField = "rotation";
connect95.protoField = "rotation";
IS92.connect[2] = connect95;

connect connect96 = createNode("connect");
connect96.nodeField = "scale";
connect96.protoField = "scale";
IS92.connect[3] = connect96;

connect connect97 = createNode("connect");
connect97.nodeField = "scaleOrientation";
connect97.protoField = "scaleOrientation";
IS92.connect[4] = connect97;

connect connect98 = createNode("connect");
connect98.nodeField = "translation";
connect98.protoField = "translation";
IS92.connect[5] = connect98;

connect connect99 = createNode("connect");
connect99.nodeField = "addChildren";
connect99.protoField = "addChildren";
IS92.connect[6] = connect99;

connect connect100 = createNode("connect");
connect100.nodeField = "removeChildren";
connect100.protoField = "removeChildren";
IS92.connect[7] = connect100;

Transform91.iS = IS92;

ProtoBody90.children = new MFNode();

ProtoBody90.children[0] = Transform91;

ProtoDeclare79.protoBody = ProtoBody90;

children[3] = ProtoDeclare79;

ProtoInstance ProtoInstance101 = createNode("ProtoInstance");
ProtoInstance101.name = "Humanoid";
ProtoInstance101.DEF = "humanoid";
fieldValue fieldValue102 = createNode("fieldValue");
fieldValue102.name = "humanoidBody";
ProtoInstance ProtoInstance103 = createNode("ProtoInstance");
ProtoInstance103.name = "Joint";
ProtoInstance103.DEF = "hanim_humanoid_root";
fieldValue fieldValue104 = createNode("fieldValue");
fieldValue104.name = "stiffness";
fieldValue104.value = "1 1 1";
ProtoInstance103.fieldValue = new MFNode();

ProtoInstance103.fieldValue[0] = fieldValue104;

fieldValue fieldValue105 = createNode("fieldValue");
fieldValue105.name = "name";
fieldValue105.value = "humanoid_root";
ProtoInstance103.fieldValue[1] = fieldValue105;

fieldValue fieldValue106 = createNode("fieldValue");
fieldValue106.name = "center";
fieldValue106.value = "0 0.8240000009536743 0.027699999511241913";
ProtoInstance103.fieldValue[2] = fieldValue106;

fieldValue fieldValue107 = createNode("fieldValue");
fieldValue107.name = "children";
ProtoInstance ProtoInstance108 = createNode("ProtoInstance");
ProtoInstance108.name = "Segment";
ProtoInstance108.DEF = "hanim_sacrum";
fieldValue fieldValue109 = createNode("fieldValue");
fieldValue109.name = "name";
fieldValue109.value = "sacrum";
ProtoInstance108.fieldValue = new MFNode();

ProtoInstance108.fieldValue[0] = fieldValue109;

fieldValue fieldValue110 = createNode("fieldValue");
fieldValue110.name = "children";
ProtoInstance ProtoInstance111 = createNode("ProtoInstance");
ProtoInstance111.name = "Site";
ProtoInstance111.DEF = "hanim_skull_tip";
fieldValue fieldValue112 = createNode("fieldValue");
fieldValue112.name = "name";
fieldValue112.value = "skull_tip";
ProtoInstance111.fieldValue = new MFNode();

ProtoInstance111.fieldValue[0] = fieldValue112;

fieldValue fieldValue113 = createNode("fieldValue");
fieldValue113.name = "translation";
fieldValue113.value = "0.004999999888241291 1.7503999471664429 0.005499999970197678";
ProtoInstance111.fieldValue[1] = fieldValue113;

fieldValue110.children = new MFNode();

fieldValue110.children[0] = ProtoInstance111;

ProtoInstance ProtoInstance114 = createNode("ProtoInstance");
ProtoInstance114.name = "Site";
ProtoInstance114.DEF = "hanim_sellion";
fieldValue fieldValue115 = createNode("fieldValue");
fieldValue115.name = "name";
fieldValue115.value = "sellion";
ProtoInstance114.fieldValue = new MFNode();

ProtoInstance114.fieldValue[0] = fieldValue115;

fieldValue fieldValue116 = createNode("fieldValue");
fieldValue116.name = "translation";
fieldValue116.value = "0.005799999926239252 1.631600022315979 0.0851999968290329";
ProtoInstance114.fieldValue[1] = fieldValue116;

fieldValue110.children[1] = ProtoInstance114;

ProtoInstance ProtoInstance117 = createNode("ProtoInstance");
ProtoInstance117.name = "Site";
ProtoInstance117.DEF = "hanim_r_infraorbitale";
fieldValue fieldValue118 = createNode("fieldValue");
fieldValue118.name = "name";
fieldValue118.value = "r_infraorbitale";
ProtoInstance117.fieldValue = new MFNode();

ProtoInstance117.fieldValue[0] = fieldValue118;

fieldValue fieldValue119 = createNode("fieldValue");
fieldValue119.name = "translation";
fieldValue119.value = "-0.02370000071823597 1.6171000003814697 0.07519999891519547";
ProtoInstance117.fieldValue[1] = fieldValue119;

fieldValue110.children[2] = ProtoInstance117;

ProtoInstance ProtoInstance120 = createNode("ProtoInstance");
ProtoInstance120.name = "Site";
ProtoInstance120.DEF = "hanim_l_infraorbitale";
fieldValue fieldValue121 = createNode("fieldValue");
fieldValue121.name = "name";
fieldValue121.value = "l_infraorbitale";
ProtoInstance120.fieldValue = new MFNode();

ProtoInstance120.fieldValue[0] = fieldValue121;

fieldValue fieldValue122 = createNode("fieldValue");
fieldValue122.name = "translation";
fieldValue122.value = "0.0340999998152256 1.6171000003814697 0.07519999891519547";
ProtoInstance120.fieldValue[1] = fieldValue122;

fieldValue110.children[3] = ProtoInstance120;

ProtoInstance ProtoInstance123 = createNode("ProtoInstance");
ProtoInstance123.name = "Site";
ProtoInstance123.DEF = "hanim_supramenton";
fieldValue fieldValue124 = createNode("fieldValue");
fieldValue124.name = "name";
fieldValue124.value = "supramenton";
ProtoInstance123.fieldValue = new MFNode();

ProtoInstance123.fieldValue[0] = fieldValue124;

fieldValue fieldValue125 = createNode("fieldValue");
fieldValue125.name = "translation";
fieldValue125.value = "0.006099999882280827 1.5410000085830688 0.08049999922513962";
ProtoInstance123.fieldValue[1] = fieldValue125;

fieldValue110.children[4] = ProtoInstance123;

ProtoInstance ProtoInstance126 = createNode("ProtoInstance");
ProtoInstance126.name = "Site";
ProtoInstance126.DEF = "hanim_r_tragion";
fieldValue fieldValue127 = createNode("fieldValue");
fieldValue127.name = "name";
fieldValue127.value = "r_tragion";
ProtoInstance126.fieldValue = new MFNode();

ProtoInstance126.fieldValue[0] = fieldValue127;

fieldValue fieldValue128 = createNode("fieldValue");
fieldValue128.name = "translation";
fieldValue128.value = "-0.06459999829530716 1.6346999406814575 0.03020000085234642";
ProtoInstance126.fieldValue[1] = fieldValue128;

fieldValue110.children[5] = ProtoInstance126;

ProtoInstance ProtoInstance129 = createNode("ProtoInstance");
ProtoInstance129.name = "Site";
ProtoInstance129.DEF = "hanim_r_gonion";
fieldValue fieldValue130 = createNode("fieldValue");
fieldValue130.name = "name";
fieldValue130.value = "r_gonion";
ProtoInstance129.fieldValue = new MFNode();

ProtoInstance129.fieldValue[0] = fieldValue130;

fieldValue fieldValue131 = createNode("fieldValue");
fieldValue131.name = "translation";
fieldValue131.value = "-0.052000001072883606 1.552899956703186 0.034699998795986176";
ProtoInstance129.fieldValue[1] = fieldValue131;

fieldValue110.children[6] = ProtoInstance129;

ProtoInstance ProtoInstance132 = createNode("ProtoInstance");
ProtoInstance132.name = "Site";
ProtoInstance132.DEF = "hanim_l_tragion";
fieldValue fieldValue133 = createNode("fieldValue");
fieldValue133.name = "name";
fieldValue133.value = "l_tragion";
ProtoInstance132.fieldValue = new MFNode();

ProtoInstance132.fieldValue[0] = fieldValue133;

fieldValue fieldValue134 = createNode("fieldValue");
fieldValue134.name = "translation";
fieldValue134.value = "0.0738999992609024 1.6347999572753906 0.028200000524520874";
ProtoInstance132.fieldValue[1] = fieldValue134;

fieldValue110.children[7] = ProtoInstance132;

ProtoInstance ProtoInstance135 = createNode("ProtoInstance");
ProtoInstance135.name = "Site";
ProtoInstance135.DEF = "hanim_l_gonion";
fieldValue fieldValue136 = createNode("fieldValue");
fieldValue136.name = "name";
fieldValue136.value = "l_gonion";
ProtoInstance135.fieldValue = new MFNode();

ProtoInstance135.fieldValue[0] = fieldValue136;

fieldValue fieldValue137 = createNode("fieldValue");
fieldValue137.name = "translation";
fieldValue137.value = "0.06310000270605087 1.5529999732971191 0.032999999821186066";
ProtoInstance135.fieldValue[1] = fieldValue137;

fieldValue110.children[8] = ProtoInstance135;

ProtoInstance ProtoInstance138 = createNode("ProtoInstance");
ProtoInstance138.name = "Site";
ProtoInstance138.DEF = "hanim_nuchale";
fieldValue fieldValue139 = createNode("fieldValue");
fieldValue139.name = "name";
fieldValue139.value = "nuchale";
ProtoInstance138.fieldValue = new MFNode();

ProtoInstance138.fieldValue[0] = fieldValue139;

fieldValue fieldValue140 = createNode("fieldValue");
fieldValue140.name = "translation";
fieldValue140.value = "0.0038999998942017555 1.5972000360488892 -0.07959999889135361";
ProtoInstance138.fieldValue[1] = fieldValue140;

fieldValue110.children[9] = ProtoInstance138;

ProtoInstance ProtoInstance141 = createNode("ProtoInstance");
ProtoInstance141.name = "Site";
ProtoInstance141.DEF = "hanim_r_clavicale";
fieldValue fieldValue142 = createNode("fieldValue");
fieldValue142.name = "name";
fieldValue142.value = "r_clavicale";
ProtoInstance141.fieldValue = new MFNode();

ProtoInstance141.fieldValue[0] = fieldValue142;

fieldValue fieldValue143 = createNode("fieldValue");
fieldValue143.name = "translation";
fieldValue143.value = "-0.011500000022351742 1.4943000078201294 0.03999999910593033";
ProtoInstance141.fieldValue[1] = fieldValue143;

fieldValue110.children[10] = ProtoInstance141;

ProtoInstance ProtoInstance144 = createNode("ProtoInstance");
ProtoInstance144.name = "Site";
ProtoInstance144.DEF = "hanim_suprasternale";
fieldValue fieldValue145 = createNode("fieldValue");
fieldValue145.name = "name";
fieldValue145.value = "suprasternale";
ProtoInstance144.fieldValue = new MFNode();

ProtoInstance144.fieldValue[0] = fieldValue145;

fieldValue fieldValue146 = createNode("fieldValue");
fieldValue146.name = "translation";
fieldValue146.value = "0.00839999970048666 1.4714000225067139 0.05510000139474869";
ProtoInstance144.fieldValue[1] = fieldValue146;

fieldValue110.children[11] = ProtoInstance144;

ProtoInstance ProtoInstance147 = createNode("ProtoInstance");
ProtoInstance147.name = "Site";
ProtoInstance147.DEF = "hanim_l_clavicale";
fieldValue fieldValue148 = createNode("fieldValue");
fieldValue148.name = "name";
fieldValue148.value = "l_clavicale";
ProtoInstance147.fieldValue = new MFNode();

ProtoInstance147.fieldValue[0] = fieldValue148;

fieldValue fieldValue149 = createNode("fieldValue");
fieldValue149.name = "translation";
fieldValue149.value = "0.02710000053048134 1.4943000078201294 0.039400000125169754";
ProtoInstance147.fieldValue[1] = fieldValue149;

fieldValue110.children[12] = ProtoInstance147;

ProtoInstance ProtoInstance150 = createNode("ProtoInstance");
ProtoInstance150.name = "Site";
ProtoInstance150.DEF = "hanim_r_thelion";
fieldValue fieldValue151 = createNode("fieldValue");
fieldValue151.name = "name";
fieldValue151.value = "r_thelion";
ProtoInstance150.fieldValue = new MFNode();

ProtoInstance150.fieldValue[0] = fieldValue151;

fieldValue fieldValue152 = createNode("fieldValue");
fieldValue152.name = "translation";
fieldValue152.value = "-0.07360000163316727 1.3385000228881836 0.1216999962925911";
ProtoInstance150.fieldValue[1] = fieldValue152;

fieldValue110.children[13] = ProtoInstance150;

ProtoInstance ProtoInstance153 = createNode("ProtoInstance");
ProtoInstance153.name = "Site";
ProtoInstance153.DEF = "hanim_l_thelion";
fieldValue fieldValue154 = createNode("fieldValue");
fieldValue154.name = "name";
fieldValue154.value = "l_thelion";
ProtoInstance153.fieldValue = new MFNode();

ProtoInstance153.fieldValue[0] = fieldValue154;

fieldValue fieldValue155 = createNode("fieldValue");
fieldValue155.name = "translation";
fieldValue155.value = "0.09179999679327011 1.3381999731063843 0.11919999867677689";
ProtoInstance153.fieldValue[1] = fieldValue155;

fieldValue110.children[14] = ProtoInstance153;

ProtoInstance ProtoInstance156 = createNode("ProtoInstance");
ProtoInstance156.name = "Site";
ProtoInstance156.DEF = "hanim_substernale";
fieldValue fieldValue157 = createNode("fieldValue");
fieldValue157.name = "name";
fieldValue157.value = "substernale";
ProtoInstance156.fieldValue = new MFNode();

ProtoInstance156.fieldValue[0] = fieldValue157;

fieldValue fieldValue158 = createNode("fieldValue");
fieldValue158.name = "translation";
fieldValue158.value = "0.008500000461935997 1.2994999885559082 0.11469999700784683";
ProtoInstance156.fieldValue[1] = fieldValue158;

fieldValue110.children[15] = ProtoInstance156;

ProtoInstance ProtoInstance159 = createNode("ProtoInstance");
ProtoInstance159.name = "Site";
ProtoInstance159.DEF = "hanim_r_rib10";
fieldValue fieldValue160 = createNode("fieldValue");
fieldValue160.name = "name";
fieldValue160.value = "r_rib10";
ProtoInstance159.fieldValue = new MFNode();

ProtoInstance159.fieldValue[0] = fieldValue160;

fieldValue fieldValue161 = createNode("fieldValue");
fieldValue161.name = "translation";
fieldValue161.value = "-0.07109999656677246 1.194100022315979 0.10159999877214432";
ProtoInstance159.fieldValue[1] = fieldValue161;

fieldValue110.children[16] = ProtoInstance159;

ProtoInstance ProtoInstance162 = createNode("ProtoInstance");
ProtoInstance162.name = "Site";
ProtoInstance162.DEF = "hanim_r_asis";
fieldValue fieldValue163 = createNode("fieldValue");
fieldValue163.name = "name";
fieldValue163.value = "r_asis";
ProtoInstance162.fieldValue = new MFNode();

ProtoInstance162.fieldValue[0] = fieldValue163;

fieldValue fieldValue164 = createNode("fieldValue");
fieldValue164.name = "translation";
fieldValue164.value = "-0.08869999647140503 1.0020999908447266 0.1111999973654747";
ProtoInstance162.fieldValue[1] = fieldValue164;

fieldValue110.children[17] = ProtoInstance162;

ProtoInstance ProtoInstance165 = createNode("ProtoInstance");
ProtoInstance165.name = "Site";
ProtoInstance165.DEF = "hanim_l_rib10";
fieldValue fieldValue166 = createNode("fieldValue");
fieldValue166.name = "name";
fieldValue166.value = "l_rib10";
ProtoInstance165.fieldValue = new MFNode();

ProtoInstance165.fieldValue[0] = fieldValue166;

fieldValue fieldValue167 = createNode("fieldValue");
fieldValue167.name = "translation";
fieldValue167.value = "0.08709999918937683 1.1924999952316284 0.09920000284910202";
ProtoInstance165.fieldValue[1] = fieldValue167;

fieldValue110.children[18] = ProtoInstance165;

ProtoInstance ProtoInstance168 = createNode("ProtoInstance");
ProtoInstance168.name = "Site";
ProtoInstance168.DEF = "hanim_l_asis";
fieldValue fieldValue169 = createNode("fieldValue");
fieldValue169.name = "name";
fieldValue169.value = "l_asis";
ProtoInstance168.fieldValue = new MFNode();

ProtoInstance168.fieldValue[0] = fieldValue169;

fieldValue fieldValue170 = createNode("fieldValue");
fieldValue170.name = "translation";
fieldValue170.value = "0.0925000011920929 0.9983000159263611 0.10520000010728836";
ProtoInstance168.fieldValue[1] = fieldValue170;

fieldValue110.children[19] = ProtoInstance168;

ProtoInstance ProtoInstance171 = createNode("ProtoInstance");
ProtoInstance171.name = "Site";
ProtoInstance171.DEF = "hanim_r_iliocristale";
fieldValue fieldValue172 = createNode("fieldValue");
fieldValue172.name = "name";
fieldValue172.value = "r_iliocristale";
ProtoInstance171.fieldValue = new MFNode();

ProtoInstance171.fieldValue[0] = fieldValue172;

fieldValue fieldValue173 = createNode("fieldValue");
fieldValue173.name = "translation";
fieldValue173.value = "-0.1525000035762787 1.0628000497817993 0.0035000001080334187";
ProtoInstance171.fieldValue[1] = fieldValue173;

fieldValue110.children[20] = ProtoInstance171;

ProtoInstance ProtoInstance174 = createNode("ProtoInstance");
ProtoInstance174.name = "Site";
ProtoInstance174.DEF = "hanim_r_trochanterion";
fieldValue fieldValue175 = createNode("fieldValue");
fieldValue175.name = "name";
fieldValue175.value = "r_trochanterion";
ProtoInstance174.fieldValue = new MFNode();

ProtoInstance174.fieldValue[0] = fieldValue175;

fieldValue fieldValue176 = createNode("fieldValue");
fieldValue176.name = "translation";
fieldValue176.value = "-0.1688999980688095 0.8418999910354614 0.03519999980926514";
ProtoInstance174.fieldValue[1] = fieldValue176;

fieldValue110.children[21] = ProtoInstance174;

ProtoInstance ProtoInstance177 = createNode("ProtoInstance");
ProtoInstance177.name = "Site";
ProtoInstance177.DEF = "hanim_l_iliocristale";
fieldValue fieldValue178 = createNode("fieldValue");
fieldValue178.name = "name";
fieldValue178.value = "l_iliocristale";
ProtoInstance177.fieldValue = new MFNode();

ProtoInstance177.fieldValue[0] = fieldValue178;

fieldValue fieldValue179 = createNode("fieldValue");
fieldValue179.name = "translation";
fieldValue179.value = "0.16120000183582306 1.0536999702453613 0.0007999999797903001";
ProtoInstance177.fieldValue[1] = fieldValue179;

fieldValue110.children[22] = ProtoInstance177;

ProtoInstance ProtoInstance180 = createNode("ProtoInstance");
ProtoInstance180.name = "Site";
ProtoInstance180.DEF = "hanim_l_trochanterion";
fieldValue fieldValue181 = createNode("fieldValue");
fieldValue181.name = "name";
fieldValue181.value = "l_trochanterion";
ProtoInstance180.fieldValue = new MFNode();

ProtoInstance180.fieldValue[0] = fieldValue181;

fieldValue fieldValue182 = createNode("fieldValue");
fieldValue182.name = "translation";
fieldValue182.value = "0.16769999265670776 0.8335999846458435 0.030300000682473183";
ProtoInstance180.fieldValue[1] = fieldValue182;

fieldValue110.children[23] = ProtoInstance180;

ProtoInstance ProtoInstance183 = createNode("ProtoInstance");
ProtoInstance183.name = "Site";
ProtoInstance183.DEF = "hanim_cervicale";
fieldValue fieldValue184 = createNode("fieldValue");
fieldValue184.name = "name";
fieldValue184.value = "cervicale";
ProtoInstance183.fieldValue = new MFNode();

ProtoInstance183.fieldValue[0] = fieldValue184;

fieldValue fieldValue185 = createNode("fieldValue");
fieldValue185.name = "translation";
fieldValue185.value = "0.006399999838322401 1.5199999809265137 -0.08150000125169754";
ProtoInstance183.fieldValue[1] = fieldValue185;

fieldValue110.children[24] = ProtoInstance183;

ProtoInstance ProtoInstance186 = createNode("ProtoInstance");
ProtoInstance186.name = "Site";
ProtoInstance186.DEF = "hanim_spine_2_lower_back";
fieldValue fieldValue187 = createNode("fieldValue");
fieldValue187.name = "name";
fieldValue187.value = "spine_2_lower_back";
ProtoInstance186.fieldValue = new MFNode();

ProtoInstance186.fieldValue[0] = fieldValue187;

fieldValue fieldValue188 = createNode("fieldValue");
fieldValue188.name = "translation";
fieldValue188.value = "0.004900000058114529 1.1907999515533447 -0.11129999905824661";
ProtoInstance186.fieldValue[1] = fieldValue188;

fieldValue110.children[25] = ProtoInstance186;

ProtoInstance ProtoInstance189 = createNode("ProtoInstance");
ProtoInstance189.name = "Site";
ProtoInstance189.DEF = "hanim_r_psis";
fieldValue fieldValue190 = createNode("fieldValue");
fieldValue190.name = "name";
fieldValue190.value = "r_psis";
ProtoInstance189.fieldValue = new MFNode();

ProtoInstance189.fieldValue[0] = fieldValue190;

fieldValue fieldValue191 = createNode("fieldValue");
fieldValue191.name = "translation";
fieldValue191.value = "-0.07159999758005142 1.0190000534057617 -0.11379999667406082";
ProtoInstance189.fieldValue[1] = fieldValue191;

fieldValue110.children[26] = ProtoInstance189;

ProtoInstance ProtoInstance192 = createNode("ProtoInstance");
ProtoInstance192.name = "Site";
ProtoInstance192.DEF = "hanim_l_psis";
fieldValue fieldValue193 = createNode("fieldValue");
fieldValue193.name = "name";
fieldValue193.value = "l_psis";
ProtoInstance192.fieldValue = new MFNode();

ProtoInstance192.fieldValue[0] = fieldValue193;

fieldValue fieldValue194 = createNode("fieldValue");
fieldValue194.name = "translation";
fieldValue194.value = "0.07739999890327454 1.0190000534057617 -0.11509999632835388";
ProtoInstance192.fieldValue[1] = fieldValue194;

fieldValue110.children[27] = ProtoInstance192;

ProtoInstance ProtoInstance195 = createNode("ProtoInstance");
ProtoInstance195.name = "Site";
ProtoInstance195.DEF = "hanim_waist_preferred_posterior";
fieldValue fieldValue196 = createNode("fieldValue");
fieldValue196.name = "name";
fieldValue196.value = "waist_preferred_posterior";
ProtoInstance195.fieldValue = new MFNode();

ProtoInstance195.fieldValue[0] = fieldValue196;

fieldValue fieldValue197 = createNode("fieldValue");
fieldValue197.name = "translation";
fieldValue197.value = "0.28999999165534973 1.0915000438690186 -0.10909999907016754";
ProtoInstance195.fieldValue[1] = fieldValue197;

fieldValue110.children[28] = ProtoInstance195;

ProtoInstance ProtoInstance198 = createNode("ProtoInstance");
ProtoInstance198.name = "Site";
ProtoInstance198.DEF = "hanim_r_acromion";
fieldValue fieldValue199 = createNode("fieldValue");
fieldValue199.name = "name";
fieldValue199.value = "r_acromion";
ProtoInstance198.fieldValue = new MFNode();

ProtoInstance198.fieldValue[0] = fieldValue199;

fieldValue fieldValue200 = createNode("fieldValue");
fieldValue200.name = "translation";
fieldValue200.value = "-0.19050000607967377 1.479099988937378 -0.04309999942779541";
ProtoInstance198.fieldValue[1] = fieldValue200;

fieldValue110.children[29] = ProtoInstance198;

ProtoInstance ProtoInstance201 = createNode("ProtoInstance");
ProtoInstance201.name = "Site";
ProtoInstance201.DEF = "hanim_r_axilla_proximal";
fieldValue fieldValue202 = createNode("fieldValue");
fieldValue202.name = "name";
fieldValue202.value = "r_axilla_proximal";
ProtoInstance201.fieldValue = new MFNode();

ProtoInstance201.fieldValue[0] = fieldValue202;

fieldValue fieldValue203 = createNode("fieldValue");
fieldValue203.name = "translation";
fieldValue203.value = "-0.16259999573230743 1.4071999788284302 -0.003100000089034438";
ProtoInstance201.fieldValue[1] = fieldValue203;

fieldValue110.children[30] = ProtoInstance201;

ProtoInstance ProtoInstance204 = createNode("ProtoInstance");
ProtoInstance204.name = "Site";
ProtoInstance204.DEF = "hanim_r_radial_styloid";
fieldValue fieldValue205 = createNode("fieldValue");
fieldValue205.name = "name";
fieldValue205.value = "r_radial_styloid";
ProtoInstance204.fieldValue = new MFNode();

ProtoInstance204.fieldValue[0] = fieldValue205;

fieldValue fieldValue206 = createNode("fieldValue");
fieldValue206.name = "translation";
fieldValue206.value = "-0.188400000333786 0.8676000237464905 -0.035999998450279236";
ProtoInstance204.fieldValue[1] = fieldValue206;

fieldValue110.children[31] = ProtoInstance204;

ProtoInstance ProtoInstance207 = createNode("ProtoInstance");
ProtoInstance207.name = "Site";
ProtoInstance207.DEF = "hanim_r_axilla_distal";
fieldValue fieldValue208 = createNode("fieldValue");
fieldValue208.name = "name";
fieldValue208.value = "r_axilla_distal";
ProtoInstance207.fieldValue = new MFNode();

ProtoInstance207.fieldValue[0] = fieldValue208;

fieldValue fieldValue209 = createNode("fieldValue");
fieldValue209.name = "translation";
fieldValue209.value = "-0.16030000150203705 1.4098000526428223 -0.08259999752044678";
ProtoInstance207.fieldValue[1] = fieldValue209;

fieldValue110.children[32] = ProtoInstance207;

ProtoInstance ProtoInstance210 = createNode("ProtoInstance");
ProtoInstance210.name = "Site";
ProtoInstance210.DEF = "hanim_r_olecranon";
fieldValue fieldValue211 = createNode("fieldValue");
fieldValue211.name = "name";
fieldValue211.value = "r_olecranon";
ProtoInstance210.fieldValue = new MFNode();

ProtoInstance210.fieldValue[0] = fieldValue211;

fieldValue fieldValue212 = createNode("fieldValue");
fieldValue212.name = "translation";
fieldValue212.value = "-0.1906999945640564 1.1404999494552612 -0.10649999976158142";
ProtoInstance210.fieldValue[1] = fieldValue212;

fieldValue110.children[33] = ProtoInstance210;

ProtoInstance ProtoInstance213 = createNode("ProtoInstance");
ProtoInstance213.name = "Site";
ProtoInstance213.DEF = "hanim_r_humeral_lateral_epicondyles";
fieldValue fieldValue214 = createNode("fieldValue");
fieldValue214.name = "name";
fieldValue214.value = "r_humeral_lateral_epicondyles";
ProtoInstance213.fieldValue = new MFNode();

ProtoInstance213.fieldValue[0] = fieldValue214;

fieldValue fieldValue215 = createNode("fieldValue");
fieldValue215.name = "translation";
fieldValue215.value = "-0.2223999947309494 1.1517000198364258 -0.10329999774694443";
ProtoInstance213.fieldValue[1] = fieldValue215;

fieldValue110.children[34] = ProtoInstance213;

ProtoInstance ProtoInstance216 = createNode("ProtoInstance");
ProtoInstance216.name = "Site";
ProtoInstance216.DEF = "hanim_r_humeral_medial_epicondyles";
fieldValue fieldValue217 = createNode("fieldValue");
fieldValue217.name = "name";
fieldValue217.value = "r_humeral_medial_epicondyles";
ProtoInstance216.fieldValue = new MFNode();

ProtoInstance216.fieldValue[0] = fieldValue217;

fieldValue fieldValue218 = createNode("fieldValue");
fieldValue218.name = "translation";
fieldValue218.value = "-0.1679999977350235 1.1297999620437622 -0.10620000213384628";
ProtoInstance216.fieldValue[1] = fieldValue218;

fieldValue110.children[35] = ProtoInstance216;

ProtoInstance ProtoInstance219 = createNode("ProtoInstance");
ProtoInstance219.name = "Site";
ProtoInstance219.DEF = "hanim_r_radiale";
fieldValue fieldValue220 = createNode("fieldValue");
fieldValue220.name = "name";
fieldValue220.value = "r_radiale";
ProtoInstance219.fieldValue = new MFNode();

ProtoInstance219.fieldValue[0] = fieldValue220;

fieldValue fieldValue221 = createNode("fieldValue");
fieldValue221.name = "translation";
fieldValue221.value = "-0.21299999952316284 1.1304999589920044 -0.10909999907016754";
ProtoInstance219.fieldValue[1] = fieldValue221;

fieldValue110.children[36] = ProtoInstance219;

ProtoInstance ProtoInstance222 = createNode("ProtoInstance");
ProtoInstance222.name = "Site";
ProtoInstance222.DEF = "hanim_r_metacarpal_phalanx_2";
fieldValue fieldValue223 = createNode("fieldValue");
fieldValue223.name = "name";
fieldValue223.value = "r_metacarpal_phalanx_2";
ProtoInstance222.fieldValue = new MFNode();

ProtoInstance222.fieldValue[0] = fieldValue223;

fieldValue fieldValue224 = createNode("fieldValue");
fieldValue224.name = "translation";
fieldValue224.value = "-0.19769999384880066 0.8169000148773193 -0.01769999973475933";
ProtoInstance222.fieldValue[1] = fieldValue224;

fieldValue110.children[37] = ProtoInstance222;

ProtoInstance ProtoInstance225 = createNode("ProtoInstance");
ProtoInstance225.name = "Site";
ProtoInstance225.DEF = "hanim_r_dactylion";
fieldValue fieldValue226 = createNode("fieldValue");
fieldValue226.name = "name";
fieldValue226.value = "r_dactylion";
ProtoInstance225.fieldValue = new MFNode();

ProtoInstance225.fieldValue[0] = fieldValue226;

fieldValue fieldValue227 = createNode("fieldValue");
fieldValue227.name = "translation";
fieldValue227.value = "-0.1941000074148178 0.6772000193595886 -0.04230000078678131";
ProtoInstance225.fieldValue[1] = fieldValue227;

fieldValue110.children[38] = ProtoInstance225;

ProtoInstance ProtoInstance228 = createNode("ProtoInstance");
ProtoInstance228.name = "Site";
ProtoInstance228.DEF = "hanim_r_ulnar_styloid";
fieldValue fieldValue229 = createNode("fieldValue");
fieldValue229.name = "name";
fieldValue229.value = "r_ulnar_styloid";
ProtoInstance228.fieldValue = new MFNode();

ProtoInstance228.fieldValue[0] = fieldValue229;

fieldValue fieldValue230 = createNode("fieldValue");
fieldValue230.name = "translation";
fieldValue230.value = "-0.21170000731945038 0.8561999797821045 -0.058400001376867294";
ProtoInstance228.fieldValue[1] = fieldValue230;

fieldValue110.children[39] = ProtoInstance228;

ProtoInstance ProtoInstance231 = createNode("ProtoInstance");
ProtoInstance231.name = "Site";
ProtoInstance231.DEF = "hanim_r_metacarpal_phalanx_5";
fieldValue fieldValue232 = createNode("fieldValue");
fieldValue232.name = "name";
fieldValue232.value = "r_metacarpal_phalanx_5";
ProtoInstance231.fieldValue = new MFNode();

ProtoInstance231.fieldValue[0] = fieldValue232;

fieldValue fieldValue233 = createNode("fieldValue");
fieldValue233.name = "translation";
fieldValue233.value = "-0.19290000200271606 0.7889999747276306 -0.10639999806880951";
ProtoInstance231.fieldValue[1] = fieldValue233;

fieldValue110.children[40] = ProtoInstance231;

ProtoInstance ProtoInstance234 = createNode("ProtoInstance");
ProtoInstance234.name = "Site";
ProtoInstance234.DEF = "hanim_l_acromion";
fieldValue fieldValue235 = createNode("fieldValue");
fieldValue235.name = "name";
fieldValue235.value = "l_acromion";
ProtoInstance234.fieldValue = new MFNode();

ProtoInstance234.fieldValue[0] = fieldValue235;

fieldValue fieldValue236 = createNode("fieldValue");
fieldValue236.name = "translation";
fieldValue236.value = "0.20319999754428864 1.4759999513626099 -0.04899999871850014";
ProtoInstance234.fieldValue[1] = fieldValue236;

fieldValue110.children[41] = ProtoInstance234;

ProtoInstance ProtoInstance237 = createNode("ProtoInstance");
ProtoInstance237.name = "Site";
ProtoInstance237.DEF = "hanim_l_axilla_proximal";
fieldValue fieldValue238 = createNode("fieldValue");
fieldValue238.name = "name";
fieldValue238.value = "l_axilla_proximal";
ProtoInstance237.fieldValue = new MFNode();

ProtoInstance237.fieldValue[0] = fieldValue238;

fieldValue fieldValue239 = createNode("fieldValue");
fieldValue239.name = "translation";
fieldValue239.value = "0.1776999980211258 1.406499981880188 -0.007499999832361937";
ProtoInstance237.fieldValue[1] = fieldValue239;

fieldValue110.children[42] = ProtoInstance237;

ProtoInstance ProtoInstance240 = createNode("ProtoInstance");
ProtoInstance240.name = "Site";
ProtoInstance240.DEF = "hanim_l_radial_styloid";
fieldValue fieldValue241 = createNode("fieldValue");
fieldValue241.name = "name";
fieldValue241.value = "l_radial_styloid";
ProtoInstance240.fieldValue = new MFNode();

ProtoInstance240.fieldValue[0] = fieldValue241;

fieldValue fieldValue242 = createNode("fieldValue");
fieldValue242.name = "translation";
fieldValue242.value = "0.19009999930858612 0.8644999861717224 -0.04149999842047691";
ProtoInstance240.fieldValue[1] = fieldValue242;

fieldValue110.children[43] = ProtoInstance240;

ProtoInstance ProtoInstance243 = createNode("ProtoInstance");
ProtoInstance243.name = "Site";
ProtoInstance243.DEF = "hanim_l_axilla_distal";
fieldValue fieldValue244 = createNode("fieldValue");
fieldValue244.name = "name";
fieldValue244.value = "l_axilla_distal";
ProtoInstance243.fieldValue = new MFNode();

ProtoInstance243.fieldValue[0] = fieldValue244;

fieldValue fieldValue245 = createNode("fieldValue");
fieldValue245.name = "translation";
fieldValue245.value = "0.17059999704360962 1.4071999788284302 -0.08749999850988388";
ProtoInstance243.fieldValue[1] = fieldValue245;

fieldValue110.children[44] = ProtoInstance243;

ProtoInstance ProtoInstance246 = createNode("ProtoInstance");
ProtoInstance246.name = "Site";
ProtoInstance246.DEF = "hanim_l_olecranon";
fieldValue fieldValue247 = createNode("fieldValue");
fieldValue247.name = "name";
fieldValue247.value = "l_olecranon";
ProtoInstance246.fieldValue = new MFNode();

ProtoInstance246.fieldValue[0] = fieldValue247;

fieldValue fieldValue248 = createNode("fieldValue");
fieldValue248.name = "translation";
fieldValue248.value = "-0.19619999825954437 1.1375000476837158 -0.11230000108480453";
ProtoInstance246.fieldValue[1] = fieldValue248;

fieldValue110.children[45] = ProtoInstance246;

ProtoInstance ProtoInstance249 = createNode("ProtoInstance");
ProtoInstance249.name = "Site";
ProtoInstance249.DEF = "hanim_l_humeral_lateral_epicondyles";
fieldValue fieldValue250 = createNode("fieldValue");
fieldValue250.name = "name";
fieldValue250.value = "l_humeral_lateral_epicondyles";
ProtoInstance249.fieldValue = new MFNode();

ProtoInstance249.fieldValue[0] = fieldValue250;

fieldValue fieldValue251 = createNode("fieldValue");
fieldValue251.name = "translation";
fieldValue251.value = "0.2280000001192093 1.1482000350952148 -0.10999999940395355";
ProtoInstance249.fieldValue[1] = fieldValue251;

fieldValue110.children[46] = ProtoInstance249;

ProtoInstance ProtoInstance252 = createNode("ProtoInstance");
ProtoInstance252.name = "Site";
ProtoInstance252.DEF = "hanim_l_humeral_medial_epicondyles";
fieldValue fieldValue253 = createNode("fieldValue");
fieldValue253.name = "name";
fieldValue253.value = "l_humeral_medial_epicondyles";
ProtoInstance252.fieldValue = new MFNode();

ProtoInstance252.fieldValue[0] = fieldValue253;

fieldValue fieldValue254 = createNode("fieldValue");
fieldValue254.name = "translation";
fieldValue254.value = "0.17350000143051147 1.1272000074386597 -0.11129999905824661";
ProtoInstance252.fieldValue[1] = fieldValue254;

fieldValue110.children[47] = ProtoInstance252;

ProtoInstance ProtoInstance255 = createNode("ProtoInstance");
ProtoInstance255.name = "Site";
ProtoInstance255.DEF = "hanim_l_radiale";
fieldValue fieldValue256 = createNode("fieldValue");
fieldValue256.name = "name";
fieldValue256.value = "l_radiale";
ProtoInstance255.fieldValue = new MFNode();

ProtoInstance255.fieldValue[0] = fieldValue256;

fieldValue fieldValue257 = createNode("fieldValue");
fieldValue257.name = "translation";
fieldValue257.value = "0.21819999814033508 1.1211999654769897 -0.11670000106096268";
ProtoInstance255.fieldValue[1] = fieldValue257;

fieldValue110.children[48] = ProtoInstance255;

ProtoInstance ProtoInstance258 = createNode("ProtoInstance");
ProtoInstance258.name = "Site";
ProtoInstance258.DEF = "hanim_l_metacarpal_phalanx_2";
fieldValue fieldValue259 = createNode("fieldValue");
fieldValue259.name = "name";
fieldValue259.value = "l_metacarpal_phalanx_2";
ProtoInstance258.fieldValue = new MFNode();

ProtoInstance258.fieldValue[0] = fieldValue259;

fieldValue fieldValue260 = createNode("fieldValue");
fieldValue260.name = "translation";
fieldValue260.value = "0.20090000331401825 0.8138999938964844 -0.02370000071823597";
ProtoInstance258.fieldValue[1] = fieldValue260;

fieldValue110.children[49] = ProtoInstance258;

ProtoInstance ProtoInstance261 = createNode("ProtoInstance");
ProtoInstance261.name = "Site";
ProtoInstance261.DEF = "hanim_l_dactylion";
fieldValue fieldValue262 = createNode("fieldValue");
fieldValue262.name = "name";
fieldValue262.value = "l_dactylion";
ProtoInstance261.fieldValue = new MFNode();

ProtoInstance261.fieldValue[0] = fieldValue262;

fieldValue fieldValue263 = createNode("fieldValue");
fieldValue263.name = "translation";
fieldValue263.value = "0.20559999346733093 0.6743000149726868 -0.04820000007748604";
ProtoInstance261.fieldValue[1] = fieldValue263;

fieldValue110.children[50] = ProtoInstance261;

ProtoInstance ProtoInstance264 = createNode("ProtoInstance");
ProtoInstance264.name = "Site";
ProtoInstance264.DEF = "hanim_l_ulnar_styloid";
fieldValue fieldValue265 = createNode("fieldValue");
fieldValue265.name = "name";
fieldValue265.value = "l_ulnar_styloid";
ProtoInstance264.fieldValue = new MFNode();

ProtoInstance264.fieldValue[0] = fieldValue265;

fieldValue fieldValue266 = createNode("fieldValue");
fieldValue266.name = "translation";
fieldValue266.value = "-0.2142000049352646 0.8529000282287598 -0.06480000168085098";
ProtoInstance264.fieldValue[1] = fieldValue266;

fieldValue110.children[51] = ProtoInstance264;

ProtoInstance ProtoInstance267 = createNode("ProtoInstance");
ProtoInstance267.name = "Site";
ProtoInstance267.DEF = "hanim_l_metacarpal_phalanx_5";
fieldValue fieldValue268 = createNode("fieldValue");
fieldValue268.name = "name";
fieldValue268.value = "l_metacarpal_phalanx_5";
ProtoInstance267.fieldValue = new MFNode();

ProtoInstance267.fieldValue[0] = fieldValue268;

fieldValue fieldValue269 = createNode("fieldValue");
fieldValue269.name = "translation";
fieldValue269.value = "0.19290000200271606 0.7860000133514404 -0.11219999939203262";
ProtoInstance267.fieldValue[1] = fieldValue269;

fieldValue110.children[52] = ProtoInstance267;

ProtoInstance ProtoInstance270 = createNode("ProtoInstance");
ProtoInstance270.name = "Site";
ProtoInstance270.DEF = "hanim_r_knee_crease";
fieldValue fieldValue271 = createNode("fieldValue");
fieldValue271.name = "name";
fieldValue271.value = "r_knee_crease";
ProtoInstance270.fieldValue = new MFNode();

ProtoInstance270.fieldValue[0] = fieldValue271;

fieldValue fieldValue272 = createNode("fieldValue");
fieldValue272.name = "translation";
fieldValue272.value = "-0.08250000327825546 0.49320000410079956 -0.032600000500679016";
ProtoInstance270.fieldValue[1] = fieldValue272;

fieldValue110.children[53] = ProtoInstance270;

ProtoInstance ProtoInstance273 = createNode("ProtoInstance");
ProtoInstance273.name = "Site";
ProtoInstance273.DEF = "hanim_r_femoral_lateral_epicondyles";
fieldValue fieldValue274 = createNode("fieldValue");
fieldValue274.name = "name";
fieldValue274.value = "r_femoral_lateral_epicondyles";
ProtoInstance273.fieldValue = new MFNode();

ProtoInstance273.fieldValue[0] = fieldValue274;

fieldValue fieldValue275 = createNode("fieldValue");
fieldValue275.name = "translation";
fieldValue275.value = "-0.1421000063419342 0.4991999864578247 0.03099999949336052";
ProtoInstance273.fieldValue[1] = fieldValue275;

fieldValue110.children[54] = ProtoInstance273;

ProtoInstance ProtoInstance276 = createNode("ProtoInstance");
ProtoInstance276.name = "Site";
ProtoInstance276.DEF = "hanim_r_femoral_medial_epicondyles";
fieldValue fieldValue277 = createNode("fieldValue");
fieldValue277.name = "name";
fieldValue277.value = "r_femoral_lateral_epicondyles";
ProtoInstance276.fieldValue = new MFNode();

ProtoInstance276.fieldValue[0] = fieldValue277;

fieldValue fieldValue278 = createNode("fieldValue");
fieldValue278.name = "translation";
fieldValue278.value = "-0.022099999710917473 0.5013999938964844 0.02889999933540821";
ProtoInstance276.fieldValue[1] = fieldValue278;

fieldValue110.children[55] = ProtoInstance276;

ProtoInstance ProtoInstance279 = createNode("ProtoInstance");
ProtoInstance279.name = "Site";
ProtoInstance279.DEF = "hanim_r_tarsal_interphalangeal_phalanx_5";
fieldValue fieldValue280 = createNode("fieldValue");
fieldValue280.name = "name";
fieldValue280.value = "r_tarsal_interphalangeal_phalanx_5";
ProtoInstance279.fieldValue = new MFNode();

ProtoInstance279.fieldValue[0] = fieldValue280;

fieldValue fieldValue281 = createNode("fieldValue");
fieldValue281.name = "translation";
fieldValue281.value = "-0.15230000019073486 0.016599999740719795 0.08950000256299973";
ProtoInstance279.fieldValue[1] = fieldValue281;

fieldValue110.children[56] = ProtoInstance279;

ProtoInstance ProtoInstance282 = createNode("ProtoInstance");
ProtoInstance282.name = "Site";
ProtoInstance282.DEF = "hanim_r_lateral_malleolus";
fieldValue fieldValue283 = createNode("fieldValue");
fieldValue283.name = "name";
fieldValue283.value = "r_lateral_malleolus";
ProtoInstance282.fieldValue = new MFNode();

ProtoInstance282.fieldValue[0] = fieldValue283;

fieldValue fieldValue284 = createNode("fieldValue");
fieldValue284.name = "translation";
fieldValue284.value = "-0.1005999967455864 0.0658000037074089 -0.10750000178813934";
ProtoInstance282.fieldValue[1] = fieldValue284;

fieldValue110.children[57] = ProtoInstance282;

ProtoInstance ProtoInstance285 = createNode("ProtoInstance");
ProtoInstance285.name = "Site";
ProtoInstance285.DEF = "hanim_r_medial_malleolus";
fieldValue fieldValue286 = createNode("fieldValue");
fieldValue286.name = "name";
fieldValue286.value = "r_medial_malleolus";
ProtoInstance285.fieldValue = new MFNode();

ProtoInstance285.fieldValue[0] = fieldValue286;

fieldValue fieldValue287 = createNode("fieldValue");
fieldValue287.name = "translation";
fieldValue287.value = "-0.05909999832510948 0.07599999755620956 -0.09279999881982803";
ProtoInstance285.fieldValue[1] = fieldValue287;

fieldValue110.children[58] = ProtoInstance285;

ProtoInstance ProtoInstance288 = createNode("ProtoInstance");
ProtoInstance288.name = "Site";
ProtoInstance288.DEF = "hanim_r_sphyrion";
fieldValue fieldValue289 = createNode("fieldValue");
fieldValue289.name = "name";
fieldValue289.value = "r_sphyrion";
ProtoInstance288.fieldValue = new MFNode();

ProtoInstance288.fieldValue[0] = fieldValue289;

fieldValue fieldValue290 = createNode("fieldValue");
fieldValue290.name = "translation";
fieldValue290.value = "-0.06030000001192093 0.061000000685453415 -0.10019999742507935";
ProtoInstance288.fieldValue[1] = fieldValue290;

fieldValue110.children[59] = ProtoInstance288;

ProtoInstance ProtoInstance291 = createNode("ProtoInstance");
ProtoInstance291.name = "Site";
ProtoInstance291.DEF = "hanim_r_tarsal_interphalangeal_phalanx_1";
fieldValue fieldValue292 = createNode("fieldValue");
fieldValue292.name = "name";
fieldValue292.value = "r_tarsal_interphalangeal_phalanx_1";
ProtoInstance291.fieldValue = new MFNode();

ProtoInstance291.fieldValue[0] = fieldValue292;

fieldValue fieldValue293 = createNode("fieldValue");
fieldValue293.name = "translation";
fieldValue293.value = "-0.05209999904036522 0.026000000536441803 0.01269999984651804";
ProtoInstance291.fieldValue[1] = fieldValue293;

fieldValue110.children[60] = ProtoInstance291;

ProtoInstance ProtoInstance294 = createNode("ProtoInstance");
ProtoInstance294.name = "Site";
ProtoInstance294.DEF = "hanim_r_calcaneus_posterior";
fieldValue fieldValue295 = createNode("fieldValue");
fieldValue295.name = "name";
fieldValue295.value = "r_calcaneus_posterior";
ProtoInstance294.fieldValue = new MFNode();

ProtoInstance294.fieldValue[0] = fieldValue295;

fieldValue fieldValue296 = createNode("fieldValue");
fieldValue296.name = "translation";
fieldValue296.value = "-0.06920000165700912 0.02969999983906746 -0.12210000306367874";
ProtoInstance294.fieldValue[1] = fieldValue296;

fieldValue110.children[61] = ProtoInstance294;

ProtoInstance ProtoInstance297 = createNode("ProtoInstance");
ProtoInstance297.name = "Site";
ProtoInstance297.DEF = "hanim_r_tarsal_distal_phalanx_2";
fieldValue fieldValue298 = createNode("fieldValue");
fieldValue298.name = "name";
fieldValue298.value = "r_tarsal_distal_phalanx_2";
ProtoInstance297.fieldValue = new MFNode();

ProtoInstance297.fieldValue[0] = fieldValue298;

fieldValue fieldValue299 = createNode("fieldValue");
fieldValue299.name = "translation";
fieldValue299.value = "-0.08829999715089798 0.013399999588727951 0.13830000162124634";
ProtoInstance297.fieldValue[1] = fieldValue299;

fieldValue110.children[62] = ProtoInstance297;

ProtoInstance ProtoInstance300 = createNode("ProtoInstance");
ProtoInstance300.name = "Site";
ProtoInstance300.DEF = "hanim_l_knee_crease";
fieldValue fieldValue301 = createNode("fieldValue");
fieldValue301.name = "name";
fieldValue301.value = "l_knee_crease";
ProtoInstance300.fieldValue = new MFNode();

ProtoInstance300.fieldValue[0] = fieldValue301;

fieldValue fieldValue302 = createNode("fieldValue");
fieldValue302.name = "translation";
fieldValue302.value = "0.09929999709129333 0.48809999227523804 -0.030899999663233757";
ProtoInstance300.fieldValue[1] = fieldValue302;

fieldValue110.children[63] = ProtoInstance300;

ProtoInstance ProtoInstance303 = createNode("ProtoInstance");
ProtoInstance303.name = "Site";
ProtoInstance303.DEF = "hanim_l_femoral_lateral_epicondyles";
fieldValue fieldValue304 = createNode("fieldValue");
fieldValue304.name = "name";
fieldValue304.value = "l_femoral_lateral_epicondyles";
ProtoInstance303.fieldValue = new MFNode();

ProtoInstance303.fieldValue[0] = fieldValue304;

fieldValue fieldValue305 = createNode("fieldValue");
fieldValue305.name = "translation";
fieldValue305.value = "0.1597999930381775 0.4966999888420105 0.02969999983906746";
ProtoInstance303.fieldValue[1] = fieldValue305;

fieldValue110.children[64] = ProtoInstance303;

ProtoInstance ProtoInstance306 = createNode("ProtoInstance");
ProtoInstance306.name = "Site";
ProtoInstance306.DEF = "hanim_l_femoral_medial_epicondyles";
fieldValue fieldValue307 = createNode("fieldValue");
fieldValue307.name = "name";
fieldValue307.value = "l_femoral_lateral_epicondyles";
ProtoInstance306.fieldValue = new MFNode();

ProtoInstance306.fieldValue[0] = fieldValue307;

fieldValue fieldValue308 = createNode("fieldValue");
fieldValue308.name = "translation";
fieldValue308.value = "0.039799999445676804 0.49459999799728394 0.030300000682473183";
ProtoInstance306.fieldValue[1] = fieldValue308;

fieldValue110.children[65] = ProtoInstance306;

ProtoInstance ProtoInstance309 = createNode("ProtoInstance");
ProtoInstance309.name = "Site";
ProtoInstance309.DEF = "hanim_l_tarsal_interphalangeal_phalanx_5";
fieldValue fieldValue310 = createNode("fieldValue");
fieldValue310.name = "name";
fieldValue310.value = "l_tarsal_interphalangeal_phalanx_5";
ProtoInstance309.fieldValue = new MFNode();

ProtoInstance309.fieldValue[0] = fieldValue310;

fieldValue fieldValue311 = createNode("fieldValue");
fieldValue311.name = "translation";
fieldValue311.value = "0.18250000476837158 0.007000000216066837 0.09279999881982803";
ProtoInstance309.fieldValue[1] = fieldValue311;

fieldValue110.children[66] = ProtoInstance309;

ProtoInstance ProtoInstance312 = createNode("ProtoInstance");
ProtoInstance312.name = "Site";
ProtoInstance312.DEF = "hanim_l_lateral_malleolus";
fieldValue fieldValue313 = createNode("fieldValue");
fieldValue313.name = "name";
fieldValue313.value = "l_lateral_malleolus";
ProtoInstance312.fieldValue = new MFNode();

ProtoInstance312.fieldValue[0] = fieldValue313;

fieldValue fieldValue314 = createNode("fieldValue");
fieldValue314.name = "translation";
fieldValue314.value = "0.13079999387264252 0.059700001031160355 -0.10320000350475311";
ProtoInstance312.fieldValue[1] = fieldValue314;

fieldValue110.children[67] = ProtoInstance312;

ProtoInstance ProtoInstance315 = createNode("ProtoInstance");
ProtoInstance315.name = "Site";
ProtoInstance315.DEF = "hanim_l_medial_malleolus";
fieldValue fieldValue316 = createNode("fieldValue");
fieldValue316.name = "name";
fieldValue316.value = "l_medial_malleolus";
ProtoInstance315.fieldValue = new MFNode();

ProtoInstance315.fieldValue[0] = fieldValue316;

fieldValue fieldValue317 = createNode("fieldValue");
fieldValue317.name = "translation";
fieldValue317.value = "0.08900000154972076 0.07159999758005142 -0.08810000121593475";
ProtoInstance315.fieldValue[1] = fieldValue317;

fieldValue110.children[68] = ProtoInstance315;

ProtoInstance ProtoInstance318 = createNode("ProtoInstance");
ProtoInstance318.name = "Site";
ProtoInstance318.DEF = "hanim_l_sphyrion";
fieldValue fieldValue319 = createNode("fieldValue");
fieldValue319.name = "name";
fieldValue319.value = "l_sphyrion";
ProtoInstance318.fieldValue = new MFNode();

ProtoInstance318.fieldValue[0] = fieldValue319;

fieldValue fieldValue320 = createNode("fieldValue");
fieldValue320.name = "translation";
fieldValue320.value = "0.08900000154972076 0.057500001043081284 -0.09430000185966492";
ProtoInstance318.fieldValue[1] = fieldValue320;

fieldValue110.children[69] = ProtoInstance318;

ProtoInstance ProtoInstance321 = createNode("ProtoInstance");
ProtoInstance321.name = "Site";
ProtoInstance321.DEF = "hanim_l_tarsal_interphalangeal_phalanx_1";
fieldValue fieldValue322 = createNode("fieldValue");
fieldValue322.name = "name";
fieldValue322.value = "l_tarsal_interphalangeal_phalanx_1";
ProtoInstance321.fieldValue = new MFNode();

ProtoInstance321.fieldValue[0] = fieldValue322;

fieldValue fieldValue323 = createNode("fieldValue");
fieldValue323.name = "translation";
fieldValue323.value = "0.08160000294446945 0.02319999970495701 0.010599999688565731";
ProtoInstance321.fieldValue[1] = fieldValue323;

fieldValue110.children[70] = ProtoInstance321;

ProtoInstance ProtoInstance324 = createNode("ProtoInstance");
ProtoInstance324.name = "Site";
ProtoInstance324.DEF = "hanim_l_calcaneus_posterior";
fieldValue fieldValue325 = createNode("fieldValue");
fieldValue325.name = "name";
fieldValue325.value = "l_calcaneus_posterior";
ProtoInstance324.fieldValue = new MFNode();

ProtoInstance324.fieldValue[0] = fieldValue325;

fieldValue fieldValue326 = createNode("fieldValue");
fieldValue326.name = "translation";
fieldValue326.value = "0.09740000218153 0.02590000070631504 -0.11710000038146973";
ProtoInstance324.fieldValue[1] = fieldValue326;

fieldValue110.children[71] = ProtoInstance324;

ProtoInstance ProtoInstance327 = createNode("ProtoInstance");
ProtoInstance327.name = "Site";
ProtoInstance327.DEF = "hanim_l_tarsal_distal_phalanx_2";
fieldValue fieldValue328 = createNode("fieldValue");
fieldValue328.name = "name";
fieldValue328.value = "l_tarsal_distal_phalanx_2";
ProtoInstance327.fieldValue = new MFNode();

ProtoInstance327.fieldValue[0] = fieldValue328;

fieldValue fieldValue329 = createNode("fieldValue");
fieldValue329.name = "translation";
fieldValue329.value = "0.11949999630451202 0.007899999618530273 0.14329999685287476";
ProtoInstance327.fieldValue[1] = fieldValue329;

fieldValue110.children[72] = ProtoInstance327;

ProtoInstance ProtoInstance330 = createNode("ProtoInstance");
ProtoInstance330.name = "Site";
ProtoInstance330.DEF = "hanim_crotch";
fieldValue fieldValue331 = createNode("fieldValue");
fieldValue331.name = "name";
fieldValue331.value = "crotch";
ProtoInstance330.fieldValue = new MFNode();

ProtoInstance330.fieldValue[0] = fieldValue331;

fieldValue fieldValue332 = createNode("fieldValue");
fieldValue332.name = "translation";
fieldValue332.value = "0.0034000000450760126 0.8266000151634216 0.025699999183416367";
ProtoInstance330.fieldValue[1] = fieldValue332;

fieldValue110.children[73] = ProtoInstance330;

ProtoInstance ProtoInstance333 = createNode("ProtoInstance");
ProtoInstance333.name = "Site";
ProtoInstance333.DEF = "hanim_r_neck_base";
fieldValue fieldValue334 = createNode("fieldValue");
fieldValue334.name = "name";
fieldValue334.value = "r_neck_base";
ProtoInstance333.fieldValue = new MFNode();

ProtoInstance333.fieldValue[0] = fieldValue334;

fieldValue fieldValue335 = createNode("fieldValue");
fieldValue335.name = "translation";
fieldValue335.value = "-0.04190000146627426 1.5148999691009521 -0.02199999988079071";
ProtoInstance333.fieldValue[1] = fieldValue335;

fieldValue110.children[74] = ProtoInstance333;

ProtoInstance ProtoInstance336 = createNode("ProtoInstance");
ProtoInstance336.name = "Site";
ProtoInstance336.DEF = "hanim_l_neck_base";
fieldValue fieldValue337 = createNode("fieldValue");
fieldValue337.name = "name";
fieldValue337.value = "l_neck_base";
ProtoInstance336.fieldValue = new MFNode();

ProtoInstance336.fieldValue[0] = fieldValue337;

fieldValue fieldValue338 = createNode("fieldValue");
fieldValue338.name = "translation";
fieldValue338.value = "0.06459999829530716 1.5140999555587769 -0.03799999877810478";
ProtoInstance336.fieldValue[1] = fieldValue338;

fieldValue110.children[75] = ProtoInstance336;

ProtoInstance ProtoInstance339 = createNode("ProtoInstance");
ProtoInstance339.name = "Site";
ProtoInstance339.DEF = "hanim_navel";
fieldValue fieldValue340 = createNode("fieldValue");
fieldValue340.name = "name";
fieldValue340.value = "navel";
ProtoInstance339.fieldValue = new MFNode();

ProtoInstance339.fieldValue[0] = fieldValue340;

fieldValue fieldValue341 = createNode("fieldValue");
fieldValue341.name = "translation";
fieldValue341.value = "0.006899999920278788 1.09660005569458 0.10170000046491623";
ProtoInstance339.fieldValue[1] = fieldValue341;

fieldValue110.children[76] = ProtoInstance339;

ProtoInstance108.fieldValue[1] = fieldValue110;

fieldValue107.children = new MFNode();

fieldValue107.children[0] = ProtoInstance108;

ProtoInstance103.fieldValue[3] = fieldValue107;

fieldValue102.children = new MFNode();

fieldValue102.children[0] = ProtoInstance103;

ProtoInstance101.fieldValue = new MFNode();

ProtoInstance101.fieldValue[0] = fieldValue102;

fieldValue fieldValue342 = createNode("fieldValue");
fieldValue342.name = "joints";
ProtoInstance ProtoInstance343 = createNode("ProtoInstance");
ProtoInstance343.name = "Joint";
ProtoInstance343.DEF = "hanim_humanoid_root";
fieldValue fieldValue344 = createNode("fieldValue");
fieldValue344.name = "stiffness";
fieldValue344.value = "1 1 1";
ProtoInstance343.fieldValue = new MFNode();

ProtoInstance343.fieldValue[0] = fieldValue344;

fieldValue fieldValue345 = createNode("fieldValue");
fieldValue345.name = "name";
fieldValue345.value = "humanoid_root";
ProtoInstance343.fieldValue[1] = fieldValue345;

fieldValue fieldValue346 = createNode("fieldValue");
fieldValue346.name = "center";
fieldValue346.value = "0 0.8240000009536743 0.027699999511241913";
ProtoInstance343.fieldValue[2] = fieldValue346;

fieldValue fieldValue347 = createNode("fieldValue");
fieldValue347.name = "children";
ProtoInstance ProtoInstance348 = createNode("ProtoInstance");
ProtoInstance348.name = "Segment";
ProtoInstance348.DEF = "hanim_sacrum";
fieldValue fieldValue349 = createNode("fieldValue");
fieldValue349.name = "name";
fieldValue349.value = "sacrum";
ProtoInstance348.fieldValue = new MFNode();

ProtoInstance348.fieldValue[0] = fieldValue349;

fieldValue fieldValue350 = createNode("fieldValue");
fieldValue350.name = "children";
ProtoInstance ProtoInstance351 = createNode("ProtoInstance");
ProtoInstance351.name = "Site";
ProtoInstance351.DEF = "hanim_skull_tip";
fieldValue fieldValue352 = createNode("fieldValue");
fieldValue352.name = "name";
fieldValue352.value = "skull_tip";
ProtoInstance351.fieldValue = new MFNode();

ProtoInstance351.fieldValue[0] = fieldValue352;

fieldValue fieldValue353 = createNode("fieldValue");
fieldValue353.name = "translation";
fieldValue353.value = "0.004999999888241291 1.7503999471664429 0.005499999970197678";
ProtoInstance351.fieldValue[1] = fieldValue353;

fieldValue350.children = new MFNode();

fieldValue350.children[0] = ProtoInstance351;

ProtoInstance ProtoInstance354 = createNode("ProtoInstance");
ProtoInstance354.name = "Site";
ProtoInstance354.DEF = "hanim_sellion";
fieldValue fieldValue355 = createNode("fieldValue");
fieldValue355.name = "name";
fieldValue355.value = "sellion";
ProtoInstance354.fieldValue = new MFNode();

ProtoInstance354.fieldValue[0] = fieldValue355;

fieldValue fieldValue356 = createNode("fieldValue");
fieldValue356.name = "translation";
fieldValue356.value = "0.005799999926239252 1.631600022315979 0.0851999968290329";
ProtoInstance354.fieldValue[1] = fieldValue356;

fieldValue350.children[1] = ProtoInstance354;

ProtoInstance ProtoInstance357 = createNode("ProtoInstance");
ProtoInstance357.name = "Site";
ProtoInstance357.DEF = "hanim_r_infraorbitale";
fieldValue fieldValue358 = createNode("fieldValue");
fieldValue358.name = "name";
fieldValue358.value = "r_infraorbitale";
ProtoInstance357.fieldValue = new MFNode();

ProtoInstance357.fieldValue[0] = fieldValue358;

fieldValue fieldValue359 = createNode("fieldValue");
fieldValue359.name = "translation";
fieldValue359.value = "-0.02370000071823597 1.6171000003814697 0.07519999891519547";
ProtoInstance357.fieldValue[1] = fieldValue359;

fieldValue350.children[2] = ProtoInstance357;

ProtoInstance ProtoInstance360 = createNode("ProtoInstance");
ProtoInstance360.name = "Site";
ProtoInstance360.DEF = "hanim_l_infraorbitale";
fieldValue fieldValue361 = createNode("fieldValue");
fieldValue361.name = "name";
fieldValue361.value = "l_infraorbitale";
ProtoInstance360.fieldValue = new MFNode();

ProtoInstance360.fieldValue[0] = fieldValue361;

fieldValue fieldValue362 = createNode("fieldValue");
fieldValue362.name = "translation";
fieldValue362.value = "0.0340999998152256 1.6171000003814697 0.07519999891519547";
ProtoInstance360.fieldValue[1] = fieldValue362;

fieldValue350.children[3] = ProtoInstance360;

ProtoInstance ProtoInstance363 = createNode("ProtoInstance");
ProtoInstance363.name = "Site";
ProtoInstance363.DEF = "hanim_supramenton";
fieldValue fieldValue364 = createNode("fieldValue");
fieldValue364.name = "name";
fieldValue364.value = "supramenton";
ProtoInstance363.fieldValue = new MFNode();

ProtoInstance363.fieldValue[0] = fieldValue364;

fieldValue fieldValue365 = createNode("fieldValue");
fieldValue365.name = "translation";
fieldValue365.value = "0.006099999882280827 1.5410000085830688 0.08049999922513962";
ProtoInstance363.fieldValue[1] = fieldValue365;

fieldValue350.children[4] = ProtoInstance363;

ProtoInstance ProtoInstance366 = createNode("ProtoInstance");
ProtoInstance366.name = "Site";
ProtoInstance366.DEF = "hanim_r_tragion";
fieldValue fieldValue367 = createNode("fieldValue");
fieldValue367.name = "name";
fieldValue367.value = "r_tragion";
ProtoInstance366.fieldValue = new MFNode();

ProtoInstance366.fieldValue[0] = fieldValue367;

fieldValue fieldValue368 = createNode("fieldValue");
fieldValue368.name = "translation";
fieldValue368.value = "-0.06459999829530716 1.6346999406814575 0.03020000085234642";
ProtoInstance366.fieldValue[1] = fieldValue368;

fieldValue350.children[5] = ProtoInstance366;

ProtoInstance ProtoInstance369 = createNode("ProtoInstance");
ProtoInstance369.name = "Site";
ProtoInstance369.DEF = "hanim_r_gonion";
fieldValue fieldValue370 = createNode("fieldValue");
fieldValue370.name = "name";
fieldValue370.value = "r_gonion";
ProtoInstance369.fieldValue = new MFNode();

ProtoInstance369.fieldValue[0] = fieldValue370;

fieldValue fieldValue371 = createNode("fieldValue");
fieldValue371.name = "translation";
fieldValue371.value = "-0.052000001072883606 1.552899956703186 0.034699998795986176";
ProtoInstance369.fieldValue[1] = fieldValue371;

fieldValue350.children[6] = ProtoInstance369;

ProtoInstance ProtoInstance372 = createNode("ProtoInstance");
ProtoInstance372.name = "Site";
ProtoInstance372.DEF = "hanim_l_tragion";
fieldValue fieldValue373 = createNode("fieldValue");
fieldValue373.name = "name";
fieldValue373.value = "l_tragion";
ProtoInstance372.fieldValue = new MFNode();

ProtoInstance372.fieldValue[0] = fieldValue373;

fieldValue fieldValue374 = createNode("fieldValue");
fieldValue374.name = "translation";
fieldValue374.value = "0.0738999992609024 1.6347999572753906 0.028200000524520874";
ProtoInstance372.fieldValue[1] = fieldValue374;

fieldValue350.children[7] = ProtoInstance372;

ProtoInstance ProtoInstance375 = createNode("ProtoInstance");
ProtoInstance375.name = "Site";
ProtoInstance375.DEF = "hanim_l_gonion";
fieldValue fieldValue376 = createNode("fieldValue");
fieldValue376.name = "name";
fieldValue376.value = "l_gonion";
ProtoInstance375.fieldValue = new MFNode();

ProtoInstance375.fieldValue[0] = fieldValue376;

fieldValue fieldValue377 = createNode("fieldValue");
fieldValue377.name = "translation";
fieldValue377.value = "0.06310000270605087 1.5529999732971191 0.032999999821186066";
ProtoInstance375.fieldValue[1] = fieldValue377;

fieldValue350.children[8] = ProtoInstance375;

ProtoInstance ProtoInstance378 = createNode("ProtoInstance");
ProtoInstance378.name = "Site";
ProtoInstance378.DEF = "hanim_nuchale";
fieldValue fieldValue379 = createNode("fieldValue");
fieldValue379.name = "name";
fieldValue379.value = "nuchale";
ProtoInstance378.fieldValue = new MFNode();

ProtoInstance378.fieldValue[0] = fieldValue379;

fieldValue fieldValue380 = createNode("fieldValue");
fieldValue380.name = "translation";
fieldValue380.value = "0.0038999998942017555 1.5972000360488892 -0.07959999889135361";
ProtoInstance378.fieldValue[1] = fieldValue380;

fieldValue350.children[9] = ProtoInstance378;

ProtoInstance ProtoInstance381 = createNode("ProtoInstance");
ProtoInstance381.name = "Site";
ProtoInstance381.DEF = "hanim_r_clavicale";
fieldValue fieldValue382 = createNode("fieldValue");
fieldValue382.name = "name";
fieldValue382.value = "r_clavicale";
ProtoInstance381.fieldValue = new MFNode();

ProtoInstance381.fieldValue[0] = fieldValue382;

fieldValue fieldValue383 = createNode("fieldValue");
fieldValue383.name = "translation";
fieldValue383.value = "-0.011500000022351742 1.4943000078201294 0.03999999910593033";
ProtoInstance381.fieldValue[1] = fieldValue383;

fieldValue350.children[10] = ProtoInstance381;

ProtoInstance ProtoInstance384 = createNode("ProtoInstance");
ProtoInstance384.name = "Site";
ProtoInstance384.DEF = "hanim_suprasternale";
fieldValue fieldValue385 = createNode("fieldValue");
fieldValue385.name = "name";
fieldValue385.value = "suprasternale";
ProtoInstance384.fieldValue = new MFNode();

ProtoInstance384.fieldValue[0] = fieldValue385;

fieldValue fieldValue386 = createNode("fieldValue");
fieldValue386.name = "translation";
fieldValue386.value = "0.00839999970048666 1.4714000225067139 0.05510000139474869";
ProtoInstance384.fieldValue[1] = fieldValue386;

fieldValue350.children[11] = ProtoInstance384;

ProtoInstance ProtoInstance387 = createNode("ProtoInstance");
ProtoInstance387.name = "Site";
ProtoInstance387.DEF = "hanim_l_clavicale";
fieldValue fieldValue388 = createNode("fieldValue");
fieldValue388.name = "name";
fieldValue388.value = "l_clavicale";
ProtoInstance387.fieldValue = new MFNode();

ProtoInstance387.fieldValue[0] = fieldValue388;

fieldValue fieldValue389 = createNode("fieldValue");
fieldValue389.name = "translation";
fieldValue389.value = "0.02710000053048134 1.4943000078201294 0.039400000125169754";
ProtoInstance387.fieldValue[1] = fieldValue389;

fieldValue350.children[12] = ProtoInstance387;

ProtoInstance ProtoInstance390 = createNode("ProtoInstance");
ProtoInstance390.name = "Site";
ProtoInstance390.DEF = "hanim_r_thelion";
fieldValue fieldValue391 = createNode("fieldValue");
fieldValue391.name = "name";
fieldValue391.value = "r_thelion";
ProtoInstance390.fieldValue = new MFNode();

ProtoInstance390.fieldValue[0] = fieldValue391;

fieldValue fieldValue392 = createNode("fieldValue");
fieldValue392.name = "translation";
fieldValue392.value = "-0.07360000163316727 1.3385000228881836 0.1216999962925911";
ProtoInstance390.fieldValue[1] = fieldValue392;

fieldValue350.children[13] = ProtoInstance390;

ProtoInstance ProtoInstance393 = createNode("ProtoInstance");
ProtoInstance393.name = "Site";
ProtoInstance393.DEF = "hanim_l_thelion";
fieldValue fieldValue394 = createNode("fieldValue");
fieldValue394.name = "name";
fieldValue394.value = "l_thelion";
ProtoInstance393.fieldValue = new MFNode();

ProtoInstance393.fieldValue[0] = fieldValue394;

fieldValue fieldValue395 = createNode("fieldValue");
fieldValue395.name = "translation";
fieldValue395.value = "0.09179999679327011 1.3381999731063843 0.11919999867677689";
ProtoInstance393.fieldValue[1] = fieldValue395;

fieldValue350.children[14] = ProtoInstance393;

ProtoInstance ProtoInstance396 = createNode("ProtoInstance");
ProtoInstance396.name = "Site";
ProtoInstance396.DEF = "hanim_substernale";
fieldValue fieldValue397 = createNode("fieldValue");
fieldValue397.name = "name";
fieldValue397.value = "substernale";
ProtoInstance396.fieldValue = new MFNode();

ProtoInstance396.fieldValue[0] = fieldValue397;

fieldValue fieldValue398 = createNode("fieldValue");
fieldValue398.name = "translation";
fieldValue398.value = "0.008500000461935997 1.2994999885559082 0.11469999700784683";
ProtoInstance396.fieldValue[1] = fieldValue398;

fieldValue350.children[15] = ProtoInstance396;

ProtoInstance ProtoInstance399 = createNode("ProtoInstance");
ProtoInstance399.name = "Site";
ProtoInstance399.DEF = "hanim_r_rib10";
fieldValue fieldValue400 = createNode("fieldValue");
fieldValue400.name = "name";
fieldValue400.value = "r_rib10";
ProtoInstance399.fieldValue = new MFNode();

ProtoInstance399.fieldValue[0] = fieldValue400;

fieldValue fieldValue401 = createNode("fieldValue");
fieldValue401.name = "translation";
fieldValue401.value = "-0.07109999656677246 1.194100022315979 0.10159999877214432";
ProtoInstance399.fieldValue[1] = fieldValue401;

fieldValue350.children[16] = ProtoInstance399;

ProtoInstance ProtoInstance402 = createNode("ProtoInstance");
ProtoInstance402.name = "Site";
ProtoInstance402.DEF = "hanim_r_asis";
fieldValue fieldValue403 = createNode("fieldValue");
fieldValue403.name = "name";
fieldValue403.value = "r_asis";
ProtoInstance402.fieldValue = new MFNode();

ProtoInstance402.fieldValue[0] = fieldValue403;

fieldValue fieldValue404 = createNode("fieldValue");
fieldValue404.name = "translation";
fieldValue404.value = "-0.08869999647140503 1.0020999908447266 0.1111999973654747";
ProtoInstance402.fieldValue[1] = fieldValue404;

fieldValue350.children[17] = ProtoInstance402;

ProtoInstance ProtoInstance405 = createNode("ProtoInstance");
ProtoInstance405.name = "Site";
ProtoInstance405.DEF = "hanim_l_rib10";
fieldValue fieldValue406 = createNode("fieldValue");
fieldValue406.name = "name";
fieldValue406.value = "l_rib10";
ProtoInstance405.fieldValue = new MFNode();

ProtoInstance405.fieldValue[0] = fieldValue406;

fieldValue fieldValue407 = createNode("fieldValue");
fieldValue407.name = "translation";
fieldValue407.value = "0.08709999918937683 1.1924999952316284 0.09920000284910202";
ProtoInstance405.fieldValue[1] = fieldValue407;

fieldValue350.children[18] = ProtoInstance405;

ProtoInstance ProtoInstance408 = createNode("ProtoInstance");
ProtoInstance408.name = "Site";
ProtoInstance408.DEF = "hanim_l_asis";
fieldValue fieldValue409 = createNode("fieldValue");
fieldValue409.name = "name";
fieldValue409.value = "l_asis";
ProtoInstance408.fieldValue = new MFNode();

ProtoInstance408.fieldValue[0] = fieldValue409;

fieldValue fieldValue410 = createNode("fieldValue");
fieldValue410.name = "translation";
fieldValue410.value = "0.0925000011920929 0.9983000159263611 0.10520000010728836";
ProtoInstance408.fieldValue[1] = fieldValue410;

fieldValue350.children[19] = ProtoInstance408;

ProtoInstance ProtoInstance411 = createNode("ProtoInstance");
ProtoInstance411.name = "Site";
ProtoInstance411.DEF = "hanim_r_iliocristale";
fieldValue fieldValue412 = createNode("fieldValue");
fieldValue412.name = "name";
fieldValue412.value = "r_iliocristale";
ProtoInstance411.fieldValue = new MFNode();

ProtoInstance411.fieldValue[0] = fieldValue412;

fieldValue fieldValue413 = createNode("fieldValue");
fieldValue413.name = "translation";
fieldValue413.value = "-0.1525000035762787 1.0628000497817993 0.0035000001080334187";
ProtoInstance411.fieldValue[1] = fieldValue413;

fieldValue350.children[20] = ProtoInstance411;

ProtoInstance ProtoInstance414 = createNode("ProtoInstance");
ProtoInstance414.name = "Site";
ProtoInstance414.DEF = "hanim_r_trochanterion";
fieldValue fieldValue415 = createNode("fieldValue");
fieldValue415.name = "name";
fieldValue415.value = "r_trochanterion";
ProtoInstance414.fieldValue = new MFNode();

ProtoInstance414.fieldValue[0] = fieldValue415;

fieldValue fieldValue416 = createNode("fieldValue");
fieldValue416.name = "translation";
fieldValue416.value = "-0.1688999980688095 0.8418999910354614 0.03519999980926514";
ProtoInstance414.fieldValue[1] = fieldValue416;

fieldValue350.children[21] = ProtoInstance414;

ProtoInstance ProtoInstance417 = createNode("ProtoInstance");
ProtoInstance417.name = "Site";
ProtoInstance417.DEF = "hanim_l_iliocristale";
fieldValue fieldValue418 = createNode("fieldValue");
fieldValue418.name = "name";
fieldValue418.value = "l_iliocristale";
ProtoInstance417.fieldValue = new MFNode();

ProtoInstance417.fieldValue[0] = fieldValue418;

fieldValue fieldValue419 = createNode("fieldValue");
fieldValue419.name = "translation";
fieldValue419.value = "0.16120000183582306 1.0536999702453613 0.0007999999797903001";
ProtoInstance417.fieldValue[1] = fieldValue419;

fieldValue350.children[22] = ProtoInstance417;

ProtoInstance ProtoInstance420 = createNode("ProtoInstance");
ProtoInstance420.name = "Site";
ProtoInstance420.DEF = "hanim_l_trochanterion";
fieldValue fieldValue421 = createNode("fieldValue");
fieldValue421.name = "name";
fieldValue421.value = "l_trochanterion";
ProtoInstance420.fieldValue = new MFNode();

ProtoInstance420.fieldValue[0] = fieldValue421;

fieldValue fieldValue422 = createNode("fieldValue");
fieldValue422.name = "translation";
fieldValue422.value = "0.16769999265670776 0.8335999846458435 0.030300000682473183";
ProtoInstance420.fieldValue[1] = fieldValue422;

fieldValue350.children[23] = ProtoInstance420;

ProtoInstance ProtoInstance423 = createNode("ProtoInstance");
ProtoInstance423.name = "Site";
ProtoInstance423.DEF = "hanim_cervicale";
fieldValue fieldValue424 = createNode("fieldValue");
fieldValue424.name = "name";
fieldValue424.value = "cervicale";
ProtoInstance423.fieldValue = new MFNode();

ProtoInstance423.fieldValue[0] = fieldValue424;

fieldValue fieldValue425 = createNode("fieldValue");
fieldValue425.name = "translation";
fieldValue425.value = "0.006399999838322401 1.5199999809265137 -0.08150000125169754";
ProtoInstance423.fieldValue[1] = fieldValue425;

fieldValue350.children[24] = ProtoInstance423;

ProtoInstance ProtoInstance426 = createNode("ProtoInstance");
ProtoInstance426.name = "Site";
ProtoInstance426.DEF = "hanim_spine_2_lower_back";
fieldValue fieldValue427 = createNode("fieldValue");
fieldValue427.name = "name";
fieldValue427.value = "spine_2_lower_back";
ProtoInstance426.fieldValue = new MFNode();

ProtoInstance426.fieldValue[0] = fieldValue427;

fieldValue fieldValue428 = createNode("fieldValue");
fieldValue428.name = "translation";
fieldValue428.value = "0.004900000058114529 1.1907999515533447 -0.11129999905824661";
ProtoInstance426.fieldValue[1] = fieldValue428;

fieldValue350.children[25] = ProtoInstance426;

ProtoInstance ProtoInstance429 = createNode("ProtoInstance");
ProtoInstance429.name = "Site";
ProtoInstance429.DEF = "hanim_r_psis";
fieldValue fieldValue430 = createNode("fieldValue");
fieldValue430.name = "name";
fieldValue430.value = "r_psis";
ProtoInstance429.fieldValue = new MFNode();

ProtoInstance429.fieldValue[0] = fieldValue430;

fieldValue fieldValue431 = createNode("fieldValue");
fieldValue431.name = "translation";
fieldValue431.value = "-0.07159999758005142 1.0190000534057617 -0.11379999667406082";
ProtoInstance429.fieldValue[1] = fieldValue431;

fieldValue350.children[26] = ProtoInstance429;

ProtoInstance ProtoInstance432 = createNode("ProtoInstance");
ProtoInstance432.name = "Site";
ProtoInstance432.DEF = "hanim_l_psis";
fieldValue fieldValue433 = createNode("fieldValue");
fieldValue433.name = "name";
fieldValue433.value = "l_psis";
ProtoInstance432.fieldValue = new MFNode();

ProtoInstance432.fieldValue[0] = fieldValue433;

fieldValue fieldValue434 = createNode("fieldValue");
fieldValue434.name = "translation";
fieldValue434.value = "0.07739999890327454 1.0190000534057617 -0.11509999632835388";
ProtoInstance432.fieldValue[1] = fieldValue434;

fieldValue350.children[27] = ProtoInstance432;

ProtoInstance ProtoInstance435 = createNode("ProtoInstance");
ProtoInstance435.name = "Site";
ProtoInstance435.DEF = "hanim_waist_preferred_posterior";
fieldValue fieldValue436 = createNode("fieldValue");
fieldValue436.name = "name";
fieldValue436.value = "waist_preferred_posterior";
ProtoInstance435.fieldValue = new MFNode();

ProtoInstance435.fieldValue[0] = fieldValue436;

fieldValue fieldValue437 = createNode("fieldValue");
fieldValue437.name = "translation";
fieldValue437.value = "0.28999999165534973 1.0915000438690186 -0.10909999907016754";
ProtoInstance435.fieldValue[1] = fieldValue437;

fieldValue350.children[28] = ProtoInstance435;

ProtoInstance ProtoInstance438 = createNode("ProtoInstance");
ProtoInstance438.name = "Site";
ProtoInstance438.DEF = "hanim_r_acromion";
fieldValue fieldValue439 = createNode("fieldValue");
fieldValue439.name = "name";
fieldValue439.value = "r_acromion";
ProtoInstance438.fieldValue = new MFNode();

ProtoInstance438.fieldValue[0] = fieldValue439;

fieldValue fieldValue440 = createNode("fieldValue");
fieldValue440.name = "translation";
fieldValue440.value = "-0.19050000607967377 1.479099988937378 -0.04309999942779541";
ProtoInstance438.fieldValue[1] = fieldValue440;

fieldValue350.children[29] = ProtoInstance438;

ProtoInstance ProtoInstance441 = createNode("ProtoInstance");
ProtoInstance441.name = "Site";
ProtoInstance441.DEF = "hanim_r_axilla_proximal";
fieldValue fieldValue442 = createNode("fieldValue");
fieldValue442.name = "name";
fieldValue442.value = "r_axilla_proximal";
ProtoInstance441.fieldValue = new MFNode();

ProtoInstance441.fieldValue[0] = fieldValue442;

fieldValue fieldValue443 = createNode("fieldValue");
fieldValue443.name = "translation";
fieldValue443.value = "-0.16259999573230743 1.4071999788284302 -0.003100000089034438";
ProtoInstance441.fieldValue[1] = fieldValue443;

fieldValue350.children[30] = ProtoInstance441;

ProtoInstance ProtoInstance444 = createNode("ProtoInstance");
ProtoInstance444.name = "Site";
ProtoInstance444.DEF = "hanim_r_radial_styloid";
fieldValue fieldValue445 = createNode("fieldValue");
fieldValue445.name = "name";
fieldValue445.value = "r_radial_styloid";
ProtoInstance444.fieldValue = new MFNode();

ProtoInstance444.fieldValue[0] = fieldValue445;

fieldValue fieldValue446 = createNode("fieldValue");
fieldValue446.name = "translation";
fieldValue446.value = "-0.188400000333786 0.8676000237464905 -0.035999998450279236";
ProtoInstance444.fieldValue[1] = fieldValue446;

fieldValue350.children[31] = ProtoInstance444;

ProtoInstance ProtoInstance447 = createNode("ProtoInstance");
ProtoInstance447.name = "Site";
ProtoInstance447.DEF = "hanim_r_axilla_distal";
fieldValue fieldValue448 = createNode("fieldValue");
fieldValue448.name = "name";
fieldValue448.value = "r_axilla_distal";
ProtoInstance447.fieldValue = new MFNode();

ProtoInstance447.fieldValue[0] = fieldValue448;

fieldValue fieldValue449 = createNode("fieldValue");
fieldValue449.name = "translation";
fieldValue449.value = "-0.16030000150203705 1.4098000526428223 -0.08259999752044678";
ProtoInstance447.fieldValue[1] = fieldValue449;

fieldValue350.children[32] = ProtoInstance447;

ProtoInstance ProtoInstance450 = createNode("ProtoInstance");
ProtoInstance450.name = "Site";
ProtoInstance450.DEF = "hanim_r_olecranon";
fieldValue fieldValue451 = createNode("fieldValue");
fieldValue451.name = "name";
fieldValue451.value = "r_olecranon";
ProtoInstance450.fieldValue = new MFNode();

ProtoInstance450.fieldValue[0] = fieldValue451;

fieldValue fieldValue452 = createNode("fieldValue");
fieldValue452.name = "translation";
fieldValue452.value = "-0.1906999945640564 1.1404999494552612 -0.10649999976158142";
ProtoInstance450.fieldValue[1] = fieldValue452;

fieldValue350.children[33] = ProtoInstance450;

ProtoInstance ProtoInstance453 = createNode("ProtoInstance");
ProtoInstance453.name = "Site";
ProtoInstance453.DEF = "hanim_r_humeral_lateral_epicondyles";
fieldValue fieldValue454 = createNode("fieldValue");
fieldValue454.name = "name";
fieldValue454.value = "r_humeral_lateral_epicondyles";
ProtoInstance453.fieldValue = new MFNode();

ProtoInstance453.fieldValue[0] = fieldValue454;

fieldValue fieldValue455 = createNode("fieldValue");
fieldValue455.name = "translation";
fieldValue455.value = "-0.2223999947309494 1.1517000198364258 -0.10329999774694443";
ProtoInstance453.fieldValue[1] = fieldValue455;

fieldValue350.children[34] = ProtoInstance453;

ProtoInstance ProtoInstance456 = createNode("ProtoInstance");
ProtoInstance456.name = "Site";
ProtoInstance456.DEF = "hanim_r_humeral_medial_epicondyles";
fieldValue fieldValue457 = createNode("fieldValue");
fieldValue457.name = "name";
fieldValue457.value = "r_humeral_medial_epicondyles";
ProtoInstance456.fieldValue = new MFNode();

ProtoInstance456.fieldValue[0] = fieldValue457;

fieldValue fieldValue458 = createNode("fieldValue");
fieldValue458.name = "translation";
fieldValue458.value = "-0.1679999977350235 1.1297999620437622 -0.10620000213384628";
ProtoInstance456.fieldValue[1] = fieldValue458;

fieldValue350.children[35] = ProtoInstance456;

ProtoInstance ProtoInstance459 = createNode("ProtoInstance");
ProtoInstance459.name = "Site";
ProtoInstance459.DEF = "hanim_r_radiale";
fieldValue fieldValue460 = createNode("fieldValue");
fieldValue460.name = "name";
fieldValue460.value = "r_radiale";
ProtoInstance459.fieldValue = new MFNode();

ProtoInstance459.fieldValue[0] = fieldValue460;

fieldValue fieldValue461 = createNode("fieldValue");
fieldValue461.name = "translation";
fieldValue461.value = "-0.21299999952316284 1.1304999589920044 -0.10909999907016754";
ProtoInstance459.fieldValue[1] = fieldValue461;

fieldValue350.children[36] = ProtoInstance459;

ProtoInstance ProtoInstance462 = createNode("ProtoInstance");
ProtoInstance462.name = "Site";
ProtoInstance462.DEF = "hanim_r_metacarpal_phalanx_2";
fieldValue fieldValue463 = createNode("fieldValue");
fieldValue463.name = "name";
fieldValue463.value = "r_metacarpal_phalanx_2";
ProtoInstance462.fieldValue = new MFNode();

ProtoInstance462.fieldValue[0] = fieldValue463;

fieldValue fieldValue464 = createNode("fieldValue");
fieldValue464.name = "translation";
fieldValue464.value = "-0.19769999384880066 0.8169000148773193 -0.01769999973475933";
ProtoInstance462.fieldValue[1] = fieldValue464;

fieldValue350.children[37] = ProtoInstance462;

ProtoInstance ProtoInstance465 = createNode("ProtoInstance");
ProtoInstance465.name = "Site";
ProtoInstance465.DEF = "hanim_r_dactylion";
fieldValue fieldValue466 = createNode("fieldValue");
fieldValue466.name = "name";
fieldValue466.value = "r_dactylion";
ProtoInstance465.fieldValue = new MFNode();

ProtoInstance465.fieldValue[0] = fieldValue466;

fieldValue fieldValue467 = createNode("fieldValue");
fieldValue467.name = "translation";
fieldValue467.value = "-0.1941000074148178 0.6772000193595886 -0.04230000078678131";
ProtoInstance465.fieldValue[1] = fieldValue467;

fieldValue350.children[38] = ProtoInstance465;

ProtoInstance ProtoInstance468 = createNode("ProtoInstance");
ProtoInstance468.name = "Site";
ProtoInstance468.DEF = "hanim_r_ulnar_styloid";
fieldValue fieldValue469 = createNode("fieldValue");
fieldValue469.name = "name";
fieldValue469.value = "r_ulnar_styloid";
ProtoInstance468.fieldValue = new MFNode();

ProtoInstance468.fieldValue[0] = fieldValue469;

fieldValue fieldValue470 = createNode("fieldValue");
fieldValue470.name = "translation";
fieldValue470.value = "-0.21170000731945038 0.8561999797821045 -0.058400001376867294";
ProtoInstance468.fieldValue[1] = fieldValue470;

fieldValue350.children[39] = ProtoInstance468;

ProtoInstance ProtoInstance471 = createNode("ProtoInstance");
ProtoInstance471.name = "Site";
ProtoInstance471.DEF = "hanim_r_metacarpal_phalanx_5";
fieldValue fieldValue472 = createNode("fieldValue");
fieldValue472.name = "name";
fieldValue472.value = "r_metacarpal_phalanx_5";
ProtoInstance471.fieldValue = new MFNode();

ProtoInstance471.fieldValue[0] = fieldValue472;

fieldValue fieldValue473 = createNode("fieldValue");
fieldValue473.name = "translation";
fieldValue473.value = "-0.19290000200271606 0.7889999747276306 -0.10639999806880951";
ProtoInstance471.fieldValue[1] = fieldValue473;

fieldValue350.children[40] = ProtoInstance471;

ProtoInstance ProtoInstance474 = createNode("ProtoInstance");
ProtoInstance474.name = "Site";
ProtoInstance474.DEF = "hanim_l_acromion";
fieldValue fieldValue475 = createNode("fieldValue");
fieldValue475.name = "name";
fieldValue475.value = "l_acromion";
ProtoInstance474.fieldValue = new MFNode();

ProtoInstance474.fieldValue[0] = fieldValue475;

fieldValue fieldValue476 = createNode("fieldValue");
fieldValue476.name = "translation";
fieldValue476.value = "0.20319999754428864 1.4759999513626099 -0.04899999871850014";
ProtoInstance474.fieldValue[1] = fieldValue476;

fieldValue350.children[41] = ProtoInstance474;

ProtoInstance ProtoInstance477 = createNode("ProtoInstance");
ProtoInstance477.name = "Site";
ProtoInstance477.DEF = "hanim_l_axilla_proximal";
fieldValue fieldValue478 = createNode("fieldValue");
fieldValue478.name = "name";
fieldValue478.value = "l_axilla_proximal";
ProtoInstance477.fieldValue = new MFNode();

ProtoInstance477.fieldValue[0] = fieldValue478;

fieldValue fieldValue479 = createNode("fieldValue");
fieldValue479.name = "translation";
fieldValue479.value = "0.1776999980211258 1.406499981880188 -0.007499999832361937";
ProtoInstance477.fieldValue[1] = fieldValue479;

fieldValue350.children[42] = ProtoInstance477;

ProtoInstance ProtoInstance480 = createNode("ProtoInstance");
ProtoInstance480.name = "Site";
ProtoInstance480.DEF = "hanim_l_radial_styloid";
fieldValue fieldValue481 = createNode("fieldValue");
fieldValue481.name = "name";
fieldValue481.value = "l_radial_styloid";
ProtoInstance480.fieldValue = new MFNode();

ProtoInstance480.fieldValue[0] = fieldValue481;

fieldValue fieldValue482 = createNode("fieldValue");
fieldValue482.name = "translation";
fieldValue482.value = "0.19009999930858612 0.8644999861717224 -0.04149999842047691";
ProtoInstance480.fieldValue[1] = fieldValue482;

fieldValue350.children[43] = ProtoInstance480;

ProtoInstance ProtoInstance483 = createNode("ProtoInstance");
ProtoInstance483.name = "Site";
ProtoInstance483.DEF = "hanim_l_axilla_distal";
fieldValue fieldValue484 = createNode("fieldValue");
fieldValue484.name = "name";
fieldValue484.value = "l_axilla_distal";
ProtoInstance483.fieldValue = new MFNode();

ProtoInstance483.fieldValue[0] = fieldValue484;

fieldValue fieldValue485 = createNode("fieldValue");
fieldValue485.name = "translation";
fieldValue485.value = "0.17059999704360962 1.4071999788284302 -0.08749999850988388";
ProtoInstance483.fieldValue[1] = fieldValue485;

fieldValue350.children[44] = ProtoInstance483;

ProtoInstance ProtoInstance486 = createNode("ProtoInstance");
ProtoInstance486.name = "Site";
ProtoInstance486.DEF = "hanim_l_olecranon";
fieldValue fieldValue487 = createNode("fieldValue");
fieldValue487.name = "name";
fieldValue487.value = "l_olecranon";
ProtoInstance486.fieldValue = new MFNode();

ProtoInstance486.fieldValue[0] = fieldValue487;

fieldValue fieldValue488 = createNode("fieldValue");
fieldValue488.name = "translation";
fieldValue488.value = "-0.19619999825954437 1.1375000476837158 -0.11230000108480453";
ProtoInstance486.fieldValue[1] = fieldValue488;

fieldValue350.children[45] = ProtoInstance486;

ProtoInstance ProtoInstance489 = createNode("ProtoInstance");
ProtoInstance489.name = "Site";
ProtoInstance489.DEF = "hanim_l_humeral_lateral_epicondyles";
fieldValue fieldValue490 = createNode("fieldValue");
fieldValue490.name = "name";
fieldValue490.value = "l_humeral_lateral_epicondyles";
ProtoInstance489.fieldValue = new MFNode();

ProtoInstance489.fieldValue[0] = fieldValue490;

fieldValue fieldValue491 = createNode("fieldValue");
fieldValue491.name = "translation";
fieldValue491.value = "0.2280000001192093 1.1482000350952148 -0.10999999940395355";
ProtoInstance489.fieldValue[1] = fieldValue491;

fieldValue350.children[46] = ProtoInstance489;

ProtoInstance ProtoInstance492 = createNode("ProtoInstance");
ProtoInstance492.name = "Site";
ProtoInstance492.DEF = "hanim_l_humeral_medial_epicondyles";
fieldValue fieldValue493 = createNode("fieldValue");
fieldValue493.name = "name";
fieldValue493.value = "l_humeral_medial_epicondyles";
ProtoInstance492.fieldValue = new MFNode();

ProtoInstance492.fieldValue[0] = fieldValue493;

fieldValue fieldValue494 = createNode("fieldValue");
fieldValue494.name = "translation";
fieldValue494.value = "0.17350000143051147 1.1272000074386597 -0.11129999905824661";
ProtoInstance492.fieldValue[1] = fieldValue494;

fieldValue350.children[47] = ProtoInstance492;

ProtoInstance ProtoInstance495 = createNode("ProtoInstance");
ProtoInstance495.name = "Site";
ProtoInstance495.DEF = "hanim_l_radiale";
fieldValue fieldValue496 = createNode("fieldValue");
fieldValue496.name = "name";
fieldValue496.value = "l_radiale";
ProtoInstance495.fieldValue = new MFNode();

ProtoInstance495.fieldValue[0] = fieldValue496;

fieldValue fieldValue497 = createNode("fieldValue");
fieldValue497.name = "translation";
fieldValue497.value = "0.21819999814033508 1.1211999654769897 -0.11670000106096268";
ProtoInstance495.fieldValue[1] = fieldValue497;

fieldValue350.children[48] = ProtoInstance495;

ProtoInstance ProtoInstance498 = createNode("ProtoInstance");
ProtoInstance498.name = "Site";
ProtoInstance498.DEF = "hanim_l_metacarpal_phalanx_2";
fieldValue fieldValue499 = createNode("fieldValue");
fieldValue499.name = "name";
fieldValue499.value = "l_metacarpal_phalanx_2";
ProtoInstance498.fieldValue = new MFNode();

ProtoInstance498.fieldValue[0] = fieldValue499;

fieldValue fieldValue500 = createNode("fieldValue");
fieldValue500.name = "translation";
fieldValue500.value = "0.20090000331401825 0.8138999938964844 -0.02370000071823597";
ProtoInstance498.fieldValue[1] = fieldValue500;

fieldValue350.children[49] = ProtoInstance498;

ProtoInstance ProtoInstance501 = createNode("ProtoInstance");
ProtoInstance501.name = "Site";
ProtoInstance501.DEF = "hanim_l_dactylion";
fieldValue fieldValue502 = createNode("fieldValue");
fieldValue502.name = "name";
fieldValue502.value = "l_dactylion";
ProtoInstance501.fieldValue = new MFNode();

ProtoInstance501.fieldValue[0] = fieldValue502;

fieldValue fieldValue503 = createNode("fieldValue");
fieldValue503.name = "translation";
fieldValue503.value = "0.20559999346733093 0.6743000149726868 -0.04820000007748604";
ProtoInstance501.fieldValue[1] = fieldValue503;

fieldValue350.children[50] = ProtoInstance501;

ProtoInstance ProtoInstance504 = createNode("ProtoInstance");
ProtoInstance504.name = "Site";
ProtoInstance504.DEF = "hanim_l_ulnar_styloid";
fieldValue fieldValue505 = createNode("fieldValue");
fieldValue505.name = "name";
fieldValue505.value = "l_ulnar_styloid";
ProtoInstance504.fieldValue = new MFNode();

ProtoInstance504.fieldValue[0] = fieldValue505;

fieldValue fieldValue506 = createNode("fieldValue");
fieldValue506.name = "translation";
fieldValue506.value = "-0.2142000049352646 0.8529000282287598 -0.06480000168085098";
ProtoInstance504.fieldValue[1] = fieldValue506;

fieldValue350.children[51] = ProtoInstance504;

ProtoInstance ProtoInstance507 = createNode("ProtoInstance");
ProtoInstance507.name = "Site";
ProtoInstance507.DEF = "hanim_l_metacarpal_phalanx_5";
fieldValue fieldValue508 = createNode("fieldValue");
fieldValue508.name = "name";
fieldValue508.value = "l_metacarpal_phalanx_5";
ProtoInstance507.fieldValue = new MFNode();

ProtoInstance507.fieldValue[0] = fieldValue508;

fieldValue fieldValue509 = createNode("fieldValue");
fieldValue509.name = "translation";
fieldValue509.value = "0.19290000200271606 0.7860000133514404 -0.11219999939203262";
ProtoInstance507.fieldValue[1] = fieldValue509;

fieldValue350.children[52] = ProtoInstance507;

ProtoInstance ProtoInstance510 = createNode("ProtoInstance");
ProtoInstance510.name = "Site";
ProtoInstance510.DEF = "hanim_r_knee_crease";
fieldValue fieldValue511 = createNode("fieldValue");
fieldValue511.name = "name";
fieldValue511.value = "r_knee_crease";
ProtoInstance510.fieldValue = new MFNode();

ProtoInstance510.fieldValue[0] = fieldValue511;

fieldValue fieldValue512 = createNode("fieldValue");
fieldValue512.name = "translation";
fieldValue512.value = "-0.08250000327825546 0.49320000410079956 -0.032600000500679016";
ProtoInstance510.fieldValue[1] = fieldValue512;

fieldValue350.children[53] = ProtoInstance510;

ProtoInstance ProtoInstance513 = createNode("ProtoInstance");
ProtoInstance513.name = "Site";
ProtoInstance513.DEF = "hanim_r_femoral_lateral_epicondyles";
fieldValue fieldValue514 = createNode("fieldValue");
fieldValue514.name = "name";
fieldValue514.value = "r_femoral_lateral_epicondyles";
ProtoInstance513.fieldValue = new MFNode();

ProtoInstance513.fieldValue[0] = fieldValue514;

fieldValue fieldValue515 = createNode("fieldValue");
fieldValue515.name = "translation";
fieldValue515.value = "-0.1421000063419342 0.4991999864578247 0.03099999949336052";
ProtoInstance513.fieldValue[1] = fieldValue515;

fieldValue350.children[54] = ProtoInstance513;

ProtoInstance ProtoInstance516 = createNode("ProtoInstance");
ProtoInstance516.name = "Site";
ProtoInstance516.DEF = "hanim_r_femoral_medial_epicondyles";
fieldValue fieldValue517 = createNode("fieldValue");
fieldValue517.name = "name";
fieldValue517.value = "r_femoral_lateral_epicondyles";
ProtoInstance516.fieldValue = new MFNode();

ProtoInstance516.fieldValue[0] = fieldValue517;

fieldValue fieldValue518 = createNode("fieldValue");
fieldValue518.name = "translation";
fieldValue518.value = "-0.022099999710917473 0.5013999938964844 0.02889999933540821";
ProtoInstance516.fieldValue[1] = fieldValue518;

fieldValue350.children[55] = ProtoInstance516;

ProtoInstance ProtoInstance519 = createNode("ProtoInstance");
ProtoInstance519.name = "Site";
ProtoInstance519.DEF = "hanim_r_tarsal_interphalangeal_phalanx_5";
fieldValue fieldValue520 = createNode("fieldValue");
fieldValue520.name = "name";
fieldValue520.value = "r_tarsal_interphalangeal_phalanx_5";
ProtoInstance519.fieldValue = new MFNode();

ProtoInstance519.fieldValue[0] = fieldValue520;

fieldValue fieldValue521 = createNode("fieldValue");
fieldValue521.name = "translation";
fieldValue521.value = "-0.15230000019073486 0.016599999740719795 0.08950000256299973";
ProtoInstance519.fieldValue[1] = fieldValue521;

fieldValue350.children[56] = ProtoInstance519;

ProtoInstance ProtoInstance522 = createNode("ProtoInstance");
ProtoInstance522.name = "Site";
ProtoInstance522.DEF = "hanim_r_lateral_malleolus";
fieldValue fieldValue523 = createNode("fieldValue");
fieldValue523.name = "name";
fieldValue523.value = "r_lateral_malleolus";
ProtoInstance522.fieldValue = new MFNode();

ProtoInstance522.fieldValue[0] = fieldValue523;

fieldValue fieldValue524 = createNode("fieldValue");
fieldValue524.name = "translation";
fieldValue524.value = "-0.1005999967455864 0.0658000037074089 -0.10750000178813934";
ProtoInstance522.fieldValue[1] = fieldValue524;

fieldValue350.children[57] = ProtoInstance522;

ProtoInstance ProtoInstance525 = createNode("ProtoInstance");
ProtoInstance525.name = "Site";
ProtoInstance525.DEF = "hanim_r_medial_malleolus";
fieldValue fieldValue526 = createNode("fieldValue");
fieldValue526.name = "name";
fieldValue526.value = "r_medial_malleolus";
ProtoInstance525.fieldValue = new MFNode();

ProtoInstance525.fieldValue[0] = fieldValue526;

fieldValue fieldValue527 = createNode("fieldValue");
fieldValue527.name = "translation";
fieldValue527.value = "-0.05909999832510948 0.07599999755620956 -0.09279999881982803";
ProtoInstance525.fieldValue[1] = fieldValue527;

fieldValue350.children[58] = ProtoInstance525;

ProtoInstance ProtoInstance528 = createNode("ProtoInstance");
ProtoInstance528.name = "Site";
ProtoInstance528.DEF = "hanim_r_sphyrion";
fieldValue fieldValue529 = createNode("fieldValue");
fieldValue529.name = "name";
fieldValue529.value = "r_sphyrion";
ProtoInstance528.fieldValue = new MFNode();

ProtoInstance528.fieldValue[0] = fieldValue529;

fieldValue fieldValue530 = createNode("fieldValue");
fieldValue530.name = "translation";
fieldValue530.value = "-0.06030000001192093 0.061000000685453415 -0.10019999742507935";
ProtoInstance528.fieldValue[1] = fieldValue530;

fieldValue350.children[59] = ProtoInstance528;

ProtoInstance ProtoInstance531 = createNode("ProtoInstance");
ProtoInstance531.name = "Site";
ProtoInstance531.DEF = "hanim_r_tarsal_interphalangeal_phalanx_1";
fieldValue fieldValue532 = createNode("fieldValue");
fieldValue532.name = "name";
fieldValue532.value = "r_tarsal_interphalangeal_phalanx_1";
ProtoInstance531.fieldValue = new MFNode();

ProtoInstance531.fieldValue[0] = fieldValue532;

fieldValue fieldValue533 = createNode("fieldValue");
fieldValue533.name = "translation";
fieldValue533.value = "-0.05209999904036522 0.026000000536441803 0.01269999984651804";
ProtoInstance531.fieldValue[1] = fieldValue533;

fieldValue350.children[60] = ProtoInstance531;

ProtoInstance ProtoInstance534 = createNode("ProtoInstance");
ProtoInstance534.name = "Site";
ProtoInstance534.DEF = "hanim_r_calcaneus_posterior";
fieldValue fieldValue535 = createNode("fieldValue");
fieldValue535.name = "name";
fieldValue535.value = "r_calcaneus_posterior";
ProtoInstance534.fieldValue = new MFNode();

ProtoInstance534.fieldValue[0] = fieldValue535;

fieldValue fieldValue536 = createNode("fieldValue");
fieldValue536.name = "translation";
fieldValue536.value = "-0.06920000165700912 0.02969999983906746 -0.12210000306367874";
ProtoInstance534.fieldValue[1] = fieldValue536;

fieldValue350.children[61] = ProtoInstance534;

ProtoInstance ProtoInstance537 = createNode("ProtoInstance");
ProtoInstance537.name = "Site";
ProtoInstance537.DEF = "hanim_r_tarsal_distal_phalanx_2";
fieldValue fieldValue538 = createNode("fieldValue");
fieldValue538.name = "name";
fieldValue538.value = "r_tarsal_distal_phalanx_2";
ProtoInstance537.fieldValue = new MFNode();

ProtoInstance537.fieldValue[0] = fieldValue538;

fieldValue fieldValue539 = createNode("fieldValue");
fieldValue539.name = "translation";
fieldValue539.value = "-0.08829999715089798 0.013399999588727951 0.13830000162124634";
ProtoInstance537.fieldValue[1] = fieldValue539;

fieldValue350.children[62] = ProtoInstance537;

ProtoInstance ProtoInstance540 = createNode("ProtoInstance");
ProtoInstance540.name = "Site";
ProtoInstance540.DEF = "hanim_l_knee_crease";
fieldValue fieldValue541 = createNode("fieldValue");
fieldValue541.name = "name";
fieldValue541.value = "l_knee_crease";
ProtoInstance540.fieldValue = new MFNode();

ProtoInstance540.fieldValue[0] = fieldValue541;

fieldValue fieldValue542 = createNode("fieldValue");
fieldValue542.name = "translation";
fieldValue542.value = "0.09929999709129333 0.48809999227523804 -0.030899999663233757";
ProtoInstance540.fieldValue[1] = fieldValue542;

fieldValue350.children[63] = ProtoInstance540;

ProtoInstance ProtoInstance543 = createNode("ProtoInstance");
ProtoInstance543.name = "Site";
ProtoInstance543.DEF = "hanim_l_femoral_lateral_epicondyles";
fieldValue fieldValue544 = createNode("fieldValue");
fieldValue544.name = "name";
fieldValue544.value = "l_femoral_lateral_epicondyles";
ProtoInstance543.fieldValue = new MFNode();

ProtoInstance543.fieldValue[0] = fieldValue544;

fieldValue fieldValue545 = createNode("fieldValue");
fieldValue545.name = "translation";
fieldValue545.value = "0.1597999930381775 0.4966999888420105 0.02969999983906746";
ProtoInstance543.fieldValue[1] = fieldValue545;

fieldValue350.children[64] = ProtoInstance543;

ProtoInstance ProtoInstance546 = createNode("ProtoInstance");
ProtoInstance546.name = "Site";
ProtoInstance546.DEF = "hanim_l_femoral_medial_epicondyles";
fieldValue fieldValue547 = createNode("fieldValue");
fieldValue547.name = "name";
fieldValue547.value = "l_femoral_lateral_epicondyles";
ProtoInstance546.fieldValue = new MFNode();

ProtoInstance546.fieldValue[0] = fieldValue547;

fieldValue fieldValue548 = createNode("fieldValue");
fieldValue548.name = "translation";
fieldValue548.value = "0.039799999445676804 0.49459999799728394 0.030300000682473183";
ProtoInstance546.fieldValue[1] = fieldValue548;

fieldValue350.children[65] = ProtoInstance546;

ProtoInstance ProtoInstance549 = createNode("ProtoInstance");
ProtoInstance549.name = "Site";
ProtoInstance549.DEF = "hanim_l_tarsal_interphalangeal_phalanx_5";
fieldValue fieldValue550 = createNode("fieldValue");
fieldValue550.name = "name";
fieldValue550.value = "l_tarsal_interphalangeal_phalanx_5";
ProtoInstance549.fieldValue = new MFNode();

ProtoInstance549.fieldValue[0] = fieldValue550;

fieldValue fieldValue551 = createNode("fieldValue");
fieldValue551.name = "translation";
fieldValue551.value = "0.18250000476837158 0.007000000216066837 0.09279999881982803";
ProtoInstance549.fieldValue[1] = fieldValue551;

fieldValue350.children[66] = ProtoInstance549;

ProtoInstance ProtoInstance552 = createNode("ProtoInstance");
ProtoInstance552.name = "Site";
ProtoInstance552.DEF = "hanim_l_lateral_malleolus";
fieldValue fieldValue553 = createNode("fieldValue");
fieldValue553.name = "name";
fieldValue553.value = "l_lateral_malleolus";
ProtoInstance552.fieldValue = new MFNode();

ProtoInstance552.fieldValue[0] = fieldValue553;

fieldValue fieldValue554 = createNode("fieldValue");
fieldValue554.name = "translation";
fieldValue554.value = "0.13079999387264252 0.059700001031160355 -0.10320000350475311";
ProtoInstance552.fieldValue[1] = fieldValue554;

fieldValue350.children[67] = ProtoInstance552;

ProtoInstance ProtoInstance555 = createNode("ProtoInstance");
ProtoInstance555.name = "Site";
ProtoInstance555.DEF = "hanim_l_medial_malleolus";
fieldValue fieldValue556 = createNode("fieldValue");
fieldValue556.name = "name";
fieldValue556.value = "l_medial_malleolus";
ProtoInstance555.fieldValue = new MFNode();

ProtoInstance555.fieldValue[0] = fieldValue556;

fieldValue fieldValue557 = createNode("fieldValue");
fieldValue557.name = "translation";
fieldValue557.value = "0.08900000154972076 0.07159999758005142 -0.08810000121593475";
ProtoInstance555.fieldValue[1] = fieldValue557;

fieldValue350.children[68] = ProtoInstance555;

ProtoInstance ProtoInstance558 = createNode("ProtoInstance");
ProtoInstance558.name = "Site";
ProtoInstance558.DEF = "hanim_l_sphyrion";
fieldValue fieldValue559 = createNode("fieldValue");
fieldValue559.name = "name";
fieldValue559.value = "l_sphyrion";
ProtoInstance558.fieldValue = new MFNode();

ProtoInstance558.fieldValue[0] = fieldValue559;

fieldValue fieldValue560 = createNode("fieldValue");
fieldValue560.name = "translation";
fieldValue560.value = "0.08900000154972076 0.057500001043081284 -0.09430000185966492";
ProtoInstance558.fieldValue[1] = fieldValue560;

fieldValue350.children[69] = ProtoInstance558;

ProtoInstance ProtoInstance561 = createNode("ProtoInstance");
ProtoInstance561.name = "Site";
ProtoInstance561.DEF = "hanim_l_tarsal_interphalangeal_phalanx_1";
fieldValue fieldValue562 = createNode("fieldValue");
fieldValue562.name = "name";
fieldValue562.value = "l_tarsal_interphalangeal_phalanx_1";
ProtoInstance561.fieldValue = new MFNode();

ProtoInstance561.fieldValue[0] = fieldValue562;

fieldValue fieldValue563 = createNode("fieldValue");
fieldValue563.name = "translation";
fieldValue563.value = "0.08160000294446945 0.02319999970495701 0.010599999688565731";
ProtoInstance561.fieldValue[1] = fieldValue563;

fieldValue350.children[70] = ProtoInstance561;

ProtoInstance ProtoInstance564 = createNode("ProtoInstance");
ProtoInstance564.name = "Site";
ProtoInstance564.DEF = "hanim_l_calcaneus_posterior";
fieldValue fieldValue565 = createNode("fieldValue");
fieldValue565.name = "name";
fieldValue565.value = "l_calcaneus_posterior";
ProtoInstance564.fieldValue = new MFNode();

ProtoInstance564.fieldValue[0] = fieldValue565;

fieldValue fieldValue566 = createNode("fieldValue");
fieldValue566.name = "translation";
fieldValue566.value = "0.09740000218153 0.02590000070631504 -0.11710000038146973";
ProtoInstance564.fieldValue[1] = fieldValue566;

fieldValue350.children[71] = ProtoInstance564;

ProtoInstance ProtoInstance567 = createNode("ProtoInstance");
ProtoInstance567.name = "Site";
ProtoInstance567.DEF = "hanim_l_tarsal_distal_phalanx_2";
fieldValue fieldValue568 = createNode("fieldValue");
fieldValue568.name = "name";
fieldValue568.value = "l_tarsal_distal_phalanx_2";
ProtoInstance567.fieldValue = new MFNode();

ProtoInstance567.fieldValue[0] = fieldValue568;

fieldValue fieldValue569 = createNode("fieldValue");
fieldValue569.name = "translation";
fieldValue569.value = "0.11949999630451202 0.007899999618530273 0.14329999685287476";
ProtoInstance567.fieldValue[1] = fieldValue569;

fieldValue350.children[72] = ProtoInstance567;

ProtoInstance ProtoInstance570 = createNode("ProtoInstance");
ProtoInstance570.name = "Site";
ProtoInstance570.DEF = "hanim_crotch";
fieldValue fieldValue571 = createNode("fieldValue");
fieldValue571.name = "name";
fieldValue571.value = "crotch";
ProtoInstance570.fieldValue = new MFNode();

ProtoInstance570.fieldValue[0] = fieldValue571;

fieldValue fieldValue572 = createNode("fieldValue");
fieldValue572.name = "translation";
fieldValue572.value = "0.0034000000450760126 0.8266000151634216 0.025699999183416367";
ProtoInstance570.fieldValue[1] = fieldValue572;

fieldValue350.children[73] = ProtoInstance570;

ProtoInstance ProtoInstance573 = createNode("ProtoInstance");
ProtoInstance573.name = "Site";
ProtoInstance573.DEF = "hanim_r_neck_base";
fieldValue fieldValue574 = createNode("fieldValue");
fieldValue574.name = "name";
fieldValue574.value = "r_neck_base";
ProtoInstance573.fieldValue = new MFNode();

ProtoInstance573.fieldValue[0] = fieldValue574;

fieldValue fieldValue575 = createNode("fieldValue");
fieldValue575.name = "translation";
fieldValue575.value = "-0.04190000146627426 1.5148999691009521 -0.02199999988079071";
ProtoInstance573.fieldValue[1] = fieldValue575;

fieldValue350.children[74] = ProtoInstance573;

ProtoInstance ProtoInstance576 = createNode("ProtoInstance");
ProtoInstance576.name = "Site";
ProtoInstance576.DEF = "hanim_l_neck_base";
fieldValue fieldValue577 = createNode("fieldValue");
fieldValue577.name = "name";
fieldValue577.value = "l_neck_base";
ProtoInstance576.fieldValue = new MFNode();

ProtoInstance576.fieldValue[0] = fieldValue577;

fieldValue fieldValue578 = createNode("fieldValue");
fieldValue578.name = "translation";
fieldValue578.value = "0.06459999829530716 1.5140999555587769 -0.03799999877810478";
ProtoInstance576.fieldValue[1] = fieldValue578;

fieldValue350.children[75] = ProtoInstance576;

ProtoInstance ProtoInstance579 = createNode("ProtoInstance");
ProtoInstance579.name = "Site";
ProtoInstance579.DEF = "hanim_navel";
fieldValue fieldValue580 = createNode("fieldValue");
fieldValue580.name = "name";
fieldValue580.value = "navel";
ProtoInstance579.fieldValue = new MFNode();

ProtoInstance579.fieldValue[0] = fieldValue580;

fieldValue fieldValue581 = createNode("fieldValue");
fieldValue581.name = "translation";
fieldValue581.value = "0.006899999920278788 1.09660005569458 0.10170000046491623";
ProtoInstance579.fieldValue[1] = fieldValue581;

fieldValue350.children[76] = ProtoInstance579;

ProtoInstance348.fieldValue[1] = fieldValue350;

fieldValue347.children = new MFNode();

fieldValue347.children[0] = ProtoInstance348;

ProtoInstance343.fieldValue[3] = fieldValue347;

fieldValue342.children = new MFNode();

fieldValue342.children[0] = ProtoInstance343;

ProtoInstance101.fieldValue[1] = fieldValue342;

fieldValue fieldValue582 = createNode("fieldValue");
fieldValue582.name = "segments";
ProtoInstance ProtoInstance583 = createNode("ProtoInstance");
ProtoInstance583.name = "Segment";
ProtoInstance583.DEF = "hanim_sacrum";
fieldValue fieldValue584 = createNode("fieldValue");
fieldValue584.name = "name";
fieldValue584.value = "sacrum";
ProtoInstance583.fieldValue = new MFNode();

ProtoInstance583.fieldValue[0] = fieldValue584;

fieldValue fieldValue585 = createNode("fieldValue");
fieldValue585.name = "children";
ProtoInstance ProtoInstance586 = createNode("ProtoInstance");
ProtoInstance586.name = "Site";
ProtoInstance586.DEF = "hanim_skull_tip";
fieldValue fieldValue587 = createNode("fieldValue");
fieldValue587.name = "name";
fieldValue587.value = "skull_tip";
ProtoInstance586.fieldValue = new MFNode();

ProtoInstance586.fieldValue[0] = fieldValue587;

fieldValue fieldValue588 = createNode("fieldValue");
fieldValue588.name = "translation";
fieldValue588.value = "0.004999999888241291 1.7503999471664429 0.005499999970197678";
ProtoInstance586.fieldValue[1] = fieldValue588;

fieldValue585.children = new MFNode();

fieldValue585.children[0] = ProtoInstance586;

ProtoInstance ProtoInstance589 = createNode("ProtoInstance");
ProtoInstance589.name = "Site";
ProtoInstance589.DEF = "hanim_sellion";
fieldValue fieldValue590 = createNode("fieldValue");
fieldValue590.name = "name";
fieldValue590.value = "sellion";
ProtoInstance589.fieldValue = new MFNode();

ProtoInstance589.fieldValue[0] = fieldValue590;

fieldValue fieldValue591 = createNode("fieldValue");
fieldValue591.name = "translation";
fieldValue591.value = "0.005799999926239252 1.631600022315979 0.0851999968290329";
ProtoInstance589.fieldValue[1] = fieldValue591;

fieldValue585.children[1] = ProtoInstance589;

ProtoInstance ProtoInstance592 = createNode("ProtoInstance");
ProtoInstance592.name = "Site";
ProtoInstance592.DEF = "hanim_r_infraorbitale";
fieldValue fieldValue593 = createNode("fieldValue");
fieldValue593.name = "name";
fieldValue593.value = "r_infraorbitale";
ProtoInstance592.fieldValue = new MFNode();

ProtoInstance592.fieldValue[0] = fieldValue593;

fieldValue fieldValue594 = createNode("fieldValue");
fieldValue594.name = "translation";
fieldValue594.value = "-0.02370000071823597 1.6171000003814697 0.07519999891519547";
ProtoInstance592.fieldValue[1] = fieldValue594;

fieldValue585.children[2] = ProtoInstance592;

ProtoInstance ProtoInstance595 = createNode("ProtoInstance");
ProtoInstance595.name = "Site";
ProtoInstance595.DEF = "hanim_l_infraorbitale";
fieldValue fieldValue596 = createNode("fieldValue");
fieldValue596.name = "name";
fieldValue596.value = "l_infraorbitale";
ProtoInstance595.fieldValue = new MFNode();

ProtoInstance595.fieldValue[0] = fieldValue596;

fieldValue fieldValue597 = createNode("fieldValue");
fieldValue597.name = "translation";
fieldValue597.value = "0.0340999998152256 1.6171000003814697 0.07519999891519547";
ProtoInstance595.fieldValue[1] = fieldValue597;

fieldValue585.children[3] = ProtoInstance595;

ProtoInstance ProtoInstance598 = createNode("ProtoInstance");
ProtoInstance598.name = "Site";
ProtoInstance598.DEF = "hanim_supramenton";
fieldValue fieldValue599 = createNode("fieldValue");
fieldValue599.name = "name";
fieldValue599.value = "supramenton";
ProtoInstance598.fieldValue = new MFNode();

ProtoInstance598.fieldValue[0] = fieldValue599;

fieldValue fieldValue600 = createNode("fieldValue");
fieldValue600.name = "translation";
fieldValue600.value = "0.006099999882280827 1.5410000085830688 0.08049999922513962";
ProtoInstance598.fieldValue[1] = fieldValue600;

fieldValue585.children[4] = ProtoInstance598;

ProtoInstance ProtoInstance601 = createNode("ProtoInstance");
ProtoInstance601.name = "Site";
ProtoInstance601.DEF = "hanim_r_tragion";
fieldValue fieldValue602 = createNode("fieldValue");
fieldValue602.name = "name";
fieldValue602.value = "r_tragion";
ProtoInstance601.fieldValue = new MFNode();

ProtoInstance601.fieldValue[0] = fieldValue602;

fieldValue fieldValue603 = createNode("fieldValue");
fieldValue603.name = "translation";
fieldValue603.value = "-0.06459999829530716 1.6346999406814575 0.03020000085234642";
ProtoInstance601.fieldValue[1] = fieldValue603;

fieldValue585.children[5] = ProtoInstance601;

ProtoInstance ProtoInstance604 = createNode("ProtoInstance");
ProtoInstance604.name = "Site";
ProtoInstance604.DEF = "hanim_r_gonion";
fieldValue fieldValue605 = createNode("fieldValue");
fieldValue605.name = "name";
fieldValue605.value = "r_gonion";
ProtoInstance604.fieldValue = new MFNode();

ProtoInstance604.fieldValue[0] = fieldValue605;

fieldValue fieldValue606 = createNode("fieldValue");
fieldValue606.name = "translation";
fieldValue606.value = "-0.052000001072883606 1.552899956703186 0.034699998795986176";
ProtoInstance604.fieldValue[1] = fieldValue606;

fieldValue585.children[6] = ProtoInstance604;

ProtoInstance ProtoInstance607 = createNode("ProtoInstance");
ProtoInstance607.name = "Site";
ProtoInstance607.DEF = "hanim_l_tragion";
fieldValue fieldValue608 = createNode("fieldValue");
fieldValue608.name = "name";
fieldValue608.value = "l_tragion";
ProtoInstance607.fieldValue = new MFNode();

ProtoInstance607.fieldValue[0] = fieldValue608;

fieldValue fieldValue609 = createNode("fieldValue");
fieldValue609.name = "translation";
fieldValue609.value = "0.0738999992609024 1.6347999572753906 0.028200000524520874";
ProtoInstance607.fieldValue[1] = fieldValue609;

fieldValue585.children[7] = ProtoInstance607;

ProtoInstance ProtoInstance610 = createNode("ProtoInstance");
ProtoInstance610.name = "Site";
ProtoInstance610.DEF = "hanim_l_gonion";
fieldValue fieldValue611 = createNode("fieldValue");
fieldValue611.name = "name";
fieldValue611.value = "l_gonion";
ProtoInstance610.fieldValue = new MFNode();

ProtoInstance610.fieldValue[0] = fieldValue611;

fieldValue fieldValue612 = createNode("fieldValue");
fieldValue612.name = "translation";
fieldValue612.value = "0.06310000270605087 1.5529999732971191 0.032999999821186066";
ProtoInstance610.fieldValue[1] = fieldValue612;

fieldValue585.children[8] = ProtoInstance610;

ProtoInstance ProtoInstance613 = createNode("ProtoInstance");
ProtoInstance613.name = "Site";
ProtoInstance613.DEF = "hanim_nuchale";
fieldValue fieldValue614 = createNode("fieldValue");
fieldValue614.name = "name";
fieldValue614.value = "nuchale";
ProtoInstance613.fieldValue = new MFNode();

ProtoInstance613.fieldValue[0] = fieldValue614;

fieldValue fieldValue615 = createNode("fieldValue");
fieldValue615.name = "translation";
fieldValue615.value = "0.0038999998942017555 1.5972000360488892 -0.07959999889135361";
ProtoInstance613.fieldValue[1] = fieldValue615;

fieldValue585.children[9] = ProtoInstance613;

ProtoInstance ProtoInstance616 = createNode("ProtoInstance");
ProtoInstance616.name = "Site";
ProtoInstance616.DEF = "hanim_r_clavicale";
fieldValue fieldValue617 = createNode("fieldValue");
fieldValue617.name = "name";
fieldValue617.value = "r_clavicale";
ProtoInstance616.fieldValue = new MFNode();

ProtoInstance616.fieldValue[0] = fieldValue617;

fieldValue fieldValue618 = createNode("fieldValue");
fieldValue618.name = "translation";
fieldValue618.value = "-0.011500000022351742 1.4943000078201294 0.03999999910593033";
ProtoInstance616.fieldValue[1] = fieldValue618;

fieldValue585.children[10] = ProtoInstance616;

ProtoInstance ProtoInstance619 = createNode("ProtoInstance");
ProtoInstance619.name = "Site";
ProtoInstance619.DEF = "hanim_suprasternale";
fieldValue fieldValue620 = createNode("fieldValue");
fieldValue620.name = "name";
fieldValue620.value = "suprasternale";
ProtoInstance619.fieldValue = new MFNode();

ProtoInstance619.fieldValue[0] = fieldValue620;

fieldValue fieldValue621 = createNode("fieldValue");
fieldValue621.name = "translation";
fieldValue621.value = "0.00839999970048666 1.4714000225067139 0.05510000139474869";
ProtoInstance619.fieldValue[1] = fieldValue621;

fieldValue585.children[11] = ProtoInstance619;

ProtoInstance ProtoInstance622 = createNode("ProtoInstance");
ProtoInstance622.name = "Site";
ProtoInstance622.DEF = "hanim_l_clavicale";
fieldValue fieldValue623 = createNode("fieldValue");
fieldValue623.name = "name";
fieldValue623.value = "l_clavicale";
ProtoInstance622.fieldValue = new MFNode();

ProtoInstance622.fieldValue[0] = fieldValue623;

fieldValue fieldValue624 = createNode("fieldValue");
fieldValue624.name = "translation";
fieldValue624.value = "0.02710000053048134 1.4943000078201294 0.039400000125169754";
ProtoInstance622.fieldValue[1] = fieldValue624;

fieldValue585.children[12] = ProtoInstance622;

ProtoInstance ProtoInstance625 = createNode("ProtoInstance");
ProtoInstance625.name = "Site";
ProtoInstance625.DEF = "hanim_r_thelion";
fieldValue fieldValue626 = createNode("fieldValue");
fieldValue626.name = "name";
fieldValue626.value = "r_thelion";
ProtoInstance625.fieldValue = new MFNode();

ProtoInstance625.fieldValue[0] = fieldValue626;

fieldValue fieldValue627 = createNode("fieldValue");
fieldValue627.name = "translation";
fieldValue627.value = "-0.07360000163316727 1.3385000228881836 0.1216999962925911";
ProtoInstance625.fieldValue[1] = fieldValue627;

fieldValue585.children[13] = ProtoInstance625;

ProtoInstance ProtoInstance628 = createNode("ProtoInstance");
ProtoInstance628.name = "Site";
ProtoInstance628.DEF = "hanim_l_thelion";
fieldValue fieldValue629 = createNode("fieldValue");
fieldValue629.name = "name";
fieldValue629.value = "l_thelion";
ProtoInstance628.fieldValue = new MFNode();

ProtoInstance628.fieldValue[0] = fieldValue629;

fieldValue fieldValue630 = createNode("fieldValue");
fieldValue630.name = "translation";
fieldValue630.value = "0.09179999679327011 1.3381999731063843 0.11919999867677689";
ProtoInstance628.fieldValue[1] = fieldValue630;

fieldValue585.children[14] = ProtoInstance628;

ProtoInstance ProtoInstance631 = createNode("ProtoInstance");
ProtoInstance631.name = "Site";
ProtoInstance631.DEF = "hanim_substernale";
fieldValue fieldValue632 = createNode("fieldValue");
fieldValue632.name = "name";
fieldValue632.value = "substernale";
ProtoInstance631.fieldValue = new MFNode();

ProtoInstance631.fieldValue[0] = fieldValue632;

fieldValue fieldValue633 = createNode("fieldValue");
fieldValue633.name = "translation";
fieldValue633.value = "0.008500000461935997 1.2994999885559082 0.11469999700784683";
ProtoInstance631.fieldValue[1] = fieldValue633;

fieldValue585.children[15] = ProtoInstance631;

ProtoInstance ProtoInstance634 = createNode("ProtoInstance");
ProtoInstance634.name = "Site";
ProtoInstance634.DEF = "hanim_r_rib10";
fieldValue fieldValue635 = createNode("fieldValue");
fieldValue635.name = "name";
fieldValue635.value = "r_rib10";
ProtoInstance634.fieldValue = new MFNode();

ProtoInstance634.fieldValue[0] = fieldValue635;

fieldValue fieldValue636 = createNode("fieldValue");
fieldValue636.name = "translation";
fieldValue636.value = "-0.07109999656677246 1.194100022315979 0.10159999877214432";
ProtoInstance634.fieldValue[1] = fieldValue636;

fieldValue585.children[16] = ProtoInstance634;

ProtoInstance ProtoInstance637 = createNode("ProtoInstance");
ProtoInstance637.name = "Site";
ProtoInstance637.DEF = "hanim_r_asis";
fieldValue fieldValue638 = createNode("fieldValue");
fieldValue638.name = "name";
fieldValue638.value = "r_asis";
ProtoInstance637.fieldValue = new MFNode();

ProtoInstance637.fieldValue[0] = fieldValue638;

fieldValue fieldValue639 = createNode("fieldValue");
fieldValue639.name = "translation";
fieldValue639.value = "-0.08869999647140503 1.0020999908447266 0.1111999973654747";
ProtoInstance637.fieldValue[1] = fieldValue639;

fieldValue585.children[17] = ProtoInstance637;

ProtoInstance ProtoInstance640 = createNode("ProtoInstance");
ProtoInstance640.name = "Site";
ProtoInstance640.DEF = "hanim_l_rib10";
fieldValue fieldValue641 = createNode("fieldValue");
fieldValue641.name = "name";
fieldValue641.value = "l_rib10";
ProtoInstance640.fieldValue = new MFNode();

ProtoInstance640.fieldValue[0] = fieldValue641;

fieldValue fieldValue642 = createNode("fieldValue");
fieldValue642.name = "translation";
fieldValue642.value = "0.08709999918937683 1.1924999952316284 0.09920000284910202";
ProtoInstance640.fieldValue[1] = fieldValue642;

fieldValue585.children[18] = ProtoInstance640;

ProtoInstance ProtoInstance643 = createNode("ProtoInstance");
ProtoInstance643.name = "Site";
ProtoInstance643.DEF = "hanim_l_asis";
fieldValue fieldValue644 = createNode("fieldValue");
fieldValue644.name = "name";
fieldValue644.value = "l_asis";
ProtoInstance643.fieldValue = new MFNode();

ProtoInstance643.fieldValue[0] = fieldValue644;

fieldValue fieldValue645 = createNode("fieldValue");
fieldValue645.name = "translation";
fieldValue645.value = "0.0925000011920929 0.9983000159263611 0.10520000010728836";
ProtoInstance643.fieldValue[1] = fieldValue645;

fieldValue585.children[19] = ProtoInstance643;

ProtoInstance ProtoInstance646 = createNode("ProtoInstance");
ProtoInstance646.name = "Site";
ProtoInstance646.DEF = "hanim_r_iliocristale";
fieldValue fieldValue647 = createNode("fieldValue");
fieldValue647.name = "name";
fieldValue647.value = "r_iliocristale";
ProtoInstance646.fieldValue = new MFNode();

ProtoInstance646.fieldValue[0] = fieldValue647;

fieldValue fieldValue648 = createNode("fieldValue");
fieldValue648.name = "translation";
fieldValue648.value = "-0.1525000035762787 1.0628000497817993 0.0035000001080334187";
ProtoInstance646.fieldValue[1] = fieldValue648;

fieldValue585.children[20] = ProtoInstance646;

ProtoInstance ProtoInstance649 = createNode("ProtoInstance");
ProtoInstance649.name = "Site";
ProtoInstance649.DEF = "hanim_r_trochanterion";
fieldValue fieldValue650 = createNode("fieldValue");
fieldValue650.name = "name";
fieldValue650.value = "r_trochanterion";
ProtoInstance649.fieldValue = new MFNode();

ProtoInstance649.fieldValue[0] = fieldValue650;

fieldValue fieldValue651 = createNode("fieldValue");
fieldValue651.name = "translation";
fieldValue651.value = "-0.1688999980688095 0.8418999910354614 0.03519999980926514";
ProtoInstance649.fieldValue[1] = fieldValue651;

fieldValue585.children[21] = ProtoInstance649;

ProtoInstance ProtoInstance652 = createNode("ProtoInstance");
ProtoInstance652.name = "Site";
ProtoInstance652.DEF = "hanim_l_iliocristale";
fieldValue fieldValue653 = createNode("fieldValue");
fieldValue653.name = "name";
fieldValue653.value = "l_iliocristale";
ProtoInstance652.fieldValue = new MFNode();

ProtoInstance652.fieldValue[0] = fieldValue653;

fieldValue fieldValue654 = createNode("fieldValue");
fieldValue654.name = "translation";
fieldValue654.value = "0.16120000183582306 1.0536999702453613 0.0007999999797903001";
ProtoInstance652.fieldValue[1] = fieldValue654;

fieldValue585.children[22] = ProtoInstance652;

ProtoInstance ProtoInstance655 = createNode("ProtoInstance");
ProtoInstance655.name = "Site";
ProtoInstance655.DEF = "hanim_l_trochanterion";
fieldValue fieldValue656 = createNode("fieldValue");
fieldValue656.name = "name";
fieldValue656.value = "l_trochanterion";
ProtoInstance655.fieldValue = new MFNode();

ProtoInstance655.fieldValue[0] = fieldValue656;

fieldValue fieldValue657 = createNode("fieldValue");
fieldValue657.name = "translation";
fieldValue657.value = "0.16769999265670776 0.8335999846458435 0.030300000682473183";
ProtoInstance655.fieldValue[1] = fieldValue657;

fieldValue585.children[23] = ProtoInstance655;

ProtoInstance ProtoInstance658 = createNode("ProtoInstance");
ProtoInstance658.name = "Site";
ProtoInstance658.DEF = "hanim_cervicale";
fieldValue fieldValue659 = createNode("fieldValue");
fieldValue659.name = "name";
fieldValue659.value = "cervicale";
ProtoInstance658.fieldValue = new MFNode();

ProtoInstance658.fieldValue[0] = fieldValue659;

fieldValue fieldValue660 = createNode("fieldValue");
fieldValue660.name = "translation";
fieldValue660.value = "0.006399999838322401 1.5199999809265137 -0.08150000125169754";
ProtoInstance658.fieldValue[1] = fieldValue660;

fieldValue585.children[24] = ProtoInstance658;

ProtoInstance ProtoInstance661 = createNode("ProtoInstance");
ProtoInstance661.name = "Site";
ProtoInstance661.DEF = "hanim_spine_2_lower_back";
fieldValue fieldValue662 = createNode("fieldValue");
fieldValue662.name = "name";
fieldValue662.value = "spine_2_lower_back";
ProtoInstance661.fieldValue = new MFNode();

ProtoInstance661.fieldValue[0] = fieldValue662;

fieldValue fieldValue663 = createNode("fieldValue");
fieldValue663.name = "translation";
fieldValue663.value = "0.004900000058114529 1.1907999515533447 -0.11129999905824661";
ProtoInstance661.fieldValue[1] = fieldValue663;

fieldValue585.children[25] = ProtoInstance661;

ProtoInstance ProtoInstance664 = createNode("ProtoInstance");
ProtoInstance664.name = "Site";
ProtoInstance664.DEF = "hanim_r_psis";
fieldValue fieldValue665 = createNode("fieldValue");
fieldValue665.name = "name";
fieldValue665.value = "r_psis";
ProtoInstance664.fieldValue = new MFNode();

ProtoInstance664.fieldValue[0] = fieldValue665;

fieldValue fieldValue666 = createNode("fieldValue");
fieldValue666.name = "translation";
fieldValue666.value = "-0.07159999758005142 1.0190000534057617 -0.11379999667406082";
ProtoInstance664.fieldValue[1] = fieldValue666;

fieldValue585.children[26] = ProtoInstance664;

ProtoInstance ProtoInstance667 = createNode("ProtoInstance");
ProtoInstance667.name = "Site";
ProtoInstance667.DEF = "hanim_l_psis";
fieldValue fieldValue668 = createNode("fieldValue");
fieldValue668.name = "name";
fieldValue668.value = "l_psis";
ProtoInstance667.fieldValue = new MFNode();

ProtoInstance667.fieldValue[0] = fieldValue668;

fieldValue fieldValue669 = createNode("fieldValue");
fieldValue669.name = "translation";
fieldValue669.value = "0.07739999890327454 1.0190000534057617 -0.11509999632835388";
ProtoInstance667.fieldValue[1] = fieldValue669;

fieldValue585.children[27] = ProtoInstance667;

ProtoInstance ProtoInstance670 = createNode("ProtoInstance");
ProtoInstance670.name = "Site";
ProtoInstance670.DEF = "hanim_waist_preferred_posterior";
fieldValue fieldValue671 = createNode("fieldValue");
fieldValue671.name = "name";
fieldValue671.value = "waist_preferred_posterior";
ProtoInstance670.fieldValue = new MFNode();

ProtoInstance670.fieldValue[0] = fieldValue671;

fieldValue fieldValue672 = createNode("fieldValue");
fieldValue672.name = "translation";
fieldValue672.value = "0.28999999165534973 1.0915000438690186 -0.10909999907016754";
ProtoInstance670.fieldValue[1] = fieldValue672;

fieldValue585.children[28] = ProtoInstance670;

ProtoInstance ProtoInstance673 = createNode("ProtoInstance");
ProtoInstance673.name = "Site";
ProtoInstance673.DEF = "hanim_r_acromion";
fieldValue fieldValue674 = createNode("fieldValue");
fieldValue674.name = "name";
fieldValue674.value = "r_acromion";
ProtoInstance673.fieldValue = new MFNode();

ProtoInstance673.fieldValue[0] = fieldValue674;

fieldValue fieldValue675 = createNode("fieldValue");
fieldValue675.name = "translation";
fieldValue675.value = "-0.19050000607967377 1.479099988937378 -0.04309999942779541";
ProtoInstance673.fieldValue[1] = fieldValue675;

fieldValue585.children[29] = ProtoInstance673;

ProtoInstance ProtoInstance676 = createNode("ProtoInstance");
ProtoInstance676.name = "Site";
ProtoInstance676.DEF = "hanim_r_axilla_proximal";
fieldValue fieldValue677 = createNode("fieldValue");
fieldValue677.name = "name";
fieldValue677.value = "r_axilla_proximal";
ProtoInstance676.fieldValue = new MFNode();

ProtoInstance676.fieldValue[0] = fieldValue677;

fieldValue fieldValue678 = createNode("fieldValue");
fieldValue678.name = "translation";
fieldValue678.value = "-0.16259999573230743 1.4071999788284302 -0.003100000089034438";
ProtoInstance676.fieldValue[1] = fieldValue678;

fieldValue585.children[30] = ProtoInstance676;

ProtoInstance ProtoInstance679 = createNode("ProtoInstance");
ProtoInstance679.name = "Site";
ProtoInstance679.DEF = "hanim_r_radial_styloid";
fieldValue fieldValue680 = createNode("fieldValue");
fieldValue680.name = "name";
fieldValue680.value = "r_radial_styloid";
ProtoInstance679.fieldValue = new MFNode();

ProtoInstance679.fieldValue[0] = fieldValue680;

fieldValue fieldValue681 = createNode("fieldValue");
fieldValue681.name = "translation";
fieldValue681.value = "-0.188400000333786 0.8676000237464905 -0.035999998450279236";
ProtoInstance679.fieldValue[1] = fieldValue681;

fieldValue585.children[31] = ProtoInstance679;

ProtoInstance ProtoInstance682 = createNode("ProtoInstance");
ProtoInstance682.name = "Site";
ProtoInstance682.DEF = "hanim_r_axilla_distal";
fieldValue fieldValue683 = createNode("fieldValue");
fieldValue683.name = "name";
fieldValue683.value = "r_axilla_distal";
ProtoInstance682.fieldValue = new MFNode();

ProtoInstance682.fieldValue[0] = fieldValue683;

fieldValue fieldValue684 = createNode("fieldValue");
fieldValue684.name = "translation";
fieldValue684.value = "-0.16030000150203705 1.4098000526428223 -0.08259999752044678";
ProtoInstance682.fieldValue[1] = fieldValue684;

fieldValue585.children[32] = ProtoInstance682;

ProtoInstance ProtoInstance685 = createNode("ProtoInstance");
ProtoInstance685.name = "Site";
ProtoInstance685.DEF = "hanim_r_olecranon";
fieldValue fieldValue686 = createNode("fieldValue");
fieldValue686.name = "name";
fieldValue686.value = "r_olecranon";
ProtoInstance685.fieldValue = new MFNode();

ProtoInstance685.fieldValue[0] = fieldValue686;

fieldValue fieldValue687 = createNode("fieldValue");
fieldValue687.name = "translation";
fieldValue687.value = "-0.1906999945640564 1.1404999494552612 -0.10649999976158142";
ProtoInstance685.fieldValue[1] = fieldValue687;

fieldValue585.children[33] = ProtoInstance685;

ProtoInstance ProtoInstance688 = createNode("ProtoInstance");
ProtoInstance688.name = "Site";
ProtoInstance688.DEF = "hanim_r_humeral_lateral_epicondyles";
fieldValue fieldValue689 = createNode("fieldValue");
fieldValue689.name = "name";
fieldValue689.value = "r_humeral_lateral_epicondyles";
ProtoInstance688.fieldValue = new MFNode();

ProtoInstance688.fieldValue[0] = fieldValue689;

fieldValue fieldValue690 = createNode("fieldValue");
fieldValue690.name = "translation";
fieldValue690.value = "-0.2223999947309494 1.1517000198364258 -0.10329999774694443";
ProtoInstance688.fieldValue[1] = fieldValue690;

fieldValue585.children[34] = ProtoInstance688;

ProtoInstance ProtoInstance691 = createNode("ProtoInstance");
ProtoInstance691.name = "Site";
ProtoInstance691.DEF = "hanim_r_humeral_medial_epicondyles";
fieldValue fieldValue692 = createNode("fieldValue");
fieldValue692.name = "name";
fieldValue692.value = "r_humeral_medial_epicondyles";
ProtoInstance691.fieldValue = new MFNode();

ProtoInstance691.fieldValue[0] = fieldValue692;

fieldValue fieldValue693 = createNode("fieldValue");
fieldValue693.name = "translation";
fieldValue693.value = "-0.1679999977350235 1.1297999620437622 -0.10620000213384628";
ProtoInstance691.fieldValue[1] = fieldValue693;

fieldValue585.children[35] = ProtoInstance691;

ProtoInstance ProtoInstance694 = createNode("ProtoInstance");
ProtoInstance694.name = "Site";
ProtoInstance694.DEF = "hanim_r_radiale";
fieldValue fieldValue695 = createNode("fieldValue");
fieldValue695.name = "name";
fieldValue695.value = "r_radiale";
ProtoInstance694.fieldValue = new MFNode();

ProtoInstance694.fieldValue[0] = fieldValue695;

fieldValue fieldValue696 = createNode("fieldValue");
fieldValue696.name = "translation";
fieldValue696.value = "-0.21299999952316284 1.1304999589920044 -0.10909999907016754";
ProtoInstance694.fieldValue[1] = fieldValue696;

fieldValue585.children[36] = ProtoInstance694;

ProtoInstance ProtoInstance697 = createNode("ProtoInstance");
ProtoInstance697.name = "Site";
ProtoInstance697.DEF = "hanim_r_metacarpal_phalanx_2";
fieldValue fieldValue698 = createNode("fieldValue");
fieldValue698.name = "name";
fieldValue698.value = "r_metacarpal_phalanx_2";
ProtoInstance697.fieldValue = new MFNode();

ProtoInstance697.fieldValue[0] = fieldValue698;

fieldValue fieldValue699 = createNode("fieldValue");
fieldValue699.name = "translation";
fieldValue699.value = "-0.19769999384880066 0.8169000148773193 -0.01769999973475933";
ProtoInstance697.fieldValue[1] = fieldValue699;

fieldValue585.children[37] = ProtoInstance697;

ProtoInstance ProtoInstance700 = createNode("ProtoInstance");
ProtoInstance700.name = "Site";
ProtoInstance700.DEF = "hanim_r_dactylion";
fieldValue fieldValue701 = createNode("fieldValue");
fieldValue701.name = "name";
fieldValue701.value = "r_dactylion";
ProtoInstance700.fieldValue = new MFNode();

ProtoInstance700.fieldValue[0] = fieldValue701;

fieldValue fieldValue702 = createNode("fieldValue");
fieldValue702.name = "translation";
fieldValue702.value = "-0.1941000074148178 0.6772000193595886 -0.04230000078678131";
ProtoInstance700.fieldValue[1] = fieldValue702;

fieldValue585.children[38] = ProtoInstance700;

ProtoInstance ProtoInstance703 = createNode("ProtoInstance");
ProtoInstance703.name = "Site";
ProtoInstance703.DEF = "hanim_r_ulnar_styloid";
fieldValue fieldValue704 = createNode("fieldValue");
fieldValue704.name = "name";
fieldValue704.value = "r_ulnar_styloid";
ProtoInstance703.fieldValue = new MFNode();

ProtoInstance703.fieldValue[0] = fieldValue704;

fieldValue fieldValue705 = createNode("fieldValue");
fieldValue705.name = "translation";
fieldValue705.value = "-0.21170000731945038 0.8561999797821045 -0.058400001376867294";
ProtoInstance703.fieldValue[1] = fieldValue705;

fieldValue585.children[39] = ProtoInstance703;

ProtoInstance ProtoInstance706 = createNode("ProtoInstance");
ProtoInstance706.name = "Site";
ProtoInstance706.DEF = "hanim_r_metacarpal_phalanx_5";
fieldValue fieldValue707 = createNode("fieldValue");
fieldValue707.name = "name";
fieldValue707.value = "r_metacarpal_phalanx_5";
ProtoInstance706.fieldValue = new MFNode();

ProtoInstance706.fieldValue[0] = fieldValue707;

fieldValue fieldValue708 = createNode("fieldValue");
fieldValue708.name = "translation";
fieldValue708.value = "-0.19290000200271606 0.7889999747276306 -0.10639999806880951";
ProtoInstance706.fieldValue[1] = fieldValue708;

fieldValue585.children[40] = ProtoInstance706;

ProtoInstance ProtoInstance709 = createNode("ProtoInstance");
ProtoInstance709.name = "Site";
ProtoInstance709.DEF = "hanim_l_acromion";
fieldValue fieldValue710 = createNode("fieldValue");
fieldValue710.name = "name";
fieldValue710.value = "l_acromion";
ProtoInstance709.fieldValue = new MFNode();

ProtoInstance709.fieldValue[0] = fieldValue710;

fieldValue fieldValue711 = createNode("fieldValue");
fieldValue711.name = "translation";
fieldValue711.value = "0.20319999754428864 1.4759999513626099 -0.04899999871850014";
ProtoInstance709.fieldValue[1] = fieldValue711;

fieldValue585.children[41] = ProtoInstance709;

ProtoInstance ProtoInstance712 = createNode("ProtoInstance");
ProtoInstance712.name = "Site";
ProtoInstance712.DEF = "hanim_l_axilla_proximal";
fieldValue fieldValue713 = createNode("fieldValue");
fieldValue713.name = "name";
fieldValue713.value = "l_axilla_proximal";
ProtoInstance712.fieldValue = new MFNode();

ProtoInstance712.fieldValue[0] = fieldValue713;

fieldValue fieldValue714 = createNode("fieldValue");
fieldValue714.name = "translation";
fieldValue714.value = "0.1776999980211258 1.406499981880188 -0.007499999832361937";
ProtoInstance712.fieldValue[1] = fieldValue714;

fieldValue585.children[42] = ProtoInstance712;

ProtoInstance ProtoInstance715 = createNode("ProtoInstance");
ProtoInstance715.name = "Site";
ProtoInstance715.DEF = "hanim_l_radial_styloid";
fieldValue fieldValue716 = createNode("fieldValue");
fieldValue716.name = "name";
fieldValue716.value = "l_radial_styloid";
ProtoInstance715.fieldValue = new MFNode();

ProtoInstance715.fieldValue[0] = fieldValue716;

fieldValue fieldValue717 = createNode("fieldValue");
fieldValue717.name = "translation";
fieldValue717.value = "0.19009999930858612 0.8644999861717224 -0.04149999842047691";
ProtoInstance715.fieldValue[1] = fieldValue717;

fieldValue585.children[43] = ProtoInstance715;

ProtoInstance ProtoInstance718 = createNode("ProtoInstance");
ProtoInstance718.name = "Site";
ProtoInstance718.DEF = "hanim_l_axilla_distal";
fieldValue fieldValue719 = createNode("fieldValue");
fieldValue719.name = "name";
fieldValue719.value = "l_axilla_distal";
ProtoInstance718.fieldValue = new MFNode();

ProtoInstance718.fieldValue[0] = fieldValue719;

fieldValue fieldValue720 = createNode("fieldValue");
fieldValue720.name = "translation";
fieldValue720.value = "0.17059999704360962 1.4071999788284302 -0.08749999850988388";
ProtoInstance718.fieldValue[1] = fieldValue720;

fieldValue585.children[44] = ProtoInstance718;

ProtoInstance ProtoInstance721 = createNode("ProtoInstance");
ProtoInstance721.name = "Site";
ProtoInstance721.DEF = "hanim_l_olecranon";
fieldValue fieldValue722 = createNode("fieldValue");
fieldValue722.name = "name";
fieldValue722.value = "l_olecranon";
ProtoInstance721.fieldValue = new MFNode();

ProtoInstance721.fieldValue[0] = fieldValue722;

fieldValue fieldValue723 = createNode("fieldValue");
fieldValue723.name = "translation";
fieldValue723.value = "-0.19619999825954437 1.1375000476837158 -0.11230000108480453";
ProtoInstance721.fieldValue[1] = fieldValue723;

fieldValue585.children[45] = ProtoInstance721;

ProtoInstance ProtoInstance724 = createNode("ProtoInstance");
ProtoInstance724.name = "Site";
ProtoInstance724.DEF = "hanim_l_humeral_lateral_epicondyles";
fieldValue fieldValue725 = createNode("fieldValue");
fieldValue725.name = "name";
fieldValue725.value = "l_humeral_lateral_epicondyles";
ProtoInstance724.fieldValue = new MFNode();

ProtoInstance724.fieldValue[0] = fieldValue725;

fieldValue fieldValue726 = createNode("fieldValue");
fieldValue726.name = "translation";
fieldValue726.value = "0.2280000001192093 1.1482000350952148 -0.10999999940395355";
ProtoInstance724.fieldValue[1] = fieldValue726;

fieldValue585.children[46] = ProtoInstance724;

ProtoInstance ProtoInstance727 = createNode("ProtoInstance");
ProtoInstance727.name = "Site";
ProtoInstance727.DEF = "hanim_l_humeral_medial_epicondyles";
fieldValue fieldValue728 = createNode("fieldValue");
fieldValue728.name = "name";
fieldValue728.value = "l_humeral_medial_epicondyles";
ProtoInstance727.fieldValue = new MFNode();

ProtoInstance727.fieldValue[0] = fieldValue728;

fieldValue fieldValue729 = createNode("fieldValue");
fieldValue729.name = "translation";
fieldValue729.value = "0.17350000143051147 1.1272000074386597 -0.11129999905824661";
ProtoInstance727.fieldValue[1] = fieldValue729;

fieldValue585.children[47] = ProtoInstance727;

ProtoInstance ProtoInstance730 = createNode("ProtoInstance");
ProtoInstance730.name = "Site";
ProtoInstance730.DEF = "hanim_l_radiale";
fieldValue fieldValue731 = createNode("fieldValue");
fieldValue731.name = "name";
fieldValue731.value = "l_radiale";
ProtoInstance730.fieldValue = new MFNode();

ProtoInstance730.fieldValue[0] = fieldValue731;

fieldValue fieldValue732 = createNode("fieldValue");
fieldValue732.name = "translation";
fieldValue732.value = "0.21819999814033508 1.1211999654769897 -0.11670000106096268";
ProtoInstance730.fieldValue[1] = fieldValue732;

fieldValue585.children[48] = ProtoInstance730;

ProtoInstance ProtoInstance733 = createNode("ProtoInstance");
ProtoInstance733.name = "Site";
ProtoInstance733.DEF = "hanim_l_metacarpal_phalanx_2";
fieldValue fieldValue734 = createNode("fieldValue");
fieldValue734.name = "name";
fieldValue734.value = "l_metacarpal_phalanx_2";
ProtoInstance733.fieldValue = new MFNode();

ProtoInstance733.fieldValue[0] = fieldValue734;

fieldValue fieldValue735 = createNode("fieldValue");
fieldValue735.name = "translation";
fieldValue735.value = "0.20090000331401825 0.8138999938964844 -0.02370000071823597";
ProtoInstance733.fieldValue[1] = fieldValue735;

fieldValue585.children[49] = ProtoInstance733;

ProtoInstance ProtoInstance736 = createNode("ProtoInstance");
ProtoInstance736.name = "Site";
ProtoInstance736.DEF = "hanim_l_dactylion";
fieldValue fieldValue737 = createNode("fieldValue");
fieldValue737.name = "name";
fieldValue737.value = "l_dactylion";
ProtoInstance736.fieldValue = new MFNode();

ProtoInstance736.fieldValue[0] = fieldValue737;

fieldValue fieldValue738 = createNode("fieldValue");
fieldValue738.name = "translation";
fieldValue738.value = "0.20559999346733093 0.6743000149726868 -0.04820000007748604";
ProtoInstance736.fieldValue[1] = fieldValue738;

fieldValue585.children[50] = ProtoInstance736;

ProtoInstance ProtoInstance739 = createNode("ProtoInstance");
ProtoInstance739.name = "Site";
ProtoInstance739.DEF = "hanim_l_ulnar_styloid";
fieldValue fieldValue740 = createNode("fieldValue");
fieldValue740.name = "name";
fieldValue740.value = "l_ulnar_styloid";
ProtoInstance739.fieldValue = new MFNode();

ProtoInstance739.fieldValue[0] = fieldValue740;

fieldValue fieldValue741 = createNode("fieldValue");
fieldValue741.name = "translation";
fieldValue741.value = "-0.2142000049352646 0.8529000282287598 -0.06480000168085098";
ProtoInstance739.fieldValue[1] = fieldValue741;

fieldValue585.children[51] = ProtoInstance739;

ProtoInstance ProtoInstance742 = createNode("ProtoInstance");
ProtoInstance742.name = "Site";
ProtoInstance742.DEF = "hanim_l_metacarpal_phalanx_5";
fieldValue fieldValue743 = createNode("fieldValue");
fieldValue743.name = "name";
fieldValue743.value = "l_metacarpal_phalanx_5";
ProtoInstance742.fieldValue = new MFNode();

ProtoInstance742.fieldValue[0] = fieldValue743;

fieldValue fieldValue744 = createNode("fieldValue");
fieldValue744.name = "translation";
fieldValue744.value = "0.19290000200271606 0.7860000133514404 -0.11219999939203262";
ProtoInstance742.fieldValue[1] = fieldValue744;

fieldValue585.children[52] = ProtoInstance742;

ProtoInstance ProtoInstance745 = createNode("ProtoInstance");
ProtoInstance745.name = "Site";
ProtoInstance745.DEF = "hanim_r_knee_crease";
fieldValue fieldValue746 = createNode("fieldValue");
fieldValue746.name = "name";
fieldValue746.value = "r_knee_crease";
ProtoInstance745.fieldValue = new MFNode();

ProtoInstance745.fieldValue[0] = fieldValue746;

fieldValue fieldValue747 = createNode("fieldValue");
fieldValue747.name = "translation";
fieldValue747.value = "-0.08250000327825546 0.49320000410079956 -0.032600000500679016";
ProtoInstance745.fieldValue[1] = fieldValue747;

fieldValue585.children[53] = ProtoInstance745;

ProtoInstance ProtoInstance748 = createNode("ProtoInstance");
ProtoInstance748.name = "Site";
ProtoInstance748.DEF = "hanim_r_femoral_lateral_epicondyles";
fieldValue fieldValue749 = createNode("fieldValue");
fieldValue749.name = "name";
fieldValue749.value = "r_femoral_lateral_epicondyles";
ProtoInstance748.fieldValue = new MFNode();

ProtoInstance748.fieldValue[0] = fieldValue749;

fieldValue fieldValue750 = createNode("fieldValue");
fieldValue750.name = "translation";
fieldValue750.value = "-0.1421000063419342 0.4991999864578247 0.03099999949336052";
ProtoInstance748.fieldValue[1] = fieldValue750;

fieldValue585.children[54] = ProtoInstance748;

ProtoInstance ProtoInstance751 = createNode("ProtoInstance");
ProtoInstance751.name = "Site";
ProtoInstance751.DEF = "hanim_r_femoral_medial_epicondyles";
fieldValue fieldValue752 = createNode("fieldValue");
fieldValue752.name = "name";
fieldValue752.value = "r_femoral_lateral_epicondyles";
ProtoInstance751.fieldValue = new MFNode();

ProtoInstance751.fieldValue[0] = fieldValue752;

fieldValue fieldValue753 = createNode("fieldValue");
fieldValue753.name = "translation";
fieldValue753.value = "-0.022099999710917473 0.5013999938964844 0.02889999933540821";
ProtoInstance751.fieldValue[1] = fieldValue753;

fieldValue585.children[55] = ProtoInstance751;

ProtoInstance ProtoInstance754 = createNode("ProtoInstance");
ProtoInstance754.name = "Site";
ProtoInstance754.DEF = "hanim_r_tarsal_interphalangeal_phalanx_5";
fieldValue fieldValue755 = createNode("fieldValue");
fieldValue755.name = "name";
fieldValue755.value = "r_tarsal_interphalangeal_phalanx_5";
ProtoInstance754.fieldValue = new MFNode();

ProtoInstance754.fieldValue[0] = fieldValue755;

fieldValue fieldValue756 = createNode("fieldValue");
fieldValue756.name = "translation";
fieldValue756.value = "-0.15230000019073486 0.016599999740719795 0.08950000256299973";
ProtoInstance754.fieldValue[1] = fieldValue756;

fieldValue585.children[56] = ProtoInstance754;

ProtoInstance ProtoInstance757 = createNode("ProtoInstance");
ProtoInstance757.name = "Site";
ProtoInstance757.DEF = "hanim_r_lateral_malleolus";
fieldValue fieldValue758 = createNode("fieldValue");
fieldValue758.name = "name";
fieldValue758.value = "r_lateral_malleolus";
ProtoInstance757.fieldValue = new MFNode();

ProtoInstance757.fieldValue[0] = fieldValue758;

fieldValue fieldValue759 = createNode("fieldValue");
fieldValue759.name = "translation";
fieldValue759.value = "-0.1005999967455864 0.0658000037074089 -0.10750000178813934";
ProtoInstance757.fieldValue[1] = fieldValue759;

fieldValue585.children[57] = ProtoInstance757;

ProtoInstance ProtoInstance760 = createNode("ProtoInstance");
ProtoInstance760.name = "Site";
ProtoInstance760.DEF = "hanim_r_medial_malleolus";
fieldValue fieldValue761 = createNode("fieldValue");
fieldValue761.name = "name";
fieldValue761.value = "r_medial_malleolus";
ProtoInstance760.fieldValue = new MFNode();

ProtoInstance760.fieldValue[0] = fieldValue761;

fieldValue fieldValue762 = createNode("fieldValue");
fieldValue762.name = "translation";
fieldValue762.value = "-0.05909999832510948 0.07599999755620956 -0.09279999881982803";
ProtoInstance760.fieldValue[1] = fieldValue762;

fieldValue585.children[58] = ProtoInstance760;

ProtoInstance ProtoInstance763 = createNode("ProtoInstance");
ProtoInstance763.name = "Site";
ProtoInstance763.DEF = "hanim_r_sphyrion";
fieldValue fieldValue764 = createNode("fieldValue");
fieldValue764.name = "name";
fieldValue764.value = "r_sphyrion";
ProtoInstance763.fieldValue = new MFNode();

ProtoInstance763.fieldValue[0] = fieldValue764;

fieldValue fieldValue765 = createNode("fieldValue");
fieldValue765.name = "translation";
fieldValue765.value = "-0.06030000001192093 0.061000000685453415 -0.10019999742507935";
ProtoInstance763.fieldValue[1] = fieldValue765;

fieldValue585.children[59] = ProtoInstance763;

ProtoInstance ProtoInstance766 = createNode("ProtoInstance");
ProtoInstance766.name = "Site";
ProtoInstance766.DEF = "hanim_r_tarsal_interphalangeal_phalanx_1";
fieldValue fieldValue767 = createNode("fieldValue");
fieldValue767.name = "name";
fieldValue767.value = "r_tarsal_interphalangeal_phalanx_1";
ProtoInstance766.fieldValue = new MFNode();

ProtoInstance766.fieldValue[0] = fieldValue767;

fieldValue fieldValue768 = createNode("fieldValue");
fieldValue768.name = "translation";
fieldValue768.value = "-0.05209999904036522 0.026000000536441803 0.01269999984651804";
ProtoInstance766.fieldValue[1] = fieldValue768;

fieldValue585.children[60] = ProtoInstance766;

ProtoInstance ProtoInstance769 = createNode("ProtoInstance");
ProtoInstance769.name = "Site";
ProtoInstance769.DEF = "hanim_r_calcaneus_posterior";
fieldValue fieldValue770 = createNode("fieldValue");
fieldValue770.name = "name";
fieldValue770.value = "r_calcaneus_posterior";
ProtoInstance769.fieldValue = new MFNode();

ProtoInstance769.fieldValue[0] = fieldValue770;

fieldValue fieldValue771 = createNode("fieldValue");
fieldValue771.name = "translation";
fieldValue771.value = "-0.06920000165700912 0.02969999983906746 -0.12210000306367874";
ProtoInstance769.fieldValue[1] = fieldValue771;

fieldValue585.children[61] = ProtoInstance769;

ProtoInstance ProtoInstance772 = createNode("ProtoInstance");
ProtoInstance772.name = "Site";
ProtoInstance772.DEF = "hanim_r_tarsal_distal_phalanx_2";
fieldValue fieldValue773 = createNode("fieldValue");
fieldValue773.name = "name";
fieldValue773.value = "r_tarsal_distal_phalanx_2";
ProtoInstance772.fieldValue = new MFNode();

ProtoInstance772.fieldValue[0] = fieldValue773;

fieldValue fieldValue774 = createNode("fieldValue");
fieldValue774.name = "translation";
fieldValue774.value = "-0.08829999715089798 0.013399999588727951 0.13830000162124634";
ProtoInstance772.fieldValue[1] = fieldValue774;

fieldValue585.children[62] = ProtoInstance772;

ProtoInstance ProtoInstance775 = createNode("ProtoInstance");
ProtoInstance775.name = "Site";
ProtoInstance775.DEF = "hanim_l_knee_crease";
fieldValue fieldValue776 = createNode("fieldValue");
fieldValue776.name = "name";
fieldValue776.value = "l_knee_crease";
ProtoInstance775.fieldValue = new MFNode();

ProtoInstance775.fieldValue[0] = fieldValue776;

fieldValue fieldValue777 = createNode("fieldValue");
fieldValue777.name = "translation";
fieldValue777.value = "0.09929999709129333 0.48809999227523804 -0.030899999663233757";
ProtoInstance775.fieldValue[1] = fieldValue777;

fieldValue585.children[63] = ProtoInstance775;

ProtoInstance ProtoInstance778 = createNode("ProtoInstance");
ProtoInstance778.name = "Site";
ProtoInstance778.DEF = "hanim_l_femoral_lateral_epicondyles";
fieldValue fieldValue779 = createNode("fieldValue");
fieldValue779.name = "name";
fieldValue779.value = "l_femoral_lateral_epicondyles";
ProtoInstance778.fieldValue = new MFNode();

ProtoInstance778.fieldValue[0] = fieldValue779;

fieldValue fieldValue780 = createNode("fieldValue");
fieldValue780.name = "translation";
fieldValue780.value = "0.1597999930381775 0.4966999888420105 0.02969999983906746";
ProtoInstance778.fieldValue[1] = fieldValue780;

fieldValue585.children[64] = ProtoInstance778;

ProtoInstance ProtoInstance781 = createNode("ProtoInstance");
ProtoInstance781.name = "Site";
ProtoInstance781.DEF = "hanim_l_femoral_medial_epicondyles";
fieldValue fieldValue782 = createNode("fieldValue");
fieldValue782.name = "name";
fieldValue782.value = "l_femoral_lateral_epicondyles";
ProtoInstance781.fieldValue = new MFNode();

ProtoInstance781.fieldValue[0] = fieldValue782;

fieldValue fieldValue783 = createNode("fieldValue");
fieldValue783.name = "translation";
fieldValue783.value = "0.039799999445676804 0.49459999799728394 0.030300000682473183";
ProtoInstance781.fieldValue[1] = fieldValue783;

fieldValue585.children[65] = ProtoInstance781;

ProtoInstance ProtoInstance784 = createNode("ProtoInstance");
ProtoInstance784.name = "Site";
ProtoInstance784.DEF = "hanim_l_tarsal_interphalangeal_phalanx_5";
fieldValue fieldValue785 = createNode("fieldValue");
fieldValue785.name = "name";
fieldValue785.value = "l_tarsal_interphalangeal_phalanx_5";
ProtoInstance784.fieldValue = new MFNode();

ProtoInstance784.fieldValue[0] = fieldValue785;

fieldValue fieldValue786 = createNode("fieldValue");
fieldValue786.name = "translation";
fieldValue786.value = "0.18250000476837158 0.007000000216066837 0.09279999881982803";
ProtoInstance784.fieldValue[1] = fieldValue786;

fieldValue585.children[66] = ProtoInstance784;

ProtoInstance ProtoInstance787 = createNode("ProtoInstance");
ProtoInstance787.name = "Site";
ProtoInstance787.DEF = "hanim_l_lateral_malleolus";
fieldValue fieldValue788 = createNode("fieldValue");
fieldValue788.name = "name";
fieldValue788.value = "l_lateral_malleolus";
ProtoInstance787.fieldValue = new MFNode();

ProtoInstance787.fieldValue[0] = fieldValue788;

fieldValue fieldValue789 = createNode("fieldValue");
fieldValue789.name = "translation";
fieldValue789.value = "0.13079999387264252 0.059700001031160355 -0.10320000350475311";
ProtoInstance787.fieldValue[1] = fieldValue789;

fieldValue585.children[67] = ProtoInstance787;

ProtoInstance ProtoInstance790 = createNode("ProtoInstance");
ProtoInstance790.name = "Site";
ProtoInstance790.DEF = "hanim_l_medial_malleolus";
fieldValue fieldValue791 = createNode("fieldValue");
fieldValue791.name = "name";
fieldValue791.value = "l_medial_malleolus";
ProtoInstance790.fieldValue = new MFNode();

ProtoInstance790.fieldValue[0] = fieldValue791;

fieldValue fieldValue792 = createNode("fieldValue");
fieldValue792.name = "translation";
fieldValue792.value = "0.08900000154972076 0.07159999758005142 -0.08810000121593475";
ProtoInstance790.fieldValue[1] = fieldValue792;

fieldValue585.children[68] = ProtoInstance790;

ProtoInstance ProtoInstance793 = createNode("ProtoInstance");
ProtoInstance793.name = "Site";
ProtoInstance793.DEF = "hanim_l_sphyrion";
fieldValue fieldValue794 = createNode("fieldValue");
fieldValue794.name = "name";
fieldValue794.value = "l_sphyrion";
ProtoInstance793.fieldValue = new MFNode();

ProtoInstance793.fieldValue[0] = fieldValue794;

fieldValue fieldValue795 = createNode("fieldValue");
fieldValue795.name = "translation";
fieldValue795.value = "0.08900000154972076 0.057500001043081284 -0.09430000185966492";
ProtoInstance793.fieldValue[1] = fieldValue795;

fieldValue585.children[69] = ProtoInstance793;

ProtoInstance ProtoInstance796 = createNode("ProtoInstance");
ProtoInstance796.name = "Site";
ProtoInstance796.DEF = "hanim_l_tarsal_interphalangeal_phalanx_1";
fieldValue fieldValue797 = createNode("fieldValue");
fieldValue797.name = "name";
fieldValue797.value = "l_tarsal_interphalangeal_phalanx_1";
ProtoInstance796.fieldValue = new MFNode();

ProtoInstance796.fieldValue[0] = fieldValue797;

fieldValue fieldValue798 = createNode("fieldValue");
fieldValue798.name = "translation";
fieldValue798.value = "0.08160000294446945 0.02319999970495701 0.010599999688565731";
ProtoInstance796.fieldValue[1] = fieldValue798;

fieldValue585.children[70] = ProtoInstance796;

ProtoInstance ProtoInstance799 = createNode("ProtoInstance");
ProtoInstance799.name = "Site";
ProtoInstance799.DEF = "hanim_l_calcaneus_posterior";
fieldValue fieldValue800 = createNode("fieldValue");
fieldValue800.name = "name";
fieldValue800.value = "l_calcaneus_posterior";
ProtoInstance799.fieldValue = new MFNode();

ProtoInstance799.fieldValue[0] = fieldValue800;

fieldValue fieldValue801 = createNode("fieldValue");
fieldValue801.name = "translation";
fieldValue801.value = "0.09740000218153 0.02590000070631504 -0.11710000038146973";
ProtoInstance799.fieldValue[1] = fieldValue801;

fieldValue585.children[71] = ProtoInstance799;

ProtoInstance ProtoInstance802 = createNode("ProtoInstance");
ProtoInstance802.name = "Site";
ProtoInstance802.DEF = "hanim_l_tarsal_distal_phalanx_2";
fieldValue fieldValue803 = createNode("fieldValue");
fieldValue803.name = "name";
fieldValue803.value = "l_tarsal_distal_phalanx_2";
ProtoInstance802.fieldValue = new MFNode();

ProtoInstance802.fieldValue[0] = fieldValue803;

fieldValue fieldValue804 = createNode("fieldValue");
fieldValue804.name = "translation";
fieldValue804.value = "0.11949999630451202 0.007899999618530273 0.14329999685287476";
ProtoInstance802.fieldValue[1] = fieldValue804;

fieldValue585.children[72] = ProtoInstance802;

ProtoInstance ProtoInstance805 = createNode("ProtoInstance");
ProtoInstance805.name = "Site";
ProtoInstance805.DEF = "hanim_crotch";
fieldValue fieldValue806 = createNode("fieldValue");
fieldValue806.name = "name";
fieldValue806.value = "crotch";
ProtoInstance805.fieldValue = new MFNode();

ProtoInstance805.fieldValue[0] = fieldValue806;

fieldValue fieldValue807 = createNode("fieldValue");
fieldValue807.name = "translation";
fieldValue807.value = "0.0034000000450760126 0.8266000151634216 0.025699999183416367";
ProtoInstance805.fieldValue[1] = fieldValue807;

fieldValue585.children[73] = ProtoInstance805;

ProtoInstance ProtoInstance808 = createNode("ProtoInstance");
ProtoInstance808.name = "Site";
ProtoInstance808.DEF = "hanim_r_neck_base";
fieldValue fieldValue809 = createNode("fieldValue");
fieldValue809.name = "name";
fieldValue809.value = "r_neck_base";
ProtoInstance808.fieldValue = new MFNode();

ProtoInstance808.fieldValue[0] = fieldValue809;

fieldValue fieldValue810 = createNode("fieldValue");
fieldValue810.name = "translation";
fieldValue810.value = "-0.04190000146627426 1.5148999691009521 -0.02199999988079071";
ProtoInstance808.fieldValue[1] = fieldValue810;

fieldValue585.children[74] = ProtoInstance808;

ProtoInstance ProtoInstance811 = createNode("ProtoInstance");
ProtoInstance811.name = "Site";
ProtoInstance811.DEF = "hanim_l_neck_base";
fieldValue fieldValue812 = createNode("fieldValue");
fieldValue812.name = "name";
fieldValue812.value = "l_neck_base";
ProtoInstance811.fieldValue = new MFNode();

ProtoInstance811.fieldValue[0] = fieldValue812;

fieldValue fieldValue813 = createNode("fieldValue");
fieldValue813.name = "translation";
fieldValue813.value = "0.06459999829530716 1.5140999555587769 -0.03799999877810478";
ProtoInstance811.fieldValue[1] = fieldValue813;

fieldValue585.children[75] = ProtoInstance811;

ProtoInstance ProtoInstance814 = createNode("ProtoInstance");
ProtoInstance814.name = "Site";
ProtoInstance814.DEF = "hanim_navel";
fieldValue fieldValue815 = createNode("fieldValue");
fieldValue815.name = "name";
fieldValue815.value = "navel";
ProtoInstance814.fieldValue = new MFNode();

ProtoInstance814.fieldValue[0] = fieldValue815;

fieldValue fieldValue816 = createNode("fieldValue");
fieldValue816.name = "translation";
fieldValue816.value = "0.006899999920278788 1.09660005569458 0.10170000046491623";
ProtoInstance814.fieldValue[1] = fieldValue816;

fieldValue585.children[76] = ProtoInstance814;

ProtoInstance583.fieldValue[1] = fieldValue585;

fieldValue582.children = new MFNode();

fieldValue582.children[0] = ProtoInstance583;

ProtoInstance101.fieldValue[2] = fieldValue582;

fieldValue fieldValue817 = createNode("fieldValue");
fieldValue817.name = "sites";
ProtoInstance ProtoInstance818 = createNode("ProtoInstance");
ProtoInstance818.name = "Site";
ProtoInstance818.DEF = "hanim_skull_tip";
fieldValue fieldValue819 = createNode("fieldValue");
fieldValue819.name = "name";
fieldValue819.value = "skull_tip";
ProtoInstance818.fieldValue = new MFNode();

ProtoInstance818.fieldValue[0] = fieldValue819;

fieldValue fieldValue820 = createNode("fieldValue");
fieldValue820.name = "translation";
fieldValue820.value = "0.004999999888241291 1.7503999471664429 0.005499999970197678";
ProtoInstance818.fieldValue[1] = fieldValue820;

fieldValue817.children = new MFNode();

fieldValue817.children[0] = ProtoInstance818;

ProtoInstance ProtoInstance821 = createNode("ProtoInstance");
ProtoInstance821.name = "Site";
ProtoInstance821.DEF = "hanim_sellion";
fieldValue fieldValue822 = createNode("fieldValue");
fieldValue822.name = "name";
fieldValue822.value = "sellion";
ProtoInstance821.fieldValue = new MFNode();

ProtoInstance821.fieldValue[0] = fieldValue822;

fieldValue fieldValue823 = createNode("fieldValue");
fieldValue823.name = "translation";
fieldValue823.value = "0.005799999926239252 1.631600022315979 0.0851999968290329";
ProtoInstance821.fieldValue[1] = fieldValue823;

fieldValue817.children[1] = ProtoInstance821;

ProtoInstance ProtoInstance824 = createNode("ProtoInstance");
ProtoInstance824.name = "Site";
ProtoInstance824.DEF = "hanim_r_infraorbitale";
fieldValue fieldValue825 = createNode("fieldValue");
fieldValue825.name = "name";
fieldValue825.value = "r_infraorbitale";
ProtoInstance824.fieldValue = new MFNode();

ProtoInstance824.fieldValue[0] = fieldValue825;

fieldValue fieldValue826 = createNode("fieldValue");
fieldValue826.name = "translation";
fieldValue826.value = "-0.02370000071823597 1.6171000003814697 0.07519999891519547";
ProtoInstance824.fieldValue[1] = fieldValue826;

fieldValue817.children[2] = ProtoInstance824;

ProtoInstance ProtoInstance827 = createNode("ProtoInstance");
ProtoInstance827.name = "Site";
ProtoInstance827.DEF = "hanim_l_infraorbitale";
fieldValue fieldValue828 = createNode("fieldValue");
fieldValue828.name = "name";
fieldValue828.value = "l_infraorbitale";
ProtoInstance827.fieldValue = new MFNode();

ProtoInstance827.fieldValue[0] = fieldValue828;

fieldValue fieldValue829 = createNode("fieldValue");
fieldValue829.name = "translation";
fieldValue829.value = "0.0340999998152256 1.6171000003814697 0.07519999891519547";
ProtoInstance827.fieldValue[1] = fieldValue829;

fieldValue817.children[3] = ProtoInstance827;

ProtoInstance ProtoInstance830 = createNode("ProtoInstance");
ProtoInstance830.name = "Site";
ProtoInstance830.DEF = "hanim_supramenton";
fieldValue fieldValue831 = createNode("fieldValue");
fieldValue831.name = "name";
fieldValue831.value = "supramenton";
ProtoInstance830.fieldValue = new MFNode();

ProtoInstance830.fieldValue[0] = fieldValue831;

fieldValue fieldValue832 = createNode("fieldValue");
fieldValue832.name = "translation";
fieldValue832.value = "0.006099999882280827 1.5410000085830688 0.08049999922513962";
ProtoInstance830.fieldValue[1] = fieldValue832;

fieldValue817.children[4] = ProtoInstance830;

ProtoInstance ProtoInstance833 = createNode("ProtoInstance");
ProtoInstance833.name = "Site";
ProtoInstance833.DEF = "hanim_r_tragion";
fieldValue fieldValue834 = createNode("fieldValue");
fieldValue834.name = "name";
fieldValue834.value = "r_tragion";
ProtoInstance833.fieldValue = new MFNode();

ProtoInstance833.fieldValue[0] = fieldValue834;

fieldValue fieldValue835 = createNode("fieldValue");
fieldValue835.name = "translation";
fieldValue835.value = "-0.06459999829530716 1.6346999406814575 0.03020000085234642";
ProtoInstance833.fieldValue[1] = fieldValue835;

fieldValue817.children[5] = ProtoInstance833;

ProtoInstance ProtoInstance836 = createNode("ProtoInstance");
ProtoInstance836.name = "Site";
ProtoInstance836.DEF = "hanim_r_gonion";
fieldValue fieldValue837 = createNode("fieldValue");
fieldValue837.name = "name";
fieldValue837.value = "r_gonion";
ProtoInstance836.fieldValue = new MFNode();

ProtoInstance836.fieldValue[0] = fieldValue837;

fieldValue fieldValue838 = createNode("fieldValue");
fieldValue838.name = "translation";
fieldValue838.value = "-0.052000001072883606 1.552899956703186 0.034699998795986176";
ProtoInstance836.fieldValue[1] = fieldValue838;

fieldValue817.children[6] = ProtoInstance836;

ProtoInstance ProtoInstance839 = createNode("ProtoInstance");
ProtoInstance839.name = "Site";
ProtoInstance839.DEF = "hanim_l_tragion";
fieldValue fieldValue840 = createNode("fieldValue");
fieldValue840.name = "name";
fieldValue840.value = "l_tragion";
ProtoInstance839.fieldValue = new MFNode();

ProtoInstance839.fieldValue[0] = fieldValue840;

fieldValue fieldValue841 = createNode("fieldValue");
fieldValue841.name = "translation";
fieldValue841.value = "0.0738999992609024 1.6347999572753906 0.028200000524520874";
ProtoInstance839.fieldValue[1] = fieldValue841;

fieldValue817.children[7] = ProtoInstance839;

ProtoInstance ProtoInstance842 = createNode("ProtoInstance");
ProtoInstance842.name = "Site";
ProtoInstance842.DEF = "hanim_l_gonion";
fieldValue fieldValue843 = createNode("fieldValue");
fieldValue843.name = "name";
fieldValue843.value = "l_gonion";
ProtoInstance842.fieldValue = new MFNode();

ProtoInstance842.fieldValue[0] = fieldValue843;

fieldValue fieldValue844 = createNode("fieldValue");
fieldValue844.name = "translation";
fieldValue844.value = "0.06310000270605087 1.5529999732971191 0.032999999821186066";
ProtoInstance842.fieldValue[1] = fieldValue844;

fieldValue817.children[8] = ProtoInstance842;

ProtoInstance ProtoInstance845 = createNode("ProtoInstance");
ProtoInstance845.name = "Site";
ProtoInstance845.DEF = "hanim_nuchale";
fieldValue fieldValue846 = createNode("fieldValue");
fieldValue846.name = "name";
fieldValue846.value = "nuchale";
ProtoInstance845.fieldValue = new MFNode();

ProtoInstance845.fieldValue[0] = fieldValue846;

fieldValue fieldValue847 = createNode("fieldValue");
fieldValue847.name = "translation";
fieldValue847.value = "0.0038999998942017555 1.5972000360488892 -0.07959999889135361";
ProtoInstance845.fieldValue[1] = fieldValue847;

fieldValue817.children[9] = ProtoInstance845;

ProtoInstance ProtoInstance848 = createNode("ProtoInstance");
ProtoInstance848.name = "Site";
ProtoInstance848.DEF = "hanim_r_clavicale";
fieldValue fieldValue849 = createNode("fieldValue");
fieldValue849.name = "name";
fieldValue849.value = "r_clavicale";
ProtoInstance848.fieldValue = new MFNode();

ProtoInstance848.fieldValue[0] = fieldValue849;

fieldValue fieldValue850 = createNode("fieldValue");
fieldValue850.name = "translation";
fieldValue850.value = "-0.011500000022351742 1.4943000078201294 0.03999999910593033";
ProtoInstance848.fieldValue[1] = fieldValue850;

fieldValue817.children[10] = ProtoInstance848;

ProtoInstance ProtoInstance851 = createNode("ProtoInstance");
ProtoInstance851.name = "Site";
ProtoInstance851.DEF = "hanim_suprasternale";
fieldValue fieldValue852 = createNode("fieldValue");
fieldValue852.name = "name";
fieldValue852.value = "suprasternale";
ProtoInstance851.fieldValue = new MFNode();

ProtoInstance851.fieldValue[0] = fieldValue852;

fieldValue fieldValue853 = createNode("fieldValue");
fieldValue853.name = "translation";
fieldValue853.value = "0.00839999970048666 1.4714000225067139 0.05510000139474869";
ProtoInstance851.fieldValue[1] = fieldValue853;

fieldValue817.children[11] = ProtoInstance851;

ProtoInstance ProtoInstance854 = createNode("ProtoInstance");
ProtoInstance854.name = "Site";
ProtoInstance854.DEF = "hanim_l_clavicale";
fieldValue fieldValue855 = createNode("fieldValue");
fieldValue855.name = "name";
fieldValue855.value = "l_clavicale";
ProtoInstance854.fieldValue = new MFNode();

ProtoInstance854.fieldValue[0] = fieldValue855;

fieldValue fieldValue856 = createNode("fieldValue");
fieldValue856.name = "translation";
fieldValue856.value = "0.02710000053048134 1.4943000078201294 0.039400000125169754";
ProtoInstance854.fieldValue[1] = fieldValue856;

fieldValue817.children[12] = ProtoInstance854;

ProtoInstance ProtoInstance857 = createNode("ProtoInstance");
ProtoInstance857.name = "Site";
ProtoInstance857.DEF = "hanim_r_thelion";
fieldValue fieldValue858 = createNode("fieldValue");
fieldValue858.name = "name";
fieldValue858.value = "r_thelion";
ProtoInstance857.fieldValue = new MFNode();

ProtoInstance857.fieldValue[0] = fieldValue858;

fieldValue fieldValue859 = createNode("fieldValue");
fieldValue859.name = "translation";
fieldValue859.value = "-0.07360000163316727 1.3385000228881836 0.1216999962925911";
ProtoInstance857.fieldValue[1] = fieldValue859;

fieldValue817.children[13] = ProtoInstance857;

ProtoInstance ProtoInstance860 = createNode("ProtoInstance");
ProtoInstance860.name = "Site";
ProtoInstance860.DEF = "hanim_l_thelion";
fieldValue fieldValue861 = createNode("fieldValue");
fieldValue861.name = "name";
fieldValue861.value = "l_thelion";
ProtoInstance860.fieldValue = new MFNode();

ProtoInstance860.fieldValue[0] = fieldValue861;

fieldValue fieldValue862 = createNode("fieldValue");
fieldValue862.name = "translation";
fieldValue862.value = "0.09179999679327011 1.3381999731063843 0.11919999867677689";
ProtoInstance860.fieldValue[1] = fieldValue862;

fieldValue817.children[14] = ProtoInstance860;

ProtoInstance ProtoInstance863 = createNode("ProtoInstance");
ProtoInstance863.name = "Site";
ProtoInstance863.DEF = "hanim_substernale";
fieldValue fieldValue864 = createNode("fieldValue");
fieldValue864.name = "name";
fieldValue864.value = "substernale";
ProtoInstance863.fieldValue = new MFNode();

ProtoInstance863.fieldValue[0] = fieldValue864;

fieldValue fieldValue865 = createNode("fieldValue");
fieldValue865.name = "translation";
fieldValue865.value = "0.008500000461935997 1.2994999885559082 0.11469999700784683";
ProtoInstance863.fieldValue[1] = fieldValue865;

fieldValue817.children[15] = ProtoInstance863;

ProtoInstance ProtoInstance866 = createNode("ProtoInstance");
ProtoInstance866.name = "Site";
ProtoInstance866.DEF = "hanim_r_rib10";
fieldValue fieldValue867 = createNode("fieldValue");
fieldValue867.name = "name";
fieldValue867.value = "r_rib10";
ProtoInstance866.fieldValue = new MFNode();

ProtoInstance866.fieldValue[0] = fieldValue867;

fieldValue fieldValue868 = createNode("fieldValue");
fieldValue868.name = "translation";
fieldValue868.value = "-0.07109999656677246 1.194100022315979 0.10159999877214432";
ProtoInstance866.fieldValue[1] = fieldValue868;

fieldValue817.children[16] = ProtoInstance866;

ProtoInstance ProtoInstance869 = createNode("ProtoInstance");
ProtoInstance869.name = "Site";
ProtoInstance869.DEF = "hanim_r_asis";
fieldValue fieldValue870 = createNode("fieldValue");
fieldValue870.name = "name";
fieldValue870.value = "r_asis";
ProtoInstance869.fieldValue = new MFNode();

ProtoInstance869.fieldValue[0] = fieldValue870;

fieldValue fieldValue871 = createNode("fieldValue");
fieldValue871.name = "translation";
fieldValue871.value = "-0.08869999647140503 1.0020999908447266 0.1111999973654747";
ProtoInstance869.fieldValue[1] = fieldValue871;

fieldValue817.children[17] = ProtoInstance869;

ProtoInstance ProtoInstance872 = createNode("ProtoInstance");
ProtoInstance872.name = "Site";
ProtoInstance872.DEF = "hanim_l_rib10";
fieldValue fieldValue873 = createNode("fieldValue");
fieldValue873.name = "name";
fieldValue873.value = "l_rib10";
ProtoInstance872.fieldValue = new MFNode();

ProtoInstance872.fieldValue[0] = fieldValue873;

fieldValue fieldValue874 = createNode("fieldValue");
fieldValue874.name = "translation";
fieldValue874.value = "0.08709999918937683 1.1924999952316284 0.09920000284910202";
ProtoInstance872.fieldValue[1] = fieldValue874;

fieldValue817.children[18] = ProtoInstance872;

ProtoInstance ProtoInstance875 = createNode("ProtoInstance");
ProtoInstance875.name = "Site";
ProtoInstance875.DEF = "hanim_l_asis";
fieldValue fieldValue876 = createNode("fieldValue");
fieldValue876.name = "name";
fieldValue876.value = "l_asis";
ProtoInstance875.fieldValue = new MFNode();

ProtoInstance875.fieldValue[0] = fieldValue876;

fieldValue fieldValue877 = createNode("fieldValue");
fieldValue877.name = "translation";
fieldValue877.value = "0.0925000011920929 0.9983000159263611 0.10520000010728836";
ProtoInstance875.fieldValue[1] = fieldValue877;

fieldValue817.children[19] = ProtoInstance875;

ProtoInstance ProtoInstance878 = createNode("ProtoInstance");
ProtoInstance878.name = "Site";
ProtoInstance878.DEF = "hanim_r_iliocristale";
fieldValue fieldValue879 = createNode("fieldValue");
fieldValue879.name = "name";
fieldValue879.value = "r_iliocristale";
ProtoInstance878.fieldValue = new MFNode();

ProtoInstance878.fieldValue[0] = fieldValue879;

fieldValue fieldValue880 = createNode("fieldValue");
fieldValue880.name = "translation";
fieldValue880.value = "-0.1525000035762787 1.0628000497817993 0.0035000001080334187";
ProtoInstance878.fieldValue[1] = fieldValue880;

fieldValue817.children[20] = ProtoInstance878;

ProtoInstance ProtoInstance881 = createNode("ProtoInstance");
ProtoInstance881.name = "Site";
ProtoInstance881.DEF = "hanim_r_trochanterion";
fieldValue fieldValue882 = createNode("fieldValue");
fieldValue882.name = "name";
fieldValue882.value = "r_trochanterion";
ProtoInstance881.fieldValue = new MFNode();

ProtoInstance881.fieldValue[0] = fieldValue882;

fieldValue fieldValue883 = createNode("fieldValue");
fieldValue883.name = "translation";
fieldValue883.value = "-0.1688999980688095 0.8418999910354614 0.03519999980926514";
ProtoInstance881.fieldValue[1] = fieldValue883;

fieldValue817.children[21] = ProtoInstance881;

ProtoInstance ProtoInstance884 = createNode("ProtoInstance");
ProtoInstance884.name = "Site";
ProtoInstance884.DEF = "hanim_l_iliocristale";
fieldValue fieldValue885 = createNode("fieldValue");
fieldValue885.name = "name";
fieldValue885.value = "l_iliocristale";
ProtoInstance884.fieldValue = new MFNode();

ProtoInstance884.fieldValue[0] = fieldValue885;

fieldValue fieldValue886 = createNode("fieldValue");
fieldValue886.name = "translation";
fieldValue886.value = "0.16120000183582306 1.0536999702453613 0.0007999999797903001";
ProtoInstance884.fieldValue[1] = fieldValue886;

fieldValue817.children[22] = ProtoInstance884;

ProtoInstance ProtoInstance887 = createNode("ProtoInstance");
ProtoInstance887.name = "Site";
ProtoInstance887.DEF = "hanim_l_trochanterion";
fieldValue fieldValue888 = createNode("fieldValue");
fieldValue888.name = "name";
fieldValue888.value = "l_trochanterion";
ProtoInstance887.fieldValue = new MFNode();

ProtoInstance887.fieldValue[0] = fieldValue888;

fieldValue fieldValue889 = createNode("fieldValue");
fieldValue889.name = "translation";
fieldValue889.value = "0.16769999265670776 0.8335999846458435 0.030300000682473183";
ProtoInstance887.fieldValue[1] = fieldValue889;

fieldValue817.children[23] = ProtoInstance887;

ProtoInstance ProtoInstance890 = createNode("ProtoInstance");
ProtoInstance890.name = "Site";
ProtoInstance890.DEF = "hanim_cervicale";
fieldValue fieldValue891 = createNode("fieldValue");
fieldValue891.name = "name";
fieldValue891.value = "cervicale";
ProtoInstance890.fieldValue = new MFNode();

ProtoInstance890.fieldValue[0] = fieldValue891;

fieldValue fieldValue892 = createNode("fieldValue");
fieldValue892.name = "translation";
fieldValue892.value = "0.006399999838322401 1.5199999809265137 -0.08150000125169754";
ProtoInstance890.fieldValue[1] = fieldValue892;

fieldValue817.children[24] = ProtoInstance890;

ProtoInstance ProtoInstance893 = createNode("ProtoInstance");
ProtoInstance893.name = "Site";
ProtoInstance893.DEF = "hanim_spine_2_lower_back";
fieldValue fieldValue894 = createNode("fieldValue");
fieldValue894.name = "name";
fieldValue894.value = "spine_2_lower_back";
ProtoInstance893.fieldValue = new MFNode();

ProtoInstance893.fieldValue[0] = fieldValue894;

fieldValue fieldValue895 = createNode("fieldValue");
fieldValue895.name = "translation";
fieldValue895.value = "0.004900000058114529 1.1907999515533447 -0.11129999905824661";
ProtoInstance893.fieldValue[1] = fieldValue895;

fieldValue817.children[25] = ProtoInstance893;

ProtoInstance ProtoInstance896 = createNode("ProtoInstance");
ProtoInstance896.name = "Site";
ProtoInstance896.DEF = "hanim_r_psis";
fieldValue fieldValue897 = createNode("fieldValue");
fieldValue897.name = "name";
fieldValue897.value = "r_psis";
ProtoInstance896.fieldValue = new MFNode();

ProtoInstance896.fieldValue[0] = fieldValue897;

fieldValue fieldValue898 = createNode("fieldValue");
fieldValue898.name = "translation";
fieldValue898.value = "-0.07159999758005142 1.0190000534057617 -0.11379999667406082";
ProtoInstance896.fieldValue[1] = fieldValue898;

fieldValue817.children[26] = ProtoInstance896;

ProtoInstance ProtoInstance899 = createNode("ProtoInstance");
ProtoInstance899.name = "Site";
ProtoInstance899.DEF = "hanim_l_psis";
fieldValue fieldValue900 = createNode("fieldValue");
fieldValue900.name = "name";
fieldValue900.value = "l_psis";
ProtoInstance899.fieldValue = new MFNode();

ProtoInstance899.fieldValue[0] = fieldValue900;

fieldValue fieldValue901 = createNode("fieldValue");
fieldValue901.name = "translation";
fieldValue901.value = "0.07739999890327454 1.0190000534057617 -0.11509999632835388";
ProtoInstance899.fieldValue[1] = fieldValue901;

fieldValue817.children[27] = ProtoInstance899;

ProtoInstance ProtoInstance902 = createNode("ProtoInstance");
ProtoInstance902.name = "Site";
ProtoInstance902.DEF = "hanim_waist_preferred_posterior";
fieldValue fieldValue903 = createNode("fieldValue");
fieldValue903.name = "name";
fieldValue903.value = "waist_preferred_posterior";
ProtoInstance902.fieldValue = new MFNode();

ProtoInstance902.fieldValue[0] = fieldValue903;

fieldValue fieldValue904 = createNode("fieldValue");
fieldValue904.name = "translation";
fieldValue904.value = "0.28999999165534973 1.0915000438690186 -0.10909999907016754";
ProtoInstance902.fieldValue[1] = fieldValue904;

fieldValue817.children[28] = ProtoInstance902;

ProtoInstance ProtoInstance905 = createNode("ProtoInstance");
ProtoInstance905.name = "Site";
ProtoInstance905.DEF = "hanim_r_acromion";
fieldValue fieldValue906 = createNode("fieldValue");
fieldValue906.name = "name";
fieldValue906.value = "r_acromion";
ProtoInstance905.fieldValue = new MFNode();

ProtoInstance905.fieldValue[0] = fieldValue906;

fieldValue fieldValue907 = createNode("fieldValue");
fieldValue907.name = "translation";
fieldValue907.value = "-0.19050000607967377 1.479099988937378 -0.04309999942779541";
ProtoInstance905.fieldValue[1] = fieldValue907;

fieldValue817.children[29] = ProtoInstance905;

ProtoInstance ProtoInstance908 = createNode("ProtoInstance");
ProtoInstance908.name = "Site";
ProtoInstance908.DEF = "hanim_r_axilla_proximal";
fieldValue fieldValue909 = createNode("fieldValue");
fieldValue909.name = "name";
fieldValue909.value = "r_axilla_proximal";
ProtoInstance908.fieldValue = new MFNode();

ProtoInstance908.fieldValue[0] = fieldValue909;

fieldValue fieldValue910 = createNode("fieldValue");
fieldValue910.name = "translation";
fieldValue910.value = "-0.16259999573230743 1.4071999788284302 -0.003100000089034438";
ProtoInstance908.fieldValue[1] = fieldValue910;

fieldValue817.children[30] = ProtoInstance908;

ProtoInstance ProtoInstance911 = createNode("ProtoInstance");
ProtoInstance911.name = "Site";
ProtoInstance911.DEF = "hanim_r_radial_styloid";
fieldValue fieldValue912 = createNode("fieldValue");
fieldValue912.name = "name";
fieldValue912.value = "r_radial_styloid";
ProtoInstance911.fieldValue = new MFNode();

ProtoInstance911.fieldValue[0] = fieldValue912;

fieldValue fieldValue913 = createNode("fieldValue");
fieldValue913.name = "translation";
fieldValue913.value = "-0.188400000333786 0.8676000237464905 -0.035999998450279236";
ProtoInstance911.fieldValue[1] = fieldValue913;

fieldValue817.children[31] = ProtoInstance911;

ProtoInstance ProtoInstance914 = createNode("ProtoInstance");
ProtoInstance914.name = "Site";
ProtoInstance914.DEF = "hanim_r_axilla_distal";
fieldValue fieldValue915 = createNode("fieldValue");
fieldValue915.name = "name";
fieldValue915.value = "r_axilla_distal";
ProtoInstance914.fieldValue = new MFNode();

ProtoInstance914.fieldValue[0] = fieldValue915;

fieldValue fieldValue916 = createNode("fieldValue");
fieldValue916.name = "translation";
fieldValue916.value = "-0.16030000150203705 1.4098000526428223 -0.08259999752044678";
ProtoInstance914.fieldValue[1] = fieldValue916;

fieldValue817.children[32] = ProtoInstance914;

ProtoInstance ProtoInstance917 = createNode("ProtoInstance");
ProtoInstance917.name = "Site";
ProtoInstance917.DEF = "hanim_r_olecranon";
fieldValue fieldValue918 = createNode("fieldValue");
fieldValue918.name = "name";
fieldValue918.value = "r_olecranon";
ProtoInstance917.fieldValue = new MFNode();

ProtoInstance917.fieldValue[0] = fieldValue918;

fieldValue fieldValue919 = createNode("fieldValue");
fieldValue919.name = "translation";
fieldValue919.value = "-0.1906999945640564 1.1404999494552612 -0.10649999976158142";
ProtoInstance917.fieldValue[1] = fieldValue919;

fieldValue817.children[33] = ProtoInstance917;

ProtoInstance ProtoInstance920 = createNode("ProtoInstance");
ProtoInstance920.name = "Site";
ProtoInstance920.DEF = "hanim_r_humeral_lateral_epicondyles";
fieldValue fieldValue921 = createNode("fieldValue");
fieldValue921.name = "name";
fieldValue921.value = "r_humeral_lateral_epicondyles";
ProtoInstance920.fieldValue = new MFNode();

ProtoInstance920.fieldValue[0] = fieldValue921;

fieldValue fieldValue922 = createNode("fieldValue");
fieldValue922.name = "translation";
fieldValue922.value = "-0.2223999947309494 1.1517000198364258 -0.10329999774694443";
ProtoInstance920.fieldValue[1] = fieldValue922;

fieldValue817.children[34] = ProtoInstance920;

ProtoInstance ProtoInstance923 = createNode("ProtoInstance");
ProtoInstance923.name = "Site";
ProtoInstance923.DEF = "hanim_r_humeral_medial_epicondyles";
fieldValue fieldValue924 = createNode("fieldValue");
fieldValue924.name = "name";
fieldValue924.value = "r_humeral_medial_epicondyles";
ProtoInstance923.fieldValue = new MFNode();

ProtoInstance923.fieldValue[0] = fieldValue924;

fieldValue fieldValue925 = createNode("fieldValue");
fieldValue925.name = "translation";
fieldValue925.value = "-0.1679999977350235 1.1297999620437622 -0.10620000213384628";
ProtoInstance923.fieldValue[1] = fieldValue925;

fieldValue817.children[35] = ProtoInstance923;

ProtoInstance ProtoInstance926 = createNode("ProtoInstance");
ProtoInstance926.name = "Site";
ProtoInstance926.DEF = "hanim_r_radiale";
fieldValue fieldValue927 = createNode("fieldValue");
fieldValue927.name = "name";
fieldValue927.value = "r_radiale";
ProtoInstance926.fieldValue = new MFNode();

ProtoInstance926.fieldValue[0] = fieldValue927;

fieldValue fieldValue928 = createNode("fieldValue");
fieldValue928.name = "translation";
fieldValue928.value = "-0.21299999952316284 1.1304999589920044 -0.10909999907016754";
ProtoInstance926.fieldValue[1] = fieldValue928;

fieldValue817.children[36] = ProtoInstance926;

ProtoInstance ProtoInstance929 = createNode("ProtoInstance");
ProtoInstance929.name = "Site";
ProtoInstance929.DEF = "hanim_r_metacarpal_phalanx_2";
fieldValue fieldValue930 = createNode("fieldValue");
fieldValue930.name = "name";
fieldValue930.value = "r_metacarpal_phalanx_2";
ProtoInstance929.fieldValue = new MFNode();

ProtoInstance929.fieldValue[0] = fieldValue930;

fieldValue fieldValue931 = createNode("fieldValue");
fieldValue931.name = "translation";
fieldValue931.value = "-0.19769999384880066 0.8169000148773193 -0.01769999973475933";
ProtoInstance929.fieldValue[1] = fieldValue931;

fieldValue817.children[37] = ProtoInstance929;

ProtoInstance ProtoInstance932 = createNode("ProtoInstance");
ProtoInstance932.name = "Site";
ProtoInstance932.DEF = "hanim_r_dactylion";
fieldValue fieldValue933 = createNode("fieldValue");
fieldValue933.name = "name";
fieldValue933.value = "r_dactylion";
ProtoInstance932.fieldValue = new MFNode();

ProtoInstance932.fieldValue[0] = fieldValue933;

fieldValue fieldValue934 = createNode("fieldValue");
fieldValue934.name = "translation";
fieldValue934.value = "-0.1941000074148178 0.6772000193595886 -0.04230000078678131";
ProtoInstance932.fieldValue[1] = fieldValue934;

fieldValue817.children[38] = ProtoInstance932;

ProtoInstance ProtoInstance935 = createNode("ProtoInstance");
ProtoInstance935.name = "Site";
ProtoInstance935.DEF = "hanim_r_ulnar_styloid";
fieldValue fieldValue936 = createNode("fieldValue");
fieldValue936.name = "name";
fieldValue936.value = "r_ulnar_styloid";
ProtoInstance935.fieldValue = new MFNode();

ProtoInstance935.fieldValue[0] = fieldValue936;

fieldValue fieldValue937 = createNode("fieldValue");
fieldValue937.name = "translation";
fieldValue937.value = "-0.21170000731945038 0.8561999797821045 -0.058400001376867294";
ProtoInstance935.fieldValue[1] = fieldValue937;

fieldValue817.children[39] = ProtoInstance935;

ProtoInstance ProtoInstance938 = createNode("ProtoInstance");
ProtoInstance938.name = "Site";
ProtoInstance938.DEF = "hanim_r_metacarpal_phalanx_5";
fieldValue fieldValue939 = createNode("fieldValue");
fieldValue939.name = "name";
fieldValue939.value = "r_metacarpal_phalanx_5";
ProtoInstance938.fieldValue = new MFNode();

ProtoInstance938.fieldValue[0] = fieldValue939;

fieldValue fieldValue940 = createNode("fieldValue");
fieldValue940.name = "translation";
fieldValue940.value = "-0.19290000200271606 0.7889999747276306 -0.10639999806880951";
ProtoInstance938.fieldValue[1] = fieldValue940;

fieldValue817.children[40] = ProtoInstance938;

ProtoInstance ProtoInstance941 = createNode("ProtoInstance");
ProtoInstance941.name = "Site";
ProtoInstance941.DEF = "hanim_l_acromion";
fieldValue fieldValue942 = createNode("fieldValue");
fieldValue942.name = "name";
fieldValue942.value = "l_acromion";
ProtoInstance941.fieldValue = new MFNode();

ProtoInstance941.fieldValue[0] = fieldValue942;

fieldValue fieldValue943 = createNode("fieldValue");
fieldValue943.name = "translation";
fieldValue943.value = "0.20319999754428864 1.4759999513626099 -0.04899999871850014";
ProtoInstance941.fieldValue[1] = fieldValue943;

fieldValue817.children[41] = ProtoInstance941;

ProtoInstance ProtoInstance944 = createNode("ProtoInstance");
ProtoInstance944.name = "Site";
ProtoInstance944.DEF = "hanim_l_axilla_proximal";
fieldValue fieldValue945 = createNode("fieldValue");
fieldValue945.name = "name";
fieldValue945.value = "l_axilla_proximal";
ProtoInstance944.fieldValue = new MFNode();

ProtoInstance944.fieldValue[0] = fieldValue945;

fieldValue fieldValue946 = createNode("fieldValue");
fieldValue946.name = "translation";
fieldValue946.value = "0.1776999980211258 1.406499981880188 -0.007499999832361937";
ProtoInstance944.fieldValue[1] = fieldValue946;

fieldValue817.children[42] = ProtoInstance944;

ProtoInstance ProtoInstance947 = createNode("ProtoInstance");
ProtoInstance947.name = "Site";
ProtoInstance947.DEF = "hanim_l_radial_styloid";
fieldValue fieldValue948 = createNode("fieldValue");
fieldValue948.name = "name";
fieldValue948.value = "l_radial_styloid";
ProtoInstance947.fieldValue = new MFNode();

ProtoInstance947.fieldValue[0] = fieldValue948;

fieldValue fieldValue949 = createNode("fieldValue");
fieldValue949.name = "translation";
fieldValue949.value = "0.19009999930858612 0.8644999861717224 -0.04149999842047691";
ProtoInstance947.fieldValue[1] = fieldValue949;

fieldValue817.children[43] = ProtoInstance947;

ProtoInstance ProtoInstance950 = createNode("ProtoInstance");
ProtoInstance950.name = "Site";
ProtoInstance950.DEF = "hanim_l_axilla_distal";
fieldValue fieldValue951 = createNode("fieldValue");
fieldValue951.name = "name";
fieldValue951.value = "l_axilla_distal";
ProtoInstance950.fieldValue = new MFNode();

ProtoInstance950.fieldValue[0] = fieldValue951;

fieldValue fieldValue952 = createNode("fieldValue");
fieldValue952.name = "translation";
fieldValue952.value = "0.17059999704360962 1.4071999788284302 -0.08749999850988388";
ProtoInstance950.fieldValue[1] = fieldValue952;

fieldValue817.children[44] = ProtoInstance950;

ProtoInstance ProtoInstance953 = createNode("ProtoInstance");
ProtoInstance953.name = "Site";
ProtoInstance953.DEF = "hanim_l_olecranon";
fieldValue fieldValue954 = createNode("fieldValue");
fieldValue954.name = "name";
fieldValue954.value = "l_olecranon";
ProtoInstance953.fieldValue = new MFNode();

ProtoInstance953.fieldValue[0] = fieldValue954;

fieldValue fieldValue955 = createNode("fieldValue");
fieldValue955.name = "translation";
fieldValue955.value = "-0.19619999825954437 1.1375000476837158 -0.11230000108480453";
ProtoInstance953.fieldValue[1] = fieldValue955;

fieldValue817.children[45] = ProtoInstance953;

ProtoInstance ProtoInstance956 = createNode("ProtoInstance");
ProtoInstance956.name = "Site";
ProtoInstance956.DEF = "hanim_l_humeral_lateral_epicondyles";
fieldValue fieldValue957 = createNode("fieldValue");
fieldValue957.name = "name";
fieldValue957.value = "l_humeral_lateral_epicondyles";
ProtoInstance956.fieldValue = new MFNode();

ProtoInstance956.fieldValue[0] = fieldValue957;

fieldValue fieldValue958 = createNode("fieldValue");
fieldValue958.name = "translation";
fieldValue958.value = "0.2280000001192093 1.1482000350952148 -0.10999999940395355";
ProtoInstance956.fieldValue[1] = fieldValue958;

fieldValue817.children[46] = ProtoInstance956;

ProtoInstance ProtoInstance959 = createNode("ProtoInstance");
ProtoInstance959.name = "Site";
ProtoInstance959.DEF = "hanim_l_humeral_medial_epicondyles";
fieldValue fieldValue960 = createNode("fieldValue");
fieldValue960.name = "name";
fieldValue960.value = "l_humeral_medial_epicondyles";
ProtoInstance959.fieldValue = new MFNode();

ProtoInstance959.fieldValue[0] = fieldValue960;

fieldValue fieldValue961 = createNode("fieldValue");
fieldValue961.name = "translation";
fieldValue961.value = "0.17350000143051147 1.1272000074386597 -0.11129999905824661";
ProtoInstance959.fieldValue[1] = fieldValue961;

fieldValue817.children[47] = ProtoInstance959;

ProtoInstance ProtoInstance962 = createNode("ProtoInstance");
ProtoInstance962.name = "Site";
ProtoInstance962.DEF = "hanim_l_radiale";
fieldValue fieldValue963 = createNode("fieldValue");
fieldValue963.name = "name";
fieldValue963.value = "l_radiale";
ProtoInstance962.fieldValue = new MFNode();

ProtoInstance962.fieldValue[0] = fieldValue963;

fieldValue fieldValue964 = createNode("fieldValue");
fieldValue964.name = "translation";
fieldValue964.value = "0.21819999814033508 1.1211999654769897 -0.11670000106096268";
ProtoInstance962.fieldValue[1] = fieldValue964;

fieldValue817.children[48] = ProtoInstance962;

ProtoInstance ProtoInstance965 = createNode("ProtoInstance");
ProtoInstance965.name = "Site";
ProtoInstance965.DEF = "hanim_l_metacarpal_phalanx_2";
fieldValue fieldValue966 = createNode("fieldValue");
fieldValue966.name = "name";
fieldValue966.value = "l_metacarpal_phalanx_2";
ProtoInstance965.fieldValue = new MFNode();

ProtoInstance965.fieldValue[0] = fieldValue966;

fieldValue fieldValue967 = createNode("fieldValue");
fieldValue967.name = "translation";
fieldValue967.value = "0.20090000331401825 0.8138999938964844 -0.02370000071823597";
ProtoInstance965.fieldValue[1] = fieldValue967;

fieldValue817.children[49] = ProtoInstance965;

ProtoInstance ProtoInstance968 = createNode("ProtoInstance");
ProtoInstance968.name = "Site";
ProtoInstance968.DEF = "hanim_l_dactylion";
fieldValue fieldValue969 = createNode("fieldValue");
fieldValue969.name = "name";
fieldValue969.value = "l_dactylion";
ProtoInstance968.fieldValue = new MFNode();

ProtoInstance968.fieldValue[0] = fieldValue969;

fieldValue fieldValue970 = createNode("fieldValue");
fieldValue970.name = "translation";
fieldValue970.value = "0.20559999346733093 0.6743000149726868 -0.04820000007748604";
ProtoInstance968.fieldValue[1] = fieldValue970;

fieldValue817.children[50] = ProtoInstance968;

ProtoInstance ProtoInstance971 = createNode("ProtoInstance");
ProtoInstance971.name = "Site";
ProtoInstance971.DEF = "hanim_l_ulnar_styloid";
fieldValue fieldValue972 = createNode("fieldValue");
fieldValue972.name = "name";
fieldValue972.value = "l_ulnar_styloid";
ProtoInstance971.fieldValue = new MFNode();

ProtoInstance971.fieldValue[0] = fieldValue972;

fieldValue fieldValue973 = createNode("fieldValue");
fieldValue973.name = "translation";
fieldValue973.value = "-0.2142000049352646 0.8529000282287598 -0.06480000168085098";
ProtoInstance971.fieldValue[1] = fieldValue973;

fieldValue817.children[51] = ProtoInstance971;

ProtoInstance ProtoInstance974 = createNode("ProtoInstance");
ProtoInstance974.name = "Site";
ProtoInstance974.DEF = "hanim_l_metacarpal_phalanx_5";
fieldValue fieldValue975 = createNode("fieldValue");
fieldValue975.name = "name";
fieldValue975.value = "l_metacarpal_phalanx_5";
ProtoInstance974.fieldValue = new MFNode();

ProtoInstance974.fieldValue[0] = fieldValue975;

fieldValue fieldValue976 = createNode("fieldValue");
fieldValue976.name = "translation";
fieldValue976.value = "0.19290000200271606 0.7860000133514404 -0.11219999939203262";
ProtoInstance974.fieldValue[1] = fieldValue976;

fieldValue817.children[52] = ProtoInstance974;

ProtoInstance ProtoInstance977 = createNode("ProtoInstance");
ProtoInstance977.name = "Site";
ProtoInstance977.DEF = "hanim_r_knee_crease";
fieldValue fieldValue978 = createNode("fieldValue");
fieldValue978.name = "name";
fieldValue978.value = "r_knee_crease";
ProtoInstance977.fieldValue = new MFNode();

ProtoInstance977.fieldValue[0] = fieldValue978;

fieldValue fieldValue979 = createNode("fieldValue");
fieldValue979.name = "translation";
fieldValue979.value = "-0.08250000327825546 0.49320000410079956 -0.032600000500679016";
ProtoInstance977.fieldValue[1] = fieldValue979;

fieldValue817.children[53] = ProtoInstance977;

ProtoInstance ProtoInstance980 = createNode("ProtoInstance");
ProtoInstance980.name = "Site";
ProtoInstance980.DEF = "hanim_r_femoral_lateral_epicondyles";
fieldValue fieldValue981 = createNode("fieldValue");
fieldValue981.name = "name";
fieldValue981.value = "r_femoral_lateral_epicondyles";
ProtoInstance980.fieldValue = new MFNode();

ProtoInstance980.fieldValue[0] = fieldValue981;

fieldValue fieldValue982 = createNode("fieldValue");
fieldValue982.name = "translation";
fieldValue982.value = "-0.1421000063419342 0.4991999864578247 0.03099999949336052";
ProtoInstance980.fieldValue[1] = fieldValue982;

fieldValue817.children[54] = ProtoInstance980;

ProtoInstance ProtoInstance983 = createNode("ProtoInstance");
ProtoInstance983.name = "Site";
ProtoInstance983.DEF = "hanim_r_femoral_medial_epicondyles";
fieldValue fieldValue984 = createNode("fieldValue");
fieldValue984.name = "name";
fieldValue984.value = "r_femoral_lateral_epicondyles";
ProtoInstance983.fieldValue = new MFNode();

ProtoInstance983.fieldValue[0] = fieldValue984;

fieldValue fieldValue985 = createNode("fieldValue");
fieldValue985.name = "translation";
fieldValue985.value = "-0.022099999710917473 0.5013999938964844 0.02889999933540821";
ProtoInstance983.fieldValue[1] = fieldValue985;

fieldValue817.children[55] = ProtoInstance983;

ProtoInstance ProtoInstance986 = createNode("ProtoInstance");
ProtoInstance986.name = "Site";
ProtoInstance986.DEF = "hanim_r_tarsal_interphalangeal_phalanx_5";
fieldValue fieldValue987 = createNode("fieldValue");
fieldValue987.name = "name";
fieldValue987.value = "r_tarsal_interphalangeal_phalanx_5";
ProtoInstance986.fieldValue = new MFNode();

ProtoInstance986.fieldValue[0] = fieldValue987;

fieldValue fieldValue988 = createNode("fieldValue");
fieldValue988.name = "translation";
fieldValue988.value = "-0.15230000019073486 0.016599999740719795 0.08950000256299973";
ProtoInstance986.fieldValue[1] = fieldValue988;

fieldValue817.children[56] = ProtoInstance986;

ProtoInstance ProtoInstance989 = createNode("ProtoInstance");
ProtoInstance989.name = "Site";
ProtoInstance989.DEF = "hanim_r_lateral_malleolus";
fieldValue fieldValue990 = createNode("fieldValue");
fieldValue990.name = "name";
fieldValue990.value = "r_lateral_malleolus";
ProtoInstance989.fieldValue = new MFNode();

ProtoInstance989.fieldValue[0] = fieldValue990;

fieldValue fieldValue991 = createNode("fieldValue");
fieldValue991.name = "translation";
fieldValue991.value = "-0.1005999967455864 0.0658000037074089 -0.10750000178813934";
ProtoInstance989.fieldValue[1] = fieldValue991;

fieldValue817.children[57] = ProtoInstance989;

ProtoInstance ProtoInstance992 = createNode("ProtoInstance");
ProtoInstance992.name = "Site";
ProtoInstance992.DEF = "hanim_r_medial_malleolus";
fieldValue fieldValue993 = createNode("fieldValue");
fieldValue993.name = "name";
fieldValue993.value = "r_medial_malleolus";
ProtoInstance992.fieldValue = new MFNode();

ProtoInstance992.fieldValue[0] = fieldValue993;

fieldValue fieldValue994 = createNode("fieldValue");
fieldValue994.name = "translation";
fieldValue994.value = "-0.05909999832510948 0.07599999755620956 -0.09279999881982803";
ProtoInstance992.fieldValue[1] = fieldValue994;

fieldValue817.children[58] = ProtoInstance992;

ProtoInstance ProtoInstance995 = createNode("ProtoInstance");
ProtoInstance995.name = "Site";
ProtoInstance995.DEF = "hanim_r_sphyrion";
fieldValue fieldValue996 = createNode("fieldValue");
fieldValue996.name = "name";
fieldValue996.value = "r_sphyrion";
ProtoInstance995.fieldValue = new MFNode();

ProtoInstance995.fieldValue[0] = fieldValue996;

fieldValue fieldValue997 = createNode("fieldValue");
fieldValue997.name = "translation";
fieldValue997.value = "-0.06030000001192093 0.061000000685453415 -0.10019999742507935";
ProtoInstance995.fieldValue[1] = fieldValue997;

fieldValue817.children[59] = ProtoInstance995;

ProtoInstance ProtoInstance998 = createNode("ProtoInstance");
ProtoInstance998.name = "Site";
ProtoInstance998.DEF = "hanim_r_tarsal_interphalangeal_phalanx_1";
fieldValue fieldValue999 = createNode("fieldValue");
fieldValue999.name = "name";
fieldValue999.value = "r_tarsal_interphalangeal_phalanx_1";
ProtoInstance998.fieldValue = new MFNode();

ProtoInstance998.fieldValue[0] = fieldValue999;

fieldValue fieldValue1000 = createNode("fieldValue");
fieldValue1000.name = "translation";
fieldValue1000.value = "-0.05209999904036522 0.026000000536441803 0.01269999984651804";
ProtoInstance998.fieldValue[1] = fieldValue1000;

fieldValue817.children[60] = ProtoInstance998;

ProtoInstance ProtoInstance1001 = createNode("ProtoInstance");
ProtoInstance1001.name = "Site";
ProtoInstance1001.DEF = "hanim_r_calcaneus_posterior";
fieldValue fieldValue1002 = createNode("fieldValue");
fieldValue1002.name = "name";
fieldValue1002.value = "r_calcaneus_posterior";
ProtoInstance1001.fieldValue = new MFNode();

ProtoInstance1001.fieldValue[0] = fieldValue1002;

fieldValue fieldValue1003 = createNode("fieldValue");
fieldValue1003.name = "translation";
fieldValue1003.value = "-0.06920000165700912 0.02969999983906746 -0.12210000306367874";
ProtoInstance1001.fieldValue[1] = fieldValue1003;

fieldValue817.children[61] = ProtoInstance1001;

ProtoInstance ProtoInstance1004 = createNode("ProtoInstance");
ProtoInstance1004.name = "Site";
ProtoInstance1004.DEF = "hanim_r_tarsal_distal_phalanx_2";
fieldValue fieldValue1005 = createNode("fieldValue");
fieldValue1005.name = "name";
fieldValue1005.value = "r_tarsal_distal_phalanx_2";
ProtoInstance1004.fieldValue = new MFNode();

ProtoInstance1004.fieldValue[0] = fieldValue1005;

fieldValue fieldValue1006 = createNode("fieldValue");
fieldValue1006.name = "translation";
fieldValue1006.value = "-0.08829999715089798 0.013399999588727951 0.13830000162124634";
ProtoInstance1004.fieldValue[1] = fieldValue1006;

fieldValue817.children[62] = ProtoInstance1004;

ProtoInstance ProtoInstance1007 = createNode("ProtoInstance");
ProtoInstance1007.name = "Site";
ProtoInstance1007.DEF = "hanim_l_knee_crease";
fieldValue fieldValue1008 = createNode("fieldValue");
fieldValue1008.name = "name";
fieldValue1008.value = "l_knee_crease";
ProtoInstance1007.fieldValue = new MFNode();

ProtoInstance1007.fieldValue[0] = fieldValue1008;

fieldValue fieldValue1009 = createNode("fieldValue");
fieldValue1009.name = "translation";
fieldValue1009.value = "0.09929999709129333 0.48809999227523804 -0.030899999663233757";
ProtoInstance1007.fieldValue[1] = fieldValue1009;

fieldValue817.children[63] = ProtoInstance1007;

ProtoInstance ProtoInstance1010 = createNode("ProtoInstance");
ProtoInstance1010.name = "Site";
ProtoInstance1010.DEF = "hanim_l_femoral_lateral_epicondyles";
fieldValue fieldValue1011 = createNode("fieldValue");
fieldValue1011.name = "name";
fieldValue1011.value = "l_femoral_lateral_epicondyles";
ProtoInstance1010.fieldValue = new MFNode();

ProtoInstance1010.fieldValue[0] = fieldValue1011;

fieldValue fieldValue1012 = createNode("fieldValue");
fieldValue1012.name = "translation";
fieldValue1012.value = "0.1597999930381775 0.4966999888420105 0.02969999983906746";
ProtoInstance1010.fieldValue[1] = fieldValue1012;

fieldValue817.children[64] = ProtoInstance1010;

ProtoInstance ProtoInstance1013 = createNode("ProtoInstance");
ProtoInstance1013.name = "Site";
ProtoInstance1013.DEF = "hanim_l_femoral_medial_epicondyles";
fieldValue fieldValue1014 = createNode("fieldValue");
fieldValue1014.name = "name";
fieldValue1014.value = "l_femoral_lateral_epicondyles";
ProtoInstance1013.fieldValue = new MFNode();

ProtoInstance1013.fieldValue[0] = fieldValue1014;

fieldValue fieldValue1015 = createNode("fieldValue");
fieldValue1015.name = "translation";
fieldValue1015.value = "0.039799999445676804 0.49459999799728394 0.030300000682473183";
ProtoInstance1013.fieldValue[1] = fieldValue1015;

fieldValue817.children[65] = ProtoInstance1013;

ProtoInstance ProtoInstance1016 = createNode("ProtoInstance");
ProtoInstance1016.name = "Site";
ProtoInstance1016.DEF = "hanim_l_tarsal_interphalangeal_phalanx_5";
fieldValue fieldValue1017 = createNode("fieldValue");
fieldValue1017.name = "name";
fieldValue1017.value = "l_tarsal_interphalangeal_phalanx_5";
ProtoInstance1016.fieldValue = new MFNode();

ProtoInstance1016.fieldValue[0] = fieldValue1017;

fieldValue fieldValue1018 = createNode("fieldValue");
fieldValue1018.name = "translation";
fieldValue1018.value = "0.18250000476837158 0.007000000216066837 0.09279999881982803";
ProtoInstance1016.fieldValue[1] = fieldValue1018;

fieldValue817.children[66] = ProtoInstance1016;

ProtoInstance ProtoInstance1019 = createNode("ProtoInstance");
ProtoInstance1019.name = "Site";
ProtoInstance1019.DEF = "hanim_l_lateral_malleolus";
fieldValue fieldValue1020 = createNode("fieldValue");
fieldValue1020.name = "name";
fieldValue1020.value = "l_lateral_malleolus";
ProtoInstance1019.fieldValue = new MFNode();

ProtoInstance1019.fieldValue[0] = fieldValue1020;

fieldValue fieldValue1021 = createNode("fieldValue");
fieldValue1021.name = "translation";
fieldValue1021.value = "0.13079999387264252 0.059700001031160355 -0.10320000350475311";
ProtoInstance1019.fieldValue[1] = fieldValue1021;

fieldValue817.children[67] = ProtoInstance1019;

ProtoInstance ProtoInstance1022 = createNode("ProtoInstance");
ProtoInstance1022.name = "Site";
ProtoInstance1022.DEF = "hanim_l_medial_malleolus";
fieldValue fieldValue1023 = createNode("fieldValue");
fieldValue1023.name = "name";
fieldValue1023.value = "l_medial_malleolus";
ProtoInstance1022.fieldValue = new MFNode();

ProtoInstance1022.fieldValue[0] = fieldValue1023;

fieldValue fieldValue1024 = createNode("fieldValue");
fieldValue1024.name = "translation";
fieldValue1024.value = "0.08900000154972076 0.07159999758005142 -0.08810000121593475";
ProtoInstance1022.fieldValue[1] = fieldValue1024;

fieldValue817.children[68] = ProtoInstance1022;

ProtoInstance ProtoInstance1025 = createNode("ProtoInstance");
ProtoInstance1025.name = "Site";
ProtoInstance1025.DEF = "hanim_l_sphyrion";
fieldValue fieldValue1026 = createNode("fieldValue");
fieldValue1026.name = "name";
fieldValue1026.value = "l_sphyrion";
ProtoInstance1025.fieldValue = new MFNode();

ProtoInstance1025.fieldValue[0] = fieldValue1026;

fieldValue fieldValue1027 = createNode("fieldValue");
fieldValue1027.name = "translation";
fieldValue1027.value = "0.08900000154972076 0.057500001043081284 -0.09430000185966492";
ProtoInstance1025.fieldValue[1] = fieldValue1027;

fieldValue817.children[69] = ProtoInstance1025;

ProtoInstance ProtoInstance1028 = createNode("ProtoInstance");
ProtoInstance1028.name = "Site";
ProtoInstance1028.DEF = "hanim_l_tarsal_interphalangeal_phalanx_1";
fieldValue fieldValue1029 = createNode("fieldValue");
fieldValue1029.name = "name";
fieldValue1029.value = "l_tarsal_interphalangeal_phalanx_1";
ProtoInstance1028.fieldValue = new MFNode();

ProtoInstance1028.fieldValue[0] = fieldValue1029;

fieldValue fieldValue1030 = createNode("fieldValue");
fieldValue1030.name = "translation";
fieldValue1030.value = "0.08160000294446945 0.02319999970495701 0.010599999688565731";
ProtoInstance1028.fieldValue[1] = fieldValue1030;

fieldValue817.children[70] = ProtoInstance1028;

ProtoInstance ProtoInstance1031 = createNode("ProtoInstance");
ProtoInstance1031.name = "Site";
ProtoInstance1031.DEF = "hanim_l_calcaneus_posterior";
fieldValue fieldValue1032 = createNode("fieldValue");
fieldValue1032.name = "name";
fieldValue1032.value = "l_calcaneus_posterior";
ProtoInstance1031.fieldValue = new MFNode();

ProtoInstance1031.fieldValue[0] = fieldValue1032;

fieldValue fieldValue1033 = createNode("fieldValue");
fieldValue1033.name = "translation";
fieldValue1033.value = "0.09740000218153 0.02590000070631504 -0.11710000038146973";
ProtoInstance1031.fieldValue[1] = fieldValue1033;

fieldValue817.children[71] = ProtoInstance1031;

ProtoInstance ProtoInstance1034 = createNode("ProtoInstance");
ProtoInstance1034.name = "Site";
ProtoInstance1034.DEF = "hanim_l_tarsal_distal_phalanx_2";
fieldValue fieldValue1035 = createNode("fieldValue");
fieldValue1035.name = "name";
fieldValue1035.value = "l_tarsal_distal_phalanx_2";
ProtoInstance1034.fieldValue = new MFNode();

ProtoInstance1034.fieldValue[0] = fieldValue1035;

fieldValue fieldValue1036 = createNode("fieldValue");
fieldValue1036.name = "translation";
fieldValue1036.value = "0.11949999630451202 0.007899999618530273 0.14329999685287476";
ProtoInstance1034.fieldValue[1] = fieldValue1036;

fieldValue817.children[72] = ProtoInstance1034;

ProtoInstance ProtoInstance1037 = createNode("ProtoInstance");
ProtoInstance1037.name = "Site";
ProtoInstance1037.DEF = "hanim_crotch";
fieldValue fieldValue1038 = createNode("fieldValue");
fieldValue1038.name = "name";
fieldValue1038.value = "crotch";
ProtoInstance1037.fieldValue = new MFNode();

ProtoInstance1037.fieldValue[0] = fieldValue1038;

fieldValue fieldValue1039 = createNode("fieldValue");
fieldValue1039.name = "translation";
fieldValue1039.value = "0.0034000000450760126 0.8266000151634216 0.025699999183416367";
ProtoInstance1037.fieldValue[1] = fieldValue1039;

fieldValue817.children[73] = ProtoInstance1037;

ProtoInstance ProtoInstance1040 = createNode("ProtoInstance");
ProtoInstance1040.name = "Site";
ProtoInstance1040.DEF = "hanim_r_neck_base";
fieldValue fieldValue1041 = createNode("fieldValue");
fieldValue1041.name = "name";
fieldValue1041.value = "r_neck_base";
ProtoInstance1040.fieldValue = new MFNode();

ProtoInstance1040.fieldValue[0] = fieldValue1041;

fieldValue fieldValue1042 = createNode("fieldValue");
fieldValue1042.name = "translation";
fieldValue1042.value = "-0.04190000146627426 1.5148999691009521 -0.02199999988079071";
ProtoInstance1040.fieldValue[1] = fieldValue1042;

fieldValue817.children[74] = ProtoInstance1040;

ProtoInstance ProtoInstance1043 = createNode("ProtoInstance");
ProtoInstance1043.name = "Site";
ProtoInstance1043.DEF = "hanim_l_neck_base";
fieldValue fieldValue1044 = createNode("fieldValue");
fieldValue1044.name = "name";
fieldValue1044.value = "l_neck_base";
ProtoInstance1043.fieldValue = new MFNode();

ProtoInstance1043.fieldValue[0] = fieldValue1044;

fieldValue fieldValue1045 = createNode("fieldValue");
fieldValue1045.name = "translation";
fieldValue1045.value = "0.06459999829530716 1.5140999555587769 -0.03799999877810478";
ProtoInstance1043.fieldValue[1] = fieldValue1045;

fieldValue817.children[75] = ProtoInstance1043;

ProtoInstance ProtoInstance1046 = createNode("ProtoInstance");
ProtoInstance1046.name = "Site";
ProtoInstance1046.DEF = "hanim_navel";
fieldValue fieldValue1047 = createNode("fieldValue");
fieldValue1047.name = "name";
fieldValue1047.value = "navel";
ProtoInstance1046.fieldValue = new MFNode();

ProtoInstance1046.fieldValue[0] = fieldValue1047;

fieldValue fieldValue1048 = createNode("fieldValue");
fieldValue1048.name = "translation";
fieldValue1048.value = "0.006899999920278788 1.09660005569458 0.10170000046491623";
ProtoInstance1046.fieldValue[1] = fieldValue1048;

fieldValue817.children[76] = ProtoInstance1046;

ProtoInstance101.fieldValue[3] = fieldValue817;

fieldValue fieldValue1049 = createNode("fieldValue");
fieldValue1049.name = "name";
fieldValue1049.value = "humanoid";
ProtoInstance101.fieldValue[4] = fieldValue1049;

fieldValue fieldValue1050 = createNode("fieldValue");
fieldValue1050.name = "info";
fieldValue1050.value = "\"authorName=Matthew T. Beitler\" \"authorEmail=beitler@graphics.cis.upenn.edu or beitler@acm.org\" \"creationDate=05/12/99\" \"copyright=Copyright 1999-2003, Matthew T. Beitler\" \"humanoidVersion=JointCenters 200x, LOA0\" \"usageRestrictions= PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED, PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided 'as-is' and without warranty of any kind, express, implied or otherwise, including without limitation, any warranty of merchantability or fitness for a particular purpose.\" \"modificationDate=08/12/03\"";
ProtoInstance101.fieldValue[5] = fieldValue1050;

children[4] = ProtoInstance101;

Group Group1051 = createNode("Group");
Group1051.DEF = "JointCenters_WorldInfo";
WorldInfo WorldInfo1052 = createNode("WorldInfo");
WorldInfo1052.title = "HANIM 200x Default Joint Centers, LOA&#8209;0";
WorldInfo1052.info = new MFString(new java.lang.String[" HANIM 200x Default Joint Centers, Level-Of-Articulation 0 --------------------------------------------------------- HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://H-Anim.org/Specifications/H-Anim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human modelling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "]);
Group1051.children = new MFNode();

Group1051.children[0] = WorldInfo1052;

children[5] = Group1051;

NavigationInfo NavigationInfo1053 = createNode("NavigationInfo");
NavigationInfo1053.avatarSize = new MFFloat(new float[0.25,1.600000023841858,0.75]);
NavigationInfo1053.speed = 1.5;
children[6] = NavigationInfo1053;

}
