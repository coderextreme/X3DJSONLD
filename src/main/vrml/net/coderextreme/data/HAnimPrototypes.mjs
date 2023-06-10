let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let head1 = browser.currentScene.createNode("head");
//Originally these fundamental prototypes were defined in InterchangableActorsViaDynamicRoutingPrototypes.x3d
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "HAnimPrototypes.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "description";
meta3.content = "Example implementation of X3D Humanoid Animation (HAnim) nodes using X3D prototypes.";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "warning";
meta4.content = "These are developmental examples that can assist X3D player implementations and support interoperability. They are not intended for author use in regular X3D scenes.";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "warning";
meta5.content = "Developer note: names for these HAnim Prototypes need to be corrected if used internally in an X3D player implementation (e.g. Joint to HAnimJoint).";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "warning";
meta6.content = "Need support for skin";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "creator";
meta7.content = "Ozan APAYDIN, Don Brutzman";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "translator";
meta8.content = "Ozan APAYDIN, Don Brutzman";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "created";
meta9.content = "15 November 2001";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "modified";
meta10.content = "23 May 2020";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "TODO";
meta11.content = "upgrade to match support requirements for HAnim 2.2";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "reference";
meta12.content = "https://www.web3d.org/files/specifications/19774/V1.0/HAnim/HAnim.html";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "reference";
meta13.content = "https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/hanim.html";
head1.meta[11] = meta13;

let meta14 = browser.currentScene.createNode("meta");
meta14.name = "reference";
meta14.content = "http://HAnim.org/Models/HAnim2001/boxman/boxman.wrl";
head1.meta[12] = meta14;

let meta15 = browser.currentScene.createNode("meta");
meta15.name = "reference";
meta15.content = "http://HAnim.org/Specifications/HAnim2001";
head1.meta[13] = meta15;

let meta16 = browser.currentScene.createNode("meta");
meta16.name = "reference";
meta16.content = "http://www.HAnim.org";
head1.meta[14] = meta16;

let meta17 = browser.currentScene.createNode("meta");
meta17.name = "reference";
meta17.content = "http://HAnim.org/Models";
head1.meta[15] = meta17;

let meta18 = browser.currentScene.createNode("meta");
meta18.name = "reference";
meta18.content = "http://HAnim.org/Specifications";
head1.meta[16] = meta18;

let meta19 = browser.currentScene.createNode("meta");
meta19.name = "reference";
meta19.content = "InterchangableActorsViaDynamicRoutingPrototypes.x3d";
head1.meta[17] = meta19;

let meta20 = browser.currentScene.createNode("meta");
meta20.name = "identifier";
meta20.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/HAnimPrototypes.x3d";
head1.meta[18] = meta20;

let meta21 = browser.currentScene.createNode("meta");
meta21.name = "generator";
meta21.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[19] = meta21;

let meta22 = browser.currentScene.createNode("meta");
meta22.name = "license";
meta22.content = "../license.html";
head1.meta[20] = meta22;

head = head1;

//**********Human Model Protypes*********
let ProtoDeclare24 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
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
ProtoDeclare24.name = "Humanoid1_1";
ProtoDeclare24.appinfo = "The Humanoid node serves as overall container for the Joint Segment Site and Viewpoint nodes which define the skeleton geometry and landmarks of the humanoid figure. Additionally the node provides a means for defining information about the author copyright and usage restrictions of the model.";
ProtoDeclare24.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html";
let ProtoInterface25 = browser.currentScene.createNode("ProtoInterface");
//HAnim v1.1 field definitions
let field26 = browser.currentScene.createNode("field");
field26.name = "name";
field26.accessType = "inputOutput";
field26.type = "SFString";
ProtoInterface25.field = new MFNode();

ProtoInterface25.field[0] = field26;

let field27 = browser.currentScene.createNode("field");
field27.name = "version";
field27.accessType = "inputOutput";
field27.appinfo = "legal values: 1.1 or 2.0";
field27.type = "SFString";
field27.value = "1.1";
ProtoInterface25.field[1] = field27;

let field28 = browser.currentScene.createNode("field");
field28.name = "humanoidVersion";
field28.accessType = "inputOutput";
field28.appinfo = "Version of the humanoid being modeled. Hint: HAnim version 2.0";
field28.type = "SFString";
ProtoInterface25.field[2] = field28;

