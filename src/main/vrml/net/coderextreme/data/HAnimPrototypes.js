let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
//**********Human Model Protypes*********
let ProtoDeclare2 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Humanoid1_1" appinfo="The Humanoid node serves as overall container for the Joint Segment Site and Viewpoint nodes which define the skeleton geometry and landmarks of the humanoid figure. Additionally the node provides a means for defining information about the author copyright and usage restrictions of the model." documentation="http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html" ><ProtoInterface><!--HAnim v1.1 field definitions--><field name="name" accessType="inputOutput" type="SFString"></field>
<field name="version" accessType="inputOutput" appinfo="legal values: 1.1 or 2.0" type="SFString" value="1.1"></field>
<field name="humanoidVersion" accessType="inputOutput" appinfo="Version of the humanoid being modeled. Hint: HAnim version 2.0" type="SFString"></field>
<field name="info" accessType="inputOutput" type="MFString"></field>
<field name="translation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="rotation" accessType="inputOutput" type="SFRotation" value="0 0 1 0"></field>
<field name="center" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="scale" accessType="inputOutput" type="SFVec3f" value="1 1 1"></field>
<field name="scaleOrientation" accessType="inputOutput" type="SFRotation" value="0 0 1 0"></field>
<field name="bboxCenter" accessType="initializeOnly" type="SFVec3f" value="0 0 0"></field>
<field name="bboxSize" accessType="initializeOnly" type="SFVec3f" value="-1 -1 -1"></field>
<field name="humanoidBody" accessType="inputOutput" appinfo="HAnim 1.1 field container for body head. Hint: replaced by 2.0 skeleton." documentation="http://HAnim.org/Specifications/HAnim1.1/#humanoid" type="MFNode"></field>
<field name="skeleton" accessType="inputOutput" appinfo="HAnim 2.0 field container for body geometry Hint: replaces 1.1 humanoidBody" documentation="http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html" type="MFNode"></field>
<field name="joints" accessType="inputOutput" appinfo="Container field for Joint nodes" type="MFNode"></field>
<field name="segments" accessType="inputOutput" appinfo="Container field for Segment nodes" type="MFNode"></field>
<field name="sites" accessType="inputOutput" appinfo="Container field for Site nodes" type="MFNode"></field>
<field name="viewpoints" accessType="inputOutput" appinfo="Container field for Viewpoint nodes" type="MFNode"></field>
<field name="skinCoord" accessType="inputOutput" appinfo="Hint: HAnim version 2.0" type="SFNode"><!--NULL--></field>
<field name="skinNormal" accessType="inputOutput" appinfo="Hint: HAnim version 2.0" type="SFNode"><!--NULL--></field>
</ProtoInterface>
<ProtoBody><Transform DEF="HumanoidTransform"><IS><connect nodeField="translation" protoField="translation"></connect>
<connect nodeField="rotation" protoField="rotation"></connect>
<connect nodeField="center" protoField="center"></connect>
<connect nodeField="scale" protoField="scale"></connect>
<connect nodeField="scaleOrientation" protoField="scaleOrientation"></connect>
<connect nodeField="bboxCenter" protoField="bboxCenter"></connect>
<connect nodeField="bboxSize" protoField="bboxSize"></connect>
</IS>
<Group DEF="HumanoidGroup1"><IS><connect nodeField="children" protoField="humanoidBody"></connect>
</IS>
</Group>
<Group DEF="HumanoidGroup2"><IS><connect nodeField="children" protoField="skeleton"></connect>
</IS>
</Group>
<Group DEF="HumanoidGroup3"><IS><connect nodeField="children" protoField="viewpoints"></connect>
</IS>
</Group>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare2.name = "Humanoid1_1";
ProtoDeclare2.appinfo = "The Humanoid node serves as overall container for the Joint Segment Site and Viewpoint nodes which define the skeleton geometry and landmarks of the humanoid figure. Additionally the node provides a means for defining information about the author copyright and usage restrictions of the model.";
ProtoDeclare2.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html";
let ProtoInterface3 = browser.currentScene.createNode("ProtoInterface");
//HAnim v1.1 field definitions
let field4 = browser.currentScene.createNode("field");
field4.name = "name";
field4.accessType = "inputOutput";
field4.type = "SFString";
ProtoInterface3.field = new MFNode();

ProtoInterface3.field[0] = field4;

let field5 = browser.currentScene.createNode("field");
field5.name = "version";
field5.accessType = "inputOutput";
field5.appinfo = "legal values: 1.1 or 2.0";
field5.type = "SFString";
field5.value = "1.1";
ProtoInterface3.field[1] = field5;