let field29 = browser.currentScene.createNode("field");
field29.name = "info";
field29.accessType = "inputOutput";
field29.type = "MFString";
ProtoInterface25.field[3] = field29;

let field30 = browser.currentScene.createNode("field");
field30.name = "translation";
field30.accessType = "inputOutput";
field30.type = "SFVec3f";
field30.value = "0 0 0";
ProtoInterface25.field[4] = field30;

let field31 = browser.currentScene.createNode("field");
field31.name = "rotation";
field31.accessType = "inputOutput";
field31.type = "SFRotation";
field31.value = "0 0 1 0";
ProtoInterface25.field[5] = field31;

let field32 = browser.currentScene.createNode("field");
field32.name = "center";
field32.accessType = "inputOutput";
field32.type = "SFVec3f";
field32.value = "0 0 0";
ProtoInterface25.field[6] = field32;

let field33 = browser.currentScene.createNode("field");
field33.name = "scale";
field33.accessType = "inputOutput";
field33.type = "SFVec3f";
field33.value = "1 1 1";
ProtoInterface25.field[7] = field33;

let field34 = browser.currentScene.createNode("field");
field34.name = "scaleOrientation";
field34.accessType = "inputOutput";
field34.type = "SFRotation";
field34.value = "0 0 1 0";
ProtoInterface25.field[8] = field34;

let field35 = browser.currentScene.createNode("field");
field35.name = "bboxCenter";
field35.accessType = "initializeOnly";
field35.type = "SFVec3f";
field35.value = "0 0 0";
ProtoInterface25.field[9] = field35;

let field36 = browser.currentScene.createNode("field");
field36.name = "bboxSize";
field36.accessType = "initializeOnly";
field36.type = "SFVec3f";
field36.value = "-1 -1 -1";
ProtoInterface25.field[10] = field36;

let field37 = browser.currentScene.createNode("field");
field37.name = "humanoidBody";
field37.accessType = "inputOutput";
field37.appinfo = "HAnim 1.1 field container for body head. Hint: replaced by 2.0 skeleton.";
field37.documentation = "http://HAnim.org/Specifications/HAnim1.1/#humanoid";
field37.type = "MFNode";
ProtoInterface25.field[11] = field37;

let field38 = browser.currentScene.createNode("field");
field38.name = "skeleton";
field38.accessType = "inputOutput";
field38.appinfo = "HAnim 2.0 field container for body geometry Hint: replaces 1.1 humanoidBody";
field38.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html";
field38.type = "MFNode";
ProtoInterface25.field[12] = field38;

let field39 = browser.currentScene.createNode("field");
field39.name = "joints";
field39.accessType = "inputOutput";
field39.appinfo = "Container field for Joint nodes";
field39.type = "MFNode";
ProtoInterface25.field[13] = field39;

let field40 = browser.currentScene.createNode("field");
field40.name = "segments";
field40.accessType = "inputOutput";
field40.appinfo = "Container field for Segment nodes";
field40.type = "MFNode";
ProtoInterface25.field[14] = field40;

let field41 = browser.currentScene.createNode("field");
field41.name = "sites";
field41.accessType = "inputOutput";
field41.appinfo = "Container field for Site nodes";
field41.type = "MFNode";
ProtoInterface25.field[15] = field41;

let field42 = browser.currentScene.createNode("field");
field42.name = "viewpoints";
field42.accessType = "inputOutput";
field42.appinfo = "Container field for Viewpoint nodes";
field42.type = "MFNode";
ProtoInterface25.field[16] = field42;

let field43 = browser.currentScene.createNode("field");
field43.name = "skinCoord";
field43.accessType = "inputOutput";
field43.appinfo = "Hint: HAnim version 2.0";
field43.type = "SFNode";
//NULL
ProtoInterface25.field[17] = field43;

let field44 = browser.currentScene.createNode("field");
field44.name = "skinNormal";
field44.accessType = "inputOutput";
field44.appinfo = "Hint: HAnim version 2.0";
field44.type = "SFNode";
//NULL
ProtoInterface25.field[18] = field44;

ProtoDeclare24.protoInterface = ProtoInterface25;

let ProtoBody45 = browser.currentScene.createNode("ProtoBody");
let Transform46 = browser.currentScene.createNode("Transform");
Transform46.DEF = "HumanoidTransform";
let IS47 = browser.currentScene.createNode("IS");
let connect48 = browser.currentScene.createNode("connect");
connect48.nodeField = "translation";
connect48.protoField = "translation";
IS47.connect = new MFNode();