let field6 = browser.currentScene.createNode("field");
field6.name = "humanoidVersion";
field6.accessType = "inputOutput";
field6.appinfo = "Version of the humanoid being modeled. Hint: HAnim version 2.0";
field6.type = "SFString";
ProtoInterface3.field[2] = field6;

let field7 = browser.currentScene.createNode("field");
field7.name = "info";
field7.accessType = "inputOutput";
field7.type = "MFString";
ProtoInterface3.field[3] = field7;

let field8 = browser.currentScene.createNode("field");
field8.name = "translation";
field8.accessType = "inputOutput";
field8.type = "SFVec3f";
field8.value = "0 0 0";
ProtoInterface3.field[4] = field8;

let field9 = browser.currentScene.createNode("field");
field9.name = "rotation";
field9.accessType = "inputOutput";
field9.type = "SFRotation";
field9.value = "0 0 1 0";
ProtoInterface3.field[5] = field9;

let field10 = browser.currentScene.createNode("field");
field10.name = "center";
field10.accessType = "inputOutput";
field10.type = "SFVec3f";
field10.value = "0 0 0";
ProtoInterface3.field[6] = field10;

let field11 = browser.currentScene.createNode("field");
field11.name = "scale";
field11.accessType = "inputOutput";
field11.type = "SFVec3f";
field11.value = "1 1 1";
ProtoInterface3.field[7] = field11;

let field12 = browser.currentScene.createNode("field");
field12.name = "scaleOrientation";
field12.accessType = "inputOutput";
field12.type = "SFRotation";
field12.value = "0 0 1 0";
ProtoInterface3.field[8] = field12;

let field13 = browser.currentScene.createNode("field");
field13.name = "bboxCenter";
field13.accessType = "initializeOnly";
field13.type = "SFVec3f";
field13.value = "0 0 0";
ProtoInterface3.field[9] = field13;

let field14 = browser.currentScene.createNode("field");
field14.name = "bboxSize";
field14.accessType = "initializeOnly";
field14.type = "SFVec3f";
field14.value = "-1 -1 -1";
ProtoInterface3.field[10] = field14;

let field15 = browser.currentScene.createNode("field");
field15.name = "humanoidBody";
field15.accessType = "inputOutput";
field15.appinfo = "HAnim 1.1 field container for body head. Hint: replaced by 2.0 skeleton.";
field15.documentation = "http://HAnim.org/Specifications/HAnim1.1/#humanoid";
field15.type = "MFNode";
ProtoInterface3.field[11] = field15;

let field16 = browser.currentScene.createNode("field");
field16.name = "skeleton";
field16.accessType = "inputOutput";
field16.appinfo = "HAnim 2.0 field container for body geometry Hint: replaces 1.1 humanoidBody";
field16.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html";
field16.type = "MFNode";
ProtoInterface3.field[12] = field16;

let field17 = browser.currentScene.createNode("field");
field17.name = "joints";
field17.accessType = "inputOutput";
field17.appinfo = "Container field for Joint nodes";
field17.type = "MFNode";
ProtoInterface3.field[13] = field17;

let field18 = browser.currentScene.createNode("field");
field18.name = "segments";
field18.accessType = "inputOutput";
field18.appinfo = "Container field for Segment nodes";
field18.type = "MFNode";
ProtoInterface3.field[14] = field18;

let field19 = browser.currentScene.createNode("field");
field19.name = "sites";
field19.accessType = "inputOutput";
field19.appinfo = "Container field for Site nodes";
field19.type = "MFNode";
ProtoInterface3.field[15] = field19;

let field20 = browser.currentScene.createNode("field");
field20.name = "viewpoints";
field20.accessType = "inputOutput";
field20.appinfo = "Container field for Viewpoint nodes";
field20.type = "MFNode";
ProtoInterface3.field[16] = field20;

let field21 = browser.currentScene.createNode("field");
field21.name = "skinCoord";
field21.accessType = "inputOutput";
field21.appinfo = "Hint: HAnim version 2.0";
field21.type = "SFNode";
//NULL
ProtoInterface3.field[17] = field21;

let field22 = browser.currentScene.createNode("field");
field22.name = "skinNormal";
field22.accessType = "inputOutput";
field22.appinfo = "Hint: HAnim version 2.0";
field22.type = "SFNode";
//NULL
ProtoInterface3.field[18] = field22;

ProtoDeclare2.protoInterface = ProtoInterface3;

let ProtoBody23 = browser.currentScene.createNode("ProtoBody");
let Transform24 = browser.currentScene.createNode("Transform");
Transform24.DEF = "HumanoidTransform";
let IS25 = browser.currentScene.createNode("IS");
let connect26 = browser.currentScene.createNode("connect");
connect26.nodeField = "translation";
connect26.protoField = "translation";
IS25.connect = new MFNode();