IS47.connect[0] = connect48;

let connect49 = browser.currentScene.createNode("connect");
connect49.nodeField = "rotation";
connect49.protoField = "rotation";
IS47.connect[1] = connect49;

let connect50 = browser.currentScene.createNode("connect");
connect50.nodeField = "center";
connect50.protoField = "center";
IS47.connect[2] = connect50;

let connect51 = browser.currentScene.createNode("connect");
connect51.nodeField = "scale";
connect51.protoField = "scale";
IS47.connect[3] = connect51;

let connect52 = browser.currentScene.createNode("connect");
connect52.nodeField = "scaleOrientation";
connect52.protoField = "scaleOrientation";
IS47.connect[4] = connect52;

let connect53 = browser.currentScene.createNode("connect");
connect53.nodeField = "bboxCenter";
connect53.protoField = "bboxCenter";
IS47.connect[5] = connect53;

let connect54 = browser.currentScene.createNode("connect");
connect54.nodeField = "bboxSize";
connect54.protoField = "bboxSize";
IS47.connect[6] = connect54;

Transform46.iS = IS47;

let Group55 = browser.currentScene.createNode("Group");
Group55.DEF = "HumanoidGroup1";
let IS56 = browser.currentScene.createNode("IS");
let connect57 = browser.currentScene.createNode("connect");
connect57.nodeField = "children";
connect57.protoField = "humanoidBody";
IS56.connect = new MFNode();

IS56.connect[0] = connect57;

Group55.iS = IS56;

Transform46.children = new MFNode();

Transform46.children[0] = Group55;

let Group58 = browser.currentScene.createNode("Group");
Group58.DEF = "HumanoidGroup2";
let IS59 = browser.currentScene.createNode("IS");
let connect60 = browser.currentScene.createNode("connect");
connect60.nodeField = "children";
connect60.protoField = "skeleton";
IS59.connect = new MFNode();

IS59.connect[0] = connect60;

Group58.iS = IS59;

Transform46.children[1] = Group58;

let Group61 = browser.currentScene.createNode("Group");
Group61.DEF = "HumanoidGroup3";
let IS62 = browser.currentScene.createNode("IS");
let connect63 = browser.currentScene.createNode("connect");
connect63.nodeField = "children";
connect63.protoField = "viewpoints";
IS62.connect = new MFNode();

IS62.connect[0] = connect63;

Group61.iS = IS62;

Transform46.children[2] = Group61;

ProtoBody45.children = new MFNode();

ProtoBody45.children[0] = Transform46;

ProtoDeclare24.protoBody = ProtoBody45;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ProtoDeclare24;

let ProtoDeclare64 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
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
ProtoDeclare64.name = "Joint";
ProtoDeclare64.appinfo = "The Joint node is used as a building block to describe the articulations of the humanoid figure. Each articulation of the humanoid figure is represented by a Joint node each of which is organized into a hierarchy that describes the overall skeleton of the humanoid.";
ProtoDeclare64.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Joint.html";
let ProtoInterface65 = browser.currentScene.createNode("ProtoInterface");
let field66 = browser.currentScene.createNode("field");
field66.name = "name";
field66.accessType = "inputOutput";
field66.type = "SFString";
ProtoInterface65.field = new MFNode();

ProtoInterface65.field[0] = field66;

let field67 = browser.currentScene.createNode("field");
field67.name = "ulimit";
field67.accessType = "inputOutput";
field67.type = "MFFloat";
ProtoInterface65.field[1] = field67;

let field68 = browser.currentScene.createNode("field");
field68.name = "llimit";
field68.accessType = "inputOutput";
field68.type = "MFFloat";
ProtoInterface65.field[2] = field68;

let field69 = browser.currentScene.createNode("field");
field69.name = "limitOrientation";
field69.accessType = "inputOutput";
field69.type = "SFRotation";
field69.value = "0 0 1 0";
ProtoInterface65.field[3] = field69;

let field70 = browser.currentScene.createNode("field");
field70.name = "skinCoordIndex";
field70.accessType = "inputOutput";
field70.type = "MFInt32";
ProtoInterface65.field[4] = field70;

let field71 = browser.currentScene.createNode("field");
field71.name = "skinCoordWeight";
field71.accessType = "inputOutput";
field71.type = "MFFloat";
ProtoInterface65.field[5] = field71;

let field72 = browser.currentScene.createNode("field");
field72.name = "stiffness";
field72.accessType = "inputOutput";
field72.type = "MFFloat";
field72.value = "0 0 0";
ProtoInterface65.field[6] = field72;

let field73 = browser.currentScene.createNode("field");
field73.name = "translation";
field73.accessType = "inputOutput";
field73.type = "SFVec3f";
field73.value = "0 0 0";
ProtoInterface65.field[7] = field73;

let field74 = browser.currentScene.createNode("field");
field74.name = "rotation";
field74.accessType = "inputOutput";
field74.type = "SFRotation";
field74.value = "0 0 1 0";
ProtoInterface65.field[8] = field74;

let field75 = browser.currentScene.createNode("field");
field75.name = "scale";
field75.accessType = "inputOutput";
field75.type = "SFVec3f";
field75.value = "1 1 1";
ProtoInterface65.field[9] = field75;

let field76 = browser.currentScene.createNode("field");
field76.name = "scaleOrientation";
field76.accessType = "inputOutput";
field76.type = "SFRotation";
field76.value = "0 0 1 0";
ProtoInterface65.field[10] = field76;

let field77 = browser.currentScene.createNode("field");
field77.name = "center";
field77.accessType = "inputOutput";
field77.type = "SFVec3f";
field77.value = "0 0 0";
ProtoInterface65.field[11] = field77;

let field78 = browser.currentScene.createNode("field");
field78.name = "bboxCenter";
field78.accessType = "initializeOnly";
field78.type = "SFVec3f";
field78.value = "0 0 0";
ProtoInterface65.field[12] = field78;

let field79 = browser.currentScene.createNode("field");
field79.name = "bboxSize";
field79.accessType = "initializeOnly";
field79.type = "SFVec3f";
field79.value = "-1 -1 -1";
ProtoInterface65.field[13] = field79;

let field80 = browser.currentScene.createNode("field");
field80.name = "children";
field80.accessType = "inputOutput";
field80.type = "MFNode";
ProtoInterface65.field[14] = field80;

let field81 = browser.currentScene.createNode("field");
field81.name = "addChildren";
field81.accessType = "inputOnly";
field81.type = "MFNode";
ProtoInterface65.field[15] = field81;

let field82 = browser.currentScene.createNode("field");
field82.name = "removeChildren";
field82.accessType = "inputOnly";
field82.type = "MFNode";
ProtoInterface65.field[16] = field82;

ProtoDeclare64.protoInterface = ProtoInterface65;

let ProtoBody83 = browser.currentScene.createNode("ProtoBody");
let Transform84 = browser.currentScene.createNode("Transform");
Transform84.DEF = "JointTransform";
let IS85 = browser.currentScene.createNode("IS");
let connect86 = browser.currentScene.createNode("connect");
connect86.nodeField = "translation";
connect86.protoField = "translation";
IS85.connect = new MFNode();

IS85.connect[0] = connect86;

let connect87 = browser.currentScene.createNode("connect");
connect87.nodeField = "rotation";
connect87.protoField = "rotation";
IS85.connect[1] = connect87;

let connect88 = browser.currentScene.createNode("connect");
connect88.nodeField = "center";
connect88.protoField = "center";
IS85.connect[2] = connect88;

let connect89 = browser.currentScene.createNode("connect");
connect89.nodeField = "scale";
connect89.protoField = "scale";
IS85.connect[3] = connect89;

let connect90 = browser.currentScene.createNode("connect");
connect90.nodeField = "scaleOrientation";
connect90.protoField = "scaleOrientation";
IS85.connect[4] = connect90;

let connect91 = browser.currentScene.createNode("connect");
connect91.nodeField = "bboxCenter";
connect91.protoField = "bboxCenter";
IS85.connect[5] = connect91;

let connect92 = browser.currentScene.createNode("connect");
connect92.nodeField = "bboxSize";
connect92.protoField = "bboxSize";
IS85.connect[6] = connect92;

let connect93 = browser.currentScene.createNode("connect");
connect93.nodeField = "children";
connect93.protoField = "children";
IS85.connect[7] = connect93;

let connect94 = browser.currentScene.createNode("connect");
connect94.nodeField = "addChildren";
connect94.protoField = "addChildren";
IS85.connect[8] = connect94;

let connect95 = browser.currentScene.createNode("connect");
connect95.nodeField = "removeChildren";
connect95.protoField = "removeChildren";
IS85.connect[9] = connect95;