IS25.connect[0] = connect26;

let connect27 = browser.currentScene.createNode("connect");
connect27.nodeField = "rotation";
connect27.protoField = "rotation";
IS25.connect[1] = connect27;

let connect28 = browser.currentScene.createNode("connect");
connect28.nodeField = "center";
connect28.protoField = "center";
IS25.connect[2] = connect28;

let connect29 = browser.currentScene.createNode("connect");
connect29.nodeField = "scale";
connect29.protoField = "scale";
IS25.connect[3] = connect29;

let connect30 = browser.currentScene.createNode("connect");
connect30.nodeField = "scaleOrientation";
connect30.protoField = "scaleOrientation";
IS25.connect[4] = connect30;

let connect31 = browser.currentScene.createNode("connect");
connect31.nodeField = "bboxCenter";
connect31.protoField = "bboxCenter";
IS25.connect[5] = connect31;

let connect32 = browser.currentScene.createNode("connect");
connect32.nodeField = "bboxSize";
connect32.protoField = "bboxSize";
IS25.connect[6] = connect32;

Transform24.iS = IS25;

let Group33 = browser.currentScene.createNode("Group");
Group33.DEF = "HumanoidGroup1";
let IS34 = browser.currentScene.createNode("IS");
let connect35 = browser.currentScene.createNode("connect");
connect35.nodeField = "children";
connect35.protoField = "humanoidBody";
IS34.connect = new MFNode();

IS34.connect[0] = connect35;

Group33.iS = IS34;

Transform24.children = new MFNode();

Transform24.children[0] = Group33;

let Group36 = browser.currentScene.createNode("Group");
Group36.DEF = "HumanoidGroup2";
let IS37 = browser.currentScene.createNode("IS");
let connect38 = browser.currentScene.createNode("connect");
connect38.nodeField = "children";
connect38.protoField = "skeleton";
IS37.connect = new MFNode();

IS37.connect[0] = connect38;

Group36.iS = IS37;

Transform24.children[1] = Group36;

let Group39 = browser.currentScene.createNode("Group");
Group39.DEF = "HumanoidGroup3";
let IS40 = browser.currentScene.createNode("IS");
let connect41 = browser.currentScene.createNode("connect");
connect41.nodeField = "children";
connect41.protoField = "viewpoints";
IS40.connect = new MFNode();

IS40.connect[0] = connect41;

Group39.iS = IS40;

Transform24.children[2] = Group39;

ProtoBody23.children = new MFNode();

ProtoBody23.children[0] = Transform24;

ProtoDeclare2.protoBody = ProtoBody23;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ProtoDeclare2;

let ProtoDeclare42 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Joint" appinfo="The Joint node is used as a building block to describe the articulations of the humanoid figure. Each articulation of the humanoid figure is represented by a Joint node each of which is organized into a hierarchy that describes the overall skeleton of the humanoid." documentation="http://HAnim.org/Specifications/HAnim2001/part1/Joint.html" ><ProtoInterface><field name="name" accessType="inputOutput" type="SFString"></field>
<field name="ulimit" accessType="inputOutput" type="MFFloat"></field>
<field name="llimit" accessType="inputOutput" type="MFFloat"></field>
<field name="limitOrientation" accessType="inputOutput" type="SFRotation" value="0 0 1 0"></field>
<field name="skinCoordIndex" accessType="inputOutput" type="MFInt32"></field>
<field name="skinCoordWeight" accessType="inputOutput" type="MFFloat"></field>
<field name="stiffness" accessType="inputOutput" type="MFFloat" value="0 0 0"></field>
<field name="translation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="rotation" accessType="inputOutput" type="SFRotation" value="0 0 1 0"></field>
<field name="scale" accessType="inputOutput" type="SFVec3f" value="1 1 1"></field>
<field name="scaleOrientation" accessType="inputOutput" type="SFRotation" value="0 0 1 0"></field>
<field name="center" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="bboxCenter" accessType="initializeOnly" type="SFVec3f" value="0 0 0"></field>
<field name="bboxSize" accessType="initializeOnly" type="SFVec3f" value="-1 -1 -1"></field>
<field name="children" accessType="inputOutput" type="MFNode"></field>
<field name="addChildren" accessType="inputOnly" type="MFNode"></field>
<field name="removeChildren" accessType="inputOnly" type="MFNode"></field>
</ProtoInterface>
<ProtoBody><Transform DEF="JointTransform"><IS><connect nodeField="translation" protoField="translation"></connect>
<connect nodeField="rotation" protoField="rotation"></connect>
<connect nodeField="center" protoField="center"></connect>
<connect nodeField="scale" protoField="scale"></connect>
<connect nodeField="scaleOrientation" protoField="scaleOrientation"></connect>
<connect nodeField="bboxCenter" protoField="bboxCenter"></connect>
<connect nodeField="bboxSize" protoField="bboxSize"></connect>
<connect nodeField="children" protoField="children"></connect>
<connect nodeField="addChildren" protoField="addChildren"></connect>
<connect nodeField="removeChildren" protoField="removeChildren"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare42.name = "Joint";
ProtoDeclare42.appinfo = "The Joint node is used as a building block to describe the articulations of the humanoid figure. Each articulation of the humanoid figure is represented by a Joint node each of which is organized into a hierarchy that describes the overall skeleton of the humanoid.";
ProtoDeclare42.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Joint.html";
let ProtoInterface43 = browser.currentScene.createNode("ProtoInterface");
let field44 = browser.currentScene.createNode("field");
field44.name = "name";
field44.accessType = "inputOutput";
field44.type = "SFString";
ProtoInterface43.field = new MFNode();