Transform84.iS = IS85;

ProtoBody83.children = new MFNode();

ProtoBody83.children[0] = Transform84;

ProtoDeclare64.protoBody = ProtoBody83;

browser.currentScene.children[1] = ProtoDeclare64;

let ProtoDeclare96 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
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
ProtoDeclare96.name = "Segment";
ProtoDeclare96.appinfo = "The Segment node is used describe the attributes of the physical links between the joints of the humanoid figure. Each body part (pelvis thigh calf etc.) of the humanoid figure is represented by a Segment node.";
ProtoDeclare96.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Segment.html";
let ProtoInterface97 = browser.currentScene.createNode("ProtoInterface");
let field98 = browser.currentScene.createNode("field");
field98.name = "name";
field98.accessType = "inputOutput";
field98.type = "SFString";
ProtoInterface97.field = new MFNode();

ProtoInterface97.field[0] = field98;

let field99 = browser.currentScene.createNode("field");
field99.name = "mass";
field99.accessType = "inputOutput";
field99.type = "SFFloat";
field99.value = "0";
ProtoInterface97.field[1] = field99;

let field100 = browser.currentScene.createNode("field");
field100.name = "centerOfMass";
field100.accessType = "inputOutput";
field100.type = "SFVec3f";
field100.value = "0 0 0";
ProtoInterface97.field[2] = field100;

let field101 = browser.currentScene.createNode("field");
field101.name = "momentsOfInertia";
field101.accessType = "inputOutput";
field101.type = "MFFloat";
field101.value = "0 0 0 0 0 0 0 0 0";
ProtoInterface97.field[3] = field101;

let field102 = browser.currentScene.createNode("field");
field102.name = "bboxCenter";
field102.accessType = "initializeOnly";
field102.type = "SFVec3f";
field102.value = "0 0 0";
ProtoInterface97.field[4] = field102;

let field103 = browser.currentScene.createNode("field");
field103.name = "bboxSize";
field103.accessType = "initializeOnly";
field103.type = "SFVec3f";
field103.value = "-1 -1 -1";
ProtoInterface97.field[5] = field103;

let field104 = browser.currentScene.createNode("field");
field104.name = "children";
field104.accessType = "inputOutput";
field104.type = "MFNode";
ProtoInterface97.field[6] = field104;

let field105 = browser.currentScene.createNode("field");
field105.name = "addChildren";
field105.accessType = "inputOnly";
field105.type = "MFNode";
ProtoInterface97.field[7] = field105;

let field106 = browser.currentScene.createNode("field");
field106.name = "removeChildren";
field106.accessType = "inputOnly";
field106.type = "MFNode";
ProtoInterface97.field[8] = field106;

let field107 = browser.currentScene.createNode("field");
field107.name = "coord";
field107.accessType = "inputOutput";
field107.appinfo = "contains Coordinate nodes";
field107.type = "SFNode";
//NULL
ProtoInterface97.field[9] = field107;

let field108 = browser.currentScene.createNode("field");
field108.name = "displacers";
field108.accessType = "inputOutput";
field108.appinfo = "contains Displacer nodes";
field108.type = "MFNode";
ProtoInterface97.field[10] = field108;

ProtoDeclare96.protoInterface = ProtoInterface97;

let ProtoBody109 = browser.currentScene.createNode("ProtoBody");
let Group110 = browser.currentScene.createNode("Group");
Group110.DEF = "SegmentGroup";
let IS111 = browser.currentScene.createNode("IS");
let connect112 = browser.currentScene.createNode("connect");
connect112.nodeField = "bboxCenter";
connect112.protoField = "bboxCenter";
IS111.connect = new MFNode();

IS111.connect[0] = connect112;

let connect113 = browser.currentScene.createNode("connect");
connect113.nodeField = "bboxSize";
connect113.protoField = "bboxSize";
IS111.connect[1] = connect113;

let connect114 = browser.currentScene.createNode("connect");
connect114.nodeField = "children";
connect114.protoField = "children";
IS111.connect[2] = connect114;

let connect115 = browser.currentScene.createNode("connect");
connect115.nodeField = "addChildren";
connect115.protoField = "addChildren";
IS111.connect[3] = connect115;

let connect116 = browser.currentScene.createNode("connect");
connect116.nodeField = "removeChildren";
connect116.protoField = "removeChildren";
IS111.connect[4] = connect116;

Group110.iS = IS111;

ProtoBody109.children = new MFNode();

ProtoBody109.children[0] = Group110;

ProtoDeclare96.protoBody = ProtoBody109;

browser.currentScene.children[2] = ProtoDeclare96;

let ProtoDeclare117 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
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
ProtoDeclare117.name = "Site";
ProtoDeclare117.appinfo = "The Site node can be used for three purposes: (a) to define an \"end effector\" location which can be used by an inverse kinematics system (b) to define an attachment point for accessories such as jewelry and clothing and (c) to define a location for a virtual camera in the reference frame of a Segment node (such as a view \"through the eyes\" of the humanoid for use in multi-user worlds).";
ProtoDeclare117.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Site.html";
let ProtoInterface118 = browser.currentScene.createNode("ProtoInterface");
let field119 = browser.currentScene.createNode("field");
field119.name = "name";
field119.accessType = "inputOutput";
field119.type = "SFString";
ProtoInterface118.field = new MFNode();

ProtoInterface118.field[0] = field119;

let field120 = browser.currentScene.createNode("field");
field120.name = "translation";
field120.accessType = "inputOutput";
field120.type = "SFVec3f";
field120.value = "0 0 0";
ProtoInterface118.field[1] = field120;

let field121 = browser.currentScene.createNode("field");
field121.name = "rotation";
field121.accessType = "inputOutput";
field121.type = "SFRotation";
field121.value = "0 0 1 0";
ProtoInterface118.field[2] = field121;

let field122 = browser.currentScene.createNode("field");
field122.name = "scale";
field122.accessType = "inputOutput";
field122.type = "SFVec3f";
field122.value = "1 1 1";
ProtoInterface118.field[3] = field122;

let field123 = browser.currentScene.createNode("field");
field123.name = "scaleOrientation";
field123.accessType = "inputOutput";
field123.type = "SFRotation";
field123.value = "0 0 1 0";
ProtoInterface118.field[4] = field123;

let field124 = browser.currentScene.createNode("field");
field124.name = "center";
field124.accessType = "inputOutput";
field124.type = "SFVec3f";
field124.value = "0 0 0";
ProtoInterface118.field[5] = field124;

let field125 = browser.currentScene.createNode("field");
field125.name = "bboxCenter";
field125.accessType = "initializeOnly";
field125.type = "SFVec3f";
field125.value = "0 0 0";
ProtoInterface118.field[6] = field125;

let field126 = browser.currentScene.createNode("field");
field126.name = "bboxSize";
field126.accessType = "initializeOnly";
field126.type = "SFVec3f";
field126.value = "-1 -1 -1";
ProtoInterface118.field[7] = field126;

let field127 = browser.currentScene.createNode("field");
field127.name = "children";
field127.accessType = "inputOutput";
field127.type = "MFNode";
ProtoInterface118.field[8] = field127;

let field128 = browser.currentScene.createNode("field");
field128.name = "addChildren";
field128.accessType = "inputOnly";
field128.type = "MFNode";
ProtoInterface118.field[9] = field128;

let field129 = browser.currentScene.createNode("field");
field129.name = "removeChildren";
field129.accessType = "inputOnly";
field129.type = "MFNode";
ProtoInterface118.field[10] = field129;

ProtoDeclare117.protoInterface = ProtoInterface118;

let ProtoBody130 = browser.currentScene.createNode("ProtoBody");
let Transform131 = browser.currentScene.createNode("Transform");
Transform131.DEF = "SiteTransform";
let IS132 = browser.currentScene.createNode("IS");
let connect133 = browser.currentScene.createNode("connect");
connect133.nodeField = "translation";
connect133.protoField = "translation";
IS132.connect = new MFNode();

IS132.connect[0] = connect133;

let connect134 = browser.currentScene.createNode("connect");
connect134.nodeField = "rotation";
connect134.protoField = "rotation";
IS132.connect[1] = connect134;

let connect135 = browser.currentScene.createNode("connect");
connect135.nodeField = "center";
connect135.protoField = "center";
IS132.connect[2] = connect135;

let connect136 = browser.currentScene.createNode("connect");
connect136.nodeField = "scale";
connect136.protoField = "scale";
IS132.connect[3] = connect136;

let connect137 = browser.currentScene.createNode("connect");
connect137.nodeField = "scaleOrientation";
connect137.protoField = "scaleOrientation";
IS132.connect[4] = connect137;