ProtoInterface43.field[0] = field44;

let field45 = browser.currentScene.createNode("field");
field45.name = "ulimit";
field45.accessType = "inputOutput";
field45.type = "MFFloat";
ProtoInterface43.field[1] = field45;

let field46 = browser.currentScene.createNode("field");
field46.name = "llimit";
field46.accessType = "inputOutput";
field46.type = "MFFloat";
ProtoInterface43.field[2] = field46;

let field47 = browser.currentScene.createNode("field");
field47.name = "limitOrientation";
field47.accessType = "inputOutput";
field47.type = "SFRotation";
field47.value = "0 0 1 0";
ProtoInterface43.field[3] = field47;

let field48 = browser.currentScene.createNode("field");
field48.name = "skinCoordIndex";
field48.accessType = "inputOutput";
field48.type = "MFInt32";
ProtoInterface43.field[4] = field48;

let field49 = browser.currentScene.createNode("field");
field49.name = "skinCoordWeight";
field49.accessType = "inputOutput";
field49.type = "MFFloat";
ProtoInterface43.field[5] = field49;

let field50 = browser.currentScene.createNode("field");
field50.name = "stiffness";
field50.accessType = "inputOutput";
field50.type = "MFFloat";
field50.value = "0 0 0";
ProtoInterface43.field[6] = field50;

let field51 = browser.currentScene.createNode("field");
field51.name = "translation";
field51.accessType = "inputOutput";
field51.type = "SFVec3f";
field51.value = "0 0 0";
ProtoInterface43.field[7] = field51;

let field52 = browser.currentScene.createNode("field");
field52.name = "rotation";
field52.accessType = "inputOutput";
field52.type = "SFRotation";
field52.value = "0 0 1 0";
ProtoInterface43.field[8] = field52;

let field53 = browser.currentScene.createNode("field");
field53.name = "scale";
field53.accessType = "inputOutput";
field53.type = "SFVec3f";
field53.value = "1 1 1";
ProtoInterface43.field[9] = field53;

let field54 = browser.currentScene.createNode("field");
field54.name = "scaleOrientation";
field54.accessType = "inputOutput";
field54.type = "SFRotation";
field54.value = "0 0 1 0";
ProtoInterface43.field[10] = field54;

let field55 = browser.currentScene.createNode("field");
field55.name = "center";
field55.accessType = "inputOutput";
field55.type = "SFVec3f";
field55.value = "0 0 0";
ProtoInterface43.field[11] = field55;

let field56 = browser.currentScene.createNode("field");
field56.name = "bboxCenter";
field56.accessType = "initializeOnly";
field56.type = "SFVec3f";
field56.value = "0 0 0";
ProtoInterface43.field[12] = field56;

let field57 = browser.currentScene.createNode("field");
field57.name = "bboxSize";
field57.accessType = "initializeOnly";
field57.type = "SFVec3f";
field57.value = "-1 -1 -1";
ProtoInterface43.field[13] = field57;

let field58 = browser.currentScene.createNode("field");
field58.name = "children";
field58.accessType = "inputOutput";
field58.type = "MFNode";
ProtoInterface43.field[14] = field58;

let field59 = browser.currentScene.createNode("field");
field59.name = "addChildren";
field59.accessType = "inputOnly";
field59.type = "MFNode";
ProtoInterface43.field[15] = field59;

let field60 = browser.currentScene.createNode("field");
field60.name = "removeChildren";
field60.accessType = "inputOnly";
field60.type = "MFNode";
ProtoInterface43.field[16] = field60;

ProtoDeclare42.protoInterface = ProtoInterface43;

let ProtoBody61 = browser.currentScene.createNode("ProtoBody");
let Transform62 = browser.currentScene.createNode("Transform");
Transform62.DEF = "JointTransform";
let IS63 = browser.currentScene.createNode("IS");
let connect64 = browser.currentScene.createNode("connect");
connect64.nodeField = "translation";
connect64.protoField = "translation";
IS63.connect = new MFNode();

IS63.connect[0] = connect64;

let connect65 = browser.currentScene.createNode("connect");
connect65.nodeField = "rotation";
connect65.protoField = "rotation";
IS63.connect[1] = connect65;

let connect66 = browser.currentScene.createNode("connect");
connect66.nodeField = "center";
connect66.protoField = "center";
IS63.connect[2] = connect66;

let connect67 = browser.currentScene.createNode("connect");
connect67.nodeField = "scale";
connect67.protoField = "scale";
IS63.connect[3] = connect67;

let connect68 = browser.currentScene.createNode("connect");
connect68.nodeField = "scaleOrientation";
connect68.protoField = "scaleOrientation";
IS63.connect[4] = connect68;

let connect69 = browser.currentScene.createNode("connect");
connect69.nodeField = "bboxCenter";
connect69.protoField = "bboxCenter";
IS63.connect[5] = connect69;

let connect70 = browser.currentScene.createNode("connect");
connect70.nodeField = "bboxSize";
connect70.protoField = "bboxSize";
IS63.connect[6] = connect70;

let connect71 = browser.currentScene.createNode("connect");
connect71.nodeField = "children";
connect71.protoField = "children";
IS63.connect[7] = connect71;

let connect72 = browser.currentScene.createNode("connect");
connect72.nodeField = "addChildren";
connect72.protoField = "addChildren";
IS63.connect[8] = connect72;

let connect73 = browser.currentScene.createNode("connect");
connect73.nodeField = "removeChildren";
connect73.protoField = "removeChildren";
IS63.connect[9] = connect73;

Transform62.iS = IS63;

ProtoBody61.children = new MFNode();

ProtoBody61.children[0] = Transform62;

ProtoDeclare42.protoBody = ProtoBody61;

browser.currentScene.children[1] = ProtoDeclare42;

let ProtoDeclare74 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Segment" appinfo="The Segment node is used describe the attributes of the physical links between the joints of the humanoid figure. Each body part (pelvis thigh calf etc.) of the humanoid figure is represented by a Segment node." documentation="http://HAnim.org/Specifications/HAnim2001/part1/Segment.html" ><ProtoInterface><field name="name" accessType="inputOutput" type="SFString"></field>
<field name="mass" accessType="inputOutput" type="SFFloat" value="0"></field>
<field name="centerOfMass" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="momentsOfInertia" accessType="inputOutput" type="MFFloat" value="0 0 0 0 0 0 0 0 0"></field>
<field name="bboxCenter" accessType="initializeOnly" type="SFVec3f" value="0 0 0"></field>
<field name="bboxSize" accessType="initializeOnly" type="SFVec3f" value="-1 -1 -1"></field>
<field name="children" accessType="inputOutput" type="MFNode"></field>
<field name="addChildren" accessType="inputOnly" type="MFNode"></field>
<field name="removeChildren" accessType="inputOnly" type="MFNode"></field>
<field name="coord" accessType="inputOutput" appinfo="contains Coordinate nodes" type="SFNode"><!--NULL--></field>
<field name="displacers" accessType="inputOutput" appinfo="contains Displacer nodes" type="MFNode"></field>
</ProtoInterface>
<ProtoBody><Group DEF="SegmentGroup"><IS><connect nodeField="bboxCenter" protoField="bboxCenter"></connect>
<connect nodeField="bboxSize" protoField="bboxSize"></connect>
<connect nodeField="children" protoField="children"></connect>
<connect nodeField="addChildren" protoField="addChildren"></connect>
<connect nodeField="removeChildren" protoField="removeChildren"></connect>
</IS>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare74.name = "Segment";
ProtoDeclare74.appinfo = "The Segment node is used describe the attributes of the physical links between the joints of the humanoid figure. Each body part (pelvis thigh calf etc.) of the humanoid figure is represented by a Segment node.";
ProtoDeclare74.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Segment.html";
let ProtoInterface75 = browser.currentScene.createNode("ProtoInterface");
let field76 = browser.currentScene.createNode("field");
field76.name = "name";
field76.accessType = "inputOutput";
field76.type = "SFString";
ProtoInterface75.field = new MFNode();

ProtoInterface75.field[0] = field76;

let field77 = browser.currentScene.createNode("field");
field77.name = "mass";
field77.accessType = "inputOutput";
field77.type = "SFFloat";
field77.value = "0";
ProtoInterface75.field[1] = field77;