let connect138 = browser.currentScene.createNode("connect");
connect138.nodeField = "bboxCenter";
connect138.protoField = "bboxCenter";
IS132.connect[5] = connect138;

let connect139 = browser.currentScene.createNode("connect");
connect139.nodeField = "bboxSize";
connect139.protoField = "bboxSize";
IS132.connect[6] = connect139;

let connect140 = browser.currentScene.createNode("connect");
connect140.nodeField = "children";
connect140.protoField = "children";
IS132.connect[7] = connect140;

let connect141 = browser.currentScene.createNode("connect");
connect141.nodeField = "addChildren";
connect141.protoField = "addChildren";
IS132.connect[8] = connect141;

let connect142 = browser.currentScene.createNode("connect");
connect142.nodeField = "removeChildren";
connect142.protoField = "removeChildren";
IS132.connect[9] = connect142;

Transform131.iS = IS132;

ProtoBody130.children = new MFNode();

ProtoBody130.children[0] = Transform131;

ProtoDeclare117.protoBody = ProtoBody130;

browser.currentScene.children[3] = ProtoDeclare117;

let ProtoDeclare143 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="Displacer" appinfo="A Displacer can be used in three different ways: (a) identify the vertices corresponding to a particular feature on a Segment (b) represent a particular muscular action which displaces the vertices in various directions (linearly or radially) and (c) represent a complete configuration of the vertices in a Segment." documentation="http://HAnim.org/Specifications/HAnim2001/part1/Displacer.html" ><ProtoInterface><field name="name" accessType="inputOutput" type="SFString"></field>
<field name="coordIndex" accessType="inputOutput" type="MFInt32"></field>
<field name="displacements" accessType="inputOutput" type="MFVec3f"></field>
</ProtoInterface>
<ProtoBody><WorldInfo info="&quot;null body node&quot;"></WorldInfo>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare143.name = "Displacer";
ProtoDeclare143.appinfo = "A Displacer can be used in three different ways: (a) identify the vertices corresponding to a particular feature on a Segment (b) represent a particular muscular action which displaces the vertices in various directions (linearly or radially) and (c) represent a complete configuration of the vertices in a Segment.";
ProtoDeclare143.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Displacer.html";
let ProtoInterface144 = browser.currentScene.createNode("ProtoInterface");
let field145 = browser.currentScene.createNode("field");
field145.name = "name";
field145.accessType = "inputOutput";
field145.type = "SFString";
ProtoInterface144.field = new MFNode();

ProtoInterface144.field[0] = field145;

let field146 = browser.currentScene.createNode("field");
field146.name = "coordIndex";
field146.accessType = "inputOutput";
field146.type = "MFInt32";
ProtoInterface144.field[1] = field146;

let field147 = browser.currentScene.createNode("field");
field147.name = "displacements";
field147.accessType = "inputOutput";
field147.type = "MFVec3f";
ProtoInterface144.field[2] = field147;

ProtoDeclare143.protoInterface = ProtoInterface144;

let ProtoBody148 = browser.currentScene.createNode("ProtoBody");
let WorldInfo149 = browser.currentScene.createNode("WorldInfo");
WorldInfo149.info = new MFString(new java.lang.String["null body node"]);
ProtoBody148.children = new MFNode();

ProtoBody148.children[0] = WorldInfo149;

ProtoDeclare143.protoBody = ProtoBody148;

browser.currentScene.children[4] = ProtoDeclare143;

let Shape150 = browser.currentScene.createNode("Shape");
let Text151 = browser.currentScene.createNode("Text");
Text151.string = new MFString(new java.lang.String["Humanoid Animation","(HAnim) prototype","implementations"]);
let FontStyle152 = browser.currentScene.createNode("FontStyle");
FontStyle152.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text151.fontStyle = FontStyle152;

Shape150.geometry = Text151;

let Appearance153 = browser.currentScene.createNode("Appearance");
let Material154 = browser.currentScene.createNode("Material");
Material154.ambientIntensity = 0.25;
Material154.diffuseColor = new SFColor(new float[0.795918,0.505869,0.093315]);
Material154.shininess = 0.39;
Material154.specularColor = new SFColor(new float[0.923469,0.428866,0.006369]);
//Universal Media Library: Autumn 9
Appearance153.material = Material154;

Shape150.appearance = Appearance153;

browser.currentScene.children[5] = Shape150;