let field78 = browser.currentScene.createNode("field");
field78.name = "centerOfMass";
field78.accessType = "inputOutput";
field78.type = "SFVec3f";
field78.value = "0 0 0";
ProtoInterface75.field[2] = field78;

let field79 = browser.currentScene.createNode("field");
field79.name = "momentsOfInertia";
field79.accessType = "inputOutput";
field79.type = "MFFloat";
field79.value = "0 0 0 0 0 0 0 0 0";
ProtoInterface75.field[3] = field79;

let field80 = browser.currentScene.createNode("field");
field80.name = "bboxCenter";
field80.accessType = "initializeOnly";
field80.type = "SFVec3f";
field80.value = "0 0 0";
ProtoInterface75.field[4] = field80;

let field81 = browser.currentScene.createNode("field");
field81.name = "bboxSize";
field81.accessType = "initializeOnly";
field81.type = "SFVec3f";
field81.value = "-1 -1 -1";
ProtoInterface75.field[5] = field81;

let field82 = browser.currentScene.createNode("field");
field82.name = "children";
field82.accessType = "inputOutput";
field82.type = "MFNode";
ProtoInterface75.field[6] = field82;

let field83 = browser.currentScene.createNode("field");
field83.name = "addChildren";
field83.accessType = "inputOnly";
field83.type = "MFNode";
ProtoInterface75.field[7] = field83;

let field84 = browser.currentScene.createNode("field");
field84.name = "removeChildren";
field84.accessType = "inputOnly";
field84.type = "MFNode";
ProtoInterface75.field[8] = field84;

let field85 = browser.currentScene.createNode("field");
field85.name = "coord";
field85.accessType = "inputOutput";
field85.appinfo = "contains Coordinate nodes";
field85.type = "SFNode";
//NULL
ProtoInterface75.field[9] = field85;

let field86 = browser.currentScene.createNode("field");
field86.name = "displacers";
field86.accessType = "inputOutput";
field86.appinfo = "contains Displacer nodes";
field86.type = "MFNode";
ProtoInterface75.field[10] = field86;

ProtoDeclare74.protoInterface = ProtoInterface75;

let ProtoBody87 = browser.currentScene.createNode("ProtoBody");
let Group88 = browser.currentScene.createNode("Group");
Group88.DEF = "SegmentGroup";
let IS89 = browser.currentScene.createNode("IS");
let connect90 = browser.currentScene.createNode("connect");
connect90.nodeField = "bboxCenter";
connect90.protoField = "bboxCenter";
IS89.connect = new MFNode();

IS89.connect[0] = connect90;

let connect91 = browser.currentScene.createNode("connect");
connect91.nodeField = "bboxSize";
connect91.protoField = "bboxSize";
IS89.connect[1] = connect91;

let connect92 = browser.currentScene.createNode("connect");
connect92.nodeField = "children";
connect92.protoField = "children";
IS89.connect[2] = connect92;

let connect93 = browser.currentScene.createNode("connect");
connect93.nodeField = "addChildren";
connect93.protoField = "addChildren";
IS89.connect[3] = connect93;

let connect94 = browser.currentScene.createNode("connect");
connect94.nodeField = "removeChildren";
connect94.protoField = "removeChildren";
IS89.connect[4] = connect94;

Group88.iS = IS89;

ProtoBody87.children = new MFNode();

ProtoBody87.children[0] = Group88;

ProtoDeclare74.protoBody = ProtoBody87;

browser.currentScene.children[2] = ProtoDeclare74;

let ProtoDeclare95 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Site" appinfo="The Site node can be used for three purposes: (a) to define an &quot;end effector&quot; location which can be used by an inverse kinematics system (b) to define an attachment point for accessories such as jewelry and clothing and (c) to define a location for a virtual camera in the reference frame of a Segment node (such as a view &quot;through the eyes&quot; of the humanoid for use in multi-user worlds)." documentation="http://HAnim.org/Specifications/HAnim2001/part1/Site.html" ><ProtoInterface><field name="name" accessType="inputOutput" type="SFString"></field>
<field name="translation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="rotation" accessType="inputOutput" type="SFRotation" value="0 0 1 0"></field>
<field name="scale" accessType="inputOutput" type="SFVec3f" value="1 1 1"></field>
<field name="scaleOrientation" accessType="inputOutput" type="SFRotation" value="0 0 1 0"></field>
<field name="center" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="bboxCenter" accessType="initializeOnly" type="SFVec3f" value="0 0 0"></field>
<field name="bboxSize" accessType="initializeOnly" type="SFVec3f" value="-1 -1 -1"></field>
<field name="children" accessType="inputOutput" type="MFNode"></field>
<field name="addChildren" accessType="inputOnly" type="MFNode"></field>
<field name="removeChildren" accessType="inputOnly" type="MFNode"></field>
</ProtoInterface>
<ProtoBody><Transform DEF="SiteTransform"><IS><connect nodeField="translation" protoField="translation"></connect>
<connect nodeField="rotation" protoField="rotation"></connect>
<connect nodeField="center" protoField="center"></connect>
<connect nodeField="scale" protoField="scale"></connect>
<connect nodeField="scaleOrientation" protoField="scaleOrientation"></connect>
<connect nodeField="bboxCenter" protoField="bboxCenter"></connect>
<connect nodeField="bboxSize" protoField="bboxSize"></connect>
<connect nodeField="children" protoField="children"></connect>
<connect nodeField="addChildren" protoField="addChildren"></connect>
<connect nodeField="removeChildren" protoField="removeChildren"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare95.name = "Site";
ProtoDeclare95.appinfo = "The Site node can be used for three purposes: (a) to define an \"end effector\" location which can be used by an inverse kinematics system (b) to define an attachment point for accessories such as jewelry and clothing and (c) to define a location for a virtual camera in the reference frame of a Segment node (such as a view \"through the eyes\" of the humanoid for use in multi-user worlds).";
ProtoDeclare95.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Site.html";
let ProtoInterface96 = browser.currentScene.createNode("ProtoInterface");
let field97 = browser.currentScene.createNode("field");
field97.name = "name";
field97.accessType = "inputOutput";
field97.type = "SFString";
ProtoInterface96.field = new MFNode();

ProtoInterface96.field[0] = field97;

let field98 = browser.currentScene.createNode("field");
field98.name = "translation";
field98.accessType = "inputOutput";
field98.type = "SFVec3f";
field98.value = "0 0 0";
ProtoInterface96.field[1] = field98;

let field99 = browser.currentScene.createNode("field");
field99.name = "rotation";
field99.accessType = "inputOutput";
field99.type = "SFRotation";
field99.value = "0 0 1 0";
ProtoInterface96.field[2] = field99;

let field100 = browser.currentScene.createNode("field");
field100.name = "scale";
field100.accessType = "inputOutput";
field100.type = "SFVec3f";
field100.value = "1 1 1";
ProtoInterface96.field[3] = field100;

let field101 = browser.currentScene.createNode("field");
field101.name = "scaleOrientation";
field101.accessType = "inputOutput";
field101.type = "SFRotation";
field101.value = "0 0 1 0";
ProtoInterface96.field[4] = field101;

let field102 = browser.currentScene.createNode("field");
field102.name = "center";
field102.accessType = "inputOutput";
field102.type = "SFVec3f";
field102.value = "0 0 0";
ProtoInterface96.field[5] = field102;

let field103 = browser.currentScene.createNode("field");
field103.name = "bboxCenter";
field103.accessType = "initializeOnly";
field103.type = "SFVec3f";
field103.value = "0 0 0";
ProtoInterface96.field[6] = field103;

let field104 = browser.currentScene.createNode("field");
field104.name = "bboxSize";
field104.accessType = "initializeOnly";
field104.type = "SFVec3f";
field104.value = "-1 -1 -1";
ProtoInterface96.field[7] = field104;

let field105 = browser.currentScene.createNode("field");
field105.name = "children";
field105.accessType = "inputOutput";
field105.type = "MFNode";
ProtoInterface96.field[8] = field105;

let field106 = browser.currentScene.createNode("field");
field106.name = "addChildren";
field106.accessType = "inputOnly";
field106.type = "MFNode";
ProtoInterface96.field[9] = field106;

let field107 = browser.currentScene.createNode("field");
field107.name = "removeChildren";
field107.accessType = "inputOnly";
field107.type = "MFNode";
ProtoInterface96.field[10] = field107;

ProtoDeclare95.protoInterface = ProtoInterface96;

let ProtoBody108 = browser.currentScene.createNode("ProtoBody");
let Transform109 = browser.currentScene.createNode("Transform");
Transform109.DEF = "SiteTransform";
let IS110 = browser.currentScene.createNode("IS");
let connect111 = browser.currentScene.createNode("connect");
connect111.nodeField = "translation";
connect111.protoField = "translation";
IS110.connect = new MFNode();

IS110.connect[0] = connect111;

let connect112 = browser.currentScene.createNode("connect");
connect112.nodeField = "rotation";
connect112.protoField = "rotation";
IS110.connect[1] = connect112;

let connect113 = browser.currentScene.createNode("connect");
connect113.nodeField = "center";
connect113.protoField = "center";
IS110.connect[2] = connect113;

let connect114 = browser.currentScene.createNode("connect");
connect114.nodeField = "scale";
connect114.protoField = "scale";
IS110.connect[3] = connect114;

let connect115 = browser.currentScene.createNode("connect");
connect115.nodeField = "scaleOrientation";
connect115.protoField = "scaleOrientation";
IS110.connect[4] = connect115;

let connect116 = browser.currentScene.createNode("connect");
connect116.nodeField = "bboxCenter";
connect116.protoField = "bboxCenter";
IS110.connect[5] = connect116;

let connect117 = browser.currentScene.createNode("connect");
connect117.nodeField = "bboxSize";
connect117.protoField = "bboxSize";
IS110.connect[6] = connect117;

let connect118 = browser.currentScene.createNode("connect");
connect118.nodeField = "children";
connect118.protoField = "children";
IS110.connect[7] = connect118;

let connect119 = browser.currentScene.createNode("connect");
connect119.nodeField = "addChildren";
connect119.protoField = "addChildren";
IS110.connect[8] = connect119;

let connect120 = browser.currentScene.createNode("connect");
connect120.nodeField = "removeChildren";
connect120.protoField = "removeChildren";
IS110.connect[9] = connect120;

Transform109.iS = IS110;

ProtoBody108.children = new MFNode();

ProtoBody108.children[0] = Transform109;

ProtoDeclare95.protoBody = ProtoBody108;

browser.currentScene.children[3] = ProtoDeclare95;

let ProtoDeclare121 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Displacer" appinfo="A Displacer can be used in three different ways: (a) identify the vertices corresponding to a particular feature on a Segment (b) represent a particular muscular action which displaces the vertices in various directions (linearly or radially) and (c) represent a complete configuration of the vertices in a Segment." documentation="http://HAnim.org/Specifications/HAnim2001/part1/Displacer.html" ><ProtoInterface><field name="name" accessType="inputOutput" type="SFString"></field>
<field name="coordIndex" accessType="inputOutput" type="MFInt32"></field>
<field name="displacements" accessType="inputOutput" type="MFVec3f"></field>
</ProtoInterface>
<ProtoBody><WorldInfo info="&quot;null body node&quot;"></WorldInfo>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare121.name = "Displacer";
ProtoDeclare121.appinfo = "A Displacer can be used in three different ways: (a) identify the vertices corresponding to a particular feature on a Segment (b) represent a particular muscular action which displaces the vertices in various directions (linearly or radially) and (c) represent a complete configuration of the vertices in a Segment.";
ProtoDeclare121.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Displacer.html";
let ProtoInterface122 = browser.currentScene.createNode("ProtoInterface");
let field123 = browser.currentScene.createNode("field");
field123.name = "name";
field123.accessType = "inputOutput";
field123.type = "SFString";
ProtoInterface122.field = new MFNode();

ProtoInterface122.field[0] = field123;

let field124 = browser.currentScene.createNode("field");
field124.name = "coordIndex";
field124.accessType = "inputOutput";
field124.type = "MFInt32";
ProtoInterface122.field[1] = field124;

let field125 = browser.currentScene.createNode("field");
field125.name = "displacements";
field125.accessType = "inputOutput";
field125.type = "MFVec3f";
ProtoInterface122.field[2] = field125;

ProtoDeclare121.protoInterface = ProtoInterface122;

let ProtoBody126 = browser.currentScene.createNode("ProtoBody");
let WorldInfo127 = browser.currentScene.createNode("WorldInfo");
WorldInfo127.info = new MFString(new java.lang.String["null body node"]);
ProtoBody126.children = new MFNode();

ProtoBody126.children[0] = WorldInfo127;

ProtoDeclare121.protoBody = ProtoBody126;

browser.currentScene.children[4] = ProtoDeclare121;

let Shape128 = browser.currentScene.createNode("Shape");
let Text129 = browser.currentScene.createNode("Text");
Text129.string = new MFString(new java.lang.String["Humanoid Animation","(HAnim) prototype","implementations"]);
let FontStyle130 = browser.currentScene.createNode("FontStyle");
FontStyle130.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text129.fontStyle = FontStyle130;

Shape128.geometry = Text129;

let Appearance131 = browser.currentScene.createNode("Appearance");
let Material132 = browser.currentScene.createNode("Material");
Material132.ambientIntensity = 0.25;
Material132.diffuseColor = new SFColor(new float[0.795918,0.505869,0.093315]);
Material132.shininess = 0.39;
Material132.specularColor = new SFColor(new float[0.923469,0.428866,0.006369]);
//Universal Media Library: Autumn 9
Appearance131.material = Material132;

Shape128.appearance = Appearance131;

browser.currentScene.children[5] = Shape128;

